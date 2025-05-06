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
	var_18_int = 27; // 0x136 PushI
	var_19_bool = var_17_int == var_18_int; // 0x137 Eq
	if(var_19_bool == 0) goto Label_316; // 0x138 JumpB
	func_575(var_16_object, var_17_int); // 0x13a NEW_2
	
Label_316:
	return 0; // 0x13c Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x13d PushV
	var_22_string = "newgame"; // 0x13e PushS
	var_23_bool = var_18_string == var_22_string; // 0x13f Eq
	if(var_23_bool == 0) goto Label_325; // 0x140 JumpB
	var_2_int = 7; // 0x141 TMovI
	StopEventProcessing(); // 0x142 Func
	goto Label_574; // 0x144 Jump
	
Label_574:
	return 2; // 0x23e Return
	
Label_325:
	var_24_string = "quitgame"; // 0x145 PushS
	var_25_bool = var_18_string == var_24_string; // 0x146 Eq
	if(var_25_bool == 0) goto Label_335; // 0x147 JumpB
	var_26_string = "Quit game"; // 0x148 PushS
	UITrace(var_26_string); // 0x149 Func
	Quit(); // 0x14b Func
	return 2; // 0x14d Return
	
Label_335:
	var_27_string = "loadgame"; // 0x14f PushS
	var_28_bool = var_18_string == var_27_string; // 0x150 Eq
	if(var_28_bool == 0) goto Label_347; // 0x151 JumpB
	func_587(); // 0x153 NEW_2
	var_35_string = "load.xml"; // 0x155 PushS
	var_36_bool = 0; // 0x156 PushB
	CreateWindow(var_35_string, var_36_bool, var_18_string); // 0x157 Func
	return 2; // 0x159 Return
	
Label_347:
	var_37_string = "savegame"; // 0x15b PushS
	var_38_bool = var_18_string == var_37_string; // 0x15c Eq
	if(var_38_bool == 0) goto Label_359; // 0x15d JumpB
	func_587(); // 0x15f NEW_2
	var_39_string = "save.xml"; // 0x161 PushS
	var_40_bool = 0; // 0x162 PushB
	CreateWindow(var_39_string, var_40_bool, var_17_int); // 0x163 Func
	return 2; // 0x165 Return
	
Label_359:
	var_41_string = "gameoptions"; // 0x167 PushS
	var_42_bool = var_18_string == var_41_string; // 0x168 Eq
	if(var_42_bool == 0) goto Label_371; // 0x169 JumpB
	func_587(); // 0x16b NEW_2
	var_43_string = "options.xml"; // 0x16d PushS
	var_44_bool = 0; // 0x16e PushB
	CreateWindow(var_43_string, var_44_bool, var_16_object); // 0x16f Func
	return 2; // 0x171 Return
	
Label_371:
	var_45_string = "continue"; // 0x173 PushS
	var_46_bool = var_18_string == var_45_string; // 0x174 Eq
	if(var_46_bool == 0) goto Label_379; // 0x175 JumpB
	var_2_int = 6; // 0x176 TMovI
	StopEventProcessing(); // 0x177 Func
	return 2; // 0x179 Return
	
Label_379:
	var_47_string = "credits"; // 0x17b PushS
	var_48_bool = var_18_string == var_47_string; // 0x17c Eq
	if(var_48_bool == 0) goto Label_403; // 0x17d JumpB
	func_587(); // 0x17f NEW_2
	var_49_int = 0; // 0x181 PushV
	var_49_int = 8; // 0x182 MovI
	TaskCall(1); // 0x183 TaskCall
	func_65(var_50_object, var_49_int); // 0x184 NEW_2
	TaskReturn(); // 0x185 TaskReturn
	var_54_object = Obj(); // 0x187 PushV
	func_112(var_54_object); // 0x188 NEW_2
	var_3_bool = var_54_object; // 0x189 TMov
	var_59_object = Obj(); // 0x18b PushV
	func_120(var_59_object); // 0x18c NEW_2
	var_4_object = var_59_object; // 0x18d TMov
	var_64_bool = 1; // 0x18f PushB
	ShowCursor(var_64_bool); // 0x190 Func
	goto Label_574; // 0x192 Jump
	
