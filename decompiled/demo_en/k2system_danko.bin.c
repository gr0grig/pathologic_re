task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_bool)
{
	var_14_int = 1; // 0xa2 PushI
	if(var_14_int == 0) goto Label_202; // 0xa3 JumpB
	func_1389(); // 0xa5 NEW_2
	var_16_int = 41014; // 0xa7 PushI
	var_17_bool = var_12_cvector == var_16_int; // 0xa8 Eq
	if(var_17_bool == 0) goto Label_190; // 0xa9 JumpB
	var_18_string = ""; // 0xaa PushV
	var_18_string = "Neutral"; // 0xab MovS
	func_139(var_13_bool, var_18_string); // 0xac NEW_2
	var_35_int = 539066; // 0xae PushI
	SetMessage(var_35_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_36_int = 539067; // 0xb3 PushI
	var_37_int = -1; // 0xb4 PushI
	var_38_int = 41015; // 0xb5 PushI
	AddReply(var_36_int, var_37_int, var_38_int); // 0xb6 TObjFunc
	var_39_int = 541074; // 0xb8 PushI
	var_40_int = -1; // 0xb9 PushI
	var_41_int = 43179; // 0xba PushI
	AddReply(var_39_int, var_40_int, var_41_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_3_string = 1; // 0xbe TMovB
	var_42_bool = 0; // 0xbf PushV
	func_1552(var_42_bool); // 0xc0 NEW_2
	if(var_42_bool == 0) goto Label_198; // 0xc2 JumpB
	lshStopAnimation(); // 0xc3 Func
	goto Label_200; // 0xc5 Jump
	
Label_200:
	return 0; // 0xc8 Return
	
Label_198:
	StopAnimation(); // 0xc6 Func
	
Label_202:
	return 0; // 0xca Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_cvector, var_13_bool)
{
	var_14_int = 1; // 0x195 PushI
	if(var_14_int == 0) goto Label_749; // 0x196 JumpB
	func_1389(); // 0x198 NEW_2
	var_16_int = 41715; // 0x19a PushI
	var_17_bool = var_13_bool == var_16_int; // 0x19b Eq
	if(var_17_bool == 0) goto Label_428; // 0x19c JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0x19d PushV
	var_18_object = var_1_object; // 0x19e MovT
	var_19_object = var_0_object; // 0x19f MovT
	func_1574(); // 0x1a0 NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0x1a2 PushV
	var_52_object = var_1_object; // 0x1a3 MovT
	var_53_object = var_0_object; // 0x1a4 MovT
	func_1599(); // 0x1a5 NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0x1a7 PushV
	var_60_object = var_1_object; // 0x1a8 MovT
	var_61_object = var_0_object; // 0x1a9 MovT
	func_1554(var_61_object); // 0x1aa NEW_2
	
Label_428:
	var_100_int = 41718; // 0x1ac PushI
	var_101_bool = var_13_bool == var_100_int; // 0x1ad Eq
	if(var_101_bool == 0) goto Label_436; // 0x1ae JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x1af PushV
	var_102_object = var_1_object; // 0x1b0 MovT
	var_103_object = var_0_object; // 0x1b1 MovT
	func_1579(); // 0x1b2 NEW_2
	
Label_436:
	var_113_int = 41721; // 0x1b4 PushI
	var_114_bool = var_13_bool == var_113_int; // 0x1b5 Eq
	if(var_114_bool == 0) goto Label_469; // 0x1b6 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x1b7 PushV
	var_115_object = var_1_object; // 0x1b8 MovT
	var_116_object = var_0_object; // 0x1b9 MovT
	func_1584(); // 0x1ba NEW_2
	var_134_object = Obj(); var_135_object = Obj(); // 0x1bc PushV
	var_134_object = var_1_object; // 0x1bd MovT
	var_135_object = var_0_object; // 0x1be MovT
	func_1594(); // 0x1bf NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x1c1 PushV
	var_139_object = var_1_object; // 0x1c2 MovT
	var_140_object = var_0_object; // 0x1c3 MovT
	func_1599(); // 0x1c4 NEW_2
	var_141_object = Obj(); var_142_object = Obj(); // 0x1c6 PushV
	var_141_object = var_1_object; // 0x1c7 MovT
	var_142_object = var_0_object; // 0x1c8 MovT
	func_1561(var_142_object); // 0x1c9 NEW_2
	var_146_object = Obj(); var_147_object = Obj(); // 0x1cb PushV
	var_146_object = var_1_object; // 0x1cc MovT
	var_147_object = var_0_object; // 0x1cd MovT
	func_1604(var_147_object); // 0x1ce NEW_2
	var_170_object = Obj(); var_171_object = Obj(); // 0x1d0 PushV
	var_170_object = var_1_object; // 0x1d1 MovT
	var_171_object = var_0_object; // 0x1d2 MovT
	func_1568(); // 0x1d3 NEW_2
	
Label_469:
	var_174_int = 41724; // 0x1d5 PushI
	var_175_bool = var_13_bool == var_174_int; // 0x1d6 Eq
	if(var_175_bool == 0) goto Label_492; // 0x1d7 JumpB
	var_176_object = Obj(); var_177_object = Obj(); // 0x1d8 PushV
	var_176_object = var_1_object; // 0x1d9 MovT
	var_177_object = var_0_object; // 0x1da MovT
	func_1589(); // 0x1db NEW_2
	var_187_object = Obj(); var_188_object = Obj(); // 0x1dd PushV
	var_187_object = var_1_object; // 0x1de MovT
	var_188_object = var_0_object; // 0x1df MovT
	func_1615(var_188_object); // 0x1e0 NEW_2
	var_195_object = Obj(); var_196_object = Obj(); // 0x1e2 PushV
	var_195_object = var_1_object; // 0x1e3 MovT
	var_196_object = var_0_object; // 0x1e4 MovT
	func_1568(); // 0x1e5 NEW_2
	var_197_object = Obj(); var_198_object = Obj(); // 0x1e7 PushV
	var_197_object = var_1_object; // 0x1e8 MovT
	var_198_object = var_0_object; // 0x1e9 MovT
	func_1626(var_198_object); // 0x1ea NEW_2
	
Label_492:
	var_202_int = 41712; // 0x1ec PushI
	var_203_bool = var_12_cvector == var_202_int; // 0x1ed Eq
	if(var_203_bool == 0) goto Label_555; // 0x1ee JumpB
	var_204_string = ""; // 0x1ef PushV
	var_204_string = "Neutral"; // 0x1f0 MovS
	func_382(var_13_bool, var_204_string); // 0x1f1 NEW_2
	var_221_int = 539760; // 0x1f3 PushI
	SetMessage(var_221_int); // 0x1f4 TObjFunc
	ClearReplies(); // 0x1f6 TObjFunc
	var_222_bool = 0; var_223_object = Obj(); // 0x1f8 PushV
	var_223_object = var_1_object; // 0x1f9 MovT
	func_1643(var_222_bool, var_223_object); // 0x1fa NEW_2
	if(var_222_bool == 0) goto Label_514; // 0x1fc JumpB
	var_236_int = 539761; // 0x1fd PushI
	var_237_int = 41714; // 0x1fe PushI
	var_238_int = 41713; // 0x1ff PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x200 TObjFunc
	
Label_514:
	var_239_bool = 0; var_240_object = Obj(); // 0x202 PushV
	var_240_object = var_1_object; // 0x203 MovT
	func_1643(var_239_bool, var_240_object); // 0x204 NEW_2
	if(var_239_bool == 0) goto Label_524; // 0x206 JumpB
	var_241_int = 539764; // 0x207 PushI
	var_242_int = 41717; // 0x208 PushI
	var_243_int = 41716; // 0x209 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x20a TObjFunc
	
Label_524:
	var_244_bool = 0; var_245_object = Obj(); // 0x20c PushV
	var_245_object = var_1_object; // 0x20d MovT
	func_1633(var_244_bool, var_245_object); // 0x20e NEW_2
	if(var_244_bool == 0) goto Label_534; // 0x210 JumpB
	var_258_int = 539767; // 0x211 PushI
	var_259_int = 41720; // 0x212 PushI
	var_260_int = 41719; // 0x213 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x214 TObjFunc
	
Label_534:
	var_261_bool = 0; var_262_object = Obj(); // 0x216 PushV
	var_262_object = var_1_object; // 0x217 MovT
	func_1653(var_261_bool, var_262_object); // 0x218 NEW_2
	if(var_261_bool == 0) goto Label_544; // 0x21a JumpB
	var_275_int = 539770; // 0x21b PushI
	var_276_int = 41723; // 0x21c PushI
	var_277_int = 41722; // 0x21d PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x21e TObjFunc
	
Label_544:
	var_278_int = 539773; // 0x220 PushI
	var_279_int = -1; // 0x221 PushI
	var_280_int = 41725; // 0x222 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x223 TObjFunc
	var_281_int = 541091; // 0x225 PushI
	var_282_int = -1; // 0x226 PushI
	var_283_int = 43200; // 0x227 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x228 TObjFunc
	return 0; // 0x22a Return
	
Label_555:
	var_284_int = 41723; // 0x22b PushI
	var_285_bool = var_12_cvector == var_284_int; // 0x22c Eq
	if(var_285_bool == 0) goto Label_578; // 0x22d JumpB
	var_286_string = ""; // 0x22e PushV
	var_286_string = "Neutral"; // 0x22f MovS
	func_382(var_13_bool, var_286_string); // 0x230 NEW_2
	var_287_int = 539771; // 0x232 PushI
	SetMessage(var_287_int); // 0x233 TObjFunc
	ClearReplies(); // 0x235 TObjFunc
	var_288_int = 541092; // 0x237 PushI
	var_289_int = 43203; // 0x238 PushI
	var_290_int = 43201; // 0x239 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x23a TObjFunc
	var_291_int = 541093; // 0x23c PushI
	var_292_int = 43203; // 0x23d PushI
	var_293_int = 43202; // 0x23e PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x23f TObjFunc
	return 0; // 0x241 Return
	
Label_578:
	var_294_int = 43203; // 0x242 PushI
	var_295_bool = var_12_cvector == var_294_int; // 0x243 Eq
	if(var_295_bool == 0) goto Label_596; // 0x244 JumpB
	var_296_string = ""; // 0x245 PushV
	var_296_string = "Neutral"; // 0x246 MovS
	func_382(var_13_bool, var_296_string); // 0x247 NEW_2
	var_297_int = 541094; // 0x249 PushI
	SetMessage(var_297_int); // 0x24a TObjFunc
	ClearReplies(); // 0x24c TObjFunc
	var_298_int = 539772; // 0x24e PushI
	var_299_int = -1; // 0x24f PushI
	var_300_int = 41724; // 0x250 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x251 TObjFunc
	return 0; // 0x253 Return
	
Label_596:
	var_301_int = 41720; // 0x254 PushI
	var_302_bool = var_12_cvector == var_301_int; // 0x255 Eq
	if(var_302_bool == 0) goto Label_619; // 0x256 JumpB
	var_303_string = ""; // 0x257 PushV
	var_303_string = "Neutral"; // 0x258 MovS
	func_382(var_13_bool, var_303_string); // 0x259 NEW_2
	var_304_int = 539768; // 0x25b PushI
	SetMessage(var_304_int); // 0x25c TObjFunc
	ClearReplies(); // 0x25e TObjFunc
	var_305_int = 541095; // 0x260 PushI
	var_306_int = 43207; // 0x261 PushI
	var_307_int = 43205; // 0x262 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x263 TObjFunc
	var_308_int = 541096; // 0x265 PushI
	var_309_int = 43207; // 0x266 PushI
	var_310_int = 43206; // 0x267 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x268 TObjFunc
	return 0; // 0x26a Return
	
Label_619:
	var_311_int = 43207; // 0x26b PushI
	var_312_bool = var_12_cvector == var_311_int; // 0x26c Eq
	if(var_312_bool == 0) goto Label_642; // 0x26d JumpB
	var_313_string = ""; // 0x26e PushV
	var_313_string = "Neutral"; // 0x26f MovS
	func_382(var_13_bool, var_313_string); // 0x270 NEW_2
	var_314_int = 541097; // 0x272 PushI
	SetMessage(var_314_int); // 0x273 TObjFunc
	ClearReplies(); // 0x275 TObjFunc
	var_315_int = 541098; // 0x277 PushI
	var_316_int = 43211; // 0x278 PushI
	var_317_int = 43209; // 0x279 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x27a TObjFunc
	var_318_int = 541099; // 0x27c PushI
	var_319_int = 43211; // 0x27d PushI
	var_320_int = 43210; // 0x27e PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x27f TObjFunc
	return 0; // 0x281 Return
	
Label_642:
	var_321_int = 43211; // 0x282 PushI
	var_322_bool = var_12_cvector == var_321_int; // 0x283 Eq
	if(var_322_bool == 0) goto Label_660; // 0x284 JumpB
	var_323_string = ""; // 0x285 PushV
	var_323_string = "Neutral"; // 0x286 MovS
	func_382(var_13_bool, var_323_string); // 0x287 NEW_2
	var_324_int = 541100; // 0x289 PushI
	SetMessage(var_324_int); // 0x28a TObjFunc
	ClearReplies(); // 0x28c TObjFunc
	var_325_int = 539769; // 0x28e PushI
	var_326_int = -1; // 0x28f PushI
	var_327_int = 41721; // 0x290 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x291 TObjFunc
	return 0; // 0x293 Return
	
Label_660:
	var_328_int = 41717; // 0x294 PushI
	var_329_bool = var_12_cvector == var_328_int; // 0x295 Eq
	if(var_329_bool == 0) goto Label_683; // 0x296 JumpB
	var_330_string = ""; // 0x297 PushV
	var_330_string = "Neutral"; // 0x298 MovS
	func_382(var_13_bool, var_330_string); // 0x299 NEW_2
	var_331_int = 539765; // 0x29b PushI
	SetMessage(var_331_int); // 0x29c TObjFunc
	ClearReplies(); // 0x29e TObjFunc
	var_332_int = 541101; // 0x2a0 PushI
	var_333_int = 43215; // 0x2a1 PushI
	var_334_int = 43213; // 0x2a2 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x2a3 TObjFunc
	var_335_int = 541102; // 0x2a5 PushI
	var_336_int = 43216; // 0x2a6 PushI
	var_337_int = 43214; // 0x2a7 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x2a8 TObjFunc
	return 0; // 0x2aa Return
	
Label_683:
	var_338_int = 43216; // 0x2ab PushI
	var_339_bool = var_12_cvector == var_338_int; // 0x2ac Eq
	if(var_339_bool == 0) goto Label_701; // 0x2ad JumpB
	var_340_string = ""; // 0x2ae PushV
	var_340_string = "Neutral"; // 0x2af MovS
	func_382(var_13_bool, var_340_string); // 0x2b0 NEW_2
	var_341_int = 541104; // 0x2b2 PushI
	SetMessage(var_341_int); // 0x2b3 TObjFunc
	ClearReplies(); // 0x2b5 TObjFunc
	var_342_int = 541105; // 0x2b7 PushI
	var_343_int = 43215; // 0x2b8 PushI
	var_344_int = 43217; // 0x2b9 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x2ba TObjFunc
	return 0; // 0x2bc Return
	
Label_701:
	var_345_int = 43215; // 0x2bd PushI
	var_346_bool = var_12_cvector == var_345_int; // 0x2be Eq
	if(var_346_bool == 0) goto Label_719; // 0x2bf JumpB
	var_347_string = ""; // 0x2c0 PushV
	var_347_string = "Neutral"; // 0x2c1 MovS
	func_382(var_13_bool, var_347_string); // 0x2c2 NEW_2
	var_348_int = 541103; // 0x2c4 PushI
	SetMessage(var_348_int); // 0x2c5 TObjFunc
	ClearReplies(); // 0x2c7 TObjFunc
	var_349_int = 539766; // 0x2c9 PushI
	var_350_int = -1; // 0x2ca PushI
	var_351_int = 41718; // 0x2cb PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x2cc TObjFunc
	return 0; // 0x2ce Return
	
Label_719:
	var_352_int = 41714; // 0x2cf PushI
	var_353_bool = var_12_cvector == var_352_int; // 0x2d0 Eq
	if(var_353_bool == 0) goto Label_737; // 0x2d1 JumpB
	var_354_string = ""; // 0x2d2 PushV
	var_354_string = "Neutral"; // 0x2d3 MovS
	func_382(var_13_bool, var_354_string); // 0x2d4 NEW_2
	var_355_int = 539762; // 0x2d6 PushI
	SetMessage(var_355_int); // 0x2d7 TObjFunc
	ClearReplies(); // 0x2d9 TObjFunc
	var_356_int = 539763; // 0x2db PushI
	var_357_int = -1; // 0x2dc PushI
	var_358_int = 41715; // 0x2dd PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x2de TObjFunc
	return 0; // 0x2e0 Return
	
Label_737:
	var_3_string = 1; // 0x2e1 TMovB
	var_359_bool = 0; // 0x2e2 PushV
	func_1552(var_359_bool); // 0x2e3 NEW_2
	if(var_359_bool == 0) goto Label_745; // 0x2e5 JumpB
	lshStopAnimation(); // 0x2e6 Func
	goto Label_747; // 0x2e8 Jump
	
Label_747:
	return 0; // 0x2eb Return
	
Label_745:
	StopAnimation(); // 0x2e9 Func
	
Label_749:
	return 0; // 0x2ed Return
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_string)
{
	var_13_bool = 0; var_14_bool = 0; // 0x2f6 PushV
	var_15_string = "cleanup"; // 0x2f7 PushS
	var_16_bool = var_12_string == var_15_string; // 0x2f8 Eq
	if(var_16_bool == 0) goto Label_773; // 0x2f9 JumpB
	var_1_object = 1; // 0x2fa TMovB
	IsLoaded(var_14_bool); // 0x2fb Func
	var_17_bool = var_14_bool == 0; // 0x2fd Not
	if(var_17_bool == 0) goto Label_772; // 0x2fe JumpB
	var_18_object = Obj(); // 0x2ff PushV
	func_1396(var_18_object); // 0x300 NEW_2
	RemoveActor(var_18_object); // 0x302 Func
	
Label_772:
	goto Label_777; // 0x304 Jump
	
Label_777:
	return 2; // 0x309 Return
	
Label_773:
	var_21_string = "restore"; // 0x305 PushS
	var_22_bool = var_12_string == var_21_string; // 0x306 Eq
	if(var_22_bool == 0) goto Label_777; // 0x307 JumpB
	var_1_object = 0; // 0x308 TMovB
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	var_12_object = var_1_object; // 0x30a PushT
	if(var_12_object == 0) goto Label_787; // 0x30b JumpB
	var_13_object = Obj(); // 0x30c PushV
	func_1396(var_13_object); // 0x30d NEW_2
	RemoveActor(var_13_object); // 0x30f Func
	Hold(); // 0x311 Func
	
Label_787:
	func_902(); // 0x314 NEW_2
	return 0; // 0x316 Return
}


task_4_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	func_917(); // 0x318 NEW_2
	return 0; // 0x31a Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x361 PushI
	var_14_bool = var_12_int == var_13_int; // 0x362 Eq
	if(var_14_bool == 0) goto Label_901; // 0x363 JumpB
	func_860(); // 0x365 NEW_2
	var_16_bool = 0; // 0x367 PushV
	var_16_bool = 0; // 0x368 MovB
	var_17_bool = 0; // 0x369 PushV
	func_1115(var_17_bool); // 0x36a NEW_2
	if(var_17_bool == 0) goto Label_882; // 0x36c JumpB
	var_20_bool = 0; // 0x36d PushV
	func_829(var_20_bool); // 0x36e NEW_2
	if(var_20_bool == 0) goto Label_882; // 0x370 JumpB
	var_16_bool = 1; // 0x371 MovB
	
Label_882:
	if(var_16_bool == 0) goto Label_895; // 0x372 JumpB
	var_37_bool = 0; // 0x373 PushV
	func_809(var_37_bool); // 0x374 NEW_2
	if(var_37_bool == 0) goto Label_894; // 0x376 JumpB
	var_56_bool = 0; var_57_object = Obj(); // 0x377 PushV
	var_58_object = Obj(); // 0x378 PushV
	func_1396(var_58_object); // 0x379 NEW_2
	var_57_object = var_58_object; // 0x37a Mov
	func_1263(var_57_object); // 0x37c NEW_2
	
Label_894:
	goto Label_901; // 0x37e Jump
	
Label_901:
	return 0; // 0x385 Return
	
Label_895:
	func_824(var_12_int); // 0x380 NEW_2
	func_851(); // 0x383 NEW_2
}


task_4_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_bool)
{
	var_13_bool = var_12_bool; // 0x3a3 Push
	if(var_13_bool == 0) goto Label_937; // 0x3a4 JumpB
	func_851(); // 0x3a6 NEW_2
	goto Label_941; // 0x3a8 Jump
	
Label_941:
	return 0; // 0x3ad Return
	
Label_937:
	var_19_string = ""; // 0x3a9 PushV
	var_19_string = "Neutral"; // 0x3aa MovS
	func_1343(var_19_string); // 0x3ab NEW_2
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x3ae PushV
	IsOverrideActive(var_14_bool); // 0x3af Func
	var_15_bool = var_14_bool == 0; // 0x3b1 Not
	if(var_15_bool == 0) goto Label_970; // 0x3b2 JumpB
	EventDisable(0); // 0x3b3 EventDisable
	func_1042(); // 0x3b5 NEW_2
	var_16_bool = 0; var_17_object = Obj(); // 0x3b7 PushV
	var_17_object = var_12_object; // 0x3b8 Mov
	func_1106(var_17_object); // 0x3b9 NEW_2
	EventEnable(0); // 0x3bb EventEnable
	var_30_object = Obj(); // 0x3bc PushV
	var_30_object = var_12_object; // 0x3bd Mov
	func_1918(var_30_object); // 0x3be NEW_2
	var_380_string = ""; // 0x3c0 PushV
	var_380_string = "Neutral"; // 0x3c1 MovS
	func_1343(var_380_string); // 0x3c2 NEW_2
	func_860(); // 0x3c5 NEW_2
	func_851(); // 0x3c8 NEW_2
	
Label_970:
	return 2; // 0x3ca Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_cvector, var_11_bool)
{
	func_754(); // 0x2ef NEW_2
	return 0; // 0x2f1 Return
}


func_0(var_0_object, var_324_int, var_325_object)
{
	var_327_object = Obj(); var_328_bool = 0; var_329_int = 0; var_330_bool = 0; var_331_object = Obj(); var_332_bool = 0; var_333_int = 0; var_334_bool = 0; // 0x0 PushV
	var_0_object = var_325_object; // 0x1 TMov
	var_335_bool = 0; var_336_object = Obj(); var_337_float = 0; // 0x2 PushV
	var_336_object = var_325_object; // 0x3 Mov
	var_337_float = 70.0; // 0x4 MovF
	func_1120(var_336_object, var_337_float); // 0x5 NEW_2
	var_338_bool = var_335_bool == 0; // 0x7 Not
	if(var_338_bool == 0) goto Label_11; // 0x8 JumpB
	var_324_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_331_object); // 0xb Func
	var_339_int = 0; // 0xd PushV
	func_1546(var_339_int); // 0xe NEW_2
	SetNPCName(var_339_int); // 0x10 ObjFunc
	var_340_int = 0; // 0x12 PushV
	func_1544(var_340_int); // 0x13 NEW_2
	SetNPCDescription(var_340_int); // 0x15 ObjFunc
	var_341_string = ""; // 0x17 PushV
	func_1548(var_341_string); // 0x18 NEW_2
	SetPhoto(var_341_string); // 0x1a ObjFunc
	var_342_string = ""; // 0x1c PushV
	func_1550(var_342_string); // 0x1d NEW_2
	SetPhoto2(var_342_string); // 0x1f ObjFunc
	var_343_int = 0; // 0x21 PushV
	func_1761(var_343_int); // 0x22 NEW_2
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
	func_1396(var_347_object); // 0x31 NEW_2
	var_346_object = var_347_object; // 0x32 Mov
	func_1205(var_345_bool, var_346_object); // 0x34 NEW_2
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
	func_1188(); // 0x48 NEW_2
	StopDialog(var_331_object); // 0x4a Func
	GetReturnValue(var_333_int); // 0x4c ObjFunc
	var_324_int = var_333_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1796(var_262_int)
{
	var_263_int = 0; var_264_int = 0; // 0x704 PushV
	var_265_string = "k2system_burah_day"; // 0x705 PushS
	GetVariable(var_265_string, var_264_int); // 0x706 Func
	var_262_int = var_264_int; // 0x708 Mov
	return 2; // 0x709 Return
}


func_1544(var_100_int)
{
	var_100_int = 515573; // 0x608 MovI
	return 0; // 0x609 Return
}


func_1546(var_99_int)
{
	var_99_int = 504032; // 0x60a MovI
	return 0; // 0x60b Return
}


func_1802(var_237_int)
{
	var_238_int = 0; var_239_int = 0; // 0x70a PushV
	var_240_string = "k2system_danko_day"; // 0x70b PushS
	GetVariable(var_240_string, var_239_int); // 0x70c Func
	var_237_int = var_239_int; // 0x70e Mov
	return 2; // 0x70f Return
}


func_1548(var_101_string)
{
	var_101_string = "ui/NPC_Bakalavr.png"; // 0x60c MovS
	return 0; // 0x60d Return
}


func_1550(var_102_string)
{
	var_102_string = "ui/NPC_Bakalavr_b.png"; // 0x60e MovS
	return 0; // 0x60f Return
}


func_1552(var_94_bool)
{
	var_94_bool = 1; // 0x610 MovB
	return 0; // 0x611 Return
}


func_1040(var_50_bool)
{
	var_50_bool = 1; // 0x410 MovB
	return 0; // 0x411 Return
}


func_1554(var_60_object)
{
	var_62_bool = 0; var_63_object = Obj(); var_64_float = 0; // 0x613 PushV
	var_63_object = var_60_object; // 0x614 Mov
	var_64_float = 0.05; // 0x615 MovF
	func_1454(var_62_bool, var_63_object, var_64_float); // 0x616 NEW_2
	return 0; // 0x618 Return
}


func_1042()
{
	StopAnimation(); // 0x412 Func
	StopGroup0(); // 0x414 Func
	return 0; // 0x416 Return
}


func_1808(var_257_int)
{
	var_258_int = 0; var_259_int = 0; var_260_int = 0; var_261_int = 0; // 0x710 PushV
	var_262_int = 0; // 0x711 PushV
	func_1796(var_262_int); // 0x712 NEW_2
	var_260_int = var_262_int; // 0x713 Mov
	var_266_string = "k2system_burah_state"; // 0x715 PushS
	var_267_int = var_266_string + var_260_int; // 0x716 Add
	GetVariable(var_267_int, var_261_int); // 0x717 Func
	var_257_int = var_261_int; // 0x719 Mov
	return 4; // 0x71a Return
}


func_1300(var_154_bool)
{
	var_156_string = ""; var_157_int = 0; var_158_bool = 0; var_159_int = 0; var_160_string = ""; var_161_string = ""; var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_string = ""; // 0x514 PushV
	var_166_string = "d"; // 0x515 PushS
	var_167_int = 0; // 0x516 PushV
	func_1511(var_167_int); // 0x517 NEW_2
	var_168_int = var_166_string + var_167_int; // 0x519 Add
	var_169_string = "m"; // 0x51a PushS
	var_161_string = var_168_int + var_169_string; // 0x51b Add2
	var_162_int = 0; // 0x51c MovI
	
Label_1309:
	var_170_int = 1; // 0x51d PushI
	if(var_170_int == 0) goto Label_1322; // 0x51e JumpB
	var_171_int = 1; // 0x51f PushI
	var_172_int = var_162_int + var_171_int; // 0x520 Add
	var_173_int = var_161_string + var_172_int; // 0x521 Add
	HasProperty(var_173_int, var_163_bool); // 0x522 ObjFunc
	var_174_bool = var_163_bool == 0; // 0x524 Not
	if(var_174_bool == 0) goto Label_1319; // 0x525 JumpB
	goto Label_1322; // 0x526 Jump
	
Label_1322:
	var_175_bool = var_162_int == 0; // 0x52a Not
	if(var_175_bool == 0) goto Label_1326; // 0x52b JumpB
	var_154_bool = 0; // 0x52c MovB
	return 10; // 0x52d Return
	
Label_1326:
	var_164_int = 0; // 0x52e MovI
	var_176_int = 1; // 0x52f PushI
	var_177_bool = var_162_int > var_176_int; // 0x530 GT
	if(var_177_bool == 0) goto Label_1332; // 0x531 JumpB
	irand(var_164_int, var_162_int); // 0x532 Func
	
Label_1332:
	var_178_int = 1; // 0x534 PushI
	var_179_int = var_164_int + var_178_int; // 0x535 Add
	var_180_int = var_161_string + var_179_int; // 0x536 Add
	GetProperty(var_180_int, var_165_string); // 0x537 ObjFunc
	var_181_bool = 0; var_182_string = ""; // 0x539 PushV
	var_182_string = var_165_string; // 0x53a Mov
	func_1374(var_181_bool, var_182_string); // 0x53b NEW_2
	var_154_bool = var_181_bool; // 0x53c Mov
	return 10; // 0x53e Return
	
Label_1319:
	var_183_int = 1; // 0x527 PushI
	var_162_int = var_162_int + var_183_int; // 0x528 Add2
	goto Label_1309; // 0x529 Jump
}


func_1047(var_27_float)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); // 0x417 PushV
	GetPosition(var_32_cvector); // 0x418 Func
	GetPosition(var_33_cvector); // 0x41a ObjFunc
	var_34_cvector = var_33_cvector - var_32_cvector; // 0x41c Sub2
	var_27_float = var_34_cvector | var_34_cvector; // 0x41d Or2
	return 6; // 0x41e Return
}


