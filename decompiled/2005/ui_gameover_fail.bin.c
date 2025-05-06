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
	var_18_int = 27; // 0x12d PushI
	var_19_bool = var_17_int == var_18_int; // 0x12e Eq
	if(var_19_bool == 0) goto Label_307; // 0x12f JumpB
	func_566(var_16_object, var_17_int); // 0x131 NEW_2
	
Label_307:
	return 0; // 0x133 Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_17_int, var_18_string, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0; // 0x134 PushV
	var_22_string = "newgame"; // 0x135 PushS
	var_23_bool = var_18_string == var_22_string; // 0x136 Eq
	if(var_23_bool == 0) goto Label_316; // 0x137 JumpB
	var_2_int = 7; // 0x138 TMovI
	StopEventProcessing(); // 0x139 Func
	goto Label_565; // 0x13b Jump
	
Label_565:
	return 2; // 0x235 Return
	
Label_316:
	var_24_string = "quitgame"; // 0x13c PushS
	var_25_bool = var_18_string == var_24_string; // 0x13d Eq
	if(var_25_bool == 0) goto Label_326; // 0x13e JumpB
	var_26_string = "Quit game"; // 0x13f PushS
	UITrace(var_26_string); // 0x140 Func
	Quit(); // 0x142 Func
	return 2; // 0x144 Return
	
Label_326:
	var_27_string = "loadgame"; // 0x146 PushS
	var_28_bool = var_18_string == var_27_string; // 0x147 Eq
	if(var_28_bool == 0) goto Label_338; // 0x148 JumpB
	func_578(); // 0x14a NEW_2
	var_35_string = "load.xml"; // 0x14c PushS
	var_36_bool = 0; // 0x14d PushB
	CreateWindow(var_35_string, var_36_bool, var_18_string); // 0x14e Func
	return 2; // 0x150 Return
	
Label_338:
	var_37_string = "savegame"; // 0x152 PushS
	var_38_bool = var_18_string == var_37_string; // 0x153 Eq
	if(var_38_bool == 0) goto Label_350; // 0x154 JumpB
	func_578(); // 0x156 NEW_2
	var_39_string = "save.xml"; // 0x158 PushS
	var_40_bool = 0; // 0x159 PushB
	CreateWindow(var_39_string, var_40_bool, var_17_int); // 0x15a Func
	return 2; // 0x15c Return
	
Label_350:
	var_41_string = "gameoptions"; // 0x15e PushS
	var_42_bool = var_18_string == var_41_string; // 0x15f Eq
	if(var_42_bool == 0) goto Label_362; // 0x160 JumpB
	func_578(); // 0x162 NEW_2
	var_43_string = "options.xml"; // 0x164 PushS
	var_44_bool = 0; // 0x165 PushB
	CreateWindow(var_43_string, var_44_bool, var_16_object); // 0x166 Func
	return 2; // 0x168 Return
	
Label_362:
	var_45_string = "continue"; // 0x16a PushS
	var_46_bool = var_18_string == var_45_string; // 0x16b Eq
	if(var_46_bool == 0) goto Label_370; // 0x16c JumpB
	var_2_int = 6; // 0x16d TMovI
	StopEventProcessing(); // 0x16e Func
	return 2; // 0x170 Return
	
Label_370:
	var_47_string = "credits"; // 0x172 PushS
	var_48_bool = var_18_string == var_47_string; // 0x173 Eq
	if(var_48_bool == 0) goto Label_394; // 0x174 JumpB
	func_578(); // 0x176 NEW_2
	var_49_int = 0; // 0x178 PushV
	var_49_int = 8; // 0x179 MovI
	TaskCall(1); // 0x17a TaskCall
	func_65(var_50_object, var_49_int); // 0x17b NEW_2
	TaskReturn(); // 0x17c TaskReturn
	var_54_object = Obj(); // 0x17e PushV
	func_103(var_54_object); // 0x17f NEW_2
	var_3_bool = var_54_object; // 0x180 TMov
	var_59_object = Obj(); // 0x182 PushV
	func_111(var_59_object); // 0x183 NEW_2
	var_4_object = var_59_object; // 0x184 TMov
	var_64_bool = 1; // 0x186 PushB
	ShowCursor(var_64_bool); // 0x187 Func
	goto Label_565; // 0x189 Jump
	
