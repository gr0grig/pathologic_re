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
	var_22_int = 27; // 0x14a PushI
	var_23_bool = var_21_int == var_22_int; // 0x14b Eq
	if(var_23_bool == 0) goto Label_336; // 0x14c JumpB
	func_609(var_20_object, var_21_int); // 0x14e NEW_2
	
Label_336:
	return 0; // 0x150 Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object)
{
	var_24_string = "newgame"; // 0x152 PushS
	var_25_bool = var_22_string == var_24_string; // 0x153 Eq
	if(var_25_bool == 0) goto Label_345; // 0x154 JumpB
	var_2_int = 7; // 0x155 TMovI
	StopEventProcessing(); // 0x156 Func
	goto Label_608; // 0x158 Jump
	
Label_608:
	return 0; // 0x260 Return
	
Label_345:
	var_26_string = "quitgame"; // 0x159 PushS
	var_27_bool = var_22_string == var_26_string; // 0x15a Eq
	if(var_27_bool == 0) goto Label_355; // 0x15b JumpB
	var_28_string = "Quit game"; // 0x15c PushS
	UITrace(var_28_string); // 0x15d Func
	Quit(); // 0x15f Func
	return 0; // 0x161 Return
	
Label_355:
	var_29_string = "loadgame"; // 0x163 PushS
	var_30_bool = var_22_string == var_29_string; // 0x164 Eq
	if(var_30_bool == 0) goto Label_367; // 0x165 JumpB
	func_625(); // 0x167 NEW_2
	var_37_string = "load.xml"; // 0x169 PushS
	var_38_bool = 0; // 0x16a PushB
	CreateWindow(var_37_string, var_38_bool, var_20_object); // 0x16b Func
	return 0; // 0x16d Return
	
Label_367:
	var_39_string = "savegame"; // 0x16f PushS
	var_40_bool = var_22_string == var_39_string; // 0x170 Eq
	if(var_40_bool == 0) goto Label_379; // 0x171 JumpB
	func_625(); // 0x173 NEW_2
	var_41_string = "save.xml"; // 0x175 PushS
	var_42_bool = 0; // 0x176 PushB
	CreateWindow(var_41_string, var_42_bool, var_19_bool); // 0x177 Func
	return 0; // 0x179 Return
	
Label_379:
	var_43_string = "gameoptions"; // 0x17b PushS
	var_44_bool = var_22_string == var_43_string; // 0x17c Eq
	if(var_44_bool == 0) goto Label_391; // 0x17d JumpB
	func_625(); // 0x17f NEW_2
	var_45_string = "options.xml"; // 0x181 PushS
	var_46_bool = 0; // 0x182 PushB
	CreateWindow(var_45_string, var_46_bool, var_18_string); // 0x183 Func
	return 0; // 0x185 Return
	
Label_391:
	var_47_string = "continue"; // 0x187 PushS
	var_48_bool = var_22_string == var_47_string; // 0x188 Eq
	if(var_48_bool == 0) goto Label_399; // 0x189 JumpB
	var_2_int = 6; // 0x18a TMovI
	StopEventProcessing(); // 0x18b Func
	return 0; // 0x18d Return
	
Label_399:
	var_49_string = "credits"; // 0x18f PushS
	var_50_bool = var_22_string == var_49_string; // 0x190 Eq
	if(var_50_bool == 0) goto Label_429; // 0x191 JumpB
	func_625(); // 0x193 NEW_2
	var_51_int = 0; // 0x195 PushV
	var_51_int = 8; // 0x196 MovI
	TaskCall(1); // 0x197 TaskCall
	func_89(var_52_object, var_51_int); // 0x198 NEW_2
	TaskReturn(); // 0x199 TaskReturn
	var_56_object = Obj(); // 0x19b PushV
	func_123(var_56_object); // 0x19c NEW_2
	var_3_bool = var_56_object; // 0x19d TMov
	var_61_object = Obj(); // 0x19f PushV
	func_131(var_61_object); // 0x1a0 NEW_2
	var_4_object = var_61_object; // 0x1a1 TMov
	var_66_bool = 1; // 0x1a3 PushB
	ShowCursor(var_66_bool); // 0x1a4 Func
	CaptureKeyboard(); // 0x1a6 Func
	var_67_string = ""; // 0x1a8 PushV
	var_67_string = ""; // 0x1a9 MovS
	func_907(var_23_object, var_67_string); // 0x1aa NEW_2
	goto Label_608; // 0x1ac Jump
	
Label_429:
	var_68_string = "danko"; // 0x1ad PushS
	var_69_bool = var_22_string == var_68_string; // 0x1ae Eq
	if(var_69_bool == 0) goto Label_464; // 0x1af JumpB
	var_70_int = 0; // 0x1b0 PushI
	var_71_bool = var_21_int == var_70_int; // 0x1b1 Eq
	if(var_71_bool == 0) goto Label_439; // 0x1b2 JumpB
	var_2_int = 1; // 0x1b3 TMovI
	StopEventProcessing(); // 0x1b4 Func
	goto Label_462; // 0x1b6 Jump
	
Label_462:
	return 0; // 0x1ce Return
	
Label_439:
	var_72_int = 1; // 0x1b7 PushI
	var_73_bool = var_21_int == var_72_int; // 0x1b8 Eq
	if(var_73_bool == 0) goto Label_451; // 0x1b9 JumpB
	var_74_int = 202; // 0x1ba PushI
	var_75_string = "player_name"; // 0x1bb PushS
	SendMessage(var_74_int, var_75_string); // 0x1bc Func
	var_76_int = 203; // 0x1be PushI
	var_77_string = "player_desc"; // 0x1bf PushS
	SendMessage(var_76_int, var_77_string); // 0x1c0 Func
	goto Label_462; // 0x1c2 Jump
	
Label_451:
	var_78_int = 2; // 0x1c3 PushI
	var_79_bool = var_21_int == var_78_int; // 0x1c4 Eq
	if(var_79_bool == 0) goto Label_462; // 0x1c5 JumpB
	var_80_int = -1; // 0x1c6 PushI
	var_81_string = "player_name"; // 0x1c7 PushS
	SendMessage(var_80_int, var_81_string); // 0x1c8 Func
	var_82_int = -1; // 0x1ca PushI
	var_83_string = "player_desc"; // 0x1cb PushS
	SendMessage(var_82_int, var_83_string); // 0x1cc Func
	
Label_464:
	var_84_string = "burah"; // 0x1d0 PushS
	var_85_bool = var_22_string == var_84_string; // 0x1d1 Eq
	if(var_85_bool == 0) goto Label_499; // 0x1d2 JumpB
	var_86_int = 0; // 0x1d3 PushI
	var_87_bool = var_21_int == var_86_int; // 0x1d4 Eq
	if(var_87_bool == 0) goto Label_474; // 0x1d5 JumpB
	var_2_int = 2; // 0x1d6 TMovI
	StopEventProcessing(); // 0x1d7 Func
	goto Label_497; // 0x1d9 Jump
	
Label_497:
	return 0; // 0x1f1 Return
	
Label_474:
	var_88_int = 1; // 0x1da PushI
	var_89_bool = var_21_int == var_88_int; // 0x1db Eq
	if(var_89_bool == 0) goto Label_486; // 0x1dc JumpB
	var_90_int = 205; // 0x1dd PushI
	var_91_string = "player_name"; // 0x1de PushS
	SendMessage(var_90_int, var_91_string); // 0x1df Func
	var_92_int = 206; // 0x1e1 PushI
	var_93_string = "player_desc"; // 0x1e2 PushS
	SendMessage(var_92_int, var_93_string); // 0x1e3 Func
	goto Label_497; // 0x1e5 Jump
	
Label_486:
	var_94_int = 2; // 0x1e6 PushI
	var_95_bool = var_21_int == var_94_int; // 0x1e7 Eq
	if(var_95_bool == 0) goto Label_497; // 0x1e8 JumpB
	var_96_int = -1; // 0x1e9 PushI
	var_97_string = "player_name"; // 0x1ea PushS
	SendMessage(var_96_int, var_97_string); // 0x1eb Func
	var_98_int = -1; // 0x1ed PushI
	var_99_string = "player_desc"; // 0x1ee PushS
	SendMessage(var_98_int, var_99_string); // 0x1ef Func
	
Label_499:
	var_100_string = "klara"; // 0x1f3 PushS
	var_101_bool = var_22_string == var_100_string; // 0x1f4 Eq
	if(var_101_bool == 0) goto Label_568; // 0x1f5 JumpB
	var_102_int = 0; // 0x1f6 PushI
	var_103_bool = var_21_int == var_102_int; // 0x1f7 Eq
	if(var_103_bool == 0) goto Label_524; // 0x1f8 JumpB
	var_104_bool = 0; // 0x1f9 PushV
	var_104_bool = 0; // 0x1fa MovB
	var_105_bool = 0; // 0x1fb PushV
	func_1126(var_105_bool); // 0x1fc NEW_2
	var_111_bool = var_105_bool == 0; // 0x1fe Not
	if(var_111_bool == 0) goto Label_518; // 0x1ff JumpB
	var_112_bool = 0; // 0x200 PushV
	func_1118(var_112_bool); // 0x201 NEW_2
	var_118_bool = var_112_bool == 0; // 0x203 Not
	if(var_118_bool == 0) goto Label_518; // 0x204 JumpB
	var_104_bool = 1; // 0x205 MovB
	
Label_518:
	if(var_104_bool == 0) goto Label_520; // 0x206 JumpB
	return 0; // 0x207 Return
	
Label_520:
	var_2_int = 3; // 0x208 TMovI
	StopEventProcessing(); // 0x209 Func
	goto Label_566; // 0x20b Jump
	
Label_566:
	return 0; // 0x236 Return
	
Label_524:
	var_119_int = 1; // 0x20c PushI
	var_120_bool = var_21_int == var_119_int; // 0x20d Eq
	if(var_120_bool == 0) goto Label_555; // 0x20e JumpB
	var_121_int = 208; // 0x20f PushI
	var_122_string = "player_name"; // 0x210 PushS
	SendMessage(var_121_int, var_122_string); // 0x211 Func
	var_123_bool = 0; // 0x213 PushV
	var_123_bool = 0; // 0x214 MovB
	var_124_bool = 0; // 0x215 PushV
	func_1126(var_124_bool); // 0x216 NEW_2
	var_125_bool = var_124_bool == 0; // 0x218 Not
	if(var_125_bool == 0) goto Label_544; // 0x219 JumpB
	var_126_bool = 0; // 0x21a PushV
	func_1118(var_126_bool); // 0x21b NEW_2
	var_127_bool = var_126_bool == 0; // 0x21d Not
	if(var_127_bool == 0) goto Label_544; // 0x21e JumpB
	var_123_bool = 1; // 0x21f MovB
	
Label_544:
	if(var_123_bool == 0) goto Label_550; // 0x220 JumpB
	var_128_int = 213; // 0x221 PushI
	var_129_string = "player_desc"; // 0x222 PushS
	SendMessage(var_128_int, var_129_string); // 0x223 Func
	goto Label_554; // 0x225 Jump
	
Label_554:
	goto Label_566; // 0x22a Jump
	
Label_550:
	var_130_int = 209; // 0x226 PushI
	var_131_string = "player_desc"; // 0x227 PushS
	SendMessage(var_130_int, var_131_string); // 0x228 Func
	
Label_555:
	var_132_int = 2; // 0x22b PushI
	var_133_bool = var_21_int == var_132_int; // 0x22c Eq
	if(var_133_bool == 0) goto Label_566; // 0x22d JumpB
	var_134_int = -1; // 0x22e PushI
	var_135_string = "player_name"; // 0x22f PushS
	SendMessage(var_134_int, var_135_string); // 0x230 Func
	var_136_int = -1; // 0x232 PushI
	var_137_string = "player_desc"; // 0x233 PushS
	SendMessage(var_136_int, var_137_string); // 0x234 Func
	
Label_568:
	var_138_string = "load"; // 0x238 PushS
	var_139_bool = var_22_string == var_138_string; // 0x239 Eq
	if(var_139_bool == 0) goto Label_585; // 0x23a JumpB
	var_140_int = 0; // 0x23b PushI
	var_141_bool = var_21_int == var_140_int; // 0x23c Eq
	if(var_141_bool == 0) goto Label_580; // 0x23d JumpB
	var_2_int = 4; // 0x23e TMovI
	GetFileName(var_14_object); // 0x23f ObjFunc
	StopEventProcessing(); // 0x241 Func
	goto Label_583; // 0x243 Jump
	
Label_583:
	return 0; // 0x247 Return
	
Label_580:
	func_609(var_22_string, var_23_object); // 0x245 NEW_2
	
Label_585:
	var_145_string = "save"; // 0x249 PushS
	var_146_bool = var_22_string == var_145_string; // 0x24a Eq
	if(var_146_bool == 0) goto Label_601; // 0x24b JumpB
	var_147_int = 0; // 0x24c PushI
	var_148_bool = var_21_int == var_147_int; // 0x24d Eq
	if(var_148_bool == 0) goto Label_596; // 0x24e JumpB
	var_2_int = 5; // 0x24f TMovI
	var_9_object = var_23_object; // 0x250 TMov
	StopEventProcessing(); // 0x251 Func
	goto Label_599; // 0x253 Jump
	
Label_599:
	return 0; // 0x257 Return
	
Label_596:
	func_609(var_22_string, var_23_object); // 0x255 NEW_2
	
Label_601:
	var_149_string = "options"; // 0x259 PushS
	var_150_bool = var_22_string == var_149_string; // 0x25a Eq
	if(var_150_bool == 0) goto Label_608; // 0x25b JumpB
	func_609(var_22_string, var_23_object); // 0x25d NEW_2
	return 0; // 0x25f Return
}


