task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0; var_19_bool = 0; var_20_bool = 0; var_21_bool = 0; var_22_bool = 0; // 0x1e PushV
	IsLost(var_20_bool); // 0x1f TObjFunc
	var_23_bool = var_20_bool; // 0x21 Push
	if(var_23_bool == 0) goto Label_40; // 0x22 JumpB
	Restore(var_21_bool); // 0x23 TObjFunc
	var_24_bool = var_21_bool == 0; // 0x25 Not
	if(var_24_bool == 0) goto Label_40; // 0x26 JumpB
	return 6; // 0x27 Return
	
Label_40:
	IsPlaying(var_22_bool); // 0x28 TObjFunc
	var_25_bool = var_22_bool; // 0x2a Push
	if(var_25_bool == 0) goto Label_49; // 0x2b JumpB
	var_26_int = 0; // 0x2c PushI
	var_27_int = 0; // 0x2d PushI
	StretchBlit(var_26_int, var_27_int, var_27_int, var_26_int); // 0x2e TObjFunc
	goto Label_55; // 0x30 Jump
	
Label_55:
	return 6; // 0x37 Return
	
Label_49:
	var_28_int = 0; // 0x31 PushI
	var_29_int = 0; // 0x32 PushI
	StretchBlit(var_28_int, var_29_int, var_29_int, var_28_int); // 0x33 TObjFunc
	StopEventProcessing(); // 0x35 Func
}


task_0_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_object, var_6_int, var_7_int, var_8_int, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_object)
{
	var_18_bool = var_3_bool == 0; // 0x39 Not
	if(var_18_bool == 0) goto Label_60; // 0x3a JumpB
	return 0; // 0x3b Return
	
Label_60:
	StopEventProcessing(); // 0x3c Func
	Stop(); // 0x3e TObjFunc
	return 0; // 0x40 Return
}


task_1_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_string, var_7_object, var_8_int, var_9_int, var_10_int, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_string, var_19_object)
{
	var_20_string = "intro"; // 0x4d PushS
	var_21_bool = var_18_string == var_20_string; // 0x4e Eq
	if(var_21_bool == 0) goto Label_84; // 0x4f JumpB
	DestroyWindow(); // 0x50 TObjFunc
	StopEventProcessing(); // 0x52 Func
	
Label_84:
	return 0; // 0x54 Return
}