Label_394:
	var_65_string = "danko"; // 0x18a PushS
	var_66_bool = var_18_string == var_65_string; // 0x18b Eq
	if(var_66_bool == 0) goto Label_429; // 0x18c JumpB
	var_67_int = 0; // 0x18d PushI
	var_68_bool = var_17_int == var_67_int; // 0x18e Eq
	if(var_68_bool == 0) goto Label_404; // 0x18f JumpB
	var_2_int = 1; // 0x190 TMovI
	StopEventProcessing(); // 0x191 Func
	goto Label_427; // 0x193 Jump
	
Label_427:
	return 2; // 0x1ab Return
	
Label_404:
	var_69_int = 1; // 0x194 PushI
	var_70_bool = var_17_int == var_69_int; // 0x195 Eq
	if(var_70_bool == 0) goto Label_416; // 0x196 JumpB
	var_71_int = 202; // 0x197 PushI
	var_72_string = "player_name"; // 0x198 PushS
	SendMessage(var_71_int, var_72_string); // 0x199 Func
	var_73_int = 203; // 0x19b PushI
	var_74_string = "player_desc"; // 0x19c PushS
	SendMessage(var_73_int, var_74_string); // 0x19d Func
	goto Label_427; // 0x19f Jump
	
Label_416:
	var_75_int = 2; // 0x1a0 PushI
	var_76_bool = var_17_int == var_75_int; // 0x1a1 Eq
	if(var_76_bool == 0) goto Label_427; // 0x1a2 JumpB
	var_77_int = -1; // 0x1a3 PushI
	var_78_string = "player_name"; // 0x1a4 PushS
	SendMessage(var_77_int, var_78_string); // 0x1a5 Func
	var_79_int = -1; // 0x1a7 PushI
	var_80_string = "player_desc"; // 0x1a8 PushS
	SendMessage(var_79_int, var_80_string); // 0x1a9 Func
	
Label_429:
	var_81_string = "burah"; // 0x1ad PushS
	var_82_bool = var_18_string == var_81_string; // 0x1ae Eq
	if(var_82_bool == 0) goto Label_464; // 0x1af JumpB
	var_83_int = 0; // 0x1b0 PushI
	var_84_bool = var_17_int == var_83_int; // 0x1b1 Eq
	if(var_84_bool == 0) goto Label_439; // 0x1b2 JumpB
	var_2_int = 2; // 0x1b3 TMovI
	StopEventProcessing(); // 0x1b4 Func
	goto Label_462; // 0x1b6 Jump
	
Label_462:
	return 2; // 0x1ce Return
	
Label_439:
	var_85_int = 1; // 0x1b7 PushI
	var_86_bool = var_17_int == var_85_int; // 0x1b8 Eq
	if(var_86_bool == 0) goto Label_451; // 0x1b9 JumpB
	var_87_int = 205; // 0x1ba PushI
	var_88_string = "player_name"; // 0x1bb PushS
	SendMessage(var_87_int, var_88_string); // 0x1bc Func
	var_89_int = 206; // 0x1be PushI
	var_90_string = "player_desc"; // 0x1bf PushS
	SendMessage(var_89_int, var_90_string); // 0x1c0 Func
	goto Label_462; // 0x1c2 Jump
	
Label_451:
	var_91_int = 2; // 0x1c3 PushI
	var_92_bool = var_17_int == var_91_int; // 0x1c4 Eq
	if(var_92_bool == 0) goto Label_462; // 0x1c5 JumpB
	var_93_int = -1; // 0x1c6 PushI
	var_94_string = "player_name"; // 0x1c7 PushS
	SendMessage(var_93_int, var_94_string); // 0x1c8 Func
	var_95_int = -1; // 0x1ca PushI
	var_96_string = "player_desc"; // 0x1cb PushS
	SendMessage(var_95_int, var_96_string); // 0x1cc Func
	
Label_464:
	var_97_string = "klara"; // 0x1d0 PushS
	var_98_bool = var_18_string == var_97_string; // 0x1d1 Eq
	if(var_98_bool == 0) goto Label_525; // 0x1d2 JumpB
	var_21_bool = 1; // 0x1d3 MovB
	var_99_bool = 0; // 0x1d4 PushV
	var_99_bool = 0; // 0x1d5 MovB
	var_100_bool = 0; // 0x1d6 PushV
	func_613(var_100_bool); // 0x1d7 NEW_2
	var_106_bool = var_100_bool == 0; // 0x1d9 Not
	if(var_106_bool == 0) goto Label_481; // 0x1da JumpB
	var_107_bool = 0; // 0x1db PushV
	func_605(var_107_bool); // 0x1dc NEW_2
	var_113_bool = var_107_bool == 0; // 0x1de Not
	if(var_113_bool == 0) goto Label_481; // 0x1df JumpB
	var_99_bool = 1; // 0x1e0 MovB
	
