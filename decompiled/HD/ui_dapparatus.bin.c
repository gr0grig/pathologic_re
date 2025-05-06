task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int)
{
	DestroyWindow(); // 0x2e0 Func
	return 0; // 0x2e2 Return
}


task_0_event_102(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int)
{
	var_6_int = 0; // 0x2e4 PushV
	var_6_int = var_5_int; // 0x2e5 Mov
	func_872(var_6_int); // 0x2e6 NEW_2
	return 0; // 0x2e8 Return
}


task_0_event_101(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int)
{
	var_6_int = 266; // 0x2ea PushI
	var_7_bool = var_5_int == var_6_int; // 0x2eb Eq
	if(var_7_bool == 0) goto Label_789; // 0x2ec JumpB
	var_8_int = 0; // 0x2ed PushI
	var_9_bool = var_0_int == var_8_int; // 0x2ee Eq
	if(var_9_bool == 0) goto Label_757; // 0x2ef JumpB
	var_10_int = 0; // 0x2f0 PushV
	var_10_int = 1; // 0x2f1 MovI
	func_1046(var_5_int, var_10_int); // 0x2f2 NEW_2
	goto Label_788; // 0x2f4 Jump
	
Label_788:
	goto Label_831; // 0x314 Jump
	
Label_831:
	var_45_int = 0; // 0x33f PushV
	var_45_int = var_5_int; // 0x340 Mov
	func_836(var_45_int); // 0x341 NEW_2
	return 0; // 0x343 Return
	
Label_757:
	var_76_int = 1; // 0x2f5 PushI
	var_77_bool = var_0_int == var_76_int; // 0x2f6 Eq
	if(var_77_bool == 0) goto Label_765; // 0x2f7 JumpB
	var_78_int = 0; // 0x2f8 PushV
	var_78_int = 2; // 0x2f9 MovI
	func_1046(var_5_int, var_78_int); // 0x2fa NEW_2
	goto Label_788; // 0x2fc Jump
	
Label_765:
	var_79_int = 2; // 0x2fd PushI
	var_80_bool = var_0_int == var_79_int; // 0x2fe Eq
	if(var_80_bool == 0) goto Label_773; // 0x2ff JumpB
	var_81_int = 0; // 0x300 PushV
	var_81_int = 3; // 0x301 MovI
	func_1046(var_5_int, var_81_int); // 0x302 NEW_2
	goto Label_788; // 0x304 Jump
	
Label_773:
	var_82_int = 3; // 0x305 PushI
	var_83_bool = var_0_int == var_82_int; // 0x306 Eq
	if(var_83_bool == 0) goto Label_781; // 0x307 JumpB
	var_84_int = 0; // 0x308 PushV
	var_84_int = 4; // 0x309 MovI
	func_1046(var_5_int, var_84_int); // 0x30a NEW_2
	goto Label_788; // 0x30c Jump
	
Label_781:
	var_85_int = 4; // 0x30d PushI
	var_86_bool = var_0_int == var_85_int; // 0x30e Eq
	if(var_86_bool == 0) goto Label_788; // 0x30f JumpB
	var_87_int = 0; // 0x310 PushV
	var_87_int = 0; // 0x311 MovI
	func_1046(var_5_int, var_87_int); // 0x312 NEW_2
	
Label_789:
	var_88_int = 265; // 0x315 PushI
	var_89_bool = var_5_int == var_88_int; // 0x316 Eq
	if(var_89_bool == 0) goto Label_831; // 0x317 JumpB
	var_90_int = 0; // 0x318 PushI
	var_91_bool = var_0_int == var_90_int; // 0x319 Eq
	if(var_91_bool == 0) goto Label_800; // 0x31a JumpB
	var_92_int = 0; // 0x31b PushV
	var_92_int = 4; // 0x31c MovI
	func_1046(var_5_int, var_92_int); // 0x31d NEW_2
	goto Label_831; // 0x31f Jump
	
Label_800:
	var_93_int = 1; // 0x320 PushI
	var_94_bool = var_0_int == var_93_int; // 0x321 Eq
	if(var_94_bool == 0) goto Label_808; // 0x322 JumpB
	var_95_int = 0; // 0x323 PushV
	var_95_int = 0; // 0x324 MovI
	func_1046(var_5_int, var_95_int); // 0x325 NEW_2
	goto Label_831; // 0x327 Jump
	
Label_808:
	var_96_int = 2; // 0x328 PushI
	var_97_bool = var_0_int == var_96_int; // 0x329 Eq
	if(var_97_bool == 0) goto Label_816; // 0x32a JumpB
	var_98_int = 0; // 0x32b PushV
	var_98_int = 1; // 0x32c MovI
	func_1046(var_5_int, var_98_int); // 0x32d NEW_2
	goto Label_831; // 0x32f Jump
	
Label_816:
	var_99_int = 3; // 0x330 PushI
	var_100_bool = var_0_int == var_99_int; // 0x331 Eq
	if(var_100_bool == 0) goto Label_824; // 0x332 JumpB
	var_101_int = 0; // 0x333 PushV
	var_101_int = 2; // 0x334 MovI
	func_1046(var_5_int, var_101_int); // 0x335 NEW_2
	goto Label_831; // 0x337 Jump
	
Label_824:
	var_102_int = 4; // 0x338 PushI
	var_103_bool = var_0_int == var_102_int; // 0x339 Eq
	if(var_103_bool == 0) goto Label_831; // 0x33a JumpB
	var_104_int = 0; // 0x33b PushV
	var_104_int = 3; // 0x33c MovI
	func_1046(var_5_int, var_104_int); // 0x33d NEW_2
}


