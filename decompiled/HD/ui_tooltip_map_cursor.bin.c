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
	var_781_string = "default"; // 0x1f PushS
	var_782_int = 0; // 0x20 PushI
	var_783_int = 0; // 0x21 PushI
	Blit(var_781_string, var_782_int, var_783_int); // 0x22 Func
	return 12; // 0x24 Return
}


main()
{
	var_0_bool = 1; // 0x0 PushB
	SetOwnerDraw(var_0_bool); // 0x1 Func
	ProcessEvents(); // 0x3 Func
	return 0; // 0x5 Return
}


func_961(var_298_int, var_299_int, var_300_object, var_301_float)
{
	var_302_int = 0; var_303_object = Obj(); var_304_string = ""; var_305_string = ""; var_306_int = 0; var_307_int = 0; var_308_float = 0; var_309_int = 0; var_310_float = 0; var_311_float = 0; var_312_int = 0; var_313_int = 0; var_314_int = 0; var_315_int = 0; var_316_int = 0; var_317_int = 0; var_318_int = 0; var_319_int = 0; var_320_object = Obj(); var_321_string = ""; var_322_string = ""; var_323_int = 0; var_324_int = 0; var_325_float = 0; var_326_int = 0; var_327_float = 0; var_328_float = 0; var_329_int = 0; var_330_int = 0; var_331_int = 0; var_332_int = 0; var_333_int = 0; var_334_int = 0; var_335_int = 0; // 0x3c1 PushV
	var_336_bool = var_300_object == 0; // 0x3c2 Not
	if(var_336_bool == 0) goto Label_965; // 0x3c3 JumpB
	return 34; // 0x3c4 Return
	
Label_965:
	var_301_float = 1; // 0x3c5 MovI
	size(var_319_int); // 0x3c6 ObjFunc
	var_337_bool = var_319_int == 0; // 0x3c8 Not
	if(var_337_bool == 0) goto Label_971; // 0x3c9 JumpB
	return 34; // 0x3ca Return
	
Label_971:
	var_338_int = var_319_int; // 0x3cb Push
	if(var_338_int == 0) goto Label_1034; // 0x3cc JumpB
	var_324_int = 0; // 0x3cd MovI
	var_325_float = 0; // 0x3ce MovI
	var_326_int = 0; // 0x3cf MovI
	
Label_976:
	var_339_bool = var_326_int < var_319_int; // 0x3d0 LT
	if(var_339_bool == 0) goto Label_989; // 0x3d1 JumpB
	get(var_320_object, var_326_int); // 0x3d2 ObjFunc
	GetTime(var_327_float); // 0x3d4 ObjFunc
	var_340_bool = var_327_float > var_325_float; // 0x3d6 GT
	if(var_340_bool == 0) goto Label_986; // 0x3d7 JumpB
	var_325_float = var_327_float; // 0x3d8 Mov
	var_324_int = var_326_int; // 0x3d9 Mov
	
Label_986:
	var_341_int = 1; // 0x3da PushI
	var_326_int = var_326_int + var_341_int; // 0x3db Add2
	goto Label_976; // 0x3dc Jump
	
Label_989:
	get(var_320_object, var_324_int); // 0x3dd ObjFunc
	GetTextID(var_323_int); // 0x3df ObjFunc
	GetStringByID(var_322_string, var_323_int); // 0x3e1 Func
	GetTime(var_328_float); // 0x3e3 ObjFunc
	var_342_int = 0; // 0x3e5 PushV
	var_342_int = var_328_float; // 0x3e6 Mov
	var_329_int = var_342_int; // 0x3e7 Mov
	var_343_int = 60; // 0x3e9 PushI
	var_344_int = var_328_float - var_329_int; // 0x3ea Sub
	var_330_int = var_343_int * var_344_int; // 0x3eb Mult2
	var_345_int = 10; // 0x3ec PushI
	var_346_bool = var_330_int < var_345_int; // 0x3ed LT
	if(var_346_bool == 0) goto Label_1016; // 0x3ee JumpB
	var_347_int = 24; // 0x3ef PushI
	var_348_int = var_329_int / var_347_int; // 0x3f0 Mod
	var_349_string = ":0"; // 0x3f1 PushS
	var_350_int = var_348_int + var_349_string; // 0x3f2 Add
	var_351_int = var_350_int + var_330_int; // 0x3f3 Add
	var_352_string = " "; // 0x3f4 PushS
	var_353_int = var_351_int + var_352_string; // 0x3f5 Add
	var_321_string = var_321_string + var_353_int; // 0x3f6 Add2
	goto Label_1024; // 0x3f7 Jump
	
Label_1024:
	var_321_string = var_321_string + var_322_string; // 0x400 Add2
	remove(var_324_int); // 0x401 ObjFunc
	var_354_int = -1; // 0x403 PushI
	var_319_int = var_319_int + var_354_int; // 0x404 Add2
	var_355_int = var_319_int; // 0x405 Push
	if(var_355_int == 0) goto Label_1033; // 0x406 JumpB
	var_356_string = "

"; // 0x407 PushS
	var_321_string = var_321_string + var_356_string; // 0x408 Add2
	
Label_1033:
	goto Label_971; // 0x409 Jump
	
Label_1016:
	var_357_int = 24; // 0x3f8 PushI
	var_358_int = var_329_int / var_357_int; // 0x3f9 Mod
	var_359_string = ":"; // 0x3fa PushS
	var_360_int = var_358_int + var_359_string; // 0x3fb Add
	var_361_int = var_360_int + var_330_int; // 0x3fc Add
	var_362_string = " "; // 0x3fd PushS
	var_363_int = var_361_int + var_362_string; // 0x3fe Add
	var_321_string = var_321_string + var_363_int; // 0x3ff Add2
	
Label_1034:
	var_364_string = "default"; // 0x40a PushS
	var_365_int = 268; // 0x40b PushI
	GetTextHeightInWidth(var_331_int, var_364_string, var_365_int, var_321_string); // 0x40c Func
	var_366_int = 32; // 0x40e PushI
	var_331_int = var_331_int + var_366_int; // 0x40f Add2
	GetScreenSize(var_332_int, var_333_int); // 0x410 Func
	var_367_int = var_332_int - var_298_int; // 0x412 Sub
	var_368_int = 300; // 0x413 PushI
	var_369_bool = var_367_int > var_368_int; // 0x414 GT
	if(var_369_bool == 0) goto Label_1048; // 0x415 JumpB
	var_334_int = var_298_int; // 0x416 Mov
	goto Label_1050; // 0x417 Jump
	
Label_1050:
	var_370_bool = var_299_int > var_331_int; // 0x41a GT
	if(var_370_bool == 0) goto Label_1054; // 0x41b JumpB
	var_335_int = var_299_int - var_331_int; // 0x41c Sub2
	goto Label_1061; // 0x41d Jump
	
Label_1061:
	ScreenToClient(var_334_int, var_335_int); // 0x425 Func
	var_371_int = 0; var_372_int = 0; var_373_int = 0; var_374_int = 0; var_375_float = 0; // 0x427 PushV
	var_371_int = var_334_int; // 0x428 Mov
	var_372_int = var_335_int; // 0x429 Mov
	var_373_int = 300; // 0x42a MovI
	var_374_int = var_331_int; // 0x42b Mov
	var_375_float = var_301_float; // 0x42c Mov
	func_270(var_371_int, var_372_int, var_373_int, var_374_int, var_375_float); // 0x42d NEW_2
	var_376_string = "default"; // 0x42f PushS
	var_377_int = 16; // 0x430 PushI
	var_378_int = var_334_int + var_377_int; // 0x431 Add
	var_379_int = 16; // 0x432 PushI
	var_380_int = var_335_int + var_379_int; // 0x433 Add
	var_381_int = 268; // 0x434 PushI
	var_382_float = 0.64706; // 0x435 PushF
	var_383_float = 0.64706; // 0x436 PushF
	var_384_float = 0.64706; // 0x437 PushF
	PrintInWidth(var_331_int, var_376_string, var_378_int, var_380_int, var_381_int, var_321_string, var_382_float, var_383_float, var_384_float, var_301_float); // 0x438 Func
	return 34; // 0x43a Return
	
Label_1054:
	var_335_int = var_299_int; // 0x41e Mov
	var_385_int = var_335_int + var_331_int; // 0x41f Add
	var_386_int = 600; // 0x420 PushI
	var_387_bool = var_385_int > var_386_int; // 0x421 GT
	if(var_387_bool == 0) goto Label_1061; // 0x422 JumpB
	var_388_int = 600; // 0x423 PushI
	var_335_int = var_388_int - var_331_int; // 0x424 Sub2
	
Label_1048:
	var_389_int = 300; // 0x418 PushI
	var_334_int = var_298_int - var_389_int; // 0x419 Sub2
}


