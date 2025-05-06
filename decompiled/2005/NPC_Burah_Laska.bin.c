task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xac PushI
	if(var_28_int == 0) goto Label_297; // 0xad JumpB
	func_2578(); // 0xaf NEW_2
	var_30_int = 36929; // 0xb1 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0xb2 Eq
	if(var_31_bool == 0) goto Label_185; // 0xb3 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xb4 PushV
	var_32_object = var_1_object; // 0xb5 MovT
	var_33_object = var_0_object; // 0xb6 MovT
	func_2763(); // 0xb7 NEW_2
	
Label_185:
	var_36_int = 36928; // 0xb9 PushI
	var_37_bool = var_26_bool == var_36_int; // 0xba Eq
	if(var_37_bool == 0) goto Label_218; // 0xbb JumpB
	var_38_string = ""; // 0xbc PushV
	var_38_string = "Welldie"; // 0xbd MovS
	func_149(var_27_cvector, var_38_string); // 0xbe NEW_2
	var_55_int = 535253; // 0xc0 PushI
	SetMessage(var_55_int); // 0xc1 TObjFunc
	ClearReplies(); // 0xc3 TObjFunc
	var_56_bool = 0; var_57_object = Obj(); // 0xc5 PushV
	var_57_object = var_1_object; // 0xc6 MovT
	func_2942(var_57_object); // 0xc7 NEW_2
	if(var_56_bool == 0) goto Label_207; // 0xc9 JumpB
	var_64_int = 535254; // 0xca PushI
	var_65_int = 37026; // 0xcb PushI
	var_66_int = 36929; // 0xcc PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xcd TObjFunc
	
Label_207:
	var_67_int = 535341; // 0xcf PushI
	var_68_int = -1; // 0xd0 PushI
	var_69_int = 37024; // 0xd1 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xd2 TObjFunc
	var_70_int = 535342; // 0xd4 PushI
	var_71_int = -1; // 0xd5 PushI
	var_72_int = 37025; // 0xd6 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xd7 TObjFunc
	return 0; // 0xd9 Return
	
Label_218:
	var_73_int = 37026; // 0xda PushI
	var_74_bool = var_26_bool == var_73_int; // 0xdb Eq
	if(var_74_bool == 0) goto Label_236; // 0xdc JumpB
	var_75_string = ""; // 0xdd PushV
	var_75_string = "Welldie"; // 0xde MovS
	func_149(var_27_cvector, var_75_string); // 0xdf NEW_2
	var_76_int = 535343; // 0xe1 PushI
	SetMessage(var_76_int); // 0xe2 TObjFunc
	ClearReplies(); // 0xe4 TObjFunc
	var_77_int = 535344; // 0xe6 PushI
	var_78_int = 37028; // 0xe7 PushI
	var_79_int = 37027; // 0xe8 PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_80_int = 37031; // 0xec PushI
	var_81_bool = var_26_bool == var_80_int; // 0xed Eq
	if(var_81_bool == 0) goto Label_239; // 0xee JumpB
	
Label_239:
	var_82_int = 37033; // 0xef PushI
	var_83_bool = var_26_bool == var_82_int; // 0xf0 Eq
	if(var_83_bool == 0) goto Label_262; // 0xf1 JumpB
	var_84_string = ""; // 0xf2 PushV
	var_84_string = "Welldie"; // 0xf3 MovS
	func_149(var_27_cvector, var_84_string); // 0xf4 NEW_2
	var_85_int = 535350; // 0xf6 PushI
	SetMessage(var_85_int); // 0xf7 TObjFunc
	ClearReplies(); // 0xf9 TObjFunc
	var_86_int = 535351; // 0xfb PushI
	var_87_int = 37028; // 0xfc PushI
	var_88_int = 37034; // 0xfd PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xfe TObjFunc
	var_89_int = 535352; // 0x100 PushI
	var_90_int = -1; // 0x101 PushI
	var_91_int = 37035; // 0x102 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x103 TObjFunc
	return 0; // 0x105 Return
	
