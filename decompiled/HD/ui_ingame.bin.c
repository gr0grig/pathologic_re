task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_bool = 0; var_26_bool = 0; // 0x1e PushV
	IsLost(var_24_bool); // 0x1f TObjFunc
	var_27_bool = var_24_bool; // 0x21 Push
	if(var_27_bool == 0) goto Label_40; // 0x22 JumpB
	Restore(var_25_bool); // 0x23 TObjFunc
	var_28_bool = var_25_bool == 0; // 0x25 Not
	if(var_28_bool == 0) goto Label_40; // 0x26 JumpB
	return 6; // 0x27 Return
	
Label_40:
	IsPlaying(var_26_bool); // 0x28 TObjFunc
	var_29_bool = var_26_bool; // 0x2a Push
	if(var_29_bool == 0) goto Label_49; // 0x2b JumpB
	var_30_int = 0; // 0x2c PushI
	var_31_int = 0; // 0x2d PushI
	StretchBlit(var_30_int, var_31_int, var_31_int, var_30_int); // 0x2e TObjFunc
	goto Label_55; // 0x30 Jump
	
Label_55:
	return 6; // 0x37 Return
	
Label_49:
	var_32_int = 0; // 0x31 PushI
	var_33_int = 0; // 0x32 PushI
	StretchBlit(var_32_int, var_33_int, var_33_int, var_32_int); // 0x33 TObjFunc
	StopEventProcessing(); // 0x35 Func
}


task_0_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_object, var_6_int, var_7_int, var_8_int, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_string, var_18_string, var_19_string, var_20_bool, var_21_object)
{
	var_22_bool = var_3_bool == 0; // 0x39 Not
	if(var_22_bool == 0) goto Label_60; // 0x3a JumpB
	return 0; // 0x3b Return
	
Label_60:
	var_23_bool = 0; // 0x3c PushV
	var_23_bool = 1; // 0x3d MovB
	var_24_bool = 0; // 0x3e PushV
	var_24_bool = 1; // 0x3f MovB
	var_25_bool = 0; // 0x40 PushV
	var_25_bool = 1; // 0x41 MovB
	var_26_int = 27; // 0x42 PushI
	var_27_bool = var_21_object == var_26_int; // 0x43 Eq
	if(var_27_bool == 0) goto Label_73; // 0x44 JumpB
	var_28_int = 32; // 0x45 PushI
	var_29_bool = var_21_object == var_28_int; // 0x46 Eq
	if(var_29_bool == 0) goto Label_73; // 0x47 JumpB
	var_25_bool = 0; // 0x48 MovB
	
Label_73:
	if(var_25_bool == 0) goto Label_78; // 0x49 JumpB
	var_30_int = 257; // 0x4a PushI
	var_31_bool = var_21_object == var_30_int; // 0x4b Eq
	if(var_31_bool == 0) goto Label_78; // 0x4c JumpB
	var_24_bool = 0; // 0x4d MovB
	
Label_78:
	if(var_24_bool == 0) goto Label_83; // 0x4e JumpB
	var_32_int = 262; // 0x4f PushI
	var_33_bool = var_21_object == var_32_int; // 0x50 Eq
	if(var_33_bool == 0) goto Label_83; // 0x51 JumpB
	var_23_bool = 0; // 0x52 MovB
	
Label_83:
	if(var_23_bool == 0) goto Label_88; // 0x53 JumpB
	StopEventProcessing(); // 0x54 Func
	Stop(); // 0x56 TObjFunc
	
Label_88:
	return 0; // 0x58 Return
}


task_1_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_string, var_7_object, var_8_int, var_9_int, var_10_int, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_string, var_19_string, var_20_string, var_21_string, var_22_bool, var_23_object)
{
	var_24_string = "intro"; // 0x65 PushS
	var_25_bool = var_22_bool == var_24_string; // 0x66 Eq
	if(var_25_bool == 0) goto Label_108; // 0x67 JumpB
	DestroyWindow(); // 0x68 TObjFunc
	StopEventProcessing(); // 0x6a Func
	
Label_108:
	return 0; // 0x6c Return
}


task_2_event_100(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	Trace(var_21_int); // 0x7d Func
	var_22_int = 27; // 0x7f PushI
	var_23_bool = var_21_int == var_22_int; // 0x80 Eq
	if(var_23_bool == 0) goto Label_132; // 0x81 JumpB
	DestroyWindow(); // 0x82 Func
	
Label_132:
	var_24_int = 262; // 0x84 PushI
	var_25_bool = var_21_int == var_24_int; // 0x85 Eq
	if(var_25_bool == 0) goto Label_137; // 0x86 JumpB
	DestroyWindow(); // 0x87 Func
	
Label_137:
	var_26_int = 260; // 0x89 PushI
	var_27_bool = var_21_int == var_26_int; // 0x8a Eq
	if(var_27_bool == 0) goto Label_142; // 0x8b JumpB
	DestroyWindow(); // 0x8c Func
	
Label_142:
	var_28_int = 257; // 0x8e PushI
	var_29_bool = var_21_int == var_28_int; // 0x8f Eq
	if(var_29_bool == 0) goto Label_147; // 0x90 JumpB
	DestroyWindow(); // 0x91 Func
	
Label_147:
	return 0; // 0x93 Return
}


task_2_event_102(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_int = 272; // 0x18b PushI
	var_23_bool = var_21_int == var_22_int; // 0x18c Eq
	if(var_23_bool == 0) goto Label_404; // 0x18d JumpB
	HideCursor(); // 0x18e Func
	func_286(); // 0x191 NEW_2
	goto Label_412; // 0x193 Jump
	
Label_412:
	return 0; // 0x19c Return
	
Label_404:
	var_78_int = 274; // 0x194 PushI
	var_79_bool = var_21_int == var_78_int; // 0x195 Eq
	if(var_79_bool == 0) goto Label_412; // 0x196 JumpB
	HideCursor(); // 0x197 Func
	func_173(); // 0x19a NEW_2
}


