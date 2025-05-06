task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 1; // 0x270 PushI
	if(var_19_int == 0) goto Label_2674; // 0x271 JumpB
	func_4844(); // 0x273 NEW_2
	var_21_int = 40087; // 0x275 PushI
	var_22_bool = var_18_bool == var_21_int; // 0x276 Eq
	if(var_22_bool == 0) goto Label_637; // 0x277 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0x278 PushV
	var_23_object = var_1_object; // 0x279 MovT
	var_24_object = var_0_object; // 0x27a MovT
	func_4983(); // 0x27b NEW_2
	
Label_637:
	var_26_int = 45510; // 0x27d PushI
	var_27_bool = var_18_bool == var_26_int; // 0x27e Eq
	if(var_27_bool == 0) goto Label_645; // 0x27f JumpB
	var_28_object = Obj(); var_29_object = Obj(); // 0x280 PushV
	var_28_object = var_1_object; // 0x281 MovT
	var_29_object = var_0_object; // 0x282 MovT
	func_4983(); // 0x283 NEW_2
	
Label_645:
	var_30_int = 45517; // 0x285 PushI
	var_31_bool = var_18_bool == var_30_int; // 0x286 Eq
	if(var_31_bool == 0) goto Label_653; // 0x287 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x288 PushV
	var_32_object = var_1_object; // 0x289 MovT
	var_33_object = var_0_object; // 0x28a MovT
	func_4983(); // 0x28b NEW_2
	
Label_653:
	var_34_int = 40085; // 0x28d PushI
	var_35_bool = var_18_bool == var_34_int; // 0x28e Eq
	if(var_35_bool == 0) goto Label_661; // 0x28f JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x290 PushV
	var_36_object = var_1_object; // 0x291 MovT
	var_37_object = var_0_object; // 0x292 MovT
	func_4983(); // 0x293 NEW_2
	
Label_661:
	var_38_int = 40086; // 0x295 PushI
	var_39_bool = var_18_bool == var_38_int; // 0x296 Eq
	if(var_39_bool == 0) goto Label_669; // 0x297 JumpB
	var_40_object = Obj(); var_41_object = Obj(); // 0x298 PushV
	var_40_object = var_1_object; // 0x299 MovT
	var_41_object = var_0_object; // 0x29a MovT
	func_4983(); // 0x29b NEW_2
	
Label_669:
	var_42_int = 45493; // 0x29d PushI
	var_43_bool = var_17_object == var_42_int; // 0x29e Eq
	if(var_43_bool == 0) goto Label_1161; // 0x29f JumpB
	var_44_bool = 0; var_45_object = Obj(); // 0x2a0 PushV
	var_45_object = var_1_object; // 0x2a1 MovT
	func_5012(var_45_object); // 0x2a2 NEW_2
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
	func_5044(var_72_bool, var_73_object); // 0x2b4 NEW_2
	var_83_bool = var_72_bool == 0; // 0x2b6 Not
	if(var_83_bool == 0) goto Label_703; // 0x2b7 JumpB
	var_84_bool = 0; var_85_object = Obj(); // 0x2b8 PushV
	var_85_object = var_1_object; // 0x2b9 MovT
	func_5054(var_84_bool, var_85_object); // 0x2ba NEW_2
	var_90_bool = var_84_bool == 0; // 0x2bc Not
	if(var_90_bool == 0) goto Label_703; // 0x2bd JumpB
	var_71_bool = 1; // 0x2be MovB
	
Label_703:
	if(var_71_bool == 0) goto Label_710; // 0x2bf JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0x2c0 PushV
	var_92_object = var_1_object; // 0x2c1 MovT
	func_5024(var_91_bool, var_92_object); // 0x2c2 NEW_2
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
	func_5114(var_103_bool, var_104_object); // 0x2d4 NEW_2
	if(var_103_bool == 0) goto Label_733; // 0x2d6 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x2d7 PushV
	var_110_object = var_1_object; // 0x2d8 MovT
	func_5124(var_109_bool, var_110_object); // 0x2d9 NEW_2
	if(var_109_bool == 0) goto Label_733; // 0x2db JumpB
	var_102_bool = 0; // 0x2dc MovB
	
Label_733:
	if(var_102_bool == 0) goto Label_740; // 0x2dd JumpB
	var_115_bool = 0; var_116_object = Obj(); // 0x2de PushV
	var_116_object = var_1_object; // 0x2df MovT
	func_5134(var_115_bool, var_116_object); // 0x2e0 NEW_2
	if(var_115_bool == 0) goto Label_740; // 0x2e2 JumpB
	var_101_bool = 0; // 0x2e3 MovB
	
Label_740:
	if(var_101_bool == 0) goto Label_747; // 0x2e4 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x2e5 PushV
	var_122_object = var_1_object; // 0x2e6 MovT
	func_5144(var_121_bool, var_122_object); // 0x2e7 NEW_2
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
	func_5094(var_131_bool, var_132_object); // 0x2f5 NEW_2
	if(var_131_bool == 0) goto Label_766; // 0x2f7 JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x2f8 PushV
	var_138_object = var_1_object; // 0x2f9 MovT
	func_5104(var_137_bool, var_138_object); // 0x2fa NEW_2
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
	func_5024(var_146_bool, var_147_object); // 0x306 NEW_2
	if(var_146_bool == 0) goto Label_782; // 0x308 JumpB
	var_148_int = 538210; // 0x309 PushI
	var_149_int = -1; // 0x30a PushI
	var_150_int = 40087; // 0x30b PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x30c TObjFunc
	
Label_782:
	var_151_bool = 0; var_152_object = Obj(); // 0x30e PushV
	var_152_object = var_1_object; // 0x30f MovT
	func_5024(var_151_bool, var_152_object); // 0x310 NEW_2
	if(var_151_bool == 0) goto Label_792; // 0x312 JumpB
	var_153_int = 543042; // 0x313 PushI
	var_154_int = -1; // 0x314 PushI
	var_155_int = 45494; // 0x315 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x316 TObjFunc
	
Label_792:
	var_156_bool = 0; var_157_object = Obj(); // 0x318 PushV
	var_157_object = var_1_object; // 0x319 MovT
	func_5024(var_156_bool, var_157_object); // 0x31a NEW_2
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
	func_5094(var_163_bool, var_164_object); // 0x328 NEW_2
	if(var_163_bool == 0) goto Label_817; // 0x32a JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x32b PushV
	var_166_object = var_1_object; // 0x32c MovT
	func_5104(var_165_bool, var_166_object); // 0x32d NEW_2
	if(var_165_bool == 0) goto Label_817; // 0x32f JumpB
	var_162_bool = 0; // 0x330 MovB
	
Label_817:
	if(var_162_bool == 0) goto Label_824; // 0x331 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x332 PushV
	var_168_object = var_1_object; // 0x333 MovT
	func_5114(var_167_bool, var_168_object); // 0x334 NEW_2
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
	func_5094(var_173_bool, var_174_object); // 0x342 NEW_2
	if(var_173_bool == 0) goto Label_843; // 0x344 JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0x345 PushV
	var_176_object = var_1_object; // 0x346 MovT
	func_5104(var_175_bool, var_176_object); // 0x347 NEW_2
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
	func_5124(var_182_bool, var_183_object); // 0x357 NEW_2
	if(var_182_bool == 0) goto Label_864; // 0x359 JumpB
	var_184_bool = 0; var_185_object = Obj(); // 0x35a PushV
	var_185_object = var_1_object; // 0x35b MovT
	func_5134(var_184_bool, var_185_object); // 0x35c NEW_2
	if(var_184_bool == 0) goto Label_864; // 0x35e JumpB
	var_181_bool = 0; // 0x35f MovB
	
Label_864:
	if(var_181_bool == 0) goto Label_871; // 0x360 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x361 PushV
	var_187_object = var_1_object; // 0x362 MovT
	func_5144(var_186_bool, var_187_object); // 0x363 NEW_2
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
	func_5114(var_194_bool, var_195_object); // 0x375 NEW_2
	if(var_194_bool == 0) goto Label_894; // 0x377 JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x378 PushV
	var_197_object = var_1_object; // 0x379 MovT
	func_5124(var_196_bool, var_197_object); // 0x37a NEW_2
	if(var_196_bool == 0) goto Label_894; // 0x37c JumpB
	var_193_bool = 0; // 0x37d MovB
	
Label_894:
	if(var_193_bool == 0) goto Label_901; // 0x37e JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x37f PushV
	var_199_object = var_1_object; // 0x380 MovT
	func_5134(var_198_bool, var_199_object); // 0x381 NEW_2
	if(var_198_bool == 0) goto Label_901; // 0x383 JumpB
	var_192_bool = 0; // 0x384 MovB
	
Label_901:
	if(var_192_bool == 0) goto Label_908; // 0x385 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x386 PushV
	var_201_object = var_1_object; // 0x387 MovT
	func_5144(var_200_bool, var_201_object); // 0x388 NEW_2
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
	func_4988(var_208_object); // 0x39e NEW_2
	if(var_207_bool == 0) goto Label_934; // 0x3a0 JumpB
	var_213_int = 538208; // 0x3a1 PushI
	var_214_int = -1; // 0x3a2 PushI
	var_215_int = 40085; // 0x3a3 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x3a4 TObjFunc
	
Label_934:
	var_216_bool = 0; var_217_object = Obj(); // 0x3a6 PushV
	var_217_object = var_1_object; // 0x3a7 MovT
	func_5000(var_217_object); // 0x3a8 NEW_2
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
	func_4988(var_227_object); // 0x3b4 NEW_2
	if(var_226_bool == 0) goto Label_957; // 0x3b6 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x3b7 PushV
	var_229_object = var_1_object; // 0x3b8 MovT
	func_5044(var_228_bool, var_229_object); // 0x3b9 NEW_2
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
	func_4988(var_235_object); // 0x3c7 NEW_2
	if(var_234_bool == 0) goto Label_976; // 0x3c9 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x3ca PushV
	var_237_object = var_1_object; // 0x3cb MovT
	func_5044(var_236_bool, var_237_object); // 0x3cc NEW_2
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
	func_4988(var_243_object); // 0x3da NEW_2
	if(var_242_bool == 0) goto Label_995; // 0x3dc JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x3dd PushV
	var_245_object = var_1_object; // 0x3de MovT
	func_5054(var_244_bool, var_245_object); // 0x3df NEW_2
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
	func_4988(var_251_object); // 0x3ed NEW_2
	if(var_250_bool == 0) goto Label_1014; // 0x3ef JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x3f0 PushV
	var_253_object = var_1_object; // 0x3f1 MovT
	func_5064(var_252_bool, var_253_object); // 0x3f2 NEW_2
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
	func_4988(var_263_object); // 0x400 NEW_2
	if(var_262_bool == 0) goto Label_1033; // 0x402 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x403 PushV
	var_265_object = var_1_object; // 0x404 MovT
	func_5074(var_264_bool, var_265_object); // 0x405 NEW_2
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
	func_5084(var_273_bool, var_274_object); // 0x411 NEW_2
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
	func_4988(var_284_object); // 0x41d NEW_2
	if(var_283_bool == 0) goto Label_1062; // 0x41f JumpB
	var_285_bool = 0; var_286_object = Obj(); // 0x420 PushV
	var_286_object = var_1_object; // 0x421 MovT
	func_5094(var_285_bool, var_286_object); // 0x422 NEW_2
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
	func_5104(var_290_bool, var_291_object); // 0x42e NEW_2
	if(var_290_bool == 0) goto Label_1078; // 0x430 JumpB
	var_292_int = 538322; // 0x431 PushI
	var_293_int = 40206; // 0x432 PushI
	var_294_int = 40205; // 0x433 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x434 TObjFunc
	
Label_1078:
	var_295_bool = 0; var_296_object = Obj(); // 0x436 PushV
	var_296_object = var_1_object; // 0x437 MovT
	func_5034(var_295_bool, var_296_object); // 0x438 NEW_2
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
	func_4988(var_304_object); // 0x444 NEW_2
	if(var_303_bool == 0) goto Label_1101; // 0x446 JumpB
	var_305_bool = 0; var_306_object = Obj(); // 0x447 PushV
	var_306_object = var_1_object; // 0x448 MovT
	func_5114(var_305_bool, var_306_object); // 0x449 NEW_2
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
	func_5124(var_310_bool, var_311_object); // 0x455 NEW_2
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
	func_4988(var_317_object); // 0x461 NEW_2
	if(var_316_bool == 0) goto Label_1130; // 0x463 JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0x464 PushV
	var_319_object = var_1_object; // 0x465 MovT
	func_5134(var_318_bool, var_319_object); // 0x466 NEW_2
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
	func_4988(var_325_object); // 0x474 NEW_2
	if(var_324_bool == 0) goto Label_1149; // 0x476 JumpB
	var_326_bool = 0; var_327_object = Obj(); // 0x477 PushV
	var_327_object = var_1_object; // 0x478 MovT
	func_5134(var_326_bool, var_327_object); // 0x479 NEW_2
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
	func_4988(var_658_object); // 0x782 NEW_2
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
	func_6205(var_979_bool); // 0xa68 NEW_2
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


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xa82 PushV
	var_20_int = 0; var_21_object = Obj(); // 0xa83 PushV
	var_21_object = var_17_bool; // 0xa84 Mov
	func_5997(var_21_object); // 0xa85 NEW_2
	var_19_int = var_20_int; // 0xa86 Mov
	var_22_int = 0; // 0xa88 PushI
	var_23_bool = var_19_int > var_22_int; // 0xa89 GT
	if(var_23_bool == 0) goto Label_2703; // 0xa8a JumpB
	var_24_object = Obj(); // 0xa8b PushV
	var_24_object = var_17_bool; // 0xa8c Mov
	func_6000(var_24_object); // 0xa8d NEW_2
	
Label_2703:
	return 2; // 0xa8f Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_6006(); // 0xa91 NEW_2
	return 0; // 0xa93 Return
}


task_2_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0; // 0xb0a Return
}


task_2_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	return 0; // 0xb0c Return
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	return 0; // 0xb0e Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xb27 PushV
	var_20_int = 0; var_21_object = Obj(); // 0xb28 PushV
	var_21_object = var_17_bool; // 0xb29 Mov
	func_5997(var_21_object); // 0xb2a NEW_2
	var_19_int = var_20_int; // 0xb2b Mov
	var_22_int = 0; // 0xb2d PushI
	var_23_bool = var_19_int > var_22_int; // 0xb2e GT
	if(var_23_bool == 0) goto Label_2874; // 0xb2f JumpB
	var_24_int = 1; // 0xb30 PushI
	var_25_bool = var_19_int > var_24_int; // 0xb31 GT
	if(var_25_bool == 0) goto Label_2870; // 0xb32 JumpB
	func_3042(var_19_int); // 0xb34 NEW_2
	
Label_2870:
	var_27_object = Obj(); // 0xb36 PushV
	var_27_object = var_17_bool; // 0xb37 Mov
	func_6000(var_27_object); // 0xb38 NEW_2
	
Label_2874:
	return 2; // 0xb3a Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xb3b PushV
	var_20_object = Obj(); // 0xb3c PushV
	var_20_object = var_17_bool; // 0xb3d Mov
	func_5729(var_20_object); // 0xb3e NEW_2
	var_29_int = 0; var_30_object = Obj(); // 0xb40 PushV
	var_30_object = var_17_bool; // 0xb41 Mov
	func_5811(var_29_int, var_30_object); // 0xb42 NEW_2
	var_19_int = var_29_int; // 0xb43 Mov
	var_65_int = 0; // 0xb45 PushI
	var_66_bool = var_19_int > var_65_int; // 0xb46 GT
	if(var_66_bool == 0) goto Label_2898; // 0xb47 JumpB
	var_67_int = 1; // 0xb48 PushI
	var_68_bool = var_19_int > var_67_int; // 0xb49 GT
	if(var_68_bool == 0) goto Label_2894; // 0xb4a JumpB
	func_3042(var_19_int); // 0xb4c NEW_2
	
Label_2894:
	var_70_object = Obj(); // 0xb4e PushV
	var_70_object = var_17_bool; // 0xb4f Mov
	func_5821(var_70_object); // 0xb50 NEW_2
	
Label_2898:
	return 2; // 0xb52 Return
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xb53 PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0; // 0xb54 PushV
	var_23_object = var_17_bool; // 0xb55 Mov
	var_24_object = var_18_object; // 0xb56 Mov
	var_25_bool = var_19_bool; // 0xb57 Mov
	func_6254(var_22_bool, var_23_object, var_24_object, var_25_bool); // 0xb58 NEW_2
	if(var_22_bool == 0) goto Label_2926; // 0xb5a JumpB
	var_84_int = 0; var_85_object = Obj(); var_86_bool = 0; // 0xb5b PushV
	var_85_object = var_17_bool; // 0xb5c Mov
	var_86_bool = var_19_bool; // 0xb5d Mov
	func_5904(var_85_object, var_86_bool); // 0xb5e NEW_2
	var_21_int = var_84_int; // 0xb5f Mov
	var_117_int = 0; // 0xb61 PushI
	var_118_bool = var_21_int > var_117_int; // 0xb62 GT
	if(var_118_bool == 0) goto Label_2926; // 0xb63 JumpB
	var_119_int = 1; // 0xb64 PushI
	var_120_bool = var_21_int > var_119_int; // 0xb65 GT
	if(var_120_bool == 0) goto Label_2922; // 0xb66 JumpB
	func_3042(var_21_int); // 0xb68 NEW_2
	
Label_2922:
	var_122_object = Obj(); // 0xb6a PushV
	var_122_object = var_17_bool; // 0xb6b Mov
	func_5911(var_122_object); // 0xb6c NEW_2
	
Label_2926:
	return 2; // 0xb6e Return
}


task_3_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xb6f PushV
	var_20_int = 0; var_21_object = Obj(); // 0xb70 PushV
	var_21_object = var_17_bool; // 0xb71 Mov
	func_5946(var_21_object); // 0xb72 NEW_2
	var_19_int = var_20_int; // 0xb73 Mov
	var_22_int = 0; // 0xb75 PushI
	var_23_bool = var_19_int > var_22_int; // 0xb76 GT
	if(var_23_bool == 0) goto Label_2946; // 0xb77 JumpB
	var_24_int = 1; // 0xb78 PushI
	var_25_bool = var_19_int > var_24_int; // 0xb79 GT
	if(var_25_bool == 0) goto Label_2942; // 0xb7a JumpB
	func_3042(var_19_int); // 0xb7c NEW_2
	
Label_2942:
	var_27_object = Obj(); // 0xb7e PushV
	var_27_object = var_17_bool; // 0xb7f Mov
	func_5949(); // 0xb80 NEW_2
	
Label_2946:
	return 2; // 0xb82 Return
}


task_3_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xb83 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0xb84 PushV
	var_22_object = var_17_object; // 0xb85 Mov
	var_23_string = var_18_bool; // 0xb86 Mov
	func_5643(var_21_bool, var_22_object, var_23_string); // 0xb87 NEW_2
	if(var_21_bool == 0) goto Label_2963; // 0xb89 JumpB
	func_3042(var_20_int); // 0xb8b NEW_2
	var_37_object = Obj(); var_38_string = ""; // 0xb8d PushV
	var_37_object = var_17_object; // 0xb8e Mov
	var_38_string = var_18_bool; // 0xb8f Mov
	func_5675(var_37_object, var_38_string); // 0xb90 NEW_2
	goto Label_2983; // 0xb92 Jump
	
Label_2983:
	return 2; // 0xba7 Return
	
Label_2963:
	var_48_int = 0; var_49_string = ""; var_50_object = Obj(); // 0xb93 PushV
	var_49_string = var_18_bool; // 0xb94 Mov
	var_50_object = var_17_object; // 0xb95 Mov
	func_5951(var_48_int, var_49_string, var_50_object); // 0xb96 NEW_2
	var_20_int = var_48_int; // 0xb97 Mov
	var_92_int = 0; // 0xb99 PushI
	var_93_bool = var_20_int > var_92_int; // 0xb9a GT
	if(var_93_bool == 0) goto Label_2983; // 0xb9b JumpB
	var_94_int = 1; // 0xb9c PushI
	var_95_bool = var_20_int > var_94_int; // 0xb9d GT
	if(var_95_bool == 0) goto Label_2978; // 0xb9e JumpB
	func_3042(var_20_int); // 0xba0 NEW_2
	
Label_2978:
	var_96_string = ""; var_97_object = Obj(); // 0xba2 PushV
	var_96_string = var_18_bool; // 0xba3 Mov
	var_97_object = var_17_object; // 0xba4 Mov
	func_5963(var_96_string, var_97_object); // 0xba5 NEW_2
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = ""; // 0xba9 PushV
	var_19_string = var_17_bool; // 0xbaa Mov
	func_5742(var_18_bool, var_19_string); // 0xbab NEW_2
	if(var_18_bool == 0) goto Label_2997; // 0xbad JumpB
	func_3042(var_17_bool); // 0xbaf NEW_2
	var_28_string = ""; // 0xbb1 PushV
	var_28_string = var_17_bool; // 0xbb2 Mov
	func_5758(var_28_string); // 0xbb3 NEW_2
	
Label_2997:
	return 0; // 0xbb5 Return
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); // 0xbb7 PushV
	var_19_object = var_17_bool; // 0xbb8 Mov
	func_5700(var_18_bool, var_19_object); // 0xbb9 NEW_2
	if(var_18_bool == 0) goto Label_3012; // 0xbbb JumpB
	func_3042(var_17_bool); // 0xbbd NEW_2
	var_31_object = Obj(); // 0xbbf PushV
	var_31_object = var_17_bool; // 0xbc0 Mov
	func_5723(var_31_object); // 0xbc1 NEW_2
	goto Label_3016; // 0xbc3 Jump
	
Label_3016:
	return 0; // 0xbc8 Return
	
Label_3012:
	var_33_object = Obj(); // 0xbc4 PushV
	var_33_object = var_17_bool; // 0xbc5 Mov
	func_3067(var_17_bool, var_33_object); // 0xbc6 NEW_2
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_object = Obj(); // 0xbca PushV
	var_18_object = var_17_bool; // 0xbcb Mov
	func_3067(var_17_bool, var_18_object); // 0xbcc NEW_2
	return 0; // 0xbce Return
}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 110; // 0xbd0 PushI
	var_19_bool = var_17_bool != var_18_int; // 0xbd1 Neq
	if(var_19_bool == 0) goto Label_3028; // 0xbd2 JumpB
	return 0; // 0xbd3 Return
	
Label_3028:
	var_2_object = 0; // 0xbd4 TMovB
	var_20_int = 110; // 0xbd5 PushI
	KillTimer(var_20_int); // 0xbd6 Func
	ResetAAS(); // 0xbd8 Func
	return 0; // 0xbda Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_3042(var_16_bool); // 0xbdc NEW_2
	func_6006(); // 0xbdf NEW_2
	return 0; // 0xbe1 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_3042(var_17_bool); // 0xbf4 NEW_2
	var_19_object = Obj(); // 0xbf6 PushV
	var_19_object = var_17_bool; // 0xbf7 Mov
	func_5619(); // 0xbf8 NEW_2
	return 0; // 0xbfa Return
}


task_3_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	RequestClearPath(var_17_bool); // 0xc64 Func
	return 0; // 0xc66 Return
}


task_3_event_28(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	Stop(); // 0xc67 Func
	return 0; // 0xc69 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xc80 PushV
	var_20_int = 0; var_21_object = Obj(); // 0xc81 PushV
	var_21_object = var_17_bool; // 0xc82 Mov
	func_5997(var_21_object); // 0xc83 NEW_2
	var_19_int = var_20_int; // 0xc84 Mov
	var_22_int = 0; // 0xc86 PushI
	var_23_bool = var_19_int > var_22_int; // 0xc87 GT
	if(var_23_bool == 0) goto Label_3219; // 0xc88 JumpB
	var_24_int = 1; // 0xc89 PushI
	var_25_bool = var_19_int > var_24_int; // 0xc8a GT
	if(var_25_bool == 0) goto Label_3215; // 0xc8b JumpB
	func_3445(); // 0xc8d NEW_2
	
Label_3215:
	var_26_object = Obj(); // 0xc8f PushV
	var_26_object = var_17_bool; // 0xc90 Mov
	func_6000(var_26_object); // 0xc91 NEW_2
	
Label_3219:
	return 2; // 0xc93 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xc94 PushV
	var_20_object = Obj(); // 0xc95 PushV
	var_20_object = var_17_bool; // 0xc96 Mov
	func_5729(var_20_object); // 0xc97 NEW_2
	var_29_int = 0; var_30_object = Obj(); // 0xc99 PushV
	var_30_object = var_17_bool; // 0xc9a Mov
	func_5811(var_29_int, var_30_object); // 0xc9b NEW_2
	var_19_int = var_29_int; // 0xc9c Mov
	var_65_int = 0; // 0xc9e PushI
	var_66_bool = var_19_int > var_65_int; // 0xc9f GT
	if(var_66_bool == 0) goto Label_3243; // 0xca0 JumpB
	var_67_int = 1; // 0xca1 PushI
	var_68_bool = var_19_int > var_67_int; // 0xca2 GT
	if(var_68_bool == 0) goto Label_3239; // 0xca3 JumpB
	func_3445(); // 0xca5 NEW_2
	
Label_3239:
	var_69_object = Obj(); // 0xca7 PushV
	var_69_object = var_17_bool; // 0xca8 Mov
	func_5821(var_69_object); // 0xca9 NEW_2
	
Label_3243:
	return 2; // 0xcab Return
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xcac PushV
	var_22_bool = 0; var_23_object = Obj(); var_24_object = Obj(); var_25_bool = 0; // 0xcad PushV
	var_23_object = var_17_bool; // 0xcae Mov
	var_24_object = var_18_object; // 0xcaf Mov
	var_25_bool = var_19_bool; // 0xcb0 Mov
	func_6254(var_22_bool, var_23_object, var_24_object, var_25_bool); // 0xcb1 NEW_2
	if(var_22_bool == 0) goto Label_3271; // 0xcb3 JumpB
	var_84_int = 0; var_85_object = Obj(); var_86_bool = 0; // 0xcb4 PushV
	var_85_object = var_17_bool; // 0xcb5 Mov
	var_86_bool = var_19_bool; // 0xcb6 Mov
	func_5904(var_85_object, var_86_bool); // 0xcb7 NEW_2
	var_21_int = var_84_int; // 0xcb8 Mov
	var_117_int = 0; // 0xcba PushI
	var_118_bool = var_21_int > var_117_int; // 0xcbb GT
	if(var_118_bool == 0) goto Label_3271; // 0xcbc JumpB
	var_119_int = 1; // 0xcbd PushI
	var_120_bool = var_21_int > var_119_int; // 0xcbe GT
	if(var_120_bool == 0) goto Label_3267; // 0xcbf JumpB
	func_3445(); // 0xcc1 NEW_2
	
Label_3267:
	var_121_object = Obj(); // 0xcc3 PushV
	var_121_object = var_17_bool; // 0xcc4 Mov
	func_5911(var_121_object); // 0xcc5 NEW_2
	
Label_3271:
	return 2; // 0xcc7 Return
}


task_4_event_40(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_int = 0; var_19_int = 0; // 0xcc8 PushV
	var_20_int = 0; var_21_object = Obj(); // 0xcc9 PushV
	var_21_object = var_17_bool; // 0xcca Mov
	func_5946(var_21_object); // 0xccb NEW_2
	var_19_int = var_20_int; // 0xccc Mov
	var_22_int = 0; // 0xcce PushI
	var_23_bool = var_19_int > var_22_int; // 0xccf GT
	if(var_23_bool == 0) goto Label_3291; // 0xcd0 JumpB
	var_24_int = 1; // 0xcd1 PushI
	var_25_bool = var_19_int > var_24_int; // 0xcd2 GT
	if(var_25_bool == 0) goto Label_3287; // 0xcd3 JumpB
	func_3445(); // 0xcd5 NEW_2
	
Label_3287:
	var_26_object = Obj(); // 0xcd7 PushV
	var_26_object = var_17_bool; // 0xcd8 Mov
	func_5949(); // 0xcd9 NEW_2
	
Label_3291:
	return 2; // 0xcdb Return
}


