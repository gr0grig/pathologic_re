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
	var_22_int = 27; // 0x157 PushI
	var_23_bool = var_21_int == var_22_int; // 0x158 Eq
	if(var_23_bool == 0) goto Label_349; // 0x159 JumpB
	func_622(var_20_object, var_21_int); // 0x15b NEW_2
	
Label_349:
	return 0; // 0x15d Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object)
{
	var_24_string = "newgame"; // 0x15f PushS
	var_25_bool = var_22_string == var_24_string; // 0x160 Eq
	if(var_25_bool == 0) goto Label_358; // 0x161 JumpB
	var_2_int = 7; // 0x162 TMovI
	StopEventProcessing(); // 0x163 Func
	goto Label_621; // 0x165 Jump
	
Label_621:
	return 0; // 0x26d Return
	
Label_358:
	var_26_string = "quitgame"; // 0x166 PushS
	var_27_bool = var_22_string == var_26_string; // 0x167 Eq
	if(var_27_bool == 0) goto Label_368; // 0x168 JumpB
	var_28_string = "Quit game"; // 0x169 PushS
	UITrace(var_28_string); // 0x16a Func
	Quit(); // 0x16c Func
	return 0; // 0x16e Return
	
Label_368:
	var_29_string = "loadgame"; // 0x170 PushS
	var_30_bool = var_22_string == var_29_string; // 0x171 Eq
	if(var_30_bool == 0) goto Label_380; // 0x172 JumpB
	func_638(); // 0x174 NEW_2
	var_37_string = "load.xml"; // 0x176 PushS
	var_38_bool = 0; // 0x177 PushB
	CreateWindow(var_37_string, var_38_bool, var_20_object); // 0x178 Func
	return 0; // 0x17a Return
	
Label_380:
	var_39_string = "savegame"; // 0x17c PushS
	var_40_bool = var_22_string == var_39_string; // 0x17d Eq
	if(var_40_bool == 0) goto Label_392; // 0x17e JumpB
	func_638(); // 0x180 NEW_2
	var_41_string = "save.xml"; // 0x182 PushS
	var_42_bool = 0; // 0x183 PushB
	CreateWindow(var_41_string, var_42_bool, var_19_bool); // 0x184 Func
	return 0; // 0x186 Return
	
Label_392:
	var_43_string = "gameoptions"; // 0x188 PushS
	var_44_bool = var_22_string == var_43_string; // 0x189 Eq
	if(var_44_bool == 0) goto Label_404; // 0x18a JumpB
	func_638(); // 0x18c NEW_2
	var_45_string = "options.xml"; // 0x18e PushS
	var_46_bool = 0; // 0x18f PushB
	CreateWindow(var_45_string, var_46_bool, var_18_string); // 0x190 Func
	return 0; // 0x192 Return
	
Label_404:
	var_47_string = "continue"; // 0x194 PushS
	var_48_bool = var_22_string == var_47_string; // 0x195 Eq
	if(var_48_bool == 0) goto Label_412; // 0x196 JumpB
	var_2_int = 6; // 0x197 TMovI
	StopEventProcessing(); // 0x198 Func
	return 0; // 0x19a Return
	
Label_412:
	var_49_string = "credits"; // 0x19c PushS
	var_50_bool = var_22_string == var_49_string; // 0x19d Eq
	if(var_50_bool == 0) goto Label_442; // 0x19e JumpB
	func_638(); // 0x1a0 NEW_2
	var_51_int = 0; // 0x1a2 PushV
	var_51_int = 8; // 0x1a3 MovI
	TaskCall(1); // 0x1a4 TaskCall
	func_89(var_52_object, var_51_int); // 0x1a5 NEW_2
	TaskReturn(); // 0x1a6 TaskReturn
	var_56_object = Obj(); // 0x1a8 PushV
	func_136(var_56_object); // 0x1a9 NEW_2
	var_3_bool = var_56_object; // 0x1aa TMov
	var_61_object = Obj(); // 0x1ac PushV
	func_144(var_61_object); // 0x1ad NEW_2
	var_4_object = var_61_object; // 0x1ae TMov
	var_66_bool = 1; // 0x1b0 PushB
	ShowCursor(var_66_bool); // 0x1b1 Func
	CaptureKeyboard(); // 0x1b3 Func
	var_67_string = ""; // 0x1b5 PushV
	var_67_string = ""; // 0x1b6 MovS
	func_920(var_23_object, var_67_string); // 0x1b7 NEW_2
	goto Label_621; // 0x1b9 Jump
	
Label_442:
	var_68_string = "danko"; // 0x1ba PushS
	var_69_bool = var_22_string == var_68_string; // 0x1bb Eq
	if(var_69_bool == 0) goto Label_477; // 0x1bc JumpB
	var_70_int = 0; // 0x1bd PushI
	var_71_bool = var_21_int == var_70_int; // 0x1be Eq
	if(var_71_bool == 0) goto Label_452; // 0x1bf JumpB
	var_2_int = 1; // 0x1c0 TMovI
	StopEventProcessing(); // 0x1c1 Func
	goto Label_475; // 0x1c3 Jump
	
Label_475:
	return 0; // 0x1db Return
	
Label_452:
	var_72_int = 1; // 0x1c4 PushI
	var_73_bool = var_21_int == var_72_int; // 0x1c5 Eq
	if(var_73_bool == 0) goto Label_464; // 0x1c6 JumpB
	var_74_int = 202; // 0x1c7 PushI
	var_75_string = "player_name"; // 0x1c8 PushS
	SendMessage(var_74_int, var_75_string); // 0x1c9 Func
	var_76_int = 203; // 0x1cb PushI
	var_77_string = "player_desc"; // 0x1cc PushS
	SendMessage(var_76_int, var_77_string); // 0x1cd Func
	goto Label_475; // 0x1cf Jump
	
Label_464:
	var_78_int = 2; // 0x1d0 PushI
	var_79_bool = var_21_int == var_78_int; // 0x1d1 Eq
	if(var_79_bool == 0) goto Label_475; // 0x1d2 JumpB
	var_80_int = -1; // 0x1d3 PushI
	var_81_string = "player_name"; // 0x1d4 PushS
	SendMessage(var_80_int, var_81_string); // 0x1d5 Func
	var_82_int = -1; // 0x1d7 PushI
	var_83_string = "player_desc"; // 0x1d8 PushS
	SendMessage(var_82_int, var_83_string); // 0x1d9 Func
	
Label_477:
	var_84_string = "burah"; // 0x1dd PushS
	var_85_bool = var_22_string == var_84_string; // 0x1de Eq
	if(var_85_bool == 0) goto Label_512; // 0x1df JumpB
	var_86_int = 0; // 0x1e0 PushI
	var_87_bool = var_21_int == var_86_int; // 0x1e1 Eq
	if(var_87_bool == 0) goto Label_487; // 0x1e2 JumpB
	var_2_int = 2; // 0x1e3 TMovI
	StopEventProcessing(); // 0x1e4 Func
	goto Label_510; // 0x1e6 Jump
	
Label_510:
	return 0; // 0x1fe Return
	
Label_487:
	var_88_int = 1; // 0x1e7 PushI
	var_89_bool = var_21_int == var_88_int; // 0x1e8 Eq
	if(var_89_bool == 0) goto Label_499; // 0x1e9 JumpB
	var_90_int = 205; // 0x1ea PushI
	var_91_string = "player_name"; // 0x1eb PushS
	SendMessage(var_90_int, var_91_string); // 0x1ec Func
	var_92_int = 206; // 0x1ee PushI
	var_93_string = "player_desc"; // 0x1ef PushS
	SendMessage(var_92_int, var_93_string); // 0x1f0 Func
	goto Label_510; // 0x1f2 Jump
	
Label_499:
	var_94_int = 2; // 0x1f3 PushI
	var_95_bool = var_21_int == var_94_int; // 0x1f4 Eq
	if(var_95_bool == 0) goto Label_510; // 0x1f5 JumpB
	var_96_int = -1; // 0x1f6 PushI
	var_97_string = "player_name"; // 0x1f7 PushS
	SendMessage(var_96_int, var_97_string); // 0x1f8 Func
	var_98_int = -1; // 0x1fa PushI
	var_99_string = "player_desc"; // 0x1fb PushS
	SendMessage(var_98_int, var_99_string); // 0x1fc Func
	
Label_512:
	var_100_string = "klara"; // 0x200 PushS
	var_101_bool = var_22_string == var_100_string; // 0x201 Eq
	if(var_101_bool == 0) goto Label_581; // 0x202 JumpB
	var_102_int = 0; // 0x203 PushI
	var_103_bool = var_21_int == var_102_int; // 0x204 Eq
	if(var_103_bool == 0) goto Label_537; // 0x205 JumpB
	var_104_bool = 0; // 0x206 PushV
	var_104_bool = 0; // 0x207 MovB
	var_105_bool = 0; // 0x208 PushV
	func_1139(var_105_bool); // 0x209 NEW_2
	var_111_bool = var_105_bool == 0; // 0x20b Not
	if(var_111_bool == 0) goto Label_531; // 0x20c JumpB
	var_112_bool = 0; // 0x20d PushV
	func_1131(var_112_bool); // 0x20e NEW_2
	var_118_bool = var_112_bool == 0; // 0x210 Not
	if(var_118_bool == 0) goto Label_531; // 0x211 JumpB
	var_104_bool = 1; // 0x212 MovB
	
Label_531:
	if(var_104_bool == 0) goto Label_533; // 0x213 JumpB
	return 0; // 0x214 Return
	
Label_533:
	var_2_int = 3; // 0x215 TMovI
	StopEventProcessing(); // 0x216 Func
	goto Label_579; // 0x218 Jump
	
Label_579:
	return 0; // 0x243 Return
	
Label_537:
	var_119_int = 1; // 0x219 PushI
	var_120_bool = var_21_int == var_119_int; // 0x21a Eq
	if(var_120_bool == 0) goto Label_568; // 0x21b JumpB
	var_121_int = 208; // 0x21c PushI
	var_122_string = "player_name"; // 0x21d PushS
	SendMessage(var_121_int, var_122_string); // 0x21e Func
	var_123_bool = 0; // 0x220 PushV
	var_123_bool = 0; // 0x221 MovB
	var_124_bool = 0; // 0x222 PushV
	func_1139(var_124_bool); // 0x223 NEW_2
	var_125_bool = var_124_bool == 0; // 0x225 Not
	if(var_125_bool == 0) goto Label_557; // 0x226 JumpB
	var_126_bool = 0; // 0x227 PushV
	func_1131(var_126_bool); // 0x228 NEW_2
	var_127_bool = var_126_bool == 0; // 0x22a Not
	if(var_127_bool == 0) goto Label_557; // 0x22b JumpB
	var_123_bool = 1; // 0x22c MovB
	
Label_557:
	if(var_123_bool == 0) goto Label_563; // 0x22d JumpB
	var_128_int = 213; // 0x22e PushI
	var_129_string = "player_desc"; // 0x22f PushS
	SendMessage(var_128_int, var_129_string); // 0x230 Func
	goto Label_567; // 0x232 Jump
	
Label_567:
	goto Label_579; // 0x237 Jump
	
Label_563:
	var_130_int = 209; // 0x233 PushI
	var_131_string = "player_desc"; // 0x234 PushS
	SendMessage(var_130_int, var_131_string); // 0x235 Func
	
Label_568:
	var_132_int = 2; // 0x238 PushI
	var_133_bool = var_21_int == var_132_int; // 0x239 Eq
	if(var_133_bool == 0) goto Label_579; // 0x23a JumpB
	var_134_int = -1; // 0x23b PushI
	var_135_string = "player_name"; // 0x23c PushS
	SendMessage(var_134_int, var_135_string); // 0x23d Func
	var_136_int = -1; // 0x23f PushI
	var_137_string = "player_desc"; // 0x240 PushS
	SendMessage(var_136_int, var_137_string); // 0x241 Func
	
Label_581:
	var_138_string = "load"; // 0x245 PushS
	var_139_bool = var_22_string == var_138_string; // 0x246 Eq
	if(var_139_bool == 0) goto Label_598; // 0x247 JumpB
	var_140_int = 0; // 0x248 PushI
	var_141_bool = var_21_int == var_140_int; // 0x249 Eq
	if(var_141_bool == 0) goto Label_593; // 0x24a JumpB
	var_2_int = 4; // 0x24b TMovI
	GetFileName(var_14_object); // 0x24c ObjFunc
	StopEventProcessing(); // 0x24e Func
	goto Label_596; // 0x250 Jump
	
Label_596:
	return 0; // 0x254 Return
	
Label_593:
	func_622(var_22_string, var_23_object); // 0x252 NEW_2
	
Label_598:
	var_145_string = "save"; // 0x256 PushS
	var_146_bool = var_22_string == var_145_string; // 0x257 Eq
	if(var_146_bool == 0) goto Label_614; // 0x258 JumpB
	var_147_int = 0; // 0x259 PushI
	var_148_bool = var_21_int == var_147_int; // 0x25a Eq
	if(var_148_bool == 0) goto Label_609; // 0x25b JumpB
	var_2_int = 5; // 0x25c TMovI
	var_9_object = var_23_object; // 0x25d TMov
	StopEventProcessing(); // 0x25e Func
	goto Label_612; // 0x260 Jump
	
Label_612:
	return 0; // 0x264 Return
	
Label_609:
	func_622(var_22_string, var_23_object); // 0x262 NEW_2
	
Label_614:
	var_149_string = "options"; // 0x266 PushS
	var_150_bool = var_22_string == var_149_string; // 0x267 Eq
	if(var_150_bool == 0) goto Label_621; // 0x268 JumpB
	func_622(var_22_string, var_23_object); // 0x26a NEW_2
	return 0; // 0x26c Return
}