task_2_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_int = 267; // 0x19e PushI
	var_23_bool = var_21_int == var_22_int; // 0x19f Eq
	if(var_23_bool == 0) goto Label_423; // 0x1a0 JumpB
	HideCursor(); // 0x1a1 Func
	func_286(); // 0x1a4 NEW_2
	goto Label_449; // 0x1a6 Jump
	
Label_449:
	return 0; // 0x1c1 Return
	
Label_423:
	var_78_int = 268; // 0x1a7 PushI
	var_79_bool = var_21_int == var_78_int; // 0x1a8 Eq
	if(var_79_bool == 0) goto Label_432; // 0x1a9 JumpB
	HideCursor(); // 0x1aa Func
	func_173(); // 0x1ad NEW_2
	goto Label_449; // 0x1af Jump
	
Label_432:
	var_122_int = 256; // 0x1b0 PushI
	var_123_bool = var_21_int == var_122_int; // 0x1b1 Eq
	if(var_123_bool == 0) goto Label_449; // 0x1b2 JumpB
	var_124_string = ""; // 0x1b3 PushV
	func_281(var_21_int, var_124_string); // 0x1b4 NEW_2
	var_125_string = ""; // 0x1b6 PushS
	var_126_bool = var_124_string != var_125_string; // 0x1b7 Neq
	if(var_126_bool == 0) goto Label_449; // 0x1b8 JumpB
	HideCursor(); // 0x1b9 Func
	var_127_int = 2; // 0x1bb PushI
	var_128_string = ""; // 0x1bc PushV
	func_281(var_127_int, var_128_string); // 0x1bd NEW_2
	SendMessage(var_127_int, var_128_string); // 0x1bf Func
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object)
{
	var_24_string = "newgame"; // 0x289 PushS
	var_25_bool = var_22_string == var_24_string; // 0x28a Eq
	if(var_25_bool == 0) goto Label_656; // 0x28b JumpB
	var_2_int = 7; // 0x28c TMovI
	StopEventProcessing(); // 0x28d Func
	goto Label_919; // 0x28f Jump
	
Label_919:
	return 0; // 0x397 Return
	
Label_656:
	var_26_string = "quitgame"; // 0x290 PushS
	var_27_bool = var_22_string == var_26_string; // 0x291 Eq
	if(var_27_bool == 0) goto Label_666; // 0x292 JumpB
	var_28_string = "Quit game"; // 0x293 PushS
	UITrace(var_28_string); // 0x294 Func
	Quit(); // 0x296 Func
	return 0; // 0x298 Return
	
Label_666:
	var_29_string = "loadgame"; // 0x29a PushS
	var_30_bool = var_22_string == var_29_string; // 0x29b Eq
	if(var_30_bool == 0) goto Label_678; // 0x29c JumpB
	func_936(); // 0x29e NEW_2
	var_37_string = "load.xml"; // 0x2a0 PushS
	var_38_bool = 0; // 0x2a1 PushB
	CreateWindow(var_37_string, var_38_bool, var_20_object); // 0x2a2 Func
	return 0; // 0x2a4 Return
	
Label_678:
	var_39_string = "savegame"; // 0x2a6 PushS
	var_40_bool = var_22_string == var_39_string; // 0x2a7 Eq
	if(var_40_bool == 0) goto Label_690; // 0x2a8 JumpB
	func_936(); // 0x2aa NEW_2
	var_41_string = "save.xml"; // 0x2ac PushS
	var_42_bool = 0; // 0x2ad PushB
	CreateWindow(var_41_string, var_42_bool, var_19_bool); // 0x2ae Func
	return 0; // 0x2b0 Return
	
Label_690:
	var_43_string = "gameoptions"; // 0x2b2 PushS
	var_44_bool = var_22_string == var_43_string; // 0x2b3 Eq
	if(var_44_bool == 0) goto Label_702; // 0x2b4 JumpB
	func_936(); // 0x2b6 NEW_2
	var_45_string = "options.xml"; // 0x2b8 PushS
	var_46_bool = 0; // 0x2b9 PushB
	CreateWindow(var_45_string, var_46_bool, var_18_string); // 0x2ba Func
	return 0; // 0x2bc Return
	
Label_702:
	var_47_string = "continue"; // 0x2be PushS
	var_48_bool = var_22_string == var_47_string; // 0x2bf Eq
	if(var_48_bool == 0) goto Label_710; // 0x2c0 JumpB
	var_2_int = 6; // 0x2c1 TMovI
	StopEventProcessing(); // 0x2c2 Func
	return 0; // 0x2c4 Return
	
Label_710:
	var_49_string = "credits"; // 0x2c6 PushS
	var_50_bool = var_22_string == var_49_string; // 0x2c7 Eq
	if(var_50_bool == 0) goto Label_740; // 0x2c8 JumpB
	func_936(); // 0x2ca NEW_2
	var_51_int = 0; // 0x2cc PushV
	var_51_int = 8; // 0x2cd MovI
	TaskCall(1); // 0x2ce TaskCall
	func_89(var_52_object, var_51_int); // 0x2cf NEW_2
	TaskReturn(); // 0x2d0 TaskReturn
	var_56_object = Obj(); // 0x2d2 PushV
	func_116(var_56_object); // 0x2d3 NEW_2
	var_3_bool = var_56_object; // 0x2d4 TMov
	var_61_object = Obj(); // 0x2d6 PushV
	func_450(var_61_object); // 0x2d7 NEW_2
	var_4_object = var_61_object; // 0x2d8 TMov
	var_66_bool = 1; // 0x2da PushB
	ShowCursor(var_66_bool); // 0x2db Func
	CaptureKeyboard(); // 0x2dd Func
	var_67_string = ""; // 0x2df PushV
	var_67_string = ""; // 0x2e0 MovS
	func_283(var_23_object, var_67_string); // 0x2e1 NEW_2
	goto Label_919; // 0x2e3 Jump
	
Label_740:
	var_68_string = "danko"; // 0x2e4 PushS
	var_69_bool = var_22_string == var_68_string; // 0x2e5 Eq
	if(var_69_bool == 0) goto Label_775; // 0x2e6 JumpB
	var_70_int = 0; // 0x2e7 PushI
	var_71_bool = var_21_int == var_70_int; // 0x2e8 Eq
	if(var_71_bool == 0) goto Label_750; // 0x2e9 JumpB
	var_2_int = 1; // 0x2ea TMovI
	StopEventProcessing(); // 0x2eb Func
	goto Label_773; // 0x2ed Jump
	
Label_773:
	return 0; // 0x305 Return
	
Label_750:
	var_72_int = 1; // 0x2ee PushI
	var_73_bool = var_21_int == var_72_int; // 0x2ef Eq
	if(var_73_bool == 0) goto Label_762; // 0x2f0 JumpB
	var_74_int = 202; // 0x2f1 PushI
	var_75_string = "player_name"; // 0x2f2 PushS
	SendMessage(var_74_int, var_75_string); // 0x2f3 Func
	var_76_int = 203; // 0x2f5 PushI
	var_77_string = "player_desc"; // 0x2f6 PushS
	SendMessage(var_76_int, var_77_string); // 0x2f7 Func
	goto Label_773; // 0x2f9 Jump
	
Label_762:
	var_78_int = 2; // 0x2fa PushI
	var_79_bool = var_21_int == var_78_int; // 0x2fb Eq
	if(var_79_bool == 0) goto Label_773; // 0x2fc JumpB
	var_80_int = -1; // 0x2fd PushI
	var_81_string = "player_name"; // 0x2fe PushS
	SendMessage(var_80_int, var_81_string); // 0x2ff Func
	var_82_int = -1; // 0x301 PushI
	var_83_string = "player_desc"; // 0x302 PushS
	SendMessage(var_82_int, var_83_string); // 0x303 Func
	
Label_775:
	var_84_string = "burah"; // 0x307 PushS
	var_85_bool = var_22_string == var_84_string; // 0x308 Eq
	if(var_85_bool == 0) goto Label_810; // 0x309 JumpB
	var_86_int = 0; // 0x30a PushI
	var_87_bool = var_21_int == var_86_int; // 0x30b Eq
	if(var_87_bool == 0) goto Label_785; // 0x30c JumpB
	var_2_int = 2; // 0x30d TMovI
	StopEventProcessing(); // 0x30e Func
	goto Label_808; // 0x310 Jump
	
Label_808:
	return 0; // 0x328 Return
	
Label_785:
	var_88_int = 1; // 0x311 PushI
	var_89_bool = var_21_int == var_88_int; // 0x312 Eq
	if(var_89_bool == 0) goto Label_797; // 0x313 JumpB
	var_90_int = 205; // 0x314 PushI
	var_91_string = "player_name"; // 0x315 PushS
	SendMessage(var_90_int, var_91_string); // 0x316 Func
	var_92_int = 206; // 0x318 PushI
	var_93_string = "player_desc"; // 0x319 PushS
	SendMessage(var_92_int, var_93_string); // 0x31a Func
	goto Label_808; // 0x31c Jump
	
Label_797:
	var_94_int = 2; // 0x31d PushI
	var_95_bool = var_21_int == var_94_int; // 0x31e Eq
	if(var_95_bool == 0) goto Label_808; // 0x31f JumpB
	var_96_int = -1; // 0x320 PushI
	var_97_string = "player_name"; // 0x321 PushS
	SendMessage(var_96_int, var_97_string); // 0x322 Func
	var_98_int = -1; // 0x324 PushI
	var_99_string = "player_desc"; // 0x325 PushS
	SendMessage(var_98_int, var_99_string); // 0x326 Func
	
Label_810:
	var_100_string = "klara"; // 0x32a PushS
	var_101_bool = var_22_string == var_100_string; // 0x32b Eq
	if(var_101_bool == 0) goto Label_879; // 0x32c JumpB
	var_102_int = 0; // 0x32d PushI
	var_103_bool = var_21_int == var_102_int; // 0x32e Eq
	if(var_103_bool == 0) goto Label_835; // 0x32f JumpB
	var_104_bool = 0; // 0x330 PushV
	var_104_bool = 0; // 0x331 MovB
	var_105_bool = 0; // 0x332 PushV
	func_974(var_105_bool); // 0x333 NEW_2
	var_111_bool = var_105_bool == 0; // 0x335 Not
	if(var_111_bool == 0) goto Label_829; // 0x336 JumpB
	var_112_bool = 0; // 0x337 PushV
	func_966(var_112_bool); // 0x338 NEW_2
	var_118_bool = var_112_bool == 0; // 0x33a Not
	if(var_118_bool == 0) goto Label_829; // 0x33b JumpB
	var_104_bool = 1; // 0x33c MovB
	
Label_829:
	if(var_104_bool == 0) goto Label_831; // 0x33d JumpB
	return 0; // 0x33e Return
	
Label_831:
	var_2_int = 3; // 0x33f TMovI
	StopEventProcessing(); // 0x340 Func
	goto Label_877; // 0x342 Jump
	
Label_877:
	return 0; // 0x36d Return
	
Label_835:
	var_119_int = 1; // 0x343 PushI
	var_120_bool = var_21_int == var_119_int; // 0x344 Eq
	if(var_120_bool == 0) goto Label_866; // 0x345 JumpB
	var_121_int = 208; // 0x346 PushI
	var_122_string = "player_name"; // 0x347 PushS
	SendMessage(var_121_int, var_122_string); // 0x348 Func
	var_123_bool = 0; // 0x34a PushV
	var_123_bool = 0; // 0x34b MovB
	var_124_bool = 0; // 0x34c PushV
	func_974(var_124_bool); // 0x34d NEW_2
	var_125_bool = var_124_bool == 0; // 0x34f Not
	if(var_125_bool == 0) goto Label_855; // 0x350 JumpB
	var_126_bool = 0; // 0x351 PushV
	func_966(var_126_bool); // 0x352 NEW_2
	var_127_bool = var_126_bool == 0; // 0x354 Not
	if(var_127_bool == 0) goto Label_855; // 0x355 JumpB
	var_123_bool = 1; // 0x356 MovB
	
Label_855:
	if(var_123_bool == 0) goto Label_861; // 0x357 JumpB
	var_128_int = 213; // 0x358 PushI
	var_129_string = "player_desc"; // 0x359 PushS
	SendMessage(var_128_int, var_129_string); // 0x35a Func
	goto Label_865; // 0x35c Jump
	
Label_865:
	goto Label_877; // 0x361 Jump
	
Label_861:
	var_130_int = 209; // 0x35d PushI
	var_131_string = "player_desc"; // 0x35e PushS
	SendMessage(var_130_int, var_131_string); // 0x35f Func
	
Label_866:
	var_132_int = 2; // 0x362 PushI
	var_133_bool = var_21_int == var_132_int; // 0x363 Eq
	if(var_133_bool == 0) goto Label_877; // 0x364 JumpB
	var_134_int = -1; // 0x365 PushI
	var_135_string = "player_name"; // 0x366 PushS
	SendMessage(var_134_int, var_135_string); // 0x367 Func
	var_136_int = -1; // 0x369 PushI
	var_137_string = "player_desc"; // 0x36a PushS
	SendMessage(var_136_int, var_137_string); // 0x36b Func
	
Label_879:
	var_138_string = "load"; // 0x36f PushS
	var_139_bool = var_22_string == var_138_string; // 0x370 Eq
	if(var_139_bool == 0) goto Label_896; // 0x371 JumpB
	var_140_int = 0; // 0x372 PushI
	var_141_bool = var_21_int == var_140_int; // 0x373 Eq
	if(var_141_bool == 0) goto Label_891; // 0x374 JumpB
	var_2_int = 4; // 0x375 TMovI
	GetFileName(var_14_object); // 0x376 ObjFunc
	StopEventProcessing(); // 0x378 Func
	goto Label_894; // 0x37a Jump
	
Label_894:
	return 0; // 0x37e Return
	
Label_891:
	func_920(var_22_string, var_23_object); // 0x37c NEW_2
	
Label_896:
	var_145_string = "save"; // 0x380 PushS
	var_146_bool = var_22_string == var_145_string; // 0x381 Eq
	if(var_146_bool == 0) goto Label_912; // 0x382 JumpB
	var_147_int = 0; // 0x383 PushI
	var_148_bool = var_21_int == var_147_int; // 0x384 Eq
	if(var_148_bool == 0) goto Label_907; // 0x385 JumpB
	var_2_int = 5; // 0x386 TMovI
	var_9_object = var_23_object; // 0x387 TMov
	StopEventProcessing(); // 0x388 Func
	goto Label_910; // 0x38a Jump
	
Label_910:
	return 0; // 0x38e Return
	
Label_907:
	func_920(var_22_string, var_23_object); // 0x38c NEW_2
	
Label_912:
	var_149_string = "options"; // 0x390 PushS
	var_150_bool = var_22_string == var_149_string; // 0x391 Eq
	if(var_150_bool == 0) goto Label_919; // 0x392 JumpB
	func_920(var_22_string, var_23_object); // 0x394 NEW_2
	return 0; // 0x396 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	var_21_bool = 0; // 0x6d PushV
	var_21_bool = 0; // 0x6e MovB
	func_458(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_bool); // 0x6f NEW_2
	DestroyWindow(); // 0x71 Func
	return 0; // 0x73 Return
}


