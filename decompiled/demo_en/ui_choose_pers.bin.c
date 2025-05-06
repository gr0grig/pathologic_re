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
	var_18_int = 27; // 0x11f PushI
	var_19_bool = var_17_int == var_18_int; // 0x120 Eq
	if(var_19_bool == 0) goto Label_293; // 0x121 JumpB
	func_522(var_16_object, var_17_int); // 0x123 NEW_2
	
Label_293:
	return 0; // 0x125 Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object)
{
	var_20_string = "newgame"; // 0x127 PushS
	var_21_bool = var_18_string == var_20_string; // 0x128 Eq
	if(var_21_bool == 0) goto Label_302; // 0x129 JumpB
	var_2_int = 7; // 0x12a TMovI
	StopEventProcessing(); // 0x12b Func
	goto Label_521; // 0x12d Jump
	
Label_521:
	return 0; // 0x209 Return
	
Label_302:
	var_22_string = "quitgame"; // 0x12e PushS
	var_23_bool = var_18_string == var_22_string; // 0x12f Eq
	if(var_23_bool == 0) goto Label_312; // 0x130 JumpB
	var_24_string = "Quit game"; // 0x131 PushS
	UITrace(var_24_string); // 0x132 Func
	Quit(); // 0x134 Func
	return 0; // 0x136 Return
	
Label_312:
	var_25_string = "loadgame"; // 0x138 PushS
	var_26_bool = var_18_string == var_25_string; // 0x139 Eq
	if(var_26_bool == 0) goto Label_324; // 0x13a JumpB
	func_534(); // 0x13c NEW_2
	var_33_string = "load.xml"; // 0x13e PushS
	var_34_bool = 0; // 0x13f PushB
	CreateWindow(var_33_string, var_34_bool, var_16_object); // 0x140 Func
	return 0; // 0x142 Return
	
Label_324:
	var_35_string = "savegame"; // 0x144 PushS
	var_36_bool = var_18_string == var_35_string; // 0x145 Eq
	if(var_36_bool == 0) goto Label_336; // 0x146 JumpB
	func_534(); // 0x148 NEW_2
	var_37_string = "save.xml"; // 0x14a PushS
	var_38_bool = 0; // 0x14b PushB
	CreateWindow(var_37_string, var_38_bool, var_15_string); // 0x14c Func
	return 0; // 0x14e Return
	
Label_336:
	var_39_string = "gameoptions"; // 0x150 PushS
	var_40_bool = var_18_string == var_39_string; // 0x151 Eq
	if(var_40_bool == 0) goto Label_348; // 0x152 JumpB
	func_534(); // 0x154 NEW_2
	var_41_string = "options.xml"; // 0x156 PushS
	var_42_bool = 0; // 0x157 PushB
	CreateWindow(var_41_string, var_42_bool, var_14_object); // 0x158 Func
	return 0; // 0x15a Return
	
Label_348:
	var_43_string = "continue"; // 0x15c PushS
	var_44_bool = var_18_string == var_43_string; // 0x15d Eq
	if(var_44_bool == 0) goto Label_356; // 0x15e JumpB
	var_2_int = 6; // 0x15f TMovI
	StopEventProcessing(); // 0x160 Func
	return 0; // 0x162 Return
	
Label_356:
	var_45_string = "credits"; // 0x164 PushS
	var_46_bool = var_18_string == var_45_string; // 0x165 Eq
	if(var_46_bool == 0) goto Label_380; // 0x166 JumpB
	func_534(); // 0x168 NEW_2
	var_47_int = 0; // 0x16a PushV
	var_47_int = 8; // 0x16b MovI
	TaskCall(1); // 0x16c TaskCall
	func_65(var_48_object, var_47_int); // 0x16d NEW_2
	TaskReturn(); // 0x16e TaskReturn
	var_52_object = Obj(); // 0x170 PushV
	func_90(var_52_object); // 0x171 NEW_2
	var_3_bool = var_52_object; // 0x172 TMov
	var_57_object = Obj(); // 0x174 PushV
	func_98(var_57_object); // 0x175 NEW_2
	var_4_object = var_57_object; // 0x176 TMov
	var_62_bool = 1; // 0x178 PushB
	ShowCursor(var_62_bool); // 0x179 Func
	goto Label_521; // 0x17b Jump
	
Label_380:
	var_63_string = "danko"; // 0x17c PushS
	var_64_bool = var_18_string == var_63_string; // 0x17d Eq
	if(var_64_bool == 0) goto Label_413; // 0x17e JumpB
	var_65_int = 0; // 0x17f PushI
	var_66_bool = var_17_int == var_65_int; // 0x180 Eq
	if(var_66_bool == 0) goto Label_388; // 0x181 JumpB
	return 0; // 0x182 Return
	
Label_388:
	var_67_int = 1; // 0x184 PushI
	var_68_bool = var_17_int == var_67_int; // 0x185 Eq
	if(var_68_bool == 0) goto Label_400; // 0x186 JumpB
	var_69_int = 202; // 0x187 PushI
	var_70_string = "player_name"; // 0x188 PushS
	SendMessage(var_69_int, var_70_string); // 0x189 Func
	var_71_int = 203; // 0x18b PushI
	var_72_string = "player_desc"; // 0x18c PushS
	SendMessage(var_71_int, var_72_string); // 0x18d Func
	goto Label_411; // 0x18f Jump
	
Label_411:
	return 0; // 0x19b Return
	
Label_400:
	var_73_int = 2; // 0x190 PushI
	var_74_bool = var_17_int == var_73_int; // 0x191 Eq
	if(var_74_bool == 0) goto Label_411; // 0x192 JumpB
	var_75_int = -1; // 0x193 PushI
	var_76_string = "player_name"; // 0x194 PushS
	SendMessage(var_75_int, var_76_string); // 0x195 Func
	var_77_int = -1; // 0x197 PushI
	var_78_string = "player_desc"; // 0x198 PushS
	SendMessage(var_77_int, var_78_string); // 0x199 Func
	
Label_413:
	var_79_string = "burah"; // 0x19d PushS
	var_80_bool = var_18_string == var_79_string; // 0x19e Eq
	if(var_80_bool == 0) goto Label_448; // 0x19f JumpB
	var_81_int = 0; // 0x1a0 PushI
	var_82_bool = var_17_int == var_81_int; // 0x1a1 Eq
	if(var_82_bool == 0) goto Label_423; // 0x1a2 JumpB
	var_2_int = 2; // 0x1a3 TMovI
	StopEventProcessing(); // 0x1a4 Func
	goto Label_446; // 0x1a6 Jump
	
Label_446:
	return 0; // 0x1be Return
	
Label_423:
	var_83_int = 1; // 0x1a7 PushI
	var_84_bool = var_17_int == var_83_int; // 0x1a8 Eq
	if(var_84_bool == 0) goto Label_435; // 0x1a9 JumpB
	var_85_int = 205; // 0x1aa PushI
	var_86_string = "player_name"; // 0x1ab PushS
	SendMessage(var_85_int, var_86_string); // 0x1ac Func
	var_87_int = 206; // 0x1ae PushI
	var_88_string = "player_desc"; // 0x1af PushS
	SendMessage(var_87_int, var_88_string); // 0x1b0 Func
	goto Label_446; // 0x1b2 Jump
	
Label_435:
	var_89_int = 2; // 0x1b3 PushI
	var_90_bool = var_17_int == var_89_int; // 0x1b4 Eq
	if(var_90_bool == 0) goto Label_446; // 0x1b5 JumpB
	var_91_int = -1; // 0x1b6 PushI
	var_92_string = "player_name"; // 0x1b7 PushS
	SendMessage(var_91_int, var_92_string); // 0x1b8 Func
	var_93_int = -1; // 0x1ba PushI
	var_94_string = "player_desc"; // 0x1bb PushS
	SendMessage(var_93_int, var_94_string); // 0x1bc Func
	
Label_448:
	var_95_string = "klara"; // 0x1c0 PushS
	var_96_bool = var_18_string == var_95_string; // 0x1c1 Eq
	if(var_96_bool == 0) goto Label_481; // 0x1c2 JumpB
	var_97_int = 0; // 0x1c3 PushI
	var_98_bool = var_17_int == var_97_int; // 0x1c4 Eq
	if(var_98_bool == 0) goto Label_456; // 0x1c5 JumpB
	return 0; // 0x1c6 Return
	
Label_456:
	var_99_int = 1; // 0x1c8 PushI
	var_100_bool = var_17_int == var_99_int; // 0x1c9 Eq
	if(var_100_bool == 0) goto Label_468; // 0x1ca JumpB
	var_101_int = 208; // 0x1cb PushI
	var_102_string = "player_name"; // 0x1cc PushS
	SendMessage(var_101_int, var_102_string); // 0x1cd Func
	var_103_int = 209; // 0x1cf PushI
	var_104_string = "player_desc"; // 0x1d0 PushS
	SendMessage(var_103_int, var_104_string); // 0x1d1 Func
	goto Label_479; // 0x1d3 Jump
	
Label_479:
	return 0; // 0x1df Return
	
Label_468:
	var_105_int = 2; // 0x1d4 PushI
	var_106_bool = var_17_int == var_105_int; // 0x1d5 Eq
	if(var_106_bool == 0) goto Label_479; // 0x1d6 JumpB
	var_107_int = -1; // 0x1d7 PushI
	var_108_string = "player_name"; // 0x1d8 PushS
	SendMessage(var_107_int, var_108_string); // 0x1d9 Func
	var_109_int = -1; // 0x1db PushI
	var_110_string = "player_desc"; // 0x1dc PushS
	SendMessage(var_109_int, var_110_string); // 0x1dd Func
	
Label_481:
	var_111_string = "load"; // 0x1e1 PushS
	var_112_bool = var_18_string == var_111_string; // 0x1e2 Eq
	if(var_112_bool == 0) goto Label_498; // 0x1e3 JumpB
	var_113_int = 0; // 0x1e4 PushI
	var_114_bool = var_17_int == var_113_int; // 0x1e5 Eq
	if(var_114_bool == 0) goto Label_493; // 0x1e6 JumpB
	var_2_int = 4; // 0x1e7 TMovI
	GetFileName(var_10_object); // 0x1e8 ObjFunc
	StopEventProcessing(); // 0x1ea Func
	goto Label_496; // 0x1ec Jump
	
Label_496:
	return 0; // 0x1f0 Return
	
Label_493:
	func_522(var_18_string, var_19_object); // 0x1ee NEW_2
	
Label_498:
	var_117_string = "save"; // 0x1f2 PushS
	var_118_bool = var_18_string == var_117_string; // 0x1f3 Eq
	if(var_118_bool == 0) goto Label_514; // 0x1f4 JumpB
	var_119_int = 0; // 0x1f5 PushI
	var_120_bool = var_17_int == var_119_int; // 0x1f6 Eq
	if(var_120_bool == 0) goto Label_509; // 0x1f7 JumpB
	var_2_int = 5; // 0x1f8 TMovI
	var_9_object = var_19_object; // 0x1f9 TMov
	StopEventProcessing(); // 0x1fa Func
	goto Label_512; // 0x1fc Jump
	
Label_512:
	return 0; // 0x200 Return
	
Label_509:
	func_522(var_18_string, var_19_object); // 0x1fe NEW_2
	
Label_514:
	var_121_string = "options"; // 0x202 PushS
	var_122_bool = var_18_string == var_121_string; // 0x203 Eq
	if(var_122_bool == 0) goto Label_521; // 0x204 JumpB
	func_522(var_18_string, var_19_object); // 0x206 NEW_2
	return 0; // 0x208 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object)
{
	var_17_bool = 0; // 0x55 PushV
	var_17_bool = 1; // 0x56 MovB
	func_106(var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_bool); // 0x57 NEW_2
	return 0; // 0x59 Return
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


func_98(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x62 PushV
	var_108_string = "game_logo.xml"; // 0x63 PushS
	var_109_bool = 0; // 0x64 PushB
	CreateWindow(var_108_string, var_109_bool, var_107_object); // 0x65 Func
	var_105_object = var_107_object; // 0x67 Mov
	return 2; // 0x68 Return
}


func_522(var_3_bool, var_4_object)
{
	func_534(); // 0x20b NEW_2
	var_115_object = Obj(); // 0x20d PushV
	func_90(var_115_object); // 0x20e NEW_2
	var_3_bool = var_115_object; // 0x20f TMov
	var_116_object = Obj(); // 0x211 PushV
	func_98(var_116_object); // 0x212 NEW_2
	var_4_object = var_116_object; // 0x213 TMov
	return 0; // 0x215 Return
}


func_106(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0; var_20_bool = 0; var_21_bool = 0; var_22_string = ""; var_23_bool = 0; var_24_bool = 0; var_25_bool = 0; var_26_bool = 0; var_27_string = ""; // 0x6a PushV
	CaptureKeyboard(); // 0x6b Func
	var_2_int = 0; // 0x6d TMovI
	GetWindowSize(var_0_object, var_27_string); // 0x6e Func
	var_28_string = "default"; // 0x70 PushS
	SetCursor(var_28_string); // 0x71 Func
	var_29_string = "default"; // 0x73 PushS
	SetBackground(var_29_string); // 0x74 Func
	var_30_string = "menumusic"; // 0x76 PushS
	PlaySound(var_30_string); // 0x77 Func
	var_31_bool = 1; // 0x79 PushB
	ShowCursor(var_31_bool); // 0x7a Func
	var_32_bool = var_17_bool; // 0x7c Push
	if(var_32_bool == 0) goto Label_131; // 0x7d JumpB
	var_33_string = "game_choose_pers.xml"; // 0x7e PushS
	var_34_bool = 0; // 0x7f PushB
	CreateWindow(var_33_string, var_34_bool, var_25_bool); // 0x80 Func
	goto Label_139; // 0x82 Jump
	
Label_139:
	var_35_int = 131072; // 0x8b PushI
	var_36_string = "klara"; // 0x8c PushS
	SendMessage(var_35_int, var_36_string); // 0x8d Func
	var_37_int = 131072; // 0x8f PushI
	var_38_string = "danko"; // 0x90 PushS
	SendMessage(var_37_int, var_38_string); // 0x91 Func
	
Label_147:
	var_39_bool = var_2_int == 0; // 0x93 Not
	if(var_39_bool == 0) goto Label_152; // 0x94 JumpB
	ProcessEvents(); // 0x95 Func
	goto Label_147; // 0x97 Jump
	
Label_152:
	func_534(); // 0x99 NEW_2
	var_46_int = 1; // 0x9b PushI
	var_47_bool = var_2_int == var_46_int; // 0x9c Eq
	if(var_47_bool == 0) goto Label_181; // 0x9d JumpB
	var_48_string = "menumusic"; // 0x9e PushS
	PauseSound(var_48_string); // 0x9f Func
	var_49_int = 0; // 0xa1 PushV
	var_49_int = 1; // 0xa2 MovI
	TaskCall(1); // 0xa3 TaskCall
	func_65(var_50_object, var_49_int); // 0xa4 NEW_2
	TaskReturn(); // 0xa5 TaskReturn
	var_54_string = ""; var_55_bool = 0; // 0xa7 PushV
	var_54_string = "intro_danko.wmv"; // 0xa8 MovS
	var_55_bool = 1; // 0xa9 MovB
	TaskCall(0); // 0xaa TaskCall
	func_0(var_58_int, var_59_bool, var_54_string, var_55_bool); // 0xab NEW_2
	TaskReturn(); // 0xac TaskReturn
	RemoveWorld(); // 0xae Func
	UISync(); // 0xb0 Func
	DestroyWindow(); // 0xb2 Func
	goto Label_285; // 0xb4 Jump
	
Label_285:
	return 10; // 0x11d Return
	
Label_181:
	var_65_int = 2; // 0xb5 PushI
	var_66_bool = var_2_int == var_65_int; // 0xb6 Eq
	if(var_66_bool == 0) goto Label_210; // 0xb7 JumpB
	var_67_string = "menumusic"; // 0xb8 PushS
	PauseSound(var_67_string); // 0xb9 Func
	var_68_int = 0; // 0xbb PushV
	var_68_int = 2; // 0xbc MovI
	TaskCall(1); // 0xbd TaskCall
	func_65(var_69_object, var_68_int); // 0xbe NEW_2
	TaskReturn(); // 0xbf TaskReturn
	var_70_string = ""; var_71_bool = 0; // 0xc1 PushV
	var_70_string = "intro_burah.wmv"; // 0xc2 MovS
	var_71_bool = 1; // 0xc3 MovB
	TaskCall(0); // 0xc4 TaskCall
	func_0(var_74_int, var_75_bool, var_70_string, var_71_bool); // 0xc5 NEW_2
	TaskReturn(); // 0xc6 TaskReturn
	RemoveWorld(); // 0xc8 Func
	UISync(); // 0xca Func
	DestroyWindow(); // 0xcc Func
	var_76_string = "demo_save"; // 0xce PushS
	LoadGame(var_23_bool, var_76_string); // 0xcf Func
	goto Label_285; // 0xd1 Jump
	
Label_210:
	var_77_int = 3; // 0xd2 PushI
	var_78_bool = var_2_int == var_77_int; // 0xd3 Eq
	if(var_78_bool == 0) goto Label_236; // 0xd4 JumpB
	var_79_string = "menumusic"; // 0xd5 PushS
	PauseSound(var_79_string); // 0xd6 Func
	var_80_int = 0; // 0xd8 PushV
	var_80_int = 3; // 0xd9 MovI
	TaskCall(1); // 0xda TaskCall
	func_65(var_81_object, var_80_int); // 0xdb NEW_2
	TaskReturn(); // 0xdc TaskReturn
	var_82_string = ""; var_83_bool = 0; // 0xde PushV
	var_82_string = "intro_klara.wmv"; // 0xdf MovS
	var_83_bool = 1; // 0xe0 MovB
	TaskCall(0); // 0xe1 TaskCall
	func_0(var_86_int, var_87_bool, var_82_string, var_83_bool); // 0xe2 NEW_2
	TaskReturn(); // 0xe3 TaskReturn
	RemoveWorld(); // 0xe5 Func
	UISync(); // 0xe7 Func
	DestroyWindow(); // 0xe9 Func
	goto Label_285; // 0xeb Jump
	
Label_236:
	var_88_int = 4; // 0xec PushI
	var_89_bool = var_2_int == var_88_int; // 0xed Eq
	if(var_89_bool == 0) goto Label_255; // 0xee JumpB
	var_90_string = "menumusic"; // 0xef PushS
	PauseSound(var_90_string); // 0xf0 Func
	var_91_string = "Loading : "; // 0xf2 PushS
	var_92_int = var_91_string + var_10_object; // 0xf3 Add
	Trace(var_92_int); // 0xf4 Func
	RemoveWorld(); // 0xf6 Func
	UISync(); // 0xf8 Func
	DestroyWindow(); // 0xfa Func
	LoadGame(var_24_bool, var_18_bool); // 0xfc Func
	goto Label_285; // 0xfe Jump
	
Label_255:
	var_93_int = 5; // 0xff PushI
	var_94_bool = var_2_int == var_93_int; // 0x100 Eq
	if(var_94_bool == 0) goto Label_272; // 0x101 JumpB
	var_95_bool = var_9_object == 0; // 0x102 Not
	if(var_95_bool == 0) goto Label_265; // 0x103 JumpB
	DestroyWindow(); // 0x104 Func
	SaveGame(var_25_bool); // 0x106 Func
	goto Label_271; // 0x108 Jump
	
Label_271:
	goto Label_285; // 0x10f Jump
	
Label_265:
	DestroyWindow(); // 0x109 Func
	GetFileName(var_27_string); // 0x10b TObjFunc
	SaveGame(var_26_bool, var_27_string); // 0x10d Func
	
Label_272:
	var_96_int = 7; // 0x110 PushI
	var_97_bool = var_2_int == var_96_int; // 0x111 Eq
	if(var_97_bool == 0) goto Label_285; // 0x112 JumpB
	RemoveWorld(); // 0x113 Func
	UISync(); // 0x115 Func
	DestroyWindow(); // 0x117 Func
	var_98_string = "world_intro.xml"; // 0x119 PushS
	var_99_string = "player_intro.xml"; // 0x11a PushS
	NewGame(var_98_string, var_99_string); // 0x11b Func
	
Label_131:
	var_100_object = Obj(); // 0x83 PushV
	func_90(var_100_object); // 0x84 NEW_2
	var_3_bool = var_100_object; // 0x85 TMov
	var_105_object = Obj(); // 0x87 PushV
	func_98(var_105_object); // 0x88 NEW_2
	var_4_object = var_105_object; // 0x89 TMov
}


func_534()
{
	var_40_bool = var_3_bool; // 0x216 PushT
	if(var_40_bool == 0) goto Label_538; // 0x217 JumpB
	DestroyWindow(); // 0x218 TObjFunc
	
Label_538:
	var_41_object = var_4_object; // 0x21a PushT
	if(var_41_object == 0) goto Label_542; // 0x21b JumpB
	DestroyWindow(); // 0x21c TObjFunc
	
Label_542:
	var_42_int = var_5_int; // 0x21e PushT
	if(var_42_int == 0) goto Label_546; // 0x21f JumpB
	DestroyWindow(); // 0x220 TObjFunc
	
Label_546:
	var_43_int = var_6_int; // 0x222 PushT
	if(var_43_int == 0) goto Label_550; // 0x223 JumpB
	DestroyWindow(); // 0x224 TObjFunc
	
Label_550:
	var_44_int = var_7_int; // 0x226 PushT
	if(var_44_int == 0) goto Label_554; // 0x227 JumpB
	DestroyWindow(); // 0x228 TObjFunc
	
Label_554:
	var_45_object = var_8_object; // 0x22a PushT
	if(var_45_object == 0) goto Label_558; // 0x22b JumpB
	DestroyWindow(); // 0x22c TObjFunc
	
Label_558:
	CaptureKeyboard(); // 0x22e Func
	return 0; // 0x230 Return
}


func_90(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x5a PushV
	var_103_string = "game_buttons.xml"; // 0x5b PushS
	var_104_bool = 0; // 0x5c PushB
	CreateWindow(var_103_string, var_104_bool, var_102_object); // 0x5d Func
	var_100_object = var_102_object; // 0x5f Mov
	return 2; // 0x60 Return
}