task_2_event_102(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; // 0x3fe Not
	if(var_22_bool == 0) goto Label_1042; // 0x3ff JumpB
	var_23_int = 272; // 0x400 PushI
	var_24_bool = var_21_int == var_23_int; // 0x401 Eq
	if(var_24_bool == 0) goto Label_1033; // 0x402 JumpB
	HideCursor(); // 0x403 Func
	func_928(); // 0x406 NEW_2
	goto Label_1041; // 0x408 Jump
	
Label_1041:
	goto Label_1059; // 0x411 Jump
	
Label_1059:
	return 0; // 0x423 Return
	
Label_1033:
	var_71_int = 274; // 0x409 PushI
	var_72_bool = var_21_int == var_71_int; // 0x40a Eq
	if(var_72_bool == 0) goto Label_1041; // 0x40b JumpB
	HideCursor(); // 0x40c Func
	func_825(); // 0x40f NEW_2
	
Label_1042:
	var_109_int = 271; // 0x412 PushI
	var_110_bool = var_21_int == var_109_int; // 0x413 Eq
	if(var_110_bool == 0) goto Label_1051; // 0x414 JumpB
	HideCursor(); // 0x415 Func
	func_699(); // 0x418 NEW_2
	goto Label_1059; // 0x41a Jump
	
Label_1051:
	var_141_int = 273; // 0x41b PushI
	var_142_bool = var_21_int == var_141_int; // 0x41c Eq
	if(var_142_bool == 0) goto Label_1059; // 0x41d JumpB
	HideCursor(); // 0x41e Func
	func_762(); // 0x421 NEW_2
}