Label_403:
	var_65_string = "danko"; // 0x193 PushS
	var_66_bool = var_18_string == var_65_string; // 0x194 Eq
	if(var_66_bool == 0) goto Label_438; // 0x195 JumpB
	var_67_int = 0; // 0x196 PushI
	var_68_bool = var_17_int == var_67_int; // 0x197 Eq
	if(var_68_bool == 0) goto Label_413; // 0x198 JumpB
	var_2_int = 1; // 0x199 TMovI
	StopEventProcessing(); // 0x19a Func
	goto Label_436; // 0x19c Jump
	
Label_436:
	return 2; // 0x1b4 Return
	
Label_413:
	var_69_int = 1; // 0x19d PushI
	var_70_bool = var_17_int == var_69_int; // 0x19e Eq
	if(var_70_bool == 0) goto Label_425; // 0x19f JumpB
	var_71_int = 202; // 0x1a0 PushI
	var_72_string = "player_name"; // 0x1a1 PushS
	SendMessage(var_71_int, var_72_string); // 0x1a2 Func
	var_73_int = 203; // 0x1a4 PushI
	var_74_string = "player_desc"; // 0x1a5 PushS
	SendMessage(var_73_int, var_74_string); // 0x1a6 Func
	goto Label_436; // 0x1a8 Jump
	
Label_425:
	var_75_int = 2; // 0x1a9 PushI
	var_76_bool = var_17_int == var_75_int; // 0x1aa Eq
	if(var_76_bool == 0) goto Label_436; // 0x1ab JumpB
	var_77_int = -1; // 0x1ac PushI
	var_78_string = "player_name"; // 0x1ad PushS
	SendMessage(var_77_int, var_78_string); // 0x1ae Func
	var_79_int = -1; // 0x1b0 PushI
	var_80_string = "player_desc"; // 0x1b1 PushS
	SendMessage(var_79_int, var_80_string); // 0x1b2 Func
	
Label_438:
	var_81_string = "burah"; // 0x1b6 PushS
	var_82_bool = var_18_string == var_81_string; // 0x1b7 Eq
	if(var_82_bool == 0) goto Label_473; // 0x1b8 JumpB
	var_83_int = 0; // 0x1b9 PushI
	var_84_bool = var_17_int == var_83_int; // 0x1ba Eq
	if(var_84_bool == 0) goto Label_448; // 0x1bb JumpB
	var_2_int = 2; // 0x1bc TMovI
	StopEventProcessing(); // 0x1bd Func
	goto Label_471; // 0x1bf Jump
	
Label_471:
	return 2; // 0x1d7 Return
	
Label_448:
	var_85_int = 1; // 0x1c0 PushI
	var_86_bool = var_17_int == var_85_int; // 0x1c1 Eq
	if(var_86_bool == 0) goto Label_460; // 0x1c2 JumpB
	var_87_int = 205; // 0x1c3 PushI
	var_88_string = "player_name"; // 0x1c4 PushS
	SendMessage(var_87_int, var_88_string); // 0x1c5 Func
	var_89_int = 206; // 0x1c7 PushI
	var_90_string = "player_desc"; // 0x1c8 PushS
	SendMessage(var_89_int, var_90_string); // 0x1c9 Func
	goto Label_471; // 0x1cb Jump
	
Label_460:
	var_91_int = 2; // 0x1cc PushI
	var_92_bool = var_17_int == var_91_int; // 0x1cd Eq
	if(var_92_bool == 0) goto Label_471; // 0x1ce JumpB
	var_93_int = -1; // 0x1cf PushI
	var_94_string = "player_name"; // 0x1d0 PushS
	SendMessage(var_93_int, var_94_string); // 0x1d1 Func
	var_95_int = -1; // 0x1d3 PushI
	var_96_string = "player_desc"; // 0x1d4 PushS
	SendMessage(var_95_int, var_96_string); // 0x1d5 Func
	
