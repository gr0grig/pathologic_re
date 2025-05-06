task_0_event_0()
{
	var_0_object = Obj(); var_1_int = 0; var_2_int = 0; var_3_int = 0; var_4_string = ""; var_5_object = Obj(); var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_string = ""; var_11_object = Obj(); // 0x6 PushV
	var_7_int = 0; // 0x7 MovI
	var_8_int = 0; // 0x8 MovI
	ClientToScreen(var_7_int, var_8_int); // 0x9 Func
	FindWindow(var_6_object, var_7_int, var_8_int); // 0xb Func
	var_12_bool = var_6_object == 0; // 0xd Not
	if(var_12_bool == 0) goto Label_16; // 0xe JumpB
	return 12; // 0xf Return
	
Label_16:
	GetTooltipType(var_9_int); // 0x10 ObjFunc
	GetTooltipText(var_10_string); // 0x12 ObjFunc
	GetTooltipObject(var_11_object); // 0x14 ObjFunc
	var_13_int = 0; var_14_string = ""; var_15_object = Obj(); var_16_int = 0; var_17_int = 0; var_18_float = 0; // 0x16 PushV
	var_13_int = var_9_int; // 0x17 Mov
	var_14_string = var_10_string; // 0x18 Mov
	var_15_object = var_11_object; // 0x19 Mov
	var_16_int = var_7_int; // 0x1a Mov
	var_17_int = var_8_int; // 0x1b Mov
	var_18_float = 1; // 0x1c MovI
	func_210(var_13_int, var_14_string, var_15_object, var_16_int, var_17_int, var_18_float); // 0x1d NEW_2
	var_713_string = "default"; // 0x1f PushS
	var_714_int = 0; // 0x20 PushI
	var_715_int = 0; // 0x21 PushI
	Blit(var_713_string, var_714_int, var_715_int); // 0x22 Func
	return 12; // 0x24 Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetOwnerDraw(var_0_bool); // 0x1 Func
	ProcessEvents(); // 0x3 Func
	return 0; // 0x5 Return
}


func_194(var_442_int)
{
	var_443_object = Obj(); var_444_bool = 0; var_445_int = 0; var_446_object = Obj(); var_447_bool = 0; var_448_int = 0; // 0xc2 PushV
	GetContainer(var_446_object); // 0xc3 Func
	var_449_string = "barter"; // 0xc5 PushS
	HasProperty(var_449_string, var_447_bool); // 0xc6 ObjFunc
	var_450_bool = var_447_bool == 0; // 0xc8 Not
	if(var_450_bool == 0) goto Label_204; // 0xc9 JumpB
	var_442_int = 0; // 0xca MovI
	return 6; // 0xcb Return
	
Label_204:
	var_451_string = "barter"; // 0xcc PushS
	GetProperty(var_451_string, var_448_int); // 0xcd ObjFunc
	var_442_int = var_448_int; // 0xcf Mov
	return 6; // 0xd0 Return
}


func_859(var_264_int, var_265_int, var_266_object, var_267_float)
{
	var_268_int = 0; var_269_object = Obj(); var_270_string = ""; var_271_string = ""; var_272_int = 0; var_273_int = 0; var_274_float = 0; var_275_int = 0; var_276_float = 0; var_277_float = 0; var_278_int = 0; var_279_int = 0; var_280_int = 0; var_281_int = 0; var_282_int = 0; var_283_int = 0; var_284_int = 0; var_285_int = 0; var_286_object = Obj(); var_287_string = ""; var_288_string = ""; var_289_int = 0; var_290_int = 0; var_291_float = 0; var_292_int = 0; var_293_float = 0; var_294_float = 0; var_295_int = 0; var_296_int = 0; var_297_int = 0; var_298_int = 0; var_299_int = 0; var_300_int = 0; var_301_int = 0; // 0x35b PushV
	var_302_bool = var_266_object == 0; // 0x35c Not
	if(var_302_bool == 0) goto Label_863; // 0x35d JumpB
	return 34; // 0x35e Return
	
Label_863:
	var_267_float = 1; // 0x35f MovI
	size(var_285_int); // 0x360 ObjFunc
	var_303_bool = var_285_int == 0; // 0x362 Not
	if(var_303_bool == 0) goto Label_869; // 0x363 JumpB
	return 34; // 0x364 Return
	
Label_869:
	var_304_int = var_285_int; // 0x365 Push
	if(var_304_int == 0) goto Label_932; // 0x366 JumpB
	var_290_int = 0; // 0x367 MovI
	var_291_float = 0; // 0x368 MovI
	var_292_int = 0; // 0x369 MovI
	
Label_874:
	var_305_bool = var_292_int < var_285_int; // 0x36a LT
	if(var_305_bool == 0) goto Label_887; // 0x36b JumpB
	get(var_286_object, var_292_int); // 0x36c ObjFunc
	GetTime(var_293_float); // 0x36e ObjFunc
	var_306_bool = var_293_float > var_291_float; // 0x370 GT
	if(var_306_bool == 0) goto Label_884; // 0x371 JumpB
	var_291_float = var_293_float; // 0x372 Mov
	var_290_int = var_292_int; // 0x373 Mov
	
Label_884:
	var_307_int = 1; // 0x374 PushI
	var_292_int = var_292_int + var_307_int; // 0x375 Add2
	goto Label_874; // 0x376 Jump
	
Label_887:
	get(var_286_object, var_290_int); // 0x377 ObjFunc
	GetTextID(var_289_int); // 0x379 ObjFunc
	GetStringByID(var_288_string, var_289_int); // 0x37b Func
	GetTime(var_294_float); // 0x37d ObjFunc
	var_308_int = 0; // 0x37f PushV
	var_308_int = var_294_float; // 0x380 Mov
	var_295_int = var_308_int; // 0x381 Mov
	var_309_int = 60; // 0x383 PushI
	var_310_int = var_294_float - var_295_int; // 0x384 Sub
	var_296_int = var_309_int * var_310_int; // 0x385 Mult2
	var_311_int = 10; // 0x386 PushI
	var_312_bool = var_296_int < var_311_int; // 0x387 LT
	if(var_312_bool == 0) goto Label_914; // 0x388 JumpB
	var_313_int = 24; // 0x389 PushI
	var_314_int = var_295_int / var_313_int; // 0x38a Mod
	var_315_string = ":0"; // 0x38b PushS
	var_316_int = var_314_int + var_315_string; // 0x38c Add
	var_317_int = var_316_int + var_296_int; // 0x38d Add
	var_318_string = " "; // 0x38e PushS
	var_319_int = var_317_int + var_318_string; // 0x38f Add
	var_287_string = var_287_string + var_319_int; // 0x390 Add2
	goto Label_922; // 0x391 Jump
	
Label_922:
	var_287_string = var_287_string + var_288_string; // 0x39a Add2
	remove(var_290_int); // 0x39b ObjFunc
	var_320_int = -1; // 0x39d PushI
	var_285_int = var_285_int + var_320_int; // 0x39e Add2
	var_321_int = var_285_int; // 0x39f Push
	if(var_321_int == 0) goto Label_931; // 0x3a0 JumpB
	var_322_string = "

"; // 0x3a1 PushS
	var_287_string = var_287_string + var_322_string; // 0x3a2 Add2
	
Label_931:
	goto Label_869; // 0x3a3 Jump
	
Label_914:
	var_323_int = 24; // 0x392 PushI
	var_324_int = var_295_int / var_323_int; // 0x393 Mod
	var_325_string = ":"; // 0x394 PushS
	var_326_int = var_324_int + var_325_string; // 0x395 Add
	var_327_int = var_326_int + var_296_int; // 0x396 Add
	var_328_string = " "; // 0x397 PushS
	var_329_int = var_327_int + var_328_string; // 0x398 Add
	var_287_string = var_287_string + var_329_int; // 0x399 Add2
	
Label_932:
	var_330_string = "default"; // 0x3a4 PushS
	var_331_int = 218; // 0x3a5 PushI
	GetTextHeightInWidth(var_297_int, var_330_string, var_331_int, var_287_string); // 0x3a6 Func
	var_332_int = 32; // 0x3a8 PushI
	var_297_int = var_297_int + var_332_int; // 0x3a9 Add2
	GetScreenSize(var_298_int, var_299_int); // 0x3aa Func
	var_333_int = var_298_int - var_264_int; // 0x3ac Sub
	var_334_int = 250; // 0x3ad PushI
	var_335_bool = var_333_int > var_334_int; // 0x3ae GT
	if(var_335_bool == 0) goto Label_946; // 0x3af JumpB
	var_300_int = var_264_int; // 0x3b0 Mov
	goto Label_948; // 0x3b1 Jump
	
Label_948:
	var_336_bool = var_265_int > var_297_int; // 0x3b4 GT
	if(var_336_bool == 0) goto Label_952; // 0x3b5 JumpB
	var_301_int = var_265_int - var_297_int; // 0x3b6 Sub2
	goto Label_959; // 0x3b7 Jump
	
Label_959:
	ScreenToClient(var_300_int, var_301_int); // 0x3bf Func
	var_337_int = 0; var_338_int = 0; var_339_int = 0; var_340_int = 0; var_341_float = 0; // 0x3c1 PushV
	var_337_int = var_300_int; // 0x3c2 Mov
	var_338_int = var_301_int; // 0x3c3 Mov
	var_339_int = 250; // 0x3c4 MovI
	var_340_int = var_297_int; // 0x3c5 Mov
	var_341_float = var_267_float; // 0x3c6 Mov
	func_270(var_337_int, var_338_int, var_339_int, var_340_int, var_341_float); // 0x3c7 NEW_2
	var_342_string = "default"; // 0x3c9 PushS
	var_343_int = 16; // 0x3ca PushI
	var_344_int = var_300_int + var_343_int; // 0x3cb Add
	var_345_int = 16; // 0x3cc PushI
	var_346_int = var_301_int + var_345_int; // 0x3cd Add
	var_347_int = 218; // 0x3ce PushI
	var_348_float = 0.64706; // 0x3cf PushF
	var_349_float = 0.64706; // 0x3d0 PushF
	var_350_float = 0.64706; // 0x3d1 PushF
	PrintInWidth(var_297_int, var_342_string, var_344_int, var_346_int, var_347_int, var_287_string, var_348_float, var_349_float, var_350_float, var_267_float); // 0x3d2 Func
	return 34; // 0x3d4 Return
	
Label_952:
	var_301_int = var_265_int; // 0x3b8 Mov
	var_351_int = var_301_int + var_297_int; // 0x3b9 Add
	var_352_int = 600; // 0x3ba PushI
	var_353_bool = var_351_int > var_352_int; // 0x3bb GT
	if(var_353_bool == 0) goto Label_959; // 0x3bc JumpB
	var_354_int = 600; // 0x3bd PushI
	var_301_int = var_354_int - var_297_int; // 0x3be Sub2
	
Label_946:
	var_355_int = 250; // 0x3b2 PushI
	var_300_int = var_264_int - var_355_int; // 0x3b3 Sub2
}