task_2_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; // 0x425 Not
	if(var_22_bool == 0) goto Label_1097; // 0x426 JumpB
	var_23_int = 267; // 0x427 PushI
	var_24_bool = var_21_int == var_23_int; // 0x428 Eq
	if(var_24_bool == 0) goto Label_1072; // 0x429 JumpB
	HideCursor(); // 0x42a Func
	func_928(); // 0x42d NEW_2
	goto Label_1096; // 0x42f Jump
	
Label_1096:
	goto Label_1130; // 0x448 Jump
	
Label_1130:
	return 0; // 0x46a Return
	
Label_1072:
	var_71_int = 268; // 0x430 PushI
	var_72_bool = var_21_int == var_71_int; // 0x431 Eq
	if(var_72_bool == 0) goto Label_1081; // 0x432 JumpB
	HideCursor(); // 0x433 Func
	func_825(); // 0x436 NEW_2
	goto Label_1096; // 0x438 Jump
	
Label_1081:
	var_109_int = 256; // 0x439 PushI
	var_110_bool = var_21_int == var_109_int; // 0x43a Eq
	if(var_110_bool == 0) goto Label_1096; // 0x43b JumpB
	var_111_string = ""; // 0x43c PushV
	func_918(var_21_int, var_111_string); // 0x43d NEW_2
	var_112_string = ""; // 0x43f PushS
	var_113_bool = var_111_string != var_112_string; // 0x440 Neq
	if(var_113_bool == 0) goto Label_1096; // 0x441 JumpB
	var_114_int = 2; // 0x442 PushI
	var_115_string = ""; // 0x443 PushV
	func_918(var_114_int, var_115_string); // 0x444 NEW_2
	SendMessage(var_114_int, var_115_string); // 0x446 Func
	
Label_1097:
	var_116_int = 270; // 0x449 PushI
	var_117_bool = var_21_int == var_116_int; // 0x44a Eq
	if(var_117_bool == 0) goto Label_1106; // 0x44b JumpB
	HideCursor(); // 0x44c Func
	func_699(); // 0x44f NEW_2
	goto Label_1130; // 0x451 Jump
	
Label_1106:
	var_148_int = 269; // 0x452 PushI
	var_149_bool = var_21_int == var_148_int; // 0x453 Eq
	if(var_149_bool == 0) goto Label_1115; // 0x454 JumpB
	HideCursor(); // 0x455 Func
	func_762(); // 0x458 NEW_2
	goto Label_1130; // 0x45a Jump
	
Label_1115:
	var_174_int = 256; // 0x45b PushI
	var_175_bool = var_21_int == var_174_int; // 0x45c Eq
	if(var_175_bool == 0) goto Label_1130; // 0x45d JumpB
	var_176_string = ""; // 0x45e PushV
	func_923(var_21_int, var_176_string); // 0x45f NEW_2
	var_177_string = ""; // 0x461 PushS
	var_178_bool = var_176_string != var_177_string; // 0x462 Neq
	if(var_178_bool == 0) goto Label_1130; // 0x463 JumpB
	var_179_int = 2; // 0x464 PushI
	var_180_string = ""; // 0x465 PushV
	func_923(var_179_int, var_180_string); // 0x466 NEW_2
	SendMessage(var_179_int, var_180_string); // 0x468 Func
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	EventDisable(1); // 0x6d EventDisable
	EventDisable(0); // 0x6e EventDisable
	UISync(); // 0x6f Func
	EventEnable(1); // 0x71 EventEnable
	EventEnable(0); // 0x72 EventEnable
	var_21_string = ""; var_22_bool = 0; // 0x73 PushV
	var_21_string = "fin_termit.wmv"; // 0x74 MovS
	var_22_bool = 0; // 0x75 MovB
	TaskCall(0); // 0x76 TaskCall
	func_0(var_25_int, var_26_bool, var_21_string, var_22_bool); // 0x77 NEW_2
	TaskReturn(); // 0x78 TaskReturn
	var_32_string = "menumusic"; // 0x7a PushS
	PlaySound(var_32_string); // 0x7b Func
	var_33_int = 0; // 0x7d PushV
	var_33_int = 8; // 0x7e MovI
	TaskCall(1); // 0x7f TaskCall
	func_89(var_34_object, var_33_int); // 0x80 NEW_2
	TaskReturn(); // 0x81 TaskReturn
	var_38_bool = 0; // 0x83 PushV
	var_38_bool = 0; // 0x84 MovB
	func_152(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_38_bool); // 0x85 NEW_2
	return 0; // 0x87 Return
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