task_4_event_42(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_string, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_int = 0; var_20_int = 0; // 0xcdc PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_string = ""; // 0xcdd PushV
	var_22_object = var_17_object; // 0xcde Mov
	var_23_string = var_18_bool; // 0xcdf Mov
	func_5643(var_21_bool, var_22_object, var_23_string); // 0xce0 NEW_2
	if(var_21_bool == 0) goto Label_3308; // 0xce2 JumpB
	func_3445(); // 0xce4 NEW_2
	var_36_object = Obj(); var_37_string = ""; // 0xce6 PushV
	var_36_object = var_17_object; // 0xce7 Mov
	var_37_string = var_18_bool; // 0xce8 Mov
	func_5675(var_36_object, var_37_string); // 0xce9 NEW_2
	goto Label_3328; // 0xceb Jump
	
Label_3328:
	return 2; // 0xd00 Return
	
Label_3308:
	var_47_int = 0; var_48_string = ""; var_49_object = Obj(); // 0xcec PushV
	var_48_string = var_18_bool; // 0xced Mov
	var_49_object = var_17_object; // 0xcee Mov
	func_5951(var_47_int, var_48_string, var_49_object); // 0xcef NEW_2
	var_20_int = var_47_int; // 0xcf0 Mov
	var_91_int = 0; // 0xcf2 PushI
	var_92_bool = var_20_int > var_91_int; // 0xcf3 GT
	if(var_92_bool == 0) goto Label_3328; // 0xcf4 JumpB
	var_93_int = 1; // 0xcf5 PushI
	var_94_bool = var_20_int > var_93_int; // 0xcf6 GT
	if(var_94_bool == 0) goto Label_3323; // 0xcf7 JumpB
	func_3445(); // 0xcf9 NEW_2
	
Label_3323:
	var_95_string = ""; var_96_object = Obj(); // 0xcfb PushV
	var_95_string = var_18_bool; // 0xcfc Mov
	var_96_object = var_17_object; // 0xcfd Mov
	func_5963(var_95_string, var_96_object); // 0xcfe NEW_2
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_string, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_string = ""; // 0xd02 PushV
	var_19_string = var_17_bool; // 0xd03 Mov
	func_5742(var_18_bool, var_19_string); // 0xd04 NEW_2
	if(var_18_bool == 0) goto Label_3342; // 0xd06 JumpB
	func_3445(); // 0xd08 NEW_2
	var_27_string = ""; // 0xd0a PushV
	var_27_string = var_17_bool; // 0xd0b Mov
	func_5758(var_27_string); // 0xd0c NEW_2
	
Label_3342:
	return 0; // 0xd0e Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_3445(); // 0xd10 NEW_2
	func_6006(); // 0xd13 NEW_2
	return 0; // 0xd15 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj(); // 0xd17 PushV
	var_19_object = var_17_bool; // 0xd18 Mov
	func_5700(var_18_bool, var_19_object); // 0xd19 NEW_2
	if(var_18_bool == 0) goto Label_3363; // 0xd1b JumpB
	func_3445(); // 0xd1d NEW_2
	var_30_object = Obj(); // 0xd1f PushV
	var_30_object = var_17_bool; // 0xd20 Mov
	func_5723(var_30_object); // 0xd21 NEW_2
	
Label_3363:
	return 0; // 0xd23 Return
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	func_4196(var_16_bool); // 0x101f NEW_2
	func_6006(); // 0x1022 NEW_2
	return 0; // 0x1024 Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_int)
{
	var_18_int = 1; // 0x1057 PushI
	var_19_bool = var_17_int == var_18_int; // 0x1058 Eq
	if(var_19_bool == 0) goto Label_4191; // 0x1059 JumpB
	var_20_object = Obj(); // 0x105a PushV
	var_20_object = var_1_object; // 0x105b MovT
	func_4963(var_20_object); // 0x105c NEW_2
	goto Label_4195; // 0x105e Jump
	
Label_4195:
	return 0; // 0x1063 Return
	
Label_4191:
	var_25_int = 0; // 0x105f PushV
	var_25_int = var_17_int; // 0x1060 Mov
	func_4340(var_16_bool, var_17_int, var_25_int); // 0x1061 NEW_2
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0x1072 PushV
	var_18_bool = 0; // 0x1073 MovB
	var_19_bool = var_1_object == var_17_object; // 0x1074 Eq
	if(var_19_bool == 0) goto Label_4217; // 0x1075 JumpB
	var_20_bool = var_2_object == 0; // 0x1076 Not
	if(var_20_bool == 0) goto Label_4217; // 0x1077 JumpB
	var_18_bool = 1; // 0x1078 MovB
	
Label_4217:
	if(var_18_bool == 0) goto Label_4223; // 0x1079 JumpB
	var_2_object = 1; // 0x107a TMovB
	var_21_object = Obj(); // 0x107b PushV
	var_21_object = var_17_object; // 0x107c Mov
	func_4833(var_21_object); // 0x107d NEW_2
	
Label_4223:
	return 0; // 0x107f Return
}


task_6_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; // 0x1081 PushV
	var_18_bool = 0; // 0x1082 MovB
	var_19_bool = var_1_object == var_17_object; // 0x1083 Eq
	if(var_19_bool == 0) goto Label_4232; // 0x1084 JumpB
	var_20_object = var_2_object; // 0x1085 PushT
	if(var_20_object == 0) goto Label_4232; // 0x1086 JumpB
	var_18_bool = 1; // 0x1087 MovB
	
Label_4232:
	if(var_18_bool == 0) goto Label_4237; // 0x1088 JumpB
	var_2_object = 0; // 0x1089 TMovB
	var_21_string = "head"; // 0x108a PushS
	UnlookAsync(var_21_string); // 0x108b Func
	
Label_4237:
	return 0; // 0x108d Return
}


task_6_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	RequestClearPath(var_17_object); // 0x1107 Func
	return 0; // 0x1109 Return
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	func_4196(var_17_object); // 0x1113 NEW_2
	var_22_object = Obj(); // 0x1115 PushV
	var_22_object = var_17_object; // 0x1116 Mov
	func_5619(); // 0x1117 NEW_2
	return 0; // 0x1119 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	var_19_float = 0; var_20_float = 0; // 0x15e6 PushV
	var_21_string = "health"; // 0x15e7 PushS
	var_22_bool = var_18_string == var_21_string; // 0x15e8 Eq
	if(var_22_bool == 0) goto Label_5618; // 0x15e9 JumpB
	var_23_string = "health"; // 0x15ea PushS
	GetProperty(var_23_string, var_20_float); // 0x15eb Func
	var_24_int = 0; // 0x15ed PushI
	var_25_bool = var_20_float <= var_24_int; // 0x15ee LE
	if(var_25_bool == 0) goto Label_5618; // 0x15ef JumpB
	SignalDeath(var_17_object); // 0x15f0 Func
	
Label_5618:
	return 2; // 0x15f2 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_object = Obj(); // 0x15f4 PushV
	var_18_object = var_17_object; // 0x15f5 Mov
	func_5598(var_18_object); // 0x15f6 NEW_2
	return 0; // 0x15f8 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0; // 0x15fa PushV
	var_21_object = var_17_object; // 0x15fb Mov
	var_22_int = var_18_int; // 0x15fc Mov
	var_23_float = var_19_float; // 0x15fd Mov
	func_4617(var_21_object, var_22_int, var_23_float); // 0x15fe NEW_2
	return 0; // 0x1600 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x1602 PushV
	var_23_object = var_17_object; // 0x1603 Mov
	var_24_int = var_18_int; // 0x1604 Mov
	var_25_float = var_19_float; // 0x1605 Mov
	var_26_cvector = var_21_cvector; // 0x1606 Mov
	var_27_cvector = var_22_cvector; // 0x1607 Mov
	func_4685(var_25_float, var_26_cvector, var_27_cvector); // 0x1608 NEW_2
	return 0; // 0x160a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 1; // 0xb0f PushB
	SensePlayerOnly(var_17_bool); // 0xb10 Func
	func_6207(); // 0xb13 NEW_2
	func_2846(); // 0xb16 NEW_2
	
Label_2840:
	var_2_object = 0; // 0xb18 TMovB
	func_3107(var_15_object, var_16_bool); // 0xb1a NEW_2
	goto Label_2840; // 0xb1c Jump
}


func_0(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0; // 0x0 PushV
	var_0_object = var_53_object; // 0x1 TMov
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0; // 0x2 PushV
	var_64_object = var_53_object; // 0x3 Mov
	var_65_float = 70.0; // 0x4 MovF
	func_4715(var_64_object, var_65_float); // 0x5 NEW_2
	var_110_bool = var_63_bool == 0; // 0x7 Not
	if(var_110_bool == 0) goto Label_11; // 0x8 JumpB
	var_52_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_59_object); // 0xb Func
	var_111_int = 0; // 0xd PushV
	func_6199(var_111_int); // 0xe NEW_2
	SetNPCName(var_111_int); // 0x10 ObjFunc
	var_112_int = 0; // 0x12 PushV
	func_6197(var_112_int); // 0x13 NEW_2
	SetNPCDescription(var_112_int); // 0x15 ObjFunc
	var_113_string = ""; // 0x17 PushV
	func_6201(var_113_string); // 0x18 NEW_2
	SetPhoto(var_113_string); // 0x1a ObjFunc
	var_114_string = ""; // 0x1c PushV
	func_6203(var_114_string); // 0x1d NEW_2
	SetPhoto2(var_114_string); // 0x1f ObjFunc
	var_115_int = 0; // 0x21 PushV
	func_5241(var_115_int); // 0x22 NEW_2
	SetPlayerName(var_115_int); // 0x24 ObjFunc
	var_61_int = -1; // 0x26 MovI
	IsOverrideActive(var_60_bool); // 0x27 Func
	var_123_bool = var_60_bool; // 0x29 Push
	if(var_123_bool == 0) goto Label_45; // 0x2a JumpB
	var_52_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_59_object); // 0x2d Func
	var_124_object = Obj(); var_125_object = Obj(); // 0x2f PushV
	var_124_object = var_53_object; // 0x30 Mov
	var_125_object = var_59_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_126_object, var_127_object, var_128_string, var_129_bool, var_124_object, var_125_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_62_bool); // 0x36 ObjFunc
	
Label_56:
	var_439_bool = var_62_bool == 0; // 0x38 Not
	if(var_439_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_62_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_440_object = Obj(); // 0x3f PushV
	var_440_object = var_53_object; // 0x40 Mov
	func_4784(); // 0x41 NEW_2
	StopDialog(var_59_object); // 0x43 Func
	GetReturnValue(var_61_int); // 0x45 ObjFunc
	var_52_int = var_61_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_5124(var_196_bool, var_197_object)
{
	var_198_bool = 0; var_199_object = Obj(); // 0x1405 PushV
	var_199_object = var_197_object; // 0x1406 Mov
	func_5220(var_199_object); // 0x1407 NEW_2
	if(var_198_bool == 0) goto Label_5132; // 0x1409 JumpB
	var_196_bool = 1; // 0x140a MovB
	return 0; // 0x140b Return
	
Label_5132:
	var_196_bool = 0; // 0x140c MovB
	return 0; // 0x140d Return
}


func_4617(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0); // 0x1209 PushV
	var_42_bool = 0; // 0x120a PushV
	var_42_bool = 0; // 0x120b MovB
	var_43_bool = 0; // 0x120c PushV
	var_43_bool = 0; // 0x120d MovB
	var_44_object = var_21_object; // 0x120e Push
	if(var_44_object == 0) goto Label_4628; // 0x120f JumpB
	var_45_int = 4; // 0x1210 PushI
	var_46_bool = var_22_int != var_45_int; // 0x1211 Neq
	if(var_46_bool == 0) goto Label_4628; // 0x1212 JumpB
	var_43_bool = 1; // 0x1213 MovB
	
Label_4628:
	if(var_43_bool == 0) goto Label_4633; // 0x1214 JumpB
	var_47_int = 5; // 0x1215 PushI
	var_48_bool = var_22_int != var_47_int; // 0x1216 Neq
	if(var_48_bool == 0) goto Label_4633; // 0x1217 JumpB
	var_42_bool = 1; // 0x1218 MovB
	
Label_4633:
	if(var_42_bool == 0) goto Label_4680; // 0x1219 JumpB
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); // 0x121a PushV
	var_51_cvector = CVector(0,0,0); var_52_object = Obj(); // 0x121b PushV
	var_52_object = var_21_object; // 0x121c Mov
	func_4403(var_52_object); // 0x121d NEW_2
	var_50_cvector = var_51_cvector; // 0x121e Mov
	func_4898(var_49_cvector, var_50_cvector); // 0x1220 NEW_2
	var_33_cvector = var_49_cvector; // 0x1221 Mov
	CreateVectorVector(var_34_object); // 0x1223 Func
	var_35_int = 1; // 0x1225 MovI
	
Label_4646:
	var_62_string = "hit"; // 0x1226 PushS
	var_63_int = var_62_string + var_35_int; // 0x1227 Add
	GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector); // 0x1228 Func
	var_64_bool = var_36_bool == 0; // 0x122a Not
	if(var_64_bool == 0) goto Label_4653; // 0x122b JumpB
	goto Label_4662; // 0x122c Jump
	
Label_4662:
	size(var_39_int); // 0x1236 ObjFunc
	var_65_int = var_39_int; // 0x1238 Push
	if(var_65_int == 0) goto Label_4679; // 0x1239 JumpB
	irand(var_40_int, var_39_int); // 0x123a Func
	get(var_41_cvector, var_40_int); // 0x123c ObjFunc
	var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); // 0x123e PushV
	var_66_object = var_21_object; // 0x123f Mov
	var_67_int = var_22_int; // 0x1240 Mov
	var_68_float = var_23_float; // 0x1241 Mov
	var_69_cvector = var_41_cvector; // 0x1242 Mov
	var_70_cvector = -var_33_cvector; // 0x1243 Neg2
	func_4685(var_68_float, var_69_cvector, var_70_cvector); // 0x1244 NEW_2
	return 18; // 0x1246 Return
	
Label_4679:
	var_34_object = 0; // 0x1247 SetNull
	
Label_4680:
	var_111_object = Obj(); // 0x1248 PushV
	var_111_object = var_21_object; // 0x1249 Mov
	func_4573(var_111_object); // 0x124a NEW_2
	return 18; // 0x124c Return
	
Label_4653:
	var_112_int = var_38_cvector | var_33_cvector; // 0x122d Or
	var_113_float = 0.70711; // 0x122e PushF
	var_114_bool = var_112_int >= var_113_float; // 0x122f GE
	if(var_114_bool == 0) goto Label_4659; // 0x1230 JumpB
	add(var_37_cvector); // 0x1231 ObjFunc
	
Label_4659:
	var_115_int = 1; // 0x1233 PushI
	var_35_int = var_35_int + var_115_int; // 0x1234 Add2
	goto Label_4646; // 0x1235 Jump
}


func_4106(var_0_object)
{
	var_172_object = Obj(); // 0x100a PushV
	var_172_object = var_0_object; // 0x100b MovT
	func_4963(var_172_object); // 0x100c NEW_2
	return 0; // 0x100e Return
}


func_5643(var_21_bool, var_22_object, var_23_string)
{
	var_24_string = "unholster"; // 0x160c PushS
	var_25_bool = var_23_string == var_24_string; // 0x160d Eq
	if(var_25_bool == 0) goto Label_5654; // 0x160e JumpB
	var_26_bool = 0; var_27_object = Obj(); // 0x160f PushV
	var_27_object = var_22_object; // 0x1610 Mov
	func_6007(var_27_object); // 0x1611 NEW_2
	var_21_bool = var_26_bool; // 0x1612 Mov
	return 0; // 0x1614 Return
	
Label_5654:
	var_28_string = "player_shot"; // 0x1616 PushS
	var_29_bool = var_23_string == var_28_string; // 0x1617 Eq
	if(var_29_bool == 0) goto Label_5664; // 0x1618 JumpB
	var_30_bool = 0; var_31_object = Obj(); // 0x1619 PushV
	var_31_object = var_22_object; // 0x161a Mov
	func_6012(var_31_object); // 0x161b NEW_2
	var_21_bool = var_30_bool; // 0x161c Mov
	return 0; // 0x161e Return
	
Label_5664:
	var_32_string = "battle"; // 0x1620 PushS
	var_33_bool = var_23_string == var_32_string; // 0x1621 Eq
	if(var_33_bool == 0) goto Label_5673; // 0x1622 JumpB
	var_34_bool = 0; var_35_object = Obj(); // 0x1623 PushV
	var_35_object = var_22_object; // 0x1624 Mov
	func_6017(var_35_object); // 0x1625 NEW_2
	var_21_bool = var_34_bool; // 0x1626 Mov
	return 0; // 0x1628 Return
	
Label_5673:
	var_21_bool = 0; // 0x1629 MovB
	return 0; // 0x162a Return
}


func_5134(var_202_bool, var_203_object)
{
	var_204_bool = 0; var_205_object = Obj(); // 0x140f PushV
	var_205_object = var_203_object; // 0x1410 Mov
	func_5227(var_205_object); // 0x1411 NEW_2
	if(var_204_bool == 0) goto Label_5142; // 0x1413 JumpB
	var_202_bool = 1; // 0x1414 MovB
	return 0; // 0x1415 Return
	
Label_5142:
	var_202_bool = 0; // 0x1416 MovB
	return 0; // 0x1417 Return
}


func_4111(var_513_int)
{
	var_513_int = 0; // 0x100f MovI
	return 0; // 0x1010 Return
}


func_4113()
{
	var_305_string = ""; // 0x1011 PushV
	var_305_string = "attack_stay"; // 0x1012 MovS
	func_4851(var_305_string); // 0x1013 NEW_2
	return 0; // 0x1015 Return
}


func_4118()
{
	return 0; // 0x1017 Return
}


func_5144(var_208_bool, var_209_object)
{
	var_210_bool = 0; var_211_object = Obj(); // 0x1419 PushV
	var_211_object = var_209_object; // 0x141a Mov
	func_5234(var_211_object); // 0x141b NEW_2
	if(var_210_bool == 0) goto Label_5152; // 0x141d JumpB
	var_208_bool = 1; // 0x141e MovB
	return 0; // 0x141f Return
	
Label_5152:
	var_208_bool = 0; // 0x1420 MovB
	return 0; // 0x1421 Return
}


func_4120(var_538_bool)
{
	var_538_bool = 1; // 0x1018 MovB
	return 0; // 0x1019 Return
}


func_4122(var_430_int)
{
	var_430_int = 1; // 0x101a MovI
	return 0; // 0x101b Return
}


func_4124(var_425_float)
{
	var_425_float = 0.5; // 0x101c MovF
	return 0; // 0x101d Return
}


func_6174(var_516_bool)
{
	var_518_int = 0; var_519_bool = 0; var_520_int = 0; var_521_bool = 0; // 0x181e PushV
	GetItemID(var_520_int); // 0x181f ObjFunc
	var_522_string = "Weapon"; // 0x1821 PushS
	HasInvItemProperty(var_521_bool, var_520_int, var_522_string); // 0x1822 Func
	var_516_bool = var_521_bool; // 0x1824 Mov
	return 4; // 0x1825 Return
}


func_5154(var_180_bool)
{
	var_182_int = 0; // 0x1423 PushV
	func_4954(var_182_int); // 0x1424 NEW_2
	var_183_int = 6; // 0x1426 PushI
	var_180_bool = var_182_int <= var_183_int; // 0x1427 LE2
	return 0; // 0x1428 Return
}


func_3107(var_0_object, var_1_object)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; // 0xc23 PushV
	var_0_object = 0; // 0xc24 TMovB
	var_1_object = 0; // 0xc25 TMovB
	var_35_float = 0.5; // 0xc26 PushF
	rand(var_29_float, var_35_float); // 0xc27 Func
	Sleep(var_29_float); // 0xc29 Func
	
Label_3115:
	var_36_bool = var_0_object == 0; // 0xc2b Not
	if(var_36_bool == 0) goto Label_3165; // 0xc2c JumpB
	var_37_bool = var_1_object == 0; // 0xc2d Not
	if(var_37_bool == 0) goto Label_3134; // 0xc2e JumpB
	
Label_3119:
	GetPosition(var_31_cvector); // 0xc2f Func
	var_38_float = 0; // 0xc31 PushV
	func_3166(var_38_float); // 0xc32 NEW_2
	GetRandomPFPointInCircle(var_30_cvector, var_31_cvector, var_38_float, var_32_bool); // 0xc34 Func
	var_41_bool = var_32_bool; // 0xc36 Push
	if(var_41_bool == 0) goto Label_3129; // 0xc37 JumpB
	goto Label_3133; // 0xc38 Jump
	
Label_3133:
	goto Label_3135; // 0xc3d Jump
	
Label_3135:
	var_42_object = Obj(); var_43_cvector = CVector(0,0,0); // 0xc3f PushV
	var_43_cvector = var_30_cvector; // 0xc40 Mov
	func_3194(var_42_object, var_43_cvector); // 0xc41 NEW_2
	var_33_object = var_42_object; // 0xc42 Mov
	var_46_bool = var_33_object != 0; // 0xc44 NullNeq
	if(var_46_bool == 0) goto Label_3160; // 0xc45 JumpB
	RotatePath(var_33_object, var_34_bool); // 0xc46 Func
	var_47_bool = var_34_bool; // 0xc48 Push
	if(var_47_bool == 0) goto Label_3159; // 0xc49 JumpB
	var_48_bool = 0; // 0xc4a PushV
	func_3192(var_48_bool); // 0xc4b NEW_2
	FollowPath(var_33_object, var_48_bool, var_34_bool); // 0xc4d Func
	var_33_object = 0; // 0xc4f SetNull
	var_49_bool = var_34_bool; // 0xc50 Push
	if(var_49_bool == 0) goto Label_3159; // 0xc51 JumpB
	TaskCall(4); // 0xc53 TaskCall
	func_3364(); // 0xc54 NEW_2
	TaskReturn(); // 0xc55 TaskReturn
	
Label_3159:
	goto Label_3163; // 0xc57 Jump
	
Label_3163:
	var_33_object = 0; // 0xc5b SetNull
	goto Label_3115; // 0xc5c Jump
	
Label_3160:
	var_101_int = 1; // 0xc58 PushI
	Sleep(var_101_int); // 0xc59 Func
	
Label_3129:
	var_102_int = 1; // 0xc39 PushI
	Sleep(var_102_int); // 0xc3a Func
	goto Label_3119; // 0xc3c Jump
	
Label_3134:
	var_1_object = 0; // 0xc3e TMovB
	
Label_3165:
	return 12; // 0xc5d Return
}


func_4133(var_2_object, var_179_bool, var_180_object, var_181_float, var_182_float, var_183_bool, var_184_bool)
{
	var_188_bool = 0; var_189_bool = 0; var_190_bool = 0; var_191_bool = 0; // 0x1025 PushV
	var_192_object = Obj(); // 0x1026 PushV
	var_192_object = var_180_object; // 0x1027 Mov
	func_4963(var_192_object); // 0x1028 NEW_2
	var_193_int = 1; // 0x102a PushI
	var_194_int = 5; // 0x102b PushI
	SetTimer(var_193_int, var_194_int); // 0x102c Func
	CanSee(var_190_bool, var_180_object); // 0x102e Func
	var_195_bool = var_190_bool; // 0x1030 Push
	if(var_195_bool == 0) goto Label_4152; // 0x1031 JumpB
	var_2_object = 1; // 0x1032 TMovB
	var_196_object = Obj(); // 0x1033 PushV
	var_196_object = var_180_object; // 0x1034 Mov
	func_4833(var_196_object); // 0x1035 NEW_2
	goto Label_4153; // 0x1037 Jump
	
Label_4153:
	var_203_bool = 0; var_204_object = Obj(); // 0x1039 PushV
	var_204_object = var_180_object; // 0x103a Mov
	func_4418(var_203_bool, var_204_object); // 0x103b NEW_2
	if(var_203_bool == 0) goto Label_4163; // 0x103d JumpB
	var_207_object = Obj(); // 0x103e PushV
	func_4892(var_207_object); // 0x103f NEW_2
	SendPlayerEnemy(var_180_object, var_207_object); // 0x1041 Func
	
Label_4163:
	var_208_bool = 0; var_209_object = Obj(); var_210_float = 0; var_211_float = 0; var_212_bool = 0; var_213_bool = 0; // 0x1043 PushV
	var_209_object = var_180_object; // 0x1044 Mov
	var_210_float = var_181_float; // 0x1045 Mov
	var_211_float = var_182_float; // 0x1046 Mov
	var_212_bool = var_183_bool; // 0x1047 Mov
	var_213_bool = var_184_bool; // 0x1048 Mov
	func_4238(var_190_bool, var_191_bool, var_208_bool, var_209_object, var_210_float, var_211_float, var_212_bool, var_213_bool); // 0x1049 NEW_2
	var_191_bool = var_208_bool; // 0x104a Mov
	var_259_object = var_2_object; // 0x104c PushT
	if(var_259_object == 0) goto Label_4177; // 0x104d JumpB
	var_260_string = "head"; // 0x104e PushS
	UnlookAsync(var_260_string); // 0x104f Func
	
Label_4177:
	var_261_int = 1; // 0x1051 PushI
	KillTimer(var_261_int); // 0x1052 Func
	var_179_bool = var_191_bool; // 0x1054 Mov
	return 4; // 0x1055 Return
	
Label_4152:
	var_2_object = 0; // 0x1038 TMovB
}


func_6182(var_51_object, var_54_object)
{
	var_52_int = 0; var_53_object = Obj(); // 0x1827 PushV
	var_53_object = var_51_object; // 0x1828 Mov
	TaskCall(0); // 0x1829 TaskCall
	func_0(var_54_object, var_52_int, var_53_object); // 0x182a NEW_2
	TaskReturn(); // 0x182b TaskReturn
	var_448_int = 100; // 0x182d PushI
	var_449_bool = var_54_object == var_448_int; // 0x182e Eq
	if(var_449_bool == 0) goto Label_6196; // 0x182f JumpB
	var_450_object = Obj(); // 0x1830 PushV
	var_450_object = var_51_object; // 0x1831 Mov
	func_6027(); // 0x1832 NEW_2
	
Label_6196:
	return 0; // 0x1834 Return
}


func_5161(var_402_bool)
{
	var_402_bool = 0; // 0x142a MovB
	return 0; // 0x142b Return
}


func_5675(var_36_object, var_37_string)
{
	var_38_string = "unholster"; // 0x162c PushS
	var_39_bool = var_37_string == var_38_string; // 0x162d Eq
	if(var_39_bool == 0) goto Label_5684; // 0x162e JumpB
	var_40_object = Obj(); // 0x162f PushV
	var_40_object = var_36_object; // 0x1630 Mov
	func_6010(); // 0x1631 NEW_2
	goto Label_5699; // 0x1633 Jump
	
Label_5699:
	return 0; // 0x1643 Return
	
Label_5684:
	var_41_string = "player_shot"; // 0x1634 PushS
	var_42_bool = var_37_string == var_41_string; // 0x1635 Eq
	if(var_42_bool == 0) goto Label_5692; // 0x1636 JumpB
	var_43_object = Obj(); // 0x1637 PushV
	var_43_object = var_36_object; // 0x1638 Mov
	func_6015(); // 0x1639 NEW_2
	goto Label_5699; // 0x163b Jump
	
Label_5692:
	var_44_string = "battle"; // 0x163c PushS
	var_45_bool = var_37_string == var_44_string; // 0x163d Eq
	if(var_45_bool == 0) goto Label_5699; // 0x163e JumpB
	var_46_object = Obj(); // 0x163f PushV
	var_46_object = var_36_object; // 0x1640 Mov
	func_6020(); // 0x1641 NEW_2
}


func_5164(var_161_bool)
{
	var_163_int = 0; // 0x142d PushV
	func_4954(var_163_int); // 0x142e NEW_2
	var_169_int = 1; // 0x1430 PushI
	var_161_bool = var_163_int == var_169_int; // 0x1431 Eq2
	return 0; // 0x1432 Return
}


func_5171(var_173_bool)
{
	var_175_int = 0; // 0x1434 PushV
	func_4954(var_175_int); // 0x1435 NEW_2
	var_176_int = 2; // 0x1437 PushI
	var_173_bool = var_175_int == var_176_int; // 0x1438 Eq2
	return 0; // 0x1439 Return
}


func_6197(var_112_int)
{
	var_112_int = 515568; // 0x1835 MovI
	return 0; // 0x1836 Return
}


func_6199(var_111_int)
{
	var_111_int = 503353; // 0x1837 MovI
	return 0; // 0x1838 Return
}


func_6201(var_113_string)
{
	var_113_string = "ui/NPC_Citizen1.png"; // 0x1839 MovS
	return 0; // 0x183a Return
}


func_5178(var_359_bool)
{
	var_361_int = 0; // 0x143b PushV
	func_4954(var_361_int); // 0x143c NEW_2
	var_362_int = 3; // 0x143e PushI
	var_359_bool = var_361_int == var_362_int; // 0x143f Eq2
	return 0; // 0x1440 Return
}


func_6203(var_114_string)
{
	var_114_string = "ui/NPC_Citizen1_b.png"; // 0x183b MovS
	return 0; // 0x183c Return
}


func_6205(var_106_bool)
{
	var_106_bool = 0; // 0x183d MovB
	return 0; // 0x183e Return
}


func_6207()
{
	var_18_bool = GlobalVars[0]; // 0x183f PushGE
	var_18_bool = 0; // 0x1840 MovB
	GlobalVars[0] = var_18_bool; // 0x1841 PopGE
	return 0; // 0x1842 Return
}


func_5185(var_371_bool)
{
	var_373_int = 0; // 0x1442 PushV
	func_4954(var_373_int); // 0x1443 NEW_2
	var_374_int = 5; // 0x1445 PushI
	var_371_bool = var_373_int == var_374_int; // 0x1446 Eq2
	return 0; // 0x1447 Return
}


