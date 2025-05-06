task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; // 0x1b PushV
	func_6231(var_20_bool); // 0x1c NEW_2
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
	var_21_int = 1; // 0x227 PushI
	if(var_21_int == 0) goto Label_2671; // 0x228 JumpB
	func_5177(); // 0x22a NEW_2
	var_23_int = 38471; // 0x22c PushI
	var_24_bool = var_20_bool == var_23_int; // 0x22d Eq
	if(var_24_bool == 0) goto Label_564; // 0x22e JumpB
	var_25_object = Obj(); var_26_object = Obj(); // 0x22f PushV
	var_25_object = var_1_object; // 0x230 MovT
	var_26_object = var_0_bool; // 0x231 MovT
	func_5362(); // 0x232 NEW_2
	
Label_564:
	var_28_int = 38466; // 0x234 PushI
	var_29_bool = var_20_bool == var_28_int; // 0x235 Eq
	if(var_29_bool == 0) goto Label_572; // 0x236 JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0x237 PushV
	var_30_object = var_1_object; // 0x238 MovT
	var_31_object = var_0_bool; // 0x239 MovT
	func_5362(); // 0x23a NEW_2
	
Label_572:
	var_32_int = 38472; // 0x23c PushI
	var_33_bool = var_20_bool == var_32_int; // 0x23d Eq
	if(var_33_bool == 0) goto Label_580; // 0x23e JumpB
	var_34_object = Obj(); var_35_object = Obj(); // 0x23f PushV
	var_34_object = var_1_object; // 0x240 MovT
	var_35_object = var_0_bool; // 0x241 MovT
	func_5362(); // 0x242 NEW_2
	
Label_580:
	var_36_int = 38469; // 0x244 PushI
	var_37_bool = var_20_bool == var_36_int; // 0x245 Eq
	if(var_37_bool == 0) goto Label_588; // 0x246 JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x247 PushV
	var_38_object = var_1_object; // 0x248 MovT
	var_39_object = var_0_bool; // 0x249 MovT
	func_5362(); // 0x24a NEW_2
	
Label_588:
	var_40_int = 38470; // 0x24c PushI
	var_41_bool = var_20_bool == var_40_int; // 0x24d Eq
	if(var_41_bool == 0) goto Label_596; // 0x24e JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x24f PushV
	var_42_object = var_1_object; // 0x250 MovT
	var_43_object = var_0_bool; // 0x251 MovT
	func_5362(); // 0x252 NEW_2
	
Label_596:
	var_44_int = 45464; // 0x254 PushI
	var_45_bool = var_19_object == var_44_int; // 0x255 Eq
	if(var_45_bool == 0) goto Label_975; // 0x256 JumpB
	var_46_bool = 0; var_47_object = Obj(); // 0x257 PushV
	var_47_object = var_1_object; // 0x258 MovT
	func_5391(var_47_object); // 0x259 NEW_2
	if(var_46_bool == 0) goto Label_712; // 0x25b JumpB
	var_54_string = ""; // 0x25c PushV
	var_54_string = "Neutral"; // 0x25d MovS
	func_528(var_20_bool, var_54_string); // 0x25e NEW_2
	var_71_int = 543012; // 0x260 PushI
	SetMessage(var_71_int); // 0x261 TObjFunc
	ClearReplies(); // 0x263 TObjFunc
	var_72_bool = 0; var_73_object = Obj(); // 0x265 PushV
	var_73_object = var_1_object; // 0x266 MovT
	func_5413(var_72_bool, var_73_object); // 0x267 NEW_2
	if(var_72_bool == 0) goto Label_623; // 0x269 JumpB
	var_83_int = 543015; // 0x26a PushI
	var_84_int = 45468; // 0x26b PushI
	var_85_int = 45467; // 0x26c PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x26d TObjFunc
	
Label_623:
	var_86_bool = 0; var_87_object = Obj(); // 0x26f PushV
	var_87_object = var_1_object; // 0x270 MovT
	func_5423(var_86_bool, var_87_object); // 0x271 NEW_2
	if(var_86_bool == 0) goto Label_633; // 0x273 JumpB
	var_92_int = 543022; // 0x274 PushI
	var_93_int = 45475; // 0x275 PushI
	var_94_int = 45474; // 0x276 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x277 TObjFunc
	
Label_633:
	var_95_bool = 0; // 0x279 PushV
	var_95_bool = 1; // 0x27a MovB
	var_96_bool = 0; // 0x27b PushV
	var_96_bool = 1; // 0x27c MovB
	var_97_bool = 0; var_98_object = Obj(); // 0x27d PushV
	var_98_object = var_1_object; // 0x27e MovT
	func_5433(var_97_bool, var_98_object); // 0x27f NEW_2
	if(var_97_bool == 0) goto Label_648; // 0x281 JumpB
	var_103_bool = 0; var_104_object = Obj(); // 0x282 PushV
	var_104_object = var_1_object; // 0x283 MovT
	func_5443(var_103_bool, var_104_object); // 0x284 NEW_2
	if(var_103_bool == 0) goto Label_648; // 0x286 JumpB
	var_96_bool = 0; // 0x287 MovB
	
Label_648:
	if(var_96_bool == 0) goto Label_655; // 0x288 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x289 PushV
	var_110_object = var_1_object; // 0x28a MovT
	func_5453(var_109_bool, var_110_object); // 0x28b NEW_2
	if(var_109_bool == 0) goto Label_655; // 0x28d JumpB
	var_95_bool = 0; // 0x28e MovB
	
Label_655:
	if(var_95_bool == 0) goto Label_661; // 0x28f JumpB
	var_115_int = 543026; // 0x290 PushI
	var_116_int = 45480; // 0x291 PushI
	var_117_int = 45478; // 0x292 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x293 TObjFunc
	
Label_661:
	var_118_bool = 0; // 0x295 PushV
	var_118_bool = 1; // 0x296 MovB
	var_119_bool = 0; var_120_object = Obj(); // 0x297 PushV
	var_120_object = var_1_object; // 0x298 MovT
	func_5463(var_119_bool, var_120_object); // 0x299 NEW_2
	if(var_119_bool == 0) goto Label_674; // 0x29b JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x29c PushV
	var_126_object = var_1_object; // 0x29d MovT
	func_5473(var_125_bool, var_126_object); // 0x29e NEW_2
	if(var_125_bool == 0) goto Label_674; // 0x2a0 JumpB
	var_118_bool = 0; // 0x2a1 MovB
	
Label_674:
	if(var_118_bool == 0) goto Label_680; // 0x2a2 JumpB
	var_131_int = 543034; // 0x2a3 PushI
	var_132_int = 45487; // 0x2a4 PushI
	var_133_int = 45486; // 0x2a5 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x2a6 TObjFunc
	
Label_680:
	var_134_int = 536643; // 0x2a8 PushI
	var_135_int = -1; // 0x2a9 PushI
	var_136_int = 38471; // 0x2aa PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x2ab TObjFunc
	var_137_bool = 0; var_138_object = Obj(); // 0x2ad PushV
	var_138_object = var_1_object; // 0x2ae MovT
	func_5413(var_137_bool, var_138_object); // 0x2af NEW_2
	if(var_137_bool == 0) goto Label_695; // 0x2b1 JumpB
	var_139_int = 543014; // 0x2b2 PushI
	var_140_int = -1; // 0x2b3 PushI
	var_141_int = 45466; // 0x2b4 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x2b5 TObjFunc
	
Label_695:
	var_142_bool = 0; var_143_object = Obj(); // 0x2b7 PushV
	var_143_object = var_1_object; // 0x2b8 MovT
	func_5413(var_142_bool, var_143_object); // 0x2b9 NEW_2
	var_144_bool = var_142_bool == 0; // 0x2bb Not
	if(var_144_bool == 0) goto Label_706; // 0x2bc JumpB
	var_145_int = 543027; // 0x2bd PushI
	var_146_int = -1; // 0x2be PushI
	var_147_int = 45479; // 0x2bf PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x2c0 TObjFunc
	
Label_706:
	var_148_int = 536852; // 0x2c2 PushI
	var_149_int = -1; // 0x2c3 PushI
	var_150_int = 38688; // 0x2c4 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x2c5 TObjFunc
	return 0; // 0x2c7 Return
	
Label_712:
	var_151_string = ""; // 0x2c8 PushV
	var_151_string = "Neutral"; // 0x2c9 MovS
	func_528(var_20_bool, var_151_string); // 0x2ca NEW_2
	var_152_int = 536636; // 0x2cc PushI
	SetMessage(var_152_int); // 0x2cd TObjFunc
	ClearReplies(); // 0x2cf TObjFunc
	var_153_bool = 0; // 0x2d1 PushV
	var_153_bool = 0; // 0x2d2 MovB
	var_154_bool = 0; var_155_object = Obj(); // 0x2d3 PushV
	var_155_object = var_1_object; // 0x2d4 MovT
	func_5367(var_155_object); // 0x2d5 NEW_2
	if(var_154_bool == 0) goto Label_734; // 0x2d7 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x2d8 PushV
	var_161_object = var_1_object; // 0x2d9 MovT
	func_5403(var_160_bool, var_161_object); // 0x2da NEW_2
	if(var_160_bool == 0) goto Label_734; // 0x2dc JumpB
	var_153_bool = 1; // 0x2dd MovB
	
Label_734:
	if(var_153_bool == 0) goto Label_740; // 0x2de JumpB
	var_166_int = 536638; // 0x2df PushI
	var_167_int = -1; // 0x2e0 PushI
	var_168_int = 38466; // 0x2e1 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x2e2 TObjFunc
	
Label_740:
	var_169_bool = 0; // 0x2e4 PushV
	var_169_bool = 0; // 0x2e5 MovB
	var_170_bool = 0; var_171_object = Obj(); // 0x2e6 PushV
	var_171_object = var_1_object; // 0x2e7 MovT
	func_5367(var_171_object); // 0x2e8 NEW_2
	if(var_170_bool == 0) goto Label_754; // 0x2ea JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x2eb PushV
	var_173_object = var_1_object; // 0x2ec MovT
	func_5403(var_172_bool, var_173_object); // 0x2ed NEW_2
	var_174_bool = var_172_bool == 0; // 0x2ef Not
	if(var_174_bool == 0) goto Label_754; // 0x2f0 JumpB
	var_169_bool = 1; // 0x2f1 MovB
	
Label_754:
	if(var_169_bool == 0) goto Label_760; // 0x2f2 JumpB
	var_175_int = 536644; // 0x2f3 PushI
	var_176_int = -1; // 0x2f4 PushI
	var_177_int = 38472; // 0x2f5 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x2f6 TObjFunc
	
Label_760:
	var_178_bool = 0; // 0x2f8 PushV
	var_178_bool = 0; // 0x2f9 MovB
	var_179_bool = 0; var_180_object = Obj(); // 0x2fa PushV
	var_180_object = var_1_object; // 0x2fb MovT
	func_5379(var_180_object); // 0x2fc NEW_2
	if(var_179_bool == 0) goto Label_773; // 0x2fe JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x2ff PushV
	var_186_object = var_1_object; // 0x300 MovT
	func_5403(var_185_bool, var_186_object); // 0x301 NEW_2
	if(var_185_bool == 0) goto Label_773; // 0x303 JumpB
	var_178_bool = 1; // 0x304 MovB
	
Label_773:
	if(var_178_bool == 0) goto Label_779; // 0x305 JumpB
	var_187_int = 536639; // 0x306 PushI
	var_188_int = 38468; // 0x307 PushI
	var_189_int = 38467; // 0x308 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x309 TObjFunc
	
Label_779:
	var_190_bool = 0; // 0x30b PushV
	var_190_bool = 0; // 0x30c MovB
	var_191_bool = 0; var_192_object = Obj(); // 0x30d PushV
	var_192_object = var_1_object; // 0x30e MovT
	func_5379(var_192_object); // 0x30f NEW_2
	if(var_191_bool == 0) goto Label_793; // 0x311 JumpB
	var_193_bool = 0; var_194_object = Obj(); // 0x312 PushV
	var_194_object = var_1_object; // 0x313 MovT
	func_5403(var_193_bool, var_194_object); // 0x314 NEW_2
	var_195_bool = var_193_bool == 0; // 0x316 Not
	if(var_195_bool == 0) goto Label_793; // 0x317 JumpB
	var_190_bool = 1; // 0x318 MovB
	
Label_793:
	if(var_190_bool == 0) goto Label_799; // 0x319 JumpB
	var_196_int = 536642; // 0x31a PushI
	var_197_int = -1; // 0x31b PushI
	var_198_int = 38470; // 0x31c PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x31d TObjFunc
	
Label_799:
	var_199_bool = 0; // 0x31f PushV
	var_199_bool = 0; // 0x320 MovB
	var_200_bool = 0; var_201_object = Obj(); // 0x321 PushV
	var_201_object = var_1_object; // 0x322 MovT
	func_5413(var_200_bool, var_201_object); // 0x323 NEW_2
	if(var_200_bool == 0) goto Label_812; // 0x325 JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0x326 PushV
	var_203_object = var_1_object; // 0x327 MovT
	func_5367(var_203_object); // 0x328 NEW_2
	if(var_202_bool == 0) goto Label_812; // 0x32a JumpB
	var_199_bool = 1; // 0x32b MovB
	
Label_812:
	if(var_199_bool == 0) goto Label_818; // 0x32c JumpB
	var_204_int = 536645; // 0x32d PushI
	var_205_int = 38474; // 0x32e PushI
	var_206_int = 38473; // 0x32f PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x330 TObjFunc
	
Label_818:
	var_207_bool = 0; var_208_object = Obj(); // 0x332 PushV
	var_208_object = var_1_object; // 0x333 MovT
	func_5423(var_207_bool, var_208_object); // 0x334 NEW_2
	if(var_207_bool == 0) goto Label_828; // 0x336 JumpB
	var_209_int = 536663; // 0x337 PushI
	var_210_int = 38493; // 0x338 PushI
	var_211_int = 38492; // 0x339 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x33a TObjFunc
	
Label_828:
	var_212_bool = 0; var_213_object = Obj(); // 0x33c PushV
	var_213_object = var_1_object; // 0x33d MovT
	func_5433(var_212_bool, var_213_object); // 0x33e NEW_2
	if(var_212_bool == 0) goto Label_838; // 0x340 JumpB
	var_214_int = 536685; // 0x341 PushI
	var_215_int = 38517; // 0x342 PushI
	var_216_int = 38516; // 0x343 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x344 TObjFunc
	
Label_838:
	var_217_bool = 0; // 0x346 PushV
	var_217_bool = 0; // 0x347 MovB
	var_218_bool = 0; var_219_object = Obj(); // 0x348 PushV
	var_219_object = var_1_object; // 0x349 MovT
	func_5443(var_218_bool, var_219_object); // 0x34a NEW_2
	if(var_218_bool == 0) goto Label_851; // 0x34c JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x34d PushV
	var_221_object = var_1_object; // 0x34e MovT
	func_5367(var_221_object); // 0x34f NEW_2
	if(var_220_bool == 0) goto Label_851; // 0x351 JumpB
	var_217_bool = 1; // 0x352 MovB
	
Label_851:
	if(var_217_bool == 0) goto Label_857; // 0x353 JumpB
	var_222_int = 536710; // 0x354 PushI
	var_223_int = 38542; // 0x355 PushI
	var_224_int = 38541; // 0x356 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x357 TObjFunc
	
Label_857:
	var_225_bool = 0; var_226_object = Obj(); // 0x359 PushV
	var_226_object = var_1_object; // 0x35a MovT
	func_5453(var_225_bool, var_226_object); // 0x35b NEW_2
	if(var_225_bool == 0) goto Label_867; // 0x35d JumpB
	var_227_int = 536747; // 0x35e PushI
	var_228_int = 38579; // 0x35f PushI
	var_229_int = 38578; // 0x360 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x361 TObjFunc
	
Label_867:
	var_230_bool = 0; // 0x363 PushV
	var_230_bool = 0; // 0x364 MovB
	var_231_bool = 0; var_232_object = Obj(); // 0x365 PushV
	var_232_object = var_1_object; // 0x366 MovT
	func_5463(var_231_bool, var_232_object); // 0x367 NEW_2
	if(var_231_bool == 0) goto Label_880; // 0x369 JumpB
	var_233_bool = 0; var_234_object = Obj(); // 0x36a PushV
	var_234_object = var_1_object; // 0x36b MovT
	func_5367(var_234_object); // 0x36c NEW_2
	if(var_233_bool == 0) goto Label_880; // 0x36e JumpB
	var_230_bool = 1; // 0x36f MovB
	
Label_880:
	if(var_230_bool == 0) goto Label_886; // 0x370 JumpB
	var_235_int = 536769; // 0x371 PushI
	var_236_int = 38602; // 0x372 PushI
	var_237_int = 38601; // 0x373 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x374 TObjFunc
	
Label_886:
	var_238_bool = 0; var_239_object = Obj(); // 0x376 PushV
	var_239_object = var_1_object; // 0x377 MovT
	func_5473(var_238_bool, var_239_object); // 0x378 NEW_2
	if(var_238_bool == 0) goto Label_896; // 0x37a JumpB
	var_240_int = 536782; // 0x37b PushI
	var_241_int = 38617; // 0x37c PushI
	var_242_int = 38616; // 0x37d PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x37e TObjFunc
	
Label_896:
	var_243_bool = 0; // 0x380 PushV
	var_243_bool = 0; // 0x381 MovB
	var_244_bool = 0; var_245_object = Obj(); // 0x382 PushV
	var_245_object = var_1_object; // 0x383 MovT
	func_5483(var_244_bool, var_245_object); // 0x384 NEW_2
	if(var_244_bool == 0) goto Label_909; // 0x386 JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0x387 PushV
	var_251_object = var_1_object; // 0x388 MovT
	func_5367(var_251_object); // 0x389 NEW_2
	if(var_250_bool == 0) goto Label_909; // 0x38b JumpB
	var_243_bool = 1; // 0x38c MovB
	
Label_909:
	if(var_243_bool == 0) goto Label_915; // 0x38d JumpB
	var_252_int = 536792; // 0x38e PushI
	var_253_int = 38627; // 0x38f PushI
	var_254_int = 38626; // 0x390 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x391 TObjFunc
	
Label_915:
	var_255_bool = 0; var_256_object = Obj(); // 0x393 PushV
	var_256_object = var_1_object; // 0x394 MovT
	func_5493(var_255_bool, var_256_object); // 0x395 NEW_2
	if(var_255_bool == 0) goto Label_925; // 0x397 JumpB
	var_261_int = 536814; // 0x398 PushI
	var_262_int = 38651; // 0x399 PushI
	var_263_int = 38650; // 0x39a PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x39b TObjFunc
	
Label_925:
	var_264_bool = 0; // 0x39d PushV
	var_264_bool = 0; // 0x39e MovB
	var_265_bool = 0; var_266_object = Obj(); // 0x39f PushV
	var_266_object = var_1_object; // 0x3a0 MovT
	func_5503(var_265_bool, var_266_object); // 0x3a1 NEW_2
	if(var_265_bool == 0) goto Label_938; // 0x3a3 JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0x3a4 PushV
	var_272_object = var_1_object; // 0x3a5 MovT
	func_5367(var_272_object); // 0x3a6 NEW_2
	if(var_271_bool == 0) goto Label_938; // 0x3a8 JumpB
	var_264_bool = 1; // 0x3a9 MovB
	
Label_938:
	if(var_264_bool == 0) goto Label_944; // 0x3aa JumpB
	var_273_int = 536833; // 0x3ab PushI
	var_274_int = 38670; // 0x3ac PushI
	var_275_int = 38669; // 0x3ad PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x3ae TObjFunc
	
Label_944:
	var_276_bool = 0; var_277_object = Obj(); // 0x3b0 PushV
	var_277_object = var_1_object; // 0x3b1 MovT
	func_5513(var_276_bool, var_277_object); // 0x3b2 NEW_2
	if(var_276_bool == 0) goto Label_954; // 0x3b4 JumpB
	var_282_int = 536843; // 0x3b5 PushI
	var_283_int = 38680; // 0x3b6 PushI
	var_284_int = 38679; // 0x3b7 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x3b8 TObjFunc
	
Label_954:
	var_285_bool = 0; var_286_object = Obj(); // 0x3ba PushV
	var_286_object = var_1_object; // 0x3bb MovT
	func_5367(var_286_object); // 0x3bc NEW_2
	if(var_285_bool == 0) goto Label_964; // 0x3be JumpB
	var_287_int = 536850; // 0x3bf PushI
	var_288_int = -1; // 0x3c0 PushI
	var_289_int = 38686; // 0x3c1 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x3c2 TObjFunc
	
Label_964:
	var_290_bool = 0; var_291_object = Obj(); // 0x3c4 PushV
	var_291_object = var_1_object; // 0x3c5 MovT
	func_5379(var_291_object); // 0x3c6 NEW_2
	if(var_290_bool == 0) goto Label_974; // 0x3c8 JumpB
	var_292_int = 536851; // 0x3c9 PushI
	var_293_int = -1; // 0x3ca PushI
	var_294_int = 38687; // 0x3cb PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x3cc TObjFunc
	
Label_974:
	return 0; // 0x3ce Return
	
Label_975:
	var_295_int = 38680; // 0x3cf PushI
	var_296_bool = var_19_object == var_295_int; // 0x3d0 Eq
	if(var_296_bool == 0) goto Label_1003; // 0x3d1 JumpB
	var_297_string = ""; // 0x3d2 PushV
	var_297_string = "Neutral"; // 0x3d3 MovS
	func_528(var_20_bool, var_297_string); // 0x3d4 NEW_2
	var_298_int = 536844; // 0x3d6 PushI
	SetMessage(var_298_int); // 0x3d7 TObjFunc
	ClearReplies(); // 0x3d9 TObjFunc
	var_299_int = 536845; // 0x3db PushI
	var_300_int = 38682; // 0x3dc PushI
	var_301_int = 38681; // 0x3dd PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x3de TObjFunc
	var_302_bool = 0; var_303_object = Obj(); // 0x3e0 PushV
	var_303_object = var_1_object; // 0x3e1 MovT
	func_5367(var_303_object); // 0x3e2 NEW_2
	if(var_302_bool == 0) goto Label_1002; // 0x3e4 JumpB
	var_304_int = 536849; // 0x3e5 PushI
	var_305_int = -1; // 0x3e6 PushI
	var_306_int = 38685; // 0x3e7 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x3e8 TObjFunc
	
Label_1002:
	return 0; // 0x3ea Return
	
Label_1003:
	var_307_int = 38682; // 0x3eb PushI
	var_308_bool = var_19_object == var_307_int; // 0x3ec Eq
	if(var_308_bool == 0) goto Label_1026; // 0x3ed JumpB
	var_309_string = ""; // 0x3ee PushV
	var_309_string = "Neutral"; // 0x3ef MovS
	func_528(var_20_bool, var_309_string); // 0x3f0 NEW_2
	var_310_int = 536846; // 0x3f2 PushI
	SetMessage(var_310_int); // 0x3f3 TObjFunc
	ClearReplies(); // 0x3f5 TObjFunc
	var_311_int = 536847; // 0x3f7 PushI
	var_312_int = -1; // 0x3f8 PushI
	var_313_int = 38683; // 0x3f9 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x3fa TObjFunc
	var_314_int = 536848; // 0x3fc PushI
	var_315_int = -1; // 0x3fd PushI
	var_316_int = 38684; // 0x3fe PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x3ff TObjFunc
	return 0; // 0x401 Return
	
Label_1026:
	var_317_int = 38670; // 0x402 PushI
	var_318_bool = var_19_object == var_317_int; // 0x403 Eq
	if(var_318_bool == 0) goto Label_1049; // 0x404 JumpB
	var_319_string = ""; // 0x405 PushV
	var_319_string = "Neutral"; // 0x406 MovS
	func_528(var_20_bool, var_319_string); // 0x407 NEW_2
	var_320_int = 536834; // 0x409 PushI
	SetMessage(var_320_int); // 0x40a TObjFunc
	ClearReplies(); // 0x40c TObjFunc
	var_321_int = 536835; // 0x40e PushI
	var_322_int = 38672; // 0x40f PushI
	var_323_int = 38671; // 0x410 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x411 TObjFunc
	var_324_int = 536842; // 0x413 PushI
	var_325_int = -1; // 0x414 PushI
	var_326_int = 38678; // 0x415 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x416 TObjFunc
	return 0; // 0x418 Return
	
Label_1049:
	var_327_int = 38672; // 0x419 PushI
	var_328_bool = var_19_object == var_327_int; // 0x41a Eq
	if(var_328_bool == 0) goto Label_1072; // 0x41b JumpB
	var_329_string = ""; // 0x41c PushV
	var_329_string = "Neutral"; // 0x41d MovS
	func_528(var_20_bool, var_329_string); // 0x41e NEW_2
	var_330_int = 536836; // 0x420 PushI
	SetMessage(var_330_int); // 0x421 TObjFunc
	ClearReplies(); // 0x423 TObjFunc
	var_331_int = 536837; // 0x425 PushI
	var_332_int = 38674; // 0x426 PushI
	var_333_int = 38673; // 0x427 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x428 TObjFunc
	var_334_int = 536841; // 0x42a PushI
	var_335_int = -1; // 0x42b PushI
	var_336_int = 38677; // 0x42c PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x42d TObjFunc
	return 0; // 0x42f Return
	
Label_1072:
	var_337_int = 38674; // 0x430 PushI
	var_338_bool = var_19_object == var_337_int; // 0x431 Eq
	if(var_338_bool == 0) goto Label_1095; // 0x432 JumpB
	var_339_string = ""; // 0x433 PushV
	var_339_string = "Neutral"; // 0x434 MovS
	func_528(var_20_bool, var_339_string); // 0x435 NEW_2
	var_340_int = 536838; // 0x437 PushI
	SetMessage(var_340_int); // 0x438 TObjFunc
	ClearReplies(); // 0x43a TObjFunc
	var_341_int = 536839; // 0x43c PushI
	var_342_int = -1; // 0x43d PushI
	var_343_int = 38675; // 0x43e PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x43f TObjFunc
	var_344_int = 536840; // 0x441 PushI
	var_345_int = -1; // 0x442 PushI
	var_346_int = 38676; // 0x443 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x444 TObjFunc
	return 0; // 0x446 Return
	
Label_1095:
	var_347_int = 38651; // 0x447 PushI
	var_348_bool = var_19_object == var_347_int; // 0x448 Eq
	if(var_348_bool == 0) goto Label_1128; // 0x449 JumpB
	var_349_string = ""; // 0x44a PushV
	var_349_string = "Neutral"; // 0x44b MovS
	func_528(var_20_bool, var_349_string); // 0x44c NEW_2
	var_350_int = 536815; // 0x44e PushI
	SetMessage(var_350_int); // 0x44f TObjFunc
	ClearReplies(); // 0x451 TObjFunc
	var_351_bool = 0; var_352_object = Obj(); // 0x453 PushV
	var_352_object = var_1_object; // 0x454 MovT
	func_5367(var_352_object); // 0x455 NEW_2
	if(var_351_bool == 0) goto Label_1117; // 0x457 JumpB
	var_353_int = 536816; // 0x458 PushI
	var_354_int = 38653; // 0x459 PushI
	var_355_int = 38652; // 0x45a PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x45b TObjFunc
	
Label_1117:
	var_356_int = 536823; // 0x45d PushI
	var_357_int = 38660; // 0x45e PushI
	var_358_int = 38659; // 0x45f PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x460 TObjFunc
	var_359_int = 536832; // 0x462 PushI
	var_360_int = -1; // 0x463 PushI
	var_361_int = 38668; // 0x464 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x465 TObjFunc
	return 0; // 0x467 Return
	
Label_1128:
	var_362_int = 38660; // 0x468 PushI
	var_363_bool = var_19_object == var_362_int; // 0x469 Eq
	if(var_363_bool == 0) goto Label_1156; // 0x46a JumpB
	var_364_string = ""; // 0x46b PushV
	var_364_string = "Neutral"; // 0x46c MovS
	func_528(var_20_bool, var_364_string); // 0x46d NEW_2
	var_365_int = 536824; // 0x46f PushI
	SetMessage(var_365_int); // 0x470 TObjFunc
	ClearReplies(); // 0x472 TObjFunc
	var_366_int = 536825; // 0x474 PushI
	var_367_int = 38662; // 0x475 PushI
	var_368_int = 38661; // 0x476 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x477 TObjFunc
	var_369_int = 536830; // 0x479 PushI
	var_370_int = -1; // 0x47a PushI
	var_371_int = 38666; // 0x47b PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x47c TObjFunc
	var_372_int = 536831; // 0x47e PushI
	var_373_int = -1; // 0x47f PushI
	var_374_int = 38667; // 0x480 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x481 TObjFunc
	return 0; // 0x483 Return
	
Label_1156:
	var_375_int = 38662; // 0x484 PushI
	var_376_bool = var_19_object == var_375_int; // 0x485 Eq
	if(var_376_bool == 0) goto Label_1174; // 0x486 JumpB
	var_377_string = ""; // 0x487 PushV
	var_377_string = "Neutral"; // 0x488 MovS
	func_528(var_20_bool, var_377_string); // 0x489 NEW_2
	var_378_int = 536826; // 0x48b PushI
	SetMessage(var_378_int); // 0x48c TObjFunc
	ClearReplies(); // 0x48e TObjFunc
	var_379_int = 536827; // 0x490 PushI
	var_380_int = 38664; // 0x491 PushI
	var_381_int = 38663; // 0x492 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x493 TObjFunc
	return 0; // 0x495 Return
	
Label_1174:
	var_382_int = 38664; // 0x496 PushI
	var_383_bool = var_19_object == var_382_int; // 0x497 Eq
	if(var_383_bool == 0) goto Label_1192; // 0x498 JumpB
	var_384_string = ""; // 0x499 PushV
	var_384_string = "Neutral"; // 0x49a MovS
	func_528(var_20_bool, var_384_string); // 0x49b NEW_2
	var_385_int = 536828; // 0x49d PushI
	SetMessage(var_385_int); // 0x49e TObjFunc
	ClearReplies(); // 0x4a0 TObjFunc
	var_386_int = 536829; // 0x4a2 PushI
	var_387_int = -1; // 0x4a3 PushI
	var_388_int = 38665; // 0x4a4 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x4a5 TObjFunc
	return 0; // 0x4a7 Return
	
Label_1192:
	var_389_int = 38653; // 0x4a8 PushI
	var_390_bool = var_19_object == var_389_int; // 0x4a9 Eq
	if(var_390_bool == 0) goto Label_1215; // 0x4aa JumpB
	var_391_string = ""; // 0x4ab PushV
	var_391_string = "Neutral"; // 0x4ac MovS
	func_528(var_20_bool, var_391_string); // 0x4ad NEW_2
	var_392_int = 536817; // 0x4af PushI
	SetMessage(var_392_int); // 0x4b0 TObjFunc
	ClearReplies(); // 0x4b2 TObjFunc
	var_393_int = 536818; // 0x4b4 PushI
	var_394_int = 38655; // 0x4b5 PushI
	var_395_int = 38654; // 0x4b6 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x4b7 TObjFunc
	var_396_int = 536822; // 0x4b9 PushI
	var_397_int = -1; // 0x4ba PushI
	var_398_int = 38658; // 0x4bb PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x4bc TObjFunc
	return 0; // 0x4be Return
	
Label_1215:
	var_399_int = 38655; // 0x4bf PushI
	var_400_bool = var_19_object == var_399_int; // 0x4c0 Eq
	if(var_400_bool == 0) goto Label_1238; // 0x4c1 JumpB
	var_401_string = ""; // 0x4c2 PushV
	var_401_string = "Neutral"; // 0x4c3 MovS
	func_528(var_20_bool, var_401_string); // 0x4c4 NEW_2
	var_402_int = 536819; // 0x4c6 PushI
	SetMessage(var_402_int); // 0x4c7 TObjFunc
	ClearReplies(); // 0x4c9 TObjFunc
	var_403_int = 536820; // 0x4cb PushI
	var_404_int = -1; // 0x4cc PushI
	var_405_int = 38656; // 0x4cd PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x4ce TObjFunc
	var_406_int = 536821; // 0x4d0 PushI
	var_407_int = -1; // 0x4d1 PushI
	var_408_int = 38657; // 0x4d2 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x4d3 TObjFunc
	return 0; // 0x4d5 Return
	
Label_1238:
	var_409_int = 38627; // 0x4d6 PushI
	var_410_bool = var_19_object == var_409_int; // 0x4d7 Eq
	if(var_410_bool == 0) goto Label_1266; // 0x4d8 JumpB
	var_411_string = ""; // 0x4d9 PushV
	var_411_string = "Neutral"; // 0x4da MovS
	func_528(var_20_bool, var_411_string); // 0x4db NEW_2
	var_412_int = 536793; // 0x4dd PushI
	SetMessage(var_412_int); // 0x4de TObjFunc
	ClearReplies(); // 0x4e0 TObjFunc
	var_413_int = 536794; // 0x4e2 PushI
	var_414_int = 38629; // 0x4e3 PushI
	var_415_int = 38628; // 0x4e4 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x4e5 TObjFunc
	var_416_int = 536806; // 0x4e7 PushI
	var_417_int = 38642; // 0x4e8 PushI
	var_418_int = 38641; // 0x4e9 PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0x4ea TObjFunc
	var_419_int = 536813; // 0x4ec PushI
	var_420_int = -1; // 0x4ed PushI
	var_421_int = 38649; // 0x4ee PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x4ef TObjFunc
	return 0; // 0x4f1 Return
	
Label_1266:
	var_422_int = 38642; // 0x4f2 PushI
	var_423_bool = var_19_object == var_422_int; // 0x4f3 Eq
	if(var_423_bool == 0) goto Label_1289; // 0x4f4 JumpB
	var_424_string = ""; // 0x4f5 PushV
	var_424_string = "Neutral"; // 0x4f6 MovS
	func_528(var_20_bool, var_424_string); // 0x4f7 NEW_2
	var_425_int = 536807; // 0x4f9 PushI
	SetMessage(var_425_int); // 0x4fa TObjFunc
	ClearReplies(); // 0x4fc TObjFunc
	var_426_int = 536808; // 0x4fe PushI
	var_427_int = 38644; // 0x4ff PushI
	var_428_int = 38643; // 0x500 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x501 TObjFunc
	var_429_int = 536812; // 0x503 PushI
	var_430_int = 38644; // 0x504 PushI
	var_431_int = 38647; // 0x505 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x506 TObjFunc
	return 0; // 0x508 Return
	
Label_1289:
	var_432_int = 38644; // 0x509 PushI
	var_433_bool = var_19_object == var_432_int; // 0x50a Eq
	if(var_433_bool == 0) goto Label_1312; // 0x50b JumpB
	var_434_string = ""; // 0x50c PushV
	var_434_string = "Neutral"; // 0x50d MovS
	func_528(var_20_bool, var_434_string); // 0x50e NEW_2
	var_435_int = 536809; // 0x510 PushI
	SetMessage(var_435_int); // 0x511 TObjFunc
	ClearReplies(); // 0x513 TObjFunc
	var_436_int = 536810; // 0x515 PushI
	var_437_int = -1; // 0x516 PushI
	var_438_int = 38645; // 0x517 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x518 TObjFunc
	var_439_int = 536811; // 0x51a PushI
	var_440_int = -1; // 0x51b PushI
	var_441_int = 38646; // 0x51c PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x51d TObjFunc
	return 0; // 0x51f Return
	
Label_1312:
	var_442_int = 38629; // 0x520 PushI
	var_443_bool = var_19_object == var_442_int; // 0x521 Eq
	if(var_443_bool == 0) goto Label_1335; // 0x522 JumpB
	var_444_string = ""; // 0x523 PushV
	var_444_string = "Neutral"; // 0x524 MovS
	func_528(var_20_bool, var_444_string); // 0x525 NEW_2
	var_445_int = 536795; // 0x527 PushI
	SetMessage(var_445_int); // 0x528 TObjFunc
	ClearReplies(); // 0x52a TObjFunc
	var_446_int = 536796; // 0x52c PushI
	var_447_int = 38631; // 0x52d PushI
	var_448_int = 38630; // 0x52e PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x52f TObjFunc
	var_449_int = 536805; // 0x531 PushI
	var_450_int = -1; // 0x532 PushI
	var_451_int = 38640; // 0x533 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x534 TObjFunc
	return 0; // 0x536 Return
	
Label_1335:
	var_452_int = 38631; // 0x537 PushI
	var_453_bool = var_19_object == var_452_int; // 0x538 Eq
	if(var_453_bool == 0) goto Label_1358; // 0x539 JumpB
	var_454_string = ""; // 0x53a PushV
	var_454_string = "Neutral"; // 0x53b MovS
	func_528(var_20_bool, var_454_string); // 0x53c NEW_2
	var_455_int = 536797; // 0x53e PushI
	SetMessage(var_455_int); // 0x53f TObjFunc
	ClearReplies(); // 0x541 TObjFunc
	var_456_int = 536798; // 0x543 PushI
	var_457_int = 38633; // 0x544 PushI
	var_458_int = 38632; // 0x545 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x546 TObjFunc
	var_459_int = 536804; // 0x548 PushI
	var_460_int = -1; // 0x549 PushI
	var_461_int = 38639; // 0x54a PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x54b TObjFunc
	return 0; // 0x54d Return
	
Label_1358:
	var_462_int = 38633; // 0x54e PushI
	var_463_bool = var_19_object == var_462_int; // 0x54f Eq
	if(var_463_bool == 0) goto Label_1381; // 0x550 JumpB
	var_464_string = ""; // 0x551 PushV
	var_464_string = "Neutral"; // 0x552 MovS
	func_528(var_20_bool, var_464_string); // 0x553 NEW_2
	var_465_int = 536799; // 0x555 PushI
	SetMessage(var_465_int); // 0x556 TObjFunc
	ClearReplies(); // 0x558 TObjFunc
	var_466_int = 536800; // 0x55a PushI
	var_467_int = 38635; // 0x55b PushI
	var_468_int = 38634; // 0x55c PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x55d TObjFunc
	var_469_int = 536803; // 0x55f PushI
	var_470_int = 38635; // 0x560 PushI
	var_471_int = 38637; // 0x561 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x562 TObjFunc
	return 0; // 0x564 Return
	
Label_1381:
	var_472_int = 38635; // 0x565 PushI
	var_473_bool = var_19_object == var_472_int; // 0x566 Eq
	if(var_473_bool == 0) goto Label_1399; // 0x567 JumpB
	var_474_string = ""; // 0x568 PushV
	var_474_string = "Neutral"; // 0x569 MovS
	func_528(var_20_bool, var_474_string); // 0x56a NEW_2
	var_475_int = 536801; // 0x56c PushI
	SetMessage(var_475_int); // 0x56d TObjFunc
	ClearReplies(); // 0x56f TObjFunc
	var_476_int = 536802; // 0x571 PushI
	var_477_int = -1; // 0x572 PushI
	var_478_int = 38636; // 0x573 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x574 TObjFunc
	return 0; // 0x576 Return
	
Label_1399:
	var_479_int = 38617; // 0x577 PushI
	var_480_bool = var_19_object == var_479_int; // 0x578 Eq
	if(var_480_bool == 0) goto Label_1422; // 0x579 JumpB
	var_481_string = ""; // 0x57a PushV
	var_481_string = "Neutral"; // 0x57b MovS
	func_528(var_20_bool, var_481_string); // 0x57c NEW_2
	var_482_int = 536783; // 0x57e PushI
	SetMessage(var_482_int); // 0x57f TObjFunc
	ClearReplies(); // 0x581 TObjFunc
	var_483_int = 536784; // 0x583 PushI
	var_484_int = 38619; // 0x584 PushI
	var_485_int = 38618; // 0x585 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x586 TObjFunc
	var_486_int = 536791; // 0x588 PushI
	var_487_int = -1; // 0x589 PushI
	var_488_int = 38625; // 0x58a PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x58b TObjFunc
	return 0; // 0x58d Return
	
