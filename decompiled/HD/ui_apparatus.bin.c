task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_int)
{
	DestroyWindow(); // 0x29f Func
	return 0; // 0x2a1 Return
}


task_0_event_102(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_int)
{
	var_10_int = 0; // 0x2a3 PushV
	var_10_int = var_9_int; // 0x2a4 Mov
	func_807(var_10_int); // 0x2a5 NEW_2
	return 0; // 0x2a7 Return
}


task_0_event_101(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_int)
{
	var_10_int = 266; // 0x2a9 PushI
	var_11_bool = var_9_int == var_10_int; // 0x2aa Eq
	if(var_11_bool == 0) goto Label_724; // 0x2ab JumpB
	var_12_int = 0; // 0x2ac PushI
	var_13_bool = var_0_int == var_12_int; // 0x2ad Eq
	if(var_13_bool == 0) goto Label_692; // 0x2ae JumpB
	var_14_int = 0; // 0x2af PushV
	var_14_int = 1; // 0x2b0 MovI
	func_981(var_9_int, var_14_int); // 0x2b1 NEW_2
	goto Label_723; // 0x2b3 Jump
	
Label_723:
	goto Label_766; // 0x2d3 Jump
	
Label_766:
	var_49_int = 0; // 0x2fe PushV
	var_49_int = var_9_int; // 0x2ff Mov
	func_771(var_49_int); // 0x300 NEW_2
	return 0; // 0x302 Return
	
Label_692:
	var_80_int = 1; // 0x2b4 PushI
	var_81_bool = var_0_int == var_80_int; // 0x2b5 Eq
	if(var_81_bool == 0) goto Label_700; // 0x2b6 JumpB
	var_82_int = 0; // 0x2b7 PushV
	var_82_int = 2; // 0x2b8 MovI
	func_981(var_9_int, var_82_int); // 0x2b9 NEW_2
	goto Label_723; // 0x2bb Jump
	
Label_700:
	var_83_int = 2; // 0x2bc PushI
	var_84_bool = var_0_int == var_83_int; // 0x2bd Eq
	if(var_84_bool == 0) goto Label_708; // 0x2be JumpB
	var_85_int = 0; // 0x2bf PushV
	var_85_int = 3; // 0x2c0 MovI
	func_981(var_9_int, var_85_int); // 0x2c1 NEW_2
	goto Label_723; // 0x2c3 Jump
	
Label_708:
	var_86_int = 3; // 0x2c4 PushI
	var_87_bool = var_0_int == var_86_int; // 0x2c5 Eq
	if(var_87_bool == 0) goto Label_716; // 0x2c6 JumpB
	var_88_int = 0; // 0x2c7 PushV
	var_88_int = 4; // 0x2c8 MovI
	func_981(var_9_int, var_88_int); // 0x2c9 NEW_2
	goto Label_723; // 0x2cb Jump
	
Label_716:
	var_89_int = 4; // 0x2cc PushI
	var_90_bool = var_0_int == var_89_int; // 0x2cd Eq
	if(var_90_bool == 0) goto Label_723; // 0x2ce JumpB
	var_91_int = 0; // 0x2cf PushV
	var_91_int = 0; // 0x2d0 MovI
	func_981(var_9_int, var_91_int); // 0x2d1 NEW_2
	
Label_724:
	var_92_int = 265; // 0x2d4 PushI
	var_93_bool = var_9_int == var_92_int; // 0x2d5 Eq
	if(var_93_bool == 0) goto Label_766; // 0x2d6 JumpB
	var_94_int = 0; // 0x2d7 PushI
	var_95_bool = var_0_int == var_94_int; // 0x2d8 Eq
	if(var_95_bool == 0) goto Label_735; // 0x2d9 JumpB
	var_96_int = 0; // 0x2da PushV
	var_96_int = 4; // 0x2db MovI
	func_981(var_9_int, var_96_int); // 0x2dc NEW_2
	goto Label_766; // 0x2de Jump
	
Label_735:
	var_97_int = 1; // 0x2df PushI
	var_98_bool = var_0_int == var_97_int; // 0x2e0 Eq
	if(var_98_bool == 0) goto Label_743; // 0x2e1 JumpB
	var_99_int = 0; // 0x2e2 PushV
	var_99_int = 0; // 0x2e3 MovI
	func_981(var_9_int, var_99_int); // 0x2e4 NEW_2
	goto Label_766; // 0x2e6 Jump
	
Label_743:
	var_100_int = 2; // 0x2e7 PushI
	var_101_bool = var_0_int == var_100_int; // 0x2e8 Eq
	if(var_101_bool == 0) goto Label_751; // 0x2e9 JumpB
	var_102_int = 0; // 0x2ea PushV
	var_102_int = 1; // 0x2eb MovI
	func_981(var_9_int, var_102_int); // 0x2ec NEW_2
	goto Label_766; // 0x2ee Jump
	
Label_751:
	var_103_int = 3; // 0x2ef PushI
	var_104_bool = var_0_int == var_103_int; // 0x2f0 Eq
	if(var_104_bool == 0) goto Label_759; // 0x2f1 JumpB
	var_105_int = 0; // 0x2f2 PushV
	var_105_int = 2; // 0x2f3 MovI
	func_981(var_9_int, var_105_int); // 0x2f4 NEW_2
	goto Label_766; // 0x2f6 Jump
	
Label_759:
	var_106_int = 4; // 0x2f7 PushI
	var_107_bool = var_0_int == var_106_int; // 0x2f8 Eq
	if(var_107_bool == 0) goto Label_766; // 0x2f9 JumpB
	var_108_int = 0; // 0x2fa PushV
	var_108_int = 3; // 0x2fb MovI
	func_981(var_9_int, var_108_int); // 0x2fc NEW_2
}


task_0_event_1(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_float)
{
	var_10_int = 0; // 0x34c PushV
	var_10_int = var_0_int; // 0x34d MovT
	func_1075(var_10_int); // 0x34e NEW_2
	func_1006(); // 0x351 NEW_2
	func_136(); // 0x354 NEW_2
	return 0; // 0x356 Return
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_int, var_10_string, var_11_object)
{
	var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); // 0x357 PushV
	var_18_bool = 0; // 0x358 MovB
	var_24_int = 0; // 0x359 PushI
	var_25_bool = var_9_int < var_24_int; // 0x35a LT
	if(var_25_bool == 0) goto Label_868; // 0x35b JumpB
	var_26_bool = 0; var_27_int = 0; var_28_string = ""; var_29_object = Obj(); // 0x35c PushV
	var_27_int = var_9_int; // 0x35d Mov
	var_28_string = var_10_string; // 0x35e Mov
	var_29_object = var_11_object; // 0x35f Mov
	func_97(var_28_string, var_29_object); // 0x360 NEW_2
	var_18_bool = var_26_bool; // 0x361 Mov
	return 12; // 0x363 Return
	
Label_868:
	var_261_string = "button_weapon"; // 0x364 PushS
	var_262_bool = var_10_string == var_261_string; // 0x365 Eq
	if(var_262_bool == 0) goto Label_877; // 0x366 JumpB
	var_263_int = 0; // 0x367 PushV
	var_263_int = 0; // 0x368 MovI
	func_981(var_23_object, var_263_int); // 0x369 NEW_2
	var_18_bool = 1; // 0x36b MovB
	goto Label_969; // 0x36c Jump
	
Label_969:
	var_264_bool = var_18_bool == 0; // 0x3c9 Not
	if(var_264_bool == 0) goto Label_978; // 0x3ca JumpB
	var_265_bool = 0; var_266_int = 0; var_267_string = ""; var_268_object = Obj(); // 0x3cb PushV
	var_266_int = var_9_int; // 0x3cc Mov
	var_267_string = var_10_string; // 0x3cd Mov
	var_268_object = var_11_object; // 0x3ce Mov
	func_97(var_267_string, var_268_object); // 0x3cf NEW_2
	var_18_bool = var_265_bool; // 0x3d0 Mov
	
Label_978:
	var_269_bool = var_18_bool; // 0x3d2 Push
	if(var_269_bool == 0) goto Label_980; // 0x3d3 JumpB
	
