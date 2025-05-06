task_0_event_0(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object)
{
	var_6_int = 0; var_7_int = 0; // 0x3b PushV
	var_8_int = 0; var_9_int = 0; // 0x3c PushV
	var_9_int = var_1_int; // 0x3d MovT
	func_77(var_7_int, var_8_int, var_9_int); // 0x3e Call
	var_7_int = var_8_int; // 0x3f Mov
	var_346_int = 0; var_347_int = 0; // 0x41 PushV
	var_347_int = var_7_int; // 0x42 Mov
	func_139(var_7_int, var_346_int, var_347_int); // 0x43 Call
	var_7_int = var_346_int; // 0x44 Mov
	var_400_int = var_7_int - var_1_int; // 0x46 Sub
	var_2_int = var_400_int - var_4_int; // 0x47 Sub2
	var_401_int = 0; // 0x48 PushI
	var_402_bool = var_2_int < var_401_int; // 0x49 LT
	if(var_402_bool == 0) goto Label_76; // 0x4a JumpB
	var_2_int = 0; // 0x4b TMovI
	
Label_76:
	return 2; // 0x4c Return
}


task_0_event_200(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object, var_6_int, var_7_string, var_8_object)
{
	var_9_string = "scrollbar"; // 0xc7 PushS
	var_10_bool = var_7_string == var_9_string; // 0xc8 Eq
	if(var_10_bool == 0) goto Label_207; // 0xc9 JumpB
	var_11_int = -var_2_int; // 0xca Neg
	var_12_float = var_11_int * var_6_int; // 0xcb Mult
	var_13_int = 100; // 0xcc PushI
	var_1_int = var_12_float / var_12_float; // 0xcd Div2
	return 0; // 0xce Return
	
Label_207:
	return 0; // 0xcf Return
}


main(var_0_bool, var_1_int, var_2_int, var_3_int, var_4_int, var_5_object)
{
	var_1_int = 0; // 0x0 TMovI
	GetWindowSize(var_3_int, var_2_int); // 0x1 Func
	var_6_bool = 1; // 0x3 PushB
	EnableClipping(var_6_bool); // 0x4 Func
	var_7_bool = 1; // 0x6 PushB
	SetOwnerDraw(var_7_bool); // 0x7 Func
	func_15(var_5_object); // 0xa Call
	ProcessEvents(); // 0xc Func
	return 0; // 0xe Return
}


func_1128(var_375_bool, var_376_int)
{
	var_377_int = 0; var_378_int = 0; // 0x468 PushV
	var_379_string = "vol_"; // 0x469 PushS
	var_380_int = var_379_string + var_376_int; // 0x46a Add
	GetVariable(var_380_int, var_378_int); // 0x46b Func
	var_381_int = 4; // 0x46d PushI
	var_382_int = var_378_int & var_381_int; // 0x46e And
	var_383_int = 0; // 0x46f PushI
	var_375_bool = var_382_int != var_383_int; // 0x470 Neq2
	return 2; // 0x471 Return
}


func_924(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x39c PushV
	var_20_int = 1; // 0x39d PushI
	add(var_20_int); // 0x39e ObjFunc
	var_21_object = var_17_object; // 0x3a0 Push
	if(var_21_object == 0) goto Label_937; // 0x3a1 JumpB
	CreateStringVector(var_19_object); // 0x3a2 Func
	var_22_string = "cot_alexandr@door1"; // 0x3a4 PushS
	add(var_22_string); // 0x3a5 ObjFunc
	add(var_19_object); // 0x3a7 ObjFunc
	
Label_937:
	var_23_int = 2; // 0x3a9 PushI
	add(var_23_int); // 0x3aa ObjFunc
	var_24_object = var_17_object; // 0x3ac Push
	if(var_24_object == 0) goto Label_949; // 0x3ad JumpB
	CreateStringVector(var_19_object); // 0x3ae Func
	var_25_string = "shouse1_kabak@door1"; // 0x3b0 PushS
	add(var_25_string); // 0x3b1 ObjFunc
	add(var_19_object); // 0x3b3 ObjFunc
	
Label_949:
	var_26_int = 3; // 0x3b5 PushI
	add(var_26_int); // 0x3b6 ObjFunc
	var_27_object = var_17_object; // 0x3b8 Push
	if(var_27_object == 0) goto Label_961; // 0x3b9 JumpB
	CreateStringVector(var_19_object); // 0x3ba Func
	var_28_string = "cot_anna@door1"; // 0x3bc PushS
	add(var_28_string); // 0x3bd ObjFunc
	add(var_19_object); // 0x3bf ObjFunc
	
Label_961:
	var_29_int = 4; // 0x3c1 PushI
	add(var_29_int); // 0x3c2 ObjFunc
	var_30_object = var_17_object; // 0x3c4 Push
	if(var_30_object == 0) goto Label_973; // 0x3c5 JumpB
	CreateStringVector(var_19_object); // 0x3c6 Func
	var_31_string = "cot_bigvad@door1"; // 0x3c8 PushS
	add(var_31_string); // 0x3c9 ObjFunc
	add(var_19_object); // 0x3cb ObjFunc
	
Label_973:
	var_32_int = 6; // 0x3cd PushI
	add(var_32_int); // 0x3ce ObjFunc
	var_33_object = var_17_object; // 0x3d0 Push
	if(var_33_object == 0) goto Label_988; // 0x3d1 JumpB
	CreateStringVector(var_19_object); // 0x3d2 Func
	var_34_string = "cot_georg@door1"; // 0x3d4 PushS
	add(var_34_string); // 0x3d5 ObjFunc
	var_35_string = "cot_georg@door2"; // 0x3d7 PushS
	add(var_35_string); // 0x3d8 ObjFunc
	add(var_19_object); // 0x3da ObjFunc
	
Label_988:
	var_36_int = 9; // 0x3dc PushI
	add(var_36_int); // 0x3dd ObjFunc
	var_37_object = var_17_object; // 0x3df Push
	if(var_37_object == 0) goto Label_1000; // 0x3e0 JumpB
	CreateStringVector(var_19_object); // 0x3e1 Func
	var_38_string = "cot_julia@door1"; // 0x3e3 PushS
	add(var_38_string); // 0x3e4 ObjFunc
	add(var_19_object); // 0x3e6 ObjFunc
	
Label_1000:
	var_39_int = 10; // 0x3e8 PushI
	add(var_39_int); // 0x3e9 ObjFunc
	var_40_object = var_17_object; // 0x3eb Push
	if(var_40_object == 0) goto Label_1012; // 0x3ec JumpB
	CreateStringVector(var_19_object); // 0x3ed Func
	var_41_string = "cot_kapella@door1"; // 0x3ef PushS
	add(var_41_string); // 0x3f0 ObjFunc
	add(var_19_object); // 0x3f2 ObjFunc
	
Label_1012:
	var_42_int = 11; // 0x3f4 PushI
	add(var_42_int); // 0x3f5 ObjFunc
	var_43_object = var_17_object; // 0x3f7 Push
	if(var_43_object == 0) goto Label_1024; // 0x3f8 JumpB
	CreateStringVector(var_19_object); // 0x3f9 Func
	var_44_string = "cot_katerina@door1"; // 0x3fb PushS
	add(var_44_string); // 0x3fc ObjFunc
	add(var_19_object); // 0x3fe ObjFunc
	
Label_1024:
	var_45_int = 13; // 0x400 PushI
	add(var_45_int); // 0x401 ObjFunc
	var_46_object = var_17_object; // 0x403 Push
	if(var_46_object == 0) goto Label_1036; // 0x404 JumpB
	CreateStringVector(var_19_object); // 0x405 Func
	var_47_string = "cot_lara@door1"; // 0x407 PushS
	add(var_47_string); // 0x408 ObjFunc
	add(var_19_object); // 0x40a ObjFunc
	
Label_1036:
	var_48_int = 18; // 0x40c PushI
	add(var_48_int); // 0x40d ObjFunc
	var_49_object = var_17_object; // 0x40f Push
	if(var_49_object == 0) goto Label_1048; // 0x410 JumpB
	CreateStringVector(var_19_object); // 0x411 Func
	var_50_string = "vagon_mishka@door1"; // 0x413 PushS
	add(var_50_string); // 0x414 ObjFunc
	add(var_19_object); // 0x416 ObjFunc
	
Label_1048:
	var_51_int = 19; // 0x418 PushI
	add(var_51_int); // 0x419 ObjFunc
	var_52_object = var_17_object; // 0x41b Push
	if(var_52_object == 0) goto Label_1060; // 0x41c JumpB
	CreateStringVector(var_19_object); // 0x41d Func
	var_53_string = "house_vlad@door1"; // 0x41f PushS
	add(var_53_string); // 0x420 ObjFunc
	add(var_19_object); // 0x422 ObjFunc
	
Label_1060:
	var_54_int = 20; // 0x424 PushI
	add(var_54_int); // 0x425 ObjFunc
	var_55_object = var_17_object; // 0x427 Push
	if(var_55_object == 0) goto Label_1072; // 0x428 JumpB
	CreateStringVector(var_19_object); // 0x429 Func
	var_56_string = "warehouse_notkin@door1"; // 0x42b PushS
	add(var_56_string); // 0x42c ObjFunc
	add(var_19_object); // 0x42e ObjFunc
	
Label_1072:
	var_57_int = 21; // 0x430 PushI
	add(var_57_int); // 0x431 ObjFunc
	var_58_object = var_17_object; // 0x433 Push
	if(var_58_object == 0) goto Label_1084; // 0x434 JumpB
	CreateStringVector(var_19_object); // 0x435 Func
	var_59_string = "dt_house_1_04@door1"; // 0x437 PushS
	add(var_59_string); // 0x438 ObjFunc
	add(var_19_object); // 0x43a ObjFunc
	
Label_1084:
	var_60_int = 22; // 0x43c PushI
	add(var_60_int); // 0x43d ObjFunc
	var_61_object = var_17_object; // 0x43f Push
	if(var_61_object == 0) goto Label_1096; // 0x440 JumpB
	CreateStringVector(var_19_object); // 0x441 Func
	var_62_string = "house_petr@door1"; // 0x443 PushS
	add(var_62_string); // 0x444 ObjFunc
	add(var_19_object); // 0x446 ObjFunc
	
Label_1096:
	var_63_int = 24; // 0x448 PushI
	add(var_63_int); // 0x449 ObjFunc
	var_64_object = var_17_object; // 0x44b Push
	if(var_64_object == 0) goto Label_1111; // 0x44c JumpB
	CreateStringVector(var_19_object); // 0x44d Func
	var_65_string = "house_spi4ka@door1"; // 0x44f PushS
	add(var_65_string); // 0x450 ObjFunc
	var_66_string = "house_spi4ka@door2"; // 0x452 PushS
	add(var_66_string); // 0x453 ObjFunc
	add(var_19_object); // 0x455 ObjFunc
	
Label_1111:
	var_67_int = 26; // 0x457 PushI
	add(var_67_int); // 0x458 ObjFunc
	var_68_object = var_17_object; // 0x45a Push
	if(var_68_object == 0) goto Label_1126; // 0x45b JumpB
	CreateStringVector(var_19_object); // 0x45c Func
	var_69_string = "cot_viktor@door1"; // 0x45e PushS
	add(var_69_string); // 0x45f ObjFunc
	var_70_string = "cot_viktor@door2"; // 0x461 PushS
	add(var_70_string); // 0x462 ObjFunc
	add(var_19_object); // 0x464 ObjFunc
	
Label_1126:
	return 2; // 0x466 Return
}


