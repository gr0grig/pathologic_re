task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x127 PushI
	if(var_43_int == 0) goto Label_1002; // 0x128 JumpB
	func_4655(); // 0x12a NEW_2
	var_45_int = 26100; // 0x12c PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x12d Eq
	if(var_46_bool == 0) goto Label_313; // 0x12e JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x12f PushV
	var_47_object = var_1_object; // 0x130 MovT
	var_48_object = var_0_object; // 0x131 MovT
	func_4897(); // 0x132 NEW_2
	var_98_object = Obj(); var_99_object = Obj(); // 0x134 PushV
	var_98_object = var_1_object; // 0x135 MovT
	var_99_object = var_0_object; // 0x136 MovT
	func_4856(); // 0x137 NEW_2
	
Label_313:
	var_124_int = 26104; // 0x139 PushI
	var_125_bool = var_42_cvector == var_124_int; // 0x13a Eq
	if(var_125_bool == 0) goto Label_326; // 0x13b JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0x13c PushV
	var_126_object = var_1_object; // 0x13d MovT
	var_127_object = var_0_object; // 0x13e MovT
	func_4897(); // 0x13f NEW_2
	var_128_object = Obj(); var_129_object = Obj(); // 0x141 PushV
	var_128_object = var_1_object; // 0x142 MovT
	var_129_object = var_0_object; // 0x143 MovT
	func_4856(); // 0x144 NEW_2
	
Label_326:
	var_130_int = 44350; // 0x146 PushI
	var_131_bool = var_42_cvector == var_130_int; // 0x147 Eq
	if(var_131_bool == 0) goto Label_339; // 0x148 JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0x149 PushV
	var_132_object = var_1_object; // 0x14a MovT
	var_133_object = var_0_object; // 0x14b MovT
	func_4923(); // 0x14c NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0x14e PushV
	var_144_object = var_1_object; // 0x14f MovT
	var_145_object = var_0_object; // 0x150 MovT
	func_4872(var_145_object); // 0x151 NEW_2
	
Label_339:
	var_184_int = 26113; // 0x153 PushI
	var_185_bool = var_42_cvector == var_184_int; // 0x154 Eq
	if(var_185_bool == 0) goto Label_357; // 0x155 JumpB
	var_186_object = Obj(); var_187_object = Obj(); // 0x156 PushV
	var_186_object = var_1_object; // 0x157 MovT
	var_187_object = var_0_object; // 0x158 MovT
	func_4923(); // 0x159 NEW_2
	var_188_object = Obj(); var_189_object = Obj(); // 0x15b PushV
	var_188_object = var_1_object; // 0x15c MovT
	var_189_object = var_0_object; // 0x15d MovT
	func_5157(var_189_object); // 0x15e NEW_2
	var_209_object = Obj(); var_210_object = Obj(); // 0x160 PushV
	var_209_object = var_1_object; // 0x161 MovT
	var_210_object = var_0_object; // 0x162 MovT
	func_5145(); // 0x163 NEW_2
	
Label_357:
	var_213_int = 26029; // 0x165 PushI
	var_214_bool = var_41_bool == var_213_int; // 0x166 Eq
	if(var_214_bool == 0) goto Label_513; // 0x167 JumpB
	var_215_bool = 0; // 0x168 PushV
	var_215_bool = 0; // 0x169 MovB
	var_216_bool = 0; var_217_object = Obj(); // 0x16a PushV
	var_217_object = var_1_object; // 0x16b MovT
	func_5173(var_217_object); // 0x16c NEW_2
	if(var_216_bool == 0) goto Label_373; // 0x16e JumpB
	var_224_bool = 0; var_225_object = Obj(); // 0x16f PushV
	var_225_object = var_1_object; // 0x170 MovT
	func_5185(var_225_object); // 0x171 NEW_2
	if(var_224_bool == 0) goto Label_373; // 0x173 JumpB
	var_215_bool = 1; // 0x174 MovB
	
