task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 1; // 0x270 PushI
	if(var_19_int == 0) goto Label_2674; // 0x271 JumpB
	func_4791(); // 0x273 NEW_2
	var_21_int = 40087; // 0x275 PushI
	var_22_bool = var_18_bool == var_21_int; // 0x276 Eq
	if(var_22_bool == 0) goto Label_637; // 0x277 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x278 PushV
	var_23_object = var_1_object; // 0x279 MovT
	var_24_object = var_0_object; // 0x27a MovT
	func_4966(); // 0x27b NEW_2
	
Label_637:
	var_26_int = 45510; // 0x27d PushI
	var_27_bool = var_18_bool == var_26_int; // 0x27e Eq
	if(var_27_bool == 0) goto Label_645; // 0x27f JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x280 PushV
	var_28_object = var_1_object; // 0x281 MovT
	var_29_object = var_0_object; // 0x282 MovT
	func_4966(); // 0x283 NEW_2
	
Label_645:
	var_30_int = 45517; // 0x285 PushI
	var_31_bool = var_18_bool == var_30_int; // 0x286 Eq
	if(var_31_bool == 0) goto Label_653; // 0x287 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x288 PushV
	var_32_object = var_1_object; // 0x289 MovT
	var_33_object = var_0_object; // 0x28a MovT
	func_4966(); // 0x28b NEW_2
	
Label_653:
	var_34_int = 40085; // 0x28d PushI
	var_35_bool = var_18_bool == var_34_int; // 0x28e Eq
	if(var_35_bool == 0) goto Label_661; // 0x28f JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x290 PushV
	var_36_object = var_1_object; // 0x291 MovT
	var_37_object = var_0_object; // 0x292 MovT
	func_4966(); // 0x293 NEW_2
	
Label_661:
	var_38_int = 40086; // 0x295 PushI
	var_39_bool = var_18_bool == var_38_int; // 0x296 Eq
	if(var_39_bool == 0) goto Label_669; // 0x297 JumpB
	var_40_object = Obj(); var_41_object = Obj(); // 0x298 PushV
	var_40_object = var_1_object; // 0x299 MovT
	var_41_object = var_0_object; // 0x29a MovT
	func_4966(); // 0x29b NEW_2
	
Label_669:
	var_42_int = 45493; // 0x29d PushI
	var_43_bool = var_17_object == var_42_int; // 0x29e Eq
	if(var_43_bool == 0) goto Label_1161; // 0x29f JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x2a0 PushV
	var_45_object = var_1_object; // 0x2a1 MovT
	func_4995(var_45_object); // 0x2a2 NEW_2
	if(var_44_bool == 0) goto Label_915; // 0x2a4 JumpB
	var_52_string = ""; // 0x2a5 PushV
	var_52_string = "Neutral"; // 0x2a6 MovS
	func_601(var_18_bool, var_52_string); // 0x2a7 NEW_2
	var_69_int = 543041; // 0x2a9 PushI
	SetMessage(var_69_int); // 0x2aa TObjFunc
	ClearReplies(); // 0x2ac TObjFunc
	var_70_bool = 0; // 0x2ae PushV
	var_70_bool = 0; // 0x2af MovB
	var_71_bool = 0; // 0x2b0 PushV
	var_71_bool = 0; // 0x2b1 MovB
	var_72_bool = 0; var_73_object = Obj(); // 0x2b2 PushV
	var_73_object = var_1_object; // 0x2b3 MovT
	func_5027(var_72_bool, var_73_object); // 0x2b4 NEW_2
	var_83_bool = var_72_bool == 0; // 0x2b6 Not
	if(var_83_bool == 0) goto Label_703; // 0x2b7 JumpB
	var_84_bool = 0; var_85_object = Obj(); // 0x2b8 PushV
	var_85_object = var_1_object; // 0x2b9 MovT
	func_5037(var_84_bool, var_85_object); // 0x2ba NEW_2
	var_90_bool = var_84_bool == 0; // 0x2bc Not
	if(var_90_bool == 0) goto Label_703; // 0x2bd JumpB
	var_71_bool = 1; // 0x2be MovB
	
Label_703:
	if(var_71_bool == 0) goto Label_710; // 0x2bf JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x2c0 PushV
	var_92_object = var_1_object; // 0x2c1 MovT
	func_5007(var_91_bool, var_92_object); // 0x2c2 NEW_2
	if(var_91_bool == 0) goto Label_710; // 0x2c4 JumpB
	var_70_bool = 1; // 0x2c5 MovB
	
Label_710:
	if(var_70_bool == 0) goto Label_716; // 0x2c6 JumpB
	var_97_int = 543044; // 0x2c7 PushI
	var_98_int = 45498; // 0x2c8 PushI
	var_99_int = 45496; // 0x2c9 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x2ca TObjFunc
	
Label_716:
	var_100_bool = 0; // 0x2cc PushV
	var_100_bool = 1; // 0x2cd MovB
	var_101_bool = 0; // 0x2ce PushV
	var_101_bool = 1; // 0x2cf MovB
	var_102_bool = 0; // 0x2d0 PushV
	var_102_bool = 1; // 0x2d1 MovB
	var_103_bool = 0; var_104_object = Obj(); // 0x2d2 PushV
	var_104_object = var_1_object; // 0x2d3 MovT
	func_5097(var_103_bool, var_104_object); // 0x2d4 NEW_2
	if(var_103_bool == 0) goto Label_733; // 0x2d6 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x2d7 PushV
	var_110_object = var_1_object; // 0x2d8 MovT
	func_5107(var_109_bool, var_110_object); // 0x2d9 NEW_2
	if(var_109_bool == 0) goto Label_733; // 0x2db JumpB
	var_102_bool = 0; // 0x2dc MovB
	
Label_733:
	if(var_102_bool == 0) goto Label_740; // 0x2dd JumpB
	var_115_bool = 0; var_116_object = Obj(); // 0x2de PushV
	var_116_object = var_1_object; // 0x2df MovT
	func_5117(var_115_bool, var_116_object); // 0x2e0 NEW_2
	if(var_115_bool == 0) goto Label_740; // 0x2e2 JumpB
	var_101_bool = 0; // 0x2e3 MovB
	
Label_740:
	if(var_101_bool == 0) goto Label_747; // 0x2e4 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x2e5 PushV
	var_122_object = var_1_object; // 0x2e6 MovT
	func_5127(var_121_bool, var_122_object); // 0x2e7 NEW_2
	if(var_121_bool == 0) goto Label_747; // 0x2e9 JumpB
	var_100_bool = 0; // 0x2ea MovB
	
Label_747:
	if(var_100_bool == 0) goto Label_753; // 0x2eb JumpB
	var_127_int = 543057; // 0x2ec PushI
	var_128_int = 45513; // 0x2ed PushI
	var_129_int = 45512; // 0x2ee PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x2ef TObjFunc
	
Label_753:
	var_130_bool = 0; // 0x2f1 PushV
	var_130_bool = 1; // 0x2f2 MovB
	var_131_bool = 0; var_132_object = Obj(); // 0x2f3 PushV
	var_132_object = var_1_object; // 0x2f4 MovT
	func_5077(var_131_bool, var_132_object); // 0x2f5 NEW_2
	if(var_131_bool == 0) goto Label_766; // 0x2f7 JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x2f8 PushV
	var_138_object = var_1_object; // 0x2f9 MovT
	func_5087(var_137_bool, var_138_object); // 0x2fa NEW_2
	if(var_137_bool == 0) goto Label_766; // 0x2fc JumpB
	var_130_bool = 0; // 0x2fd MovB
	
Label_766:
	if(var_130_bool == 0) goto Label_772; // 0x2fe JumpB
	var_143_int = 543063; // 0x2ff PushI
	var_144_int = 45520; // 0x300 PushI
	var_145_int = 45518; // 0x301 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x302 TObjFunc
	
Label_772:
	var_146_bool = 0; var_147_object = Obj(); // 0x304 PushV
	var_147_object = var_1_object; // 0x305 MovT
	func_5007(var_146_bool, var_147_object); // 0x306 NEW_2
	if(var_146_bool == 0) goto Label_782; // 0x308 JumpB
	var_148_int = 538210; // 0x309 PushI
	var_149_int = -1; // 0x30a PushI
	var_150_int = 40087; // 0x30b PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x30c TObjFunc
	
Label_782:
	var_151_bool = 0; var_152_object = Obj(); // 0x30e PushV
	var_152_object = var_1_object; // 0x30f MovT
	func_5007(var_151_bool, var_152_object); // 0x310 NEW_2
	if(var_151_bool == 0) goto Label_792; // 0x312 JumpB
	var_153_int = 543042; // 0x313 PushI
	var_154_int = -1; // 0x314 PushI
	var_155_int = 45494; // 0x315 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x316 TObjFunc
	
Label_792:
	var_156_bool = 0; var_157_object = Obj(); // 0x318 PushV
	var_157_object = var_1_object; // 0x319 MovT
	func_5007(var_156_bool, var_157_object); // 0x31a NEW_2
	if(var_156_bool == 0) goto Label_802; // 0x31c JumpB
	var_158_int = 543043; // 0x31d PushI
	var_159_int = -1; // 0x31e PushI
	var_160_int = 45495; // 0x31f PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x320 TObjFunc
	
Label_802:
	var_161_bool = 0; // 0x322 PushV
	var_161_bool = 1; // 0x323 MovB
	var_162_bool = 0; // 0x324 PushV
	var_162_bool = 1; // 0x325 MovB
	var_163_bool = 0; var_164_object = Obj(); // 0x326 PushV
	var_164_object = var_1_object; // 0x327 MovT
	func_5077(var_163_bool, var_164_object); // 0x328 NEW_2
	if(var_163_bool == 0) goto Label_817; // 0x32a JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x32b PushV
	var_166_object = var_1_object; // 0x32c MovT
	func_5087(var_165_bool, var_166_object); // 0x32d NEW_2
	if(var_165_bool == 0) goto Label_817; // 0x32f JumpB
	var_162_bool = 0; // 0x330 MovB
	
Label_817:
	if(var_162_bool == 0) goto Label_824; // 0x331 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x332 PushV
	var_168_object = var_1_object; // 0x333 MovT
	func_5097(var_167_bool, var_168_object); // 0x334 NEW_2
	if(var_167_bool == 0) goto Label_824; // 0x336 JumpB
	var_161_bool = 0; // 0x337 MovB
	
Label_824:
	if(var_161_bool == 0) goto Label_830; // 0x338 JumpB
	var_169_int = 543055; // 0x339 PushI
	var_170_int = -1; // 0x33a PushI
	var_171_int = 45510; // 0x33b PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x33c TObjFunc
	
Label_830:
	var_172_bool = 0; // 0x33e PushV
	var_172_bool = 1; // 0x33f MovB
	var_173_bool = 0; var_174_object = Obj(); // 0x340 PushV
	var_174_object = var_1_object; // 0x341 MovT
	func_5077(var_173_bool, var_174_object); // 0x342 NEW_2
	if(var_173_bool == 0) goto Label_843; // 0x344 JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0x345 PushV
	var_176_object = var_1_object; // 0x346 MovT
	func_5087(var_175_bool, var_176_object); // 0x347 NEW_2
	if(var_175_bool == 0) goto Label_843; // 0x349 JumpB
	var_172_bool = 0; // 0x34a MovB
	
Label_843:
	if(var_172_bool == 0) goto Label_849; // 0x34b JumpB
	var_177_int = 543056; // 0x34c PushI
	var_178_int = -1; // 0x34d PushI
	var_179_int = 45511; // 0x34e PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x34f TObjFunc
	
Label_849:
	var_180_bool = 0; // 0x351 PushV
	var_180_bool = 1; // 0x352 MovB
	var_181_bool = 0; // 0x353 PushV
	var_181_bool = 1; // 0x354 MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x355 PushV
	var_183_object = var_1_object; // 0x356 MovT
	func_5107(var_182_bool, var_183_object); // 0x357 NEW_2
	if(var_182_bool == 0) goto Label_864; // 0x359 JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0x35a PushV
	var_185_object = var_1_object; // 0x35b MovT
	func_5117(var_184_bool, var_185_object); // 0x35c NEW_2
	if(var_184_bool == 0) goto Label_864; // 0x35e JumpB
	var_181_bool = 0; // 0x35f MovB
	
Label_864:
	if(var_181_bool == 0) goto Label_871; // 0x360 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x361 PushV
	var_187_object = var_1_object; // 0x362 MovT
	func_5127(var_186_bool, var_187_object); // 0x363 NEW_2
	if(var_186_bool == 0) goto Label_871; // 0x365 JumpB
	var_180_bool = 0; // 0x366 MovB
	
Label_871:
	if(var_180_bool == 0) goto Label_877; // 0x367 JumpB
	var_188_int = 543062; // 0x368 PushI
	var_189_int = -1; // 0x369 PushI
	var_190_int = 45517; // 0x36a PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x36b TObjFunc
	
Label_877:
	var_191_bool = 0; // 0x36d PushV
	var_191_bool = 1; // 0x36e MovB
	var_192_bool = 0; // 0x36f PushV
	var_192_bool = 1; // 0x370 MovB
	var_193_bool = 0; // 0x371 PushV
	var_193_bool = 1; // 0x372 MovB
	var_194_bool = 0; var_195_object = Obj(); // 0x373 PushV
	var_195_object = var_1_object; // 0x374 MovT
	func_5097(var_194_bool, var_195_object); // 0x375 NEW_2
	if(var_194_bool == 0) goto Label_894; // 0x377 JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x378 PushV
	var_197_object = var_1_object; // 0x379 MovT
	func_5107(var_196_bool, var_197_object); // 0x37a NEW_2
	if(var_196_bool == 0) goto Label_894; // 0x37c JumpB
	var_193_bool = 0; // 0x37d MovB
	
Label_894:
	if(var_193_bool == 0) goto Label_901; // 0x37e JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x37f PushV
	var_199_object = var_1_object; // 0x380 MovT
	func_5117(var_198_bool, var_199_object); // 0x381 NEW_2
	if(var_198_bool == 0) goto Label_901; // 0x383 JumpB
	var_192_bool = 0; // 0x384 MovB
	
Label_901:
	if(var_192_bool == 0) goto Label_908; // 0x385 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x386 PushV
	var_201_object = var_1_object; // 0x387 MovT
	func_5127(var_200_bool, var_201_object); // 0x388 NEW_2
	if(var_200_bool == 0) goto Label_908; // 0x38a JumpB
	var_191_bool = 0; // 0x38b MovB
	
Label_908:
	if(var_191_bool == 0) goto Label_914; // 0x38c JumpB
	var_202_int = 543064; // 0x38d PushI
	var_203_int = -1; // 0x38e PushI
	var_204_int = 45519; // 0x38f PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x390 TObjFunc
	
Label_914:
	return 0; // 0x392 Return
	
Label_915:
	var_205_string = ""; // 0x393 PushV
	var_205_string = "Neutral"; // 0x394 MovS
	func_601(var_18_bool, var_205_string); // 0x395 NEW_2
	var_206_int = 538207; // 0x397 PushI
	SetMessage(var_206_int); // 0x398 TObjFunc
	ClearReplies(); // 0x39a TObjFunc
	var_207_bool = 0; var_208_object = Obj(); // 0x39c PushV
	var_208_object = var_1_object; // 0x39d MovT
	func_4971(var_208_object); // 0x39e NEW_2
	if(var_207_bool == 0) goto Label_934; // 0x3a0 JumpB
	var_213_int = 538208; // 0x3a1 PushI
	var_214_int = -1; // 0x3a2 PushI
	var_215_int = 40085; // 0x3a3 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x3a4 TObjFunc
	
Label_934:
	var_216_bool = 0; var_217_object = Obj(); // 0x3a6 PushV
	var_217_object = var_1_object; // 0x3a7 MovT
	func_4983(var_217_object); // 0x3a8 NEW_2
	if(var_216_bool == 0) goto Label_944; // 0x3aa JumpB
	var_222_int = 538209; // 0x3ab PushI
	var_223_int = -1; // 0x3ac PushI
	var_224_int = 40086; // 0x3ad PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x3ae TObjFunc
	
Label_944:
	var_225_bool = 0; // 0x3b0 PushV
	var_225_bool = 0; // 0x3b1 MovB
	var_226_bool = 0; var_227_object = Obj(); // 0x3b2 PushV
	var_227_object = var_1_object; // 0x3b3 MovT
	func_4971(var_227_object); // 0x3b4 NEW_2
	if(var_226_bool == 0) goto Label_957; // 0x3b6 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x3b7 PushV
	var_229_object = var_1_object; // 0x3b8 MovT
	func_5027(var_228_bool, var_229_object); // 0x3b9 NEW_2
	if(var_228_bool == 0) goto Label_957; // 0x3bb JumpB
	var_225_bool = 1; // 0x3bc MovB
	
Label_957:
	if(var_225_bool == 0) goto Label_963; // 0x3bd JumpB
	var_230_int = 538211; // 0x3be PushI
	var_231_int = 40089; // 0x3bf PushI
	var_232_int = 40088; // 0x3c0 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x3c1 TObjFunc
	
Label_963:
	var_233_bool = 0; // 0x3c3 PushV
	var_233_bool = 0; // 0x3c4 MovB
	var_234_bool = 0; var_235_object = Obj(); // 0x3c5 PushV
	var_235_object = var_1_object; // 0x3c6 MovT
	func_4971(var_235_object); // 0x3c7 NEW_2
	if(var_234_bool == 0) goto Label_976; // 0x3c9 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x3ca PushV
	var_237_object = var_1_object; // 0x3cb MovT
	func_5027(var_236_bool, var_237_object); // 0x3cc NEW_2
	if(var_236_bool == 0) goto Label_976; // 0x3ce JumpB
	var_233_bool = 1; // 0x3cf MovB
	
Label_976:
	if(var_233_bool == 0) goto Label_982; // 0x3d0 JumpB
	var_238_int = 538222; // 0x3d1 PushI
	var_239_int = 40100; // 0x3d2 PushI
	var_240_int = 40099; // 0x3d3 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x3d4 TObjFunc
	
Label_982:
	var_241_bool = 0; // 0x3d6 PushV
	var_241_bool = 0; // 0x3d7 MovB
	var_242_bool = 0; var_243_object = Obj(); // 0x3d8 PushV
	var_243_object = var_1_object; // 0x3d9 MovT
	func_4971(var_243_object); // 0x3da NEW_2
	if(var_242_bool == 0) goto Label_995; // 0x3dc JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x3dd PushV
	var_245_object = var_1_object; // 0x3de MovT
	func_5037(var_244_bool, var_245_object); // 0x3df NEW_2
	if(var_244_bool == 0) goto Label_995; // 0x3e1 JumpB
	var_241_bool = 1; // 0x3e2 MovB
	
Label_995:
	if(var_241_bool == 0) goto Label_1001; // 0x3e3 JumpB
	var_246_int = 538235; // 0x3e4 PushI
	var_247_int = 40114; // 0x3e5 PushI
	var_248_int = 40113; // 0x3e6 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x3e7 TObjFunc
	
Label_1001:
	var_249_bool = 0; // 0x3e9 PushV
	var_249_bool = 0; // 0x3ea MovB
	var_250_bool = 0; var_251_object = Obj(); // 0x3eb PushV
	var_251_object = var_1_object; // 0x3ec MovT
	func_4971(var_251_object); // 0x3ed NEW_2
	if(var_250_bool == 0) goto Label_1014; // 0x3ef JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x3f0 PushV
	var_253_object = var_1_object; // 0x3f1 MovT
	func_5047(var_252_bool, var_253_object); // 0x3f2 NEW_2
	if(var_252_bool == 0) goto Label_1014; // 0x3f4 JumpB
	var_249_bool = 1; // 0x3f5 MovB
	
Label_1014:
	if(var_249_bool == 0) goto Label_1020; // 0x3f6 JumpB
	var_258_int = 538253; // 0x3f7 PushI
	var_259_int = 40135; // 0x3f8 PushI
	var_260_int = 40134; // 0x3f9 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x3fa TObjFunc
	
Label_1020:
	var_261_bool = 0; // 0x3fc PushV
	var_261_bool = 0; // 0x3fd MovB
	var_262_bool = 0; var_263_object = Obj(); // 0x3fe PushV
	var_263_object = var_1_object; // 0x3ff MovT
	func_4971(var_263_object); // 0x400 NEW_2
	if(var_262_bool == 0) goto Label_1033; // 0x402 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x403 PushV
	var_265_object = var_1_object; // 0x404 MovT
	func_5057(var_264_bool, var_265_object); // 0x405 NEW_2
	if(var_264_bool == 0) goto Label_1033; // 0x407 JumpB
	var_261_bool = 1; // 0x408 MovB
	
Label_1033:
	if(var_261_bool == 0) goto Label_1039; // 0x409 JumpB
	var_270_int = 538272; // 0x40a PushI
	var_271_int = 40155; // 0x40b PushI
	var_272_int = 40154; // 0x40c PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x40d TObjFunc
	
Label_1039:
	var_273_bool = 0; var_274_object = Obj(); // 0x40f PushV
	var_274_object = var_1_object; // 0x410 MovT
	func_5067(var_273_bool, var_274_object); // 0x411 NEW_2
	if(var_273_bool == 0) goto Label_1049; // 0x413 JumpB
	var_279_int = 538291; // 0x414 PushI
	var_280_int = 40174; // 0x415 PushI
	var_281_int = 40173; // 0x416 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x417 TObjFunc
	
Label_1049:
	var_282_bool = 0; // 0x419 PushV
	var_282_bool = 0; // 0x41a MovB
	var_283_bool = 0; var_284_object = Obj(); // 0x41b PushV
	var_284_object = var_1_object; // 0x41c MovT
	func_4971(var_284_object); // 0x41d NEW_2
	if(var_283_bool == 0) goto Label_1062; // 0x41f JumpB
	var_285_bool = 0; var_286_object = Obj(); // 0x420 PushV
	var_286_object = var_1_object; // 0x421 MovT
	func_5077(var_285_bool, var_286_object); // 0x422 NEW_2
	if(var_285_bool == 0) goto Label_1062; // 0x424 JumpB
	var_282_bool = 1; // 0x425 MovB
	
Label_1062:
	if(var_282_bool == 0) goto Label_1068; // 0x426 JumpB
	var_287_int = 538308; // 0x427 PushI
	var_288_int = 40192; // 0x428 PushI
	var_289_int = 40191; // 0x429 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x42a TObjFunc
	
Label_1068:
	var_290_bool = 0; var_291_object = Obj(); // 0x42c PushV
	var_291_object = var_1_object; // 0x42d MovT
	func_5087(var_290_bool, var_291_object); // 0x42e NEW_2
	if(var_290_bool == 0) goto Label_1078; // 0x430 JumpB
	var_292_int = 538322; // 0x431 PushI
	var_293_int = 40206; // 0x432 PushI
	var_294_int = 40205; // 0x433 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x434 TObjFunc
	
Label_1078:
	var_295_bool = 0; var_296_object = Obj(); // 0x436 PushV
	var_296_object = var_1_object; // 0x437 MovT
	func_5017(var_295_bool, var_296_object); // 0x438 NEW_2
	if(var_295_bool == 0) goto Label_1088; // 0x43a JumpB
	var_299_int = 538332; // 0x43b PushI
	var_300_int = 40216; // 0x43c PushI
	var_301_int = 40215; // 0x43d PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x43e TObjFunc
	
Label_1088:
	var_302_bool = 0; // 0x440 PushV
	var_302_bool = 0; // 0x441 MovB
	var_303_bool = 0; var_304_object = Obj(); // 0x442 PushV
	var_304_object = var_1_object; // 0x443 MovT
	func_4971(var_304_object); // 0x444 NEW_2
	if(var_303_bool == 0) goto Label_1101; // 0x446 JumpB
	var_305_bool = 0; var_306_object = Obj(); // 0x447 PushV
	var_306_object = var_1_object; // 0x448 MovT
	func_5097(var_305_bool, var_306_object); // 0x449 NEW_2
	if(var_305_bool == 0) goto Label_1101; // 0x44b JumpB
	var_302_bool = 1; // 0x44c MovB
	
Label_1101:
	if(var_302_bool == 0) goto Label_1107; // 0x44d JumpB
	var_307_int = 538347; // 0x44e PushI
	var_308_int = 40233; // 0x44f PushI
	var_309_int = 40232; // 0x450 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x451 TObjFunc
	
Label_1107:
	var_310_bool = 0; var_311_object = Obj(); // 0x453 PushV
	var_311_object = var_1_object; // 0x454 MovT
	func_5107(var_310_bool, var_311_object); // 0x455 NEW_2
	if(var_310_bool == 0) goto Label_1117; // 0x457 JumpB
	var_312_int = 538364; // 0x458 PushI
	var_313_int = 40250; // 0x459 PushI
	var_314_int = 40249; // 0x45a PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x45b TObjFunc
	
Label_1117:
	var_315_bool = 0; // 0x45d PushV
	var_315_bool = 0; // 0x45e MovB
	var_316_bool = 0; var_317_object = Obj(); // 0x45f PushV
	var_317_object = var_1_object; // 0x460 MovT
	func_4971(var_317_object); // 0x461 NEW_2
	if(var_316_bool == 0) goto Label_1130; // 0x463 JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0x464 PushV
	var_319_object = var_1_object; // 0x465 MovT
	func_5117(var_318_bool, var_319_object); // 0x466 NEW_2
	if(var_318_bool == 0) goto Label_1130; // 0x468 JumpB
	var_315_bool = 1; // 0x469 MovB
	
Label_1130:
	if(var_315_bool == 0) goto Label_1136; // 0x46a JumpB
	var_320_int = 538375; // 0x46b PushI
	var_321_int = 40262; // 0x46c PushI
	var_322_int = 40261; // 0x46d PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x46e TObjFunc
	
Label_1136:
	var_323_bool = 0; // 0x470 PushV
	var_323_bool = 0; // 0x471 MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x472 PushV
	var_325_object = var_1_object; // 0x473 MovT
	func_4971(var_325_object); // 0x474 NEW_2
	if(var_324_bool == 0) goto Label_1149; // 0x476 JumpB
	var_326_bool = 0; var_327_object = Obj(); // 0x477 PushV
	var_327_object = var_1_object; // 0x478 MovT
	func_5117(var_326_bool, var_327_object); // 0x479 NEW_2
	if(var_326_bool == 0) goto Label_1149; // 0x47b JumpB
	var_323_bool = 1; // 0x47c MovB
	
Label_1149:
	if(var_323_bool == 0) goto Label_1155; // 0x47d JumpB
	var_328_int = 538385; // 0x47e PushI
	var_329_int = 40272; // 0x47f PushI
	var_330_int = 40271; // 0x480 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x481 TObjFunc
	
Label_1155:
	var_331_int = 538396; // 0x483 PushI
	var_332_int = -1; // 0x484 PushI
	var_333_int = 40282; // 0x485 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x486 TObjFunc
	return 0; // 0x488 Return
	
Label_1161:
	var_334_int = 40272; // 0x489 PushI
	var_335_bool = var_17_object == var_334_int; // 0x48a Eq
	if(var_335_bool == 0) goto Label_1184; // 0x48b JumpB
	var_336_string = ""; // 0x48c PushV
	var_336_string = "Neutral"; // 0x48d MovS
	func_601(var_18_bool, var_336_string); // 0x48e NEW_2
	var_337_int = 538386; // 0x490 PushI
	SetMessage(var_337_int); // 0x491 TObjFunc
	ClearReplies(); // 0x493 TObjFunc
	var_338_int = 538387; // 0x495 PushI
	var_339_int = 40274; // 0x496 PushI
	var_340_int = 40273; // 0x497 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x498 TObjFunc
	var_341_int = 538395; // 0x49a PushI
	var_342_int = -1; // 0x49b PushI
	var_343_int = 40281; // 0x49c PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x49d TObjFunc
	return 0; // 0x49f Return
	
Label_1184:
	var_344_int = 40274; // 0x4a0 PushI
	var_345_bool = var_17_object == var_344_int; // 0x4a1 Eq
	if(var_345_bool == 0) goto Label_1207; // 0x4a2 JumpB
	var_346_string = ""; // 0x4a3 PushV
	var_346_string = "Neutral"; // 0x4a4 MovS
	func_601(var_18_bool, var_346_string); // 0x4a5 NEW_2
	var_347_int = 538388; // 0x4a7 PushI
	SetMessage(var_347_int); // 0x4a8 TObjFunc
	ClearReplies(); // 0x4aa TObjFunc
	var_348_int = 538389; // 0x4ac PushI
	var_349_int = 40276; // 0x4ad PushI
	var_350_int = 40275; // 0x4ae PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x4af TObjFunc
	var_351_int = 538392; // 0x4b1 PushI
	var_352_int = 40279; // 0x4b2 PushI
	var_353_int = 40278; // 0x4b3 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x4b4 TObjFunc
	return 0; // 0x4b6 Return
	
Label_1207:
	var_354_int = 40279; // 0x4b7 PushI
	var_355_bool = var_17_object == var_354_int; // 0x4b8 Eq
	if(var_355_bool == 0) goto Label_1225; // 0x4b9 JumpB
	var_356_string = ""; // 0x4ba PushV
	var_356_string = "Neutral"; // 0x4bb MovS
	func_601(var_18_bool, var_356_string); // 0x4bc NEW_2
	var_357_int = 538393; // 0x4be PushI
	SetMessage(var_357_int); // 0x4bf TObjFunc
	ClearReplies(); // 0x4c1 TObjFunc
	var_358_int = 538394; // 0x4c3 PushI
	var_359_int = -1; // 0x4c4 PushI
	var_360_int = 40280; // 0x4c5 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x4c6 TObjFunc
	return 0; // 0x4c8 Return
	
Label_1225:
	var_361_int = 40276; // 0x4c9 PushI
	var_362_bool = var_17_object == var_361_int; // 0x4ca Eq
	if(var_362_bool == 0) goto Label_1243; // 0x4cb JumpB
	var_363_string = ""; // 0x4cc PushV
	var_363_string = "Neutral"; // 0x4cd MovS
	func_601(var_18_bool, var_363_string); // 0x4ce NEW_2
	var_364_int = 538390; // 0x4d0 PushI
	SetMessage(var_364_int); // 0x4d1 TObjFunc
	ClearReplies(); // 0x4d3 TObjFunc
	var_365_int = 538391; // 0x4d5 PushI
	var_366_int = -1; // 0x4d6 PushI
	var_367_int = 40277; // 0x4d7 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x4d8 TObjFunc
	return 0; // 0x4da Return
	
Label_1243:
	var_368_int = 40262; // 0x4db PushI
	var_369_bool = var_17_object == var_368_int; // 0x4dc Eq
	if(var_369_bool == 0) goto Label_1266; // 0x4dd JumpB
	var_370_string = ""; // 0x4de PushV
	var_370_string = "Neutral"; // 0x4df MovS
	func_601(var_18_bool, var_370_string); // 0x4e0 NEW_2
	var_371_int = 538376; // 0x4e2 PushI
	SetMessage(var_371_int); // 0x4e3 TObjFunc
	ClearReplies(); // 0x4e5 TObjFunc
	var_372_int = 538377; // 0x4e7 PushI
	var_373_int = 40264; // 0x4e8 PushI
	var_374_int = 40263; // 0x4e9 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x4ea TObjFunc
	var_375_int = 538384; // 0x4ec PushI
	var_376_int = -1; // 0x4ed PushI
	var_377_int = 40270; // 0x4ee PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x4ef TObjFunc
	return 0; // 0x4f1 Return
	
Label_1266:
	var_378_int = 40264; // 0x4f2 PushI
	var_379_bool = var_17_object == var_378_int; // 0x4f3 Eq
	if(var_379_bool == 0) goto Label_1289; // 0x4f4 JumpB
	var_380_string = ""; // 0x4f5 PushV
	var_380_string = "Neutral"; // 0x4f6 MovS
	func_601(var_18_bool, var_380_string); // 0x4f7 NEW_2
	var_381_int = 538378; // 0x4f9 PushI
	SetMessage(var_381_int); // 0x4fa TObjFunc
	ClearReplies(); // 0x4fc TObjFunc
	var_382_int = 538379; // 0x4fe PushI
	var_383_int = 40266; // 0x4ff PushI
	var_384_int = 40265; // 0x500 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x501 TObjFunc
	var_385_int = 538383; // 0x503 PushI
	var_386_int = -1; // 0x504 PushI
	var_387_int = 40269; // 0x505 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x506 TObjFunc
	return 0; // 0x508 Return
	
Label_1289:
	var_388_int = 40266; // 0x509 PushI
	var_389_bool = var_17_object == var_388_int; // 0x50a Eq
	if(var_389_bool == 0) goto Label_1312; // 0x50b JumpB
	var_390_string = ""; // 0x50c PushV
	var_390_string = "Neutral"; // 0x50d MovS
	func_601(var_18_bool, var_390_string); // 0x50e NEW_2
	var_391_int = 538380; // 0x510 PushI
	SetMessage(var_391_int); // 0x511 TObjFunc
	ClearReplies(); // 0x513 TObjFunc
	var_392_int = 538381; // 0x515 PushI
	var_393_int = -1; // 0x516 PushI
	var_394_int = 40267; // 0x517 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x518 TObjFunc
	var_395_int = 538382; // 0x51a PushI
	var_396_int = -1; // 0x51b PushI
	var_397_int = 40268; // 0x51c PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x51d TObjFunc
	return 0; // 0x51f Return
	
Label_1312:
	var_398_int = 40250; // 0x520 PushI
	var_399_bool = var_17_object == var_398_int; // 0x521 Eq
	if(var_399_bool == 0) goto Label_1340; // 0x522 JumpB
	var_400_string = ""; // 0x523 PushV
	var_400_string = "Neutral"; // 0x524 MovS
	func_601(var_18_bool, var_400_string); // 0x525 NEW_2
	var_401_int = 538365; // 0x527 PushI
	SetMessage(var_401_int); // 0x528 TObjFunc
	ClearReplies(); // 0x52a TObjFunc
	var_402_int = 538366; // 0x52c PushI
	var_403_int = 40252; // 0x52d PushI
	var_404_int = 40251; // 0x52e PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x52f TObjFunc
	var_405_int = 538370; // 0x531 PushI
	var_406_int = 40256; // 0x532 PushI
	var_407_int = 40255; // 0x533 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x534 TObjFunc
	var_408_int = 538374; // 0x536 PushI
	var_409_int = -1; // 0x537 PushI
	var_410_int = 40260; // 0x538 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x539 TObjFunc
	return 0; // 0x53b Return
	
Label_1340:
	var_411_int = 40256; // 0x53c PushI
	var_412_bool = var_17_object == var_411_int; // 0x53d Eq
	if(var_412_bool == 0) goto Label_1363; // 0x53e JumpB
	var_413_string = ""; // 0x53f PushV
	var_413_string = "Neutral"; // 0x540 MovS
	func_601(var_18_bool, var_413_string); // 0x541 NEW_2
	var_414_int = 538371; // 0x543 PushI
	SetMessage(var_414_int); // 0x544 TObjFunc
	ClearReplies(); // 0x546 TObjFunc
	var_415_int = 538372; // 0x548 PushI
	var_416_int = 40252; // 0x549 PushI
	var_417_int = 40257; // 0x54a PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x54b TObjFunc
	var_418_int = 538373; // 0x54d PushI
	var_419_int = -1; // 0x54e PushI
	var_420_int = 40259; // 0x54f PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x550 TObjFunc
	return 0; // 0x552 Return
	
Label_1363:
	var_421_int = 40252; // 0x553 PushI
	var_422_bool = var_17_object == var_421_int; // 0x554 Eq
	if(var_422_bool == 0) goto Label_1386; // 0x555 JumpB
	var_423_string = ""; // 0x556 PushV
	var_423_string = "Neutral"; // 0x557 MovS
	func_601(var_18_bool, var_423_string); // 0x558 NEW_2
	var_424_int = 538367; // 0x55a PushI
	SetMessage(var_424_int); // 0x55b TObjFunc
	ClearReplies(); // 0x55d TObjFunc
	var_425_int = 538368; // 0x55f PushI
	var_426_int = -1; // 0x560 PushI
	var_427_int = 40253; // 0x561 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x562 TObjFunc
	var_428_int = 538369; // 0x564 PushI
	var_429_int = -1; // 0x565 PushI
	var_430_int = 40254; // 0x566 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x567 TObjFunc
	return 0; // 0x569 Return
	
Label_1386:
	var_431_int = 40233; // 0x56a PushI
	var_432_bool = var_17_object == var_431_int; // 0x56b Eq
	if(var_432_bool == 0) goto Label_1409; // 0x56c JumpB
	var_433_string = ""; // 0x56d PushV
	var_433_string = "Neutral"; // 0x56e MovS
	func_601(var_18_bool, var_433_string); // 0x56f NEW_2
	var_434_int = 538348; // 0x571 PushI
	SetMessage(var_434_int); // 0x572 TObjFunc
	ClearReplies(); // 0x574 TObjFunc
	var_435_int = 538349; // 0x576 PushI
	var_436_int = 40235; // 0x577 PushI
	var_437_int = 40234; // 0x578 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x579 TObjFunc
	var_438_int = 538363; // 0x57b PushI
	var_439_int = -1; // 0x57c PushI
	var_440_int = 40248; // 0x57d PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x57e TObjFunc
	return 0; // 0x580 Return
	
Label_1409:
	var_441_int = 40235; // 0x581 PushI
	var_442_bool = var_17_object == var_441_int; // 0x582 Eq
	if(var_442_bool == 0) goto Label_1432; // 0x583 JumpB
	var_443_string = ""; // 0x584 PushV
	var_443_string = "Neutral"; // 0x585 MovS
	func_601(var_18_bool, var_443_string); // 0x586 NEW_2
	var_444_int = 538350; // 0x588 PushI
	SetMessage(var_444_int); // 0x589 TObjFunc
	ClearReplies(); // 0x58b TObjFunc
	var_445_int = 538351; // 0x58d PushI
	var_446_int = 40237; // 0x58e PushI
	var_447_int = 40236; // 0x58f PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x590 TObjFunc
	var_448_int = 538362; // 0x592 PushI
	var_449_int = -1; // 0x593 PushI
	var_450_int = 40247; // 0x594 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x595 TObjFunc
	return 0; // 0x597 Return
	
Label_1432:
	var_451_int = 40237; // 0x598 PushI
	var_452_bool = var_17_object == var_451_int; // 0x599 Eq
	if(var_452_bool == 0) goto Label_1455; // 0x59a JumpB
	var_453_string = ""; // 0x59b PushV
	var_453_string = "Neutral"; // 0x59c MovS
	func_601(var_18_bool, var_453_string); // 0x59d NEW_2
	var_454_int = 538352; // 0x59f PushI
	SetMessage(var_454_int); // 0x5a0 TObjFunc
	ClearReplies(); // 0x5a2 TObjFunc
	var_455_int = 538353; // 0x5a4 PushI
	var_456_int = 40239; // 0x5a5 PushI
	var_457_int = 40238; // 0x5a6 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x5a7 TObjFunc
	var_458_int = 538359; // 0x5a9 PushI
	var_459_int = 40245; // 0x5aa PushI
	var_460_int = 40244; // 0x5ab PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x5ac TObjFunc
	return 0; // 0x5ae Return
	