Label_473:
	var_97_string = "klara"; // 0x1d9 PushS
	var_98_bool = var_18_string == var_97_string; // 0x1da Eq
	if(var_98_bool == 0) goto Label_534; // 0x1db JumpB
	var_21_bool = 1; // 0x1dc MovB
	var_99_bool = 0; // 0x1dd PushV
	var_99_bool = 0; // 0x1de MovB
	var_100_bool = 0; // 0x1df PushV
	func_622(var_100_bool); // 0x1e0 NEW_2
	var_106_bool = var_100_bool == 0; // 0x1e2 Not
	if(var_106_bool == 0) goto Label_490; // 0x1e3 JumpB
	var_107_bool = 0; // 0x1e4 PushV
	func_614(var_107_bool); // 0x1e5 NEW_2
	var_113_bool = var_107_bool == 0; // 0x1e7 Not
	if(var_113_bool == 0) goto Label_490; // 0x1e8 JumpB
	var_99_bool = 1; // 0x1e9 MovB
	
Label_490:
	if(var_99_bool == 0) goto Label_492; // 0x1ea JumpB
	var_21_bool = 0; // 0x1eb MovB
	
Label_492:
	var_114_int = 0; // 0x1ec PushI
	var_115_bool = var_17_int == var_114_int; // 0x1ed Eq
	if(var_115_bool == 0) goto Label_502; // 0x1ee JumpB
	var_116_bool = var_21_bool == 0; // 0x1ef Not
	if(var_116_bool == 0) goto Label_498; // 0x1f0 JumpB
	return 2; // 0x1f1 Return
	
Label_498:
	var_2_int = 3; // 0x1f2 TMovI
	StopEventProcessing(); // 0x1f3 Func
	goto Label_532; // 0x1f5 Jump
	
Label_532:
	return 2; // 0x214 Return
	
Label_502:
	var_117_int = 1; // 0x1f6 PushI
	var_118_bool = var_17_int == var_117_int; // 0x1f7 Eq
	if(var_118_bool == 0) goto Label_521; // 0x1f8 JumpB
	var_119_int = 208; // 0x1f9 PushI
	var_120_string = "player_name"; // 0x1fa PushS
	SendMessage(var_119_int, var_120_string); // 0x1fb Func
	var_121_bool = var_21_bool; // 0x1fd Push
	if(var_121_bool == 0) goto Label_516; // 0x1fe JumpB
	var_122_int = 209; // 0x1ff PushI
	var_123_string = "player_desc"; // 0x200 PushS
	SendMessage(var_122_int, var_123_string); // 0x201 Func
	goto Label_520; // 0x203 Jump
	
Label_520:
	goto Label_532; // 0x208 Jump
	
Label_516:
	var_124_int = 213; // 0x204 PushI
	var_125_string = "player_desc"; // 0x205 PushS
	SendMessage(var_124_int, var_125_string); // 0x206 Func
	
Label_521:
	var_126_int = 2; // 0x209 PushI
	var_127_bool = var_17_int == var_126_int; // 0x20a Eq
	if(var_127_bool == 0) goto Label_532; // 0x20b JumpB
	var_128_int = -1; // 0x20c PushI
	var_129_string = "player_name"; // 0x20d PushS
	SendMessage(var_128_int, var_129_string); // 0x20e Func
	var_130_int = -1; // 0x210 PushI
	var_131_string = "player_desc"; // 0x211 PushS
	SendMessage(var_130_int, var_131_string); // 0x212 Func
	
Label_534:
	var_132_string = "load"; // 0x216 PushS
	var_133_bool = var_18_string == var_132_string; // 0x217 Eq
	if(var_133_bool == 0) goto Label_551; // 0x218 JumpB
	var_134_int = 0; // 0x219 PushI
	var_135_bool = var_17_int == var_134_int; // 0x21a Eq
	if(var_135_bool == 0) goto Label_546; // 0x21b JumpB
	var_2_int = 4; // 0x21c TMovI
	GetFileName(var_12_object); // 0x21d ObjFunc
	StopEventProcessing(); // 0x21f Func
	goto Label_549; // 0x221 Jump
	
