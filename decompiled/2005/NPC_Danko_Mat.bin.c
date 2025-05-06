task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	var_18_int = 1; // 0xa7 PushI
	if(var_18_int == 0) goto Label_258; // 0xa8 JumpB
	func_2678(); // 0xaa NEW_2
	var_20_int = 36960; // 0xac PushI
	var_21_bool = var_16_bool == var_20_int; // 0xad Eq
	if(var_21_bool == 0) goto Label_200; // 0xae JumpB
	var_22_string = ""; // 0xaf PushV
	var_22_string = "Neutral"; // 0xb0 MovS
	func_144(var_17_cvector, var_22_string); // 0xb1 NEW_2
	var_39_int = 535284; // 0xb3 PushI
	SetMessage(var_39_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_40_int = 535285; // 0xb8 PushI
	var_41_int = 36962; // 0xb9 PushI
	var_42_int = 36961; // 0xba PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0xbb TObjFunc
	var_43_int = 535292; // 0xbd PushI
	var_44_int = -1; // 0xbe PushI
	var_45_int = 36968; // 0xbf PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xc0 TObjFunc
	var_46_int = 535293; // 0xc2 PushI
	var_47_int = -1; // 0xc3 PushI
	var_48_int = 36969; // 0xc4 PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xc5 TObjFunc
	return 0; // 0xc7 Return
	
Label_200:
	var_49_int = 36962; // 0xc8 PushI
	var_50_bool = var_16_bool == var_49_int; // 0xc9 Eq
	if(var_50_bool == 0) goto Label_223; // 0xca JumpB
	var_51_string = ""; // 0xcb PushV
	var_51_string = "Neutral"; // 0xcc MovS
	func_144(var_17_cvector, var_51_string); // 0xcd NEW_2
	var_52_int = 535286; // 0xcf PushI
	SetMessage(var_52_int); // 0xd0 TObjFunc
	ClearReplies(); // 0xd2 TObjFunc
	var_53_int = 535287; // 0xd4 PushI
	var_54_int = 36964; // 0xd5 PushI
	var_55_int = 36963; // 0xd6 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xd7 TObjFunc
	var_56_int = 535291; // 0xd9 PushI
	var_57_int = -1; // 0xda PushI
	var_58_int = 36967; // 0xdb PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xdc TObjFunc
	return 0; // 0xde Return
	
Label_223:
	var_59_int = 36964; // 0xdf PushI
	var_60_bool = var_16_bool == var_59_int; // 0xe0 Eq
	if(var_60_bool == 0) goto Label_246; // 0xe1 JumpB
	var_61_string = ""; // 0xe2 PushV
	var_61_string = "Neutral"; // 0xe3 MovS
	func_144(var_17_cvector, var_61_string); // 0xe4 NEW_2
	var_62_int = 535288; // 0xe6 PushI
	SetMessage(var_62_int); // 0xe7 TObjFunc
	ClearReplies(); // 0xe9 TObjFunc
	var_63_int = 535289; // 0xeb PushI
	var_64_int = -1; // 0xec PushI
	var_65_int = 36965; // 0xed PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xee TObjFunc
	var_66_int = 535290; // 0xf0 PushI
	var_67_int = -1; // 0xf1 PushI
	var_68_int = 36966; // 0xf2 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xf3 TObjFunc
	return 0; // 0xf5 Return
	
Label_246:
	var_3_string = 1; // 0xf6 TMovB
	var_69_bool = 0; // 0xf7 PushV
	func_2845(var_69_bool); // 0xf8 NEW_2
	if(var_69_bool == 0) goto Label_254; // 0xfa JumpB
	lshStopAnimation(); // 0xfb Func
	goto Label_256; // 0xfd Jump
	
Label_256:
	return 0; // 0x100 Return
	
Label_254:
	StopAnimation(); // 0xfe Func
	
Label_258:
	return 0; // 0x102 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_cvector)
{
	var_18_int = 1; // 0x243 PushI
	if(var_18_int == 0) goto Label_1883; // 0x244 JumpB
	func_2678(); // 0x246 NEW_2
	var_20_int = 14805; // 0x248 PushI
	var_21_bool = var_17_cvector == var_20_int; // 0x249 Eq
	if(var_21_bool == 0) goto Label_592; // 0x24a JumpB
	var_22_object = Obj(); var_23_object = Obj(); // 0x24b PushV
	var_22_object = var_1_object; // 0x24c MovT
	var_23_object = var_0_object; // 0x24d MovT
	func_2914(); // 0x24e NEW_2
	
Label_592:
	var_49_int = 14811; // 0x250 PushI
	var_50_bool = var_17_cvector == var_49_int; // 0x251 Eq
	if(var_50_bool == 0) goto Label_605; // 0x252 JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0x253 PushV
	var_51_object = var_1_object; // 0x254 MovT
	var_52_object = var_0_object; // 0x255 MovT
	func_2923(); // 0x256 NEW_2
	var_85_object = Obj(); var_86_object = Obj(); // 0x258 PushV
	var_85_object = var_1_object; // 0x259 MovT
	var_86_object = var_0_object; // 0x25a MovT
	func_3036(); // 0x25b NEW_2
	
Label_605:
	var_111_int = 14812; // 0x25d PushI
	var_112_bool = var_17_cvector == var_111_int; // 0x25e Eq
	if(var_112_bool == 0) goto Label_613; // 0x25f JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x260 PushV
	var_113_object = var_1_object; // 0x261 MovT
	var_114_object = var_0_object; // 0x262 MovT
	func_2951(); // 0x263 NEW_2
	
Label_613:
	var_117_int = 14816; // 0x265 PushI
	var_118_bool = var_17_cvector == var_117_int; // 0x266 Eq
	if(var_118_bool == 0) goto Label_636; // 0x267 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x268 PushV
	var_119_object = var_1_object; // 0x269 MovT
	var_120_object = var_0_object; // 0x26a MovT
	func_2957(); // 0x26b NEW_2
	var_140_object = Obj(); var_141_object = Obj(); // 0x26d PushV
	var_140_object = var_1_object; // 0x26e MovT
	var_141_object = var_0_object; // 0x26f MovT
	func_2873(); // 0x270 NEW_2
	var_146_object = Obj(); var_147_object = Obj(); // 0x272 PushV
	var_146_object = var_1_object; // 0x273 MovT
	var_147_object = var_0_object; // 0x274 MovT
	func_2895(); // 0x275 NEW_2
	var_150_object = Obj(); var_151_object = Obj(); // 0x277 PushV
	var_150_object = var_1_object; // 0x278 MovT
	var_151_object = var_0_object; // 0x279 MovT
	func_2879(); // 0x27a NEW_2
	
Label_636:
	var_157_int = 13526; // 0x27c PushI
	var_158_bool = var_17_cvector == var_157_int; // 0x27d Eq
	if(var_158_bool == 0) goto Label_644; // 0x27e JumpB
	var_159_object = Obj(); var_160_object = Obj(); // 0x27f PushV
	var_159_object = var_1_object; // 0x280 MovT
	var_160_object = var_0_object; // 0x281 MovT
	func_2981(); // 0x282 NEW_2
	
Label_644:
	var_163_int = 13517; // 0x284 PushI
	var_164_bool = var_17_cvector == var_163_int; // 0x285 Eq
	if(var_164_bool == 0) goto Label_652; // 0x286 JumpB
	var_165_object = Obj(); var_166_object = Obj(); // 0x287 PushV
	var_165_object = var_1_object; // 0x288 MovT
	var_166_object = var_0_object; // 0x289 MovT
	func_2987(); // 0x28a NEW_2
	
Label_652:
	var_169_int = 14996; // 0x28c PushI
	var_170_bool = var_17_cvector == var_169_int; // 0x28d Eq
	if(var_170_bool == 0) goto Label_665; // 0x28e JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0x28f PushV
	var_171_object = var_1_object; // 0x290 MovT
	var_172_object = var_0_object; // 0x291 MovT
	func_2993(); // 0x292 NEW_2
	var_175_object = Obj(); var_176_object = Obj(); // 0x294 PushV
	var_175_object = var_1_object; // 0x295 MovT
	var_176_object = var_0_object; // 0x296 MovT
	func_2847(); // 0x297 NEW_2
	
Label_665:
	var_196_int = 15004; // 0x299 PushI
	var_197_bool = var_17_cvector == var_196_int; // 0x29a Eq
	if(var_197_bool == 0) goto Label_673; // 0x29b JumpB
	var_198_object = Obj(); var_199_object = Obj(); // 0x29c PushV
	var_198_object = var_1_object; // 0x29d MovT
	var_199_object = var_0_object; // 0x29e MovT
	func_2957(); // 0x29f NEW_2
	
Label_673:
	var_200_int = 14817; // 0x2a1 PushI
	var_201_bool = var_17_cvector == var_200_int; // 0x2a2 Eq
	if(var_201_bool == 0) goto Label_686; // 0x2a3 JumpB
	var_202_object = Obj(); var_203_object = Obj(); // 0x2a4 PushV
	var_202_object = var_1_object; // 0x2a5 MovT
	var_203_object = var_0_object; // 0x2a6 MovT
	func_2999(); // 0x2a7 NEW_2
	var_206_object = Obj(); var_207_object = Obj(); // 0x2a9 PushV
	var_206_object = var_1_object; // 0x2aa MovT
	var_207_object = var_0_object; // 0x2ab MovT
	func_2847(); // 0x2ac NEW_2
	
Label_686:
	var_208_int = 15002; // 0x2ae PushI
	var_209_bool = var_17_cvector == var_208_int; // 0x2af Eq
	if(var_209_bool == 0) goto Label_699; // 0x2b0 JumpB
	var_210_object = Obj(); var_211_object = Obj(); // 0x2b1 PushV
	var_210_object = var_1_object; // 0x2b2 MovT
	var_211_object = var_0_object; // 0x2b3 MovT
	func_2957(); // 0x2b4 NEW_2
	var_212_object = Obj(); var_213_object = Obj(); // 0x2b6 PushV
	var_212_object = var_1_object; // 0x2b7 MovT
	var_213_object = var_0_object; // 0x2b8 MovT
	func_2879(); // 0x2b9 NEW_2
	
Label_699:
	var_214_int = 15007; // 0x2bb PushI
	var_215_bool = var_17_cvector == var_214_int; // 0x2bc Eq
	if(var_215_bool == 0) goto Label_722; // 0x2bd JumpB
	var_216_object = Obj(); var_217_object = Obj(); // 0x2be PushV
	var_216_object = var_1_object; // 0x2bf MovT
	var_217_object = var_0_object; // 0x2c0 MovT
	func_3030(); // 0x2c1 NEW_2
	var_222_object = Obj(); var_223_object = Obj(); // 0x2c3 PushV
	var_222_object = var_1_object; // 0x2c4 MovT
	var_223_object = var_0_object; // 0x2c5 MovT
	func_2895(); // 0x2c6 NEW_2
	var_224_object = Obj(); var_225_object = Obj(); // 0x2c8 PushV
	var_224_object = var_1_object; // 0x2c9 MovT
	var_225_object = var_0_object; // 0x2ca MovT
	func_3011(); // 0x2cb NEW_2
	var_237_object = Obj(); var_238_object = Obj(); // 0x2cd PushV
	var_237_object = var_1_object; // 0x2ce MovT
	var_238_object = var_0_object; // 0x2cf MovT
	func_2901(var_238_object); // 0x2d0 NEW_2
	
Label_722:
	var_277_int = 37663; // 0x2d2 PushI
	var_278_bool = var_17_cvector == var_277_int; // 0x2d3 Eq
	if(var_278_bool == 0) goto Label_730; // 0x2d4 JumpB
	var_279_object = Obj(); var_280_object = Obj(); // 0x2d5 PushV
	var_279_object = var_1_object; // 0x2d6 MovT
	var_280_object = var_0_object; // 0x2d7 MovT
	func_3021(); // 0x2d8 NEW_2
	
Label_730:
	var_291_int = 37664; // 0x2da PushI
	var_292_bool = var_17_cvector == var_291_int; // 0x2db Eq
	if(var_292_bool == 0) goto Label_738; // 0x2dc JumpB
	var_293_object = Obj(); var_294_object = Obj(); // 0x2dd PushV
	var_293_object = var_1_object; // 0x2de MovT
	var_294_object = var_0_object; // 0x2df MovT
	func_3021(); // 0x2e0 NEW_2
	
Label_738:
	var_295_int = 14737; // 0x2e2 PushI
	var_296_bool = var_16_bool == var_295_int; // 0x2e3 Eq
	if(var_296_bool == 0) goto Label_919; // 0x2e4 JumpB
	var_297_bool = 0; // 0x2e5 PushV
	var_297_bool = 0; // 0x2e6 MovB
	var_298_bool = 0; var_299_object = Obj(); // 0x2e7 PushV
	var_299_object = var_1_object; // 0x2e8 MovT
	func_3076(var_299_object); // 0x2e9 NEW_2
	if(var_298_bool == 0) goto Label_754; // 0x2eb JumpB
	var_306_bool = 0; var_307_object = Obj(); // 0x2ec PushV
	var_307_object = var_1_object; // 0x2ed MovT
	func_3088(var_307_object); // 0x2ee NEW_2
	if(var_306_bool == 0) goto Label_754; // 0x2f0 JumpB
	var_297_bool = 1; // 0x2f1 MovB
	
Label_754:
	if(var_297_bool == 0) goto Label_785; // 0x2f2 JumpB
	var_312_object = Obj(); var_313_object = Obj(); // 0x2f3 PushV
	var_312_object = var_1_object; // 0x2f4 MovT
	var_313_object = var_0_object; // 0x2f5 MovT
	func_2908(); // 0x2f6 NEW_2
	var_316_object = Obj(); var_317_object = Obj(); // 0x2f8 PushV
	var_316_object = var_1_object; // 0x2f9 MovT
	var_317_object = var_0_object; // 0x2fa MovT
	func_3005(); // 0x2fb NEW_2
	var_320_string = ""; // 0x2fd PushV
	var_320_string = "Neutral"; // 0x2fe MovS
	func_556(var_17_cvector, var_320_string); // 0x2ff NEW_2
	var_337_int = 513496; // 0x301 PushI
	SetMessage(var_337_int); // 0x302 TObjFunc
	ClearReplies(); // 0x304 TObjFunc
	var_338_int = 513504; // 0x306 PushI
	var_339_int = 14773; // 0x307 PushI
	var_340_int = 14746; // 0x308 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x309 TObjFunc
	var_341_int = 513505; // 0x30b PushI
	var_342_int = 14748; // 0x30c PushI
	var_343_int = 14747; // 0x30d PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x30e TObjFunc
	return 0; // 0x310 Return
	
Label_785:
	var_344_object = Obj(); var_345_object = Obj(); // 0x311 PushV
	var_344_object = var_1_object; // 0x312 MovT
	var_345_object = var_0_object; // 0x313 MovT
	func_3005(); // 0x314 NEW_2
	var_346_string = ""; // 0x316 PushV
	var_346_string = "Neutral"; // 0x317 MovS
	func_556(var_17_cvector, var_346_string); // 0x318 NEW_2
	var_347_int = 512350; // 0x31a PushI
	SetMessage(var_347_int); // 0x31b TObjFunc
	ClearReplies(); // 0x31d TObjFunc
	var_348_bool = 0; // 0x31f PushV
	var_348_bool = 0; // 0x320 MovB
	var_349_bool = 0; // 0x321 PushV
	var_349_bool = 0; // 0x322 MovB
	var_350_bool = 0; var_351_object = Obj(); // 0x323 PushV
	var_351_object = var_1_object; // 0x324 MovT
	func_3100(var_351_object); // 0x325 NEW_2
	if(var_350_bool == 0) goto Label_814; // 0x327 JumpB
	var_356_bool = 0; var_357_object = Obj(); // 0x328 PushV
	var_357_object = var_1_object; // 0x329 MovT
	func_3112(var_356_bool, var_357_object); // 0x32a NEW_2
	if(var_356_bool == 0) goto Label_814; // 0x32c JumpB
	var_349_bool = 1; // 0x32d MovB
	
Label_814:
	if(var_349_bool == 0) goto Label_821; // 0x32e JumpB
	var_365_bool = 0; var_366_object = Obj(); // 0x32f PushV
	var_366_object = var_1_object; // 0x330 MovT
	func_3123(var_366_object); // 0x331 NEW_2
	if(var_365_bool == 0) goto Label_821; // 0x333 JumpB
	var_348_bool = 1; // 0x334 MovB
	
Label_821:
	if(var_348_bool == 0) goto Label_827; // 0x335 JumpB
	var_371_int = 513563; // 0x336 PushI
	var_372_int = 14813; // 0x337 PushI
	var_373_int = 14812; // 0x338 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x339 TObjFunc
	
Label_827:
	var_374_bool = 0; // 0x33b PushV
	var_374_bool = 0; // 0x33c MovB
	var_375_bool = 0; var_376_object = Obj(); // 0x33d PushV
	var_376_object = var_1_object; // 0x33e MovT
	func_3135(var_376_object); // 0x33f NEW_2
	if(var_375_bool == 0) goto Label_840; // 0x341 JumpB
	var_381_bool = 0; var_382_object = Obj(); // 0x342 PushV
	var_382_object = var_1_object; // 0x343 MovT
	func_3064(var_382_object); // 0x344 NEW_2
	if(var_381_bool == 0) goto Label_840; // 0x346 JumpB
	var_374_bool = 1; // 0x347 MovB
	
Label_840:
	if(var_374_bool == 0) goto Label_846; // 0x348 JumpB
	var_387_int = 512366; // 0x349 PushI
	var_388_int = 13527; // 0x34a PushI
	var_389_int = 13526; // 0x34b PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x34c TObjFunc
	
Label_846:
	var_390_bool = 0; var_391_object = Obj(); // 0x34e PushV
	var_391_object = var_1_object; // 0x34f MovT
	func_3147(var_391_object); // 0x350 NEW_2
	if(var_390_bool == 0) goto Label_856; // 0x352 JumpB
	var_396_int = 512357; // 0x353 PushI
	var_397_int = 13518; // 0x354 PushI
	var_398_int = 13517; // 0x355 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x356 TObjFunc
	
Label_856:
	var_399_bool = 0; // 0x358 PushV
	var_399_bool = 0; // 0x359 MovB
	var_400_bool = 0; var_401_object = Obj(); // 0x35a PushV
	var_401_object = var_1_object; // 0x35b MovT
	func_3159(var_401_object); // 0x35c NEW_2
	if(var_400_bool == 0) goto Label_869; // 0x35e JumpB
	var_406_bool = 0; var_407_object = Obj(); // 0x35f PushV
	var_407_object = var_1_object; // 0x360 MovT
	func_3183(var_407_object); // 0x361 NEW_2
	if(var_406_bool == 0) goto Label_869; // 0x363 JumpB
	var_399_bool = 1; // 0x364 MovB
	
Label_869:
	if(var_399_bool == 0) goto Label_875; // 0x365 JumpB
	var_412_int = 513752; // 0x366 PushI
	var_413_int = 14997; // 0x367 PushI
	var_414_int = 14996; // 0x368 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x369 TObjFunc
	
Label_875:
	var_415_bool = 0; // 0x36b PushV
	var_415_bool = 0; // 0x36c MovB
	var_416_bool = 0; var_417_object = Obj(); // 0x36d PushV
	var_417_object = var_1_object; // 0x36e MovT
	func_3171(var_417_object); // 0x36f NEW_2
	if(var_416_bool == 0) goto Label_888; // 0x371 JumpB
	var_422_bool = 0; var_423_object = Obj(); // 0x372 PushV
	var_423_object = var_1_object; // 0x373 MovT
	func_3195(var_423_object); // 0x374 NEW_2
	if(var_422_bool == 0) goto Label_888; // 0x376 JumpB
	var_415_bool = 1; // 0x377 MovB
	
Label_888:
	if(var_415_bool == 0) goto Label_894; // 0x378 JumpB
	var_428_int = 513568; // 0x379 PushI
	var_429_int = 14818; // 0x37a PushI
	var_430_int = 14817; // 0x37b PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x37c TObjFunc
	
Label_894:
	var_431_bool = 0; // 0x37e PushV
	var_431_bool = 0; // 0x37f MovB
	var_432_bool = 0; var_433_object = Obj(); // 0x380 PushV
	var_433_object = var_1_object; // 0x381 MovT
	func_3219(var_432_bool, var_433_object); // 0x382 NEW_2
	if(var_432_bool == 0) goto Label_907; // 0x384 JumpB
	var_437_bool = 0; var_438_object = Obj(); // 0x385 PushV
	var_438_object = var_1_object; // 0x386 MovT
	func_3052(var_438_object); // 0x387 NEW_2
	if(var_437_bool == 0) goto Label_907; // 0x389 JumpB
	var_431_bool = 1; // 0x38a MovB
	
Label_907:
	if(var_431_bool == 0) goto Label_913; // 0x38b JumpB
	var_443_int = 513766; // 0x38c PushI
	var_444_int = 15006; // 0x38d PushI
	var_445_int = 15005; // 0x38e PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x38f TObjFunc
	
Label_913:
	var_446_int = 512351; // 0x391 PushI
	var_447_int = -1; // 0x392 PushI
	var_448_int = 13510; // 0x393 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x394 TObjFunc
	return 0; // 0x396 Return
	
Label_919:
	var_449_int = 15006; // 0x397 PushI
	var_450_bool = var_16_bool == var_449_int; // 0x398 Eq
	if(var_450_bool == 0) goto Label_942; // 0x399 JumpB
	var_451_string = ""; // 0x39a PushV
	var_451_string = "Untrust"; // 0x39b MovS
	func_556(var_17_cvector, var_451_string); // 0x39c NEW_2
	var_452_int = 513767; // 0x39e PushI
	SetMessage(var_452_int); // 0x39f TObjFunc
	ClearReplies(); // 0x3a1 TObjFunc
	var_453_int = 535938; // 0x3a3 PushI
	var_454_int = 37660; // 0x3a4 PushI
	var_455_int = 37659; // 0x3a5 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x3a6 TObjFunc
	var_456_int = 535937; // 0x3a8 PushI
	var_457_int = 37662; // 0x3a9 PushI
	var_458_int = 37658; // 0x3aa PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x3ab TObjFunc
	return 0; // 0x3ad Return
	
Label_942:
	var_459_int = 37662; // 0x3ae PushI
	var_460_bool = var_16_bool == var_459_int; // 0x3af Eq
	if(var_460_bool == 0) goto Label_965; // 0x3b0 JumpB
	var_461_string = ""; // 0x3b1 PushV
	var_461_string = "Untrust"; // 0x3b2 MovS
	func_556(var_17_cvector, var_461_string); // 0x3b3 NEW_2
	var_462_int = 535941; // 0x3b5 PushI
	SetMessage(var_462_int); // 0x3b6 TObjFunc
	ClearReplies(); // 0x3b8 TObjFunc
	var_463_int = 535942; // 0x3ba PushI
	var_464_int = -1; // 0x3bb PushI
	var_465_int = 37663; // 0x3bc PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x3bd TObjFunc
	var_466_int = 535943; // 0x3bf PushI
	var_467_int = -1; // 0x3c0 PushI
	var_468_int = 37664; // 0x3c1 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x3c2 TObjFunc
	return 0; // 0x3c4 Return
	
Label_965:
	var_469_int = 37660; // 0x3c5 PushI
	var_470_bool = var_16_bool == var_469_int; // 0x3c6 Eq
	if(var_470_bool == 0) goto Label_983; // 0x3c7 JumpB
	var_471_string = ""; // 0x3c8 PushV
	var_471_string = "Neutral"; // 0x3c9 MovS
	func_556(var_17_cvector, var_471_string); // 0x3ca NEW_2
	var_472_int = 535939; // 0x3cc PushI
	SetMessage(var_472_int); // 0x3cd TObjFunc
	ClearReplies(); // 0x3cf TObjFunc
	var_473_int = 513768; // 0x3d1 PushI
	var_474_int = -1; // 0x3d2 PushI
	var_475_int = 15007; // 0x3d3 PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x3d4 TObjFunc
	return 0; // 0x3d6 Return
	
Label_983:
	var_476_int = 14818; // 0x3d7 PushI
	var_477_bool = var_16_bool == var_476_int; // 0x3d8 Eq
	if(var_477_bool == 0) goto Label_1001; // 0x3d9 JumpB
	var_478_string = ""; // 0x3da PushV
	var_478_string = "Neutral"; // 0x3db MovS
	func_556(var_17_cvector, var_478_string); // 0x3dc NEW_2
	var_479_int = 513569; // 0x3de PushI
	SetMessage(var_479_int); // 0x3df TObjFunc
	ClearReplies(); // 0x3e1 TObjFunc
	var_480_int = 513570; // 0x3e3 PushI
	var_481_int = 14820; // 0x3e4 PushI
	var_482_int = 14819; // 0x3e5 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x3e6 TObjFunc
	return 0; // 0x3e8 Return
	
Label_1001:
	var_483_int = 14820; // 0x3e9 PushI
	var_484_bool = var_16_bool == var_483_int; // 0x3ea Eq
	if(var_484_bool == 0) goto Label_1024; // 0x3eb JumpB
	var_485_string = ""; // 0x3ec PushV
	var_485_string = "Rage"; // 0x3ed MovS
	func_556(var_17_cvector, var_485_string); // 0x3ee NEW_2
	var_486_int = 513571; // 0x3f0 PushI
	SetMessage(var_486_int); // 0x3f1 TObjFunc
	ClearReplies(); // 0x3f3 TObjFunc
	var_487_int = 513572; // 0x3f5 PushI
	var_488_int = 15001; // 0x3f6 PushI
	var_489_int = 14821; // 0x3f7 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x3f8 TObjFunc
	var_490_int = 535934; // 0x3fa PushI
	var_491_int = 37654; // 0x3fb PushI
	var_492_int = 37653; // 0x3fc PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x3fd TObjFunc
	return 0; // 0x3ff Return
	
Label_1024:
	var_493_int = 37654; // 0x400 PushI
	var_494_bool = var_16_bool == var_493_int; // 0x401 Eq
	if(var_494_bool == 0) goto Label_1042; // 0x402 JumpB
	var_495_string = ""; // 0x403 PushV
	var_495_string = "Neutral"; // 0x404 MovS
	func_556(var_17_cvector, var_495_string); // 0x405 NEW_2
	var_496_int = 535935; // 0x407 PushI
	SetMessage(var_496_int); // 0x408 TObjFunc
	ClearReplies(); // 0x40a TObjFunc
	var_497_int = 535936; // 0x40c PushI
	var_498_int = 15001; // 0x40d PushI
	var_499_int = 37655; // 0x40e PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x40f TObjFunc
	return 0; // 0x411 Return
	
Label_1042:
	var_500_int = 15001; // 0x412 PushI
	var_501_bool = var_16_bool == var_500_int; // 0x413 Eq
	if(var_501_bool == 0) goto Label_1060; // 0x414 JumpB
	var_502_string = ""; // 0x415 PushV
	var_502_string = "Neutral"; // 0x416 MovS
	func_556(var_17_cvector, var_502_string); // 0x417 NEW_2
	var_503_int = 513757; // 0x419 PushI
	SetMessage(var_503_int); // 0x41a TObjFunc
	ClearReplies(); // 0x41c TObjFunc
	var_504_int = 513758; // 0x41e PushI
	var_505_int = -1; // 0x41f PushI
	var_506_int = 15002; // 0x420 PushI
	AddReply(var_504_int, var_505_int, var_506_int); // 0x421 TObjFunc
	return 0; // 0x423 Return
	
Label_1060:
	var_507_int = 14997; // 0x424 PushI
	var_508_bool = var_16_bool == var_507_int; // 0x425 Eq
	if(var_508_bool == 0) goto Label_1078; // 0x426 JumpB
	var_509_string = ""; // 0x427 PushV
	var_509_string = "Neutral"; // 0x428 MovS
	func_556(var_17_cvector, var_509_string); // 0x429 NEW_2
	var_510_int = 513753; // 0x42b PushI
	SetMessage(var_510_int); // 0x42c TObjFunc
	ClearReplies(); // 0x42e TObjFunc
	var_511_int = 513754; // 0x430 PushI
	var_512_int = 14999; // 0x431 PushI
	var_513_int = 14998; // 0x432 PushI
	AddReply(var_511_int, var_512_int, var_513_int); // 0x433 TObjFunc
	return 0; // 0x435 Return
	
Label_1078:
	var_514_int = 14999; // 0x436 PushI
	var_515_bool = var_16_bool == var_514_int; // 0x437 Eq
	if(var_515_bool == 0) goto Label_1101; // 0x438 JumpB
	var_516_string = ""; // 0x439 PushV
	var_516_string = "Rage"; // 0x43a MovS
	func_556(var_17_cvector, var_516_string); // 0x43b NEW_2
	var_517_int = 513755; // 0x43d PushI
	SetMessage(var_517_int); // 0x43e TObjFunc
	ClearReplies(); // 0x440 TObjFunc
	var_518_int = 513756; // 0x442 PushI
	var_519_int = 15003; // 0x443 PushI
	var_520_int = 15000; // 0x444 PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0x445 TObjFunc
	var_521_int = 535931; // 0x447 PushI
	var_522_int = 37650; // 0x448 PushI
	var_523_int = 37649; // 0x449 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x44a TObjFunc
	return 0; // 0x44c Return
	
Label_1101:
	var_524_int = 37650; // 0x44d PushI
	var_525_bool = var_16_bool == var_524_int; // 0x44e Eq
	if(var_525_bool == 0) goto Label_1119; // 0x44f JumpB
	var_526_string = ""; // 0x450 PushV
	var_526_string = "Neutral"; // 0x451 MovS
	func_556(var_17_cvector, var_526_string); // 0x452 NEW_2
	var_527_int = 535932; // 0x454 PushI
	SetMessage(var_527_int); // 0x455 TObjFunc
	ClearReplies(); // 0x457 TObjFunc
	var_528_int = 535933; // 0x459 PushI
	var_529_int = 15003; // 0x45a PushI
	var_530_int = 37651; // 0x45b PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x45c TObjFunc
	return 0; // 0x45e Return
	
Label_1119:
	var_531_int = 15003; // 0x45f PushI
	var_532_bool = var_16_bool == var_531_int; // 0x460 Eq
	if(var_532_bool == 0) goto Label_1137; // 0x461 JumpB
	var_533_string = ""; // 0x462 PushV
	var_533_string = "Neutral"; // 0x463 MovS
	func_556(var_17_cvector, var_533_string); // 0x464 NEW_2
	var_534_int = 513759; // 0x466 PushI
	SetMessage(var_534_int); // 0x467 TObjFunc
	ClearReplies(); // 0x469 TObjFunc
	var_535_int = 513760; // 0x46b PushI
	var_536_int = -1; // 0x46c PushI
	var_537_int = 15004; // 0x46d PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x46e TObjFunc
	return 0; // 0x470 Return
	
Label_1137:
	var_538_int = 13518; // 0x471 PushI
	var_539_bool = var_16_bool == var_538_int; // 0x472 Eq
	if(var_539_bool == 0) goto Label_1160; // 0x473 JumpB
	var_540_string = ""; // 0x474 PushV
	var_540_string = "Untrust"; // 0x475 MovS
	func_556(var_17_cvector, var_540_string); // 0x476 NEW_2
	var_541_int = 512358; // 0x478 PushI
	SetMessage(var_541_int); // 0x479 TObjFunc
	ClearReplies(); // 0x47b TObjFunc
	var_542_int = 512359; // 0x47d PushI
	var_543_int = 13520; // 0x47e PushI
	var_544_int = 13519; // 0x47f PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x480 TObjFunc
	var_545_int = 513497; // 0x482 PushI
	var_546_int = 14739; // 0x483 PushI
	var_547_int = 14738; // 0x484 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x485 TObjFunc
	return 0; // 0x487 Return
	
Label_1160:
	var_548_int = 14739; // 0x488 PushI
	var_549_bool = var_16_bool == var_548_int; // 0x489 Eq
	if(var_549_bool == 0) goto Label_1178; // 0x48a JumpB
	var_550_string = ""; // 0x48b PushV
	var_550_string = "Untrust"; // 0x48c MovS
	func_556(var_17_cvector, var_550_string); // 0x48d NEW_2
	var_551_int = 513498; // 0x48f PushI
	SetMessage(var_551_int); // 0x490 TObjFunc
	ClearReplies(); // 0x492 TObjFunc
	var_552_int = 513499; // 0x494 PushI
	var_553_int = 14741; // 0x495 PushI
	var_554_int = 14740; // 0x496 PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0x497 TObjFunc
	return 0; // 0x499 Return
	
Label_1178:
	var_555_int = 14741; // 0x49a PushI
	var_556_bool = var_16_bool == var_555_int; // 0x49b Eq
	if(var_556_bool == 0) goto Label_1196; // 0x49c JumpB
	var_557_string = ""; // 0x49d PushV
	var_557_string = "Neutral"; // 0x49e MovS
	func_556(var_17_cvector, var_557_string); // 0x49f NEW_2
	var_558_int = 513500; // 0x4a1 PushI
	SetMessage(var_558_int); // 0x4a2 TObjFunc
	ClearReplies(); // 0x4a4 TObjFunc
	var_559_int = 513501; // 0x4a6 PushI
	var_560_int = 14743; // 0x4a7 PushI
	var_561_int = 14742; // 0x4a8 PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x4a9 TObjFunc
	return 0; // 0x4ab Return
	
Label_1196:
	var_562_int = 14743; // 0x4ac PushI
	var_563_bool = var_16_bool == var_562_int; // 0x4ad Eq
	if(var_563_bool == 0) goto Label_1214; // 0x4ae JumpB
	var_564_string = ""; // 0x4af PushV
	var_564_string = "Neutral"; // 0x4b0 MovS
	func_556(var_17_cvector, var_564_string); // 0x4b1 NEW_2
	var_565_int = 513502; // 0x4b3 PushI
	SetMessage(var_565_int); // 0x4b4 TObjFunc
	ClearReplies(); // 0x4b6 TObjFunc
	var_566_int = 513503; // 0x4b8 PushI
	var_567_int = 13524; // 0x4b9 PushI
	var_568_int = 14744; // 0x4ba PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0x4bb TObjFunc
	return 0; // 0x4bd Return
	
Label_1214:
	var_569_int = 13520; // 0x4be PushI
	var_570_bool = var_16_bool == var_569_int; // 0x4bf Eq
	if(var_570_bool == 0) goto Label_1232; // 0x4c0 JumpB
	var_571_string = ""; // 0x4c1 PushV
	var_571_string = "Neutral"; // 0x4c2 MovS
	func_556(var_17_cvector, var_571_string); // 0x4c3 NEW_2
	var_572_int = 512360; // 0x4c5 PushI
	SetMessage(var_572_int); // 0x4c6 TObjFunc
	ClearReplies(); // 0x4c8 TObjFunc
	var_573_int = 512361; // 0x4ca PushI
	var_574_int = 13522; // 0x4cb PushI
	var_575_int = 13521; // 0x4cc PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x4cd TObjFunc
	return 0; // 0x4cf Return
	
Label_1232:
	var_576_int = 13522; // 0x4d0 PushI
	var_577_bool = var_16_bool == var_576_int; // 0x4d1 Eq
	if(var_577_bool == 0) goto Label_1250; // 0x4d2 JumpB
	var_578_string = ""; // 0x4d3 PushV
	var_578_string = "Neutral"; // 0x4d4 MovS
	func_556(var_17_cvector, var_578_string); // 0x4d5 NEW_2
	var_579_int = 512362; // 0x4d7 PushI
	SetMessage(var_579_int); // 0x4d8 TObjFunc
	ClearReplies(); // 0x4da TObjFunc
	var_580_int = 512363; // 0x4dc PushI
	var_581_int = 13524; // 0x4dd PushI
	var_582_int = 13523; // 0x4de PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0x4df TObjFunc
	return 0; // 0x4e1 Return
	
Label_1250:
	var_583_int = 13524; // 0x4e2 PushI
	var_584_bool = var_16_bool == var_583_int; // 0x4e3 Eq
	if(var_584_bool == 0) goto Label_1268; // 0x4e4 JumpB
	var_585_string = ""; // 0x4e5 PushV
	var_585_string = "Discontent"; // 0x4e6 MovS
	func_556(var_17_cvector, var_585_string); // 0x4e7 NEW_2
	var_586_int = 512364; // 0x4e9 PushI
	SetMessage(var_586_int); // 0x4ea TObjFunc
	ClearReplies(); // 0x4ec TObjFunc
	var_587_int = 512365; // 0x4ee PushI
	var_588_int = -1; // 0x4ef PushI
	var_589_int = 13525; // 0x4f0 PushI
	AddReply(var_587_int, var_588_int, var_589_int); // 0x4f1 TObjFunc
	return 0; // 0x4f3 Return
	
Label_1268:
	var_590_int = 13527; // 0x4f4 PushI
	var_591_bool = var_16_bool == var_590_int; // 0x4f5 Eq
	if(var_591_bool == 0) goto Label_1291; // 0x4f6 JumpB
	var_592_string = ""; // 0x4f7 PushV
	var_592_string = "Discontent"; // 0x4f8 MovS
	func_556(var_17_cvector, var_592_string); // 0x4f9 NEW_2
	var_593_int = 512367; // 0x4fb PushI
	SetMessage(var_593_int); // 0x4fc TObjFunc
	ClearReplies(); // 0x4fe TObjFunc
	var_594_int = 512368; // 0x500 PushI
	var_595_int = 13529; // 0x501 PushI
	var_596_int = 13528; // 0x502 PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0x503 TObjFunc
	var_597_int = 535986; // 0x505 PushI
	var_598_int = 37715; // 0x506 PushI
	var_599_int = 37714; // 0x507 PushI
	AddReply(var_597_int, var_598_int, var_599_int); // 0x508 TObjFunc
	return 0; // 0x50a Return
	
Label_1291:
	var_600_int = 37715; // 0x50b PushI
	var_601_bool = var_16_bool == var_600_int; // 0x50c Eq
	if(var_601_bool == 0) goto Label_1309; // 0x50d JumpB
	var_602_string = ""; // 0x50e PushV
	var_602_string = "Untrust"; // 0x50f MovS
	func_556(var_17_cvector, var_602_string); // 0x510 NEW_2
	var_603_int = 535987; // 0x512 PushI
	SetMessage(var_603_int); // 0x513 TObjFunc
	ClearReplies(); // 0x515 TObjFunc
	var_604_int = 535988; // 0x517 PushI
	var_605_int = 37717; // 0x518 PushI
	var_606_int = 37716; // 0x519 PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x51a TObjFunc
	return 0; // 0x51c Return
	
Label_1309:
	var_607_int = 37717; // 0x51d PushI
	var_608_bool = var_16_bool == var_607_int; // 0x51e Eq
	if(var_608_bool == 0) goto Label_1327; // 0x51f JumpB
	var_609_string = ""; // 0x520 PushV
	var_609_string = "Untrust"; // 0x521 MovS
	func_556(var_17_cvector, var_609_string); // 0x522 NEW_2
	var_610_int = 535989; // 0x524 PushI
	SetMessage(var_610_int); // 0x525 TObjFunc
	ClearReplies(); // 0x527 TObjFunc
	var_611_int = 535990; // 0x529 PushI
	var_612_int = 13531; // 0x52a PushI
	var_613_int = 37718; // 0x52b PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x52c TObjFunc
	return 0; // 0x52e Return
	
Label_1327:
	var_614_int = 13529; // 0x52f PushI
	var_615_bool = var_16_bool == var_614_int; // 0x530 Eq
	if(var_615_bool == 0) goto Label_1350; // 0x531 JumpB
	var_616_string = ""; // 0x532 PushV
	var_616_string = "Discontent"; // 0x533 MovS
	func_556(var_17_cvector, var_616_string); // 0x534 NEW_2
	var_617_int = 512369; // 0x536 PushI
	SetMessage(var_617_int); // 0x537 TObjFunc
	ClearReplies(); // 0x539 TObjFunc
	var_618_int = 512370; // 0x53b PushI
	var_619_int = 13531; // 0x53c PushI
	var_620_int = 13530; // 0x53d PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0x53e TObjFunc
	var_621_int = 535930; // 0x540 PushI
	var_622_int = -1; // 0x541 PushI
	var_623_int = 37648; // 0x542 PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x543 TObjFunc
	return 0; // 0x545 Return
	
Label_1350:
	var_624_int = 13531; // 0x546 PushI
	var_625_bool = var_16_bool == var_624_int; // 0x547 Eq
	if(var_625_bool == 0) goto Label_1368; // 0x548 JumpB
	var_626_string = ""; // 0x549 PushV
	var_626_string = "Discontent"; // 0x54a MovS
	func_556(var_17_cvector, var_626_string); // 0x54b NEW_2
	var_627_int = 512371; // 0x54d PushI
	SetMessage(var_627_int); // 0x54e TObjFunc
	ClearReplies(); // 0x550 TObjFunc
	var_628_int = 512372; // 0x552 PushI
	var_629_int = -1; // 0x553 PushI
	var_630_int = 13532; // 0x554 PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x555 TObjFunc
	return 0; // 0x557 Return
	
Label_1368:
	var_631_int = 13512; // 0x558 PushI
	var_632_bool = var_16_bool == var_631_int; // 0x559 Eq
	if(var_632_bool == 0) goto Label_1371; // 0x55a JumpB
	
Label_1371:
	var_633_int = 14775; // 0x55b PushI
	var_634_bool = var_16_bool == var_633_int; // 0x55c Eq
	if(var_634_bool == 0) goto Label_1389; // 0x55d JumpB
	var_635_string = ""; // 0x55e PushV
	var_635_string = "Discontent"; // 0x55f MovS
	func_556(var_17_cvector, var_635_string); // 0x560 NEW_2
	var_636_int = 513530; // 0x562 PushI
	SetMessage(var_636_int); // 0x563 TObjFunc
	ClearReplies(); // 0x565 TObjFunc
	var_637_int = 513531; // 0x567 PushI
	var_638_int = 14777; // 0x568 PushI
	var_639_int = 14776; // 0x569 PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0x56a TObjFunc
	return 0; // 0x56c Return
	
Label_1389:
	var_640_int = 14777; // 0x56d PushI
	var_641_bool = var_16_bool == var_640_int; // 0x56e Eq
	if(var_641_bool == 0) goto Label_1412; // 0x56f JumpB
	var_642_string = ""; // 0x570 PushV
	var_642_string = "Discontent"; // 0x571 MovS
	func_556(var_17_cvector, var_642_string); // 0x572 NEW_2
	var_643_int = 513532; // 0x574 PushI
	SetMessage(var_643_int); // 0x575 TObjFunc
	ClearReplies(); // 0x577 TObjFunc
	var_644_int = 513533; // 0x579 PushI
	var_645_int = 14779; // 0x57a PushI
	var_646_int = 14778; // 0x57b PushI
	AddReply(var_644_int, var_645_int, var_646_int); // 0x57c TObjFunc
	var_647_int = 513536; // 0x57e PushI
	var_648_int = 14782; // 0x57f PushI
	var_649_int = 14781; // 0x580 PushI
	AddReply(var_647_int, var_648_int, var_649_int); // 0x581 TObjFunc
	return 0; // 0x583 Return
	
Label_1412:
	var_650_int = 14782; // 0x584 PushI
	var_651_bool = var_16_bool == var_650_int; // 0x585 Eq
	if(var_651_bool == 0) goto Label_1430; // 0x586 JumpB
	var_652_string = ""; // 0x587 PushV
	var_652_string = "Discontent"; // 0x588 MovS
	func_556(var_17_cvector, var_652_string); // 0x589 NEW_2
	var_653_int = 513537; // 0x58b PushI
	SetMessage(var_653_int); // 0x58c TObjFunc
	ClearReplies(); // 0x58e TObjFunc
	var_654_int = 513538; // 0x590 PushI
	var_655_int = 14784; // 0x591 PushI
	var_656_int = 14783; // 0x592 PushI
	AddReply(var_654_int, var_655_int, var_656_int); // 0x593 TObjFunc
	return 0; // 0x595 Return
	
Label_1430:
	var_657_int = 14784; // 0x596 PushI
	var_658_bool = var_16_bool == var_657_int; // 0x597 Eq
	if(var_658_bool == 0) goto Label_1448; // 0x598 JumpB
	var_659_string = ""; // 0x599 PushV
	var_659_string = "Discontent"; // 0x59a MovS
	func_556(var_17_cvector, var_659_string); // 0x59b NEW_2
	var_660_int = 513539; // 0x59d PushI
	SetMessage(var_660_int); // 0x59e TObjFunc
	ClearReplies(); // 0x5a0 TObjFunc
	var_661_int = 513540; // 0x5a2 PushI
	var_662_int = 14786; // 0x5a3 PushI
	var_663_int = 14785; // 0x5a4 PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0x5a5 TObjFunc
	return 0; // 0x5a7 Return
	
Label_1448:
	var_664_int = 14786; // 0x5a8 PushI
	var_665_bool = var_16_bool == var_664_int; // 0x5a9 Eq
	if(var_665_bool == 0) goto Label_1466; // 0x5aa JumpB
	var_666_string = ""; // 0x5ab PushV
	var_666_string = "Discontent"; // 0x5ac MovS
	func_556(var_17_cvector, var_666_string); // 0x5ad NEW_2
	var_667_int = 513541; // 0x5af PushI
	SetMessage(var_667_int); // 0x5b0 TObjFunc
	ClearReplies(); // 0x5b2 TObjFunc
	var_668_int = 513542; // 0x5b4 PushI
	var_669_int = -1; // 0x5b5 PushI
	var_670_int = 14787; // 0x5b6 PushI
	AddReply(var_668_int, var_669_int, var_670_int); // 0x5b7 TObjFunc
	return 0; // 0x5b9 Return
	
Label_1466:
	var_671_int = 14779; // 0x5ba PushI
	var_672_bool = var_16_bool == var_671_int; // 0x5bb Eq
	if(var_672_bool == 0) goto Label_1484; // 0x5bc JumpB
	var_673_string = ""; // 0x5bd PushV
	var_673_string = "Discontent"; // 0x5be MovS
	func_556(var_17_cvector, var_673_string); // 0x5bf NEW_2
	var_674_int = 513534; // 0x5c1 PushI
	SetMessage(var_674_int); // 0x5c2 TObjFunc
	ClearReplies(); // 0x5c4 TObjFunc
	var_675_int = 513535; // 0x5c6 PushI
	var_676_int = 14788; // 0x5c7 PushI
	var_677_int = 14780; // 0x5c8 PushI
	AddReply(var_675_int, var_676_int, var_677_int); // 0x5c9 TObjFunc
	return 0; // 0x5cb Return
	
Label_1484:
	var_678_int = 14788; // 0x5cc PushI
	var_679_bool = var_16_bool == var_678_int; // 0x5cd Eq
	if(var_679_bool == 0) goto Label_1502; // 0x5ce JumpB
	var_680_string = ""; // 0x5cf PushV
	var_680_string = "Discontent"; // 0x5d0 MovS
	func_556(var_17_cvector, var_680_string); // 0x5d1 NEW_2
	var_681_int = 513543; // 0x5d3 PushI
	SetMessage(var_681_int); // 0x5d4 TObjFunc
	ClearReplies(); // 0x5d6 TObjFunc
	var_682_int = 513544; // 0x5d8 PushI
	var_683_int = 14790; // 0x5d9 PushI
	var_684_int = 14789; // 0x5da PushI
	AddReply(var_682_int, var_683_int, var_684_int); // 0x5db TObjFunc
	return 0; // 0x5dd Return
	
Label_1502:
	var_685_int = 14790; // 0x5de PushI
	var_686_bool = var_16_bool == var_685_int; // 0x5df Eq
	if(var_686_bool == 0) goto Label_1520; // 0x5e0 JumpB
	var_687_string = ""; // 0x5e1 PushV
	var_687_string = "Discontent"; // 0x5e2 MovS
	func_556(var_17_cvector, var_687_string); // 0x5e3 NEW_2
	var_688_int = 513545; // 0x5e5 PushI
	SetMessage(var_688_int); // 0x5e6 TObjFunc
	ClearReplies(); // 0x5e8 TObjFunc
	var_689_int = 513546; // 0x5ea PushI
	var_690_int = -1; // 0x5eb PushI
	var_691_int = 14791; // 0x5ec PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0x5ed TObjFunc
	return 0; // 0x5ef Return
	
Label_1520:
	var_692_int = 14813; // 0x5f0 PushI
	var_693_bool = var_16_bool == var_692_int; // 0x5f1 Eq
	if(var_693_bool == 0) goto Label_1538; // 0x5f2 JumpB
	var_694_string = ""; // 0x5f3 PushV
	var_694_string = "Neutral"; // 0x5f4 MovS
	func_556(var_17_cvector, var_694_string); // 0x5f5 NEW_2
	var_695_int = 513564; // 0x5f7 PushI
	SetMessage(var_695_int); // 0x5f8 TObjFunc
	ClearReplies(); // 0x5fa TObjFunc
	var_696_int = 513565; // 0x5fc PushI
	var_697_int = 14815; // 0x5fd PushI
	var_698_int = 14814; // 0x5fe PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x5ff TObjFunc
	return 0; // 0x601 Return
	
Label_1538:
	var_699_int = 14815; // 0x602 PushI
	var_700_bool = var_16_bool == var_699_int; // 0x603 Eq
	if(var_700_bool == 0) goto Label_1556; // 0x604 JumpB
	var_701_string = ""; // 0x605 PushV
	var_701_string = "Neutral"; // 0x606 MovS
	func_556(var_17_cvector, var_701_string); // 0x607 NEW_2
	var_702_int = 513566; // 0x609 PushI
	SetMessage(var_702_int); // 0x60a TObjFunc
	ClearReplies(); // 0x60c TObjFunc
	var_703_int = 513567; // 0x60e PushI
	var_704_int = -1; // 0x60f PushI
	var_705_int = 14816; // 0x610 PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0x611 TObjFunc
	return 0; // 0x613 Return
	
Label_1556:
	var_706_int = 14748; // 0x614 PushI
	var_707_bool = var_16_bool == var_706_int; // 0x615 Eq
	if(var_707_bool == 0) goto Label_1579; // 0x616 JumpB
	var_708_string = ""; // 0x617 PushV
	var_708_string = "Discontent"; // 0x618 MovS
	func_556(var_17_cvector, var_708_string); // 0x619 NEW_2
	var_709_int = 513506; // 0x61b PushI
	SetMessage(var_709_int); // 0x61c TObjFunc
	ClearReplies(); // 0x61e TObjFunc
	var_710_int = 513507; // 0x620 PushI
	var_711_int = 14750; // 0x621 PushI
	var_712_int = 14749; // 0x622 PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x623 TObjFunc
	var_713_int = 513513; // 0x625 PushI
	var_714_int = 14756; // 0x626 PushI
	var_715_int = 14755; // 0x627 PushI
	AddReply(var_713_int, var_714_int, var_715_int); // 0x628 TObjFunc
	return 0; // 0x62a Return
	
Label_1579:
	var_716_int = 14756; // 0x62b PushI
	var_717_bool = var_16_bool == var_716_int; // 0x62c Eq
	if(var_717_bool == 0) goto Label_1602; // 0x62d JumpB
	var_718_string = ""; // 0x62e PushV
	var_718_string = "Patronage"; // 0x62f MovS
	func_556(var_17_cvector, var_718_string); // 0x630 NEW_2
	var_719_int = 513514; // 0x632 PushI
	SetMessage(var_719_int); // 0x633 TObjFunc
	ClearReplies(); // 0x635 TObjFunc
	var_720_int = 513515; // 0x637 PushI
	var_721_int = 14758; // 0x638 PushI
	var_722_int = 14757; // 0x639 PushI
	AddReply(var_720_int, var_721_int, var_722_int); // 0x63a TObjFunc
	var_723_int = 513517; // 0x63c PushI
	var_724_int = 14760; // 0x63d PushI
	var_725_int = 14759; // 0x63e PushI
	AddReply(var_723_int, var_724_int, var_725_int); // 0x63f TObjFunc
	return 0; // 0x641 Return
	
Label_1602:
	var_726_int = 14760; // 0x642 PushI
	var_727_bool = var_16_bool == var_726_int; // 0x643 Eq
	if(var_727_bool == 0) goto Label_1620; // 0x644 JumpB
	var_728_string = ""; // 0x645 PushV
	var_728_string = "Patronage"; // 0x646 MovS
	func_556(var_17_cvector, var_728_string); // 0x647 NEW_2
	var_729_int = 513518; // 0x649 PushI
	SetMessage(var_729_int); // 0x64a TObjFunc
	ClearReplies(); // 0x64c TObjFunc
	var_730_int = 513520; // 0x64e PushI
	var_731_int = 14750; // 0x64f PushI
	var_732_int = 14763; // 0x650 PushI
	AddReply(var_730_int, var_731_int, var_732_int); // 0x651 TObjFunc
	return 0; // 0x653 Return
	
Label_1620:
	var_733_int = 14758; // 0x654 PushI
	var_734_bool = var_16_bool == var_733_int; // 0x655 Eq
	if(var_734_bool == 0) goto Label_1638; // 0x656 JumpB
	var_735_string = ""; // 0x657 PushV
	var_735_string = "Patronage"; // 0x658 MovS
	func_556(var_17_cvector, var_735_string); // 0x659 NEW_2
	var_736_int = 513516; // 0x65b PushI
	SetMessage(var_736_int); // 0x65c TObjFunc
	ClearReplies(); // 0x65e TObjFunc
	var_737_int = 513519; // 0x660 PushI
	var_738_int = 14750; // 0x661 PushI
	var_739_int = 14761; // 0x662 PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0x663 TObjFunc
	return 0; // 0x665 Return
	
Label_1638:
	var_740_int = 14750; // 0x666 PushI
	var_741_bool = var_16_bool == var_740_int; // 0x667 Eq
	if(var_741_bool == 0) goto Label_1661; // 0x668 JumpB
	var_742_string = ""; // 0x669 PushV
	var_742_string = "Discontent"; // 0x66a MovS
	func_556(var_17_cvector, var_742_string); // 0x66b NEW_2
	var_743_int = 513508; // 0x66d PushI
	SetMessage(var_743_int); // 0x66e TObjFunc
	ClearReplies(); // 0x670 TObjFunc
	var_744_int = 513521; // 0x672 PushI
	var_745_int = 14766; // 0x673 PushI
	var_746_int = 14765; // 0x674 PushI
	AddReply(var_744_int, var_745_int, var_746_int); // 0x675 TObjFunc
	var_747_int = 513509; // 0x677 PushI
	var_748_int = 14752; // 0x678 PushI
	var_749_int = 14751; // 0x679 PushI
	AddReply(var_747_int, var_748_int, var_749_int); // 0x67a TObjFunc
	return 0; // 0x67c Return
	
Label_1661:
	var_750_int = 14752; // 0x67d PushI
	var_751_bool = var_16_bool == var_750_int; // 0x67e Eq
	if(var_751_bool == 0) goto Label_1679; // 0x67f JumpB
	var_752_string = ""; // 0x680 PushV
	var_752_string = "Patronage"; // 0x681 MovS
	func_556(var_17_cvector, var_752_string); // 0x682 NEW_2
	var_753_int = 513510; // 0x684 PushI
	SetMessage(var_753_int); // 0x685 TObjFunc
	ClearReplies(); // 0x687 TObjFunc
	var_754_int = 513511; // 0x689 PushI
	var_755_int = 14754; // 0x68a PushI
	var_756_int = 14753; // 0x68b PushI
	AddReply(var_754_int, var_755_int, var_756_int); // 0x68c TObjFunc
	return 0; // 0x68e Return
	
Label_1679:
	var_757_int = 14754; // 0x68f PushI
	var_758_bool = var_16_bool == var_757_int; // 0x690 Eq
	if(var_758_bool == 0) goto Label_1697; // 0x691 JumpB
	var_759_string = ""; // 0x692 PushV
	var_759_string = "Patronage"; // 0x693 MovS
	func_556(var_17_cvector, var_759_string); // 0x694 NEW_2
	var_760_int = 513512; // 0x696 PushI
	SetMessage(var_760_int); // 0x697 TObjFunc
	ClearReplies(); // 0x699 TObjFunc
	var_761_int = 513547; // 0x69b PushI
	var_762_int = 14773; // 0x69c PushI
	var_763_int = 14792; // 0x69d PushI
	AddReply(var_761_int, var_762_int, var_763_int); // 0x69e TObjFunc
	return 0; // 0x6a0 Return
	
Label_1697:
	var_764_int = 14766; // 0x6a1 PushI
	var_765_bool = var_16_bool == var_764_int; // 0x6a2 Eq
	if(var_765_bool == 0) goto Label_1725; // 0x6a3 JumpB
	var_766_string = ""; // 0x6a4 PushV
	var_766_string = "Discontent"; // 0x6a5 MovS
	func_556(var_17_cvector, var_766_string); // 0x6a6 NEW_2
	var_767_int = 513522; // 0x6a8 PushI
	SetMessage(var_767_int); // 0x6a9 TObjFunc
	ClearReplies(); // 0x6ab TObjFunc
	var_768_int = 513523; // 0x6ad PushI
	var_769_int = 14769; // 0x6ae PushI
	var_770_int = 14767; // 0x6af PushI
	AddReply(var_768_int, var_769_int, var_770_int); // 0x6b0 TObjFunc
	var_771_bool = 0; var_772_object = Obj(); // 0x6b2 PushV
	var_772_object = var_1_object; // 0x6b3 MovT
	func_3207(var_772_object); // 0x6b4 NEW_2
	if(var_771_bool == 0) goto Label_1724; // 0x6b6 JumpB
	var_777_int = 513524; // 0x6b7 PushI
	var_778_int = 14769; // 0x6b8 PushI
	var_779_int = 14768; // 0x6b9 PushI
	AddReply(var_777_int, var_778_int, var_779_int); // 0x6ba TObjFunc
	
Label_1724:
	return 0; // 0x6bc Return
	
Label_1725:
	var_780_int = 14769; // 0x6bd PushI
	var_781_bool = var_16_bool == var_780_int; // 0x6be Eq
	if(var_781_bool == 0) goto Label_1748; // 0x6bf JumpB
	var_782_string = ""; // 0x6c0 PushV
	var_782_string = "Discontent"; // 0x6c1 MovS
	func_556(var_17_cvector, var_782_string); // 0x6c2 NEW_2
	var_783_int = 513525; // 0x6c4 PushI
	SetMessage(var_783_int); // 0x6c5 TObjFunc
	ClearReplies(); // 0x6c7 TObjFunc
	var_784_int = 513526; // 0x6c9 PushI
	var_785_int = 14773; // 0x6ca PushI
	var_786_int = 14770; // 0x6cb PushI
	AddReply(var_784_int, var_785_int, var_786_int); // 0x6cc TObjFunc
	var_787_int = 513527; // 0x6ce PushI
	var_788_int = -1; // 0x6cf PushI
	var_789_int = 14772; // 0x6d0 PushI
	AddReply(var_787_int, var_788_int, var_789_int); // 0x6d1 TObjFunc
	return 0; // 0x6d3 Return
	
Label_1748:
	var_790_int = 14773; // 0x6d4 PushI
	var_791_bool = var_16_bool == var_790_int; // 0x6d5 Eq
	if(var_791_bool == 0) goto Label_1766; // 0x6d6 JumpB
	var_792_string = ""; // 0x6d7 PushV
	var_792_string = "Rage"; // 0x6d8 MovS
	func_556(var_17_cvector, var_792_string); // 0x6d9 NEW_2
	var_793_int = 513528; // 0x6db PushI
	SetMessage(var_793_int); // 0x6dc TObjFunc
	ClearReplies(); // 0x6de TObjFunc
	var_794_int = 513548; // 0x6e0 PushI
	var_795_int = 14796; // 0x6e1 PushI
	var_796_int = 14795; // 0x6e2 PushI
	AddReply(var_794_int, var_795_int, var_796_int); // 0x6e3 TObjFunc
	return 0; // 0x6e5 Return
	
Label_1766:
	var_797_int = 14796; // 0x6e6 PushI
	var_798_bool = var_16_bool == var_797_int; // 0x6e7 Eq
	if(var_798_bool == 0) goto Label_1789; // 0x6e8 JumpB
	var_799_string = ""; // 0x6e9 PushV
	var_799_string = "Rage"; // 0x6ea MovS
	func_556(var_17_cvector, var_799_string); // 0x6eb NEW_2
	var_800_int = 513549; // 0x6ed PushI
	SetMessage(var_800_int); // 0x6ee TObjFunc
	ClearReplies(); // 0x6f0 TObjFunc
	var_801_int = 513550; // 0x6f2 PushI
	var_802_int = 14800; // 0x6f3 PushI
	var_803_int = 14797; // 0x6f4 PushI
	AddReply(var_801_int, var_802_int, var_803_int); // 0x6f5 TObjFunc
	var_804_int = 513551; // 0x6f7 PushI
	var_805_int = 14799; // 0x6f8 PushI
	var_806_int = 14798; // 0x6f9 PushI
	AddReply(var_804_int, var_805_int, var_806_int); // 0x6fa TObjFunc
	return 0; // 0x6fc Return
	
Label_1789:
	var_807_int = 14799; // 0x6fd PushI
	var_808_bool = var_16_bool == var_807_int; // 0x6fe Eq
	if(var_808_bool == 0) goto Label_1807; // 0x6ff JumpB
	var_809_string = ""; // 0x700 PushV
	var_809_string = "Rage"; // 0x701 MovS
	func_556(var_17_cvector, var_809_string); // 0x702 NEW_2
	var_810_int = 513552; // 0x704 PushI
	SetMessage(var_810_int); // 0x705 TObjFunc
	ClearReplies(); // 0x707 TObjFunc
	var_811_int = 513554; // 0x709 PushI
	var_812_int = 14800; // 0x70a PushI
	var_813_int = 14801; // 0x70b PushI
	AddReply(var_811_int, var_812_int, var_813_int); // 0x70c TObjFunc
	return 0; // 0x70e Return
	
Label_1807:
	var_814_int = 14800; // 0x70f PushI
	var_815_bool = var_16_bool == var_814_int; // 0x710 Eq
	if(var_815_bool == 0) goto Label_1830; // 0x711 JumpB
	var_816_string = ""; // 0x712 PushV
	var_816_string = "Rage"; // 0x713 MovS
	func_556(var_17_cvector, var_816_string); // 0x714 NEW_2
	var_817_int = 513553; // 0x716 PushI
	SetMessage(var_817_int); // 0x717 TObjFunc
	ClearReplies(); // 0x719 TObjFunc
	var_818_int = 513556; // 0x71b PushI
	var_819_int = -1; // 0x71c PushI
	var_820_int = 14805; // 0x71d PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0x71e TObjFunc
	var_821_int = 513557; // 0x720 PushI
	var_822_int = 14807; // 0x721 PushI
	var_823_int = 14806; // 0x722 PushI
	AddReply(var_821_int, var_822_int, var_823_int); // 0x723 TObjFunc
	return 0; // 0x725 Return
	
Label_1830:
	var_824_int = 14807; // 0x726 PushI
	var_825_bool = var_16_bool == var_824_int; // 0x727 Eq
	if(var_825_bool == 0) goto Label_1853; // 0x728 JumpB
	var_826_string = ""; // 0x729 PushV
	var_826_string = "Discontent"; // 0x72a MovS
	func_556(var_17_cvector, var_826_string); // 0x72b NEW_2
	var_827_int = 513558; // 0x72d PushI
	SetMessage(var_827_int); // 0x72e TObjFunc
	ClearReplies(); // 0x730 TObjFunc
	var_828_int = 513559; // 0x732 PushI
	var_829_int = 14810; // 0x733 PushI
	var_830_int = 14808; // 0x734 PushI
	AddReply(var_828_int, var_829_int, var_830_int); // 0x735 TObjFunc
	var_831_int = 513560; // 0x737 PushI
	var_832_int = -1; // 0x738 PushI
	var_833_int = 14809; // 0x739 PushI
	AddReply(var_831_int, var_832_int, var_833_int); // 0x73a TObjFunc
	return 0; // 0x73c Return
	
Label_1853:
	var_834_int = 14810; // 0x73d PushI
	var_835_bool = var_16_bool == var_834_int; // 0x73e Eq
	if(var_835_bool == 0) goto Label_1871; // 0x73f JumpB
	var_836_string = ""; // 0x740 PushV
	var_836_string = "Discontent"; // 0x741 MovS
	func_556(var_17_cvector, var_836_string); // 0x742 NEW_2
	var_837_int = 513561; // 0x744 PushI
	SetMessage(var_837_int); // 0x745 TObjFunc
	ClearReplies(); // 0x747 TObjFunc
	var_838_int = 513562; // 0x749 PushI
	var_839_int = -1; // 0x74a PushI
	var_840_int = 14811; // 0x74b PushI
	AddReply(var_838_int, var_839_int, var_840_int); // 0x74c TObjFunc
	return 0; // 0x74e Return
	
Label_1871:
	var_3_string = 1; // 0x74f TMovB
	var_841_bool = 0; // 0x750 PushV
	func_2845(var_841_bool); // 0x751 NEW_2
	if(var_841_bool == 0) goto Label_1879; // 0x753 JumpB
	lshStopAnimation(); // 0x754 Func
	goto Label_1881; // 0x756 Jump
	
Label_1881:
	return 0; // 0x759 Return
	
Label_1879:
	StopAnimation(); // 0x757 Func
	
Label_1883:
	return 0; // 0x75b Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_cvector)
{
	var_18_int = 1; // 0x7fe PushI
	if(var_18_int == 0) goto Label_2086; // 0x7ff JumpB
	func_2678(); // 0x801 NEW_2
	var_20_int = 42557; // 0x803 PushI
	var_21_bool = var_16_int == var_20_int; // 0x804 Eq
	if(var_21_bool == 0) goto Label_2074; // 0x805 JumpB
	var_22_string = ""; // 0x806 PushV
	var_22_string = "Neutral"; // 0x807 MovS
	func_2023(var_17_cvector, var_22_string); // 0x808 NEW_2
	var_39_int = 540548; // 0x80a PushI
	SetMessage(var_39_int); // 0x80b TObjFunc
	ClearReplies(); // 0x80d TObjFunc
	var_40_int = 540549; // 0x80f PushI
	var_41_int = -1; // 0x810 PushI
	var_42_int = 42558; // 0x811 PushI
	AddReply(var_40_int, var_41_int, var_42_int); // 0x812 TObjFunc
	var_43_int = 540797; // 0x814 PushI
	var_44_int = -1; // 0x815 PushI
	var_45_int = 42846; // 0x816 PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0x817 TObjFunc
	return 0; // 0x819 Return
	
Label_2074:
	var_3_string = 1; // 0x81a TMovB
	var_46_bool = 0; // 0x81b PushV
	func_2845(var_46_bool); // 0x81c NEW_2
	if(var_46_bool == 0) goto Label_2082; // 0x81e JumpB
	lshStopAnimation(); // 0x81f Func
	goto Label_2084; // 0x821 Jump
	
Label_2084:
	return 0; // 0x824 Return
	
Label_2082:
	StopAnimation(); // 0x822 Func
	
Label_2086:
	return 0; // 0x826 Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_int)
{
	var_17_int = 10; // 0x871 PushI
	var_18_bool = var_16_int == var_17_int; // 0x872 Eq
	if(var_18_bool == 0) goto Label_2197; // 0x873 JumpB
	func_2156(); // 0x875 NEW_2
	var_20_bool = 0; // 0x877 PushV
	var_20_bool = 0; // 0x878 MovB
	var_21_bool = 0; // 0x879 PushV
	func_2404(var_21_bool); // 0x87a NEW_2
	if(var_21_bool == 0) goto Label_2178; // 0x87c JumpB
	var_24_bool = 0; // 0x87d PushV
	func_2125(var_24_bool); // 0x87e NEW_2
	if(var_24_bool == 0) goto Label_2178; // 0x880 JumpB
	var_20_bool = 1; // 0x881 MovB
	
Label_2178:
	if(var_20_bool == 0) goto Label_2191; // 0x882 JumpB
	var_41_bool = 0; // 0x883 PushV
	func_2105(var_41_bool); // 0x884 NEW_2
	if(var_41_bool == 0) goto Label_2190; // 0x886 JumpB
	var_60_bool = 0; var_61_object = Obj(); // 0x887 PushV
	var_62_object = Obj(); // 0x888 PushV
	func_2685(var_62_object); // 0x889 NEW_2
	var_61_object = var_62_object; // 0x88a Mov
	func_2552(var_61_object); // 0x88c NEW_2
	
Label_2190:
	goto Label_2197; // 0x88e Jump
	
Label_2197:
	return 0; // 0x895 Return
	
Label_2191:
	func_2120(var_16_int); // 0x890 NEW_2
	func_2147(); // 0x893 NEW_2
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_2338(); // 0x897 NEW_2
	func_2156(); // 0x89a NEW_2
	lshStopSpeech(); // 0x89c Func
	lshStopAnimation(); // 0x89e Func
	StopAsync(); // 0x8a0 Func
	Hold(); // 0x8a2 Func
	return 0; // 0x8a4 Return
}


task_6_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	StopGroup0(); // 0x8a5 Func
	func_2156(); // 0x8a8 NEW_2
	var_17_string = ""; // 0x8aa PushV
	var_17_string = "Neutral"; // 0x8ab MovS
	func_2632(var_17_string); // 0x8ac NEW_2
	func_2147(); // 0x8af NEW_2
	return 0; // 0x8b1 Return
}


task_6_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_bool)
{
	var_17_bool = var_16_bool; // 0x8b3 Push
	if(var_17_bool == 0) goto Label_2233; // 0x8b4 JumpB
	func_2147(); // 0x8b6 NEW_2
	goto Label_2237; // 0x8b8 Jump
	
Label_2237:
	return 0; // 0x8bd Return
	
Label_2233:
	var_23_string = ""; // 0x8b9 PushV
	var_23_string = "Neutral"; // 0x8ba MovS
	func_2632(var_23_string); // 0x8bb NEW_2
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; // 0x8be PushV
	IsOverrideActive(var_18_bool); // 0x8bf Func
	var_19_bool = var_18_bool == 0; // 0x8c1 Not
	if(var_19_bool == 0) goto Label_2266; // 0x8c2 JumpB
	EventDisable(0); // 0x8c3 EventDisable
	func_2338(); // 0x8c5 NEW_2
	var_20_bool = 0; var_21_object = Obj(); // 0x8c7 PushV
	var_21_object = var_16_object; // 0x8c8 Mov
	func_2395(var_21_object); // 0x8c9 NEW_2
	EventEnable(0); // 0x8cb EventEnable
	var_34_object = Obj(); // 0x8cc PushV
	var_34_object = var_16_object; // 0x8cd Mov
	func_3403(var_34_object); // 0x8ce NEW_2
	var_506_string = ""; // 0x8d0 PushV
	var_506_string = "Neutral"; // 0x8d1 MovS
	func_2632(var_506_string); // 0x8d2 NEW_2
	func_2156(); // 0x8d5 NEW_2
	func_2147(); // 0x8d8 NEW_2
	
Label_2266:
	return 2; // 0x8da Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_cvector)
{
	func_2091(var_15_cvector); // 0x828 NEW_2
	return 0; // 0x82a Return
}


func_0(var_0_object, var_391_int, var_392_object)
{
	var_394_object = Obj(); var_395_bool = 0; var_396_int = 0; var_397_bool = 0; var_398_object = Obj(); var_399_bool = 0; var_400_int = 0; var_401_bool = 0; // 0x0 PushV
	var_0_object = var_392_object; // 0x1 TMov
	var_402_bool = 0; var_403_object = Obj(); var_404_float = 0; // 0x2 PushV
	var_403_object = var_392_object; // 0x3 Mov
	var_404_float = 70.0; // 0x4 MovF
	func_2409(var_403_object, var_404_float); // 0x5 NEW_2
	var_405_bool = var_402_bool == 0; // 0x7 Not
	if(var_405_bool == 0) goto Label_11; // 0x8 JumpB
	var_391_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_398_object); // 0xb Func
	var_406_int = 0; // 0xd PushV
	func_2839(var_406_int); // 0xe NEW_2
	SetNPCName(var_406_int); // 0x10 ObjFunc
	var_407_int = 0; // 0x12 PushV
	func_2837(var_407_int); // 0x13 NEW_2
	SetNPCDescription(var_407_int); // 0x15 ObjFunc
	var_408_string = ""; // 0x17 PushV
	func_2841(var_408_string); // 0x18 NEW_2
	SetPhoto(var_408_string); // 0x1a ObjFunc
	var_409_string = ""; // 0x1c PushV
	func_2843(var_409_string); // 0x1d NEW_2
	SetPhoto2(var_409_string); // 0x1f ObjFunc
	var_410_int = 0; // 0x21 PushV
	func_3386(var_410_int); // 0x22 NEW_2
	SetPlayerName(var_410_int); // 0x24 ObjFunc
	var_400_int = -1; // 0x26 MovI
	IsOverrideActive(var_399_bool); // 0x27 Func
	var_411_bool = var_399_bool; // 0x29 Push
	if(var_411_bool == 0) goto Label_45; // 0x2a JumpB
	var_391_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_398_object); // 0x2d Func
	var_412_bool = 0; var_413_object = Obj(); // 0x2f PushV
	var_414_object = Obj(); // 0x30 PushV
	func_2685(var_414_object); // 0x31 NEW_2
	var_413_object = var_414_object; // 0x32 Mov
	func_2494(var_412_bool, var_413_object); // 0x34 NEW_2
	var_415_object = Obj(); var_416_object = Obj(); // 0x36 PushV
	var_415_object = var_392_object; // 0x37 Mov
	var_416_object = var_398_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_417_object, var_418_object, var_419_string, var_420_bool, var_415_object, var_416_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_401_bool); // 0x3d ObjFunc
	
