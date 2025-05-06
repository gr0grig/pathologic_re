task_0_event_0()
{
	var_0_object = Obj(); var_1_int = 0; var_2_int = 0; var_3_int = 0; var_4_string = ""; var_5_object = Obj(); var_6_object = Obj(); var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_string = ""; var_11_object = Obj(); // 0x9 PushV
	var_7_int = 0; // 0xa MovI
	var_8_int = 0; // 0xb MovI
	ClientToScreen(var_7_int, var_8_int); // 0xc Func
	FindWindow(var_6_object, var_7_int, var_8_int); // 0xe Func
	var_12_bool = var_6_object == 0; // 0x10 Not
	if(var_12_bool == 0) goto Label_19; // 0x11 JumpB
	return 12; // 0x12 Return
	
Label_19:
	GetTooltipType(var_9_int); // 0x13 ObjFunc
	GetTooltipText(var_10_string); // 0x15 ObjFunc
	GetTooltipObject(var_11_object); // 0x17 ObjFunc
	var_13_int = 0; var_14_string = ""; var_15_object = Obj(); var_16_int = 0; var_17_int = 0; // 0x19 PushV
	var_13_int = var_9_int; // 0x1a Mov
	var_14_string = var_10_string; // 0x1b Mov
	var_15_object = var_11_object; // 0x1c Mov
	var_16_int = var_7_int; // 0x1d Mov
	var_17_int = var_8_int; // 0x1e Mov
	func_170(var_13_int, var_14_string, var_15_object, var_16_int, var_17_int); // 0x1f Call
	return 12; // 0x21 Return
}


main()
{
	var_0_string = "default"; // 0x0 PushS
	SetBackground(var_0_string); // 0x1 Func
	var_1_bool = 1; // 0x3 PushB
	SetOwnerDraw(var_1_bool); // 0x4 Func
	ProcessEvents(); // 0x6 Func
	return 0; // 0x8 Return
}


func_224(var_56_int, var_57_int, var_58_int, var_59_int)
{
	var_60_string = "bg"; // 0xe1 PushS
	BlitClipped(var_60_string, var_56_int, var_57_int, var_56_int, var_57_int, var_58_int, var_59_int); // 0xe2 Func
	var_61_string = "border"; // 0xe4 PushS
	var_62_int = 1; // 0xe5 PushI
	StretchBlit(var_61_string, var_56_int, var_57_int, var_58_int, var_62_int); // 0xe6 Func
	var_63_string = "border"; // 0xe8 PushS
	var_64_int = var_57_int + var_59_int; // 0xe9 Add
	var_65_int = 1; // 0xea PushI
	var_66_int = var_64_int - var_65_int; // 0xeb Sub
	var_67_int = 1; // 0xec PushI
	StretchBlit(var_63_string, var_56_int, var_66_int, var_58_int, var_67_int); // 0xed Func
	var_68_string = "border"; // 0xef PushS
	var_69_int = 1; // 0xf0 PushI
	StretchBlit(var_68_string, var_56_int, var_57_int, var_69_int, var_59_int); // 0xf1 Func
	var_70_string = "border"; // 0xf3 PushS
	var_71_int = var_56_int + var_58_int; // 0xf4 Add
	var_72_int = 1; // 0xf5 PushI
	var_73_int = var_71_int - var_72_int; // 0xf6 Sub
	var_74_int = 1; // 0xf7 PushI
	StretchBlit(var_70_string, var_73_int, var_57_int, var_74_int, var_59_int); // 0xf8 Func
	return 0; // 0xfa Return
}


func_97(var_42_int)
{
	var_44_int = 0; var_45_int = 0; // 0x61 PushV
	GetItemID(var_45_int); // 0x62 ObjFunc
	var_42_int = var_45_int; // 0x64 Mov
	return 2; // 0x65 Return
}


func_128(var_360_float, var_362_int, var_363_int)
{
	var_365_float = 0; var_366_int = 0; var_367_bool = 0; var_368_float = 0; var_369_int = 0; var_370_bool = 0; // 0x80 PushV
	var_371_int = 0; // 0x81 PushI
	var_372_bool = var_363_int != var_371_int; // 0x82 Neq
	if(var_372_bool == 0) goto Label_134; // 0x83 JumpB
	var_360_float = 1; // 0x84 MovI
	return 6; // 0x85 Return
	
Label_134:
	var_368_float = 1; // 0x86 MovI
	var_369_int = 1; // 0x87 MovI
	
Label_136:
	var_373_bool = var_369_int <= var_362_int; // 0x88 LE
	if(var_373_bool == 0) goto Label_151; // 0x89 JumpB
	var_374_string = "buyf"; // 0x8a PushS
	var_375_int = var_374_string + var_369_int; // 0x8b Add
	HasProperty(var_375_int, var_370_bool); // 0x8c ObjFunc
	var_376_bool = var_370_bool; // 0x8e Push
	if(var_376_bool == 0) goto Label_148; // 0x8f JumpB
	var_377_string = "buyf"; // 0x90 PushS
	var_378_int = var_377_string + var_369_int; // 0x91 Add
	GetProperty(var_378_int, var_368_float); // 0x92 ObjFunc
	
Label_148:
	var_379_int = 1; // 0x94 PushI
	var_369_int = var_369_int + var_379_int; // 0x95 Add2
	goto Label_136; // 0x96 Jump
	
Label_151:
	var_380_int = 100; // 0x97 PushI
	var_360_float = var_368_float / var_368_float; // 0x98 Div2
	return 6; // 0x99 Return
}