Label_549:
	return 2; // 0x225 Return
	
Label_546:
	func_575(var_20_bool, var_21_bool); // 0x223 NEW_2
	
Label_551:
	var_138_string = "save"; // 0x227 PushS
	var_139_bool = var_18_string == var_138_string; // 0x228 Eq
	if(var_139_bool == 0) goto Label_567; // 0x229 JumpB
	var_140_int = 0; // 0x22a PushI
	var_141_bool = var_17_int == var_140_int; // 0x22b Eq
	if(var_141_bool == 0) goto Label_562; // 0x22c JumpB
	var_2_int = 5; // 0x22d TMovI
	var_9_object = var_19_object; // 0x22e TMov
	StopEventProcessing(); // 0x22f Func
	goto Label_565; // 0x231 Jump
	
Label_565:
	return 2; // 0x235 Return
	
Label_562:
	func_575(var_20_bool, var_21_bool); // 0x233 NEW_2
	
Label_567:
	var_142_string = "options"; // 0x237 PushS
	var_143_bool = var_18_string == var_142_string; // 0x238 Eq
	if(var_143_bool == 0) goto Label_574; // 0x239 JumpB
	func_575(var_20_bool, var_21_bool); // 0x23b NEW_2
	return 2; // 0x23d Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object)
{
	EventDisable(1); // 0x55 EventDisable
	EventDisable(0); // 0x56 EventDisable
	UISync(); // 0x57 Func
	EventEnable(1); // 0x59 EventEnable
	EventEnable(0); // 0x5a EventEnable
	var_17_string = ""; var_18_bool = 0; // 0x5b PushV
	var_17_string = "fin_beda.wmv"; // 0x5c MovS
	var_18_bool = 0; // 0x5d MovB
	TaskCall(0); // 0x5e TaskCall
	func_0(var_21_int, var_22_bool, var_17_string, var_18_bool); // 0x5f NEW_2
	TaskReturn(); // 0x60 TaskReturn
	var_28_string = "menumusic"; // 0x62 PushS
	PlaySound(var_28_string); // 0x63 Func
	var_29_int = 0; // 0x65 PushV
	var_29_int = 8; // 0x66 MovI
	TaskCall(1); // 0x67 TaskCall
	func_65(var_30_object, var_29_int); // 0x68 NEW_2
	TaskReturn(); // 0x69 TaskReturn
	var_34_bool = 0; // 0x6b PushV
	var_34_bool = 0; // 0x6c MovB
	func_128(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_34_bool); // 0x6d NEW_2
	return 0; // 0x6f Return
}


func_0(var_0_object, var_3_bool, var_17_string, var_18_bool)
{
	var_3_bool = var_18_bool; // 0x1 TMov
	var_23_bool = 1; // 0x2 PushB
	SetOwnerDraw(var_23_bool); // 0x3 Func
	var_24_bool = 0; // 0x5 PushB
	ShowCursor(var_24_bool); // 0x6 Func
	CaptureKeyboard(); // 0x8 Func
	GetWindowSize(var_18_bool, var_17_string); // 0xa Func
	LoadVideo(var_17_string); // 0xc Func
	FindVideo(var_0_object, var_17_string); // 0xe Func
	var_25_bool = 0; // 0x10 PushB
	Play(var_25_bool); // 0x11 TObjFunc
	ProcessEvents(); // 0x13 Func
	var_26_bool = 0; // 0x15 PushB
	SetOwnerDraw(var_26_bool); // 0x16 Func
	var_27_bool = 1; // 0x18 PushB
	ShowCursor(var_27_bool); // 0x19 Func
	ReleaseVideo(var_17_string); // 0x1b Func
	return 0; // 0x1d Return
}


func_65(var_0_object, var_29_int)
{
	var_31_string = "intro.xml"; // 0x42 PushS
	var_32_bool = 0; // 0x43 PushB
	CreateWindow(var_31_string, var_32_bool, var_0_object); // 0x44 Func
	var_33_string = "intro"; // 0x46 PushS
	SendMessage(var_29_int, var_33_string); // 0x47 Func
	ProcessEvents(); // 0x49 Func
	return 0; // 0x4b Return
}