Label_980:
	return 12; // 0x3d4 Return
	
Label_877:
	var_270_string = "button_clothes"; // 0x36d PushS
	var_271_bool = var_10_string == var_270_string; // 0x36e Eq
	if(var_271_bool == 0) goto Label_886; // 0x36f JumpB
	var_272_int = 0; // 0x370 PushV
	var_272_int = 1; // 0x371 MovI
	func_981(var_23_object, var_272_int); // 0x372 NEW_2
	var_18_bool = 1; // 0x374 MovB
	goto Label_969; // 0x375 Jump
	
Label_886:
	var_273_string = "button_medcine"; // 0x376 PushS
	var_274_bool = var_10_string == var_273_string; // 0x377 Eq
	if(var_274_bool == 0) goto Label_895; // 0x378 JumpB
	var_275_int = 0; // 0x379 PushV
	var_275_int = 2; // 0x37a MovI
	func_981(var_23_object, var_275_int); // 0x37b NEW_2
	var_18_bool = 1; // 0x37d MovB
	goto Label_969; // 0x37e Jump
	
Label_895:
	var_276_string = "button_food"; // 0x37f PushS
	var_277_bool = var_10_string == var_276_string; // 0x380 Eq
	if(var_277_bool == 0) goto Label_904; // 0x381 JumpB
	var_278_int = 0; // 0x382 PushV
	var_278_int = 3; // 0x383 MovI
	func_981(var_23_object, var_278_int); // 0x384 NEW_2
	var_18_bool = 1; // 0x386 MovB
	goto Label_969; // 0x387 Jump
	
Label_904:
	var_279_string = "button_other"; // 0x388 PushS
	var_280_bool = var_10_string == var_279_string; // 0x389 Eq
	if(var_280_bool == 0) goto Label_913; // 0x38a JumpB
	var_281_int = 0; // 0x38b PushV
	var_281_int = 4; // 0x38c MovI
	func_981(var_23_object, var_281_int); // 0x38d NEW_2
	var_18_bool = 1; // 0x38f MovB
	goto Label_969; // 0x390 Jump
	
Label_913:
	var_282_string = "button_detector"; // 0x391 PushS
	var_283_bool = var_10_string == var_282_string; // 0x392 Eq
	if(var_283_bool == 0) goto Label_917; // 0x393 JumpB
	goto Label_969; // 0x394 Jump
	
Label_917:
	var_284_string = "button_anticeptic"; // 0x395 PushS
	var_285_bool = var_10_string == var_284_string; // 0x396 Eq
	if(var_285_bool == 0) goto Label_921; // 0x397 JumpB
	goto Label_969; // 0x398 Jump
	
Label_921:
	var_286_int = 0; // 0x399 PushI
	var_287_bool = var_9_int != var_286_int; // 0x39a Neq
	if(var_287_bool == 0) goto Label_930; // 0x39b JumpB
	var_288_string = "noinv_drop"; // 0x39c PushS
	GetVariable(var_288_string, var_19_int); // 0x39d Func
	var_289_int = var_19_int; // 0x39f Push
	if(var_289_int == 0) goto Label_930; // 0x3a0 JumpB
	return 12; // 0x3a1 Return
	
Label_930:
	var_20_int = 0; // 0x3a2 MovI
	
Label_931:
	var_290_int = 12; // 0x3a3 PushI
	var_291_bool = var_20_int < var_290_int; // 0x3a4 LT
	if(var_291_bool == 0) goto Label_969; // 0x3a5 JumpB
	var_292_string = ""; var_293_int = 0; // 0x3a6 PushV
	var_293_int = var_20_int; // 0x3a7 Mov
	func_1162(var_292_string, var_293_int); // 0x3a8 NEW_2
	var_304_bool = var_10_string == var_292_string; // 0x3aa Eq
	if(var_304_bool == 0) goto Label_966; // 0x3ab JumpB
	var_305_object = Obj(); // 0x3ac PushV
	func_95(var_23_object, var_305_object); // 0x3ad NEW_2
	var_21_object = var_305_object; // 0x3ae Mov
	GetItemCount(var_22_int, var_0_int); // 0x3b0 ObjFunc
	var_306_bool = var_22_int > var_20_int; // 0x3b2 GT
	if(var_306_bool == 0) goto Label_964; // 0x3b3 JumpB
	GetItem(var_23_object, var_20_int, var_0_int); // 0x3b4 ObjFunc
	var_307_bool = 0; var_308_object = Obj(); // 0x3b6 PushV
	var_308_object = var_23_object; // 0x3b7 Mov
	func_143(var_307_bool, var_308_object); // 0x3b8 NEW_2
	var_311_bool = var_307_bool == 0; // 0x3ba Not
	if(var_311_bool == 0) goto Label_963; // 0x3bb JumpB
	var_312_bool = 0; var_313_int = 0; var_314_bool = 0; // 0x3bc PushV
	var_313_int = var_20_int; // 0x3bd Mov
	var_315_int = 0; // 0x3be PushI
	var_314_bool = var_9_int == var_315_int; // 0x3bf Eq2
	func_154(var_312_bool, var_313_int, var_314_bool); // 0x3c0 NEW_2
	var_18_bool = var_312_bool; // 0x3c1 Mov
	
Label_963:
	var_23_object = 0; // 0x3c3 SetNull
	
Label_964:
	goto Label_969; // 0x3c4 Jump
	
Label_966:
	var_342_int = 1; // 0x3c6 PushI
	var_20_int = var_20_int + var_342_int; // 0x3c7 Add2
	goto Label_931; // 0x3c8 Jump
}


main(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object)
{
	var_9_string = "player"; // 0x0 PushS
	FindActor(var_7_object, var_9_string); // 0x1 Func
	var_10_bool = var_3_object == 0; // 0x3 Not
	if(var_10_bool == 0) goto Label_8; // 0x4 JumpB
	DestroyWindow(); // 0x5 Func
	return 0; // 0x7 Return
	
Label_8:
	GetWindowData(var_5_object); // 0x8 Func
	var_11_bool = var_4_object == 0; // 0xa Not
	if(var_11_bool == 0) goto Label_18; // 0xb JumpB
	var_12_string = "null apparatus"; // 0xc PushS
	Trace(var_12_string); // 0xd Func
	DestroyWindow(); // 0xf Func
	return 0; // 0x11 Return
	
Label_18:
	CreateFloatVector(var_3_object); // 0x12 Func
	CreateFloatVector(var_4_object); // 0x14 Func
	CreateFloatVector(var_2_object); // 0x16 Func
	CreateFloatVector(var_1_object); // 0x18 Func
	var_13_float = 0.3; // 0x1a PushF
	add(var_13_float); // 0x1b TObjFunc
	var_14_float = 0.4; // 0x1d PushF
	add(var_14_float); // 0x1e TObjFunc
	var_15_int = 1; // 0x20 PushI
	add(var_15_int); // 0x21 TObjFunc
	var_16_int = 1; // 0x23 PushI
	add(var_16_int); // 0x24 TObjFunc
	var_17_float = -0.3; // 0x26 PushF
	add(var_17_float); // 0x27 TObjFunc
	var_18_float = 0.4; // 0x29 PushF
	add(var_18_float); // 0x2a TObjFunc
	var_19_int = 1; // 0x2c PushI
	add(var_19_int); // 0x2d TObjFunc
	var_20_int = 1; // 0x2f PushI
	add(var_20_int); // 0x30 TObjFunc
	var_21_float = 1.0; // 0x32 PushF
	add(var_21_float); // 0x33 TObjFunc
	var_22_float = -1.0; // 0x35 PushF
	add(var_22_float); // 0x36 TObjFunc
	var_23_int = 1; // 0x38 PushI
	add(var_23_int); // 0x39 TObjFunc
	var_24_int = 1; // 0x3b PushI
	add(var_24_int); // 0x3c TObjFunc
	var_25_int = 0; // 0x3e PushI
	add(var_25_int); // 0x3f TObjFunc
	var_26_int = 0; // 0x41 PushI
	add(var_26_int); // 0x42 TObjFunc
	var_27_float = 2.0; // 0x44 PushF
	add(var_27_float); // 0x45 TObjFunc
	var_28_int = 1; // 0x47 PushI
	add(var_28_int); // 0x48 TObjFunc
	var_29_int = 0; // 0x4a PushI
	add(var_29_int); // 0x4b TObjFunc
	var_30_int = 0; // 0x4d PushI
	add(var_30_int); // 0x4e TObjFunc
	var_31_int = 1; // 0x50 PushI
	add(var_31_int); // 0x51 TObjFunc
	var_32_float = 0.5; // 0x53 PushF
	add(var_32_float); // 0x54 TObjFunc
	var_33_string = "inventory_base.xml"; // 0x56 PushS
	var_34_bool = 0; // 0x57 PushB
	CreateWindow(var_33_string, var_34_bool, var_34_bool); // 0x58 Func
	var_35_int = 0; // 0x5a PushV
	var_35_int = 4; // 0x5b MovI
	func_588(var_8_object, var_35_int); // 0x5c NEW_2
	return 0; // 0x5e Return
}