func_36(var_253_int, var_254_object, var_255_int)
{
	var_266_bool = 0; var_267_int = 0; var_268_bool = 0; var_269_int = 0; var_270_bool = 0; var_271_int = 0; var_272_bool = 0; var_273_int = 0; // 0x24 PushV
	var_274_int = 0; // 0x25 PushI
	var_275_bool = var_255_int == var_274_int; // 0x26 Eq
	if(var_275_bool == 0) goto Label_70; // 0x27 JumpB
	var_276_int = 0; var_277_object = Obj(); // 0x28 PushV
	var_277_object = var_254_object; // 0x29 Mov
	func_97(var_277_object); // 0x2a Call
	var_278_string = "Price"; // 0x2c PushS
	HasInvItemProperty(var_270_bool, var_276_int, var_278_string); // 0x2d Func
	var_279_bool = var_270_bool == 0; // 0x2f Not
	if(var_279_bool == 0) goto Label_61; // 0x30 JumpB
	var_280_string = "Item with id :"; // 0x31 PushS
	var_281_int = 0; var_282_object = Obj(); // 0x32 PushV
	var_282_object = var_254_object; // 0x33 Mov
	func_97(var_282_object); // 0x34 Call
	var_283_int = var_280_string + var_281_int; // 0x36 Add
	var_284_string = " doesn't have price"; // 0x37 PushS
	var_285_int = var_283_int + var_284_string; // 0x38 Add
	Trace(var_285_int); // 0x39 Func
	var_253_int = 1; // 0x3b MovI
	return 8; // 0x3c Return
	
Label_61:
	var_286_int = 0; var_287_object = Obj(); // 0x3d PushV
	var_287_object = var_254_object; // 0x3e Mov
	func_97(var_287_object); // 0x3f Call
	var_288_string = "Price"; // 0x41 PushS
	GetInvItemProperty(var_271_int, var_286_int, var_288_string); // 0x42 Func
	var_253_int = var_271_int; // 0x44 Mov
	return 8; // 0x45 Return
	
Label_70:
	var_289_int = 0; var_290_object = Obj(); // 0x46 PushV
	var_290_object = var_254_object; // 0x47 Mov
	func_97(var_290_object); // 0x48 Call
	var_291_string = "BarterPrice"; // 0x4a PushS
	var_292_int = var_291_string + var_255_int; // 0x4b Add
	HasInvItemProperty(var_272_bool, var_289_int, var_292_int); // 0x4c Func
	var_293_bool = var_272_bool == 0; // 0x4e Not
	if(var_293_bool == 0) goto Label_82; // 0x4f JumpB
	var_253_int = 0; // 0x50 MovI
	return 8; // 0x51 Return
	
Label_82:
	var_294_int = 0; var_295_object = Obj(); // 0x52 PushV
	var_295_object = var_254_object; // 0x53 Mov
	func_97(var_295_object); // 0x54 Call
	var_296_string = "BarterPrice"; // 0x56 PushS
	var_297_int = var_296_string + var_255_int; // 0x57 Add
	GetInvItemProperty(var_273_int, var_294_int, var_297_int); // 0x58 Func
	var_298_int = 0; // 0x5a PushI
	var_299_bool = var_273_int > var_298_int; // 0x5b GT
	if(var_299_bool == 0) goto Label_95; // 0x5c JumpB
	var_253_int = var_273_int; // 0x5d Mov
	return 8; // 0x5e Return
	
Label_95:
	var_253_int = -var_273_int; // 0x5f Neg2
	return 8; // 0x60 Return
}


