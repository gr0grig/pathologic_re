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
	var_18_int = 27; // 0x129 PushI
	var_19_bool = var_17_int == var_18_int; // 0x12a Eq
	if(var_19_bool == 0) goto Label_303; // 0x12b JumpB
	func_562(var_16_object, var_17_int); // 0x12d NEW_2
	
Label_303:
	return 0; // 0x12f Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x130 PushV
	var_22_string = "newgame"; // 0x131 PushS
	var_23_bool = var_18_string == var_22_string; // 0x132 Eq
	if(var_23_bool == 0) goto Label_312; // 0x133 JumpB
	var_2_int = 7; // 0x134 TMovI
	StopEventProcessing(); // 0x135 Func
	goto Label_561; // 0x137 Jump
	
Label_561:
	return 2; // 0x231 Return
	
Label_312:
	var_24_string = "quitgame"; // 0x138 PushS
	var_25_bool = var_18_string == var_24_string; // 0x139 Eq
	if(var_25_bool == 0) goto Label_322; // 0x13a JumpB
	var_26_string = "Quit game"; // 0x13b PushS
	UITrace(var_26_string); // 0x13c Func
	Quit(); // 0x13e Func
	return 2; // 0x140 Return
	
Label_322:
	var_27_string = "loadgame"; // 0x142 PushS
	var_28_bool = var_18_string == var_27_string; // 0x143 Eq
	if(var_28_bool == 0) goto Label_334; // 0x144 JumpB
	func_574(); // 0x146 NEW_2
	var_35_string = "load.xml"; // 0x148 PushS
	var_36_bool = 0; // 0x149 PushB
	CreateWindow(var_35_string, var_36_bool, var_18_string); // 0x14a Func
	return 2; // 0x14c Return
	
Label_334:
	var_37_string = "savegame"; // 0x14e PushS
	var_38_bool = var_18_string == var_37_string; // 0x14f Eq
	if(var_38_bool == 0) goto Label_346; // 0x150 JumpB
	func_574(); // 0x152 NEW_2
	var_39_string = "save.xml"; // 0x154 PushS
	var_40_bool = 0; // 0x155 PushB
	CreateWindow(var_39_string, var_40_bool, var_17_int); // 0x156 Func
	return 2; // 0x158 Return
	
Label_346:
	var_41_string = "gameoptions"; // 0x15a PushS
	var_42_bool = var_18_string == var_41_string; // 0x15b Eq
	if(var_42_bool == 0) goto Label_358; // 0x15c JumpB
	func_574(); // 0x15e NEW_2
	var_43_string = "options.xml"; // 0x160 PushS
	var_44_bool = 0; // 0x161 PushB
	CreateWindow(var_43_string, var_44_bool, var_16_object); // 0x162 Func
	return 2; // 0x164 Return
	
Label_358:
	var_45_string = "continue"; // 0x166 PushS
	var_46_bool = var_18_string == var_45_string; // 0x167 Eq
	if(var_46_bool == 0) goto Label_366; // 0x168 JumpB
	var_2_int = 6; // 0x169 TMovI
	StopEventProcessing(); // 0x16a Func
	return 2; // 0x16c Return
	
Label_366:
	var_47_string = "credits"; // 0x16e PushS
	var_48_bool = var_18_string == var_47_string; // 0x16f Eq
	if(var_48_bool == 0) goto Label_390; // 0x170 JumpB
	func_574(); // 0x172 NEW_2
	var_49_int = 0; // 0x174 PushV
	var_49_int = 8; // 0x175 MovI
	TaskCall(1); // 0x176 TaskCall
	func_65(var_50_object, var_49_int); // 0x177 NEW_2
	TaskReturn(); // 0x178 TaskReturn
	var_54_object = Obj(); // 0x17a PushV
	func_99(var_54_object); // 0x17b NEW_2
	var_3_bool = var_54_object; // 0x17c TMov
	var_59_object = Obj(); // 0x17e PushV
	func_107(var_59_object); // 0x17f NEW_2
	var_4_object = var_59_object; // 0x180 TMov
	var_64_bool = 1; // 0x182 PushB
	ShowCursor(var_64_bool); // 0x183 Func
	goto Label_561; // 0x185 Jump
	