func_194(var_488_int)
{
	var_489_object = Obj(); var_490_bool = 0; var_491_int = 0; var_492_object = Obj(); var_493_bool = 0; var_494_int = 0; // 0xc2 PushV
	GetContainer(var_492_object); // 0xc3 Func
	var_495_string = "barter"; // 0xc5 PushS
	HasProperty(var_495_string, var_493_bool); // 0xc6 ObjFunc
	var_496_bool = var_493_bool == 0; // 0xc8 Not
	if(var_496_bool == 0) goto Label_204; // 0xc9 JumpB
	var_488_int = 0; // 0xca MovI
	return 6; // 0xcb Return
	
Label_204:
	var_497_string = "barter"; // 0xcc PushS
	GetProperty(var_497_string, var_494_int); // 0xcd ObjFunc
	var_488_int = var_494_int; // 0xcf Mov
	return 6; // 0xd0 Return
}


func_133(var_518_int)
{
	var_519_float = 0; var_520_float = 0; // 0x85 PushV
	GetGameTime(var_520_float); // 0x86 Func
	var_521_int = 1; // 0x88 PushI
	var_522_int = 0; // 0x89 PushV
	var_523_int = 24; // 0x8a PushI
	var_522_int = var_520_float / var_520_float; // 0x8b Div2
	var_518_int = var_521_int + var_522_int; // 0x8c Add2
	return 2; // 0x8d Return
}


func_39(var_101_int)
{
	var_103_int = 0; var_104_int = 0; // 0x27 PushV
	GetItemID(var_104_int); // 0x28 ObjFunc
	var_101_int = var_104_int; // 0x2a Mov
	return 2; // 0x2b Return
}


func_168(var_710_float, var_712_int, var_713_int)
{
	var_715_float = 0; var_716_int = 0; var_717_bool = 0; var_718_float = 0; var_719_int = 0; var_720_bool = 0; // 0xa8 PushV
	var_721_int = 0; // 0xa9 PushI
	var_722_bool = var_713_int != var_721_int; // 0xaa Neq
	if(var_722_bool == 0) goto Label_174; // 0xab JumpB
	var_710_float = 1; // 0xac MovI
	return 6; // 0xad Return
	
Label_174:
	var_718_float = 1; // 0xae MovI
	var_719_int = 1; // 0xaf MovI
	
Label_176:
	var_723_bool = var_719_int <= var_712_int; // 0xb0 LE
	if(var_723_bool == 0) goto Label_191; // 0xb1 JumpB
	var_724_string = "buyf"; // 0xb2 PushS
	var_725_int = var_724_string + var_719_int; // 0xb3 Add
	HasProperty(var_725_int, var_720_bool); // 0xb4 ObjFunc
	var_726_bool = var_720_bool; // 0xb6 Push
	if(var_726_bool == 0) goto Label_188; // 0xb7 JumpB
	var_727_string = "buyf"; // 0xb8 PushS
	var_728_int = var_727_string + var_719_int; // 0xb9 Add
	GetProperty(var_728_int, var_718_float); // 0xba ObjFunc
	
Label_188:
	var_729_int = 1; // 0xbc PushI
	var_719_int = var_719_int + var_729_int; // 0xbd Add2
	goto Label_176; // 0xbe Jump
	
Label_191:
	var_730_int = 100; // 0xbf PushI
	var_710_float = var_718_float / var_718_float; // 0xc0 Div2
	return 6; // 0xc1 Return
}


func_297(var_191_int, var_192_int, var_193_object, var_194_float)
{
	var_197_int = 0; var_198_string = ""; var_199_int = 0; var_200_string = ""; // 0x129 PushV
	var_201_bool = var_193_object == 0; // 0x12a Not
	if(var_201_bool == 0) goto Label_301; // 0x12b JumpB
	return 4; // 0x12c Return
	
Label_301:
	var_202_int = 0; var_203_object = Obj(); // 0x12d PushV
	var_203_object = var_193_object; // 0x12e Mov
	func_39(var_203_object); // 0x12f NEW_2
	var_199_int = var_202_int; // 0x130 Mov
	GetInvItemSprite2(var_200_string, var_199_int); // 0x132 Func
	var_204_int = 218; // 0x134 PushI
	var_205_int = 218; // 0x135 PushI
	StretchBlit(var_200_string, var_191_int, var_192_int, var_204_int, var_205_int, var_194_float); // 0x136 Func
	var_206_string = "border"; // 0x138 PushS
	var_207_int = 218; // 0x139 PushI
	var_208_int = 1; // 0x13a PushI
	StretchBlit(var_206_string, var_191_int, var_192_int, var_207_int, var_208_int, var_194_float); // 0x13b Func
	var_209_string = "border"; // 0x13d PushS
	var_210_int = 218; // 0x13e PushI
	var_211_int = var_192_int + var_210_int; // 0x13f Add
	var_212_int = 1; // 0x140 PushI
	var_213_int = var_211_int - var_212_int; // 0x141 Sub
	var_214_int = 218; // 0x142 PushI
	var_215_int = 1; // 0x143 PushI
	StretchBlit(var_209_string, var_191_int, var_213_int, var_214_int, var_215_int, var_194_float); // 0x144 Func
	var_216_string = "border"; // 0x146 PushS
	var_217_int = 1; // 0x147 PushI
	var_218_int = 218; // 0x148 PushI
	StretchBlit(var_216_string, var_191_int, var_192_int, var_217_int, var_218_int, var_194_float); // 0x149 Func
	var_219_string = "border"; // 0x14b PushS
	var_220_int = 218; // 0x14c PushI
	var_221_int = var_191_int + var_220_int; // 0x14d Add
	var_222_int = 1; // 0x14e PushI
	var_223_int = var_221_int - var_222_int; // 0x14f Sub
	var_224_int = 1; // 0x150 PushI
	var_225_int = 218; // 0x151 PushI
	StretchBlit(var_219_string, var_223_int, var_192_int, var_224_int, var_225_int, var_194_float); // 0x152 Func
	return 4; // 0x154 Return
}


func_44(var_485_int, var_486_object, var_487_int)
{
	var_498_int = 0; var_499_int = 0; var_500_int = 0; var_501_string = ""; var_502_bool = 0; var_503_bool = 0; var_504_int = 0; var_505_bool = 0; var_506_int = 0; var_507_int = 0; var_508_int = 0; var_509_int = 0; var_510_string = ""; var_511_bool = 0; var_512_bool = 0; var_513_int = 0; var_514_bool = 0; var_515_int = 0; // 0x2c PushV
	var_516_int = 0; // 0x2d PushI
	var_517_bool = var_487_int == var_516_int; // 0x2e Eq
	if(var_517_bool == 0) goto Label_96; // 0x2f JumpB
	var_518_int = 0; // 0x30 PushV
	func_133(var_518_int); // 0x31 NEW_2
	var_507_int = var_518_int; // 0x32 Mov
	var_508_int = 0; // 0x34 MovI
	var_509_int = 1; // 0x35 MovI
	
Label_54:
	var_524_bool = var_509_int <= var_507_int; // 0x36 LE
	if(var_524_bool == 0) goto Label_79; // 0x37 JumpB
	var_510_string = "Price"; // 0x38 MovS
	var_525_int = 1; // 0x39 PushI
	var_526_bool = var_509_int != var_525_int; // 0x3a Neq
	if(var_526_bool == 0) goto Label_61; // 0x3b JumpB
	var_510_string = var_510_string + var_509_int; // 0x3c Add2
	
Label_61:
	var_527_int = 0; var_528_object = Obj(); // 0x3d PushV
	var_528_object = var_486_object; // 0x3e Mov
	func_39(var_528_object); // 0x3f NEW_2
	HasInvItemProperty(var_511_bool, var_527_int, var_510_string); // 0x41 Func
	var_529_bool = var_511_bool == 0; // 0x43 Not
	if(var_529_bool == 0) goto Label_70; // 0x44 JumpB
	goto Label_76; // 0x45 Jump
	
Label_76:
	var_530_int = 1; // 0x4c PushI
	var_509_int = var_509_int + var_530_int; // 0x4d Add2
	goto Label_54; // 0x4e Jump
	
Label_70:
	var_531_int = 0; var_532_object = Obj(); // 0x46 PushV
	var_532_object = var_486_object; // 0x47 Mov
	func_39(var_532_object); // 0x48 NEW_2
	GetInvItemProperty(var_508_int, var_531_int, var_510_string); // 0x4a Func
	
Label_79:
	var_533_string = "durability"; // 0x4f PushS
	HasProperty(var_512_bool, var_533_string); // 0x50 ObjFunc
	var_534_bool = var_512_bool; // 0x52 Push
	if(var_534_bool == 0) goto Label_94; // 0x53 JumpB
	var_535_string = "durability"; // 0x54 PushS
	GetProperty(var_513_int, var_535_string); // 0x55 ObjFunc
	var_536_float = 0.5; // 0x57 PushF
	var_537_float = 1.0; // 0x58 PushF
	var_538_float = 100.0; // 0x59 PushF
	var_539_float = var_513_int / var_538_float; // 0x5a Div
	var_540_int = var_537_float + var_539_float; // 0x5b Add
	var_541_float = var_536_float * var_540_int; // 0x5c Mult
	var_508_int = var_508_int * var_541_float; // 0x5d Mult2
	
Label_94:
	var_485_int = var_508_int; // 0x5e Mov
	return 18; // 0x5f Return
	
Label_96:
	var_542_int = 0; var_543_object = Obj(); // 0x60 PushV
	var_543_object = var_486_object; // 0x61 Mov
	func_39(var_543_object); // 0x62 NEW_2
	var_544_string = "BarterPrice"; // 0x64 PushS
	var_545_int = var_544_string + var_487_int; // 0x65 Add
	HasInvItemProperty(var_514_bool, var_542_int, var_545_int); // 0x66 Func
	var_546_bool = var_514_bool == 0; // 0x68 Not
	if(var_546_bool == 0) goto Label_108; // 0x69 JumpB
	var_485_int = 0; // 0x6a MovI
	return 18; // 0x6b Return
	
Label_108:
	var_547_int = 0; var_548_object = Obj(); // 0x6c PushV
	var_548_object = var_486_object; // 0x6d Mov
	func_39(var_548_object); // 0x6e NEW_2
	var_549_string = "BarterPrice"; // 0x70 PushS
	var_550_int = var_549_string + var_487_int; // 0x71 Add
	GetInvItemProperty(var_515_int, var_547_int, var_550_int); // 0x72 Func
	var_551_int = 0; // 0x74 PushI
	var_552_bool = var_515_int > var_551_int; // 0x75 GT
	if(var_552_bool == 0) goto Label_121; // 0x76 JumpB
	var_485_int = var_515_int; // 0x77 Mov
	return 18; // 0x78 Return
	
Label_121:
	var_485_int = -var_515_int; // 0x79 Neg2
	return 18; // 0x7a Return
}


