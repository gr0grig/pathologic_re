task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0xbd PushI
	if(var_12_int == 0) goto Label_529; // 0xbe JumpB
	func_1148(); // 0xc0 NEW_2
	var_14_int = 26016; // 0xc2 PushI
	var_15_bool = var_10_bool == var_14_int; // 0xc3 Eq
	if(var_15_bool == 0) goto Label_251; // 0xc4 JumpB
	var_16_bool = 0; // 0xc5 PushV
	var_16_bool = 0; // 0xc6 MovB
	var_17_bool = 0; var_18_object = Obj(); // 0xc7 PushV
	var_18_object = var_1_object; // 0xc8 MovT
	func_1253(var_18_object); // 0xc9 NEW_2
	if(var_17_bool == 0) goto Label_210; // 0xcb JumpB
	var_25_bool = 0; var_26_object = Obj(); // 0xcc PushV
	var_26_object = var_1_object; // 0xcd MovT
	func_1265(var_26_object); // 0xce NEW_2
	if(var_25_bool == 0) goto Label_210; // 0xd0 JumpB
	var_16_bool = 1; // 0xd1 MovB
	
Label_210:
	if(var_16_bool == 0) goto Label_231; // 0xd2 JumpB
	var_31_object = Obj(); var_32_object = Obj(); // 0xd3 PushV
	var_31_object = var_1_object; // 0xd4 MovT
	var_32_object = var_0_object; // 0xd5 MovT
	func_1247(); // 0xd6 NEW_2
	var_35_string = ""; // 0xd8 PushV
	var_35_string = "Neutral"; // 0xd9 MovS
	func_166(var_11_object, var_35_string); // 0xda NEW_2
	var_52_int = 524677; // 0xdc PushI
	SetMessage(var_52_int); // 0xdd TObjFunc
	ClearReplies(); // 0xdf TObjFunc
	var_53_int = 541777; // 0xe1 PushI
	var_54_int = 43984; // 0xe2 PushI
	var_55_int = 43983; // 0xe3 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xe4 TObjFunc
	return 0; // 0xe6 Return
	
Label_231:
	var_56_string = ""; // 0xe7 PushV
	var_56_string = "Neutral"; // 0xe8 MovS
	func_166(var_11_object, var_56_string); // 0xe9 NEW_2
	var_57_int = 524679; // 0xeb PushI
	SetMessage(var_57_int); // 0xec TObjFunc
	ClearReplies(); // 0xee TObjFunc
	var_58_int = 524680; // 0xf0 PushI
	var_59_int = -1; // 0xf1 PushI
	var_60_int = 26019; // 0xf2 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xf3 TObjFunc
	var_61_int = 526801; // 0xf5 PushI
	var_62_int = -1; // 0xf6 PushI
	var_63_int = 28081; // 0xf7 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xf8 TObjFunc
	return 0; // 0xfa Return
	
Label_251:
	var_64_int = 43984; // 0xfb PushI
	var_65_bool = var_10_bool == var_64_int; // 0xfc Eq
	if(var_65_bool == 0) goto Label_274; // 0xfd JumpB
	var_66_string = ""; // 0xfe PushV
	var_66_string = "Neutral"; // 0xff MovS
	func_166(var_11_object, var_66_string); // 0x100 NEW_2
	var_67_int = 541778; // 0x102 PushI
	SetMessage(var_67_int); // 0x103 TObjFunc
	ClearReplies(); // 0x105 TObjFunc
	var_68_int = 524678; // 0x107 PushI
	var_69_int = 28065; // 0x108 PushI
	var_70_int = 26017; // 0x109 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x10a TObjFunc
	var_71_int = 541766; // 0x10c PushI
	var_72_int = 43969; // 0x10d PushI
	var_73_int = 43968; // 0x10e PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x10f TObjFunc
	return 0; // 0x111 Return
	
Label_274:
	var_74_int = 43969; // 0x112 PushI
	var_75_bool = var_10_bool == var_74_int; // 0x113 Eq
	if(var_75_bool == 0) goto Label_297; // 0x114 JumpB
	var_76_string = ""; // 0x115 PushV
	var_76_string = "Neutral"; // 0x116 MovS
	func_166(var_11_object, var_76_string); // 0x117 NEW_2
	var_77_int = 541767; // 0x119 PushI
	SetMessage(var_77_int); // 0x11a TObjFunc
	ClearReplies(); // 0x11c TObjFunc
	var_78_int = 541768; // 0x11e PushI
	var_79_int = 43971; // 0x11f PushI
	var_80_int = 43970; // 0x120 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x121 TObjFunc
	var_81_int = 541773; // 0x123 PushI
	var_82_int = 43975; // 0x124 PushI
	var_83_int = 43976; // 0x125 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x126 TObjFunc
	return 0; // 0x128 Return
	
Label_297:
	var_84_int = 43971; // 0x129 PushI
	var_85_bool = var_10_bool == var_84_int; // 0x12a Eq
	if(var_85_bool == 0) goto Label_320; // 0x12b JumpB
	var_86_string = ""; // 0x12c PushV
	var_86_string = "Neutral"; // 0x12d MovS
	func_166(var_11_object, var_86_string); // 0x12e NEW_2
	var_87_int = 541769; // 0x130 PushI
	SetMessage(var_87_int); // 0x131 TObjFunc
	ClearReplies(); // 0x133 TObjFunc
	var_88_int = 541770; // 0x135 PushI
	var_89_int = 28065; // 0x136 PushI
	var_90_int = 43972; // 0x137 PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x138 TObjFunc
	var_91_int = 541771; // 0x13a PushI
	var_92_int = 43975; // 0x13b PushI
	var_93_int = 43974; // 0x13c PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x13d TObjFunc
	return 0; // 0x13f Return
	
Label_320:
	var_94_int = 43975; // 0x140 PushI
	var_95_bool = var_10_bool == var_94_int; // 0x141 Eq
	if(var_95_bool == 0) goto Label_338; // 0x142 JumpB
	var_96_string = ""; // 0x143 PushV
	var_96_string = "Neutral"; // 0x144 MovS
	func_166(var_11_object, var_96_string); // 0x145 NEW_2
	var_97_int = 541772; // 0x147 PushI
	SetMessage(var_97_int); // 0x148 TObjFunc
	ClearReplies(); // 0x14a TObjFunc
	var_98_int = 541774; // 0x14c PushI
	var_99_int = 28065; // 0x14d PushI
	var_100_int = 43978; // 0x14e PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x14f TObjFunc
	return 0; // 0x151 Return
	
Label_338:
	var_101_int = 28065; // 0x152 PushI
	var_102_bool = var_10_bool == var_101_int; // 0x153 Eq
	if(var_102_bool == 0) goto Label_361; // 0x154 JumpB
	var_103_string = ""; // 0x155 PushV
	var_103_string = "Neutral"; // 0x156 MovS
	func_166(var_11_object, var_103_string); // 0x157 NEW_2
	var_104_int = 526785; // 0x159 PushI
	SetMessage(var_104_int); // 0x15a TObjFunc
	ClearReplies(); // 0x15c TObjFunc
	var_105_int = 526786; // 0x15e PushI
	var_106_int = 28067; // 0x15f PushI
	var_107_int = 28066; // 0x160 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x161 TObjFunc
	var_108_int = 541755; // 0x163 PushI
	var_109_int = 28069; // 0x164 PushI
	var_110_int = 43957; // 0x165 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x166 TObjFunc
	return 0; // 0x168 Return
	