task_0_event_1(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_float)
{
	var_6_int = 0; // 0x38d PushV
	var_6_int = var_0_int; // 0x38e MovT
	func_1140(var_6_int); // 0x38f NEW_2
	func_1071(); // 0x392 NEW_2
	func_61(); // 0x395 NEW_2
	return 0; // 0x397 Return
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int, var_6_string, var_7_object)
{
	var_8_bool = 0; var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_int = 0; var_19_object = Obj(); // 0x398 PushV
	var_14_bool = 0; // 0x399 MovB
	var_20_int = 0; // 0x39a PushI
	var_21_bool = var_5_int < var_20_int; // 0x39b LT
	if(var_21_bool == 0) goto Label_933; // 0x39c JumpB
	var_22_bool = 0; var_23_int = 0; var_24_string = ""; var_25_object = Obj(); // 0x39d PushV
	var_23_int = var_5_int; // 0x39e Mov
	var_24_string = var_6_string; // 0x39f Mov
	var_25_object = var_7_object; // 0x3a0 Mov
	func_29(var_24_string, var_25_object); // 0x3a1 NEW_2
	var_14_bool = var_22_bool; // 0x3a2 Mov
	return 12; // 0x3a4 Return
	
Label_933:
	var_313_string = "button_weapon"; // 0x3a5 PushS
	var_314_bool = var_6_string == var_313_string; // 0x3a6 Eq
	if(var_314_bool == 0) goto Label_942; // 0x3a7 JumpB
	var_315_int = 0; // 0x3a8 PushV
	var_315_int = 0; // 0x3a9 MovI
	func_1046(var_19_object, var_315_int); // 0x3aa NEW_2
	var_14_bool = 1; // 0x3ac MovB
	goto Label_1034; // 0x3ad Jump
	
Label_1034:
	var_316_bool = var_14_bool == 0; // 0x40a Not
	if(var_316_bool == 0) goto Label_1043; // 0x40b JumpB
	var_317_bool = 0; var_318_int = 0; var_319_string = ""; var_320_object = Obj(); // 0x40c PushV
	var_318_int = var_5_int; // 0x40d Mov
	var_319_string = var_6_string; // 0x40e Mov
	var_320_object = var_7_object; // 0x40f Mov
	func_29(var_319_string, var_320_object); // 0x410 NEW_2
	var_14_bool = var_317_bool; // 0x411 Mov
	
Label_1043:
	var_321_bool = var_14_bool; // 0x413 Push
	if(var_321_bool == 0) goto Label_1045; // 0x414 JumpB
	
Label_1045:
	return 12; // 0x415 Return
	
Label_942:
	var_322_string = "button_clothes"; // 0x3ae PushS
	var_323_bool = var_6_string == var_322_string; // 0x3af Eq
	if(var_323_bool == 0) goto Label_951; // 0x3b0 JumpB
	var_324_int = 0; // 0x3b1 PushV
	var_324_int = 1; // 0x3b2 MovI
	func_1046(var_19_object, var_324_int); // 0x3b3 NEW_2
	var_14_bool = 1; // 0x3b5 MovB
	goto Label_1034; // 0x3b6 Jump
	
Label_951:
	var_325_string = "button_medcine"; // 0x3b7 PushS
	var_326_bool = var_6_string == var_325_string; // 0x3b8 Eq
	if(var_326_bool == 0) goto Label_960; // 0x3b9 JumpB
	var_327_int = 0; // 0x3ba PushV
	var_327_int = 2; // 0x3bb MovI
	func_1046(var_19_object, var_327_int); // 0x3bc NEW_2
	var_14_bool = 1; // 0x3be MovB
	goto Label_1034; // 0x3bf Jump
	
Label_960:
	var_328_string = "button_food"; // 0x3c0 PushS
	var_329_bool = var_6_string == var_328_string; // 0x3c1 Eq
	if(var_329_bool == 0) goto Label_969; // 0x3c2 JumpB
	var_330_int = 0; // 0x3c3 PushV
	var_330_int = 3; // 0x3c4 MovI
	func_1046(var_19_object, var_330_int); // 0x3c5 NEW_2
	var_14_bool = 1; // 0x3c7 MovB
	goto Label_1034; // 0x3c8 Jump
	
Label_969:
	var_331_string = "button_other"; // 0x3c9 PushS
	var_332_bool = var_6_string == var_331_string; // 0x3ca Eq
	if(var_332_bool == 0) goto Label_978; // 0x3cb JumpB
	var_333_int = 0; // 0x3cc PushV
	var_333_int = 4; // 0x3cd MovI
	func_1046(var_19_object, var_333_int); // 0x3ce NEW_2
	var_14_bool = 1; // 0x3d0 MovB
	goto Label_1034; // 0x3d1 Jump
	
Label_978:
	var_334_string = "button_detector"; // 0x3d2 PushS
	var_335_bool = var_6_string == var_334_string; // 0x3d3 Eq
	if(var_335_bool == 0) goto Label_982; // 0x3d4 JumpB
	goto Label_1034; // 0x3d5 Jump
	
Label_982:
	var_336_string = "button_anticeptic"; // 0x3d6 PushS
	var_337_bool = var_6_string == var_336_string; // 0x3d7 Eq
	if(var_337_bool == 0) goto Label_986; // 0x3d8 JumpB
	goto Label_1034; // 0x3d9 Jump
	
Label_986:
	var_338_int = 0; // 0x3da PushI
	var_339_bool = var_5_int != var_338_int; // 0x3db Neq
	if(var_339_bool == 0) goto Label_995; // 0x3dc JumpB
	var_340_string = "noinv_drop"; // 0x3dd PushS
	GetVariable(var_340_string, var_15_int); // 0x3de Func
	var_341_int = var_15_int; // 0x3e0 Push
	if(var_341_int == 0) goto Label_995; // 0x3e1 JumpB
	return 12; // 0x3e2 Return
	
Label_995:
	var_16_int = 0; // 0x3e3 MovI
	
Label_996:
	var_342_int = 12; // 0x3e4 PushI
	var_343_bool = var_16_int < var_342_int; // 0x3e5 LT
	if(var_343_bool == 0) goto Label_1034; // 0x3e6 JumpB
	var_344_string = ""; var_345_int = 0; // 0x3e7 PushV
	var_345_int = var_16_int; // 0x3e8 Mov
	func_1227(var_344_string, var_345_int); // 0x3e9 NEW_2
	var_356_bool = var_6_string == var_344_string; // 0x3eb Eq
	if(var_356_bool == 0) goto Label_1031; // 0x3ec JumpB
	var_357_object = Obj(); // 0x3ed PushV
	func_27(var_19_object, var_357_object); // 0x3ee NEW_2
	var_17_object = var_357_object; // 0x3ef Mov
	GetItemCount(var_18_int, var_0_int); // 0x3f1 ObjFunc
	var_358_bool = var_18_int > var_16_int; // 0x3f3 GT
	if(var_358_bool == 0) goto Label_1029; // 0x3f4 JumpB
	GetItem(var_19_object, var_16_int, var_0_int); // 0x3f5 ObjFunc
	var_359_bool = 0; var_360_object = Obj(); // 0x3f7 PushV
	var_360_object = var_19_object; // 0x3f8 Mov
	func_71(var_359_bool, var_360_object); // 0x3f9 NEW_2
	var_365_bool = var_359_bool == 0; // 0x3fb Not
	if(var_365_bool == 0) goto Label_1028; // 0x3fc JumpB
	var_366_bool = 0; var_367_int = 0; var_368_bool = 0; // 0x3fd PushV
	var_367_int = var_16_int; // 0x3fe Mov
	var_369_int = 0; // 0x3ff PushI
	var_368_bool = var_5_int == var_369_int; // 0x400 Eq2
	func_89(var_366_bool, var_367_int, var_368_bool); // 0x401 NEW_2
	var_14_bool = var_366_bool; // 0x402 Mov
	
Label_1028:
	var_19_object = 0; // 0x404 SetNull
	
Label_1029:
	goto Label_1034; // 0x405 Jump
	
Label_1031:
	var_405_int = 1; // 0x407 PushI
	var_16_int = var_16_int + var_405_int; // 0x408 Add2
	goto Label_996; // 0x409 Jump
}


main(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object)
{
	var_5_string = "player"; // 0x0 PushS
	FindActor(var_3_object, var_5_string); // 0x1 Func
	var_6_bool = var_3_object == 0; // 0x3 Not
	if(var_6_bool == 0) goto Label_8; // 0x4 JumpB
	DestroyWindow(); // 0x5 Func
	return 0; // 0x7 Return
	
Label_8:
	GetWindowData(var_1_object); // 0x8 Func
	var_7_bool = var_4_object == 0; // 0xa Not
	if(var_7_bool == 0) goto Label_18; // 0xb JumpB
	var_8_string = "null apparatus"; // 0xc PushS
	Trace(var_8_string); // 0xd Func
	DestroyWindow(); // 0xf Func
	return 0; // 0x11 Return
	
Label_18:
	var_9_string = "inventory_base.xml"; // 0x12 PushS
	var_10_bool = 0; // 0x13 PushB
	CreateWindow(var_9_string, var_10_bool, var_10_bool); // 0x14 Func
	var_11_int = 0; // 0x16 PushV
	var_11_int = 4; // 0x17 MovI
	func_653(var_4_object, var_11_int); // 0x18 NEW_2
	return 0; // 0x1a Return
}


func_130(var_0_int, var_377_bool, var_378_object, var_379_int)
{
	var_380_object = Obj(); var_381_bool = 0; var_382_object = Obj(); var_383_bool = 0; // 0x82 PushV
	var_384_object = Obj(); // 0x83 PushV
	func_213(var_384_object); // 0x84 NEW_2
	var_382_object = var_384_object; // 0x85 Mov
	var_385_object = var_382_object; // 0x87 Push
	if(var_385_object == 0) goto Label_139; // 0x88 JumpB
	var_377_bool = 0; // 0x89 MovB
	return 4; // 0x8a Return
	
Label_139:
	var_386_int = 0; // 0x8b PushI
	var_387_int = 1; // 0x8c PushI
	AddItem(var_383_bool, var_378_object, var_386_int, var_387_int); // 0x8d TObjFunc
	var_388_bool = var_383_bool == 0; // 0x8f Not
	if(var_388_bool == 0) goto Label_147; // 0x90 JumpB
	var_377_bool = 0; // 0x91 MovB
	return 4; // 0x92 Return
	
Label_147:
	var_389_int = 1; // 0x93 PushI
	RemoveItem(var_379_int, var_389_int, var_0_int); // 0x94 TObjFunc
	var_377_bool = 1; // 0x96 MovB
	return 4; // 0x97 Return
}


func_261(var_63_object)
{
	var_64_int = 0; var_65_int = 0; var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_object = Obj(); var_73_object = Obj(); // 0x105 PushV
	GetItemCount(var_69_int); // 0x106 TObjFunc
	var_70_int = 0; // 0x108 MovI
	var_71_int = 0; // 0x109 MovI
	
Label_266:
	var_74_bool = var_71_int < var_69_int; // 0x10a LT
	if(var_74_bool == 0) goto Label_292; // 0x10b JumpB
	GetItem(var_72_object, var_71_int); // 0x10c TObjFunc
	var_75_bool = 0; // 0x10e PushV
	var_75_bool = 0; // 0x10f MovB
	var_76_bool = 0; var_77_object = Obj(); // 0x110 PushV
	var_77_object = var_72_object; // 0x111 Mov
	func_176(var_76_bool, var_77_object); // 0x112 NEW_2
	var_89_bool = var_76_bool == 0; // 0x114 Not
	if(var_89_bool == 0) goto Label_285; // 0x115 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x116 PushV
	var_91_object = var_72_object; // 0x117 Mov
	func_184(var_90_bool, var_91_object); // 0x118 NEW_2
	var_99_bool = var_90_bool == 0; // 0x11a Not
	if(var_99_bool == 0) goto Label_285; // 0x11b JumpB
	var_75_bool = 1; // 0x11c MovB
	
Label_285:
	if(var_75_bool == 0) goto Label_288; // 0x11d JumpB
	var_63_object = var_72_object; // 0x11e Mov
	return 10; // 0x11f Return
	
Label_288:
	var_72_object = 0; // 0x120 SetNull
	var_100_int = 1; // 0x121 PushI
	var_71_int = var_71_int + var_100_int; // 0x122 Add2
	goto Label_266; // 0x123 Jump
	
Label_292:
	var_73_object = 0; // 0x124 SetNull
	var_63_object = var_73_object; // 0x125 Mov
	return 10; // 0x126 Return
}