Label_373:
	if(var_215_bool == 0) goto Label_399; // 0x175 JumpB
	var_230_object = Obj(); var_231_object = Obj(); // 0x176 PushV
	var_230_object = var_1_object; // 0x177 MovT
	var_231_object = var_0_object; // 0x178 MovT
	func_4879(); // 0x179 NEW_2
	var_234_string = ""; // 0x17b PushV
	var_234_string = "Fear"; // 0x17c MovS
	func_272(var_42_cvector, var_234_string); // 0x17d NEW_2
	var_251_int = 524690; // 0x17f PushI
	SetMessage(var_251_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_252_int = 524691; // 0x184 PushI
	var_253_int = 28130; // 0x185 PushI
	var_254_int = 26030; // 0x186 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x187 TObjFunc
	var_255_int = 542043; // 0x189 PushI
	var_256_int = 44323; // 0x18a PushI
	var_257_int = 44322; // 0x18b PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x18c TObjFunc
	return 0; // 0x18e Return
	
Label_399:
	var_258_bool = 0; // 0x18f PushV
	var_258_bool = 0; // 0x190 MovB
	var_259_bool = 0; var_260_object = Obj(); // 0x191 PushV
	var_260_object = var_1_object; // 0x192 MovT
	func_5197(var_260_object); // 0x193 NEW_2
	if(var_259_bool == 0) goto Label_412; // 0x195 JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x196 PushV
	var_266_object = var_1_object; // 0x197 MovT
	func_5209(var_266_object); // 0x198 NEW_2
	if(var_265_bool == 0) goto Label_412; // 0x19a JumpB
	var_258_bool = 1; // 0x19b MovB
	
Label_412:
	if(var_258_bool == 0) goto Label_438; // 0x19c JumpB
	var_271_object = Obj(); var_272_object = Obj(); // 0x19d PushV
	var_271_object = var_1_object; // 0x19e MovT
	var_272_object = var_0_object; // 0x19f MovT
	func_4885(); // 0x1a0 NEW_2
	var_275_string = ""; // 0x1a2 PushV
	var_275_string = "Neutral"; // 0x1a3 MovS
	func_272(var_42_cvector, var_275_string); // 0x1a4 NEW_2
	var_276_int = 524707; // 0x1a6 PushI
	SetMessage(var_276_int); // 0x1a7 TObjFunc
	ClearReplies(); // 0x1a9 TObjFunc
	var_277_int = 524708; // 0x1ab PushI
	var_278_int = 28139; // 0x1ac PushI
	var_279_int = 26047; // 0x1ad PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x1ae TObjFunc
	var_280_int = 542053; // 0x1b0 PushI
	var_281_int = 28139; // 0x1b1 PushI
	var_282_int = 44336; // 0x1b2 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x1b3 TObjFunc
	return 0; // 0x1b5 Return
	
Label_438:
	var_283_bool = 0; var_284_object = Obj(); // 0x1b6 PushV
	var_284_object = var_1_object; // 0x1b7 MovT
	func_5221(var_284_object); // 0x1b8 NEW_2
	if(var_283_bool == 0) goto Label_468; // 0x1ba JumpB
	var_289_object = Obj(); var_290_object = Obj(); // 0x1bb PushV
	var_289_object = var_1_object; // 0x1bc MovT
	var_290_object = var_0_object; // 0x1bd MovT
	func_4891(); // 0x1be NEW_2
	var_293_string = ""; // 0x1c0 PushV
	var_293_string = "Fear"; // 0x1c1 MovS
	func_272(var_42_cvector, var_293_string); // 0x1c2 NEW_2
	var_294_int = 524780; // 0x1c4 PushI
	SetMessage(var_294_int); // 0x1c5 TObjFunc
	ClearReplies(); // 0x1c7 TObjFunc
	var_295_int = 526860; // 0x1c9 PushI
	var_296_int = 28146; // 0x1ca PushI
	var_297_int = 28145; // 0x1cb PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x1cc TObjFunc
	var_298_int = 542054; // 0x1ce PushI
	var_299_int = 28146; // 0x1cf PushI
	var_300_int = 44338; // 0x1d0 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x1d1 TObjFunc
	return 0; // 0x1d3 Return
	
Label_468:
	var_301_string = ""; // 0x1d4 PushV
	var_301_string = "Dream"; // 0x1d5 MovS
	func_272(var_42_cvector, var_301_string); // 0x1d6 NEW_2
	var_302_int = 524709; // 0x1d8 PushI
	SetMessage(var_302_int); // 0x1d9 TObjFunc
	ClearReplies(); // 0x1db TObjFunc
	var_303_bool = 0; // 0x1dd PushV
	var_303_bool = 0; // 0x1de MovB
	var_304_bool = 0; var_305_object = Obj(); // 0x1df PushV
	var_305_object = var_1_object; // 0x1e0 MovT
	func_5233(var_305_object); // 0x1e1 NEW_2
	if(var_304_bool == 0) goto Label_491; // 0x1e3 JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0x1e4 PushV
	var_311_object = var_1_object; // 0x1e5 MovT
	func_5221(var_311_object); // 0x1e6 NEW_2
	var_312_bool = var_310_bool == 0; // 0x1e8 Not
	if(var_312_bool == 0) goto Label_491; // 0x1e9 JumpB
	var_303_bool = 1; // 0x1ea MovB
	
Label_491:
	if(var_303_bool == 0) goto Label_497; // 0x1eb JumpB
	var_313_int = 524787; // 0x1ec PushI
	var_314_int = 26103; // 0x1ed PushI
	var_315_int = 26102; // 0x1ee PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x1ef TObjFunc
	
Label_497:
	var_316_bool = 0; var_317_object = Obj(); // 0x1f1 PushV
	var_317_object = var_1_object; // 0x1f2 MovT
	func_5245(var_317_object); // 0x1f3 NEW_2
	if(var_316_bool == 0) goto Label_507; // 0x1f5 JumpB
	var_322_int = 524796; // 0x1f6 PushI
	var_323_int = 28156; // 0x1f7 PushI
	var_324_int = 26111; // 0x1f8 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x1f9 TObjFunc
	
Label_507:
	var_325_int = 524710; // 0x1fb PushI
	var_326_int = -1; // 0x1fc PushI
	var_327_int = 26049; // 0x1fd PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x1fe TObjFunc
	return 0; // 0x200 Return
	
Label_513:
	var_328_int = 28156; // 0x201 PushI
	var_329_bool = var_41_bool == var_328_int; // 0x202 Eq
	if(var_329_bool == 0) goto Label_541; // 0x203 JumpB
	var_330_string = ""; // 0x204 PushV
	var_330_string = "Adoration"; // 0x205 MovS
	func_272(var_42_cvector, var_330_string); // 0x206 NEW_2
	var_331_int = 526870; // 0x208 PushI
	SetMessage(var_331_int); // 0x209 TObjFunc
	ClearReplies(); // 0x20b TObjFunc
	var_332_int = 526871; // 0x20d PushI
	var_333_int = 44381; // 0x20e PushI
	var_334_int = 28157; // 0x20f PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x210 TObjFunc
	var_335_int = 542072; // 0x212 PushI
	var_336_int = 44363; // 0x213 PushI
	var_337_int = 44362; // 0x214 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x215 TObjFunc
	var_338_int = 526872; // 0x217 PushI
	var_339_int = 28155; // 0x218 PushI
	var_340_int = 28158; // 0x219 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x21a TObjFunc
	return 0; // 0x21c Return
	
Label_541:
	var_341_int = 44363; // 0x21d PushI
	var_342_bool = var_41_bool == var_341_int; // 0x21e Eq
	if(var_342_bool == 0) goto Label_564; // 0x21f JumpB
	var_343_string = ""; // 0x220 PushV
	var_343_string = "Adoration"; // 0x221 MovS
	func_272(var_42_cvector, var_343_string); // 0x222 NEW_2
	var_344_int = 542073; // 0x224 PushI
	SetMessage(var_344_int); // 0x225 TObjFunc
	ClearReplies(); // 0x227 TObjFunc
	var_345_int = 542077; // 0x229 PushI
	var_346_int = 26112; // 0x22a PushI
	var_347_int = 44367; // 0x22b PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x22c TObjFunc
	var_348_int = 542078; // 0x22e PushI
	var_349_int = 26112; // 0x22f PushI
	var_350_int = 44368; // 0x230 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x231 TObjFunc
	return 0; // 0x233 Return
	
Label_564:
	var_351_int = 44381; // 0x234 PushI
	var_352_bool = var_41_bool == var_351_int; // 0x235 Eq
	if(var_352_bool == 0) goto Label_583; // 0x236 JumpB
	var_353_int = 542087; // 0x237 PushI
	SetMessage(var_353_int); // 0x238 TObjFunc
	ClearReplies(); // 0x23a TObjFunc
	var_354_int = 542088; // 0x23c PushI
	var_355_int = 26112; // 0x23d PushI
	var_356_int = 44382; // 0x23e PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x23f TObjFunc
	var_357_int = 542090; // 0x241 PushI
	var_358_int = 26112; // 0x242 PushI
	var_359_int = 44384; // 0x243 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x244 TObjFunc
	return 0; // 0x246 Return
	
Label_583:
	var_360_int = 26112; // 0x247 PushI
	var_361_bool = var_41_bool == var_360_int; // 0x248 Eq
	if(var_361_bool == 0) goto Label_601; // 0x249 JumpB
	var_362_string = ""; // 0x24a PushV
	var_362_string = "Rage"; // 0x24b MovS
	func_272(var_42_cvector, var_362_string); // 0x24c NEW_2
	var_363_int = 524797; // 0x24e PushI
	SetMessage(var_363_int); // 0x24f TObjFunc
	ClearReplies(); // 0x251 TObjFunc
	var_364_int = 526868; // 0x253 PushI
	var_365_int = 28155; // 0x254 PushI
	var_366_int = 28154; // 0x255 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x256 TObjFunc
	return 0; // 0x258 Return
	
Label_601:
	var_367_int = 28155; // 0x259 PushI
	var_368_bool = var_41_bool == var_367_int; // 0x25a Eq
	if(var_368_bool == 0) goto Label_624; // 0x25b JumpB
	var_369_string = ""; // 0x25c PushV
	var_369_string = "Neutral"; // 0x25d MovS
	func_272(var_42_cvector, var_369_string); // 0x25e NEW_2
	var_370_int = 526869; // 0x260 PushI
	SetMessage(var_370_int); // 0x261 TObjFunc
	ClearReplies(); // 0x263 TObjFunc
	var_371_int = 542062; // 0x265 PushI
	var_372_int = -1; // 0x266 PushI
	var_373_int = 44350; // 0x267 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x268 TObjFunc
	var_374_int = 542091; // 0x26a PushI
	var_375_int = 44390; // 0x26b PushI
	var_376_int = 44389; // 0x26c PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x26d TObjFunc
	return 0; // 0x26f Return
	
Label_624:
	var_377_int = 44390; // 0x270 PushI
	var_378_bool = var_41_bool == var_377_int; // 0x271 Eq
	if(var_378_bool == 0) goto Label_642; // 0x272 JumpB
	var_379_string = ""; // 0x273 PushV
	var_379_string = "Adoration"; // 0x274 MovS
	func_272(var_42_cvector, var_379_string); // 0x275 NEW_2
	var_380_int = 542092; // 0x277 PushI
	SetMessage(var_380_int); // 0x278 TObjFunc
	ClearReplies(); // 0x27a TObjFunc
	var_381_int = 524798; // 0x27c PushI
	var_382_int = -1; // 0x27d PushI
	var_383_int = 26113; // 0x27e PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x27f TObjFunc
	return 0; // 0x281 Return
	
Label_642:
	var_384_int = 26103; // 0x282 PushI
	var_385_bool = var_41_bool == var_384_int; // 0x283 Eq
	if(var_385_bool == 0) goto Label_660; // 0x284 JumpB
	var_386_string = ""; // 0x285 PushV
	var_386_string = "Adoration"; // 0x286 MovS
	func_272(var_42_cvector, var_386_string); // 0x287 NEW_2
	var_387_int = 524788; // 0x289 PushI
	SetMessage(var_387_int); // 0x28a TObjFunc
	ClearReplies(); // 0x28c TObjFunc
	var_388_int = 524789; // 0x28e PushI
	var_389_int = -1; // 0x28f PushI
	var_390_int = 26104; // 0x290 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x291 TObjFunc
	return 0; // 0x293 Return
	
Label_660:
	var_391_int = 28146; // 0x294 PushI
	var_392_bool = var_41_bool == var_391_int; // 0x295 Eq
	if(var_392_bool == 0) goto Label_688; // 0x296 JumpB
	var_393_string = ""; // 0x297 PushV
	var_393_string = "Fear"; // 0x298 MovS
	func_272(var_42_cvector, var_393_string); // 0x299 NEW_2
	var_394_int = 526861; // 0x29b PushI
	SetMessage(var_394_int); // 0x29c TObjFunc
	ClearReplies(); // 0x29e TObjFunc
	var_395_int = 542064; // 0x2a0 PushI
	var_396_int = 44355; // 0x2a1 PushI
	var_397_int = 44352; // 0x2a2 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x2a3 TObjFunc
	var_398_int = 542069; // 0x2a5 PushI
	var_399_int = 44355; // 0x2a6 PushI
	var_400_int = 44357; // 0x2a7 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x2a8 TObjFunc
	var_401_int = 542070; // 0x2aa PushI
	var_402_int = 44364; // 0x2ab PushI
	var_403_int = 44358; // 0x2ac PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x2ad TObjFunc
	return 0; // 0x2af Return
	
Label_688:
	var_404_int = 44364; // 0x2b0 PushI
	var_405_bool = var_41_bool == var_404_int; // 0x2b1 Eq
	if(var_405_bool == 0) goto Label_711; // 0x2b2 JumpB
	var_406_string = ""; // 0x2b3 PushV
	var_406_string = "Dream"; // 0x2b4 MovS
	func_272(var_42_cvector, var_406_string); // 0x2b5 NEW_2
	var_407_int = 542074; // 0x2b7 PushI
	SetMessage(var_407_int); // 0x2b8 TObjFunc
	ClearReplies(); // 0x2ba TObjFunc
	var_408_int = 542075; // 0x2bc PushI
	var_409_int = -1; // 0x2bd PushI
	var_410_int = 44365; // 0x2be PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x2bf TObjFunc
	var_411_int = 542076; // 0x2c1 PushI
	var_412_int = -1; // 0x2c2 PushI
	var_413_int = 44366; // 0x2c3 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x2c4 TObjFunc
	return 0; // 0x2c6 Return
	
Label_711:
	var_414_int = 44355; // 0x2c7 PushI
	var_415_bool = var_41_bool == var_414_int; // 0x2c8 Eq
	if(var_415_bool == 0) goto Label_734; // 0x2c9 JumpB
	var_416_string = ""; // 0x2ca PushV
	var_416_string = "Rage"; // 0x2cb MovS
	func_272(var_42_cvector, var_416_string); // 0x2cc NEW_2
	var_417_int = 542067; // 0x2ce PushI
	SetMessage(var_417_int); // 0x2cf TObjFunc
	ClearReplies(); // 0x2d1 TObjFunc
	var_418_int = 542068; // 0x2d3 PushI
	var_419_int = 44353; // 0x2d4 PushI
	var_420_int = 44356; // 0x2d5 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x2d6 TObjFunc
	var_421_int = 542071; // 0x2d8 PushI
	var_422_int = 44353; // 0x2d9 PushI
	var_423_int = 44359; // 0x2da PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x2db TObjFunc
	return 0; // 0x2dd Return
	
Label_734:
	var_424_int = 44353; // 0x2de PushI
	var_425_bool = var_41_bool == var_424_int; // 0x2df Eq
	if(var_425_bool == 0) goto Label_757; // 0x2e0 JumpB
	var_426_string = ""; // 0x2e1 PushV
	var_426_string = "Rage"; // 0x2e2 MovS
	func_272(var_42_cvector, var_426_string); // 0x2e3 NEW_2
	var_427_int = 542065; // 0x2e5 PushI
	SetMessage(var_427_int); // 0x2e6 TObjFunc
	ClearReplies(); // 0x2e8 TObjFunc
	var_428_int = 526862; // 0x2ea PushI
	var_429_int = 28148; // 0x2eb PushI
	var_430_int = 28147; // 0x2ec PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x2ed TObjFunc
	var_431_int = 526865; // 0x2ef PushI
	var_432_int = 28148; // 0x2f0 PushI
	var_433_int = 28150; // 0x2f1 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x2f2 TObjFunc
	return 0; // 0x2f4 Return
	
Label_757:
	var_434_int = 28148; // 0x2f5 PushI
	var_435_bool = var_41_bool == var_434_int; // 0x2f6 Eq
	if(var_435_bool == 0) goto Label_780; // 0x2f7 JumpB
	var_436_string = ""; // 0x2f8 PushV
	var_436_string = "Neutral"; // 0x2f9 MovS
	func_272(var_42_cvector, var_436_string); // 0x2fa NEW_2
	var_437_int = 526863; // 0x2fc PushI
	SetMessage(var_437_int); // 0x2fd TObjFunc
	ClearReplies(); // 0x2ff TObjFunc
	var_438_int = 524783; // 0x301 PushI
	var_439_int = 26099; // 0x302 PushI
	var_440_int = 26098; // 0x303 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x304 TObjFunc
	var_441_int = 542056; // 0x306 PushI
	var_442_int = 26099; // 0x307 PushI
	var_443_int = 44341; // 0x308 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x309 TObjFunc
	return 0; // 0x30b Return
	
Label_780:
	var_444_int = 26099; // 0x30c PushI
	var_445_bool = var_41_bool == var_444_int; // 0x30d Eq
	if(var_445_bool == 0) goto Label_803; // 0x30e JumpB
	var_446_string = ""; // 0x30f PushV
	var_446_string = "Neutral"; // 0x310 MovS
	func_272(var_42_cvector, var_446_string); // 0x311 NEW_2
	var_447_int = 524784; // 0x313 PushI
	SetMessage(var_447_int); // 0x314 TObjFunc
	ClearReplies(); // 0x316 TObjFunc
	var_448_int = 524785; // 0x318 PushI
	var_449_int = -1; // 0x319 PushI
	var_450_int = 26100; // 0x31a PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x31b TObjFunc
	var_451_int = 524786; // 0x31d PushI
	var_452_int = -1; // 0x31e PushI
	var_453_int = 26101; // 0x31f PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x320 TObjFunc
	return 0; // 0x322 Return
	
Label_803:
	var_454_int = 28139; // 0x323 PushI
	var_455_bool = var_41_bool == var_454_int; // 0x324 Eq
	if(var_455_bool == 0) goto Label_826; // 0x325 JumpB
	var_456_string = ""; // 0x326 PushV
	var_456_string = "Adoration"; // 0x327 MovS
	func_272(var_42_cvector, var_456_string); // 0x328 NEW_2
	var_457_int = 526854; // 0x32a PushI
	SetMessage(var_457_int); // 0x32b TObjFunc
	ClearReplies(); // 0x32d TObjFunc
	var_458_int = 526855; // 0x32f PushI
	var_459_int = 28142; // 0x330 PushI
	var_460_int = 28140; // 0x331 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x332 TObjFunc
	var_461_int = 526856; // 0x334 PushI
	var_462_int = -1; // 0x335 PushI
	var_463_int = 28141; // 0x336 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x337 TObjFunc
	return 0; // 0x339 Return
	
Label_826:
	var_464_int = 28142; // 0x33a PushI
	var_465_bool = var_41_bool == var_464_int; // 0x33b Eq
	if(var_465_bool == 0) goto Label_849; // 0x33c JumpB
	var_466_string = ""; // 0x33d PushV
	var_466_string = "Adoration"; // 0x33e MovS
	func_272(var_42_cvector, var_466_string); // 0x33f NEW_2
	var_467_int = 526857; // 0x341 PushI
	SetMessage(var_467_int); // 0x342 TObjFunc
	ClearReplies(); // 0x344 TObjFunc
	var_468_int = 526858; // 0x346 PushI
	var_469_int = -1; // 0x347 PushI
	var_470_int = 28143; // 0x348 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x349 TObjFunc
	var_471_int = 526859; // 0x34b PushI
	var_472_int = -1; // 0x34c PushI
	var_473_int = 28144; // 0x34d PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x34e TObjFunc
	return 0; // 0x350 Return
	
Label_849:
	var_474_int = 44323; // 0x351 PushI
	var_475_bool = var_41_bool == var_474_int; // 0x352 Eq
	if(var_475_bool == 0) goto Label_872; // 0x353 JumpB
	var_476_string = ""; // 0x354 PushV
	var_476_string = "Dream"; // 0x355 MovS
	func_272(var_42_cvector, var_476_string); // 0x356 NEW_2
	var_477_int = 542044; // 0x358 PushI
	SetMessage(var_477_int); // 0x359 TObjFunc
	ClearReplies(); // 0x35b TObjFunc
	var_478_int = 542045; // 0x35d PushI
	var_479_int = 44327; // 0x35e PushI
	var_480_int = 44324; // 0x35f PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x360 TObjFunc
	var_481_int = 542046; // 0x362 PushI
	var_482_int = 28132; // 0x363 PushI
	var_483_int = 44325; // 0x364 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x365 TObjFunc
	return 0; // 0x367 Return
	
Label_872:
	var_484_int = 28130; // 0x368 PushI
	var_485_bool = var_41_bool == var_484_int; // 0x369 Eq
	if(var_485_bool == 0) goto Label_895; // 0x36a JumpB
	var_486_string = ""; // 0x36b PushV
	var_486_string = "Rage"; // 0x36c MovS
	func_272(var_42_cvector, var_486_string); // 0x36d NEW_2
	var_487_int = 526845; // 0x36f PushI
	SetMessage(var_487_int); // 0x370 TObjFunc
	ClearReplies(); // 0x372 TObjFunc
	var_488_int = 526846; // 0x374 PushI
	var_489_int = 28132; // 0x375 PushI
	var_490_int = 28131; // 0x376 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x377 TObjFunc
	var_491_int = 542047; // 0x379 PushI
	var_492_int = 44327; // 0x37a PushI
	var_493_int = 44326; // 0x37b PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x37c TObjFunc
	return 0; // 0x37e Return
	
Label_895:
	var_494_int = 44327; // 0x37f PushI
	var_495_bool = var_41_bool == var_494_int; // 0x380 Eq
	if(var_495_bool == 0) goto Label_913; // 0x381 JumpB
	var_496_string = ""; // 0x382 PushV
	var_496_string = "Dream"; // 0x383 MovS
	func_272(var_42_cvector, var_496_string); // 0x384 NEW_2
	var_497_int = 542048; // 0x386 PushI
	SetMessage(var_497_int); // 0x387 TObjFunc
	ClearReplies(); // 0x389 TObjFunc
	var_498_int = 542050; // 0x38b PushI
	var_499_int = 44333; // 0x38c PushI
	var_500_int = 44331; // 0x38d PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x38e TObjFunc
	return 0; // 0x390 Return
	
Label_913:
	var_501_int = 44333; // 0x391 PushI
	var_502_bool = var_41_bool == var_501_int; // 0x392 Eq
	if(var_502_bool == 0) goto Label_931; // 0x393 JumpB
	var_503_string = ""; // 0x394 PushV
	var_503_string = "Neutral"; // 0x395 MovS
	func_272(var_42_cvector, var_503_string); // 0x396 NEW_2
	var_504_int = 542051; // 0x398 PushI
	SetMessage(var_504_int); // 0x399 TObjFunc
	ClearReplies(); // 0x39b TObjFunc
	var_505_int = 542052; // 0x39d PushI
	var_506_int = 28134; // 0x39e PushI
	var_507_int = 44334; // 0x39f PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x3a0 TObjFunc
	return 0; // 0x3a2 Return
	
Label_931:
	var_508_int = 28132; // 0x3a3 PushI
	var_509_bool = var_41_bool == var_508_int; // 0x3a4 Eq
	if(var_509_bool == 0) goto Label_949; // 0x3a5 JumpB
	var_510_string = ""; // 0x3a6 PushV
	var_510_string = "Rage"; // 0x3a7 MovS
	func_272(var_42_cvector, var_510_string); // 0x3a8 NEW_2
	var_511_int = 526847; // 0x3aa PushI
	SetMessage(var_511_int); // 0x3ab TObjFunc
	ClearReplies(); // 0x3ad TObjFunc
	var_512_int = 526848; // 0x3af PushI
	var_513_int = 28134; // 0x3b0 PushI
	var_514_int = 28133; // 0x3b1 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x3b2 TObjFunc
	return 0; // 0x3b4 Return
	
Label_949:
	var_515_int = 28134; // 0x3b5 PushI
	var_516_bool = var_41_bool == var_515_int; // 0x3b6 Eq
	if(var_516_bool == 0) goto Label_967; // 0x3b7 JumpB
	var_517_string = ""; // 0x3b8 PushV
	var_517_string = "Rage"; // 0x3b9 MovS
	func_272(var_42_cvector, var_517_string); // 0x3ba NEW_2
	var_518_int = 526849; // 0x3bc PushI
	SetMessage(var_518_int); // 0x3bd TObjFunc
	ClearReplies(); // 0x3bf TObjFunc
	var_519_int = 526850; // 0x3c1 PushI
	var_520_int = 28136; // 0x3c2 PushI
	var_521_int = 28135; // 0x3c3 PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x3c4 TObjFunc
	return 0; // 0x3c6 Return
	
Label_967:
	var_522_int = 28136; // 0x3c7 PushI
	var_523_bool = var_41_bool == var_522_int; // 0x3c8 Eq
	if(var_523_bool == 0) goto Label_990; // 0x3c9 JumpB
	var_524_string = ""; // 0x3ca PushV
	var_524_string = "Neutral"; // 0x3cb MovS
	func_272(var_42_cvector, var_524_string); // 0x3cc NEW_2
	var_525_int = 526851; // 0x3ce PushI
	SetMessage(var_525_int); // 0x3cf TObjFunc
	ClearReplies(); // 0x3d1 TObjFunc
	var_526_int = 526852; // 0x3d3 PushI
	var_527_int = -1; // 0x3d4 PushI
	var_528_int = 28137; // 0x3d5 PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x3d6 TObjFunc
	var_529_int = 526853; // 0x3d8 PushI
	var_530_int = -1; // 0x3d9 PushI
	var_531_int = 28138; // 0x3da PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x3db TObjFunc
	return 0; // 0x3dd Return
	
Label_990:
	var_3_string = 1; // 0x3de TMovB
	var_532_bool = 0; // 0x3df PushV
	func_4854(var_532_bool); // 0x3e0 NEW_2
	if(var_532_bool == 0) goto Label_998; // 0x3e2 JumpB
	lshStopAnimation(); // 0x3e3 Func
	goto Label_1000; // 0x3e5 Jump
	
Label_1000:
	return 0; // 0x3e8 Return
	
Label_998:
	StopAnimation(); // 0x3e6 Func
	
Label_1002:
	return 0; // 0x3ea Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x4a1 PushI
	if(var_43_int == 0) goto Label_1514; // 0x4a2 JumpB
	func_4655(); // 0x4a4 NEW_2
	var_45_int = 26722; // 0x4a6 PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x4a7 Eq
	if(var_46_bool == 0) goto Label_1198; // 0x4a8 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x4a9 PushV
	var_47_object = var_1_object; // 0x4aa MovT
	var_48_object = var_0_object; // 0x4ab MovT
	func_4932(); // 0x4ac NEW_2
	
Label_1198:
	var_100_int = 26725; // 0x4ae PushI
	var_101_bool = var_42_cvector == var_100_int; // 0x4af Eq
	if(var_101_bool == 0) goto Label_1221; // 0x4b0 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x4b1 PushV
	var_102_object = var_1_object; // 0x4b2 MovT
	var_103_object = var_0_object; // 0x4b3 MovT
	func_4973(); // 0x4b4 NEW_2
	var_114_object = Obj(); var_115_object = Obj(); // 0x4b6 PushV
	var_114_object = var_1_object; // 0x4b7 MovT
	var_115_object = var_0_object; // 0x4b8 MovT
	func_4982(var_115_object); // 0x4b9 NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0x4bb PushV
	var_138_object = var_1_object; // 0x4bc MovT
	var_139_object = var_0_object; // 0x4bd MovT
	func_4993(var_139_object); // 0x4be NEW_2
	var_144_object = Obj(); var_145_object = Obj(); // 0x4c0 PushV
	var_144_object = var_1_object; // 0x4c1 MovT
	var_145_object = var_0_object; // 0x4c2 MovT
	func_5151(); // 0x4c3 NEW_2
	
Label_1221:
	var_148_int = 43965; // 0x4c5 PushI
	var_149_bool = var_42_cvector == var_148_int; // 0x4c6 Eq
	if(var_149_bool == 0) goto Label_1244; // 0x4c7 JumpB
	var_150_object = Obj(); var_151_object = Obj(); // 0x4c8 PushV
	var_150_object = var_1_object; // 0x4c9 MovT
	var_151_object = var_0_object; // 0x4ca MovT
	func_4973(); // 0x4cb NEW_2
	var_152_object = Obj(); var_153_object = Obj(); // 0x4cd PushV
	var_152_object = var_1_object; // 0x4ce MovT
	var_153_object = var_0_object; // 0x4cf MovT
	func_4982(var_153_object); // 0x4d0 NEW_2
	var_154_object = Obj(); var_155_object = Obj(); // 0x4d2 PushV
	var_154_object = var_1_object; // 0x4d3 MovT
	var_155_object = var_0_object; // 0x4d4 MovT
	func_4993(var_155_object); // 0x4d5 NEW_2
	var_156_object = Obj(); var_157_object = Obj(); // 0x4d7 PushV
	var_156_object = var_1_object; // 0x4d8 MovT
	var_157_object = var_0_object; // 0x4d9 MovT
	func_5151(); // 0x4da NEW_2
	
Label_1244:
	var_158_int = 43966; // 0x4dc PushI
	var_159_bool = var_42_cvector == var_158_int; // 0x4dd Eq
	if(var_159_bool == 0) goto Label_1267; // 0x4de JumpB
	var_160_object = Obj(); var_161_object = Obj(); // 0x4df PushV
	var_160_object = var_1_object; // 0x4e0 MovT
	var_161_object = var_0_object; // 0x4e1 MovT
	func_4973(); // 0x4e2 NEW_2
	var_162_object = Obj(); var_163_object = Obj(); // 0x4e4 PushV
	var_162_object = var_1_object; // 0x4e5 MovT
	var_163_object = var_0_object; // 0x4e6 MovT
	func_4982(var_163_object); // 0x4e7 NEW_2
	var_164_object = Obj(); var_165_object = Obj(); // 0x4e9 PushV
	var_164_object = var_1_object; // 0x4ea MovT
	var_165_object = var_0_object; // 0x4eb MovT
	func_4993(var_165_object); // 0x4ec NEW_2
	var_166_object = Obj(); var_167_object = Obj(); // 0x4ee PushV
	var_166_object = var_1_object; // 0x4ef MovT
	var_167_object = var_0_object; // 0x4f0 MovT
	func_5151(); // 0x4f1 NEW_2
	
Label_1267:
	var_168_int = 26714; // 0x4f3 PushI
	var_169_bool = var_41_bool == var_168_int; // 0x4f4 Eq
	if(var_169_bool == 0) goto Label_1310; // 0x4f5 JumpB
	var_170_string = ""; // 0x4f6 PushV
	var_170_string = "Neutral"; // 0x4f7 MovS
	func_1162(var_42_cvector, var_170_string); // 0x4f8 NEW_2
	var_187_int = 525346; // 0x4fa PushI
	SetMessage(var_187_int); // 0x4fb TObjFunc
	ClearReplies(); // 0x4fd TObjFunc
	var_188_bool = 0; var_189_object = Obj(); // 0x4ff PushV
	var_189_object = var_1_object; // 0x500 MovT
	func_5257(var_189_object); // 0x501 NEW_2
	if(var_188_bool == 0) goto Label_1289; // 0x503 JumpB
	var_196_int = 525348; // 0x504 PushI
	var_197_int = 44408; // 0x505 PushI
	var_198_int = 26716; // 0x506 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x507 TObjFunc
	
Label_1289:
	var_199_bool = 0; var_200_object = Obj(); // 0x509 PushV
	var_200_object = var_1_object; // 0x50a MovT
	func_5269(var_200_object); // 0x50b NEW_2
	if(var_199_bool == 0) goto Label_1299; // 0x50d JumpB
	var_205_int = 541760; // 0x50e PushI
	var_206_int = 43964; // 0x50f PushI
	var_207_int = 43963; // 0x510 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x511 TObjFunc
	
Label_1299:
	var_208_int = 525347; // 0x513 PushI
	var_209_int = -1; // 0x514 PushI
	var_210_int = 26715; // 0x515 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x516 TObjFunc
	var_211_int = 529145; // 0x518 PushI
	var_212_int = -1; // 0x519 PushI
	var_213_int = 30591; // 0x51a PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x51b TObjFunc
	return 0; // 0x51d Return
	
Label_1310:
	var_214_int = 43964; // 0x51e PushI
	var_215_bool = var_41_bool == var_214_int; // 0x51f Eq
	if(var_215_bool == 0) goto Label_1333; // 0x520 JumpB
	var_216_string = ""; // 0x521 PushV
	var_216_string = "Fear"; // 0x522 MovS
	func_1162(var_42_cvector, var_216_string); // 0x523 NEW_2
	var_217_int = 541761; // 0x525 PushI
	SetMessage(var_217_int); // 0x526 TObjFunc
	ClearReplies(); // 0x528 TObjFunc
	var_218_int = 541762; // 0x52a PushI
	var_219_int = -1; // 0x52b PushI
	var_220_int = 43965; // 0x52c PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x52d TObjFunc
	var_221_int = 541763; // 0x52f PushI
	var_222_int = -1; // 0x530 PushI
	var_223_int = 43966; // 0x531 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x532 TObjFunc
	return 0; // 0x534 Return
	
Label_1333:
	var_224_int = 44408; // 0x535 PushI
	var_225_bool = var_41_bool == var_224_int; // 0x536 Eq
	if(var_225_bool == 0) goto Label_1356; // 0x537 JumpB
	var_226_string = ""; // 0x538 PushV
	var_226_string = "Rage"; // 0x539 MovS
	func_1162(var_42_cvector, var_226_string); // 0x53a NEW_2
	var_227_int = 542106; // 0x53c PushI
	SetMessage(var_227_int); // 0x53d TObjFunc
	ClearReplies(); // 0x53f TObjFunc
	var_228_int = 542107; // 0x541 PushI
	var_229_int = 44410; // 0x542 PushI
	var_230_int = 44409; // 0x543 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x544 TObjFunc
	var_231_int = 542110; // 0x546 PushI
	var_232_int = 30593; // 0x547 PushI
	var_233_int = 44412; // 0x548 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x549 TObjFunc
	return 0; // 0x54b Return
	
Label_1356:
	var_234_int = 44410; // 0x54c PushI
	var_235_bool = var_41_bool == var_234_int; // 0x54d Eq
	if(var_235_bool == 0) goto Label_1379; // 0x54e JumpB
	var_236_string = ""; // 0x54f PushV
	var_236_string = "Rage"; // 0x550 MovS
	func_1162(var_42_cvector, var_236_string); // 0x551 NEW_2
	var_237_int = 542108; // 0x553 PushI
	SetMessage(var_237_int); // 0x554 TObjFunc
	ClearReplies(); // 0x556 TObjFunc
	var_238_int = 542109; // 0x558 PushI
	var_239_int = 26717; // 0x559 PushI
	var_240_int = 44411; // 0x55a PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x55b TObjFunc
	var_241_int = 542111; // 0x55d PushI
	var_242_int = 30593; // 0x55e PushI
	var_243_int = 44414; // 0x55f PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x560 TObjFunc
	return 0; // 0x562 Return
	
Label_1379:
	var_244_int = 26717; // 0x563 PushI
	var_245_bool = var_41_bool == var_244_int; // 0x564 Eq
	if(var_245_bool == 0) goto Label_1402; // 0x565 JumpB
	var_246_string = ""; // 0x566 PushV
	var_246_string = "Neutral"; // 0x567 MovS
	func_1162(var_42_cvector, var_246_string); // 0x568 NEW_2
	var_247_int = 525349; // 0x56a PushI
	SetMessage(var_247_int); // 0x56b TObjFunc
	ClearReplies(); // 0x56d TObjFunc
	var_248_int = 529146; // 0x56f PushI
	var_249_int = 30593; // 0x570 PushI
	var_250_int = 30592; // 0x571 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x572 TObjFunc
	var_251_int = 529150; // 0x574 PushI
	var_252_int = 30593; // 0x575 PushI
	var_253_int = 30596; // 0x576 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x577 TObjFunc
	return 0; // 0x579 Return
	
Label_1402:
	var_254_int = 30593; // 0x57a PushI
	var_255_bool = var_41_bool == var_254_int; // 0x57b Eq
	if(var_255_bool == 0) goto Label_1420; // 0x57c JumpB
	var_256_string = ""; // 0x57d PushV
	var_256_string = "Neutral"; // 0x57e MovS
	func_1162(var_42_cvector, var_256_string); // 0x57f NEW_2
	var_257_int = 529147; // 0x581 PushI
	SetMessage(var_257_int); // 0x582 TObjFunc
	ClearReplies(); // 0x584 TObjFunc
	var_258_int = 529148; // 0x586 PushI
	var_259_int = 30595; // 0x587 PushI
	var_260_int = 30594; // 0x588 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x589 TObjFunc
	return 0; // 0x58b Return
	
Label_1420:
	var_261_int = 30595; // 0x58c PushI
	var_262_bool = var_41_bool == var_261_int; // 0x58d Eq
	if(var_262_bool == 0) goto Label_1443; // 0x58e JumpB
	var_263_string = ""; // 0x58f PushV
	var_263_string = "Adoration"; // 0x590 MovS
	func_1162(var_42_cvector, var_263_string); // 0x591 NEW_2
	var_264_int = 529149; // 0x593 PushI
	SetMessage(var_264_int); // 0x594 TObjFunc
	ClearReplies(); // 0x596 TObjFunc
	var_265_int = 525350; // 0x598 PushI
	var_266_int = 26719; // 0x599 PushI
	var_267_int = 26718; // 0x59a PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x59b TObjFunc
	var_268_int = 542112; // 0x59d PushI
	var_269_int = 26721; // 0x59e PushI
	var_270_int = 44416; // 0x59f PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x5a0 TObjFunc
	return 0; // 0x5a2 Return
	
Label_1443:
	var_271_int = 26719; // 0x5a3 PushI
	var_272_bool = var_41_bool == var_271_int; // 0x5a4 Eq
	if(var_272_bool == 0) goto Label_1466; // 0x5a5 JumpB
	var_273_string = ""; // 0x5a6 PushV
	var_273_string = "Neutral"; // 0x5a7 MovS
	func_1162(var_42_cvector, var_273_string); // 0x5a8 NEW_2
	var_274_int = 525351; // 0x5aa PushI
	SetMessage(var_274_int); // 0x5ab TObjFunc
	ClearReplies(); // 0x5ad TObjFunc
	var_275_int = 525352; // 0x5af PushI
	var_276_int = 26721; // 0x5b0 PushI
	var_277_int = 26720; // 0x5b1 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x5b2 TObjFunc
	var_278_int = 525355; // 0x5b4 PushI
	var_279_int = 26724; // 0x5b5 PushI
	var_280_int = 26723; // 0x5b6 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x5b7 TObjFunc
	return 0; // 0x5b9 Return
	
Label_1466:
	var_281_int = 26724; // 0x5ba PushI
	var_282_bool = var_41_bool == var_281_int; // 0x5bb Eq
	if(var_282_bool == 0) goto Label_1484; // 0x5bc JumpB
	var_283_string = ""; // 0x5bd PushV
	var_283_string = "Neutral"; // 0x5be MovS
	func_1162(var_42_cvector, var_283_string); // 0x5bf NEW_2
	var_284_int = 525356; // 0x5c1 PushI
	SetMessage(var_284_int); // 0x5c2 TObjFunc
	ClearReplies(); // 0x5c4 TObjFunc
	var_285_int = 525357; // 0x5c6 PushI
	var_286_int = -1; // 0x5c7 PushI
	var_287_int = 26725; // 0x5c8 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x5c9 TObjFunc
	return 0; // 0x5cb Return
	
Label_1484:
	var_288_int = 26721; // 0x5cc PushI
	var_289_bool = var_41_bool == var_288_int; // 0x5cd Eq
	if(var_289_bool == 0) goto Label_1502; // 0x5ce JumpB
	var_290_string = ""; // 0x5cf PushV
	var_290_string = "Neutral"; // 0x5d0 MovS
	func_1162(var_42_cvector, var_290_string); // 0x5d1 NEW_2
	var_291_int = 525353; // 0x5d3 PushI
	SetMessage(var_291_int); // 0x5d4 TObjFunc
	ClearReplies(); // 0x5d6 TObjFunc
	var_292_int = 525354; // 0x5d8 PushI
	var_293_int = -1; // 0x5d9 PushI
	var_294_int = 26722; // 0x5da PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x5db TObjFunc
	return 0; // 0x5dd Return
	
Label_1502:
	var_3_string = 1; // 0x5de TMovB
	var_295_bool = 0; // 0x5df PushV
	func_4854(var_295_bool); // 0x5e0 NEW_2
	if(var_295_bool == 0) goto Label_1510; // 0x5e2 JumpB
	lshStopAnimation(); // 0x5e3 Func
	goto Label_1512; // 0x5e5 Jump
	
Label_1512:
	return 0; // 0x5e8 Return
	
Label_1510:
	StopAnimation(); // 0x5e6 Func
	
Label_1514:
	return 0; // 0x5ea Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0x6d6 PushI
	if(var_43_int == 0) goto Label_2561; // 0x6d7 JumpB
	func_4655(); // 0x6d9 NEW_2
	var_45_int = 26779; // 0x6db PushI
	var_46_bool = var_42_cvector == var_45_int; // 0x6dc Eq
	if(var_46_bool == 0) goto Label_1768; // 0x6dd JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x6de PushV
	var_47_object = var_1_object; // 0x6df MovT
	var_48_object = var_0_object; // 0x6e0 MovT
	func_5004(); // 0x6e1 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0x6e3 PushV
	var_95_object = var_1_object; // 0x6e4 MovT
	var_96_object = var_0_object; // 0x6e5 MovT
	func_5167(); // 0x6e6 NEW_2
	
Label_1768:
	var_99_int = 40921; // 0x6e8 PushI
	var_100_bool = var_42_cvector == var_99_int; // 0x6e9 Eq
	if(var_100_bool == 0) goto Label_1781; // 0x6ea JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0x6eb PushV
	var_101_object = var_1_object; // 0x6ec MovT
	var_102_object = var_0_object; // 0x6ed MovT
	func_5004(); // 0x6ee NEW_2
	var_103_object = Obj(); var_104_object = Obj(); // 0x6f0 PushV
	var_103_object = var_1_object; // 0x6f1 MovT
	var_104_object = var_0_object; // 0x6f2 MovT
	func_5167(); // 0x6f3 NEW_2
	
Label_1781:
	var_105_int = 26801; // 0x6f5 PushI
	var_106_bool = var_42_cvector == var_105_int; // 0x6f6 Eq
	if(var_106_bool == 0) goto Label_1794; // 0x6f7 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x6f8 PushV
	var_107_object = var_1_object; // 0x6f9 MovT
	var_108_object = var_0_object; // 0x6fa MovT
	func_5036(); // 0x6fb NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0x6fd PushV
	var_119_object = var_1_object; // 0x6fe MovT
	var_120_object = var_0_object; // 0x6ff MovT
	func_5167(); // 0x700 NEW_2
	
Label_1794:
	var_121_int = 26922; // 0x702 PushI
	var_122_bool = var_42_cvector == var_121_int; // 0x703 Eq
	if(var_122_bool == 0) goto Label_1802; // 0x704 JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x705 PushV
	var_123_object = var_1_object; // 0x706 MovT
	var_124_object = var_0_object; // 0x707 MovT
	func_5045(); // 0x708 NEW_2
	
Label_1802:
	var_127_int = 26924; // 0x70a PushI
	var_128_bool = var_42_cvector == var_127_int; // 0x70b Eq
	if(var_128_bool == 0) goto Label_1810; // 0x70c JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x70d PushV
	var_129_object = var_1_object; // 0x70e MovT
	var_130_object = var_0_object; // 0x70f MovT
	func_5051(); // 0x710 NEW_2
	
Label_1810:
	var_157_int = 26810; // 0x712 PushI
	var_158_bool = var_41_bool == var_157_int; // 0x713 Eq
	if(var_158_bool == 0) goto Label_1906; // 0x714 JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x715 PushV
	var_160_object = var_1_object; // 0x716 MovT
	func_5317(var_160_object); // 0x717 NEW_2
	if(var_159_bool == 0) goto Label_1838; // 0x719 JumpB
	var_167_string = ""; // 0x71a PushV
	var_167_string = "Neutral"; // 0x71b MovS
	func_1727(var_42_cvector, var_167_string); // 0x71c NEW_2
	var_184_int = 525442; // 0x71e PushI
	SetMessage(var_184_int); // 0x71f TObjFunc
	ClearReplies(); // 0x721 TObjFunc
	var_185_int = 525443; // 0x723 PushI
	var_186_int = -1; // 0x724 PushI
	var_187_int = 26811; // 0x725 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x726 TObjFunc
	var_188_int = 529337; // 0x728 PushI
	var_189_int = -1; // 0x729 PushI
	var_190_int = 30792; // 0x72a PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x72b TObjFunc
	return 0; // 0x72d Return
	
Label_1838:
	var_191_string = ""; // 0x72e PushV
	var_191_string = "Neutral"; // 0x72f MovS
	func_1727(var_42_cvector, var_191_string); // 0x730 NEW_2
	var_192_int = 525406; // 0x732 PushI
	SetMessage(var_192_int); // 0x733 TObjFunc
	ClearReplies(); // 0x735 TObjFunc
	var_193_bool = 0; var_194_object = Obj(); // 0x737 PushV
	var_194_object = var_1_object; // 0x738 MovT
	func_5281(var_194_object); // 0x739 NEW_2
	if(var_193_bool == 0) goto Label_1857; // 0x73b JumpB
	var_199_int = 525407; // 0x73c PushI
	var_200_int = 26776; // 0x73d PushI
	var_201_int = 26775; // 0x73e PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x73f TObjFunc
	
Label_1857:
	var_202_bool = 0; // 0x741 PushV
	var_202_bool = 0; // 0x742 MovB
	var_203_bool = 0; var_204_object = Obj(); // 0x743 PushV
	var_204_object = var_1_object; // 0x744 MovT
	func_5305(var_204_object); // 0x745 NEW_2
	if(var_203_bool == 0) goto Label_1870; // 0x747 JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x748 PushV
	var_210_object = var_1_object; // 0x749 MovT
	func_5293(var_210_object); // 0x74a NEW_2
	if(var_209_bool == 0) goto Label_1870; // 0x74c JumpB
	var_202_bool = 1; // 0x74d MovB
	
Label_1870:
	if(var_202_bool == 0) goto Label_1876; // 0x74e JumpB
	var_215_int = 525425; // 0x74f PushI
	var_216_int = 40970; // 0x750 PushI
	var_217_int = 26793; // 0x751 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x752 TObjFunc
	
Label_1876:
	var_218_bool = 0; // 0x754 PushV
	var_218_bool = 0; // 0x755 MovB
	var_219_bool = 0; var_220_object = Obj(); // 0x756 PushV
	var_220_object = var_1_object; // 0x757 MovT
	func_5341(var_220_object); // 0x758 NEW_2
	if(var_219_bool == 0) goto Label_1889; // 0x75a JumpB
	var_225_bool = 0; var_226_object = Obj(); // 0x75b PushV
	var_226_object = var_1_object; // 0x75c MovT
	func_5329(var_226_object); // 0x75d NEW_2
	if(var_225_bool == 0) goto Label_1889; // 0x75f JumpB
	var_218_bool = 1; // 0x760 MovB
	
Label_1889:
	if(var_218_bool == 0) goto Label_1895; // 0x761 JumpB
	var_231_int = 525575; // 0x762 PushI
	var_232_int = 26923; // 0x763 PushI
	var_233_int = 26922; // 0x764 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x765 TObjFunc
	
Label_1895:
	var_234_int = 525412; // 0x767 PushI
	var_235_int = -1; // 0x768 PushI
	var_236_int = 26780; // 0x769 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x76a TObjFunc
	var_237_int = 538971; // 0x76c PushI
	var_238_int = -1; // 0x76d PushI
	var_239_int = 40909; // 0x76e PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x76f TObjFunc
	return 0; // 0x771 Return
	
Label_1906:
	var_240_int = 26923; // 0x772 PushI
	var_241_bool = var_41_bool == var_240_int; // 0x773 Eq
	if(var_241_bool == 0) goto Label_1929; // 0x774 JumpB
	var_242_string = ""; // 0x775 PushV
	var_242_string = "Adoration"; // 0x776 MovS
	func_1727(var_42_cvector, var_242_string); // 0x777 NEW_2
	var_243_int = 525576; // 0x779 PushI
	SetMessage(var_243_int); // 0x77a TObjFunc
	ClearReplies(); // 0x77c TObjFunc
	var_244_int = 538918; // 0x77e PushI
	var_245_int = 40872; // 0x77f PushI
	var_246_int = 40871; // 0x780 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x781 TObjFunc
	var_247_int = 538922; // 0x783 PushI
	var_248_int = 40872; // 0x784 PushI
	var_249_int = 40875; // 0x785 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x786 TObjFunc
	return 0; // 0x788 Return
	
Label_1929:
	var_250_int = 40872; // 0x789 PushI
	var_251_bool = var_41_bool == var_250_int; // 0x78a Eq
	if(var_251_bool == 0) goto Label_1947; // 0x78b JumpB
	var_252_string = ""; // 0x78c PushV
	var_252_string = "Dream"; // 0x78d MovS
	func_1727(var_42_cvector, var_252_string); // 0x78e NEW_2
	var_253_int = 538919; // 0x790 PushI
	SetMessage(var_253_int); // 0x791 TObjFunc
	ClearReplies(); // 0x793 TObjFunc
	var_254_int = 538920; // 0x795 PushI
	var_255_int = 40874; // 0x796 PushI
	var_256_int = 40873; // 0x797 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x798 TObjFunc
	return 0; // 0x79a Return
	
Label_1947:
	var_257_int = 40874; // 0x79b PushI
	var_258_bool = var_41_bool == var_257_int; // 0x79c Eq
	if(var_258_bool == 0) goto Label_1970; // 0x79d JumpB
	var_259_string = ""; // 0x79e PushV
	var_259_string = "Neutral"; // 0x79f MovS
	func_1727(var_42_cvector, var_259_string); // 0x7a0 NEW_2
	var_260_int = 538921; // 0x7a2 PushI
	SetMessage(var_260_int); // 0x7a3 TObjFunc
	ClearReplies(); // 0x7a5 TObjFunc
	var_261_int = 539033; // 0x7a7 PushI
	var_262_int = 40975; // 0x7a8 PushI
	var_263_int = 40974; // 0x7a9 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x7aa TObjFunc
	var_264_int = 539035; // 0x7ac PushI
	var_265_int = 40975; // 0x7ad PushI
	var_266_int = 40976; // 0x7ae PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x7af TObjFunc
	return 0; // 0x7b1 Return
	
Label_1970:
	var_267_int = 40975; // 0x7b2 PushI
	var_268_bool = var_41_bool == var_267_int; // 0x7b3 Eq
	if(var_268_bool == 0) goto Label_1993; // 0x7b4 JumpB
	var_269_string = ""; // 0x7b5 PushV
	var_269_string = "Dream"; // 0x7b6 MovS
	func_1727(var_42_cvector, var_269_string); // 0x7b7 NEW_2
	var_270_int = 539034; // 0x7b9 PushI
	SetMessage(var_270_int); // 0x7ba TObjFunc
	ClearReplies(); // 0x7bc TObjFunc
	var_271_int = 538923; // 0x7be PushI
	var_272_int = 40878; // 0x7bf PushI
	var_273_int = 40877; // 0x7c0 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x7c1 TObjFunc
	var_274_int = 538925; // 0x7c3 PushI
	var_275_int = 40878; // 0x7c4 PushI
	var_276_int = 40879; // 0x7c5 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x7c6 TObjFunc
	return 0; // 0x7c8 Return
	
Label_1993:
	var_277_int = 40878; // 0x7c9 PushI
	var_278_bool = var_41_bool == var_277_int; // 0x7ca Eq
	if(var_278_bool == 0) goto Label_2016; // 0x7cb JumpB
	var_279_string = ""; // 0x7cc PushV
	var_279_string = "Dream"; // 0x7cd MovS
	func_1727(var_42_cvector, var_279_string); // 0x7ce NEW_2
	var_280_int = 538924; // 0x7d0 PushI
	SetMessage(var_280_int); // 0x7d1 TObjFunc
	ClearReplies(); // 0x7d3 TObjFunc
	var_281_int = 525577; // 0x7d5 PushI
	var_282_int = -1; // 0x7d6 PushI
	var_283_int = 26924; // 0x7d7 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x7d8 TObjFunc
	var_284_int = 525614; // 0x7da PushI
	var_285_int = -1; // 0x7db PushI
	var_286_int = 26961; // 0x7dc PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x7dd TObjFunc
	return 0; // 0x7df Return
	
Label_2016:
	var_287_int = 40970; // 0x7e0 PushI
	var_288_bool = var_41_bool == var_287_int; // 0x7e1 Eq
	if(var_288_bool == 0) goto Label_2039; // 0x7e2 JumpB
	var_289_string = ""; // 0x7e3 PushV
	var_289_string = "Rage"; // 0x7e4 MovS
	func_1727(var_42_cvector, var_289_string); // 0x7e5 NEW_2
	var_290_int = 539029; // 0x7e7 PushI
	SetMessage(var_290_int); // 0x7e8 TObjFunc
	ClearReplies(); // 0x7ea TObjFunc
	var_291_int = 539030; // 0x7ec PushI
	var_292_int = 26794; // 0x7ed PushI
	var_293_int = 40971; // 0x7ee PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x7ef TObjFunc
	var_294_int = 539031; // 0x7f1 PushI
	var_295_int = 26794; // 0x7f2 PushI
	var_296_int = 40972; // 0x7f3 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x7f4 TObjFunc
	return 0; // 0x7f6 Return
	
Label_2039:
	var_297_int = 26794; // 0x7f7 PushI
	var_298_bool = var_41_bool == var_297_int; // 0x7f8 Eq
	if(var_298_bool == 0) goto Label_2057; // 0x7f9 JumpB
	var_299_string = ""; // 0x7fa PushV
	var_299_string = "Fear"; // 0x7fb MovS
	func_1727(var_42_cvector, var_299_string); // 0x7fc NEW_2
	var_300_int = 525426; // 0x7fe PushI
	SetMessage(var_300_int); // 0x7ff TObjFunc
	ClearReplies(); // 0x801 TObjFunc
	var_301_int = 525427; // 0x803 PushI
	var_302_int = 40979; // 0x804 PushI
	var_303_int = 26795; // 0x805 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x806 TObjFunc
	return 0; // 0x808 Return
	
Label_2057:
	var_304_int = 40979; // 0x809 PushI
	var_305_bool = var_41_bool == var_304_int; // 0x80a Eq
	if(var_305_bool == 0) goto Label_2080; // 0x80b JumpB
	var_306_string = ""; // 0x80c PushV
	var_306_string = "Neutral"; // 0x80d MovS
	func_1727(var_42_cvector, var_306_string); // 0x80e NEW_2
	var_307_int = 539036; // 0x810 PushI
	SetMessage(var_307_int); // 0x811 TObjFunc
	ClearReplies(); // 0x813 TObjFunc
	var_308_int = 539037; // 0x815 PushI
	var_309_int = 40982; // 0x816 PushI
	var_310_int = 40980; // 0x817 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x818 TObjFunc
	var_311_int = 539038; // 0x81a PushI
	var_312_int = 40983; // 0x81b PushI
	var_313_int = 40981; // 0x81c PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x81d TObjFunc
	return 0; // 0x81f Return
	
Label_2080:
	var_314_int = 40983; // 0x820 PushI
	var_315_bool = var_41_bool == var_314_int; // 0x821 Eq
	if(var_315_bool == 0) goto Label_2103; // 0x822 JumpB
	var_316_string = ""; // 0x823 PushV
	var_316_string = "Rage"; // 0x824 MovS
	func_1727(var_42_cvector, var_316_string); // 0x825 NEW_2
	var_317_int = 539040; // 0x827 PushI
	SetMessage(var_317_int); // 0x828 TObjFunc
	ClearReplies(); // 0x82a TObjFunc
	var_318_int = 539046; // 0x82c PushI
	var_319_int = 40991; // 0x82d PushI
	var_320_int = 40990; // 0x82e PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x82f TObjFunc
	var_321_int = 539048; // 0x831 PushI
	var_322_int = 40996; // 0x832 PushI
	var_323_int = 40992; // 0x833 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x834 TObjFunc
	return 0; // 0x836 Return
	
Label_2103:
	var_324_int = 40991; // 0x837 PushI
	var_325_bool = var_41_bool == var_324_int; // 0x838 Eq
	if(var_325_bool == 0) goto Label_2121; // 0x839 JumpB
	var_326_string = ""; // 0x83a PushV
	var_326_string = "Rage"; // 0x83b MovS
	func_1727(var_42_cvector, var_326_string); // 0x83c NEW_2
	var_327_int = 539047; // 0x83e PushI
	SetMessage(var_327_int); // 0x83f TObjFunc
	ClearReplies(); // 0x841 TObjFunc
	var_328_int = 539041; // 0x843 PushI
	var_329_int = 40996; // 0x844 PushI
	var_330_int = 40984; // 0x845 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x846 TObjFunc
	return 0; // 0x848 Return
	
Label_2121:
	var_331_int = 40996; // 0x849 PushI
	var_332_bool = var_41_bool == var_331_int; // 0x84a Eq
	if(var_332_bool == 0) goto Label_2139; // 0x84b JumpB
	var_333_string = ""; // 0x84c PushV
	var_333_string = "Dream"; // 0x84d MovS
	func_1727(var_42_cvector, var_333_string); // 0x84e NEW_2
	var_334_int = 539051; // 0x850 PushI
	SetMessage(var_334_int); // 0x851 TObjFunc
	ClearReplies(); // 0x853 TObjFunc
	var_335_int = 539052; // 0x855 PushI
	var_336_int = 40999; // 0x856 PushI
	var_337_int = 40998; // 0x857 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x858 TObjFunc
	return 0; // 0x85a Return
	
Label_2139:
	var_338_int = 40999; // 0x85b PushI
	var_339_bool = var_41_bool == var_338_int; // 0x85c Eq
	if(var_339_bool == 0) goto Label_2162; // 0x85d JumpB
	var_340_string = ""; // 0x85e PushV
	var_340_string = "Dream"; // 0x85f MovS
	func_1727(var_42_cvector, var_340_string); // 0x860 NEW_2
	var_341_int = 539053; // 0x862 PushI
	SetMessage(var_341_int); // 0x863 TObjFunc
	ClearReplies(); // 0x865 TObjFunc
	var_342_int = 539054; // 0x867 PushI
	var_343_int = 26796; // 0x868 PushI
	var_344_int = 41000; // 0x869 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x86a TObjFunc
	var_345_int = 539056; // 0x86c PushI
	var_346_int = 26798; // 0x86d PushI
	var_347_int = 41003; // 0x86e PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x86f TObjFunc
	return 0; // 0x871 Return
	
Label_2162:
	var_348_int = 40982; // 0x872 PushI
	var_349_bool = var_41_bool == var_348_int; // 0x873 Eq
	if(var_349_bool == 0) goto Label_2180; // 0x874 JumpB
	var_350_string = ""; // 0x875 PushV
	var_350_string = "Dream"; // 0x876 MovS
	func_1727(var_42_cvector, var_350_string); // 0x877 NEW_2
	var_351_int = 539039; // 0x879 PushI
	SetMessage(var_351_int); // 0x87a TObjFunc
	ClearReplies(); // 0x87c TObjFunc
	var_352_int = 539044; // 0x87e PushI
	var_353_int = 40988; // 0x87f PushI
	var_354_int = 40987; // 0x880 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x881 TObjFunc
	return 0; // 0x883 Return
	
Label_2180:
	var_355_int = 40988; // 0x884 PushI
	var_356_bool = var_41_bool == var_355_int; // 0x885 Eq
	if(var_356_bool == 0) goto Label_2203; // 0x886 JumpB
	var_357_string = ""; // 0x887 PushV
	var_357_string = "Rage"; // 0x888 MovS
	func_1727(var_42_cvector, var_357_string); // 0x889 NEW_2
	var_358_int = 539045; // 0x88b PushI
	SetMessage(var_358_int); // 0x88c TObjFunc
	ClearReplies(); // 0x88e TObjFunc
	var_359_int = 539049; // 0x890 PushI
	var_360_int = 40983; // 0x891 PushI
	var_361_int = 40993; // 0x892 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x893 TObjFunc
	var_362_int = 539050; // 0x895 PushI
	var_363_int = 26796; // 0x896 PushI
	var_364_int = 40994; // 0x897 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x898 TObjFunc
	return 0; // 0x89a Return
	
Label_2203:
	var_365_int = 26796; // 0x89b PushI
	var_366_bool = var_41_bool == var_365_int; // 0x89c Eq
	if(var_366_bool == 0) goto Label_2226; // 0x89d JumpB
	var_367_string = ""; // 0x89e PushV
	var_367_string = "Dream"; // 0x89f MovS
	func_1727(var_42_cvector, var_367_string); // 0x8a0 NEW_2
	var_368_int = 525428; // 0x8a2 PushI
	SetMessage(var_368_int); // 0x8a3 TObjFunc
	ClearReplies(); // 0x8a5 TObjFunc
	var_369_int = 525429; // 0x8a7 PushI
	var_370_int = 26798; // 0x8a8 PushI
	var_371_int = 26797; // 0x8a9 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x8aa TObjFunc
	var_372_int = 539071; // 0x8ac PushI
	var_373_int = 41020; // 0x8ad PushI
	var_374_int = 41019; // 0x8ae PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x8af TObjFunc
	return 0; // 0x8b1 Return
	
Label_2226:
	var_375_int = 41020; // 0x8b2 PushI
	var_376_bool = var_41_bool == var_375_int; // 0x8b3 Eq
	if(var_376_bool == 0) goto Label_2244; // 0x8b4 JumpB
	var_377_string = ""; // 0x8b5 PushV
	var_377_string = "Dream"; // 0x8b6 MovS
	func_1727(var_42_cvector, var_377_string); // 0x8b7 NEW_2
	var_378_int = 539072; // 0x8b9 PushI
	SetMessage(var_378_int); // 0x8ba TObjFunc
	ClearReplies(); // 0x8bc TObjFunc
	var_379_int = 539073; // 0x8be PushI
	var_380_int = 26798; // 0x8bf PushI
	var_381_int = 41021; // 0x8c0 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x8c1 TObjFunc
	return 0; // 0x8c3 Return
	
Label_2244:
	var_382_int = 26798; // 0x8c4 PushI
	var_383_bool = var_41_bool == var_382_int; // 0x8c5 Eq
	if(var_383_bool == 0) goto Label_2262; // 0x8c6 JumpB
	var_384_string = ""; // 0x8c7 PushV
	var_384_string = "Dream"; // 0x8c8 MovS
	func_1727(var_42_cvector, var_384_string); // 0x8c9 NEW_2
	var_385_int = 525430; // 0x8cb PushI
	SetMessage(var_385_int); // 0x8cc TObjFunc
	ClearReplies(); // 0x8ce TObjFunc
	var_386_int = 525431; // 0x8d0 PushI
	var_387_int = 26800; // 0x8d1 PushI
	var_388_int = 26799; // 0x8d2 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x8d3 TObjFunc
	return 0; // 0x8d5 Return
	
Label_2262:
	var_389_int = 26800; // 0x8d6 PushI
	var_390_bool = var_41_bool == var_389_int; // 0x8d7 Eq
	if(var_390_bool == 0) goto Label_2285; // 0x8d8 JumpB
	var_391_string = ""; // 0x8d9 PushV
	var_391_string = "Fear"; // 0x8da MovS
	func_1727(var_42_cvector, var_391_string); // 0x8db NEW_2
	var_392_int = 525432; // 0x8dd PushI
	SetMessage(var_392_int); // 0x8de TObjFunc
	ClearReplies(); // 0x8e0 TObjFunc
	var_393_int = 538913; // 0x8e2 PushI
	var_394_int = 40867; // 0x8e3 PushI
	var_395_int = 40866; // 0x8e4 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x8e5 TObjFunc
	var_396_int = 539074; // 0x8e7 PushI
	var_397_int = 41024; // 0x8e8 PushI
	var_398_int = 41023; // 0x8e9 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x8ea TObjFunc
	return 0; // 0x8ec Return
	
Label_2285:
	var_399_int = 41024; // 0x8ed PushI
	var_400_bool = var_41_bool == var_399_int; // 0x8ee Eq
	if(var_400_bool == 0) goto Label_2303; // 0x8ef JumpB
	var_401_string = ""; // 0x8f0 PushV
	var_401_string = "Neutral"; // 0x8f1 MovS
	func_1727(var_42_cvector, var_401_string); // 0x8f2 NEW_2
	var_402_int = 539075; // 0x8f4 PushI
	SetMessage(var_402_int); // 0x8f5 TObjFunc
	ClearReplies(); // 0x8f7 TObjFunc
	var_403_int = 539076; // 0x8f9 PushI
	var_404_int = 41026; // 0x8fa PushI
	var_405_int = 41025; // 0x8fb PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x8fc TObjFunc
	return 0; // 0x8fe Return
	
Label_2303:
	var_406_int = 41026; // 0x8ff PushI
	var_407_bool = var_41_bool == var_406_int; // 0x900 Eq
	if(var_407_bool == 0) goto Label_2321; // 0x901 JumpB
	var_408_string = ""; // 0x902 PushV
	var_408_string = "Neutral"; // 0x903 MovS
	func_1727(var_42_cvector, var_408_string); // 0x904 NEW_2
	var_409_int = 539077; // 0x906 PushI
	SetMessage(var_409_int); // 0x907 TObjFunc
	ClearReplies(); // 0x909 TObjFunc
	var_410_int = 539078; // 0x90b PushI
	var_411_int = 41029; // 0x90c PushI
	var_412_int = 41027; // 0x90d PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x90e TObjFunc
	return 0; // 0x910 Return
	
Label_2321:
	var_413_int = 41029; // 0x911 PushI
	var_414_bool = var_41_bool == var_413_int; // 0x912 Eq
	if(var_414_bool == 0) goto Label_2339; // 0x913 JumpB
	var_415_string = ""; // 0x914 PushV
	var_415_string = "Neutral"; // 0x915 MovS
	func_1727(var_42_cvector, var_415_string); // 0x916 NEW_2
	var_416_int = 539080; // 0x918 PushI
	SetMessage(var_416_int); // 0x919 TObjFunc
	ClearReplies(); // 0x91b TObjFunc
	var_417_int = 539081; // 0x91d PushI
	var_418_int = 41028; // 0x91e PushI
	var_419_int = 41030; // 0x91f PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x920 TObjFunc
	return 0; // 0x922 Return
	
Label_2339:
	var_420_int = 40867; // 0x923 PushI
	var_421_bool = var_41_bool == var_420_int; // 0x924 Eq
	if(var_421_bool == 0) goto Label_2362; // 0x925 JumpB
	var_422_string = ""; // 0x926 PushV
	var_422_string = "Fear"; // 0x927 MovS
	func_1727(var_42_cvector, var_422_string); // 0x928 NEW_2
	var_423_int = 538914; // 0x92a PushI
	SetMessage(var_423_int); // 0x92b TObjFunc
	ClearReplies(); // 0x92d TObjFunc
	var_424_int = 525434; // 0x92f PushI
	var_425_int = 41028; // 0x930 PushI
	var_426_int = 26802; // 0x931 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x932 TObjFunc
	var_427_int = 538915; // 0x934 PushI
	var_428_int = 41028; // 0x935 PushI
	var_429_int = 40868; // 0x936 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x937 TObjFunc
	return 0; // 0x939 Return
	
Label_2362:
	var_430_int = 41028; // 0x93a PushI
	var_431_bool = var_41_bool == var_430_int; // 0x93b Eq
	if(var_431_bool == 0) goto Label_2390; // 0x93c JumpB
	var_432_string = ""; // 0x93d PushV
	var_432_string = "Fear"; // 0x93e MovS
	func_1727(var_42_cvector, var_432_string); // 0x93f NEW_2
	var_433_int = 539079; // 0x941 PushI
	SetMessage(var_433_int); // 0x942 TObjFunc
	ClearReplies(); // 0x944 TObjFunc
	var_434_int = 525433; // 0x946 PushI
	var_435_int = -1; // 0x947 PushI
	var_436_int = 26801; // 0x948 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x949 TObjFunc
	var_437_bool = 0; var_438_object = Obj(); // 0x94b PushV
	var_438_object = var_1_object; // 0x94c MovT
	func_5317(var_438_object); // 0x94d NEW_2
	if(var_437_bool == 0) goto Label_2389; // 0x94f JumpB
	var_439_int = 538917; // 0x950 PushI
	var_440_int = -1; // 0x951 PushI
	var_441_int = 40870; // 0x952 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x953 TObjFunc
	
Label_2389:
	return 0; // 0x955 Return
	
Label_2390:
	var_442_int = 26776; // 0x956 PushI
	var_443_bool = var_41_bool == var_442_int; // 0x957 Eq
	if(var_443_bool == 0) goto Label_2408; // 0x958 JumpB
	var_444_string = ""; // 0x959 PushV
	var_444_string = "Fear"; // 0x95a MovS
	func_1727(var_42_cvector, var_444_string); // 0x95b NEW_2
	var_445_int = 525408; // 0x95d PushI
	SetMessage(var_445_int); // 0x95e TObjFunc
	ClearReplies(); // 0x960 TObjFunc
	var_446_int = 525409; // 0x962 PushI
	var_447_int = 40903; // 0x963 PushI
	var_448_int = 26777; // 0x964 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x965 TObjFunc
	return 0; // 0x967 Return
	
Label_2408:
	var_449_int = 40903; // 0x968 PushI
	var_450_bool = var_41_bool == var_449_int; // 0x969 Eq
	if(var_450_bool == 0) goto Label_2431; // 0x96a JumpB
	var_451_string = ""; // 0x96b PushV
	var_451_string = "Fear"; // 0x96c MovS
	func_1727(var_42_cvector, var_451_string); // 0x96d NEW_2
	var_452_int = 538965; // 0x96f PushI
	SetMessage(var_452_int); // 0x970 TObjFunc
	ClearReplies(); // 0x972 TObjFunc
	var_453_int = 538966; // 0x974 PushI
	var_454_int = 40905; // 0x975 PushI
	var_455_int = 40904; // 0x976 PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x977 TObjFunc
	var_456_int = 538972; // 0x979 PushI
	var_457_int = 40905; // 0x97a PushI
	var_458_int = 40910; // 0x97b PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x97c TObjFunc
	return 0; // 0x97e Return
	
Label_2431:
	var_459_int = 40905; // 0x97f PushI
	var_460_bool = var_41_bool == var_459_int; // 0x980 Eq
	if(var_460_bool == 0) goto Label_2449; // 0x981 JumpB
	var_461_string = ""; // 0x982 PushV
	var_461_string = "Dream"; // 0x983 MovS
	func_1727(var_42_cvector, var_461_string); // 0x984 NEW_2
	var_462_int = 538967; // 0x986 PushI
	SetMessage(var_462_int); // 0x987 TObjFunc
	ClearReplies(); // 0x989 TObjFunc
	var_463_int = 538968; // 0x98b PushI
	var_464_int = 40907; // 0x98c PushI
	var_465_int = 40906; // 0x98d PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x98e TObjFunc
	return 0; // 0x990 Return
	
Label_2449:
	var_466_int = 40907; // 0x991 PushI
	var_467_bool = var_41_bool == var_466_int; // 0x992 Eq
	if(var_467_bool == 0) goto Label_2467; // 0x993 JumpB
	var_468_string = ""; // 0x994 PushV
	var_468_string = "Dream"; // 0x995 MovS
	func_1727(var_42_cvector, var_468_string); // 0x996 NEW_2
	var_469_int = 538969; // 0x998 PushI
	SetMessage(var_469_int); // 0x999 TObjFunc
	ClearReplies(); // 0x99b TObjFunc
	var_470_int = 538970; // 0x99d PushI
	var_471_int = 40912; // 0x99e PushI
	var_472_int = 40908; // 0x99f PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x9a0 TObjFunc
	return 0; // 0x9a2 Return
	
Label_2467:
	var_473_int = 40912; // 0x9a3 PushI
	var_474_bool = var_41_bool == var_473_int; // 0x9a4 Eq
	if(var_474_bool == 0) goto Label_2490; // 0x9a5 JumpB
	var_475_string = ""; // 0x9a6 PushV
	var_475_string = "Neutral"; // 0x9a7 MovS
	func_1727(var_42_cvector, var_475_string); // 0x9a8 NEW_2
	var_476_int = 538973; // 0x9aa PushI
	SetMessage(var_476_int); // 0x9ab TObjFunc
	ClearReplies(); // 0x9ad TObjFunc
	var_477_int = 538974; // 0x9af PushI
	var_478_int = 40914; // 0x9b0 PushI
	var_479_int = 40913; // 0x9b1 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x9b2 TObjFunc
	var_480_int = 538977; // 0x9b4 PushI
	var_481_int = 40917; // 0x9b5 PushI
	var_482_int = 40916; // 0x9b6 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x9b7 TObjFunc
	return 0; // 0x9b9 Return
	
Label_2490:
	var_483_int = 40917; // 0x9ba PushI
	var_484_bool = var_41_bool == var_483_int; // 0x9bb Eq
	if(var_484_bool == 0) goto Label_2508; // 0x9bc JumpB
	var_485_string = ""; // 0x9bd PushV
	var_485_string = "Fear"; // 0x9be MovS
	func_1727(var_42_cvector, var_485_string); // 0x9bf NEW_2
	var_486_int = 538978; // 0x9c1 PushI
	SetMessage(var_486_int); // 0x9c2 TObjFunc
	ClearReplies(); // 0x9c4 TObjFunc
	var_487_int = 538979; // 0x9c6 PushI
	var_488_int = 40914; // 0x9c7 PushI
	var_489_int = 40918; // 0x9c8 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x9c9 TObjFunc
	return 0; // 0x9cb Return
	
Label_2508:
	var_490_int = 40914; // 0x9cc PushI
	var_491_bool = var_41_bool == var_490_int; // 0x9cd Eq
	if(var_491_bool == 0) goto Label_2531; // 0x9ce JumpB
	var_492_string = ""; // 0x9cf PushV
	var_492_string = "Neutral"; // 0x9d0 MovS
	func_1727(var_42_cvector, var_492_string); // 0x9d1 NEW_2
	var_493_int = 538975; // 0x9d3 PushI
	SetMessage(var_493_int); // 0x9d4 TObjFunc
	ClearReplies(); // 0x9d6 TObjFunc
	var_494_int = 525411; // 0x9d8 PushI
	var_495_int = -1; // 0x9d9 PushI
	var_496_int = 26779; // 0x9da PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x9db TObjFunc
	var_497_int = 538980; // 0x9dd PushI
	var_498_int = 26778; // 0x9de PushI
	var_499_int = 40920; // 0x9df PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x9e0 TObjFunc
	return 0; // 0x9e2 Return
	
Label_2531:
	var_500_int = 26778; // 0x9e3 PushI
	var_501_bool = var_41_bool == var_500_int; // 0x9e4 Eq
	if(var_501_bool == 0) goto Label_2549; // 0x9e5 JumpB
	var_502_string = ""; // 0x9e6 PushV
	var_502_string = "Neutral"; // 0x9e7 MovS
	func_1727(var_42_cvector, var_502_string); // 0x9e8 NEW_2
	var_503_int = 525410; // 0x9ea PushI
	SetMessage(var_503_int); // 0x9eb TObjFunc
	ClearReplies(); // 0x9ed TObjFunc
	var_504_int = 538981; // 0x9ef PushI
	var_505_int = -1; // 0x9f0 PushI
	var_506_int = 40921; // 0x9f1 PushI
	AddReply(var_504_int, var_505_int, var_506_int); // 0x9f2 TObjFunc
	return 0; // 0x9f4 Return
	
Label_2549:
	var_3_string = 1; // 0x9f5 TMovB
	var_507_bool = 0; // 0x9f6 PushV
	func_4854(var_507_bool); // 0x9f7 NEW_2
	if(var_507_bool == 0) goto Label_2557; // 0x9f9 JumpB
	lshStopAnimation(); // 0x9fa Func
	goto Label_2559; // 0x9fc Jump
	
Label_2559:
	return 0; // 0x9ff Return
	
Label_2557:
	StopAnimation(); // 0x9fd Func
	
Label_2561:
	return 0; // 0xa01 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xaa4 PushI
	if(var_43_int == 0) goto Label_2787; // 0xaa5 JumpB
	func_4655(); // 0xaa7 NEW_2
	var_45_int = 26821; // 0xaa9 PushI
	var_46_bool = var_41_bool == var_45_int; // 0xaaa Eq
	if(var_46_bool == 0) goto Label_2752; // 0xaab JumpB
	var_47_string = ""; // 0xaac PushV
	var_47_string = "Neutral"; // 0xaad MovS
	func_2701(var_42_cvector, var_47_string); // 0xaae NEW_2
	var_64_int = 525465; // 0xab0 PushI
	SetMessage(var_64_int); // 0xab1 TObjFunc
	ClearReplies(); // 0xab3 TObjFunc
	var_65_int = 526257; // 0xab5 PushI
	var_66_int = 27533; // 0xab6 PushI
	var_67_int = 27531; // 0xab7 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xab8 TObjFunc
	var_68_int = 525466; // 0xaba PushI
	var_69_int = -1; // 0xabb PushI
	var_70_int = 26822; // 0xabc PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xabd TObjFunc
	return 0; // 0xabf Return
	
Label_2752:
	var_71_int = 27533; // 0xac0 PushI
	var_72_bool = var_41_bool == var_71_int; // 0xac1 Eq
	if(var_72_bool == 0) goto Label_2775; // 0xac2 JumpB
	var_73_string = ""; // 0xac3 PushV
	var_73_string = "Neutral"; // 0xac4 MovS
	func_2701(var_42_cvector, var_73_string); // 0xac5 NEW_2
	var_74_int = 526259; // 0xac7 PushI
	SetMessage(var_74_int); // 0xac8 TObjFunc
	ClearReplies(); // 0xaca TObjFunc
	var_75_int = 526260; // 0xacc PushI
	var_76_int = -1; // 0xacd PushI
	var_77_int = 27534; // 0xace PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xacf TObjFunc
	var_78_int = 526261; // 0xad1 PushI
	var_79_int = -1; // 0xad2 PushI
	var_80_int = 27535; // 0xad3 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xad4 TObjFunc
	return 0; // 0xad6 Return
	
Label_2775:
	var_3_string = 1; // 0xad7 TMovB
	var_81_bool = 0; // 0xad8 PushV
	func_4854(var_81_bool); // 0xad9 NEW_2
	if(var_81_bool == 0) goto Label_2783; // 0xadb JumpB
	lshStopAnimation(); // 0xadc Func
	goto Label_2785; // 0xade Jump
	
Label_2785:
	return 0; // 0xae1 Return
	
Label_2783:
	StopAnimation(); // 0xadf Func
	
Label_2787:
	return 0; // 0xae3 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xba2 PushI
	if(var_43_int == 0) goto Label_3111; // 0xba3 JumpB
	func_4655(); // 0xba5 NEW_2
	var_45_int = 27372; // 0xba7 PushI
	var_46_bool = var_42_cvector == var_45_int; // 0xba8 Eq
	if(var_46_bool == 0) goto Label_2991; // 0xba9 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xbaa PushV
	var_47_object = var_1_object; // 0xbab MovT
	var_48_object = var_0_object; // 0xbac MovT
	func_5077(); // 0xbad NEW_2
	
Label_2991:
	var_51_int = 27374; // 0xbaf PushI
	var_52_bool = var_42_cvector == var_51_int; // 0xbb0 Eq
	if(var_52_bool == 0) goto Label_2999; // 0xbb1 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0xbb2 PushV
	var_53_object = var_1_object; // 0xbb3 MovT
	var_54_object = var_0_object; // 0xbb4 MovT
	func_5083(); // 0xbb5 NEW_2
	
Label_2999:
	var_78_int = 43967; // 0xbb7 PushI
	var_79_bool = var_42_cvector == var_78_int; // 0xbb8 Eq
	if(var_79_bool == 0) goto Label_3007; // 0xbb9 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0xbba PushV
	var_80_object = var_1_object; // 0xbbb MovT
	var_81_object = var_0_object; // 0xbbc MovT
	func_5083(); // 0xbbd NEW_2
	
Label_3007:
	var_82_int = 27371; // 0xbbf PushI
	var_83_bool = var_41_bool == var_82_int; // 0xbc0 Eq
	if(var_83_bool == 0) goto Label_3058; // 0xbc1 JumpB
	var_84_string = ""; // 0xbc2 PushV
	var_84_string = "Fear"; // 0xbc3 MovS
	func_2955(var_42_cvector, var_84_string); // 0xbc4 NEW_2
	var_101_int = 526085; // 0xbc6 PushI
	SetMessage(var_101_int); // 0xbc7 TObjFunc
	ClearReplies(); // 0xbc9 TObjFunc
	var_102_bool = 0; // 0xbcb PushV
	var_102_bool = 0; // 0xbcc MovB
	var_103_bool = 0; // 0xbcd PushV
	var_103_bool = 0; // 0xbce MovB
	var_104_bool = 0; var_105_object = Obj(); // 0xbcf PushV
	var_105_object = var_1_object; // 0xbd0 MovT
	func_5353(var_105_object); // 0xbd1 NEW_2
	if(var_104_bool == 0) goto Label_3034; // 0xbd3 JumpB
	var_112_bool = 0; var_113_object = Obj(); // 0xbd4 PushV
	var_113_object = var_1_object; // 0xbd5 MovT
	func_5365(var_113_object); // 0xbd6 NEW_2
	if(var_112_bool == 0) goto Label_3034; // 0xbd8 JumpB
	var_103_bool = 1; // 0xbd9 MovB
	
Label_3034:
	if(var_103_bool == 0) goto Label_3041; // 0xbda JumpB
	var_118_bool = 0; var_119_object = Obj(); // 0xbdb PushV
	var_119_object = var_1_object; // 0xbdc MovT
	func_5377(var_119_object); // 0xbdd NEW_2
	if(var_118_bool == 0) goto Label_3041; // 0xbdf JumpB
	var_102_bool = 1; // 0xbe0 MovB
	
Label_3041:
	if(var_102_bool == 0) goto Label_3047; // 0xbe1 JumpB
	var_124_int = 526086; // 0xbe2 PushI
	var_125_int = 27373; // 0xbe3 PushI
	var_126_int = 27372; // 0xbe4 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xbe5 TObjFunc
	
Label_3047:
	var_127_int = 526089; // 0xbe7 PushI
	var_128_int = -1; // 0xbe8 PushI
	var_129_int = 27375; // 0xbe9 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0xbea TObjFunc
	var_130_int = 528861; // 0xbec PushI
	var_131_int = -1; // 0xbed PushI
	var_132_int = 30283; // 0xbee PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0xbef TObjFunc
	return 0; // 0xbf1 Return
	
Label_3058:
	var_133_int = 27373; // 0xbf2 PushI
	var_134_bool = var_41_bool == var_133_int; // 0xbf3 Eq
	if(var_134_bool == 0) goto Label_3076; // 0xbf4 JumpB
	var_135_string = ""; // 0xbf5 PushV
	var_135_string = "Fear"; // 0xbf6 MovS
	func_2955(var_42_cvector, var_135_string); // 0xbf7 NEW_2
	var_136_int = 526087; // 0xbf9 PushI
	SetMessage(var_136_int); // 0xbfa TObjFunc
	ClearReplies(); // 0xbfc TObjFunc
	var_137_int = 528862; // 0xbfe PushI
	var_138_int = 30285; // 0xbff PushI
	var_139_int = 30284; // 0xc00 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xc01 TObjFunc
	return 0; // 0xc03 Return
	
Label_3076:
	var_140_int = 30285; // 0xc04 PushI
	var_141_bool = var_41_bool == var_140_int; // 0xc05 Eq
	if(var_141_bool == 0) goto Label_3099; // 0xc06 JumpB
	var_142_string = ""; // 0xc07 PushV
	var_142_string = "Dream"; // 0xc08 MovS
	func_2955(var_42_cvector, var_142_string); // 0xc09 NEW_2
	var_143_int = 528863; // 0xc0b PushI
	SetMessage(var_143_int); // 0xc0c TObjFunc
	ClearReplies(); // 0xc0e TObjFunc
	var_144_int = 526088; // 0xc10 PushI
	var_145_int = -1; // 0xc11 PushI
	var_146_int = 27374; // 0xc12 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0xc13 TObjFunc
	var_147_int = 541764; // 0xc15 PushI
	var_148_int = -1; // 0xc16 PushI
	var_149_int = 43967; // 0xc17 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0xc18 TObjFunc
	return 0; // 0xc1a Return
	
Label_3099:
	var_3_string = 1; // 0xc1b TMovB
	var_150_bool = 0; // 0xc1c PushV
	func_4854(var_150_bool); // 0xc1d NEW_2
	if(var_150_bool == 0) goto Label_3107; // 0xc1f JumpB
	lshStopAnimation(); // 0xc20 Func
	goto Label_3109; // 0xc22 Jump
	
Label_3109:
	return 0; // 0xc25 Return
	
Label_3107:
	StopAnimation(); // 0xc23 Func
	
Label_3111:
	return 0; // 0xc27 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xcd8 PushI
	if(var_43_int == 0) goto Label_3489; // 0xcd9 JumpB
	func_4655(); // 0xcdb NEW_2
	var_45_int = 28892; // 0xcdd PushI
	var_46_bool = var_42_cvector == var_45_int; // 0xcde Eq
	if(var_46_bool == 0) goto Label_3301; // 0xcdf JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xce0 PushV
	var_47_object = var_1_object; // 0xce1 MovT
	var_48_object = var_0_object; // 0xce2 MovT
	func_5139(); // 0xce3 NEW_2
	
Label_3301:
	var_51_int = 28904; // 0xce5 PushI
	var_52_bool = var_42_cvector == var_51_int; // 0xce6 Eq
	if(var_52_bool == 0) goto Label_3309; // 0xce7 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0xce8 PushV
	var_53_object = var_1_object; // 0xce9 MovT
	var_54_object = var_0_object; // 0xcea MovT
	func_5088(); // 0xceb NEW_2
	
Label_3309:
	var_135_int = 28889; // 0xced PushI
	var_136_bool = var_41_bool == var_135_int; // 0xcee Eq
	if(var_136_bool == 0) goto Label_3346; // 0xcef JumpB
	var_137_string = ""; // 0xcf0 PushV
	var_137_string = "Neutral"; // 0xcf1 MovS
	func_3265(var_42_cvector, var_137_string); // 0xcf2 NEW_2
	var_154_int = 527548; // 0xcf4 PushI
	SetMessage(var_154_int); // 0xcf5 TObjFunc
	ClearReplies(); // 0xcf7 TObjFunc
	var_155_bool = 0; // 0xcf9 PushV
	var_155_bool = 0; // 0xcfa MovB
	var_156_bool = 0; var_157_object = Obj(); // 0xcfb PushV
	var_157_object = var_1_object; // 0xcfc MovT
	func_5389(var_157_object); // 0xcfd NEW_2
	if(var_156_bool == 0) goto Label_3334; // 0xcff JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0xd00 PushV
	var_165_object = var_1_object; // 0xd01 MovT
	func_5401(var_165_object); // 0xd02 NEW_2
	if(var_164_bool == 0) goto Label_3334; // 0xd04 JumpB
	var_155_bool = 1; // 0xd05 MovB
	
Label_3334:
	if(var_155_bool == 0) goto Label_3340; // 0xd06 JumpB
	var_170_int = 527551; // 0xd07 PushI
	var_171_int = 28893; // 0xd08 PushI
	var_172_int = 28892; // 0xd09 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xd0a TObjFunc
	
Label_3340:
	var_173_int = 527550; // 0xd0c PushI
	var_174_int = -1; // 0xd0d PushI
	var_175_int = 28891; // 0xd0e PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0xd0f TObjFunc
	return 0; // 0xd11 Return
	
Label_3346:
	var_176_int = 28893; // 0xd12 PushI
	var_177_bool = var_41_bool == var_176_int; // 0xd13 Eq
	if(var_177_bool == 0) goto Label_3369; // 0xd14 JumpB
	var_178_string = ""; // 0xd15 PushV
	var_178_string = "Dream"; // 0xd16 MovS
	func_3265(var_42_cvector, var_178_string); // 0xd17 NEW_2
	var_179_int = 527552; // 0xd19 PushI
	SetMessage(var_179_int); // 0xd1a TObjFunc
	ClearReplies(); // 0xd1c TObjFunc
	var_180_int = 527553; // 0xd1e PushI
	var_181_int = 28895; // 0xd1f PushI
	var_182_int = 28894; // 0xd20 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xd21 TObjFunc
	var_183_int = 527564; // 0xd23 PushI
	var_184_int = 28906; // 0xd24 PushI
	var_185_int = 28905; // 0xd25 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0xd26 TObjFunc
	return 0; // 0xd28 Return
	
Label_3369:
	var_186_int = 28906; // 0xd29 PushI
	var_187_bool = var_41_bool == var_186_int; // 0xd2a Eq
	if(var_187_bool == 0) goto Label_3387; // 0xd2b JumpB
	var_188_string = ""; // 0xd2c PushV
	var_188_string = "Dream"; // 0xd2d MovS
	func_3265(var_42_cvector, var_188_string); // 0xd2e NEW_2
	var_189_int = 527565; // 0xd30 PushI
	SetMessage(var_189_int); // 0xd31 TObjFunc
	ClearReplies(); // 0xd33 TObjFunc
	var_190_int = 527566; // 0xd35 PushI
	var_191_int = 28897; // 0xd36 PushI
	var_192_int = 28907; // 0xd37 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0xd38 TObjFunc
	return 0; // 0xd3a Return
	
Label_3387:
	var_193_int = 28895; // 0xd3b PushI
	var_194_bool = var_41_bool == var_193_int; // 0xd3c Eq
	if(var_194_bool == 0) goto Label_3405; // 0xd3d JumpB
	var_195_string = ""; // 0xd3e PushV
	var_195_string = "Rage"; // 0xd3f MovS
	func_3265(var_42_cvector, var_195_string); // 0xd40 NEW_2
	var_196_int = 527554; // 0xd42 PushI
	SetMessage(var_196_int); // 0xd43 TObjFunc
	ClearReplies(); // 0xd45 TObjFunc
	var_197_int = 527555; // 0xd47 PushI
	var_198_int = 28897; // 0xd48 PushI
	var_199_int = 28896; // 0xd49 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0xd4a TObjFunc
	return 0; // 0xd4c Return
	
Label_3405:
	var_200_int = 28897; // 0xd4d PushI
	var_201_bool = var_41_bool == var_200_int; // 0xd4e Eq
	if(var_201_bool == 0) goto Label_3423; // 0xd4f JumpB
	var_202_string = ""; // 0xd50 PushV
	var_202_string = "Neutral"; // 0xd51 MovS
	func_3265(var_42_cvector, var_202_string); // 0xd52 NEW_2
	var_203_int = 527556; // 0xd54 PushI
	SetMessage(var_203_int); // 0xd55 TObjFunc
	ClearReplies(); // 0xd57 TObjFunc
	var_204_int = 527557; // 0xd59 PushI
	var_205_int = 28899; // 0xd5a PushI
	var_206_int = 28898; // 0xd5b PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0xd5c TObjFunc
	return 0; // 0xd5e Return
	
Label_3423:
	var_207_int = 28899; // 0xd5f PushI
	var_208_bool = var_41_bool == var_207_int; // 0xd60 Eq
	if(var_208_bool == 0) goto Label_3441; // 0xd61 JumpB
	var_209_string = ""; // 0xd62 PushV
	var_209_string = "Neutral"; // 0xd63 MovS
	func_3265(var_42_cvector, var_209_string); // 0xd64 NEW_2
	var_210_int = 527558; // 0xd66 PushI
	SetMessage(var_210_int); // 0xd67 TObjFunc
	ClearReplies(); // 0xd69 TObjFunc
	var_211_int = 527559; // 0xd6b PushI
	var_212_int = 28901; // 0xd6c PushI
	var_213_int = 28900; // 0xd6d PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xd6e TObjFunc
	return 0; // 0xd70 Return
	
Label_3441:
	var_214_int = 28901; // 0xd71 PushI
	var_215_bool = var_41_bool == var_214_int; // 0xd72 Eq
	if(var_215_bool == 0) goto Label_3459; // 0xd73 JumpB
	var_216_string = ""; // 0xd74 PushV
	var_216_string = "Adoration"; // 0xd75 MovS
	func_3265(var_42_cvector, var_216_string); // 0xd76 NEW_2
	var_217_int = 527560; // 0xd78 PushI
	SetMessage(var_217_int); // 0xd79 TObjFunc
	ClearReplies(); // 0xd7b TObjFunc
	var_218_int = 527561; // 0xd7d PushI
	var_219_int = 28903; // 0xd7e PushI
	var_220_int = 28902; // 0xd7f PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xd80 TObjFunc
	return 0; // 0xd82 Return
	
Label_3459:
	var_221_int = 28903; // 0xd83 PushI
	var_222_bool = var_41_bool == var_221_int; // 0xd84 Eq
	if(var_222_bool == 0) goto Label_3477; // 0xd85 JumpB
	var_223_string = ""; // 0xd86 PushV
	var_223_string = "Adoration"; // 0xd87 MovS
	func_3265(var_42_cvector, var_223_string); // 0xd88 NEW_2
	var_224_int = 527562; // 0xd8a PushI
	SetMessage(var_224_int); // 0xd8b TObjFunc
	ClearReplies(); // 0xd8d TObjFunc
	var_225_int = 527563; // 0xd8f PushI
	var_226_int = -1; // 0xd90 PushI
	var_227_int = 28904; // 0xd91 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0xd92 TObjFunc
	return 0; // 0xd94 Return
	
Label_3477:
	var_3_string = 1; // 0xd95 TMovB
	var_228_bool = 0; // 0xd96 PushV
	func_4854(var_228_bool); // 0xd97 NEW_2
	if(var_228_bool == 0) goto Label_3485; // 0xd99 JumpB
	lshStopAnimation(); // 0xd9a Func
	goto Label_3487; // 0xd9c Jump
	
Label_3487:
	return 0; // 0xd9f Return
	
Label_3485:
	StopAnimation(); // 0xd9d Func
	
Label_3489:
	return 0; // 0xda1 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_cvector)
{
	var_43_int = 1; // 0xe49 PushI
	if(var_43_int == 0) goto Label_3848; // 0xe4a JumpB
	func_4655(); // 0xe4c NEW_2
	var_45_int = 41246; // 0xe4e PushI
	var_46_bool = var_41_bool == var_45_int; // 0xe4f Eq
	if(var_46_bool == 0) goto Label_3690; // 0xe50 JumpB
	var_47_string = ""; // 0xe51 PushV
	var_47_string = "Neutral"; // 0xe52 MovS
	func_3634(var_42_cvector, var_47_string); // 0xe53 NEW_2
	var_64_int = 539303; // 0xe55 PushI
	SetMessage(var_64_int); // 0xe56 TObjFunc
	ClearReplies(); // 0xe58 TObjFunc
	var_65_int = 542544; // 0xe5a PushI
	var_66_int = 44940; // 0xe5b PushI
	var_67_int = 44939; // 0xe5c PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xe5d TObjFunc
	var_68_int = 539304; // 0xe5f PushI
	var_69_int = -1; // 0xe60 PushI
	var_70_int = 41247; // 0xe61 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xe62 TObjFunc
	var_71_int = 542543; // 0xe64 PushI
	var_72_int = -1; // 0xe65 PushI
	var_73_int = 44938; // 0xe66 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xe67 TObjFunc
	return 0; // 0xe69 Return
	
Label_3690:
	var_74_int = 44940; // 0xe6a PushI
	var_75_bool = var_41_bool == var_74_int; // 0xe6b Eq
	if(var_75_bool == 0) goto Label_3713; // 0xe6c JumpB
	var_76_string = ""; // 0xe6d PushV
	var_76_string = "Dream"; // 0xe6e MovS
	func_3634(var_42_cvector, var_76_string); // 0xe6f NEW_2
	var_77_int = 542545; // 0xe71 PushI
	SetMessage(var_77_int); // 0xe72 TObjFunc
	ClearReplies(); // 0xe74 TObjFunc
	var_78_int = 542553; // 0xe76 PushI
	var_79_int = 44954; // 0xe77 PushI
	var_80_int = 44950; // 0xe78 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xe79 TObjFunc
	var_81_int = 542554; // 0xe7b PushI
	var_82_int = 44952; // 0xe7c PushI
	var_83_int = 44951; // 0xe7d PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xe7e TObjFunc
	return 0; // 0xe80 Return
	
Label_3713:
	var_84_int = 44952; // 0xe81 PushI
	var_85_bool = var_41_bool == var_84_int; // 0xe82 Eq
	if(var_85_bool == 0) goto Label_3731; // 0xe83 JumpB
	var_86_string = ""; // 0xe84 PushV
	var_86_string = "Adoration"; // 0xe85 MovS
	func_3634(var_42_cvector, var_86_string); // 0xe86 NEW_2
	var_87_int = 542555; // 0xe88 PushI
	SetMessage(var_87_int); // 0xe89 TObjFunc
	ClearReplies(); // 0xe8b TObjFunc
	var_88_int = 542556; // 0xe8d PushI
	var_89_int = 44954; // 0xe8e PushI
	var_90_int = 44953; // 0xe8f PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xe90 TObjFunc
	return 0; // 0xe92 Return
	
Label_3731:
	var_91_int = 44954; // 0xe93 PushI
	var_92_bool = var_41_bool == var_91_int; // 0xe94 Eq
	if(var_92_bool == 0) goto Label_3749; // 0xe95 JumpB
	var_93_string = ""; // 0xe96 PushV
	var_93_string = "Dream"; // 0xe97 MovS
	func_3634(var_42_cvector, var_93_string); // 0xe98 NEW_2
	var_94_int = 542557; // 0xe9a PushI
	SetMessage(var_94_int); // 0xe9b TObjFunc
	ClearReplies(); // 0xe9d TObjFunc
	var_95_int = 542558; // 0xe9f PushI
	var_96_int = 44957; // 0xea0 PushI
	var_97_int = 44956; // 0xea1 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xea2 TObjFunc
	return 0; // 0xea4 Return
	
Label_3749:
	var_98_int = 44957; // 0xea5 PushI
	var_99_bool = var_41_bool == var_98_int; // 0xea6 Eq
	if(var_99_bool == 0) goto Label_3772; // 0xea7 JumpB
	var_100_string = ""; // 0xea8 PushV
	var_100_string = "Adoration"; // 0xea9 MovS
	func_3634(var_42_cvector, var_100_string); // 0xeaa NEW_2
	var_101_int = 542559; // 0xeac PushI
	SetMessage(var_101_int); // 0xead TObjFunc
	ClearReplies(); // 0xeaf TObjFunc
	var_102_int = 542560; // 0xeb1 PushI
	var_103_int = 44962; // 0xeb2 PushI
	var_104_int = 44958; // 0xeb3 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0xeb4 TObjFunc
	var_105_int = 542561; // 0xeb6 PushI
	var_106_int = 44960; // 0xeb7 PushI
	var_107_int = 44959; // 0xeb8 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0xeb9 TObjFunc
	return 0; // 0xebb Return
	
Label_3772:
	var_108_int = 44960; // 0xebc PushI
	var_109_bool = var_41_bool == var_108_int; // 0xebd Eq
	if(var_109_bool == 0) goto Label_3790; // 0xebe JumpB
	var_110_string = ""; // 0xebf PushV
	var_110_string = "Neutral"; // 0xec0 MovS
	func_3634(var_42_cvector, var_110_string); // 0xec1 NEW_2
	var_111_int = 542562; // 0xec3 PushI
	SetMessage(var_111_int); // 0xec4 TObjFunc
	ClearReplies(); // 0xec6 TObjFunc
	var_112_int = 542563; // 0xec8 PushI
	var_113_int = 44962; // 0xec9 PushI
	var_114_int = 44961; // 0xeca PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0xecb TObjFunc
	return 0; // 0xecd Return
	
Label_3790:
	var_115_int = 44962; // 0xece PushI
	var_116_bool = var_41_bool == var_115_int; // 0xecf Eq
	if(var_116_bool == 0) goto Label_3813; // 0xed0 JumpB
	var_117_string = ""; // 0xed1 PushV
	var_117_string = "Neutral"; // 0xed2 MovS
	func_3634(var_42_cvector, var_117_string); // 0xed3 NEW_2
	var_118_int = 542564; // 0xed5 PushI
	SetMessage(var_118_int); // 0xed6 TObjFunc
	ClearReplies(); // 0xed8 TObjFunc
	var_119_int = 542565; // 0xeda PushI
	var_120_int = 44966; // 0xedb PushI
	var_121_int = 44964; // 0xedc PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0xedd TObjFunc
	var_122_int = 542566; // 0xedf PushI
	var_123_int = -1; // 0xee0 PushI
	var_124_int = 44965; // 0xee1 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0xee2 TObjFunc
	return 0; // 0xee4 Return
	
Label_3813:
	var_125_int = 44966; // 0xee5 PushI
	var_126_bool = var_41_bool == var_125_int; // 0xee6 Eq
	if(var_126_bool == 0) goto Label_3836; // 0xee7 JumpB
	var_127_string = ""; // 0xee8 PushV
	var_127_string = "Neutral"; // 0xee9 MovS
	func_3634(var_42_cvector, var_127_string); // 0xeea NEW_2
	var_128_int = 542567; // 0xeec PushI
	SetMessage(var_128_int); // 0xeed TObjFunc
	ClearReplies(); // 0xeef TObjFunc
	var_129_int = 542568; // 0xef1 PushI
	var_130_int = -1; // 0xef2 PushI
	var_131_int = 44967; // 0xef3 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0xef4 TObjFunc
	var_132_int = 542569; // 0xef6 PushI
	var_133_int = -1; // 0xef7 PushI
	var_134_int = 44968; // 0xef8 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0xef9 TObjFunc
	return 0; // 0xefb Return
	
Label_3836:
	var_3_string = 1; // 0xefc TMovB
	var_135_bool = 0; // 0xefd PushV
	func_4854(var_135_bool); // 0xefe NEW_2
	if(var_135_bool == 0) goto Label_3844; // 0xf00 JumpB
	lshStopAnimation(); // 0xf01 Func
	goto Label_3846; // 0xf03 Jump
	
Label_3846:
	return 0; // 0xf06 Return
	
Label_3844:
	StopAnimation(); // 0xf04 Func
	
Label_3848:
	return 0; // 0xf08 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_cvector)
{
	var_43_int = 1; // 0xfab PushI
	if(var_43_int == 0) goto Label_4051; // 0xfac JumpB
	func_4655(); // 0xfae NEW_2
	var_45_int = 42548; // 0xfb0 PushI
	var_46_bool = var_41_int == var_45_int; // 0xfb1 Eq
	if(var_46_bool == 0) goto Label_4039; // 0xfb2 JumpB
	var_47_string = ""; // 0xfb3 PushV
	var_47_string = "Neutral"; // 0xfb4 MovS
	func_3988(var_42_cvector, var_47_string); // 0xfb5 NEW_2
	var_64_int = 540539; // 0xfb7 PushI
	SetMessage(var_64_int); // 0xfb8 TObjFunc
	ClearReplies(); // 0xfba TObjFunc
	var_65_int = 540540; // 0xfbc PushI
	var_66_int = -1; // 0xfbd PushI
	var_67_int = 42549; // 0xfbe PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xfbf TObjFunc
	var_68_int = 540799; // 0xfc1 PushI
	var_69_int = -1; // 0xfc2 PushI
	var_70_int = 42848; // 0xfc3 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xfc4 TObjFunc
	return 0; // 0xfc6 Return
	
Label_4039:
	var_3_string = 1; // 0xfc7 TMovB
	var_71_bool = 0; // 0xfc8 PushV
	func_4854(var_71_bool); // 0xfc9 NEW_2
	if(var_71_bool == 0) goto Label_4047; // 0xfcb JumpB
	lshStopAnimation(); // 0xfcc Func
	goto Label_4049; // 0xfce Jump
	
Label_4049:
	return 0; // 0xfd1 Return
	
Label_4047:
	StopAnimation(); // 0xfcf Func
	
Label_4051:
	return 0; // 0xfd3 Return
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_int)
{
	var_42_int = 10; // 0x1021 PushI
	var_43_bool = var_41_int == var_42_int; // 0x1022 Eq
	if(var_43_bool == 0) goto Label_4165; // 0x1023 JumpB
	func_4124(); // 0x1025 NEW_2
	var_45_bool = 0; // 0x1027 PushV
	var_45_bool = 0; // 0x1028 MovB
	var_46_bool = 0; // 0x1029 PushV
	func_4379(var_46_bool); // 0x102a NEW_2
	if(var_46_bool == 0) goto Label_4146; // 0x102c JumpB
	var_49_bool = 0; // 0x102d PushV
	func_4093(var_49_bool); // 0x102e NEW_2
	if(var_49_bool == 0) goto Label_4146; // 0x1030 JumpB
	var_45_bool = 1; // 0x1031 MovB
	
Label_4146:
	if(var_45_bool == 0) goto Label_4159; // 0x1032 JumpB
	var_66_bool = 0; // 0x1033 PushV
	func_4073(var_66_bool); // 0x1034 NEW_2
	if(var_66_bool == 0) goto Label_4158; // 0x1036 JumpB
	var_85_bool = 0; var_86_object = Obj(); // 0x1037 PushV
	var_87_object = Obj(); // 0x1038 PushV
	func_4662(var_87_object); // 0x1039 NEW_2
	var_86_object = var_87_object; // 0x103a Mov
	func_4529(var_86_object); // 0x103c NEW_2
	
Label_4158:
	goto Label_4165; // 0x103e Jump
	
Label_4165:
	return 0; // 0x1045 Return
	
Label_4159:
	func_4088(var_41_int); // 0x1040 NEW_2
	func_4115(); // 0x1043 NEW_2
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	func_4306(); // 0x1047 NEW_2
	func_4124(); // 0x104a NEW_2
	lshStopSpeech(); // 0x104c Func
	lshStopAnimation(); // 0x104e Func
	StopAsync(); // 0x1050 Func
	Hold(); // 0x1052 Func
	return 0; // 0x1054 Return
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	StopGroup0(); // 0x1055 Func
	func_4124(); // 0x1058 NEW_2
	var_42_string = ""; // 0x105a PushV
	var_42_string = "Neutral"; // 0x105b MovS
	func_4609(var_42_string); // 0x105c NEW_2
	func_4115(); // 0x105f NEW_2
	return 0; // 0x1061 Return
}


task_16_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_bool)
{
	var_42_bool = var_41_bool; // 0x1063 Push
	if(var_42_bool == 0) goto Label_4201; // 0x1064 JumpB
	func_4115(); // 0x1066 NEW_2
	goto Label_4205; // 0x1068 Jump
	
Label_4205:
	return 0; // 0x106d Return
	
Label_4201:
	var_48_string = ""; // 0x1069 PushV
	var_48_string = "Neutral"; // 0x106a MovS
	func_4609(var_48_string); // 0x106b NEW_2
}


task_16_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector, var_41_object)
{
	var_42_bool = 0; var_43_bool = 0; // 0x106e PushV
	IsOverrideActive(var_43_bool); // 0x106f Func
	var_44_bool = var_43_bool == 0; // 0x1071 Not
	if(var_44_bool == 0) goto Label_4234; // 0x1072 JumpB
	EventDisable(0); // 0x1073 EventDisable
	func_4306(); // 0x1075 NEW_2
	var_45_bool = 0; var_46_object = Obj(); // 0x1077 PushV
	var_46_object = var_41_object; // 0x1078 Mov
	func_4370(var_46_object); // 0x1079 NEW_2
	EventEnable(0); // 0x107b EventEnable
	var_59_object = Obj(); // 0x107c PushV
	var_59_object = var_41_object; // 0x107d Mov
	func_5729(var_59_object); // 0x107e NEW_2
	var_894_string = ""; // 0x1080 PushV
	var_894_string = "Neutral"; // 0x1081 MovS
	func_4609(var_894_string); // 0x1082 NEW_2
	func_4124(); // 0x1085 NEW_2
	func_4115(); // 0x1088 NEW_2
	
Label_4234:
	return 2; // 0x108a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_cvector)
{
	var_41_bool = GlobalVars[1]; // 0xfd4 PushGE
	var_41_bool = 0; // 0xfd5 MovB
	GlobalVars[1] = var_41_bool; // 0xfd6 PopGE
	func_4059(var_40_cvector); // 0xfd8 NEW_2
	return 0; // 0xfda Return
}


func_0(var_0_object, var_291_int, var_292_object)
{
	var_294_object = Obj(); var_295_bool = 0; var_296_int = 0; var_297_bool = 0; var_298_object = Obj(); var_299_bool = 0; var_300_int = 0; var_301_bool = 0; // 0x0 PushV
	var_0_object = var_292_object; // 0x1 TMov
	var_302_bool = 0; var_303_object = Obj(); var_304_float = 0; // 0x2 PushV
	var_303_object = var_292_object; // 0x3 Mov
	var_304_float = 70.0; // 0x4 MovF
	func_4384(var_303_object, var_304_float); // 0x5 NEW_2
	var_305_bool = var_302_bool == 0; // 0x7 Not
	if(var_305_bool == 0) goto Label_11; // 0x8 JumpB
	var_291_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_298_object); // 0xb Func
	var_306_int = 0; // 0xd PushV
	func_4848(var_306_int); // 0xe NEW_2
	SetNPCName(var_306_int); // 0x10 ObjFunc
	var_307_int = 0; // 0x12 PushV
	func_4846(var_307_int); // 0x13 NEW_2
	SetNPCDescription(var_307_int); // 0x15 ObjFunc
	var_308_string = ""; // 0x17 PushV
	func_4850(var_308_string); // 0x18 NEW_2
	SetPhoto(var_308_string); // 0x1a ObjFunc
	var_309_string = ""; // 0x1c PushV
	func_4852(var_309_string); // 0x1d NEW_2
	SetPhoto2(var_309_string); // 0x1f ObjFunc
	var_310_int = 0; // 0x21 PushV
	func_5712(var_310_int); // 0x22 NEW_2
	SetPlayerName(var_310_int); // 0x24 ObjFunc
	var_300_int = -1; // 0x26 MovI
	IsOverrideActive(var_299_bool); // 0x27 Func
	var_311_bool = var_299_bool; // 0x29 Push
	if(var_311_bool == 0) goto Label_45; // 0x2a JumpB
	var_291_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_298_object); // 0x2d Func
	var_312_bool = 0; var_313_object = Obj(); // 0x2f PushV
	var_314_object = Obj(); // 0x30 PushV
	func_4662(var_314_object); // 0x31 NEW_2
	var_313_object = var_314_object; // 0x32 Mov
	func_4471(var_312_bool, var_313_object); // 0x34 NEW_2
	var_315_object = Obj(); var_316_object = Obj(); // 0x36 PushV
	var_315_object = var_292_object; // 0x37 Mov
	var_316_object = var_298_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_317_object, var_318_object, var_319_string, var_320_bool, var_315_object, var_316_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_301_bool); // 0x3d ObjFunc
	