func_771(var_49_int)
{
	var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; // 0x303 PushV
	var_54_int = 269; // 0x304 PushI
	var_55_bool = var_49_int == var_54_int; // 0x305 Eq
	if(var_55_bool == 0) goto Label_789; // 0x306 JumpB
	var_52_int = 0; // 0x307 MovI
	
Label_776:
	var_56_int = 12; // 0x308 PushI
	var_57_bool = var_52_int < var_56_int; // 0x309 LT
	if(var_57_bool == 0) goto Label_789; // 0x30a JumpB
	var_58_int = -2; // 0x30b PushI
	var_59_string = ""; var_60_int = 0; // 0x30c PushV
	var_60_int = var_52_int; // 0x30d Mov
	func_1162(var_59_string, var_60_int); // 0x30e NEW_2
	SendMessage(var_58_int, var_59_string); // 0x310 Func
	var_71_int = 1; // 0x312 PushI
	var_52_int = var_52_int + var_71_int; // 0x313 Add2
	goto Label_776; // 0x314 Jump
	
Label_789:
	var_72_int = 270; // 0x315 PushI
	var_73_bool = var_49_int == var_72_int; // 0x316 Eq
	if(var_73_bool == 0) goto Label_806; // 0x317 JumpB
	var_53_int = 0; // 0x318 MovI
	
Label_793:
	var_74_int = 12; // 0x319 PushI
	var_75_bool = var_53_int < var_74_int; // 0x31a LT
	if(var_75_bool == 0) goto Label_806; // 0x31b JumpB
	var_76_int = -3; // 0x31c PushI
	var_77_string = ""; var_78_int = 0; // 0x31d PushV
	var_78_int = var_53_int; // 0x31e Mov
	func_1162(var_77_string, var_78_int); // 0x31f NEW_2
	SendMessage(var_76_int, var_77_string); // 0x321 Func
	var_79_int = 1; // 0x323 PushI
	var_53_int = var_53_int + var_79_int; // 0x324 Add2
	goto Label_793; // 0x325 Jump
	
Label_806:
	return 4; // 0x326 Return
}


func_136()
{
	func_434(); // 0x89 NEW_2
	func_470(); // 0x8c NEW_2
	return 0; // 0x8e Return
}


func_265(var_82_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_object = Obj(); var_87_object = Obj(); var_88_int = 0; var_89_int = 0; var_90_int = 0; var_91_object = Obj(); var_92_object = Obj(); // 0x109 PushV
	GetItemCount(var_88_int); // 0x10a TObjFunc
	var_89_int = 0; // 0x10c MovI
	var_90_int = 0; // 0x10d MovI
	
Label_270:
	var_93_bool = var_90_int < var_88_int; // 0x10e LT
	if(var_93_bool == 0) goto Label_286; // 0x10f JumpB
	GetItem(var_91_object, var_90_int); // 0x110 TObjFunc
	var_94_bool = 0; var_95_object = Obj(); // 0x112 PushV
	var_95_object = var_91_object; // 0x113 Mov
	func_290(var_94_bool, var_95_object); // 0x114 NEW_2
	var_96_bool = var_94_bool == 0; // 0x116 Not
	if(var_96_bool == 0) goto Label_282; // 0x117 JumpB
	var_82_object = var_91_object; // 0x118 Mov
	return 10; // 0x119 Return
	
Label_282:
	var_91_object = 0; // 0x11a SetNull
	var_97_int = 1; // 0x11b PushI
	var_90_int = var_90_int + var_97_int; // 0x11c Add2
	goto Label_270; // 0x11d Jump
	
Label_286:
	var_92_object = 0; // 0x11e SetNull
	var_82_object = var_92_object; // 0x11f Mov
	return 10; // 0x120 Return
}


func_1162(var_113_string, var_114_int)
{
	var_115_int = 1; // 0x48b PushI
	var_116_int = var_114_int + var_115_int; // 0x48c Add
	var_117_int = 10; // 0x48d PushI
	var_118_bool = var_116_int < var_117_int; // 0x48e LT
	if(var_118_bool == 0) goto Label_1173; // 0x48f JumpB
	var_119_string = "slot0"; // 0x490 PushS
	var_120_int = 1; // 0x491 PushI
	var_121_int = var_114_int + var_120_int; // 0x492 Add
	var_113_string = var_119_string + var_121_int; // 0x493 Add2
	return 0; // 0x494 Return
	
Label_1173:
	var_122_string = "slot"; // 0x495 PushS
	var_123_int = 1; // 0x496 PushI
	var_124_int = var_114_int + var_123_int; // 0x497 Add
	var_113_string = var_122_string + var_124_int; // 0x498 Add2
	return 0; // 0x499 Return
}


func_143(var_97_bool, var_98_object)
{
	var_99_bool = 0; var_100_object = Obj(); // 0x90 PushV
	var_100_object = var_98_object; // 0x91 Mov
	func_290(var_99_bool, var_100_object); // 0x92 NEW_2
	var_97_bool = !var_99_bool; // 0x94 Not2
	return 0; // 0x95 Return
}


func_403(var_233_bool)
{
	var_234_object = Obj(); var_235_int = 0; var_236_bool = 0; var_237_object = Obj(); var_238_int = 0; var_239_bool = 0; // 0x193 PushV
	var_240_object = Obj(); // 0x194 PushV
	func_265(var_240_object); // 0x195 NEW_2
	var_237_object = var_240_object; // 0x196 Mov
	var_241_bool = var_237_object == 0; // 0x198 Not
	if(var_241_bool == 0) goto Label_412; // 0x199 JumpB
	var_233_bool = 0; // 0x19a MovB
	return 6; // 0x19b Return
	
Label_412:
	var_242_int = 0; // 0x19c PushV
	func_348(var_242_int); // 0x19d NEW_2
	var_238_int = var_242_int; // 0x19e Mov
	var_256_int = 2; // 0x1a0 PushI
	var_257_int = 1; // 0x1a1 PushI
	AddItem(var_239_bool, var_237_object, var_256_int, var_257_int); // 0x1a2 TObjFunc
	var_258_bool = var_239_bool == 0; // 0x1a4 Not
	if(var_258_bool == 0) goto Label_424; // 0x1a5 JumpB
	var_233_bool = 0; // 0x1a6 MovB
	return 6; // 0x1a7 Return
	
Label_424:
	var_259_int = 1; // 0x1a8 PushI
	RemoveItem(var_238_int, var_259_int); // 0x1a9 TObjFunc
	var_260_int = 0; // 0x1ab PushV
	var_260_int = 2; // 0x1ac MovI
	func_981(var_239_bool, var_260_int); // 0x1ad NEW_2
	var_233_bool = 1; // 0x1af MovB
	return 6; // 0x1b0 Return
}


func_662()
{
	var_171_int = -6; // 0x296 PushI
	var_172_string = ""; var_173_int = 0; // 0x297 PushV
	var_173_int = 0; // 0x298 MovI
	func_1162(var_172_string, var_173_int); // 0x299 NEW_2
	SendMessage(var_171_int, var_172_string); // 0x29b Func
	return 0; // 0x29d Return
}


func_150(var_94_bool)
{
	var_94_bool = 0; // 0x97 MovB
	return 0; // 0x98 Return
}


