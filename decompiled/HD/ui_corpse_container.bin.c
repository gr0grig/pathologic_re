task_0_event_15(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int, var_5_int, var_6_float)
{
	var_7_int = 0; // 0x261 PushI
	var_8_bool = var_6_float > var_7_int; // 0x262 GT
	if(var_8_bool == 0) goto Label_614; // 0x263 JumpB
	var_6_float = 1; // 0x264 MovI
	goto Label_618; // 0x265 Jump
	
Label_618:
	var_2_int = var_2_int + var_6_float; // 0x26a Add2
	var_9_int = 0; // 0x26b PushI
	var_10_bool = var_2_int < var_9_int; // 0x26c LT
	if(var_10_bool == 0) goto Label_623; // 0x26d JumpB
	var_2_int = 0; // 0x26e TMovI
	
Label_623:
	func_683(var_6_float); // 0x270 NEW_2
	return 0; // 0x272 Return
	
Label_614:
	var_59_int = 0; // 0x266 PushI
	var_60_bool = var_6_float < var_59_int; // 0x267 LT
	if(var_60_bool == 0) goto Label_618; // 0x268 JumpB
	var_6_float = -1; // 0x269 MovI
}


task_0_event_100(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int)
{
	DestroyWindow(); // 0x3ed Func
	return 0; // 0x3ef Return
}


task_0_event_102(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_5_int = 0; // 0x3f1 PushV
	var_5_int = var_4_int; // 0x3f2 Mov
	func_288(var_4_int, var_5_int); // 0x3f3 NEW_2
	return 0; // 0x3f5 Return
}


task_0_event_101(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int)
{
	var_5_int = 266; // 0x3f7 PushI
	var_6_bool = var_4_int == var_5_int; // 0x3f8 Eq
	if(var_6_bool == 0) goto Label_1058; // 0x3f9 JumpB
	var_7_int = 0; // 0x3fa PushI
	var_8_bool = var_0_int == var_7_int; // 0x3fb Eq
	if(var_8_bool == 0) goto Label_1026; // 0x3fc JumpB
	var_9_int = 0; // 0x3fd PushV
	var_9_int = 1; // 0x3fe MovI
	func_1335(var_4_int, var_9_int); // 0x3ff NEW_2
	goto Label_1057; // 0x401 Jump
	
Label_1057:
	goto Label_1100; // 0x421 Jump
	
Label_1100:
	var_44_int = 0; // 0x44c PushV
	var_44_int = var_4_int; // 0x44d Mov
	func_122(var_4_int, var_44_int); // 0x44e NEW_2
	return 0; // 0x450 Return
	
Label_1026:
	var_182_int = 1; // 0x402 PushI
	var_183_bool = var_0_int == var_182_int; // 0x403 Eq
	if(var_183_bool == 0) goto Label_1034; // 0x404 JumpB
	var_184_int = 0; // 0x405 PushV
	var_184_int = 2; // 0x406 MovI
	func_1335(var_4_int, var_184_int); // 0x407 NEW_2
	goto Label_1057; // 0x409 Jump
	
Label_1034:
	var_185_int = 2; // 0x40a PushI
	var_186_bool = var_0_int == var_185_int; // 0x40b Eq
	if(var_186_bool == 0) goto Label_1042; // 0x40c JumpB
	var_187_int = 0; // 0x40d PushV
	var_187_int = 3; // 0x40e MovI
	func_1335(var_4_int, var_187_int); // 0x40f NEW_2
	goto Label_1057; // 0x411 Jump
	
Label_1042:
	var_188_int = 3; // 0x412 PushI
	var_189_bool = var_0_int == var_188_int; // 0x413 Eq
	if(var_189_bool == 0) goto Label_1050; // 0x414 JumpB
	var_190_int = 0; // 0x415 PushV
	var_190_int = 4; // 0x416 MovI
	func_1335(var_4_int, var_190_int); // 0x417 NEW_2
	goto Label_1057; // 0x419 Jump
	
Label_1050:
	var_191_int = 4; // 0x41a PushI
	var_192_bool = var_0_int == var_191_int; // 0x41b Eq
	if(var_192_bool == 0) goto Label_1057; // 0x41c JumpB
	var_193_int = 0; // 0x41d PushV
	var_193_int = 0; // 0x41e MovI
	func_1335(var_4_int, var_193_int); // 0x41f NEW_2
	
Label_1058:
	var_194_int = 265; // 0x422 PushI
	var_195_bool = var_4_int == var_194_int; // 0x423 Eq
	if(var_195_bool == 0) goto Label_1100; // 0x424 JumpB
	var_196_int = 0; // 0x425 PushI
	var_197_bool = var_0_int == var_196_int; // 0x426 Eq
	if(var_197_bool == 0) goto Label_1069; // 0x427 JumpB
	var_198_int = 0; // 0x428 PushV
	var_198_int = 4; // 0x429 MovI
	func_1335(var_4_int, var_198_int); // 0x42a NEW_2
	goto Label_1100; // 0x42c Jump
	
Label_1069:
	var_199_int = 1; // 0x42d PushI
	var_200_bool = var_0_int == var_199_int; // 0x42e Eq
	if(var_200_bool == 0) goto Label_1077; // 0x42f JumpB
	var_201_int = 0; // 0x430 PushV
	var_201_int = 0; // 0x431 MovI
	func_1335(var_4_int, var_201_int); // 0x432 NEW_2
	goto Label_1100; // 0x434 Jump
	
Label_1077:
	var_202_int = 2; // 0x435 PushI
	var_203_bool = var_0_int == var_202_int; // 0x436 Eq
	if(var_203_bool == 0) goto Label_1085; // 0x437 JumpB
	var_204_int = 0; // 0x438 PushV
	var_204_int = 1; // 0x439 MovI
	func_1335(var_4_int, var_204_int); // 0x43a NEW_2
	goto Label_1100; // 0x43c Jump
	
Label_1085:
	var_205_int = 3; // 0x43d PushI
	var_206_bool = var_0_int == var_205_int; // 0x43e Eq
	if(var_206_bool == 0) goto Label_1093; // 0x43f JumpB
	var_207_int = 0; // 0x440 PushV
	var_207_int = 2; // 0x441 MovI
	func_1335(var_4_int, var_207_int); // 0x442 NEW_2
	goto Label_1100; // 0x444 Jump
	
Label_1093:
	var_208_int = 4; // 0x445 PushI
	var_209_bool = var_0_int == var_208_int; // 0x446 Eq
	if(var_209_bool == 0) goto Label_1100; // 0x447 JumpB
	var_210_int = 0; // 0x448 PushV
	var_210_int = 3; // 0x449 MovI
	func_1335(var_4_int, var_210_int); // 0x44a NEW_2
}


task_0_event_1(var_0_int, var_1_object, var_2_int, var_3_int, var_4_float)
{
	var_5_int = 0; // 0x4ae PushV
	var_5_int = var_0_int; // 0x4af MovT
	func_1569(var_5_int); // 0x4b0 NEW_2
	func_1370(); // 0x4b3 NEW_2
	func_627(); // 0x4b6 NEW_2
	return 0; // 0x4b8 Return
}


task_0_event_200(var_0_int, var_1_object, var_2_int, var_3_int, var_4_int, var_5_string, var_6_object)
{
	var_7_bool = 0; var_8_int = 0; var_9_int = 0; var_10_object = Obj(); var_11_int = 0; var_12_object = Obj(); var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_object = Obj(); var_17_int = 0; var_18_object = Obj(); // 0x4b9 PushV
	var_13_bool = 0; // 0x4ba MovB
	var_19_int = 0; // 0x4bb PushI
	var_20_bool = var_4_int < var_19_int; // 0x4bc LT
	if(var_20_bool == 0) goto Label_1222; // 0x4bd JumpB
	var_21_bool = 0; var_22_int = 0; var_23_string = ""; var_24_object = Obj(); // 0x4be PushV
	var_22_int = var_4_int; // 0x4bf Mov
	var_23_string = var_5_string; // 0x4c0 Mov
	var_24_object = var_6_object; // 0x4c1 Mov
	func_460(var_18_object, var_21_bool, var_22_int, var_23_string, var_24_object); // 0x4c2 NEW_2
	var_13_bool = var_21_bool; // 0x4c3 Mov
	return 12; // 0x4c5 Return
	
Label_1222:
	var_368_string = "button_weapon"; // 0x4c6 PushS
	var_369_bool = var_5_string == var_368_string; // 0x4c7 Eq
	if(var_369_bool == 0) goto Label_1231; // 0x4c8 JumpB
	var_370_int = 0; // 0x4c9 PushV
	var_370_int = 0; // 0x4ca MovI
	func_1335(var_18_object, var_370_int); // 0x4cb NEW_2
	var_13_bool = 1; // 0x4cd MovB
	goto Label_1323; // 0x4ce Jump
	
Label_1323:
	var_371_bool = var_13_bool == 0; // 0x52b Not
	if(var_371_bool == 0) goto Label_1332; // 0x52c JumpB
	var_372_bool = 0; var_373_int = 0; var_374_string = ""; var_375_object = Obj(); // 0x52d PushV
	var_373_int = var_4_int; // 0x52e Mov
	var_374_string = var_5_string; // 0x52f Mov
	var_375_object = var_6_object; // 0x530 Mov
	func_460(var_18_object, var_372_bool, var_373_int, var_374_string, var_375_object); // 0x531 NEW_2
	var_13_bool = var_372_bool; // 0x532 Mov
	
Label_1332:
	var_376_bool = var_13_bool; // 0x534 Push
	if(var_376_bool == 0) goto Label_1334; // 0x535 JumpB
	
Label_1334:
	return 12; // 0x536 Return
	
Label_1231:
	var_377_string = "button_clothes"; // 0x4cf PushS
	var_378_bool = var_5_string == var_377_string; // 0x4d0 Eq
	if(var_378_bool == 0) goto Label_1240; // 0x4d1 JumpB
	var_379_int = 0; // 0x4d2 PushV
	var_379_int = 1; // 0x4d3 MovI
	func_1335(var_18_object, var_379_int); // 0x4d4 NEW_2
	var_13_bool = 1; // 0x4d6 MovB
	goto Label_1323; // 0x4d7 Jump
	
Label_1240:
	var_380_string = "button_medcine"; // 0x4d8 PushS
	var_381_bool = var_5_string == var_380_string; // 0x4d9 Eq
	if(var_381_bool == 0) goto Label_1249; // 0x4da JumpB
	var_382_int = 0; // 0x4db PushV
	var_382_int = 2; // 0x4dc MovI
	func_1335(var_18_object, var_382_int); // 0x4dd NEW_2
	var_13_bool = 1; // 0x4df MovB
	goto Label_1323; // 0x4e0 Jump
	
Label_1249:
	var_383_string = "button_food"; // 0x4e1 PushS
	var_384_bool = var_5_string == var_383_string; // 0x4e2 Eq
	if(var_384_bool == 0) goto Label_1258; // 0x4e3 JumpB
	var_385_int = 0; // 0x4e4 PushV
	var_385_int = 3; // 0x4e5 MovI
	func_1335(var_18_object, var_385_int); // 0x4e6 NEW_2
	var_13_bool = 1; // 0x4e8 MovB
	goto Label_1323; // 0x4e9 Jump
	
Label_1258:
	var_386_string = "button_other"; // 0x4ea PushS
	var_387_bool = var_5_string == var_386_string; // 0x4eb Eq
	if(var_387_bool == 0) goto Label_1267; // 0x4ec JumpB
	var_388_int = 0; // 0x4ed PushV
	var_388_int = 4; // 0x4ee MovI
	func_1335(var_18_object, var_388_int); // 0x4ef NEW_2
	var_13_bool = 1; // 0x4f1 MovB
	goto Label_1323; // 0x4f2 Jump
	
Label_1267:
	var_389_string = "button_detector"; // 0x4f3 PushS
	var_390_bool = var_5_string == var_389_string; // 0x4f4 Eq
	if(var_390_bool == 0) goto Label_1271; // 0x4f5 JumpB
	goto Label_1323; // 0x4f6 Jump
	
Label_1271:
	var_391_string = "button_anticeptic"; // 0x4f7 PushS
	var_392_bool = var_5_string == var_391_string; // 0x4f8 Eq
	if(var_392_bool == 0) goto Label_1275; // 0x4f9 JumpB
	goto Label_1323; // 0x4fa Jump
	
Label_1275:
	var_393_int = 0; // 0x4fb PushI
	var_394_bool = var_4_int != var_393_int; // 0x4fc Neq
	if(var_394_bool == 0) goto Label_1284; // 0x4fd JumpB
	var_395_string = "noinv_drop"; // 0x4fe PushS
	GetVariable(var_395_string, var_14_int); // 0x4ff Func
	var_396_int = var_14_int; // 0x501 Push
	if(var_396_int == 0) goto Label_1284; // 0x502 JumpB
	return 12; // 0x503 Return
	
Label_1284:
	var_15_int = 0; // 0x504 MovI
	
Label_1285:
	var_397_int = 12; // 0x505 PushI
	var_398_bool = var_15_int < var_397_int; // 0x506 LT
	if(var_398_bool == 0) goto Label_1323; // 0x507 JumpB
	var_399_string = ""; var_400_int = 0; // 0x508 PushV
	var_400_int = var_15_int; // 0x509 Mov
	func_1656(var_399_string, var_400_int); // 0x50a NEW_2
	var_411_bool = var_5_string == var_399_string; // 0x50c Eq
	if(var_411_bool == 0) goto Label_1320; // 0x50d JumpB
	var_412_object = Obj(); // 0x50e PushV
	func_454(var_412_object); // 0x50f NEW_2
	var_16_object = var_412_object; // 0x510 Mov
	GetItemCount(var_17_int, var_0_int); // 0x512 ObjFunc
	var_413_bool = var_17_int > var_15_int; // 0x514 GT
	if(var_413_bool == 0) goto Label_1318; // 0x515 JumpB
	GetItem(var_18_object, var_15_int, var_0_int); // 0x516 ObjFunc
	var_414_bool = 0; var_415_object = Obj(); // 0x518 PushV
	var_415_object = var_18_object; // 0x519 Mov
	func_1177(var_415_object); // 0x51a NEW_2
	var_416_bool = var_414_bool == 0; // 0x51c Not
	if(var_416_bool == 0) goto Label_1317; // 0x51d JumpB
	var_417_bool = 0; var_418_int = 0; var_419_int = 0; // 0x51e PushV
	var_418_int = var_15_int; // 0x51f Mov
	var_420_int = 0; // 0x520 PushI
	var_419_int = var_4_int == var_420_int; // 0x521 Eq2
	func_670(var_18_object, var_417_bool, var_418_int, var_419_int); // 0x522 NEW_2
	var_13_bool = var_417_bool; // 0x523 Mov
	
Label_1317:
	var_18_object = 0; // 0x525 SetNull
	
Label_1318:
	goto Label_1323; // 0x526 Jump
	
Label_1320:
	var_455_int = 1; // 0x528 PushI
	var_15_int = var_15_int + var_455_int; // 0x529 Add2
	goto Label_1285; // 0x52a Jump
}


