task_0_event_0(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_bool = 0; var_26_bool = 0; // 0x1e PushV
	IsLost(var_24_bool); // 0x1f TObjFunc
	var_27_bool = var_24_bool; // 0x21 Push
	if(var_27_bool == 0) goto Label_40; // 0x22 JumpB
	Restore(var_25_bool); // 0x23 TObjFunc
	var_28_bool = var_25_bool == 0; // 0x25 Not
	if(var_28_bool == 0) goto Label_40; // 0x26 JumpB
	return 6; // 0x27 Return
	
Label_40:
	IsPlaying(var_26_bool); // 0x28 TObjFunc
	var_29_bool = var_26_bool; // 0x2a Push
	if(var_29_bool == 0) goto Label_49; // 0x2b JumpB
	var_30_int = 0; // 0x2c PushI
	var_31_int = 0; // 0x2d PushI
	StretchBlit(var_30_int, var_31_int, var_31_int, var_30_int); // 0x2e TObjFunc
	goto Label_55; // 0x30 Jump
	
Label_55:
	return 6; // 0x37 Return
	
Label_49:
	var_32_int = 0; // 0x31 PushI
	var_33_int = 0; // 0x32 PushI
	StretchBlit(var_32_int, var_33_int, var_33_int, var_32_int); // 0x33 TObjFunc
	StopEventProcessing(); // 0x35 Func
}


task_0_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_int, var_5_object, var_6_int, var_7_int, var_8_int, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_string, var_17_string, var_18_string, var_19_string, var_20_bool, var_21_object)
{
	var_22_bool = var_3_bool == 0; // 0x39 Not
	if(var_22_bool == 0) goto Label_60; // 0x3a JumpB
	return 0; // 0x3b Return
	
Label_60:
	var_23_bool = 0; // 0x3c PushV
	var_23_bool = 1; // 0x3d MovB
	var_24_bool = 0; // 0x3e PushV
	var_24_bool = 1; // 0x3f MovB
	var_25_bool = 0; // 0x40 PushV
	var_25_bool = 1; // 0x41 MovB
	var_26_int = 27; // 0x42 PushI
	var_27_bool = var_21_object == var_26_int; // 0x43 Eq
	if(var_27_bool == 0) goto Label_73; // 0x44 JumpB
	var_28_int = 32; // 0x45 PushI
	var_29_bool = var_21_object == var_28_int; // 0x46 Eq
	if(var_29_bool == 0) goto Label_73; // 0x47 JumpB
	var_25_bool = 0; // 0x48 MovB
	
Label_73:
	if(var_25_bool == 0) goto Label_78; // 0x49 JumpB
	var_30_int = 257; // 0x4a PushI
	var_31_bool = var_21_object == var_30_int; // 0x4b Eq
	if(var_31_bool == 0) goto Label_78; // 0x4c JumpB
	var_24_bool = 0; // 0x4d MovB
	
Label_78:
	if(var_24_bool == 0) goto Label_83; // 0x4e JumpB
	var_32_int = 262; // 0x4f PushI
	var_33_bool = var_21_object == var_32_int; // 0x50 Eq
	if(var_33_bool == 0) goto Label_83; // 0x51 JumpB
	var_23_bool = 0; // 0x52 MovB
	
Label_83:
	if(var_23_bool == 0) goto Label_88; // 0x53 JumpB
	StopEventProcessing(); // 0x54 Func
	Stop(); // 0x56 TObjFunc
	
Label_88:
	return 0; // 0x58 Return
}


task_1_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_string, var_7_object, var_8_int, var_9_int, var_10_int, var_11_object, var_12_object, var_13_object, var_14_object, var_15_object, var_16_object, var_17_object, var_18_string, var_19_string, var_20_string, var_21_string, var_22_bool, var_23_object)
{
	var_24_string = "intro"; // 0x65 PushS
	var_25_bool = var_22_bool == var_24_string; // 0x66 Eq
	if(var_25_bool == 0) goto Label_108; // 0x67 JumpB
	DestroyWindow(); // 0x68 TObjFunc
	StopEventProcessing(); // 0x6a Func
	
Label_108:
	return 0; // 0x6c Return
}


task_2_event_100(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_int = 27; // 0x141 PushI
	var_23_bool = var_21_int == var_22_int; // 0x142 Eq
	if(var_23_bool == 0) goto Label_327; // 0x143 JumpB
	func_600(var_20_object, var_21_int); // 0x145 NEW_2
	
Label_327:
	return 0; // 0x147 Return
}