Label_63:
	var_448_bool = var_401_bool == 0; // 0x3f Not
	if(var_448_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_401_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_449_object = Obj(); // 0x46 PushV
	var_449_object = var_392_object; // 0x47 Mov
	func_2477(); // 0x48 NEW_2
	StopDialog(var_398_object); // 0x4a Func
	GetReturnValue(var_400_int); // 0x4c ObjFunc
	var_391_int = var_400_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_259(var_0_object, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x103 PushV
	var_0_object = var_44_object; // 0x104 TMov
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0; // 0x105 PushV
	var_55_object = var_44_object; // 0x106 Mov
	var_56_float = 70.0; // 0x107 MovF
	func_2409(var_55_object, var_56_float); // 0x108 NEW_2
	var_100_bool = var_54_bool == 0; // 0x10a Not
	if(var_100_bool == 0) goto Label_270; // 0x10b JumpB
	var_43_int = -2; // 0x10c MovI
	return 8; // 0x10d Return
	
Label_270:
	CreateDialog(var_50_object); // 0x10e Func
	var_101_int = 0; // 0x110 PushV
	func_2839(var_101_int); // 0x111 NEW_2
	SetNPCName(var_101_int); // 0x113 ObjFunc
	var_102_int = 0; // 0x115 PushV
	func_2837(var_102_int); // 0x116 NEW_2
	SetNPCDescription(var_102_int); // 0x118 ObjFunc
	var_103_string = ""; // 0x11a PushV
	func_2841(var_103_string); // 0x11b NEW_2
	SetPhoto(var_103_string); // 0x11d ObjFunc
	var_104_string = ""; // 0x11f PushV
	func_2843(var_104_string); // 0x120 NEW_2
	SetPhoto2(var_104_string); // 0x122 ObjFunc
	var_105_int = 0; // 0x124 PushV
	func_3386(var_105_int); // 0x125 NEW_2
	SetPlayerName(var_105_int); // 0x127 ObjFunc
	var_52_int = -1; // 0x129 MovI
	IsOverrideActive(var_51_bool); // 0x12a Func
	var_113_bool = var_51_bool; // 0x12c Push
	if(var_113_bool == 0) goto Label_304; // 0x12d JumpB
	var_43_int = -2; // 0x12e MovI
	return 8; // 0x12f Return
	
Label_304:
	DoDialog(var_50_object); // 0x130 Func
	var_114_bool = 0; var_115_object = Obj(); // 0x132 PushV
	var_116_object = Obj(); // 0x133 PushV
	func_2685(var_116_object); // 0x134 NEW_2
	var_115_object = var_116_object; // 0x135 Mov
	func_2494(var_114_bool, var_115_object); // 0x137 NEW_2
	var_204_object = Obj(); var_205_object = Obj(); // 0x139 PushV
	var_204_object = var_44_object; // 0x13a Mov
	var_205_object = var_50_object; // 0x13b Mov
	TaskCall(3); // 0x13c TaskCall
	func_340(var_206_object, var_207_object, var_208_string, var_209_bool, var_204_object, var_205_object); // 0x13d NEW_2
	TaskReturn(); // 0x13e TaskReturn
	IsDialogEnd(var_53_bool); // 0x140 ObjFunc
	
Label_322:
	var_381_bool = var_53_bool == 0; // 0x142 Not
	if(var_381_bool == 0) goto Label_329; // 0x143 JumpB
	sync(); // 0x144 Func
	IsDialogEnd(var_53_bool); // 0x146 ObjFunc
	goto Label_322; // 0x148 Jump
	
Label_329:
	var_382_object = Obj(); // 0x149 PushV
	var_382_object = var_44_object; // 0x14a Mov
	func_2477(); // 0x14b NEW_2
	StopDialog(var_50_object); // 0x14d Func
	GetReturnValue(var_52_int); // 0x14f ObjFunc
	var_43_int = var_52_int; // 0x151 Mov
	return 8; // 0x152 Return
}


func_3076(var_212_bool)
{
	var_214_int = 0; var_215_string = ""; // 0xc05 PushV
	var_215_string = "d8q01"; // 0xc06 MovS
	func_2712(var_214_int, var_215_string); // 0xc07 NEW_2
	var_218_int = 1; // 0xc09 PushI
	var_219_bool = var_214_int == var_218_int; // 0xc0a Eq
	if(var_219_bool == 0) goto Label_3086; // 0xc0b JumpB
	var_212_bool = 1; // 0xc0c MovB
	return 0; // 0xc0d Return
	
Label_3086:
	var_212_bool = 0; // 0xc0e MovB
	return 0; // 0xc0f Return
}


func_2820(var_34_int)
{
	var_35_int = 0; var_36_bool = 0; var_37_int = 0; var_38_bool = 0; // 0xb04 PushV
	var_37_int = 0; // 0xb05 MovI
	
Label_2822:
	var_39_string = "all"; // 0xb06 PushS
	var_40_string = ""; var_41_int = 0; // 0xb07 PushV
	var_41_int = var_37_int; // 0xb08 Mov
	func_2813(var_40_string, var_41_int); // 0xb09 NEW_2
	HasAnimation(var_38_bool, var_39_string, var_40_string); // 0xb0b Func
	var_45_bool = var_38_bool == 0; // 0xb0d Not
	if(var_45_bool == 0) goto Label_2832; // 0xb0e JumpB
	goto Label_2835; // 0xb0f Jump
	
Label_2835:
	var_34_int = var_37_int; // 0xb13 Mov
	return 4; // 0xb14 Return
	
Label_2832:
	var_46_int = 1; // 0xb10 PushI
	var_37_int = var_37_int + var_46_int; // 0xb11 Add2
	goto Label_2822; // 0xb12 Jump
}


func_3336(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj(); // 0xd08 PushV
	GetMainOutdoorScene(var_60_object); // 0xd09 Func
	var_62_bool = var_60_object == 0; // 0xd0b NullEq
	if(var_62_bool == 0) goto Label_3347; // 0xd0c JumpB
	var_63_string = "Can't find main outdoor scene"; // 0xd0d PushS
	Trace(var_63_string); // 0xd0e Func
	var_61_object = 0; // 0xd10 SetNull
	var_57_object = var_61_object; // 0xd11 Mov
	return 4; // 0xd12 Return
	
Label_3347:
	GetMap(var_61_object); // 0xd13 ObjFunc
	var_57_object = var_61_object; // 0xd15 Mov
	return 4; // 0xd16 Return
}


func_3088(var_220_bool)
{
	var_222_int = 0; var_223_string = ""; // 0xc11 PushV
	var_223_string = "ood8Mat1"; // 0xc12 MovS
	func_2712(var_222_int, var_223_string); // 0xc13 NEW_2
	var_224_int = 0; // 0xc15 PushI
	var_225_bool = var_222_int == var_224_int; // 0xc16 Eq
	if(var_225_bool == 0) goto Label_3098; // 0xc17 JumpB
	var_220_bool = 1; // 0xc18 MovB
	return 0; // 0xc19 Return
	
Label_3098:
	var_220_bool = 0; // 0xc1a MovB
	return 0; // 0xc1b Return
}


func_2837(var_102_int)
{
	var_102_int = 515545; // 0xb15 MovI
	return 0; // 0xb16 Return
}


func_2839(var_101_int)
{
	var_101_int = 502870; // 0xb17 MovI
	return 0; // 0xb18 Return
}


func_2841(var_103_string)
{
	var_103_string = "ui/NPC_Mat.png"; // 0xb19 MovS
	return 0; // 0xb1a Return
}


func_3353(var_87_object, var_88_string, var_89_float)
{
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_bool = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_object = Obj(); var_98_bool = 0; // 0xd19 PushV
	GetMainOutdoorScene(var_97_object); // 0xd1a Func
	var_99_bool = var_97_object == 0; // 0xd1c NullEq
	if(var_99_bool == 0) goto Label_3362; // 0xd1d JumpB
	var_100_string = "Can't find main outdoor scene"; // 0xd1e PushS
	Trace(var_100_string); // 0xd1f Func
	return 8; // 0xd21 Return
	
Label_3362:
	GetLocator(var_88_string, var_98_bool, var_95_cvector, var_96_cvector); // 0xd22 ObjFunc
	var_101_bool = var_98_bool == 0; // 0xd24 Not
	if(var_101_bool == 0) goto Label_3372; // 0xd25 JumpB
	var_102_string = "Warning: outdoor scene locator "; // 0xd26 PushS
	var_103_int = var_102_string + var_88_string; // 0xd27 Add
	var_104_string = " doesnt exist"; // 0xd28 PushS
	var_105_int = var_103_int + var_104_string; // 0xd29 Add
	Trace(var_105_int); // 0xd2a Func
	
Label_3372:
	GetMap(var_87_object); // 0xd2c ObjFunc
	var_106_bool = var_87_object == 0; // 0xd2e NullEq
	if(var_106_bool == 0) goto Label_3380; // 0xd2f JumpB
	var_107_string = "Can't find map"; // 0xd30 PushS
	Trace(var_107_string); // 0xd31 Func
	return 8; // 0xd33 Return
	
Label_3380:
	var_108_float = GetByIndex(var_95_cvector, 0); // 0xd34 PushE
	var_109_float = GetByIndex(var_95_cvector, 2); // 0xd35 PushE
	SetMapParams(var_108_float, var_109_float, var_89_float); // 0xd36 ObjFunc
	return 8; // 0xd38 Return
}


func_2843(var_104_string)
{
	var_104_string = "ui/NPC_Mat_b.png"; // 0xb1b MovS
	return 0; // 0xb1c Return
}


func_3100(var_282_bool)
{
	var_284_int = 0; var_285_string = ""; // 0xc1d PushV
	var_285_string = "d8q01MatBringToy"; // 0xc1e MovS
	func_2712(var_284_int, var_285_string); // 0xc1f NEW_2
	var_286_int = 1; // 0xc21 PushI
	var_287_bool = var_284_int == var_286_int; // 0xc22 Eq
	if(var_287_bool == 0) goto Label_3110; // 0xc23 JumpB
	var_282_bool = 1; // 0xc24 MovB
	return 0; // 0xc25 Return
	
Label_3110:
	var_282_bool = 0; // 0xc26 MovB
	return 0; // 0xc27 Return
}


func_2589(var_156_bool)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; // 0xa1d PushV
	var_168_string = "d"; // 0xa1e PushS
	var_169_int = 0; // 0xa1f PushV
	func_2798(var_169_int); // 0xa20 NEW_2
	var_170_int = var_168_string + var_169_int; // 0xa22 Add
	var_171_string = "m"; // 0xa23 PushS
	var_163_string = var_170_int + var_171_string; // 0xa24 Add2
	var_164_int = 0; // 0xa25 MovI
	
Label_2598:
	var_172_int = 1; // 0xa26 PushI
	if(var_172_int == 0) goto Label_2611; // 0xa27 JumpB
	var_173_int = 1; // 0xa28 PushI
	var_174_int = var_164_int + var_173_int; // 0xa29 Add
	var_175_int = var_163_string + var_174_int; // 0xa2a Add
	HasProperty(var_175_int, var_165_bool); // 0xa2b ObjFunc
	var_176_bool = var_165_bool == 0; // 0xa2d Not
	if(var_176_bool == 0) goto Label_2608; // 0xa2e JumpB
	goto Label_2611; // 0xa2f Jump
	
Label_2611:
	var_177_bool = var_164_int == 0; // 0xa33 Not
	if(var_177_bool == 0) goto Label_2615; // 0xa34 JumpB
	var_156_bool = 0; // 0xa35 MovB
	return 10; // 0xa36 Return
	
Label_2615:
	var_166_int = 0; // 0xa37 MovI
	var_178_int = 1; // 0xa38 PushI
	var_179_bool = var_164_int > var_178_int; // 0xa39 GT
	if(var_179_bool == 0) goto Label_2621; // 0xa3a JumpB
	irand(var_166_int, var_164_int); // 0xa3b Func
	
Label_2621:
	var_180_int = 1; // 0xa3d PushI
	var_181_int = var_166_int + var_180_int; // 0xa3e Add
	var_182_int = var_163_string + var_181_int; // 0xa3f Add
	GetProperty(var_182_int, var_167_string); // 0xa40 ObjFunc
	var_183_bool = 0; var_184_string = ""; // 0xa42 PushV
	var_184_string = var_167_string; // 0xa43 Mov
	func_2663(var_183_bool, var_184_string); // 0xa44 NEW_2
	var_156_bool = var_183_bool; // 0xa45 Mov
	return 10; // 0xa47 Return
	
Label_2608:
	var_185_int = 1; // 0xa30 PushI
	var_164_int = var_164_int + var_185_int; // 0xa31 Add2
	goto Label_2598; // 0xa32 Jump
}


