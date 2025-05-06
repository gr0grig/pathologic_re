task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_cvector, var_13_bool)
{
	var_14_int = 1; // 0xa2 PushI
	if(var_14_int == 0) goto Label_202; // 0xa3 JumpB
	func_1391(); // 0xa5 NEW_2
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
	func_1554(var_42_bool); // 0xc0 NEW_2
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
	func_1391(); // 0x198 NEW_2
	var_16_int = 41715; // 0x19a PushI
	var_17_bool = var_13_bool == var_16_int; // 0x19b Eq
	if(var_17_bool == 0) goto Label_428; // 0x19c JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0x19d PushV
	var_18_object = var_1_object; // 0x19e MovT
	var_19_object = var_0_object; // 0x19f MovT
	func_1576(); // 0x1a0 NEW_2
	var_52_object = Obj(); var_53_object = Obj(); // 0x1a2 PushV
	var_52_object = var_1_object; // 0x1a3 MovT
	var_53_object = var_0_object; // 0x1a4 MovT
	func_1601(); // 0x1a5 NEW_2
	var_60_object = Obj(); var_61_object = Obj(); // 0x1a7 PushV
	var_60_object = var_1_object; // 0x1a8 MovT
	var_61_object = var_0_object; // 0x1a9 MovT
	func_1556(var_61_object); // 0x1aa NEW_2
	
Label_428:
	var_100_int = 41718; // 0x1ac PushI
	var_101_bool = var_13_bool == var_100_int; // 0x1ad Eq
	if(var_101_bool == 0) goto Label_436; // 0x1ae JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x1af PushV
	var_102_object = var_1_object; // 0x1b0 MovT
	var_103_object = var_0_object; // 0x1b1 MovT
	func_1581(); // 0x1b2 NEW_2
	
Label_436:
	var_113_int = 41721; // 0x1b4 PushI
	var_114_bool = var_13_bool == var_113_int; // 0x1b5 Eq
	if(var_114_bool == 0) goto Label_469; // 0x1b6 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x1b7 PushV
	var_115_object = var_1_object; // 0x1b8 MovT
	var_116_object = var_0_object; // 0x1b9 MovT
	func_1586(); // 0x1ba NEW_2
	var_134_object = Obj(); var_135_object = Obj(); // 0x1bc PushV
	var_134_object = var_1_object; // 0x1bd MovT
	var_135_object = var_0_object; // 0x1be MovT
	func_1596(); // 0x1bf NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x1c1 PushV
	var_139_object = var_1_object; // 0x1c2 MovT
	var_140_object = var_0_object; // 0x1c3 MovT
	func_1601(); // 0x1c4 NEW_2
	var_141_object = Obj(); var_142_object = Obj(); // 0x1c6 PushV
	var_141_object = var_1_object; // 0x1c7 MovT
	var_142_object = var_0_object; // 0x1c8 MovT
	func_1563(var_142_object); // 0x1c9 NEW_2
	var_146_object = Obj(); var_147_object = Obj(); // 0x1cb PushV
	var_146_object = var_1_object; // 0x1cc MovT
	var_147_object = var_0_object; // 0x1cd MovT
	func_1606(var_147_object); // 0x1ce NEW_2
	var_170_object = Obj(); var_171_object = Obj(); // 0x1d0 PushV
	var_170_object = var_1_object; // 0x1d1 MovT
	var_171_object = var_0_object; // 0x1d2 MovT
	func_1570(); // 0x1d3 NEW_2
	
Label_469:
	var_174_int = 41724; // 0x1d5 PushI
	var_175_bool = var_13_bool == var_174_int; // 0x1d6 Eq
	if(var_175_bool == 0) goto Label_492; // 0x1d7 JumpB
	var_176_object = Obj(); var_177_object = Obj(); // 0x1d8 PushV
	var_176_object = var_1_object; // 0x1d9 MovT
	var_177_object = var_0_object; // 0x1da MovT
	func_1591(); // 0x1db NEW_2
	var_187_object = Obj(); var_188_object = Obj(); // 0x1dd PushV
	var_187_object = var_1_object; // 0x1de MovT
	var_188_object = var_0_object; // 0x1df MovT
	func_1617(var_188_object); // 0x1e0 NEW_2
	var_195_object = Obj(); var_196_object = Obj(); // 0x1e2 PushV
	var_195_object = var_1_object; // 0x1e3 MovT
	var_196_object = var_0_object; // 0x1e4 MovT
	func_1570(); // 0x1e5 NEW_2
	var_197_object = Obj(); var_198_object = Obj(); // 0x1e7 PushV
	var_197_object = var_1_object; // 0x1e8 MovT
	var_198_object = var_0_object; // 0x1e9 MovT
	func_1628(var_198_object); // 0x1ea NEW_2
	
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
	func_1645(var_222_bool, var_223_object); // 0x1fa NEW_2
	if(var_222_bool == 0) goto Label_514; // 0x1fc JumpB
	var_236_int = 539761; // 0x1fd PushI
	var_237_int = 41714; // 0x1fe PushI
	var_238_int = 41713; // 0x1ff PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x200 TObjFunc
	
Label_514:
	var_239_bool = 0; var_240_object = Obj(); // 0x202 PushV
	var_240_object = var_1_object; // 0x203 MovT
	func_1645(var_239_bool, var_240_object); // 0x204 NEW_2
	if(var_239_bool == 0) goto Label_524; // 0x206 JumpB
	var_241_int = 539764; // 0x207 PushI
	var_242_int = 41717; // 0x208 PushI
	var_243_int = 41716; // 0x209 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x20a TObjFunc
	
Label_524:
	var_244_bool = 0; var_245_object = Obj(); // 0x20c PushV
	var_245_object = var_1_object; // 0x20d MovT
	func_1635(var_244_bool, var_245_object); // 0x20e NEW_2
	if(var_244_bool == 0) goto Label_534; // 0x210 JumpB
	var_258_int = 539767; // 0x211 PushI
	var_259_int = 41720; // 0x212 PushI
	var_260_int = 41719; // 0x213 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x214 TObjFunc
	
Label_534:
	var_261_bool = 0; var_262_object = Obj(); // 0x216 PushV
	var_262_object = var_1_object; // 0x217 MovT
	func_1655(var_261_bool, var_262_object); // 0x218 NEW_2
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
	func_1554(var_359_bool); // 0x2e3 NEW_2
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
	func_1398(var_18_object); // 0x300 NEW_2
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
	func_1398(var_13_object); // 0x30d NEW_2
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
	func_1398(var_58_object); // 0x379 NEW_2
	var_57_object = var_58_object; // 0x37a Mov
	func_1265(var_57_object); // 0x37c NEW_2
	
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
	func_1345(var_19_string); // 0x3ab NEW_2
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
	func_1920(var_30_object); // 0x3be NEW_2
	var_382_string = ""; // 0x3c0 PushV
	var_382_string = "Neutral"; // 0x3c1 MovS
	func_1345(var_382_string); // 0x3c2 NEW_2
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


func_0(var_0_object, var_326_int, var_327_object)
{
	var_329_object = Obj(); var_330_bool = 0; var_331_int = 0; var_332_bool = 0; var_333_object = Obj(); var_334_bool = 0; var_335_int = 0; var_336_bool = 0; // 0x0 PushV
	var_0_object = var_327_object; // 0x1 TMov
	var_337_bool = 0; var_338_object = Obj(); var_339_float = 0; // 0x2 PushV
	var_338_object = var_327_object; // 0x3 Mov
	var_339_float = 70.0; // 0x4 MovF
	func_1120(var_338_object, var_339_float); // 0x5 NEW_2
	var_340_bool = var_337_bool == 0; // 0x7 Not
	if(var_340_bool == 0) goto Label_11; // 0x8 JumpB
	var_326_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_333_object); // 0xb Func
	var_341_int = 0; // 0xd PushV
	func_1548(var_341_int); // 0xe NEW_2
	SetNPCName(var_341_int); // 0x10 ObjFunc
	var_342_int = 0; // 0x12 PushV
	func_1546(var_342_int); // 0x13 NEW_2
	SetNPCDescription(var_342_int); // 0x15 ObjFunc
	var_343_string = ""; // 0x17 PushV
	func_1550(var_343_string); // 0x18 NEW_2
	SetPhoto(var_343_string); // 0x1a ObjFunc
	var_344_string = ""; // 0x1c PushV
	func_1552(var_344_string); // 0x1d NEW_2
	SetPhoto2(var_344_string); // 0x1f ObjFunc
	var_345_int = 0; // 0x21 PushV
	func_1763(var_345_int); // 0x22 NEW_2
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
	func_1398(var_349_object); // 0x31 NEW_2
	var_348_object = var_349_object; // 0x32 Mov
	func_1207(var_347_bool, var_348_object); // 0x34 NEW_2
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
	func_1189(); // 0x48 NEW_2
	StopDialog(var_333_object); // 0x4a Func
	GetReturnValue(var_335_int); // 0x4c ObjFunc
	var_326_int = var_335_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1792(var_283_int)
{
	var_284_int = 0; var_285_int = 0; // 0x700 PushV
	var_286_string = "k2system_klara_day"; // 0x701 PushS
	GetVariable(var_286_string, var_285_int); // 0x702 Func
	var_283_int = var_285_int; // 0x704 Mov
	return 2; // 0x705 Return
}


func_1798(var_263_int)
{
	var_264_int = 0; var_265_int = 0; // 0x706 PushV
	var_266_string = "k2system_burah_day"; // 0x707 PushS
	GetVariable(var_266_string, var_265_int); // 0x708 Func
	var_263_int = var_265_int; // 0x70a Mov
	return 2; // 0x70b Return
}


func_1546(var_101_int)
{
	var_101_int = 515573; // 0x60a MovI
	return 0; // 0x60b Return
}


func_1548(var_100_int)
{
	var_100_int = 504032; // 0x60c MovI
	return 0; // 0x60d Return
}


func_1804(var_238_int)
{
	var_239_int = 0; var_240_int = 0; // 0x70c PushV
	var_241_string = "k2system_danko_day"; // 0x70d PushS
	GetVariable(var_241_string, var_240_int); // 0x70e Func
	var_238_int = var_240_int; // 0x710 Mov
	return 2; // 0x711 Return
}


func_1550(var_102_string)
{
	var_102_string = "ui/NPC_Bakalavr.png"; // 0x60e MovS
	return 0; // 0x60f Return
}


func_1552(var_103_string)
{
	var_103_string = "ui/NPC_Bakalavr_b.png"; // 0x610 MovS
	return 0; // 0x611 Return
}


func_1040(var_50_bool)
{
	var_50_bool = 1; // 0x410 MovB
	return 0; // 0x411 Return
}


func_1554(var_95_bool)
{
	var_95_bool = 1; // 0x612 MovB
	return 0; // 0x613 Return
}


func_1042()
{
	StopAnimation(); // 0x412 Func
	StopGroup0(); // 0x414 Func
	return 0; // 0x416 Return
}


func_1556(var_60_object)
{
	var_62_bool = 0; var_63_object = Obj(); var_64_float = 0; // 0x615 PushV
	var_63_object = var_60_object; // 0x616 Mov
	var_64_float = 0.05; // 0x617 MovF
	func_1456(var_62_bool, var_63_object, var_64_float); // 0x618 NEW_2
	return 0; // 0x61a Return
}


func_1810(var_258_int)
{
	var_259_int = 0; var_260_int = 0; var_261_int = 0; var_262_int = 0; // 0x712 PushV
	var_263_int = 0; // 0x713 PushV
	func_1798(var_263_int); // 0x714 NEW_2
	var_261_int = var_263_int; // 0x715 Mov
	var_267_string = "k2system_burah_state"; // 0x717 PushS
	var_268_int = var_267_string + var_261_int; // 0x718 Add
	GetVariable(var_268_int, var_262_int); // 0x719 Func
	var_258_int = var_262_int; // 0x71b Mov
	return 4; // 0x71c Return
}


func_1302(var_155_bool)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; // 0x516 PushV
	var_167_string = "d"; // 0x517 PushS
	var_168_int = 0; // 0x518 PushV
	func_1513(var_168_int); // 0x519 NEW_2
	var_169_int = var_167_string + var_168_int; // 0x51b Add
	var_170_string = "m"; // 0x51c PushS
	var_162_string = var_169_int + var_170_string; // 0x51d Add2
	var_163_int = 0; // 0x51e MovI
	
Label_1311:
	var_171_int = 1; // 0x51f PushI
	if(var_171_int == 0) goto Label_1324; // 0x520 JumpB
	var_172_int = 1; // 0x521 PushI
	var_173_int = var_163_int + var_172_int; // 0x522 Add
	var_174_int = var_162_string + var_173_int; // 0x523 Add
	HasProperty(var_174_int, var_164_bool); // 0x524 ObjFunc
	var_175_bool = var_164_bool == 0; // 0x526 Not
	if(var_175_bool == 0) goto Label_1321; // 0x527 JumpB
	goto Label_1324; // 0x528 Jump
	
Label_1324:
	var_176_bool = var_163_int == 0; // 0x52c Not
	if(var_176_bool == 0) goto Label_1328; // 0x52d JumpB
	var_155_bool = 0; // 0x52e MovB
	return 10; // 0x52f Return
	
Label_1328:
	var_165_int = 0; // 0x530 MovI
	var_177_int = 1; // 0x531 PushI
	var_178_bool = var_163_int > var_177_int; // 0x532 GT
	if(var_178_bool == 0) goto Label_1334; // 0x533 JumpB
	irand(var_165_int, var_163_int); // 0x534 Func
	
Label_1334:
	var_179_int = 1; // 0x536 PushI
	var_180_int = var_165_int + var_179_int; // 0x537 Add
	var_181_int = var_162_string + var_180_int; // 0x538 Add
	GetProperty(var_181_int, var_166_string); // 0x539 ObjFunc
	var_182_bool = 0; var_183_string = ""; // 0x53b PushV
	var_183_string = var_166_string; // 0x53c Mov
	func_1376(var_182_bool, var_183_string); // 0x53d NEW_2
	var_155_bool = var_182_bool; // 0x53e Mov
	return 10; // 0x540 Return
	
Label_1321:
	var_184_int = 1; // 0x529 PushI
	var_163_int = var_163_int + var_184_int; // 0x52a Add2
	goto Label_1311; // 0x52b Jump
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


func_1563(var_141_object)
{
	var_143_bool = 0; var_144_object = Obj(); var_145_float = 0; // 0x61c PushV
	var_144_object = var_141_object; // 0x61d Mov
	var_145_float = -0.05; // 0x61e MovF
	func_1456(var_143_bool, var_144_object, var_145_float); // 0x61f NEW_2
	return 0; // 0x621 Return
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


func_284(var_0_object, var_1_object, var_2_object, var_3_string, var_203_object, var_204_object)
{
	var_0_object = var_204_object; // 0x11d TMov
	var_1_object = var_203_object; // 0x11e TMov
	var_3_string = 0; // 0x11f TMovB
	var_209_int = 1; // 0x120 PushI
	if(var_209_int == 0) goto Label_352; // 0x121 JumpB
	var_210_string = ""; // 0x122 PushV
	var_210_string = "Neutral"; // 0x123 MovS
	func_382(var_204_object, var_210_string); // 0x124 NEW_2
	var_227_int = 539760; // 0x126 PushI
	SetMessage(var_227_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_228_bool = 0; var_229_object = Obj(); // 0x12b PushV
	var_229_object = var_1_object; // 0x12c MovT
	func_1645(var_228_bool, var_229_object); // 0x12d NEW_2
	if(var_228_bool == 0) goto Label_309; // 0x12f JumpB
	var_245_int = 539761; // 0x130 PushI
	var_246_int = 41714; // 0x131 PushI
	var_247_int = 41713; // 0x132 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x133 TObjFunc
	
Label_309:
	var_248_bool = 0; var_249_object = Obj(); // 0x135 PushV
	var_249_object = var_1_object; // 0x136 MovT
	func_1645(var_248_bool, var_249_object); // 0x137 NEW_2
	if(var_248_bool == 0) goto Label_319; // 0x139 JumpB
	var_250_int = 539764; // 0x13a PushI
	var_251_int = 41717; // 0x13b PushI
	var_252_int = 41716; // 0x13c PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x13d TObjFunc
	
Label_319:
	var_253_bool = 0; var_254_object = Obj(); // 0x13f PushV
	var_254_object = var_1_object; // 0x140 MovT
	func_1635(var_253_bool, var_254_object); // 0x141 NEW_2
	if(var_253_bool == 0) goto Label_329; // 0x143 JumpB
	var_270_int = 539767; // 0x144 PushI
	var_271_int = 41720; // 0x145 PushI
	var_272_int = 41719; // 0x146 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x147 TObjFunc
	
Label_329:
	var_273_bool = 0; var_274_object = Obj(); // 0x149 PushV
	var_274_object = var_1_object; // 0x14a MovT
	func_1655(var_273_bool, var_274_object); // 0x14b NEW_2
	if(var_273_bool == 0) goto Label_339; // 0x14d JumpB
	var_290_int = 539770; // 0x14e PushI
	var_291_int = 41723; // 0x14f PushI
	var_292_int = 41722; // 0x150 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x151 TObjFunc
	
Label_339:
	var_293_int = 539773; // 0x153 PushI
	var_294_int = -1; // 0x154 PushI
	var_295_int = 41725; // 0x155 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x156 TObjFunc
	var_296_int = 541091; // 0x158 PushI
	var_297_int = -1; // 0x159 PushI
	var_298_int = 43200; // 0x15a PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x15b TObjFunc
	goto Label_352; // 0x15d Jump
	
Label_352:
	var_299_bool = 0; // 0x160 PushV
	func_1554(var_299_bool); // 0x161 NEW_2
	if(var_299_bool == 0) goto Label_367; // 0x163 JumpB
	
Label_356:
	lshWaitForAnimEnd(); // 0x164 Func
	var_300_string = var_3_string; // 0x166 PushT
	if(var_300_string == 0) goto Label_361; // 0x167 JumpB
	goto Label_366; // 0x168 Jump
	
Label_366:
	goto Label_381; // 0x16e Jump
	
Label_381:
	return 0; // 0x17d Return
	
Label_361:
	var_301_string = ""; // 0x169 PushV
	var_301_string = var_2_object; // 0x16a MovT
	func_1345(var_301_string); // 0x16b NEW_2
	goto Label_356; // 0x16d Jump
	
Label_367:
	var_312_string = "all"; // 0x16f PushS
	var_313_string = "idle"; // 0x170 PushS
	PlayAnimation(var_312_string, var_313_string); // 0x171 Func
	
Label_371:
	WaitForAnimEnd(); // 0x173 Func
	var_314_string = var_3_string; // 0x175 PushT
	if(var_314_string == 0) goto Label_376; // 0x176 JumpB
	goto Label_381; // 0x177 Jump
	
Label_376:
	var_315_string = "all"; // 0x178 PushS
	var_316_string = "idle"; // 0x179 PushS
	PlayAnimation(var_315_string, var_316_string); // 0x17a Func
	goto Label_371; // 0x17c Jump
}


func_1821(var_125_int)
{
	var_126_int = 0; var_127_int = 0; // 0x71d PushV
	var_128_int = 0; // 0x71e PushV
	func_1798(var_128_int); // 0x71f NEW_2
	var_127_int = var_128_int; // 0x720 Mov
	var_132_string = "k2system_burah_state"; // 0x722 PushS
	var_133_int = var_132_string + var_127_int; // 0x723 Add
	SetVariable(var_133_int, var_125_int); // 0x724 Func
	return 2; // 0x726 Return
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


func_1570()
{
	var_172_string = "playsound"; // 0x623 PushS
	var_173_string = "givemoney"; // 0x624 PushS
	TriggerWorld(var_172_string, var_173_string); // 0x625 Func
	return 0; // 0x627 Return
}


func_1831(var_233_int)
{
	var_234_int = 0; var_235_int = 0; var_236_int = 0; var_237_int = 0; // 0x727 PushV
	var_238_int = 0; // 0x728 PushV
	func_1804(var_238_int); // 0x729 NEW_2
	var_236_int = var_238_int; // 0x72a Mov
	var_242_string = "k2system_danko_state"; // 0x72c PushS
	var_243_int = var_242_string + var_236_int; // 0x72d Add
	GetVariable(var_243_int, var_237_int); // 0x72e Func
	var_233_int = var_237_int; // 0x730 Mov
	return 4; // 0x731 Return
}


func_1576()
{
	func_1873(); // 0x62a NEW_2
	return 0; // 0x62c Return
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
	func_1414(var_91_float, var_92_float, var_93_float, var_94_float); // 0x43b NEW_2
	SetProperty(var_75_string, var_91_float); // 0x43d ObjFunc
	var_73_bool = 1; // 0x43f MovB
	return 2; // 0x440 Return
}


func_1581()
{
	func_1881(); // 0x62f NEW_2
	return 0; // 0x631 Return
}


func_1586()
{
	func_1895(); // 0x634 NEW_2
	return 0; // 0x636 Return
}


func_1842(var_43_int)
{
	var_44_int = 0; var_45_int = 0; // 0x732 PushV
	var_46_int = 0; // 0x733 PushV
	func_1804(var_46_int); // 0x734 NEW_2
	var_45_int = var_46_int; // 0x735 Mov
	var_50_string = "k2system_danko_state"; // 0x737 PushS
	var_51_int = var_50_string + var_45_int; // 0x738 Add
	SetVariable(var_51_int, var_43_int); // 0x739 Func
	return 2; // 0x73b Return
}


func_1591()
{
	func_1915(); // 0x639 NEW_2
	return 0; // 0x63b Return
}


func_824(var_0_object)
{
	var_89_float = GetByIndex(var_0_object, 0); // 0x338 PushE
	var_90_float = GetByIndex(var_0_object, 2); // 0x339 PushE
	RotateAsync(var_89_float, var_90_float); // 0x33a Func
	return 0; // 0x33c Return
}


func_1596()
{
	func_1786(); // 0x63e NEW_2
	return 0; // 0x640 Return
}


func_1852(var_278_int)
{
	var_279_int = 0; var_280_int = 0; var_281_int = 0; var_282_int = 0; // 0x73c PushV
	var_283_int = 0; // 0x73d PushV
	func_1792(var_283_int); // 0x73e NEW_2
	var_281_int = var_283_int; // 0x73f Mov
	var_287_string = "k2system_klara_state"; // 0x741 PushS
	var_288_int = var_287_string + var_281_int; // 0x742 Add
	GetVariable(var_288_int, var_282_int); // 0x743 Func
	var_278_int = var_282_int; // 0x745 Mov
	return 4; // 0x746 Return
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


func_1601()
{
	func_1780(); // 0x643 NEW_2
	return 0; // 0x645 Return
}


func_1089(var_157_string, var_158_int)
{
	var_159_int = 0; var_160_int = 0; // 0x441 PushV
	GetProperty(var_157_string, var_160_int); // 0x442 ObjFunc
	var_161_int = var_160_int + var_158_int; // 0x444 Add
	SetProperty(var_157_string, var_161_int); // 0x445 ObjFunc
	return 2; // 0x447 Return
}


func_1345(var_301_string)
{
	var_302_bool = 0; var_303_float = 0; var_304_float = 0; var_305_bool = 0; var_306_float = 0; var_307_float = 0; // 0x541 PushV
	lshHasAnimation(var_305_bool, var_301_string); // 0x542 Func
	var_308_bool = var_305_bool; // 0x544 Push
	if(var_308_bool == 0) goto Label_1356; // 0x545 JumpB
	lshGetAnimTimes(var_301_string, var_306_float, var_307_float); // 0x546 Func
	var_309_bool = 0; // 0x548 PushB
	lshPlayAnimation(var_306_float, var_307_float, var_309_bool); // 0x549 Func
	goto Label_1360; // 0x54b Jump
	
Label_1360:
	return 6; // 0x550 Return
	
Label_1356:
	var_310_string = "Can't find lsh animation : "; // 0x54c PushS
	var_311_int = var_310_string + var_301_string; // 0x54d Add
	Trace(var_311_int); // 0x54e Func
}


func_1606(var_146_object)
{
	var_148_int = 0; var_149_int = 0; // 0x646 PushV
	var_150_int = 1000; // 0x647 PushI
	irand(var_149_int, var_150_int); // 0x648 Func
	var_151_object = Obj(); var_152_int = 0; // 0x64a PushV
	var_151_object = var_146_object; // 0x64b Mov
	var_153_int = 3000; // 0x64c PushI
	var_152_int = var_149_int + var_153_int; // 0x64d Add2
	func_1437(var_151_object, var_152_int); // 0x64e NEW_2
	return 2; // 0x650 Return
}


func_1863(var_178_int)
{
	var_179_int = 0; var_180_int = 0; // 0x747 PushV
	var_181_int = 0; // 0x748 PushV
	func_1792(var_181_int); // 0x749 NEW_2
	var_180_int = var_181_int; // 0x74a Mov
	var_185_string = "k2system_klara_state"; // 0x74c PushS
	var_186_int = var_185_string + var_180_int; // 0x74d Add
	SetVariable(var_186_int, var_178_int); // 0x74e Func
	return 2; // 0x750 Return
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
	var_365_int = 539066; // 0x5b PushI
	SetMessage(var_365_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_366_int = 539067; // 0x60 PushI
	var_367_int = -1; // 0x61 PushI
	var_368_int = 41015; // 0x62 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x63 TObjFunc
	var_369_int = 541074; // 0x65 PushI
	var_370_int = -1; // 0x66 PushI
	var_371_int = 43179; // 0x67 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_372_bool = 0; // 0x6d PushV
	func_1554(var_372_bool); // 0x6e NEW_2
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
	func_1345(var_374_string); // 0x78 NEW_2
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


func_1617(var_187_object)
{
	var_189_int = 0; var_190_int = 0; // 0x651 PushV
	var_191_int = 1000; // 0x652 PushI
	irand(var_190_int, var_191_int); // 0x653 Func
	var_192_object = Obj(); var_193_int = 0; // 0x655 PushV
	var_192_object = var_187_object; // 0x656 Mov
	var_194_int = 4000; // 0x657 PushI
	var_193_int = var_190_int + var_194_int; // 0x658 Add2
	func_1437(var_192_object, var_193_int); // 0x659 NEW_2
	return 2; // 0x65b Return
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


func_1361(var_214_string, var_215_bool)
{
	var_218_bool = 0; var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_float = 0; var_223_float = 0; // 0x551 PushV
	lshHasAnimation(var_221_bool, var_214_string); // 0x552 Func
	var_224_bool = var_221_bool; // 0x554 Push
	if(var_224_bool == 0) goto Label_1371; // 0x555 JumpB
	lshGetAnimTimes(var_214_string, var_222_float, var_223_float); // 0x556 Func
	lshPlayAnimation(var_222_float, var_223_float, var_215_bool); // 0x558 Func
	goto Label_1375; // 0x55a Jump
	
Label_1375:
	return 6; // 0x55f Return
	
Label_1371:
	var_225_string = "Can't find lsh animation : "; // 0x55b PushS
	var_226_int = var_225_string + var_214_string; // 0x55c Add
	Trace(var_226_int); // 0x55d Func
}


func_1873()
{
	func_1696(); // 0x752 NEW_2
	var_43_int = 0; // 0x754 PushV
	var_43_int = 2; // 0x755 MovI
	func_1842(var_43_int); // 0x756 NEW_2
	return 0; // 0x758 Return
}


func_851()
{
	var_384_float = 0; var_385_float = 0; // 0x353 PushV
	var_386_int = 8; // 0x354 PushI
	var_387_int = 16; // 0x355 PushI
	rand(var_385_float, var_386_int, var_387_int); // 0x356 Func
	var_388_int = 10; // 0x358 PushI
	SetTimer(var_388_int, var_385_float); // 0x359 Func
	return 2; // 0x35b Return
}


func_1881()
{
	func_1709(); // 0x75a NEW_2
	var_112_int = 0; // 0x75c PushV
	var_112_int = 1; // 0x75d MovI
	func_1842(var_112_int); // 0x75e NEW_2
	return 0; // 0x760 Return
}


func_1115(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x45b PushV
	IsLoaded(var_14_bool); // 0x45c Func
	var_12_bool = var_14_bool; // 0x45e Mov
	return 2; // 0x45f Return
}


func_1628(var_197_object)
{
	var_199_bool = 0; var_200_object = Obj(); var_201_float = 0; // 0x65d PushV
	var_200_object = var_197_object; // 0x65e Mov
	var_201_float = -0.3; // 0x65f MovF
	func_1456(var_199_bool, var_200_object, var_201_float); // 0x660 NEW_2
	return 0; // 0x662 Return
}


func_860()
{
	var_383_int = 10; // 0x35c PushI
	KillTimer(var_383_int); // 0x35d Func
	return 0; // 0x35f Return
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
	func_1404(var_79_cvector, var_80_cvector); // 0x47b NEW_2
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
	var_92_bool = 1; // 0x48b PushB
	CameraTransit(var_70_cvector, var_68_cvector, var_92_bool); // 0x48c Func
	var_93_float = GetByIndex(var_69_cvector, 0); // 0x48e PushE
	var_94_float = GetByIndex(var_69_cvector, 2); // 0x48f PushE
	Rotate(var_93_float, var_94_float); // 0x490 Func
	var_95_bool = 0; // 0x492 PushV
	func_1554(var_95_bool); // 0x493 NEW_2
	if(var_95_bool == 0) goto Label_1175; // 0x495 JumpB
	goto Label_1183; // 0x496 Jump
	
Label_1183:
	CameraWaitForPlayFinish(); // 0x49f Func
	ResumeWorld(); // 0x4a1 Func
	var_52_bool = 1; // 0x4a3 MovB
	return 18; // 0x4a4 Return
	
Label_1175:
	var_96_string = "head"; // 0x497 PushS
	HasAnimationTrack(var_72_bool, var_96_string); // 0x498 Func
	var_97_bool = var_72_bool; // 0x49a Push
	if(var_97_bool == 0) goto Label_1183; // 0x49b JumpB
	var_98_string = "head"; // 0x49c PushS
	LookAsyncCamera(var_98_string); // 0x49d Func
}


func_1376(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0; // 0x560 PushV
	var_151_bool = 0; // 0x561 PushV
	func_1554(var_151_bool); // 0x562 NEW_2
	if(var_151_bool == 0) goto Label_1389; // 0x564 JumpB
	lshHasSpeech(var_150_bool, var_148_string); // 0x565 Func
	var_152_bool = var_150_bool; // 0x567 Push
	if(var_152_bool == 0) goto Label_1389; // 0x568 JumpB
	lshPlaySpeech(var_148_string); // 0x569 Func
	var_147_bool = 1; // 0x56b MovB
	return 2; // 0x56c Return
	
Label_1389:
	var_147_bool = 0; // 0x56d MovB
	return 2; // 0x56e Return
}


func_1889(var_232_bool)
{
	var_233_int = 0; // 0x761 PushV
	func_1831(var_233_int); // 0x762 NEW_2
	var_244_int = 0; // 0x764 PushI
	var_232_bool = var_233_int == var_244_int; // 0x765 Eq2
	return 0; // 0x766 Return
}


func_1635(var_253_bool, var_254_object)
{
	var_255_bool = 0; var_256_object = Obj(); // 0x664 PushV
	var_256_object = var_254_object; // 0x665 Mov
	func_1665(var_256_object); // 0x666 NEW_2
	if(var_255_bool == 0) goto Label_1643; // 0x668 JumpB
	var_253_bool = 1; // 0x669 MovB
	return 0; // 0x66a Return
	
Label_1643:
	var_253_bool = 0; // 0x66b MovB
	return 0; // 0x66c Return
}


func_1895()
{
	func_1683(); // 0x768 NEW_2
	var_125_int = 0; // 0x76a PushV
	var_125_int = 3; // 0x76b MovI
	func_1821(var_125_int); // 0x76c NEW_2
	return 0; // 0x76e Return
}


func_1645(var_228_bool, var_229_object)
{
	var_230_bool = 0; var_231_object = Obj(); // 0x66e PushV
	var_231_object = var_229_object; // 0x66f Mov
	func_1671(var_231_object); // 0x670 NEW_2
	if(var_230_bool == 0) goto Label_1653; // 0x672 JumpB
	var_228_bool = 1; // 0x673 MovB
	return 0; // 0x674 Return
	
Label_1653:
	var_228_bool = 0; // 0x675 MovB
	return 0; // 0x676 Return
}


func_1391()
{
	var_15_bool = 0; // 0x56f PushV
	func_1554(var_15_bool); // 0x570 NEW_2
	if(var_15_bool == 0) goto Label_1397; // 0x572 JumpB
	lshStopSpeech(); // 0x573 Func
	
Label_1397:
	return 0; // 0x575 Return
}


func_1903(var_257_bool)
{
	var_258_int = 0; // 0x76f PushV
	func_1810(var_258_int); // 0x770 NEW_2
	var_269_int = 1; // 0x772 PushI
	var_257_bool = var_258_int == var_269_int; // 0x773 Eq2
	return 0; // 0x774 Return
}


func_1909(var_277_bool)
{
	var_278_int = 0; // 0x775 PushV
	func_1852(var_278_int); // 0x776 NEW_2
	var_289_int = 1; // 0x778 PushI
	var_277_bool = var_278_int == var_289_int; // 0x779 Eq2
	return 0; // 0x77a Return
}


func_1398(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x576 PushV
	self(var_117_object); // 0x577 Func
	var_115_object = var_117_object; // 0x579 Mov
	return 2; // 0x57a Return
}


func_1655(var_273_bool, var_274_object)
{
	var_275_bool = 0; var_276_object = Obj(); // 0x678 PushV
	var_276_object = var_274_object; // 0x679 Mov
	func_1677(var_276_object); // 0x67a NEW_2
	if(var_275_bool == 0) goto Label_1663; // 0x67c JumpB
	var_273_bool = 1; // 0x67d MovB
	return 0; // 0x67e Return
	
Label_1663:
	var_273_bool = 0; // 0x67f MovB
	return 0; // 0x680 Return
}


func_1915()
{
	var_178_int = 0; // 0x77b PushV
	var_178_int = 3; // 0x77c MovI
	func_1863(var_178_int); // 0x77d NEW_2
	return 0; // 0x77f Return
}


func_1404(var_79_cvector, var_80_cvector)
{
	var_82_float = 0; var_83_float = 0; // 0x57c PushV
	var_84_int = var_80_cvector | var_80_cvector; // 0x57d Or
	var_83_float = sqrt(var_84_int); // 0x57e Sqrt2
	var_85_float = 0.0; // 0x57f PushF
	var_86_bool = var_83_float < var_85_float; // 0x580 LT
	if(var_86_bool == 0) goto Label_1412; // 0x581 JumpB
	var_79_cvector = CVector(0.0, 0.0, 0.0); // 0x582 MovV
	return 2; // 0x583 Return
	
Label_1412:
	var_79_cvector = var_80_cvector / var_80_cvector; // 0x584 Div2
	return 2; // 0x585 Return
}


func_382(var_2_object, var_210_string)
{
	var_211_bool = 0; // 0x17f PushV
	func_1554(var_211_bool); // 0x180 NEW_2
	var_212_bool = var_211_bool == 0; // 0x182 Not
	if(var_212_bool == 0) goto Label_389; // 0x183 JumpB
	return 0; // 0x184 Return
	
Label_389:
	var_213_bool = var_210_string == var_2_object; // 0x185 Eq
	if(var_213_bool == 0) goto Label_392; // 0x186 JumpB
	return 0; // 0x187 Return
	
Label_392:
	var_214_string = ""; var_215_bool = 0; // 0x188 PushV
	var_214_string = var_210_string; // 0x189 Mov
	var_216_string = ""; // 0x18a PushS
	var_217_bool = var_210_string == var_216_string; // 0x18b Eq
	if(var_217_bool == 0) goto Label_399; // 0x18c JumpB
	var_215_bool = 0; // 0x18d MovB
	goto Label_400; // 0x18e Jump
	
Label_400:
	func_1361(var_214_string, var_215_bool); // 0x190 NEW_2
	var_2_object = var_210_string; // 0x192 TMov
	return 0; // 0x193 Return
	
Label_399:
	var_215_bool = 1; // 0x18f MovB
}


func_1920(var_30_object)
{
	var_31_int = 0; var_32_int = 0; // 0x780 PushV
	var_33_string = "day"; // 0x781 PushS
	GetProperty(var_33_string, var_32_int); // 0x782 Func
	var_34_int = 0; // 0x784 PushV
	func_1513(var_34_int); // 0x785 NEW_2
	var_40_bool = var_32_int == var_34_int; // 0x787 Eq
	if(var_40_bool == 0) goto Label_1936; // 0x788 JumpB
	var_41_int = 0; var_42_object = Obj(); // 0x789 PushV
	var_42_object = var_30_object; // 0x78a Mov
	TaskCall(2); // 0x78b TaskCall
	func_203(var_43_object, var_41_int, var_42_object); // 0x78c NEW_2
	TaskReturn(); // 0x78d TaskReturn
	goto Label_1942; // 0x78f Jump
	
Label_1942:
	return 2; // 0x796 Return
	
Label_1936:
	var_326_int = 0; var_327_object = Obj(); // 0x790 PushV
	var_327_object = var_30_object; // 0x791 Mov
	TaskCall(0); // 0x792 TaskCall
	func_0(var_328_object, var_326_int, var_327_object); // 0x793 NEW_2
	TaskReturn(); // 0x794 TaskReturn
}


func_1665(var_255_bool)
{
	var_257_bool = 0; // 0x682 PushV
	func_1903(var_257_bool); // 0x683 NEW_2
	var_255_bool = var_257_bool; // 0x684 Mov
	return 0; // 0x686 Return
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


func_1671(var_230_bool)
{
	var_232_bool = 0; // 0x688 PushV
	func_1889(var_232_bool); // 0x689 NEW_2
	var_230_bool = var_232_bool; // 0x68a Mov
	return 0; // 0x68c Return
}


func_1414(var_91_float, var_92_float, var_93_float, var_94_float)
{
	var_95_bool = var_92_float < var_93_float; // 0x587 LT
	if(var_95_bool == 0) goto Label_1419; // 0x588 JumpB
	var_91_float = var_93_float; // 0x589 Mov
	return 0; // 0x58a Return
	
Label_1419:
	var_96_bool = var_92_float > var_94_float; // 0x58b GT
	if(var_96_bool == 0) goto Label_1423; // 0x58c JumpB
	var_91_float = var_94_float; // 0x58d Mov
	return 0; // 0x58e Return
	
Label_1423:
	var_91_float = var_92_float; // 0x58f Mov
	return 0; // 0x590 Return
}


func_139(var_2_object, var_357_string)
{
	var_358_bool = 0; // 0x8c PushV
	func_1554(var_358_bool); // 0x8d NEW_2
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
	func_1361(var_361_string, var_362_bool); // 0x9d NEW_2
	var_2_object = var_357_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_362_bool = 1; // 0x9c MovB
}


func_1677(var_275_bool)
{
	var_277_bool = 0; // 0x68e PushV
	func_1909(var_277_bool); // 0x68f NEW_2
	var_275_bool = var_277_bool; // 0x690 Mov
	return 0; // 0x692 Return
}


func_1425(var_165_int, var_166_int)
{
	var_167_object = Obj(); var_168_object = Obj(); // 0x591 PushV
	CreateIntVector(var_168_object); // 0x592 Func
	add(var_165_int); // 0x594 ObjFunc
	add(var_166_int); // 0x596 ObjFunc
	var_169_int = 3; // 0x598 PushI
	SendWorldWndMessage(var_169_int, var_168_object); // 0x599 Func
	return 2; // 0x59b Return
}


func_1683()
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x693 PushV
	var_119_int = 755; // 0x694 PushI
	var_120_int = 2; // 0x695 PushI
	var_121_int = 539740; // 0x696 PushI
	CreateDiaryEntry(var_118_object, var_119_int, var_120_int, var_121_int); // 0x697 Func
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; // 0x699 PushV
	var_123_object = var_118_object; // 0x69a Mov
	var_124_int = 751; // 0x69b MovI
	func_1735(var_122_bool, var_123_object, var_124_int); // 0x69c NEW_2
	return 2; // 0x69e Return
}


func_917()
{
	StopGroup0(); // 0x395 Func
	func_860(); // 0x398 NEW_2
	var_13_string = ""; // 0x39a PushV
	var_13_string = "Neutral"; // 0x39b MovS
	func_1345(var_13_string); // 0x39c NEW_2
	func_851(); // 0x39f NEW_2
	return 0; // 0x3a1 Return
}


func_1437(var_151_object, var_152_int)
{
	var_154_int = 0; var_155_int = 0; // 0x59d PushV
	var_156_object = Obj(); var_157_string = ""; var_158_int = 0; // 0x59e PushV
	var_156_object = var_151_object; // 0x59f Mov
	var_157_string = "money"; // 0x5a0 MovS
	var_158_int = var_152_int; // 0x5a1 Mov
	func_1089(var_157_string, var_158_int); // 0x5a2 NEW_2
	var_162_int = 0; // 0x5a4 PushI
	var_163_bool = var_152_int > var_162_int; // 0x5a5 GT
	if(var_163_bool == 0) goto Label_1455; // 0x5a6 JumpB
	var_164_string = "Money"; // 0x5a7 PushS
	GetInvItemByName(var_155_int, var_164_string); // 0x5a8 Func
	var_165_int = 0; var_166_int = 0; // 0x5aa PushV
	var_165_int = var_155_int; // 0x5ab Mov
	var_166_int = var_152_int; // 0x5ac Mov
	func_1425(var_165_int, var_166_int); // 0x5ad NEW_2
	
Label_1455:
	return 2; // 0x5af Return
}


func_1696()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x6a0 PushV
	var_22_int = 759; // 0x6a1 PushI
	var_23_int = 2; // 0x6a2 PushI
	var_24_int = 539744; // 0x6a3 PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x6a4 Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x6a6 PushV
	var_26_object = var_21_object; // 0x6a7 Mov
	var_27_int = 757; // 0x6a8 MovI
	func_1735(var_25_bool, var_26_object, var_27_int); // 0x6a9 NEW_2
	return 2; // 0x6ab Return
}


func_1189()
{
	var_319_bool = 0; var_320_bool = 0; // 0x4a5 PushV
	var_321_bool = 1; // 0x4a6 PushB
	CameraSwitchToNormal(var_321_bool); // 0x4a7 Func
	var_322_bool = 0; // 0x4a9 PushV
	func_1554(var_322_bool); // 0x4aa NEW_2
	if(var_322_bool == 0) goto Label_1198; // 0x4ac JumpB
	goto Label_1206; // 0x4ad Jump
	
Label_1206:
	return 2; // 0x4b6 Return
	
Label_1198:
	var_323_string = "head"; // 0x4ae PushS
	HasAnimationTrack(var_320_bool, var_323_string); // 0x4af Func
	var_324_bool = var_320_bool; // 0x4b1 Push
	if(var_324_bool == 0) goto Label_1206; // 0x4b2 JumpB
	var_325_string = "head"; // 0x4b3 PushS
	UnlookAsync(var_325_string); // 0x4b4 Func
}


func_1709()
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x6ad PushV
	var_106_int = 760; // 0x6ae PushI
	var_107_int = 2; // 0x6af PushI
	var_108_int = 539745; // 0x6b0 PushI
	CreateDiaryEntry(var_105_object, var_106_int, var_107_int, var_108_int); // 0x6b1 Func
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; // 0x6b3 PushV
	var_110_object = var_105_object; // 0x6b4 Mov
	var_111_int = 757; // 0x6b5 MovI
	func_1735(var_109_bool, var_110_object, var_111_int); // 0x6b6 NEW_2
	return 2; // 0x6b8 Return
}


func_1456(var_62_bool, var_63_object, var_64_float)
{
	var_65_bool = var_63_object == 0; // 0x5b1 Not
	if(var_65_bool == 0) goto Label_1461; // 0x5b2 JumpB
	var_62_bool = 0; // 0x5b3 MovB
	return 0; // 0x5b4 Return
	
Label_1461:
	var_66_int = 0; // 0x5b5 PushI
	var_67_bool = var_64_float > var_66_int; // 0x5b6 GT
	if(var_67_bool == 0) goto Label_1468; // 0x5b7 JumpB
	var_68_int = 8; // 0x5b8 PushI
	SendWorldWndMessage(var_68_int); // 0x5b9 Func
	goto Label_1477; // 0x5bb Jump
	
Label_1477:
	var_69_float = 0; // 0x5c5 PushV
	var_69_float = var_64_float; // 0x5c6 Mov
	func_1491(var_69_float); // 0x5c7 NEW_2
	var_73_bool = 0; var_74_object = Obj(); var_75_string = ""; var_76_float = 0; var_77_float = 0; var_78_float = 0; // 0x5c9 PushV
	var_74_object = var_63_object; // 0x5ca Mov
	var_75_string = "reputation"; // 0x5cb MovS
	var_76_float = var_64_float; // 0x5cc Mov
	var_77_float = 0; // 0x5cd MovI
	var_78_float = 1; // 0x5ce MovI
	func_1067(var_73_bool, var_74_object, var_75_string, var_76_float, var_77_float, var_78_float); // 0x5cf NEW_2
	var_62_bool = 1; // 0x5d1 MovB
	return 0; // 0x5d2 Return
	
Label_1468:
	var_97_int = 0; // 0x5bc PushI
	var_98_bool = var_64_float < var_97_int; // 0x5bd LT
	if(var_98_bool == 0) goto Label_1475; // 0x5be JumpB
	var_99_int = 9; // 0x5bf PushI
	SendWorldWndMessage(var_99_int); // 0x5c0 Func
	goto Label_1477; // 0x5c2 Jump
	
Label_1475:
	var_62_bool = 0; // 0x5c3 MovB
	return 0; // 0x5c4 Return
}


func_1207(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0x4b7 PushV
	var_122_string = "voice_common"; // 0x4b8 PushS
	GetVariable(var_122_string, var_120_int); // 0x4b9 Func
	var_123_int = var_120_int; // 0x4bb Push
	if(var_123_int == 0) goto Label_1245; // 0x4bc JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x4bd PushV
	var_125_object = var_114_object; // 0x4be Mov
	func_1265(var_125_object); // 0x4bf NEW_2
	var_154_bool = var_124_bool == 0; // 0x4c1 Not
	if(var_154_bool == 0) goto Label_1227; // 0x4c2 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x4c3 PushV
	var_156_object = var_114_object; // 0x4c4 Mov
	func_1302(var_156_object); // 0x4c5 NEW_2
	var_185_bool = var_155_bool == 0; // 0x4c7 Not
	if(var_185_bool == 0) goto Label_1227; // 0x4c8 JumpB
	var_113_bool = 0; // 0x4c9 MovB
	return 4; // 0x4ca Return
	
Label_1227:
	var_186_int = 2; // 0x4cb PushI
	irand(var_121_int, var_186_int); // 0x4cc Func
	var_187_int = var_121_int; // 0x4ce Push
	if(var_187_int == 0) goto Label_1240; // 0x4cf JumpB
	var_188_string = "voice_common"; // 0x4d0 PushS
	var_189_int = 1; // 0x4d1 PushI
	var_190_int = var_120_int + var_189_int; // 0x4d2 Add
	var_191_int = 3; // 0x4d3 PushI
	var_192_int = var_190_int / var_191_int; // 0x4d4 Mod
	SetVariable(var_188_string, var_192_int); // 0x4d5 Func
	goto Label_1244; // 0x4d7 Jump
	
Label_1244:
	goto Label_1263; // 0x4dc Jump
	
Label_1263:
	var_113_bool = 1; // 0x4ef MovB
	return 4; // 0x4f0 Return
	
Label_1240:
	var_193_string = "voice_common"; // 0x4d8 PushS
	var_194_int = 0; // 0x4d9 PushI
	SetVariable(var_193_string, var_194_int); // 0x4da Func
	
Label_1245:
	var_195_bool = 0; var_196_object = Obj(); // 0x4dd PushV
	var_196_object = var_114_object; // 0x4de Mov
	func_1302(var_196_object); // 0x4df NEW_2
	var_197_bool = var_195_bool == 0; // 0x4e1 Not
	if(var_197_bool == 0) goto Label_1259; // 0x4e2 JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x4e3 PushV
	var_199_object = var_114_object; // 0x4e4 Mov
	func_1265(var_199_object); // 0x4e5 NEW_2
	var_200_bool = var_198_bool == 0; // 0x4e7 Not
	if(var_200_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_113_bool = 0; // 0x4e9 MovB
	return 4; // 0x4ea Return
	
Label_1259:
	var_201_string = "voice_common"; // 0x4eb PushS
	var_202_int = 1; // 0x4ec PushI
	SetVariable(var_201_string, var_202_int); // 0x4ed Func
}


func_1722(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x6ba PushV
	GetDiaryRoot(var_36_object); // 0x6bb Func
	var_37_bool = var_36_object == 0; // 0x6bd Not
	if(var_37_bool == 0) goto Label_1732; // 0x6be JumpB
	var_38_string = "Can't retrieve diary root"; // 0x6bf PushS
	Trace(var_38_string); // 0x6c0 Func
	var_34_object = 0; // 0x6c2 MovB
	return 2; // 0x6c3 Return
	
Label_1732:
	var_34_object = var_36_object; // 0x6c4 Mov
	return 2; // 0x6c5 Return
}


func_1735(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x6c7 PushV
	var_34_object = Obj(); // 0x6c8 PushV
	func_1722(var_34_object); // 0x6c9 NEW_2
	var_31_object = var_34_object; // 0x6ca Mov
	Find(var_27_int, var_32_object); // 0x6cc ObjFunc
	var_39_bool = var_32_object == 0; // 0x6ce Not
	if(var_39_bool == 0) goto Label_1750; // 0x6cf JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x6d0 PushS
	var_41_int = var_40_string + var_27_int; // 0x6d1 Add
	Trace(var_41_int); // 0x6d2 Func
	var_25_bool = 0; // 0x6d4 MovB
	return 6; // 0x6d5 Return
	
Label_1750:
	AddChild(var_26_object); // 0x6d6 ObjFunc
	var_42_int = 7; // 0x6d8 PushI
	SendWorldWndMessage(var_42_int); // 0x6d9 Func
	GetCategory(var_33_int); // 0x6db ObjFunc
	SetDiarySection(var_33_int); // 0x6dd Func
	var_25_bool = 0; // 0x6df MovB
	return 6; // 0x6e0 Return
}


func_203(var_0_object, var_41_int, var_42_object)
{
	var_44_object = Obj(); var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_object = Obj(); var_49_bool = 0; var_50_int = 0; var_51_bool = 0; // 0xcb PushV
	var_0_object = var_42_object; // 0xcc TMov
	var_52_bool = 0; var_53_object = Obj(); var_54_float = 0; // 0xcd PushV
	var_53_object = var_42_object; // 0xce Mov
	var_54_float = 70.0; // 0xcf MovF
	func_1120(var_53_object, var_54_float); // 0xd0 NEW_2
	var_99_bool = var_52_bool == 0; // 0xd2 Not
	if(var_99_bool == 0) goto Label_214; // 0xd3 JumpB
	var_41_int = -2; // 0xd4 MovI
	return 8; // 0xd5 Return
	
Label_214:
	CreateDialog(var_48_object); // 0xd6 Func
	var_100_int = 0; // 0xd8 PushV
	func_1548(var_100_int); // 0xd9 NEW_2
	SetNPCName(var_100_int); // 0xdb ObjFunc
	var_101_int = 0; // 0xdd PushV
	func_1546(var_101_int); // 0xde NEW_2
	SetNPCDescription(var_101_int); // 0xe0 ObjFunc
	var_102_string = ""; // 0xe2 PushV
	func_1550(var_102_string); // 0xe3 NEW_2
	SetPhoto(var_102_string); // 0xe5 ObjFunc
	var_103_string = ""; // 0xe7 PushV
	func_1552(var_103_string); // 0xe8 NEW_2
	SetPhoto2(var_103_string); // 0xea ObjFunc
	var_104_int = 0; // 0xec PushV
	func_1763(var_104_int); // 0xed NEW_2
	SetPlayerName(var_104_int); // 0xef ObjFunc
	var_50_int = -1; // 0xf1 MovI
	IsOverrideActive(var_49_bool); // 0xf2 Func
	var_112_bool = var_49_bool; // 0xf4 Push
	if(var_112_bool == 0) goto Label_248; // 0xf5 JumpB
	var_41_int = -2; // 0xf6 MovI
	return 8; // 0xf7 Return
	
Label_248:
	DoDialog(var_48_object); // 0xf8 Func
	var_113_bool = 0; var_114_object = Obj(); // 0xfa PushV
	var_115_object = Obj(); // 0xfb PushV
	func_1398(var_115_object); // 0xfc NEW_2
	var_114_object = var_115_object; // 0xfd Mov
	func_1207(var_113_bool, var_114_object); // 0xff NEW_2
	var_203_object = Obj(); var_204_object = Obj(); // 0x101 PushV
	var_203_object = var_42_object; // 0x102 Mov
	var_204_object = var_48_object; // 0x103 Mov
	TaskCall(3); // 0x104 TaskCall
	func_284(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object); // 0x105 NEW_2
	TaskReturn(); // 0x106 TaskReturn
	IsDialogEnd(var_51_bool); // 0x108 ObjFunc
	
Label_266:
	var_317_bool = var_51_bool == 0; // 0x10a Not
	if(var_317_bool == 0) goto Label_273; // 0x10b JumpB
	sync(); // 0x10c Func
	IsDialogEnd(var_51_bool); // 0x10e ObjFunc
	goto Label_266; // 0x110 Jump
	
Label_273:
	var_318_object = Obj(); // 0x111 PushV
	var_318_object = var_42_object; // 0x112 Mov
	func_1189(); // 0x113 NEW_2
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
	func_1529(var_30_int); // 0x3d5 NEW_2
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
	func_1522(var_57_string, var_58_int); // 0x3f9 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x3fb Func
	WaitForAnimEnd(var_27_bool); // 0x3fd Func
	var_59_bool = var_27_bool == 0; // 0x3ff Not
	if(var_59_bool == 0) goto Label_1026; // 0x400 JumpB
	goto Label_1037; // 0x401 Jump
}


func_1491(var_69_float)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x5d3 PushV
	CreateFloatVector(var_71_object); // 0x5d4 Func
	add(var_69_float); // 0x5d6 ObjFunc
	var_72_int = 16; // 0x5d8 PushI
	SendWorldWndMessage(var_72_int, var_71_object); // 0x5d9 Func
	return 2; // 0x5db Return
}


func_1501(var_54_bool, var_55_string, var_56_string)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x5dd PushV
	FindActor(var_58_object, var_55_string); // 0x5de Func
	var_59_bool = var_58_object == 0; // 0x5e0 NullEq
	if(var_59_bool == 0) goto Label_1508; // 0x5e1 JumpB
	var_54_bool = 0; // 0x5e2 MovB
	return 2; // 0x5e3 Return
	
Label_1508:
	Trigger(var_58_object, var_56_string); // 0x5e4 Func
	var_54_bool = 1; // 0x5e6 MovB
	return 2; // 0x5e7 Return
}


func_1763(var_104_int)
{
	var_105_int = 0; var_106_int = 0; // 0x6e3 PushV
	var_107_string = "branch"; // 0x6e4 PushS
	GetVariable(var_107_string, var_106_int); // 0x6e5 Func
	var_108_int = 0; // 0x6e7 PushI
	var_109_bool = var_106_int == var_108_int; // 0x6e8 Eq
	if(var_109_bool == 0) goto Label_1773; // 0x6e9 JumpB
	var_104_int = 1; // 0x6ea MovI
	return 2; // 0x6eb Return
	
Label_1773:
	var_110_int = 1; // 0x6ed PushI
	var_111_bool = var_106_int == var_110_int; // 0x6ee Eq
	if(var_111_bool == 0) goto Label_1778; // 0x6ef JumpB
	var_104_int = 2; // 0x6f0 MovI
	return 2; // 0x6f1 Return
	
Label_1778:
	var_104_int = 3; // 0x6f2 MovI
	return 2; // 0x6f3 Return
}


func_1513(var_34_int)
{
	var_35_float = 0; var_36_float = 0; // 0x5e9 PushV
	GetGameTime(var_36_float); // 0x5ea Func
	var_37_int = 1; // 0x5ec PushI
	var_38_int = 0; // 0x5ed PushV
	var_39_int = 24; // 0x5ee PushI
	var_38_int = var_36_float / var_36_float; // 0x5ef Div2
	var_34_int = var_37_int + var_38_int; // 0x5f0 Add2
	return 2; // 0x5f1 Return
}


func_1265(var_124_bool)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; // 0x4f1 PushV
	var_131_string = "c"; // 0x4f2 MovS
	var_132_int = 0; // 0x4f3 MovI
	
Label_1268:
	var_136_int = 1; // 0x4f4 PushI
	if(var_136_int == 0) goto Label_1281; // 0x4f5 JumpB
	var_137_int = 1; // 0x4f6 PushI
	var_138_int = var_132_int + var_137_int; // 0x4f7 Add
	var_139_int = var_131_string + var_138_int; // 0x4f8 Add
	HasProperty(var_139_int, var_133_bool); // 0x4f9 ObjFunc
	var_140_bool = var_133_bool == 0; // 0x4fb Not
	if(var_140_bool == 0) goto Label_1278; // 0x4fc JumpB
	goto Label_1281; // 0x4fd Jump
	
Label_1281:
	var_141_bool = var_132_int == 0; // 0x501 Not
	if(var_141_bool == 0) goto Label_1285; // 0x502 JumpB
	var_124_bool = 0; // 0x503 MovB
	return 10; // 0x504 Return
	
Label_1285:
	var_134_int = 0; // 0x505 MovI
	var_142_int = 1; // 0x506 PushI
	var_143_bool = var_132_int > var_142_int; // 0x507 GT
	if(var_143_bool == 0) goto Label_1291; // 0x508 JumpB
	irand(var_134_int, var_132_int); // 0x509 Func
	
Label_1291:
	var_144_int = 1; // 0x50b PushI
	var_145_int = var_134_int + var_144_int; // 0x50c Add
	var_146_int = var_131_string + var_145_int; // 0x50d Add
	GetProperty(var_146_int, var_135_string); // 0x50e ObjFunc
	var_147_bool = 0; var_148_string = ""; // 0x510 PushV
	var_148_string = var_135_string; // 0x511 Mov
	func_1376(var_147_bool, var_148_string); // 0x512 NEW_2
	var_124_bool = var_147_bool; // 0x513 Mov
	return 10; // 0x515 Return
	
Label_1278:
	var_153_int = 1; // 0x4fe PushI
	var_132_int = var_132_int + var_153_int; // 0x4ff Add2
	goto Label_1268; // 0x500 Jump
}


func_754()
{
	func_795(var_11_bool); // 0x2f3 NEW_2
	return 0; // 0x2f5 Return
}


func_1522(var_36_string, var_37_int)
{
	var_38_string = ""; var_39_string = ""; // 0x5f2 PushV
	var_39_string = "idle"; // 0x5f3 MovS
	var_40_int = var_37_int; // 0x5f4 Push
	if(var_40_int == 0) goto Label_1527; // 0x5f5 JumpB
	var_39_string = var_39_string + var_37_int; // 0x5f6 Add2
	
Label_1527:
	var_36_string = var_39_string; // 0x5f7 Mov
	return 2; // 0x5f8 Return
}


func_1780()
{
	var_54_bool = 0; var_55_string = ""; var_56_string = ""; // 0x6f4 PushV
	var_55_string = "klara2_npc_positioner"; // 0x6f5 MovS
	var_56_string = "remove_danko"; // 0x6f6 MovS
	func_1501(var_54_bool, var_55_string, var_56_string); // 0x6f7 NEW_2
	return 0; // 0x6f9 Return
}


func_1529(var_30_int)
{
	var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x5f9 PushV
	var_33_int = 0; // 0x5fa MovI
	
Label_1531:
	var_35_string = "all"; // 0x5fb PushS
	var_36_string = ""; var_37_int = 0; // 0x5fc PushV
	var_37_int = var_33_int; // 0x5fd Mov
	func_1522(var_36_string, var_37_int); // 0x5fe NEW_2
	HasAnimation(var_34_bool, var_35_string, var_36_string); // 0x600 Func
	var_41_bool = var_34_bool == 0; // 0x602 Not
	if(var_41_bool == 0) goto Label_1541; // 0x603 JumpB
	goto Label_1544; // 0x604 Jump
	
Label_1544:
	var_30_int = var_33_int; // 0x608 Mov
	return 4; // 0x609 Return
	
Label_1541:
	var_42_int = 1; // 0x605 PushI
	var_33_int = var_33_int + var_42_int; // 0x606 Add2
	goto Label_1531; // 0x607 Jump
}


func_1786()
{
	var_136_bool = 0; var_137_string = ""; var_138_string = ""; // 0x6fa PushV
	var_137_string = "klara2_npc_positioner"; // 0x6fb MovS
	var_138_string = "remove_burah"; // 0x6fc MovS
	func_1501(var_136_bool, var_137_string, var_138_string); // 0x6fd NEW_2
	return 0; // 0x6ff Return
}