Label_1455:
	var_461_int = 40245; // 0x5af PushI
	var_462_bool = var_17_object == var_461_int; // 0x5b0 Eq
	if(var_462_bool == 0) goto Label_1473; // 0x5b1 JumpB
	var_463_string = ""; // 0x5b2 PushV
	var_463_string = "Neutral"; // 0x5b3 MovS
	func_601(var_18_bool, var_463_string); // 0x5b4 NEW_2
	var_464_int = 538360; // 0x5b6 PushI
	SetMessage(var_464_int); // 0x5b7 TObjFunc
	ClearReplies(); // 0x5b9 TObjFunc
	var_465_int = 538361; // 0x5bb PushI
	var_466_int = -1; // 0x5bc PushI
	var_467_int = 40246; // 0x5bd PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x5be TObjFunc
	return 0; // 0x5c0 Return
	
Label_1473:
	var_468_int = 40239; // 0x5c1 PushI
	var_469_bool = var_17_object == var_468_int; // 0x5c2 Eq
	if(var_469_bool == 0) goto Label_1496; // 0x5c3 JumpB
	var_470_string = ""; // 0x5c4 PushV
	var_470_string = "Neutral"; // 0x5c5 MovS
	func_601(var_18_bool, var_470_string); // 0x5c6 NEW_2
	var_471_int = 538354; // 0x5c8 PushI
	SetMessage(var_471_int); // 0x5c9 TObjFunc
	ClearReplies(); // 0x5cb TObjFunc
	var_472_int = 538355; // 0x5cd PushI
	var_473_int = -1; // 0x5ce PushI
	var_474_int = 40240; // 0x5cf PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x5d0 TObjFunc
	var_475_int = 538356; // 0x5d2 PushI
	var_476_int = 40242; // 0x5d3 PushI
	var_477_int = 40241; // 0x5d4 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x5d5 TObjFunc
	return 0; // 0x5d7 Return
	
Label_1496:
	var_478_int = 40242; // 0x5d8 PushI
	var_479_bool = var_17_object == var_478_int; // 0x5d9 Eq
	if(var_479_bool == 0) goto Label_1514; // 0x5da JumpB
	var_480_string = ""; // 0x5db PushV
	var_480_string = "Neutral"; // 0x5dc MovS
	func_601(var_18_bool, var_480_string); // 0x5dd NEW_2
	var_481_int = 538357; // 0x5df PushI
	SetMessage(var_481_int); // 0x5e0 TObjFunc
	ClearReplies(); // 0x5e2 TObjFunc
	var_482_int = 538358; // 0x5e4 PushI
	var_483_int = -1; // 0x5e5 PushI
	var_484_int = 40243; // 0x5e6 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x5e7 TObjFunc
	return 0; // 0x5e9 Return
	
Label_1514:
	var_485_int = 40216; // 0x5ea PushI
	var_486_bool = var_17_object == var_485_int; // 0x5eb Eq
	if(var_486_bool == 0) goto Label_1537; // 0x5ec JumpB
	var_487_string = ""; // 0x5ed PushV
	var_487_string = "Neutral"; // 0x5ee MovS
	func_601(var_18_bool, var_487_string); // 0x5ef NEW_2
	var_488_int = 538333; // 0x5f1 PushI
	SetMessage(var_488_int); // 0x5f2 TObjFunc
	ClearReplies(); // 0x5f4 TObjFunc
	var_489_int = 538334; // 0x5f6 PushI
	var_490_int = 40218; // 0x5f7 PushI
	var_491_int = 40217; // 0x5f8 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x5f9 TObjFunc
	var_492_int = 538346; // 0x5fb PushI
	var_493_int = -1; // 0x5fc PushI
	var_494_int = 40231; // 0x5fd PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x5fe TObjFunc
	return 0; // 0x600 Return
	
Label_1537:
	var_495_int = 40218; // 0x601 PushI
	var_496_bool = var_17_object == var_495_int; // 0x602 Eq
	if(var_496_bool == 0) goto Label_1560; // 0x603 JumpB
	var_497_string = ""; // 0x604 PushV
	var_497_string = "Neutral"; // 0x605 MovS
	func_601(var_18_bool, var_497_string); // 0x606 NEW_2
	var_498_int = 538335; // 0x608 PushI
	SetMessage(var_498_int); // 0x609 TObjFunc
	ClearReplies(); // 0x60b TObjFunc
	var_499_int = 538336; // 0x60d PushI
	var_500_int = 40220; // 0x60e PushI
	var_501_int = 40219; // 0x60f PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x610 TObjFunc
	var_502_int = 538343; // 0x612 PushI
	var_503_int = 40228; // 0x613 PushI
	var_504_int = 40227; // 0x614 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x615 TObjFunc
	return 0; // 0x617 Return
	
Label_1560:
	var_505_int = 40228; // 0x618 PushI
	var_506_bool = var_17_object == var_505_int; // 0x619 Eq
	if(var_506_bool == 0) goto Label_1578; // 0x61a JumpB
	var_507_string = ""; // 0x61b PushV
	var_507_string = "Neutral"; // 0x61c MovS
	func_601(var_18_bool, var_507_string); // 0x61d NEW_2
	var_508_int = 538344; // 0x61f PushI
	SetMessage(var_508_int); // 0x620 TObjFunc
	ClearReplies(); // 0x622 TObjFunc
	var_509_int = 538345; // 0x624 PushI
	var_510_int = 40220; // 0x625 PushI
	var_511_int = 40229; // 0x626 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x627 TObjFunc
	return 0; // 0x629 Return
	
Label_1578:
	var_512_int = 40220; // 0x62a PushI
	var_513_bool = var_17_object == var_512_int; // 0x62b Eq
	if(var_513_bool == 0) goto Label_1601; // 0x62c JumpB
	var_514_string = ""; // 0x62d PushV
	var_514_string = "Neutral"; // 0x62e MovS
	func_601(var_18_bool, var_514_string); // 0x62f NEW_2
	var_515_int = 538337; // 0x631 PushI
	SetMessage(var_515_int); // 0x632 TObjFunc
	ClearReplies(); // 0x634 TObjFunc
	var_516_int = 538338; // 0x636 PushI
	var_517_int = 40222; // 0x637 PushI
	var_518_int = 40221; // 0x638 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x639 TObjFunc
	var_519_int = 538342; // 0x63b PushI
	var_520_int = 40222; // 0x63c PushI
	var_521_int = 40225; // 0x63d PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x63e TObjFunc
	return 0; // 0x640 Return
	
Label_1601:
	var_522_int = 40222; // 0x641 PushI
	var_523_bool = var_17_object == var_522_int; // 0x642 Eq
	if(var_523_bool == 0) goto Label_1624; // 0x643 JumpB
	var_524_string = ""; // 0x644 PushV
	var_524_string = "Neutral"; // 0x645 MovS
	func_601(var_18_bool, var_524_string); // 0x646 NEW_2
	var_525_int = 538339; // 0x648 PushI
	SetMessage(var_525_int); // 0x649 TObjFunc
	ClearReplies(); // 0x64b TObjFunc
	var_526_int = 538340; // 0x64d PushI
	var_527_int = -1; // 0x64e PushI
	var_528_int = 40223; // 0x64f PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x650 TObjFunc
	var_529_int = 538341; // 0x652 PushI
	var_530_int = -1; // 0x653 PushI
	var_531_int = 40224; // 0x654 PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x655 TObjFunc
	return 0; // 0x657 Return
	
Label_1624:
	var_532_int = 40206; // 0x658 PushI
	var_533_bool = var_17_object == var_532_int; // 0x659 Eq
	if(var_533_bool == 0) goto Label_1647; // 0x65a JumpB
	var_534_string = ""; // 0x65b PushV
	var_534_string = "Neutral"; // 0x65c MovS
	func_601(var_18_bool, var_534_string); // 0x65d NEW_2
	var_535_int = 538323; // 0x65f PushI
	SetMessage(var_535_int); // 0x660 TObjFunc
	ClearReplies(); // 0x662 TObjFunc
	var_536_int = 538324; // 0x664 PushI
	var_537_int = 40208; // 0x665 PushI
	var_538_int = 40207; // 0x666 PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x667 TObjFunc
	var_539_int = 538331; // 0x669 PushI
	var_540_int = -1; // 0x66a PushI
	var_541_int = 40214; // 0x66b PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x66c TObjFunc
	return 0; // 0x66e Return
	
Label_1647:
	var_542_int = 40208; // 0x66f PushI
	var_543_bool = var_17_object == var_542_int; // 0x670 Eq
	if(var_543_bool == 0) goto Label_1670; // 0x671 JumpB
	var_544_string = ""; // 0x672 PushV
	var_544_string = "Neutral"; // 0x673 MovS
	func_601(var_18_bool, var_544_string); // 0x674 NEW_2
	var_545_int = 538325; // 0x676 PushI
	SetMessage(var_545_int); // 0x677 TObjFunc
	ClearReplies(); // 0x679 TObjFunc
	var_546_int = 538326; // 0x67b PushI
	var_547_int = 40210; // 0x67c PushI
	var_548_int = 40209; // 0x67d PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x67e TObjFunc
	var_549_int = 538330; // 0x680 PushI
	var_550_int = -1; // 0x681 PushI
	var_551_int = 40213; // 0x682 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x683 TObjFunc
	return 0; // 0x685 Return
	
Label_1670:
	var_552_int = 40210; // 0x686 PushI
	var_553_bool = var_17_object == var_552_int; // 0x687 Eq
	if(var_553_bool == 0) goto Label_1693; // 0x688 JumpB
	var_554_string = ""; // 0x689 PushV
	var_554_string = "Neutral"; // 0x68a MovS
	func_601(var_18_bool, var_554_string); // 0x68b NEW_2
	var_555_int = 538327; // 0x68d PushI
	SetMessage(var_555_int); // 0x68e TObjFunc
	ClearReplies(); // 0x690 TObjFunc
	var_556_int = 538328; // 0x692 PushI
	var_557_int = -1; // 0x693 PushI
	var_558_int = 40211; // 0x694 PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x695 TObjFunc
	var_559_int = 538329; // 0x697 PushI
	var_560_int = -1; // 0x698 PushI
	var_561_int = 40212; // 0x699 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x69a TObjFunc
	return 0; // 0x69c Return
	
Label_1693:
	var_562_int = 40192; // 0x69d PushI
	var_563_bool = var_17_object == var_562_int; // 0x69e Eq
	if(var_563_bool == 0) goto Label_1711; // 0x69f JumpB
	var_564_string = ""; // 0x6a0 PushV
	var_564_string = "Neutral"; // 0x6a1 MovS
	func_601(var_18_bool, var_564_string); // 0x6a2 NEW_2
	var_565_int = 538309; // 0x6a4 PushI
	SetMessage(var_565_int); // 0x6a5 TObjFunc
	ClearReplies(); // 0x6a7 TObjFunc
	var_566_int = 538310; // 0x6a9 PushI
	var_567_int = 40194; // 0x6aa PushI
	var_568_int = 40193; // 0x6ab PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0x6ac TObjFunc
	return 0; // 0x6ae Return
	
Label_1711:
	var_569_int = 40194; // 0x6af PushI
	var_570_bool = var_17_object == var_569_int; // 0x6b0 Eq
	if(var_570_bool == 0) goto Label_1734; // 0x6b1 JumpB
	var_571_string = ""; // 0x6b2 PushV
	var_571_string = "Neutral"; // 0x6b3 MovS
	func_601(var_18_bool, var_571_string); // 0x6b4 NEW_2
	var_572_int = 538311; // 0x6b6 PushI
	SetMessage(var_572_int); // 0x6b7 TObjFunc
	ClearReplies(); // 0x6b9 TObjFunc
	var_573_int = 538312; // 0x6bb PushI
	var_574_int = 40196; // 0x6bc PushI
	var_575_int = 40195; // 0x6bd PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x6be TObjFunc
	var_576_int = 538316; // 0x6c0 PushI
	var_577_int = 40200; // 0x6c1 PushI
	var_578_int = 40199; // 0x6c2 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x6c3 TObjFunc
	return 0; // 0x6c5 Return
	
Label_1734:
	var_579_int = 40200; // 0x6c6 PushI
	var_580_bool = var_17_object == var_579_int; // 0x6c7 Eq
	if(var_580_bool == 0) goto Label_1752; // 0x6c8 JumpB
	var_581_string = ""; // 0x6c9 PushV
	var_581_string = "Neutral"; // 0x6ca MovS
	func_601(var_18_bool, var_581_string); // 0x6cb NEW_2
	var_582_int = 538317; // 0x6cd PushI
	SetMessage(var_582_int); // 0x6ce TObjFunc
	ClearReplies(); // 0x6d0 TObjFunc
	var_583_int = 538318; // 0x6d2 PushI
	var_584_int = 40202; // 0x6d3 PushI
	var_585_int = 40201; // 0x6d4 PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x6d5 TObjFunc
	return 0; // 0x6d7 Return
	
Label_1752:
	var_586_int = 40202; // 0x6d8 PushI
	var_587_bool = var_17_object == var_586_int; // 0x6d9 Eq
	if(var_587_bool == 0) goto Label_1775; // 0x6da JumpB
	var_588_string = ""; // 0x6db PushV
	var_588_string = "Neutral"; // 0x6dc MovS
	func_601(var_18_bool, var_588_string); // 0x6dd NEW_2
	var_589_int = 538319; // 0x6df PushI
	SetMessage(var_589_int); // 0x6e0 TObjFunc
	ClearReplies(); // 0x6e2 TObjFunc
	var_590_int = 538320; // 0x6e4 PushI
	var_591_int = -1; // 0x6e5 PushI
	var_592_int = 40203; // 0x6e6 PushI
	AddReply(var_590_int, var_591_int, var_592_int); // 0x6e7 TObjFunc
	var_593_int = 538321; // 0x6e9 PushI
	var_594_int = -1; // 0x6ea PushI
	var_595_int = 40204; // 0x6eb PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x6ec TObjFunc
	return 0; // 0x6ee Return
	
Label_1775:
	var_596_int = 40196; // 0x6ef PushI
	var_597_bool = var_17_object == var_596_int; // 0x6f0 Eq
	if(var_597_bool == 0) goto Label_1798; // 0x6f1 JumpB
	var_598_string = ""; // 0x6f2 PushV
	var_598_string = "Neutral"; // 0x6f3 MovS
	func_601(var_18_bool, var_598_string); // 0x6f4 NEW_2
	var_599_int = 538313; // 0x6f6 PushI
	SetMessage(var_599_int); // 0x6f7 TObjFunc
	ClearReplies(); // 0x6f9 TObjFunc
	var_600_int = 538314; // 0x6fb PushI
	var_601_int = -1; // 0x6fc PushI
	var_602_int = 40197; // 0x6fd PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x6fe TObjFunc
	var_603_int = 538315; // 0x700 PushI
	var_604_int = -1; // 0x701 PushI
	var_605_int = 40198; // 0x702 PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0x703 TObjFunc
	return 0; // 0x705 Return
	
Label_1798:
	var_606_int = 40174; // 0x706 PushI
	var_607_bool = var_17_object == var_606_int; // 0x707 Eq
	if(var_607_bool == 0) goto Label_1821; // 0x708 JumpB
	var_608_string = ""; // 0x709 PushV
	var_608_string = "Neutral"; // 0x70a MovS
	func_601(var_18_bool, var_608_string); // 0x70b NEW_2
	var_609_int = 538292; // 0x70d PushI
	SetMessage(var_609_int); // 0x70e TObjFunc
	ClearReplies(); // 0x710 TObjFunc
	var_610_int = 538293; // 0x712 PushI
	var_611_int = 40176; // 0x713 PushI
	var_612_int = 40175; // 0x714 PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0x715 TObjFunc
	var_613_int = 538302; // 0x717 PushI
	var_614_int = 40186; // 0x718 PushI
	var_615_int = 40185; // 0x719 PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0x71a TObjFunc
	return 0; // 0x71c Return
	
Label_1821:
	var_616_int = 40186; // 0x71d PushI
	var_617_bool = var_17_object == var_616_int; // 0x71e Eq
	if(var_617_bool == 0) goto Label_1839; // 0x71f JumpB
	var_618_string = ""; // 0x720 PushV
	var_618_string = "Neutral"; // 0x721 MovS
	func_601(var_18_bool, var_618_string); // 0x722 NEW_2
	var_619_int = 538303; // 0x724 PushI
	SetMessage(var_619_int); // 0x725 TObjFunc
	ClearReplies(); // 0x727 TObjFunc
	var_620_int = 538304; // 0x729 PushI
	var_621_int = 40188; // 0x72a PushI
	var_622_int = 40187; // 0x72b PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x72c TObjFunc
	return 0; // 0x72e Return
	
Label_1839:
	var_623_int = 40188; // 0x72f PushI
	var_624_bool = var_17_object == var_623_int; // 0x730 Eq
	if(var_624_bool == 0) goto Label_1862; // 0x731 JumpB
	var_625_string = ""; // 0x732 PushV
	var_625_string = "Neutral"; // 0x733 MovS
	func_601(var_18_bool, var_625_string); // 0x734 NEW_2
	var_626_int = 538305; // 0x736 PushI
	SetMessage(var_626_int); // 0x737 TObjFunc
	ClearReplies(); // 0x739 TObjFunc
	var_627_int = 538306; // 0x73b PushI
	var_628_int = -1; // 0x73c PushI
	var_629_int = 40189; // 0x73d PushI
	AddReply(var_627_int, var_628_int, var_629_int); // 0x73e TObjFunc
	var_630_int = 538307; // 0x740 PushI
	var_631_int = -1; // 0x741 PushI
	var_632_int = 40190; // 0x742 PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0x743 TObjFunc
	return 0; // 0x745 Return
	
Label_1862:
	var_633_int = 40176; // 0x746 PushI
	var_634_bool = var_17_object == var_633_int; // 0x747 Eq
	if(var_634_bool == 0) goto Label_1885; // 0x748 JumpB
	var_635_string = ""; // 0x749 PushV
	var_635_string = "Neutral"; // 0x74a MovS
	func_601(var_18_bool, var_635_string); // 0x74b NEW_2
	var_636_int = 538294; // 0x74d PushI
	SetMessage(var_636_int); // 0x74e TObjFunc
	ClearReplies(); // 0x750 TObjFunc
	var_637_int = 538295; // 0x752 PushI
	var_638_int = 40178; // 0x753 PushI
	var_639_int = 40177; // 0x754 PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0x755 TObjFunc
	var_640_int = 538299; // 0x757 PushI
	var_641_int = 40182; // 0x758 PushI
	var_642_int = 40181; // 0x759 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x75a TObjFunc
	return 0; // 0x75c Return
	
Label_1885:
	var_643_int = 40182; // 0x75d PushI
	var_644_bool = var_17_object == var_643_int; // 0x75e Eq
	if(var_644_bool == 0) goto Label_1903; // 0x75f JumpB
	var_645_string = ""; // 0x760 PushV
	var_645_string = "Neutral"; // 0x761 MovS
	func_601(var_18_bool, var_645_string); // 0x762 NEW_2
	var_646_int = 538300; // 0x764 PushI
	SetMessage(var_646_int); // 0x765 TObjFunc
	ClearReplies(); // 0x767 TObjFunc
	var_647_int = 538301; // 0x769 PushI
	var_648_int = 40178; // 0x76a PushI
	var_649_int = 40183; // 0x76b PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0x76c TObjFunc
	return 0; // 0x76e Return
	
Label_1903:
	var_650_int = 40178; // 0x76f PushI
	var_651_bool = var_17_object == var_650_int; // 0x770 Eq
	if(var_651_bool == 0) goto Label_1931; // 0x771 JumpB
	var_652_string = ""; // 0x772 PushV
	var_652_string = "Neutral"; // 0x773 MovS
	func_601(var_18_bool, var_652_string); // 0x774 NEW_2
	var_653_int = 538296; // 0x776 PushI
	SetMessage(var_653_int); // 0x777 TObjFunc
	ClearReplies(); // 0x779 TObjFunc
	var_654_int = 538297; // 0x77b PushI
	var_655_int = -1; // 0x77c PushI
	var_656_int = 40179; // 0x77d PushI
	AddReply(var_654_int, var_655_int, var_656_int); // 0x77e TObjFunc
	var_657_bool = 0; var_658_object = Obj(); // 0x780 PushV
	var_658_object = var_1_object; // 0x781 MovT
	func_4971(var_658_object); // 0x782 NEW_2
	if(var_657_bool == 0) goto Label_1930; // 0x784 JumpB
	var_659_int = 538298; // 0x785 PushI
	var_660_int = -1; // 0x786 PushI
	var_661_int = 40180; // 0x787 PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x788 TObjFunc
	
Label_1930:
	return 0; // 0x78a Return
	
Label_1931:
	var_662_int = 40155; // 0x78b PushI
	var_663_bool = var_17_object == var_662_int; // 0x78c Eq
	if(var_663_bool == 0) goto Label_1959; // 0x78d JumpB
	var_664_string = ""; // 0x78e PushV
	var_664_string = "Neutral"; // 0x78f MovS
	func_601(var_18_bool, var_664_string); // 0x790 NEW_2
	var_665_int = 538273; // 0x792 PushI
	SetMessage(var_665_int); // 0x793 TObjFunc
	ClearReplies(); // 0x795 TObjFunc
	var_666_int = 538274; // 0x797 PushI
	var_667_int = 40157; // 0x798 PushI
	var_668_int = 40156; // 0x799 PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x79a TObjFunc
	var_669_int = 538289; // 0x79c PushI
	var_670_int = -1; // 0x79d PushI
	var_671_int = 40171; // 0x79e PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x79f TObjFunc
	var_672_int = 538290; // 0x7a1 PushI
	var_673_int = -1; // 0x7a2 PushI
	var_674_int = 40172; // 0x7a3 PushI
	AddReply(var_672_int, var_673_int, var_674_int); // 0x7a4 TObjFunc
	return 0; // 0x7a6 Return
	
Label_1959:
	var_675_int = 40157; // 0x7a7 PushI
	var_676_bool = var_17_object == var_675_int; // 0x7a8 Eq
	if(var_676_bool == 0) goto Label_1982; // 0x7a9 JumpB
	var_677_string = ""; // 0x7aa PushV
	var_677_string = "Neutral"; // 0x7ab MovS
	func_601(var_18_bool, var_677_string); // 0x7ac NEW_2
	var_678_int = 538275; // 0x7ae PushI
	SetMessage(var_678_int); // 0x7af TObjFunc
	ClearReplies(); // 0x7b1 TObjFunc
	var_679_int = 538276; // 0x7b3 PushI
	var_680_int = 40159; // 0x7b4 PushI
	var_681_int = 40158; // 0x7b5 PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0x7b6 TObjFunc
	var_682_int = 538288; // 0x7b8 PushI
	var_683_int = -1; // 0x7b9 PushI
	var_684_int = 40170; // 0x7ba PushI
	AddReply(var_682_int, var_683_int, var_684_int); // 0x7bb TObjFunc
	return 0; // 0x7bd Return
	
Label_1982:
	var_685_int = 40159; // 0x7be PushI
	var_686_bool = var_17_object == var_685_int; // 0x7bf Eq
	if(var_686_bool == 0) goto Label_2000; // 0x7c0 JumpB
	var_687_string = ""; // 0x7c1 PushV
	var_687_string = "Neutral"; // 0x7c2 MovS
	func_601(var_18_bool, var_687_string); // 0x7c3 NEW_2
	var_688_int = 538277; // 0x7c5 PushI
	SetMessage(var_688_int); // 0x7c6 TObjFunc
	ClearReplies(); // 0x7c8 TObjFunc
	var_689_int = 538278; // 0x7ca PushI
	var_690_int = 40161; // 0x7cb PushI
	var_691_int = 40160; // 0x7cc PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0x7cd TObjFunc
	return 0; // 0x7cf Return
	
Label_2000:
	var_692_int = 40161; // 0x7d0 PushI
	var_693_bool = var_17_object == var_692_int; // 0x7d1 Eq
	if(var_693_bool == 0) goto Label_2023; // 0x7d2 JumpB
	var_694_string = ""; // 0x7d3 PushV
	var_694_string = "Neutral"; // 0x7d4 MovS
	func_601(var_18_bool, var_694_string); // 0x7d5 NEW_2
	var_695_int = 538279; // 0x7d7 PushI
	SetMessage(var_695_int); // 0x7d8 TObjFunc
	ClearReplies(); // 0x7da TObjFunc
	var_696_int = 538280; // 0x7dc PushI
	var_697_int = 40163; // 0x7dd PushI
	var_698_int = 40162; // 0x7de PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x7df TObjFunc
	var_699_int = 538284; // 0x7e1 PushI
	var_700_int = 40167; // 0x7e2 PushI
	var_701_int = 40166; // 0x7e3 PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0x7e4 TObjFunc
	return 0; // 0x7e6 Return
	
Label_2023:
	var_702_int = 40167; // 0x7e7 PushI
	var_703_bool = var_17_object == var_702_int; // 0x7e8 Eq
	if(var_703_bool == 0) goto Label_2046; // 0x7e9 JumpB
	var_704_string = ""; // 0x7ea PushV
	var_704_string = "Neutral"; // 0x7eb MovS
	func_601(var_18_bool, var_704_string); // 0x7ec NEW_2
	var_705_int = 538285; // 0x7ee PushI
	SetMessage(var_705_int); // 0x7ef TObjFunc
	ClearReplies(); // 0x7f1 TObjFunc
	var_706_int = 538286; // 0x7f3 PushI
	var_707_int = -1; // 0x7f4 PushI
	var_708_int = 40168; // 0x7f5 PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0x7f6 TObjFunc
	var_709_int = 538287; // 0x7f8 PushI
	var_710_int = -1; // 0x7f9 PushI
	var_711_int = 40169; // 0x7fa PushI
	AddReply(var_709_int, var_710_int, var_711_int); // 0x7fb TObjFunc
	return 0; // 0x7fd Return
	
Label_2046:
	var_712_int = 40163; // 0x7fe PushI
	var_713_bool = var_17_object == var_712_int; // 0x7ff Eq
	if(var_713_bool == 0) goto Label_2069; // 0x800 JumpB
	var_714_string = ""; // 0x801 PushV
	var_714_string = "Neutral"; // 0x802 MovS
	func_601(var_18_bool, var_714_string); // 0x803 NEW_2
	var_715_int = 538281; // 0x805 PushI
	SetMessage(var_715_int); // 0x806 TObjFunc
	ClearReplies(); // 0x808 TObjFunc
	var_716_int = 538282; // 0x80a PushI
	var_717_int = -1; // 0x80b PushI
	var_718_int = 40164; // 0x80c PushI
	AddReply(var_716_int, var_717_int, var_718_int); // 0x80d TObjFunc
	var_719_int = 538283; // 0x80f PushI
	var_720_int = -1; // 0x810 PushI
	var_721_int = 40165; // 0x811 PushI
	AddReply(var_719_int, var_720_int, var_721_int); // 0x812 TObjFunc
	return 0; // 0x814 Return
	
Label_2069:
	var_722_int = 40135; // 0x815 PushI
	var_723_bool = var_17_object == var_722_int; // 0x816 Eq
	if(var_723_bool == 0) goto Label_2092; // 0x817 JumpB
	var_724_string = ""; // 0x818 PushV
	var_724_string = "Neutral"; // 0x819 MovS
	func_601(var_18_bool, var_724_string); // 0x81a NEW_2
	var_725_int = 538254; // 0x81c PushI
	SetMessage(var_725_int); // 0x81d TObjFunc
	ClearReplies(); // 0x81f TObjFunc
	var_726_int = 538255; // 0x821 PushI
	var_727_int = 40137; // 0x822 PushI
	var_728_int = 40136; // 0x823 PushI
	AddReply(var_726_int, var_727_int, var_728_int); // 0x824 TObjFunc
	var_729_int = 538271; // 0x826 PushI
	var_730_int = -1; // 0x827 PushI
	var_731_int = 40153; // 0x828 PushI
	AddReply(var_729_int, var_730_int, var_731_int); // 0x829 TObjFunc
	return 0; // 0x82b Return
	
Label_2092:
	var_732_int = 40137; // 0x82c PushI
	var_733_bool = var_17_object == var_732_int; // 0x82d Eq
	if(var_733_bool == 0) goto Label_2120; // 0x82e JumpB
	var_734_string = ""; // 0x82f PushV
	var_734_string = "Neutral"; // 0x830 MovS
	func_601(var_18_bool, var_734_string); // 0x831 NEW_2
	var_735_int = 538256; // 0x833 PushI
	SetMessage(var_735_int); // 0x834 TObjFunc
	ClearReplies(); // 0x836 TObjFunc
	var_736_int = 538257; // 0x838 PushI
	var_737_int = 40139; // 0x839 PushI
	var_738_int = 40138; // 0x83a PushI
	AddReply(var_736_int, var_737_int, var_738_int); // 0x83b TObjFunc
	var_739_int = 538269; // 0x83d PushI
	var_740_int = 40139; // 0x83e PushI
	var_741_int = 40150; // 0x83f PushI
	AddReply(var_739_int, var_740_int, var_741_int); // 0x840 TObjFunc
	var_742_int = 538270; // 0x842 PushI
	var_743_int = -1; // 0x843 PushI
	var_744_int = 40152; // 0x844 PushI
	AddReply(var_742_int, var_743_int, var_744_int); // 0x845 TObjFunc
	return 0; // 0x847 Return
	
Label_2120:
	var_745_int = 40139; // 0x848 PushI
	var_746_bool = var_17_object == var_745_int; // 0x849 Eq
	if(var_746_bool == 0) goto Label_2138; // 0x84a JumpB
	var_747_string = ""; // 0x84b PushV
	var_747_string = "Neutral"; // 0x84c MovS
	func_601(var_18_bool, var_747_string); // 0x84d NEW_2
	var_748_int = 538258; // 0x84f PushI
	SetMessage(var_748_int); // 0x850 TObjFunc
	ClearReplies(); // 0x852 TObjFunc
	var_749_int = 538259; // 0x854 PushI
	var_750_int = 40141; // 0x855 PushI
	var_751_int = 40140; // 0x856 PushI
	AddReply(var_749_int, var_750_int, var_751_int); // 0x857 TObjFunc
	return 0; // 0x859 Return
	
Label_2138:
	var_752_int = 40141; // 0x85a PushI
	var_753_bool = var_17_object == var_752_int; // 0x85b Eq
	if(var_753_bool == 0) goto Label_2161; // 0x85c JumpB
	var_754_string = ""; // 0x85d PushV
	var_754_string = "Neutral"; // 0x85e MovS
	func_601(var_18_bool, var_754_string); // 0x85f NEW_2
	var_755_int = 538260; // 0x861 PushI
	SetMessage(var_755_int); // 0x862 TObjFunc
	ClearReplies(); // 0x864 TObjFunc
	var_756_int = 538261; // 0x866 PushI
	var_757_int = 40143; // 0x867 PushI
	var_758_int = 40142; // 0x868 PushI
	AddReply(var_756_int, var_757_int, var_758_int); // 0x869 TObjFunc
	var_759_int = 538265; // 0x86b PushI
	var_760_int = 40147; // 0x86c PushI
	var_761_int = 40146; // 0x86d PushI
	AddReply(var_759_int, var_760_int, var_761_int); // 0x86e TObjFunc
	return 0; // 0x870 Return
	
Label_2161:
	var_762_int = 40147; // 0x871 PushI
	var_763_bool = var_17_object == var_762_int; // 0x872 Eq
	if(var_763_bool == 0) goto Label_2184; // 0x873 JumpB
	var_764_string = ""; // 0x874 PushV
	var_764_string = "Neutral"; // 0x875 MovS
	func_601(var_18_bool, var_764_string); // 0x876 NEW_2
	var_765_int = 538266; // 0x878 PushI
	SetMessage(var_765_int); // 0x879 TObjFunc
	ClearReplies(); // 0x87b TObjFunc
	var_766_int = 538267; // 0x87d PushI
	var_767_int = -1; // 0x87e PushI
	var_768_int = 40148; // 0x87f PushI
	AddReply(var_766_int, var_767_int, var_768_int); // 0x880 TObjFunc
	var_769_int = 538268; // 0x882 PushI
	var_770_int = -1; // 0x883 PushI
	var_771_int = 40149; // 0x884 PushI
	AddReply(var_769_int, var_770_int, var_771_int); // 0x885 TObjFunc
	return 0; // 0x887 Return
	
Label_2184:
	var_772_int = 40143; // 0x888 PushI
	var_773_bool = var_17_object == var_772_int; // 0x889 Eq
	if(var_773_bool == 0) goto Label_2207; // 0x88a JumpB
	var_774_string = ""; // 0x88b PushV
	var_774_string = "Neutral"; // 0x88c MovS
	func_601(var_18_bool, var_774_string); // 0x88d NEW_2
	var_775_int = 538262; // 0x88f PushI
	SetMessage(var_775_int); // 0x890 TObjFunc
	ClearReplies(); // 0x892 TObjFunc
	var_776_int = 538263; // 0x894 PushI
	var_777_int = -1; // 0x895 PushI
	var_778_int = 40144; // 0x896 PushI
	AddReply(var_776_int, var_777_int, var_778_int); // 0x897 TObjFunc
	var_779_int = 538264; // 0x899 PushI
	var_780_int = -1; // 0x89a PushI
	var_781_int = 40145; // 0x89b PushI
	AddReply(var_779_int, var_780_int, var_781_int); // 0x89c TObjFunc
	return 0; // 0x89e Return
	
Label_2207:
	var_782_int = 40114; // 0x89f PushI
	var_783_bool = var_17_object == var_782_int; // 0x8a0 Eq
	if(var_783_bool == 0) goto Label_2230; // 0x8a1 JumpB
	var_784_string = ""; // 0x8a2 PushV
	var_784_string = "Neutral"; // 0x8a3 MovS
	func_601(var_18_bool, var_784_string); // 0x8a4 NEW_2
	var_785_int = 538236; // 0x8a6 PushI
	SetMessage(var_785_int); // 0x8a7 TObjFunc
	ClearReplies(); // 0x8a9 TObjFunc
	var_786_int = 538237; // 0x8ab PushI
	var_787_int = 40116; // 0x8ac PushI
	var_788_int = 40115; // 0x8ad PushI
	AddReply(var_786_int, var_787_int, var_788_int); // 0x8ae TObjFunc
	var_789_int = 538252; // 0x8b0 PushI
	var_790_int = -1; // 0x8b1 PushI
	var_791_int = 40133; // 0x8b2 PushI
	AddReply(var_789_int, var_790_int, var_791_int); // 0x8b3 TObjFunc
	return 0; // 0x8b5 Return
	
Label_2230:
	var_792_int = 40116; // 0x8b6 PushI
	var_793_bool = var_17_object == var_792_int; // 0x8b7 Eq
	if(var_793_bool == 0) goto Label_2253; // 0x8b8 JumpB
	var_794_string = ""; // 0x8b9 PushV
	var_794_string = "Neutral"; // 0x8ba MovS
	func_601(var_18_bool, var_794_string); // 0x8bb NEW_2
	var_795_int = 538238; // 0x8bd PushI
	SetMessage(var_795_int); // 0x8be TObjFunc
	ClearReplies(); // 0x8c0 TObjFunc
	var_796_int = 538239; // 0x8c2 PushI
	var_797_int = 40118; // 0x8c3 PushI
	var_798_int = 40117; // 0x8c4 PushI
	AddReply(var_796_int, var_797_int, var_798_int); // 0x8c5 TObjFunc
	var_799_int = 538251; // 0x8c7 PushI
	var_800_int = 40120; // 0x8c8 PushI
	var_801_int = 40131; // 0x8c9 PushI
	AddReply(var_799_int, var_800_int, var_801_int); // 0x8ca TObjFunc
	return 0; // 0x8cc Return
	
Label_2253:
	var_802_int = 40118; // 0x8cd PushI
	var_803_bool = var_17_object == var_802_int; // 0x8ce Eq
	if(var_803_bool == 0) goto Label_2276; // 0x8cf JumpB
	var_804_string = ""; // 0x8d0 PushV
	var_804_string = "Neutral"; // 0x8d1 MovS
	func_601(var_18_bool, var_804_string); // 0x8d2 NEW_2
	var_805_int = 538240; // 0x8d4 PushI
	SetMessage(var_805_int); // 0x8d5 TObjFunc
	ClearReplies(); // 0x8d7 TObjFunc
	var_806_int = 538241; // 0x8d9 PushI
	var_807_int = 40120; // 0x8da PushI
	var_808_int = 40119; // 0x8db PushI
	AddReply(var_806_int, var_807_int, var_808_int); // 0x8dc TObjFunc
	var_809_int = 538250; // 0x8de PushI
	var_810_int = 40120; // 0x8df PushI
	var_811_int = 40129; // 0x8e0 PushI
	AddReply(var_809_int, var_810_int, var_811_int); // 0x8e1 TObjFunc
	return 0; // 0x8e3 Return
	
Label_2276:
	var_812_int = 40120; // 0x8e4 PushI
	var_813_bool = var_17_object == var_812_int; // 0x8e5 Eq
	if(var_813_bool == 0) goto Label_2299; // 0x8e6 JumpB
	var_814_string = ""; // 0x8e7 PushV
	var_814_string = "Neutral"; // 0x8e8 MovS
	func_601(var_18_bool, var_814_string); // 0x8e9 NEW_2
	var_815_int = 538242; // 0x8eb PushI
	SetMessage(var_815_int); // 0x8ec TObjFunc
	ClearReplies(); // 0x8ee TObjFunc
	var_816_int = 538243; // 0x8f0 PushI
	var_817_int = 40122; // 0x8f1 PushI
	var_818_int = 40121; // 0x8f2 PushI
	AddReply(var_816_int, var_817_int, var_818_int); // 0x8f3 TObjFunc
	var_819_int = 538249; // 0x8f5 PushI
	var_820_int = 40124; // 0x8f6 PushI
	var_821_int = 40127; // 0x8f7 PushI
	AddReply(var_819_int, var_820_int, var_821_int); // 0x8f8 TObjFunc
	return 0; // 0x8fa Return
	
Label_2299:
	var_822_int = 40122; // 0x8fb PushI
	var_823_bool = var_17_object == var_822_int; // 0x8fc Eq
	if(var_823_bool == 0) goto Label_2317; // 0x8fd JumpB
	var_824_string = ""; // 0x8fe PushV
	var_824_string = "Neutral"; // 0x8ff MovS
	func_601(var_18_bool, var_824_string); // 0x900 NEW_2
	var_825_int = 538244; // 0x902 PushI
	SetMessage(var_825_int); // 0x903 TObjFunc
	ClearReplies(); // 0x905 TObjFunc
	var_826_int = 538245; // 0x907 PushI
	var_827_int = 40124; // 0x908 PushI
	var_828_int = 40123; // 0x909 PushI
	AddReply(var_826_int, var_827_int, var_828_int); // 0x90a TObjFunc
	return 0; // 0x90c Return
	
