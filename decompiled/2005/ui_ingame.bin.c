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
	Trace(var_17_int); // 0x65 Func
	var_18_int = 27; // 0x67 PushI
	var_19_bool = var_17_int == var_18_int; // 0x68 Eq
	if(var_19_bool == 0) goto Label_108; // 0x69 JumpB
	DestroyWindow(); // 0x6a Func
	
Label_108:
	return 0; // 0x6c Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x12a PushV
	var_22_string = "newgame"; // 0x12b PushS
	var_23_bool = var_18_string == var_22_string; // 0x12c Eq
	if(var_23_bool == 0) goto Label_306; // 0x12d JumpB
	var_2_int = 7; // 0x12e TMovI
	StopEventProcessing(); // 0x12f Func
	goto Label_555; // 0x131 Jump
	
Label_555:
	return 2; // 0x22b Return
	
Label_306:
	var_24_string = "quitgame"; // 0x132 PushS
	var_25_bool = var_18_string == var_24_string; // 0x133 Eq
	if(var_25_bool == 0) goto Label_316; // 0x134 JumpB
	var_26_string = "Quit game"; // 0x135 PushS
	UITrace(var_26_string); // 0x136 Func
	Quit(); // 0x138 Func
	return 2; // 0x13a Return
	
Label_316:
	var_27_string = "loadgame"; // 0x13c PushS
	var_28_bool = var_18_string == var_27_string; // 0x13d Eq
	if(var_28_bool == 0) goto Label_328; // 0x13e JumpB
	func_568(); // 0x140 NEW_2
	var_35_string = "load.xml"; // 0x142 PushS
	var_36_bool = 0; // 0x143 PushB
	CreateWindow(var_35_string, var_36_bool, var_18_string); // 0x144 Func
	return 2; // 0x146 Return
	
Label_328:
	var_37_string = "savegame"; // 0x148 PushS
	var_38_bool = var_18_string == var_37_string; // 0x149 Eq
	if(var_38_bool == 0) goto Label_340; // 0x14a JumpB
	func_568(); // 0x14c NEW_2
	var_39_string = "save.xml"; // 0x14e PushS
	var_40_bool = 0; // 0x14f PushB
	CreateWindow(var_39_string, var_40_bool, var_17_int); // 0x150 Func
	return 2; // 0x152 Return
	
Label_340:
	var_41_string = "gameoptions"; // 0x154 PushS
	var_42_bool = var_18_string == var_41_string; // 0x155 Eq
	if(var_42_bool == 0) goto Label_352; // 0x156 JumpB
	func_568(); // 0x158 NEW_2
	var_43_string = "options.xml"; // 0x15a PushS
	var_44_bool = 0; // 0x15b PushB
	CreateWindow(var_43_string, var_44_bool, var_16_object); // 0x15c Func
	return 2; // 0x15e Return
	
Label_352:
	var_45_string = "continue"; // 0x160 PushS
	var_46_bool = var_18_string == var_45_string; // 0x161 Eq
	if(var_46_bool == 0) goto Label_360; // 0x162 JumpB
	var_2_int = 6; // 0x163 TMovI
	StopEventProcessing(); // 0x164 Func
	return 2; // 0x166 Return
	
Label_360:
	var_47_string = "credits"; // 0x168 PushS
	var_48_bool = var_18_string == var_47_string; // 0x169 Eq
	if(var_48_bool == 0) goto Label_384; // 0x16a JumpB
	func_568(); // 0x16c NEW_2
	var_49_int = 0; // 0x16e PushV
	var_49_int = 8; // 0x16f MovI
	TaskCall(1); // 0x170 TaskCall
	func_65(var_50_object, var_49_int); // 0x171 NEW_2
	TaskReturn(); // 0x172 TaskReturn
	var_54_object = Obj(); // 0x174 PushV
	func_92(var_54_object); // 0x175 NEW_2
	var_3_bool = var_54_object; // 0x176 TMov
	var_59_object = Obj(); // 0x178 PushV
	func_109(var_59_object); // 0x179 NEW_2
	var_4_object = var_59_object; // 0x17a TMov
	var_64_bool = 1; // 0x17c PushB
	ShowCursor(var_64_bool); // 0x17d Func
	goto Label_555; // 0x17f Jump
	
