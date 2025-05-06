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
	var_18_int = 27; // 0x128 PushI
	var_19_bool = var_17_int == var_18_int; // 0x129 Eq
	if(var_19_bool == 0) goto Label_302; // 0x12a JumpB
	func_531(var_16_object, var_17_int); // 0x12c NEW_2
	
Label_302:
	return 0; // 0x12e Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object)
{
	var_20_string = "newgame"; // 0x130 PushS
	var_21_bool = var_18_string == var_20_string; // 0x131 Eq
	if(var_21_bool == 0) goto Label_311; // 0x132 JumpB
	var_2_int = 7; // 0x133 TMovI
	StopEventProcessing(); // 0x134 Func
	goto Label_530; // 0x136 Jump
	
Label_530:
	return 0; // 0x212 Return
	
Label_311:
	var_22_string = "quitgame"; // 0x137 PushS
	var_23_bool = var_18_string == var_22_string; // 0x138 Eq
	if(var_23_bool == 0) goto Label_321; // 0x139 JumpB
	var_24_string = "Quit game"; // 0x13a PushS
	UITrace(var_24_string); // 0x13b Func
	Quit(); // 0x13d Func
	return 0; // 0x13f Return
	
Label_321:
	var_25_string = "loadgame"; // 0x141 PushS
	var_26_bool = var_18_string == var_25_string; // 0x142 Eq
	if(var_26_bool == 0) goto Label_333; // 0x143 JumpB
	func_543(); // 0x145 NEW_2
	var_33_string = "load.xml"; // 0x147 PushS
	var_34_bool = 0; // 0x148 PushB
	CreateWindow(var_33_string, var_34_bool, var_16_object); // 0x149 Func
	return 0; // 0x14b Return
	
Label_333:
	var_35_string = "savegame"; // 0x14d PushS
	var_36_bool = var_18_string == var_35_string; // 0x14e Eq
	if(var_36_bool == 0) goto Label_345; // 0x14f JumpB
	func_543(); // 0x151 NEW_2
	var_37_string = "save.xml"; // 0x153 PushS
	var_38_bool = 0; // 0x154 PushB
	CreateWindow(var_37_string, var_38_bool, var_15_string); // 0x155 Func
	return 0; // 0x157 Return
	
Label_345:
	var_39_string = "gameoptions"; // 0x159 PushS
	var_40_bool = var_18_string == var_39_string; // 0x15a Eq
	if(var_40_bool == 0) goto Label_357; // 0x15b JumpB
	func_543(); // 0x15d NEW_2
	var_41_string = "options.xml"; // 0x15f PushS
	var_42_bool = 0; // 0x160 PushB
	CreateWindow(var_41_string, var_42_bool, var_14_object); // 0x161 Func
	return 0; // 0x163 Return
	
Label_357:
	var_43_string = "continue"; // 0x165 PushS
	var_44_bool = var_18_string == var_43_string; // 0x166 Eq
	if(var_44_bool == 0) goto Label_365; // 0x167 JumpB
	var_2_int = 6; // 0x168 TMovI
	StopEventProcessing(); // 0x169 Func
	return 0; // 0x16b Return
	
Label_365:
	var_45_string = "credits"; // 0x16d PushS
	var_46_bool = var_18_string == var_45_string; // 0x16e Eq
	if(var_46_bool == 0) goto Label_389; // 0x16f JumpB
	func_543(); // 0x171 NEW_2
	var_47_int = 0; // 0x173 PushV
	var_47_int = 8; // 0x174 MovI
	TaskCall(1); // 0x175 TaskCall
	func_65(var_48_object, var_47_int); // 0x176 NEW_2
	TaskReturn(); // 0x177 TaskReturn
	var_52_object = Obj(); // 0x179 PushV
	func_99(var_52_object); // 0x17a NEW_2
	var_3_bool = var_52_object; // 0x17b TMov
	var_57_object = Obj(); // 0x17d PushV
	func_107(var_57_object); // 0x17e NEW_2
	var_4_object = var_57_object; // 0x17f TMov
	var_62_bool = 1; // 0x181 PushB
	ShowCursor(var_62_bool); // 0x182 Func
	goto Label_530; // 0x184 Jump
	
Label_389:
	var_63_string = "danko"; // 0x185 PushS
	var_64_bool = var_18_string == var_63_string; // 0x186 Eq
	if(var_64_bool == 0) goto Label_422; // 0x187 JumpB
	var_65_int = 0; // 0x188 PushI
	var_66_bool = var_17_int == var_65_int; // 0x189 Eq
	if(var_66_bool == 0) goto Label_397; // 0x18a JumpB
	return 0; // 0x18b Return
	
Label_397:
	var_67_int = 1; // 0x18d PushI
	var_68_bool = var_17_int == var_67_int; // 0x18e Eq
	if(var_68_bool == 0) goto Label_409; // 0x18f JumpB
	var_69_int = 202; // 0x190 PushI
	var_70_string = "player_name"; // 0x191 PushS
	SendMessage(var_69_int, var_70_string); // 0x192 Func
	var_71_int = 203; // 0x194 PushI
	var_72_string = "player_desc"; // 0x195 PushS
	SendMessage(var_71_int, var_72_string); // 0x196 Func
	goto Label_420; // 0x198 Jump
	
Label_420:
	return 0; // 0x1a4 Return
	
Label_409:
	var_73_int = 2; // 0x199 PushI
	var_74_bool = var_17_int == var_73_int; // 0x19a Eq
	if(var_74_bool == 0) goto Label_420; // 0x19b JumpB
	var_75_int = -1; // 0x19c PushI
	var_76_string = "player_name"; // 0x19d PushS
	SendMessage(var_75_int, var_76_string); // 0x19e Func
	var_77_int = -1; // 0x1a0 PushI
	var_78_string = "player_desc"; // 0x1a1 PushS
	SendMessage(var_77_int, var_78_string); // 0x1a2 Func
	
Label_422:
	var_79_string = "burah"; // 0x1a6 PushS
	var_80_bool = var_18_string == var_79_string; // 0x1a7 Eq
	if(var_80_bool == 0) goto Label_457; // 0x1a8 JumpB
	var_81_int = 0; // 0x1a9 PushI
	var_82_bool = var_17_int == var_81_int; // 0x1aa Eq
	if(var_82_bool == 0) goto Label_432; // 0x1ab JumpB
	var_2_int = 2; // 0x1ac TMovI
	StopEventProcessing(); // 0x1ad Func
	goto Label_455; // 0x1af Jump
	
Label_455:
	return 0; // 0x1c7 Return
	
Label_432:
	var_83_int = 1; // 0x1b0 PushI
	var_84_bool = var_17_int == var_83_int; // 0x1b1 Eq
	if(var_84_bool == 0) goto Label_444; // 0x1b2 JumpB
	var_85_int = 205; // 0x1b3 PushI
	var_86_string = "player_name"; // 0x1b4 PushS
	SendMessage(var_85_int, var_86_string); // 0x1b5 Func
	var_87_int = 206; // 0x1b7 PushI
	var_88_string = "player_desc"; // 0x1b8 PushS
	SendMessage(var_87_int, var_88_string); // 0x1b9 Func
	goto Label_455; // 0x1bb Jump
	
Label_444:
	var_89_int = 2; // 0x1bc PushI
	var_90_bool = var_17_int == var_89_int; // 0x1bd Eq
	if(var_90_bool == 0) goto Label_455; // 0x1be JumpB
	var_91_int = -1; // 0x1bf PushI
	var_92_string = "player_name"; // 0x1c0 PushS
	SendMessage(var_91_int, var_92_string); // 0x1c1 Func
	var_93_int = -1; // 0x1c3 PushI
	var_94_string = "player_desc"; // 0x1c4 PushS
	SendMessage(var_93_int, var_94_string); // 0x1c5 Func
	
Label_457:
	var_95_string = "klara"; // 0x1c9 PushS
	var_96_bool = var_18_string == var_95_string; // 0x1ca Eq
	if(var_96_bool == 0) goto Label_490; // 0x1cb JumpB
	var_97_int = 0; // 0x1cc PushI
	var_98_bool = var_17_int == var_97_int; // 0x1cd Eq
	if(var_98_bool == 0) goto Label_465; // 0x1ce JumpB
	return 0; // 0x1cf Return
	
Label_465:
	var_99_int = 1; // 0x1d1 PushI
	var_100_bool = var_17_int == var_99_int; // 0x1d2 Eq
	if(var_100_bool == 0) goto Label_477; // 0x1d3 JumpB
	var_101_int = 208; // 0x1d4 PushI
	var_102_string = "player_name"; // 0x1d5 PushS
	SendMessage(var_101_int, var_102_string); // 0x1d6 Func
	var_103_int = 209; // 0x1d8 PushI
	var_104_string = "player_desc"; // 0x1d9 PushS
	SendMessage(var_103_int, var_104_string); // 0x1da Func
	goto Label_488; // 0x1dc Jump
	
Label_488:
	return 0; // 0x1e8 Return
	
Label_477:
	var_105_int = 2; // 0x1dd PushI
	var_106_bool = var_17_int == var_105_int; // 0x1de Eq
	if(var_106_bool == 0) goto Label_488; // 0x1df JumpB
	var_107_int = -1; // 0x1e0 PushI
	var_108_string = "player_name"; // 0x1e1 PushS
	SendMessage(var_107_int, var_108_string); // 0x1e2 Func
	var_109_int = -1; // 0x1e4 PushI
	var_110_string = "player_desc"; // 0x1e5 PushS
	SendMessage(var_109_int, var_110_string); // 0x1e6 Func
	
Label_490:
	var_111_string = "load"; // 0x1ea PushS
	var_112_bool = var_18_string == var_111_string; // 0x1eb Eq
	if(var_112_bool == 0) goto Label_507; // 0x1ec JumpB
	var_113_int = 0; // 0x1ed PushI
	var_114_bool = var_17_int == var_113_int; // 0x1ee Eq
	if(var_114_bool == 0) goto Label_502; // 0x1ef JumpB
	var_2_int = 4; // 0x1f0 TMovI
	GetFileName(var_10_object); // 0x1f1 ObjFunc
	StopEventProcessing(); // 0x1f3 Func
	goto Label_505; // 0x1f5 Jump
	
Label_505:
	return 0; // 0x1f9 Return
	
Label_502:
	func_531(var_18_string, var_19_object); // 0x1f7 NEW_2
	
Label_507:
	var_117_string = "save"; // 0x1fb PushS
	var_118_bool = var_18_string == var_117_string; // 0x1fc Eq
	if(var_118_bool == 0) goto Label_523; // 0x1fd JumpB
	var_119_int = 0; // 0x1fe PushI
	var_120_bool = var_17_int == var_119_int; // 0x1ff Eq
	if(var_120_bool == 0) goto Label_518; // 0x200 JumpB
	var_2_int = 5; // 0x201 TMovI
	var_9_object = var_19_object; // 0x202 TMov
	StopEventProcessing(); // 0x203 Func
	goto Label_521; // 0x205 Jump
	
Label_521:
	return 0; // 0x209 Return
	
Label_518:
	func_531(var_18_string, var_19_object); // 0x207 NEW_2
	
Label_523:
	var_121_string = "options"; // 0x20b PushS
	var_122_bool = var_18_string == var_121_string; // 0x20c Eq
	if(var_122_bool == 0) goto Label_530; // 0x20d JumpB
	func_531(var_18_string, var_19_object); // 0x20f NEW_2
	return 0; // 0x211 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object)
{
	var_17_string = "menumusic"; // 0x55 PushS
	PlaySound(var_17_string); // 0x56 Func
	var_18_int = 0; // 0x58 PushV
	var_18_int = 8; // 0x59 MovI
	TaskCall(1); // 0x5a TaskCall
	func_65(var_19_object, var_18_int); // 0x5b NEW_2
	TaskReturn(); // 0x5c TaskReturn
	var_23_bool = 0; // 0x5e PushV
	var_23_bool = 0; // 0x5f MovB
	func_115(var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_23_bool); // 0x60 NEW_2
	return 0; // 0x62 Return
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


func_65(var_0_object, var_18_int)
{
	var_20_string = "intro.xml"; // 0x42 PushS
	var_21_bool = 0; // 0x43 PushB
	CreateWindow(var_20_string, var_21_bool, var_0_object); // 0x44 Func
	var_22_string = "intro"; // 0x46 PushS
	SendMessage(var_18_int, var_22_string); // 0x47 Func
	ProcessEvents(); // 0x49 Func
	return 0; // 0x4b Return
}


func_99(var_103_object)
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x63 PushV
	var_106_string = "game_buttons.xml"; // 0x64 PushS
	var_107_bool = 0; // 0x65 PushB
	CreateWindow(var_106_string, var_107_bool, var_105_object); // 0x66 Func
	var_103_object = var_105_object; // 0x68 Mov
	return 2; // 0x69 Return
}


func_107(var_108_object)
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x6b PushV
	var_111_string = "game_logo.xml"; // 0x6c PushS
	var_112_bool = 0; // 0x6d PushB
	CreateWindow(var_111_string, var_112_bool, var_110_object); // 0x6e Func
	var_108_object = var_110_object; // 0x70 Mov
	return 2; // 0x71 Return
}