Label_2317:
	var_829_int = 40124; // 0x90d PushI
	var_830_bool = var_17_object == var_829_int; // 0x90e Eq
	if(var_830_bool == 0) goto Label_2340; // 0x90f JumpB
	var_831_string = ""; // 0x910 PushV
	var_831_string = "Neutral"; // 0x911 MovS
	func_601(var_18_bool, var_831_string); // 0x912 NEW_2
	var_832_int = 538246; // 0x914 PushI
	SetMessage(var_832_int); // 0x915 TObjFunc
	ClearReplies(); // 0x917 TObjFunc
	var_833_int = 538247; // 0x919 PushI
	var_834_int = -1; // 0x91a PushI
	var_835_int = 40125; // 0x91b PushI
	AddReply(var_833_int, var_834_int, var_835_int); // 0x91c TObjFunc
	var_836_int = 538248; // 0x91e PushI
	var_837_int = -1; // 0x91f PushI
	var_838_int = 40126; // 0x920 PushI
	AddReply(var_836_int, var_837_int, var_838_int); // 0x921 TObjFunc
	return 0; // 0x923 Return
	
Label_2340:
	var_839_int = 40100; // 0x924 PushI
	var_840_bool = var_17_object == var_839_int; // 0x925 Eq
	if(var_840_bool == 0) goto Label_2363; // 0x926 JumpB
	var_841_string = ""; // 0x927 PushV
	var_841_string = "Neutral"; // 0x928 MovS
	func_601(var_18_bool, var_841_string); // 0x929 NEW_2
	var_842_int = 538223; // 0x92b PushI
	SetMessage(var_842_int); // 0x92c TObjFunc
	ClearReplies(); // 0x92e TObjFunc
	var_843_int = 538224; // 0x930 PushI
	var_844_int = 40102; // 0x931 PushI
	var_845_int = 40101; // 0x932 PushI
	AddReply(var_843_int, var_844_int, var_845_int); // 0x933 TObjFunc
	var_846_int = 538234; // 0x935 PushI
	var_847_int = -1; // 0x936 PushI
	var_848_int = 40112; // 0x937 PushI
	AddReply(var_846_int, var_847_int, var_848_int); // 0x938 TObjFunc
	return 0; // 0x93a Return
	
Label_2363:
	var_849_int = 40102; // 0x93b PushI
	var_850_bool = var_17_object == var_849_int; // 0x93c Eq
	if(var_850_bool == 0) goto Label_2386; // 0x93d JumpB
	var_851_string = ""; // 0x93e PushV
	var_851_string = "Neutral"; // 0x93f MovS
	func_601(var_18_bool, var_851_string); // 0x940 NEW_2
	var_852_int = 538225; // 0x942 PushI
	SetMessage(var_852_int); // 0x943 TObjFunc
	ClearReplies(); // 0x945 TObjFunc
	var_853_int = 538226; // 0x947 PushI
	var_854_int = 40104; // 0x948 PushI
	var_855_int = 40103; // 0x949 PushI
	AddReply(var_853_int, var_854_int, var_855_int); // 0x94a TObjFunc
	var_856_int = 538230; // 0x94c PushI
	var_857_int = 40108; // 0x94d PushI
	var_858_int = 40107; // 0x94e PushI
	AddReply(var_856_int, var_857_int, var_858_int); // 0x94f TObjFunc
	return 0; // 0x951 Return
	
Label_2386:
	var_859_int = 40108; // 0x952 PushI
	var_860_bool = var_17_object == var_859_int; // 0x953 Eq
	if(var_860_bool == 0) goto Label_2409; // 0x954 JumpB
	var_861_string = ""; // 0x955 PushV
	var_861_string = "Neutral"; // 0x956 MovS
	func_601(var_18_bool, var_861_string); // 0x957 NEW_2
	var_862_int = 538231; // 0x959 PushI
	SetMessage(var_862_int); // 0x95a TObjFunc
	ClearReplies(); // 0x95c TObjFunc
	var_863_int = 538232; // 0x95e PushI
	var_864_int = 40104; // 0x95f PushI
	var_865_int = 40109; // 0x960 PushI
	AddReply(var_863_int, var_864_int, var_865_int); // 0x961 TObjFunc
	var_866_int = 538233; // 0x963 PushI
	var_867_int = -1; // 0x964 PushI
	var_868_int = 40111; // 0x965 PushI
	AddReply(var_866_int, var_867_int, var_868_int); // 0x966 TObjFunc
	return 0; // 0x968 Return
	
Label_2409:
	var_869_int = 40104; // 0x969 PushI
	var_870_bool = var_17_object == var_869_int; // 0x96a Eq
	if(var_870_bool == 0) goto Label_2432; // 0x96b JumpB
	var_871_string = ""; // 0x96c PushV
	var_871_string = "Neutral"; // 0x96d MovS
	func_601(var_18_bool, var_871_string); // 0x96e NEW_2
	var_872_int = 538227; // 0x970 PushI
	SetMessage(var_872_int); // 0x971 TObjFunc
	ClearReplies(); // 0x973 TObjFunc
	var_873_int = 538228; // 0x975 PushI
	var_874_int = -1; // 0x976 PushI
	var_875_int = 40105; // 0x977 PushI
	AddReply(var_873_int, var_874_int, var_875_int); // 0x978 TObjFunc
	var_876_int = 538229; // 0x97a PushI
	var_877_int = -1; // 0x97b PushI
	var_878_int = 40106; // 0x97c PushI
	AddReply(var_876_int, var_877_int, var_878_int); // 0x97d TObjFunc
	return 0; // 0x97f Return
	
Label_2432:
	var_879_int = 40089; // 0x980 PushI
	var_880_bool = var_17_object == var_879_int; // 0x981 Eq
	if(var_880_bool == 0) goto Label_2450; // 0x982 JumpB
	var_881_string = ""; // 0x983 PushV
	var_881_string = "Neutral"; // 0x984 MovS
	func_601(var_18_bool, var_881_string); // 0x985 NEW_2
	var_882_int = 538212; // 0x987 PushI
	SetMessage(var_882_int); // 0x988 TObjFunc
	ClearReplies(); // 0x98a TObjFunc
	var_883_int = 538213; // 0x98c PushI
	var_884_int = 40091; // 0x98d PushI
	var_885_int = 40090; // 0x98e PushI
	AddReply(var_883_int, var_884_int, var_885_int); // 0x98f TObjFunc
	return 0; // 0x991 Return
	
Label_2450:
	var_886_int = 40091; // 0x992 PushI
	var_887_bool = var_17_object == var_886_int; // 0x993 Eq
	if(var_887_bool == 0) goto Label_2473; // 0x994 JumpB
	var_888_string = ""; // 0x995 PushV
	var_888_string = "Neutral"; // 0x996 MovS
	func_601(var_18_bool, var_888_string); // 0x997 NEW_2
	var_889_int = 538214; // 0x999 PushI
	SetMessage(var_889_int); // 0x99a TObjFunc
	ClearReplies(); // 0x99c TObjFunc
	var_890_int = 538215; // 0x99e PushI
	var_891_int = 40093; // 0x99f PushI
	var_892_int = 40092; // 0x9a0 PushI
	AddReply(var_890_int, var_891_int, var_892_int); // 0x9a1 TObjFunc
	var_893_int = 538221; // 0x9a3 PushI
	var_894_int = -1; // 0x9a4 PushI
	var_895_int = 40098; // 0x9a5 PushI
	AddReply(var_893_int, var_894_int, var_895_int); // 0x9a6 TObjFunc
	return 0; // 0x9a8 Return
	
Label_2473:
	var_896_int = 40093; // 0x9a9 PushI
	var_897_bool = var_17_object == var_896_int; // 0x9aa Eq
	if(var_897_bool == 0) goto Label_2491; // 0x9ab JumpB
	var_898_string = ""; // 0x9ac PushV
	var_898_string = "Neutral"; // 0x9ad MovS
	func_601(var_18_bool, var_898_string); // 0x9ae NEW_2
	var_899_int = 538216; // 0x9b0 PushI
	SetMessage(var_899_int); // 0x9b1 TObjFunc
	ClearReplies(); // 0x9b3 TObjFunc
	var_900_int = 538217; // 0x9b5 PushI
	var_901_int = 40095; // 0x9b6 PushI
	var_902_int = 40094; // 0x9b7 PushI
	AddReply(var_900_int, var_901_int, var_902_int); // 0x9b8 TObjFunc
	return 0; // 0x9ba Return
	
Label_2491:
	var_903_int = 40095; // 0x9bb PushI
	var_904_bool = var_17_object == var_903_int; // 0x9bc Eq
	if(var_904_bool == 0) goto Label_2514; // 0x9bd JumpB
	var_905_string = ""; // 0x9be PushV
	var_905_string = "Neutral"; // 0x9bf MovS
	func_601(var_18_bool, var_905_string); // 0x9c0 NEW_2
	var_906_int = 538218; // 0x9c2 PushI
	SetMessage(var_906_int); // 0x9c3 TObjFunc
	ClearReplies(); // 0x9c5 TObjFunc
	var_907_int = 538219; // 0x9c7 PushI
	var_908_int = -1; // 0x9c8 PushI
	var_909_int = 40096; // 0x9c9 PushI
	AddReply(var_907_int, var_908_int, var_909_int); // 0x9ca TObjFunc
	var_910_int = 538220; // 0x9cc PushI
	var_911_int = -1; // 0x9cd PushI
	var_912_int = 40097; // 0x9ce PushI
	AddReply(var_910_int, var_911_int, var_912_int); // 0x9cf TObjFunc
	return 0; // 0x9d1 Return
	
Label_2514:
	var_913_int = 45520; // 0x9d2 PushI
	var_914_bool = var_17_object == var_913_int; // 0x9d3 Eq
	if(var_914_bool == 0) goto Label_2542; // 0x9d4 JumpB
	var_915_string = ""; // 0x9d5 PushV
	var_915_string = "Neutral"; // 0x9d6 MovS
	func_601(var_18_bool, var_915_string); // 0x9d7 NEW_2
	var_916_int = 543065; // 0x9d9 PushI
	SetMessage(var_916_int); // 0x9da TObjFunc
	ClearReplies(); // 0x9dc TObjFunc
	var_917_int = 543066; // 0x9de PushI
	var_918_int = -1; // 0x9df PushI
	var_919_int = 45521; // 0x9e0 PushI
	AddReply(var_917_int, var_918_int, var_919_int); // 0x9e1 TObjFunc
	var_920_int = 543067; // 0x9e3 PushI
	var_921_int = 45524; // 0x9e4 PushI
	var_922_int = 45522; // 0x9e5 PushI
	AddReply(var_920_int, var_921_int, var_922_int); // 0x9e6 TObjFunc
	var_923_int = 543068; // 0x9e8 PushI
	var_924_int = -1; // 0x9e9 PushI
	var_925_int = 45523; // 0x9ea PushI
	AddReply(var_923_int, var_924_int, var_925_int); // 0x9eb TObjFunc
	return 0; // 0x9ed Return
	
Label_2542:
	var_926_int = 45524; // 0x9ee PushI
	var_927_bool = var_17_object == var_926_int; // 0x9ef Eq
	if(var_927_bool == 0) goto Label_2565; // 0x9f0 JumpB
	var_928_string = ""; // 0x9f1 PushV
	var_928_string = "Neutral"; // 0x9f2 MovS
	func_601(var_18_bool, var_928_string); // 0x9f3 NEW_2
	var_929_int = 543069; // 0x9f5 PushI
	SetMessage(var_929_int); // 0x9f6 TObjFunc
	ClearReplies(); // 0x9f8 TObjFunc
	var_930_int = 543070; // 0x9fa PushI
	var_931_int = -1; // 0x9fb PushI
	var_932_int = 45525; // 0x9fc PushI
	AddReply(var_930_int, var_931_int, var_932_int); // 0x9fd TObjFunc
	var_933_int = 543071; // 0x9ff PushI
	var_934_int = -1; // 0xa00 PushI
	var_935_int = 45526; // 0xa01 PushI
	AddReply(var_933_int, var_934_int, var_935_int); // 0xa02 TObjFunc
	return 0; // 0xa04 Return
	
Label_2565:
	var_936_int = 45513; // 0xa05 PushI
	var_937_bool = var_17_object == var_936_int; // 0xa06 Eq
	if(var_937_bool == 0) goto Label_2593; // 0xa07 JumpB
	var_938_string = ""; // 0xa08 PushV
	var_938_string = "Neutral"; // 0xa09 MovS
	func_601(var_18_bool, var_938_string); // 0xa0a NEW_2
	var_939_int = 543058; // 0xa0c PushI
	SetMessage(var_939_int); // 0xa0d TObjFunc
	ClearReplies(); // 0xa0f TObjFunc
	var_940_int = 543059; // 0xa11 PushI
	var_941_int = -1; // 0xa12 PushI
	var_942_int = 45514; // 0xa13 PushI
	AddReply(var_940_int, var_941_int, var_942_int); // 0xa14 TObjFunc
	var_943_int = 543060; // 0xa16 PushI
	var_944_int = -1; // 0xa17 PushI
	var_945_int = 45515; // 0xa18 PushI
	AddReply(var_943_int, var_944_int, var_945_int); // 0xa19 TObjFunc
	var_946_int = 543061; // 0xa1b PushI
	var_947_int = -1; // 0xa1c PushI
	var_948_int = 45516; // 0xa1d PushI
	AddReply(var_946_int, var_947_int, var_948_int); // 0xa1e TObjFunc
	return 0; // 0xa20 Return
	
Label_2593:
	var_949_int = 45498; // 0xa21 PushI
	var_950_bool = var_17_object == var_949_int; // 0xa22 Eq
	if(var_950_bool == 0) goto Label_2626; // 0xa23 JumpB
	var_951_string = ""; // 0xa24 PushV
	var_951_string = "Neutral"; // 0xa25 MovS
	func_601(var_18_bool, var_951_string); // 0xa26 NEW_2
	var_952_int = 543046; // 0xa28 PushI
	SetMessage(var_952_int); // 0xa29 TObjFunc
	ClearReplies(); // 0xa2b TObjFunc
	var_953_int = 543047; // 0xa2d PushI
	var_954_int = 45506; // 0xa2e PushI
	var_955_int = 45499; // 0xa2f PushI
	AddReply(var_953_int, var_954_int, var_955_int); // 0xa30 TObjFunc
	var_956_int = 543050; // 0xa32 PushI
	var_957_int = 45503; // 0xa33 PushI
	var_958_int = 45502; // 0xa34 PushI
	AddReply(var_956_int, var_957_int, var_958_int); // 0xa35 TObjFunc
	var_959_int = 543048; // 0xa37 PushI
	var_960_int = -1; // 0xa38 PushI
	var_961_int = 45500; // 0xa39 PushI
	AddReply(var_959_int, var_960_int, var_961_int); // 0xa3a TObjFunc
	var_962_int = 543049; // 0xa3c PushI
	var_963_int = -1; // 0xa3d PushI
	var_964_int = 45501; // 0xa3e PushI
	AddReply(var_962_int, var_963_int, var_964_int); // 0xa3f TObjFunc
	return 0; // 0xa41 Return
	
Label_2626:
	var_965_int = 45503; // 0xa42 PushI
	var_966_bool = var_17_object == var_965_int; // 0xa43 Eq
	if(var_966_bool == 0) goto Label_2644; // 0xa44 JumpB
	var_967_string = ""; // 0xa45 PushV
	var_967_string = "Neutral"; // 0xa46 MovS
	func_601(var_18_bool, var_967_string); // 0xa47 NEW_2
	var_968_int = 543051; // 0xa49 PushI
	SetMessage(var_968_int); // 0xa4a TObjFunc
	ClearReplies(); // 0xa4c TObjFunc
	var_969_int = 543054; // 0xa4e PushI
	var_970_int = -1; // 0xa4f PushI
	var_971_int = 45509; // 0xa50 PushI
	AddReply(var_969_int, var_970_int, var_971_int); // 0xa51 TObjFunc
	return 0; // 0xa53 Return
	
Label_2644:
	var_972_int = 45506; // 0xa54 PushI
	var_973_bool = var_17_object == var_972_int; // 0xa55 Eq
	if(var_973_bool == 0) goto Label_2662; // 0xa56 JumpB
	var_974_string = ""; // 0xa57 PushV
	var_974_string = "Neutral"; // 0xa58 MovS
	func_601(var_18_bool, var_974_string); // 0xa59 NEW_2
	var_975_int = 543052; // 0xa5b PushI
	SetMessage(var_975_int); // 0xa5c TObjFunc
	ClearReplies(); // 0xa5e TObjFunc
	var_976_int = 543053; // 0xa60 PushI
	var_977_int = -1; // 0xa61 PushI
	var_978_int = 45507; // 0xa62 PushI
	AddReply(var_976_int, var_977_int, var_978_int); // 0xa63 TObjFunc
	return 0; // 0xa65 Return
	
Label_2662:
	var_3_string = 1; // 0xa66 TMovB
	var_979_bool = 0; // 0xa67 PushV
	func_6164(var_979_bool); // 0xa68 NEW_2
	if(var_979_bool == 0) goto Label_2670; // 0xa6a JumpB
	lshStopAnimation(); // 0xa6b Func
	goto Label_2672; // 0xa6d Jump
	
Label_2672:
	return 0; // 0xa70 Return
	
Label_2670:
	StopAnimation(); // 0xa6e Func
	
Label_2674:
	return 0; // 0xa72 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xa82 PushV
	var_20_int = 0; var_21_object = Obj(); // 0xa83 PushV
	var_21_object = var_17_bool; // 0xa84 Mov
	func_5906(var_21_object); // 0xa85 NEW_2
	var_19_int = var_20_int; // 0xa86 Mov
	var_22_int = 0; // 0xa88 PushI
	var_23_bool = var_19_int > var_22_int; // 0xa89 GT
	if(var_23_bool == 0) goto Label_2703; // 0xa8a JumpB
	var_24_object = Obj(); // 0xa8b PushV
	var_24_object = var_17_bool; // 0xa8c Mov
	func_5909(var_24_object); // 0xa8d NEW_2
	
Label_2703:
	return 2; // 0xa8f Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_5915(); // 0xa91 NEW_2
	return 0; // 0xa93 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0; // 0xb0a Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0xb0c Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	return 0; // 0xb0e Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xb3a PushV
	var_20_int = 0; var_21_object = Obj(); // 0xb3b PushV
	var_21_object = var_17_bool; // 0xb3c Mov
	func_5906(var_21_object); // 0xb3d NEW_2
	var_19_int = var_20_int; // 0xb3e Mov
	var_22_int = 0; // 0xb40 PushI
	var_23_bool = var_19_int > var_22_int; // 0xb41 GT
	if(var_23_bool == 0) goto Label_2893; // 0xb42 JumpB
	var_24_int = 1; // 0xb43 PushI
	var_25_bool = var_19_int > var_24_int; // 0xb44 GT
	if(var_25_bool == 0) goto Label_2889; // 0xb45 JumpB
	func_3067(var_19_int); // 0xb47 NEW_2
	
Label_2889:
	var_28_object = Obj(); // 0xb49 PushV
	var_28_object = var_17_bool; // 0xb4a Mov
	func_5909(var_28_object); // 0xb4b NEW_2
	
Label_2893:
	return 2; // 0xb4d Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xb4e PushV
	var_20_object = Obj(); // 0xb4f PushV
	var_20_object = var_17_bool; // 0xb50 Mov
	func_5712(var_20_object); // 0xb51 NEW_2
	var_29_int = 0; var_30_object = Obj(); // 0xb53 PushV
	var_30_object = var_17_bool; // 0xb54 Mov
	func_5771(var_29_int, var_30_object); // 0xb55 NEW_2
	var_19_int = var_29_int; // 0xb56 Mov
	var_65_int = 0; // 0xb58 PushI
	var_66_bool = var_19_int > var_65_int; // 0xb59 GT
	if(var_66_bool == 0) goto Label_2917; // 0xb5a JumpB
	var_67_int = 1; // 0xb5b PushI
	var_68_bool = var_19_int > var_67_int; // 0xb5c GT
	if(var_68_bool == 0) goto Label_2913; // 0xb5d JumpB
	func_3067(var_19_int); // 0xb5f NEW_2
	
Label_2913:
	var_71_object = Obj(); // 0xb61 PushV
	var_71_object = var_17_bool; // 0xb62 Mov
	func_5781(var_71_object); // 0xb63 NEW_2
	
Label_2917:
	return 2; // 0xb65 Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xb66 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0; // 0xb67 PushV
	var_23_object = var_17_bool; // 0xb68 Mov
	var_24_object = var_18_object; // 0xb69 Mov
	var_25_bool = var_19_bool; // 0xb6a Mov
	func_6224(var_22_bool, var_23_object, var_24_object, var_25_bool); // 0xb6b NEW_2
	if(var_22_bool == 0) goto Label_2945; // 0xb6d JumpB
	var_84_int = 0; var_85_object = Obj(); var_86_bool = 0; // 0xb6e PushV
	var_85_object = var_17_bool; // 0xb6f Mov
	var_86_bool = var_19_bool; // 0xb70 Mov
	func_5864(var_85_object, var_86_bool); // 0xb71 NEW_2
	var_21_int = var_84_int; // 0xb72 Mov
	var_117_int = 0; // 0xb74 PushI
	var_118_bool = var_21_int > var_117_int; // 0xb75 GT
	if(var_118_bool == 0) goto Label_2945; // 0xb76 JumpB
	var_119_int = 1; // 0xb77 PushI
	var_120_bool = var_21_int > var_119_int; // 0xb78 GT
	if(var_120_bool == 0) goto Label_2941; // 0xb79 JumpB
	func_3067(var_21_int); // 0xb7b NEW_2
	
Label_2941:
	var_123_object = Obj(); // 0xb7d PushV
	var_123_object = var_17_bool; // 0xb7e Mov
	func_5871(var_123_object); // 0xb7f NEW_2
	
Label_2945:
	return 2; // 0xb81 Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xb82 PushV
	var_20_int = 0; var_21_object = Obj(); // 0xb83 PushV
	var_21_object = var_17_bool; // 0xb84 Mov
	func_5916(var_20_int, var_21_object); // 0xb85 NEW_2
	var_19_int = var_20_int; // 0xb86 Mov
	var_62_int = 0; // 0xb88 PushI
	var_63_bool = var_19_int > var_62_int; // 0xb89 GT
	if(var_63_bool == 0) goto Label_2965; // 0xb8a JumpB
	var_64_int = 1; // 0xb8b PushI
	var_65_bool = var_19_int > var_64_int; // 0xb8c GT
	if(var_65_bool == 0) goto Label_2961; // 0xb8d JumpB
	func_3067(var_19_int); // 0xb8f NEW_2
	
Label_2961:
	var_68_object = Obj(); // 0xb91 PushV
	var_68_object = var_17_bool; // 0xb92 Mov
	func_5932(var_68_object); // 0xb93 NEW_2
	
Label_2965:
	return 2; // 0xb95 Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xb96 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0xb97 PushV
	var_22_object = var_17_object; // 0xb98 Mov
	var_23_string = var_18_bool; // 0xb99 Mov
	func_5626(var_21_bool, var_22_object, var_23_string); // 0xb9a NEW_2
	if(var_21_bool == 0) goto Label_2982; // 0xb9c JumpB
	func_3067(var_20_int); // 0xb9e NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0xba0 PushV
	var_51_object = var_17_object; // 0xba1 Mov
	var_52_string = var_18_bool; // 0xba2 Mov
	func_5658(var_51_object, var_52_string); // 0xba3 NEW_2
	goto Label_3002; // 0xba5 Jump
	
Label_3002:
	return 2; // 0xbba Return
	
Label_2982:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0xba6 PushV
	var_128_string = var_18_bool; // 0xba7 Mov
	var_129_object = var_17_object; // 0xba8 Mov
	func_5938(var_129_object); // 0xba9 NEW_2
	var_20_int = var_127_int; // 0xbaa Mov
	var_130_int = 0; // 0xbac PushI
	var_131_bool = var_20_int > var_130_int; // 0xbad GT
	if(var_131_bool == 0) goto Label_3002; // 0xbae JumpB
	var_132_int = 1; // 0xbaf PushI
	var_133_bool = var_20_int > var_132_int; // 0xbb0 GT
	if(var_133_bool == 0) goto Label_2997; // 0xbb1 JumpB
	func_3067(var_20_int); // 0xbb3 NEW_2
	
Label_2997:
	var_134_string = ""; var_135_object = Obj(); // 0xbb5 PushV
	var_134_string = var_18_bool; // 0xbb6 Mov
	var_135_object = var_17_object; // 0xbb7 Mov
	func_5941(); // 0xbb8 NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = ""; // 0xbbc PushV
	var_19_string = var_17_bool; // 0xbbd Mov
	func_5725(var_18_bool, var_19_string); // 0xbbe NEW_2
	if(var_18_bool == 0) goto Label_3016; // 0xbc0 JumpB
	func_3067(var_17_bool); // 0xbc2 NEW_2
	var_29_string = ""; // 0xbc4 PushV
	var_29_string = var_17_bool; // 0xbc5 Mov
	func_5741(var_29_string); // 0xbc6 NEW_2
	
Label_3016:
	return 0; // 0xbc8 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_object = var_0_object; // 0xbca PushT
	if(var_18_object == 0) goto Label_3021; // 0xbcb JumpB
	return 0; // 0xbcc Return
	
Label_3021:
	var_19_bool = 0; var_20_object = Obj(); // 0xbcd PushV
	var_20_object = var_17_bool; // 0xbce Mov
	func_5683(var_19_bool, var_20_object); // 0xbcf NEW_2
	if(var_19_bool == 0) goto Label_3034; // 0xbd1 JumpB
	func_3067(var_17_bool); // 0xbd3 NEW_2
	var_33_object = Obj(); // 0xbd5 PushV
	var_33_object = var_17_bool; // 0xbd6 Mov
	func_5706(var_33_object); // 0xbd7 NEW_2
	goto Label_3038; // 0xbd9 Jump
	
Label_3038:
	return 0; // 0xbde Return
	
Label_3034:
	var_35_object = Obj(); // 0xbda PushV
	var_35_object = var_17_bool; // 0xbdb Mov
	func_3089(var_17_bool, var_35_object); // 0xbdc NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_object = var_0_object; // 0xbe0 PushT
	if(var_18_object == 0) goto Label_3043; // 0xbe1 JumpB
	return 0; // 0xbe2 Return
	
Label_3043:
	var_19_object = Obj(); // 0xbe3 PushV
	var_19_object = var_17_bool; // 0xbe4 Mov
	func_3089(var_17_bool, var_19_object); // 0xbe5 NEW_2
	return 0; // 0xbe7 Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 110; // 0xbe9 PushI
	var_19_bool = var_17_bool != var_18_int; // 0xbea Neq
	if(var_19_bool == 0) goto Label_3053; // 0xbeb JumpB
	return 0; // 0xbec Return
	
Label_3053:
	var_1_object = 0; // 0xbed TMovB
	var_20_int = 110; // 0xbee PushI
	KillTimer(var_20_int); // 0xbef Func
	ResetAAS(); // 0xbf1 Func
	return 0; // 0xbf3 Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_3067(var_16_bool); // 0xbf5 NEW_2
	func_5915(); // 0xbf8 NEW_2
	return 0; // 0xbfa Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3067(var_17_bool); // 0xc0a NEW_2
	var_20_object = Obj(); // 0xc0c PushV
	var_20_object = var_17_bool; // 0xc0d Mov
	func_5602(); // 0xc0e NEW_2
	return 0; // 0xc10 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xc6a PushV
	var_20_int = 0; var_21_object = Obj(); // 0xc6b PushV
	var_21_object = var_17_bool; // 0xc6c Mov
	func_5906(var_21_object); // 0xc6d NEW_2
	var_19_int = var_20_int; // 0xc6e Mov
	var_22_int = 0; // 0xc70 PushI
	var_23_bool = var_19_int > var_22_int; // 0xc71 GT
	if(var_23_bool == 0) goto Label_3197; // 0xc72 JumpB
	var_24_int = 1; // 0xc73 PushI
	var_25_bool = var_19_int > var_24_int; // 0xc74 GT
	if(var_25_bool == 0) goto Label_3193; // 0xc75 JumpB
	func_3321(); // 0xc77 NEW_2
	
Label_3193:
	var_28_object = Obj(); // 0xc79 PushV
	var_28_object = var_17_bool; // 0xc7a Mov
	func_5909(var_28_object); // 0xc7b NEW_2
	
Label_3197:
	return 2; // 0xc7d Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xc7e PushV
	var_20_object = Obj(); // 0xc7f PushV
	var_20_object = var_17_bool; // 0xc80 Mov
	func_5712(var_20_object); // 0xc81 NEW_2
	var_29_int = 0; var_30_object = Obj(); // 0xc83 PushV
	var_30_object = var_17_bool; // 0xc84 Mov
	func_5771(var_29_int, var_30_object); // 0xc85 NEW_2
	var_19_int = var_29_int; // 0xc86 Mov
	var_65_int = 0; // 0xc88 PushI
	var_66_bool = var_19_int > var_65_int; // 0xc89 GT
	if(var_66_bool == 0) goto Label_3221; // 0xc8a JumpB
	var_67_int = 1; // 0xc8b PushI
	var_68_bool = var_19_int > var_67_int; // 0xc8c GT
	if(var_68_bool == 0) goto Label_3217; // 0xc8d JumpB
	func_3321(); // 0xc8f NEW_2
	
Label_3217:
	var_71_object = Obj(); // 0xc91 PushV
	var_71_object = var_17_bool; // 0xc92 Mov
	func_5781(var_71_object); // 0xc93 NEW_2
	
Label_3221:
	return 2; // 0xc95 Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xc96 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0; // 0xc97 PushV
	var_23_object = var_17_bool; // 0xc98 Mov
	var_24_object = var_18_object; // 0xc99 Mov
	var_25_bool = var_19_bool; // 0xc9a Mov
	func_6224(var_22_bool, var_23_object, var_24_object, var_25_bool); // 0xc9b NEW_2
	if(var_22_bool == 0) goto Label_3249; // 0xc9d JumpB
	var_84_int = 0; var_85_object = Obj(); var_86_bool = 0; // 0xc9e PushV
	var_85_object = var_17_bool; // 0xc9f Mov
	var_86_bool = var_19_bool; // 0xca0 Mov
	func_5864(var_85_object, var_86_bool); // 0xca1 NEW_2
	var_21_int = var_84_int; // 0xca2 Mov
	var_117_int = 0; // 0xca4 PushI
	var_118_bool = var_21_int > var_117_int; // 0xca5 GT
	if(var_118_bool == 0) goto Label_3249; // 0xca6 JumpB
	var_119_int = 1; // 0xca7 PushI
	var_120_bool = var_21_int > var_119_int; // 0xca8 GT
	if(var_120_bool == 0) goto Label_3245; // 0xca9 JumpB
	func_3321(); // 0xcab NEW_2
	
Label_3245:
	var_123_object = Obj(); // 0xcad PushV
	var_123_object = var_17_bool; // 0xcae Mov
	func_5871(var_123_object); // 0xcaf NEW_2
	
Label_3249:
	return 2; // 0xcb1 Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xcb2 PushV
	var_20_int = 0; var_21_object = Obj(); // 0xcb3 PushV
	var_21_object = var_17_bool; // 0xcb4 Mov
	func_5916(var_20_int, var_21_object); // 0xcb5 NEW_2
	var_19_int = var_20_int; // 0xcb6 Mov
	var_62_int = 0; // 0xcb8 PushI
	var_63_bool = var_19_int > var_62_int; // 0xcb9 GT
	if(var_63_bool == 0) goto Label_3269; // 0xcba JumpB
	var_64_int = 1; // 0xcbb PushI
	var_65_bool = var_19_int > var_64_int; // 0xcbc GT
	if(var_65_bool == 0) goto Label_3265; // 0xcbd JumpB
	func_3321(); // 0xcbf NEW_2
	
Label_3265:
	var_68_object = Obj(); // 0xcc1 PushV
	var_68_object = var_17_bool; // 0xcc2 Mov
	func_5932(var_68_object); // 0xcc3 NEW_2
	
Label_3269:
	return 2; // 0xcc5 Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xcc6 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0xcc7 PushV
	var_22_object = var_17_object; // 0xcc8 Mov
	var_23_string = var_18_bool; // 0xcc9 Mov
	func_5626(var_21_bool, var_22_object, var_23_string); // 0xcca NEW_2
	if(var_21_bool == 0) goto Label_3286; // 0xccc JumpB
	func_3321(); // 0xcce NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0xcd0 PushV
	var_51_object = var_17_object; // 0xcd1 Mov
	var_52_string = var_18_bool; // 0xcd2 Mov
	func_5658(var_51_object, var_52_string); // 0xcd3 NEW_2
	goto Label_3306; // 0xcd5 Jump
	
Label_3306:
	return 2; // 0xcea Return
	
Label_3286:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0xcd6 PushV
	var_128_string = var_18_bool; // 0xcd7 Mov
	var_129_object = var_17_object; // 0xcd8 Mov
	func_5938(var_129_object); // 0xcd9 NEW_2
	var_20_int = var_127_int; // 0xcda Mov
	var_130_int = 0; // 0xcdc PushI
	var_131_bool = var_20_int > var_130_int; // 0xcdd GT
	if(var_131_bool == 0) goto Label_3306; // 0xcde JumpB
	var_132_int = 1; // 0xcdf PushI
	var_133_bool = var_20_int > var_132_int; // 0xce0 GT
	if(var_133_bool == 0) goto Label_3301; // 0xce1 JumpB
	func_3321(); // 0xce3 NEW_2
	
Label_3301:
	var_134_string = ""; var_135_object = Obj(); // 0xce5 PushV
	var_134_string = var_18_bool; // 0xce6 Mov
	var_135_object = var_17_object; // 0xce7 Mov
	func_5941(); // 0xce8 NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_string, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = ""; // 0xcec PushV
	var_19_string = var_17_bool; // 0xced Mov
	func_5725(var_18_bool, var_19_string); // 0xcee NEW_2
	if(var_18_bool == 0) goto Label_3320; // 0xcf0 JumpB
	func_3321(); // 0xcf2 NEW_2
	var_29_string = ""; // 0xcf4 PushV
	var_29_string = var_17_bool; // 0xcf5 Mov
	func_5741(var_29_string); // 0xcf6 NEW_2
	
Label_3320:
	return 0; // 0xcf8 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3321(); // 0xd06 NEW_2
	var_20_object = Obj(); // 0xd08 PushV
	var_20_object = var_17_bool; // 0xd09 Mov
	func_5602(); // 0xd0a NEW_2
	return 0; // 0xd0c Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); // 0xd0d PushV
	var_22_int = 111; // 0xd0e PushI
	var_23_bool = var_17_bool != var_22_int; // 0xd0f Neq
	if(var_23_bool == 0) goto Label_3346; // 0xd10 JumpB
	return 4; // 0xd11 Return
	
Label_3346:
	var_24_bool = 0; var_25_object = Obj(); // 0xd12 PushV
	var_25_object = var_0_object; // 0xd13 MovT
	func_4496(var_24_bool, var_25_object); // 0xd14 NEW_2
	var_58_bool = var_24_bool == 0; // 0xd16 Not
	if(var_58_bool == 0) goto Label_3356; // 0xd17 JumpB
	func_3321(); // 0xd19 NEW_2
	return 4; // 0xd1b Return
	
Label_3356:
	GetDirection(var_20_cvector); // 0xd1c Func
	var_61_cvector = CVector(0,0,0); var_62_object = Obj(); // 0xd1e PushV
	var_62_object = var_0_object; // 0xd1f MovT
	func_4350(var_62_object); // 0xd20 NEW_2
	var_21_cvector = var_61_cvector; // 0xd21 Mov
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0xd23 PushV
	var_68_cvector = var_20_cvector; // 0xd24 Mov
	var_69_cvector = var_21_cvector; // 0xd25 Mov
	func_4898(var_67_float, var_68_cvector, var_69_cvector); // 0xd26 NEW_2
	var_91_float = 0.5; // 0xd28 PushF
	var_92_bool = var_67_float < var_91_float; // 0xd29 LT
	if(var_92_bool == 0) goto Label_3375; // 0xd2a JumpB
	var_93_object = Obj(); // 0xd2b PushV
	var_93_object = var_0_object; // 0xd2c MovT
	func_4646(); // 0xd2d NEW_2
	
Label_3375:
	return 4; // 0xd2f Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_3321(); // 0xd31 NEW_2
	func_5915(); // 0xd34 NEW_2
	return 0; // 0xd36 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); // 0xd38 PushV
	var_19_object = var_17_bool; // 0xd39 Mov
	func_5683(var_18_bool, var_19_object); // 0xd3a NEW_2
	if(var_18_bool == 0) goto Label_3396; // 0xd3c JumpB
	func_3321(); // 0xd3e NEW_2
	var_32_object = Obj(); // 0xd40 PushV
	var_32_object = var_17_bool; // 0xd41 Mov
	func_5706(var_32_object); // 0xd42 NEW_2
	
Label_3396:
	return 0; // 0xd44 Return
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_4143(var_16_bool); // 0xfea NEW_2
	func_5915(); // 0xfed NEW_2
	return 0; // 0xfef Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_int)
{
	var_18_int = 1; // 0x1022 PushI
	var_19_bool = var_17_int == var_18_int; // 0x1023 Eq
	if(var_19_bool == 0) goto Label_4138; // 0x1024 JumpB
	var_20_object = Obj(); // 0x1025 PushV
	var_20_object = var_1_object; // 0x1026 MovT
	func_4946(var_20_object); // 0x1027 NEW_2
	goto Label_4142; // 0x1029 Jump
	
Label_4142:
	return 0; // 0x102e Return
	
Label_4138:
	var_25_int = 0; // 0x102a PushV
	var_25_int = var_17_int; // 0x102b Mov
	func_4287(var_16_bool, var_17_int, var_25_int); // 0x102c NEW_2
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0x103d PushV
	var_18_bool = 0; // 0x103e MovB
	var_19_bool = var_1_object == var_17_object; // 0x103f Eq
	if(var_19_bool == 0) goto Label_4164; // 0x1040 JumpB
	var_20_bool = var_2_object == 0; // 0x1041 Not
	if(var_20_bool == 0) goto Label_4164; // 0x1042 JumpB
	var_18_bool = 1; // 0x1043 MovB
	
Label_4164:
	if(var_18_bool == 0) goto Label_4170; // 0x1044 JumpB
	var_2_object = 1; // 0x1045 TMovB
	var_21_object = Obj(); // 0x1046 PushV
	var_21_object = var_17_object; // 0x1047 Mov
	func_4780(var_21_object); // 0x1048 NEW_2
	
Label_4170:
	return 0; // 0x104a Return
}


task_6_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0x104c PushV
	var_18_bool = 0; // 0x104d MovB
	var_19_bool = var_1_object == var_17_object; // 0x104e Eq
	if(var_19_bool == 0) goto Label_4179; // 0x104f JumpB
	var_20_object = var_2_object; // 0x1050 PushT
	if(var_20_object == 0) goto Label_4179; // 0x1051 JumpB
	var_18_bool = 1; // 0x1052 MovB
	
Label_4179:
	if(var_18_bool == 0) goto Label_4184; // 0x1053 JumpB
	var_2_object = 0; // 0x1054 TMovB
	var_21_string = "head"; // 0x1055 PushS
	UnlookAsync(var_21_string); // 0x1056 Func
	
Label_4184:
	return 0; // 0x1058 Return
}