func_133(var_472_int)
{
	var_473_float = 0; var_474_float = 0; // 0x85 PushV
	GetGameTime(var_474_float); // 0x86 Func
	var_475_int = 1; // 0x88 PushI
	var_476_int = 0; // 0x89 PushV
	var_477_int = 24; // 0x8a PushI
	var_476_int = var_474_float / var_474_float; // 0x8b Div2
	var_472_int = var_475_int + var_476_int; // 0x8c Add2
	return 2; // 0x8d Return
}


func_582(var_358_int, var_359_int, var_360_object, var_361_bool, var_362_float)
{
	var_363_object = Obj(); var_364_float = 0; var_365_int = 0; var_366_int = 0; var_367_int = 0; var_368_float = 0; var_369_string = ""; var_370_bool = 0; var_371_int = 0; var_372_string = ""; var_373_int = 0; var_374_string = ""; var_375_bool = 0; var_376_bool = 0; var_377_int = 0; var_378_int = 0; var_379_string = ""; var_380_bool = 0; var_381_float = 0; var_382_float = 0; var_383_float = 0; var_384_string = ""; var_385_string = ""; var_386_int = 0; var_387_int = 0; var_388_float = 0; var_389_float = 0; var_390_string = ""; var_391_string = ""; var_392_int = 0; var_393_int = 0; var_394_int = 0; var_395_int = 0; var_396_int = 0; var_397_int = 0; var_398_object = Obj(); var_399_float = 0; var_400_int = 0; var_401_int = 0; var_402_int = 0; var_403_float = 0; var_404_string = ""; var_405_bool = 0; var_406_int = 0; var_407_string = ""; var_408_int = 0; var_409_string = ""; var_410_bool = 0; var_411_bool = 0; var_412_int = 0; var_413_int = 0; var_414_string = ""; var_415_bool = 0; var_416_float = 0; var_417_float = 0; var_418_float = 0; var_419_string = ""; var_420_string = ""; var_421_int = 0; var_422_int = 0; var_423_float = 0; var_424_float = 0; var_425_string = ""; var_426_string = ""; var_427_int = 0; var_428_int = 0; var_429_int = 0; var_430_int = 0; var_431_int = 0; var_432_int = 0; // 0x246 PushV
	var_433_bool = var_360_object == 0; // 0x247 Not
	if(var_433_bool == 0) goto Label_586; // 0x248 JumpB
	return 70; // 0x249 Return
	
Label_586:
	GetContainer(var_398_object); // 0x24a Func
	GetGameTime(var_399_float); // 0x24c Func
	var_434_int = 1; // 0x24e PushI
	var_435_int = 24; // 0x24f PushI
	var_436_float = var_399_float / var_435_int; // 0x250 Div
	var_400_int = var_434_int + var_436_float; // 0x251 Add2
	var_437_int = 0; var_438_object = Obj(); // 0x252 PushV
	var_438_object = var_360_object; // 0x253 Mov
	func_39(var_438_object); // 0x254 NEW_2
	var_401_int = var_437_int; // 0x255 Mov
	var_439_int = 0; var_440_object = Obj(); var_441_int = 0; // 0x257 PushV
	var_440_object = var_360_object; // 0x258 Mov
	var_442_int = 0; // 0x259 PushV
	func_194(var_442_int); // 0x25a NEW_2
	var_441_int = var_442_int; // 0x25b Mov
	func_44(var_439_int, var_440_object, var_441_int); // 0x25d NEW_2
	var_402_int = var_439_int; // 0x25e Mov
	var_507_bool = var_361_bool; // 0x260 Push
	if(var_507_bool == 0) goto Label_621; // 0x261 JumpB
	var_508_float = 0; var_509_object = Obj(); var_510_int = 0; var_511_int = 0; // 0x262 PushV
	var_509_object = var_398_object; // 0x263 Mov
	var_510_int = var_400_int; // 0x264 Mov
	var_512_int = 0; // 0x265 PushV
	func_194(var_512_int); // 0x266 NEW_2
	var_511_int = var_512_int; // 0x267 Mov
	func_142(var_509_object, var_510_int, var_511_int); // 0x269 NEW_2
	var_403_float = var_508_float; // 0x26a Mov
	goto Label_631; // 0x26c Jump
	
Label_631:
	var_402_int = var_402_int * var_403_float; // 0x277 Mult2
	var_529_string = "Description"; // 0x278 PushS
	HasInvItemProperty(var_405_bool, var_401_int, var_529_string); // 0x279 Func
	var_530_bool = var_405_bool; // 0x27b Push
	if(var_530_bool == 0) goto Label_643; // 0x27c JumpB
	var_531_string = "Description"; // 0x27d PushS
	GetInvItemProperty(var_406_int, var_401_int, var_531_string); // 0x27e Func
	GetStringByID(var_404_string, var_406_int); // 0x280 Func
	goto Label_644; // 0x282 Jump
	
Label_644:
	var_532_string = "
"; // 0x284 PushS
	var_404_string = var_404_string + var_532_string; // 0x285 Add2
	var_533_int = 5; // 0x286 PushI
	GetStringByID(var_407_string, var_533_int); // 0x287 Func
	var_534_string = ": "; // 0x289 PushS
	var_535_int = var_407_string + var_534_string; // 0x28a Add
	var_536_int = var_535_int + var_402_int; // 0x28b Add
	var_404_string = var_404_string + var_536_int; // 0x28c Add2
	var_537_string = "default"; // 0x28d PushS
	var_538_int = 218; // 0x28e PushI
	GetTextHeightInWidth(var_408_int, var_537_string, var_538_int, var_404_string); // 0x28f Func
	var_539_int = 266; // 0x291 PushI
	var_408_int = var_408_int + var_539_int; // 0x292 Add2
	var_540_string = "HasDurability"; // 0x293 PushS
	HasInvItemProperty(var_410_bool, var_401_int, var_540_string); // 0x294 Func
	var_541_string = "durability"; // 0x296 PushS
	HasProperty(var_411_bool, var_541_string); // 0x297 ObjFunc
	var_542_bool = 0; // 0x299 PushV
	var_542_bool = 1; // 0x29a MovB
	var_543_bool = var_411_bool; // 0x29b Push
	if(var_543_bool == 0) goto Label_672; // 0x29c JumpB
	var_544_bool = var_410_bool; // 0x29d Push
	if(var_544_bool == 0) goto Label_672; // 0x29e JumpB
	var_542_bool = 0; // 0x29f MovB
	
Label_672:
	if(var_542_bool == 0) goto Label_693; // 0x2a0 JumpB
	var_545_bool = var_411_bool; // 0x2a1 Push
	if(var_545_bool == 0) goto Label_679; // 0x2a2 JumpB
	var_546_string = "durability"; // 0x2a3 PushS
	GetProperty(var_412_int, var_546_string); // 0x2a4 ObjFunc
	goto Label_680; // 0x2a6 Jump
	
Label_680:
	var_547_int = 7; // 0x2a8 PushI
	GetStringByID(var_409_string, var_547_int); // 0x2a9 Func
	var_548_string = " "; // 0x2ab PushS
	var_549_int = var_548_string + var_412_int; // 0x2ac Add
	var_550_string = "%"; // 0x2ad PushS
	var_551_int = var_549_int + var_550_string; // 0x2ae Add
	var_409_string = var_409_string + var_551_int; // 0x2af Add2
	var_552_string = "default"; // 0x2b0 PushS
	var_553_int = 218; // 0x2b1 PushI
	GetTextHeightInWidth(var_413_int, var_552_string, var_553_int, var_409_string); // 0x2b2 Func
	var_408_int = var_408_int + var_413_int; // 0x2b4 Add2
	
Label_693:
	var_415_bool = 0; // 0x2b5 MovB
	var_554_string = ""; var_555_object = Obj(); // 0x2b6 PushV
	var_555_object = var_360_object; // 0x2b7 Mov
	func_123(var_554_string, var_555_object); // 0x2b8 NEW_2
	var_556_string = "grass_combination"; // 0x2ba PushS
	var_557_bool = var_554_string == var_556_string; // 0x2bb Eq
	if(var_557_bool == 0) goto Label_735; // 0x2bc JumpB
	var_415_bool = 1; // 0x2bd MovB
	var_558_string = "im_inc"; // 0x2be PushS
	GetProperty(var_416_float, var_558_string); // 0x2bf ObjFunc
	var_559_string = "hl_inc"; // 0x2c1 PushS
	GetProperty(var_417_float, var_559_string); // 0x2c2 ObjFunc
	var_560_int = 8; // 0x2c4 PushI
	GetStringByID(var_419_string, var_560_int); // 0x2c5 Func
	var_561_int = 9; // 0x2c7 PushI
	GetStringByID(var_420_string, var_561_int); // 0x2c8 Func
	var_562_int = 100; // 0x2ca PushI
	var_421_int = var_416_float * var_562_int; // 0x2cb Mult2
	var_563_string = " "; // 0x2cc PushS
	var_564_int = var_419_string + var_563_string; // 0x2cd Add
	var_565_int = var_564_int + var_421_int; // 0x2ce Add
	var_566_string = "%
"; // 0x2cf PushS
	var_414_string = var_565_int + var_566_string; // 0x2d0 Add2
	var_567_int = 100; // 0x2d1 PushI
	var_421_int = var_417_float * var_567_int; // 0x2d2 Mult2
	var_568_string = " "; // 0x2d3 PushS
	var_569_int = var_420_string + var_568_string; // 0x2d4 Add
	var_570_int = var_569_int + var_421_int; // 0x2d5 Add
	var_571_string = "%
"; // 0x2d6 PushS
	var_572_int = var_570_int + var_571_string; // 0x2d7 Add
	var_414_string = var_414_string + var_572_int; // 0x2d8 Add2
	var_573_string = "default"; // 0x2d9 PushS
	var_574_int = 218; // 0x2da PushI
	GetTextHeightInWidth(var_422_int, var_573_string, var_574_int, var_414_string); // 0x2db Func
	var_408_int = var_408_int + var_422_int; // 0x2dd Add2
	goto Label_775; // 0x2de Jump
	
Label_775:
	GetScreenSize(var_429_int, var_430_int); // 0x307 Func
	var_575_int = var_429_int - var_358_int; // 0x309 Sub
	var_576_int = 250; // 0x30a PushI
	var_577_bool = var_575_int > var_576_int; // 0x30b GT
	if(var_577_bool == 0) goto Label_783; // 0x30c JumpB
	var_431_int = var_358_int; // 0x30d Mov
	goto Label_785; // 0x30e Jump
	
Label_785:
	var_578_bool = var_359_int > var_408_int; // 0x311 GT
	if(var_578_bool == 0) goto Label_789; // 0x312 JumpB
	var_432_int = var_359_int - var_408_int; // 0x313 Sub2
	goto Label_796; // 0x314 Jump
	
Label_796:
	ScreenToClient(var_431_int, var_432_int); // 0x31c Func
	var_579_int = 0; var_580_int = 0; var_581_int = 0; var_582_int = 0; var_583_float = 0; // 0x31e PushV
	var_579_int = var_431_int; // 0x31f Mov
	var_580_int = var_432_int; // 0x320 Mov
	var_581_int = 250; // 0x321 MovI
	var_582_int = var_408_int; // 0x322 Mov
	var_583_float = var_362_float; // 0x323 Mov
	func_270(var_579_int, var_580_int, var_581_int, var_582_int, var_583_float); // 0x324 NEW_2
	var_584_int = 0; var_585_int = 0; var_586_object = Obj(); var_587_float = 0; // 0x326 PushV
	var_588_int = 16; // 0x327 PushI
	var_584_int = var_431_int + var_588_int; // 0x328 Add2
	var_589_int = 16; // 0x329 PushI
	var_585_int = var_432_int + var_589_int; // 0x32a Add2
	var_586_object = var_360_object; // 0x32b Mov
	var_587_float = var_362_float; // 0x32c Mov
	func_297(var_584_int, var_585_int, var_586_object, var_587_float); // 0x32d NEW_2
	var_590_int = 250; // 0x32f PushI
	var_432_int = var_432_int + var_590_int; // 0x330 Add2
	var_591_string = "default"; // 0x331 PushS
	var_592_int = 16; // 0x332 PushI
	var_593_int = var_431_int + var_592_int; // 0x333 Add
	var_594_int = 218; // 0x334 PushI
	var_595_float = 0.64706; // 0x335 PushF
	var_596_float = 0.64706; // 0x336 PushF
	var_597_float = 0.64706; // 0x337 PushF
	PrintInWidth(var_408_int, var_591_string, var_593_int, var_432_int, var_594_int, var_404_string, var_595_float, var_596_float, var_597_float, var_362_float); // 0x338 Func
	var_432_int = var_432_int + var_408_int; // 0x33a Add2
	var_598_bool = 0; // 0x33b PushV
	var_598_bool = 1; // 0x33c MovB
	var_599_bool = var_411_bool; // 0x33d Push
	if(var_599_bool == 0) goto Label_834; // 0x33e JumpB
	var_600_bool = var_410_bool; // 0x33f Push
	if(var_600_bool == 0) goto Label_834; // 0x340 JumpB
	var_598_bool = 0; // 0x341 MovB
	
Label_834:
	if(var_598_bool == 0) goto Label_845; // 0x342 JumpB
	var_601_string = "default"; // 0x343 PushS
	var_602_int = 16; // 0x344 PushI
	var_603_int = var_431_int + var_602_int; // 0x345 Add
	var_604_int = 218; // 0x346 PushI
	var_605_float = 0.64706; // 0x347 PushF
	var_606_float = 0.64706; // 0x348 PushF
	var_607_float = 0.64706; // 0x349 PushF
	PrintInWidth(var_408_int, var_601_string, var_603_int, var_432_int, var_604_int, var_409_string, var_605_float, var_606_float, var_607_float, var_362_float); // 0x34a Func
	var_432_int = var_432_int + var_408_int; // 0x34c Add2
	
Label_845:
	var_608_bool = var_415_bool; // 0x34d Push
	if(var_608_bool == 0) goto Label_857; // 0x34e JumpB
	var_609_string = "default"; // 0x34f PushS
	var_610_int = 16; // 0x350 PushI
	var_611_int = var_431_int + var_610_int; // 0x351 Add
	var_612_int = 218; // 0x352 PushI
	var_613_float = 0.64706; // 0x353 PushF
	var_614_float = 0.64706; // 0x354 PushF
	var_615_float = 0.64706; // 0x355 PushF
	PrintInWidth(var_408_int, var_609_string, var_611_int, var_432_int, var_612_int, var_414_string, var_613_float, var_614_float, var_615_float, var_362_float); // 0x356 Func
	var_432_int = var_432_int + var_408_int; // 0x358 Add2
	
Label_857:
	return 70; // 0x359 Return
	
Label_789:
	var_432_int = var_359_int; // 0x315 Mov
	var_616_int = var_432_int + var_408_int; // 0x316 Add
	var_617_int = 600; // 0x317 PushI
	var_618_bool = var_616_int > var_617_int; // 0x318 GT
	if(var_618_bool == 0) goto Label_796; // 0x319 JumpB
	var_619_int = 600; // 0x31a PushI
	var_432_int = var_619_int - var_408_int; // 0x31b Sub2
	
Label_783:
	var_620_int = 250; // 0x30f PushI
	var_431_int = var_358_int - var_620_int; // 0x310 Sub2
	
Label_735:
	var_621_string = ""; var_622_object = Obj(); // 0x2df PushV
	var_622_object = var_360_object; // 0x2e0 Mov
	func_123(var_621_string, var_622_object); // 0x2e1 NEW_2
	var_623_string = "organ_combination"; // 0x2e3 PushS
	var_624_bool = var_621_string == var_623_string; // 0x2e4 Eq
	if(var_624_bool == 0) goto Label_775; // 0x2e5 JumpB
	var_415_bool = 1; // 0x2e6 MovB
	var_625_string = "DiseaseRate"; // 0x2e7 PushS
	GetProperty(var_423_float, var_625_string); // 0x2e8 ObjFunc
	var_626_string = "HealthIncrease"; // 0x2ea PushS
	GetProperty(var_424_float, var_626_string); // 0x2eb ObjFunc
	var_627_int = 11; // 0x2ed PushI
	GetStringByID(var_425_string, var_627_int); // 0x2ee Func
	var_628_int = 13; // 0x2f0 PushI
	GetStringByID(var_426_string, var_628_int); // 0x2f1 Func
	var_629_int = 100; // 0x2f3 PushI
	var_427_int = var_423_float * var_629_int; // 0x2f4 Mult2
	var_630_string = " "; // 0x2f5 PushS
	var_631_int = var_425_string + var_630_string; // 0x2f6 Add
	var_632_int = var_631_int + var_427_int; // 0x2f7 Add
	var_633_string = "%
"; // 0x2f8 PushS
	var_414_string = var_632_int + var_633_string; // 0x2f9 Add2
	var_634_int = 100; // 0x2fa PushI
	var_427_int = var_424_float * var_634_int; // 0x2fb Mult2
	var_635_string = " "; // 0x2fc PushS
	var_636_int = var_426_string + var_635_string; // 0x2fd Add
	var_637_int = var_636_int + var_427_int; // 0x2fe Add
	var_638_string = "%
"; // 0x2ff PushS
	var_639_int = var_637_int + var_638_string; // 0x300 Add
	var_414_string = var_414_string + var_639_int; // 0x301 Add2
	var_640_string = "default"; // 0x302 PushS
	var_641_int = 218; // 0x303 PushI
	GetTextHeightInWidth(var_428_int, var_640_string, var_641_int, var_414_string); // 0x304 Func
	var_408_int = var_408_int + var_428_int; // 0x306 Add2
	
Label_679:
	var_412_int = 100; // 0x2a7 MovI
	
Label_643:
	var_404_string = "Error: Item doesnt have description (FIXME!)"; // 0x283 MovS
	
Label_621:
	var_642_float = 0; var_643_object = Obj(); var_644_int = 0; var_645_int = 0; // 0x26d PushV
	var_643_object = var_398_object; // 0x26e Mov
	var_644_int = var_400_int; // 0x26f Mov
	var_646_int = 0; // 0x270 PushV
	func_194(var_646_int); // 0x271 NEW_2
	var_645_int = var_646_int; // 0x272 Mov
	func_168(var_643_object, var_644_int, var_645_int); // 0x274 NEW_2
	var_403_float = var_642_float; // 0x275 Mov
}