func_391(var_259_bool)
{
	var_260_int = 0; var_261_bool = 0; var_262_int = 0; var_263_bool = 0; // 0x187 PushV
	var_264_int = 0; // 0x188 PushV
	func_296(var_264_int); // 0x189 NEW_2
	var_262_int = var_264_int; // 0x18a Mov
	var_275_int = -1; // 0x18c PushI
	var_276_bool = var_262_int == var_275_int; // 0x18d Eq
	if(var_276_bool == 0) goto Label_401; // 0x18e JumpB
	var_259_bool = 0; // 0x18f MovB
	return 4; // 0x190 Return
	
Label_401:
	var_277_object = Obj(); // 0x191 PushV
	func_213(var_277_object); // 0x192 NEW_2
	var_278_int = 2; // 0x194 PushI
	var_279_int = 1; // 0x195 PushI
	AddItem(var_263_bool, var_277_object, var_278_int, var_279_int); // 0x196 TObjFunc
	var_280_bool = var_263_bool == 0; // 0x198 Not
	if(var_280_bool == 0) goto Label_412; // 0x199 JumpB
	var_259_bool = 0; // 0x19a MovB
	return 4; // 0x19b Return
	
Label_412:
	var_281_int = 1; // 0x19c PushI
	RemoveItem(var_262_int, var_281_int); // 0x19d TObjFunc
	var_282_int = 0; // 0x19f PushV
	var_282_int = 2; // 0x1a0 MovI
	func_1046(var_263_bool, var_282_int); // 0x1a1 NEW_2
	var_259_bool = 1; // 0x1a3 MovB
	return 4; // 0x1a4 Return
}


func_653(var_0_int, var_11_int)
{
	var_12_int = 0; var_13_object = Obj(); var_14_int = 0; var_15_object = Obj(); // 0x28d PushV
	var_0_int = -1; // 0x28e TMovI
	var_16_int = 0; // 0x28f PushV
	var_16_int = var_11_int; // 0x290 Mov
	func_1046(var_15_object, var_16_int); // 0x291 NEW_2
	var_51_int = 0; // 0x293 PushV
	var_51_int = var_0_int; // 0x294 MovT
	func_1140(var_51_int); // 0x295 NEW_2
	func_1071(); // 0x298 NEW_2
	var_14_int = 0; // 0x29a MovI
	
Label_667:
	var_138_int = 12; // 0x29b PushI
	var_139_bool = var_14_int < var_138_int; // 0x29c LT
	if(var_139_bool == 0) goto Label_705; // 0x29d JumpB
	CreateStringVector(var_15_object); // 0x29e Func
	var_140_string = ""; var_141_int = 0; // 0x2a0 PushV
	var_142_int = 12; // 0x2a1 PushI
	var_143_int = var_14_int + var_142_int; // 0x2a2 Add
	var_144_int = 1; // 0x2a3 PushI
	var_145_int = var_143_int - var_144_int; // 0x2a4 Sub
	var_146_int = 12; // 0x2a5 PushI
	var_141_int = var_145_int % var_146_int; // 0x2a6 Mod2
	func_1227(var_140_string, var_141_int); // 0x2a7 NEW_2
	add(var_140_string); // 0x2a9 ObjFunc
	var_147_string = ""; var_148_int = 0; // 0x2ab PushV
	var_149_int = 12; // 0x2ac PushI
	var_150_int = var_14_int + var_149_int; // 0x2ad Add
	var_151_int = 1; // 0x2ae PushI
	var_152_int = var_150_int + var_151_int; // 0x2af Add
	var_153_int = 12; // 0x2b0 PushI
	var_148_int = var_152_int % var_153_int; // 0x2b1 Mod2
	func_1227(var_147_string, var_148_int); // 0x2b2 NEW_2
	add(var_147_string); // 0x2b4 ObjFunc
	var_154_int = -1; // 0x2b6 PushI
	var_155_string = ""; var_156_int = 0; // 0x2b7 PushV
	var_156_int = var_14_int; // 0x2b8 Mov
	func_1227(var_155_string, var_156_int); // 0x2b9 NEW_2
	SendMessage(var_154_int, var_155_string, var_15_object); // 0x2bb Func
	var_15_object = 0; // 0x2bd SetNull
	var_157_int = 1; // 0x2be PushI
	var_14_int = var_14_int + var_157_int; // 0x2bf Add2
	goto Label_667; // 0x2c0 Jump
	
Label_705:
	func_727(); // 0x2c2 NEW_2
	var_161_string = "default"; // 0x2c4 PushS
	SetCursor(var_161_string); // 0x2c5 Func
	ShowCursor(); // 0x2c7 Func
	CaptureKeyboard(); // 0x2c9 Func
	var_162_bool = 0; // 0x2cb PushB
	SetOwnerDraw(var_162_bool); // 0x2cc Func
	var_163_bool = 1; // 0x2ce PushB
	SetNeedUpdate(var_163_bool); // 0x2cf Func
	func_88(); // 0x2d2 NEW_2
	ProcessEvents(); // 0x2d4 Func
	return 4; // 0x2d6 Return
}


func_1046(var_0_int, var_16_int)
{
	var_17_int = -1; // 0x417 PushI
	var_18_bool = var_16_int == var_17_int; // 0x418 Eq
	if(var_18_bool == 0) goto Label_1051; // 0x419 JumpB
	return 0; // 0x41a Return
	
Label_1051:
	var_19_bool = var_0_int == var_16_int; // 0x41b Eq
	if(var_19_bool == 0) goto Label_1054; // 0x41c JumpB
	return 0; // 0x41d Return
	
Label_1054:
	var_0_int = var_16_int; // 0x41e TMov
	var_20_int = 0; // 0x41f PushV
	var_20_int = var_0_int; // 0x420 MovT
	func_1078(var_20_int); // 0x421 NEW_2
	return 0; // 0x423 Return
}


func_153(var_0_int, var_392_bool, var_393_object, var_394_int)
{
	var_395_object = Obj(); var_396_bool = 0; var_397_object = Obj(); var_398_bool = 0; // 0x99 PushV
	var_399_object = Obj(); // 0x9a PushV
	func_237(var_399_object); // 0x9b NEW_2
	var_397_object = var_399_object; // 0x9c Mov
	var_400_object = var_397_object; // 0x9e Push
	if(var_400_object == 0) goto Label_162; // 0x9f JumpB
	var_392_bool = 0; // 0xa0 MovB
	return 4; // 0xa1 Return
	
Label_162:
	var_401_int = 0; // 0xa2 PushI
	var_402_int = 1; // 0xa3 PushI
	AddItem(var_398_bool, var_393_object, var_401_int, var_402_int); // 0xa4 TObjFunc
	var_403_bool = var_398_bool == 0; // 0xa6 Not
	if(var_403_bool == 0) goto Label_170; // 0xa7 JumpB
	var_392_bool = 0; // 0xa8 MovB
	return 4; // 0xa9 Return
	
Label_170:
	var_404_int = 1; // 0xaa PushI
	RemoveItem(var_394_int, var_404_int, var_0_int); // 0xab TObjFunc
	var_392_bool = 1; // 0xad MovB
	return 4; // 0xae Return
}


func_27(var_3_object, var_66_object)
{
	var_66_object = var_3_object; // 0x1b MovT
	return 0; // 0x1c Return
}