task_6_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	RequestClearPath(var_17_object); // 0x10d2 Func
	return 0; // 0x10d4 Return
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	func_4143(var_17_object); // 0x10de NEW_2
	var_22_object = Obj(); // 0x10e0 PushV
	var_22_object = var_17_object; // 0x10e1 Mov
	func_5602(); // 0x10e2 NEW_2
	return 0; // 0x10e4 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0x15d5 PushV
	var_21_string = "health"; // 0x15d6 PushS
	var_22_bool = var_18_string == var_21_string; // 0x15d7 Eq
	if(var_22_bool == 0) goto Label_5601; // 0x15d8 JumpB
	var_23_string = "health"; // 0x15d9 PushS
	GetProperty(var_23_string, var_20_float); // 0x15da Func
	var_24_int = 0; // 0x15dc PushI
	var_25_bool = var_20_float <= var_24_int; // 0x15dd LE
	if(var_25_bool == 0) goto Label_5601; // 0x15de JumpB
	SignalDeath(var_17_object); // 0x15df Func
	
Label_5601:
	return 2; // 0x15e1 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_object = Obj(); // 0x15e3 PushV
	var_18_object = var_17_object; // 0x15e4 Mov
	func_5581(var_18_object); // 0x15e5 NEW_2
	return 0; // 0x15e7 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0x15e9 PushV
	var_21_object = var_17_object; // 0x15ea Mov
	var_22_int = var_18_int; // 0x15eb Mov
	var_23_float = var_19_float; // 0x15ec Mov
	func_4564(var_21_object, var_22_int, var_23_float); // 0x15ed NEW_2
	return 0; // 0x15ef Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x15f1 PushV
	var_23_object = var_17_object; // 0x15f2 Mov
	var_24_int = var_18_int; // 0x15f3 Mov
	var_25_float = var_19_float; // 0x15f4 Mov
	var_26_cvector = var_21_cvector; // 0x15f5 Mov
	var_27_cvector = var_22_cvector; // 0x15f6 Mov
	func_4632(var_25_float, var_26_cvector, var_27_cvector); // 0x15f7 NEW_2
	return 0; // 0x15f9 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; // 0xb0f PushV
	var_0_object = 0; // 0xb10 TMovB
	var_21_bool = 1; // 0xb11 PushB
	SensePlayerOnly(var_21_bool); // 0xb12 Func
	func_6166(); // 0xb15 NEW_2
	func_2865(); // 0xb18 NEW_2
	
Label_2842:
	var_141_int = 2; // 0xb1a PushI
	irand(var_19_int, var_141_int); // 0xb1b Func
	var_142_int = 0; // 0xb1d PushI
	var_143_bool = var_19_int == var_142_int; // 0xb1e Eq
	if(var_143_bool == 0) goto Label_2856; // 0xb1f JumpB
	var_0_object = 1; // 0xb20 TMovB
	func_6192(); // 0xb22 NEW_2
	var_0_object = 0; // 0xb24 TMovB
	ResetAAS(); // 0xb25 Func
	goto Label_2863; // 0xb27 Jump
	
Label_2863:
	goto Label_2842; // 0xb2f Jump
	
Label_2856:
	var_161_int = 4; // 0xb28 PushI
	irand(var_20_int, var_161_int); // 0xb29 Func
	var_162_int = 1; // 0xb2b PushI
	var_163_int = var_20_int + var_162_int; // 0xb2c Add
	Sleep(var_163_int); // 0xb2d Func
}


func_0(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x0 PushV
	var_0_object = var_43_object; // 0x1 TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x2 PushV
	var_54_object = var_43_object; // 0x3 Mov
	var_55_float = 70.0; // 0x4 MovF
	func_4662(var_54_object, var_55_float); // 0x5 NEW_2
	var_100_bool = var_53_bool == 0; // 0x7 Not
	if(var_100_bool == 0) goto Label_11; // 0x8 JumpB
	var_42_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_49_object); // 0xb Func
	var_101_int = 0; // 0xd PushV
	func_6158(var_101_int); // 0xe NEW_2
	SetNPCName(var_101_int); // 0x10 ObjFunc
	var_102_int = 0; // 0x12 PushV
	func_6156(var_102_int); // 0x13 NEW_2
	SetNPCDescription(var_102_int); // 0x15 ObjFunc
	var_103_string = ""; // 0x17 PushV
	func_6160(var_103_string); // 0x18 NEW_2
	SetPhoto(var_103_string); // 0x1a ObjFunc
	var_104_string = ""; // 0x1c PushV
	func_6162(var_104_string); // 0x1d NEW_2
	SetPhoto2(var_104_string); // 0x1f ObjFunc
	var_105_int = 0; // 0x21 PushV
	func_5224(var_105_int); // 0x22 NEW_2
	SetPlayerName(var_105_int); // 0x24 ObjFunc
	var_51_int = -1; // 0x26 MovI
	IsOverrideActive(var_50_bool); // 0x27 Func
	var_113_bool = var_50_bool; // 0x29 Push
	if(var_113_bool == 0) goto Label_45; // 0x2a JumpB
	var_42_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_49_object); // 0x2d Func
	var_114_object = Obj(); var_115_object = Obj(); // 0x2f PushV
	var_114_object = var_43_object; // 0x30 Mov
	var_115_object = var_49_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_116_object, var_117_object, var_118_string, var_119_bool, var_114_object, var_115_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_52_bool); // 0x36 ObjFunc
	
Label_56:
	var_429_bool = var_52_bool == 0; // 0x38 Not
	if(var_429_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_52_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_430_object = Obj(); // 0x3f PushV
	var_430_object = var_43_object; // 0x40 Mov
	func_4731(); // 0x41 NEW_2
	StopDialog(var_49_object); // 0x43 Func
	GetReturnValue(var_51_int); // 0x45 ObjFunc
	var_42_int = var_51_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_5127(var_198_bool, var_199_object)
{
	var_200_bool = 0; var_201_object = Obj(); // 0x1408 PushV
	var_201_object = var_199_object; // 0x1409 Mov
	func_5217(var_201_object); // 0x140a NEW_2
	if(var_200_bool == 0) goto Label_5135; // 0x140c JumpB
	var_198_bool = 1; // 0x140d MovB
	return 0; // 0x140e Return
	
Label_5135:
	var_198_bool = 0; // 0x140f MovB
	return 0; // 0x1410 Return
}


func_6156(var_102_int)
{
	var_102_int = 515568; // 0x180c MovI
	return 0; // 0x180d Return
}


func_6158(var_101_int)
{
	var_101_int = 503353; // 0x180e MovI
	return 0; // 0x180f Return
}


func_6160(var_103_string)
{
	var_103_string = "ui/NPC_Citizen1.png"; // 0x1810 MovS
	return 0; // 0x1811 Return
}


func_3089(var_1_object, var_19_object)
{
	var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; // 0xc11 PushV
	var_24_object = var_1_object; // 0xc12 PushT
	if(var_24_object == 0) goto Label_3093; // 0xc13 JumpB
	return 4; // 0xc14 Return
	
Label_3093:
	IsPlayerActor(var_19_object, var_22_bool); // 0xc15 Func
	var_25_bool = var_22_bool == 0; // 0xc17 Not
	if(var_25_bool == 0) goto Label_3098; // 0xc18 JumpB
	return 4; // 0xc19 Return
	
Label_3098:
	var_26_int = 0; var_27_object = Obj(); // 0xc1a PushV
	var_27_object = var_19_object; // 0xc1b Mov
	func_5754(var_27_object); // 0xc1c NEW_2
	var_23_int = var_26_int; // 0xc1d Mov
	var_29_int = 0; // 0xc1f PushI
	var_30_bool = var_23_int > var_29_int; // 0xc20 GT
	if(var_30_bool == 0) goto Label_3121; // 0xc21 JumpB
	var_31_int = 1; // 0xc22 PushI
	var_32_bool = var_23_int > var_31_int; // 0xc23 GT
	if(var_32_bool == 0) goto Label_3112; // 0xc24 JumpB
	func_3067(var_23_int); // 0xc26 NEW_2
	
Label_3112:
	var_35_object = Obj(); // 0xc28 PushV
	var_35_object = var_19_object; // 0xc29 Mov
	func_5763(var_35_object); // 0xc2a NEW_2
	var_1_object = 1; // 0xc2c TMovB
	var_100_int = 110; // 0xc2d PushI
	var_101_float = 5.0; // 0xc2e PushF
	SetTimer(var_100_int, var_101_float); // 0xc2f Func
	
Label_3121:
	return 4; // 0xc31 Return
}


func_6162(var_104_string)
{
	var_104_string = "ui/NPC_Citizen1_b.png"; // 0x1812 MovS
	return 0; // 0x1813 Return
}


func_5137(var_170_bool)
{
	var_172_int = 0; // 0x1412 PushV
	func_4937(var_172_int); // 0x1413 NEW_2
	var_173_int = 6; // 0x1415 PushI
	var_170_bool = var_172_int <= var_173_int; // 0x1416 LE2
	return 0; // 0x1417 Return
}


func_6164(var_96_bool)
{
	var_96_bool = 0; // 0x1814 MovB
	return 0; // 0x1815 Return
}


func_6166()
{
	var_22_bool = GlobalVars[0]; // 0x1816 PushGE
	var_22_bool = 0; // 0x1817 MovB
	GlobalVars[0] = var_22_bool; // 0x1818 PopGE
	var_23_bool = 0; // 0x1819 PushV
	var_23_bool = 1; // 0x181a MovB
	func_5401(var_23_bool); // 0x181b NEW_2
	return 0; // 0x181d Return
}


func_4632(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x1218 PushV
	GetScene(var_30_object); // 0x1219 Func
	var_32_string = "scripted"; // 0x121b PushS
	var_33_string = "blood_dir.xml"; // 0x121c PushS
	AddActorByType(var_31_object, var_32_string, var_30_object, var_26_cvector, var_27_cvector, var_33_string); // 0x121d Func
	var_34_object = Obj(); // 0x121f PushV
	var_34_object = var_23_object; // 0x1220 Mov
	func_4520(var_34_object); // 0x1221 NEW_2
	return 4; // 0x1223 Return
}


func_5144(var_392_bool)
{
	var_392_bool = 0; // 0x1419 MovB
	return 0; // 0x141a Return
}


func_5658(var_51_object, var_52_string)
{
	var_53_string = "unholster"; // 0x161b PushS
	var_54_bool = var_52_string == var_53_string; // 0x161c Eq
	if(var_54_bool == 0) goto Label_5667; // 0x161d JumpB
	var_55_object = Obj(); // 0x161e PushV
	var_55_object = var_51_object; // 0x161f Mov
	func_5946(); // 0x1620 NEW_2
	goto Label_5682; // 0x1622 Jump
	
Label_5682:
	return 0; // 0x1632 Return
	
Label_5667:
	var_56_string = "player_shot"; // 0x1623 PushS
	var_57_bool = var_52_string == var_56_string; // 0x1624 Eq
	if(var_57_bool == 0) goto Label_5675; // 0x1625 JumpB
	var_58_object = Obj(); // 0x1626 PushV
	var_58_object = var_51_object; // 0x1627 Mov
	func_5963(var_58_object); // 0x1628 NEW_2
	goto Label_5682; // 0x162a Jump
	
Label_5675:
	var_124_string = "battle"; // 0x162b PushS
	var_125_bool = var_52_string == var_124_string; // 0x162c Eq
	if(var_125_bool == 0) goto Label_5682; // 0x162d JumpB
	var_126_object = Obj(); // 0x162e PushV
	var_126_object = var_51_object; // 0x162f Mov
	func_5972(); // 0x1630 NEW_2
}


func_5147(var_151_bool)
{
	var_153_int = 0; // 0x141c PushV
	func_4937(var_153_int); // 0x141d NEW_2
	var_159_int = 1; // 0x141f PushI
	var_151_bool = var_153_int == var_159_int; // 0x1420 Eq2
	return 0; // 0x1421 Return
}


func_6174(var_29_object)
{
	var_30_bool = 0; var_31_bool = 0; // 0x181e PushV
	var_32_bool = GlobalVars[0]; // 0x181f PushGE
	if(var_32_bool == 0) goto Label_6187; // 0x1820 JumpB
	IsOverrideActive(var_31_bool); // 0x1821 Func
	var_33_bool = var_31_bool == 0; // 0x1823 Not
	if(var_33_bool == 0) goto Label_6185; // 0x1824 JumpB
	var_34_object = Obj(); // 0x1825 PushV
	var_34_object = var_29_object; // 0x1826 Mov
	func_5316(var_34_object); // 0x1827 NEW_2
	
Label_6185:
	return 2; // 0x1829 Return
	
Label_6187:
	var_41_object = Obj(); // 0x182b PushV
	var_41_object = var_29_object; // 0x182c Mov
	func_6141(var_31_bool, var_41_object); // 0x182d NEW_2
	return 2; // 0x182f Return
}


func_5154(var_163_bool)
{
	var_165_int = 0; // 0x1423 PushV
	func_4937(var_165_int); // 0x1424 NEW_2
	var_166_int = 2; // 0x1426 PushI
	var_163_bool = var_165_int == var_166_int; // 0x1427 Eq2
	return 0; // 0x1428 Return
}


func_4646()
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); // 0x1226 PushV
	GetPosition(var_97_cvector); // 0x1227 ObjFunc
	GetPosition(var_98_cvector); // 0x1229 Func
	var_99_cvector = var_97_cvector - var_98_cvector; // 0x122b Sub2
	var_100_float = GetByIndex(var_99_cvector, 0); // 0x122c PushE
	var_101_float = GetByIndex(var_99_cvector, 2); // 0x122d PushE
	RotateAsync(var_100_float, var_101_float); // 0x122e Func
	return 6; // 0x1230 Return
}


func_5161(var_349_bool)
{
	var_351_int = 0; // 0x142a PushV
	func_4937(var_351_int); // 0x142b NEW_2
	var_352_int = 3; // 0x142d PushI
	var_349_bool = var_351_int == var_352_int; // 0x142e Eq2
	return 0; // 0x142f Return
}


func_4143(var_2_object)
{
	var_18_int = 1; // 0x102f PushI
	KillTimer(var_18_int); // 0x1030 Func
	var_19_object = var_2_object; // 0x1032 PushT
	if(var_19_object == 0) goto Label_4152; // 0x1033 JumpB
	var_2_object = 0; // 0x1034 TMovB
	var_20_string = "head"; // 0x1035 PushS
	UnlookAsync(var_20_string); // 0x1036 Func
	
Label_4152:
	func_4309(var_17_object); // 0x1039 NEW_2
	return 0; // 0x103b Return
}


func_6192()
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_int = 0; var_148_bool = 0; var_149_int = 0; // 0x1830 PushV
	var_147_int = 0; // 0x1831 MovI
	
Label_6194:
	var_150_string = "all"; // 0x1832 PushS
	var_151_string = ""; var_152_int = 0; // 0x1833 PushV
	var_152_int = var_147_int; // 0x1834 Mov
	func_5979(var_151_string, var_152_int); // 0x1835 NEW_2
	HasAnimation(var_148_bool, var_150_string, var_151_string); // 0x1837 Func
	var_156_bool = var_148_bool == 0; // 0x1839 Not
	if(var_156_bool == 0) goto Label_6204; // 0x183a JumpB
	goto Label_6207; // 0x183b Jump
	
Label_6207:
	irand(var_149_int, var_147_int); // 0x183f Func
	var_157_string = "all"; // 0x1841 PushS
	var_158_string = ""; var_159_int = 0; // 0x1842 PushV
	var_159_int = var_149_int; // 0x1843 Mov
	func_5979(var_158_string, var_159_int); // 0x1844 NEW_2
	PlayAnimation(var_157_string, var_158_string); // 0x1846 Func
	WaitForAnimEnd(); // 0x1848 Func
	return 6; // 0x184a Return
	
Label_6204:
	var_160_int = 1; // 0x183c PushI
	var_147_int = var_147_int + var_160_int; // 0x183d Add2
	goto Label_6194; // 0x183e Jump
}


func_4657(var_137_bool)
{
	var_138_bool = 0; var_139_bool = 0; // 0x1231 PushV
	IsLoaded(var_139_bool); // 0x1232 Func
	var_137_bool = var_139_bool; // 0x1234 Mov
	return 2; // 0x1235 Return
}


func_5168(var_361_bool)
{
	var_363_int = 0; // 0x1431 PushV
	func_4937(var_363_int); // 0x1432 NEW_2
	var_364_int = 5; // 0x1434 PushI
	var_361_bool = var_363_int == var_364_int; // 0x1435 Eq2
	return 0; // 0x1436 Return
}


func_5683(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x1633 PushV
	var_22_bool = 0; // 0x1634 PushV
	var_22_bool = 0; // 0x1635 MovB
	var_23_bool = 0; var_24_object = Obj(); // 0x1636 PushV
	var_24_object = var_19_object; // 0x1637 Mov
	func_5943(var_24_object); // 0x1638 NEW_2
	if(var_23_bool == 0) goto Label_5697; // 0x163a JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x163b PushV
	var_26_object = var_19_object; // 0x163c Mov
	func_4365(var_25_bool, var_26_object); // 0x163d NEW_2
	if(var_25_bool == 0) goto Label_5697; // 0x163f JumpB
	var_22_bool = 1; // 0x1640 MovB
	
Label_5697:
	if(var_22_bool == 0) goto Label_5704; // 0x1641 JumpB
	IsWeaponHolstered(var_21_bool); // 0x1642 ObjFunc
	var_29_bool = var_21_bool == 0; // 0x1644 Not
	if(var_29_bool == 0) goto Label_5704; // 0x1645 JumpB
	var_18_bool = 1; // 0x1646 MovB
	return 2; // 0x1647 Return
	
Label_5704:
	var_18_bool = 0; // 0x1648 MovB
	return 2; // 0x1649 Return
}


func_3122(var_0_object, var_60_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; // 0xc32 PushV
	var_0_object = var_60_object; // 0xc33 TMov
	func_3173(var_67_bool); // 0xc35 NEW_2
	GetDirection(var_65_cvector); // 0xc37 Func
	var_75_cvector = CVector(0,0,0); var_76_object = Obj(); // 0xc39 PushV
	var_76_object = var_0_object; // 0xc3a MovT
	func_4350(var_76_object); // 0xc3b NEW_2
	var_66_cvector = var_75_cvector; // 0xc3c Mov
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0xc3e PushV
	var_82_cvector = var_65_cvector; // 0xc3f Mov
	var_83_cvector = var_66_cvector; // 0xc40 Mov
	func_4898(var_81_float, var_82_cvector, var_83_cvector); // 0xc41 NEW_2
	var_105_int = 0; // 0xc43 PushI
	var_106_bool = var_81_float < var_105_int; // 0xc44 LT
	if(var_106_bool == 0) goto Label_3148; // 0xc45 JumpB
	var_107_object = Obj(); // 0xc46 PushV
	var_107_object = var_0_object; // 0xc47 MovT
	func_4646(); // 0xc48 NEW_2
	var_67_bool = 1; // 0xc4a MovB
	goto Label_3151; // 0xc4b Jump
	
Label_3151:
	var_116_bool = var_67_bool; // 0xc4f Push
	if(var_116_bool == 0) goto Label_3167; // 0xc50 JumpB
	var_117_object = Obj(); // 0xc51 PushV
	var_117_object = var_0_object; // 0xc52 MovT
	func_4646(); // 0xc53 NEW_2
	var_118_int = 111; // 0xc55 PushI
	var_119_float = 0.5; // 0xc56 PushF
	SetTimer(var_118_int, var_119_float); // 0xc57 Func
	var_120_float = 5.0; // 0xc59 PushF
	Sleep(var_120_float); // 0xc5a Func
	var_121_int = 111; // 0xc5c PushI
	KillTimer(var_121_int); // 0xc5d Func
	
Label_3167:
	StopAsync(); // 0xc5f Func
	var_122_string = "head"; // 0xc61 PushS
	UnlookAsync(var_122_string); // 0xc62 Func
	return 6; // 0xc64 Return
	
Label_3148:
	var_123_float = 1.5; // 0xc4c PushF
	Sleep(var_123_float, var_67_bool); // 0xc4d Func
}


func_4662(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0x1236 PushV
	GetPosition(var_66_cvector); // 0x1237 ObjFunc
	GetEyesHeight(var_65_float); // 0x1239 ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x123b PushE
	var_74_float = var_74_float + var_65_float; // 0x123c Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x123d PopE
	GetPosition(var_67_cvector); // 0x123e Func
	GetEyesHeight(var_65_float); // 0x1240 Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x1242 PushE
	var_75_float = var_75_float + var_65_float; // 0x1243 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x1244 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x1245 Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x1246 PushE
	var_76_float = 0; // 0x1247 MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x1248 PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0x1249 Or
	var_78_float = sqrt(var_77_int); // 0x124a Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x124b Div2
	var_69_cvector = -var_68_cvector; // 0x124c Neg2
	var_79_float = var_68_cvector * var_55_float; // 0x124d Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x124e PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x124f PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x1250 Xor2
	func_4845(var_80_cvector, var_81_cvector); // 0x1251 NEW_2
	var_88_int = 25; // 0x1253 PushI
	var_89_float = var_80_cvector * var_88_int; // 0x1254 Mult
	var_90_int = var_79_float + var_89_float; // 0x1255 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x1256 PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x1257 Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x1258 Add2
	IsOverrideActive(var_72_bool); // 0x1259 Func
	var_92_bool = var_72_bool; // 0x125b Push
	if(var_92_bool == 0) goto Label_4703; // 0x125c JumpB
	var_53_bool = 0; // 0x125d MovB
	return 18; // 0x125e Return
	
Label_4703:
	StopWorld(); // 0x125f Func
	var_93_bool = 1; // 0x1261 PushB
	CameraTransit(var_71_cvector, var_69_cvector, var_93_bool); // 0x1262 Func
	var_94_float = GetByIndex(var_70_cvector, 0); // 0x1264 PushE
	var_95_float = GetByIndex(var_70_cvector, 2); // 0x1265 PushE
	Rotate(var_94_float, var_95_float); // 0x1266 Func
	var_96_bool = 0; // 0x1268 PushV
	func_6164(var_96_bool); // 0x1269 NEW_2
	if(var_96_bool == 0) goto Label_4717; // 0x126b JumpB
	goto Label_4725; // 0x126c Jump
	
Label_4725:
	CameraWaitForPlayFinish(); // 0x1275 Func
	ResumeWorld(); // 0x1277 Func
	var_53_bool = 1; // 0x1279 MovB
	return 18; // 0x127a Return
	
Label_4717:
	var_97_string = "head"; // 0x126d PushS
	HasAnimationTrack(var_73_bool, var_97_string); // 0x126e Func
	var_98_bool = var_73_bool; // 0x1270 Push
	if(var_98_bool == 0) goto Label_4725; // 0x1271 JumpB
	var_99_string = "head"; // 0x1272 PushS
	LookAsyncCamera(var_99_string); // 0x1273 Func
}


func_5175(var_370_bool)
{
	var_372_int = 0; // 0x1438 PushV
	func_4937(var_372_int); // 0x1439 NEW_2
	var_373_int = 6; // 0x143b PushI
	var_370_bool = var_372_int == var_373_int; // 0x143c Eq2
	return 0; // 0x143d Return
}


func_3640(var_1_object, var_2_object, var_4_bool)
{
	var_102_bool = 0; var_103_bool = 0; var_104_cvector = CVector(0,0,0); var_105_bool = 0; var_106_bool = 0; var_107_cvector = CVector(0,0,0); // 0xe38 PushV
	var_1_object = 0; // 0xe39 TMovI
	
Label_3642:
	var_108_string = "all"; // 0xe3a PushS
	var_109_string = "attack_begin"; // 0xe3b PushS
	var_110_int = 1; // 0xe3c PushI
	var_111_int = var_1_object + var_110_int; // 0xe3d Add
	var_112_int = var_109_string + var_111_int; // 0xe3e Add
	HasAnimation(var_105_bool, var_108_string, var_112_int); // 0xe3f Func
	var_113_bool = var_105_bool == 0; // 0xe41 Not
	if(var_113_bool == 0) goto Label_3652; // 0xe42 JumpB
	goto Label_3655; // 0xe43 Jump
	
Label_3655:
	var_2_object = 0; // 0xe47 TMovI
	
Label_3656:
	var_114_string = "attack"; // 0xe48 PushS
	var_115_int = 1; // 0xe49 PushI
	var_116_int = var_2_object + var_115_int; // 0xe4a Add
	var_117_int = var_114_string + var_116_int; // 0xe4b Add
	IsExisting3DSound(var_106_bool, var_117_int); // 0xe4c Func
	var_118_bool = var_106_bool == 0; // 0xe4e Not
	if(var_118_bool == 0) goto Label_3665; // 0xe4f JumpB
	goto Label_3668; // 0xe50 Jump
	
Label_3668:
	var_119_string = "all"; // 0xe54 PushS
	var_120_string = "bjump"; // 0xe55 PushS
	GetAnimationOffset(var_107_cvector, var_119_string, var_120_string); // 0xe56 Func
	var_121_float = GetByIndex(var_107_cvector, 2); // 0xe58 PushE
	var_4_bool = -var_121_float; // 0xe59 Neg2
	return 6; // 0xe5a Return
	
Label_3665:
	var_122_int = 1; // 0xe51 PushI
	var_2_object = var_2_object + var_122_int; // 0xe52 Add2
	goto Label_3656; // 0xe53 Jump
	
Label_3652:
	var_123_int = 1; // 0xe44 PushI
	var_1_object = var_1_object + var_123_int; // 0xe45 Add2
	goto Label_3642; // 0xe46 Jump
}


func_5182(var_210_bool)
{
	var_212_int = 0; // 0x143f PushV
	func_4937(var_212_int); // 0x1440 NEW_2
	var_213_int = 7; // 0x1442 PushI
	var_210_bool = var_212_int == var_213_int; // 0x1443 Eq2
	return 0; // 0x1444 Return
}