func_270(var_171_int, var_172_int, var_173_int, var_174_int, var_175_float)
{
	var_176_string = "bg"; // 0x10f PushS
	BlitClipped(var_176_string, var_171_int, var_172_int, var_171_int, var_172_int, var_173_int, var_174_int, var_175_float); // 0x110 Func
	var_177_string = "border"; // 0x112 PushS
	var_178_int = 1; // 0x113 PushI
	StretchBlit(var_177_string, var_171_int, var_172_int, var_173_int, var_178_int, var_175_float); // 0x114 Func
	var_179_string = "border"; // 0x116 PushS
	var_180_int = var_172_int + var_174_int; // 0x117 Add
	var_181_int = 1; // 0x118 PushI
	var_182_int = var_180_int - var_181_int; // 0x119 Sub
	var_183_int = 1; // 0x11a PushI
	StretchBlit(var_179_string, var_171_int, var_182_int, var_173_int, var_183_int, var_175_float); // 0x11b Func
	var_184_string = "border"; // 0x11d PushS
	var_185_int = 1; // 0x11e PushI
	StretchBlit(var_184_string, var_171_int, var_172_int, var_185_int, var_174_int, var_175_float); // 0x11f Func
	var_186_string = "border"; // 0x121 PushS
	var_187_int = var_171_int + var_173_int; // 0x122 Add
	var_188_int = 1; // 0x123 PushI
	var_189_int = var_187_int - var_188_int; // 0x124 Sub
	var_190_int = 1; // 0x125 PushI
	StretchBlit(var_186_string, var_189_int, var_172_int, var_190_int, var_174_int, var_175_float); // 0x126 Func
	return 0; // 0x128 Return
}


func_142(var_554_float, var_556_int, var_557_int)
{
	var_559_float = 0; var_560_int = 0; var_561_bool = 0; var_562_float = 0; var_563_int = 0; var_564_bool = 0; // 0x8e PushV
	var_565_int = 0; // 0x8f PushI
	var_566_bool = var_557_int != var_565_int; // 0x90 Neq
	if(var_566_bool == 0) goto Label_148; // 0x91 JumpB
	var_554_float = 1; // 0x92 MovI
	return 6; // 0x93 Return
	
Label_148:
	var_562_float = 1; // 0x94 MovI
	var_563_int = 1; // 0x95 MovI
	
Label_150:
	var_567_bool = var_563_int <= var_556_int; // 0x96 LE
	if(var_567_bool == 0) goto Label_165; // 0x97 JumpB
	var_568_string = "sellf"; // 0x98 PushS
	var_569_int = var_568_string + var_563_int; // 0x99 Add
	HasProperty(var_569_int, var_564_bool); // 0x9a ObjFunc
	var_570_bool = var_564_bool; // 0x9c Push
	if(var_570_bool == 0) goto Label_162; // 0x9d JumpB
	var_571_string = "sellf"; // 0x9e PushS
	var_572_int = var_571_string + var_563_int; // 0x9f Add
	GetProperty(var_572_int, var_562_float); // 0xa0 ObjFunc
	
Label_162:
	var_573_int = 1; // 0xa2 PushI
	var_563_int = var_563_int + var_573_int; // 0xa3 Add2
	goto Label_150; // 0xa4 Jump
	
Label_165:
	var_574_int = 100; // 0xa5 PushI
	var_554_float = var_562_float / var_562_float; // 0xa6 Div2
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
	var_296_int = 2; // 0xdf PushI
	var_297_bool = var_13_int == var_296_int; // 0xe0 Eq
	if(var_297_bool == 0) goto Label_234; // 0xe1 JumpB
	var_298_int = 0; var_299_int = 0; var_300_object = Obj(); var_301_float = 0; // 0xe2 PushV
	var_298_int = var_16_int; // 0xe3 Mov
	var_299_int = var_17_int; // 0xe4 Mov
	var_300_object = var_15_object; // 0xe5 Mov
	var_301_float = var_18_float; // 0xe6 Mov
	func_961(var_298_int, var_299_int, var_300_object, var_301_float); // 0xe7 NEW_2
	goto Label_269; // 0xe9 Jump
	
Label_234:
	var_390_int = 3; // 0xea PushI
	var_391_bool = var_13_int == var_390_int; // 0xeb Eq
	if(var_391_bool == 0) goto Label_246; // 0xec JumpB
	var_392_int = 0; var_393_int = 0; var_394_object = Obj(); var_395_bool = 0; var_396_float = 0; // 0xed PushV
	var_392_int = var_16_int; // 0xee Mov
	var_393_int = var_17_int; // 0xef Mov
	var_394_object = var_15_object; // 0xf0 Mov
	var_395_bool = 1; // 0xf1 MovB
	var_396_float = var_18_float; // 0xf2 Mov
	func_634(var_392_int, var_393_int, var_394_object, var_395_bool, var_396_float); // 0xf3 NEW_2
	goto Label_269; // 0xf5 Jump
	
Label_246:
	var_731_int = 4; // 0xf6 PushI
	var_732_bool = var_13_int == var_731_int; // 0xf7 Eq
	if(var_732_bool == 0) goto Label_258; // 0xf8 JumpB
	var_733_int = 0; var_734_int = 0; var_735_object = Obj(); var_736_bool = 0; var_737_float = 0; // 0xf9 PushV
	var_733_int = var_16_int; // 0xfa Mov
	var_734_int = var_17_int; // 0xfb Mov
	var_735_object = var_15_object; // 0xfc Mov
	var_736_bool = 0; // 0xfd MovB
	var_737_float = var_18_float; // 0xfe Mov
	func_634(var_733_int, var_734_int, var_735_object, var_736_bool, var_737_float); // 0xff NEW_2
	goto Label_269; // 0x101 Jump
	
Label_258:
	var_738_int = 5; // 0x102 PushI
	var_739_bool = var_13_int == var_738_int; // 0x103 Eq
	if(var_739_bool == 0) goto Label_269; // 0x104 JumpB
	var_740_int = 0; var_741_int = 0; var_742_string = ""; var_743_object = Obj(); var_744_float = 0; // 0x105 PushV
	var_740_int = var_16_int; // 0x106 Mov
	var_741_int = var_17_int; // 0x107 Mov
	var_742_string = var_14_string; // 0x108 Mov
	var_743_object = var_15_object; // 0x109 Mov
	var_744_float = var_18_float; // 0x10a Mov
	func_1084(var_741_int, var_742_string, var_743_object, var_744_float); // 0x10b NEW_2
}