func_39(var_91_int)
{
	var_93_int = 0; var_94_int = 0; // 0x27 PushV
	GetItemID(var_94_int); // 0x28 ObjFunc
	var_91_int = var_94_int; // 0x2a Mov
	return 2; // 0x2b Return
}


func_168(var_642_float, var_644_int, var_645_int)
{
	var_647_float = 0; var_648_int = 0; var_649_bool = 0; var_650_float = 0; var_651_int = 0; var_652_bool = 0; // 0xa8 PushV
	var_653_int = 0; // 0xa9 PushI
	var_654_bool = var_645_int != var_653_int; // 0xaa Neq
	if(var_654_bool == 0) goto Label_174; // 0xab JumpB
	var_642_float = 1; // 0xac MovI
	return 6; // 0xad Return
	
Label_174:
	var_650_float = 1; // 0xae MovI
	var_651_int = 1; // 0xaf MovI
	
Label_176:
	var_655_bool = var_651_int <= var_644_int; // 0xb0 LE
	if(var_655_bool == 0) goto Label_191; // 0xb1 JumpB
	var_656_string = "buyf"; // 0xb2 PushS
	var_657_int = var_656_string + var_651_int; // 0xb3 Add
	HasProperty(var_657_int, var_652_bool); // 0xb4 ObjFunc
	var_658_bool = var_652_bool; // 0xb6 Push
	if(var_658_bool == 0) goto Label_188; // 0xb7 JumpB
	var_659_string = "buyf"; // 0xb8 PushS
	var_660_int = var_659_string + var_651_int; // 0xb9 Add
	GetProperty(var_660_int, var_650_float); // 0xba ObjFunc
	
Label_188:
	var_661_int = 1; // 0xbc PushI
	var_651_int = var_651_int + var_661_int; // 0xbd Add2
	goto Label_176; // 0xbe Jump
	
Label_191:
	var_662_int = 100; // 0xbf PushI
	var_642_float = var_650_float / var_650_float; // 0xc0 Div2
	return 6; // 0xc1 Return
}