func_2845(var_96_bool)
{
	var_96_bool = 1; // 0xb1d MovB
	return 0; // 0xb1e Return
}


func_2847()
{
	var_177_int = 0; var_178_int = 0; // 0xb1f PushV
	var_179_string = "d8q01MladVladIsVictim"; // 0xb20 PushS
	GetVariable(var_179_string, var_178_int); // 0xb21 Func
	var_180_int = 0; // 0xb23 PushI
	var_181_bool = var_178_int != var_180_int; // 0xb24 Neq
	if(var_181_bool == 0) goto Label_2860; // 0xb25 JumpB
	var_182_bool = 0; var_183_string = ""; var_184_string = ""; var_185_string = ""; // 0xb26 PushV
	var_183_string = "volonteers_danko"; // 0xb27 MovS
	var_184_string = "kill"; // 0xb28 MovS
	var_185_string = "mladvlad"; // 0xb29 MovS
	func_2781(var_182_bool, var_183_string, var_184_string, var_185_string); // 0xb2a NEW_2
	
Label_2860:
	var_189_string = "d8q01BigVladIsVictim"; // 0xb2c PushS
	GetVariable(var_189_string, var_178_int); // 0xb2d Func
	var_190_int = 0; // 0xb2f PushI
	var_191_bool = var_178_int != var_190_int; // 0xb30 Neq
	if(var_191_bool == 0) goto Label_2872; // 0xb31 JumpB
	var_192_bool = 0; var_193_string = ""; var_194_string = ""; var_195_string = ""; // 0xb32 PushV
	var_193_string = "volonteers_danko"; // 0xb33 MovS
	var_194_string = "kill"; // 0xb34 MovS
	var_195_string = "bigvlad"; // 0xb35 MovS
	func_2781(var_192_bool, var_193_string, var_194_string, var_195_string); // 0xb36 NEW_2
	
Label_2872:
	return 2; // 0xb38 Return
}


