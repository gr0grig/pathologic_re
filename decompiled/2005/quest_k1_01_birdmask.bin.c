task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool)
{
	var_13_int = 1; // 0xa5 PushI
	if(var_13_int == 0) goto Label_489; // 0xa6 JumpB
	func_820(); // 0xa8 NEW_2
	var_15_int = 27252; // 0xaa PushI
	var_16_bool = var_11_object == var_15_int; // 0xab Eq
	if(var_16_bool == 0) goto Label_203; // 0xac JumpB
	var_17_object = Obj(); var_18_object = Obj(); // 0xad PushV
	var_17_object = var_1_object; // 0xae MovT
	var_18_object = var_0_object; // 0xaf MovT
	func_883(); // 0xb0 NEW_2
	var_25_string = ""; // 0xb2 PushV
	var_25_string = "Neutral"; // 0xb3 MovS
	func_142(var_12_bool, var_25_string); // 0xb4 NEW_2
	var_42_int = 525968; // 0xb6 PushI
	SetMessage(var_42_int); // 0xb7 TObjFunc
	ClearReplies(); // 0xb9 TObjFunc
	var_43_int = 525969; // 0xbb PushI
	var_44_int = 27254; // 0xbc PushI
	var_45_int = 27253; // 0xbd PushI
	AddReply(var_43_int, var_44_int, var_45_int); // 0xbe TObjFunc
	var_46_int = 525988; // 0xc0 PushI
	var_47_int = 27273; // 0xc1 PushI
	var_48_int = 27272; // 0xc2 PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xc3 TObjFunc
	var_49_int = 525996; // 0xc5 PushI
	var_50_int = 27284; // 0xc6 PushI
	var_51_int = 27283; // 0xc7 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0xc8 TObjFunc
	return 0; // 0xca Return
	
Label_203:
	var_52_int = 27284; // 0xcb PushI
	var_53_bool = var_11_object == var_52_int; // 0xcc Eq
	if(var_53_bool == 0) goto Label_226; // 0xcd JumpB
	var_54_string = ""; // 0xce PushV
	var_54_string = "Neutral"; // 0xcf MovS
	func_142(var_12_bool, var_54_string); // 0xd0 NEW_2
	var_55_int = 525997; // 0xd2 PushI
	SetMessage(var_55_int); // 0xd3 TObjFunc
	ClearReplies(); // 0xd5 TObjFunc
	var_56_int = 526229; // 0xd7 PushI
	var_57_int = 27273; // 0xd8 PushI
	var_58_int = 27495; // 0xd9 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xda TObjFunc
	var_59_int = 526230; // 0xdc PushI
	var_60_int = 27254; // 0xdd PushI
	var_61_int = 27496; // 0xde PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xdf TObjFunc
	return 0; // 0xe1 Return
	
Label_226:
	var_62_int = 27273; // 0xe2 PushI
	var_63_bool = var_11_object == var_62_int; // 0xe3 Eq
	if(var_63_bool == 0) goto Label_244; // 0xe4 JumpB
	var_64_string = ""; // 0xe5 PushV
	var_64_string = "Neutral"; // 0xe6 MovS
	func_142(var_12_bool, var_64_string); // 0xe7 NEW_2
	var_65_int = 525989; // 0xe9 PushI
	SetMessage(var_65_int); // 0xea TObjFunc
	ClearReplies(); // 0xec TObjFunc
	var_66_int = 525990; // 0xee PushI
	var_67_int = 27254; // 0xef PushI
	var_68_int = 27274; // 0xf0 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xf1 TObjFunc
	return 0; // 0xf3 Return
	
Label_244:
	var_69_int = 27254; // 0xf4 PushI
	var_70_bool = var_11_object == var_69_int; // 0xf5 Eq
	if(var_70_bool == 0) goto Label_267; // 0xf6 JumpB
	var_71_string = ""; // 0xf7 PushV
	var_71_string = "Neutral"; // 0xf8 MovS
	func_142(var_12_bool, var_71_string); // 0xf9 NEW_2
	var_72_int = 525970; // 0xfb PushI
	SetMessage(var_72_int); // 0xfc TObjFunc
	ClearReplies(); // 0xfe TObjFunc
	var_73_int = 525971; // 0x100 PushI
	var_74_int = 27256; // 0x101 PushI
	var_75_int = 27255; // 0x102 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x103 TObjFunc
	var_76_int = 526231; // 0x105 PushI
	var_77_int = -1; // 0x106 PushI
	var_78_int = 27499; // 0x107 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x108 TObjFunc
	return 0; // 0x10a Return
	
Label_267:
	var_79_int = 27256; // 0x10b PushI
	var_80_bool = var_11_object == var_79_int; // 0x10c Eq
	if(var_80_bool == 0) goto Label_290; // 0x10d JumpB
	var_81_string = ""; // 0x10e PushV
	var_81_string = "Neutral"; // 0x10f MovS
	func_142(var_12_bool, var_81_string); // 0x110 NEW_2
	var_82_int = 525972; // 0x112 PushI
	SetMessage(var_82_int); // 0x113 TObjFunc
	ClearReplies(); // 0x115 TObjFunc
	var_83_int = 525973; // 0x117 PushI
	var_84_int = 27258; // 0x118 PushI
	var_85_int = 27257; // 0x119 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x11a TObjFunc
	var_86_int = 526232; // 0x11c PushI
	var_87_int = 27258; // 0x11d PushI
	var_88_int = 27501; // 0x11e PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x11f TObjFunc
	return 0; // 0x121 Return
	
Label_290:
	var_89_int = 27258; // 0x122 PushI
	var_90_bool = var_11_object == var_89_int; // 0x123 Eq
	if(var_90_bool == 0) goto Label_308; // 0x124 JumpB
	var_91_string = ""; // 0x125 PushV
	var_91_string = "Neutral"; // 0x126 MovS
	func_142(var_12_bool, var_91_string); // 0x127 NEW_2
	var_92_int = 525974; // 0x129 PushI
	SetMessage(var_92_int); // 0x12a TObjFunc
	ClearReplies(); // 0x12c TObjFunc
	var_93_int = 525975; // 0x12e PushI
	var_94_int = 27260; // 0x12f PushI
	var_95_int = 27259; // 0x130 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x131 TObjFunc
	return 0; // 0x133 Return
	
Label_308:
	var_96_int = 27260; // 0x134 PushI
	var_97_bool = var_11_object == var_96_int; // 0x135 Eq
	if(var_97_bool == 0) goto Label_326; // 0x136 JumpB
	var_98_string = ""; // 0x137 PushV
	var_98_string = "Neutral"; // 0x138 MovS
	func_142(var_12_bool, var_98_string); // 0x139 NEW_2
	var_99_int = 525976; // 0x13b PushI
	SetMessage(var_99_int); // 0x13c TObjFunc
	ClearReplies(); // 0x13e TObjFunc
	var_100_int = 525977; // 0x140 PushI
	var_101_int = 27262; // 0x141 PushI
	var_102_int = 27261; // 0x142 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x143 TObjFunc
	return 0; // 0x145 Return
	
Label_326:
	var_103_int = 27262; // 0x146 PushI
	var_104_bool = var_11_object == var_103_int; // 0x147 Eq
	if(var_104_bool == 0) goto Label_349; // 0x148 JumpB
	var_105_string = ""; // 0x149 PushV
	var_105_string = "Neutral"; // 0x14a MovS
	func_142(var_12_bool, var_105_string); // 0x14b NEW_2
	var_106_int = 525978; // 0x14d PushI
	SetMessage(var_106_int); // 0x14e TObjFunc
	ClearReplies(); // 0x150 TObjFunc
	var_107_int = 525979; // 0x152 PushI
	var_108_int = 27264; // 0x153 PushI
	var_109_int = 27263; // 0x154 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x155 TObjFunc
	var_110_int = 541736; // 0x157 PushI
	var_111_int = 43931; // 0x158 PushI
	var_112_int = 43930; // 0x159 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x15a TObjFunc
	return 0; // 0x15c Return
	
Label_349:
	var_113_int = 43931; // 0x15d PushI
	var_114_bool = var_11_object == var_113_int; // 0x15e Eq
	if(var_114_bool == 0) goto Label_372; // 0x15f JumpB
	var_115_string = ""; // 0x160 PushV
	var_115_string = "Neutral"; // 0x161 MovS
	func_142(var_12_bool, var_115_string); // 0x162 NEW_2
	var_116_int = 541737; // 0x164 PushI
	SetMessage(var_116_int); // 0x165 TObjFunc
	ClearReplies(); // 0x167 TObjFunc
	var_117_int = 541738; // 0x169 PushI
	var_118_int = 27264; // 0x16a PushI
	var_119_int = 43932; // 0x16b PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x16c TObjFunc
	var_120_int = 541739; // 0x16e PushI
	var_121_int = 27264; // 0x16f PushI
	var_122_int = 43933; // 0x170 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x171 TObjFunc
	return 0; // 0x173 Return
	
Label_372:
	var_123_int = 27264; // 0x174 PushI
	var_124_bool = var_11_object == var_123_int; // 0x175 Eq
	if(var_124_bool == 0) goto Label_395; // 0x176 JumpB
	var_125_string = ""; // 0x177 PushV
	var_125_string = "Neutral"; // 0x178 MovS
	func_142(var_12_bool, var_125_string); // 0x179 NEW_2
	var_126_int = 525980; // 0x17b PushI
	SetMessage(var_126_int); // 0x17c TObjFunc
	ClearReplies(); // 0x17e TObjFunc
	var_127_int = 525981; // 0x180 PushI
	var_128_int = 27266; // 0x181 PushI
	var_129_int = 27265; // 0x182 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x183 TObjFunc
	var_130_int = 541740; // 0x185 PushI
	var_131_int = 27504; // 0x186 PushI
	var_132_int = 43936; // 0x187 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x188 TObjFunc
	return 0; // 0x18a Return
	
Label_395:
	var_133_int = 27266; // 0x18b PushI
	var_134_bool = var_11_object == var_133_int; // 0x18c Eq
	if(var_134_bool == 0) goto Label_418; // 0x18d JumpB
	var_135_string = ""; // 0x18e PushV
	var_135_string = "Neutral"; // 0x18f MovS
	func_142(var_12_bool, var_135_string); // 0x190 NEW_2
	var_136_int = 525982; // 0x192 PushI
	SetMessage(var_136_int); // 0x193 TObjFunc
	ClearReplies(); // 0x195 TObjFunc
	var_137_int = 525983; // 0x197 PushI
	var_138_int = 27504; // 0x198 PushI
	var_139_int = 27267; // 0x199 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x19a TObjFunc
	var_140_int = 526233; // 0x19c PushI
	var_141_int = 27504; // 0x19d PushI
	var_142_int = 27503; // 0x19e PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x19f TObjFunc
	return 0; // 0x1a1 Return
	
Label_418:
	var_143_int = 27504; // 0x1a2 PushI
	var_144_bool = var_11_object == var_143_int; // 0x1a3 Eq
	if(var_144_bool == 0) goto Label_441; // 0x1a4 JumpB
	var_145_string = ""; // 0x1a5 PushV
	var_145_string = "Neutral"; // 0x1a6 MovS
	func_142(var_12_bool, var_145_string); // 0x1a7 NEW_2
	var_146_int = 526234; // 0x1a9 PushI
	SetMessage(var_146_int); // 0x1aa TObjFunc
	ClearReplies(); // 0x1ac TObjFunc
	var_147_int = 526235; // 0x1ae PushI
	var_148_int = 27507; // 0x1af PushI
	var_149_int = 27506; // 0x1b0 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x1b1 TObjFunc
	var_150_int = 526238; // 0x1b3 PushI
	var_151_int = 27510; // 0x1b4 PushI
	var_152_int = 27509; // 0x1b5 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x1b6 TObjFunc
	return 0; // 0x1b8 Return
	
Label_441:
	var_153_int = 27510; // 0x1b9 PushI
	var_154_bool = var_11_object == var_153_int; // 0x1ba Eq
	if(var_154_bool == 0) goto Label_459; // 0x1bb JumpB
	var_155_string = ""; // 0x1bc PushV
	var_155_string = "Neutral"; // 0x1bd MovS
	func_142(var_12_bool, var_155_string); // 0x1be NEW_2
	var_156_int = 526239; // 0x1c0 PushI
	SetMessage(var_156_int); // 0x1c1 TObjFunc
	ClearReplies(); // 0x1c3 TObjFunc
	var_157_int = 526240; // 0x1c5 PushI
	var_158_int = -1; // 0x1c6 PushI
	var_159_int = 27511; // 0x1c7 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x1c8 TObjFunc
	return 0; // 0x1ca Return
	
Label_459:
	var_160_int = 27507; // 0x1cb PushI
	var_161_bool = var_11_object == var_160_int; // 0x1cc Eq
	if(var_161_bool == 0) goto Label_477; // 0x1cd JumpB
	var_162_string = ""; // 0x1ce PushV
	var_162_string = "Neutral"; // 0x1cf MovS
	func_142(var_12_bool, var_162_string); // 0x1d0 NEW_2
	var_163_int = 526236; // 0x1d2 PushI
	SetMessage(var_163_int); // 0x1d3 TObjFunc
	ClearReplies(); // 0x1d5 TObjFunc
	var_164_int = 526237; // 0x1d7 PushI
	var_165_int = -1; // 0x1d8 PushI
	var_166_int = 27508; // 0x1d9 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x1da TObjFunc
	return 0; // 0x1dc Return
	
Label_477:
	var_3_string = 1; // 0x1dd TMovB
	var_167_bool = 0; // 0x1de PushV
	func_857(var_167_bool); // 0x1df NEW_2
	if(var_167_bool == 0) goto Label_485; // 0x1e1 JumpB
	lshStopAnimation(); // 0x1e2 Func
	goto Label_487; // 0x1e4 Jump
	
Label_487:
	return 0; // 0x1e7 Return
	
Label_485:
	StopAnimation(); // 0x1e5 Func
	
Label_489:
	return 0; // 0x1e9 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_int = var_5_int; // 0x1f5 PushT
	if(var_12_int == 0) goto Label_504; // 0x1f6 JumpB
	return 0; // 0x1f7 Return
	
Label_504:
	func_580(var_10_bool, var_11_object); // 0x1f9 NEW_2
	var_16_int = 0; var_17_object = Obj(); // 0x1fb PushV
	var_17_object = var_11_object; // 0x1fc Mov
	TaskCall(0); // 0x1fd TaskCall
	func_0(var_18_object, var_16_int, var_17_object); // 0x1fe NEW_2
	TaskReturn(); // 0x1ff TaskReturn
	var_5_int = 1; // 0x201 TMovB
	return 0; // 0x202 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_int)
{
	var_12_int = 10; // 0x22e PushI
	var_13_bool = var_11_int == var_12_int; // 0x22f Eq
	if(var_13_bool == 0) goto Label_579; // 0x230 JumpB
	var_14_bool = 0; // 0x231 PushV
	func_542(var_9_object, var_10_bool, var_11_int, var_14_bool); // 0x232 NEW_2
	if(var_14_bool == 0) goto Label_573; // 0x234 JumpB
	var_27_bool = var_2_object == 0; // 0x235 Not
	if(var_27_bool == 0) goto Label_572; // 0x236 JumpB
	var_28_object = Obj(); // 0x237 PushV
	var_28_object = var_4_bool; // 0x238 MovT
	func_809(var_28_object); // 0x239 NEW_2
	var_2_object = 1; // 0x23b TMovB
	
Label_572:
	goto Label_579; // 0x23c Jump
	
Label_579:
	return 0; // 0x243 Return
	
Label_573:
	var_35_object = var_2_object; // 0x23d PushT
	if(var_35_object == 0) goto Label_579; // 0x23e JumpB
	var_36_string = "head"; // 0x23f PushS
	UnlookAsync(var_36_string); // 0x240 Func
	var_2_object = 0; // 0x242 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool)
{
	
Label_490:
	var_11_float = 0; var_12_float = 0; // 0x1ea PushV
	var_11_float = 300; // 0x1eb MovI
	var_12_float = 100; // 0x1ec MovI
	func_515(var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_bool, var_11_float, var_12_float); // 0x1ed NEW_2
	var_73_int = 3; // 0x1ef PushI
	Sleep(var_73_int); // 0x1f0 Func
	goto Label_490; // 0x1f2 Jump
}


func_0(var_0_object, var_16_int, var_17_object)
{
	var_19_object = Obj(); var_20_bool = 0; var_21_int = 0; var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0; var_25_int = 0; var_26_bool = 0; // 0x0 PushV
	var_0_object = var_17_object; // 0x1 TMov
	var_27_bool = 0; var_28_object = Obj(); var_29_float = 0; // 0x2 PushV
	var_28_object = var_17_object; // 0x3 Mov
	var_29_float = 130.0; // 0x4 MovF
	func_693(var_28_object, var_29_float); // 0x5 NEW_2
	var_73_bool = var_27_bool == 0; // 0x7 Not
	if(var_73_bool == 0) goto Label_11; // 0x8 JumpB
	var_16_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_23_object); // 0xb Func
	var_74_int = 0; // 0xd PushV
	func_851(var_74_int); // 0xe NEW_2
	SetNPCName(var_74_int); // 0x10 ObjFunc
	var_75_int = 0; // 0x12 PushV
	func_849(var_75_int); // 0x13 NEW_2
	SetNPCDescription(var_75_int); // 0x15 ObjFunc
	var_76_string = ""; // 0x17 PushV
	func_853(var_76_string); // 0x18 NEW_2
	SetPhoto(var_76_string); // 0x1a ObjFunc
	var_77_string = ""; // 0x1c PushV
	func_855(var_77_string); // 0x1d NEW_2
	SetPhoto2(var_77_string); // 0x1f ObjFunc
	var_78_int = 0; // 0x21 PushV
	func_890(var_78_int); // 0x22 NEW_2
	SetPlayerName(var_78_int); // 0x24 ObjFunc
	var_25_int = -1; // 0x26 MovI
	IsOverrideActive(var_24_bool); // 0x27 Func
	var_86_bool = var_24_bool; // 0x29 Push
	if(var_86_bool == 0) goto Label_45; // 0x2a JumpB
	var_16_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_23_object); // 0x2d Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x2f PushV
	var_87_object = var_17_object; // 0x30 Mov
	var_88_object = var_23_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_26_bool); // 0x36 ObjFunc
	