task_2_event_102(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; // 0x3f1 Not
	if(var_22_bool == 0) goto Label_1029; // 0x3f2 JumpB
	var_23_int = 272; // 0x3f3 PushI
	var_24_bool = var_21_int == var_23_int; // 0x3f4 Eq
	if(var_24_bool == 0) goto Label_1020; // 0x3f5 JumpB
	HideCursor(); // 0x3f6 Func
	func_915(); // 0x3f9 NEW_2
	goto Label_1028; // 0x3fb Jump
	
Label_1028:
	goto Label_1046; // 0x404 Jump
	
Label_1046:
	return 0; // 0x416 Return
	
Label_1020:
	var_71_int = 274; // 0x3fc PushI
	var_72_bool = var_21_int == var_71_int; // 0x3fd Eq
	if(var_72_bool == 0) goto Label_1028; // 0x3fe JumpB
	HideCursor(); // 0x3ff Func
	func_812(); // 0x402 NEW_2
	
Label_1029:
	var_109_int = 271; // 0x405 PushI
	var_110_bool = var_21_int == var_109_int; // 0x406 Eq
	if(var_110_bool == 0) goto Label_1038; // 0x407 JumpB
	HideCursor(); // 0x408 Func
	func_686(); // 0x40b NEW_2
	goto Label_1046; // 0x40d Jump
	
Label_1038:
	var_141_int = 273; // 0x40e PushI
	var_142_bool = var_21_int == var_141_int; // 0x40f Eq
	if(var_142_bool == 0) goto Label_1046; // 0x410 JumpB
	HideCursor(); // 0x411 Func
	func_749(); // 0x414 NEW_2
}