Label_63:
	var_434_bool = var_301_bool == 0; // 0x3f Not
	if(var_434_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_301_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_435_object = Obj(); // 0x46 PushV
	var_435_object = var_292_object; // 0x47 Mov
	func_4453(); // 0x48 NEW_2
	StopDialog(var_298_object); // 0x4a Func
	GetReturnValue(var_300_int); // 0x4c ObjFunc
	var_291_int = var_300_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_4609(var_262_string)
{
	var_263_bool = 0; var_264_float = 0; var_265_float = 0; var_266_bool = 0; var_267_float = 0; var_268_float = 0; // 0x1201 PushV
	lshHasAnimation(var_266_bool, var_262_string); // 0x1202 Func
	var_269_bool = var_266_bool; // 0x1204 Push
	if(var_269_bool == 0) goto Label_4620; // 0x1205 JumpB
	lshGetAnimTimes(var_262_string, var_267_float, var_268_float); // 0x1206 Func
	var_270_bool = 0; // 0x1208 PushB
	lshPlayAnimation(var_267_float, var_268_float, var_270_bool); // 0x1209 Func
	goto Label_4624; // 0x120b Jump
	
Label_4624:
	return 6; // 0x1210 Return
	
Label_4620:
	var_271_string = "Can't find lsh animation : "; // 0x120c PushS
	var_272_int = var_271_string + var_262_string; // 0x120d Add
	Trace(var_272_int); // 0x120e Func
}


func_5634(var_67_bool, var_68_object, var_69_int)
{
	var_70_object = Obj(); var_71_object = Obj(); var_72_int = 0; var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0; // 0x1602 PushV
	var_76_object = Obj(); // 0x1603 PushV
	func_5621(var_76_object); // 0x1604 NEW_2
	var_73_object = var_76_object; // 0x1605 Mov
	Find(var_69_int, var_74_object); // 0x1607 ObjFunc
	var_81_bool = var_74_object == 0; // 0x1609 Not
	if(var_81_bool == 0) goto Label_5649; // 0x160a JumpB
	var_82_string = "Can't find diary parent with id: "; // 0x160b PushS
	var_83_int = var_82_string + var_69_int; // 0x160c Add
	Trace(var_83_int); // 0x160d Func
	var_67_bool = 0; // 0x160f MovB
	return 6; // 0x1610 Return
	
Label_5649:
	AddChild(var_68_object); // 0x1611 ObjFunc
	var_84_int = 7; // 0x1613 PushI
	SendWorldWndMessage(var_84_int); // 0x1614 Func
	GetCategory(var_75_int); // 0x1616 ObjFunc
	SetDiarySection(var_75_int); // 0x1618 Func
	var_67_bool = 0; // 0x161a MovB
	return 6; // 0x161b Return
}


func_2562(var_0_object, var_62_int, var_63_object)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_int = 0; var_68_bool = 0; var_69_object = Obj(); var_70_bool = 0; var_71_int = 0; var_72_bool = 0; // 0xa02 PushV
	var_0_object = var_63_object; // 0xa03 TMov
	var_73_bool = 0; var_74_object = Obj(); var_75_float = 0; // 0xa04 PushV
	var_74_object = var_63_object; // 0xa05 Mov
	var_75_float = 70.0; // 0xa06 MovF
	func_4384(var_74_object, var_75_float); // 0xa07 NEW_2
	var_120_bool = var_73_bool == 0; // 0xa09 Not
	if(var_120_bool == 0) goto Label_2573; // 0xa0a JumpB
	var_62_int = -2; // 0xa0b MovI
	return 8; // 0xa0c Return
	
Label_2573:
	CreateDialog(var_69_object); // 0xa0d Func
	var_121_int = 0; // 0xa0f PushV
	func_4848(var_121_int); // 0xa10 NEW_2
	SetNPCName(var_121_int); // 0xa12 ObjFunc
	var_122_int = 0; // 0xa14 PushV
	func_4846(var_122_int); // 0xa15 NEW_2
	SetNPCDescription(var_122_int); // 0xa17 ObjFunc
	var_123_string = ""; // 0xa19 PushV
	func_4850(var_123_string); // 0xa1a NEW_2
	SetPhoto(var_123_string); // 0xa1c ObjFunc
	var_124_string = ""; // 0xa1e PushV
	func_4852(var_124_string); // 0xa1f NEW_2
	SetPhoto2(var_124_string); // 0xa21 ObjFunc
	var_125_int = 0; // 0xa23 PushV
	func_5712(var_125_int); // 0xa24 NEW_2
	SetPlayerName(var_125_int); // 0xa26 ObjFunc
	var_71_int = -1; // 0xa28 MovI
	IsOverrideActive(var_70_bool); // 0xa29 Func
	var_133_bool = var_70_bool; // 0xa2b Push
	if(var_133_bool == 0) goto Label_2607; // 0xa2c JumpB
	var_62_int = -2; // 0xa2d MovI
	return 8; // 0xa2e Return
	
Label_2607:
	DoDialog(var_69_object); // 0xa2f Func
	var_134_bool = 0; var_135_object = Obj(); // 0xa31 PushV
	var_136_object = Obj(); // 0xa32 PushV
	func_4662(var_136_object); // 0xa33 NEW_2
	var_135_object = var_136_object; // 0xa34 Mov
	func_4471(var_134_bool, var_135_object); // 0xa36 NEW_2
	var_229_object = Obj(); var_230_object = Obj(); // 0xa38 PushV
	var_229_object = var_63_object; // 0xa39 Mov
	var_230_object = var_69_object; // 0xa3a Mov
	TaskCall(7); // 0xa3b TaskCall
	func_2643(var_231_object, var_232_object, var_233_string, var_234_bool, var_229_object, var_230_object); // 0xa3c NEW_2
	TaskReturn(); // 0xa3d TaskReturn
	IsDialogEnd(var_72_bool); // 0xa3f ObjFunc
	
Label_2625:
	var_278_bool = var_72_bool == 0; // 0xa41 Not
	if(var_278_bool == 0) goto Label_2632; // 0xa42 JumpB
	sync(); // 0xa43 Func
	IsDialogEnd(var_72_bool); // 0xa45 ObjFunc
	goto Label_2625; // 0xa47 Jump
	
Label_2632:
	var_279_object = Obj(); // 0xa48 PushV
	var_279_object = var_63_object; // 0xa49 Mov
	func_4453(); // 0xa4a NEW_2
	StopDialog(var_69_object); // 0xa4c Func
	GetReturnValue(var_71_int); // 0xa4e ObjFunc
	var_62_int = var_71_int; // 0xa50 Mov
	return 8; // 0xa51 Return
}