func_5189(var_216_bool)
{
	var_218_int = 0; // 0x1446 PushV
	func_4937(var_218_int); // 0x1447 NEW_2
	var_219_int = 8; // 0x1449 PushI
	var_216_bool = var_218_int == var_219_int; // 0x144a Eq2
	return 0; // 0x144b Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_114_object, var_115_object)
{
	var_0_object = var_115_object; // 0x4b TMov
	var_1_object = var_114_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_120_int = 1; // 0x4e PushI
	if(var_120_int == 0) goto Label_571; // 0x4f JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x50 PushV
	var_122_object = var_1_object; // 0x51 MovT
	func_4995(var_122_object); // 0x52 NEW_2
	if(var_121_bool == 0) goto Label_323; // 0x54 JumpB
	var_129_string = ""; // 0x55 PushV
	var_129_string = "Neutral"; // 0x56 MovS
	func_601(var_115_object, var_129_string); // 0x57 NEW_2
	var_146_int = 543041; // 0x59 PushI
	SetMessage(var_146_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_147_bool = 0; // 0x5e PushV
	var_147_bool = 0; // 0x5f MovB
	var_148_bool = 0; // 0x60 PushV
	var_148_bool = 0; // 0x61 MovB
	var_149_bool = 0; var_150_object = Obj(); // 0x62 PushV
	var_150_object = var_1_object; // 0x63 MovT
	func_5027(var_149_bool, var_150_object); // 0x64 NEW_2
	var_160_bool = var_149_bool == 0; // 0x66 Not
	if(var_160_bool == 0) goto Label_111; // 0x67 JumpB
	var_161_bool = 0; var_162_object = Obj(); // 0x68 PushV
	var_162_object = var_1_object; // 0x69 MovT
	func_5037(var_161_bool, var_162_object); // 0x6a NEW_2
	var_167_bool = var_161_bool == 0; // 0x6c Not
	if(var_167_bool == 0) goto Label_111; // 0x6d JumpB
	var_148_bool = 1; // 0x6e MovB
	
Label_111:
	if(var_148_bool == 0) goto Label_118; // 0x6f JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x70 PushV
	var_169_object = var_1_object; // 0x71 MovT
	func_5007(var_168_bool, var_169_object); // 0x72 NEW_2
	if(var_168_bool == 0) goto Label_118; // 0x74 JumpB
	var_147_bool = 1; // 0x75 MovB
	
Label_118:
	if(var_147_bool == 0) goto Label_124; // 0x76 JumpB
	var_174_int = 543044; // 0x77 PushI
	var_175_int = 45498; // 0x78 PushI
	var_176_int = 45496; // 0x79 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x7a TObjFunc
	
Label_124:
	var_177_bool = 0; // 0x7c PushV
	var_177_bool = 1; // 0x7d MovB
	var_178_bool = 0; // 0x7e PushV
	var_178_bool = 1; // 0x7f MovB
	var_179_bool = 0; // 0x80 PushV
	var_179_bool = 1; // 0x81 MovB
	var_180_bool = 0; var_181_object = Obj(); // 0x82 PushV
	var_181_object = var_1_object; // 0x83 MovT
	func_5097(var_180_bool, var_181_object); // 0x84 NEW_2
	if(var_180_bool == 0) goto Label_141; // 0x86 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x87 PushV
	var_187_object = var_1_object; // 0x88 MovT
	func_5107(var_186_bool, var_187_object); // 0x89 NEW_2
	if(var_186_bool == 0) goto Label_141; // 0x8b JumpB
	var_179_bool = 0; // 0x8c MovB
	
Label_141:
	if(var_179_bool == 0) goto Label_148; // 0x8d JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x8e PushV
	var_193_object = var_1_object; // 0x8f MovT
	func_5117(var_192_bool, var_193_object); // 0x90 NEW_2
	if(var_192_bool == 0) goto Label_148; // 0x92 JumpB
	var_178_bool = 0; // 0x93 MovB
	
Label_148:
	if(var_178_bool == 0) goto Label_155; // 0x94 JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x95 PushV
	var_199_object = var_1_object; // 0x96 MovT
	func_5127(var_198_bool, var_199_object); // 0x97 NEW_2
	if(var_198_bool == 0) goto Label_155; // 0x99 JumpB
	var_177_bool = 0; // 0x9a MovB
	
Label_155:
	if(var_177_bool == 0) goto Label_161; // 0x9b JumpB
	var_204_int = 543057; // 0x9c PushI
	var_205_int = 45513; // 0x9d PushI
	var_206_int = 45512; // 0x9e PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x9f TObjFunc
	
Label_161:
	var_207_bool = 0; // 0xa1 PushV
	var_207_bool = 1; // 0xa2 MovB
	var_208_bool = 0; var_209_object = Obj(); // 0xa3 PushV
	var_209_object = var_1_object; // 0xa4 MovT
	func_5077(var_208_bool, var_209_object); // 0xa5 NEW_2
	if(var_208_bool == 0) goto Label_174; // 0xa7 JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0xa8 PushV
	var_215_object = var_1_object; // 0xa9 MovT
	func_5087(var_214_bool, var_215_object); // 0xaa NEW_2
	if(var_214_bool == 0) goto Label_174; // 0xac JumpB
	var_207_bool = 0; // 0xad MovB
	
Label_174:
	if(var_207_bool == 0) goto Label_180; // 0xae JumpB
	var_220_int = 543063; // 0xaf PushI
	var_221_int = 45520; // 0xb0 PushI
	var_222_int = 45518; // 0xb1 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0xb2 TObjFunc
	
Label_180:
	var_223_bool = 0; var_224_object = Obj(); // 0xb4 PushV
	var_224_object = var_1_object; // 0xb5 MovT
	func_5007(var_223_bool, var_224_object); // 0xb6 NEW_2
	if(var_223_bool == 0) goto Label_190; // 0xb8 JumpB
	var_225_int = 538210; // 0xb9 PushI
	var_226_int = -1; // 0xba PushI
	var_227_int = 40087; // 0xbb PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0xbc TObjFunc
	
Label_190:
	var_228_bool = 0; var_229_object = Obj(); // 0xbe PushV
	var_229_object = var_1_object; // 0xbf MovT
	func_5007(var_228_bool, var_229_object); // 0xc0 NEW_2
	if(var_228_bool == 0) goto Label_200; // 0xc2 JumpB
	var_230_int = 543042; // 0xc3 PushI
	var_231_int = -1; // 0xc4 PushI
	var_232_int = 45494; // 0xc5 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0xc6 TObjFunc
	
Label_200:
	var_233_bool = 0; var_234_object = Obj(); // 0xc8 PushV
	var_234_object = var_1_object; // 0xc9 MovT
	func_5007(var_233_bool, var_234_object); // 0xca NEW_2
	if(var_233_bool == 0) goto Label_210; // 0xcc JumpB
	var_235_int = 543043; // 0xcd PushI
	var_236_int = -1; // 0xce PushI
	var_237_int = 45495; // 0xcf PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0xd0 TObjFunc
	
Label_210:
	var_238_bool = 0; // 0xd2 PushV
	var_238_bool = 1; // 0xd3 MovB
	var_239_bool = 0; // 0xd4 PushV
	var_239_bool = 1; // 0xd5 MovB
	var_240_bool = 0; var_241_object = Obj(); // 0xd6 PushV
	var_241_object = var_1_object; // 0xd7 MovT
	func_5077(var_240_bool, var_241_object); // 0xd8 NEW_2
	if(var_240_bool == 0) goto Label_225; // 0xda JumpB
	var_242_bool = 0; var_243_object = Obj(); // 0xdb PushV
	var_243_object = var_1_object; // 0xdc MovT
	func_5087(var_242_bool, var_243_object); // 0xdd NEW_2
	if(var_242_bool == 0) goto Label_225; // 0xdf JumpB
	var_239_bool = 0; // 0xe0 MovB
	
Label_225:
	if(var_239_bool == 0) goto Label_232; // 0xe1 JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0xe2 PushV
	var_245_object = var_1_object; // 0xe3 MovT
	func_5097(var_244_bool, var_245_object); // 0xe4 NEW_2
	if(var_244_bool == 0) goto Label_232; // 0xe6 JumpB
	var_238_bool = 0; // 0xe7 MovB
	
Label_232:
	if(var_238_bool == 0) goto Label_238; // 0xe8 JumpB
	var_246_int = 543055; // 0xe9 PushI
	var_247_int = -1; // 0xea PushI
	var_248_int = 45510; // 0xeb PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0xec TObjFunc
	
Label_238:
	var_249_bool = 0; // 0xee PushV
	var_249_bool = 1; // 0xef MovB
	var_250_bool = 0; var_251_object = Obj(); // 0xf0 PushV
	var_251_object = var_1_object; // 0xf1 MovT
	func_5077(var_250_bool, var_251_object); // 0xf2 NEW_2
	if(var_250_bool == 0) goto Label_251; // 0xf4 JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0xf5 PushV
	var_253_object = var_1_object; // 0xf6 MovT
	func_5087(var_252_bool, var_253_object); // 0xf7 NEW_2
	if(var_252_bool == 0) goto Label_251; // 0xf9 JumpB
	var_249_bool = 0; // 0xfa MovB
	
Label_251:
	if(var_249_bool == 0) goto Label_257; // 0xfb JumpB
	var_254_int = 543056; // 0xfc PushI
	var_255_int = -1; // 0xfd PushI
	var_256_int = 45511; // 0xfe PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0xff TObjFunc
	
Label_257:
	var_257_bool = 0; // 0x101 PushV
	var_257_bool = 1; // 0x102 MovB
	var_258_bool = 0; // 0x103 PushV
	var_258_bool = 1; // 0x104 MovB
	var_259_bool = 0; var_260_object = Obj(); // 0x105 PushV
	var_260_object = var_1_object; // 0x106 MovT
	func_5107(var_259_bool, var_260_object); // 0x107 NEW_2
	if(var_259_bool == 0) goto Label_272; // 0x109 JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x10a PushV
	var_262_object = var_1_object; // 0x10b MovT
	func_5117(var_261_bool, var_262_object); // 0x10c NEW_2
	if(var_261_bool == 0) goto Label_272; // 0x10e JumpB
	var_258_bool = 0; // 0x10f MovB
	
Label_272:
	if(var_258_bool == 0) goto Label_279; // 0x110 JumpB
	var_263_bool = 0; var_264_object = Obj(); // 0x111 PushV
	var_264_object = var_1_object; // 0x112 MovT
	func_5127(var_263_bool, var_264_object); // 0x113 NEW_2
	if(var_263_bool == 0) goto Label_279; // 0x115 JumpB
	var_257_bool = 0; // 0x116 MovB
	
Label_279:
	if(var_257_bool == 0) goto Label_285; // 0x117 JumpB
	var_265_int = 543062; // 0x118 PushI
	var_266_int = -1; // 0x119 PushI
	var_267_int = 45517; // 0x11a PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x11b TObjFunc
	
Label_285:
	var_268_bool = 0; // 0x11d PushV
	var_268_bool = 1; // 0x11e MovB
	var_269_bool = 0; // 0x11f PushV
	var_269_bool = 1; // 0x120 MovB
	var_270_bool = 0; // 0x121 PushV
	var_270_bool = 1; // 0x122 MovB
	var_271_bool = 0; var_272_object = Obj(); // 0x123 PushV
	var_272_object = var_1_object; // 0x124 MovT
	func_5097(var_271_bool, var_272_object); // 0x125 NEW_2
	if(var_271_bool == 0) goto Label_302; // 0x127 JumpB
	var_273_bool = 0; var_274_object = Obj(); // 0x128 PushV
	var_274_object = var_1_object; // 0x129 MovT
	func_5107(var_273_bool, var_274_object); // 0x12a NEW_2
	if(var_273_bool == 0) goto Label_302; // 0x12c JumpB
	var_270_bool = 0; // 0x12d MovB
	
Label_302:
	if(var_270_bool == 0) goto Label_309; // 0x12e JumpB
	var_275_bool = 0; var_276_object = Obj(); // 0x12f PushV
	var_276_object = var_1_object; // 0x130 MovT
	func_5117(var_275_bool, var_276_object); // 0x131 NEW_2
	if(var_275_bool == 0) goto Label_309; // 0x133 JumpB
	var_269_bool = 0; // 0x134 MovB
	
Label_309:
	if(var_269_bool == 0) goto Label_316; // 0x135 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0x136 PushV
	var_278_object = var_1_object; // 0x137 MovT
	func_5127(var_277_bool, var_278_object); // 0x138 NEW_2
	if(var_277_bool == 0) goto Label_316; // 0x13a JumpB
	var_268_bool = 0; // 0x13b MovB
	
Label_316:
	if(var_268_bool == 0) goto Label_322; // 0x13c JumpB
	var_279_int = 543064; // 0x13d PushI
	var_280_int = -1; // 0x13e PushI
	var_281_int = 45519; // 0x13f PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x140 TObjFunc
	
Label_322:
	goto Label_571; // 0x142 Jump
	
Label_571:
	var_282_bool = 0; // 0x23b PushV
	func_6164(var_282_bool); // 0x23c NEW_2
	if(var_282_bool == 0) goto Label_586; // 0x23e JumpB
	
Label_575:
	lshWaitForAnimEnd(); // 0x23f Func
	var_283_string = var_3_string; // 0x241 PushT
	if(var_283_string == 0) goto Label_580; // 0x242 JumpB
	goto Label_585; // 0x243 Jump
	
Label_585:
	goto Label_600; // 0x249 Jump
	
Label_600:
	return 0; // 0x258 Return
	
Label_580:
	var_284_string = ""; // 0x244 PushV
	var_284_string = var_2_object; // 0x245 MovT
	func_4749(var_284_string); // 0x246 NEW_2
	goto Label_575; // 0x248 Jump
	
Label_586:
	var_295_string = "all"; // 0x24a PushS
	var_296_string = "idle"; // 0x24b PushS
	PlayAnimation(var_295_string, var_296_string); // 0x24c Func
	
Label_590:
	WaitForAnimEnd(); // 0x24e Func
	var_297_string = var_3_string; // 0x250 PushT
	if(var_297_string == 0) goto Label_595; // 0x251 JumpB
	goto Label_600; // 0x252 Jump
	
Label_595:
	var_298_string = "all"; // 0x253 PushS
	var_299_string = "idle"; // 0x254 PushS
	PlayAnimation(var_298_string, var_299_string); // 0x255 Func
	goto Label_590; // 0x257 Jump
	
Label_323:
	var_300_string = ""; // 0x143 PushV
	var_300_string = "Neutral"; // 0x144 MovS
	func_601(var_115_object, var_300_string); // 0x145 NEW_2
	var_301_int = 538207; // 0x147 PushI
	SetMessage(var_301_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_302_bool = 0; var_303_object = Obj(); // 0x14c PushV
	var_303_object = var_1_object; // 0x14d MovT
	func_4971(var_303_object); // 0x14e NEW_2
	if(var_302_bool == 0) goto Label_342; // 0x150 JumpB
	var_308_int = 538208; // 0x151 PushI
	var_309_int = -1; // 0x152 PushI
	var_310_int = 40085; // 0x153 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x154 TObjFunc
	
Label_342:
	var_311_bool = 0; var_312_object = Obj(); // 0x156 PushV
	var_312_object = var_1_object; // 0x157 MovT
	func_4983(var_312_object); // 0x158 NEW_2
	if(var_311_bool == 0) goto Label_352; // 0x15a JumpB
	var_317_int = 538209; // 0x15b PushI
	var_318_int = -1; // 0x15c PushI
	var_319_int = 40086; // 0x15d PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x15e TObjFunc
	
Label_352:
	var_320_bool = 0; // 0x160 PushV
	var_320_bool = 0; // 0x161 MovB
	var_321_bool = 0; var_322_object = Obj(); // 0x162 PushV
	var_322_object = var_1_object; // 0x163 MovT
	func_4971(var_322_object); // 0x164 NEW_2
	if(var_321_bool == 0) goto Label_365; // 0x166 JumpB
	var_323_bool = 0; var_324_object = Obj(); // 0x167 PushV
	var_324_object = var_1_object; // 0x168 MovT
	func_5027(var_323_bool, var_324_object); // 0x169 NEW_2
	if(var_323_bool == 0) goto Label_365; // 0x16b JumpB
	var_320_bool = 1; // 0x16c MovB
	
Label_365:
	if(var_320_bool == 0) goto Label_371; // 0x16d JumpB
	var_325_int = 538211; // 0x16e PushI
	var_326_int = 40089; // 0x16f PushI
	var_327_int = 40088; // 0x170 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x171 TObjFunc
	
Label_371:
	var_328_bool = 0; // 0x173 PushV
	var_328_bool = 0; // 0x174 MovB
	var_329_bool = 0; var_330_object = Obj(); // 0x175 PushV
	var_330_object = var_1_object; // 0x176 MovT
	func_4971(var_330_object); // 0x177 NEW_2
	if(var_329_bool == 0) goto Label_384; // 0x179 JumpB
	var_331_bool = 0; var_332_object = Obj(); // 0x17a PushV
	var_332_object = var_1_object; // 0x17b MovT
	func_5027(var_331_bool, var_332_object); // 0x17c NEW_2
	if(var_331_bool == 0) goto Label_384; // 0x17e JumpB
	var_328_bool = 1; // 0x17f MovB
	
Label_384:
	if(var_328_bool == 0) goto Label_390; // 0x180 JumpB
	var_333_int = 538222; // 0x181 PushI
	var_334_int = 40100; // 0x182 PushI
	var_335_int = 40099; // 0x183 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x184 TObjFunc
	
Label_390:
	var_336_bool = 0; // 0x186 PushV
	var_336_bool = 0; // 0x187 MovB
	var_337_bool = 0; var_338_object = Obj(); // 0x188 PushV
	var_338_object = var_1_object; // 0x189 MovT
	func_4971(var_338_object); // 0x18a NEW_2
	if(var_337_bool == 0) goto Label_403; // 0x18c JumpB
	var_339_bool = 0; var_340_object = Obj(); // 0x18d PushV
	var_340_object = var_1_object; // 0x18e MovT
	func_5037(var_339_bool, var_340_object); // 0x18f NEW_2
	if(var_339_bool == 0) goto Label_403; // 0x191 JumpB
	var_336_bool = 1; // 0x192 MovB
	
Label_403:
	if(var_336_bool == 0) goto Label_409; // 0x193 JumpB
	var_341_int = 538235; // 0x194 PushI
	var_342_int = 40114; // 0x195 PushI
	var_343_int = 40113; // 0x196 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x197 TObjFunc
	
Label_409:
	var_344_bool = 0; // 0x199 PushV
	var_344_bool = 0; // 0x19a MovB
	var_345_bool = 0; var_346_object = Obj(); // 0x19b PushV
	var_346_object = var_1_object; // 0x19c MovT
	func_4971(var_346_object); // 0x19d NEW_2
	if(var_345_bool == 0) goto Label_422; // 0x19f JumpB
	var_347_bool = 0; var_348_object = Obj(); // 0x1a0 PushV
	var_348_object = var_1_object; // 0x1a1 MovT
	func_5047(var_347_bool, var_348_object); // 0x1a2 NEW_2
	if(var_347_bool == 0) goto Label_422; // 0x1a4 JumpB
	var_344_bool = 1; // 0x1a5 MovB
	
Label_422:
	if(var_344_bool == 0) goto Label_428; // 0x1a6 JumpB
	var_353_int = 538253; // 0x1a7 PushI
	var_354_int = 40135; // 0x1a8 PushI
	var_355_int = 40134; // 0x1a9 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x1aa TObjFunc
	
Label_428:
	var_356_bool = 0; // 0x1ac PushV
	var_356_bool = 0; // 0x1ad MovB
	var_357_bool = 0; var_358_object = Obj(); // 0x1ae PushV
	var_358_object = var_1_object; // 0x1af MovT
	func_4971(var_358_object); // 0x1b0 NEW_2
	if(var_357_bool == 0) goto Label_441; // 0x1b2 JumpB
	var_359_bool = 0; var_360_object = Obj(); // 0x1b3 PushV
	var_360_object = var_1_object; // 0x1b4 MovT
	func_5057(var_359_bool, var_360_object); // 0x1b5 NEW_2
	if(var_359_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_356_bool = 1; // 0x1b8 MovB
	
Label_441:
	if(var_356_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_365_int = 538272; // 0x1ba PushI
	var_366_int = 40155; // 0x1bb PushI
	var_367_int = 40154; // 0x1bc PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x1bd TObjFunc
	
Label_447:
	var_368_bool = 0; var_369_object = Obj(); // 0x1bf PushV
	var_369_object = var_1_object; // 0x1c0 MovT
	func_5067(var_368_bool, var_369_object); // 0x1c1 NEW_2
	if(var_368_bool == 0) goto Label_457; // 0x1c3 JumpB
	var_374_int = 538291; // 0x1c4 PushI
	var_375_int = 40174; // 0x1c5 PushI
	var_376_int = 40173; // 0x1c6 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x1c7 TObjFunc
	
Label_457:
	var_377_bool = 0; // 0x1c9 PushV
	var_377_bool = 0; // 0x1ca MovB
	var_378_bool = 0; var_379_object = Obj(); // 0x1cb PushV
	var_379_object = var_1_object; // 0x1cc MovT
	func_4971(var_379_object); // 0x1cd NEW_2
	if(var_378_bool == 0) goto Label_470; // 0x1cf JumpB
	var_380_bool = 0; var_381_object = Obj(); // 0x1d0 PushV
	var_381_object = var_1_object; // 0x1d1 MovT
	func_5077(var_380_bool, var_381_object); // 0x1d2 NEW_2
	if(var_380_bool == 0) goto Label_470; // 0x1d4 JumpB
	var_377_bool = 1; // 0x1d5 MovB
	
Label_470:
	if(var_377_bool == 0) goto Label_476; // 0x1d6 JumpB
	var_382_int = 538308; // 0x1d7 PushI
	var_383_int = 40192; // 0x1d8 PushI
	var_384_int = 40191; // 0x1d9 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x1da TObjFunc
	
Label_476:
	var_385_bool = 0; var_386_object = Obj(); // 0x1dc PushV
	var_386_object = var_1_object; // 0x1dd MovT
	func_5087(var_385_bool, var_386_object); // 0x1de NEW_2
	if(var_385_bool == 0) goto Label_486; // 0x1e0 JumpB
	var_387_int = 538322; // 0x1e1 PushI
	var_388_int = 40206; // 0x1e2 PushI
	var_389_int = 40205; // 0x1e3 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x1e4 TObjFunc
	
Label_486:
	var_390_bool = 0; var_391_object = Obj(); // 0x1e6 PushV
	var_391_object = var_1_object; // 0x1e7 MovT
	func_5017(var_390_bool, var_391_object); // 0x1e8 NEW_2
	if(var_390_bool == 0) goto Label_496; // 0x1ea JumpB
	var_394_int = 538332; // 0x1eb PushI
	var_395_int = 40216; // 0x1ec PushI
	var_396_int = 40215; // 0x1ed PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x1ee TObjFunc
	
Label_496:
	var_397_bool = 0; // 0x1f0 PushV
	var_397_bool = 0; // 0x1f1 MovB
	var_398_bool = 0; var_399_object = Obj(); // 0x1f2 PushV
	var_399_object = var_1_object; // 0x1f3 MovT
	func_4971(var_399_object); // 0x1f4 NEW_2
	if(var_398_bool == 0) goto Label_509; // 0x1f6 JumpB
	var_400_bool = 0; var_401_object = Obj(); // 0x1f7 PushV
	var_401_object = var_1_object; // 0x1f8 MovT
	func_5097(var_400_bool, var_401_object); // 0x1f9 NEW_2
	if(var_400_bool == 0) goto Label_509; // 0x1fb JumpB
	var_397_bool = 1; // 0x1fc MovB
	
Label_509:
	if(var_397_bool == 0) goto Label_515; // 0x1fd JumpB
	var_402_int = 538347; // 0x1fe PushI
	var_403_int = 40233; // 0x1ff PushI
	var_404_int = 40232; // 0x200 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x201 TObjFunc
	
Label_515:
	var_405_bool = 0; var_406_object = Obj(); // 0x203 PushV
	var_406_object = var_1_object; // 0x204 MovT
	func_5107(var_405_bool, var_406_object); // 0x205 NEW_2
	if(var_405_bool == 0) goto Label_525; // 0x207 JumpB
	var_407_int = 538364; // 0x208 PushI
	var_408_int = 40250; // 0x209 PushI
	var_409_int = 40249; // 0x20a PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x20b TObjFunc
	
Label_525:
	var_410_bool = 0; // 0x20d PushV
	var_410_bool = 0; // 0x20e MovB
	var_411_bool = 0; var_412_object = Obj(); // 0x20f PushV
	var_412_object = var_1_object; // 0x210 MovT
	func_4971(var_412_object); // 0x211 NEW_2
	if(var_411_bool == 0) goto Label_538; // 0x213 JumpB
	var_413_bool = 0; var_414_object = Obj(); // 0x214 PushV
	var_414_object = var_1_object; // 0x215 MovT
	func_5117(var_413_bool, var_414_object); // 0x216 NEW_2
	if(var_413_bool == 0) goto Label_538; // 0x218 JumpB
	var_410_bool = 1; // 0x219 MovB
	
Label_538:
	if(var_410_bool == 0) goto Label_544; // 0x21a JumpB
	var_415_int = 538375; // 0x21b PushI
	var_416_int = 40262; // 0x21c PushI
	var_417_int = 40261; // 0x21d PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x21e TObjFunc
	
Label_544:
	var_418_bool = 0; // 0x220 PushV
	var_418_bool = 0; // 0x221 MovB
	var_419_bool = 0; var_420_object = Obj(); // 0x222 PushV
	var_420_object = var_1_object; // 0x223 MovT
	func_4971(var_420_object); // 0x224 NEW_2
	if(var_419_bool == 0) goto Label_557; // 0x226 JumpB
	var_421_bool = 0; var_422_object = Obj(); // 0x227 PushV
	var_422_object = var_1_object; // 0x228 MovT
	func_5117(var_421_bool, var_422_object); // 0x229 NEW_2
	if(var_421_bool == 0) goto Label_557; // 0x22b JumpB
	var_418_bool = 1; // 0x22c MovB
	
Label_557:
	if(var_418_bool == 0) goto Label_563; // 0x22d JumpB
	var_423_int = 538385; // 0x22e PushI
	var_424_int = 40272; // 0x22f PushI
	var_425_int = 40271; // 0x230 PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0x231 TObjFunc
	
Label_563:
	var_426_int = 538396; // 0x233 PushI
	var_427_int = -1; // 0x234 PushI
	var_428_int = 40282; // 0x235 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x236 TObjFunc
	goto Label_571; // 0x238 Jump
}


func_5706(var_32_object)
{
	var_33_object = Obj(); // 0x164b PushV
	var_33_object = var_32_object; // 0x164c Mov
	func_5946(); // 0x164d NEW_2
	return 0; // 0x164f Return
}


func_6219()
{
	StopAnimation(); // 0x184b Func
	return 0; // 0x184d Return
}


func_5196(var_182_bool)
{
	var_184_int = 0; // 0x144d PushV
	func_4937(var_184_int); // 0x144e NEW_2
	var_185_int = 9; // 0x1450 PushI
	var_182_bool = var_184_int == var_185_int; // 0x1451 Eq2
	return 0; // 0x1452 Return
}


func_6222(var_28_bool)
{
	var_28_bool = 1; // 0x184e MovB
	return 0; // 0x184f Return
}


func_5712(var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x1651 PushV
	var_22_object = var_20_object; // 0x1652 Mov
	func_4365(var_21_bool, var_22_object); // 0x1653 NEW_2
	if(var_21_bool == 0) goto Label_5724; // 0x1655 JumpB
	var_25_object = Obj(); // 0x1656 PushV
	func_4839(var_25_object); // 0x1657 NEW_2
	var_28_float = -0.03; // 0x1659 PushF
	ReportReputationChange(var_20_object, var_25_object, var_28_float); // 0x165a Func
	
Label_5724:
	return 0; // 0x165c Return
}


func_6224(var_22_bool, var_23_object, var_24_object, var_25_bool)
{
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_bool = 0; // 0x1851 PushV
	var_27_object = var_23_object; // 0x1852 Mov
	var_28_object = var_24_object; // 0x1853 Mov
	var_29_float = 500.0; // 0x1854 MovF
	var_30_bool = var_25_bool; // 0x1855 Mov
	func_5877(var_26_bool, var_27_object, var_28_object, var_29_float, var_30_bool); // 0x1856 NEW_2
	var_22_bool = var_26_bool; // 0x1857 Mov
	return 0; // 0x1859 Return
}


func_5203(var_188_bool)
{
	var_190_int = 0; // 0x1454 PushV
	func_4937(var_190_int); // 0x1455 NEW_2
	var_191_int = 10; // 0x1457 PushI
	var_188_bool = var_190_int == var_191_int; // 0x1458 Eq2
	return 0; // 0x1459 Return
}


func_601(var_2_object, var_129_string)
{
	var_130_bool = 0; // 0x25a PushV
	func_6164(var_130_bool); // 0x25b NEW_2
	var_131_bool = var_130_bool == 0; // 0x25d Not
	if(var_131_bool == 0) goto Label_608; // 0x25e JumpB
	return 0; // 0x25f Return
	
Label_608:
	var_132_bool = var_129_string == var_2_object; // 0x260 Eq
	if(var_132_bool == 0) goto Label_611; // 0x261 JumpB
	return 0; // 0x262 Return
	
Label_611:
	var_133_string = ""; var_134_bool = 0; // 0x263 PushV
	var_133_string = var_129_string; // 0x264 Mov
	var_135_string = ""; // 0x265 PushS
	var_136_bool = var_129_string == var_135_string; // 0x266 Eq
	if(var_136_bool == 0) goto Label_618; // 0x267 JumpB
	var_134_bool = 0; // 0x268 MovB
	goto Label_619; // 0x269 Jump
	
Label_619:
	func_4765(var_133_string, var_134_bool); // 0x26b NEW_2
	var_2_object = var_129_string; // 0x26d TMov
	return 0; // 0x26e Return
	
Label_618:
	var_134_bool = 1; // 0x26a MovB
}


func_6234(var_100_object)
{
	var_101_bool = 0; var_102_object = Obj(); // 0x185b PushV
	var_102_object = var_100_object; // 0x185c Mov
	func_4365(var_101_bool, var_102_object); // 0x185d NEW_2
	if(var_101_bool == 0) goto Label_6251; // 0x185f JumpB
	var_105_object = Obj(); // 0x1860 PushV
	func_4839(var_105_object); // 0x1861 NEW_2
	var_108_float = -0.07; // 0x1863 PushF
	var_109_bool = 1; // 0x1864 PushB
	ReportReputationChange(var_100_object, var_105_object, var_108_float, var_109_bool); // 0x1865 Func
	var_110_bool = 0; // 0x1867 PushV
	var_110_bool = 1; // 0x1868 MovB
	func_5401(var_110_bool); // 0x1869 NEW_2
	
Label_6251:
	func_5377(); // 0x186c NEW_2
	var_244_bool = GlobalVars[0]; // 0x186e PushGE
	var_244_bool = 1; // 0x186f MovB
	GlobalVars[0] = var_244_bool; // 0x1870 PopGE
	var_245_int = 50; // 0x1871 PushI
	var_246_int = 40; // 0x1872 PushI
	SetRTEnvelope(var_245_int, var_246_int); // 0x1873 Func
	return 0; // 0x1875 Return
}


func_3675(var_0_object, var_403_float, var_404_int)
{
	var_405_object = Obj(); var_406_float = 0; var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_float = 0; // 0xe5b PushV
	var_411_float = 0.9; // 0xe5c PushF
	var_412_float = var_403_float * var_411_float; // 0xe5d Mult
	GetVictim(var_412_float, var_408_object); // 0xe5e Func
	ReportAttack(var_0_object); // 0xe60 Func
	var_413_bool = var_408_object == var_0_object; // 0xe62 Eq
	if(var_413_bool == 0) goto Label_3712; // 0xe63 JumpB
	var_414_float = 0; var_415_object = Obj(); var_416_int = 0; // 0xe64 PushV
	var_415_object = var_408_object; // 0xe65 Mov
	var_416_int = var_404_int; // 0xe66 Mov
	func_3405(var_416_int); // 0xe67 NEW_2
	var_409_float = var_414_float; // 0xe68 Mov
	var_417_float = 0; var_418_object = Obj(); var_419_float = 0; var_420_int = 0; // 0xe6a PushV
	var_418_object = var_408_object; // 0xe6b Mov
	var_419_float = var_409_float; // 0xe6c Mov
	var_421_int = 0; var_422_object = Obj(); var_423_int = 0; // 0xe6d PushV
	var_422_object = var_408_object; // 0xe6e Mov
	var_423_int = var_404_int; // 0xe6f Mov
	func_3408(var_423_int); // 0xe70 NEW_2
	var_420_int = var_421_int; // 0xe71 Mov
	func_4382(var_417_float, var_418_object, var_419_float, var_420_int); // 0xe73 NEW_2
	var_410_float = var_417_float; // 0xe74 Mov
	var_482_int = 0; // 0xe76 PushV
	func_4058(var_482_int); // 0xe77 NEW_2
	ReportHit(var_0_object, var_482_int, var_410_float, var_409_float); // 0xe79 Func
	var_483_object = Obj(); var_484_float = 0; // 0xe7b PushV
	var_483_object = var_408_object; // 0xe7c Mov
	var_484_float = var_410_float; // 0xe7d Mov
	func_4065(); // 0xe7e NEW_2
	
Label_3712:
	return 6; // 0xe80 Return
}


func_4185(var_0_object, var_1_object, var_177_bool, var_178_object, var_179_float, var_180_float, var_181_bool, var_182_bool)
{
	var_183_bool = 0; var_184_bool = 0; var_185_object = Obj(); var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_float = 0; var_190_object = Obj(); var_191_bool = 0; var_192_bool = 0; var_193_object = Obj(); var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_float = 0; var_198_object = Obj(); // 0x1059 PushV
	var_0_object = 0; // 0x105a TMovB
	var_1_object = var_178_object; // 0x105b TMov
	var_192_bool = var_182_bool; // 0x105c Mov
	
Label_4189:
	var_199_bool = 0; var_200_object = Obj(); // 0x105d PushV
	var_200_object = var_178_object; // 0x105e Mov
	func_4325(var_199_bool, var_200_object); // 0x105f NEW_2
	var_203_bool = var_199_bool == 0; // 0x1061 Not
	if(var_203_bool == 0) goto Label_4197; // 0x1062 JumpB
	var_177_bool = 0; // 0x1063 MovB
	return 16; // 0x1064 Return
	
Label_4197:
	GetPosition(var_194_cvector); // 0x1065 ObjFunc
	GetPosition(var_195_cvector); // 0x1067 Func
	var_196_cvector = var_194_cvector - var_195_cvector; // 0x1069 Sub2
	var_197_float = var_196_cvector | var_196_cvector; // 0x106a Or2
	var_204_bool = 0; // 0x106b PushV
	var_204_bool = 0; // 0x106c MovB
	var_205_int = 0; // 0x106d PushI
	var_206_bool = var_180_float > var_205_int; // 0x106e GT
	if(var_206_bool == 0) goto Label_4212; // 0x106f JumpB
	var_207_float = var_180_float * var_180_float; // 0x1070 Mult
	var_208_bool = var_197_float > var_207_float; // 0x1071 GT
	if(var_208_bool == 0) goto Label_4212; // 0x1072 JumpB
	var_204_bool = 1; // 0x1073 MovB
	
Label_4212:
	if(var_204_bool == 0) goto Label_4217; // 0x1074 JumpB
	Stop(); // 0x1075 Func
	var_177_bool = 0; // 0x1077 MovB
	return 16; // 0x1078 Return
	
Label_4217:
	var_209_float = var_179_float * var_179_float; // 0x1079 Mult
	var_210_bool = var_197_float > var_209_float; // 0x107a GT
	if(var_210_bool == 0) goto Label_4279; // 0x107b JumpB
	GetPFPosition(var_194_cvector); // 0x107c ObjFunc
	FindPathTo(var_198_object, var_194_cvector); // 0x107e Func
	var_211_bool = var_198_object != 0; // 0x1080 NullNeq
	if(var_211_bool == 0) goto Label_4228; // 0x1081 JumpB
	var_193_object = var_198_object; // 0x1082 Mov
	var_198_object = 0; // 0x1083 SetNull
	
Label_4228:
	var_212_bool = var_193_object != 0; // 0x1084 NullNeq
	if(var_212_bool == 0) goto Label_4261; // 0x1085 JumpB
	var_213_bool = var_192_bool; // 0x1086 Push
	if(var_213_bool == 0) goto Label_4238; // 0x1087 JumpB
	var_192_bool = 0; // 0x1088 MovB
	RotatePath(var_193_object, var_191_bool); // 0x1089 Func
	var_214_bool = var_191_bool == 0; // 0x108b Not
	if(var_214_bool == 0) goto Label_4238; // 0x108c JumpB
	goto Label_4285; // 0x108d Jump
	
Label_4285:
	var_177_bool = !var_0_object; // 0x10bd Not2
	return 16; // 0x10be Return
	
Label_4238:
	var_215_int = 0; // 0x108e PushI
	var_216_float = 0.3; // 0x108f PushF
	SetTimer(var_215_int, var_216_float); // 0x1090 Func
	var_217_string = ""; // 0x1092 PushV
	func_4332(var_217_string); // 0x1093 NEW_2
	var_218_string = ""; // 0x1095 PushV
	func_4334(var_218_string); // 0x1096 NEW_2
	FollowPath(var_193_object, var_181_bool, var_191_bool, var_217_string, var_218_string); // 0x1098 Func
	var_219_bool = var_191_bool == 0; // 0x109a Not
	if(var_219_bool == 0) goto Label_4259; // 0x109b JumpB
	var_220_object = var_0_object; // 0x109c PushT
	if(var_220_object == 0) goto Label_4257; // 0x109d JumpB
	var_193_object = 0; // 0x109e SetNull
	goto Label_4285; // 0x109f Jump
	
Label_4257:
	goto Label_4284; // 0x10a1 Jump
	
Label_4284:
	goto Label_4189; // 0x10bc Jump
	
Label_4259:
	var_193_object = 0; // 0x10a3 SetNull
	goto Label_4277; // 0x10a4 Jump
	
Label_4277:
	var_198_object = 0; // 0x10b5 SetNull
	goto Label_4283; // 0x10b6 Jump
	
Label_4283:
	var_193_object = 0; // 0x10bb SetNull
	
Label_4261:
	var_221_int = 0; // 0x10a5 PushI
	KillTimer(var_221_int); // 0x10a6 Func
	var_222_float = 0.5; // 0x10a8 PushF
	Sleep(var_222_float, var_191_bool); // 0x10a9 Func
	var_223_bool = var_191_bool == 0; // 0x10ab Not
	if(var_223_bool == 0) goto Label_4273; // 0x10ac JumpB
	var_224_object = var_0_object; // 0x10ad PushT
	if(var_224_object == 0) goto Label_4273; // 0x10ae JumpB
	var_193_object = 0; // 0x10af SetNull
	goto Label_4285; // 0x10b0 Jump
	
Label_4273:
	var_225_int = 0; // 0x10b1 PushI
	var_226_float = 0.3; // 0x10b2 PushF
	SetTimer(var_225_int, var_226_float); // 0x10b3 Func
	
Label_4279:
	var_227_int = 0; // 0x10b7 PushI
	KillTimer(var_227_int); // 0x10b8 Func
	goto Label_4285; // 0x10ba Jump
}


func_5725(var_18_bool, var_19_string)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x165d PushV
	var_22_string = "heal"; // 0x165e PushS
	var_23_bool = var_19_string == var_22_string; // 0x165f Eq
	if(var_23_bool == 0) goto Label_5739; // 0x1660 JumpB
	var_24_string = "player"; // 0x1661 PushS
	FindActor(var_21_object, var_24_string); // 0x1662 Func
	var_25_bool = 0; var_26_object = Obj(); // 0x1664 PushV
	var_26_object = var_21_object; // 0x1665 Mov
	func_5974(var_26_object); // 0x1666 NEW_2
	var_18_bool = var_25_bool; // 0x1667 Mov
	return 2; // 0x1669 Return
	
Label_5739:
	var_18_bool = 0; // 0x166b MovB
	return 2; // 0x166c Return
}


func_5210(var_194_bool)
{
	var_196_int = 0; // 0x145b PushV
	func_4937(var_196_int); // 0x145c NEW_2
	var_197_int = 11; // 0x145e PushI
	var_194_bool = var_196_int == var_197_int; // 0x145f Eq2
	return 0; // 0x1460 Return
}


func_5217(var_200_bool)
{
	var_202_int = 0; // 0x1462 PushV
	func_4937(var_202_int); // 0x1463 NEW_2
	var_203_int = 12; // 0x1465 PushI
	var_200_bool = var_202_int == var_203_int; // 0x1466 Eq2
	return 0; // 0x1467 Return
}


func_3173(var_0_object)
{
	var_68_object = Obj(); // 0xc65 PushV
	var_68_object = var_0_object; // 0xc66 MovT
	func_4780(var_68_object); // 0xc67 NEW_2
	return 0; // 0xc69 Return
}


func_5224(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0x1468 PushV
	var_108_string = "branch"; // 0x1469 PushS
	GetVariable(var_108_string, var_107_int); // 0x146a Func
	var_109_int = 0; // 0x146c PushI
	var_110_bool = var_107_int == var_109_int; // 0x146d Eq
	if(var_110_bool == 0) goto Label_5234; // 0x146e JumpB
	var_105_int = 1; // 0x146f MovI
	return 2; // 0x1470 Return
	
Label_5234:
	var_111_int = 1; // 0x1472 PushI
	var_112_bool = var_107_int == var_111_int; // 0x1473 Eq
	if(var_112_bool == 0) goto Label_5239; // 0x1474 JumpB
	var_105_int = 2; // 0x1475 MovI
	return 2; // 0x1476 Return
	
Label_5239:
	var_105_int = 3; // 0x1477 MovI
	return 2; // 0x1478 Return
}


func_5741(var_29_string)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x166d PushV
	var_32_string = "heal"; // 0x166e PushS
	var_33_bool = var_29_string == var_32_string; // 0x166f Eq
	if(var_33_bool == 0) goto Label_5753; // 0x1670 JumpB
	var_34_string = "player"; // 0x1671 PushS
	FindActor(var_31_object, var_34_string); // 0x1672 Func
	var_35_object = Obj(); // 0x1674 PushV
	var_35_object = var_31_object; // 0x1675 Mov
	func_5977(); // 0x1676 NEW_2
	var_31_object = 0; // 0x1678 SetNull
	
Label_5753:
	return 2; // 0x1679 Return
}


func_2675(var_19_object)
{
	EventDisable(0); // 0xa74 EventDisable
	var_20_object = Obj(); // 0xa75 PushV
	var_20_object = var_19_object; // 0xa76 Mov
	func_2708(var_20_object); // 0xa77 NEW_2
	var_100_object = Obj(); // 0xa79 PushV
	var_100_object = var_19_object; // 0xa7a Mov
	func_6234(var_100_object); // 0xa7b NEW_2
	EventEnable(0); // 0xa7d EventEnable
	
Label_2686:
	Hold(); // 0xa7e Func
	goto Label_2686; // 0xa80 Jump
}


func_5241(var_224_int)
{
	var_225_int = 0; var_226_int = 0; // 0x1479 PushV
	var_227_string = "branch"; // 0x147a PushS
	GetVariable(var_227_string, var_226_int); // 0x147b Func
	var_224_int = var_226_int; // 0x147d Mov
	return 2; // 0x147e Return
}


func_5754(var_26_int)
{
	var_28_bool = 0; // 0x167b PushV
	func_6222(var_28_bool); // 0x167c NEW_2
	if(var_28_bool == 0) goto Label_5761; // 0x167e JumpB
	var_26_int = 2; // 0x167f MovI
	goto Label_5762; // 0x1680 Jump
	
Label_5762:
	return 0; // 0x1682 Return
	
Label_5761:
	var_26_int = 0; // 0x1681 MovI
}


func_4731()
{
	var_431_bool = 0; var_432_bool = 0; // 0x127b PushV
	var_433_bool = 1; // 0x127c PushB
	CameraSwitchToNormal(var_433_bool); // 0x127d Func
	var_434_bool = 0; // 0x127f PushV
	func_6164(var_434_bool); // 0x1280 NEW_2
	if(var_434_bool == 0) goto Label_4740; // 0x1282 JumpB
	goto Label_4748; // 0x1283 Jump
	
Label_4748:
	return 2; // 0x128c Return
	
Label_4740:
	var_435_string = "head"; // 0x1284 PushS
	HasAnimationTrack(var_432_bool, var_435_string); // 0x1285 Func
	var_436_bool = var_432_bool; // 0x1287 Push
	if(var_436_bool == 0) goto Label_4748; // 0x1288 JumpB
	var_437_string = "head"; // 0x1289 PushS
	UnlookAsync(var_437_string); // 0x128a Func
}


func_5247(var_536_int)
{
	var_538_int = 0; var_539_int = 0; // 0x147f PushV
	GetItemID(var_539_int); // 0x1480 ObjFunc
	var_536_int = var_539_int; // 0x1482 Mov
	return 2; // 0x1483 Return
}


func_3714(var_0_object, var_366_bool, var_367_float)
{
	var_368_int = 0; var_369_bool = 0; var_370_int = 0; var_371_string = ""; var_372_int = 0; var_373_bool = 0; var_374_int = 0; var_375_string = ""; // 0xe82 PushV
	func_4053(var_375_string); // 0xe84 NEW_2
	irand(var_372_int, var_375_string); // 0xe86 Func
	var_376_int = 1; // 0xe88 PushI
	var_372_int = var_372_int + var_376_int; // 0xe89 Add2
	Face(var_0_object); // 0xe8a Func
	var_377_bool = 1; // 0xe8c PushB
	SetAttackState(var_377_bool); // 0xe8d Func
	func_4955(); // 0xe90 NEW_2
	var_382_string = "all"; // 0xe92 PushS
	var_383_string = "attack_begin"; // 0xe93 PushS
	var_384_int = var_383_string + var_372_int; // 0xe94 Add
	PlayAnimation(var_382_string, var_384_int); // 0xe95 Func
	WaitForAnimEnd(); // 0xe97 Func
	func_4021(var_374_int, var_375_string); // 0xe9a NEW_2
	var_400_bool = 0; var_401_object = Obj(); // 0xe9c PushV
	var_401_object = var_0_object; // 0xe9d MovT
	func_4496(var_400_bool, var_401_object); // 0xe9e NEW_2
	var_402_bool = var_400_bool == 0; // 0xea0 Not
	if(var_402_bool == 0) goto Label_3750; // 0xea1 JumpB
	StopAsync(); // 0xea2 Func
	var_366_bool = 0; // 0xea4 MovB
	return 8; // 0xea5 Return
	
Label_3750:
	var_403_float = 0; var_404_int = 0; // 0xea6 PushV
	var_403_float = var_367_float; // 0xea7 Mov
	var_404_int = var_372_int; // 0xea8 Mov
	func_3675(var_375_string, var_403_float, var_404_int); // 0xea9 NEW_2
	var_485_string = "all"; // 0xeab PushS
	var_486_string = "attack_middle"; // 0xeac PushS
	var_487_int = var_486_string + var_372_int; // 0xead Add
	HasAnimation(var_373_bool, var_485_string, var_487_int); // 0xeae Func
	var_488_bool = var_373_bool; // 0xeb0 Push
	if(var_488_bool == 0) goto Label_3831; // 0xeb1 JumpB
	func_4955(); // 0xeb3 NEW_2
	var_489_string = "all"; // 0xeb5 PushS
	var_490_string = "attack_middle"; // 0xeb6 PushS
	var_491_int = var_490_string + var_372_int; // 0xeb7 Add
	PlayAnimation(var_489_string, var_491_int); // 0xeb8 Func
	WaitForAnimEnd(); // 0xeba Func
	func_4053(var_375_string); // 0xebd NEW_2
	var_492_bool = 0; var_493_object = Obj(); // 0xebf PushV
	var_493_object = var_0_object; // 0xec0 MovT
	func_4496(var_492_bool, var_493_object); // 0xec1 NEW_2
	var_494_bool = var_492_bool == 0; // 0xec3 Not
	if(var_494_bool == 0) goto Label_3785; // 0xec4 JumpB
	StopAsync(); // 0xec5 Func
	var_366_bool = 0; // 0xec7 MovB
	return 8; // 0xec8 Return
	
Label_3785:
	var_495_float = 0; var_496_int = 0; // 0xec9 PushV
	var_495_float = var_367_float; // 0xeca Mov
	var_496_int = var_372_int; // 0xecb Mov
	func_3675(var_375_string, var_495_float, var_496_int); // 0xecc NEW_2
	var_374_int = 1; // 0xece MovI
	
Label_3791:
	var_497_string = "attack_middle"; // 0xecf PushS
	var_498_int = var_497_string + var_372_int; // 0xed0 Add
	var_499_string = "_"; // 0xed1 PushS
	var_500_int = var_498_int + var_499_string; // 0xed2 Add
	var_375_string = var_500_int + var_374_int; // 0xed3 Add2
	var_501_string = "all"; // 0xed4 PushS
	HasAnimation(var_373_bool, var_501_string, var_375_string); // 0xed5 Func
	var_502_bool = var_373_bool == 0; // 0xed7 Not
	if(var_502_bool == 0) goto Label_3802; // 0xed8 JumpB
	goto Label_3831; // 0xed9 Jump
	
Label_3831:
	var_503_bool = 0; // 0xef7 PushB
	SetAttackState(var_503_bool); // 0xef8 Func
	var_504_string = "all"; // 0xefa PushS
	var_505_string = "attack_end"; // 0xefb PushS
	var_506_int = var_505_string + var_372_int; // 0xefc Add
	PlayAnimation(var_504_string, var_506_int); // 0xefd Func
	var_507_bool = 0; // 0xeff PushV
	func_4067(var_507_bool); // 0xf00 NEW_2
	if(var_507_bool == 0) goto Label_3849; // 0xf02 JumpB
	var_508_bool = 0; var_509_float = 0; // 0xf03 PushV
	var_509_float = 0.75; // 0xf04 MovF
	func_3851(var_508_bool, var_509_float); // 0xf05 NEW_2
	StopAsync(); // 0xf07 Func
	
Label_3849:
	var_366_bool = 1; // 0xf09 MovB
	return 8; // 0xf0a Return
	
Label_3802:
	func_4955(); // 0xedb NEW_2
	var_517_string = "all"; // 0xedd PushS
	PlayAnimation(var_517_string, var_375_string); // 0xede Func
	WaitForAnimEnd(); // 0xee0 Func
	func_4053(var_375_string); // 0xee3 NEW_2
	var_518_bool = 0; var_519_object = Obj(); // 0xee5 PushV
	var_519_object = var_0_object; // 0xee6 MovT
	func_4496(var_518_bool, var_519_object); // 0xee7 NEW_2
	var_520_bool = var_518_bool == 0; // 0xee9 Not
	if(var_520_bool == 0) goto Label_3823; // 0xeea JumpB
	StopAsync(); // 0xeeb Func
	var_366_bool = 0; // 0xeed MovB
	return 8; // 0xeee Return
	
Label_3823:
	var_521_float = 0; var_522_int = 0; // 0xeef PushV
	var_521_float = var_367_float; // 0xef0 Mov
	var_522_int = var_372_int; // 0xef1 Mov
	func_3675(var_375_string, var_521_float, var_522_int); // 0xef2 NEW_2
	var_523_int = 1; // 0xef4 PushI
	var_374_int = var_374_int + var_523_int; // 0xef5 Add2
	goto Label_3791; // 0xef6 Jump
}


func_5763(var_59_object)
{
	var_60_object = Obj(); // 0x1684 PushV
	var_60_object = var_59_object; // 0x1685 Mov
	TaskCall(4); // 0x1686 TaskCall
	func_3122(var_61_object, var_60_object); // 0x1687 NEW_2
	TaskReturn(); // 0x1688 TaskReturn
	return 0; // 0x168a Return
}


func_5252(var_513_int, var_514_object, var_515_int)
{
	var_516_int = 0; var_517_int = 0; var_518_int = 0; var_519_string = ""; var_520_bool = 0; var_521_bool = 0; var_522_int = 0; var_523_int = 0; var_524_int = 0; var_525_int = 0; var_526_string = ""; var_527_bool = 0; var_528_bool = 0; var_529_int = 0; // 0x1484 PushV
	var_530_int = 0; // 0x1485 PushI
	var_531_bool = var_515_int == var_530_int; // 0x1486 Eq
	if(var_531_bool == 0) goto Label_5289; // 0x1487 JumpB
	var_532_int = 0; // 0x1488 PushV
	func_4937(var_532_int); // 0x1489 NEW_2
	var_523_int = var_532_int; // 0x148a Mov
	var_524_int = 0; // 0x148c MovI
	var_525_int = 1; // 0x148d MovI
	
Label_5262:
	var_533_bool = var_525_int <= var_523_int; // 0x148e LE
	if(var_533_bool == 0) goto Label_5287; // 0x148f JumpB
	var_526_string = "Price"; // 0x1490 MovS
	var_534_int = 1; // 0x1491 PushI
	var_535_bool = var_525_int != var_534_int; // 0x1492 Neq
	if(var_535_bool == 0) goto Label_5269; // 0x1493 JumpB
	var_526_string = var_526_string + var_525_int; // 0x1494 Add2
	
Label_5269:
	var_536_int = 0; var_537_object = Obj(); // 0x1495 PushV
	var_537_object = var_514_object; // 0x1496 Mov
	func_5247(var_537_object); // 0x1497 NEW_2
	HasInvItemProperty(var_527_bool, var_536_int, var_526_string); // 0x1499 Func
	var_540_bool = var_527_bool == 0; // 0x149b Not
	if(var_540_bool == 0) goto Label_5278; // 0x149c JumpB
	goto Label_5284; // 0x149d Jump
	
Label_5284:
	var_541_int = 1; // 0x14a4 PushI
	var_525_int = var_525_int + var_541_int; // 0x14a5 Add2
	goto Label_5262; // 0x14a6 Jump
	
Label_5278:
	var_542_int = 0; var_543_object = Obj(); // 0x149e PushV
	var_543_object = var_514_object; // 0x149f Mov
	func_5247(var_543_object); // 0x14a0 NEW_2
	GetInvItemProperty(var_524_int, var_542_int, var_526_string); // 0x14a2 Func
	
Label_5287:
	var_513_int = var_524_int; // 0x14a7 Mov
	return 14; // 0x14a8 Return
	
Label_5289:
	var_544_int = 0; var_545_object = Obj(); // 0x14a9 PushV
	var_545_object = var_514_object; // 0x14aa Mov
	func_5247(var_545_object); // 0x14ab NEW_2
	var_546_string = "BarterPrice"; // 0x14ad PushS
	var_547_int = var_546_string + var_515_int; // 0x14ae Add
	HasInvItemProperty(var_528_bool, var_544_int, var_547_int); // 0x14af Func
	var_548_bool = var_528_bool == 0; // 0x14b1 Not
	if(var_548_bool == 0) goto Label_5301; // 0x14b2 JumpB
	var_513_int = 0; // 0x14b3 MovI
	return 14; // 0x14b4 Return
	
Label_5301:
	var_549_int = 0; var_550_object = Obj(); // 0x14b5 PushV
	var_550_object = var_514_object; // 0x14b6 Mov
	func_5247(var_550_object); // 0x14b7 NEW_2
	var_551_string = "BarterPrice"; // 0x14b9 PushS
	var_552_int = var_551_string + var_515_int; // 0x14ba Add
	GetInvItemProperty(var_529_int, var_549_int, var_552_int); // 0x14bb Func
	var_553_int = 0; // 0x14bd PushI
	var_554_bool = var_529_int > var_553_int; // 0x14be GT
	if(var_554_bool == 0) goto Label_5314; // 0x14bf JumpB
	var_513_int = var_529_int; // 0x14c0 Mov
	return 14; // 0x14c1 Return
	
Label_5314:
	var_513_int = -var_529_int; // 0x14c2 Neg2
	return 14; // 0x14c3 Return
}


func_5771(var_26_int, var_27_object)
{
	var_28_bool = 0; var_29_object = Obj(); // 0x168c PushV
	var_29_object = var_27_object; // 0x168d Mov
	func_4496(var_28_bool, var_29_object); // 0x168e NEW_2
	if(var_28_bool == 0) goto Label_5779; // 0x1690 JumpB
	var_26_int = 2; // 0x1691 MovI
	goto Label_5780; // 0x1692 Jump
	
Label_5780:
	return 0; // 0x1694 Return
	
Label_5779:
	var_26_int = 0; // 0x1693 MovI
}


func_4749(var_284_string)
{
	var_285_bool = 0; var_286_float = 0; var_287_float = 0; var_288_bool = 0; var_289_float = 0; var_290_float = 0; // 0x128d PushV
	lshHasAnimation(var_288_bool, var_284_string); // 0x128e Func
	var_291_bool = var_288_bool; // 0x1290 Push
	if(var_291_bool == 0) goto Label_4760; // 0x1291 JumpB
	lshGetAnimTimes(var_284_string, var_289_float, var_290_float); // 0x1292 Func
	var_292_bool = 0; // 0x1294 PushB
	lshPlayAnimation(var_289_float, var_290_float, var_292_bool); // 0x1295 Func
	goto Label_4764; // 0x1297 Jump
	
Label_4764:
	return 6; // 0x129c Return
	
Label_4760:
	var_293_string = "Can't find lsh animation : "; // 0x1298 PushS
	var_294_int = var_293_string + var_284_string; // 0x1299 Add
	Trace(var_294_int); // 0x129a Func
}


func_5117(var_192_bool, var_193_object)
{
	var_194_bool = 0; var_195_object = Obj(); // 0x13fe PushV
	var_195_object = var_193_object; // 0x13ff Mov
	func_5210(var_195_object); // 0x1400 NEW_2
	if(var_194_bool == 0) goto Label_5125; // 0x1402 JumpB
	var_192_bool = 1; // 0x1403 MovB
	return 0; // 0x1404 Return
	
Label_5125:
	var_192_bool = 0; // 0x1405 MovB
	return 0; // 0x1406 Return
}


func_2708(var_20_object)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_object = Obj(); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_object = Obj(); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); // 0xa94 PushV
	var_41_bool = var_20_object == 0; // 0xa95 NullEq
	if(var_41_bool == 0) goto Label_2716; // 0xa96 JumpB
	var_42_string = ""; // 0xa97 PushV
	var_42_string = "fdie"; // 0xa98 MovS
	func_2799(var_42_string); // 0xa99 NEW_2
	goto Label_2798; // 0xa9b Jump
	
Label_2798:
	return 20; // 0xaee Return
	
Label_2716:
	GetPosition(var_31_cvector); // 0xa9c ObjFunc
	GetPosition(var_32_cvector); // 0xa9e Func
	GetDirection(var_33_cvector); // 0xaa0 Func
	var_34_cvector = var_32_cvector - var_31_cvector; // 0xaa2 Sub2
	var_74_float = GetByIndex(var_34_cvector, 0); // 0xaa3 PushE
	var_75_float = GetByIndex(var_33_cvector, 0); // 0xaa4 PushE
	var_76_float = var_74_float * var_75_float; // 0xaa5 Mult
	var_77_float = GetByIndex(var_34_cvector, 2); // 0xaa6 PushE
	var_78_float = GetByIndex(var_33_cvector, 2); // 0xaa7 PushE
	var_79_float = var_77_float * var_78_float; // 0xaa8 Mult
	var_80_int = var_76_float + var_79_float; // 0xaa9 Add
	var_81_int = 0; // 0xaaa PushI
	var_82_bool = var_80_int >= var_81_int; // 0xaab GE
	if(var_82_bool == 0) goto Label_2735; // 0xaac JumpB
	var_35_string = "fdie"; // 0xaad MovS
	goto Label_2736; // 0xaae Jump
	
Label_2736:
	RemoveRTEnvelope(); // 0xab0 Func
	SetDeathState(); // 0xab2 Func
	Stop(); // 0xab4 Func
	StopAsync(); // 0xab6 Func
	var_36_object = var_20_object; // 0xab8 Mov
	var_83_string = "GetScriptProperty"; // 0xab9 PushS
	var_84_int = 2; // 0xaba PushI
	var_85_bool = IsFuncExist(var_20_object, var_83_string, var_84_int); // 0xabb FuncExist
	if(var_85_bool == 0) goto Label_2760; // 0xabc JumpB
	var_86_string = "Owner"; // 0xabd PushS
	HasScriptProperty(var_37_bool, var_86_string); // 0xabe ObjFunc
	var_87_bool = var_37_bool; // 0xac0 Push
	if(var_87_bool == 0) goto Label_2760; // 0xac1 JumpB
	var_88_string = "Owner"; // 0xac2 PushS
	GetScriptProperty(var_36_object, var_88_string); // 0xac3 ObjFunc
	var_89_bool = var_36_object == 0; // 0xac5 NullEq
	if(var_89_bool == 0) goto Label_2760; // 0xac6 JumpB
	var_36_object = var_20_object; // 0xac7 Mov
	
Label_2760:
	var_90_string = "@GetEyesHeight"; // 0xac8 PushS
	var_91_int = 1; // 0xac9 PushI
	var_92_bool = IsFuncExist(var_36_object, var_90_string, var_91_int); // 0xaca FuncExist
	if(var_92_bool == 0) goto Label_2775; // 0xacb JumpB
	GetEyesHeight(var_39_float); // 0xacc ObjFunc
	var_40_cvector = CVector(0.0, 0.0, 0.0); // 0xace MovV
	var_93_float = GetByIndex(var_40_cvector, 1); // 0xacf PushE
	var_93_float = var_39_float; // 0xad0 Mov
	SetByIndex(var_40_cvector, 1) = var_93_float; // 0xad1 PopE
	var_94_string = "head"; // 0xad2 PushS
	LookAsync(var_20_object, var_94_string, var_40_cvector); // 0xad3 Func
	var_38_bool = 1; // 0xad5 MovB
	goto Label_2776; // 0xad6 Jump
	
Label_2776:
	var_95_string = ""; // 0xad8 PushV
	var_95_string = var_35_string; // 0xad9 Mov
	func_4798(var_95_string); // 0xada NEW_2
	var_96_string = "all"; // 0xadc PushS
	PlayAnimation(var_96_string, var_35_string); // 0xadd Func
	WaitForAnimEnd(); // 0xadf Func
	var_97_bool = var_38_bool; // 0xae1 Push
	if(var_97_bool == 0) goto Label_2792; // 0xae2 JumpB
	StopAsync(); // 0xae3 Func
	var_98_string = "head"; // 0xae5 PushS
	UnlookAsync(var_98_string); // 0xae6 Func
	
Label_2792:
	var_99_string = "all"; // 0xae8 PushS
	LockAnimationEnd(var_99_string, var_35_string); // 0xae9 Func
	RemoveEnvelope(); // 0xaeb Func
	var_36_object = 0; // 0xaed SetNull
	
Label_2775:
	var_38_bool = 0; // 0xad7 MovB
	
Label_2735:
	var_35_string = "bdie"; // 0xaaf MovS
}


func_5781(var_69_object)
{
	var_70_object = Obj(); // 0x1696 PushV
	var_70_object = var_69_object; // 0x1697 Mov
	TaskCall(5); // 0x1698 TaskCall
	func_3397(var_70_object); // 0x1699 NEW_2
	TaskReturn(); // 0x169a TaskReturn
	return 0; // 0x169c Return
}


func_4765(var_133_string, var_134_bool)
{
	var_137_bool = 0; var_138_float = 0; var_139_float = 0; var_140_bool = 0; var_141_float = 0; var_142_float = 0; // 0x129d PushV
	lshHasAnimation(var_140_bool, var_133_string); // 0x129e Func
	var_143_bool = var_140_bool; // 0x12a0 Push
	if(var_143_bool == 0) goto Label_4775; // 0x12a1 JumpB
	lshGetAnimTimes(var_133_string, var_141_float, var_142_float); // 0x12a2 Func
	lshPlayAnimation(var_141_float, var_142_float, var_134_bool); // 0x12a4 Func
	goto Label_4779; // 0x12a6 Jump
	
Label_4779:
	return 6; // 0x12ab Return
	
Label_4775:
	var_144_string = "Can't find lsh animation : "; // 0x12a7 PushS
	var_145_int = var_144_string + var_133_string; // 0x12a8 Add
	Trace(var_145_int); // 0x12a9 Func
}


func_5789(var_33_bool, var_34_object, var_35_bool)
{
	var_36_string = ""; var_37_string = ""; var_38_string = ""; var_39_string = ""; // 0x169d PushV
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; // 0x169e PushV
	var_41_object = var_34_object; // 0x169f Mov
	var_42_string = "class"; // 0x16a0 MovS
	func_4370(var_40_bool, var_41_object, var_42_string); // 0x16a1 NEW_2
	var_49_bool = var_40_bool == 0; // 0x16a3 Not
	if(var_49_bool == 0) goto Label_5799; // 0x16a4 JumpB
	var_33_bool = 0; // 0x16a5 MovB
	return 4; // 0x16a6 Return
	
Label_5799:
	var_50_string = "class"; // 0x16a7 PushS
	GetProperty(var_50_string, var_38_string); // 0x16a8 Func
	var_51_string = "class"; // 0x16aa PushS
	GetProperty(var_51_string, var_39_string); // 0x16ab ObjFunc
	var_52_bool = 0; // 0x16ad PushV
	var_52_bool = 0; // 0x16ae MovB
	var_53_bool = var_35_bool == 0; // 0x16af Not
	if(var_53_bool == 0) goto Label_5812; // 0x16b0 JumpB
	var_54_bool = var_38_string == var_39_string; // 0x16b1 Eq
	if(var_54_bool == 0) goto Label_5812; // 0x16b2 JumpB
	var_52_bool = 1; // 0x16b3 MovB
	
Label_5812:
	if(var_52_bool == 0) goto Label_5815; // 0x16b4 JumpB
	var_33_bool = 1; // 0x16b5 MovB
	return 4; // 0x16b6 Return
	
Label_5815:
	var_55_string = "rat"; // 0x16b7 PushS
	var_56_bool = var_39_string == var_55_string; // 0x16b8 Eq
	if(var_56_bool == 0) goto Label_5821; // 0x16b9 JumpB
	var_33_bool = 0; // 0x16ba MovB
	return 4; // 0x16bb Return
	
Label_5821:
	var_57_string = "rat_big"; // 0x16bd PushS
	var_58_bool = var_39_string == var_57_string; // 0x16be Eq
	if(var_58_bool == 0) goto Label_5827; // 0x16bf JumpB
	var_33_bool = 0; // 0x16c0 MovB
	return 4; // 0x16c1 Return
	
Label_5827:
	var_59_string = "dog"; // 0x16c3 PushS
	var_60_bool = var_39_string == var_59_string; // 0x16c4 Eq
	if(var_60_bool == 0) goto Label_5833; // 0x16c5 JumpB
	var_33_bool = 0; // 0x16c6 MovB
	return 4; // 0x16c7 Return
	
Label_5833:
	var_61_string = "grabitel"; // 0x16c9 PushS
	var_62_bool = var_39_string == var_61_string; // 0x16ca Eq
	if(var_62_bool == 0) goto Label_5839; // 0x16cb JumpB
	var_33_bool = 0; // 0x16cc MovB
	return 4; // 0x16cd Return
	
Label_5839:
	var_63_string = "bomber"; // 0x16cf PushS
	var_64_bool = var_39_string == var_63_string; // 0x16d0 Eq
	if(var_64_bool == 0) goto Label_5845; // 0x16d1 JumpB
	var_33_bool = 0; // 0x16d2 MovB
	return 4; // 0x16d3 Return
	
Label_5845:
	var_65_string = "sanitar"; // 0x16d5 PushS
	var_66_bool = var_39_string == var_65_string; // 0x16d6 Eq
	if(var_66_bool == 0) goto Label_5851; // 0x16d7 JumpB
	var_33_bool = 0; // 0x16d8 MovB
	return 4; // 0x16d9 Return
	
Label_5851:
	var_67_string = "hunter"; // 0x16db PushS
	var_68_bool = var_39_string == var_67_string; // 0x16dc Eq
	if(var_68_bool == 0) goto Label_5857; // 0x16dd JumpB
	var_33_bool = 0; // 0x16de MovB
	return 4; // 0x16df Return
	
Label_5857:
	var_69_string = "soldier"; // 0x16e1 PushS
	var_70_bool = var_39_string == var_69_string; // 0x16e2 Eq
	if(var_70_bool == 0) goto Label_5862; // 0x16e3 JumpB
	var_33_bool = 0; // 0x16e4 MovB
	return 4; // 0x16e5 Return
	
Label_5862:
	var_33_bool = 1; // 0x16e6 MovB
	return 4; // 0x16e7 Return
}


func_4780(var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); // 0x12ac PushV
	GetEyesHeight(var_24_float); // 0x12ad ObjFunc
	var_25_cvector = CVector(0.0, 0.0, 0.0); // 0x12af MovV
	var_26_float = GetByIndex(var_25_cvector, 1); // 0x12b0 PushE
	var_26_float = var_24_float; // 0x12b1 Mov
	SetByIndex(var_25_cvector, 1) = var_26_float; // 0x12b2 PopE
	var_27_string = "head"; // 0x12b3 PushS
	LookAsync(var_21_object, var_27_string, var_25_cvector); // 0x12b4 Func
	return 4; // 0x12b6 Return
}