func_29(var_22_bool, var_24_string)
{
	var_26_string = "combine"; // 0x1e PushS
	var_27_bool = var_24_string == var_26_string; // 0x1f Eq
	if(var_27_bool == 0) goto Label_39; // 0x20 JumpB
	var_28_bool = 0; // 0x21 PushV
	func_506(var_28_bool); // 0x22 NEW_2
	var_22_bool = 1; // 0x24 MovB
	return 0; // 0x25 Return
	
Label_39:
	var_197_string = "input_organ"; // 0x27 PushS
	var_198_bool = var_24_string == var_197_string; // 0x28 Eq
	if(var_198_bool == 0) goto Label_46; // 0x29 JumpB
	var_199_bool = 0; // 0x2a PushV
	func_361(var_199_bool); // 0x2b NEW_2
	goto Label_59; // 0x2d Jump
	
Label_59:
	var_22_bool = 0; // 0x3b MovB
	return 0; // 0x3c Return
	
Label_46:
	var_257_string = "input_grass"; // 0x2e PushS
	var_258_bool = var_24_string == var_257_string; // 0x2f Eq
	if(var_258_bool == 0) goto Label_53; // 0x30 JumpB
	var_259_bool = 0; // 0x31 PushV
	func_391(var_259_bool); // 0x32 NEW_2
	goto Label_59; // 0x34 Jump
	
Label_53:
	var_283_string = "output"; // 0x35 PushS
	var_284_bool = var_24_string == var_283_string; // 0x36 Eq
	if(var_284_bool == 0) goto Label_59; // 0x37 JumpB
	var_285_bool = 0; // 0x38 PushV
	func_421(var_285_bool); // 0x39 NEW_2
}


func_1060(var_130_int)
{
	var_131_object = Obj(); var_132_int = 0; var_133_object = Obj(); var_134_int = 0; // 0x424 PushV
	var_135_object = Obj(); // 0x425 PushV
	func_27(var_134_int, var_135_object); // 0x426 NEW_2
	var_133_object = var_135_object; // 0x427 Mov
	var_136_string = "money"; // 0x429 PushS
	GetProperty(var_136_string, var_134_int); // 0x42a ObjFunc
	var_130_int = var_134_int; // 0x42c Mov
	return 4; // 0x42d Return
}


func_421(var_285_bool)
{
	var_286_object = Obj(); var_287_int = 0; var_288_bool = 0; var_289_object = Obj(); var_290_int = 0; var_291_bool = 0; // 0x1a5 PushV
	var_292_object = Obj(); // 0x1a6 PushV
	func_261(var_292_object); // 0x1a7 NEW_2
	var_289_object = var_292_object; // 0x1a8 Mov
	var_293_bool = var_289_object == 0; // 0x1aa Not
	if(var_293_bool == 0) goto Label_430; // 0x1ab JumpB
	var_285_bool = 0; // 0x1ac MovB
	return 6; // 0x1ad Return
	
Label_430:
	var_294_int = 0; // 0x1ae PushV
	func_338(var_294_int); // 0x1af NEW_2
	var_290_int = var_294_int; // 0x1b0 Mov
	var_308_int = 2; // 0x1b2 PushI
	var_309_int = 1; // 0x1b3 PushI
	AddItem(var_291_bool, var_289_object, var_308_int, var_309_int); // 0x1b4 TObjFunc
	var_310_bool = var_291_bool == 0; // 0x1b6 Not
	if(var_310_bool == 0) goto Label_442; // 0x1b7 JumpB
	var_285_bool = 0; // 0x1b8 MovB
	return 6; // 0x1b9 Return
	
Label_442:
	var_311_int = 1; // 0x1ba PushI
	RemoveItem(var_290_int, var_311_int); // 0x1bb TObjFunc
	var_312_int = 0; // 0x1bd PushV
	var_312_int = 2; // 0x1be MovI
	func_1046(var_291_bool, var_312_int); // 0x1bf NEW_2
	var_285_bool = 1; // 0x1c1 MovB
	return 6; // 0x1c2 Return
}


func_296(var_264_int)
{
	var_265_int = 0; var_266_int = 0; var_267_object = Obj(); var_268_int = 0; var_269_int = 0; var_270_object = Obj(); // 0x128 PushV
	GetItemCount(var_268_int); // 0x129 TObjFunc
	var_269_int = 0; // 0x12b MovI
	
Label_300:
	var_271_bool = var_269_int < var_268_int; // 0x12c LT
	if(var_271_bool == 0) goto Label_315; // 0x12d JumpB
	GetItem(var_270_object, var_269_int); // 0x12e TObjFunc
	var_272_bool = 0; var_273_object = Obj(); // 0x130 PushV
	var_273_object = var_270_object; // 0x131 Mov
	func_176(var_272_bool, var_273_object); // 0x132 NEW_2
	if(var_272_bool == 0) goto Label_311; // 0x134 JumpB
	var_264_int = var_269_int; // 0x135 Mov
	return 6; // 0x136 Return
	
Label_311:
	var_270_object = 0; // 0x137 SetNull
	var_274_int = 1; // 0x138 PushI
	var_269_int = var_269_int + var_274_int; // 0x139 Add2
	goto Label_300; // 0x13a Jump
	
Label_315:
	var_264_int = -1; // 0x13b MovI
	return 6; // 0x13c Return
}


func_1071()
{
	var_130_int = 0; // 0x42f PushV
	func_1060(var_130_int); // 0x430 NEW_2
	var_137_string = "money"; // 0x432 PushS
	SendMessage(var_130_int, var_137_string); // 0x433 Func
	return 0; // 0x435 Return
}


func_176(var_75_bool, var_76_object)
{
	var_77_string = "grass_combination"; // 0xb1 PushS
	var_78_string = ""; var_79_object = Obj(); // 0xb2 PushV
	var_79_object = var_76_object; // 0xb3 Mov
	func_1248(var_78_string, var_79_object); // 0xb4 NEW_2
	var_75_bool = var_77_string == var_78_string; // 0xb6 Eq2
	return 0; // 0xb7 Return
}


func_1078(var_20_int)
{
	var_21_int = 0; // 0x437 PushI
	var_22_bool = var_20_int != var_21_int; // 0x438 Neq
	if(var_22_bool == 0) goto Label_1087; // 0x439 JumpB
	var_23_int = 0; // 0x43a PushI
	var_24_string = "button_weapon"; // 0x43b PushS
	SendMessage(var_23_int, var_24_string); // 0x43c Func
	goto Label_1091; // 0x43e Jump
	
Label_1091:
	var_25_int = 1; // 0x443 PushI
	var_26_bool = var_20_int != var_25_int; // 0x444 Neq
	if(var_26_bool == 0) goto Label_1099; // 0x445 JumpB
	var_27_int = 0; // 0x446 PushI
	var_28_string = "button_clothes"; // 0x447 PushS
	SendMessage(var_27_int, var_28_string); // 0x448 Func
	goto Label_1103; // 0x44a Jump
	
Label_1103:
	var_29_int = 2; // 0x44f PushI
	var_30_bool = var_20_int != var_29_int; // 0x450 Neq
	if(var_30_bool == 0) goto Label_1111; // 0x451 JumpB
	var_31_int = 0; // 0x452 PushI
	var_32_string = "button_medcine"; // 0x453 PushS
	SendMessage(var_31_int, var_32_string); // 0x454 Func
	goto Label_1115; // 0x456 Jump
	
Label_1115:
	var_33_int = 3; // 0x45b PushI
	var_34_bool = var_20_int != var_33_int; // 0x45c Neq
	if(var_34_bool == 0) goto Label_1123; // 0x45d JumpB
	var_35_int = 0; // 0x45e PushI
	var_36_string = "button_food"; // 0x45f PushS
	SendMessage(var_35_int, var_36_string); // 0x460 Func
	goto Label_1127; // 0x462 Jump
	
Label_1127:
	var_37_int = 4; // 0x467 PushI
	var_38_bool = var_20_int != var_37_int; // 0x468 Neq
	if(var_38_bool == 0) goto Label_1135; // 0x469 JumpB
	var_39_int = 0; // 0x46a PushI
	var_40_string = "button_other"; // 0x46b PushS
	SendMessage(var_39_int, var_40_string); // 0x46c Func
	goto Label_1139; // 0x46e Jump
	
Label_1139:
	return 0; // 0x473 Return
	
Label_1135:
	var_41_int = 1; // 0x46f PushI
	var_42_string = "button_other"; // 0x470 PushS
	SendMessage(var_41_int, var_42_string); // 0x471 Func
	
Label_1123:
	var_43_int = 1; // 0x463 PushI
	var_44_string = "button_food"; // 0x464 PushS
	SendMessage(var_43_int, var_44_string); // 0x465 Func
	
Label_1111:
	var_45_int = 1; // 0x457 PushI
	var_46_string = "button_medcine"; // 0x458 PushS
	SendMessage(var_45_int, var_46_string); // 0x459 Func
	
Label_1099:
	var_47_int = 1; // 0x44b PushI
	var_48_string = "button_clothes"; // 0x44c PushS
	SendMessage(var_47_int, var_48_string); // 0x44d Func
	
Label_1087:
	var_49_int = 1; // 0x43f PushI
	var_50_string = "button_weapon"; // 0x440 PushS
	SendMessage(var_49_int, var_50_string); // 0x441 Func
}