func_297(var_167_int, var_168_int, var_169_object, var_170_float)
{
	var_173_int = 0; var_174_string = ""; var_175_int = 0; var_176_string = ""; // 0x129 PushV
	var_177_bool = var_169_object == 0; // 0x12a Not
	if(var_177_bool == 0) goto Label_301; // 0x12b JumpB
	return 4; // 0x12c Return
	
Label_301:
	var_178_int = 0; var_179_object = Obj(); // 0x12d PushV
	var_179_object = var_169_object; // 0x12e Mov
	func_39(var_179_object); // 0x12f NEW_2
	var_175_int = var_178_int; // 0x130 Mov
	GetInvItemSprite2(var_176_string, var_175_int); // 0x132 Func
	var_180_int = 218; // 0x134 PushI
	var_181_int = 218; // 0x135 PushI
	StretchBlit(var_176_string, var_167_int, var_168_int, var_180_int, var_181_int, var_170_float); // 0x136 Func
	var_182_string = "border"; // 0x138 PushS
	var_183_int = 218; // 0x139 PushI
	var_184_int = 1; // 0x13a PushI
	StretchBlit(var_182_string, var_167_int, var_168_int, var_183_int, var_184_int, var_170_float); // 0x13b Func
	var_185_string = "border"; // 0x13d PushS
	var_186_int = 218; // 0x13e PushI
	var_187_int = var_168_int + var_186_int; // 0x13f Add
	var_188_int = 1; // 0x140 PushI
	var_189_int = var_187_int - var_188_int; // 0x141 Sub
	var_190_int = 218; // 0x142 PushI
	var_191_int = 1; // 0x143 PushI
	StretchBlit(var_185_string, var_167_int, var_189_int, var_190_int, var_191_int, var_170_float); // 0x144 Func
	var_192_string = "border"; // 0x146 PushS
	var_193_int = 1; // 0x147 PushI
	var_194_int = 218; // 0x148 PushI
	StretchBlit(var_192_string, var_167_int, var_168_int, var_193_int, var_194_int, var_170_float); // 0x149 Func
	var_195_string = "border"; // 0x14b PushS
	var_196_int = 218; // 0x14c PushI
	var_197_int = var_167_int + var_196_int; // 0x14d Add
	var_198_int = 1; // 0x14e PushI
	var_199_int = var_197_int - var_198_int; // 0x14f Sub
	var_200_int = 1; // 0x150 PushI
	var_201_int = 218; // 0x151 PushI
	StretchBlit(var_195_string, var_199_int, var_168_int, var_200_int, var_201_int, var_170_float); // 0x152 Func
	return 4; // 0x154 Return
}