Label_56:
	var_147_bool = var_26_bool == 0; // 0x38 Not
	if(var_147_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_26_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_148_object = Obj(); // 0x3f PushV
	var_148_object = var_17_object; // 0x40 Mov
	func_761(); // 0x41 NEW_2
	StopDialog(var_23_object); // 0x43 Func
	GetReturnValue(var_25_int); // 0x45 ObjFunc
	var_16_int = var_25_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_515(var_0_object, var_1_object, var_2_object, var_3_string, var_10_bool, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x204 PushV
	func_688(var_13_bool); // 0x205 NEW_2
	var_16_bool = var_13_bool == 0; // 0x207 Not
	if(var_16_bool == 0) goto Label_522; // 0x208 JumpB
	return 0; // 0x209 Return
	
Label_522:
	var_17_string = "player"; // 0x20a PushS
	FindActor(var_10_bool, var_17_string); // 0x20b Func
	var_2_object = 0; // 0x20d TMovB
	var_3_string = 0; // 0x20e TMovB
	var_0_object = var_11_float; // 0x20f TMov
	var_1_object = var_12_float; // 0x210 TMov
	var_18_int = 10; // 0x211 PushI
	var_19_float = 1.0; // 0x212 PushF
	SetTimer(var_18_int, var_19_float); // 0x213 Func
	func_594(); // 0x216 NEW_2
	var_71_bool = var_3_string == 0; // 0x218 Not
	if(var_71_bool == 0) goto Label_541; // 0x219 JumpB
	var_72_int = 10; // 0x21a PushI
	KillTimer(var_72_int); // 0x21b Func
	
Label_541:
	return 0; // 0x21d Return
}


func_580(var_2_object, var_3_string)
{
	func_675(); // 0x245 NEW_2
	var_13_int = 10; // 0x247 PushI
	KillTimer(var_13_int); // 0x248 Func
	var_14_object = var_2_object; // 0x24a PushT
	if(var_14_object == 0) goto Label_592; // 0x24b JumpB
	var_15_string = "head"; // 0x24c PushS
	UnlookAsync(var_15_string); // 0x24d Func
	var_2_object = 0; // 0x24f TMovB
	
Label_592:
	var_3_string = 1; // 0x250 TMovB
	return 0; // 0x251 Return
}


func_837(var_96_bool, var_97_string, var_98_string)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x345 PushV
	FindActor(var_100_object, var_97_string); // 0x346 Func
	var_101_bool = var_100_object == 0; // 0x348 NullEq
	if(var_101_bool == 0) goto Label_844; // 0x349 JumpB
	var_96_bool = 0; // 0x34a MovB
	return 2; // 0x34b Return
	
Label_844:
	Trigger(var_100_object, var_98_string); // 0x34c Func
	var_96_bool = 1; // 0x34e MovB
	return 2; // 0x34f Return
}