func_136(var_114_object)
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x88 PushV
	var_117_string = "game_buttons.xml"; // 0x89 PushS
	var_118_bool = 0; // 0x8a PushB
	CreateWindow(var_117_string, var_118_bool, var_116_object); // 0x8b Func
	var_114_object = var_116_object; // 0x8d Mov
	return 2; // 0x8e Return
}


func_144(var_119_object)
{
	var_120_object = Obj(); var_121_object = Obj(); // 0x90 PushV
	var_122_string = "game_logo.xml"; // 0x91 PushS
	var_123_bool = 0; // 0x92 PushB
	CreateWindow(var_122_string, var_123_bool, var_121_object); // 0x93 Func
	var_119_object = var_121_object; // 0x95 Mov
	return 2; // 0x96 Return
}


func_918(var_11_object, var_35_string)
{
	var_35_string = var_11_object; // 0x396 MovT
	return 0; // 0x397 Return
}


func_920(var_11_object, var_51_string)
{
	var_11_object = var_51_string; // 0x399 TMov
	return 0; // 0x39a Return
}


func_665()
{
	var_25_int = 0; // 0x299 PushI
	var_26_string = "newgame"; // 0x29a PushS
	SendMessage(var_25_int, var_26_string); // 0x29b Func
	var_27_int = 0; // 0x29d PushI
	var_28_string = "loadgame"; // 0x29e PushS
	SendMessage(var_27_int, var_28_string); // 0x29f Func
	var_29_int = 0; // 0x2a1 PushI
	var_30_string = "gameoptions"; // 0x2a2 PushS
	SendMessage(var_29_int, var_30_string); // 0x2a3 Func
	var_31_int = 0; // 0x2a5 PushI
	var_32_string = "credits"; // 0x2a6 PushS
	SendMessage(var_31_int, var_32_string); // 0x2a7 Func
	var_33_int = 0; // 0x2a9 PushI
	var_34_string = "quitgame"; // 0x2aa PushS
	SendMessage(var_33_int, var_34_string); // 0x2ab Func
	return 0; // 0x2ad Return
}


