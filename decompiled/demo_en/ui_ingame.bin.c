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
	var_20_string = "newgame"; // 0x12a PushS
	var_21_bool = var_18_string == var_20_string; // 0x12b Eq
	if(var_21_bool == 0) goto Label_305; // 0x12c JumpB
	var_2_int = 7; // 0x12d TMovI
	StopEventProcessing(); // 0x12e Func
	goto Label_524; // 0x130 Jump
	
Label_524:
	return 0; // 0x20c Return
	
Label_305:
	var_22_string = "quitgame"; // 0x131 PushS
	var_23_bool = var_18_string == var_22_string; // 0x132 Eq
	if(var_23_bool == 0) goto Label_315; // 0x133 JumpB
	var_24_string = "Quit game"; // 0x134 PushS
	UITrace(var_24_string); // 0x135 Func
	Quit(); // 0x137 Func
	return 0; // 0x139 Return
	
Label_315:
	var_25_string = "loadgame"; // 0x13b PushS
	var_26_bool = var_18_string == var_25_string; // 0x13c Eq
	if(var_26_bool == 0) goto Label_327; // 0x13d JumpB
	func_537(); // 0x13f NEW_2
	var_33_string = "load.xml"; // 0x141 PushS
	var_34_bool = 0; // 0x142 PushB
	CreateWindow(var_33_string, var_34_bool, var_16_object); // 0x143 Func
	return 0; // 0x145 Return
	
Label_327:
	var_35_string = "savegame"; // 0x147 PushS
	var_36_bool = var_18_string == var_35_string; // 0x148 Eq
	if(var_36_bool == 0) goto Label_339; // 0x149 JumpB
	func_537(); // 0x14b NEW_2
	var_37_string = "save.xml"; // 0x14d PushS
	var_38_bool = 0; // 0x14e PushB
	CreateWindow(var_37_string, var_38_bool, var_15_string); // 0x14f Func
	return 0; // 0x151 Return
	
Label_339:
	var_39_string = "gameoptions"; // 0x153 PushS
	var_40_bool = var_18_string == var_39_string; // 0x154 Eq
	if(var_40_bool == 0) goto Label_351; // 0x155 JumpB
	func_537(); // 0x157 NEW_2
	var_41_string = "options.xml"; // 0x159 PushS
	var_42_bool = 0; // 0x15a PushB
	CreateWindow(var_41_string, var_42_bool, var_14_object); // 0x15b Func
	return 0; // 0x15d Return
	
Label_351:
	var_43_string = "continue"; // 0x15f PushS
	var_44_bool = var_18_string == var_43_string; // 0x160 Eq
	if(var_44_bool == 0) goto Label_359; // 0x161 JumpB
	var_2_int = 6; // 0x162 TMovI
	StopEventProcessing(); // 0x163 Func
	return 0; // 0x165 Return
	
Label_359:
	var_45_string = "credits"; // 0x167 PushS
	var_46_bool = var_18_string == var_45_string; // 0x168 Eq
	if(var_46_bool == 0) goto Label_383; // 0x169 JumpB
	func_537(); // 0x16b NEW_2
	var_47_int = 0; // 0x16d PushV
	var_47_int = 8; // 0x16e MovI
	TaskCall(1); // 0x16f TaskCall
	func_65(var_48_object, var_47_int); // 0x170 NEW_2
	TaskReturn(); // 0x171 TaskReturn
	var_52_object = Obj(); // 0x173 PushV
	func_92(var_52_object); // 0x174 NEW_2
	var_3_bool = var_52_object; // 0x175 TMov
	var_57_object = Obj(); // 0x177 PushV
	func_109(var_57_object); // 0x178 NEW_2
	var_4_object = var_57_object; // 0x179 TMov
	var_62_bool = 1; // 0x17b PushB
	ShowCursor(var_62_bool); // 0x17c Func
	goto Label_524; // 0x17e Jump
	
Label_383:
	var_63_string = "danko"; // 0x17f PushS
	var_64_bool = var_18_string == var_63_string; // 0x180 Eq
	if(var_64_bool == 0) goto Label_416; // 0x181 JumpB
	var_65_int = 0; // 0x182 PushI
	var_66_bool = var_17_int == var_65_int; // 0x183 Eq
	if(var_66_bool == 0) goto Label_391; // 0x184 JumpB
	return 0; // 0x185 Return
	