func_6211(var_27_object)
{
	var_28_bool = 0; var_29_bool = 0; // 0x1843 PushV
	var_30_bool = GlobalVars[0]; // 0x1844 PushGE
	if(var_30_bool == 0) goto Label_6224; // 0x1845 JumpB
	IsOverrideActive(var_29_bool); // 0x1846 Func
	var_31_bool = var_29_bool == 0; // 0x1848 Not
	if(var_31_bool == 0) goto Label_6222; // 0x1849 JumpB
	var_32_object = Obj(); // 0x184a PushV
	var_32_object = var_27_object; // 0x184b Mov
	func_5333(var_32_object); // 0x184c NEW_2
	
Label_6222:
	return 2; // 0x184e Return
	
Label_6224:
	var_39_bool = 0; var_40_object = Obj(); // 0x1850 PushV
	var_40_object = var_27_object; // 0x1851 Mov
	func_6235(var_39_bool, var_40_object); // 0x1852 NEW_2
	var_50_bool = var_39_bool == 0; // 0x1854 Not
	if(var_50_bool == 0) goto Label_6234; // 0x1855 JumpB
	var_51_object = Obj(); // 0x1856 PushV
	var_51_object = var_27_object; // 0x1857 Mov
	func_6182(var_29_bool, var_51_object); // 0x1858 NEW_2
	
Label_6234:
	return 2; // 0x185a Return
}


func_5700(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x1644 PushV
	var_22_bool = 0; // 0x1645 PushV
	var_22_bool = 0; // 0x1646 MovB
	var_23_bool = 0; var_24_object = Obj(); // 0x1647 PushV
	var_24_object = var_19_object; // 0x1648 Mov
	func_6007(var_24_object); // 0x1649 NEW_2
	if(var_23_bool == 0) goto Label_5714; // 0x164b JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0x164c PushV
	var_26_object = var_19_object; // 0x164d Mov
	func_4418(var_25_bool, var_26_object); // 0x164e NEW_2
	if(var_25_bool == 0) goto Label_5714; // 0x1650 JumpB
	var_22_bool = 1; // 0x1651 MovB
	
Label_5714:
	if(var_22_bool == 0) goto Label_5721; // 0x1652 JumpB
	IsWeaponHolstered(var_21_bool); // 0x1653 ObjFunc
	var_29_bool = var_21_bool == 0; // 0x1655 Not
	if(var_29_bool == 0) goto Label_5721; // 0x1656 JumpB
	var_18_bool = 1; // 0x1657 MovB
	return 2; // 0x1658 Return
	
Label_5721:
	var_18_bool = 0; // 0x1659 MovB
	return 2; // 0x165a Return
}