task_2_event_200(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int, var_22_string, var_23_object)
{
	var_24_string = "newgame"; // 0x149 PushS
	var_25_bool = var_22_string == var_24_string; // 0x14a Eq
	if(var_25_bool == 0) goto Label_336; // 0x14b JumpB
	var_2_int = 7; // 0x14c TMovI
	StopEventProcessing(); // 0x14d Func
	goto Label_599; // 0x14f Jump
	
Label_599:
	return 0; // 0x257 Return
	
Label_336:
	var_26_string = "quitgame"; // 0x150 PushS
	var_27_bool = var_22_string == var_26_string; // 0x151 Eq
	if(var_27_bool == 0) goto Label_346; // 0x152 JumpB
	var_28_string = "Quit game"; // 0x153 PushS
	UITrace(var_28_string); // 0x154 Func
	Quit(); // 0x156 Func
	return 0; // 0x158 Return
	
Label_346:
	var_29_string = "loadgame"; // 0x15a PushS
	var_30_bool = var_22_string == var_29_string; // 0x15b Eq
	if(var_30_bool == 0) goto Label_358; // 0x15c JumpB
	func_616(); // 0x15e NEW_2
	var_37_string = "load.xml"; // 0x160 PushS
	var_38_bool = 0; // 0x161 PushB
	CreateWindow(var_37_string, var_38_bool, var_20_object); // 0x162 Func
	return 0; // 0x164 Return
	
Label_358:
	var_39_string = "savegame"; // 0x166 PushS
	var_40_bool = var_22_string == var_39_string; // 0x167 Eq
	if(var_40_bool == 0) goto Label_370; // 0x168 JumpB
	func_616(); // 0x16a NEW_2
	var_41_string = "save.xml"; // 0x16c PushS
	var_42_bool = 0; // 0x16d PushB
	CreateWindow(var_41_string, var_42_bool, var_19_bool); // 0x16e Func
	return 0; // 0x170 Return
	
Label_370:
	var_43_string = "gameoptions"; // 0x172 PushS
	var_44_bool = var_22_string == var_43_string; // 0x173 Eq
	if(var_44_bool == 0) goto Label_382; // 0x174 JumpB
	func_616(); // 0x176 NEW_2
	var_45_string = "options.xml"; // 0x178 PushS
	var_46_bool = 0; // 0x179 PushB
	CreateWindow(var_45_string, var_46_bool, var_18_string); // 0x17a Func
	return 0; // 0x17c Return
	
Label_382:
	var_47_string = "continue"; // 0x17e PushS
	var_48_bool = var_22_string == var_47_string; // 0x17f Eq
	if(var_48_bool == 0) goto Label_390; // 0x180 JumpB
	var_2_int = 6; // 0x181 TMovI
	StopEventProcessing(); // 0x182 Func
	return 0; // 0x184 Return
	
Label_390:
	var_49_string = "credits"; // 0x186 PushS
	var_50_bool = var_22_string == var_49_string; // 0x187 Eq
	if(var_50_bool == 0) goto Label_420; // 0x188 JumpB
	func_616(); // 0x18a NEW_2
	var_51_int = 0; // 0x18c PushV
	var_51_int = 8; // 0x18d MovI
	TaskCall(1); // 0x18e TaskCall
	func_89(var_52_object, var_51_int); // 0x18f NEW_2
	TaskReturn(); // 0x190 TaskReturn
	var_56_object = Obj(); // 0x192 PushV
	func_114(var_56_object); // 0x193 NEW_2
	var_3_bool = var_56_object; // 0x194 TMov
	var_61_object = Obj(); // 0x196 PushV
	func_122(var_61_object); // 0x197 NEW_2
	var_4_object = var_61_object; // 0x198 TMov
	var_66_bool = 1; // 0x19a PushB
	ShowCursor(var_66_bool); // 0x19b Func
	CaptureKeyboard(); // 0x19d Func
	var_67_string = ""; // 0x19f PushV
	var_67_string = ""; // 0x1a0 MovS
	func_898(var_23_object, var_67_string); // 0x1a1 NEW_2
	goto Label_599; // 0x1a3 Jump
	
Label_420:
	var_68_string = "danko"; // 0x1a4 PushS
	var_69_bool = var_22_string == var_68_string; // 0x1a5 Eq
	if(var_69_bool == 0) goto Label_455; // 0x1a6 JumpB
	var_70_int = 0; // 0x1a7 PushI
	var_71_bool = var_21_int == var_70_int; // 0x1a8 Eq
	if(var_71_bool == 0) goto Label_430; // 0x1a9 JumpB
	var_2_int = 1; // 0x1aa TMovI
	StopEventProcessing(); // 0x1ab Func
	goto Label_453; // 0x1ad Jump
	
Label_453:
	return 0; // 0x1c5 Return
	
Label_430:
	var_72_int = 1; // 0x1ae PushI
	var_73_bool = var_21_int == var_72_int; // 0x1af Eq
	if(var_73_bool == 0) goto Label_442; // 0x1b0 JumpB
	var_74_int = 202; // 0x1b1 PushI
	var_75_string = "player_name"; // 0x1b2 PushS
	SendMessage(var_74_int, var_75_string); // 0x1b3 Func
	var_76_int = 203; // 0x1b5 PushI
	var_77_string = "player_desc"; // 0x1b6 PushS
	SendMessage(var_76_int, var_77_string); // 0x1b7 Func
	goto Label_453; // 0x1b9 Jump
	
Label_442:
	var_78_int = 2; // 0x1ba PushI
	var_79_bool = var_21_int == var_78_int; // 0x1bb Eq
	if(var_79_bool == 0) goto Label_453; // 0x1bc JumpB
	var_80_int = -1; // 0x1bd PushI
	var_81_string = "player_name"; // 0x1be PushS
	SendMessage(var_80_int, var_81_string); // 0x1bf Func
	var_82_int = -1; // 0x1c1 PushI
	var_83_string = "player_desc"; // 0x1c2 PushS
	SendMessage(var_82_int, var_83_string); // 0x1c3 Func
	
Label_455:
	var_84_string = "burah"; // 0x1c7 PushS
	var_85_bool = var_22_string == var_84_string; // 0x1c8 Eq
	if(var_85_bool == 0) goto Label_490; // 0x1c9 JumpB
	var_86_int = 0; // 0x1ca PushI
	var_87_bool = var_21_int == var_86_int; // 0x1cb Eq
	if(var_87_bool == 0) goto Label_465; // 0x1cc JumpB
	var_2_int = 2; // 0x1cd TMovI
	StopEventProcessing(); // 0x1ce Func
	goto Label_488; // 0x1d0 Jump
	
Label_488:
	return 0; // 0x1e8 Return
	
Label_465:
	var_88_int = 1; // 0x1d1 PushI
	var_89_bool = var_21_int == var_88_int; // 0x1d2 Eq
	if(var_89_bool == 0) goto Label_477; // 0x1d3 JumpB
	var_90_int = 205; // 0x1d4 PushI
	var_91_string = "player_name"; // 0x1d5 PushS
	SendMessage(var_90_int, var_91_string); // 0x1d6 Func
	var_92_int = 206; // 0x1d8 PushI
	var_93_string = "player_desc"; // 0x1d9 PushS
	SendMessage(var_92_int, var_93_string); // 0x1da Func
	goto Label_488; // 0x1dc Jump
	
Label_477:
	var_94_int = 2; // 0x1dd PushI
	var_95_bool = var_21_int == var_94_int; // 0x1de Eq
	if(var_95_bool == 0) goto Label_488; // 0x1df JumpB
	var_96_int = -1; // 0x1e0 PushI
	var_97_string = "player_name"; // 0x1e1 PushS
	SendMessage(var_96_int, var_97_string); // 0x1e2 Func
	var_98_int = -1; // 0x1e4 PushI
	var_99_string = "player_desc"; // 0x1e5 PushS
	SendMessage(var_98_int, var_99_string); // 0x1e6 Func
	
Label_490:
	var_100_string = "klara"; // 0x1ea PushS
	var_101_bool = var_22_string == var_100_string; // 0x1eb Eq
	if(var_101_bool == 0) goto Label_559; // 0x1ec JumpB
	var_102_int = 0; // 0x1ed PushI
	var_103_bool = var_21_int == var_102_int; // 0x1ee Eq
	if(var_103_bool == 0) goto Label_515; // 0x1ef JumpB
	var_104_bool = 0; // 0x1f0 PushV
	var_104_bool = 0; // 0x1f1 MovB
	var_105_bool = 0; // 0x1f2 PushV
	func_1117(var_105_bool); // 0x1f3 NEW_2
	var_111_bool = var_105_bool == 0; // 0x1f5 Not
	if(var_111_bool == 0) goto Label_509; // 0x1f6 JumpB
	var_112_bool = 0; // 0x1f7 PushV
	func_1109(var_112_bool); // 0x1f8 NEW_2
	var_118_bool = var_112_bool == 0; // 0x1fa Not
	if(var_118_bool == 0) goto Label_509; // 0x1fb JumpB
	var_104_bool = 1; // 0x1fc MovB
	
Label_509:
	if(var_104_bool == 0) goto Label_511; // 0x1fd JumpB
	return 0; // 0x1fe Return
	
Label_511:
	var_2_int = 3; // 0x1ff TMovI
	StopEventProcessing(); // 0x200 Func
	goto Label_557; // 0x202 Jump
	
Label_557:
	return 0; // 0x22d Return
	
Label_515:
	var_119_int = 1; // 0x203 PushI
	var_120_bool = var_21_int == var_119_int; // 0x204 Eq
	if(var_120_bool == 0) goto Label_546; // 0x205 JumpB
	var_121_int = 208; // 0x206 PushI
	var_122_string = "player_name"; // 0x207 PushS
	SendMessage(var_121_int, var_122_string); // 0x208 Func
	var_123_bool = 0; // 0x20a PushV
	var_123_bool = 0; // 0x20b MovB
	var_124_bool = 0; // 0x20c PushV
	func_1117(var_124_bool); // 0x20d NEW_2
	var_125_bool = var_124_bool == 0; // 0x20f Not
	if(var_125_bool == 0) goto Label_535; // 0x210 JumpB
	var_126_bool = 0; // 0x211 PushV
	func_1109(var_126_bool); // 0x212 NEW_2
	var_127_bool = var_126_bool == 0; // 0x214 Not
	if(var_127_bool == 0) goto Label_535; // 0x215 JumpB
	var_123_bool = 1; // 0x216 MovB
	
Label_535:
	if(var_123_bool == 0) goto Label_541; // 0x217 JumpB
	var_128_int = 213; // 0x218 PushI
	var_129_string = "player_desc"; // 0x219 PushS
	SendMessage(var_128_int, var_129_string); // 0x21a Func
	goto Label_545; // 0x21c Jump
	
Label_545:
	goto Label_557; // 0x221 Jump
	
Label_541:
	var_130_int = 209; // 0x21d PushI
	var_131_string = "player_desc"; // 0x21e PushS
	SendMessage(var_130_int, var_131_string); // 0x21f Func
	
Label_546:
	var_132_int = 2; // 0x222 PushI
	var_133_bool = var_21_int == var_132_int; // 0x223 Eq
	if(var_133_bool == 0) goto Label_557; // 0x224 JumpB
	var_134_int = -1; // 0x225 PushI
	var_135_string = "player_name"; // 0x226 PushS
	SendMessage(var_134_int, var_135_string); // 0x227 Func
	var_136_int = -1; // 0x229 PushI
	var_137_string = "player_desc"; // 0x22a PushS
	SendMessage(var_136_int, var_137_string); // 0x22b Func
	
Label_559:
	var_138_string = "load"; // 0x22f PushS
	var_139_bool = var_22_string == var_138_string; // 0x230 Eq
	if(var_139_bool == 0) goto Label_576; // 0x231 JumpB
	var_140_int = 0; // 0x232 PushI
	var_141_bool = var_21_int == var_140_int; // 0x233 Eq
	if(var_141_bool == 0) goto Label_571; // 0x234 JumpB
	var_2_int = 4; // 0x235 TMovI
	GetFileName(var_14_object); // 0x236 ObjFunc
	StopEventProcessing(); // 0x238 Func
	goto Label_574; // 0x23a Jump
	
Label_574:
	return 0; // 0x23e Return
	
Label_571:
	func_600(var_22_string, var_23_object); // 0x23c NEW_2
	
Label_576:
	var_145_string = "save"; // 0x240 PushS
	var_146_bool = var_22_string == var_145_string; // 0x241 Eq
	if(var_146_bool == 0) goto Label_592; // 0x242 JumpB
	var_147_int = 0; // 0x243 PushI
	var_148_bool = var_21_int == var_147_int; // 0x244 Eq
	if(var_148_bool == 0) goto Label_587; // 0x245 JumpB
	var_2_int = 5; // 0x246 TMovI
	var_9_object = var_23_object; // 0x247 TMov
	StopEventProcessing(); // 0x248 Func
	goto Label_590; // 0x24a Jump
	
Label_590:
	return 0; // 0x24e Return
	
Label_587:
	func_600(var_22_string, var_23_object); // 0x24c NEW_2
	
Label_592:
	var_149_string = "options"; // 0x250 PushS
	var_150_bool = var_22_string == var_149_string; // 0x251 Eq
	if(var_150_bool == 0) goto Label_599; // 0x252 JumpB
	func_600(var_22_string, var_23_object); // 0x254 NEW_2
	return 0; // 0x256 Return
}