func_1561(var_141_object)
{
	var_143_bool = 0; var_144_object = Obj(); var_145_float = 0; // 0x61a PushV
	var_144_object = var_141_object; // 0x61b Mov
	var_145_float = -0.05; // 0x61c MovF
	func_1454(var_143_bool, var_144_object, var_145_float); // 0x61d NEW_2
	return 0; // 0x61f Return
}


func_795(var_0_object)
{
	var_12_bool = 0; // 0x31b PushV
	func_1115(var_12_bool); // 0x31c NEW_2
	var_15_bool = var_12_bool == 0; // 0x31e Not
	if(var_15_bool == 0) goto Label_802; // 0x31f JumpB
	Hold(); // 0x320 Func
	
Label_802:
	GetDirection(var_0_object); // 0x322 Func
	
Label_804:
	func_971(); // 0x325 NEW_2
	goto Label_804; // 0x327 Jump
}


func_284(var_0_object, var_1_object, var_2_object, var_3_string, var_202_object, var_203_object)
{
	var_0_object = var_203_object; // 0x11d TMov
	var_1_object = var_202_object; // 0x11e TMov
	var_3_string = 0; // 0x11f TMovB
	var_208_int = 1; // 0x120 PushI
	if(var_208_int == 0) goto Label_352; // 0x121 JumpB
	var_209_string = ""; // 0x122 PushV
	var_209_string = "Neutral"; // 0x123 MovS
	func_382(var_203_object, var_209_string); // 0x124 NEW_2
	var_226_int = 539760; // 0x126 PushI
	SetMessage(var_226_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_227_bool = 0; var_228_object = Obj(); // 0x12b PushV
	var_228_object = var_1_object; // 0x12c MovT
	func_1643(var_227_bool, var_228_object); // 0x12d NEW_2
	if(var_227_bool == 0) goto Label_309; // 0x12f JumpB
	var_244_int = 539761; // 0x130 PushI
	var_245_int = 41714; // 0x131 PushI
	var_246_int = 41713; // 0x132 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x133 TObjFunc
	
Label_309:
	var_247_bool = 0; var_248_object = Obj(); // 0x135 PushV
	var_248_object = var_1_object; // 0x136 MovT
	func_1643(var_247_bool, var_248_object); // 0x137 NEW_2
	if(var_247_bool == 0) goto Label_319; // 0x139 JumpB
	var_249_int = 539764; // 0x13a PushI
	var_250_int = 41717; // 0x13b PushI
	var_251_int = 41716; // 0x13c PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x13d TObjFunc
	
Label_319:
	var_252_bool = 0; var_253_object = Obj(); // 0x13f PushV
	var_253_object = var_1_object; // 0x140 MovT
	func_1633(var_252_bool, var_253_object); // 0x141 NEW_2
	if(var_252_bool == 0) goto Label_329; // 0x143 JumpB
	var_269_int = 539767; // 0x144 PushI
	var_270_int = 41720; // 0x145 PushI
	var_271_int = 41719; // 0x146 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x147 TObjFunc
	
Label_329:
	var_272_bool = 0; var_273_object = Obj(); // 0x149 PushV
	var_273_object = var_1_object; // 0x14a MovT
	func_1653(var_272_bool, var_273_object); // 0x14b NEW_2
	if(var_272_bool == 0) goto Label_339; // 0x14d JumpB
	var_289_int = 539770; // 0x14e PushI
	var_290_int = 41723; // 0x14f PushI
	var_291_int = 41722; // 0x150 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x151 TObjFunc
	
Label_339:
	var_292_int = 539773; // 0x153 PushI
	var_293_int = -1; // 0x154 PushI
	var_294_int = 41725; // 0x155 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x156 TObjFunc
	var_295_int = 541091; // 0x158 PushI
	var_296_int = -1; // 0x159 PushI
	var_297_int = 43200; // 0x15a PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x15b TObjFunc
	goto Label_352; // 0x15d Jump
	
Label_352:
	var_298_bool = 0; // 0x160 PushV
	func_1552(var_298_bool); // 0x161 NEW_2
	if(var_298_bool == 0) goto Label_367; // 0x163 JumpB
	
Label_356:
	lshWaitForAnimEnd(); // 0x164 Func
	var_299_string = var_3_string; // 0x166 PushT
	if(var_299_string == 0) goto Label_361; // 0x167 JumpB
	goto Label_366; // 0x168 Jump
	
Label_366:
	goto Label_381; // 0x16e Jump
	
Label_381:
	return 0; // 0x17d Return
	
Label_361:
	var_300_string = ""; // 0x169 PushV
	var_300_string = var_2_object; // 0x16a MovT
	func_1343(var_300_string); // 0x16b NEW_2
	goto Label_356; // 0x16d Jump
	
Label_367:
	var_311_string = "all"; // 0x16f PushS
	var_312_string = "idle"; // 0x170 PushS
	PlayAnimation(var_311_string, var_312_string); // 0x171 Func
	
Label_371:
	WaitForAnimEnd(); // 0x173 Func
	var_313_string = var_3_string; // 0x175 PushT
	if(var_313_string == 0) goto Label_376; // 0x176 JumpB
	goto Label_381; // 0x177 Jump
	
Label_376:
	var_314_string = "all"; // 0x178 PushS
	var_315_string = "idle"; // 0x179 PushS
	PlayAnimation(var_314_string, var_315_string); // 0x17a Func
	goto Label_371; // 0x17c Jump
}


func_1819(var_125_int)
{
	var_126_int = 0; var_127_int = 0; // 0x71b PushV
	var_128_int = 0; // 0x71c PushV
	func_1796(var_128_int); // 0x71d NEW_2
	var_127_int = var_128_int; // 0x71e Mov
	var_132_string = "k2system_burah_state"; // 0x720 PushS
	var_133_int = var_132_string + var_127_int; // 0x721 Add
	SetVariable(var_133_int, var_125_int); // 0x722 Func
	return 2; // 0x724 Return
}


func_1055(var_81_bool, var_82_object, var_83_string)
{
	var_84_bool = 0; var_85_bool = 0; // 0x41f PushV
	var_86_string = "HasProperty"; // 0x420 PushS
	var_87_int = 2; // 0x421 PushI
	var_88_bool = IsFuncExist(var_82_object, var_86_string, var_87_int); // 0x422 FuncExist
	var_89_bool = var_88_bool == 0; // 0x423 Not
	if(var_89_bool == 0) goto Label_1063; // 0x424 JumpB
	var_81_bool = 0; // 0x425 MovB
	return 2; // 0x426 Return
	
Label_1063:
	HasProperty(var_83_string, var_85_bool); // 0x427 ObjFunc
	var_81_bool = var_85_bool; // 0x429 Mov
	return 2; // 0x42a Return
}


func_1568()
{
	var_172_string = "playsound"; // 0x621 PushS
	var_173_string = "givemoney"; // 0x622 PushS
	TriggerWorld(var_172_string, var_173_string); // 0x623 Func
	return 0; // 0x625 Return
}


func_1829(var_232_int)
{
	var_233_int = 0; var_234_int = 0; var_235_int = 0; var_236_int = 0; // 0x725 PushV
	var_237_int = 0; // 0x726 PushV
	func_1802(var_237_int); // 0x727 NEW_2
	var_235_int = var_237_int; // 0x728 Mov
	var_241_string = "k2system_danko_state"; // 0x72a PushS
	var_242_int = var_241_string + var_235_int; // 0x72b Add
	GetVariable(var_242_int, var_236_int); // 0x72c Func
	var_232_int = var_236_int; // 0x72e Mov
	return 4; // 0x72f Return
}


func_1574()
{
	func_1871(); // 0x628 NEW_2
	return 0; // 0x62a Return
}


func_809(var_37_bool)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x329 PushV
	var_40_string = "player"; // 0x32a PushS
	FindActor(var_39_object, var_40_string); // 0x32b Func
	var_41_bool = var_39_object == 0; // 0x32d Not
	if(var_41_bool == 0) goto Label_817; // 0x32e JumpB
	var_37_bool = 0; // 0x32f MovB
	return 2; // 0x330 Return
	
Label_817:
	var_42_bool = 0; var_43_object = Obj(); // 0x331 PushV
	var_43_object = var_39_object; // 0x332 Mov
	func_1106(var_43_object); // 0x333 NEW_2
	var_37_bool = var_42_bool; // 0x334 Mov
	return 2; // 0x336 Return
}