func_4791()
{
	var_20_bool = 0; // 0x12b7 PushV
	func_6164(var_20_bool); // 0x12b8 NEW_2
	if(var_20_bool == 0) goto Label_4797; // 0x12ba JumpB
	lshStopSpeech(); // 0x12bb Func
	
Label_4797:
	return 0; // 0x12bd Return
}


func_4798(var_43_string)
{
	var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0x12be PushV
	IsExisting3DSound(var_52_bool, var_43_string); // 0x12bf Func
	var_60_bool = var_52_bool == 0; // 0x12c1 Not
	if(var_60_bool == 0) goto Label_4823; // 0x12c2 JumpB
	var_53_int = 0; // 0x12c3 MovI
	
Label_4804:
	var_61_int = 1; // 0x12c4 PushI
	var_62_int = var_53_int + var_61_int; // 0x12c5 Add
	var_63_int = var_43_string + var_62_int; // 0x12c6 Add
	IsExisting3DSound(var_54_bool, var_63_int); // 0x12c7 Func
	var_64_bool = var_54_bool == 0; // 0x12c9 Not
	if(var_64_bool == 0) goto Label_4812; // 0x12ca JumpB
	goto Label_4815; // 0x12cb Jump
	
Label_4815:
	var_65_bool = var_53_int == 0; // 0x12cf Not
	if(var_65_bool == 0) goto Label_4818; // 0x12d0 JumpB
	return 16; // 0x12d1 Return
	
Label_4818:
	irand(var_55_int, var_53_int); // 0x12d2 Func
	var_66_int = 1; // 0x12d4 PushI
	var_67_int = var_55_int + var_66_int; // 0x12d5 Add
	var_43_string = var_43_string + var_67_int; // 0x12d6 Add2
	
Label_4823:
	Is3DSoundLoaded(var_56_bool, var_43_string); // 0x12d7 Func
	var_68_bool = var_56_bool; // 0x12d9 Push
	if(var_68_bool == 0) goto Label_4838; // 0x12da JumpB
	GetEyesHeight(var_57_float); // 0x12db Func
	GetDirection(var_58_cvector); // 0x12dd Func
	var_69_int = 50; // 0x12df PushI
	var_59_cvector = var_58_cvector * var_69_int; // 0x12e0 Mult2
	var_70_float = GetByIndex(var_59_cvector, 1); // 0x12e1 PushE
	var_70_float = var_70_float + var_57_float; // 0x12e2 Add2
	SetByIndex(var_59_cvector, 1) = var_70_float; // 0x12e3 PopE
	PlayGlobalSound(var_43_string, var_59_cvector); // 0x12e4 Func
	
Label_4838:
	return 16; // 0x12e6 Return
	
Label_4812:
	var_71_int = 1; // 0x12cc PushI
	var_53_int = var_53_int + var_71_int; // 0x12cd Add2
	goto Label_4804; // 0x12ce Jump
}


func_4287(var_0_object, var_1_object, var_25_int)
{
	var_26_int = 0; // 0x10c0 PushI
	var_27_bool = var_25_int != var_26_int; // 0x10c1 Neq
	if(var_27_bool == 0) goto Label_4292; // 0x10c2 JumpB
	return 0; // 0x10c3 Return
	
Label_4292:
	var_28_bool = 0; var_29_object = Obj(); // 0x10c4 PushV
	var_29_object = var_1_object; // 0x10c5 MovT
	func_4325(var_28_bool, var_29_object); // 0x10c6 NEW_2
	var_64_bool = var_28_bool == 0; // 0x10c8 Not
	if(var_64_bool == 0) goto Label_4299; // 0x10c9 JumpB
	var_0_object = 1; // 0x10ca TMovB
	
Label_4299:
	var_65_int = 0; // 0x10cb PushI
	KillTimer(var_65_int); // 0x10cc Func
	Stop(); // 0x10ce Func
	return 0; // 0x10d0 Return
}


func_5316(var_34_object)
{
	var_35_int = 0; // 0x14c5 PushV
	func_5241(var_35_int); // 0x14c6 NEW_2
	var_39_int = 1; // 0x14c8 PushI
	var_40_bool = var_35_int == var_39_int; // 0x14c9 Eq
	if(var_40_bool == 0) goto Label_5326; // 0x14ca JumpB
	WorkWithCorpse(var_34_object); // 0x14cb Func
	goto Label_5328; // 0x14cd Jump
	
Label_5328:
	return 0; // 0x14d0 Return
	
Label_5326:
	Barter(var_34_object); // 0x14ce Func
}


func_5329(var_29_int, var_30_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x14d1 PushV
	var_44_bool = var_29_int > var_30_int; // 0x14d2 GT
	if(var_44_bool == 0) goto Label_5336; // 0x14d3 JumpB
	var_45_string = "GenerateMoney: iMin > iMax"; // 0x14d4 PushS
	Trace(var_45_string); // 0x14d5 Func
	return 4; // 0x14d7 Return
	
Label_5336:
	var_42_int = 0; // 0x14d8 MovI
	var_46_bool = var_29_int != var_30_int; // 0x14d9 Neq
	if(var_46_bool == 0) goto Label_5343; // 0x14da JumpB
	var_47_int = var_30_int - var_29_int; // 0x14db Sub
	irand(var_42_int, var_47_int); // 0x14dc Func
	goto Label_5347; // 0x14de Jump
	
Label_5347:
	var_42_int = var_42_int + var_29_int; // 0x14e3 Add2
	var_48_int = 0; // 0x14e4 PushI
	var_49_bool = var_42_int == var_48_int; // 0x14e5 Eq
	if(var_49_bool == 0) goto Label_5352; // 0x14e6 JumpB
	return 4; // 0x14e7 Return
	
Label_5352:
	var_50_int = 0; var_51_string = ""; // 0x14e8 PushV
	var_51_string = "Money"; // 0x14e9 MovS
	func_5576(var_50_int, var_51_string); // 0x14ea NEW_2
	var_54_int = 0; // 0x14ec PushI
	AddItem(var_43_bool, var_50_int, var_54_int, var_42_int); // 0x14ed Func
	return 4; // 0x14ef Return
	
Label_5343:
	var_55_int = 0; // 0x14df PushI
	var_56_bool = var_29_int == var_55_int; // 0x14e0 Eq
	if(var_56_bool == 0) goto Label_5347; // 0x14e1 JumpB
	return 4; // 0x14e2 Return
}


func_4309(var_0_object)
{
	var_0_object = 1; // 0x10d5 TMovB
	var_21_int = 0; // 0x10d6 PushI
	KillTimer(var_21_int); // 0x10d7 Func
	Stop(); // 0x10d9 Func
	return 0; // 0x10db Return
}


func_4325(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj(); // 0x10e6 PushV
	var_31_object = var_29_object; // 0x10e7 Mov
	func_4496(var_30_bool, var_31_object); // 0x10e8 NEW_2
	var_28_bool = var_30_bool; // 0x10e9 Mov
	return 0; // 0x10eb Return
}


func_4839(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x12e7 PushV
	self(var_107_object); // 0x12e8 Func
	var_105_object = var_107_object; // 0x12ea Mov
	return 2; // 0x12eb Return
}


func_5864(var_84_int, var_85_object)
{
	var_87_int = 0; var_88_object = Obj(); // 0x16e9 PushV
	var_88_object = var_85_object; // 0x16ea Mov
	func_5771(var_87_int, var_88_object); // 0x16eb NEW_2
	var_84_int = var_87_int; // 0x16ec Mov
	return 0; // 0x16ee Return
}


func_4332(var_217_string)
{
	var_217_string = "walk"; // 0x10ec MovS
	return 0; // 0x10ed Return
}


func_4845(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x12ed PushV
	var_59_int = var_50_cvector | var_50_cvector; // 0x12ee Or
	var_58_float = sqrt(var_59_int); // 0x12ef Sqrt2
	var_60_float = 0.0; // 0x12f0 PushF
	var_61_bool = var_58_float < var_60_float; // 0x12f1 LT
	if(var_61_bool == 0) goto Label_4853; // 0x12f2 JumpB
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0x12f3 MovV
	return 2; // 0x12f4 Return
	
Label_4853:
	var_49_cvector = var_50_cvector / var_50_cvector; // 0x12f5 Div2
	return 2; // 0x12f6 Return
}


func_4334(var_218_string)
{
	var_218_string = "run"; // 0x10ee MovS
	return 0; // 0x10ef Return
}


func_2799(var_42_string)
{
	RemoveRTEnvelope(); // 0xaf0 Func
	SetDeathState(); // 0xaf2 Func
	Stop(); // 0xaf4 Func
	StopAsync(); // 0xaf6 Func
	StopSecondaryAnimation(); // 0xaf8 Func
	var_43_string = ""; // 0xafa PushV
	var_43_string = var_42_string; // 0xafb Mov
	func_4798(var_43_string); // 0xafc NEW_2
	var_72_string = "all"; // 0xafe PushS
	PlayAnimation(var_72_string, var_42_string); // 0xaff Func
	WaitForAnimEnd(); // 0xb01 Func
	var_73_string = "all"; // 0xb03 PushS
	LockAnimationEnd(var_73_string, var_42_string); // 0xb04 Func
	RemoveEnvelope(); // 0xb06 Func
	return 0; // 0xb08 Return
}


func_5871(var_123_object)
{
	var_124_object = Obj(); // 0x16f0 PushV
	var_124_object = var_123_object; // 0x16f1 Mov
	func_5781(var_124_object); // 0x16f2 NEW_2
	return 0; // 0x16f4 Return
}


func_4336(var_445_string, var_446_int)
{
	var_447_int = 2; // 0x10f1 PushI
	var_448_bool = var_446_int == var_447_int; // 0x10f2 Eq
	if(var_448_bool == 0) goto Label_4343; // 0x10f3 JumpB
	var_445_string = "fire"; // 0x10f4 MovS
	return 0; // 0x10f5 Return
	
Label_4343:
	var_449_int = 1; // 0x10f7 PushI
	var_450_bool = var_446_int == var_449_int; // 0x10f8 Eq
	if(var_450_bool == 0) goto Label_4348; // 0x10f9 JumpB
	var_445_string = "bullet"; // 0x10fa MovS
	return 0; // 0x10fb Return
	
Label_4348:
	var_445_string = "phys"; // 0x10fc MovS
	return 0; // 0x10fd Return
}


func_5360(var_230_string)
{
	var_231_object = Obj(); var_232_int = 0; var_233_bool = 0; var_234_object = Obj(); var_235_int = 0; var_236_bool = 0; // 0x14f0 PushV
	CreateInvItem(var_234_object); // 0x14f1 Func
	SetItemName(var_230_string); // 0x14f3 ObjFunc
	var_237_string = "Organ"; // 0x14f5 PushS
	var_238_int = 1; // 0x14f6 PushI
	SetProperty(var_237_string, var_238_int); // 0x14f7 ObjFunc
	GetItemID(var_235_int); // 0x14f9 ObjFunc
	var_239_int = 0; // 0x14fb PushI
	var_240_int = 1; // 0x14fc PushI
	AddItem(var_236_bool, var_234_object, var_239_int, var_240_int); // 0x14fd Func
	return 6; // 0x14ff Return
}


func_5877(var_26_bool, var_27_object, var_28_object, var_29_float, var_30_bool)
{
	var_31_bool = 0; var_32_bool = 0; // 0x16f5 PushV
	var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; // 0x16f6 PushV
	var_34_object = var_28_object; // 0x16f7 Mov
	var_35_bool = !var_30_bool; // 0x16f8 Not2
	func_5789(var_33_bool, var_34_object, var_35_bool); // 0x16f9 NEW_2
	var_71_bool = var_33_bool == 0; // 0x16fb Not
	if(var_71_bool == 0) goto Label_5887; // 0x16fc JumpB
	var_26_bool = 0; // 0x16fd MovB
	return 2; // 0x16fe Return
	
Label_5887:
	CanSee(var_32_bool, var_27_object); // 0x16ff Func
	var_72_bool = 0; // 0x1701 PushV
	var_72_bool = 1; // 0x1702 MovB
	var_73_bool = var_32_bool; // 0x1703 Push
	if(var_73_bool == 0) goto Label_5901; // 0x1704 JumpB
	var_74_float = 0; var_75_object = Obj(); // 0x1705 PushV
	var_75_object = var_27_object; // 0x1706 Mov
	func_4357(var_75_object); // 0x1707 NEW_2
	var_82_float = var_29_float * var_29_float; // 0x1709 Mult
	var_83_bool = var_74_float <= var_82_float; // 0x170a LE
	if(var_83_bool == 0) goto Label_5901; // 0x170b JumpB
	var_72_bool = 0; // 0x170c MovB
	
Label_5901:
	if(var_72_bool == 0) goto Label_5904; // 0x170d JumpB
	var_26_bool = 1; // 0x170e MovB
	return 2; // 0x170f Return
	
Label_5904:
	var_26_bool = 0; // 0x1710 MovB
	return 2; // 0x1711 Return
}


func_4855(var_455_float, var_456_float, var_457_float)
{
	var_460_bool = var_456_float < var_457_float; // 0x12f8 LT
	if(var_460_bool == 0) goto Label_4860; // 0x12f9 JumpB
	var_455_float = var_456_float; // 0x12fa Mov
	goto Label_4861; // 0x12fb Jump
	
Label_4861:
	return 0; // 0x12fd Return
	
Label_4860:
	var_455_float = var_457_float; // 0x12fc Mov
}


func_3321()
{
	StopGroup0(); // 0xcf9 Func
	StopAsync(); // 0xcfb Func
	var_30_string = "head"; // 0xcfd PushS
	UnlookAsync(var_30_string); // 0xcfe Func
	var_31_int = 111; // 0xd00 PushI
	KillTimer(var_31_int); // 0xd01 Func
	return 0; // 0xd03 Return
}


func_4350(var_51_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x10fe PushV
	GetPosition(var_55_cvector); // 0x10ff Func
	GetPosition(var_56_cvector); // 0x1101 ObjFunc
	var_51_cvector = var_56_cvector - var_55_cvector; // 0x1103 Sub2
	return 4; // 0x1104 Return
}


func_4862(var_465_float, var_466_float, var_467_float, var_468_float)
{
	var_469_bool = var_466_float < var_467_float; // 0x12ff LT
	if(var_469_bool == 0) goto Label_4867; // 0x1300 JumpB
	var_465_float = var_467_float; // 0x1301 Mov
	return 0; // 0x1302 Return
	
Label_4867:
	var_470_bool = var_466_float > var_468_float; // 0x1303 GT
	if(var_470_bool == 0) goto Label_4871; // 0x1304 JumpB
	var_465_float = var_468_float; // 0x1305 Mov
	return 0; // 0x1306 Return
	
Label_4871:
	var_465_float = var_466_float; // 0x1307 Mov
	return 0; // 0x1308 Return
}


func_5377()
{
	var_224_int = 0; // 0x1501 PushV
	func_5241(var_224_int); // 0x1502 NEW_2
	var_228_int = 1; // 0x1504 PushI
	var_229_bool = var_224_int != var_228_int; // 0x1505 Neq
	if(var_229_bool == 0) goto Label_5384; // 0x1506 JumpB
	return 0; // 0x1507 Return
	
Label_5384:
	var_230_string = ""; // 0x1508 PushV
	var_230_string = "liver"; // 0x1509 MovS
	func_5360(var_230_string); // 0x150a NEW_2
	var_241_string = ""; // 0x150c PushV
	var_241_string = "kidney"; // 0x150d MovS
	func_5360(var_241_string); // 0x150e NEW_2
	var_242_string = ""; // 0x1510 PushV
	var_242_string = "heart"; // 0x1511 MovS
	func_5360(var_242_string); // 0x1512 NEW_2
	var_243_string = ""; // 0x1514 PushV
	var_243_string = "blood"; // 0x1515 MovS
	func_5360(var_243_string); // 0x1516 NEW_2
	return 0; // 0x1518 Return
}


func_4357(var_35_float)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); // 0x1105 PushV
	GetPosition(var_40_cvector); // 0x1106 Func
	GetPosition(var_41_cvector); // 0x1108 ObjFunc
	var_42_cvector = var_41_cvector - var_40_cvector; // 0x110a Sub2
	var_35_float = var_42_cvector | var_42_cvector; // 0x110b Or2
	return 6; // 0x110c Return
}


func_4873(var_493_object)
{
	var_494_object = Obj(); var_495_object = Obj(); // 0x1309 PushV
	CreateObjectVector(var_495_object); // 0x130a Func
	var_493_object = var_495_object; // 0x130c Mov
	return 2; // 0x130d Return
}


func_3851(var_508_bool, var_509_float)
{
	var_510_float = 0; var_511_bool = 0; var_512_float = 0; var_513_bool = 0; // 0xf0b PushV
	rand(var_512_float); // 0xf0c Func
	var_514_bool = var_512_float < var_509_float; // 0xf0e LT
	if(var_514_bool == 0) goto Label_3871; // 0xf0f JumpB
	
Label_3856:
	IsAnimationPlaying(var_513_bool); // 0xf10 Func
	var_515_bool = var_513_bool == 0; // 0xf12 Not
	if(var_515_bool == 0) goto Label_3861; // 0xf13 JumpB
	goto Label_3870; // 0xf14 Jump
	
Label_3870:
	goto Label_3876; // 0xf1e Jump
	
Label_3876:
	var_508_bool = 0; // 0xf24 MovB
	return 4; // 0xf25 Return
	
Label_3861:
	var_516_bool = 0; // 0xf15 PushV
	func_3949(var_516_bool); // 0xf16 NEW_2
	if(var_516_bool == 0) goto Label_3867; // 0xf18 JumpB
	var_508_bool = 1; // 0xf19 MovB
	return 4; // 0xf1a Return
	
Label_3867:
	sync(); // 0xf1b Func
	goto Label_3856; // 0xf1d Jump
	
Label_3871:
	WaitForAnimEnd(); // 0xf1f Func
	func_4053(var_513_bool); // 0xf22 NEW_2
}


func_4365(var_101_bool, var_102_object)
{
	var_103_bool = 0; var_104_bool = 0; // 0x110d PushV
	IsPlayerActor(var_102_object, var_104_bool); // 0x110e Func
	var_101_bool = var_104_bool; // 0x1110 Mov
	return 2; // 0x1111 Return
}


func_4879(var_70_float, var_71_cvector, var_72_cvector)
{
	var_73_float = GetByIndex(var_71_cvector, 0); // 0x1310 PushE
	var_74_float = GetByIndex(var_72_cvector, 0); // 0x1311 PushE
	var_75_float = var_73_float * var_74_float; // 0x1312 Mult
	var_76_float = GetByIndex(var_71_cvector, 2); // 0x1313 PushE
	var_77_float = GetByIndex(var_72_cvector, 2); // 0x1314 PushE
	var_78_float = var_76_float * var_77_float; // 0x1315 Mult
	var_70_float = var_75_float + var_78_float; // 0x1316 Add2
	return 0; // 0x1317 Return
}


func_5906(var_20_int)
{
	var_20_int = 2; // 0x1713 MovI
	return 0; // 0x1714 Return
}


func_4370(var_52_bool, var_53_object, var_54_string)
{
	var_55_bool = 0; var_56_bool = 0; // 0x1112 PushV
	var_57_string = "HasProperty"; // 0x1113 PushS
	var_58_int = 2; // 0x1114 PushI
	var_59_bool = IsFuncExist(var_53_object, var_57_string, var_58_int); // 0x1115 FuncExist
	var_60_bool = var_59_bool == 0; // 0x1116 Not
	if(var_60_bool == 0) goto Label_4378; // 0x1117 JumpB
	var_52_bool = 0; // 0x1118 MovB
	return 2; // 0x1119 Return
	
Label_4378:
	HasProperty(var_54_string, var_56_bool); // 0x111a ObjFunc
	var_52_bool = var_56_bool; // 0x111c Mov
	return 2; // 0x111d Return
}


func_5909(var_28_object)
{
	var_29_object = Obj(); // 0x1716 PushV
	var_29_object = var_28_object; // 0x1717 Mov
	func_6174(var_29_object); // 0x1718 NEW_2
	return 0; // 0x171a Return
}


func_4888(var_79_float, var_80_cvector)
{
	var_81_float = GetByIndex(var_80_cvector, 0); // 0x1319 PushE
	var_82_float = GetByIndex(var_80_cvector, 0); // 0x131a PushE
	var_83_float = var_81_float * var_82_float; // 0x131b Mult
	var_84_float = GetByIndex(var_80_cvector, 2); // 0x131c PushE
	var_85_float = GetByIndex(var_80_cvector, 2); // 0x131d PushE
	var_86_float = var_84_float * var_85_float; // 0x131e Mult
	var_87_int = var_83_float + var_86_float; // 0x131f Add
	var_79_float = sqrt(var_87_int); // 0x1320 Sqrt2
	return 0; // 0x1321 Return
}


