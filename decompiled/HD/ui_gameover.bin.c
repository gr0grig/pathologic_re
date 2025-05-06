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
	var_22_int = 27; // 0x14e PushI
	var_23_bool = var_21_int == var_22_int; // 0x14f Eq
	if(var_23_bool == 0) goto Label_340; // 0x150 JumpB
	func_613(var_20_object, var_21_int); // 0x152 NEW_2
	
Label_340:
	return 0; // 0x154 Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object)
{
	var_24_string = "newgame"; // 0x156 PushS
	var_25_bool = var_22_string == var_24_string; // 0x157 Eq
	if(var_25_bool == 0) goto Label_349; // 0x158 JumpB
	var_2_int = 7; // 0x159 TMovI
	StopEventProcessing(); // 0x15a Func
	goto Label_612; // 0x15c Jump
	
Label_612:
	return 0; // 0x264 Return
	
Label_349:
	var_26_string = "quitgame"; // 0x15d PushS
	var_27_bool = var_22_string == var_26_string; // 0x15e Eq
	if(var_27_bool == 0) goto Label_359; // 0x15f JumpB
	var_28_string = "Quit game"; // 0x160 PushS
	UITrace(var_28_string); // 0x161 Func
	Quit(); // 0x163 Func
	return 0; // 0x165 Return
	
Label_359:
	var_29_string = "loadgame"; // 0x167 PushS
	var_30_bool = var_22_string == var_29_string; // 0x168 Eq
	if(var_30_bool == 0) goto Label_371; // 0x169 JumpB
	func_629(); // 0x16b NEW_2
	var_37_string = "load.xml"; // 0x16d PushS
	var_38_bool = 0; // 0x16e PushB
	CreateWindow(var_37_string, var_38_bool, var_20_object); // 0x16f Func
	return 0; // 0x171 Return
	
Label_371:
	var_39_string = "savegame"; // 0x173 PushS
	var_40_bool = var_22_string == var_39_string; // 0x174 Eq
	if(var_40_bool == 0) goto Label_383; // 0x175 JumpB
	func_629(); // 0x177 NEW_2
	var_41_string = "save.xml"; // 0x179 PushS
	var_42_bool = 0; // 0x17a PushB
	CreateWindow(var_41_string, var_42_bool, var_19_bool); // 0x17b Func
	return 0; // 0x17d Return
	
Label_383:
	var_43_string = "gameoptions"; // 0x17f PushS
	var_44_bool = var_22_string == var_43_string; // 0x180 Eq
	if(var_44_bool == 0) goto Label_395; // 0x181 JumpB
	func_629(); // 0x183 NEW_2
	var_45_string = "options.xml"; // 0x185 PushS
	var_46_bool = 0; // 0x186 PushB
	CreateWindow(var_45_string, var_46_bool, var_18_string); // 0x187 Func
	return 0; // 0x189 Return
	
Label_395:
	var_47_string = "continue"; // 0x18b PushS
	var_48_bool = var_22_string == var_47_string; // 0x18c Eq
	if(var_48_bool == 0) goto Label_403; // 0x18d JumpB
	var_2_int = 6; // 0x18e TMovI
	StopEventProcessing(); // 0x18f Func
	return 0; // 0x191 Return
	
Label_403:
	var_49_string = "credits"; // 0x193 PushS
	var_50_bool = var_22_string == var_49_string; // 0x194 Eq
	if(var_50_bool == 0) goto Label_433; // 0x195 JumpB
	func_629(); // 0x197 NEW_2
	var_51_int = 0; // 0x199 PushV
	var_51_int = 8; // 0x19a MovI
	TaskCall(1); // 0x19b TaskCall
	func_89(var_52_object, var_51_int); // 0x19c NEW_2
	TaskReturn(); // 0x19d TaskReturn
	var_56_object = Obj(); // 0x19f PushV
	func_127(var_56_object); // 0x1a0 NEW_2
	var_3_bool = var_56_object; // 0x1a1 TMov
	var_61_object = Obj(); // 0x1a3 PushV
	func_135(var_61_object); // 0x1a4 NEW_2
	var_4_object = var_61_object; // 0x1a5 TMov
	var_66_bool = 1; // 0x1a7 PushB
	ShowCursor(var_66_bool); // 0x1a8 Func
	CaptureKeyboard(); // 0x1aa Func
	var_67_string = ""; // 0x1ac PushV
	var_67_string = ""; // 0x1ad MovS
	func_911(var_23_object, var_67_string); // 0x1ae NEW_2
	goto Label_612; // 0x1b0 Jump
	
Label_433:
	var_68_string = "danko"; // 0x1b1 PushS
	var_69_bool = var_22_string == var_68_string; // 0x1b2 Eq
	if(var_69_bool == 0) goto Label_468; // 0x1b3 JumpB
	var_70_int = 0; // 0x1b4 PushI
	var_71_bool = var_21_int == var_70_int; // 0x1b5 Eq
	if(var_71_bool == 0) goto Label_443; // 0x1b6 JumpB
	var_2_int = 1; // 0x1b7 TMovI
	StopEventProcessing(); // 0x1b8 Func
	goto Label_466; // 0x1ba Jump
	
Label_466:
	return 0; // 0x1d2 Return
	
Label_443:
	var_72_int = 1; // 0x1bb PushI
	var_73_bool = var_21_int == var_72_int; // 0x1bc Eq
	if(var_73_bool == 0) goto Label_455; // 0x1bd JumpB
	var_74_int = 202; // 0x1be PushI
	var_75_string = "player_name"; // 0x1bf PushS
	SendMessage(var_74_int, var_75_string); // 0x1c0 Func
	var_76_int = 203; // 0x1c2 PushI
	var_77_string = "player_desc"; // 0x1c3 PushS
	SendMessage(var_76_int, var_77_string); // 0x1c4 Func
	goto Label_466; // 0x1c6 Jump
	
Label_455:
	var_78_int = 2; // 0x1c7 PushI
	var_79_bool = var_21_int == var_78_int; // 0x1c8 Eq
	if(var_79_bool == 0) goto Label_466; // 0x1c9 JumpB
	var_80_int = -1; // 0x1ca PushI
	var_81_string = "player_name"; // 0x1cb PushS
	SendMessage(var_80_int, var_81_string); // 0x1cc Func
	var_82_int = -1; // 0x1ce PushI
	var_83_string = "player_desc"; // 0x1cf PushS
	SendMessage(var_82_int, var_83_string); // 0x1d0 Func
	
Label_468:
	var_84_string = "burah"; // 0x1d4 PushS
	var_85_bool = var_22_string == var_84_string; // 0x1d5 Eq
	if(var_85_bool == 0) goto Label_503; // 0x1d6 JumpB
	var_86_int = 0; // 0x1d7 PushI
	var_87_bool = var_21_int == var_86_int; // 0x1d8 Eq
	if(var_87_bool == 0) goto Label_478; // 0x1d9 JumpB
	var_2_int = 2; // 0x1da TMovI
	StopEventProcessing(); // 0x1db Func
	goto Label_501; // 0x1dd Jump
	
Label_501:
	return 0; // 0x1f5 Return
	
Label_478:
	var_88_int = 1; // 0x1de PushI
	var_89_bool = var_21_int == var_88_int; // 0x1df Eq
	if(var_89_bool == 0) goto Label_490; // 0x1e0 JumpB
	var_90_int = 205; // 0x1e1 PushI
	var_91_string = "player_name"; // 0x1e2 PushS
	SendMessage(var_90_int, var_91_string); // 0x1e3 Func
	var_92_int = 206; // 0x1e5 PushI
	var_93_string = "player_desc"; // 0x1e6 PushS
	SendMessage(var_92_int, var_93_string); // 0x1e7 Func
	goto Label_501; // 0x1e9 Jump
	
Label_490:
	var_94_int = 2; // 0x1ea PushI
	var_95_bool = var_21_int == var_94_int; // 0x1eb Eq
	if(var_95_bool == 0) goto Label_501; // 0x1ec JumpB
	var_96_int = -1; // 0x1ed PushI
	var_97_string = "player_name"; // 0x1ee PushS
	SendMessage(var_96_int, var_97_string); // 0x1ef Func
	var_98_int = -1; // 0x1f1 PushI
	var_99_string = "player_desc"; // 0x1f2 PushS
	SendMessage(var_98_int, var_99_string); // 0x1f3 Func
	
Label_503:
	var_100_string = "klara"; // 0x1f7 PushS
	var_101_bool = var_22_string == var_100_string; // 0x1f8 Eq
	if(var_101_bool == 0) goto Label_572; // 0x1f9 JumpB
	var_102_int = 0; // 0x1fa PushI
	var_103_bool = var_21_int == var_102_int; // 0x1fb Eq
	if(var_103_bool == 0) goto Label_528; // 0x1fc JumpB
	var_104_bool = 0; // 0x1fd PushV
	var_104_bool = 0; // 0x1fe MovB
	var_105_bool = 0; // 0x1ff PushV
	func_1130(var_105_bool); // 0x200 NEW_2
	var_111_bool = var_105_bool == 0; // 0x202 Not
	if(var_111_bool == 0) goto Label_522; // 0x203 JumpB
	var_112_bool = 0; // 0x204 PushV
	func_1122(var_112_bool); // 0x205 NEW_2
	var_118_bool = var_112_bool == 0; // 0x207 Not
	if(var_118_bool == 0) goto Label_522; // 0x208 JumpB
	var_104_bool = 1; // 0x209 MovB
	
Label_522:
	if(var_104_bool == 0) goto Label_524; // 0x20a JumpB
	return 0; // 0x20b Return
	
Label_524:
	var_2_int = 3; // 0x20c TMovI
	StopEventProcessing(); // 0x20d Func
	goto Label_570; // 0x20f Jump
	
Label_570:
	return 0; // 0x23a Return
	
Label_528:
	var_119_int = 1; // 0x210 PushI
	var_120_bool = var_21_int == var_119_int; // 0x211 Eq
	if(var_120_bool == 0) goto Label_559; // 0x212 JumpB
	var_121_int = 208; // 0x213 PushI
	var_122_string = "player_name"; // 0x214 PushS
	SendMessage(var_121_int, var_122_string); // 0x215 Func
	var_123_bool = 0; // 0x217 PushV
	var_123_bool = 0; // 0x218 MovB
	var_124_bool = 0; // 0x219 PushV
	func_1130(var_124_bool); // 0x21a NEW_2
	var_125_bool = var_124_bool == 0; // 0x21c Not
	if(var_125_bool == 0) goto Label_548; // 0x21d JumpB
	var_126_bool = 0; // 0x21e PushV
	func_1122(var_126_bool); // 0x21f NEW_2
	var_127_bool = var_126_bool == 0; // 0x221 Not
	if(var_127_bool == 0) goto Label_548; // 0x222 JumpB
	var_123_bool = 1; // 0x223 MovB
	
Label_548:
	if(var_123_bool == 0) goto Label_554; // 0x224 JumpB
	var_128_int = 213; // 0x225 PushI
	var_129_string = "player_desc"; // 0x226 PushS
	SendMessage(var_128_int, var_129_string); // 0x227 Func
	goto Label_558; // 0x229 Jump
	
Label_558:
	goto Label_570; // 0x22e Jump
	
Label_554:
	var_130_int = 209; // 0x22a PushI
	var_131_string = "player_desc"; // 0x22b PushS
	SendMessage(var_130_int, var_131_string); // 0x22c Func
	
Label_559:
	var_132_int = 2; // 0x22f PushI
	var_133_bool = var_21_int == var_132_int; // 0x230 Eq
	if(var_133_bool == 0) goto Label_570; // 0x231 JumpB
	var_134_int = -1; // 0x232 PushI
	var_135_string = "player_name"; // 0x233 PushS
	SendMessage(var_134_int, var_135_string); // 0x234 Func
	var_136_int = -1; // 0x236 PushI
	var_137_string = "player_desc"; // 0x237 PushS
	SendMessage(var_136_int, var_137_string); // 0x238 Func
	
Label_572:
	var_138_string = "load"; // 0x23c PushS
	var_139_bool = var_22_string == var_138_string; // 0x23d Eq
	if(var_139_bool == 0) goto Label_589; // 0x23e JumpB
	var_140_int = 0; // 0x23f PushI
	var_141_bool = var_21_int == var_140_int; // 0x240 Eq
	if(var_141_bool == 0) goto Label_584; // 0x241 JumpB
	var_2_int = 4; // 0x242 TMovI
	GetFileName(var_14_object); // 0x243 ObjFunc
	StopEventProcessing(); // 0x245 Func
	goto Label_587; // 0x247 Jump
	
Label_587:
	return 0; // 0x24b Return
	
Label_584:
	func_613(var_22_string, var_23_object); // 0x249 NEW_2
	
Label_589:
	var_145_string = "save"; // 0x24d PushS
	var_146_bool = var_22_string == var_145_string; // 0x24e Eq
	if(var_146_bool == 0) goto Label_605; // 0x24f JumpB
	var_147_int = 0; // 0x250 PushI
	var_148_bool = var_21_int == var_147_int; // 0x251 Eq
	if(var_148_bool == 0) goto Label_600; // 0x252 JumpB
	var_2_int = 5; // 0x253 TMovI
	var_9_object = var_23_object; // 0x254 TMov
	StopEventProcessing(); // 0x255 Func
	goto Label_603; // 0x257 Jump
	
Label_603:
	return 0; // 0x25b Return
	
Label_600:
	func_613(var_22_string, var_23_object); // 0x259 NEW_2
	
Label_605:
	var_149_string = "options"; // 0x25d PushS
	var_150_bool = var_22_string == var_149_string; // 0x25e Eq
	if(var_150_bool == 0) goto Label_612; // 0x25f JumpB
	func_613(var_22_string, var_23_object); // 0x261 NEW_2
	return 0; // 0x263 Return
}