func_1579()
{
	func_1879(); // 0x62d NEW_2
	return 0; // 0x62f Return
}


func_1067(var_73_bool, var_74_object, var_75_string, var_76_float, var_77_float, var_78_float)
{
	var_79_float = 0; var_80_float = 0; // 0x42b PushV
	var_81_bool = 0; var_82_object = Obj(); var_83_string = ""; // 0x42c PushV
	var_82_object = var_74_object; // 0x42d Mov
	var_83_string = var_75_string; // 0x42e Mov
	func_1055(var_81_bool, var_82_object, var_83_string); // 0x42f NEW_2
	var_90_bool = var_81_bool == 0; // 0x431 Not
	if(var_90_bool == 0) goto Label_1077; // 0x432 JumpB
	var_73_bool = 0; // 0x433 MovB
	return 2; // 0x434 Return
	
Label_1077:
	GetProperty(var_75_string, var_80_float); // 0x435 ObjFunc
	var_91_float = 0; var_92_float = 0; var_93_float = 0; var_94_float = 0; // 0x437 PushV
	var_92_float = var_80_float + var_76_float; // 0x438 Add2
	var_93_float = var_77_float; // 0x439 Mov
	var_94_float = var_78_float; // 0x43a Mov
	func_1412(var_91_float, var_92_float, var_93_float, var_94_float); // 0x43b NEW_2
	SetProperty(var_75_string, var_91_float); // 0x43d ObjFunc
	var_73_bool = 1; // 0x43f MovB
	return 2; // 0x440 Return
}