Label_1422:
	var_489_int = 38619; // 0x58e PushI
	var_490_bool = var_19_object == var_489_int; // 0x58f Eq
	if(var_490_bool == 0) goto Label_1445; // 0x590 JumpB
	var_491_string = ""; // 0x591 PushV
	var_491_string = "Neutral"; // 0x592 MovS
	func_528(var_20_bool, var_491_string); // 0x593 NEW_2
	var_492_int = 536785; // 0x595 PushI
	SetMessage(var_492_int); // 0x596 TObjFunc
	ClearReplies(); // 0x598 TObjFunc
	var_493_int = 536786; // 0x59a PushI
	var_494_int = 38621; // 0x59b PushI
	var_495_int = 38620; // 0x59c PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x59d TObjFunc
	var_496_int = 536790; // 0x59f PushI
	var_497_int = -1; // 0x5a0 PushI
	var_498_int = 38624; // 0x5a1 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x5a2 TObjFunc
	return 0; // 0x5a4 Return
	
Label_1445:
	var_499_int = 38621; // 0x5a5 PushI
	var_500_bool = var_19_object == var_499_int; // 0x5a6 Eq
	if(var_500_bool == 0) goto Label_1473; // 0x5a7 JumpB
	var_501_string = ""; // 0x5a8 PushV
	var_501_string = "Neutral"; // 0x5a9 MovS
	func_528(var_20_bool, var_501_string); // 0x5aa NEW_2
	var_502_int = 536787; // 0x5ac PushI
	SetMessage(var_502_int); // 0x5ad TObjFunc
	ClearReplies(); // 0x5af TObjFunc
	var_503_bool = 0; var_504_object = Obj(); // 0x5b1 PushV
	var_504_object = var_1_object; // 0x5b2 MovT
	func_5367(var_504_object); // 0x5b3 NEW_2
	if(var_503_bool == 0) goto Label_1467; // 0x5b5 JumpB
	var_505_int = 536788; // 0x5b6 PushI
	var_506_int = -1; // 0x5b7 PushI
	var_507_int = 38622; // 0x5b8 PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x5b9 TObjFunc
	
Label_1467:
	var_508_int = 536789; // 0x5bb PushI
	var_509_int = -1; // 0x5bc PushI
	var_510_int = 38623; // 0x5bd PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x5be TObjFunc
	return 0; // 0x5c0 Return
	
Label_1473:
	var_511_int = 38602; // 0x5c1 PushI
	var_512_bool = var_19_object == var_511_int; // 0x5c2 Eq
	if(var_512_bool == 0) goto Label_1496; // 0x5c3 JumpB
	var_513_string = ""; // 0x5c4 PushV
	var_513_string = "Neutral"; // 0x5c5 MovS
	func_528(var_20_bool, var_513_string); // 0x5c6 NEW_2
	var_514_int = 536770; // 0x5c8 PushI
	SetMessage(var_514_int); // 0x5c9 TObjFunc
	ClearReplies(); // 0x5cb TObjFunc
	var_515_int = 536771; // 0x5cd PushI
	var_516_int = 38604; // 0x5ce PushI
	var_517_int = 38603; // 0x5cf PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x5d0 TObjFunc
	var_518_int = 536781; // 0x5d2 PushI
	var_519_int = -1; // 0x5d3 PushI
	var_520_int = 38615; // 0x5d4 PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0x5d5 TObjFunc
	return 0; // 0x5d7 Return
	
Label_1496:
	var_521_int = 38604; // 0x5d8 PushI
	var_522_bool = var_19_object == var_521_int; // 0x5d9 Eq
	if(var_522_bool == 0) goto Label_1519; // 0x5da JumpB
	var_523_string = ""; // 0x5db PushV
	var_523_string = "Neutral"; // 0x5dc MovS
	func_528(var_20_bool, var_523_string); // 0x5dd NEW_2
	var_524_int = 536772; // 0x5df PushI
	SetMessage(var_524_int); // 0x5e0 TObjFunc
	ClearReplies(); // 0x5e2 TObjFunc
	var_525_int = 536773; // 0x5e4 PushI
	var_526_int = 38606; // 0x5e5 PushI
	var_527_int = 38605; // 0x5e6 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x5e7 TObjFunc
	var_528_int = 536780; // 0x5e9 PushI
	var_529_int = 38606; // 0x5ea PushI
	var_530_int = 38613; // 0x5eb PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x5ec TObjFunc
	return 0; // 0x5ee Return
	
Label_1519:
	var_531_int = 38606; // 0x5ef PushI
	var_532_bool = var_19_object == var_531_int; // 0x5f0 Eq
	if(var_532_bool == 0) goto Label_1542; // 0x5f1 JumpB
	var_533_string = ""; // 0x5f2 PushV
	var_533_string = "Neutral"; // 0x5f3 MovS
	func_528(var_20_bool, var_533_string); // 0x5f4 NEW_2
	var_534_int = 536774; // 0x5f6 PushI
	SetMessage(var_534_int); // 0x5f7 TObjFunc
	ClearReplies(); // 0x5f9 TObjFunc
	var_535_int = 536775; // 0x5fb PushI
	var_536_int = 38608; // 0x5fc PushI
	var_537_int = 38607; // 0x5fd PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x5fe TObjFunc
	var_538_int = 536779; // 0x600 PushI
	var_539_int = 38608; // 0x601 PushI
	var_540_int = 38611; // 0x602 PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x603 TObjFunc
	return 0; // 0x605 Return
	
Label_1542:
	var_541_int = 38608; // 0x606 PushI
	var_542_bool = var_19_object == var_541_int; // 0x607 Eq
	if(var_542_bool == 0) goto Label_1565; // 0x608 JumpB
	var_543_string = ""; // 0x609 PushV
	var_543_string = "Neutral"; // 0x60a MovS
	func_528(var_20_bool, var_543_string); // 0x60b NEW_2
	var_544_int = 536776; // 0x60d PushI
	SetMessage(var_544_int); // 0x60e TObjFunc
	ClearReplies(); // 0x610 TObjFunc
	var_545_int = 536777; // 0x612 PushI
	var_546_int = -1; // 0x613 PushI
	var_547_int = 38609; // 0x614 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x615 TObjFunc
	var_548_int = 536778; // 0x617 PushI
	var_549_int = -1; // 0x618 PushI
	var_550_int = 38610; // 0x619 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x61a TObjFunc
	return 0; // 0x61c Return
	
Label_1565:
	var_551_int = 38579; // 0x61d PushI
	var_552_bool = var_19_object == var_551_int; // 0x61e Eq
	if(var_552_bool == 0) goto Label_1598; // 0x61f JumpB
	var_553_string = ""; // 0x620 PushV
	var_553_string = "Neutral"; // 0x621 MovS
	func_528(var_20_bool, var_553_string); // 0x622 NEW_2
	var_554_int = 536748; // 0x624 PushI
	SetMessage(var_554_int); // 0x625 TObjFunc
	ClearReplies(); // 0x627 TObjFunc
	var_555_bool = 0; var_556_object = Obj(); // 0x629 PushV
	var_556_object = var_1_object; // 0x62a MovT
	func_5367(var_556_object); // 0x62b NEW_2
	if(var_555_bool == 0) goto Label_1587; // 0x62d JumpB
	var_557_int = 536749; // 0x62e PushI
	var_558_int = 38581; // 0x62f PushI
	var_559_int = 38580; // 0x630 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x631 TObjFunc
	
Label_1587:
	var_560_int = 536761; // 0x633 PushI
	var_561_int = 38593; // 0x634 PushI
	var_562_int = 38592; // 0x635 PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x636 TObjFunc
	var_563_int = 536768; // 0x638 PushI
	var_564_int = -1; // 0x639 PushI
	var_565_int = 38600; // 0x63a PushI
	AddReply(var_563_int, var_564_int, var_565_int); // 0x63b TObjFunc
	return 0; // 0x63d Return
	
Label_1598:
	var_566_int = 38593; // 0x63e PushI
	var_567_bool = var_19_object == var_566_int; // 0x63f Eq
	if(var_567_bool == 0) goto Label_1621; // 0x640 JumpB
	var_568_string = ""; // 0x641 PushV
	var_568_string = "Neutral"; // 0x642 MovS
	func_528(var_20_bool, var_568_string); // 0x643 NEW_2
	var_569_int = 536762; // 0x645 PushI
	SetMessage(var_569_int); // 0x646 TObjFunc
	ClearReplies(); // 0x648 TObjFunc
	var_570_int = 536763; // 0x64a PushI
	var_571_int = 38595; // 0x64b PushI
	var_572_int = 38594; // 0x64c PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x64d TObjFunc
	var_573_int = 536767; // 0x64f PushI
	var_574_int = 38595; // 0x650 PushI
	var_575_int = 38598; // 0x651 PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x652 TObjFunc
	return 0; // 0x654 Return
	
Label_1621:
	var_576_int = 38595; // 0x655 PushI
	var_577_bool = var_19_object == var_576_int; // 0x656 Eq
	if(var_577_bool == 0) goto Label_1644; // 0x657 JumpB
	var_578_string = ""; // 0x658 PushV
	var_578_string = "Neutral"; // 0x659 MovS
	func_528(var_20_bool, var_578_string); // 0x65a NEW_2
	var_579_int = 536764; // 0x65c PushI
	SetMessage(var_579_int); // 0x65d TObjFunc
	ClearReplies(); // 0x65f TObjFunc
	var_580_int = 536765; // 0x661 PushI
	var_581_int = -1; // 0x662 PushI
	var_582_int = 38596; // 0x663 PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0x664 TObjFunc
	var_583_int = 536766; // 0x666 PushI
	var_584_int = -1; // 0x667 PushI
	var_585_int = 38597; // 0x668 PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x669 TObjFunc
	return 0; // 0x66b Return
	
Label_1644:
	var_586_int = 38581; // 0x66c PushI
	var_587_bool = var_19_object == var_586_int; // 0x66d Eq
	if(var_587_bool == 0) goto Label_1667; // 0x66e JumpB
	var_588_string = ""; // 0x66f PushV
	var_588_string = "Neutral"; // 0x670 MovS
	func_528(var_20_bool, var_588_string); // 0x671 NEW_2
	var_589_int = 536750; // 0x673 PushI
	SetMessage(var_589_int); // 0x674 TObjFunc
	ClearReplies(); // 0x676 TObjFunc
	var_590_int = 536751; // 0x678 PushI
	var_591_int = 38583; // 0x679 PushI
	var_592_int = 38582; // 0x67a PushI
	AddReply(var_590_int, var_591_int, var_592_int); // 0x67b TObjFunc
	var_593_int = 536760; // 0x67d PushI
	var_594_int = -1; // 0x67e PushI
	var_595_int = 38591; // 0x67f PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x680 TObjFunc
	return 0; // 0x682 Return
	
Label_1667:
	var_596_int = 38583; // 0x683 PushI
	var_597_bool = var_19_object == var_596_int; // 0x684 Eq
	if(var_597_bool == 0) goto Label_1685; // 0x685 JumpB
	var_598_string = ""; // 0x686 PushV
	var_598_string = "Neutral"; // 0x687 MovS
	func_528(var_20_bool, var_598_string); // 0x688 NEW_2
	var_599_int = 536752; // 0x68a PushI
	SetMessage(var_599_int); // 0x68b TObjFunc
	ClearReplies(); // 0x68d TObjFunc
	var_600_int = 536753; // 0x68f PushI
	var_601_int = 38585; // 0x690 PushI
	var_602_int = 38584; // 0x691 PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x692 TObjFunc
	return 0; // 0x694 Return
	
Label_1685:
	var_603_int = 38585; // 0x695 PushI
	var_604_bool = var_19_object == var_603_int; // 0x696 Eq
	if(var_604_bool == 0) goto Label_1708; // 0x697 JumpB
	var_605_string = ""; // 0x698 PushV
	var_605_string = "Neutral"; // 0x699 MovS
	func_528(var_20_bool, var_605_string); // 0x69a NEW_2
	var_606_int = 536754; // 0x69c PushI
	SetMessage(var_606_int); // 0x69d TObjFunc
	ClearReplies(); // 0x69f TObjFunc
	var_607_int = 536755; // 0x6a1 PushI
	var_608_int = 38587; // 0x6a2 PushI
	var_609_int = 38586; // 0x6a3 PushI
	AddReply(var_607_int, var_608_int, var_609_int); // 0x6a4 TObjFunc
	var_610_int = 536759; // 0x6a6 PushI
	var_611_int = -1; // 0x6a7 PushI
	var_612_int = 38590; // 0x6a8 PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0x6a9 TObjFunc
	return 0; // 0x6ab Return
	
Label_1708:
	var_613_int = 38587; // 0x6ac PushI
	var_614_bool = var_19_object == var_613_int; // 0x6ad Eq
	if(var_614_bool == 0) goto Label_1731; // 0x6ae JumpB
	var_615_string = ""; // 0x6af PushV
	var_615_string = "Neutral"; // 0x6b0 MovS
	func_528(var_20_bool, var_615_string); // 0x6b1 NEW_2
	var_616_int = 536756; // 0x6b3 PushI
	SetMessage(var_616_int); // 0x6b4 TObjFunc
	ClearReplies(); // 0x6b6 TObjFunc
	var_617_int = 536757; // 0x6b8 PushI
	var_618_int = -1; // 0x6b9 PushI
	var_619_int = 38588; // 0x6ba PushI
	AddReply(var_617_int, var_618_int, var_619_int); // 0x6bb TObjFunc
	var_620_int = 536758; // 0x6bd PushI
	var_621_int = -1; // 0x6be PushI
	var_622_int = 38589; // 0x6bf PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x6c0 TObjFunc
	return 0; // 0x6c2 Return
	
Label_1731:
	var_623_int = 38542; // 0x6c3 PushI
	var_624_bool = var_19_object == var_623_int; // 0x6c4 Eq
	if(var_624_bool == 0) goto Label_1759; // 0x6c5 JumpB
	var_625_string = ""; // 0x6c6 PushV
	var_625_string = "Neutral"; // 0x6c7 MovS
	func_528(var_20_bool, var_625_string); // 0x6c8 NEW_2
	var_626_int = 536711; // 0x6ca PushI
	SetMessage(var_626_int); // 0x6cb TObjFunc
	ClearReplies(); // 0x6cd TObjFunc
	var_627_int = 536712; // 0x6cf PushI
	var_628_int = 38544; // 0x6d0 PushI
	var_629_int = 38543; // 0x6d1 PushI
	AddReply(var_627_int, var_628_int, var_629_int); // 0x6d2 TObjFunc
	var_630_int = 536730; // 0x6d4 PushI
	var_631_int = 38562; // 0x6d5 PushI
	var_632_int = 38561; // 0x6d6 PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0x6d7 TObjFunc
	var_633_int = 536746; // 0x6d9 PushI
	var_634_int = -1; // 0x6da PushI
	var_635_int = 38577; // 0x6db PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0x6dc TObjFunc
	return 0; // 0x6de Return
	
Label_1759:
	var_636_int = 38562; // 0x6df PushI
	var_637_bool = var_19_object == var_636_int; // 0x6e0 Eq
	if(var_637_bool == 0) goto Label_1782; // 0x6e1 JumpB
	var_638_string = ""; // 0x6e2 PushV
	var_638_string = "Neutral"; // 0x6e3 MovS
	func_528(var_20_bool, var_638_string); // 0x6e4 NEW_2
	var_639_int = 536731; // 0x6e6 PushI
	SetMessage(var_639_int); // 0x6e7 TObjFunc
	ClearReplies(); // 0x6e9 TObjFunc
	var_640_int = 536732; // 0x6eb PushI
	var_641_int = 38564; // 0x6ec PushI
	var_642_int = 38563; // 0x6ed PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x6ee TObjFunc
	var_643_int = 536745; // 0x6f0 PushI
	var_644_int = -1; // 0x6f1 PushI
	var_645_int = 38576; // 0x6f2 PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0x6f3 TObjFunc
	return 0; // 0x6f5 Return
	
Label_1782:
	var_646_int = 38564; // 0x6f6 PushI
	var_647_bool = var_19_object == var_646_int; // 0x6f7 Eq
	if(var_647_bool == 0) goto Label_1805; // 0x6f8 JumpB
	var_648_string = ""; // 0x6f9 PushV
	var_648_string = "Neutral"; // 0x6fa MovS
	func_528(var_20_bool, var_648_string); // 0x6fb NEW_2
	var_649_int = 536733; // 0x6fd PushI
	SetMessage(var_649_int); // 0x6fe TObjFunc
	ClearReplies(); // 0x700 TObjFunc
	var_650_int = 536734; // 0x702 PushI
	var_651_int = 38566; // 0x703 PushI
	var_652_int = 38565; // 0x704 PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0x705 TObjFunc
	var_653_int = 536744; // 0x707 PushI
	var_654_int = -1; // 0x708 PushI
	var_655_int = 38575; // 0x709 PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0x70a TObjFunc
	return 0; // 0x70c Return
	
Label_1805:
	var_656_int = 38566; // 0x70d PushI
	var_657_bool = var_19_object == var_656_int; // 0x70e Eq
	if(var_657_bool == 0) goto Label_1828; // 0x70f JumpB
	var_658_string = ""; // 0x710 PushV
	var_658_string = "Neutral"; // 0x711 MovS
	func_528(var_20_bool, var_658_string); // 0x712 NEW_2
	var_659_int = 536735; // 0x714 PushI
	SetMessage(var_659_int); // 0x715 TObjFunc
	ClearReplies(); // 0x717 TObjFunc
	var_660_int = 536736; // 0x719 PushI
	var_661_int = -1; // 0x71a PushI
	var_662_int = 38567; // 0x71b PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0x71c TObjFunc
	var_663_int = 536737; // 0x71e PushI
	var_664_int = 38569; // 0x71f PushI
	var_665_int = 38568; // 0x720 PushI
	AddReply(var_663_int, var_664_int, var_665_int); // 0x721 TObjFunc
	return 0; // 0x723 Return
	
Label_1828:
	var_666_int = 38569; // 0x724 PushI
	var_667_bool = var_19_object == var_666_int; // 0x725 Eq
	if(var_667_bool == 0) goto Label_1851; // 0x726 JumpB
	var_668_string = ""; // 0x727 PushV
	var_668_string = "Neutral"; // 0x728 MovS
	func_528(var_20_bool, var_668_string); // 0x729 NEW_2
	var_669_int = 536738; // 0x72b PushI
	SetMessage(var_669_int); // 0x72c TObjFunc
	ClearReplies(); // 0x72e TObjFunc
	var_670_int = 536739; // 0x730 PushI
	var_671_int = 38571; // 0x731 PushI
	var_672_int = 38570; // 0x732 PushI
	AddReply(var_670_int, var_671_int, var_672_int); // 0x733 TObjFunc
	var_673_int = 536743; // 0x735 PushI
	var_674_int = -1; // 0x736 PushI
	var_675_int = 38574; // 0x737 PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0x738 TObjFunc
	return 0; // 0x73a Return
	
Label_1851:
	var_676_int = 38571; // 0x73b PushI
	var_677_bool = var_19_object == var_676_int; // 0x73c Eq
	if(var_677_bool == 0) goto Label_1874; // 0x73d JumpB
	var_678_string = ""; // 0x73e PushV
	var_678_string = "Neutral"; // 0x73f MovS
	func_528(var_20_bool, var_678_string); // 0x740 NEW_2
	var_679_int = 536740; // 0x742 PushI
	SetMessage(var_679_int); // 0x743 TObjFunc
	ClearReplies(); // 0x745 TObjFunc
	var_680_int = 536741; // 0x747 PushI
	var_681_int = -1; // 0x748 PushI
	var_682_int = 38572; // 0x749 PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0x74a TObjFunc
	var_683_int = 536742; // 0x74c PushI
	var_684_int = -1; // 0x74d PushI
	var_685_int = 38573; // 0x74e PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x74f TObjFunc
	return 0; // 0x751 Return
	
Label_1874:
	var_686_int = 38544; // 0x752 PushI
	var_687_bool = var_19_object == var_686_int; // 0x753 Eq
	if(var_687_bool == 0) goto Label_1897; // 0x754 JumpB
	var_688_string = ""; // 0x755 PushV
	var_688_string = "Neutral"; // 0x756 MovS
	func_528(var_20_bool, var_688_string); // 0x757 NEW_2
	var_689_int = 536713; // 0x759 PushI
	SetMessage(var_689_int); // 0x75a TObjFunc
	ClearReplies(); // 0x75c TObjFunc
	var_690_int = 536714; // 0x75e PushI
	var_691_int = 38546; // 0x75f PushI
	var_692_int = 38545; // 0x760 PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0x761 TObjFunc
	var_693_int = 536729; // 0x763 PushI
	var_694_int = -1; // 0x764 PushI
	var_695_int = 38560; // 0x765 PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0x766 TObjFunc
	return 0; // 0x768 Return
	
Label_1897:
	var_696_int = 38546; // 0x769 PushI
	var_697_bool = var_19_object == var_696_int; // 0x76a Eq
	if(var_697_bool == 0) goto Label_1920; // 0x76b JumpB
	var_698_string = ""; // 0x76c PushV
	var_698_string = "Neutral"; // 0x76d MovS
	func_528(var_20_bool, var_698_string); // 0x76e NEW_2
	var_699_int = 536715; // 0x770 PushI
	SetMessage(var_699_int); // 0x771 TObjFunc
	ClearReplies(); // 0x773 TObjFunc
	var_700_int = 536716; // 0x775 PushI
	var_701_int = 38548; // 0x776 PushI
	var_702_int = 38547; // 0x777 PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0x778 TObjFunc
	var_703_int = 536726; // 0x77a PushI
	var_704_int = 38558; // 0x77b PushI
	var_705_int = 38557; // 0x77c PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0x77d TObjFunc
	return 0; // 0x77f Return
	
Label_1920:
	var_706_int = 38558; // 0x780 PushI
	var_707_bool = var_19_object == var_706_int; // 0x781 Eq
	if(var_707_bool == 0) goto Label_1938; // 0x782 JumpB
	var_708_string = ""; // 0x783 PushV
	var_708_string = "Neutral"; // 0x784 MovS
	func_528(var_20_bool, var_708_string); // 0x785 NEW_2
	var_709_int = 536727; // 0x787 PushI
	SetMessage(var_709_int); // 0x788 TObjFunc
	ClearReplies(); // 0x78a TObjFunc
	var_710_int = 536728; // 0x78c PushI
	var_711_int = -1; // 0x78d PushI
	var_712_int = 38559; // 0x78e PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x78f TObjFunc
	return 0; // 0x791 Return
	
Label_1938:
	var_713_int = 38548; // 0x792 PushI
	var_714_bool = var_19_object == var_713_int; // 0x793 Eq
	if(var_714_bool == 0) goto Label_1956; // 0x794 JumpB
	var_715_string = ""; // 0x795 PushV
	var_715_string = "Neutral"; // 0x796 MovS
	func_528(var_20_bool, var_715_string); // 0x797 NEW_2
	var_716_int = 536717; // 0x799 PushI
	SetMessage(var_716_int); // 0x79a TObjFunc
	ClearReplies(); // 0x79c TObjFunc
	var_717_int = 536718; // 0x79e PushI
	var_718_int = 38550; // 0x79f PushI
	var_719_int = 38549; // 0x7a0 PushI
	AddReply(var_717_int, var_718_int, var_719_int); // 0x7a1 TObjFunc
	return 0; // 0x7a3 Return
	
Label_1956:
	var_720_int = 38550; // 0x7a4 PushI
	var_721_bool = var_19_object == var_720_int; // 0x7a5 Eq
	if(var_721_bool == 0) goto Label_1979; // 0x7a6 JumpB
	var_722_string = ""; // 0x7a7 PushV
	var_722_string = "Neutral"; // 0x7a8 MovS
	func_528(var_20_bool, var_722_string); // 0x7a9 NEW_2
	var_723_int = 536719; // 0x7ab PushI
	SetMessage(var_723_int); // 0x7ac TObjFunc
	ClearReplies(); // 0x7ae TObjFunc
	var_724_int = 536720; // 0x7b0 PushI
	var_725_int = 38552; // 0x7b1 PushI
	var_726_int = 38551; // 0x7b2 PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0x7b3 TObjFunc
	var_727_int = 536723; // 0x7b5 PushI
	var_728_int = 38555; // 0x7b6 PushI
	var_729_int = 38554; // 0x7b7 PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0x7b8 TObjFunc
	return 0; // 0x7ba Return
	
Label_1979:
	var_730_int = 38555; // 0x7bb PushI
	var_731_bool = var_19_object == var_730_int; // 0x7bc Eq
	if(var_731_bool == 0) goto Label_1997; // 0x7bd JumpB
	var_732_string = ""; // 0x7be PushV
	var_732_string = "Neutral"; // 0x7bf MovS
	func_528(var_20_bool, var_732_string); // 0x7c0 NEW_2
	var_733_int = 536724; // 0x7c2 PushI
	SetMessage(var_733_int); // 0x7c3 TObjFunc
	ClearReplies(); // 0x7c5 TObjFunc
	var_734_int = 536725; // 0x7c7 PushI
	var_735_int = -1; // 0x7c8 PushI
	var_736_int = 38556; // 0x7c9 PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0x7ca TObjFunc
	return 0; // 0x7cc Return
	
Label_1997:
	var_737_int = 38552; // 0x7cd PushI
	var_738_bool = var_19_object == var_737_int; // 0x7ce Eq
	if(var_738_bool == 0) goto Label_2015; // 0x7cf JumpB
	var_739_string = ""; // 0x7d0 PushV
	var_739_string = "Neutral"; // 0x7d1 MovS
	func_528(var_20_bool, var_739_string); // 0x7d2 NEW_2
	var_740_int = 536721; // 0x7d4 PushI
	SetMessage(var_740_int); // 0x7d5 TObjFunc
	ClearReplies(); // 0x7d7 TObjFunc
	var_741_int = 536722; // 0x7d9 PushI
	var_742_int = -1; // 0x7da PushI
	var_743_int = 38553; // 0x7db PushI
	AddReply(var_741_int, var_742_int, var_743_int); // 0x7dc TObjFunc
	return 0; // 0x7de Return
	
Label_2015:
	var_744_int = 38517; // 0x7df PushI
	var_745_bool = var_19_object == var_744_int; // 0x7e0 Eq
	if(var_745_bool == 0) goto Label_2043; // 0x7e1 JumpB
	var_746_string = ""; // 0x7e2 PushV
	var_746_string = "Neutral"; // 0x7e3 MovS
	func_528(var_20_bool, var_746_string); // 0x7e4 NEW_2
	var_747_int = 536686; // 0x7e6 PushI
	SetMessage(var_747_int); // 0x7e7 TObjFunc
	ClearReplies(); // 0x7e9 TObjFunc
	var_748_int = 536687; // 0x7eb PushI
	var_749_int = 38519; // 0x7ec PushI
	var_750_int = 38518; // 0x7ed PushI
	AddReply(var_748_int, var_749_int, var_750_int); // 0x7ee TObjFunc
	var_751_int = 536699; // 0x7f0 PushI
	var_752_int = 38531; // 0x7f1 PushI
	var_753_int = 38530; // 0x7f2 PushI
	AddReply(var_751_int, var_752_int, var_753_int); // 0x7f3 TObjFunc
	var_754_int = 536709; // 0x7f5 PushI
	var_755_int = -1; // 0x7f6 PushI
	var_756_int = 38540; // 0x7f7 PushI
	AddReply(var_754_int, var_755_int, var_756_int); // 0x7f8 TObjFunc
	return 0; // 0x7fa Return
	
Label_2043:
	var_757_int = 38531; // 0x7fb PushI
	var_758_bool = var_19_object == var_757_int; // 0x7fc Eq
	if(var_758_bool == 0) goto Label_2071; // 0x7fd JumpB
	var_759_string = ""; // 0x7fe PushV
	var_759_string = "Neutral"; // 0x7ff MovS
	func_528(var_20_bool, var_759_string); // 0x800 NEW_2
	var_760_int = 536700; // 0x802 PushI
	SetMessage(var_760_int); // 0x803 TObjFunc
	ClearReplies(); // 0x805 TObjFunc
	var_761_int = 536701; // 0x807 PushI
	var_762_int = 38533; // 0x808 PushI
	var_763_int = 38532; // 0x809 PushI
	AddReply(var_761_int, var_762_int, var_763_int); // 0x80a TObjFunc
	var_764_bool = 0; var_765_object = Obj(); // 0x80c PushV
	var_765_object = var_1_object; // 0x80d MovT
	func_5367(var_765_object); // 0x80e NEW_2
	if(var_764_bool == 0) goto Label_2070; // 0x810 JumpB
	var_766_int = 536705; // 0x811 PushI
	var_767_int = 38537; // 0x812 PushI
	var_768_int = 38536; // 0x813 PushI
	AddReply(var_766_int, var_767_int, var_768_int); // 0x814 TObjFunc
	
Label_2070:
	return 0; // 0x816 Return
	
Label_2071:
	var_769_int = 38537; // 0x817 PushI
	var_770_bool = var_19_object == var_769_int; // 0x818 Eq
	if(var_770_bool == 0) goto Label_2094; // 0x819 JumpB
	var_771_string = ""; // 0x81a PushV
	var_771_string = "Neutral"; // 0x81b MovS
	func_528(var_20_bool, var_771_string); // 0x81c NEW_2
	var_772_int = 536706; // 0x81e PushI
	SetMessage(var_772_int); // 0x81f TObjFunc
	ClearReplies(); // 0x821 TObjFunc
	var_773_int = 536707; // 0x823 PushI
	var_774_int = -1; // 0x824 PushI
	var_775_int = 38538; // 0x825 PushI
	AddReply(var_773_int, var_774_int, var_775_int); // 0x826 TObjFunc
	var_776_int = 536708; // 0x828 PushI
	var_777_int = -1; // 0x829 PushI
	var_778_int = 38539; // 0x82a PushI
	AddReply(var_776_int, var_777_int, var_778_int); // 0x82b TObjFunc
	return 0; // 0x82d Return
	
Label_2094:
	var_779_int = 38533; // 0x82e PushI
	var_780_bool = var_19_object == var_779_int; // 0x82f Eq
	if(var_780_bool == 0) goto Label_2122; // 0x830 JumpB
	var_781_string = ""; // 0x831 PushV
	var_781_string = "Neutral"; // 0x832 MovS
	func_528(var_20_bool, var_781_string); // 0x833 NEW_2
	var_782_int = 536702; // 0x835 PushI
	SetMessage(var_782_int); // 0x836 TObjFunc
	ClearReplies(); // 0x838 TObjFunc
	var_783_bool = 0; var_784_object = Obj(); // 0x83a PushV
	var_784_object = var_1_object; // 0x83b MovT
	func_5367(var_784_object); // 0x83c NEW_2
	if(var_783_bool == 0) goto Label_2116; // 0x83e JumpB
	var_785_int = 536703; // 0x83f PushI
	var_786_int = -1; // 0x840 PushI
	var_787_int = 38534; // 0x841 PushI
	AddReply(var_785_int, var_786_int, var_787_int); // 0x842 TObjFunc
	
Label_2116:
	var_788_int = 536704; // 0x844 PushI
	var_789_int = -1; // 0x845 PushI
	var_790_int = 38535; // 0x846 PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0x847 TObjFunc
	return 0; // 0x849 Return
	
Label_2122:
	var_791_int = 38519; // 0x84a PushI
	var_792_bool = var_19_object == var_791_int; // 0x84b Eq
	if(var_792_bool == 0) goto Label_2145; // 0x84c JumpB
	var_793_string = ""; // 0x84d PushV
	var_793_string = "Neutral"; // 0x84e MovS
	func_528(var_20_bool, var_793_string); // 0x84f NEW_2
	var_794_int = 536688; // 0x851 PushI
	SetMessage(var_794_int); // 0x852 TObjFunc
	ClearReplies(); // 0x854 TObjFunc
	var_795_int = 536689; // 0x856 PushI
	var_796_int = 38521; // 0x857 PushI
	var_797_int = 38520; // 0x858 PushI
	AddReply(var_795_int, var_796_int, var_797_int); // 0x859 TObjFunc
	var_798_int = 536695; // 0x85b PushI
	var_799_int = 38527; // 0x85c PushI
	var_800_int = 38526; // 0x85d PushI
	AddReply(var_798_int, var_799_int, var_800_int); // 0x85e TObjFunc
	return 0; // 0x860 Return
	
Label_2145:
	var_801_int = 38527; // 0x861 PushI
	var_802_bool = var_19_object == var_801_int; // 0x862 Eq
	if(var_802_bool == 0) goto Label_2168; // 0x863 JumpB
	var_803_string = ""; // 0x864 PushV
	var_803_string = "Neutral"; // 0x865 MovS
	func_528(var_20_bool, var_803_string); // 0x866 NEW_2
	var_804_int = 536696; // 0x868 PushI
	SetMessage(var_804_int); // 0x869 TObjFunc
	ClearReplies(); // 0x86b TObjFunc
	var_805_int = 536697; // 0x86d PushI
	var_806_int = -1; // 0x86e PushI
	var_807_int = 38528; // 0x86f PushI
	AddReply(var_805_int, var_806_int, var_807_int); // 0x870 TObjFunc
	var_808_int = 536698; // 0x872 PushI
	var_809_int = -1; // 0x873 PushI
	var_810_int = 38529; // 0x874 PushI
	AddReply(var_808_int, var_809_int, var_810_int); // 0x875 TObjFunc
	return 0; // 0x877 Return
	
Label_2168:
	var_811_int = 38521; // 0x878 PushI
	var_812_bool = var_19_object == var_811_int; // 0x879 Eq
	if(var_812_bool == 0) goto Label_2191; // 0x87a JumpB
	var_813_string = ""; // 0x87b PushV
	var_813_string = "Neutral"; // 0x87c MovS
	func_528(var_20_bool, var_813_string); // 0x87d NEW_2
	var_814_int = 536690; // 0x87f PushI
	SetMessage(var_814_int); // 0x880 TObjFunc
	ClearReplies(); // 0x882 TObjFunc
	var_815_int = 536691; // 0x884 PushI
	var_816_int = -1; // 0x885 PushI
	var_817_int = 38522; // 0x886 PushI
	AddReply(var_815_int, var_816_int, var_817_int); // 0x887 TObjFunc
	var_818_int = 536692; // 0x889 PushI
	var_819_int = 38524; // 0x88a PushI
	var_820_int = 38523; // 0x88b PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0x88c TObjFunc
	return 0; // 0x88e Return
	
Label_2191:
	var_821_int = 38524; // 0x88f PushI
	var_822_bool = var_19_object == var_821_int; // 0x890 Eq
	if(var_822_bool == 0) goto Label_2209; // 0x891 JumpB
	var_823_string = ""; // 0x892 PushV
	var_823_string = "Neutral"; // 0x893 MovS
	func_528(var_20_bool, var_823_string); // 0x894 NEW_2
	var_824_int = 536693; // 0x896 PushI
	SetMessage(var_824_int); // 0x897 TObjFunc
	ClearReplies(); // 0x899 TObjFunc
	var_825_int = 536694; // 0x89b PushI
	var_826_int = -1; // 0x89c PushI
	var_827_int = 38525; // 0x89d PushI
	AddReply(var_825_int, var_826_int, var_827_int); // 0x89e TObjFunc
	return 0; // 0x8a0 Return
	
Label_2209:
	var_828_int = 38493; // 0x8a1 PushI
	var_829_bool = var_19_object == var_828_int; // 0x8a2 Eq
	if(var_829_bool == 0) goto Label_2237; // 0x8a3 JumpB
	var_830_string = ""; // 0x8a4 PushV
	var_830_string = "Neutral"; // 0x8a5 MovS
	func_528(var_20_bool, var_830_string); // 0x8a6 NEW_2
	var_831_int = 536664; // 0x8a8 PushI
	SetMessage(var_831_int); // 0x8a9 TObjFunc
	ClearReplies(); // 0x8ab TObjFunc
	var_832_int = 536665; // 0x8ad PushI
	var_833_int = 38495; // 0x8ae PushI
	var_834_int = 38494; // 0x8af PushI
	AddReply(var_832_int, var_833_int, var_834_int); // 0x8b0 TObjFunc
	var_835_int = 536675; // 0x8b2 PushI
	var_836_int = 38507; // 0x8b3 PushI
	var_837_int = 38506; // 0x8b4 PushI
	AddReply(var_835_int, var_836_int, var_837_int); // 0x8b5 TObjFunc
	var_838_int = 536684; // 0x8b7 PushI
	var_839_int = -1; // 0x8b8 PushI
	var_840_int = 38515; // 0x8b9 PushI
	AddReply(var_838_int, var_839_int, var_840_int); // 0x8ba TObjFunc
	return 0; // 0x8bc Return
	
Label_2237:
	var_841_int = 38507; // 0x8bd PushI
	var_842_bool = var_19_object == var_841_int; // 0x8be Eq
	if(var_842_bool == 0) goto Label_2255; // 0x8bf JumpB
	var_843_string = ""; // 0x8c0 PushV
	var_843_string = "Neutral"; // 0x8c1 MovS
	func_528(var_20_bool, var_843_string); // 0x8c2 NEW_2
	var_844_int = 536676; // 0x8c4 PushI
	SetMessage(var_844_int); // 0x8c5 TObjFunc
	ClearReplies(); // 0x8c7 TObjFunc
	var_845_int = 536677; // 0x8c9 PushI
	var_846_int = 38509; // 0x8ca PushI
	var_847_int = 38508; // 0x8cb PushI
	AddReply(var_845_int, var_846_int, var_847_int); // 0x8cc TObjFunc
	return 0; // 0x8ce Return
	
Label_2255:
	var_848_int = 38509; // 0x8cf PushI
	var_849_bool = var_19_object == var_848_int; // 0x8d0 Eq
	if(var_849_bool == 0) goto Label_2278; // 0x8d1 JumpB
	var_850_string = ""; // 0x8d2 PushV
	var_850_string = "Neutral"; // 0x8d3 MovS
	func_528(var_20_bool, var_850_string); // 0x8d4 NEW_2
	var_851_int = 536678; // 0x8d6 PushI
	SetMessage(var_851_int); // 0x8d7 TObjFunc
	ClearReplies(); // 0x8d9 TObjFunc
	var_852_int = 536679; // 0x8db PushI
	var_853_int = 38511; // 0x8dc PushI
	var_854_int = 38510; // 0x8dd PushI
	AddReply(var_852_int, var_853_int, var_854_int); // 0x8de TObjFunc
	var_855_int = 536683; // 0x8e0 PushI
	var_856_int = -1; // 0x8e1 PushI
	var_857_int = 38514; // 0x8e2 PushI
	AddReply(var_855_int, var_856_int, var_857_int); // 0x8e3 TObjFunc
	return 0; // 0x8e5 Return
	