task_2_event_102(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; // 0x3f5 Not
	if(var_22_bool == 0) goto Label_1033; // 0x3f6 JumpB
	var_23_int = 272; // 0x3f7 PushI
	var_24_bool = var_21_int == var_23_int; // 0x3f8 Eq
	if(var_24_bool == 0) goto Label_1024; // 0x3f9 JumpB
	HideCursor(); // 0x3fa Func
	func_919(); // 0x3fd NEW_2
	goto Label_1032; // 0x3ff Jump
	
Label_1032:
	goto Label_1050; // 0x408 Jump
	
Label_1050:
	return 0; // 0x41a Return
	
Label_1024:
	var_71_int = 274; // 0x400 PushI
	var_72_bool = var_21_int == var_71_int; // 0x401 Eq
	if(var_72_bool == 0) goto Label_1032; // 0x402 JumpB
	HideCursor(); // 0x403 Func
	func_816(); // 0x406 NEW_2
	
Label_1033:
	var_109_int = 271; // 0x409 PushI
	var_110_bool = var_21_int == var_109_int; // 0x40a Eq
	if(var_110_bool == 0) goto Label_1042; // 0x40b JumpB
	HideCursor(); // 0x40c Func
	func_690(); // 0x40f NEW_2
	goto Label_1050; // 0x411 Jump
	
Label_1042:
	var_141_int = 273; // 0x412 PushI
	var_142_bool = var_21_int == var_141_int; // 0x413 Eq
	if(var_142_bool == 0) goto Label_1050; // 0x414 JumpB
	HideCursor(); // 0x415 Func
	func_753(); // 0x418 NEW_2
}