func_153()
{
	return 0; // 0x99 Return
}


func_154(var_312_bool, var_313_int, var_314_bool)
{
	var_316_bool = var_314_bool; // 0x9b Push
	if(var_316_bool == 0) goto Label_163; // 0x9c JumpB
	var_317_bool = 0; var_318_int = 0; // 0x9d PushV
	var_318_int = var_313_int; // 0x9e Mov
	func_165(var_317_bool, var_318_int); // 0x9f NEW_2
	var_312_bool = 1; // 0xa1 MovB
	return 0; // 0xa2 Return
	
Label_163:
	var_312_bool = 0; // 0xa3 MovB
	return 0; // 0xa4 Return
}


func_1178(var_105_int)
{
	var_107_int = 0; var_108_int = 0; // 0x49a PushV
	GetItemID(var_108_int); // 0x49b ObjFunc
	var_105_int = var_108_int; // 0x49d Mov
	return 2; // 0x49e Return
}


func_290(var_99_bool, var_100_object)
{
	var_101_int = 0; var_102_bool = 0; var_103_int = 0; var_104_bool = 0; // 0x122 PushV
	var_105_int = 0; var_106_object = Obj(); // 0x123 PushV
	var_106_object = var_100_object; // 0x124 Mov
	func_1178(var_106_object); // 0x125 NEW_2
	var_103_int = var_105_int; // 0x126 Mov
	var_109_string = "Grass"; // 0x128 PushS
	HasInvItemProperty(var_104_bool, var_103_int, var_109_string); // 0x129 Func
	var_99_bool = var_104_bool; // 0x12b Mov
	return 4; // 0x12c Return
}


func_165(var_317_bool, var_318_int)
{
	var_319_object = Obj(); var_320_int = 0; var_321_int = 0; var_322_int = 0; var_323_bool = 0; var_324_object = Obj(); var_325_int = 0; var_326_int = 0; var_327_int = 0; var_328_bool = 0; // 0xa5 PushV
	var_329_bool = 0; // 0xa6 PushV
	func_203(var_329_bool); // 0xa7 NEW_2
	var_332_bool = var_329_bool == 0; // 0xa9 Not
	if(var_332_bool == 0) goto Label_173; // 0xaa JumpB
	var_317_bool = 0; // 0xab MovB
	return 10; // 0xac Return
	
Label_173:
	var_333_int = 4; // 0xad PushI
	GetItemCount(var_325_int, var_333_int); // 0xae TObjFunc
	var_334_bool = var_325_int <= var_318_int; // 0xb0 LE
	if(var_334_bool == 0) goto Label_180; // 0xb1 JumpB
	var_317_bool = 0; // 0xb2 MovB
	return 10; // 0xb3 Return
	
Label_180:
	var_335_int = 4; // 0xb4 PushI
	GetItemAmount(var_326_int, var_318_int, var_335_int); // 0xb5 TObjFunc
	var_336_int = 4; // 0xb7 PushI
	GetItem(var_324_object, var_318_int, var_336_int); // 0xb8 TObjFunc
	GetItemID(var_327_int); // 0xba ObjFunc
	var_337_int = 0; // 0xbc PushI
	var_338_int = 1; // 0xbd PushI
	AddItem(var_328_bool, var_324_object, var_337_int, var_338_int); // 0xbe TObjFunc
	var_339_bool = var_328_bool == 0; // 0xc0 Not
	if(var_339_bool == 0) goto Label_196; // 0xc1 JumpB
	var_317_bool = 0; // 0xc2 MovB
	return 10; // 0xc3 Return
	
Label_196:
	var_340_int = 1; // 0xc4 PushI
	var_341_int = 4; // 0xc5 PushI
	RemoveItem(var_318_int, var_340_int, var_341_int); // 0xc6 TObjFunc
	var_317_bool = 1; // 0xc8 MovB
	return 10; // 0xc9 Return
}


func_807(var_10_int)
{
	var_11_int = 0; var_12_int = 0; var_13_int = 0; var_14_int = 0; // 0x327 PushV
	var_15_int = 273; // 0x328 PushI
	var_16_bool = var_10_int == var_15_int; // 0x329 Eq
	if(var_16_bool == 0) goto Label_825; // 0x32a JumpB
	var_13_int = 0; // 0x32b MovI
	
Label_812:
	var_17_int = 12; // 0x32c PushI
	var_18_bool = var_13_int < var_17_int; // 0x32d LT
	if(var_18_bool == 0) goto Label_825; // 0x32e JumpB
	var_19_int = -2; // 0x32f PushI
	var_20_string = ""; var_21_int = 0; // 0x330 PushV
	var_21_int = var_13_int; // 0x331 Mov
	func_1162(var_20_string, var_21_int); // 0x332 NEW_2
	SendMessage(var_19_int, var_20_string); // 0x334 Func
	var_32_int = 1; // 0x336 PushI
	var_13_int = var_13_int + var_32_int; // 0x337 Add2
	goto Label_812; // 0x338 Jump
	
Label_825:
	var_33_int = 271; // 0x339 PushI
	var_34_bool = var_10_int == var_33_int; // 0x33a Eq
	if(var_34_bool == 0) goto Label_842; // 0x33b JumpB
	var_14_int = 0; // 0x33c MovI
	
Label_829:
	var_35_int = 12; // 0x33d PushI
	var_36_bool = var_14_int < var_35_int; // 0x33e LT
	if(var_36_bool == 0) goto Label_842; // 0x33f JumpB
	var_37_int = -3; // 0x340 PushI
	var_38_string = ""; var_39_int = 0; // 0x341 PushV
	var_39_int = var_14_int; // 0x342 Mov
	func_1162(var_38_string, var_39_int); // 0x343 NEW_2
	SendMessage(var_37_int, var_38_string); // 0x345 Func
	var_40_int = 1; // 0x347 PushI
	var_14_int = var_14_int + var_40_int; // 0x348 Add2
	goto Label_829; // 0x349 Jump
	
Label_842:
	return 4; // 0x34a Return
}


func_301(var_120_int, var_121_object)
{
	var_122_int = 0; var_123_bool = 0; var_124_int = 0; var_125_int = 0; var_126_bool = 0; var_127_int = 0; // 0x12d PushV
	var_128_int = 0; var_129_object = Obj(); // 0x12e PushV
	var_129_object = var_121_object; // 0x12f Mov
	func_1178(var_129_object); // 0x130 NEW_2
	var_125_int = var_128_int; // 0x131 Mov
	var_130_string = "Grass"; // 0x133 PushS
	HasInvItemProperty(var_126_bool, var_125_int, var_130_string); // 0x134 Func
	var_131_bool = var_126_bool == 0; // 0x136 Not
	if(var_131_bool == 0) goto Label_314; // 0x137 JumpB
	var_120_int = -1; // 0x138 MovI
	return 6; // 0x139 Return
	
Label_314:
	var_132_string = "Grass"; // 0x13a PushS
	GetInvItemProperty(var_127_int, var_125_int, var_132_string); // 0x13b Func
	var_120_int = var_127_int; // 0x13d Mov
	return 6; // 0x13e Return
}