Label_262:
	var_92_int = 37028; // 0x106 PushI
	var_93_bool = var_26_bool == var_92_int; // 0x107 Eq
	if(var_93_bool == 0) goto Label_285; // 0x108 JumpB
	var_94_string = ""; // 0x109 PushV
	var_94_string = "Welldie"; // 0x10a MovS
	func_149(var_27_cvector, var_94_string); // 0x10b NEW_2
	var_95_int = 535345; // 0x10d PushI
	SetMessage(var_95_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_96_int = 535346; // 0x112 PushI
	var_97_int = -1; // 0x113 PushI
	var_98_int = 37029; // 0x114 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x115 TObjFunc
	var_99_int = 535353; // 0x117 PushI
	var_100_int = -1; // 0x118 PushI
	var_101_int = 37037; // 0x119 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x11a TObjFunc
	return 0; // 0x11c Return
	
Label_285:
	var_3_string = 1; // 0x11d TMovB
	var_102_bool = 0; // 0x11e PushV
	func_2733(var_102_bool); // 0x11f NEW_2
	if(var_102_bool == 0) goto Label_293; // 0x121 JumpB
	lshStopAnimation(); // 0x122 Func
	goto Label_295; // 0x124 Jump
	
Label_295:
	return 0; // 0x127 Return
	
Label_293:
	StopAnimation(); // 0x125 Func
	
Label_297:
	return 0; // 0x129 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x246 PushI
	if(var_28_int == 0) goto Label_1246; // 0x247 JumpB
	func_2578(); // 0x249 NEW_2
	var_30_int = 19038; // 0x24b PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x24c Eq
	if(var_31_bool == 0) goto Label_600; // 0x24d JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x24e PushV
	var_32_object = var_1_object; // 0x24f MovT
	var_33_object = var_0_object; // 0x250 MovT
	func_2821(); // 0x251 NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0x253 PushV
	var_88_object = var_1_object; // 0x254 MovT
	var_89_object = var_0_object; // 0x255 MovT
	func_2799(); // 0x256 NEW_2
	
Label_600:
	var_114_int = 20803; // 0x258 PushI
	var_115_bool = var_27_cvector == var_114_int; // 0x259 Eq
	if(var_115_bool == 0) goto Label_613; // 0x25a JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x25b PushV
	var_116_object = var_1_object; // 0x25c MovT
	var_117_object = var_0_object; // 0x25d MovT
	func_2821(); // 0x25e NEW_2
	var_118_object = Obj(); var_119_object = Obj(); // 0x260 PushV
	var_118_object = var_1_object; // 0x261 MovT
	var_119_object = var_0_object; // 0x262 MovT
	func_2799(); // 0x263 NEW_2
	
Label_613:
	var_120_int = 21611; // 0x265 PushI
	var_121_bool = var_27_cvector == var_120_int; // 0x266 Eq
	if(var_121_bool == 0) goto Label_626; // 0x267 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x268 PushV
	var_122_object = var_1_object; // 0x269 MovT
	var_123_object = var_0_object; // 0x26a MovT
	func_2821(); // 0x26b NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0x26d PushV
	var_124_object = var_1_object; // 0x26e MovT
	var_125_object = var_0_object; // 0x26f MovT
	func_2799(); // 0x270 NEW_2
	
Label_626:
	var_126_int = 19043; // 0x272 PushI
	var_127_bool = var_27_cvector == var_126_int; // 0x273 Eq
	if(var_127_bool == 0) goto Label_639; // 0x274 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x275 PushV
	var_128_object = var_1_object; // 0x276 MovT
	var_129_object = var_0_object; // 0x277 MovT
	func_2821(); // 0x278 NEW_2
	var_130_object = Obj(); var_131_object = Obj(); // 0x27a PushV
	var_130_object = var_1_object; // 0x27b MovT
	var_131_object = var_0_object; // 0x27c MovT
	func_2799(); // 0x27d NEW_2
	
Label_639:
	var_132_int = 19044; // 0x27f PushI
	var_133_bool = var_27_cvector == var_132_int; // 0x280 Eq
	if(var_133_bool == 0) goto Label_647; // 0x281 JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x282 PushV
	var_134_object = var_1_object; // 0x283 MovT
	var_135_object = var_0_object; // 0x284 MovT
	func_2875(); // 0x285 NEW_2
	
Label_647:
	var_138_int = 19046; // 0x287 PushI
	var_139_bool = var_27_cvector == var_138_int; // 0x288 Eq
	if(var_139_bool == 0) goto Label_660; // 0x289 JumpB
	var_140_object = Obj(); var_141_object = Obj(); // 0x28a PushV
	var_140_object = var_1_object; // 0x28b MovT
	var_141_object = var_0_object; // 0x28c MovT
	func_2856(); // 0x28d NEW_2
	var_163_object = Obj(); var_164_object = Obj(); // 0x28f PushV
	var_163_object = var_1_object; // 0x290 MovT
	var_164_object = var_0_object; // 0x291 MovT
	func_2785(var_164_object); // 0x292 NEW_2
	
Label_660:
	var_203_int = 19111; // 0x294 PushI
	var_204_bool = var_27_cvector == var_203_int; // 0x295 Eq
	if(var_204_bool == 0) goto Label_668; // 0x296 JumpB
	var_205_object = Obj(); var_206_object = Obj(); // 0x297 PushV
	var_205_object = var_1_object; // 0x298 MovT
	var_206_object = var_0_object; // 0x299 MovT
	func_2881(); // 0x29a NEW_2
	
Label_668:
	var_209_int = 19113; // 0x29c PushI
	var_210_bool = var_27_cvector == var_209_int; // 0x29d Eq
	if(var_210_bool == 0) goto Label_686; // 0x29e JumpB
	var_211_object = Obj(); var_212_object = Obj(); // 0x29f PushV
	var_211_object = var_1_object; // 0x2a0 MovT
	var_212_object = var_0_object; // 0x2a1 MovT
	func_2792(var_212_object); // 0x2a2 NEW_2
	var_216_object = Obj(); var_217_object = Obj(); // 0x2a4 PushV
	var_216_object = var_1_object; // 0x2a5 MovT
	var_217_object = var_0_object; // 0x2a6 MovT
	func_2894(); // 0x2a7 NEW_2
	var_232_object = Obj(); var_233_object = Obj(); // 0x2a9 PushV
	var_232_object = var_1_object; // 0x2aa MovT
	var_233_object = var_0_object; // 0x2ab MovT
	func_2887(); // 0x2ac NEW_2
	
Label_686:
	var_237_int = 28400; // 0x2ae PushI
	var_238_bool = var_27_cvector == var_237_int; // 0x2af Eq
	if(var_238_bool == 0) goto Label_694; // 0x2b0 JumpB
	var_239_object = Obj(); var_240_object = Obj(); // 0x2b1 PushV
	var_239_object = var_1_object; // 0x2b2 MovT
	var_240_object = var_0_object; // 0x2b3 MovT
	func_2741(); // 0x2b4 NEW_2
	
Label_694:
	var_243_int = 28410; // 0x2b6 PushI
	var_244_bool = var_27_cvector == var_243_int; // 0x2b7 Eq
	if(var_244_bool == 0) goto Label_707; // 0x2b8 JumpB
	var_245_object = Obj(); var_246_object = Obj(); // 0x2b9 PushV
	var_245_object = var_1_object; // 0x2ba MovT
	var_246_object = var_0_object; // 0x2bb MovT
	func_2747(); // 0x2bc NEW_2
	var_255_object = Obj(); var_256_object = Obj(); // 0x2be PushV
	var_255_object = var_1_object; // 0x2bf MovT
	var_256_object = var_0_object; // 0x2c0 MovT
	func_2769(); // 0x2c1 NEW_2
	
Label_707:
	var_262_int = 28411; // 0x2c3 PushI
	var_263_bool = var_27_cvector == var_262_int; // 0x2c4 Eq
	if(var_263_bool == 0) goto Label_720; // 0x2c5 JumpB
	var_264_object = Obj(); var_265_object = Obj(); // 0x2c6 PushV
	var_264_object = var_1_object; // 0x2c7 MovT
	var_265_object = var_0_object; // 0x2c8 MovT
	func_2747(); // 0x2c9 NEW_2
	var_266_object = Obj(); var_267_object = Obj(); // 0x2cb PushV
	var_266_object = var_1_object; // 0x2cc MovT
	var_267_object = var_0_object; // 0x2cd MovT
	func_2769(); // 0x2ce NEW_2
	
Label_720:
	var_268_int = 19030; // 0x2d0 PushI
	var_269_bool = var_26_bool == var_268_int; // 0x2d1 Eq
	if(var_269_bool == 0) goto Label_865; // 0x2d2 JumpB
	var_270_bool = 0; // 0x2d3 PushV
	var_270_bool = 0; // 0x2d4 MovB
	var_271_bool = 0; var_272_object = Obj(); // 0x2d5 PushV
	var_272_object = var_1_object; // 0x2d6 MovT
	func_2954(var_272_object); // 0x2d7 NEW_2
	if(var_271_bool == 0) goto Label_737; // 0x2d9 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0x2da PushV
	var_278_object = var_1_object; // 0x2db MovT
	func_3008(var_278_object); // 0x2dc NEW_2
	var_283_bool = var_277_bool == 0; // 0x2de Not
	if(var_283_bool == 0) goto Label_737; // 0x2df JumpB
	var_270_bool = 1; // 0x2e0 MovB
	
Label_737:
	if(var_270_bool == 0) goto Label_763; // 0x2e1 JumpB
	var_284_object = Obj(); var_285_object = Obj(); // 0x2e2 PushV
	var_284_object = var_1_object; // 0x2e3 MovT
	var_285_object = var_0_object; // 0x2e4 MovT
	func_2815(); // 0x2e5 NEW_2
	var_288_string = ""; // 0x2e7 PushV
	var_288_string = "Neutral"; // 0x2e8 MovS
	func_559(var_27_cvector, var_288_string); // 0x2e9 NEW_2
	var_305_int = 517892; // 0x2eb PushI
	SetMessage(var_305_int); // 0x2ec TObjFunc
	ClearReplies(); // 0x2ee TObjFunc
	var_306_int = 519614; // 0x2f0 PushI
	var_307_int = 20800; // 0x2f1 PushI
	var_308_int = 20799; // 0x2f2 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x2f3 TObjFunc
	var_309_int = 520399; // 0x2f5 PushI
	var_310_int = 21606; // 0x2f6 PushI
	var_311_int = 21605; // 0x2f7 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x2f8 TObjFunc
	return 0; // 0x2fa Return
	
Label_763:
	var_312_string = ""; // 0x2fb PushV
	var_312_string = "Neutral"; // 0x2fc MovS
	func_559(var_27_cvector, var_312_string); // 0x2fd NEW_2
	var_313_int = 517901; // 0x2ff PushI
	SetMessage(var_313_int); // 0x300 TObjFunc
	ClearReplies(); // 0x302 TObjFunc
	var_314_bool = 0; // 0x304 PushV
	var_314_bool = 0; // 0x305 MovB
	var_315_bool = 0; var_316_object = Obj(); // 0x306 PushV
	var_316_object = var_1_object; // 0x307 MovT
	func_2966(var_316_object); // 0x308 NEW_2
	if(var_315_bool == 0) goto Label_786; // 0x30a JumpB
	var_321_bool = 0; var_322_object = Obj(); // 0x30b PushV
	var_322_object = var_1_object; // 0x30c MovT
	func_3008(var_322_object); // 0x30d NEW_2
	var_323_bool = var_321_bool == 0; // 0x30f Not
	if(var_323_bool == 0) goto Label_786; // 0x310 JumpB
	var_314_bool = 1; // 0x311 MovB
	
Label_786:
	if(var_314_bool == 0) goto Label_792; // 0x312 JumpB
	var_324_int = 517902; // 0x313 PushI
	var_325_int = 19042; // 0x314 PushI
	var_326_int = 19040; // 0x315 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x316 TObjFunc
	
Label_792:
	var_327_bool = 0; // 0x318 PushV
	var_327_bool = 0; // 0x319 MovB
	var_328_bool = 0; // 0x31a PushV
	var_328_bool = 0; // 0x31b MovB
	var_329_bool = 0; var_330_object = Obj(); // 0x31c PushV
	var_330_object = var_1_object; // 0x31d MovT
	func_2978(var_329_bool, var_330_object); // 0x31e NEW_2
	if(var_329_bool == 0) goto Label_807; // 0x320 JumpB
	var_342_bool = 0; var_343_object = Obj(); // 0x321 PushV
	var_343_object = var_1_object; // 0x322 MovT
	func_2996(var_343_object); // 0x323 NEW_2
	if(var_342_bool == 0) goto Label_807; // 0x325 JumpB
	var_328_bool = 1; // 0x326 MovB
	
Label_807:
	if(var_328_bool == 0) goto Label_815; // 0x327 JumpB
	var_348_bool = 0; var_349_object = Obj(); // 0x328 PushV
	var_349_object = var_1_object; // 0x329 MovT
	func_3008(var_349_object); // 0x32a NEW_2
	var_350_bool = var_348_bool == 0; // 0x32c Not
	if(var_350_bool == 0) goto Label_815; // 0x32d JumpB
	var_327_bool = 1; // 0x32e MovB
	
Label_815:
	if(var_327_bool == 0) goto Label_821; // 0x32f JumpB
	var_351_int = 517906; // 0x330 PushI
	var_352_int = 19045; // 0x331 PushI
	var_353_int = 19044; // 0x332 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x333 TObjFunc
	
Label_821:
	var_354_bool = 0; // 0x335 PushV
	var_354_bool = 0; // 0x336 MovB
	var_355_bool = 0; var_356_object = Obj(); // 0x337 PushV
	var_356_object = var_1_object; // 0x338 MovT
	func_3008(var_356_object); // 0x339 NEW_2
	if(var_355_bool == 0) goto Label_834; // 0x33b JumpB
	var_357_bool = 0; var_358_object = Obj(); // 0x33c PushV
	var_358_object = var_1_object; // 0x33d MovT
	func_3020(var_358_object); // 0x33e NEW_2
	if(var_357_bool == 0) goto Label_834; // 0x340 JumpB
	var_354_bool = 1; // 0x341 MovB
	
Label_834:
	if(var_354_bool == 0) goto Label_840; // 0x342 JumpB
	var_363_int = 517978; // 0x343 PushI
	var_364_int = 20805; // 0x344 PushI
	var_365_int = 19111; // 0x345 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x346 TObjFunc
	
Label_840:
	var_366_bool = 0; // 0x348 PushV
	var_366_bool = 0; // 0x349 MovB
	var_367_bool = 0; var_368_object = Obj(); // 0x34a PushV
	var_368_object = var_1_object; // 0x34b MovT
	func_2906(var_368_object); // 0x34c NEW_2
	if(var_367_bool == 0) goto Label_853; // 0x34e JumpB
	var_373_bool = 0; var_374_object = Obj(); // 0x34f PushV
	var_374_object = var_1_object; // 0x350 MovT
	func_2930(var_374_object); // 0x351 NEW_2
	if(var_373_bool == 0) goto Label_853; // 0x353 JumpB
	var_366_bool = 1; // 0x354 MovB
	
Label_853:
	if(var_366_bool == 0) goto Label_859; // 0x355 JumpB
	var_379_int = 527102; // 0x356 PushI
	var_380_int = 28401; // 0x357 PushI
	var_381_int = 28400; // 0x358 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x359 TObjFunc
	
Label_859:
	var_382_int = 517903; // 0x35b PushI
	var_383_int = -1; // 0x35c PushI
	var_384_int = 19041; // 0x35d PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x35e TObjFunc
	return 0; // 0x360 Return
	
Label_865:
	var_385_int = 28401; // 0x361 PushI
	var_386_bool = var_26_bool == var_385_int; // 0x362 Eq
	if(var_386_bool == 0) goto Label_883; // 0x363 JumpB
	var_387_string = ""; // 0x364 PushV
	var_387_string = "Autizm"; // 0x365 MovS
	func_559(var_27_cvector, var_387_string); // 0x366 NEW_2
	var_388_int = 527103; // 0x368 PushI
	SetMessage(var_388_int); // 0x369 TObjFunc
	ClearReplies(); // 0x36b TObjFunc
	var_389_int = 527104; // 0x36d PushI
	var_390_int = 28403; // 0x36e PushI
	var_391_int = 28402; // 0x36f PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x370 TObjFunc
	return 0; // 0x372 Return
	
Label_883:
	var_392_int = 28403; // 0x373 PushI
	var_393_bool = var_26_bool == var_392_int; // 0x374 Eq
	if(var_393_bool == 0) goto Label_901; // 0x375 JumpB
	var_394_string = ""; // 0x376 PushV
	var_394_string = "Autizm"; // 0x377 MovS
	func_559(var_27_cvector, var_394_string); // 0x378 NEW_2
	var_395_int = 527105; // 0x37a PushI
	SetMessage(var_395_int); // 0x37b TObjFunc
	ClearReplies(); // 0x37d TObjFunc
	var_396_int = 527106; // 0x37f PushI
	var_397_int = 28405; // 0x380 PushI
	var_398_int = 28404; // 0x381 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x382 TObjFunc
	return 0; // 0x384 Return
	
Label_901:
	var_399_int = 28405; // 0x385 PushI
	var_400_bool = var_26_bool == var_399_int; // 0x386 Eq
	if(var_400_bool == 0) goto Label_919; // 0x387 JumpB
	var_401_string = ""; // 0x388 PushV
	var_401_string = "Autizm"; // 0x389 MovS
	func_559(var_27_cvector, var_401_string); // 0x38a NEW_2
	var_402_int = 527107; // 0x38c PushI
	SetMessage(var_402_int); // 0x38d TObjFunc
	ClearReplies(); // 0x38f TObjFunc
	var_403_int = 527108; // 0x391 PushI
	var_404_int = 28407; // 0x392 PushI
	var_405_int = 28406; // 0x393 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x394 TObjFunc
	return 0; // 0x396 Return
	
Label_919:
	var_406_int = 28407; // 0x397 PushI
	var_407_bool = var_26_bool == var_406_int; // 0x398 Eq
	if(var_407_bool == 0) goto Label_937; // 0x399 JumpB
	var_408_string = ""; // 0x39a PushV
	var_408_string = "Welldie"; // 0x39b MovS
	func_559(var_27_cvector, var_408_string); // 0x39c NEW_2
	var_409_int = 527109; // 0x39e PushI
	SetMessage(var_409_int); // 0x39f TObjFunc
	ClearReplies(); // 0x3a1 TObjFunc
	var_410_int = 527110; // 0x3a3 PushI
	var_411_int = 28409; // 0x3a4 PushI
	var_412_int = 28408; // 0x3a5 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x3a6 TObjFunc
	return 0; // 0x3a8 Return
	
Label_937:
	var_413_int = 28409; // 0x3a9 PushI
	var_414_bool = var_26_bool == var_413_int; // 0x3aa Eq
	if(var_414_bool == 0) goto Label_960; // 0x3ab JumpB
	var_415_string = ""; // 0x3ac PushV
	var_415_string = "Welldie"; // 0x3ad MovS
	func_559(var_27_cvector, var_415_string); // 0x3ae NEW_2
	var_416_int = 527111; // 0x3b0 PushI
	SetMessage(var_416_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_417_int = 527112; // 0x3b5 PushI
	var_418_int = -1; // 0x3b6 PushI
	var_419_int = 28410; // 0x3b7 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x3b8 TObjFunc
	var_420_int = 527113; // 0x3ba PushI
	var_421_int = -1; // 0x3bb PushI
	var_422_int = 28411; // 0x3bc PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x3bd TObjFunc
	return 0; // 0x3bf Return
	
Label_960:
	var_423_int = 20805; // 0x3c0 PushI
	var_424_bool = var_26_bool == var_423_int; // 0x3c1 Eq
	if(var_424_bool == 0) goto Label_988; // 0x3c2 JumpB
	var_425_string = ""; // 0x3c3 PushV
	var_425_string = "Pain"; // 0x3c4 MovS
	func_559(var_27_cvector, var_425_string); // 0x3c5 NEW_2
	var_426_int = 519620; // 0x3c7 PushI
	SetMessage(var_426_int); // 0x3c8 TObjFunc
	ClearReplies(); // 0x3ca TObjFunc
	var_427_int = 519621; // 0x3cc PushI
	var_428_int = 20808; // 0x3cd PushI
	var_429_int = 20806; // 0x3ce PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x3cf TObjFunc
	var_430_int = 520405; // 0x3d1 PushI
	var_431_int = 20808; // 0x3d2 PushI
	var_432_int = 21612; // 0x3d3 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x3d4 TObjFunc
	var_433_int = 519622; // 0x3d6 PushI
	var_434_int = 20808; // 0x3d7 PushI
	var_435_int = 20807; // 0x3d8 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x3d9 TObjFunc
	return 0; // 0x3db Return
	
Label_988:
	var_436_int = 20808; // 0x3dc PushI
	var_437_bool = var_26_bool == var_436_int; // 0x3dd Eq
	if(var_437_bool == 0) goto Label_1006; // 0x3de JumpB
	var_438_string = ""; // 0x3df PushV
	var_438_string = "Pain"; // 0x3e0 MovS
	func_559(var_27_cvector, var_438_string); // 0x3e1 NEW_2
	var_439_int = 519623; // 0x3e3 PushI
	SetMessage(var_439_int); // 0x3e4 TObjFunc
	ClearReplies(); // 0x3e6 TObjFunc
	var_440_int = 517980; // 0x3e8 PushI
	var_441_int = -1; // 0x3e9 PushI
	var_442_int = 19113; // 0x3ea PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x3eb TObjFunc
	return 0; // 0x3ed Return
	
Label_1006:
	var_443_int = 19045; // 0x3ee PushI
	var_444_bool = var_26_bool == var_443_int; // 0x3ef Eq
	if(var_444_bool == 0) goto Label_1024; // 0x3f0 JumpB
	var_445_string = ""; // 0x3f1 PushV
	var_445_string = "Welldie"; // 0x3f2 MovS
	func_559(var_27_cvector, var_445_string); // 0x3f3 NEW_2
	var_446_int = 517907; // 0x3f5 PushI
	SetMessage(var_446_int); // 0x3f6 TObjFunc
	ClearReplies(); // 0x3f8 TObjFunc
	var_447_int = 517908; // 0x3fa PushI
	var_448_int = -1; // 0x3fb PushI
	var_449_int = 19046; // 0x3fc PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x3fd TObjFunc
	return 0; // 0x3ff Return
	
Label_1024:
	var_450_int = 19042; // 0x400 PushI
	var_451_bool = var_26_bool == var_450_int; // 0x401 Eq
	if(var_451_bool == 0) goto Label_1047; // 0x402 JumpB
	var_452_string = ""; // 0x403 PushV
	var_452_string = "Welldie"; // 0x404 MovS
	func_559(var_27_cvector, var_452_string); // 0x405 NEW_2
	var_453_int = 517904; // 0x407 PushI
	SetMessage(var_453_int); // 0x408 TObjFunc
	ClearReplies(); // 0x40a TObjFunc
	var_454_int = 520402; // 0x40c PushI
	var_455_int = 21610; // 0x40d PushI
	var_456_int = 21609; // 0x40e PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x40f TObjFunc
	var_457_int = 517905; // 0x411 PushI
	var_458_int = -1; // 0x412 PushI
	var_459_int = 19043; // 0x413 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x414 TObjFunc
	return 0; // 0x416 Return
	
Label_1047:
	var_460_int = 21610; // 0x417 PushI
	var_461_bool = var_26_bool == var_460_int; // 0x418 Eq
	if(var_461_bool == 0) goto Label_1065; // 0x419 JumpB
	var_462_string = ""; // 0x41a PushV
	var_462_string = "Welldie"; // 0x41b MovS
	func_559(var_27_cvector, var_462_string); // 0x41c NEW_2
	var_463_int = 520403; // 0x41e PushI
	SetMessage(var_463_int); // 0x41f TObjFunc
	ClearReplies(); // 0x421 TObjFunc
	var_464_int = 520404; // 0x423 PushI
	var_465_int = -1; // 0x424 PushI
	var_466_int = 21611; // 0x425 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x426 TObjFunc
	return 0; // 0x428 Return
	
Label_1065:
	var_467_int = 21606; // 0x429 PushI
	var_468_bool = var_26_bool == var_467_int; // 0x42a Eq
	if(var_468_bool == 0) goto Label_1083; // 0x42b JumpB
	var_469_string = ""; // 0x42c PushV
	var_469_string = "Pain"; // 0x42d MovS
	func_559(var_27_cvector, var_469_string); // 0x42e NEW_2
	var_470_int = 520400; // 0x430 PushI
	SetMessage(var_470_int); // 0x431 TObjFunc
	ClearReplies(); // 0x433 TObjFunc
	var_471_int = 520401; // 0x435 PushI
	var_472_int = 20800; // 0x436 PushI
	var_473_int = 21607; // 0x437 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x438 TObjFunc
	return 0; // 0x43a Return
	
Label_1083:
	var_474_int = 20800; // 0x43b PushI
	var_475_bool = var_26_bool == var_474_int; // 0x43c Eq
	if(var_475_bool == 0) goto Label_1111; // 0x43d JumpB
	var_476_string = ""; // 0x43e PushV
	var_476_string = "Pain"; // 0x43f MovS
	func_559(var_27_cvector, var_476_string); // 0x440 NEW_2
	var_477_int = 519615; // 0x442 PushI
	SetMessage(var_477_int); // 0x443 TObjFunc
	ClearReplies(); // 0x445 TObjFunc
	var_478_int = 517896; // 0x447 PushI
	var_479_int = 19035; // 0x448 PushI
	var_480_int = 19034; // 0x449 PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x44a TObjFunc
	var_481_int = 517893; // 0x44c PushI
	var_482_int = 19032; // 0x44d PushI
	var_483_int = 19031; // 0x44e PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x44f TObjFunc
	var_484_int = 520398; // 0x451 PushI
	var_485_int = -1; // 0x452 PushI
	var_486_int = 21604; // 0x453 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x454 TObjFunc
	return 0; // 0x456 Return
	
Label_1111:
	var_487_int = 19032; // 0x457 PushI
	var_488_bool = var_26_bool == var_487_int; // 0x458 Eq
	if(var_488_bool == 0) goto Label_1129; // 0x459 JumpB
	var_489_string = ""; // 0x45a PushV
	var_489_string = "Pain"; // 0x45b MovS
	func_559(var_27_cvector, var_489_string); // 0x45c NEW_2
	var_490_int = 517894; // 0x45e PushI
	SetMessage(var_490_int); // 0x45f TObjFunc
	ClearReplies(); // 0x461 TObjFunc
	var_491_int = 517895; // 0x463 PushI
	var_492_int = -1; // 0x464 PushI
	var_493_int = 19033; // 0x465 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x466 TObjFunc
	return 0; // 0x468 Return
	
Label_1129:
	var_494_int = 19035; // 0x469 PushI
	var_495_bool = var_26_bool == var_494_int; // 0x46a Eq
	if(var_495_bool == 0) goto Label_1152; // 0x46b JumpB
	var_496_string = ""; // 0x46c PushV
	var_496_string = "Autizm"; // 0x46d MovS
	func_559(var_27_cvector, var_496_string); // 0x46e NEW_2
	var_497_int = 517897; // 0x470 PushI
	SetMessage(var_497_int); // 0x471 TObjFunc
	ClearReplies(); // 0x473 TObjFunc
	var_498_int = 517898; // 0x475 PushI
	var_499_int = 19037; // 0x476 PushI
	var_500_int = 19036; // 0x477 PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x478 TObjFunc
	var_501_int = 527070; // 0x47a PushI
	var_502_int = 28367; // 0x47b PushI
	var_503_int = 28366; // 0x47c PushI
	AddReply(var_501_int, var_502_int, var_503_int); // 0x47d TObjFunc
	return 0; // 0x47f Return
	
Label_1152:
	var_504_int = 28367; // 0x480 PushI
	var_505_bool = var_26_bool == var_504_int; // 0x481 Eq
	if(var_505_bool == 0) goto Label_1170; // 0x482 JumpB
	var_506_string = ""; // 0x483 PushV
	var_506_string = "Autizm"; // 0x484 MovS
	func_559(var_27_cvector, var_506_string); // 0x485 NEW_2
	var_507_int = 527071; // 0x487 PushI
	SetMessage(var_507_int); // 0x488 TObjFunc
	ClearReplies(); // 0x48a TObjFunc
	var_508_int = 527072; // 0x48c PushI
	var_509_int = 28369; // 0x48d PushI
	var_510_int = 28368; // 0x48e PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x48f TObjFunc
	return 0; // 0x491 Return
	
Label_1170:
	var_511_int = 28369; // 0x492 PushI
	var_512_bool = var_26_bool == var_511_int; // 0x493 Eq
	if(var_512_bool == 0) goto Label_1188; // 0x494 JumpB
	var_513_string = ""; // 0x495 PushV
	var_513_string = "Autizm"; // 0x496 MovS
	func_559(var_27_cvector, var_513_string); // 0x497 NEW_2
	var_514_int = 527073; // 0x499 PushI
	SetMessage(var_514_int); // 0x49a TObjFunc
	ClearReplies(); // 0x49c TObjFunc
	var_515_int = 527074; // 0x49e PushI
	var_516_int = 19037; // 0x49f PushI
	var_517_int = 28370; // 0x4a0 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x4a1 TObjFunc
	return 0; // 0x4a3 Return
	
Label_1188:
	var_518_int = 19037; // 0x4a4 PushI
	var_519_bool = var_26_bool == var_518_int; // 0x4a5 Eq
	if(var_519_bool == 0) goto Label_1211; // 0x4a6 JumpB
	var_520_string = ""; // 0x4a7 PushV
	var_520_string = "Autizm"; // 0x4a8 MovS
	func_559(var_27_cvector, var_520_string); // 0x4a9 NEW_2
	var_521_int = 517899; // 0x4ab PushI
	SetMessage(var_521_int); // 0x4ac TObjFunc
	ClearReplies(); // 0x4ae TObjFunc
	var_522_int = 517900; // 0x4b0 PushI
	var_523_int = -1; // 0x4b1 PushI
	var_524_int = 19038; // 0x4b2 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x4b3 TObjFunc
	var_525_int = 519616; // 0x4b5 PushI
	var_526_int = 20802; // 0x4b6 PushI
	var_527_int = 20801; // 0x4b7 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x4b8 TObjFunc
	return 0; // 0x4ba Return
	
Label_1211:
	var_528_int = 20802; // 0x4bb PushI
	var_529_bool = var_26_bool == var_528_int; // 0x4bc Eq
	if(var_529_bool == 0) goto Label_1234; // 0x4bd JumpB
	var_530_string = ""; // 0x4be PushV
	var_530_string = "Autizm"; // 0x4bf MovS
	func_559(var_27_cvector, var_530_string); // 0x4c0 NEW_2
	var_531_int = 519617; // 0x4c2 PushI
	SetMessage(var_531_int); // 0x4c3 TObjFunc
	ClearReplies(); // 0x4c5 TObjFunc
	var_532_int = 519618; // 0x4c7 PushI
	var_533_int = -1; // 0x4c8 PushI
	var_534_int = 20803; // 0x4c9 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x4ca TObjFunc
	var_535_int = 519619; // 0x4cc PushI
	var_536_int = -1; // 0x4cd PushI
	var_537_int = 20804; // 0x4ce PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x4cf TObjFunc
	return 0; // 0x4d1 Return
	
Label_1234:
	var_3_string = 1; // 0x4d2 TMovB
	var_538_bool = 0; // 0x4d3 PushV
	func_2733(var_538_bool); // 0x4d4 NEW_2
	if(var_538_bool == 0) goto Label_1242; // 0x4d6 JumpB
	lshStopAnimation(); // 0x4d7 Func
	goto Label_1244; // 0x4d9 Jump
	
Label_1244:
	return 0; // 0x4dc Return
	
Label_1242:
	StopAnimation(); // 0x4da Func
	
Label_1246:
	return 0; // 0x4de Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x58f PushI
	if(var_28_int == 0) goto Label_1539; // 0x590 JumpB
	func_2578(); // 0x592 NEW_2
	var_30_int = 21868; // 0x594 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x595 Eq
	if(var_31_bool == 0) goto Label_1436; // 0x596 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x597 PushV
	var_32_object = var_1_object; // 0x598 MovT
	var_33_object = var_0_object; // 0x599 MovT
	func_2735(); // 0x59a NEW_2
	
Label_1436:
	var_36_int = 21867; // 0x59c PushI
	var_37_bool = var_26_bool == var_36_int; // 0x59d Eq
	if(var_37_bool == 0) goto Label_1473; // 0x59e JumpB
	var_38_string = ""; // 0x59f PushV
	var_38_string = "Welldie"; // 0x5a0 MovS
	func_1400(var_27_cvector, var_38_string); // 0x5a1 NEW_2
	var_55_int = 520656; // 0x5a3 PushI
	SetMessage(var_55_int); // 0x5a4 TObjFunc
	ClearReplies(); // 0x5a6 TObjFunc
	var_56_bool = 0; // 0x5a8 PushV
	var_56_bool = 0; // 0x5a9 MovB
	var_57_bool = 0; var_58_object = Obj(); // 0x5aa PushV
	var_58_object = var_1_object; // 0x5ab MovT
	func_3032(var_58_object); // 0x5ac NEW_2
	if(var_57_bool == 0) goto Label_1461; // 0x5ae JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x5af PushV
	var_66_object = var_1_object; // 0x5b0 MovT
	func_2918(var_66_object); // 0x5b1 NEW_2
	if(var_65_bool == 0) goto Label_1461; // 0x5b3 JumpB
	var_56_bool = 1; // 0x5b4 MovB
	
Label_1461:
	if(var_56_bool == 0) goto Label_1467; // 0x5b5 JumpB
	var_71_int = 520657; // 0x5b6 PushI
	var_72_int = 21869; // 0x5b7 PushI
	var_73_int = 21868; // 0x5b8 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x5b9 TObjFunc
	
Label_1467:
	var_74_int = 520664; // 0x5bb PushI
	var_75_int = -1; // 0x5bc PushI
	var_76_int = 21875; // 0x5bd PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x5be TObjFunc
	return 0; // 0x5c0 Return
	
Label_1473:
	var_77_int = 21869; // 0x5c1 PushI
	var_78_bool = var_26_bool == var_77_int; // 0x5c2 Eq
	if(var_78_bool == 0) goto Label_1491; // 0x5c3 JumpB
	var_79_string = ""; // 0x5c4 PushV
	var_79_string = "Welldie"; // 0x5c5 MovS
	func_1400(var_27_cvector, var_79_string); // 0x5c6 NEW_2
	var_80_int = 520658; // 0x5c8 PushI
	SetMessage(var_80_int); // 0x5c9 TObjFunc
	ClearReplies(); // 0x5cb TObjFunc
	var_81_int = 520659; // 0x5cd PushI
	var_82_int = 21871; // 0x5ce PushI
	var_83_int = 21870; // 0x5cf PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x5d0 TObjFunc
	return 0; // 0x5d2 Return
	
Label_1491:
	var_84_int = 21871; // 0x5d3 PushI
	var_85_bool = var_26_bool == var_84_int; // 0x5d4 Eq
	if(var_85_bool == 0) goto Label_1509; // 0x5d5 JumpB
	var_86_string = ""; // 0x5d6 PushV
	var_86_string = "Autizm"; // 0x5d7 MovS
	func_1400(var_27_cvector, var_86_string); // 0x5d8 NEW_2
	var_87_int = 520660; // 0x5da PushI
	SetMessage(var_87_int); // 0x5db TObjFunc
	ClearReplies(); // 0x5dd TObjFunc
	var_88_int = 520661; // 0x5df PushI
	var_89_int = 21873; // 0x5e0 PushI
	var_90_int = 21872; // 0x5e1 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x5e2 TObjFunc
	return 0; // 0x5e4 Return
	
Label_1509:
	var_91_int = 21873; // 0x5e5 PushI
	var_92_bool = var_26_bool == var_91_int; // 0x5e6 Eq
	if(var_92_bool == 0) goto Label_1527; // 0x5e7 JumpB
	var_93_string = ""; // 0x5e8 PushV
	var_93_string = "Autizm"; // 0x5e9 MovS
	func_1400(var_27_cvector, var_93_string); // 0x5ea NEW_2
	var_94_int = 520662; // 0x5ec PushI
	SetMessage(var_94_int); // 0x5ed TObjFunc
	ClearReplies(); // 0x5ef TObjFunc
	var_95_int = 520663; // 0x5f1 PushI
	var_96_int = -1; // 0x5f2 PushI
	var_97_int = 21874; // 0x5f3 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x5f4 TObjFunc
	return 0; // 0x5f6 Return
	
Label_1527:
	var_3_string = 1; // 0x5f7 TMovB
	var_98_bool = 0; // 0x5f8 PushV
	func_2733(var_98_bool); // 0x5f9 NEW_2
	if(var_98_bool == 0) goto Label_1535; // 0x5fb JumpB
	lshStopAnimation(); // 0x5fc Func
	goto Label_1537; // 0x5fe Jump
	
Label_1537:
	return 0; // 0x601 Return
	
Label_1535:
	StopAnimation(); // 0x5ff Func
	
Label_1539:
	return 0; // 0x603 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x6a6 PushI
	if(var_28_int == 0) goto Label_1783; // 0x6a7 JumpB
	func_2578(); // 0x6a9 NEW_2
	var_30_int = 21962; // 0x6ab PushI
	var_31_bool = var_26_bool == var_30_int; // 0x6ac Eq
	if(var_31_bool == 0) goto Label_1730; // 0x6ad JumpB
	var_32_string = ""; // 0x6ae PushV
	var_32_string = "Neutral"; // 0x6af MovS
	func_1679(var_27_cvector, var_32_string); // 0x6b0 NEW_2
	var_49_int = 520750; // 0x6b2 PushI
	SetMessage(var_49_int); // 0x6b3 TObjFunc
	ClearReplies(); // 0x6b5 TObjFunc
	var_50_int = 520751; // 0x6b7 PushI
	var_51_int = 21964; // 0x6b8 PushI
	var_52_int = 21963; // 0x6b9 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x6ba TObjFunc
	var_53_int = 520755; // 0x6bc PushI
	var_54_int = 21968; // 0x6bd PushI
	var_55_int = 21967; // 0x6be PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x6bf TObjFunc
	return 0; // 0x6c1 Return
	
Label_1730:
	var_56_int = 21968; // 0x6c2 PushI
	var_57_bool = var_26_bool == var_56_int; // 0x6c3 Eq
	if(var_57_bool == 0) goto Label_1748; // 0x6c4 JumpB
	var_58_string = ""; // 0x6c5 PushV
	var_58_string = "Neutral"; // 0x6c6 MovS
	func_1679(var_27_cvector, var_58_string); // 0x6c7 NEW_2
	var_59_int = 520756; // 0x6c9 PushI
	SetMessage(var_59_int); // 0x6ca TObjFunc
	ClearReplies(); // 0x6cc TObjFunc
	var_60_int = 520757; // 0x6ce PushI
	var_61_int = 21964; // 0x6cf PushI
	var_62_int = 21969; // 0x6d0 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x6d1 TObjFunc
	return 0; // 0x6d3 Return
	
Label_1748:
	var_63_int = 21964; // 0x6d4 PushI
	var_64_bool = var_26_bool == var_63_int; // 0x6d5 Eq
	if(var_64_bool == 0) goto Label_1771; // 0x6d6 JumpB
	var_65_string = ""; // 0x6d7 PushV
	var_65_string = "Neutral"; // 0x6d8 MovS
	func_1679(var_27_cvector, var_65_string); // 0x6d9 NEW_2
	var_66_int = 520752; // 0x6db PushI
	SetMessage(var_66_int); // 0x6dc TObjFunc
	ClearReplies(); // 0x6de TObjFunc
	var_67_int = 520753; // 0x6e0 PushI
	var_68_int = -1; // 0x6e1 PushI
	var_69_int = 21965; // 0x6e2 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x6e3 TObjFunc
	var_70_int = 520754; // 0x6e5 PushI
	var_71_int = -1; // 0x6e6 PushI
	var_72_int = 21966; // 0x6e7 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x6e8 TObjFunc
	return 0; // 0x6ea Return
	
Label_1771:
	var_3_string = 1; // 0x6eb TMovB
	var_73_bool = 0; // 0x6ec PushV
	func_2733(var_73_bool); // 0x6ed NEW_2
	if(var_73_bool == 0) goto Label_1779; // 0x6ef JumpB
	lshStopAnimation(); // 0x6f0 Func
	goto Label_1781; // 0x6f2 Jump
	
Label_1781:
	return 0; // 0x6f5 Return
	
Label_1779:
	StopAnimation(); // 0x6f3 Func
	
Label_1783:
	return 0; // 0x6f7 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0x79a PushI
	if(var_28_int == 0) goto Label_1986; // 0x79b JumpB
	func_2578(); // 0x79d NEW_2
	var_30_int = 42560; // 0x79f PushI
	var_31_bool = var_26_int == var_30_int; // 0x7a0 Eq
	if(var_31_bool == 0) goto Label_1974; // 0x7a1 JumpB
	var_32_string = ""; // 0x7a2 PushV
	var_32_string = "Neutral"; // 0x7a3 MovS
	func_1923(var_27_cvector, var_32_string); // 0x7a4 NEW_2
	var_49_int = 540551; // 0x7a6 PushI
	SetMessage(var_49_int); // 0x7a7 TObjFunc
	ClearReplies(); // 0x7a9 TObjFunc
	var_50_int = 540552; // 0x7ab PushI
	var_51_int = -1; // 0x7ac PushI
	var_52_int = 42561; // 0x7ad PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0x7ae TObjFunc
	var_53_int = 540795; // 0x7b0 PushI
	var_54_int = -1; // 0x7b1 PushI
	var_55_int = 42844; // 0x7b2 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0x7b3 TObjFunc
	return 0; // 0x7b5 Return
	
Label_1974:
	var_3_string = 1; // 0x7b6 TMovB
	var_56_bool = 0; // 0x7b7 PushV
	func_2733(var_56_bool); // 0x7b8 NEW_2
	if(var_56_bool == 0) goto Label_1982; // 0x7ba JumpB
	lshStopAnimation(); // 0x7bb Func
	goto Label_1984; // 0x7bd Jump
	
Label_1984:
	return 0; // 0x7c0 Return
	
Label_1982:
	StopAnimation(); // 0x7be Func
	
Label_1986:
	return 0; // 0x7c2 Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0x80d PushI
	var_28_bool = var_26_int == var_27_int; // 0x80e Eq
	if(var_28_bool == 0) goto Label_2097; // 0x80f JumpB
	func_2056(); // 0x811 NEW_2
	var_30_bool = 0; // 0x813 PushV
	var_30_bool = 0; // 0x814 MovB
	var_31_bool = 0; // 0x815 PushV
	func_2304(var_31_bool); // 0x816 NEW_2
	if(var_31_bool == 0) goto Label_2078; // 0x818 JumpB
	var_34_bool = 0; // 0x819 PushV
	func_2025(var_34_bool); // 0x81a NEW_2
	if(var_34_bool == 0) goto Label_2078; // 0x81c JumpB
	var_30_bool = 1; // 0x81d MovB
	
Label_2078:
	if(var_30_bool == 0) goto Label_2091; // 0x81e JumpB
	var_51_bool = 0; // 0x81f PushV
	func_2005(var_51_bool); // 0x820 NEW_2
	if(var_51_bool == 0) goto Label_2090; // 0x822 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0x823 PushV
	var_72_object = Obj(); // 0x824 PushV
	func_2585(var_72_object); // 0x825 NEW_2
	var_71_object = var_72_object; // 0x826 Mov
	func_2452(var_71_object); // 0x828 NEW_2
	
Label_2090:
	goto Label_2097; // 0x82a Jump
	
Label_2097:
	return 0; // 0x831 Return
	
Label_2091:
	func_2020(var_26_int); // 0x82c NEW_2
	func_2047(); // 0x82f NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2238(); // 0x833 NEW_2
	func_2056(); // 0x836 NEW_2
	lshStopSpeech(); // 0x838 Func
	lshStopAnimation(); // 0x83a Func
	StopAsync(); // 0x83c Func
	Hold(); // 0x83e Func
	return 0; // 0x840 Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0x841 Func
	func_2056(); // 0x844 NEW_2
	var_27_string = ""; // 0x846 PushV
	var_27_string = "Neutral"; // 0x847 MovS
	func_2532(var_27_string); // 0x848 NEW_2
	func_2047(); // 0x84b NEW_2
	return 0; // 0x84d Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0x84f Push
	if(var_27_bool == 0) goto Label_2133; // 0x850 JumpB
	func_2047(); // 0x852 NEW_2
	goto Label_2137; // 0x854 Jump
	
Label_2137:
	return 0; // 0x859 Return
	
Label_2133:
	var_33_string = ""; // 0x855 PushV
	var_33_string = "Neutral"; // 0x856 MovS
	func_2532(var_33_string); // 0x857 NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0x85a PushV
	IsOverrideActive(var_28_bool); // 0x85b Func
	var_29_bool = var_28_bool == 0; // 0x85d Not
	if(var_29_bool == 0) goto Label_2166; // 0x85e JumpB
	EventDisable(0); // 0x85f EventDisable
	func_2238(); // 0x861 NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0x863 PushV
	var_31_object = var_26_object; // 0x864 Mov
	func_2295(var_31_object); // 0x865 NEW_2
	EventEnable(0); // 0x867 EventEnable
	var_44_object = Obj(); // 0x868 PushV
	var_44_object = var_26_object; // 0x869 Mov
	func_3204(var_44_object); // 0x86a NEW_2
	var_620_string = ""; // 0x86c PushV
	var_620_string = "Neutral"; // 0x86d MovS
	func_2532(var_620_string); // 0x86e NEW_2
	func_2056(); // 0x871 NEW_2
	func_2047(); // 0x874 NEW_2
	
Label_2166:
	return 2; // 0x876 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_1991(var_25_cvector); // 0x7c4 NEW_2
	return 0; // 0x7c6 Return
}


func_0(var_0_object, var_499_int, var_500_object)
{
	var_502_object = Obj(); var_503_bool = 0; var_504_int = 0; var_505_bool = 0; var_506_object = Obj(); var_507_bool = 0; var_508_int = 0; var_509_bool = 0; // 0x0 PushV
	var_0_object = var_500_object; // 0x1 TMov
	var_510_bool = 0; var_511_object = Obj(); var_512_float = 0; // 0x2 PushV
	var_511_object = var_500_object; // 0x3 Mov
	var_512_float = 70.0; // 0x4 MovF
	func_2309(var_511_object, var_512_float); // 0x5 NEW_2
	var_513_bool = var_510_bool == 0; // 0x7 Not
	if(var_513_bool == 0) goto Label_11; // 0x8 JumpB
	var_499_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_506_object); // 0xb Func
	var_514_int = 0; // 0xd PushV
	func_2727(var_514_int); // 0xe NEW_2
	SetNPCName(var_514_int); // 0x10 ObjFunc
	var_515_int = 0; // 0x12 PushV
	func_2725(var_515_int); // 0x13 NEW_2
	SetNPCDescription(var_515_int); // 0x15 ObjFunc
	var_516_string = ""; // 0x17 PushV
	func_2729(var_516_string); // 0x18 NEW_2
	SetPhoto(var_516_string); // 0x1a ObjFunc
	var_517_string = ""; // 0x1c PushV
	func_2731(var_517_string); // 0x1d NEW_2
	SetPhoto2(var_517_string); // 0x1f ObjFunc
	var_518_int = 0; // 0x21 PushV
	func_3187(var_518_int); // 0x22 NEW_2
	SetPlayerName(var_518_int); // 0x24 ObjFunc
	var_508_int = -1; // 0x26 MovI
	IsOverrideActive(var_507_bool); // 0x27 Func
	var_519_bool = var_507_bool; // 0x29 Push
	if(var_519_bool == 0) goto Label_45; // 0x2a JumpB
	var_499_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_506_object); // 0x2d Func
	var_520_bool = 0; var_521_object = Obj(); // 0x2f PushV
	var_522_object = Obj(); // 0x30 PushV
	func_2585(var_522_object); // 0x31 NEW_2
	var_521_object = var_522_object; // 0x32 Mov
	func_2394(var_520_bool, var_521_object); // 0x34 NEW_2
	var_523_object = Obj(); var_524_object = Obj(); // 0x36 PushV
	var_523_object = var_500_object; // 0x37 Mov
	var_524_object = var_506_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_525_object, var_526_object, var_527_string, var_528_bool, var_523_object, var_524_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_509_bool); // 0x3d ObjFunc
	
