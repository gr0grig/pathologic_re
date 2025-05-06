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
	var_18_int = 27; // 0x12c PushI
	var_19_bool = var_17_int == var_18_int; // 0x12d Eq
	if(var_19_bool == 0) goto Label_306; // 0x12e JumpB
	func_535(var_16_object, var_17_int); // 0x130 NEW_2
	
Label_306:
	return 0; // 0x132 Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object)
{
	var_20_string = "newgame"; // 0x134 PushS
	var_21_bool = var_18_string == var_20_string; // 0x135 Eq
	if(var_21_bool == 0) goto Label_315; // 0x136 JumpB
	var_2_int = 7; // 0x137 TMovI
	StopEventProcessing(); // 0x138 Func
	goto Label_534; // 0x13a Jump
	
Label_534:
	return 0; // 0x216 Return
	
Label_315:
	var_22_string = "quitgame"; // 0x13b PushS
	var_23_bool = var_18_string == var_22_string; // 0x13c Eq
	if(var_23_bool == 0) goto Label_325; // 0x13d JumpB
	var_24_string = "Quit game"; // 0x13e PushS
	UITrace(var_24_string); // 0x13f Func
	Quit(); // 0x141 Func
	return 0; // 0x143 Return
	
Label_325:
	var_25_string = "loadgame"; // 0x145 PushS
	var_26_bool = var_18_string == var_25_string; // 0x146 Eq
	if(var_26_bool == 0) goto Label_337; // 0x147 JumpB
	func_547(); // 0x149 NEW_2
	var_33_string = "load.xml"; // 0x14b PushS
	var_34_bool = 0; // 0x14c PushB
	CreateWindow(var_33_string, var_34_bool, var_16_object); // 0x14d Func
	return 0; // 0x14f Return
	
Label_337:
	var_35_string = "savegame"; // 0x151 PushS
	var_36_bool = var_18_string == var_35_string; // 0x152 Eq
	if(var_36_bool == 0) goto Label_349; // 0x153 JumpB
	func_547(); // 0x155 NEW_2
	var_37_string = "save.xml"; // 0x157 PushS
	var_38_bool = 0; // 0x158 PushB
	CreateWindow(var_37_string, var_38_bool, var_15_string); // 0x159 Func
	return 0; // 0x15b Return
	
Label_349:
	var_39_string = "gameoptions"; // 0x15d PushS
	var_40_bool = var_18_string == var_39_string; // 0x15e Eq
	if(var_40_bool == 0) goto Label_361; // 0x15f JumpB
	func_547(); // 0x161 NEW_2
	var_41_string = "options.xml"; // 0x163 PushS
	var_42_bool = 0; // 0x164 PushB
	CreateWindow(var_41_string, var_42_bool, var_14_object); // 0x165 Func
	return 0; // 0x167 Return
	
Label_361:
	var_43_string = "continue"; // 0x169 PushS
	var_44_bool = var_18_string == var_43_string; // 0x16a Eq
	if(var_44_bool == 0) goto Label_369; // 0x16b JumpB
	var_2_int = 6; // 0x16c TMovI
	StopEventProcessing(); // 0x16d Func
	return 0; // 0x16f Return
	
Label_369:
	var_45_string = "credits"; // 0x171 PushS
	var_46_bool = var_18_string == var_45_string; // 0x172 Eq
	if(var_46_bool == 0) goto Label_393; // 0x173 JumpB
	func_547(); // 0x175 NEW_2
	var_47_int = 0; // 0x177 PushV
	var_47_int = 8; // 0x178 MovI
	TaskCall(1); // 0x179 TaskCall
	func_65(var_48_object, var_47_int); // 0x17a NEW_2
	TaskReturn(); // 0x17b TaskReturn
	var_52_object = Obj(); // 0x17d PushV
	func_103(var_52_object); // 0x17e NEW_2
	var_3_bool = var_52_object; // 0x17f TMov
	var_57_object = Obj(); // 0x181 PushV
	func_111(var_57_object); // 0x182 NEW_2
	var_4_object = var_57_object; // 0x183 TMov
	var_62_bool = 1; // 0x185 PushB
	ShowCursor(var_62_bool); // 0x186 Func
	goto Label_534; // 0x188 Jump
	
Label_393:
	var_63_string = "danko"; // 0x189 PushS
	var_64_bool = var_18_string == var_63_string; // 0x18a Eq
	if(var_64_bool == 0) goto Label_426; // 0x18b JumpB
	var_65_int = 0; // 0x18c PushI
	var_66_bool = var_17_int == var_65_int; // 0x18d Eq
	if(var_66_bool == 0) goto Label_401; // 0x18e JumpB
	return 0; // 0x18f Return
	
Label_401:
	var_67_int = 1; // 0x191 PushI
	var_68_bool = var_17_int == var_67_int; // 0x192 Eq
	if(var_68_bool == 0) goto Label_413; // 0x193 JumpB
	var_69_int = 202; // 0x194 PushI
	var_70_string = "player_name"; // 0x195 PushS
	SendMessage(var_69_int, var_70_string); // 0x196 Func
	var_71_int = 203; // 0x198 PushI
	var_72_string = "player_desc"; // 0x199 PushS
	SendMessage(var_71_int, var_72_string); // 0x19a Func
	goto Label_424; // 0x19c Jump
	
Label_424:
	return 0; // 0x1a8 Return
	
Label_413:
	var_73_int = 2; // 0x19d PushI
	var_74_bool = var_17_int == var_73_int; // 0x19e Eq
	if(var_74_bool == 0) goto Label_424; // 0x19f JumpB
	var_75_int = -1; // 0x1a0 PushI
	var_76_string = "player_name"; // 0x1a1 PushS
	SendMessage(var_75_int, var_76_string); // 0x1a2 Func
	var_77_int = -1; // 0x1a4 PushI
	var_78_string = "player_desc"; // 0x1a5 PushS
	SendMessage(var_77_int, var_78_string); // 0x1a6 Func
	
Label_426:
	var_79_string = "burah"; // 0x1aa PushS
	var_80_bool = var_18_string == var_79_string; // 0x1ab Eq
	if(var_80_bool == 0) goto Label_461; // 0x1ac JumpB
	var_81_int = 0; // 0x1ad PushI
	var_82_bool = var_17_int == var_81_int; // 0x1ae Eq
	if(var_82_bool == 0) goto Label_436; // 0x1af JumpB
	var_2_int = 2; // 0x1b0 TMovI
	StopEventProcessing(); // 0x1b1 Func
	goto Label_459; // 0x1b3 Jump
	
Label_459:
	return 0; // 0x1cb Return
	
Label_436:
	var_83_int = 1; // 0x1b4 PushI
	var_84_bool = var_17_int == var_83_int; // 0x1b5 Eq
	if(var_84_bool == 0) goto Label_448; // 0x1b6 JumpB
	var_85_int = 205; // 0x1b7 PushI
	var_86_string = "player_name"; // 0x1b8 PushS
	SendMessage(var_85_int, var_86_string); // 0x1b9 Func
	var_87_int = 206; // 0x1bb PushI
	var_88_string = "player_desc"; // 0x1bc PushS
	SendMessage(var_87_int, var_88_string); // 0x1bd Func
	goto Label_459; // 0x1bf Jump
	
Label_448:
	var_89_int = 2; // 0x1c0 PushI
	var_90_bool = var_17_int == var_89_int; // 0x1c1 Eq
	if(var_90_bool == 0) goto Label_459; // 0x1c2 JumpB
	var_91_int = -1; // 0x1c3 PushI
	var_92_string = "player_name"; // 0x1c4 PushS
	SendMessage(var_91_int, var_92_string); // 0x1c5 Func
	var_93_int = -1; // 0x1c7 PushI
	var_94_string = "player_desc"; // 0x1c8 PushS
	SendMessage(var_93_int, var_94_string); // 0x1c9 Func
	
Label_461:
	var_95_string = "klara"; // 0x1cd PushS
	var_96_bool = var_18_string == var_95_string; // 0x1ce Eq
	if(var_96_bool == 0) goto Label_494; // 0x1cf JumpB
	var_97_int = 0; // 0x1d0 PushI
	var_98_bool = var_17_int == var_97_int; // 0x1d1 Eq
	if(var_98_bool == 0) goto Label_469; // 0x1d2 JumpB
	return 0; // 0x1d3 Return
	
Label_469:
	var_99_int = 1; // 0x1d5 PushI
	var_100_bool = var_17_int == var_99_int; // 0x1d6 Eq
	if(var_100_bool == 0) goto Label_481; // 0x1d7 JumpB
	var_101_int = 208; // 0x1d8 PushI
	var_102_string = "player_name"; // 0x1d9 PushS
	SendMessage(var_101_int, var_102_string); // 0x1da Func
	var_103_int = 209; // 0x1dc PushI
	var_104_string = "player_desc"; // 0x1dd PushS
	SendMessage(var_103_int, var_104_string); // 0x1de Func
	goto Label_492; // 0x1e0 Jump
	
Label_492:
	return 0; // 0x1ec Return
	
Label_481:
	var_105_int = 2; // 0x1e1 PushI
	var_106_bool = var_17_int == var_105_int; // 0x1e2 Eq
	if(var_106_bool == 0) goto Label_492; // 0x1e3 JumpB
	var_107_int = -1; // 0x1e4 PushI
	var_108_string = "player_name"; // 0x1e5 PushS
	SendMessage(var_107_int, var_108_string); // 0x1e6 Func
	var_109_int = -1; // 0x1e8 PushI
	var_110_string = "player_desc"; // 0x1e9 PushS
	SendMessage(var_109_int, var_110_string); // 0x1ea Func
	
Label_494:
	var_111_string = "load"; // 0x1ee PushS
	var_112_bool = var_18_string == var_111_string; // 0x1ef Eq
	if(var_112_bool == 0) goto Label_511; // 0x1f0 JumpB
	var_113_int = 0; // 0x1f1 PushI
	var_114_bool = var_17_int == var_113_int; // 0x1f2 Eq
	if(var_114_bool == 0) goto Label_506; // 0x1f3 JumpB
	var_2_int = 4; // 0x1f4 TMovI
	GetFileName(var_10_object); // 0x1f5 ObjFunc
	StopEventProcessing(); // 0x1f7 Func
	goto Label_509; // 0x1f9 Jump
	
Label_509:
	return 0; // 0x1fd Return
	
Label_506:
	func_535(var_18_string, var_19_object); // 0x1fb NEW_2
	
Label_511:
	var_117_string = "save"; // 0x1ff PushS
	var_118_bool = var_18_string == var_117_string; // 0x200 Eq
	if(var_118_bool == 0) goto Label_527; // 0x201 JumpB
	var_119_int = 0; // 0x202 PushI
	var_120_bool = var_17_int == var_119_int; // 0x203 Eq
	if(var_120_bool == 0) goto Label_522; // 0x204 JumpB
	var_2_int = 5; // 0x205 TMovI
	var_9_object = var_19_object; // 0x206 TMov
	StopEventProcessing(); // 0x207 Func
	goto Label_525; // 0x209 Jump
	
Label_525:
	return 0; // 0x20d Return
	
Label_522:
	func_535(var_18_string, var_19_object); // 0x20b NEW_2
	
Label_527:
	var_121_string = "options"; // 0x20f PushS
	var_122_bool = var_18_string == var_121_string; // 0x210 Eq
	if(var_122_bool == 0) goto Label_534; // 0x211 JumpB
	func_535(var_18_string, var_19_object); // 0x213 NEW_2
	return 0; // 0x215 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object)
{
	EventDisable(1); // 0x55 EventDisable
	EventDisable(0); // 0x56 EventDisable
	UISync(); // 0x57 Func
	EventEnable(1); // 0x59 EventEnable
	EventEnable(0); // 0x5a EventEnable
	var_17_string = ""; var_18_bool = 0; // 0x5b PushV
	var_17_string = "death.wmv"; // 0x5c MovS
	var_18_bool = 1; // 0x5d MovB
	TaskCall(0); // 0x5e TaskCall
	func_0(var_21_int, var_22_bool, var_17_string, var_18_bool); // 0x5f NEW_2
	TaskReturn(); // 0x60 TaskReturn
	var_28_bool = 0; // 0x62 PushV
	var_28_bool = 0; // 0x63 MovB
	func_119(var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_28_bool); // 0x64 NEW_2
	return 0; // 0x66 Return
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


func_65(var_0_object, var_60_int)
{
	var_62_string = "intro.xml"; // 0x42 PushS
	var_63_bool = 0; // 0x43 PushB
	CreateWindow(var_62_string, var_63_bool, var_0_object); // 0x44 Func
	var_64_string = "intro"; // 0x46 PushS
	SendMessage(var_60_int, var_64_string); // 0x47 Func
	ProcessEvents(); // 0x49 Func
	return 0; // 0x4b Return
}


func_547()
{
	var_51_bool = var_3_bool; // 0x223 PushT
	if(var_51_bool == 0) goto Label_551; // 0x224 JumpB
	DestroyWindow(); // 0x225 TObjFunc
	
Label_551:
	var_52_object = var_4_object; // 0x227 PushT
	if(var_52_object == 0) goto Label_555; // 0x228 JumpB
	DestroyWindow(); // 0x229 TObjFunc
	
Label_555:
	var_53_int = var_5_int; // 0x22b PushT
	if(var_53_int == 0) goto Label_559; // 0x22c JumpB
	DestroyWindow(); // 0x22d TObjFunc
	
Label_559:
	var_54_int = var_6_int; // 0x22f PushT
	if(var_54_int == 0) goto Label_563; // 0x230 JumpB
	DestroyWindow(); // 0x231 TObjFunc
	
Label_563:
	var_55_int = var_7_int; // 0x233 PushT
	if(var_55_int == 0) goto Label_567; // 0x234 JumpB
	DestroyWindow(); // 0x235 TObjFunc
	
Label_567:
	var_56_object = var_8_object; // 0x237 PushT
	if(var_56_object == 0) goto Label_571; // 0x238 JumpB
	DestroyWindow(); // 0x239 TObjFunc
	
Label_571:
	CaptureKeyboard(); // 0x23b Func
	return 0; // 0x23d Return
}


func_535(var_3_bool, var_4_object)
{
	func_547(); // 0x218 NEW_2
	var_115_object = Obj(); // 0x21a PushV
	func_103(var_115_object); // 0x21b NEW_2
	var_3_bool = var_115_object; // 0x21c TMov
	var_116_object = Obj(); // 0x21e PushV
	func_111(var_116_object); // 0x21f NEW_2
	var_4_object = var_116_object; // 0x220 TMov
	return 0; // 0x222 Return
}


func_103(var_106_object)
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x67 PushV
	var_109_string = "game_buttons.xml"; // 0x68 PushS
	var_110_bool = 0; // 0x69 PushB
	CreateWindow(var_109_string, var_110_bool, var_108_object); // 0x6a Func
	var_106_object = var_108_object; // 0x6c Mov
	return 2; // 0x6d Return
}


func_111(var_111_object)
{
	var_112_object = Obj(); var_113_object = Obj(); // 0x6f PushV
	var_114_string = "game_logo.xml"; // 0x70 PushS
	var_115_bool = 0; // 0x71 PushB
	CreateWindow(var_114_string, var_115_bool, var_113_object); // 0x72 Func
	var_111_object = var_113_object; // 0x74 Mov
	return 2; // 0x75 Return
}


func_119(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_28_bool)
{
	var_29_bool = 0; var_30_bool = 0; var_31_bool = 0; var_32_bool = 0; var_33_string = ""; var_34_bool = 0; var_35_bool = 0; var_36_bool = 0; var_37_bool = 0; var_38_string = ""; // 0x77 PushV
	CaptureKeyboard(); // 0x78 Func
	var_2_int = 0; // 0x7a TMovI
	GetWindowSize(var_0_object, var_38_string); // 0x7b Func
	var_39_string = "default"; // 0x7d PushS
	SetCursor(var_39_string); // 0x7e Func
	var_40_string = "default"; // 0x80 PushS
	SetBackground(var_40_string); // 0x81 Func
	var_41_string = "menumusic"; // 0x83 PushS
	PlaySound(var_41_string); // 0x84 Func
	var_42_bool = 1; // 0x86 PushB
	ShowCursor(var_42_bool); // 0x87 Func
	var_43_bool = var_28_bool; // 0x89 Push
	if(var_43_bool == 0) goto Label_144; // 0x8a JumpB
	var_44_string = "game_choose_pers.xml"; // 0x8b PushS
	var_45_bool = 0; // 0x8c PushB
	CreateWindow(var_44_string, var_45_bool, var_36_bool); // 0x8d Func
	goto Label_152; // 0x8f Jump
	
Label_152:
	var_46_int = 131072; // 0x98 PushI
	var_47_string = "klara"; // 0x99 PushS
	SendMessage(var_46_int, var_47_string); // 0x9a Func
	var_48_int = 131072; // 0x9c PushI
	var_49_string = "danko"; // 0x9d PushS
	SendMessage(var_48_int, var_49_string); // 0x9e Func
	
Label_160:
	var_50_bool = var_2_int == 0; // 0xa0 Not
	if(var_50_bool == 0) goto Label_165; // 0xa1 JumpB
	ProcessEvents(); // 0xa2 Func
	goto Label_160; // 0xa4 Jump
	
Label_165:
	func_547(); // 0xa6 NEW_2
	var_57_int = 1; // 0xa8 PushI
	var_58_bool = var_2_int == var_57_int; // 0xa9 Eq
	if(var_58_bool == 0) goto Label_194; // 0xaa JumpB
	var_59_string = "menumusic"; // 0xab PushS
	PauseSound(var_59_string); // 0xac Func
	var_60_int = 0; // 0xae PushV
	var_60_int = 1; // 0xaf MovI
	TaskCall(1); // 0xb0 TaskCall
	func_65(var_61_object, var_60_int); // 0xb1 NEW_2
	TaskReturn(); // 0xb2 TaskReturn
	var_65_string = ""; var_66_bool = 0; // 0xb4 PushV
	var_65_string = "intro_danko.wmv"; // 0xb5 MovS
	var_66_bool = 1; // 0xb6 MovB
	TaskCall(0); // 0xb7 TaskCall
	func_0(var_69_int, var_70_bool, var_65_string, var_66_bool); // 0xb8 NEW_2
	TaskReturn(); // 0xb9 TaskReturn
	RemoveWorld(); // 0xbb Func
	UISync(); // 0xbd Func
	DestroyWindow(); // 0xbf Func
	goto Label_298; // 0xc1 Jump
	
Label_298:
	return 10; // 0x12a Return
	
Label_194:
	var_71_int = 2; // 0xc2 PushI
	var_72_bool = var_2_int == var_71_int; // 0xc3 Eq
	if(var_72_bool == 0) goto Label_223; // 0xc4 JumpB
	var_73_string = "menumusic"; // 0xc5 PushS
	PauseSound(var_73_string); // 0xc6 Func
	var_74_int = 0; // 0xc8 PushV
	var_74_int = 2; // 0xc9 MovI
	TaskCall(1); // 0xca TaskCall
	func_65(var_75_object, var_74_int); // 0xcb NEW_2
	TaskReturn(); // 0xcc TaskReturn
	var_76_string = ""; var_77_bool = 0; // 0xce PushV
	var_76_string = "intro_burah.wmv"; // 0xcf MovS
	var_77_bool = 1; // 0xd0 MovB
	TaskCall(0); // 0xd1 TaskCall
	func_0(var_80_int, var_81_bool, var_76_string, var_77_bool); // 0xd2 NEW_2
	TaskReturn(); // 0xd3 TaskReturn
	RemoveWorld(); // 0xd5 Func
	UISync(); // 0xd7 Func
	DestroyWindow(); // 0xd9 Func
	var_82_string = "demo_save"; // 0xdb PushS
	LoadGame(var_34_bool, var_82_string); // 0xdc Func
	goto Label_298; // 0xde Jump
	
Label_223:
	var_83_int = 3; // 0xdf PushI
	var_84_bool = var_2_int == var_83_int; // 0xe0 Eq
	if(var_84_bool == 0) goto Label_249; // 0xe1 JumpB
	var_85_string = "menumusic"; // 0xe2 PushS
	PauseSound(var_85_string); // 0xe3 Func
	var_86_int = 0; // 0xe5 PushV
	var_86_int = 3; // 0xe6 MovI
	TaskCall(1); // 0xe7 TaskCall
	func_65(var_87_object, var_86_int); // 0xe8 NEW_2
	TaskReturn(); // 0xe9 TaskReturn
	var_88_string = ""; var_89_bool = 0; // 0xeb PushV
	var_88_string = "intro_klara.wmv"; // 0xec MovS
	var_89_bool = 1; // 0xed MovB
	TaskCall(0); // 0xee TaskCall
	func_0(var_92_int, var_93_bool, var_88_string, var_89_bool); // 0xef NEW_2
	TaskReturn(); // 0xf0 TaskReturn
	RemoveWorld(); // 0xf2 Func
	UISync(); // 0xf4 Func
	DestroyWindow(); // 0xf6 Func
	goto Label_298; // 0xf8 Jump
	
Label_249:
	var_94_int = 4; // 0xf9 PushI
	var_95_bool = var_2_int == var_94_int; // 0xfa Eq
	if(var_95_bool == 0) goto Label_268; // 0xfb JumpB
	var_96_string = "menumusic"; // 0xfc PushS
	PauseSound(var_96_string); // 0xfd Func
	var_97_string = "Loading : "; // 0xff PushS
	var_98_int = var_97_string + var_10_object; // 0x100 Add
	Trace(var_98_int); // 0x101 Func
	RemoveWorld(); // 0x103 Func
	UISync(); // 0x105 Func
	DestroyWindow(); // 0x107 Func
	LoadGame(var_35_bool, var_29_bool); // 0x109 Func
	goto Label_298; // 0x10b Jump
	
Label_268:
	var_99_int = 5; // 0x10c PushI
	var_100_bool = var_2_int == var_99_int; // 0x10d Eq
	if(var_100_bool == 0) goto Label_285; // 0x10e JumpB
	var_101_bool = var_9_object == 0; // 0x10f Not
	if(var_101_bool == 0) goto Label_278; // 0x110 JumpB
	DestroyWindow(); // 0x111 Func
	SaveGame(var_36_bool); // 0x113 Func
	goto Label_284; // 0x115 Jump
	
Label_284:
	goto Label_298; // 0x11c Jump
	
Label_278:
	DestroyWindow(); // 0x116 Func
	GetFileName(var_38_string); // 0x118 TObjFunc
	SaveGame(var_37_bool, var_38_string); // 0x11a Func
	
Label_285:
	var_102_int = 7; // 0x11d PushI
	var_103_bool = var_2_int == var_102_int; // 0x11e Eq
	if(var_103_bool == 0) goto Label_298; // 0x11f JumpB
	RemoveWorld(); // 0x120 Func
	UISync(); // 0x122 Func
	DestroyWindow(); // 0x124 Func
	var_104_string = "world_intro.xml"; // 0x126 PushS
	var_105_string = "player_intro.xml"; // 0x127 PushS
	NewGame(var_104_string, var_105_string); // 0x128 Func
	
Label_144:
	var_106_object = Obj(); // 0x90 PushV
	func_103(var_106_object); // 0x91 NEW_2
	var_3_bool = var_106_object; // 0x92 TMov
	var_111_object = Obj(); // 0x94 PushV
	func_111(var_111_object); // 0x95 NEW_2
	var_4_object = var_111_object; // 0x96 TMov
}