func_1584()
{
	func_1893(); // 0x632 NEW_2
	return 0; // 0x634 Return
}


func_1840(var_43_int)
{
	var_44_int = 0; var_45_int = 0; // 0x730 PushV
	var_46_int = 0; // 0x731 PushV
	func_1802(var_46_int); // 0x732 NEW_2
	var_45_int = var_46_int; // 0x733 Mov
	var_50_string = "k2system_danko_state"; // 0x735 PushS
	var_51_int = var_50_string + var_45_int; // 0x736 Add
	SetVariable(var_51_int, var_43_int); // 0x737 Func
	return 2; // 0x739 Return
}


func_1589()
{
	func_1913(); // 0x637 NEW_2
	return 0; // 0x639 Return
}


func_824(var_0_object)
{
	var_89_float = GetByIndex(var_0_object, 0); // 0x338 PushE
	var_90_float = GetByIndex(var_0_object, 2); // 0x339 PushE
	RotateAsync(var_89_float, var_90_float); // 0x33a Func
	return 0; // 0x33c Return
}


func_1594()
{
	func_1784(); // 0x63c NEW_2
	return 0; // 0x63e Return
}


func_1850(var_277_int)
{
	var_278_int = 0; var_279_int = 0; var_280_int = 0; var_281_int = 0; // 0x73a PushV
	var_282_int = 0; // 0x73b PushV
	func_1790(var_282_int); // 0x73c NEW_2
	var_280_int = var_282_int; // 0x73d Mov
	var_286_string = "k2system_klara_state"; // 0x73f PushS
	var_287_int = var_286_string + var_280_int; // 0x740 Add
	GetVariable(var_287_int, var_281_int); // 0x741 Func
	var_277_int = var_281_int; // 0x743 Mov
	return 4; // 0x744 Return
}


func_829(var_20_bool)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; // 0x33d PushV
	var_25_string = "player"; // 0x33e PushS
	FindActor(var_23_object, var_25_string); // 0x33f Func
	var_26_bool = var_23_object == 0; // 0x341 Not
	if(var_26_bool == 0) goto Label_837; // 0x342 JumpB
	var_20_bool = 0; // 0x343 MovB
	return 4; // 0x344 Return
	
Label_837:
	var_27_float = 0; var_28_object = Obj(); // 0x345 PushV
	var_28_object = var_23_object; // 0x346 Mov
	func_1047(var_28_object); // 0x347 NEW_2
	var_35_float = 90000.0; // 0x349 PushF
	var_36_bool = var_27_float > var_35_float; // 0x34a GT
	if(var_36_bool == 0) goto Label_846; // 0x34b JumpB
	var_20_bool = 0; // 0x34c MovB
	return 4; // 0x34d Return
	
Label_846:
	CanSee(var_24_bool, var_23_object); // 0x34e Func
	var_20_bool = var_24_bool; // 0x350 Mov
	return 4; // 0x351 Return
}


func_1599()
{
	func_1778(); // 0x641 NEW_2
	return 0; // 0x643 Return
}


func_1343(var_300_string)
{
	var_301_bool = 0; var_302_float = 0; var_303_float = 0; var_304_bool = 0; var_305_float = 0; var_306_float = 0; // 0x53f PushV
	lshHasAnimation(var_304_bool, var_300_string); // 0x540 Func
	var_307_bool = var_304_bool; // 0x542 Push
	if(var_307_bool == 0) goto Label_1354; // 0x543 JumpB
	lshGetAnimTimes(var_300_string, var_305_float, var_306_float); // 0x544 Func
	var_308_bool = 0; // 0x546 PushB
	lshPlayAnimation(var_305_float, var_306_float, var_308_bool); // 0x547 Func
	goto Label_1358; // 0x549 Jump
	
Label_1358:
	return 6; // 0x54e Return
	
Label_1354:
	var_309_string = "Can't find lsh animation : "; // 0x54a PushS
	var_310_int = var_309_string + var_300_string; // 0x54b Add
	Trace(var_310_int); // 0x54c Func
}


func_1089(var_157_string, var_158_int)
{
	var_159_int = 0; var_160_int = 0; // 0x441 PushV
	GetProperty(var_157_string, var_160_int); // 0x442 ObjFunc
	var_161_int = var_160_int + var_158_int; // 0x444 Add
	SetProperty(var_157_string, var_161_int); // 0x445 ObjFunc
	return 2; // 0x447 Return
}


func_1604(var_146_object)
{
	var_148_int = 0; var_149_int = 0; // 0x644 PushV
	var_150_int = 1000; // 0x645 PushI
	irand(var_149_int, var_150_int); // 0x646 Func
	var_151_object = Obj(); var_152_int = 0; // 0x648 PushV
	var_151_object = var_146_object; // 0x649 Mov
	var_153_int = 3000; // 0x64a PushI
	var_152_int = var_149_int + var_153_int; // 0x64b Add2
	func_1435(var_151_object, var_152_int); // 0x64c NEW_2
	return 2; // 0x64e Return
}