task_2_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; // 0x418 Not
	if(var_22_bool == 0) goto Label_1084; // 0x419 JumpB
	var_23_int = 267; // 0x41a PushI
	var_24_bool = var_21_int == var_23_int; // 0x41b Eq
	if(var_24_bool == 0) goto Label_1059; // 0x41c JumpB
	HideCursor(); // 0x41d Func
	func_915(); // 0x420 NEW_2
	goto Label_1083; // 0x422 Jump
	
Label_1083:
	goto Label_1117; // 0x43b Jump
	
Label_1117:
	return 0; // 0x45d Return
	
Label_1059:
	var_71_int = 268; // 0x423 PushI
	var_72_bool = var_21_int == var_71_int; // 0x424 Eq
	if(var_72_bool == 0) goto Label_1068; // 0x425 JumpB
	HideCursor(); // 0x426 Func
	func_812(); // 0x429 NEW_2
	goto Label_1083; // 0x42b Jump
	
Label_1068:
	var_109_int = 256; // 0x42c PushI
	var_110_bool = var_21_int == var_109_int; // 0x42d Eq
	if(var_110_bool == 0) goto Label_1083; // 0x42e JumpB
	var_111_string = ""; // 0x42f PushV
	func_905(var_21_int, var_111_string); // 0x430 NEW_2
	var_112_string = ""; // 0x432 PushS
	var_113_bool = var_111_string != var_112_string; // 0x433 Neq
	if(var_113_bool == 0) goto Label_1083; // 0x434 JumpB
	var_114_int = 2; // 0x435 PushI
	var_115_string = ""; // 0x436 PushV
	func_905(var_114_int, var_115_string); // 0x437 NEW_2
	SendMessage(var_114_int, var_115_string); // 0x439 Func
	
Label_1084:
	var_116_int = 270; // 0x43c PushI
	var_117_bool = var_21_int == var_116_int; // 0x43d Eq
	if(var_117_bool == 0) goto Label_1093; // 0x43e JumpB
	HideCursor(); // 0x43f Func
	func_686(); // 0x442 NEW_2
	goto Label_1117; // 0x444 Jump
	
Label_1093:
	var_148_int = 269; // 0x445 PushI
	var_149_bool = var_21_int == var_148_int; // 0x446 Eq
	if(var_149_bool == 0) goto Label_1102; // 0x447 JumpB
	HideCursor(); // 0x448 Func
	func_749(); // 0x44b NEW_2
	goto Label_1117; // 0x44d Jump
	
Label_1102:
	var_174_int = 256; // 0x44e PushI
	var_175_bool = var_21_int == var_174_int; // 0x44f Eq
	if(var_175_bool == 0) goto Label_1117; // 0x450 JumpB
	var_176_string = ""; // 0x451 PushV
	func_910(var_21_int, var_176_string); // 0x452 NEW_2
	var_177_string = ""; // 0x454 PushS
	var_178_bool = var_176_string != var_177_string; // 0x455 Neq
	if(var_178_bool == 0) goto Label_1117; // 0x456 JumpB
	var_179_int = 2; // 0x457 PushI
	var_180_string = ""; // 0x458 PushV
	func_910(var_179_int, var_180_string); // 0x459 NEW_2
	SendMessage(var_179_int, var_180_string); // 0x45b Func
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	var_21_string = "menumusic"; // 0x6d PushS
	PlaySound(var_21_string); // 0x6e Func
	var_22_int = 0; // 0x70 PushV
	var_22_int = 8; // 0x71 MovI
	TaskCall(1); // 0x72 TaskCall
	func_89(var_23_object, var_22_int); // 0x73 NEW_2
	TaskReturn(); // 0x74 TaskReturn
	var_27_bool = 0; // 0x76 PushV
	var_27_bool = 0; // 0x77 MovB
	func_139(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_27_bool); // 0x78 NEW_2
	return 0; // 0x7a Return
}


