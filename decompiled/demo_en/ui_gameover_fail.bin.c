task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_object, var_18_int, var_19_int, var_20_bool, var_21_string)
{
	var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_bool = 0; var_26_bool = 0; var_27_bool = 0; // 0x1e PushV
	IsLost(var_25_bool); // 0x1f TObjFunc
	var_28_bool = var_25_bool; // 0x21 Push
	if(var_28_bool == 0) goto Label_40; // 0x22 JumpB
	Restore(var_26_bool); // 0x23 TObjFunc
	var_29_bool = var_26_bool == 0; // 0x25 Not
	if(var_29_bool == 0) goto Label_40; // 0x26 JumpB
	return 6; // 0x27 Return
	
Label_40:
	IsPlaying(var_27_bool); // 0x28 TObjFunc
	var_30_bool = var_27_bool; // 0x2a Push
	if(var_30_bool == 0) goto Label_49; // 0x2b JumpB
	var_31_int = 0; // 0x2c PushI
	var_32_int = 0; // 0x2d PushI
	StretchBlit(var_31_int, var_32_int, var_32_int, var_31_int); // 0x2e TObjFunc
	goto Label_55; // 0x30 Jump
	
Label_55:
	return 6; // 0x37 Return
	
Label_49:
	var_33_int = 0; // 0x31 PushI
	var_34_int = 0; // 0x32 PushI
	StretchBlit(var_33_int, var_34_int, var_34_int, var_33_int); // 0x33 TObjFunc
	StopEventProcessing(); // 0x35 Func
}


task_0_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_object, var_6_int, var_7_int, var_8_int, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_object, var_18_object, var_19_int, var_20_int, var_21_bool, var_22_string)
{
	var_23_bool = var_3_bool == 0; // 0x39 Not
	if(var_23_bool == 0) goto Label_60; // 0x3a JumpB
	return 0; // 0x3b Return
	
Label_60:
	StopEventProcessing(); // 0x3c Func
	Stop(); // 0x3e TObjFunc
	return 0; // 0x40 Return
}


task_1_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_string, var_7_object, var_8_int, var_9_int, var_10_int, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_string, var_19_object, var_20_object, var_21_int, var_22_int, var_23_bool, var_24_string)
{
	var_25_string = "intro"; // 0x4d PushS
	var_26_bool = var_23_bool == var_25_string; // 0x4e Eq
	if(var_26_bool == 0) goto Label_84; // 0x4f JumpB
	DestroyWindow(); // 0x50 TObjFunc
	StopEventProcessing(); // 0x52 Func
	
Label_84:
	return 0; // 0x54 Return
}