func_4625(var_240_string, var_241_bool)
{
	var_244_bool = 0; var_245_float = 0; var_246_float = 0; var_247_bool = 0; var_248_float = 0; var_249_float = 0; // 0x1211 PushV
	lshHasAnimation(var_247_bool, var_240_string); // 0x1212 Func
	var_250_bool = var_247_bool; // 0x1214 Push
	if(var_250_bool == 0) goto Label_4635; // 0x1215 JumpB
	lshGetAnimTimes(var_240_string, var_248_float, var_249_float); // 0x1216 Func
	lshPlayAnimation(var_248_float, var_249_float, var_241_bool); // 0x1218 Func
	goto Label_4639; // 0x121a Jump
	
Label_4639:
	return 6; // 0x121f Return
	
Label_4635:
	var_251_string = "Can't find lsh animation : "; // 0x121b PushS
	var_252_int = var_251_string + var_240_string; // 0x121c Add
	Trace(var_252_int); // 0x121d Func
}


func_5139()
{
	var_49_string = "ook11Anna1"; // 0x1414 PushS
	var_50_int = 1; // 0x1415 PushI
	SetVariable(var_49_string, var_50_int); // 0x1416 Func
	return 0; // 0x1418 Return
}


func_4115()
{
	var_896_float = 0; var_897_float = 0; // 0x1013 PushV
	var_898_int = 8; // 0x1014 PushI
	var_899_int = 16; // 0x1015 PushI
	rand(var_897_float, var_898_int, var_899_int); // 0x1016 Func
	var_900_int = 10; // 0x1018 PushI
	SetTimer(var_900_int, var_897_float); // 0x1019 Func
	return 2; // 0x101b Return
}


func_5145()
{
	var_211_string = "playsound"; // 0x141a PushS
	var_212_string = "givemoney"; // 0x141b PushS
	TriggerWorld(var_211_string, var_212_string); // 0x141c Func
	return 0; // 0x141e Return
}


func_4124()
{
	var_895_int = 10; // 0x101c PushI
	KillTimer(var_895_int); // 0x101d Func
	return 0; // 0x101f Return
}


func_5662(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); // 0x161e PushV
	GetMainOutdoorScene(var_56_object); // 0x161f Func
	var_58_bool = var_56_object == 0; // 0x1621 NullEq
	if(var_58_bool == 0) goto Label_5673; // 0x1622 JumpB
	var_59_string = "Can't find main outdoor scene"; // 0x1623 PushS
	Trace(var_59_string); // 0x1624 Func
	var_57_object = 0; // 0x1626 SetNull
	var_53_object = var_57_object; // 0x1627 Mov
	return 4; // 0x1628 Return
	
Label_5673:
	GetMap(var_57_object); // 0x1629 ObjFunc
	var_53_object = var_57_object; // 0x162b Mov
	return 4; // 0x162c Return
}


func_5151()
{
	var_146_string = "playsound"; // 0x1420 PushS
	var_147_string = "giveitem"; // 0x1421 PushS
	TriggerWorld(var_146_string, var_147_string); // 0x1422 Func
	return 0; // 0x1424 Return
}


func_4640(var_168_bool, var_169_string)
{
	var_170_bool = 0; var_171_bool = 0; // 0x1220 PushV
	var_172_bool = 0; // 0x1221 PushV
	func_4854(var_172_bool); // 0x1222 NEW_2
	if(var_172_bool == 0) goto Label_4653; // 0x1224 JumpB
	lshHasSpeech(var_171_bool, var_169_string); // 0x1225 Func
	var_173_bool = var_171_bool; // 0x1227 Push
	if(var_173_bool == 0) goto Label_4653; // 0x1228 JumpB
	lshPlaySpeech(var_169_string); // 0x1229 Func
	var_168_bool = 1; // 0x122b MovB
	return 2; // 0x122c Return
	
Label_4653:
	var_168_bool = 0; // 0x122d MovB
	return 2; // 0x122e Return
}


func_5157(var_188_object)
{
	var_190_string = "money 1500 is given"; // 0x1426 PushS
	Trace(var_190_string); // 0x1427 Func
	var_191_object = Obj(); var_192_int = 0; // 0x1429 PushV
	var_191_object = var_188_object; // 0x142a Mov
	var_192_int = 1500; // 0x142b MovI
	func_4706(var_191_object, var_192_int); // 0x142c NEW_2
	return 0; // 0x142e Return
}


func_3112(var_0_object, var_708_int, var_709_object)
{
	var_711_object = Obj(); var_712_bool = 0; var_713_int = 0; var_714_bool = 0; var_715_object = Obj(); var_716_bool = 0; var_717_int = 0; var_718_bool = 0; // 0xc28 PushV
	var_0_object = var_709_object; // 0xc29 TMov
	var_719_bool = 0; var_720_object = Obj(); var_721_float = 0; // 0xc2a PushV
	var_720_object = var_709_object; // 0xc2b Mov
	var_721_float = 70.0; // 0xc2c MovF
	func_4384(var_720_object, var_721_float); // 0xc2d NEW_2
	var_722_bool = var_719_bool == 0; // 0xc2f Not
	if(var_722_bool == 0) goto Label_3123; // 0xc30 JumpB
	var_708_int = -2; // 0xc31 MovI
	return 8; // 0xc32 Return
	
Label_3123:
	CreateDialog(var_715_object); // 0xc33 Func
	var_723_int = 0; // 0xc35 PushV
	func_4848(var_723_int); // 0xc36 NEW_2
	SetNPCName(var_723_int); // 0xc38 ObjFunc
	var_724_int = 0; // 0xc3a PushV
	func_4846(var_724_int); // 0xc3b NEW_2
	SetNPCDescription(var_724_int); // 0xc3d ObjFunc
	var_725_string = ""; // 0xc3f PushV
	func_4850(var_725_string); // 0xc40 NEW_2
	SetPhoto(var_725_string); // 0xc42 ObjFunc
	var_726_string = ""; // 0xc44 PushV
	func_4852(var_726_string); // 0xc45 NEW_2
	SetPhoto2(var_726_string); // 0xc47 ObjFunc
	var_727_int = 0; // 0xc49 PushV
	func_5712(var_727_int); // 0xc4a NEW_2
	SetPlayerName(var_727_int); // 0xc4c ObjFunc
	var_717_int = -1; // 0xc4e MovI
	IsOverrideActive(var_716_bool); // 0xc4f Func
	var_728_bool = var_716_bool; // 0xc51 Push
	if(var_728_bool == 0) goto Label_3157; // 0xc52 JumpB
	var_708_int = -2; // 0xc53 MovI
	return 8; // 0xc54 Return
	
Label_3157:
	DoDialog(var_715_object); // 0xc55 Func
	var_729_bool = 0; var_730_object = Obj(); // 0xc57 PushV
	var_731_object = Obj(); // 0xc58 PushV
	func_4662(var_731_object); // 0xc59 NEW_2
	var_730_object = var_731_object; // 0xc5a Mov
	func_4471(var_729_bool, var_730_object); // 0xc5c NEW_2
	var_732_object = Obj(); var_733_object = Obj(); // 0xc5e PushV
	var_732_object = var_709_object; // 0xc5f Mov
	var_733_object = var_715_object; // 0xc60 Mov
	TaskCall(11); // 0xc61 TaskCall
	func_3193(var_734_object, var_735_object, var_736_string, var_737_bool, var_732_object, var_733_object); // 0xc62 NEW_2
	TaskReturn(); // 0xc63 TaskReturn
	IsDialogEnd(var_718_bool); // 0xc65 ObjFunc
	
Label_3175:
	var_775_bool = var_718_bool == 0; // 0xc67 Not
	if(var_775_bool == 0) goto Label_3182; // 0xc68 JumpB
	sync(); // 0xc69 Func
	IsDialogEnd(var_718_bool); // 0xc6b ObjFunc
	goto Label_3175; // 0xc6d Jump
	
Label_3182:
	var_776_object = Obj(); // 0xc6e PushV
	var_776_object = var_709_object; // 0xc6f Mov
	func_4453(); // 0xc70 NEW_2
	StopDialog(var_715_object); // 0xc72 Func
	GetReturnValue(var_717_int); // 0xc74 ObjFunc
	var_708_int = var_717_int; // 0xc76 Mov
	return 8; // 0xc77 Return
}


func_4655()
{
	var_44_bool = 0; // 0x122f PushV
	func_4854(var_44_bool); // 0x1230 NEW_2
	if(var_44_bool == 0) goto Label_4661; // 0x1232 JumpB
	lshStopSpeech(); // 0x1233 Func
	
Label_4661:
	return 0; // 0x1235 Return
}


func_5167()
{
	var_97_string = "playsound"; // 0x1430 PushS
	var_98_string = "mapmark"; // 0x1431 PushS
	TriggerWorld(var_97_string, var_98_string); // 0x1432 Func
	return 0; // 0x1434 Return
}


func_5679(var_100_object, var_101_string, var_102_float)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_object = Obj(); var_107_bool = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_object = Obj(); var_111_bool = 0; // 0x162f PushV
	GetMainOutdoorScene(var_110_object); // 0x1630 Func
	var_112_bool = var_110_object == 0; // 0x1632 NullEq
	if(var_112_bool == 0) goto Label_5688; // 0x1633 JumpB
	var_113_string = "Can't find main outdoor scene"; // 0x1634 PushS
	Trace(var_113_string); // 0x1635 Func
	return 8; // 0x1637 Return
	
Label_5688:
	GetLocator(var_101_string, var_111_bool, var_108_cvector, var_109_cvector); // 0x1638 ObjFunc
	var_114_bool = var_111_bool == 0; // 0x163a Not
	if(var_114_bool == 0) goto Label_5698; // 0x163b JumpB
	var_115_string = "Warning: outdoor scene locator "; // 0x163c PushS
	var_116_int = var_115_string + var_101_string; // 0x163d Add
	var_117_string = " doesnt exist"; // 0x163e PushS
	var_118_int = var_116_int + var_117_string; // 0x163f Add
	Trace(var_118_int); // 0x1640 Func
	
Label_5698:
	GetMap(var_100_object); // 0x1642 ObjFunc
	var_119_bool = var_100_object == 0; // 0x1644 NullEq
	if(var_119_bool == 0) goto Label_5706; // 0x1645 JumpB
	var_120_string = "Can't find map"; // 0x1646 PushS
	Trace(var_120_string); // 0x1647 Func
	return 8; // 0x1649 Return
	
Label_5706:
	var_121_float = GetByIndex(var_108_cvector, 0); // 0x164a PushE
	var_122_float = GetByIndex(var_108_cvector, 2); // 0x164b PushE
	SetMapParams(var_121_float, var_122_float, var_102_float); // 0x164c ObjFunc
	return 8; // 0x164e Return
}


func_3634(var_2_object, var_810_string)
{
	var_811_bool = 0; // 0xe33 PushV
	func_4854(var_811_bool); // 0xe34 NEW_2
	var_812_bool = var_811_bool == 0; // 0xe36 Not
	if(var_812_bool == 0) goto Label_3641; // 0xe37 JumpB
	return 0; // 0xe38 Return
	
Label_3641:
	var_813_bool = var_810_string == var_2_object; // 0xe39 Eq
	if(var_813_bool == 0) goto Label_3644; // 0xe3a JumpB
	return 0; // 0xe3b Return
	
Label_3644:
	var_814_string = ""; var_815_bool = 0; // 0xe3c PushV
	var_814_string = var_810_string; // 0xe3d Mov
	var_816_string = ""; // 0xe3e PushS
	var_817_bool = var_810_string == var_816_string; // 0xe3f Eq
	if(var_817_bool == 0) goto Label_3651; // 0xe40 JumpB
	var_815_bool = 0; // 0xe41 MovB
	goto Label_3652; // 0xe42 Jump
	
Label_3652:
	func_4625(var_814_string, var_815_bool); // 0xe44 NEW_2
	var_2_object = var_810_string; // 0xe46 TMov
	return 0; // 0xe47 Return
	
Label_3651:
	var_815_bool = 1; // 0xe43 MovB
}


func_5173(var_323_bool)
{
	var_325_int = 0; var_326_string = ""; // 0x1436 PushV
	var_326_string = "k1q01"; // 0x1437 MovS
	func_4689(var_325_int, var_326_string); // 0x1438 NEW_2
	var_329_int = 4; // 0x143a PushI
	var_330_bool = var_325_int == var_329_int; // 0x143b Eq
	if(var_330_bool == 0) goto Label_5183; // 0x143c JumpB
	var_323_bool = 1; // 0x143d MovB
	return 0; // 0x143e Return
	
Label_5183:
	var_323_bool = 0; // 0x143f MovB
	return 0; // 0x1440 Return
}


func_4662(var_136_object)
{
	var_137_object = Obj(); var_138_object = Obj(); // 0x1236 PushV
	self(var_138_object); // 0x1237 Func
	var_136_object = var_138_object; // 0x1239 Mov
	return 2; // 0x123a Return
}


func_1084(var_0_object, var_1_object, var_2_object, var_3_string, var_462_object, var_463_object)
{
	var_0_object = var_463_object; // 0x43d TMov
	var_1_object = var_462_object; // 0x43e TMov
	var_3_string = 0; // 0x43f TMovB
	var_468_int = 1; // 0x440 PushI
	if(var_468_int == 0) goto Label_1132; // 0x441 JumpB
	var_469_string = ""; // 0x442 PushV
	var_469_string = "Neutral"; // 0x443 MovS
	func_1162(var_463_object, var_469_string); // 0x444 NEW_2
	var_477_int = 525346; // 0x446 PushI
	SetMessage(var_477_int); // 0x447 TObjFunc
	ClearReplies(); // 0x449 TObjFunc
	var_478_bool = 0; var_479_object = Obj(); // 0x44b PushV
	var_479_object = var_1_object; // 0x44c MovT
	func_5257(var_479_object); // 0x44d NEW_2
	if(var_478_bool == 0) goto Label_1109; // 0x44f JumpB
	var_484_int = 525348; // 0x450 PushI
	var_485_int = 44408; // 0x451 PushI
	var_486_int = 26716; // 0x452 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x453 TObjFunc
	
Label_1109:
	var_487_bool = 0; var_488_object = Obj(); // 0x455 PushV
	var_488_object = var_1_object; // 0x456 MovT
	func_5269(var_488_object); // 0x457 NEW_2
	if(var_487_bool == 0) goto Label_1119; // 0x459 JumpB
	var_493_int = 541760; // 0x45a PushI
	var_494_int = 43964; // 0x45b PushI
	var_495_int = 43963; // 0x45c PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x45d TObjFunc
	
Label_1119:
	var_496_int = 525347; // 0x45f PushI
	var_497_int = -1; // 0x460 PushI
	var_498_int = 26715; // 0x461 PushI
	AddReply(var_496_int, var_497_int, var_498_int); // 0x462 TObjFunc
	var_499_int = 529145; // 0x464 PushI
	var_500_int = -1; // 0x465 PushI
	var_501_int = 30591; // 0x466 PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x467 TObjFunc
	goto Label_1132; // 0x469 Jump
	
Label_1132:
	var_502_bool = 0; // 0x46c PushV
	func_4854(var_502_bool); // 0x46d NEW_2
	if(var_502_bool == 0) goto Label_1147; // 0x46f JumpB
	
Label_1136:
	lshWaitForAnimEnd(); // 0x470 Func
	var_503_string = var_3_string; // 0x472 PushT
	if(var_503_string == 0) goto Label_1141; // 0x473 JumpB
	goto Label_1146; // 0x474 Jump
	
Label_1146:
	goto Label_1161; // 0x47a Jump
	
Label_1161:
	return 0; // 0x489 Return
	
Label_1141:
	var_504_string = ""; // 0x475 PushV
	var_504_string = var_2_object; // 0x476 MovT
	func_4609(var_504_string); // 0x477 NEW_2
	goto Label_1136; // 0x479 Jump
	
Label_1147:
	var_505_string = "all"; // 0x47b PushS
	var_506_string = "idle"; // 0x47c PushS
	PlayAnimation(var_505_string, var_506_string); // 0x47d Func
	
Label_1151:
	WaitForAnimEnd(); // 0x47f Func
	var_507_string = var_3_string; // 0x481 PushT
	if(var_507_string == 0) goto Label_1156; // 0x482 JumpB
	goto Label_1161; // 0x483 Jump
	
Label_1156:
	var_508_string = "all"; // 0x484 PushS
	var_509_string = "idle"; // 0x485 PushS
	PlayAnimation(var_508_string, var_509_string); // 0x486 Func
	goto Label_1151; // 0x488 Jump
}