func_0(var_0_object, var_3_bool, var_57_string, var_58_bool)
{
	var_3_bool = var_58_bool; // 0x1 TMov
	var_63_bool = 1; // 0x2 PushB
	SetOwnerDraw(var_63_bool); // 0x3 Func
	var_64_bool = 0; // 0x5 PushB
	ShowCursor(var_64_bool); // 0x6 Func
	CaptureKeyboard(); // 0x8 Func
	GetWindowSize(var_58_bool, var_57_string); // 0xa Func
	LoadVideo(var_57_string); // 0xc Func
	FindVideo(var_0_object, var_57_string); // 0xe Func
	var_65_bool = 0; // 0x10 PushB
	Play(var_65_bool); // 0x11 TObjFunc
	ProcessEvents(); // 0x13 Func
	var_66_bool = 0; // 0x15 PushB
	SetOwnerDraw(var_66_bool); // 0x16 Func
	var_67_bool = 1; // 0x18 PushB
	ShowCursor(var_67_bool); // 0x19 Func
	ReleaseVideo(var_57_string); // 0x1b Func
	return 0; // 0x1d Return
}


func_131(var_113_object)
{
	var_114_object = Obj(); var_115_object = Obj(); // 0x83 PushV
	var_116_string = "game_logo.xml"; // 0x84 PushS
	var_117_bool = 0; // 0x85 PushB
	CreateWindow(var_116_string, var_117_bool, var_115_object); // 0x86 Func
	var_113_object = var_115_object; // 0x88 Mov
	return 2; // 0x89 Return
}


func_905(var_11_object, var_35_string)
{
	var_35_string = var_11_object; // 0x389 MovT
	return 0; // 0x38a Return
}


func_139(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_14_object, var_20_object, var_27_bool)
{
	var_28_bool = 0; var_29_bool = 0; var_30_bool = 0; var_31_string = ""; var_32_bool = 0; var_33_bool = 0; var_34_bool = 0; var_35_string = ""; // 0x8b PushV
	var_14_object = var_27_bool; // 0x8c TMov
	CaptureKeyboard(); // 0x8d Func
	var_2_int = 0; // 0x8f TMovI
	GetWindowSize(var_0_object, var_35_string); // 0x90 Func
	var_36_string = "default"; // 0x92 PushS
	SetCursor(var_36_string); // 0x93 Func
	var_37_string = "default"; // 0x95 PushS
	SetBackground(var_37_string); // 0x96 Func
	var_38_string = "menumusic"; // 0x98 PushS
	PlaySound(var_38_string); // 0x99 Func
	var_39_bool = 1; // 0x9b PushB
	ShowCursor(var_39_bool); // 0x9c Func
	var_40_string = ""; // 0x9e PushV
	var_40_string = ""; // 0x9f MovS
	func_907(var_35_string, var_40_string); // 0xa0 NEW_2
	var_41_string = ""; // 0xa2 PushV
	var_41_string = ""; // 0xa3 MovS
	func_912(var_35_string, var_41_string); // 0xa4 NEW_2
	var_42_bool = var_27_bool; // 0xa6 Push
	if(var_42_bool == 0) goto Label_173; // 0xa7 JumpB
	var_43_string = "game_choose_pers.xml"; // 0xa8 PushS
	var_44_bool = 0; // 0xa9 PushB
	CreateWindow(var_43_string, var_44_bool, var_33_bool); // 0xaa Func
	goto Label_181; // 0xac Jump
	
Label_181:
	var_45_bool = var_2_int == 0; // 0xb5 Not
	if(var_45_bool == 0) goto Label_186; // 0xb6 JumpB
	ProcessEvents(); // 0xb7 Func
	goto Label_181; // 0xb9 Jump
	
Label_186:
	func_625(); // 0xbb NEW_2
	var_52_int = 1; // 0xbd PushI
	var_53_bool = var_2_int == var_52_int; // 0xbe Eq
	if(var_53_bool == 0) goto Label_219; // 0xbf JumpB
	var_54_string = "menumusic"; // 0xc0 PushS
	PauseSound(var_54_string); // 0xc1 Func
	var_55_int = 0; // 0xc3 PushV
	var_55_int = 1; // 0xc4 MovI
	TaskCall(1); // 0xc5 TaskCall
	func_89(var_56_object, var_55_int); // 0xc6 NEW_2
	TaskReturn(); // 0xc7 TaskReturn
	var_57_string = ""; var_58_bool = 0; // 0xc9 PushV
	var_57_string = "intro_danko.wmv"; // 0xca MovS
	var_58_bool = 1; // 0xcb MovB
	TaskCall(0); // 0xcc TaskCall
	func_0(var_61_int, var_62_bool, var_57_string, var_58_bool); // 0xcd NEW_2
	TaskReturn(); // 0xce TaskReturn
	RemoveWorld(); // 0xd0 Func
	UISync(); // 0xd2 Func
	DestroyWindow(); // 0xd4 Func
	var_68_string = "world_danko.xml"; // 0xd6 PushS
	var_69_string = "player_danko.xml"; // 0xd7 PushS
	NewGame(var_68_string, var_69_string); // 0xd8 Func
	goto Label_328; // 0xda Jump
	
Label_328:
	return 8; // 0x148 Return
	
Label_219:
	var_70_int = 2; // 0xdb PushI
	var_71_bool = var_2_int == var_70_int; // 0xdc Eq
	if(var_71_bool == 0) goto Label_249; // 0xdd JumpB
	var_72_string = "menumusic"; // 0xde PushS
	PauseSound(var_72_string); // 0xdf Func
	var_73_int = 0; // 0xe1 PushV
	var_73_int = 2; // 0xe2 MovI
	TaskCall(1); // 0xe3 TaskCall
	func_89(var_74_object, var_73_int); // 0xe4 NEW_2
	TaskReturn(); // 0xe5 TaskReturn
	var_75_string = ""; var_76_bool = 0; // 0xe7 PushV
	var_75_string = "intro_burah.wmv"; // 0xe8 MovS
	var_76_bool = 1; // 0xe9 MovB
	TaskCall(0); // 0xea TaskCall
	func_0(var_79_int, var_80_bool, var_75_string, var_76_bool); // 0xeb NEW_2
	TaskReturn(); // 0xec TaskReturn
	RemoveWorld(); // 0xee Func
	UISync(); // 0xf0 Func
	DestroyWindow(); // 0xf2 Func
	var_81_string = "world_burah.xml"; // 0xf4 PushS
	var_82_string = "player_burah.xml"; // 0xf5 PushS
	NewGame(var_81_string, var_82_string); // 0xf6 Func
	goto Label_328; // 0xf8 Jump
	
Label_249:
	var_83_int = 3; // 0xf9 PushI
	var_84_bool = var_2_int == var_83_int; // 0xfa Eq
	if(var_84_bool == 0) goto Label_279; // 0xfb JumpB
	var_85_string = "menumusic"; // 0xfc PushS
	PauseSound(var_85_string); // 0xfd Func
	var_86_int = 0; // 0xff PushV
	var_86_int = 3; // 0x100 MovI
	TaskCall(1); // 0x101 TaskCall
	func_89(var_87_object, var_86_int); // 0x102 NEW_2
	TaskReturn(); // 0x103 TaskReturn
	var_88_string = ""; var_89_bool = 0; // 0x105 PushV
	var_88_string = "intro_klara.wmv"; // 0x106 MovS
	var_89_bool = 1; // 0x107 MovB
	TaskCall(0); // 0x108 TaskCall
	func_0(var_92_int, var_93_bool, var_88_string, var_89_bool); // 0x109 NEW_2
	TaskReturn(); // 0x10a TaskReturn
	RemoveWorld(); // 0x10c Func
	UISync(); // 0x10e Func
	DestroyWindow(); // 0x110 Func
	var_94_string = "world_klara.xml"; // 0x112 PushS
	var_95_string = "player_klara.xml"; // 0x113 PushS
	NewGame(var_94_string, var_95_string); // 0x114 Func
	goto Label_328; // 0x116 Jump
	
Label_279:
	var_96_int = 4; // 0x117 PushI
	var_97_bool = var_2_int == var_96_int; // 0x118 Eq
	if(var_97_bool == 0) goto Label_298; // 0x119 JumpB
	var_98_string = "menumusic"; // 0x11a PushS
	PauseSound(var_98_string); // 0x11b Func
	var_99_string = "Loading : "; // 0x11d PushS
	var_100_int = var_99_string + var_10_object; // 0x11e Add
	Trace(var_100_int); // 0x11f Func
	RemoveWorld(); // 0x121 Func
	UISync(); // 0x123 Func
	DestroyWindow(); // 0x125 Func
	LoadGame(var_32_bool, var_20_object); // 0x127 Func
	goto Label_328; // 0x129 Jump
	
Label_298:
	var_101_int = 5; // 0x12a PushI
	var_102_bool = var_2_int == var_101_int; // 0x12b Eq
	if(var_102_bool == 0) goto Label_315; // 0x12c JumpB
	var_103_bool = var_9_object == 0; // 0x12d Not
	if(var_103_bool == 0) goto Label_308; // 0x12e JumpB
	DestroyWindow(); // 0x12f Func
	SaveGame(var_33_bool); // 0x131 Func
	goto Label_314; // 0x133 Jump
	
Label_314:
	goto Label_328; // 0x13a Jump
	
Label_308:
	DestroyWindow(); // 0x134 Func
	GetFileName(var_35_string); // 0x136 TObjFunc
	SaveGame(var_34_bool, var_35_string); // 0x138 Func
	
Label_315:
	var_104_int = 7; // 0x13b PushI
	var_105_bool = var_2_int == var_104_int; // 0x13c Eq
	if(var_105_bool == 0) goto Label_328; // 0x13d JumpB
	RemoveWorld(); // 0x13e Func
	UISync(); // 0x140 Func
	DestroyWindow(); // 0x142 Func
	var_106_string = "world_intro.xml"; // 0x144 PushS
	var_107_string = "player_intro.xml"; // 0x145 PushS
	NewGame(var_106_string, var_107_string); // 0x146 Func
	
Label_173:
	var_108_object = Obj(); // 0xad PushV
	func_123(var_108_object); // 0xae NEW_2
	var_3_bool = var_108_object; // 0xaf TMov
	var_113_object = Obj(); // 0xb1 PushV
	func_131(var_113_object); // 0xb2 NEW_2
	var_4_object = var_113_object; // 0xb3 TMov
}