func_2336(var_54_bool)
{
	var_54_bool = 1; // 0x920 MovB
	return 0; // 0x921 Return
}


func_2338()
{
	StopAnimation(); // 0x922 Func
	StopGroup0(); // 0x924 Func
	return 0; // 0x926 Return
}


func_2343(var_31_float)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x927 PushV
	GetPosition(var_36_cvector); // 0x928 Func
	GetPosition(var_37_cvector); // 0x92a ObjFunc
	var_38_cvector = var_37_cvector - var_36_cvector; // 0x92c Sub2
	var_31_float = var_38_cvector | var_38_cvector; // 0x92d Or2
	return 6; // 0x92e Return
}


func_3112(var_288_bool, var_289_object)
{
	var_290_bool = 0; var_291_object = Obj(); var_292_string = ""; // 0xc29 PushV
	var_291_object = var_289_object; // 0xc2a Mov
	var_292_string = "toy_horse"; // 0xc2b MovS
	func_2717(var_291_object, var_292_string); // 0xc2c NEW_2
	if(var_290_bool == 0) goto Label_3121; // 0xc2e JumpB
	var_288_bool = 1; // 0xc2f MovB
	return 0; // 0xc30 Return
	
Label_3121:
	var_288_bool = 0; // 0xc31 MovB
	return 0; // 0xc32 Return
}