task_2_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; // 0x41c Not
	if(var_22_bool == 0) goto Label_1088; // 0x41d JumpB
	var_23_int = 267; // 0x41e PushI
	var_24_bool = var_21_int == var_23_int; // 0x41f Eq
	if(var_24_bool == 0) goto Label_1063; // 0x420 JumpB
	HideCursor(); // 0x421 Func
	func_919(); // 0x424 NEW_2
	goto Label_1087; // 0x426 Jump
	
Label_1087:
	goto Label_1121; // 0x43f Jump
	
Label_1121:
	return 0; // 0x461 Return
	
Label_1063:
	var_71_int = 268; // 0x427 PushI
	var_72_bool = var_21_int == var_71_int; // 0x428 Eq
	if(var_72_bool == 0) goto Label_1072; // 0x429 JumpB
	HideCursor(); // 0x42a Func
	func_816(); // 0x42d NEW_2
	goto Label_1087; // 0x42f Jump
	
Label_1072:
	var_109_int = 256; // 0x430 PushI
	var_110_bool = var_21_int == var_109_int; // 0x431 Eq
	if(var_110_bool == 0) goto Label_1087; // 0x432 JumpB
	var_111_string = ""; // 0x433 PushV
	func_909(var_21_int, var_111_string); // 0x434 NEW_2
	var_112_string = ""; // 0x436 PushS
	var_113_bool = var_111_string != var_112_string; // 0x437 Neq
	if(var_113_bool == 0) goto Label_1087; // 0x438 JumpB
	var_114_int = 2; // 0x439 PushI
	var_115_string = ""; // 0x43a PushV
	func_909(var_114_int, var_115_string); // 0x43b NEW_2
	SendMessage(var_114_int, var_115_string); // 0x43d Func
	
Label_1088:
	var_116_int = 270; // 0x440 PushI
	var_117_bool = var_21_int == var_116_int; // 0x441 Eq
	if(var_117_bool == 0) goto Label_1097; // 0x442 JumpB
	HideCursor(); // 0x443 Func
	func_690(); // 0x446 NEW_2
	goto Label_1121; // 0x448 Jump
	
Label_1097:
	var_148_int = 269; // 0x449 PushI
	var_149_bool = var_21_int == var_148_int; // 0x44a Eq
	if(var_149_bool == 0) goto Label_1106; // 0x44b JumpB
	HideCursor(); // 0x44c Func
	func_753(); // 0x44f NEW_2
	goto Label_1121; // 0x451 Jump
	
Label_1106:
	var_174_int = 256; // 0x452 PushI
	var_175_bool = var_21_int == var_174_int; // 0x453 Eq
	if(var_175_bool == 0) goto Label_1121; // 0x454 JumpB
	var_176_string = ""; // 0x455 PushV
	func_914(var_21_int, var_176_string); // 0x456 NEW_2
	var_177_string = ""; // 0x458 PushS
	var_178_bool = var_176_string != var_177_string; // 0x459 Neq
	if(var_178_bool == 0) goto Label_1121; // 0x45a JumpB
	var_179_int = 2; // 0x45b PushI
	var_180_string = ""; // 0x45c PushV
	func_914(var_179_int, var_180_string); // 0x45d NEW_2
	SendMessage(var_179_int, var_180_string); // 0x45f Func
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	EventDisable(1); // 0x6d EventDisable
	EventDisable(0); // 0x6e EventDisable
	UISync(); // 0x6f Func
	EventEnable(1); // 0x71 EventEnable
	EventEnable(0); // 0x72 EventEnable
	var_21_string = ""; var_22_bool = 0; // 0x73 PushV
	var_21_string = "death.wmv"; // 0x74 MovS
	var_22_bool = 1; // 0x75 MovB
	TaskCall(0); // 0x76 TaskCall
	func_0(var_25_int, var_26_bool, var_21_string, var_22_bool); // 0x77 NEW_2
	TaskReturn(); // 0x78 TaskReturn
	var_32_bool = 0; // 0x7a PushV
	var_32_bool = 0; // 0x7b MovB
	func_143(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_32_bool); // 0x7c NEW_2
	return 0; // 0x7e Return
}


