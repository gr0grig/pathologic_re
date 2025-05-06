task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool)
{
	var_14_int = 1; // 0xb4 PushI
	if(var_14_int == 0) goto Label_425; // 0xb5 JumpB
	func_819(); // 0xb7 NEW_2
	var_16_int = 27089; // 0xb9 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xba Eq
	if(var_17_bool == 0) goto Label_193; // 0xbb JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xbc PushV
	var_18_object = var_1_object; // 0xbd MovT
	var_19_object = var_0_object; // 0xbe MovT
	func_871(); // 0xbf NEW_2
	
Label_193:
	var_45_int = 27090; // 0xc1 PushI
	var_46_bool = var_13_bool == var_45_int; // 0xc2 Eq
	if(var_46_bool == 0) goto Label_201; // 0xc3 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0xc4 PushV
	var_47_object = var_1_object; // 0xc5 MovT
	var_48_object = var_0_object; // 0xc6 MovT
	func_871(); // 0xc7 NEW_2
	
Label_201:
	var_49_int = 27084; // 0xc9 PushI
	var_50_bool = var_12_bool == var_49_int; // 0xca Eq
	if(var_50_bool == 0) goto Label_249; // 0xcb JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0xcc PushV
	var_52_object = var_1_object; // 0xcd MovT
	func_880(var_52_object); // 0xce NEW_2
	if(var_51_bool == 0) goto Label_229; // 0xd0 JumpB
	var_59_string = ""; // 0xd1 PushV
	var_59_string = "Neutral"; // 0xd2 MovS
	func_157(var_13_bool, var_59_string); // 0xd3 NEW_2
	var_76_int = 525772; // 0xd5 PushI
	SetMessage(var_76_int); // 0xd6 TObjFunc
	ClearReplies(); // 0xd8 TObjFunc
	var_77_int = 525773; // 0xda PushI
	var_78_int = 27086; // 0xdb PushI
	var_79_int = 27085; // 0xdc PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xdd TObjFunc
	var_80_int = 540955; // 0xdf PushI
	var_81_int = 43044; // 0xe0 PushI
	var_82_int = 43040; // 0xe1 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xe2 TObjFunc
	return 0; // 0xe4 Return
	
Label_229:
	var_83_string = ""; // 0xe5 PushV
	var_83_string = "Neutral"; // 0xe6 MovS
	func_157(var_13_bool, var_83_string); // 0xe7 NEW_2
	var_84_int = 525779; // 0xe9 PushI
	SetMessage(var_84_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_85_int = 525780; // 0xee PushI
	var_86_int = -1; // 0xef PushI
	var_87_int = 27092; // 0xf0 PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0xf1 TObjFunc
	var_88_int = 542525; // 0xf3 PushI
	var_89_int = -1; // 0xf4 PushI
	var_90_int = 44920; // 0xf5 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xf6 TObjFunc
	return 0; // 0xf8 Return
	
Label_249:
	var_91_int = 27086; // 0xf9 PushI
	var_92_bool = var_12_bool == var_91_int; // 0xfa Eq
	if(var_92_bool == 0) goto Label_272; // 0xfb JumpB
	var_93_string = ""; // 0xfc PushV
	var_93_string = "Neutral"; // 0xfd MovS
	func_157(var_13_bool, var_93_string); // 0xfe NEW_2
	var_94_int = 525774; // 0x100 PushI
	SetMessage(var_94_int); // 0x101 TObjFunc
	ClearReplies(); // 0x103 TObjFunc
	var_95_int = 540956; // 0x105 PushI
	var_96_int = 43044; // 0x106 PushI
	var_97_int = 43041; // 0x107 PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0x108 TObjFunc
	var_98_int = 540958; // 0x10a PushI
	var_99_int = 43042; // 0x10b PushI
	var_100_int = 43043; // 0x10c PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x10d TObjFunc
	return 0; // 0x10f Return
	
Label_272:
	var_101_int = 43042; // 0x110 PushI
	var_102_bool = var_12_bool == var_101_int; // 0x111 Eq
	if(var_102_bool == 0) goto Label_290; // 0x112 JumpB
	var_103_string = ""; // 0x113 PushV
	var_103_string = "Neutral"; // 0x114 MovS
	func_157(var_13_bool, var_103_string); // 0x115 NEW_2
	var_104_int = 540957; // 0x117 PushI
	SetMessage(var_104_int); // 0x118 TObjFunc
	ClearReplies(); // 0x11a TObjFunc
	var_105_int = 540963; // 0x11c PushI
	var_106_int = 43046; // 0x11d PushI
	var_107_int = 43048; // 0x11e PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x11f TObjFunc
	return 0; // 0x121 Return
	
Label_290:
	var_108_int = 43044; // 0x122 PushI
	var_109_bool = var_12_bool == var_108_int; // 0x123 Eq
	if(var_109_bool == 0) goto Label_313; // 0x124 JumpB
	var_110_string = ""; // 0x125 PushV
	var_110_string = "Neutral"; // 0x126 MovS
	func_157(var_13_bool, var_110_string); // 0x127 NEW_2
	var_111_int = 540959; // 0x129 PushI
	SetMessage(var_111_int); // 0x12a TObjFunc
	ClearReplies(); // 0x12c TObjFunc
	var_112_int = 540960; // 0x12e PushI
	var_113_int = 43046; // 0x12f PushI
	var_114_int = 43045; // 0x130 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x131 TObjFunc
	var_115_int = 525775; // 0x133 PushI
	var_116_int = 27088; // 0x134 PushI
	var_117_int = 27087; // 0x135 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x136 TObjFunc
	return 0; // 0x138 Return
	
Label_313:
	var_118_int = 27088; // 0x139 PushI
	var_119_bool = var_12_bool == var_118_int; // 0x13a Eq
	if(var_119_bool == 0) goto Label_331; // 0x13b JumpB
	var_120_string = ""; // 0x13c PushV
	var_120_string = "Neutral"; // 0x13d MovS
	func_157(var_13_bool, var_120_string); // 0x13e NEW_2
	var_121_int = 525776; // 0x140 PushI
	SetMessage(var_121_int); // 0x141 TObjFunc
	ClearReplies(); // 0x143 TObjFunc
	var_122_int = 540969; // 0x145 PushI
	var_123_int = 43053; // 0x146 PushI
	var_124_int = 43056; // 0x147 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x148 TObjFunc
	return 0; // 0x14a Return
	
Label_331:
	var_125_int = 43046; // 0x14b PushI
	var_126_bool = var_12_bool == var_125_int; // 0x14c Eq
	if(var_126_bool == 0) goto Label_354; // 0x14d JumpB
	var_127_string = ""; // 0x14e PushV
	var_127_string = "Neutral"; // 0x14f MovS
	func_157(var_13_bool, var_127_string); // 0x150 NEW_2
	var_128_int = 540961; // 0x152 PushI
	SetMessage(var_128_int); // 0x153 TObjFunc
	ClearReplies(); // 0x155 TObjFunc
	var_129_int = 540962; // 0x157 PushI
	var_130_int = 43050; // 0x158 PushI
	var_131_int = 43047; // 0x159 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x15a TObjFunc
	var_132_int = 540967; // 0x15c PushI
	var_133_int = 43055; // 0x15d PushI
	var_134_int = 43054; // 0x15e PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x15f TObjFunc
	return 0; // 0x161 Return
	
Label_354:
	var_135_int = 43055; // 0x162 PushI
	var_136_bool = var_12_bool == var_135_int; // 0x163 Eq
	if(var_136_bool == 0) goto Label_372; // 0x164 JumpB
	var_137_string = ""; // 0x165 PushV
	var_137_string = "Neutral"; // 0x166 MovS
	func_157(var_13_bool, var_137_string); // 0x167 NEW_2
	var_138_int = 540968; // 0x169 PushI
	SetMessage(var_138_int); // 0x16a TObjFunc
	ClearReplies(); // 0x16c TObjFunc
	var_139_int = 540970; // 0x16e PushI
	var_140_int = 43053; // 0x16f PushI
	var_141_int = 43057; // 0x170 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_142_int = 43050; // 0x174 PushI
	var_143_bool = var_12_bool == var_142_int; // 0x175 Eq
	if(var_143_bool == 0) goto Label_390; // 0x176 JumpB
	var_144_string = ""; // 0x177 PushV
	var_144_string = "Neutral"; // 0x178 MovS
	func_157(var_13_bool, var_144_string); // 0x179 NEW_2
	var_145_int = 540964; // 0x17b PushI
	SetMessage(var_145_int); // 0x17c TObjFunc
	ClearReplies(); // 0x17e TObjFunc
	var_146_int = 540965; // 0x180 PushI
	var_147_int = 43053; // 0x181 PushI
	var_148_int = 43052; // 0x182 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_149_int = 43053; // 0x186 PushI
	var_150_bool = var_12_bool == var_149_int; // 0x187 Eq
	if(var_150_bool == 0) goto Label_413; // 0x188 JumpB
	var_151_string = ""; // 0x189 PushV
	var_151_string = "Neutral"; // 0x18a MovS
	func_157(var_13_bool, var_151_string); // 0x18b NEW_2
	var_152_int = 540966; // 0x18d PushI
	SetMessage(var_152_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_153_int = 525777; // 0x192 PushI
	var_154_int = -1; // 0x193 PushI
	var_155_int = 27089; // 0x194 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x195 TObjFunc
	var_156_int = 525778; // 0x197 PushI
	var_157_int = -1; // 0x198 PushI
	var_158_int = 27090; // 0x199 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x19a TObjFunc
	return 0; // 0x19c Return
	
Label_413:
	var_3_string = 1; // 0x19d TMovB
	var_159_bool = 0; // 0x19e PushV
	func_971(var_159_bool); // 0x19f NEW_2
	if(var_159_bool == 0) goto Label_421; // 0x1a1 JumpB
	lshStopAnimation(); // 0x1a2 Func
	goto Label_423; // 0x1a4 Jump
	
Label_423:
	return 0; // 0x1a7 Return
	
Label_421:
	StopAnimation(); // 0x1a5 Func
	
Label_425:
	return 0; // 0x1a9 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_object)
{
	func_577(var_11_bool, var_12_object); // 0x1b2 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x1b4 PushV
	var_17_object = var_12_object; // 0x1b5 Mov
	TaskCall(0); // 0x1b6 TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x1b7 NEW_2
	TaskReturn(); // 0x1b8 TaskReturn
	return 0; // 0x1ba Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_string)
{
	var_13_string = "cleanup"; // 0x1e2 PushS
	var_14_bool = var_12_string == var_13_string; // 0x1e3 Eq
	if(var_14_bool == 0) goto Label_488; // 0x1e4 JumpB
	func_461(var_12_string); // 0x1e6 NEW_2
	
Label_488:
	return 0; // 0x1e8 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_int = var_6_int; // 0x1e9 PushT
	if(var_12_int == 0) goto Label_494; // 0x1ea JumpB
	func_577(var_10_bool, var_11_bool); // 0x1ec NEW_2
	
Label_494:
	var_16_bool = 0; // 0x1ee PushV
	var_16_bool = 0; // 0x1ef MovB
	var_17_int = var_5_int; // 0x1f0 PushT
	if(var_17_int == 0) goto Label_503; // 0x1f1 JumpB
	var_18_bool = 0; // 0x1f2 PushV
	func_510(var_18_bool); // 0x1f3 NEW_2
	if(var_18_bool == 0) goto Label_503; // 0x1f5 JumpB
	var_16_bool = 1; // 0x1f6 MovB
	
Label_503:
	if(var_16_bool == 0) goto Label_509; // 0x1f7 JumpB
	var_19_object = Obj(); // 0x1f8 PushV
	func_826(var_19_object); // 0x1f9 NEW_2
	RemoveActor(var_19_object); // 0x1fb Func
	
Label_509:
	return 0; // 0x1fd Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool, var_12_int)
{
	var_13_int = 10; // 0x22b PushI
	var_14_bool = var_12_int == var_13_int; // 0x22c Eq
	if(var_14_bool == 0) goto Label_576; // 0x22d JumpB
	var_15_bool = 0; // 0x22e PushV
	func_539(var_10_bool, var_11_bool, var_12_int, var_15_bool); // 0x22f NEW_2
	if(var_15_bool == 0) goto Label_570; // 0x231 JumpB
	var_28_bool = var_2_object == 0; // 0x232 Not
	if(var_28_bool == 0) goto Label_569; // 0x233 JumpB
	var_29_object = Obj(); // 0x234 PushV
	var_29_object = var_4_bool; // 0x235 MovT
	func_808(var_29_object); // 0x236 NEW_2
	var_2_object = 1; // 0x238 TMovB
	
Label_569:
	goto Label_576; // 0x239 Jump
	
Label_576:
	return 0; // 0x240 Return
	
Label_570:
	var_36_object = var_2_object; // 0x23a PushT
	if(var_36_object == 0) goto Label_576; // 0x23b JumpB
	var_37_string = "head"; // 0x23c PushS
	UnlookAsync(var_37_string); // 0x23d Func
	var_2_object = 0; // 0x23f TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_bool)
{
	var_12_float = 0; var_13_float = 0; // 0x1aa PushV
	var_12_float = 300; // 0x1ab MovI
	var_13_float = 100; // 0x1ac MovI
	func_443(var_11_bool, var_12_float, var_13_float); // 0x1ad NEW_2
	return 0; // 0x1af Return
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 70.0; // 0x4 MovF
	func_690(var_28_object, var_29_float); // 0x5 NEW_2
	var_74_bool = var_27_bool == 0; // 0x7 Not
	if(var_74_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_75_int = 0; // 0xd PushV
	func_965(var_75_int); // 0xe NEW_2
	SetNPCName(var_75_int); // 0x10 ObjFunc
	var_76_int = 0; // 0x12 PushV
	func_963(var_76_int); // 0x13 NEW_2
	SetNPCDescription(var_76_int); // 0x15 ObjFunc
	var_77_string = ""; // 0x17 PushV
	func_967(var_77_string); // 0x18 NEW_2
	SetPhoto(var_77_string); // 0x1a ObjFunc
	var_78_string = ""; // 0x1c PushV
	func_969(var_78_string); // 0x1d NEW_2
	SetPhoto2(var_78_string); // 0x1f ObjFunc
	var_79_int = 0; // 0x21 PushV
	func_946(var_79_int); // 0x22 NEW_2
	SetPlayerName(var_79_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_87_bool = var_24_bool; // 0x29 Push
	if(var_87_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_88_object = Obj(); var_89_object = Obj(); // 0x2f PushV
	var_88_object = var_17_object; // 0x30 Mov
	var_89_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_90_object, var_91_object, var_92_string, var_93_bool, var_88_object, var_89_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_153_bool = var_26_bool == 0; // 0x38 Not
	if(var_153_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_154_object = Obj(); // 0x3f PushV
	var_154_object = var_17_object; // 0x40 Mov
	func_759(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_512(var_0_object, var_1_object, var_2_object, var_3_string, var_17_bool, var_21_float, var_22_float)
{
	var_23_bool = 0; // 0x201 PushV
	func_685(var_23_bool); // 0x202 NEW_2
	var_26_bool = var_23_bool == 0; // 0x204 Not
	if(var_26_bool == 0) goto Label_519; // 0x205 JumpB
	return 0; // 0x206 Return
	
Label_519:
	var_27_string = "player"; // 0x207 PushS
	FindActor(var_17_bool, var_27_string); // 0x208 Func
	var_2_object = 0; // 0x20a TMovB
	var_3_string = 0; // 0x20b TMovB
	var_0_object = var_21_float; // 0x20c TMov
	var_1_object = var_22_float; // 0x20d TMov
	var_28_int = 10; // 0x20e PushI
	var_29_float = 1.0; // 0x20f PushF
	SetTimer(var_28_int, var_29_float); // 0x210 Func
	func_591(); // 0x213 NEW_2
	var_81_bool = var_3_string == 0; // 0x215 Not
	if(var_81_bool == 0) goto Label_538; // 0x216 JumpB
	var_82_int = 10; // 0x217 PushI
	KillTimer(var_82_int); // 0x218 Func
	
Label_538:
	return 0; // 0x21a Return
}


func_905(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x389 PushV
	GetDiaryRoot(var_38_object); // 0x38a Func
	var_39_bool = var_38_object == 0; // 0x38c Not
	if(var_39_bool == 0) goto Label_915; // 0x38d JumpB
	var_40_string = "Can't retrieve diary root"; // 0x38e PushS
	Trace(var_40_string); // 0x38f Func
	var_36_object = 0; // 0x391 MovB
	return 2; // 0x392 Return
	
Label_915:
	var_36_object = var_38_object; // 0x393 Mov
	return 2; // 0x394 Return
}


func_777(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x309 PushV
	lshHasAnimation(var_133_bool, var_129_string); // 0x30a Func
	var_136_bool = var_133_bool; // 0x30c Push
	if(var_136_bool == 0) goto Label_788; // 0x30d JumpB
	lshGetAnimTimes(var_129_string, var_134_float, var_135_float); // 0x30e Func
	var_137_bool = 0; // 0x310 PushB
	lshPlayAnimation(var_134_float, var_135_float, var_137_bool); // 0x311 Func
	goto Label_792; // 0x313 Jump
	
Label_792:
	return 6; // 0x318 Return
	
Label_788:
	var_138_string = "Can't find lsh animation : "; // 0x314 PushS
	var_139_int = var_138_string + var_129_string; // 0x315 Add
	Trace(var_139_int); // 0x316 Func
}


func_918(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; // 0x396 PushV
	var_36_object = Obj(); // 0x397 PushV
	func_905(var_36_object); // 0x398 NEW_2
	var_33_object = var_36_object; // 0x399 Mov
	Find(var_29_int, var_34_object); // 0x39b ObjFunc
	var_41_bool = var_34_object == 0; // 0x39d Not
	if(var_41_bool == 0) goto Label_933; // 0x39e JumpB
	var_42_string = "Can't find diary parent with id: "; // 0x39f PushS
	var_43_int = var_42_string + var_29_int; // 0x3a0 Add
	Trace(var_43_int); // 0x3a1 Func
	var_27_bool = 0; // 0x3a3 MovB
	return 6; // 0x3a4 Return
	
Label_933:
	AddChild(var_28_object); // 0x3a5 ObjFunc
	var_44_int = 7; // 0x3a7 PushI
	SendWorldWndMessage(var_44_int); // 0x3a8 Func
	GetCategory(var_35_int); // 0x3aa ObjFunc
	SetDiarySection(var_35_int); // 0x3ac Func
	var_27_bool = 0; // 0x3ae MovB
	return 6; // 0x3af Return
}


func_793(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0; // 0x319 PushV
	lshHasAnimation(var_114_bool, var_107_string); // 0x31a Func
	var_117_bool = var_114_bool; // 0x31c Push
	if(var_117_bool == 0) goto Label_803; // 0x31d JumpB
	lshGetAnimTimes(var_107_string, var_115_float, var_116_float); // 0x31e Func
	lshPlayAnimation(var_115_float, var_116_float, var_108_bool); // 0x320 Func
	goto Label_807; // 0x322 Jump
	
Label_807:
	return 6; // 0x327 Return
	
Label_803:
	var_118_string = "Can't find lsh animation : "; // 0x323 PushS
	var_119_int = var_118_string + var_107_string; // 0x324 Add
	Trace(var_119_int); // 0x325 Func
}


func_539(var_0_object, var_1_object, var_4_bool, var_15_bool)
{
	var_16_float = 0; var_17_float = 0; // 0x21b PushV
	var_18_bool = var_4_bool == 0; // 0x21c NullEq
	if(var_18_bool == 0) goto Label_544; // 0x21d JumpB
	var_15_bool = 0; // 0x21e MovB
	return 2; // 0x21f Return
	
Label_544:
	var_19_float = 0; var_20_object = Obj(); // 0x220 PushV
	var_20_object = var_4_bool; // 0x221 MovT
	func_677(var_20_object); // 0x222 NEW_2
	var_17_float = sqrt(var_19_float); // 0x224 Sqrt2
	var_27_object = var_2_object; // 0x225 PushT
	if(var_27_object == 0) goto Label_552; // 0x226 JumpB
	var_17_float = var_17_float - var_1_object; // 0x227 Sub2
	
Label_552:
	var_15_bool = var_17_float < var_0_object; // 0x228 LT2
	return 2; // 0x229 Return
}


func_157(var_2_object, var_103_string)
{
	var_104_bool = 0; // 0x9e PushV
	func_971(var_104_bool); // 0x9f NEW_2
	var_105_bool = var_104_bool == 0; // 0xa1 Not
	if(var_105_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_106_bool = var_103_string == var_2_object; // 0xa4 Eq
	if(var_106_bool == 0) goto Label_167; // 0xa5 JumpB
	return 0; // 0xa6 Return
	
Label_167:
	var_107_string = ""; var_108_bool = 0; // 0xa7 PushV
	var_107_string = var_103_string; // 0xa8 Mov
	var_109_string = ""; // 0xa9 PushS
	var_110_bool = var_103_string == var_109_string; // 0xaa Eq
	if(var_110_bool == 0) goto Label_174; // 0xab JumpB
	var_108_bool = 0; // 0xac MovB
	goto Label_175; // 0xad Jump
	
Label_175:
	func_793(var_107_string, var_108_bool); // 0xaf NEW_2
	var_2_object = var_103_string; // 0xb1 TMov
	return 0; // 0xb2 Return
	
Label_174:
	var_108_bool = 1; // 0xae MovB
}


func_670(var_71_bool)
{
	var_71_bool = 1; // 0x29e MovB
	return 0; // 0x29f Return
}


func_672()
{
	StopAnimation(); // 0x2a0 Func
	StopGroup0(); // 0x2a2 Func
	return 0; // 0x2a4 Return
}


func_677(var_19_float)
{
	var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); // 0x2a5 PushV
	GetPosition(var_24_cvector); // 0x2a6 Func
	GetPosition(var_25_cvector); // 0x2a8 ObjFunc
	var_26_cvector = var_25_cvector - var_24_cvector; // 0x2aa Sub2
	var_19_float = var_26_cvector | var_26_cvector; // 0x2ab Or2
	return 6; // 0x2ac Return
}


func_808(var_29_object)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); // 0x328 PushV
	GetEyesHeight(var_32_float); // 0x329 ObjFunc
	var_33_cvector = CVector(0.0, 0.0, 0.0); // 0x32b MovV
	var_34_float = GetByIndex(var_33_cvector, 1); // 0x32c PushE
	var_34_float = var_32_float; // 0x32d Mov
	SetByIndex(var_33_cvector, 1) = var_34_float; // 0x32e PopE
	var_35_string = "head"; // 0x32f PushS
	LookAsync(var_29_object, var_35_string, var_33_cvector); // 0x330 Func
	return 4; // 0x332 Return
}


func_685(var_23_bool)
{
	var_24_bool = 0; var_25_bool = 0; // 0x2ad PushV
	IsLoaded(var_25_bool); // 0x2ae Func
	var_23_bool = var_25_bool; // 0x2b0 Mov
	return 2; // 0x2b1 Return
}


func_690(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x2b2 PushV
	GetPosition(var_40_cvector); // 0x2b3 ObjFunc
	GetEyesHeight(var_39_float); // 0x2b5 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2b7 PushE
	var_48_float = var_48_float + var_39_float; // 0x2b8 Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2b9 PopE
	GetPosition(var_41_cvector); // 0x2ba Func
	GetEyesHeight(var_39_float); // 0x2bc Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x2be PushE
	var_49_float = var_49_float + var_39_float; // 0x2bf Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x2c0 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x2c1 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x2c2 PushE
	var_50_float = 0; // 0x2c3 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2c4 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x2c5 Or
	var_52_float = sqrt(var_51_int); // 0x2c6 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x2c7 Div2
	var_43_cvector = -var_42_cvector; // 0x2c8 Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x2c9 Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2ca PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2cb PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2cc Xor2
	func_832(var_54_cvector, var_55_cvector); // 0x2cd NEW_2
	var_62_int = 25; // 0x2cf PushI
	var_63_float = var_54_cvector * var_62_int; // 0x2d0 Mult
	var_64_int = var_53_float + var_63_float; // 0x2d1 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2d2 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2d3 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2d4 Add2
	IsOverrideActive(var_46_bool); // 0x2d5 Func
	var_66_bool = var_46_bool; // 0x2d7 Push
	if(var_66_bool == 0) goto Label_731; // 0x2d8 JumpB
	var_27_bool = 0; // 0x2d9 MovB
	return 18; // 0x2da Return
	
Label_731:
	StopWorld(); // 0x2db Func
	var_67_bool = 1; // 0x2dd PushB
	CameraTransit(var_45_cvector, var_43_cvector, var_67_bool); // 0x2de Func
	var_68_float = GetByIndex(var_44_cvector, 0); // 0x2e0 PushE
	var_69_float = GetByIndex(var_44_cvector, 2); // 0x2e1 PushE
	Rotate(var_68_float, var_69_float); // 0x2e2 Func
	var_70_bool = 0; // 0x2e4 PushV
	func_971(var_70_bool); // 0x2e5 NEW_2
	if(var_70_bool == 0) goto Label_745; // 0x2e7 JumpB
	goto Label_753; // 0x2e8 Jump
	
Label_753:
	CameraWaitForPlayFinish(); // 0x2f1 Func
	ResumeWorld(); // 0x2f3 Func
	var_27_bool = 1; // 0x2f5 MovB
	return 18; // 0x2f6 Return
	
Label_745:
	var_71_string = "head"; // 0x2e9 PushS
	HasAnimationTrack(var_47_bool, var_71_string); // 0x2ea Func
	var_72_bool = var_47_bool; // 0x2ec Push
	if(var_72_bool == 0) goto Label_753; // 0x2ed JumpB
	var_73_string = "head"; // 0x2ee PushS
	LookAsyncCamera(var_73_string); // 0x2ef Func
}


func_946(var_79_int)
{
	var_80_int = 0; var_81_int = 0; // 0x3b2 PushV
	var_82_string = "branch"; // 0x3b3 PushS
	GetVariable(var_82_string, var_81_int); // 0x3b4 Func
	var_83_int = 0; // 0x3b6 PushI
	var_84_bool = var_81_int == var_83_int; // 0x3b7 Eq
	if(var_84_bool == 0) goto Label_956; // 0x3b8 JumpB
	var_79_int = 1; // 0x3b9 MovI
	return 2; // 0x3ba Return
	
Label_956:
	var_85_int = 1; // 0x3bc PushI
	var_86_bool = var_81_int == var_85_int; // 0x3bd Eq
	if(var_86_bool == 0) goto Label_961; // 0x3be JumpB
	var_79_int = 2; // 0x3bf MovI
	return 2; // 0x3c0 Return
	
Label_961:
	var_79_int = 3; // 0x3c1 MovI
	return 2; // 0x3c2 Return
}


func_819()
{
	var_15_bool = 0; // 0x333 PushV
	func_971(var_15_bool); // 0x334 NEW_2
	if(var_15_bool == 0) goto Label_825; // 0x336 JumpB
	lshStopSpeech(); // 0x337 Func
	
Label_825:
	return 0; // 0x339 Return
}


func_826(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x33a PushV
	self(var_21_object); // 0x33b Func
	var_19_object = var_21_object; // 0x33d Mov
	return 2; // 0x33e Return
}


func_443(var_6_int, var_12_float, var_13_float)
{
	var_14_float = 0; var_15_bool = 0; var_16_float = 0; var_17_bool = 0; // 0x1bb PushV
	var_6_int = 0; // 0x1bc TMovB
	
Label_445:
	var_18_int = 3; // 0x1bd PushI
	rand(var_16_float, var_18_int); // 0x1be Func
	var_19_int = 3; // 0x1c0 PushI
	var_20_int = var_16_float + var_19_int; // 0x1c1 Add
	Sleep(var_20_int, var_17_bool); // 0x1c2 Func
	var_6_int = 1; // 0x1c4 TMovB
	var_21_float = 0; var_22_float = 0; // 0x1c5 PushV
	var_21_float = var_12_float; // 0x1c6 Mov
	var_22_float = var_13_float; // 0x1c7 Mov
	func_512(var_13_float, var_14_float, var_15_bool, var_16_float, var_17_bool, var_21_float, var_22_float); // 0x1c8 NEW_2
	var_6_int = 0; // 0x1ca TMovB
	goto Label_445; // 0x1cb Jump
}


func_832(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x340 PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x341 Or
	var_58_float = sqrt(var_59_int); // 0x342 Sqrt2
	var_60_float = 0.0; // 0x343 PushF
	var_61_bool = var_58_float < var_60_float; // 0x344 LT
	if(var_61_bool == 0) goto Label_840; // 0x345 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x346 MovV
	return 2; // 0x347 Return
	
Label_840:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x348 Div2
	return 2; // 0x349 Return
}


func_577(var_2_object, var_3_string)
{
	func_672(); // 0x242 NEW_2
	var_13_int = 10; // 0x244 PushI
	KillTimer(var_13_int); // 0x245 Func
	var_14_object = var_2_object; // 0x247 PushT
	if(var_14_object == 0) goto Label_589; // 0x248 JumpB
	var_15_string = "head"; // 0x249 PushS
	UnlookAsync(var_15_string); // 0x24a Func
	var_2_object = 0; // 0x24c TMovB
	
Label_589:
	var_3_string = 1; // 0x24d TMovB
	return 0; // 0x24e Return
}


func_963(var_76_int)
{
	var_76_int = 518716; // 0x3c3 MovI
	return 0; // 0x3c4 Return
}


func_965(var_75_int)
{
	var_75_int = 518715; // 0x3c5 MovI
	return 0; // 0x3c6 Return
}


func_967(var_77_string)
{
	var_77_string = "ui/NPC_Prophet.png"; // 0x3c7 MovS
	return 0; // 0x3c8 Return
}


func_969(var_78_string)
{
	var_78_string = "ui/NPC_Prophet_b.png"; // 0x3c9 MovS
	return 0; // 0x3ca Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_88_object, var_89_object)
{
	var_0_object = var_89_object; // 0x4b TMov
	var_1_object = var_88_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_94_int = 1; // 0x4e PushI
	if(var_94_int == 0) goto Label_127; // 0x4f JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x50 PushV
	var_96_object = var_1_object; // 0x51 MovT
	func_880(var_96_object); // 0x52 NEW_2
	if(var_95_bool == 0) goto Label_105; // 0x54 JumpB
	var_103_string = ""; // 0x55 PushV
	var_103_string = "Neutral"; // 0x56 MovS
	func_157(var_89_object, var_103_string); // 0x57 NEW_2
	var_120_int = 525772; // 0x59 PushI
	SetMessage(var_120_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_121_int = 525773; // 0x5e PushI
	var_122_int = 27086; // 0x5f PushI
	var_123_int = 27085; // 0x60 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x61 TObjFunc
	var_124_int = 540955; // 0x63 PushI
	var_125_int = 43044; // 0x64 PushI
	var_126_int = 43040; // 0x65 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x66 TObjFunc
	goto Label_127; // 0x68 Jump
	
Label_127:
	var_127_bool = 0; // 0x7f PushV
	func_971(var_127_bool); // 0x80 NEW_2
	if(var_127_bool == 0) goto Label_142; // 0x82 JumpB
	
Label_131:
	lshWaitForAnimEnd(); // 0x83 Func
	var_128_string = var_3_string; // 0x85 PushT
	if(var_128_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_141:
	goto Label_156; // 0x8d Jump
	
Label_156:
	return 0; // 0x9c Return
	
Label_136:
	var_129_string = ""; // 0x88 PushV
	var_129_string = var_2_object; // 0x89 MovT
	func_777(var_129_string); // 0x8a NEW_2
	goto Label_131; // 0x8c Jump
	
Label_142:
	var_140_string = "all"; // 0x8e PushS
	var_141_string = "idle"; // 0x8f PushS
	PlayAnimation(var_140_string, var_141_string); // 0x90 Func
	
Label_146:
	WaitForAnimEnd(); // 0x92 Func
	var_142_string = var_3_string; // 0x94 PushT
	if(var_142_string == 0) goto Label_151; // 0x95 JumpB
	goto Label_156; // 0x96 Jump
	
Label_151:
	var_143_string = "all"; // 0x97 PushS
	var_144_string = "idle"; // 0x98 PushS
	PlayAnimation(var_143_string, var_144_string); // 0x99 Func
	goto Label_146; // 0x9b Jump
	
Label_105:
	var_145_string = ""; // 0x69 PushV
	var_145_string = "Neutral"; // 0x6a MovS
	func_157(var_89_object, var_145_string); // 0x6b NEW_2
	var_146_int = 525779; // 0x6d PushI
	SetMessage(var_146_int); // 0x6e TObjFunc
	ClearReplies(); // 0x70 TObjFunc
	var_147_int = 525780; // 0x72 PushI
	var_148_int = -1; // 0x73 PushI
	var_149_int = 27092; // 0x74 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x75 TObjFunc
	var_150_int = 542525; // 0x77 PushI
	var_151_int = -1; // 0x78 PushI
	var_152_int = 44920; // 0x79 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x7a TObjFunc
	goto Label_127; // 0x7c Jump
}


func_971(var_70_bool)
{
	var_70_bool = 0; // 0x3cb MovB
	return 0; // 0x3cc Return
}


func_842(var_97_int, var_98_string)
{
	var_99_int = 0; var_100_int = 0; // 0x34a PushV
	GetVariable(var_98_string, var_100_int); // 0x34b Func
	var_97_int = var_100_int; // 0x34d Mov
	return 2; // 0x34e Return
}


func_461(var_5_int)
{
	var_5_int = 1; // 0x1cd TMovB
	var_15_bool = 0; // 0x1ce PushV
	var_15_bool = 0; // 0x1cf MovB
	var_16_bool = 0; // 0x1d0 PushV
	func_685(var_16_bool); // 0x1d1 NEW_2
	var_19_bool = var_16_bool == 0; // 0x1d3 Not
	if(var_19_bool == 0) goto Label_474; // 0x1d4 JumpB
	var_20_bool = 0; // 0x1d5 PushV
	func_510(var_20_bool); // 0x1d6 NEW_2
	if(var_20_bool == 0) goto Label_474; // 0x1d8 JumpB
	var_15_bool = 1; // 0x1d9 MovB
	
Label_474:
	if(var_15_bool == 0) goto Label_480; // 0x1da JumpB
	var_21_object = Obj(); // 0x1db PushV
	func_826(var_21_object); // 0x1dc NEW_2
	RemoveActor(var_21_object); // 0x1de Func
	
Label_480:
	return 0; // 0x1e0 Return
}


func_591()
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_float = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; // 0x24f PushV
	WaitForAnimEnd(); // 0x250 Func
	var_44_bool = 0; // 0x252 PushV
	func_685(var_44_bool); // 0x253 NEW_2
	var_45_bool = var_44_bool == 0; // 0x255 Not
	if(var_45_bool == 0) goto Label_600; // 0x256 JumpB
	return 14; // 0x257 Return
	
Label_600:
	var_46_int = 0; // 0x258 PushV
	func_854(var_46_int); // 0x259 NEW_2
	var_37_int = var_46_int; // 0x25a Mov
	var_38_int = 0; // 0x25c MovI
	
Label_605:
	var_59_bool = 0; // 0x25d PushV
	var_59_bool = 0; // 0x25e MovB
	var_60_int = 5; // 0x25f PushI
	var_61_bool = var_38_int < var_60_int; // 0x260 LT
	if(var_61_bool == 0) goto Label_615; // 0x261 JumpB
	var_62_bool = 0; // 0x262 PushV
	func_685(var_62_bool); // 0x263 NEW_2
	if(var_62_bool == 0) goto Label_615; // 0x265 JumpB
	var_59_bool = 1; // 0x266 MovB
	
Label_615:
	if(var_59_bool == 0) goto Label_667; // 0x267 JumpB
	var_63_int = 3; // 0x268 PushI
	irand(var_39_int, var_63_int); // 0x269 Func
	var_64_int = 0; // 0x26b PushI
	var_65_bool = var_39_int == var_64_int; // 0x26c Eq
	if(var_65_bool == 0) goto Label_639; // 0x26d JumpB
	var_66_int = var_37_int; // 0x26e Push
	if(var_66_int == 0) goto Label_638; // 0x26f JumpB
	irand(var_40_int, var_37_int); // 0x270 Func
	var_67_string = "all"; // 0x272 PushS
	var_68_string = ""; var_69_int = 0; // 0x273 PushV
	var_69_int = var_40_int; // 0x274 Mov
	func_847(var_68_string, var_69_int); // 0x275 NEW_2
	PlayAnimation(var_67_string, var_68_string); // 0x277 Func
	WaitForAnimEnd(var_41_bool); // 0x279 Func
	var_70_bool = var_41_bool == 0; // 0x27b Not
	if(var_70_bool == 0) goto Label_638; // 0x27c JumpB
	goto Label_667; // 0x27d Jump
	
Label_667:
	ResetAAS(); // 0x29b Func
	return 14; // 0x29d Return
	
Label_638:
	goto Label_656; // 0x27e Jump
	
Label_656:
	var_71_bool = 0; // 0x290 PushV
	func_670(var_71_bool); // 0x291 NEW_2
	var_72_bool = var_71_bool == 0; // 0x293 Not
	if(var_72_bool == 0) goto Label_662; // 0x294 JumpB
	goto Label_667; // 0x295 Jump
	
Label_662:
	ResetAAS(); // 0x296 Func
	var_73_int = 1; // 0x298 PushI
	var_38_int = var_38_int + var_73_int; // 0x299 Add2
	goto Label_605; // 0x29a Jump
	
Label_639:
	var_74_int = 1; // 0x27f PushI
	var_75_bool = var_39_int == var_74_int; // 0x280 Eq
	if(var_75_bool == 0) goto Label_653; // 0x281 JumpB
	var_76_int = 4; // 0x282 PushI
	rand(var_42_float, var_76_int); // 0x283 Func
	var_77_int = 1; // 0x285 PushI
	var_78_int = var_42_float + var_77_int; // 0x286 Add
	Sleep(var_78_int, var_43_bool); // 0x287 Func
	var_79_bool = var_43_bool == 0; // 0x289 Not
	if(var_79_bool == 0) goto Label_652; // 0x28a JumpB
	goto Label_667; // 0x28b Jump
	
Label_652:
	goto Label_656; // 0x28c Jump
	
Label_653:
	var_80_int = var_38_int; // 0x28d Push
	if(var_80_int == 0) goto Label_656; // 0x28e JumpB
	goto Label_667; // 0x28f Jump
}


func_847(var_52_string, var_53_int)
{
	var_54_string = ""; var_55_string = ""; // 0x34f PushV
	var_55_string = "idle"; // 0x350 MovS
	var_56_int = var_53_int; // 0x351 Push
	if(var_56_int == 0) goto Label_852; // 0x352 JumpB
	var_55_string = var_55_string + var_53_int; // 0x353 Add2
	
Label_852:
	var_52_string = var_55_string; // 0x354 Mov
	return 2; // 0x355 Return
}


func_854(var_46_int)
{
	var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_bool = 0; // 0x356 PushV
	var_49_int = 0; // 0x357 MovI
	
Label_856:
	var_51_string = "all"; // 0x358 PushS
	var_52_string = ""; var_53_int = 0; // 0x359 PushV
	var_53_int = var_49_int; // 0x35a Mov
	func_847(var_52_string, var_53_int); // 0x35b NEW_2
	HasAnimation(var_50_bool, var_51_string, var_52_string); // 0x35d Func
	var_57_bool = var_50_bool == 0; // 0x35f Not
	if(var_57_bool == 0) goto Label_866; // 0x360 JumpB
	goto Label_869; // 0x361 Jump
	
Label_869:
	var_46_int = var_49_int; // 0x365 Mov
	return 4; // 0x366 Return
	
Label_866:
	var_58_int = 1; // 0x362 PushI
	var_49_int = var_49_int + var_58_int; // 0x363 Add2
	goto Label_856; // 0x364 Jump
}


func_871()
{
	var_20_string = "k4q02"; // 0x368 PushS
	var_21_int = 3; // 0x369 PushI
	SetVariable(var_20_string, var_21_int); // 0x36a Func
	func_892(); // 0x36d NEW_2
	return 0; // 0x36f Return
}


func_880(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x371 PushV
	var_98_string = "k4q02"; // 0x372 MovS
	func_842(var_97_int, var_98_string); // 0x373 NEW_2
	var_101_int = 2; // 0x375 PushI
	var_102_bool = var_97_int == var_101_int; // 0x376 Eq
	if(var_102_bool == 0) goto Label_890; // 0x377 JumpB
	var_95_bool = 1; // 0x378 MovB
	return 0; // 0x379 Return
	
Label_890:
	var_95_bool = 0; // 0x37a MovB
	return 0; // 0x37b Return
}


func_759()
{
	var_155_bool = 0; var_156_bool = 0; // 0x2f7 PushV
	var_157_bool = 1; // 0x2f8 PushB
	CameraSwitchToNormal(var_157_bool); // 0x2f9 Func
	var_158_bool = 0; // 0x2fb PushV
	func_971(var_158_bool); // 0x2fc NEW_2
	if(var_158_bool == 0) goto Label_768; // 0x2fe JumpB
	goto Label_776; // 0x2ff Jump
	
Label_776:
	return 2; // 0x308 Return
	
Label_768:
	var_159_string = "head"; // 0x300 PushS
	HasAnimationTrack(var_156_bool, var_159_string); // 0x301 Func
	var_160_bool = var_156_bool; // 0x303 Push
	if(var_160_bool == 0) goto Label_776; // 0x304 JumpB
	var_161_string = "head"; // 0x305 PushS
	UnlookAsync(var_161_string); // 0x306 Func
}


func_892()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x37c PushV
	var_24_int = 382; // 0x37d PushI
	var_25_int = 2; // 0x37e PushI
	var_26_int = 525788; // 0x37f PushI
	CreateDiaryEntry(var_23_object, var_24_int, var_25_int, var_26_int); // 0x380 Func
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; // 0x382 PushV
	var_28_object = var_23_object; // 0x383 Mov
	var_29_int = 378; // 0x384 MovI
	func_918(var_27_bool, var_28_object, var_29_int); // 0x385 NEW_2
	return 2; // 0x387 Return
}


func_510(var_18_bool)
{
	var_18_bool = 1; // 0x1fe MovB
	return 0; // 0x1ff Return
}