Label_481:
	if(var_99_bool == 0) goto Label_483; // 0x1e1 JumpB
	var_21_bool = 0; // 0x1e2 MovB
	
Label_483:
	var_114_int = 0; // 0x1e3 PushI
	var_115_bool = var_17_int == var_114_int; // 0x1e4 Eq
	if(var_115_bool == 0) goto Label_493; // 0x1e5 JumpB
	var_116_bool = var_21_bool == 0; // 0x1e6 Not
	if(var_116_bool == 0) goto Label_489; // 0x1e7 JumpB
	return 2; // 0x1e8 Return
	
Label_489:
	var_2_int = 3; // 0x1e9 TMovI
	StopEventProcessing(); // 0x1ea Func
	goto Label_523; // 0x1ec Jump
	
Label_523:
	return 2; // 0x20b Return
	
Label_493:
	var_117_int = 1; // 0x1ed PushI
	var_118_bool = var_17_int == var_117_int; // 0x1ee Eq
	if(var_118_bool == 0) goto Label_512; // 0x1ef JumpB
	var_119_int = 208; // 0x1f0 PushI
	var_120_string = "player_name"; // 0x1f1 PushS
	SendMessage(var_119_int, var_120_string); // 0x1f2 Func
	var_121_bool = var_21_bool; // 0x1f4 Push
	if(var_121_bool == 0) goto Label_507; // 0x1f5 JumpB
	var_122_int = 209; // 0x1f6 PushI
	var_123_string = "player_desc"; // 0x1f7 PushS
	SendMessage(var_122_int, var_123_string); // 0x1f8 Func
	goto Label_511; // 0x1fa Jump
	
Label_511:
	goto Label_523; // 0x1ff Jump
	
Label_507:
	var_124_int = 213; // 0x1fb PushI
	var_125_string = "player_desc"; // 0x1fc PushS
	SendMessage(var_124_int, var_125_string); // 0x1fd Func
	
Label_512:
	var_126_int = 2; // 0x200 PushI
	var_127_bool = var_17_int == var_126_int; // 0x201 Eq
	if(var_127_bool == 0) goto Label_523; // 0x202 JumpB
	var_128_int = -1; // 0x203 PushI
	var_129_string = "player_name"; // 0x204 PushS
	SendMessage(var_128_int, var_129_string); // 0x205 Func
	var_130_int = -1; // 0x207 PushI
	var_131_string = "player_desc"; // 0x208 PushS
	SendMessage(var_130_int, var_131_string); // 0x209 Func
	
Label_525:
	var_132_string = "load"; // 0x20d PushS
	var_133_bool = var_18_string == var_132_string; // 0x20e Eq
	if(var_133_bool == 0) goto Label_542; // 0x20f JumpB
	var_134_int = 0; // 0x210 PushI
	var_135_bool = var_17_int == var_134_int; // 0x211 Eq
	if(var_135_bool == 0) goto Label_537; // 0x212 JumpB
	var_2_int = 4; // 0x213 TMovI
	GetFileName(var_12_object); // 0x214 ObjFunc
	StopEventProcessing(); // 0x216 Func
	goto Label_540; // 0x218 Jump
	
Label_540:
	return 2; // 0x21c Return
	
Label_537:
	func_566(var_20_bool, var_21_bool); // 0x21a NEW_2
	
Label_542:
	var_138_string = "save"; // 0x21e PushS
	var_139_bool = var_18_string == var_138_string; // 0x21f Eq
	if(var_139_bool == 0) goto Label_558; // 0x220 JumpB
	var_140_int = 0; // 0x221 PushI
	var_141_bool = var_17_int == var_140_int; // 0x222 Eq
	if(var_141_bool == 0) goto Label_553; // 0x223 JumpB
	var_2_int = 5; // 0x224 TMovI
	var_9_object = var_19_object; // 0x225 TMov
	StopEventProcessing(); // 0x226 Func
	goto Label_556; // 0x228 Jump
	
Label_556:
	return 2; // 0x22c Return
	
Label_553:
	func_566(var_20_bool, var_21_bool); // 0x22a NEW_2
	