func_434()
{
	var_86_int = 0; var_87_int = 0; var_88_object = Obj(); var_89_int = 0; var_90_int = 0; var_91_object = Obj(); // 0x1b2 PushV
	var_92_int = 0; // 0x1b3 PushV
	func_209(var_92_int); // 0x1b4 NEW_2
	var_89_int = var_92_int; // 0x1b5 Mov
	var_90_int = 0; // 0x1b7 MovI
	
Label_440:
	var_108_int = 4; // 0x1b8 PushI
	var_109_bool = var_90_int < var_108_int; // 0x1b9 LT
	if(var_109_bool == 0) goto Label_469; // 0x1ba JumpB
	var_110_object = Obj(); var_111_int = 0; // 0x1bb PushV
	var_111_int = var_90_int; // 0x1bc Mov
	func_234(var_110_object, var_111_int); // 0x1bd NEW_2
	var_91_object = var_110_object; // 0x1be Mov
	var_130_object = var_91_object; // 0x1c0 Push
	if(var_130_object == 0) goto Label_458; // 0x1c1 JumpB
	var_131_int = 0; // 0x1c2 PushI
	var_132_string = "input0"; // 0x1c3 PushS
	var_133_int = 1; // 0x1c4 PushI
	var_134_int = var_90_int + var_133_int; // 0x1c5 Add
	var_135_int = var_132_string + var_134_int; // 0x1c6 Add
	SendMessage(var_131_int, var_135_int, var_91_object); // 0x1c7 Func
	goto Label_465; // 0x1c9 Jump
	
Label_465:
	var_91_object = 0; // 0x1d1 SetNull
	var_136_int = 1; // 0x1d2 PushI
	var_90_int = var_90_int + var_136_int; // 0x1d3 Add2
	goto Label_440; // 0x1d4 Jump
	
Label_458:
	var_137_int = 32768; // 0x1ca PushI
	var_138_string = "input0"; // 0x1cb PushS
	var_139_int = 1; // 0x1cc PushI
	var_140_int = var_90_int + var_139_int; // 0x1cd Add
	var_141_int = var_138_string + var_140_int; // 0x1ce Add
	SendMessage(var_137_int, var_141_int); // 0x1cf Func
	
Label_469:
	return 6; // 0x1d5 Return
}


func_1075(var_75_int)
{
	var_76_object = Obj(); var_77_int = 0; var_78_int = 0; var_79_object = Obj(); var_80_int = 0; var_81_bool = 0; var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; var_85_int = 0; var_86_object = Obj(); var_87_int = 0; var_88_bool = 0; var_89_bool = 0; // 0x433 PushV
	var_90_object = Obj(); // 0x434 PushV
	func_95(var_89_bool, var_90_object); // 0x435 NEW_2
	var_83_object = var_90_object; // 0x436 Mov
	GetItemCount(var_84_int, var_75_int); // 0x438 ObjFunc
	var_85_int = 0; // 0x43a MovI
	
Label_1083:
	var_91_int = 12; // 0x43b PushI
	var_92_bool = var_85_int < var_91_int; // 0x43c LT
	if(var_92_bool == 0) goto Label_1160; // 0x43d JumpB
	var_93_bool = var_85_int < var_84_int; // 0x43e LT
	if(var_93_bool == 0) goto Label_1150; // 0x43f JumpB
	GetItem(var_86_object, var_85_int, var_75_int); // 0x440 ObjFunc
	GetItemAmount(var_87_int, var_85_int, var_75_int); // 0x442 ObjFunc
	var_94_bool = 0; var_95_int = 0; var_96_int = 0; // 0x444 PushV
	var_95_int = var_85_int; // 0x445 Mov
	var_96_int = var_75_int; // 0x446 Mov
	func_150(var_96_int); // 0x447 NEW_2
	var_88_bool = var_94_bool; // 0x448 Mov
	var_97_bool = 0; var_98_object = Obj(); // 0x44a PushV
	var_98_object = var_86_object; // 0x44b Mov
	func_143(var_97_bool, var_98_object); // 0x44c NEW_2
	var_89_bool = var_97_bool; // 0x44d Mov
	var_110_bool = var_88_bool; // 0x44f Push
	if(var_110_bool == 0) goto Label_1123; // 0x450 JumpB
	var_111_bool = var_89_bool; // 0x451 Push
	if(var_111_bool == 0) goto Label_1115; // 0x452 JumpB
	var_112_int = 0; // 0x453 PushI
	var_113_string = ""; var_114_int = 0; // 0x454 PushV
	var_114_int = var_85_int; // 0x455 Mov
	func_1162(var_113_string, var_114_int); // 0x456 NEW_2
	SendMessage(var_112_int, var_113_string, var_86_object); // 0x458 Func
	goto Label_1122; // 0x45a Jump
	
Label_1122:
	goto Label_1140; // 0x462 Jump
	
Label_1140:
	var_125_int = 65536; // 0x474 PushI
	var_126_int = var_87_int | var_125_int; // 0x475 Or
	var_127_string = ""; var_128_int = 0; // 0x476 PushV
	var_128_int = var_85_int; // 0x477 Mov
	func_1162(var_127_string, var_128_int); // 0x478 NEW_2
	SendMessage(var_126_int, var_127_string); // 0x47a Func
	var_86_object = 0; // 0x47c SetNull
	goto Label_1157; // 0x47d Jump
	
Label_1157:
	var_129_int = 1; // 0x485 PushI
	var_85_int = var_85_int + var_129_int; // 0x486 Add2
	goto Label_1083; // 0x487 Jump
	
Label_1115:
	var_130_int = 16384; // 0x45b PushI
	var_131_string = ""; var_132_int = 0; // 0x45c PushV
	var_132_int = var_85_int; // 0x45d Mov
	func_1162(var_131_string, var_132_int); // 0x45e NEW_2
	SendMessage(var_130_int, var_131_string, var_86_object); // 0x460 Func
	
Label_1123:
	var_133_bool = var_89_bool; // 0x463 Push
	if(var_133_bool == 0) goto Label_1133; // 0x464 JumpB
	var_134_int = 131072; // 0x465 PushI
	var_135_string = ""; var_136_int = 0; // 0x466 PushV
	var_136_int = var_85_int; // 0x467 Mov
	func_1162(var_135_string, var_136_int); // 0x468 NEW_2
	SendMessage(var_134_int, var_135_string, var_86_object); // 0x46a Func
	goto Label_1140; // 0x46c Jump
	
Label_1133:
	var_137_int = 0; // 0x46d PushI
	var_138_string = ""; var_139_int = 0; // 0x46e PushV
	var_139_int = var_85_int; // 0x46f Mov
	func_1162(var_138_string, var_139_int); // 0x470 NEW_2
	SendMessage(var_137_int, var_138_string, var_86_object); // 0x472 Func
	
Label_1150:
	var_140_int = 32768; // 0x47e PushI
	var_141_string = ""; var_142_int = 0; // 0x47f PushV
	var_142_int = var_85_int; // 0x480 Mov
	func_1162(var_141_string, var_142_int); // 0x481 NEW_2
	SendMessage(var_140_int, var_141_string); // 0x483 Func
	
Label_1160:
	return 14; // 0x488 Return
}


func_319(var_169_int, var_170_int)
{
	var_171_int = 0; var_172_int = 0; var_173_int = 0; var_174_object = Obj(); var_175_int = 0; var_176_int = 0; var_177_int = 0; var_178_int = 0; var_179_object = Obj(); var_180_int = 0; // 0x13f PushV
	GetItemCount(var_176_int); // 0x140 TObjFunc
	var_177_int = 0; // 0x142 MovI
	var_178_int = 0; // 0x143 MovI
	
Label_324:
	var_181_bool = var_178_int < var_176_int; // 0x144 LT
	if(var_181_bool == 0) goto Label_346; // 0x145 JumpB
	GetItem(var_179_object, var_178_int); // 0x146 TObjFunc
	var_182_bool = 0; var_183_object = Obj(); // 0x148 PushV
	var_183_object = var_179_object; // 0x149 Mov
	func_290(var_182_bool, var_183_object); // 0x14a NEW_2
	var_184_bool = var_182_bool == 0; // 0x14c Not
	if(var_184_bool == 0) goto Label_335; // 0x14d JumpB
	goto Label_343; // 0x14e Jump
	
Label_343:
	var_185_int = 1; // 0x157 PushI
	var_178_int = var_178_int + var_185_int; // 0x158 Add2
	goto Label_324; // 0x159 Jump
	
Label_335:
	GetItemAmount(var_180_int, var_178_int); // 0x14f TObjFunc
	var_177_int = var_177_int + var_180_int; // 0x151 Add2
	var_186_bool = var_177_int > var_170_int; // 0x152 GT
	if(var_186_bool == 0) goto Label_342; // 0x153 JumpB
	var_169_int = var_178_int; // 0x154 Mov
	return 10; // 0x155 Return
	
Label_342:
	var_179_object = 0; // 0x156 SetNull
	
Label_346:
	var_169_int = -1; // 0x15a MovI
	return 10; // 0x15b Return
}


