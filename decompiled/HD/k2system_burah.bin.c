task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_bool)
{
	var_14_int = 1; // 0xa2 PushI
	if(var_14_int == 0) goto Label_225; // 0xa3 JumpB
	func_1407(); // 0xa5 NEW_2
	var_16_int = 41008; // 0xa7 PushI
	var_17_bool = var_12_cvector == var_16_int; // 0xa8 Eq
	if(var_17_bool == 0) goto Label_190; // 0xa9 JumpB
	var_18_string = ""; // 0xaa PushV
	var_18_string = "Neutral"; // 0xab MovS
	func_139(var_13_bool, var_18_string); // 0xac NEW_2
	var_35_int = 539060; // 0xae PushI
	SetMessage(var_35_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_36_int = 539061; // 0xb3 PushI
	var_37_int = 43176; // 0xb4 PushI
	var_38_int = 41009; // 0xb5 PushI
	AddReply(var_36_int, var_37_int, var_38_int); // 0xb6 TObjFunc
	var_39_int = 541070; // 0xb8 PushI
	var_40_int = -1; // 0xb9 PushI
	var_41_int = 43175; // 0xba PushI
	AddReply(var_39_int, var_40_int, var_41_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_42_int = 43176; // 0xbe PushI
	var_43_bool = var_12_cvector == var_42_int; // 0xbf Eq
	if(var_43_bool == 0) goto Label_213; // 0xc0 JumpB
	var_44_string = ""; // 0xc1 PushV
	var_44_string = "Neutral"; // 0xc2 MovS
	func_139(var_13_bool, var_44_string); // 0xc3 NEW_2
	var_45_int = 541071; // 0xc5 PushI
	SetMessage(var_45_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_46_int = 541072; // 0xca PushI
	var_47_int = -1; // 0xcb PushI
	var_48_int = 43177; // 0xcc PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xcd TObjFunc
	var_49_int = 541073; // 0xcf PushI
	var_50_int = -1; // 0xd0 PushI
	var_51_int = 43178; // 0xd1 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_3_string = 1; // 0xd5 TMovB
	var_52_bool = 0; // 0xd6 PushV
	func_1583(var_52_bool); // 0xd7 NEW_2
	if(var_52_bool == 0) goto Label_221; // 0xd9 JumpB
	lshStopAnimation(); // 0xda Func
	goto Label_223; // 0xdc Jump
	
Label_223:
	return 0; // 0xdf Return
	
Label_221:
	StopAnimation(); // 0xdd Func
	
Label_225:
	return 0; // 0xe1 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_cvector, var_13_bool)
{
	var_14_int = 1; // 0x1ac PushI
	if(var_14_int == 0) goto Label_772; // 0x1ad JumpB
	func_1407(); // 0x1af NEW_2
	var_16_int = 41701; // 0x1b1 PushI
	var_17_bool = var_13_bool == var_16_int; // 0x1b2 Eq
	if(var_17_bool == 0) goto Label_451; // 0x1b3 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0x1b4 PushV
	var_18_object = var_1_object; // 0x1b5 MovT
	var_19_object = var_0_object; // 0x1b6 MovT
	func_1627(); // 0x1b7 NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0x1b9 PushV
	var_52_object = var_1_object; // 0x1ba MovT
	var_53_object = var_0_object; // 0x1bb MovT
	func_1647(); // 0x1bc NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0x1be PushV
	var_60_object = var_1_object; // 0x1bf MovT
	var_61_object = var_0_object; // 0x1c0 MovT
	func_1585(var_61_object); // 0x1c1 NEW_2
	
Label_451:
	var_100_int = 41704; // 0x1c3 PushI
	var_101_bool = var_13_bool == var_100_int; // 0x1c4 Eq
	if(var_101_bool == 0) goto Label_459; // 0x1c5 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x1c6 PushV
	var_102_object = var_1_object; // 0x1c7 MovT
	var_103_object = var_0_object; // 0x1c8 MovT
	func_1632(); // 0x1c9 NEW_2
	
Label_459:
	var_113_int = 41707; // 0x1cb PushI
	var_114_bool = var_13_bool == var_113_int; // 0x1cc Eq
	if(var_114_bool == 0) goto Label_492; // 0x1cd JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x1ce PushV
	var_115_object = var_1_object; // 0x1cf MovT
	var_116_object = var_0_object; // 0x1d0 MovT
	func_1637(); // 0x1d1 NEW_2
	var_134_object = Obj(); var_135_object = Obj(); // 0x1d3 PushV
	var_134_object = var_1_object; // 0x1d4 MovT
	var_135_object = var_0_object; // 0x1d5 MovT
	func_1647(); // 0x1d6 NEW_2
	var_136_object = Obj(); var_137_object = Obj(); // 0x1d8 PushV
	var_136_object = var_1_object; // 0x1d9 MovT
	var_137_object = var_0_object; // 0x1da MovT
	func_1652(); // 0x1db NEW_2
	var_141_object = Obj(); var_142_object = Obj(); // 0x1dd PushV
	var_141_object = var_1_object; // 0x1de MovT
	var_142_object = var_0_object; // 0x1df MovT
	func_1592(var_142_object); // 0x1e0 NEW_2
	var_146_object = Obj(); var_147_object = Obj(); // 0x1e2 PushV
	var_146_object = var_1_object; // 0x1e3 MovT
	var_147_object = var_0_object; // 0x1e4 MovT
	func_1599(var_147_object); // 0x1e5 NEW_2
	var_170_object = Obj(); var_171_object = Obj(); // 0x1e7 PushV
	var_170_object = var_1_object; // 0x1e8 MovT
	var_171_object = var_0_object; // 0x1e9 MovT
	func_1610(); // 0x1ea NEW_2
	
Label_492:
	var_174_int = 41710; // 0x1ec PushI
	var_175_bool = var_13_bool == var_174_int; // 0x1ed Eq
	if(var_175_bool == 0) goto Label_515; // 0x1ee JumpB
	var_176_object = Obj(); var_177_object = Obj(); // 0x1ef PushV
	var_176_object = var_1_object; // 0x1f0 MovT
	var_177_object = var_0_object; // 0x1f1 MovT
	func_1642(); // 0x1f2 NEW_2
	var_187_object = Obj(); var_188_object = Obj(); // 0x1f4 PushV
	var_187_object = var_1_object; // 0x1f5 MovT
	var_188_object = var_0_object; // 0x1f6 MovT
	func_1616(var_188_object); // 0x1f7 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x1f9 PushV
	var_193_object = var_1_object; // 0x1fa MovT
	var_194_object = var_0_object; // 0x1fb MovT
	func_1610(); // 0x1fc NEW_2
	var_195_object = Obj(); var_196_object = Obj(); // 0x1fe PushV
	var_195_object = var_1_object; // 0x1ff MovT
	var_196_object = var_0_object; // 0x200 MovT
	func_1657(var_196_object); // 0x201 NEW_2
	
Label_515:
	var_200_int = 41011; // 0x203 PushI
	var_201_bool = var_12_cvector == var_200_int; // 0x204 Eq
	if(var_201_bool == 0) goto Label_578; // 0x205 JumpB
	var_202_string = ""; // 0x206 PushV
	var_202_string = "Neutral"; // 0x207 MovS
	func_405(var_13_bool, var_202_string); // 0x208 NEW_2
	var_219_int = 539063; // 0x20a PushI
	SetMessage(var_219_int); // 0x20b TObjFunc
	ClearReplies(); // 0x20d TObjFunc
	var_220_bool = 0; var_221_object = Obj(); // 0x20f PushV
	var_221_object = var_1_object; // 0x210 MovT
	func_1664(var_220_bool, var_221_object); // 0x211 NEW_2
	if(var_220_bool == 0) goto Label_537; // 0x213 JumpB
	var_234_int = 539064; // 0x214 PushI
	var_235_int = 41700; // 0x215 PushI
	var_236_int = 41012; // 0x216 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x217 TObjFunc
	
Label_537:
	var_237_bool = 0; var_238_object = Obj(); // 0x219 PushV
	var_238_object = var_1_object; // 0x21a MovT
	func_1664(var_237_bool, var_238_object); // 0x21b NEW_2
	if(var_237_bool == 0) goto Label_547; // 0x21d JumpB
	var_239_int = 539750; // 0x21e PushI
	var_240_int = 41703; // 0x21f PushI
	var_241_int = 41702; // 0x220 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x221 TObjFunc
	
Label_547:
	var_242_bool = 0; var_243_object = Obj(); // 0x223 PushV
	var_243_object = var_1_object; // 0x224 MovT
	func_1674(var_242_bool, var_243_object); // 0x225 NEW_2
	if(var_242_bool == 0) goto Label_557; // 0x227 JumpB
	var_256_int = 539753; // 0x228 PushI
	var_257_int = 41706; // 0x229 PushI
	var_258_int = 41705; // 0x22a PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x22b TObjFunc
	
Label_557:
	var_259_bool = 0; var_260_object = Obj(); // 0x22d PushV
	var_260_object = var_1_object; // 0x22e MovT
	func_1684(var_259_bool, var_260_object); // 0x22f NEW_2
	if(var_259_bool == 0) goto Label_567; // 0x231 JumpB
	var_273_int = 539756; // 0x232 PushI
	var_274_int = 41709; // 0x233 PushI
	var_275_int = 41708; // 0x234 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x235 TObjFunc
	
Label_567:
	var_276_int = 539759; // 0x237 PushI
	var_277_int = -1; // 0x238 PushI
	var_278_int = 41711; // 0x239 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x23a TObjFunc
	var_279_int = 541075; // 0x23c PushI
	var_280_int = -1; // 0x23d PushI
	var_281_int = 43180; // 0x23e PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x23f TObjFunc
	return 0; // 0x241 Return
	
Label_578:
	var_282_int = 41709; // 0x242 PushI
	var_283_bool = var_12_cvector == var_282_int; // 0x243 Eq
	if(var_283_bool == 0) goto Label_596; // 0x244 JumpB
	var_284_string = ""; // 0x245 PushV
	var_284_string = "Neutral"; // 0x246 MovS
	func_405(var_13_bool, var_284_string); // 0x247 NEW_2
	var_285_int = 539757; // 0x249 PushI
	SetMessage(var_285_int); // 0x24a TObjFunc
	ClearReplies(); // 0x24c TObjFunc
	var_286_int = 539758; // 0x24e PushI
	var_287_int = -1; // 0x24f PushI
	var_288_int = 41710; // 0x250 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x251 TObjFunc
	return 0; // 0x253 Return
	
Label_596:
	var_289_int = 41706; // 0x254 PushI
	var_290_bool = var_12_cvector == var_289_int; // 0x255 Eq
	if(var_290_bool == 0) goto Label_619; // 0x256 JumpB
	var_291_string = ""; // 0x257 PushV
	var_291_string = "Neutral"; // 0x258 MovS
	func_405(var_13_bool, var_291_string); // 0x259 NEW_2
	var_292_int = 539754; // 0x25b PushI
	SetMessage(var_292_int); // 0x25c TObjFunc
	ClearReplies(); // 0x25e TObjFunc
	var_293_int = 541088; // 0x260 PushI
	var_294_int = 43197; // 0x261 PushI
	var_295_int = 43196; // 0x262 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x263 TObjFunc
	var_296_int = 541090; // 0x265 PushI
	var_297_int = 43197; // 0x266 PushI
	var_298_int = 43198; // 0x267 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x268 TObjFunc
	return 0; // 0x26a Return
	
Label_619:
	var_299_int = 43197; // 0x26b PushI
	var_300_bool = var_12_cvector == var_299_int; // 0x26c Eq
	if(var_300_bool == 0) goto Label_637; // 0x26d JumpB
	var_301_string = ""; // 0x26e PushV
	var_301_string = "Neutral"; // 0x26f MovS
	func_405(var_13_bool, var_301_string); // 0x270 NEW_2
	var_302_int = 541089; // 0x272 PushI
	SetMessage(var_302_int); // 0x273 TObjFunc
	ClearReplies(); // 0x275 TObjFunc
	var_303_int = 539755; // 0x277 PushI
	var_304_int = -1; // 0x278 PushI
	var_305_int = 41707; // 0x279 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x27a TObjFunc
	return 0; // 0x27c Return
	
Label_637:
	var_306_int = 41703; // 0x27d PushI
	var_307_bool = var_12_cvector == var_306_int; // 0x27e Eq
	if(var_307_bool == 0) goto Label_655; // 0x27f JumpB
	var_308_string = ""; // 0x280 PushV
	var_308_string = "Neutral"; // 0x281 MovS
	func_405(var_13_bool, var_308_string); // 0x282 NEW_2
	var_309_int = 539751; // 0x284 PushI
	SetMessage(var_309_int); // 0x285 TObjFunc
	ClearReplies(); // 0x287 TObjFunc
	var_310_int = 541077; // 0x289 PushI
	var_311_int = 43183; // 0x28a PushI
	var_312_int = 43182; // 0x28b PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x28c TObjFunc
	return 0; // 0x28e Return
	
Label_655:
	var_313_int = 43183; // 0x28f PushI
	var_314_bool = var_12_cvector == var_313_int; // 0x290 Eq
	if(var_314_bool == 0) goto Label_678; // 0x291 JumpB
	var_315_string = ""; // 0x292 PushV
	var_315_string = "Neutral"; // 0x293 MovS
	func_405(var_13_bool, var_315_string); // 0x294 NEW_2
	var_316_int = 541078; // 0x296 PushI
	SetMessage(var_316_int); // 0x297 TObjFunc
	ClearReplies(); // 0x299 TObjFunc
	var_317_int = 541085; // 0x29b PushI
	var_318_int = 43194; // 0x29c PushI
	var_319_int = 43192; // 0x29d PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x29e TObjFunc
	var_320_int = 541086; // 0x2a0 PushI
	var_321_int = 43194; // 0x2a1 PushI
	var_322_int = 43193; // 0x2a2 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x2a3 TObjFunc
	return 0; // 0x2a5 Return
	
Label_678:
	var_323_int = 43194; // 0x2a6 PushI
	var_324_bool = var_12_cvector == var_323_int; // 0x2a7 Eq
	if(var_324_bool == 0) goto Label_696; // 0x2a8 JumpB
	var_325_string = ""; // 0x2a9 PushV
	var_325_string = "Neutral"; // 0x2aa MovS
	func_405(var_13_bool, var_325_string); // 0x2ab NEW_2
	var_326_int = 541087; // 0x2ad PushI
	SetMessage(var_326_int); // 0x2ae TObjFunc
	ClearReplies(); // 0x2b0 TObjFunc
	var_327_int = 539752; // 0x2b2 PushI
	var_328_int = -1; // 0x2b3 PushI
	var_329_int = 41704; // 0x2b4 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x2b5 TObjFunc
	return 0; // 0x2b7 Return
	
Label_696:
	var_330_int = 41700; // 0x2b8 PushI
	var_331_bool = var_12_cvector == var_330_int; // 0x2b9 Eq
	if(var_331_bool == 0) goto Label_719; // 0x2ba JumpB
	var_332_string = ""; // 0x2bb PushV
	var_332_string = "Neutral"; // 0x2bc MovS
	func_405(var_13_bool, var_332_string); // 0x2bd NEW_2
	var_333_int = 539748; // 0x2bf PushI
	SetMessage(var_333_int); // 0x2c0 TObjFunc
	ClearReplies(); // 0x2c2 TObjFunc
	var_334_int = 541079; // 0x2c4 PushI
	var_335_int = 43186; // 0x2c5 PushI
	var_336_int = 43184; // 0x2c6 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x2c7 TObjFunc
	var_337_int = 541080; // 0x2c9 PushI
	var_338_int = 43186; // 0x2ca PushI
	var_339_int = 43185; // 0x2cb PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x2cc TObjFunc
	return 0; // 0x2ce Return
	
Label_719:
	var_340_int = 43186; // 0x2cf PushI
	var_341_bool = var_12_cvector == var_340_int; // 0x2d0 Eq
	if(var_341_bool == 0) goto Label_742; // 0x2d1 JumpB
	var_342_string = ""; // 0x2d2 PushV
	var_342_string = "Neutral"; // 0x2d3 MovS
	func_405(var_13_bool, var_342_string); // 0x2d4 NEW_2
	var_343_int = 541081; // 0x2d6 PushI
	SetMessage(var_343_int); // 0x2d7 TObjFunc
	ClearReplies(); // 0x2d9 TObjFunc
	var_344_int = 541082; // 0x2db PushI
	var_345_int = 43189; // 0x2dc PushI
	var_346_int = 43187; // 0x2dd PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x2de TObjFunc
	var_347_int = 541083; // 0x2e0 PushI
	var_348_int = 43189; // 0x2e1 PushI
	var_349_int = 43188; // 0x2e2 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x2e3 TObjFunc
	return 0; // 0x2e5 Return
	
Label_742:
	var_350_int = 43189; // 0x2e6 PushI
	var_351_bool = var_12_cvector == var_350_int; // 0x2e7 Eq
	if(var_351_bool == 0) goto Label_760; // 0x2e8 JumpB
	var_352_string = ""; // 0x2e9 PushV
	var_352_string = "Neutral"; // 0x2ea MovS
	func_405(var_13_bool, var_352_string); // 0x2eb NEW_2
	var_353_int = 541084; // 0x2ed PushI
	SetMessage(var_353_int); // 0x2ee TObjFunc
	ClearReplies(); // 0x2f0 TObjFunc
	var_354_int = 539749; // 0x2f2 PushI
	var_355_int = -1; // 0x2f3 PushI
	var_356_int = 41701; // 0x2f4 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x2f5 TObjFunc
	return 0; // 0x2f7 Return
	
Label_760:
	var_3_string = 1; // 0x2f8 TMovB
	var_357_bool = 0; // 0x2f9 PushV
	func_1583(var_357_bool); // 0x2fa NEW_2
	if(var_357_bool == 0) goto Label_768; // 0x2fc JumpB
	lshStopAnimation(); // 0x2fd Func
	goto Label_770; // 0x2ff Jump
	
Label_770:
	return 0; // 0x302 Return
	
Label_768:
	StopAnimation(); // 0x300 Func
	
Label_772:
	return 0; // 0x304 Return
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0; // 0x30d PushV
	var_15_string = "cleanup"; // 0x30e PushS
	var_16_bool = var_12_string == var_15_string; // 0x30f Eq
	if(var_16_bool == 0) goto Label_796; // 0x310 JumpB
	var_1_object = 1; // 0x311 TMovB
	IsLoaded(var_14_bool); // 0x312 Func
	var_17_bool = var_14_bool == 0; // 0x314 Not
	if(var_17_bool == 0) goto Label_795; // 0x315 JumpB
	var_18_object = Obj(); // 0x316 PushV
	func_1414(var_18_object); // 0x317 NEW_2
	RemoveActor(var_18_object); // 0x319 Func
	
Label_795:
	goto Label_800; // 0x31b Jump
	
Label_800:
	return 2; // 0x320 Return
	
Label_796:
	var_21_string = "restore"; // 0x31c PushS
	var_22_bool = var_12_string == var_21_string; // 0x31d Eq
	if(var_22_bool == 0) goto Label_800; // 0x31e JumpB
	var_1_object = 0; // 0x31f TMovB
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	var_12_object = var_1_object; // 0x321 PushT
	if(var_12_object == 0) goto Label_810; // 0x322 JumpB
	var_13_object = Obj(); // 0x323 PushV
	func_1414(var_13_object); // 0x324 NEW_2
	RemoveActor(var_13_object); // 0x326 Func
	Hold(); // 0x328 Func
	
Label_810:
	func_925(); // 0x32b NEW_2
	return 0; // 0x32d Return
}


task_4_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	func_940(); // 0x32f NEW_2
	return 0; // 0x331 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x378 PushI
	var_14_bool = var_12_int == var_13_int; // 0x379 Eq
	if(var_14_bool == 0) goto Label_924; // 0x37a JumpB
	func_883(); // 0x37c NEW_2
	var_16_bool = 0; // 0x37e PushV
	var_16_bool = 0; // 0x37f MovB
	var_17_bool = 0; // 0x380 PushV
	func_1131(var_17_bool); // 0x381 NEW_2
	if(var_17_bool == 0) goto Label_905; // 0x383 JumpB
	var_20_bool = 0; // 0x384 PushV
	func_852(var_20_bool); // 0x385 NEW_2
	if(var_20_bool == 0) goto Label_905; // 0x387 JumpB
	var_16_bool = 1; // 0x388 MovB
	
Label_905:
	if(var_16_bool == 0) goto Label_918; // 0x389 JumpB
	var_37_bool = 0; // 0x38a PushV
	func_832(var_37_bool); // 0x38b NEW_2
	if(var_37_bool == 0) goto Label_917; // 0x38d JumpB
	var_56_bool = 0; var_57_object = Obj(); // 0x38e PushV
	var_58_object = Obj(); // 0x38f PushV
	func_1414(var_58_object); // 0x390 NEW_2
	var_57_object = var_58_object; // 0x391 Mov
	func_1281(var_57_object); // 0x393 NEW_2
	
Label_917:
	goto Label_924; // 0x395 Jump
	
Label_924:
	return 0; // 0x39c Return
	
Label_918:
	func_847(var_12_int); // 0x397 NEW_2
	func_874(); // 0x39a NEW_2
}


task_4_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_bool)
{
	var_13_bool = var_12_bool; // 0x3ba Push
	if(var_13_bool == 0) goto Label_960; // 0x3bb JumpB
	func_874(); // 0x3bd NEW_2
	goto Label_964; // 0x3bf Jump
	
Label_964:
	return 0; // 0x3c4 Return
	
Label_960:
	var_19_string = ""; // 0x3c0 PushV
	var_19_string = "Neutral"; // 0x3c1 MovS
	func_1361(var_19_string); // 0x3c2 NEW_2
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x3c5 PushV
	IsOverrideActive(var_14_bool); // 0x3c6 Func
	var_15_bool = var_14_bool == 0; // 0x3c8 Not
	if(var_15_bool == 0) goto Label_993; // 0x3c9 JumpB
	EventDisable(0); // 0x3ca EventDisable
	func_1065(); // 0x3cc NEW_2
	var_16_bool = 0; var_17_object = Obj(); // 0x3ce PushV
	var_17_object = var_12_object; // 0x3cf Mov
	func_1122(var_17_object); // 0x3d0 NEW_2
	EventEnable(0); // 0x3d2 EventEnable
	var_30_object = Obj(); // 0x3d3 PushV
	var_30_object = var_12_object; // 0x3d4 Mov
	func_1949(var_30_object); // 0x3d5 NEW_2
	var_382_string = ""; // 0x3d7 PushV
	var_382_string = "Neutral"; // 0x3d8 MovS
	func_1361(var_382_string); // 0x3d9 NEW_2
	func_883(); // 0x3dc NEW_2
	func_874(); // 0x3df NEW_2
	
Label_993:
	return 2; // 0x3e1 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	func_777(); // 0x306 NEW_2
	return 0; // 0x308 Return
}


func_0(var_0_object, var_326_int, var_327_object)
{
	var_329_object = Obj(); var_330_bool = 0; var_331_int = 0; var_332_bool = 0; var_333_object = Obj(); var_334_bool = 0; var_335_int = 0; var_336_bool = 0; // 0x0 PushV
	var_0_object = var_327_object; // 0x1 TMov
	var_337_bool = 0; var_338_object = Obj(); var_339_float = 0; // 0x2 PushV
	var_338_object = var_327_object; // 0x3 Mov
	var_339_float = 70.0; // 0x4 MovF
	func_1136(var_338_object, var_339_float); // 0x5 NEW_2
	var_340_bool = var_337_bool == 0; // 0x7 Not
	if(var_340_bool == 0) goto Label_11; // 0x8 JumpB
	var_326_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_333_object); // 0xb Func
	var_341_int = 0; // 0xd PushV
	func_1577(var_341_int); // 0xe NEW_2
	SetNPCName(var_341_int); // 0x10 ObjFunc
	var_342_int = 0; // 0x12 PushV
	func_1575(var_342_int); // 0x13 NEW_2
	SetNPCDescription(var_342_int); // 0x15 ObjFunc
	var_343_string = ""; // 0x17 PushV
	func_1579(var_343_string); // 0x18 NEW_2
	SetPhoto(var_343_string); // 0x1a ObjFunc
	var_344_string = ""; // 0x1c PushV
	func_1581(var_344_string); // 0x1d NEW_2
	SetPhoto2(var_344_string); // 0x1f ObjFunc
	var_345_int = 0; // 0x21 PushV
	func_1792(var_345_int); // 0x22 NEW_2
	SetPlayerName(var_345_int); // 0x24 ObjFunc
	var_335_int = -1; // 0x26 MovI
	IsOverrideActive(var_334_bool); // 0x27 Func
	var_346_bool = var_334_bool; // 0x29 Push
	if(var_346_bool == 0) goto Label_45; // 0x2a JumpB
	var_326_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_333_object); // 0x2d Func
	var_347_bool = 0; var_348_object = Obj(); // 0x2f PushV
	var_349_object = Obj(); // 0x30 PushV
	func_1414(var_349_object); // 0x31 NEW_2
	var_348_object = var_349_object; // 0x32 Mov
	func_1223(var_347_bool, var_348_object); // 0x34 NEW_2
	var_350_object = Obj(); var_351_object = Obj(); // 0x36 PushV
	var_350_object = var_327_object; // 0x37 Mov
	var_351_object = var_333_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_352_object, var_353_object, var_354_string, var_355_bool, var_350_object, var_351_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_336_bool); // 0x3d ObjFunc
	
