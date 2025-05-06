task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 1; // 0x270 PushI
	if(var_20_int == 0) goto Label_2674; // 0x271 JumpB
	func_5119(); // 0x273 NEW_2
	var_22_int = 40087; // 0x275 PushI
	var_23_bool = var_19_bool == var_22_int; // 0x276 Eq
	if(var_23_bool == 0) goto Label_637; // 0x277 JumpB
	var_24_object = Obj(); var_25_object = Obj(); // 0x278 PushV
	var_24_object = var_1_object; // 0x279 MovT
	var_25_object = var_0_object; // 0x27a MovT
	func_5294(); // 0x27b NEW_2
	
Label_637:
	var_27_int = 45510; // 0x27d PushI
	var_28_bool = var_19_bool == var_27_int; // 0x27e Eq
	if(var_28_bool == 0) goto Label_645; // 0x27f JumpB
	var_29_object = Obj(); var_30_object = Obj(); // 0x280 PushV
	var_29_object = var_1_object; // 0x281 MovT
	var_30_object = var_0_object; // 0x282 MovT
	func_5294(); // 0x283 NEW_2
	
Label_645:
	var_31_int = 45517; // 0x285 PushI
	var_32_bool = var_19_bool == var_31_int; // 0x286 Eq
	if(var_32_bool == 0) goto Label_653; // 0x287 JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0x288 PushV
	var_33_object = var_1_object; // 0x289 MovT
	var_34_object = var_0_object; // 0x28a MovT
	func_5294(); // 0x28b NEW_2
	
Label_653:
	var_35_int = 40085; // 0x28d PushI
	var_36_bool = var_19_bool == var_35_int; // 0x28e Eq
	if(var_36_bool == 0) goto Label_661; // 0x28f JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x290 PushV
	var_37_object = var_1_object; // 0x291 MovT
	var_38_object = var_0_object; // 0x292 MovT
	func_5294(); // 0x293 NEW_2
	
Label_661:
	var_39_int = 40086; // 0x295 PushI
	var_40_bool = var_19_bool == var_39_int; // 0x296 Eq
	if(var_40_bool == 0) goto Label_669; // 0x297 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x298 PushV
	var_41_object = var_1_object; // 0x299 MovT
	var_42_object = var_0_object; // 0x29a MovT
	func_5294(); // 0x29b NEW_2
	
Label_669:
	var_43_int = 45493; // 0x29d PushI
	var_44_bool = var_18_object == var_43_int; // 0x29e Eq
	if(var_44_bool == 0) goto Label_1161; // 0x29f JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x2a0 PushV
	var_46_object = var_1_object; // 0x2a1 MovT
	func_5323(var_46_object); // 0x2a2 NEW_2
	if(var_45_bool == 0) goto Label_915; // 0x2a4 JumpB
	var_53_string = ""; // 0x2a5 PushV
	var_53_string = "Neutral"; // 0x2a6 MovS
	func_601(var_19_bool, var_53_string); // 0x2a7 NEW_2
	var_70_int = 543041; // 0x2a9 PushI
	SetMessage(var_70_int); // 0x2aa TObjFunc
	ClearReplies(); // 0x2ac TObjFunc
	var_71_bool = 0; // 0x2ae PushV
	var_71_bool = 0; // 0x2af MovB
	var_72_bool = 0; // 0x2b0 PushV
	var_72_bool = 0; // 0x2b1 MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x2b2 PushV
	var_74_object = var_1_object; // 0x2b3 MovT
	func_5355(var_73_bool, var_74_object); // 0x2b4 NEW_2
	var_84_bool = var_73_bool == 0; // 0x2b6 Not
	if(var_84_bool == 0) goto Label_703; // 0x2b7 JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x2b8 PushV
	var_86_object = var_1_object; // 0x2b9 MovT
	func_5365(var_85_bool, var_86_object); // 0x2ba NEW_2
	var_91_bool = var_85_bool == 0; // 0x2bc Not
	if(var_91_bool == 0) goto Label_703; // 0x2bd JumpB
	var_72_bool = 1; // 0x2be MovB
	
Label_703:
	if(var_72_bool == 0) goto Label_710; // 0x2bf JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0x2c0 PushV
	var_93_object = var_1_object; // 0x2c1 MovT
	func_5335(var_92_bool, var_93_object); // 0x2c2 NEW_2
	if(var_92_bool == 0) goto Label_710; // 0x2c4 JumpB
	var_71_bool = 1; // 0x2c5 MovB
	
Label_710:
	if(var_71_bool == 0) goto Label_716; // 0x2c6 JumpB
	var_98_int = 543044; // 0x2c7 PushI
	var_99_int = 45498; // 0x2c8 PushI
	var_100_int = 45496; // 0x2c9 PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x2ca TObjFunc
	
Label_716:
	var_101_bool = 0; // 0x2cc PushV
	var_101_bool = 1; // 0x2cd MovB
	var_102_bool = 0; // 0x2ce PushV
	var_102_bool = 1; // 0x2cf MovB
	var_103_bool = 0; // 0x2d0 PushV
	var_103_bool = 1; // 0x2d1 MovB
	var_104_bool = 0; var_105_object = Obj(); // 0x2d2 PushV
	var_105_object = var_1_object; // 0x2d3 MovT
	func_5425(var_104_bool, var_105_object); // 0x2d4 NEW_2
	if(var_104_bool == 0) goto Label_733; // 0x2d6 JumpB
	var_110_bool = 0; var_111_object = Obj(); // 0x2d7 PushV
	var_111_object = var_1_object; // 0x2d8 MovT
	func_5435(var_110_bool, var_111_object); // 0x2d9 NEW_2
	if(var_110_bool == 0) goto Label_733; // 0x2db JumpB
	var_103_bool = 0; // 0x2dc MovB
	
Label_733:
	if(var_103_bool == 0) goto Label_740; // 0x2dd JumpB
	var_116_bool = 0; var_117_object = Obj(); // 0x2de PushV
	var_117_object = var_1_object; // 0x2df MovT
	func_5445(var_116_bool, var_117_object); // 0x2e0 NEW_2
	if(var_116_bool == 0) goto Label_740; // 0x2e2 JumpB
	var_102_bool = 0; // 0x2e3 MovB
	
Label_740:
	if(var_102_bool == 0) goto Label_747; // 0x2e4 JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x2e5 PushV
	var_123_object = var_1_object; // 0x2e6 MovT
	func_5455(var_122_bool, var_123_object); // 0x2e7 NEW_2
	if(var_122_bool == 0) goto Label_747; // 0x2e9 JumpB
	var_101_bool = 0; // 0x2ea MovB
	
Label_747:
	if(var_101_bool == 0) goto Label_753; // 0x2eb JumpB
	var_128_int = 543057; // 0x2ec PushI
	var_129_int = 45513; // 0x2ed PushI
	var_130_int = 45512; // 0x2ee PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x2ef TObjFunc
	
Label_753:
	var_131_bool = 0; // 0x2f1 PushV
	var_131_bool = 1; // 0x2f2 MovB
	var_132_bool = 0; var_133_object = Obj(); // 0x2f3 PushV
	var_133_object = var_1_object; // 0x2f4 MovT
	func_5405(var_132_bool, var_133_object); // 0x2f5 NEW_2
	if(var_132_bool == 0) goto Label_766; // 0x2f7 JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0x2f8 PushV
	var_139_object = var_1_object; // 0x2f9 MovT
	func_5415(var_138_bool, var_139_object); // 0x2fa NEW_2
	if(var_138_bool == 0) goto Label_766; // 0x2fc JumpB
	var_131_bool = 0; // 0x2fd MovB
	
Label_766:
	if(var_131_bool == 0) goto Label_772; // 0x2fe JumpB
	var_144_int = 543063; // 0x2ff PushI
	var_145_int = 45520; // 0x300 PushI
	var_146_int = 45518; // 0x301 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x302 TObjFunc
	
Label_772:
	var_147_bool = 0; var_148_object = Obj(); // 0x304 PushV
	var_148_object = var_1_object; // 0x305 MovT
	func_5335(var_147_bool, var_148_object); // 0x306 NEW_2
	if(var_147_bool == 0) goto Label_782; // 0x308 JumpB
	var_149_int = 538210; // 0x309 PushI
	var_150_int = -1; // 0x30a PushI
	var_151_int = 40087; // 0x30b PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x30c TObjFunc
	
Label_782:
	var_152_bool = 0; var_153_object = Obj(); // 0x30e PushV
	var_153_object = var_1_object; // 0x30f MovT
	func_5335(var_152_bool, var_153_object); // 0x310 NEW_2
	if(var_152_bool == 0) goto Label_792; // 0x312 JumpB
	var_154_int = 543042; // 0x313 PushI
	var_155_int = -1; // 0x314 PushI
	var_156_int = 45494; // 0x315 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x316 TObjFunc
	
Label_792:
	var_157_bool = 0; var_158_object = Obj(); // 0x318 PushV
	var_158_object = var_1_object; // 0x319 MovT
	func_5335(var_157_bool, var_158_object); // 0x31a NEW_2
	if(var_157_bool == 0) goto Label_802; // 0x31c JumpB
	var_159_int = 543043; // 0x31d PushI
	var_160_int = -1; // 0x31e PushI
	var_161_int = 45495; // 0x31f PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x320 TObjFunc
	
Label_802:
	var_162_bool = 0; // 0x322 PushV
	var_162_bool = 1; // 0x323 MovB
	var_163_bool = 0; // 0x324 PushV
	var_163_bool = 1; // 0x325 MovB
	var_164_bool = 0; var_165_object = Obj(); // 0x326 PushV
	var_165_object = var_1_object; // 0x327 MovT
	func_5405(var_164_bool, var_165_object); // 0x328 NEW_2
	if(var_164_bool == 0) goto Label_817; // 0x32a JumpB
	var_166_bool = 0; var_167_object = Obj(); // 0x32b PushV
	var_167_object = var_1_object; // 0x32c MovT
	func_5415(var_166_bool, var_167_object); // 0x32d NEW_2
	if(var_166_bool == 0) goto Label_817; // 0x32f JumpB
	var_163_bool = 0; // 0x330 MovB
	
Label_817:
	if(var_163_bool == 0) goto Label_824; // 0x331 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x332 PushV
	var_169_object = var_1_object; // 0x333 MovT
	func_5425(var_168_bool, var_169_object); // 0x334 NEW_2
	if(var_168_bool == 0) goto Label_824; // 0x336 JumpB
	var_162_bool = 0; // 0x337 MovB
	
Label_824:
	if(var_162_bool == 0) goto Label_830; // 0x338 JumpB
	var_170_int = 543055; // 0x339 PushI
	var_171_int = -1; // 0x33a PushI
	var_172_int = 45510; // 0x33b PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x33c TObjFunc
	
Label_830:
	var_173_bool = 0; // 0x33e PushV
	var_173_bool = 1; // 0x33f MovB
	var_174_bool = 0; var_175_object = Obj(); // 0x340 PushV
	var_175_object = var_1_object; // 0x341 MovT
	func_5405(var_174_bool, var_175_object); // 0x342 NEW_2
	if(var_174_bool == 0) goto Label_843; // 0x344 JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x345 PushV
	var_177_object = var_1_object; // 0x346 MovT
	func_5415(var_176_bool, var_177_object); // 0x347 NEW_2
	if(var_176_bool == 0) goto Label_843; // 0x349 JumpB
	var_173_bool = 0; // 0x34a MovB
	
Label_843:
	if(var_173_bool == 0) goto Label_849; // 0x34b JumpB
	var_178_int = 543056; // 0x34c PushI
	var_179_int = -1; // 0x34d PushI
	var_180_int = 45511; // 0x34e PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x34f TObjFunc
	
Label_849:
	var_181_bool = 0; // 0x351 PushV
	var_181_bool = 1; // 0x352 MovB
	var_182_bool = 0; // 0x353 PushV
	var_182_bool = 1; // 0x354 MovB
	var_183_bool = 0; var_184_object = Obj(); // 0x355 PushV
	var_184_object = var_1_object; // 0x356 MovT
	func_5435(var_183_bool, var_184_object); // 0x357 NEW_2
	if(var_183_bool == 0) goto Label_864; // 0x359 JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x35a PushV
	var_186_object = var_1_object; // 0x35b MovT
	func_5445(var_185_bool, var_186_object); // 0x35c NEW_2
	if(var_185_bool == 0) goto Label_864; // 0x35e JumpB
	var_182_bool = 0; // 0x35f MovB
	
Label_864:
	if(var_182_bool == 0) goto Label_871; // 0x360 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x361 PushV
	var_188_object = var_1_object; // 0x362 MovT
	func_5455(var_187_bool, var_188_object); // 0x363 NEW_2
	if(var_187_bool == 0) goto Label_871; // 0x365 JumpB
	var_181_bool = 0; // 0x366 MovB
	
Label_871:
	if(var_181_bool == 0) goto Label_877; // 0x367 JumpB
	var_189_int = 543062; // 0x368 PushI
	var_190_int = -1; // 0x369 PushI
	var_191_int = 45517; // 0x36a PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x36b TObjFunc
	
Label_877:
	var_192_bool = 0; // 0x36d PushV
	var_192_bool = 1; // 0x36e MovB
	var_193_bool = 0; // 0x36f PushV
	var_193_bool = 1; // 0x370 MovB
	var_194_bool = 0; // 0x371 PushV
	var_194_bool = 1; // 0x372 MovB
	var_195_bool = 0; var_196_object = Obj(); // 0x373 PushV
	var_196_object = var_1_object; // 0x374 MovT
	func_5425(var_195_bool, var_196_object); // 0x375 NEW_2
	if(var_195_bool == 0) goto Label_894; // 0x377 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x378 PushV
	var_198_object = var_1_object; // 0x379 MovT
	func_5435(var_197_bool, var_198_object); // 0x37a NEW_2
	if(var_197_bool == 0) goto Label_894; // 0x37c JumpB
	var_194_bool = 0; // 0x37d MovB
	
Label_894:
	if(var_194_bool == 0) goto Label_901; // 0x37e JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x37f PushV
	var_200_object = var_1_object; // 0x380 MovT
	func_5445(var_199_bool, var_200_object); // 0x381 NEW_2
	if(var_199_bool == 0) goto Label_901; // 0x383 JumpB
	var_193_bool = 0; // 0x384 MovB
	
Label_901:
	if(var_193_bool == 0) goto Label_908; // 0x385 JumpB
	var_201_bool = 0; var_202_object = Obj(); // 0x386 PushV
	var_202_object = var_1_object; // 0x387 MovT
	func_5455(var_201_bool, var_202_object); // 0x388 NEW_2
	if(var_201_bool == 0) goto Label_908; // 0x38a JumpB
	var_192_bool = 0; // 0x38b MovB
	
Label_908:
	if(var_192_bool == 0) goto Label_914; // 0x38c JumpB
	var_203_int = 543064; // 0x38d PushI
	var_204_int = -1; // 0x38e PushI
	var_205_int = 45519; // 0x38f PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x390 TObjFunc
	
Label_914:
	return 0; // 0x392 Return
	
Label_915:
	var_206_string = ""; // 0x393 PushV
	var_206_string = "Neutral"; // 0x394 MovS
	func_601(var_19_bool, var_206_string); // 0x395 NEW_2
	var_207_int = 538207; // 0x397 PushI
	SetMessage(var_207_int); // 0x398 TObjFunc
	ClearReplies(); // 0x39a TObjFunc
	var_208_bool = 0; var_209_object = Obj(); // 0x39c PushV
	var_209_object = var_1_object; // 0x39d MovT
	func_5299(var_209_object); // 0x39e NEW_2
	if(var_208_bool == 0) goto Label_934; // 0x3a0 JumpB
	var_214_int = 538208; // 0x3a1 PushI
	var_215_int = -1; // 0x3a2 PushI
	var_216_int = 40085; // 0x3a3 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x3a4 TObjFunc
	
Label_934:
	var_217_bool = 0; var_218_object = Obj(); // 0x3a6 PushV
	var_218_object = var_1_object; // 0x3a7 MovT
	func_5311(var_218_object); // 0x3a8 NEW_2
	if(var_217_bool == 0) goto Label_944; // 0x3aa JumpB
	var_223_int = 538209; // 0x3ab PushI
	var_224_int = -1; // 0x3ac PushI
	var_225_int = 40086; // 0x3ad PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x3ae TObjFunc
	
Label_944:
	var_226_bool = 0; // 0x3b0 PushV
	var_226_bool = 0; // 0x3b1 MovB
	var_227_bool = 0; var_228_object = Obj(); // 0x3b2 PushV
	var_228_object = var_1_object; // 0x3b3 MovT
	func_5299(var_228_object); // 0x3b4 NEW_2
	if(var_227_bool == 0) goto Label_957; // 0x3b6 JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x3b7 PushV
	var_230_object = var_1_object; // 0x3b8 MovT
	func_5355(var_229_bool, var_230_object); // 0x3b9 NEW_2
	if(var_229_bool == 0) goto Label_957; // 0x3bb JumpB
	var_226_bool = 1; // 0x3bc MovB
	
Label_957:
	if(var_226_bool == 0) goto Label_963; // 0x3bd JumpB
	var_231_int = 538211; // 0x3be PushI
	var_232_int = 40089; // 0x3bf PushI
	var_233_int = 40088; // 0x3c0 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x3c1 TObjFunc
	
Label_963:
	var_234_bool = 0; // 0x3c3 PushV
	var_234_bool = 0; // 0x3c4 MovB
	var_235_bool = 0; var_236_object = Obj(); // 0x3c5 PushV
	var_236_object = var_1_object; // 0x3c6 MovT
	func_5299(var_236_object); // 0x3c7 NEW_2
	if(var_235_bool == 0) goto Label_976; // 0x3c9 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0x3ca PushV
	var_238_object = var_1_object; // 0x3cb MovT
	func_5355(var_237_bool, var_238_object); // 0x3cc NEW_2
	if(var_237_bool == 0) goto Label_976; // 0x3ce JumpB
	var_234_bool = 1; // 0x3cf MovB
	
Label_976:
	if(var_234_bool == 0) goto Label_982; // 0x3d0 JumpB
	var_239_int = 538222; // 0x3d1 PushI
	var_240_int = 40100; // 0x3d2 PushI
	var_241_int = 40099; // 0x3d3 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x3d4 TObjFunc
	
Label_982:
	var_242_bool = 0; // 0x3d6 PushV
	var_242_bool = 0; // 0x3d7 MovB
	var_243_bool = 0; var_244_object = Obj(); // 0x3d8 PushV
	var_244_object = var_1_object; // 0x3d9 MovT
	func_5299(var_244_object); // 0x3da NEW_2
	if(var_243_bool == 0) goto Label_995; // 0x3dc JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0x3dd PushV
	var_246_object = var_1_object; // 0x3de MovT
	func_5365(var_245_bool, var_246_object); // 0x3df NEW_2
	if(var_245_bool == 0) goto Label_995; // 0x3e1 JumpB
	var_242_bool = 1; // 0x3e2 MovB
	
Label_995:
	if(var_242_bool == 0) goto Label_1001; // 0x3e3 JumpB
	var_247_int = 538235; // 0x3e4 PushI
	var_248_int = 40114; // 0x3e5 PushI
	var_249_int = 40113; // 0x3e6 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x3e7 TObjFunc
	
Label_1001:
	var_250_bool = 0; // 0x3e9 PushV
	var_250_bool = 0; // 0x3ea MovB
	var_251_bool = 0; var_252_object = Obj(); // 0x3eb PushV
	var_252_object = var_1_object; // 0x3ec MovT
	func_5299(var_252_object); // 0x3ed NEW_2
	if(var_251_bool == 0) goto Label_1014; // 0x3ef JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0x3f0 PushV
	var_254_object = var_1_object; // 0x3f1 MovT
	func_5375(var_253_bool, var_254_object); // 0x3f2 NEW_2
	if(var_253_bool == 0) goto Label_1014; // 0x3f4 JumpB
	var_250_bool = 1; // 0x3f5 MovB
	
Label_1014:
	if(var_250_bool == 0) goto Label_1020; // 0x3f6 JumpB
	var_259_int = 538253; // 0x3f7 PushI
	var_260_int = 40135; // 0x3f8 PushI
	var_261_int = 40134; // 0x3f9 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x3fa TObjFunc
	
Label_1020:
	var_262_bool = 0; // 0x3fc PushV
	var_262_bool = 0; // 0x3fd MovB
	var_263_bool = 0; var_264_object = Obj(); // 0x3fe PushV
	var_264_object = var_1_object; // 0x3ff MovT
	func_5299(var_264_object); // 0x400 NEW_2
	if(var_263_bool == 0) goto Label_1033; // 0x402 JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x403 PushV
	var_266_object = var_1_object; // 0x404 MovT
	func_5385(var_265_bool, var_266_object); // 0x405 NEW_2
	if(var_265_bool == 0) goto Label_1033; // 0x407 JumpB
	var_262_bool = 1; // 0x408 MovB
	
Label_1033:
	if(var_262_bool == 0) goto Label_1039; // 0x409 JumpB
	var_271_int = 538272; // 0x40a PushI
	var_272_int = 40155; // 0x40b PushI
	var_273_int = 40154; // 0x40c PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x40d TObjFunc
	
Label_1039:
	var_274_bool = 0; var_275_object = Obj(); // 0x40f PushV
	var_275_object = var_1_object; // 0x410 MovT
	func_5395(var_274_bool, var_275_object); // 0x411 NEW_2
	if(var_274_bool == 0) goto Label_1049; // 0x413 JumpB
	var_280_int = 538291; // 0x414 PushI
	var_281_int = 40174; // 0x415 PushI
	var_282_int = 40173; // 0x416 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x417 TObjFunc
	
Label_1049:
	var_283_bool = 0; // 0x419 PushV
	var_283_bool = 0; // 0x41a MovB
	var_284_bool = 0; var_285_object = Obj(); // 0x41b PushV
	var_285_object = var_1_object; // 0x41c MovT
	func_5299(var_285_object); // 0x41d NEW_2
	if(var_284_bool == 0) goto Label_1062; // 0x41f JumpB
	var_286_bool = 0; var_287_object = Obj(); // 0x420 PushV
	var_287_object = var_1_object; // 0x421 MovT
	func_5405(var_286_bool, var_287_object); // 0x422 NEW_2
	if(var_286_bool == 0) goto Label_1062; // 0x424 JumpB
	var_283_bool = 1; // 0x425 MovB
	
Label_1062:
	if(var_283_bool == 0) goto Label_1068; // 0x426 JumpB
	var_288_int = 538308; // 0x427 PushI
	var_289_int = 40192; // 0x428 PushI
	var_290_int = 40191; // 0x429 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x42a TObjFunc
	
Label_1068:
	var_291_bool = 0; var_292_object = Obj(); // 0x42c PushV
	var_292_object = var_1_object; // 0x42d MovT
	func_5415(var_291_bool, var_292_object); // 0x42e NEW_2
	if(var_291_bool == 0) goto Label_1078; // 0x430 JumpB
	var_293_int = 538322; // 0x431 PushI
	var_294_int = 40206; // 0x432 PushI
	var_295_int = 40205; // 0x433 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x434 TObjFunc
	
Label_1078:
	var_296_bool = 0; var_297_object = Obj(); // 0x436 PushV
	var_297_object = var_1_object; // 0x437 MovT
	func_5345(var_296_bool, var_297_object); // 0x438 NEW_2
	if(var_296_bool == 0) goto Label_1088; // 0x43a JumpB
	var_300_int = 538332; // 0x43b PushI
	var_301_int = 40216; // 0x43c PushI
	var_302_int = 40215; // 0x43d PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x43e TObjFunc
	
Label_1088:
	var_303_bool = 0; // 0x440 PushV
	var_303_bool = 0; // 0x441 MovB
	var_304_bool = 0; var_305_object = Obj(); // 0x442 PushV
	var_305_object = var_1_object; // 0x443 MovT
	func_5299(var_305_object); // 0x444 NEW_2
	if(var_304_bool == 0) goto Label_1101; // 0x446 JumpB
	var_306_bool = 0; var_307_object = Obj(); // 0x447 PushV
	var_307_object = var_1_object; // 0x448 MovT
	func_5425(var_306_bool, var_307_object); // 0x449 NEW_2
	if(var_306_bool == 0) goto Label_1101; // 0x44b JumpB
	var_303_bool = 1; // 0x44c MovB
	
Label_1101:
	if(var_303_bool == 0) goto Label_1107; // 0x44d JumpB
	var_308_int = 538347; // 0x44e PushI
	var_309_int = 40233; // 0x44f PushI
	var_310_int = 40232; // 0x450 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x451 TObjFunc
	
Label_1107:
	var_311_bool = 0; var_312_object = Obj(); // 0x453 PushV
	var_312_object = var_1_object; // 0x454 MovT
	func_5435(var_311_bool, var_312_object); // 0x455 NEW_2
	if(var_311_bool == 0) goto Label_1117; // 0x457 JumpB
	var_313_int = 538364; // 0x458 PushI
	var_314_int = 40250; // 0x459 PushI
	var_315_int = 40249; // 0x45a PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x45b TObjFunc
	
Label_1117:
	var_316_bool = 0; // 0x45d PushV
	var_316_bool = 0; // 0x45e MovB
	var_317_bool = 0; var_318_object = Obj(); // 0x45f PushV
	var_318_object = var_1_object; // 0x460 MovT
	func_5299(var_318_object); // 0x461 NEW_2
	if(var_317_bool == 0) goto Label_1130; // 0x463 JumpB
	var_319_bool = 0; var_320_object = Obj(); // 0x464 PushV
	var_320_object = var_1_object; // 0x465 MovT
	func_5445(var_319_bool, var_320_object); // 0x466 NEW_2
	if(var_319_bool == 0) goto Label_1130; // 0x468 JumpB
	var_316_bool = 1; // 0x469 MovB
	
Label_1130:
	if(var_316_bool == 0) goto Label_1136; // 0x46a JumpB
	var_321_int = 538375; // 0x46b PushI
	var_322_int = 40262; // 0x46c PushI
	var_323_int = 40261; // 0x46d PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x46e TObjFunc
	
Label_1136:
	var_324_bool = 0; // 0x470 PushV
	var_324_bool = 0; // 0x471 MovB
	var_325_bool = 0; var_326_object = Obj(); // 0x472 PushV
	var_326_object = var_1_object; // 0x473 MovT
	func_5299(var_326_object); // 0x474 NEW_2
	if(var_325_bool == 0) goto Label_1149; // 0x476 JumpB
	var_327_bool = 0; var_328_object = Obj(); // 0x477 PushV
	var_328_object = var_1_object; // 0x478 MovT
	func_5445(var_327_bool, var_328_object); // 0x479 NEW_2
	if(var_327_bool == 0) goto Label_1149; // 0x47b JumpB
	var_324_bool = 1; // 0x47c MovB
	
Label_1149:
	if(var_324_bool == 0) goto Label_1155; // 0x47d JumpB
	var_329_int = 538385; // 0x47e PushI
	var_330_int = 40272; // 0x47f PushI
	var_331_int = 40271; // 0x480 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x481 TObjFunc
	
Label_1155:
	var_332_int = 538396; // 0x483 PushI
	var_333_int = -1; // 0x484 PushI
	var_334_int = 40282; // 0x485 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x486 TObjFunc
	return 0; // 0x488 Return
	
Label_1161:
	var_335_int = 40272; // 0x489 PushI
	var_336_bool = var_18_object == var_335_int; // 0x48a Eq
	if(var_336_bool == 0) goto Label_1184; // 0x48b JumpB
	var_337_string = ""; // 0x48c PushV
	var_337_string = "Neutral"; // 0x48d MovS
	func_601(var_19_bool, var_337_string); // 0x48e NEW_2
	var_338_int = 538386; // 0x490 PushI
	SetMessage(var_338_int); // 0x491 TObjFunc
	ClearReplies(); // 0x493 TObjFunc
	var_339_int = 538387; // 0x495 PushI
	var_340_int = 40274; // 0x496 PushI
	var_341_int = 40273; // 0x497 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x498 TObjFunc
	var_342_int = 538395; // 0x49a PushI
	var_343_int = -1; // 0x49b PushI
	var_344_int = 40281; // 0x49c PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x49d TObjFunc
	return 0; // 0x49f Return
	
Label_1184:
	var_345_int = 40274; // 0x4a0 PushI
	var_346_bool = var_18_object == var_345_int; // 0x4a1 Eq
	if(var_346_bool == 0) goto Label_1207; // 0x4a2 JumpB
	var_347_string = ""; // 0x4a3 PushV
	var_347_string = "Neutral"; // 0x4a4 MovS
	func_601(var_19_bool, var_347_string); // 0x4a5 NEW_2
	var_348_int = 538388; // 0x4a7 PushI
	SetMessage(var_348_int); // 0x4a8 TObjFunc
	ClearReplies(); // 0x4aa TObjFunc
	var_349_int = 538389; // 0x4ac PushI
	var_350_int = 40276; // 0x4ad PushI
	var_351_int = 40275; // 0x4ae PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x4af TObjFunc
	var_352_int = 538392; // 0x4b1 PushI
	var_353_int = 40279; // 0x4b2 PushI
	var_354_int = 40278; // 0x4b3 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x4b4 TObjFunc
	return 0; // 0x4b6 Return
	
Label_1207:
	var_355_int = 40279; // 0x4b7 PushI
	var_356_bool = var_18_object == var_355_int; // 0x4b8 Eq
	if(var_356_bool == 0) goto Label_1225; // 0x4b9 JumpB
	var_357_string = ""; // 0x4ba PushV
	var_357_string = "Neutral"; // 0x4bb MovS
	func_601(var_19_bool, var_357_string); // 0x4bc NEW_2
	var_358_int = 538393; // 0x4be PushI
	SetMessage(var_358_int); // 0x4bf TObjFunc
	ClearReplies(); // 0x4c1 TObjFunc
	var_359_int = 538394; // 0x4c3 PushI
	var_360_int = -1; // 0x4c4 PushI
	var_361_int = 40280; // 0x4c5 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x4c6 TObjFunc
	return 0; // 0x4c8 Return
	
Label_1225:
	var_362_int = 40276; // 0x4c9 PushI
	var_363_bool = var_18_object == var_362_int; // 0x4ca Eq
	if(var_363_bool == 0) goto Label_1243; // 0x4cb JumpB
	var_364_string = ""; // 0x4cc PushV
	var_364_string = "Neutral"; // 0x4cd MovS
	func_601(var_19_bool, var_364_string); // 0x4ce NEW_2
	var_365_int = 538390; // 0x4d0 PushI
	SetMessage(var_365_int); // 0x4d1 TObjFunc
	ClearReplies(); // 0x4d3 TObjFunc
	var_366_int = 538391; // 0x4d5 PushI
	var_367_int = -1; // 0x4d6 PushI
	var_368_int = 40277; // 0x4d7 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x4d8 TObjFunc
	return 0; // 0x4da Return
	
Label_1243:
	var_369_int = 40262; // 0x4db PushI
	var_370_bool = var_18_object == var_369_int; // 0x4dc Eq
	if(var_370_bool == 0) goto Label_1266; // 0x4dd JumpB
	var_371_string = ""; // 0x4de PushV
	var_371_string = "Neutral"; // 0x4df MovS
	func_601(var_19_bool, var_371_string); // 0x4e0 NEW_2
	var_372_int = 538376; // 0x4e2 PushI
	SetMessage(var_372_int); // 0x4e3 TObjFunc
	ClearReplies(); // 0x4e5 TObjFunc
	var_373_int = 538377; // 0x4e7 PushI
	var_374_int = 40264; // 0x4e8 PushI
	var_375_int = 40263; // 0x4e9 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x4ea TObjFunc
	var_376_int = 538384; // 0x4ec PushI
	var_377_int = -1; // 0x4ed PushI
	var_378_int = 40270; // 0x4ee PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x4ef TObjFunc
	return 0; // 0x4f1 Return
	
Label_1266:
	var_379_int = 40264; // 0x4f2 PushI
	var_380_bool = var_18_object == var_379_int; // 0x4f3 Eq
	if(var_380_bool == 0) goto Label_1289; // 0x4f4 JumpB
	var_381_string = ""; // 0x4f5 PushV
	var_381_string = "Neutral"; // 0x4f6 MovS
	func_601(var_19_bool, var_381_string); // 0x4f7 NEW_2
	var_382_int = 538378; // 0x4f9 PushI
	SetMessage(var_382_int); // 0x4fa TObjFunc
	ClearReplies(); // 0x4fc TObjFunc
	var_383_int = 538379; // 0x4fe PushI
	var_384_int = 40266; // 0x4ff PushI
	var_385_int = 40265; // 0x500 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x501 TObjFunc
	var_386_int = 538383; // 0x503 PushI
	var_387_int = -1; // 0x504 PushI
	var_388_int = 40269; // 0x505 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x506 TObjFunc
	return 0; // 0x508 Return
	
Label_1289:
	var_389_int = 40266; // 0x509 PushI
	var_390_bool = var_18_object == var_389_int; // 0x50a Eq
	if(var_390_bool == 0) goto Label_1312; // 0x50b JumpB
	var_391_string = ""; // 0x50c PushV
	var_391_string = "Neutral"; // 0x50d MovS
	func_601(var_19_bool, var_391_string); // 0x50e NEW_2
	var_392_int = 538380; // 0x510 PushI
	SetMessage(var_392_int); // 0x511 TObjFunc
	ClearReplies(); // 0x513 TObjFunc
	var_393_int = 538381; // 0x515 PushI
	var_394_int = -1; // 0x516 PushI
	var_395_int = 40267; // 0x517 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x518 TObjFunc
	var_396_int = 538382; // 0x51a PushI
	var_397_int = -1; // 0x51b PushI
	var_398_int = 40268; // 0x51c PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x51d TObjFunc
	return 0; // 0x51f Return
	
Label_1312:
	var_399_int = 40250; // 0x520 PushI
	var_400_bool = var_18_object == var_399_int; // 0x521 Eq
	if(var_400_bool == 0) goto Label_1340; // 0x522 JumpB
	var_401_string = ""; // 0x523 PushV
	var_401_string = "Neutral"; // 0x524 MovS
	func_601(var_19_bool, var_401_string); // 0x525 NEW_2
	var_402_int = 538365; // 0x527 PushI
	SetMessage(var_402_int); // 0x528 TObjFunc
	ClearReplies(); // 0x52a TObjFunc
	var_403_int = 538366; // 0x52c PushI
	var_404_int = 40252; // 0x52d PushI
	var_405_int = 40251; // 0x52e PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x52f TObjFunc
	var_406_int = 538370; // 0x531 PushI
	var_407_int = 40256; // 0x532 PushI
	var_408_int = 40255; // 0x533 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x534 TObjFunc
	var_409_int = 538374; // 0x536 PushI
	var_410_int = -1; // 0x537 PushI
	var_411_int = 40260; // 0x538 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x539 TObjFunc
	return 0; // 0x53b Return
	
Label_1340:
	var_412_int = 40256; // 0x53c PushI
	var_413_bool = var_18_object == var_412_int; // 0x53d Eq
	if(var_413_bool == 0) goto Label_1363; // 0x53e JumpB
	var_414_string = ""; // 0x53f PushV
	var_414_string = "Neutral"; // 0x540 MovS
	func_601(var_19_bool, var_414_string); // 0x541 NEW_2
	var_415_int = 538371; // 0x543 PushI
	SetMessage(var_415_int); // 0x544 TObjFunc
	ClearReplies(); // 0x546 TObjFunc
	var_416_int = 538372; // 0x548 PushI
	var_417_int = 40252; // 0x549 PushI
	var_418_int = 40257; // 0x54a PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x54b TObjFunc
	var_419_int = 538373; // 0x54d PushI
	var_420_int = -1; // 0x54e PushI
	var_421_int = 40259; // 0x54f PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x550 TObjFunc
	return 0; // 0x552 Return
	
Label_1363:
	var_422_int = 40252; // 0x553 PushI
	var_423_bool = var_18_object == var_422_int; // 0x554 Eq
	if(var_423_bool == 0) goto Label_1386; // 0x555 JumpB
	var_424_string = ""; // 0x556 PushV
	var_424_string = "Neutral"; // 0x557 MovS
	func_601(var_19_bool, var_424_string); // 0x558 NEW_2
	var_425_int = 538367; // 0x55a PushI
	SetMessage(var_425_int); // 0x55b TObjFunc
	ClearReplies(); // 0x55d TObjFunc
	var_426_int = 538368; // 0x55f PushI
	var_427_int = -1; // 0x560 PushI
	var_428_int = 40253; // 0x561 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x562 TObjFunc
	var_429_int = 538369; // 0x564 PushI
	var_430_int = -1; // 0x565 PushI
	var_431_int = 40254; // 0x566 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x567 TObjFunc
	return 0; // 0x569 Return
	
Label_1386:
	var_432_int = 40233; // 0x56a PushI
	var_433_bool = var_18_object == var_432_int; // 0x56b Eq
	if(var_433_bool == 0) goto Label_1409; // 0x56c JumpB
	var_434_string = ""; // 0x56d PushV
	var_434_string = "Neutral"; // 0x56e MovS
	func_601(var_19_bool, var_434_string); // 0x56f NEW_2
	var_435_int = 538348; // 0x571 PushI
	SetMessage(var_435_int); // 0x572 TObjFunc
	ClearReplies(); // 0x574 TObjFunc
	var_436_int = 538349; // 0x576 PushI
	var_437_int = 40235; // 0x577 PushI
	var_438_int = 40234; // 0x578 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x579 TObjFunc
	var_439_int = 538363; // 0x57b PushI
	var_440_int = -1; // 0x57c PushI
	var_441_int = 40248; // 0x57d PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x57e TObjFunc
	return 0; // 0x580 Return
	
Label_1409:
	var_442_int = 40235; // 0x581 PushI
	var_443_bool = var_18_object == var_442_int; // 0x582 Eq
	if(var_443_bool == 0) goto Label_1432; // 0x583 JumpB
	var_444_string = ""; // 0x584 PushV
	var_444_string = "Neutral"; // 0x585 MovS
	func_601(var_19_bool, var_444_string); // 0x586 NEW_2
	var_445_int = 538350; // 0x588 PushI
	SetMessage(var_445_int); // 0x589 TObjFunc
	ClearReplies(); // 0x58b TObjFunc
	var_446_int = 538351; // 0x58d PushI
	var_447_int = 40237; // 0x58e PushI
	var_448_int = 40236; // 0x58f PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x590 TObjFunc
	var_449_int = 538362; // 0x592 PushI
	var_450_int = -1; // 0x593 PushI
	var_451_int = 40247; // 0x594 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x595 TObjFunc
	return 0; // 0x597 Return
	
Label_1432:
	var_452_int = 40237; // 0x598 PushI
	var_453_bool = var_18_object == var_452_int; // 0x599 Eq
	if(var_453_bool == 0) goto Label_1455; // 0x59a JumpB
	var_454_string = ""; // 0x59b PushV
	var_454_string = "Neutral"; // 0x59c MovS
	func_601(var_19_bool, var_454_string); // 0x59d NEW_2
	var_455_int = 538352; // 0x59f PushI
	SetMessage(var_455_int); // 0x5a0 TObjFunc
	ClearReplies(); // 0x5a2 TObjFunc
	var_456_int = 538353; // 0x5a4 PushI
	var_457_int = 40239; // 0x5a5 PushI
	var_458_int = 40238; // 0x5a6 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x5a7 TObjFunc
	var_459_int = 538359; // 0x5a9 PushI
	var_460_int = 40245; // 0x5aa PushI
	var_461_int = 40244; // 0x5ab PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x5ac TObjFunc
	return 0; // 0x5ae Return
	
Label_1455:
	var_462_int = 40245; // 0x5af PushI
	var_463_bool = var_18_object == var_462_int; // 0x5b0 Eq
	if(var_463_bool == 0) goto Label_1473; // 0x5b1 JumpB
	var_464_string = ""; // 0x5b2 PushV
	var_464_string = "Neutral"; // 0x5b3 MovS
	func_601(var_19_bool, var_464_string); // 0x5b4 NEW_2
	var_465_int = 538360; // 0x5b6 PushI
	SetMessage(var_465_int); // 0x5b7 TObjFunc
	ClearReplies(); // 0x5b9 TObjFunc
	var_466_int = 538361; // 0x5bb PushI
	var_467_int = -1; // 0x5bc PushI
	var_468_int = 40246; // 0x5bd PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x5be TObjFunc
	return 0; // 0x5c0 Return
	
Label_1473:
	var_469_int = 40239; // 0x5c1 PushI
	var_470_bool = var_18_object == var_469_int; // 0x5c2 Eq
	if(var_470_bool == 0) goto Label_1496; // 0x5c3 JumpB
	var_471_string = ""; // 0x5c4 PushV
	var_471_string = "Neutral"; // 0x5c5 MovS
	func_601(var_19_bool, var_471_string); // 0x5c6 NEW_2
	var_472_int = 538354; // 0x5c8 PushI
	SetMessage(var_472_int); // 0x5c9 TObjFunc
	ClearReplies(); // 0x5cb TObjFunc
	var_473_int = 538355; // 0x5cd PushI
	var_474_int = -1; // 0x5ce PushI
	var_475_int = 40240; // 0x5cf PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x5d0 TObjFunc
	var_476_int = 538356; // 0x5d2 PushI
	var_477_int = 40242; // 0x5d3 PushI
	var_478_int = 40241; // 0x5d4 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x5d5 TObjFunc
	return 0; // 0x5d7 Return
	
Label_1496:
	var_479_int = 40242; // 0x5d8 PushI
	var_480_bool = var_18_object == var_479_int; // 0x5d9 Eq
	if(var_480_bool == 0) goto Label_1514; // 0x5da JumpB
	var_481_string = ""; // 0x5db PushV
	var_481_string = "Neutral"; // 0x5dc MovS
	func_601(var_19_bool, var_481_string); // 0x5dd NEW_2
	var_482_int = 538357; // 0x5df PushI
	SetMessage(var_482_int); // 0x5e0 TObjFunc
	ClearReplies(); // 0x5e2 TObjFunc
	var_483_int = 538358; // 0x5e4 PushI
	var_484_int = -1; // 0x5e5 PushI
	var_485_int = 40243; // 0x5e6 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x5e7 TObjFunc
	return 0; // 0x5e9 Return
	
Label_1514:
	var_486_int = 40216; // 0x5ea PushI
	var_487_bool = var_18_object == var_486_int; // 0x5eb Eq
	if(var_487_bool == 0) goto Label_1537; // 0x5ec JumpB
	var_488_string = ""; // 0x5ed PushV
	var_488_string = "Neutral"; // 0x5ee MovS
	func_601(var_19_bool, var_488_string); // 0x5ef NEW_2
	var_489_int = 538333; // 0x5f1 PushI
	SetMessage(var_489_int); // 0x5f2 TObjFunc
	ClearReplies(); // 0x5f4 TObjFunc
	var_490_int = 538334; // 0x5f6 PushI
	var_491_int = 40218; // 0x5f7 PushI
	var_492_int = 40217; // 0x5f8 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x5f9 TObjFunc
	var_493_int = 538346; // 0x5fb PushI
	var_494_int = -1; // 0x5fc PushI
	var_495_int = 40231; // 0x5fd PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x5fe TObjFunc
	return 0; // 0x600 Return
	
Label_1537:
	var_496_int = 40218; // 0x601 PushI
	var_497_bool = var_18_object == var_496_int; // 0x602 Eq
	if(var_497_bool == 0) goto Label_1560; // 0x603 JumpB
	var_498_string = ""; // 0x604 PushV
	var_498_string = "Neutral"; // 0x605 MovS
	func_601(var_19_bool, var_498_string); // 0x606 NEW_2
	var_499_int = 538335; // 0x608 PushI
	SetMessage(var_499_int); // 0x609 TObjFunc
	ClearReplies(); // 0x60b TObjFunc
	var_500_int = 538336; // 0x60d PushI
	var_501_int = 40220; // 0x60e PushI
	var_502_int = 40219; // 0x60f PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x610 TObjFunc
	var_503_int = 538343; // 0x612 PushI
	var_504_int = 40228; // 0x613 PushI
	var_505_int = 40227; // 0x614 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0x615 TObjFunc
	return 0; // 0x617 Return
	
Label_1560:
	var_506_int = 40228; // 0x618 PushI
	var_507_bool = var_18_object == var_506_int; // 0x619 Eq
	if(var_507_bool == 0) goto Label_1578; // 0x61a JumpB
	var_508_string = ""; // 0x61b PushV
	var_508_string = "Neutral"; // 0x61c MovS
	func_601(var_19_bool, var_508_string); // 0x61d NEW_2
	var_509_int = 538344; // 0x61f PushI
	SetMessage(var_509_int); // 0x620 TObjFunc
	ClearReplies(); // 0x622 TObjFunc
	var_510_int = 538345; // 0x624 PushI
	var_511_int = 40220; // 0x625 PushI
	var_512_int = 40229; // 0x626 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x627 TObjFunc
	return 0; // 0x629 Return
	
Label_1578:
	var_513_int = 40220; // 0x62a PushI
	var_514_bool = var_18_object == var_513_int; // 0x62b Eq
	if(var_514_bool == 0) goto Label_1601; // 0x62c JumpB
	var_515_string = ""; // 0x62d PushV
	var_515_string = "Neutral"; // 0x62e MovS
	func_601(var_19_bool, var_515_string); // 0x62f NEW_2
	var_516_int = 538337; // 0x631 PushI
	SetMessage(var_516_int); // 0x632 TObjFunc
	ClearReplies(); // 0x634 TObjFunc
	var_517_int = 538338; // 0x636 PushI
	var_518_int = 40222; // 0x637 PushI
	var_519_int = 40221; // 0x638 PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x639 TObjFunc
	var_520_int = 538342; // 0x63b PushI
	var_521_int = 40222; // 0x63c PushI
	var_522_int = 40225; // 0x63d PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x63e TObjFunc
	return 0; // 0x640 Return
	
Label_1601:
	var_523_int = 40222; // 0x641 PushI
	var_524_bool = var_18_object == var_523_int; // 0x642 Eq
	if(var_524_bool == 0) goto Label_1624; // 0x643 JumpB
	var_525_string = ""; // 0x644 PushV
	var_525_string = "Neutral"; // 0x645 MovS
	func_601(var_19_bool, var_525_string); // 0x646 NEW_2
	var_526_int = 538339; // 0x648 PushI
	SetMessage(var_526_int); // 0x649 TObjFunc
	ClearReplies(); // 0x64b TObjFunc
	var_527_int = 538340; // 0x64d PushI
	var_528_int = -1; // 0x64e PushI
	var_529_int = 40223; // 0x64f PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x650 TObjFunc
	var_530_int = 538341; // 0x652 PushI
	var_531_int = -1; // 0x653 PushI
	var_532_int = 40224; // 0x654 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x655 TObjFunc
	return 0; // 0x657 Return
	
Label_1624:
	var_533_int = 40206; // 0x658 PushI
	var_534_bool = var_18_object == var_533_int; // 0x659 Eq
	if(var_534_bool == 0) goto Label_1647; // 0x65a JumpB
	var_535_string = ""; // 0x65b PushV
	var_535_string = "Neutral"; // 0x65c MovS
	func_601(var_19_bool, var_535_string); // 0x65d NEW_2
	var_536_int = 538323; // 0x65f PushI
	SetMessage(var_536_int); // 0x660 TObjFunc
	ClearReplies(); // 0x662 TObjFunc
	var_537_int = 538324; // 0x664 PushI
	var_538_int = 40208; // 0x665 PushI
	var_539_int = 40207; // 0x666 PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x667 TObjFunc
	var_540_int = 538331; // 0x669 PushI
	var_541_int = -1; // 0x66a PushI
	var_542_int = 40214; // 0x66b PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0x66c TObjFunc
	return 0; // 0x66e Return
	
Label_1647:
	var_543_int = 40208; // 0x66f PushI
	var_544_bool = var_18_object == var_543_int; // 0x670 Eq
	if(var_544_bool == 0) goto Label_1670; // 0x671 JumpB
	var_545_string = ""; // 0x672 PushV
	var_545_string = "Neutral"; // 0x673 MovS
	func_601(var_19_bool, var_545_string); // 0x674 NEW_2
	var_546_int = 538325; // 0x676 PushI
	SetMessage(var_546_int); // 0x677 TObjFunc
	ClearReplies(); // 0x679 TObjFunc
	var_547_int = 538326; // 0x67b PushI
	var_548_int = 40210; // 0x67c PushI
	var_549_int = 40209; // 0x67d PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x67e TObjFunc
	var_550_int = 538330; // 0x680 PushI
	var_551_int = -1; // 0x681 PushI
	var_552_int = 40213; // 0x682 PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0x683 TObjFunc
	return 0; // 0x685 Return
	
Label_1670:
	var_553_int = 40210; // 0x686 PushI
	var_554_bool = var_18_object == var_553_int; // 0x687 Eq
	if(var_554_bool == 0) goto Label_1693; // 0x688 JumpB
	var_555_string = ""; // 0x689 PushV
	var_555_string = "Neutral"; // 0x68a MovS
	func_601(var_19_bool, var_555_string); // 0x68b NEW_2
	var_556_int = 538327; // 0x68d PushI
	SetMessage(var_556_int); // 0x68e TObjFunc
	ClearReplies(); // 0x690 TObjFunc
	var_557_int = 538328; // 0x692 PushI
	var_558_int = -1; // 0x693 PushI
	var_559_int = 40211; // 0x694 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x695 TObjFunc
	var_560_int = 538329; // 0x697 PushI
	var_561_int = -1; // 0x698 PushI
	var_562_int = 40212; // 0x699 PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x69a TObjFunc
	return 0; // 0x69c Return
	
Label_1693:
	var_563_int = 40192; // 0x69d PushI
	var_564_bool = var_18_object == var_563_int; // 0x69e Eq
	if(var_564_bool == 0) goto Label_1711; // 0x69f JumpB
	var_565_string = ""; // 0x6a0 PushV
	var_565_string = "Neutral"; // 0x6a1 MovS
	func_601(var_19_bool, var_565_string); // 0x6a2 NEW_2
	var_566_int = 538309; // 0x6a4 PushI
	SetMessage(var_566_int); // 0x6a5 TObjFunc
	ClearReplies(); // 0x6a7 TObjFunc
	var_567_int = 538310; // 0x6a9 PushI
	var_568_int = 40194; // 0x6aa PushI
	var_569_int = 40193; // 0x6ab PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0x6ac TObjFunc
	return 0; // 0x6ae Return
	
Label_1711:
	var_570_int = 40194; // 0x6af PushI
	var_571_bool = var_18_object == var_570_int; // 0x6b0 Eq
	if(var_571_bool == 0) goto Label_1734; // 0x6b1 JumpB
	var_572_string = ""; // 0x6b2 PushV
	var_572_string = "Neutral"; // 0x6b3 MovS
	func_601(var_19_bool, var_572_string); // 0x6b4 NEW_2
	var_573_int = 538311; // 0x6b6 PushI
	SetMessage(var_573_int); // 0x6b7 TObjFunc
	ClearReplies(); // 0x6b9 TObjFunc
	var_574_int = 538312; // 0x6bb PushI
	var_575_int = 40196; // 0x6bc PushI
	var_576_int = 40195; // 0x6bd PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x6be TObjFunc
	var_577_int = 538316; // 0x6c0 PushI
	var_578_int = 40200; // 0x6c1 PushI
	var_579_int = 40199; // 0x6c2 PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x6c3 TObjFunc
	return 0; // 0x6c5 Return
	
Label_1734:
	var_580_int = 40200; // 0x6c6 PushI
	var_581_bool = var_18_object == var_580_int; // 0x6c7 Eq
	if(var_581_bool == 0) goto Label_1752; // 0x6c8 JumpB
	var_582_string = ""; // 0x6c9 PushV
	var_582_string = "Neutral"; // 0x6ca MovS
	func_601(var_19_bool, var_582_string); // 0x6cb NEW_2
	var_583_int = 538317; // 0x6cd PushI
	SetMessage(var_583_int); // 0x6ce TObjFunc
	ClearReplies(); // 0x6d0 TObjFunc
	var_584_int = 538318; // 0x6d2 PushI
	var_585_int = 40202; // 0x6d3 PushI
	var_586_int = 40201; // 0x6d4 PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0x6d5 TObjFunc
	return 0; // 0x6d7 Return
	
Label_1752:
	var_587_int = 40202; // 0x6d8 PushI
	var_588_bool = var_18_object == var_587_int; // 0x6d9 Eq
	if(var_588_bool == 0) goto Label_1775; // 0x6da JumpB
	var_589_string = ""; // 0x6db PushV
	var_589_string = "Neutral"; // 0x6dc MovS
	func_601(var_19_bool, var_589_string); // 0x6dd NEW_2
	var_590_int = 538319; // 0x6df PushI
	SetMessage(var_590_int); // 0x6e0 TObjFunc
	ClearReplies(); // 0x6e2 TObjFunc
	var_591_int = 538320; // 0x6e4 PushI
	var_592_int = -1; // 0x6e5 PushI
	var_593_int = 40203; // 0x6e6 PushI
	AddReply(var_591_int, var_592_int, var_593_int); // 0x6e7 TObjFunc
	var_594_int = 538321; // 0x6e9 PushI
	var_595_int = -1; // 0x6ea PushI
	var_596_int = 40204; // 0x6eb PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0x6ec TObjFunc
	return 0; // 0x6ee Return
	
Label_1775:
	var_597_int = 40196; // 0x6ef PushI
	var_598_bool = var_18_object == var_597_int; // 0x6f0 Eq
	if(var_598_bool == 0) goto Label_1798; // 0x6f1 JumpB
	var_599_string = ""; // 0x6f2 PushV
	var_599_string = "Neutral"; // 0x6f3 MovS
	func_601(var_19_bool, var_599_string); // 0x6f4 NEW_2
	var_600_int = 538313; // 0x6f6 PushI
	SetMessage(var_600_int); // 0x6f7 TObjFunc
	ClearReplies(); // 0x6f9 TObjFunc
	var_601_int = 538314; // 0x6fb PushI
	var_602_int = -1; // 0x6fc PushI
	var_603_int = 40197; // 0x6fd PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x6fe TObjFunc
	var_604_int = 538315; // 0x700 PushI
	var_605_int = -1; // 0x701 PushI
	var_606_int = 40198; // 0x702 PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x703 TObjFunc
	return 0; // 0x705 Return
	
Label_1798:
	var_607_int = 40174; // 0x706 PushI
	var_608_bool = var_18_object == var_607_int; // 0x707 Eq
	if(var_608_bool == 0) goto Label_1821; // 0x708 JumpB
	var_609_string = ""; // 0x709 PushV
	var_609_string = "Neutral"; // 0x70a MovS
	func_601(var_19_bool, var_609_string); // 0x70b NEW_2
	var_610_int = 538292; // 0x70d PushI
	SetMessage(var_610_int); // 0x70e TObjFunc
	ClearReplies(); // 0x710 TObjFunc
	var_611_int = 538293; // 0x712 PushI
	var_612_int = 40176; // 0x713 PushI
	var_613_int = 40175; // 0x714 PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x715 TObjFunc
	var_614_int = 538302; // 0x717 PushI
	var_615_int = 40186; // 0x718 PushI
	var_616_int = 40185; // 0x719 PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x71a TObjFunc
	return 0; // 0x71c Return
	
Label_1821:
	var_617_int = 40186; // 0x71d PushI
	var_618_bool = var_18_object == var_617_int; // 0x71e Eq
	if(var_618_bool == 0) goto Label_1839; // 0x71f JumpB
	var_619_string = ""; // 0x720 PushV
	var_619_string = "Neutral"; // 0x721 MovS
	func_601(var_19_bool, var_619_string); // 0x722 NEW_2
	var_620_int = 538303; // 0x724 PushI
	SetMessage(var_620_int); // 0x725 TObjFunc
	ClearReplies(); // 0x727 TObjFunc
	var_621_int = 538304; // 0x729 PushI
	var_622_int = 40188; // 0x72a PushI
	var_623_int = 40187; // 0x72b PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x72c TObjFunc
	return 0; // 0x72e Return
	
Label_1839:
	var_624_int = 40188; // 0x72f PushI
	var_625_bool = var_18_object == var_624_int; // 0x730 Eq
	if(var_625_bool == 0) goto Label_1862; // 0x731 JumpB
	var_626_string = ""; // 0x732 PushV
	var_626_string = "Neutral"; // 0x733 MovS
	func_601(var_19_bool, var_626_string); // 0x734 NEW_2
	var_627_int = 538305; // 0x736 PushI
	SetMessage(var_627_int); // 0x737 TObjFunc
	ClearReplies(); // 0x739 TObjFunc
	var_628_int = 538306; // 0x73b PushI
	var_629_int = -1; // 0x73c PushI
	var_630_int = 40189; // 0x73d PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x73e TObjFunc
	var_631_int = 538307; // 0x740 PushI
	var_632_int = -1; // 0x741 PushI
	var_633_int = 40190; // 0x742 PushI
	AddReply(var_631_int, var_632_int, var_633_int); // 0x743 TObjFunc
	return 0; // 0x745 Return
	
Label_1862:
	var_634_int = 40176; // 0x746 PushI
	var_635_bool = var_18_object == var_634_int; // 0x747 Eq
	if(var_635_bool == 0) goto Label_1885; // 0x748 JumpB
	var_636_string = ""; // 0x749 PushV
	var_636_string = "Neutral"; // 0x74a MovS
	func_601(var_19_bool, var_636_string); // 0x74b NEW_2
	var_637_int = 538294; // 0x74d PushI
	SetMessage(var_637_int); // 0x74e TObjFunc
	ClearReplies(); // 0x750 TObjFunc
	var_638_int = 538295; // 0x752 PushI
	var_639_int = 40178; // 0x753 PushI
	var_640_int = 40177; // 0x754 PushI
	AddReply(var_638_int, var_639_int, var_640_int); // 0x755 TObjFunc
	var_641_int = 538299; // 0x757 PushI
	var_642_int = 40182; // 0x758 PushI
	var_643_int = 40181; // 0x759 PushI
	AddReply(var_641_int, var_642_int, var_643_int); // 0x75a TObjFunc
	return 0; // 0x75c Return
	
Label_1885:
	var_644_int = 40182; // 0x75d PushI
	var_645_bool = var_18_object == var_644_int; // 0x75e Eq
	if(var_645_bool == 0) goto Label_1903; // 0x75f JumpB
	var_646_string = ""; // 0x760 PushV
	var_646_string = "Neutral"; // 0x761 MovS
	func_601(var_19_bool, var_646_string); // 0x762 NEW_2
	var_647_int = 538300; // 0x764 PushI
	SetMessage(var_647_int); // 0x765 TObjFunc
	ClearReplies(); // 0x767 TObjFunc
	var_648_int = 538301; // 0x769 PushI
	var_649_int = 40178; // 0x76a PushI
	var_650_int = 40183; // 0x76b PushI
	AddReply(var_648_int, var_649_int, var_650_int); // 0x76c TObjFunc
	return 0; // 0x76e Return
	
Label_1903:
	var_651_int = 40178; // 0x76f PushI
	var_652_bool = var_18_object == var_651_int; // 0x770 Eq
	if(var_652_bool == 0) goto Label_1931; // 0x771 JumpB
	var_653_string = ""; // 0x772 PushV
	var_653_string = "Neutral"; // 0x773 MovS
	func_601(var_19_bool, var_653_string); // 0x774 NEW_2
	var_654_int = 538296; // 0x776 PushI
	SetMessage(var_654_int); // 0x777 TObjFunc
	ClearReplies(); // 0x779 TObjFunc
	var_655_int = 538297; // 0x77b PushI
	var_656_int = -1; // 0x77c PushI
	var_657_int = 40179; // 0x77d PushI
	AddReply(var_655_int, var_656_int, var_657_int); // 0x77e TObjFunc
	var_658_bool = 0; var_659_object = Obj(); // 0x780 PushV
	var_659_object = var_1_object; // 0x781 MovT
	func_5299(var_659_object); // 0x782 NEW_2
	if(var_658_bool == 0) goto Label_1930; // 0x784 JumpB
	var_660_int = 538298; // 0x785 PushI
	var_661_int = -1; // 0x786 PushI
	var_662_int = 40180; // 0x787 PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0x788 TObjFunc
	
Label_1930:
	return 0; // 0x78a Return
	
Label_1931:
	var_663_int = 40155; // 0x78b PushI
	var_664_bool = var_18_object == var_663_int; // 0x78c Eq
	if(var_664_bool == 0) goto Label_1959; // 0x78d JumpB
	var_665_string = ""; // 0x78e PushV
	var_665_string = "Neutral"; // 0x78f MovS
	func_601(var_19_bool, var_665_string); // 0x790 NEW_2
	var_666_int = 538273; // 0x792 PushI
	SetMessage(var_666_int); // 0x793 TObjFunc
	ClearReplies(); // 0x795 TObjFunc
	var_667_int = 538274; // 0x797 PushI
	var_668_int = 40157; // 0x798 PushI
	var_669_int = 40156; // 0x799 PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0x79a TObjFunc
	var_670_int = 538289; // 0x79c PushI
	var_671_int = -1; // 0x79d PushI
	var_672_int = 40171; // 0x79e PushI
	AddReply(var_670_int, var_671_int, var_672_int); // 0x79f TObjFunc
	var_673_int = 538290; // 0x7a1 PushI
	var_674_int = -1; // 0x7a2 PushI
	var_675_int = 40172; // 0x7a3 PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0x7a4 TObjFunc
	return 0; // 0x7a6 Return
	
Label_1959:
	var_676_int = 40157; // 0x7a7 PushI
	var_677_bool = var_18_object == var_676_int; // 0x7a8 Eq
	if(var_677_bool == 0) goto Label_1982; // 0x7a9 JumpB
	var_678_string = ""; // 0x7aa PushV
	var_678_string = "Neutral"; // 0x7ab MovS
	func_601(var_19_bool, var_678_string); // 0x7ac NEW_2
	var_679_int = 538275; // 0x7ae PushI
	SetMessage(var_679_int); // 0x7af TObjFunc
	ClearReplies(); // 0x7b1 TObjFunc
	var_680_int = 538276; // 0x7b3 PushI
	var_681_int = 40159; // 0x7b4 PushI
	var_682_int = 40158; // 0x7b5 PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0x7b6 TObjFunc
	var_683_int = 538288; // 0x7b8 PushI
	var_684_int = -1; // 0x7b9 PushI
	var_685_int = 40170; // 0x7ba PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x7bb TObjFunc
	return 0; // 0x7bd Return
	
Label_1982:
	var_686_int = 40159; // 0x7be PushI
	var_687_bool = var_18_object == var_686_int; // 0x7bf Eq
	if(var_687_bool == 0) goto Label_2000; // 0x7c0 JumpB
	var_688_string = ""; // 0x7c1 PushV
	var_688_string = "Neutral"; // 0x7c2 MovS
	func_601(var_19_bool, var_688_string); // 0x7c3 NEW_2
	var_689_int = 538277; // 0x7c5 PushI
	SetMessage(var_689_int); // 0x7c6 TObjFunc
	ClearReplies(); // 0x7c8 TObjFunc
	var_690_int = 538278; // 0x7ca PushI
	var_691_int = 40161; // 0x7cb PushI
	var_692_int = 40160; // 0x7cc PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0x7cd TObjFunc
	return 0; // 0x7cf Return
	
Label_2000:
	var_693_int = 40161; // 0x7d0 PushI
	var_694_bool = var_18_object == var_693_int; // 0x7d1 Eq
	if(var_694_bool == 0) goto Label_2023; // 0x7d2 JumpB
	var_695_string = ""; // 0x7d3 PushV
	var_695_string = "Neutral"; // 0x7d4 MovS
	func_601(var_19_bool, var_695_string); // 0x7d5 NEW_2
	var_696_int = 538279; // 0x7d7 PushI
	SetMessage(var_696_int); // 0x7d8 TObjFunc
	ClearReplies(); // 0x7da TObjFunc
	var_697_int = 538280; // 0x7dc PushI
	var_698_int = 40163; // 0x7dd PushI
	var_699_int = 40162; // 0x7de PushI
	AddReply(var_697_int, var_698_int, var_699_int); // 0x7df TObjFunc
	var_700_int = 538284; // 0x7e1 PushI
	var_701_int = 40167; // 0x7e2 PushI
	var_702_int = 40166; // 0x7e3 PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0x7e4 TObjFunc
	return 0; // 0x7e6 Return
	
Label_2023:
	var_703_int = 40167; // 0x7e7 PushI
	var_704_bool = var_18_object == var_703_int; // 0x7e8 Eq
	if(var_704_bool == 0) goto Label_2046; // 0x7e9 JumpB
	var_705_string = ""; // 0x7ea PushV
	var_705_string = "Neutral"; // 0x7eb MovS
	func_601(var_19_bool, var_705_string); // 0x7ec NEW_2
	var_706_int = 538285; // 0x7ee PushI
	SetMessage(var_706_int); // 0x7ef TObjFunc
	ClearReplies(); // 0x7f1 TObjFunc
	var_707_int = 538286; // 0x7f3 PushI
	var_708_int = -1; // 0x7f4 PushI
	var_709_int = 40168; // 0x7f5 PushI
	AddReply(var_707_int, var_708_int, var_709_int); // 0x7f6 TObjFunc
	var_710_int = 538287; // 0x7f8 PushI
	var_711_int = -1; // 0x7f9 PushI
	var_712_int = 40169; // 0x7fa PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x7fb TObjFunc
	return 0; // 0x7fd Return
	
Label_2046:
	var_713_int = 40163; // 0x7fe PushI
	var_714_bool = var_18_object == var_713_int; // 0x7ff Eq
	if(var_714_bool == 0) goto Label_2069; // 0x800 JumpB
	var_715_string = ""; // 0x801 PushV
	var_715_string = "Neutral"; // 0x802 MovS
	func_601(var_19_bool, var_715_string); // 0x803 NEW_2
	var_716_int = 538281; // 0x805 PushI
	SetMessage(var_716_int); // 0x806 TObjFunc
	ClearReplies(); // 0x808 TObjFunc
	var_717_int = 538282; // 0x80a PushI
	var_718_int = -1; // 0x80b PushI
	var_719_int = 40164; // 0x80c PushI
	AddReply(var_717_int, var_718_int, var_719_int); // 0x80d TObjFunc
	var_720_int = 538283; // 0x80f PushI
	var_721_int = -1; // 0x810 PushI
	var_722_int = 40165; // 0x811 PushI
	AddReply(var_720_int, var_721_int, var_722_int); // 0x812 TObjFunc
	return 0; // 0x814 Return
	
Label_2069:
	var_723_int = 40135; // 0x815 PushI
	var_724_bool = var_18_object == var_723_int; // 0x816 Eq
	if(var_724_bool == 0) goto Label_2092; // 0x817 JumpB
	var_725_string = ""; // 0x818 PushV
	var_725_string = "Neutral"; // 0x819 MovS
	func_601(var_19_bool, var_725_string); // 0x81a NEW_2
	var_726_int = 538254; // 0x81c PushI
	SetMessage(var_726_int); // 0x81d TObjFunc
	ClearReplies(); // 0x81f TObjFunc
	var_727_int = 538255; // 0x821 PushI
	var_728_int = 40137; // 0x822 PushI
	var_729_int = 40136; // 0x823 PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0x824 TObjFunc
	var_730_int = 538271; // 0x826 PushI
	var_731_int = -1; // 0x827 PushI
	var_732_int = 40153; // 0x828 PushI
	AddReply(var_730_int, var_731_int, var_732_int); // 0x829 TObjFunc
	return 0; // 0x82b Return
	
Label_2092:
	var_733_int = 40137; // 0x82c PushI
	var_734_bool = var_18_object == var_733_int; // 0x82d Eq
	if(var_734_bool == 0) goto Label_2120; // 0x82e JumpB
	var_735_string = ""; // 0x82f PushV
	var_735_string = "Neutral"; // 0x830 MovS
	func_601(var_19_bool, var_735_string); // 0x831 NEW_2
	var_736_int = 538256; // 0x833 PushI
	SetMessage(var_736_int); // 0x834 TObjFunc
	ClearReplies(); // 0x836 TObjFunc
	var_737_int = 538257; // 0x838 PushI
	var_738_int = 40139; // 0x839 PushI
	var_739_int = 40138; // 0x83a PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0x83b TObjFunc
	var_740_int = 538269; // 0x83d PushI
	var_741_int = 40139; // 0x83e PushI
	var_742_int = 40150; // 0x83f PushI
	AddReply(var_740_int, var_741_int, var_742_int); // 0x840 TObjFunc
	var_743_int = 538270; // 0x842 PushI
	var_744_int = -1; // 0x843 PushI
	var_745_int = 40152; // 0x844 PushI
	AddReply(var_743_int, var_744_int, var_745_int); // 0x845 TObjFunc
	return 0; // 0x847 Return
	
Label_2120:
	var_746_int = 40139; // 0x848 PushI
	var_747_bool = var_18_object == var_746_int; // 0x849 Eq
	if(var_747_bool == 0) goto Label_2138; // 0x84a JumpB
	var_748_string = ""; // 0x84b PushV
	var_748_string = "Neutral"; // 0x84c MovS
	func_601(var_19_bool, var_748_string); // 0x84d NEW_2
	var_749_int = 538258; // 0x84f PushI
	SetMessage(var_749_int); // 0x850 TObjFunc
	ClearReplies(); // 0x852 TObjFunc
	var_750_int = 538259; // 0x854 PushI
	var_751_int = 40141; // 0x855 PushI
	var_752_int = 40140; // 0x856 PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0x857 TObjFunc
	return 0; // 0x859 Return
	
Label_2138:
	var_753_int = 40141; // 0x85a PushI
	var_754_bool = var_18_object == var_753_int; // 0x85b Eq
	if(var_754_bool == 0) goto Label_2161; // 0x85c JumpB
	var_755_string = ""; // 0x85d PushV
	var_755_string = "Neutral"; // 0x85e MovS
	func_601(var_19_bool, var_755_string); // 0x85f NEW_2
	var_756_int = 538260; // 0x861 PushI
	SetMessage(var_756_int); // 0x862 TObjFunc
	ClearReplies(); // 0x864 TObjFunc
	var_757_int = 538261; // 0x866 PushI
	var_758_int = 40143; // 0x867 PushI
	var_759_int = 40142; // 0x868 PushI
	AddReply(var_757_int, var_758_int, var_759_int); // 0x869 TObjFunc
	var_760_int = 538265; // 0x86b PushI
	var_761_int = 40147; // 0x86c PushI
	var_762_int = 40146; // 0x86d PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0x86e TObjFunc
	return 0; // 0x870 Return
	
Label_2161:
	var_763_int = 40147; // 0x871 PushI
	var_764_bool = var_18_object == var_763_int; // 0x872 Eq
	if(var_764_bool == 0) goto Label_2184; // 0x873 JumpB
	var_765_string = ""; // 0x874 PushV
	var_765_string = "Neutral"; // 0x875 MovS
	func_601(var_19_bool, var_765_string); // 0x876 NEW_2
	var_766_int = 538266; // 0x878 PushI
	SetMessage(var_766_int); // 0x879 TObjFunc
	ClearReplies(); // 0x87b TObjFunc
	var_767_int = 538267; // 0x87d PushI
	var_768_int = -1; // 0x87e PushI
	var_769_int = 40148; // 0x87f PushI
	AddReply(var_767_int, var_768_int, var_769_int); // 0x880 TObjFunc
	var_770_int = 538268; // 0x882 PushI
	var_771_int = -1; // 0x883 PushI
	var_772_int = 40149; // 0x884 PushI
	AddReply(var_770_int, var_771_int, var_772_int); // 0x885 TObjFunc
	return 0; // 0x887 Return
	
Label_2184:
	var_773_int = 40143; // 0x888 PushI
	var_774_bool = var_18_object == var_773_int; // 0x889 Eq
	if(var_774_bool == 0) goto Label_2207; // 0x88a JumpB
	var_775_string = ""; // 0x88b PushV
	var_775_string = "Neutral"; // 0x88c MovS
	func_601(var_19_bool, var_775_string); // 0x88d NEW_2
	var_776_int = 538262; // 0x88f PushI
	SetMessage(var_776_int); // 0x890 TObjFunc
	ClearReplies(); // 0x892 TObjFunc
	var_777_int = 538263; // 0x894 PushI
	var_778_int = -1; // 0x895 PushI
	var_779_int = 40144; // 0x896 PushI
	AddReply(var_777_int, var_778_int, var_779_int); // 0x897 TObjFunc
	var_780_int = 538264; // 0x899 PushI
	var_781_int = -1; // 0x89a PushI
	var_782_int = 40145; // 0x89b PushI
	AddReply(var_780_int, var_781_int, var_782_int); // 0x89c TObjFunc
	return 0; // 0x89e Return
	
Label_2207:
	var_783_int = 40114; // 0x89f PushI
	var_784_bool = var_18_object == var_783_int; // 0x8a0 Eq
	if(var_784_bool == 0) goto Label_2230; // 0x8a1 JumpB
	var_785_string = ""; // 0x8a2 PushV
	var_785_string = "Neutral"; // 0x8a3 MovS
	func_601(var_19_bool, var_785_string); // 0x8a4 NEW_2
	var_786_int = 538236; // 0x8a6 PushI
	SetMessage(var_786_int); // 0x8a7 TObjFunc
	ClearReplies(); // 0x8a9 TObjFunc
	var_787_int = 538237; // 0x8ab PushI
	var_788_int = 40116; // 0x8ac PushI
	var_789_int = 40115; // 0x8ad PushI
	AddReply(var_787_int, var_788_int, var_789_int); // 0x8ae TObjFunc
	var_790_int = 538252; // 0x8b0 PushI
	var_791_int = -1; // 0x8b1 PushI
	var_792_int = 40133; // 0x8b2 PushI
	AddReply(var_790_int, var_791_int, var_792_int); // 0x8b3 TObjFunc
	return 0; // 0x8b5 Return
	
Label_2230:
	var_793_int = 40116; // 0x8b6 PushI
	var_794_bool = var_18_object == var_793_int; // 0x8b7 Eq
	if(var_794_bool == 0) goto Label_2253; // 0x8b8 JumpB
	var_795_string = ""; // 0x8b9 PushV
	var_795_string = "Neutral"; // 0x8ba MovS
	func_601(var_19_bool, var_795_string); // 0x8bb NEW_2
	var_796_int = 538238; // 0x8bd PushI
	SetMessage(var_796_int); // 0x8be TObjFunc
	ClearReplies(); // 0x8c0 TObjFunc
	var_797_int = 538239; // 0x8c2 PushI
	var_798_int = 40118; // 0x8c3 PushI
	var_799_int = 40117; // 0x8c4 PushI
	AddReply(var_797_int, var_798_int, var_799_int); // 0x8c5 TObjFunc
	var_800_int = 538251; // 0x8c7 PushI
	var_801_int = 40120; // 0x8c8 PushI
	var_802_int = 40131; // 0x8c9 PushI
	AddReply(var_800_int, var_801_int, var_802_int); // 0x8ca TObjFunc
	return 0; // 0x8cc Return
	
Label_2253:
	var_803_int = 40118; // 0x8cd PushI
	var_804_bool = var_18_object == var_803_int; // 0x8ce Eq
	if(var_804_bool == 0) goto Label_2276; // 0x8cf JumpB
	var_805_string = ""; // 0x8d0 PushV
	var_805_string = "Neutral"; // 0x8d1 MovS
	func_601(var_19_bool, var_805_string); // 0x8d2 NEW_2
	var_806_int = 538240; // 0x8d4 PushI
	SetMessage(var_806_int); // 0x8d5 TObjFunc
	ClearReplies(); // 0x8d7 TObjFunc
	var_807_int = 538241; // 0x8d9 PushI
	var_808_int = 40120; // 0x8da PushI
	var_809_int = 40119; // 0x8db PushI
	AddReply(var_807_int, var_808_int, var_809_int); // 0x8dc TObjFunc
	var_810_int = 538250; // 0x8de PushI
	var_811_int = 40120; // 0x8df PushI
	var_812_int = 40129; // 0x8e0 PushI
	AddReply(var_810_int, var_811_int, var_812_int); // 0x8e1 TObjFunc
	return 0; // 0x8e3 Return
	
Label_2276:
	var_813_int = 40120; // 0x8e4 PushI
	var_814_bool = var_18_object == var_813_int; // 0x8e5 Eq
	if(var_814_bool == 0) goto Label_2299; // 0x8e6 JumpB
	var_815_string = ""; // 0x8e7 PushV
	var_815_string = "Neutral"; // 0x8e8 MovS
	func_601(var_19_bool, var_815_string); // 0x8e9 NEW_2
	var_816_int = 538242; // 0x8eb PushI
	SetMessage(var_816_int); // 0x8ec TObjFunc
	ClearReplies(); // 0x8ee TObjFunc
	var_817_int = 538243; // 0x8f0 PushI
	var_818_int = 40122; // 0x8f1 PushI
	var_819_int = 40121; // 0x8f2 PushI
	AddReply(var_817_int, var_818_int, var_819_int); // 0x8f3 TObjFunc
	var_820_int = 538249; // 0x8f5 PushI
	var_821_int = 40124; // 0x8f6 PushI
	var_822_int = 40127; // 0x8f7 PushI
	AddReply(var_820_int, var_821_int, var_822_int); // 0x8f8 TObjFunc
	return 0; // 0x8fa Return
	
Label_2299:
	var_823_int = 40122; // 0x8fb PushI
	var_824_bool = var_18_object == var_823_int; // 0x8fc Eq
	if(var_824_bool == 0) goto Label_2317; // 0x8fd JumpB
	var_825_string = ""; // 0x8fe PushV
	var_825_string = "Neutral"; // 0x8ff MovS
	func_601(var_19_bool, var_825_string); // 0x900 NEW_2
	var_826_int = 538244; // 0x902 PushI
	SetMessage(var_826_int); // 0x903 TObjFunc
	ClearReplies(); // 0x905 TObjFunc
	var_827_int = 538245; // 0x907 PushI
	var_828_int = 40124; // 0x908 PushI
	var_829_int = 40123; // 0x909 PushI
	AddReply(var_827_int, var_828_int, var_829_int); // 0x90a TObjFunc
	return 0; // 0x90c Return
	
Label_2317:
	var_830_int = 40124; // 0x90d PushI
	var_831_bool = var_18_object == var_830_int; // 0x90e Eq
	if(var_831_bool == 0) goto Label_2340; // 0x90f JumpB
	var_832_string = ""; // 0x910 PushV
	var_832_string = "Neutral"; // 0x911 MovS
	func_601(var_19_bool, var_832_string); // 0x912 NEW_2
	var_833_int = 538246; // 0x914 PushI
	SetMessage(var_833_int); // 0x915 TObjFunc
	ClearReplies(); // 0x917 TObjFunc
	var_834_int = 538247; // 0x919 PushI
	var_835_int = -1; // 0x91a PushI
	var_836_int = 40125; // 0x91b PushI
	AddReply(var_834_int, var_835_int, var_836_int); // 0x91c TObjFunc
	var_837_int = 538248; // 0x91e PushI
	var_838_int = -1; // 0x91f PushI
	var_839_int = 40126; // 0x920 PushI
	AddReply(var_837_int, var_838_int, var_839_int); // 0x921 TObjFunc
	return 0; // 0x923 Return
	
Label_2340:
	var_840_int = 40100; // 0x924 PushI
	var_841_bool = var_18_object == var_840_int; // 0x925 Eq
	if(var_841_bool == 0) goto Label_2363; // 0x926 JumpB
	var_842_string = ""; // 0x927 PushV
	var_842_string = "Neutral"; // 0x928 MovS
	func_601(var_19_bool, var_842_string); // 0x929 NEW_2
	var_843_int = 538223; // 0x92b PushI
	SetMessage(var_843_int); // 0x92c TObjFunc
	ClearReplies(); // 0x92e TObjFunc
	var_844_int = 538224; // 0x930 PushI
	var_845_int = 40102; // 0x931 PushI
	var_846_int = 40101; // 0x932 PushI
	AddReply(var_844_int, var_845_int, var_846_int); // 0x933 TObjFunc
	var_847_int = 538234; // 0x935 PushI
	var_848_int = -1; // 0x936 PushI
	var_849_int = 40112; // 0x937 PushI
	AddReply(var_847_int, var_848_int, var_849_int); // 0x938 TObjFunc
	return 0; // 0x93a Return
	
Label_2363:
	var_850_int = 40102; // 0x93b PushI
	var_851_bool = var_18_object == var_850_int; // 0x93c Eq
	if(var_851_bool == 0) goto Label_2386; // 0x93d JumpB
	var_852_string = ""; // 0x93e PushV
	var_852_string = "Neutral"; // 0x93f MovS
	func_601(var_19_bool, var_852_string); // 0x940 NEW_2
	var_853_int = 538225; // 0x942 PushI
	SetMessage(var_853_int); // 0x943 TObjFunc
	ClearReplies(); // 0x945 TObjFunc
	var_854_int = 538226; // 0x947 PushI
	var_855_int = 40104; // 0x948 PushI
	var_856_int = 40103; // 0x949 PushI
	AddReply(var_854_int, var_855_int, var_856_int); // 0x94a TObjFunc
	var_857_int = 538230; // 0x94c PushI
	var_858_int = 40108; // 0x94d PushI
	var_859_int = 40107; // 0x94e PushI
	AddReply(var_857_int, var_858_int, var_859_int); // 0x94f TObjFunc
	return 0; // 0x951 Return
	
Label_2386:
	var_860_int = 40108; // 0x952 PushI
	var_861_bool = var_18_object == var_860_int; // 0x953 Eq
	if(var_861_bool == 0) goto Label_2409; // 0x954 JumpB
	var_862_string = ""; // 0x955 PushV
	var_862_string = "Neutral"; // 0x956 MovS
	func_601(var_19_bool, var_862_string); // 0x957 NEW_2
	var_863_int = 538231; // 0x959 PushI
	SetMessage(var_863_int); // 0x95a TObjFunc
	ClearReplies(); // 0x95c TObjFunc
	var_864_int = 538232; // 0x95e PushI
	var_865_int = 40104; // 0x95f PushI
	var_866_int = 40109; // 0x960 PushI
	AddReply(var_864_int, var_865_int, var_866_int); // 0x961 TObjFunc
	var_867_int = 538233; // 0x963 PushI
	var_868_int = -1; // 0x964 PushI
	var_869_int = 40111; // 0x965 PushI
	AddReply(var_867_int, var_868_int, var_869_int); // 0x966 TObjFunc
	return 0; // 0x968 Return
	
Label_2409:
	var_870_int = 40104; // 0x969 PushI
	var_871_bool = var_18_object == var_870_int; // 0x96a Eq
	if(var_871_bool == 0) goto Label_2432; // 0x96b JumpB
	var_872_string = ""; // 0x96c PushV
	var_872_string = "Neutral"; // 0x96d MovS
	func_601(var_19_bool, var_872_string); // 0x96e NEW_2
	var_873_int = 538227; // 0x970 PushI
	SetMessage(var_873_int); // 0x971 TObjFunc
	ClearReplies(); // 0x973 TObjFunc
	var_874_int = 538228; // 0x975 PushI
	var_875_int = -1; // 0x976 PushI
	var_876_int = 40105; // 0x977 PushI
	AddReply(var_874_int, var_875_int, var_876_int); // 0x978 TObjFunc
	var_877_int = 538229; // 0x97a PushI
	var_878_int = -1; // 0x97b PushI
	var_879_int = 40106; // 0x97c PushI
	AddReply(var_877_int, var_878_int, var_879_int); // 0x97d TObjFunc
	return 0; // 0x97f Return
	
Label_2432:
	var_880_int = 40089; // 0x980 PushI
	var_881_bool = var_18_object == var_880_int; // 0x981 Eq
	if(var_881_bool == 0) goto Label_2450; // 0x982 JumpB
	var_882_string = ""; // 0x983 PushV
	var_882_string = "Neutral"; // 0x984 MovS
	func_601(var_19_bool, var_882_string); // 0x985 NEW_2
	var_883_int = 538212; // 0x987 PushI
	SetMessage(var_883_int); // 0x988 TObjFunc
	ClearReplies(); // 0x98a TObjFunc
	var_884_int = 538213; // 0x98c PushI
	var_885_int = 40091; // 0x98d PushI
	var_886_int = 40090; // 0x98e PushI
	AddReply(var_884_int, var_885_int, var_886_int); // 0x98f TObjFunc
	return 0; // 0x991 Return
	
Label_2450:
	var_887_int = 40091; // 0x992 PushI
	var_888_bool = var_18_object == var_887_int; // 0x993 Eq
	if(var_888_bool == 0) goto Label_2473; // 0x994 JumpB
	var_889_string = ""; // 0x995 PushV
	var_889_string = "Neutral"; // 0x996 MovS
	func_601(var_19_bool, var_889_string); // 0x997 NEW_2
	var_890_int = 538214; // 0x999 PushI
	SetMessage(var_890_int); // 0x99a TObjFunc
	ClearReplies(); // 0x99c TObjFunc
	var_891_int = 538215; // 0x99e PushI
	var_892_int = 40093; // 0x99f PushI
	var_893_int = 40092; // 0x9a0 PushI
	AddReply(var_891_int, var_892_int, var_893_int); // 0x9a1 TObjFunc
	var_894_int = 538221; // 0x9a3 PushI
	var_895_int = -1; // 0x9a4 PushI
	var_896_int = 40098; // 0x9a5 PushI
	AddReply(var_894_int, var_895_int, var_896_int); // 0x9a6 TObjFunc
	return 0; // 0x9a8 Return
	
Label_2473:
	var_897_int = 40093; // 0x9a9 PushI
	var_898_bool = var_18_object == var_897_int; // 0x9aa Eq
	if(var_898_bool == 0) goto Label_2491; // 0x9ab JumpB
	var_899_string = ""; // 0x9ac PushV
	var_899_string = "Neutral"; // 0x9ad MovS
	func_601(var_19_bool, var_899_string); // 0x9ae NEW_2
	var_900_int = 538216; // 0x9b0 PushI
	SetMessage(var_900_int); // 0x9b1 TObjFunc
	ClearReplies(); // 0x9b3 TObjFunc
	var_901_int = 538217; // 0x9b5 PushI
	var_902_int = 40095; // 0x9b6 PushI
	var_903_int = 40094; // 0x9b7 PushI
	AddReply(var_901_int, var_902_int, var_903_int); // 0x9b8 TObjFunc
	return 0; // 0x9ba Return
	
Label_2491:
	var_904_int = 40095; // 0x9bb PushI
	var_905_bool = var_18_object == var_904_int; // 0x9bc Eq
	if(var_905_bool == 0) goto Label_2514; // 0x9bd JumpB
	var_906_string = ""; // 0x9be PushV
	var_906_string = "Neutral"; // 0x9bf MovS
	func_601(var_19_bool, var_906_string); // 0x9c0 NEW_2
	var_907_int = 538218; // 0x9c2 PushI
	SetMessage(var_907_int); // 0x9c3 TObjFunc
	ClearReplies(); // 0x9c5 TObjFunc
	var_908_int = 538219; // 0x9c7 PushI
	var_909_int = -1; // 0x9c8 PushI
	var_910_int = 40096; // 0x9c9 PushI
	AddReply(var_908_int, var_909_int, var_910_int); // 0x9ca TObjFunc
	var_911_int = 538220; // 0x9cc PushI
	var_912_int = -1; // 0x9cd PushI
	var_913_int = 40097; // 0x9ce PushI
	AddReply(var_911_int, var_912_int, var_913_int); // 0x9cf TObjFunc
	return 0; // 0x9d1 Return
	
Label_2514:
	var_914_int = 45520; // 0x9d2 PushI
	var_915_bool = var_18_object == var_914_int; // 0x9d3 Eq
	if(var_915_bool == 0) goto Label_2542; // 0x9d4 JumpB
	var_916_string = ""; // 0x9d5 PushV
	var_916_string = "Neutral"; // 0x9d6 MovS
	func_601(var_19_bool, var_916_string); // 0x9d7 NEW_2
	var_917_int = 543065; // 0x9d9 PushI
	SetMessage(var_917_int); // 0x9da TObjFunc
	ClearReplies(); // 0x9dc TObjFunc
	var_918_int = 543066; // 0x9de PushI
	var_919_int = -1; // 0x9df PushI
	var_920_int = 45521; // 0x9e0 PushI
	AddReply(var_918_int, var_919_int, var_920_int); // 0x9e1 TObjFunc
	var_921_int = 543067; // 0x9e3 PushI
	var_922_int = 45524; // 0x9e4 PushI
	var_923_int = 45522; // 0x9e5 PushI
	AddReply(var_921_int, var_922_int, var_923_int); // 0x9e6 TObjFunc
	var_924_int = 543068; // 0x9e8 PushI
	var_925_int = -1; // 0x9e9 PushI
	var_926_int = 45523; // 0x9ea PushI
	AddReply(var_924_int, var_925_int, var_926_int); // 0x9eb TObjFunc
	return 0; // 0x9ed Return
	
Label_2542:
	var_927_int = 45524; // 0x9ee PushI
	var_928_bool = var_18_object == var_927_int; // 0x9ef Eq
	if(var_928_bool == 0) goto Label_2565; // 0x9f0 JumpB
	var_929_string = ""; // 0x9f1 PushV
	var_929_string = "Neutral"; // 0x9f2 MovS
	func_601(var_19_bool, var_929_string); // 0x9f3 NEW_2
	var_930_int = 543069; // 0x9f5 PushI
	SetMessage(var_930_int); // 0x9f6 TObjFunc
	ClearReplies(); // 0x9f8 TObjFunc
	var_931_int = 543070; // 0x9fa PushI
	var_932_int = -1; // 0x9fb PushI
	var_933_int = 45525; // 0x9fc PushI
	AddReply(var_931_int, var_932_int, var_933_int); // 0x9fd TObjFunc
	var_934_int = 543071; // 0x9ff PushI
	var_935_int = -1; // 0xa00 PushI
	var_936_int = 45526; // 0xa01 PushI
	AddReply(var_934_int, var_935_int, var_936_int); // 0xa02 TObjFunc
	return 0; // 0xa04 Return
	
Label_2565:
	var_937_int = 45513; // 0xa05 PushI
	var_938_bool = var_18_object == var_937_int; // 0xa06 Eq
	if(var_938_bool == 0) goto Label_2593; // 0xa07 JumpB
	var_939_string = ""; // 0xa08 PushV
	var_939_string = "Neutral"; // 0xa09 MovS
	func_601(var_19_bool, var_939_string); // 0xa0a NEW_2
	var_940_int = 543058; // 0xa0c PushI
	SetMessage(var_940_int); // 0xa0d TObjFunc
	ClearReplies(); // 0xa0f TObjFunc
	var_941_int = 543059; // 0xa11 PushI
	var_942_int = -1; // 0xa12 PushI
	var_943_int = 45514; // 0xa13 PushI
	AddReply(var_941_int, var_942_int, var_943_int); // 0xa14 TObjFunc
	var_944_int = 543060; // 0xa16 PushI
	var_945_int = -1; // 0xa17 PushI
	var_946_int = 45515; // 0xa18 PushI
	AddReply(var_944_int, var_945_int, var_946_int); // 0xa19 TObjFunc
	var_947_int = 543061; // 0xa1b PushI
	var_948_int = -1; // 0xa1c PushI
	var_949_int = 45516; // 0xa1d PushI
	AddReply(var_947_int, var_948_int, var_949_int); // 0xa1e TObjFunc
	return 0; // 0xa20 Return
	
Label_2593:
	var_950_int = 45498; // 0xa21 PushI
	var_951_bool = var_18_object == var_950_int; // 0xa22 Eq
	if(var_951_bool == 0) goto Label_2626; // 0xa23 JumpB
	var_952_string = ""; // 0xa24 PushV
	var_952_string = "Neutral"; // 0xa25 MovS
	func_601(var_19_bool, var_952_string); // 0xa26 NEW_2
	var_953_int = 543046; // 0xa28 PushI
	SetMessage(var_953_int); // 0xa29 TObjFunc
	ClearReplies(); // 0xa2b TObjFunc
	var_954_int = 543047; // 0xa2d PushI
	var_955_int = 45506; // 0xa2e PushI
	var_956_int = 45499; // 0xa2f PushI
	AddReply(var_954_int, var_955_int, var_956_int); // 0xa30 TObjFunc
	var_957_int = 543050; // 0xa32 PushI
	var_958_int = 45503; // 0xa33 PushI
	var_959_int = 45502; // 0xa34 PushI
	AddReply(var_957_int, var_958_int, var_959_int); // 0xa35 TObjFunc
	var_960_int = 543048; // 0xa37 PushI
	var_961_int = -1; // 0xa38 PushI
	var_962_int = 45500; // 0xa39 PushI
	AddReply(var_960_int, var_961_int, var_962_int); // 0xa3a TObjFunc
	var_963_int = 543049; // 0xa3c PushI
	var_964_int = -1; // 0xa3d PushI
	var_965_int = 45501; // 0xa3e PushI
	AddReply(var_963_int, var_964_int, var_965_int); // 0xa3f TObjFunc
	return 0; // 0xa41 Return
	
Label_2626:
	var_966_int = 45503; // 0xa42 PushI
	var_967_bool = var_18_object == var_966_int; // 0xa43 Eq
	if(var_967_bool == 0) goto Label_2644; // 0xa44 JumpB
	var_968_string = ""; // 0xa45 PushV
	var_968_string = "Neutral"; // 0xa46 MovS
	func_601(var_19_bool, var_968_string); // 0xa47 NEW_2
	var_969_int = 543051; // 0xa49 PushI
	SetMessage(var_969_int); // 0xa4a TObjFunc
	ClearReplies(); // 0xa4c TObjFunc
	var_970_int = 543054; // 0xa4e PushI
	var_971_int = -1; // 0xa4f PushI
	var_972_int = 45509; // 0xa50 PushI
	AddReply(var_970_int, var_971_int, var_972_int); // 0xa51 TObjFunc
	return 0; // 0xa53 Return
	
Label_2644:
	var_973_int = 45506; // 0xa54 PushI
	var_974_bool = var_18_object == var_973_int; // 0xa55 Eq
	if(var_974_bool == 0) goto Label_2662; // 0xa56 JumpB
	var_975_string = ""; // 0xa57 PushV
	var_975_string = "Neutral"; // 0xa58 MovS
	func_601(var_19_bool, var_975_string); // 0xa59 NEW_2
	var_976_int = 543052; // 0xa5b PushI
	SetMessage(var_976_int); // 0xa5c TObjFunc
	ClearReplies(); // 0xa5e TObjFunc
	var_977_int = 543053; // 0xa60 PushI
	var_978_int = -1; // 0xa61 PushI
	var_979_int = 45507; // 0xa62 PushI
	AddReply(var_977_int, var_978_int, var_979_int); // 0xa63 TObjFunc
	return 0; // 0xa65 Return
	
Label_2662:
	var_3_string = 1; // 0xa66 TMovB
	var_980_bool = 0; // 0xa67 PushV
	func_6533(var_980_bool); // 0xa68 NEW_2
	if(var_980_bool == 0) goto Label_2670; // 0xa6a JumpB
	lshStopAnimation(); // 0xa6b Func
	goto Label_2672; // 0xa6d Jump
	
Label_2672:
	return 0; // 0xa70 Return
	
Label_2670:
	StopAnimation(); // 0xa6e Func
	
Label_2674:
	return 0; // 0xa72 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xa82 PushV
	var_21_int = 0; var_22_object = Obj(); // 0xa83 PushV
	var_22_object = var_18_bool; // 0xa84 Mov
	func_6309(var_22_object); // 0xa85 NEW_2
	var_20_int = var_21_int; // 0xa86 Mov
	var_23_int = 0; // 0xa88 PushI
	var_24_bool = var_20_int > var_23_int; // 0xa89 GT
	if(var_24_bool == 0) goto Label_2703; // 0xa8a JumpB
	var_25_object = Obj(); // 0xa8b PushV
	var_25_object = var_18_bool; // 0xa8c Mov
	func_6312(var_25_object); // 0xa8d NEW_2
	
Label_2703:
	return 2; // 0xa8f Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_6318(); // 0xa91 NEW_2
	return 0; // 0xa93 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	return 0; // 0xb0a Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0xb0c Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0xb0e Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xb27 PushV
	var_21_int = 0; var_22_object = Obj(); // 0xb28 PushV
	var_22_object = var_18_bool; // 0xb29 Mov
	func_6309(var_22_object); // 0xb2a NEW_2
	var_20_int = var_21_int; // 0xb2b Mov
	var_23_int = 0; // 0xb2d PushI
	var_24_bool = var_20_int > var_23_int; // 0xb2e GT
	if(var_24_bool == 0) goto Label_2874; // 0xb2f JumpB
	var_25_int = 1; // 0xb30 PushI
	var_26_bool = var_20_int > var_25_int; // 0xb31 GT
	if(var_26_bool == 0) goto Label_2870; // 0xb32 JumpB
	func_3042(var_20_int); // 0xb34 NEW_2
	
Label_2870:
	var_28_object = Obj(); // 0xb36 PushV
	var_28_object = var_18_bool; // 0xb37 Mov
	func_6312(var_28_object); // 0xb38 NEW_2
	
Label_2874:
	return 2; // 0xb3a Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xb3b PushV
	var_21_object = Obj(); // 0xb3c PushV
	var_21_object = var_18_bool; // 0xb3d Mov
	func_6040(var_21_object); // 0xb3e NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0xb40 PushV
	var_31_object = var_18_bool; // 0xb41 Mov
	func_6123(var_30_int, var_31_object); // 0xb42 NEW_2
	var_20_int = var_30_int; // 0xb43 Mov
	var_66_int = 0; // 0xb45 PushI
	var_67_bool = var_20_int > var_66_int; // 0xb46 GT
	if(var_67_bool == 0) goto Label_2898; // 0xb47 JumpB
	var_68_int = 1; // 0xb48 PushI
	var_69_bool = var_20_int > var_68_int; // 0xb49 GT
	if(var_69_bool == 0) goto Label_2894; // 0xb4a JumpB
	func_3042(var_20_int); // 0xb4c NEW_2
	
Label_2894:
	var_71_object = Obj(); // 0xb4e PushV
	var_71_object = var_18_bool; // 0xb4f Mov
	func_6133(var_71_object); // 0xb50 NEW_2
	
Label_2898:
	return 2; // 0xb52 Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xb53 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0xb54 PushV
	var_24_object = var_18_bool; // 0xb55 Mov
	var_25_object = var_19_object; // 0xb56 Mov
	var_26_bool = var_20_bool; // 0xb57 Mov
	func_6562(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0xb58 NEW_2
	if(var_23_bool == 0) goto Label_2926; // 0xb5a JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0xb5b PushV
	var_86_object = var_18_bool; // 0xb5c Mov
	var_87_bool = var_20_bool; // 0xb5d Mov
	func_6216(var_86_object, var_87_bool); // 0xb5e NEW_2
	var_22_int = var_85_int; // 0xb5f Mov
	var_118_int = 0; // 0xb61 PushI
	var_119_bool = var_22_int > var_118_int; // 0xb62 GT
	if(var_119_bool == 0) goto Label_2926; // 0xb63 JumpB
	var_120_int = 1; // 0xb64 PushI
	var_121_bool = var_22_int > var_120_int; // 0xb65 GT
	if(var_121_bool == 0) goto Label_2922; // 0xb66 JumpB
	func_3042(var_22_int); // 0xb68 NEW_2
	
Label_2922:
	var_123_object = Obj(); // 0xb6a PushV
	var_123_object = var_18_bool; // 0xb6b Mov
	func_6223(var_123_object); // 0xb6c NEW_2
	
Label_2926:
	return 2; // 0xb6e Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xb6f PushV
	var_21_int = 0; var_22_object = Obj(); // 0xb70 PushV
	var_22_object = var_18_bool; // 0xb71 Mov
	func_6258(var_22_object); // 0xb72 NEW_2
	var_20_int = var_21_int; // 0xb73 Mov
	var_23_int = 0; // 0xb75 PushI
	var_24_bool = var_20_int > var_23_int; // 0xb76 GT
	if(var_24_bool == 0) goto Label_2946; // 0xb77 JumpB
	var_25_int = 1; // 0xb78 PushI
	var_26_bool = var_20_int > var_25_int; // 0xb79 GT
	if(var_26_bool == 0) goto Label_2942; // 0xb7a JumpB
	func_3042(var_20_int); // 0xb7c NEW_2
	
Label_2942:
	var_28_object = Obj(); // 0xb7e PushV
	var_28_object = var_18_bool; // 0xb7f Mov
	func_6261(); // 0xb80 NEW_2
	
Label_2946:
	return 2; // 0xb82 Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xb83 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0xb84 PushV
	var_23_object = var_18_object; // 0xb85 Mov
	var_24_string = var_19_bool; // 0xb86 Mov
	func_5954(var_22_bool, var_23_object, var_24_string); // 0xb87 NEW_2
	if(var_22_bool == 0) goto Label_2963; // 0xb89 JumpB
	func_3042(var_21_int); // 0xb8b NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0xb8d PushV
	var_51_object = var_18_object; // 0xb8e Mov
	var_52_string = var_19_bool; // 0xb8f Mov
	func_5986(var_51_object, var_52_string); // 0xb90 NEW_2
	goto Label_2983; // 0xb92 Jump
	
Label_2983:
	return 2; // 0xba7 Return
	
Label_2963:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0xb93 PushV
	var_128_string = var_19_bool; // 0xb94 Mov
	var_129_object = var_18_object; // 0xb95 Mov
	func_6263(var_127_int, var_128_string, var_129_object); // 0xb96 NEW_2
	var_21_int = var_127_int; // 0xb97 Mov
	var_171_int = 0; // 0xb99 PushI
	var_172_bool = var_21_int > var_171_int; // 0xb9a GT
	if(var_172_bool == 0) goto Label_2983; // 0xb9b JumpB
	var_173_int = 1; // 0xb9c PushI
	var_174_bool = var_21_int > var_173_int; // 0xb9d GT
	if(var_174_bool == 0) goto Label_2978; // 0xb9e JumpB
	func_3042(var_21_int); // 0xba0 NEW_2
	
Label_2978:
	var_175_string = ""; var_176_object = Obj(); // 0xba2 PushV
	var_175_string = var_19_bool; // 0xba3 Mov
	var_176_object = var_18_object; // 0xba4 Mov
	func_6275(var_175_string, var_176_object); // 0xba5 NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0xba9 PushV
	var_20_string = var_18_bool; // 0xbaa Mov
	func_6053(var_19_bool, var_20_string); // 0xbab NEW_2
	if(var_19_bool == 0) goto Label_2997; // 0xbad JumpB
	func_3042(var_18_bool); // 0xbaf NEW_2
	var_29_string = ""; // 0xbb1 PushV
	var_29_string = var_18_bool; // 0xbb2 Mov
	func_6069(var_29_string); // 0xbb3 NEW_2
	
Label_2997:
	return 0; // 0xbb5 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0xbb7 PushV
	var_20_object = var_18_bool; // 0xbb8 Mov
	func_6011(var_19_bool, var_20_object); // 0xbb9 NEW_2
	if(var_19_bool == 0) goto Label_3012; // 0xbbb JumpB
	func_3042(var_18_bool); // 0xbbd NEW_2
	var_32_object = Obj(); // 0xbbf PushV
	var_32_object = var_18_bool; // 0xbc0 Mov
	func_6034(var_32_object); // 0xbc1 NEW_2
	goto Label_3016; // 0xbc3 Jump
	
Label_3016:
	return 0; // 0xbc8 Return
	
Label_3012:
	var_34_object = Obj(); // 0xbc4 PushV
	var_34_object = var_18_bool; // 0xbc5 Mov
	func_3067(var_18_bool, var_34_object); // 0xbc6 NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_object = Obj(); // 0xbca PushV
	var_19_object = var_18_bool; // 0xbcb Mov
	func_3067(var_18_bool, var_19_object); // 0xbcc NEW_2
	return 0; // 0xbce Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 110; // 0xbd0 PushI
	var_20_bool = var_18_bool != var_19_int; // 0xbd1 Neq
	if(var_20_bool == 0) goto Label_3028; // 0xbd2 JumpB
	return 0; // 0xbd3 Return
	
Label_3028:
	var_2_object = 0; // 0xbd4 TMovB
	var_21_int = 110; // 0xbd5 PushI
	KillTimer(var_21_int); // 0xbd6 Func
	ResetAAS(); // 0xbd8 Func
	return 0; // 0xbda Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3042(var_17_bool); // 0xbdc NEW_2
	func_6318(); // 0xbdf NEW_2
	return 0; // 0xbe1 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3042(var_18_bool); // 0xbf4 NEW_2
	var_20_object = Obj(); // 0xbf6 PushV
	var_20_object = var_18_bool; // 0xbf7 Mov
	func_5930(); // 0xbf8 NEW_2
	return 0; // 0xbfa Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	RequestClearPath(var_18_bool); // 0xc64 Func
	return 0; // 0xc66 Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	Stop(); // 0xc67 Func
	return 0; // 0xc69 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xc80 PushV
	var_21_int = 0; var_22_object = Obj(); // 0xc81 PushV
	var_22_object = var_18_bool; // 0xc82 Mov
	func_6309(var_22_object); // 0xc83 NEW_2
	var_20_int = var_21_int; // 0xc84 Mov
	var_23_int = 0; // 0xc86 PushI
	var_24_bool = var_20_int > var_23_int; // 0xc87 GT
	if(var_24_bool == 0) goto Label_3219; // 0xc88 JumpB
	var_25_int = 1; // 0xc89 PushI
	var_26_bool = var_20_int > var_25_int; // 0xc8a GT
	if(var_26_bool == 0) goto Label_3215; // 0xc8b JumpB
	func_3445(); // 0xc8d NEW_2
	
Label_3215:
	var_27_object = Obj(); // 0xc8f PushV
	var_27_object = var_18_bool; // 0xc90 Mov
	func_6312(var_27_object); // 0xc91 NEW_2
	
Label_3219:
	return 2; // 0xc93 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xc94 PushV
	var_21_object = Obj(); // 0xc95 PushV
	var_21_object = var_18_bool; // 0xc96 Mov
	func_6040(var_21_object); // 0xc97 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0xc99 PushV
	var_31_object = var_18_bool; // 0xc9a Mov
	func_6123(var_30_int, var_31_object); // 0xc9b NEW_2
	var_20_int = var_30_int; // 0xc9c Mov
	var_66_int = 0; // 0xc9e PushI
	var_67_bool = var_20_int > var_66_int; // 0xc9f GT
	if(var_67_bool == 0) goto Label_3243; // 0xca0 JumpB
	var_68_int = 1; // 0xca1 PushI
	var_69_bool = var_20_int > var_68_int; // 0xca2 GT
	if(var_69_bool == 0) goto Label_3239; // 0xca3 JumpB
	func_3445(); // 0xca5 NEW_2
	
Label_3239:
	var_70_object = Obj(); // 0xca7 PushV
	var_70_object = var_18_bool; // 0xca8 Mov
	func_6133(var_70_object); // 0xca9 NEW_2
	
Label_3243:
	return 2; // 0xcab Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xcac PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0xcad PushV
	var_24_object = var_18_bool; // 0xcae Mov
	var_25_object = var_19_object; // 0xcaf Mov
	var_26_bool = var_20_bool; // 0xcb0 Mov
	func_6562(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0xcb1 NEW_2
	if(var_23_bool == 0) goto Label_3271; // 0xcb3 JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0xcb4 PushV
	var_86_object = var_18_bool; // 0xcb5 Mov
	var_87_bool = var_20_bool; // 0xcb6 Mov
	func_6216(var_86_object, var_87_bool); // 0xcb7 NEW_2
	var_22_int = var_85_int; // 0xcb8 Mov
	var_118_int = 0; // 0xcba PushI
	var_119_bool = var_22_int > var_118_int; // 0xcbb GT
	if(var_119_bool == 0) goto Label_3271; // 0xcbc JumpB
	var_120_int = 1; // 0xcbd PushI
	var_121_bool = var_22_int > var_120_int; // 0xcbe GT
	if(var_121_bool == 0) goto Label_3267; // 0xcbf JumpB
	func_3445(); // 0xcc1 NEW_2
	
Label_3267:
	var_122_object = Obj(); // 0xcc3 PushV
	var_122_object = var_18_bool; // 0xcc4 Mov
	func_6223(var_122_object); // 0xcc5 NEW_2
	
Label_3271:
	return 2; // 0xcc7 Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xcc8 PushV
	var_21_int = 0; var_22_object = Obj(); // 0xcc9 PushV
	var_22_object = var_18_bool; // 0xcca Mov
	func_6258(var_22_object); // 0xccb NEW_2
	var_20_int = var_21_int; // 0xccc Mov
	var_23_int = 0; // 0xcce PushI
	var_24_bool = var_20_int > var_23_int; // 0xccf GT
	if(var_24_bool == 0) goto Label_3291; // 0xcd0 JumpB
	var_25_int = 1; // 0xcd1 PushI
	var_26_bool = var_20_int > var_25_int; // 0xcd2 GT
	if(var_26_bool == 0) goto Label_3287; // 0xcd3 JumpB
	func_3445(); // 0xcd5 NEW_2
	
Label_3287:
	var_27_object = Obj(); // 0xcd7 PushV
	var_27_object = var_18_bool; // 0xcd8 Mov
	func_6261(); // 0xcd9 NEW_2
	
Label_3291:
	return 2; // 0xcdb Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xcdc PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0xcdd PushV
	var_23_object = var_18_object; // 0xcde Mov
	var_24_string = var_19_bool; // 0xcdf Mov
	func_5954(var_22_bool, var_23_object, var_24_string); // 0xce0 NEW_2
	if(var_22_bool == 0) goto Label_3308; // 0xce2 JumpB
	func_3445(); // 0xce4 NEW_2
	var_50_object = Obj(); var_51_string = ""; // 0xce6 PushV
	var_50_object = var_18_object; // 0xce7 Mov
	var_51_string = var_19_bool; // 0xce8 Mov
	func_5986(var_50_object, var_51_string); // 0xce9 NEW_2
	goto Label_3328; // 0xceb Jump
	
Label_3328:
	return 2; // 0xd00 Return
	
Label_3308:
	var_126_int = 0; var_127_string = ""; var_128_object = Obj(); // 0xcec PushV
	var_127_string = var_19_bool; // 0xced Mov
	var_128_object = var_18_object; // 0xcee Mov
	func_6263(var_126_int, var_127_string, var_128_object); // 0xcef NEW_2
	var_21_int = var_126_int; // 0xcf0 Mov
	var_170_int = 0; // 0xcf2 PushI
	var_171_bool = var_21_int > var_170_int; // 0xcf3 GT
	if(var_171_bool == 0) goto Label_3328; // 0xcf4 JumpB
	var_172_int = 1; // 0xcf5 PushI
	var_173_bool = var_21_int > var_172_int; // 0xcf6 GT
	if(var_173_bool == 0) goto Label_3323; // 0xcf7 JumpB
	func_3445(); // 0xcf9 NEW_2
	
Label_3323:
	var_174_string = ""; var_175_object = Obj(); // 0xcfb PushV
	var_174_string = var_19_bool; // 0xcfc Mov
	var_175_object = var_18_object; // 0xcfd Mov
	func_6275(var_174_string, var_175_object); // 0xcfe NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0xd02 PushV
	var_20_string = var_18_bool; // 0xd03 Mov
	func_6053(var_19_bool, var_20_string); // 0xd04 NEW_2
	if(var_19_bool == 0) goto Label_3342; // 0xd06 JumpB
	func_3445(); // 0xd08 NEW_2
	var_28_string = ""; // 0xd0a PushV
	var_28_string = var_18_bool; // 0xd0b Mov
	func_6069(var_28_string); // 0xd0c NEW_2
	
Label_3342:
	return 0; // 0xd0e Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3445(); // 0xd10 NEW_2
	func_6318(); // 0xd13 NEW_2
	return 0; // 0xd15 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0xd17 PushV
	var_20_object = var_18_bool; // 0xd18 Mov
	func_6011(var_19_bool, var_20_object); // 0xd19 NEW_2
	if(var_19_bool == 0) goto Label_3363; // 0xd1b JumpB
	func_3445(); // 0xd1d NEW_2
	var_31_object = Obj(); // 0xd1f PushV
	var_31_object = var_18_bool; // 0xd20 Mov
	func_6034(var_31_object); // 0xd21 NEW_2
	
Label_3363:
	return 0; // 0xd23 Return
}


task_5_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xdb2 PushV
	var_21_int = 0; var_22_object = Obj(); // 0xdb3 PushV
	var_22_object = var_18_bool; // 0xdb4 Mov
	func_6309(var_22_object); // 0xdb5 NEW_2
	var_20_int = var_21_int; // 0xdb6 Mov
	var_23_int = 0; // 0xdb8 PushI
	var_24_bool = var_20_int > var_23_int; // 0xdb9 GT
	if(var_24_bool == 0) goto Label_3525; // 0xdba JumpB
	var_25_int = 1; // 0xdbb PushI
	var_26_bool = var_20_int > var_25_int; // 0xdbc GT
	if(var_26_bool == 0) goto Label_3521; // 0xdbd JumpB
	func_3649(); // 0xdbf NEW_2
	
Label_3521:
	var_29_object = Obj(); // 0xdc1 PushV
	var_29_object = var_18_bool; // 0xdc2 Mov
	func_6312(var_29_object); // 0xdc3 NEW_2
	
Label_3525:
	return 2; // 0xdc5 Return
}


task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xdc6 PushV
	var_21_object = Obj(); // 0xdc7 PushV
	var_21_object = var_18_bool; // 0xdc8 Mov
	func_6040(var_21_object); // 0xdc9 NEW_2
	var_30_int = 0; var_31_object = Obj(); // 0xdcb PushV
	var_31_object = var_18_bool; // 0xdcc Mov
	func_6123(var_30_int, var_31_object); // 0xdcd NEW_2
	var_20_int = var_30_int; // 0xdce Mov
	var_66_int = 0; // 0xdd0 PushI
	var_67_bool = var_20_int > var_66_int; // 0xdd1 GT
	if(var_67_bool == 0) goto Label_3549; // 0xdd2 JumpB
	var_68_int = 1; // 0xdd3 PushI
	var_69_bool = var_20_int > var_68_int; // 0xdd4 GT
	if(var_69_bool == 0) goto Label_3545; // 0xdd5 JumpB
	func_3649(); // 0xdd7 NEW_2
	
Label_3545:
	var_72_object = Obj(); // 0xdd9 PushV
	var_72_object = var_18_bool; // 0xdda Mov
	func_6133(var_72_object); // 0xddb NEW_2
	
Label_3549:
	return 2; // 0xddd Return
}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xdde PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_object = Obj(); var_26_bool = 0; // 0xddf PushV
	var_24_object = var_18_bool; // 0xde0 Mov
	var_25_object = var_19_object; // 0xde1 Mov
	var_26_bool = var_20_bool; // 0xde2 Mov
	func_6562(var_23_bool, var_24_object, var_25_object, var_26_bool); // 0xde3 NEW_2
	if(var_23_bool == 0) goto Label_3577; // 0xde5 JumpB
	var_85_int = 0; var_86_object = Obj(); var_87_bool = 0; // 0xde6 PushV
	var_86_object = var_18_bool; // 0xde7 Mov
	var_87_bool = var_20_bool; // 0xde8 Mov
	func_6216(var_86_object, var_87_bool); // 0xde9 NEW_2
	var_22_int = var_85_int; // 0xdea Mov
	var_118_int = 0; // 0xdec PushI
	var_119_bool = var_22_int > var_118_int; // 0xded GT
	if(var_119_bool == 0) goto Label_3577; // 0xdee JumpB
	var_120_int = 1; // 0xdef PushI
	var_121_bool = var_22_int > var_120_int; // 0xdf0 GT
	if(var_121_bool == 0) goto Label_3573; // 0xdf1 JumpB
	func_3649(); // 0xdf3 NEW_2
	
Label_3573:
	var_124_object = Obj(); // 0xdf5 PushV
	var_124_object = var_18_bool; // 0xdf6 Mov
	func_6223(var_124_object); // 0xdf7 NEW_2
	
Label_3577:
	return 2; // 0xdf9 Return
}


task_5_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xdfa PushV
	var_21_int = 0; var_22_object = Obj(); // 0xdfb PushV
	var_22_object = var_18_bool; // 0xdfc Mov
	func_6258(var_22_object); // 0xdfd NEW_2
	var_20_int = var_21_int; // 0xdfe Mov
	var_23_int = 0; // 0xe00 PushI
	var_24_bool = var_20_int > var_23_int; // 0xe01 GT
	if(var_24_bool == 0) goto Label_3597; // 0xe02 JumpB
	var_25_int = 1; // 0xe03 PushI
	var_26_bool = var_20_int > var_25_int; // 0xe04 GT
	if(var_26_bool == 0) goto Label_3593; // 0xe05 JumpB
	func_3649(); // 0xe07 NEW_2
	
Label_3593:
	var_29_object = Obj(); // 0xe09 PushV
	var_29_object = var_18_bool; // 0xe0a Mov
	func_6261(); // 0xe0b NEW_2
	
Label_3597:
	return 2; // 0xe0d Return
}


task_5_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xe0e PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_string = ""; // 0xe0f PushV
	var_23_object = var_18_object; // 0xe10 Mov
	var_24_string = var_19_bool; // 0xe11 Mov
	func_5954(var_22_bool, var_23_object, var_24_string); // 0xe12 NEW_2
	if(var_22_bool == 0) goto Label_3614; // 0xe14 JumpB
	func_3649(); // 0xe16 NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0xe18 PushV
	var_52_object = var_18_object; // 0xe19 Mov
	var_53_string = var_19_bool; // 0xe1a Mov
	func_5986(var_52_object, var_53_string); // 0xe1b NEW_2
	goto Label_3634; // 0xe1d Jump
	
Label_3634:
	return 2; // 0xe32 Return
	
Label_3614:
	var_128_int = 0; var_129_string = ""; var_130_object = Obj(); // 0xe1e PushV
	var_129_string = var_19_bool; // 0xe1f Mov
	var_130_object = var_18_object; // 0xe20 Mov
	func_6263(var_128_int, var_129_string, var_130_object); // 0xe21 NEW_2
	var_21_int = var_128_int; // 0xe22 Mov
	var_172_int = 0; // 0xe24 PushI
	var_173_bool = var_21_int > var_172_int; // 0xe25 GT
	if(var_173_bool == 0) goto Label_3634; // 0xe26 JumpB
	var_174_int = 1; // 0xe27 PushI
	var_175_bool = var_21_int > var_174_int; // 0xe28 GT
	if(var_175_bool == 0) goto Label_3629; // 0xe29 JumpB
	func_3649(); // 0xe2b NEW_2
	
Label_3629:
	var_176_string = ""; var_177_object = Obj(); // 0xe2d PushV
	var_176_string = var_19_bool; // 0xe2e Mov
	var_177_object = var_18_object; // 0xe2f Mov
	func_6275(var_176_string, var_177_object); // 0xe30 NEW_2
}


task_5_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_string = ""; // 0xe34 PushV
	var_20_string = var_18_bool; // 0xe35 Mov
	func_6053(var_19_bool, var_20_string); // 0xe36 NEW_2
	if(var_19_bool == 0) goto Label_3648; // 0xe38 JumpB
	func_3649(); // 0xe3a NEW_2
	var_30_string = ""; // 0xe3c PushV
	var_30_string = var_18_bool; // 0xe3d Mov
	func_6069(var_30_string); // 0xe3e NEW_2
	
Label_3648:
	return 0; // 0xe40 Return
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3649(); // 0xe4e NEW_2
	var_21_object = Obj(); // 0xe50 PushV
	var_21_object = var_18_bool; // 0xe51 Mov
	func_5930(); // 0xe52 NEW_2
	return 0; // 0xe54 Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0xe55 PushV
	var_23_int = 111; // 0xe56 PushI
	var_24_bool = var_18_bool != var_23_int; // 0xe57 Neq
	if(var_24_bool == 0) goto Label_3674; // 0xe58 JumpB
	return 4; // 0xe59 Return
	
Label_3674:
	var_25_bool = 0; var_26_object = Obj(); // 0xe5a PushV
	var_26_object = var_0_object; // 0xe5b MovT
	func_4824(var_25_bool, var_26_object); // 0xe5c NEW_2
	var_59_bool = var_25_bool == 0; // 0xe5e Not
	if(var_59_bool == 0) goto Label_3684; // 0xe5f JumpB
	func_3649(); // 0xe61 NEW_2
	return 4; // 0xe63 Return
	
Label_3684:
	GetDirection(var_21_cvector); // 0xe64 Func
	var_62_cvector = CVector(0,0,0); var_63_object = Obj(); // 0xe66 PushV
	var_63_object = var_0_object; // 0xe67 MovT
	func_4678(var_63_object); // 0xe68 NEW_2
	var_22_cvector = var_62_cvector; // 0xe69 Mov
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0xe6b PushV
	var_69_cvector = var_21_cvector; // 0xe6c Mov
	var_70_cvector = var_22_cvector; // 0xe6d Mov
	func_5226(var_68_float, var_69_cvector, var_70_cvector); // 0xe6e NEW_2
	var_92_float = 0.5; // 0xe70 PushF
	var_93_bool = var_68_float < var_92_float; // 0xe71 LT
	if(var_93_bool == 0) goto Label_3703; // 0xe72 JumpB
	var_94_object = Obj(); // 0xe73 PushV
	var_94_object = var_0_object; // 0xe74 MovT
	func_4974(); // 0xe75 NEW_2
	
Label_3703:
	return 4; // 0xe77 Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3649(); // 0xe79 NEW_2
	func_6318(); // 0xe7c NEW_2
	return 0; // 0xe7e Return
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_object = Obj(); // 0xe80 PushV
	var_20_object = var_18_bool; // 0xe81 Mov
	func_6011(var_19_bool, var_20_object); // 0xe82 NEW_2
	if(var_19_bool == 0) goto Label_3724; // 0xe84 JumpB
	func_3649(); // 0xe86 NEW_2
	var_33_object = Obj(); // 0xe88 PushV
	var_33_object = var_18_bool; // 0xe89 Mov
	func_6034(var_33_object); // 0xe8a NEW_2
	
Label_3724:
	return 0; // 0xe8c Return
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_4471(var_17_bool); // 0x1132 NEW_2
	func_6318(); // 0x1135 NEW_2
	return 0; // 0x1137 Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_int)
{
	var_19_int = 1; // 0x116a PushI
	var_20_bool = var_18_int == var_19_int; // 0x116b Eq
	if(var_20_bool == 0) goto Label_4466; // 0x116c JumpB
	var_21_object = Obj(); // 0x116d PushV
	var_21_object = var_1_object; // 0x116e MovT
	func_5274(var_21_object); // 0x116f NEW_2
	goto Label_4470; // 0x1171 Jump
	
Label_4470:
	return 0; // 0x1176 Return
	
Label_4466:
	var_26_int = 0; // 0x1172 PushV
	var_26_int = var_18_int; // 0x1173 Mov
	func_4615(var_17_bool, var_18_int, var_26_int); // 0x1174 NEW_2
}


task_7_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0x1185 PushV
	var_19_bool = 0; // 0x1186 MovB
	var_20_bool = var_1_object == var_18_object; // 0x1187 Eq
	if(var_20_bool == 0) goto Label_4492; // 0x1188 JumpB
	var_21_bool = var_2_object == 0; // 0x1189 Not
	if(var_21_bool == 0) goto Label_4492; // 0x118a JumpB
	var_19_bool = 1; // 0x118b MovB
	
Label_4492:
	if(var_19_bool == 0) goto Label_4498; // 0x118c JumpB
	var_2_object = 1; // 0x118d TMovB
	var_22_object = Obj(); // 0x118e PushV
	var_22_object = var_18_object; // 0x118f Mov
	func_5108(var_22_object); // 0x1190 NEW_2
	
Label_4498:
	return 0; // 0x1192 Return
}


task_7_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_bool = 0; // 0x1194 PushV
	var_19_bool = 0; // 0x1195 MovB
	var_20_bool = var_1_object == var_18_object; // 0x1196 Eq
	if(var_20_bool == 0) goto Label_4507; // 0x1197 JumpB
	var_21_object = var_2_object; // 0x1198 PushT
	if(var_21_object == 0) goto Label_4507; // 0x1199 JumpB
	var_19_bool = 1; // 0x119a MovB
	
Label_4507:
	if(var_19_bool == 0) goto Label_4512; // 0x119b JumpB
	var_2_object = 0; // 0x119c TMovB
	var_22_string = "head"; // 0x119d PushS
	UnlookAsync(var_22_string); // 0x119e Func
	
Label_4512:
	return 0; // 0x11a0 Return
}


task_7_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	RequestClearPath(var_18_object); // 0x121a Func
	return 0; // 0x121c Return
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	func_4471(var_18_object); // 0x1226 NEW_2
	var_23_object = Obj(); // 0x1228 PushV
	var_23_object = var_18_object; // 0x1229 Mov
	func_5930(); // 0x122a NEW_2
	return 0; // 0x122c Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_string)
{
	var_20_float = 0; var_21_float = 0; // 0x171d PushV
	var_22_string = "health"; // 0x171e PushS
	var_23_bool = var_19_string == var_22_string; // 0x171f Eq
	if(var_23_bool == 0) goto Label_5929; // 0x1720 JumpB
	var_24_string = "health"; // 0x1721 PushS
	GetProperty(var_24_string, var_21_float); // 0x1722 Func
	var_25_int = 0; // 0x1724 PushI
	var_26_bool = var_21_float <= var_25_int; // 0x1725 LE
	if(var_26_bool == 0) goto Label_5929; // 0x1726 JumpB
	SignalDeath(var_18_object); // 0x1727 Func
	
Label_5929:
	return 2; // 0x1729 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object)
{
	var_19_object = Obj(); // 0x172b PushV
	var_19_object = var_18_object; // 0x172c Mov
	func_5909(var_19_object); // 0x172d NEW_2
	return 0; // 0x172f Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; // 0x1731 PushV
	var_22_object = var_18_object; // 0x1732 Mov
	var_23_int = var_19_int; // 0x1733 Mov
	var_24_float = var_20_float; // 0x1734 Mov
	func_4892(var_22_object, var_23_int, var_24_float); // 0x1735 NEW_2
	return 0; // 0x1737 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool, var_18_object, var_19_int, var_20_float, var_21_float, var_22_cvector, var_23_cvector)
{
	var_24_object = Obj(); var_25_int = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x1739 PushV
	var_24_object = var_18_object; // 0x173a Mov
	var_25_int = var_19_int; // 0x173b Mov
	var_26_float = var_20_float; // 0x173c Mov
	var_27_cvector = var_22_cvector; // 0x173d Mov
	var_28_cvector = var_23_cvector; // 0x173e Mov
	func_4960(var_26_float, var_27_cvector, var_28_cvector); // 0x173f NEW_2
	return 0; // 0x1741 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 1; // 0xb0f PushB
	SensePlayerOnly(var_18_bool); // 0xb10 Func
	func_6535(); // 0xb13 NEW_2
	func_2846(); // 0xb16 NEW_2
	
Label_2840:
	var_2_object = 0; // 0xb18 TMovB
	func_3107(var_16_object, var_17_bool); // 0xb1a NEW_2
	goto Label_2840; // 0xb1c Jump
}


func_0(var_0_object, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x0 PushV
	var_0_object = var_44_object; // 0x1 TMov
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0; // 0x2 PushV
	var_55_object = var_44_object; // 0x3 Mov
	var_56_float = 70.0; // 0x4 MovF
	func_4990(var_55_object, var_56_float); // 0x5 NEW_2
	var_101_bool = var_54_bool == 0; // 0x7 Not
	if(var_101_bool == 0) goto Label_11; // 0x8 JumpB
	var_43_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_50_object); // 0xb Func
	var_102_int = 0; // 0xd PushV
	func_6527(var_102_int); // 0xe NEW_2
	SetNPCName(var_102_int); // 0x10 ObjFunc
	var_103_int = 0; // 0x12 PushV
	func_6525(var_103_int); // 0x13 NEW_2
	SetNPCDescription(var_103_int); // 0x15 ObjFunc
	var_104_string = ""; // 0x17 PushV
	func_6529(var_104_string); // 0x18 NEW_2
	SetPhoto(var_104_string); // 0x1a ObjFunc
	var_105_string = ""; // 0x1c PushV
	func_6531(var_105_string); // 0x1d NEW_2
	SetPhoto2(var_105_string); // 0x1f ObjFunc
	var_106_int = 0; // 0x21 PushV
	func_5552(var_106_int); // 0x22 NEW_2
	SetPlayerName(var_106_int); // 0x24 ObjFunc
	var_52_int = -1; // 0x26 MovI
	IsOverrideActive(var_51_bool); // 0x27 Func
	var_114_bool = var_51_bool; // 0x29 Push
	if(var_114_bool == 0) goto Label_45; // 0x2a JumpB
	var_43_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_50_object); // 0x2d Func
	var_115_object = Obj(); var_116_object = Obj(); // 0x2f PushV
	var_115_object = var_44_object; // 0x30 Mov
	var_116_object = var_50_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_117_object, var_118_object, var_119_string, var_120_bool, var_115_object, var_116_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_53_bool); // 0x36 ObjFunc
	
Label_56:
	var_430_bool = var_53_bool == 0; // 0x38 Not
	if(var_430_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_53_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_431_object = Obj(); // 0x3f PushV
	var_431_object = var_44_object; // 0x40 Mov
	func_5059(); // 0x41 NEW_2
	StopDialog(var_50_object); // 0x43 Func
	GetReturnValue(var_52_int); // 0x45 ObjFunc
	var_43_int = var_52_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_5126(var_44_string)
{
	var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); // 0x1406 PushV
	IsExisting3DSound(var_53_bool, var_44_string); // 0x1407 Func
	var_61_bool = var_53_bool == 0; // 0x1409 Not
	if(var_61_bool == 0) goto Label_5151; // 0x140a JumpB
	var_54_int = 0; // 0x140b MovI
	
Label_5132:
	var_62_int = 1; // 0x140c PushI
	var_63_int = var_54_int + var_62_int; // 0x140d Add
	var_64_int = var_44_string + var_63_int; // 0x140e Add
	IsExisting3DSound(var_55_bool, var_64_int); // 0x140f Func
	var_65_bool = var_55_bool == 0; // 0x1411 Not
	if(var_65_bool == 0) goto Label_5140; // 0x1412 JumpB
	goto Label_5143; // 0x1413 Jump
	
Label_5143:
	var_66_bool = var_54_int == 0; // 0x1417 Not
	if(var_66_bool == 0) goto Label_5146; // 0x1418 JumpB
	return 16; // 0x1419 Return
	
Label_5146:
	irand(var_56_int, var_54_int); // 0x141a Func
	var_67_int = 1; // 0x141c PushI
	var_68_int = var_56_int + var_67_int; // 0x141d Add
	var_44_string = var_44_string + var_68_int; // 0x141e Add2
	
Label_5151:
	Is3DSoundLoaded(var_57_bool, var_44_string); // 0x141f Func
	var_69_bool = var_57_bool; // 0x1421 Push
	if(var_69_bool == 0) goto Label_5166; // 0x1422 JumpB
	GetEyesHeight(var_58_float); // 0x1423 Func
	GetDirection(var_59_cvector); // 0x1425 Func
	var_70_int = 50; // 0x1427 PushI
	var_60_cvector = var_59_cvector * var_70_int; // 0x1428 Mult2
	var_71_float = GetByIndex(var_60_cvector, 1); // 0x1429 PushE
	var_71_float = var_71_float + var_58_float; // 0x142a Add2
	SetByIndex(var_60_cvector, 1) = var_71_float; // 0x142b PopE
	PlayGlobalSound(var_44_string, var_60_cvector); // 0x142c Func
	
Label_5166:
	return 16; // 0x142e Return
	
Label_5140:
	var_72_int = 1; // 0x1414 PushI
	var_54_int = var_54_int + var_72_int; // 0x1415 Add2
	goto Label_5132; // 0x1416 Jump
}


func_4615(var_0_object, var_1_object, var_26_int)
{
	var_27_int = 0; // 0x1208 PushI
	var_28_bool = var_26_int != var_27_int; // 0x1209 Neq
	if(var_28_bool == 0) goto Label_4620; // 0x120a JumpB
	return 0; // 0x120b Return
	
Label_4620:
	var_29_bool = 0; var_30_object = Obj(); // 0x120c PushV
	var_30_object = var_1_object; // 0x120d MovT
	func_4653(var_29_bool, var_30_object); // 0x120e NEW_2
	var_65_bool = var_29_bool == 0; // 0x1210 Not
	if(var_65_bool == 0) goto Label_4627; // 0x1211 JumpB
	var_0_object = 1; // 0x1212 TMovB
	
Label_4627:
	var_66_int = 0; // 0x1213 PushI
	KillTimer(var_66_int); // 0x1214 Func
	Stop(); // 0x1216 Func
	return 0; // 0x1218 Return
}


func_5644(var_35_object)
{
	var_36_int = 0; // 0x160d PushV
	func_5569(var_36_int); // 0x160e NEW_2
	var_40_int = 1; // 0x1610 PushI
	var_41_bool = var_36_int == var_40_int; // 0x1611 Eq
	if(var_41_bool == 0) goto Label_5654; // 0x1612 JumpB
	WorkWithCorpse(var_35_object); // 0x1613 Func
	goto Label_5656; // 0x1615 Jump
	
Label_5656:
	return 0; // 0x1618 Return
	
Label_5654:
	Barter(var_35_object); // 0x1616 Func
}


func_5657(var_117_int, var_118_int)
{
	var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_bool = 0; // 0x1619 PushV
	var_132_bool = var_117_int > var_118_int; // 0x161a GT
	if(var_132_bool == 0) goto Label_5664; // 0x161b JumpB
	var_133_string = "GenerateMoney: iMin > iMax"; // 0x161c PushS
	Trace(var_133_string); // 0x161d Func
	return 4; // 0x161f Return
	
Label_5664:
	var_130_int = 0; // 0x1620 MovI
	var_134_bool = var_117_int != var_118_int; // 0x1621 Neq
	if(var_134_bool == 0) goto Label_5671; // 0x1622 JumpB
	var_135_int = var_118_int - var_117_int; // 0x1623 Sub
	irand(var_130_int, var_135_int); // 0x1624 Func
	goto Label_5675; // 0x1626 Jump
	
Label_5675:
	var_130_int = var_130_int + var_117_int; // 0x162b Add2
	var_136_int = 0; // 0x162c PushI
	var_137_bool = var_130_int == var_136_int; // 0x162d Eq
	if(var_137_bool == 0) goto Label_5680; // 0x162e JumpB
	return 4; // 0x162f Return
	
Label_5680:
	var_138_int = 0; var_139_string = ""; // 0x1630 PushV
	var_139_string = "Money"; // 0x1631 MovS
	func_5904(var_138_int, var_139_string); // 0x1632 NEW_2
	var_142_int = 0; // 0x1634 PushI
	AddItem(var_131_bool, var_138_int, var_142_int, var_130_int); // 0x1635 Func
	return 4; // 0x1637 Return
	
Label_5671:
	var_143_int = 0; // 0x1627 PushI
	var_144_bool = var_117_int == var_143_int; // 0x1628 Eq
	if(var_144_bool == 0) goto Label_5675; // 0x1629 JumpB
	return 4; // 0x162a Return
}


func_4637(var_0_object)
{
	var_0_object = 1; // 0x121d TMovB
	var_22_int = 0; // 0x121e PushI
	KillTimer(var_22_int); // 0x121f Func
	Stop(); // 0x1221 Func
	return 0; // 0x1223 Return
}


func_3107(var_0_object, var_1_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; // 0xc23 PushV
	var_0_object = 0; // 0xc24 TMovB
	var_1_object = 0; // 0xc25 TMovB
	var_36_float = 0.5; // 0xc26 PushF
	rand(var_30_float, var_36_float); // 0xc27 Func
	Sleep(var_30_float); // 0xc29 Func
	
Label_3115:
	var_37_bool = var_0_object == 0; // 0xc2b Not
	if(var_37_bool == 0) goto Label_3165; // 0xc2c JumpB
	var_38_bool = var_1_object == 0; // 0xc2d Not
	if(var_38_bool == 0) goto Label_3134; // 0xc2e JumpB
	
Label_3119:
	GetPosition(var_32_cvector); // 0xc2f Func
	var_39_float = 0; // 0xc31 PushV
	func_3166(var_39_float); // 0xc32 NEW_2
	GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, var_39_float, var_33_bool); // 0xc34 Func
	var_42_bool = var_33_bool; // 0xc36 Push
	if(var_42_bool == 0) goto Label_3129; // 0xc37 JumpB
	goto Label_3133; // 0xc38 Jump
	
Label_3133:
	goto Label_3135; // 0xc3d Jump
	
Label_3135:
	var_43_object = Obj(); var_44_cvector = CVector(0,0,0); // 0xc3f PushV
	var_44_cvector = var_31_cvector; // 0xc40 Mov
	func_3194(var_43_object, var_44_cvector); // 0xc41 NEW_2
	var_34_object = var_43_object; // 0xc42 Mov
	var_47_bool = var_34_object != 0; // 0xc44 NullNeq
	if(var_47_bool == 0) goto Label_3160; // 0xc45 JumpB
	RotatePath(var_34_object, var_35_bool); // 0xc46 Func
	var_48_bool = var_35_bool; // 0xc48 Push
	if(var_48_bool == 0) goto Label_3159; // 0xc49 JumpB
	var_49_bool = 0; // 0xc4a PushV
	func_3192(var_49_bool); // 0xc4b NEW_2
	FollowPath(var_34_object, var_49_bool, var_35_bool); // 0xc4d Func
	var_34_object = 0; // 0xc4f SetNull
	var_50_bool = var_35_bool; // 0xc50 Push
	if(var_50_bool == 0) goto Label_3159; // 0xc51 JumpB
	TaskCall(4); // 0xc53 TaskCall
	func_3364(); // 0xc54 NEW_2
	TaskReturn(); // 0xc55 TaskReturn
	
Label_3159:
	goto Label_3163; // 0xc57 Jump
	
Label_3163:
	var_34_object = 0; // 0xc5b SetNull
	goto Label_3115; // 0xc5c Jump
	
Label_3160:
	var_102_int = 1; // 0xc58 PushI
	Sleep(var_102_int); // 0xc59 Func
	
Label_3129:
	var_103_int = 1; // 0xc39 PushI
	Sleep(var_103_int); // 0xc3a Func
	goto Label_3119; // 0xc3c Jump
	
Label_3134:
	var_1_object = 0; // 0xc3e TMovB
	
Label_3165:
	return 12; // 0xc5d Return
}


func_4653(var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x122e PushV
	var_32_object = var_30_object; // 0x122f Mov
	func_4824(var_31_bool, var_32_object); // 0x1230 NEW_2
	var_29_bool = var_31_bool; // 0x1231 Mov
	return 0; // 0x1233 Return
}


func_5167(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x142f PushV
	self(var_108_object); // 0x1430 Func
	var_106_object = var_108_object; // 0x1432 Mov
	return 2; // 0x1433 Return
}


func_4660(var_323_string)
{
	var_323_string = "walk"; // 0x1234 MovS
	return 0; // 0x1235 Return
}


func_5173(var_50_cvector, var_51_cvector)
{
	var_58_float = 0; var_59_float = 0; // 0x1435 PushV
	var_60_int = var_51_cvector | var_51_cvector; // 0x1436 Or
	var_59_float = sqrt(var_60_int); // 0x1437 Sqrt2
	var_61_float = 0.0; // 0x1438 PushF
	var_62_bool = var_59_float < var_61_float; // 0x1439 LT
	if(var_62_bool == 0) goto Label_5181; // 0x143a JumpB
	var_50_cvector = CVector(0.0, 0.0, 0.0); // 0x143b MovV
	return 2; // 0x143c Return
	
Label_5181:
	var_50_cvector = var_51_cvector / var_51_cvector; // 0x143d Div2
	return 2; // 0x143e Return
}


func_4662(var_324_string)
{
	var_324_string = "run"; // 0x1236 MovS
	return 0; // 0x1237 Return
}


func_4664(var_539_string, var_540_int)
{
	var_541_int = 2; // 0x1239 PushI
	var_542_bool = var_540_int == var_541_int; // 0x123a Eq
	if(var_542_bool == 0) goto Label_4671; // 0x123b JumpB
	var_539_string = "fire"; // 0x123c MovS
	return 0; // 0x123d Return
	
Label_4671:
	var_543_int = 1; // 0x123f PushI
	var_544_bool = var_540_int == var_543_int; // 0x1240 Eq
	if(var_544_bool == 0) goto Label_4676; // 0x1241 JumpB
	var_539_string = "bullet"; // 0x1242 MovS
	return 0; // 0x1243 Return
	
Label_4676:
	var_539_string = "phys"; // 0x1244 MovS
	return 0; // 0x1245 Return
}


func_5688(var_231_string)
{
	var_232_object = Obj(); var_233_int = 0; var_234_bool = 0; var_235_object = Obj(); var_236_int = 0; var_237_bool = 0; // 0x1638 PushV
	CreateInvItem(var_235_object); // 0x1639 Func
	SetItemName(var_231_string); // 0x163b ObjFunc
	var_238_string = "Organ"; // 0x163d PushS
	var_239_int = 1; // 0x163e PushI
	SetProperty(var_238_string, var_239_int); // 0x163f ObjFunc
	GetItemID(var_236_int); // 0x1641 ObjFunc
	var_240_int = 0; // 0x1643 PushI
	var_241_int = 1; // 0x1644 PushI
	AddItem(var_237_bool, var_235_object, var_240_int, var_241_int); // 0x1645 Func
	return 6; // 0x1647 Return
}


func_5183(var_549_float, var_550_float, var_551_float)
{
	var_554_bool = var_550_float < var_551_float; // 0x1440 LT
	if(var_554_bool == 0) goto Label_5188; // 0x1441 JumpB
	var_549_float = var_550_float; // 0x1442 Mov
	goto Label_5189; // 0x1443 Jump
	
Label_5189:
	return 0; // 0x1445 Return
	
Label_5188:
	var_549_float = var_551_float; // 0x1444 Mov
}


func_3649()
{
	StopGroup0(); // 0xe41 Func
	StopAsync(); // 0xe43 Func
	var_31_string = "head"; // 0xe45 PushS
	UnlookAsync(var_31_string); // 0xe46 Func
	var_32_int = 111; // 0xe48 PushI
	KillTimer(var_32_int); // 0xe49 Func
	return 0; // 0xe4b Return
}


func_4678(var_52_cvector)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x1246 PushV
	GetPosition(var_56_cvector); // 0x1247 Func
	GetPosition(var_57_cvector); // 0x1249 ObjFunc
	var_52_cvector = var_57_cvector - var_56_cvector; // 0x124b Sub2
	return 4; // 0x124c Return
}


func_5190(var_559_float, var_560_float, var_561_float, var_562_float)
{
	var_563_bool = var_560_float < var_561_float; // 0x1447 LT
	if(var_563_bool == 0) goto Label_5195; // 0x1448 JumpB
	var_559_float = var_561_float; // 0x1449 Mov
	return 0; // 0x144a Return
	
Label_5195:
	var_564_bool = var_560_float > var_562_float; // 0x144b GT
	if(var_564_bool == 0) goto Label_5199; // 0x144c JumpB
	var_559_float = var_562_float; // 0x144d Mov
	return 0; // 0x144e Return
	
Label_5199:
	var_559_float = var_560_float; // 0x144f Mov
	return 0; // 0x1450 Return
}


func_6216(var_85_int, var_86_object)
{
	var_88_int = 0; var_89_object = Obj(); // 0x1849 PushV
	var_89_object = var_86_object; // 0x184a Mov
	func_6123(var_88_int, var_89_object); // 0x184b NEW_2
	var_85_int = var_88_int; // 0x184c Mov
	return 0; // 0x184e Return
}


func_5705()
{
	var_225_int = 0; // 0x1649 PushV
	func_5569(var_225_int); // 0x164a NEW_2
	var_229_int = 1; // 0x164c PushI
	var_230_bool = var_225_int != var_229_int; // 0x164d Neq
	if(var_230_bool == 0) goto Label_5712; // 0x164e JumpB
	return 0; // 0x164f Return
	
Label_5712:
	var_231_string = ""; // 0x1650 PushV
	var_231_string = "liver"; // 0x1651 MovS
	func_5688(var_231_string); // 0x1652 NEW_2
	var_242_string = ""; // 0x1654 PushV
	var_242_string = "kidney"; // 0x1655 MovS
	func_5688(var_242_string); // 0x1656 NEW_2
	var_243_string = ""; // 0x1658 PushV
	var_243_string = "heart"; // 0x1659 MovS
	func_5688(var_243_string); // 0x165a NEW_2
	var_244_string = ""; // 0x165c PushV
	var_244_string = "blood"; // 0x165d MovS
	func_5688(var_244_string); // 0x165e NEW_2
	return 0; // 0x1660 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_115_object, var_116_object)
{
	var_0_object = var_116_object; // 0x4b TMov
	var_1_object = var_115_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_121_int = 1; // 0x4e PushI
	if(var_121_int == 0) goto Label_571; // 0x4f JumpB
	var_122_bool = 0; var_123_object = Obj(); // 0x50 PushV
	var_123_object = var_1_object; // 0x51 MovT
	func_5323(var_123_object); // 0x52 NEW_2
	if(var_122_bool == 0) goto Label_323; // 0x54 JumpB
	var_130_string = ""; // 0x55 PushV
	var_130_string = "Neutral"; // 0x56 MovS
	func_601(var_116_object, var_130_string); // 0x57 NEW_2
	var_147_int = 543041; // 0x59 PushI
	SetMessage(var_147_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_148_bool = 0; // 0x5e PushV
	var_148_bool = 0; // 0x5f MovB
	var_149_bool = 0; // 0x60 PushV
	var_149_bool = 0; // 0x61 MovB
	var_150_bool = 0; var_151_object = Obj(); // 0x62 PushV
	var_151_object = var_1_object; // 0x63 MovT
	func_5355(var_150_bool, var_151_object); // 0x64 NEW_2
	var_161_bool = var_150_bool == 0; // 0x66 Not
	if(var_161_bool == 0) goto Label_111; // 0x67 JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0x68 PushV
	var_163_object = var_1_object; // 0x69 MovT
	func_5365(var_162_bool, var_163_object); // 0x6a NEW_2
	var_168_bool = var_162_bool == 0; // 0x6c Not
	if(var_168_bool == 0) goto Label_111; // 0x6d JumpB
	var_149_bool = 1; // 0x6e MovB
	
Label_111:
	if(var_149_bool == 0) goto Label_118; // 0x6f JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x70 PushV
	var_170_object = var_1_object; // 0x71 MovT
	func_5335(var_169_bool, var_170_object); // 0x72 NEW_2
	if(var_169_bool == 0) goto Label_118; // 0x74 JumpB
	var_148_bool = 1; // 0x75 MovB
	
Label_118:
	if(var_148_bool == 0) goto Label_124; // 0x76 JumpB
	var_175_int = 543044; // 0x77 PushI
	var_176_int = 45498; // 0x78 PushI
	var_177_int = 45496; // 0x79 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x7a TObjFunc
	
Label_124:
	var_178_bool = 0; // 0x7c PushV
	var_178_bool = 1; // 0x7d MovB
	var_179_bool = 0; // 0x7e PushV
	var_179_bool = 1; // 0x7f MovB
	var_180_bool = 0; // 0x80 PushV
	var_180_bool = 1; // 0x81 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x82 PushV
	var_182_object = var_1_object; // 0x83 MovT
	func_5425(var_181_bool, var_182_object); // 0x84 NEW_2
	if(var_181_bool == 0) goto Label_141; // 0x86 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x87 PushV
	var_188_object = var_1_object; // 0x88 MovT
	func_5435(var_187_bool, var_188_object); // 0x89 NEW_2
	if(var_187_bool == 0) goto Label_141; // 0x8b JumpB
	var_180_bool = 0; // 0x8c MovB
	
Label_141:
	if(var_180_bool == 0) goto Label_148; // 0x8d JumpB
	var_193_bool = 0; var_194_object = Obj(); // 0x8e PushV
	var_194_object = var_1_object; // 0x8f MovT
	func_5445(var_193_bool, var_194_object); // 0x90 NEW_2
	if(var_193_bool == 0) goto Label_148; // 0x92 JumpB
	var_179_bool = 0; // 0x93 MovB
	
Label_148:
	if(var_179_bool == 0) goto Label_155; // 0x94 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x95 PushV
	var_200_object = var_1_object; // 0x96 MovT
	func_5455(var_199_bool, var_200_object); // 0x97 NEW_2
	if(var_199_bool == 0) goto Label_155; // 0x99 JumpB
	var_178_bool = 0; // 0x9a MovB
	
Label_155:
	if(var_178_bool == 0) goto Label_161; // 0x9b JumpB
	var_205_int = 543057; // 0x9c PushI
	var_206_int = 45513; // 0x9d PushI
	var_207_int = 45512; // 0x9e PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x9f TObjFunc
	
Label_161:
	var_208_bool = 0; // 0xa1 PushV
	var_208_bool = 1; // 0xa2 MovB
	var_209_bool = 0; var_210_object = Obj(); // 0xa3 PushV
	var_210_object = var_1_object; // 0xa4 MovT
	func_5405(var_209_bool, var_210_object); // 0xa5 NEW_2
	if(var_209_bool == 0) goto Label_174; // 0xa7 JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0xa8 PushV
	var_216_object = var_1_object; // 0xa9 MovT
	func_5415(var_215_bool, var_216_object); // 0xaa NEW_2
	if(var_215_bool == 0) goto Label_174; // 0xac JumpB
	var_208_bool = 0; // 0xad MovB
	
Label_174:
	if(var_208_bool == 0) goto Label_180; // 0xae JumpB
	var_221_int = 543063; // 0xaf PushI
	var_222_int = 45520; // 0xb0 PushI
	var_223_int = 45518; // 0xb1 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xb2 TObjFunc
	
Label_180:
	var_224_bool = 0; var_225_object = Obj(); // 0xb4 PushV
	var_225_object = var_1_object; // 0xb5 MovT
	func_5335(var_224_bool, var_225_object); // 0xb6 NEW_2
	if(var_224_bool == 0) goto Label_190; // 0xb8 JumpB
	var_226_int = 538210; // 0xb9 PushI
	var_227_int = -1; // 0xba PushI
	var_228_int = 40087; // 0xbb PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xbc TObjFunc
	
Label_190:
	var_229_bool = 0; var_230_object = Obj(); // 0xbe PushV
	var_230_object = var_1_object; // 0xbf MovT
	func_5335(var_229_bool, var_230_object); // 0xc0 NEW_2
	if(var_229_bool == 0) goto Label_200; // 0xc2 JumpB
	var_231_int = 543042; // 0xc3 PushI
	var_232_int = -1; // 0xc4 PushI
	var_233_int = 45494; // 0xc5 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xc6 TObjFunc
	
Label_200:
	var_234_bool = 0; var_235_object = Obj(); // 0xc8 PushV
	var_235_object = var_1_object; // 0xc9 MovT
	func_5335(var_234_bool, var_235_object); // 0xca NEW_2
	if(var_234_bool == 0) goto Label_210; // 0xcc JumpB
	var_236_int = 543043; // 0xcd PushI
	var_237_int = -1; // 0xce PushI
	var_238_int = 45495; // 0xcf PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xd0 TObjFunc
	
Label_210:
	var_239_bool = 0; // 0xd2 PushV
	var_239_bool = 1; // 0xd3 MovB
	var_240_bool = 0; // 0xd4 PushV
	var_240_bool = 1; // 0xd5 MovB
	var_241_bool = 0; var_242_object = Obj(); // 0xd6 PushV
	var_242_object = var_1_object; // 0xd7 MovT
	func_5405(var_241_bool, var_242_object); // 0xd8 NEW_2
	if(var_241_bool == 0) goto Label_225; // 0xda JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0xdb PushV
	var_244_object = var_1_object; // 0xdc MovT
	func_5415(var_243_bool, var_244_object); // 0xdd NEW_2
	if(var_243_bool == 0) goto Label_225; // 0xdf JumpB
	var_240_bool = 0; // 0xe0 MovB
	
Label_225:
	if(var_240_bool == 0) goto Label_232; // 0xe1 JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0xe2 PushV
	var_246_object = var_1_object; // 0xe3 MovT
	func_5425(var_245_bool, var_246_object); // 0xe4 NEW_2
	if(var_245_bool == 0) goto Label_232; // 0xe6 JumpB
	var_239_bool = 0; // 0xe7 MovB
	
Label_232:
	if(var_239_bool == 0) goto Label_238; // 0xe8 JumpB
	var_247_int = 543055; // 0xe9 PushI
	var_248_int = -1; // 0xea PushI
	var_249_int = 45510; // 0xeb PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0xec TObjFunc
	
Label_238:
	var_250_bool = 0; // 0xee PushV
	var_250_bool = 1; // 0xef MovB
	var_251_bool = 0; var_252_object = Obj(); // 0xf0 PushV
	var_252_object = var_1_object; // 0xf1 MovT
	func_5405(var_251_bool, var_252_object); // 0xf2 NEW_2
	if(var_251_bool == 0) goto Label_251; // 0xf4 JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0xf5 PushV
	var_254_object = var_1_object; // 0xf6 MovT
	func_5415(var_253_bool, var_254_object); // 0xf7 NEW_2
	if(var_253_bool == 0) goto Label_251; // 0xf9 JumpB
	var_250_bool = 0; // 0xfa MovB
	
Label_251:
	if(var_250_bool == 0) goto Label_257; // 0xfb JumpB
	var_255_int = 543056; // 0xfc PushI
	var_256_int = -1; // 0xfd PushI
	var_257_int = 45511; // 0xfe PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xff TObjFunc
	
Label_257:
	var_258_bool = 0; // 0x101 PushV
	var_258_bool = 1; // 0x102 MovB
	var_259_bool = 0; // 0x103 PushV
	var_259_bool = 1; // 0x104 MovB
	var_260_bool = 0; var_261_object = Obj(); // 0x105 PushV
	var_261_object = var_1_object; // 0x106 MovT
	func_5435(var_260_bool, var_261_object); // 0x107 NEW_2
	if(var_260_bool == 0) goto Label_272; // 0x109 JumpB
	var_262_bool = 0; var_263_object = Obj(); // 0x10a PushV
	var_263_object = var_1_object; // 0x10b MovT
	func_5445(var_262_bool, var_263_object); // 0x10c NEW_2
	if(var_262_bool == 0) goto Label_272; // 0x10e JumpB
	var_259_bool = 0; // 0x10f MovB
	
Label_272:
	if(var_259_bool == 0) goto Label_279; // 0x110 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x111 PushV
	var_265_object = var_1_object; // 0x112 MovT
	func_5455(var_264_bool, var_265_object); // 0x113 NEW_2
	if(var_264_bool == 0) goto Label_279; // 0x115 JumpB
	var_258_bool = 0; // 0x116 MovB
	
Label_279:
	if(var_258_bool == 0) goto Label_285; // 0x117 JumpB
	var_266_int = 543062; // 0x118 PushI
	var_267_int = -1; // 0x119 PushI
	var_268_int = 45517; // 0x11a PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x11b TObjFunc
	
Label_285:
	var_269_bool = 0; // 0x11d PushV
	var_269_bool = 1; // 0x11e MovB
	var_270_bool = 0; // 0x11f PushV
	var_270_bool = 1; // 0x120 MovB
	var_271_bool = 0; // 0x121 PushV
	var_271_bool = 1; // 0x122 MovB
	var_272_bool = 0; var_273_object = Obj(); // 0x123 PushV
	var_273_object = var_1_object; // 0x124 MovT
	func_5425(var_272_bool, var_273_object); // 0x125 NEW_2
	if(var_272_bool == 0) goto Label_302; // 0x127 JumpB
	var_274_bool = 0; var_275_object = Obj(); // 0x128 PushV
	var_275_object = var_1_object; // 0x129 MovT
	func_5435(var_274_bool, var_275_object); // 0x12a NEW_2
	if(var_274_bool == 0) goto Label_302; // 0x12c JumpB
	var_271_bool = 0; // 0x12d MovB
	
Label_302:
	if(var_271_bool == 0) goto Label_309; // 0x12e JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0x12f PushV
	var_277_object = var_1_object; // 0x130 MovT
	func_5445(var_276_bool, var_277_object); // 0x131 NEW_2
	if(var_276_bool == 0) goto Label_309; // 0x133 JumpB
	var_270_bool = 0; // 0x134 MovB
	
Label_309:
	if(var_270_bool == 0) goto Label_316; // 0x135 JumpB
	var_278_bool = 0; var_279_object = Obj(); // 0x136 PushV
	var_279_object = var_1_object; // 0x137 MovT
	func_5455(var_278_bool, var_279_object); // 0x138 NEW_2
	if(var_278_bool == 0) goto Label_316; // 0x13a JumpB
	var_269_bool = 0; // 0x13b MovB
	
Label_316:
	if(var_269_bool == 0) goto Label_322; // 0x13c JumpB
	var_280_int = 543064; // 0x13d PushI
	var_281_int = -1; // 0x13e PushI
	var_282_int = 45519; // 0x13f PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x140 TObjFunc
	
Label_322:
	goto Label_571; // 0x142 Jump
	
Label_571:
	var_283_bool = 0; // 0x23b PushV
	func_6533(var_283_bool); // 0x23c NEW_2
	if(var_283_bool == 0) goto Label_586; // 0x23e JumpB
	
Label_575:
	lshWaitForAnimEnd(); // 0x23f Func
	var_284_string = var_3_string; // 0x241 PushT
	if(var_284_string == 0) goto Label_580; // 0x242 JumpB
	goto Label_585; // 0x243 Jump
	
Label_585:
	goto Label_600; // 0x249 Jump
	
Label_600:
	return 0; // 0x258 Return
	
Label_580:
	var_285_string = ""; // 0x244 PushV
	var_285_string = var_2_object; // 0x245 MovT
	func_5077(var_285_string); // 0x246 NEW_2
	goto Label_575; // 0x248 Jump
	
Label_586:
	var_296_string = "all"; // 0x24a PushS
	var_297_string = "idle"; // 0x24b PushS
	PlayAnimation(var_296_string, var_297_string); // 0x24c Func
	
Label_590:
	WaitForAnimEnd(); // 0x24e Func
	var_298_string = var_3_string; // 0x250 PushT
	if(var_298_string == 0) goto Label_595; // 0x251 JumpB
	goto Label_600; // 0x252 Jump
	
Label_595:
	var_299_string = "all"; // 0x253 PushS
	var_300_string = "idle"; // 0x254 PushS
	PlayAnimation(var_299_string, var_300_string); // 0x255 Func
	goto Label_590; // 0x257 Jump
	
Label_323:
	var_301_string = ""; // 0x143 PushV
	var_301_string = "Neutral"; // 0x144 MovS
	func_601(var_116_object, var_301_string); // 0x145 NEW_2
	var_302_int = 538207; // 0x147 PushI
	SetMessage(var_302_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_303_bool = 0; var_304_object = Obj(); // 0x14c PushV
	var_304_object = var_1_object; // 0x14d MovT
	func_5299(var_304_object); // 0x14e NEW_2
	if(var_303_bool == 0) goto Label_342; // 0x150 JumpB
	var_309_int = 538208; // 0x151 PushI
	var_310_int = -1; // 0x152 PushI
	var_311_int = 40085; // 0x153 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x154 TObjFunc
	
Label_342:
	var_312_bool = 0; var_313_object = Obj(); // 0x156 PushV
	var_313_object = var_1_object; // 0x157 MovT
	func_5311(var_313_object); // 0x158 NEW_2
	if(var_312_bool == 0) goto Label_352; // 0x15a JumpB
	var_318_int = 538209; // 0x15b PushI
	var_319_int = -1; // 0x15c PushI
	var_320_int = 40086; // 0x15d PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x15e TObjFunc
	
Label_352:
	var_321_bool = 0; // 0x160 PushV
	var_321_bool = 0; // 0x161 MovB
	var_322_bool = 0; var_323_object = Obj(); // 0x162 PushV
	var_323_object = var_1_object; // 0x163 MovT
	func_5299(var_323_object); // 0x164 NEW_2
	if(var_322_bool == 0) goto Label_365; // 0x166 JumpB
	var_324_bool = 0; var_325_object = Obj(); // 0x167 PushV
	var_325_object = var_1_object; // 0x168 MovT
	func_5355(var_324_bool, var_325_object); // 0x169 NEW_2
	if(var_324_bool == 0) goto Label_365; // 0x16b JumpB
	var_321_bool = 1; // 0x16c MovB
	
Label_365:
	if(var_321_bool == 0) goto Label_371; // 0x16d JumpB
	var_326_int = 538211; // 0x16e PushI
	var_327_int = 40089; // 0x16f PushI
	var_328_int = 40088; // 0x170 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x171 TObjFunc
	
Label_371:
	var_329_bool = 0; // 0x173 PushV
	var_329_bool = 0; // 0x174 MovB
	var_330_bool = 0; var_331_object = Obj(); // 0x175 PushV
	var_331_object = var_1_object; // 0x176 MovT
	func_5299(var_331_object); // 0x177 NEW_2
	if(var_330_bool == 0) goto Label_384; // 0x179 JumpB
	var_332_bool = 0; var_333_object = Obj(); // 0x17a PushV
	var_333_object = var_1_object; // 0x17b MovT
	func_5355(var_332_bool, var_333_object); // 0x17c NEW_2
	if(var_332_bool == 0) goto Label_384; // 0x17e JumpB
	var_329_bool = 1; // 0x17f MovB
	
Label_384:
	if(var_329_bool == 0) goto Label_390; // 0x180 JumpB
	var_334_int = 538222; // 0x181 PushI
	var_335_int = 40100; // 0x182 PushI
	var_336_int = 40099; // 0x183 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x184 TObjFunc
	
Label_390:
	var_337_bool = 0; // 0x186 PushV
	var_337_bool = 0; // 0x187 MovB
	var_338_bool = 0; var_339_object = Obj(); // 0x188 PushV
	var_339_object = var_1_object; // 0x189 MovT
	func_5299(var_339_object); // 0x18a NEW_2
	if(var_338_bool == 0) goto Label_403; // 0x18c JumpB
	var_340_bool = 0; var_341_object = Obj(); // 0x18d PushV
	var_341_object = var_1_object; // 0x18e MovT
	func_5365(var_340_bool, var_341_object); // 0x18f NEW_2
	if(var_340_bool == 0) goto Label_403; // 0x191 JumpB
	var_337_bool = 1; // 0x192 MovB
	
Label_403:
	if(var_337_bool == 0) goto Label_409; // 0x193 JumpB
	var_342_int = 538235; // 0x194 PushI
	var_343_int = 40114; // 0x195 PushI
	var_344_int = 40113; // 0x196 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x197 TObjFunc
	
Label_409:
	var_345_bool = 0; // 0x199 PushV
	var_345_bool = 0; // 0x19a MovB
	var_346_bool = 0; var_347_object = Obj(); // 0x19b PushV
	var_347_object = var_1_object; // 0x19c MovT
	func_5299(var_347_object); // 0x19d NEW_2
	if(var_346_bool == 0) goto Label_422; // 0x19f JumpB
	var_348_bool = 0; var_349_object = Obj(); // 0x1a0 PushV
	var_349_object = var_1_object; // 0x1a1 MovT
	func_5375(var_348_bool, var_349_object); // 0x1a2 NEW_2
	if(var_348_bool == 0) goto Label_422; // 0x1a4 JumpB
	var_345_bool = 1; // 0x1a5 MovB
	
Label_422:
	if(var_345_bool == 0) goto Label_428; // 0x1a6 JumpB
	var_354_int = 538253; // 0x1a7 PushI
	var_355_int = 40135; // 0x1a8 PushI
	var_356_int = 40134; // 0x1a9 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x1aa TObjFunc
	
Label_428:
	var_357_bool = 0; // 0x1ac PushV
	var_357_bool = 0; // 0x1ad MovB
	var_358_bool = 0; var_359_object = Obj(); // 0x1ae PushV
	var_359_object = var_1_object; // 0x1af MovT
	func_5299(var_359_object); // 0x1b0 NEW_2
	if(var_358_bool == 0) goto Label_441; // 0x1b2 JumpB
	var_360_bool = 0; var_361_object = Obj(); // 0x1b3 PushV
	var_361_object = var_1_object; // 0x1b4 MovT
	func_5385(var_360_bool, var_361_object); // 0x1b5 NEW_2
	if(var_360_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_357_bool = 1; // 0x1b8 MovB
	
Label_441:
	if(var_357_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_366_int = 538272; // 0x1ba PushI
	var_367_int = 40155; // 0x1bb PushI
	var_368_int = 40154; // 0x1bc PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x1bd TObjFunc
	
Label_447:
	var_369_bool = 0; var_370_object = Obj(); // 0x1bf PushV
	var_370_object = var_1_object; // 0x1c0 MovT
	func_5395(var_369_bool, var_370_object); // 0x1c1 NEW_2
	if(var_369_bool == 0) goto Label_457; // 0x1c3 JumpB
	var_375_int = 538291; // 0x1c4 PushI
	var_376_int = 40174; // 0x1c5 PushI
	var_377_int = 40173; // 0x1c6 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x1c7 TObjFunc
	
Label_457:
	var_378_bool = 0; // 0x1c9 PushV
	var_378_bool = 0; // 0x1ca MovB
	var_379_bool = 0; var_380_object = Obj(); // 0x1cb PushV
	var_380_object = var_1_object; // 0x1cc MovT
	func_5299(var_380_object); // 0x1cd NEW_2
	if(var_379_bool == 0) goto Label_470; // 0x1cf JumpB
	var_381_bool = 0; var_382_object = Obj(); // 0x1d0 PushV
	var_382_object = var_1_object; // 0x1d1 MovT
	func_5405(var_381_bool, var_382_object); // 0x1d2 NEW_2
	if(var_381_bool == 0) goto Label_470; // 0x1d4 JumpB
	var_378_bool = 1; // 0x1d5 MovB
	
Label_470:
	if(var_378_bool == 0) goto Label_476; // 0x1d6 JumpB
	var_383_int = 538308; // 0x1d7 PushI
	var_384_int = 40192; // 0x1d8 PushI
	var_385_int = 40191; // 0x1d9 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x1da TObjFunc
	
Label_476:
	var_386_bool = 0; var_387_object = Obj(); // 0x1dc PushV
	var_387_object = var_1_object; // 0x1dd MovT
	func_5415(var_386_bool, var_387_object); // 0x1de NEW_2
	if(var_386_bool == 0) goto Label_486; // 0x1e0 JumpB
	var_388_int = 538322; // 0x1e1 PushI
	var_389_int = 40206; // 0x1e2 PushI
	var_390_int = 40205; // 0x1e3 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x1e4 TObjFunc
	
Label_486:
	var_391_bool = 0; var_392_object = Obj(); // 0x1e6 PushV
	var_392_object = var_1_object; // 0x1e7 MovT
	func_5345(var_391_bool, var_392_object); // 0x1e8 NEW_2
	if(var_391_bool == 0) goto Label_496; // 0x1ea JumpB
	var_395_int = 538332; // 0x1eb PushI
	var_396_int = 40216; // 0x1ec PushI
	var_397_int = 40215; // 0x1ed PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x1ee TObjFunc
	
Label_496:
	var_398_bool = 0; // 0x1f0 PushV
	var_398_bool = 0; // 0x1f1 MovB
	var_399_bool = 0; var_400_object = Obj(); // 0x1f2 PushV
	var_400_object = var_1_object; // 0x1f3 MovT
	func_5299(var_400_object); // 0x1f4 NEW_2
	if(var_399_bool == 0) goto Label_509; // 0x1f6 JumpB
	var_401_bool = 0; var_402_object = Obj(); // 0x1f7 PushV
	var_402_object = var_1_object; // 0x1f8 MovT
	func_5425(var_401_bool, var_402_object); // 0x1f9 NEW_2
	if(var_401_bool == 0) goto Label_509; // 0x1fb JumpB
	var_398_bool = 1; // 0x1fc MovB
	
Label_509:
	if(var_398_bool == 0) goto Label_515; // 0x1fd JumpB
	var_403_int = 538347; // 0x1fe PushI
	var_404_int = 40233; // 0x1ff PushI
	var_405_int = 40232; // 0x200 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x201 TObjFunc
	
Label_515:
	var_406_bool = 0; var_407_object = Obj(); // 0x203 PushV
	var_407_object = var_1_object; // 0x204 MovT
	func_5435(var_406_bool, var_407_object); // 0x205 NEW_2
	if(var_406_bool == 0) goto Label_525; // 0x207 JumpB
	var_408_int = 538364; // 0x208 PushI
	var_409_int = 40250; // 0x209 PushI
	var_410_int = 40249; // 0x20a PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x20b TObjFunc
	
Label_525:
	var_411_bool = 0; // 0x20d PushV
	var_411_bool = 0; // 0x20e MovB
	var_412_bool = 0; var_413_object = Obj(); // 0x20f PushV
	var_413_object = var_1_object; // 0x210 MovT
	func_5299(var_413_object); // 0x211 NEW_2
	if(var_412_bool == 0) goto Label_538; // 0x213 JumpB
	var_414_bool = 0; var_415_object = Obj(); // 0x214 PushV
	var_415_object = var_1_object; // 0x215 MovT
	func_5445(var_414_bool, var_415_object); // 0x216 NEW_2
	if(var_414_bool == 0) goto Label_538; // 0x218 JumpB
	var_411_bool = 1; // 0x219 MovB
	
Label_538:
	if(var_411_bool == 0) goto Label_544; // 0x21a JumpB
	var_416_int = 538375; // 0x21b PushI
	var_417_int = 40262; // 0x21c PushI
	var_418_int = 40261; // 0x21d PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x21e TObjFunc
	
Label_544:
	var_419_bool = 0; // 0x220 PushV
	var_419_bool = 0; // 0x221 MovB
	var_420_bool = 0; var_421_object = Obj(); // 0x222 PushV
	var_421_object = var_1_object; // 0x223 MovT
	func_5299(var_421_object); // 0x224 NEW_2
	if(var_420_bool == 0) goto Label_557; // 0x226 JumpB
	var_422_bool = 0; var_423_object = Obj(); // 0x227 PushV
	var_423_object = var_1_object; // 0x228 MovT
	func_5445(var_422_bool, var_423_object); // 0x229 NEW_2
	if(var_422_bool == 0) goto Label_557; // 0x22b JumpB
	var_419_bool = 1; // 0x22c MovB
	
Label_557:
	if(var_419_bool == 0) goto Label_563; // 0x22d JumpB
	var_424_int = 538385; // 0x22e PushI
	var_425_int = 40272; // 0x22f PushI
	var_426_int = 40271; // 0x230 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x231 TObjFunc
	
Label_563:
	var_427_int = 538396; // 0x233 PushI
	var_428_int = -1; // 0x234 PushI
	var_429_int = 40282; // 0x235 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x236 TObjFunc
	goto Label_571; // 0x238 Jump
}


func_4685(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x124d PushV
	GetPosition(var_41_cvector); // 0x124e Func
	GetPosition(var_42_cvector); // 0x1250 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x1252 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x1253 Or2
	return 6; // 0x1254 Return
}


func_6223(var_124_object)
{
	var_125_object = Obj(); // 0x1850 PushV
	var_125_object = var_124_object; // 0x1851 Mov
	func_6133(var_125_object); // 0x1852 NEW_2
	return 0; // 0x1854 Return
}


func_5201(var_494_object)
{
	var_495_object = Obj(); var_496_object = Obj(); // 0x1451 PushV
	CreateObjectVector(var_496_object); // 0x1452 Func
	var_494_object = var_496_object; // 0x1454 Mov
	return 2; // 0x1455 Return
}


func_4179(var_602_bool, var_603_float)
{
	var_604_float = 0; var_605_bool = 0; var_606_float = 0; var_607_bool = 0; // 0x1053 PushV
	rand(var_606_float); // 0x1054 Func
	var_608_bool = var_606_float < var_603_float; // 0x1056 LT
	if(var_608_bool == 0) goto Label_4199; // 0x1057 JumpB
	
Label_4184:
	IsAnimationPlaying(var_607_bool); // 0x1058 Func
	var_609_bool = var_607_bool == 0; // 0x105a Not
	if(var_609_bool == 0) goto Label_4189; // 0x105b JumpB
	goto Label_4198; // 0x105c Jump
	
Label_4198:
	goto Label_4204; // 0x1066 Jump
	
Label_4204:
	var_602_bool = 0; // 0x106c MovB
	return 4; // 0x106d Return
	
Label_4189:
	var_610_bool = 0; // 0x105d PushV
	func_4277(var_610_bool); // 0x105e NEW_2
	if(var_610_bool == 0) goto Label_4195; // 0x1060 JumpB
	var_602_bool = 1; // 0x1061 MovB
	return 4; // 0x1062 Return
	
Label_4195:
	sync(); // 0x1063 Func
	goto Label_4184; // 0x1065 Jump
	
Label_4199:
	WaitForAnimEnd(); // 0x1067 Func
	func_4381(var_607_bool); // 0x106a NEW_2
}


func_4693(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_bool = 0; // 0x1255 PushV
	IsPlayerActor(var_103_object, var_105_bool); // 0x1256 Func
	var_102_bool = var_105_bool; // 0x1258 Mov
	return 2; // 0x1259 Return
}


func_6229(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x1855 PushV
	var_34_bool = 0; var_35_object = Obj(); var_36_bool = 0; // 0x1856 PushV
	var_35_object = var_29_object; // 0x1857 Mov
	var_36_bool = !var_31_bool; // 0x1858 Not2
	func_6141(var_34_bool, var_35_object, var_36_bool); // 0x1859 NEW_2
	var_72_bool = var_34_bool == 0; // 0x185b Not
	if(var_72_bool == 0) goto Label_6239; // 0x185c JumpB
	var_27_bool = 0; // 0x185d MovB
	return 2; // 0x185e Return
	
Label_6239:
	CanSee(var_33_bool, var_28_object); // 0x185f Func
	var_73_bool = 0; // 0x1861 PushV
	var_73_bool = 1; // 0x1862 MovB
	var_74_bool = var_33_bool; // 0x1863 Push
	if(var_74_bool == 0) goto Label_6253; // 0x1864 JumpB
	var_75_float = 0; var_76_object = Obj(); // 0x1865 PushV
	var_76_object = var_28_object; // 0x1866 Mov
	func_4685(var_76_object); // 0x1867 NEW_2
	var_83_float = var_30_float * var_30_float; // 0x1869 Mult
	var_84_bool = var_75_float <= var_83_float; // 0x186a LE
	if(var_84_bool == 0) goto Label_6253; // 0x186b JumpB
	var_73_bool = 0; // 0x186c MovB
	
Label_6253:
	if(var_73_bool == 0) goto Label_6256; // 0x186d JumpB
	var_27_bool = 1; // 0x186e MovB
	return 2; // 0x186f Return
	
Label_6256:
	var_27_bool = 0; // 0x1870 MovB
	return 2; // 0x1871 Return
}


func_5207(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_float = GetByIndex(var_72_cvector, 0); // 0x1458 PushE
	var_75_float = GetByIndex(var_73_cvector, 0); // 0x1459 PushE
	var_76_float = var_74_float * var_75_float; // 0x145a Mult
	var_77_float = GetByIndex(var_72_cvector, 2); // 0x145b PushE
	var_78_float = GetByIndex(var_73_cvector, 2); // 0x145c PushE
	var_79_float = var_77_float * var_78_float; // 0x145d Mult
	var_71_float = var_76_float + var_79_float; // 0x145e Add2
	return 0; // 0x145f Return
}


func_601(var_2_object, var_130_string)
{
	var_131_bool = 0; // 0x25a PushV
	func_6533(var_131_bool); // 0x25b NEW_2
	var_132_bool = var_131_bool == 0; // 0x25d Not
	if(var_132_bool == 0) goto Label_608; // 0x25e JumpB
	return 0; // 0x25f Return
	
Label_608:
	var_133_bool = var_130_string == var_2_object; // 0x260 Eq
	if(var_133_bool == 0) goto Label_611; // 0x261 JumpB
	return 0; // 0x262 Return
	
Label_611:
	var_134_string = ""; var_135_bool = 0; // 0x263 PushV
	var_134_string = var_130_string; // 0x264 Mov
	var_136_string = ""; // 0x265 PushS
	var_137_bool = var_130_string == var_136_string; // 0x266 Eq
	if(var_137_bool == 0) goto Label_618; // 0x267 JumpB
	var_135_bool = 0; // 0x268 MovB
	goto Label_619; // 0x269 Jump
	
Label_619:
	func_5093(var_134_string, var_135_bool); // 0x26b NEW_2
	var_2_object = var_130_string; // 0x26d TMov
	return 0; // 0x26e Return
	
Label_618:
	var_135_bool = 1; // 0x26a MovB
}


func_4698(var_53_bool, var_54_object, var_55_string)
{
	var_56_bool = 0; var_57_bool = 0; // 0x125a PushV
	var_58_string = "HasProperty"; // 0x125b PushS
	var_59_int = 2; // 0x125c PushI
	var_60_bool = IsFuncExist(var_54_object, var_58_string, var_59_int); // 0x125d FuncExist
	var_61_bool = var_60_bool == 0; // 0x125e Not
	if(var_61_bool == 0) goto Label_4706; // 0x125f JumpB
	var_53_bool = 0; // 0x1260 MovB
	return 2; // 0x1261 Return
	
Label_4706:
	HasProperty(var_55_string, var_57_bool); // 0x1262 ObjFunc
	var_53_bool = var_57_bool; // 0x1264 Mov
	return 2; // 0x1265 Return
}


func_3166(var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0xc5e PushV
	GetCameraFarDistance(var_41_float); // 0xc5f Func
	var_39_float = var_41_float; // 0xc61 Mov
	return 2; // 0xc62 Return
}


func_5216(var_80_float, var_81_cvector)
{
	var_82_float = GetByIndex(var_81_cvector, 0); // 0x1461 PushE
	var_83_float = GetByIndex(var_81_cvector, 0); // 0x1462 PushE
	var_84_float = var_82_float * var_83_float; // 0x1463 Mult
	var_85_float = GetByIndex(var_81_cvector, 2); // 0x1464 PushE
	var_86_float = GetByIndex(var_81_cvector, 2); // 0x1465 PushE
	var_87_float = var_85_float * var_86_float; // 0x1466 Mult
	var_88_int = var_84_float + var_87_float; // 0x1467 Add
	var_80_float = sqrt(var_88_int); // 0x1468 Sqrt2
	return 0; // 0x1469 Return
}


func_5729(var_111_bool)
{
	var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_bool = 0; // 0x1661 PushV
	var_116_bool = var_111_bool; // 0x1662 Push
	if(var_116_bool == 0) goto Label_5818; // 0x1663 JumpB
	var_117_int = 0; var_118_int = 0; // 0x1664 PushV
	var_117_int = 0; // 0x1665 MovI
	var_119_int = 100; // 0x1666 PushI
	var_120_int = 0; // 0x1667 PushV
	func_5265(var_120_int); // 0x1668 NEW_2
	var_126_int = 100; // 0x166a PushI
	var_127_float = var_120_int * var_126_int; // 0x166b Mult
	var_118_int = var_119_int + var_127_float; // 0x166c Add2
	func_5657(var_117_int, var_118_int); // 0x166d NEW_2
	var_145_int = 8; // 0x166f PushI
	irand(var_114_int, var_145_int); // 0x1670 Func
	var_146_int = 0; // 0x1672 PushI
	var_147_bool = var_114_int == var_146_int; // 0x1673 Eq
	if(var_147_bool == 0) goto Label_5758; // 0x1674 JumpB
	var_148_int = 0; var_149_string = ""; // 0x1675 PushV
	var_149_string = "lemon"; // 0x1676 MovS
	func_5904(var_148_int, var_149_string); // 0x1677 NEW_2
	var_150_int = 0; // 0x1679 PushI
	var_151_int = 1; // 0x167a PushI
	AddItem(var_115_bool, var_148_int, var_150_int, var_151_int); // 0x167b Func
	goto Label_5817; // 0x167d Jump
	
Label_5817:
	goto Label_5903; // 0x16b9 Jump
	
Label_5903:
	return 4; // 0x170f Return
	
Label_5758:
	var_152_int = 1; // 0x167e PushI
	var_153_bool = var_114_int == var_152_int; // 0x167f Eq
	if(var_153_bool == 0) goto Label_5770; // 0x1680 JumpB
	var_154_int = 0; var_155_string = ""; // 0x1681 PushV
	var_155_string = "rusk"; // 0x1682 MovS
	func_5904(var_154_int, var_155_string); // 0x1683 NEW_2
	var_156_int = 0; // 0x1685 PushI
	var_157_int = 1; // 0x1686 PushI
	AddItem(var_115_bool, var_154_int, var_156_int, var_157_int); // 0x1687 Func
	goto Label_5817; // 0x1689 Jump
	
Label_5770:
	var_158_int = 2; // 0x168a PushI
	var_159_bool = var_114_int == var_158_int; // 0x168b Eq
	if(var_159_bool == 0) goto Label_5782; // 0x168c JumpB
	var_160_int = 0; var_161_string = ""; // 0x168d PushV
	var_161_string = "hook"; // 0x168e MovS
	func_5904(var_160_int, var_161_string); // 0x168f NEW_2
	var_162_int = 0; // 0x1691 PushI
	var_163_int = 1; // 0x1692 PushI
	AddItem(var_115_bool, var_160_int, var_162_int, var_163_int); // 0x1693 Func
	goto Label_5817; // 0x1695 Jump
	
Label_5782:
	var_164_int = 4; // 0x1696 PushI
	var_165_bool = var_114_int == var_164_int; // 0x1697 Eq
	if(var_165_bool == 0) goto Label_5794; // 0x1698 JumpB
	var_166_int = 0; var_167_string = ""; // 0x1699 PushV
	var_167_string = "syringe"; // 0x169a MovS
	func_5904(var_166_int, var_167_string); // 0x169b NEW_2
	var_168_int = 0; // 0x169d PushI
	var_169_int = 1; // 0x169e PushI
	AddItem(var_115_bool, var_166_int, var_168_int, var_169_int); // 0x169f Func
	goto Label_5817; // 0x16a1 Jump
	
Label_5794:
	var_170_int = 5; // 0x16a2 PushI
	var_171_bool = var_114_int == var_170_int; // 0x16a3 Eq
	if(var_171_bool == 0) goto Label_5806; // 0x16a4 JumpB
	var_172_int = 0; var_173_string = ""; // 0x16a5 PushV
	var_173_string = "watch"; // 0x16a6 MovS
	func_5904(var_172_int, var_173_string); // 0x16a7 NEW_2
	var_174_int = 0; // 0x16a9 PushI
	var_175_int = 1; // 0x16aa PushI
	AddItem(var_115_bool, var_172_int, var_174_int, var_175_int); // 0x16ab Func
	goto Label_5817; // 0x16ad Jump
	
Label_5806:
	var_176_int = 6; // 0x16ae PushI
	var_177_bool = var_114_int == var_176_int; // 0x16af Eq
	if(var_177_bool == 0) goto Label_5817; // 0x16b0 JumpB
	var_178_int = 0; var_179_string = ""; // 0x16b1 PushV
	var_179_string = "razor"; // 0x16b2 MovS
	func_5904(var_178_int, var_179_string); // 0x16b3 NEW_2
	var_180_int = 0; // 0x16b5 PushI
	var_181_int = 1; // 0x16b6 PushI
	AddItem(var_115_bool, var_178_int, var_180_int, var_181_int); // 0x16b7 Func
	
Label_5818:
	var_182_int = 0; var_183_int = 0; // 0x16ba PushV
	var_182_int = 0; // 0x16bb MovI
	var_184_int = 50; // 0x16bc PushI
	var_185_int = 0; // 0x16bd PushV
	func_5265(var_185_int); // 0x16be NEW_2
	var_186_int = 50; // 0x16c0 PushI
	var_187_float = var_185_int * var_186_int; // 0x16c1 Mult
	var_183_int = var_184_int + var_187_float; // 0x16c2 Add2
	func_5657(var_182_int, var_183_int); // 0x16c3 NEW_2
	var_188_int = 7; // 0x16c5 PushI
	irand(var_114_int, var_188_int); // 0x16c6 Func
	var_189_int = 0; // 0x16c8 PushI
	var_190_bool = var_114_int == var_189_int; // 0x16c9 Eq
	if(var_190_bool == 0) goto Label_5844; // 0x16ca JumpB
	var_191_int = 0; var_192_string = ""; // 0x16cb PushV
	var_192_string = "beads"; // 0x16cc MovS
	func_5904(var_191_int, var_192_string); // 0x16cd NEW_2
	var_193_int = 0; // 0x16cf PushI
	var_194_int = 1; // 0x16d0 PushI
	AddItem(var_115_bool, var_191_int, var_193_int, var_194_int); // 0x16d1 Func
	goto Label_5903; // 0x16d3 Jump
	
Label_5844:
	var_195_int = 1; // 0x16d4 PushI
	var_196_bool = var_114_int == var_195_int; // 0x16d5 Eq
	if(var_196_bool == 0) goto Label_5856; // 0x16d6 JumpB
	var_197_int = 0; var_198_string = ""; // 0x16d7 PushV
	var_198_string = "bracelet"; // 0x16d8 MovS
	func_5904(var_197_int, var_198_string); // 0x16d9 NEW_2
	var_199_int = 0; // 0x16db PushI
	var_200_int = 1; // 0x16dc PushI
	AddItem(var_115_bool, var_197_int, var_199_int, var_200_int); // 0x16dd Func
	goto Label_5903; // 0x16df Jump
	
Label_5856:
	var_201_int = 2; // 0x16e0 PushI
	var_202_bool = var_114_int == var_201_int; // 0x16e1 Eq
	if(var_202_bool == 0) goto Label_5868; // 0x16e2 JumpB
	var_203_int = 0; var_204_string = ""; // 0x16e3 PushV
	var_204_string = "ear_ring"; // 0x16e4 MovS
	func_5904(var_203_int, var_204_string); // 0x16e5 NEW_2
	var_205_int = 0; // 0x16e7 PushI
	var_206_int = 1; // 0x16e8 PushI
	AddItem(var_115_bool, var_203_int, var_205_int, var_206_int); // 0x16e9 Func
	goto Label_5903; // 0x16eb Jump
	
Label_5868:
	var_207_int = 3; // 0x16ec PushI
	var_208_bool = var_114_int == var_207_int; // 0x16ed Eq
	if(var_208_bool == 0) goto Label_5880; // 0x16ee JumpB
	var_209_int = 0; var_210_string = ""; // 0x16ef PushV
	var_210_string = "gold_ring"; // 0x16f0 MovS
	func_5904(var_209_int, var_210_string); // 0x16f1 NEW_2
	var_211_int = 0; // 0x16f3 PushI
	var_212_int = 1; // 0x16f4 PushI
	AddItem(var_115_bool, var_209_int, var_211_int, var_212_int); // 0x16f5 Func
	goto Label_5903; // 0x16f7 Jump
	
Label_5880:
	var_213_int = 4; // 0x16f8 PushI
	var_214_bool = var_114_int == var_213_int; // 0x16f9 Eq
	if(var_214_bool == 0) goto Label_5892; // 0x16fa JumpB
	var_215_int = 0; var_216_string = ""; // 0x16fb PushV
	var_216_string = "silver_ring"; // 0x16fc MovS
	func_5904(var_215_int, var_216_string); // 0x16fd NEW_2
	var_217_int = 0; // 0x16ff PushI
	var_218_int = 1; // 0x1700 PushI
	AddItem(var_115_bool, var_215_int, var_217_int, var_218_int); // 0x1701 Func
	goto Label_5903; // 0x1703 Jump
	
Label_5892:
	var_219_int = 5; // 0x1704 PushI
	var_220_bool = var_114_int == var_219_int; // 0x1705 Eq
	if(var_220_bool == 0) goto Label_5903; // 0x1706 JumpB
	var_221_int = 0; var_222_string = ""; // 0x1707 PushV
	var_222_string = "flower"; // 0x1708 MovS
	func_5904(var_221_int, var_222_string); // 0x1709 NEW_2
	var_223_int = 0; // 0x170b PushI
	var_224_int = 1; // 0x170c PushI
	AddItem(var_115_bool, var_221_int, var_223_int, var_224_int); // 0x170d Func
}


func_4710(var_511_float, var_512_object, var_513_float, var_514_int)
{
	var_518_int = 0; var_519_string = ""; var_520_int = 0; var_521_float = 0; var_522_float = 0; var_523_float = 0; var_524_int = 0; var_525_string = ""; var_526_int = 0; var_527_float = 0; var_528_float = 0; var_529_float = 0; // 0x1266 PushV
	var_530_bool = 0; var_531_object = Obj(); var_532_string = ""; // 0x1267 PushV
	var_531_object = var_512_object; // 0x1268 Mov
	var_532_string = "health"; // 0x1269 MovS
	func_4698(var_530_bool, var_531_object, var_532_string); // 0x126a NEW_2
	var_533_bool = var_530_bool == 0; // 0x126c Not
	if(var_533_bool == 0) goto Label_4720; // 0x126d JumpB
	var_511_float = 0.0; // 0x126e MovF
	return 12; // 0x126f Return
	
Label_4720:
	var_534_bool = 0; var_535_object = Obj(); var_536_string = ""; // 0x1270 PushV
	var_535_object = var_512_object; // 0x1271 Mov
	var_536_string = "armor"; // 0x1272 MovS
	func_4698(var_534_bool, var_535_object, var_536_string); // 0x1273 NEW_2
	var_537_bool = var_534_bool == 0; // 0x1275 Not
	if(var_537_bool == 0) goto Label_4729; // 0x1276 JumpB
	var_524_int = 0; // 0x1277 MovI
	goto Label_4732; // 0x1278 Jump
	
Label_4732:
	var_538_string = "armor_"; // 0x127c PushS
	var_539_string = ""; var_540_int = 0; // 0x127d PushV
	var_540_int = var_514_int; // 0x127e Mov
	func_4664(var_539_string, var_540_int); // 0x127f NEW_2
	var_525_string = var_538_string + var_539_string; // 0x1281 Add2
	var_545_bool = 0; var_546_object = Obj(); var_547_string = ""; // 0x1282 PushV
	var_546_object = var_512_object; // 0x1283 Mov
	var_547_string = var_525_string; // 0x1284 Mov
	func_4698(var_545_bool, var_546_object, var_547_string); // 0x1285 NEW_2
	var_548_bool = var_545_bool == 0; // 0x1287 Not
	if(var_548_bool == 0) goto Label_4747; // 0x1288 JumpB
	var_526_int = 0; // 0x1289 MovI
	goto Label_4749; // 0x128a Jump
	
Label_4749:
	var_549_float = 0; var_550_float = 0; var_551_float = 0; // 0x128d PushV
	var_552_int = var_524_int + var_526_int; // 0x128e Add
	var_553_float = 100.0; // 0x128f PushF
	var_550_float = var_552_int / var_552_int; // 0x1290 Div2
	var_551_float = 1; // 0x1291 MovI
	func_5183(var_549_float, var_550_float, var_551_float); // 0x1292 NEW_2
	var_527_float = var_549_float; // 0x1293 Mov
	var_555_string = "health"; // 0x1295 PushS
	GetProperty(var_555_string, var_528_float); // 0x1296 ObjFunc
	var_556_int = 1; // 0x1298 PushI
	var_557_int = var_556_int - var_527_float; // 0x1299 Sub
	var_529_float = var_513_float * var_557_int; // 0x129a Mult2
	var_558_string = "health"; // 0x129b PushS
	var_559_float = 0; var_560_float = 0; var_561_float = 0; var_562_float = 0; // 0x129c PushV
	var_560_float = var_528_float - var_529_float; // 0x129d Sub2
	var_561_float = 0; // 0x129e MovI
	var_562_float = 1; // 0x129f MovI
	func_5190(var_559_float, var_560_float, var_561_float, var_562_float); // 0x12a0 NEW_2
	SetProperty(var_558_string, var_559_float); // 0x12a2 ObjFunc
	var_565_bool = 0; var_566_object = Obj(); // 0x12a4 PushV
	var_566_object = var_512_object; // 0x12a5 Mov
	func_4693(var_565_bool, var_566_object); // 0x12a6 NEW_2
	if(var_565_bool == 0) goto Label_4781; // 0x12a8 JumpB
	var_567_float = 0; // 0x12a9 PushV
	var_567_float = -var_529_float; // 0x12aa Neg2
	func_5248(var_567_float); // 0x12ab NEW_2
	
Label_4781:
	var_511_float = var_529_float; // 0x12ad Mov
	return 12; // 0x12ae Return
	
Label_4747:
	GetProperty(var_525_string, var_526_int); // 0x128b ObjFunc
	
Label_4729:
	var_575_string = "armor"; // 0x1279 PushS
	GetProperty(var_575_string, var_524_int); // 0x127a ObjFunc
}


func_3178(var_0_object, var_1_object)
{
	var_0_object = 1; // 0xc6a TMovB
	var_1_object = 0; // 0xc6b TMovB
	Stop(); // 0xc6c Func
	StopGroup0(); // 0xc6e Func
	return 0; // 0xc70 Return
}


func_5226(var_68_float, var_69_cvector, var_70_cvector)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); // 0x146b PushV
	var_72_cvector = var_69_cvector; // 0x146c Mov
	var_73_cvector = var_70_cvector; // 0x146d Mov
	func_5207(var_71_float, var_72_cvector, var_73_cvector); // 0x146e NEW_2
	var_80_float = 0; var_81_cvector = CVector(0,0,0); // 0x1470 PushV
	var_81_cvector = var_69_cvector; // 0x1471 Mov
	func_5216(var_80_float, var_81_cvector); // 0x1472 NEW_2
	var_89_float = 0; var_90_cvector = CVector(0,0,0); // 0x1474 PushV
	var_90_cvector = var_70_cvector; // 0x1475 Mov
	func_5216(var_89_float, var_90_cvector); // 0x1476 NEW_2
	var_91_float = var_80_float * var_89_float; // 0x1478 Mult
	var_68_float = var_71_float / var_71_float; // 0x1479 Div2
	return 0; // 0x147a Return
}


func_4206(var_0_object, var_403_bool, var_404_float)
{
	var_405_bool = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_float = 0; var_410_bool = 0; var_411_cvector = CVector(0,0,0); var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_float = 0; // 0x106e PushV
	
Label_4207:
	IsAnimationPlaying(var_410_bool); // 0x106f Func
	var_415_bool = var_410_bool == 0; // 0x1071 Not
	if(var_415_bool == 0) goto Label_4212; // 0x1072 JumpB
	goto Label_4244; // 0x1073 Jump
	
Label_4244:
	func_4381(var_414_float); // 0x1095 NEW_2
	var_403_bool = 0; // 0x1097 MovB
	return 10; // 0x1098 Return
	
Label_4212:
	var_416_bool = 0; // 0x1074 PushV
	func_4277(var_416_bool); // 0x1075 NEW_2
	if(var_416_bool == 0) goto Label_4218; // 0x1077 JumpB
	var_403_bool = 1; // 0x1078 MovB
	return 10; // 0x1079 Return
	
Label_4218:
	var_455_bool = 0; var_456_object = Obj(); // 0x107a PushV
	var_456_object = var_0_object; // 0x107b MovT
	func_4824(var_455_bool, var_456_object); // 0x107c NEW_2
	var_457_bool = var_455_bool == 0; // 0x107e Not
	if(var_457_bool == 0) goto Label_4226; // 0x107f JumpB
	var_403_bool = 0; // 0x1080 MovB
	return 10; // 0x1081 Return
	
Label_4226:
	GetPFPosition(var_411_cvector); // 0x1082 TObjFunc
	GetPFPosition(var_412_cvector); // 0x1084 Func
	var_413_cvector = var_411_cvector - var_412_cvector; // 0x1086 Sub2
	var_414_float = var_413_cvector | var_413_cvector; // 0x1087 Or2
	var_458_float = var_404_float * var_404_float; // 0x1088 Mult
	var_459_bool = var_414_float < var_458_float; // 0x1089 LT
	if(var_459_bool == 0) goto Label_4241; // 0x108a JumpB
	var_460_bool = 0; var_461_float = 0; // 0x108b PushV
	var_461_float = var_404_float; // 0x108c Mov
	func_4042(var_414_float, var_460_bool, var_461_float); // 0x108d NEW_2
	var_403_bool = 1; // 0x108f MovB
	return 10; // 0x1090 Return
	
Label_4241:
	sync(); // 0x1091 Func
	goto Label_4207; // 0x1093 Jump
}


func_3185(var_0_object, var_1_object)
{
	var_0_object = 1; // 0xc71 TMovB
	var_1_object = 1; // 0xc72 TMovB
	Stop(); // 0xc73 Func
	StopGroup0(); // 0xc75 Func
	return 0; // 0xc77 Return
}


func_6258(var_21_int)
{
	var_21_int = 0; // 0x1873 MovI
	return 0; // 0x1874 Return
}


func_2675(var_20_object)
{
	EventDisable(0); // 0xa74 EventDisable
	var_21_object = Obj(); // 0xa75 PushV
	var_21_object = var_20_object; // 0xa76 Mov
	func_2708(var_21_object); // 0xa77 NEW_2
	var_101_object = Obj(); // 0xa79 PushV
	var_101_object = var_20_object; // 0xa7a Mov
	func_6572(var_101_object); // 0xa7b NEW_2
	EventEnable(0); // 0xa7d EventEnable
	
Label_2686:
	Hold(); // 0xa7e Func
	goto Label_2686; // 0xa80 Jump
}


func_6261()
{
	return 0; // 0x1876 Return
}


func_6263(var_128_int, var_129_string, var_130_object)
{
	var_131_string = "killme"; // 0x1878 PushS
	var_132_bool = var_129_string == var_131_string; // 0x1879 Eq
	if(var_132_bool == 0) goto Label_6273; // 0x187a JumpB
	var_133_int = 0; var_134_object = Obj(); // 0x187b PushV
	var_134_object = var_130_object; // 0x187c Mov
	func_6285(var_133_int, var_134_object); // 0x187d NEW_2
	var_128_int = var_133_int; // 0x187e Mov
	return 0; // 0x1880 Return
	
Label_6273:
	var_128_int = 0; // 0x1881 MovI
	return 0; // 0x1882 Return
}


func_3192(var_49_bool)
{
	var_49_bool = 0; // 0xc78 MovB
	return 0; // 0xc79 Return
}


func_3194(var_43_object, var_44_cvector)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0xc7a PushV
	FindShiftedPathTo(var_46_object, var_44_cvector); // 0xc7b Func
	var_43_object = var_46_object; // 0xc7d Mov
	return 2; // 0xc7e Return
}


func_5243(var_124_int, var_125_string)
{
	var_126_int = 0; var_127_int = 0; // 0x147b PushV
	GetVariable(var_125_string, var_127_int); // 0x147c Func
	var_124_int = var_127_int; // 0x147e Mov
	return 2; // 0x147f Return
}


func_5248(var_567_float)
{
	var_568_object = Obj(); var_569_object = Obj(); // 0x1480 PushV
	CreateFloatVector(var_569_object); // 0x1481 Func
	add(var_567_float); // 0x1483 ObjFunc
	var_570_int = 0; // 0x1485 PushI
	var_571_bool = var_567_float < var_570_int; // 0x1486 LT
	if(var_571_bool == 0) goto Label_5260; // 0x1487 JumpB
	var_572_float = 0.7; // 0x1488 PushF
	var_573_int = 500; // 0x1489 PushI
	RumblePlay(var_572_float, var_573_int); // 0x148a Func
	
Label_5260:
	var_574_int = 15; // 0x148c PushI
	SendWorldWndMessage(var_574_int, var_569_object); // 0x148d Func
	return 2; // 0x148f Return
}


func_6275(var_176_string, var_177_object)
{
	var_178_string = "killme"; // 0x1884 PushS
	var_179_bool = var_176_string == var_178_string; // 0x1885 Eq
	if(var_179_bool == 0) goto Label_6284; // 0x1886 JumpB
	var_180_object = Obj(); // 0x1887 PushV
	var_180_object = var_177_object; // 0x1888 Mov
	func_6303(var_180_object); // 0x1889 NEW_2
	return 0; // 0x188b Return
	
Label_6284:
	return 0; // 0x188c Return
}


func_3725(var_182_object)
{
	var_189_object = Obj(); var_190_bool = 0; var_191_float = 0; // 0xe8e PushV
	var_189_object = var_182_object; // 0xe8f Mov
	var_190_bool = 1; // 0xe90 MovB
	var_191_float = 180.0; // 0xe91 MovF
	func_3739(var_185_int, var_186_bool, var_187_float, var_188_int, var_182_object, var_189_object, var_190_bool, var_191_float); // 0xe92 NEW_2
	return 0; // 0xe94 Return
}


func_6285(var_133_int, var_134_object)
{
	var_135_bool = 0; var_136_object = Obj(); // 0x188e PushV
	var_136_object = var_134_object; // 0x188f Mov
	func_4824(var_135_bool, var_136_object); // 0x1890 NEW_2
	var_169_bool = var_135_bool == 0; // 0x1892 Not
	if(var_169_bool == 0) goto Label_6294; // 0x1893 JumpB
	var_133_int = 0; // 0x1894 MovI
	return 0; // 0x1895 Return
	
Label_6294:
	var_170_bool = 0; var_171_object = Obj(); // 0x1896 PushV
	var_171_object = var_134_object; // 0x1897 Mov
	func_6559(var_171_object); // 0x1898 NEW_2
	if(var_170_bool == 0) goto Label_6301; // 0x189a JumpB
	var_133_int = 2; // 0x189b MovI
	goto Label_6302; // 0x189c Jump
	
Label_6302:
	return 0; // 0x189e Return
	
Label_6301:
	var_133_int = 0; // 0x189d MovI
}


func_5265(var_120_int)
{
	var_121_float = 0; var_122_float = 0; // 0x1491 PushV
	GetGameTime(var_122_float); // 0x1492 Func
	var_123_int = 1; // 0x1494 PushI
	var_124_int = 0; // 0x1495 PushV
	var_125_int = 24; // 0x1496 PushI
	var_124_int = var_122_float / var_122_float; // 0x1497 Div2
	var_120_int = var_123_int + var_124_int; // 0x1498 Add2
	return 2; // 0x1499 Return
}


func_2708(var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_object = Obj(); var_38_bool = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); // 0xa94 PushV
	var_42_bool = var_21_object == 0; // 0xa95 NullEq
	if(var_42_bool == 0) goto Label_2716; // 0xa96 JumpB
	var_43_string = ""; // 0xa97 PushV
	var_43_string = "fdie"; // 0xa98 MovS
	func_2799(var_43_string); // 0xa99 NEW_2
	goto Label_2798; // 0xa9b Jump
	
Label_2798:
	return 20; // 0xaee Return
	
Label_2716:
	GetPosition(var_32_cvector); // 0xa9c ObjFunc
	GetPosition(var_33_cvector); // 0xa9e Func
	GetDirection(var_34_cvector); // 0xaa0 Func
	var_35_cvector = var_33_cvector - var_32_cvector; // 0xaa2 Sub2
	var_75_float = GetByIndex(var_35_cvector, 0); // 0xaa3 PushE
	var_76_float = GetByIndex(var_34_cvector, 0); // 0xaa4 PushE
	var_77_float = var_75_float * var_76_float; // 0xaa5 Mult
	var_78_float = GetByIndex(var_35_cvector, 2); // 0xaa6 PushE
	var_79_float = GetByIndex(var_34_cvector, 2); // 0xaa7 PushE
	var_80_float = var_78_float * var_79_float; // 0xaa8 Mult
	var_81_int = var_77_float + var_80_float; // 0xaa9 Add
	var_82_int = 0; // 0xaaa PushI
	var_83_bool = var_81_int >= var_82_int; // 0xaab GE
	if(var_83_bool == 0) goto Label_2735; // 0xaac JumpB
	var_36_string = "fdie"; // 0xaad MovS
	goto Label_2736; // 0xaae Jump
	
Label_2736:
	RemoveRTEnvelope(); // 0xab0 Func
	SetDeathState(); // 0xab2 Func
	Stop(); // 0xab4 Func
	StopAsync(); // 0xab6 Func
	var_37_object = var_21_object; // 0xab8 Mov
	var_84_string = "GetScriptProperty"; // 0xab9 PushS
	var_85_int = 2; // 0xaba PushI
	var_86_bool = IsFuncExist(var_21_object, var_84_string, var_85_int); // 0xabb FuncExist
	if(var_86_bool == 0) goto Label_2760; // 0xabc JumpB
	var_87_string = "Owner"; // 0xabd PushS
	HasScriptProperty(var_38_bool, var_87_string); // 0xabe ObjFunc
	var_88_bool = var_38_bool; // 0xac0 Push
	if(var_88_bool == 0) goto Label_2760; // 0xac1 JumpB
	var_89_string = "Owner"; // 0xac2 PushS
	GetScriptProperty(var_37_object, var_89_string); // 0xac3 ObjFunc
	var_90_bool = var_37_object == 0; // 0xac5 NullEq
	if(var_90_bool == 0) goto Label_2760; // 0xac6 JumpB
	var_37_object = var_21_object; // 0xac7 Mov
	
Label_2760:
	var_91_string = "@GetEyesHeight"; // 0xac8 PushS
	var_92_int = 1; // 0xac9 PushI
	var_93_bool = IsFuncExist(var_37_object, var_91_string, var_92_int); // 0xaca FuncExist
	if(var_93_bool == 0) goto Label_2775; // 0xacb JumpB
	GetEyesHeight(var_40_float); // 0xacc ObjFunc
	var_41_cvector = CVector(0.0, 0.0, 0.0); // 0xace MovV
	var_94_float = GetByIndex(var_41_cvector, 1); // 0xacf PushE
	var_94_float = var_40_float; // 0xad0 Mov
	SetByIndex(var_41_cvector, 1) = var_94_float; // 0xad1 PopE
	var_95_string = "head"; // 0xad2 PushS
	LookAsync(var_21_object, var_95_string, var_41_cvector); // 0xad3 Func
	var_39_bool = 1; // 0xad5 MovB
	goto Label_2776; // 0xad6 Jump
	
Label_2776:
	var_96_string = ""; // 0xad8 PushV
	var_96_string = var_36_string; // 0xad9 Mov
	func_5126(var_96_string); // 0xada NEW_2
	var_97_string = "all"; // 0xadc PushS
	PlayAnimation(var_97_string, var_36_string); // 0xadd Func
	WaitForAnimEnd(); // 0xadf Func
	var_98_bool = var_39_bool; // 0xae1 Push
	if(var_98_bool == 0) goto Label_2792; // 0xae2 JumpB
	StopAsync(); // 0xae3 Func
	var_99_string = "head"; // 0xae5 PushS
	UnlookAsync(var_99_string); // 0xae6 Func
	
Label_2792:
	var_100_string = "all"; // 0xae8 PushS
	LockAnimationEnd(var_100_string, var_36_string); // 0xae9 Func
	RemoveEnvelope(); // 0xaeb Func
	var_37_object = 0; // 0xaed SetNull
	
Label_2775:
	var_39_bool = 0; // 0xad7 MovB
	
Label_2735:
	var_36_string = "bdie"; // 0xaaf MovS
}


func_3733(var_508_float)
{
	var_508_float = 0.05; // 0xe96 MovF
	return 0; // 0xe97 Return
}


func_3736(var_515_int)
{
	var_515_int = 0; // 0xe99 MovI
	return 0; // 0xe9a Return
}


func_4249(var_0_object, var_418_bool)
{
	var_419_cvector = CVector(0,0,0); var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_float = 0; var_423_float = 0; var_424_cvector = CVector(0,0,0); var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_float = 0; var_428_float = 0; // 0x1099 PushV
	var_429_bool = 0; var_430_object = Obj(); // 0x109a PushV
	var_430_object = var_0_object; // 0x109b MovT
	func_4824(var_429_bool, var_430_object); // 0x109c NEW_2
	var_431_bool = var_429_bool == 0; // 0x109e Not
	if(var_431_bool == 0) goto Label_4258; // 0x109f JumpB
	var_418_bool = 0; // 0x10a0 MovB
	return 10; // 0x10a1 Return
	
Label_4258:
	var_432_bool = 0; // 0x10a2 PushV
	func_4338(var_428_float, var_432_bool); // 0x10a3 NEW_2
	if(var_432_bool == 0) goto Label_4275; // 0x10a5 JumpB
	GetPFPosition(var_424_cvector); // 0x10a6 TObjFunc
	GetPFPosition(var_425_cvector); // 0x10a8 Func
	var_426_cvector = var_424_cvector - var_425_cvector; // 0x10aa Sub2
	var_427_float = var_426_cvector | var_426_cvector; // 0x10ab Or2
	GetAttackDistance(var_428_float); // 0x10ac TObjFunc
	var_433_int = 50; // 0x10ae PushI
	var_428_float = var_428_float + var_433_int; // 0x10af Add2
	var_434_float = var_428_float * var_428_float; // 0x10b0 Mult
	var_418_bool = var_427_float <= var_434_float; // 0x10b1 LE2
	return 10; // 0x10b2 Return
	
Label_4275:
	var_418_bool = 0; // 0x10b3 MovB
	return 10; // 0x10b4 Return
}


func_5274(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x149a PushV
	IsPlayerActor(var_21_object, var_23_bool); // 0x149b Func
	var_24_bool = var_23_bool; // 0x149d Push
	if(var_24_bool == 0) goto Label_5282; // 0x149e JumpB
	var_25_string = "attack"; // 0x149f PushS
	PlayGlobalMusic(var_25_string); // 0x14a0 Func
	
Label_5282:
	return 2; // 0x14a2 Return
}


func_3739(var_0_object, var_3_string, var_5_bool, var_189_object, var_190_bool, var_191_float, var_266_bool, var_352_bool)
{
	var_192_float = 0; var_193_cvector = CVector(0,0,0); var_194_cvector = CVector(0,0,0); var_195_bool = 0; var_196_bool = 0; var_197_float = 0; var_198_cvector = CVector(0,0,0); var_199_float = 0; var_200_cvector = CVector(0,0,0); var_201_bool = 0; var_202_float = 0; var_203_float = 0; var_204_cvector = CVector(0,0,0); var_205_cvector = CVector(0,0,0); var_206_bool = 0; var_207_bool = 0; var_208_float = 0; var_209_cvector = CVector(0,0,0); var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_bool = 0; var_213_float = 0; // 0xe9b PushV
	func_3968(var_211_cvector, var_212_bool, var_213_float); // 0xe9d NEW_2
	var_5_bool = 0; // 0xe9f TMovI
	var_236_string = "@GetAttackDistance"; // 0xea0 PushS
	var_237_int = 1; // 0xea1 PushI
	var_238_bool = IsFuncExist(var_189_object, var_236_string, var_237_int); // 0xea2 FuncExist
	if(var_238_bool == 0) goto Label_3753; // 0xea3 JumpB
	GetAttackDistance(var_203_float); // 0xea4 ObjFunc
	var_239_int = 50; // 0xea6 PushI
	var_203_float = var_203_float + var_239_int; // 0xea7 Add2
	goto Label_3754; // 0xea8 Jump
	
Label_3754:
	var_240_int = 150; // 0xeaa PushI
	var_241_bool = var_203_float >= var_240_int; // 0xeab GE
	if(var_241_bool == 0) goto Label_3758; // 0xeac JumpB
	var_203_float = 150; // 0xead MovI
	
Label_3758:
	var_3_string = 0; // 0xeae TMovB
	var_0_object = var_189_object; // 0xeaf TMov
	IsPlayerActor(var_0_object, var_206_bool); // 0xeb0 Func
	var_242_bool = var_206_bool; // 0xeb2 Push
	if(var_242_bool == 0) goto Label_3772; // 0xeb3 JumpB
	var_243_string = "attack"; // 0xeb4 PushS
	PlayGlobalMusic(var_243_string); // 0xeb5 Func
	var_244_object = Obj(); // 0xeb7 PushV
	func_5167(var_244_object); // 0xeb8 NEW_2
	SendPlayerEnemy(var_189_object, var_244_object); // 0xeba Func
	
Label_3772:
	var_247_bool = var_190_bool; // 0xebc Push
	if(var_247_bool == 0) goto Label_3776; // 0xebd JumpB
	var_207_bool = 0; // 0xebe MovB
	goto Label_3777; // 0xebf Jump
	
Label_3777:
	var_248_float = 400.0; // 0xec1 PushF
	var_208_float = var_248_float + var_203_float; // 0xec2 Add2
	
Label_3779:
	var_249_bool = 0; // 0xec3 PushV
	var_249_bool = 0; // 0xec4 MovB
	var_250_bool = 0; var_251_object = Obj(); // 0xec5 PushV
	var_251_object = var_0_object; // 0xec6 MovT
	func_4824(var_250_bool, var_251_object); // 0xec7 NEW_2
	if(var_250_bool == 0) goto Label_3789; // 0xec9 JumpB
	var_252_bool = var_3_string == 0; // 0xeca Not
	if(var_252_bool == 0) goto Label_3789; // 0xecb JumpB
	var_249_bool = 1; // 0xecc MovB
	
Label_3789:
	if(var_249_bool == 0) goto Label_3951; // 0xecd JumpB
	func_4381(var_213_float); // 0xecf NEW_2
	GetPFPosition(var_204_cvector); // 0xed1 TObjFunc
	GetPFPosition(var_205_cvector); // 0xed3 Func
	var_209_cvector = var_204_cvector - var_205_cvector; // 0xed5 Sub2
	var_210_float = var_209_cvector | var_209_cvector; // 0xed6 Or2
	var_258_float = var_208_float * var_208_float; // 0xed7 Mult
	var_259_bool = var_210_float >= var_258_float; // 0xed8 GE
	if(var_259_bool == 0) goto Label_3817; // 0xed9 JumpB
	var_260_bool = 0; var_261_object = Obj(); var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_bool = 0; // 0xeda PushV
	var_261_object = var_0_object; // 0xedb MovT
	var_262_float = var_203_float; // 0xedc Mov
	var_263_float = 3000.0; // 0xedd MovF
	var_264_bool = 1; // 0xede MovB
	var_265_bool = 0; // 0xedf MovB
	TaskCall(7); // 0xee0 TaskCall
	func_4408(var_268_bool, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool); // 0xee1 NEW_2
	TaskReturn(); // 0xee2 TaskReturn
	var_337_bool = var_266_bool == 0; // 0xee4 Not
	if(var_337_bool == 0) goto Label_3815; // 0xee5 JumpB
	goto Label_3951; // 0xee6 Jump
	
Label_3951:
	WaitForAnimEnd(); // 0xf6f Func
	var_338_string = var_3_string; // 0xf71 PushT
	if(var_338_string == 0) goto Label_3956; // 0xf72 JumpB
	return 22; // 0xf73 Return
	
Label_3956:
	var_339_string = "all"; // 0xf74 PushS
	var_340_string = "attack_off"; // 0xf75 PushS
	PlayAnimation(var_339_string, var_340_string); // 0xf76 Func
	WaitForAnimEnd(); // 0xf78 Func
	var_341_bool = var_206_bool; // 0xf7a Push
	if(var_341_bool == 0) goto Label_3967; // 0xf7b JumpB
	var_342_float = 2.0; // 0xf7c PushF
	Sleep(var_342_float); // 0xf7d Func
	
Label_3967:
	return 22; // 0xf7f Return
	
Label_3815:
	var_207_bool = 0; // 0xee7 MovB
	goto Label_3950; // 0xee8 Jump
	
Label_3950:
	goto Label_3779; // 0xf6e Jump
	
Label_3817:
	var_343_float = var_191_float * var_191_float; // 0xee9 Mult
	var_344_bool = var_210_float >= var_343_float; // 0xeea GE
	if(var_344_bool == 0) goto Label_3942; // 0xeeb JumpB
	GetPFPosition(var_211_cvector); // 0xeec TObjFunc
	CanReachByPF(var_212_bool, var_211_cvector); // 0xeee Func
	var_345_bool = var_212_bool == 0; // 0xef0 Not
	if(var_345_bool == 0) goto Label_3841; // 0xef1 JumpB
	var_346_bool = 0; var_347_object = Obj(); var_348_float = 0; var_349_float = 0; var_350_bool = 0; var_351_bool = 0; // 0xef2 PushV
	var_347_object = var_0_object; // 0xef3 MovT
	var_348_float = var_203_float; // 0xef4 Mov
	var_349_float = 3000.0; // 0xef5 MovF
	var_350_bool = 1; // 0xef6 MovB
	var_351_bool = 0; // 0xef7 MovB
	TaskCall(7); // 0xef8 TaskCall
	func_4408(var_354_bool, var_346_bool, var_347_object, var_348_float, var_349_float, var_350_bool, var_351_bool); // 0xef9 NEW_2
	TaskReturn(); // 0xefa TaskReturn
	var_355_bool = var_352_bool == 0; // 0xefc Not
	if(var_355_bool == 0) goto Label_3839; // 0xefd JumpB
	goto Label_3951; // 0xefe Jump
	
Label_3839:
	var_207_bool = 0; // 0xeff MovB
	goto Label_3779; // 0xf00 Jump
	
Label_3841:
	var_356_bool = var_207_bool == 0; // 0xf01 Not
	if(var_356_bool == 0) goto Label_3866; // 0xf02 JumpB
	var_357_object = Obj(); // 0xf03 PushV
	var_357_object = var_0_object; // 0xf04 MovT
	func_4974(); // 0xf05 NEW_2
	var_358_string = "all"; // 0xf07 PushS
	var_359_string = "attack_on"; // 0xf08 PushS
	PlayAnimation(var_358_string, var_359_string); // 0xf09 Func
	WaitForAnimEnd(); // 0xf0b Func
	func_4381(var_213_float); // 0xf0e NEW_2
	StopAsync(); // 0xf10 Func
	var_207_bool = 1; // 0xf12 MovB
	var_360_bool = 0; var_361_object = Obj(); // 0xf13 PushV
	var_361_object = var_0_object; // 0xf14 MovT
	func_4824(var_360_bool, var_361_object); // 0xf15 NEW_2
	var_362_bool = var_360_bool == 0; // 0xf17 Not
	if(var_362_bool == 0) goto Label_3866; // 0xf18 JumpB
	goto Label_3951; // 0xf19 Jump
	
Label_3866:
	rand(var_213_float); // 0xf1a Func
	var_363_bool = 0; // 0xf1c PushV
	var_363_bool = 1; // 0xf1d MovB
	var_364_float = 0.25; // 0xf1e PushF
	var_365_bool = var_213_float < var_364_float; // 0xf1f LT
	if(var_365_bool == 0) goto Label_3878; // 0xf20 JumpB
	var_366_bool = 0; // 0xf21 PushV
	func_4338(var_363_bool, var_366_bool); // 0xf22 NEW_2
	if(var_366_bool == 0) goto Label_3878; // 0xf24 JumpB
	var_363_bool = 0; // 0xf25 MovB
	
Label_3878:
	if(var_363_bool == 0) goto Label_3895; // 0xf26 JumpB
	Face(var_0_object); // 0xf27 Func
	func_4388(); // 0xf2a NEW_2
	var_401_string = "all"; // 0xf2c PushS
	var_402_string = "attack_stay"; // 0xf2d PushS
	PlayAnimation(var_401_string, var_402_string); // 0xf2e Func
	var_403_bool = 0; var_404_float = 0; // 0xf30 PushV
	var_404_float = var_191_float; // 0xf31 Mov
	func_4206(var_213_float, var_403_bool, var_404_float); // 0xf32 NEW_2
	StopAsync(); // 0xf34 Func
	goto Label_3941; // 0xf36 Jump
	
Label_3941:
	goto Label_3950; // 0xf65 Jump
	
Label_3895:
	Face(var_0_object); // 0xf37 Func
	var_618_string = "all"; // 0xf39 PushS
	var_619_string = "fjump"; // 0xf3a PushS
	PlayAnimation(var_618_string, var_619_string); // 0xf3b Func
	WaitForAnimEnd(); // 0xf3d Func
	func_4381(var_213_float); // 0xf40 NEW_2
	var_620_cvector = CVector(0.0, 0.0, 0.0); // 0xf42 PushVec
	SetSpeed(var_620_cvector); // 0xf43 Func
	Stop(); // 0xf45 Func
	StopAsync(); // 0xf47 Func
	var_621_bool = 0; // 0xf49 PushV
	func_4338(var_213_float, var_621_bool); // 0xf4a NEW_2
	var_622_bool = var_621_bool == 0; // 0xf4c Not
	if(var_622_bool == 0) goto Label_3941; // 0xf4d JumpB
	var_623_bool = 0; var_624_object = Obj(); // 0xf4e PushV
	var_624_object = var_0_object; // 0xf4f MovT
	func_4824(var_623_bool, var_624_object); // 0xf50 NEW_2
	var_625_bool = var_623_bool == 0; // 0xf52 Not
	if(var_625_bool == 0) goto Label_3925; // 0xf53 JumpB
	goto Label_3951; // 0xf54 Jump
	
Label_3925:
	GetPFPosition(var_204_cvector); // 0xf55 TObjFunc
	GetPFPosition(var_205_cvector); // 0xf57 Func
	var_209_cvector = var_204_cvector - var_205_cvector; // 0xf59 Sub2
	var_210_float = var_209_cvector | var_209_cvector; // 0xf5a Or2
	var_626_float = var_191_float * var_191_float; // 0xf5b Mult
	var_627_bool = var_210_float < var_626_float; // 0xf5c LT
	if(var_627_bool == 0) goto Label_3941; // 0xf5d JumpB
	var_628_bool = 0; var_629_float = 0; // 0xf5e PushV
	var_629_float = var_191_float; // 0xf5f Mov
	func_4042(var_213_float, var_628_bool, var_629_float); // 0xf60 NEW_2
	var_630_bool = var_628_bool == 0; // 0xf62 Not
	if(var_630_bool == 0) goto Label_3941; // 0xf63 JumpB
	goto Label_3951; // 0xf64 Jump
	
Label_3942:
	var_631_bool = 0; var_632_float = 0; // 0xf66 PushV
	var_632_float = var_191_float; // 0xf67 Mov
	func_4042(var_213_float, var_631_bool, var_632_float); // 0xf68 NEW_2
	var_633_bool = var_631_bool == 0; // 0xf6a Not
	if(var_633_bool == 0) goto Label_3949; // 0xf6b JumpB
	goto Label_3951; // 0xf6c Jump
	
Label_3949:
	var_207_bool = 1; // 0xf6d MovB
	
Label_3776:
	var_207_bool = 1; // 0xec0 MovB
	
Label_3753:
	var_203_float = var_191_float; // 0xea9 Mov
}


func_6303(var_180_object)
{
	var_181_object = Obj(); // 0x18a0 PushV
	var_181_object = var_180_object; // 0x18a1 Mov
	func_6133(var_181_object); // 0x18a2 NEW_2
	return 0; // 0x18a4 Return
}


func_5283()
{
	var_472_object = Obj(); var_473_object = Obj(); // 0x14a3 PushV
	GetScene(var_473_object); // 0x14a4 Func
	var_474_string = "battle"; // 0x14a6 PushS
	var_475_object = Obj(); // 0x14a7 PushV
	func_5167(var_475_object); // 0x14a8 NEW_2
	BroadcastMessage(var_474_string, var_475_object, var_473_object); // 0x14aa Func
	return 2; // 0x14ac Return
}


func_6309(var_21_int)
{
	var_21_int = 2; // 0x18a6 MovI
	return 0; // 0x18a7 Return
}


func_6312(var_29_object)
{
	var_30_object = Obj(); // 0x18a9 PushV
	var_30_object = var_29_object; // 0x18aa Mov
	func_6539(var_30_object); // 0x18ab NEW_2
	return 0; // 0x18ad Return
}


func_5294()
{
	var_26_int = 100; // 0x14af PushI
	SetReturnValue(var_26_int); // 0x14b0 ObjFunc
	return 0; // 0x14b2 Return
}


func_6318()
{
	return 0; // 0x18ae Return
}


func_4783(var_46_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0x12af PushV
	IsDead(var_49_bool); // 0x12b0 ObjFunc
	var_46_bool = var_49_bool; // 0x12b2 Mov
	return 2; // 0x12b3 Return
}


func_6319(var_24_bool)
{
	var_24_bool = 0; // 0x18b0 MovB
	return 0; // 0x18b1 Return
}


func_6322()
{
	return 0; // 0x18b3 Return
}


func_5299(var_303_bool)
{
	var_305_int = 0; var_306_string = ""; // 0x14b4 PushV
	var_306_string = "branch"; // 0x14b5 MovS
	func_5243(var_305_int, var_306_string); // 0x14b6 NEW_2
	var_307_int = 0; // 0x14b8 PushI
	var_308_bool = var_305_int == var_307_int; // 0x14b9 Eq
	if(var_308_bool == 0) goto Label_5309; // 0x14ba JumpB
	var_303_bool = 1; // 0x14bb MovB
	return 0; // 0x14bc Return
	
Label_5309:
	var_303_bool = 0; // 0x14bd MovB
	return 0; // 0x14be Return
}


func_4788(var_35_bool, var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); // 0x12b4 PushV
	var_41_bool = var_36_object == 0; // 0x12b5 NullEq
	if(var_41_bool == 0) goto Label_4793; // 0x12b6 JumpB
	var_35_bool = 0; // 0x12b7 MovB
	return 4; // 0x12b8 Return
	
Label_4793:
	var_42_bool = 0; // 0x12b9 PushV
	var_42_bool = 0; // 0x12ba MovB
	var_43_string = "IsDead"; // 0x12bb PushS
	var_44_int = 1; // 0x12bc PushI
	var_45_bool = IsFuncExist(var_36_object, var_43_string, var_44_int); // 0x12bd FuncExist
	if(var_45_bool == 0) goto Label_4805; // 0x12be JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0x12bf PushV
	var_47_object = var_36_object; // 0x12c0 Mov
	func_4783(var_47_object); // 0x12c1 NEW_2
	if(var_46_bool == 0) goto Label_4805; // 0x12c3 JumpB
	var_42_bool = 1; // 0x12c4 MovB
	
Label_4805:
	if(var_42_bool == 0) goto Label_4808; // 0x12c5 JumpB
	var_35_bool = 0; // 0x12c6 MovB
	return 4; // 0x12c7 Return
	
Label_4808:
	GetScene(var_39_object); // 0x12c8 Func
	var_50_bool = var_39_object == 0; // 0x12ca NullEq
	if(var_50_bool == 0) goto Label_4814; // 0x12cb JumpB
	var_35_bool = 0; // 0x12cc MovB
	return 4; // 0x12cd Return
	
Label_4814:
	GetScene(var_40_object); // 0x12ce ObjFunc
	var_51_bool = var_39_object != var_40_object; // 0x12d0 Neq
	if(var_51_bool == 0) goto Label_4820; // 0x12d1 JumpB
	var_35_bool = 0; // 0x12d2 MovB
	return 4; // 0x12d3 Return
	
Label_4820:
	var_35_bool = 1; // 0x12d4 MovB
	return 4; // 0x12d5 Return
}


func_4277(var_416_bool)
{
	var_417_bool = 0; // 0x10b5 PushV
	var_417_bool = 0; // 0x10b6 MovB
	var_418_bool = 0; // 0x10b7 PushV
	func_4249(var_417_bool, var_418_bool); // 0x10b8 NEW_2
	if(var_418_bool == 0) goto Label_4288; // 0x10ba JumpB
	var_435_bool = 0; // 0x10bb PushV
	func_4293(var_416_bool, var_417_bool, var_435_bool); // 0x10bc NEW_2
	if(var_435_bool == 0) goto Label_4288; // 0x10be JumpB
	var_417_bool = 1; // 0x10bf MovB
	
Label_4288:
	if(var_417_bool == 0) goto Label_4291; // 0x10c0 JumpB
	var_416_bool = 1; // 0x10c1 MovB
	return 0; // 0x10c2 Return
	
Label_4291:
	var_416_bool = 0; // 0x10c3 MovB
	return 0; // 0x10c4 Return
}


func_6324(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0x18b4 PushV
	CanSee(var_34_bool, var_32_object); // 0x18b5 Func
	var_31_bool = 1; // 0x18b7 MovB
	var_35_bool = var_34_bool; // 0x18b8 Push
	if(var_35_bool == 0) goto Label_6338; // 0x18b9 JumpB
	var_36_float = 0; var_37_object = Obj(); // 0x18ba PushV
	var_37_object = var_32_object; // 0x18bb Mov
	func_4685(var_37_object); // 0x18bc NEW_2
	var_44_int = 2250000; // 0x18be PushI
	var_45_bool = var_36_float <= var_44_int; // 0x18bf LE
	if(var_45_bool == 0) goto Label_6338; // 0x18c0 JumpB
	var_31_bool = 0; // 0x18c1 MovB
	
Label_6338:
	return 2; // 0x18c2 Return
}


func_5311(var_312_bool)
{
	var_314_int = 0; var_315_string = ""; // 0x14c0 PushV
	var_315_string = "branch"; // 0x14c1 MovS
	func_5243(var_314_int, var_315_string); // 0x14c2 NEW_2
	var_316_int = 1; // 0x14c4 PushI
	var_317_bool = var_314_int == var_316_int; // 0x14c5 Eq
	if(var_317_bool == 0) goto Label_5321; // 0x14c6 JumpB
	var_312_bool = 1; // 0x14c7 MovB
	return 0; // 0x14c8 Return
	
Label_5321:
	var_312_bool = 0; // 0x14c9 MovB
	return 0; // 0x14ca Return
}


func_6339(var_59_object)
{
	var_60_object = Obj(); // 0x18c4 PushV
	var_60_object = var_59_object; // 0x18c5 Mov
	func_6115(var_60_object); // 0x18c6 NEW_2
	return 0; // 0x18c8 Return
}


func_4293(var_0_object, var_4_bool, var_435_bool)
{
	var_436_object = Obj(); var_437_bool = 0; var_438_float = 0; var_439_cvector = CVector(0,0,0); var_440_cvector = CVector(0,0,0); var_441_object = Obj(); var_442_bool = 0; var_443_float = 0; var_444_cvector = CVector(0,0,0); var_445_cvector = CVector(0,0,0); // 0x10c5 PushV
	GetScene(var_441_object); // 0x10c6 Func
	var_442_bool = 0; // 0x10c8 MovB
	
Label_4297:
	var_446_cvector = CVector(0,0,0); var_447_object = Obj(); // 0x10c9 PushV
	var_447_object = var_0_object; // 0x10ca MovT
	func_4678(var_447_object); // 0x10cb NEW_2
	var_448_int = -var_446_cvector; // 0x10cd Neg
	FindDirLength(var_443_float, var_448_int, var_443_float); // 0x10ce Func
	var_449_bool = var_443_float < var_4_bool; // 0x10d0 LT
	if(var_449_bool == 0) goto Label_4307; // 0x10d1 JumpB
	goto Label_4335; // 0x10d2 Jump
	
Label_4335:
	var_435_bool = var_442_bool; // 0x10ef Mov
	return 10; // 0x10f0 Return
	
Label_4307:
	Face(var_0_object); // 0x10d3 Func
	var_450_string = "all"; // 0x10d5 PushS
	var_451_string = "bjump"; // 0x10d6 PushS
	PlayAnimation(var_450_string, var_451_string); // 0x10d7 Func
	GetPFPosition(var_444_cvector); // 0x10d9 TObjFunc
	GetPFPosition(var_445_cvector); // 0x10db Func
	WaitForAnimEnd(); // 0x10dd Func
	func_4381(var_445_cvector); // 0x10e0 NEW_2
	StopAsync(); // 0x10e2 Func
	var_452_cvector = CVector(0.0, 0.0, 0.0); // 0x10e4 PushVec
	SetSpeed(var_452_cvector); // 0x10e5 Func
	var_442_bool = 1; // 0x10e7 MovB
	var_453_bool = 0; // 0x10e8 PushV
	func_4249(var_445_cvector, var_453_bool); // 0x10e9 NEW_2
	var_454_bool = var_453_bool == 0; // 0x10eb Not
	if(var_454_bool == 0) goto Label_4334; // 0x10ec JumpB
	goto Label_4335; // 0x10ed Jump
	
Label_4334:
	goto Label_4297; // 0x10ee Jump
}


func_6345(var_48_bool)
{
	var_48_bool = 0; // 0x18ca MovB
	return 0; // 0x18cb Return
}


func_5323(var_122_bool)
{
	var_124_int = 0; var_125_string = ""; // 0x14cc PushV
	var_125_string = "branch"; // 0x14cd MovS
	func_5243(var_124_int, var_125_string); // 0x14ce NEW_2
	var_128_int = 2; // 0x14d0 PushI
	var_129_bool = var_124_int == var_128_int; // 0x14d1 Eq
	if(var_129_bool == 0) goto Label_5333; // 0x14d2 JumpB
	var_122_bool = 1; // 0x14d3 MovB
	return 0; // 0x14d4 Return
	
Label_5333:
	var_122_bool = 0; // 0x14d5 MovB
	return 0; // 0x14d6 Return
}


func_6348()
{
	return 0; // 0x18cd Return
}


func_6350(var_26_bool)
{
	var_26_bool = 0; // 0x18cf MovB
	return 0; // 0x18d0 Return
}


func_6353()
{
	return 0; // 0x18d2 Return
}


func_6355()
{
	var_442_object = Obj(); var_443_object = Obj(); var_444_object = Obj(); var_445_object = Obj(); var_446_int = 0; var_447_int = 0; var_448_int = 0; var_449_int = 0; var_450_object = Obj(); var_451_int = 0; var_452_bool = 0; var_453_int = 0; var_454_float = 0; var_455_int = 0; var_456_object = Obj(); var_457_int = 0; var_458_int = 0; var_459_int = 0; var_460_int = 0; var_461_int = 0; var_462_int = 0; var_463_int = 0; var_464_int = 0; var_465_int = 0; var_466_int = 0; var_467_object = Obj(); var_468_object = Obj(); var_469_object = Obj(); var_470_object = Obj(); var_471_object = Obj(); var_472_int = 0; var_473_int = 0; var_474_int = 0; var_475_int = 0; var_476_object = Obj(); var_477_int = 0; var_478_bool = 0; var_479_int = 0; var_480_float = 0; var_481_int = 0; var_482_object = Obj(); var_483_int = 0; var_484_int = 0; var_485_int = 0; var_486_int = 0; var_487_int = 0; var_488_int = 0; var_489_int = 0; var_490_int = 0; var_491_int = 0; var_492_int = 0; var_493_object = Obj(); // 0x18d3 PushV
	var_494_object = Obj(); // 0x18d4 PushV
	func_5201(var_494_object); // 0x18d5 NEW_2
	var_468_object = var_494_object; // 0x18d6 Mov
	CreateIntVector(var_469_object); // 0x18d8 Func
	CreateIntVector(var_470_object); // 0x18da Func
	CreateIntVector(var_471_object); // 0x18dc Func
	GetSubContainerCount(var_472_int); // 0x18de ObjFunc
	var_473_int = 0; // 0x18e0 MovI
	
Label_6369:
	var_497_bool = var_473_int < var_472_int; // 0x18e1 LT
	if(var_497_bool == 0) goto Label_6441; // 0x18e2 JumpB
	GetItemCount(var_474_int, var_473_int); // 0x18e3 ObjFunc
	var_475_int = 0; // 0x18e5 MovI
	
Label_6374:
	var_498_bool = var_475_int < var_474_int; // 0x18e6 LT
	if(var_498_bool == 0) goto Label_6438; // 0x18e7 JumpB
	GetItem(var_476_object, var_475_int, var_473_int); // 0x18e8 ObjFunc
	GetItemID(var_477_int); // 0x18ea ObjFunc
	var_499_string = "HasDurability"; // 0x18ec PushS
	HasInvItemProperty(var_478_bool, var_477_int, var_499_string); // 0x18ed Func
	var_500_bool = var_478_bool; // 0x18ef Push
	if(var_500_bool == 0) goto Label_6434; // 0x18f0 JumpB
	var_501_string = "durability"; // 0x18f1 PushS
	HasProperty(var_478_bool, var_501_string); // 0x18f2 ObjFunc
	var_502_bool = var_478_bool; // 0x18f4 Push
	if(var_502_bool == 0) goto Label_6434; // 0x18f5 JumpB
	var_503_string = "durability"; // 0x18f6 PushS
	GetProperty(var_479_int, var_503_string); // 0x18f7 ObjFunc
	var_504_bool = 0; // 0x18f9 PushV
	var_504_bool = 0; // 0x18fa MovB
	var_505_int = 100; // 0x18fb PushI
	var_506_bool = var_479_int < var_505_int; // 0x18fc LT
	if(var_506_bool == 0) goto Label_6404; // 0x18fd JumpB
	var_507_bool = 0; var_508_object = Obj(); // 0x18fe PushV
	var_508_object = var_476_object; // 0x18ff Mov
	func_6502(var_508_object); // 0x1900 NEW_2
	if(var_507_bool == 0) goto Label_6404; // 0x1902 JumpB
	var_504_bool = 1; // 0x1903 MovB
	
Label_6404:
	if(var_504_bool == 0) goto Label_6434; // 0x1904 JumpB
	add(var_476_object); // 0x1905 ObjFunc
	add(var_473_int); // 0x1907 ObjFunc
	add(var_475_int); // 0x1909 ObjFunc
	var_514_int = 0; var_515_object = Obj(); var_516_int = 0; // 0x190b PushV
	var_515_object = var_476_object; // 0x190c Mov
	var_516_int = 0; // 0x190d MovI
	func_5580(var_514_int, var_515_object, var_516_int); // 0x190e NEW_2
	var_480_float = var_514_int; // 0x190f Mov
	var_556_float = 1.0; // 0x1911 PushF
	var_557_float = 2.0; // 0x1912 PushF
	var_558_float = var_557_float * var_479_int; // 0x1913 Mult
	var_559_float = 100.0; // 0x1914 PushF
	var_560_float = var_558_float / var_559_float; // 0x1915 Div
	var_561_int = var_556_float + var_560_float; // 0x1916 Add
	var_562_float = var_480_float * var_561_int; // 0x1917 Mult
	var_563_int = 100; // 0x1918 PushI
	var_564_int = var_563_int - var_479_int; // 0x1919 Sub
	var_565_float = var_562_float * var_564_int; // 0x191a Mult
	var_566_int = 300; // 0x191b PushI
	var_481_int = var_565_float / var_565_float; // 0x191c Div2
	var_567_bool = var_481_int == 0; // 0x191d Not
	if(var_567_bool == 0) goto Label_6432; // 0x191e JumpB
	var_481_int = 1; // 0x191f MovI
	
Label_6432:
	add(var_481_int); // 0x1920 ObjFunc
	
Label_6434:
	var_476_object = 0; // 0x1922 SetNull
	var_568_int = 1; // 0x1923 PushI
	var_475_int = var_475_int + var_568_int; // 0x1924 Add2
	goto Label_6374; // 0x1925 Jump
	
Label_6438:
	var_569_int = 1; // 0x1926 PushI
	var_473_int = var_473_int + var_569_int; // 0x1927 Add2
	goto Label_6369; // 0x1928 Jump
	
Label_6441:
	CreateIntVector(var_482_object); // 0x1929 Func
	var_570_string = "repair.xml"; // 0x192b PushS
	ChooseItem(var_468_object, var_482_object, var_471_object, var_570_string); // 0x192c Func
	size(var_483_int); // 0x192e ObjFunc
	var_571_bool = var_483_int == 0; // 0x1930 Not
	if(var_571_bool == 0) goto Label_6451; // 0x1931 JumpB
	return 52; // 0x1932 Return
	
Label_6451:
	var_484_int = 0; // 0x1933 MovI
	var_485_int = 0; // 0x1934 MovI
	
Label_6453:
	var_572_bool = var_485_int < var_483_int; // 0x1935 LT
	if(var_572_bool == 0) goto Label_6463; // 0x1936 JumpB
	get(var_486_int, var_485_int); // 0x1937 ObjFunc
	get(var_487_int, var_486_int); // 0x1939 ObjFunc
	var_484_int = var_484_int + var_487_int; // 0x193b Add2
	var_573_int = 1; // 0x193c PushI
	var_485_int = var_485_int + var_573_int; // 0x193d Add2
	goto Label_6453; // 0x193e Jump
	
Label_6463:
	var_574_string = "money"; // 0x193f PushS
	GetProperty(var_574_string, var_488_int); // 0x1940 ObjFunc
	var_488_int = var_488_int - var_484_int; // 0x1942 Sub2
	var_575_int = 0; // 0x1943 PushI
	var_576_bool = var_488_int < var_575_int; // 0x1944 LT
	if(var_576_bool == 0) goto Label_6471; // 0x1945 JumpB
	return 52; // 0x1946 Return
	
Label_6471:
	var_577_string = "money"; // 0x1947 PushS
	SetProperty(var_577_string, var_488_int); // 0x1948 ObjFunc
	var_489_int = 0; // 0x194a MovI
	
Label_6475:
	var_578_bool = var_489_int < var_483_int; // 0x194b LT
	if(var_578_bool == 0) goto Label_6496; // 0x194c JumpB
	get(var_490_int, var_489_int); // 0x194d ObjFunc
	get(var_491_int, var_490_int); // 0x194f ObjFunc
	get(var_492_int, var_490_int); // 0x1951 ObjFunc
	GetItem(var_493_object, var_492_int, var_491_int); // 0x1953 ObjFunc
	var_579_string = "durability"; // 0x1955 PushS
	var_580_int = 100; // 0x1956 PushI
	SetProperty(var_579_string, var_580_int); // 0x1957 ObjFunc
	var_581_int = 1; // 0x1959 PushI
	SetItem(var_493_object, var_581_int, var_492_int, var_491_int); // 0x195a ObjFunc
	var_493_object = 0; // 0x195c SetNull
	var_582_int = 1; // 0x195d PushI
	var_489_int = var_489_int + var_582_int; // 0x195e Add2
	goto Label_6475; // 0x195f Jump
	
Label_6496:
	return 52; // 0x1960 Return
}


func_5335(var_169_bool, var_170_object)
{
	var_171_bool = 0; var_172_object = Obj(); // 0x14d8 PushV
	var_172_object = var_170_object; // 0x14d9 Mov
	func_5465(var_172_object); // 0x14da NEW_2
	if(var_171_bool == 0) goto Label_5343; // 0x14dc JumpB
	var_169_bool = 1; // 0x14dd MovB
	return 0; // 0x14de Return
	
Label_5343:
	var_169_bool = 0; // 0x14df MovB
	return 0; // 0x14e0 Return
}


func_4824(var_31_bool, var_32_object)
{
	var_33_int = 0; var_34_int = 0; // 0x12d8 PushV
	var_35_bool = 0; var_36_object = Obj(); // 0x12d9 PushV
	var_36_object = var_32_object; // 0x12da Mov
	func_4788(var_35_bool, var_36_object); // 0x12db NEW_2
	var_52_bool = var_35_bool == 0; // 0x12dd Not
	if(var_52_bool == 0) goto Label_4833; // 0x12de JumpB
	var_31_bool = 0; // 0x12df MovB
	return 2; // 0x12e0 Return
	
Label_4833:
	var_53_bool = 0; var_54_object = Obj(); var_55_string = ""; // 0x12e1 PushV
	var_54_object = var_32_object; // 0x12e2 Mov
	var_55_string = "noaccess"; // 0x12e3 MovS
	func_4698(var_53_bool, var_54_object, var_55_string); // 0x12e4 NEW_2
	var_62_bool = var_53_bool == 0; // 0x12e6 Not
	if(var_62_bool == 0) goto Label_4842; // 0x12e7 JumpB
	var_31_bool = 1; // 0x12e8 MovB
	return 2; // 0x12e9 Return
	
Label_4842:
	var_63_string = "noaccess"; // 0x12ea PushS
	GetProperty(var_63_string, var_34_int); // 0x12eb ObjFunc
	var_64_int = 0; // 0x12ed PushI
	var_31_bool = var_34_int == var_64_int; // 0x12ee Eq2
	return 2; // 0x12ef Return
}


func_5345(var_391_bool, var_392_object)
{
	var_393_bool = 0; var_394_object = Obj(); // 0x14e2 PushV
	var_394_object = var_392_object; // 0x14e3 Mov
	func_5472(var_394_object); // 0x14e4 NEW_2
	if(var_393_bool == 0) goto Label_5353; // 0x14e6 JumpB
	var_391_bool = 1; // 0x14e7 MovB
	return 0; // 0x14e8 Return
	
Label_5353:
	var_391_bool = 0; // 0x14e9 MovB
	return 0; // 0x14ea Return
}


func_5355(var_150_bool, var_151_object)
{
	var_152_bool = 0; var_153_object = Obj(); // 0x14ec PushV
	var_153_object = var_151_object; // 0x14ed Mov
	func_5475(var_153_object); // 0x14ee NEW_2
	if(var_152_bool == 0) goto Label_5363; // 0x14f0 JumpB
	var_150_bool = 1; // 0x14f1 MovB
	return 0; // 0x14f2 Return
	
Label_5363:
	var_150_bool = 0; // 0x14f3 MovB
	return 0; // 0x14f4 Return
}


func_2799(var_43_string)
{
	RemoveRTEnvelope(); // 0xaf0 Func
	SetDeathState(); // 0xaf2 Func
	Stop(); // 0xaf4 Func
	StopAsync(); // 0xaf6 Func
	StopSecondaryAnimation(); // 0xaf8 Func
	var_44_string = ""; // 0xafa PushV
	var_44_string = var_43_string; // 0xafb Mov
	func_5126(var_44_string); // 0xafc NEW_2
	var_73_string = "all"; // 0xafe PushS
	PlayAnimation(var_73_string, var_43_string); // 0xaff Func
	WaitForAnimEnd(); // 0xb01 Func
	var_74_string = "all"; // 0xb03 PushS
	LockAnimationEnd(var_74_string, var_43_string); // 0xb04 Func
	RemoveEnvelope(); // 0xb06 Func
	return 0; // 0xb08 Return
}


func_4848(var_35_object)
{
	var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = ""; var_43_bool = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_string = ""; // 0x12f0 PushV
	var_50_bool = var_35_object == 0; // 0x12f1 NullEq
	if(var_50_bool == 0) goto Label_4852; // 0x12f2 JumpB
	return 14; // 0x12f3 Return
	
Label_4852:
	IsDead(var_43_bool); // 0x12f4 Func
	var_51_bool = var_43_bool; // 0x12f6 Push
	if(var_51_bool == 0) goto Label_4857; // 0x12f7 JumpB
	return 14; // 0x12f8 Return
	
Label_4857:
	GetSecondaryAnimationType(var_44_int); // 0x12f9 Func
	var_52_int = 0; // 0x12fb PushI
	var_53_bool = var_44_int < var_52_int; // 0x12fc LT
	if(var_53_bool == 0) goto Label_4863; // 0x12fd JumpB
	return 14; // 0x12fe Return
	
Label_4863:
	GetPosition(var_45_cvector); // 0x12ff ObjFunc
	GetPosition(var_46_cvector); // 0x1301 Func
	GetDirection(var_47_cvector); // 0x1303 Func
	var_48_cvector = var_46_cvector - var_45_cvector; // 0x1305 Sub2
	var_54_float = GetByIndex(var_48_cvector, 0); // 0x1306 PushE
	var_55_float = GetByIndex(var_47_cvector, 0); // 0x1307 PushE
	var_56_float = var_54_float * var_55_float; // 0x1308 Mult
	var_57_float = GetByIndex(var_48_cvector, 2); // 0x1309 PushE
	var_58_float = GetByIndex(var_47_cvector, 2); // 0x130a PushE
	var_59_float = var_57_float * var_58_float; // 0x130b Mult
	var_60_int = var_56_float + var_59_float; // 0x130c Add
	var_61_int = 0; // 0x130d PushI
	var_62_bool = var_60_int >= var_61_int; // 0x130e GE
	if(var_62_bool == 0) goto Label_4882; // 0x130f JumpB
	var_49_string = "fhit"; // 0x1310 MovS
	goto Label_4883; // 0x1311 Jump
	
Label_4883:
	var_63_string = "hit_react"; // 0x1313 PushS
	var_64_string = "1"; // 0x1314 PushS
	var_65_int = var_49_string + var_64_string; // 0x1315 Add
	var_66_string = "2"; // 0x1316 PushS
	var_67_int = var_49_string + var_66_string; // 0x1317 Add
	var_68_int = -10; // 0x1318 PushI
	FadeSecondaryAnimation(var_63_string, var_65_int, var_67_int, var_68_int); // 0x1319 Func
	return 14; // 0x131b Return
	
Label_4882:
	var_49_string = "bhit"; // 0x1312 MovS
}


func_4338(var_0_object, var_366_bool)
{
	var_367_bool = 0; var_368_bool = 0; // 0x10f2 PushV
	var_369_string = "IsAttacking"; // 0x10f3 PushS
	var_370_int = 1; // 0x10f4 PushI
	var_371_bool = IsFuncExist(var_0_object, var_369_string, var_370_int); // 0x10f5 FuncExist
	if(var_371_bool == 0) goto Label_4347; // 0x10f6 JumpB
	IsAttacking(var_368_bool); // 0x10f7 TObjFunc
	var_366_bool = var_368_bool; // 0x10f9 Mov
	return 2; // 0x10fa Return
	
Label_4347:
	var_366_bool = 0; // 0x10fb MovB
	return 2; // 0x10fc Return
}


func_5365(var_162_bool, var_163_object)
{
	var_164_bool = 0; var_165_object = Obj(); // 0x14f6 PushV
	var_165_object = var_163_object; // 0x14f7 Mov
	func_5482(var_165_object); // 0x14f8 NEW_2
	if(var_164_bool == 0) goto Label_5373; // 0x14fa JumpB
	var_162_bool = 1; // 0x14fb MovB
	return 0; // 0x14fc Return
	
Label_5373:
	var_162_bool = 0; // 0x14fd MovB
	return 0; // 0x14fe Return
}


func_4349(var_2_object, var_5_bool)
{
	var_479_float = 0; var_480_int = 0; var_481_float = 0; var_482_int = 0; // 0x10fd PushV
	var_483_bool = var_2_object == 0; // 0x10fe Not
	if(var_483_bool == 0) goto Label_4353; // 0x10ff JumpB
	return 4; // 0x1100 Return
	
Label_4353:
	var_484_bool = var_5_bool; // 0x1101 PushT
	if(var_484_bool == 0) goto Label_4361; // 0x1102 JumpB
	var_485_int = -1; // 0x1103 PushI
	var_5_bool = var_5_bool + var_485_int; // 0x1104 Add2
	var_486_int = 0; // 0x1105 PushI
	var_487_bool = var_5_bool > var_486_int; // 0x1106 GT
	if(var_487_bool == 0) goto Label_4361; // 0x1107 JumpB
	return 4; // 0x1108 Return
	
Label_4361:
	rand(var_481_float); // 0x1109 Func
	var_488_float = 0; // 0x110b PushV
	func_4399(var_488_float); // 0x110c NEW_2
	var_489_bool = var_481_float < var_488_float; // 0x110e LT
	if(var_489_bool == 0) goto Label_4380; // 0x110f JumpB
	irand(var_482_int, var_481_float); // 0x1110 Func
	var_490_int = 1; // 0x1112 PushI
	var_482_int = var_482_int + var_490_int; // 0x1113 Add2
	var_491_string = "attack"; // 0x1114 PushS
	var_492_int = var_491_string + var_482_int; // 0x1115 Add
	Speak(var_492_int); // 0x1116 Func
	var_493_int = 0; // 0x1118 PushV
	func_4397(var_493_int); // 0x1119 NEW_2
	var_5_bool = var_493_int; // 0x111a TMov
	
Label_4380:
	return 4; // 0x111c Return
}


func_5375(var_348_bool, var_349_object)
{
	var_350_bool = 0; var_351_object = Obj(); // 0x1500 PushV
	var_351_object = var_349_object; // 0x1501 Mov
	func_5489(var_351_object); // 0x1502 NEW_2
	if(var_350_bool == 0) goto Label_5383; // 0x1504 JumpB
	var_348_bool = 1; // 0x1505 MovB
	return 0; // 0x1506 Return
	
Label_5383:
	var_348_bool = 0; // 0x1507 MovB
	return 0; // 0x1508 Return
}


func_5385(var_360_bool, var_361_object)
{
	var_362_bool = 0; var_363_object = Obj(); // 0x150a PushV
	var_363_object = var_361_object; // 0x150b Mov
	func_5496(var_363_object); // 0x150c NEW_2
	if(var_362_bool == 0) goto Label_5393; // 0x150e JumpB
	var_360_bool = 1; // 0x150f MovB
	return 0; // 0x1510 Return
	
Label_5393:
	var_360_bool = 0; // 0x1511 MovB
	return 0; // 0x1512 Return
}


func_5904(var_138_int, var_139_string)
{
	var_140_int = 0; var_141_int = 0; // 0x1710 PushV
	GetInvItemByName(var_141_int, var_139_string); // 0x1711 Func
	var_138_int = var_141_int; // 0x1713 Mov
	return 2; // 0x1714 Return
}


func_5395(var_369_bool, var_370_object)
{
	var_371_bool = 0; var_372_object = Obj(); // 0x1514 PushV
	var_372_object = var_370_object; // 0x1515 Mov
	func_5503(var_372_object); // 0x1516 NEW_2
	if(var_371_bool == 0) goto Label_5403; // 0x1518 JumpB
	var_369_bool = 1; // 0x1519 MovB
	return 0; // 0x151a Return
	
Label_5403:
	var_369_bool = 0; // 0x151b MovB
	return 0; // 0x151c Return
}


func_5909(var_19_object)
{
	var_20_object = Obj(); // 0x1716 PushV
	var_20_object = var_19_object; // 0x1717 Mov
	TaskCall(2); // 0x1718 TaskCall
	func_2675(var_20_object); // 0x1719 NEW_2
	TaskReturn(); // 0x171a TaskReturn
	return 0; // 0x171c Return
}


func_4892(var_22_object, var_23_int, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_object = Obj(); var_36_int = 0; var_37_bool = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_int = 0; var_41_int = 0; var_42_cvector = CVector(0,0,0); // 0x131c PushV
	var_43_bool = 0; // 0x131d PushV
	var_43_bool = 0; // 0x131e MovB
	var_44_bool = 0; // 0x131f PushV
	var_44_bool = 0; // 0x1320 MovB
	var_45_object = var_22_object; // 0x1321 Push
	if(var_45_object == 0) goto Label_4903; // 0x1322 JumpB
	var_46_int = 4; // 0x1323 PushI
	var_47_bool = var_23_int != var_46_int; // 0x1324 Neq
	if(var_47_bool == 0) goto Label_4903; // 0x1325 JumpB
	var_44_bool = 1; // 0x1326 MovB
	
Label_4903:
	if(var_44_bool == 0) goto Label_4908; // 0x1327 JumpB
	var_48_int = 5; // 0x1328 PushI
	var_49_bool = var_23_int != var_48_int; // 0x1329 Neq
	if(var_49_bool == 0) goto Label_4908; // 0x132a JumpB
	var_43_bool = 1; // 0x132b MovB
	
Label_4908:
	if(var_43_bool == 0) goto Label_4955; // 0x132c JumpB
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x132d PushV
	var_52_cvector = CVector(0,0,0); var_53_object = Obj(); // 0x132e PushV
	var_53_object = var_22_object; // 0x132f Mov
	func_4678(var_53_object); // 0x1330 NEW_2
	var_51_cvector = var_52_cvector; // 0x1331 Mov
	func_5173(var_50_cvector, var_51_cvector); // 0x1333 NEW_2
	var_34_cvector = var_50_cvector; // 0x1334 Mov
	CreateVectorVector(var_35_object); // 0x1336 Func
	var_36_int = 1; // 0x1338 MovI
	
Label_4921:
	var_63_string = "hit"; // 0x1339 PushS
	var_64_int = var_63_string + var_36_int; // 0x133a Add
	GetGeometryLocator(var_64_int, var_37_bool, var_38_cvector, var_39_cvector); // 0x133b Func
	var_65_bool = var_37_bool == 0; // 0x133d Not
	if(var_65_bool == 0) goto Label_4928; // 0x133e JumpB
	goto Label_4937; // 0x133f Jump
	
Label_4937:
	size(var_40_int); // 0x1349 ObjFunc
	var_66_int = var_40_int; // 0x134b Push
	if(var_66_int == 0) goto Label_4954; // 0x134c JumpB
	irand(var_41_int, var_40_int); // 0x134d Func
	get(var_42_cvector, var_41_int); // 0x134f ObjFunc
	var_67_object = Obj(); var_68_int = 0; var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x1351 PushV
	var_67_object = var_22_object; // 0x1352 Mov
	var_68_int = var_23_int; // 0x1353 Mov
	var_69_float = var_24_float; // 0x1354 Mov
	var_70_cvector = var_42_cvector; // 0x1355 Mov
	var_71_cvector = -var_34_cvector; // 0x1356 Neg2
	func_4960(var_69_float, var_70_cvector, var_71_cvector); // 0x1357 NEW_2
	return 18; // 0x1359 Return
	
Label_4954:
	var_35_object = 0; // 0x135a SetNull
	
Label_4955:
	var_112_object = Obj(); // 0x135b PushV
	var_112_object = var_22_object; // 0x135c Mov
	func_4848(var_112_object); // 0x135d NEW_2
	return 18; // 0x135f Return
	
Label_4928:
	var_113_int = var_39_cvector | var_34_cvector; // 0x1340 Or
	var_114_float = 0.70711; // 0x1341 PushF
	var_115_bool = var_113_int >= var_114_float; // 0x1342 GE
	if(var_115_bool == 0) goto Label_4934; // 0x1343 JumpB
	add(var_38_cvector); // 0x1344 ObjFunc
	
Label_4934:
	var_116_int = 1; // 0x1346 PushI
	var_36_int = var_36_int + var_116_int; // 0x1347 Add2
	goto Label_4921; // 0x1348 Jump
}


func_5405(var_209_bool, var_210_object)
{
	var_211_bool = 0; var_212_object = Obj(); // 0x151e PushV
	var_212_object = var_210_object; // 0x151f Mov
	func_5510(var_212_object); // 0x1520 NEW_2
	if(var_211_bool == 0) goto Label_5413; // 0x1522 JumpB
	var_209_bool = 1; // 0x1523 MovB
	return 0; // 0x1524 Return
	
Label_5413:
	var_209_bool = 0; // 0x1525 MovB
	return 0; // 0x1526 Return
}


func_2846()
{
	var_20_bool = 0; // 0xb1e PushV
	func_4985(var_20_bool); // 0xb1f NEW_2
	var_23_bool = var_20_bool == 0; // 0xb21 Not
	if(var_23_bool == 0) goto Label_2854; // 0xb22 JumpB
	func_6318(); // 0xb24 NEW_2
	
Label_2854:
	return 0; // 0xb26 Return
}


func_4381(var_0_object)
{
	var_253_object = Obj(); // 0x111d PushV
	var_253_object = var_0_object; // 0x111e MovT
	func_5274(var_253_object); // 0x111f NEW_2
	return 0; // 0x1121 Return
}


func_4386(var_576_int)
{
	var_576_int = 0; // 0x1122 MovI
	return 0; // 0x1123 Return
}


func_3364()
{
	var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; var_63_float = 0; var_64_bool = 0; // 0xd24 PushV
	WaitForAnimEnd(); // 0xd25 Func
	var_65_bool = 0; // 0xd27 PushV
	func_4985(var_65_bool); // 0xd28 NEW_2
	var_66_bool = var_65_bool == 0; // 0xd2a Not
	if(var_66_bool == 0) goto Label_3373; // 0xd2b JumpB
	return 14; // 0xd2c Return
	
Label_3373:
	var_67_int = 0; // 0xd2d PushV
	func_6089(var_67_int); // 0xd2e NEW_2
	var_58_int = var_67_int; // 0xd2f Mov
	var_59_int = 0; // 0xd31 MovI
	
Label_3378:
	var_80_bool = 0; // 0xd32 PushV
	var_80_bool = 0; // 0xd33 MovB
	var_81_int = 5; // 0xd34 PushI
	var_82_bool = var_59_int < var_81_int; // 0xd35 LT
	if(var_82_bool == 0) goto Label_3388; // 0xd36 JumpB
	var_83_bool = 0; // 0xd37 PushV
	func_4985(var_83_bool); // 0xd38 NEW_2
	if(var_83_bool == 0) goto Label_3388; // 0xd3a JumpB
	var_80_bool = 1; // 0xd3b MovB
	
Label_3388:
	if(var_80_bool == 0) goto Label_3440; // 0xd3c JumpB
	var_84_int = 3; // 0xd3d PushI
	irand(var_60_int, var_84_int); // 0xd3e Func
	var_85_int = 0; // 0xd40 PushI
	var_86_bool = var_60_int == var_85_int; // 0xd41 Eq
	if(var_86_bool == 0) goto Label_3412; // 0xd42 JumpB
	var_87_int = var_58_int; // 0xd43 Push
	if(var_87_int == 0) goto Label_3411; // 0xd44 JumpB
	irand(var_61_int, var_58_int); // 0xd45 Func
	var_88_string = "all"; // 0xd47 PushS
	var_89_string = ""; var_90_int = 0; // 0xd48 PushV
	var_90_int = var_61_int; // 0xd49 Mov
	func_6082(var_89_string, var_90_int); // 0xd4a NEW_2
	PlayAnimation(var_88_string, var_89_string); // 0xd4c Func
	WaitForAnimEnd(var_62_bool); // 0xd4e Func
	var_91_bool = var_62_bool == 0; // 0xd50 Not
	if(var_91_bool == 0) goto Label_3411; // 0xd51 JumpB
	goto Label_3440; // 0xd52 Jump
	
Label_3440:
	ResetAAS(); // 0xd70 Func
	return 14; // 0xd72 Return
	
Label_3411:
	goto Label_3429; // 0xd53 Jump
	
Label_3429:
	var_92_bool = 0; // 0xd65 PushV
	func_3443(var_92_bool); // 0xd66 NEW_2
	var_93_bool = var_92_bool == 0; // 0xd68 Not
	if(var_93_bool == 0) goto Label_3435; // 0xd69 JumpB
	goto Label_3440; // 0xd6a Jump
	
Label_3435:
	ResetAAS(); // 0xd6b Func
	var_94_int = 1; // 0xd6d PushI
	var_59_int = var_59_int + var_94_int; // 0xd6e Add2
	goto Label_3378; // 0xd6f Jump
	
Label_3412:
	var_95_int = 1; // 0xd54 PushI
	var_96_bool = var_60_int == var_95_int; // 0xd55 Eq
	if(var_96_bool == 0) goto Label_3426; // 0xd56 JumpB
	var_97_int = 4; // 0xd57 PushI
	rand(var_63_float, var_97_int); // 0xd58 Func
	var_98_int = 1; // 0xd5a PushI
	var_99_int = var_63_float + var_98_int; // 0xd5b Add
	Sleep(var_99_int, var_64_bool); // 0xd5c Func
	var_100_bool = var_64_bool == 0; // 0xd5e Not
	if(var_100_bool == 0) goto Label_3425; // 0xd5f JumpB
	goto Label_3440; // 0xd60 Jump
	
Label_3425:
	goto Label_3429; // 0xd61 Jump
	
Label_3426:
	var_101_int = var_59_int; // 0xd62 Push
	if(var_101_int == 0) goto Label_3429; // 0xd63 JumpB
	goto Label_3440; // 0xd64 Jump
}


func_4388()
{
	var_372_string = ""; // 0x1124 PushV
	var_372_string = "attack_stay"; // 0x1125 MovS
	func_5126(var_372_string); // 0x1126 NEW_2
	return 0; // 0x1128 Return
}


func_5415(var_215_bool, var_216_object)
{
	var_217_bool = 0; var_218_object = Obj(); // 0x1528 PushV
	var_218_object = var_216_object; // 0x1529 Mov
	func_5517(var_218_object); // 0x152a NEW_2
	if(var_217_bool == 0) goto Label_5423; // 0x152c JumpB
	var_215_bool = 1; // 0x152d MovB
	return 0; // 0x152e Return
	
Label_5423:
	var_215_bool = 0; // 0x152f MovB
	return 0; // 0x1530 Return
}


func_4393()
{
	return 0; // 0x112a Return
}


func_4395(var_601_bool)
{
	var_601_bool = 1; // 0x112b MovB
	return 0; // 0x112c Return
}


func_4397(var_493_int)
{
	var_493_int = 1; // 0x112d MovI
	return 0; // 0x112e Return
}


func_4399(var_488_float)
{
	var_488_float = 0.5; // 0x112f MovF
	return 0; // 0x1130 Return
}


func_5425(var_181_bool, var_182_object)
{
	var_183_bool = 0; var_184_object = Obj(); // 0x1532 PushV
	var_184_object = var_182_object; // 0x1533 Mov
	func_5524(var_184_object); // 0x1534 NEW_2
	if(var_183_bool == 0) goto Label_5433; // 0x1536 JumpB
	var_181_bool = 1; // 0x1537 MovB
	return 0; // 0x1538 Return
	
Label_5433:
	var_181_bool = 0; // 0x1539 MovB
	return 0; // 0x153a Return
}


func_4408(var_2_object, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool)
{
	var_269_bool = 0; var_270_bool = 0; var_271_bool = 0; var_272_bool = 0; // 0x1138 PushV
	var_273_object = Obj(); // 0x1139 PushV
	var_273_object = var_261_object; // 0x113a Mov
	func_5274(var_273_object); // 0x113b NEW_2
	var_274_int = 1; // 0x113d PushI
	var_275_int = 5; // 0x113e PushI
	SetTimer(var_274_int, var_275_int); // 0x113f Func
	CanSee(var_271_bool, var_261_object); // 0x1141 Func
	var_276_bool = var_271_bool; // 0x1143 Push
	if(var_276_bool == 0) goto Label_4427; // 0x1144 JumpB
	var_2_object = 1; // 0x1145 TMovB
	var_277_object = Obj(); // 0x1146 PushV
	var_277_object = var_261_object; // 0x1147 Mov
	func_5108(var_277_object); // 0x1148 NEW_2
	goto Label_4428; // 0x114a Jump
	
Label_4428:
	var_278_bool = 0; var_279_object = Obj(); // 0x114c PushV
	var_279_object = var_261_object; // 0x114d Mov
	func_4693(var_278_bool, var_279_object); // 0x114e NEW_2
	if(var_278_bool == 0) goto Label_4438; // 0x1150 JumpB
	var_282_object = Obj(); // 0x1151 PushV
	func_5167(var_282_object); // 0x1152 NEW_2
	SendPlayerEnemy(var_261_object, var_282_object); // 0x1154 Func
	
Label_4438:
	var_283_bool = 0; var_284_object = Obj(); var_285_float = 0; var_286_float = 0; var_287_bool = 0; var_288_bool = 0; // 0x1156 PushV
	var_284_object = var_261_object; // 0x1157 Mov
	var_285_float = var_262_float; // 0x1158 Mov
	var_286_float = var_263_float; // 0x1159 Mov
	var_287_bool = var_264_bool; // 0x115a Mov
	var_288_bool = var_265_bool; // 0x115b Mov
	func_4513(var_271_bool, var_272_bool, var_283_bool, var_284_object, var_285_float, var_286_float, var_287_bool, var_288_bool); // 0x115c NEW_2
	var_272_bool = var_283_bool; // 0x115d Mov
	var_334_object = var_2_object; // 0x115f PushT
	if(var_334_object == 0) goto Label_4452; // 0x1160 JumpB
	var_335_string = "head"; // 0x1161 PushS
	UnlookAsync(var_335_string); // 0x1162 Func
	
Label_4452:
	var_336_int = 1; // 0x1164 PushI
	KillTimer(var_336_int); // 0x1165 Func
	var_260_bool = var_272_bool; // 0x1167 Mov
	return 4; // 0x1168 Return
	
Label_4427:
	var_2_object = 0; // 0x114b TMovB
}


func_5435(var_187_bool, var_188_object)
{
	var_189_bool = 0; var_190_object = Obj(); // 0x153c PushV
	var_190_object = var_188_object; // 0x153d Mov
	func_5531(var_190_object); // 0x153e NEW_2
	if(var_189_bool == 0) goto Label_5443; // 0x1540 JumpB
	var_187_bool = 1; // 0x1541 MovB
	return 0; // 0x1542 Return
	
Label_5443:
	var_187_bool = 0; // 0x1543 MovB
	return 0; // 0x1544 Return
}


func_5954(var_22_bool, var_23_object, var_24_string)
{
	var_25_string = "unholster"; // 0x1743 PushS
	var_26_bool = var_24_string == var_25_string; // 0x1744 Eq
	if(var_26_bool == 0) goto Label_5965; // 0x1745 JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x1746 PushV
	var_28_object = var_23_object; // 0x1747 Mov
	func_6319(var_28_object); // 0x1748 NEW_2
	var_22_bool = var_27_bool; // 0x1749 Mov
	return 0; // 0x174b Return
	
Label_5965:
	var_29_string = "player_shot"; // 0x174d PushS
	var_30_bool = var_24_string == var_29_string; // 0x174e Eq
	if(var_30_bool == 0) goto Label_5975; // 0x174f JumpB
	var_31_bool = 0; var_32_object = Obj(); // 0x1750 PushV
	var_32_object = var_23_object; // 0x1751 Mov
	func_6324(var_31_bool, var_32_object); // 0x1752 NEW_2
	var_22_bool = var_31_bool; // 0x1753 Mov
	return 0; // 0x1755 Return
	
Label_5975:
	var_46_string = "battle"; // 0x1757 PushS
	var_47_bool = var_24_string == var_46_string; // 0x1758 Eq
	if(var_47_bool == 0) goto Label_5984; // 0x1759 JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0x175a PushV
	var_49_object = var_23_object; // 0x175b Mov
	func_6345(var_49_object); // 0x175c NEW_2
	var_22_bool = var_48_bool; // 0x175d Mov
	return 0; // 0x175f Return
	
Label_5984:
	var_22_bool = 0; // 0x1760 MovB
	return 0; // 0x1761 Return
}


func_5445(var_193_bool, var_194_object)
{
	var_195_bool = 0; var_196_object = Obj(); // 0x1546 PushV
	var_196_object = var_194_object; // 0x1547 Mov
	func_5538(var_196_object); // 0x1548 NEW_2
	if(var_195_bool == 0) goto Label_5453; // 0x154a JumpB
	var_193_bool = 1; // 0x154b MovB
	return 0; // 0x154c Return
	
Label_5453:
	var_193_bool = 0; // 0x154d MovB
	return 0; // 0x154e Return
}


func_5455(var_199_bool, var_200_object)
{
	var_201_bool = 0; var_202_object = Obj(); // 0x1550 PushV
	var_202_object = var_200_object; // 0x1551 Mov
	func_5545(var_202_object); // 0x1552 NEW_2
	if(var_201_bool == 0) goto Label_5463; // 0x1554 JumpB
	var_199_bool = 1; // 0x1555 MovB
	return 0; // 0x1556 Return
	
Label_5463:
	var_199_bool = 0; // 0x1557 MovB
	return 0; // 0x1558 Return
}


func_5465(var_171_bool)
{
	var_173_int = 0; // 0x155a PushV
	func_5265(var_173_int); // 0x155b NEW_2
	var_174_int = 6; // 0x155d PushI
	var_171_bool = var_173_int <= var_174_int; // 0x155e LE2
	return 0; // 0x155f Return
}


func_4960(var_24_object, var_27_cvector, var_28_cvector)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x1360 PushV
	GetScene(var_31_object); // 0x1361 Func
	var_33_string = "scripted"; // 0x1363 PushS
	var_34_string = "blood_dir.xml"; // 0x1364 PushS
	AddActorByType(var_32_object, var_33_string, var_31_object, var_27_cvector, var_28_cvector, var_34_string); // 0x1365 Func
	var_35_object = Obj(); // 0x1367 PushV
	var_35_object = var_24_object; // 0x1368 Mov
	func_4848(var_35_object); // 0x1369 NEW_2
	return 4; // 0x136b Return
}


func_5472(var_393_bool)
{
	var_393_bool = 0; // 0x1561 MovB
	return 0; // 0x1562 Return
}


func_5986(var_52_object, var_53_string)
{
	var_54_string = "unholster"; // 0x1763 PushS
	var_55_bool = var_53_string == var_54_string; // 0x1764 Eq
	if(var_55_bool == 0) goto Label_5995; // 0x1765 JumpB
	var_56_object = Obj(); // 0x1766 PushV
	var_56_object = var_52_object; // 0x1767 Mov
	func_6322(); // 0x1768 NEW_2
	goto Label_6010; // 0x176a Jump
	
Label_6010:
	return 0; // 0x177a Return
	
Label_5995:
	var_57_string = "player_shot"; // 0x176b PushS
	var_58_bool = var_53_string == var_57_string; // 0x176c Eq
	if(var_58_bool == 0) goto Label_6003; // 0x176d JumpB
	var_59_object = Obj(); // 0x176e PushV
	var_59_object = var_52_object; // 0x176f Mov
	func_6339(var_59_object); // 0x1770 NEW_2
	goto Label_6010; // 0x1772 Jump
	
Label_6003:
	var_125_string = "battle"; // 0x1773 PushS
	var_126_bool = var_53_string == var_125_string; // 0x1774 Eq
	if(var_126_bool == 0) goto Label_6010; // 0x1775 JumpB
	var_127_object = Obj(); // 0x1776 PushV
	var_127_object = var_52_object; // 0x1777 Mov
	func_6348(); // 0x1778 NEW_2
}


func_5475(var_152_bool)
{
	var_154_int = 0; // 0x1564 PushV
	func_5265(var_154_int); // 0x1565 NEW_2
	var_160_int = 1; // 0x1567 PushI
	var_152_bool = var_154_int == var_160_int; // 0x1568 Eq2
	return 0; // 0x1569 Return
}


func_6502(var_507_bool)
{
	var_509_int = 0; var_510_bool = 0; var_511_int = 0; var_512_bool = 0; // 0x1966 PushV
	GetItemID(var_511_int); // 0x1967 ObjFunc
	var_513_string = "Weapon"; // 0x1969 PushS
	HasInvItemProperty(var_512_bool, var_511_int, var_513_string); // 0x196a Func
	var_507_bool = var_512_bool; // 0x196c Mov
	return 4; // 0x196d Return
}


func_5482(var_164_bool)
{
	var_166_int = 0; // 0x156b PushV
	func_5265(var_166_int); // 0x156c NEW_2
	var_167_int = 2; // 0x156e PushI
	var_164_bool = var_166_int == var_167_int; // 0x156f Eq2
	return 0; // 0x1570 Return
}


func_4974()
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0x136e PushV
	GetPosition(var_98_cvector); // 0x136f ObjFunc
	GetPosition(var_99_cvector); // 0x1371 Func
	var_100_cvector = var_98_cvector - var_99_cvector; // 0x1373 Sub2
	var_101_float = GetByIndex(var_100_cvector, 0); // 0x1374 PushE
	var_102_float = GetByIndex(var_100_cvector, 2); // 0x1375 PushE
	RotateAsync(var_101_float, var_102_float); // 0x1376 Func
	return 6; // 0x1378 Return
}


func_6510(var_42_object, var_45_object)
{
	var_43_int = 0; var_44_object = Obj(); // 0x196f PushV
	var_44_object = var_42_object; // 0x1970 Mov
	TaskCall(0); // 0x1971 TaskCall
	func_0(var_45_object, var_43_int, var_44_object); // 0x1972 NEW_2
	TaskReturn(); // 0x1973 TaskReturn
	var_439_int = 100; // 0x1975 PushI
	var_440_bool = var_45_object == var_439_int; // 0x1976 Eq
	if(var_440_bool == 0) goto Label_6524; // 0x1977 JumpB
	var_441_object = Obj(); // 0x1978 PushV
	var_441_object = var_42_object; // 0x1979 Mov
	func_6355(); // 0x197a NEW_2
	
Label_6524:
	return 0; // 0x197c Return
}


func_5489(var_350_bool)
{
	var_352_int = 0; // 0x1572 PushV
	func_5265(var_352_int); // 0x1573 NEW_2
	var_353_int = 3; // 0x1575 PushI
	var_350_bool = var_352_int == var_353_int; // 0x1576 Eq2
	return 0; // 0x1577 Return
}


func_3443(var_92_bool)
{
	var_92_bool = 1; // 0xd73 MovB
	return 0; // 0xd74 Return
}


func_3445()
{
	StopAnimation(); // 0xd75 Func
	StopGroup0(); // 0xd77 Func
	return 0; // 0xd79 Return
}


func_4471(var_2_object)
{
	var_19_int = 1; // 0x1177 PushI
	KillTimer(var_19_int); // 0x1178 Func
	var_20_object = var_2_object; // 0x117a PushT
	if(var_20_object == 0) goto Label_4480; // 0x117b JumpB
	var_2_object = 0; // 0x117c TMovB
	var_21_string = "head"; // 0x117d PushS
	UnlookAsync(var_21_string); // 0x117e Func
	
Label_4480:
	func_4637(var_18_object); // 0x1181 NEW_2
	return 0; // 0x1183 Return
}


func_5496(var_362_bool)
{
	var_364_int = 0; // 0x1579 PushV
	func_5265(var_364_int); // 0x157a NEW_2
	var_365_int = 5; // 0x157c PushI
	var_362_bool = var_364_int == var_365_int; // 0x157d Eq2
	return 0; // 0x157e Return
}


func_4985(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0; // 0x1379 PushV
	IsLoaded(var_22_bool); // 0x137a Func
	var_20_bool = var_22_bool; // 0x137c Mov
	return 2; // 0x137d Return
}


func_3450(var_0_object, var_61_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; // 0xd7a PushV
	var_0_object = var_61_object; // 0xd7b TMov
	func_3501(var_68_bool); // 0xd7d NEW_2
	GetDirection(var_66_cvector); // 0xd7f Func
	var_76_cvector = CVector(0,0,0); var_77_object = Obj(); // 0xd81 PushV
	var_77_object = var_0_object; // 0xd82 MovT
	func_4678(var_77_object); // 0xd83 NEW_2
	var_67_cvector = var_76_cvector; // 0xd84 Mov
	var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0xd86 PushV
	var_83_cvector = var_66_cvector; // 0xd87 Mov
	var_84_cvector = var_67_cvector; // 0xd88 Mov
	func_5226(var_82_float, var_83_cvector, var_84_cvector); // 0xd89 NEW_2
	var_106_int = 0; // 0xd8b PushI
	var_107_bool = var_82_float < var_106_int; // 0xd8c LT
	if(var_107_bool == 0) goto Label_3476; // 0xd8d JumpB
	var_108_object = Obj(); // 0xd8e PushV
	var_108_object = var_0_object; // 0xd8f MovT
	func_4974(); // 0xd90 NEW_2
	var_68_bool = 1; // 0xd92 MovB
	goto Label_3479; // 0xd93 Jump
	
Label_3479:
	var_117_bool = var_68_bool; // 0xd97 Push
	if(var_117_bool == 0) goto Label_3495; // 0xd98 JumpB
	var_118_object = Obj(); // 0xd99 PushV
	var_118_object = var_0_object; // 0xd9a MovT
	func_4974(); // 0xd9b NEW_2
	var_119_int = 111; // 0xd9d PushI
	var_120_float = 0.5; // 0xd9e PushF
	SetTimer(var_119_int, var_120_float); // 0xd9f Func
	var_121_float = 5.0; // 0xda1 PushF
	Sleep(var_121_float); // 0xda2 Func
	var_122_int = 111; // 0xda4 PushI
	KillTimer(var_122_int); // 0xda5 Func
	
Label_3495:
	StopAsync(); // 0xda7 Func
	var_123_string = "head"; // 0xda9 PushS
	UnlookAsync(var_123_string); // 0xdaa Func
	return 6; // 0xdac Return
	
Label_3476:
	var_124_float = 1.5; // 0xd94 PushF
	Sleep(var_124_float, var_68_bool); // 0xd95 Func
}


func_6011(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x177b PushV
	var_23_bool = 0; // 0x177c PushV
	var_23_bool = 0; // 0x177d MovB
	var_24_bool = 0; var_25_object = Obj(); // 0x177e PushV
	var_25_object = var_20_object; // 0x177f Mov
	func_6319(var_25_object); // 0x1780 NEW_2
	if(var_24_bool == 0) goto Label_6025; // 0x1782 JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x1783 PushV
	var_27_object = var_20_object; // 0x1784 Mov
	func_4693(var_26_bool, var_27_object); // 0x1785 NEW_2
	if(var_26_bool == 0) goto Label_6025; // 0x1787 JumpB
	var_23_bool = 1; // 0x1788 MovB
	
Label_6025:
	if(var_23_bool == 0) goto Label_6032; // 0x1789 JumpB
	IsWeaponHolstered(var_22_bool); // 0x178a ObjFunc
	var_30_bool = var_22_bool == 0; // 0x178c Not
	if(var_30_bool == 0) goto Label_6032; // 0x178d JumpB
	var_19_bool = 1; // 0x178e MovB
	return 2; // 0x178f Return
	
Label_6032:
	var_19_bool = 0; // 0x1790 MovB
	return 2; // 0x1791 Return
}


func_6525(var_103_int)
{
	var_103_int = 515568; // 0x197d MovI
	return 0; // 0x197e Return
}


func_4990(var_54_bool, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; // 0x137e PushV
	GetPosition(var_67_cvector); // 0x137f ObjFunc
	GetEyesHeight(var_66_float); // 0x1381 ObjFunc
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x1383 PushE
	var_75_float = var_75_float + var_66_float; // 0x1384 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x1385 PopE
	GetPosition(var_68_cvector); // 0x1386 Func
	GetEyesHeight(var_66_float); // 0x1388 Func
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x138a PushE
	var_76_float = var_76_float + var_66_float; // 0x138b Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x138c PopE
	var_69_cvector = var_67_cvector - var_68_cvector; // 0x138d Sub2
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x138e PushE
	var_77_float = 0; // 0x138f MovI
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x1390 PopE
	var_78_int = var_69_cvector | var_69_cvector; // 0x1391 Or
	var_79_float = sqrt(var_78_int); // 0x1392 Sqrt
	var_69_cvector = var_69_cvector / var_69_cvector; // 0x1393 Div2
	var_70_cvector = -var_69_cvector; // 0x1394 Neg2
	var_80_float = var_69_cvector * var_56_float; // 0x1395 Mult
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0x1396 PushV
	var_83_cvector = CVector(0.0, 1.0, 0.0); // 0x1397 PushVec
	var_82_cvector = var_70_cvector ^ var_83_cvector; // 0x1398 Xor2
	func_5173(var_81_cvector, var_82_cvector); // 0x1399 NEW_2
	var_89_int = 25; // 0x139b PushI
	var_90_float = var_81_cvector * var_89_int; // 0x139c Mult
	var_91_int = var_80_float + var_90_float; // 0x139d Add
	var_92_cvector = CVector(0.0, 10.0, 0.0); // 0x139e PushVec
	var_71_cvector = var_91_int - var_92_cvector; // 0x139f Sub2
	var_72_cvector = var_68_cvector + var_71_cvector; // 0x13a0 Add2
	IsOverrideActive(var_73_bool); // 0x13a1 Func
	var_93_bool = var_73_bool; // 0x13a3 Push
	if(var_93_bool == 0) goto Label_5031; // 0x13a4 JumpB
	var_54_bool = 0; // 0x13a5 MovB
	return 18; // 0x13a6 Return
	
Label_5031:
	StopWorld(); // 0x13a7 Func
	var_94_bool = 1; // 0x13a9 PushB
	CameraTransit(var_72_cvector, var_70_cvector, var_94_bool); // 0x13aa Func
	var_95_float = GetByIndex(var_71_cvector, 0); // 0x13ac PushE
	var_96_float = GetByIndex(var_71_cvector, 2); // 0x13ad PushE
	Rotate(var_95_float, var_96_float); // 0x13ae Func
	var_97_bool = 0; // 0x13b0 PushV
	func_6533(var_97_bool); // 0x13b1 NEW_2
	if(var_97_bool == 0) goto Label_5045; // 0x13b3 JumpB
	goto Label_5053; // 0x13b4 Jump
	
Label_5053:
	CameraWaitForPlayFinish(); // 0x13bd Func
	ResumeWorld(); // 0x13bf Func
	var_54_bool = 1; // 0x13c1 MovB
	return 18; // 0x13c2 Return
	
Label_5045:
	var_98_string = "head"; // 0x13b5 PushS
	HasAnimationTrack(var_74_bool, var_98_string); // 0x13b6 Func
	var_99_bool = var_74_bool; // 0x13b8 Push
	if(var_99_bool == 0) goto Label_5053; // 0x13b9 JumpB
	var_100_string = "head"; // 0x13ba PushS
	LookAsyncCamera(var_100_string); // 0x13bb Func
}


func_6527(var_102_int)
{
	var_102_int = 503353; // 0x197f MovI
	return 0; // 0x1980 Return
}


func_3968(var_1_object, var_2_object, var_4_bool)
{
	var_214_bool = 0; var_215_bool = 0; var_216_cvector = CVector(0,0,0); var_217_bool = 0; var_218_bool = 0; var_219_cvector = CVector(0,0,0); // 0xf80 PushV
	var_1_object = 0; // 0xf81 TMovI
	
Label_3970:
	var_220_string = "all"; // 0xf82 PushS
	var_221_string = "attack_begin"; // 0xf83 PushS
	var_222_int = 1; // 0xf84 PushI
	var_223_int = var_1_object + var_222_int; // 0xf85 Add
	var_224_int = var_221_string + var_223_int; // 0xf86 Add
	HasAnimation(var_217_bool, var_220_string, var_224_int); // 0xf87 Func
	var_225_bool = var_217_bool == 0; // 0xf89 Not
	if(var_225_bool == 0) goto Label_3980; // 0xf8a JumpB
	goto Label_3983; // 0xf8b Jump
	
Label_3983:
	var_2_object = 0; // 0xf8f TMovI
	
Label_3984:
	var_226_string = "attack"; // 0xf90 PushS
	var_227_int = 1; // 0xf91 PushI
	var_228_int = var_2_object + var_227_int; // 0xf92 Add
	var_229_int = var_226_string + var_228_int; // 0xf93 Add
	IsExisting3DSound(var_218_bool, var_229_int); // 0xf94 Func
	var_230_bool = var_218_bool == 0; // 0xf96 Not
	if(var_230_bool == 0) goto Label_3993; // 0xf97 JumpB
	goto Label_3996; // 0xf98 Jump
	
Label_3996:
	var_231_string = "all"; // 0xf9c PushS
	var_232_string = "bjump"; // 0xf9d PushS
	GetAnimationOffset(var_219_cvector, var_231_string, var_232_string); // 0xf9e Func
	var_233_float = GetByIndex(var_219_cvector, 2); // 0xfa0 PushE
	var_4_bool = -var_233_float; // 0xfa1 Neg2
	return 6; // 0xfa2 Return
	
Label_3993:
	var_234_int = 1; // 0xf99 PushI
	var_2_object = var_2_object + var_234_int; // 0xf9a Add2
	goto Label_3984; // 0xf9b Jump
	
Label_3980:
	var_235_int = 1; // 0xf8c PushI
	var_1_object = var_1_object + var_235_int; // 0xf8d Add2
	goto Label_3970; // 0xf8e Jump
}


func_6529(var_104_string)
{
	var_104_string = "ui/NPC_Citizen1.png"; // 0x1981 MovS
	return 0; // 0x1982 Return
}


func_5503(var_371_bool)
{
	var_373_int = 0; // 0x1580 PushV
	func_5265(var_373_int); // 0x1581 NEW_2
	var_374_int = 6; // 0x1583 PushI
	var_371_bool = var_373_int == var_374_int; // 0x1584 Eq2
	return 0; // 0x1585 Return
}


func_6531(var_105_string)
{
	var_105_string = "ui/NPC_Citizen1_b.png"; // 0x1983 MovS
	return 0; // 0x1984 Return
}


func_6533(var_97_bool)
{
	var_97_bool = 0; // 0x1985 MovB
	return 0; // 0x1986 Return
}


func_5510(var_211_bool)
{
	var_213_int = 0; // 0x1587 PushV
	func_5265(var_213_int); // 0x1588 NEW_2
	var_214_int = 7; // 0x158a PushI
	var_211_bool = var_213_int == var_214_int; // 0x158b Eq2
	return 0; // 0x158c Return
}


func_6535()
{
	var_19_bool = GlobalVars[0]; // 0x1987 PushGE
	var_19_bool = 0; // 0x1988 MovB
	GlobalVars[0] = var_19_bool; // 0x1989 PopGE
	return 0; // 0x198a Return
}


func_6539(var_30_object)
{
	var_31_bool = 0; var_32_bool = 0; // 0x198b PushV
	var_33_bool = GlobalVars[0]; // 0x198c PushGE
	if(var_33_bool == 0) goto Label_6552; // 0x198d JumpB
	IsOverrideActive(var_32_bool); // 0x198e Func
	var_34_bool = var_32_bool == 0; // 0x1990 Not
	if(var_34_bool == 0) goto Label_6550; // 0x1991 JumpB
	var_35_object = Obj(); // 0x1992 PushV
	var_35_object = var_30_object; // 0x1993 Mov
	func_5644(var_35_object); // 0x1994 NEW_2
	
Label_6550:
	return 2; // 0x1996 Return
	
Label_6552:
	var_42_object = Obj(); // 0x1998 PushV
	var_42_object = var_30_object; // 0x1999 Mov
	func_6510(var_32_bool, var_42_object); // 0x199a NEW_2
	return 2; // 0x199c Return
}


func_5517(var_217_bool)
{
	var_219_int = 0; // 0x158e PushV
	func_5265(var_219_int); // 0x158f NEW_2
	var_220_int = 8; // 0x1591 PushI
	var_217_bool = var_219_int == var_220_int; // 0x1592 Eq2
	return 0; // 0x1593 Return
}


func_6034(var_33_object)
{
	var_34_object = Obj(); // 0x1793 PushV
	var_34_object = var_33_object; // 0x1794 Mov
	func_6322(); // 0x1795 NEW_2
	return 0; // 0x1797 Return
}


func_5524(var_183_bool)
{
	var_185_int = 0; // 0x1595 PushV
	func_5265(var_185_int); // 0x1596 NEW_2
	var_186_int = 9; // 0x1598 PushI
	var_183_bool = var_185_int == var_186_int; // 0x1599 Eq2
	return 0; // 0x159a Return
}


func_6040(var_21_object)
{
	var_22_bool = 0; var_23_object = Obj(); // 0x1799 PushV
	var_23_object = var_21_object; // 0x179a Mov
	func_4693(var_22_bool, var_23_object); // 0x179b NEW_2
	if(var_22_bool == 0) goto Label_6052; // 0x179d JumpB
	var_26_object = Obj(); // 0x179e PushV
	func_5167(var_26_object); // 0x179f NEW_2
	var_29_float = -0.03; // 0x17a1 PushF
	ReportReputationChange(var_21_object, var_26_object, var_29_float); // 0x17a2 Func
	
Label_6052:
	return 0; // 0x17a4 Return
}


func_5531(var_189_bool)
{
	var_191_int = 0; // 0x159c PushV
	func_5265(var_191_int); // 0x159d NEW_2
	var_192_int = 10; // 0x159f PushI
	var_189_bool = var_191_int == var_192_int; // 0x15a0 Eq2
	return 0; // 0x15a1 Return
}


func_6557(var_63_bool)
{
	var_63_bool = 0; // 0x199d MovB
	return 0; // 0x199e Return
}


func_6559(var_170_bool)
{
	var_170_bool = 1; // 0x19a0 MovB
	return 0; // 0x19a1 Return
}


func_4513(var_0_object, var_1_object, var_283_bool, var_284_object, var_285_float, var_286_float, var_287_bool, var_288_bool)
{
	var_289_bool = 0; var_290_bool = 0; var_291_object = Obj(); var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0; var_296_object = Obj(); var_297_bool = 0; var_298_bool = 0; var_299_object = Obj(); var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_object = Obj(); // 0x11a1 PushV
	var_0_object = 0; // 0x11a2 TMovB
	var_1_object = var_284_object; // 0x11a3 TMov
	var_298_bool = var_288_bool; // 0x11a4 Mov
	
Label_4517:
	var_305_bool = 0; var_306_object = Obj(); // 0x11a5 PushV
	var_306_object = var_284_object; // 0x11a6 Mov
	func_4653(var_305_bool, var_306_object); // 0x11a7 NEW_2
	var_309_bool = var_305_bool == 0; // 0x11a9 Not
	if(var_309_bool == 0) goto Label_4525; // 0x11aa JumpB
	var_283_bool = 0; // 0x11ab MovB
	return 16; // 0x11ac Return
	
Label_4525:
	GetPosition(var_300_cvector); // 0x11ad ObjFunc
	GetPosition(var_301_cvector); // 0x11af Func
	var_302_cvector = var_300_cvector - var_301_cvector; // 0x11b1 Sub2
	var_303_float = var_302_cvector | var_302_cvector; // 0x11b2 Or2
	var_310_bool = 0; // 0x11b3 PushV
	var_310_bool = 0; // 0x11b4 MovB
	var_311_int = 0; // 0x11b5 PushI
	var_312_bool = var_286_float > var_311_int; // 0x11b6 GT
	if(var_312_bool == 0) goto Label_4540; // 0x11b7 JumpB
	var_313_float = var_286_float * var_286_float; // 0x11b8 Mult
	var_314_bool = var_303_float > var_313_float; // 0x11b9 GT
	if(var_314_bool == 0) goto Label_4540; // 0x11ba JumpB
	var_310_bool = 1; // 0x11bb MovB
	
Label_4540:
	if(var_310_bool == 0) goto Label_4545; // 0x11bc JumpB
	Stop(); // 0x11bd Func
	var_283_bool = 0; // 0x11bf MovB
	return 16; // 0x11c0 Return
	
Label_4545:
	var_315_float = var_285_float * var_285_float; // 0x11c1 Mult
	var_316_bool = var_303_float > var_315_float; // 0x11c2 GT
	if(var_316_bool == 0) goto Label_4607; // 0x11c3 JumpB
	GetPFPosition(var_300_cvector); // 0x11c4 ObjFunc
	FindPathTo(var_304_object, var_300_cvector); // 0x11c6 Func
	var_317_bool = var_304_object != 0; // 0x11c8 NullNeq
	if(var_317_bool == 0) goto Label_4556; // 0x11c9 JumpB
	var_299_object = var_304_object; // 0x11ca Mov
	var_304_object = 0; // 0x11cb SetNull
	
Label_4556:
	var_318_bool = var_299_object != 0; // 0x11cc NullNeq
	if(var_318_bool == 0) goto Label_4589; // 0x11cd JumpB
	var_319_bool = var_298_bool; // 0x11ce Push
	if(var_319_bool == 0) goto Label_4566; // 0x11cf JumpB
	var_298_bool = 0; // 0x11d0 MovB
	RotatePath(var_299_object, var_297_bool); // 0x11d1 Func
	var_320_bool = var_297_bool == 0; // 0x11d3 Not
	if(var_320_bool == 0) goto Label_4566; // 0x11d4 JumpB
	goto Label_4613; // 0x11d5 Jump
	
Label_4613:
	var_283_bool = !var_0_object; // 0x1205 Not2
	return 16; // 0x1206 Return
	
Label_4566:
	var_321_int = 0; // 0x11d6 PushI
	var_322_float = 0.3; // 0x11d7 PushF
	SetTimer(var_321_int, var_322_float); // 0x11d8 Func
	var_323_string = ""; // 0x11da PushV
	func_4660(var_323_string); // 0x11db NEW_2
	var_324_string = ""; // 0x11dd PushV
	func_4662(var_324_string); // 0x11de NEW_2
	FollowPath(var_299_object, var_287_bool, var_297_bool, var_323_string, var_324_string); // 0x11e0 Func
	var_325_bool = var_297_bool == 0; // 0x11e2 Not
	if(var_325_bool == 0) goto Label_4587; // 0x11e3 JumpB
	var_326_object = var_0_object; // 0x11e4 PushT
	if(var_326_object == 0) goto Label_4585; // 0x11e5 JumpB
	var_299_object = 0; // 0x11e6 SetNull
	goto Label_4613; // 0x11e7 Jump
	
Label_4585:
	goto Label_4612; // 0x11e9 Jump
	
Label_4612:
	goto Label_4517; // 0x1204 Jump
	
Label_4587:
	var_299_object = 0; // 0x11eb SetNull
	goto Label_4605; // 0x11ec Jump
	
Label_4605:
	var_304_object = 0; // 0x11fd SetNull
	goto Label_4611; // 0x11fe Jump
	
Label_4611:
	var_299_object = 0; // 0x1203 SetNull
	
Label_4589:
	var_327_int = 0; // 0x11ed PushI
	KillTimer(var_327_int); // 0x11ee Func
	var_328_float = 0.5; // 0x11f0 PushF
	Sleep(var_328_float, var_297_bool); // 0x11f1 Func
	var_329_bool = var_297_bool == 0; // 0x11f3 Not
	if(var_329_bool == 0) goto Label_4601; // 0x11f4 JumpB
	var_330_object = var_0_object; // 0x11f5 PushT
	if(var_330_object == 0) goto Label_4601; // 0x11f6 JumpB
	var_299_object = 0; // 0x11f7 SetNull
	goto Label_4613; // 0x11f8 Jump
	
Label_4601:
	var_331_int = 0; // 0x11f9 PushI
	var_332_float = 0.3; // 0x11fa PushF
	SetTimer(var_331_int, var_332_float); // 0x11fb Func
	
Label_4607:
	var_333_int = 0; // 0x11ff PushI
	KillTimer(var_333_int); // 0x1200 Func
	goto Label_4613; // 0x1202 Jump
}


func_6562(var_23_bool, var_24_object, var_25_object, var_26_bool)
{
	var_27_bool = 0; var_28_object = Obj(); var_29_object = Obj(); var_30_float = 0; var_31_bool = 0; // 0x19a3 PushV
	var_28_object = var_24_object; // 0x19a4 Mov
	var_29_object = var_25_object; // 0x19a5 Mov
	var_30_float = 700.0; // 0x19a6 MovF
	var_31_bool = var_26_bool; // 0x19a7 Mov
	func_6229(var_27_bool, var_28_object, var_29_object, var_30_float, var_31_bool); // 0x19a8 NEW_2
	var_23_bool = var_27_bool; // 0x19a9 Mov
	return 0; // 0x19ab Return
}


func_4003(var_0_object, var_497_float, var_498_int)
{
	var_499_object = Obj(); var_500_float = 0; var_501_float = 0; var_502_object = Obj(); var_503_float = 0; var_504_float = 0; // 0xfa3 PushV
	var_505_float = 0.9; // 0xfa4 PushF
	var_506_float = var_497_float * var_505_float; // 0xfa5 Mult
	GetVictim(var_506_float, var_502_object); // 0xfa6 Func
	ReportAttack(var_0_object); // 0xfa8 Func
	var_507_bool = var_502_object == var_0_object; // 0xfaa Eq
	if(var_507_bool == 0) goto Label_4040; // 0xfab JumpB
	var_508_float = 0; var_509_object = Obj(); var_510_int = 0; // 0xfac PushV
	var_509_object = var_502_object; // 0xfad Mov
	var_510_int = var_498_int; // 0xfae Mov
	func_3733(var_510_int); // 0xfaf NEW_2
	var_503_float = var_508_float; // 0xfb0 Mov
	var_511_float = 0; var_512_object = Obj(); var_513_float = 0; var_514_int = 0; // 0xfb2 PushV
	var_512_object = var_502_object; // 0xfb3 Mov
	var_513_float = var_503_float; // 0xfb4 Mov
	var_515_int = 0; var_516_object = Obj(); var_517_int = 0; // 0xfb5 PushV
	var_516_object = var_502_object; // 0xfb6 Mov
	var_517_int = var_498_int; // 0xfb7 Mov
	func_3736(var_517_int); // 0xfb8 NEW_2
	var_514_int = var_515_int; // 0xfb9 Mov
	func_4710(var_511_float, var_512_object, var_513_float, var_514_int); // 0xfbb NEW_2
	var_504_float = var_511_float; // 0xfbc Mov
	var_576_int = 0; // 0xfbe PushV
	func_4386(var_576_int); // 0xfbf NEW_2
	ReportHit(var_0_object, var_576_int, var_504_float, var_503_float); // 0xfc1 Func
	var_577_object = Obj(); var_578_float = 0; // 0xfc3 PushV
	var_577_object = var_502_object; // 0xfc4 Mov
	var_578_float = var_504_float; // 0xfc5 Mov
	func_4393(); // 0xfc6 NEW_2
	
Label_4040:
	return 6; // 0xfc8 Return
}


func_5538(var_195_bool)
{
	var_197_int = 0; // 0x15a3 PushV
	func_5265(var_197_int); // 0x15a4 NEW_2
	var_198_int = 11; // 0x15a6 PushI
	var_195_bool = var_197_int == var_198_int; // 0x15a7 Eq2
	return 0; // 0x15a8 Return
}


func_6053(var_19_bool, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x17a5 PushV
	var_23_string = "heal"; // 0x17a6 PushS
	var_24_bool = var_20_string == var_23_string; // 0x17a7 Eq
	if(var_24_bool == 0) goto Label_6067; // 0x17a8 JumpB
	var_25_string = "player"; // 0x17a9 PushS
	FindActor(var_22_object, var_25_string); // 0x17aa Func
	var_26_bool = 0; var_27_object = Obj(); // 0x17ac PushV
	var_27_object = var_22_object; // 0x17ad Mov
	func_6350(var_27_object); // 0x17ae NEW_2
	var_19_bool = var_26_bool; // 0x17af Mov
	return 2; // 0x17b1 Return
	
Label_6067:
	var_19_bool = 0; // 0x17b3 MovB
	return 2; // 0x17b4 Return
}


func_5545(var_201_bool)
{
	var_203_int = 0; // 0x15aa PushV
	func_5265(var_203_int); // 0x15ab NEW_2
	var_204_int = 12; // 0x15ad PushI
	var_201_bool = var_203_int == var_204_int; // 0x15ae Eq2
	return 0; // 0x15af Return
}


func_6572(var_101_object)
{
	var_102_bool = 0; var_103_object = Obj(); // 0x19ad PushV
	var_103_object = var_101_object; // 0x19ae Mov
	func_4693(var_102_bool, var_103_object); // 0x19af NEW_2
	if(var_102_bool == 0) goto Label_6589; // 0x19b1 JumpB
	var_106_object = Obj(); // 0x19b2 PushV
	func_5167(var_106_object); // 0x19b3 NEW_2
	var_109_float = -0.07; // 0x19b5 PushF
	var_110_bool = 1; // 0x19b6 PushB
	ReportReputationChange(var_101_object, var_106_object, var_109_float, var_110_bool); // 0x19b7 Func
	var_111_bool = 0; // 0x19b9 PushV
	var_111_bool = 1; // 0x19ba MovB
	func_5729(var_111_bool); // 0x19bb NEW_2
	
Label_6589:
	func_5705(); // 0x19be NEW_2
	var_245_bool = GlobalVars[0]; // 0x19c0 PushGE
	var_245_bool = 1; // 0x19c1 MovB
	GlobalVars[0] = var_245_bool; // 0x19c2 PopGE
	var_246_int = 50; // 0x19c3 PushI
	var_247_int = 40; // 0x19c4 PushI
	SetRTEnvelope(var_246_int, var_247_int); // 0x19c5 Func
	return 0; // 0x19c7 Return
}


func_3501(var_0_object)
{
	var_69_object = Obj(); // 0xdad PushV
	var_69_object = var_0_object; // 0xdae MovT
	func_5108(var_69_object); // 0xdaf NEW_2
	return 0; // 0xdb1 Return
}


func_5552(var_106_int)
{
	var_107_int = 0; var_108_int = 0; // 0x15b0 PushV
	var_109_string = "branch"; // 0x15b1 PushS
	GetVariable(var_109_string, var_108_int); // 0x15b2 Func
	var_110_int = 0; // 0x15b4 PushI
	var_111_bool = var_108_int == var_110_int; // 0x15b5 Eq
	if(var_111_bool == 0) goto Label_5562; // 0x15b6 JumpB
	var_106_int = 1; // 0x15b7 MovI
	return 2; // 0x15b8 Return
	
Label_5562:
	var_112_int = 1; // 0x15ba PushI
	var_113_bool = var_108_int == var_112_int; // 0x15bb Eq
	if(var_113_bool == 0) goto Label_5567; // 0x15bc JumpB
	var_106_int = 2; // 0x15bd MovI
	return 2; // 0x15be Return
	
Label_5567:
	var_106_int = 3; // 0x15bf MovI
	return 2; // 0x15c0 Return
}


func_6069(var_30_string)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x17b5 PushV
	var_33_string = "heal"; // 0x17b6 PushS
	var_34_bool = var_30_string == var_33_string; // 0x17b7 Eq
	if(var_34_bool == 0) goto Label_6081; // 0x17b8 JumpB
	var_35_string = "player"; // 0x17b9 PushS
	FindActor(var_32_object, var_35_string); // 0x17ba Func
	var_36_object = Obj(); // 0x17bc PushV
	var_36_object = var_32_object; // 0x17bd Mov
	func_6353(); // 0x17be NEW_2
	var_32_object = 0; // 0x17c0 SetNull
	
Label_6081:
	return 2; // 0x17c1 Return
}


func_5569(var_225_int)
{
	var_226_int = 0; var_227_int = 0; // 0x15c1 PushV
	var_228_string = "branch"; // 0x15c2 PushS
	GetVariable(var_228_string, var_227_int); // 0x15c3 Func
	var_225_int = var_227_int; // 0x15c5 Mov
	return 2; // 0x15c6 Return
}


func_6082(var_73_string, var_74_int)
{
	var_75_string = ""; var_76_string = ""; // 0x17c2 PushV
	var_76_string = "idle"; // 0x17c3 MovS
	var_77_int = var_74_int; // 0x17c4 Push
	if(var_77_int == 0) goto Label_6087; // 0x17c5 JumpB
	var_76_string = var_76_string + var_74_int; // 0x17c6 Add2
	
Label_6087:
	var_73_string = var_76_string; // 0x17c7 Mov
	return 2; // 0x17c8 Return
}


func_5059()
{
	var_432_bool = 0; var_433_bool = 0; // 0x13c3 PushV
	var_434_bool = 1; // 0x13c4 PushB
	CameraSwitchToNormal(var_434_bool); // 0x13c5 Func
	var_435_bool = 0; // 0x13c7 PushV
	func_6533(var_435_bool); // 0x13c8 NEW_2
	if(var_435_bool == 0) goto Label_5068; // 0x13ca JumpB
	goto Label_5076; // 0x13cb Jump
	
Label_5076:
	return 2; // 0x13d4 Return
	
Label_5068:
	var_436_string = "head"; // 0x13cc PushS
	HasAnimationTrack(var_433_bool, var_436_string); // 0x13cd Func
	var_437_bool = var_433_bool; // 0x13cf Push
	if(var_437_bool == 0) goto Label_5076; // 0x13d0 JumpB
	var_438_string = "head"; // 0x13d1 PushS
	UnlookAsync(var_438_string); // 0x13d2 Func
}


func_5575(var_537_int)
{
	var_539_int = 0; var_540_int = 0; // 0x15c7 PushV
	GetItemID(var_540_int); // 0x15c8 ObjFunc
	var_537_int = var_540_int; // 0x15ca Mov
	return 2; // 0x15cb Return
}


func_6089(var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0; // 0x17c9 PushV
	var_70_int = 0; // 0x17ca MovI
	
Label_6091:
	var_72_string = "all"; // 0x17cb PushS
	var_73_string = ""; var_74_int = 0; // 0x17cc PushV
	var_74_int = var_70_int; // 0x17cd Mov
	func_6082(var_73_string, var_74_int); // 0x17ce NEW_2
	HasAnimation(var_71_bool, var_72_string, var_73_string); // 0x17d0 Func
	var_78_bool = var_71_bool == 0; // 0x17d2 Not
	if(var_78_bool == 0) goto Label_6101; // 0x17d3 JumpB
	goto Label_6104; // 0x17d4 Jump
	
Label_6104:
	var_67_int = var_70_int; // 0x17d8 Mov
	return 4; // 0x17d9 Return
	
Label_6101:
	var_79_int = 1; // 0x17d5 PushI
	var_70_int = var_70_int + var_79_int; // 0x17d6 Add2
	goto Label_6091; // 0x17d7 Jump
}


func_4042(var_0_object, var_460_bool, var_461_float)
{
	var_462_int = 0; var_463_bool = 0; var_464_int = 0; var_465_string = ""; var_466_int = 0; var_467_bool = 0; var_468_int = 0; var_469_string = ""; // 0xfca PushV
	func_4381(var_469_string); // 0xfcc NEW_2
	irand(var_466_int, var_469_string); // 0xfce Func
	var_470_int = 1; // 0xfd0 PushI
	var_466_int = var_466_int + var_470_int; // 0xfd1 Add2
	Face(var_0_object); // 0xfd2 Func
	var_471_bool = 1; // 0xfd4 PushB
	SetAttackState(var_471_bool); // 0xfd5 Func
	func_5283(); // 0xfd8 NEW_2
	var_476_string = "all"; // 0xfda PushS
	var_477_string = "attack_begin"; // 0xfdb PushS
	var_478_int = var_477_string + var_466_int; // 0xfdc Add
	PlayAnimation(var_476_string, var_478_int); // 0xfdd Func
	WaitForAnimEnd(); // 0xfdf Func
	func_4349(var_468_int, var_469_string); // 0xfe2 NEW_2
	var_494_bool = 0; var_495_object = Obj(); // 0xfe4 PushV
	var_495_object = var_0_object; // 0xfe5 MovT
	func_4824(var_494_bool, var_495_object); // 0xfe6 NEW_2
	var_496_bool = var_494_bool == 0; // 0xfe8 Not
	if(var_496_bool == 0) goto Label_4078; // 0xfe9 JumpB
	StopAsync(); // 0xfea Func
	var_460_bool = 0; // 0xfec MovB
	return 8; // 0xfed Return
	
Label_4078:
	var_497_float = 0; var_498_int = 0; // 0xfee PushV
	var_497_float = var_461_float; // 0xfef Mov
	var_498_int = var_466_int; // 0xff0 Mov
	func_4003(var_469_string, var_497_float, var_498_int); // 0xff1 NEW_2
	var_579_string = "all"; // 0xff3 PushS
	var_580_string = "attack_middle"; // 0xff4 PushS
	var_581_int = var_580_string + var_466_int; // 0xff5 Add
	HasAnimation(var_467_bool, var_579_string, var_581_int); // 0xff6 Func
	var_582_bool = var_467_bool; // 0xff8 Push
	if(var_582_bool == 0) goto Label_4159; // 0xff9 JumpB
	func_5283(); // 0xffb NEW_2
	var_583_string = "all"; // 0xffd PushS
	var_584_string = "attack_middle"; // 0xffe PushS
	var_585_int = var_584_string + var_466_int; // 0xfff Add
	PlayAnimation(var_583_string, var_585_int); // 0x1000 Func
	WaitForAnimEnd(); // 0x1002 Func
	func_4381(var_469_string); // 0x1005 NEW_2
	var_586_bool = 0; var_587_object = Obj(); // 0x1007 PushV
	var_587_object = var_0_object; // 0x1008 MovT
	func_4824(var_586_bool, var_587_object); // 0x1009 NEW_2
	var_588_bool = var_586_bool == 0; // 0x100b Not
	if(var_588_bool == 0) goto Label_4113; // 0x100c JumpB
	StopAsync(); // 0x100d Func
	var_460_bool = 0; // 0x100f MovB
	return 8; // 0x1010 Return
	
Label_4113:
	var_589_float = 0; var_590_int = 0; // 0x1011 PushV
	var_589_float = var_461_float; // 0x1012 Mov
	var_590_int = var_466_int; // 0x1013 Mov
	func_4003(var_469_string, var_589_float, var_590_int); // 0x1014 NEW_2
	var_468_int = 1; // 0x1016 MovI
	
Label_4119:
	var_591_string = "attack_middle"; // 0x1017 PushS
	var_592_int = var_591_string + var_466_int; // 0x1018 Add
	var_593_string = "_"; // 0x1019 PushS
	var_594_int = var_592_int + var_593_string; // 0x101a Add
	var_469_string = var_594_int + var_468_int; // 0x101b Add2
	var_595_string = "all"; // 0x101c PushS
	HasAnimation(var_467_bool, var_595_string, var_469_string); // 0x101d Func
	var_596_bool = var_467_bool == 0; // 0x101f Not
	if(var_596_bool == 0) goto Label_4130; // 0x1020 JumpB
	goto Label_4159; // 0x1021 Jump
	
Label_4159:
	var_597_bool = 0; // 0x103f PushB
	SetAttackState(var_597_bool); // 0x1040 Func
	var_598_string = "all"; // 0x1042 PushS
	var_599_string = "attack_end"; // 0x1043 PushS
	var_600_int = var_599_string + var_466_int; // 0x1044 Add
	PlayAnimation(var_598_string, var_600_int); // 0x1045 Func
	var_601_bool = 0; // 0x1047 PushV
	func_4395(var_601_bool); // 0x1048 NEW_2
	if(var_601_bool == 0) goto Label_4177; // 0x104a JumpB
	var_602_bool = 0; var_603_float = 0; // 0x104b PushV
	var_603_float = 0.75; // 0x104c MovF
	func_4179(var_602_bool, var_603_float); // 0x104d NEW_2
	StopAsync(); // 0x104f Func
	
Label_4177:
	var_460_bool = 1; // 0x1051 MovB
	return 8; // 0x1052 Return
	
Label_4130:
	func_5283(); // 0x1023 NEW_2
	var_611_string = "all"; // 0x1025 PushS
	PlayAnimation(var_611_string, var_469_string); // 0x1026 Func
	WaitForAnimEnd(); // 0x1028 Func
	func_4381(var_469_string); // 0x102b NEW_2
	var_612_bool = 0; var_613_object = Obj(); // 0x102d PushV
	var_613_object = var_0_object; // 0x102e MovT
	func_4824(var_612_bool, var_613_object); // 0x102f NEW_2
	var_614_bool = var_612_bool == 0; // 0x1031 Not
	if(var_614_bool == 0) goto Label_4151; // 0x1032 JumpB
	StopAsync(); // 0x1033 Func
	var_460_bool = 0; // 0x1035 MovB
	return 8; // 0x1036 Return
	
Label_4151:
	var_615_float = 0; var_616_int = 0; // 0x1037 PushV
	var_615_float = var_461_float; // 0x1038 Mov
	var_616_int = var_466_int; // 0x1039 Mov
	func_4003(var_469_string, var_615_float, var_616_int); // 0x103a NEW_2
	var_617_int = 1; // 0x103c PushI
	var_468_int = var_468_int + var_617_int; // 0x103d Add2
	goto Label_4119; // 0x103e Jump
}


func_5580(var_514_int, var_515_object, var_516_int)
{
	var_517_int = 0; var_518_int = 0; var_519_int = 0; var_520_string = ""; var_521_bool = 0; var_522_bool = 0; var_523_int = 0; var_524_int = 0; var_525_int = 0; var_526_int = 0; var_527_string = ""; var_528_bool = 0; var_529_bool = 0; var_530_int = 0; // 0x15cc PushV
	var_531_int = 0; // 0x15cd PushI
	var_532_bool = var_516_int == var_531_int; // 0x15ce Eq
	if(var_532_bool == 0) goto Label_5617; // 0x15cf JumpB
	var_533_int = 0; // 0x15d0 PushV
	func_5265(var_533_int); // 0x15d1 NEW_2
	var_524_int = var_533_int; // 0x15d2 Mov
	var_525_int = 0; // 0x15d4 MovI
	var_526_int = 1; // 0x15d5 MovI
	
Label_5590:
	var_534_bool = var_526_int <= var_524_int; // 0x15d6 LE
	if(var_534_bool == 0) goto Label_5615; // 0x15d7 JumpB
	var_527_string = "Price"; // 0x15d8 MovS
	var_535_int = 1; // 0x15d9 PushI
	var_536_bool = var_526_int != var_535_int; // 0x15da Neq
	if(var_536_bool == 0) goto Label_5597; // 0x15db JumpB
	var_527_string = var_527_string + var_526_int; // 0x15dc Add2
	
Label_5597:
	var_537_int = 0; var_538_object = Obj(); // 0x15dd PushV
	var_538_object = var_515_object; // 0x15de Mov
	func_5575(var_538_object); // 0x15df NEW_2
	HasInvItemProperty(var_528_bool, var_537_int, var_527_string); // 0x15e1 Func
	var_541_bool = var_528_bool == 0; // 0x15e3 Not
	if(var_541_bool == 0) goto Label_5606; // 0x15e4 JumpB
	goto Label_5612; // 0x15e5 Jump
	
Label_5612:
	var_542_int = 1; // 0x15ec PushI
	var_526_int = var_526_int + var_542_int; // 0x15ed Add2
	goto Label_5590; // 0x15ee Jump
	
Label_5606:
	var_543_int = 0; var_544_object = Obj(); // 0x15e6 PushV
	var_544_object = var_515_object; // 0x15e7 Mov
	func_5575(var_544_object); // 0x15e8 NEW_2
	GetInvItemProperty(var_525_int, var_543_int, var_527_string); // 0x15ea Func
	
Label_5615:
	var_514_int = var_525_int; // 0x15ef Mov
	return 14; // 0x15f0 Return
	
Label_5617:
	var_545_int = 0; var_546_object = Obj(); // 0x15f1 PushV
	var_546_object = var_515_object; // 0x15f2 Mov
	func_5575(var_546_object); // 0x15f3 NEW_2
	var_547_string = "BarterPrice"; // 0x15f5 PushS
	var_548_int = var_547_string + var_516_int; // 0x15f6 Add
	HasInvItemProperty(var_529_bool, var_545_int, var_548_int); // 0x15f7 Func
	var_549_bool = var_529_bool == 0; // 0x15f9 Not
	if(var_549_bool == 0) goto Label_5629; // 0x15fa JumpB
	var_514_int = 0; // 0x15fb MovI
	return 14; // 0x15fc Return
	
Label_5629:
	var_550_int = 0; var_551_object = Obj(); // 0x15fd PushV
	var_551_object = var_515_object; // 0x15fe Mov
	func_5575(var_551_object); // 0x15ff NEW_2
	var_552_string = "BarterPrice"; // 0x1601 PushS
	var_553_int = var_552_string + var_516_int; // 0x1602 Add
	GetInvItemProperty(var_530_int, var_550_int, var_553_int); // 0x1603 Func
	var_554_int = 0; // 0x1605 PushI
	var_555_bool = var_530_int > var_554_int; // 0x1606 GT
	if(var_555_bool == 0) goto Label_5642; // 0x1607 JumpB
	var_514_int = var_530_int; // 0x1608 Mov
	return 14; // 0x1609 Return
	
Label_5642:
	var_514_int = -var_530_int; // 0x160a Neg2
	return 14; // 0x160b Return
}


func_5077(var_285_string)
{
	var_286_bool = 0; var_287_float = 0; var_288_float = 0; var_289_bool = 0; var_290_float = 0; var_291_float = 0; // 0x13d5 PushV
	lshHasAnimation(var_289_bool, var_285_string); // 0x13d6 Func
	var_292_bool = var_289_bool; // 0x13d8 Push
	if(var_292_bool == 0) goto Label_5088; // 0x13d9 JumpB
	lshGetAnimTimes(var_285_string, var_290_float, var_291_float); // 0x13da Func
	var_293_bool = 0; // 0x13dc PushB
	lshPlayAnimation(var_290_float, var_291_float, var_293_bool); // 0x13dd Func
	goto Label_5092; // 0x13df Jump
	
Label_5092:
	return 6; // 0x13e4 Return
	
Label_5088:
	var_294_string = "Can't find lsh animation : "; // 0x13e0 PushS
	var_295_int = var_294_string + var_285_string; // 0x13e1 Add
	Trace(var_295_int); // 0x13e2 Func
}


func_6106(var_61_int)
{
	var_63_bool = 0; // 0x17db PushV
	func_6557(var_63_bool); // 0x17dc NEW_2
	if(var_63_bool == 0) goto Label_6113; // 0x17de JumpB
	var_61_int = 2; // 0x17df MovI
	goto Label_6114; // 0x17e0 Jump
	
Label_6114:
	return 0; // 0x17e2 Return
	
Label_6113:
	var_61_int = 0; // 0x17e1 MovI
}


func_3042(var_2_object)
{
	var_19_int = 110; // 0xbe2 PushI
	KillTimer(var_19_int); // 0xbe3 Func
	var_2_object = 0; // 0xbe5 TMovB
	func_3178(var_17_object, var_18_bool); // 0xbe7 NEW_2
	return 0; // 0xbe9 Return
}


func_6115(var_60_object)
{
	var_61_object = Obj(); // 0x17e4 PushV
	var_61_object = var_60_object; // 0x17e5 Mov
	TaskCall(5); // 0x17e6 TaskCall
	func_3450(var_62_object, var_61_object); // 0x17e7 NEW_2
	TaskReturn(); // 0x17e8 TaskReturn
	return 0; // 0x17ea Return
}


func_5093(var_134_string, var_135_bool)
{
	var_138_bool = 0; var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_float = 0; var_143_float = 0; // 0x13e5 PushV
	lshHasAnimation(var_141_bool, var_134_string); // 0x13e6 Func
	var_144_bool = var_141_bool; // 0x13e8 Push
	if(var_144_bool == 0) goto Label_5103; // 0x13e9 JumpB
	lshGetAnimTimes(var_134_string, var_142_float, var_143_float); // 0x13ea Func
	lshPlayAnimation(var_142_float, var_143_float, var_135_bool); // 0x13ec Func
	goto Label_5107; // 0x13ee Jump
	
Label_5107:
	return 6; // 0x13f3 Return
	
Label_5103:
	var_145_string = "Can't find lsh animation : "; // 0x13ef PushS
	var_146_int = var_145_string + var_134_string; // 0x13f0 Add
	Trace(var_146_int); // 0x13f1 Func
}


func_3050(var_2_object)
{
	var_68_int = 110; // 0xbea PushI
	KillTimer(var_68_int); // 0xbeb Func
	var_2_object = 0; // 0xbed TMovB
	func_3185(var_22_bool, var_23_int); // 0xbef NEW_2
	return 0; // 0xbf1 Return
}


func_6123(var_88_int, var_89_object)
{
	var_90_bool = 0; var_91_object = Obj(); // 0x17ec PushV
	var_91_object = var_89_object; // 0x17ed Mov
	func_4824(var_90_bool, var_91_object); // 0x17ee NEW_2
	if(var_90_bool == 0) goto Label_6131; // 0x17f0 JumpB
	var_88_int = 2; // 0x17f1 MovI
	goto Label_6132; // 0x17f2 Jump
	
Label_6132:
	return 0; // 0x17f4 Return
	
Label_6131:
	var_88_int = 0; // 0x17f3 MovI
}


func_5108(var_22_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_cvector = CVector(0,0,0); // 0x13f4 PushV
	GetEyesHeight(var_25_float); // 0x13f5 ObjFunc
	var_26_cvector = CVector(0.0, 0.0, 0.0); // 0x13f7 MovV
	var_27_float = GetByIndex(var_26_cvector, 1); // 0x13f8 PushE
	var_27_float = var_25_float; // 0x13f9 Mov
	SetByIndex(var_26_cvector, 1) = var_27_float; // 0x13fa PopE
	var_28_string = "head"; // 0x13fb PushS
	LookAsync(var_22_object, var_28_string, var_26_cvector); // 0x13fc Func
	return 4; // 0x13fe Return
}


func_6133(var_181_object)
{
	var_182_object = Obj(); // 0x17f6 PushV
	var_182_object = var_181_object; // 0x17f7 Mov
	TaskCall(6); // 0x17f8 TaskCall
	func_3725(var_182_object); // 0x17f9 NEW_2
	TaskReturn(); // 0x17fa TaskReturn
	return 0; // 0x17fc Return
}


func_3067(var_2_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; // 0xbfb PushV
	var_24_bool = 0; var_25_object = Obj(); // 0xbfc PushV
	var_25_object = var_19_object; // 0xbfd Mov
	func_4824(var_24_bool, var_25_object); // 0xbfe NEW_2
	var_58_bool = var_24_bool == 0; // 0xc00 Not
	if(var_58_bool == 0) goto Label_3075; // 0xc01 JumpB
	return 4; // 0xc02 Return
	
Label_3075:
	var_59_object = var_2_object; // 0xc03 PushT
	if(var_59_object == 0) goto Label_3078; // 0xc04 JumpB
	return 4; // 0xc05 Return
	
Label_3078:
	IsPlayerActor(var_19_object, var_22_bool); // 0xc06 Func
	var_60_bool = var_22_bool == 0; // 0xc08 Not
	if(var_60_bool == 0) goto Label_3083; // 0xc09 JumpB
	return 4; // 0xc0a Return
	
Label_3083:
	var_61_int = 0; var_62_object = Obj(); // 0xc0b PushV
	var_62_object = var_19_object; // 0xc0c Mov
	func_6106(var_62_object); // 0xc0d NEW_2
	var_23_int = var_61_int; // 0xc0e Mov
	var_64_int = 0; // 0xc10 PushI
	var_65_bool = var_23_int > var_64_int; // 0xc11 GT
	if(var_65_bool == 0) goto Label_3106; // 0xc12 JumpB
	var_66_int = 1; // 0xc13 PushI
	var_67_bool = var_23_int > var_66_int; // 0xc14 GT
	if(var_67_bool == 0) goto Label_3097; // 0xc15 JumpB
	func_3050(var_23_int); // 0xc17 NEW_2
	
Label_3097:
	var_69_object = Obj(); // 0xc19 PushV
	var_69_object = var_19_object; // 0xc1a Mov
	func_6115(var_69_object); // 0xc1b NEW_2
	var_2_object = 1; // 0xc1d TMovB
	var_134_int = 110; // 0xc1e PushI
	var_135_float = 10.0; // 0xc1f PushF
	SetTimer(var_134_int, var_135_float); // 0xc20 Func
	
Label_3106:
	return 4; // 0xc22 Return
}


func_6141(var_34_bool, var_35_object, var_36_bool)
{
	var_37_string = ""; var_38_string = ""; var_39_string = ""; var_40_string = ""; // 0x17fd PushV
	var_41_bool = 0; var_42_object = Obj(); var_43_string = ""; // 0x17fe PushV
	var_42_object = var_35_object; // 0x17ff Mov
	var_43_string = "class"; // 0x1800 MovS
	func_4698(var_41_bool, var_42_object, var_43_string); // 0x1801 NEW_2
	var_50_bool = var_41_bool == 0; // 0x1803 Not
	if(var_50_bool == 0) goto Label_6151; // 0x1804 JumpB
	var_34_bool = 0; // 0x1805 MovB
	return 4; // 0x1806 Return
	
Label_6151:
	var_51_string = "class"; // 0x1807 PushS
	GetProperty(var_51_string, var_39_string); // 0x1808 Func
	var_52_string = "class"; // 0x180a PushS
	GetProperty(var_52_string, var_40_string); // 0x180b ObjFunc
	var_53_bool = 0; // 0x180d PushV
	var_53_bool = 0; // 0x180e MovB
	var_54_bool = var_36_bool == 0; // 0x180f Not
	if(var_54_bool == 0) goto Label_6164; // 0x1810 JumpB
	var_55_bool = var_39_string == var_40_string; // 0x1811 Eq
	if(var_55_bool == 0) goto Label_6164; // 0x1812 JumpB
	var_53_bool = 1; // 0x1813 MovB
	
Label_6164:
	if(var_53_bool == 0) goto Label_6167; // 0x1814 JumpB
	var_34_bool = 1; // 0x1815 MovB
	return 4; // 0x1816 Return
	
Label_6167:
	var_56_string = "rat"; // 0x1817 PushS
	var_57_bool = var_40_string == var_56_string; // 0x1818 Eq
	if(var_57_bool == 0) goto Label_6173; // 0x1819 JumpB
	var_34_bool = 0; // 0x181a MovB
	return 4; // 0x181b Return
	
Label_6173:
	var_58_string = "rat_big"; // 0x181d PushS
	var_59_bool = var_40_string == var_58_string; // 0x181e Eq
	if(var_59_bool == 0) goto Label_6179; // 0x181f JumpB
	var_34_bool = 0; // 0x1820 MovB
	return 4; // 0x1821 Return
	
Label_6179:
	var_60_string = "dog"; // 0x1823 PushS
	var_61_bool = var_40_string == var_60_string; // 0x1824 Eq
	if(var_61_bool == 0) goto Label_6185; // 0x1825 JumpB
	var_34_bool = 0; // 0x1826 MovB
	return 4; // 0x1827 Return
	
Label_6185:
	var_62_string = "grabitel"; // 0x1829 PushS
	var_63_bool = var_40_string == var_62_string; // 0x182a Eq
	if(var_63_bool == 0) goto Label_6191; // 0x182b JumpB
	var_34_bool = 0; // 0x182c MovB
	return 4; // 0x182d Return
	
Label_6191:
	var_64_string = "bomber"; // 0x182f PushS
	var_65_bool = var_40_string == var_64_string; // 0x1830 Eq
	if(var_65_bool == 0) goto Label_6197; // 0x1831 JumpB
	var_34_bool = 0; // 0x1832 MovB
	return 4; // 0x1833 Return
	
Label_6197:
	var_66_string = "sanitar"; // 0x1835 PushS
	var_67_bool = var_40_string == var_66_string; // 0x1836 Eq
	if(var_67_bool == 0) goto Label_6203; // 0x1837 JumpB
	var_34_bool = 0; // 0x1838 MovB
	return 4; // 0x1839 Return
	
Label_6203:
	var_68_string = "hunter"; // 0x183b PushS
	var_69_bool = var_40_string == var_68_string; // 0x183c Eq
	if(var_69_bool == 0) goto Label_6209; // 0x183d JumpB
	var_34_bool = 0; // 0x183e MovB
	return 4; // 0x183f Return
	
Label_6209:
	var_70_string = "soldier"; // 0x1841 PushS
	var_71_bool = var_40_string == var_70_string; // 0x1842 Eq
	if(var_71_bool == 0) goto Label_6214; // 0x1843 JumpB
	var_34_bool = 0; // 0x1844 MovB
	return 4; // 0x1845 Return
	
Label_6214:
	var_34_bool = 1; // 0x1846 MovB
	return 4; // 0x1847 Return
}


func_5119()
{
	var_21_bool = 0; // 0x13ff PushV
	func_6533(var_21_bool); // 0x1400 NEW_2
	if(var_21_bool == 0) goto Label_5125; // 0x1402 JumpB
	lshStopSpeech(); // 0x1403 Func
	
Label_5125:
	return 0; // 0x1405 Return
}