func_341(var_21_int, var_22_int, var_23_object, var_24_string, var_25_float)
{
	var_26_int = 0; var_27_string = ""; var_28_string = ""; var_29_string = ""; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_bool = 0; var_40_int = 0; var_41_int = 0; var_42_string = ""; var_43_bool = 0; var_44_float = 0; var_45_float = 0; var_46_string = ""; var_47_string = ""; var_48_string = ""; var_49_int = 0; var_50_int = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_string = ""; var_56_string = ""; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_string = ""; var_65_string = ""; var_66_string = ""; var_67_bool = 0; var_68_int = 0; var_69_int = 0; var_70_int = 0; var_71_bool = 0; var_72_bool = 0; var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_bool = 0; var_77_int = 0; var_78_int = 0; var_79_string = ""; var_80_bool = 0; var_81_float = 0; var_82_float = 0; var_83_string = ""; var_84_string = ""; var_85_string = ""; var_86_int = 0; var_87_int = 0; var_88_float = 0; var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_string = ""; var_93_string = ""; var_94_int = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; // 0x155 PushV
	var_100_bool = var_23_object == 0; // 0x156 Not
	if(var_100_bool == 0) goto Label_345; // 0x157 JumpB
	return 74; // 0x158 Return
	
Label_345:
	var_101_int = 0; var_102_object = Obj(); // 0x159 PushV
	var_102_object = var_23_object; // 0x15a Mov
	func_39(var_102_object); // 0x15b NEW_2
	var_63_int = var_101_int; // 0x15c Mov
	var_105_string = "Description"; // 0x15e PushS
	HasInvItemProperty(var_67_bool, var_63_int, var_105_string); // 0x15f Func
	var_106_bool = var_67_bool; // 0x161 Push
	if(var_106_bool == 0) goto Label_361; // 0x162 JumpB
	var_107_string = "Description"; // 0x163 PushS
	GetInvItemProperty(var_68_int, var_63_int, var_107_string); // 0x164 Func
	GetStringByID(var_64_string, var_68_int); // 0x166 Func
	goto Label_362; // 0x168 Jump
	
Label_362:
	var_108_string = "default"; // 0x16a PushS
	var_109_int = 268; // 0x16b PushI
	GetTextHeightInWidth(var_69_int, var_108_string, var_109_int, var_64_string); // 0x16c Func
	var_110_string = "default"; // 0x16e PushS
	GetFontHeight(var_70_int, var_110_string); // 0x16f Func
	var_69_int = var_69_int + var_70_int; // 0x171 Add2
	var_111_string = "HasDurability"; // 0x172 PushS
	HasInvItemProperty(var_71_bool, var_63_int, var_111_string); // 0x173 Func
	var_112_string = "durability"; // 0x175 PushS
	HasProperty(var_72_bool, var_112_string); // 0x176 ObjFunc
	var_113_bool = 0; // 0x178 PushV
	var_113_bool = 1; // 0x179 MovB
	var_114_bool = var_72_bool; // 0x17a Push
	if(var_114_bool == 0) goto Label_383; // 0x17b JumpB
	var_115_bool = var_71_bool; // 0x17c Push
	if(var_115_bool == 0) goto Label_383; // 0x17d JumpB
	var_113_bool = 0; // 0x17e MovB
	
Label_383:
	if(var_113_bool == 0) goto Label_406; // 0x17f JumpB
	var_116_bool = var_72_bool; // 0x180 Push
	if(var_116_bool == 0) goto Label_390; // 0x181 JumpB
	var_117_string = "durability"; // 0x182 PushS
	GetProperty(var_73_int, var_117_string); // 0x183 ObjFunc
	goto Label_391; // 0x185 Jump
	
Label_391:
	var_118_int = 7; // 0x187 PushI
	GetStringByID(var_65_string, var_118_int); // 0x188 Func
	var_119_string = " "; // 0x18a PushS
	var_120_int = var_119_string + var_73_int; // 0x18b Add
	var_121_string = "%"; // 0x18c PushS
	var_122_int = var_120_int + var_121_string; // 0x18d Add
	var_65_string = var_65_string + var_122_int; // 0x18e Add2
	var_123_string = "default"; // 0x18f PushS
	var_124_int = 268; // 0x190 PushI
	GetTextHeightInWidth(var_74_int, var_123_string, var_124_int, var_65_string); // 0x191 Func
	var_125_int = 2; // 0x193 PushI
	var_126_float = var_74_int * var_125_int; // 0x194 Mult
	var_69_int = var_69_int + var_126_float; // 0x195 Add2
	
Label_406:
	var_127_string = "HasUses"; // 0x196 PushS
	HasInvItemProperty(var_75_bool, var_63_int, var_127_string); // 0x197 Func
	var_128_string = "uses"; // 0x199 PushS
	HasProperty(var_76_bool, var_128_string); // 0x19a ObjFunc
	var_129_bool = 0; // 0x19c PushV
	var_129_bool = 1; // 0x19d MovB
	var_130_bool = var_76_bool; // 0x19e Push
	if(var_130_bool == 0) goto Label_419; // 0x19f JumpB
	var_131_bool = var_75_bool; // 0x1a0 Push
	if(var_131_bool == 0) goto Label_419; // 0x1a1 JumpB
	var_129_bool = 0; // 0x1a2 MovB
	
Label_419:
	if(var_129_bool == 0) goto Label_438; // 0x1a3 JumpB
	var_132_bool = var_76_bool; // 0x1a4 Push
	if(var_132_bool == 0) goto Label_426; // 0x1a5 JumpB
	var_133_string = "uses"; // 0x1a6 PushS
	GetProperty(var_77_int, var_133_string); // 0x1a7 ObjFunc
	goto Label_427; // 0x1a9 Jump
	
Label_427:
	var_134_int = 1006; // 0x1ab PushI
	GetStringByID(var_66_string, var_134_int); // 0x1ac Func
	var_135_string = " "; // 0x1ae PushS
	var_136_int = var_135_string + var_77_int; // 0x1af Add
	var_66_string = var_66_string + var_136_int; // 0x1b0 Add2
	var_137_string = "default"; // 0x1b1 PushS
	var_138_int = 268; // 0x1b2 PushI
	GetTextHeightInWidth(var_78_int, var_137_string, var_138_int, var_66_string); // 0x1b3 Func
	var_69_int = var_69_int + var_78_int; // 0x1b5 Add2
	
Label_438:
	var_80_bool = 0; // 0x1b6 MovB
	var_139_string = ""; var_140_object = Obj(); // 0x1b7 PushV
	var_140_object = var_23_object; // 0x1b8 Mov
	func_123(var_139_string, var_140_object); // 0x1b9 NEW_2
	var_147_string = "grass_combination"; // 0x1bb PushS
	var_148_bool = var_139_string == var_147_string; // 0x1bc Eq
	if(var_148_bool == 0) goto Label_480; // 0x1bd JumpB
	var_80_bool = 1; // 0x1be MovB
	var_149_string = "im_inc"; // 0x1bf PushS
	GetProperty(var_81_float, var_149_string); // 0x1c0 ObjFunc
	var_150_string = "hl_inc"; // 0x1c2 PushS
	GetProperty(var_82_float, var_150_string); // 0x1c3 ObjFunc
	var_151_int = 8; // 0x1c5 PushI
	GetStringByID(var_83_string, var_151_int); // 0x1c6 Func
	var_152_int = 9; // 0x1c8 PushI
	GetStringByID(var_85_string, var_152_int); // 0x1c9 Func
	var_153_int = 100; // 0x1cb PushI
	var_86_int = var_81_float * var_153_int; // 0x1cc Mult2
	var_154_string = " "; // 0x1cd PushS
	var_155_int = var_83_string + var_154_string; // 0x1ce Add
	var_156_int = var_155_int + var_86_int; // 0x1cf Add
	var_157_string = "%
"; // 0x1d0 PushS
	var_79_string = var_156_int + var_157_string; // 0x1d1 Add2
	var_158_int = 100; // 0x1d2 PushI
	var_86_int = var_82_float * var_158_int; // 0x1d3 Mult2
	var_159_string = " "; // 0x1d4 PushS
	var_160_int = var_85_string + var_159_string; // 0x1d5 Add
	var_161_int = var_160_int + var_86_int; // 0x1d6 Add
	var_162_string = "%
"; // 0x1d7 PushS
	var_163_int = var_161_int + var_162_string; // 0x1d8 Add
	var_79_string = var_79_string + var_163_int; // 0x1d9 Add2
	var_164_string = "default"; // 0x1da PushS
	var_165_int = 268; // 0x1db PushI
	GetTextHeightInWidth(var_87_int, var_164_string, var_165_int, var_79_string); // 0x1dc Func
	var_69_int = var_69_int + var_87_int; // 0x1de Add2
	goto Label_520; // 0x1df Jump
	
Label_520:
	GetScreenSize(var_96_int, var_97_int); // 0x208 Func
	var_166_int = 266; // 0x20a PushI
	var_69_int = var_69_int + var_166_int; // 0x20b Add2
	var_167_int = var_96_int - var_21_int; // 0x20c Sub
	var_168_int = 300; // 0x20d PushI
	var_169_bool = var_167_int > var_168_int; // 0x20e GT
	if(var_169_bool == 0) goto Label_530; // 0x20f JumpB
	var_98_int = var_21_int; // 0x210 Mov
	goto Label_532; // 0x211 Jump
	
Label_532:
	var_170_bool = var_22_int > var_69_int; // 0x214 GT
	if(var_170_bool == 0) goto Label_536; // 0x215 JumpB
	var_99_int = var_22_int - var_69_int; // 0x216 Sub2
	goto Label_543; // 0x217 Jump
	
Label_543:
	ScreenToClient(var_98_int, var_99_int); // 0x21f Func
	var_171_int = 0; var_172_int = 0; var_173_int = 0; var_174_int = 0; var_175_float = 0; // 0x221 PushV
	var_171_int = var_98_int; // 0x222 Mov
	var_172_int = var_99_int; // 0x223 Mov
	var_173_int = 300; // 0x224 MovI
	var_174_int = var_69_int; // 0x225 Mov
	var_175_float = var_25_float; // 0x226 Mov
	func_270(var_171_int, var_172_int, var_173_int, var_174_int, var_175_float); // 0x227 NEW_2
	var_191_int = 0; var_192_int = 0; var_193_object = Obj(); var_194_float = 0; // 0x229 PushV
	var_195_int = 41; // 0x22a PushI
	var_191_int = var_98_int + var_195_int; // 0x22b Add2
	var_196_int = 16; // 0x22c PushI
	var_192_int = var_99_int + var_196_int; // 0x22d Add2
	var_193_object = var_23_object; // 0x22e Mov
	var_194_float = var_25_float; // 0x22f Mov
	func_297(var_191_int, var_192_int, var_193_object, var_194_float); // 0x230 NEW_2
	var_226_int = 250; // 0x232 PushI
	var_99_int = var_99_int + var_226_int; // 0x233 Add2
	var_227_string = "default"; // 0x234 PushS
	var_228_int = 16; // 0x235 PushI
	var_229_int = var_98_int + var_228_int; // 0x236 Add
	var_230_int = 268; // 0x237 PushI
	var_231_float = 0.64706; // 0x238 PushF
	var_232_float = 0.64706; // 0x239 PushF
	var_233_float = 0.64706; // 0x23a PushF
	PrintInWidth(var_69_int, var_227_string, var_229_int, var_99_int, var_230_int, var_64_string, var_231_float, var_232_float, var_233_float, var_25_float); // 0x23b Func
	var_234_int = var_69_int + var_70_int; // 0x23d Add
	var_99_int = var_99_int + var_234_int; // 0x23e Add2
	var_235_bool = 0; // 0x23f PushV
	var_235_bool = 1; // 0x240 MovB
	var_236_bool = var_72_bool; // 0x241 Push
	if(var_236_bool == 0) goto Label_582; // 0x242 JumpB
	var_237_bool = var_71_bool; // 0x243 Push
	if(var_237_bool == 0) goto Label_582; // 0x244 JumpB
	var_235_bool = 0; // 0x245 MovB
	
Label_582:
	if(var_235_bool == 0) goto Label_593; // 0x246 JumpB
	var_238_string = "default"; // 0x247 PushS
	var_239_int = 16; // 0x248 PushI
	var_240_int = var_98_int + var_239_int; // 0x249 Add
	var_241_int = 268; // 0x24a PushI
	var_242_float = 0.64706; // 0x24b PushF
	var_243_float = 0.64706; // 0x24c PushF
	var_244_float = 0.64706; // 0x24d PushF
	PrintInWidth(var_69_int, var_238_string, var_240_int, var_99_int, var_241_int, var_65_string, var_242_float, var_243_float, var_244_float, var_25_float); // 0x24e Func
	var_99_int = var_99_int + var_69_int; // 0x250 Add2
	
Label_593:
	var_245_bool = 0; // 0x251 PushV
	var_245_bool = 1; // 0x252 MovB
	var_246_bool = var_76_bool; // 0x253 Push
	if(var_246_bool == 0) goto Label_600; // 0x254 JumpB
	var_247_bool = var_75_bool; // 0x255 Push
	if(var_247_bool == 0) goto Label_600; // 0x256 JumpB
	var_245_bool = 0; // 0x257 MovB
	
Label_600:
	if(var_245_bool == 0) goto Label_611; // 0x258 JumpB
	var_248_string = "default"; // 0x259 PushS
	var_249_int = 16; // 0x25a PushI
	var_250_int = var_98_int + var_249_int; // 0x25b Add
	var_251_int = 268; // 0x25c PushI
	var_252_float = 0.64706; // 0x25d PushF
	var_253_float = 0.64706; // 0x25e PushF
	var_254_float = 0.64706; // 0x25f PushF
	PrintInWidth(var_69_int, var_248_string, var_250_int, var_99_int, var_251_int, var_66_string, var_252_float, var_253_float, var_254_float, var_25_float); // 0x260 Func
	var_99_int = var_99_int + var_69_int; // 0x262 Add2
	
Label_611:
	var_255_bool = var_80_bool; // 0x263 Push
	if(var_255_bool == 0) goto Label_623; // 0x264 JumpB
	var_256_string = "default"; // 0x265 PushS
	var_257_int = 16; // 0x266 PushI
	var_258_int = var_98_int + var_257_int; // 0x267 Add
	var_259_int = 268; // 0x268 PushI
	var_260_float = 0.64706; // 0x269 PushF
	var_261_float = 0.64706; // 0x26a PushF
	var_262_float = 0.64706; // 0x26b PushF
	PrintInWidth(var_69_int, var_256_string, var_258_int, var_99_int, var_259_int, var_79_string, var_260_float, var_261_float, var_262_float, var_25_float); // 0x26c Func
	var_99_int = var_99_int + var_69_int; // 0x26e Add2
	
Label_623:
	var_263_string = "default"; // 0x26f PushS
	var_264_int = 16; // 0x270 PushI
	var_265_int = var_98_int + var_264_int; // 0x271 Add
	var_266_int = 268; // 0x272 PushI
	var_267_float = 0.64706; // 0x273 PushF
	var_268_float = 0.64706; // 0x274 PushF
	var_269_float = 0.64706; // 0x275 PushF
	PrintInWidth(var_69_int, var_263_string, var_265_int, var_99_int, var_266_int, var_24_string, var_267_float, var_268_float, var_269_float, var_25_float); // 0x276 Func
	var_99_int = var_99_int + var_69_int; // 0x278 Add2
	return 74; // 0x279 Return
	
Label_536:
	var_99_int = var_22_int; // 0x218 Mov
	var_270_int = var_99_int + var_69_int; // 0x219 Add
	var_271_int = 600; // 0x21a PushI
	var_272_bool = var_270_int > var_271_int; // 0x21b GT
	if(var_272_bool == 0) goto Label_543; // 0x21c JumpB
	var_273_int = 600; // 0x21d PushI
	var_99_int = var_273_int - var_69_int; // 0x21e Sub2
	
Label_530:
	var_274_int = 300; // 0x212 PushI
	var_98_int = var_21_int - var_274_int; // 0x213 Sub2
	
Label_480:
	var_275_string = ""; var_276_object = Obj(); // 0x1e0 PushV
	var_276_object = var_23_object; // 0x1e1 Mov
	func_123(var_275_string, var_276_object); // 0x1e2 NEW_2
	var_277_string = "organ_combination"; // 0x1e4 PushS
	var_278_bool = var_275_string == var_277_string; // 0x1e5 Eq
	if(var_278_bool == 0) goto Label_520; // 0x1e6 JumpB
	var_80_bool = 1; // 0x1e7 MovB
	var_279_string = "DiseaseRate"; // 0x1e8 PushS
	GetProperty(var_88_float, var_279_string); // 0x1e9 ObjFunc
	var_280_string = "HealthIncrease"; // 0x1eb PushS
	GetProperty(var_90_float, var_280_string); // 0x1ec ObjFunc
	var_281_int = 11; // 0x1ee PushI
	GetStringByID(var_92_string, var_281_int); // 0x1ef Func
	var_282_int = 13; // 0x1f1 PushI
	GetStringByID(var_93_string, var_282_int); // 0x1f2 Func
	var_283_int = 100; // 0x1f4 PushI
	var_94_int = var_88_float * var_283_int; // 0x1f5 Mult2
	var_284_string = " "; // 0x1f6 PushS
	var_285_int = var_92_string + var_284_string; // 0x1f7 Add
	var_286_int = var_285_int + var_94_int; // 0x1f8 Add
	var_287_string = "%
"; // 0x1f9 PushS
	var_79_string = var_286_int + var_287_string; // 0x1fa Add2
	var_288_int = 100; // 0x1fb PushI
	var_94_int = var_90_float * var_288_int; // 0x1fc Mult2
	var_289_string = " "; // 0x1fd PushS
	var_290_int = var_93_string + var_289_string; // 0x1fe Add
	var_291_int = var_290_int + var_94_int; // 0x1ff Add
	var_292_string = "%
"; // 0x200 PushS
	var_293_int = var_291_int + var_292_string; // 0x201 Add
	var_79_string = var_79_string + var_293_int; // 0x202 Add2
	var_294_string = "default"; // 0x203 PushS
	var_295_int = 268; // 0x204 PushI
	GetTextHeightInWidth(var_95_int, var_294_string, var_295_int, var_79_string); // 0x205 Func
	var_69_int = var_69_int + var_95_int; // 0x207 Add2
	
Label_426:
	var_77_int = 1; // 0x1aa MovI
	
Label_390:
	var_73_int = 100; // 0x186 MovI
	
Label_361:
	var_64_string = "Error: Item doesnt have description (FIXME!)"; // 0x169 MovS
}