func_907(var_11_object, var_40_string)
{
	var_11_object = var_40_string; // 0x38c TMov
	return 0; // 0x38d Return
}


func_652()
{
	var_25_int = 0; // 0x28c PushI
	var_26_string = "newgame"; // 0x28d PushS
	SendMessage(var_25_int, var_26_string); // 0x28e Func
	var_27_int = 0; // 0x290 PushI
	var_28_string = "loadgame"; // 0x291 PushS
	SendMessage(var_27_int, var_28_string); // 0x292 Func
	var_29_int = 0; // 0x294 PushI
	var_30_string = "gameoptions"; // 0x295 PushS
	SendMessage(var_29_int, var_30_string); // 0x296 Func
	var_31_int = 0; // 0x298 PushI
	var_32_string = "credits"; // 0x299 PushS
	SendMessage(var_31_int, var_32_string); // 0x29a Func
	var_33_int = 0; // 0x29c PushI
	var_34_string = "quitgame"; // 0x29d PushS
	SendMessage(var_33_int, var_34_string); // 0x29e Func
	return 0; // 0x2a0 Return
}


func_910(var_12_object, var_124_string)
{
	var_124_string = var_12_object; // 0x38e MovT
	return 0; // 0x38f Return
}


func_912(var_12_object, var_41_string)
{
	var_12_object = var_41_string; // 0x391 TMov
	return 0; // 0x392 Return
}