Label_63:
	var_380_bool = var_336_bool == 0; // 0x3f Not
	if(var_380_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_336_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_381_object = Obj(); // 0x46 PushV
	var_381_object = var_327_object; // 0x47 Mov
	func_1205(); // 0x48 NEW_2
	StopDialog(var_333_object); // 0x4a Func
	GetReturnValue(var_335_int); // 0x4c ObjFunc
	var_326_int = var_335_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1792(var_104_int)
{
	var_105_int = 0; var_106_int = 0; // 0x700 PushV
	var_107_string = "branch"; // 0x701 PushS
	GetVariable(var_107_string, var_106_int); // 0x702 Func
	var_108_int = 0; // 0x704 PushI
	var_109_bool = var_106_int == var_108_int; // 0x705 Eq
	if(var_109_bool == 0) goto Label_1802; // 0x706 JumpB
	var_104_int = 1; // 0x707 MovI
	return 2; // 0x708 Return
	
Label_1802:
	var_110_int = 1; // 0x70a PushI
	var_111_bool = var_106_int == var_110_int; // 0x70b Eq
	if(var_111_bool == 0) goto Label_1807; // 0x70c JumpB
	var_104_int = 2; // 0x70d MovI
	return 2; // 0x70e Return
	
Label_1807:
	var_104_int = 3; // 0x70f MovI
	return 2; // 0x710 Return
}


func_1281(var_124_bool)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; // 0x501 PushV
	var_131_string = "c"; // 0x502 MovS
	var_132_int = 0; // 0x503 MovI
	
Label_1284:
	var_136_int = 1; // 0x504 PushI
	if(var_136_int == 0) goto Label_1297; // 0x505 JumpB
	var_137_int = 1; // 0x506 PushI
	var_138_int = var_132_int + var_137_int; // 0x507 Add
	var_139_int = var_131_string + var_138_int; // 0x508 Add
	HasProperty(var_139_int, var_133_bool); // 0x509 ObjFunc
	var_140_bool = var_133_bool == 0; // 0x50b Not
	if(var_140_bool == 0) goto Label_1294; // 0x50c JumpB
	goto Label_1297; // 0x50d Jump
	
Label_1297:
	var_141_bool = var_132_int == 0; // 0x511 Not
	if(var_141_bool == 0) goto Label_1301; // 0x512 JumpB
	var_124_bool = 0; // 0x513 MovB
	return 10; // 0x514 Return
	
Label_1301:
	var_134_int = 0; // 0x515 MovI
	var_142_int = 1; // 0x516 PushI
	var_143_bool = var_132_int > var_142_int; // 0x517 GT
	if(var_143_bool == 0) goto Label_1307; // 0x518 JumpB
	irand(var_134_int, var_132_int); // 0x519 Func
	
Label_1307:
	var_144_int = 1; // 0x51b PushI
	var_145_int = var_134_int + var_144_int; // 0x51c Add
	var_146_int = var_131_string + var_145_int; // 0x51d Add
	GetProperty(var_146_int, var_135_string); // 0x51e ObjFunc
	var_147_bool = 0; var_148_string = ""; // 0x520 PushV
	var_148_string = var_135_string; // 0x521 Mov
	func_1392(var_147_bool, var_148_string); // 0x522 NEW_2
	var_124_bool = var_147_bool; // 0x523 Mov
	return 10; // 0x525 Return
	
Label_1294:
	var_153_int = 1; // 0x50e PushI
	var_132_int = var_132_int + var_153_int; // 0x50f Add2
	goto Label_1284; // 0x510 Jump
}