func_1596(var_0_object, var_1_object, var_2_object, var_3_string, var_538_object, var_539_object)
{
	var_0_object = var_539_object; // 0x63d TMov
	var_1_object = var_538_object; // 0x63e TMov
	var_3_string = 0; // 0x63f TMovB
	var_544_int = 1; // 0x640 PushI
	if(var_544_int == 0) goto Label_1697; // 0x641 JumpB
	var_545_bool = 0; var_546_object = Obj(); // 0x642 PushV
	var_546_object = var_1_object; // 0x643 MovT
	func_5317(var_546_object); // 0x644 NEW_2
	if(var_545_bool == 0) goto Label_1627; // 0x646 JumpB
	var_551_string = ""; // 0x647 PushV
	var_551_string = "Neutral"; // 0x648 MovS
	func_1727(var_539_object, var_551_string); // 0x649 NEW_2
	var_559_int = 525442; // 0x64b PushI
	SetMessage(var_559_int); // 0x64c TObjFunc
	ClearReplies(); // 0x64e TObjFunc
	var_560_int = 525443; // 0x650 PushI
	var_561_int = -1; // 0x651 PushI
	var_562_int = 26811; // 0x652 PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x653 TObjFunc
	var_563_int = 529337; // 0x655 PushI
	var_564_int = -1; // 0x656 PushI
	var_565_int = 30792; // 0x657 PushI
	AddReply(var_563_int, var_564_int, var_565_int); // 0x658 TObjFunc
	goto Label_1697; // 0x65a Jump
	
Label_1697:
	var_566_bool = 0; // 0x6a1 PushV
	func_4854(var_566_bool); // 0x6a2 NEW_2
	if(var_566_bool == 0) goto Label_1712; // 0x6a4 JumpB
	
Label_1701:
	lshWaitForAnimEnd(); // 0x6a5 Func
	var_567_string = var_3_string; // 0x6a7 PushT
	if(var_567_string == 0) goto Label_1706; // 0x6a8 JumpB
	goto Label_1711; // 0x6a9 Jump
	
Label_1711:
	goto Label_1726; // 0x6af Jump
	
Label_1726:
	return 0; // 0x6be Return
	
Label_1706:
	var_568_string = ""; // 0x6aa PushV
	var_568_string = var_2_object; // 0x6ab MovT
	func_4609(var_568_string); // 0x6ac NEW_2
	goto Label_1701; // 0x6ae Jump
	
Label_1712:
	var_569_string = "all"; // 0x6b0 PushS
	var_570_string = "idle"; // 0x6b1 PushS
	PlayAnimation(var_569_string, var_570_string); // 0x6b2 Func
	
Label_1716:
	WaitForAnimEnd(); // 0x6b4 Func
	var_571_string = var_3_string; // 0x6b6 PushT
	if(var_571_string == 0) goto Label_1721; // 0x6b7 JumpB
	goto Label_1726; // 0x6b8 Jump
	
Label_1721:
	var_572_string = "all"; // 0x6b9 PushS
	var_573_string = "idle"; // 0x6ba PushS
	PlayAnimation(var_572_string, var_573_string); // 0x6bb Func
	goto Label_1716; // 0x6bd Jump
	
Label_1627:
	var_574_string = ""; // 0x65b PushV
	var_574_string = "Neutral"; // 0x65c MovS
	func_1727(var_539_object, var_574_string); // 0x65d NEW_2
	var_575_int = 525406; // 0x65f PushI
	SetMessage(var_575_int); // 0x660 TObjFunc
	ClearReplies(); // 0x662 TObjFunc
	var_576_bool = 0; var_577_object = Obj(); // 0x664 PushV
	var_577_object = var_1_object; // 0x665 MovT
	func_5281(var_577_object); // 0x666 NEW_2
	if(var_576_bool == 0) goto Label_1646; // 0x668 JumpB
	var_582_int = 525407; // 0x669 PushI
	var_583_int = 26776; // 0x66a PushI
	var_584_int = 26775; // 0x66b PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0x66c TObjFunc
	
Label_1646:
	var_585_bool = 0; // 0x66e PushV
	var_585_bool = 0; // 0x66f MovB
	var_586_bool = 0; var_587_object = Obj(); // 0x670 PushV
	var_587_object = var_1_object; // 0x671 MovT
	func_5305(var_587_object); // 0x672 NEW_2
	if(var_586_bool == 0) goto Label_1659; // 0x674 JumpB
	var_592_bool = 0; var_593_object = Obj(); // 0x675 PushV
	var_593_object = var_1_object; // 0x676 MovT
	func_5293(var_593_object); // 0x677 NEW_2
	if(var_592_bool == 0) goto Label_1659; // 0x679 JumpB
	var_585_bool = 1; // 0x67a MovB
	
Label_1659:
	if(var_585_bool == 0) goto Label_1665; // 0x67b JumpB
	var_598_int = 525425; // 0x67c PushI
	var_599_int = 40970; // 0x67d PushI
	var_600_int = 26793; // 0x67e PushI
	AddReply(var_598_int, var_599_int, var_600_int); // 0x67f TObjFunc
	
Label_1665:
	var_601_bool = 0; // 0x681 PushV
	var_601_bool = 0; // 0x682 MovB
	var_602_bool = 0; var_603_object = Obj(); // 0x683 PushV
	var_603_object = var_1_object; // 0x684 MovT
	func_5341(var_603_object); // 0x685 NEW_2
	if(var_602_bool == 0) goto Label_1678; // 0x687 JumpB
	var_608_bool = 0; var_609_object = Obj(); // 0x688 PushV
	var_609_object = var_1_object; // 0x689 MovT
	func_5329(var_609_object); // 0x68a NEW_2
	if(var_608_bool == 0) goto Label_1678; // 0x68c JumpB
	var_601_bool = 1; // 0x68d MovB
	
Label_1678:
	if(var_601_bool == 0) goto Label_1684; // 0x68e JumpB
	var_614_int = 525575; // 0x68f PushI
	var_615_int = 26923; // 0x690 PushI
	var_616_int = 26922; // 0x691 PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x692 TObjFunc
	
Label_1684:
	var_617_int = 525412; // 0x694 PushI
	var_618_int = -1; // 0x695 PushI
	var_619_int = 26780; // 0x696 PushI
	AddReply(var_617_int, var_618_int, var_619_int); // 0x697 TObjFunc
	var_620_int = 538971; // 0x699 PushI
	var_621_int = -1; // 0x69a PushI
	var_622_int = 40909; // 0x69b PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0x69c TObjFunc
	goto Label_1697; // 0x69e Jump
}


func_4668(var_100_cvector, var_101_cvector)
{
	var_103_float = 0; var_104_float = 0; // 0x123c PushV
	var_105_int = var_101_cvector | var_101_cvector; // 0x123d Or
	var_104_float = sqrt(var_105_int); // 0x123e Sqrt2
	var_106_float = 0.0; // 0x123f PushF
	var_107_bool = var_104_float < var_106_float; // 0x1240 LT
	if(var_107_bool == 0) goto Label_4676; // 0x1241 JumpB
	var_100_cvector = CVector(0.0, 0.0, 0.0); // 0x1242 MovV
	return 2; // 0x1243 Return
	
Label_4676:
	var_100_cvector = var_101_cvector / var_101_cvector; // 0x1244 Div2
	return 2; // 0x1245 Return
}


func_5185(var_331_bool)
{
	var_333_int = 0; var_334_string = ""; // 0x1442 PushV
	var_334_string = "ook1Anna1"; // 0x1443 MovS
	func_4689(var_333_int, var_334_string); // 0x1444 NEW_2
	var_335_int = 0; // 0x1446 PushI
	var_336_bool = var_333_int == var_335_int; // 0x1447 Eq
	if(var_336_bool == 0) goto Label_5195; // 0x1448 JumpB
	var_331_bool = 1; // 0x1449 MovB
	return 0; // 0x144a Return
	
Label_5195:
	var_331_bool = 0; // 0x144b MovB
	return 0; // 0x144c Return
}


func_4678(var_175_float, var_176_float, var_177_float, var_178_float)
{
	var_179_bool = var_176_float < var_177_float; // 0x1247 LT
	if(var_179_bool == 0) goto Label_4683; // 0x1248 JumpB
	var_175_float = var_177_float; // 0x1249 Mov
	return 0; // 0x124a Return
	
Label_4683:
	var_180_bool = var_176_float > var_178_float; // 0x124b GT
	if(var_180_bool == 0) goto Label_4687; // 0x124c JumpB
	var_175_float = var_178_float; // 0x124d Mov
	return 0; // 0x124e Return
	
Label_4687:
	var_175_float = var_176_float; // 0x124f Mov
	return 0; // 0x1250 Return
}


func_5197(var_365_bool)
{
	var_367_int = 0; var_368_string = ""; // 0x144e PushV
	var_368_string = "k1q01Healed"; // 0x144f MovS
	func_4689(var_367_int, var_368_string); // 0x1450 NEW_2
	var_369_int = 0; // 0x1452 PushI
	var_370_bool = var_367_int != var_369_int; // 0x1453 Neq
	if(var_370_bool == 0) goto Label_5207; // 0x1454 JumpB
	var_365_bool = 1; // 0x1455 MovB
	return 0; // 0x1456 Return
	
Label_5207:
	var_365_bool = 0; // 0x1457 MovB
	return 0; // 0x1458 Return
}


func_5712(var_125_int)
{
	var_126_int = 0; var_127_int = 0; // 0x1650 PushV
	var_128_string = "branch"; // 0x1651 PushS
	GetVariable(var_128_string, var_127_int); // 0x1652 Func
	var_129_int = 0; // 0x1654 PushI
	var_130_bool = var_127_int == var_129_int; // 0x1655 Eq
	if(var_130_bool == 0) goto Label_5722; // 0x1656 JumpB
	var_125_int = 1; // 0x1657 MovI
	return 2; // 0x1658 Return
	
Label_5722:
	var_131_int = 1; // 0x165a PushI
	var_132_bool = var_127_int == var_131_int; // 0x165b Eq
	if(var_132_bool == 0) goto Label_5727; // 0x165c JumpB
	var_125_int = 2; // 0x165d MovI
	return 2; // 0x165e Return
	
Label_5727:
	var_125_int = 3; // 0x165f MovI
	return 2; // 0x1660 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_315_object, var_316_object)
{
	var_0_object = var_316_object; // 0x52 TMov
	var_1_object = var_315_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_321_int = 1; // 0x55 PushI
	if(var_321_int == 0) goto Label_242; // 0x56 JumpB
	var_322_bool = 0; // 0x57 PushV
	var_322_bool = 0; // 0x58 MovB
	var_323_bool = 0; var_324_object = Obj(); // 0x59 PushV
	var_324_object = var_1_object; // 0x5a MovT
	func_5173(var_324_object); // 0x5b NEW_2
	if(var_323_bool == 0) goto Label_100; // 0x5d JumpB
	var_331_bool = 0; var_332_object = Obj(); // 0x5e PushV
	var_332_object = var_1_object; // 0x5f MovT
	func_5185(var_332_object); // 0x60 NEW_2
	if(var_331_bool == 0) goto Label_100; // 0x62 JumpB
	var_322_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_322_bool == 0) goto Label_126; // 0x64 JumpB
	var_337_object = Obj(); var_338_object = Obj(); // 0x65 PushV
	var_337_object = var_1_object; // 0x66 MovT
	var_338_object = var_0_object; // 0x67 MovT
	func_4879(); // 0x68 NEW_2
	var_341_string = ""; // 0x6a PushV
	var_341_string = "Fear"; // 0x6b MovS
	func_272(var_316_object, var_341_string); // 0x6c NEW_2
	var_349_int = 524690; // 0x6e PushI
	SetMessage(var_349_int); // 0x6f TObjFunc
	ClearReplies(); // 0x71 TObjFunc
	var_350_int = 524691; // 0x73 PushI
	var_351_int = 28130; // 0x74 PushI
	var_352_int = 26030; // 0x75 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x76 TObjFunc
	var_353_int = 542043; // 0x78 PushI
	var_354_int = 44323; // 0x79 PushI
	var_355_int = 44322; // 0x7a PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x7b TObjFunc
	goto Label_242; // 0x7d Jump
	
Label_242:
	var_356_bool = 0; // 0xf2 PushV
	func_4854(var_356_bool); // 0xf3 NEW_2
	if(var_356_bool == 0) goto Label_257; // 0xf5 JumpB
	
Label_246:
	lshWaitForAnimEnd(); // 0xf6 Func
	var_357_string = var_3_string; // 0xf8 PushT
	if(var_357_string == 0) goto Label_251; // 0xf9 JumpB
	goto Label_256; // 0xfa Jump
	
Label_256:
	goto Label_271; // 0x100 Jump
	
Label_271:
	return 0; // 0x10f Return
	
Label_251:
	var_358_string = ""; // 0xfb PushV
	var_358_string = var_2_object; // 0xfc MovT
	func_4609(var_358_string); // 0xfd NEW_2
	goto Label_246; // 0xff Jump
	
Label_257:
	var_359_string = "all"; // 0x101 PushS
	var_360_string = "idle"; // 0x102 PushS
	PlayAnimation(var_359_string, var_360_string); // 0x103 Func
	
Label_261:
	WaitForAnimEnd(); // 0x105 Func
	var_361_string = var_3_string; // 0x107 PushT
	if(var_361_string == 0) goto Label_266; // 0x108 JumpB
	goto Label_271; // 0x109 Jump
	
Label_266:
	var_362_string = "all"; // 0x10a PushS
	var_363_string = "idle"; // 0x10b PushS
	PlayAnimation(var_362_string, var_363_string); // 0x10c Func
	goto Label_261; // 0x10e Jump
	
Label_126:
	var_364_bool = 0; // 0x7e PushV
	var_364_bool = 0; // 0x7f MovB
	var_365_bool = 0; var_366_object = Obj(); // 0x80 PushV
	var_366_object = var_1_object; // 0x81 MovT
	func_5197(var_366_object); // 0x82 NEW_2
	if(var_365_bool == 0) goto Label_139; // 0x84 JumpB
	var_371_bool = 0; var_372_object = Obj(); // 0x85 PushV
	var_372_object = var_1_object; // 0x86 MovT
	func_5209(var_372_object); // 0x87 NEW_2
	if(var_371_bool == 0) goto Label_139; // 0x89 JumpB
	var_364_bool = 1; // 0x8a MovB
	
Label_139:
	if(var_364_bool == 0) goto Label_165; // 0x8b JumpB
	var_377_object = Obj(); var_378_object = Obj(); // 0x8c PushV
	var_377_object = var_1_object; // 0x8d MovT
	var_378_object = var_0_object; // 0x8e MovT
	func_4885(); // 0x8f NEW_2
	var_381_string = ""; // 0x91 PushV
	var_381_string = "Neutral"; // 0x92 MovS
	func_272(var_316_object, var_381_string); // 0x93 NEW_2
	var_382_int = 524707; // 0x95 PushI
	SetMessage(var_382_int); // 0x96 TObjFunc
	ClearReplies(); // 0x98 TObjFunc
	var_383_int = 524708; // 0x9a PushI
	var_384_int = 28139; // 0x9b PushI
	var_385_int = 26047; // 0x9c PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x9d TObjFunc
	var_386_int = 542053; // 0x9f PushI
	var_387_int = 28139; // 0xa0 PushI
	var_388_int = 44336; // 0xa1 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0xa2 TObjFunc
	goto Label_242; // 0xa4 Jump
	
Label_165:
	var_389_bool = 0; var_390_object = Obj(); // 0xa5 PushV
	var_390_object = var_1_object; // 0xa6 MovT
	func_5221(var_390_object); // 0xa7 NEW_2
	if(var_389_bool == 0) goto Label_195; // 0xa9 JumpB
	var_395_object = Obj(); var_396_object = Obj(); // 0xaa PushV
	var_395_object = var_1_object; // 0xab MovT
	var_396_object = var_0_object; // 0xac MovT
	func_4891(); // 0xad NEW_2
	var_399_string = ""; // 0xaf PushV
	var_399_string = "Fear"; // 0xb0 MovS
	func_272(var_316_object, var_399_string); // 0xb1 NEW_2
	var_400_int = 524780; // 0xb3 PushI
	SetMessage(var_400_int); // 0xb4 TObjFunc
	ClearReplies(); // 0xb6 TObjFunc
	var_401_int = 526860; // 0xb8 PushI
	var_402_int = 28146; // 0xb9 PushI
	var_403_int = 28145; // 0xba PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0xbb TObjFunc
	var_404_int = 542054; // 0xbd PushI
	var_405_int = 28146; // 0xbe PushI
	var_406_int = 44338; // 0xbf PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0xc0 TObjFunc
	goto Label_242; // 0xc2 Jump
	
Label_195:
	var_407_string = ""; // 0xc3 PushV
	var_407_string = "Dream"; // 0xc4 MovS
	func_272(var_316_object, var_407_string); // 0xc5 NEW_2
	var_408_int = 524709; // 0xc7 PushI
	SetMessage(var_408_int); // 0xc8 TObjFunc
	ClearReplies(); // 0xca TObjFunc
	var_409_bool = 0; // 0xcc PushV
	var_409_bool = 0; // 0xcd MovB
	var_410_bool = 0; var_411_object = Obj(); // 0xce PushV
	var_411_object = var_1_object; // 0xcf MovT
	func_5233(var_411_object); // 0xd0 NEW_2
	if(var_410_bool == 0) goto Label_218; // 0xd2 JumpB
	var_416_bool = 0; var_417_object = Obj(); // 0xd3 PushV
	var_417_object = var_1_object; // 0xd4 MovT
	func_5221(var_417_object); // 0xd5 NEW_2
	var_418_bool = var_416_bool == 0; // 0xd7 Not
	if(var_418_bool == 0) goto Label_218; // 0xd8 JumpB
	var_409_bool = 1; // 0xd9 MovB
	
Label_218:
	if(var_409_bool == 0) goto Label_224; // 0xda JumpB
	var_419_int = 524787; // 0xdb PushI
	var_420_int = 26103; // 0xdc PushI
	var_421_int = 26102; // 0xdd PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0xde TObjFunc
	
Label_224:
	var_422_bool = 0; var_423_object = Obj(); // 0xe0 PushV
	var_423_object = var_1_object; // 0xe1 MovT
	func_5245(var_423_object); // 0xe2 NEW_2
	if(var_422_bool == 0) goto Label_234; // 0xe4 JumpB
	var_428_int = 524796; // 0xe5 PushI
	var_429_int = 28156; // 0xe6 PushI
	var_430_int = 26111; // 0xe7 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0xe8 TObjFunc
	
Label_234:
	var_431_int = 524710; // 0xea PushI
	var_432_int = -1; // 0xeb PushI
	var_433_int = 26049; // 0xec PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0xed TObjFunc
	goto Label_242; // 0xef Jump
}


func_4689(var_325_int, var_326_string)
{
	var_327_int = 0; var_328_int = 0; // 0x1251 PushV
	GetVariable(var_326_string, var_328_int); // 0x1252 Func
	var_325_int = var_328_int; // 0x1254 Mov
	return 2; // 0x1255 Return
}


func_2643(var_0_object, var_1_object, var_2_object, var_3_string, var_229_object, var_230_object)
{
	var_0_object = var_230_object; // 0xa54 TMov
	var_1_object = var_229_object; // 0xa55 TMov
	var_3_string = 0; // 0xa56 TMovB
	var_235_int = 1; // 0xa57 PushI
	if(var_235_int == 0) goto Label_2671; // 0xa58 JumpB
	var_236_string = ""; // 0xa59 PushV
	var_236_string = "Neutral"; // 0xa5a MovS
	func_2701(var_230_object, var_236_string); // 0xa5b NEW_2
	var_253_int = 525465; // 0xa5d PushI
	SetMessage(var_253_int); // 0xa5e TObjFunc
	ClearReplies(); // 0xa60 TObjFunc
	var_254_int = 526257; // 0xa62 PushI
	var_255_int = 27533; // 0xa63 PushI
	var_256_int = 27531; // 0xa64 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0xa65 TObjFunc
	var_257_int = 525466; // 0xa67 PushI
	var_258_int = -1; // 0xa68 PushI
	var_259_int = 26822; // 0xa69 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0xa6a TObjFunc
	goto Label_2671; // 0xa6c Jump
	
Label_2671:
	var_260_bool = 0; // 0xa6f PushV
	func_4854(var_260_bool); // 0xa70 NEW_2
	if(var_260_bool == 0) goto Label_2686; // 0xa72 JumpB
	
Label_2675:
	lshWaitForAnimEnd(); // 0xa73 Func
	var_261_string = var_3_string; // 0xa75 PushT
	if(var_261_string == 0) goto Label_2680; // 0xa76 JumpB
	goto Label_2685; // 0xa77 Jump
	
Label_2685:
	goto Label_2700; // 0xa7d Jump
	
Label_2700:
	return 0; // 0xa8c Return
	
Label_2680:
	var_262_string = ""; // 0xa78 PushV
	var_262_string = var_2_object; // 0xa79 MovT
	func_4609(var_262_string); // 0xa7a NEW_2
	goto Label_2675; // 0xa7c Jump
	
Label_2686:
	var_273_string = "all"; // 0xa7e PushS
	var_274_string = "idle"; // 0xa7f PushS
	PlayAnimation(var_273_string, var_274_string); // 0xa80 Func
	
Label_2690:
	WaitForAnimEnd(); // 0xa82 Func
	var_275_string = var_3_string; // 0xa84 PushT
	if(var_275_string == 0) goto Label_2695; // 0xa85 JumpB
	goto Label_2700; // 0xa86 Jump
	
Label_2695:
	var_276_string = "all"; // 0xa87 PushS
	var_277_string = "idle"; // 0xa88 PushS
	PlayAnimation(var_276_string, var_277_string); // 0xa89 Func
	goto Label_2690; // 0xa8b Jump
}


func_4694(var_133_int, var_134_int)
{
	var_135_object = Obj(); var_136_object = Obj(); // 0x1256 PushV
	CreateIntVector(var_136_object); // 0x1257 Func
	add(var_133_int); // 0x1259 ObjFunc
	add(var_134_int); // 0x125b ObjFunc
	var_137_int = 3; // 0x125d PushI
	SendWorldWndMessage(var_137_int, var_136_object); // 0x125e Func
	return 2; // 0x1260 Return
}


func_5209(var_371_bool)
{
	var_373_int = 0; var_374_string = ""; // 0x145a PushV
	var_374_string = "ook1Anna2"; // 0x145b MovS
	func_4689(var_373_int, var_374_string); // 0x145c NEW_2
	var_375_int = 0; // 0x145e PushI
	var_376_bool = var_373_int == var_375_int; // 0x145f Eq
	if(var_376_bool == 0) goto Label_5219; // 0x1460 JumpB
	var_371_bool = 1; // 0x1461 MovB
	return 0; // 0x1462 Return
	
Label_5219:
	var_371_bool = 0; // 0x1463 MovB
	return 0; // 0x1464 Return
}


func_5729(var_59_object)
{
	var_60_bool = GlobalVars[1]; // 0x1662 PushGE
	var_61_bool = var_60_bool == 0; // 0x1663 Not
	if(var_61_bool == 0) goto Label_5742; // 0x1664 JumpB
	var_62_int = 0; var_63_object = Obj(); // 0x1665 PushV
	var_63_object = var_59_object; // 0x1666 Mov
	TaskCall(6); // 0x1667 TaskCall
	func_2562(var_64_object, var_62_int, var_63_object); // 0x1668 NEW_2
	TaskReturn(); // 0x1669 TaskReturn
	var_287_bool = GlobalVars[1]; // 0x166b PushGE
	var_287_bool = 1; // 0x166c MovB
	GlobalVars[1] = var_287_bool; // 0x166d PopGE
	
Label_5742:
	var_288_bool = 0; var_289_int = 0; // 0x166e PushV
	var_289_int = 1; // 0x166f MovI
	func_4816(var_288_bool, var_289_int); // 0x1670 NEW_2
	if(var_288_bool == 0) goto Label_5754; // 0x1672 JumpB
	var_291_int = 0; var_292_object = Obj(); // 0x1673 PushV
	var_292_object = var_59_object; // 0x1674 Mov
	TaskCall(0); // 0x1675 TaskCall
	func_0(var_293_object, var_291_int, var_292_object); // 0x1676 NEW_2
	TaskReturn(); // 0x1677 TaskReturn
	return 0; // 0x1679 Return
	
Label_5754:
	var_436_bool = 0; var_437_int = 0; // 0x167a PushV
	var_437_int = 2; // 0x167b MovI
	func_4816(var_436_bool, var_437_int); // 0x167c NEW_2
	if(var_436_bool == 0) goto Label_5766; // 0x167e JumpB
	var_438_int = 0; var_439_object = Obj(); // 0x167f PushV
	var_439_object = var_59_object; // 0x1680 Mov
	TaskCall(2); // 0x1681 TaskCall
	func_1003(var_440_object, var_438_int, var_439_object); // 0x1682 NEW_2
	TaskReturn(); // 0x1683 TaskReturn
	return 0; // 0x1685 Return
	
Label_5766:
	var_512_bool = 0; var_513_int = 0; // 0x1686 PushV
	var_513_int = 3; // 0x1687 MovI
	func_4816(var_512_bool, var_513_int); // 0x1688 NEW_2
	if(var_512_bool == 0) goto Label_5778; // 0x168a JumpB
	var_514_int = 0; var_515_object = Obj(); // 0x168b PushV
	var_515_object = var_59_object; // 0x168c Mov
	TaskCall(4); // 0x168d TaskCall
	func_1515(var_516_object, var_514_int, var_515_object); // 0x168e NEW_2
	TaskReturn(); // 0x168f TaskReturn
	return 0; // 0x1691 Return
	
Label_5778:
	var_625_bool = 0; var_626_int = 0; // 0x1692 PushV
	var_626_int = 6; // 0x1693 MovI
	func_4816(var_625_bool, var_626_int); // 0x1694 NEW_2
	if(var_625_bool == 0) goto Label_5790; // 0x1696 JumpB
	var_627_int = 0; var_628_object = Obj(); // 0x1697 PushV
	var_628_object = var_59_object; // 0x1698 Mov
	TaskCall(8); // 0x1699 TaskCall
	func_2788(var_629_object, var_627_int, var_628_object); // 0x169a NEW_2
	TaskReturn(); // 0x169b TaskReturn
	return 0; // 0x169d Return
	
Label_5790:
	var_706_bool = 0; var_707_int = 0; // 0x169e PushV
	var_707_int = 11; // 0x169f MovI
	func_4816(var_706_bool, var_707_int); // 0x16a0 NEW_2
	if(var_706_bool == 0) goto Label_5802; // 0x16a2 JumpB
	var_708_int = 0; var_709_object = Obj(); // 0x16a3 PushV
	var_709_object = var_59_object; // 0x16a4 Mov
	TaskCall(10); // 0x16a5 TaskCall
	func_3112(var_710_object, var_708_int, var_709_object); // 0x16a6 NEW_2
	TaskReturn(); // 0x16a7 TaskReturn
	return 0; // 0x16a9 Return
	
Label_5802:
	var_777_bool = 0; var_778_int = 0; // 0x16aa PushV
	var_778_int = 12; // 0x16ab MovI
	func_4816(var_777_bool, var_778_int); // 0x16ac NEW_2
	if(var_777_bool == 0) goto Label_5814; // 0x16ae JumpB
	var_779_int = 0; var_780_object = Obj(); // 0x16af PushV
	var_780_object = var_59_object; // 0x16b0 Mov
	TaskCall(12); // 0x16b1 TaskCall
	func_3490(var_781_object, var_779_int, var_780_object); // 0x16b2 NEW_2
	TaskReturn(); // 0x16b3 TaskReturn
	return 0; // 0x16b5 Return
	
Label_5814:
	var_838_int = 0; var_839_object = Obj(); // 0x16b6 PushV
	var_839_object = var_59_object; // 0x16b7 Mov
	TaskCall(14); // 0x16b8 TaskCall
	func_3849(var_840_object, var_838_int, var_839_object); // 0x16b9 NEW_2
	TaskReturn(); // 0x16ba TaskReturn
	return 0; // 0x16bc Return
}


func_4706(var_191_object, var_192_int)
{
	var_193_int = 0; var_194_int = 0; // 0x1262 PushV
	var_195_object = Obj(); var_196_string = ""; var_197_int = 0; // 0x1263 PushV
	var_195_object = var_191_object; // 0x1264 Mov
	var_196_string = "money"; // 0x1265 MovS
	var_197_int = var_192_int; // 0x1266 Mov
	func_4353(var_196_string, var_197_int); // 0x1267 NEW_2
	var_201_int = 0; // 0x1269 PushI
	var_202_bool = var_192_int > var_201_int; // 0x126a GT
	if(var_202_bool == 0) goto Label_4724; // 0x126b JumpB
	var_203_string = "Money"; // 0x126c PushS
	GetInvItemByName(var_194_int, var_203_string); // 0x126d Func
	var_204_int = 0; var_205_int = 0; // 0x126f PushV
	var_204_int = var_194_int; // 0x1270 Mov
	var_205_int = var_192_int; // 0x1271 Mov
	func_4694(var_204_int, var_205_int); // 0x1272 NEW_2
	
Label_4724:
	return 2; // 0x1274 Return
}


func_5221(var_389_bool)
{
	var_391_int = 0; var_392_string = ""; // 0x1466 PushV
	var_392_string = "ook1Anna3"; // 0x1467 MovS
	func_4689(var_391_int, var_392_string); // 0x1468 NEW_2
	var_393_int = 0; // 0x146a PushI
	var_394_bool = var_391_int == var_393_int; // 0x146b Eq
	if(var_394_bool == 0) goto Label_5231; // 0x146c JumpB
	var_389_bool = 1; // 0x146d MovB
	return 0; // 0x146e Return
	
Label_5231:
	var_389_bool = 0; // 0x146f MovB
	return 0; // 0x1470 Return
}


func_5233(var_410_bool)
{
	var_412_int = 0; var_413_string = ""; // 0x1472 PushV
	var_413_string = "k1q03"; // 0x1473 MovS
	func_4689(var_412_int, var_413_string); // 0x1474 NEW_2
	var_414_int = 0; // 0x1476 PushI
	var_415_bool = var_412_int == var_414_int; // 0x1477 Eq
	if(var_415_bool == 0) goto Label_5243; // 0x1478 JumpB
	var_410_bool = 1; // 0x1479 MovB
	return 0; // 0x147a Return
	
Label_5243:
	var_410_bool = 0; // 0x147b MovB
	return 0; // 0x147c Return
}


func_4725(var_123_object, var_124_int)
{
	var_125_int = 0; var_126_int = 0; var_127_bool = 0; var_128_int = 0; var_129_int = 0; var_130_bool = 0; // 0x1275 PushV
	GetItemID(var_128_int); // 0x1276 ObjFunc
	var_131_string = "Category"; // 0x1278 PushS
	GetInvItemProperty(var_129_int, var_128_int, var_131_string); // 0x1279 Func
	AddItem(var_130_bool, var_123_object, var_129_int, var_124_int); // 0x127b ObjFunc
	var_132_bool = var_130_bool == 0; // 0x127d Not
	if(var_132_bool == 0) goto Label_4738; // 0x127e JumpB
	DropItems(var_123_object, var_124_int); // 0x127f ObjFunc
	goto Label_4743; // 0x1281 Jump
	
Label_4743:
	return 6; // 0x1287 Return
	
Label_4738:
	var_133_int = 0; var_134_int = 0; // 0x1282 PushV
	var_133_int = var_128_int; // 0x1283 Mov
	var_134_int = var_124_int; // 0x1284 Mov
	func_4694(var_133_int, var_134_int); // 0x1285 NEW_2
}