func_5192(var_380_bool)
{
	var_382_int = 0; // 0x1449 PushV
	func_4954(var_382_int); // 0x144a NEW_2
	var_383_int = 6; // 0x144c PushI
	var_380_bool = var_382_int == var_383_int; // 0x144d Eq2
	return 0; // 0x144e Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_124_object, var_125_object)
{
	var_0_object = var_125_object; // 0x4b TMov
	var_1_object = var_124_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_130_int = 1; // 0x4e PushI
	if(var_130_int == 0) goto Label_571; // 0x4f JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x50 PushV
	var_132_object = var_1_object; // 0x51 MovT
	func_5012(var_132_object); // 0x52 NEW_2
	if(var_131_bool == 0) goto Label_323; // 0x54 JumpB
	var_139_string = ""; // 0x55 PushV
	var_139_string = "Neutral"; // 0x56 MovS
	func_601(var_125_object, var_139_string); // 0x57 NEW_2
	var_156_int = 543041; // 0x59 PushI
	SetMessage(var_156_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_157_bool = 0; // 0x5e PushV
	var_157_bool = 0; // 0x5f MovB
	var_158_bool = 0; // 0x60 PushV
	var_158_bool = 0; // 0x61 MovB
	var_159_bool = 0; var_160_object = Obj(); // 0x62 PushV
	var_160_object = var_1_object; // 0x63 MovT
	func_5044(var_159_bool, var_160_object); // 0x64 NEW_2
	var_170_bool = var_159_bool == 0; // 0x66 Not
	if(var_170_bool == 0) goto Label_111; // 0x67 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x68 PushV
	var_172_object = var_1_object; // 0x69 MovT
	func_5054(var_171_bool, var_172_object); // 0x6a NEW_2
	var_177_bool = var_171_bool == 0; // 0x6c Not
	if(var_177_bool == 0) goto Label_111; // 0x6d JumpB
	var_158_bool = 1; // 0x6e MovB
	
Label_111:
	if(var_158_bool == 0) goto Label_118; // 0x6f JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x70 PushV
	var_179_object = var_1_object; // 0x71 MovT
	func_5024(var_178_bool, var_179_object); // 0x72 NEW_2
	if(var_178_bool == 0) goto Label_118; // 0x74 JumpB
	var_157_bool = 1; // 0x75 MovB
	
Label_118:
	if(var_157_bool == 0) goto Label_124; // 0x76 JumpB
	var_184_int = 543044; // 0x77 PushI
	var_185_int = 45498; // 0x78 PushI
	var_186_int = 45496; // 0x79 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x7a TObjFunc
	
Label_124:
	var_187_bool = 0; // 0x7c PushV
	var_187_bool = 1; // 0x7d MovB
	var_188_bool = 0; // 0x7e PushV
	var_188_bool = 1; // 0x7f MovB
	var_189_bool = 0; // 0x80 PushV
	var_189_bool = 1; // 0x81 MovB
	var_190_bool = 0; var_191_object = Obj(); // 0x82 PushV
	var_191_object = var_1_object; // 0x83 MovT
	func_5114(var_190_bool, var_191_object); // 0x84 NEW_2
	if(var_190_bool == 0) goto Label_141; // 0x86 JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x87 PushV
	var_197_object = var_1_object; // 0x88 MovT
	func_5124(var_196_bool, var_197_object); // 0x89 NEW_2
	if(var_196_bool == 0) goto Label_141; // 0x8b JumpB
	var_189_bool = 0; // 0x8c MovB
	
Label_141:
	if(var_189_bool == 0) goto Label_148; // 0x8d JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0x8e PushV
	var_203_object = var_1_object; // 0x8f MovT
	func_5134(var_202_bool, var_203_object); // 0x90 NEW_2
	if(var_202_bool == 0) goto Label_148; // 0x92 JumpB
	var_188_bool = 0; // 0x93 MovB
	
Label_148:
	if(var_188_bool == 0) goto Label_155; // 0x94 JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x95 PushV
	var_209_object = var_1_object; // 0x96 MovT
	func_5144(var_208_bool, var_209_object); // 0x97 NEW_2
	if(var_208_bool == 0) goto Label_155; // 0x99 JumpB
	var_187_bool = 0; // 0x9a MovB
	
Label_155:
	if(var_187_bool == 0) goto Label_161; // 0x9b JumpB
	var_214_int = 543057; // 0x9c PushI
	var_215_int = 45513; // 0x9d PushI
	var_216_int = 45512; // 0x9e PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x9f TObjFunc
	
Label_161:
	var_217_bool = 0; // 0xa1 PushV
	var_217_bool = 1; // 0xa2 MovB
	var_218_bool = 0; var_219_object = Obj(); // 0xa3 PushV
	var_219_object = var_1_object; // 0xa4 MovT
	func_5094(var_218_bool, var_219_object); // 0xa5 NEW_2
	if(var_218_bool == 0) goto Label_174; // 0xa7 JumpB
	var_224_bool = 0; var_225_object = Obj(); // 0xa8 PushV
	var_225_object = var_1_object; // 0xa9 MovT
	func_5104(var_224_bool, var_225_object); // 0xaa NEW_2
	if(var_224_bool == 0) goto Label_174; // 0xac JumpB
	var_217_bool = 0; // 0xad MovB
	
Label_174:
	if(var_217_bool == 0) goto Label_180; // 0xae JumpB
	var_230_int = 543063; // 0xaf PushI
	var_231_int = 45520; // 0xb0 PushI
	var_232_int = 45518; // 0xb1 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0xb2 TObjFunc
	
Label_180:
	var_233_bool = 0; var_234_object = Obj(); // 0xb4 PushV
	var_234_object = var_1_object; // 0xb5 MovT
	func_5024(var_233_bool, var_234_object); // 0xb6 NEW_2
	if(var_233_bool == 0) goto Label_190; // 0xb8 JumpB
	var_235_int = 538210; // 0xb9 PushI
	var_236_int = -1; // 0xba PushI
	var_237_int = 40087; // 0xbb PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0xbc TObjFunc
	
Label_190:
	var_238_bool = 0; var_239_object = Obj(); // 0xbe PushV
	var_239_object = var_1_object; // 0xbf MovT
	func_5024(var_238_bool, var_239_object); // 0xc0 NEW_2
	if(var_238_bool == 0) goto Label_200; // 0xc2 JumpB
	var_240_int = 543042; // 0xc3 PushI
	var_241_int = -1; // 0xc4 PushI
	var_242_int = 45494; // 0xc5 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0xc6 TObjFunc
	
Label_200:
	var_243_bool = 0; var_244_object = Obj(); // 0xc8 PushV
	var_244_object = var_1_object; // 0xc9 MovT
	func_5024(var_243_bool, var_244_object); // 0xca NEW_2
	if(var_243_bool == 0) goto Label_210; // 0xcc JumpB
	var_245_int = 543043; // 0xcd PushI
	var_246_int = -1; // 0xce PushI
	var_247_int = 45495; // 0xcf PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xd0 TObjFunc
	
Label_210:
	var_248_bool = 0; // 0xd2 PushV
	var_248_bool = 1; // 0xd3 MovB
	var_249_bool = 0; // 0xd4 PushV
	var_249_bool = 1; // 0xd5 MovB
	var_250_bool = 0; var_251_object = Obj(); // 0xd6 PushV
	var_251_object = var_1_object; // 0xd7 MovT
	func_5094(var_250_bool, var_251_object); // 0xd8 NEW_2
	if(var_250_bool == 0) goto Label_225; // 0xda JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0xdb PushV
	var_253_object = var_1_object; // 0xdc MovT
	func_5104(var_252_bool, var_253_object); // 0xdd NEW_2
	if(var_252_bool == 0) goto Label_225; // 0xdf JumpB
	var_249_bool = 0; // 0xe0 MovB
	
Label_225:
	if(var_249_bool == 0) goto Label_232; // 0xe1 JumpB
	var_254_bool = 0; var_255_object = Obj(); // 0xe2 PushV
	var_255_object = var_1_object; // 0xe3 MovT
	func_5114(var_254_bool, var_255_object); // 0xe4 NEW_2
	if(var_254_bool == 0) goto Label_232; // 0xe6 JumpB
	var_248_bool = 0; // 0xe7 MovB
	
Label_232:
	if(var_248_bool == 0) goto Label_238; // 0xe8 JumpB
	var_256_int = 543055; // 0xe9 PushI
	var_257_int = -1; // 0xea PushI
	var_258_int = 45510; // 0xeb PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0xec TObjFunc
	
Label_238:
	var_259_bool = 0; // 0xee PushV
	var_259_bool = 1; // 0xef MovB
	var_260_bool = 0; var_261_object = Obj(); // 0xf0 PushV
	var_261_object = var_1_object; // 0xf1 MovT
	func_5094(var_260_bool, var_261_object); // 0xf2 NEW_2
	if(var_260_bool == 0) goto Label_251; // 0xf4 JumpB
	var_262_bool = 0; var_263_object = Obj(); // 0xf5 PushV
	var_263_object = var_1_object; // 0xf6 MovT
	func_5104(var_262_bool, var_263_object); // 0xf7 NEW_2
	if(var_262_bool == 0) goto Label_251; // 0xf9 JumpB
	var_259_bool = 0; // 0xfa MovB
	
Label_251:
	if(var_259_bool == 0) goto Label_257; // 0xfb JumpB
	var_264_int = 543056; // 0xfc PushI
	var_265_int = -1; // 0xfd PushI
	var_266_int = 45511; // 0xfe PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0xff TObjFunc
	
Label_257:
	var_267_bool = 0; // 0x101 PushV
	var_267_bool = 1; // 0x102 MovB
	var_268_bool = 0; // 0x103 PushV
	var_268_bool = 1; // 0x104 MovB
	var_269_bool = 0; var_270_object = Obj(); // 0x105 PushV
	var_270_object = var_1_object; // 0x106 MovT
	func_5124(var_269_bool, var_270_object); // 0x107 NEW_2
	if(var_269_bool == 0) goto Label_272; // 0x109 JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0x10a PushV
	var_272_object = var_1_object; // 0x10b MovT
	func_5134(var_271_bool, var_272_object); // 0x10c NEW_2
	if(var_271_bool == 0) goto Label_272; // 0x10e JumpB
	var_268_bool = 0; // 0x10f MovB
	
Label_272:
	if(var_268_bool == 0) goto Label_279; // 0x110 JumpB
	var_273_bool = 0; var_274_object = Obj(); // 0x111 PushV
	var_274_object = var_1_object; // 0x112 MovT
	func_5144(var_273_bool, var_274_object); // 0x113 NEW_2
	if(var_273_bool == 0) goto Label_279; // 0x115 JumpB
	var_267_bool = 0; // 0x116 MovB
	
Label_279:
	if(var_267_bool == 0) goto Label_285; // 0x117 JumpB
	var_275_int = 543062; // 0x118 PushI
	var_276_int = -1; // 0x119 PushI
	var_277_int = 45517; // 0x11a PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x11b TObjFunc
	
Label_285:
	var_278_bool = 0; // 0x11d PushV
	var_278_bool = 1; // 0x11e MovB
	var_279_bool = 0; // 0x11f PushV
	var_279_bool = 1; // 0x120 MovB
	var_280_bool = 0; // 0x121 PushV
	var_280_bool = 1; // 0x122 MovB
	var_281_bool = 0; var_282_object = Obj(); // 0x123 PushV
	var_282_object = var_1_object; // 0x124 MovT
	func_5114(var_281_bool, var_282_object); // 0x125 NEW_2
	if(var_281_bool == 0) goto Label_302; // 0x127 JumpB
	var_283_bool = 0; var_284_object = Obj(); // 0x128 PushV
	var_284_object = var_1_object; // 0x129 MovT
	func_5124(var_283_bool, var_284_object); // 0x12a NEW_2
	if(var_283_bool == 0) goto Label_302; // 0x12c JumpB
	var_280_bool = 0; // 0x12d MovB
	
Label_302:
	if(var_280_bool == 0) goto Label_309; // 0x12e JumpB
	var_285_bool = 0; var_286_object = Obj(); // 0x12f PushV
	var_286_object = var_1_object; // 0x130 MovT
	func_5134(var_285_bool, var_286_object); // 0x131 NEW_2
	if(var_285_bool == 0) goto Label_309; // 0x133 JumpB
	var_279_bool = 0; // 0x134 MovB
	
Label_309:
	if(var_279_bool == 0) goto Label_316; // 0x135 JumpB
	var_287_bool = 0; var_288_object = Obj(); // 0x136 PushV
	var_288_object = var_1_object; // 0x137 MovT
	func_5144(var_287_bool, var_288_object); // 0x138 NEW_2
	if(var_287_bool == 0) goto Label_316; // 0x13a JumpB
	var_278_bool = 0; // 0x13b MovB
	
Label_316:
	if(var_278_bool == 0) goto Label_322; // 0x13c JumpB
	var_289_int = 543064; // 0x13d PushI
	var_290_int = -1; // 0x13e PushI
	var_291_int = 45519; // 0x13f PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x140 TObjFunc
	
Label_322:
	goto Label_571; // 0x142 Jump
	
Label_571:
	var_292_bool = 0; // 0x23b PushV
	func_6205(var_292_bool); // 0x23c NEW_2
	if(var_292_bool == 0) goto Label_586; // 0x23e JumpB
	
Label_575:
	lshWaitForAnimEnd(); // 0x23f Func
	var_293_string = var_3_string; // 0x241 PushT
	if(var_293_string == 0) goto Label_580; // 0x242 JumpB
	goto Label_585; // 0x243 Jump
	
Label_585:
	goto Label_600; // 0x249 Jump
	
Label_600:
	return 0; // 0x258 Return
	
Label_580:
	var_294_string = ""; // 0x244 PushV
	var_294_string = var_2_object; // 0x245 MovT
	func_4802(var_294_string); // 0x246 NEW_2
	goto Label_575; // 0x248 Jump
	
Label_586:
	var_305_string = "all"; // 0x24a PushS
	var_306_string = "idle"; // 0x24b PushS
	PlayAnimation(var_305_string, var_306_string); // 0x24c Func
	
Label_590:
	WaitForAnimEnd(); // 0x24e Func
	var_307_string = var_3_string; // 0x250 PushT
	if(var_307_string == 0) goto Label_595; // 0x251 JumpB
	goto Label_600; // 0x252 Jump
	
Label_595:
	var_308_string = "all"; // 0x253 PushS
	var_309_string = "idle"; // 0x254 PushS
	PlayAnimation(var_308_string, var_309_string); // 0x255 Func
	goto Label_590; // 0x257 Jump
	
Label_323:
	var_310_string = ""; // 0x143 PushV
	var_310_string = "Neutral"; // 0x144 MovS
	func_601(var_125_object, var_310_string); // 0x145 NEW_2
	var_311_int = 538207; // 0x147 PushI
	SetMessage(var_311_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_312_bool = 0; var_313_object = Obj(); // 0x14c PushV
	var_313_object = var_1_object; // 0x14d MovT
	func_4988(var_313_object); // 0x14e NEW_2
	if(var_312_bool == 0) goto Label_342; // 0x150 JumpB
	var_318_int = 538208; // 0x151 PushI
	var_319_int = -1; // 0x152 PushI
	var_320_int = 40085; // 0x153 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x154 TObjFunc
	
Label_342:
	var_321_bool = 0; var_322_object = Obj(); // 0x156 PushV
	var_322_object = var_1_object; // 0x157 MovT
	func_5000(var_322_object); // 0x158 NEW_2
	if(var_321_bool == 0) goto Label_352; // 0x15a JumpB
	var_327_int = 538209; // 0x15b PushI
	var_328_int = -1; // 0x15c PushI
	var_329_int = 40086; // 0x15d PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x15e TObjFunc
	
Label_352:
	var_330_bool = 0; // 0x160 PushV
	var_330_bool = 0; // 0x161 MovB
	var_331_bool = 0; var_332_object = Obj(); // 0x162 PushV
	var_332_object = var_1_object; // 0x163 MovT
	func_4988(var_332_object); // 0x164 NEW_2
	if(var_331_bool == 0) goto Label_365; // 0x166 JumpB
	var_333_bool = 0; var_334_object = Obj(); // 0x167 PushV
	var_334_object = var_1_object; // 0x168 MovT
	func_5044(var_333_bool, var_334_object); // 0x169 NEW_2
	if(var_333_bool == 0) goto Label_365; // 0x16b JumpB
	var_330_bool = 1; // 0x16c MovB
	
Label_365:
	if(var_330_bool == 0) goto Label_371; // 0x16d JumpB
	var_335_int = 538211; // 0x16e PushI
	var_336_int = 40089; // 0x16f PushI
	var_337_int = 40088; // 0x170 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x171 TObjFunc
	
Label_371:
	var_338_bool = 0; // 0x173 PushV
	var_338_bool = 0; // 0x174 MovB
	var_339_bool = 0; var_340_object = Obj(); // 0x175 PushV
	var_340_object = var_1_object; // 0x176 MovT
	func_4988(var_340_object); // 0x177 NEW_2
	if(var_339_bool == 0) goto Label_384; // 0x179 JumpB
	var_341_bool = 0; var_342_object = Obj(); // 0x17a PushV
	var_342_object = var_1_object; // 0x17b MovT
	func_5044(var_341_bool, var_342_object); // 0x17c NEW_2
	if(var_341_bool == 0) goto Label_384; // 0x17e JumpB
	var_338_bool = 1; // 0x17f MovB
	
Label_384:
	if(var_338_bool == 0) goto Label_390; // 0x180 JumpB
	var_343_int = 538222; // 0x181 PushI
	var_344_int = 40100; // 0x182 PushI
	var_345_int = 40099; // 0x183 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x184 TObjFunc
	
Label_390:
	var_346_bool = 0; // 0x186 PushV
	var_346_bool = 0; // 0x187 MovB
	var_347_bool = 0; var_348_object = Obj(); // 0x188 PushV
	var_348_object = var_1_object; // 0x189 MovT
	func_4988(var_348_object); // 0x18a NEW_2
	if(var_347_bool == 0) goto Label_403; // 0x18c JumpB
	var_349_bool = 0; var_350_object = Obj(); // 0x18d PushV
	var_350_object = var_1_object; // 0x18e MovT
	func_5054(var_349_bool, var_350_object); // 0x18f NEW_2
	if(var_349_bool == 0) goto Label_403; // 0x191 JumpB
	var_346_bool = 1; // 0x192 MovB
	
Label_403:
	if(var_346_bool == 0) goto Label_409; // 0x193 JumpB
	var_351_int = 538235; // 0x194 PushI
	var_352_int = 40114; // 0x195 PushI
	var_353_int = 40113; // 0x196 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x197 TObjFunc
	
Label_409:
	var_354_bool = 0; // 0x199 PushV
	var_354_bool = 0; // 0x19a MovB
	var_355_bool = 0; var_356_object = Obj(); // 0x19b PushV
	var_356_object = var_1_object; // 0x19c MovT
	func_4988(var_356_object); // 0x19d NEW_2
	if(var_355_bool == 0) goto Label_422; // 0x19f JumpB
	var_357_bool = 0; var_358_object = Obj(); // 0x1a0 PushV
	var_358_object = var_1_object; // 0x1a1 MovT
	func_5064(var_357_bool, var_358_object); // 0x1a2 NEW_2
	if(var_357_bool == 0) goto Label_422; // 0x1a4 JumpB
	var_354_bool = 1; // 0x1a5 MovB
	
Label_422:
	if(var_354_bool == 0) goto Label_428; // 0x1a6 JumpB
	var_363_int = 538253; // 0x1a7 PushI
	var_364_int = 40135; // 0x1a8 PushI
	var_365_int = 40134; // 0x1a9 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x1aa TObjFunc
	
Label_428:
	var_366_bool = 0; // 0x1ac PushV
	var_366_bool = 0; // 0x1ad MovB
	var_367_bool = 0; var_368_object = Obj(); // 0x1ae PushV
	var_368_object = var_1_object; // 0x1af MovT
	func_4988(var_368_object); // 0x1b0 NEW_2
	if(var_367_bool == 0) goto Label_441; // 0x1b2 JumpB
	var_369_bool = 0; var_370_object = Obj(); // 0x1b3 PushV
	var_370_object = var_1_object; // 0x1b4 MovT
	func_5074(var_369_bool, var_370_object); // 0x1b5 NEW_2
	if(var_369_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_366_bool = 1; // 0x1b8 MovB
	
Label_441:
	if(var_366_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_375_int = 538272; // 0x1ba PushI
	var_376_int = 40155; // 0x1bb PushI
	var_377_int = 40154; // 0x1bc PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x1bd TObjFunc
	
Label_447:
	var_378_bool = 0; var_379_object = Obj(); // 0x1bf PushV
	var_379_object = var_1_object; // 0x1c0 MovT
	func_5084(var_378_bool, var_379_object); // 0x1c1 NEW_2
	if(var_378_bool == 0) goto Label_457; // 0x1c3 JumpB
	var_384_int = 538291; // 0x1c4 PushI
	var_385_int = 40174; // 0x1c5 PushI
	var_386_int = 40173; // 0x1c6 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x1c7 TObjFunc
	
Label_457:
	var_387_bool = 0; // 0x1c9 PushV
	var_387_bool = 0; // 0x1ca MovB
	var_388_bool = 0; var_389_object = Obj(); // 0x1cb PushV
	var_389_object = var_1_object; // 0x1cc MovT
	func_4988(var_389_object); // 0x1cd NEW_2
	if(var_388_bool == 0) goto Label_470; // 0x1cf JumpB
	var_390_bool = 0; var_391_object = Obj(); // 0x1d0 PushV
	var_391_object = var_1_object; // 0x1d1 MovT
	func_5094(var_390_bool, var_391_object); // 0x1d2 NEW_2
	if(var_390_bool == 0) goto Label_470; // 0x1d4 JumpB
	var_387_bool = 1; // 0x1d5 MovB
	
Label_470:
	if(var_387_bool == 0) goto Label_476; // 0x1d6 JumpB
	var_392_int = 538308; // 0x1d7 PushI
	var_393_int = 40192; // 0x1d8 PushI
	var_394_int = 40191; // 0x1d9 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x1da TObjFunc
	
Label_476:
	var_395_bool = 0; var_396_object = Obj(); // 0x1dc PushV
	var_396_object = var_1_object; // 0x1dd MovT
	func_5104(var_395_bool, var_396_object); // 0x1de NEW_2
	if(var_395_bool == 0) goto Label_486; // 0x1e0 JumpB
	var_397_int = 538322; // 0x1e1 PushI
	var_398_int = 40206; // 0x1e2 PushI
	var_399_int = 40205; // 0x1e3 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x1e4 TObjFunc
	
Label_486:
	var_400_bool = 0; var_401_object = Obj(); // 0x1e6 PushV
	var_401_object = var_1_object; // 0x1e7 MovT
	func_5034(var_400_bool, var_401_object); // 0x1e8 NEW_2
	if(var_400_bool == 0) goto Label_496; // 0x1ea JumpB
	var_404_int = 538332; // 0x1eb PushI
	var_405_int = 40216; // 0x1ec PushI
	var_406_int = 40215; // 0x1ed PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x1ee TObjFunc
	
Label_496:
	var_407_bool = 0; // 0x1f0 PushV
	var_407_bool = 0; // 0x1f1 MovB
	var_408_bool = 0; var_409_object = Obj(); // 0x1f2 PushV
	var_409_object = var_1_object; // 0x1f3 MovT
	func_4988(var_409_object); // 0x1f4 NEW_2
	if(var_408_bool == 0) goto Label_509; // 0x1f6 JumpB
	var_410_bool = 0; var_411_object = Obj(); // 0x1f7 PushV
	var_411_object = var_1_object; // 0x1f8 MovT
	func_5114(var_410_bool, var_411_object); // 0x1f9 NEW_2
	if(var_410_bool == 0) goto Label_509; // 0x1fb JumpB
	var_407_bool = 1; // 0x1fc MovB
	
Label_509:
	if(var_407_bool == 0) goto Label_515; // 0x1fd JumpB
	var_412_int = 538347; // 0x1fe PushI
	var_413_int = 40233; // 0x1ff PushI
	var_414_int = 40232; // 0x200 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x201 TObjFunc
	
Label_515:
	var_415_bool = 0; var_416_object = Obj(); // 0x203 PushV
	var_416_object = var_1_object; // 0x204 MovT
	func_5124(var_415_bool, var_416_object); // 0x205 NEW_2
	if(var_415_bool == 0) goto Label_525; // 0x207 JumpB
	var_417_int = 538364; // 0x208 PushI
	var_418_int = 40250; // 0x209 PushI
	var_419_int = 40249; // 0x20a PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x20b TObjFunc
	
Label_525:
	var_420_bool = 0; // 0x20d PushV
	var_420_bool = 0; // 0x20e MovB
	var_421_bool = 0; var_422_object = Obj(); // 0x20f PushV
	var_422_object = var_1_object; // 0x210 MovT
	func_4988(var_422_object); // 0x211 NEW_2
	if(var_421_bool == 0) goto Label_538; // 0x213 JumpB
	var_423_bool = 0; var_424_object = Obj(); // 0x214 PushV
	var_424_object = var_1_object; // 0x215 MovT
	func_5134(var_423_bool, var_424_object); // 0x216 NEW_2
	if(var_423_bool == 0) goto Label_538; // 0x218 JumpB
	var_420_bool = 1; // 0x219 MovB
	
Label_538:
	if(var_420_bool == 0) goto Label_544; // 0x21a JumpB
	var_425_int = 538375; // 0x21b PushI
	var_426_int = 40262; // 0x21c PushI
	var_427_int = 40261; // 0x21d PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x21e TObjFunc
	
Label_544:
	var_428_bool = 0; // 0x220 PushV
	var_428_bool = 0; // 0x221 MovB
	var_429_bool = 0; var_430_object = Obj(); // 0x222 PushV
	var_430_object = var_1_object; // 0x223 MovT
	func_4988(var_430_object); // 0x224 NEW_2
	if(var_429_bool == 0) goto Label_557; // 0x226 JumpB
	var_431_bool = 0; var_432_object = Obj(); // 0x227 PushV
	var_432_object = var_1_object; // 0x228 MovT
	func_5134(var_431_bool, var_432_object); // 0x229 NEW_2
	if(var_431_bool == 0) goto Label_557; // 0x22b JumpB
	var_428_bool = 1; // 0x22c MovB
	
Label_557:
	if(var_428_bool == 0) goto Label_563; // 0x22d JumpB
	var_433_int = 538385; // 0x22e PushI
	var_434_int = 40272; // 0x22f PushI
	var_435_int = 40271; // 0x230 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x231 TObjFunc
	
Label_563:
	var_436_int = 538396; // 0x233 PushI
	var_437_int = -1; // 0x234 PushI
	var_438_int = 40282; // 0x235 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x236 TObjFunc
	goto Label_571; // 0x238 Jump
}


func_4685(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); // 0x124d PushV
	GetScene(var_30_object); // 0x124e Func
	var_32_string = "scripted"; // 0x1250 PushS
	var_33_string = "blood_dir.xml"; // 0x1251 PushS
	AddActorByType(var_31_object, var_32_string, var_30_object, var_26_cvector, var_27_cvector, var_33_string); // 0x1252 Func
	var_34_object = Obj(); // 0x1254 PushV
	var_34_object = var_23_object; // 0x1255 Mov
	func_4573(var_34_object); // 0x1256 NEW_2
	return 4; // 0x1258 Return
}


func_5199(var_220_bool)
{
	var_222_int = 0; // 0x1450 PushV
	func_4954(var_222_int); // 0x1451 NEW_2
	var_223_int = 7; // 0x1453 PushI
	var_220_bool = var_222_int == var_223_int; // 0x1454 Eq2
	return 0; // 0x1455 Return
}


func_5206(var_226_bool)
{
	var_228_int = 0; // 0x1457 PushV
	func_4954(var_228_int); // 0x1458 NEW_2
	var_229_int = 8; // 0x145a PushI
	var_226_bool = var_228_int == var_229_int; // 0x145b Eq2
	return 0; // 0x145c Return
}


func_601(var_2_object, var_139_string)
{
	var_140_bool = 0; // 0x25a PushV
	func_6205(var_140_bool); // 0x25b NEW_2
	var_141_bool = var_140_bool == 0; // 0x25d Not
	if(var_141_bool == 0) goto Label_608; // 0x25e JumpB
	return 0; // 0x25f Return
	
Label_608:
	var_142_bool = var_139_string == var_2_object; // 0x260 Eq
	if(var_142_bool == 0) goto Label_611; // 0x261 JumpB
	return 0; // 0x262 Return
	
Label_611:
	var_143_string = ""; var_144_bool = 0; // 0x263 PushV
	var_143_string = var_139_string; // 0x264 Mov
	var_145_string = ""; // 0x265 PushS
	var_146_bool = var_139_string == var_145_string; // 0x266 Eq
	if(var_146_bool == 0) goto Label_618; // 0x267 JumpB
	var_144_bool = 0; // 0x268 MovB
	goto Label_619; // 0x269 Jump
	
Label_619:
	func_4818(var_143_string, var_144_bool); // 0x26b NEW_2
	var_2_object = var_139_string; // 0x26d TMov
	return 0; // 0x26e Return
	
Label_618:
	var_144_bool = 1; // 0x26a MovB
}


func_5723(var_30_object)
{
	var_31_object = Obj(); // 0x165c PushV
	var_31_object = var_30_object; // 0x165d Mov
	func_6010(); // 0x165e NEW_2
	return 0; // 0x1660 Return
}


func_4699()
{
	var_283_cvector = CVector(0,0,0); var_284_cvector = CVector(0,0,0); var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); // 0x125b PushV
	GetPosition(var_286_cvector); // 0x125c ObjFunc
	GetPosition(var_287_cvector); // 0x125e Func
	var_288_cvector = var_286_cvector - var_287_cvector; // 0x1260 Sub2
	var_289_float = GetByIndex(var_288_cvector, 0); // 0x1261 PushE
	var_290_float = GetByIndex(var_288_cvector, 2); // 0x1262 PushE
	RotateAsync(var_289_float, var_290_float); // 0x1263 Func
	return 6; // 0x1265 Return
}


func_5213(var_192_bool)
{
	var_194_int = 0; // 0x145e PushV
	func_4954(var_194_int); // 0x145f NEW_2
	var_195_int = 9; // 0x1461 PushI
	var_192_bool = var_194_int == var_195_int; // 0x1462 Eq2
	return 0; // 0x1463 Return
}


func_3166(var_38_float)
{
	var_39_float = 0; var_40_float = 0; // 0xc5e PushV
	GetCameraFarDistance(var_40_float); // 0xc5f Func
	var_38_float = var_40_float; // 0xc61 Mov
	return 2; // 0xc62 Return
}


func_6235(var_39_bool, var_40_object)
{
	var_41_float = 0; var_42_float = 0; // 0x185b PushV
	var_43_bool = 0; var_44_object = Obj(); // 0x185c PushV
	var_44_object = var_40_object; // 0x185d Mov
	func_4418(var_43_bool, var_44_object); // 0x185e NEW_2
	if(var_43_bool == 0) goto Label_6249; // 0x1860 JumpB
	var_47_string = "reputation"; // 0x1861 PushS
	GetProperty(var_47_string, var_42_float); // 0x1862 ObjFunc
	var_48_float = 0.4; // 0x1864 PushF
	var_49_bool = var_42_float < var_48_float; // 0x1865 LT
	if(var_49_bool == 0) goto Label_6249; // 0x1866 JumpB
	var_39_bool = 1; // 0x1867 MovB
	return 2; // 0x1868 Return
	
Label_6249:
	var_39_bool = 0; // 0x1869 MovB
	return 2; // 0x186a Return
}


func_5729(var_20_object)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x1662 PushV
	var_22_object = var_20_object; // 0x1663 Mov
	func_4418(var_21_bool, var_22_object); // 0x1664 NEW_2
	if(var_21_bool == 0) goto Label_5741; // 0x1666 JumpB
	var_25_object = Obj(); // 0x1667 PushV
	func_4892(var_25_object); // 0x1668 NEW_2
	var_28_float = -0.01; // 0x166a PushF
	ReportReputationChange(var_20_object, var_25_object, var_28_float); // 0x166b Func
	
Label_5741:
	return 0; // 0x166d Return
}


func_4196(var_2_object)
{
	var_18_int = 1; // 0x1064 PushI
	KillTimer(var_18_int); // 0x1065 Func
	var_19_object = var_2_object; // 0x1067 PushT
	if(var_19_object == 0) goto Label_4205; // 0x1068 JumpB
	var_2_object = 0; // 0x1069 TMovB
	var_20_string = "head"; // 0x106a PushS
	UnlookAsync(var_20_string); // 0x106b Func
	
Label_4205:
	func_4362(var_17_object); // 0x106e NEW_2
	return 0; // 0x1070 Return
}


func_5220(var_198_bool)
{
	var_200_int = 0; // 0x1465 PushV
	func_4954(var_200_int); // 0x1466 NEW_2
	var_201_int = 10; // 0x1468 PushI
	var_198_bool = var_200_int == var_201_int; // 0x1469 Eq2
	return 0; // 0x146a Return
}


func_4710(var_19_bool)
{
	var_20_bool = 0; var_21_bool = 0; // 0x1266 PushV
	IsLoaded(var_21_bool); // 0x1267 Func
	var_19_bool = var_21_bool; // 0x1269 Mov
	return 2; // 0x126a Return
}


func_3178(var_0_object, var_1_object)
{
	var_0_object = 1; // 0xc6a TMovB
	var_1_object = 0; // 0xc6b TMovB
	Stop(); // 0xc6c Func
	StopGroup0(); // 0xc6e Func
	return 0; // 0xc70 Return
}


func_4715(var_63_bool, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; // 0x126b PushV
	GetPosition(var_76_cvector); // 0x126c ObjFunc
	GetEyesHeight(var_75_float); // 0x126e ObjFunc
	var_84_float = GetByIndex(var_76_cvector, 1); // 0x1270 PushE
	var_84_float = var_84_float + var_75_float; // 0x1271 Add2
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0x1272 PopE
	GetPosition(var_77_cvector); // 0x1273 Func
	GetEyesHeight(var_75_float); // 0x1275 Func
	var_85_float = GetByIndex(var_77_cvector, 1); // 0x1277 PushE
	var_85_float = var_85_float + var_75_float; // 0x1278 Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0x1279 PopE
	var_78_cvector = var_76_cvector - var_77_cvector; // 0x127a Sub2
	var_86_float = GetByIndex(var_78_cvector, 1); // 0x127b PushE
	var_86_float = 0; // 0x127c MovI
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0x127d PopE
	var_87_int = var_78_cvector | var_78_cvector; // 0x127e Or
	var_88_float = sqrt(var_87_int); // 0x127f Sqrt
	var_78_cvector = var_78_cvector / var_78_cvector; // 0x1280 Div2
	var_79_cvector = -var_78_cvector; // 0x1281 Neg2
	var_89_float = var_78_cvector * var_65_float; // 0x1282 Mult
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x1283 PushV
	var_92_cvector = CVector(0.0, 1.0, 0.0); // 0x1284 PushVec
	var_91_cvector = var_79_cvector ^ var_92_cvector; // 0x1285 Xor2
	func_4898(var_90_cvector, var_91_cvector); // 0x1286 NEW_2
	var_98_int = 25; // 0x1288 PushI
	var_99_float = var_90_cvector * var_98_int; // 0x1289 Mult
	var_100_int = var_89_float + var_99_float; // 0x128a Add
	var_101_cvector = CVector(0.0, 10.0, 0.0); // 0x128b PushVec
	var_80_cvector = var_100_int - var_101_cvector; // 0x128c Sub2
	var_81_cvector = var_77_cvector + var_80_cvector; // 0x128d Add2
	IsOverrideActive(var_82_bool); // 0x128e Func
	var_102_bool = var_82_bool; // 0x1290 Push
	if(var_102_bool == 0) goto Label_4756; // 0x1291 JumpB
	var_63_bool = 0; // 0x1292 MovB
	return 18; // 0x1293 Return
	
Label_4756:
	StopWorld(); // 0x1294 Func
	var_103_bool = 1; // 0x1296 PushB
	CameraTransit(var_81_cvector, var_79_cvector, var_103_bool); // 0x1297 Func
	var_104_float = GetByIndex(var_80_cvector, 0); // 0x1299 PushE
	var_105_float = GetByIndex(var_80_cvector, 2); // 0x129a PushE
	Rotate(var_104_float, var_105_float); // 0x129b Func
	var_106_bool = 0; // 0x129d PushV
	func_6205(var_106_bool); // 0x129e NEW_2
	if(var_106_bool == 0) goto Label_4770; // 0x12a0 JumpB
	goto Label_4778; // 0x12a1 Jump
	
Label_4778:
	CameraWaitForPlayFinish(); // 0x12aa Func
	ResumeWorld(); // 0x12ac Func
	var_63_bool = 1; // 0x12ae MovB
	return 18; // 0x12af Return
	
Label_4770:
	var_107_string = "head"; // 0x12a2 PushS
	HasAnimationTrack(var_83_bool, var_107_string); // 0x12a3 Func
	var_108_bool = var_83_bool; // 0x12a5 Push
	if(var_108_bool == 0) goto Label_4778; // 0x12a6 JumpB
	var_109_string = "head"; // 0x12a7 PushS
	LookAsyncCamera(var_109_string); // 0x12a8 Func
}


func_5227(var_204_bool)
{
	var_206_int = 0; // 0x146c PushV
	func_4954(var_206_int); // 0x146d NEW_2
	var_207_int = 11; // 0x146f PushI
	var_204_bool = var_206_int == var_207_int; // 0x1470 Eq2
	return 0; // 0x1471 Return
}


func_3693(var_1_object, var_2_object, var_4_bool)
{
	var_133_bool = 0; var_134_bool = 0; var_135_cvector = CVector(0,0,0); var_136_bool = 0; var_137_bool = 0; var_138_cvector = CVector(0,0,0); // 0xe6d PushV
	var_1_object = 0; // 0xe6e TMovI
	
Label_3695:
	var_139_string = "all"; // 0xe6f PushS
	var_140_string = "attack_begin"; // 0xe70 PushS
	var_141_int = 1; // 0xe71 PushI
	var_142_int = var_1_object + var_141_int; // 0xe72 Add
	var_143_int = var_140_string + var_142_int; // 0xe73 Add
	HasAnimation(var_136_bool, var_139_string, var_143_int); // 0xe74 Func
	var_144_bool = var_136_bool == 0; // 0xe76 Not
	if(var_144_bool == 0) goto Label_3705; // 0xe77 JumpB
	goto Label_3708; // 0xe78 Jump
	
Label_3708:
	var_2_object = 0; // 0xe7c TMovI
	
Label_3709:
	var_145_string = "attack"; // 0xe7d PushS
	var_146_int = 1; // 0xe7e PushI
	var_147_int = var_2_object + var_146_int; // 0xe7f Add
	var_148_int = var_145_string + var_147_int; // 0xe80 Add
	IsExisting3DSound(var_137_bool, var_148_int); // 0xe81 Func
	var_149_bool = var_137_bool == 0; // 0xe83 Not
	if(var_149_bool == 0) goto Label_3718; // 0xe84 JumpB
	goto Label_3721; // 0xe85 Jump
	
Label_3721:
	var_150_string = "all"; // 0xe89 PushS
	var_151_string = "bjump"; // 0xe8a PushS
	GetAnimationOffset(var_138_cvector, var_150_string, var_151_string); // 0xe8b Func
	var_152_float = GetByIndex(var_138_cvector, 2); // 0xe8d PushE
	var_4_bool = -var_152_float; // 0xe8e Neg2
	return 6; // 0xe8f Return
	
Label_3718:
	var_153_int = 1; // 0xe86 PushI
	var_2_object = var_2_object + var_153_int; // 0xe87 Add2
	goto Label_3709; // 0xe88 Jump
	
Label_3705:
	var_154_int = 1; // 0xe79 PushI
	var_1_object = var_1_object + var_154_int; // 0xe7a Add2
	goto Label_3695; // 0xe7b Jump
}


func_6254(var_22_bool, var_23_object, var_24_object, var_25_bool)
{
	var_26_bool = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_float = 0; var_30_bool = 0; // 0x186f PushV
	var_27_object = var_23_object; // 0x1870 Mov
	var_28_object = var_24_object; // 0x1871 Mov
	var_29_float = 700.0; // 0x1872 MovF
	var_30_bool = var_25_bool; // 0x1873 Mov
	func_5917(var_26_bool, var_27_object, var_28_object, var_29_float, var_30_bool); // 0x1874 NEW_2
	var_22_bool = var_26_bool; // 0x1875 Mov
	return 0; // 0x1877 Return
}


func_5742(var_18_bool, var_19_string)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x166e PushV
	var_22_string = "heal"; // 0x166f PushS
	var_23_bool = var_19_string == var_22_string; // 0x1670 Eq
	if(var_23_bool == 0) goto Label_5756; // 0x1671 JumpB
	var_24_string = "player"; // 0x1672 PushS
	FindActor(var_21_object, var_24_string); // 0x1673 Func
	var_25_bool = 0; var_26_object = Obj(); // 0x1675 PushV
	var_26_object = var_21_object; // 0x1676 Mov
	func_6022(var_26_object); // 0x1677 NEW_2
	var_18_bool = var_25_bool; // 0x1678 Mov
	return 2; // 0x167a Return
	
Label_5756:
	var_18_bool = 0; // 0x167c MovB
	return 2; // 0x167d Return
}


func_6251(var_89_bool)
{
	var_89_bool = 1; // 0x186c MovB
	return 0; // 0x186d Return
}


func_3185(var_0_object, var_1_object)
{
	var_0_object = 1; // 0xc71 TMovB
	var_1_object = 1; // 0xc72 TMovB
	Stop(); // 0xc73 Func
	StopGroup0(); // 0xc75 Func
	return 0; // 0xc77 Return
}


func_5234(var_210_bool)
{
	var_212_int = 0; // 0x1473 PushV
	func_4954(var_212_int); // 0x1474 NEW_2
	var_213_int = 12; // 0x1476 PushI
	var_210_bool = var_212_int == var_213_int; // 0x1477 Eq2
	return 0; // 0x1478 Return
}


func_2675(var_19_object)
{
	EventDisable(0); // 0xa74 EventDisable
	var_20_object = Obj(); // 0xa75 PushV
	var_20_object = var_19_object; // 0xa76 Mov
	func_2708(var_20_object); // 0xa77 NEW_2
	var_100_object = Obj(); // 0xa79 PushV
	var_100_object = var_19_object; // 0xa7a Mov
	func_6264(var_100_object); // 0xa7b NEW_2
	EventEnable(0); // 0xa7d EventEnable
	
Label_2686:
	Hold(); // 0xa7e Func
	goto Label_2686; // 0xa80 Jump
}


func_6264(var_100_object)
{
	var_101_bool = 0; var_102_object = Obj(); // 0x1879 PushV
	var_102_object = var_100_object; // 0x187a Mov
	func_4418(var_101_bool, var_102_object); // 0x187b NEW_2
	if(var_101_bool == 0) goto Label_6281; // 0x187d JumpB
	var_105_object = Obj(); // 0x187e PushV
	func_4892(var_105_object); // 0x187f NEW_2
	var_108_float = -0.04; // 0x1881 PushF
	var_109_bool = 1; // 0x1882 PushB
	ReportReputationChange(var_100_object, var_105_object, var_108_float, var_109_bool); // 0x1883 Func
	var_110_bool = 0; // 0x1885 PushV
	var_110_bool = 1; // 0x1886 MovB
	func_5418(var_110_bool); // 0x1887 NEW_2
	
Label_6281:
	func_5394(); // 0x188a NEW_2
	var_244_bool = GlobalVars[0]; // 0x188c PushGE
	var_244_bool = 1; // 0x188d MovB
	GlobalVars[0] = var_244_bool; // 0x188e PopGE
	var_245_int = 50; // 0x188f PushI
	var_246_int = 40; // 0x1890 PushI
	SetRTEnvelope(var_245_int, var_246_int); // 0x1891 Func
	return 0; // 0x1893 Return
}


func_3192(var_48_bool)
{
	var_48_bool = 0; // 0xc78 MovB
	return 0; // 0xc79 Return
}


func_5241(var_115_int)
{
	var_116_int = 0; var_117_int = 0; // 0x1479 PushV
	var_118_string = "branch"; // 0x147a PushS
	GetVariable(var_118_string, var_117_int); // 0x147b Func
	var_119_int = 0; // 0x147d PushI
	var_120_bool = var_117_int == var_119_int; // 0x147e Eq
	if(var_120_bool == 0) goto Label_5251; // 0x147f JumpB
	var_115_int = 1; // 0x1480 MovI
	return 2; // 0x1481 Return
	
Label_5251:
	var_121_int = 1; // 0x1483 PushI
	var_122_bool = var_117_int == var_121_int; // 0x1484 Eq
	if(var_122_bool == 0) goto Label_5256; // 0x1485 JumpB
	var_115_int = 2; // 0x1486 MovI
	return 2; // 0x1487 Return
	
Label_5256:
	var_115_int = 3; // 0x1488 MovI
	return 2; // 0x1489 Return
}


func_3194(var_42_object, var_43_cvector)
{
	var_44_object = Obj(); var_45_object = Obj(); // 0xc7a PushV
	FindShiftedPathTo(var_45_object, var_43_cvector); // 0xc7b Func
	var_42_object = var_45_object; // 0xc7d Mov
	return 2; // 0xc7e Return
}


func_5758(var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x167e PushV
	var_30_string = "heal"; // 0x167f PushS
	var_31_bool = var_27_string == var_30_string; // 0x1680 Eq
	if(var_31_bool == 0) goto Label_5770; // 0x1681 JumpB
	var_32_string = "player"; // 0x1682 PushS
	FindActor(var_29_object, var_32_string); // 0x1683 Func
	var_33_object = Obj(); // 0x1685 PushV
	var_33_object = var_29_object; // 0x1686 Mov
	func_6025(); // 0x1687 NEW_2
	var_29_object = 0; // 0x1689 SetNull
	
Label_5770:
	return 2; // 0x168a Return
}


func_5258(var_224_int)
{
	var_225_int = 0; var_226_int = 0; // 0x148a PushV
	var_227_string = "branch"; // 0x148b PushS
	GetVariable(var_227_string, var_226_int); // 0x148c Func
	var_224_int = var_226_int; // 0x148e Mov
	return 2; // 0x148f Return
}


func_5771(var_72_string, var_73_int)
{
	var_74_string = ""; var_75_string = ""; // 0x168b PushV
	var_75_string = "idle"; // 0x168c MovS
	var_76_int = var_73_int; // 0x168d Push
	if(var_76_int == 0) goto Label_5776; // 0x168e JumpB
	var_75_string = var_75_string + var_73_int; // 0x168f Add2
	
Label_5776:
	var_72_string = var_75_string; // 0x1690 Mov
	return 2; // 0x1691 Return
}


func_4238(var_0_object, var_1_object, var_208_bool, var_209_object, var_210_float, var_211_float, var_212_bool, var_213_bool)
{
	var_214_bool = 0; var_215_bool = 0; var_216_object = Obj(); var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_float = 0; var_221_object = Obj(); var_222_bool = 0; var_223_bool = 0; var_224_object = Obj(); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_float = 0; var_229_object = Obj(); // 0x108e PushV
	var_0_object = 0; // 0x108f TMovB
	var_1_object = var_209_object; // 0x1090 TMov
	var_223_bool = var_213_bool; // 0x1091 Mov
	
Label_4242:
	var_230_bool = 0; var_231_object = Obj(); // 0x1092 PushV
	var_231_object = var_209_object; // 0x1093 Mov
	func_4378(var_230_bool, var_231_object); // 0x1094 NEW_2
	var_234_bool = var_230_bool == 0; // 0x1096 Not
	if(var_234_bool == 0) goto Label_4250; // 0x1097 JumpB
	var_208_bool = 0; // 0x1098 MovB
	return 16; // 0x1099 Return
	
Label_4250:
	GetPosition(var_225_cvector); // 0x109a ObjFunc
	GetPosition(var_226_cvector); // 0x109c Func
	var_227_cvector = var_225_cvector - var_226_cvector; // 0x109e Sub2
	var_228_float = var_227_cvector | var_227_cvector; // 0x109f Or2
	var_235_bool = 0; // 0x10a0 PushV
	var_235_bool = 0; // 0x10a1 MovB
	var_236_int = 0; // 0x10a2 PushI
	var_237_bool = var_211_float > var_236_int; // 0x10a3 GT
	if(var_237_bool == 0) goto Label_4265; // 0x10a4 JumpB
	var_238_float = var_211_float * var_211_float; // 0x10a5 Mult
	var_239_bool = var_228_float > var_238_float; // 0x10a6 GT
	if(var_239_bool == 0) goto Label_4265; // 0x10a7 JumpB
	var_235_bool = 1; // 0x10a8 MovB
	
Label_4265:
	if(var_235_bool == 0) goto Label_4270; // 0x10a9 JumpB
	Stop(); // 0x10aa Func
	var_208_bool = 0; // 0x10ac MovB
	return 16; // 0x10ad Return
	
Label_4270:
	var_240_float = var_210_float * var_210_float; // 0x10ae Mult
	var_241_bool = var_228_float > var_240_float; // 0x10af GT
	if(var_241_bool == 0) goto Label_4332; // 0x10b0 JumpB
	GetPFPosition(var_225_cvector); // 0x10b1 ObjFunc
	FindPathTo(var_229_object, var_225_cvector); // 0x10b3 Func
	var_242_bool = var_229_object != 0; // 0x10b5 NullNeq
	if(var_242_bool == 0) goto Label_4281; // 0x10b6 JumpB
	var_224_object = var_229_object; // 0x10b7 Mov
	var_229_object = 0; // 0x10b8 SetNull
	
Label_4281:
	var_243_bool = var_224_object != 0; // 0x10b9 NullNeq
	if(var_243_bool == 0) goto Label_4314; // 0x10ba JumpB
	var_244_bool = var_223_bool; // 0x10bb Push
	if(var_244_bool == 0) goto Label_4291; // 0x10bc JumpB
	var_223_bool = 0; // 0x10bd MovB
	RotatePath(var_224_object, var_222_bool); // 0x10be Func
	var_245_bool = var_222_bool == 0; // 0x10c0 Not
	if(var_245_bool == 0) goto Label_4291; // 0x10c1 JumpB
	goto Label_4338; // 0x10c2 Jump
	
Label_4338:
	var_208_bool = !var_0_object; // 0x10f2 Not2
	return 16; // 0x10f3 Return
	
Label_4291:
	var_246_int = 0; // 0x10c3 PushI
	var_247_float = 0.3; // 0x10c4 PushF
	SetTimer(var_246_int, var_247_float); // 0x10c5 Func
	var_248_string = ""; // 0x10c7 PushV
	func_4385(var_248_string); // 0x10c8 NEW_2
	var_249_string = ""; // 0x10ca PushV
	func_4387(var_249_string); // 0x10cb NEW_2
	FollowPath(var_224_object, var_212_bool, var_222_bool, var_248_string, var_249_string); // 0x10cd Func
	var_250_bool = var_222_bool == 0; // 0x10cf Not
	if(var_250_bool == 0) goto Label_4312; // 0x10d0 JumpB
	var_251_object = var_0_object; // 0x10d1 PushT
	if(var_251_object == 0) goto Label_4310; // 0x10d2 JumpB
	var_224_object = 0; // 0x10d3 SetNull
	goto Label_4338; // 0x10d4 Jump
	
Label_4310:
	goto Label_4337; // 0x10d6 Jump
	
Label_4337:
	goto Label_4242; // 0x10f1 Jump
	
Label_4312:
	var_224_object = 0; // 0x10d8 SetNull
	goto Label_4330; // 0x10d9 Jump
	
Label_4330:
	var_229_object = 0; // 0x10ea SetNull
	goto Label_4336; // 0x10eb Jump
	
Label_4336:
	var_224_object = 0; // 0x10f0 SetNull
	
Label_4314:
	var_252_int = 0; // 0x10da PushI
	KillTimer(var_252_int); // 0x10db Func
	var_253_float = 0.5; // 0x10dd PushF
	Sleep(var_253_float, var_222_bool); // 0x10de Func
	var_254_bool = var_222_bool == 0; // 0x10e0 Not
	if(var_254_bool == 0) goto Label_4326; // 0x10e1 JumpB
	var_255_object = var_0_object; // 0x10e2 PushT
	if(var_255_object == 0) goto Label_4326; // 0x10e3 JumpB
	var_224_object = 0; // 0x10e4 SetNull
	goto Label_4338; // 0x10e5 Jump
	
Label_4326:
	var_256_int = 0; // 0x10e6 PushI
	var_257_float = 0.3; // 0x10e7 PushF
	SetTimer(var_256_int, var_257_float); // 0x10e8 Func
	
Label_4332:
	var_258_int = 0; // 0x10ec PushI
	KillTimer(var_258_int); // 0x10ed Func
	goto Label_4338; // 0x10ef Jump
}


func_3728(var_0_object, var_434_float, var_435_int)
{
	var_436_object = Obj(); var_437_float = 0; var_438_float = 0; var_439_object = Obj(); var_440_float = 0; var_441_float = 0; // 0xe90 PushV
	var_442_float = 0.9; // 0xe91 PushF
	var_443_float = var_434_float * var_442_float; // 0xe92 Mult
	GetVictim(var_443_float, var_439_object); // 0xe93 Func
	ReportAttack(var_0_object); // 0xe95 Func
	var_444_bool = var_439_object == var_0_object; // 0xe97 Eq
	if(var_444_bool == 0) goto Label_3765; // 0xe98 JumpB
	var_445_float = 0; var_446_object = Obj(); var_447_int = 0; // 0xe99 PushV
	var_446_object = var_439_object; // 0xe9a Mov
	var_447_int = var_435_int; // 0xe9b Mov
	func_3458(var_447_int); // 0xe9c NEW_2
	var_440_float = var_445_float; // 0xe9d Mov
	var_448_float = 0; var_449_object = Obj(); var_450_float = 0; var_451_int = 0; // 0xe9f PushV
	var_449_object = var_439_object; // 0xea0 Mov
	var_450_float = var_440_float; // 0xea1 Mov
	var_452_int = 0; var_453_object = Obj(); var_454_int = 0; // 0xea2 PushV
	var_453_object = var_439_object; // 0xea3 Mov
	var_454_int = var_435_int; // 0xea4 Mov
	func_3461(var_454_int); // 0xea5 NEW_2
	var_451_int = var_452_int; // 0xea6 Mov
	func_4435(var_448_float, var_449_object, var_450_float, var_451_int); // 0xea8 NEW_2
	var_441_float = var_448_float; // 0xea9 Mov
	var_513_int = 0; // 0xeab PushV
	func_4111(var_513_int); // 0xeac NEW_2
	ReportHit(var_0_object, var_513_int, var_441_float, var_440_float); // 0xeae Func
	var_514_object = Obj(); var_515_float = 0; // 0xeb0 PushV
	var_514_object = var_439_object; // 0xeb1 Mov
	var_515_float = var_441_float; // 0xeb2 Mov
	func_4118(); // 0xeb3 NEW_2
	
Label_3765:
	return 6; // 0xeb5 Return
}


func_5264(var_546_int)
{
	var_548_int = 0; var_549_int = 0; // 0x1490 PushV
	GetItemID(var_549_int); // 0x1491 ObjFunc
	var_546_int = var_549_int; // 0x1493 Mov
	return 2; // 0x1494 Return
}


func_5778(var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0; // 0x1692 PushV
	var_69_int = 0; // 0x1693 MovI
	
Label_5780:
	var_71_string = "all"; // 0x1694 PushS
	var_72_string = ""; var_73_int = 0; // 0x1695 PushV
	var_73_int = var_69_int; // 0x1696 Mov
	func_5771(var_72_string, var_73_int); // 0x1697 NEW_2
	HasAnimation(var_70_bool, var_71_string, var_72_string); // 0x1699 Func
	var_77_bool = var_70_bool == 0; // 0x169b Not
	if(var_77_bool == 0) goto Label_5790; // 0x169c JumpB
	goto Label_5793; // 0x169d Jump
	
Label_5793:
	var_66_int = var_69_int; // 0x16a1 Mov
	return 4; // 0x16a2 Return
	
Label_5790:
	var_78_int = 1; // 0x169e PushI
	var_69_int = var_69_int + var_78_int; // 0x169f Add2
	goto Label_5780; // 0x16a0 Jump
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
	func_4851(var_95_string); // 0xada NEW_2
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


func_5269(var_523_int, var_524_object, var_525_int)
{
	var_526_int = 0; var_527_int = 0; var_528_int = 0; var_529_string = ""; var_530_bool = 0; var_531_bool = 0; var_532_int = 0; var_533_int = 0; var_534_int = 0; var_535_int = 0; var_536_string = ""; var_537_bool = 0; var_538_bool = 0; var_539_int = 0; // 0x1495 PushV
	var_540_int = 0; // 0x1496 PushI
	var_541_bool = var_525_int == var_540_int; // 0x1497 Eq
	if(var_541_bool == 0) goto Label_5306; // 0x1498 JumpB
	var_542_int = 0; // 0x1499 PushV
	func_4954(var_542_int); // 0x149a NEW_2
	var_533_int = var_542_int; // 0x149b Mov
	var_534_int = 0; // 0x149d MovI
	var_535_int = 1; // 0x149e MovI
	
Label_5279:
	var_543_bool = var_535_int <= var_533_int; // 0x149f LE
	if(var_543_bool == 0) goto Label_5304; // 0x14a0 JumpB
	var_536_string = "Price"; // 0x14a1 MovS
	var_544_int = 1; // 0x14a2 PushI
	var_545_bool = var_535_int != var_544_int; // 0x14a3 Neq
	if(var_545_bool == 0) goto Label_5286; // 0x14a4 JumpB
	var_536_string = var_536_string + var_535_int; // 0x14a5 Add2
	
Label_5286:
	var_546_int = 0; var_547_object = Obj(); // 0x14a6 PushV
	var_547_object = var_524_object; // 0x14a7 Mov
	func_5264(var_547_object); // 0x14a8 NEW_2
	HasInvItemProperty(var_537_bool, var_546_int, var_536_string); // 0x14aa Func
	var_550_bool = var_537_bool == 0; // 0x14ac Not
	if(var_550_bool == 0) goto Label_5295; // 0x14ad JumpB
	goto Label_5301; // 0x14ae Jump
	
Label_5301:
	var_551_int = 1; // 0x14b5 PushI
	var_535_int = var_535_int + var_551_int; // 0x14b6 Add2
	goto Label_5279; // 0x14b7 Jump
	
Label_5295:
	var_552_int = 0; var_553_object = Obj(); // 0x14af PushV
	var_553_object = var_524_object; // 0x14b0 Mov
	func_5264(var_553_object); // 0x14b1 NEW_2
	GetInvItemProperty(var_534_int, var_552_int, var_536_string); // 0x14b3 Func
	
Label_5304:
	var_523_int = var_534_int; // 0x14b8 Mov
	return 14; // 0x14b9 Return
	
Label_5306:
	var_554_int = 0; var_555_object = Obj(); // 0x14ba PushV
	var_555_object = var_524_object; // 0x14bb Mov
	func_5264(var_555_object); // 0x14bc NEW_2
	var_556_string = "BarterPrice"; // 0x14be PushS
	var_557_int = var_556_string + var_525_int; // 0x14bf Add
	HasInvItemProperty(var_538_bool, var_554_int, var_557_int); // 0x14c0 Func
	var_558_bool = var_538_bool == 0; // 0x14c2 Not
	if(var_558_bool == 0) goto Label_5318; // 0x14c3 JumpB
	var_523_int = 0; // 0x14c4 MovI
	return 14; // 0x14c5 Return
	
Label_5318:
	var_559_int = 0; var_560_object = Obj(); // 0x14c6 PushV
	var_560_object = var_524_object; // 0x14c7 Mov
	func_5264(var_560_object); // 0x14c8 NEW_2
	var_561_string = "BarterPrice"; // 0x14ca PushS
	var_562_int = var_561_string + var_525_int; // 0x14cb Add
	GetInvItemProperty(var_539_int, var_559_int, var_562_int); // 0x14cc Func
	var_563_int = 0; // 0x14ce PushI
	var_564_bool = var_539_int > var_563_int; // 0x14cf GT
	if(var_564_bool == 0) goto Label_5331; // 0x14d0 JumpB
	var_523_int = var_539_int; // 0x14d1 Mov
	return 14; // 0x14d2 Return
	
Label_5331:
	var_523_int = -var_539_int; // 0x14d3 Neg2
	return 14; // 0x14d4 Return
}


func_5795(var_60_int, var_61_object)
{
	var_62_bool = 0; var_63_object = Obj(); // 0x16a4 PushV
	var_63_object = var_61_object; // 0x16a5 Mov
	func_6235(var_62_bool, var_63_object); // 0x16a6 NEW_2
	if(var_62_bool == 0) goto Label_5803; // 0x16a8 JumpB
	var_60_int = 2; // 0x16a9 MovI
	goto Label_5804; // 0x16aa Jump
	
Label_5804:
	return 0; // 0x16ac Return
	
Label_5803:
	var_60_int = 0; // 0x16ab MovI
}


func_5805(var_78_object)
{
	var_79_object = Obj(); // 0x16ae PushV
	var_79_object = var_78_object; // 0x16af Mov
	func_5821(var_79_object); // 0x16b0 NEW_2
	return 0; // 0x16b2 Return
}


func_4784()
{
	var_441_bool = 0; var_442_bool = 0; // 0x12b0 PushV
	var_443_bool = 1; // 0x12b1 PushB
	CameraSwitchToNormal(var_443_bool); // 0x12b2 Func
	var_444_bool = 0; // 0x12b4 PushV
	func_6205(var_444_bool); // 0x12b5 NEW_2
	if(var_444_bool == 0) goto Label_4793; // 0x12b7 JumpB
	goto Label_4801; // 0x12b8 Jump
	
Label_4801:
	return 2; // 0x12c1 Return
	
Label_4793:
	var_445_string = "head"; // 0x12b9 PushS
	HasAnimationTrack(var_442_bool, var_445_string); // 0x12ba Func
	var_446_bool = var_442_bool; // 0x12bc Push
	if(var_446_bool == 0) goto Label_4801; // 0x12bd JumpB
	var_447_string = "head"; // 0x12be PushS
	UnlookAsync(var_447_string); // 0x12bf Func
}


func_5811(var_87_int, var_88_object)
{
	var_89_bool = 0; var_90_object = Obj(); // 0x16b4 PushV
	var_90_object = var_88_object; // 0x16b5 Mov
	func_4549(var_89_bool, var_90_object); // 0x16b6 NEW_2
	if(var_89_bool == 0) goto Label_5819; // 0x16b8 JumpB
	var_87_int = 2; // 0x16b9 MovI
	goto Label_5820; // 0x16ba Jump
	
Label_5820:
	return 0; // 0x16bc Return
	
Label_5819:
	var_87_int = 0; // 0x16bb MovI
}


func_3767(var_0_object, var_397_bool, var_398_float)
{
	var_399_int = 0; var_400_bool = 0; var_401_int = 0; var_402_string = ""; var_403_int = 0; var_404_bool = 0; var_405_int = 0; var_406_string = ""; // 0xeb7 PushV
	func_4106(var_406_string); // 0xeb9 NEW_2
	irand(var_403_int, var_406_string); // 0xebb Func
	var_407_int = 1; // 0xebd PushI
	var_403_int = var_403_int + var_407_int; // 0xebe Add2
	Face(var_0_object); // 0xebf Func
	var_408_bool = 1; // 0xec1 PushB
	SetAttackState(var_408_bool); // 0xec2 Func
	func_4972(); // 0xec5 NEW_2
	var_413_string = "all"; // 0xec7 PushS
	var_414_string = "attack_begin"; // 0xec8 PushS
	var_415_int = var_414_string + var_403_int; // 0xec9 Add
	PlayAnimation(var_413_string, var_415_int); // 0xeca Func
	WaitForAnimEnd(); // 0xecc Func
	func_4074(var_405_int, var_406_string); // 0xecf NEW_2
	var_431_bool = 0; var_432_object = Obj(); // 0xed1 PushV
	var_432_object = var_0_object; // 0xed2 MovT
	func_4549(var_431_bool, var_432_object); // 0xed3 NEW_2
	var_433_bool = var_431_bool == 0; // 0xed5 Not
	if(var_433_bool == 0) goto Label_3803; // 0xed6 JumpB
	StopAsync(); // 0xed7 Func
	var_397_bool = 0; // 0xed9 MovB
	return 8; // 0xeda Return
	
Label_3803:
	var_434_float = 0; var_435_int = 0; // 0xedb PushV
	var_434_float = var_398_float; // 0xedc Mov
	var_435_int = var_403_int; // 0xedd Mov
	func_3728(var_406_string, var_434_float, var_435_int); // 0xede NEW_2
	var_516_string = "all"; // 0xee0 PushS
	var_517_string = "attack_middle"; // 0xee1 PushS
	var_518_int = var_517_string + var_403_int; // 0xee2 Add
	HasAnimation(var_404_bool, var_516_string, var_518_int); // 0xee3 Func
	var_519_bool = var_404_bool; // 0xee5 Push
	if(var_519_bool == 0) goto Label_3884; // 0xee6 JumpB
	func_4972(); // 0xee8 NEW_2
	var_520_string = "all"; // 0xeea PushS
	var_521_string = "attack_middle"; // 0xeeb PushS
	var_522_int = var_521_string + var_403_int; // 0xeec Add
	PlayAnimation(var_520_string, var_522_int); // 0xeed Func
	WaitForAnimEnd(); // 0xeef Func
	func_4106(var_406_string); // 0xef2 NEW_2
	var_523_bool = 0; var_524_object = Obj(); // 0xef4 PushV
	var_524_object = var_0_object; // 0xef5 MovT
	func_4549(var_523_bool, var_524_object); // 0xef6 NEW_2
	var_525_bool = var_523_bool == 0; // 0xef8 Not
	if(var_525_bool == 0) goto Label_3838; // 0xef9 JumpB
	StopAsync(); // 0xefa Func
	var_397_bool = 0; // 0xefc MovB
	return 8; // 0xefd Return
	
Label_3838:
	var_526_float = 0; var_527_int = 0; // 0xefe PushV
	var_526_float = var_398_float; // 0xeff Mov
	var_527_int = var_403_int; // 0xf00 Mov
	func_3728(var_406_string, var_526_float, var_527_int); // 0xf01 NEW_2
	var_405_int = 1; // 0xf03 MovI
	
Label_3844:
	var_528_string = "attack_middle"; // 0xf04 PushS
	var_529_int = var_528_string + var_403_int; // 0xf05 Add
	var_530_string = "_"; // 0xf06 PushS
	var_531_int = var_529_int + var_530_string; // 0xf07 Add
	var_406_string = var_531_int + var_405_int; // 0xf08 Add2
	var_532_string = "all"; // 0xf09 PushS
	HasAnimation(var_404_bool, var_532_string, var_406_string); // 0xf0a Func
	var_533_bool = var_404_bool == 0; // 0xf0c Not
	if(var_533_bool == 0) goto Label_3855; // 0xf0d JumpB
	goto Label_3884; // 0xf0e Jump
	
Label_3884:
	var_534_bool = 0; // 0xf2c PushB
	SetAttackState(var_534_bool); // 0xf2d Func
	var_535_string = "all"; // 0xf2f PushS
	var_536_string = "attack_end"; // 0xf30 PushS
	var_537_int = var_536_string + var_403_int; // 0xf31 Add
	PlayAnimation(var_535_string, var_537_int); // 0xf32 Func
	var_538_bool = 0; // 0xf34 PushV
	func_4120(var_538_bool); // 0xf35 NEW_2
	if(var_538_bool == 0) goto Label_3902; // 0xf37 JumpB
	var_539_bool = 0; var_540_float = 0; // 0xf38 PushV
	var_540_float = 0.75; // 0xf39 MovF
	func_3904(var_539_bool, var_540_float); // 0xf3a NEW_2
	StopAsync(); // 0xf3c Func
	
Label_3902:
	var_397_bool = 1; // 0xf3e MovB
	return 8; // 0xf3f Return
	
Label_3855:
	func_4972(); // 0xf10 NEW_2
	var_548_string = "all"; // 0xf12 PushS
	PlayAnimation(var_548_string, var_406_string); // 0xf13 Func
	WaitForAnimEnd(); // 0xf15 Func
	func_4106(var_406_string); // 0xf18 NEW_2
	var_549_bool = 0; var_550_object = Obj(); // 0xf1a PushV
	var_550_object = var_0_object; // 0xf1b MovT
	func_4549(var_549_bool, var_550_object); // 0xf1c NEW_2
	var_551_bool = var_549_bool == 0; // 0xf1e Not
	if(var_551_bool == 0) goto Label_3876; // 0xf1f JumpB
	StopAsync(); // 0xf20 Func
	var_397_bool = 0; // 0xf22 MovB
	return 8; // 0xf23 Return
	
Label_3876:
	var_552_float = 0; var_553_int = 0; // 0xf24 PushV
	var_552_float = var_398_float; // 0xf25 Mov
	var_553_int = var_403_int; // 0xf26 Mov
	func_3728(var_406_string, var_552_float, var_553_int); // 0xf27 NEW_2
	var_554_int = 1; // 0xf29 PushI
	var_405_int = var_405_int + var_554_int; // 0xf2a Add2
	goto Label_3844; // 0xf2b Jump
}


func_5821(var_100_object)
{
	var_101_object = Obj(); // 0x16be PushV
	var_101_object = var_100_object; // 0x16bf Mov
	TaskCall(5); // 0x16c0 TaskCall
	func_3450(var_101_object); // 0x16c1 NEW_2
	TaskReturn(); // 0x16c2 TaskReturn
	return 0; // 0x16c4 Return
}


func_4802(var_294_string)
{
	var_295_bool = 0; var_296_float = 0; var_297_float = 0; var_298_bool = 0; var_299_float = 0; var_300_float = 0; // 0x12c2 PushV
	lshHasAnimation(var_298_bool, var_294_string); // 0x12c3 Func
	var_301_bool = var_298_bool; // 0x12c5 Push
	if(var_301_bool == 0) goto Label_4813; // 0x12c6 JumpB
	lshGetAnimTimes(var_294_string, var_299_float, var_300_float); // 0x12c7 Func
	var_302_bool = 0; // 0x12c9 PushB
	lshPlayAnimation(var_299_float, var_300_float, var_302_bool); // 0x12ca Func
	goto Label_4817; // 0x12cc Jump
	
Label_4817:
	return 6; // 0x12d1 Return
	
Label_4813:
	var_303_string = "Can't find lsh animation : "; // 0x12cd PushS
	var_304_int = var_303_string + var_294_string; // 0x12ce Add
	Trace(var_304_int); // 0x12cf Func
}


func_5829(var_33_bool, var_34_object, var_35_bool)
{
	var_36_string = ""; var_37_string = ""; var_38_string = ""; var_39_string = ""; // 0x16c5 PushV
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; // 0x16c6 PushV
	var_41_object = var_34_object; // 0x16c7 Mov
	var_42_string = "class"; // 0x16c8 MovS
	func_4423(var_40_bool, var_41_object, var_42_string); // 0x16c9 NEW_2
	var_49_bool = var_40_bool == 0; // 0x16cb Not
	if(var_49_bool == 0) goto Label_5839; // 0x16cc JumpB
	var_33_bool = 0; // 0x16cd MovB
	return 4; // 0x16ce Return
	
Label_5839:
	var_50_string = "class"; // 0x16cf PushS
	GetProperty(var_50_string, var_38_string); // 0x16d0 Func
	var_51_string = "class"; // 0x16d2 PushS
	GetProperty(var_51_string, var_39_string); // 0x16d3 ObjFunc
	var_52_bool = 0; // 0x16d5 PushV
	var_52_bool = 0; // 0x16d6 MovB
	var_53_bool = var_35_bool == 0; // 0x16d7 Not
	if(var_53_bool == 0) goto Label_5852; // 0x16d8 JumpB
	var_54_bool = var_38_string == var_39_string; // 0x16d9 Eq
	if(var_54_bool == 0) goto Label_5852; // 0x16da JumpB
	var_52_bool = 1; // 0x16db MovB
	
Label_5852:
	if(var_52_bool == 0) goto Label_5855; // 0x16dc JumpB
	var_33_bool = 1; // 0x16dd MovB
	return 4; // 0x16de Return
	
Label_5855:
	var_55_string = "rat"; // 0x16df PushS
	var_56_bool = var_39_string == var_55_string; // 0x16e0 Eq
	if(var_56_bool == 0) goto Label_5861; // 0x16e1 JumpB
	var_33_bool = 0; // 0x16e2 MovB
	return 4; // 0x16e3 Return
	
Label_5861:
	var_57_string = "rat_big"; // 0x16e5 PushS
	var_58_bool = var_39_string == var_57_string; // 0x16e6 Eq
	if(var_58_bool == 0) goto Label_5867; // 0x16e7 JumpB
	var_33_bool = 0; // 0x16e8 MovB
	return 4; // 0x16e9 Return
	
Label_5867:
	var_59_string = "dog"; // 0x16eb PushS
	var_60_bool = var_39_string == var_59_string; // 0x16ec Eq
	if(var_60_bool == 0) goto Label_5873; // 0x16ed JumpB
	var_33_bool = 0; // 0x16ee MovB
	return 4; // 0x16ef Return
	
Label_5873:
	var_61_string = "grabitel"; // 0x16f1 PushS
	var_62_bool = var_39_string == var_61_string; // 0x16f2 Eq
	if(var_62_bool == 0) goto Label_5879; // 0x16f3 JumpB
	var_33_bool = 0; // 0x16f4 MovB
	return 4; // 0x16f5 Return
	
Label_5879:
	var_63_string = "bomber"; // 0x16f7 PushS
	var_64_bool = var_39_string == var_63_string; // 0x16f8 Eq
	if(var_64_bool == 0) goto Label_5885; // 0x16f9 JumpB
	var_33_bool = 0; // 0x16fa MovB
	return 4; // 0x16fb Return
	
Label_5885:
	var_65_string = "sanitar"; // 0x16fd PushS
	var_66_bool = var_39_string == var_65_string; // 0x16fe Eq
	if(var_66_bool == 0) goto Label_5891; // 0x16ff JumpB
	var_33_bool = 0; // 0x1700 MovB
	return 4; // 0x1701 Return
	
Label_5891:
	var_67_string = "hunter"; // 0x1703 PushS
	var_68_bool = var_39_string == var_67_string; // 0x1704 Eq
	if(var_68_bool == 0) goto Label_5897; // 0x1705 JumpB
	var_33_bool = 0; // 0x1706 MovB
	return 4; // 0x1707 Return
	
Label_5897:
	var_69_string = "soldier"; // 0x1709 PushS
	var_70_bool = var_39_string == var_69_string; // 0x170a Eq
	if(var_70_bool == 0) goto Label_5902; // 0x170b JumpB
	var_33_bool = 0; // 0x170c MovB
	return 4; // 0x170d Return
	
Label_5902:
	var_33_bool = 1; // 0x170e MovB
	return 4; // 0x170f Return
}


func_4818(var_143_string, var_144_bool)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0; // 0x12d2 PushV
	lshHasAnimation(var_150_bool, var_143_string); // 0x12d3 Func
	var_153_bool = var_150_bool; // 0x12d5 Push
	if(var_153_bool == 0) goto Label_4828; // 0x12d6 JumpB
	lshGetAnimTimes(var_143_string, var_151_float, var_152_float); // 0x12d7 Func
	lshPlayAnimation(var_151_float, var_152_float, var_144_bool); // 0x12d9 Func
	goto Label_4832; // 0x12db Jump
	
Label_4832:
	return 6; // 0x12e0 Return
	
Label_4828:
	var_154_string = "Can't find lsh animation : "; // 0x12dc PushS
	var_155_int = var_154_string + var_143_string; // 0x12dd Add
	Trace(var_155_int); // 0x12de Func
}


func_5333(var_32_object)
{
	var_33_int = 0; // 0x14d6 PushV
	func_5258(var_33_int); // 0x14d7 NEW_2
	var_37_int = 1; // 0x14d9 PushI
	var_38_bool = var_33_int == var_37_int; // 0x14da Eq
	if(var_38_bool == 0) goto Label_5343; // 0x14db JumpB
	WorkWithCorpse(var_32_object); // 0x14dc Func
	goto Label_5345; // 0x14de Jump
	
Label_5345:
	return 0; // 0x14e1 Return
	
Label_5343:
	Barter(var_32_object); // 0x14df Func
}


func_4833(var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0); // 0x12e1 PushV
	GetEyesHeight(var_24_float); // 0x12e2 ObjFunc
	var_25_cvector = CVector(0.0, 0.0, 0.0); // 0x12e4 MovV
	var_26_float = GetByIndex(var_25_cvector, 1); // 0x12e5 PushE
	var_26_float = var_24_float; // 0x12e6 Mov
	SetByIndex(var_25_cvector, 1) = var_26_float; // 0x12e7 PopE
	var_27_string = "head"; // 0x12e8 PushS
	LookAsync(var_21_object, var_27_string, var_25_cvector); // 0x12e9 Func
	return 4; // 0x12eb Return
}