func_0(var_0_object, var_3_bool, var_21_string, var_22_bool)
{
	var_3_bool = var_22_bool; // 0x1 TMov
	var_27_bool = 1; // 0x2 PushB
	SetOwnerDraw(var_27_bool); // 0x3 Func
	var_28_bool = 0; // 0x5 PushB
	ShowCursor(var_28_bool); // 0x6 Func
	CaptureKeyboard(); // 0x8 Func
	GetWindowSize(var_22_bool, var_21_string); // 0xa Func
	LoadVideo(var_21_string); // 0xc Func
	FindVideo(var_0_object, var_21_string); // 0xe Func
	var_29_bool = 0; // 0x10 PushB
	Play(var_29_bool); // 0x11 TObjFunc
	ProcessEvents(); // 0x13 Func
	var_30_bool = 0; // 0x15 PushB
	SetOwnerDraw(var_30_bool); // 0x16 Func
	var_31_bool = 1; // 0x18 PushB
	ShowCursor(var_31_bool); // 0x19 Func
	ReleaseVideo(var_21_string); // 0x1b Func
	return 0; // 0x1d Return
}


func_135(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x87 PushV
	var_119_string = "game_logo.xml"; // 0x88 PushS
	var_120_bool = 0; // 0x89 PushB
	CreateWindow(var_119_string, var_120_bool, var_118_object); // 0x8a Func
	var_116_object = var_118_object; // 0x8c Mov
	return 2; // 0x8d Return
}


func_909(var_11_object, var_35_string)
{
	var_35_string = var_11_object; // 0x38d MovT
	return 0; // 0x38e Return
}


func_911(var_11_object, var_45_string)
{
	var_11_object = var_45_string; // 0x390 TMov
	return 0; // 0x391 Return
}