func_778(var_131_string)
{
	var_132_bool = 0; var_133_float = 0; var_134_float = 0; var_135_bool = 0; var_136_float = 0; var_137_float = 0; // 0x30a PushV
	lshHasAnimation(var_135_bool, var_131_string); // 0x30b Func
	var_138_bool = var_135_bool; // 0x30d Push
	if(var_138_bool == 0) goto Label_789; // 0x30e JumpB
	lshGetAnimTimes(var_131_string, var_136_float, var_137_float); // 0x30f Func
	var_139_bool = 0; // 0x311 PushB
	lshPlayAnimation(var_136_float, var_137_float, var_139_bool); // 0x312 Func
	goto Label_793; // 0x314 Jump
	
Label_793:
	return 6; // 0x319 Return
	
Label_789:
	var_140_string = "Can't find lsh animation : "; // 0x315 PushS
	var_141_int = var_140_string + var_131_string; // 0x316 Add
	Trace(var_141_int); // 0x317 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x4b TMov
	var_1_object = var_87_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_93_int = 1; // 0x4e PushI
	if(var_93_int == 0) goto Label_112; // 0x4f JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x50 PushV
	var_94_object = var_1_object; // 0x51 MovT
	var_95_object = var_0_object; // 0x52 MovT
	func_883(); // 0x53 NEW_2
	var_102_string = ""; // 0x55 PushV
	var_102_string = "Neutral"; // 0x56 MovS
	func_142(var_88_object, var_102_string); // 0x57 NEW_2
	var_119_int = 525968; // 0x59 PushI
	SetMessage(var_119_int); // 0x5a TObjFunc
	ClearReplies(); // 0x5c TObjFunc
	var_120_int = 525969; // 0x5e PushI
	var_121_int = 27254; // 0x5f PushI
	var_122_int = 27253; // 0x60 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x61 TObjFunc
	var_123_int = 525988; // 0x63 PushI
	var_124_int = 27273; // 0x64 PushI
	var_125_int = 27272; // 0x65 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x66 TObjFunc
	var_126_int = 525996; // 0x68 PushI
	var_127_int = 27284; // 0x69 PushI
	var_128_int = 27283; // 0x6a PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x6b TObjFunc
	goto Label_112; // 0x6d Jump
	
Label_112:
	var_129_bool = 0; // 0x70 PushV
	func_857(var_129_bool); // 0x71 NEW_2
	if(var_129_bool == 0) goto Label_127; // 0x73 JumpB
	
Label_116:
	lshWaitForAnimEnd(); // 0x74 Func
	var_130_string = var_3_string; // 0x76 PushT
	if(var_130_string == 0) goto Label_121; // 0x77 JumpB
	goto Label_126; // 0x78 Jump
	
Label_126:
	goto Label_141; // 0x7e Jump
	
Label_141:
	return 0; // 0x8d Return
	
Label_121:
	var_131_string = ""; // 0x79 PushV
	var_131_string = var_2_object; // 0x7a MovT
	func_778(var_131_string); // 0x7b NEW_2
	goto Label_116; // 0x7d Jump
	
Label_127:
	var_142_string = "all"; // 0x7f PushS
	var_143_string = "idle"; // 0x80 PushS
	PlayAnimation(var_142_string, var_143_string); // 0x81 Func
	
Label_131:
	WaitForAnimEnd(); // 0x83 Func
	var_144_string = var_3_string; // 0x85 PushT
	if(var_144_string == 0) goto Label_136; // 0x86 JumpB
	goto Label_141; // 0x87 Jump
	
Label_136:
	var_145_string = "all"; // 0x88 PushS
	var_146_string = "idle"; // 0x89 PushS
	PlayAnimation(var_145_string, var_146_string); // 0x8a Func
	goto Label_131; // 0x8c Jump
}