func_3193(var_0_object, var_1_object, var_2_object, var_3_string, var_732_object, var_733_object)
{
	var_0_object = var_733_object; // 0xc7a TMov
	var_1_object = var_732_object; // 0xc7b TMov
	var_3_string = 0; // 0xc7c TMovB
	var_738_int = 1; // 0xc7d PushI
	if(var_738_int == 0) goto Label_3235; // 0xc7e JumpB
	var_739_string = ""; // 0xc7f PushV
	var_739_string = "Neutral"; // 0xc80 MovS
	func_3265(var_733_object, var_739_string); // 0xc81 NEW_2
	var_747_int = 527548; // 0xc83 PushI
	SetMessage(var_747_int); // 0xc84 TObjFunc
	ClearReplies(); // 0xc86 TObjFunc
	var_748_bool = 0; // 0xc88 PushV
	var_748_bool = 0; // 0xc89 MovB
	var_749_bool = 0; var_750_object = Obj(); // 0xc8a PushV
	var_750_object = var_1_object; // 0xc8b MovT
	func_5389(var_750_object); // 0xc8c NEW_2
	if(var_749_bool == 0) goto Label_3221; // 0xc8e JumpB
	var_755_bool = 0; var_756_object = Obj(); // 0xc8f PushV
	var_756_object = var_1_object; // 0xc90 MovT
	func_5401(var_756_object); // 0xc91 NEW_2
	if(var_755_bool == 0) goto Label_3221; // 0xc93 JumpB
	var_748_bool = 1; // 0xc94 MovB
	
Label_3221:
	if(var_748_bool == 0) goto Label_3227; // 0xc95 JumpB
	var_761_int = 527551; // 0xc96 PushI
	var_762_int = 28893; // 0xc97 PushI
	var_763_int = 28892; // 0xc98 PushI
	AddReply(var_761_int, var_762_int, var_763_int); // 0xc99 TObjFunc
	
Label_3227:
	var_764_int = 527550; // 0xc9b PushI
	var_765_int = -1; // 0xc9c PushI
	var_766_int = 28891; // 0xc9d PushI
	AddReply(var_764_int, var_765_int, var_766_int); // 0xc9e TObjFunc
	goto Label_3235; // 0xca0 Jump
	
Label_3235:
	var_767_bool = 0; // 0xca3 PushV
	func_4854(var_767_bool); // 0xca4 NEW_2
	if(var_767_bool == 0) goto Label_3250; // 0xca6 JumpB
	
Label_3239:
	lshWaitForAnimEnd(); // 0xca7 Func
	var_768_string = var_3_string; // 0xca9 PushT
	if(var_768_string == 0) goto Label_3244; // 0xcaa JumpB
	goto Label_3249; // 0xcab Jump
	
Label_3249:
	goto Label_3264; // 0xcb1 Jump
	
Label_3264:
	return 0; // 0xcc0 Return
	
Label_3244:
	var_769_string = ""; // 0xcac PushV
	var_769_string = var_2_object; // 0xcad MovT
	func_4609(var_769_string); // 0xcae NEW_2
	goto Label_3239; // 0xcb0 Jump
	
Label_3250:
	var_770_string = "all"; // 0xcb2 PushS
	var_771_string = "idle"; // 0xcb3 PushS
	PlayAnimation(var_770_string, var_771_string); // 0xcb4 Func
	
Label_3254:
	WaitForAnimEnd(); // 0xcb6 Func
	var_772_string = var_3_string; // 0xcb8 PushT
	if(var_772_string == 0) goto Label_3259; // 0xcb9 JumpB
	goto Label_3264; // 0xcba Jump
	
Label_3259:
	var_773_string = "all"; // 0xcbb PushS
	var_774_string = "idle"; // 0xcbc PushS
	PlayAnimation(var_773_string, var_774_string); // 0xcbd Func
	goto Label_3254; // 0xcbf Jump
}


func_5245(var_422_bool)
{
	var_424_int = 0; var_425_string = ""; // 0x147e PushV
	var_425_string = "k1q03"; // 0x147f MovS
	func_4689(var_424_int, var_425_string); // 0x1480 NEW_2
	var_426_int = 2; // 0x1482 PushI
	var_427_bool = var_424_int == var_426_int; // 0x1483 Eq
	if(var_427_bool == 0) goto Label_5255; // 0x1484 JumpB
	var_422_bool = 1; // 0x1485 MovB
	return 0; // 0x1486 Return
	
Label_5255:
	var_422_bool = 0; // 0x1487 MovB
	return 0; // 0x1488 Return
}


func_4744(var_117_object, var_118_string, var_119_int)
{
	var_120_object = Obj(); var_121_object = Obj(); // 0x1288 PushV
	CreateInvItem(var_121_object); // 0x1289 Func
	SetItemName(var_118_string); // 0x128b ObjFunc
	var_122_object = Obj(); var_123_object = Obj(); var_124_int = 0; // 0x128d PushV
	var_122_object = var_117_object; // 0x128e Mov
	var_123_object = var_121_object; // 0x128f Mov
	var_124_int = var_119_int; // 0x1290 Mov
	func_4725(var_123_object, var_124_int); // 0x1291 NEW_2
	return 2; // 0x1293 Return
}


func_5257(var_478_bool)
{
	var_480_int = 0; var_481_string = ""; // 0x148a PushV
	var_481_string = "k2q04"; // 0x148b MovS
	func_4689(var_480_int, var_481_string); // 0x148c NEW_2
	var_482_int = 1; // 0x148e PushI
	var_483_bool = var_480_int == var_482_int; // 0x148f Eq
	if(var_483_bool == 0) goto Label_5267; // 0x1490 JumpB
	var_478_bool = 1; // 0x1491 MovB
	return 0; // 0x1492 Return
	
Label_5267:
	var_478_bool = 0; // 0x1493 MovB
	return 0; // 0x1494 Return
}


func_1162(var_2_object, var_469_string)
{
	var_470_bool = 0; // 0x48b PushV
	func_4854(var_470_bool); // 0x48c NEW_2
	var_471_bool = var_470_bool == 0; // 0x48e Not
	if(var_471_bool == 0) goto Label_1169; // 0x48f JumpB
	return 0; // 0x490 Return
	
Label_1169:
	var_472_bool = var_469_string == var_2_object; // 0x491 Eq
	if(var_472_bool == 0) goto Label_1172; // 0x492 JumpB
	return 0; // 0x493 Return
	
Label_1172:
	var_473_string = ""; var_474_bool = 0; // 0x494 PushV
	var_473_string = var_469_string; // 0x495 Mov
	var_475_string = ""; // 0x496 PushS
	var_476_bool = var_469_string == var_475_string; // 0x497 Eq
	if(var_476_bool == 0) goto Label_1179; // 0x498 JumpB
	var_474_bool = 0; // 0x499 MovB
	goto Label_1180; // 0x49a Jump
	
Label_1180:
	func_4625(var_473_string, var_474_bool); // 0x49c NEW_2
	var_2_object = var_469_string; // 0x49e TMov
	return 0; // 0x49f Return
	
Label_1179:
	var_474_bool = 1; // 0x49b MovB
}


func_4235()
{
	var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0; // 0x108b PushV
	WaitForAnimEnd(); // 0x108c Func
	var_58_bool = 0; // 0x108e PushV
	func_4379(var_58_bool); // 0x108f NEW_2
	var_59_bool = var_58_bool == 0; // 0x1091 Not
	if(var_59_bool == 0) goto Label_4244; // 0x1092 JumpB
	return 12; // 0x1093 Return
	
Label_4244:
	var_60_int = 0; // 0x1094 PushV
	func_4829(var_60_int); // 0x1095 NEW_2
	var_52_int = var_60_int; // 0x1096 Mov
	var_53_int = 0; // 0x1098 MovI
	
Label_4249:
	var_73_bool = 0; // 0x1099 PushV
	var_73_bool = 0; // 0x109a MovB
	var_74_int = 5; // 0x109b PushI
	var_75_bool = var_53_int < var_74_int; // 0x109c LT
	if(var_75_bool == 0) goto Label_4259; // 0x109d JumpB
	var_76_bool = 0; // 0x109e PushV
	func_4379(var_76_bool); // 0x109f NEW_2
	if(var_76_bool == 0) goto Label_4259; // 0x10a1 JumpB
	var_73_bool = 1; // 0x10a2 MovB
	
Label_4259:
	if(var_73_bool == 0) goto Label_4301; // 0x10a3 JumpB
	var_77_bool = var_52_int == 0; // 0x10a4 Not
	if(var_77_bool == 0) goto Label_4269; // 0x10a5 JumpB
	var_78_int = 3; // 0x10a6 PushI
	Sleep(var_78_int, var_54_bool); // 0x10a7 Func
	var_79_bool = var_54_bool == 0; // 0x10a9 Not
	if(var_79_bool == 0) goto Label_4268; // 0x10aa JumpB
	goto Label_4301; // 0x10ab Jump
	
Label_4301:
	ResetAAS(); // 0x10cd Func
	return 12; // 0x10cf Return
	
Label_4268:
	goto Label_4290; // 0x10ac Jump
	
Label_4290:
	var_80_bool = 0; // 0x10c2 PushV
	func_4304(var_80_bool); // 0x10c3 NEW_2
	var_81_bool = var_80_bool == 0; // 0x10c5 Not
	if(var_81_bool == 0) goto Label_4296; // 0x10c6 JumpB
	goto Label_4301; // 0x10c7 Jump
	
Label_4296:
	ResetAAS(); // 0x10c8 Func
	var_82_int = 1; // 0x10ca PushI
	var_53_int = var_53_int + var_82_int; // 0x10cb Add2
	goto Label_4249; // 0x10cc Jump
	
Label_4269:
	irand(var_55_int, var_52_int); // 0x10ad Func
	var_83_int = 5; // 0x10af PushI
	irand(var_56_int, var_83_int); // 0x10b0 Func
	var_84_int = 0; // 0x10b2 PushI
	var_85_bool = var_56_int != var_84_int; // 0x10b3 Neq
	if(var_85_bool == 0) goto Label_4278; // 0x10b4 JumpB
	var_55_int = 0; // 0x10b5 MovI
	
Label_4278:
	var_86_string = "all"; // 0x10b6 PushS
	var_87_string = ""; var_88_int = 0; // 0x10b7 PushV
	var_88_int = var_55_int; // 0x10b8 Mov
	func_4822(var_87_string, var_88_int); // 0x10b9 NEW_2
	PlayAnimation(var_86_string, var_87_string); // 0x10bb Func
	WaitForAnimEnd(var_57_bool); // 0x10bd Func
	var_89_bool = var_57_bool == 0; // 0x10bf Not
	if(var_89_bool == 0) goto Label_4290; // 0x10c0 JumpB
	goto Label_4301; // 0x10c1 Jump
}


func_2701(var_2_object, var_236_string)
{
	var_237_bool = 0; // 0xa8e PushV
	func_4854(var_237_bool); // 0xa8f NEW_2
	var_238_bool = var_237_bool == 0; // 0xa91 Not
	if(var_238_bool == 0) goto Label_2708; // 0xa92 JumpB
	return 0; // 0xa93 Return
	
Label_2708:
	var_239_bool = var_236_string == var_2_object; // 0xa94 Eq
	if(var_239_bool == 0) goto Label_2711; // 0xa95 JumpB
	return 0; // 0xa96 Return
	
Label_2711:
	var_240_string = ""; var_241_bool = 0; // 0xa97 PushV
	var_240_string = var_236_string; // 0xa98 Mov
	var_242_string = ""; // 0xa99 PushS
	var_243_bool = var_236_string == var_242_string; // 0xa9a Eq
	if(var_243_bool == 0) goto Label_2718; // 0xa9b JumpB
	var_241_bool = 0; // 0xa9c MovB
	goto Label_2719; // 0xa9d Jump
	
Label_2719:
	func_4625(var_240_string, var_241_bool); // 0xa9f NEW_2
	var_2_object = var_236_string; // 0xaa1 TMov
	return 0; // 0xaa2 Return
	
Label_2718:
	var_241_bool = 1; // 0xa9e MovB
}


func_5269(var_487_bool)
{
	var_489_int = 0; var_490_string = ""; // 0x1496 PushV
	var_490_string = "k2q04"; // 0x1497 MovS
	func_4689(var_489_int, var_490_string); // 0x1498 NEW_2
	var_491_int = 3; // 0x149a PushI
	var_492_bool = var_489_int == var_491_int; // 0x149b Eq
	if(var_492_bool == 0) goto Label_5279; // 0x149c JumpB
	var_487_bool = 1; // 0x149d MovB
	return 0; // 0x149e Return
	
Label_5279:
	var_487_bool = 0; // 0x149f MovB
	return 0; // 0x14a0 Return
}


func_4757(var_146_bool, var_147_object, var_148_float)
{
	var_149_bool = var_147_object == 0; // 0x1296 Not
	if(var_149_bool == 0) goto Label_4762; // 0x1297 JumpB
	var_146_bool = 0; // 0x1298 MovB
	return 0; // 0x1299 Return
	
Label_4762:
	var_150_int = 0; // 0x129a PushI
	var_151_bool = var_148_float > var_150_int; // 0x129b GT
	if(var_151_bool == 0) goto Label_4769; // 0x129c JumpB
	var_152_int = 8; // 0x129d PushI
	SendWorldWndMessage(var_152_int); // 0x129e Func
	goto Label_4778; // 0x12a0 Jump
	
Label_4778:
	var_153_float = 0; // 0x12aa PushV
	var_153_float = var_148_float; // 0x12ab Mov
	func_4792(var_153_float); // 0x12ac NEW_2
	var_157_bool = 0; var_158_object = Obj(); var_159_string = ""; var_160_float = 0; var_161_float = 0; var_162_float = 0; // 0x12ae PushV
	var_158_object = var_147_object; // 0x12af Mov
	var_159_string = "reputation"; // 0x12b0 MovS
	var_160_float = var_148_float; // 0x12b1 Mov
	var_161_float = 0; // 0x12b2 MovI
	var_162_float = 1; // 0x12b3 MovI
	func_4331(var_157_bool, var_158_object, var_159_string, var_160_float, var_161_float, var_162_float); // 0x12b4 NEW_2
	var_146_bool = 1; // 0x12b6 MovB
	return 0; // 0x12b7 Return
	
Label_4769:
	var_181_int = 0; // 0x12a1 PushI
	var_182_bool = var_148_float < var_181_int; // 0x12a2 LT
	if(var_182_bool == 0) goto Label_4776; // 0x12a3 JumpB
	var_183_int = 9; // 0x12a4 PushI
	SendWorldWndMessage(var_183_int); // 0x12a5 Func
	goto Label_4778; // 0x12a7 Jump
	
Label_4776:
	var_146_bool = 0; // 0x12a8 MovB
	return 0; // 0x12a9 Return
}


func_5281(var_576_bool)
{
	var_578_int = 0; var_579_string = ""; // 0x14a2 PushV
	var_579_string = "k3q01"; // 0x14a3 MovS
	func_4689(var_578_int, var_579_string); // 0x14a4 NEW_2
	var_580_int = 1; // 0x14a6 PushI
	var_581_bool = var_578_int == var_580_int; // 0x14a7 Eq
	if(var_581_bool == 0) goto Label_5291; // 0x14a8 JumpB
	var_576_bool = 1; // 0x14a9 MovB
	return 0; // 0x14aa Return
	
Label_5291:
	var_576_bool = 0; // 0x14ab MovB
	return 0; // 0x14ac Return
}


func_5293(var_592_bool)
{
	var_594_int = 0; var_595_string = ""; // 0x14ae PushV
	var_595_string = "k3q01"; // 0x14af MovS
	func_4689(var_594_int, var_595_string); // 0x14b0 NEW_2
	var_596_int = 2; // 0x14b2 PushI
	var_597_bool = var_594_int == var_596_int; // 0x14b3 Eq
	if(var_597_bool == 0) goto Label_5303; // 0x14b4 JumpB
	var_592_bool = 1; // 0x14b5 MovB
	return 0; // 0x14b6 Return
	
Label_5303:
	var_592_bool = 0; // 0x14b7 MovB
	return 0; // 0x14b8 Return
}


func_4792(var_153_float)
{
	var_154_object = Obj(); var_155_object = Obj(); // 0x12b8 PushV
	CreateFloatVector(var_155_object); // 0x12b9 Func
	add(var_153_float); // 0x12bb ObjFunc
	var_156_int = 16; // 0x12bd PushI
	SendWorldWndMessage(var_156_int, var_155_object); // 0x12be Func
	return 2; // 0x12c0 Return
}


func_5305(var_586_bool)
{
	var_588_int = 0; var_589_string = ""; // 0x14ba PushV
	var_589_string = "k3q01KapellaAboutHan"; // 0x14bb MovS
	func_4689(var_588_int, var_589_string); // 0x14bc NEW_2
	var_590_int = 0; // 0x14be PushI
	var_591_bool = var_588_int != var_590_int; // 0x14bf Neq
	if(var_591_bool == 0) goto Label_5315; // 0x14c0 JumpB
	var_586_bool = 1; // 0x14c1 MovB
	return 0; // 0x14c2 Return
	
Label_5315:
	var_586_bool = 0; // 0x14c3 MovB
	return 0; // 0x14c4 Return
}


func_1727(var_2_object, var_551_string)
{
	var_552_bool = 0; // 0x6c0 PushV
	func_4854(var_552_bool); // 0x6c1 NEW_2
	var_553_bool = var_552_bool == 0; // 0x6c3 Not
	if(var_553_bool == 0) goto Label_1734; // 0x6c4 JumpB
	return 0; // 0x6c5 Return
	
Label_1734:
	var_554_bool = var_551_string == var_2_object; // 0x6c6 Eq
	if(var_554_bool == 0) goto Label_1737; // 0x6c7 JumpB
	return 0; // 0x6c8 Return
	
Label_1737:
	var_555_string = ""; var_556_bool = 0; // 0x6c9 PushV
	var_555_string = var_551_string; // 0x6ca Mov
	var_557_string = ""; // 0x6cb PushS
	var_558_bool = var_551_string == var_557_string; // 0x6cc Eq
	if(var_558_bool == 0) goto Label_1744; // 0x6cd JumpB
	var_556_bool = 0; // 0x6ce MovB
	goto Label_1745; // 0x6cf Jump
	
Label_1745:
	func_4625(var_555_string, var_556_bool); // 0x6d1 NEW_2
	var_2_object = var_551_string; // 0x6d3 TMov
	return 0; // 0x6d4 Return
	
Label_1744:
	var_556_bool = 1; // 0x6d0 MovB
}


func_3265(var_2_object, var_739_string)
{
	var_740_bool = 0; // 0xcc2 PushV
	func_4854(var_740_bool); // 0xcc3 NEW_2
	var_741_bool = var_740_bool == 0; // 0xcc5 Not
	if(var_741_bool == 0) goto Label_3272; // 0xcc6 JumpB
	return 0; // 0xcc7 Return
	
Label_3272:
	var_742_bool = var_739_string == var_2_object; // 0xcc8 Eq
	if(var_742_bool == 0) goto Label_3275; // 0xcc9 JumpB
	return 0; // 0xcca Return
	
Label_3275:
	var_743_string = ""; var_744_bool = 0; // 0xccb PushV
	var_743_string = var_739_string; // 0xccc Mov
	var_745_string = ""; // 0xccd PushS
	var_746_bool = var_739_string == var_745_string; // 0xcce Eq
	if(var_746_bool == 0) goto Label_3282; // 0xccf JumpB
	var_744_bool = 0; // 0xcd0 MovB
	goto Label_3283; // 0xcd1 Jump
	
Label_3283:
	func_4625(var_743_string, var_744_bool); // 0xcd3 NEW_2
	var_2_object = var_739_string; // 0xcd5 TMov
	return 0; // 0xcd6 Return
	
Label_3282:
	var_744_bool = 1; // 0xcd2 MovB
}


func_4802(var_64_float)
{
	var_65_float = 0; var_66_float = 0; // 0x12c2 PushV
	GetGameTime(var_66_float); // 0x12c3 Func
	var_64_float = var_66_float; // 0x12c5 Mov
	return 2; // 0x12c6 Return
}


func_5317(var_545_bool)
{
	var_547_int = 0; var_548_string = ""; // 0x14c6 PushV
	var_548_string = "k3q01"; // 0x14c7 MovS
	func_4689(var_547_int, var_548_string); // 0x14c8 NEW_2
	var_549_int = 3; // 0x14ca PushI
	var_550_bool = var_547_int == var_549_int; // 0x14cb Eq
	if(var_550_bool == 0) goto Label_5327; // 0x14cc JumpB
	var_545_bool = 1; // 0x14cd MovB
	return 0; // 0x14ce Return
	
Label_5327:
	var_545_bool = 0; // 0x14cf MovB
	return 0; // 0x14d0 Return
}


func_4807(var_189_int)
{
	var_190_float = 0; var_191_float = 0; // 0x12c7 PushV
	GetGameTime(var_191_float); // 0x12c8 Func
	var_192_int = 1; // 0x12ca PushI
	var_193_int = 0; // 0x12cb PushV
	var_194_int = 24; // 0x12cc PushI
	var_193_int = var_191_float / var_191_float; // 0x12cd Div2
	var_189_int = var_192_int + var_193_int; // 0x12ce Add2
	return 2; // 0x12cf Return
}


func_4304(var_80_bool)
{
	var_80_bool = 1; // 0x10d0 MovB
	return 0; // 0x10d1 Return
}


func_5329(var_608_bool)
{
	var_610_int = 0; var_611_string = ""; // 0x14d2 PushV
	var_611_string = "ook3Anna1"; // 0x14d3 MovS
	func_4689(var_610_int, var_611_string); // 0x14d4 NEW_2
	var_612_int = 0; // 0x14d6 PushI
	var_613_bool = var_610_int == var_612_int; // 0x14d7 Eq
	if(var_613_bool == 0) goto Label_5339; // 0x14d8 JumpB
	var_608_bool = 1; // 0x14d9 MovB
	return 0; // 0x14da Return
	
Label_5339:
	var_608_bool = 0; // 0x14db MovB
	return 0; // 0x14dc Return
}


func_4306()
{
	StopAnimation(); // 0x10d2 Func
	StopGroup0(); // 0x10d4 Func
	return 0; // 0x10d6 Return
}


func_4816(var_288_bool, var_289_int)
{
	var_290_int = 0; // 0x12d1 PushV
	func_4807(var_290_int); // 0x12d2 NEW_2
	var_288_bool = var_290_int == var_289_int; // 0x12d4 Eq2
	return 0; // 0x12d5 Return
}


func_4822(var_66_string, var_67_int)
{
	var_68_string = ""; var_69_string = ""; // 0x12d6 PushV
	var_69_string = "idle"; // 0x12d7 MovS
	var_70_int = var_67_int; // 0x12d8 Push
	if(var_70_int == 0) goto Label_4827; // 0x12d9 JumpB
	var_69_string = var_69_string + var_67_int; // 0x12da Add2
	
Label_4827:
	var_66_string = var_69_string; // 0x12db Mov
	return 2; // 0x12dc Return
}


func_4311(var_56_float)
{
	var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x10d7 PushV
	GetPosition(var_61_cvector); // 0x10d8 Func
	GetPosition(var_62_cvector); // 0x10da ObjFunc
	var_63_cvector = var_62_cvector - var_61_cvector; // 0x10dc Sub2
	var_56_float = var_63_cvector | var_63_cvector; // 0x10dd Or2
	return 6; // 0x10de Return
}


func_5341(var_602_bool)
{
	var_604_int = 0; var_605_string = ""; // 0x14de PushV
	var_605_string = "k3q03"; // 0x14df MovS
	func_4689(var_604_int, var_605_string); // 0x14e0 NEW_2
	var_606_int = 0; // 0x14e2 PushI
	var_607_bool = var_604_int == var_606_int; // 0x14e3 Eq
	if(var_607_bool == 0) goto Label_5351; // 0x14e4 JumpB
	var_602_bool = 1; // 0x14e5 MovB
	return 0; // 0x14e6 Return
	
Label_5351:
	var_602_bool = 0; // 0x14e7 MovB
	return 0; // 0x14e8 Return
}


func_4829(var_60_int)
{
	var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0; // 0x12dd PushV
	var_63_int = 0; // 0x12de MovI
	
Label_4831:
	var_65_string = "all"; // 0x12df PushS
	var_66_string = ""; var_67_int = 0; // 0x12e0 PushV
	var_67_int = var_63_int; // 0x12e1 Mov
	func_4822(var_66_string, var_67_int); // 0x12e2 NEW_2
	HasAnimation(var_64_bool, var_65_string, var_66_string); // 0x12e4 Func
	var_71_bool = var_64_bool == 0; // 0x12e6 Not
	if(var_71_bool == 0) goto Label_4841; // 0x12e7 JumpB
	goto Label_4844; // 0x12e8 Jump
	
Label_4844:
	var_60_int = var_63_int; // 0x12ec Mov
	return 4; // 0x12ed Return
	
Label_4841:
	var_72_int = 1; // 0x12e9 PushI
	var_63_int = var_63_int + var_72_int; // 0x12ea Add2
	goto Label_4831; // 0x12eb Jump
}


func_4319(var_165_bool, var_166_object, var_167_string)
{
	var_168_bool = 0; var_169_bool = 0; // 0x10df PushV
	var_170_string = "HasProperty"; // 0x10e0 PushS
	var_171_int = 2; // 0x10e1 PushI
	var_172_bool = IsFuncExist(var_166_object, var_170_string, var_171_int); // 0x10e2 FuncExist
	var_173_bool = var_172_bool == 0; // 0x10e3 Not
	if(var_173_bool == 0) goto Label_4327; // 0x10e4 JumpB
	var_165_bool = 0; // 0x10e5 MovB
	return 2; // 0x10e6 Return
	
Label_4327:
	HasProperty(var_167_string, var_169_bool); // 0x10e7 ObjFunc
	var_165_bool = var_169_bool; // 0x10e9 Mov
	return 2; // 0x10ea Return
}


func_2788(var_0_object, var_627_int, var_628_object)
{
	var_630_object = Obj(); var_631_bool = 0; var_632_int = 0; var_633_bool = 0; var_634_object = Obj(); var_635_bool = 0; var_636_int = 0; var_637_bool = 0; // 0xae4 PushV
	var_0_object = var_628_object; // 0xae5 TMov
	var_638_bool = 0; var_639_object = Obj(); var_640_float = 0; // 0xae6 PushV
	var_639_object = var_628_object; // 0xae7 Mov
	var_640_float = 70.0; // 0xae8 MovF
	func_4384(var_639_object, var_640_float); // 0xae9 NEW_2
	var_641_bool = var_638_bool == 0; // 0xaeb Not
	if(var_641_bool == 0) goto Label_2799; // 0xaec JumpB
	var_627_int = -2; // 0xaed MovI
	return 8; // 0xaee Return
	
Label_2799:
	CreateDialog(var_634_object); // 0xaef Func
	var_642_int = 0; // 0xaf1 PushV
	func_4848(var_642_int); // 0xaf2 NEW_2
	SetNPCName(var_642_int); // 0xaf4 ObjFunc
	var_643_int = 0; // 0xaf6 PushV
	func_4846(var_643_int); // 0xaf7 NEW_2
	SetNPCDescription(var_643_int); // 0xaf9 ObjFunc
	var_644_string = ""; // 0xafb PushV
	func_4850(var_644_string); // 0xafc NEW_2
	SetPhoto(var_644_string); // 0xafe ObjFunc
	var_645_string = ""; // 0xb00 PushV
	func_4852(var_645_string); // 0xb01 NEW_2
	SetPhoto2(var_645_string); // 0xb03 ObjFunc
	var_646_int = 0; // 0xb05 PushV
	func_5712(var_646_int); // 0xb06 NEW_2
	SetPlayerName(var_646_int); // 0xb08 ObjFunc
	var_636_int = -1; // 0xb0a MovI
	IsOverrideActive(var_635_bool); // 0xb0b Func
	var_647_bool = var_635_bool; // 0xb0d Push
	if(var_647_bool == 0) goto Label_2833; // 0xb0e JumpB
	var_627_int = -2; // 0xb0f MovI
	return 8; // 0xb10 Return
	
Label_2833:
	DoDialog(var_634_object); // 0xb11 Func
	var_648_bool = 0; var_649_object = Obj(); // 0xb13 PushV
	var_650_object = Obj(); // 0xb14 PushV
	func_4662(var_650_object); // 0xb15 NEW_2
	var_649_object = var_650_object; // 0xb16 Mov
	func_4471(var_648_bool, var_649_object); // 0xb18 NEW_2
	var_651_object = Obj(); var_652_object = Obj(); // 0xb1a PushV
	var_651_object = var_628_object; // 0xb1b Mov
	var_652_object = var_634_object; // 0xb1c Mov
	TaskCall(9); // 0xb1d TaskCall
	func_2869(var_653_object, var_654_object, var_655_string, var_656_bool, var_651_object, var_652_object); // 0xb1e NEW_2
	TaskReturn(); // 0xb1f TaskReturn
	IsDialogEnd(var_637_bool); // 0xb21 ObjFunc
	
Label_2851:
	var_704_bool = var_637_bool == 0; // 0xb23 Not
	if(var_704_bool == 0) goto Label_2858; // 0xb24 JumpB
	sync(); // 0xb25 Func
	IsDialogEnd(var_637_bool); // 0xb27 ObjFunc
	goto Label_2851; // 0xb29 Jump
	
Label_2858:
	var_705_object = Obj(); // 0xb2a PushV
	var_705_object = var_628_object; // 0xb2b Mov
	func_4453(); // 0xb2c NEW_2
	StopDialog(var_634_object); // 0xb2e Func
	GetReturnValue(var_636_int); // 0xb30 ObjFunc
	var_627_int = var_636_int; // 0xb32 Mov
	return 8; // 0xb33 Return
}


func_5353(var_669_bool)
{
	var_671_int = 0; var_672_string = ""; // 0x14ea PushV
	var_672_string = "k6q01"; // 0x14eb MovS
	func_4689(var_671_int, var_672_string); // 0x14ec NEW_2
	var_673_int = 2; // 0x14ee PushI
	var_674_bool = var_671_int == var_673_int; // 0x14ef Eq
	if(var_674_bool == 0) goto Label_5363; // 0x14f0 JumpB
	var_669_bool = 1; // 0x14f1 MovB
	return 0; // 0x14f2 Return
	
Label_5363:
	var_669_bool = 0; // 0x14f3 MovB
	return 0; // 0x14f4 Return
}


func_4331(var_157_bool, var_158_object, var_159_string, var_160_float, var_161_float, var_162_float)
{
	var_163_float = 0; var_164_float = 0; // 0x10eb PushV
	var_165_bool = 0; var_166_object = Obj(); var_167_string = ""; // 0x10ec PushV
	var_166_object = var_158_object; // 0x10ed Mov
	var_167_string = var_159_string; // 0x10ee Mov
	func_4319(var_165_bool, var_166_object, var_167_string); // 0x10ef NEW_2
	var_174_bool = var_165_bool == 0; // 0x10f1 Not
	if(var_174_bool == 0) goto Label_4341; // 0x10f2 JumpB
	var_157_bool = 0; // 0x10f3 MovB
	return 2; // 0x10f4 Return
	
Label_4341:
	GetProperty(var_159_string, var_164_float); // 0x10f5 ObjFunc
	var_175_float = 0; var_176_float = 0; var_177_float = 0; var_178_float = 0; // 0x10f7 PushV
	var_176_float = var_164_float + var_160_float; // 0x10f8 Add2
	var_177_float = var_161_float; // 0x10f9 Mov
	var_178_float = var_162_float; // 0x10fa Mov
	func_4678(var_175_float, var_176_float, var_177_float, var_178_float); // 0x10fb NEW_2
	SetProperty(var_159_string, var_175_float); // 0x10fd ObjFunc
	var_157_bool = 1; // 0x10ff MovB
	return 2; // 0x1100 Return
}


func_4846(var_122_int)
{
	var_122_int = 515530; // 0x12ee MovI
	return 0; // 0x12ef Return
}


func_4848(var_121_int)
{
	var_121_int = 502856; // 0x12f0 MovI
	return 0; // 0x12f1 Return
}


func_4850(var_123_string)
{
	var_123_string = "ui/NPC_Anna.png"; // 0x12f2 MovS
	return 0; // 0x12f3 Return
}


func_4852(var_124_string)
{
	var_124_string = "ui/NPC_Anna_b.png"; // 0x12f4 MovS
	return 0; // 0x12f5 Return
}


func_5365(var_675_bool)
{
	var_677_int = 0; var_678_string = ""; // 0x14f6 PushV
	var_678_string = "k6q01DankoPos"; // 0x14f7 MovS
	func_4689(var_677_int, var_678_string); // 0x14f8 NEW_2
	var_679_int = 1; // 0x14fa PushI
	var_680_bool = var_677_int > var_679_int; // 0x14fb GT
	if(var_680_bool == 0) goto Label_5375; // 0x14fc JumpB
	var_675_bool = 1; // 0x14fd MovB
	return 0; // 0x14fe Return
	
Label_5375:
	var_675_bool = 0; // 0x14ff MovB
	return 0; // 0x1500 Return
}


func_4854(var_116_bool)
{
	var_116_bool = 1; // 0x12f6 MovB
	return 0; // 0x12f7 Return
}


func_4856()
{
	var_100_object = Obj(); var_101_string = ""; var_102_float = 0; // 0x12f9 PushV
	var_103_object = Obj(); // 0x12fa PushV
	func_5662(var_103_object); // 0x12fb NEW_2
	var_100_object = var_103_object; // 0x12fc Mov
	var_101_string = "pt_map_notkin"; // 0x12fe MovS
	var_102_float = 2; // 0x12ff MovI
	func_5679(var_100_object, var_101_string, var_102_float); // 0x1300 NEW_2
	var_123_object = Obj(); // 0x1302 PushV
	func_5662(var_123_object); // 0x1303 NEW_2
	ShowMap(var_123_object); // 0x1305 ObjFunc
	return 0; // 0x1307 Return
}


func_5377(var_681_bool)
{
	var_683_int = 0; var_684_string = ""; // 0x1502 PushV
	var_684_string = "ook6Anna1"; // 0x1503 MovS
	func_4689(var_683_int, var_684_string); // 0x1504 NEW_2
	var_685_int = 0; // 0x1506 PushI
	var_686_bool = var_683_int == var_685_int; // 0x1507 Eq
	if(var_686_bool == 0) goto Label_5387; // 0x1508 JumpB
	var_681_bool = 1; // 0x1509 MovB
	return 0; // 0x150a Return
	
Label_5387:
	var_681_bool = 0; // 0x150b MovB
	return 0; // 0x150c Return
}


func_4353(var_196_string, var_197_int)
{
	var_198_int = 0; var_199_int = 0; // 0x1101 PushV
	GetProperty(var_196_string, var_199_int); // 0x1102 ObjFunc
	var_200_int = var_199_int + var_197_int; // 0x1104 Add
	SetProperty(var_196_string, var_200_int); // 0x1105 ObjFunc
	return 2; // 0x1107 Return
}


func_4872(var_144_object)
{
	var_146_bool = 0; var_147_object = Obj(); var_148_float = 0; // 0x1309 PushV
	var_147_object = var_144_object; // 0x130a Mov
	var_148_float = 0.05; // 0x130b MovF
	func_4757(var_146_bool, var_147_object, var_148_float); // 0x130c NEW_2
	return 0; // 0x130e Return
}


func_4360(var_49_bool, var_50_cvector)
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_bool = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; // 0x1108 PushV
	GetPosition(var_54_cvector); // 0x1109 Func
	var_55_cvector = var_50_cvector - var_54_cvector; // 0x110b Sub2
	var_57_float = GetByIndex(var_55_cvector, 0); // 0x110c PushE
	var_58_float = GetByIndex(var_55_cvector, 2); // 0x110d PushE
	Rotate(var_57_float, var_58_float, var_56_bool); // 0x110e Func
	var_49_bool = var_56_bool; // 0x1110 Mov
	return 6; // 0x1111 Return
}