func_44(var_439_int, var_440_object, var_441_int)
{
	var_452_int = 0; var_453_int = 0; var_454_int = 0; var_455_string = ""; var_456_bool = 0; var_457_bool = 0; var_458_int = 0; var_459_bool = 0; var_460_int = 0; var_461_int = 0; var_462_int = 0; var_463_int = 0; var_464_string = ""; var_465_bool = 0; var_466_bool = 0; var_467_int = 0; var_468_bool = 0; var_469_int = 0; // 0x2c PushV
	var_470_int = 0; // 0x2d PushI
	var_471_bool = var_441_int == var_470_int; // 0x2e Eq
	if(var_471_bool == 0) goto Label_96; // 0x2f JumpB
	var_472_int = 0; // 0x30 PushV
	func_133(var_472_int); // 0x31 NEW_2
	var_461_int = var_472_int; // 0x32 Mov
	var_462_int = 0; // 0x34 MovI
	var_463_int = 1; // 0x35 MovI
	
Label_54:
	var_478_bool = var_463_int <= var_461_int; // 0x36 LE
	if(var_478_bool == 0) goto Label_79; // 0x37 JumpB
	var_464_string = "Price"; // 0x38 MovS
	var_479_int = 1; // 0x39 PushI
	var_480_bool = var_463_int != var_479_int; // 0x3a Neq
	if(var_480_bool == 0) goto Label_61; // 0x3b JumpB
	var_464_string = var_464_string + var_463_int; // 0x3c Add2
	
Label_61:
	var_481_int = 0; var_482_object = Obj(); // 0x3d PushV
	var_482_object = var_440_object; // 0x3e Mov
	func_39(var_482_object); // 0x3f NEW_2
	HasInvItemProperty(var_465_bool, var_481_int, var_464_string); // 0x41 Func
	var_483_bool = var_465_bool == 0; // 0x43 Not
	if(var_483_bool == 0) goto Label_70; // 0x44 JumpB
	goto Label_76; // 0x45 Jump
	
Label_76:
	var_484_int = 1; // 0x4c PushI
	var_463_int = var_463_int + var_484_int; // 0x4d Add2
	goto Label_54; // 0x4e Jump
	
Label_70:
	var_485_int = 0; var_486_object = Obj(); // 0x46 PushV
	var_486_object = var_440_object; // 0x47 Mov
	func_39(var_486_object); // 0x48 NEW_2
	GetInvItemProperty(var_462_int, var_485_int, var_464_string); // 0x4a Func
	
Label_79:
	var_487_string = "durability"; // 0x4f PushS
	HasProperty(var_466_bool, var_487_string); // 0x50 ObjFunc
	var_488_bool = var_466_bool; // 0x52 Push
	if(var_488_bool == 0) goto Label_94; // 0x53 JumpB
	var_489_string = "durability"; // 0x54 PushS
	GetProperty(var_467_int, var_489_string); // 0x55 ObjFunc
	var_490_float = 0.5; // 0x57 PushF
	var_491_float = 1.0; // 0x58 PushF
	var_492_float = 100.0; // 0x59 PushF
	var_493_float = var_467_int / var_492_float; // 0x5a Div
	var_494_int = var_491_float + var_493_float; // 0x5b Add
	var_495_float = var_490_float * var_494_int; // 0x5c Mult
	var_462_int = var_462_int * var_495_float; // 0x5d Mult2
	
Label_94:
	var_439_int = var_462_int; // 0x5e Mov
	return 18; // 0x5f Return
	
Label_96:
	var_496_int = 0; var_497_object = Obj(); // 0x60 PushV
	var_497_object = var_440_object; // 0x61 Mov
	func_39(var_497_object); // 0x62 NEW_2
	var_498_string = "BarterPrice"; // 0x64 PushS
	var_499_int = var_498_string + var_441_int; // 0x65 Add
	HasInvItemProperty(var_468_bool, var_496_int, var_499_int); // 0x66 Func
	var_500_bool = var_468_bool == 0; // 0x68 Not
	if(var_500_bool == 0) goto Label_108; // 0x69 JumpB
	var_439_int = 0; // 0x6a MovI
	return 18; // 0x6b Return
	
Label_108:
	var_501_int = 0; var_502_object = Obj(); // 0x6c PushV
	var_502_object = var_440_object; // 0x6d Mov
	func_39(var_502_object); // 0x6e NEW_2
	var_503_string = "BarterPrice"; // 0x70 PushS
	var_504_int = var_503_string + var_441_int; // 0x71 Add
	GetInvItemProperty(var_469_int, var_501_int, var_504_int); // 0x72 Func
	var_505_int = 0; // 0x74 PushI
	var_506_bool = var_469_int > var_505_int; // 0x75 GT
	if(var_506_bool == 0) goto Label_121; // 0x76 JumpB
	var_439_int = var_469_int; // 0x77 Mov
	return 18; // 0x78 Return
	
Label_121:
	var_439_int = -var_469_int; // 0x79 Neg2
	return 18; // 0x7a Return
}


func_270(var_147_int, var_148_int, var_149_int, var_150_int, var_151_float)
{
	var_152_string = "bg"; // 0x10f PushS
	BlitClipped(var_152_string, var_147_int, var_148_int, var_147_int, var_148_int, var_149_int, var_150_int, var_151_float); // 0x110 Func
	var_153_string = "border"; // 0x112 PushS
	var_154_int = 1; // 0x113 PushI
	StretchBlit(var_153_string, var_147_int, var_148_int, var_149_int, var_154_int, var_151_float); // 0x114 Func
	var_155_string = "border"; // 0x116 PushS
	var_156_int = var_148_int + var_150_int; // 0x117 Add
	var_157_int = 1; // 0x118 PushI
	var_158_int = var_156_int - var_157_int; // 0x119 Sub
	var_159_int = 1; // 0x11a PushI
	StretchBlit(var_155_string, var_147_int, var_158_int, var_149_int, var_159_int, var_151_float); // 0x11b Func
	var_160_string = "border"; // 0x11d PushS
	var_161_int = 1; // 0x11e PushI
	StretchBlit(var_160_string, var_147_int, var_148_int, var_161_int, var_150_int, var_151_float); // 0x11f Func
	var_162_string = "border"; // 0x121 PushS
	var_163_int = var_147_int + var_149_int; // 0x122 Add
	var_164_int = 1; // 0x123 PushI
	var_165_int = var_163_int - var_164_int; // 0x124 Sub
	var_166_int = 1; // 0x125 PushI
	StretchBlit(var_162_string, var_165_int, var_148_int, var_166_int, var_150_int, var_151_float); // 0x126 Func
	return 0; // 0x128 Return
}