func_2091(var_0_object)
{
	var_16_bool = 0; // 0x82b PushV
	func_2404(var_16_bool); // 0x82c NEW_2
	var_19_bool = var_16_bool == 0; // 0x82e Not
	if(var_19_bool == 0) goto Label_2098; // 0x82f JumpB
	Hold(); // 0x830 Func
	
Label_2098:
	GetDirection(var_0_object); // 0x832 Func
	
Label_2100:
	func_2267(); // 0x835 NEW_2
	goto Label_2100; // 0x837 Jump
}


func_556(var_2_object, var_234_string)
{
	var_235_bool = 0; // 0x22d PushV
	func_2845(var_235_bool); // 0x22e NEW_2
	var_236_bool = var_235_bool == 0; // 0x230 Not
	if(var_236_bool == 0) goto Label_563; // 0x231 JumpB
	return 0; // 0x232 Return
	
Label_563:
	var_237_bool = var_234_string == var_2_object; // 0x233 Eq
	if(var_237_bool == 0) goto Label_566; // 0x234 JumpB
	return 0; // 0x235 Return
	
Label_566:
	var_238_string = ""; var_239_bool = 0; // 0x236 PushV
	var_238_string = var_234_string; // 0x237 Mov
	var_240_string = ""; // 0x238 PushS
	var_241_bool = var_234_string == var_240_string; // 0x239 Eq
	if(var_241_bool == 0) goto Label_573; // 0x23a JumpB
	var_239_bool = 0; // 0x23b MovB
	goto Label_574; // 0x23c Jump
	
Label_574:
	func_2648(var_238_string, var_239_bool); // 0x23e NEW_2
	var_2_object = var_234_string; // 0x240 TMov
	return 0; // 0x241 Return
	
Label_573:
	var_239_bool = 1; // 0x23d MovB
}


func_2351(var_258_bool, var_259_object, var_260_string)
{
	var_261_bool = 0; var_262_bool = 0; // 0x92f PushV
	var_263_string = "HasProperty"; // 0x930 PushS
	var_264_int = 2; // 0x931 PushI
	var_265_bool = IsFuncExist(var_259_object, var_263_string, var_264_int); // 0x932 FuncExist
	var_266_bool = var_265_bool == 0; // 0x933 Not
	if(var_266_bool == 0) goto Label_2359; // 0x934 JumpB
	var_258_bool = 0; // 0x935 MovB
	return 2; // 0x936 Return
	
Label_2359:
	HasProperty(var_260_string, var_262_bool); // 0x937 ObjFunc
	var_258_bool = var_262_bool; // 0x939 Mov
	return 2; // 0x93a Return
}


func_3123(var_297_bool)
{
	var_299_int = 0; var_300_string = ""; // 0xc34 PushV
	var_300_string = "ood8Mat2"; // 0xc35 MovS
	func_2712(var_299_int, var_300_string); // 0xc36 NEW_2
	var_301_int = 0; // 0xc38 PushI
	var_302_bool = var_299_int == var_301_int; // 0xc39 Eq
	if(var_302_bool == 0) goto Label_3133; // 0xc3a JumpB
	var_297_bool = 1; // 0xc3b MovB
	return 0; // 0xc3c Return
	
Label_3133:
	var_297_bool = 0; // 0xc3d MovB
	return 0; // 0xc3e Return
}


func_3064(var_313_bool)
{
	var_315_int = 0; var_316_string = ""; // 0xbf9 PushV
	var_316_string = "d8q04"; // 0xbfa MovS
	func_2712(var_315_int, var_316_string); // 0xbfb NEW_2
	var_317_int = 1; // 0xbfd PushI
	var_318_bool = var_315_int == var_317_int; // 0xbfe Eq
	if(var_318_bool == 0) goto Label_3074; // 0xbff JumpB
	var_313_bool = 1; // 0xc00 MovB
	return 0; // 0xc01 Return
	
Label_3074:
	var_313_bool = 0; // 0xc02 MovB
	return 0; // 0xc03 Return
}


func_2105(var_41_bool)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x839 PushV
	var_44_string = "player"; // 0x83a PushS
	FindActor(var_43_object, var_44_string); // 0x83b Func
	var_45_bool = var_43_object == 0; // 0x83d Not
	if(var_45_bool == 0) goto Label_2113; // 0x83e JumpB
	var_41_bool = 0; // 0x83f MovB
	return 2; // 0x840 Return
	
Label_2113:
	var_46_bool = 0; var_47_object = Obj(); // 0x841 PushV
	var_47_object = var_43_object; // 0x842 Mov
	func_2395(var_47_object); // 0x843 NEW_2
	var_41_bool = var_46_bool; // 0x844 Mov
	return 2; // 0x846 Return
}


func_2873()
{
	var_142_int = 0; var_143_int = 0; // 0xb39 PushV
	var_144_string = "toy_horse"; // 0xb3a PushS
	var_145_int = 1; // 0xb3b PushI
	RemoveItemByType(var_143_int, var_144_string, var_145_int); // 0xb3c ObjFunc
	return 2; // 0xb3e Return
}


func_3386(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0xd3a PushV
	var_108_string = "branch"; // 0xd3b PushS
	GetVariable(var_108_string, var_107_int); // 0xd3c Func
	var_109_int = 0; // 0xd3e PushI
	var_110_bool = var_107_int == var_109_int; // 0xd3f Eq
	if(var_110_bool == 0) goto Label_3396; // 0xd40 JumpB
	var_105_int = 1; // 0xd41 MovI
	return 2; // 0xd42 Return
	
Label_3396:
	var_111_int = 1; // 0xd44 PushI
	var_112_bool = var_107_int == var_111_int; // 0xd45 Eq
	if(var_112_bool == 0) goto Label_3401; // 0xd46 JumpB
	var_105_int = 2; // 0xd47 MovI
	return 2; // 0xd48 Return
	
Label_3401:
	var_105_int = 3; // 0xd49 MovI
	return 2; // 0xd4a Return
}


func_2363(var_250_bool, var_251_object, var_252_string, var_253_float, var_254_float, var_255_float)
{
	var_256_float = 0; var_257_float = 0; // 0x93b PushV
	var_258_bool = 0; var_259_object = Obj(); var_260_string = ""; // 0x93c PushV
	var_259_object = var_251_object; // 0x93d Mov
	var_260_string = var_252_string; // 0x93e Mov
	func_2351(var_258_bool, var_259_object, var_260_string); // 0x93f NEW_2
	var_267_bool = var_258_bool == 0; // 0x941 Not
	if(var_267_bool == 0) goto Label_2373; // 0x942 JumpB
	var_250_bool = 0; // 0x943 MovB
	return 2; // 0x944 Return
	
Label_2373:
	GetProperty(var_252_string, var_257_float); // 0x945 ObjFunc
	var_268_float = 0; var_269_float = 0; var_270_float = 0; var_271_float = 0; // 0x947 PushV
	var_269_float = var_257_float + var_253_float; // 0x948 Add2
	var_270_float = var_254_float; // 0x949 Mov
	var_271_float = var_255_float; // 0x94a Mov
	func_2701(var_268_float, var_269_float, var_270_float, var_271_float); // 0x94b NEW_2
	SetProperty(var_252_string, var_268_float); // 0x94d ObjFunc
	var_250_bool = 1; // 0x94f MovB
	return 2; // 0x950 Return
}


func_3135(var_307_bool)
{
	var_309_int = 0; var_310_string = ""; // 0xc40 PushV
	var_310_string = "ood8Mat4"; // 0xc41 MovS
	func_2712(var_309_int, var_310_string); // 0xc42 NEW_2
	var_311_int = 0; // 0xc44 PushI
	var_312_bool = var_309_int == var_311_int; // 0xc45 Eq
	if(var_312_bool == 0) goto Label_3145; // 0xc46 JumpB
	var_307_bool = 1; // 0xc47 MovB
	return 0; // 0xc48 Return
	
Label_3145:
	var_307_bool = 0; // 0xc49 MovB
	return 0; // 0xc4a Return
}


func_2879()
{
	var_152_object = Obj(); var_153_string = ""; var_154_float = 0; // 0xb40 PushV
	var_155_object = Obj(); // 0xb41 PushV
	func_3336(var_155_object); // 0xb42 NEW_2
	var_152_object = var_155_object; // 0xb43 Mov
	var_153_string = "pt_map_boiny_main_entrance"; // 0xb45 MovS
	var_154_float = 2; // 0xb46 MovI
	func_3353(var_152_object, var_153_string, var_154_float); // 0xb47 NEW_2
	var_156_object = Obj(); // 0xb49 PushV
	func_3336(var_156_object); // 0xb4a NEW_2
	ShowMap(var_156_object); // 0xb4c ObjFunc
	return 0; // 0xb4e Return
}


func_2632(var_260_string)
{
	var_261_bool = 0; var_262_float = 0; var_263_float = 0; var_264_bool = 0; var_265_float = 0; var_266_float = 0; // 0xa48 PushV
	lshHasAnimation(var_264_bool, var_260_string); // 0xa49 Func
	var_267_bool = var_264_bool; // 0xa4b Push
	if(var_267_bool == 0) goto Label_2643; // 0xa4c JumpB
	lshGetAnimTimes(var_260_string, var_265_float, var_266_float); // 0xa4d Func
	var_268_bool = 0; // 0xa4f PushB
	lshPlayAnimation(var_265_float, var_266_float, var_268_bool); // 0xa50 Func
	goto Label_2647; // 0xa52 Jump
	
Label_2647:
	return 6; // 0xa57 Return
	
Label_2643:
	var_269_string = "Can't find lsh animation : "; // 0xa53 PushS
	var_270_int = var_269_string + var_260_string; // 0xa54 Add
	Trace(var_270_int); // 0xa55 Func
}


func_2120(var_0_object)
{
	var_93_float = GetByIndex(var_0_object, 0); // 0x848 PushE
	var_94_float = GetByIndex(var_0_object, 2); // 0x849 PushE
	RotateAsync(var_93_float, var_94_float); // 0x84a Func
	return 0; // 0x84c Return
}


func_3147(var_322_bool)
{
	var_324_int = 0; var_325_string = ""; // 0xc4c PushV
	var_325_string = "ood8Mat5"; // 0xc4d MovS
	func_2712(var_324_int, var_325_string); // 0xc4e NEW_2
	var_326_int = 0; // 0xc50 PushI
	var_327_bool = var_324_int == var_326_int; // 0xc51 Eq
	if(var_327_bool == 0) goto Label_3157; // 0xc52 JumpB
	var_322_bool = 1; // 0xc53 MovB
	return 0; // 0xc54 Return
	
Label_3157:
	var_322_bool = 0; // 0xc55 MovB
	return 0; // 0xc56 Return
}


func_3403(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; // 0xd4c PushV
	var_36_int = 8; // 0xd4d MovI
	func_2807(var_35_bool, var_36_int); // 0xd4e NEW_2
	if(var_35_bool == 0) goto Label_3416; // 0xd50 JumpB
	var_43_int = 0; var_44_object = Obj(); // 0xd51 PushV
	var_44_object = var_34_object; // 0xd52 Mov
	TaskCall(2); // 0xd53 TaskCall
	func_259(var_45_object, var_43_int, var_44_object); // 0xd54 NEW_2
	TaskReturn(); // 0xd55 TaskReturn
	return 0; // 0xd57 Return
	
Label_3416:
	var_389_bool = 0; var_390_int = 0; // 0xd58 PushV
	var_390_int = 12; // 0xd59 MovI
	func_2807(var_389_bool, var_390_int); // 0xd5a NEW_2
	if(var_389_bool == 0) goto Label_3428; // 0xd5c JumpB
	var_391_int = 0; var_392_object = Obj(); // 0xd5d PushV
	var_392_object = var_34_object; // 0xd5e Mov
	TaskCall(0); // 0xd5f TaskCall
	func_0(var_393_object, var_391_int, var_392_object); // 0xd60 NEW_2
	TaskReturn(); // 0xd61 TaskReturn
	return 0; // 0xd63 Return
	
Label_3428:
	var_450_int = 0; var_451_object = Obj(); // 0xd64 PushV
	var_451_object = var_34_object; // 0xd65 Mov
	TaskCall(4); // 0xd66 TaskCall
	func_1884(var_452_object, var_450_int, var_451_object); // 0xd67 NEW_2
	TaskReturn(); // 0xd68 TaskReturn
	return 0; // 0xd6a Return
}


func_2125(var_24_bool)
{
	var_25_object = Obj(); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0; // 0x84d PushV
	var_29_string = "player"; // 0x84e PushS
	FindActor(var_27_object, var_29_string); // 0x84f Func
	var_30_bool = var_27_object == 0; // 0x851 Not
	if(var_30_bool == 0) goto Label_2133; // 0x852 JumpB
	var_24_bool = 0; // 0x853 MovB
	return 4; // 0x854 Return
	
Label_2133:
	var_31_float = 0; var_32_object = Obj(); // 0x855 PushV
	var_32_object = var_27_object; // 0x856 Mov
	func_2343(var_32_object); // 0x857 NEW_2
	var_39_float = 90000.0; // 0x859 PushF
	var_40_bool = var_31_float > var_39_float; // 0x85a GT
	if(var_40_bool == 0) goto Label_2142; // 0x85b JumpB
	var_24_bool = 0; // 0x85c MovB
	return 4; // 0x85d Return
	
Label_2142:
	CanSee(var_28_bool, var_27_object); // 0x85e Func
	var_24_bool = var_28_bool; // 0x860 Mov
	return 4; // 0x861 Return
}