task_2_event_100(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_object, var_19_int, var_20_int, var_21_bool, var_22_string)
{
	var_23_int = 27; // 0x12d PushI
	var_24_bool = var_22_string == var_23_int; // 0x12e Eq
	if(var_24_bool == 0) goto Label_307; // 0x12f JumpB
	func_536(var_21_bool, var_22_string); // 0x131 NEW_2
	
Label_307:
	return 0; // 0x133 Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object, var_20_object, var_21_int, var_22_int, var_23_bool, var_24_string)
{
	var_25_string = "newgame"; // 0x135 PushS
	var_26_bool = var_23_bool == var_25_string; // 0x136 Eq
	if(var_26_bool == 0) goto Label_316; // 0x137 JumpB
	var_2_int = 7; // 0x138 TMovI
	StopEventProcessing(); // 0x139 Func
	goto Label_535; // 0x13b Jump
	
Label_535:
	return 0; // 0x217 Return
	
Label_316:
	var_27_string = "quitgame"; // 0x13c PushS
	var_28_bool = var_23_bool == var_27_string; // 0x13d Eq
	if(var_28_bool == 0) goto Label_326; // 0x13e JumpB
	var_29_string = "Quit game"; // 0x13f PushS
	UITrace(var_29_string); // 0x140 Func
	Quit(); // 0x142 Func
	return 0; // 0x144 Return
	
Label_326:
	var_30_string = "loadgame"; // 0x146 PushS
	var_31_bool = var_23_bool == var_30_string; // 0x147 Eq
	if(var_31_bool == 0) goto Label_338; // 0x148 JumpB
	func_548(); // 0x14a NEW_2
	var_38_string = "load.xml"; // 0x14c PushS
	var_39_bool = 0; // 0x14d PushB
	CreateWindow(var_38_string, var_39_bool, var_21_int); // 0x14e Func
	return 0; // 0x150 Return
	
Label_338:
	var_40_string = "savegame"; // 0x152 PushS
	var_41_bool = var_23_bool == var_40_string; // 0x153 Eq
	if(var_41_bool == 0) goto Label_350; // 0x154 JumpB
	func_548(); // 0x156 NEW_2
	var_42_string = "save.xml"; // 0x158 PushS
	var_43_bool = 0; // 0x159 PushB
	CreateWindow(var_42_string, var_43_bool, var_20_object); // 0x15a Func
	return 0; // 0x15c Return
	
Label_350:
	var_44_string = "gameoptions"; // 0x15e PushS
	var_45_bool = var_23_bool == var_44_string; // 0x15f Eq
	if(var_45_bool == 0) goto Label_362; // 0x160 JumpB
	func_548(); // 0x162 NEW_2
	var_46_string = "options.xml"; // 0x164 PushS
	var_47_bool = 0; // 0x165 PushB
	CreateWindow(var_46_string, var_47_bool, var_19_object); // 0x166 Func
	return 0; // 0x168 Return
	
Label_362:
	var_48_string = "continue"; // 0x16a PushS
	var_49_bool = var_23_bool == var_48_string; // 0x16b Eq
	if(var_49_bool == 0) goto Label_370; // 0x16c JumpB
	var_2_int = 6; // 0x16d TMovI
	StopEventProcessing(); // 0x16e Func
	return 0; // 0x170 Return
	
Label_370:
	var_50_string = "credits"; // 0x172 PushS
	var_51_bool = var_23_bool == var_50_string; // 0x173 Eq
	if(var_51_bool == 0) goto Label_394; // 0x174 JumpB
	func_548(); // 0x176 NEW_2
	var_52_int = 0; // 0x178 PushV
	var_52_int = 8; // 0x179 MovI
	TaskCall(1); // 0x17a TaskCall
	func_65(var_53_object, var_52_int); // 0x17b NEW_2
	TaskReturn(); // 0x17c TaskReturn
	var_57_object = Obj(); // 0x17e PushV
	func_104(var_57_object); // 0x17f NEW_2
	var_3_bool = var_57_object; // 0x180 TMov
	var_62_object = Obj(); // 0x182 PushV
	func_112(var_62_object); // 0x183 NEW_2
	var_4_object = var_62_object; // 0x184 TMov
	var_67_bool = 1; // 0x186 PushB
	ShowCursor(var_67_bool); // 0x187 Func
	goto Label_535; // 0x189 Jump
	
Label_394:
	var_68_string = "danko"; // 0x18a PushS
	var_69_bool = var_23_bool == var_68_string; // 0x18b Eq
	if(var_69_bool == 0) goto Label_427; // 0x18c JumpB
	var_70_int = 0; // 0x18d PushI
	var_71_bool = var_22_int == var_70_int; // 0x18e Eq
	if(var_71_bool == 0) goto Label_402; // 0x18f JumpB
	return 0; // 0x190 Return
	
Label_402:
	var_72_int = 1; // 0x192 PushI
	var_73_bool = var_22_int == var_72_int; // 0x193 Eq
	if(var_73_bool == 0) goto Label_414; // 0x194 JumpB
	var_74_int = 202; // 0x195 PushI
	var_75_string = "player_name"; // 0x196 PushS
	SendMessage(var_74_int, var_75_string); // 0x197 Func
	var_76_int = 203; // 0x199 PushI
	var_77_string = "player_desc"; // 0x19a PushS
	SendMessage(var_76_int, var_77_string); // 0x19b Func
	goto Label_425; // 0x19d Jump
	
Label_425:
	return 0; // 0x1a9 Return
	
Label_414:
	var_78_int = 2; // 0x19e PushI
	var_79_bool = var_22_int == var_78_int; // 0x19f Eq
	if(var_79_bool == 0) goto Label_425; // 0x1a0 JumpB
	var_80_int = -1; // 0x1a1 PushI
	var_81_string = "player_name"; // 0x1a2 PushS
	SendMessage(var_80_int, var_81_string); // 0x1a3 Func
	var_82_int = -1; // 0x1a5 PushI
	var_83_string = "player_desc"; // 0x1a6 PushS
	SendMessage(var_82_int, var_83_string); // 0x1a7 Func
	
Label_427:
	var_84_string = "burah"; // 0x1ab PushS
	var_85_bool = var_23_bool == var_84_string; // 0x1ac Eq
	if(var_85_bool == 0) goto Label_462; // 0x1ad JumpB
	var_86_int = 0; // 0x1ae PushI
	var_87_bool = var_22_int == var_86_int; // 0x1af Eq
	if(var_87_bool == 0) goto Label_437; // 0x1b0 JumpB
	var_2_int = 2; // 0x1b1 TMovI
	StopEventProcessing(); // 0x1b2 Func
	goto Label_460; // 0x1b4 Jump
	
Label_460:
	return 0; // 0x1cc Return
	
Label_437:
	var_88_int = 1; // 0x1b5 PushI
	var_89_bool = var_22_int == var_88_int; // 0x1b6 Eq
	if(var_89_bool == 0) goto Label_449; // 0x1b7 JumpB
	var_90_int = 205; // 0x1b8 PushI
	var_91_string = "player_name"; // 0x1b9 PushS
	SendMessage(var_90_int, var_91_string); // 0x1ba Func
	var_92_int = 206; // 0x1bc PushI
	var_93_string = "player_desc"; // 0x1bd PushS
	SendMessage(var_92_int, var_93_string); // 0x1be Func
	goto Label_460; // 0x1c0 Jump
	
Label_449:
	var_94_int = 2; // 0x1c1 PushI
	var_95_bool = var_22_int == var_94_int; // 0x1c2 Eq
	if(var_95_bool == 0) goto Label_460; // 0x1c3 JumpB
	var_96_int = -1; // 0x1c4 PushI
	var_97_string = "player_name"; // 0x1c5 PushS
	SendMessage(var_96_int, var_97_string); // 0x1c6 Func
	var_98_int = -1; // 0x1c8 PushI
	var_99_string = "player_desc"; // 0x1c9 PushS
	SendMessage(var_98_int, var_99_string); // 0x1ca Func
	
Label_462:
	var_100_string = "klara"; // 0x1ce PushS
	var_101_bool = var_23_bool == var_100_string; // 0x1cf Eq
	if(var_101_bool == 0) goto Label_495; // 0x1d0 JumpB
	var_102_int = 0; // 0x1d1 PushI
	var_103_bool = var_22_int == var_102_int; // 0x1d2 Eq
	if(var_103_bool == 0) goto Label_470; // 0x1d3 JumpB
	return 0; // 0x1d4 Return
	
Label_470:
	var_104_int = 1; // 0x1d6 PushI
	var_105_bool = var_22_int == var_104_int; // 0x1d7 Eq
	if(var_105_bool == 0) goto Label_482; // 0x1d8 JumpB
	var_106_int = 208; // 0x1d9 PushI
	var_107_string = "player_name"; // 0x1da PushS
	SendMessage(var_106_int, var_107_string); // 0x1db Func
	var_108_int = 209; // 0x1dd PushI
	var_109_string = "player_desc"; // 0x1de PushS
	SendMessage(var_108_int, var_109_string); // 0x1df Func
	goto Label_493; // 0x1e1 Jump
	
Label_493:
	return 0; // 0x1ed Return
	
Label_482:
	var_110_int = 2; // 0x1e2 PushI
	var_111_bool = var_22_int == var_110_int; // 0x1e3 Eq
	if(var_111_bool == 0) goto Label_493; // 0x1e4 JumpB
	var_112_int = -1; // 0x1e5 PushI
	var_113_string = "player_name"; // 0x1e6 PushS
	SendMessage(var_112_int, var_113_string); // 0x1e7 Func
	var_114_int = -1; // 0x1e9 PushI
	var_115_string = "player_desc"; // 0x1ea PushS
	SendMessage(var_114_int, var_115_string); // 0x1eb Func
	
Label_495:
	var_116_string = "load"; // 0x1ef PushS
	var_117_bool = var_23_bool == var_116_string; // 0x1f0 Eq
	if(var_117_bool == 0) goto Label_512; // 0x1f1 JumpB
	var_118_int = 0; // 0x1f2 PushI
	var_119_bool = var_22_int == var_118_int; // 0x1f3 Eq
	if(var_119_bool == 0) goto Label_507; // 0x1f4 JumpB
	var_2_int = 4; // 0x1f5 TMovI
	GetFileName(var_15_string); // 0x1f6 ObjFunc
	StopEventProcessing(); // 0x1f8 Func
	goto Label_510; // 0x1fa Jump
	
Label_510:
	return 0; // 0x1fe Return
	
Label_507:
	func_536(var_23_bool, var_24_string); // 0x1fc NEW_2
	
Label_512:
	var_122_string = "save"; // 0x200 PushS
	var_123_bool = var_23_bool == var_122_string; // 0x201 Eq
	if(var_123_bool == 0) goto Label_528; // 0x202 JumpB
	var_124_int = 0; // 0x203 PushI
	var_125_bool = var_22_int == var_124_int; // 0x204 Eq
	if(var_125_bool == 0) goto Label_523; // 0x205 JumpB
	var_2_int = 5; // 0x206 TMovI
	var_9_object = var_24_string; // 0x207 TMov
	StopEventProcessing(); // 0x208 Func
	goto Label_526; // 0x20a Jump
	
Label_526:
	return 0; // 0x20e Return
	
Label_523:
	func_536(var_23_bool, var_24_string); // 0x20c NEW_2
	
Label_528:
	var_126_string = "options"; // 0x210 PushS
	var_127_bool = var_23_bool == var_126_string; // 0x211 Eq
	if(var_127_bool == 0) goto Label_535; // 0x212 JumpB
	func_536(var_23_bool, var_24_string); // 0x214 NEW_2
	return 0; // 0x216 Return
}


task_3_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_object, var_18_int, var_19_int, var_20_bool, var_21_string)
{
	var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_bool = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; // 0x25f PushV
	IsLost(var_28_bool); // 0x260 TObjFunc
	var_34_bool = var_28_bool; // 0x262 Push
	if(var_34_bool == 0) goto Label_617; // 0x263 JumpB
	Restore(var_29_bool); // 0x264 TObjFunc
	var_35_bool = var_29_bool == 0; // 0x266 Not
	if(var_35_bool == 0) goto Label_617; // 0x267 JumpB
	return 12; // 0x268 Return
	
Label_617:
	IsPlaying(var_30_bool); // 0x269 TObjFunc
	var_36_bool = var_30_bool; // 0x26b Push
	if(var_36_bool == 0) goto Label_650; // 0x26c JumpB
	var_37_int = 0; // 0x26d PushI
	var_38_int = 0; // 0x26e PushI
	StretchBlit(var_37_int, var_38_int, var_38_int, var_37_int); // 0x26f TObjFunc
	GetWindowSize(var_31_int, var_32_int); // 0x271 Func
	var_39_string = "default"; // 0x273 PushS
	var_40_int = 2; // 0x274 PushI
	var_41_float = var_31_int * var_40_int; // 0x275 Mult
	var_42_int = 3; // 0x276 PushI
	var_43_float = var_41_float / var_42_int; // 0x277 Div
	GetTextHeightInWidth(var_33_int, var_39_string, var_43_float, var_32_int); // 0x278 Func
	var_44_string = "default"; // 0x27a PushS
	var_45_int = 6; // 0x27b PushI
	var_46_float = var_31_int / var_45_int; // 0x27c Div
	var_47_int = var_32_int - var_33_int; // 0x27d Sub
	var_48_int = 2; // 0x27e PushI
	var_49_float = var_47_int / var_48_int; // 0x27f Div
	var_50_int = 2; // 0x280 PushI
	var_51_float = var_31_int * var_50_int; // 0x281 Mult
	var_52_int = 3; // 0x282 PushI
	var_53_float = var_51_float / var_52_int; // 0x283 Div
	var_54_int = 1; // 0x284 PushI
	var_55_int = 1; // 0x285 PushI
	var_56_int = 1; // 0x286 PushI
	PrintInWidth(var_33_int, var_44_string, var_46_float, var_49_float, var_53_float, var_53_float, var_54_int, var_55_int, var_56_int); // 0x287 Func
	goto Label_656; // 0x289 Jump
	
Label_656:
	return 12; // 0x290 Return
	
Label_650:
	var_57_int = 0; // 0x28a PushI
	var_58_int = 0; // 0x28b PushI
	StretchBlit(var_57_int, var_58_int, var_58_int, var_57_int); // 0x28c TObjFunc
	StopEventProcessing(); // 0x28e Func
}