Label_384:
	var_65_string = "danko"; // 0x180 PushS
	var_66_bool = var_18_string == var_65_string; // 0x181 Eq
	if(var_66_bool == 0) goto Label_419; // 0x182 JumpB
	var_67_int = 0; // 0x183 PushI
	var_68_bool = var_17_int == var_67_int; // 0x184 Eq
	if(var_68_bool == 0) goto Label_394; // 0x185 JumpB
	var_2_int = 1; // 0x186 TMovI
	StopEventProcessing(); // 0x187 Func
	goto Label_417; // 0x189 Jump
	
Label_417:
	return 2; // 0x1a1 Return
	
Label_394:
	var_69_int = 1; // 0x18a PushI
	var_70_bool = var_17_int == var_69_int; // 0x18b Eq
	if(var_70_bool == 0) goto Label_406; // 0x18c JumpB
	var_71_int = 202; // 0x18d PushI
	var_72_string = "player_name"; // 0x18e PushS
	SendMessage(var_71_int, var_72_string); // 0x18f Func
	var_73_int = 203; // 0x191 PushI
	var_74_string = "player_desc"; // 0x192 PushS
	SendMessage(var_73_int, var_74_string); // 0x193 Func
	goto Label_417; // 0x195 Jump
	
Label_406:
	var_75_int = 2; // 0x196 PushI
	var_76_bool = var_17_int == var_75_int; // 0x197 Eq
	if(var_76_bool == 0) goto Label_417; // 0x198 JumpB
	var_77_int = -1; // 0x199 PushI
	var_78_string = "player_name"; // 0x19a PushS
	SendMessage(var_77_int, var_78_string); // 0x19b Func
	var_79_int = -1; // 0x19d PushI
	var_80_string = "player_desc"; // 0x19e PushS
	SendMessage(var_79_int, var_80_string); // 0x19f Func
	
Label_419:
	var_81_string = "burah"; // 0x1a3 PushS
	var_82_bool = var_18_string == var_81_string; // 0x1a4 Eq
	if(var_82_bool == 0) goto Label_454; // 0x1a5 JumpB
	var_83_int = 0; // 0x1a6 PushI
	var_84_bool = var_17_int == var_83_int; // 0x1a7 Eq
	if(var_84_bool == 0) goto Label_429; // 0x1a8 JumpB
	var_2_int = 2; // 0x1a9 TMovI
	StopEventProcessing(); // 0x1aa Func
	goto Label_452; // 0x1ac Jump
	
Label_452:
	return 2; // 0x1c4 Return
	
Label_429:
	var_85_int = 1; // 0x1ad PushI
	var_86_bool = var_17_int == var_85_int; // 0x1ae Eq
	if(var_86_bool == 0) goto Label_441; // 0x1af JumpB
	var_87_int = 205; // 0x1b0 PushI
	var_88_string = "player_name"; // 0x1b1 PushS
	SendMessage(var_87_int, var_88_string); // 0x1b2 Func
	var_89_int = 206; // 0x1b4 PushI
	var_90_string = "player_desc"; // 0x1b5 PushS
	SendMessage(var_89_int, var_90_string); // 0x1b6 Func
	goto Label_452; // 0x1b8 Jump
	
Label_441:
	var_91_int = 2; // 0x1b9 PushI
	var_92_bool = var_17_int == var_91_int; // 0x1ba Eq
	if(var_92_bool == 0) goto Label_452; // 0x1bb JumpB
	var_93_int = -1; // 0x1bc PushI
	var_94_string = "player_name"; // 0x1bd PushS
	SendMessage(var_93_int, var_94_string); // 0x1be Func
	var_95_int = -1; // 0x1c0 PushI
	var_96_string = "player_desc"; // 0x1c1 PushS
	SendMessage(var_95_int, var_96_string); // 0x1c2 Func
	
