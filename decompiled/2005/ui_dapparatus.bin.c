task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int)
{
	DestroyWindow(); // 0x2ae Func
	return 0; // 0x2b0 Return
}


task_0_event_1(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_float)
{
	var_6_int = 0; // 0x2b2 PushV
	var_6_int = var_0_int; // 0x2b3 MovT
	func_910(var_6_int); // 0x2b4 NEW_2
	func_841(); // 0x2b7 NEW_2
	func_61(); // 0x2ba NEW_2
	return 0; // 0x2bc Return
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_int, var_6_string, var_7_object)
{
	var_8_bool = 0; var_9_int = 0; var_10_int = 0; var_11_object = Obj(); var_12_int = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_int = 0; var_17_object = Obj(); var_18_int = 0; var_19_object = Obj(); // 0x2bd PushV
	var_14_bool = 0; // 0x2be MovB
	var_20_string = "button_weapon"; // 0x2bf PushS
	var_21_bool = var_6_string == var_20_string; // 0x2c0 Eq
	if(var_21_bool == 0) goto Label_712; // 0x2c1 JumpB
	var_22_int = 0; // 0x2c2 PushV
	var_22_int = 0; // 0x2c3 MovI
	func_816(var_19_object, var_22_int); // 0x2c4 NEW_2
	var_14_bool = 1; // 0x2c6 MovB
	goto Label_804; // 0x2c7 Jump
	
Label_804:
	var_57_bool = var_14_bool == 0; // 0x324 Not
	if(var_57_bool == 0) goto Label_813; // 0x325 JumpB
	var_58_bool = 0; var_59_int = 0; var_60_string = ""; var_61_object = Obj(); // 0x326 PushV
	var_59_int = var_5_int; // 0x327 Mov
	var_60_string = var_6_string; // 0x328 Mov
	var_61_object = var_7_object; // 0x329 Mov
	func_29(var_60_string, var_61_object); // 0x32a NEW_2
	var_14_bool = var_58_bool; // 0x32b Mov
	
Label_813:
	var_315_bool = var_14_bool; // 0x32d Push
	if(var_315_bool == 0) goto Label_815; // 0x32e JumpB
	
Label_815:
	return 12; // 0x32f Return
	
Label_712:
	var_316_string = "button_clothes"; // 0x2c8 PushS
	var_317_bool = var_6_string == var_316_string; // 0x2c9 Eq
	if(var_317_bool == 0) goto Label_721; // 0x2ca JumpB
	var_318_int = 0; // 0x2cb PushV
	var_318_int = 1; // 0x2cc MovI
	func_816(var_19_object, var_318_int); // 0x2cd NEW_2
	var_14_bool = 1; // 0x2cf MovB
	goto Label_804; // 0x2d0 Jump
	
Label_721:
	var_319_string = "button_medcine"; // 0x2d1 PushS
	var_320_bool = var_6_string == var_319_string; // 0x2d2 Eq
	if(var_320_bool == 0) goto Label_730; // 0x2d3 JumpB
	var_321_int = 0; // 0x2d4 PushV
	var_321_int = 2; // 0x2d5 MovI
	func_816(var_19_object, var_321_int); // 0x2d6 NEW_2
	var_14_bool = 1; // 0x2d8 MovB
	goto Label_804; // 0x2d9 Jump
	
Label_730:
	var_322_string = "button_food"; // 0x2da PushS
	var_323_bool = var_6_string == var_322_string; // 0x2db Eq
	if(var_323_bool == 0) goto Label_739; // 0x2dc JumpB
	var_324_int = 0; // 0x2dd PushV
	var_324_int = 3; // 0x2de MovI
	func_816(var_19_object, var_324_int); // 0x2df NEW_2
	var_14_bool = 1; // 0x2e1 MovB
	goto Label_804; // 0x2e2 Jump
	
Label_739:
	var_325_string = "button_other"; // 0x2e3 PushS
	var_326_bool = var_6_string == var_325_string; // 0x2e4 Eq
	if(var_326_bool == 0) goto Label_748; // 0x2e5 JumpB
	var_327_int = 0; // 0x2e6 PushV
	var_327_int = 4; // 0x2e7 MovI
	func_816(var_19_object, var_327_int); // 0x2e8 NEW_2
	var_14_bool = 1; // 0x2ea MovB
	goto Label_804; // 0x2eb Jump
	
Label_748:
	var_328_string = "button_detector"; // 0x2ec PushS
	var_329_bool = var_6_string == var_328_string; // 0x2ed Eq
	if(var_329_bool == 0) goto Label_752; // 0x2ee JumpB
	goto Label_804; // 0x2ef Jump
	
Label_752:
	var_330_string = "button_anticeptic"; // 0x2f0 PushS
	var_331_bool = var_6_string == var_330_string; // 0x2f1 Eq
	if(var_331_bool == 0) goto Label_756; // 0x2f2 JumpB
	goto Label_804; // 0x2f3 Jump
	
Label_756:
	var_332_int = 0; // 0x2f4 PushI
	var_333_bool = var_5_int != var_332_int; // 0x2f5 Neq
	if(var_333_bool == 0) goto Label_765; // 0x2f6 JumpB
	var_334_string = "noinv_drop"; // 0x2f7 PushS
	GetVariable(var_334_string, var_15_int); // 0x2f8 Func
	var_335_int = var_15_int; // 0x2fa Push
	if(var_335_int == 0) goto Label_765; // 0x2fb JumpB
	return 12; // 0x2fc Return
	
Label_765:
	var_16_int = 0; // 0x2fd MovI
	
Label_766:
	var_336_int = 12; // 0x2fe PushI
	var_337_bool = var_16_int < var_336_int; // 0x2ff LT
	if(var_337_bool == 0) goto Label_804; // 0x300 JumpB
	var_338_string = ""; var_339_int = 0; // 0x301 PushV
	var_339_int = var_16_int; // 0x302 Mov
	func_997(var_338_string, var_339_int); // 0x303 NEW_2
	var_350_bool = var_6_string == var_338_string; // 0x305 Eq
	if(var_350_bool == 0) goto Label_801; // 0x306 JumpB
	var_351_object = Obj(); // 0x307 PushV
	func_27(var_19_object, var_351_object); // 0x308 NEW_2
	var_17_object = var_351_object; // 0x309 Mov
	GetItemCount(var_18_int, var_0_int); // 0x30b ObjFunc
	var_352_bool = var_18_int > var_16_int; // 0x30d GT
	if(var_352_bool == 0) goto Label_799; // 0x30e JumpB
	GetItem(var_19_object, var_16_int, var_0_int); // 0x30f ObjFunc
	var_353_bool = 0; var_354_object = Obj(); // 0x311 PushV
	var_354_object = var_19_object; // 0x312 Mov
	func_71(var_353_bool, var_354_object); // 0x313 NEW_2
	var_359_bool = var_353_bool == 0; // 0x315 Not
	if(var_359_bool == 0) goto Label_798; // 0x316 JumpB
	var_360_bool = 0; var_361_int = 0; var_362_bool = 0; // 0x317 PushV
	var_361_int = var_16_int; // 0x318 Mov
	var_363_int = 0; // 0x319 PushI
	var_362_bool = var_5_int == var_363_int; // 0x31a Eq2
	func_89(var_360_bool, var_361_int, var_362_bool); // 0x31b NEW_2
	var_14_bool = var_360_bool; // 0x31c Mov
	
Label_798:
	var_19_object = 0; // 0x31e SetNull
	
Label_799:
	goto Label_804; // 0x31f Jump
	
Label_801:
	var_399_int = 1; // 0x321 PushI
	var_16_int = var_16_int + var_399_int; // 0x322 Add2
	goto Label_766; // 0x323 Jump
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


func_130(var_0_int, var_371_bool, var_372_object, var_373_int)
{
	var_374_object = Obj(); var_375_bool = 0; var_376_object = Obj(); var_377_bool = 0; // 0x82 PushV
	var_378_object = Obj(); // 0x83 PushV
	func_213(var_378_object); // 0x84 NEW_2
	var_376_object = var_378_object; // 0x85 Mov
	var_379_object = var_376_object; // 0x87 Push
	if(var_379_object == 0) goto Label_139; // 0x88 JumpB
	var_371_bool = 0; // 0x89 MovB
	return 4; // 0x8a Return
	
Label_139:
	var_380_int = 0; // 0x8b PushI
	var_381_int = 1; // 0x8c PushI
	AddItem(var_377_bool, var_372_object, var_380_int, var_381_int); // 0x8d TObjFunc
	var_382_bool = var_377_bool == 0; // 0x8f Not
	if(var_382_bool == 0) goto Label_147; // 0x90 JumpB
	var_371_bool = 0; // 0x91 MovB
	return 4; // 0x92 Return
	
Label_147:
	var_383_int = 1; // 0x93 PushI
	RemoveItem(var_373_int, var_383_int, var_0_int); // 0x94 TObjFunc
	var_371_bool = 1; // 0x96 MovB
	return 4; // 0x97 Return
}


func_1018(var_74_string, var_75_object)
{
	var_76_int = 0; var_77_string = ""; var_78_int = 0; var_79_string = ""; // 0x3fa PushV
	var_80_int = 0; var_81_object = Obj(); // 0x3fb PushV
	var_81_object = var_75_object; // 0x3fc Mov
	func_1013(var_81_object); // 0x3fd NEW_2
	var_78_int = var_80_int; // 0x3fe Mov
	GetInvItemName(var_79_string, var_78_int); // 0x400 Func
	var_74_string = var_79_string; // 0x402 Mov
	return 4; // 0x403 Return
}


func_261(var_99_object)
{
	var_100_int = 0; var_101_int = 0; var_102_int = 0; var_103_object = Obj(); var_104_object = Obj(); var_105_int = 0; var_106_int = 0; var_107_int = 0; var_108_object = Obj(); var_109_object = Obj(); // 0x105 PushV
	GetItemCount(var_105_int); // 0x106 TObjFunc
	var_106_int = 0; // 0x108 MovI
	var_107_int = 0; // 0x109 MovI
	
Label_266:
	var_110_bool = var_107_int < var_105_int; // 0x10a LT
	if(var_110_bool == 0) goto Label_292; // 0x10b JumpB
	GetItem(var_108_object, var_107_int); // 0x10c TObjFunc
	var_111_bool = 0; // 0x10e PushV
	var_111_bool = 0; // 0x10f MovB
	var_112_bool = 0; var_113_object = Obj(); // 0x110 PushV
	var_113_object = var_108_object; // 0x111 Mov
	func_176(var_112_bool, var_113_object); // 0x112 NEW_2
	var_125_bool = var_112_bool == 0; // 0x114 Not
	if(var_125_bool == 0) goto Label_285; // 0x115 JumpB
	var_126_bool = 0; var_127_object = Obj(); // 0x116 PushV
	var_127_object = var_108_object; // 0x117 Mov
	func_184(var_126_bool, var_127_object); // 0x118 NEW_2
	var_135_bool = var_126_bool == 0; // 0x11a Not
	if(var_135_bool == 0) goto Label_285; // 0x11b JumpB
	var_111_bool = 1; // 0x11c MovB
	
Label_285:
	if(var_111_bool == 0) goto Label_288; // 0x11d JumpB
	var_99_object = var_108_object; // 0x11e Mov
	return 10; // 0x11f Return
	
Label_288:
	var_108_object = 0; // 0x120 SetNull
	var_136_int = 1; // 0x121 PushI
	var_107_int = var_107_int + var_136_int; // 0x122 Add2
	goto Label_266; // 0x123 Jump
	
Label_292:
	var_109_object = 0; // 0x124 SetNull
	var_99_object = var_109_object; // 0x125 Mov
	return 10; // 0x126 Return
}


func_391(var_261_bool)
{
	var_262_int = 0; var_263_bool = 0; var_264_int = 0; var_265_bool = 0; // 0x187 PushV
	var_266_int = 0; // 0x188 PushV
	func_296(var_266_int); // 0x189 NEW_2
	var_264_int = var_266_int; // 0x18a Mov
	var_277_int = -1; // 0x18c PushI
	var_278_bool = var_264_int == var_277_int; // 0x18d Eq
	if(var_278_bool == 0) goto Label_401; // 0x18e JumpB
	var_261_bool = 0; // 0x18f MovB
	return 4; // 0x190 Return
	
Label_401:
	var_279_object = Obj(); // 0x191 PushV
	func_213(var_279_object); // 0x192 NEW_2
	var_280_int = 2; // 0x194 PushI
	var_281_int = 1; // 0x195 PushI
	AddItem(var_265_bool, var_279_object, var_280_int, var_281_int); // 0x196 TObjFunc
	var_282_bool = var_265_bool == 0; // 0x198 Not
	if(var_282_bool == 0) goto Label_412; // 0x199 JumpB
	var_261_bool = 0; // 0x19a MovB
	return 4; // 0x19b Return
	
Label_412:
	var_283_int = 1; // 0x19c PushI
	RemoveItem(var_264_int, var_283_int); // 0x19d TObjFunc
	var_284_int = 0; // 0x19f PushV
	var_284_int = 2; // 0x1a0 MovI
	func_816(var_265_bool, var_284_int); // 0x1a1 NEW_2
	var_261_bool = 1; // 0x1a3 MovB
	return 4; // 0x1a4 Return
}


func_653(var_0_int, var_11_int)
{
	var_0_int = -1; // 0x28e TMovI
	var_12_int = 0; // 0x28f PushV
	var_12_int = var_11_int; // 0x290 Mov
	func_816(var_11_int, var_12_int); // 0x291 NEW_2
	var_47_int = 0; // 0x293 PushV
	var_47_int = var_0_int; // 0x294 MovT
	func_910(var_47_int); // 0x295 NEW_2
	func_841(); // 0x298 NEW_2
	var_134_string = "default"; // 0x29a PushS
	SetCursor(var_134_string); // 0x29b Func
	ShowCursor(); // 0x29d Func
	CaptureKeyboard(); // 0x29f Func
	var_135_bool = 0; // 0x2a1 PushB
	SetOwnerDraw(var_135_bool); // 0x2a2 Func
	var_136_bool = 1; // 0x2a4 PushB
	SetNeedUpdate(var_136_bool); // 0x2a5 Func
	func_88(); // 0x2a8 NEW_2
	ProcessEvents(); // 0x2aa Func
	return 0; // 0x2ac Return
}


func_910(var_47_int)
{
	var_48_object = Obj(); var_49_int = 0; var_50_int = 0; var_51_object = Obj(); var_52_int = 0; var_53_bool = 0; var_54_bool = 0; var_55_object = Obj(); var_56_int = 0; var_57_int = 0; var_58_object = Obj(); var_59_int = 0; var_60_bool = 0; var_61_bool = 0; // 0x38e PushV
	var_62_object = Obj(); // 0x38f PushV
	func_27(var_61_bool, var_62_object); // 0x390 NEW_2
	var_55_object = var_62_object; // 0x391 Mov
	GetItemCount(var_56_int, var_47_int); // 0x393 ObjFunc
	var_57_int = 0; // 0x395 MovI
	
Label_918:
	var_63_int = 12; // 0x396 PushI
	var_64_bool = var_57_int < var_63_int; // 0x397 LT
	if(var_64_bool == 0) goto Label_995; // 0x398 JumpB
	var_65_bool = var_57_int < var_56_int; // 0x399 LT
	if(var_65_bool == 0) goto Label_985; // 0x39a JumpB
	GetItem(var_58_object, var_57_int, var_47_int); // 0x39b ObjFunc
	GetItemAmount(var_59_int, var_57_int, var_47_int); // 0x39d ObjFunc
	var_66_bool = 0; var_67_int = 0; var_68_int = 0; // 0x39f PushV
	var_67_int = var_57_int; // 0x3a0 Mov
	var_68_int = var_47_int; // 0x3a1 Mov
	func_85(var_68_int); // 0x3a2 NEW_2
	var_60_bool = var_66_bool; // 0x3a3 Mov
	var_69_bool = 0; var_70_object = Obj(); // 0x3a5 PushV
	var_70_object = var_58_object; // 0x3a6 Mov
	func_71(var_69_bool, var_70_object); // 0x3a7 NEW_2
	var_61_bool = var_69_bool; // 0x3a8 Mov
	var_93_bool = var_60_bool; // 0x3aa Push
	if(var_93_bool == 0) goto Label_958; // 0x3ab JumpB
	var_94_bool = var_61_bool; // 0x3ac Push
	if(var_94_bool == 0) goto Label_950; // 0x3ad JumpB
	var_95_int = 0; // 0x3ae PushI
	var_96_string = ""; var_97_int = 0; // 0x3af PushV
	var_97_int = var_57_int; // 0x3b0 Mov
	func_997(var_96_string, var_97_int); // 0x3b1 NEW_2
	SendMessage(var_95_int, var_96_string, var_58_object); // 0x3b3 Func
	goto Label_957; // 0x3b5 Jump
	
Label_957:
	goto Label_975; // 0x3bd Jump
	
Label_975:
	var_108_int = 65536; // 0x3cf PushI
	var_109_int = var_59_int | var_108_int; // 0x3d0 Or
	var_110_string = ""; var_111_int = 0; // 0x3d1 PushV
	var_111_int = var_57_int; // 0x3d2 Mov
	func_997(var_110_string, var_111_int); // 0x3d3 NEW_2
	SendMessage(var_109_int, var_110_string); // 0x3d5 Func
	var_58_object = 0; // 0x3d7 SetNull
	goto Label_992; // 0x3d8 Jump
	
Label_992:
	var_112_int = 1; // 0x3e0 PushI
	var_57_int = var_57_int + var_112_int; // 0x3e1 Add2
	goto Label_918; // 0x3e2 Jump
	
Label_950:
	var_113_int = 16384; // 0x3b6 PushI
	var_114_string = ""; var_115_int = 0; // 0x3b7 PushV
	var_115_int = var_57_int; // 0x3b8 Mov
	func_997(var_114_string, var_115_int); // 0x3b9 NEW_2
	SendMessage(var_113_int, var_114_string, var_58_object); // 0x3bb Func
	
Label_958:
	var_116_bool = var_61_bool; // 0x3be Push
	if(var_116_bool == 0) goto Label_968; // 0x3bf JumpB
	var_117_int = 131072; // 0x3c0 PushI
	var_118_string = ""; var_119_int = 0; // 0x3c1 PushV
	var_119_int = var_57_int; // 0x3c2 Mov
	func_997(var_118_string, var_119_int); // 0x3c3 NEW_2
	SendMessage(var_117_int, var_118_string, var_58_object); // 0x3c5 Func
	goto Label_975; // 0x3c7 Jump
	
Label_968:
	var_120_int = 0; // 0x3c8 PushI
	var_121_string = ""; var_122_int = 0; // 0x3c9 PushV
	var_122_int = var_57_int; // 0x3ca Mov
	func_997(var_121_string, var_122_int); // 0x3cb NEW_2
	SendMessage(var_120_int, var_121_string, var_58_object); // 0x3cd Func
	
Label_985:
	var_123_int = 32768; // 0x3d9 PushI
	var_124_string = ""; var_125_int = 0; // 0x3da PushV
	var_125_int = var_57_int; // 0x3db Mov
	func_997(var_124_string, var_125_int); // 0x3dc NEW_2
	SendMessage(var_123_int, var_124_string); // 0x3de Func
	
Label_995:
	return 14; // 0x3e3 Return
}


func_153(var_0_int, var_386_bool, var_387_object, var_388_int)
{
	var_389_object = Obj(); var_390_bool = 0; var_391_object = Obj(); var_392_bool = 0; // 0x99 PushV
	var_393_object = Obj(); // 0x9a PushV
	func_237(var_393_object); // 0x9b NEW_2
	var_391_object = var_393_object; // 0x9c Mov
	var_394_object = var_391_object; // 0x9e Push
	if(var_394_object == 0) goto Label_162; // 0x9f JumpB
	var_386_bool = 0; // 0xa0 MovB
	return 4; // 0xa1 Return
	
Label_162:
	var_395_int = 0; // 0xa2 PushI
	var_396_int = 1; // 0xa3 PushI
	AddItem(var_392_bool, var_387_object, var_395_int, var_396_int); // 0xa4 TObjFunc
	var_397_bool = var_392_bool == 0; // 0xa6 Not
	if(var_397_bool == 0) goto Label_170; // 0xa7 JumpB
	var_386_bool = 0; // 0xa8 MovB
	return 4; // 0xa9 Return
	
Label_170:
	var_398_int = 1; // 0xaa PushI
	RemoveItem(var_388_int, var_398_int, var_0_int); // 0xab TObjFunc
	var_386_bool = 1; // 0xad MovB
	return 4; // 0xae Return
}


func_27(var_3_object, var_62_object)
{
	var_62_object = var_3_object; // 0x1b MovT
	return 0; // 0x1c Return
}


func_29(var_58_bool, var_60_string)
{
	var_62_string = "combine"; // 0x1e PushS
	var_63_bool = var_60_string == var_62_string; // 0x1f Eq
	if(var_63_bool == 0) goto Label_39; // 0x20 JumpB
	var_64_bool = 0; // 0x21 PushV
	func_506(var_64_bool); // 0x22 NEW_2
	var_58_bool = 1; // 0x24 MovB
	return 0; // 0x25 Return
	
Label_39:
	var_233_string = "input_organ"; // 0x27 PushS
	var_234_bool = var_60_string == var_233_string; // 0x28 Eq
	if(var_234_bool == 0) goto Label_46; // 0x29 JumpB
	var_235_bool = 0; // 0x2a PushV
	func_361(var_235_bool); // 0x2b NEW_2
	goto Label_59; // 0x2d Jump
	
Label_59:
	var_58_bool = 0; // 0x3b MovB
	return 0; // 0x3c Return
	
Label_46:
	var_259_string = "input_grass"; // 0x2e PushS
	var_260_bool = var_60_string == var_259_string; // 0x2f Eq
	if(var_260_bool == 0) goto Label_53; // 0x30 JumpB
	var_261_bool = 0; // 0x31 PushV
	func_391(var_261_bool); // 0x32 NEW_2
	goto Label_59; // 0x34 Jump
	
Label_53:
	var_285_string = "output"; // 0x35 PushS
	var_286_bool = var_60_string == var_285_string; // 0x36 Eq
	if(var_286_bool == 0) goto Label_59; // 0x37 JumpB
	var_287_bool = 0; // 0x38 PushV
	func_421(var_287_bool); // 0x39 NEW_2
}


func_421(var_287_bool)
{
	var_288_object = Obj(); var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_int = 0; var_293_bool = 0; // 0x1a5 PushV
	var_294_object = Obj(); // 0x1a6 PushV
	func_261(var_294_object); // 0x1a7 NEW_2
	var_291_object = var_294_object; // 0x1a8 Mov
	var_295_bool = var_291_object == 0; // 0x1aa Not
	if(var_295_bool == 0) goto Label_430; // 0x1ab JumpB
	var_287_bool = 0; // 0x1ac MovB
	return 6; // 0x1ad Return
	
Label_430:
	var_296_int = 0; // 0x1ae PushV
	func_338(var_296_int); // 0x1af NEW_2
	var_292_int = var_296_int; // 0x1b0 Mov
	var_310_int = 2; // 0x1b2 PushI
	var_311_int = 1; // 0x1b3 PushI
	AddItem(var_293_bool, var_291_object, var_310_int, var_311_int); // 0x1b4 TObjFunc
	var_312_bool = var_293_bool == 0; // 0x1b6 Not
	if(var_312_bool == 0) goto Label_442; // 0x1b7 JumpB
	var_287_bool = 0; // 0x1b8 MovB
	return 6; // 0x1b9 Return
	
Label_442:
	var_313_int = 1; // 0x1ba PushI
	RemoveItem(var_292_int, var_313_int); // 0x1bb TObjFunc
	var_314_int = 0; // 0x1bd PushV
	var_314_int = 2; // 0x1be MovI
	func_816(var_293_bool, var_314_int); // 0x1bf NEW_2
	var_287_bool = 1; // 0x1c1 MovB
	return 6; // 0x1c2 Return
}


func_296(var_266_int)
{
	var_267_int = 0; var_268_int = 0; var_269_object = Obj(); var_270_int = 0; var_271_int = 0; var_272_object = Obj(); // 0x128 PushV
	GetItemCount(var_270_int); // 0x129 TObjFunc
	var_271_int = 0; // 0x12b MovI
	
Label_300:
	var_273_bool = var_271_int < var_270_int; // 0x12c LT
	if(var_273_bool == 0) goto Label_315; // 0x12d JumpB
	GetItem(var_272_object, var_271_int); // 0x12e TObjFunc
	var_274_bool = 0; var_275_object = Obj(); // 0x130 PushV
	var_275_object = var_272_object; // 0x131 Mov
	func_176(var_274_bool, var_275_object); // 0x132 NEW_2
	if(var_274_bool == 0) goto Label_311; // 0x134 JumpB
	var_266_int = var_271_int; // 0x135 Mov
	return 6; // 0x136 Return
	
Label_311:
	var_272_object = 0; // 0x137 SetNull
	var_276_int = 1; // 0x138 PushI
	var_271_int = var_271_int + var_276_int; // 0x139 Add2
	goto Label_300; // 0x13a Jump
	
Label_315:
	var_266_int = -1; // 0x13b MovI
	return 6; // 0x13c Return
}


func_176(var_71_bool, var_72_object)
{
	var_73_string = "grass_combination"; // 0xb1 PushS
	var_74_string = ""; var_75_object = Obj(); // 0xb2 PushV
	var_75_object = var_72_object; // 0xb3 Mov
	func_1018(var_74_string, var_75_object); // 0xb4 NEW_2
	var_71_bool = var_73_string == var_74_string; // 0xb6 Eq2
	return 0; // 0xb7 Return
}


func_816(var_0_int, var_12_int)
{
	var_13_int = -1; // 0x331 PushI
	var_14_bool = var_12_int == var_13_int; // 0x332 Eq
	if(var_14_bool == 0) goto Label_821; // 0x333 JumpB
	return 0; // 0x334 Return
	
Label_821:
	var_15_bool = var_0_int == var_12_int; // 0x335 Eq
	if(var_15_bool == 0) goto Label_824; // 0x336 JumpB
	return 0; // 0x337 Return
	
Label_824:
	var_0_int = var_12_int; // 0x338 TMov
	var_16_int = 0; // 0x339 PushV
	var_16_int = var_0_int; // 0x33a MovT
	func_848(var_16_int); // 0x33b NEW_2
	return 0; // 0x33d Return
}


func_184(var_84_bool, var_85_object)
{
	var_86_int = 0; var_87_bool = 0; var_88_int = 0; var_89_bool = 0; // 0xb8 PushV
	var_90_int = 0; var_91_object = Obj(); // 0xb9 PushV
	var_91_object = var_85_object; // 0xba Mov
	func_1013(var_91_object); // 0xbb NEW_2
	var_88_int = var_90_int; // 0xbc Mov
	var_92_string = "Microscope"; // 0xbe PushS
	HasInvItemProperty(var_89_bool, var_88_int, var_92_string); // 0xbf Func
	var_84_bool = var_89_bool; // 0xc1 Mov
	return 4; // 0xc2 Return
}


func_317(var_240_int)
{
	var_241_int = 0; var_242_int = 0; var_243_object = Obj(); var_244_int = 0; var_245_int = 0; var_246_object = Obj(); // 0x13d PushV
	GetItemCount(var_244_int); // 0x13e TObjFunc
	var_245_int = 0; // 0x140 MovI
	
Label_321:
	var_247_bool = var_245_int < var_244_int; // 0x141 LT
	if(var_247_bool == 0) goto Label_336; // 0x142 JumpB
	GetItem(var_246_object, var_245_int); // 0x143 TObjFunc
	var_248_bool = 0; var_249_object = Obj(); // 0x145 PushV
	var_249_object = var_246_object; // 0x146 Mov
	func_184(var_248_bool, var_249_object); // 0x147 NEW_2
	if(var_248_bool == 0) goto Label_332; // 0x149 JumpB
	var_240_int = var_245_int; // 0x14a Mov
	return 6; // 0x14b Return
	
Label_332:
	var_246_object = 0; // 0x14c SetNull
	var_250_int = 1; // 0x14d PushI
	var_245_int = var_245_int + var_250_int; // 0x14e Add2
	goto Label_321; // 0x14f Jump
	
Label_336:
	var_240_int = -1; // 0x150 MovI
	return 6; // 0x151 Return
}


func_61()
{
	func_452(); // 0x3e NEW_2
	func_470(); // 0x41 NEW_2
	func_488(); // 0x44 NEW_2
	return 0; // 0x46 Return
}


func_830(var_126_int)
{
	var_127_object = Obj(); var_128_int = 0; var_129_object = Obj(); var_130_int = 0; // 0x33e PushV
	var_131_object = Obj(); // 0x33f PushV
	func_27(var_130_int, var_131_object); // 0x340 NEW_2
	var_129_object = var_131_object; // 0x341 Mov
	var_132_string = "money"; // 0x343 PushS
	GetProperty(var_132_string, var_130_int); // 0x344 ObjFunc
	var_126_int = var_130_int; // 0x346 Mov
	return 4; // 0x347 Return
}


func_195(var_170_int, var_171_object)
{
	var_172_int = 0; var_173_bool = 0; var_174_int = 0; var_175_int = 0; var_176_bool = 0; var_177_int = 0; // 0xc3 PushV
	var_178_int = 0; var_179_object = Obj(); // 0xc4 PushV
	var_179_object = var_171_object; // 0xc5 Mov
	func_1013(var_179_object); // 0xc6 NEW_2
	var_175_int = var_178_int; // 0xc7 Mov
	var_180_string = "Microscope"; // 0xc9 PushS
	HasInvItemProperty(var_176_bool, var_175_int, var_180_string); // 0xca Func
	var_181_bool = var_176_bool == 0; // 0xcc Not
	if(var_181_bool == 0) goto Label_208; // 0xcd JumpB
	var_170_int = 0; // 0xce MovB
	return 6; // 0xcf Return
	
Label_208:
	var_182_string = "Microscope"; // 0xd0 PushS
	GetInvItemProperty(var_177_int, var_175_int, var_182_string); // 0xd1 Func
	var_170_int = var_177_int; // 0xd3 Mov
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


func_71(var_69_bool, var_70_object)
{
	var_71_bool = 0; var_72_object = Obj(); // 0x48 PushV
	var_72_object = var_70_object; // 0x49 Mov
	func_176(var_71_bool, var_72_object); // 0x4a NEW_2
	if(var_71_bool == 0) goto Label_79; // 0x4c JumpB
	var_69_bool = 0; // 0x4d MovB
	return 0; // 0x4e Return
	
Label_79:
	var_84_bool = 0; var_85_object = Obj(); // 0x4f PushV
	var_85_object = var_70_object; // 0x50 Mov
	func_184(var_84_bool, var_85_object); // 0x51 NEW_2
	var_69_bool = !var_84_bool; // 0x53 Not2
	return 0; // 0x54 Return
}


func_841()
{
	var_126_int = 0; // 0x349 PushV
	func_830(var_126_int); // 0x34a NEW_2
	var_133_string = "money"; // 0x34c PushS
	SendMessage(var_126_int, var_133_string); // 0x34d Func
	return 0; // 0x34f Return
}


func_848(var_16_int)
{
	var_17_int = 0; // 0x351 PushI
	var_18_bool = var_16_int != var_17_int; // 0x352 Neq
	if(var_18_bool == 0) goto Label_857; // 0x353 JumpB
	var_19_int = 0; // 0x354 PushI
	var_20_string = "button_weapon"; // 0x355 PushS
	SendMessage(var_19_int, var_20_string); // 0x356 Func
	goto Label_861; // 0x358 Jump
	
Label_861:
	var_21_int = 1; // 0x35d PushI
	var_22_bool = var_16_int != var_21_int; // 0x35e Neq
	if(var_22_bool == 0) goto Label_869; // 0x35f JumpB
	var_23_int = 0; // 0x360 PushI
	var_24_string = "button_clothes"; // 0x361 PushS
	SendMessage(var_23_int, var_24_string); // 0x362 Func
	goto Label_873; // 0x364 Jump
	
Label_873:
	var_25_int = 2; // 0x369 PushI
	var_26_bool = var_16_int != var_25_int; // 0x36a Neq
	if(var_26_bool == 0) goto Label_881; // 0x36b JumpB
	var_27_int = 0; // 0x36c PushI
	var_28_string = "button_medcine"; // 0x36d PushS
	SendMessage(var_27_int, var_28_string); // 0x36e Func
	goto Label_885; // 0x370 Jump
	
Label_885:
	var_29_int = 3; // 0x375 PushI
	var_30_bool = var_16_int != var_29_int; // 0x376 Neq
	if(var_30_bool == 0) goto Label_893; // 0x377 JumpB
	var_31_int = 0; // 0x378 PushI
	var_32_string = "button_food"; // 0x379 PushS
	SendMessage(var_31_int, var_32_string); // 0x37a Func
	goto Label_897; // 0x37c Jump
	
Label_897:
	var_33_int = 4; // 0x381 PushI
	var_34_bool = var_16_int != var_33_int; // 0x382 Neq
	if(var_34_bool == 0) goto Label_905; // 0x383 JumpB
	var_35_int = 0; // 0x384 PushI
	var_36_string = "button_other"; // 0x385 PushS
	SendMessage(var_35_int, var_36_string); // 0x386 Func
	goto Label_909; // 0x388 Jump
	
Label_909:
	return 0; // 0x38d Return
	
Label_905:
	var_37_int = 1; // 0x389 PushI
	var_38_string = "button_other"; // 0x38a PushS
	SendMessage(var_37_int, var_38_string); // 0x38b Func
	
Label_893:
	var_39_int = 1; // 0x37d PushI
	var_40_string = "button_food"; // 0x37e PushS
	SendMessage(var_39_int, var_40_string); // 0x37f Func
	
Label_881:
	var_41_int = 1; // 0x371 PushI
	var_42_string = "button_medcine"; // 0x372 PushS
	SendMessage(var_41_int, var_42_string); // 0x373 Func
	
Label_869:
	var_43_int = 1; // 0x365 PushI
	var_44_string = "button_clothes"; // 0x366 PushS
	SendMessage(var_43_int, var_44_string); // 0x367 Func
	
Label_857:
	var_45_int = 1; // 0x359 PushI
	var_46_string = "button_weapon"; // 0x35a PushS
	SendMessage(var_45_int, var_46_string); // 0x35b Func
}


func_338(var_296_int)
{
	var_297_int = 0; var_298_int = 0; var_299_int = 0; var_300_object = Obj(); var_301_int = 0; var_302_int = 0; var_303_int = 0; var_304_object = Obj(); // 0x152 PushV
	GetItemCount(var_301_int); // 0x153 TObjFunc
	var_302_int = 0; // 0x155 MovI
	var_303_int = 0; // 0x156 MovI
	
Label_343:
	var_305_bool = var_303_int < var_301_int; // 0x157 LT
	if(var_305_bool == 0) goto Label_359; // 0x158 JumpB
	GetItem(var_304_object, var_303_int); // 0x159 TObjFunc
	var_306_bool = 0; var_307_object = Obj(); // 0x15b PushV
	var_307_object = var_304_object; // 0x15c Mov
	func_176(var_306_bool, var_307_object); // 0x15d NEW_2
	var_308_bool = var_306_bool == 0; // 0x15f Not
	if(var_308_bool == 0) goto Label_355; // 0x160 JumpB
	var_296_int = var_303_int; // 0x161 Mov
	return 8; // 0x162 Return
	
Label_355:
	var_304_object = 0; // 0x163 SetNull
	var_309_int = 1; // 0x164 PushI
	var_303_int = var_303_int + var_309_int; // 0x165 Add2
	goto Label_343; // 0x166 Jump
	
Label_359:
	var_296_int = -1; // 0x167 MovI
	return 8; // 0x168 Return
}


func_213(var_137_object)
{
	var_138_int = 0; var_139_int = 0; var_140_int = 0; var_141_object = Obj(); var_142_object = Obj(); var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_object = Obj(); var_147_object = Obj(); // 0xd5 PushV
	GetItemCount(var_143_int); // 0xd6 TObjFunc
	var_144_int = 0; // 0xd8 MovI
	var_145_int = 0; // 0xd9 MovI
	
Label_218:
	var_148_bool = var_145_int < var_143_int; // 0xda LT
	if(var_148_bool == 0) goto Label_233; // 0xdb JumpB
	GetItem(var_146_object, var_145_int); // 0xdc TObjFunc
	var_149_bool = 0; var_150_object = Obj(); // 0xde PushV
	var_150_object = var_146_object; // 0xdf Mov
	func_176(var_149_bool, var_150_object); // 0xe0 NEW_2
	if(var_149_bool == 0) goto Label_229; // 0xe2 JumpB
	var_137_object = var_146_object; // 0xe3 Mov
	return 10; // 0xe4 Return
	
Label_229:
	var_146_object = 0; // 0xe5 SetNull
	var_151_int = 1; // 0xe6 PushI
	var_145_int = var_145_int + var_151_int; // 0xe7 Add2
	goto Label_218; // 0xe8 Jump
	
Label_233:
	var_147_object = 0; // 0xe9 SetNull
	var_137_object = var_147_object; // 0xea Mov
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


func_85(var_66_bool)
{
	var_66_bool = 0; // 0x56 MovB
	return 0; // 0x57 Return
}


func_88()
{
	return 0; // 0x58 Return
}


func_89(var_360_bool, var_361_int, var_362_bool)
{
	var_364_bool = var_362_bool; // 0x5a Push
	if(var_364_bool == 0) goto Label_98; // 0x5b JumpB
	var_365_bool = 0; var_366_int = 0; // 0x5c PushV
	var_366_int = var_361_int; // 0x5d Mov
	func_100(var_362_bool, var_365_bool, var_366_int); // 0x5e NEW_2
	var_360_bool = var_365_bool; // 0x5f Mov
	return 0; // 0x61 Return
	
Label_98:
	var_360_bool = 0; // 0x62 MovB
	return 0; // 0x63 Return
}


func_100(var_0_int, var_365_bool, var_366_int)
{
	var_367_object = Obj(); var_368_object = Obj(); // 0x64 PushV
	GetItem(var_368_object, var_366_int, var_0_int); // 0x65 TObjFunc
	var_369_bool = 0; var_370_object = Obj(); // 0x67 PushV
	var_370_object = var_368_object; // 0x68 Mov
	func_176(var_369_bool, var_370_object); // 0x69 NEW_2
	if(var_369_bool == 0) goto Label_115; // 0x6b JumpB
	var_371_bool = 0; var_372_object = Obj(); var_373_int = 0; // 0x6c PushV
	var_372_object = var_368_object; // 0x6d Mov
	var_373_int = var_366_int; // 0x6e Mov
	func_130(var_368_object, var_371_bool, var_372_object, var_373_int); // 0x6f NEW_2
	var_365_bool = var_371_bool; // 0x70 Mov
	return 2; // 0x72 Return
	
Label_115:
	var_384_bool = 0; var_385_object = Obj(); // 0x73 PushV
	var_385_object = var_368_object; // 0x74 Mov
	func_184(var_384_bool, var_385_object); // 0x75 NEW_2
	if(var_384_bool == 0) goto Label_127; // 0x77 JumpB
	var_386_bool = 0; var_387_object = Obj(); var_388_int = 0; // 0x78 PushV
	var_387_object = var_368_object; // 0x79 Mov
	var_388_int = var_366_int; // 0x7a Mov
	func_153(var_368_object, var_386_bool, var_387_object, var_388_int); // 0x7b NEW_2
	var_365_bool = var_386_bool; // 0x7c Mov
	return 2; // 0x7e Return
	
Label_127:
	var_365_bool = 0; // 0x7f MovB
	return 2; // 0x80 Return
}


func_997(var_96_string, var_97_int)
{
	var_98_int = 1; // 0x3e6 PushI
	var_99_int = var_97_int + var_98_int; // 0x3e7 Add
	var_100_int = 10; // 0x3e8 PushI
	var_101_bool = var_99_int < var_100_int; // 0x3e9 LT
	if(var_101_bool == 0) goto Label_1008; // 0x3ea JumpB
	var_102_string = "slot0"; // 0x3eb PushS
	var_103_int = 1; // 0x3ec PushI
	var_104_int = var_97_int + var_103_int; // 0x3ed Add
	var_96_string = var_102_string + var_104_int; // 0x3ee Add2
	return 0; // 0x3ef Return
	
Label_1008:
	var_105_string = "slot"; // 0x3f0 PushS
	var_106_int = 1; // 0x3f1 PushI
	var_107_int = var_97_int + var_106_int; // 0x3f2 Add
	var_96_string = var_105_string + var_107_int; // 0x3f3 Add2
	return 0; // 0x3f4 Return
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


func_361(var_235_bool)
{
	var_236_int = 0; var_237_bool = 0; var_238_int = 0; var_239_bool = 0; // 0x169 PushV
	var_240_int = 0; // 0x16a PushV
	func_317(var_240_int); // 0x16b NEW_2
	var_238_int = var_240_int; // 0x16c Mov
	var_251_int = -1; // 0x16e PushI
	var_252_bool = var_238_int == var_251_int; // 0x16f Eq
	if(var_252_bool == 0) goto Label_371; // 0x170 JumpB
	var_235_bool = 0; // 0x171 MovB
	return 4; // 0x172 Return
	
Label_371:
	var_253_object = Obj(); // 0x173 PushV
	func_237(var_253_object); // 0x174 NEW_2
	var_254_int = 4; // 0x176 PushI
	var_255_int = 1; // 0x177 PushI
	AddItem(var_239_bool, var_253_object, var_254_int, var_255_int); // 0x178 TObjFunc
	var_256_bool = var_239_bool == 0; // 0x17a Not
	if(var_256_bool == 0) goto Label_382; // 0x17b JumpB
	var_235_bool = 0; // 0x17c MovB
	return 4; // 0x17d Return
	
Label_382:
	var_257_int = 1; // 0x17e PushI
	RemoveItem(var_238_int, var_257_int); // 0x17f TObjFunc
	var_258_int = 0; // 0x181 PushV
	var_258_int = 4; // 0x182 MovI
	func_816(var_239_bool, var_258_int); // 0x183 NEW_2
	var_235_bool = 1; // 0x185 MovB
	return 4; // 0x186 Return
}


func_237(var_152_object)
{
	var_153_int = 0; var_154_int = 0; var_155_int = 0; var_156_object = Obj(); var_157_object = Obj(); var_158_int = 0; var_159_int = 0; var_160_int = 0; var_161_object = Obj(); var_162_object = Obj(); // 0xed PushV
	GetItemCount(var_158_int); // 0xee TObjFunc
	var_159_int = 0; // 0xf0 MovI
	var_160_int = 0; // 0xf1 MovI
	
Label_242:
	var_163_bool = var_160_int < var_158_int; // 0xf2 LT
	if(var_163_bool == 0) goto Label_257; // 0xf3 JumpB
	GetItem(var_161_object, var_160_int); // 0xf4 TObjFunc
	var_164_bool = 0; var_165_object = Obj(); // 0xf6 PushV
	var_165_object = var_161_object; // 0xf7 Mov
	func_184(var_164_bool, var_165_object); // 0xf8 NEW_2
	if(var_164_bool == 0) goto Label_253; // 0xfa JumpB
	var_152_object = var_161_object; // 0xfb Mov
	return 10; // 0xfc Return
	
Label_253:
	var_161_object = 0; // 0xfd SetNull
	var_166_int = 1; // 0xfe PushI
	var_160_int = var_160_int + var_166_int; // 0xff Add2
	goto Label_242; // 0x100 Jump
	
Label_257:
	var_162_object = 0; // 0x101 SetNull
	var_152_object = var_162_object; // 0x102 Mov
	return 10; // 0x103 Return
}


func_1013(var_80_int)
{
	var_82_int = 0; var_83_int = 0; // 0x3f5 PushV
	GetItemID(var_83_int); // 0x3f6 ObjFunc
	var_80_int = var_83_int; // 0x3f8 Mov
	return 2; // 0x3f9 Return
}


func_506(var_64_bool)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj(); var_68_bool = 0; var_69_float = 0; var_70_float = 0; var_71_float = 0; var_72_float = 0; var_73_float = 0; var_74_float = 0; var_75_float = 0; var_76_float = 0; var_77_float = 0; var_78_float = 0; var_79_float = 0; var_80_object = Obj(); var_81_bool = 0; var_82_object = Obj(); var_83_object = Obj(); var_84_object = Obj(); var_85_bool = 0; var_86_float = 0; var_87_float = 0; var_88_float = 0; var_89_float = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0; var_93_float = 0; var_94_float = 0; var_95_float = 0; var_96_float = 0; var_97_object = Obj(); var_98_bool = 0; // 0x1fa PushV
	var_99_object = Obj(); // 0x1fb PushV
	func_261(var_99_object); // 0x1fc NEW_2
	if(var_99_object == 0) goto Label_513; // 0x1fe JumpB
	var_64_bool = 0; // 0x1ff MovB
	return 34; // 0x200 Return
	
Label_513:
	var_137_object = Obj(); // 0x201 PushV
	func_213(var_137_object); // 0x202 NEW_2
	var_82_object = var_137_object; // 0x203 Mov
	var_152_object = Obj(); // 0x205 PushV
	func_237(var_152_object); // 0x206 NEW_2
	var_83_object = var_152_object; // 0x207 Mov
	var_167_bool = 0; // 0x209 PushV
	var_167_bool = 1; // 0x20a MovB
	var_168_bool = var_82_object == 0; // 0x20b Not
	if(var_168_bool == 0) goto Label_528; // 0x20c JumpB
	var_169_bool = var_83_object == 0; // 0x20d Not
	if(var_169_bool == 0) goto Label_528; // 0x20e JumpB
	var_167_bool = 0; // 0x20f MovB
	
Label_528:
	if(var_167_bool == 0) goto Label_531; // 0x210 JumpB
	var_64_bool = 0; // 0x211 MovB
	return 34; // 0x212 Return
	
Label_531:
	var_170_int = 0; var_171_object = Obj(); // 0x213 PushV
	var_171_object = var_83_object; // 0x214 Mov
	func_195(var_170_int, var_171_object); // 0x215 NEW_2
	var_183_int = 5; // 0x217 PushI
	var_184_bool = var_170_int == var_183_int; // 0x218 Eq
	if(var_184_bool == 0) goto Label_552; // 0x219 JumpB
	RemoveAllItems(); // 0x21a TObjFunc
	CreateInvItem(var_84_object); // 0x21c Func
	var_185_string = "burah_serum"; // 0x21e PushS
	SetItemName(var_185_string); // 0x21f ObjFunc
	var_186_int = 0; // 0x221 PushI
	var_187_int = 1; // 0x222 PushI
	AddItem(var_85_bool, var_84_object, var_186_int, var_187_int); // 0x223 TObjFunc
	var_64_bool = 1; // 0x225 MovB
	return 34; // 0x226 Return
	
Label_552:
	var_188_string = "im_inc"; // 0x228 PushS
	GetProperty(var_86_float, var_188_string); // 0x229 ObjFunc
	var_189_string = "hl_inc"; // 0x22b PushS
	GetProperty(var_87_float, var_189_string); // 0x22c ObjFunc
	var_190_int = 0; var_191_object = Obj(); // 0x22e PushV
	var_191_object = var_83_object; // 0x22f Mov
	func_195(var_190_int, var_191_object); // 0x230 NEW_2
	var_192_int = 1; // 0x232 PushI
	var_193_bool = var_190_int == var_192_int; // 0x233 Eq
	if(var_193_bool == 0) goto Label_567; // 0x234 JumpB
	var_88_float = 1; // 0x235 MovI
	var_90_float = var_87_float; // 0x236 Mov
	
Label_567:
	var_194_int = 0; var_195_object = Obj(); // 0x237 PushV
	var_195_object = var_83_object; // 0x238 Mov
	func_195(var_194_int, var_195_object); // 0x239 NEW_2
	var_196_int = 2; // 0x23b PushI
	var_197_bool = var_194_int == var_196_int; // 0x23c Eq
	if(var_197_bool == 0) goto Label_580; // 0x23d JumpB
	var_198_float = 1.0; // 0x23e PushF
	var_199_float = 1.0; // 0x23f PushF
	var_200_int = var_199_float - var_86_float; // 0x240 Sub
	var_93_float = var_198_float * var_200_int; // 0x241 Mult2
	var_88_float = var_93_float; // 0x242 Mov
	var_90_float = var_87_float; // 0x243 Mov
	
Label_580:
	var_201_int = 0; var_202_object = Obj(); // 0x244 PushV
	var_202_object = var_83_object; // 0x245 Mov
	func_195(var_201_int, var_202_object); // 0x246 NEW_2
	var_203_int = 3; // 0x248 PushI
	var_204_bool = var_201_int == var_203_int; // 0x249 Eq
	if(var_204_bool == 0) goto Label_593; // 0x24a JumpB
	var_205_float = 0.8; // 0x24b PushF
	var_206_float = 1.0; // 0x24c PushF
	var_207_int = var_206_float - var_86_float; // 0x24d Sub
	var_94_float = var_205_float * var_207_int; // 0x24e Mult2
	var_88_float = var_94_float; // 0x24f Mov
	var_90_float = var_87_float; // 0x250 Mov
	
Label_593:
	var_208_int = 0; var_209_object = Obj(); // 0x251 PushV
	var_209_object = var_83_object; // 0x252 Mov
	func_195(var_208_int, var_209_object); // 0x253 NEW_2
	var_210_int = 4; // 0x255 PushI
	var_211_bool = var_208_int == var_210_int; // 0x256 Eq
	if(var_211_bool == 0) goto Label_606; // 0x257 JumpB
	var_212_float = 0.5; // 0x258 PushF
	var_213_float = 1.0; // 0x259 PushF
	var_214_int = var_213_float - var_86_float; // 0x25a Sub
	var_95_float = var_212_float * var_214_int; // 0x25b Mult2
	var_88_float = var_95_float; // 0x25c Mov
	var_90_float = var_87_float; // 0x25d Mov
	
Label_606:
	var_215_int = 0; var_216_object = Obj(); // 0x25e PushV
	var_216_object = var_83_object; // 0x25f Mov
	func_195(var_215_int, var_216_object); // 0x260 NEW_2
	var_217_int = 6; // 0x262 PushI
	var_218_bool = var_215_int == var_217_int; // 0x263 Eq
	if(var_218_bool == 0) goto Label_619; // 0x264 JumpB
	var_219_float = 0.3; // 0x265 PushF
	var_220_float = 1.0; // 0x266 PushF
	var_221_int = var_220_float - var_86_float; // 0x267 Sub
	var_96_float = var_219_float * var_221_int; // 0x268 Mult2
	var_88_float = var_96_float; // 0x269 Mov
	var_90_float = var_87_float; // 0x26a Mov
	
Label_619:
	var_222_int = 1; // 0x26b PushI
	var_223_bool = var_88_float > var_222_int; // 0x26c GT
	if(var_223_bool == 0) goto Label_623; // 0x26d JumpB
	var_88_float = 1; // 0x26e MovI
	
Label_623:
	var_224_float = 0.03; // 0x26f PushF
	var_225_bool = var_88_float < var_224_float; // 0x270 LT
	if(var_225_bool == 0) goto Label_627; // 0x271 JumpB
	var_88_float = 0.03; // 0x272 MovF
	
Label_627:
	var_226_int = -1; // 0x273 PushI
	var_227_bool = var_90_float < var_226_int; // 0x274 LT
	if(var_227_bool == 0) goto Label_631; // 0x275 JumpB
	var_90_float = -1; // 0x276 MovI
	
Label_631:
	RemoveAllItems(); // 0x277 TObjFunc
	CreateInvItem(var_97_object); // 0x279 Func
	var_228_string = "organ_combination"; // 0x27b PushS
	SetItemName(var_228_string); // 0x27c ObjFunc
	var_229_string = "DiseaseRate"; // 0x27e PushS
	SetProperty(var_229_string, var_88_float); // 0x27f ObjFunc
	var_230_string = "HealthIncrease"; // 0x281 PushS
	SetProperty(var_230_string, var_90_float); // 0x282 ObjFunc
	var_231_int = 0; // 0x284 PushI
	var_232_int = 1; // 0x285 PushI
	AddItem(var_98_bool, var_97_object, var_231_int, var_232_int); // 0x286 TObjFunc
	var_64_bool = 1; // 0x288 MovB
	return 34; // 0x289 Return
}