func_1542(var_34_int)
{
	var_35_float = 0; var_36_float = 0; // 0x606 PushV
	GetGameTime(var_36_float); // 0x607 Func
	var_37_int = 1; // 0x609 PushI
	var_38_int = 0; // 0x60a PushV
	var_39_int = 24; // 0x60b PushI
	var_38_int = var_36_float / var_36_float; // 0x60c Div2
	var_34_int = var_37_int + var_38_int; // 0x60d Add2
	return 2; // 0x60e Return
}


func_777()
{
	func_818(var_11_bool); // 0x30a NEW_2
	return 0; // 0x30c Return
}


func_1551(var_36_string, var_37_int)
{
	var_38_string = ""; var_39_string = ""; // 0x60f PushV
	var_39_string = "idle"; // 0x610 MovS
	var_40_int = var_37_int; // 0x611 Push
	if(var_40_int == 0) goto Label_1556; // 0x612 JumpB
	var_39_string = var_39_string + var_37_int; // 0x613 Add2
	
Label_1556:
	var_36_string = var_39_string; // 0x614 Mov
	return 2; // 0x615 Return
}


func_1809()
{
	var_138_bool = 0; var_139_string = ""; var_140_string = ""; // 0x711 PushV
	var_139_string = "klara2_npc_positioner"; // 0x712 MovS
	var_140_string = "remove_danko"; // 0x713 MovS
	func_1530(var_138_bool, var_139_string, var_140_string); // 0x714 NEW_2
	return 0; // 0x716 Return
}


func_1558(var_30_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x616 PushV
	var_33_int = 0; // 0x617 MovI
	
Label_1560:
	var_35_string = "all"; // 0x618 PushS
	var_36_string = ""; var_37_int = 0; // 0x619 PushV
	var_37_int = var_33_int; // 0x61a Mov
	func_1551(var_36_string, var_37_int); // 0x61b NEW_2
	HasAnimation(var_34_bool, var_35_string, var_36_string); // 0x61d Func
	var_41_bool = var_34_bool == 0; // 0x61f Not
	if(var_41_bool == 0) goto Label_1570; // 0x620 JumpB
	goto Label_1573; // 0x621 Jump
	
Label_1573:
	var_30_int = var_33_int; // 0x625 Mov
	return 4; // 0x626 Return
	
Label_1570:
	var_42_int = 1; // 0x622 PushI
	var_33_int = var_33_int + var_42_int; // 0x623 Add2
	goto Label_1560; // 0x624 Jump
}


func_1815()
{
	var_54_bool = 0; var_55_string = ""; var_56_string = ""; // 0x717 PushV
	var_55_string = "klara2_npc_positioner"; // 0x718 MovS
	var_56_string = "remove_burah"; // 0x719 MovS
	func_1530(var_54_bool, var_55_string, var_56_string); // 0x71a NEW_2
	return 0; // 0x71c Return
}


func_1821(var_283_int)
{
	var_284_int = 0; var_285_int = 0; // 0x71d PushV
	var_286_string = "k2system_klara_day"; // 0x71e PushS
	GetVariable(var_286_string, var_285_int); // 0x71f Func
	var_283_int = var_285_int; // 0x721 Mov
	return 2; // 0x722 Return
}


func_1827(var_238_int)
{
	var_239_int = 0; var_240_int = 0; // 0x723 PushV
	var_241_string = "k2system_burah_day"; // 0x724 PushS
	GetVariable(var_241_string, var_240_int); // 0x725 Func
	var_238_int = var_240_int; // 0x727 Mov
	return 2; // 0x728 Return
}


func_1318(var_155_bool)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; // 0x526 PushV
	var_167_string = "d"; // 0x527 PushS
	var_168_int = 0; // 0x528 PushV
	func_1542(var_168_int); // 0x529 NEW_2
	var_169_int = var_167_string + var_168_int; // 0x52b Add
	var_170_string = "m"; // 0x52c PushS
	var_162_string = var_169_int + var_170_string; // 0x52d Add2
	var_163_int = 0; // 0x52e MovI
	
Label_1327:
	var_171_int = 1; // 0x52f PushI
	if(var_171_int == 0) goto Label_1340; // 0x530 JumpB
	var_172_int = 1; // 0x531 PushI
	var_173_int = var_163_int + var_172_int; // 0x532 Add
	var_174_int = var_162_string + var_173_int; // 0x533 Add
	HasProperty(var_174_int, var_164_bool); // 0x534 ObjFunc
	var_175_bool = var_164_bool == 0; // 0x536 Not
	if(var_175_bool == 0) goto Label_1337; // 0x537 JumpB
	goto Label_1340; // 0x538 Jump
	
Label_1340:
	var_176_bool = var_163_int == 0; // 0x53c Not
	if(var_176_bool == 0) goto Label_1344; // 0x53d JumpB
	var_155_bool = 0; // 0x53e MovB
	return 10; // 0x53f Return
	
Label_1344:
	var_165_int = 0; // 0x540 MovI
	var_177_int = 1; // 0x541 PushI
	var_178_bool = var_163_int > var_177_int; // 0x542 GT
	if(var_178_bool == 0) goto Label_1350; // 0x543 JumpB
	irand(var_165_int, var_163_int); // 0x544 Func
	