func_184(var_88_bool, var_89_object)
{
	var_90_int = 0; var_91_bool = 0; var_92_int = 0; var_93_bool = 0; // 0xb8 PushV
	var_94_int = 0; var_95_object = Obj(); // 0xb9 PushV
	var_95_object = var_89_object; // 0xba Mov
	func_1243(var_95_object); // 0xbb NEW_2
	var_92_int = var_94_int; // 0xbc Mov
	var_96_string = "Microscope"; // 0xbe PushS
	HasInvItemProperty(var_93_bool, var_92_int, var_96_string); // 0xbf Func
	var_88_bool = var_93_bool; // 0xc1 Mov
	return 4; // 0xc2 Return
}


func_317(var_204_int)
{
	var_205_int = 0; var_206_int = 0; var_207_object = Obj(); var_208_int = 0; var_209_int = 0; var_210_object = Obj(); // 0x13d PushV
	GetItemCount(var_208_int); // 0x13e TObjFunc
	var_209_int = 0; // 0x140 MovI
	
Label_321:
	var_211_bool = var_209_int < var_208_int; // 0x141 LT
	if(var_211_bool == 0) goto Label_336; // 0x142 JumpB
	GetItem(var_210_object, var_209_int); // 0x143 TObjFunc
	var_212_bool = 0; var_213_object = Obj(); // 0x145 PushV
	var_213_object = var_210_object; // 0x146 Mov
	func_184(var_212_bool, var_213_object); // 0x147 NEW_2
	if(var_212_bool == 0) goto Label_332; // 0x149 JumpB
	var_204_int = var_209_int; // 0x14a Mov
	return 6; // 0x14b Return
	
Label_332:
	var_210_object = 0; // 0x14c SetNull
	var_214_int = 1; // 0x14d PushI
	var_209_int = var_209_int + var_214_int; // 0x14e Add2
	goto Label_321; // 0x14f Jump
	
Label_336:
	var_204_int = -1; // 0x150 MovI
	return 6; // 0x151 Return
}


func_61()
{
	func_452(); // 0x3e NEW_2
	func_470(); // 0x41 NEW_2
	func_488(); // 0x44 NEW_2
	return 0; // 0x46 Return
}


func_195(var_134_int, var_135_object)
{
	var_136_int = 0; var_137_bool = 0; var_138_int = 0; var_139_int = 0; var_140_bool = 0; var_141_int = 0; // 0xc3 PushV
	var_142_int = 0; var_143_object = Obj(); // 0xc4 PushV
	var_143_object = var_135_object; // 0xc5 Mov
	func_1243(var_143_object); // 0xc6 NEW_2
	var_139_int = var_142_int; // 0xc7 Mov
	var_144_string = "Microscope"; // 0xc9 PushS
	HasInvItemProperty(var_140_bool, var_139_int, var_144_string); // 0xca Func
	var_145_bool = var_140_bool == 0; // 0xcc Not
	if(var_145_bool == 0) goto Label_208; // 0xcd JumpB
	var_134_int = 0; // 0xce MovB
	return 6; // 0xcf Return
	
Label_208:
	var_146_string = "Microscope"; // 0xd0 PushS
	GetInvItemProperty(var_141_int, var_139_int, var_146_string); // 0xd1 Func
	var_134_int = var_141_int; // 0xd3 Mov
	return 6; // 0xd4 Return
}


func_452()
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x1c4 PushV
	var_95_object = Obj(); // 0x1c5 PushV
	func_213(var_95_object); // 0x1c6 NEW_2
	var_94_object = var_95_object; // 0x1c7 Mov
	var_110_object = var_94_object; // 0x1c9 Push
	if(var_110_object == 0) goto Label_464; // 0x1ca JumpB
	var_111_int = 0; // 0x1cb PushI
	var_112_string = "input_grass"; // 0x1cc PushS
	SendMessage(var_111_int, var_112_string, var_94_object); // 0x1cd Func
	goto Label_468; // 0x1cf Jump
	
Label_468:
	return 2; // 0x1d4 Return
	
Label_464:
	var_113_int = 32768; // 0x1d0 PushI
	var_114_string = "input_grass"; // 0x1d1 PushS
	SendMessage(var_113_int, var_114_string); // 0x1d2 Func
}


func_836(var_45_int)
{
	var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; // 0x344 PushV
	var_50_int = 269; // 0x345 PushI
	var_51_bool = var_45_int == var_50_int; // 0x346 Eq
	if(var_51_bool == 0) goto Label_854; // 0x347 JumpB
	var_48_int = 0; // 0x348 MovI
	
Label_841:
	var_52_int = 12; // 0x349 PushI
	var_53_bool = var_48_int < var_52_int; // 0x34a LT
	if(var_53_bool == 0) goto Label_854; // 0x34b JumpB
	var_54_int = -2; // 0x34c PushI
	var_55_string = ""; var_56_int = 0; // 0x34d PushV
	var_56_int = var_48_int; // 0x34e Mov
	func_1227(var_55_string, var_56_int); // 0x34f NEW_2
	SendMessage(var_54_int, var_55_string); // 0x351 Func
	var_67_int = 1; // 0x353 PushI
	var_48_int = var_48_int + var_67_int; // 0x354 Add2
	goto Label_841; // 0x355 Jump
	
Label_854:
	var_68_int = 270; // 0x356 PushI
	var_69_bool = var_45_int == var_68_int; // 0x357 Eq
	if(var_69_bool == 0) goto Label_871; // 0x358 JumpB
	var_49_int = 0; // 0x359 MovI
	
Label_858:
	var_70_int = 12; // 0x35a PushI
	var_71_bool = var_49_int < var_70_int; // 0x35b LT
	if(var_71_bool == 0) goto Label_871; // 0x35c JumpB
	var_72_int = -3; // 0x35d PushI
	var_73_string = ""; var_74_int = 0; // 0x35e PushV
	var_74_int = var_49_int; // 0x35f Mov
	func_1227(var_73_string, var_74_int); // 0x360 NEW_2
	SendMessage(var_72_int, var_73_string); // 0x362 Func
	var_75_int = 1; // 0x364 PushI
	var_49_int = var_49_int + var_75_int; // 0x365 Add2
	goto Label_858; // 0x366 Jump
	
Label_871:
	return 4; // 0x367 Return
}


func_71(var_73_bool, var_74_object)
{
	var_75_bool = 0; var_76_object = Obj(); // 0x48 PushV
	var_76_object = var_74_object; // 0x49 Mov
	func_176(var_75_bool, var_76_object); // 0x4a NEW_2
	if(var_75_bool == 0) goto Label_79; // 0x4c JumpB
	var_73_bool = 0; // 0x4d MovB
	return 0; // 0x4e Return
	
Label_79:
	var_88_bool = 0; var_89_object = Obj(); // 0x4f PushV
	var_89_object = var_74_object; // 0x50 Mov
	func_184(var_88_bool, var_89_object); // 0x51 NEW_2
	var_73_bool = !var_88_bool; // 0x53 Not2
	return 0; // 0x54 Return
}


func_1227(var_100_string, var_101_int)
{
	var_102_int = 1; // 0x4cc PushI
	var_103_int = var_101_int + var_102_int; // 0x4cd Add
	var_104_int = 10; // 0x4ce PushI
	var_105_bool = var_103_int < var_104_int; // 0x4cf LT
	if(var_105_bool == 0) goto Label_1238; // 0x4d0 JumpB
	var_106_string = "slot0"; // 0x4d1 PushS
	var_107_int = 1; // 0x4d2 PushI
	var_108_int = var_101_int + var_107_int; // 0x4d3 Add
	var_100_string = var_106_string + var_108_int; // 0x4d4 Add2
	return 0; // 0x4d5 Return
	
Label_1238:
	var_109_string = "slot"; // 0x4d6 PushS
	var_110_int = 1; // 0x4d7 PushI
	var_111_int = var_101_int + var_110_int; // 0x4d8 Add
	var_100_string = var_109_string + var_111_int; // 0x4d9 Add2
	return 0; // 0x4da Return
}


func_338(var_294_int)
{
	var_295_int = 0; var_296_int = 0; var_297_int = 0; var_298_object = Obj(); var_299_int = 0; var_300_int = 0; var_301_int = 0; var_302_object = Obj(); // 0x152 PushV
	GetItemCount(var_299_int); // 0x153 TObjFunc
	var_300_int = 0; // 0x155 MovI
	var_301_int = 0; // 0x156 MovI
	
Label_343:
	var_303_bool = var_301_int < var_299_int; // 0x157 LT
	if(var_303_bool == 0) goto Label_359; // 0x158 JumpB
	GetItem(var_302_object, var_301_int); // 0x159 TObjFunc
	var_304_bool = 0; var_305_object = Obj(); // 0x15b PushV
	var_305_object = var_302_object; // 0x15c Mov
	func_176(var_304_bool, var_305_object); // 0x15d NEW_2
	var_306_bool = var_304_bool == 0; // 0x15f Not
	if(var_306_bool == 0) goto Label_355; // 0x160 JumpB
	var_294_int = var_301_int; // 0x161 Mov
	return 8; // 0x162 Return
	
Label_355:
	var_302_object = 0; // 0x163 SetNull
	var_307_int = 1; // 0x164 PushI
	var_301_int = var_301_int + var_307_int; // 0x165 Add2
	goto Label_343; // 0x166 Jump
	
Label_359:
	var_294_int = -1; // 0x167 MovI
	return 8; // 0x168 Return
}