func_143(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_14_object, var_20_object, var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; var_35_bool = 0; var_36_string = ""; var_37_bool = 0; var_38_bool = 0; var_39_bool = 0; var_40_string = ""; // 0x8f PushV
	var_14_object = var_32_bool; // 0x90 TMov
	CaptureKeyboard(); // 0x91 Func
	var_2_int = 0; // 0x93 TMovI
	GetWindowSize(var_0_object, var_40_string); // 0x94 Func
	var_41_string = "default"; // 0x96 PushS
	SetCursor(var_41_string); // 0x97 Func
	var_42_string = "default"; // 0x99 PushS
	SetBackground(var_42_string); // 0x9a Func
	var_43_string = "menumusic"; // 0x9c PushS
	PlaySound(var_43_string); // 0x9d Func
	var_44_bool = 1; // 0x9f PushB
	ShowCursor(var_44_bool); // 0xa0 Func
	var_45_string = ""; // 0xa2 PushV
	var_45_string = ""; // 0xa3 MovS
	func_911(var_40_string, var_45_string); // 0xa4 NEW_2
	var_46_string = ""; // 0xa6 PushV
	var_46_string = ""; // 0xa7 MovS
	func_916(var_40_string, var_46_string); // 0xa8 NEW_2
	var_47_bool = var_32_bool; // 0xaa Push
	if(var_47_bool == 0) goto Label_177; // 0xab JumpB
	var_48_string = "game_choose_pers.xml"; // 0xac PushS
	var_49_bool = 0; // 0xad PushB
	CreateWindow(var_48_string, var_49_bool, var_38_bool); // 0xae Func
	goto Label_185; // 0xb0 Jump
	
Label_185:
	var_50_bool = var_2_int == 0; // 0xb9 Not
	if(var_50_bool == 0) goto Label_190; // 0xba JumpB
	ProcessEvents(); // 0xbb Func
	goto Label_185; // 0xbd Jump
	
Label_190:
	func_629(); // 0xbf NEW_2
	var_57_int = 1; // 0xc1 PushI
	var_58_bool = var_2_int == var_57_int; // 0xc2 Eq
	if(var_58_bool == 0) goto Label_223; // 0xc3 JumpB
	var_59_string = "menumusic"; // 0xc4 PushS
	PauseSound(var_59_string); // 0xc5 Func
	var_60_int = 0; // 0xc7 PushV
	var_60_int = 1; // 0xc8 MovI
	TaskCall(1); // 0xc9 TaskCall
	func_89(var_61_object, var_60_int); // 0xca NEW_2
	TaskReturn(); // 0xcb TaskReturn
	var_65_string = ""; var_66_bool = 0; // 0xcd PushV
	var_65_string = "intro_danko.wmv"; // 0xce MovS
	var_66_bool = 1; // 0xcf MovB
	TaskCall(0); // 0xd0 TaskCall
	func_0(var_69_int, var_70_bool, var_65_string, var_66_bool); // 0xd1 NEW_2
	TaskReturn(); // 0xd2 TaskReturn
	RemoveWorld(); // 0xd4 Func
	UISync(); // 0xd6 Func
	DestroyWindow(); // 0xd8 Func
	var_71_string = "world_danko.xml"; // 0xda PushS
	var_72_string = "player_danko.xml"; // 0xdb PushS
	NewGame(var_71_string, var_72_string); // 0xdc Func
	goto Label_332; // 0xde Jump
	
Label_332:
	return 8; // 0x14c Return
	
Label_223:
	var_73_int = 2; // 0xdf PushI
	var_74_bool = var_2_int == var_73_int; // 0xe0 Eq
	if(var_74_bool == 0) goto Label_253; // 0xe1 JumpB
	var_75_string = "menumusic"; // 0xe2 PushS
	PauseSound(var_75_string); // 0xe3 Func
	var_76_int = 0; // 0xe5 PushV
	var_76_int = 2; // 0xe6 MovI
	TaskCall(1); // 0xe7 TaskCall
	func_89(var_77_object, var_76_int); // 0xe8 NEW_2
	TaskReturn(); // 0xe9 TaskReturn
	var_78_string = ""; var_79_bool = 0; // 0xeb PushV
	var_78_string = "intro_burah.wmv"; // 0xec MovS
	var_79_bool = 1; // 0xed MovB
	TaskCall(0); // 0xee TaskCall
	func_0(var_82_int, var_83_bool, var_78_string, var_79_bool); // 0xef NEW_2
	TaskReturn(); // 0xf0 TaskReturn
	RemoveWorld(); // 0xf2 Func
	UISync(); // 0xf4 Func
	DestroyWindow(); // 0xf6 Func
	var_84_string = "world_burah.xml"; // 0xf8 PushS
	var_85_string = "player_burah.xml"; // 0xf9 PushS
	NewGame(var_84_string, var_85_string); // 0xfa Func
	goto Label_332; // 0xfc Jump
	
Label_253:
	var_86_int = 3; // 0xfd PushI
	var_87_bool = var_2_int == var_86_int; // 0xfe Eq
	if(var_87_bool == 0) goto Label_283; // 0xff JumpB
	var_88_string = "menumusic"; // 0x100 PushS
	PauseSound(var_88_string); // 0x101 Func
	var_89_int = 0; // 0x103 PushV
	var_89_int = 3; // 0x104 MovI
	TaskCall(1); // 0x105 TaskCall
	func_89(var_90_object, var_89_int); // 0x106 NEW_2
	TaskReturn(); // 0x107 TaskReturn
	var_91_string = ""; var_92_bool = 0; // 0x109 PushV
	var_91_string = "intro_klara.wmv"; // 0x10a MovS
	var_92_bool = 1; // 0x10b MovB
	TaskCall(0); // 0x10c TaskCall
	func_0(var_95_int, var_96_bool, var_91_string, var_92_bool); // 0x10d NEW_2
	TaskReturn(); // 0x10e TaskReturn
	RemoveWorld(); // 0x110 Func
	UISync(); // 0x112 Func
	DestroyWindow(); // 0x114 Func
	var_97_string = "world_klara.xml"; // 0x116 PushS
	var_98_string = "player_klara.xml"; // 0x117 PushS
	NewGame(var_97_string, var_98_string); // 0x118 Func
	goto Label_332; // 0x11a Jump
	
Label_283:
	var_99_int = 4; // 0x11b PushI
	var_100_bool = var_2_int == var_99_int; // 0x11c Eq
	if(var_100_bool == 0) goto Label_302; // 0x11d JumpB
	var_101_string = "menumusic"; // 0x11e PushS
	PauseSound(var_101_string); // 0x11f Func
	var_102_string = "Loading : "; // 0x121 PushS
	var_103_int = var_102_string + var_10_object; // 0x122 Add
	Trace(var_103_int); // 0x123 Func
	RemoveWorld(); // 0x125 Func
	UISync(); // 0x127 Func
	DestroyWindow(); // 0x129 Func
	LoadGame(var_37_bool, var_20_object); // 0x12b Func
	goto Label_332; // 0x12d Jump
	
Label_302:
	var_104_int = 5; // 0x12e PushI
	var_105_bool = var_2_int == var_104_int; // 0x12f Eq
	if(var_105_bool == 0) goto Label_319; // 0x130 JumpB
	var_106_bool = var_9_object == 0; // 0x131 Not
	if(var_106_bool == 0) goto Label_312; // 0x132 JumpB
	DestroyWindow(); // 0x133 Func
	SaveGame(var_38_bool); // 0x135 Func
	goto Label_318; // 0x137 Jump
	
Label_318:
	goto Label_332; // 0x13e Jump
	
Label_312:
	DestroyWindow(); // 0x138 Func
	GetFileName(var_40_string); // 0x13a TObjFunc
	SaveGame(var_39_bool, var_40_string); // 0x13c Func
	
Label_319:
	var_107_int = 7; // 0x13f PushI
	var_108_bool = var_2_int == var_107_int; // 0x140 Eq
	if(var_108_bool == 0) goto Label_332; // 0x141 JumpB
	RemoveWorld(); // 0x142 Func
	UISync(); // 0x144 Func
	DestroyWindow(); // 0x146 Func
	var_109_string = "world_intro.xml"; // 0x148 PushS
	var_110_string = "player_intro.xml"; // 0x149 PushS
	NewGame(var_109_string, var_110_string); // 0x14a Func
	
Label_177:
	var_111_object = Obj(); // 0xb1 PushV
	func_127(var_111_object); // 0xb2 NEW_2
	var_3_bool = var_111_object; // 0xb3 TMov
	var_116_object = Obj(); // 0xb5 PushV
	func_135(var_116_object); // 0xb6 NEW_2
	var_4_object = var_116_object; // 0xb7 TMov
}


func_656()
{
	var_25_int = 0; // 0x290 PushI
	var_26_string = "newgame"; // 0x291 PushS
	SendMessage(var_25_int, var_26_string); // 0x292 Func
	var_27_int = 0; // 0x294 PushI
	var_28_string = "loadgame"; // 0x295 PushS
	SendMessage(var_27_int, var_28_string); // 0x296 Func
	var_29_int = 0; // 0x298 PushI
	var_30_string = "gameoptions"; // 0x299 PushS
	SendMessage(var_29_int, var_30_string); // 0x29a Func
	var_31_int = 0; // 0x29c PushI
	var_32_string = "credits"; // 0x29d PushS
	SendMessage(var_31_int, var_32_string); // 0x29e Func
	var_33_int = 0; // 0x2a0 PushI
	var_34_string = "quitgame"; // 0x2a1 PushS
	SendMessage(var_33_int, var_34_string); // 0x2a2 Func
	return 0; // 0x2a4 Return
}


func_914(var_12_object, var_124_string)
{
	var_124_string = var_12_object; // 0x392 MovT
	return 0; // 0x393 Return
}


func_916(var_12_object, var_46_string)
{
	var_12_object = var_46_string; // 0x395 TMov
	return 0; // 0x396 Return
}