Label_391:
	var_67_int = 1; // 0x187 PushI
	var_68_bool = var_17_int == var_67_int; // 0x188 Eq
	if(var_68_bool == 0) goto Label_403; // 0x189 JumpB
	var_69_int = 202; // 0x18a PushI
	var_70_string = "player_name"; // 0x18b PushS
	SendMessage(var_69_int, var_70_string); // 0x18c Func
	var_71_int = 203; // 0x18e PushI
	var_72_string = "player_desc"; // 0x18f PushS
	SendMessage(var_71_int, var_72_string); // 0x190 Func
	goto Label_414; // 0x192 Jump
	
Label_414:
	return 0; // 0x19e Return
	
Label_403:
	var_73_int = 2; // 0x193 PushI
	var_74_bool = var_17_int == var_73_int; // 0x194 Eq
	if(var_74_bool == 0) goto Label_414; // 0x195 JumpB
	var_75_int = -1; // 0x196 PushI
	var_76_string = "player_name"; // 0x197 PushS
	SendMessage(var_75_int, var_76_string); // 0x198 Func
	var_77_int = -1; // 0x19a PushI
	var_78_string = "player_desc"; // 0x19b PushS
	SendMessage(var_77_int, var_78_string); // 0x19c Func
	
Label_416:
	var_79_string = "burah"; // 0x1a0 PushS
	var_80_bool = var_18_string == var_79_string; // 0x1a1 Eq
	if(var_80_bool == 0) goto Label_451; // 0x1a2 JumpB
	var_81_int = 0; // 0x1a3 PushI
	var_82_bool = var_17_int == var_81_int; // 0x1a4 Eq
	if(var_82_bool == 0) goto Label_426; // 0x1a5 JumpB
	var_2_int = 2; // 0x1a6 TMovI
	StopEventProcessing(); // 0x1a7 Func
	goto Label_449; // 0x1a9 Jump
	
Label_449:
	return 0; // 0x1c1 Return
	
Label_426:
	var_83_int = 1; // 0x1aa PushI
	var_84_bool = var_17_int == var_83_int; // 0x1ab Eq
	if(var_84_bool == 0) goto Label_438; // 0x1ac JumpB
	var_85_int = 205; // 0x1ad PushI
	var_86_string = "player_name"; // 0x1ae PushS
	SendMessage(var_85_int, var_86_string); // 0x1af Func
	var_87_int = 206; // 0x1b1 PushI
	var_88_string = "player_desc"; // 0x1b2 PushS
	SendMessage(var_87_int, var_88_string); // 0x1b3 Func
	goto Label_449; // 0x1b5 Jump
	
Label_438:
	var_89_int = 2; // 0x1b6 PushI
	var_90_bool = var_17_int == var_89_int; // 0x1b7 Eq
	if(var_90_bool == 0) goto Label_449; // 0x1b8 JumpB
	var_91_int = -1; // 0x1b9 PushI
	var_92_string = "player_name"; // 0x1ba PushS
	SendMessage(var_91_int, var_92_string); // 0x1bb Func
	var_93_int = -1; // 0x1bd PushI
	var_94_string = "player_desc"; // 0x1be PushS
	SendMessage(var_93_int, var_94_string); // 0x1bf Func
	
Label_451:
	var_95_string = "klara"; // 0x1c3 PushS
	var_96_bool = var_18_string == var_95_string; // 0x1c4 Eq
	if(var_96_bool == 0) goto Label_484; // 0x1c5 JumpB
	var_97_int = 0; // 0x1c6 PushI
	var_98_bool = var_17_int == var_97_int; // 0x1c7 Eq
	if(var_98_bool == 0) goto Label_459; // 0x1c8 JumpB
	return 0; // 0x1c9 Return
	
Label_459:
	var_99_int = 1; // 0x1cb PushI
	var_100_bool = var_17_int == var_99_int; // 0x1cc Eq
	if(var_100_bool == 0) goto Label_471; // 0x1cd JumpB
	var_101_int = 208; // 0x1ce PushI
	var_102_string = "player_name"; // 0x1cf PushS
	SendMessage(var_101_int, var_102_string); // 0x1d0 Func
	var_103_int = 209; // 0x1d2 PushI
	var_104_string = "player_desc"; // 0x1d3 PushS
	SendMessage(var_103_int, var_104_string); // 0x1d4 Func
	goto Label_482; // 0x1d6 Jump
	
Label_482:
	return 0; // 0x1e2 Return
	
Label_471:
	var_105_int = 2; // 0x1d7 PushI
	var_106_bool = var_17_int == var_105_int; // 0x1d8 Eq
	if(var_106_bool == 0) goto Label_482; // 0x1d9 JumpB
	var_107_int = -1; // 0x1da PushI
	var_108_string = "player_name"; // 0x1db PushS
	SendMessage(var_107_int, var_108_string); // 0x1dc Func
	var_109_int = -1; // 0x1de PushI
	var_110_string = "player_desc"; // 0x1df PushS
	SendMessage(var_109_int, var_110_string); // 0x1e0 Func
	