func_5346(var_116_int, var_117_int)
{
	var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_bool = 0; // 0x14e2 PushV
	var_131_bool = var_116_int > var_117_int; // 0x14e3 GT
	if(var_131_bool == 0) goto Label_5353; // 0x14e4 JumpB
	var_132_string = "GenerateMoney: iMin > iMax"; // 0x14e5 PushS
	Trace(var_132_string); // 0x14e6 Func
	return 4; // 0x14e8 Return
	
Label_5353:
	var_129_int = 0; // 0x14e9 MovI
	var_133_bool = var_116_int != var_117_int; // 0x14ea Neq
	if(var_133_bool == 0) goto Label_5360; // 0x14eb JumpB
	var_134_int = var_117_int - var_116_int; // 0x14ec Sub
	irand(var_129_int, var_134_int); // 0x14ed Func
	goto Label_5364; // 0x14ef Jump
	
Label_5364:
	var_129_int = var_129_int + var_116_int; // 0x14f4 Add2
	var_135_int = 0; // 0x14f5 PushI
	var_136_bool = var_129_int == var_135_int; // 0x14f6 Eq
	if(var_136_bool == 0) goto Label_5369; // 0x14f7 JumpB
	return 4; // 0x14f8 Return
	
Label_5369:
	var_137_int = 0; var_138_string = ""; // 0x14f9 PushV
	var_138_string = "Money"; // 0x14fa MovS
	func_5593(var_137_int, var_138_string); // 0x14fb NEW_2
	var_141_int = 0; // 0x14fd PushI
	AddItem(var_130_bool, var_137_int, var_141_int, var_129_int); // 0x14fe Func
	return 4; // 0x1500 Return
	
Label_5360:
	var_142_int = 0; // 0x14f0 PushI
	var_143_bool = var_116_int == var_142_int; // 0x14f1 Eq
	if(var_143_bool == 0) goto Label_5364; // 0x14f2 JumpB
	return 4; // 0x14f3 Return
}


func_4844()
{
	var_20_bool = 0; // 0x12ec PushV
	func_6205(var_20_bool); // 0x12ed NEW_2
	if(var_20_bool == 0) goto Label_4850; // 0x12ef JumpB
	lshStopSpeech(); // 0x12f0 Func
	
Label_4850:
	return 0; // 0x12f2 Return
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
	func_4851(var_43_string); // 0xafc NEW_2
	var_72_string = "all"; // 0xafe PushS
	PlayAnimation(var_72_string, var_42_string); // 0xaff Func
	WaitForAnimEnd(); // 0xb01 Func
	var_73_string = "all"; // 0xb03 PushS
	LockAnimationEnd(var_73_string, var_42_string); // 0xb04 Func
	RemoveEnvelope(); // 0xb06 Func
	return 0; // 0xb08 Return
}


func_4851(var_43_string)
{
	var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); // 0x12f3 PushV
	IsExisting3DSound(var_52_bool, var_43_string); // 0x12f4 Func
	var_60_bool = var_52_bool == 0; // 0x12f6 Not
	if(var_60_bool == 0) goto Label_4876; // 0x12f7 JumpB
	var_53_int = 0; // 0x12f8 MovI
	
Label_4857:
	var_61_int = 1; // 0x12f9 PushI
	var_62_int = var_53_int + var_61_int; // 0x12fa Add
	var_63_int = var_43_string + var_62_int; // 0x12fb Add
	IsExisting3DSound(var_54_bool, var_63_int); // 0x12fc Func
	var_64_bool = var_54_bool == 0; // 0x12fe Not
	if(var_64_bool == 0) goto Label_4865; // 0x12ff JumpB
	goto Label_4868; // 0x1300 Jump
	
Label_4868:
	var_65_bool = var_53_int == 0; // 0x1304 Not
	if(var_65_bool == 0) goto Label_4871; // 0x1305 JumpB
	return 16; // 0x1306 Return
	
Label_4871:
	irand(var_55_int, var_53_int); // 0x1307 Func
	var_66_int = 1; // 0x1309 PushI
	var_67_int = var_55_int + var_66_int; // 0x130a Add
	var_43_string = var_43_string + var_67_int; // 0x130b Add2
	
Label_4876:
	Is3DSoundLoaded(var_56_bool, var_43_string); // 0x130c Func
	var_68_bool = var_56_bool; // 0x130e Push
	if(var_68_bool == 0) goto Label_4891; // 0x130f JumpB
	GetEyesHeight(var_57_float); // 0x1310 Func
	GetDirection(var_58_cvector); // 0x1312 Func
	var_69_int = 50; // 0x1314 PushI
	var_59_cvector = var_58_cvector * var_69_int; // 0x1315 Mult2
	var_70_float = GetByIndex(var_59_cvector, 1); // 0x1316 PushE
	var_70_float = var_70_float + var_57_float; // 0x1317 Add2
	SetByIndex(var_59_cvector, 1) = var_70_float; // 0x1318 PopE
	PlayGlobalSound(var_43_string, var_59_cvector); // 0x1319 Func
	
Label_4891:
	return 16; // 0x131b Return
	
Label_4865:
	var_71_int = 1; // 0x1301 PushI
	var_53_int = var_53_int + var_71_int; // 0x1302 Add2
	goto Label_4857; // 0x1303 Jump
}


func_4340(var_0_object, var_1_object, var_25_int)
{
	var_26_int = 0; // 0x10f5 PushI
	var_27_bool = var_25_int != var_26_int; // 0x10f6 Neq
	if(var_27_bool == 0) goto Label_4345; // 0x10f7 JumpB
	return 0; // 0x10f8 Return
	
Label_4345:
	var_28_bool = 0; var_29_object = Obj(); // 0x10f9 PushV
	var_29_object = var_1_object; // 0x10fa MovT
	func_4378(var_28_bool, var_29_object); // 0x10fb NEW_2
	var_64_bool = var_28_bool == 0; // 0x10fd Not
	if(var_64_bool == 0) goto Label_4352; // 0x10fe JumpB
	var_0_object = 1; // 0x10ff TMovB
	
Label_4352:
	var_65_int = 0; // 0x1100 PushI
	KillTimer(var_65_int); // 0x1101 Func
	Stop(); // 0x1103 Func
	return 0; // 0x1105 Return
}


func_5377(var_230_string)
{
	var_231_object = Obj(); var_232_int = 0; var_233_bool = 0; var_234_object = Obj(); var_235_int = 0; var_236_bool = 0; // 0x1501 PushV
	CreateInvItem(var_234_object); // 0x1502 Func
	SetItemName(var_230_string); // 0x1504 ObjFunc
	var_237_string = "Organ"; // 0x1506 PushS
	var_238_int = 1; // 0x1507 PushI
	SetProperty(var_237_string, var_238_int); // 0x1508 ObjFunc
	GetItemID(var_235_int); // 0x150a ObjFunc
	var_239_int = 0; // 0x150c PushI
	var_240_int = 1; // 0x150d PushI
	AddItem(var_236_bool, var_234_object, var_239_int, var_240_int); // 0x150e Func
	return 6; // 0x1510 Return
}