Label_390:
	var_65_string = "danko"; // 0x186 PushS
	var_66_bool = var_18_string == var_65_string; // 0x187 Eq
	if(var_66_bool == 0) goto Label_425; // 0x188 JumpB
	var_67_int = 0; // 0x189 PushI
	var_68_bool = var_17_int == var_67_int; // 0x18a Eq
	if(var_68_bool == 0) goto Label_400; // 0x18b JumpB
	var_2_int = 1; // 0x18c TMovI
	StopEventProcessing(); // 0x18d Func
	goto Label_423; // 0x18f Jump
	
Label_423:
	return 2; // 0x1a7 Return
	
Label_400:
	var_69_int = 1; // 0x190 PushI
	var_70_bool = var_17_int == var_69_int; // 0x191 Eq
	if(var_70_bool == 0) goto Label_412; // 0x192 JumpB
	var_71_int = 202; // 0x193 PushI
	var_72_string = "player_name"; // 0x194 PushS
	SendMessage(var_71_int, var_72_string); // 0x195 Func
	var_73_int = 203; // 0x197 PushI
	var_74_string = "player_desc"; // 0x198 PushS
	SendMessage(var_73_int, var_74_string); // 0x199 Func
	goto Label_423; // 0x19b Jump
	
Label_412:
	var_75_int = 2; // 0x19c PushI
	var_76_bool = var_17_int == var_75_int; // 0x19d Eq
	if(var_76_bool == 0) goto Label_423; // 0x19e JumpB
	var_77_int = -1; // 0x19f PushI
	var_78_string = "player_name"; // 0x1a0 PushS
	SendMessage(var_77_int, var_78_string); // 0x1a1 Func
	var_79_int = -1; // 0x1a3 PushI
	var_80_string = "player_desc"; // 0x1a4 PushS
	SendMessage(var_79_int, var_80_string); // 0x1a5 Func
	
Label_425:
	var_81_string = "burah"; // 0x1a9 PushS
	var_82_bool = var_18_string == var_81_string; // 0x1aa Eq
	if(var_82_bool == 0) goto Label_460; // 0x1ab JumpB
	var_83_int = 0; // 0x1ac PushI
	var_84_bool = var_17_int == var_83_int; // 0x1ad Eq
	if(var_84_bool == 0) goto Label_435; // 0x1ae JumpB
	var_2_int = 2; // 0x1af TMovI
	StopEventProcessing(); // 0x1b0 Func
	goto Label_458; // 0x1b2 Jump
	
Label_458:
	return 2; // 0x1ca Return
	
Label_435:
	var_85_int = 1; // 0x1b3 PushI
	var_86_bool = var_17_int == var_85_int; // 0x1b4 Eq
	if(var_86_bool == 0) goto Label_447; // 0x1b5 JumpB
	var_87_int = 205; // 0x1b6 PushI
	var_88_string = "player_name"; // 0x1b7 PushS
	SendMessage(var_87_int, var_88_string); // 0x1b8 Func
	var_89_int = 206; // 0x1ba PushI
	var_90_string = "player_desc"; // 0x1bb PushS
	SendMessage(var_89_int, var_90_string); // 0x1bc Func
	goto Label_458; // 0x1be Jump
	
Label_447:
	var_91_int = 2; // 0x1bf PushI
	var_92_bool = var_17_int == var_91_int; // 0x1c0 Eq
	if(var_92_bool == 0) goto Label_458; // 0x1c1 JumpB
	var_93_int = -1; // 0x1c2 PushI
	var_94_string = "player_name"; // 0x1c3 PushS
	SendMessage(var_93_int, var_94_string); // 0x1c4 Func
	var_95_int = -1; // 0x1c6 PushI
	var_96_string = "player_desc"; // 0x1c7 PushS
	SendMessage(var_95_int, var_96_string); // 0x1c8 Func
	
Label_460:
	var_97_string = "klara"; // 0x1cc PushS
	var_98_bool = var_18_string == var_97_string; // 0x1cd Eq
	if(var_98_bool == 0) goto Label_521; // 0x1ce JumpB
	var_21_bool = 1; // 0x1cf MovB
	var_99_bool = 0; // 0x1d0 PushV
	var_99_bool = 0; // 0x1d1 MovB
	var_100_bool = 0; // 0x1d2 PushV
	func_609(var_100_bool); // 0x1d3 NEW_2
	var_106_bool = var_100_bool == 0; // 0x1d5 Not
	if(var_106_bool == 0) goto Label_477; // 0x1d6 JumpB
	var_107_bool = 0; // 0x1d7 PushV
	func_601(var_107_bool); // 0x1d8 NEW_2
	var_113_bool = var_107_bool == 0; // 0x1da Not
	if(var_113_bool == 0) goto Label_477; // 0x1db JumpB
	var_99_bool = 1; // 0x1dc MovB
	