Label_2278:
	var_858_int = 38511; // 0x8e6 PushI
	var_859_bool = var_19_object == var_858_int; // 0x8e7 Eq
	if(var_859_bool == 0) goto Label_2301; // 0x8e8 JumpB
	var_860_string = ""; // 0x8e9 PushV
	var_860_string = "Neutral"; // 0x8ea MovS
	func_528(var_20_bool, var_860_string); // 0x8eb NEW_2
	var_861_int = 536680; // 0x8ed PushI
	SetMessage(var_861_int); // 0x8ee TObjFunc
	ClearReplies(); // 0x8f0 TObjFunc
	var_862_int = 536681; // 0x8f2 PushI
	var_863_int = -1; // 0x8f3 PushI
	var_864_int = 38512; // 0x8f4 PushI
	AddReply(var_862_int, var_863_int, var_864_int); // 0x8f5 TObjFunc
	var_865_int = 536682; // 0x8f7 PushI
	var_866_int = -1; // 0x8f8 PushI
	var_867_int = 38513; // 0x8f9 PushI
	AddReply(var_865_int, var_866_int, var_867_int); // 0x8fa TObjFunc
	return 0; // 0x8fc Return
	
Label_2301:
	var_868_int = 38495; // 0x8fd PushI
	var_869_bool = var_19_object == var_868_int; // 0x8fe Eq
	if(var_869_bool == 0) goto Label_2324; // 0x8ff JumpB
	var_870_string = ""; // 0x900 PushV
	var_870_string = "Neutral"; // 0x901 MovS
	func_528(var_20_bool, var_870_string); // 0x902 NEW_2
	var_871_int = 536666; // 0x904 PushI
	SetMessage(var_871_int); // 0x905 TObjFunc
	ClearReplies(); // 0x907 TObjFunc
	var_872_int = 536667; // 0x909 PushI
	var_873_int = 38497; // 0x90a PushI
	var_874_int = 38496; // 0x90b PushI
	AddReply(var_872_int, var_873_int, var_874_int); // 0x90c TObjFunc
	var_875_int = 536674; // 0x90e PushI
	var_876_int = 38499; // 0x90f PushI
	var_877_int = 38504; // 0x910 PushI
	AddReply(var_875_int, var_876_int, var_877_int); // 0x911 TObjFunc
	return 0; // 0x913 Return
	
Label_2324:
	var_878_int = 38497; // 0x914 PushI
	var_879_bool = var_19_object == var_878_int; // 0x915 Eq
	if(var_879_bool == 0) goto Label_2347; // 0x916 JumpB
	var_880_string = ""; // 0x917 PushV
	var_880_string = "Neutral"; // 0x918 MovS
	func_528(var_20_bool, var_880_string); // 0x919 NEW_2
	var_881_int = 536668; // 0x91b PushI
	SetMessage(var_881_int); // 0x91c TObjFunc
	ClearReplies(); // 0x91e TObjFunc
	var_882_int = 536669; // 0x920 PushI
	var_883_int = 38499; // 0x921 PushI
	var_884_int = 38498; // 0x922 PushI
	AddReply(var_882_int, var_883_int, var_884_int); // 0x923 TObjFunc
	var_885_int = 536673; // 0x925 PushI
	var_886_int = 38499; // 0x926 PushI
	var_887_int = 38502; // 0x927 PushI
	AddReply(var_885_int, var_886_int, var_887_int); // 0x928 TObjFunc
	return 0; // 0x92a Return
	
Label_2347:
	var_888_int = 38499; // 0x92b PushI
	var_889_bool = var_19_object == var_888_int; // 0x92c Eq
	if(var_889_bool == 0) goto Label_2370; // 0x92d JumpB
	var_890_string = ""; // 0x92e PushV
	var_890_string = "Neutral"; // 0x92f MovS
	func_528(var_20_bool, var_890_string); // 0x930 NEW_2
	var_891_int = 536670; // 0x932 PushI
	SetMessage(var_891_int); // 0x933 TObjFunc
	ClearReplies(); // 0x935 TObjFunc
	var_892_int = 536671; // 0x937 PushI
	var_893_int = -1; // 0x938 PushI
	var_894_int = 38500; // 0x939 PushI
	AddReply(var_892_int, var_893_int, var_894_int); // 0x93a TObjFunc
	var_895_int = 536672; // 0x93c PushI
	var_896_int = -1; // 0x93d PushI
	var_897_int = 38501; // 0x93e PushI
	AddReply(var_895_int, var_896_int, var_897_int); // 0x93f TObjFunc
	return 0; // 0x941 Return
	
Label_2370:
	var_898_int = 38474; // 0x942 PushI
	var_899_bool = var_19_object == var_898_int; // 0x943 Eq
	if(var_899_bool == 0) goto Label_2398; // 0x944 JumpB
	var_900_string = ""; // 0x945 PushV
	var_900_string = "Neutral"; // 0x946 MovS
	func_528(var_20_bool, var_900_string); // 0x947 NEW_2
	var_901_int = 536646; // 0x949 PushI
	SetMessage(var_901_int); // 0x94a TObjFunc
	ClearReplies(); // 0x94c TObjFunc
	var_902_int = 536647; // 0x94e PushI
	var_903_int = 38476; // 0x94f PushI
	var_904_int = 38475; // 0x950 PushI
	AddReply(var_902_int, var_903_int, var_904_int); // 0x951 TObjFunc
	var_905_int = 536653; // 0x953 PushI
	var_906_int = 38482; // 0x954 PushI
	var_907_int = 38481; // 0x955 PushI
	AddReply(var_905_int, var_906_int, var_907_int); // 0x956 TObjFunc
	var_908_int = 536662; // 0x958 PushI
	var_909_int = -1; // 0x959 PushI
	var_910_int = 38491; // 0x95a PushI
	AddReply(var_908_int, var_909_int, var_910_int); // 0x95b TObjFunc
	return 0; // 0x95d Return
	
Label_2398:
	var_911_int = 38482; // 0x95e PushI
	var_912_bool = var_19_object == var_911_int; // 0x95f Eq
	if(var_912_bool == 0) goto Label_2421; // 0x960 JumpB
	var_913_string = ""; // 0x961 PushV
	var_913_string = "Neutral"; // 0x962 MovS
	func_528(var_20_bool, var_913_string); // 0x963 NEW_2
	var_914_int = 536654; // 0x965 PushI
	SetMessage(var_914_int); // 0x966 TObjFunc
	ClearReplies(); // 0x968 TObjFunc
	var_915_int = 536655; // 0x96a PushI
	var_916_int = 38484; // 0x96b PushI
	var_917_int = 38483; // 0x96c PushI
	AddReply(var_915_int, var_916_int, var_917_int); // 0x96d TObjFunc
	var_918_int = 536659; // 0x96f PushI
	var_919_int = 38488; // 0x970 PushI
	var_920_int = 38487; // 0x971 PushI
	AddReply(var_918_int, var_919_int, var_920_int); // 0x972 TObjFunc
	return 0; // 0x974 Return
	
Label_2421:
	var_921_int = 38488; // 0x975 PushI
	var_922_bool = var_19_object == var_921_int; // 0x976 Eq
	if(var_922_bool == 0) goto Label_2439; // 0x977 JumpB
	var_923_string = ""; // 0x978 PushV
	var_923_string = "Neutral"; // 0x979 MovS
	func_528(var_20_bool, var_923_string); // 0x97a NEW_2
	var_924_int = 536660; // 0x97c PushI
	SetMessage(var_924_int); // 0x97d TObjFunc
	ClearReplies(); // 0x97f TObjFunc
	var_925_int = 536661; // 0x981 PushI
	var_926_int = 38484; // 0x982 PushI
	var_927_int = 38489; // 0x983 PushI
	AddReply(var_925_int, var_926_int, var_927_int); // 0x984 TObjFunc
	return 0; // 0x986 Return
	
Label_2439:
	var_928_int = 38484; // 0x987 PushI
	var_929_bool = var_19_object == var_928_int; // 0x988 Eq
	if(var_929_bool == 0) goto Label_2462; // 0x989 JumpB
	var_930_string = ""; // 0x98a PushV
	var_930_string = "Neutral"; // 0x98b MovS
	func_528(var_20_bool, var_930_string); // 0x98c NEW_2
	var_931_int = 536656; // 0x98e PushI
	SetMessage(var_931_int); // 0x98f TObjFunc
	ClearReplies(); // 0x991 TObjFunc
	var_932_int = 536657; // 0x993 PushI
	var_933_int = -1; // 0x994 PushI
	var_934_int = 38485; // 0x995 PushI
	AddReply(var_932_int, var_933_int, var_934_int); // 0x996 TObjFunc
	var_935_int = 536658; // 0x998 PushI
	var_936_int = -1; // 0x999 PushI
	var_937_int = 38486; // 0x99a PushI
	AddReply(var_935_int, var_936_int, var_937_int); // 0x99b TObjFunc
	return 0; // 0x99d Return
	
Label_2462:
	var_938_int = 38476; // 0x99e PushI
	var_939_bool = var_19_object == var_938_int; // 0x99f Eq
	if(var_939_bool == 0) goto Label_2485; // 0x9a0 JumpB
	var_940_string = ""; // 0x9a1 PushV
	var_940_string = "Neutral"; // 0x9a2 MovS
	func_528(var_20_bool, var_940_string); // 0x9a3 NEW_2
	var_941_int = 536648; // 0x9a5 PushI
	SetMessage(var_941_int); // 0x9a6 TObjFunc
	ClearReplies(); // 0x9a8 TObjFunc
	var_942_int = 536649; // 0x9aa PushI
	var_943_int = 38478; // 0x9ab PushI
	var_944_int = 38477; // 0x9ac PushI
	AddReply(var_942_int, var_943_int, var_944_int); // 0x9ad TObjFunc
	var_945_int = 536652; // 0x9af PushI
	var_946_int = -1; // 0x9b0 PushI
	var_947_int = 38480; // 0x9b1 PushI
	AddReply(var_945_int, var_946_int, var_947_int); // 0x9b2 TObjFunc
	return 0; // 0x9b4 Return
	
Label_2485:
	var_948_int = 38478; // 0x9b5 PushI
	var_949_bool = var_19_object == var_948_int; // 0x9b6 Eq
	if(var_949_bool == 0) goto Label_2503; // 0x9b7 JumpB
	var_950_string = ""; // 0x9b8 PushV
	var_950_string = "Neutral"; // 0x9b9 MovS
	func_528(var_20_bool, var_950_string); // 0x9ba NEW_2
	var_951_int = 536650; // 0x9bc PushI
	SetMessage(var_951_int); // 0x9bd TObjFunc
	ClearReplies(); // 0x9bf TObjFunc
	var_952_int = 536651; // 0x9c1 PushI
	var_953_int = -1; // 0x9c2 PushI
	var_954_int = 38479; // 0x9c3 PushI
	AddReply(var_952_int, var_953_int, var_954_int); // 0x9c4 TObjFunc
	return 0; // 0x9c6 Return
	
Label_2503:
	var_955_int = 38468; // 0x9c7 PushI
	var_956_bool = var_19_object == var_955_int; // 0x9c8 Eq
	if(var_956_bool == 0) goto Label_2521; // 0x9c9 JumpB
	var_957_string = ""; // 0x9ca PushV
	var_957_string = "Neutral"; // 0x9cb MovS
	func_528(var_20_bool, var_957_string); // 0x9cc NEW_2
	var_958_int = 536640; // 0x9ce PushI
	SetMessage(var_958_int); // 0x9cf TObjFunc
	ClearReplies(); // 0x9d1 TObjFunc
	var_959_int = 536641; // 0x9d3 PushI
	var_960_int = -1; // 0x9d4 PushI
	var_961_int = 38469; // 0x9d5 PushI
	AddReply(var_959_int, var_960_int, var_961_int); // 0x9d6 TObjFunc
	return 0; // 0x9d8 Return
	
Label_2521:
	var_962_int = 45487; // 0x9d9 PushI
	var_963_bool = var_19_object == var_962_int; // 0x9da Eq
	if(var_963_bool == 0) goto Label_2544; // 0x9db JumpB
	var_964_string = ""; // 0x9dc PushV
	var_964_string = "Neutral"; // 0x9dd MovS
	func_528(var_20_bool, var_964_string); // 0x9de NEW_2
	var_965_int = 543035; // 0x9e0 PushI
	SetMessage(var_965_int); // 0x9e1 TObjFunc
	ClearReplies(); // 0x9e3 TObjFunc
	var_966_int = 543036; // 0x9e5 PushI
	var_967_int = -1; // 0x9e6 PushI
	var_968_int = 45488; // 0x9e7 PushI
	AddReply(var_966_int, var_967_int, var_968_int); // 0x9e8 TObjFunc
	var_969_int = 543037; // 0x9ea PushI
	var_970_int = -1; // 0x9eb PushI
	var_971_int = 45489; // 0x9ec PushI
	AddReply(var_969_int, var_970_int, var_971_int); // 0x9ed TObjFunc
	return 0; // 0x9ef Return
	
Label_2544:
	var_972_int = 45480; // 0x9f0 PushI
	var_973_bool = var_19_object == var_972_int; // 0x9f1 Eq
	if(var_973_bool == 0) goto Label_2567; // 0x9f2 JumpB
	var_974_string = ""; // 0x9f3 PushV
	var_974_string = "Neutral"; // 0x9f4 MovS
	func_528(var_20_bool, var_974_string); // 0x9f5 NEW_2
	var_975_int = 543028; // 0x9f7 PushI
	SetMessage(var_975_int); // 0x9f8 TObjFunc
	ClearReplies(); // 0x9fa TObjFunc
	var_976_int = 543029; // 0x9fc PushI
	var_977_int = -1; // 0x9fd PushI
	var_978_int = 45481; // 0x9fe PushI
	AddReply(var_976_int, var_977_int, var_978_int); // 0x9ff TObjFunc
	var_979_int = 543030; // 0xa01 PushI
	var_980_int = 45483; // 0xa02 PushI
	var_981_int = 45482; // 0xa03 PushI
	AddReply(var_979_int, var_980_int, var_981_int); // 0xa04 TObjFunc
	return 0; // 0xa06 Return
	
Label_2567:
	var_982_int = 45483; // 0xa07 PushI
	var_983_bool = var_19_object == var_982_int; // 0xa08 Eq
	if(var_983_bool == 0) goto Label_2590; // 0xa09 JumpB
	var_984_string = ""; // 0xa0a PushV
	var_984_string = "Neutral"; // 0xa0b MovS
	func_528(var_20_bool, var_984_string); // 0xa0c NEW_2
	var_985_int = 543031; // 0xa0e PushI
	SetMessage(var_985_int); // 0xa0f TObjFunc
	ClearReplies(); // 0xa11 TObjFunc
	var_986_int = 543032; // 0xa13 PushI
	var_987_int = -1; // 0xa14 PushI
	var_988_int = 45484; // 0xa15 PushI
	AddReply(var_986_int, var_987_int, var_988_int); // 0xa16 TObjFunc
	var_989_int = 543033; // 0xa18 PushI
	var_990_int = -1; // 0xa19 PushI
	var_991_int = 45485; // 0xa1a PushI
	AddReply(var_989_int, var_990_int, var_991_int); // 0xa1b TObjFunc
	return 0; // 0xa1d Return
	
Label_2590:
	var_992_int = 45475; // 0xa1e PushI
	var_993_bool = var_19_object == var_992_int; // 0xa1f Eq
	if(var_993_bool == 0) goto Label_2613; // 0xa20 JumpB
	var_994_string = ""; // 0xa21 PushV
	var_994_string = "Neutral"; // 0xa22 MovS
	func_528(var_20_bool, var_994_string); // 0xa23 NEW_2
	var_995_int = 543023; // 0xa25 PushI
	SetMessage(var_995_int); // 0xa26 TObjFunc
	ClearReplies(); // 0xa28 TObjFunc
	var_996_int = 543024; // 0xa2a PushI
	var_997_int = -1; // 0xa2b PushI
	var_998_int = 45476; // 0xa2c PushI
	AddReply(var_996_int, var_997_int, var_998_int); // 0xa2d TObjFunc
	var_999_int = 543025; // 0xa2f PushI
	var_1000_int = -1; // 0xa30 PushI
	var_1001_int = 45477; // 0xa31 PushI
	AddReply(var_999_int, var_1000_int, var_1001_int); // 0xa32 TObjFunc
	return 0; // 0xa34 Return
	
Label_2613:
	var_1002_int = 45468; // 0xa35 PushI
	var_1003_bool = var_19_object == var_1002_int; // 0xa36 Eq
	if(var_1003_bool == 0) goto Label_2636; // 0xa37 JumpB
	var_1004_string = ""; // 0xa38 PushV
	var_1004_string = "Neutral"; // 0xa39 MovS
	func_528(var_20_bool, var_1004_string); // 0xa3a NEW_2
	var_1005_int = 543016; // 0xa3c PushI
	SetMessage(var_1005_int); // 0xa3d TObjFunc
	ClearReplies(); // 0xa3f TObjFunc
	var_1006_int = 543017; // 0xa41 PushI
	var_1007_int = 45471; // 0xa42 PushI
	var_1008_int = 45469; // 0xa43 PushI
	AddReply(var_1006_int, var_1007_int, var_1008_int); // 0xa44 TObjFunc
	var_1009_int = 543018; // 0xa46 PushI
	var_1010_int = -1; // 0xa47 PushI
	var_1011_int = 45470; // 0xa48 PushI
	AddReply(var_1009_int, var_1010_int, var_1011_int); // 0xa49 TObjFunc
	return 0; // 0xa4b Return
	
Label_2636:
	var_1012_int = 45471; // 0xa4c PushI
	var_1013_bool = var_19_object == var_1012_int; // 0xa4d Eq
	if(var_1013_bool == 0) goto Label_2659; // 0xa4e JumpB
	var_1014_string = ""; // 0xa4f PushV
	var_1014_string = "Neutral"; // 0xa50 MovS
	func_528(var_20_bool, var_1014_string); // 0xa51 NEW_2
	var_1015_int = 543019; // 0xa53 PushI
	SetMessage(var_1015_int); // 0xa54 TObjFunc
	ClearReplies(); // 0xa56 TObjFunc
	var_1016_int = 543020; // 0xa58 PushI
	var_1017_int = -1; // 0xa59 PushI
	var_1018_int = 45472; // 0xa5a PushI
	AddReply(var_1016_int, var_1017_int, var_1018_int); // 0xa5b TObjFunc
	var_1019_int = 543021; // 0xa5d PushI
	var_1020_int = -1; // 0xa5e PushI
	var_1021_int = 45473; // 0xa5f PushI
	AddReply(var_1019_int, var_1020_int, var_1021_int); // 0xa60 TObjFunc
	return 0; // 0xa62 Return
	
Label_2659:
	var_3_object = 1; // 0xa63 TMovB
	var_1022_bool = 0; // 0xa64 PushV
	func_6231(var_1022_bool); // 0xa65 NEW_2
	if(var_1022_bool == 0) goto Label_2667; // 0xa67 JumpB
	lshStopAnimation(); // 0xa68 Func
	goto Label_2669; // 0xa6a Jump
	
Label_2669:
	return 0; // 0xa6d Return
	
Label_2667:
	StopAnimation(); // 0xa6b Func
	
Label_2671:
	return 0; // 0xa6f Return
}


task_3_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xa7f PushV
	var_22_int = 0; var_23_object = Obj(); // 0xa80 PushV
	var_23_object = var_19_bool; // 0xa81 Mov
	func_6177(var_23_object); // 0xa82 NEW_2
	var_21_int = var_22_int; // 0xa83 Mov
	var_24_int = 0; // 0xa85 PushI
	var_25_bool = var_21_int > var_24_int; // 0xa86 GT
	if(var_25_bool == 0) goto Label_2700; // 0xa87 JumpB
	var_26_object = Obj(); // 0xa88 PushV
	var_26_object = var_19_bool; // 0xa89 Mov
	func_6180(var_26_object); // 0xa8a NEW_2
	
Label_2700:
	return 2; // 0xa8c Return
}


task_3_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_6186(); // 0xa8e NEW_2
	return 0; // 0xa90 Return
}


task_3_event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_int, var_8_float, var_9_float, var_10_bool, var_11_bool, var_12_bool, var_13_object, var_14_object, var_15_int, var_16_int, var_17_bool, var_18_float, var_19_int, var_20_bool, var_21_object, var_22_bool)
{
	return 0; // 0xb07 Return
}


task_3_event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_string, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	return 0; // 0xb09 Return
}


task_3_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	return 0; // 0xb0b Return
}


task_4_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xb24 PushV
	var_22_int = 0; var_23_object = Obj(); // 0xb25 PushV
	var_23_object = var_19_bool; // 0xb26 Mov
	func_6177(var_23_object); // 0xb27 NEW_2
	var_21_int = var_22_int; // 0xb28 Mov
	var_24_int = 0; // 0xb2a PushI
	var_25_bool = var_21_int > var_24_int; // 0xb2b GT
	if(var_25_bool == 0) goto Label_2871; // 0xb2c JumpB
	var_26_int = 1; // 0xb2d PushI
	var_27_bool = var_21_int > var_26_int; // 0xb2e GT
	if(var_27_bool == 0) goto Label_2867; // 0xb2f JumpB
	func_3039(var_21_int); // 0xb31 NEW_2
	
Label_2867:
	var_29_object = Obj(); // 0xb33 PushV
	var_29_object = var_19_bool; // 0xb34 Mov
	func_6180(var_29_object); // 0xb35 NEW_2
	
Label_2871:
	return 2; // 0xb37 Return
}


task_4_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xb38 PushV
	var_22_object = Obj(); // 0xb39 PushV
	var_22_object = var_19_bool; // 0xb3a Mov
	func_5908(var_22_object); // 0xb3b NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0xb3d PushV
	var_32_object = var_19_bool; // 0xb3e Mov
	func_5991(var_31_int, var_32_object); // 0xb3f NEW_2
	var_21_int = var_31_int; // 0xb40 Mov
	var_67_int = 0; // 0xb42 PushI
	var_68_bool = var_21_int > var_67_int; // 0xb43 GT
	if(var_68_bool == 0) goto Label_2895; // 0xb44 JumpB
	var_69_int = 1; // 0xb45 PushI
	var_70_bool = var_21_int > var_69_int; // 0xb46 GT
	if(var_70_bool == 0) goto Label_2891; // 0xb47 JumpB
	func_3039(var_21_int); // 0xb49 NEW_2
	
Label_2891:
	var_72_object = Obj(); // 0xb4b PushV
	var_72_object = var_19_bool; // 0xb4c Mov
	func_6001(var_72_object); // 0xb4d NEW_2
	
Label_2895:
	return 2; // 0xb4f Return
}


task_4_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0xb50 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0xb51 PushV
	var_25_object = var_19_bool; // 0xb52 Mov
	var_26_object = var_20_object; // 0xb53 Mov
	var_27_bool = var_21_bool; // 0xb54 Mov
	func_6285(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0xb55 NEW_2
	if(var_24_bool == 0) goto Label_2923; // 0xb57 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0xb58 PushV
	var_87_object = var_19_bool; // 0xb59 Mov
	var_88_bool = var_21_bool; // 0xb5a Mov
	func_6084(var_87_object, var_88_bool); // 0xb5b NEW_2
	var_23_int = var_86_int; // 0xb5c Mov
	var_119_int = 0; // 0xb5e PushI
	var_120_bool = var_23_int > var_119_int; // 0xb5f GT
	if(var_120_bool == 0) goto Label_2923; // 0xb60 JumpB
	var_121_int = 1; // 0xb61 PushI
	var_122_bool = var_23_int > var_121_int; // 0xb62 GT
	if(var_122_bool == 0) goto Label_2919; // 0xb63 JumpB
	func_3039(var_23_int); // 0xb65 NEW_2
	
Label_2919:
	var_124_object = Obj(); // 0xb67 PushV
	var_124_object = var_19_bool; // 0xb68 Mov
	func_6091(var_124_object); // 0xb69 NEW_2
	
Label_2923:
	return 2; // 0xb6b Return
}


task_4_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xb6c PushV
	var_22_int = 0; var_23_object = Obj(); // 0xb6d PushV
	var_23_object = var_19_bool; // 0xb6e Mov
	func_6126(var_23_object); // 0xb6f NEW_2
	var_21_int = var_22_int; // 0xb70 Mov
	var_24_int = 0; // 0xb72 PushI
	var_25_bool = var_21_int > var_24_int; // 0xb73 GT
	if(var_25_bool == 0) goto Label_2943; // 0xb74 JumpB
	var_26_int = 1; // 0xb75 PushI
	var_27_bool = var_21_int > var_26_int; // 0xb76 GT
	if(var_27_bool == 0) goto Label_2939; // 0xb77 JumpB
	func_3039(var_21_int); // 0xb79 NEW_2
	
Label_2939:
	var_29_object = Obj(); // 0xb7b PushV
	var_29_object = var_19_bool; // 0xb7c Mov
	func_6129(); // 0xb7d NEW_2
	
Label_2943:
	return 2; // 0xb7f Return
}


task_4_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xb80 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0xb81 PushV
	var_24_object = var_19_object; // 0xb82 Mov
	var_25_string = var_20_bool; // 0xb83 Mov
	func_5822(var_23_bool, var_24_object, var_25_string); // 0xb84 NEW_2
	if(var_23_bool == 0) goto Label_2960; // 0xb86 JumpB
	func_3039(var_22_int); // 0xb88 NEW_2
	var_52_object = Obj(); var_53_string = ""; // 0xb8a PushV
	var_52_object = var_19_object; // 0xb8b Mov
	var_53_string = var_20_bool; // 0xb8c Mov
	func_5854(var_52_object, var_53_string); // 0xb8d NEW_2
	goto Label_2980; // 0xb8f Jump
	
Label_2980:
	return 2; // 0xba4 Return
	
Label_2960:
	var_128_int = 0; var_129_string = ""; var_130_object = Obj(); // 0xb90 PushV
	var_129_string = var_20_bool; // 0xb91 Mov
	var_130_object = var_19_object; // 0xb92 Mov
	func_6131(var_128_int, var_129_string, var_130_object); // 0xb93 NEW_2
	var_22_int = var_128_int; // 0xb94 Mov
	var_172_int = 0; // 0xb96 PushI
	var_173_bool = var_22_int > var_172_int; // 0xb97 GT
	if(var_173_bool == 0) goto Label_2980; // 0xb98 JumpB
	var_174_int = 1; // 0xb99 PushI
	var_175_bool = var_22_int > var_174_int; // 0xb9a GT
	if(var_175_bool == 0) goto Label_2975; // 0xb9b JumpB
	func_3039(var_22_int); // 0xb9d NEW_2
	
Label_2975:
	var_176_string = ""; var_177_object = Obj(); // 0xb9f PushV
	var_176_string = var_20_bool; // 0xba0 Mov
	var_177_object = var_19_object; // 0xba1 Mov
	func_6143(var_176_string, var_177_object); // 0xba2 NEW_2
}


task_4_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0xba6 PushV
	var_21_string = var_19_bool; // 0xba7 Mov
	func_5921(var_20_bool, var_21_string); // 0xba8 NEW_2
	if(var_20_bool == 0) goto Label_2994; // 0xbaa JumpB
	func_3039(var_19_bool); // 0xbac NEW_2
	var_30_string = ""; // 0xbae PushV
	var_30_string = var_19_bool; // 0xbaf Mov
	func_5937(var_30_string); // 0xbb0 NEW_2
	
Label_2994:
	return 0; // 0xbb2 Return
}


task_4_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xbb4 PushV
	var_21_object = var_19_bool; // 0xbb5 Mov
	func_5879(var_20_bool, var_21_object); // 0xbb6 NEW_2
	if(var_20_bool == 0) goto Label_3009; // 0xbb8 JumpB
	func_3039(var_19_bool); // 0xbba NEW_2
	var_33_object = Obj(); // 0xbbc PushV
	var_33_object = var_19_bool; // 0xbbd Mov
	func_5902(var_33_object); // 0xbbe NEW_2
	goto Label_3013; // 0xbc0 Jump
	
Label_3013:
	return 0; // 0xbc5 Return
	
Label_3009:
	var_35_object = Obj(); // 0xbc1 PushV
	var_35_object = var_19_bool; // 0xbc2 Mov
	func_3064(var_19_bool, var_35_object); // 0xbc3 NEW_2
}


task_4_event_3(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_object = Obj(); // 0xbc7 PushV
	var_20_object = var_19_bool; // 0xbc8 Mov
	func_3064(var_19_bool, var_20_object); // 0xbc9 NEW_2
	return 0; // 0xbcb Return
}


task_4_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 110; // 0xbcd PushI
	var_21_bool = var_19_bool != var_20_int; // 0xbce Neq
	if(var_21_bool == 0) goto Label_3025; // 0xbcf JumpB
	return 0; // 0xbd0 Return
	
Label_3025:
	var_2_object = 0; // 0xbd1 TMovB
	var_22_int = 110; // 0xbd2 PushI
	KillTimer(var_22_int); // 0xbd3 Func
	ResetAAS(); // 0xbd5 Func
	return 0; // 0xbd7 Return
}


task_4_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3039(var_18_bool); // 0xbd9 NEW_2
	func_6186(); // 0xbdc NEW_2
	return 0; // 0xbde Return
}


task_4_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_3039(var_19_bool); // 0xbf1 NEW_2
	var_21_object = Obj(); // 0xbf3 PushV
	var_21_object = var_19_bool; // 0xbf4 Mov
	func_5798(); // 0xbf5 NEW_2
	return 0; // 0xbf7 Return
}


task_4_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	RequestClearPath(var_19_bool); // 0xc61 Func
	return 0; // 0xc63 Return
}


task_4_event_28(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	Stop(); // 0xc64 Func
	return 0; // 0xc66 Return
}


task_5_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xc7d PushV
	var_22_int = 0; var_23_object = Obj(); // 0xc7e PushV
	var_23_object = var_19_bool; // 0xc7f Mov
	func_6177(var_23_object); // 0xc80 NEW_2
	var_21_int = var_22_int; // 0xc81 Mov
	var_24_int = 0; // 0xc83 PushI
	var_25_bool = var_21_int > var_24_int; // 0xc84 GT
	if(var_25_bool == 0) goto Label_3216; // 0xc85 JumpB
	var_26_int = 1; // 0xc86 PushI
	var_27_bool = var_21_int > var_26_int; // 0xc87 GT
	if(var_27_bool == 0) goto Label_3212; // 0xc88 JumpB
	func_3442(); // 0xc8a NEW_2
	
Label_3212:
	var_28_object = Obj(); // 0xc8c PushV
	var_28_object = var_19_bool; // 0xc8d Mov
	func_6180(var_28_object); // 0xc8e NEW_2
	
Label_3216:
	return 2; // 0xc90 Return
}


task_5_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xc91 PushV
	var_22_object = Obj(); // 0xc92 PushV
	var_22_object = var_19_bool; // 0xc93 Mov
	func_5908(var_22_object); // 0xc94 NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0xc96 PushV
	var_32_object = var_19_bool; // 0xc97 Mov
	func_5991(var_31_int, var_32_object); // 0xc98 NEW_2
	var_21_int = var_31_int; // 0xc99 Mov
	var_67_int = 0; // 0xc9b PushI
	var_68_bool = var_21_int > var_67_int; // 0xc9c GT
	if(var_68_bool == 0) goto Label_3240; // 0xc9d JumpB
	var_69_int = 1; // 0xc9e PushI
	var_70_bool = var_21_int > var_69_int; // 0xc9f GT
	if(var_70_bool == 0) goto Label_3236; // 0xca0 JumpB
	func_3442(); // 0xca2 NEW_2
	
Label_3236:
	var_71_object = Obj(); // 0xca4 PushV
	var_71_object = var_19_bool; // 0xca5 Mov
	func_6001(var_71_object); // 0xca6 NEW_2
	
Label_3240:
	return 2; // 0xca8 Return
}


task_5_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_object, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0xca9 PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0xcaa PushV
	var_25_object = var_19_bool; // 0xcab Mov
	var_26_object = var_20_object; // 0xcac Mov
	var_27_bool = var_21_bool; // 0xcad Mov
	func_6285(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0xcae NEW_2
	if(var_24_bool == 0) goto Label_3268; // 0xcb0 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0xcb1 PushV
	var_87_object = var_19_bool; // 0xcb2 Mov
	var_88_bool = var_21_bool; // 0xcb3 Mov
	func_6084(var_87_object, var_88_bool); // 0xcb4 NEW_2
	var_23_int = var_86_int; // 0xcb5 Mov
	var_119_int = 0; // 0xcb7 PushI
	var_120_bool = var_23_int > var_119_int; // 0xcb8 GT
	if(var_120_bool == 0) goto Label_3268; // 0xcb9 JumpB
	var_121_int = 1; // 0xcba PushI
	var_122_bool = var_23_int > var_121_int; // 0xcbb GT
	if(var_122_bool == 0) goto Label_3264; // 0xcbc JumpB
	func_3442(); // 0xcbe NEW_2
	
Label_3264:
	var_123_object = Obj(); // 0xcc0 PushV
	var_123_object = var_19_bool; // 0xcc1 Mov
	func_6091(var_123_object); // 0xcc2 NEW_2
	
Label_3268:
	return 2; // 0xcc4 Return
}


task_5_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xcc5 PushV
	var_22_int = 0; var_23_object = Obj(); // 0xcc6 PushV
	var_23_object = var_19_bool; // 0xcc7 Mov
	func_6126(var_23_object); // 0xcc8 NEW_2
	var_21_int = var_22_int; // 0xcc9 Mov
	var_24_int = 0; // 0xccb PushI
	var_25_bool = var_21_int > var_24_int; // 0xccc GT
	if(var_25_bool == 0) goto Label_3288; // 0xccd JumpB
	var_26_int = 1; // 0xcce PushI
	var_27_bool = var_21_int > var_26_int; // 0xccf GT
	if(var_27_bool == 0) goto Label_3284; // 0xcd0 JumpB
	func_3442(); // 0xcd2 NEW_2
	
Label_3284:
	var_28_object = Obj(); // 0xcd4 PushV
	var_28_object = var_19_bool; // 0xcd5 Mov
	func_6129(); // 0xcd6 NEW_2
	
Label_3288:
	return 2; // 0xcd8 Return
}


task_5_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xcd9 PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0xcda PushV
	var_24_object = var_19_object; // 0xcdb Mov
	var_25_string = var_20_bool; // 0xcdc Mov
	func_5822(var_23_bool, var_24_object, var_25_string); // 0xcdd NEW_2
	if(var_23_bool == 0) goto Label_3305; // 0xcdf JumpB
	func_3442(); // 0xce1 NEW_2
	var_51_object = Obj(); var_52_string = ""; // 0xce3 PushV
	var_51_object = var_19_object; // 0xce4 Mov
	var_52_string = var_20_bool; // 0xce5 Mov
	func_5854(var_51_object, var_52_string); // 0xce6 NEW_2
	goto Label_3325; // 0xce8 Jump
	
Label_3325:
	return 2; // 0xcfd Return
	
Label_3305:
	var_127_int = 0; var_128_string = ""; var_129_object = Obj(); // 0xce9 PushV
	var_128_string = var_20_bool; // 0xcea Mov
	var_129_object = var_19_object; // 0xceb Mov
	func_6131(var_127_int, var_128_string, var_129_object); // 0xcec NEW_2
	var_22_int = var_127_int; // 0xced Mov
	var_171_int = 0; // 0xcef PushI
	var_172_bool = var_22_int > var_171_int; // 0xcf0 GT
	if(var_172_bool == 0) goto Label_3325; // 0xcf1 JumpB
	var_173_int = 1; // 0xcf2 PushI
	var_174_bool = var_22_int > var_173_int; // 0xcf3 GT
	if(var_174_bool == 0) goto Label_3320; // 0xcf4 JumpB
	func_3442(); // 0xcf6 NEW_2
	
Label_3320:
	var_175_string = ""; var_176_object = Obj(); // 0xcf8 PushV
	var_175_string = var_20_bool; // 0xcf9 Mov
	var_176_object = var_19_object; // 0xcfa Mov
	func_6143(var_175_string, var_176_object); // 0xcfb NEW_2
}


task_5_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_string, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0xcff PushV
	var_21_string = var_19_bool; // 0xd00 Mov
	func_5921(var_20_bool, var_21_string); // 0xd01 NEW_2
	if(var_20_bool == 0) goto Label_3339; // 0xd03 JumpB
	func_3442(); // 0xd05 NEW_2
	var_29_string = ""; // 0xd07 PushV
	var_29_string = var_19_bool; // 0xd08 Mov
	func_5937(var_29_string); // 0xd09 NEW_2
	
Label_3339:
	return 0; // 0xd0b Return
}


task_5_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3442(); // 0xd0d NEW_2
	func_6186(); // 0xd10 NEW_2
	return 0; // 0xd12 Return
}


task_5_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xd14 PushV
	var_21_object = var_19_bool; // 0xd15 Mov
	func_5879(var_20_bool, var_21_object); // 0xd16 NEW_2
	if(var_20_bool == 0) goto Label_3360; // 0xd18 JumpB
	func_3442(); // 0xd1a NEW_2
	var_32_object = Obj(); // 0xd1c PushV
	var_32_object = var_19_bool; // 0xd1d Mov
	func_5902(var_32_object); // 0xd1e NEW_2
	
Label_3360:
	return 0; // 0xd20 Return
}


task_6_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xdaf PushV
	var_22_int = 0; var_23_object = Obj(); // 0xdb0 PushV
	var_23_object = var_19_bool; // 0xdb1 Mov
	func_6177(var_23_object); // 0xdb2 NEW_2
	var_21_int = var_22_int; // 0xdb3 Mov
	var_24_int = 0; // 0xdb5 PushI
	var_25_bool = var_21_int > var_24_int; // 0xdb6 GT
	if(var_25_bool == 0) goto Label_3522; // 0xdb7 JumpB
	var_26_int = 1; // 0xdb8 PushI
	var_27_bool = var_21_int > var_26_int; // 0xdb9 GT
	if(var_27_bool == 0) goto Label_3518; // 0xdba JumpB
	func_3646(); // 0xdbc NEW_2
	
Label_3518:
	var_30_object = Obj(); // 0xdbe PushV
	var_30_object = var_19_bool; // 0xdbf Mov
	func_6180(var_30_object); // 0xdc0 NEW_2
	
Label_3522:
	return 2; // 0xdc2 Return
}


task_6_event_17(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xdc3 PushV
	var_22_object = Obj(); // 0xdc4 PushV
	var_22_object = var_19_bool; // 0xdc5 Mov
	func_5908(var_22_object); // 0xdc6 NEW_2
	var_31_int = 0; var_32_object = Obj(); // 0xdc8 PushV
	var_32_object = var_19_bool; // 0xdc9 Mov
	func_5991(var_31_int, var_32_object); // 0xdca NEW_2
	var_21_int = var_31_int; // 0xdcb Mov
	var_67_int = 0; // 0xdcd PushI
	var_68_bool = var_21_int > var_67_int; // 0xdce GT
	if(var_68_bool == 0) goto Label_3546; // 0xdcf JumpB
	var_69_int = 1; // 0xdd0 PushI
	var_70_bool = var_21_int > var_69_int; // 0xdd1 GT
	if(var_70_bool == 0) goto Label_3542; // 0xdd2 JumpB
	func_3646(); // 0xdd4 NEW_2
	
Label_3542:
	var_73_object = Obj(); // 0xdd6 PushV
	var_73_object = var_19_bool; // 0xdd7 Mov
	func_6001(var_73_object); // 0xdd8 NEW_2
	
Label_3546:
	return 2; // 0xdda Return
}