func_213(var_101_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_object = Obj(); var_106_object = Obj(); var_107_int = 0; var_108_int = 0; var_109_int = 0; var_110_object = Obj(); var_111_object = Obj(); // 0xd5 PushV
	GetItemCount(var_107_int); // 0xd6 TObjFunc
	var_108_int = 0; // 0xd8 MovI
	var_109_int = 0; // 0xd9 MovI
	
Label_218:
	var_112_bool = var_109_int < var_107_int; // 0xda LT
	if(var_112_bool == 0) goto Label_233; // 0xdb JumpB
	GetItem(var_110_object, var_109_int); // 0xdc TObjFunc
	var_113_bool = 0; var_114_object = Obj(); // 0xde PushV
	var_114_object = var_110_object; // 0xdf Mov
	func_176(var_113_bool, var_114_object); // 0xe0 NEW_2
	if(var_113_bool == 0) goto Label_229; // 0xe2 JumpB
	var_101_object = var_110_object; // 0xe3 Mov
	return 10; // 0xe4 Return
	
Label_229:
	var_110_object = 0; // 0xe5 SetNull
	var_115_int = 1; // 0xe6 PushI
	var_109_int = var_109_int + var_115_int; // 0xe7 Add2
	goto Label_218; // 0xe8 Jump
	
Label_233:
	var_111_object = 0; // 0xe9 SetNull
	var_101_object = var_111_object; // 0xea Mov
	return 10; // 0xeb Return
}


func_470()
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x1d6 PushV
	var_117_object = Obj(); // 0x1d7 PushV
	func_237(var_117_object); // 0x1d8 NEW_2
	var_116_object = var_117_object; // 0x1d9 Mov
	var_132_object = var_116_object; // 0x1db Push
	if(var_132_object == 0) goto Label_482; // 0x1dc JumpB
	var_133_int = 0; // 0x1dd PushI
	var_134_string = "input_organ"; // 0x1de PushS
	SendMessage(var_133_int, var_134_string, var_116_object); // 0x1df Func
	goto Label_486; // 0x1e1 Jump
	
Label_486:
	return 2; // 0x1e6 Return
	
Label_482:
	var_135_int = 32768; // 0x1e2 PushI
	var_136_string = "input_organ"; // 0x1e3 PushS
	SendMessage(var_135_int, var_136_string); // 0x1e4 Func
}


func_727()
{
	var_158_int = -6; // 0x2d7 PushI
	var_159_string = ""; var_160_int = 0; // 0x2d8 PushV
	var_160_int = 0; // 0x2d9 MovI
	func_1227(var_159_string, var_160_int); // 0x2da NEW_2
	SendMessage(var_158_int, var_159_string); // 0x2dc Func
	return 0; // 0x2de Return
}


func_88()
{
	return 0; // 0x58 Return
}


func_89(var_366_bool, var_367_int, var_368_bool)
{
	var_370_bool = var_368_bool; // 0x5a Push
	if(var_370_bool == 0) goto Label_98; // 0x5b JumpB
	var_371_bool = 0; var_372_int = 0; // 0x5c PushV
	var_372_int = var_367_int; // 0x5d Mov
	func_100(var_368_bool, var_371_bool, var_372_int); // 0x5e NEW_2
	var_366_bool = var_371_bool; // 0x5f Mov
	return 0; // 0x61 Return
	
Label_98:
	var_366_bool = 0; // 0x62 MovB
	return 0; // 0x63 Return
}


func_85(var_70_bool)
{
	var_70_bool = 0; // 0x56 MovB
	return 0; // 0x57 Return
}


func_1243(var_84_int)
{
	var_86_int = 0; var_87_int = 0; // 0x4db PushV
	GetItemID(var_87_int); // 0x4dc ObjFunc
	var_84_int = var_87_int; // 0x4de Mov
	return 2; // 0x4df Return
}


func_1248(var_78_string, var_79_object)
{
	var_80_int = 0; var_81_string = ""; var_82_int = 0; var_83_string = ""; // 0x4e0 PushV
	var_84_int = 0; var_85_object = Obj(); // 0x4e1 PushV
	var_85_object = var_79_object; // 0x4e2 Mov
	func_1243(var_85_object); // 0x4e3 NEW_2
	var_82_int = var_84_int; // 0x4e4 Mov
	GetInvItemName(var_83_string, var_82_int); // 0x4e6 Func
	var_78_string = var_83_string; // 0x4e8 Mov
	return 4; // 0x4e9 Return
}


func_100(var_0_int, var_371_bool, var_372_int)
{
	var_373_object = Obj(); var_374_object = Obj(); // 0x64 PushV
	GetItem(var_374_object, var_372_int, var_0_int); // 0x65 TObjFunc
	var_375_bool = 0; var_376_object = Obj(); // 0x67 PushV
	var_376_object = var_374_object; // 0x68 Mov
	func_176(var_375_bool, var_376_object); // 0x69 NEW_2
	if(var_375_bool == 0) goto Label_115; // 0x6b JumpB
	var_377_bool = 0; var_378_object = Obj(); var_379_int = 0; // 0x6c PushV
	var_378_object = var_374_object; // 0x6d Mov
	var_379_int = var_372_int; // 0x6e Mov
	func_130(var_374_object, var_377_bool, var_378_object, var_379_int); // 0x6f NEW_2
	var_371_bool = var_377_bool; // 0x70 Mov
	return 2; // 0x72 Return
	
Label_115:
	var_390_bool = 0; var_391_object = Obj(); // 0x73 PushV
	var_391_object = var_374_object; // 0x74 Mov
	func_184(var_390_bool, var_391_object); // 0x75 NEW_2
	if(var_390_bool == 0) goto Label_127; // 0x77 JumpB
	var_392_bool = 0; var_393_object = Obj(); var_394_int = 0; // 0x78 PushV
	var_393_object = var_374_object; // 0x79 Mov
	var_394_int = var_372_int; // 0x7a Mov
	func_153(var_374_object, var_392_bool, var_393_object, var_394_int); // 0x7b NEW_2
	var_371_bool = var_392_bool; // 0x7c Mov
	return 2; // 0x7e Return
	
Label_127:
	var_371_bool = 0; // 0x7f MovB
	return 2; // 0x80 Return
}


func_488()
{
	var_137_object = Obj(); var_138_object = Obj(); // 0x1e8 PushV
	var_139_object = Obj(); // 0x1e9 PushV
	func_261(var_139_object); // 0x1ea NEW_2
	var_138_object = var_139_object; // 0x1eb Mov
	var_159_object = var_138_object; // 0x1ed Push
	if(var_159_object == 0) goto Label_500; // 0x1ee JumpB
	var_160_int = 0; // 0x1ef PushI
	var_161_string = "output"; // 0x1f0 PushS
	SendMessage(var_160_int, var_161_string, var_138_object); // 0x1f1 Func
	goto Label_504; // 0x1f3 Jump
	
Label_504:
	return 2; // 0x1f8 Return
	
Label_500:
	var_162_int = 32768; // 0x1f4 PushI
	var_163_string = "output"; // 0x1f5 PushS
	SendMessage(var_162_int, var_163_string); // 0x1f6 Func
}


func_361(var_199_bool)
{
	var_200_int = 0; var_201_bool = 0; var_202_int = 0; var_203_bool = 0; // 0x169 PushV
	var_204_int = 0; // 0x16a PushV
	func_317(var_204_int); // 0x16b NEW_2
	var_202_int = var_204_int; // 0x16c Mov
	var_215_int = -1; // 0x16e PushI
	var_216_bool = var_202_int == var_215_int; // 0x16f Eq
	if(var_216_bool == 0) goto Label_371; // 0x170 JumpB
	var_199_bool = 0; // 0x171 MovB
	return 4; // 0x172 Return
	
Label_371:
	var_217_object = Obj(); // 0x173 PushV
	func_237(var_217_object); // 0x174 NEW_2
	var_218_int = 4; // 0x176 PushI
	var_219_int = 1; // 0x177 PushI
	AddItem(var_203_bool, var_217_object, var_218_int, var_219_int); // 0x178 TObjFunc
	var_220_bool = var_203_bool == 0; // 0x17a Not
	if(var_220_bool == 0) goto Label_382; // 0x17b JumpB
	var_199_bool = 0; // 0x17c MovB
	return 4; // 0x17d Return
	
Label_382:
	var_221_int = 1; // 0x17e PushI
	RemoveItem(var_202_int, var_221_int); // 0x17f TObjFunc
	var_222_int = 0; // 0x181 PushV
	var_222_int = 4; // 0x182 MovI
	func_1046(var_203_bool, var_222_int); // 0x183 NEW_2
	var_199_bool = 1; // 0x185 MovB
	return 4; // 0x186 Return
}