func_152(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_14_object, var_20_object, var_38_bool)
{
	var_39_bool = 0; var_40_bool = 0; var_41_bool = 0; var_42_string = ""; var_43_bool = 0; var_44_bool = 0; var_45_bool = 0; var_46_string = ""; // 0x98 PushV
	var_14_object = var_38_bool; // 0x99 TMov
	CaptureKeyboard(); // 0x9a Func
	var_2_int = 0; // 0x9c TMovI
	GetWindowSize(var_0_object, var_46_string); // 0x9d Func
	var_47_string = "default"; // 0x9f PushS
	SetCursor(var_47_string); // 0xa0 Func
	var_48_string = "default"; // 0xa2 PushS
	SetBackground(var_48_string); // 0xa3 Func
	var_49_string = "menumusic"; // 0xa5 PushS
	PlaySound(var_49_string); // 0xa6 Func
	var_50_bool = 1; // 0xa8 PushB
	ShowCursor(var_50_bool); // 0xa9 Func
	var_51_string = ""; // 0xab PushV
	var_51_string = ""; // 0xac MovS
	func_920(var_46_string, var_51_string); // 0xad NEW_2
	var_52_string = ""; // 0xaf PushV
	var_52_string = ""; // 0xb0 MovS
	func_925(var_46_string, var_52_string); // 0xb1 NEW_2
	var_53_bool = var_38_bool; // 0xb3 Push
	if(var_53_bool == 0) goto Label_186; // 0xb4 JumpB
	var_54_string = "game_choose_pers.xml"; // 0xb5 PushS
	var_55_bool = 0; // 0xb6 PushB
	CreateWindow(var_54_string, var_55_bool, var_44_bool); // 0xb7 Func
	goto Label_194; // 0xb9 Jump
	
Label_194:
	var_56_bool = var_2_int == 0; // 0xc2 Not
	if(var_56_bool == 0) goto Label_199; // 0xc3 JumpB
	ProcessEvents(); // 0xc4 Func
	goto Label_194; // 0xc6 Jump
	
Label_199:
	func_638(); // 0xc8 NEW_2
	var_63_int = 1; // 0xca PushI
	var_64_bool = var_2_int == var_63_int; // 0xcb Eq
	if(var_64_bool == 0) goto Label_232; // 0xcc JumpB
	var_65_string = "menumusic"; // 0xcd PushS
	PauseSound(var_65_string); // 0xce Func
	var_66_int = 0; // 0xd0 PushV
	var_66_int = 1; // 0xd1 MovI
	TaskCall(1); // 0xd2 TaskCall
	func_89(var_67_object, var_66_int); // 0xd3 NEW_2
	TaskReturn(); // 0xd4 TaskReturn
	var_68_string = ""; var_69_bool = 0; // 0xd6 PushV
	var_68_string = "intro_danko.wmv"; // 0xd7 MovS
	var_69_bool = 1; // 0xd8 MovB
	TaskCall(0); // 0xd9 TaskCall
	func_0(var_72_int, var_73_bool, var_68_string, var_69_bool); // 0xda NEW_2
	TaskReturn(); // 0xdb TaskReturn
	RemoveWorld(); // 0xdd Func
	UISync(); // 0xdf Func
	DestroyWindow(); // 0xe1 Func
	var_74_string = "world_danko.xml"; // 0xe3 PushS
	var_75_string = "player_danko.xml"; // 0xe4 PushS
	NewGame(var_74_string, var_75_string); // 0xe5 Func
	goto Label_341; // 0xe7 Jump
	
Label_341:
	return 8; // 0x155 Return
	
Label_232:
	var_76_int = 2; // 0xe8 PushI
	var_77_bool = var_2_int == var_76_int; // 0xe9 Eq
	if(var_77_bool == 0) goto Label_262; // 0xea JumpB
	var_78_string = "menumusic"; // 0xeb PushS
	PauseSound(var_78_string); // 0xec Func
	var_79_int = 0; // 0xee PushV
	var_79_int = 2; // 0xef MovI
	TaskCall(1); // 0xf0 TaskCall
	func_89(var_80_object, var_79_int); // 0xf1 NEW_2
	TaskReturn(); // 0xf2 TaskReturn
	var_81_string = ""; var_82_bool = 0; // 0xf4 PushV
	var_81_string = "intro_burah.wmv"; // 0xf5 MovS
	var_82_bool = 1; // 0xf6 MovB
	TaskCall(0); // 0xf7 TaskCall
	func_0(var_85_int, var_86_bool, var_81_string, var_82_bool); // 0xf8 NEW_2
	TaskReturn(); // 0xf9 TaskReturn
	RemoveWorld(); // 0xfb Func
	UISync(); // 0xfd Func
	DestroyWindow(); // 0xff Func
	var_87_string = "world_burah.xml"; // 0x101 PushS
	var_88_string = "player_burah.xml"; // 0x102 PushS
	NewGame(var_87_string, var_88_string); // 0x103 Func
	goto Label_341; // 0x105 Jump
	
Label_262:
	var_89_int = 3; // 0x106 PushI
	var_90_bool = var_2_int == var_89_int; // 0x107 Eq
	if(var_90_bool == 0) goto Label_292; // 0x108 JumpB
	var_91_string = "menumusic"; // 0x109 PushS
	PauseSound(var_91_string); // 0x10a Func
	var_92_int = 0; // 0x10c PushV
	var_92_int = 3; // 0x10d MovI
	TaskCall(1); // 0x10e TaskCall
	func_89(var_93_object, var_92_int); // 0x10f NEW_2
	TaskReturn(); // 0x110 TaskReturn
	var_94_string = ""; var_95_bool = 0; // 0x112 PushV
	var_94_string = "intro_klara.wmv"; // 0x113 MovS
	var_95_bool = 1; // 0x114 MovB
	TaskCall(0); // 0x115 TaskCall
	func_0(var_98_int, var_99_bool, var_94_string, var_95_bool); // 0x116 NEW_2
	TaskReturn(); // 0x117 TaskReturn
	RemoveWorld(); // 0x119 Func
	UISync(); // 0x11b Func
	DestroyWindow(); // 0x11d Func
	var_100_string = "world_klara.xml"; // 0x11f PushS
	var_101_string = "player_klara.xml"; // 0x120 PushS
	NewGame(var_100_string, var_101_string); // 0x121 Func
	goto Label_341; // 0x123 Jump
	
Label_292:
	var_102_int = 4; // 0x124 PushI
	var_103_bool = var_2_int == var_102_int; // 0x125 Eq
	if(var_103_bool == 0) goto Label_311; // 0x126 JumpB
	var_104_string = "menumusic"; // 0x127 PushS
	PauseSound(var_104_string); // 0x128 Func
	var_105_string = "Loading : "; // 0x12a PushS
	var_106_int = var_105_string + var_10_object; // 0x12b Add
	Trace(var_106_int); // 0x12c Func
	RemoveWorld(); // 0x12e Func
	UISync(); // 0x130 Func
	DestroyWindow(); // 0x132 Func
	LoadGame(var_43_bool, var_20_object); // 0x134 Func
	goto Label_341; // 0x136 Jump
	
Label_311:
	var_107_int = 5; // 0x137 PushI
	var_108_bool = var_2_int == var_107_int; // 0x138 Eq
	if(var_108_bool == 0) goto Label_328; // 0x139 JumpB
	var_109_bool = var_9_object == 0; // 0x13a Not
	if(var_109_bool == 0) goto Label_321; // 0x13b JumpB
	DestroyWindow(); // 0x13c Func
	SaveGame(var_44_bool); // 0x13e Func
	goto Label_327; // 0x140 Jump
	
Label_327:
	goto Label_341; // 0x147 Jump
	
Label_321:
	DestroyWindow(); // 0x141 Func
	GetFileName(var_46_string); // 0x143 TObjFunc
	SaveGame(var_45_bool, var_46_string); // 0x145 Func
	
Label_328:
	var_110_int = 7; // 0x148 PushI
	var_111_bool = var_2_int == var_110_int; // 0x149 Eq
	if(var_111_bool == 0) goto Label_341; // 0x14a JumpB
	RemoveWorld(); // 0x14b Func
	UISync(); // 0x14d Func
	DestroyWindow(); // 0x14f Func
	var_112_string = "world_intro.xml"; // 0x151 PushS
	var_113_string = "player_intro.xml"; // 0x152 PushS
	NewGame(var_112_string, var_113_string); // 0x153 Func
	
Label_186:
	var_114_object = Obj(); // 0xba PushV
	func_136(var_114_object); // 0xbb NEW_2
	var_3_bool = var_114_object; // 0xbc TMov
	var_119_object = Obj(); // 0xbe PushV
	func_144(var_119_object); // 0xbf NEW_2
	var_4_object = var_119_object; // 0xc0 TMov
}


func_923(var_12_object, var_124_string)
{
	var_124_string = var_12_object; // 0x39b MovT
	return 0; // 0x39c Return
}


func_925(var_12_object, var_52_string)
{
	var_12_object = var_52_string; // 0x39e TMov
	return 0; // 0x39f Return
}