Label_484:
	var_111_string = "load"; // 0x1e4 PushS
	var_112_bool = var_18_string == var_111_string; // 0x1e5 Eq
	if(var_112_bool == 0) goto Label_501; // 0x1e6 JumpB
	var_113_int = 0; // 0x1e7 PushI
	var_114_bool = var_17_int == var_113_int; // 0x1e8 Eq
	if(var_114_bool == 0) goto Label_496; // 0x1e9 JumpB
	var_2_int = 4; // 0x1ea TMovI
	GetFileName(var_10_object); // 0x1eb ObjFunc
	StopEventProcessing(); // 0x1ed Func
	goto Label_499; // 0x1ef Jump
	
Label_499:
	return 0; // 0x1f3 Return
	
Label_496:
	func_525(var_18_string, var_19_object); // 0x1f1 NEW_2
	
Label_501:
	var_117_string = "save"; // 0x1f5 PushS
	var_118_bool = var_18_string == var_117_string; // 0x1f6 Eq
	if(var_118_bool == 0) goto Label_517; // 0x1f7 JumpB
	var_119_int = 0; // 0x1f8 PushI
	var_120_bool = var_17_int == var_119_int; // 0x1f9 Eq
	if(var_120_bool == 0) goto Label_512; // 0x1fa JumpB
	var_2_int = 5; // 0x1fb TMovI
	var_9_object = var_19_object; // 0x1fc TMov
	StopEventProcessing(); // 0x1fd Func
	goto Label_515; // 0x1ff Jump
	
Label_515:
	return 0; // 0x203 Return
	
Label_512:
	func_525(var_18_string, var_19_object); // 0x201 NEW_2
	