func_5401(var_23_bool)
{
	var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_bool = 0; // 0x1519 PushV
	var_28_bool = var_23_bool; // 0x151a Push
	if(var_28_bool == 0) goto Label_5490; // 0x151b JumpB
	var_29_int = 0; var_30_int = 0; // 0x151c PushV
	var_29_int = 0; // 0x151d MovI
	var_31_int = 100; // 0x151e PushI
	var_32_int = 0; // 0x151f PushV
	func_4937(var_32_int); // 0x1520 NEW_2
	var_38_int = 100; // 0x1522 PushI
	var_39_float = var_32_int * var_38_int; // 0x1523 Mult
	var_30_int = var_31_int + var_39_float; // 0x1524 Add2
	func_5329(var_29_int, var_30_int); // 0x1525 NEW_2
	var_57_int = 8; // 0x1527 PushI
	irand(var_26_int, var_57_int); // 0x1528 Func
	var_58_int = 0; // 0x152a PushI
	var_59_bool = var_26_int == var_58_int; // 0x152b Eq
	if(var_59_bool == 0) goto Label_5430; // 0x152c JumpB
	var_60_int = 0; var_61_string = ""; // 0x152d PushV
	var_61_string = "lemon"; // 0x152e MovS
	func_5576(var_60_int, var_61_string); // 0x152f NEW_2
	var_62_int = 0; // 0x1531 PushI
	var_63_int = 1; // 0x1532 PushI
	AddItem(var_27_bool, var_60_int, var_62_int, var_63_int); // 0x1533 Func
	goto Label_5489; // 0x1535 Jump
	
Label_5489:
	goto Label_5575; // 0x1571 Jump
	
Label_5575:
	return 4; // 0x15c7 Return
	
Label_5430:
	var_64_int = 1; // 0x1536 PushI
	var_65_bool = var_26_int == var_64_int; // 0x1537 Eq
	if(var_65_bool == 0) goto Label_5442; // 0x1538 JumpB
	var_66_int = 0; var_67_string = ""; // 0x1539 PushV
	var_67_string = "rusk"; // 0x153a MovS
	func_5576(var_66_int, var_67_string); // 0x153b NEW_2
	var_68_int = 0; // 0x153d PushI
	var_69_int = 1; // 0x153e PushI
	AddItem(var_27_bool, var_66_int, var_68_int, var_69_int); // 0x153f Func
	goto Label_5489; // 0x1541 Jump
	
Label_5442:
	var_70_int = 2; // 0x1542 PushI
	var_71_bool = var_26_int == var_70_int; // 0x1543 Eq
	if(var_71_bool == 0) goto Label_5454; // 0x1544 JumpB
	var_72_int = 0; var_73_string = ""; // 0x1545 PushV
	var_73_string = "hook"; // 0x1546 MovS
	func_5576(var_72_int, var_73_string); // 0x1547 NEW_2
	var_74_int = 0; // 0x1549 PushI
	var_75_int = 1; // 0x154a PushI
	AddItem(var_27_bool, var_72_int, var_74_int, var_75_int); // 0x154b Func
	goto Label_5489; // 0x154d Jump
	
Label_5454:
	var_76_int = 4; // 0x154e PushI
	var_77_bool = var_26_int == var_76_int; // 0x154f Eq
	if(var_77_bool == 0) goto Label_5466; // 0x1550 JumpB
	var_78_int = 0; var_79_string = ""; // 0x1551 PushV
	var_79_string = "syringe"; // 0x1552 MovS
	func_5576(var_78_int, var_79_string); // 0x1553 NEW_2
	var_80_int = 0; // 0x1555 PushI
	var_81_int = 1; // 0x1556 PushI
	AddItem(var_27_bool, var_78_int, var_80_int, var_81_int); // 0x1557 Func
	goto Label_5489; // 0x1559 Jump
	
Label_5466:
	var_82_int = 5; // 0x155a PushI
	var_83_bool = var_26_int == var_82_int; // 0x155b Eq
	if(var_83_bool == 0) goto Label_5478; // 0x155c JumpB
	var_84_int = 0; var_85_string = ""; // 0x155d PushV
	var_85_string = "watch"; // 0x155e MovS
	func_5576(var_84_int, var_85_string); // 0x155f NEW_2
	var_86_int = 0; // 0x1561 PushI
	var_87_int = 1; // 0x1562 PushI
	AddItem(var_27_bool, var_84_int, var_86_int, var_87_int); // 0x1563 Func
	goto Label_5489; // 0x1565 Jump
	
Label_5478:
	var_88_int = 6; // 0x1566 PushI
	var_89_bool = var_26_int == var_88_int; // 0x1567 Eq
	if(var_89_bool == 0) goto Label_5489; // 0x1568 JumpB
	var_90_int = 0; var_91_string = ""; // 0x1569 PushV
	var_91_string = "razor"; // 0x156a MovS
	func_5576(var_90_int, var_91_string); // 0x156b NEW_2
	var_92_int = 0; // 0x156d PushI
	var_93_int = 1; // 0x156e PushI
	AddItem(var_27_bool, var_90_int, var_92_int, var_93_int); // 0x156f Func
	
Label_5490:
	var_94_int = 0; var_95_int = 0; // 0x1572 PushV
	var_94_int = 0; // 0x1573 MovI
	var_96_int = 50; // 0x1574 PushI
	var_97_int = 0; // 0x1575 PushV
	func_4937(var_97_int); // 0x1576 NEW_2
	var_98_int = 50; // 0x1578 PushI
	var_99_float = var_97_int * var_98_int; // 0x1579 Mult
	var_95_int = var_96_int + var_99_float; // 0x157a Add2
	func_5329(var_94_int, var_95_int); // 0x157b NEW_2
	var_100_int = 7; // 0x157d PushI
	irand(var_26_int, var_100_int); // 0x157e Func
	var_101_int = 0; // 0x1580 PushI
	var_102_bool = var_26_int == var_101_int; // 0x1581 Eq
	if(var_102_bool == 0) goto Label_5516; // 0x1582 JumpB
	var_103_int = 0; var_104_string = ""; // 0x1583 PushV
	var_104_string = "beads"; // 0x1584 MovS
	func_5576(var_103_int, var_104_string); // 0x1585 NEW_2
	var_105_int = 0; // 0x1587 PushI
	var_106_int = 1; // 0x1588 PushI
	AddItem(var_27_bool, var_103_int, var_105_int, var_106_int); // 0x1589 Func
	goto Label_5575; // 0x158b Jump
	
Label_5516:
	var_107_int = 1; // 0x158c PushI
	var_108_bool = var_26_int == var_107_int; // 0x158d Eq
	if(var_108_bool == 0) goto Label_5528; // 0x158e JumpB
	var_109_int = 0; var_110_string = ""; // 0x158f PushV
	var_110_string = "bracelet"; // 0x1590 MovS
	func_5576(var_109_int, var_110_string); // 0x1591 NEW_2
	var_111_int = 0; // 0x1593 PushI
	var_112_int = 1; // 0x1594 PushI
	AddItem(var_27_bool, var_109_int, var_111_int, var_112_int); // 0x1595 Func
	goto Label_5575; // 0x1597 Jump
	
Label_5528:
	var_113_int = 2; // 0x1598 PushI
	var_114_bool = var_26_int == var_113_int; // 0x1599 Eq
	if(var_114_bool == 0) goto Label_5540; // 0x159a JumpB
	var_115_int = 0; var_116_string = ""; // 0x159b PushV
	var_116_string = "ear_ring"; // 0x159c MovS
	func_5576(var_115_int, var_116_string); // 0x159d NEW_2
	var_117_int = 0; // 0x159f PushI
	var_118_int = 1; // 0x15a0 PushI
	AddItem(var_27_bool, var_115_int, var_117_int, var_118_int); // 0x15a1 Func
	goto Label_5575; // 0x15a3 Jump
	
Label_5540:
	var_119_int = 3; // 0x15a4 PushI
	var_120_bool = var_26_int == var_119_int; // 0x15a5 Eq
	if(var_120_bool == 0) goto Label_5552; // 0x15a6 JumpB
	var_121_int = 0; var_122_string = ""; // 0x15a7 PushV
	var_122_string = "gold_ring"; // 0x15a8 MovS
	func_5576(var_121_int, var_122_string); // 0x15a9 NEW_2
	var_123_int = 0; // 0x15ab PushI
	var_124_int = 1; // 0x15ac PushI
	AddItem(var_27_bool, var_121_int, var_123_int, var_124_int); // 0x15ad Func
	goto Label_5575; // 0x15af Jump
	
Label_5552:
	var_125_int = 4; // 0x15b0 PushI
	var_126_bool = var_26_int == var_125_int; // 0x15b1 Eq
	if(var_126_bool == 0) goto Label_5564; // 0x15b2 JumpB
	var_127_int = 0; var_128_string = ""; // 0x15b3 PushV
	var_128_string = "silver_ring"; // 0x15b4 MovS
	func_5576(var_127_int, var_128_string); // 0x15b5 NEW_2
	var_129_int = 0; // 0x15b7 PushI
	var_130_int = 1; // 0x15b8 PushI
	AddItem(var_27_bool, var_127_int, var_129_int, var_130_int); // 0x15b9 Func
	goto Label_5575; // 0x15bb Jump
	
Label_5564:
	var_131_int = 5; // 0x15bc PushI
	var_132_bool = var_26_int == var_131_int; // 0x15bd Eq
	if(var_132_bool == 0) goto Label_5575; // 0x15be JumpB
	var_133_int = 0; var_134_string = ""; // 0x15bf PushV
	var_134_string = "flower"; // 0x15c0 MovS
	func_5576(var_133_int, var_134_string); // 0x15c1 NEW_2
	var_135_int = 0; // 0x15c3 PushI
	var_136_int = 1; // 0x15c4 PushI
	AddItem(var_27_bool, var_133_int, var_135_int, var_136_int); // 0x15c5 Func
}


func_5915()
{
	return 0; // 0x171b Return
}


func_5916(var_20_int, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x171c PushV
	var_24_string = "Received steal"; // 0x171d PushS
	Trace(var_24_string); // 0x171e Func
	CanSee(var_23_bool, var_21_object); // 0x1720 Func
	var_25_bool = var_23_bool; // 0x1722 Push
	if(var_25_bool == 0) goto Label_5930; // 0x1723 JumpB
	var_26_int = 0; var_27_object = Obj(); // 0x1724 PushV
	var_27_object = var_21_object; // 0x1725 Mov
	func_5771(var_26_int, var_27_object); // 0x1726 NEW_2
	var_20_int = var_26_int; // 0x1727 Mov
	return 2; // 0x1729 Return
	
Label_5930:
	var_20_int = 0; // 0x172a MovI
	return 2; // 0x172b Return
}


func_4382(var_417_float, var_418_object, var_419_float, var_420_int)
{
	var_424_int = 0; var_425_string = ""; var_426_int = 0; var_427_float = 0; var_428_float = 0; var_429_float = 0; var_430_int = 0; var_431_string = ""; var_432_int = 0; var_433_float = 0; var_434_float = 0; var_435_float = 0; // 0x111e PushV
	var_436_bool = 0; var_437_object = Obj(); var_438_string = ""; // 0x111f PushV
	var_437_object = var_418_object; // 0x1120 Mov
	var_438_string = "health"; // 0x1121 MovS
	func_4370(var_436_bool, var_437_object, var_438_string); // 0x1122 NEW_2
	var_439_bool = var_436_bool == 0; // 0x1124 Not
	if(var_439_bool == 0) goto Label_4392; // 0x1125 JumpB
	var_417_float = 0.0; // 0x1126 MovF
	return 12; // 0x1127 Return
	
Label_4392:
	var_440_bool = 0; var_441_object = Obj(); var_442_string = ""; // 0x1128 PushV
	var_441_object = var_418_object; // 0x1129 Mov
	var_442_string = "armor"; // 0x112a MovS
	func_4370(var_440_bool, var_441_object, var_442_string); // 0x112b NEW_2
	var_443_bool = var_440_bool == 0; // 0x112d Not
	if(var_443_bool == 0) goto Label_4401; // 0x112e JumpB
	var_430_int = 0; // 0x112f MovI
	goto Label_4404; // 0x1130 Jump
	
Label_4404:
	var_444_string = "armor_"; // 0x1134 PushS
	var_445_string = ""; var_446_int = 0; // 0x1135 PushV
	var_446_int = var_420_int; // 0x1136 Mov
	func_4336(var_445_string, var_446_int); // 0x1137 NEW_2
	var_431_string = var_444_string + var_445_string; // 0x1139 Add2
	var_451_bool = 0; var_452_object = Obj(); var_453_string = ""; // 0x113a PushV
	var_452_object = var_418_object; // 0x113b Mov
	var_453_string = var_431_string; // 0x113c Mov
	func_4370(var_451_bool, var_452_object, var_453_string); // 0x113d NEW_2
	var_454_bool = var_451_bool == 0; // 0x113f Not
	if(var_454_bool == 0) goto Label_4419; // 0x1140 JumpB
	var_432_int = 0; // 0x1141 MovI
	goto Label_4421; // 0x1142 Jump
	
Label_4421:
	var_455_float = 0; var_456_float = 0; var_457_float = 0; // 0x1145 PushV
	var_458_int = var_430_int + var_432_int; // 0x1146 Add
	var_459_float = 100.0; // 0x1147 PushF
	var_456_float = var_458_int / var_458_int; // 0x1148 Div2
	var_457_float = 1; // 0x1149 MovI
	func_4855(var_455_float, var_456_float, var_457_float); // 0x114a NEW_2
	var_433_float = var_455_float; // 0x114b Mov
	var_461_string = "health"; // 0x114d PushS
	GetProperty(var_461_string, var_434_float); // 0x114e ObjFunc
	var_462_int = 1; // 0x1150 PushI
	var_463_int = var_462_int - var_433_float; // 0x1151 Sub
	var_435_float = var_419_float * var_463_int; // 0x1152 Mult2
	var_464_string = "health"; // 0x1153 PushS
	var_465_float = 0; var_466_float = 0; var_467_float = 0; var_468_float = 0; // 0x1154 PushV
	var_466_float = var_434_float - var_435_float; // 0x1155 Sub2
	var_467_float = 0; // 0x1156 MovI
	var_468_float = 1; // 0x1157 MovI
	func_4862(var_465_float, var_466_float, var_467_float, var_468_float); // 0x1158 NEW_2
	SetProperty(var_464_string, var_465_float); // 0x115a ObjFunc
	var_471_bool = 0; var_472_object = Obj(); // 0x115c PushV
	var_472_object = var_418_object; // 0x115d Mov
	func_4365(var_471_bool, var_472_object); // 0x115e NEW_2
	if(var_471_bool == 0) goto Label_4453; // 0x1160 JumpB
	var_473_float = 0; // 0x1161 PushV
	var_473_float = -var_435_float; // 0x1162 Neg2
	func_4920(var_473_float); // 0x1163 NEW_2
	
Label_4453:
	var_417_float = var_435_float; // 0x1165 Mov
	return 12; // 0x1166 Return
	
Label_4419:
	GetProperty(var_431_string, var_432_int); // 0x1143 ObjFunc
	
Label_4401:
	var_481_string = "armor"; // 0x1131 PushS
	GetProperty(var_481_string, var_430_int); // 0x1132 ObjFunc
}


func_4898(var_67_float, var_68_cvector, var_69_cvector)
{
	var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x1323 PushV
	var_71_cvector = var_68_cvector; // 0x1324 Mov
	var_72_cvector = var_69_cvector; // 0x1325 Mov
	func_4879(var_70_float, var_71_cvector, var_72_cvector); // 0x1326 NEW_2
	var_79_float = 0; var_80_cvector = CVector(0,0,0); // 0x1328 PushV
	var_80_cvector = var_68_cvector; // 0x1329 Mov
	func_4888(var_79_float, var_80_cvector); // 0x132a NEW_2
	var_88_float = 0; var_89_cvector = CVector(0,0,0); // 0x132c PushV
	var_89_cvector = var_69_cvector; // 0x132d Mov
	func_4888(var_88_float, var_89_cvector); // 0x132e NEW_2
	var_90_float = var_79_float * var_88_float; // 0x1330 Mult
	var_67_float = var_70_float / var_70_float; // 0x1331 Div2
	return 0; // 0x1332 Return
}


func_3878(var_0_object, var_305_bool, var_306_float)
{
	var_307_bool = 0; var_308_cvector = CVector(0,0,0); var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0); var_311_float = 0; var_312_bool = 0; var_313_cvector = CVector(0,0,0); var_314_cvector = CVector(0,0,0); var_315_cvector = CVector(0,0,0); var_316_float = 0; // 0xf26 PushV
	
Label_3879:
	IsAnimationPlaying(var_312_bool); // 0xf27 Func
	var_317_bool = var_312_bool == 0; // 0xf29 Not
	if(var_317_bool == 0) goto Label_3884; // 0xf2a JumpB
	goto Label_3916; // 0xf2b Jump
	
Label_3916:
	func_4053(var_316_float); // 0xf4d NEW_2
	var_305_bool = 0; // 0xf4f MovB
	return 10; // 0xf50 Return
	
Label_3884:
	var_318_bool = 0; // 0xf2c PushV
	func_3949(var_318_bool); // 0xf2d NEW_2
	if(var_318_bool == 0) goto Label_3890; // 0xf2f JumpB
	var_305_bool = 1; // 0xf30 MovB
	return 10; // 0xf31 Return
	
Label_3890:
	var_361_bool = 0; var_362_object = Obj(); // 0xf32 PushV
	var_362_object = var_0_object; // 0xf33 MovT
	func_4496(var_361_bool, var_362_object); // 0xf34 NEW_2
	var_363_bool = var_361_bool == 0; // 0xf36 Not
	if(var_363_bool == 0) goto Label_3898; // 0xf37 JumpB
	var_305_bool = 0; // 0xf38 MovB
	return 10; // 0xf39 Return
	
Label_3898:
	GetPFPosition(var_313_cvector); // 0xf3a TObjFunc
	GetPFPosition(var_314_cvector); // 0xf3c Func
	var_315_cvector = var_313_cvector - var_314_cvector; // 0xf3e Sub2
	var_316_float = var_315_cvector | var_315_cvector; // 0xf3f Or2
	var_364_float = var_306_float * var_306_float; // 0xf40 Mult
	var_365_bool = var_316_float < var_364_float; // 0xf41 LT
	if(var_365_bool == 0) goto Label_3913; // 0xf42 JumpB
	var_366_bool = 0; var_367_float = 0; // 0xf43 PushV
	var_367_float = var_306_float; // 0xf44 Mov
	func_3714(var_316_float, var_366_bool, var_367_float); // 0xf45 NEW_2
	var_305_bool = 1; // 0xf47 MovB
	return 10; // 0xf48 Return
	
Label_3913:
	sync(); // 0xf49 Func
	goto Label_3879; // 0xf4b Jump
}


func_5932(var_68_object)
{
	var_69_object = Obj(); // 0x172d PushV
	var_69_object = var_68_object; // 0x172e Mov
	func_5781(var_69_object); // 0x172f NEW_2
	return 0; // 0x1731 Return
}


func_2865()
{
	var_137_bool = 0; // 0xb31 PushV
	func_4657(var_137_bool); // 0xb32 NEW_2
	var_140_bool = var_137_bool == 0; // 0xb34 Not
	if(var_140_bool == 0) goto Label_2873; // 0xb35 JumpB
	func_5915(); // 0xb37 NEW_2
	
Label_2873:
	return 0; // 0xb39 Return
}


func_5938(var_127_int)
{
	var_127_int = 0; // 0x1733 MovI
	return 0; // 0x1734 Return
}


func_4915(var_123_int, var_124_string)
{
	var_125_int = 0; var_126_int = 0; // 0x1333 PushV
	GetVariable(var_124_string, var_126_int); // 0x1334 Func
	var_123_int = var_126_int; // 0x1336 Mov
	return 2; // 0x1337 Return
}


func_5941()
{
	return 0; // 0x1736 Return
}


func_5943(var_23_bool)
{
	var_23_bool = 0; // 0x1738 MovB
	return 0; // 0x1739 Return
}


func_4920(var_473_float)
{
	var_474_object = Obj(); var_475_object = Obj(); // 0x1338 PushV
	CreateFloatVector(var_475_object); // 0x1339 Func
	add(var_473_float); // 0x133b ObjFunc
	var_476_int = 0; // 0x133d PushI
	var_477_bool = var_473_float < var_476_int; // 0x133e LT
	if(var_477_bool == 0) goto Label_4932; // 0x133f JumpB
	var_478_float = 0.7; // 0x1340 PushF
	var_479_int = 500; // 0x1341 PushI
	RumblePlay(var_478_float, var_479_int); // 0x1342 Func
	
Label_4932:
	var_480_int = 15; // 0x1344 PushI
	SendWorldWndMessage(var_480_int, var_475_object); // 0x1345 Func
	return 2; // 0x1347 Return
}


func_5946()
{
	return 0; // 0x173b Return
}


func_5948(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x173c PushV
	CanSee(var_33_bool, var_31_object); // 0x173d Func
	var_30_bool = 1; // 0x173f MovB
	var_34_bool = var_33_bool; // 0x1740 Push
	if(var_34_bool == 0) goto Label_5962; // 0x1741 JumpB
	var_35_float = 0; var_36_object = Obj(); // 0x1742 PushV
	var_36_object = var_31_object; // 0x1743 Mov
	func_4357(var_36_object); // 0x1744 NEW_2
	var_43_int = 2250000; // 0x1746 PushI
	var_44_bool = var_35_float <= var_43_int; // 0x1747 LE
	if(var_44_bool == 0) goto Label_5962; // 0x1748 JumpB
	var_30_bool = 0; // 0x1749 MovB
	
Label_5962:
	return 2; // 0x174a Return
}


func_3397(var_70_object)
{
	var_77_object = Obj(); var_78_bool = 0; var_79_float = 0; // 0xd46 PushV
	var_77_object = var_70_object; // 0xd47 Mov
	var_78_bool = 1; // 0xd48 MovB
	var_79_float = 180.0; // 0xd49 MovF
	func_3411(var_73_int, var_74_bool, var_75_float, var_76_int, var_70_object, var_77_object, var_78_bool, var_79_float); // 0xd4a NEW_2
	return 0; // 0xd4c Return
}


func_4937(var_32_int)
{
	var_33_float = 0; var_34_float = 0; // 0x1349 PushV
	GetGameTime(var_34_float); // 0x134a Func
	var_35_int = 1; // 0x134c PushI
	var_36_int = 0; // 0x134d PushV
	var_37_int = 24; // 0x134e PushI
	var_36_int = var_34_float / var_34_float; // 0x134f Div2
	var_32_int = var_35_int + var_36_int; // 0x1350 Add2
	return 2; // 0x1351 Return
}


func_5963(var_58_object)
{
	var_59_object = Obj(); // 0x174c PushV
	var_59_object = var_58_object; // 0x174d Mov
	func_5763(var_59_object); // 0x174e NEW_2
	return 0; // 0x1750 Return
}


func_3405(var_414_float)
{
	var_414_float = 0.05; // 0xd4e MovF
	return 0; // 0xd4f Return
}


func_3408(var_421_int)
{
	var_421_int = 0; // 0xd51 MovI
	return 0; // 0xd52 Return
}


func_3921(var_0_object, var_320_bool)
{
	var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_float = 0; var_325_float = 0; var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_float = 0; var_330_float = 0; // 0xf51 PushV
	var_331_bool = 0; var_332_object = Obj(); // 0xf52 PushV
	var_332_object = var_0_object; // 0xf53 MovT
	func_4496(var_331_bool, var_332_object); // 0xf54 NEW_2
	var_333_bool = var_331_bool == 0; // 0xf56 Not
	if(var_333_bool == 0) goto Label_3930; // 0xf57 JumpB
	var_320_bool = 0; // 0xf58 MovB
	return 10; // 0xf59 Return
	
Label_3930:
	var_334_bool = 0; // 0xf5a PushV
	func_4010(var_330_float, var_334_bool); // 0xf5b NEW_2
	if(var_334_bool == 0) goto Label_3947; // 0xf5d JumpB
	GetPFPosition(var_326_cvector); // 0xf5e TObjFunc
	GetPFPosition(var_327_cvector); // 0xf60 Func
	var_328_cvector = var_326_cvector - var_327_cvector; // 0xf62 Sub2
	var_329_float = var_328_cvector | var_328_cvector; // 0xf63 Or2
	GetAttackDistance(var_330_float); // 0xf64 TObjFunc
	var_335_int = 50; // 0xf66 PushI
	var_330_float = var_330_float + var_335_int; // 0xf67 Add2
	var_336_float = var_330_float * var_330_float; // 0xf68 Mult
	var_320_bool = var_329_float <= var_336_float; // 0xf69 LE2
	return 10; // 0xf6a Return
	
Label_3947:
	var_320_bool = 0; // 0xf6b MovB
	return 10; // 0xf6c Return
}


func_4946(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x1352 PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0x1353 Func
	var_23_bool = var_22_bool; // 0x1355 Push
	if(var_23_bool == 0) goto Label_4954; // 0x1356 JumpB
	var_24_string = "attack"; // 0x1357 PushS
	PlayGlobalMusic(var_24_string); // 0x1358 Func
	
Label_4954:
	return 2; // 0x135a Return
}


func_3411(var_0_object, var_3_string, var_5_bool, var_77_object, var_78_bool, var_79_float, var_154_bool, var_246_bool)
{
	var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_float = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_float = 0; // 0xd53 PushV
	func_3640(var_99_cvector, var_100_bool, var_101_float); // 0xd55 NEW_2
	var_5_bool = 0; // 0xd57 TMovI
	var_124_string = "@GetAttackDistance"; // 0xd58 PushS
	var_125_int = 1; // 0xd59 PushI
	var_126_bool = IsFuncExist(var_77_object, var_124_string, var_125_int); // 0xd5a FuncExist
	if(var_126_bool == 0) goto Label_3425; // 0xd5b JumpB
	GetAttackDistance(var_91_float); // 0xd5c ObjFunc
	var_127_int = 50; // 0xd5e PushI
	var_91_float = var_91_float + var_127_int; // 0xd5f Add2
	goto Label_3426; // 0xd60 Jump
	
Label_3426:
	var_128_int = 150; // 0xd62 PushI
	var_129_bool = var_91_float >= var_128_int; // 0xd63 GE
	if(var_129_bool == 0) goto Label_3430; // 0xd64 JumpB
	var_91_float = 150; // 0xd65 MovI
	
Label_3430:
	var_3_string = 0; // 0xd66 TMovB
	var_0_object = var_77_object; // 0xd67 TMov
	IsPlayerActor(var_0_object, var_94_bool); // 0xd68 Func
	var_130_bool = var_94_bool; // 0xd6a Push
	if(var_130_bool == 0) goto Label_3444; // 0xd6b JumpB
	var_131_string = "attack"; // 0xd6c PushS
	PlayGlobalMusic(var_131_string); // 0xd6d Func
	var_132_object = Obj(); // 0xd6f PushV
	func_4839(var_132_object); // 0xd70 NEW_2
	SendPlayerEnemy(var_77_object, var_132_object); // 0xd72 Func
	
Label_3444:
	var_135_bool = var_78_bool; // 0xd74 Push
	if(var_135_bool == 0) goto Label_3448; // 0xd75 JumpB
	var_95_bool = 0; // 0xd76 MovB
	goto Label_3449; // 0xd77 Jump
	
Label_3449:
	var_136_float = 400.0; // 0xd79 PushF
	var_96_float = var_136_float + var_91_float; // 0xd7a Add2
	
Label_3451:
	var_137_bool = 0; // 0xd7b PushV
	var_137_bool = 0; // 0xd7c MovB
	var_138_bool = 0; var_139_object = Obj(); // 0xd7d PushV
	var_139_object = var_0_object; // 0xd7e MovT
	func_4496(var_138_bool, var_139_object); // 0xd7f NEW_2
	if(var_138_bool == 0) goto Label_3461; // 0xd81 JumpB
	var_140_bool = var_3_string == 0; // 0xd82 Not
	if(var_140_bool == 0) goto Label_3461; // 0xd83 JumpB
	var_137_bool = 1; // 0xd84 MovB
	
Label_3461:
	if(var_137_bool == 0) goto Label_3623; // 0xd85 JumpB
	func_4053(var_101_float); // 0xd87 NEW_2
	GetPFPosition(var_92_cvector); // 0xd89 TObjFunc
	GetPFPosition(var_93_cvector); // 0xd8b Func
	var_97_cvector = var_92_cvector - var_93_cvector; // 0xd8d Sub2
	var_98_float = var_97_cvector | var_97_cvector; // 0xd8e Or2
	var_146_float = var_96_float * var_96_float; // 0xd8f Mult
	var_147_bool = var_98_float >= var_146_float; // 0xd90 GE
	if(var_147_bool == 0) goto Label_3489; // 0xd91 JumpB
	var_148_bool = 0; var_149_object = Obj(); var_150_float = 0; var_151_float = 0; var_152_bool = 0; var_153_bool = 0; // 0xd92 PushV
	var_149_object = var_0_object; // 0xd93 MovT
	var_150_float = var_91_float; // 0xd94 Mov
	var_151_float = 3000.0; // 0xd95 MovF
	var_152_bool = 1; // 0xd96 MovB
	var_153_bool = 0; // 0xd97 MovB
	TaskCall(6); // 0xd98 TaskCall
	func_4080(var_156_bool, var_148_bool, var_149_object, var_150_float, var_151_float, var_152_bool, var_153_bool); // 0xd99 NEW_2
	TaskReturn(); // 0xd9a TaskReturn
	var_231_bool = var_154_bool == 0; // 0xd9c Not
	if(var_231_bool == 0) goto Label_3487; // 0xd9d JumpB
	goto Label_3623; // 0xd9e Jump
	
Label_3623:
	WaitForAnimEnd(); // 0xe27 Func
	var_232_string = var_3_string; // 0xe29 PushT
	if(var_232_string == 0) goto Label_3628; // 0xe2a JumpB
	return 22; // 0xe2b Return
	
Label_3628:
	var_233_string = "all"; // 0xe2c PushS
	var_234_string = "attack_off"; // 0xe2d PushS
	PlayAnimation(var_233_string, var_234_string); // 0xe2e Func
	WaitForAnimEnd(); // 0xe30 Func
	var_235_bool = var_94_bool; // 0xe32 Push
	if(var_235_bool == 0) goto Label_3639; // 0xe33 JumpB
	var_236_float = 2.0; // 0xe34 PushF
	Sleep(var_236_float); // 0xe35 Func
	
Label_3639:
	return 22; // 0xe37 Return
	
Label_3487:
	var_95_bool = 0; // 0xd9f MovB
	goto Label_3622; // 0xda0 Jump
	
Label_3622:
	goto Label_3451; // 0xe26 Jump
	
Label_3489:
	var_237_float = var_79_float * var_79_float; // 0xda1 Mult
	var_238_bool = var_98_float >= var_237_float; // 0xda2 GE
	if(var_238_bool == 0) goto Label_3614; // 0xda3 JumpB
	GetPFPosition(var_99_cvector); // 0xda4 TObjFunc
	CanReachByPF(var_100_bool, var_99_cvector); // 0xda6 Func
	var_239_bool = var_100_bool == 0; // 0xda8 Not
	if(var_239_bool == 0) goto Label_3513; // 0xda9 JumpB
	var_240_bool = 0; var_241_object = Obj(); var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_bool = 0; // 0xdaa PushV
	var_241_object = var_0_object; // 0xdab MovT
	var_242_float = var_91_float; // 0xdac Mov
	var_243_float = 3000.0; // 0xdad MovF
	var_244_bool = 1; // 0xdae MovB
	var_245_bool = 0; // 0xdaf MovB
	TaskCall(6); // 0xdb0 TaskCall
	func_4080(var_248_bool, var_240_bool, var_241_object, var_242_float, var_243_float, var_244_bool, var_245_bool); // 0xdb1 NEW_2
	TaskReturn(); // 0xdb2 TaskReturn
	var_249_bool = var_246_bool == 0; // 0xdb4 Not
	if(var_249_bool == 0) goto Label_3511; // 0xdb5 JumpB
	goto Label_3623; // 0xdb6 Jump
	
Label_3511:
	var_95_bool = 0; // 0xdb7 MovB
	goto Label_3451; // 0xdb8 Jump
	
Label_3513:
	var_250_bool = var_95_bool == 0; // 0xdb9 Not
	if(var_250_bool == 0) goto Label_3538; // 0xdba JumpB
	var_251_object = Obj(); // 0xdbb PushV
	var_251_object = var_0_object; // 0xdbc MovT
	func_4646(); // 0xdbd NEW_2
	var_260_string = "all"; // 0xdbf PushS
	var_261_string = "attack_on"; // 0xdc0 PushS
	PlayAnimation(var_260_string, var_261_string); // 0xdc1 Func
	WaitForAnimEnd(); // 0xdc3 Func
	func_4053(var_101_float); // 0xdc6 NEW_2
	StopAsync(); // 0xdc8 Func
	var_95_bool = 1; // 0xdca MovB
	var_262_bool = 0; var_263_object = Obj(); // 0xdcb PushV
	var_263_object = var_0_object; // 0xdcc MovT
	func_4496(var_262_bool, var_263_object); // 0xdcd NEW_2
	var_264_bool = var_262_bool == 0; // 0xdcf Not
	if(var_264_bool == 0) goto Label_3538; // 0xdd0 JumpB
	goto Label_3623; // 0xdd1 Jump
	
Label_3538:
	rand(var_101_float); // 0xdd2 Func
	var_265_bool = 0; // 0xdd4 PushV
	var_265_bool = 1; // 0xdd5 MovB
	var_266_float = 0.25; // 0xdd6 PushF
	var_267_bool = var_101_float < var_266_float; // 0xdd7 LT
	if(var_267_bool == 0) goto Label_3550; // 0xdd8 JumpB
	var_268_bool = 0; // 0xdd9 PushV
	func_4010(var_265_bool, var_268_bool); // 0xdda NEW_2
	if(var_268_bool == 0) goto Label_3550; // 0xddc JumpB
	var_265_bool = 0; // 0xddd MovB
	
Label_3550:
	if(var_265_bool == 0) goto Label_3567; // 0xdde JumpB
	Face(var_0_object); // 0xddf Func
	func_4060(); // 0xde2 NEW_2
	var_303_string = "all"; // 0xde4 PushS
	var_304_string = "attack_stay"; // 0xde5 PushS
	PlayAnimation(var_303_string, var_304_string); // 0xde6 Func
	var_305_bool = 0; var_306_float = 0; // 0xde8 PushV
	var_306_float = var_79_float; // 0xde9 Mov
	func_3878(var_101_float, var_305_bool, var_306_float); // 0xdea NEW_2
	StopAsync(); // 0xdec Func
	goto Label_3613; // 0xdee Jump
	
Label_3613:
	goto Label_3622; // 0xe1d Jump
	
Label_3567:
	Face(var_0_object); // 0xdef Func
	var_524_string = "all"; // 0xdf1 PushS
	var_525_string = "fjump"; // 0xdf2 PushS
	PlayAnimation(var_524_string, var_525_string); // 0xdf3 Func
	WaitForAnimEnd(); // 0xdf5 Func
	func_4053(var_101_float); // 0xdf8 NEW_2
	var_526_cvector = CVector(0.0, 0.0, 0.0); // 0xdfa PushVec
	SetSpeed(var_526_cvector); // 0xdfb Func
	Stop(); // 0xdfd Func
	StopAsync(); // 0xdff Func
	var_527_bool = 0; // 0xe01 PushV
	func_4010(var_101_float, var_527_bool); // 0xe02 NEW_2
	var_528_bool = var_527_bool == 0; // 0xe04 Not
	if(var_528_bool == 0) goto Label_3613; // 0xe05 JumpB
	var_529_bool = 0; var_530_object = Obj(); // 0xe06 PushV
	var_530_object = var_0_object; // 0xe07 MovT
	func_4496(var_529_bool, var_530_object); // 0xe08 NEW_2
	var_531_bool = var_529_bool == 0; // 0xe0a Not
	if(var_531_bool == 0) goto Label_3597; // 0xe0b JumpB
	goto Label_3623; // 0xe0c Jump
	
Label_3597:
	GetPFPosition(var_92_cvector); // 0xe0d TObjFunc
	GetPFPosition(var_93_cvector); // 0xe0f Func
	var_97_cvector = var_92_cvector - var_93_cvector; // 0xe11 Sub2
	var_98_float = var_97_cvector | var_97_cvector; // 0xe12 Or2
	var_532_float = var_79_float * var_79_float; // 0xe13 Mult
	var_533_bool = var_98_float < var_532_float; // 0xe14 LT
	if(var_533_bool == 0) goto Label_3613; // 0xe15 JumpB
	var_534_bool = 0; var_535_float = 0; // 0xe16 PushV
	var_535_float = var_79_float; // 0xe17 Mov
	func_3714(var_101_float, var_534_bool, var_535_float); // 0xe18 NEW_2
	var_536_bool = var_534_bool == 0; // 0xe1a Not
	if(var_536_bool == 0) goto Label_3613; // 0xe1b JumpB
	goto Label_3623; // 0xe1c Jump
	
Label_3614:
	var_537_bool = 0; var_538_float = 0; // 0xe1e PushV
	var_538_float = var_79_float; // 0xe1f Mov
	func_3714(var_101_float, var_537_bool, var_538_float); // 0xe20 NEW_2
	var_539_bool = var_537_bool == 0; // 0xe22 Not
	if(var_539_bool == 0) goto Label_3621; // 0xe23 JumpB
	goto Label_3623; // 0xe24 Jump
	
Label_3621:
	var_95_bool = 1; // 0xe25 MovB
	
Label_3448:
	var_95_bool = 1; // 0xd78 MovB
	
Label_3425:
	var_91_float = var_79_float; // 0xd61 Mov
}


func_5969(var_47_bool)
{
	var_47_bool = 0; // 0x1752 MovB
	return 0; // 0x1753 Return
}


func_5972()
{
	return 0; // 0x1755 Return
}


func_5974(var_25_bool)
{
	var_25_bool = 0; // 0x1757 MovB
	return 0; // 0x1758 Return
}


func_5977()
{
	return 0; // 0x175a Return
}


func_4955()
{
	var_378_object = Obj(); var_379_object = Obj(); // 0x135b PushV
	GetScene(var_379_object); // 0x135c Func
	var_380_string = "battle"; // 0x135e PushS
	var_381_object = Obj(); // 0x135f PushV
	func_4839(var_381_object); // 0x1360 NEW_2
	BroadcastMessage(var_380_string, var_381_object, var_379_object); // 0x1362 Func
	return 2; // 0x1364 Return
}


func_5979(var_151_string, var_152_int)
{
	var_153_string = ""; var_154_string = ""; // 0x175b PushV
	var_154_string = "idle"; // 0x175c MovS
	var_155_int = var_152_int; // 0x175d Push
	if(var_155_int == 0) goto Label_5984; // 0x175e JumpB
	var_154_string = var_154_string + var_152_int; // 0x175f Add2
	
Label_5984:
	var_151_string = var_154_string; // 0x1760 Mov
	return 2; // 0x1761 Return
}