main(var_0_int, var_1_object, var_2_int, var_3_int)
{
	var_4_int = 0; var_5_object = Obj(); var_6_string = ""; var_7_string = ""; var_8_int = 0; var_9_object = Obj(); var_10_int = 0; var_11_object = Obj(); var_12_string = ""; var_13_string = ""; var_14_int = 0; var_15_object = Obj(); // 0x0 PushV
	var_16_string = "inventory_base.xml"; // 0x1 PushS
	var_17_bool = 0; // 0x2 PushB
	CreateWindow(var_16_string, var_17_bool, var_17_bool); // 0x3 Func
	func_683(var_15_object); // 0x6 NEW_2
	var_3_int = 2; // 0x8 TMovI
	var_10_int = 0; // 0x9 MovI
	
Label_10:
	var_66_int = 4; // 0xa PushI
	var_67_bool = var_10_int < var_66_int; // 0xb LT
	if(var_67_bool == 0) goto Label_56; // 0xc JumpB
	CreateStringVector(var_11_object); // 0xd Func
	var_68_int = 1; // 0xf PushI
	var_69_int = var_10_int - var_68_int; // 0x10 Sub
	var_70_int = 0; // 0x11 PushI
	var_71_bool = var_69_int >= var_70_int; // 0x12 GE
	if(var_71_bool == 0) goto Label_27; // 0x13 JumpB
	var_72_string = ""; var_73_int = 0; // 0x14 PushV
	var_74_int = 1; // 0x15 PushI
	var_73_int = var_10_int - var_74_int; // 0x16 Sub2
	func_1672(var_72_string, var_73_int); // 0x17 NEW_2
	var_12_string = var_72_string; // 0x18 Mov
	goto Label_28; // 0x1a Jump
	
Label_28:
	var_85_int = 1; // 0x1c PushI
	var_86_int = var_10_int + var_85_int; // 0x1d Add
	var_87_int = 4; // 0x1e PushI
	var_88_bool = var_86_int < var_87_int; // 0x1f LT
	if(var_88_bool == 0) goto Label_40; // 0x20 JumpB
	var_89_string = ""; var_90_int = 0; // 0x21 PushV
	var_91_int = 1; // 0x22 PushI
	var_90_int = var_10_int + var_91_int; // 0x23 Add2
	func_1672(var_89_string, var_90_int); // 0x24 NEW_2
	var_13_string = var_89_string; // 0x25 Mov
	goto Label_41; // 0x27 Jump
	
Label_41:
	add(var_12_string); // 0x29 ObjFunc
	add(var_13_string); // 0x2b ObjFunc
	var_92_int = -1; // 0x2d PushI
	var_93_string = ""; var_94_int = 0; // 0x2e PushV
	var_94_int = var_10_int; // 0x2f Mov
	func_1672(var_93_string, var_94_int); // 0x30 NEW_2
	SendMessage(var_92_int, var_93_string, var_11_object); // 0x32 Func
	var_11_object = 0; // 0x34 SetNull
	var_95_int = 1; // 0x35 PushI
	var_10_int = var_10_int + var_95_int; // 0x36 Add2
	goto Label_10; // 0x37 Jump
	
Label_40:
	var_13_string = "$parent"; // 0x28 MovS
	
Label_27:
	var_12_string = "$parent"; // 0x1b MovS
	
Label_56:
	var_14_int = 0; // 0x38 MovI
	
Label_57:
	var_96_int = 4; // 0x39 PushI
	var_97_bool = var_14_int < var_96_int; // 0x3a LT
	if(var_97_bool == 0) goto Label_95; // 0x3b JumpB
	CreateStringVector(var_15_object); // 0x3c Func
	var_98_string = ""; var_99_int = 0; // 0x3e PushV
	var_100_int = 4; // 0x3f PushI
	var_101_int = var_14_int + var_100_int; // 0x40 Add
	var_102_int = 1; // 0x41 PushI
	var_103_int = var_101_int - var_102_int; // 0x42 Sub
	var_104_int = 4; // 0x43 PushI
	var_99_int = var_103_int % var_104_int; // 0x44 Mod2
	func_1688(var_98_string, var_99_int); // 0x45 NEW_2
	add(var_98_string); // 0x47 ObjFunc
	var_115_string = ""; var_116_int = 0; // 0x49 PushV
	var_117_int = 4; // 0x4a PushI
	var_118_int = var_14_int + var_117_int; // 0x4b Add
	var_119_int = 1; // 0x4c PushI
	var_120_int = var_118_int + var_119_int; // 0x4d Add
	var_121_int = 4; // 0x4e PushI
	var_116_int = var_120_int % var_121_int; // 0x4f Mod2
	func_1688(var_115_string, var_116_int); // 0x50 NEW_2
	add(var_115_string); // 0x52 ObjFunc
	var_122_int = -1; // 0x54 PushI
	var_123_string = ""; var_124_int = 0; // 0x55 PushV
	var_124_int = var_14_int; // 0x56 Mov
	func_1688(var_123_string, var_124_int); // 0x57 NEW_2
	SendMessage(var_122_int, var_123_string, var_15_object); // 0x59 Func
	var_15_object = 0; // 0x5b SetNull
	var_125_int = 1; // 0x5c PushI
	var_14_int = var_14_int + var_125_int; // 0x5d Add2
	goto Label_57; // 0x5e Jump
	
Label_95:
	var_126_int = 0; // 0x5f PushV
	var_126_int = 0; // 0x60 MovI
	func_930(var_15_object, var_126_int); // 0x61 NEW_2
	return 12; // 0x63 Return
}


func_900(var_24_int)
{
	var_25_object = Obj(); var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_object = Obj(); var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_object = Obj(); var_38_int = 0; var_39_int = 0; var_40_bool = 0; // 0x384 PushV
	GetContainer(var_33_object); // 0x385 Func
	GetItemCount(var_34_int); // 0x387 ObjFunc
	var_35_int = 0; // 0x389 MovI
	var_36_int = 0; // 0x38a MovI
	
Label_907:
	var_41_bool = var_36_int < var_34_int; // 0x38b LT
	if(var_41_bool == 0) goto Label_927; // 0x38c JumpB
	GetItem(var_37_object, var_36_int); // 0x38d ObjFunc
	GetItemID(var_38_int); // 0x38f ObjFunc
	GetItemAmount(var_39_int, var_36_int); // 0x391 ObjFunc
	var_40_bool = 0; // 0x393 MovB
	var_42_string = "Organ"; // 0x394 PushS
	HasProperty(var_40_bool, var_42_string); // 0x395 ObjFunc
	var_43_bool = var_40_bool == 0; // 0x397 Not
	if(var_43_bool == 0) goto Label_923; // 0x398 JumpB
	var_44_int = 1; // 0x399 PushI
	var_35_int = var_35_int + var_44_int; // 0x39a Add2
	
Label_923:
	var_37_object = 0; // 0x39b SetNull
	var_45_int = 1; // 0x39c PushI
	var_36_int = var_36_int + var_45_int; // 0x39d Add2
	goto Label_907; // 0x39e Jump
	
Label_927:
	var_24_int = var_35_int; // 0x39f Mov
	return 16; // 0x3a0 Return
}


func_1672(var_72_string, var_73_int)
{
	var_75_int = 1; // 0x689 PushI
	var_76_int = var_73_int + var_75_int; // 0x68a Add
	var_77_int = 10; // 0x68b PushI
	var_78_bool = var_76_int < var_77_int; // 0x68c LT
	if(var_78_bool == 0) goto Label_1683; // 0x68d JumpB
	var_79_string = "cslot0"; // 0x68e PushS
	var_80_int = 1; // 0x68f PushI
	var_81_int = var_73_int + var_80_int; // 0x690 Add
	var_72_string = var_79_string + var_81_int; // 0x691 Add2
	return 0; // 0x692 Return
	
Label_1683:
	var_82_string = "cslot"; // 0x693 PushS
	var_83_int = 1; // 0x694 PushI
	var_84_int = var_73_int + var_83_int; // 0x695 Add
	var_72_string = var_82_string + var_84_int; // 0x696 Add2
	return 0; // 0x697 Return
}


func_654(var_2_int, var_344_int)
{
	var_349_bool = 0; var_350_bool = 0; // 0x28e PushV
	var_351_int = 0; // 0x28f PushV
	var_352_int = 0; var_353_bool = 0; var_354_int = 0; // 0x290 PushV
	var_353_bool = var_350_bool; // 0x291 Mov
	var_354_int = var_344_int + var_2_int; // 0x292 Add2
	func_1439(var_352_int, var_353_bool, var_354_int); // 0x293 NEW_2
	var_351_int = var_352_int; // 0x294 Mov
	func_1335(var_350_bool, var_351_int); // 0x296 NEW_2
	var_355_bool = var_350_bool == 0; // 0x298 Not
	if(var_355_bool == 0) goto Label_666; // 0x299 JumpB
	
Label_666:
	func_683(var_350_bool); // 0x29b NEW_2
	return 2; // 0x29d Return
}