func_142(var_2_object, var_102_string)
{
	var_103_bool = 0; // 0x8f PushV
	func_857(var_103_bool); // 0x90 NEW_2
	var_104_bool = var_103_bool == 0; // 0x92 Not
	if(var_104_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_105_bool = var_102_string == var_2_object; // 0x95 Eq
	if(var_105_bool == 0) goto Label_152; // 0x96 JumpB
	return 0; // 0x97 Return
	
Label_152:
	var_106_string = ""; var_107_bool = 0; // 0x98 PushV
	var_106_string = var_102_string; // 0x99 Mov
	var_108_string = ""; // 0x9a PushS
	var_109_bool = var_102_string == var_108_string; // 0x9b Eq
	if(var_109_bool == 0) goto Label_159; // 0x9c JumpB
	var_107_bool = 0; // 0x9d MovB
	goto Label_160; // 0x9e Jump
	
Label_160:
	func_794(var_106_string, var_107_bool); // 0xa0 NEW_2
	var_2_object = var_102_string; // 0xa2 TMov
	return 0; // 0xa3 Return
	
Label_159:
	var_107_bool = 1; // 0x9f MovB
}


func_849(var_75_int)
{
	var_75_int = 515571; // 0x351 MovI
	return 0; // 0x352 Return
}


func_594()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x252 PushV
	WaitForAnimEnd(); // 0x253 Func
	var_34_bool = 0; // 0x255 PushV
	func_688(var_34_bool); // 0x256 NEW_2
	var_35_bool = var_34_bool == 0; // 0x258 Not
	if(var_35_bool == 0) goto Label_603; // 0x259 JumpB
	return 14; // 0x25a Return
	
Label_603:
	var_36_int = 0; // 0x25b PushV
	func_866(var_36_int); // 0x25c NEW_2
	var_27_int = var_36_int; // 0x25d Mov
	var_28_int = 0; // 0x25f MovI
	
Label_608:
	var_49_bool = 0; // 0x260 PushV
	var_49_bool = 0; // 0x261 MovB
	var_50_int = 5; // 0x262 PushI
	var_51_bool = var_28_int < var_50_int; // 0x263 LT
	if(var_51_bool == 0) goto Label_618; // 0x264 JumpB
	var_52_bool = 0; // 0x265 PushV
	func_688(var_52_bool); // 0x266 NEW_2
	if(var_52_bool == 0) goto Label_618; // 0x268 JumpB
	var_49_bool = 1; // 0x269 MovB
	
Label_618:
	if(var_49_bool == 0) goto Label_670; // 0x26a JumpB
	var_53_int = 3; // 0x26b PushI
	irand(var_29_int, var_53_int); // 0x26c Func
	var_54_int = 0; // 0x26e PushI
	var_55_bool = var_29_int == var_54_int; // 0x26f Eq
	if(var_55_bool == 0) goto Label_642; // 0x270 JumpB
	var_56_int = var_27_int; // 0x271 Push
	if(var_56_int == 0) goto Label_641; // 0x272 JumpB
	irand(var_30_int, var_27_int); // 0x273 Func
	var_57_string = "all"; // 0x275 PushS
	var_58_string = ""; var_59_int = 0; // 0x276 PushV
	var_59_int = var_30_int; // 0x277 Mov
	func_859(var_58_string, var_59_int); // 0x278 NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x27a Func
	WaitForAnimEnd(var_31_bool); // 0x27c Func
	var_60_bool = var_31_bool == 0; // 0x27e Not
	if(var_60_bool == 0) goto Label_641; // 0x27f JumpB
	goto Label_670; // 0x280 Jump
	
Label_670:
	ResetAAS(); // 0x29e Func
	return 14; // 0x2a0 Return
	
Label_641:
	goto Label_659; // 0x281 Jump
	
Label_659:
	var_61_bool = 0; // 0x293 PushV
	func_673(var_61_bool); // 0x294 NEW_2
	var_62_bool = var_61_bool == 0; // 0x296 Not
	if(var_62_bool == 0) goto Label_665; // 0x297 JumpB
	goto Label_670; // 0x298 Jump
	
Label_665:
	ResetAAS(); // 0x299 Func
	var_63_int = 1; // 0x29b PushI
	var_28_int = var_28_int + var_63_int; // 0x29c Add2
	goto Label_608; // 0x29d Jump
	
Label_642:
	var_64_int = 1; // 0x282 PushI
	var_65_bool = var_29_int == var_64_int; // 0x283 Eq
	if(var_65_bool == 0) goto Label_656; // 0x284 JumpB
	var_66_int = 4; // 0x285 PushI
	rand(var_32_float, var_66_int); // 0x286 Func
	var_67_int = 1; // 0x288 PushI
	var_68_int = var_32_float + var_67_int; // 0x289 Add
	Sleep(var_68_int, var_33_bool); // 0x28a Func
	var_69_bool = var_33_bool == 0; // 0x28c Not
	if(var_69_bool == 0) goto Label_655; // 0x28d JumpB
	goto Label_670; // 0x28e Jump
	
Label_655:
	goto Label_659; // 0x28f Jump
	
Label_656:
	var_70_int = var_28_int; // 0x290 Push
	if(var_70_int == 0) goto Label_659; // 0x291 JumpB
	goto Label_670; // 0x292 Jump
}