func_128(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_16_object, var_34_bool)
{
	var_35_bool = 0; var_36_bool = 0; var_37_bool = 0; var_38_string = ""; var_39_bool = 0; var_40_bool = 0; var_41_bool = 0; var_42_string = ""; // 0x80 PushV
	CaptureKeyboard(); // 0x81 Func
	var_2_int = 0; // 0x83 TMovI
	GetWindowSize(var_0_object, var_42_string); // 0x84 Func
	var_43_string = "default"; // 0x86 PushS
	SetCursor(var_43_string); // 0x87 Func
	var_44_string = "default"; // 0x89 PushS
	SetBackground(var_44_string); // 0x8a Func
	var_45_string = "menumusic"; // 0x8c PushS
	PlaySound(var_45_string); // 0x8d Func
	var_46_bool = 1; // 0x8f PushB
	ShowCursor(var_46_bool); // 0x90 Func
	var_47_bool = var_34_bool; // 0x92 Push
	if(var_47_bool == 0) goto Label_153; // 0x93 JumpB
	var_48_string = "game_choose_pers.xml"; // 0x94 PushS
	var_49_bool = 0; // 0x95 PushB
	CreateWindow(var_48_string, var_49_bool, var_40_bool); // 0x96 Func
	goto Label_161; // 0x98 Jump
	
Label_161:
	var_50_bool = var_2_int == 0; // 0xa1 Not
	if(var_50_bool == 0) goto Label_166; // 0xa2 JumpB
	ProcessEvents(); // 0xa3 Func
	goto Label_161; // 0xa5 Jump
	
Label_166:
	func_587(); // 0xa7 NEW_2
	var_57_int = 1; // 0xa9 PushI
	var_58_bool = var_2_int == var_57_int; // 0xaa Eq
	if(var_58_bool == 0) goto Label_199; // 0xab JumpB
	var_59_string = "menumusic"; // 0xac PushS
	PauseSound(var_59_string); // 0xad Func
	var_60_int = 0; // 0xaf PushV
	var_60_int = 1; // 0xb0 MovI
	TaskCall(1); // 0xb1 TaskCall
	func_65(var_61_object, var_60_int); // 0xb2 NEW_2
	TaskReturn(); // 0xb3 TaskReturn
	var_62_string = ""; var_63_bool = 0; // 0xb5 PushV
	var_62_string = "intro_danko.wmv"; // 0xb6 MovS
	var_63_bool = 1; // 0xb7 MovB
	TaskCall(0); // 0xb8 TaskCall
	func_0(var_66_int, var_67_bool, var_62_string, var_63_bool); // 0xb9 NEW_2
	TaskReturn(); // 0xba TaskReturn
	RemoveWorld(); // 0xbc Func
	UISync(); // 0xbe Func
	DestroyWindow(); // 0xc0 Func
	var_68_string = "world_danko.xml"; // 0xc2 PushS
	var_69_string = "player_danko.xml"; // 0xc3 PushS
	NewGame(var_68_string, var_69_string); // 0xc4 Func
	goto Label_308; // 0xc6 Jump
	
Label_308:
	return 8; // 0x134 Return
	
Label_199:
	var_70_int = 2; // 0xc7 PushI
	var_71_bool = var_2_int == var_70_int; // 0xc8 Eq
	if(var_71_bool == 0) goto Label_229; // 0xc9 JumpB
	var_72_string = "menumusic"; // 0xca PushS
	PauseSound(var_72_string); // 0xcb Func
	var_73_int = 0; // 0xcd PushV
	var_73_int = 2; // 0xce MovI
	TaskCall(1); // 0xcf TaskCall
	func_65(var_74_object, var_73_int); // 0xd0 NEW_2
	TaskReturn(); // 0xd1 TaskReturn
	var_75_string = ""; var_76_bool = 0; // 0xd3 PushV
	var_75_string = "intro_burah.wmv"; // 0xd4 MovS
	var_76_bool = 1; // 0xd5 MovB
	TaskCall(0); // 0xd6 TaskCall
	func_0(var_79_int, var_80_bool, var_75_string, var_76_bool); // 0xd7 NEW_2
	TaskReturn(); // 0xd8 TaskReturn
	RemoveWorld(); // 0xda Func
	UISync(); // 0xdc Func
	DestroyWindow(); // 0xde Func
	var_81_string = "world_burah.xml"; // 0xe0 PushS
	var_82_string = "player_burah.xml"; // 0xe1 PushS
	NewGame(var_81_string, var_82_string); // 0xe2 Func
	goto Label_308; // 0xe4 Jump
	
Label_229:
	var_83_int = 3; // 0xe5 PushI
	var_84_bool = var_2_int == var_83_int; // 0xe6 Eq
	if(var_84_bool == 0) goto Label_259; // 0xe7 JumpB
	var_85_string = "menumusic"; // 0xe8 PushS
	PauseSound(var_85_string); // 0xe9 Func
	var_86_int = 0; // 0xeb PushV
	var_86_int = 3; // 0xec MovI
	TaskCall(1); // 0xed TaskCall
	func_65(var_87_object, var_86_int); // 0xee NEW_2
	TaskReturn(); // 0xef TaskReturn
	var_88_string = ""; var_89_bool = 0; // 0xf1 PushV
	var_88_string = "intro_klara.wmv"; // 0xf2 MovS
	var_89_bool = 1; // 0xf3 MovB
	TaskCall(0); // 0xf4 TaskCall
	func_0(var_92_int, var_93_bool, var_88_string, var_89_bool); // 0xf5 NEW_2
	TaskReturn(); // 0xf6 TaskReturn
	RemoveWorld(); // 0xf8 Func
	UISync(); // 0xfa Func
	DestroyWindow(); // 0xfc Func
	var_94_string = "world_klara.xml"; // 0xfe PushS
	var_95_string = "player_klara.xml"; // 0xff PushS
	NewGame(var_94_string, var_95_string); // 0x100 Func
	goto Label_308; // 0x102 Jump
	
Label_259:
	var_96_int = 4; // 0x103 PushI
	var_97_bool = var_2_int == var_96_int; // 0x104 Eq
	if(var_97_bool == 0) goto Label_278; // 0x105 JumpB
	var_98_string = "menumusic"; // 0x106 PushS
	PauseSound(var_98_string); // 0x107 Func
	var_99_string = "Loading : "; // 0x109 PushS
	var_100_int = var_99_string + var_10_object; // 0x10a Add
	Trace(var_100_int); // 0x10b Func
	RemoveWorld(); // 0x10d Func
	UISync(); // 0x10f Func
	DestroyWindow(); // 0x111 Func
	LoadGame(var_39_bool, var_16_object); // 0x113 Func
	goto Label_308; // 0x115 Jump
	
Label_278:
	var_101_int = 5; // 0x116 PushI
	var_102_bool = var_2_int == var_101_int; // 0x117 Eq
	if(var_102_bool == 0) goto Label_295; // 0x118 JumpB
	var_103_bool = var_9_object == 0; // 0x119 Not
	if(var_103_bool == 0) goto Label_288; // 0x11a JumpB
	DestroyWindow(); // 0x11b Func
	SaveGame(var_40_bool); // 0x11d Func
	goto Label_294; // 0x11f Jump
	
Label_294:
	goto Label_308; // 0x126 Jump
	
Label_288:
	DestroyWindow(); // 0x120 Func
	GetFileName(var_42_string); // 0x122 TObjFunc
	SaveGame(var_41_bool, var_42_string); // 0x124 Func
	
Label_295:
	var_104_int = 7; // 0x127 PushI
	var_105_bool = var_2_int == var_104_int; // 0x128 Eq
	if(var_105_bool == 0) goto Label_308; // 0x129 JumpB
	RemoveWorld(); // 0x12a Func
	UISync(); // 0x12c Func
	DestroyWindow(); // 0x12e Func
	var_106_string = "world_intro.xml"; // 0x130 PushS
	var_107_string = "player_intro.xml"; // 0x131 PushS
	NewGame(var_106_string, var_107_string); // 0x132 Func
	
Label_153:
	var_108_object = Obj(); // 0x99 PushV
	func_112(var_108_object); // 0x9a NEW_2
	var_3_bool = var_108_object; // 0x9b TMov
	var_113_object = Obj(); // 0x9d PushV
	func_120(var_113_object); // 0x9e NEW_2
	var_4_object = var_113_object; // 0x9f TMov
}