func_613(var_389_int, var_390_int, var_391_string)
{
	var_393_int = 0; var_394_int = 0; var_395_int = 0; var_396_int = 0; var_397_int = 0; var_398_int = 0; var_399_int = 0; var_400_int = 0; var_401_int = 0; var_402_int = 0; // 0x265 PushV
	var_403_string = "default"; // 0x266 PushS
	var_404_int = 218; // 0x267 PushI
	GetTextHeightInWidth(var_398_int, var_403_string, var_404_int, var_391_string); // 0x268 Func
	var_405_int = 32; // 0x26a PushI
	var_398_int = var_398_int + var_405_int; // 0x26b Add2
	GetScreenSize(var_399_int, var_400_int); // 0x26c Func
	var_406_int = var_399_int - var_389_int; // 0x26e Sub
	var_407_int = 250; // 0x26f PushI
	var_408_bool = var_406_int > var_407_int; // 0x270 GT
	if(var_408_bool == 0) goto Label_628; // 0x271 JumpB
	var_401_int = var_389_int; // 0x272 Mov
	goto Label_630; // 0x273 Jump
	
Label_630:
	var_409_bool = var_390_int > var_398_int; // 0x276 GT
	if(var_409_bool == 0) goto Label_634; // 0x277 JumpB
	var_402_int = var_390_int - var_398_int; // 0x278 Sub2
	goto Label_635; // 0x279 Jump
	
Label_635:
	ScreenToClient(var_401_int, var_402_int); // 0x27b Func
	var_410_int = 0; var_411_int = 0; var_412_int = 0; var_413_int = 0; // 0x27d PushV
	var_410_int = var_401_int; // 0x27e Mov
	var_411_int = var_402_int; // 0x27f Mov
	var_412_int = 250; // 0x280 MovI
	var_413_int = var_398_int; // 0x281 Mov
	func_224(var_410_int, var_411_int, var_412_int, var_413_int); // 0x282 Call
	var_414_string = "default"; // 0x284 PushS
	var_415_int = 16; // 0x285 PushI
	var_416_int = var_401_int + var_415_int; // 0x286 Add
	var_417_int = 16; // 0x287 PushI
	var_418_int = var_402_int + var_417_int; // 0x288 Add
	var_419_int = 218; // 0x289 PushI
	var_420_float = 0.64706; // 0x28a PushF
	var_421_float = 0.64706; // 0x28b PushF
	var_422_float = 0.64706; // 0x28c PushF
	PrintInWidth(var_398_int, var_414_string, var_416_int, var_418_int, var_419_int, var_391_string, var_420_float, var_421_float, var_422_float); // 0x28d Func
	return 10; // 0x28f Return
	
Label_634:
	var_402_int = var_390_int; // 0x27a Mov
	
Label_628:
	var_423_int = 250; // 0x274 PushI
	var_401_int = var_389_int - var_423_int; // 0x275 Sub2
}


func_102(var_301_float, var_303_int, var_304_int)
{
	var_306_float = 0; var_307_int = 0; var_308_bool = 0; var_309_float = 0; var_310_int = 0; var_311_bool = 0; // 0x66 PushV
	var_312_int = 0; // 0x67 PushI
	var_313_bool = var_304_int != var_312_int; // 0x68 Neq
	if(var_313_bool == 0) goto Label_108; // 0x69 JumpB
	var_301_float = 1; // 0x6a MovI
	return 6; // 0x6b Return
	
Label_108:
	var_309_float = 1; // 0x6c MovI
	var_310_int = 1; // 0x6d MovI
	
Label_110:
	var_314_bool = var_310_int <= var_303_int; // 0x6e LE
	if(var_314_bool == 0) goto Label_125; // 0x6f JumpB
	var_315_string = "sellf"; // 0x70 PushS
	var_316_int = var_315_string + var_310_int; // 0x71 Add
	HasProperty(var_316_int, var_311_bool); // 0x72 ObjFunc
	var_317_bool = var_311_bool; // 0x74 Push
	if(var_317_bool == 0) goto Label_122; // 0x75 JumpB
	var_318_string = "sellf"; // 0x76 PushS
	var_319_int = var_318_string + var_310_int; // 0x77 Add
	GetProperty(var_319_int, var_309_float); // 0x78 ObjFunc
	
Label_122:
	var_320_int = 1; // 0x7a PushI
	var_310_int = var_310_int + var_320_int; // 0x7b Add2
	goto Label_110; // 0x7c Jump
	
Label_125:
	var_321_int = 100; // 0x7d PushI
	var_301_float = var_309_float / var_309_float; // 0x7e Div2
	return 6; // 0x7f Return
}