func_1861(var_178_int)
{
	var_179_int = 0; var_180_int = 0; // 0x745 PushV
	var_181_int = 0; // 0x746 PushV
	func_1790(var_181_int); // 0x747 NEW_2
	var_180_int = var_181_int; // 0x748 Mov
	var_185_string = "k2system_klara_state"; // 0x74a PushS
	var_186_int = var_185_string + var_180_int; // 0x74b Add
	SetVariable(var_186_int, var_178_int); // 0x74c Func
	return 2; // 0x74e Return
}


func_1096(var_20_bool, var_21_cvector)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; // 0x448 PushV
	GetPosition(var_25_cvector); // 0x449 Func
	var_26_cvector = var_21_cvector - var_25_cvector; // 0x44b Sub2
	var_28_float = GetByIndex(var_26_cvector, 0); // 0x44c PushE
	var_29_float = GetByIndex(var_26_cvector, 2); // 0x44d PushE
	Rotate(var_28_float, var_29_float, var_27_bool); // 0x44e Func
	var_20_bool = var_27_bool; // 0x450 Mov
	return 6; // 0x451 Return
}


func_1615(var_187_object)
{
	var_189_int = 0; var_190_int = 0; // 0x64f PushV
	var_191_int = 1000; // 0x650 PushI
	irand(var_190_int, var_191_int); // 0x651 Func
	var_192_object = Obj(); var_193_int = 0; // 0x653 PushV
	var_192_object = var_187_object; // 0x654 Mov
	var_194_int = 4000; // 0x655 PushI
	var_193_int = var_190_int + var_194_int; // 0x656 Add2
	func_1435(var_192_object, var_193_int); // 0x657 NEW_2
	return 2; // 0x659 Return
}


func_1359(var_213_string, var_214_bool)
{
	var_217_bool = 0; var_218_float = 0; var_219_float = 0; var_220_bool = 0; var_221_float = 0; var_222_float = 0; // 0x54f PushV
	lshHasAnimation(var_220_bool, var_213_string); // 0x550 Func
	var_223_bool = var_220_bool; // 0x552 Push
	if(var_223_bool == 0) goto Label_1369; // 0x553 JumpB
	lshGetAnimTimes(var_213_string, var_221_float, var_222_float); // 0x554 Func
	lshPlayAnimation(var_221_float, var_222_float, var_214_bool); // 0x556 Func
	goto Label_1373; // 0x558 Jump
	
Label_1373:
	return 6; // 0x55d Return
	
Label_1369:
	var_224_string = "Can't find lsh animation : "; // 0x559 PushS
	var_225_int = var_224_string + var_213_string; // 0x55a Add
	Trace(var_225_int); // 0x55b Func
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
	var_363_int = 539066; // 0x5b PushI
	SetMessage(var_363_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_364_int = 539067; // 0x60 PushI
	var_365_int = -1; // 0x61 PushI
	var_366_int = 41015; // 0x62 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x63 TObjFunc
	var_367_int = 541074; // 0x65 PushI
	var_368_int = -1; // 0x66 PushI
	var_369_int = 43179; // 0x67 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_370_bool = 0; // 0x6d PushV
	func_1552(var_370_bool); // 0x6e NEW_2
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
	func_1343(var_372_string); // 0x78 NEW_2
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


func_1106(var_16_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); // 0x452 PushV
	GetPosition(var_19_cvector); // 0x453 ObjFunc
	var_20_bool = 0; var_21_cvector = CVector(0,0,0); // 0x455 PushV
	var_21_cvector = var_19_cvector; // 0x456 Mov
	func_1096(var_20_bool, var_21_cvector); // 0x457 NEW_2
	var_16_bool = var_20_bool; // 0x458 Mov
	return 2; // 0x45a Return
}


func_1871()
{
	func_1694(); // 0x750 NEW_2
	var_43_int = 0; // 0x752 PushV
	var_43_int = 2; // 0x753 MovI
	func_1840(var_43_int); // 0x754 NEW_2
	return 0; // 0x756 Return
}


func_851()
{
	var_382_float = 0; var_383_float = 0; // 0x353 PushV
	var_384_int = 8; // 0x354 PushI
	var_385_int = 16; // 0x355 PushI
	rand(var_383_float, var_384_int, var_385_int); // 0x356 Func
	var_386_int = 10; // 0x358 PushI
	SetTimer(var_386_int, var_383_float); // 0x359 Func
	return 2; // 0x35b Return
}


func_1879()
{
	func_1707(); // 0x758 NEW_2
	var_112_int = 0; // 0x75a PushV
	var_112_int = 1; // 0x75b MovI
	func_1840(var_112_int); // 0x75c NEW_2
	return 0; // 0x75e Return
}


func_1626(var_197_object)
{
	var_199_bool = 0; var_200_object = Obj(); var_201_float = 0; // 0x65b PushV
	var_200_object = var_197_object; // 0x65c Mov
	var_201_float = -0.3; // 0x65d MovF
	func_1454(var_199_bool, var_200_object, var_201_float); // 0x65e NEW_2
	return 0; // 0x660 Return
}


func_1115(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x45b PushV
	IsLoaded(var_14_bool); // 0x45c Func
	var_12_bool = var_14_bool; // 0x45e Mov
	return 2; // 0x45f Return
}


func_860()
{
	var_381_int = 10; // 0x35c PushI
	KillTimer(var_381_int); // 0x35d Func
	return 0; // 0x35f Return
}


func_1374(var_146_bool, var_147_string)
{
	var_148_bool = 0; var_149_bool = 0; // 0x55e PushV
	var_150_bool = 0; // 0x55f PushV
	func_1552(var_150_bool); // 0x560 NEW_2
	if(var_150_bool == 0) goto Label_1387; // 0x562 JumpB
	lshHasSpeech(var_149_bool, var_147_string); // 0x563 Func
	var_151_bool = var_149_bool; // 0x565 Push
	if(var_151_bool == 0) goto Label_1387; // 0x566 JumpB
	lshPlaySpeech(var_147_string); // 0x567 Func
	var_146_bool = 1; // 0x569 MovB
	return 2; // 0x56a Return
	
Label_1387:
	var_146_bool = 0; // 0x56b MovB
	return 2; // 0x56c Return
}


func_1887(var_231_bool)
{
	var_232_int = 0; // 0x75f PushV
	func_1829(var_232_int); // 0x760 NEW_2
	var_243_int = 0; // 0x762 PushI
	var_231_bool = var_232_int == var_243_int; // 0x763 Eq2
	return 0; // 0x764 Return
}


func_1120(var_52_bool, var_54_float)
{
	var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_bool = 0; var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; var_72_bool = 0; // 0x460 PushV
	GetPosition(var_65_cvector); // 0x461 ObjFunc
	GetEyesHeight(var_64_float); // 0x463 ObjFunc
	var_73_float = GetByIndex(var_65_cvector, 1); // 0x465 PushE
	var_73_float = var_73_float + var_64_float; // 0x466 Add2
	SetByIndex(var_65_cvector, 1) = var_73_float; // 0x467 PopE
	GetPosition(var_66_cvector); // 0x468 Func
	GetEyesHeight(var_64_float); // 0x46a Func
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x46c PushE
	var_74_float = var_74_float + var_64_float; // 0x46d Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x46e PopE
	var_67_cvector = var_65_cvector - var_66_cvector; // 0x46f Sub2
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x470 PushE
	var_75_float = 0; // 0x471 MovI
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x472 PopE
	var_76_int = var_67_cvector | var_67_cvector; // 0x473 Or
	var_77_float = sqrt(var_76_int); // 0x474 Sqrt
	var_67_cvector = var_67_cvector / var_67_cvector; // 0x475 Div2
	var_68_cvector = -var_67_cvector; // 0x476 Neg2
	var_78_float = var_67_cvector * var_54_float; // 0x477 Mult
	var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); // 0x478 PushV
	var_81_cvector = CVector(0.0, 1.0, 0.0); // 0x479 PushVec
	var_80_cvector = var_68_cvector ^ var_81_cvector; // 0x47a Xor2
	func_1402(var_79_cvector, var_80_cvector); // 0x47b NEW_2
	var_87_int = 25; // 0x47d PushI
	var_88_float = var_79_cvector * var_87_int; // 0x47e Mult
	var_89_int = var_78_float + var_88_float; // 0x47f Add
	var_90_cvector = CVector(0.0, 10.0, 0.0); // 0x480 PushVec
	var_69_cvector = var_89_int - var_90_cvector; // 0x481 Sub2
	var_70_cvector = var_66_cvector + var_69_cvector; // 0x482 Add2
	IsOverrideActive(var_71_bool); // 0x483 Func
	var_91_bool = var_71_bool; // 0x485 Push
	if(var_91_bool == 0) goto Label_1161; // 0x486 JumpB
	var_52_bool = 0; // 0x487 MovB
	return 18; // 0x488 Return
	
Label_1161:
	StopWorld(); // 0x489 Func
	CameraTransit(var_70_cvector, var_68_cvector); // 0x48b Func
	var_92_float = GetByIndex(var_69_cvector, 0); // 0x48d PushE
	var_93_float = GetByIndex(var_69_cvector, 2); // 0x48e PushE
	Rotate(var_92_float, var_93_float); // 0x48f Func
	var_94_bool = 0; // 0x491 PushV
	func_1552(var_94_bool); // 0x492 NEW_2
	if(var_94_bool == 0) goto Label_1174; // 0x494 JumpB
	goto Label_1182; // 0x495 Jump
	
Label_1182:
	CameraWaitForPlayFinish(); // 0x49e Func
	ResumeWorld(); // 0x4a0 Func
	var_52_bool = 1; // 0x4a2 MovB
	return 18; // 0x4a3 Return
	
Label_1174:
	var_95_string = "head"; // 0x496 PushS
	HasAnimationTrack(var_72_bool, var_95_string); // 0x497 Func
	var_96_bool = var_72_bool; // 0x499 Push
	if(var_96_bool == 0) goto Label_1182; // 0x49a JumpB
	var_97_string = "head"; // 0x49b PushS
	LookAsyncCamera(var_97_string); // 0x49c Func
}


func_1633(var_252_bool, var_253_object)
{
	var_254_bool = 0; var_255_object = Obj(); // 0x662 PushV
	var_255_object = var_253_object; // 0x663 Mov
	func_1663(var_255_object); // 0x664 NEW_2
	if(var_254_bool == 0) goto Label_1641; // 0x666 JumpB
	var_252_bool = 1; // 0x667 MovB
	return 0; // 0x668 Return
	
Label_1641:
	var_252_bool = 0; // 0x669 MovB
	return 0; // 0x66a Return
}


func_1893()
{
	func_1681(); // 0x766 NEW_2
	var_125_int = 0; // 0x768 PushV
	var_125_int = 3; // 0x769 MovI
	func_1819(var_125_int); // 0x76a NEW_2
	return 0; // 0x76c Return
}


func_1643(var_227_bool, var_228_object)
{
	var_229_bool = 0; var_230_object = Obj(); // 0x66c PushV
	var_230_object = var_228_object; // 0x66d Mov
	func_1669(var_230_object); // 0x66e NEW_2
	if(var_229_bool == 0) goto Label_1651; // 0x670 JumpB
	var_227_bool = 1; // 0x671 MovB
	return 0; // 0x672 Return
	
Label_1651:
	var_227_bool = 0; // 0x673 MovB
	return 0; // 0x674 Return
}