func_928()
{
	func_665(); // 0x3a1 NEW_2
	var_35_string = ""; // 0x3a3 PushV
	func_918(var_21_int, var_35_string); // 0x3a4 NEW_2
	var_36_string = ""; // 0x3a6 PushS
	var_37_bool = var_35_string == var_36_string; // 0x3a7 Eq
	if(var_37_bool == 0) goto Label_946; // 0x3a8 JumpB
	var_38_int = 1; // 0x3a9 PushI
	var_39_string = "quitgame"; // 0x3aa PushS
	SendMessage(var_38_int, var_39_string); // 0x3ab Func
	var_40_string = ""; // 0x3ad PushV
	var_40_string = "quitgame"; // 0x3ae MovS
	func_920(var_21_int, var_40_string); // 0x3af NEW_2
	goto Label_1020; // 0x3b1 Jump
	
Label_1020:
	return 0; // 0x3fc Return
	
Label_946:
	var_41_string = ""; // 0x3b2 PushV
	func_918(var_21_int, var_41_string); // 0x3b3 NEW_2
	var_42_string = "newgame"; // 0x3b5 PushS
	var_43_bool = var_41_string == var_42_string; // 0x3b6 Eq
	if(var_43_bool == 0) goto Label_961; // 0x3b7 JumpB
	var_44_int = 1; // 0x3b8 PushI
	var_45_string = "quitgame"; // 0x3b9 PushS
	SendMessage(var_44_int, var_45_string); // 0x3ba Func
	var_46_string = ""; // 0x3bc PushV
	var_46_string = "quitgame"; // 0x3bd MovS
	func_920(var_21_int, var_46_string); // 0x3be NEW_2
	goto Label_1020; // 0x3c0 Jump
	
Label_961:
	var_47_string = ""; // 0x3c1 PushV
	func_918(var_21_int, var_47_string); // 0x3c2 NEW_2
	var_48_string = "loadgame"; // 0x3c4 PushS
	var_49_bool = var_47_string == var_48_string; // 0x3c5 Eq
	if(var_49_bool == 0) goto Label_976; // 0x3c6 JumpB
	var_50_int = 1; // 0x3c7 PushI
	var_51_string = "newgame"; // 0x3c8 PushS
	SendMessage(var_50_int, var_51_string); // 0x3c9 Func
	var_52_string = ""; // 0x3cb PushV
	var_52_string = "newgame"; // 0x3cc MovS
	func_920(var_21_int, var_52_string); // 0x3cd NEW_2
	goto Label_1020; // 0x3cf Jump
	
Label_976:
	var_53_string = ""; // 0x3d0 PushV
	func_918(var_21_int, var_53_string); // 0x3d1 NEW_2
	var_54_string = "gameoptions"; // 0x3d3 PushS
	var_55_bool = var_53_string == var_54_string; // 0x3d4 Eq
	if(var_55_bool == 0) goto Label_991; // 0x3d5 JumpB
	var_56_int = 1; // 0x3d6 PushI
	var_57_string = "loadgame"; // 0x3d7 PushS
	SendMessage(var_56_int, var_57_string); // 0x3d8 Func
	var_58_string = ""; // 0x3da PushV
	var_58_string = "loadgame"; // 0x3db MovS
	func_920(var_21_int, var_58_string); // 0x3dc NEW_2
	goto Label_1020; // 0x3de Jump
	
Label_991:
	var_59_string = ""; // 0x3df PushV
	func_918(var_21_int, var_59_string); // 0x3e0 NEW_2
	var_60_string = "credits"; // 0x3e2 PushS
	var_61_bool = var_59_string == var_60_string; // 0x3e3 Eq
	if(var_61_bool == 0) goto Label_1006; // 0x3e4 JumpB
	var_62_int = 1; // 0x3e5 PushI
	var_63_string = "gameoptions"; // 0x3e6 PushS
	SendMessage(var_62_int, var_63_string); // 0x3e7 Func
	var_64_string = ""; // 0x3e9 PushV
	var_64_string = "gameoptions"; // 0x3ea MovS
	func_920(var_21_int, var_64_string); // 0x3eb NEW_2
	goto Label_1020; // 0x3ed Jump
	
Label_1006:
	var_65_string = ""; // 0x3ee PushV
	func_918(var_21_int, var_65_string); // 0x3ef NEW_2
	var_66_string = "quitgame"; // 0x3f1 PushS
	var_67_bool = var_65_string == var_66_string; // 0x3f2 Eq
	if(var_67_bool == 0) goto Label_1020; // 0x3f3 JumpB
	var_68_int = 1; // 0x3f4 PushI
	var_69_string = "credits"; // 0x3f5 PushS
	SendMessage(var_68_int, var_69_string); // 0x3f6 Func
	var_70_string = ""; // 0x3f8 PushV
	var_70_string = "credits"; // 0x3f9 MovS
	func_920(var_21_int, var_70_string); // 0x3fa NEW_2
}


func_686()
{
	var_118_int = 0; // 0x2ae PushI
	var_119_string = "danko"; // 0x2af PushS
	SendMessage(var_118_int, var_119_string); // 0x2b0 Func
	var_120_int = 0; // 0x2b2 PushI
	var_121_string = "burah"; // 0x2b3 PushS
	SendMessage(var_120_int, var_121_string); // 0x2b4 Func
	var_122_int = 0; // 0x2b6 PushI
	var_123_string = "klara"; // 0x2b7 PushS
	SendMessage(var_122_int, var_123_string); // 0x2b8 Func
	return 0; // 0x2ba Return
}