func_487(var_213_int, var_214_int, var_215_object, var_216_bool)
{
	var_217_object = Obj(); var_218_float = 0; var_219_int = 0; var_220_int = 0; var_221_int = 0; var_222_float = 0; var_223_string = ""; var_224_bool = 0; var_225_int = 0; var_226_string = ""; var_227_int = 0; var_228_int = 0; var_229_int = 0; var_230_int = 0; var_231_int = 0; var_232_object = Obj(); var_233_float = 0; var_234_int = 0; var_235_int = 0; var_236_int = 0; var_237_float = 0; var_238_string = ""; var_239_bool = 0; var_240_int = 0; var_241_string = ""; var_242_int = 0; var_243_int = 0; var_244_int = 0; var_245_int = 0; var_246_int = 0; // 0x1e7 PushV
	var_247_bool = var_215_object == 0; // 0x1e8 Not
	if(var_247_bool == 0) goto Label_491; // 0x1e9 JumpB
	return 30; // 0x1ea Return
	
Label_491:
	GetContainer(var_232_object); // 0x1eb Func
	GetGameTime(var_233_float); // 0x1ed Func
	var_248_int = 1; // 0x1ef PushI
	var_249_int = 24; // 0x1f0 PushI
	var_250_float = var_233_float / var_249_int; // 0x1f1 Div
	var_234_int = var_248_int + var_250_float; // 0x1f2 Add2
	var_251_int = 0; var_252_object = Obj(); // 0x1f3 PushV
	var_252_object = var_215_object; // 0x1f4 Mov
	func_97(var_252_object); // 0x1f5 Call
	var_235_int = var_251_int; // 0x1f6 Mov
	var_253_int = 0; var_254_object = Obj(); var_255_int = 0; // 0x1f8 PushV
	var_254_object = var_215_object; // 0x1f9 Mov
	var_256_int = 0; // 0x1fa PushV
	func_154(var_256_int); // 0x1fb Call
	var_255_int = var_256_int; // 0x1fc Mov
	func_36(var_253_int, var_254_object, var_255_int); // 0x1fe Call
	var_236_int = var_253_int; // 0x1ff Mov
	var_300_bool = var_216_bool; // 0x201 Push
	if(var_300_bool == 0) goto Label_526; // 0x202 JumpB
	var_301_float = 0; var_302_object = Obj(); var_303_int = 0; var_304_int = 0; // 0x203 PushV
	var_302_object = var_232_object; // 0x204 Mov
	var_303_int = var_234_int; // 0x205 Mov
	var_305_int = 0; // 0x206 PushV
	func_154(var_305_int); // 0x207 Call
	var_304_int = var_305_int; // 0x208 Mov
	func_102(var_302_object, var_303_int, var_304_int); // 0x20a Call
	var_237_float = var_301_float; // 0x20b Mov
	goto Label_536; // 0x20d Jump
	
Label_536:
	var_236_int = var_236_int * var_237_float; // 0x218 Mult2
	var_322_string = "Description"; // 0x219 PushS
	HasInvItemProperty(var_239_bool, var_235_int, var_322_string); // 0x21a Func
	var_323_bool = var_239_bool; // 0x21c Push
	if(var_323_bool == 0) goto Label_548; // 0x21d JumpB
	var_324_string = "Description"; // 0x21e PushS
	GetInvItemProperty(var_240_int, var_235_int, var_324_string); // 0x21f Func
	GetStringByID(var_238_string, var_240_int); // 0x221 Func
	goto Label_549; // 0x223 Jump
	
Label_549:
	var_325_string = "
"; // 0x225 PushS
	var_238_string = var_238_string + var_325_string; // 0x226 Add2
	var_326_int = 200005; // 0x227 PushI
	GetStringByID(var_241_string, var_326_int); // 0x228 Func
	var_327_string = ": "; // 0x22a PushS
	var_328_int = var_241_string + var_327_string; // 0x22b Add
	var_329_int = var_328_int + var_236_int; // 0x22c Add
	var_238_string = var_238_string + var_329_int; // 0x22d Add2
	var_330_string = "default"; // 0x22e PushS
	var_331_int = 218; // 0x22f PushI
	GetTextHeightInWidth(var_242_int, var_330_string, var_331_int, var_238_string); // 0x230 Func
	var_332_int = 266; // 0x232 PushI
	var_242_int = var_242_int + var_332_int; // 0x233 Add2
	GetScreenSize(var_243_int, var_244_int); // 0x234 Func
	var_333_int = var_243_int - var_213_int; // 0x236 Sub
	var_334_int = 250; // 0x237 PushI
	var_335_bool = var_333_int > var_334_int; // 0x238 GT
	if(var_335_bool == 0) goto Label_572; // 0x239 JumpB
	var_245_int = var_213_int; // 0x23a Mov
	goto Label_574; // 0x23b Jump
	
Label_574:
	var_336_bool = var_214_int > var_242_int; // 0x23e GT
	if(var_336_bool == 0) goto Label_578; // 0x23f JumpB
	var_246_int = var_214_int - var_242_int; // 0x240 Sub2
	goto Label_579; // 0x241 Jump
	
Label_579:
	ScreenToClient(var_245_int, var_246_int); // 0x243 Func
	var_337_int = 0; var_338_int = 0; var_339_int = 0; var_340_int = 0; // 0x245 PushV
	var_337_int = var_245_int; // 0x246 Mov
	var_338_int = var_246_int; // 0x247 Mov
	var_339_int = 250; // 0x248 MovI
	var_340_int = var_242_int; // 0x249 Mov
	func_224(var_337_int, var_338_int, var_339_int, var_340_int); // 0x24a Call
	var_341_int = 0; var_342_int = 0; var_343_object = Obj(); // 0x24c PushV
	var_344_int = 16; // 0x24d PushI
	var_341_int = var_245_int + var_344_int; // 0x24e Add2
	var_345_int = 16; // 0x24f PushI
	var_342_int = var_246_int + var_345_int; // 0x250 Add2
	var_343_object = var_215_object; // 0x251 Mov
	func_251(var_341_int, var_342_int, var_343_object); // 0x252 Call
	var_346_string = "default"; // 0x254 PushS
	var_347_int = 16; // 0x255 PushI
	var_348_int = var_245_int + var_347_int; // 0x256 Add
	var_349_int = 16; // 0x257 PushI
	var_350_int = var_246_int + var_349_int; // 0x258 Add
	var_351_int = 218; // 0x259 PushI
	var_352_int = var_350_int + var_351_int; // 0x25a Add
	var_353_int = 16; // 0x25b PushI
	var_354_int = var_352_int + var_353_int; // 0x25c Add
	var_355_int = 218; // 0x25d PushI
	var_356_float = 0.64706; // 0x25e PushF
	var_357_float = 0.64706; // 0x25f PushF
	var_358_float = 0.64706; // 0x260 PushF
	PrintInWidth(var_242_int, var_346_string, var_348_int, var_354_int, var_355_int, var_238_string, var_356_float, var_357_float, var_358_float); // 0x261 Func
	return 30; // 0x263 Return
	
Label_578:
	var_246_int = var_214_int; // 0x242 Mov
	
Label_572:
	var_359_int = 250; // 0x23c PushI
	var_245_int = var_213_int - var_359_int; // 0x23d Sub2
	
Label_548:
	var_238_string = "Error: Item doesnt have description (FIXME!)"; // 0x224 MovS
	
Label_526:
	var_360_float = 0; var_361_object = Obj(); var_362_int = 0; var_363_int = 0; // 0x20e PushV
	var_361_object = var_232_object; // 0x20f Mov
	var_362_int = var_234_int; // 0x210 Mov
	var_364_int = 0; // 0x211 PushV
	func_154(var_364_int); // 0x212 Call
	var_363_int = var_364_int; // 0x213 Mov
	func_128(var_361_object, var_362_int, var_363_int); // 0x215 Call
	var_237_float = var_360_float; // 0x216 Mov
}