func_0(var_0_object, var_3_bool, var_54_string, var_55_bool)
{
	var_3_bool = var_55_bool; // 0x1 TMov
	var_60_bool = 1; // 0x2 PushB
	SetOwnerDraw(var_60_bool); // 0x3 Func
	var_61_bool = 0; // 0x5 PushB
	ShowCursor(var_61_bool); // 0x6 Func
	CaptureKeyboard(); // 0x8 Func
	GetWindowSize(var_55_bool, var_54_string); // 0xa Func
	LoadVideo(var_54_string); // 0xc Func
	FindVideo(var_0_object, var_54_string); // 0xe Func
	var_62_bool = 0; // 0x10 PushB
	Play(var_62_bool); // 0x11 TObjFunc
	ProcessEvents(); // 0x13 Func
	var_63_bool = 0; // 0x15 PushB
	SetOwnerDraw(var_63_bool); // 0x16 Func
	var_64_bool = 1; // 0x18 PushB
	ShowCursor(var_64_bool); // 0x19 Func
	ReleaseVideo(var_54_string); // 0x1b Func
	return 0; // 0x1d Return
}


func_89(var_0_object, var_49_int)
{
	var_51_string = "intro.xml"; // 0x5a PushS
	var_52_bool = 0; // 0x5b PushB
	CreateWindow(var_51_string, var_52_bool, var_0_object); // 0x5c Func
	var_53_string = "intro"; // 0x5e PushS
	SendMessage(var_49_int, var_53_string); // 0x5f Func
	ProcessEvents(); // 0x61 Func
	return 0; // 0x63 Return
}