task_6_event_30(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_object, var_14_int, var_15_int, var_16_bool, var_17_float, var_18_int, var_19_bool, var_20_object, var_21_bool)
{
	var_22_int = 0; var_23_int = 0; // 0xddb PushV
	var_24_bool = 0; var_25_object = Obj(); var_26_object = Obj(); var_27_bool = 0; // 0xddc PushV
	var_25_object = var_19_bool; // 0xddd Mov
	var_26_object = var_20_object; // 0xdde Mov
	var_27_bool = var_21_bool; // 0xddf Mov
	func_6285(var_24_bool, var_25_object, var_26_object, var_27_bool); // 0xde0 NEW_2
	if(var_24_bool == 0) goto Label_3574; // 0xde2 JumpB
	var_86_int = 0; var_87_object = Obj(); var_88_bool = 0; // 0xde3 PushV
	var_87_object = var_19_bool; // 0xde4 Mov
	var_88_bool = var_21_bool; // 0xde5 Mov
	func_6084(var_87_object, var_88_bool); // 0xde6 NEW_2
	var_23_int = var_86_int; // 0xde7 Mov
	var_119_int = 0; // 0xde9 PushI
	var_120_bool = var_23_int > var_119_int; // 0xdea GT
	if(var_120_bool == 0) goto Label_3574; // 0xdeb JumpB
	var_121_int = 1; // 0xdec PushI
	var_122_bool = var_23_int > var_121_int; // 0xded GT
	if(var_122_bool == 0) goto Label_3570; // 0xdee JumpB
	func_3646(); // 0xdf0 NEW_2
	
Label_3570:
	var_125_object = Obj(); // 0xdf2 PushV
	var_125_object = var_19_bool; // 0xdf3 Mov
	func_6091(var_125_object); // 0xdf4 NEW_2
	
Label_3574:
	return 2; // 0xdf6 Return
}


task_6_event_40(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_int = 0; var_21_int = 0; // 0xdf7 PushV
	var_22_int = 0; var_23_object = Obj(); // 0xdf8 PushV
	var_23_object = var_19_bool; // 0xdf9 Mov
	func_6126(var_23_object); // 0xdfa NEW_2
	var_21_int = var_22_int; // 0xdfb Mov
	var_24_int = 0; // 0xdfd PushI
	var_25_bool = var_21_int > var_24_int; // 0xdfe GT
	if(var_25_bool == 0) goto Label_3594; // 0xdff JumpB
	var_26_int = 1; // 0xe00 PushI
	var_27_bool = var_21_int > var_26_int; // 0xe01 GT
	if(var_27_bool == 0) goto Label_3590; // 0xe02 JumpB
	func_3646(); // 0xe04 NEW_2
	
Label_3590:
	var_30_object = Obj(); // 0xe06 PushV
	var_30_object = var_19_bool; // 0xe07 Mov
	func_6129(); // 0xe08 NEW_2
	
Label_3594:
	return 2; // 0xe0a Return
}


task_6_event_42(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string, var_12_object, var_13_int, var_14_int, var_15_bool, var_16_float, var_17_int, var_18_bool, var_19_object, var_20_bool)
{
	var_21_int = 0; var_22_int = 0; // 0xe0b PushV
	var_23_bool = 0; var_24_object = Obj(); var_25_string = ""; // 0xe0c PushV
	var_24_object = var_19_object; // 0xe0d Mov
	var_25_string = var_20_bool; // 0xe0e Mov
	func_5822(var_23_bool, var_24_object, var_25_string); // 0xe0f NEW_2
	if(var_23_bool == 0) goto Label_3611; // 0xe11 JumpB
	func_3646(); // 0xe13 NEW_2
	var_53_object = Obj(); var_54_string = ""; // 0xe15 PushV
	var_53_object = var_19_object; // 0xe16 Mov
	var_54_string = var_20_bool; // 0xe17 Mov
	func_5854(var_53_object, var_54_string); // 0xe18 NEW_2
	goto Label_3631; // 0xe1a Jump
	
Label_3631:
	return 2; // 0xe2f Return
	
Label_3611:
	var_129_int = 0; var_130_string = ""; var_131_object = Obj(); // 0xe1b PushV
	var_130_string = var_20_bool; // 0xe1c Mov
	var_131_object = var_19_object; // 0xe1d Mov
	func_6131(var_129_int, var_130_string, var_131_object); // 0xe1e NEW_2
	var_22_int = var_129_int; // 0xe1f Mov
	var_173_int = 0; // 0xe21 PushI
	var_174_bool = var_22_int > var_173_int; // 0xe22 GT
	if(var_174_bool == 0) goto Label_3631; // 0xe23 JumpB
	var_175_int = 1; // 0xe24 PushI
	var_176_bool = var_22_int > var_175_int; // 0xe25 GT
	if(var_176_bool == 0) goto Label_3626; // 0xe26 JumpB
	func_3646(); // 0xe28 NEW_2
	
Label_3626:
	var_177_string = ""; var_178_object = Obj(); // 0xe2a PushV
	var_177_string = var_20_bool; // 0xe2b Mov
	var_178_object = var_19_object; // 0xe2c Mov
	func_6143(var_177_string, var_178_object); // 0xe2d NEW_2
}


task_6_event_26(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_string, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_string = ""; // 0xe31 PushV
	var_21_string = var_19_bool; // 0xe32 Mov
	func_5921(var_20_bool, var_21_string); // 0xe33 NEW_2
	if(var_20_bool == 0) goto Label_3645; // 0xe35 JumpB
	func_3646(); // 0xe37 NEW_2
	var_31_string = ""; // 0xe39 PushV
	var_31_string = var_19_bool; // 0xe3a Mov
	func_5937(var_31_string); // 0xe3b NEW_2
	
Label_3645:
	return 0; // 0xe3d Return
}


task_6_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	func_3646(); // 0xe4b NEW_2
	var_22_object = Obj(); // 0xe4d PushV
	var_22_object = var_19_bool; // 0xe4e Mov
	func_5798(); // 0xe4f NEW_2
	return 0; // 0xe51 Return
}


task_6_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_int, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0xe52 PushV
	var_24_int = 111; // 0xe53 PushI
	var_25_bool = var_19_bool != var_24_int; // 0xe54 Neq
	if(var_25_bool == 0) goto Label_3671; // 0xe55 JumpB
	return 4; // 0xe56 Return
	
Label_3671:
	var_26_bool = 0; var_27_object = Obj(); // 0xe57 PushV
	var_27_object = var_0_bool; // 0xe58 MovT
	func_4821(var_26_bool, var_27_object); // 0xe59 NEW_2
	var_60_bool = var_26_bool == 0; // 0xe5b Not
	if(var_60_bool == 0) goto Label_3681; // 0xe5c JumpB
	func_3646(); // 0xe5e NEW_2
	return 4; // 0xe60 Return
	
Label_3681:
	GetDirection(var_22_cvector); // 0xe61 Func
	var_63_cvector = CVector(0,0,0); var_64_object = Obj(); // 0xe63 PushV
	var_64_object = var_0_bool; // 0xe64 MovT
	func_4675(var_64_object); // 0xe65 NEW_2
	var_23_cvector = var_63_cvector; // 0xe66 Mov
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0xe68 PushV
	var_70_cvector = var_22_cvector; // 0xe69 Mov
	var_71_cvector = var_23_cvector; // 0xe6a Mov
	func_5294(var_69_float, var_70_cvector, var_71_cvector); // 0xe6b NEW_2
	var_93_float = 0.5; // 0xe6d PushF
	var_94_bool = var_69_float < var_93_float; // 0xe6e LT
	if(var_94_bool == 0) goto Label_3700; // 0xe6f JumpB
	var_95_object = Obj(); // 0xe70 PushV
	var_95_object = var_0_bool; // 0xe71 MovT
	func_4971(); // 0xe72 NEW_2
	
Label_3700:
	return 4; // 0xe74 Return
}


task_6_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_3646(); // 0xe76 NEW_2
	func_6186(); // 0xe79 NEW_2
	return 0; // 0xe7b Return
}


task_6_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_object, var_12_int, var_13_int, var_14_bool, var_15_float, var_16_int, var_17_bool, var_18_object, var_19_bool)
{
	var_20_bool = 0; var_21_object = Obj(); // 0xe7d PushV
	var_21_object = var_19_bool; // 0xe7e Mov
	func_5879(var_20_bool, var_21_object); // 0xe7f NEW_2
	if(var_20_bool == 0) goto Label_3721; // 0xe81 JumpB
	func_3646(); // 0xe83 NEW_2
	var_34_object = Obj(); // 0xe85 PushV
	var_34_object = var_19_bool; // 0xe86 Mov
	func_5902(var_34_object); // 0xe87 NEW_2
	
Label_3721:
	return 0; // 0xe89 Return
}


task_8_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	func_4468(var_18_bool); // 0x112f NEW_2
	func_6186(); // 0x1132 NEW_2
	return 0; // 0x1134 Return
}


task_8_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_int)
{
	var_20_int = 1; // 0x1167 PushI
	var_21_bool = var_19_int == var_20_int; // 0x1168 Eq
	if(var_21_bool == 0) goto Label_4463; // 0x1169 JumpB
	var_22_object = Obj(); // 0x116a PushV
	var_22_object = var_1_object; // 0x116b MovT
	func_5342(var_22_object); // 0x116c NEW_2
	goto Label_4467; // 0x116e Jump
	
Label_4467:
	return 0; // 0x1173 Return
	
Label_4463:
	var_27_int = 0; // 0x116f PushV
	var_27_int = var_19_int; // 0x1170 Mov
	func_4612(var_18_bool, var_19_int, var_27_int); // 0x1171 NEW_2
}


task_8_event_1(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x1182 PushV
	var_20_bool = 0; // 0x1183 MovB
	var_21_bool = var_1_object == var_19_object; // 0x1184 Eq
	if(var_21_bool == 0) goto Label_4489; // 0x1185 JumpB
	var_22_bool = var_2_object == 0; // 0x1186 Not
	if(var_22_bool == 0) goto Label_4489; // 0x1187 JumpB
	var_20_bool = 1; // 0x1188 MovB
	
Label_4489:
	if(var_20_bool == 0) goto Label_4495; // 0x1189 JumpB
	var_2_object = 1; // 0x118a TMovB
	var_23_object = Obj(); // 0x118b PushV
	var_23_object = var_19_object; // 0x118c Mov
	func_5166(var_23_object); // 0x118d NEW_2
	
Label_4495:
	return 0; // 0x118f Return
}


task_8_event_2(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_bool = 0; // 0x1191 PushV
	var_20_bool = 0; // 0x1192 MovB
	var_21_bool = var_1_object == var_19_object; // 0x1193 Eq
	if(var_21_bool == 0) goto Label_4504; // 0x1194 JumpB
	var_22_object = var_2_object; // 0x1195 PushT
	if(var_22_object == 0) goto Label_4504; // 0x1196 JumpB
	var_20_bool = 1; // 0x1197 MovB
	
Label_4504:
	if(var_20_bool == 0) goto Label_4509; // 0x1198 JumpB
	var_2_object = 0; // 0x1199 TMovB
	var_23_string = "head"; // 0x119a PushS
	UnlookAsync(var_23_string); // 0x119b Func
	
Label_4509:
	return 0; // 0x119d Return
}


task_8_event_10(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	RequestClearPath(var_19_object); // 0x1217 Func
	return 0; // 0x1219 Return
}


task_8_event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	func_4468(var_19_object); // 0x1223 NEW_2
	var_24_object = Obj(); // 0x1225 PushV
	var_24_object = var_19_object; // 0x1226 Mov
	func_5798(); // 0x1227 NEW_2
	return 0; // 0x1229 Return
}


event_16(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_string)
{
	var_21_float = 0; var_22_float = 0; // 0x1699 PushV
	var_23_string = "health"; // 0x169a PushS
	var_24_bool = var_20_string == var_23_string; // 0x169b Eq
	if(var_24_bool == 0) goto Label_5797; // 0x169c JumpB
	var_25_string = "health"; // 0x169d PushS
	GetProperty(var_25_string, var_22_float); // 0x169e Func
	var_26_int = 0; // 0x16a0 PushI
	var_27_bool = var_22_float <= var_26_int; // 0x16a1 LE
	if(var_27_bool == 0) goto Label_5797; // 0x16a2 JumpB
	SignalDeath(var_19_object); // 0x16a3 Func
	
Label_5797:
	return 2; // 0x16a5 Return
}


event_41(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object)
{
	var_20_object = Obj(); // 0x16a7 PushV
	var_20_object = var_19_object; // 0x16a8 Mov
	func_5777(var_20_object); // 0x16a9 NEW_2
	return 0; // 0x16ab Return
}


event_22(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; // 0x16ad PushV
	var_23_object = var_19_object; // 0x16ae Mov
	var_24_int = var_20_int; // 0x16af Mov
	var_25_float = var_21_float; // 0x16b0 Mov
	func_4889(var_23_object, var_24_int, var_25_float); // 0x16b1 NEW_2
	return 0; // 0x16b3 Return
}


event_43(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool, var_19_object, var_20_int, var_21_float, var_22_float, var_23_cvector, var_24_cvector)
{
	var_25_object = Obj(); var_26_int = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x16b5 PushV
	var_25_object = var_19_object; // 0x16b6 Mov
	var_26_int = var_20_int; // 0x16b7 Mov
	var_27_float = var_21_float; // 0x16b8 Mov
	var_28_cvector = var_23_cvector; // 0x16b9 Mov
	var_29_cvector = var_24_cvector; // 0x16ba Mov
	func_4957(var_27_float, var_28_cvector, var_29_cvector); // 0x16bb NEW_2
	return 0; // 0x16bd Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_int, var_13_bool, var_14_float, var_15_int, var_16_bool, var_17_object, var_18_bool)
{
	var_19_bool = 1; // 0xb0c PushB
	SensePlayerOnly(var_19_bool); // 0xb0d Func
	func_6233(); // 0xb10 NEW_2
	func_2843(); // 0xb13 NEW_2
	
Label_2837:
	var_2_object = 0; // 0xb15 TMovB
	func_3104(var_17_object, var_18_bool); // 0xb17 NEW_2
	goto Label_2837; // 0xb19 Jump
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_435_bool = 0; // 0x4 PushV
	func_6231(var_435_bool); // 0x5 NEW_2
	if(var_435_bool == 0) goto Label_15; // 0x7 JumpB
	var_436_string = ""; // 0x8 PushV
	var_436_string = "Neutral"; // 0x9 MovS
	func_5135(var_436_string); // 0xa NEW_2
	lshWaitForAnimEnd(); // 0xc Func
	goto Label_21; // 0xe Jump
	
Label_21:
	var_437_bool = var_0_bool; // 0x15 PushT
	if(var_437_bool == 0) goto Label_24; // 0x16 JumpB
	return 0; // 0x17 Return
	
Label_24:
	goto Label_4; // 0x18 Jump
	
Label_15:
	WaitForAnimEnd(); // 0xf Func
	var_438_string = "all"; // 0x11 PushS
	var_439_string = "idle"; // 0x12 PushS
	PlayAnimation(var_438_string, var_439_string); // 0x13 Func
}


func_4612(var_0_bool, var_1_object, var_27_int)
{
	var_28_int = 0; // 0x1205 PushI
	var_29_bool = var_27_int != var_28_int; // 0x1206 Neq
	if(var_29_bool == 0) goto Label_4617; // 0x1207 JumpB
	return 0; // 0x1208 Return
	
Label_4617:
	var_30_bool = 0; var_31_object = Obj(); // 0x1209 PushV
	var_31_object = var_1_object; // 0x120a MovT
	func_4650(var_30_bool, var_31_object); // 0x120b NEW_2
	var_66_bool = var_30_bool == 0; // 0x120d Not
	if(var_66_bool == 0) goto Label_4624; // 0x120e JumpB
	var_0_bool = 1; // 0x120f TMovB
	
Label_4624:
	var_67_int = 0; // 0x1210 PushI
	KillTimer(var_67_int); // 0x1211 Func
	Stop(); // 0x1213 Func
	return 0; // 0x1215 Return
}


func_6153(var_134_int, var_135_object)
{
	var_136_bool = 0; var_137_object = Obj(); // 0x180a PushV
	var_137_object = var_135_object; // 0x180b Mov
	func_4821(var_136_bool, var_137_object); // 0x180c NEW_2
	var_170_bool = var_136_bool == 0; // 0x180e Not
	if(var_170_bool == 0) goto Label_6162; // 0x180f JumpB
	var_134_int = 0; // 0x1810 MovI
	return 0; // 0x1811 Return
	
Label_6162:
	var_171_bool = 0; var_172_object = Obj(); // 0x1812 PushV
	var_172_object = var_135_object; // 0x1813 Mov
	func_6282(var_172_object); // 0x1814 NEW_2
	if(var_171_bool == 0) goto Label_6169; // 0x1816 JumpB
	var_134_int = 2; // 0x1817 MovI
	goto Label_6170; // 0x1818 Jump
	
Label_6170:
	return 0; // 0x181a Return
	
Label_6169:
	var_134_int = 0; // 0x1819 MovI
}


func_5130()
{
	var_441_bool = 1; // 0x140b PushB
	CameraSwitchToNormal(var_441_bool); // 0x140c Func
	return 0; // 0x140e Return
}


func_5643(var_115_int, var_116_int)
{
	var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_bool = 0; // 0x160b PushV
	var_130_bool = var_115_int > var_116_int; // 0x160c GT
	if(var_130_bool == 0) goto Label_5650; // 0x160d JumpB
	var_131_string = "GenerateMoney: iMin > iMax"; // 0x160e PushS
	Trace(var_131_string); // 0x160f Func
	return 4; // 0x1611 Return
	
Label_5650:
	var_128_int = 0; // 0x1612 MovI
	var_132_bool = var_115_int != var_116_int; // 0x1613 Neq
	if(var_132_bool == 0) goto Label_5657; // 0x1614 JumpB
	var_133_int = var_116_int - var_115_int; // 0x1615 Sub
	irand(var_128_int, var_133_int); // 0x1616 Func
	goto Label_5661; // 0x1618 Jump
	
Label_5661:
	var_128_int = var_128_int + var_115_int; // 0x161d Add2
	var_134_int = 0; // 0x161e PushI
	var_135_bool = var_128_int == var_134_int; // 0x161f Eq
	if(var_135_bool == 0) goto Label_5666; // 0x1620 JumpB
	return 4; // 0x1621 Return
	
Label_5666:
	var_136_int = 0; var_137_string = ""; // 0x1622 PushV
	var_137_string = "Money"; // 0x1623 MovS
	func_5772(var_136_int, var_137_string); // 0x1624 NEW_2
	var_140_int = 0; // 0x1626 PushI
	AddItem(var_129_bool, var_136_int, var_140_int, var_128_int); // 0x1627 Func
	return 4; // 0x1629 Return
	
Label_5657:
	var_141_int = 0; // 0x1619 PushI
	var_142_bool = var_115_int == var_141_int; // 0x161a Eq
	if(var_142_bool == 0) goto Label_5661; // 0x161b JumpB
	return 4; // 0x161c Return
}


func_5135(var_230_string)
{
	var_231_bool = 0; var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_float = 0; var_236_float = 0; // 0x140f PushV
	lshHasAnimation(var_234_bool, var_230_string); // 0x1410 Func
	var_237_bool = var_234_bool; // 0x1412 Push
	if(var_237_bool == 0) goto Label_5146; // 0x1413 JumpB
	lshGetAnimTimes(var_230_string, var_235_float, var_236_float); // 0x1414 Func
	var_238_bool = 0; // 0x1416 PushB
	lshPlayAnimation(var_235_float, var_236_float, var_238_bool); // 0x1417 Func
	goto Label_5150; // 0x1419 Jump
	
Label_5150:
	return 6; // 0x141e Return
	
Label_5146:
	var_239_string = "Can't find lsh animation : "; // 0x141a PushS
	var_240_int = var_239_string + var_230_string; // 0x141b Add
	Trace(var_240_int); // 0x141c Func
}


func_528(var_2_object, var_131_string)
{
	var_132_bool = 0; // 0x211 PushV
	func_6231(var_132_bool); // 0x212 NEW_2
	var_133_bool = var_132_bool == 0; // 0x214 Not
	if(var_133_bool == 0) goto Label_535; // 0x215 JumpB
	return 0; // 0x216 Return
	
Label_535:
	var_134_bool = var_131_string == var_2_object; // 0x217 Eq
	if(var_134_bool == 0) goto Label_538; // 0x218 JumpB
	return 0; // 0x219 Return
	
Label_538:
	var_135_string = ""; var_136_bool = 0; // 0x21a PushV
	var_135_string = var_131_string; // 0x21b Mov
	var_137_string = ""; // 0x21c PushS
	var_138_bool = var_131_string == var_137_string; // 0x21d Eq
	if(var_138_bool == 0) goto Label_545; // 0x21e JumpB
	var_136_bool = 0; // 0x21f MovB
	goto Label_546; // 0x220 Jump
	
Label_546:
	func_5151(var_135_string, var_136_bool); // 0x222 NEW_2
	var_2_object = var_131_string; // 0x224 TMov
	return 0; // 0x225 Return
	
Label_545:
	var_136_bool = 1; // 0x221 MovB
}


func_4634(var_0_bool)
{
	var_0_bool = 1; // 0x121a TMovB
	var_23_int = 0; // 0x121b PushI
	KillTimer(var_23_int); // 0x121c Func
	Stop(); // 0x121e Func
	return 0; // 0x1220 Return
}


func_6171(var_181_object)
{
	var_182_object = Obj(); // 0x181c PushV
	var_182_object = var_181_object; // 0x181d Mov
	func_6001(var_182_object); // 0x181e NEW_2
	return 0; // 0x1820 Return
}


func_5151(var_135_string, var_136_bool)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0; // 0x141f PushV
	lshHasAnimation(var_142_bool, var_135_string); // 0x1420 Func
	var_145_bool = var_142_bool; // 0x1422 Push
	if(var_145_bool == 0) goto Label_5161; // 0x1423 JumpB
	lshGetAnimTimes(var_135_string, var_143_float, var_144_float); // 0x1424 Func
	lshPlayAnimation(var_143_float, var_144_float, var_136_bool); // 0x1426 Func
	goto Label_5165; // 0x1428 Jump
	
Label_5165:
	return 6; // 0x142d Return
	
Label_5161:
	var_146_string = "Can't find lsh animation : "; // 0x1429 PushS
	var_147_int = var_146_string + var_135_string; // 0x142a Add
	Trace(var_147_int); // 0x142b Func
}


func_3104(var_0_bool, var_1_object)
{
	var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0; // 0xc20 PushV
	var_0_bool = 0; // 0xc21 TMovB
	var_1_object = 0; // 0xc22 TMovB
	var_54_float = 0.5; // 0xc23 PushF
	rand(var_48_float, var_54_float); // 0xc24 Func
	Sleep(var_48_float); // 0xc26 Func
	
Label_3112:
	var_55_bool = var_0_bool == 0; // 0xc28 Not
	if(var_55_bool == 0) goto Label_3162; // 0xc29 JumpB
	var_56_bool = var_1_object == 0; // 0xc2a Not
	if(var_56_bool == 0) goto Label_3131; // 0xc2b JumpB
	
Label_3116:
	GetPosition(var_50_cvector); // 0xc2c Func
	var_57_float = 0; // 0xc2e PushV
	func_3163(var_57_float); // 0xc2f NEW_2
	GetRandomPFPointInCircle(var_49_cvector, var_50_cvector, var_57_float, var_51_bool); // 0xc31 Func
	var_60_bool = var_51_bool; // 0xc33 Push
	if(var_60_bool == 0) goto Label_3126; // 0xc34 JumpB
	goto Label_3130; // 0xc35 Jump
	
Label_3130:
	goto Label_3132; // 0xc3a Jump
	
Label_3132:
	var_61_object = Obj(); var_62_cvector = CVector(0,0,0); // 0xc3c PushV
	var_62_cvector = var_49_cvector; // 0xc3d Mov
	func_3191(var_61_object, var_62_cvector); // 0xc3e NEW_2
	var_52_object = var_61_object; // 0xc3f Mov
	var_65_bool = var_52_object != 0; // 0xc41 NullNeq
	if(var_65_bool == 0) goto Label_3157; // 0xc42 JumpB
	RotatePath(var_52_object, var_53_bool); // 0xc43 Func
	var_66_bool = var_53_bool; // 0xc45 Push
	if(var_66_bool == 0) goto Label_3156; // 0xc46 JumpB
	var_67_bool = 0; // 0xc47 PushV
	func_3189(var_67_bool); // 0xc48 NEW_2
	FollowPath(var_52_object, var_67_bool, var_53_bool); // 0xc4a Func
	var_52_object = 0; // 0xc4c SetNull
	var_68_bool = var_53_bool; // 0xc4d Push
	if(var_68_bool == 0) goto Label_3156; // 0xc4e JumpB
	TaskCall(5); // 0xc50 TaskCall
	func_3361(); // 0xc51 NEW_2
	TaskReturn(); // 0xc52 TaskReturn
	
Label_3156:
	goto Label_3160; // 0xc54 Jump
	
Label_3160:
	var_52_object = 0; // 0xc58 SetNull
	goto Label_3112; // 0xc59 Jump
	
Label_3157:
	var_120_int = 1; // 0xc55 PushI
	Sleep(var_120_int); // 0xc56 Func
	
Label_3126:
	var_121_int = 1; // 0xc36 PushI
	Sleep(var_121_int); // 0xc37 Func
	goto Label_3116; // 0xc39 Jump
	
Label_3131:
	var_1_object = 0; // 0xc3b TMovB
	
Label_3162:
	return 12; // 0xc5a Return
}


func_6177(var_22_int)
{
	var_22_int = 2; // 0x1822 MovI
	return 0; // 0x1823 Return
}


func_6180(var_30_object)
{
	var_31_object = Obj(); // 0x1825 PushV
	var_31_object = var_30_object; // 0x1826 Mov
	func_6240(var_30_object, var_31_object); // 0x1827 NEW_2
	return 0; // 0x1829 Return
}


func_40(var_0_bool, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x28 PushV
	var_0_bool = var_45_object; // 0x29 TMov
	var_55_bool = 0; var_56_object = Obj(); var_57_float = 0; // 0x2a PushV
	var_56_object = var_45_object; // 0x2b Mov
	var_57_float = 70.0; // 0x2c MovF
	func_4987(var_56_object, var_57_float); // 0x2d NEW_2
	var_102_bool = var_55_bool == 0; // 0x2f Not
	if(var_102_bool == 0) goto Label_51; // 0x30 JumpB
	var_44_int = -2; // 0x31 MovI
	return 8; // 0x32 Return
	
Label_51:
	CreateDialog(var_51_object); // 0x33 Func
	var_103_int = 0; // 0x35 PushV
	func_6225(var_103_int); // 0x36 NEW_2
	SetNPCName(var_103_int); // 0x38 ObjFunc
	var_104_int = 0; // 0x3a PushV
	func_6223(var_104_int); // 0x3b NEW_2
	SetNPCDescription(var_104_int); // 0x3d ObjFunc
	var_105_string = ""; // 0x3f PushV
	func_6227(var_105_string); // 0x40 NEW_2
	SetPhoto(var_105_string); // 0x42 ObjFunc
	var_106_string = ""; // 0x44 PushV
	func_6229(var_106_string); // 0x45 NEW_2
	SetPhoto2(var_106_string); // 0x47 ObjFunc
	var_107_int = 0; // 0x49 PushV
	func_5607(var_107_int); // 0x4a NEW_2
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
	var_390_bool = var_54_bool == 0; // 0x60 Not
	if(var_390_bool == 0) goto Label_103; // 0x61 JumpB
	sync(); // 0x62 Func
	IsDialogEnd(var_54_bool); // 0x64 ObjFunc
	goto Label_96; // 0x66 Jump
	
Label_103:
	var_391_object = Obj(); // 0x67 PushV
	var_391_object = var_45_object; // 0x68 Mov
	func_5056(); // 0x69 NEW_2
	StopDialog(var_51_object); // 0x6b Func
	GetReturnValue(var_53_int); // 0x6d ObjFunc
	var_44_int = var_53_int; // 0x6f Mov
	return 8; // 0x70 Return
}


func_6186()
{
	return 0; // 0x182a Return
}


func_4650(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_object = Obj(); // 0x122b PushV
	var_33_object = var_31_object; // 0x122c Mov
	func_4821(var_32_bool, var_33_object); // 0x122d NEW_2
	var_30_bool = var_32_bool; // 0x122e Mov
	return 0; // 0x1230 Return
}


func_5674(var_169_string)
{
	var_170_object = Obj(); var_171_int = 0; var_172_bool = 0; var_173_object = Obj(); var_174_int = 0; var_175_bool = 0; // 0x162a PushV
	CreateInvItem(var_173_object); // 0x162b Func
	SetItemName(var_169_string); // 0x162d ObjFunc
	var_176_string = "Organ"; // 0x162f PushS
	var_177_int = 1; // 0x1630 PushI
	SetProperty(var_176_string, var_177_int); // 0x1631 ObjFunc
	GetItemID(var_174_int); // 0x1633 ObjFunc
	var_178_int = 0; // 0x1635 PushI
	var_179_int = 1; // 0x1636 PushI
	AddItem(var_175_bool, var_173_object, var_178_int, var_179_int); // 0x1637 Func
	return 6; // 0x1639 Return
}


func_6187(var_25_bool)
{
	var_25_bool = 0; // 0x182c MovB
	return 0; // 0x182d Return
}


func_5166(var_23_object)
{
	var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_cvector = CVector(0,0,0); // 0x142e PushV
	GetEyesHeight(var_26_float); // 0x142f ObjFunc
	var_27_cvector = CVector(0.0, 0.0, 0.0); // 0x1431 MovV
	var_28_float = GetByIndex(var_27_cvector, 1); // 0x1432 PushE
	var_28_float = var_26_float; // 0x1433 Mov
	SetByIndex(var_27_cvector, 1) = var_28_float; // 0x1434 PopE
	var_29_string = "head"; // 0x1435 PushS
	LookAsync(var_23_object, var_29_string, var_27_cvector); // 0x1436 Func
	return 4; // 0x1438 Return
}


func_6190()
{
	return 0; // 0x182f Return
}


func_6192(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0; // 0x1830 PushV
	CanSee(var_35_bool, var_33_object); // 0x1831 Func
	var_32_bool = 1; // 0x1833 MovB
	var_36_bool = var_35_bool; // 0x1834 Push
	if(var_36_bool == 0) goto Label_6206; // 0x1835 JumpB
	var_37_float = 0; var_38_object = Obj(); // 0x1836 PushV
	var_38_object = var_33_object; // 0x1837 Mov
	func_4682(var_38_object); // 0x1838 NEW_2
	var_45_int = 2250000; // 0x183a PushI
	var_46_bool = var_37_float <= var_45_int; // 0x183b LE
	if(var_46_bool == 0) goto Label_6206; // 0x183c JumpB
	var_32_bool = 0; // 0x183d MovB
	
Label_6206:
	return 2; // 0x183e Return
}


func_4657(var_324_string)
{
	var_324_string = "walk"; // 0x1231 MovS
	return 0; // 0x1232 Return
}


func_4659(var_325_string)
{
	var_325_string = "run"; // 0x1233 MovS
	return 0; // 0x1234 Return
}


func_4661(var_540_string, var_541_int)
{
	var_542_int = 2; // 0x1236 PushI
	var_543_bool = var_541_int == var_542_int; // 0x1237 Eq
	if(var_543_bool == 0) goto Label_4668; // 0x1238 JumpB
	var_540_string = "fire"; // 0x1239 MovS
	return 0; // 0x123a Return
	
Label_4668:
	var_544_int = 1; // 0x123c PushI
	var_545_bool = var_541_int == var_544_int; // 0x123d Eq
	if(var_545_bool == 0) goto Label_4673; // 0x123e JumpB
	var_540_string = "bullet"; // 0x123f MovS
	return 0; // 0x1240 Return
	
Label_4673:
	var_540_string = "phys"; // 0x1241 MovS
	return 0; // 0x1242 Return
}


func_5177()
{
	var_22_bool = 0; // 0x1439 PushV
	func_6231(var_22_bool); // 0x143a NEW_2
	if(var_22_bool == 0) goto Label_5183; // 0x143c JumpB
	lshStopSpeech(); // 0x143d Func
	
Label_5183:
	return 0; // 0x143f Return
}


func_5691()
{
	var_163_int = 0; // 0x163b PushV
	func_5624(var_163_int); // 0x163c NEW_2
	var_167_int = 1; // 0x163e PushI
	var_168_bool = var_163_int != var_167_int; // 0x163f Neq
	if(var_168_bool == 0) goto Label_5698; // 0x1640 JumpB
	return 0; // 0x1641 Return
	
Label_5698:
	var_169_string = ""; // 0x1642 PushV
	var_169_string = "liver"; // 0x1643 MovS
	func_5674(var_169_string); // 0x1644 NEW_2
	var_180_string = ""; // 0x1646 PushV
	var_180_string = "kidney"; // 0x1647 MovS
	func_5674(var_180_string); // 0x1648 NEW_2
	var_181_string = ""; // 0x164a PushV
	var_181_string = "heart"; // 0x164b MovS
	func_5674(var_181_string); // 0x164c NEW_2
	var_182_string = ""; // 0x164e PushV
	var_182_string = "blood"; // 0x164f MovS
	func_5674(var_182_string); // 0x1650 NEW_2
	return 0; // 0x1652 Return
}


func_3646()
{
	StopGroup0(); // 0xe3e Func
	StopAsync(); // 0xe40 Func
	var_32_string = "head"; // 0xe42 PushS
	UnlookAsync(var_32_string); // 0xe43 Func
	var_33_int = 111; // 0xe45 PushI
	KillTimer(var_33_int); // 0xe46 Func
	return 0; // 0xe48 Return
}


func_6207(var_60_object)
{
	var_61_object = Obj(); // 0x1840 PushV
	var_61_object = var_60_object; // 0x1841 Mov
	func_5983(var_61_object); // 0x1842 NEW_2
	return 0; // 0x1844 Return
}


func_5184(var_24_string, var_25_int, var_26_int)
{
	var_27_bool = 0; var_28_bool = 0; // 0x1440 PushV
	var_29_bool = 0; var_30_int = 0; var_31_int = 0; // 0x1441 PushV
	var_30_int = var_25_int; // 0x1442 Mov
	var_31_int = var_26_int; // 0x1443 Mov
	func_5270(var_29_bool, var_30_int, var_31_int); // 0x1444 NEW_2
	if(var_29_bool == 0) goto Label_5194; // 0x1446 JumpB
	var_34_int = 0; // 0x1447 PushI
	AddItem(var_28_bool, var_24_string, var_34_int); // 0x1448 Func
	
Label_5194:
	return 2; // 0x144a Return
}


func_4675(var_53_cvector)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0x1243 PushV
	GetPosition(var_57_cvector); // 0x1244 Func
	GetPosition(var_58_cvector); // 0x1246 ObjFunc
	var_53_cvector = var_58_cvector - var_57_cvector; // 0x1248 Sub2
	return 4; // 0x1249 Return
}


func_6213(var_49_bool)
{
	var_49_bool = 0; // 0x1846 MovB
	return 0; // 0x1847 Return
}


func_6216()
{
	return 0; // 0x1849 Return
}


func_6218(var_27_bool)
{
	var_27_bool = 0; // 0x184b MovB
	return 0; // 0x184c Return
}


func_5195(var_45_string)
{
	var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x144b PushV
	IsExisting3DSound(var_54_bool, var_45_string); // 0x144c Func
	var_62_bool = var_54_bool == 0; // 0x144e Not
	if(var_62_bool == 0) goto Label_5220; // 0x144f JumpB
	var_55_int = 0; // 0x1450 MovI
	
Label_5201:
	var_63_int = 1; // 0x1451 PushI
	var_64_int = var_55_int + var_63_int; // 0x1452 Add
	var_65_int = var_45_string + var_64_int; // 0x1453 Add
	IsExisting3DSound(var_56_bool, var_65_int); // 0x1454 Func
	var_66_bool = var_56_bool == 0; // 0x1456 Not
	if(var_66_bool == 0) goto Label_5209; // 0x1457 JumpB
	goto Label_5212; // 0x1458 Jump
	
Label_5212:
	var_67_bool = var_55_int == 0; // 0x145c Not
	if(var_67_bool == 0) goto Label_5215; // 0x145d JumpB
	return 16; // 0x145e Return
	
Label_5215:
	irand(var_57_int, var_55_int); // 0x145f Func
	var_68_int = 1; // 0x1461 PushI
	var_69_int = var_57_int + var_68_int; // 0x1462 Add
	var_45_string = var_45_string + var_69_int; // 0x1463 Add2
	
Label_5220:
	Is3DSoundLoaded(var_58_bool, var_45_string); // 0x1464 Func
	var_70_bool = var_58_bool; // 0x1466 Push
	if(var_70_bool == 0) goto Label_5235; // 0x1467 JumpB
	GetEyesHeight(var_59_float); // 0x1468 Func
	GetDirection(var_60_cvector); // 0x146a Func
	var_71_int = 50; // 0x146c PushI
	var_61_cvector = var_60_cvector * var_71_int; // 0x146d Mult2
	var_72_float = GetByIndex(var_61_cvector, 1); // 0x146e PushE
	var_72_float = var_72_float + var_59_float; // 0x146f Add2
	SetByIndex(var_61_cvector, 1) = var_72_float; // 0x1470 PopE
	PlayGlobalSound(var_45_string, var_61_cvector); // 0x1471 Func
	
Label_5235:
	return 16; // 0x1473 Return
	
Label_5209:
	var_73_int = 1; // 0x1459 PushI
	var_55_int = var_55_int + var_73_int; // 0x145a Add2
	goto Label_5201; // 0x145b Jump
}


func_4682(var_37_float)
{
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x124a PushV
	GetPosition(var_42_cvector); // 0x124b Func
	GetPosition(var_43_cvector); // 0x124d ObjFunc
	var_44_cvector = var_43_cvector - var_42_cvector; // 0x124f Sub2
	var_37_float = var_44_cvector | var_44_cvector; // 0x1250 Or2
	return 6; // 0x1251 Return
}


func_6221()
{
	return 0; // 0x184e Return
}


func_6223(var_104_int)
{
	var_104_int = 515557; // 0x184f MovI
	return 0; // 0x1850 Return
}


func_4176(var_603_bool, var_604_float)
{
	var_605_float = 0; var_606_bool = 0; var_607_float = 0; var_608_bool = 0; // 0x1050 PushV
	rand(var_607_float); // 0x1051 Func
	var_609_bool = var_607_float < var_604_float; // 0x1053 LT
	if(var_609_bool == 0) goto Label_4196; // 0x1054 JumpB
	
Label_4181:
	IsAnimationPlaying(var_608_bool); // 0x1055 Func
	var_610_bool = var_608_bool == 0; // 0x1057 Not
	if(var_610_bool == 0) goto Label_4186; // 0x1058 JumpB
	goto Label_4195; // 0x1059 Jump
	
Label_4195:
	goto Label_4201; // 0x1063 Jump
	
Label_4201:
	var_603_bool = 0; // 0x1069 MovB
	return 4; // 0x106a Return
	
Label_4186:
	var_611_bool = 0; // 0x105a PushV
	func_4274(var_611_bool); // 0x105b NEW_2
	if(var_611_bool == 0) goto Label_4192; // 0x105d JumpB
	var_603_bool = 1; // 0x105e MovB
	return 4; // 0x105f Return
	
Label_4192:
	sync(); // 0x1060 Func
	goto Label_4181; // 0x1062 Jump
	
Label_4196:
	WaitForAnimEnd(); // 0x1064 Func
	func_4378(var_608_bool); // 0x1067 NEW_2
}


func_6225(var_103_int)
{
	var_103_int = 503342; // 0x1851 MovI
	return 0; // 0x1852 Return
}


func_4690(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_bool = 0; // 0x1252 PushV
	IsPlayerActor(var_104_object, var_106_bool); // 0x1253 Func
	var_103_bool = var_106_bool; // 0x1255 Mov
	return 2; // 0x1256 Return
}