func_1389()
{
	var_15_bool = 0; // 0x56d PushV
	func_1552(var_15_bool); // 0x56e NEW_2
	if(var_15_bool == 0) goto Label_1395; // 0x570 JumpB
	lshStopSpeech(); // 0x571 Func
	
Label_1395:
	return 0; // 0x573 Return
}


func_1901(var_256_bool)
{
	var_257_int = 0; // 0x76d PushV
	func_1808(var_257_int); // 0x76e NEW_2
	var_268_int = 1; // 0x770 PushI
	var_256_bool = var_257_int == var_268_int; // 0x771 Eq2
	return 0; // 0x772 Return
}


func_1907(var_276_bool)
{
	var_277_int = 0; // 0x773 PushV
	func_1850(var_277_int); // 0x774 NEW_2
	var_288_int = 1; // 0x776 PushI
	var_276_bool = var_277_int == var_288_int; // 0x777 Eq2
	return 0; // 0x778 Return
}


func_1396(var_114_object)
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x574 PushV
	self(var_116_object); // 0x575 Func
	var_114_object = var_116_object; // 0x577 Mov
	return 2; // 0x578 Return
}


func_1653(var_272_bool, var_273_object)
{
	var_274_bool = 0; var_275_object = Obj(); // 0x676 PushV
	var_275_object = var_273_object; // 0x677 Mov
	func_1675(var_275_object); // 0x678 NEW_2
	if(var_274_bool == 0) goto Label_1661; // 0x67a JumpB
	var_272_bool = 1; // 0x67b MovB
	return 0; // 0x67c Return
	
Label_1661:
	var_272_bool = 0; // 0x67d MovB
	return 0; // 0x67e Return
}


func_1913()
{
	var_178_int = 0; // 0x779 PushV
	var_178_int = 3; // 0x77a MovI
	func_1861(var_178_int); // 0x77b NEW_2
	return 0; // 0x77d Return
}


func_1402(var_79_cvector, var_80_cvector)
{
	var_82_float = 0; var_83_float = 0; // 0x57a PushV
	var_84_int = var_80_cvector | var_80_cvector; // 0x57b Or
	var_83_float = sqrt(var_84_int); // 0x57c Sqrt2
	var_85_float = 0.0; // 0x57d PushF
	var_86_bool = var_83_float < var_85_float; // 0x57e LT
	if(var_86_bool == 0) goto Label_1410; // 0x57f JumpB
	var_79_cvector = CVector(0.0, 0.0, 0.0); // 0x580 MovV
	return 2; // 0x581 Return
	
Label_1410:
	var_79_cvector = var_80_cvector / var_80_cvector; // 0x582 Div2
	return 2; // 0x583 Return
}


func_1918(var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x77e PushV
	var_33_string = "day"; // 0x77f PushS
	GetProperty(var_33_string, var_32_int); // 0x780 Func
	var_34_int = 0; // 0x782 PushV
	func_1511(var_34_int); // 0x783 NEW_2
	var_40_bool = var_32_int == var_34_int; // 0x785 Eq
	if(var_40_bool == 0) goto Label_1934; // 0x786 JumpB
	var_41_int = 0; var_42_object = Obj(); // 0x787 PushV
	var_42_object = var_30_object; // 0x788 Mov
	TaskCall(2); // 0x789 TaskCall
	func_203(var_43_object, var_41_int, var_42_object); // 0x78a NEW_2
	TaskReturn(); // 0x78b TaskReturn
	goto Label_1940; // 0x78d Jump
	
Label_1940:
	return 2; // 0x794 Return
	
Label_1934:
	var_324_int = 0; var_325_object = Obj(); // 0x78e PushV
	var_325_object = var_30_object; // 0x78f Mov
	TaskCall(0); // 0x790 TaskCall
	func_0(var_326_object, var_324_int, var_325_object); // 0x791 NEW_2
	TaskReturn(); // 0x792 TaskReturn
}


func_1663(var_254_bool)
{
	var_256_bool = 0; // 0x680 PushV
	func_1901(var_256_bool); // 0x681 NEW_2
	var_254_bool = var_256_bool; // 0x682 Mov
	return 0; // 0x684 Return
}


func_382(var_2_object, var_209_string)
{
	var_210_bool = 0; // 0x17f PushV
	func_1552(var_210_bool); // 0x180 NEW_2
	var_211_bool = var_210_bool == 0; // 0x182 Not
	if(var_211_bool == 0) goto Label_389; // 0x183 JumpB
	return 0; // 0x184 Return
	
Label_389:
	var_212_bool = var_209_string == var_2_object; // 0x185 Eq
	if(var_212_bool == 0) goto Label_392; // 0x186 JumpB
	return 0; // 0x187 Return
	
Label_392:
	var_213_string = ""; var_214_bool = 0; // 0x188 PushV
	var_213_string = var_209_string; // 0x189 Mov
	var_215_string = ""; // 0x18a PushS
	var_216_bool = var_209_string == var_215_string; // 0x18b Eq
	if(var_216_bool == 0) goto Label_399; // 0x18c JumpB
	var_214_bool = 0; // 0x18d MovB
	goto Label_400; // 0x18e Jump
	
Label_400:
	func_1359(var_213_string, var_214_bool); // 0x190 NEW_2
	var_2_object = var_209_string; // 0x192 TMov
	return 0; // 0x193 Return
	
Label_399:
	var_214_bool = 1; // 0x18f MovB
}


func_1412(var_91_float, var_92_float, var_93_float, var_94_float)
{
	var_95_bool = var_92_float < var_93_float; // 0x585 LT
	if(var_95_bool == 0) goto Label_1417; // 0x586 JumpB
	var_91_float = var_93_float; // 0x587 Mov
	return 0; // 0x588 Return
	
Label_1417:
	var_96_bool = var_92_float > var_94_float; // 0x589 GT
	if(var_96_bool == 0) goto Label_1421; // 0x58a JumpB
	var_91_float = var_94_float; // 0x58b Mov
	return 0; // 0x58c Return
	
Label_1421:
	var_91_float = var_92_float; // 0x58d Mov
	return 0; // 0x58e Return
}


func_1669(var_229_bool)
{
	var_231_bool = 0; // 0x686 PushV
	func_1887(var_231_bool); // 0x687 NEW_2
	var_229_bool = var_231_bool; // 0x688 Mov
	return 0; // 0x68a Return
}


func_902()
{
	func_1042(); // 0x387 NEW_2
	func_860(); // 0x38a NEW_2
	lshStopSpeech(); // 0x38c Func
	lshStopAnimation(); // 0x38e Func
	StopAsync(); // 0x390 Func
	Hold(); // 0x392 Func
	return 0; // 0x394 Return
}


func_139(var_2_object, var_355_string)
{
	var_356_bool = 0; // 0x8c PushV
	func_1552(var_356_bool); // 0x8d NEW_2
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
	func_1359(var_359_string, var_360_bool); // 0x9d NEW_2
	var_2_object = var_355_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_360_bool = 1; // 0x9c MovB
}


func_1675(var_274_bool)
{
	var_276_bool = 0; // 0x68c PushV
	func_1907(var_276_bool); // 0x68d NEW_2
	var_274_bool = var_276_bool; // 0x68e Mov
	return 0; // 0x690 Return
}


func_1423(var_165_int, var_166_int)
{
	var_167_object = Obj(); var_168_object = Obj(); // 0x58f PushV
	CreateIntVector(var_168_object); // 0x590 Func
	add(var_165_int); // 0x592 ObjFunc
	add(var_166_int); // 0x594 ObjFunc
	var_169_int = 3; // 0x596 PushI
	SendWorldWndMessage(var_169_int, var_168_object); // 0x597 Func
	return 2; // 0x599 Return
}


func_1681()
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x691 PushV
	var_119_int = 755; // 0x692 PushI
	var_120_int = 2; // 0x693 PushI
	var_121_int = 539740; // 0x694 PushI
	CreateDiaryEntry(var_118_object, var_119_int, var_120_int, var_121_int); // 0x695 Func
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; // 0x697 PushV
	var_123_object = var_118_object; // 0x698 Mov
	var_124_int = 751; // 0x699 MovI
	func_1733(var_122_bool, var_123_object, var_124_int); // 0x69a NEW_2
	return 2; // 0x69c Return
}


func_917()
{
	StopGroup0(); // 0x395 Func
	func_860(); // 0x398 NEW_2
	var_13_string = ""; // 0x39a PushV
	var_13_string = "Neutral"; // 0x39b MovS
	func_1343(var_13_string); // 0x39c NEW_2
	func_851(); // 0x39f NEW_2
	return 0; // 0x3a1 Return
}


func_1435(var_151_object, var_152_int)
{
	var_154_int = 0; var_155_int = 0; // 0x59b PushV
	var_156_object = Obj(); var_157_string = ""; var_158_int = 0; // 0x59c PushV
	var_156_object = var_151_object; // 0x59d Mov
	var_157_string = "money"; // 0x59e MovS
	var_158_int = var_152_int; // 0x59f Mov
	func_1089(var_157_string, var_158_int); // 0x5a0 NEW_2
	var_162_int = 0; // 0x5a2 PushI
	var_163_bool = var_152_int > var_162_int; // 0x5a3 GT
	if(var_163_bool == 0) goto Label_1453; // 0x5a4 JumpB
	var_164_string = "Money"; // 0x5a5 PushS
	GetInvItemByName(var_155_int, var_164_string); // 0x5a6 Func
	var_165_int = 0; var_166_int = 0; // 0x5a8 PushV
	var_165_int = var_155_int; // 0x5a9 Mov
	var_166_int = var_152_int; // 0x5aa Mov
	func_1423(var_165_int, var_166_int); // 0x5ab NEW_2
	
Label_1453:
	return 2; // 0x5ad Return
}


func_1694()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x69e PushV
	var_22_int = 759; // 0x69f PushI
	var_23_int = 2; // 0x6a0 PushI
	var_24_int = 539744; // 0x6a1 PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x6a2 Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x6a4 PushV
	var_26_object = var_21_object; // 0x6a5 Mov
	var_27_int = 757; // 0x6a6 MovI
	func_1733(var_25_bool, var_26_object, var_27_int); // 0x6a7 NEW_2
	return 2; // 0x6a9 Return
}


func_1188()
{
	var_318_bool = 0; var_319_bool = 0; // 0x4a4 PushV
	CameraSwitchToNormal(); // 0x4a5 Func
	var_320_bool = 0; // 0x4a7 PushV
	func_1552(var_320_bool); // 0x4a8 NEW_2
	if(var_320_bool == 0) goto Label_1196; // 0x4aa JumpB
	goto Label_1204; // 0x4ab Jump
	
Label_1204:
	return 2; // 0x4b4 Return
	
Label_1196:
	var_321_string = "head"; // 0x4ac PushS
	HasAnimationTrack(var_319_bool, var_321_string); // 0x4ad Func
	var_322_bool = var_319_bool; // 0x4af Push
	if(var_322_bool == 0) goto Label_1204; // 0x4b0 JumpB
	var_323_string = "head"; // 0x4b1 PushS
	UnlookAsync(var_323_string); // 0x4b2 Func
}