func_450(var_110_object)
{
	var_111_object = Obj(); var_112_object = Obj(); // 0x1c2 PushV
	var_113_string = "game_logo.xml"; // 0x1c3 PushS
	var_114_bool = 0; // 0x1c4 PushB
	CreateWindow(var_113_string, var_114_bool, var_112_object); // 0x1c5 Func
	var_110_object = var_112_object; // 0x1c7 Mov
	return 2; // 0x1c8 Return
}


func_963(var_12_object, var_35_string)
{
	var_12_object = var_35_string; // 0x3c4 TMov
	return 0; // 0x3c5 Return
}


func_966(var_112_bool)
{
	var_113_int = 0; var_114_int = 0; // 0x3c6 PushV
	var_115_string = "BurahCompleted"; // 0x3c7 PushS
	var_116_int = 0; // 0x3c8 PushI
	GetRegistryData(var_114_int, var_115_string, var_116_int); // 0x3c9 Func
	var_117_int = 0; // 0x3cb PushI
	var_112_bool = var_114_int != var_117_int; // 0x3cc Neq2
	return 2; // 0x3cd Return
}


func_936()
{
	var_40_bool = var_3_bool; // 0x3a8 PushT
	if(var_40_bool == 0) goto Label_940; // 0x3a9 JumpB
	DestroyWindow(); // 0x3aa TObjFunc
	
Label_940:
	var_41_object = var_4_object; // 0x3ac PushT
	if(var_41_object == 0) goto Label_944; // 0x3ad JumpB
	DestroyWindow(); // 0x3ae TObjFunc
	
Label_944:
	var_42_int = var_5_int; // 0x3b0 PushT
	if(var_42_int == 0) goto Label_948; // 0x3b1 JumpB
	DestroyWindow(); // 0x3b2 TObjFunc
	
Label_948:
	var_43_int = var_6_int; // 0x3b4 PushT
	if(var_43_int == 0) goto Label_952; // 0x3b5 JumpB
	DestroyWindow(); // 0x3b6 TObjFunc
	
Label_952:
	var_44_int = var_7_int; // 0x3b8 PushT
	if(var_44_int == 0) goto Label_956; // 0x3b9 JumpB
	DestroyWindow(); // 0x3ba TObjFunc
	
Label_956:
	var_45_object = var_8_object; // 0x3bc PushT
	if(var_45_object == 0) goto Label_960; // 0x3bd JumpB
	DestroyWindow(); // 0x3be TObjFunc
	
Label_960:
	CaptureKeyboard(); // 0x3c0 Func
	return 0; // 0x3c2 Return
}