task_3_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_object, var_18_int, var_19_int, var_20_bool, var_21_string, var_22_int)
{
	var_23_bool = var_3_bool == 0; // 0x292 Not
	if(var_23_bool == 0) goto Label_661; // 0x293 JumpB
	return 0; // 0x294 Return
	
Label_661:
	StopEventProcessing(); // 0x295 Func
	Stop(); // 0x297 TObjFunc
	return 0; // 0x299 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_object, var_18_int, var_19_int, var_20_bool, var_21_string)
{
	EventDisable(1); // 0x55 EventDisable
	EventDisable(0); // 0x56 EventDisable
	UISync(); // 0x57 Func
	EventEnable(1); // 0x59 EventEnable
	EventEnable(0); // 0x5a EventEnable
	var_22_string = ""; var_23_int = 0; var_24_bool = 0; // 0x5b PushV
	var_22_string = "death.wmv"; // 0x5c MovS
	var_23_int = 2000; // 0x5d MovI
	var_24_bool = 1; // 0x5e MovB
	TaskCall(3); // 0x5f TaskCall
	func_575(var_27_int, var_28_bool, var_29_string, var_22_string, var_23_int, var_24_bool); // 0x60 NEW_2
	TaskReturn(); // 0x61 TaskReturn
	var_35_bool = 0; // 0x63 PushV
	var_35_bool = 0; // 0x64 MovB
	func_120(var_16_object, var_17_object, var_18_int, var_19_int, var_20_bool, var_21_string, var_35_bool); // 0x65 NEW_2
	return 0; // 0x67 Return
}


func_0(var_0_object, var_3_bool, var_72_string, var_73_bool)
{
	var_3_bool = var_73_bool; // 0x1 TMov
	var_78_bool = 1; // 0x2 PushB
	SetOwnerDraw(var_78_bool); // 0x3 Func
	var_79_bool = 0; // 0x5 PushB
	ShowCursor(var_79_bool); // 0x6 Func
	CaptureKeyboard(); // 0x8 Func
	GetWindowSize(var_73_bool, var_72_string); // 0xa Func
	LoadVideo(var_72_string); // 0xc Func
	FindVideo(var_0_object, var_72_string); // 0xe Func
	var_80_bool = 0; // 0x10 PushB
	Play(var_80_bool); // 0x11 TObjFunc
	ProcessEvents(); // 0x13 Func
	var_81_bool = 0; // 0x15 PushB
	SetOwnerDraw(var_81_bool); // 0x16 Func
	var_82_bool = 1; // 0x18 PushB
	ShowCursor(var_82_bool); // 0x19 Func
	ReleaseVideo(var_72_string); // 0x1b Func
	return 0; // 0x1d Return
}


func_65(var_0_object, var_67_int)
{
	var_69_string = "intro.xml"; // 0x42 PushS
	var_70_bool = 0; // 0x43 PushB
	CreateWindow(var_69_string, var_70_bool, var_0_object); // 0x44 Func
	var_71_string = "intro"; // 0x46 PushS
	SendMessage(var_67_int, var_71_string); // 0x47 Func
	ProcessEvents(); // 0x49 Func
	return 0; // 0x4b Return
}


func_548()
{
	var_58_bool = var_3_bool; // 0x224 PushT
	if(var_58_bool == 0) goto Label_552; // 0x225 JumpB
	DestroyWindow(); // 0x226 TObjFunc
	
Label_552:
	var_59_object = var_4_object; // 0x228 PushT
	if(var_59_object == 0) goto Label_556; // 0x229 JumpB
	DestroyWindow(); // 0x22a TObjFunc
	
Label_556:
	var_60_int = var_5_int; // 0x22c PushT
	if(var_60_int == 0) goto Label_560; // 0x22d JumpB
	DestroyWindow(); // 0x22e TObjFunc
	
Label_560:
	var_61_int = var_6_int; // 0x230 PushT
	if(var_61_int == 0) goto Label_564; // 0x231 JumpB
	DestroyWindow(); // 0x232 TObjFunc
	
Label_564:
	var_62_int = var_7_int; // 0x234 PushT
	if(var_62_int == 0) goto Label_568; // 0x235 JumpB
	DestroyWindow(); // 0x236 TObjFunc
	
Label_568:
	var_63_object = var_8_object; // 0x238 PushT
	if(var_63_object == 0) goto Label_572; // 0x239 JumpB
	DestroyWindow(); // 0x23a TObjFunc
	
Label_572:
	CaptureKeyboard(); // 0x23c Func
	return 0; // 0x23e Return
}


func_104(var_118_object)
{
	var_119_object = Obj(); var_120_object = Obj(); // 0x68 PushV
	var_121_string = "game_buttons.xml"; // 0x69 PushS
	var_122_bool = 0; // 0x6a PushB
	CreateWindow(var_121_string, var_122_bool, var_120_object); // 0x6b Func
	var_118_object = var_120_object; // 0x6d Mov
	return 2; // 0x6e Return
}


func_112(var_123_object)
{
	var_124_object = Obj(); var_125_object = Obj(); // 0x70 PushV
	var_126_string = "game_logo.xml"; // 0x71 PushS
	var_127_bool = 0; // 0x72 PushB
	CreateWindow(var_126_string, var_127_bool, var_125_object); // 0x73 Func
	var_123_object = var_125_object; // 0x75 Mov
	return 2; // 0x76 Return
}


func_536(var_3_bool, var_4_object)
{
	func_548(); // 0x219 NEW_2
	var_120_object = Obj(); // 0x21b PushV
	func_104(var_120_object); // 0x21c NEW_2
	var_3_bool = var_120_object; // 0x21d TMov
	var_121_object = Obj(); // 0x21f PushV
	func_112(var_121_object); // 0x220 NEW_2
	var_4_object = var_121_object; // 0x221 TMov
	return 0; // 0x223 Return
}


func_120(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_35_bool)
{
	var_36_bool = 0; var_37_bool = 0; var_38_bool = 0; var_39_bool = 0; var_40_string = ""; var_41_bool = 0; var_42_bool = 0; var_43_bool = 0; var_44_bool = 0; var_45_string = ""; // 0x78 PushV
	CaptureKeyboard(); // 0x79 Func
	var_2_int = 0; // 0x7b TMovI
	GetWindowSize(var_0_object, var_45_string); // 0x7c Func
	var_46_string = "default"; // 0x7e PushS
	SetCursor(var_46_string); // 0x7f Func
	var_47_string = "default"; // 0x81 PushS
	SetBackground(var_47_string); // 0x82 Func
	var_48_string = "menumusic"; // 0x84 PushS
	PlaySound(var_48_string); // 0x85 Func
	var_49_bool = 1; // 0x87 PushB
	ShowCursor(var_49_bool); // 0x88 Func
	var_50_bool = var_35_bool; // 0x8a Push
	if(var_50_bool == 0) goto Label_145; // 0x8b JumpB
	var_51_string = "game_choose_pers.xml"; // 0x8c PushS
	var_52_bool = 0; // 0x8d PushB
	CreateWindow(var_51_string, var_52_bool, var_43_bool); // 0x8e Func
	goto Label_153; // 0x90 Jump
	
Label_153:
	var_53_int = 131072; // 0x99 PushI
	var_54_string = "klara"; // 0x9a PushS
	SendMessage(var_53_int, var_54_string); // 0x9b Func
	var_55_int = 131072; // 0x9d PushI
	var_56_string = "danko"; // 0x9e PushS
	SendMessage(var_55_int, var_56_string); // 0x9f Func
	
Label_161:
	var_57_bool = var_2_int == 0; // 0xa1 Not
	if(var_57_bool == 0) goto Label_166; // 0xa2 JumpB
	ProcessEvents(); // 0xa3 Func
	goto Label_161; // 0xa5 Jump
	
Label_166:
	func_548(); // 0xa7 NEW_2
	var_64_int = 1; // 0xa9 PushI
	var_65_bool = var_2_int == var_64_int; // 0xaa Eq
	if(var_65_bool == 0) goto Label_195; // 0xab JumpB
	var_66_string = "menumusic"; // 0xac PushS
	PauseSound(var_66_string); // 0xad Func
	var_67_int = 0; // 0xaf PushV
	var_67_int = 1; // 0xb0 MovI
	TaskCall(1); // 0xb1 TaskCall
	func_65(var_68_object, var_67_int); // 0xb2 NEW_2
	TaskReturn(); // 0xb3 TaskReturn
	var_72_string = ""; var_73_bool = 0; // 0xb5 PushV
	var_72_string = "intro_danko.wmv"; // 0xb6 MovS
	var_73_bool = 1; // 0xb7 MovB
	TaskCall(0); // 0xb8 TaskCall
	func_0(var_76_int, var_77_bool, var_72_string, var_73_bool); // 0xb9 NEW_2
	TaskReturn(); // 0xba TaskReturn
	RemoveWorld(); // 0xbc Func
	UISync(); // 0xbe Func
	DestroyWindow(); // 0xc0 Func
	goto Label_299; // 0xc2 Jump
	
Label_299:
	return 10; // 0x12b Return
	
Label_195:
	var_83_int = 2; // 0xc3 PushI
	var_84_bool = var_2_int == var_83_int; // 0xc4 Eq
	if(var_84_bool == 0) goto Label_224; // 0xc5 JumpB
	var_85_string = "menumusic"; // 0xc6 PushS
	PauseSound(var_85_string); // 0xc7 Func
	var_86_int = 0; // 0xc9 PushV
	var_86_int = 2; // 0xca MovI
	TaskCall(1); // 0xcb TaskCall
	func_65(var_87_object, var_86_int); // 0xcc NEW_2
	TaskReturn(); // 0xcd TaskReturn
	var_88_string = ""; var_89_bool = 0; // 0xcf PushV
	var_88_string = "intro_burah.wmv"; // 0xd0 MovS
	var_89_bool = 1; // 0xd1 MovB
	TaskCall(0); // 0xd2 TaskCall
	func_0(var_92_int, var_93_bool, var_88_string, var_89_bool); // 0xd3 NEW_2
	TaskReturn(); // 0xd4 TaskReturn
	RemoveWorld(); // 0xd6 Func
	UISync(); // 0xd8 Func
	DestroyWindow(); // 0xda Func
	var_94_string = "demo_save"; // 0xdc PushS
	LoadGame(var_41_bool, var_94_string); // 0xdd Func
	goto Label_299; // 0xdf Jump
	
Label_224:
	var_95_int = 3; // 0xe0 PushI
	var_96_bool = var_2_int == var_95_int; // 0xe1 Eq
	if(var_96_bool == 0) goto Label_250; // 0xe2 JumpB
	var_97_string = "menumusic"; // 0xe3 PushS
	PauseSound(var_97_string); // 0xe4 Func
	var_98_int = 0; // 0xe6 PushV
	var_98_int = 3; // 0xe7 MovI
	TaskCall(1); // 0xe8 TaskCall
	func_65(var_99_object, var_98_int); // 0xe9 NEW_2
	TaskReturn(); // 0xea TaskReturn
	var_100_string = ""; var_101_bool = 0; // 0xec PushV
	var_100_string = "intro_klara.wmv"; // 0xed MovS
	var_101_bool = 1; // 0xee MovB
	TaskCall(0); // 0xef TaskCall
	func_0(var_104_int, var_105_bool, var_100_string, var_101_bool); // 0xf0 NEW_2
	TaskReturn(); // 0xf1 TaskReturn
	RemoveWorld(); // 0xf3 Func
	UISync(); // 0xf5 Func
	DestroyWindow(); // 0xf7 Func
	goto Label_299; // 0xf9 Jump
	
Label_250:
	var_106_int = 4; // 0xfa PushI
	var_107_bool = var_2_int == var_106_int; // 0xfb Eq
	if(var_107_bool == 0) goto Label_269; // 0xfc JumpB
	var_108_string = "menumusic"; // 0xfd PushS
	PauseSound(var_108_string); // 0xfe Func
	var_109_string = "Loading : "; // 0x100 PushS
	var_110_int = var_109_string + var_10_object; // 0x101 Add
	Trace(var_110_int); // 0x102 Func
	RemoveWorld(); // 0x104 Func
	UISync(); // 0x106 Func
	DestroyWindow(); // 0x108 Func
	LoadGame(var_42_bool, var_36_bool); // 0x10a Func
	goto Label_299; // 0x10c Jump
	
Label_269:
	var_111_int = 5; // 0x10d PushI
	var_112_bool = var_2_int == var_111_int; // 0x10e Eq
	if(var_112_bool == 0) goto Label_286; // 0x10f JumpB
	var_113_bool = var_9_object == 0; // 0x110 Not
	if(var_113_bool == 0) goto Label_279; // 0x111 JumpB
	DestroyWindow(); // 0x112 Func
	SaveGame(var_43_bool); // 0x114 Func
	goto Label_285; // 0x116 Jump
	
Label_285:
	goto Label_299; // 0x11d Jump
	
Label_279:
	DestroyWindow(); // 0x117 Func
	GetFileName(var_45_string); // 0x119 TObjFunc
	SaveGame(var_44_bool, var_45_string); // 0x11b Func
	
Label_286:
	var_114_int = 7; // 0x11e PushI
	var_115_bool = var_2_int == var_114_int; // 0x11f Eq
	if(var_115_bool == 0) goto Label_299; // 0x120 JumpB
	RemoveWorld(); // 0x121 Func
	UISync(); // 0x123 Func
	DestroyWindow(); // 0x125 Func
	var_116_string = "world_intro.xml"; // 0x127 PushS
	var_117_string = "player_intro.xml"; // 0x128 PushS
	NewGame(var_116_string, var_117_string); // 0x129 Func
	
Label_145:
	var_118_object = Obj(); // 0x91 PushV
	func_104(var_118_object); // 0x92 NEW_2
	var_3_bool = var_118_object; // 0x93 TMov
	var_123_object = Obj(); // 0x95 PushV
	func_112(var_123_object); // 0x96 NEW_2
	var_4_object = var_123_object; // 0x97 TMov
}


func_575(var_0_object, var_3_bool, var_22_string, var_23_int, var_24_bool, var_29_string)
{
	var_3_bool = var_24_bool; // 0x240 TMov
	GetStringByID(var_29_string, var_23_int); // 0x241 Func
	var_30_bool = 1; // 0x243 PushB
	SetOwnerDraw(var_30_bool); // 0x244 Func
	var_31_bool = 0; // 0x246 PushB
	ShowCursor(var_31_bool); // 0x247 Func
	CaptureKeyboard(); // 0x249 Func
	GetWindowSize(var_24_bool, var_23_int); // 0x24b Func
	LoadVideo(var_22_string); // 0x24d Func
	FindVideo(var_0_object, var_22_string); // 0x24f Func
	var_32_bool = 0; // 0x251 PushB
	Play(var_32_bool); // 0x252 TObjFunc
	ProcessEvents(); // 0x254 Func
	var_33_bool = 0; // 0x256 PushB
	SetOwnerDraw(var_33_bool); // 0x257 Func
	var_34_bool = 1; // 0x259 PushB
	ShowCursor(var_34_bool); // 0x25a Func
	ReleaseVideo(var_22_string); // 0x25c Func
	return 0; // 0x25e Return
}