func_6227(var_105_string)
{
	var_105_string = "ui/NPC_Citizen1.png"; // 0x1853 MovS
	return 0; // 0x1854 Return
}


func_5715()
{
	var_112_bool = 0; var_113_bool = 0; // 0x1653 PushV
	var_114_int = 0; // 0x1654 PushI
	ClearSubContainer(var_114_int); // 0x1655 Func
	var_115_int = 0; var_116_int = 0; // 0x1657 PushV
	var_115_int = 30; // 0x1658 MovI
	var_117_int = 50; // 0x1659 PushI
	var_118_int = 0; // 0x165a PushV
	func_5333(var_118_int); // 0x165b NEW_2
	var_124_int = 40; // 0x165d PushI
	var_125_float = var_118_int * var_124_int; // 0x165e Mult
	var_116_int = var_117_int + var_125_float; // 0x165f Add2
	func_5643(var_115_int, var_116_int); // 0x1660 NEW_2
	var_143_string = ""; var_144_int = 0; var_145_int = 0; // 0x1662 PushV
	var_143_string = "tourniquet"; // 0x1663 MovS
	var_144_int = 1; // 0x1664 MovI
	var_145_int = 10; // 0x1665 MovI
	func_5184(var_143_string, var_144_int, var_145_int); // 0x1666 NEW_2
	var_154_string = ""; var_155_int = 0; var_156_int = 0; // 0x1668 PushV
	var_154_string = "bandage"; // 0x1669 MovS
	var_155_int = 1; // 0x166a MovI
	var_156_int = 10; // 0x166b MovI
	func_5184(var_154_string, var_155_int, var_156_int); // 0x166c NEW_2
	var_157_string = ""; var_158_int = 0; var_159_int = 0; // 0x166e PushV
	var_157_string = "bottle_empty"; // 0x166f MovS
	var_158_int = 1; // 0x1670 MovI
	var_159_int = 2; // 0x1671 MovI
	func_5184(var_157_string, var_158_int, var_159_int); // 0x1672 NEW_2
	var_160_string = ""; var_161_int = 0; var_162_int = 0; // 0x1674 PushV
	var_160_string = "tvirin"; // 0x1675 MovS
	var_161_int = 1; // 0x1676 MovI
	var_162_int = 8; // 0x1677 MovI
	func_5184(var_160_string, var_161_int, var_162_int); // 0x1678 NEW_2
	return 2; // 0x167a Return
}


func_6229(var_106_string)
{
	var_106_string = "ui/NPC_Citizen1_b.png"; // 0x1855 MovS
	return 0; // 0x1856 Return
}


func_6231(var_98_bool)
{
	var_98_bool = 0; // 0x1857 MovB
	return 0; // 0x1858 Return
}


func_4695(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0; // 0x1257 PushV
	var_59_string = "HasProperty"; // 0x1258 PushS
	var_60_int = 2; // 0x1259 PushI
	var_61_bool = IsFuncExist(var_55_object, var_59_string, var_60_int); // 0x125a FuncExist
	var_62_bool = var_61_bool == 0; // 0x125b Not
	if(var_62_bool == 0) goto Label_4703; // 0x125c JumpB
	var_54_bool = 0; // 0x125d MovB
	return 2; // 0x125e Return
	
Label_4703:
	HasProperty(var_56_string, var_58_bool); // 0x125f ObjFunc
	var_54_bool = var_58_bool; // 0x1261 Mov
	return 2; // 0x1262 Return
}


func_6233()
{
	var_20_bool = GlobalVars[0]; // 0x1859 PushGE
	var_20_bool = 0; // 0x185a MovB
	GlobalVars[0] = var_20_bool; // 0x185b PopGE
	func_5755(); // 0x185d NEW_2
	return 0; // 0x185f Return
}


func_3163(var_57_float)
{
	var_58_float = 0; var_59_float = 0; // 0xc5b PushV
	GetCameraFarDistance(var_59_float); // 0xc5c Func
	var_57_float = var_59_float; // 0xc5e Mov
	return 2; // 0xc5f Return
}


func_6240(var_31_object, var_46_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x1860 PushV
	var_34_bool = GlobalVars[0]; // 0x1861 PushGE
	if(var_34_bool == 0) goto Label_6253; // 0x1862 JumpB
	IsOverrideActive(var_33_bool); // 0x1863 Func
	var_35_bool = var_33_bool == 0; // 0x1865 Not
	if(var_35_bool == 0) goto Label_6251; // 0x1866 JumpB
	var_36_object = Obj(); // 0x1867 PushV
	var_36_object = var_31_object; // 0x1868 Mov
	func_5630(var_36_object); // 0x1869 NEW_2
	
Label_6251:
	return 2; // 0x186b Return
	
Label_6253:
	var_43_int = 1000; // 0x186d PushI
	var_44_int = 0; var_45_object = Obj(); // 0x186e PushV
	var_45_object = var_31_object; // 0x186f Mov
	TaskCall(1); // 0x1870 TaskCall
	func_40(var_46_object, var_44_int, var_45_object); // 0x1871 NEW_2
	TaskReturn(); // 0x1872 TaskReturn
	var_399_bool = var_43_int == var_46_object; // 0x1874 Eq
	if(var_399_bool == 0) goto Label_6279; // 0x1875 JumpB
	var_400_bool = 0; var_401_object = Obj(); // 0x1876 PushV
	var_401_object = var_31_object; // 0x1877 Mov
	func_5074(var_400_bool, var_401_object); // 0x1878 NEW_2
	var_432_bool = var_400_bool == 0; // 0x187a Not
	if(var_432_bool == 0) goto Label_6269; // 0x187b JumpB
	return 2; // 0x187c Return
	
Label_6269:
	var_433_object = Obj(); // 0x187d PushV
	var_433_object = var_31_object; // 0x187e Mov
	TaskCall(0); // 0x187f TaskCall
	func_0(var_433_object); // 0x1880 NEW_2
	TaskReturn(); // 0x1881 TaskReturn
	var_440_object = Obj(); // 0x1883 PushV
	var_440_object = var_31_object; // 0x1884 Mov
	func_5130(); // 0x1885 NEW_2
	
Label_6279:
	return 2; // 0x1887 Return
}


func_4707(var_512_float, var_513_object, var_514_float, var_515_int)
{
	var_519_int = 0; var_520_string = ""; var_521_int = 0; var_522_float = 0; var_523_float = 0; var_524_float = 0; var_525_int = 0; var_526_string = ""; var_527_int = 0; var_528_float = 0; var_529_float = 0; var_530_float = 0; // 0x1263 PushV
	var_531_bool = 0; var_532_object = Obj(); var_533_string = ""; // 0x1264 PushV
	var_532_object = var_513_object; // 0x1265 Mov
	var_533_string = "health"; // 0x1266 MovS
	func_4695(var_531_bool, var_532_object, var_533_string); // 0x1267 NEW_2
	var_534_bool = var_531_bool == 0; // 0x1269 Not
	if(var_534_bool == 0) goto Label_4717; // 0x126a JumpB
	var_512_float = 0.0; // 0x126b MovF
	return 12; // 0x126c Return
	
Label_4717:
	var_535_bool = 0; var_536_object = Obj(); var_537_string = ""; // 0x126d PushV
	var_536_object = var_513_object; // 0x126e Mov
	var_537_string = "armor"; // 0x126f MovS
	func_4695(var_535_bool, var_536_object, var_537_string); // 0x1270 NEW_2
	var_538_bool = var_535_bool == 0; // 0x1272 Not
	if(var_538_bool == 0) goto Label_4726; // 0x1273 JumpB
	var_525_int = 0; // 0x1274 MovI
	goto Label_4729; // 0x1275 Jump
	
Label_4729:
	var_539_string = "armor_"; // 0x1279 PushS
	var_540_string = ""; var_541_int = 0; // 0x127a PushV
	var_541_int = var_515_int; // 0x127b Mov
	func_4661(var_540_string, var_541_int); // 0x127c NEW_2
	var_526_string = var_539_string + var_540_string; // 0x127e Add2
	var_546_bool = 0; var_547_object = Obj(); var_548_string = ""; // 0x127f PushV
	var_547_object = var_513_object; // 0x1280 Mov
	var_548_string = var_526_string; // 0x1281 Mov
	func_4695(var_546_bool, var_547_object, var_548_string); // 0x1282 NEW_2
	var_549_bool = var_546_bool == 0; // 0x1284 Not
	if(var_549_bool == 0) goto Label_4744; // 0x1285 JumpB
	var_527_int = 0; // 0x1286 MovI
	goto Label_4746; // 0x1287 Jump
	
Label_4746:
	var_550_float = 0; var_551_float = 0; var_552_float = 0; // 0x128a PushV
	var_553_int = var_525_int + var_527_int; // 0x128b Add
	var_554_float = 100.0; // 0x128c PushF
	var_551_float = var_553_int / var_553_int; // 0x128d Div2
	var_552_float = 1; // 0x128e MovI
	func_5252(var_550_float, var_551_float, var_552_float); // 0x128f NEW_2
	var_528_float = var_550_float; // 0x1290 Mov
	var_556_string = "health"; // 0x1292 PushS
	GetProperty(var_556_string, var_529_float); // 0x1293 ObjFunc
	var_557_int = 1; // 0x1295 PushI
	var_558_int = var_557_int - var_528_float; // 0x1296 Sub
	var_530_float = var_514_float * var_558_int; // 0x1297 Mult2
	var_559_string = "health"; // 0x1298 PushS
	var_560_float = 0; var_561_float = 0; var_562_float = 0; var_563_float = 0; // 0x1299 PushV
	var_561_float = var_529_float - var_530_float; // 0x129a Sub2
	var_562_float = 0; // 0x129b MovI
	var_563_float = 1; // 0x129c MovI
	func_5259(var_560_float, var_561_float, var_562_float, var_563_float); // 0x129d NEW_2
	SetProperty(var_559_string, var_560_float); // 0x129f ObjFunc
	var_566_bool = 0; var_567_object = Obj(); // 0x12a1 PushV
	var_567_object = var_513_object; // 0x12a2 Mov
	func_4690(var_566_bool, var_567_object); // 0x12a3 NEW_2
	if(var_566_bool == 0) goto Label_4778; // 0x12a5 JumpB
	var_568_float = 0; // 0x12a6 PushV
	var_568_float = -var_530_float; // 0x12a7 Neg2
	func_5316(var_568_float); // 0x12a8 NEW_2
	
Label_4778:
	var_512_float = var_530_float; // 0x12aa Mov
	return 12; // 0x12ab Return
	
Label_4744:
	GetProperty(var_526_string, var_527_int); // 0x1288 ObjFunc
	
Label_4726:
	var_576_string = "armor"; // 0x1276 PushS
	GetProperty(var_576_string, var_525_int); // 0x1277 ObjFunc
}


func_3175(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0xc67 TMovB
	var_1_object = 0; // 0xc68 TMovB
	Stop(); // 0xc69 Func
	StopGroup0(); // 0xc6b Func
	return 0; // 0xc6d Return
}


func_4203(var_0_bool, var_404_bool, var_405_float)
{
	var_406_bool = 0; var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_float = 0; var_411_bool = 0; var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_cvector = CVector(0,0,0); var_415_float = 0; // 0x106b PushV
	
Label_4204:
	IsAnimationPlaying(var_411_bool); // 0x106c Func
	var_416_bool = var_411_bool == 0; // 0x106e Not
	if(var_416_bool == 0) goto Label_4209; // 0x106f JumpB
	goto Label_4241; // 0x1070 Jump
	
Label_4241:
	func_4378(var_415_float); // 0x1092 NEW_2
	var_404_bool = 0; // 0x1094 MovB
	return 10; // 0x1095 Return
	
Label_4209:
	var_417_bool = 0; // 0x1071 PushV
	func_4274(var_417_bool); // 0x1072 NEW_2
	if(var_417_bool == 0) goto Label_4215; // 0x1074 JumpB
	var_404_bool = 1; // 0x1075 MovB
	return 10; // 0x1076 Return
	
Label_4215:
	var_456_bool = 0; var_457_object = Obj(); // 0x1077 PushV
	var_457_object = var_0_bool; // 0x1078 MovT
	func_4821(var_456_bool, var_457_object); // 0x1079 NEW_2
	var_458_bool = var_456_bool == 0; // 0x107b Not
	if(var_458_bool == 0) goto Label_4223; // 0x107c JumpB
	var_404_bool = 0; // 0x107d MovB
	return 10; // 0x107e Return
	
Label_4223:
	GetPFPosition(var_412_cvector); // 0x107f TObjFunc
	GetPFPosition(var_413_cvector); // 0x1081 Func
	var_414_cvector = var_412_cvector - var_413_cvector; // 0x1083 Sub2
	var_415_float = var_414_cvector | var_414_cvector; // 0x1084 Or2
	var_459_float = var_405_float * var_405_float; // 0x1085 Mult
	var_460_bool = var_415_float < var_459_float; // 0x1086 LT
	if(var_460_bool == 0) goto Label_4238; // 0x1087 JumpB
	var_461_bool = 0; var_462_float = 0; // 0x1088 PushV
	var_462_float = var_405_float; // 0x1089 Mov
	func_4039(var_415_float, var_461_bool, var_462_float); // 0x108a NEW_2
	var_404_bool = 1; // 0x108c MovB
	return 10; // 0x108d Return
	
Label_4238:
	sync(); // 0x108e Func
	goto Label_4204; // 0x1090 Jump
}


func_3182(var_0_bool, var_1_object)
{
	var_0_bool = 1; // 0xc6e TMovB
	var_1_object = 1; // 0xc6f TMovB
	Stop(); // 0xc70 Func
	StopGroup0(); // 0xc72 Func
	return 0; // 0xc74 Return
}


func_2672(var_21_object)
{
	EventDisable(0); // 0xa71 EventDisable
	var_22_object = Obj(); // 0xa72 PushV
	var_22_object = var_21_object; // 0xa73 Mov
	func_2705(var_22_object); // 0xa74 NEW_2
	var_102_object = Obj(); // 0xa76 PushV
	var_102_object = var_21_object; // 0xa77 Mov
	func_6295(var_102_object); // 0xa78 NEW_2
	EventEnable(0); // 0xa7a EventEnable
	
Label_2683:
	Hold(); // 0xa7b Func
	goto Label_2683; // 0xa7d Jump
}


func_114(var_0_bool, var_1_object, var_2_object, var_3_object, var_116_object, var_117_object)
{
	var_0_bool = var_117_object; // 0x73 TMov
	var_1_object = var_116_object; // 0x74 TMov
	var_3_object = 0; // 0x75 TMovB
	var_122_int = 1; // 0x76 PushI
	if(var_122_int == 0) goto Label_498; // 0x77 JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x78 PushV
	var_124_object = var_1_object; // 0x79 MovT
	func_5391(var_124_object); // 0x7a NEW_2
	if(var_123_bool == 0) goto Label_233; // 0x7c JumpB
	var_131_string = ""; // 0x7d PushV
	var_131_string = "Neutral"; // 0x7e MovS
	func_528(var_117_object, var_131_string); // 0x7f NEW_2
	var_148_int = 543012; // 0x81 PushI
	SetMessage(var_148_int); // 0x82 TObjFunc
	ClearReplies(); // 0x84 TObjFunc
	var_149_bool = 0; var_150_object = Obj(); // 0x86 PushV
	var_150_object = var_1_object; // 0x87 MovT
	func_5413(var_149_bool, var_150_object); // 0x88 NEW_2
	if(var_149_bool == 0) goto Label_144; // 0x8a JumpB
	var_160_int = 543015; // 0x8b PushI
	var_161_int = 45468; // 0x8c PushI
	var_162_int = 45467; // 0x8d PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x8e TObjFunc
	
Label_144:
	var_163_bool = 0; var_164_object = Obj(); // 0x90 PushV
	var_164_object = var_1_object; // 0x91 MovT
	func_5423(var_163_bool, var_164_object); // 0x92 NEW_2
	if(var_163_bool == 0) goto Label_154; // 0x94 JumpB
	var_169_int = 543022; // 0x95 PushI
	var_170_int = 45475; // 0x96 PushI
	var_171_int = 45474; // 0x97 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x98 TObjFunc
	
Label_154:
	var_172_bool = 0; // 0x9a PushV
	var_172_bool = 1; // 0x9b MovB
	var_173_bool = 0; // 0x9c PushV
	var_173_bool = 1; // 0x9d MovB
	var_174_bool = 0; var_175_object = Obj(); // 0x9e PushV
	var_175_object = var_1_object; // 0x9f MovT
	func_5433(var_174_bool, var_175_object); // 0xa0 NEW_2
	if(var_174_bool == 0) goto Label_169; // 0xa2 JumpB
	var_180_bool = 0; var_181_object = Obj(); // 0xa3 PushV
	var_181_object = var_1_object; // 0xa4 MovT
	func_5443(var_180_bool, var_181_object); // 0xa5 NEW_2
	if(var_180_bool == 0) goto Label_169; // 0xa7 JumpB
	var_173_bool = 0; // 0xa8 MovB
	
Label_169:
	if(var_173_bool == 0) goto Label_176; // 0xa9 JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0xaa PushV
	var_187_object = var_1_object; // 0xab MovT
	func_5453(var_186_bool, var_187_object); // 0xac NEW_2
	if(var_186_bool == 0) goto Label_176; // 0xae JumpB
	var_172_bool = 0; // 0xaf MovB
	
Label_176:
	if(var_172_bool == 0) goto Label_182; // 0xb0 JumpB
	var_192_int = 543026; // 0xb1 PushI
	var_193_int = 45480; // 0xb2 PushI
	var_194_int = 45478; // 0xb3 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xb4 TObjFunc
	
Label_182:
	var_195_bool = 0; // 0xb6 PushV
	var_195_bool = 1; // 0xb7 MovB
	var_196_bool = 0; var_197_object = Obj(); // 0xb8 PushV
	var_197_object = var_1_object; // 0xb9 MovT
	func_5463(var_196_bool, var_197_object); // 0xba NEW_2
	if(var_196_bool == 0) goto Label_195; // 0xbc JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0xbd PushV
	var_203_object = var_1_object; // 0xbe MovT
	func_5473(var_202_bool, var_203_object); // 0xbf NEW_2
	if(var_202_bool == 0) goto Label_195; // 0xc1 JumpB
	var_195_bool = 0; // 0xc2 MovB
	
Label_195:
	if(var_195_bool == 0) goto Label_201; // 0xc3 JumpB
	var_208_int = 543034; // 0xc4 PushI
	var_209_int = 45487; // 0xc5 PushI
	var_210_int = 45486; // 0xc6 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xc7 TObjFunc
	
Label_201:
	var_211_int = 536643; // 0xc9 PushI
	var_212_int = -1; // 0xca PushI
	var_213_int = 38471; // 0xcb PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xcc TObjFunc
	var_214_bool = 0; var_215_object = Obj(); // 0xce PushV
	var_215_object = var_1_object; // 0xcf MovT
	func_5413(var_214_bool, var_215_object); // 0xd0 NEW_2
	if(var_214_bool == 0) goto Label_216; // 0xd2 JumpB
	var_216_int = 543014; // 0xd3 PushI
	var_217_int = -1; // 0xd4 PushI
	var_218_int = 45466; // 0xd5 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0xd6 TObjFunc
	
Label_216:
	var_219_bool = 0; var_220_object = Obj(); // 0xd8 PushV
	var_220_object = var_1_object; // 0xd9 MovT
	func_5413(var_219_bool, var_220_object); // 0xda NEW_2
	var_221_bool = var_219_bool == 0; // 0xdc Not
	if(var_221_bool == 0) goto Label_227; // 0xdd JumpB
	var_222_int = 543027; // 0xde PushI
	var_223_int = -1; // 0xdf PushI
	var_224_int = 45479; // 0xe0 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xe1 TObjFunc
	
Label_227:
	var_225_int = 536852; // 0xe3 PushI
	var_226_int = -1; // 0xe4 PushI
	var_227_int = 38688; // 0xe5 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0xe6 TObjFunc
	goto Label_498; // 0xe8 Jump
	
Label_498:
	var_228_bool = 0; // 0x1f2 PushV
	func_6231(var_228_bool); // 0x1f3 NEW_2
	if(var_228_bool == 0) goto Label_513; // 0x1f5 JumpB
	
Label_502:
	lshWaitForAnimEnd(); // 0x1f6 Func
	var_229_object = var_3_object; // 0x1f8 PushT
	if(var_229_object == 0) goto Label_507; // 0x1f9 JumpB
	goto Label_512; // 0x1fa Jump
	
Label_512:
	goto Label_527; // 0x200 Jump
	
Label_527:
	return 0; // 0x20f Return
	
Label_507:
	var_230_string = ""; // 0x1fb PushV
	var_230_string = var_2_object; // 0x1fc MovT
	func_5135(var_230_string); // 0x1fd NEW_2
	goto Label_502; // 0x1ff Jump
	
Label_513:
	var_241_string = "all"; // 0x201 PushS
	var_242_string = "idle"; // 0x202 PushS
	PlayAnimation(var_241_string, var_242_string); // 0x203 Func
	
Label_517:
	WaitForAnimEnd(); // 0x205 Func
	var_243_object = var_3_object; // 0x207 PushT
	if(var_243_object == 0) goto Label_522; // 0x208 JumpB
	goto Label_527; // 0x209 Jump
	
Label_522:
	var_244_string = "all"; // 0x20a PushS
	var_245_string = "idle"; // 0x20b PushS
	PlayAnimation(var_244_string, var_245_string); // 0x20c Func
	goto Label_517; // 0x20e Jump
	
Label_233:
	var_246_string = ""; // 0xe9 PushV
	var_246_string = "Neutral"; // 0xea MovS
	func_528(var_117_object, var_246_string); // 0xeb NEW_2
	var_247_int = 536636; // 0xed PushI
	SetMessage(var_247_int); // 0xee TObjFunc
	ClearReplies(); // 0xf0 TObjFunc
	var_248_bool = 0; // 0xf2 PushV
	var_248_bool = 0; // 0xf3 MovB
	var_249_bool = 0; var_250_object = Obj(); // 0xf4 PushV
	var_250_object = var_1_object; // 0xf5 MovT
	func_5367(var_250_object); // 0xf6 NEW_2
	if(var_249_bool == 0) goto Label_255; // 0xf8 JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0xf9 PushV
	var_256_object = var_1_object; // 0xfa MovT
	func_5403(var_255_bool, var_256_object); // 0xfb NEW_2
	if(var_255_bool == 0) goto Label_255; // 0xfd JumpB
	var_248_bool = 1; // 0xfe MovB
	
Label_255:
	if(var_248_bool == 0) goto Label_261; // 0xff JumpB
	var_261_int = 536638; // 0x100 PushI
	var_262_int = -1; // 0x101 PushI
	var_263_int = 38466; // 0x102 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x103 TObjFunc
	
Label_261:
	var_264_bool = 0; // 0x105 PushV
	var_264_bool = 0; // 0x106 MovB
	var_265_bool = 0; var_266_object = Obj(); // 0x107 PushV
	var_266_object = var_1_object; // 0x108 MovT
	func_5367(var_266_object); // 0x109 NEW_2
	if(var_265_bool == 0) goto Label_275; // 0x10b JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x10c PushV
	var_268_object = var_1_object; // 0x10d MovT
	func_5403(var_267_bool, var_268_object); // 0x10e NEW_2
	var_269_bool = var_267_bool == 0; // 0x110 Not
	if(var_269_bool == 0) goto Label_275; // 0x111 JumpB
	var_264_bool = 1; // 0x112 MovB
	
Label_275:
	if(var_264_bool == 0) goto Label_281; // 0x113 JumpB
	var_270_int = 536644; // 0x114 PushI
	var_271_int = -1; // 0x115 PushI
	var_272_int = 38472; // 0x116 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x117 TObjFunc
	
Label_281:
	var_273_bool = 0; // 0x119 PushV
	var_273_bool = 0; // 0x11a MovB
	var_274_bool = 0; var_275_object = Obj(); // 0x11b PushV
	var_275_object = var_1_object; // 0x11c MovT
	func_5379(var_275_object); // 0x11d NEW_2
	if(var_274_bool == 0) goto Label_294; // 0x11f JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x120 PushV
	var_281_object = var_1_object; // 0x121 MovT
	func_5403(var_280_bool, var_281_object); // 0x122 NEW_2
	if(var_280_bool == 0) goto Label_294; // 0x124 JumpB
	var_273_bool = 1; // 0x125 MovB
	
Label_294:
	if(var_273_bool == 0) goto Label_300; // 0x126 JumpB
	var_282_int = 536639; // 0x127 PushI
	var_283_int = 38468; // 0x128 PushI
	var_284_int = 38467; // 0x129 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x12a TObjFunc
	
Label_300:
	var_285_bool = 0; // 0x12c PushV
	var_285_bool = 0; // 0x12d MovB
	var_286_bool = 0; var_287_object = Obj(); // 0x12e PushV
	var_287_object = var_1_object; // 0x12f MovT
	func_5379(var_287_object); // 0x130 NEW_2
	if(var_286_bool == 0) goto Label_314; // 0x132 JumpB
	var_288_bool = 0; var_289_object = Obj(); // 0x133 PushV
	var_289_object = var_1_object; // 0x134 MovT
	func_5403(var_288_bool, var_289_object); // 0x135 NEW_2
	var_290_bool = var_288_bool == 0; // 0x137 Not
	if(var_290_bool == 0) goto Label_314; // 0x138 JumpB
	var_285_bool = 1; // 0x139 MovB
	
Label_314:
	if(var_285_bool == 0) goto Label_320; // 0x13a JumpB
	var_291_int = 536642; // 0x13b PushI
	var_292_int = -1; // 0x13c PushI
	var_293_int = 38470; // 0x13d PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x13e TObjFunc
	
Label_320:
	var_294_bool = 0; // 0x140 PushV
	var_294_bool = 0; // 0x141 MovB
	var_295_bool = 0; var_296_object = Obj(); // 0x142 PushV
	var_296_object = var_1_object; // 0x143 MovT
	func_5413(var_295_bool, var_296_object); // 0x144 NEW_2
	if(var_295_bool == 0) goto Label_333; // 0x146 JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x147 PushV
	var_298_object = var_1_object; // 0x148 MovT
	func_5367(var_298_object); // 0x149 NEW_2
	if(var_297_bool == 0) goto Label_333; // 0x14b JumpB
	var_294_bool = 1; // 0x14c MovB
	
Label_333:
	if(var_294_bool == 0) goto Label_339; // 0x14d JumpB
	var_299_int = 536645; // 0x14e PushI
	var_300_int = 38474; // 0x14f PushI
	var_301_int = 38473; // 0x150 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x151 TObjFunc
	
Label_339:
	var_302_bool = 0; var_303_object = Obj(); // 0x153 PushV
	var_303_object = var_1_object; // 0x154 MovT
	func_5423(var_302_bool, var_303_object); // 0x155 NEW_2
	if(var_302_bool == 0) goto Label_349; // 0x157 JumpB
	var_304_int = 536663; // 0x158 PushI
	var_305_int = 38493; // 0x159 PushI
	var_306_int = 38492; // 0x15a PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x15b TObjFunc
	
Label_349:
	var_307_bool = 0; var_308_object = Obj(); // 0x15d PushV
	var_308_object = var_1_object; // 0x15e MovT
	func_5433(var_307_bool, var_308_object); // 0x15f NEW_2
	if(var_307_bool == 0) goto Label_359; // 0x161 JumpB
	var_309_int = 536685; // 0x162 PushI
	var_310_int = 38517; // 0x163 PushI
	var_311_int = 38516; // 0x164 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x165 TObjFunc
	
Label_359:
	var_312_bool = 0; // 0x167 PushV
	var_312_bool = 0; // 0x168 MovB
	var_313_bool = 0; var_314_object = Obj(); // 0x169 PushV
	var_314_object = var_1_object; // 0x16a MovT
	func_5443(var_313_bool, var_314_object); // 0x16b NEW_2
	if(var_313_bool == 0) goto Label_372; // 0x16d JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x16e PushV
	var_316_object = var_1_object; // 0x16f MovT
	func_5367(var_316_object); // 0x170 NEW_2
	if(var_315_bool == 0) goto Label_372; // 0x172 JumpB
	var_312_bool = 1; // 0x173 MovB
	
Label_372:
	if(var_312_bool == 0) goto Label_378; // 0x174 JumpB
	var_317_int = 536710; // 0x175 PushI
	var_318_int = 38542; // 0x176 PushI
	var_319_int = 38541; // 0x177 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x178 TObjFunc
	
Label_378:
	var_320_bool = 0; var_321_object = Obj(); // 0x17a PushV
	var_321_object = var_1_object; // 0x17b MovT
	func_5453(var_320_bool, var_321_object); // 0x17c NEW_2
	if(var_320_bool == 0) goto Label_388; // 0x17e JumpB
	var_322_int = 536747; // 0x17f PushI
	var_323_int = 38579; // 0x180 PushI
	var_324_int = 38578; // 0x181 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x182 TObjFunc
	
Label_388:
	var_325_bool = 0; // 0x184 PushV
	var_325_bool = 0; // 0x185 MovB
	var_326_bool = 0; var_327_object = Obj(); // 0x186 PushV
	var_327_object = var_1_object; // 0x187 MovT
	func_5463(var_326_bool, var_327_object); // 0x188 NEW_2
	if(var_326_bool == 0) goto Label_401; // 0x18a JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x18b PushV
	var_329_object = var_1_object; // 0x18c MovT
	func_5367(var_329_object); // 0x18d NEW_2
	if(var_328_bool == 0) goto Label_401; // 0x18f JumpB
	var_325_bool = 1; // 0x190 MovB
	
Label_401:
	if(var_325_bool == 0) goto Label_407; // 0x191 JumpB
	var_330_int = 536769; // 0x192 PushI
	var_331_int = 38602; // 0x193 PushI
	var_332_int = 38601; // 0x194 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x195 TObjFunc
	
Label_407:
	var_333_bool = 0; var_334_object = Obj(); // 0x197 PushV
	var_334_object = var_1_object; // 0x198 MovT
	func_5473(var_333_bool, var_334_object); // 0x199 NEW_2
	if(var_333_bool == 0) goto Label_417; // 0x19b JumpB
	var_335_int = 536782; // 0x19c PushI
	var_336_int = 38617; // 0x19d PushI
	var_337_int = 38616; // 0x19e PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x19f TObjFunc
	
Label_417:
	var_338_bool = 0; // 0x1a1 PushV
	var_338_bool = 0; // 0x1a2 MovB
	var_339_bool = 0; var_340_object = Obj(); // 0x1a3 PushV
	var_340_object = var_1_object; // 0x1a4 MovT
	func_5483(var_339_bool, var_340_object); // 0x1a5 NEW_2
	if(var_339_bool == 0) goto Label_430; // 0x1a7 JumpB
	var_345_bool = 0; var_346_object = Obj(); // 0x1a8 PushV
	var_346_object = var_1_object; // 0x1a9 MovT
	func_5367(var_346_object); // 0x1aa NEW_2
	if(var_345_bool == 0) goto Label_430; // 0x1ac JumpB
	var_338_bool = 1; // 0x1ad MovB
	
Label_430:
	if(var_338_bool == 0) goto Label_436; // 0x1ae JumpB
	var_347_int = 536792; // 0x1af PushI
	var_348_int = 38627; // 0x1b0 PushI
	var_349_int = 38626; // 0x1b1 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x1b2 TObjFunc
	
Label_436:
	var_350_bool = 0; var_351_object = Obj(); // 0x1b4 PushV
	var_351_object = var_1_object; // 0x1b5 MovT
	func_5493(var_350_bool, var_351_object); // 0x1b6 NEW_2
	if(var_350_bool == 0) goto Label_446; // 0x1b8 JumpB
	var_356_int = 536814; // 0x1b9 PushI
	var_357_int = 38651; // 0x1ba PushI
	var_358_int = 38650; // 0x1bb PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x1bc TObjFunc
	
Label_446:
	var_359_bool = 0; // 0x1be PushV
	var_359_bool = 0; // 0x1bf MovB
	var_360_bool = 0; var_361_object = Obj(); // 0x1c0 PushV
	var_361_object = var_1_object; // 0x1c1 MovT
	func_5503(var_360_bool, var_361_object); // 0x1c2 NEW_2
	if(var_360_bool == 0) goto Label_459; // 0x1c4 JumpB
	var_366_bool = 0; var_367_object = Obj(); // 0x1c5 PushV
	var_367_object = var_1_object; // 0x1c6 MovT
	func_5367(var_367_object); // 0x1c7 NEW_2
	if(var_366_bool == 0) goto Label_459; // 0x1c9 JumpB
	var_359_bool = 1; // 0x1ca MovB
	
Label_459:
	if(var_359_bool == 0) goto Label_465; // 0x1cb JumpB
	var_368_int = 536833; // 0x1cc PushI
	var_369_int = 38670; // 0x1cd PushI
	var_370_int = 38669; // 0x1ce PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x1cf TObjFunc
	
Label_465:
	var_371_bool = 0; var_372_object = Obj(); // 0x1d1 PushV
	var_372_object = var_1_object; // 0x1d2 MovT
	func_5513(var_371_bool, var_372_object); // 0x1d3 NEW_2
	if(var_371_bool == 0) goto Label_475; // 0x1d5 JumpB
	var_377_int = 536843; // 0x1d6 PushI
	var_378_int = 38680; // 0x1d7 PushI
	var_379_int = 38679; // 0x1d8 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x1d9 TObjFunc
	
Label_475:
	var_380_bool = 0; var_381_object = Obj(); // 0x1db PushV
	var_381_object = var_1_object; // 0x1dc MovT
	func_5367(var_381_object); // 0x1dd NEW_2
	if(var_380_bool == 0) goto Label_485; // 0x1df JumpB
	var_382_int = 536850; // 0x1e0 PushI
	var_383_int = -1; // 0x1e1 PushI
	var_384_int = 38686; // 0x1e2 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x1e3 TObjFunc
	
Label_485:
	var_385_bool = 0; var_386_object = Obj(); // 0x1e5 PushV
	var_386_object = var_1_object; // 0x1e6 MovT
	func_5379(var_386_object); // 0x1e7 NEW_2
	if(var_385_bool == 0) goto Label_495; // 0x1e9 JumpB
	var_387_int = 536851; // 0x1ea PushI
	var_388_int = -1; // 0x1eb PushI
	var_389_int = 38687; // 0x1ec PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x1ed TObjFunc
	
Label_495:
	goto Label_498; // 0x1ef Jump
}


func_5236(var_107_object)
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x1474 PushV
	self(var_109_object); // 0x1475 Func
	var_107_object = var_109_object; // 0x1477 Mov
	return 2; // 0x1478 Return
}


func_3189(var_67_bool)
{
	var_67_bool = 0; // 0xc75 MovB
	return 0; // 0xc76 Return
}


func_3191(var_61_object, var_62_cvector)
{
	var_63_object = Obj(); var_64_object = Obj(); // 0xc77 PushV
	FindShiftedPathTo(var_64_object, var_62_cvector); // 0xc78 Func
	var_61_object = var_64_object; // 0xc7a Mov
	return 2; // 0xc7b Return
}


func_5242(var_51_cvector, var_52_cvector)
{
	var_59_float = 0; var_60_float = 0; // 0x147a PushV
	var_61_int = var_52_cvector | var_52_cvector; // 0x147b Or
	var_60_float = sqrt(var_61_int); // 0x147c Sqrt2
	var_62_float = 0.0; // 0x147d PushF
	var_63_bool = var_60_float < var_62_float; // 0x147e LT
	if(var_63_bool == 0) goto Label_5250; // 0x147f JumpB
	var_51_cvector = CVector(0.0, 0.0, 0.0); // 0x1480 MovV
	return 2; // 0x1481 Return
	
Label_5250:
	var_51_cvector = var_52_cvector / var_52_cvector; // 0x1482 Div2
	return 2; // 0x1483 Return
}


func_5755()
{
	var_21_bool = 0; var_22_bool = 0; // 0x167b PushV
	var_23_int = 0; // 0x167c PushI
	ClearSubContainer(var_23_int); // 0x167d Func
	var_24_string = ""; var_25_int = 0; var_26_int = 0; // 0x167f PushV
	var_24_string = "tourniquet"; // 0x1680 MovS
	var_25_int = 1; // 0x1681 MovI
	var_26_int = 4; // 0x1682 MovI
	func_5184(var_24_string, var_25_int, var_26_int); // 0x1683 NEW_2
	var_35_string = ""; var_36_int = 0; var_37_int = 0; // 0x1685 PushV
	var_35_string = "bandage"; // 0x1686 MovS
	var_36_int = 1; // 0x1687 MovI
	var_37_int = 2; // 0x1688 MovI
	func_5184(var_35_string, var_36_int, var_37_int); // 0x1689 NEW_2
	return 2; // 0x168b Return
}


func_5252(var_550_float, var_551_float, var_552_float)
{
	var_555_bool = var_551_float < var_552_float; // 0x1485 LT
	if(var_555_bool == 0) goto Label_5257; // 0x1486 JumpB
	var_550_float = var_551_float; // 0x1487 Mov
	goto Label_5258; // 0x1488 Jump
	
Label_5258:
	return 0; // 0x148a Return
	
Label_5257:
	var_550_float = var_552_float; // 0x1489 Mov
}


func_6280(var_64_bool)
{
	var_64_bool = 0; // 0x1888 MovB
	return 0; // 0x1889 Return
}


func_5624(var_163_int)
{
	var_164_int = 0; var_165_int = 0; // 0x15f8 PushV
	var_166_string = "branch"; // 0x15f9 PushS
	GetVariable(var_166_string, var_165_int); // 0x15fa Func
	var_163_int = var_165_int; // 0x15fc Mov
	return 2; // 0x15fd Return
}


func_3722(var_183_object)
{
	var_190_object = Obj(); var_191_bool = 0; var_192_float = 0; // 0xe8b PushV
	var_190_object = var_183_object; // 0xe8c Mov
	var_191_bool = 1; // 0xe8d MovB
	var_192_float = 180.0; // 0xe8e MovF
	func_3736(var_186_int, var_187_bool, var_188_float, var_189_int, var_183_object, var_190_object, var_191_bool, var_192_float); // 0xe8f NEW_2
	return 0; // 0xe91 Return
}


func_5259(var_560_float, var_561_float, var_562_float, var_563_float)
{
	var_564_bool = var_561_float < var_562_float; // 0x148c LT
	if(var_564_bool == 0) goto Label_5264; // 0x148d JumpB
	var_560_float = var_562_float; // 0x148e Mov
	return 0; // 0x148f Return
	
Label_5264:
	var_565_bool = var_561_float > var_563_float; // 0x1490 GT
	if(var_565_bool == 0) goto Label_5268; // 0x1491 JumpB
	var_560_float = var_563_float; // 0x1492 Mov
	return 0; // 0x1493 Return
	
Label_5268:
	var_560_float = var_561_float; // 0x1494 Mov
	return 0; // 0x1495 Return
}


func_5772(var_136_int, var_137_string)
{
	var_138_int = 0; var_139_int = 0; // 0x168c PushV
	GetInvItemByName(var_139_int, var_137_string); // 0x168d Func
	var_136_int = var_139_int; // 0x168f Mov
	return 2; // 0x1690 Return
}


func_6285(var_24_bool, var_25_object, var_26_object, var_27_bool)
{
	var_28_bool = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_float = 0; var_32_bool = 0; // 0x188e PushV
	var_29_object = var_25_object; // 0x188f Mov
	var_30_object = var_26_object; // 0x1890 Mov
	var_31_float = 700.0; // 0x1891 MovF
	var_32_bool = var_27_bool; // 0x1892 Mov
	func_6097(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool); // 0x1893 NEW_2
	var_24_bool = var_28_bool; // 0x1894 Mov
	return 0; // 0x1896 Return
}