Label_1350:
	var_179_int = 1; // 0x546 PushI
	var_180_int = var_165_int + var_179_int; // 0x547 Add
	var_181_int = var_162_string + var_180_int; // 0x548 Add
	GetProperty(var_181_int, var_166_string); // 0x549 ObjFunc
	var_182_bool = 0; var_183_string = ""; // 0x54b PushV
	var_183_string = var_166_string; // 0x54c Mov
	func_1392(var_182_bool, var_183_string); // 0x54d NEW_2
	var_155_bool = var_182_bool; // 0x54e Mov
	return 10; // 0x550 Return
	
Label_1337:
	var_184_int = 1; // 0x539 PushI
	var_163_int = var_163_int + var_184_int; // 0x53a Add2
	goto Label_1327; // 0x53b Jump
}


func_1575(var_101_int)
{
	var_101_int = 515592; // 0x627 MovI
	return 0; // 0x628 Return
}


func_1063(var_50_bool)
{
	var_50_bool = 1; // 0x427 MovB
	return 0; // 0x428 Return
}


func_1577(var_100_int)
{
	var_100_int = 511961; // 0x629 MovI
	return 0; // 0x62a Return
}


func_1065()
{
	StopAnimation(); // 0x429 Func
	StopGroup0(); // 0x42b Func
	return 0; // 0x42d Return
}


func_1579(var_102_string)
{
	var_102_string = "ui/NPC_Burah.png"; // 0x62b MovS
	return 0; // 0x62c Return
}


func_1833(var_263_int)
{
	var_264_int = 0; var_265_int = 0; // 0x729 PushV
	var_266_string = "k2system_danko_day"; // 0x72a PushS
	GetVariable(var_266_string, var_265_int); // 0x72b Func
	var_263_int = var_265_int; // 0x72d Mov
	return 2; // 0x72e Return
}


func_1581(var_103_string)
{
	var_103_string = "ui/NPC_Burah_b.png"; // 0x62d MovS
	return 0; // 0x62e Return
}


func_1070(var_27_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); // 0x42e PushV
	GetPosition(var_32_cvector); // 0x42f Func
	GetPosition(var_33_cvector); // 0x431 ObjFunc
	var_34_cvector = var_33_cvector - var_32_cvector; // 0x433 Sub2
	var_27_float = var_34_cvector | var_34_cvector; // 0x434 Or2
	return 6; // 0x435 Return
}


func_1583(var_95_bool)
{
	var_95_bool = 1; // 0x62f MovB
	return 0; // 0x630 Return
}


func_1839(var_233_int)
{
	var_234_int = 0; var_235_int = 0; var_236_int = 0; var_237_int = 0; // 0x72f PushV
	var_238_int = 0; // 0x730 PushV
	func_1827(var_238_int); // 0x731 NEW_2
	var_236_int = var_238_int; // 0x732 Mov
	var_242_string = "k2system_burah_state"; // 0x734 PushS
	var_243_int = var_242_string + var_236_int; // 0x735 Add
	GetVariable(var_243_int, var_237_int); // 0x736 Func
	var_233_int = var_237_int; // 0x738 Mov
	return 4; // 0x739 Return
}


func_1585(var_60_object)
{
	var_62_bool = 0; var_63_object = Obj(); var_64_float = 0; // 0x632 PushV
	var_63_object = var_60_object; // 0x633 Mov
	var_64_float = 0.05; // 0x634 MovF
	func_1485(var_62_bool, var_63_object, var_64_float); // 0x635 NEW_2
	return 0; // 0x637 Return
}


func_818(var_0_object)
{
	var_12_bool = 0; // 0x332 PushV
	func_1131(var_12_bool); // 0x333 NEW_2
	var_15_bool = var_12_bool == 0; // 0x335 Not
	if(var_15_bool == 0) goto Label_825; // 0x336 JumpB
	Hold(); // 0x337 Func
	
Label_825:
	GetDirection(var_0_object); // 0x339 Func
	
Label_827:
	func_994(); // 0x33c NEW_2
	goto Label_827; // 0x33e Jump
}


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_203_object, var_204_object)
{
	var_0_object = var_204_object; // 0x134 TMov
	var_1_object = var_203_object; // 0x135 TMov
	var_3_string = 0; // 0x136 TMovB
	var_209_int = 1; // 0x137 PushI
	if(var_209_int == 0) goto Label_375; // 0x138 JumpB
	var_210_string = ""; // 0x139 PushV
	var_210_string = "Neutral"; // 0x13a MovS
	func_405(var_204_object, var_210_string); // 0x13b NEW_2
	var_227_int = 539063; // 0x13d PushI
	SetMessage(var_227_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_228_bool = 0; var_229_object = Obj(); // 0x142 PushV
	var_229_object = var_1_object; // 0x143 MovT
	func_1664(var_228_bool, var_229_object); // 0x144 NEW_2
	if(var_228_bool == 0) goto Label_332; // 0x146 JumpB
	var_245_int = 539064; // 0x147 PushI
	var_246_int = 41700; // 0x148 PushI
	var_247_int = 41012; // 0x149 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x14a TObjFunc
	
Label_332:
	var_248_bool = 0; var_249_object = Obj(); // 0x14c PushV
	var_249_object = var_1_object; // 0x14d MovT
	func_1664(var_248_bool, var_249_object); // 0x14e NEW_2
	if(var_248_bool == 0) goto Label_342; // 0x150 JumpB
	var_250_int = 539750; // 0x151 PushI
	var_251_int = 41703; // 0x152 PushI
	var_252_int = 41702; // 0x153 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x154 TObjFunc
	
Label_342:
	var_253_bool = 0; var_254_object = Obj(); // 0x156 PushV
	var_254_object = var_1_object; // 0x157 MovT
	func_1674(var_253_bool, var_254_object); // 0x158 NEW_2
	if(var_253_bool == 0) goto Label_352; // 0x15a JumpB
	var_270_int = 539753; // 0x15b PushI
	var_271_int = 41706; // 0x15c PushI
	var_272_int = 41705; // 0x15d PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x15e TObjFunc
	
Label_352:
	var_273_bool = 0; var_274_object = Obj(); // 0x160 PushV
	var_274_object = var_1_object; // 0x161 MovT
	func_1684(var_273_bool, var_274_object); // 0x162 NEW_2
	if(var_273_bool == 0) goto Label_362; // 0x164 JumpB
	var_290_int = 539756; // 0x165 PushI
	var_291_int = 41709; // 0x166 PushI
	var_292_int = 41708; // 0x167 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x168 TObjFunc
	
Label_362:
	var_293_int = 539759; // 0x16a PushI
	var_294_int = -1; // 0x16b PushI
	var_295_int = 41711; // 0x16c PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x16d TObjFunc
	var_296_int = 541075; // 0x16f PushI
	var_297_int = -1; // 0x170 PushI
	var_298_int = 43180; // 0x171 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x172 TObjFunc
	goto Label_375; // 0x174 Jump
	
Label_375:
	var_299_bool = 0; // 0x177 PushV
	func_1583(var_299_bool); // 0x178 NEW_2
	if(var_299_bool == 0) goto Label_390; // 0x17a JumpB
	
Label_379:
	lshWaitForAnimEnd(); // 0x17b Func
	var_300_string = var_3_string; // 0x17d PushT
	if(var_300_string == 0) goto Label_384; // 0x17e JumpB
	goto Label_389; // 0x17f Jump
	
Label_389:
	goto Label_404; // 0x185 Jump
	
Label_404:
	return 0; // 0x194 Return
	
Label_384:
	var_301_string = ""; // 0x180 PushV
	var_301_string = var_2_object; // 0x181 MovT
	func_1361(var_301_string); // 0x182 NEW_2
	goto Label_379; // 0x184 Jump
	
Label_390:
	var_312_string = "all"; // 0x186 PushS
	var_313_string = "idle"; // 0x187 PushS
	PlayAnimation(var_312_string, var_313_string); // 0x188 Func
	
Label_394:
	WaitForAnimEnd(); // 0x18a Func
	var_314_string = var_3_string; // 0x18c PushT
	if(var_314_string == 0) goto Label_399; // 0x18d JumpB
	goto Label_404; // 0x18e Jump
	
Label_399:
	var_315_string = "all"; // 0x18f PushS
	var_316_string = "idle"; // 0x190 PushS
	PlayAnimation(var_315_string, var_316_string); // 0x191 Func
	goto Label_394; // 0x193 Jump
}


func_1078(var_81_bool, var_82_object, var_83_string)
{
	var_84_bool = 0; var_85_bool = 0; // 0x436 PushV
	var_86_string = "HasProperty"; // 0x437 PushS
	var_87_int = 2; // 0x438 PushI
	var_88_bool = IsFuncExist(var_82_object, var_86_string, var_87_int); // 0x439 FuncExist
	var_89_bool = var_88_bool == 0; // 0x43a Not
	if(var_89_bool == 0) goto Label_1086; // 0x43b JumpB
	var_81_bool = 0; // 0x43c MovB
	return 2; // 0x43d Return
	
Label_1086:
	HasProperty(var_83_string, var_85_bool); // 0x43e ObjFunc
	var_81_bool = var_85_bool; // 0x440 Mov
	return 2; // 0x441 Return
}


func_1592(var_141_object)
{
	var_143_bool = 0; var_144_object = Obj(); var_145_float = 0; // 0x639 PushV
	var_144_object = var_141_object; // 0x63a Mov
	var_145_float = -0.05; // 0x63b MovF
	func_1485(var_143_bool, var_144_object, var_145_float); // 0x63c NEW_2
	return 0; // 0x63e Return
}


func_1850(var_43_int)
{
	var_44_int = 0; var_45_int = 0; // 0x73a PushV
	var_46_int = 0; // 0x73b PushV
	func_1827(var_46_int); // 0x73c NEW_2
	var_45_int = var_46_int; // 0x73d Mov
	var_50_string = "k2system_burah_state"; // 0x73f PushS
	var_51_int = var_50_string + var_45_int; // 0x740 Add
	SetVariable(var_51_int, var_43_int); // 0x741 Func
	return 2; // 0x743 Return
}


func_1599(var_146_object)
{
	var_148_string = "beta_pills 5 is given"; // 0x640 PushS
	Trace(var_148_string); // 0x641 Func
	var_149_object = Obj(); var_150_string = ""; var_151_int = 0; // 0x643 PushV
	var_149_object = var_146_object; // 0x644 Mov
	var_150_string = "beta_pills"; // 0x645 MovS
	var_151_int = 5; // 0x646 MovI
	func_1472(var_149_object, var_150_string, var_151_int); // 0x647 NEW_2
	return 0; // 0x649 Return
}


func_832(var_37_bool)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x340 PushV
	var_40_string = "player"; // 0x341 PushS
	FindActor(var_39_object, var_40_string); // 0x342 Func
	var_41_bool = var_39_object == 0; // 0x344 Not
	if(var_41_bool == 0) goto Label_840; // 0x345 JumpB
	var_37_bool = 0; // 0x346 MovB
	return 2; // 0x347 Return
	
Label_840:
	var_42_bool = 0; var_43_object = Obj(); // 0x348 PushV
	var_43_object = var_39_object; // 0x349 Mov
	func_1122(var_43_object); // 0x34a NEW_2
	var_37_bool = var_42_bool; // 0x34b Mov
	return 2; // 0x34d Return
}