func_115(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; var_26_bool = 0; var_27_bool = 0; var_28_string = ""; var_29_bool = 0; var_30_bool = 0; var_31_bool = 0; var_32_bool = 0; var_33_string = ""; // 0x73 PushV
	CaptureKeyboard(); // 0x74 Func
	var_2_int = 0; // 0x76 TMovI
	GetWindowSize(var_0_object, var_33_string); // 0x77 Func
	var_34_string = "default"; // 0x79 PushS
	SetCursor(var_34_string); // 0x7a Func
	var_35_string = "default"; // 0x7c PushS
	SetBackground(var_35_string); // 0x7d Func
	var_36_string = "menumusic"; // 0x7f PushS
	PlaySound(var_36_string); // 0x80 Func
	var_37_bool = 1; // 0x82 PushB
	ShowCursor(var_37_bool); // 0x83 Func
	var_38_bool = var_23_bool; // 0x85 Push
	if(var_38_bool == 0) goto Label_140; // 0x86 JumpB
	var_39_string = "game_choose_pers.xml"; // 0x87 PushS
	var_40_bool = 0; // 0x88 PushB
	CreateWindow(var_39_string, var_40_bool, var_31_bool); // 0x89 Func
	goto Label_148; // 0x8b Jump
	
Label_148:
	var_41_int = 131072; // 0x94 PushI
	var_42_string = "klara"; // 0x95 PushS
	SendMessage(var_41_int, var_42_string); // 0x96 Func
	var_43_int = 131072; // 0x98 PushI
	var_44_string = "danko"; // 0x99 PushS
	SendMessage(var_43_int, var_44_string); // 0x9a Func
	
Label_156:
	var_45_bool = var_2_int == 0; // 0x9c Not
	if(var_45_bool == 0) goto Label_161; // 0x9d JumpB
	ProcessEvents(); // 0x9e Func
	goto Label_156; // 0xa0 Jump
	
Label_161:
	func_543(); // 0xa2 NEW_2
	var_52_int = 1; // 0xa4 PushI
	var_53_bool = var_2_int == var_52_int; // 0xa5 Eq
	if(var_53_bool == 0) goto Label_190; // 0xa6 JumpB
	var_54_string = "menumusic"; // 0xa7 PushS
	PauseSound(var_54_string); // 0xa8 Func
	var_55_int = 0; // 0xaa PushV
	var_55_int = 1; // 0xab MovI
	TaskCall(1); // 0xac TaskCall
	func_65(var_56_object, var_55_int); // 0xad NEW_2
	TaskReturn(); // 0xae TaskReturn
	var_57_string = ""; var_58_bool = 0; // 0xb0 PushV
	var_57_string = "intro_danko.wmv"; // 0xb1 MovS
	var_58_bool = 1; // 0xb2 MovB
	TaskCall(0); // 0xb3 TaskCall
	func_0(var_61_int, var_62_bool, var_57_string, var_58_bool); // 0xb4 NEW_2
	TaskReturn(); // 0xb5 TaskReturn
	RemoveWorld(); // 0xb7 Func
	UISync(); // 0xb9 Func
	DestroyWindow(); // 0xbb Func
	goto Label_294; // 0xbd Jump
	
Label_294:
	return 10; // 0x126 Return
	
Label_190:
	var_68_int = 2; // 0xbe PushI
	var_69_bool = var_2_int == var_68_int; // 0xbf Eq
	if(var_69_bool == 0) goto Label_219; // 0xc0 JumpB
	var_70_string = "menumusic"; // 0xc1 PushS
	PauseSound(var_70_string); // 0xc2 Func
	var_71_int = 0; // 0xc4 PushV
	var_71_int = 2; // 0xc5 MovI
	TaskCall(1); // 0xc6 TaskCall
	func_65(var_72_object, var_71_int); // 0xc7 NEW_2
	TaskReturn(); // 0xc8 TaskReturn
	var_73_string = ""; var_74_bool = 0; // 0xca PushV
	var_73_string = "intro_burah.wmv"; // 0xcb MovS
	var_74_bool = 1; // 0xcc MovB
	TaskCall(0); // 0xcd TaskCall
	func_0(var_77_int, var_78_bool, var_73_string, var_74_bool); // 0xce NEW_2
	TaskReturn(); // 0xcf TaskReturn
	RemoveWorld(); // 0xd1 Func
	UISync(); // 0xd3 Func
	DestroyWindow(); // 0xd5 Func
	var_79_string = "demo_save"; // 0xd7 PushS
	LoadGame(var_29_bool, var_79_string); // 0xd8 Func
	goto Label_294; // 0xda Jump
	
Label_219:
	var_80_int = 3; // 0xdb PushI
	var_81_bool = var_2_int == var_80_int; // 0xdc Eq
	if(var_81_bool == 0) goto Label_245; // 0xdd JumpB
	var_82_string = "menumusic"; // 0xde PushS
	PauseSound(var_82_string); // 0xdf Func
	var_83_int = 0; // 0xe1 PushV
	var_83_int = 3; // 0xe2 MovI
	TaskCall(1); // 0xe3 TaskCall
	func_65(var_84_object, var_83_int); // 0xe4 NEW_2
	TaskReturn(); // 0xe5 TaskReturn
	var_85_string = ""; var_86_bool = 0; // 0xe7 PushV
	var_85_string = "intro_klara.wmv"; // 0xe8 MovS
	var_86_bool = 1; // 0xe9 MovB
	TaskCall(0); // 0xea TaskCall
	func_0(var_89_int, var_90_bool, var_85_string, var_86_bool); // 0xeb NEW_2
	TaskReturn(); // 0xec TaskReturn
	RemoveWorld(); // 0xee Func
	UISync(); // 0xf0 Func
	DestroyWindow(); // 0xf2 Func
	goto Label_294; // 0xf4 Jump
	
Label_245:
	var_91_int = 4; // 0xf5 PushI
	var_92_bool = var_2_int == var_91_int; // 0xf6 Eq
	if(var_92_bool == 0) goto Label_264; // 0xf7 JumpB
	var_93_string = "menumusic"; // 0xf8 PushS
	PauseSound(var_93_string); // 0xf9 Func
	var_94_string = "Loading : "; // 0xfb PushS
	var_95_int = var_94_string + var_10_object; // 0xfc Add
	Trace(var_95_int); // 0xfd Func
	RemoveWorld(); // 0xff Func
	UISync(); // 0x101 Func
	DestroyWindow(); // 0x103 Func
	LoadGame(var_30_bool, var_24_bool); // 0x105 Func
	goto Label_294; // 0x107 Jump
	
Label_264:
	var_96_int = 5; // 0x108 PushI
	var_97_bool = var_2_int == var_96_int; // 0x109 Eq
	if(var_97_bool == 0) goto Label_281; // 0x10a JumpB
	var_98_bool = var_9_object == 0; // 0x10b Not
	if(var_98_bool == 0) goto Label_274; // 0x10c JumpB
	DestroyWindow(); // 0x10d Func
	SaveGame(var_31_bool); // 0x10f Func
	goto Label_280; // 0x111 Jump
	
Label_280:
	goto Label_294; // 0x118 Jump
	
Label_274:
	DestroyWindow(); // 0x112 Func
	GetFileName(var_33_string); // 0x114 TObjFunc
	SaveGame(var_32_bool, var_33_string); // 0x116 Func
	
Label_281:
	var_99_int = 7; // 0x119 PushI
	var_100_bool = var_2_int == var_99_int; // 0x11a Eq
	if(var_100_bool == 0) goto Label_294; // 0x11b JumpB
	RemoveWorld(); // 0x11c Func
	UISync(); // 0x11e Func
	DestroyWindow(); // 0x120 Func
	var_101_string = "world_intro.xml"; // 0x122 PushS
	var_102_string = "player_intro.xml"; // 0x123 PushS
	NewGame(var_101_string, var_102_string); // 0x124 Func
	
Label_140:
	var_103_object = Obj(); // 0x8c PushV
	func_99(var_103_object); // 0x8d NEW_2
	var_3_bool = var_103_object; // 0x8e TMov
	var_108_object = Obj(); // 0x90 PushV
	func_107(var_108_object); // 0x91 NEW_2
	var_4_object = var_108_object; // 0x92 TMov
}