func_297(var_20_int, var_21_int, var_22_object)
{
	var_23_int = 0; var_24_string = ""; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; // 0x129 PushV
	var_41_bool = var_22_object == 0; // 0x12a Not
	if(var_41_bool == 0) goto Label_301; // 0x12b JumpB
	return 18; // 0x12c Return
	
Label_301:
	var_42_int = 0; var_43_object = Obj(); // 0x12d PushV
	var_43_object = var_22_object; // 0x12e Mov
	func_97(var_43_object); // 0x12f Call
	var_32_int = var_42_int; // 0x130 Mov
	var_46_string = "Description"; // 0x132 PushS
	HasInvItemProperty(var_34_bool, var_32_int, var_46_string); // 0x133 Func
	var_47_bool = var_34_bool; // 0x135 Push
	if(var_47_bool == 0) goto Label_317; // 0x136 JumpB
	var_48_string = "Description"; // 0x137 PushS
	GetInvItemProperty(var_35_int, var_32_int, var_48_string); // 0x138 Func
	GetStringByID(var_33_string, var_35_int); // 0x13a Func
	goto Label_318; // 0x13c Jump
	
Label_318:
	var_49_string = "default"; // 0x13e PushS
	var_50_int = 218; // 0x13f PushI
	GetTextHeightInWidth(var_36_int, var_49_string, var_50_int, var_33_string); // 0x140 Func
	GetScreenSize(var_37_int, var_38_int); // 0x142 Func
	var_51_int = 266; // 0x144 PushI
	var_36_int = var_36_int + var_51_int; // 0x145 Add2
	var_52_int = var_37_int - var_20_int; // 0x146 Sub
	var_53_int = 250; // 0x147 PushI
	var_54_bool = var_52_int > var_53_int; // 0x148 GT
	if(var_54_bool == 0) goto Label_332; // 0x149 JumpB
	var_39_int = var_20_int; // 0x14a Mov
	goto Label_334; // 0x14b Jump
	
Label_334:
	var_55_bool = var_21_int > var_36_int; // 0x14e GT
	if(var_55_bool == 0) goto Label_338; // 0x14f JumpB
	var_40_int = var_21_int - var_36_int; // 0x150 Sub2
	goto Label_339; // 0x151 Jump
	
Label_339:
	ScreenToClient(var_39_int, var_40_int); // 0x153 Func
	var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; // 0x155 PushV
	var_56_int = var_39_int; // 0x156 Mov
	var_57_int = var_40_int; // 0x157 Mov
	var_58_int = 250; // 0x158 MovI
	var_59_int = var_36_int; // 0x159 Mov
	func_224(var_56_int, var_57_int, var_58_int, var_59_int); // 0x15a Call
	var_75_int = 0; var_76_int = 0; var_77_object = Obj(); // 0x15c PushV
	var_78_int = 16; // 0x15d PushI
	var_75_int = var_39_int + var_78_int; // 0x15e Add2
	var_79_int = 16; // 0x15f PushI
	var_76_int = var_40_int + var_79_int; // 0x160 Add2
	var_77_object = var_22_object; // 0x161 Mov
	func_251(var_75_int, var_76_int, var_77_object); // 0x162 Call
	var_109_string = "default"; // 0x164 PushS
	var_110_int = 16; // 0x165 PushI
	var_111_int = var_39_int + var_110_int; // 0x166 Add
	var_112_int = 16; // 0x167 PushI
	var_113_int = var_40_int + var_112_int; // 0x168 Add
	var_114_int = 218; // 0x169 PushI
	var_115_int = var_113_int + var_114_int; // 0x16a Add
	var_116_int = 16; // 0x16b PushI
	var_117_int = var_115_int + var_116_int; // 0x16c Add
	var_118_int = 218; // 0x16d PushI
	var_119_float = 0.64706; // 0x16e PushF
	var_120_float = 0.64706; // 0x16f PushF
	var_121_float = 0.64706; // 0x170 PushF
	PrintInWidth(var_36_int, var_109_string, var_111_int, var_117_int, var_118_int, var_33_string, var_119_float, var_120_float, var_121_float); // 0x171 Func
	return 18; // 0x173 Return
	
Label_338:
	var_40_int = var_21_int; // 0x152 Mov
	
Label_332:
	var_122_int = 250; // 0x14c PushI
	var_39_int = var_20_int - var_122_int; // 0x14d Sub2
	
Label_317:
	var_33_string = "Error: Item doesnt have description (FIXME!)"; // 0x13d MovS
}