func_139(var_3_int, var_346_int, var_347_int)
{
	var_348_int = 0; var_349_int = 0; var_350_int = 0; var_351_int = 0; var_352_int = 0; var_353_string = ""; var_354_int = 0; var_355_int = 0; var_356_int = 0; var_357_int = 0; var_358_int = 0; var_359_int = 0; var_360_string = ""; var_361_int = 0; // 0x8b PushV
	var_355_int = var_347_int; // 0x8c Mov
	size(var_356_int); // 0x8d TObjFunc
	var_357_int = 0; // 0x8f MovI
	
Label_144:
	var_362_bool = var_357_int < var_356_int; // 0x90 LT
	if(var_362_bool == 0) goto Label_196; // 0x91 JumpB
	get(var_358_int, var_357_int); // 0x92 TObjFunc
	var_363_bool = 0; var_364_int = 0; // 0x94 PushV
	var_364_int = var_358_int; // 0x95 Mov
	func_1148(var_363_bool, var_364_int); // 0x96 Call
	if(var_363_bool == 0) goto Label_193; // 0x98 JumpB
	var_372_string = ""; var_373_int = 0; // 0x99 PushV
	var_373_int = var_358_int; // 0x9a Mov
	func_566(var_372_string, var_373_int); // 0x9b Call
	var_374_int = 0; // 0x9d PushI
	Blit(var_372_string, var_374_int, var_355_int); // 0x9e Func
	var_375_bool = 0; var_376_int = 0; // 0xa0 PushV
	var_376_int = var_358_int; // 0xa1 Mov
	func_1128(var_375_bool, var_376_int); // 0xa2 Call
	if(var_375_bool == 0) goto Label_169; // 0xa4 JumpB
	var_384_string = "birdmask"; // 0xa5 PushS
	var_385_int = 0; // 0xa6 PushI
	Blit(var_384_string, var_385_int, var_355_int); // 0xa7 Func
	
Label_169:
	var_386_int = 0; var_387_int = 0; // 0xa9 PushV
	var_387_int = var_358_int; // 0xaa Mov
	func_208(var_386_int, var_387_int); // 0xab Call
	var_359_int = var_386_int; // 0xac Mov
	GetStringByID(var_360_string, var_359_int); // 0xae Func
	var_388_string = "default"; // 0xb0 PushS
	var_389_int = 2; // 0xb1 PushI
	var_390_float = var_3_int / var_389_int; // 0xb2 Div
	var_391_int = 2; // 0xb3 PushI
	var_392_float = var_3_int / var_391_int; // 0xb4 Div
	var_393_float = 1.0; // 0xb5 PushF
	var_394_float = 1.0; // 0xb6 PushF
	var_395_float = 1.0; // 0xb7 PushF
	PrintInWidth(var_361_int, var_388_string, var_390_float, var_355_int, var_392_float, var_360_string, var_393_float, var_394_float, var_395_float); // 0xb8 Func
	var_396_int = 140; // 0xba PushI
	var_397_bool = var_361_int > var_396_int; // 0xbb GT
	if(var_397_bool == 0) goto Label_191; // 0xbc JumpB
	var_355_int = var_355_int + var_361_int; // 0xbd Add2
	goto Label_193; // 0xbe Jump
	
Label_193:
	var_398_int = 1; // 0xc1 PushI
	var_357_int = var_357_int + var_398_int; // 0xc2 Add2
	goto Label_144; // 0xc3 Jump
	
Label_191:
	var_399_int = 140; // 0xbf PushI
	var_355_int = var_355_int + var_399_int; // 0xc0 Add2
	
Label_196:
	var_346_int = var_355_int; // 0xc4 Mov
	return 14; // 0xc5 Return
}