Label_477:
	if(var_99_bool == 0) goto Label_479; // 0x1dd JumpB
	var_21_bool = 0; // 0x1de MovB
	
Label_479:
	var_114_int = 0; // 0x1df PushI
	var_115_bool = var_17_int == var_114_int; // 0x1e0 Eq
	if(var_115_bool == 0) goto Label_489; // 0x1e1 JumpB
	var_116_bool = var_21_bool == 0; // 0x1e2 Not
	if(var_116_bool == 0) goto Label_485; // 0x1e3 JumpB
	return 2; // 0x1e4 Return
	
Label_485:
	var_2_int = 3; // 0x1e5 TMovI
	StopEventProcessing(); // 0x1e6 Func
	goto Label_519; // 0x1e8 Jump
	
Label_519:
	return 2; // 0x207 Return
	
Label_489:
	var_117_int = 1; // 0x1e9 PushI
	var_118_bool = var_17_int == var_117_int; // 0x1ea Eq
	if(var_118_bool == 0) goto Label_508; // 0x1eb JumpB
	var_119_int = 208; // 0x1ec PushI
	var_120_string = "player_name"; // 0x1ed PushS
	SendMessage(var_119_int, var_120_string); // 0x1ee Func
	var_121_bool = var_21_bool; // 0x1f0 Push
	if(var_121_bool == 0) goto Label_503; // 0x1f1 JumpB
	var_122_int = 209; // 0x1f2 PushI
	var_123_string = "player_desc"; // 0x1f3 PushS
	SendMessage(var_122_int, var_123_string); // 0x1f4 Func
	goto Label_507; // 0x1f6 Jump
	
Label_507:
	goto Label_519; // 0x1fb Jump
	
Label_503:
	var_124_int = 213; // 0x1f7 PushI
	var_125_string = "player_desc"; // 0x1f8 PushS
	SendMessage(var_124_int, var_125_string); // 0x1f9 Func
	
Label_508:
	var_126_int = 2; // 0x1fc PushI
	var_127_bool = var_17_int == var_126_int; // 0x1fd Eq
	if(var_127_bool == 0) goto Label_519; // 0x1fe JumpB
	var_128_int = -1; // 0x1ff PushI
	var_129_string = "player_name"; // 0x200 PushS
	SendMessage(var_128_int, var_129_string); // 0x201 Func
	var_130_int = -1; // 0x203 PushI
	var_131_string = "player_desc"; // 0x204 PushS
	SendMessage(var_130_int, var_131_string); // 0x205 Func
	
Label_521:
	var_132_string = "load"; // 0x209 PushS
	var_133_bool = var_18_string == var_132_string; // 0x20a Eq
	if(var_133_bool == 0) goto Label_538; // 0x20b JumpB
	var_134_int = 0; // 0x20c PushI
	var_135_bool = var_17_int == var_134_int; // 0x20d Eq
	if(var_135_bool == 0) goto Label_533; // 0x20e JumpB
	var_2_int = 4; // 0x20f TMovI
	GetFileName(var_12_object); // 0x210 ObjFunc
	StopEventProcessing(); // 0x212 Func
	goto Label_536; // 0x214 Jump
	
Label_536:
	return 2; // 0x218 Return
	
Label_533:
	func_562(var_20_bool, var_21_bool); // 0x216 NEW_2
	
Label_538:
	var_138_string = "save"; // 0x21a PushS
	var_139_bool = var_18_string == var_138_string; // 0x21b Eq
	if(var_139_bool == 0) goto Label_554; // 0x21c JumpB
	var_140_int = 0; // 0x21d PushI
	var_141_bool = var_17_int == var_140_int; // 0x21e Eq
	if(var_141_bool == 0) goto Label_549; // 0x21f JumpB
	var_2_int = 5; // 0x220 TMovI
	var_9_object = var_19_object; // 0x221 TMov
	StopEventProcessing(); // 0x222 Func
	goto Label_552; // 0x224 Jump
	
Label_552:
	return 2; // 0x228 Return
	
Label_549:
	func_562(var_20_bool, var_21_bool); // 0x226 NEW_2
	
Label_554:
	var_142_string = "options"; // 0x22a PushS
	var_143_bool = var_18_string == var_142_string; // 0x22b Eq
	if(var_143_bool == 0) goto Label_561; // 0x22c JumpB
	func_562(var_20_bool, var_21_bool); // 0x22e NEW_2
	return 2; // 0x230 Return
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
	func_115(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_23_bool); // 0x60 NEW_2
	return 0; // 0x62 Return
}


