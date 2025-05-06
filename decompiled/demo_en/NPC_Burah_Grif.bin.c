task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	lshStopAnimation(); // 0x10 Func
	StopTrade(); // 0x12 Func
	var_0_bool = 1; // 0x14 TMovB
	return 0; // 0x15 Return
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xbd PushI
	if(var_69_int == 0) goto Label_280; // 0xbe JumpB
	func_5564(); // 0xc0 NEW_2
	var_71_int = 36971; // 0xc2 PushI
	var_72_bool = var_67_bool == var_71_int; // 0xc3 Eq
	if(var_72_bool == 0) goto Label_222; // 0xc4 JumpB
	var_73_string = ""; // 0xc5 PushV
	var_73_string = "Neutral"; // 0xc6 MovS
	func_166(var_68_cvector, var_73_string); // 0xc7 NEW_2
	var_90_int = 535294; // 0xc9 PushI
	SetMessage(var_90_int); // 0xca TObjFunc
	ClearReplies(); // 0xcc TObjFunc
	var_91_int = 535295; // 0xce PushI
	var_92_int = 36973; // 0xcf PushI
	var_93_int = 36972; // 0xd0 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xd1 TObjFunc
	var_94_int = 535302; // 0xd3 PushI
	var_95_int = -1; // 0xd4 PushI
	var_96_int = 36980; // 0xd5 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xd6 TObjFunc
	var_97_int = 535303; // 0xd8 PushI
	var_98_int = -1; // 0xd9 PushI
	var_99_int = 36981; // 0xda PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xdb TObjFunc
	return 0; // 0xdd Return
	
Label_222:
	var_100_int = 36973; // 0xde PushI
	var_101_bool = var_67_bool == var_100_int; // 0xdf Eq
	if(var_101_bool == 0) goto Label_245; // 0xe0 JumpB
	var_102_string = ""; // 0xe1 PushV
	var_102_string = "Neutral"; // 0xe2 MovS
	func_166(var_68_cvector, var_102_string); // 0xe3 NEW_2
	var_103_int = 535296; // 0xe5 PushI
	SetMessage(var_103_int); // 0xe6 TObjFunc
	ClearReplies(); // 0xe8 TObjFunc
	var_104_int = 535297; // 0xea PushI
	var_105_int = 36975; // 0xeb PushI
	var_106_int = 36974; // 0xec PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xed TObjFunc
	var_107_int = 535301; // 0xef PushI
	var_108_int = 36975; // 0xf0 PushI
	var_109_int = 36978; // 0xf1 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xf2 TObjFunc
	return 0; // 0xf4 Return
	
Label_245:
	var_110_int = 36975; // 0xf5 PushI
	var_111_bool = var_67_bool == var_110_int; // 0xf6 Eq
	if(var_111_bool == 0) goto Label_268; // 0xf7 JumpB
	var_112_string = ""; // 0xf8 PushV
	var_112_string = "Neutral"; // 0xf9 MovS
	func_166(var_68_cvector, var_112_string); // 0xfa NEW_2
	var_113_int = 535298; // 0xfc PushI
	SetMessage(var_113_int); // 0xfd TObjFunc
	ClearReplies(); // 0xff TObjFunc
	var_114_int = 535299; // 0x101 PushI
	var_115_int = -1; // 0x102 PushI
	var_116_int = 36976; // 0x103 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x104 TObjFunc
	var_117_int = 535300; // 0x106 PushI
	var_118_int = -1; // 0x107 PushI
	var_119_int = 36977; // 0x108 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x109 TObjFunc
	return 0; // 0x10b Return
	
Label_268:
	var_3_object = 1; // 0x10c TMovB
	var_120_bool = 0; // 0x10d PushV
	func_5817(var_120_bool); // 0x10e NEW_2
	if(var_120_bool == 0) goto Label_276; // 0x110 JumpB
	lshStopAnimation(); // 0x111 Func
	goto Label_278; // 0x113 Jump
	
Label_278:
	return 0; // 0x116 Return
	
Label_276:
	StopAnimation(); // 0x114 Func
	
Label_280:
	return 0; // 0x118 Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x274 PushI
	if(var_69_int == 0) goto Label_1698; // 0x275 JumpB
	func_5564(); // 0x277 NEW_2
	var_71_int = 19085; // 0x279 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x27a Eq
	if(var_72_bool == 0) goto Label_646; // 0x27b JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x27c PushV
	var_73_object = var_1_object; // 0x27d MovT
	var_74_object = var_0_bool; // 0x27e MovT
	func_5994(); // 0x27f NEW_2
	var_143_object = Obj(); var_144_object = Obj(); // 0x281 PushV
	var_143_object = var_1_object; // 0x282 MovT
	var_144_object = var_0_bool; // 0x283 MovT
	func_6066(); // 0x284 NEW_2
	
Label_646:
	var_169_int = 19220; // 0x286 PushI
	var_170_bool = var_68_cvector == var_169_int; // 0x287 Eq
	if(var_170_bool == 0) goto Label_664; // 0x288 JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0x289 PushV
	var_171_object = var_1_object; // 0x28a MovT
	var_172_object = var_0_bool; // 0x28b MovT
	func_6082(var_172_object); // 0x28c NEW_2
	var_195_object = Obj(); var_196_object = Obj(); // 0x28e PushV
	var_195_object = var_1_object; // 0x28f MovT
	var_196_object = var_0_bool; // 0x290 MovT
	func_5964(); // 0x291 NEW_2
	var_199_object = Obj(); var_200_object = Obj(); // 0x293 PushV
	var_199_object = var_1_object; // 0x294 MovT
	var_200_object = var_0_bool; // 0x295 MovT
	func_6093(); // 0x296 NEW_2
	
Label_664:
	var_211_int = 21631; // 0x298 PushI
	var_212_bool = var_68_cvector == var_211_int; // 0x299 Eq
	if(var_212_bool == 0) goto Label_672; // 0x29a JumpB
	var_213_object = Obj(); var_214_object = Obj(); // 0x29b PushV
	var_213_object = var_1_object; // 0x29c MovT
	var_214_object = var_0_bool; // 0x29d MovT
	func_6093(); // 0x29e NEW_2
	
Label_672:
	var_215_int = 19227; // 0x2a0 PushI
	var_216_bool = var_68_cvector == var_215_int; // 0x2a1 Eq
	if(var_216_bool == 0) goto Label_685; // 0x2a2 JumpB
	var_217_object = Obj(); var_218_object = Obj(); // 0x2a3 PushV
	var_217_object = var_1_object; // 0x2a4 MovT
	var_218_object = var_0_bool; // 0x2a5 MovT
	func_5982(var_218_object); // 0x2a6 NEW_2
	var_257_object = Obj(); var_258_object = Obj(); // 0x2a8 PushV
	var_257_object = var_1_object; // 0x2a9 MovT
	var_258_object = var_0_bool; // 0x2aa MovT
	func_6093(); // 0x2ab NEW_2
	
Label_685:
	var_259_int = 28346; // 0x2ad PushI
	var_260_bool = var_68_cvector == var_259_int; // 0x2ae Eq
	if(var_260_bool == 0) goto Label_703; // 0x2af JumpB
	var_261_object = Obj(); var_262_object = Obj(); // 0x2b0 PushV
	var_261_object = var_1_object; // 0x2b1 MovT
	var_262_object = var_0_bool; // 0x2b2 MovT
	func_5942(); // 0x2b3 NEW_2
	var_265_object = Obj(); var_266_object = Obj(); // 0x2b5 PushV
	var_265_object = var_1_object; // 0x2b6 MovT
	var_266_object = var_0_bool; // 0x2b7 MovT
	func_5948(); // 0x2b8 NEW_2
	var_275_object = Obj(); var_276_object = Obj(); // 0x2ba PushV
	var_275_object = var_1_object; // 0x2bb MovT
	var_276_object = var_0_bool; // 0x2bc MovT
	func_5837(); // 0x2bd NEW_2
	
Label_703:
	var_282_int = 19091; // 0x2bf PushI
	var_283_bool = var_68_cvector == var_282_int; // 0x2c0 Eq
	if(var_283_bool == 0) goto Label_716; // 0x2c1 JumpB
	var_284_object = Obj(); var_285_object = Obj(); // 0x2c2 PushV
	var_284_object = var_1_object; // 0x2c3 MovT
	var_285_object = var_0_bool; // 0x2c4 MovT
	func_5994(); // 0x2c5 NEW_2
	var_286_object = Obj(); var_287_object = Obj(); // 0x2c7 PushV
	var_286_object = var_1_object; // 0x2c8 MovT
	var_287_object = var_0_bool; // 0x2c9 MovT
	func_6066(); // 0x2ca NEW_2
	
Label_716:
	var_288_int = 19094; // 0x2cc PushI
	var_289_bool = var_68_cvector == var_288_int; // 0x2cd Eq
	if(var_289_bool == 0) goto Label_734; // 0x2ce JumpB
	var_290_object = Obj(); var_291_object = Obj(); // 0x2cf PushV
	var_290_object = var_1_object; // 0x2d0 MovT
	var_291_object = var_0_bool; // 0x2d1 MovT
	func_5982(var_291_object); // 0x2d2 NEW_2
	var_292_object = Obj(); var_293_object = Obj(); // 0x2d4 PushV
	var_292_object = var_1_object; // 0x2d5 MovT
	var_293_object = var_0_bool; // 0x2d6 MovT
	func_6045(); // 0x2d7 NEW_2
	var_304_object = Obj(); var_305_object = Obj(); // 0x2d9 PushV
	var_304_object = var_1_object; // 0x2da MovT
	var_305_object = var_0_bool; // 0x2db MovT
	func_6093(); // 0x2dc NEW_2
	
Label_734:
	var_306_int = 19115; // 0x2de PushI
	var_307_bool = var_68_cvector == var_306_int; // 0x2df Eq
	if(var_307_bool == 0) goto Label_742; // 0x2e0 JumpB
	var_308_object = Obj(); var_309_object = Obj(); // 0x2e1 PushV
	var_308_object = var_1_object; // 0x2e2 MovT
	var_309_object = var_0_bool; // 0x2e3 MovT
	func_5970(); // 0x2e4 NEW_2
	
Label_742:
	var_312_int = 19117; // 0x2e6 PushI
	var_313_bool = var_68_cvector == var_312_int; // 0x2e7 Eq
	if(var_313_bool == 0) goto Label_765; // 0x2e8 JumpB
	var_314_object = Obj(); var_315_object = Obj(); // 0x2e9 PushV
	var_314_object = var_1_object; // 0x2ea MovT
	var_315_object = var_0_bool; // 0x2eb MovT
	func_6036(); // 0x2ec NEW_2
	var_326_object = Obj(); var_327_object = Obj(); // 0x2ee PushV
	var_326_object = var_1_object; // 0x2ef MovT
	var_327_object = var_0_bool; // 0x2f0 MovT
	func_6082(var_327_object); // 0x2f1 NEW_2
	var_328_object = Obj(); var_329_object = Obj(); // 0x2f3 PushV
	var_328_object = var_1_object; // 0x2f4 MovT
	var_329_object = var_0_bool; // 0x2f5 MovT
	func_5964(); // 0x2f6 NEW_2
	var_330_object = Obj(); var_331_object = Obj(); // 0x2f8 PushV
	var_330_object = var_1_object; // 0x2f9 MovT
	var_331_object = var_0_bool; // 0x2fa MovT
	func_6093(); // 0x2fb NEW_2
	
Label_765:
	var_332_int = 21634; // 0x2fd PushI
	var_333_bool = var_68_cvector == var_332_int; // 0x2fe Eq
	if(var_333_bool == 0) goto Label_783; // 0x2ff JumpB
	var_334_object = Obj(); var_335_object = Obj(); // 0x300 PushV
	var_334_object = var_1_object; // 0x301 MovT
	var_335_object = var_0_bool; // 0x302 MovT
	func_5935(var_335_object); // 0x303 NEW_2
	var_339_object = Obj(); var_340_object = Obj(); // 0x305 PushV
	var_339_object = var_1_object; // 0x306 MovT
	var_340_object = var_0_bool; // 0x307 MovT
	func_6036(); // 0x308 NEW_2
	var_341_object = Obj(); var_342_object = Obj(); // 0x30a PushV
	var_341_object = var_1_object; // 0x30b MovT
	var_342_object = var_0_bool; // 0x30c MovT
	func_6093(); // 0x30d NEW_2
	
Label_783:
	var_343_int = 19106; // 0x30f PushI
	var_344_bool = var_68_cvector == var_343_int; // 0x310 Eq
	if(var_344_bool == 0) goto Label_791; // 0x311 JumpB
	var_345_object = Obj(); var_346_object = Obj(); // 0x312 PushV
	var_345_object = var_1_object; // 0x313 MovT
	var_346_object = var_0_bool; // 0x314 MovT
	func_6060(); // 0x315 NEW_2
	
Label_791:
	var_349_int = 19110; // 0x317 PushI
	var_350_bool = var_68_cvector == var_349_int; // 0x318 Eq
	if(var_350_bool == 0) goto Label_804; // 0x319 JumpB
	var_351_object = Obj(); var_352_object = Obj(); // 0x31a PushV
	var_351_object = var_1_object; // 0x31b MovT
	var_352_object = var_0_bool; // 0x31c MovT
	func_5976(); // 0x31d NEW_2
	var_355_object = Obj(); var_356_object = Obj(); // 0x31f PushV
	var_355_object = var_1_object; // 0x320 MovT
	var_356_object = var_0_bool; // 0x321 MovT
	func_6111(); // 0x322 NEW_2
	
Label_804:
	var_365_int = 19253; // 0x324 PushI
	var_366_bool = var_68_cvector == var_365_int; // 0x325 Eq
	if(var_366_bool == 0) goto Label_812; // 0x326 JumpB
	var_367_object = Obj(); var_368_object = Obj(); // 0x327 PushV
	var_367_object = var_1_object; // 0x328 MovT
	var_368_object = var_0_bool; // 0x329 MovT
	func_5853(); // 0x32a NEW_2
	
Label_812:
	var_371_int = 21646; // 0x32c PushI
	var_372_bool = var_68_cvector == var_371_int; // 0x32d Eq
	if(var_372_bool == 0) goto Label_825; // 0x32e JumpB
	var_373_object = Obj(); var_374_object = Obj(); // 0x32f PushV
	var_373_object = var_1_object; // 0x330 MovT
	var_374_object = var_0_bool; // 0x331 MovT
	func_5859(); // 0x332 NEW_2
	var_385_object = Obj(); var_386_object = Obj(); // 0x334 PushV
	var_385_object = var_1_object; // 0x335 MovT
	var_386_object = var_0_bool; // 0x336 MovT
	func_5879(); // 0x337 NEW_2
	
Label_825:
	var_392_int = 21647; // 0x339 PushI
	var_393_bool = var_68_cvector == var_392_int; // 0x33a Eq
	if(var_393_bool == 0) goto Label_838; // 0x33b JumpB
	var_394_object = Obj(); var_395_object = Obj(); // 0x33c PushV
	var_394_object = var_1_object; // 0x33d MovT
	var_395_object = var_0_bool; // 0x33e MovT
	func_5859(); // 0x33f NEW_2
	var_396_object = Obj(); var_397_object = Obj(); // 0x341 PushV
	var_396_object = var_1_object; // 0x342 MovT
	var_397_object = var_0_bool; // 0x343 MovT
	func_5879(); // 0x344 NEW_2
	
Label_838:
	var_398_int = 21879; // 0x346 PushI
	var_399_bool = var_68_cvector == var_398_int; // 0x347 Eq
	if(var_399_bool == 0) goto Label_846; // 0x348 JumpB
	var_400_object = Obj(); var_401_object = Obj(); // 0x349 PushV
	var_400_object = var_1_object; // 0x34a MovT
	var_401_object = var_0_bool; // 0x34b MovT
	func_5895(); // 0x34c NEW_2
	
Label_846:
	var_404_int = 21881; // 0x34e PushI
	var_405_bool = var_68_cvector == var_404_int; // 0x34f Eq
	if(var_405_bool == 0) goto Label_854; // 0x350 JumpB
	var_406_object = Obj(); var_407_object = Obj(); // 0x351 PushV
	var_406_object = var_1_object; // 0x352 MovT
	var_407_object = var_0_bool; // 0x353 MovT
	func_5901(); // 0x354 NEW_2
	
Label_854:
	var_410_int = 28331; // 0x356 PushI
	var_411_bool = var_68_cvector == var_410_int; // 0x357 Eq
	if(var_411_bool == 0) goto Label_862; // 0x358 JumpB
	var_412_object = Obj(); var_413_object = Obj(); // 0x359 PushV
	var_412_object = var_1_object; // 0x35a MovT
	var_413_object = var_0_bool; // 0x35b MovT
	func_5901(); // 0x35c NEW_2
	
Label_862:
	var_414_int = 21674; // 0x35e PushI
	var_415_bool = var_68_cvector == var_414_int; // 0x35f Eq
	if(var_415_bool == 0) goto Label_870; // 0x360 JumpB
	var_416_object = Obj(); var_417_object = Obj(); // 0x361 PushV
	var_416_object = var_1_object; // 0x362 MovT
	var_417_object = var_0_bool; // 0x363 MovT
	func_5989(); // 0x364 NEW_2
	
Label_870:
	var_419_int = 19076; // 0x366 PushI
	var_420_bool = var_67_bool == var_419_int; // 0x367 Eq
	if(var_420_bool == 0) goto Label_1078; // 0x368 JumpB
	var_421_bool = 0; var_422_object = Obj(); // 0x369 PushV
	var_422_object = var_1_object; // 0x36a MovT
	func_6324(var_422_object); // 0x36b NEW_2
	if(var_421_bool == 0) goto Label_903; // 0x36d JumpB
	var_429_object = Obj(); var_430_object = Obj(); // 0x36e PushV
	var_429_object = var_1_object; // 0x36f MovT
	var_430_object = var_0_bool; // 0x370 MovT
	func_6054(); // 0x371 NEW_2
	var_433_string = ""; // 0x373 PushV
	var_433_string = "Neutral"; // 0x374 MovS
	func_605(var_68_cvector, var_433_string); // 0x375 NEW_2
	var_450_int = 517945; // 0x377 PushI
	SetMessage(var_450_int); // 0x378 TObjFunc
	ClearReplies(); // 0x37a TObjFunc
	var_451_int = 527026; // 0x37c PushI
	var_452_int = 28316; // 0x37d PushI
	var_453_int = 28315; // 0x37e PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x37f TObjFunc
	var_454_int = 527044; // 0x381 PushI
	var_455_int = 28316; // 0x382 PushI
	var_456_int = 28334; // 0x383 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x384 TObjFunc
	return 0; // 0x386 Return
	
Label_903:
	var_457_string = ""; // 0x387 PushV
	var_457_string = "Neutral"; // 0x388 MovS
	func_605(var_68_cvector, var_457_string); // 0x389 NEW_2
	var_458_int = 517955; // 0x38b PushI
	SetMessage(var_458_int); // 0x38c TObjFunc
	ClearReplies(); // 0x38e TObjFunc
	var_459_bool = 0; var_460_object = Obj(); // 0x390 PushV
	var_460_object = var_1_object; // 0x391 MovT
	func_6240(var_460_object); // 0x392 NEW_2
	if(var_459_bool == 0) goto Label_922; // 0x394 JumpB
	var_465_int = 527047; // 0x395 PushI
	var_466_int = 28341; // 0x396 PushI
	var_467_int = 28340; // 0x397 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x398 TObjFunc
	
Label_922:
	var_468_bool = 0; // 0x39a PushV
	var_468_bool = 0; // 0x39b MovB
	var_469_bool = 0; // 0x39c PushV
	var_469_bool = 0; // 0x39d MovB
	var_470_bool = 0; var_471_object = Obj(); // 0x39e PushV
	var_471_object = var_1_object; // 0x39f MovT
	func_6300(var_471_object); // 0x3a0 NEW_2
	if(var_470_bool == 0) goto Label_938; // 0x3a2 JumpB
	var_476_bool = 0; var_477_object = Obj(); // 0x3a3 PushV
	var_477_object = var_1_object; // 0x3a4 MovT
	func_6276(var_477_object); // 0x3a5 NEW_2
	var_482_bool = var_476_bool == 0; // 0x3a7 Not
	if(var_482_bool == 0) goto Label_938; // 0x3a8 JumpB
	var_469_bool = 1; // 0x3a9 MovB
	
Label_938:
	if(var_469_bool == 0) goto Label_946; // 0x3aa JumpB
	var_483_bool = 0; var_484_object = Obj(); // 0x3ab PushV
	var_484_object = var_1_object; // 0x3ac MovT
	func_6288(var_484_object); // 0x3ad NEW_2
	var_489_bool = var_483_bool == 0; // 0x3af Not
	if(var_489_bool == 0) goto Label_946; // 0x3b0 JumpB
	var_468_bool = 1; // 0x3b1 MovB
	
Label_946:
	if(var_468_bool == 0) goto Label_952; // 0x3b2 JumpB
	var_490_int = 517957; // 0x3b3 PushI
	var_491_int = 19090; // 0x3b4 PushI
	var_492_int = 19089; // 0x3b5 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x3b6 TObjFunc
	
Label_952:
	var_493_bool = 0; // 0x3b8 PushV
	var_493_bool = 0; // 0x3b9 MovB
	var_494_bool = 0; // 0x3ba PushV
	var_494_bool = 0; // 0x3bb MovB
	var_495_bool = 0; var_496_object = Obj(); // 0x3bc PushV
	var_496_object = var_1_object; // 0x3bd MovT
	func_6312(var_496_object); // 0x3be NEW_2
	if(var_495_bool == 0) goto Label_967; // 0x3c0 JumpB
	var_501_bool = 0; var_502_object = Obj(); // 0x3c1 PushV
	var_502_object = var_1_object; // 0x3c2 MovT
	func_6288(var_502_object); // 0x3c3 NEW_2
	if(var_501_bool == 0) goto Label_967; // 0x3c5 JumpB
	var_494_bool = 1; // 0x3c6 MovB
	
Label_967:
	if(var_494_bool == 0) goto Label_975; // 0x3c7 JumpB
	var_503_bool = 0; var_504_object = Obj(); // 0x3c8 PushV
	var_504_object = var_1_object; // 0x3c9 MovT
	func_6276(var_504_object); // 0x3ca NEW_2
	var_505_bool = var_503_bool == 0; // 0x3cc Not
	if(var_505_bool == 0) goto Label_975; // 0x3cd JumpB
	var_493_bool = 1; // 0x3ce MovB
	
Label_975:
	if(var_493_bool == 0) goto Label_981; // 0x3cf JumpB
	var_506_int = 517960; // 0x3d0 PushI
	var_507_int = 28332; // 0x3d1 PushI
	var_508_int = 19092; // 0x3d2 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x3d3 TObjFunc
	
Label_981:
	var_509_bool = 0; // 0x3d5 PushV
	var_509_bool = 0; // 0x3d6 MovB
	var_510_bool = 0; // 0x3d7 PushV
	var_510_bool = 0; // 0x3d8 MovB
	var_511_bool = 0; var_512_object = Obj(); // 0x3d9 PushV
	var_512_object = var_1_object; // 0x3da MovT
	func_6312(var_512_object); // 0x3db NEW_2
	if(var_511_bool == 0) goto Label_996; // 0x3dd JumpB
	var_513_bool = 0; var_514_object = Obj(); // 0x3de PushV
	var_514_object = var_1_object; // 0x3df MovT
	func_6276(var_514_object); // 0x3e0 NEW_2
	if(var_513_bool == 0) goto Label_996; // 0x3e2 JumpB
	var_510_bool = 1; // 0x3e3 MovB
	
Label_996:
	if(var_510_bool == 0) goto Label_1003; // 0x3e4 JumpB
	var_515_bool = 0; var_516_object = Obj(); // 0x3e5 PushV
	var_516_object = var_1_object; // 0x3e6 MovT
	func_6252(var_516_object); // 0x3e7 NEW_2
	if(var_515_bool == 0) goto Label_1003; // 0x3e9 JumpB
	var_509_bool = 1; // 0x3ea MovB
	
Label_1003:
	if(var_509_bool == 0) goto Label_1009; // 0x3eb JumpB
	var_521_int = 517982; // 0x3ec PushI
	var_522_int = 19116; // 0x3ed PushI
	var_523_int = 19115; // 0x3ee PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x3ef TObjFunc
	
Label_1009:
	var_524_bool = 0; // 0x3f1 PushV
	var_524_bool = 0; // 0x3f2 MovB
	var_525_bool = 0; var_526_object = Obj(); // 0x3f3 PushV
	var_526_object = var_1_object; // 0x3f4 MovT
	func_6264(var_526_object); // 0x3f5 NEW_2
	if(var_525_bool == 0) goto Label_1022; // 0x3f7 JumpB
	var_531_bool = 0; var_532_object = Obj(); // 0x3f8 PushV
	var_532_object = var_1_object; // 0x3f9 MovT
	func_6336(var_532_object); // 0x3fa NEW_2
	if(var_531_bool == 0) goto Label_1022; // 0x3fc JumpB
	var_524_bool = 1; // 0x3fd MovB
	
Label_1022:
	if(var_524_bool == 0) goto Label_1028; // 0x3fe JumpB
	var_537_int = 517973; // 0x3ff PushI
	var_538_int = 28323; // 0x400 PushI
	var_539_int = 19106; // 0x401 PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x402 TObjFunc
	
Label_1028:
	var_540_bool = 0; // 0x404 PushV
	var_540_bool = 0; // 0x405 MovB
	var_541_bool = 0; // 0x406 PushV
	var_541_bool = 0; // 0x407 MovB
	var_542_bool = 0; var_543_object = Obj(); // 0x408 PushV
	var_543_object = var_1_object; // 0x409 MovT
	func_6432(var_543_object); // 0x40a NEW_2
	if(var_542_bool == 0) goto Label_1044; // 0x40c JumpB
	var_548_bool = 0; var_549_object = Obj(); // 0x40d PushV
	var_549_object = var_1_object; // 0x40e MovT
	func_6444(var_549_object); // 0x40f NEW_2
	var_554_bool = var_548_bool == 0; // 0x411 Not
	if(var_554_bool == 0) goto Label_1044; // 0x412 JumpB
	var_541_bool = 1; // 0x413 MovB
	
Label_1044:
	if(var_541_bool == 0) goto Label_1051; // 0x414 JumpB
	var_555_bool = 0; var_556_object = Obj(); // 0x415 PushV
	var_556_object = var_1_object; // 0x416 MovT
	func_6228(var_556_object); // 0x417 NEW_2
	if(var_555_bool == 0) goto Label_1051; // 0x419 JumpB
	var_540_bool = 1; // 0x41a MovB
	
Label_1051:
	if(var_540_bool == 0) goto Label_1057; // 0x41b JumpB
	var_561_int = 518139; // 0x41c PushI
	var_562_int = 21635; // 0x41d PushI
	var_563_int = 19253; // 0x41e PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x41f TObjFunc
	
Label_1057:
	var_564_bool = 0; var_565_object = Obj(); // 0x421 PushV
	var_565_object = var_1_object; // 0x422 MovT
	func_6456(var_565_object); // 0x423 NEW_2
	if(var_564_bool == 0) goto Label_1067; // 0x425 JumpB
	var_570_int = 520672; // 0x426 PushI
	var_571_int = 28325; // 0x427 PushI
	var_572_int = 21879; // 0x428 PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x429 TObjFunc
	
Label_1067:
	var_573_int = 520471; // 0x42b PushI
	var_574_int = -1; // 0x42c PushI
	var_575_int = 21674; // 0x42d PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x42e TObjFunc
	var_576_int = 517956; // 0x430 PushI
	var_577_int = -1; // 0x431 PushI
	var_578_int = 19088; // 0x432 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x433 TObjFunc
	return 0; // 0x435 Return
	
Label_1078:
	var_579_int = 28325; // 0x436 PushI
	var_580_bool = var_67_bool == var_579_int; // 0x437 Eq
	if(var_580_bool == 0) goto Label_1101; // 0x438 JumpB
	var_581_string = ""; // 0x439 PushV
	var_581_string = "Sly"; // 0x43a MovS
	func_605(var_68_cvector, var_581_string); // 0x43b NEW_2
	var_582_int = 527036; // 0x43d PushI
	SetMessage(var_582_int); // 0x43e TObjFunc
	ClearReplies(); // 0x440 TObjFunc
	var_583_int = 527037; // 0x442 PushI
	var_584_int = 21880; // 0x443 PushI
	var_585_int = 28326; // 0x444 PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x445 TObjFunc
	var_586_int = 527038; // 0x447 PushI
	var_587_int = 21880; // 0x448 PushI
	var_588_int = 28327; // 0x449 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x44a TObjFunc
	return 0; // 0x44c Return
	
Label_1101:
	var_589_int = 21880; // 0x44d PushI
	var_590_bool = var_67_bool == var_589_int; // 0x44e Eq
	if(var_590_bool == 0) goto Label_1119; // 0x44f JumpB
	var_591_string = ""; // 0x450 PushV
	var_591_string = "Sly"; // 0x451 MovS
	func_605(var_68_cvector, var_591_string); // 0x452 NEW_2
	var_592_int = 520673; // 0x454 PushI
	SetMessage(var_592_int); // 0x455 TObjFunc
	ClearReplies(); // 0x457 TObjFunc
	var_593_int = 527039; // 0x459 PushI
	var_594_int = 28330; // 0x45a PushI
	var_595_int = 28329; // 0x45b PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x45c TObjFunc
	return 0; // 0x45e Return
	
Label_1119:
	var_596_int = 28330; // 0x45f PushI
	var_597_bool = var_67_bool == var_596_int; // 0x460 Eq
	if(var_597_bool == 0) goto Label_1142; // 0x461 JumpB
	var_598_string = ""; // 0x462 PushV
	var_598_string = "Neutral"; // 0x463 MovS
	func_605(var_68_cvector, var_598_string); // 0x464 NEW_2
	var_599_int = 527040; // 0x466 PushI
	SetMessage(var_599_int); // 0x467 TObjFunc
	ClearReplies(); // 0x469 TObjFunc
	var_600_int = 520674; // 0x46b PushI
	var_601_int = -1; // 0x46c PushI
	var_602_int = 21881; // 0x46d PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x46e TObjFunc
	var_603_int = 527041; // 0x470 PushI
	var_604_int = -1; // 0x471 PushI
	var_605_int = 28331; // 0x472 PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0x473 TObjFunc
	return 0; // 0x475 Return
	
Label_1142:
	var_606_int = 21635; // 0x476 PushI
	var_607_bool = var_67_bool == var_606_int; // 0x477 Eq
	if(var_607_bool == 0) goto Label_1160; // 0x478 JumpB
	var_608_string = ""; // 0x479 PushV
	var_608_string = "Sly"; // 0x47a MovS
	func_605(var_68_cvector, var_608_string); // 0x47b NEW_2
	var_609_int = 520425; // 0x47d PushI
	SetMessage(var_609_int); // 0x47e TObjFunc
	ClearReplies(); // 0x480 TObjFunc
	var_610_int = 520426; // 0x482 PushI
	var_611_int = 21637; // 0x483 PushI
	var_612_int = 21636; // 0x484 PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0x485 TObjFunc
	return 0; // 0x487 Return
	
Label_1160:
	var_613_int = 21637; // 0x488 PushI
	var_614_bool = var_67_bool == var_613_int; // 0x489 Eq
	if(var_614_bool == 0) goto Label_1183; // 0x48a JumpB
	var_615_string = ""; // 0x48b PushV
	var_615_string = "Sly"; // 0x48c MovS
	func_605(var_68_cvector, var_615_string); // 0x48d NEW_2
	var_616_int = 520427; // 0x48f PushI
	SetMessage(var_616_int); // 0x490 TObjFunc
	ClearReplies(); // 0x492 TObjFunc
	var_617_int = 520428; // 0x494 PushI
	var_618_int = 21639; // 0x495 PushI
	var_619_int = 21638; // 0x496 PushI
	AddReply(var_617_int, var_618_int, var_619_int); // 0x497 TObjFunc
	var_620_int = 520432; // 0x499 PushI
	var_621_int = 21643; // 0x49a PushI
	var_622_int = 21642; // 0x49b PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x49c TObjFunc
	return 0; // 0x49e Return
	
Label_1183:
	var_623_int = 21643; // 0x49f PushI
	var_624_bool = var_67_bool == var_623_int; // 0x4a0 Eq
	if(var_624_bool == 0) goto Label_1201; // 0x4a1 JumpB
	var_625_string = ""; // 0x4a2 PushV
	var_625_string = "Neutral"; // 0x4a3 MovS
	func_605(var_68_cvector, var_625_string); // 0x4a4 NEW_2
	var_626_int = 520433; // 0x4a6 PushI
	SetMessage(var_626_int); // 0x4a7 TObjFunc
	ClearReplies(); // 0x4a9 TObjFunc
	var_627_int = 520434; // 0x4ab PushI
	var_628_int = 21641; // 0x4ac PushI
	var_629_int = 21644; // 0x4ad PushI
	AddReply(var_627_int, var_628_int, var_629_int); // 0x4ae TObjFunc
	return 0; // 0x4b0 Return
	
Label_1201:
	var_630_int = 21639; // 0x4b1 PushI
	var_631_bool = var_67_bool == var_630_int; // 0x4b2 Eq
	if(var_631_bool == 0) goto Label_1219; // 0x4b3 JumpB
	var_632_string = ""; // 0x4b4 PushV
	var_632_string = "Neutral"; // 0x4b5 MovS
	func_605(var_68_cvector, var_632_string); // 0x4b6 NEW_2
	var_633_int = 520429; // 0x4b8 PushI
	SetMessage(var_633_int); // 0x4b9 TObjFunc
	ClearReplies(); // 0x4bb TObjFunc
	var_634_int = 520430; // 0x4bd PushI
	var_635_int = 21641; // 0x4be PushI
	var_636_int = 21640; // 0x4bf PushI
	AddReply(var_634_int, var_635_int, var_636_int); // 0x4c0 TObjFunc
	return 0; // 0x4c2 Return
	
Label_1219:
	var_637_int = 21641; // 0x4c3 PushI
	var_638_bool = var_67_bool == var_637_int; // 0x4c4 Eq
	if(var_638_bool == 0) goto Label_1242; // 0x4c5 JumpB
	var_639_string = ""; // 0x4c6 PushV
	var_639_string = "Neutral"; // 0x4c7 MovS
	func_605(var_68_cvector, var_639_string); // 0x4c8 NEW_2
	var_640_int = 520431; // 0x4ca PushI
	SetMessage(var_640_int); // 0x4cb TObjFunc
	ClearReplies(); // 0x4cd TObjFunc
	var_641_int = 520435; // 0x4cf PushI
	var_642_int = -1; // 0x4d0 PushI
	var_643_int = 21646; // 0x4d1 PushI
	AddReply(var_641_int, var_642_int, var_643_int); // 0x4d2 TObjFunc
	var_644_int = 520436; // 0x4d4 PushI
	var_645_int = -1; // 0x4d5 PushI
	var_646_int = 21647; // 0x4d6 PushI
	AddReply(var_644_int, var_645_int, var_646_int); // 0x4d7 TObjFunc
	return 0; // 0x4d9 Return
	
Label_1242:
	var_647_int = 28323; // 0x4da PushI
	var_648_bool = var_67_bool == var_647_int; // 0x4db Eq
	if(var_648_bool == 0) goto Label_1260; // 0x4dc JumpB
	var_649_string = ""; // 0x4dd PushV
	var_649_string = "Fear"; // 0x4de MovS
	func_605(var_68_cvector, var_649_string); // 0x4df NEW_2
	var_650_int = 527034; // 0x4e1 PushI
	SetMessage(var_650_int); // 0x4e2 TObjFunc
	ClearReplies(); // 0x4e4 TObjFunc
	var_651_int = 527035; // 0x4e6 PushI
	var_652_int = 19107; // 0x4e7 PushI
	var_653_int = 28324; // 0x4e8 PushI
	AddReply(var_651_int, var_652_int, var_653_int); // 0x4e9 TObjFunc
	return 0; // 0x4eb Return
	
Label_1260:
	var_654_int = 19107; // 0x4ec PushI
	var_655_bool = var_67_bool == var_654_int; // 0x4ed Eq
	if(var_655_bool == 0) goto Label_1278; // 0x4ee JumpB
	var_656_string = ""; // 0x4ef PushV
	var_656_string = "Fear"; // 0x4f0 MovS
	func_605(var_68_cvector, var_656_string); // 0x4f1 NEW_2
	var_657_int = 517974; // 0x4f3 PushI
	SetMessage(var_657_int); // 0x4f4 TObjFunc
	ClearReplies(); // 0x4f6 TObjFunc
	var_658_int = 517975; // 0x4f8 PushI
	var_659_int = 19109; // 0x4f9 PushI
	var_660_int = 19108; // 0x4fa PushI
	AddReply(var_658_int, var_659_int, var_660_int); // 0x4fb TObjFunc
	return 0; // 0x4fd Return
	
Label_1278:
	var_661_int = 19109; // 0x4fe PushI
	var_662_bool = var_67_bool == var_661_int; // 0x4ff Eq
	if(var_662_bool == 0) goto Label_1296; // 0x500 JumpB
	var_663_string = ""; // 0x501 PushV
	var_663_string = "Neutral"; // 0x502 MovS
	func_605(var_68_cvector, var_663_string); // 0x503 NEW_2
	var_664_int = 517976; // 0x505 PushI
	SetMessage(var_664_int); // 0x506 TObjFunc
	ClearReplies(); // 0x508 TObjFunc
	var_665_int = 517977; // 0x50a PushI
	var_666_int = -1; // 0x50b PushI
	var_667_int = 19110; // 0x50c PushI
	AddReply(var_665_int, var_666_int, var_667_int); // 0x50d TObjFunc
	return 0; // 0x50f Return
	
Label_1296:
	var_668_int = 19116; // 0x510 PushI
	var_669_bool = var_67_bool == var_668_int; // 0x511 Eq
	if(var_669_bool == 0) goto Label_1319; // 0x512 JumpB
	var_670_string = ""; // 0x513 PushV
	var_670_string = "Neutral"; // 0x514 MovS
	func_605(var_68_cvector, var_670_string); // 0x515 NEW_2
	var_671_int = 517983; // 0x517 PushI
	SetMessage(var_671_int); // 0x518 TObjFunc
	ClearReplies(); // 0x51a TObjFunc
	var_672_int = 517984; // 0x51c PushI
	var_673_int = -1; // 0x51d PushI
	var_674_int = 19117; // 0x51e PushI
	AddReply(var_672_int, var_673_int, var_674_int); // 0x51f TObjFunc
	var_675_int = 520424; // 0x521 PushI
	var_676_int = -1; // 0x522 PushI
	var_677_int = 21634; // 0x523 PushI
	AddReply(var_675_int, var_676_int, var_677_int); // 0x524 TObjFunc
	return 0; // 0x526 Return
	
Label_1319:
	var_678_int = 28332; // 0x527 PushI
	var_679_bool = var_67_bool == var_678_int; // 0x528 Eq
	if(var_679_bool == 0) goto Label_1337; // 0x529 JumpB
	var_680_string = ""; // 0x52a PushV
	var_680_string = "Neutral"; // 0x52b MovS
	func_605(var_68_cvector, var_680_string); // 0x52c NEW_2
	var_681_int = 527042; // 0x52e PushI
	SetMessage(var_681_int); // 0x52f TObjFunc
	ClearReplies(); // 0x531 TObjFunc
	var_682_int = 527043; // 0x533 PushI
	var_683_int = 19093; // 0x534 PushI
	var_684_int = 28333; // 0x535 PushI
	AddReply(var_682_int, var_683_int, var_684_int); // 0x536 TObjFunc
	return 0; // 0x538 Return
	
Label_1337:
	var_685_int = 19093; // 0x539 PushI
	var_686_bool = var_67_bool == var_685_int; // 0x53a Eq
	if(var_686_bool == 0) goto Label_1355; // 0x53b JumpB
	var_687_string = ""; // 0x53c PushV
	var_687_string = "Neutral"; // 0x53d MovS
	func_605(var_68_cvector, var_687_string); // 0x53e NEW_2
	var_688_int = 517961; // 0x540 PushI
	SetMessage(var_688_int); // 0x541 TObjFunc
	ClearReplies(); // 0x543 TObjFunc
	var_689_int = 517962; // 0x545 PushI
	var_690_int = -1; // 0x546 PushI
	var_691_int = 19094; // 0x547 PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0x548 TObjFunc
	return 0; // 0x54a Return
	
Label_1355:
	var_692_int = 19090; // 0x54b PushI
	var_693_bool = var_67_bool == var_692_int; // 0x54c Eq
	if(var_693_bool == 0) goto Label_1373; // 0x54d JumpB
	var_694_string = ""; // 0x54e PushV
	var_694_string = "Neutral"; // 0x54f MovS
	func_605(var_68_cvector, var_694_string); // 0x550 NEW_2
	var_695_int = 517958; // 0x552 PushI
	SetMessage(var_695_int); // 0x553 TObjFunc
	ClearReplies(); // 0x555 TObjFunc
	var_696_int = 517959; // 0x557 PushI
	var_697_int = -1; // 0x558 PushI
	var_698_int = 19091; // 0x559 PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x55a TObjFunc
	return 0; // 0x55c Return
	
Label_1373:
	var_699_int = 28341; // 0x55d PushI
	var_700_bool = var_67_bool == var_699_int; // 0x55e Eq
	if(var_700_bool == 0) goto Label_1396; // 0x55f JumpB
	var_701_string = ""; // 0x560 PushV
	var_701_string = "Neutral"; // 0x561 MovS
	func_605(var_68_cvector, var_701_string); // 0x562 NEW_2
	var_702_int = 527048; // 0x564 PushI
	SetMessage(var_702_int); // 0x565 TObjFunc
	ClearReplies(); // 0x567 TObjFunc
	var_703_int = 527049; // 0x569 PushI
	var_704_int = 28344; // 0x56a PushI
	var_705_int = 28342; // 0x56b PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0x56c TObjFunc
	var_706_int = 527050; // 0x56e PushI
	var_707_int = 28344; // 0x56f PushI
	var_708_int = 28343; // 0x570 PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0x571 TObjFunc
	return 0; // 0x573 Return
	
Label_1396:
	var_709_int = 28344; // 0x574 PushI
	var_710_bool = var_67_bool == var_709_int; // 0x575 Eq
	if(var_710_bool == 0) goto Label_1414; // 0x576 JumpB
	var_711_string = ""; // 0x577 PushV
	var_711_string = "Neutral"; // 0x578 MovS
	func_605(var_68_cvector, var_711_string); // 0x579 NEW_2
	var_712_int = 527051; // 0x57b PushI
	SetMessage(var_712_int); // 0x57c TObjFunc
	ClearReplies(); // 0x57e TObjFunc
	var_713_int = 527052; // 0x580 PushI
	var_714_int = -1; // 0x581 PushI
	var_715_int = 28346; // 0x582 PushI
	AddReply(var_713_int, var_714_int, var_715_int); // 0x583 TObjFunc
	return 0; // 0x585 Return
	
Label_1414:
	var_716_int = 28316; // 0x586 PushI
	var_717_bool = var_67_bool == var_716_int; // 0x587 Eq
	if(var_717_bool == 0) goto Label_1432; // 0x588 JumpB
	var_718_string = ""; // 0x589 PushV
	var_718_string = "Fear"; // 0x58a MovS
	func_605(var_68_cvector, var_718_string); // 0x58b NEW_2
	var_719_int = 527027; // 0x58d PushI
	SetMessage(var_719_int); // 0x58e TObjFunc
	ClearReplies(); // 0x590 TObjFunc
	var_720_int = 527028; // 0x592 PushI
	var_721_int = 28318; // 0x593 PushI
	var_722_int = 28317; // 0x594 PushI
	AddReply(var_720_int, var_721_int, var_722_int); // 0x595 TObjFunc
	return 0; // 0x597 Return
	
Label_1432:
	var_723_int = 28318; // 0x598 PushI
	var_724_bool = var_67_bool == var_723_int; // 0x599 Eq
	if(var_724_bool == 0) goto Label_1450; // 0x59a JumpB
	var_725_string = ""; // 0x59b PushV
	var_725_string = "Fear"; // 0x59c MovS
	func_605(var_68_cvector, var_725_string); // 0x59d NEW_2
	var_726_int = 527029; // 0x59f PushI
	SetMessage(var_726_int); // 0x5a0 TObjFunc
	ClearReplies(); // 0x5a2 TObjFunc
	var_727_int = 527030; // 0x5a4 PushI
	var_728_int = 28320; // 0x5a5 PushI
	var_729_int = 28319; // 0x5a6 PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0x5a7 TObjFunc
	return 0; // 0x5a9 Return
	
Label_1450:
	var_730_int = 28320; // 0x5aa PushI
	var_731_bool = var_67_bool == var_730_int; // 0x5ab Eq
	if(var_731_bool == 0) goto Label_1468; // 0x5ac JumpB
	var_732_string = ""; // 0x5ad PushV
	var_732_string = "Fear"; // 0x5ae MovS
	func_605(var_68_cvector, var_732_string); // 0x5af NEW_2
	var_733_int = 527031; // 0x5b1 PushI
	SetMessage(var_733_int); // 0x5b2 TObjFunc
	ClearReplies(); // 0x5b4 TObjFunc
	var_734_int = 527032; // 0x5b6 PushI
	var_735_int = 28322; // 0x5b7 PushI
	var_736_int = 28321; // 0x5b8 PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0x5b9 TObjFunc
	return 0; // 0x5bb Return
	
Label_1468:
	var_737_int = 28322; // 0x5bc PushI
	var_738_bool = var_67_bool == var_737_int; // 0x5bd Eq
	if(var_738_bool == 0) goto Label_1563; // 0x5be JumpB
	var_739_string = ""; // 0x5bf PushV
	var_739_string = "Anger"; // 0x5c0 MovS
	func_605(var_68_cvector, var_739_string); // 0x5c1 NEW_2
	var_740_int = 527033; // 0x5c3 PushI
	SetMessage(var_740_int); // 0x5c4 TObjFunc
	ClearReplies(); // 0x5c6 TObjFunc
	var_741_bool = 0; // 0x5c8 PushV
	var_741_bool = 0; // 0x5c9 MovB
	var_742_bool = 0; var_743_object = Obj(); // 0x5ca PushV
	var_743_object = var_1_object; // 0x5cb MovT
	func_6276(var_743_object); // 0x5cc NEW_2
	var_744_bool = var_742_bool == 0; // 0x5ce Not
	if(var_744_bool == 0) goto Label_1495; // 0x5cf JumpB
	var_745_bool = 0; var_746_object = Obj(); // 0x5d0 PushV
	var_746_object = var_1_object; // 0x5d1 MovT
	func_6288(var_746_object); // 0x5d2 NEW_2
	var_747_bool = var_745_bool == 0; // 0x5d4 Not
	if(var_747_bool == 0) goto Label_1495; // 0x5d5 JumpB
	var_741_bool = 1; // 0x5d6 MovB
	
Label_1495:
	if(var_741_bool == 0) goto Label_1501; // 0x5d7 JumpB
	var_748_int = 517947; // 0x5d8 PushI
	var_749_int = 19081; // 0x5d9 PushI
	var_750_int = 19078; // 0x5da PushI
	AddReply(var_748_int, var_749_int, var_750_int); // 0x5db TObjFunc
	
Label_1501:
	var_751_bool = 0; // 0x5dd PushV
	var_751_bool = 0; // 0x5de MovB
	var_752_bool = 0; // 0x5df PushV
	var_752_bool = 0; // 0x5e0 MovB
	var_753_bool = 0; var_754_object = Obj(); // 0x5e1 PushV
	var_754_object = var_1_object; // 0x5e2 MovT
	func_6300(var_754_object); // 0x5e3 NEW_2
	var_755_bool = var_753_bool == 0; // 0x5e5 Not
	if(var_755_bool == 0) goto Label_1518; // 0x5e6 JumpB
	var_756_bool = 0; var_757_object = Obj(); // 0x5e7 PushV
	var_757_object = var_1_object; // 0x5e8 MovT
	func_6288(var_757_object); // 0x5e9 NEW_2
	var_758_bool = var_756_bool == 0; // 0x5eb Not
	if(var_758_bool == 0) goto Label_1518; // 0x5ec JumpB
	var_752_bool = 1; // 0x5ed MovB
	
Label_1518:
	if(var_752_bool == 0) goto Label_1526; // 0x5ee JumpB
	var_759_bool = 0; var_760_object = Obj(); // 0x5ef PushV
	var_760_object = var_1_object; // 0x5f0 MovT
	func_6276(var_760_object); // 0x5f1 NEW_2
	var_761_bool = var_759_bool == 0; // 0x5f3 Not
	if(var_761_bool == 0) goto Label_1526; // 0x5f4 JumpB
	var_751_bool = 1; // 0x5f5 MovB
	
Label_1526:
	if(var_751_bool == 0) goto Label_1532; // 0x5f6 JumpB
	var_762_int = 517946; // 0x5f7 PushI
	var_763_int = 19079; // 0x5f8 PushI
	var_764_int = 19077; // 0x5f9 PushI
	AddReply(var_762_int, var_763_int, var_764_int); // 0x5fa TObjFunc
	
Label_1532:
	var_765_bool = 0; var_766_object = Obj(); // 0x5fc PushV
	var_766_object = var_1_object; // 0x5fd MovT
	func_6276(var_766_object); // 0x5fe NEW_2
	if(var_765_bool == 0) goto Label_1542; // 0x600 JumpB
	var_767_int = 518086; // 0x601 PushI
	var_768_int = 19219; // 0x602 PushI
	var_769_int = 19218; // 0x603 PushI
	AddReply(var_767_int, var_768_int, var_769_int); // 0x604 TObjFunc
	
Label_1542:
	var_770_bool = 0; // 0x606 PushV
	var_770_bool = 0; // 0x607 MovB
	var_771_bool = 0; var_772_object = Obj(); // 0x608 PushV
	var_772_object = var_1_object; // 0x609 MovT
	func_6288(var_772_object); // 0x60a NEW_2
	if(var_771_bool == 0) goto Label_1556; // 0x60c JumpB
	var_773_bool = 0; var_774_object = Obj(); // 0x60d PushV
	var_774_object = var_1_object; // 0x60e MovT
	func_6276(var_774_object); // 0x60f NEW_2
	var_775_bool = var_773_bool == 0; // 0x611 Not
	if(var_775_bool == 0) goto Label_1556; // 0x612 JumpB
	var_770_bool = 1; // 0x613 MovB
	
Label_1556:
	if(var_770_bool == 0) goto Label_1562; // 0x614 JumpB
	var_776_int = 518089; // 0x615 PushI
	var_777_int = 19222; // 0x616 PushI
	var_778_int = 19221; // 0x617 PushI
	AddReply(var_776_int, var_777_int, var_778_int); // 0x618 TObjFunc
	
Label_1562:
	return 0; // 0x61a Return
	
Label_1563:
	var_779_int = 19222; // 0x61b PushI
	var_780_bool = var_67_bool == var_779_int; // 0x61c Eq
	if(var_780_bool == 0) goto Label_1581; // 0x61d JumpB
	var_781_string = ""; // 0x61e PushV
	var_781_string = "Neutral"; // 0x61f MovS
	func_605(var_68_cvector, var_781_string); // 0x620 NEW_2
	var_782_int = 518090; // 0x622 PushI
	SetMessage(var_782_int); // 0x623 TObjFunc
	ClearReplies(); // 0x625 TObjFunc
	var_783_int = 520422; // 0x627 PushI
	var_784_int = 21633; // 0x628 PushI
	var_785_int = 21632; // 0x629 PushI
	AddReply(var_783_int, var_784_int, var_785_int); // 0x62a TObjFunc
	return 0; // 0x62c Return
	
Label_1581:
	var_786_int = 21633; // 0x62d PushI
	var_787_bool = var_67_bool == var_786_int; // 0x62e Eq
	if(var_787_bool == 0) goto Label_1599; // 0x62f JumpB
	var_788_string = ""; // 0x630 PushV
	var_788_string = "Neutral"; // 0x631 MovS
	func_605(var_68_cvector, var_788_string); // 0x632 NEW_2
	var_789_int = 520423; // 0x634 PushI
	SetMessage(var_789_int); // 0x635 TObjFunc
	ClearReplies(); // 0x637 TObjFunc
	var_790_int = 518095; // 0x639 PushI
	var_791_int = -1; // 0x63a PushI
	var_792_int = 19227; // 0x63b PushI
	AddReply(var_790_int, var_791_int, var_792_int); // 0x63c TObjFunc
	return 0; // 0x63e Return
	
Label_1599:
	var_793_int = 19219; // 0x63f PushI
	var_794_bool = var_67_bool == var_793_int; // 0x640 Eq
	if(var_794_bool == 0) goto Label_1622; // 0x641 JumpB
	var_795_string = ""; // 0x642 PushV
	var_795_string = "Anger"; // 0x643 MovS
	func_605(var_68_cvector, var_795_string); // 0x644 NEW_2
	var_796_int = 518087; // 0x646 PushI
	SetMessage(var_796_int); // 0x647 TObjFunc
	ClearReplies(); // 0x649 TObjFunc
	var_797_int = 518088; // 0x64b PushI
	var_798_int = -1; // 0x64c PushI
	var_799_int = 19220; // 0x64d PushI
	AddReply(var_797_int, var_798_int, var_799_int); // 0x64e TObjFunc
	var_800_int = 520421; // 0x650 PushI
	var_801_int = -1; // 0x651 PushI
	var_802_int = 21631; // 0x652 PushI
	AddReply(var_800_int, var_801_int, var_802_int); // 0x653 TObjFunc
	return 0; // 0x655 Return
	
Label_1622:
	var_803_int = 19079; // 0x656 PushI
	var_804_bool = var_67_bool == var_803_int; // 0x657 Eq
	if(var_804_bool == 0) goto Label_1645; // 0x658 JumpB
	var_805_string = ""; // 0x659 PushV
	var_805_string = "Anger"; // 0x65a MovS
	func_605(var_68_cvector, var_805_string); // 0x65b NEW_2
	var_806_int = 517948; // 0x65d PushI
	SetMessage(var_806_int); // 0x65e TObjFunc
	ClearReplies(); // 0x660 TObjFunc
	var_807_int = 517949; // 0x662 PushI
	var_808_int = 19081; // 0x663 PushI
	var_809_int = 19080; // 0x664 PushI
	AddReply(var_807_int, var_808_int, var_809_int); // 0x665 TObjFunc
	var_810_int = 520420; // 0x667 PushI
	var_811_int = 19081; // 0x668 PushI
	var_812_int = 21630; // 0x669 PushI
	AddReply(var_810_int, var_811_int, var_812_int); // 0x66a TObjFunc
	return 0; // 0x66c Return
	
Label_1645:
	var_813_int = 19081; // 0x66d PushI
	var_814_bool = var_67_bool == var_813_int; // 0x66e Eq
	if(var_814_bool == 0) goto Label_1668; // 0x66f JumpB
	var_815_string = ""; // 0x670 PushV
	var_815_string = "Sly"; // 0x671 MovS
	func_605(var_68_cvector, var_815_string); // 0x672 NEW_2
	var_816_int = 517950; // 0x674 PushI
	SetMessage(var_816_int); // 0x675 TObjFunc
	ClearReplies(); // 0x677 TObjFunc
	var_817_int = 517951; // 0x679 PushI
	var_818_int = 19084; // 0x67a PushI
	var_819_int = 19083; // 0x67b PushI
	AddReply(var_817_int, var_818_int, var_819_int); // 0x67c TObjFunc
	var_820_int = 517954; // 0x67e PushI
	var_821_int = -1; // 0x67f PushI
	var_822_int = 19086; // 0x680 PushI
	AddReply(var_820_int, var_821_int, var_822_int); // 0x681 TObjFunc
	return 0; // 0x683 Return
	
Label_1668:
	var_823_int = 19084; // 0x684 PushI
	var_824_bool = var_67_bool == var_823_int; // 0x685 Eq
	if(var_824_bool == 0) goto Label_1686; // 0x686 JumpB
	var_825_string = ""; // 0x687 PushV
	var_825_string = "Neutral"; // 0x688 MovS
	func_605(var_68_cvector, var_825_string); // 0x689 NEW_2
	var_826_int = 517952; // 0x68b PushI
	SetMessage(var_826_int); // 0x68c TObjFunc
	ClearReplies(); // 0x68e TObjFunc
	var_827_int = 517953; // 0x690 PushI
	var_828_int = -1; // 0x691 PushI
	var_829_int = 19085; // 0x692 PushI
	AddReply(var_827_int, var_828_int, var_829_int); // 0x693 TObjFunc
	return 0; // 0x695 Return
	
Label_1686:
	var_3_object = 1; // 0x696 TMovB
	var_830_bool = 0; // 0x697 PushV
	func_5817(var_830_bool); // 0x698 NEW_2
	if(var_830_bool == 0) goto Label_1694; // 0x69a JumpB
	lshStopAnimation(); // 0x69b Func
	goto Label_1696; // 0x69d Jump
	
Label_1696:
	return 0; // 0x6a0 Return
	
Label_1694:
	StopAnimation(); // 0x69e Func
	
Label_1698:
	return 0; // 0x6a2 Return
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x745 PushI
	if(var_69_int == 0) goto Label_2053; // 0x746 JumpB
	func_5564(); // 0x748 NEW_2
	var_71_int = 21673; // 0x74a PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x74b Eq
	if(var_72_bool == 0) goto Label_1874; // 0x74c JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x74d PushV
	var_73_object = var_1_object; // 0x74e MovT
	var_74_object = var_0_bool; // 0x74f MovT
	func_5989(); // 0x750 NEW_2
	
Label_1874:
	var_76_int = 19381; // 0x752 PushI
	var_77_bool = var_67_bool == var_76_int; // 0x753 Eq
	if(var_77_bool == 0) goto Label_1897; // 0x754 JumpB
	var_78_string = ""; // 0x755 PushV
	var_78_string = "Neutral"; // 0x756 MovS
	func_1838(var_68_cvector, var_78_string); // 0x757 NEW_2
	var_95_int = 518272; // 0x759 PushI
	SetMessage(var_95_int); // 0x75a TObjFunc
	ClearReplies(); // 0x75c TObjFunc
	var_96_int = 520470; // 0x75e PushI
	var_97_int = -1; // 0x75f PushI
	var_98_int = 21673; // 0x760 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x761 TObjFunc
	var_99_int = 518273; // 0x763 PushI
	var_100_int = -1; // 0x764 PushI
	var_101_int = 19382; // 0x765 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x766 TObjFunc
	return 0; // 0x768 Return
	
Label_1897:
	var_102_int = 20635; // 0x769 PushI
	var_103_bool = var_67_bool == var_102_int; // 0x76a Eq
	if(var_103_bool == 0) goto Label_1900; // 0x76b JumpB
	
Label_1900:
	var_104_int = 20637; // 0x76c PushI
	var_105_bool = var_67_bool == var_104_int; // 0x76d Eq
	if(var_105_bool == 0) goto Label_1923; // 0x76e JumpB
	var_106_string = ""; // 0x76f PushV
	var_106_string = "Fear"; // 0x770 MovS
	func_1838(var_68_cvector, var_106_string); // 0x771 NEW_2
	var_107_int = 519466; // 0x773 PushI
	SetMessage(var_107_int); // 0x774 TObjFunc
	ClearReplies(); // 0x776 TObjFunc
	var_108_int = 519467; // 0x778 PushI
	var_109_int = 20639; // 0x779 PushI
	var_110_int = 20638; // 0x77a PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x77b TObjFunc
	var_111_int = 519480; // 0x77d PushI
	var_112_int = 29100; // 0x77e PushI
	var_113_int = 20652; // 0x77f PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x780 TObjFunc
	return 0; // 0x782 Return
	
Label_1923:
	var_114_int = 20639; // 0x783 PushI
	var_115_bool = var_67_bool == var_114_int; // 0x784 Eq
	if(var_115_bool == 0) goto Label_1946; // 0x785 JumpB
	var_116_string = ""; // 0x786 PushV
	var_116_string = "Fear"; // 0x787 MovS
	func_1838(var_68_cvector, var_116_string); // 0x788 NEW_2
	var_117_int = 519468; // 0x78a PushI
	SetMessage(var_117_int); // 0x78b TObjFunc
	ClearReplies(); // 0x78d TObjFunc
	var_118_int = 519469; // 0x78f PushI
	var_119_int = 20641; // 0x790 PushI
	var_120_int = 20640; // 0x791 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x792 TObjFunc
	var_121_int = 519481; // 0x794 PushI
	var_122_int = 29100; // 0x795 PushI
	var_123_int = 20653; // 0x796 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x797 TObjFunc
	return 0; // 0x799 Return
	
Label_1946:
	var_124_int = 29100; // 0x79a PushI
	var_125_bool = var_67_bool == var_124_int; // 0x79b Eq
	if(var_125_bool == 0) goto Label_1964; // 0x79c JumpB
	var_126_string = ""; // 0x79d PushV
	var_126_string = "Neutral"; // 0x79e MovS
	func_1838(var_68_cvector, var_126_string); // 0x79f NEW_2
	var_127_int = 527746; // 0x7a1 PushI
	SetMessage(var_127_int); // 0x7a2 TObjFunc
	ClearReplies(); // 0x7a4 TObjFunc
	var_128_int = 527747; // 0x7a6 PushI
	var_129_int = 20641; // 0x7a7 PushI
	var_130_int = 29103; // 0x7a8 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x7a9 TObjFunc
	return 0; // 0x7ab Return
	
Label_1964:
	var_131_int = 20641; // 0x7ac PushI
	var_132_bool = var_67_bool == var_131_int; // 0x7ad Eq
	if(var_132_bool == 0) goto Label_1987; // 0x7ae JumpB
	var_133_string = ""; // 0x7af PushV
	var_133_string = "Sly"; // 0x7b0 MovS
	func_1838(var_68_cvector, var_133_string); // 0x7b1 NEW_2
	var_134_int = 519470; // 0x7b3 PushI
	SetMessage(var_134_int); // 0x7b4 TObjFunc
	ClearReplies(); // 0x7b6 TObjFunc
	var_135_int = 519471; // 0x7b8 PushI
	var_136_int = 20643; // 0x7b9 PushI
	var_137_int = 20642; // 0x7ba PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x7bb TObjFunc
	var_138_int = 519474; // 0x7bd PushI
	var_139_int = 20646; // 0x7be PushI
	var_140_int = 20645; // 0x7bf PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x7c0 TObjFunc
	return 0; // 0x7c2 Return
	
Label_1987:
	var_141_int = 20646; // 0x7c3 PushI
	var_142_bool = var_67_bool == var_141_int; // 0x7c4 Eq
	if(var_142_bool == 0) goto Label_2005; // 0x7c5 JumpB
	var_143_string = ""; // 0x7c6 PushV
	var_143_string = "Sly"; // 0x7c7 MovS
	func_1838(var_68_cvector, var_143_string); // 0x7c8 NEW_2
	var_144_int = 519475; // 0x7ca PushI
	SetMessage(var_144_int); // 0x7cb TObjFunc
	ClearReplies(); // 0x7cd TObjFunc
	var_145_int = 519476; // 0x7cf PushI
	var_146_int = 20648; // 0x7d0 PushI
	var_147_int = 20647; // 0x7d1 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x7d2 TObjFunc
	return 0; // 0x7d4 Return
	
Label_2005:
	var_148_int = 20643; // 0x7d5 PushI
	var_149_bool = var_67_bool == var_148_int; // 0x7d6 Eq
	if(var_149_bool == 0) goto Label_2023; // 0x7d7 JumpB
	var_150_string = ""; // 0x7d8 PushV
	var_150_string = "Sly"; // 0x7d9 MovS
	func_1838(var_68_cvector, var_150_string); // 0x7da NEW_2
	var_151_int = 519472; // 0x7dc PushI
	SetMessage(var_151_int); // 0x7dd TObjFunc
	ClearReplies(); // 0x7df TObjFunc
	var_152_int = 519473; // 0x7e1 PushI
	var_153_int = 20648; // 0x7e2 PushI
	var_154_int = 20644; // 0x7e3 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x7e4 TObjFunc
	return 0; // 0x7e6 Return
	
Label_2023:
	var_155_int = 20648; // 0x7e7 PushI
	var_156_bool = var_67_bool == var_155_int; // 0x7e8 Eq
	if(var_156_bool == 0) goto Label_2041; // 0x7e9 JumpB
	var_157_string = ""; // 0x7ea PushV
	var_157_string = "Neutral"; // 0x7eb MovS
	func_1838(var_68_cvector, var_157_string); // 0x7ec NEW_2
	var_158_int = 519477; // 0x7ee PushI
	SetMessage(var_158_int); // 0x7ef TObjFunc
	ClearReplies(); // 0x7f1 TObjFunc
	var_159_int = 519478; // 0x7f3 PushI
	var_160_int = -1; // 0x7f4 PushI
	var_161_int = 20650; // 0x7f5 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x7f6 TObjFunc
	return 0; // 0x7f8 Return
	
Label_2041:
	var_3_object = 1; // 0x7f9 TMovB
	var_162_bool = 0; // 0x7fa PushV
	func_5817(var_162_bool); // 0x7fb NEW_2
	if(var_162_bool == 0) goto Label_2049; // 0x7fd JumpB
	lshStopAnimation(); // 0x7fe Func
	goto Label_2051; // 0x800 Jump
	
Label_2051:
	return 0; // 0x803 Return
	
Label_2049:
	StopAnimation(); // 0x801 Func
	
Label_2053:
	return 0; // 0x805 Return
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x904 PushI
	if(var_69_int == 0) goto Label_2742; // 0x905 JumpB
	func_5564(); // 0x907 NEW_2
	var_71_int = 19500; // 0x909 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x90a Eq
	if(var_72_bool == 0) goto Label_2321; // 0x90b JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x90c PushV
	var_73_object = var_1_object; // 0x90d MovT
	var_74_object = var_0_bool; // 0x90e MovT
	func_5819(); // 0x90f NEW_2
	
Label_2321:
	var_77_int = 19503; // 0x911 PushI
	var_78_bool = var_68_cvector == var_77_int; // 0x912 Eq
	if(var_78_bool == 0) goto Label_2329; // 0x913 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x914 PushV
	var_79_object = var_1_object; // 0x915 MovT
	var_80_object = var_0_bool; // 0x916 MovT
	func_6127(); // 0x917 NEW_2
	
Label_2329:
	var_122_int = 20354; // 0x919 PushI
	var_123_bool = var_68_cvector == var_122_int; // 0x91a Eq
	if(var_123_bool == 0) goto Label_2337; // 0x91b JumpB
	var_124_object = Obj(); var_125_object = Obj(); // 0x91c PushV
	var_124_object = var_1_object; // 0x91d MovT
	var_125_object = var_0_bool; // 0x91e MovT
	func_6127(); // 0x91f NEW_2
	
Label_2337:
	var_126_int = 19504; // 0x921 PushI
	var_127_bool = var_68_cvector == var_126_int; // 0x922 Eq
	if(var_127_bool == 0) goto Label_2345; // 0x923 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x924 PushV
	var_128_object = var_1_object; // 0x925 MovT
	var_129_object = var_0_bool; // 0x926 MovT
	func_5825(); // 0x927 NEW_2
	
Label_2345:
	var_132_int = 19506; // 0x929 PushI
	var_133_bool = var_68_cvector == var_132_int; // 0x92a Eq
	if(var_133_bool == 0) goto Label_2358; // 0x92b JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x92c PushV
	var_134_object = var_1_object; // 0x92d MovT
	var_135_object = var_0_bool; // 0x92e MovT
	func_6150(); // 0x92f NEW_2
	var_154_object = Obj(); var_155_object = Obj(); // 0x931 PushV
	var_154_object = var_1_object; // 0x932 MovT
	var_155_object = var_0_bool; // 0x933 MovT
	func_6173(); // 0x934 NEW_2
	
Label_2358:
	var_166_int = 20346; // 0x936 PushI
	var_167_bool = var_68_cvector == var_166_int; // 0x937 Eq
	if(var_167_bool == 0) goto Label_2371; // 0x938 JumpB
	var_168_object = Obj(); var_169_object = Obj(); // 0x939 PushV
	var_168_object = var_1_object; // 0x93a MovT
	var_169_object = var_0_bool; // 0x93b MovT
	func_6150(); // 0x93c NEW_2
	var_170_object = Obj(); var_171_object = Obj(); // 0x93e PushV
	var_170_object = var_1_object; // 0x93f MovT
	var_171_object = var_0_bool; // 0x940 MovT
	func_6173(); // 0x941 NEW_2
	
Label_2371:
	var_172_int = 20828; // 0x943 PushI
	var_173_bool = var_68_cvector == var_172_int; // 0x944 Eq
	if(var_173_bool == 0) goto Label_2379; // 0x945 JumpB
	var_174_object = Obj(); var_175_object = Obj(); // 0x946 PushV
	var_174_object = var_1_object; // 0x947 MovT
	var_175_object = var_0_bool; // 0x948 MovT
	func_5831(); // 0x949 NEW_2
	
Label_2379:
	var_178_int = 19507; // 0x94b PushI
	var_179_bool = var_68_cvector == var_178_int; // 0x94c Eq
	if(var_179_bool == 0) goto Label_2387; // 0x94d JumpB
	var_180_object = Obj(); var_181_object = Obj(); // 0x94e PushV
	var_180_object = var_1_object; // 0x94f MovT
	var_181_object = var_0_bool; // 0x950 MovT
	func_5989(); // 0x951 NEW_2
	
Label_2387:
	var_183_int = 19499; // 0x953 PushI
	var_184_bool = var_67_bool == var_183_int; // 0x954 Eq
	if(var_184_bool == 0) goto Label_2502; // 0x955 JumpB
	var_185_string = ""; // 0x956 PushV
	var_185_string = "Neutral"; // 0x957 MovS
	func_2285(var_68_cvector, var_185_string); // 0x958 NEW_2
	var_202_int = 518386; // 0x95a PushI
	SetMessage(var_202_int); // 0x95b TObjFunc
	ClearReplies(); // 0x95d TObjFunc
	var_203_bool = 0; // 0x95f PushV
	var_203_bool = 0; // 0x960 MovB
	var_204_bool = 0; // 0x961 PushV
	var_204_bool = 0; // 0x962 MovB
	var_205_bool = 0; // 0x963 PushV
	var_205_bool = 0; // 0x964 MovB
	var_206_bool = 0; var_207_object = Obj(); // 0x965 PushV
	var_207_object = var_1_object; // 0x966 MovT
	func_6348(var_207_object); // 0x967 NEW_2
	if(var_206_bool == 0) goto Label_2416; // 0x969 JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0x96a PushV
	var_215_object = var_1_object; // 0x96b MovT
	func_6384(var_215_object); // 0x96c NEW_2
	if(var_214_bool == 0) goto Label_2416; // 0x96e JumpB
	var_205_bool = 1; // 0x96f MovB
	
Label_2416:
	if(var_205_bool == 0) goto Label_2424; // 0x970 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x971 PushV
	var_221_object = var_1_object; // 0x972 MovT
	func_6372(var_221_object); // 0x973 NEW_2
	var_226_bool = var_220_bool == 0; // 0x975 Not
	if(var_226_bool == 0) goto Label_2424; // 0x976 JumpB
	var_204_bool = 1; // 0x977 MovB
	
Label_2424:
	if(var_204_bool == 0) goto Label_2431; // 0x978 JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0x979 PushV
	var_228_object = var_1_object; // 0x97a MovT
	func_6420(var_228_object); // 0x97b NEW_2
	if(var_227_bool == 0) goto Label_2431; // 0x97d JumpB
	var_203_bool = 1; // 0x97e MovB
	
Label_2431:
	if(var_203_bool == 0) goto Label_2437; // 0x97f JumpB
	var_233_int = 518387; // 0x980 PushI
	var_234_int = 20347; // 0x981 PushI
	var_235_int = 19500; // 0x982 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x983 TObjFunc
	
Label_2437:
	var_236_bool = 0; // 0x985 PushV
	var_236_bool = 0; // 0x986 MovB
	var_237_bool = 0; // 0x987 PushV
	var_237_bool = 0; // 0x988 MovB
	var_238_bool = 0; var_239_object = Obj(); // 0x989 PushV
	var_239_object = var_1_object; // 0x98a MovT
	func_6360(var_239_object); // 0x98b NEW_2
	if(var_238_bool == 0) goto Label_2452; // 0x98d JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x98e PushV
	var_245_object = var_1_object; // 0x98f MovT
	func_6396(var_245_object); // 0x990 NEW_2
	if(var_244_bool == 0) goto Label_2452; // 0x992 JumpB
	var_237_bool = 1; // 0x993 MovB
	
Label_2452:
	if(var_237_bool == 0) goto Label_2460; // 0x994 JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0x995 PushV
	var_251_object = var_1_object; // 0x996 MovT
	func_6372(var_251_object); // 0x997 NEW_2
	var_252_bool = var_250_bool == 0; // 0x999 Not
	if(var_252_bool == 0) goto Label_2460; // 0x99a JumpB
	var_236_bool = 1; // 0x99b MovB
	
Label_2460:
	if(var_236_bool == 0) goto Label_2466; // 0x99c JumpB
	var_253_int = 518391; // 0x99d PushI
	var_254_int = 20339; // 0x99e PushI
	var_255_int = 19504; // 0x99f PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x9a0 TObjFunc
	
Label_2466:
	var_256_bool = 0; // 0x9a2 PushV
	var_256_bool = 0; // 0x9a3 MovB
	var_257_bool = 0; var_258_object = Obj(); // 0x9a4 PushV
	var_258_object = var_1_object; // 0x9a5 MovT
	func_6372(var_258_object); // 0x9a6 NEW_2
	if(var_257_bool == 0) goto Label_2479; // 0x9a8 JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x9a9 PushV
	var_260_object = var_1_object; // 0x9aa MovT
	func_6408(var_260_object); // 0x9ab NEW_2
	if(var_259_bool == 0) goto Label_2479; // 0x9ad JumpB
	var_256_bool = 1; // 0x9ae MovB
	
Label_2479:
	if(var_256_bool == 0) goto Label_2485; // 0x9af JumpB
	var_265_int = 519664; // 0x9b0 PushI
	var_266_int = 20829; // 0x9b1 PushI
	var_267_int = 20828; // 0x9b2 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x9b3 TObjFunc
	
Label_2485:
	var_268_bool = 0; var_269_object = Obj(); // 0x9b5 PushV
	var_269_object = var_1_object; // 0x9b6 MovT
	func_6372(var_269_object); // 0x9b7 NEW_2
	var_270_bool = var_268_bool == 0; // 0x9b9 Not
	if(var_270_bool == 0) goto Label_2496; // 0x9ba JumpB
	var_271_int = 518394; // 0x9bb PushI
	var_272_int = -1; // 0x9bc PushI
	var_273_int = 19507; // 0x9bd PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x9be TObjFunc
	
Label_2496:
	var_274_int = 518388; // 0x9c0 PushI
	var_275_int = -1; // 0x9c1 PushI
	var_276_int = 19501; // 0x9c2 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x9c3 TObjFunc
	return 0; // 0x9c5 Return
	
Label_2502:
	var_277_int = 20829; // 0x9c6 PushI
	var_278_bool = var_67_bool == var_277_int; // 0x9c7 Eq
	if(var_278_bool == 0) goto Label_2525; // 0x9c8 JumpB
	var_279_string = ""; // 0x9c9 PushV
	var_279_string = "Neutral"; // 0x9ca MovS
	func_2285(var_68_cvector, var_279_string); // 0x9cb NEW_2
	var_280_int = 519665; // 0x9cd PushI
	SetMessage(var_280_int); // 0x9ce TObjFunc
	ClearReplies(); // 0x9d0 TObjFunc
	var_281_int = 519666; // 0x9d2 PushI
	var_282_int = 20831; // 0x9d3 PushI
	var_283_int = 20830; // 0x9d4 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x9d5 TObjFunc
	var_284_int = 519671; // 0x9d7 PushI
	var_285_int = -1; // 0x9d8 PushI
	var_286_int = 20835; // 0x9d9 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x9da TObjFunc
	return 0; // 0x9dc Return
	
Label_2525:
	var_287_int = 20831; // 0x9dd PushI
	var_288_bool = var_67_bool == var_287_int; // 0x9de Eq
	if(var_288_bool == 0) goto Label_2543; // 0x9df JumpB
	var_289_string = ""; // 0x9e0 PushV
	var_289_string = "Neutral"; // 0x9e1 MovS
	func_2285(var_68_cvector, var_289_string); // 0x9e2 NEW_2
	var_290_int = 519667; // 0x9e4 PushI
	SetMessage(var_290_int); // 0x9e5 TObjFunc
	ClearReplies(); // 0x9e7 TObjFunc
	var_291_int = 519668; // 0x9e9 PushI
	var_292_int = 20833; // 0x9ea PushI
	var_293_int = 20832; // 0x9eb PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x9ec TObjFunc
	return 0; // 0x9ee Return
	
Label_2543:
	var_294_int = 20833; // 0x9ef PushI
	var_295_bool = var_67_bool == var_294_int; // 0x9f0 Eq
	if(var_295_bool == 0) goto Label_2561; // 0x9f1 JumpB
	var_296_string = ""; // 0x9f2 PushV
	var_296_string = "Neutral"; // 0x9f3 MovS
	func_2285(var_68_cvector, var_296_string); // 0x9f4 NEW_2
	var_297_int = 519669; // 0x9f6 PushI
	SetMessage(var_297_int); // 0x9f7 TObjFunc
	ClearReplies(); // 0x9f9 TObjFunc
	var_298_int = 519670; // 0x9fb PushI
	var_299_int = -1; // 0x9fc PushI
	var_300_int = 20834; // 0x9fd PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x9fe TObjFunc
	return 0; // 0xa00 Return
	
Label_2561:
	var_301_int = 20339; // 0xa01 PushI
	var_302_bool = var_67_bool == var_301_int; // 0xa02 Eq
	if(var_302_bool == 0) goto Label_2584; // 0xa03 JumpB
	var_303_string = ""; // 0xa04 PushV
	var_303_string = "Neutral"; // 0xa05 MovS
	func_2285(var_68_cvector, var_303_string); // 0xa06 NEW_2
	var_304_int = 519197; // 0xa08 PushI
	SetMessage(var_304_int); // 0xa09 TObjFunc
	ClearReplies(); // 0xa0b TObjFunc
	var_305_int = 519198; // 0xa0d PushI
	var_306_int = 19505; // 0xa0e PushI
	var_307_int = 20340; // 0xa0f PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0xa10 TObjFunc
	var_308_int = 519199; // 0xa12 PushI
	var_309_int = 20342; // 0xa13 PushI
	var_310_int = 20341; // 0xa14 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0xa15 TObjFunc
	return 0; // 0xa17 Return
	
Label_2584:
	var_311_int = 20342; // 0xa18 PushI
	var_312_bool = var_67_bool == var_311_int; // 0xa19 Eq
	if(var_312_bool == 0) goto Label_2602; // 0xa1a JumpB
	var_313_string = ""; // 0xa1b PushV
	var_313_string = "Neutral"; // 0xa1c MovS
	func_2285(var_68_cvector, var_313_string); // 0xa1d NEW_2
	var_314_int = 519200; // 0xa1f PushI
	SetMessage(var_314_int); // 0xa20 TObjFunc
	ClearReplies(); // 0xa22 TObjFunc
	var_315_int = 519201; // 0xa24 PushI
	var_316_int = -1; // 0xa25 PushI
	var_317_int = 20343; // 0xa26 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0xa27 TObjFunc
	return 0; // 0xa29 Return
	
Label_2602:
	var_318_int = 19505; // 0xa2a PushI
	var_319_bool = var_67_bool == var_318_int; // 0xa2b Eq
	if(var_319_bool == 0) goto Label_2625; // 0xa2c JumpB
	var_320_string = ""; // 0xa2d PushV
	var_320_string = "Neutral"; // 0xa2e MovS
	func_2285(var_68_cvector, var_320_string); // 0xa2f NEW_2
	var_321_int = 518392; // 0xa31 PushI
	SetMessage(var_321_int); // 0xa32 TObjFunc
	ClearReplies(); // 0xa34 TObjFunc
	var_322_int = 518393; // 0xa36 PushI
	var_323_int = -1; // 0xa37 PushI
	var_324_int = 19506; // 0xa38 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0xa39 TObjFunc
	var_325_int = 519202; // 0xa3b PushI
	var_326_int = 20345; // 0xa3c PushI
	var_327_int = 20344; // 0xa3d PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0xa3e TObjFunc
	return 0; // 0xa40 Return
	
Label_2625:
	var_328_int = 20345; // 0xa41 PushI
	var_329_bool = var_67_bool == var_328_int; // 0xa42 Eq
	if(var_329_bool == 0) goto Label_2643; // 0xa43 JumpB
	var_330_string = ""; // 0xa44 PushV
	var_330_string = "Neutral"; // 0xa45 MovS
	func_2285(var_68_cvector, var_330_string); // 0xa46 NEW_2
	var_331_int = 519203; // 0xa48 PushI
	SetMessage(var_331_int); // 0xa49 TObjFunc
	ClearReplies(); // 0xa4b TObjFunc
	var_332_int = 519204; // 0xa4d PushI
	var_333_int = -1; // 0xa4e PushI
	var_334_int = 20346; // 0xa4f PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0xa50 TObjFunc
	return 0; // 0xa52 Return
	
Label_2643:
	var_335_int = 20347; // 0xa53 PushI
	var_336_bool = var_67_bool == var_335_int; // 0xa54 Eq
	if(var_336_bool == 0) goto Label_2661; // 0xa55 JumpB
	var_337_string = ""; // 0xa56 PushV
	var_337_string = "Sly"; // 0xa57 MovS
	func_2285(var_68_cvector, var_337_string); // 0xa58 NEW_2
	var_338_int = 519205; // 0xa5a PushI
	SetMessage(var_338_int); // 0xa5b TObjFunc
	ClearReplies(); // 0xa5d TObjFunc
	var_339_int = 519206; // 0xa5f PushI
	var_340_int = 20349; // 0xa60 PushI
	var_341_int = 20348; // 0xa61 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0xa62 TObjFunc
	return 0; // 0xa64 Return
	
Label_2661:
	var_342_int = 20349; // 0xa65 PushI
	var_343_bool = var_67_bool == var_342_int; // 0xa66 Eq
	if(var_343_bool == 0) goto Label_2684; // 0xa67 JumpB
	var_344_string = ""; // 0xa68 PushV
	var_344_string = "Sly"; // 0xa69 MovS
	func_2285(var_68_cvector, var_344_string); // 0xa6a NEW_2
	var_345_int = 519207; // 0xa6c PushI
	SetMessage(var_345_int); // 0xa6d TObjFunc
	ClearReplies(); // 0xa6f TObjFunc
	var_346_int = 519208; // 0xa71 PushI
	var_347_int = 19502; // 0xa72 PushI
	var_348_int = 20350; // 0xa73 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0xa74 TObjFunc
	var_349_int = 519209; // 0xa76 PushI
	var_350_int = -1; // 0xa77 PushI
	var_351_int = 20351; // 0xa78 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0xa79 TObjFunc
	return 0; // 0xa7b Return
	
Label_2684:
	var_352_int = 19502; // 0xa7c PushI
	var_353_bool = var_67_bool == var_352_int; // 0xa7d Eq
	if(var_353_bool == 0) goto Label_2707; // 0xa7e JumpB
	var_354_string = ""; // 0xa7f PushV
	var_354_string = "Sly"; // 0xa80 MovS
	func_2285(var_68_cvector, var_354_string); // 0xa81 NEW_2
	var_355_int = 518389; // 0xa83 PushI
	SetMessage(var_355_int); // 0xa84 TObjFunc
	ClearReplies(); // 0xa86 TObjFunc
	var_356_int = 518390; // 0xa88 PushI
	var_357_int = -1; // 0xa89 PushI
	var_358_int = 19503; // 0xa8a PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0xa8b TObjFunc
	var_359_int = 519210; // 0xa8d PushI
	var_360_int = 20353; // 0xa8e PushI
	var_361_int = 20352; // 0xa8f PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0xa90 TObjFunc
	return 0; // 0xa92 Return
	
Label_2707:
	var_362_int = 20353; // 0xa93 PushI
	var_363_bool = var_67_bool == var_362_int; // 0xa94 Eq
	if(var_363_bool == 0) goto Label_2730; // 0xa95 JumpB
	var_364_string = ""; // 0xa96 PushV
	var_364_string = "Neutral"; // 0xa97 MovS
	func_2285(var_68_cvector, var_364_string); // 0xa98 NEW_2
	var_365_int = 519211; // 0xa9a PushI
	SetMessage(var_365_int); // 0xa9b TObjFunc
	ClearReplies(); // 0xa9d TObjFunc
	var_366_int = 519212; // 0xa9f PushI
	var_367_int = -1; // 0xaa0 PushI
	var_368_int = 20354; // 0xaa1 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0xaa2 TObjFunc
	var_369_int = 519213; // 0xaa4 PushI
	var_370_int = -1; // 0xaa5 PushI
	var_371_int = 20355; // 0xaa6 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xaa7 TObjFunc
	return 0; // 0xaa9 Return
	
Label_2730:
	var_3_object = 1; // 0xaaa TMovB
	var_372_bool = 0; // 0xaab PushV
	func_5817(var_372_bool); // 0xaac NEW_2
	if(var_372_bool == 0) goto Label_2738; // 0xaae JumpB
	lshStopAnimation(); // 0xaaf Func
	goto Label_2740; // 0xab1 Jump
	
Label_2740:
	return 0; // 0xab4 Return
	
Label_2738:
	StopAnimation(); // 0xab2 Func
	
Label_2742:
	return 0; // 0xab6 Return
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xb59 PushI
	if(var_69_int == 0) goto Label_2953; // 0xb5a JumpB
	func_5564(); // 0xb5c NEW_2
	var_71_int = 21677; // 0xb5e PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xb5f Eq
	if(var_72_bool == 0) goto Label_2918; // 0xb60 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xb61 PushV
	var_73_object = var_1_object; // 0xb62 MovT
	var_74_object = var_0_bool; // 0xb63 MovT
	func_5989(); // 0xb64 NEW_2
	
Label_2918:
	var_76_int = 21676; // 0xb66 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xb67 Eq
	if(var_77_bool == 0) goto Label_2941; // 0xb68 JumpB
	var_78_string = ""; // 0xb69 PushV
	var_78_string = "Anger"; // 0xb6a MovS
	func_2882(var_68_cvector, var_78_string); // 0xb6b NEW_2
	var_95_int = 520473; // 0xb6d PushI
	SetMessage(var_95_int); // 0xb6e TObjFunc
	ClearReplies(); // 0xb70 TObjFunc
	var_96_int = 520474; // 0xb72 PushI
	var_97_int = -1; // 0xb73 PushI
	var_98_int = 21677; // 0xb74 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xb75 TObjFunc
	var_99_int = 520475; // 0xb77 PushI
	var_100_int = -1; // 0xb78 PushI
	var_101_int = 21678; // 0xb79 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xb7a TObjFunc
	return 0; // 0xb7c Return
	
Label_2941:
	var_3_object = 1; // 0xb7d TMovB
	var_102_bool = 0; // 0xb7e PushV
	func_5817(var_102_bool); // 0xb7f NEW_2
	if(var_102_bool == 0) goto Label_2949; // 0xb81 JumpB
	lshStopAnimation(); // 0xb82 Func
	goto Label_2951; // 0xb84 Jump
	
Label_2951:
	return 0; // 0xb87 Return
	
Label_2949:
	StopAnimation(); // 0xb85 Func
	
Label_2953:
	return 0; // 0xb89 Return
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xc2c PushI
	if(var_69_int == 0) goto Label_3164; // 0xc2d JumpB
	func_5564(); // 0xc2f NEW_2
	var_71_int = 21681; // 0xc31 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xc32 Eq
	if(var_72_bool == 0) goto Label_3129; // 0xc33 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xc34 PushV
	var_73_object = var_1_object; // 0xc35 MovT
	var_74_object = var_0_bool; // 0xc36 MovT
	func_5989(); // 0xc37 NEW_2
	
Label_3129:
	var_76_int = 21680; // 0xc39 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xc3a Eq
	if(var_77_bool == 0) goto Label_3152; // 0xc3b JumpB
	var_78_string = ""; // 0xc3c PushV
	var_78_string = "Smile"; // 0xc3d MovS
	func_3093(var_68_cvector, var_78_string); // 0xc3e NEW_2
	var_95_int = 520477; // 0xc40 PushI
	SetMessage(var_95_int); // 0xc41 TObjFunc
	ClearReplies(); // 0xc43 TObjFunc
	var_96_int = 520478; // 0xc45 PushI
	var_97_int = -1; // 0xc46 PushI
	var_98_int = 21681; // 0xc47 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xc48 TObjFunc
	var_99_int = 520479; // 0xc4a PushI
	var_100_int = -1; // 0xc4b PushI
	var_101_int = 21682; // 0xc4c PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xc4d TObjFunc
	return 0; // 0xc4f Return
	
Label_3152:
	var_3_object = 1; // 0xc50 TMovB
	var_102_bool = 0; // 0xc51 PushV
	func_5817(var_102_bool); // 0xc52 NEW_2
	if(var_102_bool == 0) goto Label_3160; // 0xc54 JumpB
	lshStopAnimation(); // 0xc55 Func
	goto Label_3162; // 0xc57 Jump
	
Label_3162:
	return 0; // 0xc5a Return
	
Label_3160:
	StopAnimation(); // 0xc58 Func
	
Label_3164:
	return 0; // 0xc5c Return
}


task_14_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xcff PushI
	if(var_69_int == 0) goto Label_3375; // 0xd00 JumpB
	func_5564(); // 0xd02 NEW_2
	var_71_int = 21685; // 0xd04 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xd05 Eq
	if(var_72_bool == 0) goto Label_3340; // 0xd06 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xd07 PushV
	var_73_object = var_1_object; // 0xd08 MovT
	var_74_object = var_0_bool; // 0xd09 MovT
	func_5989(); // 0xd0a NEW_2
	
Label_3340:
	var_76_int = 21684; // 0xd0c PushI
	var_77_bool = var_67_bool == var_76_int; // 0xd0d Eq
	if(var_77_bool == 0) goto Label_3363; // 0xd0e JumpB
	var_78_string = ""; // 0xd0f PushV
	var_78_string = "Anger"; // 0xd10 MovS
	func_3304(var_68_cvector, var_78_string); // 0xd11 NEW_2
	var_95_int = 520481; // 0xd13 PushI
	SetMessage(var_95_int); // 0xd14 TObjFunc
	ClearReplies(); // 0xd16 TObjFunc
	var_96_int = 520482; // 0xd18 PushI
	var_97_int = -1; // 0xd19 PushI
	var_98_int = 21685; // 0xd1a PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xd1b TObjFunc
	var_99_int = 520483; // 0xd1d PushI
	var_100_int = -1; // 0xd1e PushI
	var_101_int = 21686; // 0xd1f PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xd20 TObjFunc
	return 0; // 0xd22 Return
	
Label_3363:
	var_3_object = 1; // 0xd23 TMovB
	var_102_bool = 0; // 0xd24 PushV
	func_5817(var_102_bool); // 0xd25 NEW_2
	if(var_102_bool == 0) goto Label_3371; // 0xd27 JumpB
	lshStopAnimation(); // 0xd28 Func
	goto Label_3373; // 0xd2a Jump
	
Label_3373:
	return 0; // 0xd2d Return
	
Label_3371:
	StopAnimation(); // 0xd2b Func
	
Label_3375:
	return 0; // 0xd2f Return
}


task_16_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xdd2 PushI
	if(var_69_int == 0) goto Label_3586; // 0xdd3 JumpB
	func_5564(); // 0xdd5 NEW_2
	var_71_int = 21689; // 0xdd7 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xdd8 Eq
	if(var_72_bool == 0) goto Label_3551; // 0xdd9 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xdda PushV
	var_73_object = var_1_object; // 0xddb MovT
	var_74_object = var_0_bool; // 0xddc MovT
	func_5989(); // 0xddd NEW_2
	
Label_3551:
	var_76_int = 21688; // 0xddf PushI
	var_77_bool = var_67_bool == var_76_int; // 0xde0 Eq
	if(var_77_bool == 0) goto Label_3574; // 0xde1 JumpB
	var_78_string = ""; // 0xde2 PushV
	var_78_string = "Smile"; // 0xde3 MovS
	func_3515(var_68_cvector, var_78_string); // 0xde4 NEW_2
	var_95_int = 520485; // 0xde6 PushI
	SetMessage(var_95_int); // 0xde7 TObjFunc
	ClearReplies(); // 0xde9 TObjFunc
	var_96_int = 520486; // 0xdeb PushI
	var_97_int = -1; // 0xdec PushI
	var_98_int = 21689; // 0xded PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xdee TObjFunc
	var_99_int = 520487; // 0xdf0 PushI
	var_100_int = -1; // 0xdf1 PushI
	var_101_int = 21690; // 0xdf2 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xdf3 TObjFunc
	return 0; // 0xdf5 Return
	
Label_3574:
	var_3_object = 1; // 0xdf6 TMovB
	var_102_bool = 0; // 0xdf7 PushV
	func_5817(var_102_bool); // 0xdf8 NEW_2
	if(var_102_bool == 0) goto Label_3582; // 0xdfa JumpB
	lshStopAnimation(); // 0xdfb Func
	goto Label_3584; // 0xdfd Jump
	
Label_3584:
	return 0; // 0xe00 Return
	
Label_3582:
	StopAnimation(); // 0xdfe Func
	
Label_3586:
	return 0; // 0xe02 Return
}


task_18_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xecb PushI
	if(var_69_int == 0) goto Label_4025; // 0xecc JumpB
	func_5564(); // 0xece NEW_2
	var_71_int = 21693; // 0xed0 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xed1 Eq
	if(var_72_bool == 0) goto Label_3800; // 0xed2 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xed3 PushV
	var_73_object = var_1_object; // 0xed4 MovT
	var_74_object = var_0_bool; // 0xed5 MovT
	func_5989(); // 0xed6 NEW_2
	
Label_3800:
	var_76_int = 22573; // 0xed8 PushI
	var_77_bool = var_68_cvector == var_76_int; // 0xed9 Eq
	if(var_77_bool == 0) goto Label_3808; // 0xeda JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0xedb PushV
	var_78_object = var_1_object; // 0xedc MovT
	var_79_object = var_0_bool; // 0xedd MovT
	func_5907(); // 0xede NEW_2
	
Label_3808:
	var_82_int = 22575; // 0xee0 PushI
	var_83_bool = var_68_cvector == var_82_int; // 0xee1 Eq
	if(var_83_bool == 0) goto Label_3821; // 0xee2 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0xee3 PushV
	var_84_object = var_1_object; // 0xee4 MovT
	var_85_object = var_0_bool; // 0xee5 MovT
	func_5913(); // 0xee6 NEW_2
	var_102_object = Obj(); var_103_object = Obj(); // 0xee8 PushV
	var_102_object = var_1_object; // 0xee9 MovT
	var_103_object = var_0_bool; // 0xeea MovT
	func_5976(); // 0xeeb NEW_2
	
Label_3821:
	var_106_int = 22647; // 0xeed PushI
	var_107_bool = var_68_cvector == var_106_int; // 0xeee Eq
	if(var_107_bool == 0) goto Label_3829; // 0xeef JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0xef0 PushV
	var_108_object = var_1_object; // 0xef1 MovT
	var_109_object = var_0_bool; // 0xef2 MovT
	func_5929(); // 0xef3 NEW_2
	
Label_3829:
	var_112_int = 21692; // 0xef5 PushI
	var_113_bool = var_67_bool == var_112_int; // 0xef6 Eq
	if(var_113_bool == 0) goto Label_3890; // 0xef7 JumpB
	var_114_string = ""; // 0xef8 PushV
	var_114_string = "Neutral"; // 0xef9 MovS
	func_3764(var_68_cvector, var_114_string); // 0xefa NEW_2
	var_131_int = 520489; // 0xefc PushI
	SetMessage(var_131_int); // 0xefd TObjFunc
	ClearReplies(); // 0xeff TObjFunc
	var_132_int = 520490; // 0xf01 PushI
	var_133_int = -1; // 0xf02 PushI
	var_134_int = 21693; // 0xf03 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xf04 TObjFunc
	var_135_bool = 0; // 0xf06 PushV
	var_135_bool = 0; // 0xf07 MovB
	var_136_bool = 0; var_137_object = Obj(); // 0xf08 PushV
	var_137_object = var_1_object; // 0xf09 MovT
	func_6180(var_137_object); // 0xf0a NEW_2
	if(var_136_bool == 0) goto Label_3859; // 0xf0c JumpB
	var_144_bool = 0; var_145_object = Obj(); // 0xf0d PushV
	var_145_object = var_1_object; // 0xf0e MovT
	func_6192(var_145_object); // 0xf0f NEW_2
	if(var_144_bool == 0) goto Label_3859; // 0xf11 JumpB
	var_135_bool = 1; // 0xf12 MovB
	
Label_3859:
	if(var_135_bool == 0) goto Label_3865; // 0xf13 JumpB
	var_150_int = 521395; // 0xf14 PushI
	var_151_int = 25305; // 0xf15 PushI
	var_152_int = 22573; // 0xf16 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0xf17 TObjFunc
	
Label_3865:
	var_153_bool = 0; // 0xf19 PushV
	var_153_bool = 0; // 0xf1a MovB
	var_154_bool = 0; var_155_object = Obj(); // 0xf1b PushV
	var_155_object = var_1_object; // 0xf1c MovT
	func_6216(var_155_object); // 0xf1d NEW_2
	if(var_154_bool == 0) goto Label_3878; // 0xf1f JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0xf20 PushV
	var_161_object = var_1_object; // 0xf21 MovT
	func_6204(var_161_object); // 0xf22 NEW_2
	if(var_160_bool == 0) goto Label_3878; // 0xf24 JumpB
	var_153_bool = 1; // 0xf25 MovB
	
Label_3878:
	if(var_153_bool == 0) goto Label_3884; // 0xf26 JumpB
	var_166_int = 521482; // 0xf27 PushI
	var_167_int = 22648; // 0xf28 PushI
	var_168_int = 22647; // 0xf29 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0xf2a TObjFunc
	
Label_3884:
	var_169_int = 520491; // 0xf2c PushI
	var_170_int = -1; // 0xf2d PushI
	var_171_int = 21694; // 0xf2e PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0xf2f TObjFunc
	return 0; // 0xf31 Return
	
Label_3890:
	var_172_int = 22648; // 0xf32 PushI
	var_173_bool = var_67_bool == var_172_int; // 0xf33 Eq
	if(var_173_bool == 0) goto Label_3908; // 0xf34 JumpB
	var_174_string = ""; // 0xf35 PushV
	var_174_string = "Smile"; // 0xf36 MovS
	func_3764(var_68_cvector, var_174_string); // 0xf37 NEW_2
	var_175_int = 521483; // 0xf39 PushI
	SetMessage(var_175_int); // 0xf3a TObjFunc
	ClearReplies(); // 0xf3c TObjFunc
	var_176_int = 521484; // 0xf3e PushI
	var_177_int = 25315; // 0xf3f PushI
	var_178_int = 22649; // 0xf40 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0xf41 TObjFunc
	return 0; // 0xf43 Return
	
Label_3908:
	var_179_int = 25315; // 0xf44 PushI
	var_180_bool = var_67_bool == var_179_int; // 0xf45 Eq
	if(var_180_bool == 0) goto Label_3926; // 0xf46 JumpB
	var_181_string = ""; // 0xf47 PushV
	var_181_string = "Smile"; // 0xf48 MovS
	func_3764(var_68_cvector, var_181_string); // 0xf49 NEW_2
	var_182_int = 524021; // 0xf4b PushI
	SetMessage(var_182_int); // 0xf4c TObjFunc
	ClearReplies(); // 0xf4e TObjFunc
	var_183_int = 524022; // 0xf50 PushI
	var_184_int = 25317; // 0xf51 PushI
	var_185_int = 25316; // 0xf52 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0xf53 TObjFunc
	return 0; // 0xf55 Return
	
Label_3926:
	var_186_int = 25317; // 0xf56 PushI
	var_187_bool = var_67_bool == var_186_int; // 0xf57 Eq
	if(var_187_bool == 0) goto Label_3949; // 0xf58 JumpB
	var_188_string = ""; // 0xf59 PushV
	var_188_string = "Sly"; // 0xf5a MovS
	func_3764(var_68_cvector, var_188_string); // 0xf5b NEW_2
	var_189_int = 524023; // 0xf5d PushI
	SetMessage(var_189_int); // 0xf5e TObjFunc
	ClearReplies(); // 0xf60 TObjFunc
	var_190_int = 524024; // 0xf62 PushI
	var_191_int = -1; // 0xf63 PushI
	var_192_int = 25318; // 0xf64 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0xf65 TObjFunc
	var_193_int = 524025; // 0xf67 PushI
	var_194_int = -1; // 0xf68 PushI
	var_195_int = 25319; // 0xf69 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0xf6a TObjFunc
	return 0; // 0xf6c Return
	
Label_3949:
	var_196_int = 25305; // 0xf6d PushI
	var_197_bool = var_67_bool == var_196_int; // 0xf6e Eq
	if(var_197_bool == 0) goto Label_3977; // 0xf6f JumpB
	var_198_string = ""; // 0xf70 PushV
	var_198_string = "Neutral"; // 0xf71 MovS
	func_3764(var_68_cvector, var_198_string); // 0xf72 NEW_2
	var_199_int = 524012; // 0xf74 PushI
	SetMessage(var_199_int); // 0xf75 TObjFunc
	ClearReplies(); // 0xf77 TObjFunc
	var_200_int = 524013; // 0xf79 PushI
	var_201_int = 25309; // 0xf7a PushI
	var_202_int = 25306; // 0xf7b PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0xf7c TObjFunc
	var_203_int = 524014; // 0xf7e PushI
	var_204_int = 25311; // 0xf7f PushI
	var_205_int = 25307; // 0xf80 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0xf81 TObjFunc
	var_206_int = 524015; // 0xf83 PushI
	var_207_int = 25311; // 0xf84 PushI
	var_208_int = 25308; // 0xf85 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xf86 TObjFunc
	return 0; // 0xf88 Return
	
Label_3977:
	var_209_int = 25311; // 0xf89 PushI
	var_210_bool = var_67_bool == var_209_int; // 0xf8a Eq
	if(var_210_bool == 0) goto Label_3995; // 0xf8b JumpB
	var_211_string = ""; // 0xf8c PushV
	var_211_string = "Neutral"; // 0xf8d MovS
	func_3764(var_68_cvector, var_211_string); // 0xf8e NEW_2
	var_212_int = 524018; // 0xf90 PushI
	SetMessage(var_212_int); // 0xf91 TObjFunc
	ClearReplies(); // 0xf93 TObjFunc
	var_213_int = 521397; // 0xf95 PushI
	var_214_int = -1; // 0xf96 PushI
	var_215_int = 22575; // 0xf97 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xf98 TObjFunc
	return 0; // 0xf9a Return
	
Label_3995:
	var_216_int = 25309; // 0xf9b PushI
	var_217_bool = var_67_bool == var_216_int; // 0xf9c Eq
	if(var_217_bool == 0) goto Label_4013; // 0xf9d JumpB
	var_218_string = ""; // 0xf9e PushV
	var_218_string = "Neutral"; // 0xf9f MovS
	func_3764(var_68_cvector, var_218_string); // 0xfa0 NEW_2
	var_219_int = 524016; // 0xfa2 PushI
	SetMessage(var_219_int); // 0xfa3 TObjFunc
	ClearReplies(); // 0xfa5 TObjFunc
	var_220_int = 524017; // 0xfa7 PushI
	var_221_int = -1; // 0xfa8 PushI
	var_222_int = 25310; // 0xfa9 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0xfaa TObjFunc
	return 0; // 0xfac Return
	
Label_4013:
	var_3_object = 1; // 0xfad TMovB
	var_223_bool = 0; // 0xfae PushV
	func_5817(var_223_bool); // 0xfaf NEW_2
	if(var_223_bool == 0) goto Label_4021; // 0xfb1 JumpB
	lshStopAnimation(); // 0xfb2 Func
	goto Label_4023; // 0xfb4 Jump
	
Label_4023:
	return 0; // 0xfb7 Return
	
Label_4021:
	StopAnimation(); // 0xfb5 Func
	
Label_4025:
	return 0; // 0xfb9 Return
}


task_20_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x105c PushI
	if(var_69_int == 0) goto Label_4236; // 0x105d JumpB
	func_5564(); // 0x105f NEW_2
	var_71_int = 21697; // 0x1061 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x1062 Eq
	if(var_72_bool == 0) goto Label_4201; // 0x1063 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x1064 PushV
	var_73_object = var_1_object; // 0x1065 MovT
	var_74_object = var_0_bool; // 0x1066 MovT
	func_5989(); // 0x1067 NEW_2
	
Label_4201:
	var_76_int = 21696; // 0x1069 PushI
	var_77_bool = var_67_bool == var_76_int; // 0x106a Eq
	if(var_77_bool == 0) goto Label_4224; // 0x106b JumpB
	var_78_string = ""; // 0x106c PushV
	var_78_string = "Sly"; // 0x106d MovS
	func_4165(var_68_cvector, var_78_string); // 0x106e NEW_2
	var_95_int = 520493; // 0x1070 PushI
	SetMessage(var_95_int); // 0x1071 TObjFunc
	ClearReplies(); // 0x1073 TObjFunc
	var_96_int = 520494; // 0x1075 PushI
	var_97_int = -1; // 0x1076 PushI
	var_98_int = 21697; // 0x1077 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x1078 TObjFunc
	var_99_int = 520495; // 0x107a PushI
	var_100_int = -1; // 0x107b PushI
	var_101_int = 21698; // 0x107c PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x107d TObjFunc
	return 0; // 0x107f Return
	
Label_4224:
	var_3_object = 1; // 0x1080 TMovB
	var_102_bool = 0; // 0x1081 PushV
	func_5817(var_102_bool); // 0x1082 NEW_2
	if(var_102_bool == 0) goto Label_4232; // 0x1084 JumpB
	lshStopAnimation(); // 0x1085 Func
	goto Label_4234; // 0x1087 Jump
	
Label_4234:
	return 0; // 0x108a Return
	
Label_4232:
	StopAnimation(); // 0x1088 Func
	
Label_4236:
	return 0; // 0x108c Return
}


task_22_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x112f PushI
	if(var_69_int == 0) goto Label_4447; // 0x1130 JumpB
	func_5564(); // 0x1132 NEW_2
	var_71_int = 21701; // 0x1134 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x1135 Eq
	if(var_72_bool == 0) goto Label_4412; // 0x1136 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x1137 PushV
	var_73_object = var_1_object; // 0x1138 MovT
	var_74_object = var_0_bool; // 0x1139 MovT
	func_5989(); // 0x113a NEW_2
	
Label_4412:
	var_76_int = 21700; // 0x113c PushI
	var_77_bool = var_67_bool == var_76_int; // 0x113d Eq
	if(var_77_bool == 0) goto Label_4435; // 0x113e JumpB
	var_78_string = ""; // 0x113f PushV
	var_78_string = "Fear"; // 0x1140 MovS
	func_4376(var_68_cvector, var_78_string); // 0x1141 NEW_2
	var_95_int = 520497; // 0x1143 PushI
	SetMessage(var_95_int); // 0x1144 TObjFunc
	ClearReplies(); // 0x1146 TObjFunc
	var_96_int = 520498; // 0x1148 PushI
	var_97_int = -1; // 0x1149 PushI
	var_98_int = 21701; // 0x114a PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x114b TObjFunc
	var_99_int = 520499; // 0x114d PushI
	var_100_int = -1; // 0x114e PushI
	var_101_int = 21702; // 0x114f PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x1150 TObjFunc
	return 0; // 0x1152 Return
	
Label_4435:
	var_3_object = 1; // 0x1153 TMovB
	var_102_bool = 0; // 0x1154 PushV
	func_5817(var_102_bool); // 0x1155 NEW_2
	if(var_102_bool == 0) goto Label_4443; // 0x1157 JumpB
	lshStopAnimation(); // 0x1158 Func
	goto Label_4445; // 0x115a Jump
	
Label_4445:
	return 0; // 0x115d Return
	
Label_4443:
	StopAnimation(); // 0x115b Func
	
Label_4447:
	return 0; // 0x115f Return
}


task_24_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x1202 PushI
	if(var_69_int == 0) goto Label_4658; // 0x1203 JumpB
	func_5564(); // 0x1205 NEW_2
	var_71_int = 21705; // 0x1207 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x1208 Eq
	if(var_72_bool == 0) goto Label_4623; // 0x1209 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x120a PushV
	var_73_object = var_1_object; // 0x120b MovT
	var_74_object = var_0_bool; // 0x120c MovT
	func_5989(); // 0x120d NEW_2
	
Label_4623:
	var_76_int = 21704; // 0x120f PushI
	var_77_bool = var_67_bool == var_76_int; // 0x1210 Eq
	if(var_77_bool == 0) goto Label_4646; // 0x1211 JumpB
	var_78_string = ""; // 0x1212 PushV
	var_78_string = "Sly"; // 0x1213 MovS
	func_4587(var_68_cvector, var_78_string); // 0x1214 NEW_2
	var_95_int = 520501; // 0x1216 PushI
	SetMessage(var_95_int); // 0x1217 TObjFunc
	ClearReplies(); // 0x1219 TObjFunc
	var_96_int = 520502; // 0x121b PushI
	var_97_int = -1; // 0x121c PushI
	var_98_int = 21705; // 0x121d PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x121e TObjFunc
	var_99_int = 520503; // 0x1220 PushI
	var_100_int = -1; // 0x1221 PushI
	var_101_int = 21706; // 0x1222 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x1223 TObjFunc
	return 0; // 0x1225 Return
	
Label_4646:
	var_3_object = 1; // 0x1226 TMovB
	var_102_bool = 0; // 0x1227 PushV
	func_5817(var_102_bool); // 0x1228 NEW_2
	if(var_102_bool == 0) goto Label_4654; // 0x122a JumpB
	lshStopAnimation(); // 0x122b Func
	goto Label_4656; // 0x122d Jump
	
Label_4656:
	return 0; // 0x1230 Return
	
Label_4654:
	StopAnimation(); // 0x122e Func
	
Label_4658:
	return 0; // 0x1232 Return
}


task_26_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_cvector)
{
	var_69_int = 1; // 0x12d5 PushI
	if(var_69_int == 0) goto Label_4907; // 0x12d6 JumpB
	func_5564(); // 0x12d8 NEW_2
	var_71_int = 21941; // 0x12da PushI
	var_72_bool = var_67_int == var_71_int; // 0x12db Eq
	if(var_72_bool == 0) goto Label_4849; // 0x12dc JumpB
	var_73_string = ""; // 0x12dd PushV
	var_73_string = "Neutral"; // 0x12de MovS
	func_4798(var_68_cvector, var_73_string); // 0x12df NEW_2
	var_90_int = 520730; // 0x12e1 PushI
	SetMessage(var_90_int); // 0x12e2 TObjFunc
	ClearReplies(); // 0x12e4 TObjFunc
	var_91_int = 520731; // 0x12e6 PushI
	var_92_int = 21943; // 0x12e7 PushI
	var_93_int = 21942; // 0x12e8 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x12e9 TObjFunc
	var_94_int = 520738; // 0x12eb PushI
	var_95_int = 21943; // 0x12ec PushI
	var_96_int = 21949; // 0x12ed PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x12ee TObjFunc
	return 0; // 0x12f0 Return
	
Label_4849:
	var_97_int = 21943; // 0x12f1 PushI
	var_98_bool = var_67_int == var_97_int; // 0x12f2 Eq
	if(var_98_bool == 0) goto Label_4872; // 0x12f3 JumpB
	var_99_string = ""; // 0x12f4 PushV
	var_99_string = "Neutral"; // 0x12f5 MovS
	func_4798(var_68_cvector, var_99_string); // 0x12f6 NEW_2
	var_100_int = 520732; // 0x12f8 PushI
	SetMessage(var_100_int); // 0x12f9 TObjFunc
	ClearReplies(); // 0x12fb TObjFunc
	var_101_int = 520733; // 0x12fd PushI
	var_102_int = 21945; // 0x12fe PushI
	var_103_int = 21944; // 0x12ff PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x1300 TObjFunc
	var_104_int = 520737; // 0x1302 PushI
	var_105_int = 21945; // 0x1303 PushI
	var_106_int = 21948; // 0x1304 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x1305 TObjFunc
	return 0; // 0x1307 Return
	
Label_4872:
	var_107_int = 21945; // 0x1308 PushI
	var_108_bool = var_67_int == var_107_int; // 0x1309 Eq
	if(var_108_bool == 0) goto Label_4895; // 0x130a JumpB
	var_109_string = ""; // 0x130b PushV
	var_109_string = "Neutral"; // 0x130c MovS
	func_4798(var_68_cvector, var_109_string); // 0x130d NEW_2
	var_110_int = 520734; // 0x130f PushI
	SetMessage(var_110_int); // 0x1310 TObjFunc
	ClearReplies(); // 0x1312 TObjFunc
	var_111_int = 520735; // 0x1314 PushI
	var_112_int = -1; // 0x1315 PushI
	var_113_int = 21946; // 0x1316 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x1317 TObjFunc
	var_114_int = 520736; // 0x1319 PushI
	var_115_int = -1; // 0x131a PushI
	var_116_int = 21947; // 0x131b PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x131c TObjFunc
	return 0; // 0x131e Return
	
Label_4895:
	var_3_object = 1; // 0x131f TMovB
	var_117_bool = 0; // 0x1320 PushV
	func_5817(var_117_bool); // 0x1321 NEW_2
	if(var_117_bool == 0) goto Label_4903; // 0x1323 JumpB
	lshStopAnimation(); // 0x1324 Func
	goto Label_4905; // 0x1326 Jump
	
Label_4905:
	return 0; // 0x1329 Return
	
Label_4903:
	StopAnimation(); // 0x1327 Func
	
Label_4907:
	return 0; // 0x132b Return
}


task_27_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_int)
{
	var_68_int = 10; // 0x137c PushI
	var_69_bool = var_67_int == var_68_int; // 0x137d Eq
	if(var_69_bool == 0) goto Label_5024; // 0x137e JumpB
	func_4983(); // 0x1380 NEW_2
	var_71_bool = 0; // 0x1382 PushV
	var_71_bool = 0; // 0x1383 MovB
	var_72_bool = 0; // 0x1384 PushV
	func_5231(var_72_bool); // 0x1385 NEW_2
	if(var_72_bool == 0) goto Label_5005; // 0x1387 JumpB
	var_75_bool = 0; // 0x1388 PushV
	func_4952(var_75_bool); // 0x1389 NEW_2
	if(var_75_bool == 0) goto Label_5005; // 0x138b JumpB
	var_71_bool = 1; // 0x138c MovB
	
Label_5005:
	if(var_71_bool == 0) goto Label_5018; // 0x138d JumpB
	var_92_bool = 0; // 0x138e PushV
	func_4932(var_92_bool); // 0x138f NEW_2
	if(var_92_bool == 0) goto Label_5017; // 0x1391 JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x1392 PushV
	var_113_object = Obj(); // 0x1393 PushV
	func_5599(var_113_object); // 0x1394 NEW_2
	var_112_object = var_113_object; // 0x1395 Mov
	func_5379(var_112_object); // 0x1397 NEW_2
	
Label_5017:
	goto Label_5024; // 0x1399 Jump
	
Label_5024:
	return 0; // 0x13a0 Return
	
Label_5018:
	func_4947(var_67_int); // 0x139b NEW_2
	func_4974(); // 0x139e NEW_2
}


task_27_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	func_5165(); // 0x13a2 NEW_2
	func_4983(); // 0x13a5 NEW_2
	lshStopSpeech(); // 0x13a7 Func
	lshStopAnimation(); // 0x13a9 Func
	StopAsync(); // 0x13ab Func
	Hold(); // 0x13ad Func
	return 0; // 0x13af Return
}


task_27_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	StopGroup0(); // 0x13b0 Func
	func_4983(); // 0x13b3 NEW_2
	var_68_string = ""; // 0x13b5 PushV
	var_68_string = "Neutral"; // 0x13b6 MovS
	func_5518(var_68_string); // 0x13b7 NEW_2
	func_4974(); // 0x13ba NEW_2
	return 0; // 0x13bc Return
}


task_27_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_bool)
{
	var_68_bool = var_67_bool; // 0x13be Push
	if(var_68_bool == 0) goto Label_5060; // 0x13bf JumpB
	func_4974(); // 0x13c1 NEW_2
	goto Label_5064; // 0x13c3 Jump
	
Label_5064:
	return 0; // 0x13c8 Return
	
Label_5060:
	var_74_string = ""; // 0x13c4 PushV
	var_74_string = "Neutral"; // 0x13c5 MovS
	func_5518(var_74_string); // 0x13c6 NEW_2
}


task_27_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object)
{
	var_68_bool = 0; var_69_bool = 0; // 0x13c9 PushV
	IsOverrideActive(var_69_bool); // 0x13ca Func
	var_70_bool = var_69_bool == 0; // 0x13cc Not
	if(var_70_bool == 0) goto Label_5093; // 0x13cd JumpB
	EventDisable(0); // 0x13ce EventDisable
	func_5165(); // 0x13d0 NEW_2
	var_71_bool = 0; var_72_object = Obj(); // 0x13d2 PushV
	var_72_object = var_67_object; // 0x13d3 Mov
	func_5222(var_72_object); // 0x13d4 NEW_2
	EventEnable(0); // 0x13d6 EventEnable
	var_85_object = Obj(); // 0x13d7 PushV
	var_85_object = var_67_object; // 0x13d8 Mov
	func_6853(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object, var_68_bool, var_69_bool, var_85_object); // 0x13d9 NEW_2
	var_1440_string = ""; // 0x13db PushV
	var_1440_string = "Neutral"; // 0x13dc MovS
	func_5518(var_1440_string); // 0x13dd NEW_2
	func_4983(); // 0x13e0 NEW_2
	func_4974(); // 0x13e3 NEW_2
	
Label_5093:
	return 2; // 0x13e5 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	var_67_bool = GlobalVars[1]; // 0x132c PushGE
	var_67_bool = 0; // 0x132d MovB
	GlobalVars[1] = var_67_bool; // 0x132e PopGE
	var_68_int = GlobalVars[3]; // 0x132f PushGE
	var_68_int = -1; // 0x1330 MovI
	GlobalVars[3] = var_68_int; // 0x1331 PopGE
	func_4918(var_66_cvector); // 0x1333 NEW_2
	return 0; // 0x1335 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_664_string = ""; // 0x4 PushV
	var_664_string = "Neutral"; // 0x5 MovS
	func_5518(var_664_string); // 0x6 NEW_2
	lshWaitForAnimEnd(); // 0x8 Func
	var_665_bool = var_0_bool; // 0xa PushT
	if(var_665_bool == 0) goto Label_13; // 0xb JumpB
	return 0; // 0xc Return
	
Label_13:
	goto Label_4; // 0xd Jump
}


func_3587(var_0_bool, var_1102_int, var_1103_object)
{
	var_1105_object = Obj(); var_1106_bool = 0; var_1107_int = 0; var_1108_bool = 0; var_1109_object = Obj(); var_1110_bool = 0; var_1111_int = 0; var_1112_bool = 0; // 0xe03 PushV
	var_0_bool = var_1103_object; // 0xe04 TMov
	var_1113_bool = 0; var_1114_object = Obj(); var_1115_float = 0; // 0xe05 PushV
	var_1114_object = var_1103_object; // 0xe06 Mov
	var_1115_float = 70.0; // 0xe07 MovF
	func_5236(var_1114_object, var_1115_float); // 0xe08 NEW_2
	var_1116_bool = var_1113_bool == 0; // 0xe0a Not
	if(var_1116_bool == 0) goto Label_3598; // 0xe0b JumpB
	var_1102_int = -2; // 0xe0c MovI
	return 8; // 0xe0d Return
	
Label_3598:
	CreateDialog(var_1109_object); // 0xe0e Func
	var_1117_int = 0; // 0xe10 PushV
	func_5811(var_1117_int); // 0xe11 NEW_2
	SetNPCName(var_1117_int); // 0xe13 ObjFunc
	var_1118_int = 0; // 0xe15 PushV
	func_5809(var_1118_int); // 0xe16 NEW_2
	SetNPCDescription(var_1118_int); // 0xe18 ObjFunc
	var_1119_string = ""; // 0xe1a PushV
	func_5813(var_1119_string); // 0xe1b NEW_2
	SetPhoto(var_1119_string); // 0xe1d ObjFunc
	var_1120_string = ""; // 0xe1f PushV
	func_5815(var_1120_string); // 0xe20 NEW_2
	SetPhoto2(var_1120_string); // 0xe22 ObjFunc
	var_1121_int = 0; // 0xe24 PushV
	func_6811(var_1121_int); // 0xe25 NEW_2
	SetPlayerName(var_1121_int); // 0xe27 ObjFunc
	var_1111_int = -1; // 0xe29 MovI
	IsOverrideActive(var_1110_bool); // 0xe2a Func
	var_1122_bool = var_1110_bool; // 0xe2c Push
	if(var_1122_bool == 0) goto Label_3632; // 0xe2d JumpB
	var_1102_int = -2; // 0xe2e MovI
	return 8; // 0xe2f Return
	
Label_3632:
	DoDialog(var_1109_object); // 0xe30 Func
	var_1123_bool = 0; var_1124_object = Obj(); // 0xe32 PushV
	var_1125_object = Obj(); // 0xe33 PushV
	func_5599(var_1125_object); // 0xe34 NEW_2
	var_1124_object = var_1125_object; // 0xe35 Mov
	func_5321(var_1123_bool, var_1124_object); // 0xe37 NEW_2
	var_1126_object = Obj(); var_1127_object = Obj(); // 0xe39 PushV
	var_1126_object = var_1103_object; // 0xe3a Mov
	var_1127_object = var_1109_object; // 0xe3b Mov
	TaskCall(18); // 0xe3c TaskCall
	func_3668(var_1128_object, var_1129_object, var_1130_string, var_1131_bool, var_1126_object, var_1127_object); // 0xe3d NEW_2
	TaskReturn(); // 0xe3e TaskReturn
	IsDialogEnd(var_1112_bool); // 0xe40 ObjFunc
	
Label_3650:
	var_1188_bool = var_1112_bool == 0; // 0xe42 Not
	if(var_1188_bool == 0) goto Label_3657; // 0xe43 JumpB
	sync(); // 0xe44 Func
	IsDialogEnd(var_1112_bool); // 0xe46 ObjFunc
	goto Label_3650; // 0xe48 Jump
	
Label_3657:
	var_1189_object = Obj(); // 0xe49 PushV
	var_1189_object = var_1103_object; // 0xe4a Mov
	func_5304(); // 0xe4b NEW_2
	StopDialog(var_1109_object); // 0xe4d Func
	GetReturnValue(var_1111_int); // 0xe4f ObjFunc
	var_1102_int = var_1111_int; // 0xe51 Mov
	return 8; // 0xe52 Return
}


func_5636(var_129_object, var_130_string)
{
	var_131_object = Obj(); var_132_object = Obj(); var_133_object = Obj(); var_134_object = Obj(); // 0x1604 PushV
	GetMainOutdoorScene(var_133_object); // 0x1605 Func
	var_135_string = ".bin"; // 0x1607 PushS
	var_136_int = var_130_string + var_135_string; // 0x1608 Add
	AddBlankActor(var_134_object, var_133_object, var_130_string, var_136_int); // 0x1609 Func
	var_129_object = var_134_object; // 0x160b Mov
	return 4; // 0x160c Return
}


func_6150()
{
	var_136_object = Obj(); var_137_object = Obj(); // 0x1806 PushV
	var_138_string = "b3q02"; // 0x1807 PushS
	var_139_int = 4; // 0x1808 PushI
	SetVariable(var_138_string, var_139_int); // 0x1809 Func
	var_140_object = Obj(); // 0x180b PushV
	func_6587(var_140_object); // 0x180c NEW_2
	var_137_object = var_140_object; // 0x180d Mov
	var_141_string = "b3q02GrifGotoNotkin"; // 0x180f PushS
	var_142_string = "pt_map_notkin"; // 0x1810 PushS
	var_143_int = 0; // 0x1811 PushI
	var_144_int = 519662; // 0x1812 PushI
	var_145_float = 0; // 0x1813 PushV
	func_5765(var_145_float); // 0x1814 NEW_2
	AddMark(var_141_string, var_142_string, var_143_int, var_144_int, var_145_float); // 0x1816 ObjFunc
	func_6533(); // 0x1819 NEW_2
	return 2; // 0x181b Return
}


func_2054(var_0_bool, var_731_int, var_732_object)
{
	var_734_object = Obj(); var_735_bool = 0; var_736_int = 0; var_737_bool = 0; var_738_object = Obj(); var_739_bool = 0; var_740_int = 0; var_741_bool = 0; // 0x806 PushV
	var_0_bool = var_732_object; // 0x807 TMov
	var_742_bool = 0; var_743_object = Obj(); var_744_float = 0; // 0x808 PushV
	var_743_object = var_732_object; // 0x809 Mov
	var_744_float = 70.0; // 0x80a MovF
	func_5236(var_743_object, var_744_float); // 0x80b NEW_2
	var_745_bool = var_742_bool == 0; // 0x80d Not
	if(var_745_bool == 0) goto Label_2065; // 0x80e JumpB
	var_731_int = -2; // 0x80f MovI
	return 8; // 0x810 Return
	
Label_2065:
	CreateDialog(var_738_object); // 0x811 Func
	var_746_int = 0; // 0x813 PushV
	func_5811(var_746_int); // 0x814 NEW_2
	SetNPCName(var_746_int); // 0x816 ObjFunc
	var_747_int = 0; // 0x818 PushV
	func_5809(var_747_int); // 0x819 NEW_2
	SetNPCDescription(var_747_int); // 0x81b ObjFunc
	var_748_string = ""; // 0x81d PushV
	func_5813(var_748_string); // 0x81e NEW_2
	SetPhoto(var_748_string); // 0x820 ObjFunc
	var_749_string = ""; // 0x822 PushV
	func_5815(var_749_string); // 0x823 NEW_2
	SetPhoto2(var_749_string); // 0x825 ObjFunc
	var_750_int = 0; // 0x827 PushV
	func_6811(var_750_int); // 0x828 NEW_2
	SetPlayerName(var_750_int); // 0x82a ObjFunc
	var_740_int = -1; // 0x82c MovI
	IsOverrideActive(var_739_bool); // 0x82d Func
	var_751_bool = var_739_bool; // 0x82f Push
	if(var_751_bool == 0) goto Label_2099; // 0x830 JumpB
	var_731_int = -2; // 0x831 MovI
	return 8; // 0x832 Return
	
Label_2099:
	DoDialog(var_738_object); // 0x833 Func
	var_752_bool = 0; var_753_object = Obj(); // 0x835 PushV
	var_754_object = Obj(); // 0x836 PushV
	func_5599(var_754_object); // 0x837 NEW_2
	var_753_object = var_754_object; // 0x838 Mov
	func_5321(var_752_bool, var_753_object); // 0x83a NEW_2
	var_755_object = Obj(); var_756_object = Obj(); // 0x83c PushV
	var_755_object = var_732_object; // 0x83d Mov
	var_756_object = var_738_object; // 0x83e Mov
	TaskCall(8); // 0x83f TaskCall
	func_2135(var_757_object, var_758_object, var_759_string, var_760_bool, var_755_object, var_756_object); // 0x840 NEW_2
	TaskReturn(); // 0x841 TaskReturn
	IsDialogEnd(var_741_bool); // 0x843 ObjFunc
	
Label_2117:
	var_851_bool = var_741_bool == 0; // 0x845 Not
	if(var_851_bool == 0) goto Label_2124; // 0x846 JumpB
	sync(); // 0x847 Func
	IsDialogEnd(var_741_bool); // 0x849 ObjFunc
	goto Label_2117; // 0x84b Jump
	
Label_2124:
	var_852_object = Obj(); // 0x84c PushV
	var_852_object = var_732_object; // 0x84d Mov
	func_5304(); // 0x84e NEW_2
	StopDialog(var_738_object); // 0x850 Func
	GetReturnValue(var_740_int); // 0x852 ObjFunc
	var_731_int = var_740_int; // 0x854 Mov
	return 8; // 0x855 Return
}


func_4107(var_0_bool, var_1_object, var_2_object, var_3_object, var_1219_object, var_1220_object)
{
	var_0_bool = var_1220_object; // 0x100c TMov
	var_1_object = var_1219_object; // 0x100d TMov
	var_3_object = 0; // 0x100e TMovB
	var_1225_int = 1; // 0x100f PushI
	if(var_1225_int == 0) goto Label_4135; // 0x1010 JumpB
	var_1226_string = ""; // 0x1011 PushV
	var_1226_string = "Sly"; // 0x1012 MovS
	func_4165(var_1220_object, var_1226_string); // 0x1013 NEW_2
	var_1234_int = 520493; // 0x1015 PushI
	SetMessage(var_1234_int); // 0x1016 TObjFunc
	ClearReplies(); // 0x1018 TObjFunc
	var_1235_int = 520494; // 0x101a PushI
	var_1236_int = -1; // 0x101b PushI
	var_1237_int = 21697; // 0x101c PushI
	AddReply(var_1235_int, var_1236_int, var_1237_int); // 0x101d TObjFunc
	var_1238_int = 520495; // 0x101f PushI
	var_1239_int = -1; // 0x1020 PushI
	var_1240_int = 21698; // 0x1021 PushI
	AddReply(var_1238_int, var_1239_int, var_1240_int); // 0x1022 TObjFunc
	goto Label_4135; // 0x1024 Jump
	
Label_4135:
	var_1241_bool = 0; // 0x1027 PushV
	func_5817(var_1241_bool); // 0x1028 NEW_2
	if(var_1241_bool == 0) goto Label_4150; // 0x102a JumpB
	
Label_4139:
	lshWaitForAnimEnd(); // 0x102b Func
	var_1242_object = var_3_object; // 0x102d PushT
	if(var_1242_object == 0) goto Label_4144; // 0x102e JumpB
	goto Label_4149; // 0x102f Jump
	
Label_4149:
	goto Label_4164; // 0x1035 Jump
	
Label_4164:
	return 0; // 0x1044 Return
	
Label_4144:
	var_1243_string = ""; // 0x1030 PushV
	var_1243_string = var_2_object; // 0x1031 MovT
	func_5518(var_1243_string); // 0x1032 NEW_2
	goto Label_4139; // 0x1034 Jump
	
Label_4150:
	var_1244_string = "all"; // 0x1036 PushS
	var_1245_string = "idle"; // 0x1037 PushS
	PlayAnimation(var_1244_string, var_1245_string); // 0x1038 Func
	
Label_4154:
	WaitForAnimEnd(); // 0x103a Func
	var_1246_object = var_3_object; // 0x103c PushT
	if(var_1246_object == 0) goto Label_4159; // 0x103d JumpB
	goto Label_4164; // 0x103e Jump
	
Label_4159:
	var_1247_string = "all"; // 0x103f PushS
	var_1248_string = "idle"; // 0x1040 PushS
	PlayAnimation(var_1247_string, var_1248_string); // 0x1041 Func
	goto Label_4154; // 0x1043 Jump
}


func_5647(var_156_string, var_157_bool)
{
	var_158_object = Obj(); var_159_object = Obj(); // 0x160f PushV
	FindActor(var_159_object, var_156_string); // 0x1610 Func
	var_160_bool = var_159_object == 0; // 0x1612 Not
	if(var_160_bool == 0) goto Label_5659; // 0x1613 JumpB
	var_161_string = "Door "; // 0x1614 PushS
	var_162_int = var_161_string + var_156_string; // 0x1615 Add
	var_163_string = " not found"; // 0x1616 PushS
	var_164_int = var_162_int + var_163_string; // 0x1617 Add
	Trace(var_164_int); // 0x1618 Func
	goto Label_5662; // 0x161a Jump
	
Label_5662:
	return 2; // 0x161e Return
	
Label_5659:
	var_165_string = "locked"; // 0x161b PushS
	SetProperty(var_165_string, var_157_bool); // 0x161c ObjFunc
}


func_3093(var_2_object, var_950_string)
{
	var_951_bool = 0; // 0xc16 PushV
	func_5817(var_951_bool); // 0xc17 NEW_2
	var_952_bool = var_951_bool == 0; // 0xc19 Not
	if(var_952_bool == 0) goto Label_3100; // 0xc1a JumpB
	return 0; // 0xc1b Return
	
Label_3100:
	var_953_bool = var_950_string == var_2_object; // 0xc1c Eq
	if(var_953_bool == 0) goto Label_3103; // 0xc1d JumpB
	return 0; // 0xc1e Return
	
Label_3103:
	var_954_string = ""; var_955_bool = 0; // 0xc1f PushV
	var_954_string = var_950_string; // 0xc20 Mov
	var_956_string = ""; // 0xc21 PushS
	var_957_bool = var_950_string == var_956_string; // 0xc22 Eq
	if(var_957_bool == 0) goto Label_3110; // 0xc23 JumpB
	var_955_bool = 0; // 0xc24 MovB
	goto Label_3111; // 0xc25 Jump
	
Label_3111:
	func_5534(var_954_string, var_955_bool); // 0xc27 NEW_2
	var_2_object = var_950_string; // 0xc29 TMov
	return 0; // 0xc2a Return
	
Label_3110:
	var_955_bool = 1; // 0xc26 MovB
}


func_22(var_0_bool, var_1380_int, var_1381_object)
{
	var_1383_object = Obj(); var_1384_bool = 0; var_1385_int = 0; var_1386_bool = 0; var_1387_object = Obj(); var_1388_bool = 0; var_1389_int = 0; var_1390_bool = 0; // 0x16 PushV
	var_0_bool = var_1381_object; // 0x17 TMov
	var_1391_bool = 0; var_1392_object = Obj(); var_1393_float = 0; // 0x18 PushV
	var_1392_object = var_1381_object; // 0x19 Mov
	var_1393_float = 70.0; // 0x1a MovF
	func_5236(var_1392_object, var_1393_float); // 0x1b NEW_2
	var_1394_bool = var_1391_bool == 0; // 0x1d Not
	if(var_1394_bool == 0) goto Label_33; // 0x1e JumpB
	var_1380_int = -2; // 0x1f MovI
	return 8; // 0x20 Return
	
Label_33:
	CreateDialog(var_1387_object); // 0x21 Func
	var_1395_int = 0; // 0x23 PushV
	func_5811(var_1395_int); // 0x24 NEW_2
	SetNPCName(var_1395_int); // 0x26 ObjFunc
	var_1396_int = 0; // 0x28 PushV
	func_5809(var_1396_int); // 0x29 NEW_2
	SetNPCDescription(var_1396_int); // 0x2b ObjFunc
	var_1397_string = ""; // 0x2d PushV
	func_5813(var_1397_string); // 0x2e NEW_2
	SetPhoto(var_1397_string); // 0x30 ObjFunc
	var_1398_string = ""; // 0x32 PushV
	func_5815(var_1398_string); // 0x33 NEW_2
	SetPhoto2(var_1398_string); // 0x35 ObjFunc
	var_1399_int = 0; // 0x37 PushV
	func_6811(var_1399_int); // 0x38 NEW_2
	SetPlayerName(var_1399_int); // 0x3a ObjFunc
	var_1389_int = -1; // 0x3c MovI
	IsOverrideActive(var_1388_bool); // 0x3d Func
	var_1400_bool = var_1388_bool; // 0x3f Push
	if(var_1400_bool == 0) goto Label_67; // 0x40 JumpB
	var_1380_int = -2; // 0x41 MovI
	return 8; // 0x42 Return
	
Label_67:
	DoDialog(var_1387_object); // 0x43 Func
	var_1401_bool = 0; var_1402_object = Obj(); // 0x45 PushV
	var_1403_object = Obj(); // 0x46 PushV
	func_5599(var_1403_object); // 0x47 NEW_2
	var_1402_object = var_1403_object; // 0x48 Mov
	func_5321(var_1401_bool, var_1402_object); // 0x4a NEW_2
	var_1404_object = Obj(); var_1405_object = Obj(); // 0x4c PushV
	var_1404_object = var_1381_object; // 0x4d Mov
	var_1405_object = var_1387_object; // 0x4e Mov
	TaskCall(2); // 0x4f TaskCall
	func_103(var_1406_object, var_1407_object, var_1408_string, var_1409_bool, var_1404_object, var_1405_object); // 0x50 NEW_2
	TaskReturn(); // 0x51 TaskReturn
	IsDialogEnd(var_1390_bool); // 0x53 ObjFunc
	
Label_85:
	var_1437_bool = var_1390_bool == 0; // 0x55 Not
	if(var_1437_bool == 0) goto Label_92; // 0x56 JumpB
	sync(); // 0x57 Func
	IsDialogEnd(var_1390_bool); // 0x59 ObjFunc
	goto Label_85; // 0x5b Jump
	
Label_92:
	var_1438_object = Obj(); // 0x5c PushV
	var_1438_object = var_1381_object; // 0x5d Mov
	func_5304(); // 0x5e NEW_2
	StopDialog(var_1387_object); // 0x60 Func
	GetReturnValue(var_1389_int); // 0x62 ObjFunc
	var_1380_int = var_1389_int; // 0x64 Mov
	return 8; // 0x65 Return
}


func_6173()
{
	var_156_string = ""; var_157_bool = 0; // 0x181e PushV
	var_156_string = "warehouse_notkin@door1"; // 0x181f MovS
	var_157_bool = 0; // 0x1820 MovB
	func_5647(var_156_string, var_157_bool); // 0x1821 NEW_2
	return 0; // 0x1823 Return
}


func_5664(var_190_int, var_191_int)
{
	var_192_object = Obj(); var_193_object = Obj(); // 0x1620 PushV
	CreateIntVector(var_193_object); // 0x1621 Func
	add(var_190_int); // 0x1623 ObjFunc
	add(var_191_int); // 0x1625 ObjFunc
	var_194_int = 3; // 0x1627 PushI
	SendWorldWndMessage(var_194_int, var_193_object); // 0x1628 Func
	return 2; // 0x162a Return
}


func_6180(var_1146_bool)
{
	var_1148_int = 0; var_1149_string = ""; // 0x1825 PushV
	var_1149_string = "b8q01"; // 0x1826 MovS
	func_5631(var_1148_int, var_1149_string); // 0x1827 NEW_2
	var_1150_int = 2; // 0x1829 PushI
	var_1151_bool = var_1148_int == var_1150_int; // 0x182a Eq
	if(var_1151_bool == 0) goto Label_6190; // 0x182b JumpB
	var_1146_bool = 1; // 0x182c MovB
	return 0; // 0x182d Return
	
Label_6190:
	var_1146_bool = 0; // 0x182e MovB
	return 0; // 0x182f Return
}


func_5163(var_107_bool)
{
	var_107_bool = 1; // 0x142b MovB
	return 0; // 0x142c Return
}


func_5676(var_180_object, var_181_int)
{
	var_182_int = 0; var_183_int = 0; var_184_bool = 0; var_185_int = 0; var_186_int = 0; var_187_bool = 0; // 0x162c PushV
	GetItemID(var_185_int); // 0x162d ObjFunc
	var_188_string = "Category"; // 0x162f PushS
	GetInvItemProperty(var_186_int, var_185_int, var_188_string); // 0x1630 Func
	AddItem(var_187_bool, var_180_object, var_186_int, var_181_int); // 0x1632 ObjFunc
	var_189_bool = var_187_bool == 0; // 0x1634 Not
	if(var_189_bool == 0) goto Label_5689; // 0x1635 JumpB
	DropItems(var_180_object, var_181_int); // 0x1636 ObjFunc
	goto Label_5694; // 0x1638 Jump
	
Label_5694:
	return 6; // 0x163e Return
	
Label_5689:
	var_190_int = 0; var_191_int = 0; // 0x1639 PushV
	var_190_int = var_185_int; // 0x163a Mov
	var_191_int = var_181_int; // 0x163b Mov
	func_5664(var_190_int, var_191_int); // 0x163c NEW_2
}


func_5165()
{
	StopAnimation(); // 0x142d Func
	StopGroup0(); // 0x142f Func
	return 0; // 0x1431 Return
}


func_6192(var_1152_bool)
{
	var_1154_int = 0; var_1155_string = ""; // 0x1831 PushV
	var_1155_string = "oob8Grif1"; // 0x1832 MovS
	func_5631(var_1154_int, var_1155_string); // 0x1833 NEW_2
	var_1156_int = 0; // 0x1835 PushI
	var_1157_bool = var_1154_int == var_1156_int; // 0x1836 Eq
	if(var_1157_bool == 0) goto Label_6202; // 0x1837 JumpB
	var_1152_bool = 1; // 0x1838 MovB
	return 0; // 0x1839 Return
	
Label_6202:
	var_1152_bool = 0; // 0x183a MovB
	return 0; // 0x183b Return
}


func_5170(var_82_float)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); // 0x1432 PushV
	GetPosition(var_87_cvector); // 0x1433 Func
	GetPosition(var_88_cvector); // 0x1435 ObjFunc
	var_89_cvector = var_88_cvector - var_87_cvector; // 0x1437 Sub2
	var_82_float = var_89_cvector | var_89_cvector; // 0x1438 Or2
	return 6; // 0x1439 Return
}


func_4659(var_0_bool, var_215_int, var_216_object)
{
	var_218_object = Obj(); var_219_bool = 0; var_220_int = 0; var_221_bool = 0; var_222_object = Obj(); var_223_bool = 0; var_224_int = 0; var_225_bool = 0; // 0x1233 PushV
	var_0_bool = var_216_object; // 0x1234 TMov
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0; // 0x1235 PushV
	var_227_object = var_216_object; // 0x1236 Mov
	var_228_float = 70.0; // 0x1237 MovF
	func_5236(var_227_object, var_228_float); // 0x1238 NEW_2
	var_272_bool = var_226_bool == 0; // 0x123a Not
	if(var_272_bool == 0) goto Label_4670; // 0x123b JumpB
	var_215_int = -2; // 0x123c MovI
	return 8; // 0x123d Return
	
Label_4670:
	CreateDialog(var_222_object); // 0x123e Func
	var_273_int = 0; // 0x1240 PushV
	func_5811(var_273_int); // 0x1241 NEW_2
	SetNPCName(var_273_int); // 0x1243 ObjFunc
	var_274_int = 0; // 0x1245 PushV
	func_5809(var_274_int); // 0x1246 NEW_2
	SetNPCDescription(var_274_int); // 0x1248 ObjFunc
	var_275_string = ""; // 0x124a PushV
	func_5813(var_275_string); // 0x124b NEW_2
	SetPhoto(var_275_string); // 0x124d ObjFunc
	var_276_string = ""; // 0x124f PushV
	func_5815(var_276_string); // 0x1250 NEW_2
	SetPhoto2(var_276_string); // 0x1252 ObjFunc
	var_277_int = 0; // 0x1254 PushV
	func_6811(var_277_int); // 0x1255 NEW_2
	SetPlayerName(var_277_int); // 0x1257 ObjFunc
	var_224_int = -1; // 0x1259 MovI
	IsOverrideActive(var_223_bool); // 0x125a Func
	var_285_bool = var_223_bool; // 0x125c Push
	if(var_285_bool == 0) goto Label_4704; // 0x125d JumpB
	var_215_int = -2; // 0x125e MovI
	return 8; // 0x125f Return
	
Label_4704:
	DoDialog(var_222_object); // 0x1260 Func
	var_286_bool = 0; var_287_object = Obj(); // 0x1262 PushV
	var_288_object = Obj(); // 0x1263 PushV
	func_5599(var_288_object); // 0x1264 NEW_2
	var_287_object = var_288_object; // 0x1265 Mov
	func_5321(var_286_bool, var_287_object); // 0x1267 NEW_2
	var_376_object = Obj(); var_377_object = Obj(); // 0x1269 PushV
	var_376_object = var_216_object; // 0x126a Mov
	var_377_object = var_222_object; // 0x126b Mov
	TaskCall(26); // 0x126c TaskCall
	func_4740(var_378_object, var_379_object, var_380_string, var_381_bool, var_376_object, var_377_object); // 0x126d NEW_2
	TaskReturn(); // 0x126e TaskReturn
	IsDialogEnd(var_225_bool); // 0x1270 ObjFunc
	
Label_4722:
	var_425_bool = var_225_bool == 0; // 0x1272 Not
	if(var_425_bool == 0) goto Label_4729; // 0x1273 JumpB
	sync(); // 0x1274 Func
	IsDialogEnd(var_225_bool); // 0x1276 ObjFunc
	goto Label_4722; // 0x1278 Jump
	
Label_4729:
	var_426_object = Obj(); // 0x1279 PushV
	var_426_object = var_216_object; // 0x127a Mov
	func_5304(); // 0x127b NEW_2
	StopDialog(var_222_object); // 0x127d Func
	GetReturnValue(var_224_int); // 0x127f ObjFunc
	var_215_int = var_224_int; // 0x1281 Mov
	return 8; // 0x1282 Return
}


func_5178(var_238_bool, var_239_object, var_240_string)
{
	var_241_bool = 0; var_242_bool = 0; // 0x143a PushV
	var_243_string = "HasProperty"; // 0x143b PushS
	var_244_int = 2; // 0x143c PushI
	var_245_bool = IsFuncExist(var_239_object, var_243_string, var_244_int); // 0x143d FuncExist
	var_246_bool = var_245_bool == 0; // 0x143e Not
	if(var_246_bool == 0) goto Label_5186; // 0x143f JumpB
	var_238_bool = 0; // 0x1440 MovB
	return 2; // 0x1441 Return
	
Label_5186:
	HasProperty(var_240_string, var_242_bool); // 0x1442 ObjFunc
	var_238_bool = var_242_bool; // 0x1444 Mov
	return 2; // 0x1445 Return
}


func_6204(var_1168_bool)
{
	var_1170_int = 0; var_1171_string = ""; // 0x183d PushV
	var_1171_string = "b8q02"; // 0x183e MovS
	func_5631(var_1170_int, var_1171_string); // 0x183f NEW_2
	var_1172_int = 1; // 0x1841 PushI
	var_1173_bool = var_1170_int == var_1172_int; // 0x1842 Eq
	if(var_1173_bool == 0) goto Label_6214; // 0x1843 JumpB
	var_1168_bool = 1; // 0x1844 MovB
	return 0; // 0x1845 Return
	
Label_6214:
	var_1168_bool = 0; // 0x1846 MovB
	return 0; // 0x1847 Return
}


func_5695(var_174_object, var_175_string, var_176_int)
{
	var_177_object = Obj(); var_178_object = Obj(); // 0x163f PushV
	CreateInvItem(var_178_object); // 0x1640 Func
	SetItemName(var_175_string); // 0x1642 ObjFunc
	var_179_object = Obj(); var_180_object = Obj(); var_181_int = 0; // 0x1644 PushV
	var_179_object = var_174_object; // 0x1645 Mov
	var_180_object = var_178_object; // 0x1646 Mov
	var_181_int = var_176_int; // 0x1647 Mov
	func_5676(var_180_object, var_181_int); // 0x1648 NEW_2
	return 2; // 0x164a Return
}


func_4165(var_2_object, var_1226_string)
{
	var_1227_bool = 0; // 0x1046 PushV
	func_5817(var_1227_bool); // 0x1047 NEW_2
	var_1228_bool = var_1227_bool == 0; // 0x1049 Not
	if(var_1228_bool == 0) goto Label_4172; // 0x104a JumpB
	return 0; // 0x104b Return
	
Label_4172:
	var_1229_bool = var_1226_string == var_2_object; // 0x104c Eq
	if(var_1229_bool == 0) goto Label_4175; // 0x104d JumpB
	return 0; // 0x104e Return
	
Label_4175:
	var_1230_string = ""; var_1231_bool = 0; // 0x104f PushV
	var_1230_string = var_1226_string; // 0x1050 Mov
	var_1232_string = ""; // 0x1051 PushS
	var_1233_bool = var_1226_string == var_1232_string; // 0x1052 Eq
	if(var_1233_bool == 0) goto Label_4182; // 0x1053 JumpB
	var_1231_bool = 0; // 0x1054 MovB
	goto Label_4183; // 0x1055 Jump
	
Label_4183:
	func_5534(var_1230_string, var_1231_bool); // 0x1057 NEW_2
	var_2_object = var_1226_string; // 0x1059 TMov
	return 0; // 0x105a Return
	
Label_4182:
	var_1231_bool = 1; // 0x1056 MovB
}


func_5190(var_230_bool, var_231_object, var_232_string, var_233_float, var_234_float, var_235_float)
{
	var_236_float = 0; var_237_float = 0; // 0x1446 PushV
	var_238_bool = 0; var_239_object = Obj(); var_240_string = ""; // 0x1447 PushV
	var_239_object = var_231_object; // 0x1448 Mov
	var_240_string = var_232_string; // 0x1449 Mov
	func_5178(var_238_bool, var_239_object, var_240_string); // 0x144a NEW_2
	var_247_bool = var_238_bool == 0; // 0x144c Not
	if(var_247_bool == 0) goto Label_5200; // 0x144d JumpB
	var_230_bool = 0; // 0x144e MovB
	return 2; // 0x144f Return
	
Label_5200:
	GetProperty(var_232_string, var_237_float); // 0x1450 ObjFunc
	var_248_float = 0; var_249_float = 0; var_250_float = 0; var_251_float = 0; // 0x1452 PushV
	var_249_float = var_237_float + var_233_float; // 0x1453 Add2
	var_250_float = var_234_float; // 0x1454 Mov
	var_251_float = var_235_float; // 0x1455 Mov
	func_5615(var_248_float, var_249_float, var_250_float, var_251_float); // 0x1456 NEW_2
	SetProperty(var_232_string, var_248_float); // 0x1458 ObjFunc
	var_230_bool = 1; // 0x145a MovB
	return 2; // 0x145b Return
}


func_6216(var_1162_bool)
{
	var_1164_int = 0; var_1165_string = ""; // 0x1849 PushV
	var_1165_string = "oob8Grif1"; // 0x184a MovS
	func_5631(var_1164_int, var_1165_string); // 0x184b NEW_2
	var_1166_int = 0; // 0x184d PushI
	var_1167_bool = var_1164_int == var_1166_int; // 0x184e Eq
	if(var_1167_bool == 0) goto Label_6226; // 0x184f JumpB
	var_1162_bool = 1; // 0x1850 MovB
	return 0; // 0x1851 Return
	
Label_6226:
	var_1162_bool = 0; // 0x1852 MovB
	return 0; // 0x1853 Return
}


func_5708(var_219_bool, var_220_object, var_221_float)
{
	var_222_bool = var_220_object == 0; // 0x164d Not
	if(var_222_bool == 0) goto Label_5713; // 0x164e JumpB
	var_219_bool = 0; // 0x164f MovB
	return 0; // 0x1650 Return
	
Label_5713:
	var_223_int = 0; // 0x1651 PushI
	var_224_bool = var_221_float > var_223_int; // 0x1652 GT
	if(var_224_bool == 0) goto Label_5720; // 0x1653 JumpB
	var_225_int = 8; // 0x1654 PushI
	SendWorldWndMessage(var_225_int); // 0x1655 Func
	goto Label_5729; // 0x1657 Jump
	
Label_5729:
	var_226_float = 0; // 0x1661 PushV
	var_226_float = var_221_float; // 0x1662 Mov
	func_5743(var_226_float); // 0x1663 NEW_2
	var_230_bool = 0; var_231_object = Obj(); var_232_string = ""; var_233_float = 0; var_234_float = 0; var_235_float = 0; // 0x1665 PushV
	var_231_object = var_220_object; // 0x1666 Mov
	var_232_string = "reputation"; // 0x1667 MovS
	var_233_float = var_221_float; // 0x1668 Mov
	var_234_float = 0; // 0x1669 MovI
	var_235_float = 1; // 0x166a MovI
	func_5190(var_230_bool, var_231_object, var_232_string, var_233_float, var_234_float, var_235_float); // 0x166b NEW_2
	var_219_bool = 1; // 0x166d MovB
	return 0; // 0x166e Return
	
Label_5720:
	var_254_int = 0; // 0x1658 PushI
	var_255_bool = var_221_float < var_254_int; // 0x1659 LT
	if(var_255_bool == 0) goto Label_5727; // 0x165a JumpB
	var_256_int = 9; // 0x165b PushI
	SendWorldWndMessage(var_256_int); // 0x165c Func
	goto Label_5729; // 0x165e Jump
	
Label_5727:
	var_219_bool = 0; // 0x165f MovB
	return 0; // 0x1660 Return
}


func_6228(var_602_bool)
{
	var_604_int = 0; var_605_string = ""; // 0x1855 PushV
	var_605_string = "b1q01NotkinGotoGrif"; // 0x1856 MovS
	func_5631(var_604_int, var_605_string); // 0x1857 NEW_2
	var_606_int = 0; // 0x1859 PushI
	var_607_bool = var_604_int != var_606_int; // 0x185a Neq
	if(var_607_bool == 0) goto Label_6238; // 0x185b JumpB
	var_602_bool = 1; // 0x185c MovB
	return 0; // 0x185d Return
	
Label_6238:
	var_602_bool = 0; // 0x185e MovB
	return 0; // 0x185f Return
}


func_3668(var_0_bool, var_1_object, var_2_object, var_3_object, var_1126_object, var_1127_object)
{
	var_0_bool = var_1127_object; // 0xe55 TMov
	var_1_object = var_1126_object; // 0xe56 TMov
	var_3_object = 0; // 0xe57 TMovB
	var_1132_int = 1; // 0xe58 PushI
	if(var_1132_int == 0) goto Label_3734; // 0xe59 JumpB
	var_1133_string = ""; // 0xe5a PushV
	var_1133_string = "Neutral"; // 0xe5b MovS
	func_3764(var_1127_object, var_1133_string); // 0xe5c NEW_2
	var_1141_int = 520489; // 0xe5e PushI
	SetMessage(var_1141_int); // 0xe5f TObjFunc
	ClearReplies(); // 0xe61 TObjFunc
	var_1142_int = 520490; // 0xe63 PushI
	var_1143_int = -1; // 0xe64 PushI
	var_1144_int = 21693; // 0xe65 PushI
	AddReply(var_1142_int, var_1143_int, var_1144_int); // 0xe66 TObjFunc
	var_1145_bool = 0; // 0xe68 PushV
	var_1145_bool = 0; // 0xe69 MovB
	var_1146_bool = 0; var_1147_object = Obj(); // 0xe6a PushV
	var_1147_object = var_1_object; // 0xe6b MovT
	func_6180(var_1147_object); // 0xe6c NEW_2
	if(var_1146_bool == 0) goto Label_3701; // 0xe6e JumpB
	var_1152_bool = 0; var_1153_object = Obj(); // 0xe6f PushV
	var_1153_object = var_1_object; // 0xe70 MovT
	func_6192(var_1153_object); // 0xe71 NEW_2
	if(var_1152_bool == 0) goto Label_3701; // 0xe73 JumpB
	var_1145_bool = 1; // 0xe74 MovB
	
Label_3701:
	if(var_1145_bool == 0) goto Label_3707; // 0xe75 JumpB
	var_1158_int = 521395; // 0xe76 PushI
	var_1159_int = 25305; // 0xe77 PushI
	var_1160_int = 22573; // 0xe78 PushI
	AddReply(var_1158_int, var_1159_int, var_1160_int); // 0xe79 TObjFunc
	
Label_3707:
	var_1161_bool = 0; // 0xe7b PushV
	var_1161_bool = 0; // 0xe7c MovB
	var_1162_bool = 0; var_1163_object = Obj(); // 0xe7d PushV
	var_1163_object = var_1_object; // 0xe7e MovT
	func_6216(var_1163_object); // 0xe7f NEW_2
	if(var_1162_bool == 0) goto Label_3720; // 0xe81 JumpB
	var_1168_bool = 0; var_1169_object = Obj(); // 0xe82 PushV
	var_1169_object = var_1_object; // 0xe83 MovT
	func_6204(var_1169_object); // 0xe84 NEW_2
	if(var_1168_bool == 0) goto Label_3720; // 0xe86 JumpB
	var_1161_bool = 1; // 0xe87 MovB
	
Label_3720:
	if(var_1161_bool == 0) goto Label_3726; // 0xe88 JumpB
	var_1174_int = 521482; // 0xe89 PushI
	var_1175_int = 22648; // 0xe8a PushI
	var_1176_int = 22647; // 0xe8b PushI
	AddReply(var_1174_int, var_1175_int, var_1176_int); // 0xe8c TObjFunc
	
Label_3726:
	var_1177_int = 520491; // 0xe8e PushI
	var_1178_int = -1; // 0xe8f PushI
	var_1179_int = 21694; // 0xe90 PushI
	AddReply(var_1177_int, var_1178_int, var_1179_int); // 0xe91 TObjFunc
	goto Label_3734; // 0xe93 Jump
	
Label_3734:
	var_1180_bool = 0; // 0xe96 PushV
	func_5817(var_1180_bool); // 0xe97 NEW_2
	if(var_1180_bool == 0) goto Label_3749; // 0xe99 JumpB
	
Label_3738:
	lshWaitForAnimEnd(); // 0xe9a Func
	var_1181_object = var_3_object; // 0xe9c PushT
	if(var_1181_object == 0) goto Label_3743; // 0xe9d JumpB
	goto Label_3748; // 0xe9e Jump
	
Label_3748:
	goto Label_3763; // 0xea4 Jump
	
Label_3763:
	return 0; // 0xeb3 Return
	
Label_3743:
	var_1182_string = ""; // 0xe9f PushV
	var_1182_string = var_2_object; // 0xea0 MovT
	func_5518(var_1182_string); // 0xea1 NEW_2
	goto Label_3738; // 0xea3 Jump
	
Label_3749:
	var_1183_string = "all"; // 0xea5 PushS
	var_1184_string = "idle"; // 0xea6 PushS
	PlayAnimation(var_1183_string, var_1184_string); // 0xea7 Func
	
Label_3753:
	WaitForAnimEnd(); // 0xea9 Func
	var_1185_object = var_3_object; // 0xeab PushT
	if(var_1185_object == 0) goto Label_3758; // 0xeac JumpB
	goto Label_3763; // 0xead Jump
	
Label_3758:
	var_1186_string = "all"; // 0xeae PushS
	var_1187_string = "idle"; // 0xeaf PushS
	PlayAnimation(var_1186_string, var_1187_string); // 0xeb0 Func
	goto Label_3753; // 0xeb2 Jump
}


func_2135(var_0_bool, var_1_object, var_2_object, var_3_object, var_755_object, var_756_object)
{
	var_0_bool = var_756_object; // 0x858 TMov
	var_1_object = var_755_object; // 0x859 TMov
	var_3_object = 0; // 0x85a TMovB
	var_761_int = 1; // 0x85b PushI
	if(var_761_int == 0) goto Label_2255; // 0x85c JumpB
	var_762_string = ""; // 0x85d PushV
	var_762_string = "Neutral"; // 0x85e MovS
	func_2285(var_756_object, var_762_string); // 0x85f NEW_2
	var_770_int = 518386; // 0x861 PushI
	SetMessage(var_770_int); // 0x862 TObjFunc
	ClearReplies(); // 0x864 TObjFunc
	var_771_bool = 0; // 0x866 PushV
	var_771_bool = 0; // 0x867 MovB
	var_772_bool = 0; // 0x868 PushV
	var_772_bool = 0; // 0x869 MovB
	var_773_bool = 0; // 0x86a PushV
	var_773_bool = 0; // 0x86b MovB
	var_774_bool = 0; var_775_object = Obj(); // 0x86c PushV
	var_775_object = var_1_object; // 0x86d MovT
	func_6348(var_775_object); // 0x86e NEW_2
	if(var_774_bool == 0) goto Label_2167; // 0x870 JumpB
	var_780_bool = 0; var_781_object = Obj(); // 0x871 PushV
	var_781_object = var_1_object; // 0x872 MovT
	func_6384(var_781_object); // 0x873 NEW_2
	if(var_780_bool == 0) goto Label_2167; // 0x875 JumpB
	var_773_bool = 1; // 0x876 MovB
	
Label_2167:
	if(var_773_bool == 0) goto Label_2175; // 0x877 JumpB
	var_786_bool = 0; var_787_object = Obj(); // 0x878 PushV
	var_787_object = var_1_object; // 0x879 MovT
	func_6372(var_787_object); // 0x87a NEW_2
	var_792_bool = var_786_bool == 0; // 0x87c Not
	if(var_792_bool == 0) goto Label_2175; // 0x87d JumpB
	var_772_bool = 1; // 0x87e MovB
	
Label_2175:
	if(var_772_bool == 0) goto Label_2182; // 0x87f JumpB
	var_793_bool = 0; var_794_object = Obj(); // 0x880 PushV
	var_794_object = var_1_object; // 0x881 MovT
	func_6420(var_794_object); // 0x882 NEW_2
	if(var_793_bool == 0) goto Label_2182; // 0x884 JumpB
	var_771_bool = 1; // 0x885 MovB
	
Label_2182:
	if(var_771_bool == 0) goto Label_2188; // 0x886 JumpB
	var_799_int = 518387; // 0x887 PushI
	var_800_int = 20347; // 0x888 PushI
	var_801_int = 19500; // 0x889 PushI
	AddReply(var_799_int, var_800_int, var_801_int); // 0x88a TObjFunc
	
Label_2188:
	var_802_bool = 0; // 0x88c PushV
	var_802_bool = 0; // 0x88d MovB
	var_803_bool = 0; // 0x88e PushV
	var_803_bool = 0; // 0x88f MovB
	var_804_bool = 0; var_805_object = Obj(); // 0x890 PushV
	var_805_object = var_1_object; // 0x891 MovT
	func_6360(var_805_object); // 0x892 NEW_2
	if(var_804_bool == 0) goto Label_2203; // 0x894 JumpB
	var_810_bool = 0; var_811_object = Obj(); // 0x895 PushV
	var_811_object = var_1_object; // 0x896 MovT
	func_6396(var_811_object); // 0x897 NEW_2
	if(var_810_bool == 0) goto Label_2203; // 0x899 JumpB
	var_803_bool = 1; // 0x89a MovB
	
Label_2203:
	if(var_803_bool == 0) goto Label_2211; // 0x89b JumpB
	var_816_bool = 0; var_817_object = Obj(); // 0x89c PushV
	var_817_object = var_1_object; // 0x89d MovT
	func_6372(var_817_object); // 0x89e NEW_2
	var_818_bool = var_816_bool == 0; // 0x8a0 Not
	if(var_818_bool == 0) goto Label_2211; // 0x8a1 JumpB
	var_802_bool = 1; // 0x8a2 MovB
	
Label_2211:
	if(var_802_bool == 0) goto Label_2217; // 0x8a3 JumpB
	var_819_int = 518391; // 0x8a4 PushI
	var_820_int = 20339; // 0x8a5 PushI
	var_821_int = 19504; // 0x8a6 PushI
	AddReply(var_819_int, var_820_int, var_821_int); // 0x8a7 TObjFunc
	
Label_2217:
	var_822_bool = 0; // 0x8a9 PushV
	var_822_bool = 0; // 0x8aa MovB
	var_823_bool = 0; var_824_object = Obj(); // 0x8ab PushV
	var_824_object = var_1_object; // 0x8ac MovT
	func_6372(var_824_object); // 0x8ad NEW_2
	if(var_823_bool == 0) goto Label_2230; // 0x8af JumpB
	var_825_bool = 0; var_826_object = Obj(); // 0x8b0 PushV
	var_826_object = var_1_object; // 0x8b1 MovT
	func_6408(var_826_object); // 0x8b2 NEW_2
	if(var_825_bool == 0) goto Label_2230; // 0x8b4 JumpB
	var_822_bool = 1; // 0x8b5 MovB
	
Label_2230:
	if(var_822_bool == 0) goto Label_2236; // 0x8b6 JumpB
	var_831_int = 519664; // 0x8b7 PushI
	var_832_int = 20829; // 0x8b8 PushI
	var_833_int = 20828; // 0x8b9 PushI
	AddReply(var_831_int, var_832_int, var_833_int); // 0x8ba TObjFunc
	
Label_2236:
	var_834_bool = 0; var_835_object = Obj(); // 0x8bc PushV
	var_835_object = var_1_object; // 0x8bd MovT
	func_6372(var_835_object); // 0x8be NEW_2
	var_836_bool = var_834_bool == 0; // 0x8c0 Not
	if(var_836_bool == 0) goto Label_2247; // 0x8c1 JumpB
	var_837_int = 518394; // 0x8c2 PushI
	var_838_int = -1; // 0x8c3 PushI
	var_839_int = 19507; // 0x8c4 PushI
	AddReply(var_837_int, var_838_int, var_839_int); // 0x8c5 TObjFunc
	
Label_2247:
	var_840_int = 518388; // 0x8c7 PushI
	var_841_int = -1; // 0x8c8 PushI
	var_842_int = 19501; // 0x8c9 PushI
	AddReply(var_840_int, var_841_int, var_842_int); // 0x8ca TObjFunc
	goto Label_2255; // 0x8cc Jump
	
Label_2255:
	var_843_bool = 0; // 0x8cf PushV
	func_5817(var_843_bool); // 0x8d0 NEW_2
	if(var_843_bool == 0) goto Label_2270; // 0x8d2 JumpB
	
Label_2259:
	lshWaitForAnimEnd(); // 0x8d3 Func
	var_844_object = var_3_object; // 0x8d5 PushT
	if(var_844_object == 0) goto Label_2264; // 0x8d6 JumpB
	goto Label_2269; // 0x8d7 Jump
	
Label_2269:
	goto Label_2284; // 0x8dd Jump
	
Label_2284:
	return 0; // 0x8ec Return
	
Label_2264:
	var_845_string = ""; // 0x8d8 PushV
	var_845_string = var_2_object; // 0x8d9 MovT
	func_5518(var_845_string); // 0x8da NEW_2
	goto Label_2259; // 0x8dc Jump
	
Label_2270:
	var_846_string = "all"; // 0x8de PushS
	var_847_string = "idle"; // 0x8df PushS
	PlayAnimation(var_846_string, var_847_string); // 0x8e0 Func
	
Label_2274:
	WaitForAnimEnd(); // 0x8e2 Func
	var_848_object = var_3_object; // 0x8e4 PushT
	if(var_848_object == 0) goto Label_2279; // 0x8e5 JumpB
	goto Label_2284; // 0x8e6 Jump
	
Label_2279:
	var_849_string = "all"; // 0x8e7 PushS
	var_850_string = "idle"; // 0x8e8 PushS
	PlayAnimation(var_849_string, var_850_string); // 0x8e9 Func
	goto Label_2274; // 0x8eb Jump
}


func_5212(var_75_bool, var_76_cvector)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; // 0x145c PushV
	GetPosition(var_80_cvector); // 0x145d Func
	var_81_cvector = var_76_cvector - var_80_cvector; // 0x145f Sub2
	var_83_float = GetByIndex(var_81_cvector, 0); // 0x1460 PushE
	var_84_float = GetByIndex(var_81_cvector, 2); // 0x1461 PushE
	Rotate(var_83_float, var_84_float, var_82_bool); // 0x1462 Func
	var_75_bool = var_82_bool; // 0x1464 Mov
	return 6; // 0x1465 Return
}


func_605(var_2_object, var_481_string)
{
	var_482_bool = 0; // 0x25e PushV
	func_5817(var_482_bool); // 0x25f NEW_2
	var_483_bool = var_482_bool == 0; // 0x261 Not
	if(var_483_bool == 0) goto Label_612; // 0x262 JumpB
	return 0; // 0x263 Return
	
Label_612:
	var_484_bool = var_481_string == var_2_object; // 0x264 Eq
	if(var_484_bool == 0) goto Label_615; // 0x265 JumpB
	return 0; // 0x266 Return
	
Label_615:
	var_485_string = ""; var_486_bool = 0; // 0x267 PushV
	var_485_string = var_481_string; // 0x268 Mov
	var_487_string = ""; // 0x269 PushS
	var_488_bool = var_481_string == var_487_string; // 0x26a Eq
	if(var_488_bool == 0) goto Label_622; // 0x26b JumpB
	var_486_bool = 0; // 0x26c MovB
	goto Label_623; // 0x26d Jump
	
Label_623:
	func_5534(var_485_string, var_486_bool); // 0x26f NEW_2
	var_2_object = var_481_string; // 0x271 TMov
	return 0; // 0x272 Return
	
Label_622:
	var_486_bool = 1; // 0x26e MovB
}


func_3165(var_0_bool, var_980_int, var_981_object)
{
	var_983_object = Obj(); var_984_bool = 0; var_985_int = 0; var_986_bool = 0; var_987_object = Obj(); var_988_bool = 0; var_989_int = 0; var_990_bool = 0; // 0xc5d PushV
	var_0_bool = var_981_object; // 0xc5e TMov
	var_991_bool = 0; var_992_object = Obj(); var_993_float = 0; // 0xc5f PushV
	var_992_object = var_981_object; // 0xc60 Mov
	var_993_float = 70.0; // 0xc61 MovF
	func_5236(var_992_object, var_993_float); // 0xc62 NEW_2
	var_994_bool = var_991_bool == 0; // 0xc64 Not
	if(var_994_bool == 0) goto Label_3176; // 0xc65 JumpB
	var_980_int = -2; // 0xc66 MovI
	return 8; // 0xc67 Return
	
Label_3176:
	CreateDialog(var_987_object); // 0xc68 Func
	var_995_int = 0; // 0xc6a PushV
	func_5811(var_995_int); // 0xc6b NEW_2
	SetNPCName(var_995_int); // 0xc6d ObjFunc
	var_996_int = 0; // 0xc6f PushV
	func_5809(var_996_int); // 0xc70 NEW_2
	SetNPCDescription(var_996_int); // 0xc72 ObjFunc
	var_997_string = ""; // 0xc74 PushV
	func_5813(var_997_string); // 0xc75 NEW_2
	SetPhoto(var_997_string); // 0xc77 ObjFunc
	var_998_string = ""; // 0xc79 PushV
	func_5815(var_998_string); // 0xc7a NEW_2
	SetPhoto2(var_998_string); // 0xc7c ObjFunc
	var_999_int = 0; // 0xc7e PushV
	func_6811(var_999_int); // 0xc7f NEW_2
	SetPlayerName(var_999_int); // 0xc81 ObjFunc
	var_989_int = -1; // 0xc83 MovI
	IsOverrideActive(var_988_bool); // 0xc84 Func
	var_1000_bool = var_988_bool; // 0xc86 Push
	if(var_1000_bool == 0) goto Label_3210; // 0xc87 JumpB
	var_980_int = -2; // 0xc88 MovI
	return 8; // 0xc89 Return
	
Label_3210:
	DoDialog(var_987_object); // 0xc8a Func
	var_1001_bool = 0; var_1002_object = Obj(); // 0xc8c PushV
	var_1003_object = Obj(); // 0xc8d PushV
	func_5599(var_1003_object); // 0xc8e NEW_2
	var_1002_object = var_1003_object; // 0xc8f Mov
	func_5321(var_1001_bool, var_1002_object); // 0xc91 NEW_2
	var_1004_object = Obj(); var_1005_object = Obj(); // 0xc93 PushV
	var_1004_object = var_981_object; // 0xc94 Mov
	var_1005_object = var_987_object; // 0xc95 Mov
	TaskCall(14); // 0xc96 TaskCall
	func_3246(var_1006_object, var_1007_object, var_1008_string, var_1009_bool, var_1004_object, var_1005_object); // 0xc97 NEW_2
	TaskReturn(); // 0xc98 TaskReturn
	IsDialogEnd(var_990_bool); // 0xc9a ObjFunc
	
Label_3228:
	var_1034_bool = var_990_bool == 0; // 0xc9c Not
	if(var_1034_bool == 0) goto Label_3235; // 0xc9d JumpB
	sync(); // 0xc9e Func
	IsDialogEnd(var_990_bool); // 0xca0 ObjFunc
	goto Label_3228; // 0xca2 Jump
	
Label_3235:
	var_1035_object = Obj(); // 0xca3 PushV
	var_1035_object = var_981_object; // 0xca4 Mov
	func_5304(); // 0xca5 NEW_2
	StopDialog(var_987_object); // 0xca7 Func
	GetReturnValue(var_989_int); // 0xca9 ObjFunc
	var_980_int = var_989_int; // 0xcab Mov
	return 8; // 0xcac Return
}


func_6240(var_506_bool)
{
	var_508_int = 0; var_509_string = ""; // 0x1861 PushV
	var_509_string = "oob1Grif5"; // 0x1862 MovS
	func_5631(var_508_int, var_509_string); // 0x1863 NEW_2
	var_510_int = 0; // 0x1865 PushI
	var_511_bool = var_508_int == var_510_int; // 0x1866 Eq
	if(var_511_bool == 0) goto Label_6250; // 0x1867 JumpB
	var_506_bool = 1; // 0x1868 MovB
	return 0; // 0x1869 Return
	
Label_6250:
	var_506_bool = 0; // 0x186a MovB
	return 0; // 0x186b Return
}


func_5222(var_71_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x1466 PushV
	GetPosition(var_74_cvector); // 0x1467 ObjFunc
	var_75_bool = 0; var_76_cvector = CVector(0,0,0); // 0x1469 PushV
	var_76_cvector = var_74_cvector; // 0x146a Mov
	func_5212(var_75_bool, var_76_cvector); // 0x146b NEW_2
	var_71_bool = var_75_bool; // 0x146c Mov
	return 2; // 0x146e Return
}


func_103(var_0_bool, var_1_object, var_2_object, var_3_object, var_1404_object, var_1405_object)
{
	var_0_bool = var_1405_object; // 0x68 TMov
	var_1_object = var_1404_object; // 0x69 TMov
	var_3_object = 0; // 0x6a TMovB
	var_1410_int = 1; // 0x6b PushI
	if(var_1410_int == 0) goto Label_136; // 0x6c JumpB
	var_1411_string = ""; // 0x6d PushV
	var_1411_string = "Neutral"; // 0x6e MovS
	func_166(var_1405_object, var_1411_string); // 0x6f NEW_2
	var_1419_int = 535294; // 0x71 PushI
	SetMessage(var_1419_int); // 0x72 TObjFunc
	ClearReplies(); // 0x74 TObjFunc
	var_1420_int = 535295; // 0x76 PushI
	var_1421_int = 36973; // 0x77 PushI
	var_1422_int = 36972; // 0x78 PushI
	AddReply(var_1420_int, var_1421_int, var_1422_int); // 0x79 TObjFunc
	var_1423_int = 535302; // 0x7b PushI
	var_1424_int = -1; // 0x7c PushI
	var_1425_int = 36980; // 0x7d PushI
	AddReply(var_1423_int, var_1424_int, var_1425_int); // 0x7e TObjFunc
	var_1426_int = 535303; // 0x80 PushI
	var_1427_int = -1; // 0x81 PushI
	var_1428_int = 36981; // 0x82 PushI
	AddReply(var_1426_int, var_1427_int, var_1428_int); // 0x83 TObjFunc
	goto Label_136; // 0x85 Jump
	
Label_136:
	var_1429_bool = 0; // 0x88 PushV
	func_5817(var_1429_bool); // 0x89 NEW_2
	if(var_1429_bool == 0) goto Label_151; // 0x8b JumpB
	
Label_140:
	lshWaitForAnimEnd(); // 0x8c Func
	var_1430_object = var_3_object; // 0x8e PushT
	if(var_1430_object == 0) goto Label_145; // 0x8f JumpB
	goto Label_150; // 0x90 Jump
	
Label_150:
	goto Label_165; // 0x96 Jump
	
Label_165:
	return 0; // 0xa5 Return
	
Label_145:
	var_1431_string = ""; // 0x91 PushV
	var_1431_string = var_2_object; // 0x92 MovT
	func_5518(var_1431_string); // 0x93 NEW_2
	goto Label_140; // 0x95 Jump
	
Label_151:
	var_1432_string = "all"; // 0x97 PushS
	var_1433_string = "idle"; // 0x98 PushS
	PlayAnimation(var_1432_string, var_1433_string); // 0x99 Func
	
Label_155:
	WaitForAnimEnd(); // 0x9b Func
	var_1434_object = var_3_object; // 0x9d PushT
	if(var_1434_object == 0) goto Label_160; // 0x9e JumpB
	goto Label_165; // 0x9f Jump
	
Label_160:
	var_1435_string = "all"; // 0xa0 PushS
	var_1436_string = "idle"; // 0xa1 PushS
	PlayAnimation(var_1435_string, var_1436_string); // 0xa2 Func
	goto Label_155; // 0xa4 Jump
}


func_6252(var_562_bool)
{
	var_564_int = 0; var_565_string = ""; // 0x186d PushV
	var_565_string = "oob1Grif6"; // 0x186e MovS
	func_5631(var_564_int, var_565_string); // 0x186f NEW_2
	var_566_int = 0; // 0x1871 PushI
	var_567_bool = var_564_int == var_566_int; // 0x1872 Eq
	if(var_567_bool == 0) goto Label_6262; // 0x1873 JumpB
	var_562_bool = 1; // 0x1874 MovB
	return 0; // 0x1875 Return
	
Label_6262:
	var_562_bool = 0; // 0x1876 MovB
	return 0; // 0x1877 Return
}


func_5231(var_69_bool)
{
	var_70_bool = 0; var_71_bool = 0; // 0x146f PushV
	IsLoaded(var_71_bool); // 0x1470 Func
	var_69_bool = var_71_bool; // 0x1472 Mov
	return 2; // 0x1473 Return
}


func_5743(var_226_float)
{
	var_227_object = Obj(); var_228_object = Obj(); // 0x166f PushV
	CreateFloatVector(var_228_object); // 0x1670 Func
	add(var_226_float); // 0x1672 ObjFunc
	var_229_int = 16; // 0x1674 PushI
	SendWorldWndMessage(var_229_int, var_228_object); // 0x1675 Func
	return 2; // 0x1677 Return
}


func_5236(var_226_bool, var_228_float)
{
	var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_bool = 0; var_237_bool = 0; var_238_float = 0; var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_bool = 0; var_246_bool = 0; // 0x1474 PushV
	GetPosition(var_239_cvector); // 0x1475 ObjFunc
	GetEyesHeight(var_238_float); // 0x1477 ObjFunc
	var_247_float = GetByIndex(var_239_cvector, 1); // 0x1479 PushE
	var_247_float = var_247_float + var_238_float; // 0x147a Add2
	SetByIndex(var_239_cvector, 1) = var_247_float; // 0x147b PopE
	GetPosition(var_240_cvector); // 0x147c Func
	GetEyesHeight(var_238_float); // 0x147e Func
	var_248_float = GetByIndex(var_240_cvector, 1); // 0x1480 PushE
	var_248_float = var_248_float + var_238_float; // 0x1481 Add2
	SetByIndex(var_240_cvector, 1) = var_248_float; // 0x1482 PopE
	var_241_cvector = var_239_cvector - var_240_cvector; // 0x1483 Sub2
	var_249_float = GetByIndex(var_241_cvector, 1); // 0x1484 PushE
	var_249_float = 0; // 0x1485 MovI
	SetByIndex(var_241_cvector, 1) = var_249_float; // 0x1486 PopE
	var_250_int = var_241_cvector | var_241_cvector; // 0x1487 Or
	var_251_float = sqrt(var_250_int); // 0x1488 Sqrt
	var_241_cvector = var_241_cvector / var_241_cvector; // 0x1489 Div2
	var_242_cvector = -var_241_cvector; // 0x148a Neg2
	var_252_float = var_241_cvector * var_228_float; // 0x148b Mult
	var_253_cvector = CVector(0,0,0); var_254_cvector = CVector(0,0,0); // 0x148c PushV
	var_255_cvector = CVector(0.0, 1.0, 0.0); // 0x148d PushVec
	var_254_cvector = var_242_cvector ^ var_255_cvector; // 0x148e Xor2
	func_5605(var_253_cvector, var_254_cvector); // 0x148f NEW_2
	var_261_int = 25; // 0x1491 PushI
	var_262_float = var_253_cvector * var_261_int; // 0x1492 Mult
	var_263_int = var_252_float + var_262_float; // 0x1493 Add
	var_264_cvector = CVector(0.0, 10.0, 0.0); // 0x1494 PushVec
	var_243_cvector = var_263_int - var_264_cvector; // 0x1495 Sub2
	var_244_cvector = var_240_cvector + var_243_cvector; // 0x1496 Add2
	IsOverrideActive(var_245_bool); // 0x1497 Func
	var_265_bool = var_245_bool; // 0x1499 Push
	if(var_265_bool == 0) goto Label_5277; // 0x149a JumpB
	var_226_bool = 0; // 0x149b MovB
	return 18; // 0x149c Return
	
Label_5277:
	StopWorld(); // 0x149d Func
	CameraTransit(var_244_cvector, var_242_cvector); // 0x149f Func
	var_266_float = GetByIndex(var_243_cvector, 0); // 0x14a1 PushE
	var_267_float = GetByIndex(var_243_cvector, 2); // 0x14a2 PushE
	Rotate(var_266_float, var_267_float); // 0x14a3 Func
	var_268_bool = 0; // 0x14a5 PushV
	func_5817(var_268_bool); // 0x14a6 NEW_2
	if(var_268_bool == 0) goto Label_5290; // 0x14a8 JumpB
	goto Label_5298; // 0x14a9 Jump
	
Label_5298:
	CameraWaitForPlayFinish(); // 0x14b2 Func
	ResumeWorld(); // 0x14b4 Func
	var_226_bool = 1; // 0x14b6 MovB
	return 18; // 0x14b7 Return
	
Label_5290:
	var_269_string = "head"; // 0x14aa PushS
	HasAnimationTrack(var_246_bool, var_269_string); // 0x14ab Func
	var_270_bool = var_246_bool; // 0x14ad Push
	if(var_270_bool == 0) goto Label_5298; // 0x14ae JumpB
	var_271_string = "head"; // 0x14af PushS
	LookAsyncCamera(var_271_string); // 0x14b0 Func
}


func_6264(var_572_bool)
{
	var_574_int = 0; var_575_string = ""; // 0x1879 PushV
	var_575_string = "b1q02"; // 0x187a MovS
	func_5631(var_574_int, var_575_string); // 0x187b NEW_2
	var_576_int = 0; // 0x187d PushI
	var_577_bool = var_574_int == var_576_int; // 0x187e Eq
	if(var_577_bool == 0) goto Label_6274; // 0x187f JumpB
	var_572_bool = 1; // 0x1880 MovB
	return 0; // 0x1881 Return
	
Label_6274:
	var_572_bool = 0; // 0x1882 MovB
	return 0; // 0x1883 Return
}


func_5753(var_137_bool, var_138_string, var_139_string)
{
	var_140_object = Obj(); var_141_object = Obj(); // 0x1679 PushV
	FindActor(var_141_object, var_138_string); // 0x167a Func
	var_142_bool = var_141_object == 0; // 0x167c NullEq
	if(var_142_bool == 0) goto Label_5760; // 0x167d JumpB
	var_137_bool = 0; // 0x167e MovB
	return 2; // 0x167f Return
	
Label_5760:
	Trigger(var_141_object, var_139_string); // 0x1680 Func
	var_137_bool = 1; // 0x1682 MovB
	return 2; // 0x1683 Return
}


func_6276(var_523_bool)
{
	var_525_int = 0; var_526_string = ""; // 0x1885 PushV
	var_526_string = "b1q03_dead"; // 0x1886 MovS
	func_5631(var_525_int, var_526_string); // 0x1887 NEW_2
	var_527_int = 0; // 0x1889 PushI
	var_528_bool = var_525_int != var_527_int; // 0x188a Neq
	if(var_528_bool == 0) goto Label_6286; // 0x188b JumpB
	var_523_bool = 1; // 0x188c MovB
	return 0; // 0x188d Return
	
Label_6286:
	var_523_bool = 0; // 0x188e MovB
	return 0; // 0x188f Return
}


func_4740(var_0_bool, var_1_object, var_2_object, var_3_object, var_376_object, var_377_object)
{
	var_0_bool = var_377_object; // 0x1285 TMov
	var_1_object = var_376_object; // 0x1286 TMov
	var_3_object = 0; // 0x1287 TMovB
	var_382_int = 1; // 0x1288 PushI
	if(var_382_int == 0) goto Label_4768; // 0x1289 JumpB
	var_383_string = ""; // 0x128a PushV
	var_383_string = "Neutral"; // 0x128b MovS
	func_4798(var_377_object, var_383_string); // 0x128c NEW_2
	var_400_int = 520730; // 0x128e PushI
	SetMessage(var_400_int); // 0x128f TObjFunc
	ClearReplies(); // 0x1291 TObjFunc
	var_401_int = 520731; // 0x1293 PushI
	var_402_int = 21943; // 0x1294 PushI
	var_403_int = 21942; // 0x1295 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x1296 TObjFunc
	var_404_int = 520738; // 0x1298 PushI
	var_405_int = 21943; // 0x1299 PushI
	var_406_int = 21949; // 0x129a PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x129b TObjFunc
	goto Label_4768; // 0x129d Jump
	
Label_4768:
	var_407_bool = 0; // 0x12a0 PushV
	func_5817(var_407_bool); // 0x12a1 NEW_2
	if(var_407_bool == 0) goto Label_4783; // 0x12a3 JumpB
	
Label_4772:
	lshWaitForAnimEnd(); // 0x12a4 Func
	var_408_object = var_3_object; // 0x12a6 PushT
	if(var_408_object == 0) goto Label_4777; // 0x12a7 JumpB
	goto Label_4782; // 0x12a8 Jump
	
Label_4782:
	goto Label_4797; // 0x12ae Jump
	
Label_4797:
	return 0; // 0x12bd Return
	
Label_4777:
	var_409_string = ""; // 0x12a9 PushV
	var_409_string = var_2_object; // 0x12aa MovT
	func_5518(var_409_string); // 0x12ab NEW_2
	goto Label_4772; // 0x12ad Jump
	
Label_4783:
	var_420_string = "all"; // 0x12af PushS
	var_421_string = "idle"; // 0x12b0 PushS
	PlayAnimation(var_420_string, var_421_string); // 0x12b1 Func
	
Label_4787:
	WaitForAnimEnd(); // 0x12b3 Func
	var_422_object = var_3_object; // 0x12b5 PushT
	if(var_422_object == 0) goto Label_4792; // 0x12b6 JumpB
	goto Label_4797; // 0x12b7 Jump
	
Label_4792:
	var_423_string = "all"; // 0x12b8 PushS
	var_424_string = "idle"; // 0x12b9 PushS
	PlayAnimation(var_423_string, var_424_string); // 0x12ba Func
	goto Label_4787; // 0x12bc Jump
}


func_5765(var_99_float)
{
	var_100_float = 0; var_101_float = 0; // 0x1685 PushV
	GetGameTime(var_101_float); // 0x1686 Func
	var_99_float = var_101_float; // 0x1688 Mov
	return 2; // 0x1689 Return
}


func_5770(var_87_int)
{
	var_88_float = 0; var_89_float = 0; // 0x168a PushV
	GetGameTime(var_89_float); // 0x168b Func
	var_90_int = 1; // 0x168d PushI
	var_91_int = 0; // 0x168e PushV
	var_92_int = 24; // 0x168f PushI
	var_91_int = var_89_float / var_89_float; // 0x1690 Div2
	var_87_int = var_90_int + var_91_int; // 0x1691 Add2
	return 2; // 0x1692 Return
}


func_4237(var_0_bool, var_1256_int, var_1257_object)
{
	var_1259_object = Obj(); var_1260_bool = 0; var_1261_int = 0; var_1262_bool = 0; var_1263_object = Obj(); var_1264_bool = 0; var_1265_int = 0; var_1266_bool = 0; // 0x108d PushV
	var_0_bool = var_1257_object; // 0x108e TMov
	var_1267_bool = 0; var_1268_object = Obj(); var_1269_float = 0; // 0x108f PushV
	var_1268_object = var_1257_object; // 0x1090 Mov
	var_1269_float = 70.0; // 0x1091 MovF
	func_5236(var_1268_object, var_1269_float); // 0x1092 NEW_2
	var_1270_bool = var_1267_bool == 0; // 0x1094 Not
	if(var_1270_bool == 0) goto Label_4248; // 0x1095 JumpB
	var_1256_int = -2; // 0x1096 MovI
	return 8; // 0x1097 Return
	
Label_4248:
	CreateDialog(var_1263_object); // 0x1098 Func
	var_1271_int = 0; // 0x109a PushV
	func_5811(var_1271_int); // 0x109b NEW_2
	SetNPCName(var_1271_int); // 0x109d ObjFunc
	var_1272_int = 0; // 0x109f PushV
	func_5809(var_1272_int); // 0x10a0 NEW_2
	SetNPCDescription(var_1272_int); // 0x10a2 ObjFunc
	var_1273_string = ""; // 0x10a4 PushV
	func_5813(var_1273_string); // 0x10a5 NEW_2
	SetPhoto(var_1273_string); // 0x10a7 ObjFunc
	var_1274_string = ""; // 0x10a9 PushV
	func_5815(var_1274_string); // 0x10aa NEW_2
	SetPhoto2(var_1274_string); // 0x10ac ObjFunc
	var_1275_int = 0; // 0x10ae PushV
	func_6811(var_1275_int); // 0x10af NEW_2
	SetPlayerName(var_1275_int); // 0x10b1 ObjFunc
	var_1265_int = -1; // 0x10b3 MovI
	IsOverrideActive(var_1264_bool); // 0x10b4 Func
	var_1276_bool = var_1264_bool; // 0x10b6 Push
	if(var_1276_bool == 0) goto Label_4282; // 0x10b7 JumpB
	var_1256_int = -2; // 0x10b8 MovI
	return 8; // 0x10b9 Return
	
Label_4282:
	DoDialog(var_1263_object); // 0x10ba Func
	var_1277_bool = 0; var_1278_object = Obj(); // 0x10bc PushV
	var_1279_object = Obj(); // 0x10bd PushV
	func_5599(var_1279_object); // 0x10be NEW_2
	var_1278_object = var_1279_object; // 0x10bf Mov
	func_5321(var_1277_bool, var_1278_object); // 0x10c1 NEW_2
	var_1280_object = Obj(); var_1281_object = Obj(); // 0x10c3 PushV
	var_1280_object = var_1257_object; // 0x10c4 Mov
	var_1281_object = var_1263_object; // 0x10c5 Mov
	TaskCall(22); // 0x10c6 TaskCall
	func_4318(var_1282_object, var_1283_object, var_1284_string, var_1285_bool, var_1280_object, var_1281_object); // 0x10c7 NEW_2
	TaskReturn(); // 0x10c8 TaskReturn
	IsDialogEnd(var_1266_bool); // 0x10ca ObjFunc
	
Label_4300:
	var_1310_bool = var_1266_bool == 0; // 0x10cc Not
	if(var_1310_bool == 0) goto Label_4307; // 0x10cd JumpB
	sync(); // 0x10ce Func
	IsDialogEnd(var_1266_bool); // 0x10d0 ObjFunc
	goto Label_4300; // 0x10d2 Jump
	
Label_4307:
	var_1311_object = Obj(); // 0x10d3 PushV
	var_1311_object = var_1257_object; // 0x10d4 Mov
	func_5304(); // 0x10d5 NEW_2
	StopDialog(var_1263_object); // 0x10d7 Func
	GetReturnValue(var_1265_int); // 0x10d9 ObjFunc
	var_1256_int = var_1265_int; // 0x10db Mov
	return 8; // 0x10dc Return
}


func_6288(var_530_bool)
{
	var_532_int = 0; var_533_string = ""; // 0x1891 PushV
	var_533_string = "b1q03_retreat"; // 0x1892 MovS
	func_5631(var_532_int, var_533_string); // 0x1893 NEW_2
	var_534_int = 0; // 0x1895 PushI
	var_535_bool = var_532_int != var_534_int; // 0x1896 Neq
	if(var_535_bool == 0) goto Label_6298; // 0x1897 JumpB
	var_530_bool = 1; // 0x1898 MovB
	return 0; // 0x1899 Return
	
Label_6298:
	var_530_bool = 0; // 0x189a MovB
	return 0; // 0x189b Return
}


func_5779(var_434_bool, var_435_int)
{
	var_436_int = 0; // 0x1694 PushV
	func_5770(var_436_int); // 0x1695 NEW_2
	var_434_bool = var_436_int == var_435_int; // 0x1697 Eq2
	return 0; // 0x1698 Return
}


func_6806(var_104_int, var_105_string)
{
	var_106_int = 0; var_107_int = 0; // 0x1a96 PushV
	GetInvItemByName(var_107_int, var_105_string); // 0x1a97 Func
	var_104_int = var_107_int; // 0x1a99 Mov
	return 2; // 0x1a9a Return
}


func_5785(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = ""; // 0x1699 PushV
	var_96_string = "idle"; // 0x169a MovS
	var_97_int = var_94_int; // 0x169b Push
	if(var_97_int == 0) goto Label_5790; // 0x169c JumpB
	var_96_string = var_96_string + var_94_int; // 0x169d Add2
	
Label_5790:
	var_93_string = var_96_string; // 0x169e Mov
	return 2; // 0x169f Return
}


func_6811(var_277_int)
{
	var_278_int = 0; var_279_int = 0; // 0x1a9b PushV
	var_280_string = "branch"; // 0x1a9c PushS
	GetVariable(var_280_string, var_279_int); // 0x1a9d Func
	var_281_int = 0; // 0x1a9f PushI
	var_282_bool = var_279_int == var_281_int; // 0x1aa0 Eq
	if(var_282_bool == 0) goto Label_6821; // 0x1aa1 JumpB
	var_277_int = 1; // 0x1aa2 MovI
	return 2; // 0x1aa3 Return
	
Label_6821:
	var_283_int = 1; // 0x1aa5 PushI
	var_284_bool = var_279_int == var_283_int; // 0x1aa6 Eq
	if(var_284_bool == 0) goto Label_6826; // 0x1aa7 JumpB
	var_277_int = 2; // 0x1aa8 MovI
	return 2; // 0x1aa9 Return
	
Label_6826:
	var_277_int = 3; // 0x1aaa MovI
	return 2; // 0x1aab Return
}


func_6300(var_517_bool)
{
	var_519_int = 0; var_520_string = ""; // 0x189d PushV
	var_520_string = "b1q03_2"; // 0x189e MovS
	func_5631(var_519_int, var_520_string); // 0x189f NEW_2
	var_521_int = 0; // 0x18a1 PushI
	var_522_bool = var_519_int == var_521_int; // 0x18a2 Eq
	if(var_522_bool == 0) goto Label_6310; // 0x18a3 JumpB
	var_517_bool = 1; // 0x18a4 MovB
	return 0; // 0x18a5 Return
	
Label_6310:
	var_517_bool = 0; // 0x18a6 MovB
	return 0; // 0x18a7 Return
}


func_5792(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0; // 0x16a0 PushV
	var_90_int = 0; // 0x16a1 MovI
	
Label_5794:
	var_92_string = "all"; // 0x16a2 PushS
	var_93_string = ""; var_94_int = 0; // 0x16a3 PushV
	var_94_int = var_90_int; // 0x16a4 Mov
	func_5785(var_93_string, var_94_int); // 0x16a5 NEW_2
	HasAnimation(var_91_bool, var_92_string, var_93_string); // 0x16a7 Func
	var_98_bool = var_91_bool == 0; // 0x16a9 Not
	if(var_98_bool == 0) goto Label_5804; // 0x16aa JumpB
	goto Label_5807; // 0x16ab Jump
	
Label_5807:
	var_87_int = var_90_int; // 0x16af Mov
	return 4; // 0x16b0 Return
	
Label_5804:
	var_99_int = 1; // 0x16ac PushI
	var_90_int = var_90_int + var_99_int; // 0x16ad Add2
	goto Label_5794; // 0x16ae Jump
}


func_1699(var_0_bool, var_670_int, var_671_object)
{
	var_673_object = Obj(); var_674_bool = 0; var_675_int = 0; var_676_bool = 0; var_677_object = Obj(); var_678_bool = 0; var_679_int = 0; var_680_bool = 0; // 0x6a3 PushV
	var_0_bool = var_671_object; // 0x6a4 TMov
	var_681_bool = 0; var_682_object = Obj(); var_683_float = 0; // 0x6a5 PushV
	var_682_object = var_671_object; // 0x6a6 Mov
	var_683_float = 70.0; // 0x6a7 MovF
	func_5236(var_682_object, var_683_float); // 0x6a8 NEW_2
	var_684_bool = var_681_bool == 0; // 0x6aa Not
	if(var_684_bool == 0) goto Label_1710; // 0x6ab JumpB
	var_670_int = -2; // 0x6ac MovI
	return 8; // 0x6ad Return
	
Label_1710:
	CreateDialog(var_677_object); // 0x6ae Func
	var_685_int = 0; // 0x6b0 PushV
	func_5811(var_685_int); // 0x6b1 NEW_2
	SetNPCName(var_685_int); // 0x6b3 ObjFunc
	var_686_int = 0; // 0x6b5 PushV
	func_5809(var_686_int); // 0x6b6 NEW_2
	SetNPCDescription(var_686_int); // 0x6b8 ObjFunc
	var_687_string = ""; // 0x6ba PushV
	func_5813(var_687_string); // 0x6bb NEW_2
	SetPhoto(var_687_string); // 0x6bd ObjFunc
	var_688_string = ""; // 0x6bf PushV
	func_5815(var_688_string); // 0x6c0 NEW_2
	SetPhoto2(var_688_string); // 0x6c2 ObjFunc
	var_689_int = 0; // 0x6c4 PushV
	func_6811(var_689_int); // 0x6c5 NEW_2
	SetPlayerName(var_689_int); // 0x6c7 ObjFunc
	var_679_int = -1; // 0x6c9 MovI
	IsOverrideActive(var_678_bool); // 0x6ca Func
	var_690_bool = var_678_bool; // 0x6cc Push
	if(var_690_bool == 0) goto Label_1744; // 0x6cd JumpB
	var_670_int = -2; // 0x6ce MovI
	return 8; // 0x6cf Return
	
Label_1744:
	DoDialog(var_677_object); // 0x6d0 Func
	var_691_bool = 0; var_692_object = Obj(); // 0x6d2 PushV
	var_693_object = Obj(); // 0x6d3 PushV
	func_5599(var_693_object); // 0x6d4 NEW_2
	var_692_object = var_693_object; // 0x6d5 Mov
	func_5321(var_691_bool, var_692_object); // 0x6d7 NEW_2
	var_694_object = Obj(); var_695_object = Obj(); // 0x6d9 PushV
	var_694_object = var_671_object; // 0x6da Mov
	var_695_object = var_677_object; // 0x6db Mov
	TaskCall(6); // 0x6dc TaskCall
	func_1780(var_696_object, var_697_object, var_698_string, var_699_bool, var_694_object, var_695_object); // 0x6dd NEW_2
	TaskReturn(); // 0x6de TaskReturn
	IsDialogEnd(var_680_bool); // 0x6e0 ObjFunc
	
Label_1762:
	var_724_bool = var_680_bool == 0; // 0x6e2 Not
	if(var_724_bool == 0) goto Label_1769; // 0x6e3 JumpB
	sync(); // 0x6e4 Func
	IsDialogEnd(var_680_bool); // 0x6e6 ObjFunc
	goto Label_1762; // 0x6e8 Jump
	
Label_1769:
	var_725_object = Obj(); // 0x6e9 PushV
	var_725_object = var_671_object; // 0x6ea Mov
	func_5304(); // 0x6eb NEW_2
	StopDialog(var_677_object); // 0x6ed Func
	GetReturnValue(var_679_int); // 0x6ef ObjFunc
	var_670_int = var_679_int; // 0x6f1 Mov
	return 8; // 0x6f2 Return
}


func_166(var_2_object, var_1411_string)
{
	var_1412_bool = 0; // 0xa7 PushV
	func_5817(var_1412_bool); // 0xa8 NEW_2
	var_1413_bool = var_1412_bool == 0; // 0xaa Not
	if(var_1413_bool == 0) goto Label_173; // 0xab JumpB
	return 0; // 0xac Return
	
Label_173:
	var_1414_bool = var_1411_string == var_2_object; // 0xad Eq
	if(var_1414_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_1415_string = ""; var_1416_bool = 0; // 0xb0 PushV
	var_1415_string = var_1411_string; // 0xb1 Mov
	var_1417_string = ""; // 0xb2 PushS
	var_1418_bool = var_1411_string == var_1417_string; // 0xb3 Eq
	if(var_1418_bool == 0) goto Label_183; // 0xb4 JumpB
	var_1416_bool = 0; // 0xb5 MovB
	goto Label_184; // 0xb6 Jump
	
Label_184:
	func_5534(var_1415_string, var_1416_bool); // 0xb8 NEW_2
	var_2_object = var_1411_string; // 0xba TMov
	return 0; // 0xbb Return
	
Label_183:
	var_1416_bool = 1; // 0xb7 MovB
}


func_6312(var_542_bool)
{
	var_544_int = 0; var_545_string = ""; // 0x18a9 PushV
	var_545_string = "b1q03_2"; // 0x18aa MovS
	func_5631(var_544_int, var_545_string); // 0x18ab NEW_2
	var_546_int = 1; // 0x18ad PushI
	var_547_bool = var_544_int == var_546_int; // 0x18ae Eq
	if(var_547_bool == 0) goto Label_6322; // 0x18af JumpB
	var_542_bool = 1; // 0x18b0 MovB
	return 0; // 0x18b1 Return
	
Label_6322:
	var_542_bool = 0; // 0x18b2 MovB
	return 0; // 0x18b3 Return
}


func_6828(var_191_int)
{
	var_192_int = 0; var_193_int = 0; // 0x1aac PushV
	var_194_string = "branch"; // 0x1aad PushS
	GetVariable(var_194_string, var_193_int); // 0x1aae Func
	var_191_int = var_193_int; // 0x1ab0 Mov
	return 2; // 0x1ab1 Return
}


func_3246(var_0_bool, var_1_object, var_2_object, var_3_object, var_1004_object, var_1005_object)
{
	var_0_bool = var_1005_object; // 0xcaf TMov
	var_1_object = var_1004_object; // 0xcb0 TMov
	var_3_object = 0; // 0xcb1 TMovB
	var_1010_int = 1; // 0xcb2 PushI
	if(var_1010_int == 0) goto Label_3274; // 0xcb3 JumpB
	var_1011_string = ""; // 0xcb4 PushV
	var_1011_string = "Anger"; // 0xcb5 MovS
	func_3304(var_1005_object, var_1011_string); // 0xcb6 NEW_2
	var_1019_int = 520481; // 0xcb8 PushI
	SetMessage(var_1019_int); // 0xcb9 TObjFunc
	ClearReplies(); // 0xcbb TObjFunc
	var_1020_int = 520482; // 0xcbd PushI
	var_1021_int = -1; // 0xcbe PushI
	var_1022_int = 21685; // 0xcbf PushI
	AddReply(var_1020_int, var_1021_int, var_1022_int); // 0xcc0 TObjFunc
	var_1023_int = 520483; // 0xcc2 PushI
	var_1024_int = -1; // 0xcc3 PushI
	var_1025_int = 21686; // 0xcc4 PushI
	AddReply(var_1023_int, var_1024_int, var_1025_int); // 0xcc5 TObjFunc
	goto Label_3274; // 0xcc7 Jump
	
Label_3274:
	var_1026_bool = 0; // 0xcca PushV
	func_5817(var_1026_bool); // 0xccb NEW_2
	if(var_1026_bool == 0) goto Label_3289; // 0xccd JumpB
	
Label_3278:
	lshWaitForAnimEnd(); // 0xcce Func
	var_1027_object = var_3_object; // 0xcd0 PushT
	if(var_1027_object == 0) goto Label_3283; // 0xcd1 JumpB
	goto Label_3288; // 0xcd2 Jump
	
Label_3288:
	goto Label_3303; // 0xcd8 Jump
	
Label_3303:
	return 0; // 0xce7 Return
	
Label_3283:
	var_1028_string = ""; // 0xcd3 PushV
	var_1028_string = var_2_object; // 0xcd4 MovT
	func_5518(var_1028_string); // 0xcd5 NEW_2
	goto Label_3278; // 0xcd7 Jump
	
Label_3289:
	var_1029_string = "all"; // 0xcd9 PushS
	var_1030_string = "idle"; // 0xcda PushS
	PlayAnimation(var_1029_string, var_1030_string); // 0xcdb Func
	
Label_3293:
	WaitForAnimEnd(); // 0xcdd Func
	var_1031_object = var_3_object; // 0xcdf PushT
	if(var_1031_object == 0) goto Label_3298; // 0xce0 JumpB
	goto Label_3303; // 0xce1 Jump
	
Label_3298:
	var_1032_string = "all"; // 0xce2 PushS
	var_1033_string = "idle"; // 0xce3 PushS
	PlayAnimation(var_1032_string, var_1033_string); // 0xce4 Func
	goto Label_3293; // 0xce6 Jump
}


func_5809(var_274_int)
{
	var_274_int = 515535; // 0x16b1 MovI
	return 0; // 0x16b2 Return
}


func_6834(var_629_object)
{
	var_630_bool = 0; var_631_object = Obj(); // 0x1ab3 PushV
	var_631_object = var_629_object; // 0x1ab4 Mov
	func_5459(var_630_bool, var_631_object); // 0x1ab5 NEW_2
	var_661_bool = var_630_bool == 0; // 0x1ab7 Not
	if(var_661_bool == 0) goto Label_6842; // 0x1ab8 JumpB
	return 0; // 0x1ab9 Return
	
Label_6842:
	var_662_object = Obj(); // 0x1aba PushV
	var_662_object = var_629_object; // 0x1abb Mov
	TaskCall(0); // 0x1abc TaskCall
	func_0(var_662_object); // 0x1abd NEW_2
	TaskReturn(); // 0x1abe TaskReturn
	var_666_object = Obj(); // 0x1ac0 PushV
	var_666_object = var_629_object; // 0x1ac1 Mov
	func_5514(); // 0x1ac2 NEW_2
	return 0; // 0x1ac4 Return
}


func_5811(var_273_int)
{
	var_273_int = 502860; // 0x16b3 MovI
	return 0; // 0x16b4 Return
}


func_6324(var_469_bool)
{
	var_471_int = 0; var_472_string = ""; // 0x18b5 PushV
	var_472_string = "oob1Grif1"; // 0x18b6 MovS
	func_5631(var_471_int, var_472_string); // 0x18b7 NEW_2
	var_475_int = 0; // 0x18b9 PushI
	var_476_bool = var_471_int == var_475_int; // 0x18ba Eq
	if(var_476_bool == 0) goto Label_6334; // 0x18bb JumpB
	var_469_bool = 1; // 0x18bc MovB
	return 0; // 0x18bd Return
	
Label_6334:
	var_469_bool = 0; // 0x18be MovB
	return 0; // 0x18bf Return
}


func_5813(var_275_string)
{
	var_275_string = "ui/NPC_Grif.png"; // 0x16b5 MovS
	return 0; // 0x16b6 Return
}


func_3764(var_2_object, var_1133_string)
{
	var_1134_bool = 0; // 0xeb5 PushV
	func_5817(var_1134_bool); // 0xeb6 NEW_2
	var_1135_bool = var_1134_bool == 0; // 0xeb8 Not
	if(var_1135_bool == 0) goto Label_3771; // 0xeb9 JumpB
	return 0; // 0xeba Return
	
Label_3771:
	var_1136_bool = var_1133_string == var_2_object; // 0xebb Eq
	if(var_1136_bool == 0) goto Label_3774; // 0xebc JumpB
	return 0; // 0xebd Return
	
Label_3774:
	var_1137_string = ""; var_1138_bool = 0; // 0xebe PushV
	var_1137_string = var_1133_string; // 0xebf Mov
	var_1139_string = ""; // 0xec0 PushS
	var_1140_bool = var_1133_string == var_1139_string; // 0xec1 Eq
	if(var_1140_bool == 0) goto Label_3781; // 0xec2 JumpB
	var_1138_bool = 0; // 0xec3 MovB
	goto Label_3782; // 0xec4 Jump
	
Label_3782:
	func_5534(var_1137_string, var_1138_bool); // 0xec6 NEW_2
	var_2_object = var_1133_string; // 0xec8 TMov
	return 0; // 0xec9 Return
	
Label_3781:
	var_1138_bool = 1; // 0xec5 MovB
}


func_5815(var_276_string)
{
	var_276_string = "ui/NPC_Grif_b.png"; // 0x16b7 MovS
	return 0; // 0x16b8 Return
}


func_5304()
{
	var_427_bool = 0; var_428_bool = 0; // 0x14b8 PushV
	CameraSwitchToNormal(); // 0x14b9 Func
	var_429_bool = 0; // 0x14bb PushV
	func_5817(var_429_bool); // 0x14bc NEW_2
	if(var_429_bool == 0) goto Label_5312; // 0x14be JumpB
	goto Label_5320; // 0x14bf Jump
	
Label_5320:
	return 2; // 0x14c8 Return
	
Label_5312:
	var_430_string = "head"; // 0x14c0 PushS
	HasAnimationTrack(var_428_bool, var_430_string); // 0x14c1 Func
	var_431_bool = var_428_bool; // 0x14c3 Push
	if(var_431_bool == 0) goto Label_5320; // 0x14c4 JumpB
	var_432_string = "head"; // 0x14c5 PushS
	UnlookAsync(var_432_string); // 0x14c6 Func
}


func_5817(var_268_bool)
{
	var_268_bool = 1; // 0x16b9 MovB
	return 0; // 0x16ba Return
}


func_2743(var_0_bool, var_858_int, var_859_object)
{
	var_861_object = Obj(); var_862_bool = 0; var_863_int = 0; var_864_bool = 0; var_865_object = Obj(); var_866_bool = 0; var_867_int = 0; var_868_bool = 0; // 0xab7 PushV
	var_0_bool = var_859_object; // 0xab8 TMov
	var_869_bool = 0; var_870_object = Obj(); var_871_float = 0; // 0xab9 PushV
	var_870_object = var_859_object; // 0xaba Mov
	var_871_float = 70.0; // 0xabb MovF
	func_5236(var_870_object, var_871_float); // 0xabc NEW_2
	var_872_bool = var_869_bool == 0; // 0xabe Not
	if(var_872_bool == 0) goto Label_2754; // 0xabf JumpB
	var_858_int = -2; // 0xac0 MovI
	return 8; // 0xac1 Return
	
Label_2754:
	CreateDialog(var_865_object); // 0xac2 Func
	var_873_int = 0; // 0xac4 PushV
	func_5811(var_873_int); // 0xac5 NEW_2
	SetNPCName(var_873_int); // 0xac7 ObjFunc
	var_874_int = 0; // 0xac9 PushV
	func_5809(var_874_int); // 0xaca NEW_2
	SetNPCDescription(var_874_int); // 0xacc ObjFunc
	var_875_string = ""; // 0xace PushV
	func_5813(var_875_string); // 0xacf NEW_2
	SetPhoto(var_875_string); // 0xad1 ObjFunc
	var_876_string = ""; // 0xad3 PushV
	func_5815(var_876_string); // 0xad4 NEW_2
	SetPhoto2(var_876_string); // 0xad6 ObjFunc
	var_877_int = 0; // 0xad8 PushV
	func_6811(var_877_int); // 0xad9 NEW_2
	SetPlayerName(var_877_int); // 0xadb ObjFunc
	var_867_int = -1; // 0xadd MovI
	IsOverrideActive(var_866_bool); // 0xade Func
	var_878_bool = var_866_bool; // 0xae0 Push
	if(var_878_bool == 0) goto Label_2788; // 0xae1 JumpB
	var_858_int = -2; // 0xae2 MovI
	return 8; // 0xae3 Return
	
Label_2788:
	DoDialog(var_865_object); // 0xae4 Func
	var_879_bool = 0; var_880_object = Obj(); // 0xae6 PushV
	var_881_object = Obj(); // 0xae7 PushV
	func_5599(var_881_object); // 0xae8 NEW_2
	var_880_object = var_881_object; // 0xae9 Mov
	func_5321(var_879_bool, var_880_object); // 0xaeb NEW_2
	var_882_object = Obj(); var_883_object = Obj(); // 0xaed PushV
	var_882_object = var_859_object; // 0xaee Mov
	var_883_object = var_865_object; // 0xaef Mov
	TaskCall(10); // 0xaf0 TaskCall
	func_2824(var_884_object, var_885_object, var_886_string, var_887_bool, var_882_object, var_883_object); // 0xaf1 NEW_2
	TaskReturn(); // 0xaf2 TaskReturn
	IsDialogEnd(var_868_bool); // 0xaf4 ObjFunc
	
Label_2806:
	var_912_bool = var_868_bool == 0; // 0xaf6 Not
	if(var_912_bool == 0) goto Label_2813; // 0xaf7 JumpB
	sync(); // 0xaf8 Func
	IsDialogEnd(var_868_bool); // 0xafa ObjFunc
	goto Label_2806; // 0xafc Jump
	
Label_2813:
	var_913_object = Obj(); // 0xafd PushV
	var_913_object = var_859_object; // 0xafe Mov
	func_5304(); // 0xaff NEW_2
	StopDialog(var_865_object); // 0xb01 Func
	GetReturnValue(var_867_int); // 0xb03 ObjFunc
	var_858_int = var_867_int; // 0xb05 Mov
	return 8; // 0xb06 Return
}


func_5819()
{
	var_75_string = "oob3Grif1"; // 0x16bc PushS
	var_76_int = 1; // 0x16bd PushI
	SetVariable(var_75_string, var_76_int); // 0x16be Func
	return 0; // 0x16c0 Return
}


func_4798(var_2_object, var_383_string)
{
	var_384_bool = 0; // 0x12bf PushV
	func_5817(var_384_bool); // 0x12c0 NEW_2
	var_385_bool = var_384_bool == 0; // 0x12c2 Not
	if(var_385_bool == 0) goto Label_4805; // 0x12c3 JumpB
	return 0; // 0x12c4 Return
	
Label_4805:
	var_386_bool = var_383_string == var_2_object; // 0x12c5 Eq
	if(var_386_bool == 0) goto Label_4808; // 0x12c6 JumpB
	return 0; // 0x12c7 Return
	
Label_4808:
	var_387_string = ""; var_388_bool = 0; // 0x12c8 PushV
	var_387_string = var_383_string; // 0x12c9 Mov
	var_389_string = ""; // 0x12ca PushS
	var_390_bool = var_383_string == var_389_string; // 0x12cb Eq
	if(var_390_bool == 0) goto Label_4815; // 0x12cc JumpB
	var_388_bool = 0; // 0x12cd MovB
	goto Label_4816; // 0x12ce Jump
	
Label_4816:
	func_5534(var_387_string, var_388_bool); // 0x12d0 NEW_2
	var_2_object = var_383_string; // 0x12d2 TMov
	return 0; // 0x12d3 Return
	
Label_4815:
	var_388_bool = 1; // 0x12cf MovB
}


func_6336(var_578_bool)
{
	var_580_int = 0; var_581_string = ""; // 0x18c1 PushV
	var_581_string = "oob1Grif2"; // 0x18c2 MovS
	func_5631(var_580_int, var_581_string); // 0x18c3 NEW_2
	var_582_int = 0; // 0x18c5 PushI
	var_583_bool = var_580_int == var_582_int; // 0x18c6 Eq
	if(var_583_bool == 0) goto Label_6346; // 0x18c7 JumpB
	var_578_bool = 1; // 0x18c8 MovB
	return 0; // 0x18c9 Return
	
Label_6346:
	var_578_bool = 0; // 0x18ca MovB
	return 0; // 0x18cb Return
}


func_5825()
{
	var_130_string = "oob3Grif2"; // 0x16c2 PushS
	var_131_int = 1; // 0x16c3 PushI
	SetVariable(var_130_string, var_131_int); // 0x16c4 Func
	return 0; // 0x16c6 Return
}


func_6853(var_85_object, var_440_object, var_672_object, var_733_object, var_860_object, var_921_object, var_982_object, var_1043_object, var_1104_object, var_1197_object, var_1258_object, var_1319_object)
{
	var_86_int = GlobalVars[3]; // 0x1ac6 PushGE
	var_87_int = 0; // 0x1ac7 PushV
	func_5770(var_87_int); // 0x1ac8 NEW_2
	var_93_bool = var_86_int != var_87_int; // 0x1aca Neq
	if(var_93_bool == 0) goto Label_6869; // 0x1acb JumpB
	func_6637(); // 0x1acd NEW_2
	var_211_int = GlobalVars[3]; // 0x1acf PushGE
	var_212_int = 0; // 0x1ad0 PushV
	func_5770(var_212_int); // 0x1ad1 NEW_2
	var_211_int = var_212_int; // 0x1ad2 Mov
	GlobalVars[3] = var_211_int; // 0x1ad4 PopGE
	
Label_6869:
	var_213_bool = GlobalVars[1]; // 0x1ad5 PushGE
	var_214_bool = var_213_bool == 0; // 0x1ad6 Not
	if(var_214_bool == 0) goto Label_6881; // 0x1ad7 JumpB
	var_215_int = 0; var_216_object = Obj(); // 0x1ad8 PushV
	var_216_object = var_85_object; // 0x1ad9 Mov
	TaskCall(25); // 0x1ada TaskCall
	func_4659(var_217_object, var_215_int, var_216_object); // 0x1adb NEW_2
	TaskReturn(); // 0x1adc TaskReturn
	var_433_bool = GlobalVars[1]; // 0x1ade PushGE
	var_433_bool = 1; // 0x1adf MovB
	GlobalVars[1] = var_433_bool; // 0x1ae0 PopGE
	
Label_6881:
	var_434_bool = 0; var_435_int = 0; // 0x1ae1 PushV
	var_435_int = 1; // 0x1ae2 MovI
	func_5779(var_434_bool, var_435_int); // 0x1ae3 NEW_2
	if(var_434_bool == 0) goto Label_6900; // 0x1ae5 JumpB
	var_437_int = 1000; // 0x1ae6 PushI
	var_438_int = 0; var_439_object = Obj(); // 0x1ae7 PushV
	var_439_object = var_85_object; // 0x1ae8 Mov
	TaskCall(3); // 0x1ae9 TaskCall
	func_281(var_440_object, var_438_int, var_439_object); // 0x1aea NEW_2
	TaskReturn(); // 0x1aeb TaskReturn
	var_628_bool = var_437_int == var_440_object; // 0x1aed Eq
	if(var_628_bool == 0) goto Label_6899; // 0x1aee JumpB
	var_629_object = Obj(); // 0x1aef PushV
	var_629_object = var_85_object; // 0x1af0 Mov
	func_6834(var_629_object); // 0x1af1 NEW_2
	
Label_6899:
	return 0; // 0x1af3 Return
	
Label_6900:
	var_667_bool = 0; var_668_int = 0; // 0x1af4 PushV
	var_668_int = 2; // 0x1af5 MovI
	func_5779(var_667_bool, var_668_int); // 0x1af6 NEW_2
	if(var_667_bool == 0) goto Label_6919; // 0x1af8 JumpB
	var_669_int = 1000; // 0x1af9 PushI
	var_670_int = 0; var_671_object = Obj(); // 0x1afa PushV
	var_671_object = var_85_object; // 0x1afb Mov
	TaskCall(5); // 0x1afc TaskCall
	func_1699(var_672_object, var_670_int, var_671_object); // 0x1afd NEW_2
	TaskReturn(); // 0x1afe TaskReturn
	var_726_bool = var_669_int == var_672_object; // 0x1b00 Eq
	if(var_726_bool == 0) goto Label_6918; // 0x1b01 JumpB
	var_727_object = Obj(); // 0x1b02 PushV
	var_727_object = var_85_object; // 0x1b03 Mov
	func_6834(var_727_object); // 0x1b04 NEW_2
	
Label_6918:
	return 0; // 0x1b06 Return
	
Label_6919:
	var_728_bool = 0; var_729_int = 0; // 0x1b07 PushV
	var_729_int = 3; // 0x1b08 MovI
	func_5779(var_728_bool, var_729_int); // 0x1b09 NEW_2
	if(var_728_bool == 0) goto Label_6938; // 0x1b0b JumpB
	var_730_int = 1000; // 0x1b0c PushI
	var_731_int = 0; var_732_object = Obj(); // 0x1b0d PushV
	var_732_object = var_85_object; // 0x1b0e Mov
	TaskCall(7); // 0x1b0f TaskCall
	func_2054(var_733_object, var_731_int, var_732_object); // 0x1b10 NEW_2
	TaskReturn(); // 0x1b11 TaskReturn
	var_853_bool = var_730_int == var_733_object; // 0x1b13 Eq
	if(var_853_bool == 0) goto Label_6937; // 0x1b14 JumpB
	var_854_object = Obj(); // 0x1b15 PushV
	var_854_object = var_85_object; // 0x1b16 Mov
	func_6834(var_854_object); // 0x1b17 NEW_2
	
Label_6937:
	return 0; // 0x1b19 Return
	
Label_6938:
	var_855_bool = 0; var_856_int = 0; // 0x1b1a PushV
	var_856_int = 4; // 0x1b1b MovI
	func_5779(var_855_bool, var_856_int); // 0x1b1c NEW_2
	if(var_855_bool == 0) goto Label_6957; // 0x1b1e JumpB
	var_857_int = 1000; // 0x1b1f PushI
	var_858_int = 0; var_859_object = Obj(); // 0x1b20 PushV
	var_859_object = var_85_object; // 0x1b21 Mov
	TaskCall(9); // 0x1b22 TaskCall
	func_2743(var_860_object, var_858_int, var_859_object); // 0x1b23 NEW_2
	TaskReturn(); // 0x1b24 TaskReturn
	var_914_bool = var_857_int == var_860_object; // 0x1b26 Eq
	if(var_914_bool == 0) goto Label_6956; // 0x1b27 JumpB
	var_915_object = Obj(); // 0x1b28 PushV
	var_915_object = var_85_object; // 0x1b29 Mov
	func_6834(var_915_object); // 0x1b2a NEW_2
	
Label_6956:
	return 0; // 0x1b2c Return
	
Label_6957:
	var_916_bool = 0; var_917_int = 0; // 0x1b2d PushV
	var_917_int = 5; // 0x1b2e MovI
	func_5779(var_916_bool, var_917_int); // 0x1b2f NEW_2
	if(var_916_bool == 0) goto Label_6976; // 0x1b31 JumpB
	var_918_int = 1000; // 0x1b32 PushI
	var_919_int = 0; var_920_object = Obj(); // 0x1b33 PushV
	var_920_object = var_85_object; // 0x1b34 Mov
	TaskCall(11); // 0x1b35 TaskCall
	func_2954(var_921_object, var_919_int, var_920_object); // 0x1b36 NEW_2
	TaskReturn(); // 0x1b37 TaskReturn
	var_975_bool = var_918_int == var_921_object; // 0x1b39 Eq
	if(var_975_bool == 0) goto Label_6975; // 0x1b3a JumpB
	var_976_object = Obj(); // 0x1b3b PushV
	var_976_object = var_85_object; // 0x1b3c Mov
	func_6834(var_976_object); // 0x1b3d NEW_2
	
Label_6975:
	return 0; // 0x1b3f Return
	
Label_6976:
	var_977_bool = 0; var_978_int = 0; // 0x1b40 PushV
	var_978_int = 6; // 0x1b41 MovI
	func_5779(var_977_bool, var_978_int); // 0x1b42 NEW_2
	if(var_977_bool == 0) goto Label_6995; // 0x1b44 JumpB
	var_979_int = 1000; // 0x1b45 PushI
	var_980_int = 0; var_981_object = Obj(); // 0x1b46 PushV
	var_981_object = var_85_object; // 0x1b47 Mov
	TaskCall(13); // 0x1b48 TaskCall
	func_3165(var_982_object, var_980_int, var_981_object); // 0x1b49 NEW_2
	TaskReturn(); // 0x1b4a TaskReturn
	var_1036_bool = var_979_int == var_982_object; // 0x1b4c Eq
	if(var_1036_bool == 0) goto Label_6994; // 0x1b4d JumpB
	var_1037_object = Obj(); // 0x1b4e PushV
	var_1037_object = var_85_object; // 0x1b4f Mov
	func_6834(var_1037_object); // 0x1b50 NEW_2
	
Label_6994:
	return 0; // 0x1b52 Return
	
Label_6995:
	var_1038_bool = 0; var_1039_int = 0; // 0x1b53 PushV
	var_1039_int = 7; // 0x1b54 MovI
	func_5779(var_1038_bool, var_1039_int); // 0x1b55 NEW_2
	if(var_1038_bool == 0) goto Label_7014; // 0x1b57 JumpB
	var_1040_int = 1000; // 0x1b58 PushI
	var_1041_int = 0; var_1042_object = Obj(); // 0x1b59 PushV
	var_1042_object = var_85_object; // 0x1b5a Mov
	TaskCall(15); // 0x1b5b TaskCall
	func_3376(var_1043_object, var_1041_int, var_1042_object); // 0x1b5c NEW_2
	TaskReturn(); // 0x1b5d TaskReturn
	var_1097_bool = var_1040_int == var_1043_object; // 0x1b5f Eq
	if(var_1097_bool == 0) goto Label_7013; // 0x1b60 JumpB
	var_1098_object = Obj(); // 0x1b61 PushV
	var_1098_object = var_85_object; // 0x1b62 Mov
	func_6834(var_1098_object); // 0x1b63 NEW_2
	
Label_7013:
	return 0; // 0x1b65 Return
	
Label_7014:
	var_1099_bool = 0; var_1100_int = 0; // 0x1b66 PushV
	var_1100_int = 8; // 0x1b67 MovI
	func_5779(var_1099_bool, var_1100_int); // 0x1b68 NEW_2
	if(var_1099_bool == 0) goto Label_7033; // 0x1b6a JumpB
	var_1101_int = 1000; // 0x1b6b PushI
	var_1102_int = 0; var_1103_object = Obj(); // 0x1b6c PushV
	var_1103_object = var_85_object; // 0x1b6d Mov
	TaskCall(17); // 0x1b6e TaskCall
	func_3587(var_1104_object, var_1102_int, var_1103_object); // 0x1b6f NEW_2
	TaskReturn(); // 0x1b70 TaskReturn
	var_1190_bool = var_1101_int == var_1104_object; // 0x1b72 Eq
	if(var_1190_bool == 0) goto Label_7032; // 0x1b73 JumpB
	var_1191_object = Obj(); // 0x1b74 PushV
	var_1191_object = var_85_object; // 0x1b75 Mov
	func_6834(var_1191_object); // 0x1b76 NEW_2
	
Label_7032:
	return 0; // 0x1b78 Return
	
Label_7033:
	var_1192_bool = 0; var_1193_int = 0; // 0x1b79 PushV
	var_1193_int = 9; // 0x1b7a MovI
	func_5779(var_1192_bool, var_1193_int); // 0x1b7b NEW_2
	if(var_1192_bool == 0) goto Label_7052; // 0x1b7d JumpB
	var_1194_int = 1000; // 0x1b7e PushI
	var_1195_int = 0; var_1196_object = Obj(); // 0x1b7f PushV
	var_1196_object = var_85_object; // 0x1b80 Mov
	TaskCall(19); // 0x1b81 TaskCall
	func_4026(var_1197_object, var_1195_int, var_1196_object); // 0x1b82 NEW_2
	TaskReturn(); // 0x1b83 TaskReturn
	var_1251_bool = var_1194_int == var_1197_object; // 0x1b85 Eq
	if(var_1251_bool == 0) goto Label_7051; // 0x1b86 JumpB
	var_1252_object = Obj(); // 0x1b87 PushV
	var_1252_object = var_85_object; // 0x1b88 Mov
	func_6834(var_1252_object); // 0x1b89 NEW_2
	
Label_7051:
	return 0; // 0x1b8b Return
	
Label_7052:
	var_1253_bool = 0; var_1254_int = 0; // 0x1b8c PushV
	var_1254_int = 10; // 0x1b8d MovI
	func_5779(var_1253_bool, var_1254_int); // 0x1b8e NEW_2
	if(var_1253_bool == 0) goto Label_7071; // 0x1b90 JumpB
	var_1255_int = 1000; // 0x1b91 PushI
	var_1256_int = 0; var_1257_object = Obj(); // 0x1b92 PushV
	var_1257_object = var_85_object; // 0x1b93 Mov
	TaskCall(21); // 0x1b94 TaskCall
	func_4237(var_1258_object, var_1256_int, var_1257_object); // 0x1b95 NEW_2
	TaskReturn(); // 0x1b96 TaskReturn
	var_1312_bool = var_1255_int == var_1258_object; // 0x1b98 Eq
	if(var_1312_bool == 0) goto Label_7070; // 0x1b99 JumpB
	var_1313_object = Obj(); // 0x1b9a PushV
	var_1313_object = var_85_object; // 0x1b9b Mov
	func_6834(var_1313_object); // 0x1b9c NEW_2
	
Label_7070:
	return 0; // 0x1b9e Return
	
Label_7071:
	var_1314_bool = 0; var_1315_int = 0; // 0x1b9f PushV
	var_1315_int = 11; // 0x1ba0 MovI
	func_5779(var_1314_bool, var_1315_int); // 0x1ba1 NEW_2
	if(var_1314_bool == 0) goto Label_7090; // 0x1ba3 JumpB
	var_1316_int = 1000; // 0x1ba4 PushI
	var_1317_int = 0; var_1318_object = Obj(); // 0x1ba5 PushV
	var_1318_object = var_85_object; // 0x1ba6 Mov
	TaskCall(23); // 0x1ba7 TaskCall
	func_4448(var_1319_object, var_1317_int, var_1318_object); // 0x1ba8 NEW_2
	TaskReturn(); // 0x1ba9 TaskReturn
	var_1373_bool = var_1316_int == var_1319_object; // 0x1bab Eq
	if(var_1373_bool == 0) goto Label_7089; // 0x1bac JumpB
	var_1374_object = Obj(); // 0x1bad PushV
	var_1374_object = var_85_object; // 0x1bae Mov
	func_6834(var_1374_object); // 0x1baf NEW_2
	
Label_7089:
	return 0; // 0x1bb1 Return
	
Label_7090:
	var_1375_bool = 0; // 0x1bb2 PushV
	var_1375_bool = 0; // 0x1bb3 MovB
	var_1376_bool = 0; var_1377_int = 0; // 0x1bb4 PushV
	var_1377_int = 12; // 0x1bb5 MovI
	func_5779(var_1376_bool, var_1377_int); // 0x1bb6 NEW_2
	if(var_1376_bool == 0) goto Label_7101; // 0x1bb8 JumpB
	var_1378_bool = GlobalVars[2]; // 0x1bb9 PushGE
	var_1379_bool = var_1378_bool == 0; // 0x1bba Not
	if(var_1379_bool == 0) goto Label_7101; // 0x1bbb JumpB
	var_1375_bool = 1; // 0x1bbc MovB
	
Label_7101:
	if(var_1375_bool == 0) goto Label_7112; // 0x1bbd JumpB
	var_1380_int = 0; var_1381_object = Obj(); // 0x1bbe PushV
	var_1381_object = var_85_object; // 0x1bbf Mov
	TaskCall(1); // 0x1bc0 TaskCall
	func_22(var_1382_object, var_1380_int, var_1381_object); // 0x1bc1 NEW_2
	TaskReturn(); // 0x1bc2 TaskReturn
	var_1439_bool = GlobalVars[2]; // 0x1bc4 PushGE
	var_1439_bool = 1; // 0x1bc5 MovB
	GlobalVars[2] = var_1439_bool; // 0x1bc6 PopGE
	return 0; // 0x1bc7 Return
	
Label_7112:
	return 0; // 0x1bc8 Return
}


func_5831()
{
	var_176_string = "oob3Grif3"; // 0x16c8 PushS
	var_177_int = 1; // 0x16c9 PushI
	SetVariable(var_176_string, var_177_int); // 0x16ca Func
	return 0; // 0x16cc Return
}


func_5321(var_286_bool, var_287_object)
{
	var_291_int = 0; var_292_int = 0; var_293_int = 0; var_294_int = 0; // 0x14c9 PushV
	var_295_string = "voice_common"; // 0x14ca PushS
	GetVariable(var_295_string, var_293_int); // 0x14cb Func
	var_296_int = var_293_int; // 0x14cd Push
	if(var_296_int == 0) goto Label_5359; // 0x14ce JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x14cf PushV
	var_298_object = var_287_object; // 0x14d0 Mov
	func_5379(var_298_object); // 0x14d1 NEW_2
	var_327_bool = var_297_bool == 0; // 0x14d3 Not
	if(var_327_bool == 0) goto Label_5341; // 0x14d4 JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x14d5 PushV
	var_329_object = var_287_object; // 0x14d6 Mov
	func_5416(var_329_object); // 0x14d7 NEW_2
	var_358_bool = var_328_bool == 0; // 0x14d9 Not
	if(var_358_bool == 0) goto Label_5341; // 0x14da JumpB
	var_286_bool = 0; // 0x14db MovB
	return 4; // 0x14dc Return
	
Label_5341:
	var_359_int = 2; // 0x14dd PushI
	irand(var_294_int, var_359_int); // 0x14de Func
	var_360_int = var_294_int; // 0x14e0 Push
	if(var_360_int == 0) goto Label_5354; // 0x14e1 JumpB
	var_361_string = "voice_common"; // 0x14e2 PushS
	var_362_int = 1; // 0x14e3 PushI
	var_363_int = var_293_int + var_362_int; // 0x14e4 Add
	var_364_int = 3; // 0x14e5 PushI
	var_365_int = var_363_int / var_364_int; // 0x14e6 Mod
	SetVariable(var_361_string, var_365_int); // 0x14e7 Func
	goto Label_5358; // 0x14e9 Jump
	
Label_5358:
	goto Label_5377; // 0x14ee Jump
	
Label_5377:
	var_286_bool = 1; // 0x1501 MovB
	return 4; // 0x1502 Return
	
Label_5354:
	var_366_string = "voice_common"; // 0x14ea PushS
	var_367_int = 0; // 0x14eb PushI
	SetVariable(var_366_string, var_367_int); // 0x14ec Func
	
Label_5359:
	var_368_bool = 0; var_369_object = Obj(); // 0x14ef PushV
	var_369_object = var_287_object; // 0x14f0 Mov
	func_5416(var_369_object); // 0x14f1 NEW_2
	var_370_bool = var_368_bool == 0; // 0x14f3 Not
	if(var_370_bool == 0) goto Label_5373; // 0x14f4 JumpB
	var_371_bool = 0; var_372_object = Obj(); // 0x14f5 PushV
	var_372_object = var_287_object; // 0x14f6 Mov
	func_5379(var_372_object); // 0x14f7 NEW_2
	var_373_bool = var_371_bool == 0; // 0x14f9 Not
	if(var_373_bool == 0) goto Label_5373; // 0x14fa JumpB
	var_286_bool = 0; // 0x14fb MovB
	return 4; // 0x14fc Return
	
Label_5373:
	var_374_string = "voice_common"; // 0x14fd PushS
	var_375_int = 1; // 0x14fe PushI
	SetVariable(var_374_string, var_375_int); // 0x14ff Func
}


func_6348(var_774_bool)
{
	var_776_int = 0; var_777_string = ""; // 0x18cd PushV
	var_777_string = "b3q02"; // 0x18ce MovS
	func_5631(var_776_int, var_777_string); // 0x18cf NEW_2
	var_778_int = 1; // 0x18d1 PushI
	var_779_bool = var_776_int == var_778_int; // 0x18d2 Eq
	if(var_779_bool == 0) goto Label_6358; // 0x18d3 JumpB
	var_774_bool = 1; // 0x18d4 MovB
	return 0; // 0x18d5 Return
	
Label_6358:
	var_774_bool = 0; // 0x18d6 MovB
	return 0; // 0x18d7 Return
}


func_5837()
{
	var_277_object = Obj(); var_278_string = ""; var_279_float = 0; // 0x16ce PushV
	var_280_object = Obj(); // 0x16cf PushV
	func_6587(var_280_object); // 0x16d0 NEW_2
	var_277_object = var_280_object; // 0x16d1 Mov
	var_278_string = "pt_map_notkin"; // 0x16d3 MovS
	var_279_float = 2; // 0x16d4 MovI
	func_6604(var_277_object, var_278_string, var_279_float); // 0x16d5 NEW_2
	var_281_object = Obj(); // 0x16d7 PushV
	func_6587(var_281_object); // 0x16d8 NEW_2
	ShowMap(var_281_object); // 0x16da ObjFunc
	return 0; // 0x16dc Return
}


func_6360(var_804_bool)
{
	var_806_int = 0; var_807_string = ""; // 0x18d9 PushV
	var_807_string = "b3q02"; // 0x18da MovS
	func_5631(var_806_int, var_807_string); // 0x18db NEW_2
	var_808_int = 3; // 0x18dd PushI
	var_809_bool = var_806_int == var_808_int; // 0x18de Eq
	if(var_809_bool == 0) goto Label_6370; // 0x18df JumpB
	var_804_bool = 1; // 0x18e0 MovB
	return 0; // 0x18e1 Return
	
Label_6370:
	var_804_bool = 0; // 0x18e2 MovB
	return 0; // 0x18e3 Return
}


func_5853()
{
	var_369_string = "oob1Grif3"; // 0x16de PushS
	var_370_int = 1; // 0x16df PushI
	SetVariable(var_369_string, var_370_int); // 0x16e0 Func
	return 0; // 0x16e2 Return
}


func_4318(var_0_bool, var_1_object, var_2_object, var_3_object, var_1280_object, var_1281_object)
{
	var_0_bool = var_1281_object; // 0x10df TMov
	var_1_object = var_1280_object; // 0x10e0 TMov
	var_3_object = 0; // 0x10e1 TMovB
	var_1286_int = 1; // 0x10e2 PushI
	if(var_1286_int == 0) goto Label_4346; // 0x10e3 JumpB
	var_1287_string = ""; // 0x10e4 PushV
	var_1287_string = "Fear"; // 0x10e5 MovS
	func_4376(var_1281_object, var_1287_string); // 0x10e6 NEW_2
	var_1295_int = 520497; // 0x10e8 PushI
	SetMessage(var_1295_int); // 0x10e9 TObjFunc
	ClearReplies(); // 0x10eb TObjFunc
	var_1296_int = 520498; // 0x10ed PushI
	var_1297_int = -1; // 0x10ee PushI
	var_1298_int = 21701; // 0x10ef PushI
	AddReply(var_1296_int, var_1297_int, var_1298_int); // 0x10f0 TObjFunc
	var_1299_int = 520499; // 0x10f2 PushI
	var_1300_int = -1; // 0x10f3 PushI
	var_1301_int = 21702; // 0x10f4 PushI
	AddReply(var_1299_int, var_1300_int, var_1301_int); // 0x10f5 TObjFunc
	goto Label_4346; // 0x10f7 Jump
	
Label_4346:
	var_1302_bool = 0; // 0x10fa PushV
	func_5817(var_1302_bool); // 0x10fb NEW_2
	if(var_1302_bool == 0) goto Label_4361; // 0x10fd JumpB
	
Label_4350:
	lshWaitForAnimEnd(); // 0x10fe Func
	var_1303_object = var_3_object; // 0x1100 PushT
	if(var_1303_object == 0) goto Label_4355; // 0x1101 JumpB
	goto Label_4360; // 0x1102 Jump
	
Label_4360:
	goto Label_4375; // 0x1108 Jump
	
Label_4375:
	return 0; // 0x1117 Return
	
Label_4355:
	var_1304_string = ""; // 0x1103 PushV
	var_1304_string = var_2_object; // 0x1104 MovT
	func_5518(var_1304_string); // 0x1105 NEW_2
	goto Label_4350; // 0x1107 Jump
	
Label_4361:
	var_1305_string = "all"; // 0x1109 PushS
	var_1306_string = "idle"; // 0x110a PushS
	PlayAnimation(var_1305_string, var_1306_string); // 0x110b Func
	
Label_4365:
	WaitForAnimEnd(); // 0x110d Func
	var_1307_object = var_3_object; // 0x110f PushT
	if(var_1307_object == 0) goto Label_4370; // 0x1110 JumpB
	goto Label_4375; // 0x1111 Jump
	
Label_4370:
	var_1308_string = "all"; // 0x1112 PushS
	var_1309_string = "idle"; // 0x1113 PushS
	PlayAnimation(var_1308_string, var_1309_string); // 0x1114 Func
	goto Label_4365; // 0x1116 Jump
}


func_5859()
{
	var_375_object = Obj(); var_376_object = Obj(); // 0x16e3 PushV
	var_377_string = "b1q01GrifToldAboutDanko"; // 0x16e4 PushS
	var_378_int = 1; // 0x16e5 PushI
	SetVariable(var_377_string, var_378_int); // 0x16e6 Func
	var_379_object = Obj(); // 0x16e8 PushV
	func_6587(var_379_object); // 0x16e9 NEW_2
	var_376_object = var_379_object; // 0x16ea Mov
	var_380_string = "b1q01GrifGotoDanko"; // 0x16ec PushS
	var_381_string = "pt_map_eva"; // 0x16ed PushS
	var_382_int = 1; // 0x16ee PushI
	var_383_int = 520048; // 0x16ef PushI
	var_384_float = 0; // 0x16f0 PushV
	func_5765(var_384_float); // 0x16f1 NEW_2
	AddMark(var_380_string, var_381_string, var_382_int, var_383_int, var_384_float); // 0x16f3 ObjFunc
	return 2; // 0x16f5 Return
}


func_6372(var_786_bool)
{
	var_788_int = 0; var_789_string = ""; // 0x18e5 PushV
	var_789_string = "b3q02Dead"; // 0x18e6 MovS
	func_5631(var_788_int, var_789_string); // 0x18e7 NEW_2
	var_790_int = 0; // 0x18e9 PushI
	var_791_bool = var_788_int != var_790_int; // 0x18ea Neq
	if(var_791_bool == 0) goto Label_6382; // 0x18eb JumpB
	var_786_bool = 1; // 0x18ec MovB
	return 0; // 0x18ed Return
	
Label_6382:
	var_786_bool = 0; // 0x18ee MovB
	return 0; // 0x18ef Return
}


func_3304(var_2_object, var_1011_string)
{
	var_1012_bool = 0; // 0xce9 PushV
	func_5817(var_1012_bool); // 0xcea NEW_2
	var_1013_bool = var_1012_bool == 0; // 0xcec Not
	if(var_1013_bool == 0) goto Label_3311; // 0xced JumpB
	return 0; // 0xcee Return
	
Label_3311:
	var_1014_bool = var_1011_string == var_2_object; // 0xcef Eq
	if(var_1014_bool == 0) goto Label_3314; // 0xcf0 JumpB
	return 0; // 0xcf1 Return
	
Label_3314:
	var_1015_string = ""; var_1016_bool = 0; // 0xcf2 PushV
	var_1015_string = var_1011_string; // 0xcf3 Mov
	var_1017_string = ""; // 0xcf4 PushS
	var_1018_bool = var_1011_string == var_1017_string; // 0xcf5 Eq
	if(var_1018_bool == 0) goto Label_3321; // 0xcf6 JumpB
	var_1016_bool = 0; // 0xcf7 MovB
	goto Label_3322; // 0xcf8 Jump
	
Label_3322:
	func_5534(var_1015_string, var_1016_bool); // 0xcfa NEW_2
	var_2_object = var_1011_string; // 0xcfc TMov
	return 0; // 0xcfd Return
	
Label_3321:
	var_1016_bool = 1; // 0xcf9 MovB
}


func_2285(var_2_object, var_762_string)
{
	var_763_bool = 0; // 0x8ee PushV
	func_5817(var_763_bool); // 0x8ef NEW_2
	var_764_bool = var_763_bool == 0; // 0x8f1 Not
	if(var_764_bool == 0) goto Label_2292; // 0x8f2 JumpB
	return 0; // 0x8f3 Return
	
Label_2292:
	var_765_bool = var_762_string == var_2_object; // 0x8f4 Eq
	if(var_765_bool == 0) goto Label_2295; // 0x8f5 JumpB
	return 0; // 0x8f6 Return
	
Label_2295:
	var_766_string = ""; var_767_bool = 0; // 0x8f7 PushV
	var_766_string = var_762_string; // 0x8f8 Mov
	var_768_string = ""; // 0x8f9 PushS
	var_769_bool = var_762_string == var_768_string; // 0x8fa Eq
	if(var_769_bool == 0) goto Label_2302; // 0x8fb JumpB
	var_767_bool = 0; // 0x8fc MovB
	goto Label_2303; // 0x8fd Jump
	
Label_2303:
	func_5534(var_766_string, var_767_bool); // 0x8ff NEW_2
	var_2_object = var_762_string; // 0x901 TMov
	return 0; // 0x902 Return
	
Label_2302:
	var_767_bool = 1; // 0x8fe MovB
}


func_6384(var_780_bool)
{
	var_782_int = 0; var_783_string = ""; // 0x18f1 PushV
	var_783_string = "oob3Grif1"; // 0x18f2 MovS
	func_5631(var_782_int, var_783_string); // 0x18f3 NEW_2
	var_784_int = 0; // 0x18f5 PushI
	var_785_bool = var_782_int == var_784_int; // 0x18f6 Eq
	if(var_785_bool == 0) goto Label_6394; // 0x18f7 JumpB
	var_780_bool = 1; // 0x18f8 MovB
	return 0; // 0x18f9 Return
	
Label_6394:
	var_780_bool = 0; // 0x18fa MovB
	return 0; // 0x18fb Return
}


func_1780(var_0_bool, var_1_object, var_2_object, var_3_object, var_694_object, var_695_object)
{
	var_0_bool = var_695_object; // 0x6f5 TMov
	var_1_object = var_694_object; // 0x6f6 TMov
	var_3_object = 0; // 0x6f7 TMovB
	var_700_int = 1; // 0x6f8 PushI
	if(var_700_int == 0) goto Label_1808; // 0x6f9 JumpB
	var_701_string = ""; // 0x6fa PushV
	var_701_string = "Neutral"; // 0x6fb MovS
	func_1838(var_695_object, var_701_string); // 0x6fc NEW_2
	var_709_int = 518272; // 0x6fe PushI
	SetMessage(var_709_int); // 0x6ff TObjFunc
	ClearReplies(); // 0x701 TObjFunc
	var_710_int = 520470; // 0x703 PushI
	var_711_int = -1; // 0x704 PushI
	var_712_int = 21673; // 0x705 PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x706 TObjFunc
	var_713_int = 518273; // 0x708 PushI
	var_714_int = -1; // 0x709 PushI
	var_715_int = 19382; // 0x70a PushI
	AddReply(var_713_int, var_714_int, var_715_int); // 0x70b TObjFunc
	goto Label_1808; // 0x70d Jump
	
Label_1808:
	var_716_bool = 0; // 0x710 PushV
	func_5817(var_716_bool); // 0x711 NEW_2
	if(var_716_bool == 0) goto Label_1823; // 0x713 JumpB
	
Label_1812:
	lshWaitForAnimEnd(); // 0x714 Func
	var_717_object = var_3_object; // 0x716 PushT
	if(var_717_object == 0) goto Label_1817; // 0x717 JumpB
	goto Label_1822; // 0x718 Jump
	
Label_1822:
	goto Label_1837; // 0x71e Jump
	
Label_1837:
	return 0; // 0x72d Return
	
Label_1817:
	var_718_string = ""; // 0x719 PushV
	var_718_string = var_2_object; // 0x71a MovT
	func_5518(var_718_string); // 0x71b NEW_2
	goto Label_1812; // 0x71d Jump
	
Label_1823:
	var_719_string = "all"; // 0x71f PushS
	var_720_string = "idle"; // 0x720 PushS
	PlayAnimation(var_719_string, var_720_string); // 0x721 Func
	
Label_1827:
	WaitForAnimEnd(); // 0x723 Func
	var_721_object = var_3_object; // 0x725 PushT
	if(var_721_object == 0) goto Label_1832; // 0x726 JumpB
	goto Label_1837; // 0x727 Jump
	
Label_1832:
	var_722_string = "all"; // 0x728 PushS
	var_723_string = "idle"; // 0x729 PushS
	PlayAnimation(var_722_string, var_723_string); // 0x72a Func
	goto Label_1827; // 0x72c Jump
}


func_5879()
{
	var_387_object = Obj(); var_388_string = ""; var_389_float = 0; // 0x16f8 PushV
	var_390_object = Obj(); // 0x16f9 PushV
	func_6587(var_390_object); // 0x16fa NEW_2
	var_387_object = var_390_object; // 0x16fb Mov
	var_388_string = "pt_map_eva"; // 0x16fd MovS
	var_389_float = 2; // 0x16fe MovI
	func_6604(var_387_object, var_388_string, var_389_float); // 0x16ff NEW_2
	var_391_object = Obj(); // 0x1701 PushV
	func_6587(var_391_object); // 0x1702 NEW_2
	ShowMap(var_391_object); // 0x1704 ObjFunc
	return 0; // 0x1706 Return
}


func_6396(var_810_bool)
{
	var_812_int = 0; var_813_string = ""; // 0x18fd PushV
	var_813_string = "oob3Grif2"; // 0x18fe MovS
	func_5631(var_812_int, var_813_string); // 0x18ff NEW_2
	var_814_int = 0; // 0x1901 PushI
	var_815_bool = var_812_int == var_814_int; // 0x1902 Eq
	if(var_815_bool == 0) goto Label_6406; // 0x1903 JumpB
	var_810_bool = 1; // 0x1904 MovB
	return 0; // 0x1905 Return
	
Label_6406:
	var_810_bool = 0; // 0x1906 MovB
	return 0; // 0x1907 Return
}


func_5379(var_297_bool)
{
	var_299_string = ""; var_300_int = 0; var_301_bool = 0; var_302_int = 0; var_303_string = ""; var_304_string = ""; var_305_int = 0; var_306_bool = 0; var_307_int = 0; var_308_string = ""; // 0x1503 PushV
	var_304_string = "c"; // 0x1504 MovS
	var_305_int = 0; // 0x1505 MovI
	
Label_5382:
	var_309_int = 1; // 0x1506 PushI
	if(var_309_int == 0) goto Label_5395; // 0x1507 JumpB
	var_310_int = 1; // 0x1508 PushI
	var_311_int = var_305_int + var_310_int; // 0x1509 Add
	var_312_int = var_304_string + var_311_int; // 0x150a Add
	HasProperty(var_312_int, var_306_bool); // 0x150b ObjFunc
	var_313_bool = var_306_bool == 0; // 0x150d Not
	if(var_313_bool == 0) goto Label_5392; // 0x150e JumpB
	goto Label_5395; // 0x150f Jump
	
Label_5395:
	var_314_bool = var_305_int == 0; // 0x1513 Not
	if(var_314_bool == 0) goto Label_5399; // 0x1514 JumpB
	var_297_bool = 0; // 0x1515 MovB
	return 10; // 0x1516 Return
	
Label_5399:
	var_307_int = 0; // 0x1517 MovI
	var_315_int = 1; // 0x1518 PushI
	var_316_bool = var_305_int > var_315_int; // 0x1519 GT
	if(var_316_bool == 0) goto Label_5405; // 0x151a JumpB
	irand(var_307_int, var_305_int); // 0x151b Func
	
Label_5405:
	var_317_int = 1; // 0x151d PushI
	var_318_int = var_307_int + var_317_int; // 0x151e Add
	var_319_int = var_304_string + var_318_int; // 0x151f Add
	GetProperty(var_319_int, var_308_string); // 0x1520 ObjFunc
	var_320_bool = 0; var_321_string = ""; // 0x1522 PushV
	var_321_string = var_308_string; // 0x1523 Mov
	func_5549(var_320_bool, var_321_string); // 0x1524 NEW_2
	var_297_bool = var_320_bool; // 0x1525 Mov
	return 10; // 0x1527 Return
	
Label_5392:
	var_326_int = 1; // 0x1510 PushI
	var_305_int = var_305_int + var_326_int; // 0x1511 Add2
	goto Label_5382; // 0x1512 Jump
}


func_5895()
{
	var_402_string = "oob1Grif4"; // 0x1708 PushS
	var_403_int = 1; // 0x1709 PushI
	SetVariable(var_402_string, var_403_int); // 0x170a Func
	return 0; // 0x170c Return
}


func_6408(var_825_bool)
{
	var_827_int = 0; var_828_string = ""; // 0x1909 PushV
	var_828_string = "oob3Grif3"; // 0x190a MovS
	func_5631(var_827_int, var_828_string); // 0x190b NEW_2
	var_829_int = 0; // 0x190d PushI
	var_830_bool = var_827_int == var_829_int; // 0x190e Eq
	if(var_830_bool == 0) goto Label_6418; // 0x190f JumpB
	var_825_bool = 1; // 0x1910 MovB
	return 0; // 0x1911 Return
	
Label_6418:
	var_825_bool = 0; // 0x1912 MovB
	return 0; // 0x1913 Return
}


func_2824(var_0_bool, var_1_object, var_2_object, var_3_object, var_882_object, var_883_object)
{
	var_0_bool = var_883_object; // 0xb09 TMov
	var_1_object = var_882_object; // 0xb0a TMov
	var_3_object = 0; // 0xb0b TMovB
	var_888_int = 1; // 0xb0c PushI
	if(var_888_int == 0) goto Label_2852; // 0xb0d JumpB
	var_889_string = ""; // 0xb0e PushV
	var_889_string = "Anger"; // 0xb0f MovS
	func_2882(var_883_object, var_889_string); // 0xb10 NEW_2
	var_897_int = 520473; // 0xb12 PushI
	SetMessage(var_897_int); // 0xb13 TObjFunc
	ClearReplies(); // 0xb15 TObjFunc
	var_898_int = 520474; // 0xb17 PushI
	var_899_int = -1; // 0xb18 PushI
	var_900_int = 21677; // 0xb19 PushI
	AddReply(var_898_int, var_899_int, var_900_int); // 0xb1a TObjFunc
	var_901_int = 520475; // 0xb1c PushI
	var_902_int = -1; // 0xb1d PushI
	var_903_int = 21678; // 0xb1e PushI
	AddReply(var_901_int, var_902_int, var_903_int); // 0xb1f TObjFunc
	goto Label_2852; // 0xb21 Jump
	
Label_2852:
	var_904_bool = 0; // 0xb24 PushV
	func_5817(var_904_bool); // 0xb25 NEW_2
	if(var_904_bool == 0) goto Label_2867; // 0xb27 JumpB
	
Label_2856:
	lshWaitForAnimEnd(); // 0xb28 Func
	var_905_object = var_3_object; // 0xb2a PushT
	if(var_905_object == 0) goto Label_2861; // 0xb2b JumpB
	goto Label_2866; // 0xb2c Jump
	
Label_2866:
	goto Label_2881; // 0xb32 Jump
	
Label_2881:
	return 0; // 0xb41 Return
	
Label_2861:
	var_906_string = ""; // 0xb2d PushV
	var_906_string = var_2_object; // 0xb2e MovT
	func_5518(var_906_string); // 0xb2f NEW_2
	goto Label_2856; // 0xb31 Jump
	
Label_2867:
	var_907_string = "all"; // 0xb33 PushS
	var_908_string = "idle"; // 0xb34 PushS
	PlayAnimation(var_907_string, var_908_string); // 0xb35 Func
	
Label_2871:
	WaitForAnimEnd(); // 0xb37 Func
	var_909_object = var_3_object; // 0xb39 PushT
	if(var_909_object == 0) goto Label_2876; // 0xb3a JumpB
	goto Label_2881; // 0xb3b Jump
	
Label_2876:
	var_910_string = "all"; // 0xb3c PushS
	var_911_string = "idle"; // 0xb3d PushS
	PlayAnimation(var_910_string, var_911_string); // 0xb3e Func
	goto Label_2871; // 0xb40 Jump
}


func_5901()
{
	var_408_object = Obj(); var_409_string = ""; // 0x170e PushV
	var_409_string = "quest_b1_04"; // 0x170f MovS
	func_5636(var_408_object, var_409_string); // 0x1710 NEW_2
	return 0; // 0x1712 Return
}


func_5907()
{
	var_80_string = "oob8Grif1"; // 0x1714 PushS
	var_81_int = 1; // 0x1715 PushI
	SetVariable(var_80_string, var_81_int); // 0x1716 Func
	return 0; // 0x1718 Return
}


func_6420(var_793_bool)
{
	var_795_int = 0; var_796_string = ""; // 0x1915 PushV
	var_796_string = "b3q02GrabitelTalk"; // 0x1916 MovS
	func_5631(var_795_int, var_796_string); // 0x1917 NEW_2
	var_797_int = 1; // 0x1919 PushI
	var_798_bool = var_795_int == var_797_int; // 0x191a Eq
	if(var_798_bool == 0) goto Label_6430; // 0x191b JumpB
	var_793_bool = 1; // 0x191c MovB
	return 0; // 0x191d Return
	
Label_6430:
	var_793_bool = 0; // 0x191e MovB
	return 0; // 0x191f Return
}


func_4376(var_2_object, var_1287_string)
{
	var_1288_bool = 0; // 0x1119 PushV
	func_5817(var_1288_bool); // 0x111a NEW_2
	var_1289_bool = var_1288_bool == 0; // 0x111c Not
	if(var_1289_bool == 0) goto Label_4383; // 0x111d JumpB
	return 0; // 0x111e Return
	
Label_4383:
	var_1290_bool = var_1287_string == var_2_object; // 0x111f Eq
	if(var_1290_bool == 0) goto Label_4386; // 0x1120 JumpB
	return 0; // 0x1121 Return
	
Label_4386:
	var_1291_string = ""; var_1292_bool = 0; // 0x1122 PushV
	var_1291_string = var_1287_string; // 0x1123 Mov
	var_1293_string = ""; // 0x1124 PushS
	var_1294_bool = var_1287_string == var_1293_string; // 0x1125 Eq
	if(var_1294_bool == 0) goto Label_4393; // 0x1126 JumpB
	var_1292_bool = 0; // 0x1127 MovB
	goto Label_4394; // 0x1128 Jump
	
Label_4394:
	func_5534(var_1291_string, var_1292_bool); // 0x112a NEW_2
	var_2_object = var_1287_string; // 0x112c TMov
	return 0; // 0x112d Return
	
Label_4393:
	var_1292_bool = 1; // 0x1129 MovB
}


func_5913()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x1719 PushV
	var_88_object = Obj(); // 0x171a PushV
	func_6587(var_88_object); // 0x171b NEW_2
	var_87_object = var_88_object; // 0x171c Mov
	var_95_string = "b8q01GrifGotoKlara"; // 0x171e PushS
	var_96_string = "pt_map_mishka"; // 0x171f PushS
	var_97_int = 3; // 0x1720 PushI
	var_98_int = 521464; // 0x1721 PushI
	var_99_float = 0; // 0x1722 PushV
	func_5765(var_99_float); // 0x1723 NEW_2
	AddMark(var_95_string, var_96_string, var_97_int, var_98_int, var_99_float); // 0x1725 ObjFunc
	return 2; // 0x1727 Return
}


func_281(var_0_bool, var_438_int, var_439_object)
{
	var_441_object = Obj(); var_442_bool = 0; var_443_int = 0; var_444_bool = 0; var_445_object = Obj(); var_446_bool = 0; var_447_int = 0; var_448_bool = 0; // 0x119 PushV
	var_0_bool = var_439_object; // 0x11a TMov
	var_449_bool = 0; var_450_object = Obj(); var_451_float = 0; // 0x11b PushV
	var_450_object = var_439_object; // 0x11c Mov
	var_451_float = 70.0; // 0x11d MovF
	func_5236(var_450_object, var_451_float); // 0x11e NEW_2
	var_452_bool = var_449_bool == 0; // 0x120 Not
	if(var_452_bool == 0) goto Label_292; // 0x121 JumpB
	var_438_int = -2; // 0x122 MovI
	return 8; // 0x123 Return
	
Label_292:
	CreateDialog(var_445_object); // 0x124 Func
	var_453_int = 0; // 0x126 PushV
	func_5811(var_453_int); // 0x127 NEW_2
	SetNPCName(var_453_int); // 0x129 ObjFunc
	var_454_int = 0; // 0x12b PushV
	func_5809(var_454_int); // 0x12c NEW_2
	SetNPCDescription(var_454_int); // 0x12e ObjFunc
	var_455_string = ""; // 0x130 PushV
	func_5813(var_455_string); // 0x131 NEW_2
	SetPhoto(var_455_string); // 0x133 ObjFunc
	var_456_string = ""; // 0x135 PushV
	func_5815(var_456_string); // 0x136 NEW_2
	SetPhoto2(var_456_string); // 0x138 ObjFunc
	var_457_int = 0; // 0x13a PushV
	func_6811(var_457_int); // 0x13b NEW_2
	SetPlayerName(var_457_int); // 0x13d ObjFunc
	var_447_int = -1; // 0x13f MovI
	IsOverrideActive(var_446_bool); // 0x140 Func
	var_458_bool = var_446_bool; // 0x142 Push
	if(var_458_bool == 0) goto Label_326; // 0x143 JumpB
	var_438_int = -2; // 0x144 MovI
	return 8; // 0x145 Return
	
Label_326:
	DoDialog(var_445_object); // 0x146 Func
	var_459_bool = 0; var_460_object = Obj(); // 0x148 PushV
	var_461_object = Obj(); // 0x149 PushV
	func_5599(var_461_object); // 0x14a NEW_2
	var_460_object = var_461_object; // 0x14b Mov
	func_5321(var_459_bool, var_460_object); // 0x14d NEW_2
	var_462_object = Obj(); var_463_object = Obj(); // 0x14f PushV
	var_462_object = var_439_object; // 0x150 Mov
	var_463_object = var_445_object; // 0x151 Mov
	TaskCall(4); // 0x152 TaskCall
	func_362(var_464_object, var_465_object, var_466_string, var_467_bool, var_462_object, var_463_object); // 0x153 NEW_2
	TaskReturn(); // 0x154 TaskReturn
	IsDialogEnd(var_448_bool); // 0x156 ObjFunc
	
Label_344:
	var_626_bool = var_448_bool == 0; // 0x158 Not
	if(var_626_bool == 0) goto Label_351; // 0x159 JumpB
	sync(); // 0x15a Func
	IsDialogEnd(var_448_bool); // 0x15c ObjFunc
	goto Label_344; // 0x15e Jump
	
Label_351:
	var_627_object = Obj(); // 0x15f PushV
	var_627_object = var_439_object; // 0x160 Mov
	func_5304(); // 0x161 NEW_2
	StopDialog(var_445_object); // 0x163 Func
	GetReturnValue(var_447_int); // 0x165 ObjFunc
	var_438_int = var_447_int; // 0x167 Mov
	return 8; // 0x168 Return
}


func_6432(var_589_bool)
{
	var_591_int = 0; var_592_string = ""; // 0x1921 PushV
	var_592_string = "oob1Grif3"; // 0x1922 MovS
	func_5631(var_591_int, var_592_string); // 0x1923 NEW_2
	var_593_int = 0; // 0x1925 PushI
	var_594_bool = var_591_int == var_593_int; // 0x1926 Eq
	if(var_594_bool == 0) goto Label_6442; // 0x1927 JumpB
	var_589_bool = 1; // 0x1928 MovB
	return 0; // 0x1929 Return
	
Label_6442:
	var_589_bool = 0; // 0x192a MovB
	return 0; // 0x192b Return
}


func_5416(var_328_bool)
{
	var_330_string = ""; var_331_int = 0; var_332_bool = 0; var_333_int = 0; var_334_string = ""; var_335_string = ""; var_336_int = 0; var_337_bool = 0; var_338_int = 0; var_339_string = ""; // 0x1528 PushV
	var_340_string = "d"; // 0x1529 PushS
	var_341_int = 0; // 0x152a PushV
	func_5770(var_341_int); // 0x152b NEW_2
	var_342_int = var_340_string + var_341_int; // 0x152d Add
	var_343_string = "m"; // 0x152e PushS
	var_335_string = var_342_int + var_343_string; // 0x152f Add2
	var_336_int = 0; // 0x1530 MovI
	
Label_5425:
	var_344_int = 1; // 0x1531 PushI
	if(var_344_int == 0) goto Label_5438; // 0x1532 JumpB
	var_345_int = 1; // 0x1533 PushI
	var_346_int = var_336_int + var_345_int; // 0x1534 Add
	var_347_int = var_335_string + var_346_int; // 0x1535 Add
	HasProperty(var_347_int, var_337_bool); // 0x1536 ObjFunc
	var_348_bool = var_337_bool == 0; // 0x1538 Not
	if(var_348_bool == 0) goto Label_5435; // 0x1539 JumpB
	goto Label_5438; // 0x153a Jump
	
Label_5438:
	var_349_bool = var_336_int == 0; // 0x153e Not
	if(var_349_bool == 0) goto Label_5442; // 0x153f JumpB
	var_328_bool = 0; // 0x1540 MovB
	return 10; // 0x1541 Return
	
Label_5442:
	var_338_int = 0; // 0x1542 MovI
	var_350_int = 1; // 0x1543 PushI
	var_351_bool = var_336_int > var_350_int; // 0x1544 GT
	if(var_351_bool == 0) goto Label_5448; // 0x1545 JumpB
	irand(var_338_int, var_336_int); // 0x1546 Func
	
Label_5448:
	var_352_int = 1; // 0x1548 PushI
	var_353_int = var_338_int + var_352_int; // 0x1549 Add
	var_354_int = var_335_string + var_353_int; // 0x154a Add
	GetProperty(var_354_int, var_339_string); // 0x154b ObjFunc
	var_355_bool = 0; var_356_string = ""; // 0x154d PushV
	var_356_string = var_339_string; // 0x154e Mov
	func_5549(var_355_bool, var_356_string); // 0x154f NEW_2
	var_328_bool = var_355_bool; // 0x1550 Mov
	return 10; // 0x1552 Return
	
Label_5435:
	var_357_int = 1; // 0x153b PushI
	var_336_int = var_336_int + var_357_int; // 0x153c Add2
	goto Label_5425; // 0x153d Jump
}


func_5929()
{
	var_110_string = "oob8Grif2"; // 0x172a PushS
	var_111_int = 1; // 0x172b PushI
	SetVariable(var_110_string, var_111_int); // 0x172c Func
	return 0; // 0x172e Return
}


func_6444(var_595_bool)
{
	var_597_int = 0; var_598_string = ""; // 0x192d PushV
	var_598_string = "b1q01"; // 0x192e MovS
	func_5631(var_597_int, var_598_string); // 0x192f NEW_2
	var_599_int = 1000; // 0x1931 PushI
	var_600_bool = var_597_int == var_599_int; // 0x1932 Eq
	if(var_600_bool == 0) goto Label_6454; // 0x1933 JumpB
	var_595_bool = 1; // 0x1934 MovB
	return 0; // 0x1935 Return
	
Label_6454:
	var_595_bool = 0; // 0x1936 MovB
	return 0; // 0x1937 Return
}


func_1838(var_2_object, var_701_string)
{
	var_702_bool = 0; // 0x72f PushV
	func_5817(var_702_bool); // 0x730 NEW_2
	var_703_bool = var_702_bool == 0; // 0x732 Not
	if(var_703_bool == 0) goto Label_1845; // 0x733 JumpB
	return 0; // 0x734 Return
	
Label_1845:
	var_704_bool = var_701_string == var_2_object; // 0x735 Eq
	if(var_704_bool == 0) goto Label_1848; // 0x736 JumpB
	return 0; // 0x737 Return
	
Label_1848:
	var_705_string = ""; var_706_bool = 0; // 0x738 PushV
	var_705_string = var_701_string; // 0x739 Mov
	var_707_string = ""; // 0x73a PushS
	var_708_bool = var_701_string == var_707_string; // 0x73b Eq
	if(var_708_bool == 0) goto Label_1855; // 0x73c JumpB
	var_706_bool = 0; // 0x73d MovB
	goto Label_1856; // 0x73e Jump
	
Label_1856:
	func_5534(var_705_string, var_706_bool); // 0x740 NEW_2
	var_2_object = var_701_string; // 0x742 TMov
	return 0; // 0x743 Return
	
Label_1855:
	var_706_bool = 1; // 0x73f MovB
}


func_5935(var_334_object)
{
	var_336_bool = 0; var_337_object = Obj(); var_338_float = 0; // 0x1730 PushV
	var_337_object = var_334_object; // 0x1731 Mov
	var_338_float = 0.05; // 0x1732 MovF
	func_5708(var_336_bool, var_337_object, var_338_float); // 0x1733 NEW_2
	return 0; // 0x1735 Return
}


func_3376(var_0_bool, var_1041_int, var_1042_object)
{
	var_1044_object = Obj(); var_1045_bool = 0; var_1046_int = 0; var_1047_bool = 0; var_1048_object = Obj(); var_1049_bool = 0; var_1050_int = 0; var_1051_bool = 0; // 0xd30 PushV
	var_0_bool = var_1042_object; // 0xd31 TMov
	var_1052_bool = 0; var_1053_object = Obj(); var_1054_float = 0; // 0xd32 PushV
	var_1053_object = var_1042_object; // 0xd33 Mov
	var_1054_float = 70.0; // 0xd34 MovF
	func_5236(var_1053_object, var_1054_float); // 0xd35 NEW_2
	var_1055_bool = var_1052_bool == 0; // 0xd37 Not
	if(var_1055_bool == 0) goto Label_3387; // 0xd38 JumpB
	var_1041_int = -2; // 0xd39 MovI
	return 8; // 0xd3a Return
	
Label_3387:
	CreateDialog(var_1048_object); // 0xd3b Func
	var_1056_int = 0; // 0xd3d PushV
	func_5811(var_1056_int); // 0xd3e NEW_2
	SetNPCName(var_1056_int); // 0xd40 ObjFunc
	var_1057_int = 0; // 0xd42 PushV
	func_5809(var_1057_int); // 0xd43 NEW_2
	SetNPCDescription(var_1057_int); // 0xd45 ObjFunc
	var_1058_string = ""; // 0xd47 PushV
	func_5813(var_1058_string); // 0xd48 NEW_2
	SetPhoto(var_1058_string); // 0xd4a ObjFunc
	var_1059_string = ""; // 0xd4c PushV
	func_5815(var_1059_string); // 0xd4d NEW_2
	SetPhoto2(var_1059_string); // 0xd4f ObjFunc
	var_1060_int = 0; // 0xd51 PushV
	func_6811(var_1060_int); // 0xd52 NEW_2
	SetPlayerName(var_1060_int); // 0xd54 ObjFunc
	var_1050_int = -1; // 0xd56 MovI
	IsOverrideActive(var_1049_bool); // 0xd57 Func
	var_1061_bool = var_1049_bool; // 0xd59 Push
	if(var_1061_bool == 0) goto Label_3421; // 0xd5a JumpB
	var_1041_int = -2; // 0xd5b MovI
	return 8; // 0xd5c Return
	
Label_3421:
	DoDialog(var_1048_object); // 0xd5d Func
	var_1062_bool = 0; var_1063_object = Obj(); // 0xd5f PushV
	var_1064_object = Obj(); // 0xd60 PushV
	func_5599(var_1064_object); // 0xd61 NEW_2
	var_1063_object = var_1064_object; // 0xd62 Mov
	func_5321(var_1062_bool, var_1063_object); // 0xd64 NEW_2
	var_1065_object = Obj(); var_1066_object = Obj(); // 0xd66 PushV
	var_1065_object = var_1042_object; // 0xd67 Mov
	var_1066_object = var_1048_object; // 0xd68 Mov
	TaskCall(16); // 0xd69 TaskCall
	func_3457(var_1067_object, var_1068_object, var_1069_string, var_1070_bool, var_1065_object, var_1066_object); // 0xd6a NEW_2
	TaskReturn(); // 0xd6b TaskReturn
	IsDialogEnd(var_1051_bool); // 0xd6d ObjFunc
	
Label_3439:
	var_1095_bool = var_1051_bool == 0; // 0xd6f Not
	if(var_1095_bool == 0) goto Label_3446; // 0xd70 JumpB
	sync(); // 0xd71 Func
	IsDialogEnd(var_1051_bool); // 0xd73 ObjFunc
	goto Label_3439; // 0xd75 Jump
	
Label_3446:
	var_1096_object = Obj(); // 0xd76 PushV
	var_1096_object = var_1042_object; // 0xd77 Mov
	func_5304(); // 0xd78 NEW_2
	StopDialog(var_1048_object); // 0xd7a Func
	GetReturnValue(var_1050_int); // 0xd7c ObjFunc
	var_1041_int = var_1050_int; // 0xd7e Mov
	return 8; // 0xd7f Return
}


func_5942()
{
	var_263_string = "oob1Grif5"; // 0x1737 PushS
	var_264_int = 1; // 0x1738 PushI
	SetVariable(var_263_string, var_264_int); // 0x1739 Func
	return 0; // 0x173b Return
}


func_4918(var_0_bool)
{
	var_69_bool = 0; // 0x1336 PushV
	func_5231(var_69_bool); // 0x1337 NEW_2
	var_72_bool = var_69_bool == 0; // 0x1339 Not
	if(var_72_bool == 0) goto Label_4925; // 0x133a JumpB
	Hold(); // 0x133b Func
	
Label_4925:
	GetDirection(var_0_bool); // 0x133d Func
	
Label_4927:
	func_5094(); // 0x1340 NEW_2
	goto Label_4927; // 0x1342 Jump
}


func_6456(var_611_bool)
{
	var_613_int = 0; var_614_string = ""; // 0x1939 PushV
	var_614_string = "oob1Grif4"; // 0x193a MovS
	func_5631(var_613_int, var_614_string); // 0x193b NEW_2
	var_615_int = 0; // 0x193d PushI
	var_616_bool = var_613_int == var_615_int; // 0x193e Eq
	if(var_616_bool == 0) goto Label_6466; // 0x193f JumpB
	var_611_bool = 1; // 0x1940 MovB
	return 0; // 0x1941 Return
	
Label_6466:
	var_611_bool = 0; // 0x1942 MovB
	return 0; // 0x1943 Return
}


func_5948()
{
	var_267_object = Obj(); var_268_object = Obj(); // 0x173c PushV
	var_269_object = Obj(); // 0x173d PushV
	func_6587(var_269_object); // 0x173e NEW_2
	var_268_object = var_269_object; // 0x173f Mov
	var_270_string = "b1GrifGotoNotkin"; // 0x1741 PushS
	var_271_string = "pt_map_notkin"; // 0x1742 PushS
	var_272_int = 3; // 0x1743 PushI
	var_273_int = 530364; // 0x1744 PushI
	var_274_float = 0; // 0x1745 PushV
	func_5765(var_274_float); // 0x1746 NEW_2
	AddMark(var_270_string, var_271_string, var_272_int, var_273_int, var_274_float); // 0x1748 ObjFunc
	return 2; // 0x174a Return
}


func_2882(var_2_object, var_889_string)
{
	var_890_bool = 0; // 0xb43 PushV
	func_5817(var_890_bool); // 0xb44 NEW_2
	var_891_bool = var_890_bool == 0; // 0xb46 Not
	if(var_891_bool == 0) goto Label_2889; // 0xb47 JumpB
	return 0; // 0xb48 Return
	
Label_2889:
	var_892_bool = var_889_string == var_2_object; // 0xb49 Eq
	if(var_892_bool == 0) goto Label_2892; // 0xb4a JumpB
	return 0; // 0xb4b Return
	
Label_2892:
	var_893_string = ""; var_894_bool = 0; // 0xb4c PushV
	var_893_string = var_889_string; // 0xb4d Mov
	var_895_string = ""; // 0xb4e PushS
	var_896_bool = var_889_string == var_895_string; // 0xb4f Eq
	if(var_896_bool == 0) goto Label_2899; // 0xb50 JumpB
	var_894_bool = 0; // 0xb51 MovB
	goto Label_2900; // 0xb52 Jump
	
Label_2900:
	func_5534(var_893_string, var_894_bool); // 0xb54 NEW_2
	var_2_object = var_889_string; // 0xb56 TMov
	return 0; // 0xb57 Return
	
Label_2899:
	var_894_bool = 1; // 0xb53 MovB
}


func_4932(var_92_bool)
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x1344 PushV
	var_95_string = "player"; // 0x1345 PushS
	FindActor(var_94_object, var_95_string); // 0x1346 Func
	var_96_bool = var_94_object == 0; // 0x1348 Not
	if(var_96_bool == 0) goto Label_4940; // 0x1349 JumpB
	var_92_bool = 0; // 0x134a MovB
	return 2; // 0x134b Return
	
Label_4940:
	var_97_bool = 0; var_98_object = Obj(); // 0x134c PushV
	var_98_object = var_94_object; // 0x134d Mov
	func_5222(var_98_object); // 0x134e NEW_2
	var_92_bool = var_97_bool; // 0x134f Mov
	return 2; // 0x1351 Return
}


func_6468()
{
	var_318_object = Obj(); var_319_object = Obj(); // 0x1944 PushV
	var_320_int = 212; // 0x1945 PushI
	var_321_int = 2; // 0x1946 PushI
	var_322_int = 518107; // 0x1947 PushI
	CreateDiaryEntry(var_319_object, var_320_int, var_321_int, var_322_int); // 0x1948 Func
	var_323_bool = 0; var_324_object = Obj(); var_325_int = 0; // 0x194a PushV
	var_324_object = var_319_object; // 0x194b Mov
	var_325_int = 209; // 0x194c MovI
	func_6559(var_323_bool, var_324_object, var_325_int); // 0x194d NEW_2
	return 2; // 0x194f Return
}


func_5964()
{
	var_197_string = "playsound"; // 0x174d PushS
	var_198_string = "giveitem"; // 0x174e PushS
	TriggerWorld(var_197_string, var_198_string); // 0x174f Func
	return 0; // 0x1751 Return
}


func_6481()
{
	var_296_object = Obj(); var_297_object = Obj(); // 0x1951 PushV
	var_298_int = 211; // 0x1952 PushI
	var_299_int = 2; // 0x1953 PushI
	var_300_int = 518106; // 0x1954 PushI
	CreateDiaryEntry(var_297_object, var_298_int, var_299_int, var_300_int); // 0x1955 Func
	var_301_bool = 0; var_302_object = Obj(); var_303_int = 0; // 0x1957 PushV
	var_302_object = var_297_object; // 0x1958 Mov
	var_303_int = 209; // 0x1959 MovI
	func_6559(var_301_bool, var_302_object, var_303_int); // 0x195a NEW_2
	return 2; // 0x195c Return
}


func_5970()
{
	var_310_string = "oob1Grif6"; // 0x1753 PushS
	var_311_int = 1; // 0x1754 PushI
	SetVariable(var_310_string, var_311_int); // 0x1755 Func
	return 0; // 0x1757 Return
}


func_4947(var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0); // 0x1353 PushE
	var_145_float = GetByIndex(var_0_bool, 2); // 0x1354 PushE
	RotateAsync(var_144_float, var_145_float); // 0x1355 Func
	return 0; // 0x1357 Return
}


func_5459(var_630_bool, var_631_object)
{
	var_632_bool = 0; var_633_object = Obj(); var_634_float = 0; // 0x1554 PushV
	var_633_object = var_631_object; // 0x1555 Mov
	var_634_float = 70; // 0x1556 MovI
	func_5467(var_633_object, var_634_float); // 0x1557 NEW_2
	var_630_bool = var_632_bool; // 0x1558 Mov
	return 0; // 0x155a Return
}


func_5976()
{
	var_104_string = "playsound"; // 0x1759 PushS
	var_105_string = "mapmark"; // 0x175a PushS
	TriggerWorld(var_104_string, var_105_string); // 0x175b Func
	return 0; // 0x175d Return
}


func_4952(var_75_bool)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_object = Obj(); var_79_bool = 0; // 0x1358 PushV
	var_80_string = "player"; // 0x1359 PushS
	FindActor(var_78_object, var_80_string); // 0x135a Func
	var_81_bool = var_78_object == 0; // 0x135c Not
	if(var_81_bool == 0) goto Label_4960; // 0x135d JumpB
	var_75_bool = 0; // 0x135e MovB
	return 4; // 0x135f Return
	
Label_4960:
	var_82_float = 0; var_83_object = Obj(); // 0x1360 PushV
	var_83_object = var_78_object; // 0x1361 Mov
	func_5170(var_83_object); // 0x1362 NEW_2
	var_90_float = 90000.0; // 0x1364 PushF
	var_91_bool = var_82_float > var_90_float; // 0x1365 GT
	if(var_91_bool == 0) goto Label_4969; // 0x1366 JumpB
	var_75_bool = 0; // 0x1367 MovB
	return 4; // 0x1368 Return
	
Label_4969:
	CanSee(var_79_bool, var_78_object); // 0x1369 Func
	var_75_bool = var_79_bool; // 0x136b Mov
	return 4; // 0x136c Return
}


func_5467(var_632_bool, var_634_float)
{
	var_635_float = 0; var_636_cvector = CVector(0,0,0); var_637_cvector = CVector(0,0,0); var_638_cvector = CVector(0,0,0); var_639_cvector = CVector(0,0,0); var_640_cvector = CVector(0,0,0); var_641_cvector = CVector(0,0,0); var_642_bool = 0; var_643_float = 0; var_644_cvector = CVector(0,0,0); var_645_cvector = CVector(0,0,0); var_646_cvector = CVector(0,0,0); var_647_cvector = CVector(0,0,0); var_648_cvector = CVector(0,0,0); var_649_cvector = CVector(0,0,0); var_650_bool = 0; // 0x155b PushV
	GetPosition(var_644_cvector); // 0x155c ObjFunc
	GetEyesHeight(var_643_float); // 0x155e ObjFunc
	var_651_float = GetByIndex(var_644_cvector, 1); // 0x1560 PushE
	var_651_float = var_651_float + var_643_float; // 0x1561 Add2
	SetByIndex(var_644_cvector, 1) = var_651_float; // 0x1562 PopE
	GetPosition(var_645_cvector); // 0x1563 Func
	GetEyesHeight(var_643_float); // 0x1565 Func
	var_652_float = GetByIndex(var_645_cvector, 1); // 0x1567 PushE
	var_652_float = var_652_float + var_643_float; // 0x1568 Add2
	SetByIndex(var_645_cvector, 1) = var_652_float; // 0x1569 PopE
	var_646_cvector = var_644_cvector - var_645_cvector; // 0x156a Sub2
	var_653_float = GetByIndex(var_646_cvector, 1); // 0x156b PushE
	var_653_float = 0; // 0x156c MovI
	SetByIndex(var_646_cvector, 1) = var_653_float; // 0x156d PopE
	var_654_int = var_646_cvector | var_646_cvector; // 0x156e Or
	var_655_float = sqrt(var_654_int); // 0x156f Sqrt
	var_646_cvector = var_646_cvector / var_646_cvector; // 0x1570 Div2
	var_647_cvector = -var_646_cvector; // 0x1571 Neg2
	var_656_float = var_646_cvector * var_634_float; // 0x1572 Mult
	var_657_cvector = CVector(0.0, 10.0, 0.0); // 0x1573 PushVec
	var_648_cvector = var_656_float - var_657_cvector; // 0x1574 Sub2
	var_649_cvector = var_645_cvector + var_648_cvector; // 0x1575 Add2
	IsOverrideActive(var_650_bool); // 0x1576 Func
	var_658_bool = var_650_bool; // 0x1578 Push
	if(var_658_bool == 0) goto Label_5500; // 0x1579 JumpB
	var_632_bool = 0; // 0x157a MovB
	return 16; // 0x157b Return
	
Label_5500:
	StopWorld(); // 0x157c Func
	CameraTransit(var_649_cvector, var_647_cvector); // 0x157e Func
	var_659_float = GetByIndex(var_648_cvector, 0); // 0x1580 PushE
	var_660_float = GetByIndex(var_648_cvector, 2); // 0x1581 PushE
	Rotate(var_659_float, var_660_float); // 0x1582 Func
	CameraWaitForPlayFinish(); // 0x1584 Func
	ResumeWorld(); // 0x1586 Func
	var_632_bool = 1; // 0x1588 MovB
	return 16; // 0x1589 Return
}


func_5982(var_217_object)
{
	var_219_bool = 0; var_220_object = Obj(); var_221_float = 0; // 0x175f PushV
	var_220_object = var_217_object; // 0x1760 Mov
	var_221_float = 0.1; // 0x1761 MovF
	func_5708(var_219_bool, var_220_object, var_221_float); // 0x1762 NEW_2
	return 0; // 0x1764 Return
}


func_6494()
{
	var_118_object = Obj(); var_119_object = Obj(); // 0x195e PushV
	var_120_int = 210; // 0x195f PushI
	var_121_int = 2; // 0x1960 PushI
	var_122_int = 518105; // 0x1961 PushI
	CreateDiaryEntry(var_119_object, var_120_int, var_121_int, var_122_int); // 0x1962 Func
	var_123_bool = 0; var_124_object = Obj(); var_125_int = 0; // 0x1964 PushV
	var_124_object = var_119_object; // 0x1965 Mov
	var_125_int = 209; // 0x1966 MovI
	func_6559(var_123_bool, var_124_object, var_125_int); // 0x1967 NEW_2
	return 2; // 0x1969 Return
}


func_4448(var_0_bool, var_1317_int, var_1318_object)
{
	var_1320_object = Obj(); var_1321_bool = 0; var_1322_int = 0; var_1323_bool = 0; var_1324_object = Obj(); var_1325_bool = 0; var_1326_int = 0; var_1327_bool = 0; // 0x1160 PushV
	var_0_bool = var_1318_object; // 0x1161 TMov
	var_1328_bool = 0; var_1329_object = Obj(); var_1330_float = 0; // 0x1162 PushV
	var_1329_object = var_1318_object; // 0x1163 Mov
	var_1330_float = 70.0; // 0x1164 MovF
	func_5236(var_1329_object, var_1330_float); // 0x1165 NEW_2
	var_1331_bool = var_1328_bool == 0; // 0x1167 Not
	if(var_1331_bool == 0) goto Label_4459; // 0x1168 JumpB
	var_1317_int = -2; // 0x1169 MovI
	return 8; // 0x116a Return
	
Label_4459:
	CreateDialog(var_1324_object); // 0x116b Func
	var_1332_int = 0; // 0x116d PushV
	func_5811(var_1332_int); // 0x116e NEW_2
	SetNPCName(var_1332_int); // 0x1170 ObjFunc
	var_1333_int = 0; // 0x1172 PushV
	func_5809(var_1333_int); // 0x1173 NEW_2
	SetNPCDescription(var_1333_int); // 0x1175 ObjFunc
	var_1334_string = ""; // 0x1177 PushV
	func_5813(var_1334_string); // 0x1178 NEW_2
	SetPhoto(var_1334_string); // 0x117a ObjFunc
	var_1335_string = ""; // 0x117c PushV
	func_5815(var_1335_string); // 0x117d NEW_2
	SetPhoto2(var_1335_string); // 0x117f ObjFunc
	var_1336_int = 0; // 0x1181 PushV
	func_6811(var_1336_int); // 0x1182 NEW_2
	SetPlayerName(var_1336_int); // 0x1184 ObjFunc
	var_1326_int = -1; // 0x1186 MovI
	IsOverrideActive(var_1325_bool); // 0x1187 Func
	var_1337_bool = var_1325_bool; // 0x1189 Push
	if(var_1337_bool == 0) goto Label_4493; // 0x118a JumpB
	var_1317_int = -2; // 0x118b MovI
	return 8; // 0x118c Return
	
Label_4493:
	DoDialog(var_1324_object); // 0x118d Func
	var_1338_bool = 0; var_1339_object = Obj(); // 0x118f PushV
	var_1340_object = Obj(); // 0x1190 PushV
	func_5599(var_1340_object); // 0x1191 NEW_2
	var_1339_object = var_1340_object; // 0x1192 Mov
	func_5321(var_1338_bool, var_1339_object); // 0x1194 NEW_2
	var_1341_object = Obj(); var_1342_object = Obj(); // 0x1196 PushV
	var_1341_object = var_1318_object; // 0x1197 Mov
	var_1342_object = var_1324_object; // 0x1198 Mov
	TaskCall(24); // 0x1199 TaskCall
	func_4529(var_1343_object, var_1344_object, var_1345_string, var_1346_bool, var_1341_object, var_1342_object); // 0x119a NEW_2
	TaskReturn(); // 0x119b TaskReturn
	IsDialogEnd(var_1327_bool); // 0x119d ObjFunc
	
Label_4511:
	var_1371_bool = var_1327_bool == 0; // 0x119f Not
	if(var_1371_bool == 0) goto Label_4518; // 0x11a0 JumpB
	sync(); // 0x11a1 Func
	IsDialogEnd(var_1327_bool); // 0x11a3 ObjFunc
	goto Label_4511; // 0x11a5 Jump
	
Label_4518:
	var_1372_object = Obj(); // 0x11a6 PushV
	var_1372_object = var_1318_object; // 0x11a7 Mov
	func_5304(); // 0x11a8 NEW_2
	StopDialog(var_1324_object); // 0x11aa Func
	GetReturnValue(var_1326_int); // 0x11ac ObjFunc
	var_1317_int = var_1326_int; // 0x11ae Mov
	return 8; // 0x11af Return
}


func_5989()
{
	var_75_int = 1000; // 0x1766 PushI
	SetReturnValue(var_75_int); // 0x1767 ObjFunc
	return 0; // 0x1769 Return
}


func_362(var_0_bool, var_1_object, var_2_object, var_3_object, var_462_object, var_463_object)
{
	var_0_bool = var_463_object; // 0x16b TMov
	var_1_object = var_462_object; // 0x16c TMov
	var_3_object = 0; // 0x16d TMovB
	var_468_int = 1; // 0x16e PushI
	if(var_468_int == 0) goto Label_575; // 0x16f JumpB
	var_469_bool = 0; var_470_object = Obj(); // 0x170 PushV
	var_470_object = var_1_object; // 0x171 MovT
	func_6324(var_470_object); // 0x172 NEW_2
	if(var_469_bool == 0) goto Label_398; // 0x174 JumpB
	var_477_object = Obj(); var_478_object = Obj(); // 0x175 PushV
	var_477_object = var_1_object; // 0x176 MovT
	var_478_object = var_0_bool; // 0x177 MovT
	func_6054(); // 0x178 NEW_2
	var_481_string = ""; // 0x17a PushV
	var_481_string = "Neutral"; // 0x17b MovS
	func_605(var_463_object, var_481_string); // 0x17c NEW_2
	var_489_int = 517945; // 0x17e PushI
	SetMessage(var_489_int); // 0x17f TObjFunc
	ClearReplies(); // 0x181 TObjFunc
	var_490_int = 527026; // 0x183 PushI
	var_491_int = 28316; // 0x184 PushI
	var_492_int = 28315; // 0x185 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x186 TObjFunc
	var_493_int = 527044; // 0x188 PushI
	var_494_int = 28316; // 0x189 PushI
	var_495_int = 28334; // 0x18a PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x18b TObjFunc
	goto Label_575; // 0x18d Jump
	
Label_575:
	var_496_bool = 0; // 0x23f PushV
	func_5817(var_496_bool); // 0x240 NEW_2
	if(var_496_bool == 0) goto Label_590; // 0x242 JumpB
	
Label_579:
	lshWaitForAnimEnd(); // 0x243 Func
	var_497_object = var_3_object; // 0x245 PushT
	if(var_497_object == 0) goto Label_584; // 0x246 JumpB
	goto Label_589; // 0x247 Jump
	
Label_589:
	goto Label_604; // 0x24d Jump
	
Label_604:
	return 0; // 0x25c Return
	
Label_584:
	var_498_string = ""; // 0x248 PushV
	var_498_string = var_2_object; // 0x249 MovT
	func_5518(var_498_string); // 0x24a NEW_2
	goto Label_579; // 0x24c Jump
	
Label_590:
	var_499_string = "all"; // 0x24e PushS
	var_500_string = "idle"; // 0x24f PushS
	PlayAnimation(var_499_string, var_500_string); // 0x250 Func
	
Label_594:
	WaitForAnimEnd(); // 0x252 Func
	var_501_object = var_3_object; // 0x254 PushT
	if(var_501_object == 0) goto Label_599; // 0x255 JumpB
	goto Label_604; // 0x256 Jump
	
Label_599:
	var_502_string = "all"; // 0x257 PushS
	var_503_string = "idle"; // 0x258 PushS
	PlayAnimation(var_502_string, var_503_string); // 0x259 Func
	goto Label_594; // 0x25b Jump
	
Label_398:
	var_504_string = ""; // 0x18e PushV
	var_504_string = "Neutral"; // 0x18f MovS
	func_605(var_463_object, var_504_string); // 0x190 NEW_2
	var_505_int = 517955; // 0x192 PushI
	SetMessage(var_505_int); // 0x193 TObjFunc
	ClearReplies(); // 0x195 TObjFunc
	var_506_bool = 0; var_507_object = Obj(); // 0x197 PushV
	var_507_object = var_1_object; // 0x198 MovT
	func_6240(var_507_object); // 0x199 NEW_2
	if(var_506_bool == 0) goto Label_417; // 0x19b JumpB
	var_512_int = 527047; // 0x19c PushI
	var_513_int = 28341; // 0x19d PushI
	var_514_int = 28340; // 0x19e PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x19f TObjFunc
	
Label_417:
	var_515_bool = 0; // 0x1a1 PushV
	var_515_bool = 0; // 0x1a2 MovB
	var_516_bool = 0; // 0x1a3 PushV
	var_516_bool = 0; // 0x1a4 MovB
	var_517_bool = 0; var_518_object = Obj(); // 0x1a5 PushV
	var_518_object = var_1_object; // 0x1a6 MovT
	func_6300(var_518_object); // 0x1a7 NEW_2
	if(var_517_bool == 0) goto Label_433; // 0x1a9 JumpB
	var_523_bool = 0; var_524_object = Obj(); // 0x1aa PushV
	var_524_object = var_1_object; // 0x1ab MovT
	func_6276(var_524_object); // 0x1ac NEW_2
	var_529_bool = var_523_bool == 0; // 0x1ae Not
	if(var_529_bool == 0) goto Label_433; // 0x1af JumpB
	var_516_bool = 1; // 0x1b0 MovB
	
Label_433:
	if(var_516_bool == 0) goto Label_441; // 0x1b1 JumpB
	var_530_bool = 0; var_531_object = Obj(); // 0x1b2 PushV
	var_531_object = var_1_object; // 0x1b3 MovT
	func_6288(var_531_object); // 0x1b4 NEW_2
	var_536_bool = var_530_bool == 0; // 0x1b6 Not
	if(var_536_bool == 0) goto Label_441; // 0x1b7 JumpB
	var_515_bool = 1; // 0x1b8 MovB
	
Label_441:
	if(var_515_bool == 0) goto Label_447; // 0x1b9 JumpB
	var_537_int = 517957; // 0x1ba PushI
	var_538_int = 19090; // 0x1bb PushI
	var_539_int = 19089; // 0x1bc PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x1bd TObjFunc
	
Label_447:
	var_540_bool = 0; // 0x1bf PushV
	var_540_bool = 0; // 0x1c0 MovB
	var_541_bool = 0; // 0x1c1 PushV
	var_541_bool = 0; // 0x1c2 MovB
	var_542_bool = 0; var_543_object = Obj(); // 0x1c3 PushV
	var_543_object = var_1_object; // 0x1c4 MovT
	func_6312(var_543_object); // 0x1c5 NEW_2
	if(var_542_bool == 0) goto Label_462; // 0x1c7 JumpB
	var_548_bool = 0; var_549_object = Obj(); // 0x1c8 PushV
	var_549_object = var_1_object; // 0x1c9 MovT
	func_6288(var_549_object); // 0x1ca NEW_2
	if(var_548_bool == 0) goto Label_462; // 0x1cc JumpB
	var_541_bool = 1; // 0x1cd MovB
	
Label_462:
	if(var_541_bool == 0) goto Label_470; // 0x1ce JumpB
	var_550_bool = 0; var_551_object = Obj(); // 0x1cf PushV
	var_551_object = var_1_object; // 0x1d0 MovT
	func_6276(var_551_object); // 0x1d1 NEW_2
	var_552_bool = var_550_bool == 0; // 0x1d3 Not
	if(var_552_bool == 0) goto Label_470; // 0x1d4 JumpB
	var_540_bool = 1; // 0x1d5 MovB
	
Label_470:
	if(var_540_bool == 0) goto Label_476; // 0x1d6 JumpB
	var_553_int = 517960; // 0x1d7 PushI
	var_554_int = 28332; // 0x1d8 PushI
	var_555_int = 19092; // 0x1d9 PushI
	AddReply(var_553_int, var_554_int, var_555_int); // 0x1da TObjFunc
	
Label_476:
	var_556_bool = 0; // 0x1dc PushV
	var_556_bool = 0; // 0x1dd MovB
	var_557_bool = 0; // 0x1de PushV
	var_557_bool = 0; // 0x1df MovB
	var_558_bool = 0; var_559_object = Obj(); // 0x1e0 PushV
	var_559_object = var_1_object; // 0x1e1 MovT
	func_6312(var_559_object); // 0x1e2 NEW_2
	if(var_558_bool == 0) goto Label_491; // 0x1e4 JumpB
	var_560_bool = 0; var_561_object = Obj(); // 0x1e5 PushV
	var_561_object = var_1_object; // 0x1e6 MovT
	func_6276(var_561_object); // 0x1e7 NEW_2
	if(var_560_bool == 0) goto Label_491; // 0x1e9 JumpB
	var_557_bool = 1; // 0x1ea MovB
	
Label_491:
	if(var_557_bool == 0) goto Label_498; // 0x1eb JumpB
	var_562_bool = 0; var_563_object = Obj(); // 0x1ec PushV
	var_563_object = var_1_object; // 0x1ed MovT
	func_6252(var_563_object); // 0x1ee NEW_2
	if(var_562_bool == 0) goto Label_498; // 0x1f0 JumpB
	var_556_bool = 1; // 0x1f1 MovB
	
Label_498:
	if(var_556_bool == 0) goto Label_504; // 0x1f2 JumpB
	var_568_int = 517982; // 0x1f3 PushI
	var_569_int = 19116; // 0x1f4 PushI
	var_570_int = 19115; // 0x1f5 PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0x1f6 TObjFunc
	
Label_504:
	var_571_bool = 0; // 0x1f8 PushV
	var_571_bool = 0; // 0x1f9 MovB
	var_572_bool = 0; var_573_object = Obj(); // 0x1fa PushV
	var_573_object = var_1_object; // 0x1fb MovT
	func_6264(var_573_object); // 0x1fc NEW_2
	if(var_572_bool == 0) goto Label_517; // 0x1fe JumpB
	var_578_bool = 0; var_579_object = Obj(); // 0x1ff PushV
	var_579_object = var_1_object; // 0x200 MovT
	func_6336(var_579_object); // 0x201 NEW_2
	if(var_578_bool == 0) goto Label_517; // 0x203 JumpB
	var_571_bool = 1; // 0x204 MovB
	
Label_517:
	if(var_571_bool == 0) goto Label_523; // 0x205 JumpB
	var_584_int = 517973; // 0x206 PushI
	var_585_int = 28323; // 0x207 PushI
	var_586_int = 19106; // 0x208 PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0x209 TObjFunc
	
Label_523:
	var_587_bool = 0; // 0x20b PushV
	var_587_bool = 0; // 0x20c MovB
	var_588_bool = 0; // 0x20d PushV
	var_588_bool = 0; // 0x20e MovB
	var_589_bool = 0; var_590_object = Obj(); // 0x20f PushV
	var_590_object = var_1_object; // 0x210 MovT
	func_6432(var_590_object); // 0x211 NEW_2
	if(var_589_bool == 0) goto Label_539; // 0x213 JumpB
	var_595_bool = 0; var_596_object = Obj(); // 0x214 PushV
	var_596_object = var_1_object; // 0x215 MovT
	func_6444(var_596_object); // 0x216 NEW_2
	var_601_bool = var_595_bool == 0; // 0x218 Not
	if(var_601_bool == 0) goto Label_539; // 0x219 JumpB
	var_588_bool = 1; // 0x21a MovB
	
Label_539:
	if(var_588_bool == 0) goto Label_546; // 0x21b JumpB
	var_602_bool = 0; var_603_object = Obj(); // 0x21c PushV
	var_603_object = var_1_object; // 0x21d MovT
	func_6228(var_603_object); // 0x21e NEW_2
	if(var_602_bool == 0) goto Label_546; // 0x220 JumpB
	var_587_bool = 1; // 0x221 MovB
	
Label_546:
	if(var_587_bool == 0) goto Label_552; // 0x222 JumpB
	var_608_int = 518139; // 0x223 PushI
	var_609_int = 21635; // 0x224 PushI
	var_610_int = 19253; // 0x225 PushI
	AddReply(var_608_int, var_609_int, var_610_int); // 0x226 TObjFunc
	
Label_552:
	var_611_bool = 0; var_612_object = Obj(); // 0x228 PushV
	var_612_object = var_1_object; // 0x229 MovT
	func_6456(var_612_object); // 0x22a NEW_2
	if(var_611_bool == 0) goto Label_562; // 0x22c JumpB
	var_617_int = 520672; // 0x22d PushI
	var_618_int = 28325; // 0x22e PushI
	var_619_int = 21879; // 0x22f PushI
	AddReply(var_617_int, var_618_int, var_619_int); // 0x230 TObjFunc
	
Label_562:
	var_620_int = 520471; // 0x232 PushI
	var_621_int = -1; // 0x233 PushI
	var_622_int = 21674; // 0x234 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x235 TObjFunc
	var_623_int = 517956; // 0x237 PushI
	var_624_int = -1; // 0x238 PushI
	var_625_int = 19088; // 0x239 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x23a TObjFunc
	goto Label_575; // 0x23c Jump
}


func_5994()
{
	var_75_object = Obj(); var_76_int = 0; var_77_object = Obj(); var_78_int = 0; // 0x176a PushV
	var_79_string = "b1q03_2"; // 0x176b PushS
	var_80_int = 1; // 0x176c PushI
	SetVariable(var_79_string, var_80_int); // 0x176d Func
	var_81_object = Obj(); // 0x176f PushV
	func_6587(var_81_object); // 0x1770 NEW_2
	var_77_object = var_81_object; // 0x1771 Mov
	var_88_string = "b1q03GrifGotoDoberman"; // 0x1773 PushS
	var_89_string = "pt_b1q03_doberman"; // 0x1774 PushS
	var_90_int = 0; // 0x1775 PushI
	var_91_int = 518099; // 0x1776 PushI
	var_92_float = 0; // 0x1777 PushV
	func_5765(var_92_float); // 0x1778 NEW_2
	AddMark(var_88_string, var_89_string, var_90_int, var_91_int, var_92_float); // 0x177a ObjFunc
	func_6507(); // 0x177d NEW_2
	func_6494(); // 0x1780 NEW_2
	var_126_string = "b1q03"; // 0x1782 PushS
	GetVariable(var_126_string, var_78_int); // 0x1783 Func
	var_127_int = 0; // 0x1785 PushI
	var_128_bool = var_78_int != var_127_int; // 0x1786 Neq
	if(var_128_bool == 0) goto Label_6025; // 0x1787 JumpB
	return 4; // 0x1788 Return
	
Label_6025:
	var_129_object = Obj(); var_130_string = ""; // 0x1789 PushV
	var_130_string = "quest_b1_03"; // 0x178a MovS
	func_5636(var_129_object, var_130_string); // 0x178b NEW_2
	var_137_bool = 0; var_138_string = ""; var_139_string = ""; // 0x178d PushV
	var_138_string = "quest_b1_03"; // 0x178e MovS
	var_139_string = "place_doberman"; // 0x178f MovS
	func_5753(var_137_bool, var_138_string, var_139_string); // 0x1790 NEW_2
	return 4; // 0x1792 Return
}


func_6507()
{
	var_95_object = Obj(); var_96_object = Obj(); // 0x196b PushV
	var_97_int = 209; // 0x196c PushI
	var_98_int = 2; // 0x196d PushI
	var_99_int = 518104; // 0x196e PushI
	CreateDiaryEntry(var_96_object, var_97_int, var_98_int, var_99_int); // 0x196f Func
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0; // 0x1971 PushV
	var_101_object = var_96_object; // 0x1972 Mov
	var_102_int = -1; // 0x1973 MovI
	func_6559(var_100_bool, var_101_object, var_102_int); // 0x1974 NEW_2
	return 2; // 0x1976 Return
}


func_4974()
{
	var_1442_float = 0; var_1443_float = 0; // 0x136e PushV
	var_1444_int = 8; // 0x136f PushI
	var_1445_int = 16; // 0x1370 PushI
	rand(var_1443_float, var_1444_int, var_1445_int); // 0x1371 Func
	var_1446_int = 10; // 0x1373 PushI
	SetTimer(var_1446_int, var_1443_float); // 0x1374 Func
	return 2; // 0x1376 Return
}


func_4983()
{
	var_1441_int = 10; // 0x1377 PushI
	KillTimer(var_1441_int); // 0x1378 Func
	return 0; // 0x137a Return
}


func_6520()
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x1978 PushV
	var_101_int = 229; // 0x1979 PushI
	var_102_int = 2; // 0x197a PushI
	var_103_int = 519657; // 0x197b PushI
	CreateDiaryEntry(var_100_object, var_101_int, var_102_int, var_103_int); // 0x197c Func
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0; // 0x197e PushV
	var_105_object = var_100_object; // 0x197f Mov
	var_106_int = 227; // 0x1980 MovI
	func_6559(var_104_bool, var_105_object, var_106_int); // 0x1981 NEW_2
	return 2; // 0x1983 Return
}


func_3457(var_0_bool, var_1_object, var_2_object, var_3_object, var_1065_object, var_1066_object)
{
	var_0_bool = var_1066_object; // 0xd82 TMov
	var_1_object = var_1065_object; // 0xd83 TMov
	var_3_object = 0; // 0xd84 TMovB
	var_1071_int = 1; // 0xd85 PushI
	if(var_1071_int == 0) goto Label_3485; // 0xd86 JumpB
	var_1072_string = ""; // 0xd87 PushV
	var_1072_string = "Smile"; // 0xd88 MovS
	func_3515(var_1066_object, var_1072_string); // 0xd89 NEW_2
	var_1080_int = 520485; // 0xd8b PushI
	SetMessage(var_1080_int); // 0xd8c TObjFunc
	ClearReplies(); // 0xd8e TObjFunc
	var_1081_int = 520486; // 0xd90 PushI
	var_1082_int = -1; // 0xd91 PushI
	var_1083_int = 21689; // 0xd92 PushI
	AddReply(var_1081_int, var_1082_int, var_1083_int); // 0xd93 TObjFunc
	var_1084_int = 520487; // 0xd95 PushI
	var_1085_int = -1; // 0xd96 PushI
	var_1086_int = 21690; // 0xd97 PushI
	AddReply(var_1084_int, var_1085_int, var_1086_int); // 0xd98 TObjFunc
	goto Label_3485; // 0xd9a Jump
	
Label_3485:
	var_1087_bool = 0; // 0xd9d PushV
	func_5817(var_1087_bool); // 0xd9e NEW_2
	if(var_1087_bool == 0) goto Label_3500; // 0xda0 JumpB
	
Label_3489:
	lshWaitForAnimEnd(); // 0xda1 Func
	var_1088_object = var_3_object; // 0xda3 PushT
	if(var_1088_object == 0) goto Label_3494; // 0xda4 JumpB
	goto Label_3499; // 0xda5 Jump
	
Label_3499:
	goto Label_3514; // 0xdab Jump
	
Label_3514:
	return 0; // 0xdba Return
	
Label_3494:
	var_1089_string = ""; // 0xda6 PushV
	var_1089_string = var_2_object; // 0xda7 MovT
	func_5518(var_1089_string); // 0xda8 NEW_2
	goto Label_3489; // 0xdaa Jump
	
Label_3500:
	var_1090_string = "all"; // 0xdac PushS
	var_1091_string = "idle"; // 0xdad PushS
	PlayAnimation(var_1090_string, var_1091_string); // 0xdae Func
	
Label_3504:
	WaitForAnimEnd(); // 0xdb0 Func
	var_1092_object = var_3_object; // 0xdb2 PushT
	if(var_1092_object == 0) goto Label_3509; // 0xdb3 JumpB
	goto Label_3514; // 0xdb4 Jump
	
Label_3509:
	var_1093_string = "all"; // 0xdb5 PushS
	var_1094_string = "idle"; // 0xdb6 PushS
	PlayAnimation(var_1093_string, var_1094_string); // 0xdb7 Func
	goto Label_3504; // 0xdb9 Jump
}


func_6533()
{
	var_146_object = Obj(); var_147_object = Obj(); // 0x1985 PushV
	var_148_int = 234; // 0x1986 PushI
	var_149_int = 2; // 0x1987 PushI
	var_150_int = 519663; // 0x1988 PushI
	CreateDiaryEntry(var_147_object, var_148_int, var_149_int, var_150_int); // 0x1989 Func
	var_151_bool = 0; var_152_object = Obj(); var_153_int = 0; // 0x198b PushV
	var_152_object = var_147_object; // 0x198c Mov
	var_153_int = 227; // 0x198d MovI
	func_6559(var_151_bool, var_152_object, var_153_int); // 0x198e NEW_2
	return 2; // 0x1990 Return
}


func_5514()
{
	CameraSwitchToNormal(); // 0x158b Func
	return 0; // 0x158d Return
}


func_2954(var_0_bool, var_919_int, var_920_object)
{
	var_922_object = Obj(); var_923_bool = 0; var_924_int = 0; var_925_bool = 0; var_926_object = Obj(); var_927_bool = 0; var_928_int = 0; var_929_bool = 0; // 0xb8a PushV
	var_0_bool = var_920_object; // 0xb8b TMov
	var_930_bool = 0; var_931_object = Obj(); var_932_float = 0; // 0xb8c PushV
	var_931_object = var_920_object; // 0xb8d Mov
	var_932_float = 70.0; // 0xb8e MovF
	func_5236(var_931_object, var_932_float); // 0xb8f NEW_2
	var_933_bool = var_930_bool == 0; // 0xb91 Not
	if(var_933_bool == 0) goto Label_2965; // 0xb92 JumpB
	var_919_int = -2; // 0xb93 MovI
	return 8; // 0xb94 Return
	
Label_2965:
	CreateDialog(var_926_object); // 0xb95 Func
	var_934_int = 0; // 0xb97 PushV
	func_5811(var_934_int); // 0xb98 NEW_2
	SetNPCName(var_934_int); // 0xb9a ObjFunc
	var_935_int = 0; // 0xb9c PushV
	func_5809(var_935_int); // 0xb9d NEW_2
	SetNPCDescription(var_935_int); // 0xb9f ObjFunc
	var_936_string = ""; // 0xba1 PushV
	func_5813(var_936_string); // 0xba2 NEW_2
	SetPhoto(var_936_string); // 0xba4 ObjFunc
	var_937_string = ""; // 0xba6 PushV
	func_5815(var_937_string); // 0xba7 NEW_2
	SetPhoto2(var_937_string); // 0xba9 ObjFunc
	var_938_int = 0; // 0xbab PushV
	func_6811(var_938_int); // 0xbac NEW_2
	SetPlayerName(var_938_int); // 0xbae ObjFunc
	var_928_int = -1; // 0xbb0 MovI
	IsOverrideActive(var_927_bool); // 0xbb1 Func
	var_939_bool = var_927_bool; // 0xbb3 Push
	if(var_939_bool == 0) goto Label_2999; // 0xbb4 JumpB
	var_919_int = -2; // 0xbb5 MovI
	return 8; // 0xbb6 Return
	
Label_2999:
	DoDialog(var_926_object); // 0xbb7 Func
	var_940_bool = 0; var_941_object = Obj(); // 0xbb9 PushV
	var_942_object = Obj(); // 0xbba PushV
	func_5599(var_942_object); // 0xbbb NEW_2
	var_941_object = var_942_object; // 0xbbc Mov
	func_5321(var_940_bool, var_941_object); // 0xbbe NEW_2
	var_943_object = Obj(); var_944_object = Obj(); // 0xbc0 PushV
	var_943_object = var_920_object; // 0xbc1 Mov
	var_944_object = var_926_object; // 0xbc2 Mov
	TaskCall(12); // 0xbc3 TaskCall
	func_3035(var_945_object, var_946_object, var_947_string, var_948_bool, var_943_object, var_944_object); // 0xbc4 NEW_2
	TaskReturn(); // 0xbc5 TaskReturn
	IsDialogEnd(var_929_bool); // 0xbc7 ObjFunc
	
Label_3017:
	var_973_bool = var_929_bool == 0; // 0xbc9 Not
	if(var_973_bool == 0) goto Label_3024; // 0xbca JumpB
	sync(); // 0xbcb Func
	IsDialogEnd(var_929_bool); // 0xbcd ObjFunc
	goto Label_3017; // 0xbcf Jump
	
Label_3024:
	var_974_object = Obj(); // 0xbd0 PushV
	var_974_object = var_920_object; // 0xbd1 Mov
	func_5304(); // 0xbd2 NEW_2
	StopDialog(var_926_object); // 0xbd4 Func
	GetReturnValue(var_928_int); // 0xbd6 ObjFunc
	var_919_int = var_928_int; // 0xbd8 Mov
	return 8; // 0xbd9 Return
}


func_5518(var_409_string)
{
	var_410_bool = 0; var_411_float = 0; var_412_float = 0; var_413_bool = 0; var_414_float = 0; var_415_float = 0; // 0x158e PushV
	lshHasAnimation(var_413_bool, var_409_string); // 0x158f Func
	var_416_bool = var_413_bool; // 0x1591 Push
	if(var_416_bool == 0) goto Label_5529; // 0x1592 JumpB
	lshGetAnimTimes(var_409_string, var_414_float, var_415_float); // 0x1593 Func
	var_417_bool = 0; // 0x1595 PushB
	lshPlayAnimation(var_414_float, var_415_float, var_417_bool); // 0x1596 Func
	goto Label_5533; // 0x1598 Jump
	
Label_5533:
	return 6; // 0x159d Return
	
Label_5529:
	var_418_string = "Can't find lsh animation : "; // 0x1599 PushS
	var_419_int = var_418_string + var_409_string; // 0x159a Add
	Trace(var_419_int); // 0x159b Func
}


func_6546(var_113_object)
{
	var_114_object = Obj(); var_115_object = Obj(); // 0x1992 PushV
	GetDiaryRoot(var_115_object); // 0x1993 Func
	var_116_bool = var_115_object == 0; // 0x1995 Not
	if(var_116_bool == 0) goto Label_6556; // 0x1996 JumpB
	var_117_string = "Can't retrieve diary root"; // 0x1997 PushS
	Trace(var_117_string); // 0x1998 Func
	var_113_object = 0; // 0x199a MovB
	return 2; // 0x199b Return
	
Label_6556:
	var_113_object = var_115_object; // 0x199c Mov
	return 2; // 0x199d Return
}


func_6036()
{
	var_316_string = "b1q03_2"; // 0x1795 PushS
	var_317_int = 1000; // 0x1796 PushI
	SetVariable(var_316_string, var_317_int); // 0x1797 Func
	func_6468(); // 0x179a NEW_2
	return 0; // 0x179c Return
}


func_6045()
{
	var_294_string = "b1q03_2"; // 0x179e PushS
	var_295_int = -1; // 0x179f PushI
	SetVariable(var_294_string, var_295_int); // 0x17a0 Func
	func_6481(); // 0x17a3 NEW_2
	return 0; // 0x17a5 Return
}


func_5534(var_387_string, var_388_bool)
{
	var_391_bool = 0; var_392_float = 0; var_393_float = 0; var_394_bool = 0; var_395_float = 0; var_396_float = 0; // 0x159e PushV
	lshHasAnimation(var_394_bool, var_387_string); // 0x159f Func
	var_397_bool = var_394_bool; // 0x15a1 Push
	if(var_397_bool == 0) goto Label_5544; // 0x15a2 JumpB
	lshGetAnimTimes(var_387_string, var_395_float, var_396_float); // 0x15a3 Func
	lshPlayAnimation(var_395_float, var_396_float, var_388_bool); // 0x15a5 Func
	goto Label_5548; // 0x15a7 Jump
	
Label_5548:
	return 6; // 0x15ac Return
	
Label_5544:
	var_398_string = "Can't find lsh animation : "; // 0x15a8 PushS
	var_399_int = var_398_string + var_387_string; // 0x15a9 Add
	Trace(var_399_int); // 0x15aa Func
}


func_6559(var_104_bool, var_105_object, var_106_int)
{
	var_107_object = Obj(); var_108_object = Obj(); var_109_int = 0; var_110_object = Obj(); var_111_object = Obj(); var_112_int = 0; // 0x199f PushV
	var_113_object = Obj(); // 0x19a0 PushV
	func_6546(var_113_object); // 0x19a1 NEW_2
	var_110_object = var_113_object; // 0x19a2 Mov
	Find(var_106_int, var_111_object); // 0x19a4 ObjFunc
	var_118_bool = var_111_object == 0; // 0x19a6 Not
	if(var_118_bool == 0) goto Label_6574; // 0x19a7 JumpB
	var_119_string = "Can't find diary parent with id: "; // 0x19a8 PushS
	var_120_int = var_119_string + var_106_int; // 0x19a9 Add
	Trace(var_120_int); // 0x19aa Func
	var_104_bool = 0; // 0x19ac MovB
	return 6; // 0x19ad Return
	
Label_6574:
	AddChild(var_105_object); // 0x19ae ObjFunc
	var_121_int = 7; // 0x19b0 PushI
	SendWorldWndMessage(var_121_int); // 0x19b1 Func
	GetCategory(var_112_int); // 0x19b3 ObjFunc
	SetDiarySection(var_112_int); // 0x19b5 Func
	var_104_bool = 0; // 0x19b7 MovB
	return 6; // 0x19b8 Return
}


func_6054()
{
	var_479_string = "oob1Grif1"; // 0x17a7 PushS
	var_480_int = 1; // 0x17a8 PushI
	SetVariable(var_479_string, var_480_int); // 0x17a9 Func
	return 0; // 0x17ab Return
}


func_6060()
{
	var_347_string = "oob1Grif2"; // 0x17ad PushS
	var_348_int = 1; // 0x17ae PushI
	SetVariable(var_347_string, var_348_int); // 0x17af Func
	return 0; // 0x17b1 Return
}


func_5549(var_320_bool, var_321_string)
{
	var_322_bool = 0; var_323_bool = 0; // 0x15ad PushV
	var_324_bool = 0; // 0x15ae PushV
	func_5817(var_324_bool); // 0x15af NEW_2
	if(var_324_bool == 0) goto Label_5562; // 0x15b1 JumpB
	lshHasSpeech(var_323_bool, var_321_string); // 0x15b2 Func
	var_325_bool = var_323_bool; // 0x15b4 Push
	if(var_325_bool == 0) goto Label_5562; // 0x15b5 JumpB
	lshPlaySpeech(var_321_string); // 0x15b6 Func
	var_320_bool = 1; // 0x15b8 MovB
	return 2; // 0x15b9 Return
	
Label_5562:
	var_320_bool = 0; // 0x15ba MovB
	return 2; // 0x15bb Return
}


func_4529(var_0_bool, var_1_object, var_2_object, var_3_object, var_1341_object, var_1342_object)
{
	var_0_bool = var_1342_object; // 0x11b2 TMov
	var_1_object = var_1341_object; // 0x11b3 TMov
	var_3_object = 0; // 0x11b4 TMovB
	var_1347_int = 1; // 0x11b5 PushI
	if(var_1347_int == 0) goto Label_4557; // 0x11b6 JumpB
	var_1348_string = ""; // 0x11b7 PushV
	var_1348_string = "Sly"; // 0x11b8 MovS
	func_4587(var_1342_object, var_1348_string); // 0x11b9 NEW_2
	var_1356_int = 520501; // 0x11bb PushI
	SetMessage(var_1356_int); // 0x11bc TObjFunc
	ClearReplies(); // 0x11be TObjFunc
	var_1357_int = 520502; // 0x11c0 PushI
	var_1358_int = -1; // 0x11c1 PushI
	var_1359_int = 21705; // 0x11c2 PushI
	AddReply(var_1357_int, var_1358_int, var_1359_int); // 0x11c3 TObjFunc
	var_1360_int = 520503; // 0x11c5 PushI
	var_1361_int = -1; // 0x11c6 PushI
	var_1362_int = 21706; // 0x11c7 PushI
	AddReply(var_1360_int, var_1361_int, var_1362_int); // 0x11c8 TObjFunc
	goto Label_4557; // 0x11ca Jump
	
Label_4557:
	var_1363_bool = 0; // 0x11cd PushV
	func_5817(var_1363_bool); // 0x11ce NEW_2
	if(var_1363_bool == 0) goto Label_4572; // 0x11d0 JumpB
	
Label_4561:
	lshWaitForAnimEnd(); // 0x11d1 Func
	var_1364_object = var_3_object; // 0x11d3 PushT
	if(var_1364_object == 0) goto Label_4566; // 0x11d4 JumpB
	goto Label_4571; // 0x11d5 Jump
	
Label_4571:
	goto Label_4586; // 0x11db Jump
	
Label_4586:
	return 0; // 0x11ea Return
	
Label_4566:
	var_1365_string = ""; // 0x11d6 PushV
	var_1365_string = var_2_object; // 0x11d7 MovT
	func_5518(var_1365_string); // 0x11d8 NEW_2
	goto Label_4561; // 0x11da Jump
	
Label_4572:
	var_1366_string = "all"; // 0x11dc PushS
	var_1367_string = "idle"; // 0x11dd PushS
	PlayAnimation(var_1366_string, var_1367_string); // 0x11de Func
	
Label_4576:
	WaitForAnimEnd(); // 0x11e0 Func
	var_1368_object = var_3_object; // 0x11e2 PushT
	if(var_1368_object == 0) goto Label_4581; // 0x11e3 JumpB
	goto Label_4586; // 0x11e4 Jump
	
Label_4581:
	var_1369_string = "all"; // 0x11e5 PushS
	var_1370_string = "idle"; // 0x11e6 PushS
	PlayAnimation(var_1369_string, var_1370_string); // 0x11e7 Func
	goto Label_4576; // 0x11e9 Jump
}


func_6066()
{
	var_145_object = Obj(); var_146_string = ""; var_147_float = 0; // 0x17b3 PushV
	var_148_object = Obj(); // 0x17b4 PushV
	func_6587(var_148_object); // 0x17b5 NEW_2
	var_145_object = var_148_object; // 0x17b6 Mov
	var_146_string = "pt_b1q03_doberman"; // 0x17b8 MovS
	var_147_float = 2; // 0x17b9 MovI
	func_6604(var_145_object, var_146_string, var_147_float); // 0x17ba NEW_2
	var_168_object = Obj(); // 0x17bc PushV
	func_6587(var_168_object); // 0x17bd NEW_2
	ShowMap(var_168_object); // 0x17bf ObjFunc
	return 0; // 0x17c1 Return
}


func_4026(var_0_bool, var_1195_int, var_1196_object)
{
	var_1198_object = Obj(); var_1199_bool = 0; var_1200_int = 0; var_1201_bool = 0; var_1202_object = Obj(); var_1203_bool = 0; var_1204_int = 0; var_1205_bool = 0; // 0xfba PushV
	var_0_bool = var_1196_object; // 0xfbb TMov
	var_1206_bool = 0; var_1207_object = Obj(); var_1208_float = 0; // 0xfbc PushV
	var_1207_object = var_1196_object; // 0xfbd Mov
	var_1208_float = 70.0; // 0xfbe MovF
	func_5236(var_1207_object, var_1208_float); // 0xfbf NEW_2
	var_1209_bool = var_1206_bool == 0; // 0xfc1 Not
	if(var_1209_bool == 0) goto Label_4037; // 0xfc2 JumpB
	var_1195_int = -2; // 0xfc3 MovI
	return 8; // 0xfc4 Return
	
Label_4037:
	CreateDialog(var_1202_object); // 0xfc5 Func
	var_1210_int = 0; // 0xfc7 PushV
	func_5811(var_1210_int); // 0xfc8 NEW_2
	SetNPCName(var_1210_int); // 0xfca ObjFunc
	var_1211_int = 0; // 0xfcc PushV
	func_5809(var_1211_int); // 0xfcd NEW_2
	SetNPCDescription(var_1211_int); // 0xfcf ObjFunc
	var_1212_string = ""; // 0xfd1 PushV
	func_5813(var_1212_string); // 0xfd2 NEW_2
	SetPhoto(var_1212_string); // 0xfd4 ObjFunc
	var_1213_string = ""; // 0xfd6 PushV
	func_5815(var_1213_string); // 0xfd7 NEW_2
	SetPhoto2(var_1213_string); // 0xfd9 ObjFunc
	var_1214_int = 0; // 0xfdb PushV
	func_6811(var_1214_int); // 0xfdc NEW_2
	SetPlayerName(var_1214_int); // 0xfde ObjFunc
	var_1204_int = -1; // 0xfe0 MovI
	IsOverrideActive(var_1203_bool); // 0xfe1 Func
	var_1215_bool = var_1203_bool; // 0xfe3 Push
	if(var_1215_bool == 0) goto Label_4071; // 0xfe4 JumpB
	var_1195_int = -2; // 0xfe5 MovI
	return 8; // 0xfe6 Return
	
Label_4071:
	DoDialog(var_1202_object); // 0xfe7 Func
	var_1216_bool = 0; var_1217_object = Obj(); // 0xfe9 PushV
	var_1218_object = Obj(); // 0xfea PushV
	func_5599(var_1218_object); // 0xfeb NEW_2
	var_1217_object = var_1218_object; // 0xfec Mov
	func_5321(var_1216_bool, var_1217_object); // 0xfee NEW_2
	var_1219_object = Obj(); var_1220_object = Obj(); // 0xff0 PushV
	var_1219_object = var_1196_object; // 0xff1 Mov
	var_1220_object = var_1202_object; // 0xff2 Mov
	TaskCall(20); // 0xff3 TaskCall
	func_4107(var_1221_object, var_1222_object, var_1223_string, var_1224_bool, var_1219_object, var_1220_object); // 0xff4 NEW_2
	TaskReturn(); // 0xff5 TaskReturn
	IsDialogEnd(var_1205_bool); // 0xff7 ObjFunc
	
Label_4089:
	var_1249_bool = var_1205_bool == 0; // 0xff9 Not
	if(var_1249_bool == 0) goto Label_4096; // 0xffa JumpB
	sync(); // 0xffb Func
	IsDialogEnd(var_1205_bool); // 0xffd ObjFunc
	goto Label_4089; // 0xfff Jump
	
Label_4096:
	var_1250_object = Obj(); // 0x1000 PushV
	var_1250_object = var_1196_object; // 0x1001 Mov
	func_5304(); // 0x1002 NEW_2
	StopDialog(var_1202_object); // 0x1004 Func
	GetReturnValue(var_1204_int); // 0x1006 ObjFunc
	var_1195_int = var_1204_int; // 0x1008 Mov
	return 8; // 0x1009 Return
}


func_3515(var_2_object, var_1072_string)
{
	var_1073_bool = 0; // 0xdbc PushV
	func_5817(var_1073_bool); // 0xdbd NEW_2
	var_1074_bool = var_1073_bool == 0; // 0xdbf Not
	if(var_1074_bool == 0) goto Label_3522; // 0xdc0 JumpB
	return 0; // 0xdc1 Return
	
Label_3522:
	var_1075_bool = var_1072_string == var_2_object; // 0xdc2 Eq
	if(var_1075_bool == 0) goto Label_3525; // 0xdc3 JumpB
	return 0; // 0xdc4 Return
	
Label_3525:
	var_1076_string = ""; var_1077_bool = 0; // 0xdc5 PushV
	var_1076_string = var_1072_string; // 0xdc6 Mov
	var_1078_string = ""; // 0xdc7 PushS
	var_1079_bool = var_1072_string == var_1078_string; // 0xdc8 Eq
	if(var_1079_bool == 0) goto Label_3532; // 0xdc9 JumpB
	var_1077_bool = 0; // 0xdca MovB
	goto Label_3533; // 0xdcb Jump
	
Label_3533:
	func_5534(var_1076_string, var_1077_bool); // 0xdcd NEW_2
	var_2_object = var_1072_string; // 0xdcf TMov
	return 0; // 0xdd0 Return
	
Label_3532:
	var_1077_bool = 1; // 0xdcc MovB
}


func_5564()
{
	var_70_bool = 0; // 0x15bc PushV
	func_5817(var_70_bool); // 0x15bd NEW_2
	if(var_70_bool == 0) goto Label_5570; // 0x15bf JumpB
	lshStopSpeech(); // 0x15c0 Func
	
Label_5570:
	return 0; // 0x15c2 Return
}


func_6587(var_88_object)
{
	var_89_object = Obj(); var_90_object = Obj(); var_91_object = Obj(); var_92_object = Obj(); // 0x19bb PushV
	GetMainOutdoorScene(var_91_object); // 0x19bc Func
	var_93_bool = var_91_object == 0; // 0x19be NullEq
	if(var_93_bool == 0) goto Label_6598; // 0x19bf JumpB
	var_94_string = "Can't find main outdoor scene"; // 0x19c0 PushS
	Trace(var_94_string); // 0x19c1 Func
	var_92_object = 0; // 0x19c3 SetNull
	var_88_object = var_92_object; // 0x19c4 Mov
	return 4; // 0x19c5 Return
	
Label_6598:
	GetMap(var_92_object); // 0x19c6 ObjFunc
	var_88_object = var_92_object; // 0x19c8 Mov
	return 4; // 0x19c9 Return
}


func_6082(var_171_object)
{
	var_173_string = "samopal ammo5 is given"; // 0x17c3 PushS
	Trace(var_173_string); // 0x17c4 Func
	var_174_object = Obj(); var_175_string = ""; var_176_int = 0; // 0x17c6 PushV
	var_174_object = var_171_object; // 0x17c7 Mov
	var_175_string = "samopal_ammo"; // 0x17c8 MovS
	var_176_int = 5; // 0x17c9 MovI
	func_5695(var_174_object, var_175_string, var_176_int); // 0x17ca NEW_2
	return 0; // 0x17cc Return
}


func_5571(var_128_string, var_129_int, var_130_int)
{
	var_131_bool = 0; var_132_bool = 0; // 0x15c3 PushV
	var_133_bool = 0; var_134_int = 0; var_135_int = 0; // 0x15c4 PushV
	var_134_int = var_129_int; // 0x15c5 Mov
	var_135_int = var_130_int; // 0x15c6 Mov
	func_5626(var_133_bool, var_134_int, var_135_int); // 0x15c7 NEW_2
	if(var_133_bool == 0) goto Label_5581; // 0x15c9 JumpB
	var_138_int = 0; // 0x15ca PushI
	AddItem(var_132_bool, var_128_string, var_138_int); // 0x15cb Func
	
Label_5581:
	return 2; // 0x15cd Return
}


func_6604(var_145_object, var_146_string, var_147_float)
{
	var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_object = Obj(); var_152_bool = 0; var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_object = Obj(); var_156_bool = 0; // 0x19cc PushV
	GetMainOutdoorScene(var_155_object); // 0x19cd Func
	var_157_bool = var_155_object == 0; // 0x19cf NullEq
	if(var_157_bool == 0) goto Label_6613; // 0x19d0 JumpB
	var_158_string = "Can't find main outdoor scene"; // 0x19d1 PushS
	Trace(var_158_string); // 0x19d2 Func
	return 8; // 0x19d4 Return
	
Label_6613:
	GetLocator(var_146_string, var_156_bool, var_153_cvector, var_154_cvector); // 0x19d5 ObjFunc
	var_159_bool = var_156_bool == 0; // 0x19d7 Not
	if(var_159_bool == 0) goto Label_6623; // 0x19d8 JumpB
	var_160_string = "Warning: outdoor scene locator "; // 0x19d9 PushS
	var_161_int = var_160_string + var_146_string; // 0x19da Add
	var_162_string = " doesnt exist"; // 0x19db PushS
	var_163_int = var_161_int + var_162_string; // 0x19dc Add
	Trace(var_163_int); // 0x19dd Func
	
Label_6623:
	GetMap(var_145_object); // 0x19df ObjFunc
	var_164_bool = var_145_object == 0; // 0x19e1 NullEq
	if(var_164_bool == 0) goto Label_6631; // 0x19e2 JumpB
	var_165_string = "Can't find map"; // 0x19e3 PushS
	Trace(var_165_string); // 0x19e4 Func
	return 8; // 0x19e6 Return
	
Label_6631:
	var_166_float = GetByIndex(var_153_cvector, 0); // 0x19e7 PushE
	var_167_float = GetByIndex(var_153_cvector, 2); // 0x19e8 PushE
	SetMapParams(var_166_float, var_167_float, var_147_float); // 0x19e9 ObjFunc
	return 8; // 0x19eb Return
}


func_6093()
{
	var_201_int = 0; var_202_int = 0; // 0x17cd PushV
	var_203_string = "b1q03"; // 0x17ce PushS
	GetVariable(var_203_string, var_202_int); // 0x17cf Func
	var_204_int = 1000; // 0x17d1 PushI
	var_205_bool = var_202_int == var_204_int; // 0x17d2 Eq
	if(var_205_bool == 0) goto Label_6101; // 0x17d3 JumpB
	return 2; // 0x17d4 Return
	
Label_6101:
	var_206_bool = 0; var_207_string = ""; var_208_string = ""; // 0x17d5 PushV
	var_207_string = "quest_b1_03"; // 0x17d6 MovS
	var_208_string = "cleanup"; // 0x17d7 MovS
	func_5753(var_206_bool, var_207_string, var_208_string); // 0x17d8 NEW_2
	var_209_string = "b1q03"; // 0x17da PushS
	var_210_int = 1000; // 0x17db PushI
	SetVariable(var_209_string, var_210_int); // 0x17dc Func
	return 2; // 0x17de Return
}


func_5582(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int)
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_bool = 0; // 0x15ce PushV
	var_148_bool = 0; var_149_int = 0; var_150_int = 0; // 0x15cf PushV
	var_149_int = var_140_int; // 0x15d0 Mov
	var_150_int = var_141_int; // 0x15d1 Mov
	func_5626(var_148_bool, var_149_int, var_150_int); // 0x15d2 NEW_2
	if(var_148_bool == 0) goto Label_5598; // 0x15d4 JumpB
	var_151_int = var_143_int - var_142_int; // 0x15d5 Sub
	var_152_int = 1; // 0x15d6 PushI
	var_153_int = var_151_int + var_152_int; // 0x15d7 Add
	irand(var_146_int, var_153_int); // 0x15d8 Func
	var_154_int = 0; // 0x15da PushI
	var_155_int = var_146_int + var_142_int; // 0x15db Add
	AddItem(var_147_bool, var_139_string, var_154_int, var_155_int); // 0x15dc Func
	
Label_5598:
	return 4; // 0x15de Return
}


func_3035(var_0_bool, var_1_object, var_2_object, var_3_object, var_943_object, var_944_object)
{
	var_0_bool = var_944_object; // 0xbdc TMov
	var_1_object = var_943_object; // 0xbdd TMov
	var_3_object = 0; // 0xbde TMovB
	var_949_int = 1; // 0xbdf PushI
	if(var_949_int == 0) goto Label_3063; // 0xbe0 JumpB
	var_950_string = ""; // 0xbe1 PushV
	var_950_string = "Smile"; // 0xbe2 MovS
	func_3093(var_944_object, var_950_string); // 0xbe3 NEW_2
	var_958_int = 520477; // 0xbe5 PushI
	SetMessage(var_958_int); // 0xbe6 TObjFunc
	ClearReplies(); // 0xbe8 TObjFunc
	var_959_int = 520478; // 0xbea PushI
	var_960_int = -1; // 0xbeb PushI
	var_961_int = 21681; // 0xbec PushI
	AddReply(var_959_int, var_960_int, var_961_int); // 0xbed TObjFunc
	var_962_int = 520479; // 0xbef PushI
	var_963_int = -1; // 0xbf0 PushI
	var_964_int = 21682; // 0xbf1 PushI
	AddReply(var_962_int, var_963_int, var_964_int); // 0xbf2 TObjFunc
	goto Label_3063; // 0xbf4 Jump
	
Label_3063:
	var_965_bool = 0; // 0xbf7 PushV
	func_5817(var_965_bool); // 0xbf8 NEW_2
	if(var_965_bool == 0) goto Label_3078; // 0xbfa JumpB
	
Label_3067:
	lshWaitForAnimEnd(); // 0xbfb Func
	var_966_object = var_3_object; // 0xbfd PushT
	if(var_966_object == 0) goto Label_3072; // 0xbfe JumpB
	goto Label_3077; // 0xbff Jump
	
Label_3077:
	goto Label_3092; // 0xc05 Jump
	
Label_3092:
	return 0; // 0xc14 Return
	
Label_3072:
	var_967_string = ""; // 0xc00 PushV
	var_967_string = var_2_object; // 0xc01 MovT
	func_5518(var_967_string); // 0xc02 NEW_2
	goto Label_3067; // 0xc04 Jump
	
Label_3078:
	var_968_string = "all"; // 0xc06 PushS
	var_969_string = "idle"; // 0xc07 PushS
	PlayAnimation(var_968_string, var_969_string); // 0xc08 Func
	
Label_3082:
	WaitForAnimEnd(); // 0xc0a Func
	var_970_object = var_3_object; // 0xc0c PushT
	if(var_970_object == 0) goto Label_3087; // 0xc0d JumpB
	goto Label_3092; // 0xc0e Jump
	
Label_3087:
	var_971_string = "all"; // 0xc0f PushS
	var_972_string = "idle"; // 0xc10 PushS
	PlayAnimation(var_971_string, var_972_string); // 0xc11 Func
	goto Label_3082; // 0xc13 Jump
}


func_5599(var_288_object)
{
	var_289_object = Obj(); var_290_object = Obj(); // 0x15df PushV
	self(var_290_object); // 0x15e0 Func
	var_288_object = var_290_object; // 0x15e2 Mov
	return 2; // 0x15e3 Return
}


func_6111()
{
	var_357_object = Obj(); var_358_object = Obj(); // 0x17df PushV
	var_359_object = Obj(); // 0x17e0 PushV
	func_6587(var_359_object); // 0x17e1 NEW_2
	var_358_object = var_359_object; // 0x17e2 Mov
	var_360_string = "b1q02GrifGotoLaska"; // 0x17e4 PushS
	var_361_string = "pt_map_laska"; // 0x17e5 PushS
	var_362_int = 3; // 0x17e6 PushI
	var_363_int = 518143; // 0x17e7 PushI
	var_364_float = 0; // 0x17e8 PushV
	func_5765(var_364_float); // 0x17e9 NEW_2
	AddMark(var_360_string, var_361_string, var_362_int, var_363_int, var_364_float); // 0x17eb ObjFunc
	return 2; // 0x17ed Return
}


func_5605(var_253_cvector, var_254_cvector)
{
	var_256_float = 0; var_257_float = 0; // 0x15e5 PushV
	var_258_int = var_254_cvector | var_254_cvector; // 0x15e6 Or
	var_257_float = sqrt(var_258_int); // 0x15e7 Sqrt2
	var_259_float = 0.0; // 0x15e8 PushF
	var_260_bool = var_257_float < var_259_float; // 0x15e9 LT
	if(var_260_bool == 0) goto Label_5613; // 0x15ea JumpB
	var_253_cvector = CVector(0.0, 0.0, 0.0); // 0x15eb MovV
	return 2; // 0x15ec Return
	
Label_5613:
	var_253_cvector = var_254_cvector / var_254_cvector; // 0x15ed Div2
	return 2; // 0x15ee Return
}


func_5094()
{
	var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_bool = 0; var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0; // 0x13e6 PushV
	WaitForAnimEnd(); // 0x13e7 Func
	var_85_bool = 0; // 0x13e9 PushV
	func_5231(var_85_bool); // 0x13ea NEW_2
	var_86_bool = var_85_bool == 0; // 0x13ec Not
	if(var_86_bool == 0) goto Label_5103; // 0x13ed JumpB
	return 12; // 0x13ee Return
	
Label_5103:
	var_87_int = 0; // 0x13ef PushV
	func_5792(var_87_int); // 0x13f0 NEW_2
	var_79_int = var_87_int; // 0x13f1 Mov
	var_80_int = 0; // 0x13f3 MovI
	
Label_5108:
	var_100_bool = 0; // 0x13f4 PushV
	var_100_bool = 0; // 0x13f5 MovB
	var_101_int = 5; // 0x13f6 PushI
	var_102_bool = var_80_int < var_101_int; // 0x13f7 LT
	if(var_102_bool == 0) goto Label_5118; // 0x13f8 JumpB
	var_103_bool = 0; // 0x13f9 PushV
	func_5231(var_103_bool); // 0x13fa NEW_2
	if(var_103_bool == 0) goto Label_5118; // 0x13fc JumpB
	var_100_bool = 1; // 0x13fd MovB
	
Label_5118:
	if(var_100_bool == 0) goto Label_5160; // 0x13fe JumpB
	var_104_bool = var_79_int == 0; // 0x13ff Not
	if(var_104_bool == 0) goto Label_5128; // 0x1400 JumpB
	var_105_int = 3; // 0x1401 PushI
	Sleep(var_105_int, var_81_bool); // 0x1402 Func
	var_106_bool = var_81_bool == 0; // 0x1404 Not
	if(var_106_bool == 0) goto Label_5127; // 0x1405 JumpB
	goto Label_5160; // 0x1406 Jump
	
Label_5160:
	ResetAAS(); // 0x1428 Func
	return 12; // 0x142a Return
	
Label_5127:
	goto Label_5149; // 0x1407 Jump
	
Label_5149:
	var_107_bool = 0; // 0x141d PushV
	func_5163(var_107_bool); // 0x141e NEW_2
	var_108_bool = var_107_bool == 0; // 0x1420 Not
	if(var_108_bool == 0) goto Label_5155; // 0x1421 JumpB
	goto Label_5160; // 0x1422 Jump
	
Label_5155:
	ResetAAS(); // 0x1423 Func
	var_109_int = 1; // 0x1425 PushI
	var_80_int = var_80_int + var_109_int; // 0x1426 Add2
	goto Label_5108; // 0x1427 Jump
	
Label_5128:
	irand(var_82_int, var_79_int); // 0x1408 Func
	var_110_int = 5; // 0x140a PushI
	irand(var_83_int, var_110_int); // 0x140b Func
	var_111_int = 0; // 0x140d PushI
	var_112_bool = var_83_int != var_111_int; // 0x140e Neq
	if(var_112_bool == 0) goto Label_5137; // 0x140f JumpB
	var_82_int = 0; // 0x1410 MovI
	
Label_5137:
	var_113_string = "all"; // 0x1411 PushS
	var_114_string = ""; var_115_int = 0; // 0x1412 PushV
	var_115_int = var_82_int; // 0x1413 Mov
	func_5785(var_114_string, var_115_int); // 0x1414 NEW_2
	PlayAnimation(var_113_string, var_114_string); // 0x1416 Func
	WaitForAnimEnd(var_84_bool); // 0x1418 Func
	var_116_bool = var_84_bool == 0; // 0x141a Not
	if(var_116_bool == 0) goto Label_5149; // 0x141b JumpB
	goto Label_5160; // 0x141c Jump
}


func_4587(var_2_object, var_1348_string)
{
	var_1349_bool = 0; // 0x11ec PushV
	func_5817(var_1349_bool); // 0x11ed NEW_2
	var_1350_bool = var_1349_bool == 0; // 0x11ef Not
	if(var_1350_bool == 0) goto Label_4594; // 0x11f0 JumpB
	return 0; // 0x11f1 Return
	
Label_4594:
	var_1351_bool = var_1348_string == var_2_object; // 0x11f2 Eq
	if(var_1351_bool == 0) goto Label_4597; // 0x11f3 JumpB
	return 0; // 0x11f4 Return
	
Label_4597:
	var_1352_string = ""; var_1353_bool = 0; // 0x11f5 PushV
	var_1352_string = var_1348_string; // 0x11f6 Mov
	var_1354_string = ""; // 0x11f7 PushS
	var_1355_bool = var_1348_string == var_1354_string; // 0x11f8 Eq
	if(var_1355_bool == 0) goto Label_4604; // 0x11f9 JumpB
	var_1353_bool = 0; // 0x11fa MovB
	goto Label_4605; // 0x11fb Jump
	
Label_4605:
	func_5534(var_1352_string, var_1353_bool); // 0x11fd NEW_2
	var_2_object = var_1348_string; // 0x11ff TMov
	return 0; // 0x1200 Return
	
Label_4604:
	var_1353_bool = 1; // 0x11fc MovB
}


func_6637()
{
	var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0; // 0x19ed PushV
	var_102_int = 0; // 0x19ee PushI
	ClearSubContainer(var_102_int); // 0x19ef Func
	var_103_int = 0; // 0x19f1 PushV
	func_5770(var_103_int); // 0x19f2 NEW_2
	var_100_int = var_103_int; // 0x19f3 Mov
	var_104_int = 0; var_105_string = ""; // 0x19f5 PushV
	var_105_string = "Rifle"; // 0x19f6 MovS
	func_6806(var_104_int, var_105_string); // 0x19f7 NEW_2
	var_108_int = 0; // 0x19f9 PushI
	var_109_int = 1; // 0x19fa PushI
	AddItem(var_98_bool, var_104_int, var_108_int, var_109_int); // 0x19fb Func
	var_110_int = 0; var_111_string = ""; // 0x19fd PushV
	var_111_string = "Revolver"; // 0x19fe MovS
	func_6806(var_110_int, var_111_string); // 0x19ff NEW_2
	var_112_int = 0; // 0x1a01 PushI
	var_113_int = 1; // 0x1a02 PushI
	AddItem(var_98_bool, var_110_int, var_112_int, var_113_int); // 0x1a03 Func
	var_114_int = 0; var_115_string = ""; // 0x1a05 PushV
	var_115_string = "Knife"; // 0x1a06 MovS
	func_6806(var_114_int, var_115_string); // 0x1a07 NEW_2
	var_116_int = 0; // 0x1a09 PushI
	var_117_int = 1; // 0x1a0a PushI
	AddItem(var_98_bool, var_114_int, var_116_int, var_117_int); // 0x1a0b Func
	var_118_int = 10; // 0x1a0d PushI
	var_119_bool = var_100_int != var_118_int; // 0x1a0e Neq
	if(var_119_bool == 0) goto Label_6681; // 0x1a0f JumpB
	var_120_int = 0; var_121_string = ""; // 0x1a10 PushV
	var_121_string = "tvirin"; // 0x1a11 MovS
	func_6806(var_120_int, var_121_string); // 0x1a12 NEW_2
	var_122_int = 0; // 0x1a14 PushI
	var_123_int = 1; // 0x1a15 PushI
	AddItem(var_98_bool, var_120_int, var_122_int, var_123_int); // 0x1a16 Func
	goto Label_6689; // 0x1a18 Jump
	
Label_6689:
	var_124_int = 0; var_125_string = ""; // 0x1a21 PushV
	var_125_string = "lockpick"; // 0x1a22 MovS
	func_6806(var_124_int, var_125_string); // 0x1a23 NEW_2
	var_126_int = 0; // 0x1a25 PushI
	var_127_int = 3; // 0x1a26 PushI
	AddItem(var_98_bool, var_124_int, var_126_int, var_127_int); // 0x1a27 Func
	var_128_string = ""; var_129_int = 0; var_130_int = 0; // 0x1a29 PushV
	var_128_string = "Scalpel"; // 0x1a2a MovS
	var_129_int = 1; // 0x1a2b MovI
	var_130_int = 2; // 0x1a2c MovI
	func_5571(var_128_string, var_129_int, var_130_int); // 0x1a2d NEW_2
	var_139_string = ""; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; // 0x1a2f PushV
	var_139_string = "revolver_ammo"; // 0x1a30 MovS
	var_140_int = 1; // 0x1a31 MovI
	var_141_int = 1; // 0x1a32 MovI
	var_142_int = 5; // 0x1a33 MovI
	var_143_int = 10; // 0x1a34 MovI
	func_5582(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int); // 0x1a35 NEW_2
	var_156_string = ""; var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; // 0x1a37 PushV
	var_156_string = "rifle_ammo"; // 0x1a38 MovS
	var_157_int = 1; // 0x1a39 MovI
	var_158_int = 1; // 0x1a3a MovI
	var_159_int = 5; // 0x1a3b MovI
	var_160_int = 20; // 0x1a3c MovI
	func_5582(var_156_string, var_157_int, var_158_int, var_159_int, var_160_int); // 0x1a3d NEW_2
	var_161_int = 100; // 0x1a3f PushI
	irand(var_99_int, var_161_int); // 0x1a40 Func
	var_162_int = 0; // 0x1a42 PushI
	var_163_bool = var_99_int != var_162_int; // 0x1a43 Neq
	if(var_163_bool == 0) goto Label_6732; // 0x1a44 JumpB
	var_164_int = 0; var_165_string = ""; // 0x1a45 PushV
	var_165_string = "kerosene"; // 0x1a46 MovS
	func_6806(var_164_int, var_165_string); // 0x1a47 NEW_2
	var_166_int = 0; // 0x1a49 PushI
	AddItem(var_98_bool, var_164_int, var_166_int, var_99_int); // 0x1a4a Func
	
Label_6732:
	var_167_int = 3; // 0x1a4c PushI
	var_168_bool = var_100_int >= var_167_int; // 0x1a4d GE
	if(var_168_bool == 0) goto Label_6751; // 0x1a4e JumpB
	var_169_int = 0; var_170_string = ""; // 0x1a4f PushV
	var_170_string = "halfboot_repel"; // 0x1a50 MovS
	func_6806(var_169_int, var_170_string); // 0x1a51 NEW_2
	var_171_int = 0; // 0x1a53 PushI
	var_172_int = 1; // 0x1a54 PushI
	AddItem(var_98_bool, var_169_int, var_171_int, var_172_int); // 0x1a55 Func
	var_173_int = 0; var_174_string = ""; // 0x1a57 PushV
	var_174_string = "boot_repel"; // 0x1a58 MovS
	func_6806(var_173_int, var_174_string); // 0x1a59 NEW_2
	var_175_int = 0; // 0x1a5b PushI
	var_176_int = 1; // 0x1a5c PushI
	AddItem(var_98_bool, var_173_int, var_175_int, var_176_int); // 0x1a5d Func
	
Label_6751:
	var_177_int = 9; // 0x1a5f PushI
	var_178_bool = var_100_int >= var_177_int; // 0x1a60 GE
	if(var_178_bool == 0) goto Label_6778; // 0x1a61 JumpB
	var_179_int = 0; var_180_string = ""; // 0x1a62 PushV
	var_180_string = "boot_army"; // 0x1a63 MovS
	func_6806(var_179_int, var_180_string); // 0x1a64 NEW_2
	var_181_int = 0; // 0x1a66 PushI
	var_182_int = 1; // 0x1a67 PushI
	AddItem(var_98_bool, var_179_int, var_181_int, var_182_int); // 0x1a68 Func
	var_183_int = 0; var_184_string = ""; // 0x1a6a PushV
	var_184_string = "balahon"; // 0x1a6b MovS
	func_6806(var_183_int, var_184_string); // 0x1a6c NEW_2
	var_185_int = 0; // 0x1a6e PushI
	var_186_int = 1; // 0x1a6f PushI
	AddItem(var_98_bool, var_183_int, var_185_int, var_186_int); // 0x1a70 Func
	var_187_int = 0; var_188_string = ""; // 0x1a72 PushV
	var_188_string = "glove_army"; // 0x1a73 MovS
	func_6806(var_187_int, var_188_string); // 0x1a74 NEW_2
	var_189_int = 0; // 0x1a76 PushI
	var_190_int = 1; // 0x1a77 PushI
	AddItem(var_98_bool, var_187_int, var_189_int, var_190_int); // 0x1a78 Func
	
Label_6778:
	var_191_int = 0; // 0x1a7a PushV
	func_6828(var_191_int); // 0x1a7b NEW_2
	var_101_int = var_191_int; // 0x1a7c Mov
	var_195_int = 0; // 0x1a7e PushI
	var_196_bool = var_101_int == var_195_int; // 0x1a7f Eq
	if(var_196_bool == 0) goto Label_6794; // 0x1a80 JumpB
	var_197_int = 0; var_198_string = ""; // 0x1a81 PushV
	var_198_string = "Gun_danko"; // 0x1a82 MovS
	func_6806(var_197_int, var_198_string); // 0x1a83 NEW_2
	var_199_int = 0; // 0x1a85 PushI
	var_200_int = 1; // 0x1a86 PushI
	AddItem(var_98_bool, var_197_int, var_199_int, var_200_int); // 0x1a87 Func
	goto Label_6805; // 0x1a89 Jump
	
Label_6805:
	return 8; // 0x1a95 Return
	
Label_6794:
	var_201_int = 2; // 0x1a8a PushI
	var_202_bool = var_101_int == var_201_int; // 0x1a8b Eq
	if(var_202_bool == 0) goto Label_6805; // 0x1a8c JumpB
	var_203_int = 0; var_204_string = ""; // 0x1a8d PushV
	var_204_string = "Gun"; // 0x1a8e MovS
	func_6806(var_203_int, var_204_string); // 0x1a8f NEW_2
	var_205_int = 0; // 0x1a91 PushI
	var_206_int = 1; // 0x1a92 PushI
	AddItem(var_98_bool, var_203_int, var_205_int, var_206_int); // 0x1a93 Func
	
Label_6681:
	var_207_int = 0; var_208_string = ""; // 0x1a19 PushV
	var_208_string = "tvirin"; // 0x1a1a MovS
	func_6806(var_207_int, var_208_string); // 0x1a1b NEW_2
	var_209_int = 0; // 0x1a1d PushI
	var_210_int = 4; // 0x1a1e PushI
	AddItem(var_98_bool, var_207_int, var_209_int, var_210_int); // 0x1a1f Func
}


func_6127()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x17ef PushV
	var_83_string = "b3q02"; // 0x17f0 PushS
	var_84_int = 2; // 0x17f1 PushI
	SetVariable(var_83_string, var_84_int); // 0x17f2 Func
	var_85_object = Obj(); // 0x17f4 PushV
	func_6587(var_85_object); // 0x17f5 NEW_2
	var_82_object = var_85_object; // 0x17f6 Mov
	var_92_string = "b3q02GrifGotoDanko"; // 0x17f8 PushS
	var_93_string = "pt_map_eva"; // 0x17f9 PushS
	var_94_int = 0; // 0x17fa PushI
	var_95_int = 519653; // 0x17fb PushI
	var_96_float = 0; // 0x17fc PushV
	func_5765(var_96_float); // 0x17fd NEW_2
	AddMark(var_92_string, var_93_string, var_94_int, var_95_int, var_96_float); // 0x17ff ObjFunc
	func_6520(); // 0x1802 NEW_2
	return 2; // 0x1804 Return
}


func_5615(var_248_float, var_249_float, var_250_float, var_251_float)
{
	var_252_bool = var_249_float < var_250_float; // 0x15f0 LT
	if(var_252_bool == 0) goto Label_5620; // 0x15f1 JumpB
	var_248_float = var_250_float; // 0x15f2 Mov
	return 0; // 0x15f3 Return
	
Label_5620:
	var_253_bool = var_249_float > var_251_float; // 0x15f4 GT
	if(var_253_bool == 0) goto Label_5624; // 0x15f5 JumpB
	var_248_float = var_251_float; // 0x15f6 Mov
	return 0; // 0x15f7 Return
	
Label_5624:
	var_248_float = var_249_float; // 0x15f8 Mov
	return 0; // 0x15f9 Return
}


func_5626(var_133_bool, var_134_int, var_135_int)
{
	var_136_int = 0; var_137_int = 0; // 0x15fa PushV
	irand(var_137_int, var_135_int); // 0x15fb Func
	var_133_bool = var_137_int < var_134_int; // 0x15fd LT2
	return 2; // 0x15fe Return
}


func_5631(var_471_int, var_472_string)
{
	var_473_int = 0; var_474_int = 0; // 0x15ff PushV
	GetVariable(var_472_string, var_474_int); // 0x1600 Func
	var_471_int = var_474_int; // 0x1602 Mov
	return 2; // 0x1603 Return
}