func_5986()
{
	var_441_object = Obj(); var_442_object = Obj(); var_443_object = Obj(); var_444_object = Obj(); var_445_int = 0; var_446_int = 0; var_447_int = 0; var_448_int = 0; var_449_object = Obj(); var_450_int = 0; var_451_bool = 0; var_452_int = 0; var_453_float = 0; var_454_int = 0; var_455_object = Obj(); var_456_int = 0; var_457_int = 0; var_458_int = 0; var_459_int = 0; var_460_int = 0; var_461_int = 0; var_462_int = 0; var_463_int = 0; var_464_int = 0; var_465_int = 0; var_466_object = Obj(); var_467_object = Obj(); var_468_object = Obj(); var_469_object = Obj(); var_470_object = Obj(); var_471_int = 0; var_472_int = 0; var_473_int = 0; var_474_int = 0; var_475_object = Obj(); var_476_int = 0; var_477_bool = 0; var_478_int = 0; var_479_float = 0; var_480_int = 0; var_481_object = Obj(); var_482_int = 0; var_483_int = 0; var_484_int = 0; var_485_int = 0; var_486_int = 0; var_487_int = 0; var_488_int = 0; var_489_int = 0; var_490_int = 0; var_491_int = 0; var_492_object = Obj(); // 0x1762 PushV
	var_493_object = Obj(); // 0x1763 PushV
	func_4873(var_493_object); // 0x1764 NEW_2
	var_467_object = var_493_object; // 0x1765 Mov
	CreateIntVector(var_468_object); // 0x1767 Func
	CreateIntVector(var_469_object); // 0x1769 Func
	CreateIntVector(var_470_object); // 0x176b Func
	GetSubContainerCount(var_471_int); // 0x176d ObjFunc
	var_472_int = 0; // 0x176f MovI
	
Label_6000:
	var_496_bool = var_472_int < var_471_int; // 0x1770 LT
	if(var_496_bool == 0) goto Label_6072; // 0x1771 JumpB
	GetItemCount(var_473_int, var_472_int); // 0x1772 ObjFunc
	var_474_int = 0; // 0x1774 MovI
	
Label_6005:
	var_497_bool = var_474_int < var_473_int; // 0x1775 LT
	if(var_497_bool == 0) goto Label_6069; // 0x1776 JumpB
	GetItem(var_475_object, var_474_int, var_472_int); // 0x1777 ObjFunc
	GetItemID(var_476_int); // 0x1779 ObjFunc
	var_498_string = "HasDurability"; // 0x177b PushS
	HasInvItemProperty(var_477_bool, var_476_int, var_498_string); // 0x177c Func
	var_499_bool = var_477_bool; // 0x177e Push
	if(var_499_bool == 0) goto Label_6065; // 0x177f JumpB
	var_500_string = "durability"; // 0x1780 PushS
	HasProperty(var_477_bool, var_500_string); // 0x1781 ObjFunc
	var_501_bool = var_477_bool; // 0x1783 Push
	if(var_501_bool == 0) goto Label_6065; // 0x1784 JumpB
	var_502_string = "durability"; // 0x1785 PushS
	GetProperty(var_478_int, var_502_string); // 0x1786 ObjFunc
	var_503_bool = 0; // 0x1788 PushV
	var_503_bool = 0; // 0x1789 MovB
	var_504_int = 100; // 0x178a PushI
	var_505_bool = var_478_int < var_504_int; // 0x178b LT
	if(var_505_bool == 0) goto Label_6035; // 0x178c JumpB
	var_506_bool = 0; var_507_object = Obj(); // 0x178d PushV
	var_507_object = var_475_object; // 0x178e Mov
	func_6133(var_507_object); // 0x178f NEW_2
	if(var_506_bool == 0) goto Label_6035; // 0x1791 JumpB
	var_503_bool = 1; // 0x1792 MovB
	
Label_6035:
	if(var_503_bool == 0) goto Label_6065; // 0x1793 JumpB
	add(var_475_object); // 0x1794 ObjFunc
	add(var_472_int); // 0x1796 ObjFunc
	add(var_474_int); // 0x1798 ObjFunc
	var_513_int = 0; var_514_object = Obj(); var_515_int = 0; // 0x179a PushV
	var_514_object = var_475_object; // 0x179b Mov
	var_515_int = 0; // 0x179c MovI
	func_5252(var_513_int, var_514_object, var_515_int); // 0x179d NEW_2
	var_479_float = var_513_int; // 0x179e Mov
	var_555_float = 1.0; // 0x17a0 PushF
	var_556_float = 2.0; // 0x17a1 PushF
	var_557_float = var_556_float * var_478_int; // 0x17a2 Mult
	var_558_float = 100.0; // 0x17a3 PushF
	var_559_float = var_557_float / var_558_float; // 0x17a4 Div
	var_560_int = var_555_float + var_559_float; // 0x17a5 Add
	var_561_float = var_479_float * var_560_int; // 0x17a6 Mult
	var_562_int = 100; // 0x17a7 PushI
	var_563_int = var_562_int - var_478_int; // 0x17a8 Sub
	var_564_float = var_561_float * var_563_int; // 0x17a9 Mult
	var_565_int = 300; // 0x17aa PushI
	var_480_int = var_564_float / var_564_float; // 0x17ab Div2
	var_566_bool = var_480_int == 0; // 0x17ac Not
	if(var_566_bool == 0) goto Label_6063; // 0x17ad JumpB
	var_480_int = 1; // 0x17ae MovI
	
Label_6063:
	add(var_480_int); // 0x17af ObjFunc
	
Label_6065:
	var_475_object = 0; // 0x17b1 SetNull
	var_567_int = 1; // 0x17b2 PushI
	var_474_int = var_474_int + var_567_int; // 0x17b3 Add2
	goto Label_6005; // 0x17b4 Jump
	
Label_6069:
	var_568_int = 1; // 0x17b5 PushI
	var_472_int = var_472_int + var_568_int; // 0x17b6 Add2
	goto Label_6000; // 0x17b7 Jump
	
Label_6072:
	CreateIntVector(var_481_object); // 0x17b8 Func
	var_569_string = "repair.xml"; // 0x17ba PushS
	ChooseItem(var_467_object, var_481_object, var_470_object, var_569_string); // 0x17bb Func
	size(var_482_int); // 0x17bd ObjFunc
	var_570_bool = var_482_int == 0; // 0x17bf Not
	if(var_570_bool == 0) goto Label_6082; // 0x17c0 JumpB
	return 52; // 0x17c1 Return
	
Label_6082:
	var_483_int = 0; // 0x17c2 MovI
	var_484_int = 0; // 0x17c3 MovI
	
Label_6084:
	var_571_bool = var_484_int < var_482_int; // 0x17c4 LT
	if(var_571_bool == 0) goto Label_6094; // 0x17c5 JumpB
	get(var_485_int, var_484_int); // 0x17c6 ObjFunc
	get(var_486_int, var_485_int); // 0x17c8 ObjFunc
	var_483_int = var_483_int + var_486_int; // 0x17ca Add2
	var_572_int = 1; // 0x17cb PushI
	var_484_int = var_484_int + var_572_int; // 0x17cc Add2
	goto Label_6084; // 0x17cd Jump
	
Label_6094:
	var_573_string = "money"; // 0x17ce PushS
	GetProperty(var_573_string, var_487_int); // 0x17cf ObjFunc
	var_487_int = var_487_int - var_483_int; // 0x17d1 Sub2
	var_574_int = 0; // 0x17d2 PushI
	var_575_bool = var_487_int < var_574_int; // 0x17d3 LT
	if(var_575_bool == 0) goto Label_6102; // 0x17d4 JumpB
	return 52; // 0x17d5 Return
	
Label_6102:
	var_576_string = "money"; // 0x17d6 PushS
	SetProperty(var_576_string, var_487_int); // 0x17d7 ObjFunc
	var_488_int = 0; // 0x17d9 MovI
	
Label_6106:
	var_577_bool = var_488_int < var_482_int; // 0x17da LT
	if(var_577_bool == 0) goto Label_6127; // 0x17db JumpB
	get(var_489_int, var_488_int); // 0x17dc ObjFunc
	get(var_490_int, var_489_int); // 0x17de ObjFunc
	get(var_491_int, var_489_int); // 0x17e0 ObjFunc
	GetItem(var_492_object, var_491_int, var_490_int); // 0x17e2 ObjFunc
	var_578_string = "durability"; // 0x17e4 PushS
	var_579_int = 100; // 0x17e5 PushI
	SetProperty(var_578_string, var_579_int); // 0x17e6 ObjFunc
	var_580_int = 1; // 0x17e8 PushI
	SetItem(var_492_object, var_580_int, var_491_int, var_490_int); // 0x17e9 ObjFunc
	var_492_object = 0; // 0x17eb SetNull
	var_581_int = 1; // 0x17ec PushI
	var_488_int = var_488_int + var_581_int; // 0x17ed Add2
	goto Label_6106; // 0x17ee Jump
	
Label_6127:
	return 52; // 0x17ef Return
}


func_4966()
{
	var_25_int = 100; // 0x1367 PushI
	SetReturnValue(var_25_int); // 0x1368 ObjFunc
	return 0; // 0x136a Return
}


func_4455(var_45_bool)
{
	var_47_bool = 0; var_48_bool = 0; // 0x1167 PushV
	IsDead(var_48_bool); // 0x1168 ObjFunc
	var_45_bool = var_48_bool; // 0x116a Mov
	return 2; // 0x116b Return
}


func_4971(var_302_bool)
{
	var_304_int = 0; var_305_string = ""; // 0x136c PushV
	var_305_string = "branch"; // 0x136d MovS
	func_4915(var_304_int, var_305_string); // 0x136e NEW_2
	var_306_int = 0; // 0x1370 PushI
	var_307_bool = var_304_int == var_306_int; // 0x1371 Eq
	if(var_307_bool == 0) goto Label_4981; // 0x1372 JumpB
	var_302_bool = 1; // 0x1373 MovB
	return 0; // 0x1374 Return
	
Label_4981:
	var_302_bool = 0; // 0x1375 MovB
	return 0; // 0x1376 Return
}


func_4460(var_34_bool, var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); // 0x116c PushV
	var_40_bool = var_35_object == 0; // 0x116d NullEq
	if(var_40_bool == 0) goto Label_4465; // 0x116e JumpB
	var_34_bool = 0; // 0x116f MovB
	return 4; // 0x1170 Return
	
Label_4465:
	var_41_bool = 0; // 0x1171 PushV
	var_41_bool = 0; // 0x1172 MovB
	var_42_string = "IsDead"; // 0x1173 PushS
	var_43_int = 1; // 0x1174 PushI
	var_44_bool = IsFuncExist(var_35_object, var_42_string, var_43_int); // 0x1175 FuncExist
	if(var_44_bool == 0) goto Label_4477; // 0x1176 JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x1177 PushV
	var_46_object = var_35_object; // 0x1178 Mov
	func_4455(var_46_object); // 0x1179 NEW_2
	if(var_45_bool == 0) goto Label_4477; // 0x117b JumpB
	var_41_bool = 1; // 0x117c MovB
	
Label_4477:
	if(var_41_bool == 0) goto Label_4480; // 0x117d JumpB
	var_34_bool = 0; // 0x117e MovB
	return 4; // 0x117f Return
	
Label_4480:
	GetScene(var_38_object); // 0x1180 Func
	var_49_bool = var_38_object == 0; // 0x1182 NullEq
	if(var_49_bool == 0) goto Label_4486; // 0x1183 JumpB
	var_34_bool = 0; // 0x1184 MovB
	return 4; // 0x1185 Return
	
Label_4486:
	GetScene(var_39_object); // 0x1186 ObjFunc
	var_50_bool = var_38_object != var_39_object; // 0x1188 Neq
	if(var_50_bool == 0) goto Label_4492; // 0x1189 JumpB
	var_34_bool = 0; // 0x118a MovB
	return 4; // 0x118b Return
	
Label_4492:
	var_34_bool = 1; // 0x118c MovB
	return 4; // 0x118d Return
}


func_3949(var_318_bool)
{
	var_319_bool = 0; // 0xf6d PushV
	var_319_bool = 0; // 0xf6e MovB
	var_320_bool = 0; // 0xf6f PushV
	func_3921(var_319_bool, var_320_bool); // 0xf70 NEW_2
	if(var_320_bool == 0) goto Label_3960; // 0xf72 JumpB
	var_337_bool = 0; // 0xf73 PushV
	func_3965(var_318_bool, var_319_bool, var_337_bool); // 0xf74 NEW_2
	if(var_337_bool == 0) goto Label_3960; // 0xf76 JumpB
	var_319_bool = 1; // 0xf77 MovB
	
Label_3960:
	if(var_319_bool == 0) goto Label_3963; // 0xf78 JumpB
	var_318_bool = 1; // 0xf79 MovB
	return 0; // 0xf7a Return
	
Label_3963:
	var_318_bool = 0; // 0xf7b MovB
	return 0; // 0xf7c Return
}


func_4983(var_311_bool)
{
	var_313_int = 0; var_314_string = ""; // 0x1378 PushV
	var_314_string = "branch"; // 0x1379 MovS
	func_4915(var_313_int, var_314_string); // 0x137a NEW_2
	var_315_int = 1; // 0x137c PushI
	var_316_bool = var_313_int == var_315_int; // 0x137d Eq
	if(var_316_bool == 0) goto Label_4993; // 0x137e JumpB
	var_311_bool = 1; // 0x137f MovB
	return 0; // 0x1380 Return
	
Label_4993:
	var_311_bool = 0; // 0x1381 MovB
	return 0; // 0x1382 Return
}


func_3965(var_0_object, var_4_bool, var_337_bool)
{
	var_338_object = Obj(); var_339_bool = 0; var_340_float = 0; var_341_cvector = CVector(0,0,0); var_342_cvector = CVector(0,0,0); var_343_object = Obj(); var_344_bool = 0; var_345_float = 0; var_346_cvector = CVector(0,0,0); var_347_cvector = CVector(0,0,0); // 0xf7d PushV
	GetScene(var_343_object); // 0xf7e Func
	var_344_bool = 0; // 0xf80 MovB
	
Label_3969:
	var_348_cvector = CVector(0,0,0); var_349_object = Obj(); // 0xf81 PushV
	var_349_object = var_0_object; // 0xf82 MovT
	func_4350(var_349_object); // 0xf83 NEW_2
	var_354_int = -var_348_cvector; // 0xf85 Neg
	FindDirLength(var_345_float, var_354_int, var_345_float); // 0xf86 Func
	var_355_bool = var_345_float < var_4_bool; // 0xf88 LT
	if(var_355_bool == 0) goto Label_3979; // 0xf89 JumpB
	goto Label_4007; // 0xf8a Jump
	
Label_4007:
	var_337_bool = var_344_bool; // 0xfa7 Mov
	return 10; // 0xfa8 Return
	
Label_3979:
	Face(var_0_object); // 0xf8b Func
	var_356_string = "all"; // 0xf8d PushS
	var_357_string = "bjump"; // 0xf8e PushS
	PlayAnimation(var_356_string, var_357_string); // 0xf8f Func
	GetPFPosition(var_346_cvector); // 0xf91 TObjFunc
	GetPFPosition(var_347_cvector); // 0xf93 Func
	WaitForAnimEnd(); // 0xf95 Func
	func_4053(var_347_cvector); // 0xf98 NEW_2
	StopAsync(); // 0xf9a Func
	var_358_cvector = CVector(0.0, 0.0, 0.0); // 0xf9c PushVec
	SetSpeed(var_358_cvector); // 0xf9d Func
	var_344_bool = 1; // 0xf9f MovB
	var_359_bool = 0; // 0xfa0 PushV
	func_3921(var_347_cvector, var_359_bool); // 0xfa1 NEW_2
	var_360_bool = var_359_bool == 0; // 0xfa3 Not
	if(var_360_bool == 0) goto Label_4006; // 0xfa4 JumpB
	goto Label_4007; // 0xfa5 Jump
	
Label_4006:
	goto Label_3969; // 0xfa6 Jump
}


func_4995(var_121_bool)
{
	var_123_int = 0; var_124_string = ""; // 0x1384 PushV
	var_124_string = "branch"; // 0x1385 MovS
	func_4915(var_123_int, var_124_string); // 0x1386 NEW_2
	var_127_int = 2; // 0x1388 PushI
	var_128_bool = var_123_int == var_127_int; // 0x1389 Eq
	if(var_128_bool == 0) goto Label_5005; // 0x138a JumpB
	var_121_bool = 1; // 0x138b MovB
	return 0; // 0x138c Return
	
Label_5005:
	var_121_bool = 0; // 0x138d MovB
	return 0; // 0x138e Return
}


func_5007(var_168_bool, var_169_object)
{
	var_170_bool = 0; var_171_object = Obj(); // 0x1390 PushV
	var_171_object = var_169_object; // 0x1391 Mov
	func_5137(var_171_object); // 0x1392 NEW_2
	if(var_170_bool == 0) goto Label_5015; // 0x1394 JumpB
	var_168_bool = 1; // 0x1395 MovB
	return 0; // 0x1396 Return
	
Label_5015:
	var_168_bool = 0; // 0x1397 MovB
	return 0; // 0x1398 Return
}


func_4496(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0; // 0x1190 PushV
	var_34_bool = 0; var_35_object = Obj(); // 0x1191 PushV
	var_35_object = var_31_object; // 0x1192 Mov
	func_4460(var_34_bool, var_35_object); // 0x1193 NEW_2
	var_51_bool = var_34_bool == 0; // 0x1195 Not
	if(var_51_bool == 0) goto Label_4505; // 0x1196 JumpB
	var_30_bool = 0; // 0x1197 MovB
	return 2; // 0x1198 Return
	
Label_4505:
	var_52_bool = 0; var_53_object = Obj(); var_54_string = ""; // 0x1199 PushV
	var_53_object = var_31_object; // 0x119a Mov
	var_54_string = "noaccess"; // 0x119b MovS
	func_4370(var_52_bool, var_53_object, var_54_string); // 0x119c NEW_2
	var_61_bool = var_52_bool == 0; // 0x119e Not
	if(var_61_bool == 0) goto Label_4514; // 0x119f JumpB
	var_30_bool = 1; // 0x11a0 MovB
	return 2; // 0x11a1 Return
	
Label_4514:
	var_62_string = "noaccess"; // 0x11a2 PushS
	GetProperty(var_62_string, var_33_int); // 0x11a3 ObjFunc
	var_63_int = 0; // 0x11a5 PushI
	var_30_bool = var_33_int == var_63_int; // 0x11a6 Eq2
	return 2; // 0x11a7 Return
}


func_5017(var_390_bool, var_391_object)
{
	var_392_bool = 0; var_393_object = Obj(); // 0x139a PushV
	var_393_object = var_391_object; // 0x139b Mov
	func_5144(var_393_object); // 0x139c NEW_2
	if(var_392_bool == 0) goto Label_5025; // 0x139e JumpB
	var_390_bool = 1; // 0x139f MovB
	return 0; // 0x13a0 Return
	
Label_5025:
	var_390_bool = 0; // 0x13a1 MovB
	return 0; // 0x13a2 Return
}


func_5027(var_149_bool, var_150_object)
{
	var_151_bool = 0; var_152_object = Obj(); // 0x13a4 PushV
	var_152_object = var_150_object; // 0x13a5 Mov
	func_5147(var_152_object); // 0x13a6 NEW_2
	if(var_151_bool == 0) goto Label_5035; // 0x13a8 JumpB
	var_149_bool = 1; // 0x13a9 MovB
	return 0; // 0x13aa Return
	
Label_5035:
	var_149_bool = 0; // 0x13ab MovB
	return 0; // 0x13ac Return
}


func_4520(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; // 0x11a8 PushV
	var_49_bool = var_34_object == 0; // 0x11a9 NullEq
	if(var_49_bool == 0) goto Label_4524; // 0x11aa JumpB
	return 14; // 0x11ab Return
	
Label_4524:
	IsDead(var_42_bool); // 0x11ac Func
	var_50_bool = var_42_bool; // 0x11ae Push
	if(var_50_bool == 0) goto Label_4529; // 0x11af JumpB
	return 14; // 0x11b0 Return
	
Label_4529:
	GetSecondaryAnimationType(var_43_int); // 0x11b1 Func
	var_51_int = 0; // 0x11b3 PushI
	var_52_bool = var_43_int < var_51_int; // 0x11b4 LT
	if(var_52_bool == 0) goto Label_4535; // 0x11b5 JumpB
	return 14; // 0x11b6 Return
	
Label_4535:
	GetPosition(var_44_cvector); // 0x11b7 ObjFunc
	GetPosition(var_45_cvector); // 0x11b9 Func
	GetDirection(var_46_cvector); // 0x11bb Func
	var_47_cvector = var_45_cvector - var_44_cvector; // 0x11bd Sub2
	var_53_float = GetByIndex(var_47_cvector, 0); // 0x11be PushE
	var_54_float = GetByIndex(var_46_cvector, 0); // 0x11bf PushE
	var_55_float = var_53_float * var_54_float; // 0x11c0 Mult
	var_56_float = GetByIndex(var_47_cvector, 2); // 0x11c1 PushE
	var_57_float = GetByIndex(var_46_cvector, 2); // 0x11c2 PushE
	var_58_float = var_56_float * var_57_float; // 0x11c3 Mult
	var_59_int = var_55_float + var_58_float; // 0x11c4 Add
	var_60_int = 0; // 0x11c5 PushI
	var_61_bool = var_59_int >= var_60_int; // 0x11c6 GE
	if(var_61_bool == 0) goto Label_4554; // 0x11c7 JumpB
	var_48_string = "fhit"; // 0x11c8 MovS
	goto Label_4555; // 0x11c9 Jump
	
Label_4555:
	var_62_string = "hit_react"; // 0x11cb PushS
	var_63_string = "1"; // 0x11cc PushS
	var_64_int = var_48_string + var_63_string; // 0x11cd Add
	var_65_string = "2"; // 0x11ce PushS
	var_66_int = var_48_string + var_65_string; // 0x11cf Add
	var_67_int = -10; // 0x11d0 PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0x11d1 Func
	return 14; // 0x11d3 Return
	
Label_4554:
	var_48_string = "bhit"; // 0x11ca MovS
}


func_4010(var_0_object, var_268_bool)
{
	var_269_bool = 0; var_270_bool = 0; // 0xfaa PushV
	var_271_string = "IsAttacking"; // 0xfab PushS
	var_272_int = 1; // 0xfac PushI
	var_273_bool = IsFuncExist(var_0_object, var_271_string, var_272_int); // 0xfad FuncExist
	if(var_273_bool == 0) goto Label_4019; // 0xfae JumpB
	IsAttacking(var_270_bool); // 0xfaf TObjFunc
	var_268_bool = var_270_bool; // 0xfb1 Mov
	return 2; // 0xfb2 Return
	
Label_4019:
	var_268_bool = 0; // 0xfb3 MovB
	return 2; // 0xfb4 Return
}


func_5037(var_161_bool, var_162_object)
{
	var_163_bool = 0; var_164_object = Obj(); // 0x13ae PushV
	var_164_object = var_162_object; // 0x13af Mov
	func_5154(var_164_object); // 0x13b0 NEW_2
	if(var_163_bool == 0) goto Label_5045; // 0x13b2 JumpB
	var_161_bool = 1; // 0x13b3 MovB
	return 0; // 0x13b4 Return
	
Label_5045:
	var_161_bool = 0; // 0x13b5 MovB
	return 0; // 0x13b6 Return
}


func_4021(var_2_object, var_5_bool)
{
	var_385_float = 0; var_386_int = 0; var_387_float = 0; var_388_int = 0; // 0xfb5 PushV
	var_389_bool = var_2_object == 0; // 0xfb6 Not
	if(var_389_bool == 0) goto Label_4025; // 0xfb7 JumpB
	return 4; // 0xfb8 Return
	
Label_4025:
	var_390_bool = var_5_bool; // 0xfb9 PushT
	if(var_390_bool == 0) goto Label_4033; // 0xfba JumpB
	var_391_int = -1; // 0xfbb PushI
	var_5_bool = var_5_bool + var_391_int; // 0xfbc Add2
	var_392_int = 0; // 0xfbd PushI
	var_393_bool = var_5_bool > var_392_int; // 0xfbe GT
	if(var_393_bool == 0) goto Label_4033; // 0xfbf JumpB
	return 4; // 0xfc0 Return
	
Label_4033:
	rand(var_387_float); // 0xfc1 Func
	var_394_float = 0; // 0xfc3 PushV
	func_4071(var_394_float); // 0xfc4 NEW_2
	var_395_bool = var_387_float < var_394_float; // 0xfc6 LT
	if(var_395_bool == 0) goto Label_4052; // 0xfc7 JumpB
	irand(var_388_int, var_387_float); // 0xfc8 Func
	var_396_int = 1; // 0xfca PushI
	var_388_int = var_388_int + var_396_int; // 0xfcb Add2
	var_397_string = "attack"; // 0xfcc PushS
	var_398_int = var_397_string + var_388_int; // 0xfcd Add
	Speak(var_398_int); // 0xfce Func
	var_399_int = 0; // 0xfd0 PushV
	func_4069(var_399_int); // 0xfd1 NEW_2
	var_5_bool = var_399_int; // 0xfd2 TMov
	
Label_4052:
	return 4; // 0xfd4 Return
}


func_5047(var_347_bool, var_348_object)
{
	var_349_bool = 0; var_350_object = Obj(); // 0x13b8 PushV
	var_350_object = var_348_object; // 0x13b9 Mov
	func_5161(var_350_object); // 0x13ba NEW_2
	if(var_349_bool == 0) goto Label_5055; // 0x13bc JumpB
	var_347_bool = 1; // 0x13bd MovB
	return 0; // 0x13be Return
	
Label_5055:
	var_347_bool = 0; // 0x13bf MovB
	return 0; // 0x13c0 Return
}


func_5057(var_359_bool, var_360_object)
{
	var_361_bool = 0; var_362_object = Obj(); // 0x13c2 PushV
	var_362_object = var_360_object; // 0x13c3 Mov
	func_5168(var_362_object); // 0x13c4 NEW_2
	if(var_361_bool == 0) goto Label_5065; // 0x13c6 JumpB
	var_359_bool = 1; // 0x13c7 MovB
	return 0; // 0x13c8 Return
	
Label_5065:
	var_359_bool = 0; // 0x13c9 MovB
	return 0; // 0x13ca Return
}


func_5576(var_50_int, var_51_string)
{
	var_52_int = 0; var_53_int = 0; // 0x15c8 PushV
	GetInvItemByName(var_53_int, var_51_string); // 0x15c9 Func
	var_50_int = var_53_int; // 0x15cb Mov
	return 2; // 0x15cc Return
}


func_5067(var_368_bool, var_369_object)
{
	var_370_bool = 0; var_371_object = Obj(); // 0x13cc PushV
	var_371_object = var_369_object; // 0x13cd Mov
	func_5175(var_371_object); // 0x13ce NEW_2
	if(var_370_bool == 0) goto Label_5075; // 0x13d0 JumpB
	var_368_bool = 1; // 0x13d1 MovB
	return 0; // 0x13d2 Return
	
Label_5075:
	var_368_bool = 0; // 0x13d3 MovB
	return 0; // 0x13d4 Return
}


func_5581(var_18_object)
{
	var_19_object = Obj(); // 0x15ce PushV
	var_19_object = var_18_object; // 0x15cf Mov
	TaskCall(2); // 0x15d0 TaskCall
	func_2675(var_19_object); // 0x15d1 NEW_2
	TaskReturn(); // 0x15d2 TaskReturn
	return 0; // 0x15d4 Return
}


func_4564(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); // 0x11d4 PushV
	var_42_bool = 0; // 0x11d5 PushV
	var_42_bool = 0; // 0x11d6 MovB
	var_43_bool = 0; // 0x11d7 PushV
	var_43_bool = 0; // 0x11d8 MovB
	var_44_object = var_21_object; // 0x11d9 Push
	if(var_44_object == 0) goto Label_4575; // 0x11da JumpB
	var_45_int = 4; // 0x11db PushI
	var_46_bool = var_22_int != var_45_int; // 0x11dc Neq
	if(var_46_bool == 0) goto Label_4575; // 0x11dd JumpB
	var_43_bool = 1; // 0x11de MovB
	
Label_4575:
	if(var_43_bool == 0) goto Label_4580; // 0x11df JumpB
	var_47_int = 5; // 0x11e0 PushI
	var_48_bool = var_22_int != var_47_int; // 0x11e1 Neq
	if(var_48_bool == 0) goto Label_4580; // 0x11e2 JumpB
	var_42_bool = 1; // 0x11e3 MovB
	
Label_4580:
	if(var_42_bool == 0) goto Label_4627; // 0x11e4 JumpB
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x11e5 PushV
	var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0x11e6 PushV
	var_52_object = var_21_object; // 0x11e7 Mov
	func_4350(var_52_object); // 0x11e8 NEW_2
	var_50_cvector = var_51_cvector; // 0x11e9 Mov
	func_4845(var_49_cvector, var_50_cvector); // 0x11eb NEW_2
	var_33_cvector = var_49_cvector; // 0x11ec Mov
	CreateVectorVector(var_34_object); // 0x11ee Func
	var_35_int = 1; // 0x11f0 MovI
	
Label_4593:
	var_62_string = "hit"; // 0x11f1 PushS
	var_63_int = var_62_string + var_35_int; // 0x11f2 Add
	GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector); // 0x11f3 Func
	var_64_bool = var_36_bool == 0; // 0x11f5 Not
	if(var_64_bool == 0) goto Label_4600; // 0x11f6 JumpB
	goto Label_4609; // 0x11f7 Jump
	
Label_4609:
	size(var_39_int); // 0x1201 ObjFunc
	var_65_int = var_39_int; // 0x1203 Push
	if(var_65_int == 0) goto Label_4626; // 0x1204 JumpB
	irand(var_40_int, var_39_int); // 0x1205 Func
	get(var_41_cvector, var_40_int); // 0x1207 ObjFunc
	var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x1209 PushV
	var_66_object = var_21_object; // 0x120a Mov
	var_67_int = var_22_int; // 0x120b Mov
	var_68_float = var_23_float; // 0x120c Mov
	var_69_cvector = var_41_cvector; // 0x120d Mov
	var_70_cvector = -var_33_cvector; // 0x120e Neg2
	func_4632(var_68_float, var_69_cvector, var_70_cvector); // 0x120f NEW_2
	return 18; // 0x1211 Return
	
Label_4626:
	var_34_object = 0; // 0x1212 SetNull
	
Label_4627:
	var_111_object = Obj(); // 0x1213 PushV
	var_111_object = var_21_object; // 0x1214 Mov
	func_4520(var_111_object); // 0x1215 NEW_2
	return 18; // 0x1217 Return
	
Label_4600:
	var_112_int = var_38_cvector | var_33_cvector; // 0x11f8 Or
	var_113_float = 0.70711; // 0x11f9 PushF
	var_114_bool = var_112_int >= var_113_float; // 0x11fa GE
	if(var_114_bool == 0) goto Label_4606; // 0x11fb JumpB
	add(var_37_cvector); // 0x11fc ObjFunc
	
Label_4606:
	var_115_int = 1; // 0x11fe PushI
	var_35_int = var_35_int + var_115_int; // 0x11ff Add2
	goto Label_4593; // 0x1200 Jump
}


func_5077(var_208_bool, var_209_object)
{
	var_210_bool = 0; var_211_object = Obj(); // 0x13d6 PushV
	var_211_object = var_209_object; // 0x13d7 Mov
	func_5182(var_211_object); // 0x13d8 NEW_2
	if(var_210_bool == 0) goto Label_5085; // 0x13da JumpB
	var_208_bool = 1; // 0x13db MovB
	return 0; // 0x13dc Return
	
Label_5085:
	var_208_bool = 0; // 0x13dd MovB
	return 0; // 0x13de Return
}


func_4053(var_0_object)
{
	var_141_object = Obj(); // 0xfd5 PushV
	var_141_object = var_0_object; // 0xfd6 MovT
	func_4946(var_141_object); // 0xfd7 NEW_2
	return 0; // 0xfd9 Return
}


func_4058(var_482_int)
{
	var_482_int = 0; // 0xfda MovI
	return 0; // 0xfdb Return
}


func_4060()
{
	var_274_string = ""; // 0xfdc PushV
	var_274_string = "attack_stay"; // 0xfdd MovS
	func_4798(var_274_string); // 0xfde NEW_2
	return 0; // 0xfe0 Return
}


func_5087(var_214_bool, var_215_object)
{
	var_216_bool = 0; var_217_object = Obj(); // 0x13e0 PushV
	var_217_object = var_215_object; // 0x13e1 Mov
	func_5189(var_217_object); // 0x13e2 NEW_2
	if(var_216_bool == 0) goto Label_5095; // 0x13e4 JumpB
	var_214_bool = 1; // 0x13e5 MovB
	return 0; // 0x13e6 Return
	
Label_5095:
	var_214_bool = 0; // 0x13e7 MovB
	return 0; // 0x13e8 Return
}


func_4065()
{
	return 0; // 0xfe2 Return
}


func_4067(var_507_bool)
{
	var_507_bool = 1; // 0xfe3 MovB
	return 0; // 0xfe4 Return
}


func_4069(var_399_int)
{
	var_399_int = 1; // 0xfe5 MovI
	return 0; // 0xfe6 Return
}


func_4071(var_394_float)
{
	var_394_float = 0.5; // 0xfe7 MovF
	return 0; // 0xfe8 Return
}


func_5097(var_180_bool, var_181_object)
{
	var_182_bool = 0; var_183_object = Obj(); // 0x13ea PushV
	var_183_object = var_181_object; // 0x13eb Mov
	func_5196(var_183_object); // 0x13ec NEW_2
	if(var_182_bool == 0) goto Label_5105; // 0x13ee JumpB
	var_180_bool = 1; // 0x13ef MovB
	return 0; // 0x13f0 Return
	
Label_5105:
	var_180_bool = 0; // 0x13f1 MovB
	return 0; // 0x13f2 Return
}


func_4080(var_2_object, var_148_bool, var_149_object, var_150_float, var_151_float, var_152_bool, var_153_bool)
{
	var_157_bool = 0; var_158_bool = 0; var_159_bool = 0; var_160_bool = 0; // 0xff0 PushV
	var_161_object = Obj(); // 0xff1 PushV
	var_161_object = var_149_object; // 0xff2 Mov
	func_4946(var_161_object); // 0xff3 NEW_2
	var_162_int = 1; // 0xff5 PushI
	var_163_int = 5; // 0xff6 PushI
	SetTimer(var_162_int, var_163_int); // 0xff7 Func
	CanSee(var_159_bool, var_149_object); // 0xff9 Func
	var_164_bool = var_159_bool; // 0xffb Push
	if(var_164_bool == 0) goto Label_4099; // 0xffc JumpB
	var_2_object = 1; // 0xffd TMovB
	var_165_object = Obj(); // 0xffe PushV
	var_165_object = var_149_object; // 0xfff Mov
	func_4780(var_165_object); // 0x1000 NEW_2
	goto Label_4100; // 0x1002 Jump
	
Label_4100:
	var_172_bool = 0; var_173_object = Obj(); // 0x1004 PushV
	var_173_object = var_149_object; // 0x1005 Mov
	func_4365(var_172_bool, var_173_object); // 0x1006 NEW_2
	if(var_172_bool == 0) goto Label_4110; // 0x1008 JumpB
	var_176_object = Obj(); // 0x1009 PushV
	func_4839(var_176_object); // 0x100a NEW_2
	SendPlayerEnemy(var_149_object, var_176_object); // 0x100c Func
	
Label_4110:
	var_177_bool = 0; var_178_object = Obj(); var_179_float = 0; var_180_float = 0; var_181_bool = 0; var_182_bool = 0; // 0x100e PushV
	var_178_object = var_149_object; // 0x100f Mov
	var_179_float = var_150_float; // 0x1010 Mov
	var_180_float = var_151_float; // 0x1011 Mov
	var_181_bool = var_152_bool; // 0x1012 Mov
	var_182_bool = var_153_bool; // 0x1013 Mov
	func_4185(var_159_bool, var_160_bool, var_177_bool, var_178_object, var_179_float, var_180_float, var_181_bool, var_182_bool); // 0x1014 NEW_2
	var_160_bool = var_177_bool; // 0x1015 Mov
	var_228_object = var_2_object; // 0x1017 PushT
	if(var_228_object == 0) goto Label_4124; // 0x1018 JumpB
	var_229_string = "head"; // 0x1019 PushS
	UnlookAsync(var_229_string); // 0x101a Func
	
Label_4124:
	var_230_int = 1; // 0x101c PushI
	KillTimer(var_230_int); // 0x101d Func
	var_148_bool = var_160_bool; // 0x101f Mov
	return 4; // 0x1020 Return
	
Label_4099:
	var_2_object = 0; // 0x1003 TMovB
}


func_5107(var_186_bool, var_187_object)
{
	var_188_bool = 0; var_189_object = Obj(); // 0x13f4 PushV
	var_189_object = var_187_object; // 0x13f5 Mov
	func_5203(var_189_object); // 0x13f6 NEW_2
	if(var_188_bool == 0) goto Label_5115; // 0x13f8 JumpB
	var_186_bool = 1; // 0x13f9 MovB
	return 0; // 0x13fa Return
	
Label_5115:
	var_186_bool = 0; // 0x13fb MovB
	return 0; // 0x13fc Return
}


func_6133(var_506_bool)
{
	var_508_int = 0; var_509_bool = 0; var_510_int = 0; var_511_bool = 0; // 0x17f5 PushV
	GetItemID(var_510_int); // 0x17f6 ObjFunc
	var_512_string = "Weapon"; // 0x17f8 PushS
	HasInvItemProperty(var_511_bool, var_510_int, var_512_string); // 0x17f9 Func
	var_506_bool = var_511_bool; // 0x17fb Mov
	return 4; // 0x17fc Return
}


func_5626(var_21_bool, var_22_object, var_23_string)
{
	var_24_string = "unholster"; // 0x15fb PushS
	var_25_bool = var_23_string == var_24_string; // 0x15fc Eq
	if(var_25_bool == 0) goto Label_5637; // 0x15fd JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x15fe PushV
	var_27_object = var_22_object; // 0x15ff Mov
	func_5943(var_27_object); // 0x1600 NEW_2
	var_21_bool = var_26_bool; // 0x1601 Mov
	return 0; // 0x1603 Return
	
Label_5637:
	var_28_string = "player_shot"; // 0x1605 PushS
	var_29_bool = var_23_string == var_28_string; // 0x1606 Eq
	if(var_29_bool == 0) goto Label_5647; // 0x1607 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x1608 PushV
	var_31_object = var_22_object; // 0x1609 Mov
	func_5948(var_30_bool, var_31_object); // 0x160a NEW_2
	var_21_bool = var_30_bool; // 0x160b Mov
	return 0; // 0x160d Return
	
Label_5647:
	var_45_string = "battle"; // 0x160f PushS
	var_46_bool = var_23_string == var_45_string; // 0x1610 Eq
	if(var_46_bool == 0) goto Label_5656; // 0x1611 JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x1612 PushV
	var_48_object = var_22_object; // 0x1613 Mov
	func_5969(var_48_object); // 0x1614 NEW_2
	var_21_bool = var_47_bool; // 0x1615 Mov
	return 0; // 0x1617 Return
	
Label_5656:
	var_21_bool = 0; // 0x1618 MovB
	return 0; // 0x1619 Return
}


func_3067(var_1_object)
{
	var_18_int = 110; // 0xbfb PushI
	KillTimer(var_18_int); // 0xbfc Func
	var_1_object = 0; // 0xbfe TMovB
	var_19_object = var_0_object; // 0xbff PushT
	if(var_19_object == 0) goto Label_3077; // 0xc00 JumpB
	func_6219(); // 0xc02 NEW_2
	goto Label_3079; // 0xc04 Jump
	
Label_3079:
	return 0; // 0xc07 Return
	
Label_3077:
	Stop(); // 0xc05 Func
}


func_6141(var_41_object, var_44_object)
{
	var_42_int = 0; var_43_object = Obj(); // 0x17fe PushV
	var_43_object = var_41_object; // 0x17ff Mov
	TaskCall(0); // 0x1800 TaskCall
	func_0(var_44_object, var_42_int, var_43_object); // 0x1801 NEW_2
	TaskReturn(); // 0x1802 TaskReturn
	var_438_int = 100; // 0x1804 PushI
	var_439_bool = var_44_object == var_438_int; // 0x1805 Eq
	if(var_439_bool == 0) goto Label_6155; // 0x1806 JumpB
	var_440_object = Obj(); // 0x1807 PushV
	var_440_object = var_41_object; // 0x1808 Mov
	func_5986(); // 0x1809 NEW_2
	
Label_6155:
	return 0; // 0x180b Return
}