func_458(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_14_object, var_20_object, var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_string = ""; var_26_bool = 0; var_27_bool = 0; var_28_bool = 0; var_29_string = ""; // 0x1ca PushV
	var_14_object = var_21_bool; // 0x1cb TMov
	CaptureKeyboard(); // 0x1cc Func
	var_2_int = 0; // 0x1ce TMovI
	GetWindowSize(var_0_object, var_29_string); // 0x1cf Func
	var_30_string = "default"; // 0x1d1 PushS
	SetCursor(var_30_string); // 0x1d2 Func
	var_31_string = "default"; // 0x1d4 PushS
	SetBackground(var_31_string); // 0x1d5 Func
	var_32_string = "menumusic"; // 0x1d7 PushS
	PlaySound(var_32_string); // 0x1d8 Func
	var_33_bool = 1; // 0x1da PushB
	ShowCursor(var_33_bool); // 0x1db Func
	var_34_string = ""; // 0x1dd PushV
	var_34_string = ""; // 0x1de MovS
	func_283(var_29_string, var_34_string); // 0x1df NEW_2
	var_35_string = ""; // 0x1e1 PushV
	var_35_string = ""; // 0x1e2 MovS
	func_963(var_29_string, var_35_string); // 0x1e3 NEW_2
	var_36_bool = var_21_bool; // 0x1e5 Push
	if(var_36_bool == 0) goto Label_492; // 0x1e6 JumpB
	var_37_string = "game_choose_pers.xml"; // 0x1e7 PushS
	var_38_bool = 0; // 0x1e8 PushB
	CreateWindow(var_37_string, var_38_bool, var_27_bool); // 0x1e9 Func
	goto Label_500; // 0x1eb Jump
	
Label_500:
	var_39_bool = var_2_int == 0; // 0x1f4 Not
	if(var_39_bool == 0) goto Label_505; // 0x1f5 JumpB
	ProcessEvents(); // 0x1f6 Func
	goto Label_500; // 0x1f8 Jump
	
Label_505:
	func_936(); // 0x1fa NEW_2
	var_46_int = 1; // 0x1fc PushI
	var_47_bool = var_2_int == var_46_int; // 0x1fd Eq
	if(var_47_bool == 0) goto Label_538; // 0x1fe JumpB
	var_48_string = "menumusic"; // 0x1ff PushS
	PauseSound(var_48_string); // 0x200 Func
	var_49_int = 0; // 0x202 PushV
	var_49_int = 1; // 0x203 MovI
	TaskCall(1); // 0x204 TaskCall
	func_89(var_50_object, var_49_int); // 0x205 NEW_2
	TaskReturn(); // 0x206 TaskReturn
	var_54_string = ""; var_55_bool = 0; // 0x208 PushV
	var_54_string = "intro_danko.wmv"; // 0x209 MovS
	var_55_bool = 1; // 0x20a MovB
	TaskCall(0); // 0x20b TaskCall
	func_0(var_58_int, var_59_bool, var_54_string, var_55_bool); // 0x20c NEW_2
	TaskReturn(); // 0x20d TaskReturn
	RemoveWorld(); // 0x20f Func
	UISync(); // 0x211 Func
	DestroyWindow(); // 0x213 Func
	var_65_string = "world_danko.xml"; // 0x215 PushS
	var_66_string = "player_danko.xml"; // 0x216 PushS
	NewGame(var_65_string, var_66_string); // 0x217 Func
	goto Label_647; // 0x219 Jump
	
Label_647:
	return 8; // 0x287 Return
	
Label_538:
	var_67_int = 2; // 0x21a PushI
	var_68_bool = var_2_int == var_67_int; // 0x21b Eq
	if(var_68_bool == 0) goto Label_568; // 0x21c JumpB
	var_69_string = "menumusic"; // 0x21d PushS
	PauseSound(var_69_string); // 0x21e Func
	var_70_int = 0; // 0x220 PushV
	var_70_int = 2; // 0x221 MovI
	TaskCall(1); // 0x222 TaskCall
	func_89(var_71_object, var_70_int); // 0x223 NEW_2
	TaskReturn(); // 0x224 TaskReturn
	var_72_string = ""; var_73_bool = 0; // 0x226 PushV
	var_72_string = "intro_burah.wmv"; // 0x227 MovS
	var_73_bool = 1; // 0x228 MovB
	TaskCall(0); // 0x229 TaskCall
	func_0(var_76_int, var_77_bool, var_72_string, var_73_bool); // 0x22a NEW_2
	TaskReturn(); // 0x22b TaskReturn
	RemoveWorld(); // 0x22d Func
	UISync(); // 0x22f Func
	DestroyWindow(); // 0x231 Func
	var_78_string = "world_burah.xml"; // 0x233 PushS
	var_79_string = "player_burah.xml"; // 0x234 PushS
	NewGame(var_78_string, var_79_string); // 0x235 Func
	goto Label_647; // 0x237 Jump
	
Label_568:
	var_80_int = 3; // 0x238 PushI
	var_81_bool = var_2_int == var_80_int; // 0x239 Eq
	if(var_81_bool == 0) goto Label_598; // 0x23a JumpB
	var_82_string = "menumusic"; // 0x23b PushS
	PauseSound(var_82_string); // 0x23c Func
	var_83_int = 0; // 0x23e PushV
	var_83_int = 3; // 0x23f MovI
	TaskCall(1); // 0x240 TaskCall
	func_89(var_84_object, var_83_int); // 0x241 NEW_2
	TaskReturn(); // 0x242 TaskReturn
	var_85_string = ""; var_86_bool = 0; // 0x244 PushV
	var_85_string = "intro_klara.wmv"; // 0x245 MovS
	var_86_bool = 1; // 0x246 MovB
	TaskCall(0); // 0x247 TaskCall
	func_0(var_89_int, var_90_bool, var_85_string, var_86_bool); // 0x248 NEW_2
	TaskReturn(); // 0x249 TaskReturn
	RemoveWorld(); // 0x24b Func
	UISync(); // 0x24d Func
	DestroyWindow(); // 0x24f Func
	var_91_string = "world_klara.xml"; // 0x251 PushS
	var_92_string = "player_klara.xml"; // 0x252 PushS
	NewGame(var_91_string, var_92_string); // 0x253 Func
	goto Label_647; // 0x255 Jump
	
Label_598:
	var_93_int = 4; // 0x256 PushI
	var_94_bool = var_2_int == var_93_int; // 0x257 Eq
	if(var_94_bool == 0) goto Label_617; // 0x258 JumpB
	var_95_string = "menumusic"; // 0x259 PushS
	PauseSound(var_95_string); // 0x25a Func
	var_96_string = "Loading : "; // 0x25c PushS
	var_97_int = var_96_string + var_10_object; // 0x25d Add
	Trace(var_97_int); // 0x25e Func
	RemoveWorld(); // 0x260 Func
	UISync(); // 0x262 Func
	DestroyWindow(); // 0x264 Func
	LoadGame(var_26_bool, var_20_object); // 0x266 Func
	goto Label_647; // 0x268 Jump
	
Label_617:
	var_98_int = 5; // 0x269 PushI
	var_99_bool = var_2_int == var_98_int; // 0x26a Eq
	if(var_99_bool == 0) goto Label_634; // 0x26b JumpB
	var_100_bool = var_9_object == 0; // 0x26c Not
	if(var_100_bool == 0) goto Label_627; // 0x26d JumpB
	DestroyWindow(); // 0x26e Func
	SaveGame(var_27_bool); // 0x270 Func
	goto Label_633; // 0x272 Jump
	
Label_633:
	goto Label_647; // 0x279 Jump
	
Label_627:
	DestroyWindow(); // 0x273 Func
	GetFileName(var_29_string); // 0x275 TObjFunc
	SaveGame(var_28_bool, var_29_string); // 0x277 Func
	
Label_634:
	var_101_int = 7; // 0x27a PushI
	var_102_bool = var_2_int == var_101_int; // 0x27b Eq
	if(var_102_bool == 0) goto Label_647; // 0x27c JumpB
	RemoveWorld(); // 0x27d Func
	UISync(); // 0x27f Func
	DestroyWindow(); // 0x281 Func
	var_103_string = "world_intro.xml"; // 0x283 PushS
	var_104_string = "player_intro.xml"; // 0x284 PushS
	NewGame(var_103_string, var_104_string); // 0x285 Func
	
Label_492:
	var_105_object = Obj(); // 0x1ec PushV
	func_116(var_105_object); // 0x1ed NEW_2
	var_3_bool = var_105_object; // 0x1ee TMov
	var_110_object = Obj(); // 0x1f0 PushV
	func_450(var_110_object); // 0x1f1 NEW_2
	var_4_object = var_110_object; // 0x1f2 TMov
}