func_0(var_0_object, var_3_bool, var_51_string, var_52_bool)
{
	var_3_bool = var_52_bool; // 0x1 TMov
	var_57_bool = 1; // 0x2 PushB
	SetOwnerDraw(var_57_bool); // 0x3 Func
	var_58_bool = 0; // 0x5 PushB
	ShowCursor(var_58_bool); // 0x6 Func
	CaptureKeyboard(); // 0x8 Func
	GetWindowSize(var_52_bool, var_51_string); // 0xa Func
	LoadVideo(var_51_string); // 0xc Func
	FindVideo(var_0_object, var_51_string); // 0xe Func
	var_59_bool = 0; // 0x10 PushB
	Play(var_59_bool); // 0x11 TObjFunc
	ProcessEvents(); // 0x13 Func
	var_60_bool = 0; // 0x15 PushB
	SetOwnerDraw(var_60_bool); // 0x16 Func
	var_61_bool = 1; // 0x18 PushB
	ShowCursor(var_61_bool); // 0x19 Func
	ReleaseVideo(var_51_string); // 0x1b Func
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


func_609(var_100_bool)
{
	var_101_int = 0; var_102_int = 0; // 0x261 PushV
	var_103_string = "DankoCompleted"; // 0x262 PushS
	var_104_int = 0; // 0x263 PushI
	GetRegistryData(var_102_int, var_103_string, var_104_int); // 0x264 Func
	var_105_int = 0; // 0x266 PushI
	var_100_bool = var_102_int != var_105_int; // 0x267 Neq2
	return 2; // 0x268 Return
}


func_99(var_102_object)
{
	var_103_object = Obj(); var_104_object = Obj(); // 0x63 PushV
	var_105_string = "game_buttons.xml"; // 0x64 PushS
	var_106_bool = 0; // 0x65 PushB
	CreateWindow(var_105_string, var_106_bool, var_104_object); // 0x66 Func
	var_102_object = var_104_object; // 0x68 Mov
	return 2; // 0x69 Return
}


func_107(var_107_object)
{
	var_108_object = Obj(); var_109_object = Obj(); // 0x6b PushV
	var_110_string = "game_logo.xml"; // 0x6c PushS
	var_111_bool = 0; // 0x6d PushB
	CreateWindow(var_110_string, var_111_bool, var_109_object); // 0x6e Func
	var_107_object = var_109_object; // 0x70 Mov
	return 2; // 0x71 Return
}


func_562(var_3_bool, var_4_object)
{
	func_574(); // 0x233 NEW_2
	var_136_object = Obj(); // 0x235 PushV
	func_99(var_136_object); // 0x236 NEW_2
	var_3_bool = var_136_object; // 0x237 TMov
	var_137_object = Obj(); // 0x239 PushV
	func_107(var_137_object); // 0x23a NEW_2
	var_4_object = var_137_object; // 0x23b TMov
	return 0; // 0x23d Return
}


func_115(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_16_object, var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; var_26_bool = 0; var_27_string = ""; var_28_bool = 0; var_29_bool = 0; var_30_bool = 0; var_31_string = ""; // 0x73 PushV
	CaptureKeyboard(); // 0x74 Func
	var_2_int = 0; // 0x76 TMovI
	GetWindowSize(var_0_object, var_31_string); // 0x77 Func
	var_32_string = "default"; // 0x79 PushS
	SetCursor(var_32_string); // 0x7a Func
	var_33_string = "default"; // 0x7c PushS
	SetBackground(var_33_string); // 0x7d Func
	var_34_string = "menumusic"; // 0x7f PushS
	PlaySound(var_34_string); // 0x80 Func
	var_35_bool = 1; // 0x82 PushB
	ShowCursor(var_35_bool); // 0x83 Func
	var_36_bool = var_23_bool; // 0x85 Push
	if(var_36_bool == 0) goto Label_140; // 0x86 JumpB
	var_37_string = "game_choose_pers.xml"; // 0x87 PushS
	var_38_bool = 0; // 0x88 PushB
	CreateWindow(var_37_string, var_38_bool, var_29_bool); // 0x89 Func
	goto Label_148; // 0x8b Jump
	
Label_148:
	var_39_bool = var_2_int == 0; // 0x94 Not
	if(var_39_bool == 0) goto Label_153; // 0x95 JumpB
	ProcessEvents(); // 0x96 Func
	goto Label_148; // 0x98 Jump
	
Label_153:
	func_574(); // 0x9a NEW_2
	var_46_int = 1; // 0x9c PushI
	var_47_bool = var_2_int == var_46_int; // 0x9d Eq
	if(var_47_bool == 0) goto Label_186; // 0x9e JumpB
	var_48_string = "menumusic"; // 0x9f PushS
	PauseSound(var_48_string); // 0xa0 Func
	var_49_int = 0; // 0xa2 PushV
	var_49_int = 1; // 0xa3 MovI
	TaskCall(1); // 0xa4 TaskCall
	func_65(var_50_object, var_49_int); // 0xa5 NEW_2
	TaskReturn(); // 0xa6 TaskReturn
	var_51_string = ""; var_52_bool = 0; // 0xa8 PushV
	var_51_string = "intro_danko.wmv"; // 0xa9 MovS
	var_52_bool = 1; // 0xaa MovB
	TaskCall(0); // 0xab TaskCall
	func_0(var_55_int, var_56_bool, var_51_string, var_52_bool); // 0xac NEW_2
	TaskReturn(); // 0xad TaskReturn
	RemoveWorld(); // 0xaf Func
	UISync(); // 0xb1 Func
	DestroyWindow(); // 0xb3 Func
	var_62_string = "world_danko.xml"; // 0xb5 PushS
	var_63_string = "player_danko.xml"; // 0xb6 PushS
	NewGame(var_62_string, var_63_string); // 0xb7 Func
	goto Label_295; // 0xb9 Jump
	
Label_295:
	return 8; // 0x127 Return
	
Label_186:
	var_64_int = 2; // 0xba PushI
	var_65_bool = var_2_int == var_64_int; // 0xbb Eq
	if(var_65_bool == 0) goto Label_216; // 0xbc JumpB
	var_66_string = "menumusic"; // 0xbd PushS
	PauseSound(var_66_string); // 0xbe Func
	var_67_int = 0; // 0xc0 PushV
	var_67_int = 2; // 0xc1 MovI
	TaskCall(1); // 0xc2 TaskCall
	func_65(var_68_object, var_67_int); // 0xc3 NEW_2
	TaskReturn(); // 0xc4 TaskReturn
	var_69_string = ""; var_70_bool = 0; // 0xc6 PushV
	var_69_string = "intro_burah.wmv"; // 0xc7 MovS
	var_70_bool = 1; // 0xc8 MovB
	TaskCall(0); // 0xc9 TaskCall
	func_0(var_73_int, var_74_bool, var_69_string, var_70_bool); // 0xca NEW_2
	TaskReturn(); // 0xcb TaskReturn
	RemoveWorld(); // 0xcd Func
	UISync(); // 0xcf Func
	DestroyWindow(); // 0xd1 Func
	var_75_string = "world_burah.xml"; // 0xd3 PushS
	var_76_string = "player_burah.xml"; // 0xd4 PushS
	NewGame(var_75_string, var_76_string); // 0xd5 Func
	goto Label_295; // 0xd7 Jump
	
Label_216:
	var_77_int = 3; // 0xd8 PushI
	var_78_bool = var_2_int == var_77_int; // 0xd9 Eq
	if(var_78_bool == 0) goto Label_246; // 0xda JumpB
	var_79_string = "menumusic"; // 0xdb PushS
	PauseSound(var_79_string); // 0xdc Func
	var_80_int = 0; // 0xde PushV
	var_80_int = 3; // 0xdf MovI
	TaskCall(1); // 0xe0 TaskCall
	func_65(var_81_object, var_80_int); // 0xe1 NEW_2
	TaskReturn(); // 0xe2 TaskReturn
	var_82_string = ""; var_83_bool = 0; // 0xe4 PushV
	var_82_string = "intro_klara.wmv"; // 0xe5 MovS
	var_83_bool = 1; // 0xe6 MovB
	TaskCall(0); // 0xe7 TaskCall
	func_0(var_86_int, var_87_bool, var_82_string, var_83_bool); // 0xe8 NEW_2
	TaskReturn(); // 0xe9 TaskReturn
	RemoveWorld(); // 0xeb Func
	UISync(); // 0xed Func
	DestroyWindow(); // 0xef Func
	var_88_string = "world_klara.xml"; // 0xf1 PushS
	var_89_string = "player_klara.xml"; // 0xf2 PushS
	NewGame(var_88_string, var_89_string); // 0xf3 Func
	goto Label_295; // 0xf5 Jump
	
Label_246:
	var_90_int = 4; // 0xf6 PushI
	var_91_bool = var_2_int == var_90_int; // 0xf7 Eq
	if(var_91_bool == 0) goto Label_265; // 0xf8 JumpB
	var_92_string = "menumusic"; // 0xf9 PushS
	PauseSound(var_92_string); // 0xfa Func
	var_93_string = "Loading : "; // 0xfc PushS
	var_94_int = var_93_string + var_10_object; // 0xfd Add
	Trace(var_94_int); // 0xfe Func
	RemoveWorld(); // 0x100 Func
	UISync(); // 0x102 Func
	DestroyWindow(); // 0x104 Func
	LoadGame(var_28_bool, var_16_object); // 0x106 Func
	goto Label_295; // 0x108 Jump
	
Label_265:
	var_95_int = 5; // 0x109 PushI
	var_96_bool = var_2_int == var_95_int; // 0x10a Eq
	if(var_96_bool == 0) goto Label_282; // 0x10b JumpB
	var_97_bool = var_9_object == 0; // 0x10c Not
	if(var_97_bool == 0) goto Label_275; // 0x10d JumpB
	DestroyWindow(); // 0x10e Func
	SaveGame(var_29_bool); // 0x110 Func
	goto Label_281; // 0x112 Jump
	
Label_281:
	goto Label_295; // 0x119 Jump
	
Label_275:
	DestroyWindow(); // 0x113 Func
	GetFileName(var_31_string); // 0x115 TObjFunc
	SaveGame(var_30_bool, var_31_string); // 0x117 Func
	
Label_282:
	var_98_int = 7; // 0x11a PushI
	var_99_bool = var_2_int == var_98_int; // 0x11b Eq
	if(var_99_bool == 0) goto Label_295; // 0x11c JumpB
	RemoveWorld(); // 0x11d Func
	UISync(); // 0x11f Func
	DestroyWindow(); // 0x121 Func
	var_100_string = "world_intro.xml"; // 0x123 PushS
	var_101_string = "player_intro.xml"; // 0x124 PushS
	NewGame(var_100_string, var_101_string); // 0x125 Func
	
Label_140:
	var_102_object = Obj(); // 0x8c PushV
	func_99(var_102_object); // 0x8d NEW_2
	var_3_bool = var_102_object; // 0x8e TMov
	var_107_object = Obj(); // 0x90 PushV
	func_107(var_107_object); // 0x91 NEW_2
	var_4_object = var_107_object; // 0x92 TMov
}


func_601(var_107_bool)
{
	var_108_int = 0; var_109_int = 0; // 0x259 PushV
	var_110_string = "BurahCompleted"; // 0x25a PushS
	var_111_int = 0; // 0x25b PushI
	GetRegistryData(var_109_int, var_110_string, var_111_int); // 0x25c Func
	var_112_int = 0; // 0x25e PushI
	var_107_bool = var_109_int != var_112_int; // 0x25f Neq2
	return 2; // 0x260 Return
}


func_574()
{
	var_40_bool = var_3_bool; // 0x23e PushT
	if(var_40_bool == 0) goto Label_578; // 0x23f JumpB
	DestroyWindow(); // 0x240 TObjFunc
	
Label_578:
	var_41_object = var_4_object; // 0x242 PushT
	if(var_41_object == 0) goto Label_582; // 0x243 JumpB
	DestroyWindow(); // 0x244 TObjFunc
	
Label_582:
	var_42_int = var_5_int; // 0x246 PushT
	if(var_42_int == 0) goto Label_586; // 0x247 JumpB
	DestroyWindow(); // 0x248 TObjFunc
	
Label_586:
	var_43_int = var_6_int; // 0x24a PushT
	if(var_43_int == 0) goto Label_590; // 0x24b JumpB
	DestroyWindow(); // 0x24c TObjFunc
	
Label_590:
	var_44_int = var_7_int; // 0x24e PushT
	if(var_44_int == 0) goto Label_594; // 0x24f JumpB
	DestroyWindow(); // 0x250 TObjFunc
	
Label_594:
	var_45_object = var_8_object; // 0x252 PushT
	if(var_45_object == 0) goto Label_598; // 0x253 JumpB
	DestroyWindow(); // 0x254 TObjFunc
	
Label_598:
	CaptureKeyboard(); // 0x256 Func
	return 0; // 0x258 Return
}