Label_517:
	var_121_string = "options"; // 0x205 PushS
	var_122_bool = var_18_string == var_121_string; // 0x206 Eq
	if(var_122_bool == 0) goto Label_524; // 0x207 JumpB
	func_525(var_18_string, var_19_object); // 0x209 NEW_2
	return 0; // 0x20b Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object)
{
	var_17_bool = 0; // 0x55 PushV
	var_17_bool = 0; // 0x56 MovB
	func_117(var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_bool); // 0x57 NEW_2
	DestroyWindow(); // 0x59 Func
	return 0; // 0x5b Return
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


func_65(var_0_object, var_49_int)
{
	var_51_string = "intro.xml"; // 0x42 PushS
	var_52_bool = 0; // 0x43 PushB
	CreateWindow(var_51_string, var_52_bool, var_0_object); // 0x44 Func
	var_53_string = "intro"; // 0x46 PushS
	SendMessage(var_49_int, var_53_string); // 0x47 Func
	ProcessEvents(); // 0x49 Func
	return 0; // 0x4b Return
}


func_109(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x6d PushV
	var_108_string = "game_logo.xml"; // 0x6e PushS
	var_109_bool = 0; // 0x6f PushB
	CreateWindow(var_108_string, var_109_bool, var_107_object); // 0x70 Func
	var_105_object = var_107_object; // 0x72 Mov
	return 2; // 0x73 Return
}


func_525(var_3_bool, var_4_object)
{
	func_537(); // 0x20e NEW_2
	var_115_object = Obj(); // 0x210 PushV
	func_92(var_115_object); // 0x211 NEW_2
	var_3_bool = var_115_object; // 0x212 TMov
	var_116_object = Obj(); // 0x214 PushV
	func_109(var_116_object); // 0x215 NEW_2
	var_4_object = var_116_object; // 0x216 TMov
	return 0; // 0x218 Return
}


func_117(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; var_20_bool = 0; var_21_bool = 0; var_22_string = ""; var_23_bool = 0; var_24_bool = 0; var_25_bool = 0; var_26_bool = 0; var_27_string = ""; // 0x75 PushV
	CaptureKeyboard(); // 0x76 Func
	var_2_int = 0; // 0x78 TMovI
	GetWindowSize(var_0_object, var_27_string); // 0x79 Func
	var_28_string = "default"; // 0x7b PushS
	SetCursor(var_28_string); // 0x7c Func
	var_29_string = "default"; // 0x7e PushS
	SetBackground(var_29_string); // 0x7f Func
	var_30_string = "menumusic"; // 0x81 PushS
	PlaySound(var_30_string); // 0x82 Func
	var_31_bool = 1; // 0x84 PushB
	ShowCursor(var_31_bool); // 0x85 Func
	var_32_bool = var_17_bool; // 0x87 Push
	if(var_32_bool == 0) goto Label_142; // 0x88 JumpB
	var_33_string = "game_choose_pers.xml"; // 0x89 PushS
	var_34_bool = 0; // 0x8a PushB
	CreateWindow(var_33_string, var_34_bool, var_25_bool); // 0x8b Func
	goto Label_150; // 0x8d Jump
	
Label_150:
	var_35_int = 131072; // 0x96 PushI
	var_36_string = "klara"; // 0x97 PushS
	SendMessage(var_35_int, var_36_string); // 0x98 Func
	var_37_int = 131072; // 0x9a PushI
	var_38_string = "danko"; // 0x9b PushS
	SendMessage(var_37_int, var_38_string); // 0x9c Func
	
Label_158:
	var_39_bool = var_2_int == 0; // 0x9e Not
	if(var_39_bool == 0) goto Label_163; // 0x9f JumpB
	ProcessEvents(); // 0xa0 Func
	goto Label_158; // 0xa2 Jump
	
Label_163:
	func_537(); // 0xa4 NEW_2
	var_46_int = 1; // 0xa6 PushI
	var_47_bool = var_2_int == var_46_int; // 0xa7 Eq
	if(var_47_bool == 0) goto Label_192; // 0xa8 JumpB
	var_48_string = "menumusic"; // 0xa9 PushS
	PauseSound(var_48_string); // 0xaa Func
	var_49_int = 0; // 0xac PushV
	var_49_int = 1; // 0xad MovI
	TaskCall(1); // 0xae TaskCall
	func_65(var_50_object, var_49_int); // 0xaf NEW_2
	TaskReturn(); // 0xb0 TaskReturn
	var_54_string = ""; var_55_bool = 0; // 0xb2 PushV
	var_54_string = "intro_danko.wmv"; // 0xb3 MovS
	var_55_bool = 1; // 0xb4 MovB
	TaskCall(0); // 0xb5 TaskCall
	func_0(var_58_int, var_59_bool, var_54_string, var_55_bool); // 0xb6 NEW_2
	TaskReturn(); // 0xb7 TaskReturn
	RemoveWorld(); // 0xb9 Func
	UISync(); // 0xbb Func
	DestroyWindow(); // 0xbd Func
	goto Label_296; // 0xbf Jump
	
Label_296:
	return 10; // 0x128 Return
	
Label_192:
	var_65_int = 2; // 0xc0 PushI
	var_66_bool = var_2_int == var_65_int; // 0xc1 Eq
	if(var_66_bool == 0) goto Label_221; // 0xc2 JumpB
	var_67_string = "menumusic"; // 0xc3 PushS
	PauseSound(var_67_string); // 0xc4 Func
	var_68_int = 0; // 0xc6 PushV
	var_68_int = 2; // 0xc7 MovI
	TaskCall(1); // 0xc8 TaskCall
	func_65(var_69_object, var_68_int); // 0xc9 NEW_2
	TaskReturn(); // 0xca TaskReturn
	var_70_string = ""; var_71_bool = 0; // 0xcc PushV
	var_70_string = "intro_burah.wmv"; // 0xcd MovS
	var_71_bool = 1; // 0xce MovB
	TaskCall(0); // 0xcf TaskCall
	func_0(var_74_int, var_75_bool, var_70_string, var_71_bool); // 0xd0 NEW_2
	TaskReturn(); // 0xd1 TaskReturn
	RemoveWorld(); // 0xd3 Func
	UISync(); // 0xd5 Func
	DestroyWindow(); // 0xd7 Func
	var_76_string = "demo_save"; // 0xd9 PushS
	LoadGame(var_23_bool, var_76_string); // 0xda Func
	goto Label_296; // 0xdc Jump
	
Label_221:
	var_77_int = 3; // 0xdd PushI
	var_78_bool = var_2_int == var_77_int; // 0xde Eq
	if(var_78_bool == 0) goto Label_247; // 0xdf JumpB
	var_79_string = "menumusic"; // 0xe0 PushS
	PauseSound(var_79_string); // 0xe1 Func
	var_80_int = 0; // 0xe3 PushV
	var_80_int = 3; // 0xe4 MovI
	TaskCall(1); // 0xe5 TaskCall
	func_65(var_81_object, var_80_int); // 0xe6 NEW_2
	TaskReturn(); // 0xe7 TaskReturn
	var_82_string = ""; var_83_bool = 0; // 0xe9 PushV
	var_82_string = "intro_klara.wmv"; // 0xea MovS
	var_83_bool = 1; // 0xeb MovB
	TaskCall(0); // 0xec TaskCall
	func_0(var_86_int, var_87_bool, var_82_string, var_83_bool); // 0xed NEW_2
	TaskReturn(); // 0xee TaskReturn
	RemoveWorld(); // 0xf0 Func
	UISync(); // 0xf2 Func
	DestroyWindow(); // 0xf4 Func
	goto Label_296; // 0xf6 Jump
	
Label_247:
	var_88_int = 4; // 0xf7 PushI
	var_89_bool = var_2_int == var_88_int; // 0xf8 Eq
	if(var_89_bool == 0) goto Label_266; // 0xf9 JumpB
	var_90_string = "menumusic"; // 0xfa PushS
	PauseSound(var_90_string); // 0xfb Func
	var_91_string = "Loading : "; // 0xfd PushS
	var_92_int = var_91_string + var_10_object; // 0xfe Add
	Trace(var_92_int); // 0xff Func
	RemoveWorld(); // 0x101 Func
	UISync(); // 0x103 Func
	DestroyWindow(); // 0x105 Func
	LoadGame(var_24_bool, var_18_bool); // 0x107 Func
	goto Label_296; // 0x109 Jump
	
Label_266:
	var_93_int = 5; // 0x10a PushI
	var_94_bool = var_2_int == var_93_int; // 0x10b Eq
	if(var_94_bool == 0) goto Label_283; // 0x10c JumpB
	var_95_bool = var_9_object == 0; // 0x10d Not
	if(var_95_bool == 0) goto Label_276; // 0x10e JumpB
	DestroyWindow(); // 0x10f Func
	SaveGame(var_25_bool); // 0x111 Func
	goto Label_282; // 0x113 Jump
	
Label_282:
	goto Label_296; // 0x11a Jump
	
Label_276:
	DestroyWindow(); // 0x114 Func
	GetFileName(var_27_string); // 0x116 TObjFunc
	SaveGame(var_26_bool, var_27_string); // 0x118 Func
	
Label_283:
	var_96_int = 7; // 0x11b PushI
	var_97_bool = var_2_int == var_96_int; // 0x11c Eq
	if(var_97_bool == 0) goto Label_296; // 0x11d JumpB
	RemoveWorld(); // 0x11e Func
	UISync(); // 0x120 Func
	DestroyWindow(); // 0x122 Func
	var_98_string = "world_intro.xml"; // 0x124 PushS
	var_99_string = "player_intro.xml"; // 0x125 PushS
	NewGame(var_98_string, var_99_string); // 0x126 Func
	
Label_142:
	var_100_object = Obj(); // 0x8e PushV
	func_92(var_100_object); // 0x8f NEW_2
	var_3_bool = var_100_object; // 0x90 TMov
	var_105_object = Obj(); // 0x92 PushV
	func_109(var_105_object); // 0x93 NEW_2
	var_4_object = var_105_object; // 0x94 TMov
}


func_537()
{
	var_40_bool = var_3_bool; // 0x219 PushT
	if(var_40_bool == 0) goto Label_541; // 0x21a JumpB
	DestroyWindow(); // 0x21b TObjFunc
	
Label_541:
	var_41_object = var_4_object; // 0x21d PushT
	if(var_41_object == 0) goto Label_545; // 0x21e JumpB
	DestroyWindow(); // 0x21f TObjFunc
	
Label_545:
	var_42_int = var_5_int; // 0x221 PushT
	if(var_42_int == 0) goto Label_549; // 0x222 JumpB
	DestroyWindow(); // 0x223 TObjFunc
	
Label_549:
	var_43_int = var_6_int; // 0x225 PushT
	if(var_43_int == 0) goto Label_553; // 0x226 JumpB
	DestroyWindow(); // 0x227 TObjFunc
	
Label_553:
	var_44_int = var_7_int; // 0x229 PushT
	if(var_44_int == 0) goto Label_557; // 0x22a JumpB
	DestroyWindow(); // 0x22b TObjFunc
	
Label_557:
	var_45_object = var_8_object; // 0x22d PushT
	if(var_45_object == 0) goto Label_561; // 0x22e JumpB
	DestroyWindow(); // 0x22f TObjFunc
	
Label_561:
	CaptureKeyboard(); // 0x231 Func
	return 0; // 0x233 Return
}


func_92(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x5c PushV
	var_103_string = "ingame_buttons.xml"; // 0x5d PushS
	var_104_bool = 0; // 0x5e PushB
	CreateWindow(var_103_string, var_104_bool, var_102_object); // 0x5f Func
	var_100_object = var_102_object; // 0x61 Mov
	return 2; // 0x62 Return
}