Label_454:
	var_97_string = "klara"; // 0x1c6 PushS
	var_98_bool = var_18_string == var_97_string; // 0x1c7 Eq
	if(var_98_bool == 0) goto Label_515; // 0x1c8 JumpB
	var_21_bool = 1; // 0x1c9 MovB
	var_99_bool = 0; // 0x1ca PushV
	var_99_bool = 0; // 0x1cb MovB
	var_100_bool = 0; // 0x1cc PushV
	func_603(var_100_bool); // 0x1cd NEW_2
	var_106_bool = var_100_bool == 0; // 0x1cf Not
	if(var_106_bool == 0) goto Label_471; // 0x1d0 JumpB
	var_107_bool = 0; // 0x1d1 PushV
	func_595(var_107_bool); // 0x1d2 NEW_2
	var_113_bool = var_107_bool == 0; // 0x1d4 Not
	if(var_113_bool == 0) goto Label_471; // 0x1d5 JumpB
	var_99_bool = 1; // 0x1d6 MovB
	
Label_471:
	if(var_99_bool == 0) goto Label_473; // 0x1d7 JumpB
	var_21_bool = 0; // 0x1d8 MovB
	
Label_473:
	var_114_int = 0; // 0x1d9 PushI
	var_115_bool = var_17_int == var_114_int; // 0x1da Eq
	if(var_115_bool == 0) goto Label_483; // 0x1db JumpB
	var_116_bool = var_21_bool == 0; // 0x1dc Not
	if(var_116_bool == 0) goto Label_479; // 0x1dd JumpB
	return 2; // 0x1de Return
	
Label_479:
	var_2_int = 3; // 0x1df TMovI
	StopEventProcessing(); // 0x1e0 Func
	goto Label_513; // 0x1e2 Jump
	
Label_513:
	return 2; // 0x201 Return
	
Label_483:
	var_117_int = 1; // 0x1e3 PushI
	var_118_bool = var_17_int == var_117_int; // 0x1e4 Eq
	if(var_118_bool == 0) goto Label_502; // 0x1e5 JumpB
	var_119_int = 208; // 0x1e6 PushI
	var_120_string = "player_name"; // 0x1e7 PushS
	SendMessage(var_119_int, var_120_string); // 0x1e8 Func
	var_121_bool = var_21_bool; // 0x1ea Push
	if(var_121_bool == 0) goto Label_497; // 0x1eb JumpB
	var_122_int = 209; // 0x1ec PushI
	var_123_string = "player_desc"; // 0x1ed PushS
	SendMessage(var_122_int, var_123_string); // 0x1ee Func
	goto Label_501; // 0x1f0 Jump
	
Label_501:
	goto Label_513; // 0x1f5 Jump
	
Label_497:
	var_124_int = 213; // 0x1f1 PushI
	var_125_string = "player_desc"; // 0x1f2 PushS
	SendMessage(var_124_int, var_125_string); // 0x1f3 Func
	
Label_502:
	var_126_int = 2; // 0x1f6 PushI
	var_127_bool = var_17_int == var_126_int; // 0x1f7 Eq
	if(var_127_bool == 0) goto Label_513; // 0x1f8 JumpB
	var_128_int = -1; // 0x1f9 PushI
	var_129_string = "player_name"; // 0x1fa PushS
	SendMessage(var_128_int, var_129_string); // 0x1fb Func
	var_130_int = -1; // 0x1fd PushI
	var_131_string = "player_desc"; // 0x1fe PushS
	SendMessage(var_130_int, var_131_string); // 0x1ff Func
	
Label_515:
	var_132_string = "load"; // 0x203 PushS
	var_133_bool = var_18_string == var_132_string; // 0x204 Eq
	if(var_133_bool == 0) goto Label_532; // 0x205 JumpB
	var_134_int = 0; // 0x206 PushI
	var_135_bool = var_17_int == var_134_int; // 0x207 Eq
	if(var_135_bool == 0) goto Label_527; // 0x208 JumpB
	var_2_int = 4; // 0x209 TMovI
	GetFileName(var_12_object); // 0x20a ObjFunc
	StopEventProcessing(); // 0x20c Func
	goto Label_530; // 0x20e Jump
	
Label_530:
	return 2; // 0x212 Return
	
Label_527:
	func_556(var_20_bool, var_21_bool); // 0x210 NEW_2
	
Label_532:
	var_138_string = "save"; // 0x214 PushS
	var_139_bool = var_18_string == var_138_string; // 0x215 Eq
	if(var_139_bool == 0) goto Label_548; // 0x216 JumpB
	var_140_int = 0; // 0x217 PushI
	var_141_bool = var_17_int == var_140_int; // 0x218 Eq
	if(var_141_bool == 0) goto Label_543; // 0x219 JumpB
	var_2_int = 5; // 0x21a TMovI
	var_9_object = var_19_object; // 0x21b TMov
	StopEventProcessing(); // 0x21c Func
	goto Label_546; // 0x21e Jump
	