func_203(var_329_bool)
{
	var_330_int = 0; // 0xcb PushV
	func_209(var_330_int); // 0xcc NEW_2
	var_331_int = 4; // 0xce PushI
	var_329_bool = var_330_int < var_331_int; // 0xcf LT2
	return 0; // 0xd0 Return
}


func_588(var_0_int, var_35_int)
{
	var_36_int = 0; var_37_object = Obj(); var_38_int = 0; var_39_object = Obj(); // 0x24c PushV
	var_0_int = -1; // 0x24d TMovI
	var_40_int = 0; // 0x24e PushV
	var_40_int = var_35_int; // 0x24f Mov
	func_981(var_39_object, var_40_int); // 0x250 NEW_2
	var_75_int = 0; // 0x252 PushV
	var_75_int = var_0_int; // 0x253 MovT
	func_1075(var_75_int); // 0x254 NEW_2
	func_1006(); // 0x257 NEW_2
	var_38_int = 0; // 0x259 MovI
	
Label_602:
	var_151_int = 12; // 0x25a PushI
	var_152_bool = var_38_int < var_151_int; // 0x25b LT
	if(var_152_bool == 0) goto Label_640; // 0x25c JumpB
	CreateStringVector(var_39_object); // 0x25d Func
	var_153_string = ""; var_154_int = 0; // 0x25f PushV
	var_155_int = 12; // 0x260 PushI
	var_156_int = var_38_int + var_155_int; // 0x261 Add
	var_157_int = 1; // 0x262 PushI
	var_158_int = var_156_int - var_157_int; // 0x263 Sub
	var_159_int = 12; // 0x264 PushI
	var_154_int = var_158_int % var_159_int; // 0x265 Mod2
	func_1162(var_153_string, var_154_int); // 0x266 NEW_2
	add(var_153_string); // 0x268 ObjFunc
	var_160_string = ""; var_161_int = 0; // 0x26a PushV
	var_162_int = 12; // 0x26b PushI
	var_163_int = var_38_int + var_162_int; // 0x26c Add
	var_164_int = 1; // 0x26d PushI
	var_165_int = var_163_int + var_164_int; // 0x26e Add
	var_166_int = 12; // 0x26f PushI
	var_161_int = var_165_int % var_166_int; // 0x270 Mod2
	func_1162(var_160_string, var_161_int); // 0x271 NEW_2
	add(var_160_string); // 0x273 ObjFunc
	var_167_int = -1; // 0x275 PushI
	var_168_string = ""; var_169_int = 0; // 0x276 PushV
	var_169_int = var_38_int; // 0x277 Mov
	func_1162(var_168_string, var_169_int); // 0x278 NEW_2
	SendMessage(var_167_int, var_168_string, var_39_object); // 0x27a Func
	var_39_object = 0; // 0x27c SetNull
	var_170_int = 1; // 0x27d PushI
	var_38_int = var_38_int + var_170_int; // 0x27e Add2
	goto Label_602; // 0x27f Jump
	
Label_640:
	func_662(); // 0x281 NEW_2
	var_174_string = "default"; // 0x283 PushS
	SetCursor(var_174_string); // 0x284 Func
	ShowCursor(); // 0x286 Func
	CaptureKeyboard(); // 0x288 Func
	var_175_bool = 0; // 0x28a PushB
	SetOwnerDraw(var_175_bool); // 0x28b Func
	var_176_bool = 1; // 0x28d PushB
	SetNeedUpdate(var_176_bool); // 0x28e Func
	func_153(); // 0x291 NEW_2
	ProcessEvents(); // 0x293 Func
	return 4; // 0x295 Return
}


func_209(var_55_int)
{
	var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_object = Obj(); var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_object = Obj(); var_65_int = 0; // 0xd1 PushV
	GetItemCount(var_61_int); // 0xd2 TObjFunc
	var_62_int = 0; // 0xd4 MovI
	var_63_int = 0; // 0xd5 MovI
	
Label_214:
	var_66_bool = var_63_int < var_61_int; // 0xd6 LT
	if(var_66_bool == 0) goto Label_232; // 0xd7 JumpB
	GetItem(var_64_object, var_63_int); // 0xd8 TObjFunc
	var_67_bool = 0; var_68_object = Obj(); // 0xda PushV
	var_68_object = var_64_object; // 0xdb Mov
	func_290(var_67_bool, var_68_object); // 0xdc NEW_2
	var_78_bool = var_67_bool == 0; // 0xde Not
	if(var_78_bool == 0) goto Label_225; // 0xdf JumpB
	goto Label_229; // 0xe0 Jump
	
Label_229:
	var_79_int = 1; // 0xe5 PushI
	var_63_int = var_63_int + var_79_int; // 0xe6 Add2
	goto Label_214; // 0xe7 Jump
	
Label_225:
	GetItemAmount(var_65_int, var_63_int); // 0xe1 TObjFunc
	var_62_int = var_62_int + var_65_int; // 0xe3 Add2
	var_64_object = 0; // 0xe4 SetNull
	
Label_232:
	var_55_int = var_62_int; // 0xe8 Mov
	return 10; // 0xe9 Return
}


func_981(var_0_int, var_40_int)
{
	var_41_int = -1; // 0x3d6 PushI
	var_42_bool = var_40_int == var_41_int; // 0x3d7 Eq
	if(var_42_bool == 0) goto Label_986; // 0x3d8 JumpB
	return 0; // 0x3d9 Return
	
Label_986:
	var_43_bool = var_0_int == var_40_int; // 0x3da Eq
	if(var_43_bool == 0) goto Label_989; // 0x3db JumpB
	return 0; // 0x3dc Return
	
Label_989:
	var_0_int = var_40_int; // 0x3dd TMov
	var_44_int = 0; // 0x3de PushV
	var_44_int = var_0_int; // 0x3df MovT
	func_1013(var_44_int); // 0x3e0 NEW_2
	return 0; // 0x3e2 Return
}


func_470()
{
	var_142_object = Obj(); var_143_object = Obj(); // 0x1d6 PushV
	var_144_object = Obj(); // 0x1d7 PushV
	func_265(var_144_object); // 0x1d8 NEW_2
	var_143_object = var_144_object; // 0x1d9 Mov
	var_160_object = var_143_object; // 0x1db Push
	if(var_160_object == 0) goto Label_482; // 0x1dc JumpB
	var_161_int = 0; // 0x1dd PushI
	var_162_string = "output"; // 0x1de PushS
	SendMessage(var_161_int, var_162_string, var_143_object); // 0x1df Func
	goto Label_486; // 0x1e1 Jump
	
Label_486:
	return 2; // 0x1e6 Return
	
Label_482:
	var_163_int = 32768; // 0x1e2 PushI
	var_164_string = "output"; // 0x1e3 PushS
	SendMessage(var_163_int, var_164_string); // 0x1e4 Func
}


func_348(var_242_int)
{
	var_243_int = 0; var_244_int = 0; var_245_int = 0; var_246_object = Obj(); var_247_int = 0; var_248_int = 0; var_249_int = 0; var_250_object = Obj(); // 0x15c PushV
	GetItemCount(var_247_int); // 0x15d TObjFunc
	var_248_int = 0; // 0x15f MovI
	var_249_int = 0; // 0x160 MovI
	
Label_353:
	var_251_bool = var_249_int < var_247_int; // 0x161 LT
	if(var_251_bool == 0) goto Label_369; // 0x162 JumpB
	GetItem(var_250_object, var_249_int); // 0x163 TObjFunc
	var_252_bool = 0; var_253_object = Obj(); // 0x165 PushV
	var_253_object = var_250_object; // 0x166 Mov
	func_290(var_252_bool, var_253_object); // 0x167 NEW_2
	var_254_bool = var_252_bool == 0; // 0x169 Not
	if(var_254_bool == 0) goto Label_365; // 0x16a JumpB
	var_242_int = var_249_int; // 0x16b Mov
	return 8; // 0x16c Return
	
Label_365:
	var_250_object = 0; // 0x16d SetNull
	var_255_int = 1; // 0x16e PushI
	var_249_int = var_249_int + var_255_int; // 0x16f Add2
	goto Label_353; // 0x170 Jump
	
Label_369:
	var_242_int = -1; // 0x171 MovI
	return 8; // 0x172 Return
}