Label_63:
	var_562_bool = var_509_bool == 0; // 0x3f Not
	if(var_562_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_509_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_563_object = Obj(); // 0x46 PushV
	var_563_object = var_500_object; // 0x47 Mov
	func_2377(); // 0x48 NEW_2
	StopDialog(var_506_object); // 0x4a Func
	GetReturnValue(var_508_int); // 0x4c ObjFunc
	var_499_int = var_508_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2304(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0x900 PushV
	IsLoaded(var_28_bool); // 0x901 Func
	var_26_bool = var_28_bool; // 0x903 Mov
	return 2; // 0x904 Return
}


func_2563(var_154_bool, var_155_string)
{
	var_156_bool = 0; var_157_bool = 0; // 0xa03 PushV
	var_158_bool = 0; // 0xa04 PushV
	func_2733(var_158_bool); // 0xa05 NEW_2
	if(var_158_bool == 0) goto Label_2576; // 0xa07 JumpB
	lshHasSpeech(var_157_bool, var_155_string); // 0xa08 Func
	var_159_bool = var_157_bool; // 0xa0a Push
	if(var_159_bool == 0) goto Label_2576; // 0xa0b JumpB
	lshPlaySpeech(var_155_string); // 0xa0c Func
	var_154_bool = 1; // 0xa0e MovB
	return 2; // 0xa0f Return
	
Label_2576:
	var_154_bool = 0; // 0xa10 MovB
	return 2; // 0xa11 Return
}


func_1540(var_0_object, var_49_int, var_50_object)
{
	var_52_object = Obj(); var_53_bool = 0; var_54_int = 0; var_55_bool = 0; var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; // 0x604 PushV
	var_0_object = var_50_object; // 0x605 TMov
	var_60_bool = 0; var_61_object = Obj(); var_62_float = 0; // 0x606 PushV
	var_61_object = var_50_object; // 0x607 Mov
	var_62_float = 70.0; // 0x608 MovF
	func_2309(var_61_object, var_62_float); // 0x609 NEW_2
	var_106_bool = var_60_bool == 0; // 0x60b Not
	if(var_106_bool == 0) goto Label_1551; // 0x60c JumpB
	var_49_int = -2; // 0x60d MovI
	return 8; // 0x60e Return
	
Label_1551:
	CreateDialog(var_56_object); // 0x60f Func
	var_107_int = 0; // 0x611 PushV
	func_2727(var_107_int); // 0x612 NEW_2
	SetNPCName(var_107_int); // 0x614 ObjFunc
	var_108_int = 0; // 0x616 PushV
	func_2725(var_108_int); // 0x617 NEW_2
	SetNPCDescription(var_108_int); // 0x619 ObjFunc
	var_109_string = ""; // 0x61b PushV
	func_2729(var_109_string); // 0x61c NEW_2
	SetPhoto(var_109_string); // 0x61e ObjFunc
	var_110_string = ""; // 0x620 PushV
	func_2731(var_110_string); // 0x621 NEW_2
	SetPhoto2(var_110_string); // 0x623 ObjFunc
	var_111_int = 0; // 0x625 PushV
	func_3187(var_111_int); // 0x626 NEW_2
	SetPlayerName(var_111_int); // 0x628 ObjFunc
	var_58_int = -1; // 0x62a MovI
	IsOverrideActive(var_57_bool); // 0x62b Func
	var_119_bool = var_57_bool; // 0x62d Push
	if(var_119_bool == 0) goto Label_1585; // 0x62e JumpB
	var_49_int = -2; // 0x62f MovI
	return 8; // 0x630 Return
	
Label_1585:
	DoDialog(var_56_object); // 0x631 Func
	var_120_bool = 0; var_121_object = Obj(); // 0x633 PushV
	var_122_object = Obj(); // 0x634 PushV
	func_2585(var_122_object); // 0x635 NEW_2
	var_121_object = var_122_object; // 0x636 Mov
	func_2394(var_120_bool, var_121_object); // 0x638 NEW_2
	var_215_object = Obj(); var_216_object = Obj(); // 0x63a PushV
	var_215_object = var_50_object; // 0x63b Mov
	var_216_object = var_56_object; // 0x63c Mov
	TaskCall(7); // 0x63d TaskCall
	func_1621(var_217_object, var_218_object, var_219_string, var_220_bool, var_215_object, var_216_object); // 0x63e NEW_2
	TaskReturn(); // 0x63f TaskReturn
	IsDialogEnd(var_59_bool); // 0x641 ObjFunc
	
Label_1603:
	var_264_bool = var_59_bool == 0; // 0x643 Not
	if(var_264_bool == 0) goto Label_1610; // 0x644 JumpB
	sync(); // 0x645 Func
	IsDialogEnd(var_59_bool); // 0x647 ObjFunc
	goto Label_1603; // 0x649 Jump
	
Label_1610:
	var_265_object = Obj(); // 0x64a PushV
	var_265_object = var_50_object; // 0x64b Mov
	func_2377(); // 0x64c NEW_2
	StopDialog(var_56_object); // 0x64e Func
	GetReturnValue(var_58_int); // 0x650 ObjFunc
	var_49_int = var_58_int; // 0x652 Mov
	return 8; // 0x653 Return
}


func_2309(var_60_bool, var_62_float)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_bool = 0; // 0x905 PushV
	GetPosition(var_73_cvector); // 0x906 ObjFunc
	GetEyesHeight(var_72_float); // 0x908 ObjFunc
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x90a PushE
	var_81_float = var_81_float + var_72_float; // 0x90b Add2
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x90c PopE
	GetPosition(var_74_cvector); // 0x90d Func
	GetEyesHeight(var_72_float); // 0x90f Func
	var_82_float = GetByIndex(var_74_cvector, 1); // 0x911 PushE
	var_82_float = var_82_float + var_72_float; // 0x912 Add2
	SetByIndex(var_74_cvector, 1) = var_82_float; // 0x913 PopE
	var_75_cvector = var_73_cvector - var_74_cvector; // 0x914 Sub2
	var_83_float = GetByIndex(var_75_cvector, 1); // 0x915 PushE
	var_83_float = 0; // 0x916 MovI
	SetByIndex(var_75_cvector, 1) = var_83_float; // 0x917 PopE
	var_84_int = var_75_cvector | var_75_cvector; // 0x918 Or
	var_85_float = sqrt(var_84_int); // 0x919 Sqrt
	var_75_cvector = var_75_cvector / var_75_cvector; // 0x91a Div2
	var_76_cvector = -var_75_cvector; // 0x91b Neg2
	var_86_float = var_75_cvector * var_62_float; // 0x91c Mult
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); // 0x91d PushV
	var_89_cvector = CVector(0.0, 1.0, 0.0); // 0x91e PushVec
	var_88_cvector = var_76_cvector ^ var_89_cvector; // 0x91f Xor2
	func_2591(var_87_cvector, var_88_cvector); // 0x920 NEW_2
	var_95_int = 25; // 0x922 PushI
	var_96_float = var_87_cvector * var_95_int; // 0x923 Mult
	var_97_int = var_86_float + var_96_float; // 0x924 Add
	var_98_cvector = CVector(0.0, 10.0, 0.0); // 0x925 PushVec
	var_77_cvector = var_97_int - var_98_cvector; // 0x926 Sub2
	var_78_cvector = var_74_cvector + var_77_cvector; // 0x927 Add2
	IsOverrideActive(var_79_bool); // 0x928 Func
	var_99_bool = var_79_bool; // 0x92a Push
	if(var_99_bool == 0) goto Label_2350; // 0x92b JumpB
	var_60_bool = 0; // 0x92c MovB
	return 18; // 0x92d Return
	