func_1707()
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x6ab PushV
	var_106_int = 760; // 0x6ac PushI
	var_107_int = 2; // 0x6ad PushI
	var_108_int = 539745; // 0x6ae PushI
	CreateDiaryEntry(var_105_object, var_106_int, var_107_int, var_108_int); // 0x6af Func
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; // 0x6b1 PushV
	var_110_object = var_105_object; // 0x6b2 Mov
	var_111_int = 757; // 0x6b3 MovI
	func_1733(var_109_bool, var_110_object, var_111_int); // 0x6b4 NEW_2
	return 2; // 0x6b6 Return
}


func_1454(var_62_bool, var_63_object, var_64_float)
{
	var_65_bool = var_63_object == 0; // 0x5af Not
	if(var_65_bool == 0) goto Label_1459; // 0x5b0 JumpB
	var_62_bool = 0; // 0x5b1 MovB
	return 0; // 0x5b2 Return
	
Label_1459:
	var_66_int = 0; // 0x5b3 PushI
	var_67_bool = var_64_float > var_66_int; // 0x5b4 GT
	if(var_67_bool == 0) goto Label_1466; // 0x5b5 JumpB
	var_68_int = 8; // 0x5b6 PushI
	SendWorldWndMessage(var_68_int); // 0x5b7 Func
	goto Label_1475; // 0x5b9 Jump
	
Label_1475:
	var_69_float = 0; // 0x5c3 PushV
	var_69_float = var_64_float; // 0x5c4 Mov
	func_1489(var_69_float); // 0x5c5 NEW_2
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; var_76_float = 0; var_77_float = 0; var_78_float = 0; // 0x5c7 PushV
	var_74_object = var_63_object; // 0x5c8 Mov
	var_75_string = "reputation"; // 0x5c9 MovS
	var_76_float = var_64_float; // 0x5ca Mov
	var_77_float = 0; // 0x5cb MovI
	var_78_float = 1; // 0x5cc MovI
	func_1067(var_73_bool, var_74_object, var_75_string, var_76_float, var_77_float, var_78_float); // 0x5cd NEW_2
	var_62_bool = 1; // 0x5cf MovB
	return 0; // 0x5d0 Return
	
Label_1466:
	var_97_int = 0; // 0x5ba PushI
	var_98_bool = var_64_float < var_97_int; // 0x5bb LT
	if(var_98_bool == 0) goto Label_1473; // 0x5bc JumpB
	var_99_int = 9; // 0x5bd PushI
	SendWorldWndMessage(var_99_int); // 0x5be Func
	goto Label_1475; // 0x5c0 Jump
	
Label_1473:
	var_62_bool = 0; // 0x5c1 MovB
	return 0; // 0x5c2 Return
}


func_1205(var_112_bool, var_113_object)
{
	var_117_int = 0; var_118_int = 0; var_119_int = 0; var_120_int = 0; // 0x4b5 PushV
	var_121_string = "voice_common"; // 0x4b6 PushS
	GetVariable(var_121_string, var_119_int); // 0x4b7 Func
	var_122_int = var_119_int; // 0x4b9 Push
	if(var_122_int == 0) goto Label_1243; // 0x4ba JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x4bb PushV
	var_124_object = var_113_object; // 0x4bc Mov
	func_1263(var_124_object); // 0x4bd NEW_2
	var_153_bool = var_123_bool == 0; // 0x4bf Not
	if(var_153_bool == 0) goto Label_1225; // 0x4c0 JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x4c1 PushV
	var_155_object = var_113_object; // 0x4c2 Mov
	func_1300(var_155_object); // 0x4c3 NEW_2
	var_184_bool = var_154_bool == 0; // 0x4c5 Not
	if(var_184_bool == 0) goto Label_1225; // 0x4c6 JumpB
	var_112_bool = 0; // 0x4c7 MovB
	return 4; // 0x4c8 Return
	
Label_1225:
	var_185_int = 2; // 0x4c9 PushI
	irand(var_120_int, var_185_int); // 0x4ca Func
	var_186_int = var_120_int; // 0x4cc Push
	if(var_186_int == 0) goto Label_1238; // 0x4cd JumpB
	var_187_string = "voice_common"; // 0x4ce PushS
	var_188_int = 1; // 0x4cf PushI
	var_189_int = var_119_int + var_188_int; // 0x4d0 Add
	var_190_int = 3; // 0x4d1 PushI
	var_191_int = var_189_int / var_190_int; // 0x4d2 Mod
	SetVariable(var_187_string, var_191_int); // 0x4d3 Func
	goto Label_1242; // 0x4d5 Jump
	
Label_1242:
	goto Label_1261; // 0x4da Jump
	
Label_1261:
	var_112_bool = 1; // 0x4ed MovB
	return 4; // 0x4ee Return
	
Label_1238:
	var_192_string = "voice_common"; // 0x4d6 PushS
	var_193_int = 0; // 0x4d7 PushI
	SetVariable(var_192_string, var_193_int); // 0x4d8 Func
	
Label_1243:
	var_194_bool = 0; var_195_object = Obj(); // 0x4db PushV
	var_195_object = var_113_object; // 0x4dc Mov
	func_1300(var_195_object); // 0x4dd NEW_2
	var_196_bool = var_194_bool == 0; // 0x4df Not
	if(var_196_bool == 0) goto Label_1257; // 0x4e0 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x4e1 PushV
	var_198_object = var_113_object; // 0x4e2 Mov
	func_1263(var_198_object); // 0x4e3 NEW_2
	var_199_bool = var_197_bool == 0; // 0x4e5 Not
	if(var_199_bool == 0) goto Label_1257; // 0x4e6 JumpB
	var_112_bool = 0; // 0x4e7 MovB
	return 4; // 0x4e8 Return
	
Label_1257:
	var_200_string = "voice_common"; // 0x4e9 PushS
	var_201_int = 1; // 0x4ea PushI
	SetVariable(var_200_string, var_201_int); // 0x4eb Func
}


func_1720(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x6b8 PushV
	GetDiaryRoot(var_36_object); // 0x6b9 Func
	var_37_bool = var_36_object == 0; // 0x6bb Not
	if(var_37_bool == 0) goto Label_1730; // 0x6bc JumpB
	var_38_string = "Can't retrieve diary root"; // 0x6bd PushS
	Trace(var_38_string); // 0x6be Func
	var_34_object = 0; // 0x6c0 MovB
	return 2; // 0x6c1 Return
	
Label_1730:
	var_34_object = var_36_object; // 0x6c2 Mov
	return 2; // 0x6c3 Return
}


func_1733(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x6c5 PushV
	var_34_object = Obj(); // 0x6c6 PushV
	func_1720(var_34_object); // 0x6c7 NEW_2
	var_31_object = var_34_object; // 0x6c8 Mov
	Find(var_27_int, var_32_object); // 0x6ca ObjFunc
	var_39_bool = var_32_object == 0; // 0x6cc Not
	if(var_39_bool == 0) goto Label_1748; // 0x6cd JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x6ce PushS
	var_41_int = var_40_string + var_27_int; // 0x6cf Add
	Trace(var_41_int); // 0x6d0 Func
	var_25_bool = 0; // 0x6d2 MovB
	return 6; // 0x6d3 Return
	
Label_1748:
	AddChild(var_26_object); // 0x6d4 ObjFunc
	var_42_int = 7; // 0x6d6 PushI
	SendWorldWndMessage(var_42_int); // 0x6d7 Func
	GetCategory(var_33_int); // 0x6d9 ObjFunc
	SetDiarySection(var_33_int); // 0x6db Func
	var_25_bool = 0; // 0x6dd MovB
	return 6; // 0x6de Return
}


func_203(var_0_object, var_41_int, var_42_object)
{
	var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0; // 0xcb PushV
	var_0_object = var_42_object; // 0xcc TMov
	var_52_bool = 0; var_53_object = Obj(); var_54_float = 0; // 0xcd PushV
	var_53_object = var_42_object; // 0xce Mov
	var_54_float = 70.0; // 0xcf MovF
	func_1120(var_53_object, var_54_float); // 0xd0 NEW_2
	var_98_bool = var_52_bool == 0; // 0xd2 Not
	if(var_98_bool == 0) goto Label_214; // 0xd3 JumpB
	var_41_int = -2; // 0xd4 MovI
	return 8; // 0xd5 Return
	
Label_214:
	CreateDialog(var_48_object); // 0xd6 Func
	var_99_int = 0; // 0xd8 PushV
	func_1546(var_99_int); // 0xd9 NEW_2
	SetNPCName(var_99_int); // 0xdb ObjFunc
	var_100_int = 0; // 0xdd PushV
	func_1544(var_100_int); // 0xde NEW_2
	SetNPCDescription(var_100_int); // 0xe0 ObjFunc
	var_101_string = ""; // 0xe2 PushV
	func_1548(var_101_string); // 0xe3 NEW_2
	SetPhoto(var_101_string); // 0xe5 ObjFunc
	var_102_string = ""; // 0xe7 PushV
	func_1550(var_102_string); // 0xe8 NEW_2
	SetPhoto2(var_102_string); // 0xea ObjFunc
	var_103_int = 0; // 0xec PushV
	func_1761(var_103_int); // 0xed NEW_2
	SetPlayerName(var_103_int); // 0xef ObjFunc
	var_50_int = -1; // 0xf1 MovI
	IsOverrideActive(var_49_bool); // 0xf2 Func
	var_111_bool = var_49_bool; // 0xf4 Push
	if(var_111_bool == 0) goto Label_248; // 0xf5 JumpB
	var_41_int = -2; // 0xf6 MovI
	return 8; // 0xf7 Return
	
Label_248:
	DoDialog(var_48_object); // 0xf8 Func
	var_112_bool = 0; var_113_object = Obj(); // 0xfa PushV
	var_114_object = Obj(); // 0xfb PushV
	func_1396(var_114_object); // 0xfc NEW_2
	var_113_object = var_114_object; // 0xfd Mov
	func_1205(var_112_bool, var_113_object); // 0xff NEW_2
	var_202_object = Obj(); var_203_object = Obj(); // 0x101 PushV
	var_202_object = var_42_object; // 0x102 Mov
	var_203_object = var_48_object; // 0x103 Mov
	TaskCall(3); // 0x104 TaskCall
	func_284(var_204_object, var_205_object, var_206_string, var_207_bool, var_202_object, var_203_object); // 0x105 NEW_2
	TaskReturn(); // 0x106 TaskReturn
	IsDialogEnd(var_51_bool); // 0x108 ObjFunc
	
Label_266:
	var_316_bool = var_51_bool == 0; // 0x10a Not
	if(var_316_bool == 0) goto Label_273; // 0x10b JumpB
	sync(); // 0x10c Func
	IsDialogEnd(var_51_bool); // 0x10e ObjFunc
	goto Label_266; // 0x110 Jump
	
Label_273:
	var_317_object = Obj(); // 0x111 PushV
	var_317_object = var_42_object; // 0x112 Mov
	func_1188(); // 0x113 NEW_2
	StopDialog(var_48_object); // 0x115 Func
	GetReturnValue(var_50_int); // 0x117 ObjFunc
	var_41_int = var_50_int; // 0x119 Mov
	return 8; // 0x11a Return
}