func_2895()
{
	var_148_string = "playsound"; // 0xb50 PushS
	var_149_string = "giveitem"; // 0xb51 PushS
	TriggerWorld(var_148_string, var_149_string); // 0xb52 Func
	return 0; // 0xb54 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_415_object, var_416_object)
{
	var_0_object = var_416_object; // 0x52 TMov
	var_1_object = var_415_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_421_int = 1; // 0x55 PushI
	if(var_421_int == 0) goto Label_114; // 0x56 JumpB
	var_422_string = ""; // 0x57 PushV
	var_422_string = "Neutral"; // 0x58 MovS
	func_144(var_416_object, var_422_string); // 0x59 NEW_2
	var_430_int = 535284; // 0x5b PushI
	SetMessage(var_430_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_431_int = 535285; // 0x60 PushI
	var_432_int = 36962; // 0x61 PushI
	var_433_int = 36961; // 0x62 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x63 TObjFunc
	var_434_int = 535292; // 0x65 PushI
	var_435_int = -1; // 0x66 PushI
	var_436_int = 36968; // 0x67 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x68 TObjFunc
	var_437_int = 535293; // 0x6a PushI
	var_438_int = -1; // 0x6b PushI
	var_439_int = 36969; // 0x6c PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x6d TObjFunc
	goto Label_114; // 0x6f Jump
	
Label_114:
	var_440_bool = 0; // 0x72 PushV
	func_2845(var_440_bool); // 0x73 NEW_2
	if(var_440_bool == 0) goto Label_129; // 0x75 JumpB
	
Label_118:
	lshWaitForAnimEnd(); // 0x76 Func
	var_441_string = var_3_string; // 0x78 PushT
	if(var_441_string == 0) goto Label_123; // 0x79 JumpB
	goto Label_128; // 0x7a Jump
	
Label_128:
	goto Label_143; // 0x80 Jump
	
Label_143:
	return 0; // 0x8f Return
	
Label_123:
	var_442_string = ""; // 0x7b PushV
	var_442_string = var_2_object; // 0x7c MovT
	func_2632(var_442_string); // 0x7d NEW_2
	goto Label_118; // 0x7f Jump
	
Label_129:
	var_443_string = "all"; // 0x81 PushS
	var_444_string = "idle"; // 0x82 PushS
	PlayAnimation(var_443_string, var_444_string); // 0x83 Func
	
Label_133:
	WaitForAnimEnd(); // 0x85 Func
	var_445_string = var_3_string; // 0x87 PushT
	if(var_445_string == 0) goto Label_138; // 0x88 JumpB
	goto Label_143; // 0x89 Jump
	
Label_138:
	var_446_string = "all"; // 0x8a PushS
	var_447_string = "idle"; // 0x8b PushS
	PlayAnimation(var_446_string, var_447_string); // 0x8c Func
	goto Label_133; // 0x8e Jump
}


func_2385(var_24_bool, var_25_cvector)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_bool = 0; // 0x951 PushV
	GetPosition(var_29_cvector); // 0x952 Func
	var_30_cvector = var_25_cvector - var_29_cvector; // 0x954 Sub2
	var_32_float = GetByIndex(var_30_cvector, 0); // 0x955 PushE
	var_33_float = GetByIndex(var_30_cvector, 2); // 0x956 PushE
	Rotate(var_32_float, var_33_float, var_31_bool); // 0x957 Func
	var_24_bool = var_31_bool; // 0x959 Mov
	return 6; // 0x95a Return
}


func_340(var_0_object, var_1_object, var_2_object, var_3_string, var_204_object, var_205_object)
{
	var_0_object = var_205_object; // 0x155 TMov
	var_1_object = var_204_object; // 0x156 TMov
	var_3_string = 0; // 0x157 TMovB
	var_210_int = 1; // 0x158 PushI
	if(var_210_int == 0) goto Label_526; // 0x159 JumpB
	var_211_bool = 0; // 0x15a PushV
	var_211_bool = 0; // 0x15b MovB
	var_212_bool = 0; var_213_object = Obj(); // 0x15c PushV
	var_213_object = var_1_object; // 0x15d MovT
	func_3076(var_213_object); // 0x15e NEW_2
	if(var_212_bool == 0) goto Label_359; // 0x160 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x161 PushV
	var_221_object = var_1_object; // 0x162 MovT
	func_3088(var_221_object); // 0x163 NEW_2
	if(var_220_bool == 0) goto Label_359; // 0x165 JumpB
	var_211_bool = 1; // 0x166 MovB
	
Label_359:
	if(var_211_bool == 0) goto Label_390; // 0x167 JumpB
	var_226_object = Obj(); var_227_object = Obj(); // 0x168 PushV
	var_226_object = var_1_object; // 0x169 MovT
	var_227_object = var_0_object; // 0x16a MovT
	func_2908(); // 0x16b NEW_2
	var_230_object = Obj(); var_231_object = Obj(); // 0x16d PushV
	var_230_object = var_1_object; // 0x16e MovT
	var_231_object = var_0_object; // 0x16f MovT
	func_3005(); // 0x170 NEW_2
	var_234_string = ""; // 0x172 PushV
	var_234_string = "Neutral"; // 0x173 MovS
	func_556(var_205_object, var_234_string); // 0x174 NEW_2
	var_251_int = 513496; // 0x176 PushI
	SetMessage(var_251_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_252_int = 513504; // 0x17b PushI
	var_253_int = 14773; // 0x17c PushI
	var_254_int = 14746; // 0x17d PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x17e TObjFunc
	var_255_int = 513505; // 0x180 PushI
	var_256_int = 14748; // 0x181 PushI
	var_257_int = 14747; // 0x182 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x183 TObjFunc
	goto Label_526; // 0x185 Jump
	
Label_526:
	var_258_bool = 0; // 0x20e PushV
	func_2845(var_258_bool); // 0x20f NEW_2
	if(var_258_bool == 0) goto Label_541; // 0x211 JumpB
	
Label_530:
	lshWaitForAnimEnd(); // 0x212 Func
	var_259_string = var_3_string; // 0x214 PushT
	if(var_259_string == 0) goto Label_535; // 0x215 JumpB
	goto Label_540; // 0x216 Jump
	
Label_540:
	goto Label_555; // 0x21c Jump
	
Label_555:
	return 0; // 0x22b Return
	
Label_535:
	var_260_string = ""; // 0x217 PushV
	var_260_string = var_2_object; // 0x218 MovT
	func_2632(var_260_string); // 0x219 NEW_2
	goto Label_530; // 0x21b Jump
	
Label_541:
	var_271_string = "all"; // 0x21d PushS
	var_272_string = "idle"; // 0x21e PushS
	PlayAnimation(var_271_string, var_272_string); // 0x21f Func
	
Label_545:
	WaitForAnimEnd(); // 0x221 Func
	var_273_string = var_3_string; // 0x223 PushT
	if(var_273_string == 0) goto Label_550; // 0x224 JumpB
	goto Label_555; // 0x225 Jump
	
Label_550:
	var_274_string = "all"; // 0x226 PushS
	var_275_string = "idle"; // 0x227 PushS
	PlayAnimation(var_274_string, var_275_string); // 0x228 Func
	goto Label_545; // 0x22a Jump
	
Label_390:
	var_276_object = Obj(); var_277_object = Obj(); // 0x186 PushV
	var_276_object = var_1_object; // 0x187 MovT
	var_277_object = var_0_object; // 0x188 MovT
	func_3005(); // 0x189 NEW_2
	var_278_string = ""; // 0x18b PushV
	var_278_string = "Neutral"; // 0x18c MovS
	func_556(var_205_object, var_278_string); // 0x18d NEW_2
	var_279_int = 512350; // 0x18f PushI
	SetMessage(var_279_int); // 0x190 TObjFunc
	ClearReplies(); // 0x192 TObjFunc
	var_280_bool = 0; // 0x194 PushV
	var_280_bool = 0; // 0x195 MovB
	var_281_bool = 0; // 0x196 PushV
	var_281_bool = 0; // 0x197 MovB
	var_282_bool = 0; var_283_object = Obj(); // 0x198 PushV
	var_283_object = var_1_object; // 0x199 MovT
	func_3100(var_283_object); // 0x19a NEW_2
	if(var_282_bool == 0) goto Label_419; // 0x19c JumpB
	var_288_bool = 0; var_289_object = Obj(); // 0x19d PushV
	var_289_object = var_1_object; // 0x19e MovT
	func_3112(var_288_bool, var_289_object); // 0x19f NEW_2
	if(var_288_bool == 0) goto Label_419; // 0x1a1 JumpB
	var_281_bool = 1; // 0x1a2 MovB
	
Label_419:
	if(var_281_bool == 0) goto Label_426; // 0x1a3 JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x1a4 PushV
	var_298_object = var_1_object; // 0x1a5 MovT
	func_3123(var_298_object); // 0x1a6 NEW_2
	if(var_297_bool == 0) goto Label_426; // 0x1a8 JumpB
	var_280_bool = 1; // 0x1a9 MovB
	
Label_426:
	if(var_280_bool == 0) goto Label_432; // 0x1aa JumpB
	var_303_int = 513563; // 0x1ab PushI
	var_304_int = 14813; // 0x1ac PushI
	var_305_int = 14812; // 0x1ad PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x1ae TObjFunc
	
Label_432:
	var_306_bool = 0; // 0x1b0 PushV
	var_306_bool = 0; // 0x1b1 MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x1b2 PushV
	var_308_object = var_1_object; // 0x1b3 MovT
	func_3135(var_308_object); // 0x1b4 NEW_2
	if(var_307_bool == 0) goto Label_445; // 0x1b6 JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x1b7 PushV
	var_314_object = var_1_object; // 0x1b8 MovT
	func_3064(var_314_object); // 0x1b9 NEW_2
	if(var_313_bool == 0) goto Label_445; // 0x1bb JumpB
	var_306_bool = 1; // 0x1bc MovB
	
Label_445:
	if(var_306_bool == 0) goto Label_451; // 0x1bd JumpB
	var_319_int = 512366; // 0x1be PushI
	var_320_int = 13527; // 0x1bf PushI
	var_321_int = 13526; // 0x1c0 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x1c1 TObjFunc
	
Label_451:
	var_322_bool = 0; var_323_object = Obj(); // 0x1c3 PushV
	var_323_object = var_1_object; // 0x1c4 MovT
	func_3147(var_323_object); // 0x1c5 NEW_2
	if(var_322_bool == 0) goto Label_461; // 0x1c7 JumpB
	var_328_int = 512357; // 0x1c8 PushI
	var_329_int = 13518; // 0x1c9 PushI
	var_330_int = 13517; // 0x1ca PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x1cb TObjFunc
	
Label_461:
	var_331_bool = 0; // 0x1cd PushV
	var_331_bool = 0; // 0x1ce MovB
	var_332_bool = 0; var_333_object = Obj(); // 0x1cf PushV
	var_333_object = var_1_object; // 0x1d0 MovT
	func_3159(var_333_object); // 0x1d1 NEW_2
	if(var_332_bool == 0) goto Label_474; // 0x1d3 JumpB
	var_338_bool = 0; var_339_object = Obj(); // 0x1d4 PushV
	var_339_object = var_1_object; // 0x1d5 MovT
	func_3183(var_339_object); // 0x1d6 NEW_2
	if(var_338_bool == 0) goto Label_474; // 0x1d8 JumpB
	var_331_bool = 1; // 0x1d9 MovB
	
Label_474:
	if(var_331_bool == 0) goto Label_480; // 0x1da JumpB
	var_344_int = 513752; // 0x1db PushI
	var_345_int = 14997; // 0x1dc PushI
	var_346_int = 14996; // 0x1dd PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x1de TObjFunc
	
Label_480:
	var_347_bool = 0; // 0x1e0 PushV
	var_347_bool = 0; // 0x1e1 MovB
	var_348_bool = 0; var_349_object = Obj(); // 0x1e2 PushV
	var_349_object = var_1_object; // 0x1e3 MovT
	func_3171(var_349_object); // 0x1e4 NEW_2
	if(var_348_bool == 0) goto Label_493; // 0x1e6 JumpB
	var_354_bool = 0; var_355_object = Obj(); // 0x1e7 PushV
	var_355_object = var_1_object; // 0x1e8 MovT
	func_3195(var_355_object); // 0x1e9 NEW_2
	if(var_354_bool == 0) goto Label_493; // 0x1eb JumpB
	var_347_bool = 1; // 0x1ec MovB
	
Label_493:
	if(var_347_bool == 0) goto Label_499; // 0x1ed JumpB
	var_360_int = 513568; // 0x1ee PushI
	var_361_int = 14818; // 0x1ef PushI
	var_362_int = 14817; // 0x1f0 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x1f1 TObjFunc
	
Label_499:
	var_363_bool = 0; // 0x1f3 PushV
	var_363_bool = 0; // 0x1f4 MovB
	var_364_bool = 0; var_365_object = Obj(); // 0x1f5 PushV
	var_365_object = var_1_object; // 0x1f6 MovT
	func_3219(var_364_bool, var_365_object); // 0x1f7 NEW_2
	if(var_364_bool == 0) goto Label_512; // 0x1f9 JumpB
	var_369_bool = 0; var_370_object = Obj(); // 0x1fa PushV
	var_370_object = var_1_object; // 0x1fb MovT
	func_3052(var_370_object); // 0x1fc NEW_2
	if(var_369_bool == 0) goto Label_512; // 0x1fe JumpB
	var_363_bool = 1; // 0x1ff MovB
	
Label_512:
	if(var_363_bool == 0) goto Label_518; // 0x200 JumpB
	var_375_int = 513766; // 0x201 PushI
	var_376_int = 15006; // 0x202 PushI
	var_377_int = 15005; // 0x203 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x204 TObjFunc
	
Label_518:
	var_378_int = 512351; // 0x206 PushI
	var_379_int = -1; // 0x207 PushI
	var_380_int = 13510; // 0x208 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x209 TObjFunc
	goto Label_526; // 0x20b Jump
}


func_2901(var_237_object)
{
	var_239_bool = 0; var_240_object = Obj(); var_241_float = 0; // 0xb56 PushV
	var_240_object = var_237_object; // 0xb57 Mov
	var_241_float = 0.1; // 0xb58 MovF
	func_2724(var_239_bool, var_240_object, var_241_float); // 0xb59 NEW_2
	return 0; // 0xb5b Return
}


func_3159(var_332_bool)
{
	var_334_int = 0; var_335_string = ""; // 0xc58 PushV
	var_335_string = "d8q01BigVladIsVictim"; // 0xc59 MovS
	func_2712(var_334_int, var_335_string); // 0xc5a NEW_2
	var_336_int = 1; // 0xc5c PushI
	var_337_bool = var_334_int == var_336_int; // 0xc5d Eq
	if(var_337_bool == 0) goto Label_3169; // 0xc5e JumpB
	var_332_bool = 1; // 0xc5f MovB
	return 0; // 0xc60 Return
	
Label_3169:
	var_332_bool = 0; // 0xc61 MovB
	return 0; // 0xc62 Return
}


func_2648(var_238_string, var_239_bool)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0xa58 PushV
	lshHasAnimation(var_245_bool, var_238_string); // 0xa59 Func
	var_248_bool = var_245_bool; // 0xa5b Push
	if(var_248_bool == 0) goto Label_2658; // 0xa5c JumpB
	lshGetAnimTimes(var_238_string, var_246_float, var_247_float); // 0xa5d Func
	lshPlayAnimation(var_246_float, var_247_float, var_239_bool); // 0xa5f Func
	goto Label_2662; // 0xa61 Jump
	
Label_2662:
	return 6; // 0xa66 Return
	
Label_2658:
	var_249_string = "Can't find lsh animation : "; // 0xa62 PushS
	var_250_int = var_249_string + var_238_string; // 0xa63 Add
	Trace(var_250_int); // 0xa64 Func
}


func_2395(var_20_bool)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); // 0x95b PushV
	GetPosition(var_23_cvector); // 0x95c ObjFunc
	var_24_bool = 0; var_25_cvector = CVector(0,0,0); // 0x95e PushV
	var_25_cvector = var_23_cvector; // 0x95f Mov
	func_2385(var_24_bool, var_25_cvector); // 0x960 NEW_2
	var_20_bool = var_24_bool; // 0x961 Mov
	return 2; // 0x963 Return
}


func_2908()
{
	var_228_string = "ood8Mat1"; // 0xb5d PushS
	var_229_int = 1; // 0xb5e PushI
	SetVariable(var_228_string, var_229_int); // 0xb5f Func
	return 0; // 0xb61 Return
}


func_1884(var_0_object, var_450_int, var_451_object)
{
	var_453_object = Obj(); var_454_bool = 0; var_455_int = 0; var_456_bool = 0; var_457_object = Obj(); var_458_bool = 0; var_459_int = 0; var_460_bool = 0; // 0x75c PushV
	var_0_object = var_451_object; // 0x75d TMov
	var_461_bool = 0; var_462_object = Obj(); var_463_float = 0; // 0x75e PushV
	var_462_object = var_451_object; // 0x75f Mov
	var_463_float = 70.0; // 0x760 MovF
	func_2409(var_462_object, var_463_float); // 0x761 NEW_2
	var_464_bool = var_461_bool == 0; // 0x763 Not
	if(var_464_bool == 0) goto Label_1895; // 0x764 JumpB
	var_450_int = -2; // 0x765 MovI
	return 8; // 0x766 Return
	
Label_1895:
	CreateDialog(var_457_object); // 0x767 Func
	var_465_int = 0; // 0x769 PushV
	func_2839(var_465_int); // 0x76a NEW_2
	SetNPCName(var_465_int); // 0x76c ObjFunc
	var_466_int = 0; // 0x76e PushV
	func_2837(var_466_int); // 0x76f NEW_2
	SetNPCDescription(var_466_int); // 0x771 ObjFunc
	var_467_string = ""; // 0x773 PushV
	func_2841(var_467_string); // 0x774 NEW_2
	SetPhoto(var_467_string); // 0x776 ObjFunc
	var_468_string = ""; // 0x778 PushV
	func_2843(var_468_string); // 0x779 NEW_2
	SetPhoto2(var_468_string); // 0x77b ObjFunc
	var_469_int = 0; // 0x77d PushV
	func_3386(var_469_int); // 0x77e NEW_2
	SetPlayerName(var_469_int); // 0x780 ObjFunc
	var_459_int = -1; // 0x782 MovI
	IsOverrideActive(var_458_bool); // 0x783 Func
	var_470_bool = var_458_bool; // 0x785 Push
	if(var_470_bool == 0) goto Label_1929; // 0x786 JumpB
	var_450_int = -2; // 0x787 MovI
	return 8; // 0x788 Return
	
Label_1929:
	DoDialog(var_457_object); // 0x789 Func
	var_471_bool = 0; var_472_object = Obj(); // 0x78b PushV
	var_473_object = Obj(); // 0x78c PushV
	func_2685(var_473_object); // 0x78d NEW_2
	var_472_object = var_473_object; // 0x78e Mov
	func_2494(var_471_bool, var_472_object); // 0x790 NEW_2
	var_474_object = Obj(); var_475_object = Obj(); // 0x792 PushV
	var_474_object = var_451_object; // 0x793 Mov
	var_475_object = var_457_object; // 0x794 Mov
	TaskCall(5); // 0x795 TaskCall
	func_1965(var_476_object, var_477_object, var_478_string, var_479_bool, var_474_object, var_475_object); // 0x796 NEW_2
	TaskReturn(); // 0x797 TaskReturn
	IsDialogEnd(var_460_bool); // 0x799 ObjFunc
	
Label_1947:
	var_504_bool = var_460_bool == 0; // 0x79b Not
	if(var_504_bool == 0) goto Label_1954; // 0x79c JumpB
	sync(); // 0x79d Func
	IsDialogEnd(var_460_bool); // 0x79f ObjFunc
	goto Label_1947; // 0x7a1 Jump
	
Label_1954:
	var_505_object = Obj(); // 0x7a2 PushV
	var_505_object = var_451_object; // 0x7a3 Mov
	func_2477(); // 0x7a4 NEW_2
	StopDialog(var_457_object); // 0x7a6 Func
	GetReturnValue(var_459_int); // 0x7a8 ObjFunc
	var_450_int = var_459_int; // 0x7aa Mov
	return 8; // 0x7ab Return
}


func_2914()
{
	var_24_string = "d8q01BringBadBoy"; // 0xb63 PushS
	var_25_int = 1; // 0xb64 PushI
	SetVariable(var_24_string, var_25_int); // 0xb65 Func
	func_3230(); // 0xb68 NEW_2
	return 0; // 0xb6a Return
}


func_3171(var_348_bool)
{
	var_350_int = 0; var_351_string = ""; // 0xc64 PushV
	var_351_string = "d8q01MladVladIsVictim"; // 0xc65 MovS
	func_2712(var_350_int, var_351_string); // 0xc66 NEW_2
	var_352_int = 1; // 0xc68 PushI
	var_353_bool = var_350_int == var_352_int; // 0xc69 Eq
	if(var_353_bool == 0) goto Label_3181; // 0xc6a JumpB
	var_348_bool = 1; // 0xc6b MovB
	return 0; // 0xc6c Return
	
Label_3181:
	var_348_bool = 0; // 0xc6d MovB
	return 0; // 0xc6e Return
}


func_2147()
{
	var_508_float = 0; var_509_float = 0; // 0x863 PushV
	var_510_int = 8; // 0x864 PushI
	var_511_int = 16; // 0x865 PushI
	rand(var_509_float, var_510_int, var_511_int); // 0x866 Func
	var_512_int = 10; // 0x868 PushI
	SetTimer(var_512_int, var_509_float); // 0x869 Func
	return 2; // 0x86b Return
}


func_2404(var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0; // 0x964 PushV
	IsLoaded(var_18_bool); // 0x965 Func
	var_16_bool = var_18_bool; // 0x967 Mov
	return 2; // 0x968 Return
}