func_851(var_74_int)
{
	var_74_int = 504029; // 0x353 MovI
	return 0; // 0x354 Return
}


func_853(var_76_string)
{
	var_76_string = "ui/NPC_bmask.png"; // 0x355 MovS
	return 0; // 0x356 Return
}


func_855(var_77_string)
{
	var_77_string = "ui/NPC_bmask_b.png"; // 0x357 MovS
	return 0; // 0x358 Return
}


func_857(var_69_bool)
{
	var_69_bool = 0; // 0x359 MovB
	return 0; // 0x35a Return
}


func_794(var_106_string, var_107_bool)
{
	var_110_bool = 0; var_111_float = 0; var_112_float = 0; var_113_bool = 0; var_114_float = 0; var_115_float = 0; // 0x31a PushV
	lshHasAnimation(var_113_bool, var_106_string); // 0x31b Func
	var_116_bool = var_113_bool; // 0x31d Push
	if(var_116_bool == 0) goto Label_804; // 0x31e JumpB
	lshGetAnimTimes(var_106_string, var_114_float, var_115_float); // 0x31f Func
	lshPlayAnimation(var_114_float, var_115_float, var_107_bool); // 0x321 Func
	goto Label_808; // 0x323 Jump
	
Label_808:
	return 6; // 0x328 Return
	
Label_804:
	var_117_string = "Can't find lsh animation : "; // 0x324 PushS
	var_118_int = var_117_string + var_106_string; // 0x325 Add
	Trace(var_118_int); // 0x326 Func
}