task_2_event_102(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; // 0x3e8 Not
	if(var_22_bool == 0) goto Label_1020; // 0x3e9 JumpB
	var_23_int = 272; // 0x3ea PushI
	var_24_bool = var_21_int == var_23_int; // 0x3eb Eq
	if(var_24_bool == 0) goto Label_1011; // 0x3ec JumpB
	HideCursor(); // 0x3ed Func
	func_906(); // 0x3f0 NEW_2
	goto Label_1019; // 0x3f2 Jump
	
Label_1019:
	goto Label_1037; // 0x3fb Jump
	
Label_1037:
	return 0; // 0x40d Return
	
Label_1011:
	var_71_int = 274; // 0x3f3 PushI
	var_72_bool = var_21_int == var_71_int; // 0x3f4 Eq
	if(var_72_bool == 0) goto Label_1019; // 0x3f5 JumpB
	HideCursor(); // 0x3f6 Func
	func_803(); // 0x3f9 NEW_2
	
Label_1020:
	var_109_int = 271; // 0x3fc PushI
	var_110_bool = var_21_int == var_109_int; // 0x3fd Eq
	if(var_110_bool == 0) goto Label_1029; // 0x3fe JumpB
	HideCursor(); // 0x3ff Func
	func_677(); // 0x402 NEW_2
	goto Label_1037; // 0x404 Jump
	
Label_1029:
	var_141_int = 273; // 0x405 PushI
	var_142_bool = var_21_int == var_141_int; // 0x406 Eq
	if(var_142_bool == 0) goto Label_1037; // 0x407 JumpB
	HideCursor(); // 0x408 Func
	func_740(); // 0x40b NEW_2
}