func_1688(var_98_string, var_99_int)
{
	var_105_int = 1; // 0x699 PushI
	var_106_int = var_99_int + var_105_int; // 0x69a Add
	var_107_int = 10; // 0x69b PushI
	var_108_bool = var_106_int < var_107_int; // 0x69c LT
	if(var_108_bool == 0) goto Label_1699; // 0x69d JumpB
	var_109_string = "ccslot0"; // 0x69e PushS
	var_110_int = 1; // 0x69f PushI
	var_111_int = var_99_int + var_110_int; // 0x6a0 Add
	var_98_string = var_109_string + var_111_int; // 0x6a1 Add2
	return 0; // 0x6a2 Return
	
Label_1699:
	var_112_string = "ccslot"; // 0x6a3 PushS
	var_113_int = 1; // 0x6a4 PushI
	var_114_int = var_99_int + var_113_int; // 0x6a5 Add
	var_98_string = var_112_string + var_114_int; // 0x6a6 Add2
	return 0; // 0x6a7 Return
}


func_1177(var_196_bool)
{
	var_196_bool = 0; // 0x49a MovB
	return 0; // 0x49b Return
}


func_1180(var_187_bool, var_188_int, var_189_int)
{
	var_190_bool = 0; var_191_bool = 0; // 0x49c PushV
	var_192_object = Obj(); // 0x49d PushV
	func_454(var_192_object); // 0x49e NEW_2
	var_193_object = Obj(); // 0x4a0 PushV
	func_454(var_193_object); // 0x4a1 NEW_2
	var_194_object = Obj(); // 0x4a3 PushV
	func_454(var_194_object); // 0x4a4 NEW_2
	var_195_object = Obj(); // 0x4a6 PushV
	func_454(var_195_object); // 0x4a7 NEW_2
	IsItemSelected(var_191_bool, var_188_int, var_189_int); // 0x4a9 ObjFunc
	var_187_bool = var_191_bool; // 0x4ab Mov
	return 2; // 0x4ac Return
}


func_670(var_0_int, var_2_int, var_417_bool, var_418_int)
{
	var_421_bool = 0; var_422_int = 0; var_423_int = 0; // 0x29f PushV
	var_422_int = var_0_int; // 0x2a0 MovT
	var_423_int = var_418_int; // 0x2a1 Mov
	func_1519(var_419_int, var_421_bool, var_422_int, var_423_int); // 0x2a2 NEW_2
	var_454_int = 1; // 0x2a4 PushI
	var_2_int = var_2_int + var_454_int; // 0x2a5 Add2
	func_683(var_419_int); // 0x2a7 NEW_2
	var_417_bool = 1; // 0x2a9 MovB
	return 0; // 0x2aa Return
}


func_1439(var_244_int, var_245_bool, var_246_int)
{
	var_247_object = Obj(); var_248_object = Obj(); var_249_object = Obj(); var_250_int = 0; var_251_int = 0; var_252_int = 0; var_253_bool = 0; var_254_int = 0; var_255_int = 0; var_256_bool = 0; var_257_bool = 0; var_258_object = Obj(); var_259_object = Obj(); var_260_object = Obj(); var_261_int = 0; var_262_int = 0; var_263_int = 0; var_264_bool = 0; var_265_int = 0; var_266_int = 0; var_267_bool = 0; var_268_bool = 0; // 0x59f PushV
	var_245_bool = 0; // 0x5a0 MovB
	var_269_int = -1; // 0x5a1 PushI
	var_270_bool = var_246_int == var_269_int; // 0x5a2 Eq
	if(var_270_bool == 0) goto Label_1446; // 0x5a3 JumpB
	var_244_int = -1; // 0x5a4 MovI
	return 22; // 0x5a5 Return
	
Label_1446:
	var_271_object = Obj(); // 0x5a6 PushV
	func_454(var_271_object); // 0x5a7 NEW_2
	var_259_object = var_271_object; // 0x5a8 Mov
	GetContainer(var_258_object); // 0x5aa Func
	GetItemCount(var_261_int); // 0x5ac ObjFunc
	var_274_bool = var_261_int <= var_246_int; // 0x5ae LE
	if(var_274_bool == 0) goto Label_1458; // 0x5af JumpB
	var_244_int = -1; // 0x5b0 MovI
	return 22; // 0x5b1 Return
	
Label_1458:
	GetItemAmount(var_262_int, var_246_int); // 0x5b2 ObjFunc
	var_275_int = 0; // 0x5b4 PushI
	var_276_bool = var_262_int == var_275_int; // 0x5b5 Eq
	if(var_276_bool == 0) goto Label_1465; // 0x5b6 JumpB
	var_244_int = -1; // 0x5b7 MovI
	return 22; // 0x5b8 Return
	
Label_1465:
	GetItem(var_260_object, var_246_int); // 0x5b9 ObjFunc
	GetItemID(var_263_int); // 0x5bb ObjFunc
	var_264_bool = 0; // 0x5bd MovB
	var_277_string = "Organ"; // 0x5be PushS
	HasProperty(var_264_bool, var_277_string); // 0x5bf ObjFunc
	var_278_bool = var_264_bool; // 0x5c1 Push
	if(var_278_bool == 0) goto Label_1478; // 0x5c2 JumpB
	var_279_string = "Organ"; // 0x5c3 PushS
	RemoveProperty(var_279_string); // 0x5c4 ObjFunc
	
Label_1478:
	var_280_string = "Category"; // 0x5c6 PushS
	GetInvItemProperty(var_265_int, var_263_int, var_280_string); // 0x5c7 Func
	var_281_int = 0; // 0x5c9 PushV
	func_1704(var_281_int); // 0x5ca NEW_2
	var_285_bool = var_263_int == var_281_int; // 0x5cc Eq
	if(var_285_bool == 0) goto Label_1503; // 0x5cd JumpB
	var_286_int = 0; // 0x5ce PushV
	func_1349(var_286_int); // 0x5cf NEW_2
	var_266_int = var_286_int; // 0x5d0 Mov
	var_266_int = var_266_int + var_262_int; // 0x5d2 Add2
	var_293_int = 0; // 0x5d3 PushV
	var_293_int = var_266_int; // 0x5d4 Mov
	func_1360(var_293_int); // 0x5d5 NEW_2
	RemoveItem(var_246_int, var_262_int); // 0x5d7 ObjFunc
	func_1370(); // 0x5da NEW_2
	var_245_bool = 1; // 0x5dc MovB
	var_244_int = -1; // 0x5dd MovI
	return 22; // 0x5de Return
	
Label_1503:
	var_300_int = 1; // 0x5df PushI
	AddItem(var_268_bool, var_260_object, var_265_int, var_300_int); // 0x5e0 ObjFunc
	var_301_bool = var_268_bool == 0; // 0x5e2 Not
	if(var_301_bool == 0) goto Label_1510; // 0x5e3 JumpB
	var_244_int = var_265_int; // 0x5e4 Mov
	return 22; // 0x5e5 Return
	
Label_1510:
	var_245_bool = 1; // 0x5e6 MovB
	var_302_int = 1; // 0x5e7 PushI
	RemoveItem(var_246_int, var_302_int); // 0x5e8 ObjFunc
	var_244_int = var_265_int; // 0x5ea Mov
	return 22; // 0x5eb Return
}


func_288(var_3_int, var_5_int)
{
	var_6_int = 0; var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; var_15_int = 0; var_16_int = 0; var_17_int = 0; // 0x120 PushV
	var_18_int = 272; // 0x121 PushI
	var_19_bool = var_5_int == var_18_int; // 0x122 Eq
	if(var_19_bool == 0) goto Label_336; // 0x123 JumpB
	var_20_int = 0; // 0x124 PushI
	var_21_bool = var_3_int == var_20_int; // 0x125 Eq
	if(var_21_bool == 0) goto Label_311; // 0x126 JumpB
	var_3_int = 1; // 0x127 TMovI
	var_12_int = 0; // 0x128 MovI
	
Label_297:
	var_22_int = 4; // 0x129 PushI
	var_23_bool = var_12_int < var_22_int; // 0x12a LT
	if(var_23_bool == 0) goto Label_310; // 0x12b JumpB
	var_24_int = -7; // 0x12c PushI
	var_25_string = ""; var_26_int = 0; // 0x12d PushV
	var_26_int = var_12_int; // 0x12e Mov
	func_1688(var_25_string, var_26_int); // 0x12f NEW_2
	SendMessage(var_24_int, var_25_string); // 0x131 Func
	var_37_int = 1; // 0x133 PushI
	var_12_int = var_12_int + var_37_int; // 0x134 Add2
	goto Label_297; // 0x135 Jump
	
Label_310:
	goto Label_336; // 0x136 Jump
	
Label_336:
	var_38_int = 274; // 0x150 PushI
	var_39_bool = var_5_int == var_38_int; // 0x151 Eq
	if(var_39_bool == 0) goto Label_383; // 0x152 JumpB
	var_40_bool = 0; // 0x153 PushV
	var_40_bool = 1; // 0x154 MovB
	var_41_int = 1; // 0x155 PushI
	var_42_bool = var_3_int == var_41_int; // 0x156 Eq
	if(var_42_bool == 0) goto Label_348; // 0x157 JumpB
	var_43_int = 0; // 0x158 PushI
	var_44_bool = var_3_int == var_43_int; // 0x159 Eq
	if(var_44_bool == 0) goto Label_348; // 0x15a JumpB
	var_40_bool = 0; // 0x15b MovB
	
Label_348:
	if(var_40_bool == 0) goto Label_365; // 0x15c JumpB
	var_3_int = 0; // 0x15d TMovI
	var_14_int = 0; // 0x15e MovI
	
Label_351:
	var_45_int = 12; // 0x15f PushI
	var_46_bool = var_14_int < var_45_int; // 0x160 LT
	if(var_46_bool == 0) goto Label_364; // 0x161 JumpB
	var_47_int = -7; // 0x162 PushI
	var_48_string = ""; var_49_int = 0; // 0x163 PushV
	var_49_int = var_14_int; // 0x164 Mov
	func_1656(var_48_string, var_49_int); // 0x165 NEW_2
	SendMessage(var_47_int, var_48_string); // 0x167 Func
	var_60_int = 1; // 0x169 PushI
	var_14_int = var_14_int + var_60_int; // 0x16a Add2
	goto Label_351; // 0x16b Jump
	
Label_364:
	goto Label_383; // 0x16c Jump
	
Label_383:
	var_61_int = 0; // 0x17f PushI
	var_62_bool = var_3_int == var_61_int; // 0x180 Eq
	if(var_62_bool == 0) goto Label_391; // 0x181 JumpB
	var_63_int = 0; // 0x182 PushV
	var_63_int = var_5_int; // 0x183 Mov
	func_1141(var_63_int); // 0x184 NEW_2
	return 12; // 0x186 Return
	
Label_391:
	var_84_int = 273; // 0x187 PushI
	var_85_bool = var_5_int == var_84_int; // 0x188 Eq
	if(var_85_bool == 0) goto Label_422; // 0x189 JumpB
	var_16_int = 0; // 0x18a MovI
	
Label_395:
	var_86_int = 4; // 0x18b PushI
	var_87_bool = var_16_int < var_86_int; // 0x18c LT
	if(var_87_bool == 0) goto Label_422; // 0x18d JumpB
	var_88_int = 2; // 0x18e PushI
	var_89_bool = var_3_int == var_88_int; // 0x18f Eq
	if(var_89_bool == 0) goto Label_409; // 0x190 JumpB
	var_90_int = -2; // 0x191 PushI
	var_91_string = ""; var_92_int = 0; // 0x192 PushV
	var_92_int = var_16_int; // 0x193 Mov
	func_1672(var_91_string, var_92_int); // 0x194 NEW_2
	SendMessage(var_90_int, var_91_string); // 0x196 Func
	goto Label_419; // 0x198 Jump
	
Label_419:
	var_103_int = 1; // 0x1a3 PushI
	var_16_int = var_16_int + var_103_int; // 0x1a4 Add2
	goto Label_395; // 0x1a5 Jump
	
Label_409:
	var_104_int = 1; // 0x199 PushI
	var_105_bool = var_3_int == var_104_int; // 0x19a Eq
	if(var_105_bool == 0) goto Label_419; // 0x19b JumpB
	var_106_int = -2; // 0x19c PushI
	var_107_string = ""; var_108_int = 0; // 0x19d PushV
	var_108_int = var_16_int; // 0x19e Mov
	func_1688(var_107_string, var_108_int); // 0x19f NEW_2
	SendMessage(var_106_int, var_107_string); // 0x1a1 Func
	
Label_422:
	var_109_int = 271; // 0x1a6 PushI
	var_110_bool = var_5_int == var_109_int; // 0x1a7 Eq
	if(var_110_bool == 0) goto Label_453; // 0x1a8 JumpB
	var_17_int = 0; // 0x1a9 MovI
	
Label_426:
	var_111_int = 4; // 0x1aa PushI
	var_112_bool = var_17_int < var_111_int; // 0x1ab LT
	if(var_112_bool == 0) goto Label_453; // 0x1ac JumpB
	var_113_int = 2; // 0x1ad PushI
	var_114_bool = var_3_int == var_113_int; // 0x1ae Eq
	if(var_114_bool == 0) goto Label_440; // 0x1af JumpB
	var_115_int = -3; // 0x1b0 PushI
	var_116_string = ""; var_117_int = 0; // 0x1b1 PushV
	var_117_int = var_17_int; // 0x1b2 Mov
	func_1672(var_116_string, var_117_int); // 0x1b3 NEW_2
	SendMessage(var_115_int, var_116_string); // 0x1b5 Func
	goto Label_450; // 0x1b7 Jump
	
Label_450:
	var_118_int = 1; // 0x1c2 PushI
	var_17_int = var_17_int + var_118_int; // 0x1c3 Add2
	goto Label_426; // 0x1c4 Jump
	
Label_440:
	var_119_int = 1; // 0x1b8 PushI
	var_120_bool = var_3_int == var_119_int; // 0x1b9 Eq
	if(var_120_bool == 0) goto Label_450; // 0x1ba JumpB
	var_121_int = -3; // 0x1bb PushI
	var_122_string = ""; var_123_int = 0; // 0x1bc PushV
	var_123_int = var_17_int; // 0x1bd Mov
	func_1688(var_122_string, var_123_int); // 0x1be NEW_2
	SendMessage(var_121_int, var_122_string); // 0x1c0 Func
	
Label_453:
	return 12; // 0x1c5 Return
	
Label_365:
	var_124_int = 2; // 0x16d PushI
	var_125_bool = var_3_int == var_124_int; // 0x16e Eq
	if(var_125_bool == 0) goto Label_383; // 0x16f JumpB
	var_3_int = 1; // 0x170 TMovI
	var_15_int = 0; // 0x171 MovI
	
Label_370:
	var_126_int = 4; // 0x172 PushI
	var_127_bool = var_15_int < var_126_int; // 0x173 LT
	if(var_127_bool == 0) goto Label_383; // 0x174 JumpB
	var_128_int = -7; // 0x175 PushI
	var_129_string = ""; var_130_int = 0; // 0x176 PushV
	var_130_int = var_15_int; // 0x177 Mov
	func_1688(var_129_string, var_130_int); // 0x178 NEW_2
	SendMessage(var_128_int, var_129_string); // 0x17a Func
	var_131_int = 1; // 0x17c PushI
	var_15_int = var_15_int + var_131_int; // 0x17d Add2
	goto Label_370; // 0x17e Jump
	
Label_311:
	var_132_bool = 0; // 0x137 PushV
	var_132_bool = 1; // 0x138 MovB
	var_133_int = 1; // 0x139 PushI
	var_134_bool = var_3_int == var_133_int; // 0x13a Eq
	if(var_134_bool == 0) goto Label_320; // 0x13b JumpB
	var_135_int = 2; // 0x13c PushI
	var_136_bool = var_3_int == var_135_int; // 0x13d Eq
	if(var_136_bool == 0) goto Label_320; // 0x13e JumpB
	var_132_bool = 0; // 0x13f MovB
	
Label_320:
	if(var_132_bool == 0) goto Label_336; // 0x140 JumpB
	var_3_int = 2; // 0x141 TMovI
	var_13_int = 0; // 0x142 MovI
	
Label_323:
	var_137_int = 4; // 0x143 PushI
	var_138_bool = var_13_int < var_137_int; // 0x144 LT
	if(var_138_bool == 0) goto Label_336; // 0x145 JumpB
	var_139_int = -7; // 0x146 PushI
	var_140_string = ""; var_141_int = 0; // 0x147 PushV
	var_141_int = var_13_int; // 0x148 Mov
	func_1672(var_140_string, var_141_int); // 0x149 NEW_2
	SendMessage(var_139_int, var_140_string); // 0x14b Func
	var_142_int = 1; // 0x14d PushI
	var_13_int = var_13_int + var_142_int; // 0x14e Add2
	goto Label_323; // 0x14f Jump
}