func_95(var_3_object, var_90_object)
{
	var_90_object = var_3_object; // 0x5f MovT
	return 0; // 0x60 Return
}


func_97(var_26_bool, var_28_string)
{
	var_30_int = 0; var_31_int = 0; // 0x61 PushV
	var_32_string = "combine"; // 0x62 PushS
	var_33_bool = var_28_string == var_32_string; // 0x63 Eq
	if(var_33_bool == 0) goto Label_106; // 0x64 JumpB
	var_34_bool = 0; // 0x65 PushV
	func_488(var_34_bool); // 0x66 NEW_2
	var_26_bool = 1; // 0x68 MovB
	return 2; // 0x69 Return
	
Label_106:
	var_31_int = 0; // 0x6a MovI
	
Label_107:
	var_154_int = 4; // 0x6b PushI
	var_155_bool = var_31_int < var_154_int; // 0x6c LT
	if(var_155_bool == 0) goto Label_128; // 0x6d JumpB
	var_156_string = "input0"; // 0x6e PushS
	var_157_int = 1; // 0x6f PushI
	var_158_int = var_31_int + var_157_int; // 0x70 Add
	var_159_int = var_156_string + var_158_int; // 0x71 Add
	var_160_bool = var_28_string == var_159_int; // 0x72 Eq
	if(var_160_bool == 0) goto Label_125; // 0x73 JumpB
	var_161_int = 0; // 0x74 PushV
	func_209(var_161_int); // 0x75 NEW_2
	var_162_bool = var_161_int > var_31_int; // 0x77 GT
	if(var_162_bool == 0) goto Label_125; // 0x78 JumpB
	var_163_bool = 0; var_164_int = 0; // 0x79 PushV
	var_164_int = var_31_int; // 0x7a Mov
	func_371(var_163_bool, var_164_int); // 0x7b NEW_2
	
Label_125:
	var_230_int = 1; // 0x7d PushI
	var_31_int = var_31_int + var_230_int; // 0x7e Add2
	goto Label_107; // 0x7f Jump
	
Label_128:
	var_231_string = "output"; // 0x80 PushS
	var_232_bool = var_28_string == var_231_string; // 0x81 Eq
	if(var_232_bool == 0) goto Label_134; // 0x82 JumpB
	var_233_bool = 0; // 0x83 PushV
	func_403(var_233_bool); // 0x84 NEW_2
	
Label_134:
	var_26_bool = 0; // 0x86 MovB
	return 2; // 0x87 Return
}


func_995(var_143_int)
{
	var_144_object = Obj(); var_145_int = 0; var_146_object = Obj(); var_147_int = 0; // 0x3e3 PushV
	var_148_object = Obj(); // 0x3e4 PushV
	func_95(var_147_int, var_148_object); // 0x3e5 NEW_2
	var_146_object = var_148_object; // 0x3e6 Mov
	var_149_string = "money"; // 0x3e8 PushS
	GetProperty(var_149_string, var_147_int); // 0x3e9 ObjFunc
	var_143_int = var_147_int; // 0x3eb Mov
	return 4; // 0x3ec Return
}


func_488(var_34_bool)
{
	var_35_float = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_int = 0; var_40_object = Obj(); var_41_int = 0; var_42_float = 0; var_43_object = Obj(); var_44_bool = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_int = 0; var_50_object = Obj(); var_51_int = 0; var_52_float = 0; var_53_object = Obj(); var_54_bool = 0; // 0x1e8 PushV
	var_55_int = 0; // 0x1e9 PushV
	func_209(var_55_int); // 0x1ea NEW_2
	var_80_int = 0; // 0x1ec PushI
	var_81_bool = var_55_int == var_80_int; // 0x1ed Eq
	if(var_81_bool == 0) goto Label_497; // 0x1ee JumpB
	var_34_bool = 0; // 0x1ef MovB
	return 20; // 0x1f0 Return
	
Label_497:
	var_82_object = Obj(); // 0x1f1 PushV
	func_265(var_82_object); // 0x1f2 NEW_2
	if(var_82_object == 0) goto Label_503; // 0x1f4 JumpB
	var_34_bool = 0; // 0x1f5 MovB
	return 20; // 0x1f6 Return
	
Label_503:
	var_45_float = 0; // 0x1f7 MovI
	var_46_float = 0; // 0x1f8 MovI
	var_47_float = 1; // 0x1f9 MovI
	var_48_float = 1; // 0x1fa MovI
	var_49_int = 0; // 0x1fb MovI
	
Label_508:
	var_98_int = 0; // 0x1fc PushV
	func_209(var_98_int); // 0x1fd NEW_2
	var_99_bool = var_49_int < var_98_int; // 0x1ff LT
	if(var_99_bool == 0) goto Label_539; // 0x200 JumpB
	var_100_object = Obj(); var_101_int = 0; // 0x201 PushV
	var_101_int = var_49_int; // 0x202 Mov
	func_234(var_100_object, var_101_int); // 0x203 NEW_2
	var_50_object = var_100_object; // 0x204 Mov
	var_120_int = 0; var_121_object = Obj(); // 0x206 PushV
	var_121_object = var_50_object; // 0x207 Mov
	func_301(var_120_int, var_121_object); // 0x208 NEW_2
	var_51_int = var_120_int; // 0x209 Mov
	get(var_52_float, var_51_int); // 0x20b TObjFunc
	var_45_float = var_45_float + var_52_float; // 0x20d Add2
	get(var_52_float, var_51_int); // 0x20e TObjFunc
	var_46_float = var_46_float + var_52_float; // 0x210 Add2
	get(var_52_float, var_51_int); // 0x211 TObjFunc
	var_47_float = var_47_float * var_52_float; // 0x213 Mult2
	get(var_52_float, var_51_int); // 0x214 TObjFunc
	var_48_float = var_48_float * var_52_float; // 0x216 Mult2
	var_50_object = 0; // 0x217 SetNull
	var_133_int = 1; // 0x218 PushI
	var_49_int = var_49_int + var_133_int; // 0x219 Add2
	goto Label_508; // 0x21a Jump
	
Label_539:
	var_45_float = var_45_float * var_47_float; // 0x21b Mult2
	var_46_float = var_46_float * var_48_float; // 0x21c Mult2
	var_134_int = 0; // 0x21d PushI
	var_135_bool = var_45_float > var_134_int; // 0x21e GT
	if(var_135_bool == 0) goto Label_545; // 0x21f JumpB
	goto Label_546; // 0x220 Jump
	
Label_546:
	var_136_int = 0; // 0x222 PushI
	var_137_bool = var_46_float > var_136_int; // 0x223 GT
	if(var_137_bool == 0) goto Label_550; // 0x224 JumpB
	goto Label_551; // 0x225 Jump
	
Label_551:
	var_138_float = 20.0; // 0x227 PushF
	var_45_float = var_45_float * var_138_float; // 0x228 Mult2
	var_139_float = 15.0; // 0x229 PushF
	var_46_float = var_46_float * var_139_float; // 0x22a Mult2
	var_140_int = 100; // 0x22b PushI
	var_141_bool = var_45_float > var_140_int; // 0x22c GT
	if(var_141_bool == 0) goto Label_559; // 0x22d JumpB
	var_45_float = 100; // 0x22e MovI
	
Label_559:
	var_142_int = 100; // 0x22f PushI
	var_143_bool = var_46_float > var_142_int; // 0x230 GT
	if(var_143_bool == 0) goto Label_563; // 0x231 JumpB
	var_46_float = 100; // 0x232 MovI
	
Label_563:
	CreateInvItem(var_53_object); // 0x233 Func
	var_144_string = "grass_combination"; // 0x235 PushS
	SetItemName(var_144_string); // 0x236 ObjFunc
	var_145_string = "im_inc"; // 0x238 PushS
	var_146_float = 100.0; // 0x239 PushF
	var_147_float = var_45_float / var_146_float; // 0x23a Div
	SetProperty(var_145_string, var_147_float); // 0x23b ObjFunc
	var_148_string = "hl_inc"; // 0x23d PushS
	var_149_float = 100.0; // 0x23e PushF
	var_150_float = var_46_float / var_149_float; // 0x23f Div
	var_151_int = -var_150_float; // 0x240 Neg
	SetProperty(var_148_string, var_151_int); // 0x241 ObjFunc
	RemoveAllItems(); // 0x243 TObjFunc
	var_152_int = 0; // 0x245 PushI
	var_153_int = 1; // 0x246 PushI
	AddItem(var_54_bool, var_53_object, var_152_int, var_153_int); // 0x247 TObjFunc
	var_34_bool = 1; // 0x249 MovB
	return 20; // 0x24a Return
	
Label_550:
	var_46_float = -var_46_float; // 0x226 Neg2
	
Label_545:
	var_45_float = -var_45_float; // 0x221 Neg2
}