task_2_event_101(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_int)
{
	var_22_bool = var_14_object == 0; // 0x40f Not
	if(var_22_bool == 0) goto Label_1075; // 0x410 JumpB
	var_23_int = 267; // 0x411 PushI
	var_24_bool = var_21_int == var_23_int; // 0x412 Eq
	if(var_24_bool == 0) goto Label_1050; // 0x413 JumpB
	HideCursor(); // 0x414 Func
	func_906(); // 0x417 NEW_2
	goto Label_1074; // 0x419 Jump
	
Label_1074:
	goto Label_1108; // 0x432 Jump
	
Label_1108:
	return 0; // 0x454 Return
	
Label_1050:
	var_71_int = 268; // 0x41a PushI
	var_72_bool = var_21_int == var_71_int; // 0x41b Eq
	if(var_72_bool == 0) goto Label_1059; // 0x41c JumpB
	HideCursor(); // 0x41d Func
	func_803(); // 0x420 NEW_2
	goto Label_1074; // 0x422 Jump
	
Label_1059:
	var_109_int = 256; // 0x423 PushI
	var_110_bool = var_21_int == var_109_int; // 0x424 Eq
	if(var_110_bool == 0) goto Label_1074; // 0x425 JumpB
	var_111_string = ""; // 0x426 PushV
	func_896(var_21_int, var_111_string); // 0x427 NEW_2
	var_112_string = ""; // 0x429 PushS
	var_113_bool = var_111_string != var_112_string; // 0x42a Neq
	if(var_113_bool == 0) goto Label_1074; // 0x42b JumpB
	var_114_int = 2; // 0x42c PushI
	var_115_string = ""; // 0x42d PushV
	func_896(var_114_int, var_115_string); // 0x42e NEW_2
	SendMessage(var_114_int, var_115_string); // 0x430 Func
	
Label_1075:
	var_116_int = 270; // 0x433 PushI
	var_117_bool = var_21_int == var_116_int; // 0x434 Eq
	if(var_117_bool == 0) goto Label_1084; // 0x435 JumpB
	HideCursor(); // 0x436 Func
	func_677(); // 0x439 NEW_2
	goto Label_1108; // 0x43b Jump
	
Label_1084:
	var_148_int = 269; // 0x43c PushI
	var_149_bool = var_21_int == var_148_int; // 0x43d Eq
	if(var_149_bool == 0) goto Label_1093; // 0x43e JumpB
	HideCursor(); // 0x43f Func
	func_740(); // 0x442 NEW_2
	goto Label_1108; // 0x444 Jump
	
Label_1093:
	var_174_int = 256; // 0x445 PushI
	var_175_bool = var_21_int == var_174_int; // 0x446 Eq
	if(var_175_bool == 0) goto Label_1108; // 0x447 JumpB
	var_176_string = ""; // 0x448 PushV
	func_901(var_21_int, var_176_string); // 0x449 NEW_2
	var_177_string = ""; // 0x44b PushS
	var_178_bool = var_176_string != var_177_string; // 0x44c Neq
	if(var_178_bool == 0) goto Label_1108; // 0x44d JumpB
	var_179_int = 2; // 0x44e PushI
	var_180_string = ""; // 0x44f PushV
	func_901(var_179_int, var_180_string); // 0x450 NEW_2
	SendMessage(var_179_int, var_180_string); // 0x452 Func
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_object, var_5_int, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_object, var_12_object, var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object)
{
	var_21_bool = 0; // 0x6d PushV
	var_21_bool = 1; // 0x6e MovB
	func_130(var_13_object, var_14_object, var_15_string, var_16_string, var_17_string, var_18_string, var_19_bool, var_20_object, var_21_bool); // 0x6f NEW_2
	return 0; // 0x71 Return
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


func_896(var_11_object, var_35_string)
{
	var_35_string = var_11_object; // 0x380 MovT
	return 0; // 0x381 Return
}


func_130(var_0_object, var_2_int, var_3_bool, var_4_object, var_9_object, var_10_object, var_14_object, var_20_object, var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; var_24_bool = 0; var_25_string = ""; var_26_bool = 0; var_27_bool = 0; var_28_bool = 0; var_29_string = ""; // 0x82 PushV
	var_14_object = var_21_bool; // 0x83 TMov
	CaptureKeyboard(); // 0x84 Func
	var_2_int = 0; // 0x86 TMovI
	GetWindowSize(var_0_object, var_29_string); // 0x87 Func
	var_30_string = "default"; // 0x89 PushS
	SetCursor(var_30_string); // 0x8a Func
	var_31_string = "default"; // 0x8c PushS
	SetBackground(var_31_string); // 0x8d Func
	var_32_string = "menumusic"; // 0x8f PushS
	PlaySound(var_32_string); // 0x90 Func
	var_33_bool = 1; // 0x92 PushB
	ShowCursor(var_33_bool); // 0x93 Func
	var_34_string = ""; // 0x95 PushV
	var_34_string = ""; // 0x96 MovS
	func_898(var_29_string, var_34_string); // 0x97 NEW_2
	var_35_string = ""; // 0x99 PushV
	var_35_string = ""; // 0x9a MovS
	func_903(var_29_string, var_35_string); // 0x9b NEW_2
	var_36_bool = var_21_bool; // 0x9d Push
	if(var_36_bool == 0) goto Label_164; // 0x9e JumpB
	var_37_string = "game_choose_pers.xml"; // 0x9f PushS
	var_38_bool = 0; // 0xa0 PushB
	CreateWindow(var_37_string, var_38_bool, var_27_bool); // 0xa1 Func
	goto Label_172; // 0xa3 Jump
	
Label_172:
	var_39_bool = var_2_int == 0; // 0xac Not
	if(var_39_bool == 0) goto Label_177; // 0xad JumpB
	ProcessEvents(); // 0xae Func
	goto Label_172; // 0xb0 Jump
	
Label_177:
	func_616(); // 0xb2 NEW_2
	var_46_int = 1; // 0xb4 PushI
	var_47_bool = var_2_int == var_46_int; // 0xb5 Eq
	if(var_47_bool == 0) goto Label_210; // 0xb6 JumpB
	var_48_string = "menumusic"; // 0xb7 PushS
	PauseSound(var_48_string); // 0xb8 Func
	var_49_int = 0; // 0xba PushV
	var_49_int = 1; // 0xbb MovI
	TaskCall(1); // 0xbc TaskCall
	func_89(var_50_object, var_49_int); // 0xbd NEW_2
	TaskReturn(); // 0xbe TaskReturn
	var_54_string = ""; var_55_bool = 0; // 0xc0 PushV
	var_54_string = "intro_danko.wmv"; // 0xc1 MovS
	var_55_bool = 1; // 0xc2 MovB
	TaskCall(0); // 0xc3 TaskCall
	func_0(var_58_int, var_59_bool, var_54_string, var_55_bool); // 0xc4 NEW_2
	TaskReturn(); // 0xc5 TaskReturn
	RemoveWorld(); // 0xc7 Func
	UISync(); // 0xc9 Func
	DestroyWindow(); // 0xcb Func
	var_65_string = "world_danko.xml"; // 0xcd PushS
	var_66_string = "player_danko.xml"; // 0xce PushS
	NewGame(var_65_string, var_66_string); // 0xcf Func
	goto Label_319; // 0xd1 Jump
	
Label_319:
	return 8; // 0x13f Return
	
Label_210:
	var_67_int = 2; // 0xd2 PushI
	var_68_bool = var_2_int == var_67_int; // 0xd3 Eq
	if(var_68_bool == 0) goto Label_240; // 0xd4 JumpB
	var_69_string = "menumusic"; // 0xd5 PushS
	PauseSound(var_69_string); // 0xd6 Func
	var_70_int = 0; // 0xd8 PushV
	var_70_int = 2; // 0xd9 MovI
	TaskCall(1); // 0xda TaskCall
	func_89(var_71_object, var_70_int); // 0xdb NEW_2
	TaskReturn(); // 0xdc TaskReturn
	var_72_string = ""; var_73_bool = 0; // 0xde PushV
	var_72_string = "intro_burah.wmv"; // 0xdf MovS
	var_73_bool = 1; // 0xe0 MovB
	TaskCall(0); // 0xe1 TaskCall
	func_0(var_76_int, var_77_bool, var_72_string, var_73_bool); // 0xe2 NEW_2
	TaskReturn(); // 0xe3 TaskReturn
	RemoveWorld(); // 0xe5 Func
	UISync(); // 0xe7 Func
	DestroyWindow(); // 0xe9 Func
	var_78_string = "world_burah.xml"; // 0xeb PushS
	var_79_string = "player_burah.xml"; // 0xec PushS
	NewGame(var_78_string, var_79_string); // 0xed Func
	goto Label_319; // 0xef Jump
	
Label_240:
	var_80_int = 3; // 0xf0 PushI
	var_81_bool = var_2_int == var_80_int; // 0xf1 Eq
	if(var_81_bool == 0) goto Label_270; // 0xf2 JumpB
	var_82_string = "menumusic"; // 0xf3 PushS
	PauseSound(var_82_string); // 0xf4 Func
	var_83_int = 0; // 0xf6 PushV
	var_83_int = 3; // 0xf7 MovI
	TaskCall(1); // 0xf8 TaskCall
	func_89(var_84_object, var_83_int); // 0xf9 NEW_2
	TaskReturn(); // 0xfa TaskReturn
	var_85_string = ""; var_86_bool = 0; // 0xfc PushV
	var_85_string = "intro_klara.wmv"; // 0xfd MovS
	var_86_bool = 1; // 0xfe MovB
	TaskCall(0); // 0xff TaskCall
	func_0(var_89_int, var_90_bool, var_85_string, var_86_bool); // 0x100 NEW_2
	TaskReturn(); // 0x101 TaskReturn
	RemoveWorld(); // 0x103 Func
	UISync(); // 0x105 Func
	DestroyWindow(); // 0x107 Func
	var_91_string = "world_klara.xml"; // 0x109 PushS
	var_92_string = "player_klara.xml"; // 0x10a PushS
	NewGame(var_91_string, var_92_string); // 0x10b Func
	goto Label_319; // 0x10d Jump
	
Label_270:
	var_93_int = 4; // 0x10e PushI
	var_94_bool = var_2_int == var_93_int; // 0x10f Eq
	if(var_94_bool == 0) goto Label_289; // 0x110 JumpB
	var_95_string = "menumusic"; // 0x111 PushS
	PauseSound(var_95_string); // 0x112 Func
	var_96_string = "Loading : "; // 0x114 PushS
	var_97_int = var_96_string + var_10_object; // 0x115 Add
	Trace(var_97_int); // 0x116 Func
	RemoveWorld(); // 0x118 Func
	UISync(); // 0x11a Func
	DestroyWindow(); // 0x11c Func
	LoadGame(var_26_bool, var_20_object); // 0x11e Func
	goto Label_319; // 0x120 Jump
	
Label_289:
	var_98_int = 5; // 0x121 PushI
	var_99_bool = var_2_int == var_98_int; // 0x122 Eq
	if(var_99_bool == 0) goto Label_306; // 0x123 JumpB
	var_100_bool = var_9_object == 0; // 0x124 Not
	if(var_100_bool == 0) goto Label_299; // 0x125 JumpB
	DestroyWindow(); // 0x126 Func
	SaveGame(var_27_bool); // 0x128 Func
	goto Label_305; // 0x12a Jump
	
Label_305:
	goto Label_319; // 0x131 Jump
	
Label_299:
	DestroyWindow(); // 0x12b Func
	GetFileName(var_29_string); // 0x12d TObjFunc
	SaveGame(var_28_bool, var_29_string); // 0x12f Func
	
Label_306:
	var_101_int = 7; // 0x132 PushI
	var_102_bool = var_2_int == var_101_int; // 0x133 Eq
	if(var_102_bool == 0) goto Label_319; // 0x134 JumpB
	RemoveWorld(); // 0x135 Func
	UISync(); // 0x137 Func
	DestroyWindow(); // 0x139 Func
	var_103_string = "world_intro.xml"; // 0x13b PushS
	var_104_string = "player_intro.xml"; // 0x13c PushS
	NewGame(var_103_string, var_104_string); // 0x13d Func
	
Label_164:
	var_105_object = Obj(); // 0xa4 PushV
	func_114(var_105_object); // 0xa5 NEW_2
	var_3_bool = var_105_object; // 0xa6 TMov
	var_110_object = Obj(); // 0xa8 PushV
	func_122(var_110_object); // 0xa9 NEW_2
	var_4_object = var_110_object; // 0xaa TMov
}


func_643()
{
	var_25_int = 0; // 0x283 PushI
	var_26_string = "newgame"; // 0x284 PushS
	SendMessage(var_25_int, var_26_string); // 0x285 Func
	var_27_int = 0; // 0x287 PushI
	var_28_string = "loadgame"; // 0x288 PushS
	SendMessage(var_27_int, var_28_string); // 0x289 Func
	var_29_int = 0; // 0x28b PushI
	var_30_string = "gameoptions"; // 0x28c PushS
	SendMessage(var_29_int, var_30_string); // 0x28d Func
	var_31_int = 0; // 0x28f PushI
	var_32_string = "credits"; // 0x290 PushS
	SendMessage(var_31_int, var_32_string); // 0x291 Func
	var_33_int = 0; // 0x293 PushI
	var_34_string = "quitgame"; // 0x294 PushS
	SendMessage(var_33_int, var_34_string); // 0x295 Func
	return 0; // 0x297 Return
}


func_898(var_11_object, var_34_string)
{
	var_11_object = var_34_string; // 0x383 TMov
	return 0; // 0x384 Return
}


func_901(var_12_object, var_124_string)
{
	var_124_string = var_12_object; // 0x385 MovT
	return 0; // 0x386 Return
}


func_903(var_12_object, var_35_string)
{
	var_12_object = var_35_string; // 0x388 TMov
	return 0; // 0x389 Return
}


func_906()
{
	func_643(); // 0x38b NEW_2
	var_35_string = ""; // 0x38d PushV
	func_896(var_21_int, var_35_string); // 0x38e NEW_2
	var_36_string = ""; // 0x390 PushS
	var_37_bool = var_35_string == var_36_string; // 0x391 Eq
	if(var_37_bool == 0) goto Label_924; // 0x392 JumpB
	var_38_int = 1; // 0x393 PushI
	var_39_string = "quitgame"; // 0x394 PushS
	SendMessage(var_38_int, var_39_string); // 0x395 Func
	var_40_string = ""; // 0x397 PushV
	var_40_string = "quitgame"; // 0x398 MovS
	func_898(var_21_int, var_40_string); // 0x399 NEW_2
	goto Label_998; // 0x39b Jump
	
Label_998:
	return 0; // 0x3e6 Return
	
Label_924:
	var_41_string = ""; // 0x39c PushV
	func_896(var_21_int, var_41_string); // 0x39d NEW_2
	var_42_string = "newgame"; // 0x39f PushS
	var_43_bool = var_41_string == var_42_string; // 0x3a0 Eq
	if(var_43_bool == 0) goto Label_939; // 0x3a1 JumpB
	var_44_int = 1; // 0x3a2 PushI
	var_45_string = "quitgame"; // 0x3a3 PushS
	SendMessage(var_44_int, var_45_string); // 0x3a4 Func
	var_46_string = ""; // 0x3a6 PushV
	var_46_string = "quitgame"; // 0x3a7 MovS
	func_898(var_21_int, var_46_string); // 0x3a8 NEW_2
	goto Label_998; // 0x3aa Jump
	
Label_939:
	var_47_string = ""; // 0x3ab PushV
	func_896(var_21_int, var_47_string); // 0x3ac NEW_2
	var_48_string = "loadgame"; // 0x3ae PushS
	var_49_bool = var_47_string == var_48_string; // 0x3af Eq
	if(var_49_bool == 0) goto Label_954; // 0x3b0 JumpB
	var_50_int = 1; // 0x3b1 PushI
	var_51_string = "newgame"; // 0x3b2 PushS
	SendMessage(var_50_int, var_51_string); // 0x3b3 Func
	var_52_string = ""; // 0x3b5 PushV
	var_52_string = "newgame"; // 0x3b6 MovS
	func_898(var_21_int, var_52_string); // 0x3b7 NEW_2
	goto Label_998; // 0x3b9 Jump
	
Label_954:
	var_53_string = ""; // 0x3ba PushV
	func_896(var_21_int, var_53_string); // 0x3bb NEW_2
	var_54_string = "gameoptions"; // 0x3bd PushS
	var_55_bool = var_53_string == var_54_string; // 0x3be Eq
	if(var_55_bool == 0) goto Label_969; // 0x3bf JumpB
	var_56_int = 1; // 0x3c0 PushI
	var_57_string = "loadgame"; // 0x3c1 PushS
	SendMessage(var_56_int, var_57_string); // 0x3c2 Func
	var_58_string = ""; // 0x3c4 PushV
	var_58_string = "loadgame"; // 0x3c5 MovS
	func_898(var_21_int, var_58_string); // 0x3c6 NEW_2
	goto Label_998; // 0x3c8 Jump
	
Label_969:
	var_59_string = ""; // 0x3c9 PushV
	func_896(var_21_int, var_59_string); // 0x3ca NEW_2
	var_60_string = "credits"; // 0x3cc PushS
	var_61_bool = var_59_string == var_60_string; // 0x3cd Eq
	if(var_61_bool == 0) goto Label_984; // 0x3ce JumpB
	var_62_int = 1; // 0x3cf PushI
	var_63_string = "gameoptions"; // 0x3d0 PushS
	SendMessage(var_62_int, var_63_string); // 0x3d1 Func
	var_64_string = ""; // 0x3d3 PushV
	var_64_string = "gameoptions"; // 0x3d4 MovS
	func_898(var_21_int, var_64_string); // 0x3d5 NEW_2
	goto Label_998; // 0x3d7 Jump
	
Label_984:
	var_65_string = ""; // 0x3d8 PushV
	func_896(var_21_int, var_65_string); // 0x3d9 NEW_2
	var_66_string = "quitgame"; // 0x3db PushS
	var_67_bool = var_65_string == var_66_string; // 0x3dc Eq
	if(var_67_bool == 0) goto Label_998; // 0x3dd JumpB
	var_68_int = 1; // 0x3de PushI
	var_69_string = "credits"; // 0x3df PushS
	SendMessage(var_68_int, var_69_string); // 0x3e0 Func
	var_70_string = ""; // 0x3e2 PushV
	var_70_string = "credits"; // 0x3e3 MovS
	func_898(var_21_int, var_70_string); // 0x3e4 NEW_2
}


func_664()
{
	var_118_int = 0; // 0x298 PushI
	var_119_string = "danko"; // 0x299 PushS
	SendMessage(var_118_int, var_119_string); // 0x29a Func
	var_120_int = 0; // 0x29c PushI
	var_121_string = "burah"; // 0x29d PushS
	SendMessage(var_120_int, var_121_string); // 0x29e Func
	var_122_int = 0; // 0x2a0 PushI
	var_123_string = "klara"; // 0x2a1 PushS
	SendMessage(var_122_int, var_123_string); // 0x2a2 Func
	return 0; // 0x2a4 Return
}


func_803()
{
	func_643(); // 0x324 NEW_2
	var_73_string = ""; // 0x326 PushV
	func_896(var_21_int, var_73_string); // 0x327 NEW_2
	var_74_string = ""; // 0x329 PushS
	var_75_bool = var_73_string == var_74_string; // 0x32a Eq
	if(var_75_bool == 0) goto Label_821; // 0x32b JumpB
	var_76_int = 1; // 0x32c PushI
	var_77_string = "newgame"; // 0x32d PushS
	SendMessage(var_76_int, var_77_string); // 0x32e Func
	var_78_string = ""; // 0x330 PushV
	var_78_string = "newgame"; // 0x331 MovS
	func_898(var_21_int, var_78_string); // 0x332 NEW_2
	goto Label_895; // 0x334 Jump
	
Label_895:
	return 0; // 0x37f Return
	
Label_821:
	var_79_string = ""; // 0x335 PushV
	func_896(var_21_int, var_79_string); // 0x336 NEW_2
	var_80_string = "newgame"; // 0x338 PushS
	var_81_bool = var_79_string == var_80_string; // 0x339 Eq
	if(var_81_bool == 0) goto Label_836; // 0x33a JumpB
	var_82_int = 1; // 0x33b PushI
	var_83_string = "loadgame"; // 0x33c PushS
	SendMessage(var_82_int, var_83_string); // 0x33d Func
	var_84_string = ""; // 0x33f PushV
	var_84_string = "loadgame"; // 0x340 MovS
	func_898(var_21_int, var_84_string); // 0x341 NEW_2
	goto Label_895; // 0x343 Jump
	
Label_836:
	var_85_string = ""; // 0x344 PushV
	func_896(var_21_int, var_85_string); // 0x345 NEW_2
	var_86_string = "loadgame"; // 0x347 PushS
	var_87_bool = var_85_string == var_86_string; // 0x348 Eq
	if(var_87_bool == 0) goto Label_851; // 0x349 JumpB
	var_88_int = 1; // 0x34a PushI
	var_89_string = "gameoptions"; // 0x34b PushS
	SendMessage(var_88_int, var_89_string); // 0x34c Func
	var_90_string = ""; // 0x34e PushV
	var_90_string = "gameoptions"; // 0x34f MovS
	func_898(var_21_int, var_90_string); // 0x350 NEW_2
	goto Label_895; // 0x352 Jump
	
Label_851:
	var_91_string = ""; // 0x353 PushV
	func_896(var_21_int, var_91_string); // 0x354 NEW_2
	var_92_string = "gameoptions"; // 0x356 PushS
	var_93_bool = var_91_string == var_92_string; // 0x357 Eq
	if(var_93_bool == 0) goto Label_866; // 0x358 JumpB
	var_94_int = 1; // 0x359 PushI
	var_95_string = "credits"; // 0x35a PushS
	SendMessage(var_94_int, var_95_string); // 0x35b Func
	var_96_string = ""; // 0x35d PushV
	var_96_string = "credits"; // 0x35e MovS
	func_898(var_21_int, var_96_string); // 0x35f NEW_2
	goto Label_895; // 0x361 Jump
	
Label_866:
	var_97_string = ""; // 0x362 PushV
	func_896(var_21_int, var_97_string); // 0x363 NEW_2
	var_98_string = "credits"; // 0x365 PushS
	var_99_bool = var_97_string == var_98_string; // 0x366 Eq
	if(var_99_bool == 0) goto Label_881; // 0x367 JumpB
	var_100_int = 1; // 0x368 PushI
	var_101_string = "quitgame"; // 0x369 PushS
	SendMessage(var_100_int, var_101_string); // 0x36a Func
	var_102_string = ""; // 0x36c PushV
	var_102_string = "quitgame"; // 0x36d MovS
	func_898(var_21_int, var_102_string); // 0x36e NEW_2
	goto Label_895; // 0x370 Jump
	
Label_881:
	var_103_string = ""; // 0x371 PushV
	func_896(var_21_int, var_103_string); // 0x372 NEW_2
	var_104_string = "quitgame"; // 0x374 PushS
	var_105_bool = var_103_string == var_104_string; // 0x375 Eq
	if(var_105_bool == 0) goto Label_895; // 0x376 JumpB
	var_106_int = 1; // 0x377 PushI
	var_107_string = "newgame"; // 0x378 PushS
	SendMessage(var_106_int, var_107_string); // 0x379 Func
	var_108_string = ""; // 0x37b PushV
	var_108_string = "newgame"; // 0x37c MovS
	func_898(var_21_int, var_108_string); // 0x37d NEW_2
}


func_677()
{
	func_664(); // 0x2a6 NEW_2
	var_124_string = ""; // 0x2a8 PushV
	func_901(var_21_int, var_124_string); // 0x2a9 NEW_2
	var_125_string = ""; // 0x2ab PushS
	var_126_bool = var_124_string == var_125_string; // 0x2ac Eq
	if(var_126_bool == 0) goto Label_695; // 0x2ad JumpB
	var_127_int = 1; // 0x2ae PushI
	var_128_string = "danko"; // 0x2af PushS
	SendMessage(var_127_int, var_128_string); // 0x2b0 Func
	var_129_string = ""; // 0x2b2 PushV
	var_129_string = "danko"; // 0x2b3 MovS
	func_903(var_21_int, var_129_string); // 0x2b4 NEW_2
	goto Label_739; // 0x2b6 Jump
	
Label_739:
	return 0; // 0x2e3 Return
	
Label_695:
	var_130_string = ""; // 0x2b7 PushV
	func_901(var_21_int, var_130_string); // 0x2b8 NEW_2
	var_131_string = "danko"; // 0x2ba PushS
	var_132_bool = var_130_string == var_131_string; // 0x2bb Eq
	if(var_132_bool == 0) goto Label_710; // 0x2bc JumpB
	var_133_int = 1; // 0x2bd PushI
	var_134_string = "burah"; // 0x2be PushS
	SendMessage(var_133_int, var_134_string); // 0x2bf Func
	var_135_string = ""; // 0x2c1 PushV
	var_135_string = "burah"; // 0x2c2 MovS
	func_903(var_21_int, var_135_string); // 0x2c3 NEW_2
	goto Label_739; // 0x2c5 Jump
	
Label_710:
	var_136_string = ""; // 0x2c6 PushV
	func_901(var_21_int, var_136_string); // 0x2c7 NEW_2
	var_137_string = "burah"; // 0x2c9 PushS
	var_138_bool = var_136_string == var_137_string; // 0x2ca Eq
	if(var_138_bool == 0) goto Label_725; // 0x2cb JumpB
	var_139_int = 1; // 0x2cc PushI
	var_140_string = "klara"; // 0x2cd PushS
	SendMessage(var_139_int, var_140_string); // 0x2ce Func
	var_141_string = ""; // 0x2d0 PushV
	var_141_string = "klara"; // 0x2d1 MovS
	func_903(var_21_int, var_141_string); // 0x2d2 NEW_2
	goto Label_739; // 0x2d4 Jump
	
Label_725:
	var_142_string = ""; // 0x2d5 PushV
	func_901(var_21_int, var_142_string); // 0x2d6 NEW_2
	var_143_string = "klara"; // 0x2d8 PushS
	var_144_bool = var_142_string == var_143_string; // 0x2d9 Eq
	if(var_144_bool == 0) goto Label_739; // 0x2da JumpB
	var_145_int = 1; // 0x2db PushI
	var_146_string = "danko"; // 0x2dc PushS
	SendMessage(var_145_int, var_146_string); // 0x2dd Func
	var_147_string = ""; // 0x2df PushV
	var_147_string = "danko"; // 0x2e0 MovS
	func_903(var_21_int, var_147_string); // 0x2e1 NEW_2
}


func_1109(var_112_bool)
{
	var_113_int = 0; var_114_int = 0; // 0x455 PushV
	var_115_string = "BurahCompleted"; // 0x456 PushS
	var_116_int = 0; // 0x457 PushI
	GetRegistryData(var_114_int, var_115_string, var_116_int); // 0x458 Func
	var_117_int = 0; // 0x45a PushI
	var_112_bool = var_114_int != var_117_int; // 0x45b Neq2
	return 2; // 0x45c Return
}


func_600(var_3_bool, var_4_object)
{
	var_142_string = ""; // 0x258 PushV
	var_142_string = ""; // 0x259 MovS
	func_898(var_23_object, var_142_string); // 0x25a NEW_2
	func_616(); // 0x25d NEW_2
	var_143_object = Obj(); // 0x25f PushV
	func_114(var_143_object); // 0x260 NEW_2
	var_3_bool = var_143_object; // 0x261 TMov
	var_144_object = Obj(); // 0x263 PushV
	func_122(var_144_object); // 0x264 NEW_2
	var_4_object = var_144_object; // 0x265 TMov
	return 0; // 0x267 Return
}


func_89(var_0_object, var_49_int)
{
	var_51_string = "intro.xml"; // 0x5a PushS
	var_52_bool = 0; // 0x5b PushB
	CreateWindow(var_51_string, var_52_bool, var_0_object); // 0x5c Func
	var_53_string = "intro"; // 0x5e PushS
	SendMessage(var_49_int, var_53_string); // 0x5f Func
	ProcessEvents(); // 0x61 Func
	return 0; // 0x63 Return
}


func_1117(var_105_bool)
{
	var_106_int = 0; var_107_int = 0; // 0x45d PushV
	var_108_string = "DankoCompleted"; // 0x45e PushS
	var_109_int = 0; // 0x45f PushI
	GetRegistryData(var_107_int, var_108_string, var_109_int); // 0x460 Func
	var_110_int = 0; // 0x462 PushI
	var_105_bool = var_107_int != var_110_int; // 0x463 Neq2
	return 2; // 0x464 Return
}


func_740()
{
	func_664(); // 0x2e5 NEW_2
	var_150_string = ""; // 0x2e7 PushV
	func_901(var_21_int, var_150_string); // 0x2e8 NEW_2
	var_151_string = ""; // 0x2ea PushS
	var_152_bool = var_150_string == var_151_string; // 0x2eb Eq
	if(var_152_bool == 0) goto Label_758; // 0x2ec JumpB
	var_153_int = 1; // 0x2ed PushI
	var_154_string = "klara"; // 0x2ee PushS
	SendMessage(var_153_int, var_154_string); // 0x2ef Func
	var_155_string = ""; // 0x2f1 PushV
	var_155_string = "klara"; // 0x2f2 MovS
	func_903(var_21_int, var_155_string); // 0x2f3 NEW_2
	goto Label_802; // 0x2f5 Jump
	
Label_802:
	return 0; // 0x322 Return
	
Label_758:
	var_156_string = ""; // 0x2f6 PushV
	func_901(var_21_int, var_156_string); // 0x2f7 NEW_2
	var_157_string = "klara"; // 0x2f9 PushS
	var_158_bool = var_156_string == var_157_string; // 0x2fa Eq
	if(var_158_bool == 0) goto Label_773; // 0x2fb JumpB
	var_159_int = 1; // 0x2fc PushI
	var_160_string = "burah"; // 0x2fd PushS
	SendMessage(var_159_int, var_160_string); // 0x2fe Func
	var_161_string = ""; // 0x300 PushV
	var_161_string = "burah"; // 0x301 MovS
	func_903(var_21_int, var_161_string); // 0x302 NEW_2
	goto Label_802; // 0x304 Jump
	
Label_773:
	var_162_string = ""; // 0x305 PushV
	func_901(var_21_int, var_162_string); // 0x306 NEW_2
	var_163_string = "burah"; // 0x308 PushS
	var_164_bool = var_162_string == var_163_string; // 0x309 Eq
	if(var_164_bool == 0) goto Label_788; // 0x30a JumpB
	var_165_int = 1; // 0x30b PushI
	var_166_string = "danko"; // 0x30c PushS
	SendMessage(var_165_int, var_166_string); // 0x30d Func
	var_167_string = ""; // 0x30f PushV
	var_167_string = "danko"; // 0x310 MovS
	func_903(var_21_int, var_167_string); // 0x311 NEW_2
	goto Label_802; // 0x313 Jump
	
Label_788:
	var_168_string = ""; // 0x314 PushV
	func_901(var_21_int, var_168_string); // 0x315 NEW_2
	var_169_string = "danko"; // 0x317 PushS
	var_170_bool = var_168_string == var_169_string; // 0x318 Eq
	if(var_170_bool == 0) goto Label_802; // 0x319 JumpB
	var_171_int = 1; // 0x31a PushI
	var_172_string = "klara"; // 0x31b PushS
	SendMessage(var_171_int, var_172_string); // 0x31c Func
	var_173_string = ""; // 0x31e PushV
	var_173_string = "klara"; // 0x31f MovS
	func_903(var_21_int, var_173_string); // 0x320 NEW_2
}


func_616()
{
	var_40_bool = var_3_bool; // 0x268 PushT
	if(var_40_bool == 0) goto Label_620; // 0x269 JumpB
	DestroyWindow(); // 0x26a TObjFunc
	
Label_620:
	var_41_object = var_4_object; // 0x26c PushT
	if(var_41_object == 0) goto Label_624; // 0x26d JumpB
	DestroyWindow(); // 0x26e TObjFunc
	
Label_624:
	var_42_int = var_5_int; // 0x270 PushT
	if(var_42_int == 0) goto Label_628; // 0x271 JumpB
	DestroyWindow(); // 0x272 TObjFunc
	
Label_628:
	var_43_int = var_6_int; // 0x274 PushT
	if(var_43_int == 0) goto Label_632; // 0x275 JumpB
	DestroyWindow(); // 0x276 TObjFunc
	
Label_632:
	var_44_int = var_7_int; // 0x278 PushT
	if(var_44_int == 0) goto Label_636; // 0x279 JumpB
	DestroyWindow(); // 0x27a TObjFunc
	
Label_636:
	var_45_object = var_8_object; // 0x27c PushT
	if(var_45_object == 0) goto Label_640; // 0x27d JumpB
	DestroyWindow(); // 0x27e TObjFunc
	
Label_640:
	CaptureKeyboard(); // 0x280 Func
	return 0; // 0x282 Return
}


func_114(var_105_object)
{
	var_106_object = Obj(); var_107_object = Obj(); // 0x72 PushV
	var_108_string = "game_buttons.xml"; // 0x73 PushS
	var_109_bool = 0; // 0x74 PushB
	CreateWindow(var_108_string, var_109_bool, var_107_object); // 0x75 Func
	var_105_object = var_107_object; // 0x77 Mov
	return 2; // 0x78 Return
}


func_122(var_110_object)
{
	var_111_object = Obj(); var_112_object = Obj(); // 0x7a PushV
	var_113_string = "game_logo.xml"; // 0x7b PushS
	var_114_bool = 0; // 0x7c PushB
	CreateWindow(var_113_string, var_114_bool, var_112_object); // 0x7d Func
	var_110_object = var_112_object; // 0x7f Mov
	return 2; // 0x80 Return
}