func_919()
{
	func_656(); // 0x398 NEW_2
	var_35_string = ""; // 0x39a PushV
	func_909(var_21_int, var_35_string); // 0x39b NEW_2
	var_36_string = ""; // 0x39d PushS
	var_37_bool = var_35_string == var_36_string; // 0x39e Eq
	if(var_37_bool == 0) goto Label_937; // 0x39f JumpB
	var_38_int = 1; // 0x3a0 PushI
	var_39_string = "quitgame"; // 0x3a1 PushS
	SendMessage(var_38_int, var_39_string); // 0x3a2 Func
	var_40_string = ""; // 0x3a4 PushV
	var_40_string = "quitgame"; // 0x3a5 MovS
	func_911(var_21_int, var_40_string); // 0x3a6 NEW_2
	goto Label_1011; // 0x3a8 Jump
	
Label_1011:
	return 0; // 0x3f3 Return
	
Label_937:
	var_41_string = ""; // 0x3a9 PushV
	func_909(var_21_int, var_41_string); // 0x3aa NEW_2
	var_42_string = "newgame"; // 0x3ac PushS
	var_43_bool = var_41_string == var_42_string; // 0x3ad Eq
	if(var_43_bool == 0) goto Label_952; // 0x3ae JumpB
	var_44_int = 1; // 0x3af PushI
	var_45_string = "quitgame"; // 0x3b0 PushS
	SendMessage(var_44_int, var_45_string); // 0x3b1 Func
	var_46_string = ""; // 0x3b3 PushV
	var_46_string = "quitgame"; // 0x3b4 MovS
	func_911(var_21_int, var_46_string); // 0x3b5 NEW_2
	goto Label_1011; // 0x3b7 Jump
	
Label_952:
	var_47_string = ""; // 0x3b8 PushV
	func_909(var_21_int, var_47_string); // 0x3b9 NEW_2
	var_48_string = "loadgame"; // 0x3bb PushS
	var_49_bool = var_47_string == var_48_string; // 0x3bc Eq
	if(var_49_bool == 0) goto Label_967; // 0x3bd JumpB
	var_50_int = 1; // 0x3be PushI
	var_51_string = "newgame"; // 0x3bf PushS
	SendMessage(var_50_int, var_51_string); // 0x3c0 Func
	var_52_string = ""; // 0x3c2 PushV
	var_52_string = "newgame"; // 0x3c3 MovS
	func_911(var_21_int, var_52_string); // 0x3c4 NEW_2
	goto Label_1011; // 0x3c6 Jump
	
Label_967:
	var_53_string = ""; // 0x3c7 PushV
	func_909(var_21_int, var_53_string); // 0x3c8 NEW_2
	var_54_string = "gameoptions"; // 0x3ca PushS
	var_55_bool = var_53_string == var_54_string; // 0x3cb Eq
	if(var_55_bool == 0) goto Label_982; // 0x3cc JumpB
	var_56_int = 1; // 0x3cd PushI
	var_57_string = "loadgame"; // 0x3ce PushS
	SendMessage(var_56_int, var_57_string); // 0x3cf Func
	var_58_string = ""; // 0x3d1 PushV
	var_58_string = "loadgame"; // 0x3d2 MovS
	func_911(var_21_int, var_58_string); // 0x3d3 NEW_2
	goto Label_1011; // 0x3d5 Jump
	
Label_982:
	var_59_string = ""; // 0x3d6 PushV
	func_909(var_21_int, var_59_string); // 0x3d7 NEW_2
	var_60_string = "credits"; // 0x3d9 PushS
	var_61_bool = var_59_string == var_60_string; // 0x3da Eq
	if(var_61_bool == 0) goto Label_997; // 0x3db JumpB
	var_62_int = 1; // 0x3dc PushI
	var_63_string = "gameoptions"; // 0x3dd PushS
	SendMessage(var_62_int, var_63_string); // 0x3de Func
	var_64_string = ""; // 0x3e0 PushV
	var_64_string = "gameoptions"; // 0x3e1 MovS
	func_911(var_21_int, var_64_string); // 0x3e2 NEW_2
	goto Label_1011; // 0x3e4 Jump
	
Label_997:
	var_65_string = ""; // 0x3e5 PushV
	func_909(var_21_int, var_65_string); // 0x3e6 NEW_2
	var_66_string = "quitgame"; // 0x3e8 PushS
	var_67_bool = var_65_string == var_66_string; // 0x3e9 Eq
	if(var_67_bool == 0) goto Label_1011; // 0x3ea JumpB
	var_68_int = 1; // 0x3eb PushI
	var_69_string = "credits"; // 0x3ec PushS
	SendMessage(var_68_int, var_69_string); // 0x3ed Func
	var_70_string = ""; // 0x3ef PushV
	var_70_string = "credits"; // 0x3f0 MovS
	func_911(var_21_int, var_70_string); // 0x3f1 NEW_2
}


func_677()
{
	var_118_int = 0; // 0x2a5 PushI
	var_119_string = "danko"; // 0x2a6 PushS
	SendMessage(var_118_int, var_119_string); // 0x2a7 Func
	var_120_int = 0; // 0x2a9 PushI
	var_121_string = "burah"; // 0x2aa PushS
	SendMessage(var_120_int, var_121_string); // 0x2ab Func
	var_122_int = 0; // 0x2ad PushI
	var_123_string = "klara"; // 0x2ae PushS
	SendMessage(var_122_int, var_123_string); // 0x2af Func
	return 0; // 0x2b1 Return
}