Label_2350:
	StopWorld(); // 0x92e Func
	CameraTransit(var_78_cvector, var_76_cvector); // 0x930 Func
	var_100_float = GetByIndex(var_77_cvector, 0); // 0x932 PushE
	var_101_float = GetByIndex(var_77_cvector, 2); // 0x933 PushE
	Rotate(var_100_float, var_101_float); // 0x934 Func
	var_102_bool = 0; // 0x936 PushV
	func_2733(var_102_bool); // 0x937 NEW_2
	if(var_102_bool == 0) goto Label_2363; // 0x939 JumpB
	goto Label_2371; // 0x93a Jump
	
Label_2371:
	CameraWaitForPlayFinish(); // 0x943 Func
	ResumeWorld(); // 0x945 Func
	var_60_bool = 1; // 0x947 MovB
	return 18; // 0x948 Return
	
Label_2363:
	var_103_string = "head"; // 0x93b PushS
	HasAnimationTrack(var_80_bool, var_103_string); // 0x93c Func
	var_104_bool = var_80_bool; // 0x93e Push
	if(var_104_bool == 0) goto Label_2371; // 0x93f JumpB
	var_105_string = "head"; // 0x940 PushS
	LookAsyncCamera(var_105_string); // 0x941 Func
}


func_2821()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0xb05 PushV
	var_36_string = "b1q02"; // 0xb06 PushS
	var_37_int = 1; // 0xb07 PushI
	SetVariable(var_36_string, var_37_int); // 0xb08 Func
	var_38_object = Obj(); // 0xb0a PushV
	func_3137(var_38_object); // 0xb0b NEW_2
	var_35_object = var_38_object; // 0xb0c Mov
	var_45_string = "b1q02LaskaGotoGorbin"; // 0xb0e PushS
	var_46_string = "pt_map_gorbun"; // 0xb0f PushS
	var_47_int = 0; // 0xb10 PushI
	var_48_int = 517938; // 0xb11 PushI
	var_49_float = 0; // 0xb12 PushV
	func_2681(var_49_float); // 0xb13 NEW_2
	AddMark(var_45_string, var_46_string, var_47_int, var_48_int, var_49_float); // 0xb15 ObjFunc
	var_52_string = "b1q02LaskaSelf"; // 0xb17 PushS
	var_53_string = "pt_map_laska"; // 0xb18 PushS
	var_54_int = 0; // 0xb19 PushI
	var_55_int = 517939; // 0xb1a PushI
	var_56_float = 0; // 0xb1b PushV
	func_2681(var_56_float); // 0xb1c NEW_2
	AddMark(var_52_string, var_53_string, var_54_int, var_55_int, var_56_float); // 0xb1e ObjFunc
	func_3044(); // 0xb21 NEW_2
	func_3083(); // 0xb24 NEW_2
	return 2; // 0xb26 Return
}


func_2056()
{
	var_621_int = 10; // 0x808 PushI
	KillTimer(var_621_int); // 0x809 Func
	return 0; // 0x80b Return
}


func_3083()
{
	var_80_object = Obj(); var_81_object = Obj(); // 0xc0b PushV
	var_82_int = 201; // 0xc0c PushI
	var_83_int = 2; // 0xc0d PushI
	var_84_int = 517941; // 0xc0e PushI
	CreateDiaryEntry(var_81_object, var_82_int, var_83_int, var_84_int); // 0xc0f Func
	var_85_bool = 0; var_86_object = Obj(); var_87_int = 0; // 0xc11 PushV
	var_86_object = var_81_object; // 0xc12 Mov
	var_87_int = 200; // 0xc13 MovI
	func_3109(var_85_bool, var_86_object, var_87_int); // 0xc14 NEW_2
	return 2; // 0xc16 Return
}


func_2578()
{
	var_29_bool = 0; // 0xa12 PushV
	func_2733(var_29_bool); // 0xa13 NEW_2
	if(var_29_bool == 0) goto Label_2584; // 0xa15 JumpB
	lshStopSpeech(); // 0xa16 Func
	
Label_2584:
	return 0; // 0xa18 Return
}


func_3096(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0xc18 PushV
	GetDiaryRoot(var_73_object); // 0xc19 Func
	var_74_bool = var_73_object == 0; // 0xc1b Not
	if(var_74_bool == 0) goto Label_3106; // 0xc1c JumpB
	var_75_string = "Can't retrieve diary root"; // 0xc1d PushS
	Trace(var_75_string); // 0xc1e Func
	var_71_object = 0; // 0xc20 MovB
	return 2; // 0xc21 Return
	
Label_3106:
	var_71_object = var_73_object; // 0xc22 Mov
	return 2; // 0xc23 Return
}


func_2585(var_122_object)
{
	var_123_object = Obj(); var_124_object = Obj(); // 0xa19 PushV
	self(var_124_object); // 0xa1a Func
	var_122_object = var_124_object; // 0xa1c Mov
	return 2; // 0xa1d Return
}


func_2591(var_87_cvector, var_88_cvector)
{
	var_90_float = 0; var_91_float = 0; // 0xa1f PushV
	var_92_int = var_88_cvector | var_88_cvector; // 0xa20 Or
	var_91_float = sqrt(var_92_int); // 0xa21 Sqrt2
	var_93_float = 0.0; // 0xa22 PushF
	var_94_bool = var_91_float < var_93_float; // 0xa23 LT
	if(var_94_bool == 0) goto Label_2599; // 0xa24 JumpB
	var_87_cvector = CVector(0.0, 0.0, 0.0); // 0xa25 MovV
	return 2; // 0xa26 Return
	
Label_2599:
	var_87_cvector = var_88_cvector / var_88_cvector; // 0xa27 Div2
	return 2; // 0xa28 Return
}


func_3109(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; // 0xc25 PushV
	var_71_object = Obj(); // 0xc26 PushV
	func_3096(var_71_object); // 0xc27 NEW_2
	var_68_object = var_71_object; // 0xc28 Mov
	Find(var_64_int, var_69_object); // 0xc2a ObjFunc
	var_76_bool = var_69_object == 0; // 0xc2c Not
	if(var_76_bool == 0) goto Label_3124; // 0xc2d JumpB
	var_77_string = "Can't find diary parent with id: "; // 0xc2e PushS
	var_78_int = var_77_string + var_64_int; // 0xc2f Add
	Trace(var_78_int); // 0xc30 Func
	var_62_bool = 0; // 0xc32 MovB
	return 6; // 0xc33 Return
	
Label_3124:
	AddChild(var_63_object); // 0xc34 ObjFunc
	var_79_int = 7; // 0xc36 PushI
	SendWorldWndMessage(var_79_int); // 0xc37 Func
	GetCategory(var_70_int); // 0xc39 ObjFunc
	SetDiarySection(var_70_int); // 0xc3b Func
	var_62_bool = 0; // 0xc3d MovB
	return 6; // 0xc3e Return
}


func_2856()
{
	var_142_int = 0; var_143_int = 0; // 0xb28 PushV
	func_3057(); // 0xb2a NEW_2
	var_152_string = "b1q02_blood"; // 0xb2c PushS
	var_153_int = 1; // 0xb2d PushI
	RemoveItemByType(var_143_int, var_152_string, var_153_int); // 0xb2e ObjFunc
	var_154_bool = 0; var_155_string = ""; var_156_string = ""; // 0xb30 PushV
	var_155_string = "quest_b1_02"; // 0xb31 MovS
	var_156_string = "agony_cured"; // 0xb32 MovS
	func_2669(var_154_bool, var_155_string, var_156_string); // 0xb33 NEW_2
	var_160_bool = 0; var_161_string = ""; var_162_string = ""; // 0xb35 PushV
	var_161_string = "quest_b1_02"; // 0xb36 MovS
	var_162_string = "completed"; // 0xb37 MovS
	func_2669(var_160_bool, var_161_string, var_162_string); // 0xb38 NEW_2
	return 2; // 0xb3a Return
}


func_2601(var_194_float, var_195_float, var_196_float, var_197_float)
{
	var_198_bool = var_195_float < var_196_float; // 0xa2a LT
	if(var_198_bool == 0) goto Label_2606; // 0xa2b JumpB
	var_194_float = var_196_float; // 0xa2c Mov
	return 0; // 0xa2d Return
	
Label_2606:
	var_199_bool = var_195_float > var_197_float; // 0xa2e GT
	if(var_199_bool == 0) goto Label_2610; // 0xa2f JumpB
	var_194_float = var_197_float; // 0xa30 Mov
	return 0; // 0xa31 Return
	
Label_2610:
	var_194_float = var_195_float; // 0xa32 Mov
	return 0; // 0xa33 Return
}


func_298(var_0_object, var_277_int, var_278_object)
{
	var_280_object = Obj(); var_281_bool = 0; var_282_int = 0; var_283_bool = 0; var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; // 0x12a PushV
	var_0_object = var_278_object; // 0x12b TMov
	var_288_bool = 0; var_289_object = Obj(); var_290_float = 0; // 0x12c PushV
	var_289_object = var_278_object; // 0x12d Mov
	var_290_float = 70.0; // 0x12e MovF
	func_2309(var_289_object, var_290_float); // 0x12f NEW_2
	var_291_bool = var_288_bool == 0; // 0x131 Not
	if(var_291_bool == 0) goto Label_309; // 0x132 JumpB
	var_277_int = -2; // 0x133 MovI
	return 8; // 0x134 Return
	
Label_309:
	CreateDialog(var_284_object); // 0x135 Func
	var_292_int = 0; // 0x137 PushV
	func_2727(var_292_int); // 0x138 NEW_2
	SetNPCName(var_292_int); // 0x13a ObjFunc
	var_293_int = 0; // 0x13c PushV
	func_2725(var_293_int); // 0x13d NEW_2
	SetNPCDescription(var_293_int); // 0x13f ObjFunc
	var_294_string = ""; // 0x141 PushV
	func_2729(var_294_string); // 0x142 NEW_2
	SetPhoto(var_294_string); // 0x144 ObjFunc
	var_295_string = ""; // 0x146 PushV
	func_2731(var_295_string); // 0x147 NEW_2
	SetPhoto2(var_295_string); // 0x149 ObjFunc
	var_296_int = 0; // 0x14b PushV
	func_3187(var_296_int); // 0x14c NEW_2
	SetPlayerName(var_296_int); // 0x14e ObjFunc
	var_286_int = -1; // 0x150 MovI
	IsOverrideActive(var_285_bool); // 0x151 Func
	var_297_bool = var_285_bool; // 0x153 Push
	if(var_297_bool == 0) goto Label_343; // 0x154 JumpB
	var_277_int = -2; // 0x155 MovI
	return 8; // 0x156 Return
	
Label_343:
	DoDialog(var_284_object); // 0x157 Func
	var_298_bool = 0; var_299_object = Obj(); // 0x159 PushV
	var_300_object = Obj(); // 0x15a PushV
	func_2585(var_300_object); // 0x15b NEW_2
	var_299_object = var_300_object; // 0x15c Mov
	func_2394(var_298_bool, var_299_object); // 0x15e NEW_2
	var_301_object = Obj(); var_302_object = Obj(); // 0x160 PushV
	var_301_object = var_278_object; // 0x161 Mov
	var_302_object = var_284_object; // 0x162 Mov
	TaskCall(3); // 0x163 TaskCall
	func_379(var_303_object, var_304_object, var_305_string, var_306_bool, var_301_object, var_302_object); // 0x164 NEW_2
	TaskReturn(); // 0x165 TaskReturn
	IsDialogEnd(var_287_bool); // 0x167 ObjFunc
	
Label_361:
	var_424_bool = var_287_bool == 0; // 0x169 Not
	if(var_424_bool == 0) goto Label_368; // 0x16a JumpB
	sync(); // 0x16b Func
	IsDialogEnd(var_287_bool); // 0x16d ObjFunc
	goto Label_361; // 0x16f Jump
	
Label_368:
	var_425_object = Obj(); // 0x170 PushV
	var_425_object = var_278_object; // 0x171 Mov
	func_2377(); // 0x172 NEW_2
	StopDialog(var_284_object); // 0x174 Func
	GetReturnValue(var_286_int); // 0x176 ObjFunc
	var_277_int = var_286_int; // 0x178 Mov
	return 8; // 0x179 Return
}


func_559(var_2_object, var_328_string)
{
	var_329_bool = 0; // 0x230 PushV
	func_2733(var_329_bool); // 0x231 NEW_2
	var_330_bool = var_329_bool == 0; // 0x233 Not
	if(var_330_bool == 0) goto Label_566; // 0x234 JumpB
	return 0; // 0x235 Return
	
Label_566:
	var_331_bool = var_328_string == var_2_object; // 0x236 Eq
	if(var_331_bool == 0) goto Label_569; // 0x237 JumpB
	return 0; // 0x238 Return
	
Label_569:
	var_332_string = ""; var_333_bool = 0; // 0x239 PushV
	var_332_string = var_328_string; // 0x23a Mov
	var_334_string = ""; // 0x23b PushS
	var_335_bool = var_328_string == var_334_string; // 0x23c Eq
	if(var_335_bool == 0) goto Label_576; // 0x23d JumpB
	var_333_bool = 0; // 0x23e MovB
	goto Label_577; // 0x23f Jump
	
Label_577:
	func_2548(var_332_string, var_333_bool); // 0x241 NEW_2
	var_2_object = var_328_string; // 0x243 TMov
	return 0; // 0x244 Return
	
Label_576:
	var_333_bool = 1; // 0x240 MovB
}


func_1328(var_0_object, var_1_object, var_2_object, var_3_string, var_452_object, var_453_object)
{
	var_0_object = var_453_object; // 0x531 TMov
	var_1_object = var_452_object; // 0x532 TMov
	var_3_string = 0; // 0x533 TMovB
	var_458_int = 1; // 0x534 PushI
	if(var_458_int == 0) goto Label_1370; // 0x535 JumpB
	var_459_string = ""; // 0x536 PushV
	var_459_string = "Welldie"; // 0x537 MovS
	func_1400(var_453_object, var_459_string); // 0x538 NEW_2
	var_467_int = 520656; // 0x53a PushI
	SetMessage(var_467_int); // 0x53b TObjFunc
	ClearReplies(); // 0x53d TObjFunc
	var_468_bool = 0; // 0x53f PushV
	var_468_bool = 0; // 0x540 MovB
	var_469_bool = 0; var_470_object = Obj(); // 0x541 PushV
	var_470_object = var_1_object; // 0x542 MovT
	func_3032(var_470_object); // 0x543 NEW_2
	if(var_469_bool == 0) goto Label_1356; // 0x545 JumpB
	var_475_bool = 0; var_476_object = Obj(); // 0x546 PushV
	var_476_object = var_1_object; // 0x547 MovT
	func_2918(var_476_object); // 0x548 NEW_2
	if(var_475_bool == 0) goto Label_1356; // 0x54a JumpB
	var_468_bool = 1; // 0x54b MovB
	
Label_1356:
	if(var_468_bool == 0) goto Label_1362; // 0x54c JumpB
	var_481_int = 520657; // 0x54d PushI
	var_482_int = 21869; // 0x54e PushI
	var_483_int = 21868; // 0x54f PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x550 TObjFunc
	
Label_1362:
	var_484_int = 520664; // 0x552 PushI
	var_485_int = -1; // 0x553 PushI
	var_486_int = 21875; // 0x554 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x555 TObjFunc
	goto Label_1370; // 0x557 Jump
	
Label_1370:
	var_487_bool = 0; // 0x55a PushV
	func_2733(var_487_bool); // 0x55b NEW_2
	if(var_487_bool == 0) goto Label_1385; // 0x55d JumpB
	
Label_1374:
	lshWaitForAnimEnd(); // 0x55e Func
	var_488_string = var_3_string; // 0x560 PushT
	if(var_488_string == 0) goto Label_1379; // 0x561 JumpB
	goto Label_1384; // 0x562 Jump
	
Label_1384:
	goto Label_1399; // 0x568 Jump
	
Label_1399:
	return 0; // 0x577 Return
	
Label_1379:
	var_489_string = ""; // 0x563 PushV
	var_489_string = var_2_object; // 0x564 MovT
	func_2532(var_489_string); // 0x565 NEW_2
	goto Label_1374; // 0x567 Jump
	
Label_1385:
	var_490_string = "all"; // 0x569 PushS
	var_491_string = "idle"; // 0x56a PushS
	PlayAnimation(var_490_string, var_491_string); // 0x56b Func
	
Label_1389:
	WaitForAnimEnd(); // 0x56d Func
	var_492_string = var_3_string; // 0x56f PushT
	if(var_492_string == 0) goto Label_1394; // 0x570 JumpB
	goto Label_1399; // 0x571 Jump
	
Label_1394:
	var_493_string = "all"; // 0x572 PushS
	var_494_string = "idle"; // 0x573 PushS
	PlayAnimation(var_493_string, var_494_string); // 0x574 Func
	goto Label_1389; // 0x576 Jump
}


func_2612(var_311_int, var_312_string)
{
	var_313_int = 0; var_314_int = 0; // 0xa34 PushV
	GetVariable(var_312_string, var_314_int); // 0xa35 Func
	var_311_int = var_314_int; // 0xa37 Mov
	return 2; // 0xa38 Return
}


func_2617(var_370_bool, var_372_string)
{
	var_373_int = 0; var_374_bool = 0; var_375_int = 0; var_376_bool = 0; // 0xa39 PushV
	GetInvItemByName(var_375_int, var_372_string); // 0xa3a Func
	HasItem(var_375_int, var_376_bool); // 0xa3c ObjFunc
	var_370_bool = var_376_bool; // 0xa3e Mov
	return 4; // 0xa3f Return
}


func_2875()
{
	var_136_string = "oob1Laska2"; // 0xb3c PushS
	var_137_int = 1; // 0xb3d PushI
	SetVariable(var_136_string, var_137_int); // 0xb3e Func
	return 0; // 0xb40 Return
}


func_2047()
{
	var_622_float = 0; var_623_float = 0; // 0x7ff PushV
	var_624_int = 8; // 0x800 PushI
	var_625_int = 16; // 0x801 PushI
	rand(var_623_float, var_624_int, var_625_int); // 0x802 Func
	var_626_int = 10; // 0x804 PushI
	SetTimer(var_626_int, var_623_float); // 0x805 Func
	return 2; // 0x807 Return
}