func_859(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x35b PushV
	var_45_string = "idle"; // 0x35c MovS
	var_46_int = var_43_int; // 0x35d Push
	if(var_46_int == 0) goto Label_864; // 0x35e JumpB
	var_45_string = var_45_string + var_43_int; // 0x35f Add2
	
Label_864:
	var_42_string = var_45_string; // 0x360 Mov
	return 2; // 0x361 Return
}


func_542(var_0_object, var_1_object, var_4_bool, var_14_bool)
{
	var_15_float = 0; var_16_float = 0; // 0x21e PushV
	var_17_bool = var_4_bool == 0; // 0x21f NullEq
	if(var_17_bool == 0) goto Label_547; // 0x220 JumpB
	var_14_bool = 0; // 0x221 MovB
	return 2; // 0x222 Return
	
Label_547:
	var_18_float = 0; var_19_object = Obj(); // 0x223 PushV
	var_19_object = var_4_bool; // 0x224 MovT
	func_680(var_19_object); // 0x225 NEW_2
	var_16_float = sqrt(var_18_float); // 0x227 Sqrt2
	var_26_object = var_2_object; // 0x228 PushT
	if(var_26_object == 0) goto Label_555; // 0x229 JumpB
	var_16_float = var_16_float - var_1_object; // 0x22a Sub2
	
Label_555:
	var_14_bool = var_16_float < var_0_object; // 0x22b LT2
	return 2; // 0x22c Return
}