func_6282(var_171_bool)
{
	var_171_bool = 1; // 0x188b MovB
	return 0; // 0x188c Return
}


func_2705(var_22_object)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = ""; var_38_object = Obj(); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); // 0xa91 PushV
	var_43_bool = var_22_object == 0; // 0xa92 NullEq
	if(var_43_bool == 0) goto Label_2713; // 0xa93 JumpB
	var_44_string = ""; // 0xa94 PushV
	var_44_string = "fdie"; // 0xa95 MovS
	func_2796(var_44_string); // 0xa96 NEW_2
	goto Label_2795; // 0xa98 Jump
	
Label_2795:
	return 20; // 0xaeb Return
	
Label_2713:
	GetPosition(var_33_cvector); // 0xa99 ObjFunc
	GetPosition(var_34_cvector); // 0xa9b Func
	GetDirection(var_35_cvector); // 0xa9d Func
	var_36_cvector = var_34_cvector - var_33_cvector; // 0xa9f Sub2
	var_76_float = GetByIndex(var_36_cvector, 0); // 0xaa0 PushE
	var_77_float = GetByIndex(var_35_cvector, 0); // 0xaa1 PushE
	var_78_float = var_76_float * var_77_float; // 0xaa2 Mult
	var_79_float = GetByIndex(var_36_cvector, 2); // 0xaa3 PushE
	var_80_float = GetByIndex(var_35_cvector, 2); // 0xaa4 PushE
	var_81_float = var_79_float * var_80_float; // 0xaa5 Mult
	var_82_int = var_78_float + var_81_float; // 0xaa6 Add
	var_83_int = 0; // 0xaa7 PushI
	var_84_bool = var_82_int >= var_83_int; // 0xaa8 GE
	if(var_84_bool == 0) goto Label_2732; // 0xaa9 JumpB
	var_37_string = "fdie"; // 0xaaa MovS
	goto Label_2733; // 0xaab Jump
	
Label_2733:
	RemoveRTEnvelope(); // 0xaad Func
	SetDeathState(); // 0xaaf Func
	Stop(); // 0xab1 Func
	StopAsync(); // 0xab3 Func
	var_38_object = var_22_object; // 0xab5 Mov
	var_85_string = "GetScriptProperty"; // 0xab6 PushS
	var_86_int = 2; // 0xab7 PushI
	var_87_bool = IsFuncExist(var_22_object, var_85_string, var_86_int); // 0xab8 FuncExist
	if(var_87_bool == 0) goto Label_2757; // 0xab9 JumpB
	var_88_string = "Owner"; // 0xaba PushS
	HasScriptProperty(var_39_bool, var_88_string); // 0xabb ObjFunc
	var_89_bool = var_39_bool; // 0xabd Push
	if(var_89_bool == 0) goto Label_2757; // 0xabe JumpB
	var_90_string = "Owner"; // 0xabf PushS
	GetScriptProperty(var_38_object, var_90_string); // 0xac0 ObjFunc
	var_91_bool = var_38_object == 0; // 0xac2 NullEq
	if(var_91_bool == 0) goto Label_2757; // 0xac3 JumpB
	var_38_object = var_22_object; // 0xac4 Mov
	
Label_2757:
	var_92_string = "@GetEyesHeight"; // 0xac5 PushS
	var_93_int = 1; // 0xac6 PushI
	var_94_bool = IsFuncExist(var_38_object, var_92_string, var_93_int); // 0xac7 FuncExist
	if(var_94_bool == 0) goto Label_2772; // 0xac8 JumpB
	GetEyesHeight(var_41_float); // 0xac9 ObjFunc
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0xacb MovV
	var_95_float = GetByIndex(var_42_cvector, 1); // 0xacc PushE
	var_95_float = var_41_float; // 0xacd Mov
	SetByIndex(var_42_cvector, 1) = var_95_float; // 0xace PopE
	var_96_string = "head"; // 0xacf PushS
	LookAsync(var_22_object, var_96_string, var_42_cvector); // 0xad0 Func
	var_40_bool = 1; // 0xad2 MovB
	goto Label_2773; // 0xad3 Jump
	
Label_2773:
	var_97_string = ""; // 0xad5 PushV
	var_97_string = var_37_string; // 0xad6 Mov
	func_5195(var_97_string); // 0xad7 NEW_2
	var_98_string = "all"; // 0xad9 PushS
	PlayAnimation(var_98_string, var_37_string); // 0xada Func
	WaitForAnimEnd(); // 0xadc Func
	var_99_bool = var_40_bool; // 0xade Push
	if(var_99_bool == 0) goto Label_2789; // 0xadf JumpB
	StopAsync(); // 0xae0 Func
	var_100_string = "head"; // 0xae2 PushS
	UnlookAsync(var_100_string); // 0xae3 Func
	
Label_2789:
	var_101_string = "all"; // 0xae5 PushS
	LockAnimationEnd(var_101_string, var_37_string); // 0xae6 Func
	RemoveEnvelope(); // 0xae8 Func
	var_38_object = 0; // 0xaea SetNull
	
Label_2772:
	var_40_bool = 0; // 0xad4 MovB
	
Label_2732:
	var_37_string = "bdie"; // 0xaac MovS
}


func_3730(var_509_float)
{
	var_509_float = 0.05; // 0xe93 MovF
	return 0; // 0xe94 Return
}


func_5777(var_20_object)
{
	var_21_object = Obj(); // 0x1692 PushV
	var_21_object = var_20_object; // 0x1693 Mov
	TaskCall(3); // 0x1694 TaskCall
	func_2672(var_21_object); // 0x1695 NEW_2
	TaskReturn(); // 0x1696 TaskReturn
	return 0; // 0x1698 Return
}


func_3733(var_516_int)
{
	var_516_int = 0; // 0xe96 MovI
	return 0; // 0xe97 Return
}


func_4246(var_0_bool, var_419_bool)
{
	var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_cvector = CVector(0,0,0); var_423_float = 0; var_424_float = 0; var_425_cvector = CVector(0,0,0); var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0); var_428_float = 0; var_429_float = 0; // 0x1096 PushV
	var_430_bool = 0; var_431_object = Obj(); // 0x1097 PushV
	var_431_object = var_0_bool; // 0x1098 MovT
	func_4821(var_430_bool, var_431_object); // 0x1099 NEW_2
	var_432_bool = var_430_bool == 0; // 0x109b Not
	if(var_432_bool == 0) goto Label_4255; // 0x109c JumpB
	var_419_bool = 0; // 0x109d MovB
	return 10; // 0x109e Return
	
Label_4255:
	var_433_bool = 0; // 0x109f PushV
	func_4335(var_429_float, var_433_bool); // 0x10a0 NEW_2
	if(var_433_bool == 0) goto Label_4272; // 0x10a2 JumpB
	GetPFPosition(var_425_cvector); // 0x10a3 TObjFunc
	GetPFPosition(var_426_cvector); // 0x10a5 Func
	var_427_cvector = var_425_cvector - var_426_cvector; // 0x10a7 Sub2
	var_428_float = var_427_cvector | var_427_cvector; // 0x10a8 Or2
	GetAttackDistance(var_429_float); // 0x10a9 TObjFunc
	var_434_int = 50; // 0x10ab PushI
	var_429_float = var_429_float + var_434_int; // 0x10ac Add2
	var_435_float = var_429_float * var_429_float; // 0x10ad Mult
	var_419_bool = var_428_float <= var_435_float; // 0x10ae LE2
	return 10; // 0x10af Return
	
Label_4272:
	var_419_bool = 0; // 0x10b0 MovB
	return 10; // 0x10b1 Return
}


func_6295(var_102_object)
{
	var_103_bool = 0; var_104_object = Obj(); // 0x1898 PushV
	var_104_object = var_102_object; // 0x1899 Mov
	func_4690(var_103_bool, var_104_object); // 0x189a NEW_2
	if(var_103_bool == 0) goto Label_6311; // 0x189c JumpB
	var_107_object = Obj(); // 0x189d PushV
	func_5236(var_107_object); // 0x189e NEW_2
	var_110_float = -0.03; // 0x18a0 PushF
	var_111_bool = 1; // 0x18a1 PushB
	ReportReputationChange(var_102_object, var_107_object, var_110_float, var_111_bool); // 0x18a2 Func
	func_5715(); // 0x18a5 NEW_2
	
Label_6311:
	func_5691(); // 0x18a8 NEW_2
	var_183_bool = GlobalVars[0]; // 0x18aa PushGE
	var_183_bool = 1; // 0x18ab MovB
	GlobalVars[0] = var_183_bool; // 0x18ac PopGE
	var_184_int = 50; // 0x18ad PushI
	var_185_int = 40; // 0x18ae PushI
	SetRTEnvelope(var_184_int, var_185_int); // 0x18af Func
	return 0; // 0x18b1 Return
}


func_3736(var_0_bool, var_3_object, var_5_bool, var_190_object, var_191_bool, var_192_float, var_267_bool, var_353_bool)
{
	var_193_float = 0; var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_bool = 0; var_197_bool = 0; var_198_float = 0; var_199_cvector = CVector(0,0,0); var_200_float = 0; var_201_cvector = CVector(0,0,0); var_202_bool = 0; var_203_float = 0; var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_bool = 0; var_208_bool = 0; var_209_float = 0; var_210_cvector = CVector(0,0,0); var_211_float = 0; var_212_cvector = CVector(0,0,0); var_213_bool = 0; var_214_float = 0; // 0xe98 PushV
	func_3965(var_212_cvector, var_213_bool, var_214_float); // 0xe9a NEW_2
	var_5_bool = 0; // 0xe9c TMovI
	var_237_string = "@GetAttackDistance"; // 0xe9d PushS
	var_238_int = 1; // 0xe9e PushI
	var_239_bool = IsFuncExist(var_190_object, var_237_string, var_238_int); // 0xe9f FuncExist
	if(var_239_bool == 0) goto Label_3750; // 0xea0 JumpB
	GetAttackDistance(var_204_float); // 0xea1 ObjFunc
	var_240_int = 50; // 0xea3 PushI
	var_204_float = var_204_float + var_240_int; // 0xea4 Add2
	goto Label_3751; // 0xea5 Jump
	
Label_3751:
	var_241_int = 150; // 0xea7 PushI
	var_242_bool = var_204_float >= var_241_int; // 0xea8 GE
	if(var_242_bool == 0) goto Label_3755; // 0xea9 JumpB
	var_204_float = 150; // 0xeaa MovI
	
Label_3755:
	var_3_object = 0; // 0xeab TMovB
	var_0_bool = var_190_object; // 0xeac TMov
	IsPlayerActor(var_0_bool, var_207_bool); // 0xead Func
	var_243_bool = var_207_bool; // 0xeaf Push
	if(var_243_bool == 0) goto Label_3769; // 0xeb0 JumpB
	var_244_string = "attack"; // 0xeb1 PushS
	PlayGlobalMusic(var_244_string); // 0xeb2 Func
	var_245_object = Obj(); // 0xeb4 PushV
	func_5236(var_245_object); // 0xeb5 NEW_2
	SendPlayerEnemy(var_190_object, var_245_object); // 0xeb7 Func
	
Label_3769:
	var_248_bool = var_191_bool; // 0xeb9 Push
	if(var_248_bool == 0) goto Label_3773; // 0xeba JumpB
	var_208_bool = 0; // 0xebb MovB
	goto Label_3774; // 0xebc Jump
	
Label_3774:
	var_249_float = 400.0; // 0xebe PushF
	var_209_float = var_249_float + var_204_float; // 0xebf Add2
	
Label_3776:
	var_250_bool = 0; // 0xec0 PushV
	var_250_bool = 0; // 0xec1 MovB
	var_251_bool = 0; var_252_object = Obj(); // 0xec2 PushV
	var_252_object = var_0_bool; // 0xec3 MovT
	func_4821(var_251_bool, var_252_object); // 0xec4 NEW_2
	if(var_251_bool == 0) goto Label_3786; // 0xec6 JumpB
	var_253_bool = var_3_object == 0; // 0xec7 Not
	if(var_253_bool == 0) goto Label_3786; // 0xec8 JumpB
	var_250_bool = 1; // 0xec9 MovB
	
Label_3786:
	if(var_250_bool == 0) goto Label_3948; // 0xeca JumpB
	func_4378(var_214_float); // 0xecc NEW_2
	GetPFPosition(var_205_cvector); // 0xece TObjFunc
	GetPFPosition(var_206_cvector); // 0xed0 Func
	var_210_cvector = var_205_cvector - var_206_cvector; // 0xed2 Sub2
	var_211_float = var_210_cvector | var_210_cvector; // 0xed3 Or2
	var_259_float = var_209_float * var_209_float; // 0xed4 Mult
	var_260_bool = var_211_float >= var_259_float; // 0xed5 GE
	if(var_260_bool == 0) goto Label_3814; // 0xed6 JumpB
	var_261_bool = 0; var_262_object = Obj(); var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_bool = 0; // 0xed7 PushV
	var_262_object = var_0_bool; // 0xed8 MovT
	var_263_float = var_204_float; // 0xed9 Mov
	var_264_float = 3000.0; // 0xeda MovF
	var_265_bool = 1; // 0xedb MovB
	var_266_bool = 0; // 0xedc MovB
	TaskCall(8); // 0xedd TaskCall
	func_4405(var_269_bool, var_261_bool, var_262_object, var_263_float, var_264_float, var_265_bool, var_266_bool); // 0xede NEW_2
	TaskReturn(); // 0xedf TaskReturn
	var_338_bool = var_267_bool == 0; // 0xee1 Not
	if(var_338_bool == 0) goto Label_3812; // 0xee2 JumpB
	goto Label_3948; // 0xee3 Jump
	
Label_3948:
	WaitForAnimEnd(); // 0xf6c Func
	var_339_object = var_3_object; // 0xf6e PushT
	if(var_339_object == 0) goto Label_3953; // 0xf6f JumpB
	return 22; // 0xf70 Return
	
Label_3953:
	var_340_string = "all"; // 0xf71 PushS
	var_341_string = "attack_off"; // 0xf72 PushS
	PlayAnimation(var_340_string, var_341_string); // 0xf73 Func
	WaitForAnimEnd(); // 0xf75 Func
	var_342_bool = var_207_bool; // 0xf77 Push
	if(var_342_bool == 0) goto Label_3964; // 0xf78 JumpB
	var_343_float = 2.0; // 0xf79 PushF
	Sleep(var_343_float); // 0xf7a Func
	
Label_3964:
	return 22; // 0xf7c Return
	
Label_3812:
	var_208_bool = 0; // 0xee4 MovB
	goto Label_3947; // 0xee5 Jump
	
Label_3947:
	goto Label_3776; // 0xf6b Jump
	
Label_3814:
	var_344_float = var_192_float * var_192_float; // 0xee6 Mult
	var_345_bool = var_211_float >= var_344_float; // 0xee7 GE
	if(var_345_bool == 0) goto Label_3939; // 0xee8 JumpB
	GetPFPosition(var_212_cvector); // 0xee9 TObjFunc
	CanReachByPF(var_213_bool, var_212_cvector); // 0xeeb Func
	var_346_bool = var_213_bool == 0; // 0xeed Not
	if(var_346_bool == 0) goto Label_3838; // 0xeee JumpB
	var_347_bool = 0; var_348_object = Obj(); var_349_float = 0; var_350_float = 0; var_351_bool = 0; var_352_bool = 0; // 0xeef PushV
	var_348_object = var_0_bool; // 0xef0 MovT
	var_349_float = var_204_float; // 0xef1 Mov
	var_350_float = 3000.0; // 0xef2 MovF
	var_351_bool = 1; // 0xef3 MovB
	var_352_bool = 0; // 0xef4 MovB
	TaskCall(8); // 0xef5 TaskCall
	func_4405(var_355_bool, var_347_bool, var_348_object, var_349_float, var_350_float, var_351_bool, var_352_bool); // 0xef6 NEW_2
	TaskReturn(); // 0xef7 TaskReturn
	var_356_bool = var_353_bool == 0; // 0xef9 Not
	if(var_356_bool == 0) goto Label_3836; // 0xefa JumpB
	goto Label_3948; // 0xefb Jump
	
Label_3836:
	var_208_bool = 0; // 0xefc MovB
	goto Label_3776; // 0xefd Jump
	
Label_3838:
	var_357_bool = var_208_bool == 0; // 0xefe Not
	if(var_357_bool == 0) goto Label_3863; // 0xeff JumpB
	var_358_object = Obj(); // 0xf00 PushV
	var_358_object = var_0_bool; // 0xf01 MovT
	func_4971(); // 0xf02 NEW_2
	var_359_string = "all"; // 0xf04 PushS
	var_360_string = "attack_on"; // 0xf05 PushS
	PlayAnimation(var_359_string, var_360_string); // 0xf06 Func
	WaitForAnimEnd(); // 0xf08 Func
	func_4378(var_214_float); // 0xf0b NEW_2
	StopAsync(); // 0xf0d Func
	var_208_bool = 1; // 0xf0f MovB
	var_361_bool = 0; var_362_object = Obj(); // 0xf10 PushV
	var_362_object = var_0_bool; // 0xf11 MovT
	func_4821(var_361_bool, var_362_object); // 0xf12 NEW_2
	var_363_bool = var_361_bool == 0; // 0xf14 Not
	if(var_363_bool == 0) goto Label_3863; // 0xf15 JumpB
	goto Label_3948; // 0xf16 Jump
	
Label_3863:
	rand(var_214_float); // 0xf17 Func
	var_364_bool = 0; // 0xf19 PushV
	var_364_bool = 1; // 0xf1a MovB
	var_365_float = 0.25; // 0xf1b PushF
	var_366_bool = var_214_float < var_365_float; // 0xf1c LT
	if(var_366_bool == 0) goto Label_3875; // 0xf1d JumpB
	var_367_bool = 0; // 0xf1e PushV
	func_4335(var_364_bool, var_367_bool); // 0xf1f NEW_2
	if(var_367_bool == 0) goto Label_3875; // 0xf21 JumpB
	var_364_bool = 0; // 0xf22 MovB
	
Label_3875:
	if(var_364_bool == 0) goto Label_3892; // 0xf23 JumpB
	Face(var_0_bool); // 0xf24 Func
	func_4385(); // 0xf27 NEW_2
	var_402_string = "all"; // 0xf29 PushS
	var_403_string = "attack_stay"; // 0xf2a PushS
	PlayAnimation(var_402_string, var_403_string); // 0xf2b Func
	var_404_bool = 0; var_405_float = 0; // 0xf2d PushV
	var_405_float = var_192_float; // 0xf2e Mov
	func_4203(var_214_float, var_404_bool, var_405_float); // 0xf2f NEW_2
	StopAsync(); // 0xf31 Func
	goto Label_3938; // 0xf33 Jump
	
Label_3938:
	goto Label_3947; // 0xf62 Jump
	
Label_3892:
	Face(var_0_bool); // 0xf34 Func
	var_619_string = "all"; // 0xf36 PushS
	var_620_string = "fjump"; // 0xf37 PushS
	PlayAnimation(var_619_string, var_620_string); // 0xf38 Func
	WaitForAnimEnd(); // 0xf3a Func
	func_4378(var_214_float); // 0xf3d NEW_2
	var_621_cvector = CVector(0.0, 0.0, 0.0); // 0xf3f PushVec
	SetSpeed(var_621_cvector); // 0xf40 Func
	Stop(); // 0xf42 Func
	StopAsync(); // 0xf44 Func
	var_622_bool = 0; // 0xf46 PushV
	func_4335(var_214_float, var_622_bool); // 0xf47 NEW_2
	var_623_bool = var_622_bool == 0; // 0xf49 Not
	if(var_623_bool == 0) goto Label_3938; // 0xf4a JumpB
	var_624_bool = 0; var_625_object = Obj(); // 0xf4b PushV
	var_625_object = var_0_bool; // 0xf4c MovT
	func_4821(var_624_bool, var_625_object); // 0xf4d NEW_2
	var_626_bool = var_624_bool == 0; // 0xf4f Not
	if(var_626_bool == 0) goto Label_3922; // 0xf50 JumpB
	goto Label_3948; // 0xf51 Jump
	
Label_3922:
	GetPFPosition(var_205_cvector); // 0xf52 TObjFunc
	GetPFPosition(var_206_cvector); // 0xf54 Func
	var_210_cvector = var_205_cvector - var_206_cvector; // 0xf56 Sub2
	var_211_float = var_210_cvector | var_210_cvector; // 0xf57 Or2
	var_627_float = var_192_float * var_192_float; // 0xf58 Mult
	var_628_bool = var_211_float < var_627_float; // 0xf59 LT
	if(var_628_bool == 0) goto Label_3938; // 0xf5a JumpB
	var_629_bool = 0; var_630_float = 0; // 0xf5b PushV
	var_630_float = var_192_float; // 0xf5c Mov
	func_4039(var_214_float, var_629_bool, var_630_float); // 0xf5d NEW_2
	var_631_bool = var_629_bool == 0; // 0xf5f Not
	if(var_631_bool == 0) goto Label_3938; // 0xf60 JumpB
	goto Label_3948; // 0xf61 Jump
	
Label_3939:
	var_632_bool = 0; var_633_float = 0; // 0xf63 PushV
	var_633_float = var_192_float; // 0xf64 Mov
	func_4039(var_214_float, var_632_bool, var_633_float); // 0xf65 NEW_2
	var_634_bool = var_632_bool == 0; // 0xf67 Not
	if(var_634_bool == 0) goto Label_3946; // 0xf68 JumpB
	goto Label_3948; // 0xf69 Jump
	
Label_3946:
	var_208_bool = 1; // 0xf6a MovB
	
Label_3773:
	var_208_bool = 1; // 0xebd MovB
	
Label_3750:
	var_204_float = var_192_float; // 0xea6 Mov
}


func_5270(var_29_bool, var_30_int, var_31_int)
{
	var_32_int = 0; var_33_int = 0; // 0x1496 PushV
	irand(var_33_int, var_31_int); // 0x1497 Func
	var_29_bool = var_33_int < var_30_int; // 0x1499 LT2
	return 2; // 0x149a Return
}


func_5275(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_float = GetByIndex(var_73_cvector, 0); // 0x149c PushE
	var_76_float = GetByIndex(var_74_cvector, 0); // 0x149d PushE
	var_77_float = var_75_float * var_76_float; // 0x149e Mult
	var_78_float = GetByIndex(var_73_cvector, 2); // 0x149f PushE
	var_79_float = GetByIndex(var_74_cvector, 2); // 0x14a0 PushE
	var_80_float = var_78_float * var_79_float; // 0x14a1 Mult
	var_72_float = var_77_float + var_80_float; // 0x14a2 Add2
	return 0; // 0x14a3 Return
}


func_5284(var_81_float, var_82_cvector)
{
	var_83_float = GetByIndex(var_82_cvector, 0); // 0x14a5 PushE
	var_84_float = GetByIndex(var_82_cvector, 0); // 0x14a6 PushE
	var_85_float = var_83_float * var_84_float; // 0x14a7 Mult
	var_86_float = GetByIndex(var_82_cvector, 2); // 0x14a8 PushE
	var_87_float = GetByIndex(var_82_cvector, 2); // 0x14a9 PushE
	var_88_float = var_86_float * var_87_float; // 0x14aa Mult
	var_89_int = var_85_float + var_88_float; // 0x14ab Add
	var_81_float = sqrt(var_89_int); // 0x14ac Sqrt2
	return 0; // 0x14ad Return
}


func_4780(var_47_bool)
{
	var_49_bool = 0; var_50_bool = 0; // 0x12ac PushV
	IsDead(var_50_bool); // 0x12ad ObjFunc
	var_47_bool = var_50_bool; // 0x12af Mov
	return 2; // 0x12b0 Return
}


func_5294(var_69_float, var_70_cvector, var_71_cvector)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x14af PushV
	var_73_cvector = var_70_cvector; // 0x14b0 Mov
	var_74_cvector = var_71_cvector; // 0x14b1 Mov
	func_5275(var_72_float, var_73_cvector, var_74_cvector); // 0x14b2 NEW_2
	var_81_float = 0; var_82_cvector = CVector(0,0,0); // 0x14b4 PushV
	var_82_cvector = var_70_cvector; // 0x14b5 Mov
	func_5284(var_81_float, var_82_cvector); // 0x14b6 NEW_2
	var_90_float = 0; var_91_cvector = CVector(0,0,0); // 0x14b8 PushV
	var_91_cvector = var_71_cvector; // 0x14b9 Mov
	func_5284(var_90_float, var_91_cvector); // 0x14ba NEW_2
	var_92_float = var_81_float * var_90_float; // 0x14bc Mult
	var_69_float = var_72_float / var_72_float; // 0x14bd Div2
	return 0; // 0x14be Return
}


func_4785(var_36_bool, var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); // 0x12b1 PushV
	var_42_bool = var_37_object == 0; // 0x12b2 NullEq
	if(var_42_bool == 0) goto Label_4790; // 0x12b3 JumpB
	var_36_bool = 0; // 0x12b4 MovB
	return 4; // 0x12b5 Return
	
Label_4790:
	var_43_bool = 0; // 0x12b6 PushV
	var_43_bool = 0; // 0x12b7 MovB
	var_44_string = "IsDead"; // 0x12b8 PushS
	var_45_int = 1; // 0x12b9 PushI
	var_46_bool = IsFuncExist(var_37_object, var_44_string, var_45_int); // 0x12ba FuncExist
	if(var_46_bool == 0) goto Label_4802; // 0x12bb JumpB
	var_47_bool = 0; var_48_object = Obj(); // 0x12bc PushV
	var_48_object = var_37_object; // 0x12bd Mov
	func_4780(var_48_object); // 0x12be NEW_2
	if(var_47_bool == 0) goto Label_4802; // 0x12c0 JumpB
	var_43_bool = 1; // 0x12c1 MovB
	
Label_4802:
	if(var_43_bool == 0) goto Label_4805; // 0x12c2 JumpB
	var_36_bool = 0; // 0x12c3 MovB
	return 4; // 0x12c4 Return
	
Label_4805:
	GetScene(var_40_object); // 0x12c5 Func
	var_51_bool = var_40_object == 0; // 0x12c7 NullEq
	if(var_51_bool == 0) goto Label_4811; // 0x12c8 JumpB
	var_36_bool = 0; // 0x12c9 MovB
	return 4; // 0x12ca Return
	
Label_4811:
	GetScene(var_41_object); // 0x12cb ObjFunc
	var_52_bool = var_40_object != var_41_object; // 0x12cd Neq
	if(var_52_bool == 0) goto Label_4817; // 0x12ce JumpB
	var_36_bool = 0; // 0x12cf MovB
	return 4; // 0x12d0 Return
	
Label_4817:
	var_36_bool = 1; // 0x12d1 MovB
	return 4; // 0x12d2 Return
}


func_4274(var_417_bool)
{
	var_418_bool = 0; // 0x10b2 PushV
	var_418_bool = 0; // 0x10b3 MovB
	var_419_bool = 0; // 0x10b4 PushV
	func_4246(var_418_bool, var_419_bool); // 0x10b5 NEW_2
	if(var_419_bool == 0) goto Label_4285; // 0x10b7 JumpB
	var_436_bool = 0; // 0x10b8 PushV
	func_4290(var_417_bool, var_418_bool, var_436_bool); // 0x10b9 NEW_2
	if(var_436_bool == 0) goto Label_4285; // 0x10bb JumpB
	var_418_bool = 1; // 0x10bc MovB
	
Label_4285:
	if(var_418_bool == 0) goto Label_4288; // 0x10bd JumpB
	var_417_bool = 1; // 0x10be MovB
	return 0; // 0x10bf Return
	
Label_4288:
	var_417_bool = 0; // 0x10c0 MovB
	return 0; // 0x10c1 Return
}


func_5822(var_23_bool, var_24_object, var_25_string)
{
	var_26_string = "unholster"; // 0x16bf PushS
	var_27_bool = var_25_string == var_26_string; // 0x16c0 Eq
	if(var_27_bool == 0) goto Label_5833; // 0x16c1 JumpB
	var_28_bool = 0; var_29_object = Obj(); // 0x16c2 PushV
	var_29_object = var_24_object; // 0x16c3 Mov
	func_6187(var_29_object); // 0x16c4 NEW_2
	var_23_bool = var_28_bool; // 0x16c5 Mov
	return 0; // 0x16c7 Return
	
Label_5833:
	var_30_string = "player_shot"; // 0x16c9 PushS
	var_31_bool = var_25_string == var_30_string; // 0x16ca Eq
	if(var_31_bool == 0) goto Label_5843; // 0x16cb JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x16cc PushV
	var_33_object = var_24_object; // 0x16cd Mov
	func_6192(var_32_bool, var_33_object); // 0x16ce NEW_2
	var_23_bool = var_32_bool; // 0x16cf Mov
	return 0; // 0x16d1 Return
	
Label_5843:
	var_47_string = "battle"; // 0x16d3 PushS
	var_48_bool = var_25_string == var_47_string; // 0x16d4 Eq
	if(var_48_bool == 0) goto Label_5852; // 0x16d5 JumpB
	var_49_bool = 0; var_50_object = Obj(); // 0x16d6 PushV
	var_50_object = var_24_object; // 0x16d7 Mov
	func_6213(var_50_object); // 0x16d8 NEW_2
	var_23_bool = var_49_bool; // 0x16d9 Mov
	return 0; // 0x16db Return
	
Label_5852:
	var_23_bool = 0; // 0x16dc MovB
	return 0; // 0x16dd Return
}


func_5311(var_125_int, var_126_string)
{
	var_127_int = 0; var_128_int = 0; // 0x14bf PushV
	GetVariable(var_126_string, var_128_int); // 0x14c0 Func
	var_125_int = var_128_int; // 0x14c2 Mov
	return 2; // 0x14c3 Return
}


func_4290(var_0_bool, var_4_string, var_436_bool)
{
	var_437_object = Obj(); var_438_bool = 0; var_439_float = 0; var_440_cvector = CVector(0,0,0); var_441_cvector = CVector(0,0,0); var_442_object = Obj(); var_443_bool = 0; var_444_float = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); // 0x10c2 PushV
	GetScene(var_442_object); // 0x10c3 Func
	var_443_bool = 0; // 0x10c5 MovB
	
Label_4294:
	var_447_cvector = CVector(0,0,0); var_448_object = Obj(); // 0x10c6 PushV
	var_448_object = var_0_bool; // 0x10c7 MovT
	func_4675(var_448_object); // 0x10c8 NEW_2
	var_449_int = -var_447_cvector; // 0x10ca Neg
	FindDirLength(var_444_float, var_449_int, var_444_float); // 0x10cb Func
	var_450_bool = var_444_float < var_4_string; // 0x10cd LT
	if(var_450_bool == 0) goto Label_4304; // 0x10ce JumpB
	goto Label_4332; // 0x10cf Jump
	
Label_4332:
	var_436_bool = var_443_bool; // 0x10ec Mov
	return 10; // 0x10ed Return
	
Label_4304:
	Face(var_0_bool); // 0x10d0 Func
	var_451_string = "all"; // 0x10d2 PushS
	var_452_string = "bjump"; // 0x10d3 PushS
	PlayAnimation(var_451_string, var_452_string); // 0x10d4 Func
	GetPFPosition(var_445_cvector); // 0x10d6 TObjFunc
	GetPFPosition(var_446_cvector); // 0x10d8 Func
	WaitForAnimEnd(); // 0x10da Func
	func_4378(var_446_cvector); // 0x10dd NEW_2
	StopAsync(); // 0x10df Func
	var_453_cvector = CVector(0.0, 0.0, 0.0); // 0x10e1 PushVec
	SetSpeed(var_453_cvector); // 0x10e2 Func
	var_443_bool = 1; // 0x10e4 MovB
	var_454_bool = 0; // 0x10e5 PushV
	func_4246(var_446_cvector, var_454_bool); // 0x10e6 NEW_2
	var_455_bool = var_454_bool == 0; // 0x10e8 Not
	if(var_455_bool == 0) goto Label_4331; // 0x10e9 JumpB
	goto Label_4332; // 0x10ea Jump
	
Label_4331:
	goto Label_4294; // 0x10eb Jump
}


func_5316(var_568_float)
{
	var_569_object = Obj(); var_570_object = Obj(); // 0x14c4 PushV
	CreateFloatVector(var_570_object); // 0x14c5 Func
	add(var_568_float); // 0x14c7 ObjFunc
	var_571_int = 0; // 0x14c9 PushI
	var_572_bool = var_568_float < var_571_int; // 0x14ca LT
	if(var_572_bool == 0) goto Label_5328; // 0x14cb JumpB
	var_573_float = 0.7; // 0x14cc PushF
	var_574_int = 500; // 0x14cd PushI
	RumblePlay(var_573_float, var_574_int); // 0x14ce Func
	
Label_5328:
	var_575_int = 15; // 0x14d0 PushI
	SendWorldWndMessage(var_575_int, var_570_object); // 0x14d1 Func
	return 2; // 0x14d3 Return
}


func_4821(var_32_bool, var_33_object)
{
	var_34_int = 0; var_35_int = 0; // 0x12d5 PushV
	var_36_bool = 0; var_37_object = Obj(); // 0x12d6 PushV
	var_37_object = var_33_object; // 0x12d7 Mov
	func_4785(var_36_bool, var_37_object); // 0x12d8 NEW_2
	var_53_bool = var_36_bool == 0; // 0x12da Not
	if(var_53_bool == 0) goto Label_4830; // 0x12db JumpB
	var_32_bool = 0; // 0x12dc MovB
	return 2; // 0x12dd Return
	
Label_4830:
	var_54_bool = 0; var_55_object = Obj(); var_56_string = ""; // 0x12de PushV
	var_55_object = var_33_object; // 0x12df Mov
	var_56_string = "noaccess"; // 0x12e0 MovS
	func_4695(var_54_bool, var_55_object, var_56_string); // 0x12e1 NEW_2
	var_63_bool = var_54_bool == 0; // 0x12e3 Not
	if(var_63_bool == 0) goto Label_4839; // 0x12e4 JumpB
	var_32_bool = 1; // 0x12e5 MovB
	return 2; // 0x12e6 Return
	
Label_4839:
	var_64_string = "noaccess"; // 0x12e7 PushS
	GetProperty(var_64_string, var_35_int); // 0x12e8 ObjFunc
	var_65_int = 0; // 0x12ea PushI
	var_32_bool = var_35_int == var_65_int; // 0x12eb Eq2
	return 2; // 0x12ec Return
}


func_5333(var_118_int)
{
	var_119_float = 0; var_120_float = 0; // 0x14d5 PushV
	GetGameTime(var_120_float); // 0x14d6 Func
	var_121_int = 1; // 0x14d8 PushI
	var_122_int = 0; // 0x14d9 PushV
	var_123_int = 24; // 0x14da PushI
	var_122_int = var_120_float / var_120_float; // 0x14db Div2
	var_118_int = var_121_int + var_122_int; // 0x14dc Add2
	return 2; // 0x14dd Return
}


func_5854(var_53_object, var_54_string)
{
	var_55_string = "unholster"; // 0x16df PushS
	var_56_bool = var_54_string == var_55_string; // 0x16e0 Eq
	if(var_56_bool == 0) goto Label_5863; // 0x16e1 JumpB
	var_57_object = Obj(); // 0x16e2 PushV
	var_57_object = var_53_object; // 0x16e3 Mov
	func_6190(); // 0x16e4 NEW_2
	goto Label_5878; // 0x16e6 Jump
	
Label_5878:
	return 0; // 0x16f6 Return
	
Label_5863:
	var_58_string = "player_shot"; // 0x16e7 PushS
	var_59_bool = var_54_string == var_58_string; // 0x16e8 Eq
	if(var_59_bool == 0) goto Label_5871; // 0x16e9 JumpB
	var_60_object = Obj(); // 0x16ea PushV
	var_60_object = var_53_object; // 0x16eb Mov
	func_6207(var_60_object); // 0x16ec NEW_2
	goto Label_5878; // 0x16ee Jump
	
Label_5871:
	var_126_string = "battle"; // 0x16ef PushS
	var_127_bool = var_54_string == var_126_string; // 0x16f0 Eq
	if(var_127_bool == 0) goto Label_5878; // 0x16f1 JumpB
	var_128_object = Obj(); // 0x16f2 PushV
	var_128_object = var_53_object; // 0x16f3 Mov
	func_6216(); // 0x16f4 NEW_2
}


func_5342(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0x14de PushV
	IsPlayerActor(var_22_object, var_24_bool); // 0x14df Func
	var_25_bool = var_24_bool; // 0x14e1 Push
	if(var_25_bool == 0) goto Label_5350; // 0x14e2 JumpB
	var_26_string = "attack"; // 0x14e3 PushS
	PlayGlobalMusic(var_26_string); // 0x14e4 Func
	
Label_5350:
	return 2; // 0x14e6 Return
}


func_5351()
{
	var_473_object = Obj(); var_474_object = Obj(); // 0x14e7 PushV
	GetScene(var_474_object); // 0x14e8 Func
	var_475_string = "battle"; // 0x14ea PushS
	var_476_object = Obj(); // 0x14eb PushV
	func_5236(var_476_object); // 0x14ec NEW_2
	BroadcastMessage(var_475_string, var_476_object, var_474_object); // 0x14ee Func
	return 2; // 0x14f0 Return
}


func_2796(var_44_string)
{
	RemoveRTEnvelope(); // 0xaed Func
	SetDeathState(); // 0xaef Func
	Stop(); // 0xaf1 Func
	StopAsync(); // 0xaf3 Func
	StopSecondaryAnimation(); // 0xaf5 Func
	var_45_string = ""; // 0xaf7 PushV
	var_45_string = var_44_string; // 0xaf8 Mov
	func_5195(var_45_string); // 0xaf9 NEW_2
	var_74_string = "all"; // 0xafb PushS
	PlayAnimation(var_74_string, var_44_string); // 0xafc Func
	WaitForAnimEnd(); // 0xafe Func
	var_75_string = "all"; // 0xb00 PushS
	LockAnimationEnd(var_75_string, var_44_string); // 0xb01 Func
	RemoveEnvelope(); // 0xb03 Func
	return 0; // 0xb05 Return
}


func_4845(var_36_object)
{
	var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_bool = 0; var_45_int = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_string = ""; // 0x12ed PushV
	var_51_bool = var_36_object == 0; // 0x12ee NullEq
	if(var_51_bool == 0) goto Label_4849; // 0x12ef JumpB
	return 14; // 0x12f0 Return
	
Label_4849:
	IsDead(var_44_bool); // 0x12f1 Func
	var_52_bool = var_44_bool; // 0x12f3 Push
	if(var_52_bool == 0) goto Label_4854; // 0x12f4 JumpB
	return 14; // 0x12f5 Return
	
Label_4854:
	GetSecondaryAnimationType(var_45_int); // 0x12f6 Func
	var_53_int = 0; // 0x12f8 PushI
	var_54_bool = var_45_int < var_53_int; // 0x12f9 LT
	if(var_54_bool == 0) goto Label_4860; // 0x12fa JumpB
	return 14; // 0x12fb Return
	
Label_4860:
	GetPosition(var_46_cvector); // 0x12fc ObjFunc
	GetPosition(var_47_cvector); // 0x12fe Func
	GetDirection(var_48_cvector); // 0x1300 Func
	var_49_cvector = var_47_cvector - var_46_cvector; // 0x1302 Sub2
	var_55_float = GetByIndex(var_49_cvector, 0); // 0x1303 PushE
	var_56_float = GetByIndex(var_48_cvector, 0); // 0x1304 PushE
	var_57_float = var_55_float * var_56_float; // 0x1305 Mult
	var_58_float = GetByIndex(var_49_cvector, 2); // 0x1306 PushE
	var_59_float = GetByIndex(var_48_cvector, 2); // 0x1307 PushE
	var_60_float = var_58_float * var_59_float; // 0x1308 Mult
	var_61_int = var_57_float + var_60_float; // 0x1309 Add
	var_62_int = 0; // 0x130a PushI
	var_63_bool = var_61_int >= var_62_int; // 0x130b GE
	if(var_63_bool == 0) goto Label_4879; // 0x130c JumpB
	var_50_string = "fhit"; // 0x130d MovS
	goto Label_4880; // 0x130e Jump
	
Label_4880:
	var_64_string = "hit_react"; // 0x1310 PushS
	var_65_string = "1"; // 0x1311 PushS
	var_66_int = var_50_string + var_65_string; // 0x1312 Add
	var_67_string = "2"; // 0x1313 PushS
	var_68_int = var_50_string + var_67_string; // 0x1314 Add
	var_69_int = -10; // 0x1315 PushI
	FadeSecondaryAnimation(var_64_string, var_66_int, var_68_int, var_69_int); // 0x1316 Func
	return 14; // 0x1318 Return
	
Label_4879:
	var_50_string = "bhit"; // 0x130f MovS
}