task_2_event_100(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int)
{
	var_18_int = 27; // 0x120 PushI
	var_19_bool = var_17_int == var_18_int; // 0x121 Eq
	if(var_19_bool == 0) goto Label_294; // 0x122 JumpB
	func_553(var_16_object, var_17_int); // 0x124 NEW_2
	
Label_294:
	return 0; // 0x126 Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x127 PushV
	var_22_string = "newgame"; // 0x128 PushS
	var_23_bool = var_18_string == var_22_string; // 0x129 Eq
	if(var_23_bool == 0) goto Label_303; // 0x12a JumpB
	var_2_int = 7; // 0x12b TMovI
	StopEventProcessing(); // 0x12c Func
	goto Label_552; // 0x12e Jump
	
Label_552:
	return 2; // 0x228 Return
	
Label_303:
	var_24_string = "quitgame"; // 0x12f PushS
	var_25_bool = var_18_string == var_24_string; // 0x130 Eq
	if(var_25_bool == 0) goto Label_313; // 0x131 JumpB
	var_26_string = "Quit game"; // 0x132 PushS
	UITrace(var_26_string); // 0x133 Func
	Quit(); // 0x135 Func
	return 2; // 0x137 Return
	
Label_313:
	var_27_string = "loadgame"; // 0x139 PushS
	var_28_bool = var_18_string == var_27_string; // 0x13a Eq
	if(var_28_bool == 0) goto Label_325; // 0x13b JumpB
	func_565(); // 0x13d NEW_2
	var_35_string = "load.xml"; // 0x13f PushS
	var_36_bool = 0; // 0x140 PushB
	CreateWindow(var_35_string, var_36_bool, var_18_string); // 0x141 Func
	return 2; // 0x143 Return
	
Label_325:
	var_37_string = "savegame"; // 0x145 PushS
	var_38_bool = var_18_string == var_37_string; // 0x146 Eq
	if(var_38_bool == 0) goto Label_337; // 0x147 JumpB
	func_565(); // 0x149 NEW_2
	var_39_string = "save.xml"; // 0x14b PushS
	var_40_bool = 0; // 0x14c PushB
	CreateWindow(var_39_string, var_40_bool, var_17_int); // 0x14d Func
	return 2; // 0x14f Return
	
Label_337:
	var_41_string = "gameoptions"; // 0x151 PushS
	var_42_bool = var_18_string == var_41_string; // 0x152 Eq
	if(var_42_bool == 0) goto Label_349; // 0x153 JumpB
	func_565(); // 0x155 NEW_2
	var_43_string = "options.xml"; // 0x157 PushS
	var_44_bool = 0; // 0x158 PushB
	CreateWindow(var_43_string, var_44_bool, var_16_object); // 0x159 Func
	return 2; // 0x15b Return
	
Label_349:
	var_45_string = "continue"; // 0x15d PushS
	var_46_bool = var_18_string == var_45_string; // 0x15e Eq
	if(var_46_bool == 0) goto Label_357; // 0x15f JumpB
	var_2_int = 6; // 0x160 TMovI
	StopEventProcessing(); // 0x161 Func
	return 2; // 0x163 Return
	
Label_357:
	var_47_string = "credits"; // 0x165 PushS
	var_48_bool = var_18_string == var_47_string; // 0x166 Eq
	if(var_48_bool == 0) goto Label_381; // 0x167 JumpB
	func_565(); // 0x169 NEW_2
	var_49_int = 0; // 0x16b PushV
	var_49_int = 8; // 0x16c MovI
	TaskCall(1); // 0x16d TaskCall
	func_65(var_50_object, var_49_int); // 0x16e NEW_2
	TaskReturn(); // 0x16f TaskReturn
	var_54_object = Obj(); // 0x171 PushV
	func_90(var_54_object); // 0x172 NEW_2
	var_3_bool = var_54_object; // 0x173 TMov
	var_59_object = Obj(); // 0x175 PushV
	func_98(var_59_object); // 0x176 NEW_2
	var_4_object = var_59_object; // 0x177 TMov
	var_64_bool = 1; // 0x179 PushB
	ShowCursor(var_64_bool); // 0x17a Func
	goto Label_552; // 0x17c Jump
	
Label_381:
	var_65_string = "danko"; // 0x17d PushS
	var_66_bool = var_18_string == var_65_string; // 0x17e Eq
	if(var_66_bool == 0) goto Label_416; // 0x17f JumpB
	var_67_int = 0; // 0x180 PushI
	var_68_bool = var_17_int == var_67_int; // 0x181 Eq
	if(var_68_bool == 0) goto Label_391; // 0x182 JumpB
	var_2_int = 1; // 0x183 TMovI
	StopEventProcessing(); // 0x184 Func
	goto Label_414; // 0x186 Jump
	
Label_414:
	return 2; // 0x19e Return
	
Label_391:
	var_69_int = 1; // 0x187 PushI
	var_70_bool = var_17_int == var_69_int; // 0x188 Eq
	if(var_70_bool == 0) goto Label_403; // 0x189 JumpB
	var_71_int = 202; // 0x18a PushI
	var_72_string = "player_name"; // 0x18b PushS
	SendMessage(var_71_int, var_72_string); // 0x18c Func
	var_73_int = 203; // 0x18e PushI
	var_74_string = "player_desc"; // 0x18f PushS
	SendMessage(var_73_int, var_74_string); // 0x190 Func
	goto Label_414; // 0x192 Jump
	
Label_403:
	var_75_int = 2; // 0x193 PushI
	var_76_bool = var_17_int == var_75_int; // 0x194 Eq
	if(var_76_bool == 0) goto Label_414; // 0x195 JumpB
	var_77_int = -1; // 0x196 PushI
	var_78_string = "player_name"; // 0x197 PushS
	SendMessage(var_77_int, var_78_string); // 0x198 Func
	var_79_int = -1; // 0x19a PushI
	var_80_string = "player_desc"; // 0x19b PushS
	SendMessage(var_79_int, var_80_string); // 0x19c Func
	
Label_416:
	var_81_string = "burah"; // 0x1a0 PushS
	var_82_bool = var_18_string == var_81_string; // 0x1a1 Eq
	if(var_82_bool == 0) goto Label_451; // 0x1a2 JumpB
	var_83_int = 0; // 0x1a3 PushI
	var_84_bool = var_17_int == var_83_int; // 0x1a4 Eq
	if(var_84_bool == 0) goto Label_426; // 0x1a5 JumpB
	var_2_int = 2; // 0x1a6 TMovI
	StopEventProcessing(); // 0x1a7 Func
	goto Label_449; // 0x1a9 Jump
	
Label_449:
	return 2; // 0x1c1 Return
	
Label_426:
	var_85_int = 1; // 0x1aa PushI
	var_86_bool = var_17_int == var_85_int; // 0x1ab Eq
	if(var_86_bool == 0) goto Label_438; // 0x1ac JumpB
	var_87_int = 205; // 0x1ad PushI
	var_88_string = "player_name"; // 0x1ae PushS
	SendMessage(var_87_int, var_88_string); // 0x1af Func
	var_89_int = 206; // 0x1b1 PushI
	var_90_string = "player_desc"; // 0x1b2 PushS
	SendMessage(var_89_int, var_90_string); // 0x1b3 Func
	goto Label_449; // 0x1b5 Jump
	
Label_438:
	var_91_int = 2; // 0x1b6 PushI
	var_92_bool = var_17_int == var_91_int; // 0x1b7 Eq
	if(var_92_bool == 0) goto Label_449; // 0x1b8 JumpB
	var_93_int = -1; // 0x1b9 PushI
	var_94_string = "player_name"; // 0x1ba PushS
	SendMessage(var_93_int, var_94_string); // 0x1bb Func
	var_95_int = -1; // 0x1bd PushI
	var_96_string = "player_desc"; // 0x1be PushS
	SendMessage(var_95_int, var_96_string); // 0x1bf Func
	
Label_451:
	var_97_string = "klara"; // 0x1c3 PushS
	var_98_bool = var_18_string == var_97_string; // 0x1c4 Eq
	if(var_98_bool == 0) goto Label_512; // 0x1c5 JumpB
	var_21_bool = 1; // 0x1c6 MovB
	var_99_bool = 0; // 0x1c7 PushV
	var_99_bool = 0; // 0x1c8 MovB
	var_100_bool = 0; // 0x1c9 PushV
	func_600(var_100_bool); // 0x1ca NEW_2
	var_106_bool = var_100_bool == 0; // 0x1cc Not
	if(var_106_bool == 0) goto Label_468; // 0x1cd JumpB
	var_107_bool = 0; // 0x1ce PushV
	func_592(var_107_bool); // 0x1cf NEW_2
	var_113_bool = var_107_bool == 0; // 0x1d1 Not
	if(var_113_bool == 0) goto Label_468; // 0x1d2 JumpB
	var_99_bool = 1; // 0x1d3 MovB
	
Label_468:
	if(var_99_bool == 0) goto Label_470; // 0x1d4 JumpB
	var_21_bool = 0; // 0x1d5 MovB
	
Label_470:
	var_114_int = 0; // 0x1d6 PushI
	var_115_bool = var_17_int == var_114_int; // 0x1d7 Eq
	if(var_115_bool == 0) goto Label_480; // 0x1d8 JumpB
	var_116_bool = var_21_bool == 0; // 0x1d9 Not
	if(var_116_bool == 0) goto Label_476; // 0x1da JumpB
	return 2; // 0x1db Return
	
Label_476:
	var_2_int = 3; // 0x1dc TMovI
	StopEventProcessing(); // 0x1dd Func
	goto Label_510; // 0x1df Jump
	
Label_510:
	return 2; // 0x1fe Return
	
Label_480:
	var_117_int = 1; // 0x1e0 PushI
	var_118_bool = var_17_int == var_117_int; // 0x1e1 Eq
	if(var_118_bool == 0) goto Label_499; // 0x1e2 JumpB
	var_119_int = 208; // 0x1e3 PushI
	var_120_string = "player_name"; // 0x1e4 PushS
	SendMessage(var_119_int, var_120_string); // 0x1e5 Func
	var_121_bool = var_21_bool; // 0x1e7 Push
	if(var_121_bool == 0) goto Label_494; // 0x1e8 JumpB
	var_122_int = 209; // 0x1e9 PushI
	var_123_string = "player_desc"; // 0x1ea PushS
	SendMessage(var_122_int, var_123_string); // 0x1eb Func
	goto Label_498; // 0x1ed Jump
	
Label_498:
	goto Label_510; // 0x1f2 Jump
	
Label_494:
	var_124_int = 213; // 0x1ee PushI
	var_125_string = "player_desc"; // 0x1ef PushS
	SendMessage(var_124_int, var_125_string); // 0x1f0 Func
	
Label_499:
	var_126_int = 2; // 0x1f3 PushI
	var_127_bool = var_17_int == var_126_int; // 0x1f4 Eq
	if(var_127_bool == 0) goto Label_510; // 0x1f5 JumpB
	var_128_int = -1; // 0x1f6 PushI
	var_129_string = "player_name"; // 0x1f7 PushS
	SendMessage(var_128_int, var_129_string); // 0x1f8 Func
	var_130_int = -1; // 0x1fa PushI
	var_131_string = "player_desc"; // 0x1fb PushS
	SendMessage(var_130_int, var_131_string); // 0x1fc Func
	
Label_512:
	var_132_string = "load"; // 0x200 PushS
	var_133_bool = var_18_string == var_132_string; // 0x201 Eq
	if(var_133_bool == 0) goto Label_529; // 0x202 JumpB
	var_134_int = 0; // 0x203 PushI
	var_135_bool = var_17_int == var_134_int; // 0x204 Eq
	if(var_135_bool == 0) goto Label_524; // 0x205 JumpB
	var_2_int = 4; // 0x206 TMovI
	GetFileName(var_12_object); // 0x207 ObjFunc
	StopEventProcessing(); // 0x209 Func
	goto Label_527; // 0x20b Jump
	
Label_527:
	return 2; // 0x20f Return
	
Label_524:
	func_553(var_20_bool, var_21_bool); // 0x20d NEW_2
	
Label_529:
	var_138_string = "save"; // 0x211 PushS
	var_139_bool = var_18_string == var_138_string; // 0x212 Eq
	if(var_139_bool == 0) goto Label_545; // 0x213 JumpB
	var_140_int = 0; // 0x214 PushI
	var_141_bool = var_17_int == var_140_int; // 0x215 Eq
	if(var_141_bool == 0) goto Label_540; // 0x216 JumpB
	var_2_int = 5; // 0x217 TMovI
	var_9_object = var_19_object; // 0x218 TMov
	StopEventProcessing(); // 0x219 Func
	goto Label_543; // 0x21b Jump
	
Label_543:
	return 2; // 0x21f Return
	
Label_540:
	func_553(var_20_bool, var_21_bool); // 0x21d NEW_2
	
Label_545:
	var_142_string = "options"; // 0x221 PushS
	var_143_bool = var_18_string == var_142_string; // 0x222 Eq
	if(var_143_bool == 0) goto Label_552; // 0x223 JumpB
	func_553(var_20_bool, var_21_bool); // 0x225 NEW_2
	return 2; // 0x227 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object)
{
	var_17_bool = 0; // 0x55 PushV
	var_17_bool = 1; // 0x56 MovB
	func_106(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_bool); // 0x57 NEW_2
	return 0; // 0x59 Return
}


func_0(var_0_object, var_3_bool, var_48_string, var_49_bool)
{
	var_3_bool = var_49_bool; // 0x1 TMov
	var_54_bool = 1; // 0x2 PushB
	SetOwnerDraw(var_54_bool); // 0x3 Func
	var_55_bool = 0; // 0x5 PushB
	ShowCursor(var_55_bool); // 0x6 Func
	CaptureKeyboard(); // 0x8 Func
	GetWindowSize(var_49_bool, var_48_string); // 0xa Func
	LoadVideo(var_48_string); // 0xc Func
	FindVideo(var_0_object, var_48_string); // 0xe Func
	var_56_bool = 0; // 0x10 PushB
	Play(var_56_bool); // 0x11 TObjFunc
	ProcessEvents(); // 0x13 Func
	var_57_bool = 0; // 0x15 PushB
	SetOwnerDraw(var_57_bool); // 0x16 Func
	var_58_bool = 1; // 0x18 PushB
	ShowCursor(var_58_bool); // 0x19 Func
	ReleaseVideo(var_48_string); // 0x1b Func
	return 0; // 0x1d Return
}


func_65(var_0_object, var_43_int)
{
	var_45_string = "intro.xml"; // 0x42 PushS
	var_46_bool = 0; // 0x43 PushB
	CreateWindow(var_45_string, var_46_bool, var_0_object); // 0x44 Func
	var_47_string = "intro"; // 0x46 PushS
	SendMessage(var_43_int, var_47_string); // 0x47 Func
	ProcessEvents(); // 0x49 Func
	return 0; // 0x4b Return
}


func_98(var_104_object)
{
	var_105_object = Obj(); var_106_object = Obj(); // 0x62 PushV
	var_107_string = "game_logo.xml"; // 0x63 PushS
	var_108_bool = 0; // 0x64 PushB
	CreateWindow(var_107_string, var_108_bool, var_106_object); // 0x65 Func
	var_104_object = var_106_object; // 0x67 Mov
	return 2; // 0x68 Return
}


func_553(var_3_bool, var_4_object)
{
	func_565(); // 0x22a NEW_2
	var_136_object = Obj(); // 0x22c PushV
	func_90(var_136_object); // 0x22d NEW_2
	var_3_bool = var_136_object; // 0x22e TMov
	var_137_object = Obj(); // 0x230 PushV
	func_98(var_137_object); // 0x231 NEW_2
	var_4_object = var_137_object; // 0x232 TMov
	return 0; // 0x234 Return
}


func_106(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; var_20_bool = 0; var_21_string = ""; var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_string = ""; // 0x6a PushV
	CaptureKeyboard(); // 0x6b Func
	var_2_int = 0; // 0x6d TMovI
	GetWindowSize(var_0_object, var_25_string); // 0x6e Func
	var_26_string = "default"; // 0x70 PushS
	SetCursor(var_26_string); // 0x71 Func
	var_27_string = "default"; // 0x73 PushS
	SetBackground(var_27_string); // 0x74 Func
	var_28_string = "menumusic"; // 0x76 PushS
	PlaySound(var_28_string); // 0x77 Func
	var_29_bool = 1; // 0x79 PushB
	ShowCursor(var_29_bool); // 0x7a Func
	var_30_bool = var_17_bool; // 0x7c Push
	if(var_30_bool == 0) goto Label_131; // 0x7d JumpB
	var_31_string = "game_choose_pers.xml"; // 0x7e PushS
	var_32_bool = 0; // 0x7f PushB
	CreateWindow(var_31_string, var_32_bool, var_23_bool); // 0x80 Func
	goto Label_139; // 0x82 Jump
	
Label_139:
	var_33_bool = var_2_int == 0; // 0x8b Not
	if(var_33_bool == 0) goto Label_144; // 0x8c JumpB
	ProcessEvents(); // 0x8d Func
	goto Label_139; // 0x8f Jump
	
Label_144:
	func_565(); // 0x91 NEW_2
	var_40_int = 1; // 0x93 PushI
	var_41_bool = var_2_int == var_40_int; // 0x94 Eq
	if(var_41_bool == 0) goto Label_177; // 0x95 JumpB
	var_42_string = "menumusic"; // 0x96 PushS
	PauseSound(var_42_string); // 0x97 Func
	var_43_int = 0; // 0x99 PushV
	var_43_int = 1; // 0x9a MovI
	TaskCall(1); // 0x9b TaskCall
	func_65(var_44_object, var_43_int); // 0x9c NEW_2
	TaskReturn(); // 0x9d TaskReturn
	var_48_string = ""; var_49_bool = 0; // 0x9f PushV
	var_48_string = "intro_danko.wmv"; // 0xa0 MovS
	var_49_bool = 1; // 0xa1 MovB
	TaskCall(0); // 0xa2 TaskCall
	func_0(var_52_int, var_53_bool, var_48_string, var_49_bool); // 0xa3 NEW_2
	TaskReturn(); // 0xa4 TaskReturn
	RemoveWorld(); // 0xa6 Func
	UISync(); // 0xa8 Func
	DestroyWindow(); // 0xaa Func
	var_59_string = "world_danko.xml"; // 0xac PushS
	var_60_string = "player_danko.xml"; // 0xad PushS
	NewGame(var_59_string, var_60_string); // 0xae Func
	goto Label_286; // 0xb0 Jump
	
Label_286:
	return 8; // 0x11e Return
	
Label_177:
	var_61_int = 2; // 0xb1 PushI
	var_62_bool = var_2_int == var_61_int; // 0xb2 Eq
	if(var_62_bool == 0) goto Label_207; // 0xb3 JumpB
	var_63_string = "menumusic"; // 0xb4 PushS
	PauseSound(var_63_string); // 0xb5 Func
	var_64_int = 0; // 0xb7 PushV
	var_64_int = 2; // 0xb8 MovI
	TaskCall(1); // 0xb9 TaskCall
	func_65(var_65_object, var_64_int); // 0xba NEW_2
	TaskReturn(); // 0xbb TaskReturn
	var_66_string = ""; var_67_bool = 0; // 0xbd PushV
	var_66_string = "intro_burah.wmv"; // 0xbe MovS
	var_67_bool = 1; // 0xbf MovB
	TaskCall(0); // 0xc0 TaskCall
	func_0(var_70_int, var_71_bool, var_66_string, var_67_bool); // 0xc1 NEW_2
	TaskReturn(); // 0xc2 TaskReturn
	RemoveWorld(); // 0xc4 Func
	UISync(); // 0xc6 Func
	DestroyWindow(); // 0xc8 Func
	var_72_string = "world_burah.xml"; // 0xca PushS
	var_73_string = "player_burah.xml"; // 0xcb PushS
	NewGame(var_72_string, var_73_string); // 0xcc Func
	goto Label_286; // 0xce Jump
	
Label_207:
	var_74_int = 3; // 0xcf PushI
	var_75_bool = var_2_int == var_74_int; // 0xd0 Eq
	if(var_75_bool == 0) goto Label_237; // 0xd1 JumpB
	var_76_string = "menumusic"; // 0xd2 PushS
	PauseSound(var_76_string); // 0xd3 Func
	var_77_int = 0; // 0xd5 PushV
	var_77_int = 3; // 0xd6 MovI
	TaskCall(1); // 0xd7 TaskCall
	func_65(var_78_object, var_77_int); // 0xd8 NEW_2
	TaskReturn(); // 0xd9 TaskReturn
	var_79_string = ""; var_80_bool = 0; // 0xdb PushV
	var_79_string = "intro_klara.wmv"; // 0xdc MovS
	var_80_bool = 1; // 0xdd MovB
	TaskCall(0); // 0xde TaskCall
	func_0(var_83_int, var_84_bool, var_79_string, var_80_bool); // 0xdf NEW_2
	TaskReturn(); // 0xe0 TaskReturn
	RemoveWorld(); // 0xe2 Func
	UISync(); // 0xe4 Func
	DestroyWindow(); // 0xe6 Func
	var_85_string = "world_klara.xml"; // 0xe8 PushS
	var_86_string = "player_klara.xml"; // 0xe9 PushS
	NewGame(var_85_string, var_86_string); // 0xea Func
	goto Label_286; // 0xec Jump
	
Label_237:
	var_87_int = 4; // 0xed PushI
	var_88_bool = var_2_int == var_87_int; // 0xee Eq
	if(var_88_bool == 0) goto Label_256; // 0xef JumpB
	var_89_string = "menumusic"; // 0xf0 PushS
	PauseSound(var_89_string); // 0xf1 Func
	var_90_string = "Loading : "; // 0xf3 PushS
	var_91_int = var_90_string + var_10_object; // 0xf4 Add
	Trace(var_91_int); // 0xf5 Func
	RemoveWorld(); // 0xf7 Func
	UISync(); // 0xf9 Func
	DestroyWindow(); // 0xfb Func
	LoadGame(var_22_bool, var_16_object); // 0xfd Func
	goto Label_286; // 0xff Jump
	
Label_256:
	var_92_int = 5; // 0x100 PushI
	var_93_bool = var_2_int == var_92_int; // 0x101 Eq
	if(var_93_bool == 0) goto Label_273; // 0x102 JumpB
	var_94_bool = var_9_object == 0; // 0x103 Not
	if(var_94_bool == 0) goto Label_266; // 0x104 JumpB
	DestroyWindow(); // 0x105 Func
	SaveGame(var_23_bool); // 0x107 Func
	goto Label_272; // 0x109 Jump
	
Label_272:
	goto Label_286; // 0x110 Jump
	
Label_266:
	DestroyWindow(); // 0x10a Func
	GetFileName(var_25_string); // 0x10c TObjFunc
	SaveGame(var_24_bool, var_25_string); // 0x10e Func
	
Label_273:
	var_95_int = 7; // 0x111 PushI
	var_96_bool = var_2_int == var_95_int; // 0x112 Eq
	if(var_96_bool == 0) goto Label_286; // 0x113 JumpB
	RemoveWorld(); // 0x114 Func
	UISync(); // 0x116 Func
	DestroyWindow(); // 0x118 Func
	var_97_string = "world_intro.xml"; // 0x11a PushS
	var_98_string = "player_intro.xml"; // 0x11b PushS
	NewGame(var_97_string, var_98_string); // 0x11c Func
	
Label_131:
	var_99_object = Obj(); // 0x83 PushV
	func_90(var_99_object); // 0x84 NEW_2
	var_3_bool = var_99_object; // 0x85 TMov
	var_104_object = Obj(); // 0x87 PushV
	func_98(var_104_object); // 0x88 NEW_2
	var_4_object = var_104_object; // 0x89 TMov
}


func_592(var_107_bool)
{
	var_108_int = 0; var_109_int = 0; // 0x250 PushV
	var_110_string = "BurahCompleted"; // 0x251 PushS
	var_111_int = 0; // 0x252 PushI
	GetRegistryData(var_109_int, var_110_string, var_111_int); // 0x253 Func
	var_112_int = 0; // 0x255 PushI
	var_107_bool = var_109_int != var_112_int; // 0x256 Neq2
	return 2; // 0x257 Return
}


func_565()
{
	var_34_bool = var_3_bool; // 0x235 PushT
	if(var_34_bool == 0) goto Label_569; // 0x236 JumpB
	DestroyWindow(); // 0x237 TObjFunc
	
Label_569:
	var_35_object = var_4_object; // 0x239 PushT
	if(var_35_object == 0) goto Label_573; // 0x23a JumpB
	DestroyWindow(); // 0x23b TObjFunc
	
Label_573:
	var_36_int = var_5_int; // 0x23d PushT
	if(var_36_int == 0) goto Label_577; // 0x23e JumpB
	DestroyWindow(); // 0x23f TObjFunc
	
Label_577:
	var_37_int = var_6_int; // 0x241 PushT
	if(var_37_int == 0) goto Label_581; // 0x242 JumpB
	DestroyWindow(); // 0x243 TObjFunc
	
Label_581:
	var_38_int = var_7_int; // 0x245 PushT
	if(var_38_int == 0) goto Label_585; // 0x246 JumpB
	DestroyWindow(); // 0x247 TObjFunc
	
Label_585:
	var_39_object = var_8_object; // 0x249 PushT
	if(var_39_object == 0) goto Label_589; // 0x24a JumpB
	DestroyWindow(); // 0x24b TObjFunc
	
Label_589:
	CaptureKeyboard(); // 0x24d Func
	return 0; // 0x24f Return
}


func_600(var_100_bool)
{
	var_101_int = 0; var_102_int = 0; // 0x258 PushV
	var_103_string = "DankoCompleted"; // 0x259 PushS
	var_104_int = 0; // 0x25a PushI
	GetRegistryData(var_102_int, var_103_string, var_104_int); // 0x25b Func
	var_105_int = 0; // 0x25d PushI
	var_100_bool = var_102_int != var_105_int; // 0x25e Neq2
	return 2; // 0x25f Return
}


func_90(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x5a PushV
	var_102_string = "game_buttons.xml"; // 0x5b PushS
	var_103_bool = 0; // 0x5c PushB
	CreateWindow(var_102_string, var_103_bool, var_101_object); // 0x5d Func
	var_99_object = var_101_object; // 0x5f Mov
	return 2; // 0x60 Return
}