func_4362(var_0_object)
{
	var_0_object = 1; // 0x110a TMovB
	var_21_int = 0; // 0x110b PushI
	KillTimer(var_21_int); // 0x110c Func
	Stop(); // 0x110e Func
	return 0; // 0x1110 Return
}


func_5904(var_84_int, var_85_object)
{
	var_87_int = 0; var_88_object = Obj(); // 0x1711 PushV
	var_88_object = var_85_object; // 0x1712 Mov
	func_5811(var_87_int, var_88_object); // 0x1713 NEW_2
	var_84_int = var_87_int; // 0x1714 Mov
	return 0; // 0x1716 Return
}


func_5394()
{
	var_224_int = 0; // 0x1512 PushV
	func_5258(var_224_int); // 0x1513 NEW_2
	var_228_int = 1; // 0x1515 PushI
	var_229_bool = var_224_int != var_228_int; // 0x1516 Neq
	if(var_229_bool == 0) goto Label_5401; // 0x1517 JumpB
	return 0; // 0x1518 Return
	
Label_5401:
	var_230_string = ""; // 0x1519 PushV
	var_230_string = "liver"; // 0x151a MovS
	func_5377(var_230_string); // 0x151b NEW_2
	var_241_string = ""; // 0x151d PushV
	var_241_string = "kidney"; // 0x151e MovS
	func_5377(var_241_string); // 0x151f NEW_2
	var_242_string = ""; // 0x1521 PushV
	var_242_string = "heart"; // 0x1522 MovS
	func_5377(var_242_string); // 0x1523 NEW_2
	var_243_string = ""; // 0x1525 PushV
	var_243_string = "blood"; // 0x1526 MovS
	func_5377(var_243_string); // 0x1527 NEW_2
	return 0; // 0x1529 Return
}


func_5911(var_121_object)
{
	var_122_object = Obj(); // 0x1718 PushV
	var_122_object = var_121_object; // 0x1719 Mov
	func_5821(var_122_object); // 0x171a NEW_2
	return 0; // 0x171c Return
}


func_4378(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj(); // 0x111b PushV
	var_31_object = var_29_object; // 0x111c Mov
	func_4549(var_30_bool, var_31_object); // 0x111d NEW_2
	var_28_bool = var_30_bool; // 0x111e Mov
	return 0; // 0x1120 Return
}


func_4892(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x131c PushV
	self(var_107_object); // 0x131d Func
	var_105_object = var_107_object; // 0x131f Mov
	return 2; // 0x1320 Return
}


func_5917(var_26_bool, var_27_object, var_28_object, var_29_float, var_30_bool)
{
	var_31_bool = 0; var_32_bool = 0; // 0x171d PushV
	var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; // 0x171e PushV
	var_34_object = var_28_object; // 0x171f Mov
	var_35_bool = !var_30_bool; // 0x1720 Not2
	func_5829(var_33_bool, var_34_object, var_35_bool); // 0x1721 NEW_2
	var_71_bool = var_33_bool == 0; // 0x1723 Not
	if(var_71_bool == 0) goto Label_5927; // 0x1724 JumpB
	var_26_bool = 0; // 0x1725 MovB
	return 2; // 0x1726 Return
	
Label_5927:
	CanSee(var_32_bool, var_27_object); // 0x1727 Func
	var_72_bool = 0; // 0x1729 PushV
	var_72_bool = 1; // 0x172a MovB
	var_73_bool = var_32_bool; // 0x172b Push
	if(var_73_bool == 0) goto Label_5941; // 0x172c JumpB
	var_74_float = 0; var_75_object = Obj(); // 0x172d PushV
	var_75_object = var_27_object; // 0x172e Mov
	func_4410(var_75_object); // 0x172f NEW_2
	var_82_float = var_29_float * var_29_float; // 0x1731 Mult
	var_83_bool = var_74_float <= var_82_float; // 0x1732 LE
	if(var_83_bool == 0) goto Label_5941; // 0x1733 JumpB
	var_72_bool = 0; // 0x1734 MovB
	
Label_5941:
	if(var_72_bool == 0) goto Label_5944; // 0x1735 JumpB
	var_26_bool = 1; // 0x1736 MovB
	return 2; // 0x1737 Return
	
Label_5944:
	var_26_bool = 0; // 0x1738 MovB
	return 2; // 0x1739 Return
}


func_2846()
{
	var_19_bool = 0; // 0xb1e PushV
	func_4710(var_19_bool); // 0xb1f NEW_2
	var_22_bool = var_19_bool == 0; // 0xb21 Not
	if(var_22_bool == 0) goto Label_2854; // 0xb22 JumpB
	func_6006(); // 0xb24 NEW_2
	
Label_2854:
	return 0; // 0xb26 Return
}


func_4385(var_248_string)
{
	var_248_string = "walk"; // 0x1121 MovS
	return 0; // 0x1122 Return
}


func_4898(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x1322 PushV
	var_59_int = var_50_cvector | var_50_cvector; // 0x1323 Or
	var_58_float = sqrt(var_59_int); // 0x1324 Sqrt2
	var_60_float = 0.0; // 0x1325 PushF
	var_61_bool = var_58_float < var_60_float; // 0x1326 LT
	if(var_61_bool == 0) goto Label_4906; // 0x1327 JumpB
	var_49_cvector = CVector(0.0, 0.0, 0.0); // 0x1328 MovV
	return 2; // 0x1329 Return
	
Label_4906:
	var_49_cvector = var_50_cvector / var_50_cvector; // 0x132a Div2
	return 2; // 0x132b Return
}


func_4387(var_249_string)
{
	var_249_string = "run"; // 0x1123 MovS
	return 0; // 0x1124 Return
}


func_3364()
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_float = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_bool = 0; // 0xd24 PushV
	WaitForAnimEnd(); // 0xd25 Func
	var_64_bool = 0; // 0xd27 PushV
	func_4710(var_64_bool); // 0xd28 NEW_2
	var_65_bool = var_64_bool == 0; // 0xd2a Not
	if(var_65_bool == 0) goto Label_3373; // 0xd2b JumpB
	return 14; // 0xd2c Return
	
Label_3373:
	var_66_int = 0; // 0xd2d PushV
	func_5778(var_66_int); // 0xd2e NEW_2
	var_57_int = var_66_int; // 0xd2f Mov
	var_58_int = 0; // 0xd31 MovI
	
Label_3378:
	var_79_bool = 0; // 0xd32 PushV
	var_79_bool = 0; // 0xd33 MovB
	var_80_int = 5; // 0xd34 PushI
	var_81_bool = var_58_int < var_80_int; // 0xd35 LT
	if(var_81_bool == 0) goto Label_3388; // 0xd36 JumpB
	var_82_bool = 0; // 0xd37 PushV
	func_4710(var_82_bool); // 0xd38 NEW_2
	if(var_82_bool == 0) goto Label_3388; // 0xd3a JumpB
	var_79_bool = 1; // 0xd3b MovB
	
Label_3388:
	if(var_79_bool == 0) goto Label_3440; // 0xd3c JumpB
	var_83_int = 3; // 0xd3d PushI
	irand(var_59_int, var_83_int); // 0xd3e Func
	var_84_int = 0; // 0xd40 PushI
	var_85_bool = var_59_int == var_84_int; // 0xd41 Eq
	if(var_85_bool == 0) goto Label_3412; // 0xd42 JumpB
	var_86_int = var_57_int; // 0xd43 Push
	if(var_86_int == 0) goto Label_3411; // 0xd44 JumpB
	irand(var_60_int, var_57_int); // 0xd45 Func
	var_87_string = "all"; // 0xd47 PushS
	var_88_string = ""; var_89_int = 0; // 0xd48 PushV
	var_89_int = var_60_int; // 0xd49 Mov
	func_5771(var_88_string, var_89_int); // 0xd4a NEW_2
	PlayAnimation(var_87_string, var_88_string); // 0xd4c Func
	WaitForAnimEnd(var_61_bool); // 0xd4e Func
	var_90_bool = var_61_bool == 0; // 0xd50 Not
	if(var_90_bool == 0) goto Label_3411; // 0xd51 JumpB
	goto Label_3440; // 0xd52 Jump
	
Label_3440:
	ResetAAS(); // 0xd70 Func
	return 14; // 0xd72 Return
	
Label_3411:
	goto Label_3429; // 0xd53 Jump
	
Label_3429:
	var_91_bool = 0; // 0xd65 PushV
	func_3443(var_91_bool); // 0xd66 NEW_2
	var_92_bool = var_91_bool == 0; // 0xd68 Not
	if(var_92_bool == 0) goto Label_3435; // 0xd69 JumpB
	goto Label_3440; // 0xd6a Jump
	
Label_3435:
	ResetAAS(); // 0xd6b Func
	var_93_int = 1; // 0xd6d PushI
	var_58_int = var_58_int + var_93_int; // 0xd6e Add2
	goto Label_3378; // 0xd6f Jump
	
Label_3412:
	var_94_int = 1; // 0xd54 PushI
	var_95_bool = var_59_int == var_94_int; // 0xd55 Eq
	if(var_95_bool == 0) goto Label_3426; // 0xd56 JumpB
	var_96_int = 4; // 0xd57 PushI
	rand(var_62_float, var_96_int); // 0xd58 Func
	var_97_int = 1; // 0xd5a PushI
	var_98_int = var_62_float + var_97_int; // 0xd5b Add
	Sleep(var_98_int, var_63_bool); // 0xd5c Func
	var_99_bool = var_63_bool == 0; // 0xd5e Not
	if(var_99_bool == 0) goto Label_3425; // 0xd5f JumpB
	goto Label_3440; // 0xd60 Jump
	
Label_3425:
	goto Label_3429; // 0xd61 Jump
	
Label_3426:
	var_100_int = var_58_int; // 0xd62 Push
	if(var_100_int == 0) goto Label_3429; // 0xd63 JumpB
	goto Label_3440; // 0xd64 Jump
}


func_4389(var_476_string, var_477_int)
{
	var_478_int = 2; // 0x1126 PushI
	var_479_bool = var_477_int == var_478_int; // 0x1127 Eq
	if(var_479_bool == 0) goto Label_4396; // 0x1128 JumpB
	var_476_string = "fire"; // 0x1129 MovS
	return 0; // 0x112a Return
	
Label_4396:
	var_480_int = 1; // 0x112c PushI
	var_481_bool = var_477_int == var_480_int; // 0x112d Eq
	if(var_481_bool == 0) goto Label_4401; // 0x112e JumpB
	var_476_string = "bullet"; // 0x112f MovS
	return 0; // 0x1130 Return
	
Label_4401:
	var_476_string = "phys"; // 0x1131 MovS
	return 0; // 0x1132 Return
}


func_5418(var_110_bool)
{
	var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_bool = 0; // 0x152a PushV
	var_115_bool = var_110_bool; // 0x152b Push
	if(var_115_bool == 0) goto Label_5507; // 0x152c JumpB
	var_116_int = 0; var_117_int = 0; // 0x152d PushV
	var_116_int = 0; // 0x152e MovI
	var_118_int = 100; // 0x152f PushI
	var_119_int = 0; // 0x1530 PushV
	func_4954(var_119_int); // 0x1531 NEW_2
	var_125_int = 100; // 0x1533 PushI
	var_126_float = var_119_int * var_125_int; // 0x1534 Mult
	var_117_int = var_118_int + var_126_float; // 0x1535 Add2
	func_5346(var_116_int, var_117_int); // 0x1536 NEW_2
	var_144_int = 8; // 0x1538 PushI
	irand(var_113_int, var_144_int); // 0x1539 Func
	var_145_int = 0; // 0x153b PushI
	var_146_bool = var_113_int == var_145_int; // 0x153c Eq
	if(var_146_bool == 0) goto Label_5447; // 0x153d JumpB
	var_147_int = 0; var_148_string = ""; // 0x153e PushV
	var_148_string = "lemon"; // 0x153f MovS
	func_5593(var_147_int, var_148_string); // 0x1540 NEW_2
	var_149_int = 0; // 0x1542 PushI
	var_150_int = 1; // 0x1543 PushI
	AddItem(var_114_bool, var_147_int, var_149_int, var_150_int); // 0x1544 Func
	goto Label_5506; // 0x1546 Jump
	
Label_5506:
	goto Label_5592; // 0x1582 Jump
	
Label_5592:
	return 4; // 0x15d8 Return
	
Label_5447:
	var_151_int = 1; // 0x1547 PushI
	var_152_bool = var_113_int == var_151_int; // 0x1548 Eq
	if(var_152_bool == 0) goto Label_5459; // 0x1549 JumpB
	var_153_int = 0; var_154_string = ""; // 0x154a PushV
	var_154_string = "rusk"; // 0x154b MovS
	func_5593(var_153_int, var_154_string); // 0x154c NEW_2
	var_155_int = 0; // 0x154e PushI
	var_156_int = 1; // 0x154f PushI
	AddItem(var_114_bool, var_153_int, var_155_int, var_156_int); // 0x1550 Func
	goto Label_5506; // 0x1552 Jump
	
Label_5459:
	var_157_int = 2; // 0x1553 PushI
	var_158_bool = var_113_int == var_157_int; // 0x1554 Eq
	if(var_158_bool == 0) goto Label_5471; // 0x1555 JumpB
	var_159_int = 0; var_160_string = ""; // 0x1556 PushV
	var_160_string = "hook"; // 0x1557 MovS
	func_5593(var_159_int, var_160_string); // 0x1558 NEW_2
	var_161_int = 0; // 0x155a PushI
	var_162_int = 1; // 0x155b PushI
	AddItem(var_114_bool, var_159_int, var_161_int, var_162_int); // 0x155c Func
	goto Label_5506; // 0x155e Jump
	
Label_5471:
	var_163_int = 4; // 0x155f PushI
	var_164_bool = var_113_int == var_163_int; // 0x1560 Eq
	if(var_164_bool == 0) goto Label_5483; // 0x1561 JumpB
	var_165_int = 0; var_166_string = ""; // 0x1562 PushV
	var_166_string = "syringe"; // 0x1563 MovS
	func_5593(var_165_int, var_166_string); // 0x1564 NEW_2
	var_167_int = 0; // 0x1566 PushI
	var_168_int = 1; // 0x1567 PushI
	AddItem(var_114_bool, var_165_int, var_167_int, var_168_int); // 0x1568 Func
	goto Label_5506; // 0x156a Jump
	
Label_5483:
	var_169_int = 5; // 0x156b PushI
	var_170_bool = var_113_int == var_169_int; // 0x156c Eq
	if(var_170_bool == 0) goto Label_5495; // 0x156d JumpB
	var_171_int = 0; var_172_string = ""; // 0x156e PushV
	var_172_string = "watch"; // 0x156f MovS
	func_5593(var_171_int, var_172_string); // 0x1570 NEW_2
	var_173_int = 0; // 0x1572 PushI
	var_174_int = 1; // 0x1573 PushI
	AddItem(var_114_bool, var_171_int, var_173_int, var_174_int); // 0x1574 Func
	goto Label_5506; // 0x1576 Jump
	
Label_5495:
	var_175_int = 6; // 0x1577 PushI
	var_176_bool = var_113_int == var_175_int; // 0x1578 Eq
	if(var_176_bool == 0) goto Label_5506; // 0x1579 JumpB
	var_177_int = 0; var_178_string = ""; // 0x157a PushV
	var_178_string = "razor"; // 0x157b MovS
	func_5593(var_177_int, var_178_string); // 0x157c NEW_2
	var_179_int = 0; // 0x157e PushI
	var_180_int = 1; // 0x157f PushI
	AddItem(var_114_bool, var_177_int, var_179_int, var_180_int); // 0x1580 Func
	
Label_5507:
	var_181_int = 0; var_182_int = 0; // 0x1583 PushV
	var_181_int = 0; // 0x1584 MovI
	var_183_int = 50; // 0x1585 PushI
	var_184_int = 0; // 0x1586 PushV
	func_4954(var_184_int); // 0x1587 NEW_2
	var_185_int = 50; // 0x1589 PushI
	var_186_float = var_184_int * var_185_int; // 0x158a Mult
	var_182_int = var_183_int + var_186_float; // 0x158b Add2
	func_5346(var_181_int, var_182_int); // 0x158c NEW_2
	var_187_int = 7; // 0x158e PushI
	irand(var_113_int, var_187_int); // 0x158f Func
	var_188_int = 0; // 0x1591 PushI
	var_189_bool = var_113_int == var_188_int; // 0x1592 Eq
	if(var_189_bool == 0) goto Label_5533; // 0x1593 JumpB
	var_190_int = 0; var_191_string = ""; // 0x1594 PushV
	var_191_string = "beads"; // 0x1595 MovS
	func_5593(var_190_int, var_191_string); // 0x1596 NEW_2
	var_192_int = 0; // 0x1598 PushI
	var_193_int = 1; // 0x1599 PushI
	AddItem(var_114_bool, var_190_int, var_192_int, var_193_int); // 0x159a Func
	goto Label_5592; // 0x159c Jump
	
Label_5533:
	var_194_int = 1; // 0x159d PushI
	var_195_bool = var_113_int == var_194_int; // 0x159e Eq
	if(var_195_bool == 0) goto Label_5545; // 0x159f JumpB
	var_196_int = 0; var_197_string = ""; // 0x15a0 PushV
	var_197_string = "bracelet"; // 0x15a1 MovS
	func_5593(var_196_int, var_197_string); // 0x15a2 NEW_2
	var_198_int = 0; // 0x15a4 PushI
	var_199_int = 1; // 0x15a5 PushI
	AddItem(var_114_bool, var_196_int, var_198_int, var_199_int); // 0x15a6 Func
	goto Label_5592; // 0x15a8 Jump
	
Label_5545:
	var_200_int = 2; // 0x15a9 PushI
	var_201_bool = var_113_int == var_200_int; // 0x15aa Eq
	if(var_201_bool == 0) goto Label_5557; // 0x15ab JumpB
	var_202_int = 0; var_203_string = ""; // 0x15ac PushV
	var_203_string = "ear_ring"; // 0x15ad MovS
	func_5593(var_202_int, var_203_string); // 0x15ae NEW_2
	var_204_int = 0; // 0x15b0 PushI
	var_205_int = 1; // 0x15b1 PushI
	AddItem(var_114_bool, var_202_int, var_204_int, var_205_int); // 0x15b2 Func
	goto Label_5592; // 0x15b4 Jump
	
Label_5557:
	var_206_int = 3; // 0x15b5 PushI
	var_207_bool = var_113_int == var_206_int; // 0x15b6 Eq
	if(var_207_bool == 0) goto Label_5569; // 0x15b7 JumpB
	var_208_int = 0; var_209_string = ""; // 0x15b8 PushV
	var_209_string = "gold_ring"; // 0x15b9 MovS
	func_5593(var_208_int, var_209_string); // 0x15ba NEW_2
	var_210_int = 0; // 0x15bc PushI
	var_211_int = 1; // 0x15bd PushI
	AddItem(var_114_bool, var_208_int, var_210_int, var_211_int); // 0x15be Func
	goto Label_5592; // 0x15c0 Jump
	
Label_5569:
	var_212_int = 4; // 0x15c1 PushI
	var_213_bool = var_113_int == var_212_int; // 0x15c2 Eq
	if(var_213_bool == 0) goto Label_5581; // 0x15c3 JumpB
	var_214_int = 0; var_215_string = ""; // 0x15c4 PushV
	var_215_string = "silver_ring"; // 0x15c5 MovS
	func_5593(var_214_int, var_215_string); // 0x15c6 NEW_2
	var_216_int = 0; // 0x15c8 PushI
	var_217_int = 1; // 0x15c9 PushI
	AddItem(var_114_bool, var_214_int, var_216_int, var_217_int); // 0x15ca Func
	goto Label_5592; // 0x15cc Jump
	
Label_5581:
	var_218_int = 5; // 0x15cd PushI
	var_219_bool = var_113_int == var_218_int; // 0x15ce Eq
	if(var_219_bool == 0) goto Label_5592; // 0x15cf JumpB
	var_220_int = 0; var_221_string = ""; // 0x15d0 PushV
	var_221_string = "flower"; // 0x15d1 MovS
	func_5593(var_220_int, var_221_string); // 0x15d2 NEW_2
	var_222_int = 0; // 0x15d4 PushI
	var_223_int = 1; // 0x15d5 PushI
	AddItem(var_114_bool, var_220_int, var_222_int, var_223_int); // 0x15d6 Func
}


func_4908(var_486_float, var_487_float, var_488_float)
{
	var_491_bool = var_487_float < var_488_float; // 0x132d LT
	if(var_491_bool == 0) goto Label_4913; // 0x132e JumpB
	var_486_float = var_487_float; // 0x132f Mov
	goto Label_4914; // 0x1330 Jump
	
Label_4914:
	return 0; // 0x1332 Return
	
Label_4913:
	var_486_float = var_488_float; // 0x1331 Mov
}


func_4403(var_51_cvector)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x1133 PushV
	GetPosition(var_55_cvector); // 0x1134 Func
	GetPosition(var_56_cvector); // 0x1136 ObjFunc
	var_51_cvector = var_56_cvector - var_55_cvector; // 0x1138 Sub2
	return 4; // 0x1139 Return
}


func_4915(var_496_float, var_497_float, var_498_float, var_499_float)
{
	var_500_bool = var_497_float < var_498_float; // 0x1334 LT
	if(var_500_bool == 0) goto Label_4920; // 0x1335 JumpB
	var_496_float = var_498_float; // 0x1336 Mov
	return 0; // 0x1337 Return
	
Label_4920:
	var_501_bool = var_497_float > var_499_float; // 0x1338 GT
	if(var_501_bool == 0) goto Label_4924; // 0x1339 JumpB
	var_496_float = var_499_float; // 0x133a Mov
	return 0; // 0x133b Return
	
Label_4924:
	var_496_float = var_497_float; // 0x133c Mov
	return 0; // 0x133d Return
}


func_5946(var_20_int)
{
	var_20_int = 0; // 0x173b MovI
	return 0; // 0x173c Return
}


func_4410(var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x113a PushV
	GetPosition(var_79_cvector); // 0x113b Func
	GetPosition(var_80_cvector); // 0x113d ObjFunc
	var_81_cvector = var_80_cvector - var_79_cvector; // 0x113f Sub2
	var_74_float = var_81_cvector | var_81_cvector; // 0x1140 Or2
	return 6; // 0x1141 Return
}


func_5949()
{
	return 0; // 0x173e Return
}


func_4926(var_503_object)
{
	var_504_object = Obj(); var_505_object = Obj(); // 0x133e PushV
	CreateObjectVector(var_505_object); // 0x133f Func
	var_503_object = var_505_object; // 0x1341 Mov
	return 2; // 0x1342 Return
}


func_5951(var_47_int, var_48_string, var_49_object)
{
	var_50_string = "killme"; // 0x1740 PushS
	var_51_bool = var_48_string == var_50_string; // 0x1741 Eq
	if(var_51_bool == 0) goto Label_5961; // 0x1742 JumpB
	var_52_int = 0; var_53_object = Obj(); // 0x1743 PushV
	var_53_object = var_49_object; // 0x1744 Mov
	func_5973(var_52_int, var_53_object); // 0x1745 NEW_2
	var_47_int = var_52_int; // 0x1746 Mov
	return 0; // 0x1748 Return
	
Label_5961:
	var_47_int = 0; // 0x1749 MovI
	return 0; // 0x174a Return
}


func_3904(var_539_bool, var_540_float)
{
	var_541_float = 0; var_542_bool = 0; var_543_float = 0; var_544_bool = 0; // 0xf40 PushV
	rand(var_543_float); // 0xf41 Func
	var_545_bool = var_543_float < var_540_float; // 0xf43 LT
	if(var_545_bool == 0) goto Label_3924; // 0xf44 JumpB
	
Label_3909:
	IsAnimationPlaying(var_544_bool); // 0xf45 Func
	var_546_bool = var_544_bool == 0; // 0xf47 Not
	if(var_546_bool == 0) goto Label_3914; // 0xf48 JumpB
	goto Label_3923; // 0xf49 Jump
	
Label_3923:
	goto Label_3929; // 0xf53 Jump
	
Label_3929:
	var_539_bool = 0; // 0xf59 MovB
	return 4; // 0xf5a Return
	
Label_3914:
	var_547_bool = 0; // 0xf4a PushV
	func_4002(var_547_bool); // 0xf4b NEW_2
	if(var_547_bool == 0) goto Label_3920; // 0xf4d JumpB
	var_539_bool = 1; // 0xf4e MovB
	return 4; // 0xf4f Return
	
Label_3920:
	sync(); // 0xf50 Func
	goto Label_3909; // 0xf52 Jump
	
Label_3924:
	WaitForAnimEnd(); // 0xf54 Func
	func_4106(var_544_bool); // 0xf57 NEW_2
}


func_4418(var_101_bool, var_102_object)
{
	var_103_bool = 0; var_104_bool = 0; // 0x1142 PushV
	IsPlayerActor(var_102_object, var_104_bool); // 0x1143 Func
	var_101_bool = var_104_bool; // 0x1145 Mov
	return 2; // 0x1146 Return
}


func_4932(var_133_int, var_134_string)
{
	var_135_int = 0; var_136_int = 0; // 0x1344 PushV
	GetVariable(var_134_string, var_136_int); // 0x1345 Func
	var_133_int = var_136_int; // 0x1347 Mov
	return 2; // 0x1348 Return
}


func_4423(var_52_bool, var_53_object, var_54_string)
{
	var_55_bool = 0; var_56_bool = 0; // 0x1147 PushV
	var_57_string = "HasProperty"; // 0x1148 PushS
	var_58_int = 2; // 0x1149 PushI
	var_59_bool = IsFuncExist(var_53_object, var_57_string, var_58_int); // 0x114a FuncExist
	var_60_bool = var_59_bool == 0; // 0x114b Not
	if(var_60_bool == 0) goto Label_4431; // 0x114c JumpB
	var_52_bool = 0; // 0x114d MovB
	return 2; // 0x114e Return
	
Label_4431:
	HasProperty(var_54_string, var_56_bool); // 0x114f ObjFunc
	var_52_bool = var_56_bool; // 0x1151 Mov
	return 2; // 0x1152 Return
}


func_4937(var_504_float)
{
	var_505_object = Obj(); var_506_object = Obj(); // 0x1349 PushV
	CreateFloatVector(var_506_object); // 0x134a Func
	add(var_504_float); // 0x134c ObjFunc
	var_507_int = 0; // 0x134e PushI
	var_508_bool = var_504_float < var_507_int; // 0x134f LT
	if(var_508_bool == 0) goto Label_4949; // 0x1350 JumpB
	var_509_float = 0.7; // 0x1351 PushF
	var_510_int = 500; // 0x1352 PushI
	RumblePlay(var_509_float, var_510_int); // 0x1353 Func
	
Label_4949:
	var_511_int = 15; // 0x1355 PushI
	SendWorldWndMessage(var_511_int, var_506_object); // 0x1356 Func
	return 2; // 0x1358 Return
}


func_5963(var_95_string, var_96_object)
{
	var_97_string = "killme"; // 0x174c PushS
	var_98_bool = var_95_string == var_97_string; // 0x174d Eq
	if(var_98_bool == 0) goto Label_5972; // 0x174e JumpB
	var_99_object = Obj(); // 0x174f PushV
	var_99_object = var_96_object; // 0x1750 Mov
	func_5991(var_99_object); // 0x1751 NEW_2
	return 0; // 0x1753 Return
	
Label_5972:
	return 0; // 0x1754 Return
}