func_1090(var_73_bool, var_74_object, var_75_string, var_76_float, var_77_float, var_78_float)
{
	var_79_float = 0; var_80_float = 0; // 0x442 PushV
	var_81_bool = 0; var_82_object = Obj(); var_83_string = ""; // 0x443 PushV
	var_82_object = var_74_object; // 0x444 Mov
	var_83_string = var_75_string; // 0x445 Mov
	func_1078(var_81_bool, var_82_object, var_83_string); // 0x446 NEW_2
	var_90_bool = var_81_bool == 0; // 0x448 Not
	if(var_90_bool == 0) goto Label_1100; // 0x449 JumpB
	var_73_bool = 0; // 0x44a MovB
	return 2; // 0x44b Return
	
Label_1100:
	GetProperty(var_75_string, var_80_float); // 0x44c ObjFunc
	var_91_float = 0; var_92_float = 0; var_93_float = 0; var_94_float = 0; // 0x44e PushV
	var_92_float = var_80_float + var_76_float; // 0x44f Add2
	var_93_float = var_77_float; // 0x450 Mov
	var_94_float = var_78_float; // 0x451 Mov
	func_1430(var_91_float, var_92_float, var_93_float, var_94_float); // 0x452 NEW_2
	SetProperty(var_75_string, var_91_float); // 0x454 ObjFunc
	var_73_bool = 1; // 0x456 MovB
	return 2; // 0x457 Return
}


func_1860(var_258_int)
{
	var_259_int = 0; var_260_int = 0; var_261_int = 0; var_262_int = 0; // 0x744 PushV
	var_263_int = 0; // 0x745 PushV
	func_1833(var_263_int); // 0x746 NEW_2
	var_261_int = var_263_int; // 0x747 Mov
	var_267_string = "k2system_danko_state"; // 0x749 PushS
	var_268_int = var_267_string + var_261_int; // 0x74a Add
	GetVariable(var_268_int, var_262_int); // 0x74b Func
	var_258_int = var_262_int; // 0x74d Mov
	return 4; // 0x74e Return
}


func_1610()
{
	var_172_string = "playsound"; // 0x64b PushS
	var_173_string = "giveitem"; // 0x64c PushS
	TriggerWorld(var_172_string, var_173_string); // 0x64d Func
	return 0; // 0x64f Return
}


func_847(var_0_object)
{
	var_89_float = GetByIndex(var_0_object, 0); // 0x34f PushE
	var_90_float = GetByIndex(var_0_object, 2); // 0x350 PushE
	RotateAsync(var_89_float, var_90_float); // 0x351 Func
	return 0; // 0x353 Return
}