func_173()
{
	func_148(); // 0xae NEW_2
	var_80_string = ""; // 0xb0 PushV
	func_281(var_21_int, var_80_string); // 0xb1 NEW_2
	var_81_string = ""; // 0xb3 PushS
	var_82_bool = var_80_string == var_81_string; // 0xb4 Eq
	if(var_82_bool == 0) goto Label_191; // 0xb5 JumpB
	var_83_int = 1; // 0xb6 PushI
	var_84_string = "continue"; // 0xb7 PushS
	SendMessage(var_83_int, var_84_string); // 0xb8 Func
	var_85_string = ""; // 0xba PushV
	var_85_string = "continue"; // 0xbb MovS
	func_283(var_21_int, var_85_string); // 0xbc NEW_2
	goto Label_280; // 0xbe Jump
	
Label_280:
	return 0; // 0x118 Return
	
Label_191:
	var_86_string = ""; // 0xbf PushV
	func_281(var_21_int, var_86_string); // 0xc0 NEW_2
	var_87_string = "continue"; // 0xc2 PushS
	var_88_bool = var_86_string == var_87_string; // 0xc3 Eq
	if(var_88_bool == 0) goto Label_206; // 0xc4 JumpB
	var_89_int = 1; // 0xc5 PushI
	var_90_string = "newgame"; // 0xc6 PushS
	SendMessage(var_89_int, var_90_string); // 0xc7 Func
	var_91_string = ""; // 0xc9 PushV
	var_91_string = "newgame"; // 0xca MovS
	func_283(var_21_int, var_91_string); // 0xcb NEW_2
	goto Label_280; // 0xcd Jump
	
Label_206:
	var_92_string = ""; // 0xce PushV
	func_281(var_21_int, var_92_string); // 0xcf NEW_2
	var_93_string = "newgame"; // 0xd1 PushS
	var_94_bool = var_92_string == var_93_string; // 0xd2 Eq
	if(var_94_bool == 0) goto Label_221; // 0xd3 JumpB
	var_95_int = 1; // 0xd4 PushI
	var_96_string = "loadgame"; // 0xd5 PushS
	SendMessage(var_95_int, var_96_string); // 0xd6 Func
	var_97_string = ""; // 0xd8 PushV
	var_97_string = "loadgame"; // 0xd9 MovS
	func_283(var_21_int, var_97_string); // 0xda NEW_2
	goto Label_280; // 0xdc Jump
	
Label_221:
	var_98_string = ""; // 0xdd PushV
	func_281(var_21_int, var_98_string); // 0xde NEW_2
	var_99_string = "loadgame"; // 0xe0 PushS
	var_100_bool = var_98_string == var_99_string; // 0xe1 Eq
	if(var_100_bool == 0) goto Label_236; // 0xe2 JumpB
	var_101_int = 1; // 0xe3 PushI
	var_102_string = "savegame"; // 0xe4 PushS
	SendMessage(var_101_int, var_102_string); // 0xe5 Func
	var_103_string = ""; // 0xe7 PushV
	var_103_string = "savegame"; // 0xe8 MovS
	func_283(var_21_int, var_103_string); // 0xe9 NEW_2
	goto Label_280; // 0xeb Jump
	
Label_236:
	var_104_string = ""; // 0xec PushV
	func_281(var_21_int, var_104_string); // 0xed NEW_2
	var_105_string = "savegame"; // 0xef PushS
	var_106_bool = var_104_string == var_105_string; // 0xf0 Eq
	if(var_106_bool == 0) goto Label_251; // 0xf1 JumpB
	var_107_int = 1; // 0xf2 PushI
	var_108_string = "gameoptions"; // 0xf3 PushS
	SendMessage(var_107_int, var_108_string); // 0xf4 Func
	var_109_string = ""; // 0xf6 PushV
	var_109_string = "gameoptions"; // 0xf7 MovS
	func_283(var_21_int, var_109_string); // 0xf8 NEW_2
	goto Label_280; // 0xfa Jump
	
Label_251:
	var_110_string = ""; // 0xfb PushV
	func_281(var_21_int, var_110_string); // 0xfc NEW_2
	var_111_string = "gameoptions"; // 0xfe PushS
	var_112_bool = var_110_string == var_111_string; // 0xff Eq
	if(var_112_bool == 0) goto Label_266; // 0x100 JumpB
	var_113_int = 1; // 0x101 PushI
	var_114_string = "quitgame"; // 0x102 PushS
	SendMessage(var_113_int, var_114_string); // 0x103 Func
	var_115_string = ""; // 0x105 PushV
	var_115_string = "quitgame"; // 0x106 MovS
	func_283(var_21_int, var_115_string); // 0x107 NEW_2
	goto Label_280; // 0x109 Jump
	
Label_266:
	var_116_string = ""; // 0x10a PushV
	func_281(var_21_int, var_116_string); // 0x10b NEW_2
	var_117_string = "quitgame"; // 0x10d PushS
	var_118_bool = var_116_string == var_117_string; // 0x10e Eq
	if(var_118_bool == 0) goto Label_280; // 0x10f JumpB
	var_119_int = 1; // 0x110 PushI
	var_120_string = "continue"; // 0x111 PushS
	SendMessage(var_119_int, var_120_string); // 0x112 Func
	var_121_string = ""; // 0x114 PushV
	var_121_string = "continue"; // 0x115 MovS
	func_283(var_21_int, var_121_string); // 0x116 NEW_2
}