func_4335(var_0_bool, var_367_bool)
{
	var_368_bool = 0; var_369_bool = 0; // 0x10ef PushV
	var_370_string = "IsAttacking"; // 0x10f0 PushS
	var_371_int = 1; // 0x10f1 PushI
	var_372_bool = IsFuncExist(var_0_bool, var_370_string, var_371_int); // 0x10f2 FuncExist
	if(var_372_bool == 0) goto Label_4344; // 0x10f3 JumpB
	IsAttacking(var_369_bool); // 0x10f4 TObjFunc
	var_367_bool = var_369_bool; // 0x10f6 Mov
	return 2; // 0x10f7 Return
	
Label_4344:
	var_367_bool = 0; // 0x10f8 MovB
	return 2; // 0x10f9 Return
}


func_5362()
{
	var_27_int = 1000; // 0x14f3 PushI
	SetReturnValue(var_27_int); // 0x14f4 ObjFunc
	return 0; // 0x14f6 Return
}


func_5879(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x16f7 PushV
	var_24_bool = 0; // 0x16f8 PushV
	var_24_bool = 0; // 0x16f9 MovB
	var_25_bool = 0; var_26_object = Obj(); // 0x16fa PushV
	var_26_object = var_21_object; // 0x16fb Mov
	func_6187(var_26_object); // 0x16fc NEW_2
	if(var_25_bool == 0) goto Label_5893; // 0x16fe JumpB
	var_27_bool = 0; var_28_object = Obj(); // 0x16ff PushV
	var_28_object = var_21_object; // 0x1700 Mov
	func_4690(var_27_bool, var_28_object); // 0x1701 NEW_2
	if(var_27_bool == 0) goto Label_5893; // 0x1703 JumpB
	var_24_bool = 1; // 0x1704 MovB
	
Label_5893:
	if(var_24_bool == 0) goto Label_5900; // 0x1705 JumpB
	IsWeaponHolstered(var_23_bool); // 0x1706 ObjFunc
	var_31_bool = var_23_bool == 0; // 0x1708 Not
	if(var_31_bool == 0) goto Label_5900; // 0x1709 JumpB
	var_20_bool = 1; // 0x170a MovB
	return 2; // 0x170b Return
	
Label_5900:
	var_20_bool = 0; // 0x170c MovB
	return 2; // 0x170d Return
}


func_5367(var_249_bool)
{
	var_251_int = 0; var_252_string = ""; // 0x14f8 PushV
	var_252_string = "branch"; // 0x14f9 MovS
	func_5311(var_251_int, var_252_string); // 0x14fa NEW_2
	var_253_int = 0; // 0x14fc PushI
	var_254_bool = var_251_int == var_253_int; // 0x14fd Eq
	if(var_254_bool == 0) goto Label_5377; // 0x14fe JumpB
	var_249_bool = 1; // 0x14ff MovB
	return 0; // 0x1500 Return
	
Label_5377:
	var_249_bool = 0; // 0x1501 MovB
	return 0; // 0x1502 Return
}


func_4346(var_2_object, var_5_bool)
{
	var_480_float = 0; var_481_int = 0; var_482_float = 0; var_483_int = 0; // 0x10fa PushV
	var_484_bool = var_2_object == 0; // 0x10fb Not
	if(var_484_bool == 0) goto Label_4350; // 0x10fc JumpB
	return 4; // 0x10fd Return
	
Label_4350:
	var_485_bool = var_5_bool; // 0x10fe PushT
	if(var_485_bool == 0) goto Label_4358; // 0x10ff JumpB
	var_486_int = -1; // 0x1100 PushI
	var_5_bool = var_5_bool + var_486_int; // 0x1101 Add2
	var_487_int = 0; // 0x1102 PushI
	var_488_bool = var_5_bool > var_487_int; // 0x1103 GT
	if(var_488_bool == 0) goto Label_4358; // 0x1104 JumpB
	return 4; // 0x1105 Return
	
Label_4358:
	rand(var_482_float); // 0x1106 Func
	var_489_float = 0; // 0x1108 PushV
	func_4396(var_489_float); // 0x1109 NEW_2
	var_490_bool = var_482_float < var_489_float; // 0x110b LT
	if(var_490_bool == 0) goto Label_4377; // 0x110c JumpB
	irand(var_483_int, var_482_float); // 0x110d Func
	var_491_int = 1; // 0x110f PushI
	var_483_int = var_483_int + var_491_int; // 0x1110 Add2
	var_492_string = "attack"; // 0x1111 PushS
	var_493_int = var_492_string + var_483_int; // 0x1112 Add
	Speak(var_493_int); // 0x1113 Func
	var_494_int = 0; // 0x1115 PushV
	func_4394(var_494_int); // 0x1116 NEW_2
	var_5_bool = var_494_int; // 0x1117 TMov
	
Label_4377:
	return 4; // 0x1119 Return
}


func_5379(var_274_bool)
{
	var_276_int = 0; var_277_string = ""; // 0x1504 PushV
	var_277_string = "branch"; // 0x1505 MovS
	func_5311(var_276_int, var_277_string); // 0x1506 NEW_2
	var_278_int = 1; // 0x1508 PushI
	var_279_bool = var_276_int == var_278_int; // 0x1509 Eq
	if(var_279_bool == 0) goto Label_5389; // 0x150a JumpB
	var_274_bool = 1; // 0x150b MovB
	return 0; // 0x150c Return
	
Label_5389:
	var_274_bool = 0; // 0x150d MovB
	return 0; // 0x150e Return
}


func_5902(var_34_object)
{
	var_35_object = Obj(); // 0x170f PushV
	var_35_object = var_34_object; // 0x1710 Mov
	func_6190(); // 0x1711 NEW_2
	return 0; // 0x1713 Return
}


func_5391(var_123_bool)
{
	var_125_int = 0; var_126_string = ""; // 0x1510 PushV
	var_126_string = "branch"; // 0x1511 MovS
	func_5311(var_125_int, var_126_string); // 0x1512 NEW_2
	var_129_int = 2; // 0x1514 PushI
	var_130_bool = var_125_int == var_129_int; // 0x1515 Eq
	if(var_130_bool == 0) goto Label_5401; // 0x1516 JumpB
	var_123_bool = 1; // 0x1517 MovB
	return 0; // 0x1518 Return
	
Label_5401:
	var_123_bool = 0; // 0x1519 MovB
	return 0; // 0x151a Return
}


func_5908(var_22_object)
{
	var_23_bool = 0; var_24_object = Obj(); // 0x1715 PushV
	var_24_object = var_22_object; // 0x1716 Mov
	func_4690(var_23_bool, var_24_object); // 0x1717 NEW_2
	if(var_23_bool == 0) goto Label_5920; // 0x1719 JumpB
	var_27_object = Obj(); // 0x171a PushV
	func_5236(var_27_object); // 0x171b NEW_2
	var_30_float = -0.02; // 0x171d PushF
	ReportReputationChange(var_22_object, var_27_object, var_30_float); // 0x171e Func
	
Label_5920:
	return 0; // 0x1720 Return
}


func_4889(var_23_object, var_24_int, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_object = Obj(); var_37_int = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_int = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); // 0x1319 PushV
	var_44_bool = 0; // 0x131a PushV
	var_44_bool = 0; // 0x131b MovB
	var_45_bool = 0; // 0x131c PushV
	var_45_bool = 0; // 0x131d MovB
	var_46_object = var_23_object; // 0x131e Push
	if(var_46_object == 0) goto Label_4900; // 0x131f JumpB
	var_47_int = 4; // 0x1320 PushI
	var_48_bool = var_24_int != var_47_int; // 0x1321 Neq
	if(var_48_bool == 0) goto Label_4900; // 0x1322 JumpB
	var_45_bool = 1; // 0x1323 MovB
	
Label_4900:
	if(var_45_bool == 0) goto Label_4905; // 0x1324 JumpB
	var_49_int = 5; // 0x1325 PushI
	var_50_bool = var_24_int != var_49_int; // 0x1326 Neq
	if(var_50_bool == 0) goto Label_4905; // 0x1327 JumpB
	var_44_bool = 1; // 0x1328 MovB
	
Label_4905:
	if(var_44_bool == 0) goto Label_4952; // 0x1329 JumpB
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x132a PushV
	var_53_cvector = CVector(0,0,0); var_54_object = Obj(); // 0x132b PushV
	var_54_object = var_23_object; // 0x132c Mov
	func_4675(var_54_object); // 0x132d NEW_2
	var_52_cvector = var_53_cvector; // 0x132e Mov
	func_5242(var_51_cvector, var_52_cvector); // 0x1330 NEW_2
	var_35_cvector = var_51_cvector; // 0x1331 Mov
	CreateVectorVector(var_36_object); // 0x1333 Func
	var_37_int = 1; // 0x1335 MovI
	
Label_4918:
	var_64_string = "hit"; // 0x1336 PushS
	var_65_int = var_64_string + var_37_int; // 0x1337 Add
	GetGeometryLocator(var_65_int, var_38_bool, var_39_cvector, var_40_cvector); // 0x1338 Func
	var_66_bool = var_38_bool == 0; // 0x133a Not
	if(var_66_bool == 0) goto Label_4925; // 0x133b JumpB
	goto Label_4934; // 0x133c Jump
	
Label_4934:
	size(var_41_int); // 0x1346 ObjFunc
	var_67_int = var_41_int; // 0x1348 Push
	if(var_67_int == 0) goto Label_4951; // 0x1349 JumpB
	irand(var_42_int, var_41_int); // 0x134a Func
	get(var_43_cvector, var_42_int); // 0x134c ObjFunc
	var_68_object = Obj(); var_69_int = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); // 0x134e PushV
	var_68_object = var_23_object; // 0x134f Mov
	var_69_int = var_24_int; // 0x1350 Mov
	var_70_float = var_25_float; // 0x1351 Mov
	var_71_cvector = var_43_cvector; // 0x1352 Mov
	var_72_cvector = -var_35_cvector; // 0x1353 Neg2
	func_4957(var_70_float, var_71_cvector, var_72_cvector); // 0x1354 NEW_2
	return 18; // 0x1356 Return
	
Label_4951:
	var_36_object = 0; // 0x1357 SetNull
	
Label_4952:
	var_113_object = Obj(); // 0x1358 PushV
	var_113_object = var_23_object; // 0x1359 Mov
	func_4845(var_113_object); // 0x135a NEW_2
	return 18; // 0x135c Return
	
Label_4925:
	var_114_int = var_40_cvector | var_35_cvector; // 0x133d Or
	var_115_float = 0.70711; // 0x133e PushF
	var_116_bool = var_114_int >= var_115_float; // 0x133f GE
	if(var_116_bool == 0) goto Label_4931; // 0x1340 JumpB
	add(var_39_cvector); // 0x1341 ObjFunc
	
Label_4931:
	var_117_int = 1; // 0x1343 PushI
	var_37_int = var_37_int + var_117_int; // 0x1344 Add2
	goto Label_4918; // 0x1345 Jump
}


func_4378(var_0_bool)
{
	var_254_object = Obj(); // 0x111a PushV
	var_254_object = var_0_bool; // 0x111b MovT
	func_5342(var_254_object); // 0x111c NEW_2
	return 0; // 0x111e Return
}


func_5403(var_255_bool, var_256_object)
{
	var_257_bool = 0; var_258_object = Obj(); // 0x151c PushV
	var_258_object = var_256_object; // 0x151d Mov
	func_5523(var_258_object); // 0x151e NEW_2
	if(var_257_bool == 0) goto Label_5411; // 0x1520 JumpB
	var_255_bool = 1; // 0x1521 MovB
	return 0; // 0x1522 Return
	
Label_5411:
	var_255_bool = 0; // 0x1523 MovB
	return 0; // 0x1524 Return
}


func_2843()
{
	var_38_bool = 0; // 0xb1b PushV
	func_4982(var_38_bool); // 0xb1c NEW_2
	var_41_bool = var_38_bool == 0; // 0xb1e Not
	if(var_41_bool == 0) goto Label_2851; // 0xb1f JumpB
	func_6186(); // 0xb21 NEW_2
	
Label_2851:
	return 0; // 0xb23 Return
}


func_4383(var_577_int)
{
	var_577_int = 0; // 0x111f MovI
	return 0; // 0x1120 Return
}


func_5921(var_20_bool, var_21_string)
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x1721 PushV
	var_24_string = "heal"; // 0x1722 PushS
	var_25_bool = var_21_string == var_24_string; // 0x1723 Eq
	if(var_25_bool == 0) goto Label_5935; // 0x1724 JumpB
	var_26_string = "player"; // 0x1725 PushS
	FindActor(var_23_object, var_26_string); // 0x1726 Func
	var_27_bool = 0; var_28_object = Obj(); // 0x1728 PushV
	var_28_object = var_23_object; // 0x1729 Mov
	func_6218(var_28_object); // 0x172a NEW_2
	var_20_bool = var_27_bool; // 0x172b Mov
	return 2; // 0x172d Return
	
Label_5935:
	var_20_bool = 0; // 0x172f MovB
	return 2; // 0x1730 Return
}


func_3361()
{
	var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_int = 0; var_73_bool = 0; var_74_float = 0; var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_int = 0; var_79_int = 0; var_80_bool = 0; var_81_float = 0; var_82_bool = 0; // 0xd21 PushV
	WaitForAnimEnd(); // 0xd22 Func
	var_83_bool = 0; // 0xd24 PushV
	func_4982(var_83_bool); // 0xd25 NEW_2
	var_84_bool = var_83_bool == 0; // 0xd27 Not
	if(var_84_bool == 0) goto Label_3370; // 0xd28 JumpB
	return 14; // 0xd29 Return
	
Label_3370:
	var_85_int = 0; // 0xd2a PushV
	func_5957(var_85_int); // 0xd2b NEW_2
	var_76_int = var_85_int; // 0xd2c Mov
	var_77_int = 0; // 0xd2e MovI
	
Label_3375:
	var_98_bool = 0; // 0xd2f PushV
	var_98_bool = 0; // 0xd30 MovB
	var_99_int = 5; // 0xd31 PushI
	var_100_bool = var_77_int < var_99_int; // 0xd32 LT
	if(var_100_bool == 0) goto Label_3385; // 0xd33 JumpB
	var_101_bool = 0; // 0xd34 PushV
	func_4982(var_101_bool); // 0xd35 NEW_2
	if(var_101_bool == 0) goto Label_3385; // 0xd37 JumpB
	var_98_bool = 1; // 0xd38 MovB
	
Label_3385:
	if(var_98_bool == 0) goto Label_3437; // 0xd39 JumpB
	var_102_int = 3; // 0xd3a PushI
	irand(var_78_int, var_102_int); // 0xd3b Func
	var_103_int = 0; // 0xd3d PushI
	var_104_bool = var_78_int == var_103_int; // 0xd3e Eq
	if(var_104_bool == 0) goto Label_3409; // 0xd3f JumpB
	var_105_int = var_76_int; // 0xd40 Push
	if(var_105_int == 0) goto Label_3408; // 0xd41 JumpB
	irand(var_79_int, var_76_int); // 0xd42 Func
	var_106_string = "all"; // 0xd44 PushS
	var_107_string = ""; var_108_int = 0; // 0xd45 PushV
	var_108_int = var_79_int; // 0xd46 Mov
	func_5950(var_107_string, var_108_int); // 0xd47 NEW_2
	PlayAnimation(var_106_string, var_107_string); // 0xd49 Func
	WaitForAnimEnd(var_80_bool); // 0xd4b Func
	var_109_bool = var_80_bool == 0; // 0xd4d Not
	if(var_109_bool == 0) goto Label_3408; // 0xd4e JumpB
	goto Label_3437; // 0xd4f Jump
	
Label_3437:
	ResetAAS(); // 0xd6d Func
	return 14; // 0xd6f Return
	
Label_3408:
	goto Label_3426; // 0xd50 Jump
	
Label_3426:
	var_110_bool = 0; // 0xd62 PushV
	func_3440(var_110_bool); // 0xd63 NEW_2
	var_111_bool = var_110_bool == 0; // 0xd65 Not
	if(var_111_bool == 0) goto Label_3432; // 0xd66 JumpB
	goto Label_3437; // 0xd67 Jump
	
Label_3432:
	ResetAAS(); // 0xd68 Func
	var_112_int = 1; // 0xd6a PushI
	var_77_int = var_77_int + var_112_int; // 0xd6b Add2
	goto Label_3375; // 0xd6c Jump
	
Label_3409:
	var_113_int = 1; // 0xd51 PushI
	var_114_bool = var_78_int == var_113_int; // 0xd52 Eq
	if(var_114_bool == 0) goto Label_3423; // 0xd53 JumpB
	var_115_int = 4; // 0xd54 PushI
	rand(var_81_float, var_115_int); // 0xd55 Func
	var_116_int = 1; // 0xd57 PushI
	var_117_int = var_81_float + var_116_int; // 0xd58 Add
	Sleep(var_117_int, var_82_bool); // 0xd59 Func
	var_118_bool = var_82_bool == 0; // 0xd5b Not
	if(var_118_bool == 0) goto Label_3422; // 0xd5c JumpB
	goto Label_3437; // 0xd5d Jump
	
Label_3422:
	goto Label_3426; // 0xd5e Jump
	
Label_3423:
	var_119_int = var_77_int; // 0xd5f Push
	if(var_119_int == 0) goto Label_3426; // 0xd60 JumpB
	goto Label_3437; // 0xd61 Jump
}


func_4385()
{
	var_373_string = ""; // 0x1121 PushV
	var_373_string = "attack_stay"; // 0x1122 MovS
	func_5195(var_373_string); // 0x1123 NEW_2
	return 0; // 0x1125 Return
}


func_5413(var_149_bool, var_150_object)
{
	var_151_bool = 0; var_152_object = Obj(); // 0x1526 PushV
	var_152_object = var_150_object; // 0x1527 Mov
	func_5530(var_152_object); // 0x1528 NEW_2
	if(var_151_bool == 0) goto Label_5421; // 0x152a JumpB
	var_149_bool = 1; // 0x152b MovB
	return 0; // 0x152c Return
	
Label_5421:
	var_149_bool = 0; // 0x152d MovB
	return 0; // 0x152e Return
}


func_4390()
{
	return 0; // 0x1127 Return
}


func_4392(var_602_bool)
{
	var_602_bool = 1; // 0x1128 MovB
	return 0; // 0x1129 Return
}


func_4394(var_494_int)
{
	var_494_int = 1; // 0x112a MovI
	return 0; // 0x112b Return
}


func_4396(var_489_float)
{
	var_489_float = 0.5; // 0x112c MovF
	return 0; // 0x112d Return
}


func_5423(var_163_bool, var_164_object)
{
	var_165_bool = 0; var_166_object = Obj(); // 0x1530 PushV
	var_166_object = var_164_object; // 0x1531 Mov
	func_5537(var_166_object); // 0x1532 NEW_2
	if(var_165_bool == 0) goto Label_5431; // 0x1534 JumpB
	var_163_bool = 1; // 0x1535 MovB
	return 0; // 0x1536 Return
	
Label_5431:
	var_163_bool = 0; // 0x1537 MovB
	return 0; // 0x1538 Return
}


func_5937(var_31_string)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x1731 PushV
	var_34_string = "heal"; // 0x1732 PushS
	var_35_bool = var_31_string == var_34_string; // 0x1733 Eq
	if(var_35_bool == 0) goto Label_5949; // 0x1734 JumpB
	var_36_string = "player"; // 0x1735 PushS
	FindActor(var_33_object, var_36_string); // 0x1736 Func
	var_37_object = Obj(); // 0x1738 PushV
	var_37_object = var_33_object; // 0x1739 Mov
	func_6221(); // 0x173a NEW_2
	var_33_object = 0; // 0x173c SetNull
	
Label_5949:
	return 2; // 0x173d Return
}


func_4405(var_2_object, var_261_bool, var_262_object, var_263_float, var_264_float, var_265_bool, var_266_bool)
{
	var_270_bool = 0; var_271_bool = 0; var_272_bool = 0; var_273_bool = 0; // 0x1135 PushV
	var_274_object = Obj(); // 0x1136 PushV
	var_274_object = var_262_object; // 0x1137 Mov
	func_5342(var_274_object); // 0x1138 NEW_2
	var_275_int = 1; // 0x113a PushI
	var_276_int = 5; // 0x113b PushI
	SetTimer(var_275_int, var_276_int); // 0x113c Func
	CanSee(var_272_bool, var_262_object); // 0x113e Func
	var_277_bool = var_272_bool; // 0x1140 Push
	if(var_277_bool == 0) goto Label_4424; // 0x1141 JumpB
	var_2_object = 1; // 0x1142 TMovB
	var_278_object = Obj(); // 0x1143 PushV
	var_278_object = var_262_object; // 0x1144 Mov
	func_5166(var_278_object); // 0x1145 NEW_2
	goto Label_4425; // 0x1147 Jump
	
Label_4425:
	var_279_bool = 0; var_280_object = Obj(); // 0x1149 PushV
	var_280_object = var_262_object; // 0x114a Mov
	func_4690(var_279_bool, var_280_object); // 0x114b NEW_2
	if(var_279_bool == 0) goto Label_4435; // 0x114d JumpB
	var_283_object = Obj(); // 0x114e PushV
	func_5236(var_283_object); // 0x114f NEW_2
	SendPlayerEnemy(var_262_object, var_283_object); // 0x1151 Func
	
Label_4435:
	var_284_bool = 0; var_285_object = Obj(); var_286_float = 0; var_287_float = 0; var_288_bool = 0; var_289_bool = 0; // 0x1153 PushV
	var_285_object = var_262_object; // 0x1154 Mov
	var_286_float = var_263_float; // 0x1155 Mov
	var_287_float = var_264_float; // 0x1156 Mov
	var_288_bool = var_265_bool; // 0x1157 Mov
	var_289_bool = var_266_bool; // 0x1158 Mov
	func_4510(var_272_bool, var_273_bool, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool); // 0x1159 NEW_2
	var_273_bool = var_284_bool; // 0x115a Mov
	var_335_object = var_2_object; // 0x115c PushT
	if(var_335_object == 0) goto Label_4449; // 0x115d JumpB
	var_336_string = "head"; // 0x115e PushS
	UnlookAsync(var_336_string); // 0x115f Func
	
Label_4449:
	var_337_int = 1; // 0x1161 PushI
	KillTimer(var_337_int); // 0x1162 Func
	var_261_bool = var_273_bool; // 0x1164 Mov
	return 4; // 0x1165 Return
	
Label_4424:
	var_2_object = 0; // 0x1148 TMovB
}


func_5433(var_174_bool, var_175_object)
{
	var_176_bool = 0; var_177_object = Obj(); // 0x153a PushV
	var_177_object = var_175_object; // 0x153b Mov
	func_5544(var_177_object); // 0x153c NEW_2
	if(var_176_bool == 0) goto Label_5441; // 0x153e JumpB
	var_174_bool = 1; // 0x153f MovB
	return 0; // 0x1540 Return
	
Label_5441:
	var_174_bool = 0; // 0x1541 MovB
	return 0; // 0x1542 Return
}


func_5950(var_91_string, var_92_int)
{
	var_93_string = ""; var_94_string = ""; // 0x173e PushV
	var_94_string = "idle"; // 0x173f MovS
	var_95_int = var_92_int; // 0x1740 Push
	if(var_95_int == 0) goto Label_5955; // 0x1741 JumpB
	var_94_string = var_94_string + var_92_int; // 0x1742 Add2
	
Label_5955:
	var_91_string = var_94_string; // 0x1743 Mov
	return 2; // 0x1744 Return
}


func_5443(var_180_bool, var_181_object)
{
	var_182_bool = 0; var_183_object = Obj(); // 0x1544 PushV
	var_183_object = var_181_object; // 0x1545 Mov
	func_5551(var_183_object); // 0x1546 NEW_2
	if(var_182_bool == 0) goto Label_5451; // 0x1548 JumpB
	var_180_bool = 1; // 0x1549 MovB
	return 0; // 0x154a Return
	
Label_5451:
	var_180_bool = 0; // 0x154b MovB
	return 0; // 0x154c Return
}


func_5957(var_85_int)
{
	var_86_int = 0; var_87_bool = 0; var_88_int = 0; var_89_bool = 0; // 0x1745 PushV
	var_88_int = 0; // 0x1746 MovI
	
Label_5959:
	var_90_string = "all"; // 0x1747 PushS
	var_91_string = ""; var_92_int = 0; // 0x1748 PushV
	var_92_int = var_88_int; // 0x1749 Mov
	func_5950(var_91_string, var_92_int); // 0x174a NEW_2
	HasAnimation(var_89_bool, var_90_string, var_91_string); // 0x174c Func
	var_96_bool = var_89_bool == 0; // 0x174e Not
	if(var_96_bool == 0) goto Label_5969; // 0x174f JumpB
	goto Label_5972; // 0x1750 Jump
	
Label_5972:
	var_85_int = var_88_int; // 0x1754 Mov
	return 4; // 0x1755 Return
	
Label_5969:
	var_97_int = 1; // 0x1751 PushI
	var_88_int = var_88_int + var_97_int; // 0x1752 Add2
	goto Label_5959; // 0x1753 Jump
}


func_5453(var_186_bool, var_187_object)
{
	var_188_bool = 0; var_189_object = Obj(); // 0x154e PushV
	var_189_object = var_187_object; // 0x154f Mov
	func_5558(var_189_object); // 0x1550 NEW_2
	if(var_188_bool == 0) goto Label_5461; // 0x1552 JumpB
	var_186_bool = 1; // 0x1553 MovB
	return 0; // 0x1554 Return
	
Label_5461:
	var_186_bool = 0; // 0x1555 MovB
	return 0; // 0x1556 Return
}


func_5974(var_62_int)
{
	var_64_bool = 0; // 0x1757 PushV
	func_6280(var_64_bool); // 0x1758 NEW_2
	if(var_64_bool == 0) goto Label_5981; // 0x175a JumpB
	var_62_int = 2; // 0x175b MovI
	goto Label_5982; // 0x175c Jump
	
Label_5982:
	return 0; // 0x175e Return
	
Label_5981:
	var_62_int = 0; // 0x175d MovI
}


func_5463(var_196_bool, var_197_object)
{
	var_198_bool = 0; var_199_object = Obj(); // 0x1558 PushV
	var_199_object = var_197_object; // 0x1559 Mov
	func_5565(var_199_object); // 0x155a NEW_2
	if(var_198_bool == 0) goto Label_5471; // 0x155c JumpB
	var_196_bool = 1; // 0x155d MovB
	return 0; // 0x155e Return
	
Label_5471:
	var_196_bool = 0; // 0x155f MovB
	return 0; // 0x1560 Return
}


func_4957(var_25_object, var_28_cvector, var_29_cvector)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x135d PushV
	GetScene(var_32_object); // 0x135e Func
	var_34_string = "scripted"; // 0x1360 PushS
	var_35_string = "blood_dir.xml"; // 0x1361 PushS
	AddActorByType(var_33_object, var_34_string, var_32_object, var_28_cvector, var_29_cvector, var_35_string); // 0x1362 Func
	var_36_object = Obj(); // 0x1364 PushV
	var_36_object = var_25_object; // 0x1365 Mov
	func_4845(var_36_object); // 0x1366 NEW_2
	return 4; // 0x1368 Return
}


func_5983(var_61_object)
{
	var_62_object = Obj(); // 0x1760 PushV
	var_62_object = var_61_object; // 0x1761 Mov
	TaskCall(6); // 0x1762 TaskCall
	func_3447(var_63_object, var_62_object); // 0x1763 NEW_2
	TaskReturn(); // 0x1764 TaskReturn
	return 0; // 0x1766 Return
}


func_5473(var_202_bool, var_203_object)
{
	var_204_bool = 0; var_205_object = Obj(); // 0x1562 PushV
	var_205_object = var_203_object; // 0x1563 Mov
	func_5572(var_205_object); // 0x1564 NEW_2
	if(var_204_bool == 0) goto Label_5481; // 0x1566 JumpB
	var_202_bool = 1; // 0x1567 MovB
	return 0; // 0x1568 Return
	
Label_5481:
	var_202_bool = 0; // 0x1569 MovB
	return 0; // 0x156a Return
}


func_5991(var_89_int, var_90_object)
{
	var_91_bool = 0; var_92_object = Obj(); // 0x1768 PushV
	var_92_object = var_90_object; // 0x1769 Mov
	func_4821(var_91_bool, var_92_object); // 0x176a NEW_2
	if(var_91_bool == 0) goto Label_5999; // 0x176c JumpB
	var_89_int = 2; // 0x176d MovI
	goto Label_6000; // 0x176e Jump
	
Label_6000:
	return 0; // 0x1770 Return
	
Label_5999:
	var_89_int = 0; // 0x176f MovI
}


func_5483(var_339_bool, var_340_object)
{
	var_341_bool = 0; var_342_object = Obj(); // 0x156c PushV
	var_342_object = var_340_object; // 0x156d Mov
	func_5579(var_342_object); // 0x156e NEW_2
	if(var_341_bool == 0) goto Label_5491; // 0x1570 JumpB
	var_339_bool = 1; // 0x1571 MovB
	return 0; // 0x1572 Return
	
Label_5491:
	var_339_bool = 0; // 0x1573 MovB
	return 0; // 0x1574 Return
}


func_4971()
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); // 0x136b PushV
	GetPosition(var_99_cvector); // 0x136c ObjFunc
	GetPosition(var_100_cvector); // 0x136e Func
	var_101_cvector = var_99_cvector - var_100_cvector; // 0x1370 Sub2
	var_102_float = GetByIndex(var_101_cvector, 0); // 0x1371 PushE
	var_103_float = GetByIndex(var_101_cvector, 2); // 0x1372 PushE
	RotateAsync(var_102_float, var_103_float); // 0x1373 Func
	return 6; // 0x1375 Return
}


func_3440(var_110_bool)
{
	var_110_bool = 1; // 0xd70 MovB
	return 0; // 0xd71 Return
}


func_6001(var_182_object)
{
	var_183_object = Obj(); // 0x1772 PushV
	var_183_object = var_182_object; // 0x1773 Mov
	TaskCall(7); // 0x1774 TaskCall
	func_3722(var_183_object); // 0x1775 NEW_2
	TaskReturn(); // 0x1776 TaskReturn
	return 0; // 0x1778 Return
}


func_3442()
{
	StopAnimation(); // 0xd72 Func
	StopGroup0(); // 0xd74 Func
	return 0; // 0xd76 Return
}


func_4468(var_2_object)
{
	var_20_int = 1; // 0x1174 PushI
	KillTimer(var_20_int); // 0x1175 Func
	var_21_object = var_2_object; // 0x1177 PushT
	if(var_21_object == 0) goto Label_4477; // 0x1178 JumpB
	var_2_object = 0; // 0x1179 TMovB
	var_22_string = "head"; // 0x117a PushS
	UnlookAsync(var_22_string); // 0x117b Func
	
Label_4477:
	func_4634(var_19_object); // 0x117e NEW_2
	return 0; // 0x1180 Return
}


func_5493(var_350_bool, var_351_object)
{
	var_352_bool = 0; var_353_object = Obj(); // 0x1576 PushV
	var_353_object = var_351_object; // 0x1577 Mov
	func_5586(var_353_object); // 0x1578 NEW_2
	if(var_352_bool == 0) goto Label_5501; // 0x157a JumpB
	var_350_bool = 1; // 0x157b MovB
	return 0; // 0x157c Return
	
Label_5501:
	var_350_bool = 0; // 0x157d MovB
	return 0; // 0x157e Return
}


func_4982(var_38_bool)
{
	var_39_bool = 0; var_40_bool = 0; // 0x1376 PushV
	IsLoaded(var_40_bool); // 0x1377 Func
	var_38_bool = var_40_bool; // 0x1379 Mov
	return 2; // 0x137a Return
}


func_3447(var_0_bool, var_62_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0; // 0xd77 PushV
	var_0_bool = var_62_object; // 0xd78 TMov
	func_3498(var_69_bool); // 0xd7a NEW_2
	GetDirection(var_67_cvector); // 0xd7c Func
	var_77_cvector = CVector(0,0,0); var_78_object = Obj(); // 0xd7e PushV
	var_78_object = var_0_bool; // 0xd7f MovT
	func_4675(var_78_object); // 0xd80 NEW_2
	var_68_cvector = var_77_cvector; // 0xd81 Mov
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); // 0xd83 PushV
	var_84_cvector = var_67_cvector; // 0xd84 Mov
	var_85_cvector = var_68_cvector; // 0xd85 Mov
	func_5294(var_83_float, var_84_cvector, var_85_cvector); // 0xd86 NEW_2
	var_107_int = 0; // 0xd88 PushI
	var_108_bool = var_83_float < var_107_int; // 0xd89 LT
	if(var_108_bool == 0) goto Label_3473; // 0xd8a JumpB
	var_109_object = Obj(); // 0xd8b PushV
	var_109_object = var_0_bool; // 0xd8c MovT
	func_4971(); // 0xd8d NEW_2
	var_69_bool = 1; // 0xd8f MovB
	goto Label_3476; // 0xd90 Jump
	
Label_3476:
	var_118_bool = var_69_bool; // 0xd94 Push
	if(var_118_bool == 0) goto Label_3492; // 0xd95 JumpB
	var_119_object = Obj(); // 0xd96 PushV
	var_119_object = var_0_bool; // 0xd97 MovT
	func_4971(); // 0xd98 NEW_2
	var_120_int = 111; // 0xd9a PushI
	var_121_float = 0.5; // 0xd9b PushF
	SetTimer(var_120_int, var_121_float); // 0xd9c Func
	var_122_float = 5.0; // 0xd9e PushF
	Sleep(var_122_float); // 0xd9f Func
	var_123_int = 111; // 0xda1 PushI
	KillTimer(var_123_int); // 0xda2 Func
	
Label_3492:
	StopAsync(); // 0xda4 Func
	var_124_string = "head"; // 0xda6 PushS
	UnlookAsync(var_124_string); // 0xda7 Func
	return 6; // 0xda9 Return
	
Label_3473:
	var_125_float = 1.5; // 0xd91 PushF
	Sleep(var_125_float, var_69_bool); // 0xd92 Func
}


func_6009(var_35_bool, var_36_object, var_37_bool)
{
	var_38_string = ""; var_39_string = ""; var_40_string = ""; var_41_string = ""; // 0x1779 PushV
	var_42_bool = 0; var_43_object = Obj(); var_44_string = ""; // 0x177a PushV
	var_43_object = var_36_object; // 0x177b Mov
	var_44_string = "class"; // 0x177c MovS
	func_4695(var_42_bool, var_43_object, var_44_string); // 0x177d NEW_2
	var_51_bool = var_42_bool == 0; // 0x177f Not
	if(var_51_bool == 0) goto Label_6019; // 0x1780 JumpB
	var_35_bool = 0; // 0x1781 MovB
	return 4; // 0x1782 Return
	
Label_6019:
	var_52_string = "class"; // 0x1783 PushS
	GetProperty(var_52_string, var_40_string); // 0x1784 Func
	var_53_string = "class"; // 0x1786 PushS
	GetProperty(var_53_string, var_41_string); // 0x1787 ObjFunc
	var_54_bool = 0; // 0x1789 PushV
	var_54_bool = 0; // 0x178a MovB
	var_55_bool = var_37_bool == 0; // 0x178b Not
	if(var_55_bool == 0) goto Label_6032; // 0x178c JumpB
	var_56_bool = var_40_string == var_41_string; // 0x178d Eq
	if(var_56_bool == 0) goto Label_6032; // 0x178e JumpB
	var_54_bool = 1; // 0x178f MovB
	
Label_6032:
	if(var_54_bool == 0) goto Label_6035; // 0x1790 JumpB
	var_35_bool = 1; // 0x1791 MovB
	return 4; // 0x1792 Return
	
Label_6035:
	var_57_string = "rat"; // 0x1793 PushS
	var_58_bool = var_41_string == var_57_string; // 0x1794 Eq
	if(var_58_bool == 0) goto Label_6041; // 0x1795 JumpB
	var_35_bool = 0; // 0x1796 MovB
	return 4; // 0x1797 Return
	
Label_6041:
	var_59_string = "rat_big"; // 0x1799 PushS
	var_60_bool = var_41_string == var_59_string; // 0x179a Eq
	if(var_60_bool == 0) goto Label_6047; // 0x179b JumpB
	var_35_bool = 0; // 0x179c MovB
	return 4; // 0x179d Return
	
Label_6047:
	var_61_string = "dog"; // 0x179f PushS
	var_62_bool = var_41_string == var_61_string; // 0x17a0 Eq
	if(var_62_bool == 0) goto Label_6053; // 0x17a1 JumpB
	var_35_bool = 0; // 0x17a2 MovB
	return 4; // 0x17a3 Return
	
Label_6053:
	var_63_string = "grabitel"; // 0x17a5 PushS
	var_64_bool = var_41_string == var_63_string; // 0x17a6 Eq
	if(var_64_bool == 0) goto Label_6059; // 0x17a7 JumpB
	var_35_bool = 0; // 0x17a8 MovB
	return 4; // 0x17a9 Return
	
Label_6059:
	var_65_string = "bomber"; // 0x17ab PushS
	var_66_bool = var_41_string == var_65_string; // 0x17ac Eq
	if(var_66_bool == 0) goto Label_6065; // 0x17ad JumpB
	var_35_bool = 0; // 0x17ae MovB
	return 4; // 0x17af Return
	
Label_6065:
	var_67_string = "sanitar"; // 0x17b1 PushS
	var_68_bool = var_41_string == var_67_string; // 0x17b2 Eq
	if(var_68_bool == 0) goto Label_6071; // 0x17b3 JumpB
	var_35_bool = 0; // 0x17b4 MovB
	return 4; // 0x17b5 Return
	
Label_6071:
	var_69_string = "hunter"; // 0x17b7 PushS
	var_70_bool = var_41_string == var_69_string; // 0x17b8 Eq
	if(var_70_bool == 0) goto Label_6077; // 0x17b9 JumpB
	var_35_bool = 0; // 0x17ba MovB
	return 4; // 0x17bb Return
	
Label_6077:
	var_71_string = "soldier"; // 0x17bd PushS
	var_72_bool = var_41_string == var_71_string; // 0x17be Eq
	if(var_72_bool == 0) goto Label_6082; // 0x17bf JumpB
	var_35_bool = 0; // 0x17c0 MovB
	return 4; // 0x17c1 Return
	
Label_6082:
	var_35_bool = 1; // 0x17c2 MovB
	return 4; // 0x17c3 Return
}