func_1616(var_187_object)
{
	var_189_string = "burah_serum is given"; // 0x651 PushS
	Trace(var_189_string); // 0x652 Func
	var_190_object = Obj(); var_191_string = ""; var_192_int = 0; // 0x654 PushV
	var_190_object = var_187_object; // 0x655 Mov
	var_191_string = "burah_serum"; // 0x656 MovS
	var_192_int = 1; // 0x657 MovI
	func_1472(var_190_object, var_191_string, var_192_int); // 0x658 NEW_2
	return 0; // 0x65a Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_350_object, var_351_object)
{
	var_0_object = var_351_object; // 0x52 TMov
	var_1_object = var_350_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_356_int = 1; // 0x55 PushI
	if(var_356_int == 0) goto Label_109; // 0x56 JumpB
	var_357_string = ""; // 0x57 PushV
	var_357_string = "Neutral"; // 0x58 MovS
	func_139(var_351_object, var_357_string); // 0x59 NEW_2
	var_365_int = 539060; // 0x5b PushI
	SetMessage(var_365_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_366_int = 539061; // 0x60 PushI
	var_367_int = 43176; // 0x61 PushI
	var_368_int = 41009; // 0x62 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x63 TObjFunc
	var_369_int = 541070; // 0x65 PushI
	var_370_int = -1; // 0x66 PushI
	var_371_int = 43175; // 0x67 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_372_bool = 0; // 0x6d PushV
	func_1583(var_372_bool); // 0x6e NEW_2
	if(var_372_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_373_string = var_3_string; // 0x73 PushT
	if(var_373_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_374_string = ""; // 0x76 PushV
	var_374_string = var_2_object; // 0x77 MovT
	func_1361(var_374_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_375_string = "all"; // 0x7c PushS
	var_376_string = "idle"; // 0x7d PushS
	PlayAnimation(var_375_string, var_376_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_377_string = var_3_string; // 0x82 PushT
	if(var_377_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_378_string = "all"; // 0x85 PushS
	var_379_string = "idle"; // 0x86 PushS
	PlayAnimation(var_378_string, var_379_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_1871(var_125_int)
{
	var_126_int = 0; var_127_int = 0; // 0x74f PushV
	var_128_int = 0; // 0x750 PushV
	func_1833(var_128_int); // 0x751 NEW_2
	var_127_int = var_128_int; // 0x752 Mov
	var_132_string = "k2system_danko_state"; // 0x754 PushS
	var_133_int = var_132_string + var_127_int; // 0x755 Add
	SetVariable(var_133_int, var_125_int); // 0x756 Func
	return 2; // 0x758 Return
}


func_1361(var_301_string)
{
	var_302_bool = 0; var_303_float = 0; var_304_float = 0; var_305_bool = 0; var_306_float = 0; var_307_float = 0; // 0x551 PushV
	lshHasAnimation(var_305_bool, var_301_string); // 0x552 Func
	var_308_bool = var_305_bool; // 0x554 Push
	if(var_308_bool == 0) goto Label_1372; // 0x555 JumpB
	lshGetAnimTimes(var_301_string, var_306_float, var_307_float); // 0x556 Func
	var_309_bool = 0; // 0x558 PushB
	lshPlayAnimation(var_306_float, var_307_float, var_309_bool); // 0x559 Func
	goto Label_1376; // 0x55b Jump
	
Label_1376:
	return 6; // 0x560 Return
	
Label_1372:
	var_310_string = "Can't find lsh animation : "; // 0x55c PushS
	var_311_int = var_310_string + var_301_string; // 0x55d Add
	Trace(var_311_int); // 0x55e Func
}


func_852(var_20_bool)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; // 0x354 PushV
	var_25_string = "player"; // 0x355 PushS
	FindActor(var_23_object, var_25_string); // 0x356 Func
	var_26_bool = var_23_object == 0; // 0x358 Not
	if(var_26_bool == 0) goto Label_860; // 0x359 JumpB
	var_20_bool = 0; // 0x35a MovB
	return 4; // 0x35b Return
	
Label_860:
	var_27_float = 0; var_28_object = Obj(); // 0x35c PushV
	var_28_object = var_23_object; // 0x35d Mov
	func_1070(var_28_object); // 0x35e NEW_2
	var_35_float = 90000.0; // 0x360 PushF
	var_36_bool = var_27_float > var_35_float; // 0x361 GT
	if(var_36_bool == 0) goto Label_869; // 0x362 JumpB
	var_20_bool = 0; // 0x363 MovB
	return 4; // 0x364 Return
	
Label_869:
	CanSee(var_24_bool, var_23_object); // 0x365 Func
	var_20_bool = var_24_bool; // 0x367 Mov
	return 4; // 0x368 Return
}


func_1112(var_20_bool, var_21_cvector)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; // 0x458 PushV
	GetPosition(var_25_cvector); // 0x459 Func
	var_26_cvector = var_21_cvector - var_25_cvector; // 0x45b Sub2
	var_28_float = GetByIndex(var_26_cvector, 0); // 0x45c PushE
	var_29_float = GetByIndex(var_26_cvector, 2); // 0x45d PushE
	Rotate(var_28_float, var_29_float, var_27_bool); // 0x45e Func
	var_20_bool = var_27_bool; // 0x460 Mov
	return 6; // 0x461 Return
}


func_1881(var_278_int)
{
	var_279_int = 0; var_280_int = 0; var_281_int = 0; var_282_int = 0; // 0x759 PushV
	var_283_int = 0; // 0x75a PushV
	func_1821(var_283_int); // 0x75b NEW_2
	var_281_int = var_283_int; // 0x75c Mov
	var_287_string = "k2system_klara_state"; // 0x75e PushS
	var_288_int = var_287_string + var_281_int; // 0x75f Add
	GetVariable(var_288_int, var_282_int); // 0x760 Func
	var_278_int = var_282_int; // 0x762 Mov
	return 4; // 0x763 Return
}


func_1627()
{
	func_1916(); // 0x65d NEW_2
	return 0; // 0x65f Return
}


func_1632()
{
	func_1924(); // 0x662 NEW_2
	return 0; // 0x664 Return
}


func_1377(var_214_string, var_215_bool)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0; // 0x561 PushV
	lshHasAnimation(var_221_bool, var_214_string); // 0x562 Func
	var_224_bool = var_221_bool; // 0x564 Push
	if(var_224_bool == 0) goto Label_1387; // 0x565 JumpB
	lshGetAnimTimes(var_214_string, var_222_float, var_223_float); // 0x566 Func
	lshPlayAnimation(var_222_float, var_223_float, var_215_bool); // 0x568 Func
	goto Label_1391; // 0x56a Jump
	
Label_1391:
	return 6; // 0x56f Return
	
Label_1387:
	var_225_string = "Can't find lsh animation : "; // 0x56b PushS
	var_226_int = var_225_string + var_214_string; // 0x56c Add
	Trace(var_226_int); // 0x56d Func
}


func_1122(var_16_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x462 PushV
	GetPosition(var_19_cvector); // 0x463 ObjFunc
	var_20_bool = 0; var_21_cvector = CVector(0,0,0); // 0x465 PushV
	var_21_cvector = var_19_cvector; // 0x466 Mov
	func_1112(var_20_bool, var_21_cvector); // 0x467 NEW_2
	var_16_bool = var_20_bool; // 0x468 Mov
	return 2; // 0x46a Return
}


func_1892(var_178_int)
{
	var_179_int = 0; var_180_int = 0; // 0x764 PushV
	var_181_int = 0; // 0x765 PushV
	func_1821(var_181_int); // 0x766 NEW_2
	var_180_int = var_181_int; // 0x767 Mov
	var_185_string = "k2system_klara_state"; // 0x769 PushS
	var_186_int = var_185_string + var_180_int; // 0x76a Add
	SetVariable(var_186_int, var_178_int); // 0x76b Func
	return 2; // 0x76d Return
}


func_1637()
{
	func_1902(); // 0x667 NEW_2
	return 0; // 0x669 Return
}


func_1642()
{
	func_1944(); // 0x66c NEW_2
	return 0; // 0x66e Return
}


func_1131(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x46b PushV
	IsLoaded(var_14_bool); // 0x46c Func
	var_12_bool = var_14_bool; // 0x46e Mov
	return 2; // 0x46f Return
}


func_874()
{
	var_384_float = 0; var_385_float = 0; // 0x36a PushV
	var_386_int = 8; // 0x36b PushI
	var_387_int = 16; // 0x36c PushI
	rand(var_385_float, var_386_int, var_387_int); // 0x36d Func
	var_388_int = 10; // 0x36f PushI
	SetTimer(var_388_int, var_385_float); // 0x370 Func
	return 2; // 0x372 Return
}


func_1902()
{
	func_1738(); // 0x76f NEW_2
	var_125_int = 0; // 0x771 PushV
	var_125_int = 3; // 0x772 MovI
	func_1871(var_125_int); // 0x773 NEW_2
	return 0; // 0x775 Return
}


func_1647()
{
	func_1815(); // 0x671 NEW_2
	return 0; // 0x673 Return
}


func_1136(var_52_bool, var_54_float)
{
	var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_bool = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; var_72_bool = 0; // 0x470 PushV
	GetPosition(var_65_cvector); // 0x471 ObjFunc
	GetEyesHeight(var_64_float); // 0x473 ObjFunc
	var_73_float = GetByIndex(var_65_cvector, 1); // 0x475 PushE
	var_73_float = var_73_float + var_64_float; // 0x476 Add2
	SetByIndex(var_65_cvector, 1) = var_73_float; // 0x477 PopE
	GetPosition(var_66_cvector); // 0x478 Func
	GetEyesHeight(var_64_float); // 0x47a Func
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x47c PushE
	var_74_float = var_74_float + var_64_float; // 0x47d Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x47e PopE
	var_67_cvector = var_65_cvector - var_66_cvector; // 0x47f Sub2
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x480 PushE
	var_75_float = 0; // 0x481 MovI
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x482 PopE
	var_76_int = var_67_cvector | var_67_cvector; // 0x483 Or
	var_77_float = sqrt(var_76_int); // 0x484 Sqrt
	var_67_cvector = var_67_cvector / var_67_cvector; // 0x485 Div2
	var_68_cvector = -var_67_cvector; // 0x486 Neg2
	var_78_float = var_67_cvector * var_54_float; // 0x487 Mult
	var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); // 0x488 PushV
	var_81_cvector = CVector(0.0, 1.0, 0.0); // 0x489 PushVec
	var_80_cvector = var_68_cvector ^ var_81_cvector; // 0x48a Xor2
	func_1420(var_79_cvector, var_80_cvector); // 0x48b NEW_2
	var_87_int = 25; // 0x48d PushI
	var_88_float = var_79_cvector * var_87_int; // 0x48e Mult
	var_89_int = var_78_float + var_88_float; // 0x48f Add
	var_90_cvector = CVector(0.0, 10.0, 0.0); // 0x490 PushVec
	var_69_cvector = var_89_int - var_90_cvector; // 0x491 Sub2
	var_70_cvector = var_66_cvector + var_69_cvector; // 0x492 Add2
	IsOverrideActive(var_71_bool); // 0x493 Func
	var_91_bool = var_71_bool; // 0x495 Push
	if(var_91_bool == 0) goto Label_1177; // 0x496 JumpB
	var_52_bool = 0; // 0x497 MovB
	return 18; // 0x498 Return
	
Label_1177:
	StopWorld(); // 0x499 Func
	var_92_bool = 1; // 0x49b PushB
	CameraTransit(var_70_cvector, var_68_cvector, var_92_bool); // 0x49c Func
	var_93_float = GetByIndex(var_69_cvector, 0); // 0x49e PushE
	var_94_float = GetByIndex(var_69_cvector, 2); // 0x49f PushE
	Rotate(var_93_float, var_94_float); // 0x4a0 Func
	var_95_bool = 0; // 0x4a2 PushV
	func_1583(var_95_bool); // 0x4a3 NEW_2
	if(var_95_bool == 0) goto Label_1191; // 0x4a5 JumpB
	goto Label_1199; // 0x4a6 Jump
	
Label_1199:
	CameraWaitForPlayFinish(); // 0x4af Func
	ResumeWorld(); // 0x4b1 Func
	var_52_bool = 1; // 0x4b3 MovB
	return 18; // 0x4b4 Return
	
Label_1191:
	var_96_string = "head"; // 0x4a7 PushS
	HasAnimationTrack(var_72_bool, var_96_string); // 0x4a8 Func
	var_97_bool = var_72_bool; // 0x4aa Push
	if(var_97_bool == 0) goto Label_1199; // 0x4ab JumpB
	var_98_string = "head"; // 0x4ac PushS
	LookAsyncCamera(var_98_string); // 0x4ad Func
}


func_1392(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0; // 0x570 PushV
	var_151_bool = 0; // 0x571 PushV
	func_1583(var_151_bool); // 0x572 NEW_2
	if(var_151_bool == 0) goto Label_1405; // 0x574 JumpB
	lshHasSpeech(var_150_bool, var_148_string); // 0x575 Func
	var_152_bool = var_150_bool; // 0x577 Push
	if(var_152_bool == 0) goto Label_1405; // 0x578 JumpB
	lshPlaySpeech(var_148_string); // 0x579 Func
	var_147_bool = 1; // 0x57b MovB
	return 2; // 0x57c Return
	
Label_1405:
	var_147_bool = 0; // 0x57d MovB
	return 2; // 0x57e Return
}


func_883()
{
	var_383_int = 10; // 0x373 PushI
	KillTimer(var_383_int); // 0x374 Func
	return 0; // 0x376 Return
}


func_1652()
{
	func_1809(); // 0x676 NEW_2
	return 0; // 0x678 Return
}


func_1910(var_257_bool)
{
	var_258_int = 0; // 0x776 PushV
	func_1860(var_258_int); // 0x777 NEW_2
	var_269_int = 1; // 0x779 PushI
	var_257_bool = var_258_int == var_269_int; // 0x77a Eq2
	return 0; // 0x77b Return
}


func_1657(var_195_object)
{
	var_197_bool = 0; var_198_object = Obj(); var_199_float = 0; // 0x67a PushV
	var_198_object = var_195_object; // 0x67b Mov
	var_199_float = -0.3; // 0x67c MovF
	func_1485(var_197_bool, var_198_object, var_199_float); // 0x67d NEW_2
	return 0; // 0x67f Return
}


func_1916()
{
	func_1712(); // 0x77d NEW_2
	var_43_int = 0; // 0x77f PushV
	var_43_int = 2; // 0x780 MovI
	func_1850(var_43_int); // 0x781 NEW_2
	return 0; // 0x783 Return
}


func_1407()
{
	var_15_bool = 0; // 0x57f PushV
	func_1583(var_15_bool); // 0x580 NEW_2
	if(var_15_bool == 0) goto Label_1413; // 0x582 JumpB
	lshStopSpeech(); // 0x583 Func
	
Label_1413:
	return 0; // 0x585 Return
}


func_1664(var_228_bool, var_229_object)
{
	var_230_bool = 0; var_231_object = Obj(); // 0x681 PushV
	var_231_object = var_229_object; // 0x682 Mov
	func_1694(var_231_object); // 0x683 NEW_2
	if(var_230_bool == 0) goto Label_1672; // 0x685 JumpB
	var_228_bool = 1; // 0x686 MovB
	return 0; // 0x687 Return
	
Label_1672:
	var_228_bool = 0; // 0x688 MovB
	return 0; // 0x689 Return
}


func_1924()
{
	func_1725(); // 0x785 NEW_2
	var_112_int = 0; // 0x787 PushV
	var_112_int = 1; // 0x788 MovI
	func_1850(var_112_int); // 0x789 NEW_2
	return 0; // 0x78b Return
}


func_1414(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x586 PushV
	self(var_117_object); // 0x587 Func
	var_115_object = var_117_object; // 0x589 Mov
	return 2; // 0x58a Return
}


func_1674(var_253_bool, var_254_object)
{
	var_255_bool = 0; var_256_object = Obj(); // 0x68b PushV
	var_256_object = var_254_object; // 0x68c Mov
	func_1700(var_256_object); // 0x68d NEW_2
	if(var_255_bool == 0) goto Label_1682; // 0x68f JumpB
	var_253_bool = 1; // 0x690 MovB
	return 0; // 0x691 Return
	
Label_1682:
	var_253_bool = 0; // 0x692 MovB
	return 0; // 0x693 Return
}


func_139(var_2_object, var_357_string)
{
	var_358_bool = 0; // 0x8c PushV
	func_1583(var_358_bool); // 0x8d NEW_2
	var_359_bool = var_358_bool == 0; // 0x8f Not
	if(var_359_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_360_bool = var_357_string == var_2_object; // 0x92 Eq
	if(var_360_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_361_string = ""; var_362_bool = 0; // 0x95 PushV
	var_361_string = var_357_string; // 0x96 Mov
	var_363_string = ""; // 0x97 PushS
	var_364_bool = var_357_string == var_363_string; // 0x98 Eq
	if(var_364_bool == 0) goto Label_156; // 0x99 JumpB
	var_362_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_1377(var_361_string, var_362_bool); // 0x9d NEW_2
	var_2_object = var_357_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_362_bool = 1; // 0x9c MovB
}


func_1420(var_79_cvector, var_80_cvector)
{
	var_82_float = 0; var_83_float = 0; // 0x58c PushV
	var_84_int = var_80_cvector | var_80_cvector; // 0x58d Or
	var_83_float = sqrt(var_84_int); // 0x58e Sqrt2
	var_85_float = 0.0; // 0x58f PushF
	var_86_bool = var_83_float < var_85_float; // 0x590 LT
	if(var_86_bool == 0) goto Label_1428; // 0x591 JumpB
	var_79_cvector = CVector(0.0, 0.0, 0.0); // 0x592 MovV
	return 2; // 0x593 Return
	
Label_1428:
	var_79_cvector = var_80_cvector / var_80_cvector; // 0x594 Div2
	return 2; // 0x595 Return
}


func_1932(var_232_bool)
{
	var_233_int = 0; // 0x78c PushV
	func_1839(var_233_int); // 0x78d NEW_2
	var_244_int = 0; // 0x78f PushI
	var_232_bool = var_233_int == var_244_int; // 0x790 Eq2
	return 0; // 0x791 Return
}


func_1938(var_277_bool)
{
	var_278_int = 0; // 0x792 PushV
	func_1881(var_278_int); // 0x793 NEW_2
	var_289_int = 1; // 0x795 PushI
	var_277_bool = var_278_int == var_289_int; // 0x796 Eq2
	return 0; // 0x797 Return
}


func_1684(var_273_bool, var_274_object)
{
	var_275_bool = 0; var_276_object = Obj(); // 0x695 PushV
	var_276_object = var_274_object; // 0x696 Mov
	func_1706(var_276_object); // 0x697 NEW_2
	if(var_275_bool == 0) goto Label_1692; // 0x699 JumpB
	var_273_bool = 1; // 0x69a MovB
	return 0; // 0x69b Return
	
Label_1692:
	var_273_bool = 0; // 0x69c MovB
	return 0; // 0x69d Return
}


func_405(var_2_object, var_210_string)
{
	var_211_bool = 0; // 0x196 PushV
	func_1583(var_211_bool); // 0x197 NEW_2
	var_212_bool = var_211_bool == 0; // 0x199 Not
	if(var_212_bool == 0) goto Label_412; // 0x19a JumpB
	return 0; // 0x19b Return
	
Label_412:
	var_213_bool = var_210_string == var_2_object; // 0x19c Eq
	if(var_213_bool == 0) goto Label_415; // 0x19d JumpB
	return 0; // 0x19e Return
	
Label_415:
	var_214_string = ""; var_215_bool = 0; // 0x19f PushV
	var_214_string = var_210_string; // 0x1a0 Mov
	var_216_string = ""; // 0x1a1 PushS
	var_217_bool = var_210_string == var_216_string; // 0x1a2 Eq
	if(var_217_bool == 0) goto Label_422; // 0x1a3 JumpB
	var_215_bool = 0; // 0x1a4 MovB
	goto Label_423; // 0x1a5 Jump
	
Label_423:
	func_1377(var_214_string, var_215_bool); // 0x1a7 NEW_2
	var_2_object = var_210_string; // 0x1a9 TMov
	return 0; // 0x1aa Return
	
Label_422:
	var_215_bool = 1; // 0x1a6 MovB
}


func_1430(var_91_float, var_92_float, var_93_float, var_94_float)
{
	var_95_bool = var_92_float < var_93_float; // 0x597 LT
	if(var_95_bool == 0) goto Label_1435; // 0x598 JumpB
	var_91_float = var_93_float; // 0x599 Mov
	return 0; // 0x59a Return
	
Label_1435:
	var_96_bool = var_92_float > var_94_float; // 0x59b GT
	if(var_96_bool == 0) goto Label_1439; // 0x59c JumpB
	var_91_float = var_94_float; // 0x59d Mov
	return 0; // 0x59e Return
	
Label_1439:
	var_91_float = var_92_float; // 0x59f Mov
	return 0; // 0x5a0 Return
}


func_1944()
{
	var_178_int = 0; // 0x798 PushV
	var_178_int = 3; // 0x799 MovI
	func_1892(var_178_int); // 0x79a NEW_2
	return 0; // 0x79c Return
}


func_925()
{
	func_1065(); // 0x39e NEW_2
	func_883(); // 0x3a1 NEW_2
	lshStopSpeech(); // 0x3a3 Func
	lshStopAnimation(); // 0x3a5 Func
	StopAsync(); // 0x3a7 Func
	Hold(); // 0x3a9 Func
	return 0; // 0x3ab Return
}


func_1694(var_230_bool)
{
	var_232_bool = 0; // 0x69f PushV
	func_1932(var_232_bool); // 0x6a0 NEW_2
	var_230_bool = var_232_bool; // 0x6a1 Mov
	return 0; // 0x6a3 Return
}


func_1949(var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x79d PushV
	var_33_string = "day"; // 0x79e PushS
	GetProperty(var_33_string, var_32_int); // 0x79f Func
	var_34_int = 0; // 0x7a1 PushV
	func_1542(var_34_int); // 0x7a2 NEW_2
	var_40_bool = var_32_int == var_34_int; // 0x7a4 Eq
	if(var_40_bool == 0) goto Label_1965; // 0x7a5 JumpB
	var_41_int = 0; var_42_object = Obj(); // 0x7a6 PushV
	var_42_object = var_30_object; // 0x7a7 Mov
	TaskCall(2); // 0x7a8 TaskCall
	func_226(var_43_object, var_41_int, var_42_object); // 0x7a9 NEW_2
	TaskReturn(); // 0x7aa TaskReturn
	goto Label_1971; // 0x7ac Jump
	
Label_1971:
	return 2; // 0x7b3 Return
	
Label_1965:
	var_326_int = 0; var_327_object = Obj(); // 0x7ad PushV
	var_327_object = var_30_object; // 0x7ae Mov
	TaskCall(0); // 0x7af TaskCall
	func_0(var_328_object, var_326_int, var_327_object); // 0x7b0 NEW_2
	TaskReturn(); // 0x7b1 TaskReturn
}


func_1441(var_165_int, var_166_int)
{
	var_167_object = Obj(); var_168_object = Obj(); // 0x5a1 PushV
	CreateIntVector(var_168_object); // 0x5a2 Func
	add(var_165_int); // 0x5a4 ObjFunc
	add(var_166_int); // 0x5a6 ObjFunc
	var_169_int = 3; // 0x5a8 PushI
	SendWorldWndMessage(var_169_int, var_168_object); // 0x5a9 Func
	return 2; // 0x5ab Return
}


func_1700(var_255_bool)
{
	var_257_bool = 0; // 0x6a5 PushV
	func_1910(var_257_bool); // 0x6a6 NEW_2
	var_255_bool = var_257_bool; // 0x6a7 Mov
	return 0; // 0x6a9 Return
}


func_1706(var_275_bool)
{
	var_277_bool = 0; // 0x6ab PushV
	func_1938(var_277_bool); // 0x6ac NEW_2
	var_275_bool = var_277_bool; // 0x6ad Mov
	return 0; // 0x6af Return
}


func_940()
{
	StopGroup0(); // 0x3ac Func
	func_883(); // 0x3af NEW_2
	var_13_string = ""; // 0x3b1 PushV
	var_13_string = "Neutral"; // 0x3b2 MovS
	func_1361(var_13_string); // 0x3b3 NEW_2
	func_874(); // 0x3b6 NEW_2
	return 0; // 0x3b8 Return
}


func_1453(var_155_object, var_156_int)
{
	var_157_int = 0; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_int = 0; var_162_bool = 0; // 0x5ad PushV
	GetItemID(var_160_int); // 0x5ae ObjFunc
	var_163_string = "Category"; // 0x5b0 PushS
	GetInvItemProperty(var_161_int, var_160_int, var_163_string); // 0x5b1 Func
	AddItem(var_162_bool, var_155_object, var_161_int, var_156_int); // 0x5b3 ObjFunc
	var_164_bool = var_162_bool == 0; // 0x5b5 Not
	if(var_164_bool == 0) goto Label_1466; // 0x5b6 JumpB
	DropItems(var_155_object, var_156_int); // 0x5b7 ObjFunc
	goto Label_1471; // 0x5b9 Jump
	
Label_1471:
	return 6; // 0x5bf Return
	
Label_1466:
	var_165_int = 0; var_166_int = 0; // 0x5ba PushV
	var_165_int = var_160_int; // 0x5bb Mov
	var_166_int = var_156_int; // 0x5bc Mov
	func_1441(var_165_int, var_166_int); // 0x5bd NEW_2
}


func_1712()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x6b0 PushV
	var_22_int = 753; // 0x6b1 PushI
	var_23_int = 2; // 0x6b2 PushI
	var_24_int = 539738; // 0x6b3 PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x6b4 Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x6b6 PushV
	var_26_object = var_21_object; // 0x6b7 Mov
	var_27_int = 751; // 0x6b8 MovI
	func_1764(var_25_bool, var_26_object, var_27_int); // 0x6b9 NEW_2
	return 2; // 0x6bb Return
}


func_1205()
{
	var_319_bool = 0; var_320_bool = 0; // 0x4b5 PushV
	var_321_bool = 1; // 0x4b6 PushB
	CameraSwitchToNormal(var_321_bool); // 0x4b7 Func
	var_322_bool = 0; // 0x4b9 PushV
	func_1583(var_322_bool); // 0x4ba NEW_2
	if(var_322_bool == 0) goto Label_1214; // 0x4bc JumpB
	goto Label_1222; // 0x4bd Jump
	
Label_1222:
	return 2; // 0x4c6 Return
	
Label_1214:
	var_323_string = "head"; // 0x4be PushS
	HasAnimationTrack(var_320_bool, var_323_string); // 0x4bf Func
	var_324_bool = var_320_bool; // 0x4c1 Push
	if(var_324_bool == 0) goto Label_1222; // 0x4c2 JumpB
	var_325_string = "head"; // 0x4c3 PushS
	UnlookAsync(var_325_string); // 0x4c4 Func
}


func_1725()
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x6bd PushV
	var_106_int = 754; // 0x6be PushI
	var_107_int = 2; // 0x6bf PushI
	var_108_int = 539739; // 0x6c0 PushI
	CreateDiaryEntry(var_105_object, var_106_int, var_107_int, var_108_int); // 0x6c1 Func
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; // 0x6c3 PushV
	var_110_object = var_105_object; // 0x6c4 Mov
	var_111_int = 751; // 0x6c5 MovI
	func_1764(var_109_bool, var_110_object, var_111_int); // 0x6c6 NEW_2
	return 2; // 0x6c8 Return
}


func_1472(var_149_object, var_150_string, var_151_int)
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x5c0 PushV
	CreateInvItem(var_153_object); // 0x5c1 Func
	SetItemName(var_150_string); // 0x5c3 ObjFunc
	var_154_object = Obj(); var_155_object = Obj(); var_156_int = 0; // 0x5c5 PushV
	var_154_object = var_149_object; // 0x5c6 Mov
	var_155_object = var_153_object; // 0x5c7 Mov
	var_156_int = var_151_int; // 0x5c8 Mov
	func_1453(var_155_object, var_156_int); // 0x5c9 NEW_2
	return 2; // 0x5cb Return
}


func_1223(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0x4c7 PushV
	var_122_string = "voice_common"; // 0x4c8 PushS
	GetVariable(var_122_string, var_120_int); // 0x4c9 Func
	var_123_int = var_120_int; // 0x4cb Push
	if(var_123_int == 0) goto Label_1261; // 0x4cc JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x4cd PushV
	var_125_object = var_114_object; // 0x4ce Mov
	func_1281(var_125_object); // 0x4cf NEW_2
	var_154_bool = var_124_bool == 0; // 0x4d1 Not
	if(var_154_bool == 0) goto Label_1243; // 0x4d2 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x4d3 PushV
	var_156_object = var_114_object; // 0x4d4 Mov
	func_1318(var_156_object); // 0x4d5 NEW_2
	var_185_bool = var_155_bool == 0; // 0x4d7 Not
	if(var_185_bool == 0) goto Label_1243; // 0x4d8 JumpB
	var_113_bool = 0; // 0x4d9 MovB
	return 4; // 0x4da Return
	
Label_1243:
	var_186_int = 2; // 0x4db PushI
	irand(var_121_int, var_186_int); // 0x4dc Func
	var_187_int = var_121_int; // 0x4de Push
	if(var_187_int == 0) goto Label_1256; // 0x4df JumpB
	var_188_string = "voice_common"; // 0x4e0 PushS
	var_189_int = 1; // 0x4e1 PushI
	var_190_int = var_120_int + var_189_int; // 0x4e2 Add
	var_191_int = 3; // 0x4e3 PushI
	var_192_int = var_190_int / var_191_int; // 0x4e4 Mod
	SetVariable(var_188_string, var_192_int); // 0x4e5 Func
	goto Label_1260; // 0x4e7 Jump
	
Label_1260:
	goto Label_1279; // 0x4ec Jump
	
Label_1279:
	var_113_bool = 1; // 0x4ff MovB
	return 4; // 0x500 Return
	
Label_1256:
	var_193_string = "voice_common"; // 0x4e8 PushS
	var_194_int = 0; // 0x4e9 PushI
	SetVariable(var_193_string, var_194_int); // 0x4ea Func
	
Label_1261:
	var_195_bool = 0; var_196_object = Obj(); // 0x4ed PushV
	var_196_object = var_114_object; // 0x4ee Mov
	func_1318(var_196_object); // 0x4ef NEW_2
	var_197_bool = var_195_bool == 0; // 0x4f1 Not
	if(var_197_bool == 0) goto Label_1275; // 0x4f2 JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x4f3 PushV
	var_199_object = var_114_object; // 0x4f4 Mov
	func_1281(var_199_object); // 0x4f5 NEW_2
	var_200_bool = var_198_bool == 0; // 0x4f7 Not
	if(var_200_bool == 0) goto Label_1275; // 0x4f8 JumpB
	var_113_bool = 0; // 0x4f9 MovB
	return 4; // 0x4fa Return
	
Label_1275:
	var_201_string = "voice_common"; // 0x4fb PushS
	var_202_int = 1; // 0x4fc PushI
	SetVariable(var_201_string, var_202_int); // 0x4fd Func
}


func_1738()
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x6ca PushV
	var_119_int = 761; // 0x6cb PushI
	var_120_int = 2; // 0x6cc PushI
	var_121_int = 539746; // 0x6cd PushI
	CreateDiaryEntry(var_118_object, var_119_int, var_120_int, var_121_int); // 0x6ce Func
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; // 0x6d0 PushV
	var_123_object = var_118_object; // 0x6d1 Mov
	var_124_int = 757; // 0x6d2 MovI
	func_1764(var_122_bool, var_123_object, var_124_int); // 0x6d3 NEW_2
	return 2; // 0x6d5 Return
}


func_1485(var_62_bool, var_63_object, var_64_float)
{
	var_65_bool = var_63_object == 0; // 0x5ce Not
	if(var_65_bool == 0) goto Label_1490; // 0x5cf JumpB
	var_62_bool = 0; // 0x5d0 MovB
	return 0; // 0x5d1 Return
	
Label_1490:
	var_66_int = 0; // 0x5d2 PushI
	var_67_bool = var_64_float > var_66_int; // 0x5d3 GT
	if(var_67_bool == 0) goto Label_1497; // 0x5d4 JumpB
	var_68_int = 8; // 0x5d5 PushI
	SendWorldWndMessage(var_68_int); // 0x5d6 Func
	goto Label_1506; // 0x5d8 Jump
	
Label_1506:
	var_69_float = 0; // 0x5e2 PushV
	var_69_float = var_64_float; // 0x5e3 Mov
	func_1520(var_69_float); // 0x5e4 NEW_2
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; var_76_float = 0; var_77_float = 0; var_78_float = 0; // 0x5e6 PushV
	var_74_object = var_63_object; // 0x5e7 Mov
	var_75_string = "reputation"; // 0x5e8 MovS
	var_76_float = var_64_float; // 0x5e9 Mov
	var_77_float = 0; // 0x5ea MovI
	var_78_float = 1; // 0x5eb MovI
	func_1090(var_73_bool, var_74_object, var_75_string, var_76_float, var_77_float, var_78_float); // 0x5ec NEW_2
	var_62_bool = 1; // 0x5ee MovB
	return 0; // 0x5ef Return
	
Label_1497:
	var_97_int = 0; // 0x5d9 PushI
	var_98_bool = var_64_float < var_97_int; // 0x5da LT
	if(var_98_bool == 0) goto Label_1504; // 0x5db JumpB
	var_99_int = 9; // 0x5dc PushI
	SendWorldWndMessage(var_99_int); // 0x5dd Func
	goto Label_1506; // 0x5df Jump
	
Label_1504:
	var_62_bool = 0; // 0x5e0 MovB
	return 0; // 0x5e1 Return
}


func_1751(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x6d7 PushV
	GetDiaryRoot(var_36_object); // 0x6d8 Func
	var_37_bool = var_36_object == 0; // 0x6da Not
	if(var_37_bool == 0) goto Label_1761; // 0x6db JumpB
	var_38_string = "Can't retrieve diary root"; // 0x6dc PushS
	Trace(var_38_string); // 0x6dd Func
	var_34_object = 0; // 0x6df MovB
	return 2; // 0x6e0 Return
	
Label_1761:
	var_34_object = var_36_object; // 0x6e1 Mov
	return 2; // 0x6e2 Return
}


func_226(var_0_object, var_41_int, var_42_object)
{
	var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0; // 0xe2 PushV
	var_0_object = var_42_object; // 0xe3 TMov
	var_52_bool = 0; var_53_object = Obj(); var_54_float = 0; // 0xe4 PushV
	var_53_object = var_42_object; // 0xe5 Mov
	var_54_float = 70.0; // 0xe6 MovF
	func_1136(var_53_object, var_54_float); // 0xe7 NEW_2
	var_99_bool = var_52_bool == 0; // 0xe9 Not
	if(var_99_bool == 0) goto Label_237; // 0xea JumpB
	var_41_int = -2; // 0xeb MovI
	return 8; // 0xec Return
	
Label_237:
	CreateDialog(var_48_object); // 0xed Func
	var_100_int = 0; // 0xef PushV
	func_1577(var_100_int); // 0xf0 NEW_2
	SetNPCName(var_100_int); // 0xf2 ObjFunc
	var_101_int = 0; // 0xf4 PushV
	func_1575(var_101_int); // 0xf5 NEW_2
	SetNPCDescription(var_101_int); // 0xf7 ObjFunc
	var_102_string = ""; // 0xf9 PushV
	func_1579(var_102_string); // 0xfa NEW_2
	SetPhoto(var_102_string); // 0xfc ObjFunc
	var_103_string = ""; // 0xfe PushV
	func_1581(var_103_string); // 0xff NEW_2
	SetPhoto2(var_103_string); // 0x101 ObjFunc
	var_104_int = 0; // 0x103 PushV
	func_1792(var_104_int); // 0x104 NEW_2
	SetPlayerName(var_104_int); // 0x106 ObjFunc
	var_50_int = -1; // 0x108 MovI
	IsOverrideActive(var_49_bool); // 0x109 Func
	var_112_bool = var_49_bool; // 0x10b Push
	if(var_112_bool == 0) goto Label_271; // 0x10c JumpB
	var_41_int = -2; // 0x10d MovI
	return 8; // 0x10e Return
	
Label_271:
	DoDialog(var_48_object); // 0x10f Func
	var_113_bool = 0; var_114_object = Obj(); // 0x111 PushV
	var_115_object = Obj(); // 0x112 PushV
	func_1414(var_115_object); // 0x113 NEW_2
	var_114_object = var_115_object; // 0x114 Mov
	func_1223(var_113_bool, var_114_object); // 0x116 NEW_2
	var_203_object = Obj(); var_204_object = Obj(); // 0x118 PushV
	var_203_object = var_42_object; // 0x119 Mov
	var_204_object = var_48_object; // 0x11a Mov
	TaskCall(3); // 0x11b TaskCall
	func_307(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object); // 0x11c NEW_2
	TaskReturn(); // 0x11d TaskReturn
	IsDialogEnd(var_51_bool); // 0x11f ObjFunc
	
Label_289:
	var_317_bool = var_51_bool == 0; // 0x121 Not
	if(var_317_bool == 0) goto Label_296; // 0x122 JumpB
	sync(); // 0x123 Func
	IsDialogEnd(var_51_bool); // 0x125 ObjFunc
	goto Label_289; // 0x127 Jump
	
Label_296:
	var_318_object = Obj(); // 0x128 PushV
	var_318_object = var_42_object; // 0x129 Mov
	func_1205(); // 0x12a NEW_2
	StopDialog(var_48_object); // 0x12c Func
	GetReturnValue(var_50_int); // 0x12e ObjFunc
	var_41_int = var_50_int; // 0x130 Mov
	return 8; // 0x131 Return
}


func_994()
{
	var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0; // 0x3e2 PushV
	WaitForAnimEnd(); // 0x3e3 Func
	var_28_bool = 0; // 0x3e5 PushV
	func_1131(var_28_bool); // 0x3e6 NEW_2
	var_29_bool = var_28_bool == 0; // 0x3e8 Not
	if(var_29_bool == 0) goto Label_1003; // 0x3e9 JumpB
	return 12; // 0x3ea Return
	
Label_1003:
	var_30_int = 0; // 0x3eb PushV
	func_1558(var_30_int); // 0x3ec NEW_2
	var_22_int = var_30_int; // 0x3ed Mov
	var_23_int = 0; // 0x3ef MovI
	
Label_1008:
	var_43_bool = 0; // 0x3f0 PushV
	var_43_bool = 0; // 0x3f1 MovB
	var_44_int = 5; // 0x3f2 PushI
	var_45_bool = var_23_int < var_44_int; // 0x3f3 LT
	if(var_45_bool == 0) goto Label_1018; // 0x3f4 JumpB
	var_46_bool = 0; // 0x3f5 PushV
	func_1131(var_46_bool); // 0x3f6 NEW_2
	if(var_46_bool == 0) goto Label_1018; // 0x3f8 JumpB
	var_43_bool = 1; // 0x3f9 MovB
	
Label_1018:
	if(var_43_bool == 0) goto Label_1060; // 0x3fa JumpB
	var_47_bool = var_22_int == 0; // 0x3fb Not
	if(var_47_bool == 0) goto Label_1028; // 0x3fc JumpB
	var_48_int = 3; // 0x3fd PushI
	Sleep(var_48_int, var_24_bool); // 0x3fe Func
	var_49_bool = var_24_bool == 0; // 0x400 Not
	if(var_49_bool == 0) goto Label_1027; // 0x401 JumpB
	goto Label_1060; // 0x402 Jump
	
Label_1060:
	ResetAAS(); // 0x424 Func
	return 12; // 0x426 Return
	
Label_1027:
	goto Label_1049; // 0x403 Jump
	
Label_1049:
	var_50_bool = 0; // 0x419 PushV
	func_1063(var_50_bool); // 0x41a NEW_2
	var_51_bool = var_50_bool == 0; // 0x41c Not
	if(var_51_bool == 0) goto Label_1055; // 0x41d JumpB
	goto Label_1060; // 0x41e Jump
	
Label_1055:
	ResetAAS(); // 0x41f Func
	var_52_int = 1; // 0x421 PushI
	var_23_int = var_23_int + var_52_int; // 0x422 Add2
	goto Label_1008; // 0x423 Jump
	
Label_1028:
	irand(var_25_int, var_22_int); // 0x404 Func
	var_53_int = 5; // 0x406 PushI
	irand(var_26_int, var_53_int); // 0x407 Func
	var_54_int = 0; // 0x409 PushI
	var_55_bool = var_26_int != var_54_int; // 0x40a Neq
	if(var_55_bool == 0) goto Label_1037; // 0x40b JumpB
	var_25_int = 0; // 0x40c MovI
	
Label_1037:
	var_56_string = "all"; // 0x40d PushS
	var_57_string = ""; var_58_int = 0; // 0x40e PushV
	var_58_int = var_25_int; // 0x40f Mov
	func_1551(var_57_string, var_58_int); // 0x410 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x412 Func
	WaitForAnimEnd(var_27_bool); // 0x414 Func
	var_59_bool = var_27_bool == 0; // 0x416 Not
	if(var_59_bool == 0) goto Label_1049; // 0x417 JumpB
	goto Label_1060; // 0x418 Jump
}


func_1764(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x6e4 PushV
	var_34_object = Obj(); // 0x6e5 PushV
	func_1751(var_34_object); // 0x6e6 NEW_2
	var_31_object = var_34_object; // 0x6e7 Mov
	Find(var_27_int, var_32_object); // 0x6e9 ObjFunc
	var_39_bool = var_32_object == 0; // 0x6eb Not
	if(var_39_bool == 0) goto Label_1779; // 0x6ec JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x6ed PushS
	var_41_int = var_40_string + var_27_int; // 0x6ee Add
	Trace(var_41_int); // 0x6ef Func
	var_25_bool = 0; // 0x6f1 MovB
	return 6; // 0x6f2 Return
	
Label_1779:
	AddChild(var_26_object); // 0x6f3 ObjFunc
	var_42_int = 7; // 0x6f5 PushI
	SendWorldWndMessage(var_42_int); // 0x6f6 Func
	GetCategory(var_33_int); // 0x6f8 ObjFunc
	SetDiarySection(var_33_int); // 0x6fa Func
	var_25_bool = 0; // 0x6fc MovB
	return 6; // 0x6fd Return
}


func_1520(var_69_float)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x5f0 PushV
	CreateFloatVector(var_71_object); // 0x5f1 Func
	add(var_69_float); // 0x5f3 ObjFunc
	var_72_int = 16; // 0x5f5 PushI
	SendWorldWndMessage(var_72_int, var_71_object); // 0x5f6 Func
	return 2; // 0x5f8 Return
}


func_1530(var_54_bool, var_55_string, var_56_string)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x5fa PushV
	FindActor(var_58_object, var_55_string); // 0x5fb Func
	var_59_bool = var_58_object == 0; // 0x5fd NullEq
	if(var_59_bool == 0) goto Label_1537; // 0x5fe JumpB
	var_54_bool = 0; // 0x5ff MovB
	return 2; // 0x600 Return
	
Label_1537:
	Trigger(var_58_object, var_56_string); // 0x601 Func
	var_54_bool = 1; // 0x603 MovB
	return 2; // 0x604 Return
}