func_2624(var_165_bool, var_166_object, var_167_float)
{
	var_168_bool = var_166_object == 0; // 0xa41 Not
	if(var_168_bool == 0) goto Label_2629; // 0xa42 JumpB
	var_165_bool = 0; // 0xa43 MovB
	return 0; // 0xa44 Return
	
Label_2629:
	var_169_int = 0; // 0xa45 PushI
	var_170_bool = var_167_float > var_169_int; // 0xa46 GT
	if(var_170_bool == 0) goto Label_2636; // 0xa47 JumpB
	var_171_int = 8; // 0xa48 PushI
	SendWorldWndMessage(var_171_int); // 0xa49 Func
	goto Label_2645; // 0xa4b Jump
	
Label_2645:
	var_172_float = 0; // 0xa55 PushV
	var_172_float = var_167_float; // 0xa56 Mov
	func_2659(var_172_float); // 0xa57 NEW_2
	var_176_bool = 0; var_177_object = Obj(); var_178_string = ""; var_179_float = 0; var_180_float = 0; var_181_float = 0; // 0xa59 PushV
	var_177_object = var_166_object; // 0xa5a Mov
	var_178_string = "reputation"; // 0xa5b MovS
	var_179_float = var_167_float; // 0xa5c Mov
	var_180_float = 0; // 0xa5d MovI
	var_181_float = 1; // 0xa5e MovI
	func_2263(var_176_bool, var_177_object, var_178_string, var_179_float, var_180_float, var_181_float); // 0xa5f NEW_2
	var_165_bool = 1; // 0xa61 MovB
	return 0; // 0xa62 Return
	
Label_2636:
	var_200_int = 0; // 0xa4c PushI
	var_201_bool = var_167_float < var_200_int; // 0xa4d LT
	if(var_201_bool == 0) goto Label_2643; // 0xa4e JumpB
	var_202_int = 9; // 0xa4f PushI
	SendWorldWndMessage(var_202_int); // 0xa50 Func
	goto Label_2645; // 0xa52 Jump
	
Label_2643:
	var_165_bool = 0; // 0xa53 MovB
	return 0; // 0xa54 Return
}


func_3137(var_38_object)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_object = Obj(); // 0xc41 PushV
	GetMainOutdoorScene(var_41_object); // 0xc42 Func
	var_43_bool = var_41_object == 0; // 0xc44 NullEq
	if(var_43_bool == 0) goto Label_3148; // 0xc45 JumpB
	var_44_string = "Can't find main outdoor scene"; // 0xc46 PushS
	Trace(var_44_string); // 0xc47 Func
	var_42_object = 0; // 0xc49 SetNull
	var_38_object = var_42_object; // 0xc4a Mov
	return 4; // 0xc4b Return
	
Label_3148:
	GetMap(var_42_object); // 0xc4c ObjFunc
	var_38_object = var_42_object; // 0xc4e Mov
	return 4; // 0xc4f Return
}


func_2881()
{
	var_207_string = "oob1Laska3"; // 0xb42 PushS
	var_208_int = 1; // 0xb43 PushI
	SetVariable(var_207_string, var_208_int); // 0xb44 Func
	return 0; // 0xb46 Return
}


func_2887()
{
	var_234_bool = 0; var_235_string = ""; var_236_string = ""; // 0xb48 PushV
	var_235_string = "quest_b1_02"; // 0xb49 MovS
	var_236_string = "fail"; // 0xb4a MovS
	func_2669(var_234_bool, var_235_string, var_236_string); // 0xb4b NEW_2
	return 0; // 0xb4d Return
}


func_2377()
{
	var_266_bool = 0; var_267_bool = 0; // 0x949 PushV
	CameraSwitchToNormal(); // 0x94a Func
	var_268_bool = 0; // 0x94c PushV
	func_2733(var_268_bool); // 0x94d NEW_2
	if(var_268_bool == 0) goto Label_2385; // 0x94f JumpB
	goto Label_2393; // 0x950 Jump
	
Label_2393:
	return 2; // 0x959 Return
	
Label_2385:
	var_269_string = "head"; // 0x951 PushS
	HasAnimationTrack(var_267_bool, var_269_string); // 0x952 Func
	var_270_bool = var_267_bool; // 0x954 Push
	if(var_270_bool == 0) goto Label_2393; // 0x955 JumpB
	var_271_string = "head"; // 0x956 PushS
	UnlookAsync(var_271_string); // 0x957 Func
}


func_1865(var_0_object, var_1_object, var_2_object, var_3_string, var_588_object, var_589_object)
{
	var_0_object = var_589_object; // 0x74a TMov
	var_1_object = var_588_object; // 0x74b TMov
	var_3_string = 0; // 0x74c TMovB
	var_594_int = 1; // 0x74d PushI
	if(var_594_int == 0) goto Label_1893; // 0x74e JumpB
	var_595_string = ""; // 0x74f PushV
	var_595_string = "Neutral"; // 0x750 MovS
	func_1923(var_589_object, var_595_string); // 0x751 NEW_2
	var_603_int = 540551; // 0x753 PushI
	SetMessage(var_603_int); // 0x754 TObjFunc
	ClearReplies(); // 0x756 TObjFunc
	var_604_int = 540552; // 0x758 PushI
	var_605_int = -1; // 0x759 PushI
	var_606_int = 42561; // 0x75a PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x75b TObjFunc
	var_607_int = 540795; // 0x75d PushI
	var_608_int = -1; // 0x75e PushI
	var_609_int = 42844; // 0x75f PushI
	AddReply(var_607_int, var_608_int, var_609_int); // 0x760 TObjFunc
	goto Label_1893; // 0x762 Jump
	
Label_1893:
	var_610_bool = 0; // 0x765 PushV
	func_2733(var_610_bool); // 0x766 NEW_2
	if(var_610_bool == 0) goto Label_1908; // 0x768 JumpB
	
Label_1897:
	lshWaitForAnimEnd(); // 0x769 Func
	var_611_string = var_3_string; // 0x76b PushT
	if(var_611_string == 0) goto Label_1902; // 0x76c JumpB
	goto Label_1907; // 0x76d Jump
	
Label_1907:
	goto Label_1922; // 0x773 Jump
	
Label_1922:
	return 0; // 0x782 Return
	
Label_1902:
	var_612_string = ""; // 0x76e PushV
	var_612_string = var_2_object; // 0x76f MovT
	func_2532(var_612_string); // 0x770 NEW_2
	goto Label_1897; // 0x772 Jump
	
Label_1908:
	var_613_string = "all"; // 0x774 PushS
	var_614_string = "idle"; // 0x775 PushS
	PlayAnimation(var_613_string, var_614_string); // 0x776 Func
	
Label_1912:
	WaitForAnimEnd(); // 0x778 Func
	var_615_string = var_3_string; // 0x77a PushT
	if(var_615_string == 0) goto Label_1917; // 0x77b JumpB
	goto Label_1922; // 0x77c Jump
	
Label_1917:
	var_616_string = "all"; // 0x77d PushS
	var_617_string = "idle"; // 0x77e PushS
	PlayAnimation(var_616_string, var_617_string); // 0x77f Func
	goto Label_1912; // 0x781 Jump
}