func_872(var_6_int)
{
	var_7_int = 0; var_8_int = 0; var_9_int = 0; var_10_int = 0; // 0x368 PushV
	var_11_int = 273; // 0x369 PushI
	var_12_bool = var_6_int == var_11_int; // 0x36a Eq
	if(var_12_bool == 0) goto Label_890; // 0x36b JumpB
	var_9_int = 0; // 0x36c MovI
	
Label_877:
	var_13_int = 12; // 0x36d PushI
	var_14_bool = var_9_int < var_13_int; // 0x36e LT
	if(var_14_bool == 0) goto Label_890; // 0x36f JumpB
	var_15_int = -2; // 0x370 PushI
	var_16_string = ""; var_17_int = 0; // 0x371 PushV
	var_17_int = var_9_int; // 0x372 Mov
	func_1227(var_16_string, var_17_int); // 0x373 NEW_2
	SendMessage(var_15_int, var_16_string); // 0x375 Func
	var_28_int = 1; // 0x377 PushI
	var_9_int = var_9_int + var_28_int; // 0x378 Add2
	goto Label_877; // 0x379 Jump
	
Label_890:
	var_29_int = 271; // 0x37a PushI
	var_30_bool = var_6_int == var_29_int; // 0x37b Eq
	if(var_30_bool == 0) goto Label_907; // 0x37c JumpB
	var_10_int = 0; // 0x37d MovI
	
Label_894:
	var_31_int = 12; // 0x37e PushI
	var_32_bool = var_10_int < var_31_int; // 0x37f LT
	if(var_32_bool == 0) goto Label_907; // 0x380 JumpB
	var_33_int = -3; // 0x381 PushI
	var_34_string = ""; var_35_int = 0; // 0x382 PushV
	var_35_int = var_10_int; // 0x383 Mov
	func_1227(var_34_string, var_35_int); // 0x384 NEW_2
	SendMessage(var_33_int, var_34_string); // 0x386 Func
	var_36_int = 1; // 0x388 PushI
	var_10_int = var_10_int + var_36_int; // 0x389 Add2
	goto Label_894; // 0x38a Jump
	
Label_907:
	return 4; // 0x38b Return
}


func_237(var_116_object)
{
	var_117_int = 0; var_118_int = 0; var_119_int = 0; var_120_object = Obj(); var_121_object = Obj(); var_122_int = 0; var_123_int = 0; var_124_int = 0; var_125_object = Obj(); var_126_object = Obj(); // 0xed PushV
	GetItemCount(var_122_int); // 0xee TObjFunc
	var_123_int = 0; // 0xf0 MovI
	var_124_int = 0; // 0xf1 MovI
	
Label_242:
	var_127_bool = var_124_int < var_122_int; // 0xf2 LT
	if(var_127_bool == 0) goto Label_257; // 0xf3 JumpB
	GetItem(var_125_object, var_124_int); // 0xf4 TObjFunc
	var_128_bool = 0; var_129_object = Obj(); // 0xf6 PushV
	var_129_object = var_125_object; // 0xf7 Mov
	func_184(var_128_bool, var_129_object); // 0xf8 NEW_2
	if(var_128_bool == 0) goto Label_253; // 0xfa JumpB
	var_116_object = var_125_object; // 0xfb Mov
	return 10; // 0xfc Return
	
Label_253:
	var_125_object = 0; // 0xfd SetNull
	var_130_int = 1; // 0xfe PushI
	var_124_int = var_124_int + var_130_int; // 0xff Add2
	goto Label_242; // 0x100 Jump
	
Label_257:
	var_126_object = 0; // 0x101 SetNull
	var_116_object = var_126_object; // 0x102 Mov
	return 10; // 0x103 Return
}


func_1140(var_51_int)
{
	var_52_object = Obj(); var_53_int = 0; var_54_int = 0; var_55_object = Obj(); var_56_int = 0; var_57_bool = 0; var_58_bool = 0; var_59_object = Obj(); var_60_int = 0; var_61_int = 0; var_62_object = Obj(); var_63_int = 0; var_64_bool = 0; var_65_bool = 0; // 0x474 PushV
	var_66_object = Obj(); // 0x475 PushV
	func_27(var_65_bool, var_66_object); // 0x476 NEW_2
	var_59_object = var_66_object; // 0x477 Mov
	GetItemCount(var_60_int, var_51_int); // 0x479 ObjFunc
	var_61_int = 0; // 0x47b MovI
	
Label_1148:
	var_67_int = 12; // 0x47c PushI
	var_68_bool = var_61_int < var_67_int; // 0x47d LT
	if(var_68_bool == 0) goto Label_1225; // 0x47e JumpB
	var_69_bool = var_61_int < var_60_int; // 0x47f LT
	if(var_69_bool == 0) goto Label_1215; // 0x480 JumpB
	GetItem(var_62_object, var_61_int, var_51_int); // 0x481 ObjFunc
	GetItemAmount(var_63_int, var_61_int, var_51_int); // 0x483 ObjFunc
	var_70_bool = 0; var_71_int = 0; var_72_int = 0; // 0x485 PushV
	var_71_int = var_61_int; // 0x486 Mov
	var_72_int = var_51_int; // 0x487 Mov
	func_85(var_72_int); // 0x488 NEW_2
	var_64_bool = var_70_bool; // 0x489 Mov
	var_73_bool = 0; var_74_object = Obj(); // 0x48b PushV
	var_74_object = var_62_object; // 0x48c Mov
	func_71(var_73_bool, var_74_object); // 0x48d NEW_2
	var_65_bool = var_73_bool; // 0x48e Mov
	var_97_bool = var_64_bool; // 0x490 Push
	if(var_97_bool == 0) goto Label_1188; // 0x491 JumpB
	var_98_bool = var_65_bool; // 0x492 Push
	if(var_98_bool == 0) goto Label_1180; // 0x493 JumpB
	var_99_int = 0; // 0x494 PushI
	var_100_string = ""; var_101_int = 0; // 0x495 PushV
	var_101_int = var_61_int; // 0x496 Mov
	func_1227(var_100_string, var_101_int); // 0x497 NEW_2
	SendMessage(var_99_int, var_100_string, var_62_object); // 0x499 Func
	goto Label_1187; // 0x49b Jump
	
Label_1187:
	goto Label_1205; // 0x4a3 Jump
	
Label_1205:
	var_112_int = 65536; // 0x4b5 PushI
	var_113_int = var_63_int | var_112_int; // 0x4b6 Or
	var_114_string = ""; var_115_int = 0; // 0x4b7 PushV
	var_115_int = var_61_int; // 0x4b8 Mov
	func_1227(var_114_string, var_115_int); // 0x4b9 NEW_2
	SendMessage(var_113_int, var_114_string); // 0x4bb Func
	var_62_object = 0; // 0x4bd SetNull
	goto Label_1222; // 0x4be Jump
	
Label_1222:
	var_116_int = 1; // 0x4c6 PushI
	var_61_int = var_61_int + var_116_int; // 0x4c7 Add2
	goto Label_1148; // 0x4c8 Jump
	
Label_1180:
	var_117_int = 16384; // 0x49c PushI
	var_118_string = ""; var_119_int = 0; // 0x49d PushV
	var_119_int = var_61_int; // 0x49e Mov
	func_1227(var_118_string, var_119_int); // 0x49f NEW_2
	SendMessage(var_117_int, var_118_string, var_62_object); // 0x4a1 Func
	
Label_1188:
	var_120_bool = var_65_bool; // 0x4a4 Push
	if(var_120_bool == 0) goto Label_1198; // 0x4a5 JumpB
	var_121_int = 131072; // 0x4a6 PushI
	var_122_string = ""; var_123_int = 0; // 0x4a7 PushV
	var_123_int = var_61_int; // 0x4a8 Mov
	func_1227(var_122_string, var_123_int); // 0x4a9 NEW_2
	SendMessage(var_121_int, var_122_string, var_62_object); // 0x4ab Func
	goto Label_1205; // 0x4ad Jump
	
Label_1198:
	var_124_int = 0; // 0x4ae PushI
	var_125_string = ""; var_126_int = 0; // 0x4af PushV
	var_126_int = var_61_int; // 0x4b0 Mov
	func_1227(var_125_string, var_126_int); // 0x4b1 NEW_2
	SendMessage(var_124_int, var_125_string, var_62_object); // 0x4b3 Func
	
Label_1215:
	var_127_int = 32768; // 0x4bf PushI
	var_128_string = ""; var_129_int = 0; // 0x4c0 PushV
	var_129_int = var_61_int; // 0x4c1 Mov
	func_1227(var_128_string, var_129_int); // 0x4c2 NEW_2
	SendMessage(var_127_int, var_128_string); // 0x4c4 Func
	
Label_1225:
	return 14; // 0x4c9 Return
}