func_3849(var_0_object, var_838_int, var_839_object)
{
	var_841_object = Obj(); var_842_bool = 0; var_843_int = 0; var_844_bool = 0; var_845_object = Obj(); var_846_bool = 0; var_847_int = 0; var_848_bool = 0; // 0xf09 PushV
	var_0_object = var_839_object; // 0xf0a TMov
	var_849_bool = 0; var_850_object = Obj(); var_851_float = 0; // 0xf0b PushV
	var_850_object = var_839_object; // 0xf0c Mov
	var_851_float = 70.0; // 0xf0d MovF
	func_4384(var_850_object, var_851_float); // 0xf0e NEW_2
	var_852_bool = var_849_bool == 0; // 0xf10 Not
	if(var_852_bool == 0) goto Label_3860; // 0xf11 JumpB
	var_838_int = -2; // 0xf12 MovI
	return 8; // 0xf13 Return
	
Label_3860:
	CreateDialog(var_845_object); // 0xf14 Func
	var_853_int = 0; // 0xf16 PushV
	func_4848(var_853_int); // 0xf17 NEW_2
	SetNPCName(var_853_int); // 0xf19 ObjFunc
	var_854_int = 0; // 0xf1b PushV
	func_4846(var_854_int); // 0xf1c NEW_2
	SetNPCDescription(var_854_int); // 0xf1e ObjFunc
	var_855_string = ""; // 0xf20 PushV
	func_4850(var_855_string); // 0xf21 NEW_2
	SetPhoto(var_855_string); // 0xf23 ObjFunc
	var_856_string = ""; // 0xf25 PushV
	func_4852(var_856_string); // 0xf26 NEW_2
	SetPhoto2(var_856_string); // 0xf28 ObjFunc
	var_857_int = 0; // 0xf2a PushV
	func_5712(var_857_int); // 0xf2b NEW_2
	SetPlayerName(var_857_int); // 0xf2d ObjFunc
	var_847_int = -1; // 0xf2f MovI
	IsOverrideActive(var_846_bool); // 0xf30 Func
	var_858_bool = var_846_bool; // 0xf32 Push
	if(var_858_bool == 0) goto Label_3894; // 0xf33 JumpB
	var_838_int = -2; // 0xf34 MovI
	return 8; // 0xf35 Return
	
Label_3894:
	DoDialog(var_845_object); // 0xf36 Func
	var_859_bool = 0; var_860_object = Obj(); // 0xf38 PushV
	var_861_object = Obj(); // 0xf39 PushV
	func_4662(var_861_object); // 0xf3a NEW_2
	var_860_object = var_861_object; // 0xf3b Mov
	func_4471(var_859_bool, var_860_object); // 0xf3d NEW_2
	var_862_object = Obj(); var_863_object = Obj(); // 0xf3f PushV
	var_862_object = var_839_object; // 0xf40 Mov
	var_863_object = var_845_object; // 0xf41 Mov
	TaskCall(15); // 0xf42 TaskCall
	func_3930(var_864_object, var_865_object, var_866_string, var_867_bool, var_862_object, var_863_object); // 0xf43 NEW_2
	TaskReturn(); // 0xf44 TaskReturn
	IsDialogEnd(var_848_bool); // 0xf46 ObjFunc
	
Label_3912:
	var_892_bool = var_848_bool == 0; // 0xf48 Not
	if(var_892_bool == 0) goto Label_3919; // 0xf49 JumpB
	sync(); // 0xf4a Func
	IsDialogEnd(var_848_bool); // 0xf4c ObjFunc
	goto Label_3912; // 0xf4e Jump
	
Label_3919:
	var_893_object = Obj(); // 0xf4f PushV
	var_893_object = var_839_object; // 0xf50 Mov
	func_4453(); // 0xf51 NEW_2
	StopDialog(var_845_object); // 0xf53 Func
	GetReturnValue(var_847_int); // 0xf55 ObjFunc
	var_838_int = var_847_int; // 0xf57 Mov
	return 8; // 0xf58 Return
}


func_5389(var_749_bool)
{
	var_751_int = 0; var_752_string = ""; // 0x150e PushV
	var_752_string = "k11q01"; // 0x150f MovS
	func_4689(var_751_int, var_752_string); // 0x1510 NEW_2
	var_753_int = 9; // 0x1512 PushI
	var_754_bool = var_751_int == var_753_int; // 0x1513 Eq
	if(var_754_bool == 0) goto Label_5399; // 0x1514 JumpB
	var_749_bool = 1; // 0x1515 MovB
	return 0; // 0x1516 Return
	
Label_5399:
	var_749_bool = 0; // 0x1517 MovB
	return 0; // 0x1518 Return
}


func_4879()
{
	var_339_string = "ook1Anna1"; // 0x1310 PushS
	var_340_int = 1; // 0x1311 PushI
	SetVariable(var_339_string, var_340_int); // 0x1312 Func
	return 0; // 0x1314 Return
}


func_272(var_2_object, var_341_string)
{
	var_342_bool = 0; // 0x111 PushV
	func_4854(var_342_bool); // 0x112 NEW_2
	var_343_bool = var_342_bool == 0; // 0x114 Not
	if(var_343_bool == 0) goto Label_279; // 0x115 JumpB
	return 0; // 0x116 Return
	
Label_279:
	var_344_bool = var_341_string == var_2_object; // 0x117 Eq
	if(var_344_bool == 0) goto Label_282; // 0x118 JumpB
	return 0; // 0x119 Return
	
Label_282:
	var_345_string = ""; var_346_bool = 0; // 0x11a PushV
	var_345_string = var_341_string; // 0x11b Mov
	var_347_string = ""; // 0x11c PushS
	var_348_bool = var_341_string == var_347_string; // 0x11d Eq
	if(var_348_bool == 0) goto Label_289; // 0x11e JumpB
	var_346_bool = 0; // 0x11f MovB
	goto Label_290; // 0x120 Jump
	
Label_290:
	func_4625(var_345_string, var_346_bool); // 0x122 NEW_2
	var_2_object = var_341_string; // 0x124 TMov
	return 0; // 0x125 Return
	
Label_289:
	var_346_bool = 1; // 0x121 MovB
}


func_4370(var_45_bool)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0x1112 PushV
	GetPosition(var_48_cvector); // 0x1113 ObjFunc
	var_49_bool = 0; var_50_cvector = CVector(0,0,0); // 0x1115 PushV
	var_50_cvector = var_48_cvector; // 0x1116 Mov
	func_4360(var_49_bool, var_50_cvector); // 0x1117 NEW_2
	var_45_bool = var_49_bool; // 0x1118 Mov
	return 2; // 0x111a Return
}


func_4885()
{
	var_379_string = "ook1Anna2"; // 0x1316 PushS
	var_380_int = 1; // 0x1317 PushI
	SetVariable(var_379_string, var_380_int); // 0x1318 Func
	return 0; // 0x131a Return
}


func_5401(var_755_bool)
{
	var_757_int = 0; var_758_string = ""; // 0x151a PushV
	var_758_string = "ook11Anna1"; // 0x151b MovS
	func_4689(var_757_int, var_758_string); // 0x151c NEW_2
	var_759_int = 0; // 0x151e PushI
	var_760_bool = var_757_int == var_759_int; // 0x151f Eq
	if(var_760_bool == 0) goto Label_5411; // 0x1520 JumpB
	var_755_bool = 1; // 0x1521 MovB
	return 0; // 0x1522 Return
	
Label_5411:
	var_755_bool = 0; // 0x1523 MovB
	return 0; // 0x1524 Return
}


func_4891()
{
	var_397_string = "ook1Anna3"; // 0x131c PushS
	var_398_int = 1; // 0x131d PushI
	SetVariable(var_397_string, var_398_int); // 0x131e Func
	return 0; // 0x1320 Return
}


func_4379(var_42_bool)
{
	var_43_bool = 0; var_44_bool = 0; // 0x111b PushV
	IsLoaded(var_44_bool); // 0x111c Func
	var_42_bool = var_44_bool; // 0x111e Mov
	return 2; // 0x111f Return
}


func_4384(var_73_bool, var_75_float)
{
	var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_bool = 0; // 0x1120 PushV
	GetPosition(var_86_cvector); // 0x1121 ObjFunc
	GetEyesHeight(var_85_float); // 0x1123 ObjFunc
	var_94_float = GetByIndex(var_86_cvector, 1); // 0x1125 PushE
	var_94_float = var_94_float + var_85_float; // 0x1126 Add2
	SetByIndex(var_86_cvector, 1) = var_94_float; // 0x1127 PopE
	GetPosition(var_87_cvector); // 0x1128 Func
	GetEyesHeight(var_85_float); // 0x112a Func
	var_95_float = GetByIndex(var_87_cvector, 1); // 0x112c PushE
	var_95_float = var_95_float + var_85_float; // 0x112d Add2
	SetByIndex(var_87_cvector, 1) = var_95_float; // 0x112e PopE
	var_88_cvector = var_86_cvector - var_87_cvector; // 0x112f Sub2
	var_96_float = GetByIndex(var_88_cvector, 1); // 0x1130 PushE
	var_96_float = 0; // 0x1131 MovI
	SetByIndex(var_88_cvector, 1) = var_96_float; // 0x1132 PopE
	var_97_int = var_88_cvector | var_88_cvector; // 0x1133 Or
	var_98_float = sqrt(var_97_int); // 0x1134 Sqrt
	var_88_cvector = var_88_cvector / var_88_cvector; // 0x1135 Div2
	var_89_cvector = -var_88_cvector; // 0x1136 Neg2
	var_99_float = var_88_cvector * var_75_float; // 0x1137 Mult
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); // 0x1138 PushV
	var_102_cvector = CVector(0.0, 1.0, 0.0); // 0x1139 PushVec
	var_101_cvector = var_89_cvector ^ var_102_cvector; // 0x113a Xor2
	func_4668(var_100_cvector, var_101_cvector); // 0x113b NEW_2
	var_108_int = 25; // 0x113d PushI
	var_109_float = var_100_cvector * var_108_int; // 0x113e Mult
	var_110_int = var_99_float + var_109_float; // 0x113f Add
	var_111_cvector = CVector(0.0, 10.0, 0.0); // 0x1140 PushVec
	var_90_cvector = var_110_int - var_111_cvector; // 0x1141 Sub2
	var_91_cvector = var_87_cvector + var_90_cvector; // 0x1142 Add2
	IsOverrideActive(var_92_bool); // 0x1143 Func
	var_112_bool = var_92_bool; // 0x1145 Push
	if(var_112_bool == 0) goto Label_4425; // 0x1146 JumpB
	var_73_bool = 0; // 0x1147 MovB
	return 18; // 0x1148 Return
	
Label_4425:
	StopWorld(); // 0x1149 Func
	var_113_bool = 1; // 0x114b PushB
	CameraTransit(var_91_cvector, var_89_cvector, var_113_bool); // 0x114c Func
	var_114_float = GetByIndex(var_90_cvector, 0); // 0x114e PushE
	var_115_float = GetByIndex(var_90_cvector, 2); // 0x114f PushE
	Rotate(var_114_float, var_115_float); // 0x1150 Func
	var_116_bool = 0; // 0x1152 PushV
	func_4854(var_116_bool); // 0x1153 NEW_2
	if(var_116_bool == 0) goto Label_4439; // 0x1155 JumpB
	goto Label_4447; // 0x1156 Jump
	
Label_4447:
	CameraWaitForPlayFinish(); // 0x115f Func
	ResumeWorld(); // 0x1161 Func
	var_73_bool = 1; // 0x1163 MovB
	return 18; // 0x1164 Return
	
Label_4439:
	var_117_string = "head"; // 0x1157 PushS
	HasAnimationTrack(var_93_bool, var_117_string); // 0x1158 Func
	var_118_bool = var_93_bool; // 0x115a Push
	if(var_118_bool == 0) goto Label_4447; // 0x115b JumpB
	var_119_string = "head"; // 0x115c PushS
	LookAsyncCamera(var_119_string); // 0x115d Func
}


func_4897()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x1321 PushV
	var_51_string = "k1q03"; // 0x1322 PushS
	var_52_int = 1; // 0x1323 PushI
	SetVariable(var_51_string, var_52_int); // 0x1324 Func
	var_53_object = Obj(); // 0x1326 PushV
	func_5662(var_53_object); // 0x1327 NEW_2
	var_50_object = var_53_object; // 0x1328 Mov
	var_60_string = "k1q03AnnaGotoNotkin"; // 0x132a PushS
	var_61_string = "pt_map_notkin"; // 0x132b PushS
	var_62_int = 0; // 0x132c PushI
	var_63_int = 524799; // 0x132d PushI
	var_64_float = 0; // 0x132e PushV
	func_4802(var_64_float); // 0x132f NEW_2
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x1331 ObjFunc
	func_5491(); // 0x1334 NEW_2
	func_5504(); // 0x1337 NEW_2
	return 2; // 0x1339 Return
}


func_5413()
{
	var_127_object = Obj(); var_128_object = Obj(); // 0x1525 PushV
	var_129_int = 498; // 0x1526 PushI
	var_130_int = 1; // 0x1527 PushI
	var_131_int = 528065; // 0x1528 PushI
	CreateDiaryEntry(var_128_object, var_129_int, var_130_int, var_131_int); // 0x1529 Func
	var_132_bool = 0; var_133_object = Obj(); var_134_int = 0; // 0x152b PushV
	var_133_object = var_128_object; // 0x152c Mov
	var_134_int = 480; // 0x152d MovI
	func_5634(var_132_bool, var_133_object, var_134_int); // 0x152e NEW_2
	return 2; // 0x1530 Return
}


func_5426()
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x1532 PushV
	var_119_int = 497; // 0x1533 PushI
	var_120_int = 1; // 0x1534 PushI
	var_121_int = 528064; // 0x1535 PushI
	CreateDiaryEntry(var_118_object, var_119_int, var_120_int, var_121_int); // 0x1536 Func
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; // 0x1538 PushV
	var_123_object = var_118_object; // 0x1539 Mov
	var_124_int = 480; // 0x153a MovI
	func_5634(var_122_bool, var_123_object, var_124_int); // 0x153b NEW_2
	return 2; // 0x153d Return
}


func_2869(var_0_object, var_1_object, var_2_object, var_3_string, var_651_object, var_652_object)
{
	var_0_object = var_652_object; // 0xb36 TMov
	var_1_object = var_651_object; // 0xb37 TMov
	var_3_string = 0; // 0xb38 TMovB
	var_657_int = 1; // 0xb39 PushI
	if(var_657_int == 0) goto Label_2925; // 0xb3a JumpB
	var_658_string = ""; // 0xb3b PushV
	var_658_string = "Fear"; // 0xb3c MovS
	func_2955(var_652_object, var_658_string); // 0xb3d NEW_2
	var_666_int = 526085; // 0xb3f PushI
	SetMessage(var_666_int); // 0xb40 TObjFunc
	ClearReplies(); // 0xb42 TObjFunc
	var_667_bool = 0; // 0xb44 PushV
	var_667_bool = 0; // 0xb45 MovB
	var_668_bool = 0; // 0xb46 PushV
	var_668_bool = 0; // 0xb47 MovB
	var_669_bool = 0; var_670_object = Obj(); // 0xb48 PushV
	var_670_object = var_1_object; // 0xb49 MovT
	func_5353(var_670_object); // 0xb4a NEW_2
	if(var_669_bool == 0) goto Label_2899; // 0xb4c JumpB
	var_675_bool = 0; var_676_object = Obj(); // 0xb4d PushV
	var_676_object = var_1_object; // 0xb4e MovT
	func_5365(var_676_object); // 0xb4f NEW_2
	if(var_675_bool == 0) goto Label_2899; // 0xb51 JumpB
	var_668_bool = 1; // 0xb52 MovB
	
Label_2899:
	if(var_668_bool == 0) goto Label_2906; // 0xb53 JumpB
	var_681_bool = 0; var_682_object = Obj(); // 0xb54 PushV
	var_682_object = var_1_object; // 0xb55 MovT
	func_5377(var_682_object); // 0xb56 NEW_2
	if(var_681_bool == 0) goto Label_2906; // 0xb58 JumpB
	var_667_bool = 1; // 0xb59 MovB
	
Label_2906:
	if(var_667_bool == 0) goto Label_2912; // 0xb5a JumpB
	var_687_int = 526086; // 0xb5b PushI
	var_688_int = 27373; // 0xb5c PushI
	var_689_int = 27372; // 0xb5d PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0xb5e TObjFunc
	
Label_2912:
	var_690_int = 526089; // 0xb60 PushI
	var_691_int = -1; // 0xb61 PushI
	var_692_int = 27375; // 0xb62 PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0xb63 TObjFunc
	var_693_int = 528861; // 0xb65 PushI
	var_694_int = -1; // 0xb66 PushI
	var_695_int = 30283; // 0xb67 PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0xb68 TObjFunc
	goto Label_2925; // 0xb6a Jump
	
Label_2925:
	var_696_bool = 0; // 0xb6d PushV
	func_4854(var_696_bool); // 0xb6e NEW_2
	if(var_696_bool == 0) goto Label_2940; // 0xb70 JumpB
	
Label_2929:
	lshWaitForAnimEnd(); // 0xb71 Func
	var_697_string = var_3_string; // 0xb73 PushT
	if(var_697_string == 0) goto Label_2934; // 0xb74 JumpB
	goto Label_2939; // 0xb75 Jump
	
Label_2939:
	goto Label_2954; // 0xb7b Jump
	
Label_2954:
	return 0; // 0xb8a Return
	
Label_2934:
	var_698_string = ""; // 0xb76 PushV
	var_698_string = var_2_object; // 0xb77 MovT
	func_4609(var_698_string); // 0xb78 NEW_2
	goto Label_2929; // 0xb7a Jump
	
Label_2940:
	var_699_string = "all"; // 0xb7c PushS
	var_700_string = "idle"; // 0xb7d PushS
	PlayAnimation(var_699_string, var_700_string); // 0xb7e Func
	
Label_2944:
	WaitForAnimEnd(); // 0xb80 Func
	var_701_string = var_3_string; // 0xb82 PushT
	if(var_701_string == 0) goto Label_2949; // 0xb83 JumpB
	goto Label_2954; // 0xb84 Jump
	
Label_2949:
	var_702_string = "all"; // 0xb85 PushS
	var_703_string = "idle"; // 0xb86 PushS
	PlayAnimation(var_702_string, var_703_string); // 0xb87 Func
	goto Label_2944; // 0xb89 Jump
}


func_4923()
{
	var_134_string = "k1q03"; // 0x133c PushS
	var_135_int = 1000; // 0x133d PushI
	SetVariable(var_134_string, var_135_int); // 0x133e Func
	func_5517(); // 0x1341 NEW_2
	return 0; // 0x1343 Return
}


func_5439()
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x153f PushV
	var_109_int = 496; // 0x1540 PushI
	var_110_int = 1; // 0x1541 PushI
	var_111_int = 528063; // 0x1542 PushI
	CreateDiaryEntry(var_108_object, var_109_int, var_110_int, var_111_int); // 0x1543 Func
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0; // 0x1545 PushV
	var_113_object = var_108_object; // 0x1546 Mov
	var_114_int = 480; // 0x1547 MovI
	func_5634(var_112_bool, var_113_object, var_114_int); // 0x1548 NEW_2
	return 2; // 0x154a Return
}


func_4932()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x1344 PushV
	var_51_string = "k2q04"; // 0x1345 PushS
	var_52_int = 2; // 0x1346 PushI
	SetVariable(var_51_string, var_52_int); // 0x1347 Func
	var_53_object = Obj(); // 0x1349 PushV
	func_5662(var_53_object); // 0x134a NEW_2
	var_50_object = var_53_object; // 0x134b Mov
	var_60_string = "k2q04AnnaGotoGatherer1"; // 0x134d PushS
	var_61_string = "pt_map_gatherer1"; // 0x134e PushS
	var_62_int = 0; // 0x134f PushI
	var_63_int = 508643; // 0x1350 PushI
	var_64_float = 0; // 0x1351 PushV
	func_4802(var_64_float); // 0x1352 NEW_2
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x1354 ObjFunc
	var_67_string = "k2q04AnnaGotoGatherer2"; // 0x1356 PushS
	var_68_string = "pt_map_gatherer2"; // 0x1357 PushS
	var_69_int = 0; // 0x1358 PushI
	var_70_int = 539379; // 0x1359 PushI
	var_71_float = 0; // 0x135a PushV
	func_4802(var_71_float); // 0x135b NEW_2
	AddMark(var_67_string, var_68_string, var_69_int, var_70_int, var_71_float); // 0x135d ObjFunc
	var_72_string = "k2q04AnnaGotoGatherer3"; // 0x135f PushS
	var_73_string = "pt_map_gatherer3"; // 0x1360 PushS
	var_74_int = 0; // 0x1361 PushI
	var_75_int = 508644; // 0x1362 PushI
	var_76_float = 0; // 0x1363 PushV
	func_4802(var_76_float); // 0x1364 NEW_2
	AddMark(var_72_string, var_73_string, var_74_int, var_75_int, var_76_float); // 0x1366 ObjFunc
	func_5543(); // 0x1369 NEW_2
	return 2; // 0x136b Return
}


func_5452()
{
	var_97_object = Obj(); var_98_object = Obj(); // 0x154c PushV
	var_99_int = 495; // 0x154d PushI
	var_100_int = 1; // 0x154e PushI
	var_101_int = 528062; // 0x154f PushI
	CreateDiaryEntry(var_98_object, var_99_int, var_100_int, var_101_int); // 0x1550 Func
	var_102_bool = 0; var_103_object = Obj(); var_104_int = 0; // 0x1552 PushV
	var_103_object = var_98_object; // 0x1553 Mov
	var_104_int = 480; // 0x1554 MovI
	func_5634(var_102_bool, var_103_object, var_104_int); // 0x1555 NEW_2
	return 2; // 0x1557 Return
}


func_5465()
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x1559 PushV
	var_89_int = 494; // 0x155a PushI
	var_90_int = 1; // 0x155b PushI
	var_91_int = 528061; // 0x155c PushI
	CreateDiaryEntry(var_88_object, var_89_int, var_90_int, var_91_int); // 0x155d Func
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0; // 0x155f PushV
	var_93_object = var_88_object; // 0x1560 Mov
	var_94_int = 480; // 0x1561 MovI
	func_5634(var_92_bool, var_93_object, var_94_int); // 0x1562 NEW_2
	return 2; // 0x1564 Return
}


func_3930(var_0_object, var_1_object, var_2_object, var_3_string, var_862_object, var_863_object)
{
	var_0_object = var_863_object; // 0xf5b TMov
	var_1_object = var_862_object; // 0xf5c TMov
	var_3_string = 0; // 0xf5d TMovB
	var_868_int = 1; // 0xf5e PushI
	if(var_868_int == 0) goto Label_3958; // 0xf5f JumpB
	var_869_string = ""; // 0xf60 PushV
	var_869_string = "Neutral"; // 0xf61 MovS
	func_3988(var_863_object, var_869_string); // 0xf62 NEW_2
	var_877_int = 540539; // 0xf64 PushI
	SetMessage(var_877_int); // 0xf65 TObjFunc
	ClearReplies(); // 0xf67 TObjFunc
	var_878_int = 540540; // 0xf69 PushI
	var_879_int = -1; // 0xf6a PushI
	var_880_int = 42549; // 0xf6b PushI
	AddReply(var_878_int, var_879_int, var_880_int); // 0xf6c TObjFunc
	var_881_int = 540799; // 0xf6e PushI
	var_882_int = -1; // 0xf6f PushI
	var_883_int = 42848; // 0xf70 PushI
	AddReply(var_881_int, var_882_int, var_883_int); // 0xf71 TObjFunc
	goto Label_3958; // 0xf73 Jump
	
Label_3958:
	var_884_bool = 0; // 0xf76 PushV
	func_4854(var_884_bool); // 0xf77 NEW_2
	if(var_884_bool == 0) goto Label_3973; // 0xf79 JumpB
	
Label_3962:
	lshWaitForAnimEnd(); // 0xf7a Func
	var_885_string = var_3_string; // 0xf7c PushT
	if(var_885_string == 0) goto Label_3967; // 0xf7d JumpB
	goto Label_3972; // 0xf7e Jump
	
Label_3972:
	goto Label_3987; // 0xf84 Jump
	
Label_3987:
	return 0; // 0xf93 Return
	
Label_3967:
	var_886_string = ""; // 0xf7f PushV
	var_886_string = var_2_object; // 0xf80 MovT
	func_4609(var_886_string); // 0xf81 NEW_2
	goto Label_3962; // 0xf83 Jump
	
Label_3973:
	var_887_string = "all"; // 0xf85 PushS
	var_888_string = "idle"; // 0xf86 PushS
	PlayAnimation(var_887_string, var_888_string); // 0xf87 Func
	
Label_3977:
	WaitForAnimEnd(); // 0xf89 Func
	var_889_string = var_3_string; // 0xf8b PushT
	if(var_889_string == 0) goto Label_3982; // 0xf8c JumpB
	goto Label_3987; // 0xf8d Jump
	
Label_3982:
	var_890_string = "all"; // 0xf8e PushS
	var_891_string = "idle"; // 0xf8f PushS
	PlayAnimation(var_890_string, var_891_string); // 0xf90 Func
	goto Label_3977; // 0xf92 Jump
}


func_4453()
{
	var_280_bool = 0; var_281_bool = 0; // 0x1165 PushV
	var_282_bool = 1; // 0x1166 PushB
	CameraSwitchToNormal(var_282_bool); // 0x1167 Func
	var_283_bool = 0; // 0x1169 PushV
	func_4854(var_283_bool); // 0x116a NEW_2
	if(var_283_bool == 0) goto Label_4462; // 0x116c JumpB
	goto Label_4470; // 0x116d Jump
	
Label_4470:
	return 2; // 0x1176 Return
	
Label_4462:
	var_284_string = "head"; // 0x116e PushS
	HasAnimationTrack(var_281_bool, var_284_string); // 0x116f Func
	var_285_bool = var_281_bool; // 0x1171 Push
	if(var_285_bool == 0) goto Label_4470; // 0x1172 JumpB
	var_286_string = "head"; // 0x1173 PushS
	UnlookAsync(var_286_string); // 0x1174 Func
}


func_5478()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x1566 PushV
	var_64_int = 493; // 0x1567 PushI
	var_65_int = 1; // 0x1568 PushI
	var_66_int = 528060; // 0x1569 PushI
	CreateDiaryEntry(var_63_object, var_64_int, var_65_int, var_66_int); // 0x156a Func
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0; // 0x156c PushV
	var_68_object = var_63_object; // 0x156d Mov
	var_69_int = 480; // 0x156e MovI
	func_5634(var_67_bool, var_68_object, var_69_int); // 0x156f NEW_2
	return 2; // 0x1571 Return
}


func_4973()
{
	var_104_string = "k2q04"; // 0x136e PushS
	var_105_int = 9; // 0x136f PushI
	SetVariable(var_104_string, var_105_int); // 0x1370 Func
	func_5530(); // 0x1373 NEW_2
	return 0; // 0x1375 Return
}


func_5491()
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x1573 PushV
	var_69_int = 333; // 0x1574 PushI
	var_70_int = 2; // 0x1575 PushI
	var_71_int = 524800; // 0x1576 PushI
	CreateDiaryEntry(var_68_object, var_69_int, var_70_int, var_71_int); // 0x1577 Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0x1579 PushV
	var_73_object = var_68_object; // 0x157a Mov
	var_74_int = -1; // 0x157b MovI
	func_5634(var_72_bool, var_73_object, var_74_int); // 0x157c NEW_2
	return 2; // 0x157e Return
}


func_4982(var_114_object)
{
	var_116_string = "alpha_pills 5 is given"; // 0x1377 PushS
	Trace(var_116_string); // 0x1378 Func
	var_117_object = Obj(); var_118_string = ""; var_119_int = 0; // 0x137a PushV
	var_117_object = var_114_object; // 0x137b Mov
	var_118_string = "alpha_pills"; // 0x137c MovS
	var_119_int = 5; // 0x137d MovI
	func_4744(var_117_object, var_118_string, var_119_int); // 0x137e NEW_2
	return 0; // 0x1380 Return
}


func_4471(var_134_bool, var_135_object)
{
	var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; // 0x1177 PushV
	var_143_string = "voice_common"; // 0x1178 PushS
	GetVariable(var_143_string, var_141_int); // 0x1179 Func
	var_144_int = var_141_int; // 0x117b Push
	if(var_144_int == 0) goto Label_4509; // 0x117c JumpB
	var_145_bool = 0; var_146_object = Obj(); // 0x117d PushV
	var_146_object = var_135_object; // 0x117e Mov
	func_4529(var_146_object); // 0x117f NEW_2
	var_175_bool = var_145_bool == 0; // 0x1181 Not
	if(var_175_bool == 0) goto Label_4491; // 0x1182 JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x1183 PushV
	var_177_object = var_135_object; // 0x1184 Mov
	func_4566(var_177_object); // 0x1185 NEW_2
	var_211_bool = var_176_bool == 0; // 0x1187 Not
	if(var_211_bool == 0) goto Label_4491; // 0x1188 JumpB
	var_134_bool = 0; // 0x1189 MovB
	return 4; // 0x118a Return
	
Label_4491:
	var_212_int = 2; // 0x118b PushI
	irand(var_142_int, var_212_int); // 0x118c Func
	var_213_int = var_142_int; // 0x118e Push
	if(var_213_int == 0) goto Label_4504; // 0x118f JumpB
	var_214_string = "voice_common"; // 0x1190 PushS
	var_215_int = 1; // 0x1191 PushI
	var_216_int = var_141_int + var_215_int; // 0x1192 Add
	var_217_int = 3; // 0x1193 PushI
	var_218_int = var_216_int / var_217_int; // 0x1194 Mod
	SetVariable(var_214_string, var_218_int); // 0x1195 Func
	goto Label_4508; // 0x1197 Jump
	
Label_4508:
	goto Label_4527; // 0x119c Jump
	
Label_4527:
	var_134_bool = 1; // 0x11af MovB
	return 4; // 0x11b0 Return
	
Label_4504:
	var_219_string = "voice_common"; // 0x1198 PushS
	var_220_int = 0; // 0x1199 PushI
	SetVariable(var_219_string, var_220_int); // 0x119a Func
	
Label_4509:
	var_221_bool = 0; var_222_object = Obj(); // 0x119d PushV
	var_222_object = var_135_object; // 0x119e Mov
	func_4566(var_222_object); // 0x119f NEW_2
	var_223_bool = var_221_bool == 0; // 0x11a1 Not
	if(var_223_bool == 0) goto Label_4523; // 0x11a2 JumpB
	var_224_bool = 0; var_225_object = Obj(); // 0x11a3 PushV
	var_225_object = var_135_object; // 0x11a4 Mov
	func_4529(var_225_object); // 0x11a5 NEW_2
	var_226_bool = var_224_bool == 0; // 0x11a7 Not
	if(var_226_bool == 0) goto Label_4523; // 0x11a8 JumpB
	var_134_bool = 0; // 0x11a9 MovB
	return 4; // 0x11aa Return
	
Label_4523:
	var_227_string = "voice_common"; // 0x11ab PushS
	var_228_int = 1; // 0x11ac PushI
	SetVariable(var_227_string, var_228_int); // 0x11ad Func
}


func_5504()
{
	var_90_object = Obj(); var_91_object = Obj(); // 0x1580 PushV
	var_92_int = 334; // 0x1581 PushI
	var_93_int = 2; // 0x1582 PushI
	var_94_int = 524801; // 0x1583 PushI
	CreateDiaryEntry(var_91_object, var_92_int, var_93_int, var_94_int); // 0x1584 Func
	var_95_bool = 0; var_96_object = Obj(); var_97_int = 0; // 0x1586 PushV
	var_96_object = var_91_object; // 0x1587 Mov
	var_97_int = 333; // 0x1588 MovI
	func_5634(var_95_bool, var_96_object, var_97_int); // 0x1589 NEW_2
	return 2; // 0x158b Return
}


func_4993(var_138_object)
{
	var_140_string = "beta_pills 5 is given"; // 0x1382 PushS
	Trace(var_140_string); // 0x1383 Func
	var_141_object = Obj(); var_142_string = ""; var_143_int = 0; // 0x1385 PushV
	var_141_object = var_138_object; // 0x1386 Mov
	var_142_string = "beta_pills"; // 0x1387 MovS
	var_143_int = 5; // 0x1388 MovI
	func_4744(var_141_object, var_142_string, var_143_int); // 0x1389 NEW_2
	return 0; // 0x138b Return
}


func_2955(var_2_object, var_658_string)
{
	var_659_bool = 0; // 0xb8c PushV
	func_4854(var_659_bool); // 0xb8d NEW_2
	var_660_bool = var_659_bool == 0; // 0xb8f Not
	if(var_660_bool == 0) goto Label_2962; // 0xb90 JumpB
	return 0; // 0xb91 Return
	
Label_2962:
	var_661_bool = var_658_string == var_2_object; // 0xb92 Eq
	if(var_661_bool == 0) goto Label_2965; // 0xb93 JumpB
	return 0; // 0xb94 Return
	
Label_2965:
	var_662_string = ""; var_663_bool = 0; // 0xb95 PushV
	var_662_string = var_658_string; // 0xb96 Mov
	var_664_string = ""; // 0xb97 PushS
	var_665_bool = var_658_string == var_664_string; // 0xb98 Eq
	if(var_665_bool == 0) goto Label_2972; // 0xb99 JumpB
	var_663_bool = 0; // 0xb9a MovB
	goto Label_2973; // 0xb9b Jump
	
Label_2973:
	func_4625(var_662_string, var_663_bool); // 0xb9d NEW_2
	var_2_object = var_658_string; // 0xb9f TMov
	return 0; // 0xba0 Return
	
Label_2972:
	var_663_bool = 1; // 0xb9c MovB
}


func_5004()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x138c PushV
	var_51_string = "k3q01"; // 0x138d PushS
	var_52_int = 2; // 0x138e PushI
	SetVariable(var_51_string, var_52_int); // 0x138f Func
	var_53_object = Obj(); // 0x1391 PushV
	func_5662(var_53_object); // 0x1392 NEW_2
	var_50_object = var_53_object; // 0x1393 Mov
	var_60_string = "k3q01AnnaGotoMladVlad"; // 0x1395 PushS
	var_61_string = "pt_map_mladvlad"; // 0x1396 PushS
	var_62_int = 1; // 0x1397 PushI
	var_63_int = 525454; // 0x1398 PushI
	var_64_float = 0; // 0x1399 PushV
	func_4802(var_64_float); // 0x139a NEW_2
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x139c ObjFunc
	var_67_string = "k3q01AnnaGotoKapella"; // 0x139e PushS
	var_68_string = "pt_map_kapella"; // 0x139f PushS
	var_69_int = 1; // 0x13a0 PushI
	var_70_int = 525455; // 0x13a1 PushI
	var_71_float = 0; // 0x13a2 PushV
	func_4802(var_71_float); // 0x13a3 NEW_2
	AddMark(var_67_string, var_68_string, var_69_int, var_70_int, var_71_float); // 0x13a5 ObjFunc
	func_5569(); // 0x13a8 NEW_2
	return 2; // 0x13aa Return
}