func_673(var_61_bool)
{
	var_61_bool = 1; // 0x2a1 MovB
	return 0; // 0x2a2 Return
}


func_866(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x362 PushV
	var_39_int = 0; // 0x363 MovI
	
Label_868:
	var_41_string = "all"; // 0x364 PushS
	var_42_string = ""; var_43_int = 0; // 0x365 PushV
	var_43_int = var_39_int; // 0x366 Mov
	func_859(var_42_string, var_43_int); // 0x367 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x369 Func
	var_47_bool = var_40_bool == 0; // 0x36b Not
	if(var_47_bool == 0) goto Label_878; // 0x36c JumpB
	goto Label_881; // 0x36d Jump
	
Label_881:
	var_36_int = var_39_int; // 0x371 Mov
	return 4; // 0x372 Return
	
Label_878:
	var_48_int = 1; // 0x36e PushI
	var_39_int = var_39_int + var_48_int; // 0x36f Add2
	goto Label_868; // 0x370 Jump
}


func_675()
{
	StopAnimation(); // 0x2a3 Func
	StopGroup0(); // 0x2a5 Func
	return 0; // 0x2a7 Return
}


func_680(var_18_float)
{
	var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); // 0x2a8 PushV
	GetPosition(var_23_cvector); // 0x2a9 Func
	GetPosition(var_24_cvector); // 0x2ab ObjFunc
	var_25_cvector = var_24_cvector - var_23_cvector; // 0x2ad Sub2
	var_18_float = var_25_cvector | var_25_cvector; // 0x2ae Or2
	return 6; // 0x2af Return
}


func_809(var_28_object)
{
	var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0); // 0x329 PushV
	GetEyesHeight(var_31_float); // 0x32a ObjFunc
	var_32_cvector = CVector(0.0, 0.0, 0.0); // 0x32c MovV
	var_33_float = GetByIndex(var_32_cvector, 1); // 0x32d PushE
	var_33_float = var_31_float; // 0x32e Mov
	SetByIndex(var_32_cvector, 1) = var_33_float; // 0x32f PopE
	var_34_string = "head"; // 0x330 PushS
	LookAsync(var_28_object, var_34_string, var_32_cvector); // 0x331 Func
	return 4; // 0x333 Return
}


func_688(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x2b0 PushV
	IsLoaded(var_15_bool); // 0x2b1 Func
	var_13_bool = var_15_bool; // 0x2b3 Mov
	return 2; // 0x2b4 Return
}


func_883()
{
	var_96_bool = 0; var_97_string = ""; var_98_string = ""; // 0x374 PushV
	var_97_string = "quest_k1_01"; // 0x375 MovS
	var_98_string = "remove_birdmask"; // 0x376 MovS
	func_837(var_96_bool, var_97_string, var_98_string); // 0x377 NEW_2
	return 0; // 0x379 Return
}


func_820()
{
	var_14_bool = 0; // 0x334 PushV
	func_857(var_14_bool); // 0x335 NEW_2
	if(var_14_bool == 0) goto Label_826; // 0x337 JumpB
	lshStopSpeech(); // 0x338 Func
	
Label_826:
	return 0; // 0x33a Return
}


