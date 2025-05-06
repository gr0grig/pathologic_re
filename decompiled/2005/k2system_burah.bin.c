task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_bool)
{
	var_14_int = 1; // 0xa2 PushI
	if(var_14_int == 0) goto Label_225; // 0xa3 JumpB
	func_1405(); // 0xa5 NEW_2
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
	func_1581(var_52_bool); // 0xd7 NEW_2
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
	func_1405(); // 0x1af NEW_2
	var_16_int = 41701; // 0x1b1 PushI
	var_17_bool = var_13_bool == var_16_int; // 0x1b2 Eq
	if(var_17_bool == 0) goto Label_451; // 0x1b3 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0x1b4 PushV
	var_18_object = var_1_object; // 0x1b5 MovT
	var_19_object = var_0_object; // 0x1b6 MovT
	func_1625(); // 0x1b7 NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0x1b9 PushV
	var_52_object = var_1_object; // 0x1ba MovT
	var_53_object = var_0_object; // 0x1bb MovT
	func_1645(); // 0x1bc NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0x1be PushV
	var_60_object = var_1_object; // 0x1bf MovT
	var_61_object = var_0_object; // 0x1c0 MovT
	func_1583(var_61_object); // 0x1c1 NEW_2
	
Label_451:
	var_100_int = 41704; // 0x1c3 PushI
	var_101_bool = var_13_bool == var_100_int; // 0x1c4 Eq
	if(var_101_bool == 0) goto Label_459; // 0x1c5 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x1c6 PushV
	var_102_object = var_1_object; // 0x1c7 MovT
	var_103_object = var_0_object; // 0x1c8 MovT
	func_1630(); // 0x1c9 NEW_2
	
Label_459:
	var_113_int = 41707; // 0x1cb PushI
	var_114_bool = var_13_bool == var_113_int; // 0x1cc Eq
	if(var_114_bool == 0) goto Label_492; // 0x1cd JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x1ce PushV
	var_115_object = var_1_object; // 0x1cf MovT
	var_116_object = var_0_object; // 0x1d0 MovT
	func_1635(); // 0x1d1 NEW_2
	var_134_object = Obj(); var_135_object = Obj(); // 0x1d3 PushV
	var_134_object = var_1_object; // 0x1d4 MovT
	var_135_object = var_0_object; // 0x1d5 MovT
	func_1645(); // 0x1d6 NEW_2
	var_136_object = Obj(); var_137_object = Obj(); // 0x1d8 PushV
	var_136_object = var_1_object; // 0x1d9 MovT
	var_137_object = var_0_object; // 0x1da MovT
	func_1650(); // 0x1db NEW_2
	var_141_object = Obj(); var_142_object = Obj(); // 0x1dd PushV
	var_141_object = var_1_object; // 0x1de MovT
	var_142_object = var_0_object; // 0x1df MovT
	func_1590(var_142_object); // 0x1e0 NEW_2
	var_146_object = Obj(); var_147_object = Obj(); // 0x1e2 PushV
	var_146_object = var_1_object; // 0x1e3 MovT
	var_147_object = var_0_object; // 0x1e4 MovT
	func_1597(var_147_object); // 0x1e5 NEW_2
	var_170_object = Obj(); var_171_object = Obj(); // 0x1e7 PushV
	var_170_object = var_1_object; // 0x1e8 MovT
	var_171_object = var_0_object; // 0x1e9 MovT
	func_1608(); // 0x1ea NEW_2
	
Label_492:
	var_174_int = 41710; // 0x1ec PushI
	var_175_bool = var_13_bool == var_174_int; // 0x1ed Eq
	if(var_175_bool == 0) goto Label_515; // 0x1ee JumpB
	var_176_object = Obj(); var_177_object = Obj(); // 0x1ef PushV
	var_176_object = var_1_object; // 0x1f0 MovT
	var_177_object = var_0_object; // 0x1f1 MovT
	func_1640(); // 0x1f2 NEW_2
	var_187_object = Obj(); var_188_object = Obj(); // 0x1f4 PushV
	var_187_object = var_1_object; // 0x1f5 MovT
	var_188_object = var_0_object; // 0x1f6 MovT
	func_1614(var_188_object); // 0x1f7 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x1f9 PushV
	var_193_object = var_1_object; // 0x1fa MovT
	var_194_object = var_0_object; // 0x1fb MovT
	func_1608(); // 0x1fc NEW_2
	var_195_object = Obj(); var_196_object = Obj(); // 0x1fe PushV
	var_195_object = var_1_object; // 0x1ff MovT
	var_196_object = var_0_object; // 0x200 MovT
	func_1655(var_196_object); // 0x201 NEW_2
	
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
	func_1662(var_220_bool, var_221_object); // 0x211 NEW_2
	if(var_220_bool == 0) goto Label_537; // 0x213 JumpB
	var_234_int = 539064; // 0x214 PushI
	var_235_int = 41700; // 0x215 PushI
	var_236_int = 41012; // 0x216 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x217 TObjFunc
	
Label_537:
	var_237_bool = 0; var_238_object = Obj(); // 0x219 PushV
	var_238_object = var_1_object; // 0x21a MovT
	func_1662(var_237_bool, var_238_object); // 0x21b NEW_2
	if(var_237_bool == 0) goto Label_547; // 0x21d JumpB
	var_239_int = 539750; // 0x21e PushI
	var_240_int = 41703; // 0x21f PushI
	var_241_int = 41702; // 0x220 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x221 TObjFunc
	
Label_547:
	var_242_bool = 0; var_243_object = Obj(); // 0x223 PushV
	var_243_object = var_1_object; // 0x224 MovT
	func_1672(var_242_bool, var_243_object); // 0x225 NEW_2
	if(var_242_bool == 0) goto Label_557; // 0x227 JumpB
	var_256_int = 539753; // 0x228 PushI
	var_257_int = 41706; // 0x229 PushI
	var_258_int = 41705; // 0x22a PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x22b TObjFunc
	
Label_557:
	var_259_bool = 0; var_260_object = Obj(); // 0x22d PushV
	var_260_object = var_1_object; // 0x22e MovT
	func_1682(var_259_bool, var_260_object); // 0x22f NEW_2
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
	func_1581(var_357_bool); // 0x2fa NEW_2
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
	func_1412(var_18_object); // 0x317 NEW_2
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
	func_1412(var_13_object); // 0x324 NEW_2
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
	func_1412(var_58_object); // 0x390 NEW_2
	var_57_object = var_58_object; // 0x391 Mov
	func_1279(var_57_object); // 0x393 NEW_2
	
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
	func_1359(var_19_string); // 0x3c2 NEW_2
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
	func_1947(var_30_object); // 0x3d5 NEW_2
	var_380_string = ""; // 0x3d7 PushV
	var_380_string = "Neutral"; // 0x3d8 MovS
	func_1359(var_380_string); // 0x3d9 NEW_2
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


func_0(var_0_object, var_324_int, var_325_object)
{
	var_327_object = Obj(); var_328_bool = 0; var_329_int = 0; var_330_bool = 0; var_331_object = Obj(); var_332_bool = 0; var_333_int = 0; var_334_bool = 0; // 0x0 PushV
	var_0_object = var_325_object; // 0x1 TMov
	var_335_bool = 0; var_336_object = Obj(); var_337_float = 0; // 0x2 PushV
	var_336_object = var_325_object; // 0x3 Mov
	var_337_float = 70.0; // 0x4 MovF
	func_1136(var_336_object, var_337_float); // 0x5 NEW_2
	var_338_bool = var_335_bool == 0; // 0x7 Not
	if(var_338_bool == 0) goto Label_11; // 0x8 JumpB
	var_324_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_331_object); // 0xb Func
	var_339_int = 0; // 0xd PushV
	func_1575(var_339_int); // 0xe NEW_2
	SetNPCName(var_339_int); // 0x10 ObjFunc
	var_340_int = 0; // 0x12 PushV
	func_1573(var_340_int); // 0x13 NEW_2
	SetNPCDescription(var_340_int); // 0x15 ObjFunc
	var_341_string = ""; // 0x17 PushV
	func_1577(var_341_string); // 0x18 NEW_2
	SetPhoto(var_341_string); // 0x1a ObjFunc
	var_342_string = ""; // 0x1c PushV
	func_1579(var_342_string); // 0x1d NEW_2
	SetPhoto2(var_342_string); // 0x1f ObjFunc
	var_343_int = 0; // 0x21 PushV
	func_1790(var_343_int); // 0x22 NEW_2
	SetPlayerName(var_343_int); // 0x24 ObjFunc
	var_333_int = -1; // 0x26 MovI
	IsOverrideActive(var_332_bool); // 0x27 Func
	var_344_bool = var_332_bool; // 0x29 Push
	if(var_344_bool == 0) goto Label_45; // 0x2a JumpB
	var_324_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_331_object); // 0x2d Func
	var_345_bool = 0; var_346_object = Obj(); // 0x2f PushV
	var_347_object = Obj(); // 0x30 PushV
	func_1412(var_347_object); // 0x31 NEW_2
	var_346_object = var_347_object; // 0x32 Mov
	func_1221(var_345_bool, var_346_object); // 0x34 NEW_2
	var_348_object = Obj(); var_349_object = Obj(); // 0x36 PushV
	var_348_object = var_325_object; // 0x37 Mov
	var_349_object = var_331_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_350_object, var_351_object, var_352_string, var_353_bool, var_348_object, var_349_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_334_bool); // 0x3d ObjFunc
	