func_1569(var_166_int)
{
	var_167_object = Obj(); var_168_int = 0; var_169_int = 0; var_170_object = Obj(); var_171_int = 0; var_172_bool = 0; var_173_bool = 0; var_174_object = Obj(); var_175_int = 0; var_176_int = 0; var_177_object = Obj(); var_178_int = 0; var_179_bool = 0; var_180_bool = 0; // 0x621 PushV
	var_181_object = Obj(); // 0x622 PushV
	func_454(var_181_object); // 0x623 NEW_2
	var_174_object = var_181_object; // 0x624 Mov
	GetItemCount(var_175_int, var_166_int); // 0x626 ObjFunc
	var_176_int = 0; // 0x628 MovI
	
Label_1577:
	var_184_int = 12; // 0x629 PushI
	var_185_bool = var_176_int < var_184_int; // 0x62a LT
	if(var_185_bool == 0) goto Label_1654; // 0x62b JumpB
	var_186_bool = var_176_int < var_175_int; // 0x62c LT
	if(var_186_bool == 0) goto Label_1644; // 0x62d JumpB
	GetItem(var_177_object, var_176_int, var_166_int); // 0x62e ObjFunc
	GetItemAmount(var_178_int, var_176_int, var_166_int); // 0x630 ObjFunc
	var_187_bool = 0; var_188_int = 0; var_189_int = 0; // 0x632 PushV
	var_188_int = var_176_int; // 0x633 Mov
	var_189_int = var_166_int; // 0x634 Mov
	func_1180(var_187_bool, var_188_int, var_189_int); // 0x635 NEW_2
	var_179_bool = var_187_bool; // 0x636 Mov
	var_196_bool = 0; var_197_object = Obj(); // 0x638 PushV
	var_197_object = var_177_object; // 0x639 Mov
	func_1177(var_197_object); // 0x63a NEW_2
	var_180_bool = var_196_bool; // 0x63b Mov
	var_198_bool = var_179_bool; // 0x63d Push
	if(var_198_bool == 0) goto Label_1617; // 0x63e JumpB
	var_199_bool = var_180_bool; // 0x63f Push
	if(var_199_bool == 0) goto Label_1609; // 0x640 JumpB
	var_200_int = 0; // 0x641 PushI
	var_201_string = ""; var_202_int = 0; // 0x642 PushV
	var_202_int = var_176_int; // 0x643 Mov
	func_1656(var_201_string, var_202_int); // 0x644 NEW_2
	SendMessage(var_200_int, var_201_string, var_177_object); // 0x646 Func
	goto Label_1616; // 0x648 Jump
	
Label_1616:
	goto Label_1634; // 0x650 Jump
	
Label_1634:
	var_213_int = 65536; // 0x662 PushI
	var_214_int = var_178_int | var_213_int; // 0x663 Or
	var_215_string = ""; var_216_int = 0; // 0x664 PushV
	var_216_int = var_176_int; // 0x665 Mov
	func_1656(var_215_string, var_216_int); // 0x666 NEW_2
	SendMessage(var_214_int, var_215_string); // 0x668 Func
	var_177_object = 0; // 0x66a SetNull
	goto Label_1651; // 0x66b Jump
	
Label_1651:
	var_217_int = 1; // 0x673 PushI
	var_176_int = var_176_int + var_217_int; // 0x674 Add2
	goto Label_1577; // 0x675 Jump
	
Label_1609:
	var_218_int = 16384; // 0x649 PushI
	var_219_string = ""; var_220_int = 0; // 0x64a PushV
	var_220_int = var_176_int; // 0x64b Mov
	func_1656(var_219_string, var_220_int); // 0x64c NEW_2
	SendMessage(var_218_int, var_219_string, var_177_object); // 0x64e Func
	
Label_1617:
	var_221_bool = var_180_bool; // 0x651 Push
	if(var_221_bool == 0) goto Label_1627; // 0x652 JumpB
	var_222_int = 131072; // 0x653 PushI
	var_223_string = ""; var_224_int = 0; // 0x654 PushV
	var_224_int = var_176_int; // 0x655 Mov
	func_1656(var_223_string, var_224_int); // 0x656 NEW_2
	SendMessage(var_222_int, var_223_string, var_177_object); // 0x658 Func
	goto Label_1634; // 0x65a Jump
	
Label_1627:
	var_225_int = 0; // 0x65b PushI
	var_226_string = ""; var_227_int = 0; // 0x65c PushV
	var_227_int = var_176_int; // 0x65d Mov
	func_1656(var_226_string, var_227_int); // 0x65e NEW_2
	SendMessage(var_225_int, var_226_string, var_177_object); // 0x660 Func
	
Label_1644:
	var_228_int = 32768; // 0x66c PushI
	var_229_string = ""; var_230_int = 0; // 0x66d PushV
	var_230_int = var_176_int; // 0x66e Mov
	func_1656(var_229_string, var_230_int); // 0x66f NEW_2
	SendMessage(var_228_int, var_229_string); // 0x671 Func
	
Label_1654:
	return 14; // 0x676 Return
}


func_930(var_0_int, var_126_int)
{
	var_127_int = 0; var_128_object = Obj(); var_129_int = 0; var_130_object = Obj(); // 0x3a2 PushV
	var_0_int = -1; // 0x3a3 TMovI
	var_131_int = 0; // 0x3a4 PushV
	var_131_int = var_126_int; // 0x3a5 Mov
	func_1335(var_130_object, var_131_int); // 0x3a6 NEW_2
	var_166_int = 0; // 0x3a8 PushV
	var_166_int = var_0_int; // 0x3a9 MovT
	func_1569(var_166_int); // 0x3aa NEW_2
	func_1370(); // 0x3ad NEW_2
	var_129_int = 0; // 0x3af MovI
	
Label_944:
	var_239_int = 12; // 0x3b0 PushI
	var_240_bool = var_129_int < var_239_int; // 0x3b1 LT
	if(var_240_bool == 0) goto Label_982; // 0x3b2 JumpB
	CreateStringVector(var_130_object); // 0x3b3 Func
	var_241_string = ""; var_242_int = 0; // 0x3b5 PushV
	var_243_int = 12; // 0x3b6 PushI
	var_244_int = var_129_int + var_243_int; // 0x3b7 Add
	var_245_int = 1; // 0x3b8 PushI
	var_246_int = var_244_int - var_245_int; // 0x3b9 Sub
	var_247_int = 12; // 0x3ba PushI
	var_242_int = var_246_int % var_247_int; // 0x3bb Mod2
	func_1656(var_241_string, var_242_int); // 0x3bc NEW_2
	add(var_241_string); // 0x3be ObjFunc
	var_248_string = ""; var_249_int = 0; // 0x3c0 PushV
	var_250_int = 12; // 0x3c1 PushI
	var_251_int = var_129_int + var_250_int; // 0x3c2 Add
	var_252_int = 1; // 0x3c3 PushI
	var_253_int = var_251_int + var_252_int; // 0x3c4 Add
	var_254_int = 12; // 0x3c5 PushI
	var_249_int = var_253_int % var_254_int; // 0x3c6 Mod2
	func_1656(var_248_string, var_249_int); // 0x3c7 NEW_2
	add(var_248_string); // 0x3c9 ObjFunc
	var_255_int = -1; // 0x3cb PushI
	var_256_string = ""; var_257_int = 0; // 0x3cc PushV
	var_257_int = var_129_int; // 0x3cd Mov
	func_1656(var_256_string, var_257_int); // 0x3ce NEW_2
	SendMessage(var_255_int, var_256_string, var_130_object); // 0x3d0 Func
	var_130_object = 0; // 0x3d2 SetNull
	var_258_int = 1; // 0x3d3 PushI
	var_129_int = var_129_int + var_258_int; // 0x3d4 Add2
	goto Label_944; // 0x3d5 Jump
	
Label_982:
	func_100(); // 0x3d7 NEW_2
	var_268_string = "default"; // 0x3d9 PushS
	SetCursor(var_268_string); // 0x3da Func
	ShowCursor(); // 0x3dc Func
	CaptureKeyboard(); // 0x3de Func
	var_269_bool = 0; // 0x3e0 PushB
	SetOwnerDraw(var_269_bool); // 0x3e1 Func
	var_270_bool = 1; // 0x3e3 PushB
	SetNeedUpdate(var_270_bool); // 0x3e4 Func
	func_631(); // 0x3e7 NEW_2
	ProcessEvents(); // 0x3e9 Func
	return 4; // 0x3eb Return
}