func_974(var_105_bool)
{
	var_106_int = 0; var_107_int = 0; // 0x3ce PushV
	var_108_string = "DankoCompleted"; // 0x3cf PushS
	var_109_int = 0; // 0x3d0 PushI
	GetRegistryData(var_107_int, var_108_string, var_109_int); // 0x3d1 Func
	var_110_int = 0; // 0x3d3 PushI
	var_105_bool = var_107_int != var_110_int; // 0x3d4 Neq2
	return 2; // 0x3d5 Return
}


func_148()
{
	var_24_int = 0; // 0x94 PushI
	var_25_string = "continue"; // 0x95 PushS
	SendMessage(var_24_int, var_25_string); // 0x96 Func
	var_26_int = 0; // 0x98 PushI
	var_27_string = "newgame"; // 0x99 PushS
	SendMessage(var_26_int, var_27_string); // 0x9a Func
	var_28_int = 0; // 0x9c PushI
	var_29_string = "loadgame"; // 0x9d PushS
	SendMessage(var_28_int, var_29_string); // 0x9e Func
	var_30_int = 0; // 0xa0 PushI
	var_31_string = "savegame"; // 0xa1 PushS
	SendMessage(var_30_int, var_31_string); // 0xa2 Func
	var_32_int = 0; // 0xa4 PushI
	var_33_string = "gameoptions"; // 0xa5 PushS
	SendMessage(var_32_int, var_33_string); // 0xa6 Func
	var_34_int = 0; // 0xa8 PushI
	var_35_string = "quitgame"; // 0xa9 PushS
	SendMessage(var_34_int, var_35_string); // 0xaa Func
	return 0; // 0xac Return
}


func_116(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x74 PushV
	var_108_string = "ingame_buttons.xml"; // 0x75 PushS
	var_109_bool = 0; // 0x76 PushB
	CreateWindow(var_108_string, var_109_bool, var_107_object); // 0x77 Func
	var_105_object = var_107_object; // 0x79 Mov
	return 2; // 0x7a Return
}