func_614(var_107_bool)
{
	var_108_int = 0; var_109_int = 0; // 0x266 PushV
	var_110_string = "BurahCompleted"; // 0x267 PushS
	var_111_int = 0; // 0x268 PushI
	GetRegistryData(var_109_int, var_110_string, var_111_int); // 0x269 Func
	var_112_int = 0; // 0x26b PushI
	var_107_bool = var_109_int != var_112_int; // 0x26c Neq2
	return 2; // 0x26d Return
}


func_587()
{
	var_51_bool = var_3_bool; // 0x24b PushT
	if(var_51_bool == 0) goto Label_591; // 0x24c JumpB
	DestroyWindow(); // 0x24d TObjFunc
	
Label_591:
	var_52_object = var_4_object; // 0x24f PushT
	if(var_52_object == 0) goto Label_595; // 0x250 JumpB
	DestroyWindow(); // 0x251 TObjFunc
	
Label_595:
	var_53_int = var_5_int; // 0x253 PushT
	if(var_53_int == 0) goto Label_599; // 0x254 JumpB
	DestroyWindow(); // 0x255 TObjFunc
	
Label_599:
	var_54_int = var_6_int; // 0x257 PushT
	if(var_54_int == 0) goto Label_603; // 0x258 JumpB
	DestroyWindow(); // 0x259 TObjFunc
	
Label_603:
	var_55_int = var_7_int; // 0x25b PushT
	if(var_55_int == 0) goto Label_607; // 0x25c JumpB
	DestroyWindow(); // 0x25d TObjFunc
	
Label_607:
	var_56_object = var_8_object; // 0x25f PushT
	if(var_56_object == 0) goto Label_611; // 0x260 JumpB
	DestroyWindow(); // 0x261 TObjFunc
	
Label_611:
	CaptureKeyboard(); // 0x263 Func
	return 0; // 0x265 Return
}