func_531(var_3_bool, var_4_object)
{
	func_543(); // 0x214 NEW_2
	var_115_object = Obj(); // 0x216 PushV
	func_99(var_115_object); // 0x217 NEW_2
	var_3_bool = var_115_object; // 0x218 TMov
	var_116_object = Obj(); // 0x21a PushV
	func_107(var_116_object); // 0x21b NEW_2
	var_4_object = var_116_object; // 0x21c TMov
	return 0; // 0x21e Return
}


func_543()
{
	var_46_bool = var_3_bool; // 0x21f PushT
	if(var_46_bool == 0) goto Label_547; // 0x220 JumpB
	DestroyWindow(); // 0x221 TObjFunc
	
Label_547:
	var_47_object = var_4_object; // 0x223 PushT
	if(var_47_object == 0) goto Label_551; // 0x224 JumpB
	DestroyWindow(); // 0x225 TObjFunc
	
Label_551:
	var_48_int = var_5_int; // 0x227 PushT
	if(var_48_int == 0) goto Label_555; // 0x228 JumpB
	DestroyWindow(); // 0x229 TObjFunc
	
Label_555:
	var_49_int = var_6_int; // 0x22b PushT
	if(var_49_int == 0) goto Label_559; // 0x22c JumpB
	DestroyWindow(); // 0x22d TObjFunc
	
Label_559:
	var_50_int = var_7_int; // 0x22f PushT
	if(var_50_int == 0) goto Label_563; // 0x230 JumpB
	DestroyWindow(); // 0x231 TObjFunc
	
Label_563:
	var_51_object = var_8_object; // 0x233 PushT
	if(var_51_object == 0) goto Label_567; // 0x234 JumpB
	DestroyWindow(); // 0x235 TObjFunc
	
Label_567:
	CaptureKeyboard(); // 0x237 Func
	return 0; // 0x239 Return
}