func_5517()
{
	var_136_object = Obj(); var_137_object = Obj(); // 0x158d PushV
	var_138_int = 336; // 0x158e PushI
	var_139_int = 2; // 0x158f PushI
	var_140_int = 524803; // 0x1590 PushI
	CreateDiaryEntry(var_137_object, var_138_int, var_139_int, var_140_int); // 0x1591 Func
	var_141_bool = 0; var_142_object = Obj(); var_143_int = 0; // 0x1593 PushV
	var_142_object = var_137_object; // 0x1594 Mov
	var_143_int = 333; // 0x1595 MovI
	func_5634(var_141_bool, var_142_object, var_143_int); // 0x1596 NEW_2
	return 2; // 0x1598 Return
}


func_3988(var_2_object, var_869_string)
{
	var_870_bool = 0; // 0xf95 PushV
	func_4854(var_870_bool); // 0xf96 NEW_2
	var_871_bool = var_870_bool == 0; // 0xf98 Not
	if(var_871_bool == 0) goto Label_3995; // 0xf99 JumpB
	return 0; // 0xf9a Return
	
Label_3995:
	var_872_bool = var_869_string == var_2_object; // 0xf9b Eq
	if(var_872_bool == 0) goto Label_3998; // 0xf9c JumpB
	return 0; // 0xf9d Return
	
Label_3998:
	var_873_string = ""; var_874_bool = 0; // 0xf9e PushV
	var_873_string = var_869_string; // 0xf9f Mov
	var_875_string = ""; // 0xfa0 PushS
	var_876_bool = var_869_string == var_875_string; // 0xfa1 Eq
	if(var_876_bool == 0) goto Label_4005; // 0xfa2 JumpB
	var_874_bool = 0; // 0xfa3 MovB
	goto Label_4006; // 0xfa4 Jump
	
Label_4006:
	func_4625(var_873_string, var_874_bool); // 0xfa6 NEW_2
	var_2_object = var_869_string; // 0xfa8 TMov
	return 0; // 0xfa9 Return
	
Label_4005:
	var_874_bool = 1; // 0xfa5 MovB
}


func_5530()
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x159a PushV
	var_108_int = 510; // 0x159b PushI
	var_109_int = 2; // 0x159c PushI
	var_110_int = 529709; // 0x159d PushI
	CreateDiaryEntry(var_107_object, var_108_int, var_109_int, var_110_int); // 0x159e Func
	var_111_bool = 0; var_112_object = Obj(); var_113_int = 0; // 0x15a0 PushV
	var_112_object = var_107_object; // 0x15a1 Mov
	var_113_int = 507; // 0x15a2 MovI
	func_5634(var_111_bool, var_112_object, var_113_int); // 0x15a3 NEW_2
	return 2; // 0x15a5 Return
}


func_3490(var_0_object, var_779_int, var_780_object)
{
	var_782_object = Obj(); var_783_bool = 0; var_784_int = 0; var_785_bool = 0; var_786_object = Obj(); var_787_bool = 0; var_788_int = 0; var_789_bool = 0; // 0xda2 PushV
	var_0_object = var_780_object; // 0xda3 TMov
	var_790_bool = 0; var_791_object = Obj(); var_792_float = 0; // 0xda4 PushV
	var_791_object = var_780_object; // 0xda5 Mov
	var_792_float = 70.0; // 0xda6 MovF
	func_4384(var_791_object, var_792_float); // 0xda7 NEW_2
	var_793_bool = var_790_bool == 0; // 0xda9 Not
	if(var_793_bool == 0) goto Label_3501; // 0xdaa JumpB
	var_779_int = -2; // 0xdab MovI
	return 8; // 0xdac Return
	
Label_3501:
	CreateDialog(var_786_object); // 0xdad Func
	var_794_int = 0; // 0xdaf PushV
	func_4848(var_794_int); // 0xdb0 NEW_2
	SetNPCName(var_794_int); // 0xdb2 ObjFunc
	var_795_int = 0; // 0xdb4 PushV
	func_4846(var_795_int); // 0xdb5 NEW_2
	SetNPCDescription(var_795_int); // 0xdb7 ObjFunc
	var_796_string = ""; // 0xdb9 PushV
	func_4850(var_796_string); // 0xdba NEW_2
	SetPhoto(var_796_string); // 0xdbc ObjFunc
	var_797_string = ""; // 0xdbe PushV
	func_4852(var_797_string); // 0xdbf NEW_2
	SetPhoto2(var_797_string); // 0xdc1 ObjFunc
	var_798_int = 0; // 0xdc3 PushV
	func_5712(var_798_int); // 0xdc4 NEW_2
	SetPlayerName(var_798_int); // 0xdc6 ObjFunc
	var_788_int = -1; // 0xdc8 MovI
	IsOverrideActive(var_787_bool); // 0xdc9 Func
	var_799_bool = var_787_bool; // 0xdcb Push
	if(var_799_bool == 0) goto Label_3535; // 0xdcc JumpB
	var_779_int = -2; // 0xdcd MovI
	return 8; // 0xdce Return
	
Label_3535:
	DoDialog(var_786_object); // 0xdcf Func
	var_800_bool = 0; var_801_object = Obj(); // 0xdd1 PushV
	var_802_object = Obj(); // 0xdd2 PushV
	func_4662(var_802_object); // 0xdd3 NEW_2
	var_801_object = var_802_object; // 0xdd4 Mov
	func_4471(var_800_bool, var_801_object); // 0xdd6 NEW_2
	var_803_object = Obj(); var_804_object = Obj(); // 0xdd8 PushV
	var_803_object = var_780_object; // 0xdd9 Mov
	var_804_object = var_786_object; // 0xdda Mov
	TaskCall(13); // 0xddb TaskCall
	func_3571(var_805_object, var_806_object, var_807_string, var_808_bool, var_803_object, var_804_object); // 0xddc NEW_2
	TaskReturn(); // 0xddd TaskReturn
	IsDialogEnd(var_789_bool); // 0xddf ObjFunc
	
Label_3553:
	var_836_bool = var_789_bool == 0; // 0xde1 Not
	if(var_836_bool == 0) goto Label_3560; // 0xde2 JumpB
	sync(); // 0xde3 Func
	IsDialogEnd(var_789_bool); // 0xde5 ObjFunc
	goto Label_3553; // 0xde7 Jump
	
Label_3560:
	var_837_object = Obj(); // 0xde8 PushV
	var_837_object = var_780_object; // 0xde9 Mov
	func_4453(); // 0xdea NEW_2
	StopDialog(var_786_object); // 0xdec Func
	GetReturnValue(var_788_int); // 0xdee ObjFunc
	var_779_int = var_788_int; // 0xdf0 Mov
	return 8; // 0xdf1 Return
}


func_5543()
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x15a7 PushV
	var_79_int = 509; // 0x15a8 PushI
	var_80_int = 2; // 0x15a9 PushI
	var_81_int = 529708; // 0x15aa PushI
	CreateDiaryEntry(var_78_object, var_79_int, var_80_int, var_81_int); // 0x15ab Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x15ad PushV
	var_83_object = var_78_object; // 0x15ae Mov
	var_84_int = 507; // 0x15af MovI
	func_5634(var_82_bool, var_83_object, var_84_int); // 0x15b0 NEW_2
	return 2; // 0x15b2 Return
}


func_5036()
{
	var_109_string = "k3q01"; // 0x13ad PushS
	var_110_int = 3; // 0x13ae PushI
	SetVariable(var_109_string, var_110_int); // 0x13af Func
	func_5556(); // 0x13b2 NEW_2
	return 0; // 0x13b4 Return
}


func_4529(var_145_bool)
{
	var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; var_152_string = ""; var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_string = ""; // 0x11b1 PushV
	var_152_string = "c"; // 0x11b2 MovS
	var_153_int = 0; // 0x11b3 MovI
	
Label_4532:
	var_157_int = 1; // 0x11b4 PushI
	if(var_157_int == 0) goto Label_4545; // 0x11b5 JumpB
	var_158_int = 1; // 0x11b6 PushI
	var_159_int = var_153_int + var_158_int; // 0x11b7 Add
	var_160_int = var_152_string + var_159_int; // 0x11b8 Add
	HasProperty(var_160_int, var_154_bool); // 0x11b9 ObjFunc
	var_161_bool = var_154_bool == 0; // 0x11bb Not
	if(var_161_bool == 0) goto Label_4542; // 0x11bc JumpB
	goto Label_4545; // 0x11bd Jump
	
Label_4545:
	var_162_bool = var_153_int == 0; // 0x11c1 Not
	if(var_162_bool == 0) goto Label_4549; // 0x11c2 JumpB
	var_145_bool = 0; // 0x11c3 MovB
	return 10; // 0x11c4 Return
	
Label_4549:
	var_155_int = 0; // 0x11c5 MovI
	var_163_int = 1; // 0x11c6 PushI
	var_164_bool = var_153_int > var_163_int; // 0x11c7 GT
	if(var_164_bool == 0) goto Label_4555; // 0x11c8 JumpB
	irand(var_155_int, var_153_int); // 0x11c9 Func
	
Label_4555:
	var_165_int = 1; // 0x11cb PushI
	var_166_int = var_155_int + var_165_int; // 0x11cc Add
	var_167_int = var_152_string + var_166_int; // 0x11cd Add
	GetProperty(var_167_int, var_156_string); // 0x11ce ObjFunc
	var_168_bool = 0; var_169_string = ""; // 0x11d0 PushV
	var_169_string = var_156_string; // 0x11d1 Mov
	func_4640(var_168_bool, var_169_string); // 0x11d2 NEW_2
	var_145_bool = var_168_bool; // 0x11d3 Mov
	return 10; // 0x11d5 Return
	
Label_4542:
	var_174_int = 1; // 0x11be PushI
	var_153_int = var_153_int + var_174_int; // 0x11bf Add2
	goto Label_4532; // 0x11c0 Jump
}


func_5556()
{
	var_111_object = Obj(); var_112_object = Obj(); // 0x15b4 PushV
	var_113_int = 341; // 0x15b5 PushI
	var_114_int = 1; // 0x15b6 PushI
	var_115_int = 525450; // 0x15b7 PushI
	CreateDiaryEntry(var_112_object, var_113_int, var_114_int, var_115_int); // 0x15b8 Func
	var_116_bool = 0; var_117_object = Obj(); var_118_int = 0; // 0x15ba PushV
	var_117_object = var_112_object; // 0x15bb Mov
	var_118_int = 337; // 0x15bc MovI
	func_5634(var_116_bool, var_117_object, var_118_int); // 0x15bd NEW_2
	return 2; // 0x15bf Return
}


func_5045()
{
	var_125_string = "ook3Anna1"; // 0x13b6 PushS
	var_126_int = 1; // 0x13b7 PushI
	SetVariable(var_125_string, var_126_int); // 0x13b8 Func
	return 0; // 0x13ba Return
}


func_5051()
{
	var_131_object = Obj(); var_132_object = Obj(); // 0x13bb PushV
	var_133_string = "k3q03"; // 0x13bc PushS
	var_134_int = 1; // 0x13bd PushI
	SetVariable(var_133_string, var_134_int); // 0x13be Func
	var_135_object = Obj(); // 0x13c0 PushV
	func_5662(var_135_object); // 0x13c1 NEW_2
	var_132_object = var_135_object; // 0x13c2 Mov
	var_136_string = "k3q03AnnaGotoEva"; // 0x13c4 PushS
	var_137_string = "pt_map_eva"; // 0x13c5 PushS
	var_138_int = 0; // 0x13c6 PushI
	var_139_int = 525615; // 0x13c7 PushI
	var_140_float = 0; // 0x13c8 PushV
	func_4802(var_140_float); // 0x13c9 NEW_2
	AddMark(var_136_string, var_137_string, var_138_int, var_139_int, var_140_float); // 0x13cb ObjFunc
	func_5582(); // 0x13ce NEW_2
	func_5595(); // 0x13d1 NEW_2
	return 2; // 0x13d3 Return
}


func_5569()
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x15c1 PushV
	var_74_int = 339; // 0x15c2 PushI
	var_75_int = 1; // 0x15c3 PushI
	var_76_int = 525448; // 0x15c4 PushI
	CreateDiaryEntry(var_73_object, var_74_int, var_75_int, var_76_int); // 0x15c5 Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0x15c7 PushV
	var_78_object = var_73_object; // 0x15c8 Mov
	var_79_int = 337; // 0x15c9 MovI
	func_5634(var_77_bool, var_78_object, var_79_int); // 0x15ca NEW_2
	return 2; // 0x15cc Return
}


func_5582()
{
	var_141_object = Obj(); var_142_object = Obj(); // 0x15ce PushV
	var_143_int = 350; // 0x15cf PushI
	var_144_int = 2; // 0x15d0 PushI
	var_145_int = 525616; // 0x15d1 PushI
	CreateDiaryEntry(var_142_object, var_143_int, var_144_int, var_145_int); // 0x15d2 Func
	var_146_bool = 0; var_147_object = Obj(); var_148_int = 0; // 0x15d4 PushV
	var_147_object = var_142_object; // 0x15d5 Mov
	var_148_int = -1; // 0x15d6 MovI
	func_5634(var_146_bool, var_147_object, var_148_int); // 0x15d7 NEW_2
	return 2; // 0x15d9 Return
}


func_5077()
{
	var_49_string = "ook6Anna1"; // 0x13d6 PushS
	var_50_int = 1; // 0x13d7 PushI
	SetVariable(var_49_string, var_50_int); // 0x13d8 Func
	return 0; // 0x13da Return
}


func_4566(var_176_bool)
{
	var_178_string = ""; var_179_int = 0; var_180_bool = 0; var_181_int = 0; var_182_string = ""; var_183_string = ""; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_string = ""; // 0x11d6 PushV
	var_188_string = "d"; // 0x11d7 PushS
	var_189_int = 0; // 0x11d8 PushV
	func_4807(var_189_int); // 0x11d9 NEW_2
	var_195_int = var_188_string + var_189_int; // 0x11db Add
	var_196_string = "m"; // 0x11dc PushS
	var_183_string = var_195_int + var_196_string; // 0x11dd Add2
	var_184_int = 0; // 0x11de MovI
	
Label_4575:
	var_197_int = 1; // 0x11df PushI
	if(var_197_int == 0) goto Label_4588; // 0x11e0 JumpB
	var_198_int = 1; // 0x11e1 PushI
	var_199_int = var_184_int + var_198_int; // 0x11e2 Add
	var_200_int = var_183_string + var_199_int; // 0x11e3 Add
	HasProperty(var_200_int, var_185_bool); // 0x11e4 ObjFunc
	var_201_bool = var_185_bool == 0; // 0x11e6 Not
	if(var_201_bool == 0) goto Label_4585; // 0x11e7 JumpB
	goto Label_4588; // 0x11e8 Jump
	
Label_4588:
	var_202_bool = var_184_int == 0; // 0x11ec Not
	if(var_202_bool == 0) goto Label_4592; // 0x11ed JumpB
	var_176_bool = 0; // 0x11ee MovB
	return 10; // 0x11ef Return
	
Label_4592:
	var_186_int = 0; // 0x11f0 MovI
	var_203_int = 1; // 0x11f1 PushI
	var_204_bool = var_184_int > var_203_int; // 0x11f2 GT
	if(var_204_bool == 0) goto Label_4598; // 0x11f3 JumpB
	irand(var_186_int, var_184_int); // 0x11f4 Func
	
Label_4598:
	var_205_int = 1; // 0x11f6 PushI
	var_206_int = var_186_int + var_205_int; // 0x11f7 Add
	var_207_int = var_183_string + var_206_int; // 0x11f8 Add
	GetProperty(var_207_int, var_187_string); // 0x11f9 ObjFunc
	var_208_bool = 0; var_209_string = ""; // 0x11fb PushV
	var_209_string = var_187_string; // 0x11fc Mov
	func_4640(var_208_bool, var_209_string); // 0x11fd NEW_2
	var_176_bool = var_208_bool; // 0x11fe Mov
	return 10; // 0x1200 Return
	
Label_4585:
	var_210_int = 1; // 0x11e9 PushI
	var_184_int = var_184_int + var_210_int; // 0x11ea Add2
	goto Label_4575; // 0x11eb Jump
}


func_5083()
{
	func_5608(); // 0x13dd NEW_2
	return 0; // 0x13df Return
}


func_4059(var_0_object)
{
	var_42_bool = 0; // 0xfdb PushV
	func_4379(var_42_bool); // 0xfdc NEW_2
	var_45_bool = var_42_bool == 0; // 0xfde Not
	if(var_45_bool == 0) goto Label_4066; // 0xfdf JumpB
	Hold(); // 0xfe0 Func
	
Label_4066:
	GetDirection(var_0_object); // 0xfe2 Func
	
Label_4068:
	func_4235(); // 0xfe5 NEW_2
	goto Label_4068; // 0xfe7 Jump
}


func_5595()
{
	var_149_object = Obj(); var_150_object = Obj(); // 0x15db PushV
	var_151_int = 351; // 0x15dc PushI
	var_152_int = 2; // 0x15dd PushI
	var_153_int = 525617; // 0x15de PushI
	CreateDiaryEntry(var_150_object, var_151_int, var_152_int, var_153_int); // 0x15df Func
	var_154_bool = 0; var_155_object = Obj(); var_156_int = 0; // 0x15e1 PushV
	var_155_object = var_150_object; // 0x15e2 Mov
	var_156_int = 350; // 0x15e3 MovI
	func_5634(var_154_bool, var_155_object, var_156_int); // 0x15e4 NEW_2
	return 2; // 0x15e6 Return
}


func_5088()
{
	var_55_int = 0; var_56_int = 0; // 0x13e0 PushV
	var_57_string = "k11q01SoulCount"; // 0x13e1 PushS
	GetVariable(var_57_string, var_56_int); // 0x13e2 Func
	var_58_int = 1; // 0x13e4 PushI
	var_56_int = var_56_int + var_58_int; // 0x13e5 Add2
	var_59_string = "k11q01SoulCount"; // 0x13e6 PushS
	SetVariable(var_59_string, var_56_int); // 0x13e7 Func
	var_60_int = 2; // 0x13e9 PushI
	var_61_bool = var_56_int == var_60_int; // 0x13ea Eq
	if(var_61_bool == 0) goto Label_5104; // 0x13eb JumpB
	func_5478(); // 0x13ed NEW_2
	goto Label_5138; // 0x13ef Jump
	
Label_5138:
	return 2; // 0x1412 Return
	
Label_5104:
	var_85_int = 3; // 0x13f0 PushI
	var_86_bool = var_56_int == var_85_int; // 0x13f1 Eq
	if(var_86_bool == 0) goto Label_5111; // 0x13f2 JumpB
	func_5465(); // 0x13f4 NEW_2
	goto Label_5138; // 0x13f6 Jump
	
Label_5111:
	var_95_int = 4; // 0x13f7 PushI
	var_96_bool = var_56_int == var_95_int; // 0x13f8 Eq
	if(var_96_bool == 0) goto Label_5118; // 0x13f9 JumpB
	func_5452(); // 0x13fb NEW_2
	goto Label_5138; // 0x13fd Jump
	
Label_5118:
	var_105_int = 5; // 0x13fe PushI
	var_106_bool = var_56_int == var_105_int; // 0x13ff Eq
	if(var_106_bool == 0) goto Label_5125; // 0x1400 JumpB
	func_5439(); // 0x1402 NEW_2
	goto Label_5138; // 0x1404 Jump
	
Label_5125:
	var_115_int = 6; // 0x1405 PushI
	var_116_bool = var_56_int == var_115_int; // 0x1406 Eq
	if(var_116_bool == 0) goto Label_5132; // 0x1407 JumpB
	func_5426(); // 0x1409 NEW_2
	goto Label_5138; // 0x140b Jump
	
Label_5132:
	var_125_int = 7; // 0x140c PushI
	var_126_bool = var_56_int == var_125_int; // 0x140d Eq
	if(var_126_bool == 0) goto Label_5138; // 0x140e JumpB
	func_5413(); // 0x1410 NEW_2
}


func_5608()
{
	var_55_object = Obj(); var_56_object = Obj(); // 0x15e8 PushV
	var_57_int = 412; // 0x15e9 PushI
	var_58_int = 1; // 0x15ea PushI
	var_59_int = 526113; // 0x15eb PushI
	CreateDiaryEntry(var_56_object, var_57_int, var_58_int, var_59_int); // 0x15ec Func
	var_60_bool = 0; var_61_object = Obj(); var_62_int = 0; // 0x15ee PushV
	var_61_object = var_56_object; // 0x15ef Mov
	var_62_int = 408; // 0x15f0 MovI
	func_5634(var_60_bool, var_61_object, var_62_int); // 0x15f1 NEW_2
	return 2; // 0x15f3 Return
}


func_4073(var_66_bool)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0xfe9 PushV
	var_69_string = "player"; // 0xfea PushS
	FindActor(var_68_object, var_69_string); // 0xfeb Func
	var_70_bool = var_68_object == 0; // 0xfed Not
	if(var_70_bool == 0) goto Label_4081; // 0xfee JumpB
	var_66_bool = 0; // 0xfef MovB
	return 2; // 0xff0 Return
	
Label_4081:
	var_71_bool = 0; var_72_object = Obj(); // 0xff1 PushV
	var_72_object = var_68_object; // 0xff2 Mov
	func_4370(var_72_object); // 0xff3 NEW_2
	var_66_bool = var_71_bool; // 0xff4 Mov
	return 2; // 0xff6 Return
}


func_1003(var_0_object, var_438_int, var_439_object)
{
	var_441_object = Obj(); var_442_bool = 0; var_443_int = 0; var_444_bool = 0; var_445_object = Obj(); var_446_bool = 0; var_447_int = 0; var_448_bool = 0; // 0x3eb PushV
	var_0_object = var_439_object; // 0x3ec TMov
	var_449_bool = 0; var_450_object = Obj(); var_451_float = 0; // 0x3ed PushV
	var_450_object = var_439_object; // 0x3ee Mov
	var_451_float = 70.0; // 0x3ef MovF
	func_4384(var_450_object, var_451_float); // 0x3f0 NEW_2
	var_452_bool = var_449_bool == 0; // 0x3f2 Not
	if(var_452_bool == 0) goto Label_1014; // 0x3f3 JumpB
	var_438_int = -2; // 0x3f4 MovI
	return 8; // 0x3f5 Return
	
Label_1014:
	CreateDialog(var_445_object); // 0x3f6 Func
	var_453_int = 0; // 0x3f8 PushV
	func_4848(var_453_int); // 0x3f9 NEW_2
	SetNPCName(var_453_int); // 0x3fb ObjFunc
	var_454_int = 0; // 0x3fd PushV
	func_4846(var_454_int); // 0x3fe NEW_2
	SetNPCDescription(var_454_int); // 0x400 ObjFunc
	var_455_string = ""; // 0x402 PushV
	func_4850(var_455_string); // 0x403 NEW_2
	SetPhoto(var_455_string); // 0x405 ObjFunc
	var_456_string = ""; // 0x407 PushV
	func_4852(var_456_string); // 0x408 NEW_2
	SetPhoto2(var_456_string); // 0x40a ObjFunc
	var_457_int = 0; // 0x40c PushV
	func_5712(var_457_int); // 0x40d NEW_2
	SetPlayerName(var_457_int); // 0x40f ObjFunc
	var_447_int = -1; // 0x411 MovI
	IsOverrideActive(var_446_bool); // 0x412 Func
	var_458_bool = var_446_bool; // 0x414 Push
	if(var_458_bool == 0) goto Label_1048; // 0x415 JumpB
	var_438_int = -2; // 0x416 MovI
	return 8; // 0x417 Return
	
Label_1048:
	DoDialog(var_445_object); // 0x418 Func
	var_459_bool = 0; var_460_object = Obj(); // 0x41a PushV
	var_461_object = Obj(); // 0x41b PushV
	func_4662(var_461_object); // 0x41c NEW_2
	var_460_object = var_461_object; // 0x41d Mov
	func_4471(var_459_bool, var_460_object); // 0x41f NEW_2
	var_462_object = Obj(); var_463_object = Obj(); // 0x421 PushV
	var_462_object = var_439_object; // 0x422 Mov
	var_463_object = var_445_object; // 0x423 Mov
	TaskCall(3); // 0x424 TaskCall
	func_1084(var_464_object, var_465_object, var_466_string, var_467_bool, var_462_object, var_463_object); // 0x425 NEW_2
	TaskReturn(); // 0x426 TaskReturn
	IsDialogEnd(var_448_bool); // 0x428 ObjFunc
	
Label_1066:
	var_510_bool = var_448_bool == 0; // 0x42a Not
	if(var_510_bool == 0) goto Label_1073; // 0x42b JumpB
	sync(); // 0x42c Func
	IsDialogEnd(var_448_bool); // 0x42e ObjFunc
	goto Label_1066; // 0x430 Jump
	
Label_1073:
	var_511_object = Obj(); // 0x431 PushV
	var_511_object = var_439_object; // 0x432 Mov
	func_4453(); // 0x433 NEW_2
	StopDialog(var_445_object); // 0x435 Func
	GetReturnValue(var_447_int); // 0x437 ObjFunc
	var_438_int = var_447_int; // 0x439 Mov
	return 8; // 0x43a Return
}


func_1515(var_0_object, var_514_int, var_515_object)
{
	var_517_object = Obj(); var_518_bool = 0; var_519_int = 0; var_520_bool = 0; var_521_object = Obj(); var_522_bool = 0; var_523_int = 0; var_524_bool = 0; // 0x5eb PushV
	var_0_object = var_515_object; // 0x5ec TMov
	var_525_bool = 0; var_526_object = Obj(); var_527_float = 0; // 0x5ed PushV
	var_526_object = var_515_object; // 0x5ee Mov
	var_527_float = 70.0; // 0x5ef MovF
	func_4384(var_526_object, var_527_float); // 0x5f0 NEW_2
	var_528_bool = var_525_bool == 0; // 0x5f2 Not
	if(var_528_bool == 0) goto Label_1526; // 0x5f3 JumpB
	var_514_int = -2; // 0x5f4 MovI
	return 8; // 0x5f5 Return
	
Label_1526:
	CreateDialog(var_521_object); // 0x5f6 Func
	var_529_int = 0; // 0x5f8 PushV
	func_4848(var_529_int); // 0x5f9 NEW_2
	SetNPCName(var_529_int); // 0x5fb ObjFunc
	var_530_int = 0; // 0x5fd PushV
	func_4846(var_530_int); // 0x5fe NEW_2
	SetNPCDescription(var_530_int); // 0x600 ObjFunc
	var_531_string = ""; // 0x602 PushV
	func_4850(var_531_string); // 0x603 NEW_2
	SetPhoto(var_531_string); // 0x605 ObjFunc
	var_532_string = ""; // 0x607 PushV
	func_4852(var_532_string); // 0x608 NEW_2
	SetPhoto2(var_532_string); // 0x60a ObjFunc
	var_533_int = 0; // 0x60c PushV
	func_5712(var_533_int); // 0x60d NEW_2
	SetPlayerName(var_533_int); // 0x60f ObjFunc
	var_523_int = -1; // 0x611 MovI
	IsOverrideActive(var_522_bool); // 0x612 Func
	var_534_bool = var_522_bool; // 0x614 Push
	if(var_534_bool == 0) goto Label_1560; // 0x615 JumpB
	var_514_int = -2; // 0x616 MovI
	return 8; // 0x617 Return
	
Label_1560:
	DoDialog(var_521_object); // 0x618 Func
	var_535_bool = 0; var_536_object = Obj(); // 0x61a PushV
	var_537_object = Obj(); // 0x61b PushV
	func_4662(var_537_object); // 0x61c NEW_2
	var_536_object = var_537_object; // 0x61d Mov
	func_4471(var_535_bool, var_536_object); // 0x61f NEW_2
	var_538_object = Obj(); var_539_object = Obj(); // 0x621 PushV
	var_538_object = var_515_object; // 0x622 Mov
	var_539_object = var_521_object; // 0x623 Mov
	TaskCall(5); // 0x624 TaskCall
	func_1596(var_540_object, var_541_object, var_542_string, var_543_bool, var_538_object, var_539_object); // 0x625 NEW_2
	TaskReturn(); // 0x626 TaskReturn
	IsDialogEnd(var_524_bool); // 0x628 ObjFunc
	
Label_1578:
	var_623_bool = var_524_bool == 0; // 0x62a Not
	if(var_623_bool == 0) goto Label_1585; // 0x62b JumpB
	sync(); // 0x62c Func
	IsDialogEnd(var_524_bool); // 0x62e ObjFunc
	goto Label_1578; // 0x630 Jump
	
Label_1585:
	var_624_object = Obj(); // 0x631 PushV
	var_624_object = var_515_object; // 0x632 Mov
	func_4453(); // 0x633 NEW_2
	StopDialog(var_521_object); // 0x635 Func
	GetReturnValue(var_523_int); // 0x637 ObjFunc
	var_514_int = var_523_int; // 0x639 Mov
	return 8; // 0x63a Return
}


func_3571(var_0_object, var_1_object, var_2_object, var_3_string, var_803_object, var_804_object)
{
	var_0_object = var_804_object; // 0xdf4 TMov
	var_1_object = var_803_object; // 0xdf5 TMov
	var_3_string = 0; // 0xdf6 TMovB
	var_809_int = 1; // 0xdf7 PushI
	if(var_809_int == 0) goto Label_3604; // 0xdf8 JumpB
	var_810_string = ""; // 0xdf9 PushV
	var_810_string = "Neutral"; // 0xdfa MovS
	func_3634(var_804_object, var_810_string); // 0xdfb NEW_2
	var_818_int = 539303; // 0xdfd PushI
	SetMessage(var_818_int); // 0xdfe TObjFunc
	ClearReplies(); // 0xe00 TObjFunc
	var_819_int = 542544; // 0xe02 PushI
	var_820_int = 44940; // 0xe03 PushI
	var_821_int = 44939; // 0xe04 PushI
	AddReply(var_819_int, var_820_int, var_821_int); // 0xe05 TObjFunc
	var_822_int = 539304; // 0xe07 PushI
	var_823_int = -1; // 0xe08 PushI
	var_824_int = 41247; // 0xe09 PushI
	AddReply(var_822_int, var_823_int, var_824_int); // 0xe0a TObjFunc
	var_825_int = 542543; // 0xe0c PushI
	var_826_int = -1; // 0xe0d PushI
	var_827_int = 44938; // 0xe0e PushI
	AddReply(var_825_int, var_826_int, var_827_int); // 0xe0f TObjFunc
	goto Label_3604; // 0xe11 Jump
	
Label_3604:
	var_828_bool = 0; // 0xe14 PushV
	func_4854(var_828_bool); // 0xe15 NEW_2
	if(var_828_bool == 0) goto Label_3619; // 0xe17 JumpB
	
Label_3608:
	lshWaitForAnimEnd(); // 0xe18 Func
	var_829_string = var_3_string; // 0xe1a PushT
	if(var_829_string == 0) goto Label_3613; // 0xe1b JumpB
	goto Label_3618; // 0xe1c Jump
	
Label_3618:
	goto Label_3633; // 0xe22 Jump
	
Label_3633:
	return 0; // 0xe31 Return
	
Label_3613:
	var_830_string = ""; // 0xe1d PushV
	var_830_string = var_2_object; // 0xe1e MovT
	func_4609(var_830_string); // 0xe1f NEW_2
	goto Label_3608; // 0xe21 Jump
	
Label_3619:
	var_831_string = "all"; // 0xe23 PushS
	var_832_string = "idle"; // 0xe24 PushS
	PlayAnimation(var_831_string, var_832_string); // 0xe25 Func
	
Label_3623:
	WaitForAnimEnd(); // 0xe27 Func
	var_833_string = var_3_string; // 0xe29 PushT
	if(var_833_string == 0) goto Label_3628; // 0xe2a JumpB
	goto Label_3633; // 0xe2b Jump
	
Label_3628:
	var_834_string = "all"; // 0xe2c PushS
	var_835_string = "idle"; // 0xe2d PushS
	PlayAnimation(var_834_string, var_835_string); // 0xe2e Func
	goto Label_3623; // 0xe30 Jump
}


func_5621(var_76_object)
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x15f5 PushV
	GetDiaryRoot(var_78_object); // 0x15f6 Func
	var_79_bool = var_78_object == 0; // 0x15f8 Not
	if(var_79_bool == 0) goto Label_5631; // 0x15f9 JumpB
	var_80_string = "Can't retrieve diary root"; // 0x15fa PushS
	Trace(var_80_string); // 0x15fb Func
	var_76_object = 0; // 0x15fd MovB
	return 2; // 0x15fe Return
	
Label_5631:
	var_76_object = var_78_object; // 0x15ff Mov
	return 2; // 0x1600 Return
}


func_4088(var_0_object)
{
	var_118_float = GetByIndex(var_0_object, 0); // 0xff8 PushE
	var_119_float = GetByIndex(var_0_object, 2); // 0xff9 PushE
	RotateAsync(var_118_float, var_119_float); // 0xffa Func
	return 0; // 0xffc Return
}


func_4093(var_49_bool)
{
	var_50_object = Obj(); var_51_bool = 0; var_52_object = Obj(); var_53_bool = 0; // 0xffd PushV
	var_54_string = "player"; // 0xffe PushS
	FindActor(var_52_object, var_54_string); // 0xfff Func
	var_55_bool = var_52_object == 0; // 0x1001 Not
	if(var_55_bool == 0) goto Label_4101; // 0x1002 JumpB
	var_49_bool = 0; // 0x1003 MovB
	return 4; // 0x1004 Return
	
Label_4101:
	var_56_float = 0; var_57_object = Obj(); // 0x1005 PushV
	var_57_object = var_52_object; // 0x1006 Mov
	func_4311(var_57_object); // 0x1007 NEW_2
	var_64_float = 90000.0; // 0x1009 PushF
	var_65_bool = var_56_float > var_64_float; // 0x100a GT
	if(var_65_bool == 0) goto Label_4110; // 0x100b JumpB
	var_49_bool = 0; // 0x100c MovB
	return 4; // 0x100d Return
	
Label_4110:
	CanSee(var_53_bool, var_52_object); // 0x100e Func
	var_49_bool = var_53_bool; // 0x1010 Mov
	return 4; // 0x1011 Return
}