func_825()
{
	func_665(); // 0x33a NEW_2
	var_73_string = ""; // 0x33c PushV
	func_918(var_21_int, var_73_string); // 0x33d NEW_2
	var_74_string = ""; // 0x33f PushS
	var_75_bool = var_73_string == var_74_string; // 0x340 Eq
	if(var_75_bool == 0) goto Label_843; // 0x341 JumpB
	var_76_int = 1; // 0x342 PushI
	var_77_string = "newgame"; // 0x343 PushS
	SendMessage(var_76_int, var_77_string); // 0x344 Func
	var_78_string = ""; // 0x346 PushV
	var_78_string = "newgame"; // 0x347 MovS
	func_920(var_21_int, var_78_string); // 0x348 NEW_2
	goto Label_917; // 0x34a Jump
	
Label_917:
	return 0; // 0x395 Return
	
Label_843:
	var_79_string = ""; // 0x34b PushV
	func_918(var_21_int, var_79_string); // 0x34c NEW_2
	var_80_string = "newgame"; // 0x34e PushS
	var_81_bool = var_79_string == var_80_string; // 0x34f Eq
	if(var_81_bool == 0) goto Label_858; // 0x350 JumpB
	var_82_int = 1; // 0x351 PushI
	var_83_string = "loadgame"; // 0x352 PushS
	SendMessage(var_82_int, var_83_string); // 0x353 Func
	var_84_string = ""; // 0x355 PushV
	var_84_string = "loadgame"; // 0x356 MovS
	func_920(var_21_int, var_84_string); // 0x357 NEW_2
	goto Label_917; // 0x359 Jump
	
Label_858:
	var_85_string = ""; // 0x35a PushV
	func_918(var_21_int, var_85_string); // 0x35b NEW_2
	var_86_string = "loadgame"; // 0x35d PushS
	var_87_bool = var_85_string == var_86_string; // 0x35e Eq
	if(var_87_bool == 0) goto Label_873; // 0x35f JumpB
	var_88_int = 1; // 0x360 PushI
	var_89_string = "gameoptions"; // 0x361 PushS
	SendMessage(var_88_int, var_89_string); // 0x362 Func
	var_90_string = ""; // 0x364 PushV
	var_90_string = "gameoptions"; // 0x365 MovS
	func_920(var_21_int, var_90_string); // 0x366 NEW_2
	goto Label_917; // 0x368 Jump
	
Label_873:
	var_91_string = ""; // 0x369 PushV
	func_918(var_21_int, var_91_string); // 0x36a NEW_2
	var_92_string = "gameoptions"; // 0x36c PushS
	var_93_bool = var_91_string == var_92_string; // 0x36d Eq
	if(var_93_bool == 0) goto Label_888; // 0x36e JumpB
	var_94_int = 1; // 0x36f PushI
	var_95_string = "credits"; // 0x370 PushS
	SendMessage(var_94_int, var_95_string); // 0x371 Func
	var_96_string = ""; // 0x373 PushV
	var_96_string = "credits"; // 0x374 MovS
	func_920(var_21_int, var_96_string); // 0x375 NEW_2
	goto Label_917; // 0x377 Jump
	
Label_888:
	var_97_string = ""; // 0x378 PushV
	func_918(var_21_int, var_97_string); // 0x379 NEW_2
	var_98_string = "credits"; // 0x37b PushS
	var_99_bool = var_97_string == var_98_string; // 0x37c Eq
	if(var_99_bool == 0) goto Label_903; // 0x37d JumpB
	var_100_int = 1; // 0x37e PushI
	var_101_string = "quitgame"; // 0x37f PushS
	SendMessage(var_100_int, var_101_string); // 0x380 Func
	var_102_string = ""; // 0x382 PushV
	var_102_string = "quitgame"; // 0x383 MovS
	func_920(var_21_int, var_102_string); // 0x384 NEW_2
	goto Label_917; // 0x386 Jump
	
Label_903:
	var_103_string = ""; // 0x387 PushV
	func_918(var_21_int, var_103_string); // 0x388 NEW_2
	var_104_string = "quitgame"; // 0x38a PushS
	var_105_bool = var_103_string == var_104_string; // 0x38b Eq
	if(var_105_bool == 0) goto Label_917; // 0x38c JumpB
	var_106_int = 1; // 0x38d PushI
	var_107_string = "newgame"; // 0x38e PushS
	SendMessage(var_106_int, var_107_string); // 0x38f Func
	var_108_string = ""; // 0x391 PushV
	var_108_string = "newgame"; // 0x392 MovS
	func_920(var_21_int, var_108_string); // 0x393 NEW_2
}


func_699()
{
	func_686(); // 0x2bc NEW_2
	var_124_string = ""; // 0x2be PushV
	func_923(var_21_int, var_124_string); // 0x2bf NEW_2
	var_125_string = ""; // 0x2c1 PushS
	var_126_bool = var_124_string == var_125_string; // 0x2c2 Eq
	if(var_126_bool == 0) goto Label_717; // 0x2c3 JumpB
	var_127_int = 1; // 0x2c4 PushI
	var_128_string = "danko"; // 0x2c5 PushS
	SendMessage(var_127_int, var_128_string); // 0x2c6 Func
	var_129_string = ""; // 0x2c8 PushV
	var_129_string = "danko"; // 0x2c9 MovS
	func_925(var_21_int, var_129_string); // 0x2ca NEW_2
	goto Label_761; // 0x2cc Jump
	
Label_761:
	return 0; // 0x2f9 Return
	
Label_717:
	var_130_string = ""; // 0x2cd PushV
	func_923(var_21_int, var_130_string); // 0x2ce NEW_2
	var_131_string = "danko"; // 0x2d0 PushS
	var_132_bool = var_130_string == var_131_string; // 0x2d1 Eq
	if(var_132_bool == 0) goto Label_732; // 0x2d2 JumpB
	var_133_int = 1; // 0x2d3 PushI
	var_134_string = "burah"; // 0x2d4 PushS
	SendMessage(var_133_int, var_134_string); // 0x2d5 Func
	var_135_string = ""; // 0x2d7 PushV
	var_135_string = "burah"; // 0x2d8 MovS
	func_925(var_21_int, var_135_string); // 0x2d9 NEW_2
	goto Label_761; // 0x2db Jump
	
Label_732:
	var_136_string = ""; // 0x2dc PushV
	func_923(var_21_int, var_136_string); // 0x2dd NEW_2
	var_137_string = "burah"; // 0x2df PushS
	var_138_bool = var_136_string == var_137_string; // 0x2e0 Eq
	if(var_138_bool == 0) goto Label_747; // 0x2e1 JumpB
	var_139_int = 1; // 0x2e2 PushI
	var_140_string = "klara"; // 0x2e3 PushS
	SendMessage(var_139_int, var_140_string); // 0x2e4 Func
	var_141_string = ""; // 0x2e6 PushV
	var_141_string = "klara"; // 0x2e7 MovS
	func_925(var_21_int, var_141_string); // 0x2e8 NEW_2
	goto Label_761; // 0x2ea Jump
	
Label_747:
	var_142_string = ""; // 0x2eb PushV
	func_923(var_21_int, var_142_string); // 0x2ec NEW_2
	var_143_string = "klara"; // 0x2ee PushS
	var_144_bool = var_142_string == var_143_string; // 0x2ef Eq
	if(var_144_bool == 0) goto Label_761; // 0x2f0 JumpB
	var_145_int = 1; // 0x2f1 PushI
	var_146_string = "danko"; // 0x2f2 PushS
	SendMessage(var_145_int, var_146_string); // 0x2f3 Func
	var_147_string = ""; // 0x2f5 PushV
	var_147_string = "danko"; // 0x2f6 MovS
	func_925(var_21_int, var_147_string); // 0x2f7 NEW_2
}