func_816()
{
	func_656(); // 0x331 NEW_2
	var_73_string = ""; // 0x333 PushV
	func_909(var_21_int, var_73_string); // 0x334 NEW_2
	var_74_string = ""; // 0x336 PushS
	var_75_bool = var_73_string == var_74_string; // 0x337 Eq
	if(var_75_bool == 0) goto Label_834; // 0x338 JumpB
	var_76_int = 1; // 0x339 PushI
	var_77_string = "newgame"; // 0x33a PushS
	SendMessage(var_76_int, var_77_string); // 0x33b Func
	var_78_string = ""; // 0x33d PushV
	var_78_string = "newgame"; // 0x33e MovS
	func_911(var_21_int, var_78_string); // 0x33f NEW_2
	goto Label_908; // 0x341 Jump
	
Label_908:
	return 0; // 0x38c Return
	
Label_834:
	var_79_string = ""; // 0x342 PushV
	func_909(var_21_int, var_79_string); // 0x343 NEW_2
	var_80_string = "newgame"; // 0x345 PushS
	var_81_bool = var_79_string == var_80_string; // 0x346 Eq
	if(var_81_bool == 0) goto Label_849; // 0x347 JumpB
	var_82_int = 1; // 0x348 PushI
	var_83_string = "loadgame"; // 0x349 PushS
	SendMessage(var_82_int, var_83_string); // 0x34a Func
	var_84_string = ""; // 0x34c PushV
	var_84_string = "loadgame"; // 0x34d MovS
	func_911(var_21_int, var_84_string); // 0x34e NEW_2
	goto Label_908; // 0x350 Jump
	
Label_849:
	var_85_string = ""; // 0x351 PushV
	func_909(var_21_int, var_85_string); // 0x352 NEW_2
	var_86_string = "loadgame"; // 0x354 PushS
	var_87_bool = var_85_string == var_86_string; // 0x355 Eq
	if(var_87_bool == 0) goto Label_864; // 0x356 JumpB
	var_88_int = 1; // 0x357 PushI
	var_89_string = "gameoptions"; // 0x358 PushS
	SendMessage(var_88_int, var_89_string); // 0x359 Func
	var_90_string = ""; // 0x35b PushV
	var_90_string = "gameoptions"; // 0x35c MovS
	func_911(var_21_int, var_90_string); // 0x35d NEW_2
	goto Label_908; // 0x35f Jump
	
Label_864:
	var_91_string = ""; // 0x360 PushV
	func_909(var_21_int, var_91_string); // 0x361 NEW_2
	var_92_string = "gameoptions"; // 0x363 PushS
	var_93_bool = var_91_string == var_92_string; // 0x364 Eq
	if(var_93_bool == 0) goto Label_879; // 0x365 JumpB
	var_94_int = 1; // 0x366 PushI
	var_95_string = "credits"; // 0x367 PushS
	SendMessage(var_94_int, var_95_string); // 0x368 Func
	var_96_string = ""; // 0x36a PushV
	var_96_string = "credits"; // 0x36b MovS
	func_911(var_21_int, var_96_string); // 0x36c NEW_2
	goto Label_908; // 0x36e Jump
	
Label_879:
	var_97_string = ""; // 0x36f PushV
	func_909(var_21_int, var_97_string); // 0x370 NEW_2
	var_98_string = "credits"; // 0x372 PushS
	var_99_bool = var_97_string == var_98_string; // 0x373 Eq
	if(var_99_bool == 0) goto Label_894; // 0x374 JumpB
	var_100_int = 1; // 0x375 PushI
	var_101_string = "quitgame"; // 0x376 PushS
	SendMessage(var_100_int, var_101_string); // 0x377 Func
	var_102_string = ""; // 0x379 PushV
	var_102_string = "quitgame"; // 0x37a MovS
	func_911(var_21_int, var_102_string); // 0x37b NEW_2
	goto Label_908; // 0x37d Jump
	
Label_894:
	var_103_string = ""; // 0x37e PushV
	func_909(var_21_int, var_103_string); // 0x37f NEW_2
	var_104_string = "quitgame"; // 0x381 PushS
	var_105_bool = var_103_string == var_104_string; // 0x382 Eq
	if(var_105_bool == 0) goto Label_908; // 0x383 JumpB
	var_106_int = 1; // 0x384 PushI
	var_107_string = "newgame"; // 0x385 PushS
	SendMessage(var_106_int, var_107_string); // 0x386 Func
	var_108_string = ""; // 0x388 PushV
	var_108_string = "newgame"; // 0x389 MovS
	func_911(var_21_int, var_108_string); // 0x38a NEW_2
}


func_690()
{
	func_677(); // 0x2b3 NEW_2
	var_124_string = ""; // 0x2b5 PushV
	func_914(var_21_int, var_124_string); // 0x2b6 NEW_2
	var_125_string = ""; // 0x2b8 PushS
	var_126_bool = var_124_string == var_125_string; // 0x2b9 Eq
	if(var_126_bool == 0) goto Label_708; // 0x2ba JumpB
	var_127_int = 1; // 0x2bb PushI
	var_128_string = "danko"; // 0x2bc PushS
	SendMessage(var_127_int, var_128_string); // 0x2bd Func
	var_129_string = ""; // 0x2bf PushV
	var_129_string = "danko"; // 0x2c0 MovS
	func_916(var_21_int, var_129_string); // 0x2c1 NEW_2
	goto Label_752; // 0x2c3 Jump
	
Label_752:
	return 0; // 0x2f0 Return
	
Label_708:
	var_130_string = ""; // 0x2c4 PushV
	func_914(var_21_int, var_130_string); // 0x2c5 NEW_2
	var_131_string = "danko"; // 0x2c7 PushS
	var_132_bool = var_130_string == var_131_string; // 0x2c8 Eq
	if(var_132_bool == 0) goto Label_723; // 0x2c9 JumpB
	var_133_int = 1; // 0x2ca PushI
	var_134_string = "burah"; // 0x2cb PushS
	SendMessage(var_133_int, var_134_string); // 0x2cc Func
	var_135_string = ""; // 0x2ce PushV
	var_135_string = "burah"; // 0x2cf MovS
	func_916(var_21_int, var_135_string); // 0x2d0 NEW_2
	goto Label_752; // 0x2d2 Jump
	
Label_723:
	var_136_string = ""; // 0x2d3 PushV
	func_914(var_21_int, var_136_string); // 0x2d4 NEW_2
	var_137_string = "burah"; // 0x2d6 PushS
	var_138_bool = var_136_string == var_137_string; // 0x2d7 Eq
	if(var_138_bool == 0) goto Label_738; // 0x2d8 JumpB
	var_139_int = 1; // 0x2d9 PushI
	var_140_string = "klara"; // 0x2da PushS
	SendMessage(var_139_int, var_140_string); // 0x2db Func
	var_141_string = ""; // 0x2dd PushV
	var_141_string = "klara"; // 0x2de MovS
	func_916(var_21_int, var_141_string); // 0x2df NEW_2
	goto Label_752; // 0x2e1 Jump
	
Label_738:
	var_142_string = ""; // 0x2e2 PushV
	func_914(var_21_int, var_142_string); // 0x2e3 NEW_2
	var_143_string = "klara"; // 0x2e5 PushS
	var_144_bool = var_142_string == var_143_string; // 0x2e6 Eq
	if(var_144_bool == 0) goto Label_752; // 0x2e7 JumpB
	var_145_int = 1; // 0x2e8 PushI
	var_146_string = "danko"; // 0x2e9 PushS
	SendMessage(var_145_int, var_146_string); // 0x2ea Func
	var_147_string = ""; // 0x2ec PushV
	var_147_string = "danko"; // 0x2ed MovS
	func_916(var_21_int, var_147_string); // 0x2ee NEW_2
}


func_89(var_0_object, var_60_int)
{
	var_62_string = "intro.xml"; // 0x5a PushS
	var_63_bool = 0; // 0x5b PushB
	CreateWindow(var_62_string, var_63_bool, var_0_object); // 0x5c Func
	var_64_string = "intro"; // 0x5e PushS
	SendMessage(var_60_int, var_64_string); // 0x5f Func
	ProcessEvents(); // 0x61 Func
	return 0; // 0x63 Return
}