func_170(var_13_int, var_14_string, var_15_object, var_16_int, var_17_int)
{
	var_18_int = 1; // 0xab PushI
	var_19_bool = var_13_int == var_18_int; // 0xac Eq
	if(var_19_bool == 0) goto Label_181; // 0xad JumpB
	var_20_int = 0; var_21_int = 0; var_22_object = Obj(); // 0xae PushV
	var_20_int = var_16_int; // 0xaf Mov
	var_21_int = var_17_int; // 0xb0 Mov
	var_22_object = var_15_object; // 0xb1 Mov
	func_297(var_20_int, var_21_int, var_22_object); // 0xb2 Call
	goto Label_223; // 0xb4 Jump
	
Label_223:
	return 0; // 0xdf Return
	
Label_181:
	var_123_int = 2; // 0xb5 PushI
	var_124_bool = var_13_int == var_123_int; // 0xb6 Eq
	if(var_124_bool == 0) goto Label_191; // 0xb7 JumpB
	var_125_int = 0; var_126_int = 0; var_127_object = Obj(); // 0xb8 PushV
	var_125_int = var_16_int; // 0xb9 Mov
	var_126_int = var_17_int; // 0xba Mov
	var_127_object = var_15_object; // 0xbb Mov
	func_372(var_125_int, var_126_int, var_127_object); // 0xbc Call
	goto Label_223; // 0xbe Jump
	
Label_191:
	var_211_int = 3; // 0xbf PushI
	var_212_bool = var_13_int == var_211_int; // 0xc0 Eq
	if(var_212_bool == 0) goto Label_202; // 0xc1 JumpB
	var_213_int = 0; var_214_int = 0; var_215_object = Obj(); var_216_bool = 0; // 0xc2 PushV
	var_213_int = var_16_int; // 0xc3 Mov
	var_214_int = var_17_int; // 0xc4 Mov
	var_215_object = var_15_object; // 0xc5 Mov
	var_216_bool = 1; // 0xc6 MovB
	func_487(var_213_int, var_214_int, var_215_object, var_216_bool); // 0xc7 Call
	goto Label_223; // 0xc9 Jump
	
Label_202:
	var_381_int = 4; // 0xca PushI
	var_382_bool = var_13_int == var_381_int; // 0xcb Eq
	if(var_382_bool == 0) goto Label_213; // 0xcc JumpB
	var_383_int = 0; var_384_int = 0; var_385_object = Obj(); var_386_bool = 0; // 0xcd PushV
	var_383_int = var_16_int; // 0xce Mov
	var_384_int = var_17_int; // 0xcf Mov
	var_385_object = var_15_object; // 0xd0 Mov
	var_386_bool = 0; // 0xd1 MovB
	func_487(var_383_int, var_384_int, var_385_object, var_386_bool); // 0xd2 Call
	goto Label_223; // 0xd4 Jump
	
Label_213:
	var_387_int = 5; // 0xd5 PushI
	var_388_bool = var_13_int == var_387_int; // 0xd6 Eq
	if(var_388_bool == 0) goto Label_223; // 0xd7 JumpB
	var_389_int = 0; var_390_int = 0; var_391_string = ""; var_392_object = Obj(); // 0xd8 PushV
	var_389_int = var_16_int; // 0xd9 Mov
	var_390_int = var_17_int; // 0xda Mov
	var_391_string = var_14_string; // 0xdb Mov
	var_392_object = var_15_object; // 0xdc Mov
	func_613(var_390_int, var_391_string, var_392_object); // 0xdd Call
}