Label_361:
	var_111_int = 28067; // 0x169 PushI
	var_112_bool = var_10_bool == var_111_int; // 0x16a Eq
	if(var_112_bool == 0) goto Label_384; // 0x16b JumpB
	var_113_string = ""; // 0x16c PushV
	var_113_string = "Neutral"; // 0x16d MovS
	func_166(var_11_object, var_113_string); // 0x16e NEW_2
	var_114_int = 526787; // 0x170 PushI
	SetMessage(var_114_int); // 0x171 TObjFunc
	ClearReplies(); // 0x173 TObjFunc
	var_115_int = 526788; // 0x175 PushI
	var_116_int = 28069; // 0x176 PushI
	var_117_int = 28068; // 0x177 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x178 TObjFunc
	var_118_int = 541779; // 0x17a PushI
	var_119_int = -1; // 0x17b PushI
	var_120_int = 43985; // 0x17c PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_121_int = 28069; // 0x180 PushI
	var_122_bool = var_10_bool == var_121_int; // 0x181 Eq
	if(var_122_bool == 0) goto Label_402; // 0x182 JumpB
	var_123_string = ""; // 0x183 PushV
	var_123_string = "Neutral"; // 0x184 MovS
	func_166(var_11_object, var_123_string); // 0x185 NEW_2
	var_124_int = 526789; // 0x187 PushI
	SetMessage(var_124_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_125_int = 526795; // 0x18c PushI
	var_126_int = 28076; // 0x18d PushI
	var_127_int = 28075; // 0x18e PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_128_int = 28076; // 0x192 PushI
	var_129_bool = var_10_bool == var_128_int; // 0x193 Eq
	if(var_129_bool == 0) goto Label_425; // 0x194 JumpB
	var_130_string = ""; // 0x195 PushV
	var_130_string = "Neutral"; // 0x196 MovS
	func_166(var_11_object, var_130_string); // 0x197 NEW_2
	var_131_int = 526796; // 0x199 PushI
	SetMessage(var_131_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_132_int = 526797; // 0x19e PushI
	var_133_int = 28078; // 0x19f PushI
	var_134_int = 28077; // 0x1a0 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x1a1 TObjFunc
	var_135_int = 541775; // 0x1a3 PushI
	var_136_int = 28071; // 0x1a4 PushI
	var_137_int = 43979; // 0x1a5 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_138_int = 28078; // 0x1a9 PushI
	var_139_bool = var_10_bool == var_138_int; // 0x1aa Eq
	if(var_139_bool == 0) goto Label_448; // 0x1ab JumpB
	var_140_string = ""; // 0x1ac PushV
	var_140_string = "Neutral"; // 0x1ad MovS
	func_166(var_11_object, var_140_string); // 0x1ae NEW_2
	var_141_int = 526798; // 0x1b0 PushI
	SetMessage(var_141_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_142_int = 526799; // 0x1b5 PushI
	var_143_int = 28080; // 0x1b6 PushI
	var_144_int = 28079; // 0x1b7 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x1b8 TObjFunc
	var_145_int = 541776; // 0x1ba PushI
	var_146_int = 28071; // 0x1bb PushI
	var_147_int = 43981; // 0x1bc PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_148_int = 28080; // 0x1c0 PushI
	var_149_bool = var_10_bool == var_148_int; // 0x1c1 Eq
	if(var_149_bool == 0) goto Label_471; // 0x1c2 JumpB
	var_150_string = ""; // 0x1c3 PushV
	var_150_string = "Neutral"; // 0x1c4 MovS
	func_166(var_11_object, var_150_string); // 0x1c5 NEW_2
	var_151_int = 526800; // 0x1c7 PushI
	SetMessage(var_151_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_152_int = 526793; // 0x1cc PushI
	var_153_int = 28071; // 0x1cd PushI
	var_154_int = 28073; // 0x1ce PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x1cf TObjFunc
	var_155_int = 526790; // 0x1d1 PushI
	var_156_int = 28082; // 0x1d2 PushI
	var_157_int = 28070; // 0x1d3 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x1d4 TObjFunc
	return 0; // 0x1d6 Return
	
Label_471:
	var_158_int = 28082; // 0x1d7 PushI
	var_159_bool = var_10_bool == var_158_int; // 0x1d8 Eq
	if(var_159_bool == 0) goto Label_494; // 0x1d9 JumpB
	var_160_string = ""; // 0x1da PushV
	var_160_string = "Neutral"; // 0x1db MovS
	func_166(var_11_object, var_160_string); // 0x1dc NEW_2
	var_161_int = 526802; // 0x1de PushI
	SetMessage(var_161_int); // 0x1df TObjFunc
	ClearReplies(); // 0x1e1 TObjFunc
	var_162_int = 526803; // 0x1e3 PushI
	var_163_int = -1; // 0x1e4 PushI
	var_164_int = 28083; // 0x1e5 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x1e6 TObjFunc
	var_165_int = 526804; // 0x1e8 PushI
	var_166_int = -1; // 0x1e9 PushI
	var_167_int = 28084; // 0x1ea PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_168_int = 28071; // 0x1ee PushI
	var_169_bool = var_10_bool == var_168_int; // 0x1ef Eq
	if(var_169_bool == 0) goto Label_517; // 0x1f0 JumpB
	var_170_string = ""; // 0x1f1 PushV
	var_170_string = "Neutral"; // 0x1f2 MovS
	func_166(var_11_object, var_170_string); // 0x1f3 NEW_2
	var_171_int = 526791; // 0x1f5 PushI
	SetMessage(var_171_int); // 0x1f6 TObjFunc
	ClearReplies(); // 0x1f8 TObjFunc
	var_172_int = 526792; // 0x1fa PushI
	var_173_int = -1; // 0x1fb PushI
	var_174_int = 28072; // 0x1fc PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x1fd TObjFunc
	var_175_int = 526794; // 0x1ff PushI
	var_176_int = -1; // 0x200 PushI
	var_177_int = 28074; // 0x201 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x202 TObjFunc
	return 0; // 0x204 Return
	
Label_517:
	var_3_string = 1; // 0x205 TMovB
	var_178_bool = 0; // 0x206 PushV
	func_1321(var_178_bool); // 0x207 NEW_2
	if(var_178_bool == 0) goto Label_525; // 0x209 JumpB
	lshStopAnimation(); // 0x20a Func
	goto Label_527; // 0x20c Jump
	
Label_527:
	return 0; // 0x20f Return
	
Label_525:
	StopAnimation(); // 0x20d Func
	
Label_529:
	return 0; // 0x211 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_616(var_9_object, var_10_object); // 0x21e NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x220 PushV
	var_15_object = var_10_object; // 0x221 Mov
	TaskCall(0); // 0x222 TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x223 NEW_2
	TaskReturn(); // 0x224 TaskReturn
	return 0; // 0x226 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x252 PushI
	var_12_bool = var_10_int == var_11_int; // 0x253 Eq
	if(var_12_bool == 0) goto Label_615; // 0x254 JumpB
	var_13_bool = 0; // 0x255 PushV
	func_578(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x256 NEW_2
	if(var_13_bool == 0) goto Label_609; // 0x258 JumpB
	var_26_bool = var_2_object == 0; // 0x259 Not
	if(var_26_bool == 0) goto Label_608; // 0x25a JumpB
	var_27_object = Obj(); // 0x25b PushV
	var_27_object = var_4_bool; // 0x25c MovT
	func_1137(var_27_object); // 0x25d NEW_2
	var_2_object = 1; // 0x25f TMovB
	
Label_608:
	goto Label_615; // 0x260 Jump
	
Label_615:
	return 0; // 0x267 Return
	
Label_609:
	var_34_object = var_2_object; // 0x261 PushT
	if(var_34_object == 0) goto Label_615; // 0x262 JumpB
	var_35_string = "head"; // 0x263 PushS
	UnlookAsync(var_35_string); // 0x264 Func
	var_2_object = 0; // 0x266 TMovB
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x2e6 PushV
	IsOverrideActive(var_12_bool); // 0x2e7 Func
	var_13_bool = var_12_bool == 0; // 0x2e9 Not
	if(var_13_bool == 0) goto Label_751; // 0x2ea JumpB
	var_14_object = Obj(); // 0x2eb PushV
	var_14_object = var_10_object; // 0x2ec Mov
	func_1300(var_14_object); // 0x2ed NEW_2
	
Label_751:
	return 2; // 0x2ef Return
}


task_3_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0; // 0x366 Return
}


task_3_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	return 0; // 0x368 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	return 0; // 0x36a Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; // 0x534 PushV
	var_14_object = var_10_object; // 0x535 Mov
	var_15_int = var_11_int; // 0x536 Mov
	var_16_float = var_12_float; // 0x537 Mov
	func_934(var_14_object, var_15_int, var_16_float); // 0x538 NEW_2
	return 0; // 0x53a Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); // 0x53c PushV
	var_16_object = var_10_object; // 0x53d Mov
	var_17_int = var_11_int; // 0x53e Mov
	var_18_float = var_12_float; // 0x53f Mov
	var_19_cvector = var_14_cvector; // 0x540 Mov
	var_20_cvector = var_15_cvector; // 0x541 Mov
	func_1002(var_18_float, var_19_cvector, var_20_cvector); // 0x542 NEW_2
	return 0; // 0x544 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0; // 0x545 PushV
	var_14_string = "health"; // 0x546 PushS
	var_15_bool = var_11_string == var_14_string; // 0x547 Eq
	if(var_15_bool == 0) goto Label_1361; // 0x548 JumpB
	var_16_string = "health"; // 0x549 PushS
	GetProperty(var_16_string, var_13_float); // 0x54a Func
	var_17_int = 0; // 0x54c PushI
	var_18_bool = var_13_float <= var_17_int; // 0x54d LE
	if(var_18_bool == 0) goto Label_1361; // 0x54e JumpB
	SignalDeath(var_10_object); // 0x54f Func
	
Label_1361:
	return 2; // 0x551 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0; // 0x552 PushV
	IsPlayerActor(var_10_object, var_12_bool); // 0x553 Func
	var_13_bool = var_12_bool; // 0x555 Push
	if(var_13_bool == 0) goto Label_1372; // 0x556 JumpB
	var_14_bool = 0; var_15_string = ""; var_16_string = ""; // 0x557 PushV
	var_15_string = "quest_k1_01"; // 0x558 MovS
	var_16_string = "doberman_dead"; // 0x559 MovS
	func_1211(var_14_bool, var_15_string, var_16_string); // 0x55a NEW_2
	
Label_1372:
	var_20_object = Obj(); // 0x55c PushV
	var_20_object = var_10_object; // 0x55d Mov
	func_1323(var_20_object); // 0x55e NEW_2
	return 2; // 0x560 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_530:
	var_10_int = 3; // 0x212 PushI
	Sleep(var_10_int); // 0x213 Func
	var_11_float = 0; var_12_float = 0; // 0x215 PushV
	var_11_float = 300; // 0x216 MovI
	var_12_float = 100; // 0x217 MovI
	func_551(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_11_float, var_12_float); // 0x218 NEW_2
	goto Label_530; // 0x21a Jump
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 70.0; // 0x4 MovF
	func_1021(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_1315(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_1313(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_1317(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_1319(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_1277(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_158_bool = var_24_bool == 0; // 0x38 Not
	if(var_158_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_159_object = Obj(); // 0x3f PushV
	var_159_object = var_15_object; // 0x40 Mov
	func_1089(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1155(var_51_string)
{
	var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_bool = 0; var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_bool = 0; var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); // 0x483 PushV
	IsExisting3DSound(var_60_bool, var_51_string); // 0x484 Func
	var_68_bool = var_60_bool == 0; // 0x486 Not
	if(var_68_bool == 0) goto Label_1180; // 0x487 JumpB
	var_61_int = 0; // 0x488 MovI
	
Label_1161:
	var_69_int = 1; // 0x489 PushI
	var_70_int = var_61_int + var_69_int; // 0x48a Add
	var_71_int = var_51_string + var_70_int; // 0x48b Add
	IsExisting3DSound(var_62_bool, var_71_int); // 0x48c Func
	var_72_bool = var_62_bool == 0; // 0x48e Not
	if(var_72_bool == 0) goto Label_1169; // 0x48f JumpB
	goto Label_1172; // 0x490 Jump
	
Label_1172:
	var_73_bool = var_61_int == 0; // 0x494 Not
	if(var_73_bool == 0) goto Label_1175; // 0x495 JumpB
	return 16; // 0x496 Return
	
Label_1175:
	irand(var_63_int, var_61_int); // 0x497 Func
	var_74_int = 1; // 0x499 PushI
	var_75_int = var_63_int + var_74_int; // 0x49a Add
	var_51_string = var_51_string + var_75_int; // 0x49b Add2
	
Label_1180:
	Is3DSoundLoaded(var_64_bool, var_51_string); // 0x49c Func
	var_76_bool = var_64_bool; // 0x49e Push
	if(var_76_bool == 0) goto Label_1195; // 0x49f JumpB
	GetEyesHeight(var_65_float); // 0x4a0 Func
	GetDirection(var_66_cvector); // 0x4a2 Func
	var_77_int = 50; // 0x4a4 PushI
	var_67_cvector = var_66_cvector * var_77_int; // 0x4a5 Mult2
	var_78_float = GetByIndex(var_67_cvector, 1); // 0x4a6 PushE
	var_78_float = var_78_float + var_65_float; // 0x4a7 Add2
	SetByIndex(var_67_cvector, 1) = var_78_float; // 0x4a8 PopE
	PlayGlobalSound(var_51_string, var_67_cvector); // 0x4a9 Func
	
Label_1195:
	return 16; // 0x4ab Return
	
Label_1169:
	var_79_int = 1; // 0x491 PushI
	var_61_int = var_61_int + var_79_int; // 0x492 Add2
	goto Label_1161; // 0x493 Jump
}


func_1294(var_15_int)
{
	var_16_int = 0; var_17_int = 0; // 0x50e PushV
	var_18_string = "branch"; // 0x50f PushS
	GetVariable(var_18_string, var_17_int); // 0x510 Func
	var_15_int = var_17_int; // 0x512 Mov
	return 2; // 0x513 Return
}


func_1021(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x3fd PushV
	GetPosition(var_38_cvector); // 0x3fe ObjFunc
	GetEyesHeight(var_37_float); // 0x400 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x402 PushE
	var_46_float = var_46_float + var_37_float; // 0x403 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x404 PopE
	GetPosition(var_39_cvector); // 0x405 Func
	GetEyesHeight(var_37_float); // 0x407 Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x409 PushE
	var_47_float = var_47_float + var_37_float; // 0x40a Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x40b PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x40c Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x40d PushE
	var_48_float = 0; // 0x40e MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x40f PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x410 Or
	var_50_float = sqrt(var_49_int); // 0x411 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x412 Div2
	var_41_cvector = -var_40_cvector; // 0x413 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x414 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x415 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x416 PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x417 Xor2
	func_1196(var_52_cvector, var_53_cvector); // 0x418 NEW_2
	var_60_int = 25; // 0x41a PushI
	var_61_float = var_52_cvector * var_60_int; // 0x41b Mult
	var_62_int = var_51_float + var_61_float; // 0x41c Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x41d PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x41e Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x41f Add2
	IsOverrideActive(var_44_bool); // 0x420 Func
	var_64_bool = var_44_bool; // 0x422 Push
	if(var_64_bool == 0) goto Label_1062; // 0x423 JumpB
	var_25_bool = 0; // 0x424 MovB
	return 18; // 0x425 Return
	
Label_1062:
	StopWorld(); // 0x426 Func
	CameraTransit(var_43_cvector, var_41_cvector); // 0x428 Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x42a PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x42b PushE
	Rotate(var_65_float, var_66_float); // 0x42c Func
	var_67_bool = 0; // 0x42e PushV
	func_1321(var_67_bool); // 0x42f NEW_2
	if(var_67_bool == 0) goto Label_1075; // 0x431 JumpB
	goto Label_1083; // 0x432 Jump
	
Label_1083:
	CameraWaitForPlayFinish(); // 0x43b Func
	ResumeWorld(); // 0x43d Func
	var_25_bool = 1; // 0x43f MovB
	return 18; // 0x440 Return
	
Label_1075:
	var_68_string = "head"; // 0x433 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x434 Func
	var_69_bool = var_45_bool; // 0x436 Push
	if(var_69_bool == 0) goto Label_1083; // 0x437 JumpB
	var_70_string = "head"; // 0x438 PushS
	LookAsyncCamera(var_70_string); // 0x439 Func
}


func_1300(var_14_object)
{
	var_15_int = 0; // 0x515 PushV
	func_1294(var_15_int); // 0x516 NEW_2
	var_19_int = 1; // 0x518 PushI
	var_20_bool = var_15_int == var_19_int; // 0x519 Eq
	if(var_20_bool == 0) goto Label_1310; // 0x51a JumpB
	WorkWithCorpse(var_14_object); // 0x51b Func
	goto Label_1312; // 0x51d Jump
	
Label_1312:
	return 0; // 0x520 Return
	
Label_1310:
	Barter(var_14_object); // 0x51e Func
}


func_1313(var_73_int)
{
	var_73_int = 543373; // 0x521 MovI
	return 0; // 0x522 Return
}


func_1315(var_72_int)
{
	var_72_int = 543372; // 0x523 MovI
	return 0; // 0x524 Return
}


func_1317(var_74_string)
{
	var_74_string = "ui/NPC_Citizen1.png"; // 0x525 MovS
	return 0; // 0x526 Return
}


func_166(var_2_object, var_111_string)
{
	var_112_bool = 0; // 0xa7 PushV
	func_1321(var_112_bool); // 0xa8 NEW_2
	var_113_bool = var_112_bool == 0; // 0xaa Not
	if(var_113_bool == 0) goto Label_173; // 0xab JumpB
	return 0; // 0xac Return
	
Label_173:
	var_114_bool = var_111_string == var_2_object; // 0xad Eq
	if(var_114_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_115_string = ""; var_116_bool = 0; // 0xb0 PushV
	var_115_string = var_111_string; // 0xb1 Mov
	var_117_string = ""; // 0xb2 PushS
	var_118_bool = var_111_string == var_117_string; // 0xb3 Eq
	if(var_118_bool == 0) goto Label_183; // 0xb4 JumpB
	var_116_bool = 0; // 0xb5 MovB
	goto Label_184; // 0xb6 Jump
	
Label_184:
	func_1122(var_115_string, var_116_bool); // 0xb8 NEW_2
	var_2_object = var_111_string; // 0xba TMov
	return 0; // 0xbb Return
	
Label_183:
	var_116_bool = 1; // 0xb7 MovB
}


func_1319(var_75_string)
{
	var_75_string = "ui/NPC_Citizen1_b.png"; // 0x527 MovS
	return 0; // 0x528 Return
}


func_551(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_11_float, var_12_float)
{
	var_13_bool = 0; // 0x228 PushV
	func_1016(var_13_bool); // 0x229 NEW_2
	var_16_bool = var_13_bool == 0; // 0x22b Not
	if(var_16_bool == 0) goto Label_558; // 0x22c JumpB
	return 0; // 0x22d Return
	
Label_558:
	var_17_string = "player"; // 0x22e PushS
	FindActor(var_9_object, var_17_string); // 0x22f Func
	var_2_object = 0; // 0x231 TMovB
	var_3_string = 0; // 0x232 TMovB
	var_0_object = var_11_float; // 0x233 TMov
	var_1_object = var_12_float; // 0x234 TMov
	var_18_int = 10; // 0x235 PushI
	var_19_float = 1.0; // 0x236 PushF
	SetTimer(var_18_int, var_19_float); // 0x237 Func
	func_630(); // 0x23a NEW_2
	var_71_bool = var_3_string == 0; // 0x23c Not
	if(var_71_bool == 0) goto Label_577; // 0x23d JumpB
	var_72_int = 10; // 0x23e PushI
	KillTimer(var_72_int); // 0x23f Func
	
Label_577:
	return 0; // 0x241 Return
}


func_1321(var_67_bool)
{
	var_67_bool = 0; // 0x529 MovB
	return 0; // 0x52a Return
}


func_934(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); // 0x3a6 PushV
	var_35_bool = 0; // 0x3a7 PushV
	var_35_bool = 0; // 0x3a8 MovB
	var_36_bool = 0; // 0x3a9 PushV
	var_36_bool = 0; // 0x3aa MovB
	var_37_object = var_14_object; // 0x3ab Push
	if(var_37_object == 0) goto Label_945; // 0x3ac JumpB
	var_38_int = 4; // 0x3ad PushI
	var_39_bool = var_15_int != var_38_int; // 0x3ae Neq
	if(var_39_bool == 0) goto Label_945; // 0x3af JumpB
	var_36_bool = 1; // 0x3b0 MovB
	
Label_945:
	if(var_36_bool == 0) goto Label_950; // 0x3b1 JumpB
	var_40_int = 5; // 0x3b2 PushI
	var_41_bool = var_15_int != var_40_int; // 0x3b3 Neq
	if(var_41_bool == 0) goto Label_950; // 0x3b4 JumpB
	var_35_bool = 1; // 0x3b5 MovB
	
Label_950:
	if(var_35_bool == 0) goto Label_997; // 0x3b6 JumpB
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x3b7 PushV
	var_44_cvector = CVector(0,0,0); var_45_object = Obj(); // 0x3b8 PushV
	var_45_object = var_14_object; // 0x3b9 Mov
	func_875(var_45_object); // 0x3ba NEW_2
	var_43_cvector = var_44_cvector; // 0x3bb Mov
	func_1196(var_42_cvector, var_43_cvector); // 0x3bd NEW_2
	var_26_cvector = var_42_cvector; // 0x3be Mov
	CreateVectorVector(var_27_object); // 0x3c0 Func
	var_28_int = 1; // 0x3c2 MovI
	
Label_963:
	var_55_string = "hit"; // 0x3c3 PushS
	var_56_int = var_55_string + var_28_int; // 0x3c4 Add
	GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector); // 0x3c5 Func
	var_57_bool = var_29_bool == 0; // 0x3c7 Not
	if(var_57_bool == 0) goto Label_970; // 0x3c8 JumpB
	goto Label_979; // 0x3c9 Jump
	
Label_979:
	size(var_32_int); // 0x3d3 ObjFunc
	var_58_int = var_32_int; // 0x3d5 Push
	if(var_58_int == 0) goto Label_996; // 0x3d6 JumpB
	irand(var_33_int, var_32_int); // 0x3d7 Func
	get(var_34_cvector, var_33_int); // 0x3d9 ObjFunc
	var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x3db PushV
	var_59_object = var_14_object; // 0x3dc Mov
	var_60_int = var_15_int; // 0x3dd Mov
	var_61_float = var_16_float; // 0x3de Mov
	var_62_cvector = var_34_cvector; // 0x3df Mov
	var_63_cvector = -var_26_cvector; // 0x3e0 Neg2
	func_1002(var_61_float, var_62_cvector, var_63_cvector); // 0x3e1 NEW_2
	return 18; // 0x3e3 Return
	
Label_996:
	var_27_object = 0; // 0x3e4 SetNull
	
Label_997:
	var_104_object = Obj(); // 0x3e5 PushV
	var_104_object = var_14_object; // 0x3e6 Mov
	func_890(var_104_object); // 0x3e7 NEW_2
	return 18; // 0x3e9 Return
	
Label_970:
	var_105_int = var_31_cvector | var_26_cvector; // 0x3ca Or
	var_106_float = 0.70711; // 0x3cb PushF
	var_107_bool = var_105_int >= var_106_float; // 0x3cc GE
	if(var_107_bool == 0) goto Label_976; // 0x3cd JumpB
	add(var_30_cvector); // 0x3ce ObjFunc
	
Label_976:
	var_108_int = 1; // 0x3d0 PushI
	var_28_int = var_28_int + var_108_int; // 0x3d1 Add2
	goto Label_963; // 0x3d2 Jump
}


func_1323(var_20_object)
{
	var_21_object = Obj(); // 0x52c PushV
	var_21_object = var_20_object; // 0x52d Mov
	TaskCall(3); // 0x52e TaskCall
	func_716(var_21_object); // 0x52f NEW_2
	TaskReturn(); // 0x530 TaskReturn
	return 0; // 0x532 Return
}


func_1196(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0; // 0x4ac PushV
	var_52_int = var_43_cvector | var_43_cvector; // 0x4ad Or
	var_51_float = sqrt(var_52_int); // 0x4ae Sqrt2
	var_53_float = 0.0; // 0x4af PushF
	var_54_bool = var_51_float < var_53_float; // 0x4b0 LT
	if(var_54_bool == 0) goto Label_1204; // 0x4b1 JumpB
	var_42_cvector = CVector(0.0, 0.0, 0.0); // 0x4b2 MovV
	return 2; // 0x4b3 Return
	
Label_1204:
	var_42_cvector = var_43_cvector / var_43_cvector; // 0x4b4 Div2
	return 2; // 0x4b5 Return
}


func_1206(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0; // 0x4b6 PushV
	GetVariable(var_96_string, var_98_int); // 0x4b7 Func
	var_95_int = var_98_int; // 0x4b9 Mov
	return 2; // 0x4ba Return
}


func_1211(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x4bb PushV
	FindActor(var_18_object, var_15_string); // 0x4bc Func
	var_19_bool = var_18_object == 0; // 0x4be NullEq
	if(var_19_bool == 0) goto Label_1218; // 0x4bf JumpB
	var_14_bool = 0; // 0x4c0 MovB
	return 2; // 0x4c1 Return
	
Label_1218:
	Trigger(var_18_object, var_16_string); // 0x4c2 Func
	var_14_bool = 1; // 0x4c4 MovB
	return 2; // 0x4c5 Return
}


func_1089()
{
	var_160_bool = 0; var_161_bool = 0; // 0x441 PushV
	CameraSwitchToNormal(); // 0x442 Func
	var_162_bool = 0; // 0x444 PushV
	func_1321(var_162_bool); // 0x445 NEW_2
	if(var_162_bool == 0) goto Label_1097; // 0x447 JumpB
	goto Label_1105; // 0x448 Jump
	
Label_1105:
	return 2; // 0x451 Return
	
Label_1097:
	var_163_string = "head"; // 0x449 PushS
	HasAnimationTrack(var_161_bool, var_163_string); // 0x44a Func
	var_164_bool = var_161_bool; // 0x44c Push
	if(var_164_bool == 0) goto Label_1105; // 0x44d JumpB
	var_165_string = "head"; // 0x44e PushS
	UnlookAsync(var_165_string); // 0x44f Func
}


func_578(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x242 PushV
	var_16_bool = var_4_bool == 0; // 0x243 NullEq
	if(var_16_bool == 0) goto Label_583; // 0x244 JumpB
	var_13_bool = 0; // 0x245 MovB
	return 2; // 0x246 Return
	
Label_583:
	var_17_float = 0; var_18_object = Obj(); // 0x247 PushV
	var_18_object = var_4_bool; // 0x248 MovT
	func_882(var_18_object); // 0x249 NEW_2
	var_15_float = sqrt(var_17_float); // 0x24b Sqrt2
	var_25_object = var_2_object; // 0x24c PushT
	if(var_25_object == 0) goto Label_591; // 0x24d JumpB
	var_15_float = var_15_float - var_1_object; // 0x24e Sub2
	
Label_591:
	var_13_bool = var_15_float < var_0_object; // 0x24f LT2
	return 2; // 0x250 Return
}


func_709(var_61_bool)
{
	var_61_bool = 1; // 0x2c5 MovB
	return 0; // 0x2c6 Return
}


func_711()
{
	StopAnimation(); // 0x2c7 Func
	StopGroup0(); // 0x2c9 Func
	return 0; // 0x2cb Return
}


func_1223(var_42_string, var_43_int)
{
	var_44_string = ""; var_45_string = ""; // 0x4c7 PushV
	var_45_string = "idle"; // 0x4c8 MovS
	var_46_int = var_43_int; // 0x4c9 Push
	if(var_46_int == 0) goto Label_1228; // 0x4ca JumpB
	var_45_string = var_45_string + var_43_int; // 0x4cb Add2
	
Label_1228:
	var_42_string = var_45_string; // 0x4cc Mov
	return 2; // 0x4cd Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_136; // 0x4f JumpB
	var_92_bool = 0; // 0x50 PushV
	var_92_bool = 0; // 0x51 MovB
	var_93_bool = 0; var_94_object = Obj(); // 0x52 PushV
	var_94_object = var_1_object; // 0x53 MovT
	func_1253(var_94_object); // 0x54 NEW_2
	if(var_93_bool == 0) goto Label_93; // 0x56 JumpB
	var_101_bool = 0; var_102_object = Obj(); // 0x57 PushV
	var_102_object = var_1_object; // 0x58 MovT
	func_1265(var_102_object); // 0x59 NEW_2
	if(var_101_bool == 0) goto Label_93; // 0x5b JumpB
	var_92_bool = 1; // 0x5c MovB
	
Label_93:
	if(var_92_bool == 0) goto Label_114; // 0x5d JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x5e PushV
	var_107_object = var_1_object; // 0x5f MovT
	var_108_object = var_0_object; // 0x60 MovT
	func_1247(); // 0x61 NEW_2
	var_111_string = ""; // 0x63 PushV
	var_111_string = "Neutral"; // 0x64 MovS
	func_166(var_86_object, var_111_string); // 0x65 NEW_2
	var_128_int = 524677; // 0x67 PushI
	SetMessage(var_128_int); // 0x68 TObjFunc
	ClearReplies(); // 0x6a TObjFunc
	var_129_int = 541777; // 0x6c PushI
	var_130_int = 43984; // 0x6d PushI
	var_131_int = 43983; // 0x6e PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x6f TObjFunc
	goto Label_136; // 0x71 Jump
	
Label_136:
	var_132_bool = 0; // 0x88 PushV
	func_1321(var_132_bool); // 0x89 NEW_2
	if(var_132_bool == 0) goto Label_151; // 0x8b JumpB
	
Label_140:
	lshWaitForAnimEnd(); // 0x8c Func
	var_133_string = var_3_string; // 0x8e PushT
	if(var_133_string == 0) goto Label_145; // 0x8f JumpB
	goto Label_150; // 0x90 Jump
	
Label_150:
	goto Label_165; // 0x96 Jump
	
Label_165:
	return 0; // 0xa5 Return
	
Label_145:
	var_134_string = ""; // 0x91 PushV
	var_134_string = var_2_object; // 0x92 MovT
	func_1106(var_134_string); // 0x93 NEW_2
	goto Label_140; // 0x95 Jump
	
Label_151:
	var_145_string = "all"; // 0x97 PushS
	var_146_string = "idle"; // 0x98 PushS
	PlayAnimation(var_145_string, var_146_string); // 0x99 Func
	
Label_155:
	WaitForAnimEnd(); // 0x9b Func
	var_147_string = var_3_string; // 0x9d PushT
	if(var_147_string == 0) goto Label_160; // 0x9e JumpB
	goto Label_165; // 0x9f Jump
	
Label_160:
	var_148_string = "all"; // 0xa0 PushS
	var_149_string = "idle"; // 0xa1 PushS
	PlayAnimation(var_148_string, var_149_string); // 0xa2 Func
	goto Label_155; // 0xa4 Jump
	
Label_114:
	var_150_string = ""; // 0x72 PushV
	var_150_string = "Neutral"; // 0x73 MovS
	func_166(var_86_object, var_150_string); // 0x74 NEW_2
	var_151_int = 524679; // 0x76 PushI
	SetMessage(var_151_int); // 0x77 TObjFunc
	ClearReplies(); // 0x79 TObjFunc
	var_152_int = 524680; // 0x7b PushI
	var_153_int = -1; // 0x7c PushI
	var_154_int = 26019; // 0x7d PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x7e TObjFunc
	var_155_int = 526801; // 0x80 PushI
	var_156_int = -1; // 0x81 PushI
	var_157_int = 28081; // 0x82 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x83 TObjFunc
	goto Label_136; // 0x85 Jump
}


func_843(var_50_string)
{
	RemoveRTEnvelope(); // 0x34c Func
	SetDeathState(); // 0x34e Func
	Stop(); // 0x350 Func
	StopAsync(); // 0x352 Func
	StopSecondaryAnimation(); // 0x354 Func
	var_51_string = ""; // 0x356 PushV
	var_51_string = var_50_string; // 0x357 Mov
	func_1155(var_51_string); // 0x358 NEW_2
	var_80_string = "all"; // 0x35a PushS
	PlayAnimation(var_80_string, var_50_string); // 0x35b Func
	WaitForAnimEnd(); // 0x35d Func
	var_81_string = "all"; // 0x35f PushS
	LockAnimationEnd(var_81_string, var_50_string); // 0x360 Func
	RemoveEnvelope(); // 0x362 Func
	return 0; // 0x364 Return
}


func_716(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x2cc PushV
	var_24_string = "lockpick"; // 0x2cd PushS
	var_25_int = 0; // 0x2ce PushI
	var_26_int = 1; // 0x2cf PushI
	AddItem(var_23_bool, var_24_string, var_25_int, var_26_int); // 0x2d0 Func
	var_27_object = Obj(); // 0x2d2 PushV
	var_27_object = var_21_object; // 0x2d3 Mov
	func_727(var_27_object); // 0x2d4 NEW_2
	return 2; // 0x2d6 Return
}


func_1230(var_36_int)
{
	var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; // 0x4ce PushV
	var_39_int = 0; // 0x4cf MovI
	
Label_1232:
	var_41_string = "all"; // 0x4d0 PushS
	var_42_string = ""; var_43_int = 0; // 0x4d1 PushV
	var_43_int = var_39_int; // 0x4d2 Mov
	func_1223(var_42_string, var_43_int); // 0x4d3 NEW_2
	HasAnimation(var_40_bool, var_41_string, var_42_string); // 0x4d5 Func
	var_47_bool = var_40_bool == 0; // 0x4d7 Not
	if(var_47_bool == 0) goto Label_1242; // 0x4d8 JumpB
	goto Label_1245; // 0x4d9 Jump
	
Label_1245:
	var_36_int = var_39_int; // 0x4dd Mov
	return 4; // 0x4de Return
	
Label_1242:
	var_48_int = 1; // 0x4da PushI
	var_39_int = var_39_int + var_48_int; // 0x4db Add2
	goto Label_1232; // 0x4dc Jump
}


func_1106(var_134_string)
{
	var_135_bool = 0; var_136_float = 0; var_137_float = 0; var_138_bool = 0; var_139_float = 0; var_140_float = 0; // 0x452 PushV
	lshHasAnimation(var_138_bool, var_134_string); // 0x453 Func
	var_141_bool = var_138_bool; // 0x455 Push
	if(var_141_bool == 0) goto Label_1117; // 0x456 JumpB
	lshGetAnimTimes(var_134_string, var_139_float, var_140_float); // 0x457 Func
	var_142_bool = 0; // 0x459 PushB
	lshPlayAnimation(var_139_float, var_140_float, var_142_bool); // 0x45a Func
	goto Label_1121; // 0x45c Jump
	
Label_1121:
	return 6; // 0x461 Return
	
Label_1117:
	var_143_string = "Can't find lsh animation : "; // 0x45d PushS
	var_144_int = var_143_string + var_134_string; // 0x45e Add
	Trace(var_144_int); // 0x45f Func
}


func_727(var_27_object)
{
	EventDisable(0); // 0x2d8 EventDisable
	var_28_object = Obj(); // 0x2d9 PushV
	var_28_object = var_27_object; // 0x2da Mov
	func_752(var_28_object); // 0x2db NEW_2
	var_108_int = 50; // 0x2dd PushI
	var_109_int = 40; // 0x2de PushI
	SetRTEnvelope(var_108_int, var_109_int); // 0x2df Func
	EventEnable(0); // 0x2e1 EventEnable
	
Label_738:
	Hold(); // 0x2e2 Func
	goto Label_738; // 0x2e4 Jump
}


func_1247()
{
	var_109_string = "ook1Lisa1"; // 0x4e0 PushS
	var_110_int = 1; // 0x4e1 PushI
	SetVariable(var_109_string, var_110_int); // 0x4e2 Func
	return 0; // 0x4e4 Return
}


func_1122(var_115_string, var_116_bool)
{
	var_119_bool = 0; var_120_float = 0; var_121_float = 0; var_122_bool = 0; var_123_float = 0; var_124_float = 0; // 0x462 PushV
	lshHasAnimation(var_122_bool, var_115_string); // 0x463 Func
	var_125_bool = var_122_bool; // 0x465 Push
	if(var_125_bool == 0) goto Label_1132; // 0x466 JumpB
	lshGetAnimTimes(var_115_string, var_123_float, var_124_float); // 0x467 Func
	lshPlayAnimation(var_123_float, var_124_float, var_116_bool); // 0x469 Func
	goto Label_1136; // 0x46b Jump
	
Label_1136:
	return 6; // 0x470 Return
	
Label_1132:
	var_126_string = "Can't find lsh animation : "; // 0x46c PushS
	var_127_int = var_126_string + var_115_string; // 0x46d Add
	Trace(var_127_int); // 0x46e Func
}


func_1253(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x4e6 PushV
	var_96_string = "k1q01"; // 0x4e7 MovS
	func_1206(var_95_int, var_96_string); // 0x4e8 NEW_2
	var_99_int = 4; // 0x4ea PushI
	var_100_bool = var_95_int == var_99_int; // 0x4eb Eq
	if(var_100_bool == 0) goto Label_1263; // 0x4ec JumpB
	var_93_bool = 1; // 0x4ed MovB
	return 0; // 0x4ee Return
	
Label_1263:
	var_93_bool = 0; // 0x4ef MovB
	return 0; // 0x4f0 Return
}


func_616(var_2_object, var_3_string)
{
	func_711(); // 0x269 NEW_2
	var_11_int = 10; // 0x26b PushI
	KillTimer(var_11_int); // 0x26c Func
	var_12_object = var_2_object; // 0x26e PushT
	if(var_12_object == 0) goto Label_628; // 0x26f JumpB
	var_13_string = "head"; // 0x270 PushS
	UnlookAsync(var_13_string); // 0x271 Func
	var_2_object = 0; // 0x273 TMovB
	
Label_628:
	var_3_string = 1; // 0x274 TMovB
	return 0; // 0x275 Return
}


func_1002(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); // 0x3ea PushV
	GetScene(var_23_object); // 0x3eb Func
	var_25_string = "scripted"; // 0x3ed PushS
	var_26_string = "blood_dir.xml"; // 0x3ee PushS
	AddActorByType(var_24_object, var_25_string, var_23_object, var_19_cvector, var_20_cvector, var_26_string); // 0x3ef Func
	var_27_object = Obj(); // 0x3f1 PushV
	var_27_object = var_16_object; // 0x3f2 Mov
	func_890(var_27_object); // 0x3f3 NEW_2
	return 4; // 0x3f5 Return
}


func_875(var_44_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); // 0x36b PushV
	GetPosition(var_48_cvector); // 0x36c Func
	GetPosition(var_49_cvector); // 0x36e ObjFunc
	var_44_cvector = var_49_cvector - var_48_cvector; // 0x370 Sub2
	return 4; // 0x371 Return
}


func_752(var_28_object)
{
	var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; var_44_object = Obj(); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); // 0x2f0 PushV
	var_49_bool = var_28_object == 0; // 0x2f1 NullEq
	if(var_49_bool == 0) goto Label_760; // 0x2f2 JumpB
	var_50_string = ""; // 0x2f3 PushV
	var_50_string = "fdie"; // 0x2f4 MovS
	func_843(var_50_string); // 0x2f5 NEW_2
	goto Label_842; // 0x2f7 Jump
	
Label_842:
	return 20; // 0x34a Return
	
Label_760:
	GetPosition(var_39_cvector); // 0x2f8 ObjFunc
	GetPosition(var_40_cvector); // 0x2fa Func
	GetDirection(var_41_cvector); // 0x2fc Func
	var_42_cvector = var_40_cvector - var_39_cvector; // 0x2fe Sub2
	var_82_float = GetByIndex(var_42_cvector, 0); // 0x2ff PushE
	var_83_float = GetByIndex(var_41_cvector, 0); // 0x300 PushE
	var_84_float = var_82_float * var_83_float; // 0x301 Mult
	var_85_float = GetByIndex(var_42_cvector, 2); // 0x302 PushE
	var_86_float = GetByIndex(var_41_cvector, 2); // 0x303 PushE
	var_87_float = var_85_float * var_86_float; // 0x304 Mult
	var_88_int = var_84_float + var_87_float; // 0x305 Add
	var_89_int = 0; // 0x306 PushI
	var_90_bool = var_88_int >= var_89_int; // 0x307 GE
	if(var_90_bool == 0) goto Label_779; // 0x308 JumpB
	var_43_string = "fdie"; // 0x309 MovS
	goto Label_780; // 0x30a Jump
	
Label_780:
	RemoveRTEnvelope(); // 0x30c Func
	SetDeathState(); // 0x30e Func
	Stop(); // 0x310 Func
	StopAsync(); // 0x312 Func
	var_44_object = var_28_object; // 0x314 Mov
	var_91_string = "GetScriptProperty"; // 0x315 PushS
	var_92_int = 2; // 0x316 PushI
	var_93_bool = IsFuncExist(var_28_object, var_91_string, var_92_int); // 0x317 FuncExist
	if(var_93_bool == 0) goto Label_804; // 0x318 JumpB
	var_94_string = "Owner"; // 0x319 PushS
	HasScriptProperty(var_45_bool, var_94_string); // 0x31a ObjFunc
	var_95_bool = var_45_bool; // 0x31c Push
	if(var_95_bool == 0) goto Label_804; // 0x31d JumpB
	var_96_string = "Owner"; // 0x31e PushS
	GetScriptProperty(var_44_object, var_96_string); // 0x31f ObjFunc
	var_97_bool = var_44_object == 0; // 0x321 NullEq
	if(var_97_bool == 0) goto Label_804; // 0x322 JumpB
	var_44_object = var_28_object; // 0x323 Mov
	
Label_804:
	var_98_string = "@GetEyesHeight"; // 0x324 PushS
	var_99_int = 1; // 0x325 PushI
	var_100_bool = IsFuncExist(var_44_object, var_98_string, var_99_int); // 0x326 FuncExist
	if(var_100_bool == 0) goto Label_819; // 0x327 JumpB
	GetEyesHeight(var_47_float); // 0x328 ObjFunc
	var_48_cvector = CVector(0.0, 0.0, 0.0); // 0x32a MovV
	var_101_float = GetByIndex(var_48_cvector, 1); // 0x32b PushE
	var_101_float = var_47_float; // 0x32c Mov
	SetByIndex(var_48_cvector, 1) = var_101_float; // 0x32d PopE
	var_102_string = "head"; // 0x32e PushS
	LookAsync(var_28_object, var_102_string, var_48_cvector); // 0x32f Func
	var_46_bool = 1; // 0x331 MovB
	goto Label_820; // 0x332 Jump
	
Label_820:
	var_103_string = ""; // 0x334 PushV
	var_103_string = var_43_string; // 0x335 Mov
	func_1155(var_103_string); // 0x336 NEW_2
	var_104_string = "all"; // 0x338 PushS
	PlayAnimation(var_104_string, var_43_string); // 0x339 Func
	WaitForAnimEnd(); // 0x33b Func
	var_105_bool = var_46_bool; // 0x33d Push
	if(var_105_bool == 0) goto Label_836; // 0x33e JumpB
	StopAsync(); // 0x33f Func
	var_106_string = "head"; // 0x341 PushS
	UnlookAsync(var_106_string); // 0x342 Func
	
Label_836:
	var_107_string = "all"; // 0x344 PushS
	LockAnimationEnd(var_107_string, var_43_string); // 0x345 Func
	RemoveEnvelope(); // 0x347 Func
	var_44_object = 0; // 0x349 SetNull
	
Label_819:
	var_46_bool = 0; // 0x333 MovB
	
Label_779:
	var_43_string = "bdie"; // 0x30b MovS
}


func_1265(var_101_bool)
{
	var_103_int = 0; var_104_string = ""; // 0x4f2 PushV
	var_104_string = "ook1Lisa1"; // 0x4f3 MovS
	func_1206(var_103_int, var_104_string); // 0x4f4 NEW_2
	var_105_int = 0; // 0x4f6 PushI
	var_106_bool = var_103_int == var_105_int; // 0x4f7 Eq
	if(var_106_bool == 0) goto Label_1275; // 0x4f8 JumpB
	var_101_bool = 1; // 0x4f9 MovB
	return 0; // 0x4fa Return
	
Label_1275:
	var_101_bool = 0; // 0x4fb MovB
	return 0; // 0x4fc Return
}


func_882(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x372 PushV
	GetPosition(var_22_cvector); // 0x373 Func
	GetPosition(var_23_cvector); // 0x375 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x377 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x378 Or2
	return 6; // 0x379 Return
}


func_1137(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x471 PushV
	GetEyesHeight(var_30_float); // 0x472 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x474 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x475 PushE
	var_32_float = var_30_float; // 0x476 Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x477 PopE
	var_33_string = "head"; // 0x478 PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x479 Func
	return 4; // 0x47b Return
}


func_630()
{
	var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_float = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; // 0x276 PushV
	WaitForAnimEnd(); // 0x277 Func
	var_34_bool = 0; // 0x279 PushV
	func_1016(var_34_bool); // 0x27a NEW_2
	var_35_bool = var_34_bool == 0; // 0x27c Not
	if(var_35_bool == 0) goto Label_639; // 0x27d JumpB
	return 14; // 0x27e Return
	
Label_639:
	var_36_int = 0; // 0x27f PushV
	func_1230(var_36_int); // 0x280 NEW_2
	var_27_int = var_36_int; // 0x281 Mov
	var_28_int = 0; // 0x283 MovI
	
Label_644:
	var_49_bool = 0; // 0x284 PushV
	var_49_bool = 0; // 0x285 MovB
	var_50_int = 5; // 0x286 PushI
	var_51_bool = var_28_int < var_50_int; // 0x287 LT
	if(var_51_bool == 0) goto Label_654; // 0x288 JumpB
	var_52_bool = 0; // 0x289 PushV
	func_1016(var_52_bool); // 0x28a NEW_2
	if(var_52_bool == 0) goto Label_654; // 0x28c JumpB
	var_49_bool = 1; // 0x28d MovB
	
Label_654:
	if(var_49_bool == 0) goto Label_706; // 0x28e JumpB
	var_53_int = 3; // 0x28f PushI
	irand(var_29_int, var_53_int); // 0x290 Func
	var_54_int = 0; // 0x292 PushI
	var_55_bool = var_29_int == var_54_int; // 0x293 Eq
	if(var_55_bool == 0) goto Label_678; // 0x294 JumpB
	var_56_int = var_27_int; // 0x295 Push
	if(var_56_int == 0) goto Label_677; // 0x296 JumpB
	irand(var_30_int, var_27_int); // 0x297 Func
	var_57_string = "all"; // 0x299 PushS
	var_58_string = ""; var_59_int = 0; // 0x29a PushV
	var_59_int = var_30_int; // 0x29b Mov
	func_1223(var_58_string, var_59_int); // 0x29c NEW_2
	PlayAnimation(var_57_string, var_58_string); // 0x29e Func
	WaitForAnimEnd(var_31_bool); // 0x2a0 Func
	var_60_bool = var_31_bool == 0; // 0x2a2 Not
	if(var_60_bool == 0) goto Label_677; // 0x2a3 JumpB
	goto Label_706; // 0x2a4 Jump
	
Label_706:
	ResetAAS(); // 0x2c2 Func
	return 14; // 0x2c4 Return
	
Label_677:
	goto Label_695; // 0x2a5 Jump
	
Label_695:
	var_61_bool = 0; // 0x2b7 PushV
	func_709(var_61_bool); // 0x2b8 NEW_2
	var_62_bool = var_61_bool == 0; // 0x2ba Not
	if(var_62_bool == 0) goto Label_701; // 0x2bb JumpB
	goto Label_706; // 0x2bc Jump
	
Label_701:
	ResetAAS(); // 0x2bd Func
	var_63_int = 1; // 0x2bf PushI
	var_28_int = var_28_int + var_63_int; // 0x2c0 Add2
	goto Label_644; // 0x2c1 Jump
	
Label_678:
	var_64_int = 1; // 0x2a6 PushI
	var_65_bool = var_29_int == var_64_int; // 0x2a7 Eq
	if(var_65_bool == 0) goto Label_692; // 0x2a8 JumpB
	var_66_int = 4; // 0x2a9 PushI
	rand(var_32_float, var_66_int); // 0x2aa Func
	var_67_int = 1; // 0x2ac PushI
	var_68_int = var_32_float + var_67_int; // 0x2ad Add
	Sleep(var_68_int, var_33_bool); // 0x2ae Func
	var_69_bool = var_33_bool == 0; // 0x2b0 Not
	if(var_69_bool == 0) goto Label_691; // 0x2b1 JumpB
	goto Label_706; // 0x2b2 Jump
	
Label_691:
	goto Label_695; // 0x2b3 Jump
	
Label_692:
	var_70_int = var_28_int; // 0x2b4 Push
	if(var_70_int == 0) goto Label_695; // 0x2b5 JumpB
	goto Label_706; // 0x2b6 Jump
}


func_1016(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0; // 0x3f8 PushV
	IsLoaded(var_15_bool); // 0x3f9 Func
	var_13_bool = var_15_bool; // 0x3fb Mov
	return 2; // 0x3fc Return
}


func_890(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; // 0x37a PushV
	var_42_bool = var_27_object == 0; // 0x37b NullEq
	if(var_42_bool == 0) goto Label_894; // 0x37c JumpB
	return 14; // 0x37d Return
	
Label_894:
	IsDead(var_35_bool); // 0x37e Func
	var_43_bool = var_35_bool; // 0x380 Push
	if(var_43_bool == 0) goto Label_899; // 0x381 JumpB
	return 14; // 0x382 Return
	
Label_899:
	GetSecondaryAnimationType(var_36_int); // 0x383 Func
	var_44_int = 0; // 0x385 PushI
	var_45_bool = var_36_int < var_44_int; // 0x386 LT
	if(var_45_bool == 0) goto Label_905; // 0x387 JumpB
	return 14; // 0x388 Return
	
Label_905:
	GetPosition(var_37_cvector); // 0x389 ObjFunc
	GetPosition(var_38_cvector); // 0x38b Func
	GetDirection(var_39_cvector); // 0x38d Func
	var_40_cvector = var_38_cvector - var_37_cvector; // 0x38f Sub2
	var_46_float = GetByIndex(var_40_cvector, 0); // 0x390 PushE
	var_47_float = GetByIndex(var_39_cvector, 0); // 0x391 PushE
	var_48_float = var_46_float * var_47_float; // 0x392 Mult
	var_49_float = GetByIndex(var_40_cvector, 2); // 0x393 PushE
	var_50_float = GetByIndex(var_39_cvector, 2); // 0x394 PushE
	var_51_float = var_49_float * var_50_float; // 0x395 Mult
	var_52_int = var_48_float + var_51_float; // 0x396 Add
	var_53_int = 0; // 0x397 PushI
	var_54_bool = var_52_int >= var_53_int; // 0x398 GE
	if(var_54_bool == 0) goto Label_924; // 0x399 JumpB
	var_41_string = "fhit"; // 0x39a MovS
	goto Label_925; // 0x39b Jump
	
Label_925:
	var_55_string = "hit_react"; // 0x39d PushS
	var_56_string = "1"; // 0x39e PushS
	var_57_int = var_41_string + var_56_string; // 0x39f Add
	var_58_string = "2"; // 0x3a0 PushS
	var_59_int = var_41_string + var_58_string; // 0x3a1 Add
	var_60_int = -10; // 0x3a2 PushI
	FadeSecondaryAnimation(var_55_string, var_57_int, var_59_int, var_60_int); // 0x3a3 Func
	return 14; // 0x3a5 Return
	
Label_924:
	var_41_string = "bhit"; // 0x39c MovS
}


func_1148()
{
	var_13_bool = 0; // 0x47c PushV
	func_1321(var_13_bool); // 0x47d NEW_2
	if(var_13_bool == 0) goto Label_1154; // 0x47f JumpB
	lshStopSpeech(); // 0x480 Func
	
Label_1154:
	return 0; // 0x482 Return
}


func_1277(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x4fd PushV
	var_79_string = "branch"; // 0x4fe PushS
	GetVariable(var_79_string, var_78_int); // 0x4ff Func
	var_80_int = 0; // 0x501 PushI
	var_81_bool = var_78_int == var_80_int; // 0x502 Eq
	if(var_81_bool == 0) goto Label_1287; // 0x503 JumpB
	var_76_int = 1; // 0x504 MovI
	return 2; // 0x505 Return
	
Label_1287:
	var_82_int = 1; // 0x507 PushI
	var_83_bool = var_78_int == var_82_int; // 0x508 Eq
	if(var_83_bool == 0) goto Label_1292; // 0x509 JumpB
	var_76_int = 2; // 0x50a MovI
	return 2; // 0x50b Return
	
Label_1292:
	var_76_int = 3; // 0x50c MovI
	return 2; // 0x50d Return
}