func_1122(var_112_bool)
{
	var_113_int = 0; var_114_int = 0; // 0x462 PushV
	var_115_string = "BurahCompleted"; // 0x463 PushS
	var_116_int = 0; // 0x464 PushI
	GetRegistryData(var_114_int, var_115_string, var_116_int); // 0x465 Func
	var_117_int = 0; // 0x467 PushI
	var_112_bool = var_114_int != var_117_int; // 0x468 Neq2
	return 2; // 0x469 Return
}


func_613(var_3_bool, var_4_object)
{
	var_142_string = ""; // 0x265 PushV
	var_142_string = ""; // 0x266 MovS
	func_911(var_23_object, var_142_string); // 0x267 NEW_2
	func_629(); // 0x26a NEW_2
	var_143_object = Obj(); // 0x26c PushV
	func_127(var_143_object); // 0x26d NEW_2
	var_3_bool = var_143_object; // 0x26e TMov
	var_144_object = Obj(); // 0x270 PushV
	func_135(var_144_object); // 0x271 NEW_2
	var_4_object = var_144_object; // 0x272 TMov
	return 0; // 0x274 Return
}


func_1130(var_105_bool)
{
	var_106_int = 0; var_107_int = 0; // 0x46a PushV
	var_108_string = "DankoCompleted"; // 0x46b PushS
	var_109_int = 0; // 0x46c PushI
	GetRegistryData(var_107_int, var_108_string, var_109_int); // 0x46d Func
	var_110_int = 0; // 0x46f PushI
	var_105_bool = var_107_int != var_110_int; // 0x470 Neq2
	return 2; // 0x471 Return
}


func_753()
{
	func_677(); // 0x2f2 NEW_2
	var_150_string = ""; // 0x2f4 PushV
	func_914(var_21_int, var_150_string); // 0x2f5 NEW_2
	var_151_string = ""; // 0x2f7 PushS
	var_152_bool = var_150_string == var_151_string; // 0x2f8 Eq
	if(var_152_bool == 0) goto Label_771; // 0x2f9 JumpB
	var_153_int = 1; // 0x2fa PushI
	var_154_string = "klara"; // 0x2fb PushS
	SendMessage(var_153_int, var_154_string); // 0x2fc Func
	var_155_string = ""; // 0x2fe PushV
	var_155_string = "klara"; // 0x2ff MovS
	func_916(var_21_int, var_155_string); // 0x300 NEW_2
	goto Label_815; // 0x302 Jump
	
Label_815:
	return 0; // 0x32f Return
	
Label_771:
	var_156_string = ""; // 0x303 PushV
	func_914(var_21_int, var_156_string); // 0x304 NEW_2
	var_157_string = "klara"; // 0x306 PushS
	var_158_bool = var_156_string == var_157_string; // 0x307 Eq
	if(var_158_bool == 0) goto Label_786; // 0x308 JumpB
	var_159_int = 1; // 0x309 PushI
	var_160_string = "burah"; // 0x30a PushS
	SendMessage(var_159_int, var_160_string); // 0x30b Func
	var_161_string = ""; // 0x30d PushV
	var_161_string = "burah"; // 0x30e MovS
	func_916(var_21_int, var_161_string); // 0x30f NEW_2
	goto Label_815; // 0x311 Jump
	
Label_786:
	var_162_string = ""; // 0x312 PushV
	func_914(var_21_int, var_162_string); // 0x313 NEW_2
	var_163_string = "burah"; // 0x315 PushS
	var_164_bool = var_162_string == var_163_string; // 0x316 Eq
	if(var_164_bool == 0) goto Label_801; // 0x317 JumpB
	var_165_int = 1; // 0x318 PushI
	var_166_string = "danko"; // 0x319 PushS
	SendMessage(var_165_int, var_166_string); // 0x31a Func
	var_167_string = ""; // 0x31c PushV
	var_167_string = "danko"; // 0x31d MovS
	func_916(var_21_int, var_167_string); // 0x31e NEW_2
	goto Label_815; // 0x320 Jump
	
Label_801:
	var_168_string = ""; // 0x321 PushV
	func_914(var_21_int, var_168_string); // 0x322 NEW_2
	var_169_string = "danko"; // 0x324 PushS
	var_170_bool = var_168_string == var_169_string; // 0x325 Eq
	if(var_170_bool == 0) goto Label_815; // 0x326 JumpB
	var_171_int = 1; // 0x327 PushI
	var_172_string = "klara"; // 0x328 PushS
	SendMessage(var_171_int, var_172_string); // 0x329 Func
	var_173_string = ""; // 0x32b PushV
	var_173_string = "klara"; // 0x32c MovS
	func_916(var_21_int, var_173_string); // 0x32d NEW_2
}


func_629()
{
	var_51_bool = var_3_bool; // 0x275 PushT
	if(var_51_bool == 0) goto Label_633; // 0x276 JumpB
	DestroyWindow(); // 0x277 TObjFunc
	
Label_633:
	var_52_object = var_4_object; // 0x279 PushT
	if(var_52_object == 0) goto Label_637; // 0x27a JumpB
	DestroyWindow(); // 0x27b TObjFunc
	
Label_637:
	var_53_int = var_5_int; // 0x27d PushT
	if(var_53_int == 0) goto Label_641; // 0x27e JumpB
	DestroyWindow(); // 0x27f TObjFunc
	
Label_641:
	var_54_int = var_6_int; // 0x281 PushT
	if(var_54_int == 0) goto Label_645; // 0x282 JumpB
	DestroyWindow(); // 0x283 TObjFunc
	
Label_645:
	var_55_int = var_7_int; // 0x285 PushT
	if(var_55_int == 0) goto Label_649; // 0x286 JumpB
	DestroyWindow(); // 0x287 TObjFunc
	
Label_649:
	var_56_object = var_8_object; // 0x289 PushT
	if(var_56_object == 0) goto Label_653; // 0x28a JumpB
	DestroyWindow(); // 0x28b TObjFunc
	
Label_653:
	CaptureKeyboard(); // 0x28d Func
	return 0; // 0x28f Return
}


func_127(var_111_object)
{
	var_112_object = Obj(); var_113_object = Obj(); // 0x7f PushV
	var_114_string = "game_buttons.xml"; // 0x80 PushS
	var_115_bool = 0; // 0x81 PushB
	CreateWindow(var_114_string, var_115_bool, var_113_object); // 0x82 Func
	var_111_object = var_113_object; // 0x84 Mov
	return 2; // 0x85 Return
}


