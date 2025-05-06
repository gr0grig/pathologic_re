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
	var_18_int = 27; // 0x135 PushI
	var_19_bool = var_17_int == var_18_int; // 0x136 Eq
	if(var_19_bool == 0) goto Label_315; // 0x137 JumpB
	func_544(var_16_object, var_17_int); // 0x139 NEW_2
	
Label_315:
	return 0; // 0x13b Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object)
{
	var_20_string = "newgame"; // 0x13d PushS
	var_21_bool = var_18_string == var_20_string; // 0x13e Eq
	if(var_21_bool == 0) goto Label_324; // 0x13f JumpB
	var_2_int = 7; // 0x140 TMovI
	StopEventProcessing(); // 0x141 Func
	goto Label_543; // 0x143 Jump
	
Label_543:
	return 0; // 0x21f Return
	
Label_324:
	var_22_string = "quitgame"; // 0x144 PushS
	var_23_bool = var_18_string == var_22_string; // 0x145 Eq
	if(var_23_bool == 0) goto Label_334; // 0x146 JumpB
	var_24_string = "Quit game"; // 0x147 PushS
	UITrace(var_24_string); // 0x148 Func
	Quit(); // 0x14a Func
	return 0; // 0x14c Return
	
Label_334:
	var_25_string = "loadgame"; // 0x14e PushS
	var_26_bool = var_18_string == var_25_string; // 0x14f Eq
	if(var_26_bool == 0) goto Label_346; // 0x150 JumpB
	func_556(); // 0x152 NEW_2
	var_33_string = "load.xml"; // 0x154 PushS
	var_34_bool = 0; // 0x155 PushB
	CreateWindow(var_33_string, var_34_bool, var_16_object); // 0x156 Func
	return 0; // 0x158 Return
	
Label_346:
	var_35_string = "savegame"; // 0x15a PushS
	var_36_bool = var_18_string == var_35_string; // 0x15b Eq
	if(var_36_bool == 0) goto Label_358; // 0x15c JumpB
	func_556(); // 0x15e NEW_2
	var_37_string = "save.xml"; // 0x160 PushS
	var_38_bool = 0; // 0x161 PushB
	CreateWindow(var_37_string, var_38_bool, var_15_string); // 0x162 Func
	return 0; // 0x164 Return
	
Label_358:
	var_39_string = "gameoptions"; // 0x166 PushS
	var_40_bool = var_18_string == var_39_string; // 0x167 Eq
	if(var_40_bool == 0) goto Label_370; // 0x168 JumpB
	func_556(); // 0x16a NEW_2
	var_41_string = "options.xml"; // 0x16c PushS
	var_42_bool = 0; // 0x16d PushB
	CreateWindow(var_41_string, var_42_bool, var_14_object); // 0x16e Func
	return 0; // 0x170 Return
	
Label_370:
	var_43_string = "continue"; // 0x172 PushS
	var_44_bool = var_18_string == var_43_string; // 0x173 Eq
	if(var_44_bool == 0) goto Label_378; // 0x174 JumpB
	var_2_int = 6; // 0x175 TMovI
	StopEventProcessing(); // 0x176 Func
	return 0; // 0x178 Return
	
Label_378:
	var_45_string = "credits"; // 0x17a PushS
	var_46_bool = var_18_string == var_45_string; // 0x17b Eq
	if(var_46_bool == 0) goto Label_402; // 0x17c JumpB
	func_556(); // 0x17e NEW_2
	var_47_int = 0; // 0x180 PushV
	var_47_int = 8; // 0x181 MovI
	TaskCall(1); // 0x182 TaskCall
	func_65(var_48_object, var_47_int); // 0x183 NEW_2
	TaskReturn(); // 0x184 TaskReturn
	var_52_object = Obj(); // 0x186 PushV
	func_112(var_52_object); // 0x187 NEW_2
	var_3_bool = var_52_object; // 0x188 TMov
	var_57_object = Obj(); // 0x18a PushV
	func_120(var_57_object); // 0x18b NEW_2
	var_4_object = var_57_object; // 0x18c TMov
	var_62_bool = 1; // 0x18e PushB
	ShowCursor(var_62_bool); // 0x18f Func
	goto Label_543; // 0x191 Jump
	
Label_402:
	var_63_string = "danko"; // 0x192 PushS
	var_64_bool = var_18_string == var_63_string; // 0x193 Eq
	if(var_64_bool == 0) goto Label_435; // 0x194 JumpB
	var_65_int = 0; // 0x195 PushI
	var_66_bool = var_17_int == var_65_int; // 0x196 Eq
	if(var_66_bool == 0) goto Label_410; // 0x197 JumpB
	return 0; // 0x198 Return
	
Label_410:
	var_67_int = 1; // 0x19a PushI
	var_68_bool = var_17_int == var_67_int; // 0x19b Eq
	if(var_68_bool == 0) goto Label_422; // 0x19c JumpB
	var_69_int = 202; // 0x19d PushI
	var_70_string = "player_name"; // 0x19e PushS
	SendMessage(var_69_int, var_70_string); // 0x19f Func
	var_71_int = 203; // 0x1a1 PushI
	var_72_string = "player_desc"; // 0x1a2 PushS
	SendMessage(var_71_int, var_72_string); // 0x1a3 Func
	goto Label_433; // 0x1a5 Jump
	
Label_433:
	return 0; // 0x1b1 Return
	
Label_422:
	var_73_int = 2; // 0x1a6 PushI
	var_74_bool = var_17_int == var_73_int; // 0x1a7 Eq
	if(var_74_bool == 0) goto Label_433; // 0x1a8 JumpB
	var_75_int = -1; // 0x1a9 PushI
	var_76_string = "player_name"; // 0x1aa PushS
	SendMessage(var_75_int, var_76_string); // 0x1ab Func
	var_77_int = -1; // 0x1ad PushI
	var_78_string = "player_desc"; // 0x1ae PushS
	SendMessage(var_77_int, var_78_string); // 0x1af Func
	
Label_435:
	var_79_string = "burah"; // 0x1b3 PushS
	var_80_bool = var_18_string == var_79_string; // 0x1b4 Eq
	if(var_80_bool == 0) goto Label_470; // 0x1b5 JumpB
	var_81_int = 0; // 0x1b6 PushI
	var_82_bool = var_17_int == var_81_int; // 0x1b7 Eq
	if(var_82_bool == 0) goto Label_445; // 0x1b8 JumpB
	var_2_int = 2; // 0x1b9 TMovI
	StopEventProcessing(); // 0x1ba Func
	goto Label_468; // 0x1bc Jump
	
Label_468:
	return 0; // 0x1d4 Return
	
Label_445:
	var_83_int = 1; // 0x1bd PushI
	var_84_bool = var_17_int == var_83_int; // 0x1be Eq
	if(var_84_bool == 0) goto Label_457; // 0x1bf JumpB
	var_85_int = 205; // 0x1c0 PushI
	var_86_string = "player_name"; // 0x1c1 PushS
	SendMessage(var_85_int, var_86_string); // 0x1c2 Func
	var_87_int = 206; // 0x1c4 PushI
	var_88_string = "player_desc"; // 0x1c5 PushS
	SendMessage(var_87_int, var_88_string); // 0x1c6 Func
	goto Label_468; // 0x1c8 Jump
	
Label_457:
	var_89_int = 2; // 0x1c9 PushI
	var_90_bool = var_17_int == var_89_int; // 0x1ca Eq
	if(var_90_bool == 0) goto Label_468; // 0x1cb JumpB
	var_91_int = -1; // 0x1cc PushI
	var_92_string = "player_name"; // 0x1cd PushS
	SendMessage(var_91_int, var_92_string); // 0x1ce Func
	var_93_int = -1; // 0x1d0 PushI
	var_94_string = "player_desc"; // 0x1d1 PushS
	SendMessage(var_93_int, var_94_string); // 0x1d2 Func
	
Label_470:
	var_95_string = "klara"; // 0x1d6 PushS
	var_96_bool = var_18_string == var_95_string; // 0x1d7 Eq
	if(var_96_bool == 0) goto Label_503; // 0x1d8 JumpB
	var_97_int = 0; // 0x1d9 PushI
	var_98_bool = var_17_int == var_97_int; // 0x1da Eq
	if(var_98_bool == 0) goto Label_478; // 0x1db JumpB
	return 0; // 0x1dc Return
	
Label_478:
	var_99_int = 1; // 0x1de PushI
	var_100_bool = var_17_int == var_99_int; // 0x1df Eq
	if(var_100_bool == 0) goto Label_490; // 0x1e0 JumpB
	var_101_int = 208; // 0x1e1 PushI
	var_102_string = "player_name"; // 0x1e2 PushS
	SendMessage(var_101_int, var_102_string); // 0x1e3 Func
	var_103_int = 209; // 0x1e5 PushI
	var_104_string = "player_desc"; // 0x1e6 PushS
	SendMessage(var_103_int, var_104_string); // 0x1e7 Func
	goto Label_501; // 0x1e9 Jump
	
Label_501:
	return 0; // 0x1f5 Return
	
Label_490:
	var_105_int = 2; // 0x1ea PushI
	var_106_bool = var_17_int == var_105_int; // 0x1eb Eq
	if(var_106_bool == 0) goto Label_501; // 0x1ec JumpB
	var_107_int = -1; // 0x1ed PushI
	var_108_string = "player_name"; // 0x1ee PushS
	SendMessage(var_107_int, var_108_string); // 0x1ef Func
	var_109_int = -1; // 0x1f1 PushI
	var_110_string = "player_desc"; // 0x1f2 PushS
	SendMessage(var_109_int, var_110_string); // 0x1f3 Func
	
Label_503:
	var_111_string = "load"; // 0x1f7 PushS
	var_112_bool = var_18_string == var_111_string; // 0x1f8 Eq
	if(var_112_bool == 0) goto Label_520; // 0x1f9 JumpB
	var_113_int = 0; // 0x1fa PushI
	var_114_bool = var_17_int == var_113_int; // 0x1fb Eq
	if(var_114_bool == 0) goto Label_515; // 0x1fc JumpB
	var_2_int = 4; // 0x1fd TMovI
	GetFileName(var_10_object); // 0x1fe ObjFunc
	StopEventProcessing(); // 0x200 Func
	goto Label_518; // 0x202 Jump
	
Label_518:
	return 0; // 0x206 Return
	
Label_515:
	func_544(var_18_string, var_19_object); // 0x204 NEW_2
	
Label_520:
	var_117_string = "save"; // 0x208 PushS
	var_118_bool = var_18_string == var_117_string; // 0x209 Eq
	if(var_118_bool == 0) goto Label_536; // 0x20a JumpB
	var_119_int = 0; // 0x20b PushI
	var_120_bool = var_17_int == var_119_int; // 0x20c Eq
	if(var_120_bool == 0) goto Label_531; // 0x20d JumpB
	var_2_int = 5; // 0x20e TMovI
	var_9_object = var_19_object; // 0x20f TMov
	StopEventProcessing(); // 0x210 Func
	goto Label_534; // 0x212 Jump
	
Label_534:
	return 0; // 0x216 Return
	
Label_531:
	func_544(var_18_string, var_19_object); // 0x214 NEW_2
	
Label_536:
	var_121_string = "options"; // 0x218 PushS
	var_122_bool = var_18_string == var_121_string; // 0x219 Eq
	if(var_122_bool == 0) goto Label_543; // 0x21a JumpB
	func_544(var_18_string, var_19_object); // 0x21c NEW_2
	return 0; // 0x21e Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object)
{
	EventDisable(1); // 0x55 EventDisable
	EventDisable(0); // 0x56 EventDisable
	UISync(); // 0x57 Func
	EventEnable(1); // 0x59 EventEnable
	EventEnable(0); // 0x5a EventEnable
	var_17_string = ""; var_18_bool = 0; // 0x5b PushV
	var_17_string = "fin_termit.wmv"; // 0x5c MovS
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
	func_128(var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_34_bool); // 0x6d NEW_2
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


func_544(var_3_bool, var_4_object)
{
	func_556(); // 0x221 NEW_2
	var_115_object = Obj(); // 0x223 PushV
	func_112(var_115_object); // 0x224 NEW_2
	var_3_bool = var_115_object; // 0x225 TMov
	var_116_object = Obj(); // 0x227 PushV
	func_120(var_116_object); // 0x228 NEW_2
	var_4_object = var_116_object; // 0x229 TMov
	return 0; // 0x22b Return
}


func_128(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_34_bool)
{
	var_35_bool = 0; var_36_bool = 0; var_37_bool = 0; var_38_bool = 0; var_39_string = ""; var_40_bool = 0; var_41_bool = 0; var_42_bool = 0; var_43_bool = 0; var_44_string = ""; // 0x80 PushV
	CaptureKeyboard(); // 0x81 Func
	var_2_int = 0; // 0x83 TMovI
	GetWindowSize(var_0_object, var_44_string); // 0x84 Func
	var_45_string = "default"; // 0x86 PushS
	SetCursor(var_45_string); // 0x87 Func
	var_46_string = "default"; // 0x89 PushS
	SetBackground(var_46_string); // 0x8a Func
	var_47_string = "menumusic"; // 0x8c PushS
	PlaySound(var_47_string); // 0x8d Func
	var_48_bool = 1; // 0x8f PushB
	ShowCursor(var_48_bool); // 0x90 Func
	var_49_bool = var_34_bool; // 0x92 Push
	if(var_49_bool == 0) goto Label_153; // 0x93 JumpB
	var_50_string = "game_choose_pers.xml"; // 0x94 PushS
	var_51_bool = 0; // 0x95 PushB
	CreateWindow(var_50_string, var_51_bool, var_42_bool); // 0x96 Func
	goto Label_161; // 0x98 Jump
	
Label_161:
	var_52_int = 131072; // 0xa1 PushI
	var_53_string = "klara"; // 0xa2 PushS
	SendMessage(var_52_int, var_53_string); // 0xa3 Func
	var_54_int = 131072; // 0xa5 PushI
	var_55_string = "danko"; // 0xa6 PushS
	SendMessage(var_54_int, var_55_string); // 0xa7 Func
	
Label_169:
	var_56_bool = var_2_int == 0; // 0xa9 Not
	if(var_56_bool == 0) goto Label_174; // 0xaa JumpB
	ProcessEvents(); // 0xab Func
	goto Label_169; // 0xad Jump
	
Label_174:
	func_556(); // 0xaf NEW_2
	var_63_int = 1; // 0xb1 PushI
	var_64_bool = var_2_int == var_63_int; // 0xb2 Eq
	if(var_64_bool == 0) goto Label_203; // 0xb3 JumpB
	var_65_string = "menumusic"; // 0xb4 PushS
	PauseSound(var_65_string); // 0xb5 Func
	var_66_int = 0; // 0xb7 PushV
	var_66_int = 1; // 0xb8 MovI
	TaskCall(1); // 0xb9 TaskCall
	func_65(var_67_object, var_66_int); // 0xba NEW_2
	TaskReturn(); // 0xbb TaskReturn
	var_68_string = ""; var_69_bool = 0; // 0xbd PushV
	var_68_string = "intro_danko.wmv"; // 0xbe MovS
	var_69_bool = 1; // 0xbf MovB
	TaskCall(0); // 0xc0 TaskCall
	func_0(var_72_int, var_73_bool, var_68_string, var_69_bool); // 0xc1 NEW_2
	TaskReturn(); // 0xc2 TaskReturn
	RemoveWorld(); // 0xc4 Func
	UISync(); // 0xc6 Func
	DestroyWindow(); // 0xc8 Func
	goto Label_307; // 0xca Jump
	
Label_307:
	return 10; // 0x133 Return
	
Label_203:
	var_74_int = 2; // 0xcb PushI
	var_75_bool = var_2_int == var_74_int; // 0xcc Eq
	if(var_75_bool == 0) goto Label_232; // 0xcd JumpB
	var_76_string = "menumusic"; // 0xce PushS
	PauseSound(var_76_string); // 0xcf Func
	var_77_int = 0; // 0xd1 PushV
	var_77_int = 2; // 0xd2 MovI
	TaskCall(1); // 0xd3 TaskCall
	func_65(var_78_object, var_77_int); // 0xd4 NEW_2
	TaskReturn(); // 0xd5 TaskReturn
	var_79_string = ""; var_80_bool = 0; // 0xd7 PushV
	var_79_string = "intro_burah.wmv"; // 0xd8 MovS
	var_80_bool = 1; // 0xd9 MovB
	TaskCall(0); // 0xda TaskCall
	func_0(var_83_int, var_84_bool, var_79_string, var_80_bool); // 0xdb NEW_2
	TaskReturn(); // 0xdc TaskReturn
	RemoveWorld(); // 0xde Func
	UISync(); // 0xe0 Func
	DestroyWindow(); // 0xe2 Func
	var_85_string = "demo_save"; // 0xe4 PushS
	LoadGame(var_40_bool, var_85_string); // 0xe5 Func
	goto Label_307; // 0xe7 Jump
	
Label_232:
	var_86_int = 3; // 0xe8 PushI
	var_87_bool = var_2_int == var_86_int; // 0xe9 Eq
	if(var_87_bool == 0) goto Label_258; // 0xea JumpB
	var_88_string = "menumusic"; // 0xeb PushS
	PauseSound(var_88_string); // 0xec Func
	var_89_int = 0; // 0xee PushV
	var_89_int = 3; // 0xef MovI
	TaskCall(1); // 0xf0 TaskCall
	func_65(var_90_object, var_89_int); // 0xf1 NEW_2
	TaskReturn(); // 0xf2 TaskReturn
	var_91_string = ""; var_92_bool = 0; // 0xf4 PushV
	var_91_string = "intro_klara.wmv"; // 0xf5 MovS
	var_92_bool = 1; // 0xf6 MovB
	TaskCall(0); // 0xf7 TaskCall
	func_0(var_95_int, var_96_bool, var_91_string, var_92_bool); // 0xf8 NEW_2
	TaskReturn(); // 0xf9 TaskReturn
	RemoveWorld(); // 0xfb Func
	UISync(); // 0xfd Func
	DestroyWindow(); // 0xff Func
	goto Label_307; // 0x101 Jump
	
Label_258:
	var_97_int = 4; // 0x102 PushI
	var_98_bool = var_2_int == var_97_int; // 0x103 Eq
	if(var_98_bool == 0) goto Label_277; // 0x104 JumpB
	var_99_string = "menumusic"; // 0x105 PushS
	PauseSound(var_99_string); // 0x106 Func
	var_100_string = "Loading : "; // 0x108 PushS
	var_101_int = var_100_string + var_10_object; // 0x109 Add
	Trace(var_101_int); // 0x10a Func
	RemoveWorld(); // 0x10c Func
	UISync(); // 0x10e Func
	DestroyWindow(); // 0x110 Func
	LoadGame(var_41_bool, var_35_bool); // 0x112 Func
	goto Label_307; // 0x114 Jump
	
Label_277:
	var_102_int = 5; // 0x115 PushI
	var_103_bool = var_2_int == var_102_int; // 0x116 Eq
	if(var_103_bool == 0) goto Label_294; // 0x117 JumpB
	var_104_bool = var_9_object == 0; // 0x118 Not
	if(var_104_bool == 0) goto Label_287; // 0x119 JumpB
	DestroyWindow(); // 0x11a Func
	SaveGame(var_42_bool); // 0x11c Func
	goto Label_293; // 0x11e Jump
	
Label_293:
	goto Label_307; // 0x125 Jump
	
Label_287:
	DestroyWindow(); // 0x11f Func
	GetFileName(var_44_string); // 0x121 TObjFunc
	SaveGame(var_43_bool, var_44_string); // 0x123 Func
	
Label_294:
	var_105_int = 7; // 0x126 PushI
	var_106_bool = var_2_int == var_105_int; // 0x127 Eq
	if(var_106_bool == 0) goto Label_307; // 0x128 JumpB
	RemoveWorld(); // 0x129 Func
	UISync(); // 0x12b Func
	DestroyWindow(); // 0x12d Func
	var_107_string = "world_intro.xml"; // 0x12f PushS
	var_108_string = "player_intro.xml"; // 0x130 PushS
	NewGame(var_107_string, var_108_string); // 0x131 Func
	
Label_153:
	var_109_object = Obj(); // 0x99 PushV
	func_112(var_109_object); // 0x9a NEW_2
	var_3_bool = var_109_object; // 0x9b TMov
	var_114_object = Obj(); // 0x9d PushV
	func_120(var_114_object); // 0x9e NEW_2
	var_4_object = var_114_object; // 0x9f TMov
}


func_556()
{
	var_57_bool = var_3_bool; // 0x22c PushT
	if(var_57_bool == 0) goto Label_560; // 0x22d JumpB
	DestroyWindow(); // 0x22e TObjFunc
	
Label_560:
	var_58_object = var_4_object; // 0x230 PushT
	if(var_58_object == 0) goto Label_564; // 0x231 JumpB
	DestroyWindow(); // 0x232 TObjFunc
	
Label_564:
	var_59_int = var_5_int; // 0x234 PushT
	if(var_59_int == 0) goto Label_568; // 0x235 JumpB
	DestroyWindow(); // 0x236 TObjFunc
	
Label_568:
	var_60_int = var_6_int; // 0x238 PushT
	if(var_60_int == 0) goto Label_572; // 0x239 JumpB
	DestroyWindow(); // 0x23a TObjFunc
	
Label_572:
	var_61_int = var_7_int; // 0x23c PushT
	if(var_61_int == 0) goto Label_576; // 0x23d JumpB
	DestroyWindow(); // 0x23e TObjFunc
	
Label_576:
	var_62_object = var_8_object; // 0x240 PushT
	if(var_62_object == 0) goto Label_580; // 0x241 JumpB
	DestroyWindow(); // 0x242 TObjFunc
	
Label_580:
	CaptureKeyboard(); // 0x244 Func
	return 0; // 0x246 Return
}


func_112(var_109_object)
{
	var_110_object = Obj(); var_111_object = Obj(); // 0x70 PushV
	var_112_string = "game_buttons.xml"; // 0x71 PushS
	var_113_bool = 0; // 0x72 PushB
	CreateWindow(var_112_string, var_113_bool, var_111_object); // 0x73 Func
	var_109_object = var_111_object; // 0x75 Mov
	return 2; // 0x76 Return
}


func_120(var_114_object)
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x78 PushV
	var_117_string = "game_logo.xml"; // 0x79 PushS
	var_118_bool = 0; // 0x7a PushB
	CreateWindow(var_117_string, var_118_bool, var_116_object); // 0x7b Func
	var_114_object = var_116_object; // 0x7d Mov
	return 2; // 0x7e Return
}