func_1704(var_281_int)
{
	var_282_int = 0; var_283_int = 0; // 0x6a8 PushV
	var_284_string = "Money"; // 0x6a9 PushS
	GetInvItemByName(var_283_int, var_284_string); // 0x6aa Func
	var_281_int = var_283_int; // 0x6ac Mov
	return 2; // 0x6ad Return
}


func_683(var_2_int)
{
	var_18_int = 0; var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; // 0x2ab PushV
	var_24_int = 0; // 0x2ac PushV
	func_900(var_24_int); // 0x2ad NEW_2
	var_21_int = var_24_int; // 0x2ae Mov
	var_46_int = 4; // 0x2b0 PushI
	var_47_bool = var_21_int <= var_46_int; // 0x2b1 LE
	if(var_47_bool == 0) goto Label_697; // 0x2b2 JumpB
	var_48_int = 16384; // 0x2b3 PushI
	var_49_string = "scrollbar"; // 0x2b4 PushS
	SendMessage(var_48_int, var_49_string); // 0x2b5 Func
	var_2_int = 0; // 0x2b7 TMovI
	goto Label_722; // 0x2b8 Jump
	
Label_722:
	return 6; // 0x2d2 Return
	
Label_697:
	var_50_int = 4; // 0x2b9 PushI
	var_51_int = var_2_int + var_50_int; // 0x2ba Add
	var_52_bool = var_51_int > var_21_int; // 0x2bb GT
	if(var_52_bool == 0) goto Label_714; // 0x2bc JumpB
	var_53_int = 4; // 0x2bd PushI
	var_54_int = var_2_int + var_53_int; // 0x2be Add
	var_55_int = var_54_int - var_21_int; // 0x2bf Sub
	var_2_int = var_2_int - var_55_int; // 0x2c0 Sub2
	var_56_int = 100; // 0x2c1 PushI
	var_57_float = var_2_int * var_56_int; // 0x2c2 Mult
	var_58_int = 4; // 0x2c3 PushI
	var_59_int = var_21_int - var_58_int; // 0x2c4 Sub
	var_22_int = var_57_float / var_57_float; // 0x2c5 Div2
	var_60_string = "scrollbar"; // 0x2c6 PushS
	SendMessage(var_22_int, var_60_string); // 0x2c7 Func
	goto Label_722; // 0x2c9 Jump
	
Label_714:
	var_61_int = 100; // 0x2ca PushI
	var_62_float = var_2_int * var_61_int; // 0x2cb Mult
	var_63_int = 4; // 0x2cc PushI
	var_64_int = var_21_int - var_63_int; // 0x2cd Sub
	var_23_int = var_62_float / var_62_float; // 0x2ce Div2
	var_65_string = "scrollbar"; // 0x2cf PushS
	SendMessage(var_23_int, var_65_string); // 0x2d0 Func
}


func_1335(var_0_int, var_131_int)
{
	var_132_int = -1; // 0x538 PushI
	var_133_bool = var_131_int == var_132_int; // 0x539 Eq
	if(var_133_bool == 0) goto Label_1340; // 0x53a JumpB
	return 0; // 0x53b Return
	
Label_1340:
	var_134_bool = var_0_int == var_131_int; // 0x53c Eq
	if(var_134_bool == 0) goto Label_1343; // 0x53d JumpB
	return 0; // 0x53e Return
	
Label_1343:
	var_0_int = var_131_int; // 0x53f TMov
	var_135_int = 0; // 0x540 PushV
	var_135_int = var_0_int; // 0x541 MovT
	func_1377(var_135_int); // 0x542 NEW_2
	return 0; // 0x544 Return
}


func_1349(var_231_int)
{
	var_232_object = Obj(); var_233_int = 0; var_234_object = Obj(); var_235_int = 0; // 0x545 PushV
	var_236_object = Obj(); // 0x546 PushV
	func_454(var_236_object); // 0x547 NEW_2
	var_234_object = var_236_object; // 0x548 Mov
	var_237_string = "money"; // 0x54a PushS
	GetProperty(var_237_string, var_235_int); // 0x54b ObjFunc
	var_231_int = var_235_int; // 0x54d Mov
	return 4; // 0x54e Return
}


func_454(var_181_object)
{
	var_182_object = Obj(); var_183_object = Obj(); // 0x1c6 PushV
	GetPlayerContainer(var_183_object); // 0x1c7 Func
	var_181_object = var_183_object; // 0x1c9 Mov
	return 2; // 0x1ca Return
}


func_460(var_2_int, var_3_int, var_21_bool, var_22_int, var_23_string)
{
	var_25_object = Obj(); var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_object = Obj(); var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; // 0x1cc PushV
	var_35_int = -4; // 0x1cd PushI
	var_36_bool = var_22_int == var_35_int; // 0x1ce Eq
	if(var_36_bool == 0) goto Label_510; // 0x1cf JumpB
	var_37_string = ""; var_38_int = 0; // 0x1d0 PushV
	var_38_int = 0; // 0x1d1 MovI
	func_1672(var_37_string, var_38_int); // 0x1d2 NEW_2
	var_49_bool = var_23_string == var_37_string; // 0x1d4 Eq
	if(var_49_bool == 0) goto Label_482; // 0x1d5 JumpB
	var_50_int = 0; // 0x1d6 PushI
	var_51_bool = var_2_int > var_50_int; // 0x1d7 GT
	if(var_51_bool == 0) goto Label_481; // 0x1d8 JumpB
	var_52_int = -1; // 0x1d9 PushI
	var_2_int = var_2_int + var_52_int; // 0x1da Add2
	func_723(var_34_int); // 0x1dc NEW_2
	func_683(var_34_int); // 0x1df NEW_2
	
Label_481:
	goto Label_505; // 0x1e1 Jump
	
Label_505:
	var_184_int = -4; // 0x1f9 PushI
	SendMessage(var_184_int, var_23_string); // 0x1fa Func
	var_21_bool = 1; // 0x1fc MovB
	return 10; // 0x1fd Return
	
Label_482:
	var_185_string = ""; var_186_int = 0; // 0x1e2 PushV
	var_186_int = 3; // 0x1e3 MovI
	func_1672(var_185_string, var_186_int); // 0x1e4 NEW_2
	var_187_bool = var_23_string == var_185_string; // 0x1e6 Eq
	if(var_187_bool == 0) goto Label_505; // 0x1e7 JumpB
	GetContainer(var_30_object); // 0x1e8 Func
	GetItemCount(var_31_int); // 0x1ea ObjFunc
	var_188_int = 4; // 0x1ec PushI
	var_189_int = var_2_int + var_188_int; // 0x1ed Add
	var_190_bool = var_189_int <= var_31_int; // 0x1ee LE
	if(var_190_bool == 0) goto Label_504; // 0x1ef JumpB
	var_191_int = 1; // 0x1f0 PushI
	var_2_int = var_2_int + var_191_int; // 0x1f1 Add2
	func_723(var_34_int); // 0x1f3 NEW_2
	func_683(var_34_int); // 0x1f6 NEW_2
	
Label_504:
	var_30_object = 0; // 0x1f8 SetNull
	
Label_510:
	var_192_int = -8; // 0x1fe PushI
	var_193_bool = var_22_int == var_192_int; // 0x1ff Eq
	if(var_193_bool == 0) goto Label_516; // 0x200 JumpB
	var_3_int = 0; // 0x201 TMovI
	var_21_bool = 1; // 0x202 MovB
	return 10; // 0x203 Return
	
Label_516:
	var_194_int = -10; // 0x204 PushI
	var_195_bool = var_22_int == var_194_int; // 0x205 Eq
	if(var_195_bool == 0) goto Label_522; // 0x206 JumpB
	var_3_int = 1; // 0x207 TMovI
	var_21_bool = 1; // 0x208 MovB
	return 10; // 0x209 Return
	
Label_522:
	var_196_int = -9; // 0x20a PushI
	var_197_bool = var_22_int == var_196_int; // 0x20b Eq
	if(var_197_bool == 0) goto Label_528; // 0x20c JumpB
	var_3_int = 2; // 0x20d TMovI
	var_21_bool = 1; // 0x20e MovB
	return 10; // 0x20f Return
	
Label_528:
	var_198_int = 0; // 0x210 PushI
	var_199_bool = var_22_int < var_198_int; // 0x211 LT
	if(var_199_bool == 0) goto Label_533; // 0x212 JumpB
	var_21_bool = 1; // 0x213 MovB
	return 10; // 0x214 Return
	
Label_533:
	var_32_int = 0; // 0x215 MovI
	
Label_534:
	var_200_int = 4; // 0x216 PushI
	var_201_bool = var_32_int < var_200_int; // 0x217 LT
	if(var_201_bool == 0) goto Label_558; // 0x218 JumpB
	var_202_string = ""; var_203_int = 0; // 0x219 PushV
	var_203_int = var_32_int; // 0x21a Mov
	func_1688(var_202_string, var_203_int); // 0x21b NEW_2
	var_204_bool = var_23_string == var_202_string; // 0x21d Eq
	if(var_204_bool == 0) goto Label_555; // 0x21e JumpB
	var_205_int = 0; var_206_bool = 0; // 0x21f PushV
	var_207_int = 0; var_208_int = 0; var_209_bool = 0; // 0x220 PushV
	var_208_int = var_32_int; // 0x221 Mov
	var_209_bool = 1; // 0x222 MovB
	func_846(var_207_int, var_208_int, var_209_bool); // 0x223 NEW_2
	var_205_int = var_207_int; // 0x224 Mov
	var_206_bool = 1; // 0x226 MovB
	func_638(var_206_bool); // 0x227 NEW_2
	var_21_bool = 1; // 0x229 MovB
	return 10; // 0x22a Return
	
Label_555:
	var_338_int = 1; // 0x22b PushI
	var_32_int = var_32_int + var_338_int; // 0x22c Add2
	goto Label_534; // 0x22d Jump
	
Label_558:
	var_33_int = 0; // 0x22e MovI
	
Label_559:
	var_339_int = 4; // 0x22f PushI
	var_340_bool = var_33_int < var_339_int; // 0x230 LT
	if(var_340_bool == 0) goto Label_583; // 0x231 JumpB
	var_341_string = ""; var_342_int = 0; // 0x232 PushV
	var_342_int = var_33_int; // 0x233 Mov
	func_1672(var_341_string, var_342_int); // 0x234 NEW_2
	var_343_bool = var_23_string == var_341_string; // 0x236 Eq
	if(var_343_bool == 0) goto Label_580; // 0x237 JumpB
	var_344_int = 0; var_345_bool = 0; // 0x238 PushV
	var_346_int = 0; var_347_int = 0; var_348_bool = 0; // 0x239 PushV
	var_347_int = var_33_int; // 0x23a Mov
	var_348_bool = 0; // 0x23b MovB
	func_846(var_346_int, var_347_int, var_348_bool); // 0x23c NEW_2
	var_344_int = var_346_int; // 0x23d Mov
	var_345_bool = 1; // 0x23f MovB
	func_654(var_344_int, var_345_bool); // 0x240 NEW_2
	var_21_bool = 1; // 0x242 MovB
	return 10; // 0x243 Return
	
Label_580:
	var_356_int = 1; // 0x244 PushI
	var_33_int = var_33_int + var_356_int; // 0x245 Add2
	goto Label_559; // 0x246 Jump
	
Label_583:
	var_357_string = "scrollbar"; // 0x247 PushS
	var_358_bool = var_23_string == var_357_string; // 0x248 Eq
	if(var_358_bool == 0) goto Label_606; // 0x249 JumpB
	var_359_int = 0; // 0x24a PushV
	func_900(var_359_int); // 0x24b NEW_2
	var_34_int = var_359_int; // 0x24c Mov
	var_360_float = 0.01; // 0x24e PushF
	var_361_int = 4; // 0x24f PushI
	var_362_int = var_34_int - var_361_int; // 0x250 Sub
	var_363_float = var_360_float * var_362_int; // 0x251 Mult
	var_364_float = var_363_float * var_22_int; // 0x252 Mult
	var_365_float = 0.5; // 0x253 PushF
	var_2_int = var_364_float + var_365_float; // 0x254 Add2
	var_366_int = 0; // 0x255 PushI
	var_367_bool = var_2_int < var_366_int; // 0x256 LT
	if(var_367_bool == 0) goto Label_601; // 0x257 JumpB
	var_2_int = 0; // 0x258 TMovI
	
Label_601:
	func_723(var_34_int); // 0x25a NEW_2
	var_21_bool = 1; // 0x25c MovB
	return 10; // 0x25d Return
	
Label_606:
	var_21_bool = 0; // 0x25e MovB
	return 10; // 0x25f Return
}