func_506(var_28_bool)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_bool = 0; var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; var_40_float = 0; var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_object = Obj(); var_45_bool = 0; var_46_object = Obj(); var_47_object = Obj(); var_48_object = Obj(); var_49_bool = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_float = 0; var_56_float = 0; var_57_float = 0; var_58_float = 0; var_59_float = 0; var_60_float = 0; var_61_object = Obj(); var_62_bool = 0; // 0x1fa PushV
	var_63_object = Obj(); // 0x1fb PushV
	func_261(var_63_object); // 0x1fc NEW_2
	if(var_63_object == 0) goto Label_513; // 0x1fe JumpB
	var_28_bool = 0; // 0x1ff MovB
	return 34; // 0x200 Return
	
Label_513:
	var_101_object = Obj(); // 0x201 PushV
	func_213(var_101_object); // 0x202 NEW_2
	var_46_object = var_101_object; // 0x203 Mov
	var_116_object = Obj(); // 0x205 PushV
	func_237(var_116_object); // 0x206 NEW_2
	var_47_object = var_116_object; // 0x207 Mov
	var_131_bool = 0; // 0x209 PushV
	var_131_bool = 1; // 0x20a MovB
	var_132_bool = var_46_object == 0; // 0x20b Not
	if(var_132_bool == 0) goto Label_528; // 0x20c JumpB
	var_133_bool = var_47_object == 0; // 0x20d Not
	if(var_133_bool == 0) goto Label_528; // 0x20e JumpB
	var_131_bool = 0; // 0x20f MovB
	
Label_528:
	if(var_131_bool == 0) goto Label_531; // 0x210 JumpB
	var_28_bool = 0; // 0x211 MovB
	return 34; // 0x212 Return
	
Label_531:
	var_134_int = 0; var_135_object = Obj(); // 0x213 PushV
	var_135_object = var_47_object; // 0x214 Mov
	func_195(var_134_int, var_135_object); // 0x215 NEW_2
	var_147_int = 5; // 0x217 PushI
	var_148_bool = var_134_int == var_147_int; // 0x218 Eq
	if(var_148_bool == 0) goto Label_552; // 0x219 JumpB
	RemoveAllItems(); // 0x21a TObjFunc
	CreateInvItem(var_48_object); // 0x21c Func
	var_149_string = "burah_serum"; // 0x21e PushS
	SetItemName(var_149_string); // 0x21f ObjFunc
	var_150_int = 0; // 0x221 PushI
	var_151_int = 1; // 0x222 PushI
	AddItem(var_49_bool, var_48_object, var_150_int, var_151_int); // 0x223 TObjFunc
	var_28_bool = 1; // 0x225 MovB
	return 34; // 0x226 Return
	
Label_552:
	var_152_string = "im_inc"; // 0x228 PushS
	GetProperty(var_50_float, var_152_string); // 0x229 ObjFunc
	var_153_string = "hl_inc"; // 0x22b PushS
	GetProperty(var_51_float, var_153_string); // 0x22c ObjFunc
	var_154_int = 0; var_155_object = Obj(); // 0x22e PushV
	var_155_object = var_47_object; // 0x22f Mov
	func_195(var_154_int, var_155_object); // 0x230 NEW_2
	var_156_int = 1; // 0x232 PushI
	var_157_bool = var_154_int == var_156_int; // 0x233 Eq
	if(var_157_bool == 0) goto Label_567; // 0x234 JumpB
	var_52_float = 1; // 0x235 MovI
	var_54_float = var_51_float; // 0x236 Mov
	
Label_567:
	var_158_int = 0; var_159_object = Obj(); // 0x237 PushV
	var_159_object = var_47_object; // 0x238 Mov
	func_195(var_158_int, var_159_object); // 0x239 NEW_2
	var_160_int = 2; // 0x23b PushI
	var_161_bool = var_158_int == var_160_int; // 0x23c Eq
	if(var_161_bool == 0) goto Label_580; // 0x23d JumpB
	var_162_float = 1.0; // 0x23e PushF
	var_163_float = 1.0; // 0x23f PushF
	var_164_int = var_163_float - var_50_float; // 0x240 Sub
	var_57_float = var_162_float * var_164_int; // 0x241 Mult2
	var_52_float = var_57_float; // 0x242 Mov
	var_54_float = var_51_float; // 0x243 Mov
	
Label_580:
	var_165_int = 0; var_166_object = Obj(); // 0x244 PushV
	var_166_object = var_47_object; // 0x245 Mov
	func_195(var_165_int, var_166_object); // 0x246 NEW_2
	var_167_int = 3; // 0x248 PushI
	var_168_bool = var_165_int == var_167_int; // 0x249 Eq
	if(var_168_bool == 0) goto Label_593; // 0x24a JumpB
	var_169_float = 0.8; // 0x24b PushF
	var_170_float = 1.0; // 0x24c PushF
	var_171_int = var_170_float - var_50_float; // 0x24d Sub
	var_58_float = var_169_float * var_171_int; // 0x24e Mult2
	var_52_float = var_58_float; // 0x24f Mov
	var_54_float = var_51_float; // 0x250 Mov
	
Label_593:
	var_172_int = 0; var_173_object = Obj(); // 0x251 PushV
	var_173_object = var_47_object; // 0x252 Mov
	func_195(var_172_int, var_173_object); // 0x253 NEW_2
	var_174_int = 4; // 0x255 PushI
	var_175_bool = var_172_int == var_174_int; // 0x256 Eq
	if(var_175_bool == 0) goto Label_606; // 0x257 JumpB
	var_176_float = 0.5; // 0x258 PushF
	var_177_float = 1.0; // 0x259 PushF
	var_178_int = var_177_float - var_50_float; // 0x25a Sub
	var_59_float = var_176_float * var_178_int; // 0x25b Mult2
	var_52_float = var_59_float; // 0x25c Mov
	var_54_float = var_51_float; // 0x25d Mov
	
Label_606:
	var_179_int = 0; var_180_object = Obj(); // 0x25e PushV
	var_180_object = var_47_object; // 0x25f Mov
	func_195(var_179_int, var_180_object); // 0x260 NEW_2
	var_181_int = 6; // 0x262 PushI
	var_182_bool = var_179_int == var_181_int; // 0x263 Eq
	if(var_182_bool == 0) goto Label_619; // 0x264 JumpB
	var_183_float = 0.3; // 0x265 PushF
	var_184_float = 1.0; // 0x266 PushF
	var_185_int = var_184_float - var_50_float; // 0x267 Sub
	var_60_float = var_183_float * var_185_int; // 0x268 Mult2
	var_52_float = var_60_float; // 0x269 Mov
	var_54_float = var_51_float; // 0x26a Mov
	
Label_619:
	var_186_int = 1; // 0x26b PushI
	var_187_bool = var_52_float > var_186_int; // 0x26c GT
	if(var_187_bool == 0) goto Label_623; // 0x26d JumpB
	var_52_float = 1; // 0x26e MovI
	
Label_623:
	var_188_float = 0.03; // 0x26f PushF
	var_189_bool = var_52_float < var_188_float; // 0x270 LT
	if(var_189_bool == 0) goto Label_627; // 0x271 JumpB
	var_52_float = 0.03; // 0x272 MovF
	
Label_627:
	var_190_int = -1; // 0x273 PushI
	var_191_bool = var_54_float < var_190_int; // 0x274 LT
	if(var_191_bool == 0) goto Label_631; // 0x275 JumpB
	var_54_float = -1; // 0x276 MovI
	
Label_631:
	RemoveAllItems(); // 0x277 TObjFunc
	CreateInvItem(var_61_object); // 0x279 Func
	var_192_string = "organ_combination"; // 0x27b PushS
	SetItemName(var_192_string); // 0x27c ObjFunc
	var_193_string = "DiseaseRate"; // 0x27e PushS
	SetProperty(var_193_string, var_52_float); // 0x27f ObjFunc
	var_194_string = "HealthIncrease"; // 0x281 PushS
	SetProperty(var_194_string, var_54_float); // 0x282 ObjFunc
	var_195_int = 0; // 0x284 PushI
	var_196_int = 1; // 0x285 PushI
	AddItem(var_62_bool, var_61_object, var_195_int, var_196_int); // 0x286 TObjFunc
	var_28_bool = 1; // 0x288 MovB
	return 34; // 0x289 Return
}