func_634(var_392_int, var_393_int, var_394_object, var_395_bool, var_396_float)
{
	var_397_object = Obj(); var_398_float = 0; var_399_int = 0; var_400_int = 0; var_401_int = 0; var_402_float = 0; var_403_string = ""; var_404_bool = 0; var_405_int = 0; var_406_string = ""; var_407_int = 0; var_408_string = ""; var_409_bool = 0; var_410_bool = 0; var_411_int = 0; var_412_int = 0; var_413_string = ""; var_414_bool = 0; var_415_bool = 0; var_416_int = 0; var_417_int = 0; var_418_string = ""; var_419_bool = 0; var_420_float = 0; var_421_float = 0; var_422_float = 0; var_423_string = ""; var_424_string = ""; var_425_string = ""; var_426_int = 0; var_427_int = 0; var_428_float = 0; var_429_float = 0; var_430_string = ""; var_431_string = ""; var_432_int = 0; var_433_int = 0; var_434_int = 0; var_435_int = 0; var_436_int = 0; var_437_int = 0; var_438_object = Obj(); var_439_float = 0; var_440_int = 0; var_441_int = 0; var_442_int = 0; var_443_float = 0; var_444_string = ""; var_445_bool = 0; var_446_int = 0; var_447_string = ""; var_448_int = 0; var_449_string = ""; var_450_bool = 0; var_451_bool = 0; var_452_int = 0; var_453_int = 0; var_454_string = ""; var_455_bool = 0; var_456_bool = 0; var_457_int = 0; var_458_int = 0; var_459_string = ""; var_460_bool = 0; var_461_float = 0; var_462_float = 0; var_463_float = 0; var_464_string = ""; var_465_string = ""; var_466_string = ""; var_467_int = 0; var_468_int = 0; var_469_float = 0; var_470_float = 0; var_471_string = ""; var_472_string = ""; var_473_int = 0; var_474_int = 0; var_475_int = 0; var_476_int = 0; var_477_int = 0; var_478_int = 0; // 0x27a PushV
	var_479_bool = var_394_object == 0; // 0x27b Not
	if(var_479_bool == 0) goto Label_638; // 0x27c JumpB
	return 82; // 0x27d Return
	
Label_638:
	GetContainer(var_438_object); // 0x27e Func
	GetGameTime(var_439_float); // 0x280 Func
	var_480_int = 1; // 0x282 PushI
	var_481_int = 24; // 0x283 PushI
	var_482_float = var_439_float / var_481_int; // 0x284 Div
	var_440_int = var_480_int + var_482_float; // 0x285 Add2
	var_483_int = 0; var_484_object = Obj(); // 0x286 PushV
	var_484_object = var_394_object; // 0x287 Mov
	func_39(var_484_object); // 0x288 NEW_2
	var_441_int = var_483_int; // 0x289 Mov
	var_485_int = 0; var_486_object = Obj(); var_487_int = 0; // 0x28b PushV
	var_486_object = var_394_object; // 0x28c Mov
	var_488_int = 0; // 0x28d PushV
	func_194(var_488_int); // 0x28e NEW_2
	var_487_int = var_488_int; // 0x28f Mov
	func_44(var_485_int, var_486_object, var_487_int); // 0x291 NEW_2
	var_442_int = var_485_int; // 0x292 Mov
	var_553_bool = var_395_bool; // 0x294 Push
	if(var_553_bool == 0) goto Label_673; // 0x295 JumpB
	var_554_float = 0; var_555_object = Obj(); var_556_int = 0; var_557_int = 0; // 0x296 PushV
	var_555_object = var_438_object; // 0x297 Mov
	var_556_int = var_440_int; // 0x298 Mov
	var_558_int = 0; // 0x299 PushV
	func_194(var_558_int); // 0x29a NEW_2
	var_557_int = var_558_int; // 0x29b Mov
	func_142(var_555_object, var_556_int, var_557_int); // 0x29d NEW_2
	var_443_float = var_554_float; // 0x29e Mov
	goto Label_683; // 0x2a0 Jump
	
Label_683:
	var_442_int = var_442_int * var_443_float; // 0x2ab Mult2
	var_575_string = "Description"; // 0x2ac PushS
	HasInvItemProperty(var_445_bool, var_441_int, var_575_string); // 0x2ad Func
	var_576_bool = var_445_bool; // 0x2af Push
	if(var_576_bool == 0) goto Label_695; // 0x2b0 JumpB
	var_577_string = "Description"; // 0x2b1 PushS
	GetInvItemProperty(var_446_int, var_441_int, var_577_string); // 0x2b2 Func
	GetStringByID(var_444_string, var_446_int); // 0x2b4 Func
	goto Label_696; // 0x2b6 Jump
	
Label_696:
	var_578_string = "
"; // 0x2b8 PushS
	var_444_string = var_444_string + var_578_string; // 0x2b9 Add2
	var_579_int = 5; // 0x2ba PushI
	GetStringByID(var_447_string, var_579_int); // 0x2bb Func
	var_580_string = ": "; // 0x2bd PushS
	var_581_int = var_447_string + var_580_string; // 0x2be Add
	var_582_int = var_581_int + var_442_int; // 0x2bf Add
	var_444_string = var_444_string + var_582_int; // 0x2c0 Add2
	var_583_string = "default"; // 0x2c1 PushS
	var_584_int = 268; // 0x2c2 PushI
	GetTextHeightInWidth(var_448_int, var_583_string, var_584_int, var_444_string); // 0x2c3 Func
	var_585_int = 266; // 0x2c5 PushI
	var_448_int = var_448_int + var_585_int; // 0x2c6 Add2
	var_586_string = "HasDurability"; // 0x2c7 PushS
	HasInvItemProperty(var_450_bool, var_441_int, var_586_string); // 0x2c8 Func
	var_587_string = "durability"; // 0x2ca PushS
	HasProperty(var_451_bool, var_587_string); // 0x2cb ObjFunc
	var_588_bool = 0; // 0x2cd PushV
	var_588_bool = 1; // 0x2ce MovB
	var_589_bool = var_451_bool; // 0x2cf Push
	if(var_589_bool == 0) goto Label_724; // 0x2d0 JumpB
	var_590_bool = var_450_bool; // 0x2d1 Push
	if(var_590_bool == 0) goto Label_724; // 0x2d2 JumpB
	var_588_bool = 0; // 0x2d3 MovB
	
Label_724:
	if(var_588_bool == 0) goto Label_745; // 0x2d4 JumpB
	var_591_bool = var_451_bool; // 0x2d5 Push
	if(var_591_bool == 0) goto Label_731; // 0x2d6 JumpB
	var_592_string = "durability"; // 0x2d7 PushS
	GetProperty(var_452_int, var_592_string); // 0x2d8 ObjFunc
	goto Label_732; // 0x2da Jump
	
Label_732:
	var_593_int = 7; // 0x2dc PushI
	GetStringByID(var_449_string, var_593_int); // 0x2dd Func
	var_594_string = " "; // 0x2df PushS
	var_595_int = var_594_string + var_452_int; // 0x2e0 Add
	var_596_string = "%"; // 0x2e1 PushS
	var_597_int = var_595_int + var_596_string; // 0x2e2 Add
	var_449_string = var_449_string + var_597_int; // 0x2e3 Add2
	var_598_string = "default"; // 0x2e4 PushS
	var_599_int = 268; // 0x2e5 PushI
	GetTextHeightInWidth(var_453_int, var_598_string, var_599_int, var_449_string); // 0x2e6 Func
	var_448_int = var_448_int + var_453_int; // 0x2e8 Add2
	
Label_745:
	var_600_string = "HasUses"; // 0x2e9 PushS
	HasInvItemProperty(var_455_bool, var_441_int, var_600_string); // 0x2ea Func
	var_601_string = "uses"; // 0x2ec PushS
	HasProperty(var_456_bool, var_601_string); // 0x2ed ObjFunc
	var_602_bool = 0; // 0x2ef PushV
	var_602_bool = 1; // 0x2f0 MovB
	var_603_bool = var_456_bool; // 0x2f1 Push
	if(var_603_bool == 0) goto Label_758; // 0x2f2 JumpB
	var_604_bool = var_455_bool; // 0x2f3 Push
	if(var_604_bool == 0) goto Label_758; // 0x2f4 JumpB
	var_602_bool = 0; // 0x2f5 MovB
	
Label_758:
	if(var_602_bool == 0) goto Label_777; // 0x2f6 JumpB
	var_605_bool = var_456_bool; // 0x2f7 Push
	if(var_605_bool == 0) goto Label_765; // 0x2f8 JumpB
	var_606_string = "uses"; // 0x2f9 PushS
	GetProperty(var_457_int, var_606_string); // 0x2fa ObjFunc
	goto Label_766; // 0x2fc Jump
	
Label_766:
	var_607_int = 1006; // 0x2fe PushI
	GetStringByID(var_454_string, var_607_int); // 0x2ff Func
	var_608_string = " "; // 0x301 PushS
	var_609_int = var_608_string + var_457_int; // 0x302 Add
	var_454_string = var_454_string + var_609_int; // 0x303 Add2
	var_610_string = "default"; // 0x304 PushS
	var_611_int = 268; // 0x305 PushI
	GetTextHeightInWidth(var_458_int, var_610_string, var_611_int, var_454_string); // 0x306 Func
	var_448_int = var_448_int + var_458_int; // 0x308 Add2
	
Label_777:
	var_460_bool = 0; // 0x309 MovB
	var_612_string = ""; var_613_object = Obj(); // 0x30a PushV
	var_613_object = var_394_object; // 0x30b Mov
	func_123(var_612_string, var_613_object); // 0x30c NEW_2
	var_614_string = "grass_combination"; // 0x30e PushS
	var_615_bool = var_612_string == var_614_string; // 0x30f Eq
	if(var_615_bool == 0) goto Label_819; // 0x310 JumpB
	var_460_bool = 1; // 0x311 MovB
	var_616_string = "im_inc"; // 0x312 PushS
	GetProperty(var_461_float, var_616_string); // 0x313 ObjFunc
	var_617_string = "hl_inc"; // 0x315 PushS
	GetProperty(var_462_float, var_617_string); // 0x316 ObjFunc
	var_618_int = 8; // 0x318 PushI
	GetStringByID(var_464_string, var_618_int); // 0x319 Func
	var_619_int = 9; // 0x31b PushI
	GetStringByID(var_466_string, var_619_int); // 0x31c Func
	var_620_int = 100; // 0x31e PushI
	var_467_int = var_461_float * var_620_int; // 0x31f Mult2
	var_621_string = " "; // 0x320 PushS
	var_622_int = var_464_string + var_621_string; // 0x321 Add
	var_623_int = var_622_int + var_467_int; // 0x322 Add
	var_624_string = "%
"; // 0x323 PushS
	var_459_string = var_623_int + var_624_string; // 0x324 Add2
	var_625_int = 100; // 0x325 PushI
	var_467_int = var_462_float * var_625_int; // 0x326 Mult2
	var_626_string = " "; // 0x327 PushS
	var_627_int = var_466_string + var_626_string; // 0x328 Add
	var_628_int = var_627_int + var_467_int; // 0x329 Add
	var_629_string = "%
"; // 0x32a PushS
	var_630_int = var_628_int + var_629_string; // 0x32b Add
	var_459_string = var_459_string + var_630_int; // 0x32c Add2
	var_631_string = "default"; // 0x32d PushS
	var_632_int = 268; // 0x32e PushI
	GetTextHeightInWidth(var_468_int, var_631_string, var_632_int, var_459_string); // 0x32f Func
	var_448_int = var_448_int + var_468_int; // 0x331 Add2
	goto Label_859; // 0x332 Jump
	
Label_859:
	GetScreenSize(var_475_int, var_476_int); // 0x35b Func
	var_633_int = var_475_int - var_392_int; // 0x35d Sub
	var_634_int = 300; // 0x35e PushI
	var_635_bool = var_633_int > var_634_int; // 0x35f GT
	if(var_635_bool == 0) goto Label_867; // 0x360 JumpB
	var_477_int = var_392_int; // 0x361 Mov
	goto Label_869; // 0x362 Jump
	
Label_869:
	var_636_bool = var_393_int > var_448_int; // 0x365 GT
	if(var_636_bool == 0) goto Label_873; // 0x366 JumpB
	var_478_int = var_393_int - var_448_int; // 0x367 Sub2
	goto Label_880; // 0x368 Jump
	
Label_880:
	ScreenToClient(var_477_int, var_478_int); // 0x370 Func
	var_637_int = 0; var_638_int = 0; var_639_int = 0; var_640_int = 0; var_641_float = 0; // 0x372 PushV
	var_637_int = var_477_int; // 0x373 Mov
	var_638_int = var_478_int; // 0x374 Mov
	var_639_int = 300; // 0x375 MovI
	var_640_int = var_448_int; // 0x376 Mov
	var_641_float = var_396_float; // 0x377 Mov
	func_270(var_637_int, var_638_int, var_639_int, var_640_int, var_641_float); // 0x378 NEW_2
	var_642_int = 0; var_643_int = 0; var_644_object = Obj(); var_645_float = 0; // 0x37a PushV
	var_646_int = 16; // 0x37b PushI
	var_642_int = var_477_int + var_646_int; // 0x37c Add2
	var_647_int = 16; // 0x37d PushI
	var_643_int = var_478_int + var_647_int; // 0x37e Add2
	var_644_object = var_394_object; // 0x37f Mov
	var_645_float = var_396_float; // 0x380 Mov
	func_297(var_642_int, var_643_int, var_644_object, var_645_float); // 0x381 NEW_2
	var_648_int = 250; // 0x383 PushI
	var_478_int = var_478_int + var_648_int; // 0x384 Add2
	var_649_string = "default"; // 0x385 PushS
	var_650_int = 16; // 0x386 PushI
	var_651_int = var_477_int + var_650_int; // 0x387 Add
	var_652_int = 268; // 0x388 PushI
	var_653_float = 0.64706; // 0x389 PushF
	var_654_float = 0.64706; // 0x38a PushF
	var_655_float = 0.64706; // 0x38b PushF
	PrintInWidth(var_448_int, var_649_string, var_651_int, var_478_int, var_652_int, var_444_string, var_653_float, var_654_float, var_655_float, var_396_float); // 0x38c Func
	var_478_int = var_478_int + var_448_int; // 0x38e Add2
	var_656_bool = 0; // 0x38f PushV
	var_656_bool = 1; // 0x390 MovB
	var_657_bool = var_451_bool; // 0x391 Push
	if(var_657_bool == 0) goto Label_918; // 0x392 JumpB
	var_658_bool = var_450_bool; // 0x393 Push
	if(var_658_bool == 0) goto Label_918; // 0x394 JumpB
	var_656_bool = 0; // 0x395 MovB
	
Label_918:
	if(var_656_bool == 0) goto Label_929; // 0x396 JumpB
	var_659_string = "default"; // 0x397 PushS
	var_660_int = 16; // 0x398 PushI
	var_661_int = var_477_int + var_660_int; // 0x399 Add
	var_662_int = 268; // 0x39a PushI
	var_663_float = 0.64706; // 0x39b PushF
	var_664_float = 0.64706; // 0x39c PushF
	var_665_float = 0.64706; // 0x39d PushF
	PrintInWidth(var_448_int, var_659_string, var_661_int, var_478_int, var_662_int, var_449_string, var_663_float, var_664_float, var_665_float, var_396_float); // 0x39e Func
	var_478_int = var_478_int + var_448_int; // 0x3a0 Add2
	
Label_929:
	var_666_bool = 0; // 0x3a1 PushV
	var_666_bool = 1; // 0x3a2 MovB
	var_667_bool = var_456_bool; // 0x3a3 Push
	if(var_667_bool == 0) goto Label_936; // 0x3a4 JumpB
	var_668_bool = var_455_bool; // 0x3a5 Push
	if(var_668_bool == 0) goto Label_936; // 0x3a6 JumpB
	var_666_bool = 0; // 0x3a7 MovB
	
Label_936:
	if(var_666_bool == 0) goto Label_947; // 0x3a8 JumpB
	var_669_string = "default"; // 0x3a9 PushS
	var_670_int = 16; // 0x3aa PushI
	var_671_int = var_477_int + var_670_int; // 0x3ab Add
	var_672_int = 268; // 0x3ac PushI
	var_673_float = 0.64706; // 0x3ad PushF
	var_674_float = 0.64706; // 0x3ae PushF
	var_675_float = 0.64706; // 0x3af PushF
	PrintInWidth(var_448_int, var_669_string, var_671_int, var_478_int, var_672_int, var_454_string, var_673_float, var_674_float, var_675_float, var_396_float); // 0x3b0 Func
	var_478_int = var_478_int + var_448_int; // 0x3b2 Add2
	
Label_947:
	var_676_bool = var_460_bool; // 0x3b3 Push
	if(var_676_bool == 0) goto Label_959; // 0x3b4 JumpB
	var_677_string = "default"; // 0x3b5 PushS
	var_678_int = 16; // 0x3b6 PushI
	var_679_int = var_477_int + var_678_int; // 0x3b7 Add
	var_680_int = 268; // 0x3b8 PushI
	var_681_float = 0.64706; // 0x3b9 PushF
	var_682_float = 0.64706; // 0x3ba PushF
	var_683_float = 0.64706; // 0x3bb PushF
	PrintInWidth(var_448_int, var_677_string, var_679_int, var_478_int, var_680_int, var_459_string, var_681_float, var_682_float, var_683_float, var_396_float); // 0x3bc Func
	var_478_int = var_478_int + var_448_int; // 0x3be Add2
	
Label_959:
	return 82; // 0x3bf Return
	
Label_873:
	var_478_int = var_393_int; // 0x369 Mov
	var_684_int = var_478_int + var_448_int; // 0x36a Add
	var_685_int = 600; // 0x36b PushI
	var_686_bool = var_684_int > var_685_int; // 0x36c GT
	if(var_686_bool == 0) goto Label_880; // 0x36d JumpB
	var_687_int = 600; // 0x36e PushI
	var_478_int = var_687_int - var_448_int; // 0x36f Sub2
	
Label_867:
	var_688_int = 300; // 0x363 PushI
	var_477_int = var_392_int - var_688_int; // 0x364 Sub2
	
Label_819:
	var_689_string = ""; var_690_object = Obj(); // 0x333 PushV
	var_690_object = var_394_object; // 0x334 Mov
	func_123(var_689_string, var_690_object); // 0x335 NEW_2
	var_691_string = "organ_combination"; // 0x337 PushS
	var_692_bool = var_689_string == var_691_string; // 0x338 Eq
	if(var_692_bool == 0) goto Label_859; // 0x339 JumpB
	var_460_bool = 1; // 0x33a MovB
	var_693_string = "DiseaseRate"; // 0x33b PushS
	GetProperty(var_469_float, var_693_string); // 0x33c ObjFunc
	var_694_string = "HealthIncrease"; // 0x33e PushS
	GetProperty(var_470_float, var_694_string); // 0x33f ObjFunc
	var_695_int = 11; // 0x341 PushI
	GetStringByID(var_471_string, var_695_int); // 0x342 Func
	var_696_int = 13; // 0x344 PushI
	GetStringByID(var_472_string, var_696_int); // 0x345 Func
	var_697_int = 100; // 0x347 PushI
	var_473_int = var_469_float * var_697_int; // 0x348 Mult2
	var_698_string = " "; // 0x349 PushS
	var_699_int = var_471_string + var_698_string; // 0x34a Add
	var_700_int = var_699_int + var_473_int; // 0x34b Add
	var_701_string = "%
"; // 0x34c PushS
	var_459_string = var_700_int + var_701_string; // 0x34d Add2
	var_702_int = 100; // 0x34e PushI
	var_473_int = var_470_float * var_702_int; // 0x34f Mult2
	var_703_string = " "; // 0x350 PushS
	var_704_int = var_472_string + var_703_string; // 0x351 Add
	var_705_int = var_704_int + var_473_int; // 0x352 Add
	var_706_string = "%
"; // 0x353 PushS
	var_707_int = var_705_int + var_706_string; // 0x354 Add
	var_459_string = var_459_string + var_707_int; // 0x355 Add2
	var_708_string = "default"; // 0x356 PushS
	var_709_int = 268; // 0x357 PushI
	GetTextHeightInWidth(var_474_int, var_708_string, var_709_int, var_459_string); // 0x358 Func
	var_448_int = var_448_int + var_474_int; // 0x35a Add2
	
Label_765:
	var_457_int = 1; // 0x2fd MovI
	
Label_731:
	var_452_int = 100; // 0x2db MovI
	
Label_695:
	var_444_string = "Error: Item doesnt have description (FIXME!)"; // 0x2b7 MovS
	
Label_673:
	var_710_float = 0; var_711_object = Obj(); var_712_int = 0; var_713_int = 0; // 0x2a1 PushV
	var_711_object = var_438_object; // 0x2a2 Mov
	var_712_int = var_440_int; // 0x2a3 Mov
	var_714_int = 0; // 0x2a4 PushV
	func_194(var_714_int); // 0x2a5 NEW_2
	var_713_int = var_714_int; // 0x2a6 Mov
	func_168(var_711_object, var_712_int, var_713_int); // 0x2a8 NEW_2
	var_443_float = var_710_float; // 0x2a9 Mov
}