func_920(var_3_bool, var_4_object)
{
	var_142_string = ""; // 0x398 PushV
	var_142_string = ""; // 0x399 MovS
	func_283(var_23_object, var_142_string); // 0x39a NEW_2
	func_936(); // 0x39d NEW_2
	var_143_object = Obj(); // 0x39f PushV
	func_116(var_143_object); // 0x3a0 NEW_2
	var_3_bool = var_143_object; // 0x3a1 TMov
	var_144_object = Obj(); // 0x3a3 PushV
	func_450(var_144_object); // 0x3a4 NEW_2
	var_4_object = var_144_object; // 0x3a5 TMov
	return 0; // 0x3a7 Return
}


func_281(var_11_object, var_36_string)
{
	var_36_string = var_11_object; // 0x119 MovT
	return 0; // 0x11a Return
}


func_283(var_11_object, var_34_string)
{
	var_11_object = var_34_string; // 0x11c TMov
	return 0; // 0x11d Return
}


func_286()
{
	func_148(); // 0x11f NEW_2
	var_36_string = ""; // 0x121 PushV
	func_281(var_21_int, var_36_string); // 0x122 NEW_2
	var_37_string = ""; // 0x124 PushS
	var_38_bool = var_36_string == var_37_string; // 0x125 Eq
	if(var_38_bool == 0) goto Label_304; // 0x126 JumpB
	var_39_int = 1; // 0x127 PushI
	var_40_string = "quitgame"; // 0x128 PushS
	SendMessage(var_39_int, var_40_string); // 0x129 Func
	var_41_string = ""; // 0x12b PushV
	var_41_string = "quitgame"; // 0x12c MovS
	func_283(var_21_int, var_41_string); // 0x12d NEW_2
	goto Label_393; // 0x12f Jump
	
Label_393:
	return 0; // 0x189 Return
	
Label_304:
	var_42_string = ""; // 0x130 PushV
	func_281(var_21_int, var_42_string); // 0x131 NEW_2
	var_43_string = "continue"; // 0x133 PushS
	var_44_bool = var_42_string == var_43_string; // 0x134 Eq
	if(var_44_bool == 0) goto Label_319; // 0x135 JumpB
	var_45_int = 1; // 0x136 PushI
	var_46_string = "quitgame"; // 0x137 PushS
	SendMessage(var_45_int, var_46_string); // 0x138 Func
	var_47_string = ""; // 0x13a PushV
	var_47_string = "quitgame"; // 0x13b MovS
	func_283(var_21_int, var_47_string); // 0x13c NEW_2
	goto Label_393; // 0x13e Jump
	
Label_319:
	var_48_string = ""; // 0x13f PushV
	func_281(var_21_int, var_48_string); // 0x140 NEW_2
	var_49_string = "newgame"; // 0x142 PushS
	var_50_bool = var_48_string == var_49_string; // 0x143 Eq
	if(var_50_bool == 0) goto Label_334; // 0x144 JumpB
	var_51_int = 1; // 0x145 PushI
	var_52_string = "continue"; // 0x146 PushS
	SendMessage(var_51_int, var_52_string); // 0x147 Func
	var_53_string = ""; // 0x149 PushV
	var_53_string = "continue"; // 0x14a MovS
	func_283(var_21_int, var_53_string); // 0x14b NEW_2
	goto Label_393; // 0x14d Jump
	
Label_334:
	var_54_string = ""; // 0x14e PushV
	func_281(var_21_int, var_54_string); // 0x14f NEW_2
	var_55_string = "loadgame"; // 0x151 PushS
	var_56_bool = var_54_string == var_55_string; // 0x152 Eq
	if(var_56_bool == 0) goto Label_349; // 0x153 JumpB
	var_57_int = 1; // 0x154 PushI
	var_58_string = "newgame"; // 0x155 PushS
	SendMessage(var_57_int, var_58_string); // 0x156 Func
	var_59_string = ""; // 0x158 PushV
	var_59_string = "newgame"; // 0x159 MovS
	func_283(var_21_int, var_59_string); // 0x15a NEW_2
	goto Label_393; // 0x15c Jump
	
Label_349:
	var_60_string = ""; // 0x15d PushV
	func_281(var_21_int, var_60_string); // 0x15e NEW_2
	var_61_string = "savegame"; // 0x160 PushS
	var_62_bool = var_60_string == var_61_string; // 0x161 Eq
	if(var_62_bool == 0) goto Label_364; // 0x162 JumpB
	var_63_int = 1; // 0x163 PushI
	var_64_string = "loadgame"; // 0x164 PushS
	SendMessage(var_63_int, var_64_string); // 0x165 Func
	var_65_string = ""; // 0x167 PushV
	var_65_string = "loadgame"; // 0x168 MovS
	func_283(var_21_int, var_65_string); // 0x169 NEW_2
	goto Label_393; // 0x16b Jump
	
Label_364:
	var_66_string = ""; // 0x16c PushV
	func_281(var_21_int, var_66_string); // 0x16d NEW_2
	var_67_string = "gameoptions"; // 0x16f PushS
	var_68_bool = var_66_string == var_67_string; // 0x170 Eq
	if(var_68_bool == 0) goto Label_379; // 0x171 JumpB
	var_69_int = 1; // 0x172 PushI
	var_70_string = "savegame"; // 0x173 PushS
	SendMessage(var_69_int, var_70_string); // 0x174 Func
	var_71_string = ""; // 0x176 PushV
	var_71_string = "savegame"; // 0x177 MovS
	func_283(var_21_int, var_71_string); // 0x178 NEW_2
	goto Label_393; // 0x17a Jump
	
Label_379:
	var_72_string = ""; // 0x17b PushV
	func_281(var_21_int, var_72_string); // 0x17c NEW_2
	var_73_string = "quitgame"; // 0x17e PushS
	var_74_bool = var_72_string == var_73_string; // 0x17f Eq
	if(var_74_bool == 0) goto Label_393; // 0x180 JumpB
	var_75_int = 1; // 0x181 PushI
	var_76_string = "gameoptions"; // 0x182 PushS
	SendMessage(var_75_int, var_76_string); // 0x183 Func
	var_77_string = ""; // 0x185 PushV
	var_77_string = "gameoptions"; // 0x186 MovS
	func_283(var_21_int, var_77_string); // 0x187 NEW_2
}