func_846(var_207_int, var_208_int, var_209_bool)
{
	var_210_object = Obj(); var_211_int = 0; var_212_int = 0; var_213_int = 0; var_214_int = 0; var_215_object = Obj(); var_216_int = 0; var_217_int = 0; var_218_bool = 0; var_219_object = Obj(); var_220_int = 0; var_221_int = 0; var_222_int = 0; var_223_int = 0; var_224_object = Obj(); var_225_int = 0; var_226_int = 0; var_227_bool = 0; // 0x34e PushV
	GetContainer(var_219_object); // 0x34f Func
	GetItemCount(var_220_int); // 0x351 ObjFunc
	var_221_int = 0; // 0x353 MovI
	var_222_int = 0; // 0x354 MovI
	var_223_int = 0; // 0x355 MovI
	
Label_854:
	var_228_bool = var_223_int < var_220_int; // 0x356 LT
	if(var_228_bool == 0) goto Label_897; // 0x357 JumpB
	GetItem(var_224_object, var_223_int); // 0x358 ObjFunc
	GetItemID(var_225_int); // 0x35a ObjFunc
	GetItemAmount(var_226_int, var_223_int); // 0x35c ObjFunc
	var_227_bool = 0; // 0x35e MovB
	var_229_string = "Organ"; // 0x35f PushS
	HasProperty(var_227_bool, var_229_string); // 0x360 ObjFunc
	var_230_bool = var_227_bool; // 0x362 Push
	if(var_230_bool == 0) goto Label_881; // 0x363 JumpB
	var_231_bool = 0; // 0x364 PushV
	var_231_bool = 0; // 0x365 MovB
	var_232_bool = var_209_bool; // 0x366 Push
	if(var_232_bool == 0) goto Label_875; // 0x367 JumpB
	var_233_bool = var_221_int == var_208_int; // 0x368 Eq
	if(var_233_bool == 0) goto Label_875; // 0x369 JumpB
	var_231_bool = 1; // 0x36a MovB
	
Label_875:
	if(var_231_bool == 0) goto Label_878; // 0x36b JumpB
	var_207_int = var_223_int; // 0x36c Mov
	return 18; // 0x36d Return
	
Label_878:
	var_234_int = 1; // 0x36e PushI
	var_221_int = var_221_int + var_234_int; // 0x36f Add2
	goto Label_893; // 0x370 Jump
	
Label_893:
	var_224_object = 0; // 0x37d SetNull
	var_235_int = 1; // 0x37e PushI
	var_223_int = var_223_int + var_235_int; // 0x37f Add2
	goto Label_854; // 0x380 Jump
	
Label_881:
	var_236_bool = 0; // 0x371 PushV
	var_236_bool = 0; // 0x372 MovB
	var_237_bool = var_209_bool == 0; // 0x373 Not
	if(var_237_bool == 0) goto Label_888; // 0x374 JumpB
	var_238_bool = var_222_int == var_208_int; // 0x375 Eq
	if(var_238_bool == 0) goto Label_888; // 0x376 JumpB
	var_236_bool = 1; // 0x377 MovB
	
Label_888:
	if(var_236_bool == 0) goto Label_891; // 0x378 JumpB
	var_207_int = var_223_int; // 0x379 Mov
	return 18; // 0x37a Return
	
Label_891:
	var_239_int = 1; // 0x37b PushI
	var_222_int = var_222_int + var_239_int; // 0x37c Add2
	
Label_897:
	var_207_int = -1; // 0x381 MovI
	return 18; // 0x382 Return
}


func_1360(var_293_int)
{
	var_294_object = Obj(); var_295_object = Obj(); // 0x550 PushV
	var_296_object = Obj(); // 0x551 PushV
	func_454(var_296_object); // 0x552 NEW_2
	var_295_object = var_296_object; // 0x553 Mov
	var_297_string = "money"; // 0x555 PushS
	SetProperty(var_297_string, var_293_int); // 0x556 ObjFunc
	return 2; // 0x558 Return
}


func_1105(var_102_int)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x451 PushV
	var_107_int = 269; // 0x452 PushI
	var_108_bool = var_102_int == var_107_int; // 0x453 Eq
	if(var_108_bool == 0) goto Label_1123; // 0x454 JumpB
	var_105_int = 0; // 0x455 MovI
	
Label_1110:
	var_109_int = 12; // 0x456 PushI
	var_110_bool = var_105_int < var_109_int; // 0x457 LT
	if(var_110_bool == 0) goto Label_1123; // 0x458 JumpB
	var_111_int = -2; // 0x459 PushI
	var_112_string = ""; var_113_int = 0; // 0x45a PushV
	var_113_int = var_105_int; // 0x45b Mov
	func_1656(var_112_string, var_113_int); // 0x45c NEW_2
	SendMessage(var_111_int, var_112_string); // 0x45e Func
	var_114_int = 1; // 0x460 PushI
	var_105_int = var_105_int + var_114_int; // 0x461 Add2
	goto Label_1110; // 0x462 Jump
	
Label_1123:
	var_115_int = 270; // 0x463 PushI
	var_116_bool = var_102_int == var_115_int; // 0x464 Eq
	if(var_116_bool == 0) goto Label_1140; // 0x465 JumpB
	var_106_int = 0; // 0x466 MovI
	
Label_1127:
	var_117_int = 12; // 0x467 PushI
	var_118_bool = var_106_int < var_117_int; // 0x468 LT
	if(var_118_bool == 0) goto Label_1140; // 0x469 JumpB
	var_119_int = -3; // 0x46a PushI
	var_120_string = ""; var_121_int = 0; // 0x46b PushV
	var_121_int = var_106_int; // 0x46c Mov
	func_1656(var_120_string, var_121_int); // 0x46d NEW_2
	SendMessage(var_119_int, var_120_string); // 0x46f Func
	var_122_int = 1; // 0x471 PushI
	var_106_int = var_106_int + var_122_int; // 0x472 Add2
	goto Label_1127; // 0x473 Jump
	
Label_1140:
	return 4; // 0x474 Return
}


func_723(var_2_int)
{
	var_271_object = Obj(); var_272_int = 0; var_273_int = 0; var_274_int = 0; var_275_object = Obj(); var_276_int = 0; var_277_int = 0; var_278_bool = 0; var_279_int = 0; var_280_int = 0; var_281_object = Obj(); var_282_int = 0; var_283_int = 0; var_284_bool = 0; var_285_int = 0; var_286_object = Obj(); var_287_int = 0; var_288_int = 0; var_289_int = 0; var_290_object = Obj(); var_291_int = 0; var_292_int = 0; var_293_bool = 0; var_294_int = 0; var_295_int = 0; var_296_object = Obj(); var_297_int = 0; var_298_int = 0; var_299_bool = 0; var_300_int = 0; // 0x2d3 PushV
	GetContainer(var_286_object); // 0x2d4 Func
	GetItemCount(var_287_int); // 0x2d6 ObjFunc
	var_288_int = 0; // 0x2d8 MovI
	var_289_int = 0; // 0x2d9 MovI
	
Label_730:
	var_301_bool = var_289_int < var_287_int; // 0x2da LT
	if(var_301_bool == 0) goto Label_773; // 0x2db JumpB
	GetItem(var_290_object, var_289_int); // 0x2dc ObjFunc
	GetItemID(var_291_int); // 0x2de ObjFunc
	GetItemAmount(var_292_int, var_289_int); // 0x2e0 ObjFunc
	var_293_bool = 0; // 0x2e2 MovB
	var_302_string = "Organ"; // 0x2e3 PushS
	HasProperty(var_293_bool, var_302_string); // 0x2e4 ObjFunc
	var_303_bool = var_293_bool; // 0x2e6 Push
	if(var_303_bool == 0) goto Label_745; // 0x2e7 JumpB
	goto Label_770; // 0x2e8 Jump
	
Label_770:
	var_304_int = 1; // 0x302 PushI
	var_289_int = var_289_int + var_304_int; // 0x303 Add2
	goto Label_730; // 0x304 Jump
	
Label_745:
	var_305_bool = var_288_int >= var_2_int; // 0x2e9 GE
	if(var_305_bool == 0) goto Label_762; // 0x2ea JumpB
	var_306_int = 0; // 0x2eb PushI
	var_307_string = ""; var_308_int = 0; // 0x2ec PushV
	var_308_int = var_288_int - var_2_int; // 0x2ed Sub2
	func_1672(var_307_string, var_308_int); // 0x2ee NEW_2
	SendMessage(var_306_int, var_307_string, var_290_object); // 0x2f0 Func
	var_309_int = 65536; // 0x2f2 PushI
	var_310_int = var_292_int | var_309_int; // 0x2f3 Or
	var_311_string = ""; var_312_int = 0; // 0x2f4 PushV
	var_312_int = var_288_int - var_2_int; // 0x2f5 Sub2
	func_1672(var_311_string, var_312_int); // 0x2f6 NEW_2
	SendMessage(var_310_int, var_311_string); // 0x2f8 Func
	
Label_762:
	var_313_int = 1; // 0x2fa PushI
	var_288_int = var_288_int + var_313_int; // 0x2fb Add2
	var_314_int = 4; // 0x2fc PushI
	var_315_int = var_314_int + var_2_int; // 0x2fd Add
	var_316_bool = var_288_int >= var_315_int; // 0x2fe GE
	if(var_316_bool == 0) goto Label_769; // 0x2ff JumpB
	goto Label_773; // 0x300 Jump
	
Label_773:
	var_294_int = var_288_int + var_2_int; // 0x305 Add2
	
Label_774:
	var_317_int = 4; // 0x306 PushI
	var_318_int = var_317_int + var_2_int; // 0x307 Add
	var_319_bool = var_294_int < var_318_int; // 0x308 LT
	if(var_319_bool == 0) goto Label_788; // 0x309 JumpB
	var_320_int = 32768; // 0x30a PushI
	var_321_string = ""; var_322_int = 0; // 0x30b PushV
	var_322_int = var_294_int - var_2_int; // 0x30c Sub2
	func_1672(var_321_string, var_322_int); // 0x30d NEW_2
	SendMessage(var_320_int, var_321_string); // 0x30f Func
	var_323_int = 1; // 0x311 PushI
	var_294_int = var_294_int + var_323_int; // 0x312 Add2
	goto Label_774; // 0x313 Jump
	
Label_788:
	var_288_int = 0; // 0x314 MovI
	var_295_int = 0; // 0x315 MovI
	
Label_790:
	var_324_bool = var_295_int < var_287_int; // 0x316 LT
	if(var_324_bool == 0) goto Label_830; // 0x317 JumpB
	GetItem(var_296_object, var_295_int); // 0x318 ObjFunc
	GetItemID(var_297_int); // 0x31a ObjFunc
	GetItemAmount(var_298_int, var_295_int); // 0x31c ObjFunc
	var_299_bool = 0; // 0x31e MovB
	var_325_string = "Organ"; // 0x31f PushS
	HasProperty(var_299_bool, var_325_string); // 0x320 ObjFunc
	var_326_bool = var_299_bool == 0; // 0x322 Not
	if(var_326_bool == 0) goto Label_805; // 0x323 JumpB
	goto Label_827; // 0x324 Jump
	
Label_827:
	var_327_int = 1; // 0x33b PushI
	var_295_int = var_295_int + var_327_int; // 0x33c Add2
	goto Label_790; // 0x33d Jump
	
Label_805:
	var_328_int = 0; // 0x325 PushI
	var_329_string = ""; var_330_int = 0; // 0x326 PushV
	var_330_int = var_288_int; // 0x327 Mov
	func_1688(var_329_string, var_330_int); // 0x328 NEW_2
	SendMessage(var_328_int, var_329_string, var_296_object); // 0x32a Func
	var_331_int = 65536; // 0x32c PushI
	var_332_int = var_298_int | var_331_int; // 0x32d Or
	var_333_string = ""; var_334_int = 0; // 0x32e PushV
	var_334_int = var_288_int; // 0x32f Mov
	func_1688(var_333_string, var_334_int); // 0x330 NEW_2
	SendMessage(var_332_int, var_333_string); // 0x332 Func
	var_335_int = 1; // 0x334 PushI
	var_288_int = var_288_int + var_335_int; // 0x335 Add2
	var_336_int = 4; // 0x336 PushI
	var_337_bool = var_288_int >= var_336_int; // 0x337 GE
	if(var_337_bool == 0) goto Label_826; // 0x338 JumpB
	goto Label_830; // 0x339 Jump
	
Label_830:
	var_300_int = var_288_int; // 0x33e Mov
	
Label_831:
	var_338_int = 4; // 0x33f PushI
	var_339_bool = var_300_int < var_338_int; // 0x340 LT
	if(var_339_bool == 0) goto Label_844; // 0x341 JumpB
	var_340_int = 32768; // 0x342 PushI
	var_341_string = ""; var_342_int = 0; // 0x343 PushV
	var_342_int = var_300_int; // 0x344 Mov
	func_1688(var_341_string, var_342_int); // 0x345 NEW_2
	SendMessage(var_340_int, var_341_string); // 0x347 Func
	var_343_int = 1; // 0x349 PushI
	var_300_int = var_300_int + var_343_int; // 0x34a Add2
	goto Label_831; // 0x34b Jump
	
Label_844:
	return 30; // 0x34c Return
	
Label_826:
	var_296_object = 0; // 0x33a SetNull
	
Label_769:
	var_290_object = 0; // 0x301 SetNull
}