func_142(var_508_float, var_510_int, var_511_int)
{
	var_513_float = 0; var_514_int = 0; var_515_bool = 0; var_516_float = 0; var_517_int = 0; var_518_bool = 0; // 0x8e PushV
	var_519_int = 0; // 0x8f PushI
	var_520_bool = var_511_int != var_519_int; // 0x90 Neq
	if(var_520_bool == 0) goto Label_148; // 0x91 JumpB
	var_508_float = 1; // 0x92 MovI
	return 6; // 0x93 Return
	
Label_148:
	var_516_float = 1; // 0x94 MovI
	var_517_int = 1; // 0x95 MovI
	
Label_150:
	var_521_bool = var_517_int <= var_510_int; // 0x96 LE
	if(var_521_bool == 0) goto Label_165; // 0x97 JumpB
	var_522_string = "sellf"; // 0x98 PushS
	var_523_int = var_522_string + var_517_int; // 0x99 Add
	HasProperty(var_523_int, var_518_bool); // 0x9a ObjFunc
	var_524_bool = var_518_bool; // 0x9c Push
	if(var_524_bool == 0) goto Label_162; // 0x9d JumpB
	var_525_string = "sellf"; // 0x9e PushS
	var_526_int = var_525_string + var_517_int; // 0x9f Add
	GetProperty(var_526_int, var_516_float); // 0xa0 ObjFunc
	
Label_162:
	var_527_int = 1; // 0xa2 PushI
	var_517_int = var_517_int + var_527_int; // 0xa3 Add2
	goto Label_150; // 0xa4 Jump
	
Label_165:
	var_528_int = 100; // 0xa5 PushI
	var_508_float = var_516_float / var_516_float; // 0xa6 Div2
	return 6; // 0xa7 Return
}


func_210(var_13_int, var_14_string, var_15_object, var_16_int, var_17_int, var_18_float)
{
	var_19_int = 1; // 0xd3 PushI
	var_20_bool = var_13_int == var_19_int; // 0xd4 Eq
	if(var_20_bool == 0) goto Label_223; // 0xd5 JumpB
	var_21_int = 0; var_22_int = 0; var_23_object = Obj(); var_24_string = ""; var_25_float = 0; // 0xd6 PushV
	var_21_int = var_16_int; // 0xd7 Mov
	var_22_int = var_17_int; // 0xd8 Mov
	var_23_object = var_15_object; // 0xd9 Mov
	var_24_string = var_14_string; // 0xda Mov
	var_25_float = var_18_float; // 0xdb Mov
	func_341(var_21_int, var_22_int, var_23_object, var_24_string, var_25_float); // 0xdc NEW_2
	goto Label_269; // 0xde Jump
	
Label_269:
	return 0; // 0x10d Return
	
Label_223:
	var_262_int = 2; // 0xdf PushI
	var_263_bool = var_13_int == var_262_int; // 0xe0 Eq
	if(var_263_bool == 0) goto Label_234; // 0xe1 JumpB
	var_264_int = 0; var_265_int = 0; var_266_object = Obj(); var_267_float = 0; // 0xe2 PushV
	var_264_int = var_16_int; // 0xe3 Mov
	var_265_int = var_17_int; // 0xe4 Mov
	var_266_object = var_15_object; // 0xe5 Mov
	var_267_float = var_18_float; // 0xe6 Mov
	func_859(var_264_int, var_265_int, var_266_object, var_267_float); // 0xe7 NEW_2
	goto Label_269; // 0xe9 Jump
	
Label_234:
	var_356_int = 3; // 0xea PushI
	var_357_bool = var_13_int == var_356_int; // 0xeb Eq
	if(var_357_bool == 0) goto Label_246; // 0xec JumpB
	var_358_int = 0; var_359_int = 0; var_360_object = Obj(); var_361_bool = 0; var_362_float = 0; // 0xed PushV
	var_358_int = var_16_int; // 0xee Mov
	var_359_int = var_17_int; // 0xef Mov
	var_360_object = var_15_object; // 0xf0 Mov
	var_361_bool = 1; // 0xf1 MovB
	var_362_float = var_18_float; // 0xf2 Mov
	func_582(var_358_int, var_359_int, var_360_object, var_361_bool, var_362_float); // 0xf3 NEW_2
	goto Label_269; // 0xf5 Jump
	
Label_246:
	var_663_int = 4; // 0xf6 PushI
	var_664_bool = var_13_int == var_663_int; // 0xf7 Eq
	if(var_664_bool == 0) goto Label_258; // 0xf8 JumpB
	var_665_int = 0; var_666_int = 0; var_667_object = Obj(); var_668_bool = 0; var_669_float = 0; // 0xf9 PushV
	var_665_int = var_16_int; // 0xfa Mov
	var_666_int = var_17_int; // 0xfb Mov
	var_667_object = var_15_object; // 0xfc Mov
	var_668_bool = 0; // 0xfd MovB
	var_669_float = var_18_float; // 0xfe Mov
	func_582(var_665_int, var_666_int, var_667_object, var_668_bool, var_669_float); // 0xff NEW_2
	goto Label_269; // 0x101 Jump
	
Label_258:
	var_670_int = 5; // 0x102 PushI
	var_671_bool = var_13_int == var_670_int; // 0x103 Eq
	if(var_671_bool == 0) goto Label_269; // 0x104 JumpB
	var_672_int = 0; var_673_int = 0; var_674_string = ""; var_675_object = Obj(); var_676_float = 0; // 0x105 PushV
	var_672_int = var_16_int; // 0x106 Mov
	var_673_int = var_17_int; // 0x107 Mov
	var_674_string = var_14_string; // 0x108 Mov
	var_675_object = var_15_object; // 0x109 Mov
	var_676_float = var_18_float; // 0x10a Mov
	func_982(var_673_int, var_674_string, var_675_object, var_676_float); // 0x10b NEW_2
}