func_622(var_100_bool)
{
	var_101_int = 0; var_102_int = 0; // 0x26e PushV
	var_103_string = "DankoCompleted"; // 0x26f PushS
	var_104_int = 0; // 0x270 PushI
	GetRegistryData(var_102_int, var_103_string, var_104_int); // 0x271 Func
	var_105_int = 0; // 0x273 PushI
	var_100_bool = var_102_int != var_105_int; // 0x274 Neq2
	return 2; // 0x275 Return
}


func_112(var_108_object)
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x70 PushV
	var_111_string = "game_buttons.xml"; // 0x71 PushS
	var_112_bool = 0; // 0x72 PushB
	CreateWindow(var_111_string, var_112_bool, var_110_object); // 0x73 Func
	var_108_object = var_110_object; // 0x75 Mov
	return 2; // 0x76 Return
}


func_120(var_113_object)
{
	var_114_object = Obj(); var_115_object = Obj(); // 0x78 PushV
	var_116_string = "game_logo.xml"; // 0x79 PushS
	var_117_bool = 0; // 0x7a PushB
	CreateWindow(var_116_string, var_117_bool, var_115_object); // 0x7b Func
	var_113_object = var_115_object; // 0x7d Mov
	return 2; // 0x7e Return
}


func_575(var_3_bool, var_4_object)
{
	func_587(); // 0x240 NEW_2
	var_136_object = Obj(); // 0x242 PushV
	func_112(var_136_object); // 0x243 NEW_2
	var_3_bool = var_136_object; // 0x244 TMov
	var_137_object = Obj(); // 0x246 PushV
	func_120(var_137_object); // 0x247 NEW_2
	var_4_object = var_137_object; // 0x248 TMov
	return 0; // 0x24a Return
}