func_372(var_125_int, var_126_int, var_127_object)
{
	var_128_int = 0; var_129_object = Obj(); var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_int = 0; var_134_float = 0; var_135_int = 0; var_136_float = 0; var_137_float = 0; var_138_int = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_object = Obj(); var_147_string = ""; var_148_string = ""; var_149_int = 0; var_150_int = 0; var_151_float = 0; var_152_int = 0; var_153_float = 0; var_154_float = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; var_161_int = 0; // 0x174 PushV
	var_162_bool = var_127_object == 0; // 0x175 Not
	if(var_162_bool == 0) goto Label_376; // 0x176 JumpB
	return 34; // 0x177 Return
	
Label_376:
	size(var_145_int); // 0x178 ObjFunc
	var_163_bool = var_145_int == 0; // 0x17a Not
	if(var_163_bool == 0) goto Label_381; // 0x17b JumpB
	return 34; // 0x17c Return
	
Label_381:
	var_164_int = var_145_int; // 0x17d Push
	if(var_164_int == 0) goto Label_444; // 0x17e JumpB
	var_150_int = 0; // 0x17f MovI
	var_151_float = 0; // 0x180 MovI
	var_152_int = 0; // 0x181 MovI
	
Label_386:
	var_165_bool = var_152_int < var_145_int; // 0x182 LT
	if(var_165_bool == 0) goto Label_399; // 0x183 JumpB
	get(var_146_object, var_152_int); // 0x184 ObjFunc
	GetTime(var_153_float); // 0x186 ObjFunc
	var_166_bool = var_153_float > var_151_float; // 0x188 GT
	if(var_166_bool == 0) goto Label_396; // 0x189 JumpB
	var_151_float = var_153_float; // 0x18a Mov
	var_150_int = var_152_int; // 0x18b Mov
	
Label_396:
	var_167_int = 1; // 0x18c PushI
	var_152_int = var_152_int + var_167_int; // 0x18d Add2
	goto Label_386; // 0x18e Jump
	
Label_399:
	get(var_146_object, var_150_int); // 0x18f ObjFunc
	GetTextID(var_149_int); // 0x191 ObjFunc
	GetStringByID(var_148_string, var_149_int); // 0x193 Func
	GetTime(var_154_float); // 0x195 ObjFunc
	var_168_int = 0; // 0x197 PushV
	var_168_int = var_154_float; // 0x198 Mov
	var_155_int = var_168_int; // 0x199 Mov
	var_169_int = 60; // 0x19b PushI
	var_170_int = var_154_float - var_155_int; // 0x19c Sub
	var_156_int = var_169_int * var_170_int; // 0x19d Mult2
	var_171_int = 10; // 0x19e PushI
	var_172_bool = var_156_int < var_171_int; // 0x19f LT
	if(var_172_bool == 0) goto Label_426; // 0x1a0 JumpB
	var_173_int = 24; // 0x1a1 PushI
	var_174_int = var_155_int / var_173_int; // 0x1a2 Mod
	var_175_string = ":0"; // 0x1a3 PushS
	var_176_int = var_174_int + var_175_string; // 0x1a4 Add
	var_177_int = var_176_int + var_156_int; // 0x1a5 Add
	var_178_string = " "; // 0x1a6 PushS
	var_179_int = var_177_int + var_178_string; // 0x1a7 Add
	var_147_string = var_147_string + var_179_int; // 0x1a8 Add2
	goto Label_434; // 0x1a9 Jump
	
Label_434:
	var_147_string = var_147_string + var_148_string; // 0x1b2 Add2
	remove(var_150_int); // 0x1b3 ObjFunc
	var_180_int = -1; // 0x1b5 PushI
	var_145_int = var_145_int + var_180_int; // 0x1b6 Add2
	var_181_int = var_145_int; // 0x1b7 Push
	if(var_181_int == 0) goto Label_443; // 0x1b8 JumpB
	var_182_string = "

"; // 0x1b9 PushS
	var_147_string = var_147_string + var_182_string; // 0x1ba Add2
	
Label_443:
	goto Label_381; // 0x1bb Jump
	
Label_426:
	var_183_int = 24; // 0x1aa PushI
	var_184_int = var_155_int / var_183_int; // 0x1ab Mod
	var_185_string = ":"; // 0x1ac PushS
	var_186_int = var_184_int + var_185_string; // 0x1ad Add
	var_187_int = var_186_int + var_156_int; // 0x1ae Add
	var_188_string = " "; // 0x1af PushS
	var_189_int = var_187_int + var_188_string; // 0x1b0 Add
	var_147_string = var_147_string + var_189_int; // 0x1b1 Add2
	
Label_444:
	var_190_string = "default"; // 0x1bc PushS
	var_191_int = 218; // 0x1bd PushI
	GetTextHeightInWidth(var_157_int, var_190_string, var_191_int, var_147_string); // 0x1be Func
	var_192_int = 32; // 0x1c0 PushI
	var_157_int = var_157_int + var_192_int; // 0x1c1 Add2
	GetScreenSize(var_158_int, var_159_int); // 0x1c2 Func
	var_193_int = var_158_int - var_125_int; // 0x1c4 Sub
	var_194_int = 250; // 0x1c5 PushI
	var_195_bool = var_193_int > var_194_int; // 0x1c6 GT
	if(var_195_bool == 0) goto Label_458; // 0x1c7 JumpB
	var_160_int = var_125_int; // 0x1c8 Mov
	goto Label_460; // 0x1c9 Jump
	
Label_460:
	var_196_bool = var_126_int > var_157_int; // 0x1cc GT
	if(var_196_bool == 0) goto Label_464; // 0x1cd JumpB
	var_161_int = var_126_int - var_157_int; // 0x1ce Sub2
	goto Label_465; // 0x1cf Jump
	
Label_465:
	ScreenToClient(var_160_int, var_161_int); // 0x1d1 Func
	var_197_int = 0; var_198_int = 0; var_199_int = 0; var_200_int = 0; // 0x1d3 PushV
	var_197_int = var_160_int; // 0x1d4 Mov
	var_198_int = var_161_int; // 0x1d5 Mov
	var_199_int = 250; // 0x1d6 MovI
	var_200_int = var_157_int; // 0x1d7 Mov
	func_224(var_197_int, var_198_int, var_199_int, var_200_int); // 0x1d8 Call
	var_201_string = "default"; // 0x1da PushS
	var_202_int = 16; // 0x1db PushI
	var_203_int = var_160_int + var_202_int; // 0x1dc Add
	var_204_int = 16; // 0x1dd PushI
	var_205_int = var_161_int + var_204_int; // 0x1de Add
	var_206_int = 218; // 0x1df PushI
	var_207_float = 0.64706; // 0x1e0 PushF
	var_208_float = 0.64706; // 0x1e1 PushF
	var_209_float = 0.64706; // 0x1e2 PushF
	PrintInWidth(var_157_int, var_201_string, var_203_int, var_205_int, var_206_int, var_147_string, var_207_float, var_208_float, var_209_float); // 0x1e3 Func
	return 34; // 0x1e5 Return
	
Label_464:
	var_161_int = var_126_int; // 0x1d0 Mov
	
Label_458:
	var_210_int = 250; // 0x1ca PushI
	var_160_int = var_125_int - var_210_int; // 0x1cb Sub2
}