func_915()
{
	func_652(); // 0x394 NEW_2
	var_35_string = ""; // 0x396 PushV
	func_905(var_21_int, var_35_string); // 0x397 NEW_2
	var_36_string = ""; // 0x399 PushS
	var_37_bool = var_35_string == var_36_string; // 0x39a Eq
	if(var_37_bool == 0) goto Label_933; // 0x39b JumpB
	var_38_int = 1; // 0x39c PushI
	var_39_string = "quitgame"; // 0x39d PushS
	SendMessage(var_38_int, var_39_string); // 0x39e Func
	var_40_string = ""; // 0x3a0 PushV
	var_40_string = "quitgame"; // 0x3a1 MovS
	func_907(var_21_int, var_40_string); // 0x3a2 NEW_2
	goto Label_1007; // 0x3a4 Jump
	
Label_1007:
	return 0; // 0x3ef Return
	
Label_933:
	var_41_string = ""; // 0x3a5 PushV
	func_905(var_21_int, var_41_string); // 0x3a6 NEW_2
	var_42_string = "newgame"; // 0x3a8 PushS
	var_43_bool = var_41_string == var_42_string; // 0x3a9 Eq
	if(var_43_bool == 0) goto Label_948; // 0x3aa JumpB
	var_44_int = 1; // 0x3ab PushI
	var_45_string = "quitgame"; // 0x3ac PushS
	SendMessage(var_44_int, var_45_string); // 0x3ad Func
	var_46_string = ""; // 0x3af PushV
	var_46_string = "quitgame"; // 0x3b0 MovS
	func_907(var_21_int, var_46_string); // 0x3b1 NEW_2
	goto Label_1007; // 0x3b3 Jump
	
Label_948:
	var_47_string = ""; // 0x3b4 PushV
	func_905(var_21_int, var_47_string); // 0x3b5 NEW_2
	var_48_string = "loadgame"; // 0x3b7 PushS
	var_49_bool = var_47_string == var_48_string; // 0x3b8 Eq
	if(var_49_bool == 0) goto Label_963; // 0x3b9 JumpB
	var_50_int = 1; // 0x3ba PushI
	var_51_string = "newgame"; // 0x3bb PushS
	SendMessage(var_50_int, var_51_string); // 0x3bc Func
	var_52_string = ""; // 0x3be PushV
	var_52_string = "newgame"; // 0x3bf MovS
	func_907(var_21_int, var_52_string); // 0x3c0 NEW_2
	goto Label_1007; // 0x3c2 Jump
	
Label_963:
	var_53_string = ""; // 0x3c3 PushV
	func_905(var_21_int, var_53_string); // 0x3c4 NEW_2
	var_54_string = "gameoptions"; // 0x3c6 PushS
	var_55_bool = var_53_string == var_54_string; // 0x3c7 Eq
	if(var_55_bool == 0) goto Label_978; // 0x3c8 JumpB
	var_56_int = 1; // 0x3c9 PushI
	var_57_string = "loadgame"; // 0x3ca PushS
	SendMessage(var_56_int, var_57_string); // 0x3cb Func
	var_58_string = ""; // 0x3cd PushV
	var_58_string = "loadgame"; // 0x3ce MovS
	func_907(var_21_int, var_58_string); // 0x3cf NEW_2
	goto Label_1007; // 0x3d1 Jump
	
Label_978:
	var_59_string = ""; // 0x3d2 PushV
	func_905(var_21_int, var_59_string); // 0x3d3 NEW_2
	var_60_string = "credits"; // 0x3d5 PushS
	var_61_bool = var_59_string == var_60_string; // 0x3d6 Eq
	if(var_61_bool == 0) goto Label_993; // 0x3d7 JumpB
	var_62_int = 1; // 0x3d8 PushI
	var_63_string = "gameoptions"; // 0x3d9 PushS
	SendMessage(var_62_int, var_63_string); // 0x3da Func
	var_64_string = ""; // 0x3dc PushV
	var_64_string = "gameoptions"; // 0x3dd MovS
	func_907(var_21_int, var_64_string); // 0x3de NEW_2
	goto Label_1007; // 0x3e0 Jump
	
Label_993:
	var_65_string = ""; // 0x3e1 PushV
	func_905(var_21_int, var_65_string); // 0x3e2 NEW_2
	var_66_string = "quitgame"; // 0x3e4 PushS
	var_67_bool = var_65_string == var_66_string; // 0x3e5 Eq
	if(var_67_bool == 0) goto Label_1007; // 0x3e6 JumpB
	var_68_int = 1; // 0x3e7 PushI
	var_69_string = "credits"; // 0x3e8 PushS
	SendMessage(var_68_int, var_69_string); // 0x3e9 Func
	var_70_string = ""; // 0x3eb PushV
	var_70_string = "credits"; // 0x3ec MovS
	func_907(var_21_int, var_70_string); // 0x3ed NEW_2
}


func_673()
{
	var_118_int = 0; // 0x2a1 PushI
	var_119_string = "danko"; // 0x2a2 PushS
	SendMessage(var_118_int, var_119_string); // 0x2a3 Func
	var_120_int = 0; // 0x2a5 PushI
	var_121_string = "burah"; // 0x2a6 PushS
	SendMessage(var_120_int, var_121_string); // 0x2a7 Func
	var_122_int = 0; // 0x2a9 PushI
	var_123_string = "klara"; // 0x2aa PushS
	SendMessage(var_122_int, var_123_string); // 0x2ab Func
	return 0; // 0x2ad Return
}