func_4987(var_55_bool, var_57_float)
{
	var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_bool = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; // 0x137b PushV
	GetPosition(var_68_cvector); // 0x137c ObjFunc
	GetEyesHeight(var_67_float); // 0x137e ObjFunc
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x1380 PushE
	var_76_float = var_76_float + var_67_float; // 0x1381 Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x1382 PopE
	GetPosition(var_69_cvector); // 0x1383 Func
	GetEyesHeight(var_67_float); // 0x1385 Func
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x1387 PushE
	var_77_float = var_77_float + var_67_float; // 0x1388 Add2
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x1389 PopE
	var_70_cvector = var_68_cvector - var_69_cvector; // 0x138a Sub2
	var_78_float = GetByIndex(var_70_cvector, 1); // 0x138b PushE
	var_78_float = 0; // 0x138c MovI
	SetByIndex(var_70_cvector, 1) = var_78_float; // 0x138d PopE
	var_79_int = var_70_cvector | var_70_cvector; // 0x138e Or
	var_80_float = sqrt(var_79_int); // 0x138f Sqrt
	var_70_cvector = var_70_cvector / var_70_cvector; // 0x1390 Div2
	var_71_cvector = -var_70_cvector; // 0x1391 Neg2
	var_81_float = var_70_cvector * var_57_float; // 0x1392 Mult
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0x1393 PushV
	var_84_cvector = CVector(0.0, 1.0, 0.0); // 0x1394 PushVec
	var_83_cvector = var_71_cvector ^ var_84_cvector; // 0x1395 Xor2
	func_5242(var_82_cvector, var_83_cvector); // 0x1396 NEW_2
	var_90_int = 25; // 0x1398 PushI
	var_91_float = var_82_cvector * var_90_int; // 0x1399 Mult
	var_92_int = var_81_float + var_91_float; // 0x139a Add
	var_93_cvector = CVector(0.0, 10.0, 0.0); // 0x139b PushVec
	var_72_cvector = var_92_int - var_93_cvector; // 0x139c Sub2
	var_73_cvector = var_69_cvector + var_72_cvector; // 0x139d Add2
	IsOverrideActive(var_74_bool); // 0x139e Func
	var_94_bool = var_74_bool; // 0x13a0 Push
	if(var_94_bool == 0) goto Label_5028; // 0x13a1 JumpB
	var_55_bool = 0; // 0x13a2 MovB
	return 18; // 0x13a3 Return
	
Label_5028:
	StopWorld(); // 0x13a4 Func
	var_95_bool = 1; // 0x13a6 PushB
	CameraTransit(var_73_cvector, var_71_cvector, var_95_bool); // 0x13a7 Func
	var_96_float = GetByIndex(var_72_cvector, 0); // 0x13a9 PushE
	var_97_float = GetByIndex(var_72_cvector, 2); // 0x13aa PushE
	Rotate(var_96_float, var_97_float); // 0x13ab Func
	var_98_bool = 0; // 0x13ad PushV
	func_6231(var_98_bool); // 0x13ae NEW_2
	if(var_98_bool == 0) goto Label_5042; // 0x13b0 JumpB
	goto Label_5050; // 0x13b1 Jump
	
Label_5050:
	CameraWaitForPlayFinish(); // 0x13ba Func
	ResumeWorld(); // 0x13bc Func
	var_55_bool = 1; // 0x13be MovB
	return 18; // 0x13bf Return
	
Label_5042:
	var_99_string = "head"; // 0x13b2 PushS
	HasAnimationTrack(var_75_bool, var_99_string); // 0x13b3 Func
	var_100_bool = var_75_bool; // 0x13b5 Push
	if(var_100_bool == 0) goto Label_5050; // 0x13b6 JumpB
	var_101_string = "head"; // 0x13b7 PushS
	LookAsyncCamera(var_101_string); // 0x13b8 Func
}


func_3965(var_1_object, var_2_object, var_4_string)
{
	var_215_bool = 0; var_216_bool = 0; var_217_cvector = CVector(0,0,0); var_218_bool = 0; var_219_bool = 0; var_220_cvector = CVector(0,0,0); // 0xf7d PushV
	var_1_object = 0; // 0xf7e TMovI
	
Label_3967:
	var_221_string = "all"; // 0xf7f PushS
	var_222_string = "attack_begin"; // 0xf80 PushS
	var_223_int = 1; // 0xf81 PushI
	var_224_int = var_1_object + var_223_int; // 0xf82 Add
	var_225_int = var_222_string + var_224_int; // 0xf83 Add
	HasAnimation(var_218_bool, var_221_string, var_225_int); // 0xf84 Func
	var_226_bool = var_218_bool == 0; // 0xf86 Not
	if(var_226_bool == 0) goto Label_3977; // 0xf87 JumpB
	goto Label_3980; // 0xf88 Jump
	
Label_3980:
	var_2_object = 0; // 0xf8c TMovI
	
Label_3981:
	var_227_string = "attack"; // 0xf8d PushS
	var_228_int = 1; // 0xf8e PushI
	var_229_int = var_2_object + var_228_int; // 0xf8f Add
	var_230_int = var_227_string + var_229_int; // 0xf90 Add
	IsExisting3DSound(var_219_bool, var_230_int); // 0xf91 Func
	var_231_bool = var_219_bool == 0; // 0xf93 Not
	if(var_231_bool == 0) goto Label_3990; // 0xf94 JumpB
	goto Label_3993; // 0xf95 Jump
	
Label_3993:
	var_232_string = "all"; // 0xf99 PushS
	var_233_string = "bjump"; // 0xf9a PushS
	GetAnimationOffset(var_220_cvector, var_232_string, var_233_string); // 0xf9b Func
	var_234_float = GetByIndex(var_220_cvector, 2); // 0xf9d PushE
	var_4_string = -var_234_float; // 0xf9e Neg2
	return 6; // 0xf9f Return
	
Label_3990:
	var_235_int = 1; // 0xf96 PushI
	var_2_object = var_2_object + var_235_int; // 0xf97 Add2
	goto Label_3981; // 0xf98 Jump
	
Label_3977:
	var_236_int = 1; // 0xf89 PushI
	var_1_object = var_1_object + var_236_int; // 0xf8a Add2
	goto Label_3967; // 0xf8b Jump
}


func_5503(var_360_bool, var_361_object)
{
	var_362_bool = 0; var_363_object = Obj(); // 0x1580 PushV
	var_363_object = var_361_object; // 0x1581 Mov
	func_5593(var_363_object); // 0x1582 NEW_2
	if(var_362_bool == 0) goto Label_5511; // 0x1584 JumpB
	var_360_bool = 1; // 0x1585 MovB
	return 0; // 0x1586 Return
	
Label_5511:
	var_360_bool = 0; // 0x1587 MovB
	return 0; // 0x1588 Return
}


func_5513(var_371_bool, var_372_object)
{
	var_373_bool = 0; var_374_object = Obj(); // 0x158a PushV
	var_374_object = var_372_object; // 0x158b Mov
	func_5600(var_374_object); // 0x158c NEW_2
	if(var_373_bool == 0) goto Label_5521; // 0x158e JumpB
	var_371_bool = 1; // 0x158f MovB
	return 0; // 0x1590 Return
	
Label_5521:
	var_371_bool = 0; // 0x1591 MovB
	return 0; // 0x1592 Return
}


func_5523(var_257_bool)
{
	var_259_int = 0; // 0x1594 PushV
	func_5333(var_259_int); // 0x1595 NEW_2
	var_260_int = 6; // 0x1597 PushI
	var_257_bool = var_259_int <= var_260_int; // 0x1598 LE2
	return 0; // 0x1599 Return
}


func_5530(var_151_bool)
{
	var_153_int = 0; // 0x159b PushV
	func_5333(var_153_int); // 0x159c NEW_2
	var_159_int = 1; // 0x159e PushI
	var_151_bool = var_153_int == var_159_int; // 0x159f Eq2
	return 0; // 0x15a0 Return
}


func_4510(var_0_bool, var_1_object, var_284_bool, var_285_object, var_286_float, var_287_float, var_288_bool, var_289_bool)
{
	var_290_bool = 0; var_291_bool = 0; var_292_object = Obj(); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_cvector = CVector(0,0,0); var_296_float = 0; var_297_object = Obj(); var_298_bool = 0; var_299_bool = 0; var_300_object = Obj(); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_float = 0; var_305_object = Obj(); // 0x119e PushV
	var_0_bool = 0; // 0x119f TMovB
	var_1_object = var_285_object; // 0x11a0 TMov
	var_299_bool = var_289_bool; // 0x11a1 Mov
	
Label_4514:
	var_306_bool = 0; var_307_object = Obj(); // 0x11a2 PushV
	var_307_object = var_285_object; // 0x11a3 Mov
	func_4650(var_306_bool, var_307_object); // 0x11a4 NEW_2
	var_310_bool = var_306_bool == 0; // 0x11a6 Not
	if(var_310_bool == 0) goto Label_4522; // 0x11a7 JumpB
	var_284_bool = 0; // 0x11a8 MovB
	return 16; // 0x11a9 Return
	
Label_4522:
	GetPosition(var_301_cvector); // 0x11aa ObjFunc
	GetPosition(var_302_cvector); // 0x11ac Func
	var_303_cvector = var_301_cvector - var_302_cvector; // 0x11ae Sub2
	var_304_float = var_303_cvector | var_303_cvector; // 0x11af Or2
	var_311_bool = 0; // 0x11b0 PushV
	var_311_bool = 0; // 0x11b1 MovB
	var_312_int = 0; // 0x11b2 PushI
	var_313_bool = var_287_float > var_312_int; // 0x11b3 GT
	if(var_313_bool == 0) goto Label_4537; // 0x11b4 JumpB
	var_314_float = var_287_float * var_287_float; // 0x11b5 Mult
	var_315_bool = var_304_float > var_314_float; // 0x11b6 GT
	if(var_315_bool == 0) goto Label_4537; // 0x11b7 JumpB
	var_311_bool = 1; // 0x11b8 MovB
	
Label_4537:
	if(var_311_bool == 0) goto Label_4542; // 0x11b9 JumpB
	Stop(); // 0x11ba Func
	var_284_bool = 0; // 0x11bc MovB
	return 16; // 0x11bd Return
	
Label_4542:
	var_316_float = var_286_float * var_286_float; // 0x11be Mult
	var_317_bool = var_304_float > var_316_float; // 0x11bf GT
	if(var_317_bool == 0) goto Label_4604; // 0x11c0 JumpB
	GetPFPosition(var_301_cvector); // 0x11c1 ObjFunc
	FindPathTo(var_305_object, var_301_cvector); // 0x11c3 Func
	var_318_bool = var_305_object != 0; // 0x11c5 NullNeq
	if(var_318_bool == 0) goto Label_4553; // 0x11c6 JumpB
	var_300_object = var_305_object; // 0x11c7 Mov
	var_305_object = 0; // 0x11c8 SetNull
	
Label_4553:
	var_319_bool = var_300_object != 0; // 0x11c9 NullNeq
	if(var_319_bool == 0) goto Label_4586; // 0x11ca JumpB
	var_320_bool = var_299_bool; // 0x11cb Push
	if(var_320_bool == 0) goto Label_4563; // 0x11cc JumpB
	var_299_bool = 0; // 0x11cd MovB
	RotatePath(var_300_object, var_298_bool); // 0x11ce Func
	var_321_bool = var_298_bool == 0; // 0x11d0 Not
	if(var_321_bool == 0) goto Label_4563; // 0x11d1 JumpB
	goto Label_4610; // 0x11d2 Jump
	
Label_4610:
	var_284_bool = !var_0_bool; // 0x1202 Not2
	return 16; // 0x1203 Return
	
Label_4563:
	var_322_int = 0; // 0x11d3 PushI
	var_323_float = 0.3; // 0x11d4 PushF
	SetTimer(var_322_int, var_323_float); // 0x11d5 Func
	var_324_string = ""; // 0x11d7 PushV
	func_4657(var_324_string); // 0x11d8 NEW_2
	var_325_string = ""; // 0x11da PushV
	func_4659(var_325_string); // 0x11db NEW_2
	FollowPath(var_300_object, var_288_bool, var_298_bool, var_324_string, var_325_string); // 0x11dd Func
	var_326_bool = var_298_bool == 0; // 0x11df Not
	if(var_326_bool == 0) goto Label_4584; // 0x11e0 JumpB
	var_327_bool = var_0_bool; // 0x11e1 PushT
	if(var_327_bool == 0) goto Label_4582; // 0x11e2 JumpB
	var_300_object = 0; // 0x11e3 SetNull
	goto Label_4610; // 0x11e4 Jump
	
Label_4582:
	goto Label_4609; // 0x11e6 Jump
	
Label_4609:
	goto Label_4514; // 0x1201 Jump
	
Label_4584:
	var_300_object = 0; // 0x11e8 SetNull
	goto Label_4602; // 0x11e9 Jump
	
Label_4602:
	var_305_object = 0; // 0x11fa SetNull
	goto Label_4608; // 0x11fb Jump
	
Label_4608:
	var_300_object = 0; // 0x1200 SetNull
	
Label_4586:
	var_328_int = 0; // 0x11ea PushI
	KillTimer(var_328_int); // 0x11eb Func
	var_329_float = 0.5; // 0x11ed PushF
	Sleep(var_329_float, var_298_bool); // 0x11ee Func
	var_330_bool = var_298_bool == 0; // 0x11f0 Not
	if(var_330_bool == 0) goto Label_4598; // 0x11f1 JumpB
	var_331_bool = var_0_bool; // 0x11f2 PushT
	if(var_331_bool == 0) goto Label_4598; // 0x11f3 JumpB
	var_300_object = 0; // 0x11f4 SetNull
	goto Label_4610; // 0x11f5 Jump
	
Label_4598:
	var_332_int = 0; // 0x11f6 PushI
	var_333_float = 0.3; // 0x11f7 PushF
	SetTimer(var_332_int, var_333_float); // 0x11f8 Func
	
Label_4604:
	var_334_int = 0; // 0x11fc PushI
	KillTimer(var_334_int); // 0x11fd Func
	goto Label_4610; // 0x11ff Jump
}


func_4000(var_0_bool, var_498_float, var_499_int)
{
	var_500_object = Obj(); var_501_float = 0; var_502_float = 0; var_503_object = Obj(); var_504_float = 0; var_505_float = 0; // 0xfa0 PushV
	var_506_float = 0.9; // 0xfa1 PushF
	var_507_float = var_498_float * var_506_float; // 0xfa2 Mult
	GetVictim(var_507_float, var_503_object); // 0xfa3 Func
	ReportAttack(var_0_bool); // 0xfa5 Func
	var_508_bool = var_503_object == var_0_bool; // 0xfa7 Eq
	if(var_508_bool == 0) goto Label_4037; // 0xfa8 JumpB
	var_509_float = 0; var_510_object = Obj(); var_511_int = 0; // 0xfa9 PushV
	var_510_object = var_503_object; // 0xfaa Mov
	var_511_int = var_499_int; // 0xfab Mov
	func_3730(var_511_int); // 0xfac NEW_2
	var_504_float = var_509_float; // 0xfad Mov
	var_512_float = 0; var_513_object = Obj(); var_514_float = 0; var_515_int = 0; // 0xfaf PushV
	var_513_object = var_503_object; // 0xfb0 Mov
	var_514_float = var_504_float; // 0xfb1 Mov
	var_516_int = 0; var_517_object = Obj(); var_518_int = 0; // 0xfb2 PushV
	var_517_object = var_503_object; // 0xfb3 Mov
	var_518_int = var_499_int; // 0xfb4 Mov
	func_3733(var_518_int); // 0xfb5 NEW_2
	var_515_int = var_516_int; // 0xfb6 Mov
	func_4707(var_512_float, var_513_object, var_514_float, var_515_int); // 0xfb8 NEW_2
	var_505_float = var_512_float; // 0xfb9 Mov
	var_577_int = 0; // 0xfbb PushV
	func_4383(var_577_int); // 0xfbc NEW_2
	ReportHit(var_0_bool, var_577_int, var_505_float, var_504_float); // 0xfbe Func
	var_578_object = Obj(); var_579_float = 0; // 0xfc0 PushV
	var_578_object = var_503_object; // 0xfc1 Mov
	var_579_float = var_505_float; // 0xfc2 Mov
	func_4390(); // 0xfc3 NEW_2
	
Label_4037:
	return 6; // 0xfc5 Return
}


func_5537(var_165_bool)
{
	var_167_int = 0; // 0x15a2 PushV
	func_5333(var_167_int); // 0x15a3 NEW_2
	var_168_int = 2; // 0x15a5 PushI
	var_165_bool = var_167_int == var_168_int; // 0x15a6 Eq2
	return 0; // 0x15a7 Return
}


func_5544(var_176_bool)
{
	var_178_int = 0; // 0x15a9 PushV
	func_5333(var_178_int); // 0x15aa NEW_2
	var_179_int = 3; // 0x15ac PushI
	var_176_bool = var_178_int == var_179_int; // 0x15ad Eq2
	return 0; // 0x15ae Return
}


func_3498(var_0_bool)
{
	var_70_object = Obj(); // 0xdaa PushV
	var_70_object = var_0_bool; // 0xdab MovT
	func_5166(var_70_object); // 0xdac NEW_2
	return 0; // 0xdae Return
}


func_5551(var_182_bool)
{
	var_184_int = 0; // 0x15b0 PushV
	func_5333(var_184_int); // 0x15b1 NEW_2
	var_185_int = 4; // 0x15b3 PushI
	var_182_bool = var_184_int == var_185_int; // 0x15b4 Eq2
	return 0; // 0x15b5 Return
}


func_5558(var_188_bool)
{
	var_190_int = 0; // 0x15b7 PushV
	func_5333(var_190_int); // 0x15b8 NEW_2
	var_191_int = 5; // 0x15ba PushI
	var_188_bool = var_190_int == var_191_int; // 0x15bb Eq2
	return 0; // 0x15bc Return
}


func_5565(var_198_bool)
{
	var_200_int = 0; // 0x15be PushV
	func_5333(var_200_int); // 0x15bf NEW_2
	var_201_int = 6; // 0x15c1 PushI
	var_198_bool = var_200_int == var_201_int; // 0x15c2 Eq2
	return 0; // 0x15c3 Return
}


func_5056()
{
	var_392_bool = 0; var_393_bool = 0; // 0x13c0 PushV
	var_394_bool = 1; // 0x13c1 PushB
	CameraSwitchToNormal(var_394_bool); // 0x13c2 Func
	var_395_bool = 0; // 0x13c4 PushV
	func_6231(var_395_bool); // 0x13c5 NEW_2
	if(var_395_bool == 0) goto Label_5065; // 0x13c7 JumpB
	goto Label_5073; // 0x13c8 Jump
	
Label_5073:
	return 2; // 0x13d1 Return
	
Label_5065:
	var_396_string = "head"; // 0x13c9 PushS
	HasAnimationTrack(var_393_bool, var_396_string); // 0x13ca Func
	var_397_bool = var_393_bool; // 0x13cc Push
	if(var_397_bool == 0) goto Label_5073; // 0x13cd JumpB
	var_398_string = "head"; // 0x13ce PushS
	UnlookAsync(var_398_string); // 0x13cf Func
}


func_6084(var_86_int, var_87_object)
{
	var_89_int = 0; var_90_object = Obj(); // 0x17c5 PushV
	var_90_object = var_87_object; // 0x17c6 Mov
	func_5991(var_89_int, var_90_object); // 0x17c7 NEW_2
	var_86_int = var_89_int; // 0x17c8 Mov
	return 0; // 0x17ca Return
}


func_5572(var_204_bool)
{
	var_206_int = 0; // 0x15c5 PushV
	func_5333(var_206_int); // 0x15c6 NEW_2
	var_207_int = 7; // 0x15c8 PushI
	var_204_bool = var_206_int == var_207_int; // 0x15c9 Eq2
	return 0; // 0x15ca Return
}


func_4039(var_0_bool, var_461_bool, var_462_float)
{
	var_463_int = 0; var_464_bool = 0; var_465_int = 0; var_466_string = ""; var_467_int = 0; var_468_bool = 0; var_469_int = 0; var_470_string = ""; // 0xfc7 PushV
	func_4378(var_470_string); // 0xfc9 NEW_2
	irand(var_467_int, var_470_string); // 0xfcb Func
	var_471_int = 1; // 0xfcd PushI
	var_467_int = var_467_int + var_471_int; // 0xfce Add2
	Face(var_0_bool); // 0xfcf Func
	var_472_bool = 1; // 0xfd1 PushB
	SetAttackState(var_472_bool); // 0xfd2 Func
	func_5351(); // 0xfd5 NEW_2
	var_477_string = "all"; // 0xfd7 PushS
	var_478_string = "attack_begin"; // 0xfd8 PushS
	var_479_int = var_478_string + var_467_int; // 0xfd9 Add
	PlayAnimation(var_477_string, var_479_int); // 0xfda Func
	WaitForAnimEnd(); // 0xfdc Func
	func_4346(var_469_int, var_470_string); // 0xfdf NEW_2
	var_495_bool = 0; var_496_object = Obj(); // 0xfe1 PushV
	var_496_object = var_0_bool; // 0xfe2 MovT
	func_4821(var_495_bool, var_496_object); // 0xfe3 NEW_2
	var_497_bool = var_495_bool == 0; // 0xfe5 Not
	if(var_497_bool == 0) goto Label_4075; // 0xfe6 JumpB
	StopAsync(); // 0xfe7 Func
	var_461_bool = 0; // 0xfe9 MovB
	return 8; // 0xfea Return
	
Label_4075:
	var_498_float = 0; var_499_int = 0; // 0xfeb PushV
	var_498_float = var_462_float; // 0xfec Mov
	var_499_int = var_467_int; // 0xfed Mov
	func_4000(var_470_string, var_498_float, var_499_int); // 0xfee NEW_2
	var_580_string = "all"; // 0xff0 PushS
	var_581_string = "attack_middle"; // 0xff1 PushS
	var_582_int = var_581_string + var_467_int; // 0xff2 Add
	HasAnimation(var_468_bool, var_580_string, var_582_int); // 0xff3 Func
	var_583_bool = var_468_bool; // 0xff5 Push
	if(var_583_bool == 0) goto Label_4156; // 0xff6 JumpB
	func_5351(); // 0xff8 NEW_2
	var_584_string = "all"; // 0xffa PushS
	var_585_string = "attack_middle"; // 0xffb PushS
	var_586_int = var_585_string + var_467_int; // 0xffc Add
	PlayAnimation(var_584_string, var_586_int); // 0xffd Func
	WaitForAnimEnd(); // 0xfff Func
	func_4378(var_470_string); // 0x1002 NEW_2
	var_587_bool = 0; var_588_object = Obj(); // 0x1004 PushV
	var_588_object = var_0_bool; // 0x1005 MovT
	func_4821(var_587_bool, var_588_object); // 0x1006 NEW_2
	var_589_bool = var_587_bool == 0; // 0x1008 Not
	if(var_589_bool == 0) goto Label_4110; // 0x1009 JumpB
	StopAsync(); // 0x100a Func
	var_461_bool = 0; // 0x100c MovB
	return 8; // 0x100d Return
	
Label_4110:
	var_590_float = 0; var_591_int = 0; // 0x100e PushV
	var_590_float = var_462_float; // 0x100f Mov
	var_591_int = var_467_int; // 0x1010 Mov
	func_4000(var_470_string, var_590_float, var_591_int); // 0x1011 NEW_2
	var_469_int = 1; // 0x1013 MovI
	
Label_4116:
	var_592_string = "attack_middle"; // 0x1014 PushS
	var_593_int = var_592_string + var_467_int; // 0x1015 Add
	var_594_string = "_"; // 0x1016 PushS
	var_595_int = var_593_int + var_594_string; // 0x1017 Add
	var_470_string = var_595_int + var_469_int; // 0x1018 Add2
	var_596_string = "all"; // 0x1019 PushS
	HasAnimation(var_468_bool, var_596_string, var_470_string); // 0x101a Func
	var_597_bool = var_468_bool == 0; // 0x101c Not
	if(var_597_bool == 0) goto Label_4127; // 0x101d JumpB
	goto Label_4156; // 0x101e Jump
	
Label_4156:
	var_598_bool = 0; // 0x103c PushB
	SetAttackState(var_598_bool); // 0x103d Func
	var_599_string = "all"; // 0x103f PushS
	var_600_string = "attack_end"; // 0x1040 PushS
	var_601_int = var_600_string + var_467_int; // 0x1041 Add
	PlayAnimation(var_599_string, var_601_int); // 0x1042 Func
	var_602_bool = 0; // 0x1044 PushV
	func_4392(var_602_bool); // 0x1045 NEW_2
	if(var_602_bool == 0) goto Label_4174; // 0x1047 JumpB
	var_603_bool = 0; var_604_float = 0; // 0x1048 PushV
	var_604_float = 0.75; // 0x1049 MovF
	func_4176(var_603_bool, var_604_float); // 0x104a NEW_2
	StopAsync(); // 0x104c Func
	
Label_4174:
	var_461_bool = 1; // 0x104e MovB
	return 8; // 0x104f Return
	
Label_4127:
	func_5351(); // 0x1020 NEW_2
	var_612_string = "all"; // 0x1022 PushS
	PlayAnimation(var_612_string, var_470_string); // 0x1023 Func
	WaitForAnimEnd(); // 0x1025 Func
	func_4378(var_470_string); // 0x1028 NEW_2
	var_613_bool = 0; var_614_object = Obj(); // 0x102a PushV
	var_614_object = var_0_bool; // 0x102b MovT
	func_4821(var_613_bool, var_614_object); // 0x102c NEW_2
	var_615_bool = var_613_bool == 0; // 0x102e Not
	if(var_615_bool == 0) goto Label_4148; // 0x102f JumpB
	StopAsync(); // 0x1030 Func
	var_461_bool = 0; // 0x1032 MovB
	return 8; // 0x1033 Return
	
Label_4148:
	var_616_float = 0; var_617_int = 0; // 0x1034 PushV
	var_616_float = var_462_float; // 0x1035 Mov
	var_617_int = var_467_int; // 0x1036 Mov
	func_4000(var_470_string, var_616_float, var_617_int); // 0x1037 NEW_2
	var_618_int = 1; // 0x1039 PushI
	var_469_int = var_469_int + var_618_int; // 0x103a Add2
	goto Label_4116; // 0x103b Jump
}


func_6091(var_125_object)
{
	var_126_object = Obj(); // 0x17cc PushV
	var_126_object = var_125_object; // 0x17cd Mov
	func_6001(var_126_object); // 0x17ce NEW_2
	return 0; // 0x17d0 Return
}


func_5579(var_341_bool)
{
	var_343_int = 0; // 0x15cc PushV
	func_5333(var_343_int); // 0x15cd NEW_2
	var_344_int = 8; // 0x15cf PushI
	var_341_bool = var_343_int == var_344_int; // 0x15d0 Eq2
	return 0; // 0x15d1 Return
}


func_6097(var_28_bool, var_29_object, var_30_object, var_31_float, var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x17d1 PushV
	var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0; // 0x17d2 PushV
	var_36_object = var_30_object; // 0x17d3 Mov
	var_37_bool = !var_32_bool; // 0x17d4 Not2
	func_6009(var_35_bool, var_36_object, var_37_bool); // 0x17d5 NEW_2
	var_73_bool = var_35_bool == 0; // 0x17d7 Not
	if(var_73_bool == 0) goto Label_6107; // 0x17d8 JumpB
	var_28_bool = 0; // 0x17d9 MovB
	return 2; // 0x17da Return
	
Label_6107:
	CanSee(var_34_bool, var_29_object); // 0x17db Func
	var_74_bool = 0; // 0x17dd PushV
	var_74_bool = 1; // 0x17de MovB
	var_75_bool = var_34_bool; // 0x17df Push
	if(var_75_bool == 0) goto Label_6121; // 0x17e0 JumpB
	var_76_float = 0; var_77_object = Obj(); // 0x17e1 PushV
	var_77_object = var_29_object; // 0x17e2 Mov
	func_4682(var_77_object); // 0x17e3 NEW_2
	var_84_float = var_31_float * var_31_float; // 0x17e5 Mult
	var_85_bool = var_76_float <= var_84_float; // 0x17e6 LE
	if(var_85_bool == 0) goto Label_6121; // 0x17e7 JumpB
	var_74_bool = 0; // 0x17e8 MovB
	
Label_6121:
	if(var_74_bool == 0) goto Label_6124; // 0x17e9 JumpB
	var_28_bool = 1; // 0x17ea MovB
	return 2; // 0x17eb Return
	
Label_6124:
	var_28_bool = 0; // 0x17ec MovB
	return 2; // 0x17ed Return
}


func_5586(var_352_bool)
{
	var_354_int = 0; // 0x15d3 PushV
	func_5333(var_354_int); // 0x15d4 NEW_2
	var_355_int = 9; // 0x15d6 PushI
	var_352_bool = var_354_int == var_355_int; // 0x15d7 Eq2
	return 0; // 0x15d8 Return
}


func_5074(var_400_bool, var_401_object)
{
	var_402_bool = 0; var_403_object = Obj(); var_404_float = 0; // 0x13d3 PushV
	var_403_object = var_401_object; // 0x13d4 Mov
	var_404_float = 70; // 0x13d5 MovI
	func_5082(var_403_object, var_404_float); // 0x13d6 NEW_2
	var_400_bool = var_402_bool; // 0x13d7 Mov
	return 0; // 0x13d9 Return
}


func_5593(var_362_bool)
{
	var_364_int = 0; // 0x15da PushV
	func_5333(var_364_int); // 0x15db NEW_2
	var_365_int = 10; // 0x15dd PushI
	var_362_bool = var_364_int == var_365_int; // 0x15de Eq2
	return 0; // 0x15df Return
}


func_5082(var_402_bool, var_404_float)
{
	var_405_float = 0; var_406_cvector = CVector(0,0,0); var_407_cvector = CVector(0,0,0); var_408_cvector = CVector(0,0,0); var_409_cvector = CVector(0,0,0); var_410_cvector = CVector(0,0,0); var_411_cvector = CVector(0,0,0); var_412_bool = 0; var_413_float = 0; var_414_cvector = CVector(0,0,0); var_415_cvector = CVector(0,0,0); var_416_cvector = CVector(0,0,0); var_417_cvector = CVector(0,0,0); var_418_cvector = CVector(0,0,0); var_419_cvector = CVector(0,0,0); var_420_bool = 0; // 0x13da PushV
	GetPosition(var_414_cvector); // 0x13db ObjFunc
	GetEyesHeight(var_413_float); // 0x13dd ObjFunc
	var_421_float = GetByIndex(var_414_cvector, 1); // 0x13df PushE
	var_421_float = var_421_float + var_413_float; // 0x13e0 Add2
	SetByIndex(var_414_cvector, 1) = var_421_float; // 0x13e1 PopE
	GetPosition(var_415_cvector); // 0x13e2 Func
	GetEyesHeight(var_413_float); // 0x13e4 Func
	var_422_float = GetByIndex(var_415_cvector, 1); // 0x13e6 PushE
	var_422_float = var_422_float + var_413_float; // 0x13e7 Add2
	SetByIndex(var_415_cvector, 1) = var_422_float; // 0x13e8 PopE
	var_416_cvector = var_414_cvector - var_415_cvector; // 0x13e9 Sub2
	var_423_float = GetByIndex(var_416_cvector, 1); // 0x13ea PushE
	var_423_float = 0; // 0x13eb MovI
	SetByIndex(var_416_cvector, 1) = var_423_float; // 0x13ec PopE
	var_424_int = var_416_cvector | var_416_cvector; // 0x13ed Or
	var_425_float = sqrt(var_424_int); // 0x13ee Sqrt
	var_416_cvector = var_416_cvector / var_416_cvector; // 0x13ef Div2
	var_417_cvector = -var_416_cvector; // 0x13f0 Neg2
	var_426_float = var_416_cvector * var_404_float; // 0x13f1 Mult
	var_427_cvector = CVector(0.0, 10.0, 0.0); // 0x13f2 PushVec
	var_418_cvector = var_426_float - var_427_cvector; // 0x13f3 Sub2
	var_419_cvector = var_415_cvector + var_418_cvector; // 0x13f4 Add2
	IsOverrideActive(var_420_bool); // 0x13f5 Func
	var_428_bool = var_420_bool; // 0x13f7 Push
	if(var_428_bool == 0) goto Label_5115; // 0x13f8 JumpB
	var_402_bool = 0; // 0x13f9 MovB
	return 16; // 0x13fa Return
	
Label_5115:
	StopWorld(); // 0x13fb Func
	var_429_bool = 1; // 0x13fd PushB
	CameraTransit(var_419_cvector, var_417_cvector, var_429_bool); // 0x13fe Func
	var_430_float = GetByIndex(var_418_cvector, 0); // 0x1400 PushE
	var_431_float = GetByIndex(var_418_cvector, 2); // 0x1401 PushE
	Rotate(var_430_float, var_431_float); // 0x1402 Func
	CameraWaitForPlayFinish(); // 0x1404 Func
	ResumeWorld(); // 0x1406 Func
	var_402_bool = 1; // 0x1408 MovB
	return 16; // 0x1409 Return
}


func_3039(var_2_object)
{
	var_20_int = 110; // 0xbdf PushI
	KillTimer(var_20_int); // 0xbe0 Func
	var_2_object = 0; // 0xbe2 TMovB
	func_3175(var_18_object, var_19_bool); // 0xbe4 NEW_2
	return 0; // 0xbe6 Return
}


func_5600(var_373_bool)
{
	var_375_int = 0; // 0x15e1 PushV
	func_5333(var_375_int); // 0x15e2 NEW_2
	var_376_int = 11; // 0x15e4 PushI
	var_373_bool = var_375_int == var_376_int; // 0x15e5 Eq2
	return 0; // 0x15e6 Return
}


func_5607(var_107_int)
{
	var_108_int = 0; var_109_int = 0; // 0x15e7 PushV
	var_110_string = "branch"; // 0x15e8 PushS
	GetVariable(var_110_string, var_109_int); // 0x15e9 Func
	var_111_int = 0; // 0x15eb PushI
	var_112_bool = var_109_int == var_111_int; // 0x15ec Eq
	if(var_112_bool == 0) goto Label_5617; // 0x15ed JumpB
	var_107_int = 1; // 0x15ee MovI
	return 2; // 0x15ef Return
	
Label_5617:
	var_113_int = 1; // 0x15f1 PushI
	var_114_bool = var_109_int == var_113_int; // 0x15f2 Eq
	if(var_114_bool == 0) goto Label_5622; // 0x15f3 JumpB
	var_107_int = 2; // 0x15f4 MovI
	return 2; // 0x15f5 Return
	
Label_5622:
	var_107_int = 3; // 0x15f6 MovI
	return 2; // 0x15f7 Return
}


func_3047(var_2_object)
{
	var_69_int = 110; // 0xbe7 PushI
	KillTimer(var_69_int); // 0xbe8 Func
	var_2_object = 0; // 0xbea TMovB
	func_3182(var_23_bool, var_24_int); // 0xbec NEW_2
	return 0; // 0xbee Return
}


func_6126(var_22_int)
{
	var_22_int = 0; // 0x17ef MovI
	return 0; // 0x17f0 Return
}


func_6129()
{
	return 0; // 0x17f2 Return
}


func_6131(var_129_int, var_130_string, var_131_object)
{
	var_132_string = "killme"; // 0x17f4 PushS
	var_133_bool = var_130_string == var_132_string; // 0x17f5 Eq
	if(var_133_bool == 0) goto Label_6141; // 0x17f6 JumpB
	var_134_int = 0; var_135_object = Obj(); // 0x17f7 PushV
	var_135_object = var_131_object; // 0x17f8 Mov
	func_6153(var_134_int, var_135_object); // 0x17f9 NEW_2
	var_129_int = var_134_int; // 0x17fa Mov
	return 0; // 0x17fc Return
	
Label_6141:
	var_129_int = 0; // 0x17fd MovI
	return 0; // 0x17fe Return
}


func_3064(var_2_object, var_20_object)
{
	var_21_bool = 0; var_22_int = 0; var_23_bool = 0; var_24_int = 0; // 0xbf8 PushV
	var_25_bool = 0; var_26_object = Obj(); // 0xbf9 PushV
	var_26_object = var_20_object; // 0xbfa Mov
	func_4821(var_25_bool, var_26_object); // 0xbfb NEW_2
	var_59_bool = var_25_bool == 0; // 0xbfd Not
	if(var_59_bool == 0) goto Label_3072; // 0xbfe JumpB
	return 4; // 0xbff Return
	
Label_3072:
	var_60_object = var_2_object; // 0xc00 PushT
	if(var_60_object == 0) goto Label_3075; // 0xc01 JumpB
	return 4; // 0xc02 Return
	
Label_3075:
	IsPlayerActor(var_20_object, var_23_bool); // 0xc03 Func
	var_61_bool = var_23_bool == 0; // 0xc05 Not
	if(var_61_bool == 0) goto Label_3080; // 0xc06 JumpB
	return 4; // 0xc07 Return
	
Label_3080:
	var_62_int = 0; var_63_object = Obj(); // 0xc08 PushV
	var_63_object = var_20_object; // 0xc09 Mov
	func_5974(var_63_object); // 0xc0a NEW_2
	var_24_int = var_62_int; // 0xc0b Mov
	var_65_int = 0; // 0xc0d PushI
	var_66_bool = var_24_int > var_65_int; // 0xc0e GT
	if(var_66_bool == 0) goto Label_3103; // 0xc0f JumpB
	var_67_int = 1; // 0xc10 PushI
	var_68_bool = var_24_int > var_67_int; // 0xc11 GT
	if(var_68_bool == 0) goto Label_3094; // 0xc12 JumpB
	func_3047(var_24_int); // 0xc14 NEW_2
	
Label_3094:
	var_70_object = Obj(); // 0xc16 PushV
	var_70_object = var_20_object; // 0xc17 Mov
	func_5983(var_70_object); // 0xc18 NEW_2
	var_2_object = 1; // 0xc1a TMovB
	var_135_int = 110; // 0xc1b PushI
	var_136_float = 10.0; // 0xc1c PushF
	SetTimer(var_135_int, var_136_float); // 0xc1d Func
	
Label_3103:
	return 4; // 0xc1f Return
}


func_5630(var_36_object)
{
	var_37_int = 0; // 0x15ff PushV
	func_5624(var_37_int); // 0x1600 NEW_2
	var_41_int = 1; // 0x1602 PushI
	var_42_bool = var_37_int == var_41_int; // 0x1603 Eq
	if(var_42_bool == 0) goto Label_5640; // 0x1604 JumpB
	WorkWithCorpse(var_36_object); // 0x1605 Func
	goto Label_5642; // 0x1607 Jump
	
Label_5642:
	return 0; // 0x160a Return
	
Label_5640:
	Barter(var_36_object); // 0x1608 Func
}


func_6143(var_177_string, var_178_object)
{
	var_179_string = "killme"; // 0x1800 PushS
	var_180_bool = var_177_string == var_179_string; // 0x1801 Eq
	if(var_180_bool == 0) goto Label_6152; // 0x1802 JumpB
	var_181_object = Obj(); // 0x1803 PushV
	var_181_object = var_178_object; // 0x1804 Mov
	func_6171(var_181_object); // 0x1805 NEW_2
	return 0; // 0x1807 Return
	
Label_6152:
	return 0; // 0x1808 Return
}