func_4435(var_448_float, var_449_object, var_450_float, var_451_int)
{
	var_455_int = 0; var_456_string = ""; var_457_int = 0; var_458_float = 0; var_459_float = 0; var_460_float = 0; var_461_int = 0; var_462_string = ""; var_463_int = 0; var_464_float = 0; var_465_float = 0; var_466_float = 0; // 0x1153 PushV
	var_467_bool = 0; var_468_object = Obj(); var_469_string = ""; // 0x1154 PushV
	var_468_object = var_449_object; // 0x1155 Mov
	var_469_string = "health"; // 0x1156 MovS
	func_4423(var_467_bool, var_468_object, var_469_string); // 0x1157 NEW_2
	var_470_bool = var_467_bool == 0; // 0x1159 Not
	if(var_470_bool == 0) goto Label_4445; // 0x115a JumpB
	var_448_float = 0.0; // 0x115b MovF
	return 12; // 0x115c Return
	
Label_4445:
	var_471_bool = 0; var_472_object = Obj(); var_473_string = ""; // 0x115d PushV
	var_472_object = var_449_object; // 0x115e Mov
	var_473_string = "armor"; // 0x115f MovS
	func_4423(var_471_bool, var_472_object, var_473_string); // 0x1160 NEW_2
	var_474_bool = var_471_bool == 0; // 0x1162 Not
	if(var_474_bool == 0) goto Label_4454; // 0x1163 JumpB
	var_461_int = 0; // 0x1164 MovI
	goto Label_4457; // 0x1165 Jump
	
Label_4457:
	var_475_string = "armor_"; // 0x1169 PushS
	var_476_string = ""; var_477_int = 0; // 0x116a PushV
	var_477_int = var_451_int; // 0x116b Mov
	func_4389(var_476_string, var_477_int); // 0x116c NEW_2
	var_462_string = var_475_string + var_476_string; // 0x116e Add2
	var_482_bool = 0; var_483_object = Obj(); var_484_string = ""; // 0x116f PushV
	var_483_object = var_449_object; // 0x1170 Mov
	var_484_string = var_462_string; // 0x1171 Mov
	func_4423(var_482_bool, var_483_object, var_484_string); // 0x1172 NEW_2
	var_485_bool = var_482_bool == 0; // 0x1174 Not
	if(var_485_bool == 0) goto Label_4472; // 0x1175 JumpB
	var_463_int = 0; // 0x1176 MovI
	goto Label_4474; // 0x1177 Jump
	
Label_4474:
	var_486_float = 0; var_487_float = 0; var_488_float = 0; // 0x117a PushV
	var_489_int = var_461_int + var_463_int; // 0x117b Add
	var_490_float = 100.0; // 0x117c PushF
	var_487_float = var_489_int / var_489_int; // 0x117d Div2
	var_488_float = 1; // 0x117e MovI
	func_4908(var_486_float, var_487_float, var_488_float); // 0x117f NEW_2
	var_464_float = var_486_float; // 0x1180 Mov
	var_492_string = "health"; // 0x1182 PushS
	GetProperty(var_492_string, var_465_float); // 0x1183 ObjFunc
	var_493_int = 1; // 0x1185 PushI
	var_494_int = var_493_int - var_464_float; // 0x1186 Sub
	var_466_float = var_450_float * var_494_int; // 0x1187 Mult2
	var_495_string = "health"; // 0x1188 PushS
	var_496_float = 0; var_497_float = 0; var_498_float = 0; var_499_float = 0; // 0x1189 PushV
	var_497_float = var_465_float - var_466_float; // 0x118a Sub2
	var_498_float = 0; // 0x118b MovI
	var_499_float = 1; // 0x118c MovI
	func_4915(var_496_float, var_497_float, var_498_float, var_499_float); // 0x118d NEW_2
	SetProperty(var_495_string, var_496_float); // 0x118f ObjFunc
	var_502_bool = 0; var_503_object = Obj(); // 0x1191 PushV
	var_503_object = var_449_object; // 0x1192 Mov
	func_4418(var_502_bool, var_503_object); // 0x1193 NEW_2
	if(var_502_bool == 0) goto Label_4506; // 0x1195 JumpB
	var_504_float = 0; // 0x1196 PushV
	var_504_float = -var_466_float; // 0x1197 Neg2
	func_4937(var_504_float); // 0x1198 NEW_2
	
Label_4506:
	var_448_float = var_466_float; // 0x119a Mov
	return 12; // 0x119b Return
	
Label_4472:
	GetProperty(var_462_string, var_463_int); // 0x1178 ObjFunc
	
Label_4454:
	var_512_string = "armor"; // 0x1166 PushS
	GetProperty(var_512_string, var_461_int); // 0x1167 ObjFunc
}


func_5973(var_52_int, var_53_object)
{
	var_54_bool = 0; var_55_object = Obj(); // 0x1756 PushV
	var_55_object = var_53_object; // 0x1757 Mov
	func_4549(var_54_bool, var_55_object); // 0x1758 NEW_2
	var_88_bool = var_54_bool == 0; // 0x175a Not
	if(var_88_bool == 0) goto Label_5982; // 0x175b JumpB
	var_52_int = 0; // 0x175c MovI
	return 0; // 0x175d Return
	
Label_5982:
	var_89_bool = 0; var_90_object = Obj(); // 0x175e PushV
	var_90_object = var_53_object; // 0x175f Mov
	func_6251(var_90_object); // 0x1760 NEW_2
	if(var_89_bool == 0) goto Label_5989; // 0x1762 JumpB
	var_52_int = 2; // 0x1763 MovI
	goto Label_5990; // 0x1764 Jump
	
Label_5990:
	return 0; // 0x1766 Return
	
Label_5989:
	var_52_int = 0; // 0x1765 MovI
}


func_4954(var_119_int)
{
	var_120_float = 0; var_121_float = 0; // 0x135a PushV
	GetGameTime(var_121_float); // 0x135b Func
	var_122_int = 1; // 0x135d PushI
	var_123_int = 0; // 0x135e PushV
	var_124_int = 24; // 0x135f PushI
	var_123_int = var_121_float / var_121_float; // 0x1360 Div2
	var_119_int = var_122_int + var_123_int; // 0x1361 Add2
	return 2; // 0x1362 Return
}


func_3931(var_0_object, var_336_bool, var_337_float)
{
	var_338_bool = 0; var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); var_341_cvector = CVector(0,0,0); var_342_float = 0; var_343_bool = 0; var_344_cvector = CVector(0,0,0); var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_float = 0; // 0xf5b PushV
	
Label_3932:
	IsAnimationPlaying(var_343_bool); // 0xf5c Func
	var_348_bool = var_343_bool == 0; // 0xf5e Not
	if(var_348_bool == 0) goto Label_3937; // 0xf5f JumpB
	goto Label_3969; // 0xf60 Jump
	
Label_3969:
	func_4106(var_347_float); // 0xf82 NEW_2
	var_336_bool = 0; // 0xf84 MovB
	return 10; // 0xf85 Return
	
Label_3937:
	var_349_bool = 0; // 0xf61 PushV
	func_4002(var_349_bool); // 0xf62 NEW_2
	if(var_349_bool == 0) goto Label_3943; // 0xf64 JumpB
	var_336_bool = 1; // 0xf65 MovB
	return 10; // 0xf66 Return
	
Label_3943:
	var_392_bool = 0; var_393_object = Obj(); // 0xf67 PushV
	var_393_object = var_0_object; // 0xf68 MovT
	func_4549(var_392_bool, var_393_object); // 0xf69 NEW_2
	var_394_bool = var_392_bool == 0; // 0xf6b Not
	if(var_394_bool == 0) goto Label_3951; // 0xf6c JumpB
	var_336_bool = 0; // 0xf6d MovB
	return 10; // 0xf6e Return
	
Label_3951:
	GetPFPosition(var_344_cvector); // 0xf6f TObjFunc
	GetPFPosition(var_345_cvector); // 0xf71 Func
	var_346_cvector = var_344_cvector - var_345_cvector; // 0xf73 Sub2
	var_347_float = var_346_cvector | var_346_cvector; // 0xf74 Or2
	var_395_float = var_337_float * var_337_float; // 0xf75 Mult
	var_396_bool = var_347_float < var_395_float; // 0xf76 LT
	if(var_396_bool == 0) goto Label_3966; // 0xf77 JumpB
	var_397_bool = 0; var_398_float = 0; // 0xf78 PushV
	var_398_float = var_337_float; // 0xf79 Mov
	func_3767(var_347_float, var_397_bool, var_398_float); // 0xf7a NEW_2
	var_336_bool = 1; // 0xf7c MovB
	return 10; // 0xf7d Return
	
Label_3966:
	sync(); // 0xf7e Func
	goto Label_3932; // 0xf80 Jump
}


func_4963(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x1363 PushV
	IsPlayerActor(var_20_object, var_22_bool); // 0x1364 Func
	var_23_bool = var_22_bool; // 0x1366 Push
	if(var_23_bool == 0) goto Label_4971; // 0x1367 JumpB
	var_24_string = "attack"; // 0x1368 PushS
	PlayGlobalMusic(var_24_string); // 0x1369 Func
	
Label_4971:
	return 2; // 0x136b Return
}


func_5991(var_99_object)
{
	var_100_object = Obj(); // 0x1768 PushV
	var_100_object = var_99_object; // 0x1769 Mov
	func_5821(var_100_object); // 0x176a NEW_2
	return 0; // 0x176c Return
}


func_4972()
{
	var_409_object = Obj(); var_410_object = Obj(); // 0x136c PushV
	GetScene(var_410_object); // 0x136d Func
	var_411_string = "battle"; // 0x136f PushS
	var_412_object = Obj(); // 0x1370 PushV
	func_4892(var_412_object); // 0x1371 NEW_2
	BroadcastMessage(var_411_string, var_412_object, var_410_object); // 0x1373 Func
	return 2; // 0x1375 Return
}


func_5997(var_20_int)
{
	var_20_int = 2; // 0x176e MovI
	return 0; // 0x176f Return
}


func_6000(var_26_object)
{
	var_27_object = Obj(); // 0x1771 PushV
	var_27_object = var_26_object; // 0x1772 Mov
	func_6211(var_27_object); // 0x1773 NEW_2
	return 0; // 0x1775 Return
}


func_3443(var_91_bool)
{
	var_91_bool = 1; // 0xd73 MovB
	return 0; // 0xd74 Return
}


func_3445()
{
	StopAnimation(); // 0xd75 Func
	StopGroup0(); // 0xd77 Func
	return 0; // 0xd79 Return
}


func_6006()
{
	return 0; // 0x1776 Return
}


func_4983()
{
	var_25_int = 100; // 0x1378 PushI
	SetReturnValue(var_25_int); // 0x1379 ObjFunc
	return 0; // 0x137b Return
}


func_6007(var_23_bool)
{
	var_23_bool = 0; // 0x1778 MovB
	return 0; // 0x1779 Return
}


func_6010()
{
	return 0; // 0x177b Return
}


func_3450(var_101_object)
{
	var_108_object = Obj(); var_109_bool = 0; var_110_float = 0; // 0xd7b PushV
	var_108_object = var_101_object; // 0xd7c Mov
	var_109_bool = 1; // 0xd7d MovB
	var_110_float = 180.0; // 0xd7e MovF
	func_3464(var_104_int, var_105_bool, var_106_float, var_107_int, var_101_object, var_108_object, var_109_bool, var_110_float); // 0xd7f NEW_2
	return 0; // 0xd81 Return
}


func_4988(var_312_bool)
{
	var_314_int = 0; var_315_string = ""; // 0x137d PushV
	var_315_string = "branch"; // 0x137e MovS
	func_4932(var_314_int, var_315_string); // 0x137f NEW_2
	var_316_int = 0; // 0x1381 PushI
	var_317_bool = var_314_int == var_316_int; // 0x1382 Eq
	if(var_317_bool == 0) goto Label_4998; // 0x1383 JumpB
	var_312_bool = 1; // 0x1384 MovB
	return 0; // 0x1385 Return
	
Label_4998:
	var_312_bool = 0; // 0x1386 MovB
	return 0; // 0x1387 Return
}


func_6012(var_30_bool)
{
	var_30_bool = 0; // 0x177d MovB
	return 0; // 0x177e Return
}


func_6015()
{
	return 0; // 0x1780 Return
}


func_6017(var_34_bool)
{
	var_34_bool = 0; // 0x1782 MovB
	return 0; // 0x1783 Return
}


func_3458(var_445_float)
{
	var_445_float = 0.05; // 0xd83 MovF
	return 0; // 0xd84 Return
}


func_6020()
{
	return 0; // 0x1785 Return
}


func_3461(var_452_int)
{
	var_452_int = 0; // 0xd86 MovI
	return 0; // 0xd87 Return
}


func_3974(var_0_object, var_351_bool)
{
	var_352_cvector = CVector(0,0,0); var_353_cvector = CVector(0,0,0); var_354_cvector = CVector(0,0,0); var_355_float = 0; var_356_float = 0; var_357_cvector = CVector(0,0,0); var_358_cvector = CVector(0,0,0); var_359_cvector = CVector(0,0,0); var_360_float = 0; var_361_float = 0; // 0xf86 PushV
	var_362_bool = 0; var_363_object = Obj(); // 0xf87 PushV
	var_363_object = var_0_object; // 0xf88 MovT
	func_4549(var_362_bool, var_363_object); // 0xf89 NEW_2
	var_364_bool = var_362_bool == 0; // 0xf8b Not
	if(var_364_bool == 0) goto Label_3983; // 0xf8c JumpB
	var_351_bool = 0; // 0xf8d MovB
	return 10; // 0xf8e Return
	
Label_3983:
	var_365_bool = 0; // 0xf8f PushV
	func_4063(var_361_float, var_365_bool); // 0xf90 NEW_2
	if(var_365_bool == 0) goto Label_4000; // 0xf92 JumpB
	GetPFPosition(var_357_cvector); // 0xf93 TObjFunc
	GetPFPosition(var_358_cvector); // 0xf95 Func
	var_359_cvector = var_357_cvector - var_358_cvector; // 0xf97 Sub2
	var_360_float = var_359_cvector | var_359_cvector; // 0xf98 Or2
	GetAttackDistance(var_361_float); // 0xf99 TObjFunc
	var_366_int = 50; // 0xf9b PushI
	var_361_float = var_361_float + var_366_int; // 0xf9c Add2
	var_367_float = var_361_float * var_361_float; // 0xf9d Mult
	var_351_bool = var_360_float <= var_367_float; // 0xf9e LE2
	return 10; // 0xf9f Return
	
Label_4000:
	var_351_bool = 0; // 0xfa0 MovB
	return 10; // 0xfa1 Return
}


func_6022(var_25_bool)
{
	var_25_bool = 0; // 0x1787 MovB
	return 0; // 0x1788 Return
}


func_5000(var_321_bool)
{
	var_323_int = 0; var_324_string = ""; // 0x1389 PushV
	var_324_string = "branch"; // 0x138a MovS
	func_4932(var_323_int, var_324_string); // 0x138b NEW_2
	var_325_int = 1; // 0x138d PushI
	var_326_bool = var_323_int == var_325_int; // 0x138e Eq
	if(var_326_bool == 0) goto Label_5010; // 0x138f JumpB
	var_321_bool = 1; // 0x1390 MovB
	return 0; // 0x1391 Return
	
Label_5010:
	var_321_bool = 0; // 0x1392 MovB
	return 0; // 0x1393 Return
}


func_3464(var_0_object, var_3_string, var_5_bool, var_108_object, var_109_bool, var_110_float, var_185_bool, var_277_bool)
{
	var_111_float = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_bool = 0; var_115_bool = 0; var_116_float = 0; var_117_cvector = CVector(0,0,0); var_118_float = 0; var_119_cvector = CVector(0,0,0); var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_bool = 0; var_126_bool = 0; var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_float = 0; var_130_cvector = CVector(0,0,0); var_131_bool = 0; var_132_float = 0; // 0xd88 PushV
	func_3693(var_130_cvector, var_131_bool, var_132_float); // 0xd8a NEW_2
	var_5_bool = 0; // 0xd8c TMovI
	var_155_string = "@GetAttackDistance"; // 0xd8d PushS
	var_156_int = 1; // 0xd8e PushI
	var_157_bool = IsFuncExist(var_108_object, var_155_string, var_156_int); // 0xd8f FuncExist
	if(var_157_bool == 0) goto Label_3478; // 0xd90 JumpB
	GetAttackDistance(var_122_float); // 0xd91 ObjFunc
	var_158_int = 50; // 0xd93 PushI
	var_122_float = var_122_float + var_158_int; // 0xd94 Add2
	goto Label_3479; // 0xd95 Jump
	
Label_3479:
	var_159_int = 150; // 0xd97 PushI
	var_160_bool = var_122_float >= var_159_int; // 0xd98 GE
	if(var_160_bool == 0) goto Label_3483; // 0xd99 JumpB
	var_122_float = 150; // 0xd9a MovI
	
Label_3483:
	var_3_string = 0; // 0xd9b TMovB
	var_0_object = var_108_object; // 0xd9c TMov
	IsPlayerActor(var_0_object, var_125_bool); // 0xd9d Func
	var_161_bool = var_125_bool; // 0xd9f Push
	if(var_161_bool == 0) goto Label_3497; // 0xda0 JumpB
	var_162_string = "attack"; // 0xda1 PushS
	PlayGlobalMusic(var_162_string); // 0xda2 Func
	var_163_object = Obj(); // 0xda4 PushV
	func_4892(var_163_object); // 0xda5 NEW_2
	SendPlayerEnemy(var_108_object, var_163_object); // 0xda7 Func
	
Label_3497:
	var_166_bool = var_109_bool; // 0xda9 Push
	if(var_166_bool == 0) goto Label_3501; // 0xdaa JumpB
	var_126_bool = 0; // 0xdab MovB
	goto Label_3502; // 0xdac Jump
	
Label_3502:
	var_167_float = 400.0; // 0xdae PushF
	var_127_float = var_167_float + var_122_float; // 0xdaf Add2
	
Label_3504:
	var_168_bool = 0; // 0xdb0 PushV
	var_168_bool = 0; // 0xdb1 MovB
	var_169_bool = 0; var_170_object = Obj(); // 0xdb2 PushV
	var_170_object = var_0_object; // 0xdb3 MovT
	func_4549(var_169_bool, var_170_object); // 0xdb4 NEW_2
	if(var_169_bool == 0) goto Label_3514; // 0xdb6 JumpB
	var_171_bool = var_3_string == 0; // 0xdb7 Not
	if(var_171_bool == 0) goto Label_3514; // 0xdb8 JumpB
	var_168_bool = 1; // 0xdb9 MovB
	
Label_3514:
	if(var_168_bool == 0) goto Label_3676; // 0xdba JumpB
	func_4106(var_132_float); // 0xdbc NEW_2
	GetPFPosition(var_123_cvector); // 0xdbe TObjFunc
	GetPFPosition(var_124_cvector); // 0xdc0 Func
	var_128_cvector = var_123_cvector - var_124_cvector; // 0xdc2 Sub2
	var_129_float = var_128_cvector | var_128_cvector; // 0xdc3 Or2
	var_177_float = var_127_float * var_127_float; // 0xdc4 Mult
	var_178_bool = var_129_float >= var_177_float; // 0xdc5 GE
	if(var_178_bool == 0) goto Label_3542; // 0xdc6 JumpB
	var_179_bool = 0; var_180_object = Obj(); var_181_float = 0; var_182_float = 0; var_183_bool = 0; var_184_bool = 0; // 0xdc7 PushV
	var_180_object = var_0_object; // 0xdc8 MovT
	var_181_float = var_122_float; // 0xdc9 Mov
	var_182_float = 3000.0; // 0xdca MovF
	var_183_bool = 1; // 0xdcb MovB
	var_184_bool = 0; // 0xdcc MovB
	TaskCall(6); // 0xdcd TaskCall
	func_4133(var_187_bool, var_179_bool, var_180_object, var_181_float, var_182_float, var_183_bool, var_184_bool); // 0xdce NEW_2
	TaskReturn(); // 0xdcf TaskReturn
	var_262_bool = var_185_bool == 0; // 0xdd1 Not
	if(var_262_bool == 0) goto Label_3540; // 0xdd2 JumpB
	goto Label_3676; // 0xdd3 Jump
	
Label_3676:
	WaitForAnimEnd(); // 0xe5c Func
	var_263_string = var_3_string; // 0xe5e PushT
	if(var_263_string == 0) goto Label_3681; // 0xe5f JumpB
	return 22; // 0xe60 Return
	
Label_3681:
	var_264_string = "all"; // 0xe61 PushS
	var_265_string = "attack_off"; // 0xe62 PushS
	PlayAnimation(var_264_string, var_265_string); // 0xe63 Func
	WaitForAnimEnd(); // 0xe65 Func
	var_266_bool = var_125_bool; // 0xe67 Push
	if(var_266_bool == 0) goto Label_3692; // 0xe68 JumpB
	var_267_float = 2.0; // 0xe69 PushF
	Sleep(var_267_float); // 0xe6a Func
	
Label_3692:
	return 22; // 0xe6c Return
	
Label_3540:
	var_126_bool = 0; // 0xdd4 MovB
	goto Label_3675; // 0xdd5 Jump
	
Label_3675:
	goto Label_3504; // 0xe5b Jump
	
Label_3542:
	var_268_float = var_110_float * var_110_float; // 0xdd6 Mult
	var_269_bool = var_129_float >= var_268_float; // 0xdd7 GE
	if(var_269_bool == 0) goto Label_3667; // 0xdd8 JumpB
	GetPFPosition(var_130_cvector); // 0xdd9 TObjFunc
	CanReachByPF(var_131_bool, var_130_cvector); // 0xddb Func
	var_270_bool = var_131_bool == 0; // 0xddd Not
	if(var_270_bool == 0) goto Label_3566; // 0xdde JumpB
	var_271_bool = 0; var_272_object = Obj(); var_273_float = 0; var_274_float = 0; var_275_bool = 0; var_276_bool = 0; // 0xddf PushV
	var_272_object = var_0_object; // 0xde0 MovT
	var_273_float = var_122_float; // 0xde1 Mov
	var_274_float = 3000.0; // 0xde2 MovF
	var_275_bool = 1; // 0xde3 MovB
	var_276_bool = 0; // 0xde4 MovB
	TaskCall(6); // 0xde5 TaskCall
	func_4133(var_279_bool, var_271_bool, var_272_object, var_273_float, var_274_float, var_275_bool, var_276_bool); // 0xde6 NEW_2
	TaskReturn(); // 0xde7 TaskReturn
	var_280_bool = var_277_bool == 0; // 0xde9 Not
	if(var_280_bool == 0) goto Label_3564; // 0xdea JumpB
	goto Label_3676; // 0xdeb Jump
	
Label_3564:
	var_126_bool = 0; // 0xdec MovB
	goto Label_3504; // 0xded Jump
	
Label_3566:
	var_281_bool = var_126_bool == 0; // 0xdee Not
	if(var_281_bool == 0) goto Label_3591; // 0xdef JumpB
	var_282_object = Obj(); // 0xdf0 PushV
	var_282_object = var_0_object; // 0xdf1 MovT
	func_4699(); // 0xdf2 NEW_2
	var_291_string = "all"; // 0xdf4 PushS
	var_292_string = "attack_on"; // 0xdf5 PushS
	PlayAnimation(var_291_string, var_292_string); // 0xdf6 Func
	WaitForAnimEnd(); // 0xdf8 Func
	func_4106(var_132_float); // 0xdfb NEW_2
	StopAsync(); // 0xdfd Func
	var_126_bool = 1; // 0xdff MovB
	var_293_bool = 0; var_294_object = Obj(); // 0xe00 PushV
	var_294_object = var_0_object; // 0xe01 MovT
	func_4549(var_293_bool, var_294_object); // 0xe02 NEW_2
	var_295_bool = var_293_bool == 0; // 0xe04 Not
	if(var_295_bool == 0) goto Label_3591; // 0xe05 JumpB
	goto Label_3676; // 0xe06 Jump
	
Label_3591:
	rand(var_132_float); // 0xe07 Func
	var_296_bool = 0; // 0xe09 PushV
	var_296_bool = 1; // 0xe0a MovB
	var_297_float = 0.25; // 0xe0b PushF
	var_298_bool = var_132_float < var_297_float; // 0xe0c LT
	if(var_298_bool == 0) goto Label_3603; // 0xe0d JumpB
	var_299_bool = 0; // 0xe0e PushV
	func_4063(var_296_bool, var_299_bool); // 0xe0f NEW_2
	if(var_299_bool == 0) goto Label_3603; // 0xe11 JumpB
	var_296_bool = 0; // 0xe12 MovB
	
Label_3603:
	if(var_296_bool == 0) goto Label_3620; // 0xe13 JumpB
	Face(var_0_object); // 0xe14 Func
	func_4113(); // 0xe17 NEW_2
	var_334_string = "all"; // 0xe19 PushS
	var_335_string = "attack_stay"; // 0xe1a PushS
	PlayAnimation(var_334_string, var_335_string); // 0xe1b Func
	var_336_bool = 0; var_337_float = 0; // 0xe1d PushV
	var_337_float = var_110_float; // 0xe1e Mov
	func_3931(var_132_float, var_336_bool, var_337_float); // 0xe1f NEW_2
	StopAsync(); // 0xe21 Func
	goto Label_3666; // 0xe23 Jump
	
Label_3666:
	goto Label_3675; // 0xe52 Jump
	
Label_3620:
	Face(var_0_object); // 0xe24 Func
	var_555_string = "all"; // 0xe26 PushS
	var_556_string = "fjump"; // 0xe27 PushS
	PlayAnimation(var_555_string, var_556_string); // 0xe28 Func
	WaitForAnimEnd(); // 0xe2a Func
	func_4106(var_132_float); // 0xe2d NEW_2
	var_557_cvector = CVector(0.0, 0.0, 0.0); // 0xe2f PushVec
	SetSpeed(var_557_cvector); // 0xe30 Func
	Stop(); // 0xe32 Func
	StopAsync(); // 0xe34 Func
	var_558_bool = 0; // 0xe36 PushV
	func_4063(var_132_float, var_558_bool); // 0xe37 NEW_2
	var_559_bool = var_558_bool == 0; // 0xe39 Not
	if(var_559_bool == 0) goto Label_3666; // 0xe3a JumpB
	var_560_bool = 0; var_561_object = Obj(); // 0xe3b PushV
	var_561_object = var_0_object; // 0xe3c MovT
	func_4549(var_560_bool, var_561_object); // 0xe3d NEW_2
	var_562_bool = var_560_bool == 0; // 0xe3f Not
	if(var_562_bool == 0) goto Label_3650; // 0xe40 JumpB
	goto Label_3676; // 0xe41 Jump
	
Label_3650:
	GetPFPosition(var_123_cvector); // 0xe42 TObjFunc
	GetPFPosition(var_124_cvector); // 0xe44 Func
	var_128_cvector = var_123_cvector - var_124_cvector; // 0xe46 Sub2
	var_129_float = var_128_cvector | var_128_cvector; // 0xe47 Or2
	var_563_float = var_110_float * var_110_float; // 0xe48 Mult
	var_564_bool = var_129_float < var_563_float; // 0xe49 LT
	if(var_564_bool == 0) goto Label_3666; // 0xe4a JumpB
	var_565_bool = 0; var_566_float = 0; // 0xe4b PushV
	var_566_float = var_110_float; // 0xe4c Mov
	func_3767(var_132_float, var_565_bool, var_566_float); // 0xe4d NEW_2
	var_567_bool = var_565_bool == 0; // 0xe4f Not
	if(var_567_bool == 0) goto Label_3666; // 0xe50 JumpB
	goto Label_3676; // 0xe51 Jump
	
Label_3667:
	var_568_bool = 0; var_569_float = 0; // 0xe53 PushV
	var_569_float = var_110_float; // 0xe54 Mov
	func_3767(var_132_float, var_568_bool, var_569_float); // 0xe55 NEW_2
	var_570_bool = var_568_bool == 0; // 0xe57 Not
	if(var_570_bool == 0) goto Label_3674; // 0xe58 JumpB
	goto Label_3676; // 0xe59 Jump
	
Label_3674:
	var_126_bool = 1; // 0xe5a MovB
	
Label_3501:
	var_126_bool = 1; // 0xdad MovB
	
Label_3478:
	var_122_float = var_110_float; // 0xd96 Mov
}


func_6025()
{
	return 0; // 0x178a Return
}