func_1370()
{
	var_231_int = 0; // 0x55a PushV
	func_1349(var_231_int); // 0x55b NEW_2
	var_238_string = "money"; // 0x55d PushS
	SendMessage(var_231_int, var_238_string); // 0x55e Func
	return 0; // 0x560 Return
}


func_1377(var_135_int)
{
	var_136_int = 0; // 0x562 PushI
	var_137_bool = var_135_int != var_136_int; // 0x563 Neq
	if(var_137_bool == 0) goto Label_1386; // 0x564 JumpB
	var_138_int = 0; // 0x565 PushI
	var_139_string = "button_weapon"; // 0x566 PushS
	SendMessage(var_138_int, var_139_string); // 0x567 Func
	goto Label_1390; // 0x569 Jump
	
Label_1390:
	var_140_int = 1; // 0x56e PushI
	var_141_bool = var_135_int != var_140_int; // 0x56f Neq
	if(var_141_bool == 0) goto Label_1398; // 0x570 JumpB
	var_142_int = 0; // 0x571 PushI
	var_143_string = "button_clothes"; // 0x572 PushS
	SendMessage(var_142_int, var_143_string); // 0x573 Func
	goto Label_1402; // 0x575 Jump
	
Label_1402:
	var_144_int = 2; // 0x57a PushI
	var_145_bool = var_135_int != var_144_int; // 0x57b Neq
	if(var_145_bool == 0) goto Label_1410; // 0x57c JumpB
	var_146_int = 0; // 0x57d PushI
	var_147_string = "button_medcine"; // 0x57e PushS
	SendMessage(var_146_int, var_147_string); // 0x57f Func
	goto Label_1414; // 0x581 Jump
	
Label_1414:
	var_148_int = 3; // 0x586 PushI
	var_149_bool = var_135_int != var_148_int; // 0x587 Neq
	if(var_149_bool == 0) goto Label_1422; // 0x588 JumpB
	var_150_int = 0; // 0x589 PushI
	var_151_string = "button_food"; // 0x58a PushS
	SendMessage(var_150_int, var_151_string); // 0x58b Func
	goto Label_1426; // 0x58d Jump
	
Label_1426:
	var_152_int = 4; // 0x592 PushI
	var_153_bool = var_135_int != var_152_int; // 0x593 Neq
	if(var_153_bool == 0) goto Label_1434; // 0x594 JumpB
	var_154_int = 0; // 0x595 PushI
	var_155_string = "button_other"; // 0x596 PushS
	SendMessage(var_154_int, var_155_string); // 0x597 Func
	goto Label_1438; // 0x599 Jump
	
Label_1438:
	return 0; // 0x59e Return
	
Label_1434:
	var_156_int = 1; // 0x59a PushI
	var_157_string = "button_other"; // 0x59b PushS
	SendMessage(var_156_int, var_157_string); // 0x59c Func
	
Label_1422:
	var_158_int = 1; // 0x58e PushI
	var_159_string = "button_food"; // 0x58f PushS
	SendMessage(var_158_int, var_159_string); // 0x590 Func
	
Label_1410:
	var_160_int = 1; // 0x582 PushI
	var_161_string = "button_medcine"; // 0x583 PushS
	SendMessage(var_160_int, var_161_string); // 0x584 Func
	
Label_1398:
	var_162_int = 1; // 0x576 PushI
	var_163_string = "button_clothes"; // 0x577 PushS
	SendMessage(var_162_int, var_163_string); // 0x578 Func
	
Label_1386:
	var_164_int = 1; // 0x56a PushI
	var_165_string = "button_weapon"; // 0x56b PushS
	SendMessage(var_164_int, var_165_string); // 0x56c Func
}


func_100()
{
	var_259_int = -6; // 0x64 PushI
	var_260_string = ""; var_261_int = 0; // 0x65 PushV
	var_261_int = 0; // 0x66 MovI
	func_1656(var_260_string, var_261_int); // 0x67 NEW_2
	SendMessage(var_259_int, var_260_string); // 0x69 Func
	var_262_int = -6; // 0x6b PushI
	var_263_string = ""; var_264_int = 0; // 0x6c PushV
	var_264_int = 0; // 0x6d MovI
	func_1688(var_263_string, var_264_int); // 0x6e NEW_2
	SendMessage(var_262_int, var_263_string); // 0x70 Func
	var_265_int = -6; // 0x72 PushI
	var_266_string = ""; var_267_int = 0; // 0x73 PushV
	var_267_int = 0; // 0x74 MovI
	func_1672(var_266_string, var_267_int); // 0x75 NEW_2
	SendMessage(var_265_int, var_266_string); // 0x77 Func
	return 0; // 0x79 Return
}


func_1519(var_0_int, var_421_bool, var_422_int, var_423_int)
{
	var_424_object = Obj(); var_425_object = Obj(); var_426_object = Obj(); var_427_int = 0; var_428_int = 0; var_429_bool = 0; var_430_int = 0; var_431_bool = 0; var_432_bool = 0; var_433_object = Obj(); var_434_object = Obj(); var_435_object = Obj(); var_436_int = 0; var_437_int = 0; var_438_bool = 0; var_439_int = 0; var_440_bool = 0; var_441_bool = 0; // 0x5ef PushV
	var_442_object = Obj(); // 0x5f0 PushV
	func_454(var_442_object); // 0x5f1 NEW_2
	var_434_object = var_442_object; // 0x5f2 Mov
	GetContainer(var_433_object); // 0x5f4 Func
	GetItemCount(var_436_int, var_422_int); // 0x5f6 ObjFunc
	var_443_bool = var_436_int <= var_423_int; // 0x5f8 LE
	if(var_443_bool == 0) goto Label_1532; // 0x5f9 JumpB
	var_421_bool = 0; // 0x5fa MovB
	return 18; // 0x5fb Return
	
Label_1532:
	GetItemAmount(var_437_int, var_423_int, var_422_int); // 0x5fc ObjFunc
	GetItem(var_435_object, var_423_int, var_422_int); // 0x5fe ObjFunc
	var_444_int = 0; // 0x600 PushI
	var_445_int = 1; // 0x601 PushI
	AddItem(var_438_bool, var_435_object, var_444_int, var_445_int); // 0x602 ObjFunc
	var_446_bool = var_438_bool == 0; // 0x604 Not
	if(var_446_bool == 0) goto Label_1544; // 0x605 JumpB
	var_421_bool = 0; // 0x606 MovB
	return 18; // 0x607 Return
	
Label_1544:
	var_447_int = 0; // 0x608 PushI
	var_448_bool = var_0_int == var_447_int; // 0x609 Eq
	if(var_448_bool == 0) goto Label_1561; // 0x60a JumpB
	GetItemID(var_439_int); // 0x60b ObjFunc
	var_449_string = "Weapon"; // 0x60d PushS
	HasInvItemProperty(var_440_bool, var_439_int, var_449_string); // 0x60e Func
	var_450_bool = var_440_bool; // 0x610 Push
	if(var_450_bool == 0) goto Label_1561; // 0x611 JumpB
	IsItemSelected(var_441_bool, var_423_int, var_0_int); // 0x612 ObjFunc
	var_451_bool = var_441_bool; // 0x614 Push
	if(var_451_bool == 0) goto Label_1561; // 0x615 JumpB
	var_452_int = -1; // 0x616 PushI
	SetPlayerHandsItem(var_452_int); // 0x617 Func
	
Label_1561:
	var_453_int = 1; // 0x619 PushI
	RemoveItem(var_423_int, var_453_int, var_422_int); // 0x61a ObjFunc
	var_421_bool = 1; // 0x61c MovB
	return 18; // 0x61d Return
}


func_627()
{
	func_723(var_4_float); // 0x274 NEW_2
	return 0; // 0x276 Return
}


func_1141(var_63_int)
{
	var_64_int = 0; var_65_int = 0; var_66_int = 0; var_67_int = 0; // 0x475 PushV
	var_68_int = 273; // 0x476 PushI
	var_69_bool = var_63_int == var_68_int; // 0x477 Eq
	if(var_69_bool == 0) goto Label_1159; // 0x478 JumpB
	var_66_int = 0; // 0x479 MovI
	
Label_1146:
	var_70_int = 12; // 0x47a PushI
	var_71_bool = var_66_int < var_70_int; // 0x47b LT
	if(var_71_bool == 0) goto Label_1159; // 0x47c JumpB
	var_72_int = -2; // 0x47d PushI
	var_73_string = ""; var_74_int = 0; // 0x47e PushV
	var_74_int = var_66_int; // 0x47f Mov
	func_1656(var_73_string, var_74_int); // 0x480 NEW_2
	SendMessage(var_72_int, var_73_string); // 0x482 Func
	var_75_int = 1; // 0x484 PushI
	var_66_int = var_66_int + var_75_int; // 0x485 Add2
	goto Label_1146; // 0x486 Jump
	
Label_1159:
	var_76_int = 271; // 0x487 PushI
	var_77_bool = var_63_int == var_76_int; // 0x488 Eq
	if(var_77_bool == 0) goto Label_1176; // 0x489 JumpB
	var_67_int = 0; // 0x48a MovI
	
Label_1163:
	var_78_int = 12; // 0x48b PushI
	var_79_bool = var_67_int < var_78_int; // 0x48c LT
	if(var_79_bool == 0) goto Label_1176; // 0x48d JumpB
	var_80_int = -3; // 0x48e PushI
	var_81_string = ""; var_82_int = 0; // 0x48f PushV
	var_82_int = var_67_int; // 0x490 Mov
	func_1656(var_81_string, var_82_int); // 0x491 NEW_2
	SendMessage(var_80_int, var_81_string); // 0x493 Func
	var_83_int = 1; // 0x495 PushI
	var_67_int = var_67_int + var_83_int; // 0x496 Add2
	goto Label_1163; // 0x497 Jump
	
Label_1176:
	return 4; // 0x498 Return
}