func_812()
{
	func_652(); // 0x32d NEW_2
	var_73_string = ""; // 0x32f PushV
	func_905(var_21_int, var_73_string); // 0x330 NEW_2
	var_74_string = ""; // 0x332 PushS
	var_75_bool = var_73_string == var_74_string; // 0x333 Eq
	if(var_75_bool == 0) goto Label_830; // 0x334 JumpB
	var_76_int = 1; // 0x335 PushI
	var_77_string = "newgame"; // 0x336 PushS
	SendMessage(var_76_int, var_77_string); // 0x337 Func
	var_78_string = ""; // 0x339 PushV
	var_78_string = "newgame"; // 0x33a MovS
	func_907(var_21_int, var_78_string); // 0x33b NEW_2
	goto Label_904; // 0x33d Jump
	
Label_904:
	return 0; // 0x388 Return
	
Label_830:
	var_79_string = ""; // 0x33e PushV
	func_905(var_21_int, var_79_string); // 0x33f NEW_2
	var_80_string = "newgame"; // 0x341 PushS
	var_81_bool = var_79_string == var_80_string; // 0x342 Eq
	if(var_81_bool == 0) goto Label_845; // 0x343 JumpB
	var_82_int = 1; // 0x344 PushI
	var_83_string = "loadgame"; // 0x345 PushS
	SendMessage(var_82_int, var_83_string); // 0x346 Func
	var_84_string = ""; // 0x348 PushV
	var_84_string = "loadgame"; // 0x349 MovS
	func_907(var_21_int, var_84_string); // 0x34a NEW_2
	goto Label_904; // 0x34c Jump
	
Label_845:
	var_85_string = ""; // 0x34d PushV
	func_905(var_21_int, var_85_string); // 0x34e NEW_2
	var_86_string = "loadgame"; // 0x350 PushS
	var_87_bool = var_85_string == var_86_string; // 0x351 Eq
	if(var_87_bool == 0) goto Label_860; // 0x352 JumpB
	var_88_int = 1; // 0x353 PushI
	var_89_string = "gameoptions"; // 0x354 PushS
	SendMessage(var_88_int, var_89_string); // 0x355 Func
	var_90_string = ""; // 0x357 PushV
	var_90_string = "gameoptions"; // 0x358 MovS
	func_907(var_21_int, var_90_string); // 0x359 NEW_2
	goto Label_904; // 0x35b Jump
	
Label_860:
	var_91_string = ""; // 0x35c PushV
	func_905(var_21_int, var_91_string); // 0x35d NEW_2
	var_92_string = "gameoptions"; // 0x35f PushS
	var_93_bool = var_91_string == var_92_string; // 0x360 Eq
	if(var_93_bool == 0) goto Label_875; // 0x361 JumpB
	var_94_int = 1; // 0x362 PushI
	var_95_string = "credits"; // 0x363 PushS
	SendMessage(var_94_int, var_95_string); // 0x364 Func
	var_96_string = ""; // 0x366 PushV
	var_96_string = "credits"; // 0x367 MovS
	func_907(var_21_int, var_96_string); // 0x368 NEW_2
	goto Label_904; // 0x36a Jump
	
Label_875:
	var_97_string = ""; // 0x36b PushV
	func_905(var_21_int, var_97_string); // 0x36c NEW_2
	var_98_string = "credits"; // 0x36e PushS
	var_99_bool = var_97_string == var_98_string; // 0x36f Eq
	if(var_99_bool == 0) goto Label_890; // 0x370 JumpB
	var_100_int = 1; // 0x371 PushI
	var_101_string = "quitgame"; // 0x372 PushS
	SendMessage(var_100_int, var_101_string); // 0x373 Func
	var_102_string = ""; // 0x375 PushV
	var_102_string = "quitgame"; // 0x376 MovS
	func_907(var_21_int, var_102_string); // 0x377 NEW_2
	goto Label_904; // 0x379 Jump
	
Label_890:
	var_103_string = ""; // 0x37a PushV
	func_905(var_21_int, var_103_string); // 0x37b NEW_2
	var_104_string = "quitgame"; // 0x37d PushS
	var_105_bool = var_103_string == var_104_string; // 0x37e Eq
	if(var_105_bool == 0) goto Label_904; // 0x37f JumpB
	var_106_int = 1; // 0x380 PushI
	var_107_string = "newgame"; // 0x381 PushS
	SendMessage(var_106_int, var_107_string); // 0x382 Func
	var_108_string = ""; // 0x384 PushV
	var_108_string = "newgame"; // 0x385 MovS
	func_907(var_21_int, var_108_string); // 0x386 NEW_2
}


func_686()
{
	func_673(); // 0x2af NEW_2
	var_124_string = ""; // 0x2b1 PushV
	func_910(var_21_int, var_124_string); // 0x2b2 NEW_2
	var_125_string = ""; // 0x2b4 PushS
	var_126_bool = var_124_string == var_125_string; // 0x2b5 Eq
	if(var_126_bool == 0) goto Label_704; // 0x2b6 JumpB
	var_127_int = 1; // 0x2b7 PushI
	var_128_string = "danko"; // 0x2b8 PushS
	SendMessage(var_127_int, var_128_string); // 0x2b9 Func
	var_129_string = ""; // 0x2bb PushV
	var_129_string = "danko"; // 0x2bc MovS
	func_912(var_21_int, var_129_string); // 0x2bd NEW_2
	goto Label_748; // 0x2bf Jump
	
Label_748:
	return 0; // 0x2ec Return
	
Label_704:
	var_130_string = ""; // 0x2c0 PushV
	func_910(var_21_int, var_130_string); // 0x2c1 NEW_2
	var_131_string = "danko"; // 0x2c3 PushS
	var_132_bool = var_130_string == var_131_string; // 0x2c4 Eq
	if(var_132_bool == 0) goto Label_719; // 0x2c5 JumpB
	var_133_int = 1; // 0x2c6 PushI
	var_134_string = "burah"; // 0x2c7 PushS
	SendMessage(var_133_int, var_134_string); // 0x2c8 Func
	var_135_string = ""; // 0x2ca PushV
	var_135_string = "burah"; // 0x2cb MovS
	func_912(var_21_int, var_135_string); // 0x2cc NEW_2
	goto Label_748; // 0x2ce Jump
	
Label_719:
	var_136_string = ""; // 0x2cf PushV
	func_910(var_21_int, var_136_string); // 0x2d0 NEW_2
	var_137_string = "burah"; // 0x2d2 PushS
	var_138_bool = var_136_string == var_137_string; // 0x2d3 Eq
	if(var_138_bool == 0) goto Label_734; // 0x2d4 JumpB
	var_139_int = 1; // 0x2d5 PushI
	var_140_string = "klara"; // 0x2d6 PushS
	SendMessage(var_139_int, var_140_string); // 0x2d7 Func
	var_141_string = ""; // 0x2d9 PushV
	var_141_string = "klara"; // 0x2da MovS
	func_912(var_21_int, var_141_string); // 0x2db NEW_2
	goto Label_748; // 0x2dd Jump
	
Label_734:
	var_142_string = ""; // 0x2de PushV
	func_910(var_21_int, var_142_string); // 0x2df NEW_2
	var_143_string = "klara"; // 0x2e1 PushS
	var_144_bool = var_142_string == var_143_string; // 0x2e2 Eq
	if(var_144_bool == 0) goto Label_748; // 0x2e3 JumpB
	var_145_int = 1; // 0x2e4 PushI
	var_146_string = "danko"; // 0x2e5 PushS
	SendMessage(var_145_int, var_146_string); // 0x2e6 Func
	var_147_string = ""; // 0x2e8 PushV
	var_147_string = "danko"; // 0x2e9 MovS
	func_912(var_21_int, var_147_string); // 0x2ea NEW_2
}


func_89(var_0_object, var_22_int)
{
	var_24_string = "intro.xml"; // 0x5a PushS
	var_25_bool = 0; // 0x5b PushB
	CreateWindow(var_24_string, var_25_bool, var_0_object); // 0x5c Func
	var_26_string = "intro"; // 0x5e PushS
	SendMessage(var_22_int, var_26_string); // 0x5f Func
	ProcessEvents(); // 0x61 Func
	return 0; // 0x63 Return
}