func_123(var_139_string, var_140_object)
{
	var_141_int = 0; var_142_string = ""; var_143_int = 0; var_144_string = ""; // 0x7b PushV
	var_145_int = 0; var_146_object = Obj(); // 0x7c PushV
	var_146_object = var_140_object; // 0x7d Mov
	func_39(var_146_object); // 0x7e NEW_2
	var_143_int = var_145_int; // 0x7f Mov
	GetInvItemName(var_144_string, var_143_int); // 0x81 Func
	var_139_string = var_144_string; // 0x83 Mov
	return 4; // 0x84 Return
}


func_1084(var_740_int, var_741_int, var_742_string, var_744_float)
{
	var_745_int = 0; var_746_int = 0; var_747_int = 0; var_748_int = 0; var_749_int = 0; var_750_int = 0; var_751_int = 0; var_752_int = 0; var_753_int = 0; var_754_int = 0; // 0x43c PushV
	var_744_float = 1; // 0x43d MovI
	var_755_string = "default"; // 0x43e PushS
	var_756_int = 268; // 0x43f PushI
	GetTextHeightInWidth(var_750_int, var_755_string, var_756_int, var_742_string); // 0x440 Func
	var_757_int = 32; // 0x442 PushI
	var_750_int = var_750_int + var_757_int; // 0x443 Add2
	GetScreenSize(var_751_int, var_752_int); // 0x444 Func
	var_758_int = var_751_int - var_740_int; // 0x446 Sub
	var_759_int = 300; // 0x447 PushI
	var_760_bool = var_758_int > var_759_int; // 0x448 GT
	if(var_760_bool == 0) goto Label_1100; // 0x449 JumpB
	var_753_int = var_740_int; // 0x44a Mov
	goto Label_1102; // 0x44b Jump
	
Label_1102:
	var_761_bool = var_741_int > var_750_int; // 0x44e GT
	if(var_761_bool == 0) goto Label_1106; // 0x44f JumpB
	var_754_int = var_741_int - var_750_int; // 0x450 Sub2
	goto Label_1113; // 0x451 Jump
	
Label_1113:
	ScreenToClient(var_753_int, var_754_int); // 0x459 Func
	var_762_int = 0; var_763_int = 0; var_764_int = 0; var_765_int = 0; var_766_float = 0; // 0x45b PushV
	var_762_int = var_753_int; // 0x45c Mov
	var_763_int = var_754_int; // 0x45d Mov
	var_764_int = 300; // 0x45e MovI
	var_765_int = var_750_int; // 0x45f Mov
	var_766_float = var_744_float; // 0x460 Mov
	func_270(var_762_int, var_763_int, var_764_int, var_765_int, var_766_float); // 0x461 NEW_2
	var_767_string = "default"; // 0x463 PushS
	var_768_int = 16; // 0x464 PushI
	var_769_int = var_753_int + var_768_int; // 0x465 Add
	var_770_int = 16; // 0x466 PushI
	var_771_int = var_754_int + var_770_int; // 0x467 Add
	var_772_int = 268; // 0x468 PushI
	var_773_float = 0.64706; // 0x469 PushF
	var_774_float = 0.64706; // 0x46a PushF
	var_775_float = 0.64706; // 0x46b PushF
	PrintInWidth(var_750_int, var_767_string, var_769_int, var_771_int, var_772_int, var_742_string, var_773_float, var_774_float, var_775_float, var_744_float); // 0x46c Func
	return 10; // 0x46e Return
	
Label_1106:
	var_754_int = var_741_int; // 0x452 Mov
	var_776_int = var_754_int + var_750_int; // 0x453 Add
	var_777_int = 600; // 0x454 PushI
	var_778_bool = var_776_int > var_777_int; // 0x455 GT
	if(var_778_bool == 0) goto Label_1113; // 0x456 JumpB
	var_779_int = 600; // 0x457 PushI
	var_754_int = var_779_int - var_750_int; // 0x458 Sub2
	
Label_1100:
	var_780_int = 300; // 0x44c PushI
	var_753_int = var_740_int - var_780_int; // 0x44d Sub2
}