func_971()
{
	var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0; // 0x3cb PushV
	WaitForAnimEnd(); // 0x3cc Func
	var_28_bool = 0; // 0x3ce PushV
	func_1115(var_28_bool); // 0x3cf NEW_2
	var_29_bool = var_28_bool == 0; // 0x3d1 Not
	if(var_29_bool == 0) goto Label_980; // 0x3d2 JumpB
	return 12; // 0x3d3 Return
	
Label_980:
	var_30_int = 0; // 0x3d4 PushV
	func_1527(var_30_int); // 0x3d5 NEW_2
	var_22_int = var_30_int; // 0x3d6 Mov
	var_23_int = 0; // 0x3d8 MovI
	
Label_985:
	var_43_bool = 0; // 0x3d9 PushV
	var_43_bool = 0; // 0x3da MovB
	var_44_int = 5; // 0x3db PushI
	var_45_bool = var_23_int < var_44_int; // 0x3dc LT
	if(var_45_bool == 0) goto Label_995; // 0x3dd JumpB
	var_46_bool = 0; // 0x3de PushV
	func_1115(var_46_bool); // 0x3df NEW_2
	if(var_46_bool == 0) goto Label_995; // 0x3e1 JumpB
	var_43_bool = 1; // 0x3e2 MovB
	
Label_995:
	if(var_43_bool == 0) goto Label_1037; // 0x3e3 JumpB
	var_47_bool = var_22_int == 0; // 0x3e4 Not
	if(var_47_bool == 0) goto Label_1005; // 0x3e5 JumpB
	var_48_int = 3; // 0x3e6 PushI
	Sleep(var_48_int, var_24_bool); // 0x3e7 Func
	var_49_bool = var_24_bool == 0; // 0x3e9 Not
	if(var_49_bool == 0) goto Label_1004; // 0x3ea JumpB
	goto Label_1037; // 0x3eb Jump
	
Label_1037:
	ResetAAS(); // 0x40d Func
	return 12; // 0x40f Return
	
Label_1004:
	goto Label_1026; // 0x3ec Jump
	
Label_1026:
	var_50_bool = 0; // 0x402 PushV
	func_1040(var_50_bool); // 0x403 NEW_2
	var_51_bool = var_50_bool == 0; // 0x405 Not
	if(var_51_bool == 0) goto Label_1032; // 0x406 JumpB
	goto Label_1037; // 0x407 Jump
	
Label_1032:
	ResetAAS(); // 0x408 Func
	var_52_int = 1; // 0x40a PushI
	var_23_int = var_23_int + var_52_int; // 0x40b Add2
	goto Label_985; // 0x40c Jump
	
Label_1005:
	irand(var_25_int, var_22_int); // 0x3ed Func
	var_53_int = 5; // 0x3ef PushI
	irand(var_26_int, var_53_int); // 0x3f0 Func
	var_54_int = 0; // 0x3f2 PushI
	var_55_bool = var_26_int != var_54_int; // 0x3f3 Neq
	if(var_55_bool == 0) goto Label_1014; // 0x3f4 JumpB
	var_25_int = 0; // 0x3f5 MovI
	
Label_1014:
	var_56_string = "all"; // 0x3f6 PushS
	var_57_string = ""; var_58_int = 0; // 0x3f7 PushV
	var_58_int = var_25_int; // 0x3f8 Mov
	func_1520(var_57_string, var_58_int); // 0x3f9 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x3fb Func
	WaitForAnimEnd(var_27_bool); // 0x3fd Func
	var_59_bool = var_27_bool == 0; // 0x3ff Not
	if(var_59_bool == 0) goto Label_1026; // 0x400 JumpB
	goto Label_1037; // 0x401 Jump
}


func_1489(var_69_float)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x5d1 PushV
	CreateFloatVector(var_71_object); // 0x5d2 Func
	add(var_69_float); // 0x5d4 ObjFunc
	var_72_int = 16; // 0x5d6 PushI
	SendWorldWndMessage(var_72_int, var_71_object); // 0x5d7 Func
	return 2; // 0x5d9 Return
}


func_1499(var_54_bool, var_55_string, var_56_string)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x5db PushV
	FindActor(var_58_object, var_55_string); // 0x5dc Func
	var_59_bool = var_58_object == 0; // 0x5de NullEq
	if(var_59_bool == 0) goto Label_1506; // 0x5df JumpB
	var_54_bool = 0; // 0x5e0 MovB
	return 2; // 0x5e1 Return
	
Label_1506:
	Trigger(var_58_object, var_56_string); // 0x5e2 Func
	var_54_bool = 1; // 0x5e4 MovB
	return 2; // 0x5e5 Return
}


func_1761(var_103_int)
{
	var_104_int = 0; var_105_int = 0; // 0x6e1 PushV
	var_106_string = "branch"; // 0x6e2 PushS
	GetVariable(var_106_string, var_105_int); // 0x6e3 Func
	var_107_int = 0; // 0x6e5 PushI
	var_108_bool = var_105_int == var_107_int; // 0x6e6 Eq
	if(var_108_bool == 0) goto Label_1771; // 0x6e7 JumpB
	var_103_int = 1; // 0x6e8 MovI
	return 2; // 0x6e9 Return
	
Label_1771:
	var_109_int = 1; // 0x6eb PushI
	var_110_bool = var_105_int == var_109_int; // 0x6ec Eq
	if(var_110_bool == 0) goto Label_1776; // 0x6ed JumpB
	var_103_int = 2; // 0x6ee MovI
	return 2; // 0x6ef Return
	
Label_1776:
	var_103_int = 3; // 0x6f0 MovI
	return 2; // 0x6f1 Return
}


func_1511(var_34_int)
{
	var_35_float = 0; var_36_float = 0; // 0x5e7 PushV
	GetGameTime(var_36_float); // 0x5e8 Func
	var_37_int = 1; // 0x5ea PushI
	var_38_int = 0; // 0x5eb PushV
	var_39_int = 24; // 0x5ec PushI
	var_38_int = var_36_float / var_36_float; // 0x5ed Div2
	var_34_int = var_37_int + var_38_int; // 0x5ee Add2
	return 2; // 0x5ef Return
}


func_1263(var_123_bool)
{
	var_125_string = ""; var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_string = ""; var_130_string = ""; var_131_int = 0; var_132_bool = 0; var_133_int = 0; var_134_string = ""; // 0x4ef PushV
	var_130_string = "c"; // 0x4f0 MovS
	var_131_int = 0; // 0x4f1 MovI
	
Label_1266:
	var_135_int = 1; // 0x4f2 PushI
	if(var_135_int == 0) goto Label_1279; // 0x4f3 JumpB
	var_136_int = 1; // 0x4f4 PushI
	var_137_int = var_131_int + var_136_int; // 0x4f5 Add
	var_138_int = var_130_string + var_137_int; // 0x4f6 Add
	HasProperty(var_138_int, var_132_bool); // 0x4f7 ObjFunc
	var_139_bool = var_132_bool == 0; // 0x4f9 Not
	if(var_139_bool == 0) goto Label_1276; // 0x4fa JumpB
	goto Label_1279; // 0x4fb Jump
	
Label_1279:
	var_140_bool = var_131_int == 0; // 0x4ff Not
	if(var_140_bool == 0) goto Label_1283; // 0x500 JumpB
	var_123_bool = 0; // 0x501 MovB
	return 10; // 0x502 Return
	
Label_1283:
	var_133_int = 0; // 0x503 MovI
	var_141_int = 1; // 0x504 PushI
	var_142_bool = var_131_int > var_141_int; // 0x505 GT
	if(var_142_bool == 0) goto Label_1289; // 0x506 JumpB
	irand(var_133_int, var_131_int); // 0x507 Func
	
Label_1289:
	var_143_int = 1; // 0x509 PushI
	var_144_int = var_133_int + var_143_int; // 0x50a Add
	var_145_int = var_130_string + var_144_int; // 0x50b Add
	GetProperty(var_145_int, var_134_string); // 0x50c ObjFunc
	var_146_bool = 0; var_147_string = ""; // 0x50e PushV
	var_147_string = var_134_string; // 0x50f Mov
	func_1374(var_146_bool, var_147_string); // 0x510 NEW_2
	var_123_bool = var_146_bool; // 0x511 Mov
	return 10; // 0x513 Return
	
Label_1276:
	var_152_int = 1; // 0x4fc PushI
	var_131_int = var_131_int + var_152_int; // 0x4fd Add2
	goto Label_1266; // 0x4fe Jump
}


func_1520(var_36_string, var_37_int)
{
	var_38_string = ""; var_39_string = ""; // 0x5f0 PushV
	var_39_string = "idle"; // 0x5f1 MovS
	var_40_int = var_37_int; // 0x5f2 Push
	if(var_40_int == 0) goto Label_1525; // 0x5f3 JumpB
	var_39_string = var_39_string + var_37_int; // 0x5f4 Add2
	
Label_1525:
	var_36_string = var_39_string; // 0x5f5 Mov
	return 2; // 0x5f6 Return
}


func_754()
{
	func_795(var_11_bool); // 0x2f3 NEW_2
	return 0; // 0x2f5 Return
}


func_1778()
{
	var_54_bool = 0; var_55_string = ""; var_56_string = ""; // 0x6f2 PushV
	var_55_string = "klara2_npc_positioner"; // 0x6f3 MovS
	var_56_string = "remove_danko"; // 0x6f4 MovS
	func_1499(var_54_bool, var_55_string, var_56_string); // 0x6f5 NEW_2
	return 0; // 0x6f7 Return
}


func_1527(var_30_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x5f7 PushV
	var_33_int = 0; // 0x5f8 MovI
	
Label_1529:
	var_35_string = "all"; // 0x5f9 PushS
	var_36_string = ""; var_37_int = 0; // 0x5fa PushV
	var_37_int = var_33_int; // 0x5fb Mov
	func_1520(var_36_string, var_37_int); // 0x5fc NEW_2
	HasAnimation(var_34_bool, var_35_string, var_36_string); // 0x5fe Func
	var_41_bool = var_34_bool == 0; // 0x600 Not
	if(var_41_bool == 0) goto Label_1539; // 0x601 JumpB
	goto Label_1542; // 0x602 Jump
	
Label_1542:
	var_30_int = var_33_int; // 0x606 Mov
	return 4; // 0x607 Return
	
Label_1539:
	var_42_int = 1; // 0x603 PushI
	var_33_int = var_33_int + var_42_int; // 0x604 Add2
	goto Label_1529; // 0x605 Jump
}


func_1784()
{
	var_136_bool = 0; var_137_string = ""; var_138_string = ""; // 0x6f8 PushV
	var_137_string = "klara2_npc_positioner"; // 0x6f9 MovS
	var_138_string = "remove_burah"; // 0x6fa MovS
	func_1499(var_136_bool, var_137_string, var_138_string); // 0x6fb NEW_2
	return 0; // 0x6fd Return
}


func_1790(var_282_int)
{
	var_283_int = 0; var_284_int = 0; // 0x6fe PushV
	var_285_string = "k2system_klara_day"; // 0x6ff PushS
	GetVariable(var_285_string, var_284_int); // 0x700 Func
	var_282_int = var_284_int; // 0x702 Mov
	return 2; // 0x703 Return
}