func_77(var_3_int, var_8_int, var_9_int)
{
	var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_string = ""; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_string = ""; var_24_int = 0; var_25_int = 0; // 0x4d PushV
	var_18_int = var_9_int; // 0x4e Mov
	size(var_19_int); // 0x4f TObjFunc
	var_20_int = 0; // 0x51 MovI
	
Label_82:
	var_26_bool = var_20_int < var_19_int; // 0x52 LT
	if(var_26_bool == 0) goto Label_125; // 0x53 JumpB
	get(var_21_int, var_20_int); // 0x54 TObjFunc
	var_27_bool = 0; var_28_int = 0; // 0x56 PushV
	var_28_int = var_21_int; // 0x57 Mov
	func_1138(var_27_bool, var_28_int); // 0x58 Call
	if(var_27_bool == 0) goto Label_122; // 0x5a JumpB
	var_36_string = ""; var_37_int = 0; // 0x5b PushV
	var_37_int = var_21_int; // 0x5c Mov
	func_566(var_36_string, var_37_int); // 0x5d Call
	var_180_int = 0; // 0x5f PushI
	Blit(var_36_string, var_180_int, var_18_int); // 0x60 Func
	var_181_int = 0; var_182_int = 0; // 0x62 PushV
	var_182_int = var_21_int; // 0x63 Mov
	func_208(var_181_int, var_182_int); // 0x64 Call
	var_22_int = var_181_int; // 0x65 Mov
	GetStringByID(var_23_string, var_22_int); // 0x67 Func
	var_325_string = "default"; // 0x69 PushS
	var_326_int = 2; // 0x6a PushI
	var_327_float = var_3_int / var_326_int; // 0x6b Div
	var_328_int = 2; // 0x6c PushI
	var_329_float = var_3_int / var_328_int; // 0x6d Div
	var_330_float = 1.0; // 0x6e PushF
	var_331_float = 1.0; // 0x6f PushF
	var_332_float = 1.0; // 0x70 PushF
	PrintInWidth(var_24_int, var_325_string, var_327_float, var_18_int, var_329_float, var_23_string, var_330_float, var_331_float, var_332_float); // 0x71 Func
	var_333_int = 140; // 0x73 PushI
	var_334_bool = var_24_int > var_333_int; // 0x74 GT
	if(var_334_bool == 0) goto Label_120; // 0x75 JumpB
	var_18_int = var_18_int + var_24_int; // 0x76 Add2
	goto Label_122; // 0x77 Jump
	
Label_122:
	var_335_int = 1; // 0x7a PushI
	var_20_int = var_20_int + var_335_int; // 0x7b Add2
	goto Label_82; // 0x7c Jump
	
Label_120:
	var_336_int = 140; // 0x78 PushI
	var_18_int = var_18_int + var_336_int; // 0x79 Add2
	
Label_125:
	var_337_string = "default"; // 0x7d PushS
	var_338_int = 2; // 0x7e PushI
	var_339_float = var_3_int / var_338_int; // 0x7f Div
	var_340_int = 20; // 0x80 PushI
	var_341_int = var_339_float - var_340_int; // 0x81 Sub
	var_342_string = "***"; // 0x82 PushS
	var_343_float = 1.0; // 0x83 PushF
	var_344_float = 1.0; // 0x84 PushF
	var_345_float = 1.0; // 0x85 PushF
	PrintInWidth(var_25_int, var_337_string, var_341_int, var_18_int, var_343_float, var_342_string, var_343_float, var_344_float, var_345_float); // 0x86 Func
	var_18_int = var_18_int + var_25_int; // 0x88 Add2
	var_8_int = var_18_int; // 0x89 Mov
	return 16; // 0x8a Return
}


func_15(var_5_object)
{
	var_8_object = Obj(); var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_object = Obj(); var_13_int = 0; var_14_int = 0; var_15_int = 0; // 0xf PushV
	CreateIntVector(var_11_int); // 0x10 Func
	var_12_object = 0; // 0x12 SetNull
	var_16_object = Obj(); var_17_object = Obj(); // 0x13 PushV
	var_16_object = var_5_object; // 0x14 MovT
	var_17_object = var_12_object; // 0x15 Mov
	func_924(var_17_object); // 0x16 Call
	size(var_13_int); // 0x18 TObjFunc
	var_14_int = 0; // 0x1a MovI
	
Label_27:
	var_71_bool = var_14_int < var_13_int; // 0x1b LT
	if(var_71_bool == 0) goto Label_57; // 0x1c JumpB
	get(var_15_int, var_14_int); // 0x1d TObjFunc
	var_72_bool = 0; var_73_int = 0; // 0x1f PushV
	var_73_int = var_15_int; // 0x20 Mov
	func_1138(var_72_bool, var_73_int); // 0x21 Call
	if(var_72_bool == 0) goto Label_43; // 0x23 JumpB
	var_81_string = ""; var_82_int = 0; // 0x24 PushV
	var_82_int = var_15_int; // 0x25 Mov
	func_566(var_81_string, var_82_int); // 0x26 Call
	LoadImage(var_81_string); // 0x28 Func
	goto Label_54; // 0x2a Jump
	
Label_54:
	var_225_int = 1; // 0x36 PushI
	var_14_int = var_14_int + var_225_int; // 0x37 Add2
	goto Label_27; // 0x38 Jump
	
Label_43:
	var_226_bool = 0; var_227_int = 0; // 0x2b PushV
	var_227_int = var_15_int; // 0x2c Mov
	func_1148(var_226_bool, var_227_int); // 0x2d Call
	if(var_226_bool == 0) goto Label_54; // 0x2f JumpB
	var_235_string = ""; var_236_int = 0; // 0x30 PushV
	var_236_int = var_15_int; // 0x31 Mov
	func_566(var_235_string, var_236_int); // 0x32 Call
	LoadImage(var_235_string); // 0x34 Func
	
Label_57:
	return 8; // 0x39 Return
}