func_154(var_256_int)
{
	var_257_object = Obj(); var_258_bool = 0; var_259_int = 0; var_260_object = Obj(); var_261_bool = 0; var_262_int = 0; // 0x9a PushV
	GetContainer(var_260_object); // 0x9b Func
	var_263_string = "barter"; // 0x9d PushS
	HasProperty(var_263_string, var_261_bool); // 0x9e ObjFunc
	var_264_bool = var_261_bool == 0; // 0xa0 Not
	if(var_264_bool == 0) goto Label_164; // 0xa1 JumpB
	var_256_int = 0; // 0xa2 MovI
	return 6; // 0xa3 Return
	
Label_164:
	var_265_string = "barter"; // 0xa4 PushS
	GetProperty(var_265_string, var_262_int); // 0xa5 ObjFunc
	var_256_int = var_262_int; // 0xa7 Mov
	return 6; // 0xa8 Return
}


func_251(var_75_int, var_76_int, var_77_object)
{
	var_80_int = 0; var_81_string = ""; var_82_int = 0; var_83_string = ""; // 0xfb PushV
	var_84_bool = var_77_object == 0; // 0xfc Not
	if(var_84_bool == 0) goto Label_255; // 0xfd JumpB
	return 4; // 0xfe Return
	
Label_255:
	var_85_int = 0; var_86_object = Obj(); // 0xff PushV
	var_86_object = var_77_object; // 0x100 Mov
	func_97(var_86_object); // 0x101 Call
	var_82_int = var_85_int; // 0x102 Mov
	GetInvItemSprite2(var_83_string, var_82_int); // 0x104 Func
	LoadImage(var_83_string); // 0x106 Func
	var_87_int = 218; // 0x108 PushI
	var_88_int = 218; // 0x109 PushI
	StretchBlit(var_83_string, var_75_int, var_76_int, var_87_int, var_88_int); // 0x10a Func
	var_89_string = "border"; // 0x10c PushS
	var_90_int = 218; // 0x10d PushI
	var_91_int = 1; // 0x10e PushI
	StretchBlit(var_89_string, var_75_int, var_76_int, var_90_int, var_91_int); // 0x10f Func
	var_92_string = "border"; // 0x111 PushS
	var_93_int = 218; // 0x112 PushI
	var_94_int = var_76_int + var_93_int; // 0x113 Add
	var_95_int = 1; // 0x114 PushI
	var_96_int = var_94_int - var_95_int; // 0x115 Sub
	var_97_int = 218; // 0x116 PushI
	var_98_int = 1; // 0x117 PushI
	StretchBlit(var_92_string, var_75_int, var_96_int, var_97_int, var_98_int); // 0x118 Func
	var_99_string = "border"; // 0x11a PushS
	var_100_int = 1; // 0x11b PushI
	var_101_int = 218; // 0x11c PushI
	StretchBlit(var_99_string, var_75_int, var_76_int, var_100_int, var_101_int); // 0x11d Func
	var_102_string = "border"; // 0x11f PushS
	var_103_int = 218; // 0x120 PushI
	var_104_int = var_75_int + var_103_int; // 0x121 Add
	var_105_int = 1; // 0x122 PushI
	var_106_int = var_104_int - var_105_int; // 0x123 Sub
	var_107_int = 1; // 0x124 PushI
	var_108_int = 218; // 0x125 PushI
	StretchBlit(var_102_string, var_106_int, var_76_int, var_107_int, var_108_int); // 0x126 Func
	return 4; // 0x128 Return
}