Label_63:
	var_378_bool = var_334_bool == 0; // 0x3f Not
	if(var_378_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_334_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_379_object = Obj(); // 0x46 PushV
	var_379_object = var_325_object; // 0x47 Mov
	func_1204(); // 0x48 NEW_2
	StopDialog(var_331_object); // 0x4a Func
	GetReturnValue(var_333_int); // 0x4c ObjFunc
	var_324_int = var_333_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1540(var_34_int)
{
	var_35_float = 0; var_36_float = 0; // 0x604 PushV
	GetGameTime(var_36_float); // 0x605 Func
	var_37_int = 1; // 0x607 PushI
	var_38_int = 0; // 0x608 PushV
	var_39_int = 24; // 0x609 PushI
	var_38_int = var_36_float / var_36_float; // 0x60a Div2
	var_34_int = var_37_int + var_38_int; // 0x60b Add2
	return 2; // 0x60c Return
}


func_777()
{
	func_818(var_11_bool); // 0x30a NEW_2
	return 0; // 0x30c Return
}


func_1549(var_36_string, var_37_int)
{
	var_38_string = ""; var_39_string = ""; // 0x60d PushV
	var_39_string = "idle"; // 0x60e MovS
	var_40_int = var_37_int; // 0x60f Push
	if(var_40_int == 0) goto Label_1554; // 0x610 JumpB
	var_39_string = var_39_string + var_37_int; // 0x611 Add2
	
Label_1554:
	var_36_string = var_39_string; // 0x612 Mov
	return 2; // 0x613 Return
}


func_1807()
{
	var_138_bool = 0; var_139_string = ""; var_140_string = ""; // 0x70f PushV
	var_139_string = "klara2_npc_positioner"; // 0x710 MovS
	var_140_string = "remove_danko"; // 0x711 MovS
	func_1528(var_138_bool, var_139_string, var_140_string); // 0x712 NEW_2
	return 0; // 0x714 Return
}


func_1556(var_30_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x614 PushV
	var_33_int = 0; // 0x615 MovI
	
Label_1558:
	var_35_string = "all"; // 0x616 PushS
	var_36_string = ""; var_37_int = 0; // 0x617 PushV
	var_37_int = var_33_int; // 0x618 Mov
	func_1549(var_36_string, var_37_int); // 0x619 NEW_2
	HasAnimation(var_34_bool, var_35_string, var_36_string); // 0x61b Func
	var_41_bool = var_34_bool == 0; // 0x61d Not
	if(var_41_bool == 0) goto Label_1568; // 0x61e JumpB
	goto Label_1571; // 0x61f Jump
	
Label_1571:
	var_30_int = var_33_int; // 0x623 Mov
	return 4; // 0x624 Return
	
Label_1568:
	var_42_int = 1; // 0x620 PushI
	var_33_int = var_33_int + var_42_int; // 0x621 Add2
	goto Label_1558; // 0x622 Jump
}


func_1813()
{
	var_54_bool = 0; var_55_string = ""; var_56_string = ""; // 0x715 PushV
	var_55_string = "klara2_npc_positioner"; // 0x716 MovS
	var_56_string = "remove_burah"; // 0x717 MovS
	func_1528(var_54_bool, var_55_string, var_56_string); // 0x718 NEW_2
	return 0; // 0x71a Return
}


func_1819(var_282_int)
{
	var_283_int = 0; var_284_int = 0; // 0x71b PushV
	var_285_string = "k2system_klara_day"; // 0x71c PushS
	GetVariable(var_285_string, var_284_int); // 0x71d Func
	var_282_int = var_284_int; // 0x71f Mov
	return 2; // 0x720 Return
}


func_1825(var_237_int)
{
	var_238_int = 0; var_239_int = 0; // 0x721 PushV
	var_240_string = "k2system_burah_day"; // 0x722 PushS
	GetVariable(var_240_string, var_239_int); // 0x723 Func
	var_237_int = var_239_int; // 0x725 Mov
	return 2; // 0x726 Return
}


func_1316(var_154_bool)
{
	var_156_string = ""; var_157_int = 0; var_158_bool = 0; var_159_int = 0; var_160_string = ""; var_161_string = ""; var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_string = ""; // 0x524 PushV
	var_166_string = "d"; // 0x525 PushS
	var_167_int = 0; // 0x526 PushV
	func_1540(var_167_int); // 0x527 NEW_2
	var_168_int = var_166_string + var_167_int; // 0x529 Add
	var_169_string = "m"; // 0x52a PushS
	var_161_string = var_168_int + var_169_string; // 0x52b Add2
	var_162_int = 0; // 0x52c MovI
	
Label_1325:
	var_170_int = 1; // 0x52d PushI
	if(var_170_int == 0) goto Label_1338; // 0x52e JumpB
	var_171_int = 1; // 0x52f PushI
	var_172_int = var_162_int + var_171_int; // 0x530 Add
	var_173_int = var_161_string + var_172_int; // 0x531 Add
	HasProperty(var_173_int, var_163_bool); // 0x532 ObjFunc
	var_174_bool = var_163_bool == 0; // 0x534 Not
	if(var_174_bool == 0) goto Label_1335; // 0x535 JumpB
	goto Label_1338; // 0x536 Jump
	
Label_1338:
	var_175_bool = var_162_int == 0; // 0x53a Not
	if(var_175_bool == 0) goto Label_1342; // 0x53b JumpB
	var_154_bool = 0; // 0x53c MovB
	return 10; // 0x53d Return
	
Label_1342:
	var_164_int = 0; // 0x53e MovI
	var_176_int = 1; // 0x53f PushI
	var_177_bool = var_162_int > var_176_int; // 0x540 GT
	if(var_177_bool == 0) goto Label_1348; // 0x541 JumpB
	irand(var_164_int, var_162_int); // 0x542 Func
	
Label_1348:
	var_178_int = 1; // 0x544 PushI
	var_179_int = var_164_int + var_178_int; // 0x545 Add
	var_180_int = var_161_string + var_179_int; // 0x546 Add
	GetProperty(var_180_int, var_165_string); // 0x547 ObjFunc
	var_181_bool = 0; var_182_string = ""; // 0x549 PushV
	var_182_string = var_165_string; // 0x54a Mov
	func_1390(var_181_bool, var_182_string); // 0x54b NEW_2
	var_154_bool = var_181_bool; // 0x54c Mov
	return 10; // 0x54e Return
	
Label_1335:
	var_183_int = 1; // 0x537 PushI
	var_162_int = var_162_int + var_183_int; // 0x538 Add2
	goto Label_1325; // 0x539 Jump
}


func_1573(var_100_int)
{
	var_100_int = 515592; // 0x625 MovI
	return 0; // 0x626 Return
}


func_1575(var_99_int)
{
	var_99_int = 511961; // 0x627 MovI
	return 0; // 0x628 Return
}


func_1063(var_50_bool)
{
	var_50_bool = 1; // 0x427 MovB
	return 0; // 0x428 Return
}


func_1577(var_101_string)
{
	var_101_string = "ui/NPC_Burah.png"; // 0x629 MovS
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
	var_102_string = "ui/NPC_Burah_b.png"; // 0x62b MovS
	return 0; // 0x62c Return
}


func_1831(var_262_int)
{
	var_263_int = 0; var_264_int = 0; // 0x727 PushV
	var_265_string = "k2system_danko_day"; // 0x728 PushS
	GetVariable(var_265_string, var_264_int); // 0x729 Func
	var_262_int = var_264_int; // 0x72b Mov
	return 2; // 0x72c Return
}


func_1581(var_94_bool)
{
	var_94_bool = 1; // 0x62d MovB
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


func_1583(var_60_object)
{
	var_62_bool = 0; var_63_object = Obj(); var_64_float = 0; // 0x630 PushV
	var_63_object = var_60_object; // 0x631 Mov
	var_64_float = 0.05; // 0x632 MovF
	func_1483(var_62_bool, var_63_object, var_64_float); // 0x633 NEW_2
	return 0; // 0x635 Return
}


func_1837(var_232_int)
{
	var_233_int = 0; var_234_int = 0; var_235_int = 0; var_236_int = 0; // 0x72d PushV
	var_237_int = 0; // 0x72e PushV
	func_1825(var_237_int); // 0x72f NEW_2
	var_235_int = var_237_int; // 0x730 Mov
	var_241_string = "k2system_burah_state"; // 0x732 PushS
	var_242_int = var_241_string + var_235_int; // 0x733 Add
	GetVariable(var_242_int, var_236_int); // 0x734 Func
	var_232_int = var_236_int; // 0x736 Mov
	return 4; // 0x737 Return
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


func_307(var_0_object, var_1_object, var_2_object, var_3_string, var_202_object, var_203_object)
{
	var_0_object = var_203_object; // 0x134 TMov
	var_1_object = var_202_object; // 0x135 TMov
	var_3_string = 0; // 0x136 TMovB
	var_208_int = 1; // 0x137 PushI
	if(var_208_int == 0) goto Label_375; // 0x138 JumpB
	var_209_string = ""; // 0x139 PushV
	var_209_string = "Neutral"; // 0x13a MovS
	func_405(var_203_object, var_209_string); // 0x13b NEW_2
	var_226_int = 539063; // 0x13d PushI
	SetMessage(var_226_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_227_bool = 0; var_228_object = Obj(); // 0x142 PushV
	var_228_object = var_1_object; // 0x143 MovT
	func_1662(var_227_bool, var_228_object); // 0x144 NEW_2
	if(var_227_bool == 0) goto Label_332; // 0x146 JumpB
	var_244_int = 539064; // 0x147 PushI
	var_245_int = 41700; // 0x148 PushI
	var_246_int = 41012; // 0x149 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x14a TObjFunc
	
Label_332:
	var_247_bool = 0; var_248_object = Obj(); // 0x14c PushV
	var_248_object = var_1_object; // 0x14d MovT
	func_1662(var_247_bool, var_248_object); // 0x14e NEW_2
	if(var_247_bool == 0) goto Label_342; // 0x150 JumpB
	var_249_int = 539750; // 0x151 PushI
	var_250_int = 41703; // 0x152 PushI
	var_251_int = 41702; // 0x153 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x154 TObjFunc
	
Label_342:
	var_252_bool = 0; var_253_object = Obj(); // 0x156 PushV
	var_253_object = var_1_object; // 0x157 MovT
	func_1672(var_252_bool, var_253_object); // 0x158 NEW_2
	if(var_252_bool == 0) goto Label_352; // 0x15a JumpB
	var_269_int = 539753; // 0x15b PushI
	var_270_int = 41706; // 0x15c PushI
	var_271_int = 41705; // 0x15d PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x15e TObjFunc
	
Label_352:
	var_272_bool = 0; var_273_object = Obj(); // 0x160 PushV
	var_273_object = var_1_object; // 0x161 MovT
	func_1682(var_272_bool, var_273_object); // 0x162 NEW_2
	if(var_272_bool == 0) goto Label_362; // 0x164 JumpB
	var_289_int = 539756; // 0x165 PushI
	var_290_int = 41709; // 0x166 PushI
	var_291_int = 41708; // 0x167 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x168 TObjFunc
	
Label_362:
	var_292_int = 539759; // 0x16a PushI
	var_293_int = -1; // 0x16b PushI
	var_294_int = 41711; // 0x16c PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x16d TObjFunc
	var_295_int = 541075; // 0x16f PushI
	var_296_int = -1; // 0x170 PushI
	var_297_int = 43180; // 0x171 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x172 TObjFunc
	goto Label_375; // 0x174 Jump
	
Label_375:
	var_298_bool = 0; // 0x177 PushV
	func_1581(var_298_bool); // 0x178 NEW_2
	if(var_298_bool == 0) goto Label_390; // 0x17a JumpB
	
Label_379:
	lshWaitForAnimEnd(); // 0x17b Func
	var_299_string = var_3_string; // 0x17d PushT
	if(var_299_string == 0) goto Label_384; // 0x17e JumpB
	goto Label_389; // 0x17f Jump
	
Label_389:
	goto Label_404; // 0x185 Jump
	
Label_404:
	return 0; // 0x194 Return
	
Label_384:
	var_300_string = ""; // 0x180 PushV
	var_300_string = var_2_object; // 0x181 MovT
	func_1359(var_300_string); // 0x182 NEW_2
	goto Label_379; // 0x184 Jump
	
Label_390:
	var_311_string = "all"; // 0x186 PushS
	var_312_string = "idle"; // 0x187 PushS
	PlayAnimation(var_311_string, var_312_string); // 0x188 Func
	
Label_394:
	WaitForAnimEnd(); // 0x18a Func
	var_313_string = var_3_string; // 0x18c PushT
	if(var_313_string == 0) goto Label_399; // 0x18d JumpB
	goto Label_404; // 0x18e Jump
	
Label_399:
	var_314_string = "all"; // 0x18f PushS
	var_315_string = "idle"; // 0x190 PushS
	PlayAnimation(var_314_string, var_315_string); // 0x191 Func
	goto Label_394; // 0x193 Jump
}


func_1590(var_141_object)
{
	var_143_bool = 0; var_144_object = Obj(); var_145_float = 0; // 0x637 PushV
	var_144_object = var_141_object; // 0x638 Mov
	var_145_float = -0.05; // 0x639 MovF
	func_1483(var_143_bool, var_144_object, var_145_float); // 0x63a NEW_2
	return 0; // 0x63c Return
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


func_1848(var_43_int)
{
	var_44_int = 0; var_45_int = 0; // 0x738 PushV
	var_46_int = 0; // 0x739 PushV
	func_1825(var_46_int); // 0x73a NEW_2
	var_45_int = var_46_int; // 0x73b Mov
	var_50_string = "k2system_burah_state"; // 0x73d PushS
	var_51_int = var_50_string + var_45_int; // 0x73e Add
	SetVariable(var_51_int, var_43_int); // 0x73f Func
	return 2; // 0x741 Return
}


func_1597(var_146_object)
{
	var_148_string = "beta_pills 5 is given"; // 0x63e PushS
	Trace(var_148_string); // 0x63f Func
	var_149_object = Obj(); var_150_string = ""; var_151_int = 0; // 0x641 PushV
	var_149_object = var_146_object; // 0x642 Mov
	var_150_string = "beta_pills"; // 0x643 MovS
	var_151_int = 5; // 0x644 MovI
	func_1470(var_149_object, var_150_string, var_151_int); // 0x645 NEW_2
	return 0; // 0x647 Return
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
	func_1428(var_91_float, var_92_float, var_93_float, var_94_float); // 0x452 NEW_2
	SetProperty(var_75_string, var_91_float); // 0x454 ObjFunc
	var_73_bool = 1; // 0x456 MovB
	return 2; // 0x457 Return
}


func_1858(var_257_int)
{
	var_258_int = 0; var_259_int = 0; var_260_int = 0; var_261_int = 0; // 0x742 PushV
	var_262_int = 0; // 0x743 PushV
	func_1831(var_262_int); // 0x744 NEW_2
	var_260_int = var_262_int; // 0x745 Mov
	var_266_string = "k2system_danko_state"; // 0x747 PushS
	var_267_int = var_266_string + var_260_int; // 0x748 Add
	GetVariable(var_267_int, var_261_int); // 0x749 Func
	var_257_int = var_261_int; // 0x74b Mov
	return 4; // 0x74c Return
}


func_1608()
{
	var_172_string = "playsound"; // 0x649 PushS
	var_173_string = "giveitem"; // 0x64a PushS
	TriggerWorld(var_172_string, var_173_string); // 0x64b Func
	return 0; // 0x64d Return
}


func_1869(var_125_int)
{
	var_126_int = 0; var_127_int = 0; // 0x74d PushV
	var_128_int = 0; // 0x74e PushV
	func_1831(var_128_int); // 0x74f NEW_2
	var_127_int = var_128_int; // 0x750 Mov
	var_132_string = "k2system_danko_state"; // 0x752 PushS
	var_133_int = var_132_string + var_127_int; // 0x753 Add
	SetVariable(var_133_int, var_125_int); // 0x754 Func
	return 2; // 0x756 Return
}


func_1614(var_187_object)
{
	var_189_string = "burah_serum is given"; // 0x64f PushS
	Trace(var_189_string); // 0x650 Func
	var_190_object = Obj(); var_191_string = ""; var_192_int = 0; // 0x652 PushV
	var_190_object = var_187_object; // 0x653 Mov
	var_191_string = "burah_serum"; // 0x654 MovS
	var_192_int = 1; // 0x655 MovI
	func_1470(var_190_object, var_191_string, var_192_int); // 0x656 NEW_2
	return 0; // 0x658 Return
}


func_1359(var_300_string)
{
	var_301_bool = 0; var_302_float = 0; var_303_float = 0; var_304_bool = 0; var_305_float = 0; var_306_float = 0; // 0x54f PushV
	lshHasAnimation(var_304_bool, var_300_string); // 0x550 Func
	var_307_bool = var_304_bool; // 0x552 Push
	if(var_307_bool == 0) goto Label_1370; // 0x553 JumpB
	lshGetAnimTimes(var_300_string, var_305_float, var_306_float); // 0x554 Func
	var_308_bool = 0; // 0x556 PushB
	lshPlayAnimation(var_305_float, var_306_float, var_308_bool); // 0x557 Func
	goto Label_1374; // 0x559 Jump
	
Label_1374:
	return 6; // 0x55e Return
	
Label_1370:
	var_309_string = "Can't find lsh animation : "; // 0x55a PushS
	var_310_int = var_309_string + var_300_string; // 0x55b Add
	Trace(var_310_int); // 0x55c Func
}


func_847(var_0_object)
{
	var_89_float = GetByIndex(var_0_object, 0); // 0x34f PushE
	var_90_float = GetByIndex(var_0_object, 2); // 0x350 PushE
	RotateAsync(var_89_float, var_90_float); // 0x351 Func
	return 0; // 0x353 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_348_object, var_349_object)
{
	var_0_object = var_349_object; // 0x52 TMov
	var_1_object = var_348_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_354_int = 1; // 0x55 PushI
	if(var_354_int == 0) goto Label_109; // 0x56 JumpB
	var_355_string = ""; // 0x57 PushV
	var_355_string = "Neutral"; // 0x58 MovS
	func_139(var_349_object, var_355_string); // 0x59 NEW_2
	var_363_int = 539060; // 0x5b PushI
	SetMessage(var_363_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_364_int = 539061; // 0x60 PushI
	var_365_int = 43176; // 0x61 PushI
	var_366_int = 41009; // 0x62 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x63 TObjFunc
	var_367_int = 541070; // 0x65 PushI
	var_368_int = -1; // 0x66 PushI
	var_369_int = 43175; // 0x67 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_370_bool = 0; // 0x6d PushV
	func_1581(var_370_bool); // 0x6e NEW_2
	if(var_370_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_371_string = var_3_string; // 0x73 PushT
	if(var_371_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_372_string = ""; // 0x76 PushV
	var_372_string = var_2_object; // 0x77 MovT
	func_1359(var_372_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_373_string = "all"; // 0x7c PushS
	var_374_string = "idle"; // 0x7d PushS
	PlayAnimation(var_373_string, var_374_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_375_string = var_3_string; // 0x82 PushT
	if(var_375_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_376_string = "all"; // 0x85 PushS
	var_377_string = "idle"; // 0x86 PushS
	PlayAnimation(var_376_string, var_377_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
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


func_1879(var_277_int)
{
	var_278_int = 0; var_279_int = 0; var_280_int = 0; var_281_int = 0; // 0x757 PushV
	var_282_int = 0; // 0x758 PushV
	func_1819(var_282_int); // 0x759 NEW_2
	var_280_int = var_282_int; // 0x75a Mov
	var_286_string = "k2system_klara_state"; // 0x75c PushS
	var_287_int = var_286_string + var_280_int; // 0x75d Add
	GetVariable(var_287_int, var_281_int); // 0x75e Func
	var_277_int = var_281_int; // 0x760 Mov
	return 4; // 0x761 Return
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


func_1625()
{
	func_1914(); // 0x65b NEW_2
	return 0; // 0x65d Return
}


func_1630()
{
	func_1922(); // 0x660 NEW_2
	return 0; // 0x662 Return
}


func_1375(var_213_string, var_214_bool)
{
	var_217_bool = 0; var_218_float = 0; var_219_float = 0; var_220_bool = 0; var_221_float = 0; var_222_float = 0; // 0x55f PushV
	lshHasAnimation(var_220_bool, var_213_string); // 0x560 Func
	var_223_bool = var_220_bool; // 0x562 Push
	if(var_223_bool == 0) goto Label_1385; // 0x563 JumpB
	lshGetAnimTimes(var_213_string, var_221_float, var_222_float); // 0x564 Func
	lshPlayAnimation(var_221_float, var_222_float, var_214_bool); // 0x566 Func
	goto Label_1389; // 0x568 Jump
	
Label_1389:
	return 6; // 0x56d Return
	
Label_1385:
	var_224_string = "Can't find lsh animation : "; // 0x569 PushS
	var_225_int = var_224_string + var_213_string; // 0x56a Add
	Trace(var_225_int); // 0x56b Func
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


func_1635()
{
	func_1900(); // 0x665 NEW_2
	return 0; // 0x667 Return
}


func_1890(var_178_int)
{
	var_179_int = 0; var_180_int = 0; // 0x762 PushV
	var_181_int = 0; // 0x763 PushV
	func_1819(var_181_int); // 0x764 NEW_2
	var_180_int = var_181_int; // 0x765 Mov
	var_185_string = "k2system_klara_state"; // 0x767 PushS
	var_186_int = var_185_string + var_180_int; // 0x768 Add
	SetVariable(var_186_int, var_178_int); // 0x769 Func
	return 2; // 0x76b Return
}


func_1640()
{
	func_1942(); // 0x66a NEW_2
	return 0; // 0x66c Return
}


func_874()
{
	var_382_float = 0; var_383_float = 0; // 0x36a PushV
	var_384_int = 8; // 0x36b PushI
	var_385_int = 16; // 0x36c PushI
	rand(var_383_float, var_384_int, var_385_int); // 0x36d Func
	var_386_int = 10; // 0x36f PushI
	SetTimer(var_386_int, var_383_float); // 0x370 Func
	return 2; // 0x372 Return
}


func_1131(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x46b PushV
	IsLoaded(var_14_bool); // 0x46c Func
	var_12_bool = var_14_bool; // 0x46e Mov
	return 2; // 0x46f Return
}


func_1900()
{
	func_1736(); // 0x76d NEW_2
	var_125_int = 0; // 0x76f PushV
	var_125_int = 3; // 0x770 MovI
	func_1869(var_125_int); // 0x771 NEW_2
	return 0; // 0x773 Return
}


func_1645()
{
	func_1813(); // 0x66f NEW_2
	return 0; // 0x671 Return
}


func_1390(var_146_bool, var_147_string)
{
	var_148_bool = 0; var_149_bool = 0; // 0x56e PushV
	var_150_bool = 0; // 0x56f PushV
	func_1581(var_150_bool); // 0x570 NEW_2
	if(var_150_bool == 0) goto Label_1403; // 0x572 JumpB
	lshHasSpeech(var_149_bool, var_147_string); // 0x573 Func
	var_151_bool = var_149_bool; // 0x575 Push
	if(var_151_bool == 0) goto Label_1403; // 0x576 JumpB
	lshPlaySpeech(var_147_string); // 0x577 Func
	var_146_bool = 1; // 0x579 MovB
	return 2; // 0x57a Return
	
Label_1403:
	var_146_bool = 0; // 0x57b MovB
	return 2; // 0x57c Return
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
	func_1418(var_79_cvector, var_80_cvector); // 0x48b NEW_2
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
	CameraTransit(var_70_cvector, var_68_cvector); // 0x49b Func
	var_92_float = GetByIndex(var_69_cvector, 0); // 0x49d PushE
	var_93_float = GetByIndex(var_69_cvector, 2); // 0x49e PushE
	Rotate(var_92_float, var_93_float); // 0x49f Func
	var_94_bool = 0; // 0x4a1 PushV
	func_1581(var_94_bool); // 0x4a2 NEW_2
	if(var_94_bool == 0) goto Label_1190; // 0x4a4 JumpB
	goto Label_1198; // 0x4a5 Jump
	
Label_1198:
	CameraWaitForPlayFinish(); // 0x4ae Func
	ResumeWorld(); // 0x4b0 Func
	var_52_bool = 1; // 0x4b2 MovB
	return 18; // 0x4b3 Return
	
Label_1190:
	var_95_string = "head"; // 0x4a6 PushS
	HasAnimationTrack(var_72_bool, var_95_string); // 0x4a7 Func
	var_96_bool = var_72_bool; // 0x4a9 Push
	if(var_96_bool == 0) goto Label_1198; // 0x4aa JumpB
	var_97_string = "head"; // 0x4ab PushS
	LookAsyncCamera(var_97_string); // 0x4ac Func
}


func_1650()
{
	func_1807(); // 0x674 NEW_2
	return 0; // 0x676 Return
}


func_883()
{
	var_381_int = 10; // 0x373 PushI
	KillTimer(var_381_int); // 0x374 Func
	return 0; // 0x376 Return
}


func_1908(var_256_bool)
{
	var_257_int = 0; // 0x774 PushV
	func_1858(var_257_int); // 0x775 NEW_2
	var_268_int = 1; // 0x777 PushI
	var_256_bool = var_257_int == var_268_int; // 0x778 Eq2
	return 0; // 0x779 Return
}


func_1655(var_195_object)
{
	var_197_bool = 0; var_198_object = Obj(); var_199_float = 0; // 0x678 PushV
	var_198_object = var_195_object; // 0x679 Mov
	var_199_float = -0.3; // 0x67a MovF
	func_1483(var_197_bool, var_198_object, var_199_float); // 0x67b NEW_2
	return 0; // 0x67d Return
}


func_1914()
{
	func_1710(); // 0x77b NEW_2
	var_43_int = 0; // 0x77d PushV
	var_43_int = 2; // 0x77e MovI
	func_1848(var_43_int); // 0x77f NEW_2
	return 0; // 0x781 Return
}


func_1405()
{
	var_15_bool = 0; // 0x57d PushV
	func_1581(var_15_bool); // 0x57e NEW_2
	if(var_15_bool == 0) goto Label_1411; // 0x580 JumpB
	lshStopSpeech(); // 0x581 Func
	
Label_1411:
	return 0; // 0x583 Return
}


func_1662(var_227_bool, var_228_object)
{
	var_229_bool = 0; var_230_object = Obj(); // 0x67f PushV
	var_230_object = var_228_object; // 0x680 Mov
	func_1692(var_230_object); // 0x681 NEW_2
	if(var_229_bool == 0) goto Label_1670; // 0x683 JumpB
	var_227_bool = 1; // 0x684 MovB
	return 0; // 0x685 Return
	
Label_1670:
	var_227_bool = 0; // 0x686 MovB
	return 0; // 0x687 Return
}


func_1922()
{
	func_1723(); // 0x783 NEW_2
	var_112_int = 0; // 0x785 PushV
	var_112_int = 1; // 0x786 MovI
	func_1848(var_112_int); // 0x787 NEW_2
	return 0; // 0x789 Return
}


func_1412(var_114_object)
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x584 PushV
	self(var_116_object); // 0x585 Func
	var_114_object = var_116_object; // 0x587 Mov
	return 2; // 0x588 Return
}


func_1672(var_252_bool, var_253_object)
{
	var_254_bool = 0; var_255_object = Obj(); // 0x689 PushV
	var_255_object = var_253_object; // 0x68a Mov
	func_1698(var_255_object); // 0x68b NEW_2
	if(var_254_bool == 0) goto Label_1680; // 0x68d JumpB
	var_252_bool = 1; // 0x68e MovB
	return 0; // 0x68f Return
	
Label_1680:
	var_252_bool = 0; // 0x690 MovB
	return 0; // 0x691 Return
}


func_1418(var_79_cvector, var_80_cvector)
{
	var_82_float = 0; var_83_float = 0; // 0x58a PushV
	var_84_int = var_80_cvector | var_80_cvector; // 0x58b Or
	var_83_float = sqrt(var_84_int); // 0x58c Sqrt2
	var_85_float = 0.0; // 0x58d PushF
	var_86_bool = var_83_float < var_85_float; // 0x58e LT
	if(var_86_bool == 0) goto Label_1426; // 0x58f JumpB
	var_79_cvector = CVector(0.0, 0.0, 0.0); // 0x590 MovV
	return 2; // 0x591 Return
	
Label_1426:
	var_79_cvector = var_80_cvector / var_80_cvector; // 0x592 Div2
	return 2; // 0x593 Return
}


func_139(var_2_object, var_355_string)
{
	var_356_bool = 0; // 0x8c PushV
	func_1581(var_356_bool); // 0x8d NEW_2
	var_357_bool = var_356_bool == 0; // 0x8f Not
	if(var_357_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_358_bool = var_355_string == var_2_object; // 0x92 Eq
	if(var_358_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_359_string = ""; var_360_bool = 0; // 0x95 PushV
	var_359_string = var_355_string; // 0x96 Mov
	var_361_string = ""; // 0x97 PushS
	var_362_bool = var_355_string == var_361_string; // 0x98 Eq
	if(var_362_bool == 0) goto Label_156; // 0x99 JumpB
	var_360_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_1375(var_359_string, var_360_bool); // 0x9d NEW_2
	var_2_object = var_355_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_360_bool = 1; // 0x9c MovB
}


func_1930(var_231_bool)
{
	var_232_int = 0; // 0x78a PushV
	func_1837(var_232_int); // 0x78b NEW_2
	var_243_int = 0; // 0x78d PushI
	var_231_bool = var_232_int == var_243_int; // 0x78e Eq2
	return 0; // 0x78f Return
}


func_1936(var_276_bool)
{
	var_277_int = 0; // 0x790 PushV
	func_1879(var_277_int); // 0x791 NEW_2
	var_288_int = 1; // 0x793 PushI
	var_276_bool = var_277_int == var_288_int; // 0x794 Eq2
	return 0; // 0x795 Return
}


func_1682(var_272_bool, var_273_object)
{
	var_274_bool = 0; var_275_object = Obj(); // 0x693 PushV
	var_275_object = var_273_object; // 0x694 Mov
	func_1704(var_275_object); // 0x695 NEW_2
	if(var_274_bool == 0) goto Label_1690; // 0x697 JumpB
	var_272_bool = 1; // 0x698 MovB
	return 0; // 0x699 Return
	
Label_1690:
	var_272_bool = 0; // 0x69a MovB
	return 0; // 0x69b Return
}


func_1428(var_91_float, var_92_float, var_93_float, var_94_float)
{
	var_95_bool = var_92_float < var_93_float; // 0x595 LT
	if(var_95_bool == 0) goto Label_1433; // 0x596 JumpB
	var_91_float = var_93_float; // 0x597 Mov
	return 0; // 0x598 Return
	
Label_1433:
	var_96_bool = var_92_float > var_94_float; // 0x599 GT
	if(var_96_bool == 0) goto Label_1437; // 0x59a JumpB
	var_91_float = var_94_float; // 0x59b Mov
	return 0; // 0x59c Return
	
Label_1437:
	var_91_float = var_92_float; // 0x59d Mov
	return 0; // 0x59e Return
}


func_405(var_2_object, var_209_string)
{
	var_210_bool = 0; // 0x196 PushV
	func_1581(var_210_bool); // 0x197 NEW_2
	var_211_bool = var_210_bool == 0; // 0x199 Not
	if(var_211_bool == 0) goto Label_412; // 0x19a JumpB
	return 0; // 0x19b Return
	
Label_412:
	var_212_bool = var_209_string == var_2_object; // 0x19c Eq
	if(var_212_bool == 0) goto Label_415; // 0x19d JumpB
	return 0; // 0x19e Return
	
Label_415:
	var_213_string = ""; var_214_bool = 0; // 0x19f PushV
	var_213_string = var_209_string; // 0x1a0 Mov
	var_215_string = ""; // 0x1a1 PushS
	var_216_bool = var_209_string == var_215_string; // 0x1a2 Eq
	if(var_216_bool == 0) goto Label_422; // 0x1a3 JumpB
	var_214_bool = 0; // 0x1a4 MovB
	goto Label_423; // 0x1a5 Jump
	
Label_423:
	func_1375(var_213_string, var_214_bool); // 0x1a7 NEW_2
	var_2_object = var_209_string; // 0x1a9 TMov
	return 0; // 0x1aa Return
	
Label_422:
	var_214_bool = 1; // 0x1a6 MovB
}


func_1942()
{
	var_178_int = 0; // 0x796 PushV
	var_178_int = 3; // 0x797 MovI
	func_1890(var_178_int); // 0x798 NEW_2
	return 0; // 0x79a Return
}


func_1947(var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x79b PushV
	var_33_string = "day"; // 0x79c PushS
	GetProperty(var_33_string, var_32_int); // 0x79d Func
	var_34_int = 0; // 0x79f PushV
	func_1540(var_34_int); // 0x7a0 NEW_2
	var_40_bool = var_32_int == var_34_int; // 0x7a2 Eq
	if(var_40_bool == 0) goto Label_1963; // 0x7a3 JumpB
	var_41_int = 0; var_42_object = Obj(); // 0x7a4 PushV
	var_42_object = var_30_object; // 0x7a5 Mov
	TaskCall(2); // 0x7a6 TaskCall
	func_226(var_43_object, var_41_int, var_42_object); // 0x7a7 NEW_2
	TaskReturn(); // 0x7a8 TaskReturn
	goto Label_1969; // 0x7aa Jump
	
Label_1969:
	return 2; // 0x7b1 Return
	
Label_1963:
	var_324_int = 0; var_325_object = Obj(); // 0x7ab PushV
	var_325_object = var_30_object; // 0x7ac Mov
	TaskCall(0); // 0x7ad TaskCall
	func_0(var_326_object, var_324_int, var_325_object); // 0x7ae NEW_2
	TaskReturn(); // 0x7af TaskReturn
}


func_1692(var_229_bool)
{
	var_231_bool = 0; // 0x69d PushV
	func_1930(var_231_bool); // 0x69e NEW_2
	var_229_bool = var_231_bool; // 0x69f Mov
	return 0; // 0x6a1 Return
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


func_1439(var_165_int, var_166_int)
{
	var_167_object = Obj(); var_168_object = Obj(); // 0x59f PushV
	CreateIntVector(var_168_object); // 0x5a0 Func
	add(var_165_int); // 0x5a2 ObjFunc
	add(var_166_int); // 0x5a4 ObjFunc
	var_169_int = 3; // 0x5a6 PushI
	SendWorldWndMessage(var_169_int, var_168_object); // 0x5a7 Func
	return 2; // 0x5a9 Return
}


func_1698(var_254_bool)
{
	var_256_bool = 0; // 0x6a3 PushV
	func_1908(var_256_bool); // 0x6a4 NEW_2
	var_254_bool = var_256_bool; // 0x6a5 Mov
	return 0; // 0x6a7 Return
}


func_1704(var_274_bool)
{
	var_276_bool = 0; // 0x6a9 PushV
	func_1936(var_276_bool); // 0x6aa NEW_2
	var_274_bool = var_276_bool; // 0x6ab Mov
	return 0; // 0x6ad Return
}


func_1451(var_155_object, var_156_int)
{
	var_157_int = 0; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_int = 0; var_162_bool = 0; // 0x5ab PushV
	GetItemID(var_160_int); // 0x5ac ObjFunc
	var_163_string = "Category"; // 0x5ae PushS
	GetInvItemProperty(var_161_int, var_160_int, var_163_string); // 0x5af Func
	AddItem(var_162_bool, var_155_object, var_161_int, var_156_int); // 0x5b1 ObjFunc
	var_164_bool = var_162_bool == 0; // 0x5b3 Not
	if(var_164_bool == 0) goto Label_1464; // 0x5b4 JumpB
	DropItems(var_155_object, var_156_int); // 0x5b5 ObjFunc
	goto Label_1469; // 0x5b7 Jump
	
Label_1469:
	return 6; // 0x5bd Return
	
Label_1464:
	var_165_int = 0; var_166_int = 0; // 0x5b8 PushV
	var_165_int = var_160_int; // 0x5b9 Mov
	var_166_int = var_156_int; // 0x5ba Mov
	func_1439(var_165_int, var_166_int); // 0x5bb NEW_2
}


func_940()
{
	StopGroup0(); // 0x3ac Func
	func_883(); // 0x3af NEW_2
	var_13_string = ""; // 0x3b1 PushV
	var_13_string = "Neutral"; // 0x3b2 MovS
	func_1359(var_13_string); // 0x3b3 NEW_2
	func_874(); // 0x3b6 NEW_2
	return 0; // 0x3b8 Return
}


func_1710()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x6ae PushV
	var_22_int = 753; // 0x6af PushI
	var_23_int = 2; // 0x6b0 PushI
	var_24_int = 539738; // 0x6b1 PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x6b2 Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x6b4 PushV
	var_26_object = var_21_object; // 0x6b5 Mov
	var_27_int = 751; // 0x6b6 MovI
	func_1762(var_25_bool, var_26_object, var_27_int); // 0x6b7 NEW_2
	return 2; // 0x6b9 Return
}


func_1204()
{
	var_318_bool = 0; var_319_bool = 0; // 0x4b4 PushV
	CameraSwitchToNormal(); // 0x4b5 Func
	var_320_bool = 0; // 0x4b7 PushV
	func_1581(var_320_bool); // 0x4b8 NEW_2
	if(var_320_bool == 0) goto Label_1212; // 0x4ba JumpB
	goto Label_1220; // 0x4bb Jump
	
Label_1220:
	return 2; // 0x4c4 Return
	
Label_1212:
	var_321_string = "head"; // 0x4bc PushS
	HasAnimationTrack(var_319_bool, var_321_string); // 0x4bd Func
	var_322_bool = var_319_bool; // 0x4bf Push
	if(var_322_bool == 0) goto Label_1220; // 0x4c0 JumpB
	var_323_string = "head"; // 0x4c1 PushS
	UnlookAsync(var_323_string); // 0x4c2 Func
}


func_1723()
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x6bb PushV
	var_106_int = 754; // 0x6bc PushI
	var_107_int = 2; // 0x6bd PushI
	var_108_int = 539739; // 0x6be PushI
	CreateDiaryEntry(var_105_object, var_106_int, var_107_int, var_108_int); // 0x6bf Func
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; // 0x6c1 PushV
	var_110_object = var_105_object; // 0x6c2 Mov
	var_111_int = 751; // 0x6c3 MovI
	func_1762(var_109_bool, var_110_object, var_111_int); // 0x6c4 NEW_2
	return 2; // 0x6c6 Return
}


func_1470(var_149_object, var_150_string, var_151_int)
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x5be PushV
	CreateInvItem(var_153_object); // 0x5bf Func
	SetItemName(var_150_string); // 0x5c1 ObjFunc
	var_154_object = Obj(); var_155_object = Obj(); var_156_int = 0; // 0x5c3 PushV
	var_154_object = var_149_object; // 0x5c4 Mov
	var_155_object = var_153_object; // 0x5c5 Mov
	var_156_int = var_151_int; // 0x5c6 Mov
	func_1451(var_155_object, var_156_int); // 0x5c7 NEW_2
	return 2; // 0x5c9 Return
}


func_1221(var_112_bool, var_113_object)
{
	var_117_int = 0; var_118_int = 0; var_119_int = 0; var_120_int = 0; // 0x4c5 PushV
	var_121_string = "voice_common"; // 0x4c6 PushS
	GetVariable(var_121_string, var_119_int); // 0x4c7 Func
	var_122_int = var_119_int; // 0x4c9 Push
	if(var_122_int == 0) goto Label_1259; // 0x4ca JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x4cb PushV
	var_124_object = var_113_object; // 0x4cc Mov
	func_1279(var_124_object); // 0x4cd NEW_2
	var_153_bool = var_123_bool == 0; // 0x4cf Not
	if(var_153_bool == 0) goto Label_1241; // 0x4d0 JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x4d1 PushV
	var_155_object = var_113_object; // 0x4d2 Mov
	func_1316(var_155_object); // 0x4d3 NEW_2
	var_184_bool = var_154_bool == 0; // 0x4d5 Not
	if(var_184_bool == 0) goto Label_1241; // 0x4d6 JumpB
	var_112_bool = 0; // 0x4d7 MovB
	return 4; // 0x4d8 Return
	
Label_1241:
	var_185_int = 2; // 0x4d9 PushI
	irand(var_120_int, var_185_int); // 0x4da Func
	var_186_int = var_120_int; // 0x4dc Push
	if(var_186_int == 0) goto Label_1254; // 0x4dd JumpB
	var_187_string = "voice_common"; // 0x4de PushS
	var_188_int = 1; // 0x4df PushI
	var_189_int = var_119_int + var_188_int; // 0x4e0 Add
	var_190_int = 3; // 0x4e1 PushI
	var_191_int = var_189_int / var_190_int; // 0x4e2 Mod
	SetVariable(var_187_string, var_191_int); // 0x4e3 Func
	goto Label_1258; // 0x4e5 Jump
	
Label_1258:
	goto Label_1277; // 0x4ea Jump
	
Label_1277:
	var_112_bool = 1; // 0x4fd MovB
	return 4; // 0x4fe Return
	
Label_1254:
	var_192_string = "voice_common"; // 0x4e6 PushS
	var_193_int = 0; // 0x4e7 PushI
	SetVariable(var_192_string, var_193_int); // 0x4e8 Func
	
Label_1259:
	var_194_bool = 0; var_195_object = Obj(); // 0x4eb PushV
	var_195_object = var_113_object; // 0x4ec Mov
	func_1316(var_195_object); // 0x4ed NEW_2
	var_196_bool = var_194_bool == 0; // 0x4ef Not
	if(var_196_bool == 0) goto Label_1273; // 0x4f0 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x4f1 PushV
	var_198_object = var_113_object; // 0x4f2 Mov
	func_1279(var_198_object); // 0x4f3 NEW_2
	var_199_bool = var_197_bool == 0; // 0x4f5 Not
	if(var_199_bool == 0) goto Label_1273; // 0x4f6 JumpB
	var_112_bool = 0; // 0x4f7 MovB
	return 4; // 0x4f8 Return
	
Label_1273:
	var_200_string = "voice_common"; // 0x4f9 PushS
	var_201_int = 1; // 0x4fa PushI
	SetVariable(var_200_string, var_201_int); // 0x4fb Func
}


func_1736()
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x6c8 PushV
	var_119_int = 761; // 0x6c9 PushI
	var_120_int = 2; // 0x6ca PushI
	var_121_int = 539746; // 0x6cb PushI
	CreateDiaryEntry(var_118_object, var_119_int, var_120_int, var_121_int); // 0x6cc Func
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; // 0x6ce PushV
	var_123_object = var_118_object; // 0x6cf Mov
	var_124_int = 757; // 0x6d0 MovI
	func_1762(var_122_bool, var_123_object, var_124_int); // 0x6d1 NEW_2
	return 2; // 0x6d3 Return
}


func_1483(var_62_bool, var_63_object, var_64_float)
{
	var_65_bool = var_63_object == 0; // 0x5cc Not
	if(var_65_bool == 0) goto Label_1488; // 0x5cd JumpB
	var_62_bool = 0; // 0x5ce MovB
	return 0; // 0x5cf Return
	
Label_1488:
	var_66_int = 0; // 0x5d0 PushI
	var_67_bool = var_64_float > var_66_int; // 0x5d1 GT
	if(var_67_bool == 0) goto Label_1495; // 0x5d2 JumpB
	var_68_int = 8; // 0x5d3 PushI
	SendWorldWndMessage(var_68_int); // 0x5d4 Func
	goto Label_1504; // 0x5d6 Jump
	
Label_1504:
	var_69_float = 0; // 0x5e0 PushV
	var_69_float = var_64_float; // 0x5e1 Mov
	func_1518(var_69_float); // 0x5e2 NEW_2
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; var_76_float = 0; var_77_float = 0; var_78_float = 0; // 0x5e4 PushV
	var_74_object = var_63_object; // 0x5e5 Mov
	var_75_string = "reputation"; // 0x5e6 MovS
	var_76_float = var_64_float; // 0x5e7 Mov
	var_77_float = 0; // 0x5e8 MovI
	var_78_float = 1; // 0x5e9 MovI
	func_1090(var_73_bool, var_74_object, var_75_string, var_76_float, var_77_float, var_78_float); // 0x5ea NEW_2
	var_62_bool = 1; // 0x5ec MovB
	return 0; // 0x5ed Return
	
Label_1495:
	var_97_int = 0; // 0x5d7 PushI
	var_98_bool = var_64_float < var_97_int; // 0x5d8 LT
	if(var_98_bool == 0) goto Label_1502; // 0x5d9 JumpB
	var_99_int = 9; // 0x5da PushI
	SendWorldWndMessage(var_99_int); // 0x5db Func
	goto Label_1504; // 0x5dd Jump
	
Label_1502:
	var_62_bool = 0; // 0x5de MovB
	return 0; // 0x5df Return
}


func_1749(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x6d5 PushV
	GetDiaryRoot(var_36_object); // 0x6d6 Func
	var_37_bool = var_36_object == 0; // 0x6d8 Not
	if(var_37_bool == 0) goto Label_1759; // 0x6d9 JumpB
	var_38_string = "Can't retrieve diary root"; // 0x6da PushS
	Trace(var_38_string); // 0x6db Func
	var_34_object = 0; // 0x6dd MovB
	return 2; // 0x6de Return
	
Label_1759:
	var_34_object = var_36_object; // 0x6df Mov
	return 2; // 0x6e0 Return
}


func_1762(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x6e2 PushV
	var_34_object = Obj(); // 0x6e3 PushV
	func_1749(var_34_object); // 0x6e4 NEW_2
	var_31_object = var_34_object; // 0x6e5 Mov
	Find(var_27_int, var_32_object); // 0x6e7 ObjFunc
	var_39_bool = var_32_object == 0; // 0x6e9 Not
	if(var_39_bool == 0) goto Label_1777; // 0x6ea JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x6eb PushS
	var_41_int = var_40_string + var_27_int; // 0x6ec Add
	Trace(var_41_int); // 0x6ed Func
	var_25_bool = 0; // 0x6ef MovB
	return 6; // 0x6f0 Return
	
Label_1777:
	AddChild(var_26_object); // 0x6f1 ObjFunc
	var_42_int = 7; // 0x6f3 PushI
	SendWorldWndMessage(var_42_int); // 0x6f4 Func
	GetCategory(var_33_int); // 0x6f6 ObjFunc
	SetDiarySection(var_33_int); // 0x6f8 Func
	var_25_bool = 0; // 0x6fa MovB
	return 6; // 0x6fb Return
}


func_226(var_0_object, var_41_int, var_42_object)
{
	var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0; // 0xe2 PushV
	var_0_object = var_42_object; // 0xe3 TMov
	var_52_bool = 0; var_53_object = Obj(); var_54_float = 0; // 0xe4 PushV
	var_53_object = var_42_object; // 0xe5 Mov
	var_54_float = 70.0; // 0xe6 MovF
	func_1136(var_53_object, var_54_float); // 0xe7 NEW_2
	var_98_bool = var_52_bool == 0; // 0xe9 Not
	if(var_98_bool == 0) goto Label_237; // 0xea JumpB
	var_41_int = -2; // 0xeb MovI
	return 8; // 0xec Return
	
Label_237:
	CreateDialog(var_48_object); // 0xed Func
	var_99_int = 0; // 0xef PushV
	func_1575(var_99_int); // 0xf0 NEW_2
	SetNPCName(var_99_int); // 0xf2 ObjFunc
	var_100_int = 0; // 0xf4 PushV
	func_1573(var_100_int); // 0xf5 NEW_2
	SetNPCDescription(var_100_int); // 0xf7 ObjFunc
	var_101_string = ""; // 0xf9 PushV
	func_1577(var_101_string); // 0xfa NEW_2
	SetPhoto(var_101_string); // 0xfc ObjFunc
	var_102_string = ""; // 0xfe PushV
	func_1579(var_102_string); // 0xff NEW_2
	SetPhoto2(var_102_string); // 0x101 ObjFunc
	var_103_int = 0; // 0x103 PushV
	func_1790(var_103_int); // 0x104 NEW_2
	SetPlayerName(var_103_int); // 0x106 ObjFunc
	var_50_int = -1; // 0x108 MovI
	IsOverrideActive(var_49_bool); // 0x109 Func
	var_111_bool = var_49_bool; // 0x10b Push
	if(var_111_bool == 0) goto Label_271; // 0x10c JumpB
	var_41_int = -2; // 0x10d MovI
	return 8; // 0x10e Return
	
Label_271:
	DoDialog(var_48_object); // 0x10f Func
	var_112_bool = 0; var_113_object = Obj(); // 0x111 PushV
	var_114_object = Obj(); // 0x112 PushV
	func_1412(var_114_object); // 0x113 NEW_2
	var_113_object = var_114_object; // 0x114 Mov
	func_1221(var_112_bool, var_113_object); // 0x116 NEW_2
	var_202_object = Obj(); var_203_object = Obj(); // 0x118 PushV
	var_202_object = var_42_object; // 0x119 Mov
	var_203_object = var_48_object; // 0x11a Mov
	TaskCall(3); // 0x11b TaskCall
	func_307(var_204_object, var_205_object, var_206_string, var_207_bool, var_202_object, var_203_object); // 0x11c NEW_2
	TaskReturn(); // 0x11d TaskReturn
	IsDialogEnd(var_51_bool); // 0x11f ObjFunc
	
Label_289:
	var_316_bool = var_51_bool == 0; // 0x121 Not
	if(var_316_bool == 0) goto Label_296; // 0x122 JumpB
	sync(); // 0x123 Func
	IsDialogEnd(var_51_bool); // 0x125 ObjFunc
	goto Label_289; // 0x127 Jump
	
Label_296:
	var_317_object = Obj(); // 0x128 PushV
	var_317_object = var_42_object; // 0x129 Mov
	func_1204(); // 0x12a NEW_2
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
	func_1556(var_30_int); // 0x3ec NEW_2
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
	func_1549(var_57_string, var_58_int); // 0x410 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x412 Func
	WaitForAnimEnd(var_27_bool); // 0x414 Func
	var_59_bool = var_27_bool == 0; // 0x416 Not
	if(var_59_bool == 0) goto Label_1049; // 0x417 JumpB
	goto Label_1060; // 0x418 Jump
}


func_1518(var_69_float)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x5ee PushV
	CreateFloatVector(var_71_object); // 0x5ef Func
	add(var_69_float); // 0x5f1 ObjFunc
	var_72_int = 16; // 0x5f3 PushI
	SendWorldWndMessage(var_72_int, var_71_object); // 0x5f4 Func
	return 2; // 0x5f6 Return
}


func_1528(var_54_bool, var_55_string, var_56_string)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x5f8 PushV
	FindActor(var_58_object, var_55_string); // 0x5f9 Func
	var_59_bool = var_58_object == 0; // 0x5fb NullEq
	if(var_59_bool == 0) goto Label_1535; // 0x5fc JumpB
	var_54_bool = 0; // 0x5fd MovB
	return 2; // 0x5fe Return
	
Label_1535:
	Trigger(var_58_object, var_56_string); // 0x5ff Func
	var_54_bool = 1; // 0x601 MovB
	return 2; // 0x602 Return
}


func_1790(var_103_int)
{
	var_104_int = 0; var_105_int = 0; // 0x6fe PushV
	var_106_string = "branch"; // 0x6ff PushS
	GetVariable(var_106_string, var_105_int); // 0x700 Func
	var_107_int = 0; // 0x702 PushI
	var_108_bool = var_105_int == var_107_int; // 0x703 Eq
	if(var_108_bool == 0) goto Label_1800; // 0x704 JumpB
	var_103_int = 1; // 0x705 MovI
	return 2; // 0x706 Return
	
Label_1800:
	var_109_int = 1; // 0x708 PushI
	var_110_bool = var_105_int == var_109_int; // 0x709 Eq
	if(var_110_bool == 0) goto Label_1805; // 0x70a JumpB
	var_103_int = 2; // 0x70b MovI
	return 2; // 0x70c Return
	
Label_1805:
	var_103_int = 3; // 0x70d MovI
	return 2; // 0x70e Return
}


func_1279(var_123_bool)
{
	var_125_string = ""; var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_string = ""; var_130_string = ""; var_131_int = 0; var_132_bool = 0; var_133_int = 0; var_134_string = ""; // 0x4ff PushV
	var_130_string = "c"; // 0x500 MovS
	var_131_int = 0; // 0x501 MovI
	
Label_1282:
	var_135_int = 1; // 0x502 PushI
	if(var_135_int == 0) goto Label_1295; // 0x503 JumpB
	var_136_int = 1; // 0x504 PushI
	var_137_int = var_131_int + var_136_int; // 0x505 Add
	var_138_int = var_130_string + var_137_int; // 0x506 Add
	HasProperty(var_138_int, var_132_bool); // 0x507 ObjFunc
	var_139_bool = var_132_bool == 0; // 0x509 Not
	if(var_139_bool == 0) goto Label_1292; // 0x50a JumpB
	goto Label_1295; // 0x50b Jump
	
Label_1295:
	var_140_bool = var_131_int == 0; // 0x50f Not
	if(var_140_bool == 0) goto Label_1299; // 0x510 JumpB
	var_123_bool = 0; // 0x511 MovB
	return 10; // 0x512 Return
	
Label_1299:
	var_133_int = 0; // 0x513 MovI
	var_141_int = 1; // 0x514 PushI
	var_142_bool = var_131_int > var_141_int; // 0x515 GT
	if(var_142_bool == 0) goto Label_1305; // 0x516 JumpB
	irand(var_133_int, var_131_int); // 0x517 Func
	
Label_1305:
	var_143_int = 1; // 0x519 PushI
	var_144_int = var_133_int + var_143_int; // 0x51a Add
	var_145_int = var_130_string + var_144_int; // 0x51b Add
	GetProperty(var_145_int, var_134_string); // 0x51c ObjFunc
	var_146_bool = 0; var_147_string = ""; // 0x51e PushV
	var_147_string = var_134_string; // 0x51f Mov
	func_1390(var_146_bool, var_147_string); // 0x520 NEW_2
	var_123_bool = var_146_bool; // 0x521 Mov
	return 10; // 0x523 Return
	
Label_1292:
	var_152_int = 1; // 0x50c PushI
	var_131_int = var_131_int + var_152_int; // 0x50d Add2
	goto Label_1282; // 0x50e Jump
}