func_208(var_181_int, var_182_int)
{
	var_183_int = 1; // 0xd1 PushI
	var_184_bool = var_182_int == var_183_int; // 0xd2 Eq
	if(var_184_bool == 0) goto Label_214; // 0xd3 JumpB
	var_181_int = 2854; // 0xd4 MovI
	return 0; // 0xd5 Return
	
Label_214:
	var_185_int = 2; // 0xd6 PushI
	var_186_bool = var_182_int == var_185_int; // 0xd7 Eq
	if(var_186_bool == 0) goto Label_219; // 0xd8 JumpB
	var_181_int = 2855; // 0xd9 MovI
	return 0; // 0xda Return
	
Label_219:
	var_187_int = 3; // 0xdb PushI
	var_188_bool = var_182_int == var_187_int; // 0xdc Eq
	if(var_188_bool == 0) goto Label_224; // 0xdd JumpB
	var_181_int = 2856; // 0xde MovI
	return 0; // 0xdf Return
	
Label_224:
	var_189_int = 4; // 0xe0 PushI
	var_190_bool = var_182_int == var_189_int; // 0xe1 Eq
	if(var_190_bool == 0) goto Label_229; // 0xe2 JumpB
	var_181_int = 2857; // 0xe3 MovI
	return 0; // 0xe4 Return
	
Label_229:
	var_191_int = 5; // 0xe5 PushI
	var_192_bool = var_182_int == var_191_int; // 0xe6 Eq
	if(var_192_bool == 0) goto Label_234; // 0xe7 JumpB
	var_181_int = 2858; // 0xe8 MovI
	return 0; // 0xe9 Return
	
Label_234:
	var_193_int = 6; // 0xea PushI
	var_194_bool = var_182_int == var_193_int; // 0xeb Eq
	if(var_194_bool == 0) goto Label_239; // 0xec JumpB
	var_181_int = 2859; // 0xed MovI
	return 0; // 0xee Return
	
Label_239:
	var_195_int = 7; // 0xef PushI
	var_196_bool = var_182_int == var_195_int; // 0xf0 Eq
	if(var_196_bool == 0) goto Label_244; // 0xf1 JumpB
	var_181_int = 2860; // 0xf2 MovI
	return 0; // 0xf3 Return
	
Label_244:
	var_197_int = 8; // 0xf4 PushI
	var_198_bool = var_182_int == var_197_int; // 0xf5 Eq
	if(var_198_bool == 0) goto Label_249; // 0xf6 JumpB
	var_181_int = 2861; // 0xf7 MovI
	return 0; // 0xf8 Return
	
Label_249:
	var_199_int = 9; // 0xf9 PushI
	var_200_bool = var_182_int == var_199_int; // 0xfa Eq
	if(var_200_bool == 0) goto Label_254; // 0xfb JumpB
	var_181_int = 2862; // 0xfc MovI
	return 0; // 0xfd Return
	
Label_254:
	var_201_int = 10; // 0xfe PushI
	var_202_bool = var_182_int == var_201_int; // 0xff Eq
	if(var_202_bool == 0) goto Label_259; // 0x100 JumpB
	var_181_int = 2863; // 0x101 MovI
	return 0; // 0x102 Return
	
Label_259:
	var_203_int = 11; // 0x103 PushI
	var_204_bool = var_182_int == var_203_int; // 0x104 Eq
	if(var_204_bool == 0) goto Label_264; // 0x105 JumpB
	var_181_int = 2864; // 0x106 MovI
	return 0; // 0x107 Return
	
Label_264:
	var_205_int = 12; // 0x108 PushI
	var_206_bool = var_182_int == var_205_int; // 0x109 Eq
	if(var_206_bool == 0) goto Label_269; // 0x10a JumpB
	var_181_int = 2865; // 0x10b MovI
	return 0; // 0x10c Return
	
Label_269:
	var_207_int = 13; // 0x10d PushI
	var_208_bool = var_182_int == var_207_int; // 0x10e Eq
	if(var_208_bool == 0) goto Label_274; // 0x10f JumpB
	var_181_int = 2866; // 0x110 MovI
	return 0; // 0x111 Return
	
Label_274:
	var_209_int = 14; // 0x112 PushI
	var_210_bool = var_182_int == var_209_int; // 0x113 Eq
	if(var_210_bool == 0) goto Label_279; // 0x114 JumpB
	var_181_int = 2867; // 0x115 MovI
	return 0; // 0x116 Return
	
Label_279:
	var_211_int = 15; // 0x117 PushI
	var_212_bool = var_182_int == var_211_int; // 0x118 Eq
	if(var_212_bool == 0) goto Label_284; // 0x119 JumpB
	var_181_int = 2868; // 0x11a MovI
	return 0; // 0x11b Return
	
Label_284:
	var_213_int = 16; // 0x11c PushI
	var_214_bool = var_182_int == var_213_int; // 0x11d Eq
	if(var_214_bool == 0) goto Label_289; // 0x11e JumpB
	var_181_int = 2869; // 0x11f MovI
	return 0; // 0x120 Return
	
Label_289:
	var_215_int = 17; // 0x121 PushI
	var_216_bool = var_182_int == var_215_int; // 0x122 Eq
	if(var_216_bool == 0) goto Label_294; // 0x123 JumpB
	var_181_int = 2870; // 0x124 MovI
	return 0; // 0x125 Return
	
Label_294:
	var_217_int = 18; // 0x126 PushI
	var_218_bool = var_182_int == var_217_int; // 0x127 Eq
	if(var_218_bool == 0) goto Label_299; // 0x128 JumpB
	var_181_int = 2871; // 0x129 MovI
	return 0; // 0x12a Return
	
Label_299:
	var_219_int = 19; // 0x12b PushI
	var_220_bool = var_182_int == var_219_int; // 0x12c Eq
	if(var_220_bool == 0) goto Label_304; // 0x12d JumpB
	var_181_int = 2872; // 0x12e MovI
	return 0; // 0x12f Return
	
Label_304:
	var_221_int = 20; // 0x130 PushI
	var_222_bool = var_182_int == var_221_int; // 0x131 Eq
	if(var_222_bool == 0) goto Label_309; // 0x132 JumpB
	var_181_int = 2873; // 0x133 MovI
	return 0; // 0x134 Return
	
Label_309:
	var_223_int = 21; // 0x135 PushI
	var_224_bool = var_182_int == var_223_int; // 0x136 Eq
	if(var_224_bool == 0) goto Label_314; // 0x137 JumpB
	var_181_int = 2874; // 0x138 MovI
	return 0; // 0x139 Return
	
Label_314:
	var_225_int = 22; // 0x13a PushI
	var_226_bool = var_182_int == var_225_int; // 0x13b Eq
	if(var_226_bool == 0) goto Label_319; // 0x13c JumpB
	var_181_int = 2875; // 0x13d MovI
	return 0; // 0x13e Return
	
Label_319:
	var_227_int = 23; // 0x13f PushI
	var_228_bool = var_182_int == var_227_int; // 0x140 Eq
	if(var_228_bool == 0) goto Label_324; // 0x141 JumpB
	var_181_int = 2876; // 0x142 MovI
	return 0; // 0x143 Return
	
Label_324:
	var_229_int = 24; // 0x144 PushI
	var_230_bool = var_182_int == var_229_int; // 0x145 Eq
	if(var_230_bool == 0) goto Label_329; // 0x146 JumpB
	var_181_int = 2877; // 0x147 MovI
	return 0; // 0x148 Return
	
Label_329:
	var_231_int = 25; // 0x149 PushI
	var_232_bool = var_182_int == var_231_int; // 0x14a Eq
	if(var_232_bool == 0) goto Label_334; // 0x14b JumpB
	var_181_int = 2878; // 0x14c MovI
	return 0; // 0x14d Return
	
Label_334:
	var_233_int = 26; // 0x14e PushI
	var_234_bool = var_182_int == var_233_int; // 0x14f Eq
	if(var_234_bool == 0) goto Label_339; // 0x150 JumpB
	var_181_int = 2879; // 0x151 MovI
	return 0; // 0x152 Return
	
Label_339:
	var_235_int = 27; // 0x153 PushI
	var_236_bool = var_182_int == var_235_int; // 0x154 Eq
	if(var_236_bool == 0) goto Label_344; // 0x155 JumpB
	var_181_int = 3340; // 0x156 MovI
	return 0; // 0x157 Return
	
Label_344:
	var_237_int = 28; // 0x158 PushI
	var_238_bool = var_182_int == var_237_int; // 0x159 Eq
	if(var_238_bool == 0) goto Label_349; // 0x15a JumpB
	var_181_int = 3341; // 0x15b MovI
	return 0; // 0x15c Return
	
Label_349:
	var_239_int = 29; // 0x15d PushI
	var_240_bool = var_182_int == var_239_int; // 0x15e Eq
	if(var_240_bool == 0) goto Label_354; // 0x15f JumpB
	var_181_int = 3342; // 0x160 MovI
	return 0; // 0x161 Return
	
Label_354:
	var_241_int = 30; // 0x162 PushI
	var_242_bool = var_182_int == var_241_int; // 0x163 Eq
	if(var_242_bool == 0) goto Label_359; // 0x164 JumpB
	var_181_int = 3343; // 0x165 MovI
	return 0; // 0x166 Return
	
Label_359:
	var_243_int = 31; // 0x167 PushI
	var_244_bool = var_182_int == var_243_int; // 0x168 Eq
	if(var_244_bool == 0) goto Label_364; // 0x169 JumpB
	var_181_int = 3344; // 0x16a MovI
	return 0; // 0x16b Return
	
Label_364:
	var_245_int = 32; // 0x16c PushI
	var_246_bool = var_182_int == var_245_int; // 0x16d Eq
	if(var_246_bool == 0) goto Label_369; // 0x16e JumpB
	var_181_int = 3345; // 0x16f MovI
	return 0; // 0x170 Return
	
Label_369:
	var_247_int = 33; // 0x171 PushI
	var_248_bool = var_182_int == var_247_int; // 0x172 Eq
	if(var_248_bool == 0) goto Label_374; // 0x173 JumpB
	var_181_int = 3346; // 0x174 MovI
	return 0; // 0x175 Return
	
Label_374:
	var_249_int = 34; // 0x176 PushI
	var_250_bool = var_182_int == var_249_int; // 0x177 Eq
	if(var_250_bool == 0) goto Label_379; // 0x178 JumpB
	var_181_int = 3347; // 0x179 MovI
	return 0; // 0x17a Return
	
Label_379:
	var_251_int = 35; // 0x17b PushI
	var_252_bool = var_182_int == var_251_int; // 0x17c Eq
	if(var_252_bool == 0) goto Label_384; // 0x17d JumpB
	var_181_int = 3348; // 0x17e MovI
	return 0; // 0x17f Return
	
Label_384:
	var_253_int = 36; // 0x180 PushI
	var_254_bool = var_182_int == var_253_int; // 0x181 Eq
	if(var_254_bool == 0) goto Label_389; // 0x182 JumpB
	var_181_int = 3349; // 0x183 MovI
	return 0; // 0x184 Return
	
Label_389:
	var_255_int = 37; // 0x185 PushI
	var_256_bool = var_182_int == var_255_int; // 0x186 Eq
	if(var_256_bool == 0) goto Label_394; // 0x187 JumpB
	var_181_int = 3350; // 0x188 MovI
	return 0; // 0x189 Return
	
Label_394:
	var_257_int = 38; // 0x18a PushI
	var_258_bool = var_182_int == var_257_int; // 0x18b Eq
	if(var_258_bool == 0) goto Label_399; // 0x18c JumpB
	var_181_int = 3351; // 0x18d MovI
	return 0; // 0x18e Return
	
Label_399:
	var_259_int = 39; // 0x18f PushI
	var_260_bool = var_182_int == var_259_int; // 0x190 Eq
	if(var_260_bool == 0) goto Label_404; // 0x191 JumpB
	var_181_int = 3352; // 0x192 MovI
	return 0; // 0x193 Return
	
Label_404:
	var_261_int = 40; // 0x194 PushI
	var_262_bool = var_182_int == var_261_int; // 0x195 Eq
	if(var_262_bool == 0) goto Label_409; // 0x196 JumpB
	var_181_int = 3353; // 0x197 MovI
	return 0; // 0x198 Return
	
Label_409:
	var_263_int = 42; // 0x199 PushI
	var_264_bool = var_182_int == var_263_int; // 0x19a Eq
	if(var_264_bool == 0) goto Label_414; // 0x19b JumpB
	var_181_int = 3354; // 0x19c MovI
	return 0; // 0x19d Return
	
Label_414:
	var_265_int = 43; // 0x19e PushI
	var_266_bool = var_182_int == var_265_int; // 0x19f Eq
	if(var_266_bool == 0) goto Label_419; // 0x1a0 JumpB
	var_181_int = 3355; // 0x1a1 MovI
	return 0; // 0x1a2 Return
	
Label_419:
	var_267_int = 44; // 0x1a3 PushI
	var_268_bool = var_182_int == var_267_int; // 0x1a4 Eq
	if(var_268_bool == 0) goto Label_424; // 0x1a5 JumpB
	var_181_int = 4029; // 0x1a6 MovI
	return 0; // 0x1a7 Return
	
Label_424:
	var_269_int = 46; // 0x1a8 PushI
	var_270_bool = var_182_int == var_269_int; // 0x1a9 Eq
	if(var_270_bool == 0) goto Label_429; // 0x1aa JumpB
	var_181_int = 4031; // 0x1ab MovI
	return 0; // 0x1ac Return
	
Label_429:
	var_271_int = 47; // 0x1ad PushI
	var_272_bool = var_182_int == var_271_int; // 0x1ae Eq
	if(var_272_bool == 0) goto Label_434; // 0x1af JumpB
	var_181_int = 4032; // 0x1b0 MovI
	return 0; // 0x1b1 Return
	
Label_434:
	var_273_int = 48; // 0x1b2 PushI
	var_274_bool = var_182_int == var_273_int; // 0x1b3 Eq
	if(var_274_bool == 0) goto Label_439; // 0x1b4 JumpB
	var_181_int = 6270; // 0x1b5 MovI
	return 0; // 0x1b6 Return
	
Label_439:
	var_275_int = 49; // 0x1b7 PushI
	var_276_bool = var_182_int == var_275_int; // 0x1b8 Eq
	if(var_276_bool == 0) goto Label_444; // 0x1b9 JumpB
	var_181_int = 6271; // 0x1ba MovI
	return 0; // 0x1bb Return
	
Label_444:
	var_277_int = 50; // 0x1bc PushI
	var_278_bool = var_182_int == var_277_int; // 0x1bd Eq
	if(var_278_bool == 0) goto Label_449; // 0x1be JumpB
	var_181_int = 6272; // 0x1bf MovI
	return 0; // 0x1c0 Return
	
Label_449:
	var_279_int = 51; // 0x1c1 PushI
	var_280_bool = var_182_int == var_279_int; // 0x1c2 Eq
	if(var_280_bool == 0) goto Label_454; // 0x1c3 JumpB
	var_181_int = 6273; // 0x1c4 MovI
	return 0; // 0x1c5 Return
	
Label_454:
	var_281_int = 52; // 0x1c6 PushI
	var_282_bool = var_182_int == var_281_int; // 0x1c7 Eq
	if(var_282_bool == 0) goto Label_459; // 0x1c8 JumpB
	var_181_int = 6274; // 0x1c9 MovI
	return 0; // 0x1ca Return
	
Label_459:
	var_283_int = 53; // 0x1cb PushI
	var_284_bool = var_182_int == var_283_int; // 0x1cc Eq
	if(var_284_bool == 0) goto Label_464; // 0x1cd JumpB
	var_181_int = 6275; // 0x1ce MovI
	return 0; // 0x1cf Return
	
Label_464:
	var_285_int = 54; // 0x1d0 PushI
	var_286_bool = var_182_int == var_285_int; // 0x1d1 Eq
	if(var_286_bool == 0) goto Label_469; // 0x1d2 JumpB
	var_181_int = 6276; // 0x1d3 MovI
	return 0; // 0x1d4 Return
	
Label_469:
	var_287_int = 55; // 0x1d5 PushI
	var_288_bool = var_182_int == var_287_int; // 0x1d6 Eq
	if(var_288_bool == 0) goto Label_474; // 0x1d7 JumpB
	var_181_int = 6277; // 0x1d8 MovI
	return 0; // 0x1d9 Return
	
Label_474:
	var_289_int = 56; // 0x1da PushI
	var_290_bool = var_182_int == var_289_int; // 0x1db Eq
	if(var_290_bool == 0) goto Label_479; // 0x1dc JumpB
	var_181_int = 6278; // 0x1dd MovI
	return 0; // 0x1de Return
	
Label_479:
	var_291_int = 57; // 0x1df PushI
	var_292_bool = var_182_int == var_291_int; // 0x1e0 Eq
	if(var_292_bool == 0) goto Label_484; // 0x1e1 JumpB
	var_181_int = 6279; // 0x1e2 MovI
	return 0; // 0x1e3 Return
	
Label_484:
	var_293_int = 58; // 0x1e4 PushI
	var_294_bool = var_182_int == var_293_int; // 0x1e5 Eq
	if(var_294_bool == 0) goto Label_489; // 0x1e6 JumpB
	var_181_int = 6280; // 0x1e7 MovI
	return 0; // 0x1e8 Return
	
Label_489:
	var_295_int = 59; // 0x1e9 PushI
	var_296_bool = var_182_int == var_295_int; // 0x1ea Eq
	if(var_296_bool == 0) goto Label_494; // 0x1eb JumpB
	var_181_int = 6281; // 0x1ec MovI
	return 0; // 0x1ed Return
	
Label_494:
	var_297_int = 60; // 0x1ee PushI
	var_298_bool = var_182_int == var_297_int; // 0x1ef Eq
	if(var_298_bool == 0) goto Label_499; // 0x1f0 JumpB
	var_181_int = 6282; // 0x1f1 MovI
	return 0; // 0x1f2 Return
	
Label_499:
	var_299_int = 61; // 0x1f3 PushI
	var_300_bool = var_182_int == var_299_int; // 0x1f4 Eq
	if(var_300_bool == 0) goto Label_504; // 0x1f5 JumpB
	var_181_int = 6283; // 0x1f6 MovI
	return 0; // 0x1f7 Return
	
Label_504:
	var_301_int = 62; // 0x1f8 PushI
	var_302_bool = var_182_int == var_301_int; // 0x1f9 Eq
	if(var_302_bool == 0) goto Label_509; // 0x1fa JumpB
	var_181_int = 6284; // 0x1fb MovI
	return 0; // 0x1fc Return
	
Label_509:
	var_303_int = 63; // 0x1fd PushI
	var_304_bool = var_182_int == var_303_int; // 0x1fe Eq
	if(var_304_bool == 0) goto Label_514; // 0x1ff JumpB
	var_181_int = 6285; // 0x200 MovI
	return 0; // 0x201 Return
	
Label_514:
	var_305_int = 64; // 0x202 PushI
	var_306_bool = var_182_int == var_305_int; // 0x203 Eq
	if(var_306_bool == 0) goto Label_519; // 0x204 JumpB
	var_181_int = 6286; // 0x205 MovI
	return 0; // 0x206 Return
	
Label_519:
	var_307_int = 65; // 0x207 PushI
	var_308_bool = var_182_int == var_307_int; // 0x208 Eq
	if(var_308_bool == 0) goto Label_524; // 0x209 JumpB
	var_181_int = 6287; // 0x20a MovI
	return 0; // 0x20b Return
	
Label_524:
	var_309_int = 66; // 0x20c PushI
	var_310_bool = var_182_int == var_309_int; // 0x20d Eq
	if(var_310_bool == 0) goto Label_529; // 0x20e JumpB
	var_181_int = 11961; // 0x20f MovI
	return 0; // 0x210 Return
	
Label_529:
	var_311_int = 67; // 0x211 PushI
	var_312_bool = var_182_int == var_311_int; // 0x212 Eq
	if(var_312_bool == 0) goto Label_534; // 0x213 JumpB
	var_181_int = 12582; // 0x214 MovI
	return 0; // 0x215 Return
	
Label_534:
	var_313_int = 68; // 0x216 PushI
	var_314_bool = var_182_int == var_313_int; // 0x217 Eq
	if(var_314_bool == 0) goto Label_539; // 0x218 JumpB
	var_181_int = 12583; // 0x219 MovI
	return 0; // 0x21a Return
	
Label_539:
	var_315_int = 69; // 0x21b PushI
	var_316_bool = var_182_int == var_315_int; // 0x21c Eq
	if(var_316_bool == 0) goto Label_544; // 0x21d JumpB
	var_181_int = 12611; // 0x21e MovI
	return 0; // 0x21f Return
	
Label_544:
	var_317_int = 70; // 0x220 PushI
	var_318_bool = var_182_int == var_317_int; // 0x221 Eq
	if(var_318_bool == 0) goto Label_549; // 0x222 JumpB
	var_181_int = 13334; // 0x223 MovI
	return 0; // 0x224 Return
	
Label_549:
	var_319_int = 71; // 0x225 PushI
	var_320_bool = var_182_int == var_319_int; // 0x226 Eq
	if(var_320_bool == 0) goto Label_554; // 0x227 JumpB
	var_181_int = 14839; // 0x228 MovI
	return 0; // 0x229 Return
	
Label_554:
	var_321_int = 72; // 0x22a PushI
	var_322_bool = var_182_int == var_321_int; // 0x22b Eq
	if(var_322_bool == 0) goto Label_559; // 0x22c JumpB
	var_181_int = 14840; // 0x22d MovI
	return 0; // 0x22e Return
	
Label_559:
	var_323_int = 73; // 0x22f PushI
	var_324_bool = var_182_int == var_323_int; // 0x230 Eq
	if(var_324_bool == 0) goto Label_564; // 0x231 JumpB
	var_181_int = 14841; // 0x232 MovI
	return 0; // 0x233 Return
	
Label_564:
	var_181_int = -1; // 0x234 MovI
	return 0; // 0x235 Return
}


