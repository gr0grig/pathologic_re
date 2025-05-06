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


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object)
{
	var_20_string = ""; var_21_string = ""; // 0x86 PushV
	var_22_string = "editbox"; // 0x87 PushS
	var_23_bool = var_18_string == var_22_string; // 0x88 Eq
	if(var_23_bool == 0) goto Label_148; // 0x89 JumpB
	var_24_int = 0; // 0x8a PushI
	get(var_21_string, var_24_int); // 0x8b ObjFunc
	DestroyWindow(); // 0x8d Func
	var_25_string = ""; // 0x8f PushV
	var_25_string = var_21_string; // 0x90 Mov
	func_618(var_25_string); // 0x91 NEW_2
	return 2; // 0x93 Return
	
Label_148:
	var_30_int = 0; var_31_string = ""; var_32_object = Obj(); // 0x94 PushV
	var_30_int = var_17_int; // 0x95 Mov
	var_31_string = var_18_string; // 0x96 Mov
	var_32_object = var_19_object; // 0x97 Mov
	func_351(var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object, var_20_string, var_21_string, var_30_int, var_31_string, var_32_object); // 0x98 NEW_2
	return 2; // 0x9a Return
}


task_2_event_100(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int)
{
	var_18_int = 27; // 0x158 PushI
	var_19_bool = var_17_int == var_18_int; // 0x159 Eq
	if(var_19_bool == 0) goto Label_350; // 0x15a JumpB
	func_579(var_16_object, var_17_int); // 0x15c NEW_2
	
Label_350:
	return 0; // 0x15e Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object)
{
	var_17_bool = 0; // 0x55 PushB
	if(var_17_bool == 0) goto Label_94; // 0x56 JumpB
	var_18_string = "world_danko.xml"; // 0x57 PushS
	var_19_string = "player_danko.xml"; // 0x58 PushS
	NewGame(var_18_string, var_19_string); // 0x59 Func
	DestroyWindow(); // 0x5b Func
	return 0; // 0x5d Return
	
Label_94:
	var_20_string = ""; var_21_bool = 0; // 0x5e PushV
	var_20_string = "logo_buka.wmv"; // 0x5f MovS
	var_21_bool = 1; // 0x60 MovB
	TaskCall(0); // 0x61 TaskCall
	func_0(var_24_int, var_25_bool, var_20_string, var_21_bool); // 0x62 NEW_2
	TaskReturn(); // 0x63 TaskReturn
	var_31_string = ""; var_32_bool = 0; // 0x65 PushV
	var_31_string = "logo_icepick.wmv"; // 0x66 MovS
	var_32_bool = 1; // 0x67 MovB
	TaskCall(0); // 0x68 TaskCall
	func_0(var_35_int, var_36_bool, var_31_string, var_32_bool); // 0x69 NEW_2
	TaskReturn(); // 0x6a TaskReturn
	var_37_int = 0; // 0x6c PushV
	var_37_int = 0; // 0x6d MovI
	TaskCall(1); // 0x6e TaskCall
	func_65(var_38_object, var_37_int); // 0x6f NEW_2
	TaskReturn(); // 0x70 TaskReturn
	var_42_string = ""; var_43_bool = 0; // 0x72 PushV
	var_42_string = "intro.wmv"; // 0x73 MovS
	var_43_bool = 1; // 0x74 MovB
	TaskCall(0); // 0x75 TaskCall
	func_0(var_46_int, var_47_bool, var_42_string, var_43_bool); // 0x76 NEW_2
	TaskReturn(); // 0x77 TaskReturn
	var_48_bool = 0; // 0x79 PushV
	var_48_bool = 0; // 0x7a MovB
	func_163(var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_48_bool); // 0x7b NEW_2
	return 0; // 0x7d Return
}


func_0(var_0_object, var_3_bool, var_20_string, var_21_bool)
{
	var_3_bool = var_21_bool; // 0x1 TMov
	var_26_bool = 1; // 0x2 PushB
	SetOwnerDraw(var_26_bool); // 0x3 Func
	var_27_bool = 0; // 0x5 PushB
	ShowCursor(var_27_bool); // 0x6 Func
	CaptureKeyboard(); // 0x8 Func
	GetWindowSize(var_21_bool, var_20_string); // 0xa Func
	LoadVideo(var_20_string); // 0xc Func
	FindVideo(var_0_object, var_20_string); // 0xe Func
	var_28_bool = 0; // 0x10 PushB
	Play(var_28_bool); // 0x11 TObjFunc
	ProcessEvents(); // 0x13 Func
	var_29_bool = 0; // 0x15 PushB
	SetOwnerDraw(var_29_bool); // 0x16 Func
	var_30_bool = 1; // 0x18 PushB
	ShowCursor(var_30_bool); // 0x19 Func
	ReleaseVideo(var_20_string); // 0x1b Func
	return 0; // 0x1d Return
}


func_65(var_0_object, var_37_int)
{
	var_39_string = "intro.xml"; // 0x42 PushS
	var_40_bool = 0; // 0x43 PushB
	CreateWindow(var_39_string, var_40_bool, var_0_object); // 0x44 Func
	var_41_string = "intro"; // 0x46 PushS
	SendMessage(var_37_int, var_41_string); // 0x47 Func
	ProcessEvents(); // 0x49 Func
	return 0; // 0x4b Return
}


func_579(var_3_bool, var_4_object)
{
	func_591(); // 0x244 NEW_2
	var_26_object = Obj(); // 0x246 PushV
	func_126(var_26_object); // 0x247 NEW_2
	var_3_bool = var_26_object; // 0x248 TMov
	var_31_object = Obj(); // 0x24a PushV
	func_155(var_31_object); // 0x24b NEW_2
	var_4_object = var_31_object; // 0x24c TMov
	return 0; // 0x24e Return
}


func_163(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_48_bool)
{
	var_49_bool = 0; var_50_bool = 0; var_51_bool = 0; var_52_bool = 0; var_53_string = ""; var_54_bool = 0; var_55_bool = 0; var_56_bool = 0; var_57_bool = 0; var_58_string = ""; // 0xa3 PushV
	CaptureKeyboard(); // 0xa4 Func
	var_2_int = 0; // 0xa6 TMovI
	GetWindowSize(var_0_object, var_58_string); // 0xa7 Func
	var_59_string = "default"; // 0xa9 PushS
	SetCursor(var_59_string); // 0xaa Func
	var_60_string = "default"; // 0xac PushS
	SetBackground(var_60_string); // 0xad Func
	var_61_string = "menumusic"; // 0xaf PushS
	PlaySound(var_61_string); // 0xb0 Func
	var_62_bool = 1; // 0xb2 PushB
	ShowCursor(var_62_bool); // 0xb3 Func
	var_63_bool = var_48_bool; // 0xb5 Push
	if(var_63_bool == 0) goto Label_188; // 0xb6 JumpB
	var_64_string = "game_choose_pers.xml"; // 0xb7 PushS
	var_65_bool = 0; // 0xb8 PushB
	CreateWindow(var_64_string, var_65_bool, var_56_bool); // 0xb9 Func
	goto Label_196; // 0xbb Jump
	
Label_196:
	var_66_int = 131072; // 0xc4 PushI
	var_67_string = "klara"; // 0xc5 PushS
	SendMessage(var_66_int, var_67_string); // 0xc6 Func
	var_68_int = 131072; // 0xc8 PushI
	var_69_string = "danko"; // 0xc9 PushS
	SendMessage(var_68_int, var_69_string); // 0xca Func
	
Label_204:
	var_70_bool = var_2_int == 0; // 0xcc Not
	if(var_70_bool == 0) goto Label_209; // 0xcd JumpB
	ProcessEvents(); // 0xce Func
	goto Label_204; // 0xd0 Jump
	
Label_209:
	func_591(); // 0xd2 NEW_2
	var_77_int = 1; // 0xd4 PushI
	var_78_bool = var_2_int == var_77_int; // 0xd5 Eq
	if(var_78_bool == 0) goto Label_238; // 0xd6 JumpB
	var_79_string = "menumusic"; // 0xd7 PushS
	PauseSound(var_79_string); // 0xd8 Func
	var_80_int = 0; // 0xda PushV
	var_80_int = 1; // 0xdb MovI
	TaskCall(1); // 0xdc TaskCall
	func_65(var_81_object, var_80_int); // 0xdd NEW_2
	TaskReturn(); // 0xde TaskReturn
	var_82_string = ""; var_83_bool = 0; // 0xe0 PushV
	var_82_string = "intro_danko.wmv"; // 0xe1 MovS
	var_83_bool = 1; // 0xe2 MovB
	TaskCall(0); // 0xe3 TaskCall
	func_0(var_86_int, var_87_bool, var_82_string, var_83_bool); // 0xe4 NEW_2
	TaskReturn(); // 0xe5 TaskReturn
	RemoveWorld(); // 0xe7 Func
	UISync(); // 0xe9 Func
	DestroyWindow(); // 0xeb Func
	goto Label_342; // 0xed Jump
	
Label_342:
	return 10; // 0x156 Return
	
Label_238:
	var_88_int = 2; // 0xee PushI
	var_89_bool = var_2_int == var_88_int; // 0xef Eq
	if(var_89_bool == 0) goto Label_267; // 0xf0 JumpB
	var_90_string = "menumusic"; // 0xf1 PushS
	PauseSound(var_90_string); // 0xf2 Func
	var_91_int = 0; // 0xf4 PushV
	var_91_int = 2; // 0xf5 MovI
	TaskCall(1); // 0xf6 TaskCall
	func_65(var_92_object, var_91_int); // 0xf7 NEW_2
	TaskReturn(); // 0xf8 TaskReturn
	var_93_string = ""; var_94_bool = 0; // 0xfa PushV
	var_93_string = "intro_burah.wmv"; // 0xfb MovS
	var_94_bool = 1; // 0xfc MovB
	TaskCall(0); // 0xfd TaskCall
	func_0(var_97_int, var_98_bool, var_93_string, var_94_bool); // 0xfe NEW_2
	TaskReturn(); // 0xff TaskReturn
	RemoveWorld(); // 0x101 Func
	UISync(); // 0x103 Func
	DestroyWindow(); // 0x105 Func
	var_99_string = "demo_save"; // 0x107 PushS
	LoadGame(var_54_bool, var_99_string); // 0x108 Func
	goto Label_342; // 0x10a Jump
	
Label_267:
	var_100_int = 3; // 0x10b PushI
	var_101_bool = var_2_int == var_100_int; // 0x10c Eq
	if(var_101_bool == 0) goto Label_293; // 0x10d JumpB
	var_102_string = "menumusic"; // 0x10e PushS
	PauseSound(var_102_string); // 0x10f Func
	var_103_int = 0; // 0x111 PushV
	var_103_int = 3; // 0x112 MovI
	TaskCall(1); // 0x113 TaskCall
	func_65(var_104_object, var_103_int); // 0x114 NEW_2
	TaskReturn(); // 0x115 TaskReturn
	var_105_string = ""; var_106_bool = 0; // 0x117 PushV
	var_105_string = "intro_klara.wmv"; // 0x118 MovS
	var_106_bool = 1; // 0x119 MovB
	TaskCall(0); // 0x11a TaskCall
	func_0(var_109_int, var_110_bool, var_105_string, var_106_bool); // 0x11b NEW_2
	TaskReturn(); // 0x11c TaskReturn
	RemoveWorld(); // 0x11e Func
	UISync(); // 0x120 Func
	DestroyWindow(); // 0x122 Func
	goto Label_342; // 0x124 Jump
	
Label_293:
	var_111_int = 4; // 0x125 PushI
	var_112_bool = var_2_int == var_111_int; // 0x126 Eq
	if(var_112_bool == 0) goto Label_312; // 0x127 JumpB
	var_113_string = "menumusic"; // 0x128 PushS
	PauseSound(var_113_string); // 0x129 Func
	var_114_string = "Loading : "; // 0x12b PushS
	var_115_int = var_114_string + var_10_object; // 0x12c Add
	Trace(var_115_int); // 0x12d Func
	RemoveWorld(); // 0x12f Func
	UISync(); // 0x131 Func
	DestroyWindow(); // 0x133 Func
	LoadGame(var_55_bool, var_49_bool); // 0x135 Func
	goto Label_342; // 0x137 Jump
	
Label_312:
	var_116_int = 5; // 0x138 PushI
	var_117_bool = var_2_int == var_116_int; // 0x139 Eq
	if(var_117_bool == 0) goto Label_329; // 0x13a JumpB
	var_118_bool = var_9_object == 0; // 0x13b Not
	if(var_118_bool == 0) goto Label_322; // 0x13c JumpB
	DestroyWindow(); // 0x13d Func
	SaveGame(var_56_bool); // 0x13f Func
	goto Label_328; // 0x141 Jump
	
Label_328:
	goto Label_342; // 0x148 Jump
	
Label_322:
	DestroyWindow(); // 0x142 Func
	GetFileName(var_58_string); // 0x144 TObjFunc
	SaveGame(var_57_bool, var_58_string); // 0x146 Func
	
Label_329:
	var_119_int = 7; // 0x149 PushI
	var_120_bool = var_2_int == var_119_int; // 0x14a Eq
	if(var_120_bool == 0) goto Label_342; // 0x14b JumpB
	RemoveWorld(); // 0x14c Func
	UISync(); // 0x14e Func
	DestroyWindow(); // 0x150 Func
	var_121_string = "world_intro.xml"; // 0x152 PushS
	var_122_string = "player_intro.xml"; // 0x153 PushS
	NewGame(var_121_string, var_122_string); // 0x154 Func
	
Label_188:
	var_123_object = Obj(); // 0xbc PushV
	func_126(var_123_object); // 0xbd NEW_2
	var_3_bool = var_123_object; // 0xbe TMov
	var_128_object = Obj(); // 0xc0 PushV
	func_155(var_128_object); // 0xc1 NEW_2
	var_4_object = var_128_object; // 0xc2 TMov
}


func_618(var_25_string)
{
	var_26_bool = 0; var_27_bool = 0; // 0x26a PushV
	var_28_string = "loading map: "; // 0x26b PushS
	var_29_int = var_28_string + var_25_string; // 0x26c Add
	UITrace(var_29_int); // 0x26d Func
	LoadMap(var_27_bool, var_25_string); // 0x26f Func
	return 2; // 0x271 Return
}


func_591()
{
	var_71_bool = var_3_bool; // 0x24f PushT
	if(var_71_bool == 0) goto Label_595; // 0x250 JumpB
	DestroyWindow(); // 0x251 TObjFunc
	
Label_595:
	var_72_object = var_4_object; // 0x253 PushT
	if(var_72_object == 0) goto Label_599; // 0x254 JumpB
	DestroyWindow(); // 0x255 TObjFunc
	
Label_599:
	var_73_int = var_5_int; // 0x257 PushT
	if(var_73_int == 0) goto Label_603; // 0x258 JumpB
	DestroyWindow(); // 0x259 TObjFunc
	
Label_603:
	var_74_int = var_6_int; // 0x25b PushT
	if(var_74_int == 0) goto Label_607; // 0x25c JumpB
	DestroyWindow(); // 0x25d TObjFunc
	
Label_607:
	var_75_int = var_7_int; // 0x25f PushT
	if(var_75_int == 0) goto Label_611; // 0x260 JumpB
	DestroyWindow(); // 0x261 TObjFunc
	
Label_611:
	var_76_object = var_8_object; // 0x263 PushT
	if(var_76_object == 0) goto Label_615; // 0x264 JumpB
	DestroyWindow(); // 0x265 TObjFunc
	
Label_615:
	CaptureKeyboard(); // 0x267 Func
	return 0; // 0x269 Return
}


func_155(var_128_object)
{
	var_129_object = Obj(); var_130_object = Obj(); // 0x9b PushV
	var_131_string = "game_logo.xml"; // 0x9c PushS
	var_132_bool = 0; // 0x9d PushB
	CreateWindow(var_131_string, var_132_bool, var_130_object); // 0x9e Func
	var_128_object = var_130_object; // 0xa0 Mov
	return 2; // 0xa1 Return
}


func_126(var_123_object)
{
	var_124_object = Obj(); var_125_object = Obj(); // 0x7e PushV
	var_126_string = "game_buttons.xml"; // 0x7f PushS
	var_127_bool = 0; // 0x80 PushB
	CreateWindow(var_126_string, var_127_bool, var_125_object); // 0x81 Func
	var_123_object = var_125_object; // 0x83 Mov
	return 2; // 0x84 Return
}


func_351(var_2_int, var_3_bool, var_4_object, var_9_object, var_15_string, var_19_object, var_20_string, var_21_string, var_30_int, var_31_string, var_32_object)
{
	var_33_string = "newgame"; // 0x160 PushS
	var_34_bool = var_31_string == var_33_string; // 0x161 Eq
	if(var_34_bool == 0) goto Label_359; // 0x162 JumpB
	var_2_int = 7; // 0x163 TMovI
	StopEventProcessing(); // 0x164 Func
	goto Label_578; // 0x166 Jump
	
Label_578:
	return 0; // 0x242 Return
	
Label_359:
	var_35_string = "quitgame"; // 0x167 PushS
	var_36_bool = var_31_string == var_35_string; // 0x168 Eq
	if(var_36_bool == 0) goto Label_369; // 0x169 JumpB
	var_37_string = "Quit game"; // 0x16a PushS
	UITrace(var_37_string); // 0x16b Func
	Quit(); // 0x16d Func
	return 0; // 0x16f Return
	
Label_369:
	var_38_string = "loadgame"; // 0x171 PushS
	var_39_bool = var_31_string == var_38_string; // 0x172 Eq
	if(var_39_bool == 0) goto Label_381; // 0x173 JumpB
	func_591(); // 0x175 NEW_2
	var_46_string = "load.xml"; // 0x177 PushS
	var_47_bool = 0; // 0x178 PushB
	CreateWindow(var_46_string, var_47_bool, var_21_string); // 0x179 Func
	return 0; // 0x17b Return
	
Label_381:
	var_48_string = "savegame"; // 0x17d PushS
	var_49_bool = var_31_string == var_48_string; // 0x17e Eq
	if(var_49_bool == 0) goto Label_393; // 0x17f JumpB
	func_591(); // 0x181 NEW_2
	var_50_string = "save.xml"; // 0x183 PushS
	var_51_bool = 0; // 0x184 PushB
	CreateWindow(var_50_string, var_51_bool, var_20_string); // 0x185 Func
	return 0; // 0x187 Return
	
Label_393:
	var_52_string = "gameoptions"; // 0x189 PushS
	var_53_bool = var_31_string == var_52_string; // 0x18a Eq
	if(var_53_bool == 0) goto Label_405; // 0x18b JumpB
	func_591(); // 0x18d NEW_2
	var_54_string = "options.xml"; // 0x18f PushS
	var_55_bool = 0; // 0x190 PushB
	CreateWindow(var_54_string, var_55_bool, var_19_object); // 0x191 Func
	return 0; // 0x193 Return
	
Label_405:
	var_56_string = "continue"; // 0x195 PushS
	var_57_bool = var_31_string == var_56_string; // 0x196 Eq
	if(var_57_bool == 0) goto Label_413; // 0x197 JumpB
	var_2_int = 6; // 0x198 TMovI
	StopEventProcessing(); // 0x199 Func
	return 0; // 0x19b Return
	
Label_413:
	var_58_string = "credits"; // 0x19d PushS
	var_59_bool = var_31_string == var_58_string; // 0x19e Eq
	if(var_59_bool == 0) goto Label_437; // 0x19f JumpB
	func_591(); // 0x1a1 NEW_2
	var_60_int = 0; // 0x1a3 PushV
	var_60_int = 8; // 0x1a4 MovI
	TaskCall(1); // 0x1a5 TaskCall
	func_65(var_61_object, var_60_int); // 0x1a6 NEW_2
	TaskReturn(); // 0x1a7 TaskReturn
	var_65_object = Obj(); // 0x1a9 PushV
	func_126(var_65_object); // 0x1aa NEW_2
	var_3_bool = var_65_object; // 0x1ab TMov
	var_70_object = Obj(); // 0x1ad PushV
	func_155(var_70_object); // 0x1ae NEW_2
	var_4_object = var_70_object; // 0x1af TMov
	var_75_bool = 1; // 0x1b1 PushB
	ShowCursor(var_75_bool); // 0x1b2 Func
	goto Label_578; // 0x1b4 Jump
	
Label_437:
	var_76_string = "danko"; // 0x1b5 PushS
	var_77_bool = var_31_string == var_76_string; // 0x1b6 Eq
	if(var_77_bool == 0) goto Label_470; // 0x1b7 JumpB
	var_78_int = 0; // 0x1b8 PushI
	var_79_bool = var_30_int == var_78_int; // 0x1b9 Eq
	if(var_79_bool == 0) goto Label_445; // 0x1ba JumpB
	return 0; // 0x1bb Return
	
Label_445:
	var_80_int = 1; // 0x1bd PushI
	var_81_bool = var_30_int == var_80_int; // 0x1be Eq
	if(var_81_bool == 0) goto Label_457; // 0x1bf JumpB
	var_82_int = 202; // 0x1c0 PushI
	var_83_string = "player_name"; // 0x1c1 PushS
	SendMessage(var_82_int, var_83_string); // 0x1c2 Func
	var_84_int = 203; // 0x1c4 PushI
	var_85_string = "player_desc"; // 0x1c5 PushS
	SendMessage(var_84_int, var_85_string); // 0x1c6 Func
	goto Label_468; // 0x1c8 Jump
	
Label_468:
	return 0; // 0x1d4 Return
	
Label_457:
	var_86_int = 2; // 0x1c9 PushI
	var_87_bool = var_30_int == var_86_int; // 0x1ca Eq
	if(var_87_bool == 0) goto Label_468; // 0x1cb JumpB
	var_88_int = -1; // 0x1cc PushI
	var_89_string = "player_name"; // 0x1cd PushS
	SendMessage(var_88_int, var_89_string); // 0x1ce Func
	var_90_int = -1; // 0x1d0 PushI
	var_91_string = "player_desc"; // 0x1d1 PushS
	SendMessage(var_90_int, var_91_string); // 0x1d2 Func
	
Label_470:
	var_92_string = "burah"; // 0x1d6 PushS
	var_93_bool = var_31_string == var_92_string; // 0x1d7 Eq
	if(var_93_bool == 0) goto Label_505; // 0x1d8 JumpB
	var_94_int = 0; // 0x1d9 PushI
	var_95_bool = var_30_int == var_94_int; // 0x1da Eq
	if(var_95_bool == 0) goto Label_480; // 0x1db JumpB
	var_2_int = 2; // 0x1dc TMovI
	StopEventProcessing(); // 0x1dd Func
	goto Label_503; // 0x1df Jump
	
Label_503:
	return 0; // 0x1f7 Return
	
Label_480:
	var_96_int = 1; // 0x1e0 PushI
	var_97_bool = var_30_int == var_96_int; // 0x1e1 Eq
	if(var_97_bool == 0) goto Label_492; // 0x1e2 JumpB
	var_98_int = 205; // 0x1e3 PushI
	var_99_string = "player_name"; // 0x1e4 PushS
	SendMessage(var_98_int, var_99_string); // 0x1e5 Func
	var_100_int = 206; // 0x1e7 PushI
	var_101_string = "player_desc"; // 0x1e8 PushS
	SendMessage(var_100_int, var_101_string); // 0x1e9 Func
	goto Label_503; // 0x1eb Jump
	
Label_492:
	var_102_int = 2; // 0x1ec PushI
	var_103_bool = var_30_int == var_102_int; // 0x1ed Eq
	if(var_103_bool == 0) goto Label_503; // 0x1ee JumpB
	var_104_int = -1; // 0x1ef PushI
	var_105_string = "player_name"; // 0x1f0 PushS
	SendMessage(var_104_int, var_105_string); // 0x1f1 Func
	var_106_int = -1; // 0x1f3 PushI
	var_107_string = "player_desc"; // 0x1f4 PushS
	SendMessage(var_106_int, var_107_string); // 0x1f5 Func
	
Label_505:
	var_108_string = "klara"; // 0x1f9 PushS
	var_109_bool = var_31_string == var_108_string; // 0x1fa Eq
	if(var_109_bool == 0) goto Label_538; // 0x1fb JumpB
	var_110_int = 0; // 0x1fc PushI
	var_111_bool = var_30_int == var_110_int; // 0x1fd Eq
	if(var_111_bool == 0) goto Label_513; // 0x1fe JumpB
	return 0; // 0x1ff Return
	
Label_513:
	var_112_int = 1; // 0x201 PushI
	var_113_bool = var_30_int == var_112_int; // 0x202 Eq
	if(var_113_bool == 0) goto Label_525; // 0x203 JumpB
	var_114_int = 208; // 0x204 PushI
	var_115_string = "player_name"; // 0x205 PushS
	SendMessage(var_114_int, var_115_string); // 0x206 Func
	var_116_int = 209; // 0x208 PushI
	var_117_string = "player_desc"; // 0x209 PushS
	SendMessage(var_116_int, var_117_string); // 0x20a Func
	goto Label_536; // 0x20c Jump
	
Label_536:
	return 0; // 0x218 Return
	
Label_525:
	var_118_int = 2; // 0x20d PushI
	var_119_bool = var_30_int == var_118_int; // 0x20e Eq
	if(var_119_bool == 0) goto Label_536; // 0x20f JumpB
	var_120_int = -1; // 0x210 PushI
	var_121_string = "player_name"; // 0x211 PushS
	SendMessage(var_120_int, var_121_string); // 0x212 Func
	var_122_int = -1; // 0x214 PushI
	var_123_string = "player_desc"; // 0x215 PushS
	SendMessage(var_122_int, var_123_string); // 0x216 Func
	
Label_538:
	var_124_string = "load"; // 0x21a PushS
	var_125_bool = var_31_string == var_124_string; // 0x21b Eq
	if(var_125_bool == 0) goto Label_555; // 0x21c JumpB
	var_126_int = 0; // 0x21d PushI
	var_127_bool = var_30_int == var_126_int; // 0x21e Eq
	if(var_127_bool == 0) goto Label_550; // 0x21f JumpB
	var_2_int = 4; // 0x220 TMovI
	GetFileName(var_15_string); // 0x221 ObjFunc
	StopEventProcessing(); // 0x223 Func
	goto Label_553; // 0x225 Jump
	
Label_553:
	return 0; // 0x229 Return
	
Label_550:
	func_579(var_31_string, var_32_object); // 0x227 NEW_2
	
Label_555:
	var_130_string = "save"; // 0x22b PushS
	var_131_bool = var_31_string == var_130_string; // 0x22c Eq
	if(var_131_bool == 0) goto Label_571; // 0x22d JumpB
	var_132_int = 0; // 0x22e PushI
	var_133_bool = var_30_int == var_132_int; // 0x22f Eq
	if(var_133_bool == 0) goto Label_566; // 0x230 JumpB
	var_2_int = 5; // 0x231 TMovI
	var_9_object = var_32_object; // 0x232 TMov
	StopEventProcessing(); // 0x233 Func
	goto Label_569; // 0x235 Jump
	
Label_569:
	return 0; // 0x239 Return
	
Label_566:
	func_579(var_31_string, var_32_object); // 0x237 NEW_2
	
Label_571:
	var_134_string = "options"; // 0x23b PushS
	var_135_bool = var_31_string == var_134_string; // 0x23c Eq
	if(var_135_bool == 0) goto Label_578; // 0x23d JumpB
	func_579(var_31_string, var_32_object); // 0x23f NEW_2
	return 0; // 0x241 Return
}