func_89(var_0_object, var_33_int)
{
	var_35_string = "intro.xml"; // 0x5a PushS
	var_36_bool = 0; // 0x5b PushB
	CreateWindow(var_35_string, var_36_bool, var_0_object); // 0x5c Func
	var_37_string = "intro"; // 0x5e PushS
	SendMessage(var_33_int, var_37_string); // 0x5f Func
	ProcessEvents(); // 0x61 Func
	return 0; // 0x63 Return
}


func_1131(var_112_bool)
{
	var_113_int = 0; var_114_int = 0; // 0x46b PushV
	var_115_string = "BurahCompleted"; // 0x46c PushS
	var_116_int = 0; // 0x46d PushI
	GetRegistryData(var_114_int, var_115_string, var_116_int); // 0x46e Func
	var_117_int = 0; // 0x470 PushI
	var_112_bool = var_114_int != var_117_int; // 0x471 Neq2
	return 2; // 0x472 Return
}


func_622(var_3_bool, var_4_object)
{
	var_142_string = ""; // 0x26e PushV
	var_142_string = ""; // 0x26f MovS
	func_920(var_23_object, var_142_string); // 0x270 NEW_2
	func_638(); // 0x273 NEW_2
	var_143_object = Obj(); // 0x275 PushV
	func_136(var_143_object); // 0x276 NEW_2
	var_3_bool = var_143_object; // 0x277 TMov
	var_144_object = Obj(); // 0x279 PushV
	func_144(var_144_object); // 0x27a NEW_2
	var_4_object = var_144_object; // 0x27b TMov
	return 0; // 0x27d Return
}


func_1139(var_105_bool)
{
	var_106_int = 0; var_107_int = 0; // 0x473 PushV
	var_108_string = "DankoCompleted"; // 0x474 PushS
	var_109_int = 0; // 0x475 PushI
	GetRegistryData(var_107_int, var_108_string, var_109_int); // 0x476 Func
	var_110_int = 0; // 0x478 PushI
	var_105_bool = var_107_int != var_110_int; // 0x479 Neq2
	return 2; // 0x47a Return
}


func_762()
{
	func_686(); // 0x2fb NEW_2
	var_150_string = ""; // 0x2fd PushV
	func_923(var_21_int, var_150_string); // 0x2fe NEW_2
	var_151_string = ""; // 0x300 PushS
	var_152_bool = var_150_string == var_151_string; // 0x301 Eq
	if(var_152_bool == 0) goto Label_780; // 0x302 JumpB
	var_153_int = 1; // 0x303 PushI
	var_154_string = "klara"; // 0x304 PushS
	SendMessage(var_153_int, var_154_string); // 0x305 Func
	var_155_string = ""; // 0x307 PushV
	var_155_string = "klara"; // 0x308 MovS
	func_925(var_21_int, var_155_string); // 0x309 NEW_2
	goto Label_824; // 0x30b Jump
	
Label_824:
	return 0; // 0x338 Return
	
Label_780:
	var_156_string = ""; // 0x30c PushV
	func_923(var_21_int, var_156_string); // 0x30d NEW_2
	var_157_string = "klara"; // 0x30f PushS
	var_158_bool = var_156_string == var_157_string; // 0x310 Eq
	if(var_158_bool == 0) goto Label_795; // 0x311 JumpB
	var_159_int = 1; // 0x312 PushI
	var_160_string = "burah"; // 0x313 PushS
	SendMessage(var_159_int, var_160_string); // 0x314 Func
	var_161_string = ""; // 0x316 PushV
	var_161_string = "burah"; // 0x317 MovS
	func_925(var_21_int, var_161_string); // 0x318 NEW_2
	goto Label_824; // 0x31a Jump
	
Label_795:
	var_162_string = ""; // 0x31b PushV
	func_923(var_21_int, var_162_string); // 0x31c NEW_2
	var_163_string = "burah"; // 0x31e PushS
	var_164_bool = var_162_string == var_163_string; // 0x31f Eq
	if(var_164_bool == 0) goto Label_810; // 0x320 JumpB
	var_165_int = 1; // 0x321 PushI
	var_166_string = "danko"; // 0x322 PushS
	SendMessage(var_165_int, var_166_string); // 0x323 Func
	var_167_string = ""; // 0x325 PushV
	var_167_string = "danko"; // 0x326 MovS
	func_925(var_21_int, var_167_string); // 0x327 NEW_2
	goto Label_824; // 0x329 Jump
	
Label_810:
	var_168_string = ""; // 0x32a PushV
	func_923(var_21_int, var_168_string); // 0x32b NEW_2
	var_169_string = "danko"; // 0x32d PushS
	var_170_bool = var_168_string == var_169_string; // 0x32e Eq
	if(var_170_bool == 0) goto Label_824; // 0x32f JumpB
	var_171_int = 1; // 0x330 PushI
	var_172_string = "klara"; // 0x331 PushS
	SendMessage(var_171_int, var_172_string); // 0x332 Func
	var_173_string = ""; // 0x334 PushV
	var_173_string = "klara"; // 0x335 MovS
	func_925(var_21_int, var_173_string); // 0x336 NEW_2
}


func_638()
{
	var_57_bool = var_3_bool; // 0x27e PushT
	if(var_57_bool == 0) goto Label_642; // 0x27f JumpB
	DestroyWindow(); // 0x280 TObjFunc
	
Label_642:
	var_58_object = var_4_object; // 0x282 PushT
	if(var_58_object == 0) goto Label_646; // 0x283 JumpB
	DestroyWindow(); // 0x284 TObjFunc
	
Label_646:
	var_59_int = var_5_int; // 0x286 PushT
	if(var_59_int == 0) goto Label_650; // 0x287 JumpB
	DestroyWindow(); // 0x288 TObjFunc
	
Label_650:
	var_60_int = var_6_int; // 0x28a PushT
	if(var_60_int == 0) goto Label_654; // 0x28b JumpB
	DestroyWindow(); // 0x28c TObjFunc
	
Label_654:
	var_61_int = var_7_int; // 0x28e PushT
	if(var_61_int == 0) goto Label_658; // 0x28f JumpB
	DestroyWindow(); // 0x290 TObjFunc
	
Label_658:
	var_62_object = var_8_object; // 0x292 PushT
	if(var_62_object == 0) goto Label_662; // 0x293 JumpB
	DestroyWindow(); // 0x294 TObjFunc
	
Label_662:
	CaptureKeyboard(); // 0x296 Func
	return 0; // 0x298 Return
}