func_2894()
{
	var_218_int = 0; var_219_string = ""; // 0xb4f PushV
	var_219_string = "b1q02"; // 0xb50 MovS
	func_2612(var_218_int, var_219_string); // 0xb51 NEW_2
	var_222_int = 0; // 0xb53 PushI
	var_223_bool = var_218_int != var_222_int; // 0xb54 Neq
	if(var_223_bool == 0) goto Label_2905; // 0xb55 JumpB
	func_3070(); // 0xb57 NEW_2
	
Label_2905:
	return 0; // 0xb59 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_523_object, var_524_object)
{
	var_0_object = var_524_object; // 0x52 TMov
	var_1_object = var_523_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_529_int = 1; // 0x55 PushI
	if(var_529_int == 0) goto Label_119; // 0x56 JumpB
	var_530_string = ""; // 0x57 PushV
	var_530_string = "Welldie"; // 0x58 MovS
	func_149(var_524_object, var_530_string); // 0x59 NEW_2
	var_538_int = 535253; // 0x5b PushI
	SetMessage(var_538_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_539_bool = 0; var_540_object = Obj(); // 0x60 PushV
	var_540_object = var_1_object; // 0x61 MovT
	func_2942(var_540_object); // 0x62 NEW_2
	if(var_539_bool == 0) goto Label_106; // 0x64 JumpB
	var_545_int = 535254; // 0x65 PushI
	var_546_int = 37026; // 0x66 PushI
	var_547_int = 36929; // 0x67 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x68 TObjFunc
	
Label_106:
	var_548_int = 535341; // 0x6a PushI
	var_549_int = -1; // 0x6b PushI
	var_550_int = 37024; // 0x6c PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x6d TObjFunc
	var_551_int = 535342; // 0x6f PushI
	var_552_int = -1; // 0x70 PushI
	var_553_int = 37025; // 0x71 PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x72 TObjFunc
	goto Label_119; // 0x74 Jump
	
Label_119:
	var_554_bool = 0; // 0x77 PushV
	func_2733(var_554_bool); // 0x78 NEW_2
	if(var_554_bool == 0) goto Label_134; // 0x7a JumpB
	
Label_123:
	lshWaitForAnimEnd(); // 0x7b Func
	var_555_string = var_3_string; // 0x7d PushT
	if(var_555_string == 0) goto Label_128; // 0x7e JumpB
	goto Label_133; // 0x7f Jump
	
Label_133:
	goto Label_148; // 0x85 Jump
	
Label_148:
	return 0; // 0x94 Return
	
Label_128:
	var_556_string = ""; // 0x80 PushV
	var_556_string = var_2_object; // 0x81 MovT
	func_2532(var_556_string); // 0x82 NEW_2
	goto Label_123; // 0x84 Jump
	
Label_134:
	var_557_string = "all"; // 0x86 PushS
	var_558_string = "idle"; // 0x87 PushS
	PlayAnimation(var_557_string, var_558_string); // 0x88 Func
	
Label_138:
	WaitForAnimEnd(); // 0x8a Func
	var_559_string = var_3_string; // 0x8c PushT
	if(var_559_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_143:
	var_560_string = "all"; // 0x8f PushS
	var_561_string = "idle"; // 0x90 PushS
	PlayAnimation(var_560_string, var_561_string); // 0x91 Func
	goto Label_138; // 0x93 Jump
}


func_3154(var_90_object, var_91_string, var_92_float)
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_object = Obj(); var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_object = Obj(); var_101_bool = 0; // 0xc52 PushV
	GetMainOutdoorScene(var_100_object); // 0xc53 Func
	var_102_bool = var_100_object == 0; // 0xc55 NullEq
	if(var_102_bool == 0) goto Label_3163; // 0xc56 JumpB
	var_103_string = "Can't find main outdoor scene"; // 0xc57 PushS
	Trace(var_103_string); // 0xc58 Func
	return 8; // 0xc5a Return
	
Label_3163:
	GetLocator(var_91_string, var_101_bool, var_98_cvector, var_99_cvector); // 0xc5b ObjFunc
	var_104_bool = var_101_bool == 0; // 0xc5d Not
	if(var_104_bool == 0) goto Label_3173; // 0xc5e JumpB
	var_105_string = "Warning: outdoor scene locator "; // 0xc5f PushS
	var_106_int = var_105_string + var_91_string; // 0xc60 Add
	var_107_string = " doesnt exist"; // 0xc61 PushS
	var_108_int = var_106_int + var_107_string; // 0xc62 Add
	Trace(var_108_int); // 0xc63 Func
	
Label_3173:
	GetMap(var_90_object); // 0xc65 ObjFunc
	var_109_bool = var_90_object == 0; // 0xc67 NullEq
	if(var_109_bool == 0) goto Label_3181; // 0xc68 JumpB
	var_110_string = "Can't find map"; // 0xc69 PushS
	Trace(var_110_string); // 0xc6a Func
	return 8; // 0xc6c Return
	
Label_3181:
	var_111_float = GetByIndex(var_98_cvector, 0); // 0xc6d PushE
	var_112_float = GetByIndex(var_98_cvector, 2); // 0xc6e PushE
	SetMapParams(var_111_float, var_112_float, var_92_float); // 0xc6f ObjFunc
	return 8; // 0xc71 Return
}


func_1621(var_0_object, var_1_object, var_2_object, var_3_string, var_215_object, var_216_object)
{
	var_0_object = var_216_object; // 0x656 TMov
	var_1_object = var_215_object; // 0x657 TMov
	var_3_string = 0; // 0x658 TMovB
	var_221_int = 1; // 0x659 PushI
	if(var_221_int == 0) goto Label_1649; // 0x65a JumpB
	var_222_string = ""; // 0x65b PushV
	var_222_string = "Neutral"; // 0x65c MovS
	func_1679(var_216_object, var_222_string); // 0x65d NEW_2
	var_239_int = 520750; // 0x65f PushI
	SetMessage(var_239_int); // 0x660 TObjFunc
	ClearReplies(); // 0x662 TObjFunc
	var_240_int = 520751; // 0x664 PushI
	var_241_int = 21964; // 0x665 PushI
	var_242_int = 21963; // 0x666 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x667 TObjFunc
	var_243_int = 520755; // 0x669 PushI
	var_244_int = 21968; // 0x66a PushI
	var_245_int = 21967; // 0x66b PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x66c TObjFunc
	goto Label_1649; // 0x66e Jump
	
Label_1649:
	var_246_bool = 0; // 0x671 PushV
	func_2733(var_246_bool); // 0x672 NEW_2
	if(var_246_bool == 0) goto Label_1664; // 0x674 JumpB
	
Label_1653:
	lshWaitForAnimEnd(); // 0x675 Func
	var_247_string = var_3_string; // 0x677 PushT
	if(var_247_string == 0) goto Label_1658; // 0x678 JumpB
	goto Label_1663; // 0x679 Jump
	
Label_1663:
	goto Label_1678; // 0x67f Jump
	
Label_1678:
	return 0; // 0x68e Return
	
Label_1658:
	var_248_string = ""; // 0x67a PushV
	var_248_string = var_2_object; // 0x67b MovT
	func_2532(var_248_string); // 0x67c NEW_2
	goto Label_1653; // 0x67e Jump
	
Label_1664:
	var_259_string = "all"; // 0x680 PushS
	var_260_string = "idle"; // 0x681 PushS
	PlayAnimation(var_259_string, var_260_string); // 0x682 Func
	
Label_1668:
	WaitForAnimEnd(); // 0x684 Func
	var_261_string = var_3_string; // 0x686 PushT
	if(var_261_string == 0) goto Label_1673; // 0x687 JumpB
	goto Label_1678; // 0x688 Jump
	
Label_1673:
	var_262_string = "all"; // 0x689 PushS
	var_263_string = "idle"; // 0x68a PushS
	PlayAnimation(var_262_string, var_263_string); // 0x68b Func
	goto Label_1668; // 0x68d Jump
}


func_2394(var_120_bool, var_121_object)
{
	var_125_int = 0; var_126_int = 0; var_127_int = 0; var_128_int = 0; // 0x95a PushV
	var_129_string = "voice_common"; // 0x95b PushS
	GetVariable(var_129_string, var_127_int); // 0x95c Func
	var_130_int = var_127_int; // 0x95e Push
	if(var_130_int == 0) goto Label_2432; // 0x95f JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x960 PushV
	var_132_object = var_121_object; // 0x961 Mov
	func_2452(var_132_object); // 0x962 NEW_2
	var_161_bool = var_131_bool == 0; // 0x964 Not
	if(var_161_bool == 0) goto Label_2414; // 0x965 JumpB
	var_162_bool = 0; var_163_object = Obj(); // 0x966 PushV
	var_163_object = var_121_object; // 0x967 Mov
	func_2489(var_163_object); // 0x968 NEW_2
	var_197_bool = var_162_bool == 0; // 0x96a Not
	if(var_197_bool == 0) goto Label_2414; // 0x96b JumpB
	var_120_bool = 0; // 0x96c MovB
	return 4; // 0x96d Return
	
Label_2414:
	var_198_int = 2; // 0x96e PushI
	irand(var_128_int, var_198_int); // 0x96f Func
	var_199_int = var_128_int; // 0x971 Push
	if(var_199_int == 0) goto Label_2427; // 0x972 JumpB
	var_200_string = "voice_common"; // 0x973 PushS
	var_201_int = 1; // 0x974 PushI
	var_202_int = var_127_int + var_201_int; // 0x975 Add
	var_203_int = 3; // 0x976 PushI
	var_204_int = var_202_int / var_203_int; // 0x977 Mod
	SetVariable(var_200_string, var_204_int); // 0x978 Func
	goto Label_2431; // 0x97a Jump
	
Label_2431:
	goto Label_2450; // 0x97f Jump
	
Label_2450:
	var_120_bool = 1; // 0x992 MovB
	return 4; // 0x993 Return
	
Label_2427:
	var_205_string = "voice_common"; // 0x97b PushS
	var_206_int = 0; // 0x97c PushI
	SetVariable(var_205_string, var_206_int); // 0x97d Func
	
Label_2432:
	var_207_bool = 0; var_208_object = Obj(); // 0x980 PushV
	var_208_object = var_121_object; // 0x981 Mov
	func_2489(var_208_object); // 0x982 NEW_2
	var_209_bool = var_207_bool == 0; // 0x984 Not
	if(var_209_bool == 0) goto Label_2446; // 0x985 JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0x986 PushV
	var_211_object = var_121_object; // 0x987 Mov
	func_2452(var_211_object); // 0x988 NEW_2
	var_212_bool = var_210_bool == 0; // 0x98a Not
	if(var_212_bool == 0) goto Label_2446; // 0x98b JumpB
	var_120_bool = 0; // 0x98c MovB
	return 4; // 0x98d Return
	
Label_2446:
	var_213_string = "voice_common"; // 0x98e PushS
	var_214_int = 1; // 0x98f PushI
	SetVariable(var_213_string, var_214_int); // 0x990 Func
}


func_2906(var_406_bool)
{
	var_408_int = 0; var_409_string = ""; // 0xb5b PushV
	var_409_string = "oob1Laska4"; // 0xb5c MovS
	func_2612(var_408_int, var_409_string); // 0xb5d NEW_2
	var_410_int = 0; // 0xb5f PushI
	var_411_bool = var_408_int == var_410_int; // 0xb60 Eq
	if(var_411_bool == 0) goto Label_2916; // 0xb61 JumpB
	var_406_bool = 1; // 0xb62 MovB
	return 0; // 0xb63 Return
	
Label_2916:
	var_406_bool = 0; // 0xb64 MovB
	return 0; // 0xb65 Return
}


func_2659(var_172_float)
{
	var_173_object = Obj(); var_174_object = Obj(); // 0xa63 PushV
	CreateFloatVector(var_174_object); // 0xa64 Func
	add(var_172_float); // 0xa66 ObjFunc
	var_175_int = 16; // 0xa68 PushI
	SendWorldWndMessage(var_175_int, var_174_object); // 0xa69 Func
	return 2; // 0xa6b Return
}


func_2918(var_475_bool)
{
	var_477_int = 0; var_478_string = ""; // 0xb67 PushV
	var_478_string = "b6q01KlaraLaska"; // 0xb68 MovS
	func_2612(var_477_int, var_478_string); // 0xb69 NEW_2
	var_479_int = 0; // 0xb6b PushI
	var_480_bool = var_477_int != var_479_int; // 0xb6c Neq
	if(var_480_bool == 0) goto Label_2928; // 0xb6d JumpB
	var_475_bool = 1; // 0xb6e MovB
	return 0; // 0xb6f Return
	
Label_2928:
	var_475_bool = 0; // 0xb70 MovB
	return 0; // 0xb71 Return
}


func_2669(var_154_bool, var_155_string, var_156_string)
{
	var_157_object = Obj(); var_158_object = Obj(); // 0xa6d PushV
	FindActor(var_158_object, var_155_string); // 0xa6e Func
	var_159_bool = var_158_object == 0; // 0xa70 NullEq
	if(var_159_bool == 0) goto Label_2676; // 0xa71 JumpB
	var_154_bool = 0; // 0xa72 MovB
	return 2; // 0xa73 Return
	
Label_2676:
	Trigger(var_158_object, var_156_string); // 0xa74 Func
	var_154_bool = 1; // 0xa76 MovB
	return 2; // 0xa77 Return
}


func_2930(var_412_bool)
{
	var_414_int = 0; var_415_string = ""; // 0xb73 PushV
	var_415_string = "b1q05"; // 0xb74 MovS
	func_2612(var_414_int, var_415_string); // 0xb75 NEW_2
	var_416_int = 1000; // 0xb77 PushI
	var_417_bool = var_414_int == var_416_int; // 0xb78 Eq
	if(var_417_bool == 0) goto Label_2940; // 0xb79 JumpB
	var_412_bool = 1; // 0xb7a MovB
	return 0; // 0xb7b Return
	
Label_2940:
	var_412_bool = 0; // 0xb7c MovB
	return 0; // 0xb7d Return
}


func_3187(var_111_int)
{
	var_112_int = 0; var_113_int = 0; // 0xc73 PushV
	var_114_string = "branch"; // 0xc74 PushS
	GetVariable(var_114_string, var_113_int); // 0xc75 Func
	var_115_int = 0; // 0xc77 PushI
	var_116_bool = var_113_int == var_115_int; // 0xc78 Eq
	if(var_116_bool == 0) goto Label_3197; // 0xc79 JumpB
	var_111_int = 1; // 0xc7a MovI
	return 2; // 0xc7b Return
	
Label_3197:
	var_117_int = 1; // 0xc7d PushI
	var_118_bool = var_113_int == var_117_int; // 0xc7e Eq
	if(var_118_bool == 0) goto Label_3202; // 0xc7f JumpB
	var_111_int = 2; // 0xc80 MovI
	return 2; // 0xc81 Return
	
Label_3202:
	var_111_int = 3; // 0xc82 MovI
	return 2; // 0xc83 Return
}


func_2167()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; // 0x877 PushV
	WaitForAnimEnd(); // 0x878 Func
	var_42_bool = 0; // 0x87a PushV
	func_2304(var_42_bool); // 0x87b NEW_2
	var_43_bool = var_42_bool == 0; // 0x87d Not
	if(var_43_bool == 0) goto Label_2176; // 0x87e JumpB
	return 12; // 0x87f Return
	
Label_2176:
	var_44_int = 0; // 0x880 PushV
	func_2708(var_44_int); // 0x881 NEW_2
	var_36_int = var_44_int; // 0x882 Mov
	var_37_int = 0; // 0x884 MovI
	
Label_2181:
	var_57_bool = 0; // 0x885 PushV
	var_57_bool = 0; // 0x886 MovB
	var_58_int = 5; // 0x887 PushI
	var_59_bool = var_37_int < var_58_int; // 0x888 LT
	if(var_59_bool == 0) goto Label_2191; // 0x889 JumpB
	var_60_bool = 0; // 0x88a PushV
	func_2304(var_60_bool); // 0x88b NEW_2
	if(var_60_bool == 0) goto Label_2191; // 0x88d JumpB
	var_57_bool = 1; // 0x88e MovB
	
Label_2191:
	if(var_57_bool == 0) goto Label_2233; // 0x88f JumpB
	var_61_bool = var_36_int == 0; // 0x890 Not
	if(var_61_bool == 0) goto Label_2201; // 0x891 JumpB
	var_62_int = 3; // 0x892 PushI
	Sleep(var_62_int, var_38_bool); // 0x893 Func
	var_63_bool = var_38_bool == 0; // 0x895 Not
	if(var_63_bool == 0) goto Label_2200; // 0x896 JumpB
	goto Label_2233; // 0x897 Jump
	
Label_2233:
	ResetAAS(); // 0x8b9 Func
	return 12; // 0x8bb Return
	
Label_2200:
	goto Label_2222; // 0x898 Jump
	
Label_2222:
	var_64_bool = 0; // 0x8ae PushV
	func_2236(var_64_bool); // 0x8af NEW_2
	var_65_bool = var_64_bool == 0; // 0x8b1 Not
	if(var_65_bool == 0) goto Label_2228; // 0x8b2 JumpB
	goto Label_2233; // 0x8b3 Jump
	
Label_2228:
	ResetAAS(); // 0x8b4 Func
	var_66_int = 1; // 0x8b6 PushI
	var_37_int = var_37_int + var_66_int; // 0x8b7 Add2
	goto Label_2181; // 0x8b8 Jump
	
Label_2201:
	irand(var_39_int, var_36_int); // 0x899 Func
	var_67_int = 5; // 0x89b PushI
	irand(var_40_int, var_67_int); // 0x89c Func
	var_68_int = 0; // 0x89e PushI
	var_69_bool = var_40_int != var_68_int; // 0x89f Neq
	if(var_69_bool == 0) goto Label_2210; // 0x8a0 JumpB
	var_39_int = 0; // 0x8a1 MovI
	
Label_2210:
	var_70_string = "all"; // 0x8a2 PushS
	var_71_string = ""; var_72_int = 0; // 0x8a3 PushV
	var_72_int = var_39_int; // 0x8a4 Mov
	func_2701(var_71_string, var_72_int); // 0x8a5 NEW_2
	PlayAnimation(var_70_string, var_71_string); // 0x8a7 Func
	WaitForAnimEnd(var_41_bool); // 0x8a9 Func
	var_73_bool = var_41_bool == 0; // 0x8ab Not
	if(var_73_bool == 0) goto Label_2222; // 0x8ac JumpB
	goto Label_2233; // 0x8ad Jump
}


func_1400(var_2_object, var_459_string)
{
	var_460_bool = 0; // 0x579 PushV
	func_2733(var_460_bool); // 0x57a NEW_2
	var_461_bool = var_460_bool == 0; // 0x57c Not
	if(var_461_bool == 0) goto Label_1407; // 0x57d JumpB
	return 0; // 0x57e Return
	
Label_1407:
	var_462_bool = var_459_string == var_2_object; // 0x57f Eq
	if(var_462_bool == 0) goto Label_1410; // 0x580 JumpB
	return 0; // 0x581 Return
	
Label_1410:
	var_463_string = ""; var_464_bool = 0; // 0x582 PushV
	var_463_string = var_459_string; // 0x583 Mov
	var_465_string = ""; // 0x584 PushS
	var_466_bool = var_459_string == var_465_string; // 0x585 Eq
	if(var_466_bool == 0) goto Label_1417; // 0x586 JumpB
	var_464_bool = 0; // 0x587 MovB
	goto Label_1418; // 0x588 Jump
	
Label_1418:
	func_2548(var_463_string, var_464_bool); // 0x58a NEW_2
	var_2_object = var_459_string; // 0x58c TMov
	return 0; // 0x58d Return
	
Label_1417:
	var_464_bool = 1; // 0x589 MovB
}


func_2681(var_49_float)
{
	var_50_float = 0; var_51_float = 0; // 0xa79 PushV
	GetGameTime(var_51_float); // 0xa7a Func
	var_49_float = var_51_float; // 0xa7c Mov
	return 2; // 0xa7d Return
}


func_379(var_0_object, var_1_object, var_2_object, var_3_string, var_301_object, var_302_object)
{
	var_0_object = var_302_object; // 0x17c TMov
	var_1_object = var_301_object; // 0x17d TMov
	var_3_string = 0; // 0x17e TMovB
	var_307_int = 1; // 0x17f PushI
	if(var_307_int == 0) goto Label_529; // 0x180 JumpB
	var_308_bool = 0; // 0x181 PushV
	var_308_bool = 0; // 0x182 MovB
	var_309_bool = 0; var_310_object = Obj(); // 0x183 PushV
	var_310_object = var_1_object; // 0x184 MovT
	func_2954(var_310_object); // 0x185 NEW_2
	if(var_309_bool == 0) goto Label_399; // 0x187 JumpB
	var_317_bool = 0; var_318_object = Obj(); // 0x188 PushV
	var_318_object = var_1_object; // 0x189 MovT
	func_3008(var_318_object); // 0x18a NEW_2
	var_323_bool = var_317_bool == 0; // 0x18c Not
	if(var_323_bool == 0) goto Label_399; // 0x18d JumpB
	var_308_bool = 1; // 0x18e MovB
	
Label_399:
	if(var_308_bool == 0) goto Label_425; // 0x18f JumpB
	var_324_object = Obj(); var_325_object = Obj(); // 0x190 PushV
	var_324_object = var_1_object; // 0x191 MovT
	var_325_object = var_0_object; // 0x192 MovT
	func_2815(); // 0x193 NEW_2
	var_328_string = ""; // 0x195 PushV
	var_328_string = "Neutral"; // 0x196 MovS
	func_559(var_302_object, var_328_string); // 0x197 NEW_2
	var_336_int = 517892; // 0x199 PushI
	SetMessage(var_336_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_337_int = 519614; // 0x19e PushI
	var_338_int = 20800; // 0x19f PushI
	var_339_int = 20799; // 0x1a0 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x1a1 TObjFunc
	var_340_int = 520399; // 0x1a3 PushI
	var_341_int = 21606; // 0x1a4 PushI
	var_342_int = 21605; // 0x1a5 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x1a6 TObjFunc
	goto Label_529; // 0x1a8 Jump
	
Label_529:
	var_343_bool = 0; // 0x211 PushV
	func_2733(var_343_bool); // 0x212 NEW_2
	if(var_343_bool == 0) goto Label_544; // 0x214 JumpB
	
Label_533:
	lshWaitForAnimEnd(); // 0x215 Func
	var_344_string = var_3_string; // 0x217 PushT
	if(var_344_string == 0) goto Label_538; // 0x218 JumpB
	goto Label_543; // 0x219 Jump
	
Label_543:
	goto Label_558; // 0x21f Jump
	
Label_558:
	return 0; // 0x22e Return
	
Label_538:
	var_345_string = ""; // 0x21a PushV
	var_345_string = var_2_object; // 0x21b MovT
	func_2532(var_345_string); // 0x21c NEW_2
	goto Label_533; // 0x21e Jump
	
Label_544:
	var_346_string = "all"; // 0x220 PushS
	var_347_string = "idle"; // 0x221 PushS
	PlayAnimation(var_346_string, var_347_string); // 0x222 Func
	
Label_548:
	WaitForAnimEnd(); // 0x224 Func
	var_348_string = var_3_string; // 0x226 PushT
	if(var_348_string == 0) goto Label_553; // 0x227 JumpB
	goto Label_558; // 0x228 Jump
	
Label_553:
	var_349_string = "all"; // 0x229 PushS
	var_350_string = "idle"; // 0x22a PushS
	PlayAnimation(var_349_string, var_350_string); // 0x22b Func
	goto Label_548; // 0x22d Jump
	
Label_425:
	var_351_string = ""; // 0x1a9 PushV
	var_351_string = "Neutral"; // 0x1aa MovS
	func_559(var_302_object, var_351_string); // 0x1ab NEW_2
	var_352_int = 517901; // 0x1ad PushI
	SetMessage(var_352_int); // 0x1ae TObjFunc
	ClearReplies(); // 0x1b0 TObjFunc
	var_353_bool = 0; // 0x1b2 PushV
	var_353_bool = 0; // 0x1b3 MovB
	var_354_bool = 0; var_355_object = Obj(); // 0x1b4 PushV
	var_355_object = var_1_object; // 0x1b5 MovT
	func_2966(var_355_object); // 0x1b6 NEW_2
	if(var_354_bool == 0) goto Label_448; // 0x1b8 JumpB
	var_360_bool = 0; var_361_object = Obj(); // 0x1b9 PushV
	var_361_object = var_1_object; // 0x1ba MovT
	func_3008(var_361_object); // 0x1bb NEW_2
	var_362_bool = var_360_bool == 0; // 0x1bd Not
	if(var_362_bool == 0) goto Label_448; // 0x1be JumpB
	var_353_bool = 1; // 0x1bf MovB
	
Label_448:
	if(var_353_bool == 0) goto Label_454; // 0x1c0 JumpB
	var_363_int = 517902; // 0x1c1 PushI
	var_364_int = 19042; // 0x1c2 PushI
	var_365_int = 19040; // 0x1c3 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x1c4 TObjFunc
	
Label_454:
	var_366_bool = 0; // 0x1c6 PushV
	var_366_bool = 0; // 0x1c7 MovB
	var_367_bool = 0; // 0x1c8 PushV
	var_367_bool = 0; // 0x1c9 MovB
	var_368_bool = 0; var_369_object = Obj(); // 0x1ca PushV
	var_369_object = var_1_object; // 0x1cb MovT
	func_2978(var_368_bool, var_369_object); // 0x1cc NEW_2
	if(var_368_bool == 0) goto Label_469; // 0x1ce JumpB
	var_381_bool = 0; var_382_object = Obj(); // 0x1cf PushV
	var_382_object = var_1_object; // 0x1d0 MovT
	func_2996(var_382_object); // 0x1d1 NEW_2
	if(var_381_bool == 0) goto Label_469; // 0x1d3 JumpB
	var_367_bool = 1; // 0x1d4 MovB
	
Label_469:
	if(var_367_bool == 0) goto Label_477; // 0x1d5 JumpB
	var_387_bool = 0; var_388_object = Obj(); // 0x1d6 PushV
	var_388_object = var_1_object; // 0x1d7 MovT
	func_3008(var_388_object); // 0x1d8 NEW_2
	var_389_bool = var_387_bool == 0; // 0x1da Not
	if(var_389_bool == 0) goto Label_477; // 0x1db JumpB
	var_366_bool = 1; // 0x1dc MovB
	
Label_477:
	if(var_366_bool == 0) goto Label_483; // 0x1dd JumpB
	var_390_int = 517906; // 0x1de PushI
	var_391_int = 19045; // 0x1df PushI
	var_392_int = 19044; // 0x1e0 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x1e1 TObjFunc
	
Label_483:
	var_393_bool = 0; // 0x1e3 PushV
	var_393_bool = 0; // 0x1e4 MovB
	var_394_bool = 0; var_395_object = Obj(); // 0x1e5 PushV
	var_395_object = var_1_object; // 0x1e6 MovT
	func_3008(var_395_object); // 0x1e7 NEW_2
	if(var_394_bool == 0) goto Label_496; // 0x1e9 JumpB
	var_396_bool = 0; var_397_object = Obj(); // 0x1ea PushV
	var_397_object = var_1_object; // 0x1eb MovT
	func_3020(var_397_object); // 0x1ec NEW_2
	if(var_396_bool == 0) goto Label_496; // 0x1ee JumpB
	var_393_bool = 1; // 0x1ef MovB
	
Label_496:
	if(var_393_bool == 0) goto Label_502; // 0x1f0 JumpB
	var_402_int = 517978; // 0x1f1 PushI
	var_403_int = 20805; // 0x1f2 PushI
	var_404_int = 19111; // 0x1f3 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x1f4 TObjFunc
	
Label_502:
	var_405_bool = 0; // 0x1f6 PushV
	var_405_bool = 0; // 0x1f7 MovB
	var_406_bool = 0; var_407_object = Obj(); // 0x1f8 PushV
	var_407_object = var_1_object; // 0x1f9 MovT
	func_2906(var_407_object); // 0x1fa NEW_2
	if(var_406_bool == 0) goto Label_515; // 0x1fc JumpB
	var_412_bool = 0; var_413_object = Obj(); // 0x1fd PushV
	var_413_object = var_1_object; // 0x1fe MovT
	func_2930(var_413_object); // 0x1ff NEW_2
	if(var_412_bool == 0) goto Label_515; // 0x201 JumpB
	var_405_bool = 1; // 0x202 MovB
	
Label_515:
	if(var_405_bool == 0) goto Label_521; // 0x203 JumpB
	var_418_int = 527102; // 0x204 PushI
	var_419_int = 28401; // 0x205 PushI
	var_420_int = 28400; // 0x206 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x207 TObjFunc
	
Label_521:
	var_421_int = 517903; // 0x209 PushI
	var_422_int = -1; // 0x20a PushI
	var_423_int = 19041; // 0x20b PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x20c TObjFunc
	goto Label_529; // 0x20e Jump
}


func_2686(var_175_int)
{
	var_176_float = 0; var_177_float = 0; // 0xa7e PushV
	GetGameTime(var_177_float); // 0xa7f Func
	var_178_int = 1; // 0xa81 PushI
	var_179_int = 0; // 0xa82 PushV
	var_180_int = 24; // 0xa83 PushI
	var_179_int = var_177_float / var_177_float; // 0xa84 Div2
	var_175_int = var_178_int + var_179_int; // 0xa85 Add2
	return 2; // 0xa86 Return
}


func_2942(var_539_bool)
{
	var_541_int = 0; var_542_string = ""; // 0xb7f PushV
	var_542_string = "oob12Laska1"; // 0xb80 MovS
	func_2612(var_541_int, var_542_string); // 0xb81 NEW_2
	var_543_int = 0; // 0xb83 PushI
	var_544_bool = var_541_int == var_543_int; // 0xb84 Eq
	if(var_544_bool == 0) goto Label_2952; // 0xb85 JumpB
	var_539_bool = 1; // 0xb86 MovB
	return 0; // 0xb87 Return
	
Label_2952:
	var_539_bool = 0; // 0xb88 MovB
	return 0; // 0xb89 Return
}


func_1923(var_2_object, var_595_string)
{
	var_596_bool = 0; // 0x784 PushV
	func_2733(var_596_bool); // 0x785 NEW_2
	var_597_bool = var_596_bool == 0; // 0x787 Not
	if(var_597_bool == 0) goto Label_1930; // 0x788 JumpB
	return 0; // 0x789 Return
	
Label_1930:
	var_598_bool = var_595_string == var_2_object; // 0x78a Eq
	if(var_598_bool == 0) goto Label_1933; // 0x78b JumpB
	return 0; // 0x78c Return
	
Label_1933:
	var_599_string = ""; var_600_bool = 0; // 0x78d PushV
	var_599_string = var_595_string; // 0x78e Mov
	var_601_string = ""; // 0x78f PushS
	var_602_bool = var_595_string == var_601_string; // 0x790 Eq
	if(var_602_bool == 0) goto Label_1940; // 0x791 JumpB
	var_600_bool = 0; // 0x792 MovB
	goto Label_1941; // 0x793 Jump
	
Label_1941:
	func_2548(var_599_string, var_600_bool); // 0x795 NEW_2
	var_2_object = var_595_string; // 0x797 TMov
	return 0; // 0x798 Return
	
Label_1940:
	var_600_bool = 1; // 0x794 MovB
}


func_3204(var_44_object)
{
	var_45_int = 0; var_46_int = 0; // 0xc84 PushV
	var_47_string = "mt_laska"; // 0xc85 PushS
	GetVariable(var_47_string, var_46_int); // 0xc86 Func
	var_48_bool = var_46_int == 0; // 0xc88 Not
	if(var_48_bool == 0) goto Label_3220; // 0xc89 JumpB
	var_49_int = 0; var_50_object = Obj(); // 0xc8a PushV
	var_50_object = var_44_object; // 0xc8b Mov
	TaskCall(6); // 0xc8c TaskCall
	func_1540(var_51_object, var_49_int, var_50_object); // 0xc8d NEW_2
	TaskReturn(); // 0xc8e TaskReturn
	var_272_string = "mt_laska"; // 0xc90 PushS
	var_273_int = 1; // 0xc91 PushI
	SetVariable(var_272_string, var_273_int); // 0xc92 Func
	
Label_3220:
	var_274_bool = 0; var_275_int = 0; // 0xc94 PushV
	var_275_int = 1; // 0xc95 MovI
	func_2695(var_274_bool, var_275_int); // 0xc96 NEW_2
	if(var_274_bool == 0) goto Label_3232; // 0xc98 JumpB
	var_277_int = 0; var_278_object = Obj(); // 0xc99 PushV
	var_278_object = var_44_object; // 0xc9a Mov
	TaskCall(2); // 0xc9b TaskCall
	func_298(var_279_object, var_277_int, var_278_object); // 0xc9c NEW_2
	TaskReturn(); // 0xc9d TaskReturn
	return 2; // 0xc9f Return
	
Label_3232:
	var_426_bool = 0; var_427_int = 0; // 0xca0 PushV
	var_427_int = 6; // 0xca1 MovI
	func_2695(var_426_bool, var_427_int); // 0xca2 NEW_2
	if(var_426_bool == 0) goto Label_3244; // 0xca4 JumpB
	var_428_int = 0; var_429_object = Obj(); // 0xca5 PushV
	var_429_object = var_44_object; // 0xca6 Mov
	TaskCall(4); // 0xca7 TaskCall
	func_1247(var_430_object, var_428_int, var_429_object); // 0xca8 NEW_2
	TaskReturn(); // 0xca9 TaskReturn
	return 2; // 0xcab Return
	
Label_3244:
	var_497_bool = 0; var_498_int = 0; // 0xcac PushV
	var_498_int = 12; // 0xcad MovI
	func_2695(var_497_bool, var_498_int); // 0xcae NEW_2
	if(var_497_bool == 0) goto Label_3256; // 0xcb0 JumpB
	var_499_int = 0; var_500_object = Obj(); // 0xcb1 PushV
	var_500_object = var_44_object; // 0xcb2 Mov
	TaskCall(0); // 0xcb3 TaskCall
	func_0(var_501_object, var_499_int, var_500_object); // 0xcb4 NEW_2
	TaskReturn(); // 0xcb5 TaskReturn
	return 2; // 0xcb7 Return
	
Label_3256:
	var_564_int = 0; var_565_object = Obj(); // 0xcb8 PushV
	var_565_object = var_44_object; // 0xcb9 Mov
	TaskCall(8); // 0xcba TaskCall
	func_1784(var_566_object, var_564_int, var_565_object); // 0xcbb NEW_2
	TaskReturn(); // 0xcbc TaskReturn
	return 2; // 0xcbe Return
}


func_2695(var_274_bool, var_275_int)
{
	var_276_int = 0; // 0xa88 PushV
	func_2686(var_276_int); // 0xa89 NEW_2
	var_274_bool = var_276_int == var_275_int; // 0xa8b Eq2
	return 0; // 0xa8c Return
}


func_2954(var_309_bool)
{
	var_311_int = 0; var_312_string = ""; // 0xb8b PushV
	var_312_string = "oob1Laska1"; // 0xb8c MovS
	func_2612(var_311_int, var_312_string); // 0xb8d NEW_2
	var_315_int = 0; // 0xb8f PushI
	var_316_bool = var_311_int == var_315_int; // 0xb90 Eq
	if(var_316_bool == 0) goto Label_2964; // 0xb91 JumpB
	var_309_bool = 1; // 0xb92 MovB
	return 0; // 0xb93 Return
	
Label_2964:
	var_309_bool = 0; // 0xb94 MovB
	return 0; // 0xb95 Return
}


func_2701(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = ""; // 0xa8d PushV
	var_53_string = "idle"; // 0xa8e MovS
	var_54_int = var_51_int; // 0xa8f Push
	if(var_54_int == 0) goto Label_2706; // 0xa90 JumpB
	var_53_string = var_53_string + var_51_int; // 0xa91 Add2
	
Label_2706:
	var_50_string = var_53_string; // 0xa92 Mov
	return 2; // 0xa93 Return
}


func_1679(var_2_object, var_222_string)
{
	var_223_bool = 0; // 0x690 PushV
	func_2733(var_223_bool); // 0x691 NEW_2
	var_224_bool = var_223_bool == 0; // 0x693 Not
	if(var_224_bool == 0) goto Label_1686; // 0x694 JumpB
	return 0; // 0x695 Return
	
Label_1686:
	var_225_bool = var_222_string == var_2_object; // 0x696 Eq
	if(var_225_bool == 0) goto Label_1689; // 0x697 JumpB
	return 0; // 0x698 Return
	
Label_1689:
	var_226_string = ""; var_227_bool = 0; // 0x699 PushV
	var_226_string = var_222_string; // 0x69a Mov
	var_228_string = ""; // 0x69b PushS
	var_229_bool = var_222_string == var_228_string; // 0x69c Eq
	if(var_229_bool == 0) goto Label_1696; // 0x69d JumpB
	var_227_bool = 0; // 0x69e MovB
	goto Label_1697; // 0x69f Jump
	
Label_1697:
	func_2548(var_226_string, var_227_bool); // 0x6a1 NEW_2
	var_2_object = var_222_string; // 0x6a3 TMov
	return 0; // 0x6a4 Return
	
Label_1696:
	var_227_bool = 1; // 0x6a0 MovB
}


func_2708(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0xa94 PushV
	var_47_int = 0; // 0xa95 MovI
	
Label_2710:
	var_49_string = "all"; // 0xa96 PushS
	var_50_string = ""; var_51_int = 0; // 0xa97 PushV
	var_51_int = var_47_int; // 0xa98 Mov
	func_2701(var_50_string, var_51_int); // 0xa99 NEW_2
	HasAnimation(var_48_bool, var_49_string, var_50_string); // 0xa9b Func
	var_55_bool = var_48_bool == 0; // 0xa9d Not
	if(var_55_bool == 0) goto Label_2720; // 0xa9e JumpB
	goto Label_2723; // 0xa9f Jump
	
Label_2723:
	var_44_int = var_47_int; // 0xaa3 Mov
	return 4; // 0xaa4 Return
	
Label_2720:
	var_56_int = 1; // 0xaa0 PushI
	var_47_int = var_47_int + var_56_int; // 0xaa1 Add2
	goto Label_2710; // 0xaa2 Jump
}


func_149(var_2_object, var_530_string)
{
	var_531_bool = 0; // 0x96 PushV
	func_2733(var_531_bool); // 0x97 NEW_2
	var_532_bool = var_531_bool == 0; // 0x99 Not
	if(var_532_bool == 0) goto Label_156; // 0x9a JumpB
	return 0; // 0x9b Return
	
Label_156:
	var_533_bool = var_530_string == var_2_object; // 0x9c Eq
	if(var_533_bool == 0) goto Label_159; // 0x9d JumpB
	return 0; // 0x9e Return
	
Label_159:
	var_534_string = ""; var_535_bool = 0; // 0x9f PushV
	var_534_string = var_530_string; // 0xa0 Mov
	var_536_string = ""; // 0xa1 PushS
	var_537_bool = var_530_string == var_536_string; // 0xa2 Eq
	if(var_537_bool == 0) goto Label_166; // 0xa3 JumpB
	var_535_bool = 0; // 0xa4 MovB
	goto Label_167; // 0xa5 Jump
	
Label_167:
	func_2548(var_534_string, var_535_bool); // 0xa7 NEW_2
	var_2_object = var_530_string; // 0xa9 TMov
	return 0; // 0xaa Return
	
Label_166:
	var_535_bool = 1; // 0xa6 MovB
}


func_2452(var_131_bool)
{
	var_133_string = ""; var_134_int = 0; var_135_bool = 0; var_136_int = 0; var_137_string = ""; var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; // 0x994 PushV
	var_138_string = "c"; // 0x995 MovS
	var_139_int = 0; // 0x996 MovI
	
Label_2455:
	var_143_int = 1; // 0x997 PushI
	if(var_143_int == 0) goto Label_2468; // 0x998 JumpB
	var_144_int = 1; // 0x999 PushI
	var_145_int = var_139_int + var_144_int; // 0x99a Add
	var_146_int = var_138_string + var_145_int; // 0x99b Add
	HasProperty(var_146_int, var_140_bool); // 0x99c ObjFunc
	var_147_bool = var_140_bool == 0; // 0x99e Not
	if(var_147_bool == 0) goto Label_2465; // 0x99f JumpB
	goto Label_2468; // 0x9a0 Jump
	
Label_2468:
	var_148_bool = var_139_int == 0; // 0x9a4 Not
	if(var_148_bool == 0) goto Label_2472; // 0x9a5 JumpB
	var_131_bool = 0; // 0x9a6 MovB
	return 10; // 0x9a7 Return
	
Label_2472:
	var_141_int = 0; // 0x9a8 MovI
	var_149_int = 1; // 0x9a9 PushI
	var_150_bool = var_139_int > var_149_int; // 0x9aa GT
	if(var_150_bool == 0) goto Label_2478; // 0x9ab JumpB
	irand(var_141_int, var_139_int); // 0x9ac Func
	
Label_2478:
	var_151_int = 1; // 0x9ae PushI
	var_152_int = var_141_int + var_151_int; // 0x9af Add
	var_153_int = var_138_string + var_152_int; // 0x9b0 Add
	GetProperty(var_153_int, var_142_string); // 0x9b1 ObjFunc
	var_154_bool = 0; var_155_string = ""; // 0x9b3 PushV
	var_155_string = var_142_string; // 0x9b4 Mov
	func_2563(var_154_bool, var_155_string); // 0x9b5 NEW_2
	var_131_bool = var_154_bool; // 0x9b6 Mov
	return 10; // 0x9b8 Return
	
Label_2465:
	var_160_int = 1; // 0x9a1 PushI
	var_139_int = var_139_int + var_160_int; // 0x9a2 Add2
	goto Label_2455; // 0x9a3 Jump
}


func_2966(var_354_bool)
{
	var_356_int = 0; var_357_string = ""; // 0xb97 PushV
	var_357_string = "b1q02"; // 0xb98 MovS
	func_2612(var_356_int, var_357_string); // 0xb99 NEW_2
	var_358_int = 0; // 0xb9b PushI
	var_359_bool = var_356_int == var_358_int; // 0xb9c Eq
	if(var_359_bool == 0) goto Label_2976; // 0xb9d JumpB
	var_354_bool = 1; // 0xb9e MovB
	return 0; // 0xb9f Return
	
Label_2976:
	var_354_bool = 0; // 0xba0 MovB
	return 0; // 0xba1 Return
}


func_2978(var_368_bool, var_369_object)
{
	var_370_bool = 0; var_371_object = Obj(); var_372_string = ""; // 0xba3 PushV
	var_371_object = var_369_object; // 0xba4 Mov
	var_372_string = "b1q02_blood"; // 0xba5 MovS
	func_2617(var_371_object, var_372_string); // 0xba6 NEW_2
	if(var_370_bool == 0) goto Label_2994; // 0xba8 JumpB
	var_377_int = 0; var_378_string = ""; // 0xba9 PushV
	var_378_string = "b1q02"; // 0xbaa MovS
	func_2612(var_377_int, var_378_string); // 0xbab NEW_2
	var_379_int = 2; // 0xbad PushI
	var_380_bool = var_377_int == var_379_int; // 0xbae Eq
	if(var_380_bool == 0) goto Label_2994; // 0xbaf JumpB
	var_368_bool = 1; // 0xbb0 MovB
	return 0; // 0xbb1 Return
	
Label_2994:
	var_368_bool = 0; // 0xbb2 MovB
	return 0; // 0xbb3 Return
}


func_2725(var_108_int)
{
	var_108_int = 515542; // 0xaa5 MovI
	return 0; // 0xaa6 Return
}


func_2727(var_107_int)
{
	var_107_int = 502867; // 0xaa7 MovI
	return 0; // 0xaa8 Return
}


func_2729(var_109_string)
{
	var_109_string = "ui/NPC_Laska.png"; // 0xaa9 MovS
	return 0; // 0xaaa Return
}


func_2731(var_110_string)
{
	var_110_string = "ui/NPC_Laska_b.png"; // 0xaab MovS
	return 0; // 0xaac Return
}


func_2733(var_102_bool)
{
	var_102_bool = 1; // 0xaad MovB
	return 0; // 0xaae Return
}


func_2735()
{
	var_34_string = "oob6Laska1"; // 0xab0 PushS
	var_35_int = 1; // 0xab1 PushI
	SetVariable(var_34_string, var_35_int); // 0xab2 Func
	return 0; // 0xab4 Return
}


func_2996(var_381_bool)
{
	var_383_int = 0; var_384_string = ""; // 0xbb5 PushV
	var_384_string = "oob1Laska2"; // 0xbb6 MovS
	func_2612(var_383_int, var_384_string); // 0xbb7 NEW_2
	var_385_int = 0; // 0xbb9 PushI
	var_386_bool = var_383_int == var_385_int; // 0xbba Eq
	if(var_386_bool == 0) goto Label_3006; // 0xbbb JumpB
	var_381_bool = 1; // 0xbbc MovB
	return 0; // 0xbbd Return
	
Label_3006:
	var_381_bool = 0; // 0xbbe MovB
	return 0; // 0xbbf Return
}


func_2741()
{
	var_241_string = "oob1Laska4"; // 0xab6 PushS
	var_242_int = 1; // 0xab7 PushI
	SetVariable(var_241_string, var_242_int); // 0xab8 Func
	return 0; // 0xaba Return
}


func_2489(var_162_bool)
{
	var_164_string = ""; var_165_int = 0; var_166_bool = 0; var_167_int = 0; var_168_string = ""; var_169_string = ""; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_string = ""; // 0x9b9 PushV
	var_174_string = "d"; // 0x9ba PushS
	var_175_int = 0; // 0x9bb PushV
	func_2686(var_175_int); // 0x9bc NEW_2
	var_181_int = var_174_string + var_175_int; // 0x9be Add
	var_182_string = "m"; // 0x9bf PushS
	var_169_string = var_181_int + var_182_string; // 0x9c0 Add2
	var_170_int = 0; // 0x9c1 MovI
	
Label_2498:
	var_183_int = 1; // 0x9c2 PushI
	if(var_183_int == 0) goto Label_2511; // 0x9c3 JumpB
	var_184_int = 1; // 0x9c4 PushI
	var_185_int = var_170_int + var_184_int; // 0x9c5 Add
	var_186_int = var_169_string + var_185_int; // 0x9c6 Add
	HasProperty(var_186_int, var_171_bool); // 0x9c7 ObjFunc
	var_187_bool = var_171_bool == 0; // 0x9c9 Not
	if(var_187_bool == 0) goto Label_2508; // 0x9ca JumpB
	goto Label_2511; // 0x9cb Jump
	
Label_2511:
	var_188_bool = var_170_int == 0; // 0x9cf Not
	if(var_188_bool == 0) goto Label_2515; // 0x9d0 JumpB
	var_162_bool = 0; // 0x9d1 MovB
	return 10; // 0x9d2 Return
	
Label_2515:
	var_172_int = 0; // 0x9d3 MovI
	var_189_int = 1; // 0x9d4 PushI
	var_190_bool = var_170_int > var_189_int; // 0x9d5 GT
	if(var_190_bool == 0) goto Label_2521; // 0x9d6 JumpB
	irand(var_172_int, var_170_int); // 0x9d7 Func
	
Label_2521:
	var_191_int = 1; // 0x9d9 PushI
	var_192_int = var_172_int + var_191_int; // 0x9da Add
	var_193_int = var_169_string + var_192_int; // 0x9db Add
	GetProperty(var_193_int, var_173_string); // 0x9dc ObjFunc
	var_194_bool = 0; var_195_string = ""; // 0x9de PushV
	var_195_string = var_173_string; // 0x9df Mov
	func_2563(var_194_bool, var_195_string); // 0x9e0 NEW_2
	var_162_bool = var_194_bool; // 0x9e1 Mov
	return 10; // 0x9e3 Return
	
Label_2508:
	var_196_int = 1; // 0x9cc PushI
	var_170_int = var_170_int + var_196_int; // 0x9cd Add2
	goto Label_2498; // 0x9ce Jump
}


func_2747()
{
	var_247_object = Obj(); var_248_object = Obj(); // 0xabb PushV
	var_249_object = Obj(); // 0xabc PushV
	func_3137(var_249_object); // 0xabd NEW_2
	var_248_object = var_249_object; // 0xabe Mov
	var_250_string = "b1LaskaGotoMishka"; // 0xac0 PushS
	var_251_string = "pt_map_mishka"; // 0xac1 PushS
	var_252_int = 3; // 0xac2 PushI
	var_253_int = 530602; // 0xac3 PushI
	var_254_float = 0; // 0xac4 PushV
	func_2681(var_254_float); // 0xac5 NEW_2
	AddMark(var_250_string, var_251_string, var_252_int, var_253_int, var_254_float); // 0xac7 ObjFunc
	return 2; // 0xac9 Return
}


func_2236(var_64_bool)
{
	var_64_bool = 1; // 0x8bc MovB
	return 0; // 0x8bd Return
}


func_2238()
{
	StopAnimation(); // 0x8be Func
	StopGroup0(); // 0x8c0 Func
	return 0; // 0x8c2 Return
}


func_3008(var_317_bool)
{
	var_319_int = 0; var_320_string = ""; // 0xbc1 PushV
	var_320_string = "b1q02_dead"; // 0xbc2 MovS
	func_2612(var_319_int, var_320_string); // 0xbc3 NEW_2
	var_321_int = 0; // 0xbc5 PushI
	var_322_bool = var_319_int != var_321_int; // 0xbc6 Neq
	if(var_322_bool == 0) goto Label_3018; // 0xbc7 JumpB
	var_317_bool = 1; // 0xbc8 MovB
	return 0; // 0xbc9 Return
	
Label_3018:
	var_317_bool = 0; // 0xbca MovB
	return 0; // 0xbcb Return
}


func_2243(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x8c3 PushV
	GetPosition(var_46_cvector); // 0x8c4 Func
	GetPosition(var_47_cvector); // 0x8c6 ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0x8c8 Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0x8c9 Or2
	return 6; // 0x8ca Return
}


func_1991(var_0_object)
{
	var_26_bool = 0; // 0x7c7 PushV
	func_2304(var_26_bool); // 0x7c8 NEW_2
	var_29_bool = var_26_bool == 0; // 0x7ca Not
	if(var_29_bool == 0) goto Label_1998; // 0x7cb JumpB
	Hold(); // 0x7cc Func
	
Label_1998:
	GetDirection(var_0_object); // 0x7ce Func
	
Label_2000:
	func_2167(); // 0x7d1 NEW_2
	goto Label_2000; // 0x7d3 Jump
}


func_2763()
{
	var_34_string = "oob12Laska1"; // 0xacc PushS
	var_35_int = 1; // 0xacd PushI
	SetVariable(var_34_string, var_35_int); // 0xace Func
	return 0; // 0xad0 Return
}


func_2251(var_184_bool, var_185_object, var_186_string)
{
	var_187_bool = 0; var_188_bool = 0; // 0x8cb PushV
	var_189_string = "HasProperty"; // 0x8cc PushS
	var_190_int = 2; // 0x8cd PushI
	var_191_bool = IsFuncExist(var_185_object, var_189_string, var_190_int); // 0x8ce FuncExist
	var_192_bool = var_191_bool == 0; // 0x8cf Not
	if(var_192_bool == 0) goto Label_2259; // 0x8d0 JumpB
	var_184_bool = 0; // 0x8d1 MovB
	return 2; // 0x8d2 Return
	
Label_2259:
	HasProperty(var_186_string, var_188_bool); // 0x8d3 ObjFunc
	var_184_bool = var_188_bool; // 0x8d5 Mov
	return 2; // 0x8d6 Return
}


func_3020(var_396_bool)
{
	var_398_int = 0; var_399_string = ""; // 0xbcd PushV
	var_399_string = "oob1Laska3"; // 0xbce MovS
	func_2612(var_398_int, var_399_string); // 0xbcf NEW_2
	var_400_int = 0; // 0xbd1 PushI
	var_401_bool = var_398_int == var_400_int; // 0xbd2 Eq
	if(var_401_bool == 0) goto Label_3030; // 0xbd3 JumpB
	var_396_bool = 1; // 0xbd4 MovB
	return 0; // 0xbd5 Return
	
Label_3030:
	var_396_bool = 0; // 0xbd6 MovB
	return 0; // 0xbd7 Return
}


func_2769()
{
	var_257_object = Obj(); var_258_string = ""; var_259_float = 0; // 0xad2 PushV
	var_260_object = Obj(); // 0xad3 PushV
	func_3137(var_260_object); // 0xad4 NEW_2
	var_257_object = var_260_object; // 0xad5 Mov
	var_258_string = "pt_map_mishka"; // 0xad7 MovS
	var_259_float = 2; // 0xad8 MovI
	func_3154(var_257_object, var_258_string, var_259_float); // 0xad9 NEW_2
	var_261_object = Obj(); // 0xadb PushV
	func_3137(var_261_object); // 0xadc NEW_2
	ShowMap(var_261_object); // 0xade ObjFunc
	return 0; // 0xae0 Return
}


func_2005(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x7d5 PushV
	var_54_string = "player"; // 0x7d6 PushS
	FindActor(var_53_object, var_54_string); // 0x7d7 Func
	var_55_bool = var_53_object == 0; // 0x7d9 Not
	if(var_55_bool == 0) goto Label_2013; // 0x7da JumpB
	var_51_bool = 0; // 0x7db MovB
	return 2; // 0x7dc Return
	
Label_2013:
	var_56_bool = 0; var_57_object = Obj(); // 0x7dd PushV
	var_57_object = var_53_object; // 0x7de Mov
	func_2295(var_57_object); // 0x7df NEW_2
	var_51_bool = var_56_bool; // 0x7e0 Mov
	return 2; // 0x7e2 Return
}


func_2263(var_176_bool, var_177_object, var_178_string, var_179_float, var_180_float, var_181_float)
{
	var_182_float = 0; var_183_float = 0; // 0x8d7 PushV
	var_184_bool = 0; var_185_object = Obj(); var_186_string = ""; // 0x8d8 PushV
	var_185_object = var_177_object; // 0x8d9 Mov
	var_186_string = var_178_string; // 0x8da Mov
	func_2251(var_184_bool, var_185_object, var_186_string); // 0x8db NEW_2
	var_193_bool = var_184_bool == 0; // 0x8dd Not
	if(var_193_bool == 0) goto Label_2273; // 0x8de JumpB
	var_176_bool = 0; // 0x8df MovB
	return 2; // 0x8e0 Return
	
Label_2273:
	GetProperty(var_178_string, var_183_float); // 0x8e1 ObjFunc
	var_194_float = 0; var_195_float = 0; var_196_float = 0; var_197_float = 0; // 0x8e3 PushV
	var_195_float = var_183_float + var_179_float; // 0x8e4 Add2
	var_196_float = var_180_float; // 0x8e5 Mov
	var_197_float = var_181_float; // 0x8e6 Mov
	func_2601(var_194_float, var_195_float, var_196_float, var_197_float); // 0x8e7 NEW_2
	SetProperty(var_178_string, var_194_float); // 0x8e9 ObjFunc
	var_176_bool = 1; // 0x8eb MovB
	return 2; // 0x8ec Return
}


func_3032(var_469_bool)
{
	var_471_int = 0; var_472_string = ""; // 0xbd9 PushV
	var_472_string = "oob6Laska1"; // 0xbda MovS
	func_2612(var_471_int, var_472_string); // 0xbdb NEW_2
	var_473_int = 0; // 0xbdd PushI
	var_474_bool = var_471_int == var_473_int; // 0xbde Eq
	if(var_474_bool == 0) goto Label_3042; // 0xbdf JumpB
	var_469_bool = 1; // 0xbe0 MovB
	return 0; // 0xbe1 Return
	
Label_3042:
	var_469_bool = 0; // 0xbe2 MovB
	return 0; // 0xbe3 Return
}


func_1247(var_0_object, var_428_int, var_429_object)
{
	var_431_object = Obj(); var_432_bool = 0; var_433_int = 0; var_434_bool = 0; var_435_object = Obj(); var_436_bool = 0; var_437_int = 0; var_438_bool = 0; // 0x4df PushV
	var_0_object = var_429_object; // 0x4e0 TMov
	var_439_bool = 0; var_440_object = Obj(); var_441_float = 0; // 0x4e1 PushV
	var_440_object = var_429_object; // 0x4e2 Mov
	var_441_float = 70.0; // 0x4e3 MovF
	func_2309(var_440_object, var_441_float); // 0x4e4 NEW_2
	var_442_bool = var_439_bool == 0; // 0x4e6 Not
	if(var_442_bool == 0) goto Label_1258; // 0x4e7 JumpB
	var_428_int = -2; // 0x4e8 MovI
	return 8; // 0x4e9 Return
	
Label_1258:
	CreateDialog(var_435_object); // 0x4ea Func
	var_443_int = 0; // 0x4ec PushV
	func_2727(var_443_int); // 0x4ed NEW_2
	SetNPCName(var_443_int); // 0x4ef ObjFunc
	var_444_int = 0; // 0x4f1 PushV
	func_2725(var_444_int); // 0x4f2 NEW_2
	SetNPCDescription(var_444_int); // 0x4f4 ObjFunc
	var_445_string = ""; // 0x4f6 PushV
	func_2729(var_445_string); // 0x4f7 NEW_2
	SetPhoto(var_445_string); // 0x4f9 ObjFunc
	var_446_string = ""; // 0x4fb PushV
	func_2731(var_446_string); // 0x4fc NEW_2
	SetPhoto2(var_446_string); // 0x4fe ObjFunc
	var_447_int = 0; // 0x500 PushV
	func_3187(var_447_int); // 0x501 NEW_2
	SetPlayerName(var_447_int); // 0x503 ObjFunc
	var_437_int = -1; // 0x505 MovI
	IsOverrideActive(var_436_bool); // 0x506 Func
	var_448_bool = var_436_bool; // 0x508 Push
	if(var_448_bool == 0) goto Label_1292; // 0x509 JumpB
	var_428_int = -2; // 0x50a MovI
	return 8; // 0x50b Return
	
Label_1292:
	DoDialog(var_435_object); // 0x50c Func
	var_449_bool = 0; var_450_object = Obj(); // 0x50e PushV
	var_451_object = Obj(); // 0x50f PushV
	func_2585(var_451_object); // 0x510 NEW_2
	var_450_object = var_451_object; // 0x511 Mov
	func_2394(var_449_bool, var_450_object); // 0x513 NEW_2
	var_452_object = Obj(); var_453_object = Obj(); // 0x515 PushV
	var_452_object = var_429_object; // 0x516 Mov
	var_453_object = var_435_object; // 0x517 Mov
	TaskCall(5); // 0x518 TaskCall
	func_1328(var_454_object, var_455_object, var_456_string, var_457_bool, var_452_object, var_453_object); // 0x519 NEW_2
	TaskReturn(); // 0x51a TaskReturn
	IsDialogEnd(var_438_bool); // 0x51c ObjFunc
	
Label_1310:
	var_495_bool = var_438_bool == 0; // 0x51e Not
	if(var_495_bool == 0) goto Label_1317; // 0x51f JumpB
	sync(); // 0x520 Func
	IsDialogEnd(var_438_bool); // 0x522 ObjFunc
	goto Label_1310; // 0x524 Jump
	
Label_1317:
	var_496_object = Obj(); // 0x525 PushV
	var_496_object = var_429_object; // 0x526 Mov
	func_2377(); // 0x527 NEW_2
	StopDialog(var_435_object); // 0x529 Func
	GetReturnValue(var_437_int); // 0x52b ObjFunc
	var_428_int = var_437_int; // 0x52d Mov
	return 8; // 0x52e Return
}


func_2785(var_163_object)
{
	var_165_bool = 0; var_166_object = Obj(); var_167_float = 0; // 0xae2 PushV
	var_166_object = var_163_object; // 0xae3 Mov
	var_167_float = 0.3; // 0xae4 MovF
	func_2624(var_165_bool, var_166_object, var_167_float); // 0xae5 NEW_2
	return 0; // 0xae7 Return
}


func_2532(var_248_string)
{
	var_249_bool = 0; var_250_float = 0; var_251_float = 0; var_252_bool = 0; var_253_float = 0; var_254_float = 0; // 0x9e4 PushV
	lshHasAnimation(var_252_bool, var_248_string); // 0x9e5 Func
	var_255_bool = var_252_bool; // 0x9e7 Push
	if(var_255_bool == 0) goto Label_2543; // 0x9e8 JumpB
	lshGetAnimTimes(var_248_string, var_253_float, var_254_float); // 0x9e9 Func
	var_256_bool = 0; // 0x9eb PushB
	lshPlayAnimation(var_253_float, var_254_float, var_256_bool); // 0x9ec Func
	goto Label_2547; // 0x9ee Jump
	
Label_2547:
	return 6; // 0x9f3 Return
	
Label_2543:
	var_257_string = "Can't find lsh animation : "; // 0x9ef PushS
	var_258_int = var_257_string + var_248_string; // 0x9f0 Add
	Trace(var_258_int); // 0x9f1 Func
}


func_2020(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0x7e4 PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0x7e5 PushE
	RotateAsync(var_103_float, var_104_float); // 0x7e6 Func
	return 0; // 0x7e8 Return
}


func_3044()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xbe4 PushV
	var_59_int = 200; // 0xbe5 PushI
	var_60_int = 2; // 0xbe6 PushI
	var_61_int = 517940; // 0xbe7 PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0xbe8 Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0xbea PushV
	var_63_object = var_58_object; // 0xbeb Mov
	var_64_int = -1; // 0xbec MovI
	func_3109(var_62_bool, var_63_object, var_64_int); // 0xbed NEW_2
	return 2; // 0xbef Return
}


func_2792(var_211_object)
{
	var_213_bool = 0; var_214_object = Obj(); var_215_float = 0; // 0xae9 PushV
	var_214_object = var_211_object; // 0xaea Mov
	var_215_float = -0.1; // 0xaeb MovF
	func_2624(var_213_bool, var_214_object, var_215_float); // 0xaec NEW_2
	return 0; // 0xaee Return
}


func_2025(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0x7e9 PushV
	var_39_string = "player"; // 0x7ea PushS
	FindActor(var_37_object, var_39_string); // 0x7eb Func
	var_40_bool = var_37_object == 0; // 0x7ed Not
	if(var_40_bool == 0) goto Label_2033; // 0x7ee JumpB
	var_34_bool = 0; // 0x7ef MovB
	return 4; // 0x7f0 Return
	
Label_2033:
	var_41_float = 0; var_42_object = Obj(); // 0x7f1 PushV
	var_42_object = var_37_object; // 0x7f2 Mov
	func_2243(var_42_object); // 0x7f3 NEW_2
	var_49_float = 90000.0; // 0x7f5 PushF
	var_50_bool = var_41_float > var_49_float; // 0x7f6 GT
	if(var_50_bool == 0) goto Label_2042; // 0x7f7 JumpB
	var_34_bool = 0; // 0x7f8 MovB
	return 4; // 0x7f9 Return
	
Label_2042:
	CanSee(var_38_bool, var_37_object); // 0x7fa Func
	var_34_bool = var_38_bool; // 0x7fc Mov
	return 4; // 0x7fd Return
}


func_2285(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0x8ed PushV
	GetPosition(var_39_cvector); // 0x8ee Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0x8f0 Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0x8f1 PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0x8f2 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0x8f3 Func
	var_34_bool = var_41_bool; // 0x8f5 Mov
	return 6; // 0x8f6 Return
}


func_2799()
{
	var_90_object = Obj(); var_91_string = ""; var_92_float = 0; // 0xaf0 PushV
	var_93_object = Obj(); // 0xaf1 PushV
	func_3137(var_93_object); // 0xaf2 NEW_2
	var_90_object = var_93_object; // 0xaf3 Mov
	var_91_string = "pt_map_gorbun"; // 0xaf5 MovS
	var_92_float = 2; // 0xaf6 MovI
	func_3154(var_90_object, var_91_string, var_92_float); // 0xaf7 NEW_2
	var_113_object = Obj(); // 0xaf9 PushV
	func_3137(var_113_object); // 0xafa NEW_2
	ShowMap(var_113_object); // 0xafc ObjFunc
	return 0; // 0xafe Return
}


func_3057()
{
	var_144_object = Obj(); var_145_object = Obj(); // 0xbf1 PushV
	var_146_int = 203; // 0xbf2 PushI
	var_147_int = 2; // 0xbf3 PushI
	var_148_int = 517943; // 0xbf4 PushI
	CreateDiaryEntry(var_145_object, var_146_int, var_147_int, var_148_int); // 0xbf5 Func
	var_149_bool = 0; var_150_object = Obj(); var_151_int = 0; // 0xbf7 PushV
	var_150_object = var_145_object; // 0xbf8 Mov
	var_151_int = 200; // 0xbf9 MovI
	func_3109(var_149_bool, var_150_object, var_151_int); // 0xbfa NEW_2
	return 2; // 0xbfc Return
}


func_2548(var_226_string, var_227_bool)
{
	var_230_bool = 0; var_231_float = 0; var_232_float = 0; var_233_bool = 0; var_234_float = 0; var_235_float = 0; // 0x9f4 PushV
	lshHasAnimation(var_233_bool, var_226_string); // 0x9f5 Func
	var_236_bool = var_233_bool; // 0x9f7 Push
	if(var_236_bool == 0) goto Label_2558; // 0x9f8 JumpB
	lshGetAnimTimes(var_226_string, var_234_float, var_235_float); // 0x9f9 Func
	lshPlayAnimation(var_234_float, var_235_float, var_227_bool); // 0x9fb Func
	goto Label_2562; // 0x9fd Jump
	
Label_2562:
	return 6; // 0xa02 Return
	
Label_2558:
	var_237_string = "Can't find lsh animation : "; // 0x9fe PushS
	var_238_int = var_237_string + var_226_string; // 0x9ff Add
	Trace(var_238_int); // 0xa00 Func
}


func_2295(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0x8f7 PushV
	GetPosition(var_33_cvector); // 0x8f8 ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0x8fa PushV
	var_35_cvector = var_33_cvector; // 0x8fb Mov
	func_2285(var_34_bool, var_35_cvector); // 0x8fc NEW_2
	var_30_bool = var_34_bool; // 0x8fd Mov
	return 2; // 0x8ff Return
}


func_1784(var_0_object, var_564_int, var_565_object)
{
	var_567_object = Obj(); var_568_bool = 0; var_569_int = 0; var_570_bool = 0; var_571_object = Obj(); var_572_bool = 0; var_573_int = 0; var_574_bool = 0; // 0x6f8 PushV
	var_0_object = var_565_object; // 0x6f9 TMov
	var_575_bool = 0; var_576_object = Obj(); var_577_float = 0; // 0x6fa PushV
	var_576_object = var_565_object; // 0x6fb Mov
	var_577_float = 70.0; // 0x6fc MovF
	func_2309(var_576_object, var_577_float); // 0x6fd NEW_2
	var_578_bool = var_575_bool == 0; // 0x6ff Not
	if(var_578_bool == 0) goto Label_1795; // 0x700 JumpB
	var_564_int = -2; // 0x701 MovI
	return 8; // 0x702 Return
	
Label_1795:
	CreateDialog(var_571_object); // 0x703 Func
	var_579_int = 0; // 0x705 PushV
	func_2727(var_579_int); // 0x706 NEW_2
	SetNPCName(var_579_int); // 0x708 ObjFunc
	var_580_int = 0; // 0x70a PushV
	func_2725(var_580_int); // 0x70b NEW_2
	SetNPCDescription(var_580_int); // 0x70d ObjFunc
	var_581_string = ""; // 0x70f PushV
	func_2729(var_581_string); // 0x710 NEW_2
	SetPhoto(var_581_string); // 0x712 ObjFunc
	var_582_string = ""; // 0x714 PushV
	func_2731(var_582_string); // 0x715 NEW_2
	SetPhoto2(var_582_string); // 0x717 ObjFunc
	var_583_int = 0; // 0x719 PushV
	func_3187(var_583_int); // 0x71a NEW_2
	SetPlayerName(var_583_int); // 0x71c ObjFunc
	var_573_int = -1; // 0x71e MovI
	IsOverrideActive(var_572_bool); // 0x71f Func
	var_584_bool = var_572_bool; // 0x721 Push
	if(var_584_bool == 0) goto Label_1829; // 0x722 JumpB
	var_564_int = -2; // 0x723 MovI
	return 8; // 0x724 Return
	
Label_1829:
	DoDialog(var_571_object); // 0x725 Func
	var_585_bool = 0; var_586_object = Obj(); // 0x727 PushV
	var_587_object = Obj(); // 0x728 PushV
	func_2585(var_587_object); // 0x729 NEW_2
	var_586_object = var_587_object; // 0x72a Mov
	func_2394(var_585_bool, var_586_object); // 0x72c NEW_2
	var_588_object = Obj(); var_589_object = Obj(); // 0x72e PushV
	var_588_object = var_565_object; // 0x72f Mov
	var_589_object = var_571_object; // 0x730 Mov
	TaskCall(9); // 0x731 TaskCall
	func_1865(var_590_object, var_591_object, var_592_string, var_593_bool, var_588_object, var_589_object); // 0x732 NEW_2
	TaskReturn(); // 0x733 TaskReturn
	IsDialogEnd(var_574_bool); // 0x735 ObjFunc
	
Label_1847:
	var_618_bool = var_574_bool == 0; // 0x737 Not
	if(var_618_bool == 0) goto Label_1854; // 0x738 JumpB
	sync(); // 0x739 Func
	IsDialogEnd(var_574_bool); // 0x73b ObjFunc
	goto Label_1847; // 0x73d Jump
	
Label_1854:
	var_619_object = Obj(); // 0x73e PushV
	var_619_object = var_565_object; // 0x73f Mov
	func_2377(); // 0x740 NEW_2
	StopDialog(var_571_object); // 0x742 Func
	GetReturnValue(var_573_int); // 0x744 ObjFunc
	var_564_int = var_573_int; // 0x746 Mov
	return 8; // 0x747 Return
}


func_3070()
{
	var_224_object = Obj(); var_225_object = Obj(); // 0xbfe PushV
	var_226_int = 204; // 0xbff PushI
	var_227_int = 2; // 0xc00 PushI
	var_228_int = 518079; // 0xc01 PushI
	CreateDiaryEntry(var_225_object, var_226_int, var_227_int, var_228_int); // 0xc02 Func
	var_229_bool = 0; var_230_object = Obj(); var_231_int = 0; // 0xc04 PushV
	var_230_object = var_225_object; // 0xc05 Mov
	var_231_int = 200; // 0xc06 MovI
	func_3109(var_229_bool, var_230_object, var_231_int); // 0xc07 NEW_2
	return 2; // 0xc09 Return
}


func_2815()
{
	var_326_string = "oob1Laska1"; // 0xb00 PushS
	var_327_int = 1; // 0xb01 PushI
	SetVariable(var_326_string, var_327_int); // 0xb02 Func
	return 0; // 0xb04 Return
}