func_693(var_27_bool, var_29_float)
{
	var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; // 0x2b5 PushV
	GetPosition(var_40_cvector); // 0x2b6 ObjFunc
	GetEyesHeight(var_39_float); // 0x2b8 ObjFunc
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x2ba PushE
	var_48_float = var_48_float + var_39_float; // 0x2bb Add2
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x2bc PopE
	GetPosition(var_41_cvector); // 0x2bd Func
	GetEyesHeight(var_39_float); // 0x2bf Func
	var_49_float = GetByIndex(var_41_cvector, 1); // 0x2c1 PushE
	var_49_float = var_49_float + var_39_float; // 0x2c2 Add2
	SetByIndex(var_41_cvector, 1) = var_49_float; // 0x2c3 PopE
	var_42_cvector = var_40_cvector - var_41_cvector; // 0x2c4 Sub2
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x2c5 PushE
	var_50_float = 0; // 0x2c6 MovI
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x2c7 PopE
	var_51_int = var_42_cvector | var_42_cvector; // 0x2c8 Or
	var_52_float = sqrt(var_51_int); // 0x2c9 Sqrt
	var_42_cvector = var_42_cvector / var_42_cvector; // 0x2ca Div2
	var_43_cvector = -var_42_cvector; // 0x2cb Neg2
	var_53_float = var_42_cvector * var_29_float; // 0x2cc Mult
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); // 0x2cd PushV
	var_56_cvector = CVector(0.0, 1.0, 0.0); // 0x2ce PushVec
	var_55_cvector = var_43_cvector ^ var_56_cvector; // 0x2cf Xor2
	func_827(var_54_cvector, var_55_cvector); // 0x2d0 NEW_2
	var_62_int = 25; // 0x2d2 PushI
	var_63_float = var_54_cvector * var_62_int; // 0x2d3 Mult
	var_64_int = var_53_float + var_63_float; // 0x2d4 Add
	var_65_cvector = CVector(0.0, 10.0, 0.0); // 0x2d5 PushVec
	var_44_cvector = var_64_int - var_65_cvector; // 0x2d6 Sub2
	var_45_cvector = var_41_cvector + var_44_cvector; // 0x2d7 Add2
	IsOverrideActive(var_46_bool); // 0x2d8 Func
	var_66_bool = var_46_bool; // 0x2da Push
	if(var_66_bool == 0) goto Label_734; // 0x2db JumpB
	var_27_bool = 0; // 0x2dc MovB
	return 18; // 0x2dd Return
	
Label_734:
	StopWorld(); // 0x2de Func
	CameraTransit(var_45_cvector, var_43_cvector); // 0x2e0 Func
	var_67_float = GetByIndex(var_44_cvector, 0); // 0x2e2 PushE
	var_68_float = GetByIndex(var_44_cvector, 2); // 0x2e3 PushE
	Rotate(var_67_float, var_68_float); // 0x2e4 Func
	var_69_bool = 0; // 0x2e6 PushV
	func_857(var_69_bool); // 0x2e7 NEW_2
	if(var_69_bool == 0) goto Label_747; // 0x2e9 JumpB
	goto Label_755; // 0x2ea Jump
	
Label_755:
	CameraWaitForPlayFinish(); // 0x2f3 Func
	ResumeWorld(); // 0x2f5 Func
	var_27_bool = 1; // 0x2f7 MovB
	return 18; // 0x2f8 Return
	
Label_747:
	var_70_string = "head"; // 0x2eb PushS
	HasAnimationTrack(var_47_bool, var_70_string); // 0x2ec Func
	var_71_bool = var_47_bool; // 0x2ee Push
	if(var_71_bool == 0) goto Label_755; // 0x2ef JumpB
	var_72_string = "head"; // 0x2f0 PushS
	LookAsyncCamera(var_72_string); // 0x2f1 Func
}


func_761()
{
	var_149_bool = 0; var_150_bool = 0; // 0x2f9 PushV
	CameraSwitchToNormal(); // 0x2fa Func
	var_151_bool = 0; // 0x2fc PushV
	func_857(var_151_bool); // 0x2fd NEW_2
	if(var_151_bool == 0) goto Label_769; // 0x2ff JumpB
	goto Label_777; // 0x300 Jump
	
Label_777:
	return 2; // 0x309 Return
	
Label_769:
	var_152_string = "head"; // 0x301 PushS
	HasAnimationTrack(var_150_bool, var_152_string); // 0x302 Func
	var_153_bool = var_150_bool; // 0x304 Push
	if(var_153_bool == 0) goto Label_777; // 0x305 JumpB
	var_154_string = "head"; // 0x306 PushS
	UnlookAsync(var_154_string); // 0x307 Func
}


func_890(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x37a PushV
	var_81_string = "branch"; // 0x37b PushS
	GetVariable(var_81_string, var_80_int); // 0x37c Func
	var_82_int = 0; // 0x37e PushI
	var_83_bool = var_80_int == var_82_int; // 0x37f Eq
	if(var_83_bool == 0) goto Label_900; // 0x380 JumpB
	var_78_int = 1; // 0x381 MovI
	return 2; // 0x382 Return
	
Label_900:
	var_84_int = 1; // 0x384 PushI
	var_85_bool = var_80_int == var_84_int; // 0x385 Eq
	if(var_85_bool == 0) goto Label_905; // 0x386 JumpB
	var_78_int = 2; // 0x387 MovI
	return 2; // 0x388 Return
	
Label_905:
	var_78_int = 3; // 0x389 MovI
	return 2; // 0x38a Return
}


func_827(var_54_cvector, var_55_cvector)
{
	var_57_float = 0; var_58_float = 0; // 0x33b PushV
	var_59_int = var_55_cvector | var_55_cvector; // 0x33c Or
	var_58_float = sqrt(var_59_int); // 0x33d Sqrt2
	var_60_float = 0.0; // 0x33e PushF
	var_61_bool = var_58_float < var_60_float; // 0x33f LT
	if(var_61_bool == 0) goto Label_835; // 0x340 JumpB
	var_54_cvector = CVector(0.0, 0.0, 0.0); // 0x341 MovV
	return 2; // 0x342 Return
	
Label_835:
	var_54_cvector = var_55_cvector / var_55_cvector; // 0x343 Div2
	return 2; // 0x344 Return
}


