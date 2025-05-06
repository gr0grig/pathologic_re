task_0_event_100(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_int)
{
	DestroyWindow(); // 0x26d Func
	return 0; // 0x26f Return
}


task_0_event_1(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_float)
{
	var_10_int = 0; // 0x271 PushV
	var_10_int = var_0_int; // 0x272 MovT
	func_845(var_10_int); // 0x273 NEW_2
	func_776(); // 0x276 NEW_2
	func_136(); // 0x279 NEW_2
	return 0; // 0x27b Return
}


task_0_event_200(var_0_int, var_1_object, var_2_object, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_int, var_10_string, var_11_object)
{
	var_12_bool = 0; var_13_int = 0; var_14_int = 0; var_15_object = Obj(); var_16_int = 0; var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_object = Obj(); var_22_int = 0; var_23_object = Obj(); // 0x27c PushV
	var_18_bool = 0; // 0x27d MovB
	var_24_string = "button_weapon"; // 0x27e PushS
	var_25_bool = var_10_string == var_24_string; // 0x27f Eq
	if(var_25_bool == 0) goto Label_647; // 0x280 JumpB
	var_26_int = 0; // 0x281 PushV
	var_26_int = 0; // 0x282 MovI
	func_751(var_23_object, var_26_int); // 0x283 NEW_2
	var_18_bool = 1; // 0x285 MovB
	goto Label_739; // 0x286 Jump
	
Label_739:
	var_61_bool = var_18_bool == 0; // 0x2e3 Not
	if(var_61_bool == 0) goto Label_748; // 0x2e4 JumpB
	var_62_bool = 0; var_63_int = 0; var_64_string = ""; var_65_object = Obj(); // 0x2e5 PushV
	var_63_int = var_9_int; // 0x2e6 Mov
	var_64_string = var_10_string; // 0x2e7 Mov
	var_65_object = var_11_object; // 0x2e8 Mov
	func_97(var_64_string, var_65_object); // 0x2e9 NEW_2
	var_18_bool = var_62_bool; // 0x2ea Mov
	
Label_748:
	var_263_bool = var_18_bool; // 0x2ec Push
	if(var_263_bool == 0) goto Label_750; // 0x2ed JumpB
	
Label_750:
	return 12; // 0x2ee Return
	
Label_647:
	var_264_string = "button_clothes"; // 0x287 PushS
	var_265_bool = var_10_string == var_264_string; // 0x288 Eq
	if(var_265_bool == 0) goto Label_656; // 0x289 JumpB
	var_266_int = 0; // 0x28a PushV
	var_266_int = 1; // 0x28b MovI
	func_751(var_23_object, var_266_int); // 0x28c NEW_2
	var_18_bool = 1; // 0x28e MovB
	goto Label_739; // 0x28f Jump
	
Label_656:
	var_267_string = "button_medcine"; // 0x290 PushS
	var_268_bool = var_10_string == var_267_string; // 0x291 Eq
	if(var_268_bool == 0) goto Label_665; // 0x292 JumpB
	var_269_int = 0; // 0x293 PushV
	var_269_int = 2; // 0x294 MovI
	func_751(var_23_object, var_269_int); // 0x295 NEW_2
	var_18_bool = 1; // 0x297 MovB
	goto Label_739; // 0x298 Jump
	
Label_665:
	var_270_string = "button_food"; // 0x299 PushS
	var_271_bool = var_10_string == var_270_string; // 0x29a Eq
	if(var_271_bool == 0) goto Label_674; // 0x29b JumpB
	var_272_int = 0; // 0x29c PushV
	var_272_int = 3; // 0x29d MovI
	func_751(var_23_object, var_272_int); // 0x29e NEW_2
	var_18_bool = 1; // 0x2a0 MovB
	goto Label_739; // 0x2a1 Jump
	
Label_674:
	var_273_string = "button_other"; // 0x2a2 PushS
	var_274_bool = var_10_string == var_273_string; // 0x2a3 Eq
	if(var_274_bool == 0) goto Label_683; // 0x2a4 JumpB
	var_275_int = 0; // 0x2a5 PushV
	var_275_int = 4; // 0x2a6 MovI
	func_751(var_23_object, var_275_int); // 0x2a7 NEW_2
	var_18_bool = 1; // 0x2a9 MovB
	goto Label_739; // 0x2aa Jump
	
Label_683:
	var_276_string = "button_detector"; // 0x2ab PushS
	var_277_bool = var_10_string == var_276_string; // 0x2ac Eq
	if(var_277_bool == 0) goto Label_687; // 0x2ad JumpB
	goto Label_739; // 0x2ae Jump
	
Label_687:
	var_278_string = "button_anticeptic"; // 0x2af PushS
	var_279_bool = var_10_string == var_278_string; // 0x2b0 Eq
	if(var_279_bool == 0) goto Label_691; // 0x2b1 JumpB
	goto Label_739; // 0x2b2 Jump
	
Label_691:
	var_280_int = 0; // 0x2b3 PushI
	var_281_bool = var_9_int != var_280_int; // 0x2b4 Neq
	if(var_281_bool == 0) goto Label_700; // 0x2b5 JumpB
	var_282_string = "noinv_drop"; // 0x2b6 PushS
	GetVariable(var_282_string, var_19_int); // 0x2b7 Func
	var_283_int = var_19_int; // 0x2b9 Push
	if(var_283_int == 0) goto Label_700; // 0x2ba JumpB
	return 12; // 0x2bb Return
	
Label_700:
	var_20_int = 0; // 0x2bc MovI
	
Label_701:
	var_284_int = 12; // 0x2bd PushI
	var_285_bool = var_20_int < var_284_int; // 0x2be LT
	if(var_285_bool == 0) goto Label_739; // 0x2bf JumpB
	var_286_string = ""; var_287_int = 0; // 0x2c0 PushV
	var_287_int = var_20_int; // 0x2c1 Mov
	func_932(var_286_string, var_287_int); // 0x2c2 NEW_2
	var_298_bool = var_10_string == var_286_string; // 0x2c4 Eq
	if(var_298_bool == 0) goto Label_736; // 0x2c5 JumpB
	var_299_object = Obj(); // 0x2c6 PushV
	func_95(var_23_object, var_299_object); // 0x2c7 NEW_2
	var_21_object = var_299_object; // 0x2c8 Mov
	GetItemCount(var_22_int, var_0_int); // 0x2ca ObjFunc
	var_300_bool = var_22_int > var_20_int; // 0x2cc GT
	if(var_300_bool == 0) goto Label_734; // 0x2cd JumpB
	GetItem(var_23_object, var_20_int, var_0_int); // 0x2ce ObjFunc
	var_301_bool = 0; var_302_object = Obj(); // 0x2d0 PushV
	var_302_object = var_23_object; // 0x2d1 Mov
	func_143(var_301_bool, var_302_object); // 0x2d2 NEW_2
	var_305_bool = var_301_bool == 0; // 0x2d4 Not
	if(var_305_bool == 0) goto Label_733; // 0x2d5 JumpB
	var_306_bool = 0; var_307_int = 0; var_308_bool = 0; // 0x2d6 PushV
	var_307_int = var_20_int; // 0x2d7 Mov
	var_309_int = 0; // 0x2d8 PushI
	var_308_bool = var_9_int == var_309_int; // 0x2d9 Eq2
	func_154(var_306_bool, var_307_int, var_308_bool); // 0x2da NEW_2
	var_18_bool = var_306_bool; // 0x2db Mov
	
Label_733:
	var_23_object = 0; // 0x2dd SetNull
	
Label_734:
	goto Label_739; // 0x2de Jump
	
Label_736:
	var_336_int = 1; // 0x2e0 PushI
	var_20_int = var_20_int + var_336_int; // 0x2e1 Add2
	goto Label_701; // 0x2e2 Jump
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


func_776()
{
	var_139_int = 0; // 0x308 PushV
	func_765(var_139_int); // 0x309 NEW_2
	var_146_string = "money"; // 0x30b PushS
	SendMessage(var_139_int, var_146_string); // 0x30c Func
	return 0; // 0x30e Return
}


func_265(var_118_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_object = Obj(); var_123_object = Obj(); var_124_int = 0; var_125_int = 0; var_126_int = 0; var_127_object = Obj(); var_128_object = Obj(); // 0x109 PushV
	GetItemCount(var_124_int); // 0x10a TObjFunc
	var_125_int = 0; // 0x10c MovI
	var_126_int = 0; // 0x10d MovI
	
Label_270:
	var_129_bool = var_126_int < var_124_int; // 0x10e LT
	if(var_129_bool == 0) goto Label_286; // 0x10f JumpB
	GetItem(var_127_object, var_126_int); // 0x110 TObjFunc
	var_130_bool = 0; var_131_object = Obj(); // 0x112 PushV
	var_131_object = var_127_object; // 0x113 Mov
	func_290(var_130_bool, var_131_object); // 0x114 NEW_2
	var_132_bool = var_130_bool == 0; // 0x116 Not
	if(var_132_bool == 0) goto Label_282; // 0x117 JumpB
	var_118_object = var_127_object; // 0x118 Mov
	return 10; // 0x119 Return
	
Label_282:
	var_127_object = 0; // 0x11a SetNull
	var_133_int = 1; // 0x11b PushI
	var_126_int = var_126_int + var_133_int; // 0x11c Add2
	goto Label_270; // 0x11d Jump
	
Label_286:
	var_128_object = 0; // 0x11e SetNull
	var_118_object = var_128_object; // 0x11f Mov
	return 10; // 0x120 Return
}


func_136()
{
	func_434(); // 0x89 NEW_2
	func_470(); // 0x8c NEW_2
	return 0; // 0x8e Return
}


func_203(var_323_bool)
{
	var_324_int = 0; // 0xcb PushV
	func_209(var_324_int); // 0xcc NEW_2
	var_325_int = 4; // 0xce PushI
	var_323_bool = var_324_int < var_325_int; // 0xcf LT2
	return 0; // 0xd0 Return
}


func_588(var_0_int, var_35_int)
{
	var_0_int = -1; // 0x24d TMovI
	var_36_int = 0; // 0x24e PushV
	var_36_int = var_35_int; // 0x24f Mov
	func_751(var_35_int, var_36_int); // 0x250 NEW_2
	var_71_int = 0; // 0x252 PushV
	var_71_int = var_0_int; // 0x253 MovT
	func_845(var_71_int); // 0x254 NEW_2
	func_776(); // 0x257 NEW_2
	var_147_string = "default"; // 0x259 PushS
	SetCursor(var_147_string); // 0x25a Func
	ShowCursor(); // 0x25c Func
	CaptureKeyboard(); // 0x25e Func
	var_148_bool = 0; // 0x260 PushB
	SetOwnerDraw(var_148_bool); // 0x261 Func
	var_149_bool = 1; // 0x263 PushB
	SetNeedUpdate(var_149_bool); // 0x264 Func
	func_153(); // 0x267 NEW_2
	ProcessEvents(); // 0x269 Func
	return 0; // 0x26b Return
}


func_845(var_71_int)
{
	var_72_object = Obj(); var_73_int = 0; var_74_int = 0; var_75_object = Obj(); var_76_int = 0; var_77_bool = 0; var_78_bool = 0; var_79_object = Obj(); var_80_int = 0; var_81_int = 0; var_82_object = Obj(); var_83_int = 0; var_84_bool = 0; var_85_bool = 0; // 0x34d PushV
	var_86_object = Obj(); // 0x34e PushV
	func_95(var_85_bool, var_86_object); // 0x34f NEW_2
	var_79_object = var_86_object; // 0x350 Mov
	GetItemCount(var_80_int, var_71_int); // 0x352 ObjFunc
	var_81_int = 0; // 0x354 MovI
	
Label_853:
	var_87_int = 12; // 0x355 PushI
	var_88_bool = var_81_int < var_87_int; // 0x356 LT
	if(var_88_bool == 0) goto Label_930; // 0x357 JumpB
	var_89_bool = var_81_int < var_80_int; // 0x358 LT
	if(var_89_bool == 0) goto Label_920; // 0x359 JumpB
	GetItem(var_82_object, var_81_int, var_71_int); // 0x35a ObjFunc
	GetItemAmount(var_83_int, var_81_int, var_71_int); // 0x35c ObjFunc
	var_90_bool = 0; var_91_int = 0; var_92_int = 0; // 0x35e PushV
	var_91_int = var_81_int; // 0x35f Mov
	var_92_int = var_71_int; // 0x360 Mov
	func_150(var_92_int); // 0x361 NEW_2
	var_84_bool = var_90_bool; // 0x362 Mov
	var_93_bool = 0; var_94_object = Obj(); // 0x364 PushV
	var_94_object = var_82_object; // 0x365 Mov
	func_143(var_93_bool, var_94_object); // 0x366 NEW_2
	var_85_bool = var_93_bool; // 0x367 Mov
	var_106_bool = var_84_bool; // 0x369 Push
	if(var_106_bool == 0) goto Label_893; // 0x36a JumpB
	var_107_bool = var_85_bool; // 0x36b Push
	if(var_107_bool == 0) goto Label_885; // 0x36c JumpB
	var_108_int = 0; // 0x36d PushI
	var_109_string = ""; var_110_int = 0; // 0x36e PushV
	var_110_int = var_81_int; // 0x36f Mov
	func_932(var_109_string, var_110_int); // 0x370 NEW_2
	SendMessage(var_108_int, var_109_string, var_82_object); // 0x372 Func
	goto Label_892; // 0x374 Jump
	
Label_892:
	goto Label_910; // 0x37c Jump
	
Label_910:
	var_121_int = 65536; // 0x38e PushI
	var_122_int = var_83_int | var_121_int; // 0x38f Or
	var_123_string = ""; var_124_int = 0; // 0x390 PushV
	var_124_int = var_81_int; // 0x391 Mov
	func_932(var_123_string, var_124_int); // 0x392 NEW_2
	SendMessage(var_122_int, var_123_string); // 0x394 Func
	var_82_object = 0; // 0x396 SetNull
	goto Label_927; // 0x397 Jump
	
Label_927:
	var_125_int = 1; // 0x39f PushI
	var_81_int = var_81_int + var_125_int; // 0x3a0 Add2
	goto Label_853; // 0x3a1 Jump
	
Label_885:
	var_126_int = 16384; // 0x375 PushI
	var_127_string = ""; var_128_int = 0; // 0x376 PushV
	var_128_int = var_81_int; // 0x377 Mov
	func_932(var_127_string, var_128_int); // 0x378 NEW_2
	SendMessage(var_126_int, var_127_string, var_82_object); // 0x37a Func
	
Label_893:
	var_129_bool = var_85_bool; // 0x37d Push
	if(var_129_bool == 0) goto Label_903; // 0x37e JumpB
	var_130_int = 131072; // 0x37f PushI
	var_131_string = ""; var_132_int = 0; // 0x380 PushV
	var_132_int = var_81_int; // 0x381 Mov
	func_932(var_131_string, var_132_int); // 0x382 NEW_2
	SendMessage(var_130_int, var_131_string, var_82_object); // 0x384 Func
	goto Label_910; // 0x386 Jump
	
Label_903:
	var_133_int = 0; // 0x387 PushI
	var_134_string = ""; var_135_int = 0; // 0x388 PushV
	var_135_int = var_81_int; // 0x389 Mov
	func_932(var_134_string, var_135_int); // 0x38a NEW_2
	SendMessage(var_133_int, var_134_string, var_82_object); // 0x38c Func
	
Label_920:
	var_136_int = 32768; // 0x398 PushI
	var_137_string = ""; var_138_int = 0; // 0x399 PushV
	var_138_int = var_81_int; // 0x39a Mov
	func_932(var_137_string, var_138_int); // 0x39b NEW_2
	SendMessage(var_136_int, var_137_string); // 0x39d Func
	
Label_930:
	return 14; // 0x3a2 Return
}


func_783(var_40_int)
{
	var_41_int = 0; // 0x310 PushI
	var_42_bool = var_40_int != var_41_int; // 0x311 Neq
	if(var_42_bool == 0) goto Label_792; // 0x312 JumpB
	var_43_int = 0; // 0x313 PushI
	var_44_string = "button_weapon"; // 0x314 PushS
	SendMessage(var_43_int, var_44_string); // 0x315 Func
	goto Label_796; // 0x317 Jump
	
Label_796:
	var_45_int = 1; // 0x31c PushI
	var_46_bool = var_40_int != var_45_int; // 0x31d Neq
	if(var_46_bool == 0) goto Label_804; // 0x31e JumpB
	var_47_int = 0; // 0x31f PushI
	var_48_string = "button_clothes"; // 0x320 PushS
	SendMessage(var_47_int, var_48_string); // 0x321 Func
	goto Label_808; // 0x323 Jump
	
Label_808:
	var_49_int = 2; // 0x328 PushI
	var_50_bool = var_40_int != var_49_int; // 0x329 Neq
	if(var_50_bool == 0) goto Label_816; // 0x32a JumpB
	var_51_int = 0; // 0x32b PushI
	var_52_string = "button_medcine"; // 0x32c PushS
	SendMessage(var_51_int, var_52_string); // 0x32d Func
	goto Label_820; // 0x32f Jump
	
Label_820:
	var_53_int = 3; // 0x334 PushI
	var_54_bool = var_40_int != var_53_int; // 0x335 Neq
	if(var_54_bool == 0) goto Label_828; // 0x336 JumpB
	var_55_int = 0; // 0x337 PushI
	var_56_string = "button_food"; // 0x338 PushS
	SendMessage(var_55_int, var_56_string); // 0x339 Func
	goto Label_832; // 0x33b Jump
	
Label_832:
	var_57_int = 4; // 0x340 PushI
	var_58_bool = var_40_int != var_57_int; // 0x341 Neq
	if(var_58_bool == 0) goto Label_840; // 0x342 JumpB
	var_59_int = 0; // 0x343 PushI
	var_60_string = "button_other"; // 0x344 PushS
	SendMessage(var_59_int, var_60_string); // 0x345 Func
	goto Label_844; // 0x347 Jump
	
Label_844:
	return 0; // 0x34c Return
	
Label_840:
	var_61_int = 1; // 0x348 PushI
	var_62_string = "button_other"; // 0x349 PushS
	SendMessage(var_61_int, var_62_string); // 0x34a Func
	
Label_828:
	var_63_int = 1; // 0x33c PushI
	var_64_string = "button_food"; // 0x33d PushS
	SendMessage(var_63_int, var_64_string); // 0x33e Func
	
Label_816:
	var_65_int = 1; // 0x330 PushI
	var_66_string = "button_medcine"; // 0x331 PushS
	SendMessage(var_65_int, var_66_string); // 0x332 Func
	
Label_804:
	var_67_int = 1; // 0x324 PushI
	var_68_string = "button_clothes"; // 0x325 PushS
	SendMessage(var_67_int, var_68_string); // 0x326 Func
	
Label_792:
	var_69_int = 1; // 0x318 PushI
	var_70_string = "button_weapon"; // 0x319 PushS
	SendMessage(var_69_int, var_70_string); // 0x31a Func
}


func_143(var_93_bool, var_94_object)
{
	var_95_bool = 0; var_96_object = Obj(); // 0x90 PushV
	var_96_object = var_94_object; // 0x91 Mov
	func_290(var_95_bool, var_96_object); // 0x92 NEW_2
	var_93_bool = !var_95_bool; // 0x94 Not2
	return 0; // 0x95 Return
}


func_209(var_91_int)
{
	var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_object = Obj(); var_96_int = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; var_100_object = Obj(); var_101_int = 0; // 0xd1 PushV
	GetItemCount(var_97_int); // 0xd2 TObjFunc
	var_98_int = 0; // 0xd4 MovI
	var_99_int = 0; // 0xd5 MovI
	
Label_214:
	var_102_bool = var_99_int < var_97_int; // 0xd6 LT
	if(var_102_bool == 0) goto Label_232; // 0xd7 JumpB
	GetItem(var_100_object, var_99_int); // 0xd8 TObjFunc
	var_103_bool = 0; var_104_object = Obj(); // 0xda PushV
	var_104_object = var_100_object; // 0xdb Mov
	func_290(var_103_bool, var_104_object); // 0xdc NEW_2
	var_114_bool = var_103_bool == 0; // 0xde Not
	if(var_114_bool == 0) goto Label_225; // 0xdf JumpB
	goto Label_229; // 0xe0 Jump
	
Label_229:
	var_115_int = 1; // 0xe5 PushI
	var_99_int = var_99_int + var_115_int; // 0xe6 Add2
	goto Label_214; // 0xe7 Jump
	
Label_225:
	GetItemAmount(var_101_int, var_99_int); // 0xe1 TObjFunc
	var_98_int = var_98_int + var_101_int; // 0xe3 Add2
	var_100_object = 0; // 0xe4 SetNull
	
Label_232:
	var_91_int = var_98_int; // 0xe8 Mov
	return 10; // 0xe9 Return
}


func_403(var_235_bool)
{
	var_236_object = Obj(); var_237_int = 0; var_238_bool = 0; var_239_object = Obj(); var_240_int = 0; var_241_bool = 0; // 0x193 PushV
	var_242_object = Obj(); // 0x194 PushV
	func_265(var_242_object); // 0x195 NEW_2
	var_239_object = var_242_object; // 0x196 Mov
	var_243_bool = var_239_object == 0; // 0x198 Not
	if(var_243_bool == 0) goto Label_412; // 0x199 JumpB
	var_235_bool = 0; // 0x19a MovB
	return 6; // 0x19b Return
	
Label_412:
	var_244_int = 0; // 0x19c PushV
	func_348(var_244_int); // 0x19d NEW_2
	var_240_int = var_244_int; // 0x19e Mov
	var_258_int = 2; // 0x1a0 PushI
	var_259_int = 1; // 0x1a1 PushI
	AddItem(var_241_bool, var_239_object, var_258_int, var_259_int); // 0x1a2 TObjFunc
	var_260_bool = var_241_bool == 0; // 0x1a4 Not
	if(var_260_bool == 0) goto Label_424; // 0x1a5 JumpB
	var_235_bool = 0; // 0x1a6 MovB
	return 6; // 0x1a7 Return
	
Label_424:
	var_261_int = 1; // 0x1a8 PushI
	RemoveItem(var_240_int, var_261_int); // 0x1a9 TObjFunc
	var_262_int = 0; // 0x1ab PushV
	var_262_int = 2; // 0x1ac MovI
	func_751(var_241_bool, var_262_int); // 0x1ad NEW_2
	var_235_bool = 1; // 0x1af MovB
	return 6; // 0x1b0 Return
}


func_150(var_90_bool)
{
	var_90_bool = 0; // 0x97 MovB
	return 0; // 0x98 Return
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


func_153()
{
	return 0; // 0x99 Return
}


func_154(var_306_bool, var_307_int, var_308_bool)
{
	var_310_bool = var_308_bool; // 0x9b Push
	if(var_310_bool == 0) goto Label_163; // 0x9c JumpB
	var_311_bool = 0; var_312_int = 0; // 0x9d PushV
	var_312_int = var_307_int; // 0x9e Mov
	func_165(var_311_bool, var_312_int); // 0x9f NEW_2
	var_306_bool = 1; // 0xa1 MovB
	return 0; // 0xa2 Return
	
Label_163:
	var_306_bool = 0; // 0xa3 MovB
	return 0; // 0xa4 Return
}


func_348(var_244_int)
{
	var_245_int = 0; var_246_int = 0; var_247_int = 0; var_248_object = Obj(); var_249_int = 0; var_250_int = 0; var_251_int = 0; var_252_object = Obj(); // 0x15c PushV
	GetItemCount(var_249_int); // 0x15d TObjFunc
	var_250_int = 0; // 0x15f MovI
	var_251_int = 0; // 0x160 MovI
	
Label_353:
	var_253_bool = var_251_int < var_249_int; // 0x161 LT
	if(var_253_bool == 0) goto Label_369; // 0x162 JumpB
	GetItem(var_252_object, var_251_int); // 0x163 TObjFunc
	var_254_bool = 0; var_255_object = Obj(); // 0x165 PushV
	var_255_object = var_252_object; // 0x166 Mov
	func_290(var_254_bool, var_255_object); // 0x167 NEW_2
	var_256_bool = var_254_bool == 0; // 0x169 Not
	if(var_256_bool == 0) goto Label_365; // 0x16a JumpB
	var_244_int = var_251_int; // 0x16b Mov
	return 8; // 0x16c Return
	
Label_365:
	var_252_object = 0; // 0x16d SetNull
	var_257_int = 1; // 0x16e PushI
	var_251_int = var_251_int + var_257_int; // 0x16f Add2
	goto Label_353; // 0x170 Jump
	
Label_369:
	var_244_int = -1; // 0x171 MovI
	return 8; // 0x172 Return
}


func_95(var_3_object, var_86_object)
{
	var_86_object = var_3_object; // 0x5f MovT
	return 0; // 0x60 Return
}


func_97(var_62_bool, var_64_string)
{
	var_66_int = 0; var_67_int = 0; // 0x61 PushV
	var_68_string = "combine"; // 0x62 PushS
	var_69_bool = var_64_string == var_68_string; // 0x63 Eq
	if(var_69_bool == 0) goto Label_106; // 0x64 JumpB
	var_70_bool = 0; // 0x65 PushV
	func_488(var_70_bool); // 0x66 NEW_2
	var_62_bool = 1; // 0x68 MovB
	return 2; // 0x69 Return
	
Label_106:
	var_67_int = 0; // 0x6a MovI
	
Label_107:
	var_190_int = 4; // 0x6b PushI
	var_191_bool = var_67_int < var_190_int; // 0x6c LT
	if(var_191_bool == 0) goto Label_128; // 0x6d JumpB
	var_192_string = "input0"; // 0x6e PushS
	var_193_int = 1; // 0x6f PushI
	var_194_int = var_67_int + var_193_int; // 0x70 Add
	var_195_int = var_192_string + var_194_int; // 0x71 Add
	var_196_bool = var_64_string == var_195_int; // 0x72 Eq
	if(var_196_bool == 0) goto Label_125; // 0x73 JumpB
	var_197_int = 0; // 0x74 PushV
	func_209(var_197_int); // 0x75 NEW_2
	var_198_bool = var_197_int > var_67_int; // 0x77 GT
	if(var_198_bool == 0) goto Label_125; // 0x78 JumpB
	var_199_bool = 0; var_200_int = 0; // 0x79 PushV
	var_200_int = var_67_int; // 0x7a Mov
	func_371(var_199_bool, var_200_int); // 0x7b NEW_2
	
Label_125:
	var_232_int = 1; // 0x7d PushI
	var_67_int = var_67_int + var_232_int; // 0x7e Add2
	goto Label_107; // 0x7f Jump
	
Label_128:
	var_233_string = "output"; // 0x80 PushS
	var_234_bool = var_64_string == var_233_string; // 0x81 Eq
	if(var_234_bool == 0) goto Label_134; // 0x82 JumpB
	var_235_bool = 0; // 0x83 PushV
	func_403(var_235_bool); // 0x84 NEW_2
	
Label_134:
	var_62_bool = 0; // 0x86 MovB
	return 2; // 0x87 Return
}


func_290(var_95_bool, var_96_object)
{
	var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_bool = 0; // 0x122 PushV
	var_101_int = 0; var_102_object = Obj(); // 0x123 PushV
	var_102_object = var_96_object; // 0x124 Mov
	func_948(var_102_object); // 0x125 NEW_2
	var_99_int = var_101_int; // 0x126 Mov
	var_105_string = "Grass"; // 0x128 PushS
	HasInvItemProperty(var_100_bool, var_99_int, var_105_string); // 0x129 Func
	var_95_bool = var_100_bool; // 0x12b Mov
	return 4; // 0x12c Return
}


func_932(var_109_string, var_110_int)
{
	var_111_int = 1; // 0x3a5 PushI
	var_112_int = var_110_int + var_111_int; // 0x3a6 Add
	var_113_int = 10; // 0x3a7 PushI
	var_114_bool = var_112_int < var_113_int; // 0x3a8 LT
	if(var_114_bool == 0) goto Label_943; // 0x3a9 JumpB
	var_115_string = "slot0"; // 0x3aa PushS
	var_116_int = 1; // 0x3ab PushI
	var_117_int = var_110_int + var_116_int; // 0x3ac Add
	var_109_string = var_115_string + var_117_int; // 0x3ad Add2
	return 0; // 0x3ae Return
	
Label_943:
	var_118_string = "slot"; // 0x3af PushS
	var_119_int = 1; // 0x3b0 PushI
	var_120_int = var_110_int + var_119_int; // 0x3b1 Add
	var_109_string = var_118_string + var_120_int; // 0x3b2 Add2
	return 0; // 0x3b3 Return
}


func_165(var_311_bool, var_312_int)
{
	var_313_object = Obj(); var_314_int = 0; var_315_int = 0; var_316_int = 0; var_317_bool = 0; var_318_object = Obj(); var_319_int = 0; var_320_int = 0; var_321_int = 0; var_322_bool = 0; // 0xa5 PushV
	var_323_bool = 0; // 0xa6 PushV
	func_203(var_323_bool); // 0xa7 NEW_2
	var_326_bool = var_323_bool == 0; // 0xa9 Not
	if(var_326_bool == 0) goto Label_173; // 0xaa JumpB
	var_311_bool = 0; // 0xab MovB
	return 10; // 0xac Return
	
Label_173:
	var_327_int = 4; // 0xad PushI
	GetItemCount(var_319_int, var_327_int); // 0xae TObjFunc
	var_328_bool = var_319_int <= var_312_int; // 0xb0 LE
	if(var_328_bool == 0) goto Label_180; // 0xb1 JumpB
	var_311_bool = 0; // 0xb2 MovB
	return 10; // 0xb3 Return
	
Label_180:
	var_329_int = 4; // 0xb4 PushI
	GetItemAmount(var_320_int, var_312_int, var_329_int); // 0xb5 TObjFunc
	var_330_int = 4; // 0xb7 PushI
	GetItem(var_318_object, var_312_int, var_330_int); // 0xb8 TObjFunc
	GetItemID(var_321_int); // 0xba ObjFunc
	var_331_int = 0; // 0xbc PushI
	var_332_int = 1; // 0xbd PushI
	AddItem(var_322_bool, var_318_object, var_331_int, var_332_int); // 0xbe TObjFunc
	var_333_bool = var_322_bool == 0; // 0xc0 Not
	if(var_333_bool == 0) goto Label_196; // 0xc1 JumpB
	var_311_bool = 0; // 0xc2 MovB
	return 10; // 0xc3 Return
	
Label_196:
	var_334_int = 1; // 0xc4 PushI
	var_335_int = 4; // 0xc5 PushI
	RemoveItem(var_312_int, var_334_int, var_335_int); // 0xc6 TObjFunc
	var_311_bool = 1; // 0xc8 MovB
	return 10; // 0xc9 Return
}


func_488(var_70_bool)
{
	var_71_float = 0; var_72_float = 0; var_73_float = 0; var_74_float = 0; var_75_int = 0; var_76_object = Obj(); var_77_int = 0; var_78_float = 0; var_79_object = Obj(); var_80_bool = 0; var_81_float = 0; var_82_float = 0; var_83_float = 0; var_84_float = 0; var_85_int = 0; var_86_object = Obj(); var_87_int = 0; var_88_float = 0; var_89_object = Obj(); var_90_bool = 0; // 0x1e8 PushV
	var_91_int = 0; // 0x1e9 PushV
	func_209(var_91_int); // 0x1ea NEW_2
	var_116_int = 0; // 0x1ec PushI
	var_117_bool = var_91_int == var_116_int; // 0x1ed Eq
	if(var_117_bool == 0) goto Label_497; // 0x1ee JumpB
	var_70_bool = 0; // 0x1ef MovB
	return 20; // 0x1f0 Return
	
Label_497:
	var_118_object = Obj(); // 0x1f1 PushV
	func_265(var_118_object); // 0x1f2 NEW_2
	if(var_118_object == 0) goto Label_503; // 0x1f4 JumpB
	var_70_bool = 0; // 0x1f5 MovB
	return 20; // 0x1f6 Return
	
Label_503:
	var_81_float = 0; // 0x1f7 MovI
	var_82_float = 0; // 0x1f8 MovI
	var_83_float = 1; // 0x1f9 MovI
	var_84_float = 1; // 0x1fa MovI
	var_85_int = 0; // 0x1fb MovI
	
Label_508:
	var_134_int = 0; // 0x1fc PushV
	func_209(var_134_int); // 0x1fd NEW_2
	var_135_bool = var_85_int < var_134_int; // 0x1ff LT
	if(var_135_bool == 0) goto Label_539; // 0x200 JumpB
	var_136_object = Obj(); var_137_int = 0; // 0x201 PushV
	var_137_int = var_85_int; // 0x202 Mov
	func_234(var_136_object, var_137_int); // 0x203 NEW_2
	var_86_object = var_136_object; // 0x204 Mov
	var_156_int = 0; var_157_object = Obj(); // 0x206 PushV
	var_157_object = var_86_object; // 0x207 Mov
	func_301(var_156_int, var_157_object); // 0x208 NEW_2
	var_87_int = var_156_int; // 0x209 Mov
	get(var_88_float, var_87_int); // 0x20b TObjFunc
	var_81_float = var_81_float + var_88_float; // 0x20d Add2
	get(var_88_float, var_87_int); // 0x20e TObjFunc
	var_82_float = var_82_float + var_88_float; // 0x210 Add2
	get(var_88_float, var_87_int); // 0x211 TObjFunc
	var_83_float = var_83_float * var_88_float; // 0x213 Mult2
	get(var_88_float, var_87_int); // 0x214 TObjFunc
	var_84_float = var_84_float * var_88_float; // 0x216 Mult2
	var_86_object = 0; // 0x217 SetNull
	var_169_int = 1; // 0x218 PushI
	var_85_int = var_85_int + var_169_int; // 0x219 Add2
	goto Label_508; // 0x21a Jump
	
Label_539:
	var_81_float = var_81_float * var_83_float; // 0x21b Mult2
	var_82_float = var_82_float * var_84_float; // 0x21c Mult2
	var_170_int = 0; // 0x21d PushI
	var_171_bool = var_81_float > var_170_int; // 0x21e GT
	if(var_171_bool == 0) goto Label_545; // 0x21f JumpB
	goto Label_546; // 0x220 Jump
	
Label_546:
	var_172_int = 0; // 0x222 PushI
	var_173_bool = var_82_float > var_172_int; // 0x223 GT
	if(var_173_bool == 0) goto Label_550; // 0x224 JumpB
	goto Label_551; // 0x225 Jump
	
Label_551:
	var_174_float = 20.0; // 0x227 PushF
	var_81_float = var_81_float * var_174_float; // 0x228 Mult2
	var_175_float = 15.0; // 0x229 PushF
	var_82_float = var_82_float * var_175_float; // 0x22a Mult2
	var_176_int = 100; // 0x22b PushI
	var_177_bool = var_81_float > var_176_int; // 0x22c GT
	if(var_177_bool == 0) goto Label_559; // 0x22d JumpB
	var_81_float = 100; // 0x22e MovI
	
Label_559:
	var_178_int = 100; // 0x22f PushI
	var_179_bool = var_82_float > var_178_int; // 0x230 GT
	if(var_179_bool == 0) goto Label_563; // 0x231 JumpB
	var_82_float = 100; // 0x232 MovI
	
Label_563:
	CreateInvItem(var_89_object); // 0x233 Func
	var_180_string = "grass_combination"; // 0x235 PushS
	SetItemName(var_180_string); // 0x236 ObjFunc
	var_181_string = "im_inc"; // 0x238 PushS
	var_182_float = 100.0; // 0x239 PushF
	var_183_float = var_81_float / var_182_float; // 0x23a Div
	SetProperty(var_181_string, var_183_float); // 0x23b ObjFunc
	var_184_string = "hl_inc"; // 0x23d PushS
	var_185_float = 100.0; // 0x23e PushF
	var_186_float = var_82_float / var_185_float; // 0x23f Div
	var_187_int = -var_186_float; // 0x240 Neg
	SetProperty(var_184_string, var_187_int); // 0x241 ObjFunc
	RemoveAllItems(); // 0x243 TObjFunc
	var_188_int = 0; // 0x245 PushI
	var_189_int = 1; // 0x246 PushI
	AddItem(var_90_bool, var_89_object, var_188_int, var_189_int); // 0x247 TObjFunc
	var_70_bool = 1; // 0x249 MovB
	return 20; // 0x24a Return
	
Label_550:
	var_82_float = -var_82_float; // 0x226 Neg2
	
Label_545:
	var_81_float = -var_81_float; // 0x221 Neg2
}


func_234(var_136_object, var_137_int)
{
	var_138_int = 0; var_139_int = 0; var_140_int = 0; var_141_object = Obj(); var_142_int = 0; var_143_object = Obj(); var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_object = Obj(); var_148_int = 0; var_149_object = Obj(); // 0xea PushV
	GetItemCount(var_144_int); // 0xeb TObjFunc
	var_145_int = 0; // 0xed MovI
	var_146_int = 0; // 0xee MovI
	
Label_239:
	var_150_bool = var_146_int < var_144_int; // 0xef LT
	if(var_150_bool == 0) goto Label_261; // 0xf0 JumpB
	GetItem(var_147_object, var_146_int); // 0xf1 TObjFunc
	var_151_bool = 0; var_152_object = Obj(); // 0xf3 PushV
	var_152_object = var_147_object; // 0xf4 Mov
	func_290(var_151_bool, var_152_object); // 0xf5 NEW_2
	var_153_bool = var_151_bool == 0; // 0xf7 Not
	if(var_153_bool == 0) goto Label_250; // 0xf8 JumpB
	goto Label_258; // 0xf9 Jump
	
Label_258:
	var_154_int = 1; // 0x102 PushI
	var_146_int = var_146_int + var_154_int; // 0x103 Add2
	goto Label_239; // 0x104 Jump
	
Label_250:
	GetItemAmount(var_148_int, var_146_int); // 0xfa TObjFunc
	var_145_int = var_145_int + var_148_int; // 0xfc Add2
	var_155_bool = var_145_int > var_137_int; // 0xfd GT
	if(var_155_bool == 0) goto Label_257; // 0xfe JumpB
	var_136_object = var_147_object; // 0xff Mov
	return 12; // 0x100 Return
	
Label_257:
	var_147_object = 0; // 0x101 SetNull
	
Label_261:
	var_149_object = 0; // 0x105 SetNull
	var_136_object = var_149_object; // 0x106 Mov
	return 12; // 0x107 Return
}


func_301(var_156_int, var_157_object)
{
	var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_int = 0; var_162_bool = 0; var_163_int = 0; // 0x12d PushV
	var_164_int = 0; var_165_object = Obj(); // 0x12e PushV
	var_165_object = var_157_object; // 0x12f Mov
	func_948(var_165_object); // 0x130 NEW_2
	var_161_int = var_164_int; // 0x131 Mov
	var_166_string = "Grass"; // 0x133 PushS
	HasInvItemProperty(var_162_bool, var_161_int, var_166_string); // 0x134 Func
	var_167_bool = var_162_bool == 0; // 0x136 Not
	if(var_167_bool == 0) goto Label_314; // 0x137 JumpB
	var_156_int = -1; // 0x138 MovI
	return 6; // 0x139 Return
	
Label_314:
	var_168_string = "Grass"; // 0x13a PushS
	GetInvItemProperty(var_163_int, var_161_int, var_168_string); // 0x13b Func
	var_156_int = var_163_int; // 0x13d Mov
	return 6; // 0x13e Return
}


func_751(var_0_int, var_36_int)
{
	var_37_int = -1; // 0x2f0 PushI
	var_38_bool = var_36_int == var_37_int; // 0x2f1 Eq
	if(var_38_bool == 0) goto Label_756; // 0x2f2 JumpB
	return 0; // 0x2f3 Return
	
Label_756:
	var_39_bool = var_0_int == var_36_int; // 0x2f4 Eq
	if(var_39_bool == 0) goto Label_759; // 0x2f5 JumpB
	return 0; // 0x2f6 Return
	
Label_759:
	var_0_int = var_36_int; // 0x2f7 TMov
	var_40_int = 0; // 0x2f8 PushV
	var_40_int = var_0_int; // 0x2f9 MovT
	func_783(var_40_int); // 0x2fa NEW_2
	return 0; // 0x2fc Return
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


func_371(var_199_bool, var_200_int)
{
	var_201_int = 0; var_202_bool = 0; var_203_int = 0; var_204_bool = 0; // 0x173 PushV
	var_205_int = 0; var_206_int = 0; // 0x174 PushV
	var_206_int = var_200_int; // 0x175 Mov
	func_319(var_205_int, var_206_int); // 0x176 NEW_2
	var_203_int = var_205_int; // 0x177 Mov
	var_223_int = -1; // 0x179 PushI
	var_224_bool = var_203_int == var_223_int; // 0x17a Eq
	if(var_224_bool == 0) goto Label_382; // 0x17b JumpB
	var_199_bool = 0; // 0x17c MovB
	return 4; // 0x17d Return
	
Label_382:
	var_225_object = Obj(); var_226_int = 0; // 0x17e PushV
	var_226_int = var_200_int; // 0x17f Mov
	func_234(var_225_object, var_226_int); // 0x180 NEW_2
	var_227_int = 4; // 0x182 PushI
	var_228_int = 1; // 0x183 PushI
	AddItem(var_204_bool, var_225_object, var_227_int, var_228_int); // 0x184 TObjFunc
	var_229_bool = var_204_bool == 0; // 0x186 Not
	if(var_229_bool == 0) goto Label_394; // 0x187 JumpB
	var_199_bool = 0; // 0x188 MovB
	return 4; // 0x189 Return
	
Label_394:
	var_230_int = 1; // 0x18a PushI
	RemoveItem(var_203_int, var_230_int); // 0x18b TObjFunc
	var_231_int = 0; // 0x18d PushV
	var_231_int = 4; // 0x18e MovI
	func_751(var_204_bool, var_231_int); // 0x18f NEW_2
	var_199_bool = 1; // 0x191 MovB
	return 4; // 0x192 Return
}


func_948(var_101_int)
{
	var_103_int = 0; var_104_int = 0; // 0x3b4 PushV
	GetItemID(var_104_int); // 0x3b5 ObjFunc
	var_101_int = var_104_int; // 0x3b7 Mov
	return 2; // 0x3b8 Return
}


func_765(var_139_int)
{
	var_140_object = Obj(); var_141_int = 0; var_142_object = Obj(); var_143_int = 0; // 0x2fd PushV
	var_144_object = Obj(); // 0x2fe PushV
	func_95(var_143_int, var_144_object); // 0x2ff NEW_2
	var_142_object = var_144_object; // 0x300 Mov
	var_145_string = "money"; // 0x302 PushS
	GetProperty(var_145_string, var_143_int); // 0x303 ObjFunc
	var_139_int = var_143_int; // 0x305 Mov
	return 4; // 0x306 Return
}


func_319(var_205_int, var_206_int)
{
	var_207_int = 0; var_208_int = 0; var_209_int = 0; var_210_object = Obj(); var_211_int = 0; var_212_int = 0; var_213_int = 0; var_214_int = 0; var_215_object = Obj(); var_216_int = 0; // 0x13f PushV
	GetItemCount(var_212_int); // 0x140 TObjFunc
	var_213_int = 0; // 0x142 MovI
	var_214_int = 0; // 0x143 MovI
	
Label_324:
	var_217_bool = var_214_int < var_212_int; // 0x144 LT
	if(var_217_bool == 0) goto Label_346; // 0x145 JumpB
	GetItem(var_215_object, var_214_int); // 0x146 TObjFunc
	var_218_bool = 0; var_219_object = Obj(); // 0x148 PushV
	var_219_object = var_215_object; // 0x149 Mov
	func_290(var_218_bool, var_219_object); // 0x14a NEW_2
	var_220_bool = var_218_bool == 0; // 0x14c Not
	if(var_220_bool == 0) goto Label_335; // 0x14d JumpB
	goto Label_343; // 0x14e Jump
	
Label_343:
	var_221_int = 1; // 0x157 PushI
	var_214_int = var_214_int + var_221_int; // 0x158 Add2
	goto Label_324; // 0x159 Jump
	
Label_335:
	GetItemAmount(var_216_int, var_214_int); // 0x14f TObjFunc
	var_213_int = var_213_int + var_216_int; // 0x151 Add2
	var_222_bool = var_213_int > var_206_int; // 0x152 GT
	if(var_222_bool == 0) goto Label_342; // 0x153 JumpB
	var_205_int = var_214_int; // 0x154 Mov
	return 10; // 0x155 Return
	
Label_342:
	var_215_object = 0; // 0x156 SetNull
	
Label_346:
	var_205_int = -1; // 0x15a MovI
	return 10; // 0x15b Return
}