func_1118(var_112_bool)
{
	var_113_int = 0; var_114_int = 0; // 0x45e PushV
	var_115_string = "BurahCompleted"; // 0x45f PushS
	var_116_int = 0; // 0x460 PushI
	GetRegistryData(var_114_int, var_115_string, var_116_int); // 0x461 Func
	var_117_int = 0; // 0x463 PushI
	var_112_bool = var_114_int != var_117_int; // 0x464 Neq2
	return 2; // 0x465 Return
}


func_609(var_3_bool, var_4_object)
{
	var_142_string = ""; // 0x261 PushV
	var_142_string = ""; // 0x262 MovS
	func_907(var_23_object, var_142_string); // 0x263 NEW_2
	func_625(); // 0x266 NEW_2
	var_143_object = Obj(); // 0x268 PushV
	func_123(var_143_object); // 0x269 NEW_2
	var_3_bool = var_143_object; // 0x26a TMov
	var_144_object = Obj(); // 0x26c PushV
	func_131(var_144_object); // 0x26d NEW_2
	var_4_object = var_144_object; // 0x26e TMov
	return 0; // 0x270 Return
}


func_1126(var_105_bool)
{
	var_106_int = 0; var_107_int = 0; // 0x466 PushV
	var_108_string = "DankoCompleted"; // 0x467 PushS
	var_109_int = 0; // 0x468 PushI
	GetRegistryData(var_107_int, var_108_string, var_109_int); // 0x469 Func
	var_110_int = 0; // 0x46b PushI
	var_105_bool = var_107_int != var_110_int; // 0x46c Neq2
	return 2; // 0x46d Return
}


func_749()
{
	func_673(); // 0x2ee NEW_2
	var_150_string = ""; // 0x2f0 PushV
	func_910(var_21_int, var_150_string); // 0x2f1 NEW_2
	var_151_string = ""; // 0x2f3 PushS
	var_152_bool = var_150_string == var_151_string; // 0x2f4 Eq
	if(var_152_bool == 0) goto Label_767; // 0x2f5 JumpB
	var_153_int = 1; // 0x2f6 PushI
	var_154_string = "klara"; // 0x2f7 PushS
	SendMessage(var_153_int, var_154_string); // 0x2f8 Func
	var_155_string = ""; // 0x2fa PushV
	var_155_string = "klara"; // 0x2fb MovS
	func_912(var_21_int, var_155_string); // 0x2fc NEW_2
	goto Label_811; // 0x2fe Jump
	
Label_811:
	return 0; // 0x32b Return
	
Label_767:
	var_156_string = ""; // 0x2ff PushV
	func_910(var_21_int, var_156_string); // 0x300 NEW_2
	var_157_string = "klara"; // 0x302 PushS
	var_158_bool = var_156_string == var_157_string; // 0x303 Eq
	if(var_158_bool == 0) goto Label_782; // 0x304 JumpB
	var_159_int = 1; // 0x305 PushI
	var_160_string = "burah"; // 0x306 PushS
	SendMessage(var_159_int, var_160_string); // 0x307 Func
	var_161_string = ""; // 0x309 PushV
	var_161_string = "burah"; // 0x30a MovS
	func_912(var_21_int, var_161_string); // 0x30b NEW_2
	goto Label_811; // 0x30d Jump
	
Label_782:
	var_162_string = ""; // 0x30e PushV
	func_910(var_21_int, var_162_string); // 0x30f NEW_2
	var_163_string = "burah"; // 0x311 PushS
	var_164_bool = var_162_string == var_163_string; // 0x312 Eq
	if(var_164_bool == 0) goto Label_797; // 0x313 JumpB
	var_165_int = 1; // 0x314 PushI
	var_166_string = "danko"; // 0x315 PushS
	SendMessage(var_165_int, var_166_string); // 0x316 Func
	var_167_string = ""; // 0x318 PushV
	var_167_string = "danko"; // 0x319 MovS
	func_912(var_21_int, var_167_string); // 0x31a NEW_2
	goto Label_811; // 0x31c Jump
	
Label_797:
	var_168_string = ""; // 0x31d PushV
	func_910(var_21_int, var_168_string); // 0x31e NEW_2
	var_169_string = "danko"; // 0x320 PushS
	var_170_bool = var_168_string == var_169_string; // 0x321 Eq
	if(var_170_bool == 0) goto Label_811; // 0x322 JumpB
	var_171_int = 1; // 0x323 PushI
	var_172_string = "klara"; // 0x324 PushS
	SendMessage(var_171_int, var_172_string); // 0x325 Func
	var_173_string = ""; // 0x327 PushV
	var_173_string = "klara"; // 0x328 MovS
	func_912(var_21_int, var_173_string); // 0x329 NEW_2
}


func_625()
{
	var_46_bool = var_3_bool; // 0x271 PushT
	if(var_46_bool == 0) goto Label_629; // 0x272 JumpB
	DestroyWindow(); // 0x273 TObjFunc
	
Label_629:
	var_47_object = var_4_object; // 0x275 PushT
	if(var_47_object == 0) goto Label_633; // 0x276 JumpB
	DestroyWindow(); // 0x277 TObjFunc
	
Label_633:
	var_48_int = var_5_int; // 0x279 PushT
	if(var_48_int == 0) goto Label_637; // 0x27a JumpB
	DestroyWindow(); // 0x27b TObjFunc
	
Label_637:
	var_49_int = var_6_int; // 0x27d PushT
	if(var_49_int == 0) goto Label_641; // 0x27e JumpB
	DestroyWindow(); // 0x27f TObjFunc
	
Label_641:
	var_50_int = var_7_int; // 0x281 PushT
	if(var_50_int == 0) goto Label_645; // 0x282 JumpB
	DestroyWindow(); // 0x283 TObjFunc
	
Label_645:
	var_51_object = var_8_object; // 0x285 PushT
	if(var_51_object == 0) goto Label_649; // 0x286 JumpB
	DestroyWindow(); // 0x287 TObjFunc
	
Label_649:
	CaptureKeyboard(); // 0x289 Func
	return 0; // 0x28b Return
}


func_123(var_108_object)
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x7b PushV
	var_111_string = "game_buttons.xml"; // 0x7c PushS
	var_112_bool = 0; // 0x7d PushB
	CreateWindow(var_111_string, var_112_bool, var_110_object); // 0x7e Func
	var_108_object = var_110_object; // 0x80 Mov
	return 2; // 0x81 Return
}