func_6027()
{
	var_451_object = Obj(); var_452_object = Obj(); var_453_object = Obj(); var_454_object = Obj(); var_455_int = 0; var_456_int = 0; var_457_int = 0; var_458_int = 0; var_459_object = Obj(); var_460_int = 0; var_461_bool = 0; var_462_int = 0; var_463_float = 0; var_464_int = 0; var_465_object = Obj(); var_466_int = 0; var_467_int = 0; var_468_int = 0; var_469_int = 0; var_470_int = 0; var_471_int = 0; var_472_int = 0; var_473_int = 0; var_474_int = 0; var_475_int = 0; var_476_object = Obj(); var_477_object = Obj(); var_478_object = Obj(); var_479_object = Obj(); var_480_object = Obj(); var_481_int = 0; var_482_int = 0; var_483_int = 0; var_484_int = 0; var_485_object = Obj(); var_486_int = 0; var_487_bool = 0; var_488_int = 0; var_489_float = 0; var_490_int = 0; var_491_object = Obj(); var_492_int = 0; var_493_int = 0; var_494_int = 0; var_495_int = 0; var_496_int = 0; var_497_int = 0; var_498_int = 0; var_499_int = 0; var_500_int = 0; var_501_int = 0; var_502_object = Obj(); // 0x178b PushV
	var_503_object = Obj(); // 0x178c PushV
	func_4926(var_503_object); // 0x178d NEW_2
	var_477_object = var_503_object; // 0x178e Mov
	CreateIntVector(var_478_object); // 0x1790 Func
	CreateIntVector(var_479_object); // 0x1792 Func
	CreateIntVector(var_480_object); // 0x1794 Func
	GetSubContainerCount(var_481_int); // 0x1796 ObjFunc
	var_482_int = 0; // 0x1798 MovI
	
Label_6041:
	var_506_bool = var_482_int < var_481_int; // 0x1799 LT
	if(var_506_bool == 0) goto Label_6113; // 0x179a JumpB
	GetItemCount(var_483_int, var_482_int); // 0x179b ObjFunc
	var_484_int = 0; // 0x179d MovI
	
Label_6046:
	var_507_bool = var_484_int < var_483_int; // 0x179e LT
	if(var_507_bool == 0) goto Label_6110; // 0x179f JumpB
	GetItem(var_485_object, var_484_int, var_482_int); // 0x17a0 ObjFunc
	GetItemID(var_486_int); // 0x17a2 ObjFunc
	var_508_string = "HasDurability"; // 0x17a4 PushS
	HasInvItemProperty(var_487_bool, var_486_int, var_508_string); // 0x17a5 Func
	var_509_bool = var_487_bool; // 0x17a7 Push
	if(var_509_bool == 0) goto Label_6106; // 0x17a8 JumpB
	var_510_string = "durability"; // 0x17a9 PushS
	HasProperty(var_487_bool, var_510_string); // 0x17aa ObjFunc
	var_511_bool = var_487_bool; // 0x17ac Push
	if(var_511_bool == 0) goto Label_6106; // 0x17ad JumpB
	var_512_string = "durability"; // 0x17ae PushS
	GetProperty(var_488_int, var_512_string); // 0x17af ObjFunc
	var_513_bool = 0; // 0x17b1 PushV
	var_513_bool = 0; // 0x17b2 MovB
	var_514_int = 100; // 0x17b3 PushI
	var_515_bool = var_488_int < var_514_int; // 0x17b4 LT
	if(var_515_bool == 0) goto Label_6076; // 0x17b5 JumpB
	var_516_bool = 0; var_517_object = Obj(); // 0x17b6 PushV
	var_517_object = var_485_object; // 0x17b7 Mov
	func_6174(var_517_object); // 0x17b8 NEW_2
	if(var_516_bool == 0) goto Label_6076; // 0x17ba JumpB
	var_513_bool = 1; // 0x17bb MovB
	
Label_6076:
	if(var_513_bool == 0) goto Label_6106; // 0x17bc JumpB
	add(var_485_object); // 0x17bd ObjFunc
	add(var_482_int); // 0x17bf ObjFunc
	add(var_484_int); // 0x17c1 ObjFunc
	var_523_int = 0; var_524_object = Obj(); var_525_int = 0; // 0x17c3 PushV
	var_524_object = var_485_object; // 0x17c4 Mov
	var_525_int = 0; // 0x17c5 MovI
	func_5269(var_523_int, var_524_object, var_525_int); // 0x17c6 NEW_2
	var_489_float = var_523_int; // 0x17c7 Mov
	var_565_float = 1.0; // 0x17c9 PushF
	var_566_float = 2.0; // 0x17ca PushF
	var_567_float = var_566_float * var_488_int; // 0x17cb Mult
	var_568_float = 100.0; // 0x17cc PushF
	var_569_float = var_567_float / var_568_float; // 0x17cd Div
	var_570_int = var_565_float + var_569_float; // 0x17ce Add
	var_571_float = var_489_float * var_570_int; // 0x17cf Mult
	var_572_int = 100; // 0x17d0 PushI
	var_573_int = var_572_int - var_488_int; // 0x17d1 Sub
	var_574_float = var_571_float * var_573_int; // 0x17d2 Mult
	var_575_int = 300; // 0x17d3 PushI
	var_490_int = var_574_float / var_574_float; // 0x17d4 Div2
	var_576_bool = var_490_int == 0; // 0x17d5 Not
	if(var_576_bool == 0) goto Label_6104; // 0x17d6 JumpB
	var_490_int = 1; // 0x17d7 MovI
	
Label_6104:
	add(var_490_int); // 0x17d8 ObjFunc
	
Label_6106:
	var_485_object = 0; // 0x17da SetNull
	var_577_int = 1; // 0x17db PushI
	var_484_int = var_484_int + var_577_int; // 0x17dc Add2
	goto Label_6046; // 0x17dd Jump
	
Label_6110:
	var_578_int = 1; // 0x17de PushI
	var_482_int = var_482_int + var_578_int; // 0x17df Add2
	goto Label_6041; // 0x17e0 Jump
	
Label_6113:
	CreateIntVector(var_491_object); // 0x17e1 Func
	var_579_string = "repair.xml"; // 0x17e3 PushS
	ChooseItem(var_477_object, var_491_object, var_480_object, var_579_string); // 0x17e4 Func
	size(var_492_int); // 0x17e6 ObjFunc
	var_580_bool = var_492_int == 0; // 0x17e8 Not
	if(var_580_bool == 0) goto Label_6123; // 0x17e9 JumpB
	return 52; // 0x17ea Return
	
Label_6123:
	var_493_int = 0; // 0x17eb MovI
	var_494_int = 0; // 0x17ec MovI
	
Label_6125:
	var_581_bool = var_494_int < var_492_int; // 0x17ed LT
	if(var_581_bool == 0) goto Label_6135; // 0x17ee JumpB
	get(var_495_int, var_494_int); // 0x17ef ObjFunc
	get(var_496_int, var_495_int); // 0x17f1 ObjFunc
	var_493_int = var_493_int + var_496_int; // 0x17f3 Add2
	var_582_int = 1; // 0x17f4 PushI
	var_494_int = var_494_int + var_582_int; // 0x17f5 Add2
	goto Label_6125; // 0x17f6 Jump
	
Label_6135:
	var_583_string = "money"; // 0x17f7 PushS
	GetProperty(var_583_string, var_497_int); // 0x17f8 ObjFunc
	var_497_int = var_497_int - var_493_int; // 0x17fa Sub2
	var_584_int = 0; // 0x17fb PushI
	var_585_bool = var_497_int < var_584_int; // 0x17fc LT
	if(var_585_bool == 0) goto Label_6143; // 0x17fd JumpB
	return 52; // 0x17fe Return
	
Label_6143:
	var_586_string = "money"; // 0x17ff PushS
	SetProperty(var_586_string, var_497_int); // 0x1800 ObjFunc
	var_498_int = 0; // 0x1802 MovI
	
Label_6147:
	var_587_bool = var_498_int < var_492_int; // 0x1803 LT
	if(var_587_bool == 0) goto Label_6168; // 0x1804 JumpB
	get(var_499_int, var_498_int); // 0x1805 ObjFunc
	get(var_500_int, var_499_int); // 0x1807 ObjFunc
	get(var_501_int, var_499_int); // 0x1809 ObjFunc
	GetItem(var_502_object, var_501_int, var_500_int); // 0x180b ObjFunc
	var_588_string = "durability"; // 0x180d PushS
	var_589_int = 100; // 0x180e PushI
	SetProperty(var_588_string, var_589_int); // 0x180f ObjFunc
	var_590_int = 1; // 0x1811 PushI
	SetItem(var_502_object, var_590_int, var_501_int, var_500_int); // 0x1812 ObjFunc
	var_502_object = 0; // 0x1814 SetNull
	var_591_int = 1; // 0x1815 PushI
	var_498_int = var_498_int + var_591_int; // 0x1816 Add2
	goto Label_6147; // 0x1817 Jump
	
Label_6168:
	return 52; // 0x1818 Return
}


func_5012(var_131_bool)
{
	var_133_int = 0; var_134_string = ""; // 0x1395 PushV
	var_134_string = "branch"; // 0x1396 MovS
	func_4932(var_133_int, var_134_string); // 0x1397 NEW_2
	var_137_int = 2; // 0x1399 PushI
	var_138_bool = var_133_int == var_137_int; // 0x139a Eq
	if(var_138_bool == 0) goto Label_5022; // 0x139b JumpB
	var_131_bool = 1; // 0x139c MovB
	return 0; // 0x139d Return
	
Label_5022:
	var_131_bool = 0; // 0x139e MovB
	return 0; // 0x139f Return
}


func_4508(var_45_bool)
{
	var_47_bool = 0; var_48_bool = 0; // 0x119c PushV
	IsDead(var_48_bool); // 0x119d ObjFunc
	var_45_bool = var_48_bool; // 0x119f Mov
	return 2; // 0x11a0 Return
}


func_5024(var_178_bool, var_179_object)
{
	var_180_bool = 0; var_181_object = Obj(); // 0x13a1 PushV
	var_181_object = var_179_object; // 0x13a2 Mov
	func_5154(var_181_object); // 0x13a3 NEW_2
	if(var_180_bool == 0) goto Label_5032; // 0x13a5 JumpB
	var_178_bool = 1; // 0x13a6 MovB
	return 0; // 0x13a7 Return
	
Label_5032:
	var_178_bool = 0; // 0x13a8 MovB
	return 0; // 0x13a9 Return
}


func_4513(var_34_bool, var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj(); // 0x11a1 PushV
	var_40_bool = var_35_object == 0; // 0x11a2 NullEq
	if(var_40_bool == 0) goto Label_4518; // 0x11a3 JumpB
	var_34_bool = 0; // 0x11a4 MovB
	return 4; // 0x11a5 Return
	
Label_4518:
	var_41_bool = 0; // 0x11a6 PushV
	var_41_bool = 0; // 0x11a7 MovB
	var_42_string = "IsDead"; // 0x11a8 PushS
	var_43_int = 1; // 0x11a9 PushI
	var_44_bool = IsFuncExist(var_35_object, var_42_string, var_43_int); // 0x11aa FuncExist
	if(var_44_bool == 0) goto Label_4530; // 0x11ab JumpB
	var_45_bool = 0; var_46_object = Obj(); // 0x11ac PushV
	var_46_object = var_35_object; // 0x11ad Mov
	func_4508(var_46_object); // 0x11ae NEW_2
	if(var_45_bool == 0) goto Label_4530; // 0x11b0 JumpB
	var_41_bool = 1; // 0x11b1 MovB
	
Label_4530:
	if(var_41_bool == 0) goto Label_4533; // 0x11b2 JumpB
	var_34_bool = 0; // 0x11b3 MovB
	return 4; // 0x11b4 Return
	
Label_4533:
	GetScene(var_38_object); // 0x11b5 Func
	var_49_bool = var_38_object == 0; // 0x11b7 NullEq
	if(var_49_bool == 0) goto Label_4539; // 0x11b8 JumpB
	var_34_bool = 0; // 0x11b9 MovB
	return 4; // 0x11ba Return
	
Label_4539:
	GetScene(var_39_object); // 0x11bb ObjFunc
	var_50_bool = var_38_object != var_39_object; // 0x11bd Neq
	if(var_50_bool == 0) goto Label_4545; // 0x11be JumpB
	var_34_bool = 0; // 0x11bf MovB
	return 4; // 0x11c0 Return
	
Label_4545:
	var_34_bool = 1; // 0x11c1 MovB
	return 4; // 0x11c2 Return
}


func_4002(var_349_bool)
{
	var_350_bool = 0; // 0xfa2 PushV
	var_350_bool = 0; // 0xfa3 MovB
	var_351_bool = 0; // 0xfa4 PushV
	func_3974(var_350_bool, var_351_bool); // 0xfa5 NEW_2
	if(var_351_bool == 0) goto Label_4013; // 0xfa7 JumpB
	var_368_bool = 0; // 0xfa8 PushV
	func_4018(var_349_bool, var_350_bool, var_368_bool); // 0xfa9 NEW_2
	if(var_368_bool == 0) goto Label_4013; // 0xfab JumpB
	var_350_bool = 1; // 0xfac MovB
	
Label_4013:
	if(var_350_bool == 0) goto Label_4016; // 0xfad JumpB
	var_349_bool = 1; // 0xfae MovB
	return 0; // 0xfaf Return
	
Label_4016:
	var_349_bool = 0; // 0xfb0 MovB
	return 0; // 0xfb1 Return
}


func_5034(var_400_bool, var_401_object)
{
	var_402_bool = 0; var_403_object = Obj(); // 0x13ab PushV
	var_403_object = var_401_object; // 0x13ac Mov
	func_5161(var_403_object); // 0x13ad NEW_2
	if(var_402_bool == 0) goto Label_5042; // 0x13af JumpB
	var_400_bool = 1; // 0x13b0 MovB
	return 0; // 0x13b1 Return
	
Label_5042:
	var_400_bool = 0; // 0x13b2 MovB
	return 0; // 0x13b3 Return
}


func_4018(var_0_object, var_4_bool, var_368_bool)
{
	var_369_object = Obj(); var_370_bool = 0; var_371_float = 0; var_372_cvector = CVector(0,0,0); var_373_cvector = CVector(0,0,0); var_374_object = Obj(); var_375_bool = 0; var_376_float = 0; var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); // 0xfb2 PushV
	GetScene(var_374_object); // 0xfb3 Func
	var_375_bool = 0; // 0xfb5 MovB
	
Label_4022:
	var_379_cvector = CVector(0,0,0); var_380_object = Obj(); // 0xfb6 PushV
	var_380_object = var_0_object; // 0xfb7 MovT
	func_4403(var_380_object); // 0xfb8 NEW_2
	var_385_int = -var_379_cvector; // 0xfba Neg
	FindDirLength(var_376_float, var_385_int, var_376_float); // 0xfbb Func
	var_386_bool = var_376_float < var_4_bool; // 0xfbd LT
	if(var_386_bool == 0) goto Label_4032; // 0xfbe JumpB
	goto Label_4060; // 0xfbf Jump
	
Label_4060:
	var_368_bool = var_375_bool; // 0xfdc Mov
	return 10; // 0xfdd Return
	
Label_4032:
	Face(var_0_object); // 0xfc0 Func
	var_387_string = "all"; // 0xfc2 PushS
	var_388_string = "bjump"; // 0xfc3 PushS
	PlayAnimation(var_387_string, var_388_string); // 0xfc4 Func
	GetPFPosition(var_377_cvector); // 0xfc6 TObjFunc
	GetPFPosition(var_378_cvector); // 0xfc8 Func
	WaitForAnimEnd(); // 0xfca Func
	func_4106(var_378_cvector); // 0xfcd NEW_2
	StopAsync(); // 0xfcf Func
	var_389_cvector = CVector(0.0, 0.0, 0.0); // 0xfd1 PushVec
	SetSpeed(var_389_cvector); // 0xfd2 Func
	var_375_bool = 1; // 0xfd4 MovB
	var_390_bool = 0; // 0xfd5 PushV
	func_3974(var_378_cvector, var_390_bool); // 0xfd6 NEW_2
	var_391_bool = var_390_bool == 0; // 0xfd8 Not
	if(var_391_bool == 0) goto Label_4059; // 0xfd9 JumpB
	goto Label_4060; // 0xfda Jump
	
Label_4059:
	goto Label_4022; // 0xfdb Jump
}


func_5044(var_159_bool, var_160_object)
{
	var_161_bool = 0; var_162_object = Obj(); // 0x13b5 PushV
	var_162_object = var_160_object; // 0x13b6 Mov
	func_5164(var_162_object); // 0x13b7 NEW_2
	if(var_161_bool == 0) goto Label_5052; // 0x13b9 JumpB
	var_159_bool = 1; // 0x13ba MovB
	return 0; // 0x13bb Return
	
Label_5052:
	var_159_bool = 0; // 0x13bc MovB
	return 0; // 0x13bd Return
}


func_5054(var_171_bool, var_172_object)
{
	var_173_bool = 0; var_174_object = Obj(); // 0x13bf PushV
	var_174_object = var_172_object; // 0x13c0 Mov
	func_5171(var_174_object); // 0x13c1 NEW_2
	if(var_173_bool == 0) goto Label_5062; // 0x13c3 JumpB
	var_171_bool = 1; // 0x13c4 MovB
	return 0; // 0x13c5 Return
	
Label_5062:
	var_171_bool = 0; // 0x13c6 MovB
	return 0; // 0x13c7 Return
}


func_4549(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0; // 0x11c5 PushV
	var_34_bool = 0; var_35_object = Obj(); // 0x11c6 PushV
	var_35_object = var_31_object; // 0x11c7 Mov
	func_4513(var_34_bool, var_35_object); // 0x11c8 NEW_2
	var_51_bool = var_34_bool == 0; // 0x11ca Not
	if(var_51_bool == 0) goto Label_4558; // 0x11cb JumpB
	var_30_bool = 0; // 0x11cc MovB
	return 2; // 0x11cd Return
	
Label_4558:
	var_52_bool = 0; var_53_object = Obj(); var_54_string = ""; // 0x11ce PushV
	var_53_object = var_31_object; // 0x11cf Mov
	var_54_string = "noaccess"; // 0x11d0 MovS
	func_4423(var_52_bool, var_53_object, var_54_string); // 0x11d1 NEW_2
	var_61_bool = var_52_bool == 0; // 0x11d3 Not
	if(var_61_bool == 0) goto Label_4567; // 0x11d4 JumpB
	var_30_bool = 1; // 0x11d5 MovB
	return 2; // 0x11d6 Return
	
Label_4567:
	var_62_string = "noaccess"; // 0x11d7 PushS
	GetProperty(var_62_string, var_33_int); // 0x11d8 ObjFunc
	var_63_int = 0; // 0x11da PushI
	var_30_bool = var_33_int == var_63_int; // 0x11db Eq2
	return 2; // 0x11dc Return
}


func_5064(var_357_bool, var_358_object)
{
	var_359_bool = 0; var_360_object = Obj(); // 0x13c9 PushV
	var_360_object = var_358_object; // 0x13ca Mov
	func_5178(var_360_object); // 0x13cb NEW_2
	if(var_359_bool == 0) goto Label_5072; // 0x13cd JumpB
	var_357_bool = 1; // 0x13ce MovB
	return 0; // 0x13cf Return
	
Label_5072:
	var_357_bool = 0; // 0x13d0 MovB
	return 0; // 0x13d1 Return
}


func_5074(var_369_bool, var_370_object)
{
	var_371_bool = 0; var_372_object = Obj(); // 0x13d3 PushV
	var_372_object = var_370_object; // 0x13d4 Mov
	func_5185(var_372_object); // 0x13d5 NEW_2
	if(var_371_bool == 0) goto Label_5082; // 0x13d7 JumpB
	var_369_bool = 1; // 0x13d8 MovB
	return 0; // 0x13d9 Return
	
Label_5082:
	var_369_bool = 0; // 0x13da MovB
	return 0; // 0x13db Return
}


func_5593(var_137_int, var_138_string)
{
	var_139_int = 0; var_140_int = 0; // 0x15d9 PushV
	GetInvItemByName(var_140_int, var_138_string); // 0x15da Func
	var_137_int = var_140_int; // 0x15dc Mov
	return 2; // 0x15dd Return
}


func_5084(var_378_bool, var_379_object)
{
	var_380_bool = 0; var_381_object = Obj(); // 0x13dd PushV
	var_381_object = var_379_object; // 0x13de Mov
	func_5192(var_381_object); // 0x13df NEW_2
	if(var_380_bool == 0) goto Label_5092; // 0x13e1 JumpB
	var_378_bool = 1; // 0x13e2 MovB
	return 0; // 0x13e3 Return
	
Label_5092:
	var_378_bool = 0; // 0x13e4 MovB
	return 0; // 0x13e5 Return
}


func_4573(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; // 0x11dd PushV
	var_49_bool = var_34_object == 0; // 0x11de NullEq
	if(var_49_bool == 0) goto Label_4577; // 0x11df JumpB
	return 14; // 0x11e0 Return
	
Label_4577:
	IsDead(var_42_bool); // 0x11e1 Func
	var_50_bool = var_42_bool; // 0x11e3 Push
	if(var_50_bool == 0) goto Label_4582; // 0x11e4 JumpB
	return 14; // 0x11e5 Return
	
Label_4582:
	GetSecondaryAnimationType(var_43_int); // 0x11e6 Func
	var_51_int = 0; // 0x11e8 PushI
	var_52_bool = var_43_int < var_51_int; // 0x11e9 LT
	if(var_52_bool == 0) goto Label_4588; // 0x11ea JumpB
	return 14; // 0x11eb Return
	
Label_4588:
	GetPosition(var_44_cvector); // 0x11ec ObjFunc
	GetPosition(var_45_cvector); // 0x11ee Func
	GetDirection(var_46_cvector); // 0x11f0 Func
	var_47_cvector = var_45_cvector - var_44_cvector; // 0x11f2 Sub2
	var_53_float = GetByIndex(var_47_cvector, 0); // 0x11f3 PushE
	var_54_float = GetByIndex(var_46_cvector, 0); // 0x11f4 PushE
	var_55_float = var_53_float * var_54_float; // 0x11f5 Mult
	var_56_float = GetByIndex(var_47_cvector, 2); // 0x11f6 PushE
	var_57_float = GetByIndex(var_46_cvector, 2); // 0x11f7 PushE
	var_58_float = var_56_float * var_57_float; // 0x11f8 Mult
	var_59_int = var_55_float + var_58_float; // 0x11f9 Add
	var_60_int = 0; // 0x11fa PushI
	var_61_bool = var_59_int >= var_60_int; // 0x11fb GE
	if(var_61_bool == 0) goto Label_4607; // 0x11fc JumpB
	var_48_string = "fhit"; // 0x11fd MovS
	goto Label_4608; // 0x11fe Jump
	
Label_4608:
	var_62_string = "hit_react"; // 0x1200 PushS
	var_63_string = "1"; // 0x1201 PushS
	var_64_int = var_48_string + var_63_string; // 0x1202 Add
	var_65_string = "2"; // 0x1203 PushS
	var_66_int = var_48_string + var_65_string; // 0x1204 Add
	var_67_int = -10; // 0x1205 PushI
	FadeSecondaryAnimation(var_62_string, var_64_int, var_66_int, var_67_int); // 0x1206 Func
	return 14; // 0x1208 Return
	
Label_4607:
	var_48_string = "bhit"; // 0x11ff MovS
}


func_5598(var_18_object)
{
	var_19_object = Obj(); // 0x15df PushV
	var_19_object = var_18_object; // 0x15e0 Mov
	TaskCall(2); // 0x15e1 TaskCall
	func_2675(var_19_object); // 0x15e2 NEW_2
	TaskReturn(); // 0x15e3 TaskReturn
	return 0; // 0x15e5 Return
}


func_4063(var_0_object, var_299_bool)
{
	var_300_bool = 0; var_301_bool = 0; // 0xfdf PushV
	var_302_string = "IsAttacking"; // 0xfe0 PushS
	var_303_int = 1; // 0xfe1 PushI
	var_304_bool = IsFuncExist(var_0_object, var_302_string, var_303_int); // 0xfe2 FuncExist
	if(var_304_bool == 0) goto Label_4072; // 0xfe3 JumpB
	IsAttacking(var_301_bool); // 0xfe4 TObjFunc
	var_299_bool = var_301_bool; // 0xfe6 Mov
	return 2; // 0xfe7 Return
	
Label_4072:
	var_299_bool = 0; // 0xfe8 MovB
	return 2; // 0xfe9 Return
}


func_3042(var_2_object)
{
	var_18_int = 110; // 0xbe2 PushI
	KillTimer(var_18_int); // 0xbe3 Func
	var_2_object = 0; // 0xbe5 TMovB
	func_3178(var_16_object, var_17_bool); // 0xbe7 NEW_2
	return 0; // 0xbe9 Return
}


func_5094(var_218_bool, var_219_object)
{
	var_220_bool = 0; var_221_object = Obj(); // 0x13e7 PushV
	var_221_object = var_219_object; // 0x13e8 Mov
	func_5199(var_221_object); // 0x13e9 NEW_2
	if(var_220_bool == 0) goto Label_5102; // 0x13eb JumpB
	var_218_bool = 1; // 0x13ec MovB
	return 0; // 0x13ed Return
	
Label_5102:
	var_218_bool = 0; // 0x13ee MovB
	return 0; // 0x13ef Return
}


func_3050(var_2_object)
{
	var_77_int = 110; // 0xbea PushI
	KillTimer(var_77_int); // 0xbeb Func
	var_2_object = 0; // 0xbed TMovB
	func_3185(var_21_bool, var_22_int); // 0xbef NEW_2
	return 0; // 0xbf1 Return
}


func_4074(var_2_object, var_5_bool)
{
	var_416_float = 0; var_417_int = 0; var_418_float = 0; var_419_int = 0; // 0xfea PushV
	var_420_bool = var_2_object == 0; // 0xfeb Not
	if(var_420_bool == 0) goto Label_4078; // 0xfec JumpB
	return 4; // 0xfed Return
	
Label_4078:
	var_421_bool = var_5_bool; // 0xfee PushT
	if(var_421_bool == 0) goto Label_4086; // 0xfef JumpB
	var_422_int = -1; // 0xff0 PushI
	var_5_bool = var_5_bool + var_422_int; // 0xff1 Add2
	var_423_int = 0; // 0xff2 PushI
	var_424_bool = var_5_bool > var_423_int; // 0xff3 GT
	if(var_424_bool == 0) goto Label_4086; // 0xff4 JumpB
	return 4; // 0xff5 Return
	
Label_4086:
	rand(var_418_float); // 0xff6 Func
	var_425_float = 0; // 0xff8 PushV
	func_4124(var_425_float); // 0xff9 NEW_2
	var_426_bool = var_418_float < var_425_float; // 0xffb LT
	if(var_426_bool == 0) goto Label_4105; // 0xffc JumpB
	irand(var_419_int, var_418_float); // 0xffd Func
	var_427_int = 1; // 0xfff PushI
	var_419_int = var_419_int + var_427_int; // 0x1000 Add2
	var_428_string = "attack"; // 0x1001 PushS
	var_429_int = var_428_string + var_419_int; // 0x1002 Add
	Speak(var_429_int); // 0x1003 Func
	var_430_int = 0; // 0x1005 PushV
	func_4122(var_430_int); // 0x1006 NEW_2
	var_5_bool = var_430_int; // 0x1007 TMov
	
Label_4105:
	return 4; // 0x1009 Return
}


func_5104(var_224_bool, var_225_object)
{
	var_226_bool = 0; var_227_object = Obj(); // 0x13f1 PushV
	var_227_object = var_225_object; // 0x13f2 Mov
	func_5206(var_227_object); // 0x13f3 NEW_2
	if(var_226_bool == 0) goto Label_5112; // 0x13f5 JumpB
	var_224_bool = 1; // 0x13f6 MovB
	return 0; // 0x13f7 Return
	
Label_5112:
	var_224_bool = 0; // 0x13f8 MovB
	return 0; // 0x13f9 Return
}


func_5114(var_190_bool, var_191_object)
{
	var_192_bool = 0; var_193_object = Obj(); // 0x13fb PushV
	var_193_object = var_191_object; // 0x13fc Mov
	func_5213(var_193_object); // 0x13fd NEW_2
	if(var_192_bool == 0) goto Label_5122; // 0x13ff JumpB
	var_190_bool = 1; // 0x1400 MovB
	return 0; // 0x1401 Return
	
Label_5122:
	var_190_bool = 0; // 0x1402 MovB
	return 0; // 0x1403 Return
}


func_3067(var_2_object, var_18_object)
{
	var_19_bool = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; // 0xbfb PushV
	var_23_bool = 0; var_24_object = Obj(); // 0xbfc PushV
	var_24_object = var_18_object; // 0xbfd Mov
	func_4549(var_23_bool, var_24_object); // 0xbfe NEW_2
	var_57_bool = var_23_bool == 0; // 0xc00 Not
	if(var_57_bool == 0) goto Label_3075; // 0xc01 JumpB
	return 4; // 0xc02 Return
	
Label_3075:
	var_58_object = var_2_object; // 0xc03 PushT
	if(var_58_object == 0) goto Label_3078; // 0xc04 JumpB
	return 4; // 0xc05 Return
	
Label_3078:
	IsPlayerActor(var_18_object, var_21_bool); // 0xc06 Func
	var_59_bool = var_21_bool == 0; // 0xc08 Not
	if(var_59_bool == 0) goto Label_3083; // 0xc09 JumpB
	return 4; // 0xc0a Return
	
Label_3083:
	var_60_int = 0; var_61_object = Obj(); // 0xc0b PushV
	var_61_object = var_18_object; // 0xc0c Mov
	func_5795(var_60_int, var_61_object); // 0xc0d NEW_2
	var_22_int = var_60_int; // 0xc0e Mov
	var_73_int = 0; // 0xc10 PushI
	var_74_bool = var_22_int > var_73_int; // 0xc11 GT
	if(var_74_bool == 0) goto Label_3106; // 0xc12 JumpB
	var_75_int = 1; // 0xc13 PushI
	var_76_bool = var_22_int > var_75_int; // 0xc14 GT
	if(var_76_bool == 0) goto Label_3097; // 0xc15 JumpB
	func_3050(var_22_int); // 0xc17 NEW_2
	
Label_3097:
	var_78_object = Obj(); // 0xc19 PushV
	var_78_object = var_18_object; // 0xc1a Mov
	func_5805(var_78_object); // 0xc1b NEW_2
	var_2_object = 1; // 0xc1d TMovB
	var_548_int = 110; // 0xc1e PushI
	var_549_float = 10.0; // 0xc1f PushF
	SetTimer(var_548_int, var_549_float); // 0xc20 Func
	
Label_3106:
	return 4; // 0xc22 Return
}