func_1138(var_72_bool, var_73_int)
{
	var_74_int = 0; var_75_int = 0; // 0x472 PushV
	var_76_string = "vol_"; // 0x473 PushS
	var_77_int = var_76_string + var_73_int; // 0x474 Add
	GetVariable(var_77_int, var_75_int); // 0x475 Func
	var_78_int = 2; // 0x477 PushI
	var_79_int = var_75_int & var_78_int; // 0x478 And
	var_80_int = 0; // 0x479 PushI
	var_72_bool = var_79_int != var_80_int; // 0x47a Neq2
	return 2; // 0x47b Return
}


func_566(var_81_string, var_82_int)
{
	var_83_int = 1; // 0x237 PushI
	var_84_bool = var_82_int == var_83_int; // 0x238 Eq
	if(var_84_bool == 0) goto Label_572; // 0x239 JumpB
	var_81_string = "ui/NPC_Black.png"; // 0x23a MovS
	return 0; // 0x23b Return
	
Label_572:
	var_85_int = 2; // 0x23c PushI
	var_86_bool = var_82_int == var_85_int; // 0x23d Eq
	if(var_86_bool == 0) goto Label_577; // 0x23e JumpB
	var_81_string = "ui/NPC_Andrei.png"; // 0x23f MovS
	return 0; // 0x240 Return
	
Label_577:
	var_87_int = 3; // 0x241 PushI
	var_88_bool = var_82_int == var_87_int; // 0x242 Eq
	if(var_88_bool == 0) goto Label_582; // 0x243 JumpB
	var_81_string = "ui/NPC_Anna.png"; // 0x244 MovS
	return 0; // 0x245 Return
	
Label_582:
	var_89_int = 4; // 0x246 PushI
	var_90_bool = var_82_int == var_89_int; // 0x247 Eq
	if(var_90_bool == 0) goto Label_587; // 0x248 JumpB
	var_81_string = "ui/NPC_BigVlad.png"; // 0x249 MovS
	return 0; // 0x24a Return
	
Label_587:
	var_91_int = 5; // 0x24b PushI
	var_92_bool = var_82_int == var_91_int; // 0x24c Eq
	if(var_92_bool == 0) goto Label_592; // 0x24d JumpB
	var_81_string = "ui/NPC_Eva.png"; // 0x24e MovS
	return 0; // 0x24f Return
	
Label_592:
	var_93_int = 6; // 0x250 PushI
	var_94_bool = var_82_int == var_93_int; // 0x251 Eq
	if(var_94_bool == 0) goto Label_597; // 0x252 JumpB
	var_81_string = "ui/NPC_Georg.png"; // 0x253 MovS
	return 0; // 0x254 Return
	
Label_597:
	var_95_int = 7; // 0x255 PushI
	var_96_bool = var_82_int == var_95_int; // 0x256 Eq
	if(var_96_bool == 0) goto Label_602; // 0x257 JumpB
	var_81_string = "ui/NPC_Grif.png"; // 0x258 MovS
	return 0; // 0x259 Return
	
Label_602:
	var_97_int = 8; // 0x25a PushI
	var_98_bool = var_82_int == var_97_int; // 0x25b Eq
	if(var_98_bool == 0) goto Label_607; // 0x25c JumpB
	var_81_string = "ui/NPC_Han.png"; // 0x25d MovS
	return 0; // 0x25e Return
	
Label_607:
	var_99_int = 9; // 0x25f PushI
	var_100_bool = var_82_int == var_99_int; // 0x260 Eq
	if(var_100_bool == 0) goto Label_612; // 0x261 JumpB
	var_81_string = "ui/NPC_Julia.png"; // 0x262 MovS
	return 0; // 0x263 Return
	
Label_612:
	var_101_int = 10; // 0x264 PushI
	var_102_bool = var_82_int == var_101_int; // 0x265 Eq
	if(var_102_bool == 0) goto Label_617; // 0x266 JumpB
	var_81_string = "ui/NPC_Kapella.png"; // 0x267 MovS
	return 0; // 0x268 Return
	
Label_617:
	var_103_int = 11; // 0x269 PushI
	var_104_bool = var_82_int == var_103_int; // 0x26a Eq
	if(var_104_bool == 0) goto Label_622; // 0x26b JumpB
	var_81_string = "ui/NPC_Black.png"; // 0x26c MovS
	return 0; // 0x26d Return
	
Label_622:
	var_105_int = 12; // 0x26e PushI
	var_106_bool = var_82_int == var_105_int; // 0x26f Eq
	if(var_106_bool == 0) goto Label_627; // 0x270 JumpB
	var_81_string = "ui/NPC_Klara.png"; // 0x271 MovS
	return 0; // 0x272 Return
	
Label_627:
	var_107_int = 13; // 0x273 PushI
	var_108_bool = var_82_int == var_107_int; // 0x274 Eq
	if(var_108_bool == 0) goto Label_632; // 0x275 JumpB
	var_81_string = "ui/NPC_Lara.png"; // 0x276 MovS
	return 0; // 0x277 Return
	
Label_632:
	var_109_int = 14; // 0x278 PushI
	var_110_bool = var_82_int == var_109_int; // 0x279 Eq
	if(var_110_bool == 0) goto Label_637; // 0x27a JumpB
	var_81_string = "ui/NPC_Laska.png"; // 0x27b MovS
	return 0; // 0x27c Return
	
Label_637:
	var_111_int = 15; // 0x27d PushI
	var_112_bool = var_82_int == var_111_int; // 0x27e Eq
	if(var_112_bool == 0) goto Label_642; // 0x27f JumpB
	var_81_string = "ui/NPC_Maria.png"; // 0x280 MovS
	return 0; // 0x281 Return
	
Label_642:
	var_113_int = 16; // 0x282 PushI
	var_114_bool = var_82_int == var_113_int; // 0x283 Eq
	if(var_114_bool == 0) goto Label_647; // 0x284 JumpB
	var_81_string = "ui/NPC_Mark.png"; // 0x285 MovS
	return 0; // 0x286 Return
	
Label_647:
	var_115_int = 17; // 0x287 PushI
	var_116_bool = var_82_int == var_115_int; // 0x288 Eq
	if(var_116_bool == 0) goto Label_652; // 0x289 JumpB
	var_81_string = "ui/NPC_Mat.png"; // 0x28a MovS
	return 0; // 0x28b Return
	
Label_652:
	var_117_int = 18; // 0x28c PushI
	var_118_bool = var_82_int == var_117_int; // 0x28d Eq
	if(var_118_bool == 0) goto Label_657; // 0x28e JumpB
	var_81_string = "ui/NPC_Mishka.png"; // 0x28f MovS
	return 0; // 0x290 Return
	
Label_657:
	var_119_int = 19; // 0x291 PushI
	var_120_bool = var_82_int == var_119_int; // 0x292 Eq
	if(var_120_bool == 0) goto Label_662; // 0x293 JumpB
	var_81_string = "ui/NPC_MladVlad.png"; // 0x294 MovS
	return 0; // 0x295 Return
	
Label_662:
	var_121_int = 20; // 0x296 PushI
	var_122_bool = var_82_int == var_121_int; // 0x297 Eq
	if(var_122_bool == 0) goto Label_667; // 0x298 JumpB
	var_81_string = "ui/NPC_Notkin.png"; // 0x299 MovS
	return 0; // 0x29a Return
	
Label_667:
	var_123_int = 21; // 0x29b PushI
	var_124_bool = var_82_int == var_123_int; // 0x29c Eq
	if(var_124_bool == 0) goto Label_672; // 0x29d JumpB
	var_81_string = "ui/NPC_Ospina.png"; // 0x29e MovS
	return 0; // 0x29f Return
	
Label_672:
	var_125_int = 22; // 0x2a0 PushI
	var_126_bool = var_82_int == var_125_int; // 0x2a1 Eq
	if(var_126_bool == 0) goto Label_677; // 0x2a2 JumpB
	var_81_string = "ui/NPC_Petr.png"; // 0x2a3 MovS
	return 0; // 0x2a4 Return
	
Label_677:
	var_127_int = 23; // 0x2a5 PushI
	var_128_bool = var_82_int == var_127_int; // 0x2a6 Eq
	if(var_128_bool == 0) goto Label_682; // 0x2a7 JumpB
	var_81_string = "ui/NPC_Rubin.png"; // 0x2a8 MovS
	return 0; // 0x2a9 Return
	
Label_682:
	var_129_int = 24; // 0x2aa PushI
	var_130_bool = var_82_int == var_129_int; // 0x2ab Eq
	if(var_130_bool == 0) goto Label_687; // 0x2ac JumpB
	var_81_string = "ui/NPC_Spi4ka.png"; // 0x2ad MovS
	return 0; // 0x2ae Return
	
Label_687:
	var_131_int = 25; // 0x2af PushI
	var_132_bool = var_82_int == var_131_int; // 0x2b0 Eq
	if(var_132_bool == 0) goto Label_692; // 0x2b1 JumpB
	var_81_string = "ui/NPC_Starshina.png"; // 0x2b2 MovS
	return 0; // 0x2b3 Return
	
Label_692:
	var_133_int = 26; // 0x2b4 PushI
	var_134_bool = var_82_int == var_133_int; // 0x2b5 Eq
	if(var_134_bool == 0) goto Label_697; // 0x2b6 JumpB
	var_81_string = "ui/NPC_Viktor.png"; // 0x2b7 MovS
	return 0; // 0x2b8 Return
	
Label_697:
	var_135_int = 27; // 0x2b9 PushI
	var_136_bool = var_82_int == var_135_int; // 0x2ba Eq
	if(var_136_bool == 0) goto Label_702; // 0x2bb JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2bc MovS
	return 0; // 0x2bd Return
	
Label_702:
	var_137_int = 28; // 0x2be PushI
	var_138_bool = var_82_int == var_137_int; // 0x2bf Eq
	if(var_138_bool == 0) goto Label_707; // 0x2c0 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2c1 MovS
	return 0; // 0x2c2 Return
	
Label_707:
	var_139_int = 29; // 0x2c3 PushI
	var_140_bool = var_82_int == var_139_int; // 0x2c4 Eq
	if(var_140_bool == 0) goto Label_712; // 0x2c5 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2c6 MovS
	return 0; // 0x2c7 Return
	
Label_712:
	var_141_int = 30; // 0x2c8 PushI
	var_142_bool = var_82_int == var_141_int; // 0x2c9 Eq
	if(var_142_bool == 0) goto Label_717; // 0x2ca JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2cb MovS
	return 0; // 0x2cc Return
	
Label_717:
	var_143_int = 31; // 0x2cd PushI
	var_144_bool = var_82_int == var_143_int; // 0x2ce Eq
	if(var_144_bool == 0) goto Label_722; // 0x2cf JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2d0 MovS
	return 0; // 0x2d1 Return
	
Label_722:
	var_145_int = 32; // 0x2d2 PushI
	var_146_bool = var_82_int == var_145_int; // 0x2d3 Eq
	if(var_146_bool == 0) goto Label_727; // 0x2d4 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2d5 MovS
	return 0; // 0x2d6 Return
	
Label_727:
	var_147_int = 33; // 0x2d7 PushI
	var_148_bool = var_82_int == var_147_int; // 0x2d8 Eq
	if(var_148_bool == 0) goto Label_732; // 0x2d9 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2da MovS
	return 0; // 0x2db Return
	
Label_732:
	var_149_int = 34; // 0x2dc PushI
	var_150_bool = var_82_int == var_149_int; // 0x2dd Eq
	if(var_150_bool == 0) goto Label_737; // 0x2de JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2df MovS
	return 0; // 0x2e0 Return
	
Label_737:
	var_151_int = 35; // 0x2e1 PushI
	var_152_bool = var_82_int == var_151_int; // 0x2e2 Eq
	if(var_152_bool == 0) goto Label_742; // 0x2e3 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2e4 MovS
	return 0; // 0x2e5 Return
	
Label_742:
	var_153_int = 36; // 0x2e6 PushI
	var_154_bool = var_82_int == var_153_int; // 0x2e7 Eq
	if(var_154_bool == 0) goto Label_747; // 0x2e8 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2e9 MovS
	return 0; // 0x2ea Return
	
Label_747:
	var_155_int = 37; // 0x2eb PushI
	var_156_bool = var_82_int == var_155_int; // 0x2ec Eq
	if(var_156_bool == 0) goto Label_752; // 0x2ed JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2ee MovS
	return 0; // 0x2ef Return
	
Label_752:
	var_157_int = 38; // 0x2f0 PushI
	var_158_bool = var_82_int == var_157_int; // 0x2f1 Eq
	if(var_158_bool == 0) goto Label_757; // 0x2f2 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2f3 MovS
	return 0; // 0x2f4 Return
	
Label_757:
	var_159_int = 39; // 0x2f5 PushI
	var_160_bool = var_82_int == var_159_int; // 0x2f6 Eq
	if(var_160_bool == 0) goto Label_762; // 0x2f7 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2f8 MovS
	return 0; // 0x2f9 Return
	
Label_762:
	var_161_int = 40; // 0x2fa PushI
	var_162_bool = var_82_int == var_161_int; // 0x2fb Eq
	if(var_162_bool == 0) goto Label_767; // 0x2fc JumpB
	var_81_string = "ui/NPC_None.png"; // 0x2fd MovS
	return 0; // 0x2fe Return
	
Label_767:
	var_163_int = 42; // 0x2ff PushI
	var_164_bool = var_82_int == var_163_int; // 0x300 Eq
	if(var_164_bool == 0) goto Label_772; // 0x301 JumpB
	var_81_string = "ui/NPC_Black.png"; // 0x302 MovS
	return 0; // 0x303 Return
	
Label_772:
	var_165_int = 43; // 0x304 PushI
	var_166_bool = var_82_int == var_165_int; // 0x305 Eq
	if(var_166_bool == 0) goto Label_777; // 0x306 JumpB
	var_81_string = "ui/NPC_Black.png"; // 0x307 MovS
	return 0; // 0x308 Return
	
Label_777:
	var_167_int = 44; // 0x309 PushI
	var_168_bool = var_82_int == var_167_int; // 0x30a Eq
	if(var_168_bool == 0) goto Label_782; // 0x30b JumpB
	var_81_string = "ui/NPC_Black.png"; // 0x30c MovS
	return 0; // 0x30d Return
	
Label_782:
	var_169_int = 46; // 0x30e PushI
	var_170_bool = var_82_int == var_169_int; // 0x30f Eq
	if(var_170_bool == 0) goto Label_787; // 0x310 JumpB
	var_81_string = "ui/NPC_Black.png"; // 0x311 MovS
	return 0; // 0x312 Return
	
Label_787:
	var_171_int = 47; // 0x313 PushI
	var_172_bool = var_82_int == var_171_int; // 0x314 Eq
	if(var_172_bool == 0) goto Label_792; // 0x315 JumpB
	var_81_string = "ui/NPC_Bakalavr.png"; // 0x316 MovS
	return 0; // 0x317 Return
	
Label_792:
	var_173_int = 48; // 0x318 PushI
	var_174_bool = var_82_int == var_173_int; // 0x319 Eq
	if(var_174_bool == 0) goto Label_797; // 0x31a JumpB
	var_81_string = "ui/NPC_None.png"; // 0x31b MovS
	return 0; // 0x31c Return
	
Label_797:
	var_175_int = 49; // 0x31d PushI
	var_176_bool = var_82_int == var_175_int; // 0x31e Eq
	if(var_176_bool == 0) goto Label_802; // 0x31f JumpB
	var_81_string = "ui/NPC_None.png"; // 0x320 MovS
	return 0; // 0x321 Return
	
Label_802:
	var_177_int = 50; // 0x322 PushI
	var_178_bool = var_82_int == var_177_int; // 0x323 Eq
	if(var_178_bool == 0) goto Label_807; // 0x324 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x325 MovS
	return 0; // 0x326 Return
	
Label_807:
	var_179_int = 51; // 0x327 PushI
	var_180_bool = var_82_int == var_179_int; // 0x328 Eq
	if(var_180_bool == 0) goto Label_812; // 0x329 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x32a MovS
	return 0; // 0x32b Return
	
Label_812:
	var_181_int = 52; // 0x32c PushI
	var_182_bool = var_82_int == var_181_int; // 0x32d Eq
	if(var_182_bool == 0) goto Label_817; // 0x32e JumpB
	var_81_string = "ui/NPC_None.png"; // 0x32f MovS
	return 0; // 0x330 Return
	
Label_817:
	var_183_int = 53; // 0x331 PushI
	var_184_bool = var_82_int == var_183_int; // 0x332 Eq
	if(var_184_bool == 0) goto Label_822; // 0x333 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x334 MovS
	return 0; // 0x335 Return
	
Label_822:
	var_185_int = 54; // 0x336 PushI
	var_186_bool = var_82_int == var_185_int; // 0x337 Eq
	if(var_186_bool == 0) goto Label_827; // 0x338 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x339 MovS
	return 0; // 0x33a Return
	
Label_827:
	var_187_int = 55; // 0x33b PushI
	var_188_bool = var_82_int == var_187_int; // 0x33c Eq
	if(var_188_bool == 0) goto Label_832; // 0x33d JumpB
	var_81_string = "ui/NPC_None.png"; // 0x33e MovS
	return 0; // 0x33f Return
	
Label_832:
	var_189_int = 56; // 0x340 PushI
	var_190_bool = var_82_int == var_189_int; // 0x341 Eq
	if(var_190_bool == 0) goto Label_837; // 0x342 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x343 MovS
	return 0; // 0x344 Return
	
Label_837:
	var_191_int = 57; // 0x345 PushI
	var_192_bool = var_82_int == var_191_int; // 0x346 Eq
	if(var_192_bool == 0) goto Label_842; // 0x347 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x348 MovS
	return 0; // 0x349 Return
	
Label_842:
	var_193_int = 58; // 0x34a PushI
	var_194_bool = var_82_int == var_193_int; // 0x34b Eq
	if(var_194_bool == 0) goto Label_847; // 0x34c JumpB
	var_81_string = "ui/NPC_None.png"; // 0x34d MovS
	return 0; // 0x34e Return
	
Label_847:
	var_195_int = 59; // 0x34f PushI
	var_196_bool = var_82_int == var_195_int; // 0x350 Eq
	if(var_196_bool == 0) goto Label_852; // 0x351 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x352 MovS
	return 0; // 0x353 Return
	
Label_852:
	var_197_int = 60; // 0x354 PushI
	var_198_bool = var_82_int == var_197_int; // 0x355 Eq
	if(var_198_bool == 0) goto Label_857; // 0x356 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x357 MovS
	return 0; // 0x358 Return
	
Label_857:
	var_199_int = 61; // 0x359 PushI
	var_200_bool = var_82_int == var_199_int; // 0x35a Eq
	if(var_200_bool == 0) goto Label_862; // 0x35b JumpB
	var_81_string = "ui/NPC_None.png"; // 0x35c MovS
	return 0; // 0x35d Return
	
Label_862:
	var_201_int = 62; // 0x35e PushI
	var_202_bool = var_82_int == var_201_int; // 0x35f Eq
	if(var_202_bool == 0) goto Label_867; // 0x360 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x361 MovS
	return 0; // 0x362 Return
	
Label_867:
	var_203_int = 63; // 0x363 PushI
	var_204_bool = var_82_int == var_203_int; // 0x364 Eq
	if(var_204_bool == 0) goto Label_872; // 0x365 JumpB
	var_81_string = "ui/NPC_None.png"; // 0x366 MovS
	return 0; // 0x367 Return
	
Label_872:
	var_205_int = 64; // 0x368 PushI
	var_206_bool = var_82_int == var_205_int; // 0x369 Eq
	if(var_206_bool == 0) goto Label_877; // 0x36a JumpB
	var_81_string = "ui/NPC_None.png"; // 0x36b MovS
	return 0; // 0x36c Return
	
Label_877:
	var_207_int = 65; // 0x36d PushI
	var_208_bool = var_82_int == var_207_int; // 0x36e Eq
	if(var_208_bool == 0) goto Label_882; // 0x36f JumpB
	var_81_string = "ui/NPC_None.png"; // 0x370 MovS
	return 0; // 0x371 Return
	
Label_882:
	var_209_int = 66; // 0x372 PushI
	var_210_bool = var_82_int == var_209_int; // 0x373 Eq
	if(var_210_bool == 0) goto Label_887; // 0x374 JumpB
	var_81_string = "ui/NPC_Burah.png"; // 0x375 MovS
	return 0; // 0x376 Return
	
Label_887:
	var_211_int = 67; // 0x377 PushI
	var_212_bool = var_82_int == var_211_int; // 0x378 Eq
	if(var_212_bool == 0) goto Label_892; // 0x379 JumpB
	var_81_string = "ui/NPC_Black.png"; // 0x37a MovS
	return 0; // 0x37b Return
	
Label_892:
	var_213_int = 68; // 0x37c PushI
	var_214_bool = var_82_int == var_213_int; // 0x37d Eq
	if(var_214_bool == 0) goto Label_897; // 0x37e JumpB
	var_81_string = "ui/NPC_Black.png"; // 0x37f MovS
	return 0; // 0x380 Return
	
Label_897:
	var_215_int = 69; // 0x381 PushI
	var_216_bool = var_82_int == var_215_int; // 0x382 Eq
	if(var_216_bool == 0) goto Label_902; // 0x383 JumpB
	var_81_string = "ui/NPC_Black.png"; // 0x384 MovS
	return 0; // 0x385 Return
	
Label_902:
	var_217_int = 70; // 0x386 PushI
	var_218_bool = var_82_int == var_217_int; // 0x387 Eq
	if(var_218_bool == 0) goto Label_907; // 0x388 JumpB
	var_81_string = "ui/NPC_Aglaja.png"; // 0x389 MovS
	return 0; // 0x38a Return
	
Label_907:
	var_219_int = 71; // 0x38b PushI
	var_220_bool = var_82_int == var_219_int; // 0x38c Eq
	if(var_220_bool == 0) goto Label_912; // 0x38d JumpB
	var_81_string = "ui/NPC_None.png"; // 0x38e MovS
	return 0; // 0x38f Return
	
Label_912:
	var_221_int = 72; // 0x390 PushI
	var_222_bool = var_82_int == var_221_int; // 0x391 Eq
	if(var_222_bool == 0) goto Label_917; // 0x392 JumpB
	var_81_string = "ui/NPC_Black.png"; // 0x393 MovS
	return 0; // 0x394 Return
	
Label_917:
	var_223_int = 73; // 0x395 PushI
	var_224_bool = var_82_int == var_223_int; // 0x396 Eq
	if(var_224_bool == 0) goto Label_922; // 0x397 JumpB
	var_81_string = "ui/NPC_Black.png"; // 0x398 MovS
	return 0; // 0x399 Return
	
Label_922:
	var_81_string = ""; // 0x39a MovS
	return 0; // 0x39b Return
}


func_1148(var_226_bool, var_227_int)
{
	var_228_int = 0; var_229_int = 0; // 0x47c PushV
	var_230_string = "vol_"; // 0x47d PushS
	var_231_int = var_230_string + var_227_int; // 0x47e Add
	GetVariable(var_231_int, var_229_int); // 0x47f Func
	var_232_int = 8; // 0x481 PushI
	var_233_int = var_229_int & var_232_int; // 0x482 And
	var_234_int = 0; // 0x483 PushI
	var_226_bool = var_233_int != var_234_int; // 0x484 Neq2
	return 2; // 0x485 Return
}