func_341(var_21_int, var_22_int, var_23_object, var_24_string, var_25_float)
{
	var_26_int = 0; var_27_string = ""; var_28_string = ""; var_29_string = ""; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_string = ""; var_39_bool = 0; var_40_float = 0; var_41_float = 0; var_42_string = ""; var_43_string = ""; var_44_int = 0; var_45_int = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; var_50_string = ""; var_51_string = ""; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_string = ""; var_60_string = ""; var_61_string = ""; var_62_bool = 0; var_63_int = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_bool = 0; var_68_int = 0; var_69_int = 0; var_70_string = ""; var_71_bool = 0; var_72_float = 0; var_73_float = 0; var_74_string = ""; var_75_string = ""; var_76_int = 0; var_77_int = 0; var_78_float = 0; var_79_float = 0; var_80_float = 0; var_81_float = 0; var_82_string = ""; var_83_string = ""; var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; var_88_int = 0; var_89_int = 0; // 0x155 PushV
	var_90_bool = var_23_object == 0; // 0x156 Not
	if(var_90_bool == 0) goto Label_345; // 0x157 JumpB
	return 64; // 0x158 Return
	
Label_345:
	var_91_int = 0; var_92_object = Obj(); // 0x159 PushV
	var_92_object = var_23_object; // 0x15a Mov
	func_39(var_92_object); // 0x15b NEW_2
	var_58_int = var_91_int; // 0x15c Mov
	var_95_string = "Description"; // 0x15e PushS
	HasInvItemProperty(var_62_bool, var_58_int, var_95_string); // 0x15f Func
	var_96_bool = var_62_bool; // 0x161 Push
	if(var_96_bool == 0) goto Label_361; // 0x162 JumpB
	var_97_string = "Description"; // 0x163 PushS
	GetInvItemProperty(var_63_int, var_58_int, var_97_string); // 0x164 Func
	GetStringByID(var_59_string, var_63_int); // 0x166 Func
	goto Label_362; // 0x168 Jump
	
Label_362:
	var_98_string = "default"; // 0x16a PushS
	var_99_int = 218; // 0x16b PushI
	GetTextHeightInWidth(var_64_int, var_98_string, var_99_int, var_59_string); // 0x16c Func
	var_100_string = "default"; // 0x16e PushS
	GetFontHeight(var_65_int, var_100_string); // 0x16f Func
	var_64_int = var_64_int + var_65_int; // 0x171 Add2
	var_101_string = "HasDurability"; // 0x172 PushS
	HasInvItemProperty(var_66_bool, var_58_int, var_101_string); // 0x173 Func
	var_102_string = "durability"; // 0x175 PushS
	HasProperty(var_67_bool, var_102_string); // 0x176 ObjFunc
	var_103_bool = 0; // 0x178 PushV
	var_103_bool = 1; // 0x179 MovB
	var_104_bool = var_67_bool; // 0x17a Push
	if(var_104_bool == 0) goto Label_383; // 0x17b JumpB
	var_105_bool = var_66_bool; // 0x17c Push
	if(var_105_bool == 0) goto Label_383; // 0x17d JumpB
	var_103_bool = 0; // 0x17e MovB
	
Label_383:
	if(var_103_bool == 0) goto Label_404; // 0x17f JumpB
	var_106_bool = var_67_bool; // 0x180 Push
	if(var_106_bool == 0) goto Label_390; // 0x181 JumpB
	var_107_string = "durability"; // 0x182 PushS
	GetProperty(var_68_int, var_107_string); // 0x183 ObjFunc
	goto Label_391; // 0x185 Jump
	
Label_391:
	var_108_int = 7; // 0x187 PushI
	GetStringByID(var_60_string, var_108_int); // 0x188 Func
	var_109_string = " "; // 0x18a PushS
	var_110_int = var_109_string + var_68_int; // 0x18b Add
	var_111_string = "%"; // 0x18c PushS
	var_112_int = var_110_int + var_111_string; // 0x18d Add
	var_60_string = var_60_string + var_112_int; // 0x18e Add2
	var_113_string = "default"; // 0x18f PushS
	var_114_int = 218; // 0x190 PushI
	GetTextHeightInWidth(var_69_int, var_113_string, var_114_int, var_60_string); // 0x191 Func
	var_64_int = var_64_int + var_69_int; // 0x193 Add2
	
Label_404:
	var_71_bool = 0; // 0x194 MovB
	var_115_string = ""; var_116_object = Obj(); // 0x195 PushV
	var_116_object = var_23_object; // 0x196 Mov
	func_123(var_115_string, var_116_object); // 0x197 NEW_2
	var_123_string = "grass_combination"; // 0x199 PushS
	var_124_bool = var_115_string == var_123_string; // 0x19a Eq
	if(var_124_bool == 0) goto Label_446; // 0x19b JumpB
	var_71_bool = 1; // 0x19c MovB
	var_125_string = "im_inc"; // 0x19d PushS
	GetProperty(var_72_float, var_125_string); // 0x19e ObjFunc
	var_126_string = "hl_inc"; // 0x1a0 PushS
	GetProperty(var_73_float, var_126_string); // 0x1a1 ObjFunc
	var_127_int = 8; // 0x1a3 PushI
	GetStringByID(var_74_string, var_127_int); // 0x1a4 Func
	var_128_int = 9; // 0x1a6 PushI
	GetStringByID(var_75_string, var_128_int); // 0x1a7 Func
	var_129_int = 100; // 0x1a9 PushI
	var_76_int = var_72_float * var_129_int; // 0x1aa Mult2
	var_130_string = " "; // 0x1ab PushS
	var_131_int = var_74_string + var_130_string; // 0x1ac Add
	var_132_int = var_131_int + var_76_int; // 0x1ad Add
	var_133_string = "%
"; // 0x1ae PushS
	var_70_string = var_132_int + var_133_string; // 0x1af Add2
	var_134_int = 100; // 0x1b0 PushI
	var_76_int = var_73_float * var_134_int; // 0x1b1 Mult2
	var_135_string = " "; // 0x1b2 PushS
	var_136_int = var_75_string + var_135_string; // 0x1b3 Add
	var_137_int = var_136_int + var_76_int; // 0x1b4 Add
	var_138_string = "%
"; // 0x1b5 PushS
	var_139_int = var_137_int + var_138_string; // 0x1b6 Add
	var_70_string = var_70_string + var_139_int; // 0x1b7 Add2
	var_140_string = "default"; // 0x1b8 PushS
	var_141_int = 218; // 0x1b9 PushI
	GetTextHeightInWidth(var_77_int, var_140_string, var_141_int, var_70_string); // 0x1ba Func
	var_64_int = var_64_int + var_77_int; // 0x1bc Add2
	goto Label_486; // 0x1bd Jump
	
Label_486:
	GetScreenSize(var_86_int, var_87_int); // 0x1e6 Func
	var_142_int = 266; // 0x1e8 PushI
	var_64_int = var_64_int + var_142_int; // 0x1e9 Add2
	var_143_int = var_86_int - var_21_int; // 0x1ea Sub
	var_144_int = 250; // 0x1eb PushI
	var_145_bool = var_143_int > var_144_int; // 0x1ec GT
	if(var_145_bool == 0) goto Label_496; // 0x1ed JumpB
	var_88_int = var_21_int; // 0x1ee Mov
	goto Label_498; // 0x1ef Jump
	
Label_498:
	var_146_bool = var_22_int > var_64_int; // 0x1f2 GT
	if(var_146_bool == 0) goto Label_502; // 0x1f3 JumpB
	var_89_int = var_22_int - var_64_int; // 0x1f4 Sub2
	goto Label_509; // 0x1f5 Jump
	
Label_509:
	ScreenToClient(var_88_int, var_89_int); // 0x1fd Func
	var_147_int = 0; var_148_int = 0; var_149_int = 0; var_150_int = 0; var_151_float = 0; // 0x1ff PushV
	var_147_int = var_88_int; // 0x200 Mov
	var_148_int = var_89_int; // 0x201 Mov
	var_149_int = 250; // 0x202 MovI
	var_150_int = var_64_int; // 0x203 Mov
	var_151_float = var_25_float; // 0x204 Mov
	func_270(var_147_int, var_148_int, var_149_int, var_150_int, var_151_float); // 0x205 NEW_2
	var_167_int = 0; var_168_int = 0; var_169_object = Obj(); var_170_float = 0; // 0x207 PushV
	var_171_int = 16; // 0x208 PushI
	var_167_int = var_88_int + var_171_int; // 0x209 Add2
	var_172_int = 16; // 0x20a PushI
	var_168_int = var_89_int + var_172_int; // 0x20b Add2
	var_169_object = var_23_object; // 0x20c Mov
	var_170_float = var_25_float; // 0x20d Mov
	func_297(var_167_int, var_168_int, var_169_object, var_170_float); // 0x20e NEW_2
	var_202_int = 250; // 0x210 PushI
	var_89_int = var_89_int + var_202_int; // 0x211 Add2
	var_203_string = "default"; // 0x212 PushS
	var_204_int = 16; // 0x213 PushI
	var_205_int = var_88_int + var_204_int; // 0x214 Add
	var_206_int = 218; // 0x215 PushI
	var_207_float = 0.64706; // 0x216 PushF
	var_208_float = 0.64706; // 0x217 PushF
	var_209_float = 0.64706; // 0x218 PushF
	PrintInWidth(var_64_int, var_203_string, var_205_int, var_89_int, var_206_int, var_59_string, var_207_float, var_208_float, var_209_float, var_25_float); // 0x219 Func
	var_210_int = var_64_int + var_65_int; // 0x21b Add
	var_89_int = var_89_int + var_210_int; // 0x21c Add2
	var_211_bool = 0; // 0x21d PushV
	var_211_bool = 1; // 0x21e MovB
	var_212_bool = var_67_bool; // 0x21f Push
	if(var_212_bool == 0) goto Label_548; // 0x220 JumpB
	var_213_bool = var_66_bool; // 0x221 Push
	if(var_213_bool == 0) goto Label_548; // 0x222 JumpB
	var_211_bool = 0; // 0x223 MovB
	
Label_548:
	if(var_211_bool == 0) goto Label_559; // 0x224 JumpB
	var_214_string = "default"; // 0x225 PushS
	var_215_int = 16; // 0x226 PushI
	var_216_int = var_88_int + var_215_int; // 0x227 Add
	var_217_int = 218; // 0x228 PushI
	var_218_float = 0.64706; // 0x229 PushF
	var_219_float = 0.64706; // 0x22a PushF
	var_220_float = 0.64706; // 0x22b PushF
	PrintInWidth(var_64_int, var_214_string, var_216_int, var_89_int, var_217_int, var_60_string, var_218_float, var_219_float, var_220_float, var_25_float); // 0x22c Func
	var_89_int = var_89_int + var_64_int; // 0x22e Add2
	
Label_559:
	var_221_bool = var_71_bool; // 0x22f Push
	if(var_221_bool == 0) goto Label_571; // 0x230 JumpB
	var_222_string = "default"; // 0x231 PushS
	var_223_int = 16; // 0x232 PushI
	var_224_int = var_88_int + var_223_int; // 0x233 Add
	var_225_int = 218; // 0x234 PushI
	var_226_float = 0.64706; // 0x235 PushF
	var_227_float = 0.64706; // 0x236 PushF
	var_228_float = 0.64706; // 0x237 PushF
	PrintInWidth(var_64_int, var_222_string, var_224_int, var_89_int, var_225_int, var_70_string, var_226_float, var_227_float, var_228_float, var_25_float); // 0x238 Func
	var_89_int = var_89_int + var_64_int; // 0x23a Add2
	
Label_571:
	var_229_string = "default"; // 0x23b PushS
	var_230_int = 16; // 0x23c PushI
	var_231_int = var_88_int + var_230_int; // 0x23d Add
	var_232_int = 218; // 0x23e PushI
	var_233_float = 0.64706; // 0x23f PushF
	var_234_float = 0.64706; // 0x240 PushF
	var_235_float = 0.64706; // 0x241 PushF
	PrintInWidth(var_64_int, var_229_string, var_231_int, var_89_int, var_232_int, var_24_string, var_233_float, var_234_float, var_235_float, var_25_float); // 0x242 Func
	var_89_int = var_89_int + var_64_int; // 0x244 Add2
	return 64; // 0x245 Return
	
Label_502:
	var_89_int = var_22_int; // 0x1f6 Mov
	var_236_int = var_89_int + var_64_int; // 0x1f7 Add
	var_237_int = 600; // 0x1f8 PushI
	var_238_bool = var_236_int > var_237_int; // 0x1f9 GT
	if(var_238_bool == 0) goto Label_509; // 0x1fa JumpB
	var_239_int = 600; // 0x1fb PushI
	var_89_int = var_239_int - var_64_int; // 0x1fc Sub2
	
Label_496:
	var_240_int = 250; // 0x1f0 PushI
	var_88_int = var_21_int - var_240_int; // 0x1f1 Sub2
	
Label_446:
	var_241_string = ""; var_242_object = Obj(); // 0x1be PushV
	var_242_object = var_23_object; // 0x1bf Mov
	func_123(var_241_string, var_242_object); // 0x1c0 NEW_2
	var_243_string = "organ_combination"; // 0x1c2 PushS
	var_244_bool = var_241_string == var_243_string; // 0x1c3 Eq
	if(var_244_bool == 0) goto Label_486; // 0x1c4 JumpB
	var_71_bool = 1; // 0x1c5 MovB
	var_245_string = "DiseaseRate"; // 0x1c6 PushS
	GetProperty(var_78_float, var_245_string); // 0x1c7 ObjFunc
	var_246_string = "HealthIncrease"; // 0x1c9 PushS
	GetProperty(var_80_float, var_246_string); // 0x1ca ObjFunc
	var_247_int = 11; // 0x1cc PushI
	GetStringByID(var_82_string, var_247_int); // 0x1cd Func
	var_248_int = 13; // 0x1cf PushI
	GetStringByID(var_83_string, var_248_int); // 0x1d0 Func
	var_249_int = 100; // 0x1d2 PushI
	var_84_int = var_78_float * var_249_int; // 0x1d3 Mult2
	var_250_string = " "; // 0x1d4 PushS
	var_251_int = var_82_string + var_250_string; // 0x1d5 Add
	var_252_int = var_251_int + var_84_int; // 0x1d6 Add
	var_253_string = "%
"; // 0x1d7 PushS
	var_70_string = var_252_int + var_253_string; // 0x1d8 Add2
	var_254_int = 100; // 0x1d9 PushI
	var_84_int = var_80_float * var_254_int; // 0x1da Mult2
	var_255_string = " "; // 0x1db PushS
	var_256_int = var_83_string + var_255_string; // 0x1dc Add
	var_257_int = var_256_int + var_84_int; // 0x1dd Add
	var_258_string = "%
"; // 0x1de PushS
	var_259_int = var_257_int + var_258_string; // 0x1df Add
	var_70_string = var_70_string + var_259_int; // 0x1e0 Add2
	var_260_string = "default"; // 0x1e1 PushS
	var_261_int = 218; // 0x1e2 PushI
	GetTextHeightInWidth(var_85_int, var_260_string, var_261_int, var_70_string); // 0x1e3 Func
	var_64_int = var_64_int + var_85_int; // 0x1e5 Add2
	
Label_390:
	var_68_int = 100; // 0x186 MovI
	
Label_361:
	var_59_string = "Error: Item doesnt have description (FIXME!)"; // 0x169 MovS
}


