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
	func_665(var_25_string); // 0x91 NEW_2
	return 2; // 0x93 Return
	
Label_148:
	var_30_int = 0; var_31_string = ""; var_32_object = Obj(); // 0x94 PushV
	var_30_int = var_17_int; // 0x95 Mov
	var_31_string = var_18_string; // 0x96 Mov
	var_32_object = var_19_object; // 0x97 Mov
	func_352(var_16_object, var_17_int, var_18_string, var_19_object, var_20_string, var_21_string, var_30_int, var_31_string, var_32_object); // 0x98 NEW_2
	return 2; // 0x9a Return
}


task_2_event_100(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int)
{
	var_18_int = 27; // 0x159 PushI
	var_19_bool = var_17_int == var_18_int; // 0x15a Eq
	if(var_19_bool == 0) goto Label_351; // 0x15b JumpB
	func_610(var_16_object, var_17_int); // 0x15d NEW_2
	
Label_351:
	return 0; // 0x15f Return
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
	func_163(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_48_bool); // 0x7b NEW_2
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


func_610(var_3_bool, var_4_object)
{
	func_622(); // 0x263 NEW_2
	var_26_object = Obj(); // 0x265 PushV
	func_126(var_26_object); // 0x266 NEW_2
	var_3_bool = var_26_object; // 0x267 TMov
	var_31_object = Obj(); // 0x269 PushV
	func_155(var_31_object); // 0x26a NEW_2
	var_4_object = var_31_object; // 0x26b TMov
	return 0; // 0x26d Return
}


func_163(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_16_object, var_48_bool)
{
	var_49_bool = 0; var_50_bool = 0; var_51_bool = 0; var_52_string = ""; var_53_bool = 0; var_54_bool = 0; var_55_bool = 0; var_56_string = ""; // 0xa3 PushV
	CaptureKeyboard(); // 0xa4 Func
	var_2_int = 0; // 0xa6 TMovI
	GetWindowSize(var_0_object, var_56_string); // 0xa7 Func
	var_57_string = "default"; // 0xa9 PushS
	SetCursor(var_57_string); // 0xaa Func
	var_58_string = "default"; // 0xac PushS
	SetBackground(var_58_string); // 0xad Func
	var_59_string = "menumusic"; // 0xaf PushS
	PlaySound(var_59_string); // 0xb0 Func
	var_60_bool = 1; // 0xb2 PushB
	ShowCursor(var_60_bool); // 0xb3 Func
	var_61_bool = var_48_bool; // 0xb5 Push
	if(var_61_bool == 0) goto Label_188; // 0xb6 JumpB
	var_62_string = "game_choose_pers.xml"; // 0xb7 PushS
	var_63_bool = 0; // 0xb8 PushB
	CreateWindow(var_62_string, var_63_bool, var_54_bool); // 0xb9 Func
	goto Label_196; // 0xbb Jump
	
Label_196:
	var_64_bool = var_2_int == 0; // 0xc4 Not
	if(var_64_bool == 0) goto Label_201; // 0xc5 JumpB
	ProcessEvents(); // 0xc6 Func
	goto Label_196; // 0xc8 Jump
	
Label_201:
	func_622(); // 0xca NEW_2
	var_71_int = 1; // 0xcc PushI
	var_72_bool = var_2_int == var_71_int; // 0xcd Eq
	if(var_72_bool == 0) goto Label_234; // 0xce JumpB
	var_73_string = "menumusic"; // 0xcf PushS
	PauseSound(var_73_string); // 0xd0 Func
	var_74_int = 0; // 0xd2 PushV
	var_74_int = 1; // 0xd3 MovI
	TaskCall(1); // 0xd4 TaskCall
	func_65(var_75_object, var_74_int); // 0xd5 NEW_2
	TaskReturn(); // 0xd6 TaskReturn
	var_76_string = ""; var_77_bool = 0; // 0xd8 PushV
	var_76_string = "intro_danko.wmv"; // 0xd9 MovS
	var_77_bool = 1; // 0xda MovB
	TaskCall(0); // 0xdb TaskCall
	func_0(var_80_int, var_81_bool, var_76_string, var_77_bool); // 0xdc NEW_2
	TaskReturn(); // 0xdd TaskReturn
	RemoveWorld(); // 0xdf Func
	UISync(); // 0xe1 Func
	DestroyWindow(); // 0xe3 Func
	var_82_string = "world_danko.xml"; // 0xe5 PushS
	var_83_string = "player_danko.xml"; // 0xe6 PushS
	NewGame(var_82_string, var_83_string); // 0xe7 Func
	goto Label_343; // 0xe9 Jump
	
Label_343:
	return 8; // 0x157 Return
	
Label_234:
	var_84_int = 2; // 0xea PushI
	var_85_bool = var_2_int == var_84_int; // 0xeb Eq
	if(var_85_bool == 0) goto Label_264; // 0xec JumpB
	var_86_string = "menumusic"; // 0xed PushS
	PauseSound(var_86_string); // 0xee Func
	var_87_int = 0; // 0xf0 PushV
	var_87_int = 2; // 0xf1 MovI
	TaskCall(1); // 0xf2 TaskCall
	func_65(var_88_object, var_87_int); // 0xf3 NEW_2
	TaskReturn(); // 0xf4 TaskReturn
	var_89_string = ""; var_90_bool = 0; // 0xf6 PushV
	var_89_string = "intro_burah.wmv"; // 0xf7 MovS
	var_90_bool = 1; // 0xf8 MovB
	TaskCall(0); // 0xf9 TaskCall
	func_0(var_93_int, var_94_bool, var_89_string, var_90_bool); // 0xfa NEW_2
	TaskReturn(); // 0xfb TaskReturn
	RemoveWorld(); // 0xfd Func
	UISync(); // 0xff Func
	DestroyWindow(); // 0x101 Func
	var_95_string = "world_burah.xml"; // 0x103 PushS
	var_96_string = "player_burah.xml"; // 0x104 PushS
	NewGame(var_95_string, var_96_string); // 0x105 Func
	goto Label_343; // 0x107 Jump
	
Label_264:
	var_97_int = 3; // 0x108 PushI
	var_98_bool = var_2_int == var_97_int; // 0x109 Eq
	if(var_98_bool == 0) goto Label_294; // 0x10a JumpB
	var_99_string = "menumusic"; // 0x10b PushS
	PauseSound(var_99_string); // 0x10c Func
	var_100_int = 0; // 0x10e PushV
	var_100_int = 3; // 0x10f MovI
	TaskCall(1); // 0x110 TaskCall
	func_65(var_101_object, var_100_int); // 0x111 NEW_2
	TaskReturn(); // 0x112 TaskReturn
	var_102_string = ""; var_103_bool = 0; // 0x114 PushV
	var_102_string = "intro_klara.wmv"; // 0x115 MovS
	var_103_bool = 1; // 0x116 MovB
	TaskCall(0); // 0x117 TaskCall
	func_0(var_106_int, var_107_bool, var_102_string, var_103_bool); // 0x118 NEW_2
	TaskReturn(); // 0x119 TaskReturn
	RemoveWorld(); // 0x11b Func
	UISync(); // 0x11d Func
	DestroyWindow(); // 0x11f Func
	var_108_string = "world_klara.xml"; // 0x121 PushS
	var_109_string = "player_klara.xml"; // 0x122 PushS
	NewGame(var_108_string, var_109_string); // 0x123 Func
	goto Label_343; // 0x125 Jump
	
Label_294:
	var_110_int = 4; // 0x126 PushI
	var_111_bool = var_2_int == var_110_int; // 0x127 Eq
	if(var_111_bool == 0) goto Label_313; // 0x128 JumpB
	var_112_string = "menumusic"; // 0x129 PushS
	PauseSound(var_112_string); // 0x12a Func
	var_113_string = "Loading : "; // 0x12c PushS
	var_114_int = var_113_string + var_10_object; // 0x12d Add
	Trace(var_114_int); // 0x12e Func
	RemoveWorld(); // 0x130 Func
	UISync(); // 0x132 Func
	DestroyWindow(); // 0x134 Func
	LoadGame(var_53_bool, var_16_object); // 0x136 Func
	goto Label_343; // 0x138 Jump
	
Label_313:
	var_115_int = 5; // 0x139 PushI
	var_116_bool = var_2_int == var_115_int; // 0x13a Eq
	if(var_116_bool == 0) goto Label_330; // 0x13b JumpB
	var_117_bool = var_9_object == 0; // 0x13c Not
	if(var_117_bool == 0) goto Label_323; // 0x13d JumpB
	DestroyWindow(); // 0x13e Func
	SaveGame(var_54_bool); // 0x140 Func
	goto Label_329; // 0x142 Jump
	
Label_329:
	goto Label_343; // 0x149 Jump
	
Label_323:
	DestroyWindow(); // 0x143 Func
	GetFileName(var_56_string); // 0x145 TObjFunc
	SaveGame(var_55_bool, var_56_string); // 0x147 Func
	
Label_330:
	var_118_int = 7; // 0x14a PushI
	var_119_bool = var_2_int == var_118_int; // 0x14b Eq
	if(var_119_bool == 0) goto Label_343; // 0x14c JumpB
	RemoveWorld(); // 0x14d Func
	UISync(); // 0x14f Func
	DestroyWindow(); // 0x151 Func
	var_120_string = "world_intro.xml"; // 0x153 PushS
	var_121_string = "player_intro.xml"; // 0x154 PushS
	NewGame(var_120_string, var_121_string); // 0x155 Func
	
Label_188:
	var_122_object = Obj(); // 0xbc PushV
	func_126(var_122_object); // 0xbd NEW_2
	var_3_bool = var_122_object; // 0xbe TMov
	var_127_object = Obj(); // 0xc0 PushV
	func_155(var_127_object); // 0xc1 NEW_2
	var_4_object = var_127_object; // 0xc2 TMov
}


func_352(var_2_int, var_3_bool, var_4_object, var_9_object, var_17_int, var_21_string, var_30_int, var_31_string, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0x160 PushV
	var_35_string = "newgame"; // 0x161 PushS
	var_36_bool = var_31_string == var_35_string; // 0x162 Eq
	if(var_36_bool == 0) goto Label_360; // 0x163 JumpB
	var_2_int = 7; // 0x164 TMovI
	StopEventProcessing(); // 0x165 Func
	goto Label_609; // 0x167 Jump
	
Label_609:
	return 2; // 0x261 Return
	
Label_360:
	var_37_string = "quitgame"; // 0x168 PushS
	var_38_bool = var_31_string == var_37_string; // 0x169 Eq
	if(var_38_bool == 0) goto Label_370; // 0x16a JumpB
	var_39_string = "Quit game"; // 0x16b PushS
	UITrace(var_39_string); // 0x16c Func
	Quit(); // 0x16e Func
	return 2; // 0x170 Return
	
Label_370:
	var_40_string = "loadgame"; // 0x172 PushS
	var_41_bool = var_31_string == var_40_string; // 0x173 Eq
	if(var_41_bool == 0) goto Label_382; // 0x174 JumpB
	func_622(); // 0x176 NEW_2
	var_48_string = "load.xml"; // 0x178 PushS
	var_49_bool = 0; // 0x179 PushB
	CreateWindow(var_48_string, var_49_bool, var_31_string); // 0x17a Func
	return 2; // 0x17c Return
	
Label_382:
	var_50_string = "savegame"; // 0x17e PushS
	var_51_bool = var_31_string == var_50_string; // 0x17f Eq
	if(var_51_bool == 0) goto Label_394; // 0x180 JumpB
	func_622(); // 0x182 NEW_2
	var_52_string = "save.xml"; // 0x184 PushS
	var_53_bool = 0; // 0x185 PushB
	CreateWindow(var_52_string, var_53_bool, var_30_int); // 0x186 Func
	return 2; // 0x188 Return
	
Label_394:
	var_54_string = "gameoptions"; // 0x18a PushS
	var_55_bool = var_31_string == var_54_string; // 0x18b Eq
	if(var_55_bool == 0) goto Label_406; // 0x18c JumpB
	func_622(); // 0x18e NEW_2
	var_56_string = "options.xml"; // 0x190 PushS
	var_57_bool = 0; // 0x191 PushB
	CreateWindow(var_56_string, var_57_bool, var_21_string); // 0x192 Func
	return 2; // 0x194 Return
	
Label_406:
	var_58_string = "continue"; // 0x196 PushS
	var_59_bool = var_31_string == var_58_string; // 0x197 Eq
	if(var_59_bool == 0) goto Label_414; // 0x198 JumpB
	var_2_int = 6; // 0x199 TMovI
	StopEventProcessing(); // 0x19a Func
	return 2; // 0x19c Return
	
Label_414:
	var_60_string = "credits"; // 0x19e PushS
	var_61_bool = var_31_string == var_60_string; // 0x19f Eq
	if(var_61_bool == 0) goto Label_438; // 0x1a0 JumpB
	func_622(); // 0x1a2 NEW_2
	var_62_int = 0; // 0x1a4 PushV
	var_62_int = 8; // 0x1a5 MovI
	TaskCall(1); // 0x1a6 TaskCall
	func_65(var_63_object, var_62_int); // 0x1a7 NEW_2
	TaskReturn(); // 0x1a8 TaskReturn
	var_67_object = Obj(); // 0x1aa PushV
	func_126(var_67_object); // 0x1ab NEW_2
	var_3_bool = var_67_object; // 0x1ac TMov
	var_72_object = Obj(); // 0x1ae PushV
	func_155(var_72_object); // 0x1af NEW_2
	var_4_object = var_72_object; // 0x1b0 TMov
	var_77_bool = 1; // 0x1b2 PushB
	ShowCursor(var_77_bool); // 0x1b3 Func
	goto Label_609; // 0x1b5 Jump
	
Label_438:
	var_78_string = "danko"; // 0x1b6 PushS
	var_79_bool = var_31_string == var_78_string; // 0x1b7 Eq
	if(var_79_bool == 0) goto Label_473; // 0x1b8 JumpB
	var_80_int = 0; // 0x1b9 PushI
	var_81_bool = var_30_int == var_80_int; // 0x1ba Eq
	if(var_81_bool == 0) goto Label_448; // 0x1bb JumpB
	var_2_int = 1; // 0x1bc TMovI
	StopEventProcessing(); // 0x1bd Func
	goto Label_471; // 0x1bf Jump
	
Label_471:
	return 2; // 0x1d7 Return
	
Label_448:
	var_82_int = 1; // 0x1c0 PushI
	var_83_bool = var_30_int == var_82_int; // 0x1c1 Eq
	if(var_83_bool == 0) goto Label_460; // 0x1c2 JumpB
	var_84_int = 202; // 0x1c3 PushI
	var_85_string = "player_name"; // 0x1c4 PushS
	SendMessage(var_84_int, var_85_string); // 0x1c5 Func
	var_86_int = 203; // 0x1c7 PushI
	var_87_string = "player_desc"; // 0x1c8 PushS
	SendMessage(var_86_int, var_87_string); // 0x1c9 Func
	goto Label_471; // 0x1cb Jump
	
Label_460:
	var_88_int = 2; // 0x1cc PushI
	var_89_bool = var_30_int == var_88_int; // 0x1cd Eq
	if(var_89_bool == 0) goto Label_471; // 0x1ce JumpB
	var_90_int = -1; // 0x1cf PushI
	var_91_string = "player_name"; // 0x1d0 PushS
	SendMessage(var_90_int, var_91_string); // 0x1d1 Func
	var_92_int = -1; // 0x1d3 PushI
	var_93_string = "player_desc"; // 0x1d4 PushS
	SendMessage(var_92_int, var_93_string); // 0x1d5 Func
	
Label_473:
	var_94_string = "burah"; // 0x1d9 PushS
	var_95_bool = var_31_string == var_94_string; // 0x1da Eq
	if(var_95_bool == 0) goto Label_508; // 0x1db JumpB
	var_96_int = 0; // 0x1dc PushI
	var_97_bool = var_30_int == var_96_int; // 0x1dd Eq
	if(var_97_bool == 0) goto Label_483; // 0x1de JumpB
	var_2_int = 2; // 0x1df TMovI
	StopEventProcessing(); // 0x1e0 Func
	goto Label_506; // 0x1e2 Jump
	
Label_506:
	return 2; // 0x1fa Return
	
Label_483:
	var_98_int = 1; // 0x1e3 PushI
	var_99_bool = var_30_int == var_98_int; // 0x1e4 Eq
	if(var_99_bool == 0) goto Label_495; // 0x1e5 JumpB
	var_100_int = 205; // 0x1e6 PushI
	var_101_string = "player_name"; // 0x1e7 PushS
	SendMessage(var_100_int, var_101_string); // 0x1e8 Func
	var_102_int = 206; // 0x1ea PushI
	var_103_string = "player_desc"; // 0x1eb PushS
	SendMessage(var_102_int, var_103_string); // 0x1ec Func
	goto Label_506; // 0x1ee Jump
	
Label_495:
	var_104_int = 2; // 0x1ef PushI
	var_105_bool = var_30_int == var_104_int; // 0x1f0 Eq
	if(var_105_bool == 0) goto Label_506; // 0x1f1 JumpB
	var_106_int = -1; // 0x1f2 PushI
	var_107_string = "player_name"; // 0x1f3 PushS
	SendMessage(var_106_int, var_107_string); // 0x1f4 Func
	var_108_int = -1; // 0x1f6 PushI
	var_109_string = "player_desc"; // 0x1f7 PushS
	SendMessage(var_108_int, var_109_string); // 0x1f8 Func
	
Label_508:
	var_110_string = "klara"; // 0x1fc PushS
	var_111_bool = var_31_string == var_110_string; // 0x1fd Eq
	if(var_111_bool == 0) goto Label_569; // 0x1fe JumpB
	var_34_bool = 1; // 0x1ff MovB
	var_112_bool = 0; // 0x200 PushV
	var_112_bool = 0; // 0x201 MovB
	var_113_bool = 0; // 0x202 PushV
	func_657(var_113_bool); // 0x203 NEW_2
	var_119_bool = var_113_bool == 0; // 0x205 Not
	if(var_119_bool == 0) goto Label_525; // 0x206 JumpB
	var_120_bool = 0; // 0x207 PushV
	func_649(var_120_bool); // 0x208 NEW_2
	var_126_bool = var_120_bool == 0; // 0x20a Not
	if(var_126_bool == 0) goto Label_525; // 0x20b JumpB
	var_112_bool = 1; // 0x20c MovB
	
Label_525:
	if(var_112_bool == 0) goto Label_527; // 0x20d JumpB
	var_34_bool = 0; // 0x20e MovB
	
Label_527:
	var_127_int = 0; // 0x20f PushI
	var_128_bool = var_30_int == var_127_int; // 0x210 Eq
	if(var_128_bool == 0) goto Label_537; // 0x211 JumpB
	var_129_bool = var_34_bool == 0; // 0x212 Not
	if(var_129_bool == 0) goto Label_533; // 0x213 JumpB
	return 2; // 0x214 Return
	
Label_533:
	var_2_int = 3; // 0x215 TMovI
	StopEventProcessing(); // 0x216 Func
	goto Label_567; // 0x218 Jump
	
Label_567:
	return 2; // 0x237 Return
	
Label_537:
	var_130_int = 1; // 0x219 PushI
	var_131_bool = var_30_int == var_130_int; // 0x21a Eq
	if(var_131_bool == 0) goto Label_556; // 0x21b JumpB
	var_132_int = 208; // 0x21c PushI
	var_133_string = "player_name"; // 0x21d PushS
	SendMessage(var_132_int, var_133_string); // 0x21e Func
	var_134_bool = var_34_bool; // 0x220 Push
	if(var_134_bool == 0) goto Label_551; // 0x221 JumpB
	var_135_int = 209; // 0x222 PushI
	var_136_string = "player_desc"; // 0x223 PushS
	SendMessage(var_135_int, var_136_string); // 0x224 Func
	goto Label_555; // 0x226 Jump
	
Label_555:
	goto Label_567; // 0x22b Jump
	
Label_551:
	var_137_int = 213; // 0x227 PushI
	var_138_string = "player_desc"; // 0x228 PushS
	SendMessage(var_137_int, var_138_string); // 0x229 Func
	
Label_556:
	var_139_int = 2; // 0x22c PushI
	var_140_bool = var_30_int == var_139_int; // 0x22d Eq
	if(var_140_bool == 0) goto Label_567; // 0x22e JumpB
	var_141_int = -1; // 0x22f PushI
	var_142_string = "player_name"; // 0x230 PushS
	SendMessage(var_141_int, var_142_string); // 0x231 Func
	var_143_int = -1; // 0x233 PushI
	var_144_string = "player_desc"; // 0x234 PushS
	SendMessage(var_143_int, var_144_string); // 0x235 Func
	
Label_569:
	var_145_string = "load"; // 0x239 PushS
	var_146_bool = var_31_string == var_145_string; // 0x23a Eq
	if(var_146_bool == 0) goto Label_586; // 0x23b JumpB
	var_147_int = 0; // 0x23c PushI
	var_148_bool = var_30_int == var_147_int; // 0x23d Eq
	if(var_148_bool == 0) goto Label_581; // 0x23e JumpB
	var_2_int = 4; // 0x23f TMovI
	GetFileName(var_17_int); // 0x240 ObjFunc
	StopEventProcessing(); // 0x242 Func
	goto Label_584; // 0x244 Jump
	
Label_584:
	return 2; // 0x248 Return
	
Label_581:
	func_610(var_33_bool, var_34_bool); // 0x246 NEW_2
	
Label_586:
	var_151_string = "save"; // 0x24a PushS
	var_152_bool = var_31_string == var_151_string; // 0x24b Eq
	if(var_152_bool == 0) goto Label_602; // 0x24c JumpB
	var_153_int = 0; // 0x24d PushI
	var_154_bool = var_30_int == var_153_int; // 0x24e Eq
	if(var_154_bool == 0) goto Label_597; // 0x24f JumpB
	var_2_int = 5; // 0x250 TMovI
	var_9_object = var_32_object; // 0x251 TMov
	StopEventProcessing(); // 0x252 Func
	goto Label_600; // 0x254 Jump
	
Label_600:
	return 2; // 0x258 Return
	
Label_597:
	func_610(var_33_bool, var_34_bool); // 0x256 NEW_2
	
Label_602:
	var_155_string = "options"; // 0x25a PushS
	var_156_bool = var_31_string == var_155_string; // 0x25b Eq
	if(var_156_bool == 0) goto Label_609; // 0x25c JumpB
	func_610(var_33_bool, var_34_bool); // 0x25e NEW_2
	return 2; // 0x260 Return
}


func_649(var_120_bool)
{
	var_121_int = 0; var_122_int = 0; // 0x289 PushV
	var_123_string = "BurahCompleted"; // 0x28a PushS
	var_124_int = 0; // 0x28b PushI
	GetRegistryData(var_122_int, var_123_string, var_124_int); // 0x28c Func
	var_125_int = 0; // 0x28e PushI
	var_120_bool = var_122_int != var_125_int; // 0x28f Neq2
	return 2; // 0x290 Return
}


func_622()
{
	var_65_bool = var_3_bool; // 0x26e PushT
	if(var_65_bool == 0) goto Label_626; // 0x26f JumpB
	DestroyWindow(); // 0x270 TObjFunc
	
Label_626:
	var_66_object = var_4_object; // 0x272 PushT
	if(var_66_object == 0) goto Label_630; // 0x273 JumpB
	DestroyWindow(); // 0x274 TObjFunc
	
Label_630:
	var_67_int = var_5_int; // 0x276 PushT
	if(var_67_int == 0) goto Label_634; // 0x277 JumpB
	DestroyWindow(); // 0x278 TObjFunc
	
Label_634:
	var_68_int = var_6_int; // 0x27a PushT
	if(var_68_int == 0) goto Label_638; // 0x27b JumpB
	DestroyWindow(); // 0x27c TObjFunc
	
Label_638:
	var_69_int = var_7_int; // 0x27e PushT
	if(var_69_int == 0) goto Label_642; // 0x27f JumpB
	DestroyWindow(); // 0x280 TObjFunc
	
Label_642:
	var_70_object = var_8_object; // 0x282 PushT
	if(var_70_object == 0) goto Label_646; // 0x283 JumpB
	DestroyWindow(); // 0x284 TObjFunc
	
Label_646:
	CaptureKeyboard(); // 0x286 Func
	return 0; // 0x288 Return
}


func_657(var_113_bool)
{
	var_114_int = 0; var_115_int = 0; // 0x291 PushV
	var_116_string = "DankoCompleted"; // 0x292 PushS
	var_117_int = 0; // 0x293 PushI
	GetRegistryData(var_115_int, var_116_string, var_117_int); // 0x294 Func
	var_118_int = 0; // 0x296 PushI
	var_113_bool = var_115_int != var_118_int; // 0x297 Neq2
	return 2; // 0x298 Return
}


func_665(var_25_string)
{
	var_26_bool = 0; var_27_bool = 0; // 0x299 PushV
	var_28_string = "loading map: "; // 0x29a PushS
	var_29_int = var_28_string + var_25_string; // 0x29b Add
	UITrace(var_29_int); // 0x29c Func
	LoadMap(var_27_bool, var_25_string); // 0x29e Func
	return 2; // 0x2a0 Return
}


func_155(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0x9b PushV
	var_130_string = "game_logo.xml"; // 0x9c PushS
	var_131_bool = 0; // 0x9d PushB
	CreateWindow(var_130_string, var_131_bool, var_129_object); // 0x9e Func
	var_127_object = var_129_object; // 0xa0 Mov
	return 2; // 0xa1 Return
}


func_126(var_122_object)
{
	var_123_object = Obj(); var_124_object = Obj(); // 0x7e PushV
	var_125_string = "game_buttons.xml"; // 0x7f PushS
	var_126_bool = 0; // 0x80 PushB
	CreateWindow(var_125_string, var_126_bool, var_124_object); // 0x81 Func
	var_122_object = var_124_object; // 0x83 Mov
	return 2; // 0x84 Return
}