Label_558:
	var_142_string = "options"; // 0x22e PushS
	var_143_bool = var_18_string == var_142_string; // 0x22f Eq
	if(var_143_bool == 0) goto Label_565; // 0x230 JumpB
	func_566(var_20_bool, var_21_bool); // 0x232 NEW_2
	return 2; // 0x234 Return
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object)
{
	EventDisable(1); // 0x55 EventDisable
	EventDisable(0); // 0x56 EventDisable
	UISync(); // 0x57 Func
	EventEnable(1); // 0x59 EventEnable
	EventEnable(0); // 0x5a EventEnable
	var_17_string = ""; var_18_bool = 0; // 0x5b PushV
	var_17_string = "death_fail.wmv"; // 0x5c MovS
	var_18_bool = 1; // 0x5d MovB
	TaskCall(0); // 0x5e TaskCall
	func_0(var_21_int, var_22_bool, var_17_string, var_18_bool); // 0x5f NEW_2
	TaskReturn(); // 0x60 TaskReturn
	var_28_bool = 0; // 0x62 PushV
	var_28_bool = 0; // 0x63 MovB
	func_119(var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_object, var_28_bool); // 0x64 NEW_2
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


func_65(var_0_object, var_54_int)
{
	var_56_string = "intro.xml"; // 0x42 PushS
	var_57_bool = 0; // 0x43 PushB
	CreateWindow(var_56_string, var_57_bool, var_0_object); // 0x44 Func
	var_58_string = "intro"; // 0x46 PushS
	SendMessage(var_54_int, var_58_string); // 0x47 Func
	ProcessEvents(); // 0x49 Func
	return 0; // 0x4b Return
}


func_578()
{
	var_45_bool = var_3_bool; // 0x242 PushT
	if(var_45_bool == 0) goto Label_582; // 0x243 JumpB
	DestroyWindow(); // 0x244 TObjFunc
	
Label_582:
	var_46_object = var_4_object; // 0x246 PushT
	if(var_46_object == 0) goto Label_586; // 0x247 JumpB
	DestroyWindow(); // 0x248 TObjFunc
	
Label_586:
	var_47_int = var_5_int; // 0x24a PushT
	if(var_47_int == 0) goto Label_590; // 0x24b JumpB
	DestroyWindow(); // 0x24c TObjFunc
	
Label_590:
	var_48_int = var_6_int; // 0x24e PushT
	if(var_48_int == 0) goto Label_594; // 0x24f JumpB
	DestroyWindow(); // 0x250 TObjFunc
	
Label_594:
	var_49_int = var_7_int; // 0x252 PushT
	if(var_49_int == 0) goto Label_598; // 0x253 JumpB
	DestroyWindow(); // 0x254 TObjFunc
	
Label_598:
	var_50_object = var_8_object; // 0x256 PushT
	if(var_50_object == 0) goto Label_602; // 0x257 JumpB
	DestroyWindow(); // 0x258 TObjFunc
	
Label_602:
	CaptureKeyboard(); // 0x25a Func
	return 0; // 0x25c Return
}


func_613(var_100_bool)
{
	var_101_int = 0; var_102_int = 0; // 0x265 PushV
	var_103_string = "DankoCompleted"; // 0x266 PushS
	var_104_int = 0; // 0x267 PushI
	GetRegistryData(var_102_int, var_103_string, var_104_int); // 0x268 Func
	var_105_int = 0; // 0x26a PushI
	var_100_bool = var_102_int != var_105_int; // 0x26b Neq2
	return 2; // 0x26c Return
}


func_103(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x67 PushV
	var_108_string = "game_buttons.xml"; // 0x68 PushS
	var_109_bool = 0; // 0x69 PushB
	CreateWindow(var_108_string, var_109_bool, var_107_object); // 0x6a Func
	var_105_object = var_107_object; // 0x6c Mov
	return 2; // 0x6d Return
}


func_111(var_110_object)
{
	var_111_object = Obj(); var_112_object = Obj(); // 0x6f PushV
	var_113_string = "game_logo.xml"; // 0x70 PushS
	var_114_bool = 0; // 0x71 PushB
	CreateWindow(var_113_string, var_114_bool, var_112_object); // 0x72 Func
	var_110_object = var_112_object; // 0x74 Mov
	return 2; // 0x75 Return
}


func_566(var_3_bool, var_4_object)
{
	func_578(); // 0x237 NEW_2
	var_136_object = Obj(); // 0x239 PushV
	func_103(var_136_object); // 0x23a NEW_2
	var_3_bool = var_136_object; // 0x23b TMov
	var_137_object = Obj(); // 0x23d PushV
	func_111(var_137_object); // 0x23e NEW_2
	var_4_object = var_137_object; // 0x23f TMov
	return 0; // 0x241 Return
}


func_119(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_16_object, var_28_bool)
{
	var_29_bool = 0; var_30_bool = 0; var_31_bool = 0; var_32_string = ""; var_33_bool = 0; var_34_bool = 0; var_35_bool = 0; var_36_string = ""; // 0x77 PushV
	CaptureKeyboard(); // 0x78 Func
	var_2_int = 0; // 0x7a TMovI
	GetWindowSize(var_0_object, var_36_string); // 0x7b Func
	var_37_string = "default"; // 0x7d PushS
	SetCursor(var_37_string); // 0x7e Func
	var_38_string = "default"; // 0x80 PushS
	SetBackground(var_38_string); // 0x81 Func
	var_39_string = "menumusic"; // 0x83 PushS
	PlaySound(var_39_string); // 0x84 Func
	var_40_bool = 1; // 0x86 PushB
	ShowCursor(var_40_bool); // 0x87 Func
	var_41_bool = var_28_bool; // 0x89 Push
	if(var_41_bool == 0) goto Label_144; // 0x8a JumpB
	var_42_string = "game_choose_pers.xml"; // 0x8b PushS
	var_43_bool = 0; // 0x8c PushB
	CreateWindow(var_42_string, var_43_bool, var_34_bool); // 0x8d Func
	goto Label_152; // 0x8f Jump
	
Label_152:
	var_44_bool = var_2_int == 0; // 0x98 Not
	if(var_44_bool == 0) goto Label_157; // 0x99 JumpB
	ProcessEvents(); // 0x9a Func
	goto Label_152; // 0x9c Jump
	
Label_157:
	func_578(); // 0x9e NEW_2
	var_51_int = 1; // 0xa0 PushI
	var_52_bool = var_2_int == var_51_int; // 0xa1 Eq
	if(var_52_bool == 0) goto Label_190; // 0xa2 JumpB
	var_53_string = "menumusic"; // 0xa3 PushS
	PauseSound(var_53_string); // 0xa4 Func
	var_54_int = 0; // 0xa6 PushV
	var_54_int = 1; // 0xa7 MovI
	TaskCall(1); // 0xa8 TaskCall
	func_65(var_55_object, var_54_int); // 0xa9 NEW_2
	TaskReturn(); // 0xaa TaskReturn
	var_59_string = ""; var_60_bool = 0; // 0xac PushV
	var_59_string = "intro_danko.wmv"; // 0xad MovS
	var_60_bool = 1; // 0xae MovB
	TaskCall(0); // 0xaf TaskCall
	func_0(var_63_int, var_64_bool, var_59_string, var_60_bool); // 0xb0 NEW_2
	TaskReturn(); // 0xb1 TaskReturn
	RemoveWorld(); // 0xb3 Func
	UISync(); // 0xb5 Func
	DestroyWindow(); // 0xb7 Func
	var_65_string = "world_danko.xml"; // 0xb9 PushS
	var_66_string = "player_danko.xml"; // 0xba PushS
	NewGame(var_65_string, var_66_string); // 0xbb Func
	goto Label_299; // 0xbd Jump
	
Label_299:
	return 8; // 0x12b Return
	
Label_190:
	var_67_int = 2; // 0xbe PushI
	var_68_bool = var_2_int == var_67_int; // 0xbf Eq
	if(var_68_bool == 0) goto Label_220; // 0xc0 JumpB
	var_69_string = "menumusic"; // 0xc1 PushS
	PauseSound(var_69_string); // 0xc2 Func
	var_70_int = 0; // 0xc4 PushV
	var_70_int = 2; // 0xc5 MovI
	TaskCall(1); // 0xc6 TaskCall
	func_65(var_71_object, var_70_int); // 0xc7 NEW_2
	TaskReturn(); // 0xc8 TaskReturn
	var_72_string = ""; var_73_bool = 0; // 0xca PushV
	var_72_string = "intro_burah.wmv"; // 0xcb MovS
	var_73_bool = 1; // 0xcc MovB
	TaskCall(0); // 0xcd TaskCall
	func_0(var_76_int, var_77_bool, var_72_string, var_73_bool); // 0xce NEW_2
	TaskReturn(); // 0xcf TaskReturn
	RemoveWorld(); // 0xd1 Func
	UISync(); // 0xd3 Func
	DestroyWindow(); // 0xd5 Func
	var_78_string = "world_burah.xml"; // 0xd7 PushS
	var_79_string = "player_burah.xml"; // 0xd8 PushS
	NewGame(var_78_string, var_79_string); // 0xd9 Func
	goto Label_299; // 0xdb Jump
	
Label_220:
	var_80_int = 3; // 0xdc PushI
	var_81_bool = var_2_int == var_80_int; // 0xdd Eq
	if(var_81_bool == 0) goto Label_250; // 0xde JumpB
	var_82_string = "menumusic"; // 0xdf PushS
	PauseSound(var_82_string); // 0xe0 Func
	var_83_int = 0; // 0xe2 PushV
	var_83_int = 3; // 0xe3 MovI
	TaskCall(1); // 0xe4 TaskCall
	func_65(var_84_object, var_83_int); // 0xe5 NEW_2
	TaskReturn(); // 0xe6 TaskReturn
	var_85_string = ""; var_86_bool = 0; // 0xe8 PushV
	var_85_string = "intro_klara.wmv"; // 0xe9 MovS
	var_86_bool = 1; // 0xea MovB
	TaskCall(0); // 0xeb TaskCall
	func_0(var_89_int, var_90_bool, var_85_string, var_86_bool); // 0xec NEW_2
	TaskReturn(); // 0xed TaskReturn
	RemoveWorld(); // 0xef Func
	UISync(); // 0xf1 Func
	DestroyWindow(); // 0xf3 Func
	var_91_string = "world_klara.xml"; // 0xf5 PushS
	var_92_string = "player_klara.xml"; // 0xf6 PushS
	NewGame(var_91_string, var_92_string); // 0xf7 Func
	goto Label_299; // 0xf9 Jump
	
Label_250:
	var_93_int = 4; // 0xfa PushI
	var_94_bool = var_2_int == var_93_int; // 0xfb Eq
	if(var_94_bool == 0) goto Label_269; // 0xfc JumpB
	var_95_string = "menumusic"; // 0xfd PushS
	PauseSound(var_95_string); // 0xfe Func
	var_96_string = "Loading : "; // 0x100 PushS
	var_97_int = var_96_string + var_10_object; // 0x101 Add
	Trace(var_97_int); // 0x102 Func
	RemoveWorld(); // 0x104 Func
	UISync(); // 0x106 Func
	DestroyWindow(); // 0x108 Func
	LoadGame(var_33_bool, var_16_object); // 0x10a Func
	goto Label_299; // 0x10c Jump
	
Label_269:
	var_98_int = 5; // 0x10d PushI
	var_99_bool = var_2_int == var_98_int; // 0x10e Eq
	if(var_99_bool == 0) goto Label_286; // 0x10f JumpB
	var_100_bool = var_9_object == 0; // 0x110 Not
	if(var_100_bool == 0) goto Label_279; // 0x111 JumpB
	DestroyWindow(); // 0x112 Func
	SaveGame(var_34_bool); // 0x114 Func
	goto Label_285; // 0x116 Jump
	
Label_285:
	goto Label_299; // 0x11d Jump
	
Label_279:
	DestroyWindow(); // 0x117 Func
	GetFileName(var_36_string); // 0x119 TObjFunc
	SaveGame(var_35_bool, var_36_string); // 0x11b Func
	
Label_286:
	var_101_int = 7; // 0x11e PushI
	var_102_bool = var_2_int == var_101_int; // 0x11f Eq
	if(var_102_bool == 0) goto Label_299; // 0x120 JumpB
	RemoveWorld(); // 0x121 Func
	UISync(); // 0x123 Func
	DestroyWindow(); // 0x125 Func
	var_103_string = "world_intro.xml"; // 0x127 PushS
	var_104_string = "player_intro.xml"; // 0x128 PushS
	NewGame(var_103_string, var_104_string); // 0x129 Func
	
Label_144:
	var_105_object = Obj(); // 0x90 PushV
	func_103(var_105_object); // 0x91 NEW_2
	var_3_bool = var_105_object; // 0x92 TMov
	var_110_object = Obj(); // 0x94 PushV
	func_111(var_110_object); // 0x95 NEW_2
	var_4_object = var_110_object; // 0x96 TMov
}


func_605(var_107_bool)
{
	var_108_int = 0; var_109_int = 0; // 0x25d PushV
	var_110_string = "BurahCompleted"; // 0x25e PushS
	var_111_int = 0; // 0x25f PushI
	GetRegistryData(var_109_int, var_110_string, var_111_int); // 0x260 Func
	var_112_int = 0; // 0x262 PushI
	var_107_bool = var_109_int != var_112_int; // 0x263 Neq2
	return 2; // 0x264 Return
}