func_2663(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0; // 0xa67 PushV
	var_152_bool = 0; // 0xa68 PushV
	func_2845(var_152_bool); // 0xa69 NEW_2
	if(var_152_bool == 0) goto Label_2676; // 0xa6b JumpB
	lshHasSpeech(var_151_bool, var_149_string); // 0xa6c Func
	var_153_bool = var_151_bool; // 0xa6e Push
	if(var_153_bool == 0) goto Label_2676; // 0xa6f JumpB
	lshPlaySpeech(var_149_string); // 0xa70 Func
	var_148_bool = 1; // 0xa72 MovB
	return 2; // 0xa73 Return
	
Label_2676:
	var_148_bool = 0; // 0xa74 MovB
	return 2; // 0xa75 Return
}


func_2409(var_54_bool, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; // 0x969 PushV
	GetPosition(var_67_cvector); // 0x96a ObjFunc
	GetEyesHeight(var_66_float); // 0x96c ObjFunc
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x96e PushE
	var_75_float = var_75_float + var_66_float; // 0x96f Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x970 PopE
	GetPosition(var_68_cvector); // 0x971 Func
	GetEyesHeight(var_66_float); // 0x973 Func
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x975 PushE
	var_76_float = var_76_float + var_66_float; // 0x976 Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x977 PopE
	var_69_cvector = var_67_cvector - var_68_cvector; // 0x978 Sub2
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x979 PushE
	var_77_float = 0; // 0x97a MovI
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x97b PopE
	var_78_int = var_69_cvector | var_69_cvector; // 0x97c Or
	var_79_float = sqrt(var_78_int); // 0x97d Sqrt
	var_69_cvector = var_69_cvector / var_69_cvector; // 0x97e Div2
	var_70_cvector = -var_69_cvector; // 0x97f Neg2
	var_80_float = var_69_cvector * var_56_float; // 0x980 Mult
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0x981 PushV
	var_83_cvector = CVector(0.0, 1.0, 0.0); // 0x982 PushVec
	var_82_cvector = var_70_cvector ^ var_83_cvector; // 0x983 Xor2
	func_2691(var_81_cvector, var_82_cvector); // 0x984 NEW_2
	var_89_int = 25; // 0x986 PushI
	var_90_float = var_81_cvector * var_89_int; // 0x987 Mult
	var_91_int = var_80_float + var_90_float; // 0x988 Add
	var_92_cvector = CVector(0.0, 10.0, 0.0); // 0x989 PushVec
	var_71_cvector = var_91_int - var_92_cvector; // 0x98a Sub2
	var_72_cvector = var_68_cvector + var_71_cvector; // 0x98b Add2
	IsOverrideActive(var_73_bool); // 0x98c Func
	var_93_bool = var_73_bool; // 0x98e Push
	if(var_93_bool == 0) goto Label_2450; // 0x98f JumpB
	var_54_bool = 0; // 0x990 MovB
	return 18; // 0x991 Return
	
Label_2450:
	StopWorld(); // 0x992 Func
	CameraTransit(var_72_cvector, var_70_cvector); // 0x994 Func
	var_94_float = GetByIndex(var_71_cvector, 0); // 0x996 PushE
	var_95_float = GetByIndex(var_71_cvector, 2); // 0x997 PushE
	Rotate(var_94_float, var_95_float); // 0x998 Func
	var_96_bool = 0; // 0x99a PushV
	func_2845(var_96_bool); // 0x99b NEW_2
	if(var_96_bool == 0) goto Label_2463; // 0x99d JumpB
	goto Label_2471; // 0x99e Jump
	
Label_2471:
	CameraWaitForPlayFinish(); // 0x9a7 Func
	ResumeWorld(); // 0x9a9 Func
	var_54_bool = 1; // 0x9ab MovB
	return 18; // 0x9ac Return
	
Label_2463:
	var_97_string = "head"; // 0x99f PushS
	HasAnimationTrack(var_74_bool, var_97_string); // 0x9a0 Func
	var_98_bool = var_74_bool; // 0x9a2 Push
	if(var_98_bool == 0) goto Label_2471; // 0x9a3 JumpB
	var_99_string = "head"; // 0x9a4 PushS
	LookAsyncCamera(var_99_string); // 0x9a5 Func
}


func_2923()
{
	var_53_object = Obj(); var_54_object = Obj(); // 0xb6b PushV
	var_55_string = "d8q01MatBringToy"; // 0xb6c PushS
	var_56_int = 1; // 0xb6d PushI
	SetVariable(var_55_string, var_56_int); // 0xb6e Func
	var_57_object = Obj(); // 0xb70 PushV
	func_3336(var_57_object); // 0xb71 NEW_2
	var_54_object = var_57_object; // 0xb72 Mov
	var_64_string = "d8q01MatGotoToyHouse"; // 0xb74 PushS
	var_65_string = "pt_map_d8q01_toyhouse"; // 0xb75 PushS
	var_66_int = 1; // 0xb76 PushI
	var_67_int = 515444; // 0xb77 PushI
	var_68_float = 0; // 0xb78 PushV
	func_2793(var_68_float); // 0xb79 NEW_2
	AddMark(var_64_string, var_65_string, var_66_int, var_67_int, var_68_float); // 0xb7b ObjFunc
	func_3243(); // 0xb7e NEW_2
	var_79_bool = 0; var_80_string = ""; var_81_string = ""; // 0xb80 PushV
	var_80_string = "quest_d8_01"; // 0xb81 MovS
	var_81_string = "place_toy"; // 0xb82 MovS
	func_2769(var_79_bool, var_80_string, var_81_string); // 0xb83 NEW_2
	return 2; // 0xb85 Return
}


func_2156()
{
	var_507_int = 10; // 0x86c PushI
	KillTimer(var_507_int); // 0x86d Func
	return 0; // 0x86f Return
}


func_3183(var_338_bool)
{
	var_340_int = 0; var_341_string = ""; // 0xc70 PushV
	var_341_string = "ood8Mat6"; // 0xc71 MovS
	func_2712(var_340_int, var_341_string); // 0xc72 NEW_2
	var_342_int = 0; // 0xc74 PushI
	var_343_bool = var_340_int == var_342_int; // 0xc75 Eq
	if(var_343_bool == 0) goto Label_3193; // 0xc76 JumpB
	var_338_bool = 1; // 0xc77 MovB
	return 0; // 0xc78 Return
	
Label_3193:
	var_338_bool = 0; // 0xc79 MovB
	return 0; // 0xc7a Return
}


func_2678()
{
	var_19_bool = 0; // 0xa76 PushV
	func_2845(var_19_bool); // 0xa77 NEW_2
	if(var_19_bool == 0) goto Label_2684; // 0xa79 JumpB
	lshStopSpeech(); // 0xa7a Func
	
Label_2684:
	return 0; // 0xa7c Return
}


func_3195(var_354_bool)
{
	var_356_int = 0; var_357_string = ""; // 0xc7c PushV
	var_357_string = "ood8Mat7"; // 0xc7d MovS
	func_2712(var_356_int, var_357_string); // 0xc7e NEW_2
	var_358_int = 0; // 0xc80 PushI
	var_359_bool = var_356_int == var_358_int; // 0xc81 Eq
	if(var_359_bool == 0) goto Label_3205; // 0xc82 JumpB
	var_354_bool = 1; // 0xc83 MovB
	return 0; // 0xc84 Return
	
Label_3205:
	var_354_bool = 0; // 0xc85 MovB
	return 0; // 0xc86 Return
}


func_2685(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj(); // 0xa7d PushV
	self(var_118_object); // 0xa7e Func
	var_116_object = var_118_object; // 0xa80 Mov
	return 2; // 0xa81 Return
}


func_2691(var_81_cvector, var_82_cvector)
{
	var_84_float = 0; var_85_float = 0; // 0xa83 PushV
	var_86_int = var_82_cvector | var_82_cvector; // 0xa84 Or
	var_85_float = sqrt(var_86_int); // 0xa85 Sqrt2
	var_87_float = 0.0; // 0xa86 PushF
	var_88_bool = var_85_float < var_87_float; // 0xa87 LT
	if(var_88_bool == 0) goto Label_2699; // 0xa88 JumpB
	var_81_cvector = CVector(0.0, 0.0, 0.0); // 0xa89 MovV
	return 2; // 0xa8a Return
	
Label_2699:
	var_81_cvector = var_82_cvector / var_82_cvector; // 0xa8b Div2
	return 2; // 0xa8c Return
}


func_3207(var_771_bool)
{
	var_773_int = 0; var_774_string = ""; // 0xc88 PushV
	var_774_string = "d8q02"; // 0xc89 MovS
	func_2712(var_773_int, var_774_string); // 0xc8a NEW_2
	var_775_int = 1; // 0xc8c PushI
	var_776_bool = var_773_int == var_775_int; // 0xc8d Eq
	if(var_776_bool == 0) goto Label_3217; // 0xc8e JumpB
	var_771_bool = 1; // 0xc8f MovB
	return 0; // 0xc90 Return
	
Label_3217:
	var_771_bool = 0; // 0xc91 MovB
	return 0; // 0xc92 Return
}


func_2951()
{
	var_115_string = "ood8Mat2"; // 0xb88 PushS
	var_116_int = 1; // 0xb89 PushI
	SetVariable(var_115_string, var_116_int); // 0xb8a Func
	return 0; // 0xb8c Return
}


func_2701(var_268_float, var_269_float, var_270_float, var_271_float)
{
	var_272_bool = var_269_float < var_270_float; // 0xa8e LT
	if(var_272_bool == 0) goto Label_2706; // 0xa8f JumpB
	var_268_float = var_270_float; // 0xa90 Mov
	return 0; // 0xa91 Return
	
Label_2706:
	var_273_bool = var_269_float > var_271_float; // 0xa92 GT
	if(var_273_bool == 0) goto Label_2710; // 0xa93 JumpB
	var_268_float = var_271_float; // 0xa94 Mov
	return 0; // 0xa95 Return
	
Label_2710:
	var_268_float = var_269_float; // 0xa96 Mov
	return 0; // 0xa97 Return
}


func_2957()
{
	var_121_object = Obj(); var_122_object = Obj(); // 0xb8d PushV
	var_123_object = Obj(); // 0xb8e PushV
	func_3336(var_123_object); // 0xb8f NEW_2
	var_122_object = var_123_object; // 0xb90 Mov
	var_124_string = "d8q01MatGotoBoiny"; // 0xb92 PushS
	var_125_string = "pt_map_boiny_main_entrance"; // 0xb93 PushS
	var_126_int = 1; // 0xb94 PushI
	var_127_int = 515324; // 0xb95 PushI
	var_128_float = 0; // 0xb96 PushV
	func_2793(var_128_float); // 0xb97 NEW_2
	AddMark(var_124_string, var_125_string, var_126_int, var_127_int, var_128_float); // 0xb99 ObjFunc
	func_3256(); // 0xb9c NEW_2
	var_137_bool = 0; var_138_string = ""; var_139_string = ""; // 0xb9e PushV
	var_138_string = "quest_d8_01"; // 0xb9f MovS
	var_139_string = "unlock_boiny"; // 0xba0 MovS
	func_2769(var_137_bool, var_138_string, var_139_string); // 0xba1 NEW_2
	return 2; // 0xba3 Return
}


func_144(var_2_object, var_422_string)
{
	var_423_bool = 0; // 0x91 PushV
	func_2845(var_423_bool); // 0x92 NEW_2
	var_424_bool = var_423_bool == 0; // 0x94 Not
	if(var_424_bool == 0) goto Label_151; // 0x95 JumpB
	return 0; // 0x96 Return
	
Label_151:
	var_425_bool = var_422_string == var_2_object; // 0x97 Eq
	if(var_425_bool == 0) goto Label_154; // 0x98 JumpB
	return 0; // 0x99 Return
	
Label_154:
	var_426_string = ""; var_427_bool = 0; // 0x9a PushV
	var_426_string = var_422_string; // 0x9b Mov
	var_428_string = ""; // 0x9c PushS
	var_429_bool = var_422_string == var_428_string; // 0x9d Eq
	if(var_429_bool == 0) goto Label_161; // 0x9e JumpB
	var_427_bool = 0; // 0x9f MovB
	goto Label_162; // 0xa0 Jump
	
Label_162:
	func_2648(var_426_string, var_427_bool); // 0xa2 NEW_2
	var_2_object = var_422_string; // 0xa4 TMov
	return 0; // 0xa5 Return
	
Label_161:
	var_427_bool = 1; // 0xa1 MovB
}


func_3219(var_364_bool, var_365_object)
{
	var_366_bool = 0; var_367_object = Obj(); var_368_string = ""; // 0xc94 PushV
	var_367_object = var_365_object; // 0xc95 Mov
	var_368_string = "feromicin"; // 0xc96 MovS
	func_2717(var_367_object, var_368_string); // 0xc97 NEW_2
	if(var_366_bool == 0) goto Label_3228; // 0xc99 JumpB
	var_364_bool = 1; // 0xc9a MovB
	return 0; // 0xc9b Return
	
Label_3228:
	var_364_bool = 0; // 0xc9c MovB
	return 0; // 0xc9d Return
}


func_2712(var_214_int, var_215_string)
{
	var_216_int = 0; var_217_int = 0; // 0xa98 PushV
	GetVariable(var_215_string, var_217_int); // 0xa99 Func
	var_214_int = var_217_int; // 0xa9b Mov
	return 2; // 0xa9c Return
}


func_2717(var_290_bool, var_292_string)
{
	var_293_int = 0; var_294_bool = 0; var_295_int = 0; var_296_bool = 0; // 0xa9d PushV
	GetInvItemByName(var_295_int, var_292_string); // 0xa9e Func
	HasItem(var_295_int, var_296_bool); // 0xaa0 ObjFunc
	var_290_bool = var_296_bool; // 0xaa2 Mov
	return 4; // 0xaa3 Return
}


func_3230()
{
	var_26_object = Obj(); var_27_object = Obj(); // 0xc9e PushV
	var_28_int = 179; // 0xc9f PushI
	var_29_int = 1; // 0xca0 PushI
	var_30_int = 515441; // 0xca1 PushI
	CreateDiaryEntry(var_27_object, var_28_int, var_29_int, var_30_int); // 0xca2 Func
	var_31_bool = 0; var_32_object = Obj(); var_33_int = 0; // 0xca4 PushV
	var_32_object = var_27_object; // 0xca5 Mov
	var_33_int = 175; // 0xca6 MovI
	func_3308(var_31_bool, var_32_object, var_33_int); // 0xca7 NEW_2
	return 2; // 0xca9 Return
}


func_2724(var_239_bool, var_240_object, var_241_float)
{
	var_242_bool = var_240_object == 0; // 0xaa5 Not
	if(var_242_bool == 0) goto Label_2729; // 0xaa6 JumpB
	var_239_bool = 0; // 0xaa7 MovB
	return 0; // 0xaa8 Return
	
Label_2729:
	var_243_int = 0; // 0xaa9 PushI
	var_244_bool = var_241_float > var_243_int; // 0xaaa GT
	if(var_244_bool == 0) goto Label_2736; // 0xaab JumpB
	var_245_int = 8; // 0xaac PushI
	SendWorldWndMessage(var_245_int); // 0xaad Func
	goto Label_2745; // 0xaaf Jump
	
Label_2745:
	var_246_float = 0; // 0xab9 PushV
	var_246_float = var_241_float; // 0xaba Mov
	func_2759(var_246_float); // 0xabb NEW_2
	var_250_bool = 0; var_251_object = Obj(); var_252_string = ""; var_253_float = 0; var_254_float = 0; var_255_float = 0; // 0xabd PushV
	var_251_object = var_240_object; // 0xabe Mov
	var_252_string = "reputation"; // 0xabf MovS
	var_253_float = var_241_float; // 0xac0 Mov
	var_254_float = 0; // 0xac1 MovI
	var_255_float = 1; // 0xac2 MovI
	func_2363(var_250_bool, var_251_object, var_252_string, var_253_float, var_254_float, var_255_float); // 0xac3 NEW_2
	var_239_bool = 1; // 0xac5 MovB
	return 0; // 0xac6 Return
	
Label_2736:
	var_274_int = 0; // 0xab0 PushI
	var_275_bool = var_241_float < var_274_int; // 0xab1 LT
	if(var_275_bool == 0) goto Label_2743; // 0xab2 JumpB
	var_276_int = 9; // 0xab3 PushI
	SendWorldWndMessage(var_276_int); // 0xab4 Func
	goto Label_2745; // 0xab6 Jump
	
Label_2743:
	var_239_bool = 0; // 0xab7 MovB
	return 0; // 0xab8 Return
}


func_2981()
{
	var_161_string = "ood8Mat4"; // 0xba6 PushS
	var_162_int = 1; // 0xba7 PushI
	SetVariable(var_161_string, var_162_int); // 0xba8 Func
	return 0; // 0xbaa Return
}


func_3243()
{
	var_71_object = Obj(); var_72_object = Obj(); // 0xcab PushV
	var_73_int = 180; // 0xcac PushI
	var_74_int = 1; // 0xcad PushI
	var_75_int = 515442; // 0xcae PushI
	CreateDiaryEntry(var_72_object, var_73_int, var_74_int, var_75_int); // 0xcaf Func
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0; // 0xcb1 PushV
	var_77_object = var_72_object; // 0xcb2 Mov
	var_78_int = 175; // 0xcb3 MovI
	func_3308(var_76_bool, var_77_object, var_78_int); // 0xcb4 NEW_2
	return 2; // 0xcb6 Return
}


func_2987()
{
	var_167_string = "ood8Mat5"; // 0xbac PushS
	var_168_int = 1; // 0xbad PushI
	SetVariable(var_167_string, var_168_int); // 0xbae Func
	return 0; // 0xbb0 Return
}


func_2477()
{
	var_383_bool = 0; var_384_bool = 0; // 0x9ad PushV
	CameraSwitchToNormal(); // 0x9ae Func
	var_385_bool = 0; // 0x9b0 PushV
	func_2845(var_385_bool); // 0x9b1 NEW_2
	if(var_385_bool == 0) goto Label_2485; // 0x9b3 JumpB
	goto Label_2493; // 0x9b4 Jump
	
Label_2493:
	return 2; // 0x9bd Return
	
Label_2485:
	var_386_string = "head"; // 0x9b5 PushS
	HasAnimationTrack(var_384_bool, var_386_string); // 0x9b6 Func
	var_387_bool = var_384_bool; // 0x9b8 Push
	if(var_387_bool == 0) goto Label_2493; // 0x9b9 JumpB
	var_388_string = "head"; // 0x9ba PushS
	UnlookAsync(var_388_string); // 0x9bb Func
}


func_1965(var_0_object, var_1_object, var_2_object, var_3_string, var_474_object, var_475_object)
{
	var_0_object = var_475_object; // 0x7ae TMov
	var_1_object = var_474_object; // 0x7af TMov
	var_3_string = 0; // 0x7b0 TMovB
	var_480_int = 1; // 0x7b1 PushI
	if(var_480_int == 0) goto Label_1993; // 0x7b2 JumpB
	var_481_string = ""; // 0x7b3 PushV
	var_481_string = "Neutral"; // 0x7b4 MovS
	func_2023(var_475_object, var_481_string); // 0x7b5 NEW_2
	var_489_int = 540548; // 0x7b7 PushI
	SetMessage(var_489_int); // 0x7b8 TObjFunc
	ClearReplies(); // 0x7ba TObjFunc
	var_490_int = 540549; // 0x7bc PushI
	var_491_int = -1; // 0x7bd PushI
	var_492_int = 42558; // 0x7be PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x7bf TObjFunc
	var_493_int = 540797; // 0x7c1 PushI
	var_494_int = -1; // 0x7c2 PushI
	var_495_int = 42846; // 0x7c3 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x7c4 TObjFunc
	goto Label_1993; // 0x7c6 Jump
	
Label_1993:
	var_496_bool = 0; // 0x7c9 PushV
	func_2845(var_496_bool); // 0x7ca NEW_2
	if(var_496_bool == 0) goto Label_2008; // 0x7cc JumpB
	
Label_1997:
	lshWaitForAnimEnd(); // 0x7cd Func
	var_497_string = var_3_string; // 0x7cf PushT
	if(var_497_string == 0) goto Label_2002; // 0x7d0 JumpB
	goto Label_2007; // 0x7d1 Jump
	
Label_2007:
	goto Label_2022; // 0x7d7 Jump
	
Label_2022:
	return 0; // 0x7e6 Return
	
Label_2002:
	var_498_string = ""; // 0x7d2 PushV
	var_498_string = var_2_object; // 0x7d3 MovT
	func_2632(var_498_string); // 0x7d4 NEW_2
	goto Label_1997; // 0x7d6 Jump
	
Label_2008:
	var_499_string = "all"; // 0x7d8 PushS
	var_500_string = "idle"; // 0x7d9 PushS
	PlayAnimation(var_499_string, var_500_string); // 0x7da Func
	
Label_2012:
	WaitForAnimEnd(); // 0x7dc Func
	var_501_string = var_3_string; // 0x7de PushT
	if(var_501_string == 0) goto Label_2017; // 0x7df JumpB
	goto Label_2022; // 0x7e0 Jump
	
Label_2017:
	var_502_string = "all"; // 0x7e1 PushS
	var_503_string = "idle"; // 0x7e2 PushS
	PlayAnimation(var_502_string, var_503_string); // 0x7e3 Func
	goto Label_2012; // 0x7e5 Jump
}