func_234(var_100_object, var_101_int)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_object = Obj(); var_106_int = 0; var_107_object = Obj(); var_108_int = 0; var_109_int = 0; var_110_int = 0; var_111_object = Obj(); var_112_int = 0; var_113_object = Obj(); // 0xea PushV
	GetItemCount(var_108_int); // 0xeb TObjFunc
	var_109_int = 0; // 0xed MovI
	var_110_int = 0; // 0xee MovI
	
Label_239:
	var_114_bool = var_110_int < var_108_int; // 0xef LT
	if(var_114_bool == 0) goto Label_261; // 0xf0 JumpB
	GetItem(var_111_object, var_110_int); // 0xf1 TObjFunc
	var_115_bool = 0; var_116_object = Obj(); // 0xf3 PushV
	var_116_object = var_111_object; // 0xf4 Mov
	func_290(var_115_bool, var_116_object); // 0xf5 NEW_2
	var_117_bool = var_115_bool == 0; // 0xf7 Not
	if(var_117_bool == 0) goto Label_250; // 0xf8 JumpB
	goto Label_258; // 0xf9 Jump
	
Label_258:
	var_118_int = 1; // 0x102 PushI
	var_110_int = var_110_int + var_118_int; // 0x103 Add2
	goto Label_239; // 0x104 Jump
	
Label_250:
	GetItemAmount(var_112_int, var_110_int); // 0xfa TObjFunc
	var_109_int = var_109_int + var_112_int; // 0xfc Add2
	var_119_bool = var_109_int > var_101_int; // 0xfd GT
	if(var_119_bool == 0) goto Label_257; // 0xfe JumpB
	var_100_object = var_111_object; // 0xff Mov
	return 12; // 0x100 Return
	
Label_257:
	var_111_object = 0; // 0x101 SetNull
	
Label_261:
	var_113_object = 0; // 0x105 SetNull
	var_100_object = var_113_object; // 0x106 Mov
	return 12; // 0x107 Return
}


func_1006()
{
	var_143_int = 0; // 0x3ee PushV
	func_995(var_143_int); // 0x3ef NEW_2
	var_150_string = "money"; // 0x3f1 PushS
	SendMessage(var_143_int, var_150_string); // 0x3f2 Func
	return 0; // 0x3f4 Return
}


func_371(var_163_bool, var_164_int)
{
	var_165_int = 0; var_166_bool = 0; var_167_int = 0; var_168_bool = 0; // 0x173 PushV
	var_169_int = 0; var_170_int = 0; // 0x174 PushV
	var_170_int = var_164_int; // 0x175 Mov
	func_319(var_169_int, var_170_int); // 0x176 NEW_2
	var_167_int = var_169_int; // 0x177 Mov
	var_187_int = -1; // 0x179 PushI
	var_188_bool = var_167_int == var_187_int; // 0x17a Eq
	if(var_188_bool == 0) goto Label_382; // 0x17b JumpB
	var_163_bool = 0; // 0x17c MovB
	return 4; // 0x17d Return
	
Label_382:
	var_189_object = Obj(); var_190_int = 0; // 0x17e PushV
	var_190_int = var_164_int; // 0x17f Mov
	func_234(var_189_object, var_190_int); // 0x180 NEW_2
	var_191_int = 4; // 0x182 PushI
	var_192_int = 1; // 0x183 PushI
	AddItem(var_168_bool, var_189_object, var_191_int, var_192_int); // 0x184 TObjFunc
	var_193_bool = var_168_bool == 0; // 0x186 Not
	if(var_193_bool == 0) goto Label_394; // 0x187 JumpB
	var_163_bool = 0; // 0x188 MovB
	return 4; // 0x189 Return
	
Label_394:
	var_194_int = 1; // 0x18a PushI
	RemoveItem(var_167_int, var_194_int); // 0x18b TObjFunc
	var_195_int = 0; // 0x18d PushV
	var_195_int = 4; // 0x18e MovI
	func_981(var_168_bool, var_195_int); // 0x18f NEW_2
	var_163_bool = 1; // 0x191 MovB
	return 4; // 0x192 Return
}


func_1013(var_44_int)
{
	var_45_int = 0; // 0x3f6 PushI
	var_46_bool = var_44_int != var_45_int; // 0x3f7 Neq
	if(var_46_bool == 0) goto Label_1022; // 0x3f8 JumpB
	var_47_int = 0; // 0x3f9 PushI
	var_48_string = "button_weapon"; // 0x3fa PushS
	SendMessage(var_47_int, var_48_string); // 0x3fb Func
	goto Label_1026; // 0x3fd Jump
	
Label_1026:
	var_49_int = 1; // 0x402 PushI
	var_50_bool = var_44_int != var_49_int; // 0x403 Neq
	if(var_50_bool == 0) goto Label_1034; // 0x404 JumpB
	var_51_int = 0; // 0x405 PushI
	var_52_string = "button_clothes"; // 0x406 PushS
	SendMessage(var_51_int, var_52_string); // 0x407 Func
	goto Label_1038; // 0x409 Jump
	
Label_1038:
	var_53_int = 2; // 0x40e PushI
	var_54_bool = var_44_int != var_53_int; // 0x40f Neq
	if(var_54_bool == 0) goto Label_1046; // 0x410 JumpB
	var_55_int = 0; // 0x411 PushI
	var_56_string = "button_medcine"; // 0x412 PushS
	SendMessage(var_55_int, var_56_string); // 0x413 Func
	goto Label_1050; // 0x415 Jump
	
Label_1050:
	var_57_int = 3; // 0x41a PushI
	var_58_bool = var_44_int != var_57_int; // 0x41b Neq
	if(var_58_bool == 0) goto Label_1058; // 0x41c JumpB
	var_59_int = 0; // 0x41d PushI
	var_60_string = "button_food"; // 0x41e PushS
	SendMessage(var_59_int, var_60_string); // 0x41f Func
	goto Label_1062; // 0x421 Jump
	
Label_1062:
	var_61_int = 4; // 0x426 PushI
	var_62_bool = var_44_int != var_61_int; // 0x427 Neq
	if(var_62_bool == 0) goto Label_1070; // 0x428 JumpB
	var_63_int = 0; // 0x429 PushI
	var_64_string = "button_other"; // 0x42a PushS
	SendMessage(var_63_int, var_64_string); // 0x42b Func
	goto Label_1074; // 0x42d Jump
	
Label_1074:
	return 0; // 0x432 Return
	
Label_1070:
	var_65_int = 1; // 0x42e PushI
	var_66_string = "button_other"; // 0x42f PushS
	SendMessage(var_65_int, var_66_string); // 0x430 Func
	
Label_1058:
	var_67_int = 1; // 0x422 PushI
	var_68_string = "button_food"; // 0x423 PushS
	SendMessage(var_67_int, var_68_string); // 0x424 Func
	
Label_1046:
	var_69_int = 1; // 0x416 PushI
	var_70_string = "button_medcine"; // 0x417 PushS
	SendMessage(var_69_int, var_70_string); // 0x418 Func
	
Label_1034:
	var_71_int = 1; // 0x40a PushI
	var_72_string = "button_clothes"; // 0x40b PushS
	SendMessage(var_71_int, var_72_string); // 0x40c Func
	
Label_1022:
	var_73_int = 1; // 0x3fe PushI
	var_74_string = "button_weapon"; // 0x3ff PushS
	SendMessage(var_73_int, var_74_string); // 0x400 Func
}