func_982(var_672_int, var_673_int, var_674_string, var_676_float)
{
	var_677_int = 0; var_678_int = 0; var_679_int = 0; var_680_int = 0; var_681_int = 0; var_682_int = 0; var_683_int = 0; var_684_int = 0; var_685_int = 0; var_686_int = 0; // 0x3d6 PushV
	var_676_float = 1; // 0x3d7 MovI
	var_687_string = "default"; // 0x3d8 PushS
	var_688_int = 218; // 0x3d9 PushI
	GetTextHeightInWidth(var_682_int, var_687_string, var_688_int, var_674_string); // 0x3da Func
	var_689_int = 32; // 0x3dc PushI
	var_682_int = var_682_int + var_689_int; // 0x3dd Add2
	GetScreenSize(var_683_int, var_684_int); // 0x3de Func
	var_690_int = var_683_int - var_672_int; // 0x3e0 Sub
	var_691_int = 250; // 0x3e1 PushI
	var_692_bool = var_690_int > var_691_int; // 0x3e2 GT
	if(var_692_bool == 0) goto Label_998; // 0x3e3 JumpB
	var_685_int = var_672_int; // 0x3e4 Mov
	goto Label_1000; // 0x3e5 Jump
	
Label_1000:
	var_693_bool = var_673_int > var_682_int; // 0x3e8 GT
	if(var_693_bool == 0) goto Label_1004; // 0x3e9 JumpB
	var_686_int = var_673_int - var_682_int; // 0x3ea Sub2
	goto Label_1011; // 0x3eb Jump
	
Label_1011:
	ScreenToClient(var_685_int, var_686_int); // 0x3f3 Func
	var_694_int = 0; var_695_int = 0; var_696_int = 0; var_697_int = 0; var_698_float = 0; // 0x3f5 PushV
	var_694_int = var_685_int; // 0x3f6 Mov
	var_695_int = var_686_int; // 0x3f7 Mov
	var_696_int = 250; // 0x3f8 MovI
	var_697_int = var_682_int; // 0x3f9 Mov
	var_698_float = var_676_float; // 0x3fa Mov
	func_270(var_694_int, var_695_int, var_696_int, var_697_int, var_698_float); // 0x3fb NEW_2
	var_699_string = "default"; // 0x3fd PushS
	var_700_int = 16; // 0x3fe PushI
	var_701_int = var_685_int + var_700_int; // 0x3ff Add
	var_702_int = 16; // 0x400 PushI
	var_703_int = var_686_int + var_702_int; // 0x401 Add
	var_704_int = 218; // 0x402 PushI
	var_705_float = 0.64706; // 0x403 PushF
	var_706_float = 0.64706; // 0x404 PushF
	var_707_float = 0.64706; // 0x405 PushF
	PrintInWidth(var_682_int, var_699_string, var_701_int, var_703_int, var_704_int, var_674_string, var_705_float, var_706_float, var_707_float, var_676_float); // 0x406 Func
	return 10; // 0x408 Return
	
Label_1004:
	var_686_int = var_673_int; // 0x3ec Mov
	var_708_int = var_686_int + var_682_int; // 0x3ed Add
	var_709_int = 600; // 0x3ee PushI
	var_710_bool = var_708_int > var_709_int; // 0x3ef GT
	if(var_710_bool == 0) goto Label_1011; // 0x3f0 JumpB
	var_711_int = 600; // 0x3f1 PushI
	var_686_int = var_711_int - var_682_int; // 0x3f2 Sub2
	
Label_998:
	var_712_int = 250; // 0x3e6 PushI
	var_685_int = var_672_int - var_712_int; // 0x3e7 Sub2
}


func_123(var_115_string, var_116_object)
{
	var_117_int = 0; var_118_string = ""; var_119_int = 0; var_120_string = ""; // 0x7b PushV
	var_121_int = 0; var_122_object = Obj(); // 0x7c PushV
	var_122_object = var_116_object; // 0x7d Mov
	func_39(var_122_object); // 0x7e NEW_2
	var_119_int = var_121_int; // 0x7f Mov
	GetInvItemName(var_120_string, var_119_int); // 0x81 Func
	var_115_string = var_120_string; // 0x83 Mov
	return 4; // 0x84 Return
}