func_2993()
{
	var_173_string = "ood8Mat6"; // 0xbb2 PushS
	var_174_int = 1; // 0xbb3 PushI
	SetVariable(var_173_string, var_174_int); // 0xbb4 Func
	return 0; // 0xbb6 Return
}


func_2999()
{
	var_204_string = "ood8Mat7"; // 0xbb8 PushS
	var_205_int = 1; // 0xbb9 PushI
	SetVariable(var_204_string, var_205_int); // 0xbba Func
	return 0; // 0xbbc Return
}


func_3256()
{
	var_129_object = Obj(); var_130_object = Obj(); // 0xcb8 PushV
	var_131_int = 181; // 0xcb9 PushI
	var_132_int = 1; // 0xcba PushI
	var_133_int = 515443; // 0xcbb PushI
	CreateDiaryEntry(var_130_object, var_131_int, var_132_int, var_133_int); // 0xcbc Func
	var_134_bool = 0; var_135_object = Obj(); var_136_int = 0; // 0xcbe PushV
	var_135_object = var_130_object; // 0xcbf Mov
	var_136_int = 175; // 0xcc0 MovI
	func_3308(var_134_bool, var_135_object, var_136_int); // 0xcc1 NEW_2
	return 2; // 0xcc3 Return
}


func_3005()
{
	var_232_string = "d8TalkToMat"; // 0xbbe PushS
	var_233_int = 1; // 0xbbf PushI
	SetVariable(var_232_string, var_233_int); // 0xbc0 Func
	return 0; // 0xbc2 Return
}


func_2494(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; // 0x9be PushV
	var_123_string = "voice_common"; // 0x9bf PushS
	GetVariable(var_123_string, var_121_int); // 0x9c0 Func
	var_124_int = var_121_int; // 0x9c2 Push
	if(var_124_int == 0) goto Label_2532; // 0x9c3 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x9c4 PushV
	var_126_object = var_115_object; // 0x9c5 Mov
	func_2552(var_126_object); // 0x9c6 NEW_2
	var_155_bool = var_125_bool == 0; // 0x9c8 Not
	if(var_155_bool == 0) goto Label_2514; // 0x9c9 JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x9ca PushV
	var_157_object = var_115_object; // 0x9cb Mov
	func_2589(var_157_object); // 0x9cc NEW_2
	var_186_bool = var_156_bool == 0; // 0x9ce Not
	if(var_186_bool == 0) goto Label_2514; // 0x9cf JumpB
	var_114_bool = 0; // 0x9d0 MovB
	return 4; // 0x9d1 Return
	
Label_2514:
	var_187_int = 2; // 0x9d2 PushI
	irand(var_122_int, var_187_int); // 0x9d3 Func
	var_188_int = var_122_int; // 0x9d5 Push
	if(var_188_int == 0) goto Label_2527; // 0x9d6 JumpB
	var_189_string = "voice_common"; // 0x9d7 PushS
	var_190_int = 1; // 0x9d8 PushI
	var_191_int = var_121_int + var_190_int; // 0x9d9 Add
	var_192_int = 3; // 0x9da PushI
	var_193_int = var_191_int / var_192_int; // 0x9db Mod
	SetVariable(var_189_string, var_193_int); // 0x9dc Func
	goto Label_2531; // 0x9de Jump
	
Label_2531:
	goto Label_2550; // 0x9e3 Jump
	
Label_2550:
	var_114_bool = 1; // 0x9f6 MovB
	return 4; // 0x9f7 Return
	
Label_2527:
	var_194_string = "voice_common"; // 0x9df PushS
	var_195_int = 0; // 0x9e0 PushI
	SetVariable(var_194_string, var_195_int); // 0x9e1 Func
	
Label_2532:
	var_196_bool = 0; var_197_object = Obj(); // 0x9e4 PushV
	var_197_object = var_115_object; // 0x9e5 Mov
	func_2589(var_197_object); // 0x9e6 NEW_2
	var_198_bool = var_196_bool == 0; // 0x9e8 Not
	if(var_198_bool == 0) goto Label_2546; // 0x9e9 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x9ea PushV
	var_200_object = var_115_object; // 0x9eb Mov
	func_2552(var_200_object); // 0x9ec NEW_2
	var_201_bool = var_199_bool == 0; // 0x9ee Not
	if(var_201_bool == 0) goto Label_2546; // 0x9ef JumpB
	var_114_bool = 0; // 0x9f0 MovB
	return 4; // 0x9f1 Return
	
Label_2546:
	var_202_string = "voice_common"; // 0x9f2 PushS
	var_203_int = 1; // 0x9f3 PushI
	SetVariable(var_202_string, var_203_int); // 0x9f4 Func
}


func_3011()
{
	func_3269(); // 0xbc5 NEW_2
	var_234_bool = 0; var_235_string = ""; var_236_string = ""; // 0xbc7 PushV
	var_235_string = "quest_d8_02"; // 0xbc8 MovS
	var_236_string = "completed"; // 0xbc9 MovS
	func_2769(var_234_bool, var_235_string, var_236_string); // 0xbca NEW_2
	return 0; // 0xbcc Return
}


func_3269()
{
	var_226_object = Obj(); var_227_object = Obj(); // 0xcc5 PushV
	var_228_int = 128; // 0xcc6 PushI
	var_229_int = 2; // 0xcc7 PushI
	var_230_int = 513773; // 0xcc8 PushI
	CreateDiaryEntry(var_227_object, var_228_int, var_229_int, var_230_int); // 0xcc9 Func
	var_231_bool = 0; var_232_object = Obj(); var_233_int = 0; // 0xccb PushV
	var_232_object = var_227_object; // 0xccc Mov
	var_233_int = 127; // 0xccd MovI
	func_3308(var_231_bool, var_232_object, var_233_int); // 0xcce NEW_2
	return 2; // 0xcd0 Return
}


func_2759(var_246_float)
{
	var_247_object = Obj(); var_248_object = Obj(); // 0xac7 PushV
	CreateFloatVector(var_248_object); // 0xac8 Func
	add(var_246_float); // 0xaca ObjFunc
	var_249_int = 16; // 0xacc PushI
	SendWorldWndMessage(var_249_int, var_248_object); // 0xacd Func
	return 2; // 0xacf Return
}


func_3021()
{
	var_281_string = "d8q02"; // 0xbce PushS
	var_282_int = -1; // 0xbcf PushI
	SetVariable(var_281_string, var_282_int); // 0xbd0 Func
	func_3282(); // 0xbd3 NEW_2
	return 0; // 0xbd5 Return
}


func_2769(var_79_bool, var_80_string, var_81_string)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0xad1 PushV
	FindActor(var_83_object, var_80_string); // 0xad2 Func
	var_84_bool = var_83_object == 0; // 0xad4 NullEq
	if(var_84_bool == 0) goto Label_2776; // 0xad5 JumpB
	var_79_bool = 0; // 0xad6 MovB
	return 2; // 0xad7 Return
	
Label_2776:
	Trigger(var_83_object, var_81_string); // 0xad8 Func
	var_79_bool = 1; // 0xada MovB
	return 2; // 0xadb Return
}


func_3282()
{
	var_283_object = Obj(); var_284_object = Obj(); // 0xcd2 PushV
	var_285_int = 129; // 0xcd3 PushI
	var_286_int = 2; // 0xcd4 PushI
	var_287_int = 513774; // 0xcd5 PushI
	CreateDiaryEntry(var_284_object, var_285_int, var_286_int, var_287_int); // 0xcd6 Func
	var_288_bool = 0; var_289_object = Obj(); var_290_int = 0; // 0xcd8 PushV
	var_289_object = var_284_object; // 0xcd9 Mov
	var_290_int = 127; // 0xcda MovI
	func_3308(var_288_bool, var_289_object, var_290_int); // 0xcdb NEW_2
	return 2; // 0xcdd Return
}


func_3030()
{
	var_218_int = 0; var_219_int = 0; // 0xbd6 PushV
	var_220_string = "feromicin"; // 0xbd7 PushS
	var_221_int = 1; // 0xbd8 PushI
	RemoveItemByType(var_219_int, var_220_string, var_221_int); // 0xbd9 ObjFunc
	return 2; // 0xbdb Return
}


func_2267()
{
	var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; // 0x8db PushV
	WaitForAnimEnd(); // 0x8dc Func
	var_32_bool = 0; // 0x8de PushV
	func_2404(var_32_bool); // 0x8df NEW_2
	var_33_bool = var_32_bool == 0; // 0x8e1 Not
	if(var_33_bool == 0) goto Label_2276; // 0x8e2 JumpB
	return 12; // 0x8e3 Return
	
Label_2276:
	var_34_int = 0; // 0x8e4 PushV
	func_2820(var_34_int); // 0x8e5 NEW_2
	var_26_int = var_34_int; // 0x8e6 Mov
	var_27_int = 0; // 0x8e8 MovI
	
Label_2281:
	var_47_bool = 0; // 0x8e9 PushV
	var_47_bool = 0; // 0x8ea MovB
	var_48_int = 5; // 0x8eb PushI
	var_49_bool = var_27_int < var_48_int; // 0x8ec LT
	if(var_49_bool == 0) goto Label_2291; // 0x8ed JumpB
	var_50_bool = 0; // 0x8ee PushV
	func_2404(var_50_bool); // 0x8ef NEW_2
	if(var_50_bool == 0) goto Label_2291; // 0x8f1 JumpB
	var_47_bool = 1; // 0x8f2 MovB
	
Label_2291:
	if(var_47_bool == 0) goto Label_2333; // 0x8f3 JumpB
	var_51_bool = var_26_int == 0; // 0x8f4 Not
	if(var_51_bool == 0) goto Label_2301; // 0x8f5 JumpB
	var_52_int = 3; // 0x8f6 PushI
	Sleep(var_52_int, var_28_bool); // 0x8f7 Func
	var_53_bool = var_28_bool == 0; // 0x8f9 Not
	if(var_53_bool == 0) goto Label_2300; // 0x8fa JumpB
	goto Label_2333; // 0x8fb Jump
	
Label_2333:
	ResetAAS(); // 0x91d Func
	return 12; // 0x91f Return
	
Label_2300:
	goto Label_2322; // 0x8fc Jump
	
Label_2322:
	var_54_bool = 0; // 0x912 PushV
	func_2336(var_54_bool); // 0x913 NEW_2
	var_55_bool = var_54_bool == 0; // 0x915 Not
	if(var_55_bool == 0) goto Label_2328; // 0x916 JumpB
	goto Label_2333; // 0x917 Jump
	
Label_2328:
	ResetAAS(); // 0x918 Func
	var_56_int = 1; // 0x91a PushI
	var_27_int = var_27_int + var_56_int; // 0x91b Add2
	goto Label_2281; // 0x91c Jump
	
Label_2301:
	irand(var_29_int, var_26_int); // 0x8fd Func
	var_57_int = 5; // 0x8ff PushI
	irand(var_30_int, var_57_int); // 0x900 Func
	var_58_int = 0; // 0x902 PushI
	var_59_bool = var_30_int != var_58_int; // 0x903 Neq
	if(var_59_bool == 0) goto Label_2310; // 0x904 JumpB
	var_29_int = 0; // 0x905 MovI
	
Label_2310:
	var_60_string = "all"; // 0x906 PushS
	var_61_string = ""; var_62_int = 0; // 0x907 PushV
	var_62_int = var_29_int; // 0x908 Mov
	func_2813(var_61_string, var_62_int); // 0x909 NEW_2
	PlayAnimation(var_60_string, var_61_string); // 0x90b Func
	WaitForAnimEnd(var_31_bool); // 0x90d Func
	var_63_bool = var_31_bool == 0; // 0x90f Not
	if(var_63_bool == 0) goto Label_2322; // 0x910 JumpB
	goto Label_2333; // 0x911 Jump
}


func_3036()
{
	var_87_object = Obj(); var_88_string = ""; var_89_float = 0; // 0xbdd PushV
	var_90_object = Obj(); // 0xbde PushV
	func_3336(var_90_object); // 0xbdf NEW_2
	var_87_object = var_90_object; // 0xbe0 Mov
	var_88_string = "pt_map_d8q01_toyhouse"; // 0xbe2 MovS
	var_89_float = 2; // 0xbe3 MovI
	func_3353(var_87_object, var_88_string, var_89_float); // 0xbe4 NEW_2
	var_110_object = Obj(); // 0xbe6 PushV
	func_3336(var_110_object); // 0xbe7 NEW_2
	ShowMap(var_110_object); // 0xbe9 ObjFunc
	return 0; // 0xbeb Return
}


func_2781(var_182_bool, var_183_string, var_184_string, var_185_string)
{
	var_186_object = Obj(); var_187_object = Obj(); // 0xadd PushV
	FindActor(var_187_object, var_183_string); // 0xade Func
	var_188_bool = var_187_object == 0; // 0xae0 NullEq
	if(var_188_bool == 0) goto Label_2788; // 0xae1 JumpB
	var_182_bool = 0; // 0xae2 MovB
	return 2; // 0xae3 Return
	
Label_2788:
	Trigger(var_187_object, var_184_string, var_185_string); // 0xae4 Func
	var_182_bool = 1; // 0xae6 MovB
	return 2; // 0xae7 Return
}


func_3295(var_40_object)
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xcdf PushV
	GetDiaryRoot(var_42_object); // 0xce0 Func
	var_43_bool = var_42_object == 0; // 0xce2 Not
	if(var_43_bool == 0) goto Label_3305; // 0xce3 JumpB
	var_44_string = "Can't retrieve diary root"; // 0xce4 PushS
	Trace(var_44_string); // 0xce5 Func
	var_40_object = 0; // 0xce7 MovB
	return 2; // 0xce8 Return
	
Label_3305:
	var_40_object = var_42_object; // 0xce9 Mov
	return 2; // 0xcea Return
}


func_2023(var_2_object, var_481_string)
{
	var_482_bool = 0; // 0x7e8 PushV
	func_2845(var_482_bool); // 0x7e9 NEW_2
	var_483_bool = var_482_bool == 0; // 0x7eb Not
	if(var_483_bool == 0) goto Label_2030; // 0x7ec JumpB
	return 0; // 0x7ed Return
	
Label_2030:
	var_484_bool = var_481_string == var_2_object; // 0x7ee Eq
	if(var_484_bool == 0) goto Label_2033; // 0x7ef JumpB
	return 0; // 0x7f0 Return
	
Label_2033:
	var_485_string = ""; var_486_bool = 0; // 0x7f1 PushV
	var_485_string = var_481_string; // 0x7f2 Mov
	var_487_string = ""; // 0x7f3 PushS
	var_488_bool = var_481_string == var_487_string; // 0x7f4 Eq
	if(var_488_bool == 0) goto Label_2040; // 0x7f5 JumpB
	var_486_bool = 0; // 0x7f6 MovB
	goto Label_2041; // 0x7f7 Jump
	
Label_2041:
	func_2648(var_485_string, var_486_bool); // 0x7f9 NEW_2
	var_2_object = var_481_string; // 0x7fb TMov
	return 0; // 0x7fc Return
	
Label_2040:
	var_486_bool = 1; // 0x7f8 MovB
}


func_2793(var_68_float)
{
	var_69_float = 0; var_70_float = 0; // 0xae9 PushV
	GetGameTime(var_70_float); // 0xaea Func
	var_68_float = var_70_float; // 0xaec Mov
	return 2; // 0xaed Return
}


func_3308(var_31_bool, var_32_object, var_33_int)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; var_37_object = Obj(); var_38_object = Obj(); var_39_int = 0; // 0xcec PushV
	var_40_object = Obj(); // 0xced PushV
	func_3295(var_40_object); // 0xcee NEW_2
	var_37_object = var_40_object; // 0xcef Mov
	Find(var_33_int, var_38_object); // 0xcf1 ObjFunc
	var_45_bool = var_38_object == 0; // 0xcf3 Not
	if(var_45_bool == 0) goto Label_3323; // 0xcf4 JumpB
	var_46_string = "Can't find diary parent with id: "; // 0xcf5 PushS
	var_47_int = var_46_string + var_33_int; // 0xcf6 Add
	Trace(var_47_int); // 0xcf7 Func
	var_31_bool = 0; // 0xcf9 MovB
	return 6; // 0xcfa Return
	
Label_3323:
	AddChild(var_32_object); // 0xcfb ObjFunc
	var_48_int = 7; // 0xcfd PushI
	SendWorldWndMessage(var_48_int); // 0xcfe Func
	GetCategory(var_39_int); // 0xd00 ObjFunc
	SetDiarySection(var_39_int); // 0xd02 Func
	var_31_bool = 0; // 0xd04 MovB
	return 6; // 0xd05 Return
}


func_3052(var_369_bool)
{
	var_371_int = 0; var_372_string = ""; // 0xbed PushV
	var_372_string = "d8q02"; // 0xbee MovS
	func_2712(var_371_int, var_372_string); // 0xbef NEW_2
	var_373_int = 2; // 0xbf1 PushI
	var_374_bool = var_371_int == var_373_int; // 0xbf2 Eq
	if(var_374_bool == 0) goto Label_3062; // 0xbf3 JumpB
	var_369_bool = 1; // 0xbf4 MovB
	return 0; // 0xbf5 Return
	
Label_3062:
	var_369_bool = 0; // 0xbf6 MovB
	return 0; // 0xbf7 Return
}


func_2798(var_37_int)
{
	var_38_float = 0; var_39_float = 0; // 0xaee PushV
	GetGameTime(var_39_float); // 0xaef Func
	var_40_int = 1; // 0xaf1 PushI
	var_41_int = 0; // 0xaf2 PushV
	var_42_int = 24; // 0xaf3 PushI
	var_41_int = var_39_float / var_39_float; // 0xaf4 Div2
	var_37_int = var_40_int + var_41_int; // 0xaf5 Add2
	return 2; // 0xaf6 Return
}


func_2807(var_35_bool, var_36_int)
{
	var_37_int = 0; // 0xaf8 PushV
	func_2798(var_37_int); // 0xaf9 NEW_2
	var_35_bool = var_37_int == var_36_int; // 0xafb Eq2
	return 0; // 0xafc Return
}


func_2552(var_125_bool)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; // 0x9f8 PushV
	var_132_string = "c"; // 0x9f9 MovS
	var_133_int = 0; // 0x9fa MovI
	
Label_2555:
	var_137_int = 1; // 0x9fb PushI
	if(var_137_int == 0) goto Label_2568; // 0x9fc JumpB
	var_138_int = 1; // 0x9fd PushI
	var_139_int = var_133_int + var_138_int; // 0x9fe Add
	var_140_int = var_132_string + var_139_int; // 0x9ff Add
	HasProperty(var_140_int, var_134_bool); // 0xa00 ObjFunc
	var_141_bool = var_134_bool == 0; // 0xa02 Not
	if(var_141_bool == 0) goto Label_2565; // 0xa03 JumpB
	goto Label_2568; // 0xa04 Jump
	
Label_2568:
	var_142_bool = var_133_int == 0; // 0xa08 Not
	if(var_142_bool == 0) goto Label_2572; // 0xa09 JumpB
	var_125_bool = 0; // 0xa0a MovB
	return 10; // 0xa0b Return
	
Label_2572:
	var_135_int = 0; // 0xa0c MovI
	var_143_int = 1; // 0xa0d PushI
	var_144_bool = var_133_int > var_143_int; // 0xa0e GT
	if(var_144_bool == 0) goto Label_2578; // 0xa0f JumpB
	irand(var_135_int, var_133_int); // 0xa10 Func
	
Label_2578:
	var_145_int = 1; // 0xa12 PushI
	var_146_int = var_135_int + var_145_int; // 0xa13 Add
	var_147_int = var_132_string + var_146_int; // 0xa14 Add
	GetProperty(var_147_int, var_136_string); // 0xa15 ObjFunc
	var_148_bool = 0; var_149_string = ""; // 0xa17 PushV
	var_149_string = var_136_string; // 0xa18 Mov
	func_2663(var_148_bool, var_149_string); // 0xa19 NEW_2
	var_125_bool = var_148_bool; // 0xa1a Mov
	return 10; // 0xa1c Return
	
Label_2565:
	var_154_int = 1; // 0xa05 PushI
	var_133_int = var_133_int + var_154_int; // 0xa06 Add2
	goto Label_2555; // 0xa07 Jump
}


func_2813(var_40_string, var_41_int)
{
	var_42_string = ""; var_43_string = ""; // 0xafd PushV
	var_43_string = "idle"; // 0xafe MovS
	var_44_int = var_41_int; // 0xaff Push
	if(var_44_int == 0) goto Label_2818; // 0xb00 JumpB
	var_43_string = var_43_string + var_41_int; // 0xb01 Add2
	
Label_2818:
	var_40_string = var_43_string; // 0xb02 Mov
	return 2; // 0xb03 Return
}