Label_546:
	return 2; // 0x222 Return
	
Label_543:
	func_556(var_20_bool, var_21_bool); // 0x220 NEW_2
	
Label_548:
	var_142_string = "options"; // 0x224 PushS
	var_143_bool = var_18_string == var_142_string; // 0x225 Eq
	if(var_143_bool == 0) goto Label_555; // 0x226 JumpB
	func_556(var_20_bool, var_21_bool); // 0x228 NEW_2
	return 2; // 0x22a Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object)
{
	var_17_bool = 0; // 0x55 PushV
	var_17_bool = 0; // 0x56 MovB
	func_117(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_bool); // 0x57 NEW_2
	DestroyWindow(); // 0x59 Func
	return 0; // 0x5b Return
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


func_556(var_3_bool, var_4_object)
{
	func_568(); // 0x22d NEW_2
	var_136_object = Obj(); // 0x22f PushV
	func_92(var_136_object); // 0x230 NEW_2
	var_3_bool = var_136_object; // 0x231 TMov
	var_137_object = Obj(); // 0x233 PushV
	func_109(var_137_object); // 0x234 NEW_2
	var_4_object = var_137_object; // 0x235 TMov
	return 0; // 0x237 Return
}


func_109(var_104_object)
{
	var_105_object = Obj(); var_106_object = Obj(); // 0x6d PushV
	var_107_string = "game_logo.xml"; // 0x6e PushS
	var_108_bool = 0; // 0x6f PushB
	CreateWindow(var_107_string, var_108_bool, var_106_object); // 0x70 Func
	var_104_object = var_106_object; // 0x72 Mov
	return 2; // 0x73 Return
}


func_595(var_107_bool)
{
	var_108_int = 0; var_109_int = 0; // 0x253 PushV
	var_110_string = "BurahCompleted"; // 0x254 PushS
	var_111_int = 0; // 0x255 PushI
	GetRegistryData(var_109_int, var_110_string, var_111_int); // 0x256 Func
	var_112_int = 0; // 0x258 PushI
	var_107_bool = var_109_int != var_112_int; // 0x259 Neq2
	return 2; // 0x25a Return
}


func_117(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; var_20_bool = 0; var_21_string = ""; var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_string = ""; // 0x75 PushV
	CaptureKeyboard(); // 0x76 Func
	var_2_int = 0; // 0x78 TMovI
	GetWindowSize(var_0_object, var_25_string); // 0x79 Func
	var_26_string = "default"; // 0x7b PushS
	SetCursor(var_26_string); // 0x7c Func
	var_27_string = "default"; // 0x7e PushS
	SetBackground(var_27_string); // 0x7f Func
	var_28_string = "menumusic"; // 0x81 PushS
	PlaySound(var_28_string); // 0x82 Func
	var_29_bool = 1; // 0x84 PushB
	ShowCursor(var_29_bool); // 0x85 Func
	var_30_bool = var_17_bool; // 0x87 Push
	if(var_30_bool == 0) goto Label_142; // 0x88 JumpB
	var_31_string = "game_choose_pers.xml"; // 0x89 PushS
	var_32_bool = 0; // 0x8a PushB
	CreateWindow(var_31_string, var_32_bool, var_23_bool); // 0x8b Func
	goto Label_150; // 0x8d Jump
	
Label_150:
	var_33_bool = var_2_int == 0; // 0x96 Not
	if(var_33_bool == 0) goto Label_155; // 0x97 JumpB
	ProcessEvents(); // 0x98 Func
	goto Label_150; // 0x9a Jump
	
Label_155:
	func_568(); // 0x9c NEW_2
	var_40_int = 1; // 0x9e PushI
	var_41_bool = var_2_int == var_40_int; // 0x9f Eq
	if(var_41_bool == 0) goto Label_188; // 0xa0 JumpB
	var_42_string = "menumusic"; // 0xa1 PushS
	PauseSound(var_42_string); // 0xa2 Func
	var_43_int = 0; // 0xa4 PushV
	var_43_int = 1; // 0xa5 MovI
	TaskCall(1); // 0xa6 TaskCall
	func_65(var_44_object, var_43_int); // 0xa7 NEW_2
	TaskReturn(); // 0xa8 TaskReturn
	var_48_string = ""; var_49_bool = 0; // 0xaa PushV
	var_48_string = "intro_danko.wmv"; // 0xab MovS
	var_49_bool = 1; // 0xac MovB
	TaskCall(0); // 0xad TaskCall
	func_0(var_52_int, var_53_bool, var_48_string, var_49_bool); // 0xae NEW_2
	TaskReturn(); // 0xaf TaskReturn
	RemoveWorld(); // 0xb1 Func
	UISync(); // 0xb3 Func
	DestroyWindow(); // 0xb5 Func
	var_59_string = "world_danko.xml"; // 0xb7 PushS
	var_60_string = "player_danko.xml"; // 0xb8 PushS
	NewGame(var_59_string, var_60_string); // 0xb9 Func
	goto Label_297; // 0xbb Jump
	
Label_297:
	return 8; // 0x129 Return
	
Label_188:
	var_61_int = 2; // 0xbc PushI
	var_62_bool = var_2_int == var_61_int; // 0xbd Eq
	if(var_62_bool == 0) goto Label_218; // 0xbe JumpB
	var_63_string = "menumusic"; // 0xbf PushS
	PauseSound(var_63_string); // 0xc0 Func
	var_64_int = 0; // 0xc2 PushV
	var_64_int = 2; // 0xc3 MovI
	TaskCall(1); // 0xc4 TaskCall
	func_65(var_65_object, var_64_int); // 0xc5 NEW_2
	TaskReturn(); // 0xc6 TaskReturn
	var_66_string = ""; var_67_bool = 0; // 0xc8 PushV
	var_66_string = "intro_burah.wmv"; // 0xc9 MovS
	var_67_bool = 1; // 0xca MovB
	TaskCall(0); // 0xcb TaskCall
	func_0(var_70_int, var_71_bool, var_66_string, var_67_bool); // 0xcc NEW_2
	TaskReturn(); // 0xcd TaskReturn
	RemoveWorld(); // 0xcf Func
	UISync(); // 0xd1 Func
	DestroyWindow(); // 0xd3 Func
	var_72_string = "world_burah.xml"; // 0xd5 PushS
	var_73_string = "player_burah.xml"; // 0xd6 PushS
	NewGame(var_72_string, var_73_string); // 0xd7 Func
	goto Label_297; // 0xd9 Jump
	
Label_218:
	var_74_int = 3; // 0xda PushI
	var_75_bool = var_2_int == var_74_int; // 0xdb Eq
	if(var_75_bool == 0) goto Label_248; // 0xdc JumpB
	var_76_string = "menumusic"; // 0xdd PushS
	PauseSound(var_76_string); // 0xde Func
	var_77_int = 0; // 0xe0 PushV
	var_77_int = 3; // 0xe1 MovI
	TaskCall(1); // 0xe2 TaskCall
	func_65(var_78_object, var_77_int); // 0xe3 NEW_2
	TaskReturn(); // 0xe4 TaskReturn
	var_79_string = ""; var_80_bool = 0; // 0xe6 PushV
	var_79_string = "intro_klara.wmv"; // 0xe7 MovS
	var_80_bool = 1; // 0xe8 MovB
	TaskCall(0); // 0xe9 TaskCall
	func_0(var_83_int, var_84_bool, var_79_string, var_80_bool); // 0xea NEW_2
	TaskReturn(); // 0xeb TaskReturn
	RemoveWorld(); // 0xed Func
	UISync(); // 0xef Func
	DestroyWindow(); // 0xf1 Func
	var_85_string = "world_klara.xml"; // 0xf3 PushS
	var_86_string = "player_klara.xml"; // 0xf4 PushS
	NewGame(var_85_string, var_86_string); // 0xf5 Func
	goto Label_297; // 0xf7 Jump
	
Label_248:
	var_87_int = 4; // 0xf8 PushI
	var_88_bool = var_2_int == var_87_int; // 0xf9 Eq
	if(var_88_bool == 0) goto Label_267; // 0xfa JumpB
	var_89_string = "menumusic"; // 0xfb PushS
	PauseSound(var_89_string); // 0xfc Func
	var_90_string = "Loading : "; // 0xfe PushS
	var_91_int = var_90_string + var_10_object; // 0xff Add
	Trace(var_91_int); // 0x100 Func
	RemoveWorld(); // 0x102 Func
	UISync(); // 0x104 Func
	DestroyWindow(); // 0x106 Func
	LoadGame(var_22_bool, var_16_object); // 0x108 Func
	goto Label_297; // 0x10a Jump
	
Label_267:
	var_92_int = 5; // 0x10b PushI
	var_93_bool = var_2_int == var_92_int; // 0x10c Eq
	if(var_93_bool == 0) goto Label_284; // 0x10d JumpB
	var_94_bool = var_9_object == 0; // 0x10e Not
	if(var_94_bool == 0) goto Label_277; // 0x10f JumpB
	DestroyWindow(); // 0x110 Func
	SaveGame(var_23_bool); // 0x112 Func
	goto Label_283; // 0x114 Jump
	
Label_283:
	goto Label_297; // 0x11b Jump
	
Label_277:
	DestroyWindow(); // 0x115 Func
	GetFileName(var_25_string); // 0x117 TObjFunc
	SaveGame(var_24_bool, var_25_string); // 0x119 Func
	
Label_284:
	var_95_int = 7; // 0x11c PushI
	var_96_bool = var_2_int == var_95_int; // 0x11d Eq
	if(var_96_bool == 0) goto Label_297; // 0x11e JumpB
	RemoveWorld(); // 0x11f Func
	UISync(); // 0x121 Func
	DestroyWindow(); // 0x123 Func
	var_97_string = "world_intro.xml"; // 0x125 PushS
	var_98_string = "player_intro.xml"; // 0x126 PushS
	NewGame(var_97_string, var_98_string); // 0x127 Func
	
Label_142:
	var_99_object = Obj(); // 0x8e PushV
	func_92(var_99_object); // 0x8f NEW_2
	var_3_bool = var_99_object; // 0x90 TMov
	var_104_object = Obj(); // 0x92 PushV
	func_109(var_104_object); // 0x93 NEW_2
	var_4_object = var_104_object; // 0x94 TMov
}


func_568()
{
	var_34_bool = var_3_bool; // 0x238 PushT
	if(var_34_bool == 0) goto Label_572; // 0x239 JumpB
	DestroyWindow(); // 0x23a TObjFunc
	
Label_572:
	var_35_object = var_4_object; // 0x23c PushT
	if(var_35_object == 0) goto Label_576; // 0x23d JumpB
	DestroyWindow(); // 0x23e TObjFunc
	
Label_576:
	var_36_int = var_5_int; // 0x240 PushT
	if(var_36_int == 0) goto Label_580; // 0x241 JumpB
	DestroyWindow(); // 0x242 TObjFunc
	
Label_580:
	var_37_int = var_6_int; // 0x244 PushT
	if(var_37_int == 0) goto Label_584; // 0x245 JumpB
	DestroyWindow(); // 0x246 TObjFunc
	
Label_584:
	var_38_int = var_7_int; // 0x248 PushT
	if(var_38_int == 0) goto Label_588; // 0x249 JumpB
	DestroyWindow(); // 0x24a TObjFunc
	
Label_588:
	var_39_object = var_8_object; // 0x24c PushT
	if(var_39_object == 0) goto Label_592; // 0x24d JumpB
	DestroyWindow(); // 0x24e TObjFunc
	
Label_592:
	CaptureKeyboard(); // 0x250 Func
	return 0; // 0x252 Return
}


func_603(var_100_bool)
{
	var_101_int = 0; var_102_int = 0; // 0x25b PushV
	var_103_string = "DankoCompleted"; // 0x25c PushS
	var_104_int = 0; // 0x25d PushI
	GetRegistryData(var_102_int, var_103_string, var_104_int); // 0x25e Func
	var_105_int = 0; // 0x260 PushI
	var_100_bool = var_102_int != var_105_int; // 0x261 Neq2
	return 2; // 0x262 Return
}


func_92(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x5c PushV
	var_102_string = "ingame_buttons.xml"; // 0x5d PushS
	var_103_bool = 0; // 0x5e PushB
	CreateWindow(var_102_string, var_103_bool, var_101_object); // 0x5f Func
	var_99_object = var_101_object; // 0x61 Mov
	return 2; // 0x62 Return
}