func_631()
{
	func_683(var_130_object); // 0x278 NEW_2
	func_723(var_130_object); // 0x27b NEW_2
	return 0; // 0x27d Return
}


func_1656(var_201_string, var_202_int)
{
	var_203_int = 1; // 0x679 PushI
	var_204_int = var_202_int + var_203_int; // 0x67a Add
	var_205_int = 10; // 0x67b PushI
	var_206_bool = var_204_int < var_205_int; // 0x67c LT
	if(var_206_bool == 0) goto Label_1667; // 0x67d JumpB
	var_207_string = "slot0"; // 0x67e PushS
	var_208_int = 1; // 0x67f PushI
	var_209_int = var_202_int + var_208_int; // 0x680 Add
	var_201_string = var_207_string + var_209_int; // 0x681 Add2
	return 0; // 0x682 Return
	
Label_1667:
	var_210_string = "slot"; // 0x683 PushS
	var_211_int = 1; // 0x684 PushI
	var_212_int = var_202_int + var_211_int; // 0x685 Add
	var_201_string = var_210_string + var_212_int; // 0x686 Add2
	return 0; // 0x687 Return
}


func_122(var_3_int, var_44_int)
{
	var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_int = 0; // 0x7a PushV
	var_57_int = 267; // 0x7b PushI
	var_58_bool = var_44_int == var_57_int; // 0x7c Eq
	if(var_58_bool == 0) goto Label_170; // 0x7d JumpB
	var_59_int = 0; // 0x7e PushI
	var_60_bool = var_3_int == var_59_int; // 0x7f Eq
	if(var_60_bool == 0) goto Label_145; // 0x80 JumpB
	var_3_int = 1; // 0x81 TMovI
	var_51_int = 0; // 0x82 MovI
	
Label_131:
	var_61_int = 4; // 0x83 PushI
	var_62_bool = var_51_int < var_61_int; // 0x84 LT
	if(var_62_bool == 0) goto Label_144; // 0x85 JumpB
	var_63_int = -7; // 0x86 PushI
	var_64_string = ""; var_65_int = 0; // 0x87 PushV
	var_65_int = var_51_int; // 0x88 Mov
	func_1688(var_64_string, var_65_int); // 0x89 NEW_2
	SendMessage(var_63_int, var_64_string); // 0x8b Func
	var_76_int = 1; // 0x8d PushI
	var_51_int = var_51_int + var_76_int; // 0x8e Add2
	goto Label_131; // 0x8f Jump
	
Label_144:
	goto Label_170; // 0x90 Jump
	
Label_170:
	var_77_int = 268; // 0xaa PushI
	var_78_bool = var_44_int == var_77_int; // 0xab Eq
	if(var_78_bool == 0) goto Label_217; // 0xac JumpB
	var_79_bool = 0; // 0xad PushV
	var_79_bool = 1; // 0xae MovB
	var_80_int = 1; // 0xaf PushI
	var_81_bool = var_3_int == var_80_int; // 0xb0 Eq
	if(var_81_bool == 0) goto Label_182; // 0xb1 JumpB
	var_82_int = 0; // 0xb2 PushI
	var_83_bool = var_3_int == var_82_int; // 0xb3 Eq
	if(var_83_bool == 0) goto Label_182; // 0xb4 JumpB
	var_79_bool = 0; // 0xb5 MovB
	
Label_182:
	if(var_79_bool == 0) goto Label_199; // 0xb6 JumpB
	var_3_int = 0; // 0xb7 TMovI
	var_53_int = 0; // 0xb8 MovI
	
Label_185:
	var_84_int = 12; // 0xb9 PushI
	var_85_bool = var_53_int < var_84_int; // 0xba LT
	if(var_85_bool == 0) goto Label_198; // 0xbb JumpB
	var_86_int = -7; // 0xbc PushI
	var_87_string = ""; var_88_int = 0; // 0xbd PushV
	var_88_int = var_53_int; // 0xbe Mov
	func_1656(var_87_string, var_88_int); // 0xbf NEW_2
	SendMessage(var_86_int, var_87_string); // 0xc1 Func
	var_99_int = 1; // 0xc3 PushI
	var_53_int = var_53_int + var_99_int; // 0xc4 Add2
	goto Label_185; // 0xc5 Jump
	
Label_198:
	goto Label_217; // 0xc6 Jump
	
Label_217:
	var_100_int = 0; // 0xd9 PushI
	var_101_bool = var_3_int == var_100_int; // 0xda Eq
	if(var_101_bool == 0) goto Label_225; // 0xdb JumpB
	var_102_int = 0; // 0xdc PushV
	var_102_int = var_44_int; // 0xdd Mov
	func_1105(var_102_int); // 0xde NEW_2
	return 12; // 0xe0 Return
	
Label_225:
	var_123_int = 269; // 0xe1 PushI
	var_124_bool = var_44_int == var_123_int; // 0xe2 Eq
	if(var_124_bool == 0) goto Label_256; // 0xe3 JumpB
	var_55_int = 0; // 0xe4 MovI
	
Label_229:
	var_125_int = 4; // 0xe5 PushI
	var_126_bool = var_55_int < var_125_int; // 0xe6 LT
	if(var_126_bool == 0) goto Label_256; // 0xe7 JumpB
	var_127_int = 2; // 0xe8 PushI
	var_128_bool = var_3_int == var_127_int; // 0xe9 Eq
	if(var_128_bool == 0) goto Label_243; // 0xea JumpB
	var_129_int = -2; // 0xeb PushI
	var_130_string = ""; var_131_int = 0; // 0xec PushV
	var_131_int = var_55_int; // 0xed Mov
	func_1672(var_130_string, var_131_int); // 0xee NEW_2
	SendMessage(var_129_int, var_130_string); // 0xf0 Func
	goto Label_253; // 0xf2 Jump
	
Label_253:
	var_142_int = 1; // 0xfd PushI
	var_55_int = var_55_int + var_142_int; // 0xfe Add2
	goto Label_229; // 0xff Jump
	
Label_243:
	var_143_int = 1; // 0xf3 PushI
	var_144_bool = var_3_int == var_143_int; // 0xf4 Eq
	if(var_144_bool == 0) goto Label_253; // 0xf5 JumpB
	var_145_int = -2; // 0xf6 PushI
	var_146_string = ""; var_147_int = 0; // 0xf7 PushV
	var_147_int = var_55_int; // 0xf8 Mov
	func_1688(var_146_string, var_147_int); // 0xf9 NEW_2
	SendMessage(var_145_int, var_146_string); // 0xfb Func
	
Label_256:
	var_148_int = 270; // 0x100 PushI
	var_149_bool = var_44_int == var_148_int; // 0x101 Eq
	if(var_149_bool == 0) goto Label_287; // 0x102 JumpB
	var_56_int = 0; // 0x103 MovI
	
Label_260:
	var_150_int = 4; // 0x104 PushI
	var_151_bool = var_56_int < var_150_int; // 0x105 LT
	if(var_151_bool == 0) goto Label_287; // 0x106 JumpB
	var_152_int = 2; // 0x107 PushI
	var_153_bool = var_3_int == var_152_int; // 0x108 Eq
	if(var_153_bool == 0) goto Label_274; // 0x109 JumpB
	var_154_int = -3; // 0x10a PushI
	var_155_string = ""; var_156_int = 0; // 0x10b PushV
	var_156_int = var_56_int; // 0x10c Mov
	func_1672(var_155_string, var_156_int); // 0x10d NEW_2
	SendMessage(var_154_int, var_155_string); // 0x10f Func
	goto Label_284; // 0x111 Jump
	
Label_284:
	var_157_int = 1; // 0x11c PushI
	var_56_int = var_56_int + var_157_int; // 0x11d Add2
	goto Label_260; // 0x11e Jump
	
Label_274:
	var_158_int = 1; // 0x112 PushI
	var_159_bool = var_3_int == var_158_int; // 0x113 Eq
	if(var_159_bool == 0) goto Label_284; // 0x114 JumpB
	var_160_int = -3; // 0x115 PushI
	var_161_string = ""; var_162_int = 0; // 0x116 PushV
	var_162_int = var_56_int; // 0x117 Mov
	func_1688(var_161_string, var_162_int); // 0x118 NEW_2
	SendMessage(var_160_int, var_161_string); // 0x11a Func
	
Label_287:
	return 12; // 0x11f Return
	
Label_199:
	var_163_int = 2; // 0xc7 PushI
	var_164_bool = var_3_int == var_163_int; // 0xc8 Eq
	if(var_164_bool == 0) goto Label_217; // 0xc9 JumpB
	var_3_int = 1; // 0xca TMovI
	var_54_int = 0; // 0xcb MovI
	
Label_204:
	var_165_int = 4; // 0xcc PushI
	var_166_bool = var_54_int < var_165_int; // 0xcd LT
	if(var_166_bool == 0) goto Label_217; // 0xce JumpB
	var_167_int = -7; // 0xcf PushI
	var_168_string = ""; var_169_int = 0; // 0xd0 PushV
	var_169_int = var_54_int; // 0xd1 Mov
	func_1688(var_168_string, var_169_int); // 0xd2 NEW_2
	SendMessage(var_167_int, var_168_string); // 0xd4 Func
	var_170_int = 1; // 0xd6 PushI
	var_54_int = var_54_int + var_170_int; // 0xd7 Add2
	goto Label_204; // 0xd8 Jump
	
Label_145:
	var_171_bool = 0; // 0x91 PushV
	var_171_bool = 1; // 0x92 MovB
	var_172_int = 1; // 0x93 PushI
	var_173_bool = var_3_int == var_172_int; // 0x94 Eq
	if(var_173_bool == 0) goto Label_154; // 0x95 JumpB
	var_174_int = 2; // 0x96 PushI
	var_175_bool = var_3_int == var_174_int; // 0x97 Eq
	if(var_175_bool == 0) goto Label_154; // 0x98 JumpB
	var_171_bool = 0; // 0x99 MovB
	
Label_154:
	if(var_171_bool == 0) goto Label_170; // 0x9a JumpB
	var_3_int = 2; // 0x9b TMovI
	var_52_int = 0; // 0x9c MovI
	
Label_157:
	var_176_int = 4; // 0x9d PushI
	var_177_bool = var_52_int < var_176_int; // 0x9e LT
	if(var_177_bool == 0) goto Label_170; // 0x9f JumpB
	var_178_int = -7; // 0xa0 PushI
	var_179_string = ""; var_180_int = 0; // 0xa1 PushV
	var_180_int = var_52_int; // 0xa2 Mov
	func_1672(var_179_string, var_180_int); // 0xa3 NEW_2
	SendMessage(var_178_int, var_179_string); // 0xa5 Func
	var_181_int = 1; // 0xa7 PushI
	var_52_int = var_52_int + var_181_int; // 0xa8 Add2
	goto Label_157; // 0xa9 Jump
}


func_638(var_205_int)
{
	var_240_bool = 0; var_241_bool = 0; // 0x27e PushV
	var_242_string = "take_organ"; // 0x27f PushS
	PlaySound(var_242_string); // 0x280 Func
	var_243_int = 0; // 0x282 PushV
	var_244_int = 0; var_245_bool = 0; var_246_int = 0; // 0x283 PushV
	var_245_bool = var_241_bool; // 0x284 Mov
	var_246_int = var_205_int; // 0x285 Mov
	func_1439(var_244_int, var_245_bool, var_246_int); // 0x286 NEW_2
	var_243_int = var_244_int; // 0x287 Mov
	func_1335(var_241_bool, var_243_int); // 0x289 NEW_2
	var_337_bool = var_241_bool == 0; // 0x28b Not
	if(var_337_bool == 0) goto Label_653; // 0x28c JumpB
	
Label_653:
	return 2; // 0x28d Return
}


