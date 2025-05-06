task_0_event_26(var_0_string, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_string = "cleanup"; // 0x1 PushS
	var_14_bool = var_12_bool == var_13_string; // 0x2 Eq
	if(var_14_bool == 0) goto Label_11; // 0x3 JumpB
	var_15_object = Obj(); // 0x4 PushV
	func_1992(var_15_object); // 0x5 NEW_2
	RemoveActor(var_15_object); // 0x7 Func
	Hold(); // 0x9 Func
	
Label_11:
	return 0; // 0xb Return
}


task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	StopGroup0(); // 0x14 Func
	sync(); // 0x16 Func
	return 0; // 0x18 Return
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_bool)
{
	var_14_int = 1; // 0xf0 PushI
	if(var_14_int == 0) goto Label_543; // 0xf1 JumpB
	func_1831(); // 0xf3 NEW_2
	var_16_int = 41529; // 0xf5 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xf6 Eq
	if(var_17_bool == 0) goto Label_253; // 0xf7 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xf8 PushV
	var_18_object = var_1_object; // 0xf9 MovT
	var_19_object = var_0_object; // 0xfa MovT
	func_2149(); // 0xfb NEW_2
	
Label_253:
	var_43_int = 16575; // 0xfd PushI
	var_44_bool = var_13_bool == var_43_int; // 0xfe Eq
	if(var_44_bool == 0) goto Label_261; // 0xff JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x100 PushV
	var_45_object = var_1_object; // 0x101 MovT
	var_46_object = var_0_object; // 0x102 MovT
	func_2149(); // 0x103 NEW_2
	
Label_261:
	var_47_int = 16583; // 0x105 PushI
	var_48_bool = var_13_bool == var_47_int; // 0x106 Eq
	if(var_48_bool == 0) goto Label_269; // 0x107 JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0x108 PushV
	var_49_object = var_1_object; // 0x109 MovT
	var_50_object = var_0_object; // 0x10a MovT
	func_2154(); // 0x10b NEW_2
	
Label_269:
	var_57_int = 16570; // 0x10d PushI
	var_58_bool = var_12_cvector == var_57_int; // 0x10e Eq
	if(var_58_bool == 0) goto Label_352; // 0x10f JumpB
	var_59_bool = 0; var_60_object = Obj(); // 0x110 PushV
	var_60_object = var_1_object; // 0x111 MovT
	func_2161(var_60_object); // 0x112 NEW_2
	if(var_59_bool == 0) goto Label_307; // 0x114 JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x115 PushV
	var_67_object = var_1_object; // 0x116 MovT
	var_68_object = var_0_object; // 0x117 MovT
	func_2137(); // 0x118 NEW_2
	var_71_object = Obj(); var_72_object = Obj(); // 0x11a PushV
	var_71_object = var_1_object; // 0x11b MovT
	var_72_object = var_0_object; // 0x11c MovT
	func_2131(); // 0x11d NEW_2
	var_75_string = ""; // 0x11f PushV
	var_75_string = "Neutral"; // 0x120 MovS
	func_217(var_13_bool, var_75_string); // 0x121 NEW_2
	var_92_int = 515453; // 0x123 PushI
	SetMessage(var_92_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_93_int = 515454; // 0x128 PushI
	var_94_int = 16572; // 0x129 PushI
	var_95_int = 16571; // 0x12a PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x12b TObjFunc
	var_96_int = 539571; // 0x12d PushI
	var_97_int = 41513; // 0x12e PushI
	var_98_int = 41512; // 0x12f PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_99_bool = 0; var_100_object = Obj(); // 0x133 PushV
	var_100_object = var_1_object; // 0x134 MovT
	func_2173(var_100_object); // 0x135 NEW_2
	if(var_99_bool == 0) goto Label_337; // 0x137 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x138 PushV
	var_105_object = var_1_object; // 0x139 MovT
	var_106_object = var_0_object; // 0x13a MovT
	func_2143(); // 0x13b NEW_2
	var_109_string = ""; // 0x13d PushV
	var_109_string = "Neutral"; // 0x13e MovS
	func_217(var_13_bool, var_109_string); // 0x13f NEW_2
	var_110_int = 515459; // 0x141 PushI
	SetMessage(var_110_int); // 0x142 TObjFunc
	ClearReplies(); // 0x144 TObjFunc
	var_111_int = 515460; // 0x146 PushI
	var_112_int = 41515; // 0x147 PushI
	var_113_int = 16577; // 0x148 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x149 TObjFunc
	var_114_int = 539577; // 0x14b PushI
	var_115_int = 41519; // 0x14c PushI
	var_116_int = 41518; // 0x14d PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_117_string = ""; // 0x151 PushV
	var_117_string = "Neutral"; // 0x152 MovS
	func_217(var_13_bool, var_117_string); // 0x153 NEW_2
	var_118_int = 515465; // 0x155 PushI
	SetMessage(var_118_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_119_int = 515466; // 0x15a PushI
	var_120_int = -1; // 0x15b PushI
	var_121_int = 16583; // 0x15c PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x15d TObjFunc
	return 0; // 0x15f Return
	
Label_352:
	var_122_int = 41515; // 0x160 PushI
	var_123_bool = var_12_cvector == var_122_int; // 0x161 Eq
	if(var_123_bool == 0) goto Label_375; // 0x162 JumpB
	var_124_string = ""; // 0x163 PushV
	var_124_string = "Neutral"; // 0x164 MovS
	func_217(var_13_bool, var_124_string); // 0x165 NEW_2
	var_125_int = 539574; // 0x167 PushI
	SetMessage(var_125_int); // 0x168 TObjFunc
	ClearReplies(); // 0x16a TObjFunc
	var_126_int = 539575; // 0x16c PushI
	var_127_int = 41519; // 0x16d PushI
	var_128_int = 41516; // 0x16e PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x16f TObjFunc
	var_129_int = 539576; // 0x171 PushI
	var_130_int = 41519; // 0x172 PushI
	var_131_int = 41517; // 0x173 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x174 TObjFunc
	return 0; // 0x176 Return
	
Label_375:
	var_132_int = 41519; // 0x177 PushI
	var_133_bool = var_12_cvector == var_132_int; // 0x178 Eq
	if(var_133_bool == 0) goto Label_398; // 0x179 JumpB
	var_134_string = ""; // 0x17a PushV
	var_134_string = "Neutral"; // 0x17b MovS
	func_217(var_13_bool, var_134_string); // 0x17c NEW_2
	var_135_int = 539578; // 0x17e PushI
	SetMessage(var_135_int); // 0x17f TObjFunc
	ClearReplies(); // 0x181 TObjFunc
	var_136_int = 539579; // 0x183 PushI
	var_137_int = -1; // 0x184 PushI
	var_138_int = 41522; // 0x185 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x186 TObjFunc
	var_139_int = 539580; // 0x188 PushI
	var_140_int = -1; // 0x189 PushI
	var_141_int = 41523; // 0x18a PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x18b TObjFunc
	return 0; // 0x18d Return
	
Label_398:
	var_142_int = 41513; // 0x18e PushI
	var_143_bool = var_12_cvector == var_142_int; // 0x18f Eq
	if(var_143_bool == 0) goto Label_421; // 0x190 JumpB
	var_144_string = ""; // 0x191 PushV
	var_144_string = "Neutral"; // 0x192 MovS
	func_217(var_13_bool, var_144_string); // 0x193 NEW_2
	var_145_int = 539572; // 0x195 PushI
	SetMessage(var_145_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_146_int = 539878; // 0x19a PushI
	var_147_int = 41840; // 0x19b PushI
	var_148_int = 41833; // 0x19c PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x19d TObjFunc
	var_149_int = 539573; // 0x19f PushI
	var_150_int = 16572; // 0x1a0 PushI
	var_151_int = 41514; // 0x1a1 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1a2 TObjFunc
	return 0; // 0x1a4 Return
	
Label_421:
	var_152_int = 16572; // 0x1a5 PushI
	var_153_bool = var_12_cvector == var_152_int; // 0x1a6 Eq
	if(var_153_bool == 0) goto Label_444; // 0x1a7 JumpB
	var_154_string = ""; // 0x1a8 PushV
	var_154_string = "Neutral"; // 0x1a9 MovS
	func_217(var_13_bool, var_154_string); // 0x1aa NEW_2
	var_155_int = 515455; // 0x1ac PushI
	SetMessage(var_155_int); // 0x1ad TObjFunc
	ClearReplies(); // 0x1af TObjFunc
	var_156_int = 515456; // 0x1b1 PushI
	var_157_int = 16574; // 0x1b2 PushI
	var_158_int = 16573; // 0x1b3 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x1b4 TObjFunc
	var_159_int = 539581; // 0x1b6 PushI
	var_160_int = 16574; // 0x1b7 PushI
	var_161_int = 41525; // 0x1b8 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x1b9 TObjFunc
	return 0; // 0x1bb Return
	
Label_444:
	var_162_int = 16574; // 0x1bc PushI
	var_163_bool = var_12_cvector == var_162_int; // 0x1bd Eq
	if(var_163_bool == 0) goto Label_467; // 0x1be JumpB
	var_164_string = ""; // 0x1bf PushV
	var_164_string = "Neutral"; // 0x1c0 MovS
	func_217(var_13_bool, var_164_string); // 0x1c1 NEW_2
	var_165_int = 515457; // 0x1c3 PushI
	SetMessage(var_165_int); // 0x1c4 TObjFunc
	ClearReplies(); // 0x1c6 TObjFunc
	var_166_int = 539582; // 0x1c8 PushI
	var_167_int = 41528; // 0x1c9 PushI
	var_168_int = 41527; // 0x1ca PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1cb TObjFunc
	var_169_int = 539880; // 0x1cd PushI
	var_170_int = 41836; // 0x1ce PushI
	var_171_int = 41835; // 0x1cf PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x1d0 TObjFunc
	return 0; // 0x1d2 Return
	
Label_467:
	var_172_int = 41836; // 0x1d3 PushI
	var_173_bool = var_12_cvector == var_172_int; // 0x1d4 Eq
	if(var_173_bool == 0) goto Label_490; // 0x1d5 JumpB
	var_174_string = ""; // 0x1d6 PushV
	var_174_string = "Neutral"; // 0x1d7 MovS
	func_217(var_13_bool, var_174_string); // 0x1d8 NEW_2
	var_175_int = 539881; // 0x1da PushI
	SetMessage(var_175_int); // 0x1db TObjFunc
	ClearReplies(); // 0x1dd TObjFunc
	var_176_int = 539882; // 0x1df PushI
	var_177_int = 41528; // 0x1e0 PushI
	var_178_int = 41837; // 0x1e1 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x1e2 TObjFunc
	var_179_int = 539883; // 0x1e4 PushI
	var_180_int = 41840; // 0x1e5 PushI
	var_181_int = 41839; // 0x1e6 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x1e7 TObjFunc
	return 0; // 0x1e9 Return
	
Label_490:
	var_182_int = 41840; // 0x1ea PushI
	var_183_bool = var_12_cvector == var_182_int; // 0x1eb Eq
	if(var_183_bool == 0) goto Label_508; // 0x1ec JumpB
	var_184_string = ""; // 0x1ed PushV
	var_184_string = "Neutral"; // 0x1ee MovS
	func_217(var_13_bool, var_184_string); // 0x1ef NEW_2
	var_185_int = 539884; // 0x1f1 PushI
	SetMessage(var_185_int); // 0x1f2 TObjFunc
	ClearReplies(); // 0x1f4 TObjFunc
	var_186_int = 539885; // 0x1f6 PushI
	var_187_int = 41528; // 0x1f7 PushI
	var_188_int = 41842; // 0x1f8 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x1f9 TObjFunc
	return 0; // 0x1fb Return
	
Label_508:
	var_189_int = 41528; // 0x1fc PushI
	var_190_bool = var_12_cvector == var_189_int; // 0x1fd Eq
	if(var_190_bool == 0) goto Label_531; // 0x1fe JumpB
	var_191_string = ""; // 0x1ff PushV
	var_191_string = "Neutral"; // 0x200 MovS
	func_217(var_13_bool, var_191_string); // 0x201 NEW_2
	var_192_int = 539583; // 0x203 PushI
	SetMessage(var_192_int); // 0x204 TObjFunc
	ClearReplies(); // 0x206 TObjFunc
	var_193_int = 539584; // 0x208 PushI
	var_194_int = -1; // 0x209 PushI
	var_195_int = 41529; // 0x20a PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x20b TObjFunc
	var_196_int = 515458; // 0x20d PushI
	var_197_int = -1; // 0x20e PushI
	var_198_int = 16575; // 0x20f PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x210 TObjFunc
	return 0; // 0x212 Return
	
Label_531:
	var_3_string = 1; // 0x213 TMovB
	var_199_bool = 0; // 0x214 PushV
	func_2802(var_199_bool); // 0x215 NEW_2
	if(var_199_bool == 0) goto Label_539; // 0x217 JumpB
	lshStopAnimation(); // 0x218 Func
	goto Label_541; // 0x21a Jump
	
Label_541:
	return 0; // 0x21d Return
	
Label_539:
	StopAnimation(); // 0x21b Func
	
Label_543:
	return 0; // 0x21f Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x240 PushV
	IsOverrideActive(var_14_bool); // 0x241 Func
	var_15_bool = var_14_bool == 0; // 0x243 Not
	if(var_15_bool == 0) goto Label_585; // 0x244 JumpB
	var_16_object = Obj(); // 0x245 PushV
	var_16_object = var_12_bool; // 0x246 Mov
	func_2262(var_16_object); // 0x247 NEW_2
	
Label_585:
	return 2; // 0x249 Return
}


task_3_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_float, var_8_float, var_9_object, var_10_object, var_11_object, var_12_bool, var_13_cvector, var_14_cvector, var_15_bool)
{
	return 0; // 0x2c0 Return
}


task_3_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_string, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_cvector, var_12_cvector, var_13_bool)
{
	return 0; // 0x2c2 Return
}


task_3_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	return 0; // 0x2c4 Return
}


task_4_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	func_733(); // 0x2e7 NEW_2
	var_14_object = Obj(); // 0x2e9 PushV
	var_14_object = var_12_bool; // 0x2ea Mov
	func_2427(); // 0x2eb NEW_2
	return 0; // 0x2ed Return
}


task_4_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = var_12_bool == var_0_object; // 0x2ef Eq
	if(var_13_bool == 0) goto Label_758; // 0x2f0 JumpB
	var_14_int = 100; // 0x2f1 PushI
	KillTimer(var_14_int); // 0x2f2 Func
	Face(var_0_object); // 0x2f4 Func
	
Label_758:
	return 0; // 0x2f6 Return
}


task_4_event_4(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = var_12_bool == var_0_object; // 0x2f8 Eq
	if(var_13_bool == 0) goto Label_770; // 0x2f9 JumpB
	var_14_int = 100; // 0x2fa PushI
	var_15_float = 3.0; // 0x2fb PushF
	SetTimer(var_14_int, var_15_float); // 0x2fc Func
	var_16_object = Obj(); // 0x2fe PushV
	var_16_object = var_0_object; // 0x2ff MovT
	func_1690(); // 0x300 NEW_2
	
Label_770:
	return 0; // 0x302 Return
}


	task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_101_object)
	{
	var_102_bool = 0; var_103_object = Obj(); // 0x304 PushV
	var_103_object = var_101_object; // 0x305 Mov
	func_1540(var_102_bool, var_103_object); // 0x306 NEW_2
	var_130_bool = var_102_bool == 0; // 0x308 Not
	if(var_130_bool == 0) goto Label_783; // 0x309 JumpB
	var_131_object = Obj(); // 0x30a PushV
	var_131_object = var_101_object; // 0x30b Mov
	func_2599(var_131_object); // 0x30c NEW_2
	return 0; // 0x30e Return
	
Label_783:
	func_733(); // 0x310 NEW_2
	var_147_object = Obj(); // 0x312 PushV
	var_147_object = var_101_object; // 0x313 Mov
	func_2623(var_147_object); // 0x314 NEW_2
	return 0; // 0x316 Return
	}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0; // 0x318 PushV
	var_16_object = var_12_cvector; // 0x319 Mov
	var_17_object = var_13_cvector; // 0x31a Mov
	var_18_bool = var_14_bool; // 0x31b Mov
	func_2742(var_15_bool, var_16_object, var_17_object, var_18_bool); // 0x31c NEW_2
	if(var_15_bool == 0) goto Label_803; // 0x31e JumpB
	var_101_object = Obj(); // 0x31f PushV
	var_101_object = var_12_cvector; // 0x320 Mov
	func_771(); // 0x321 NEW_2
	
Label_803:
	return 0; // 0x323 Return
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x325 PushV
	var_14_object = var_12_bool; // 0x326 Mov
	func_2714(var_13_bool, var_14_object); // 0x327 NEW_2
	if(var_13_bool == 0) goto Label_817; // 0x329 JumpB
	func_733(); // 0x32b NEW_2
	var_133_object = Obj(); // 0x32d PushV
	var_133_object = var_12_bool; // 0x32e Mov
	func_2736(var_133_object); // 0x32f NEW_2
	
Label_817:
	return 0; // 0x331 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_int, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_int = 100; // 0x333 PushI
	var_14_bool = var_12_bool != var_13_int; // 0x334 Neq
	if(var_14_bool == 0) goto Label_823; // 0x335 JumpB
	return 0; // 0x336 Return
	
Label_823:
	var_15_int = 100; // 0x337 PushI
	KillTimer(var_15_int); // 0x338 Func
	StopGroup0(); // 0x33a Func
	return 0; // 0x33c Return
}


task_5_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; // 0x3ce PushV
	var_13_bool = 0; // 0x3cf MovB
	var_14_object = var_2_object; // 0x3d0 PushT
	if(var_14_object == 0) goto Label_981; // 0x3d1 JumpB
	var_15_bool = var_12_bool == var_0_object; // 0x3d2 Eq
	if(var_15_bool == 0) goto Label_981; // 0x3d3 JumpB
	var_13_bool = 1; // 0x3d4 MovB
	
Label_981:
	if(var_13_bool == 0) goto Label_986; // 0x3d5 JumpB
	var_16_object = Obj(); // 0x3d6 PushV
	var_16_object = var_0_object; // 0x3d7 MovT
	func_1690(); // 0x3d8 NEW_2
	
Label_986:
	return 0; // 0x3da Return
}


task_5_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; // 0x3dc PushV
	var_13_bool = 0; // 0x3dd MovB
	var_14_object = var_2_object; // 0x3de PushT
	if(var_14_object == 0) goto Label_995; // 0x3df JumpB
	var_15_bool = var_12_bool == var_0_object; // 0x3e0 Eq
	if(var_15_bool == 0) goto Label_995; // 0x3e1 JumpB
	var_13_bool = 1; // 0x3e2 MovB
	
Label_995:
	if(var_13_bool == 0) goto Label_1003; // 0x3e3 JumpB
	var_16_string = "@Stop hunt"; // 0x3e4 PushS
	Trace(var_16_string); // 0x3e5 Func
	StopAnimation(); // 0x3e7 Func
	StopGroup0(); // 0x3e9 Func
	
Label_1003:
	return 0; // 0x3eb Return
}


	task_5_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_101_object)
	{
	var_102_bool = 0; var_103_object = Obj(); // 0x46e PushV
	var_103_object = var_101_object; // 0x46f Mov
	func_1540(var_102_bool, var_103_object); // 0x470 NEW_2
	var_130_bool = var_102_bool == 0; // 0x472 Not
	if(var_130_bool == 0) goto Label_1141; // 0x473 JumpB
	return 0; // 0x474 Return
	
Label_1141:
	var_131_object = Obj(); // 0x475 PushV
	var_131_object = var_101_object; // 0x476 Mov
	func_2599(var_131_object); // 0x477 NEW_2
	var_146_bool = var_101_object == var_0_object; // 0x479 Eq
	if(var_146_bool == 0) goto Label_1149; // 0x47a JumpB
	var_1_object = 0; // 0x47b SetNullT
	goto Label_1156; // 0x47c Jump
	
Label_1156:
	return 0; // 0x484 Return
	
Label_1149:
	var_1_object = var_101_object; // 0x47d TMov
	var_147_object = var_2_object; // 0x47e PushT
	if(var_147_object == 0) goto Label_1156; // 0x47f JumpB
	StopAnimation(); // 0x480 Func
	StopGroup0(); // 0x482 Func
	}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0; // 0x486 PushV
	var_16_object = var_12_cvector; // 0x487 Mov
	var_17_object = var_13_cvector; // 0x488 Mov
	var_18_bool = var_14_bool; // 0x489 Mov
	func_2742(var_15_bool, var_16_object, var_17_object, var_18_bool); // 0x48a NEW_2
	if(var_15_bool == 0) goto Label_1169; // 0x48c JumpB
	var_101_object = Obj(); // 0x48d PushV
	var_101_object = var_12_cvector; // 0x48e Mov
	func_1133(); // 0x48f NEW_2
	
Label_1169:
	return 0; // 0x491 Return
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x4ab PushV
	var_15_object = GlobalVars[0]; // 0x4ac PushGE
	in(var_14_bool, var_12_object); // 0x4ad ObjFunc
	var_16_bool = var_14_bool == 0; // 0x4af Not
	if(var_16_bool == 0) goto Label_1205; // 0x4b0 JumpB
	var_17_object = Obj(); // 0x4b1 PushV
	var_17_object = var_12_object; // 0x4b2 Mov
	func_1170(var_17_object); // 0x4b3 NEW_2
	
Label_1205:
	return 2; // 0x4b5 Return
}


task_6_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x4b6 PushV
	var_15_string = "attack"; // 0x4b7 PushS
	var_16_bool = var_12_string == var_15_string; // 0x4b8 Eq
	if(var_16_bool == 0) goto Label_1223; // 0x4b9 JumpB
	var_17_object = Obj(); // 0x4ba PushV
	func_1402(var_17_object); // 0x4bb NEW_2
	var_14_object = var_17_object; // 0x4bc Mov
	func_1367(); // 0x4bf NEW_2
	var_21_object = Obj(); // 0x4c1 PushV
	var_21_object = var_14_object; // 0x4c2 Mov
	func_2623(var_21_object); // 0x4c3 NEW_2
	var_14_object = 0; // 0x4c5 SetNull
	goto Label_1227; // 0x4c6 Jump
	
Label_1227:
	return 2; // 0x4cb Return
	
Label_1223:
	var_294_string = "cleanup"; // 0x4c7 PushS
	var_295_bool = var_12_string == var_294_string; // 0x4c8 Eq
	if(var_295_bool == 0) goto Label_1227; // 0x4c9 JumpB
	var_2_object = 1; // 0x4ca TMovB
}


task_6_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_string = ""; var_15_string = ""; // 0x4cd PushV
	var_14_string = "quest_d10_01"; // 0x4ce MovS
	var_15_string = "soldier_fight"; // 0x4cf MovS
	func_2099(var_13_bool, var_14_string, var_15_string); // 0x4d0 NEW_2
	return 0; // 0x4d2 Return
}


task_6_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_bool)
{
	return 0; // 0x4d4 Return
}


task_6_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x4d5 PushV
	var_15_bool = 0; var_16_object = Obj(); // 0x4d6 PushV
	var_16_object = var_12_object; // 0x4d7 Mov
	func_1540(var_15_bool, var_16_object); // 0x4d8 NEW_2
	var_49_bool = var_15_bool == 0; // 0x4da Not
	if(var_49_bool == 0) goto Label_1245; // 0x4db JumpB
	return 2; // 0x4dc Return
	
Label_1245:
	var_50_object = GlobalVars[0]; // 0x4dd PushGE
	in(var_14_bool, var_12_object); // 0x4de ObjFunc
	var_51_bool = var_14_bool; // 0x4e0 Push
	if(var_51_bool == 0) goto Label_1259; // 0x4e1 JumpB
	func_1367(); // 0x4e3 NEW_2
	var_52_object = Obj(); // 0x4e5 PushV
	var_52_object = var_12_object; // 0x4e6 Mov
	TaskCall(4); // 0x4e7 TaskCall
	func_709(var_53_object, var_52_object); // 0x4e8 NEW_2
	TaskReturn(); // 0x4e9 TaskReturn
	
Label_1259:
	return 2; // 0x4eb Return
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x4f6 PushV
	var_14_object = var_12_object; // 0x4f7 Mov
	func_2714(var_13_bool, var_14_object); // 0x4f8 NEW_2
	if(var_13_bool == 0) goto Label_1282; // 0x4fa JumpB
	func_1367(); // 0x4fc NEW_2
	var_132_object = Obj(); // 0x4fe PushV
	var_132_object = var_12_object; // 0x4ff Mov
	func_2768(var_132_object); // 0x500 NEW_2
	
Label_1282:
	return 0; // 0x502 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; // 0x95d PushV
	var_16_object = var_12_object; // 0x95e Mov
	var_17_int = var_13_int; // 0x95f Mov
	var_18_float = var_14_float; // 0x960 Mov
	func_1608(var_16_object, var_17_int, var_18_float); // 0x961 NEW_2
	return 0; // 0x963 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0x965 PushV
	var_18_object = var_12_object; // 0x966 Mov
	var_19_int = var_13_int; // 0x967 Mov
	var_20_float = var_14_float; // 0x968 Mov
	var_21_cvector = var_16_cvector; // 0x969 Mov
	var_22_cvector = var_17_cvector; // 0x96a Mov
	func_1676(var_20_float, var_21_cvector, var_22_cvector); // 0x96b NEW_2
	return 0; // 0x96d Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0; // 0x96e PushV
	var_16_string = "health"; // 0x96f PushS
	var_17_bool = var_13_string == var_16_string; // 0x970 Eq
	if(var_17_bool == 0) goto Label_2426; // 0x971 JumpB
	var_18_string = "health"; // 0x972 PushS
	GetProperty(var_18_string, var_15_float); // 0x973 Func
	var_19_int = 0; // 0x975 PushI
	var_20_bool = var_15_float <= var_19_int; // 0x976 LE
	if(var_20_bool == 0) goto Label_2426; // 0x977 JumpB
	SignalDeath(var_12_object); // 0x978 Func
	
Label_2426:
	return 2; // 0x97a Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x97c PushV
	var_14_object = var_12_object; // 0x97d Mov
	func_1409(var_13_bool, var_14_object); // 0x97e NEW_2
	if(var_13_bool == 0) goto Label_2440; // 0x980 JumpB
	var_17_object = Obj(); // 0x981 PushV
	func_1992(var_17_object); // 0x982 NEW_2
	var_20_float = 0.0; // 0x984 PushF
	var_21_bool = 1; // 0x985 PushB
	ReportReputationChange(var_12_object, var_17_object, var_20_float, var_21_bool); // 0x986 Func
	
Label_2440:
	var_22_object = Obj(); // 0x988 PushV
	var_22_object = var_12_object; // 0x989 Mov
	func_2788(var_22_object); // 0x98a NEW_2
	return 0; // 0x98c Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_object = Obj(); // 0xadc PushV
	func_1992(var_12_object); // 0xadd NEW_2
	RemoveActor(var_12_object); // 0xadf Func
	Hold(); // 0xae1 Func
	return 0; // 0xae3 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_bool = 0; // 0x49d PushV
	func_1708(var_12_bool); // 0x49e NEW_2
	var_15_bool = var_12_bool == 0; // 0x4a0 Not
	if(var_15_bool == 0) goto Label_1191; // 0x4a1 JumpB
	TaskCall(0); // 0x4a3 TaskCall
	func_12(); // 0x4a4 NEW_2
	TaskReturn(); // 0x4a5 TaskReturn
	
Label_1191:
	func_1260(); // 0x4a8 NEW_2
	return 0; // 0x4aa Return
}


func_2050(var_219_float, var_220_cvector)
{
	var_221_float = GetByIndex(var_220_cvector, 0); // 0x803 PushE
	var_222_float = GetByIndex(var_220_cvector, 0); // 0x804 PushE
	var_223_float = var_221_float * var_222_float; // 0x805 Mult
	var_224_float = GetByIndex(var_220_cvector, 2); // 0x806 PushE
	var_225_float = GetByIndex(var_220_cvector, 2); // 0x807 PushE
	var_226_float = var_224_float * var_225_float; // 0x808 Mult
	var_227_int = var_223_float + var_226_float; // 0x809 Add
	var_219_float = sqrt(var_227_int); // 0x80a Sqrt2
	return 0; // 0x80b Return
}


func_1540(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0; // 0x604 PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x605 PushV
	var_22_object = var_18_object; // 0x606 Mov
	func_1504(var_21_bool, var_22_object); // 0x607 NEW_2
	var_38_bool = var_21_bool == 0; // 0x609 Not
	if(var_38_bool == 0) goto Label_1549; // 0x60a JumpB
	var_17_bool = 0; // 0x60b MovB
	return 2; // 0x60c Return
	
Label_1549:
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x60d PushV
	var_40_object = var_18_object; // 0x60e Mov
	var_41_string = "noaccess"; // 0x60f MovS
	func_1414(var_39_bool, var_40_object, var_41_string); // 0x610 NEW_2
	var_48_bool = var_39_bool == 0; // 0x612 Not
	if(var_48_bool == 0) goto Label_1558; // 0x613 JumpB
	var_17_bool = 1; // 0x614 MovB
	return 2; // 0x615 Return
	
Label_1558:
	var_49_string = "noaccess"; // 0x616 PushS
	GetProperty(var_49_string, var_20_int); // 0x617 ObjFunc
	var_50_int = 0; // 0x619 PushI
	var_17_bool = var_20_int == var_50_int; // 0x61a Eq2
	return 2; // 0x61b Return
}


func_2060(var_207_float, var_208_cvector, var_209_cvector)
{
	var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); // 0x80d PushV
	var_211_cvector = var_208_cvector; // 0x80e Mov
	var_212_cvector = var_209_cvector; // 0x80f Mov
	func_2041(var_210_float, var_211_cvector, var_212_cvector); // 0x810 NEW_2
	var_219_float = 0; var_220_cvector = CVector(0,0,0); // 0x812 PushV
	var_220_cvector = var_208_cvector; // 0x813 Mov
	func_2050(var_219_float, var_220_cvector); // 0x814 NEW_2
	var_228_float = 0; var_229_cvector = CVector(0,0,0); // 0x816 PushV
	var_229_cvector = var_209_cvector; // 0x817 Mov
	func_2050(var_228_float, var_229_cvector); // 0x818 NEW_2
	var_230_float = var_219_float * var_228_float; // 0x81a Mult
	var_207_float = var_210_float / var_210_float; // 0x81b Div2
	return 0; // 0x81c Return
}


func_12()
{
	
Label_12:
	Hold(); // 0xc Func
	var_16_bool = 0; // 0xe PushV
	func_1708(var_16_bool); // 0xf NEW_2
	var_17_bool = var_16_bool == 0; // 0x11 Not
	if(var_17_bool == 0) goto Label_12; // 0x12 JumpB
	return 0; // 0x13 Return
}


func_2581()
{
	var_18_object = GlobalVars[0]; // 0xa15 PushGE
	var_19_object = Obj(); // 0xa16 PushV
	func_2035(var_19_object); // 0xa17 NEW_2
	var_18_object = var_19_object; // 0xa18 Mov
	GlobalVars[0] = var_18_object; // 0xa1a PopGE
	return 0; // 0xa1b Return
}


func_25(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x19 PushV
	var_0_object = var_19_object; // 0x1a TMov
	var_29_bool = 0; var_30_object = Obj(); var_31_float = 0; // 0x1b PushV
	var_30_object = var_19_object; // 0x1c Mov
	var_31_float = 70.0; // 0x1d MovF
	func_1713(var_30_object, var_31_float); // 0x1e NEW_2
	var_76_bool = var_29_bool == 0; // 0x20 Not
	if(var_76_bool == 0) goto Label_36; // 0x21 JumpB
	var_18_int = -2; // 0x22 MovI
	return 8; // 0x23 Return
	
Label_36:
	CreateDialog(var_25_object); // 0x24 Func
	var_77_int = 0; // 0x26 PushV
	func_2796(var_77_int); // 0x27 NEW_2
	SetNPCName(var_77_int); // 0x29 ObjFunc
	var_78_int = 0; // 0x2b PushV
	func_2794(var_78_int); // 0x2c NEW_2
	SetNPCDescription(var_78_int); // 0x2e ObjFunc
	var_79_string = ""; // 0x30 PushV
	func_2798(var_79_string); // 0x31 NEW_2
	SetPhoto(var_79_string); // 0x33 ObjFunc
	var_80_string = ""; // 0x35 PushV
	func_2800(var_80_string); // 0x36 NEW_2
	SetPhoto2(var_80_string); // 0x38 ObjFunc
	var_81_int = 0; // 0x3a PushV
	func_2239(var_81_int); // 0x3b NEW_2
	SetPlayerName(var_81_int); // 0x3d ObjFunc
	var_27_int = -1; // 0x3f MovI
	IsOverrideActive(var_26_bool); // 0x40 Func
	var_89_bool = var_26_bool; // 0x42 Push
	if(var_89_bool == 0) goto Label_70; // 0x43 JumpB
	var_18_int = -2; // 0x44 MovI
	return 8; // 0x45 Return
	
Label_70:
	DoDialog(var_25_object); // 0x46 Func
	var_90_object = Obj(); var_91_object = Obj(); // 0x48 PushV
	var_90_object = var_19_object; // 0x49 Mov
	var_91_object = var_25_object; // 0x4a Mov
	TaskCall(2); // 0x4b TaskCall
	func_99(var_92_object, var_93_object, var_94_string, var_95_bool, var_90_object, var_91_object); // 0x4c NEW_2
	TaskReturn(); // 0x4d TaskReturn
	IsDialogEnd(var_28_bool); // 0x4f ObjFunc
	
Label_81:
	var_178_bool = var_28_bool == 0; // 0x51 Not
	if(var_178_bool == 0) goto Label_88; // 0x52 JumpB
	sync(); // 0x53 Func
	IsDialogEnd(var_28_bool); // 0x55 ObjFunc
	goto Label_81; // 0x57 Jump
	
Label_88:
	var_179_object = Obj(); // 0x58 PushV
	var_179_object = var_19_object; // 0x59 Mov
	func_1782(); // 0x5a NEW_2
	StopDialog(var_25_object); // 0x5c Func
	GetReturnValue(var_27_int); // 0x5e ObjFunc
	var_18_int = var_27_int; // 0x60 Mov
	return 8; // 0x61 Return
}


func_2588(var_137_object, var_138_bool)
{
	var_139_object = Obj(); var_140_bool = 0; // 0xa1d PushV
	var_139_object = var_137_object; // 0xa1e Mov
	var_140_bool = var_138_bool; // 0xa1f Mov
	TaskCall(5); // 0xa20 TaskCall
	func_829(var_141_object, var_142_object, var_143_bool, var_139_object, var_140_bool); // 0xa21 NEW_2
	TaskReturn(); // 0xa22 TaskReturn
	ResetAAS(); // 0xa24 Func
	return 0; // 0xa26 Return
}


func_2077(var_99_int, var_100_string)
{
	var_101_int = 0; var_102_int = 0; // 0x81d PushV
	GetVariable(var_100_string, var_102_int); // 0x81e Func
	var_99_int = var_102_int; // 0x820 Mov
	return 2; // 0x821 Return
}


func_1564(var_29_object)
{
	var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; // 0x61c PushV
	var_44_bool = var_29_object == 0; // 0x61d NullEq
	if(var_44_bool == 0) goto Label_1568; // 0x61e JumpB
	return 14; // 0x61f Return
	
Label_1568:
	IsDead(var_37_bool); // 0x620 Func
	var_45_bool = var_37_bool; // 0x622 Push
	if(var_45_bool == 0) goto Label_1573; // 0x623 JumpB
	return 14; // 0x624 Return
	
Label_1573:
	GetSecondaryAnimationType(var_38_int); // 0x625 Func
	var_46_int = 0; // 0x627 PushI
	var_47_bool = var_38_int < var_46_int; // 0x628 LT
	if(var_47_bool == 0) goto Label_1579; // 0x629 JumpB
	return 14; // 0x62a Return
	
Label_1579:
	GetPosition(var_39_cvector); // 0x62b ObjFunc
	GetPosition(var_40_cvector); // 0x62d Func
	GetDirection(var_41_cvector); // 0x62f Func
	var_42_cvector = var_40_cvector - var_39_cvector; // 0x631 Sub2
	var_48_float = GetByIndex(var_42_cvector, 0); // 0x632 PushE
	var_49_float = GetByIndex(var_41_cvector, 0); // 0x633 PushE
	var_50_float = var_48_float * var_49_float; // 0x634 Mult
	var_51_float = GetByIndex(var_42_cvector, 2); // 0x635 PushE
	var_52_float = GetByIndex(var_41_cvector, 2); // 0x636 PushE
	var_53_float = var_51_float * var_52_float; // 0x637 Mult
	var_54_int = var_50_float + var_53_float; // 0x638 Add
	var_55_int = 0; // 0x639 PushI
	var_56_bool = var_54_int >= var_55_int; // 0x63a GE
	if(var_56_bool == 0) goto Label_1598; // 0x63b JumpB
	var_43_string = "fhit"; // 0x63c MovS
	goto Label_1599; // 0x63d Jump
	
Label_1599:
	var_57_string = "hit_react"; // 0x63f PushS
	var_58_string = "1"; // 0x640 PushS
	var_59_int = var_43_string + var_58_string; // 0x641 Add
	var_60_string = "2"; // 0x642 PushS
	var_61_int = var_43_string + var_60_string; // 0x643 Add
	var_62_int = -10; // 0x644 PushI
	FadeSecondaryAnimation(var_57_string, var_59_int, var_61_int, var_62_int); // 0x645 Func
	return 14; // 0x647 Return
	
Label_1598:
	var_43_string = "bhit"; // 0x63e MovS
}


func_544(var_24_object)
{
	var_25_bool = 0; var_26_object = Obj(); // 0x221 PushV
	var_26_object = var_24_object; // 0x222 Mov
	func_1409(var_25_bool, var_26_object); // 0x223 NEW_2
	if(var_25_bool == 0) goto Label_553; // 0x225 JumpB
	func_2347(); // 0x227 NEW_2
	
Label_553:
	func_2323(); // 0x22a NEW_2
	var_103_object = Obj(); // 0x22c PushV
	var_103_object = var_24_object; // 0x22d Mov
	func_561(var_103_object); // 0x22e NEW_2
	return 0; // 0x230 Return
}


func_2082(var_308_float)
{
	var_309_object = Obj(); var_310_object = Obj(); // 0x822 PushV
	CreateFloatVector(var_310_object); // 0x823 Func
	add(var_308_float); // 0x825 ObjFunc
	var_311_int = 0; // 0x827 PushI
	var_312_bool = var_308_float < var_311_int; // 0x828 LT
	if(var_312_bool == 0) goto Label_2094; // 0x829 JumpB
	var_313_float = 0.7; // 0x82a PushF
	var_314_int = 500; // 0x82b PushI
	RumblePlay(var_313_float, var_314_int); // 0x82c Func
	
Label_2094:
	var_315_int = 15; // 0x82e PushI
	SendWorldWndMessage(var_315_int, var_310_object); // 0x82f Func
	return 2; // 0x831 Return
}


func_2599(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0xa27 PushV
	var_25_bool = var_22_object == 0; // 0xa28 NullEq
	if(var_25_bool == 0) goto Label_2603; // 0xa29 JumpB
	return 2; // 0xa2a Return
	
Label_2603:
	var_26_object = GlobalVars[0]; // 0xa2b PushGE
	in(var_24_bool, var_22_object); // 0xa2c ObjFunc
	var_27_bool = var_24_bool == 0; // 0xa2e Not
	if(var_27_bool == 0) goto Label_2611; // 0xa2f JumpB
	var_28_object = GlobalVars[0]; // 0xa30 PushGE
	add(var_22_object); // 0xa31 ObjFunc
	
Label_2611:
	var_29_bool = 0; var_30_object = Obj(); // 0xa33 PushV
	var_30_object = var_22_object; // 0xa34 Mov
	func_1409(var_29_bool, var_30_object); // 0xa35 NEW_2
	if(var_29_bool == 0) goto Label_2622; // 0xa37 JumpB
	var_33_object = Obj(); // 0xa38 PushV
	func_1992(var_33_object); // 0xa39 NEW_2
	var_36_float = 0.0; // 0xa3b PushF
	ReportReputationChange(var_22_object, var_33_object, var_36_float); // 0xa3c Func
	
Label_2622:
	return 2; // 0xa3e Return
}


func_561(var_103_object)
{
	EventDisable(0); // 0x232 EventDisable
	var_104_object = Obj(); // 0x233 PushV
	var_104_object = var_103_object; // 0x234 Mov
	func_586(var_104_object); // 0x235 NEW_2
	var_184_int = 50; // 0x237 PushI
	var_185_int = 40; // 0x238 PushI
	SetRTEnvelope(var_184_int, var_185_int); // 0x239 Func
	EventEnable(0); // 0x23b EventEnable
	
Label_572:
	Hold(); // 0x23c Func
	goto Label_572; // 0x23e Jump
}


func_2099(var_13_bool, var_14_string, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x833 PushV
	FindActor(var_17_object, var_14_string); // 0x834 Func
	var_18_bool = var_17_object == 0; // 0x836 NullEq
	if(var_18_bool == 0) goto Label_2106; // 0x837 JumpB
	var_13_bool = 0; // 0x838 MovB
	return 2; // 0x839 Return
	
Label_2106:
	Trigger(var_17_object, var_15_string); // 0x83a Func
	var_13_bool = 1; // 0x83c MovB
	return 2; // 0x83d Return
}


func_2623(var_21_object)
{
	var_22_object = Obj(); // 0xa40 PushV
	var_22_object = var_21_object; // 0xa41 Mov
	func_2599(var_22_object); // 0xa42 NEW_2
	var_37_object = Obj(); var_38_bool = 0; // 0xa44 PushV
	var_37_object = var_21_object; // 0xa45 Mov
	var_38_bool = 1; // 0xa46 MovB
	func_2588(var_37_object, var_38_bool); // 0xa47 NEW_2
	return 0; // 0xa49 Return
}


func_2111(var_148_object)
{
	var_149_bool = 0; var_150_bool = 0; // 0x83f PushV
	IsPlayerActor(var_148_object, var_150_bool); // 0x840 Func
	var_151_bool = var_150_bool; // 0x842 Push
	if(var_151_bool == 0) goto Label_2119; // 0x843 JumpB
	var_152_string = "attack"; // 0x844 PushS
	PlayGlobalMusic(var_152_string); // 0x845 Func
	
Label_2119:
	return 2; // 0x847 Return
}


func_2120()
{
	var_153_object = Obj(); var_154_object = Obj(); // 0x848 PushV
	GetScene(var_154_object); // 0x849 Func
	var_155_string = "battle"; // 0x84b PushS
	var_156_object = Obj(); // 0x84c PushV
	func_1992(var_156_object); // 0x84d NEW_2
	BroadcastMessage(var_155_string, var_156_object, var_154_object); // 0x84f Func
	return 2; // 0x851 Return
}


func_1608(var_16_object, var_17_int, var_18_float)
{
	var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_int = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); // 0x648 PushV
	var_37_bool = 0; // 0x649 PushV
	var_37_bool = 0; // 0x64a MovB
	var_38_bool = 0; // 0x64b PushV
	var_38_bool = 0; // 0x64c MovB
	var_39_object = var_16_object; // 0x64d Push
	if(var_39_object == 0) goto Label_1619; // 0x64e JumpB
	var_40_int = 4; // 0x64f PushI
	var_41_bool = var_17_int != var_40_int; // 0x650 Neq
	if(var_41_bool == 0) goto Label_1619; // 0x651 JumpB
	var_38_bool = 1; // 0x652 MovB
	
Label_1619:
	if(var_38_bool == 0) goto Label_1624; // 0x653 JumpB
	var_42_int = 5; // 0x654 PushI
	var_43_bool = var_17_int != var_42_int; // 0x655 Neq
	if(var_43_bool == 0) goto Label_1624; // 0x656 JumpB
	var_37_bool = 1; // 0x657 MovB
	
Label_1624:
	if(var_37_bool == 0) goto Label_1671; // 0x658 JumpB
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x659 PushV
	var_46_cvector = CVector(0,0,0); var_47_object = Obj(); // 0x65a PushV
	var_47_object = var_16_object; // 0x65b Mov
	func_1387(var_47_object); // 0x65c NEW_2
	var_45_cvector = var_46_cvector; // 0x65d Mov
	func_1998(var_44_cvector, var_45_cvector); // 0x65f NEW_2
	var_28_cvector = var_44_cvector; // 0x660 Mov
	CreateVectorVector(var_29_object); // 0x662 Func
	var_30_int = 1; // 0x664 MovI
	
Label_1637:
	var_57_string = "hit"; // 0x665 PushS
	var_58_int = var_57_string + var_30_int; // 0x666 Add
	GetGeometryLocator(var_58_int, var_31_bool, var_32_cvector, var_33_cvector); // 0x667 Func
	var_59_bool = var_31_bool == 0; // 0x669 Not
	if(var_59_bool == 0) goto Label_1644; // 0x66a JumpB
	goto Label_1653; // 0x66b Jump
	
Label_1653:
	size(var_34_int); // 0x675 ObjFunc
	var_60_int = var_34_int; // 0x677 Push
	if(var_60_int == 0) goto Label_1670; // 0x678 JumpB
	irand(var_35_int, var_34_int); // 0x679 Func
	get(var_36_cvector, var_35_int); // 0x67b ObjFunc
	var_61_object = Obj(); var_62_int = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x67d PushV
	var_61_object = var_16_object; // 0x67e Mov
	var_62_int = var_17_int; // 0x67f Mov
	var_63_float = var_18_float; // 0x680 Mov
	var_64_cvector = var_36_cvector; // 0x681 Mov
	var_65_cvector = -var_28_cvector; // 0x682 Neg2
	func_1676(var_63_float, var_64_cvector, var_65_cvector); // 0x683 NEW_2
	return 18; // 0x685 Return
	
Label_1670:
	var_29_object = 0; // 0x686 SetNull
	
Label_1671:
	var_106_object = Obj(); // 0x687 PushV
	var_106_object = var_16_object; // 0x688 Mov
	func_1564(var_106_object); // 0x689 NEW_2
	return 18; // 0x68b Return
	
Label_1644:
	var_107_int = var_33_cvector | var_28_cvector; // 0x66c Or
	var_108_float = 0.70711; // 0x66d PushF
	var_109_bool = var_107_int >= var_108_float; // 0x66e GE
	if(var_109_bool == 0) goto Label_1650; // 0x66f JumpB
	add(var_32_cvector); // 0x670 ObjFunc
	
Label_1650:
	var_110_int = 1; // 0x672 PushI
	var_30_int = var_30_int + var_110_int; // 0x673 Add2
	goto Label_1637; // 0x674 Jump
}


func_586(var_104_object)
{
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_string = ""; var_110_object = Obj(); var_111_bool = 0; var_112_bool = 0; var_113_float = 0; var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_string = ""; var_120_object = Obj(); var_121_bool = 0; var_122_bool = 0; var_123_float = 0; var_124_cvector = CVector(0,0,0); // 0x24a PushV
	var_125_bool = var_104_object == 0; // 0x24b NullEq
	if(var_125_bool == 0) goto Label_594; // 0x24c JumpB
	var_126_string = ""; // 0x24d PushV
	var_126_string = "fdie"; // 0x24e MovS
	func_677(var_126_string); // 0x24f NEW_2
	goto Label_676; // 0x251 Jump
	
Label_676:
	return 20; // 0x2a4 Return
	
Label_594:
	GetPosition(var_115_cvector); // 0x252 ObjFunc
	GetPosition(var_116_cvector); // 0x254 Func
	GetDirection(var_117_cvector); // 0x256 Func
	var_118_cvector = var_116_cvector - var_115_cvector; // 0x258 Sub2
	var_158_float = GetByIndex(var_118_cvector, 0); // 0x259 PushE
	var_159_float = GetByIndex(var_117_cvector, 0); // 0x25a PushE
	var_160_float = var_158_float * var_159_float; // 0x25b Mult
	var_161_float = GetByIndex(var_118_cvector, 2); // 0x25c PushE
	var_162_float = GetByIndex(var_117_cvector, 2); // 0x25d PushE
	var_163_float = var_161_float * var_162_float; // 0x25e Mult
	var_164_int = var_160_float + var_163_float; // 0x25f Add
	var_165_int = 0; // 0x260 PushI
	var_166_bool = var_164_int >= var_165_int; // 0x261 GE
	if(var_166_bool == 0) goto Label_613; // 0x262 JumpB
	var_119_string = "fdie"; // 0x263 MovS
	goto Label_614; // 0x264 Jump
	
Label_614:
	RemoveRTEnvelope(); // 0x266 Func
	SetDeathState(); // 0x268 Func
	Stop(); // 0x26a Func
	StopAsync(); // 0x26c Func
	var_120_object = var_104_object; // 0x26e Mov
	var_167_string = "GetScriptProperty"; // 0x26f PushS
	var_168_int = 2; // 0x270 PushI
	var_169_bool = IsFuncExist(var_104_object, var_167_string, var_168_int); // 0x271 FuncExist
	if(var_169_bool == 0) goto Label_638; // 0x272 JumpB
	var_170_string = "Owner"; // 0x273 PushS
	HasScriptProperty(var_121_bool, var_170_string); // 0x274 ObjFunc
	var_171_bool = var_121_bool; // 0x276 Push
	if(var_171_bool == 0) goto Label_638; // 0x277 JumpB
	var_172_string = "Owner"; // 0x278 PushS
	GetScriptProperty(var_120_object, var_172_string); // 0x279 ObjFunc
	var_173_bool = var_120_object == 0; // 0x27b NullEq
	if(var_173_bool == 0) goto Label_638; // 0x27c JumpB
	var_120_object = var_104_object; // 0x27d Mov
	
Label_638:
	var_174_string = "@GetEyesHeight"; // 0x27e PushS
	var_175_int = 1; // 0x27f PushI
	var_176_bool = IsFuncExist(var_120_object, var_174_string, var_175_int); // 0x280 FuncExist
	if(var_176_bool == 0) goto Label_653; // 0x281 JumpB
	GetEyesHeight(var_123_float); // 0x282 ObjFunc
	var_124_cvector = CVector(0.0, 0.0, 0.0); // 0x284 MovV
	var_177_float = GetByIndex(var_124_cvector, 1); // 0x285 PushE
	var_177_float = var_123_float; // 0x286 Mov
	SetByIndex(var_124_cvector, 1) = var_177_float; // 0x287 PopE
	var_178_string = "head"; // 0x288 PushS
	LookAsync(var_104_object, var_178_string, var_124_cvector); // 0x289 Func
	var_122_bool = 1; // 0x28b MovB
	goto Label_654; // 0x28c Jump
	
Label_654:
	var_179_string = ""; // 0x28e PushV
	var_179_string = var_119_string; // 0x28f Mov
	func_1864(var_179_string); // 0x290 NEW_2
	var_180_string = "all"; // 0x292 PushS
	PlayAnimation(var_180_string, var_119_string); // 0x293 Func
	WaitForAnimEnd(); // 0x295 Func
	var_181_bool = var_122_bool; // 0x297 Push
	if(var_181_bool == 0) goto Label_670; // 0x298 JumpB
	StopAsync(); // 0x299 Func
	var_182_string = "head"; // 0x29b PushS
	UnlookAsync(var_182_string); // 0x29c Func
	
Label_670:
	var_183_string = "all"; // 0x29e PushS
	LockAnimationEnd(var_183_string, var_119_string); // 0x29f Func
	RemoveEnvelope(); // 0x2a1 Func
	var_120_object = 0; // 0x2a3 SetNull
	
Label_653:
	var_122_bool = 0; // 0x28d MovB
	
Label_613:
	var_119_string = "bdie"; // 0x265 MovS
}


func_2634(var_54_bool, var_55_object)
{
	var_56_float = 0; var_57_string = ""; var_58_float = 0; var_59_float = 0; var_60_string = ""; var_61_float = 0; // 0xa4a PushV
	var_62_bool = 0; var_63_object = Obj(); // 0xa4b PushV
	var_63_object = var_55_object; // 0xa4c Mov
	func_1540(var_62_bool, var_63_object); // 0xa4d NEW_2
	var_64_bool = var_62_bool == 0; // 0xa4f Not
	if(var_64_bool == 0) goto Label_2643; // 0xa50 JumpB
	var_54_bool = 0; // 0xa51 MovB
	return 6; // 0xa52 Return
	
Label_2643:
	var_65_bool = 0; var_66_object = Obj(); // 0xa53 PushV
	var_66_object = var_55_object; // 0xa54 Mov
	func_1409(var_65_bool, var_66_object); // 0xa55 NEW_2
	if(var_65_bool == 0) goto Label_2654; // 0xa57 JumpB
	var_69_string = "reputation"; // 0xa58 PushS
	GetProperty(var_69_string, var_59_float); // 0xa59 ObjFunc
	var_70_float = 0.33; // 0xa5b PushF
	var_54_bool = var_59_float < var_70_float; // 0xa5c LT2
	return 6; // 0xa5d Return
	
Label_2654:
	var_71_bool = 0; var_72_object = Obj(); var_73_string = ""; // 0xa5e PushV
	var_72_object = var_55_object; // 0xa5f Mov
	var_73_string = "class"; // 0xa60 MovS
	func_1414(var_71_bool, var_72_object, var_73_string); // 0xa61 NEW_2
	var_74_bool = var_71_bool == 0; // 0xa63 Not
	if(var_74_bool == 0) goto Label_2663; // 0xa64 JumpB
	var_54_bool = 0; // 0xa65 MovB
	return 6; // 0xa66 Return
	
Label_2663:
	var_75_string = "class"; // 0xa67 PushS
	GetProperty(var_75_string, var_60_string); // 0xa68 ObjFunc
	var_76_bool = 0; // 0xa6a PushV
	var_76_bool = 1; // 0xa6b MovB
	var_77_bool = 0; // 0xa6c PushV
	var_77_bool = 1; // 0xa6d MovB
	var_78_string = "bomber"; // 0xa6e PushS
	var_79_bool = var_60_string == var_78_string; // 0xa6f Eq
	if(var_79_bool == 0) goto Label_2677; // 0xa70 JumpB
	var_80_string = "hunter"; // 0xa71 PushS
	var_81_bool = var_60_string == var_80_string; // 0xa72 Eq
	if(var_81_bool == 0) goto Label_2677; // 0xa73 JumpB
	var_77_bool = 0; // 0xa74 MovB
	
Label_2677:
	if(var_77_bool == 0) goto Label_2682; // 0xa75 JumpB
	var_82_string = "grabitel"; // 0xa76 PushS
	var_83_bool = var_60_string == var_82_string; // 0xa77 Eq
	if(var_83_bool == 0) goto Label_2682; // 0xa78 JumpB
	var_76_bool = 0; // 0xa79 MovB
	
Label_2682:
	if(var_76_bool == 0) goto Label_2685; // 0xa7a JumpB
	var_54_bool = 1; // 0xa7b MovB
	return 6; // 0xa7c Return
	
Label_2685:
	var_84_bool = 0; var_85_object = Obj(); var_86_string = ""; // 0xa7d PushV
	var_85_object = var_55_object; // 0xa7e Mov
	var_86_string = "disease"; // 0xa7f MovS
	func_1414(var_84_bool, var_85_object, var_86_string); // 0xa80 NEW_2
	var_87_bool = var_84_bool == 0; // 0xa82 Not
	if(var_87_bool == 0) goto Label_2694; // 0xa83 JumpB
	var_54_bool = 0; // 0xa84 MovB
	return 6; // 0xa85 Return
	
Label_2694:
	var_88_bool = 0; // 0xa86 PushV
	var_88_bool = 1; // 0xa87 MovB
	var_89_bool = 0; var_90_string = ""; // 0xa88 PushV
	var_90_string = var_60_string; // 0xa89 Mov
	func_1905(var_89_bool, var_90_string); // 0xa8a NEW_2
	if(var_89_bool == 0) goto Label_2705; // 0xa8c JumpB
	var_128_string = "dog"; // 0xa8d PushS
	var_129_bool = var_60_string == var_128_string; // 0xa8e Eq
	if(var_129_bool == 0) goto Label_2705; // 0xa8f JumpB
	var_88_bool = 0; // 0xa90 MovB
	
Label_2705:
	if(var_88_bool == 0) goto Label_2712; // 0xa91 JumpB
	var_130_string = "disease"; // 0xa92 PushS
	GetProperty(var_130_string, var_61_float); // 0xa93 ObjFunc
	var_131_int = 0; // 0xa95 PushI
	var_54_bool = var_61_float > var_131_int; // 0xa96 GT2
	return 6; // 0xa97 Return
	
Label_2712:
	var_54_bool = 0; // 0xa98 MovB
	return 6; // 0xa99 Return
}


func_2131()
{
	var_111_string = "d10q01SoldierTalk"; // 0x854 PushS
	var_112_int = 1; // 0x855 PushI
	SetVariable(var_111_string, var_112_int); // 0x856 Func
	return 0; // 0x858 Return
}


func_2137()
{
	var_107_string = "ood10MSoldier1"; // 0x85a PushS
	var_108_int = 1; // 0x85b PushI
	SetVariable(var_107_string, var_108_int); // 0x85c Func
	return 0; // 0x85e Return
}


func_2143()
{
	var_163_string = "ood10MSoldier2"; // 0x860 PushS
	var_164_int = 1; // 0x861 PushI
	SetVariable(var_163_string, var_164_int); // 0x862 Func
	return 0; // 0x864 Return
}


func_99(var_0_object, var_1_object, var_2_object, var_3_string, var_90_object, var_91_object)
{
	var_0_object = var_91_object; // 0x64 TMov
	var_1_object = var_90_object; // 0x65 TMov
	var_3_string = 0; // 0x66 TMovB
	var_96_int = 1; // 0x67 PushI
	if(var_96_int == 0) goto Label_187; // 0x68 JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0x69 PushV
	var_98_object = var_1_object; // 0x6a MovT
	func_2161(var_98_object); // 0x6b NEW_2
	if(var_97_bool == 0) goto Label_140; // 0x6d JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x6e PushV
	var_105_object = var_1_object; // 0x6f MovT
	var_106_object = var_0_object; // 0x70 MovT
	func_2137(); // 0x71 NEW_2
	var_109_object = Obj(); var_110_object = Obj(); // 0x73 PushV
	var_109_object = var_1_object; // 0x74 MovT
	var_110_object = var_0_object; // 0x75 MovT
	func_2131(); // 0x76 NEW_2
	var_113_string = ""; // 0x78 PushV
	var_113_string = "Neutral"; // 0x79 MovS
	func_217(var_91_object, var_113_string); // 0x7a NEW_2
	var_130_int = 515453; // 0x7c PushI
	SetMessage(var_130_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_131_int = 515454; // 0x81 PushI
	var_132_int = 16572; // 0x82 PushI
	var_133_int = 16571; // 0x83 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x84 TObjFunc
	var_134_int = 539571; // 0x86 PushI
	var_135_int = 41513; // 0x87 PushI
	var_136_int = 41512; // 0x88 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x89 TObjFunc
	goto Label_187; // 0x8b Jump
	
Label_187:
	var_137_bool = 0; // 0xbb PushV
	func_2802(var_137_bool); // 0xbc NEW_2
	if(var_137_bool == 0) goto Label_202; // 0xbe JumpB
	
Label_191:
	lshWaitForAnimEnd(); // 0xbf Func
	var_138_string = var_3_string; // 0xc1 PushT
	if(var_138_string == 0) goto Label_196; // 0xc2 JumpB
	goto Label_201; // 0xc3 Jump
	
Label_201:
	goto Label_216; // 0xc9 Jump
	
Label_216:
	return 0; // 0xd8 Return
	
Label_196:
	var_139_string = ""; // 0xc4 PushV
	var_139_string = var_2_object; // 0xc5 MovT
	func_1800(var_139_string); // 0xc6 NEW_2
	goto Label_191; // 0xc8 Jump
	
Label_202:
	var_150_string = "all"; // 0xca PushS
	var_151_string = "idle"; // 0xcb PushS
	PlayAnimation(var_150_string, var_151_string); // 0xcc Func
	
Label_206:
	WaitForAnimEnd(); // 0xce Func
	var_152_string = var_3_string; // 0xd0 PushT
	if(var_152_string == 0) goto Label_211; // 0xd1 JumpB
	goto Label_216; // 0xd2 Jump
	
Label_211:
	var_153_string = "all"; // 0xd3 PushS
	var_154_string = "idle"; // 0xd4 PushS
	PlayAnimation(var_153_string, var_154_string); // 0xd5 Func
	goto Label_206; // 0xd7 Jump
	
Label_140:
	var_155_bool = 0; var_156_object = Obj(); // 0x8c PushV
	var_156_object = var_1_object; // 0x8d MovT
	func_2173(var_156_object); // 0x8e NEW_2
	if(var_155_bool == 0) goto Label_170; // 0x90 JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0x91 PushV
	var_161_object = var_1_object; // 0x92 MovT
	var_162_object = var_0_object; // 0x93 MovT
	func_2143(); // 0x94 NEW_2
	var_165_string = ""; // 0x96 PushV
	var_165_string = "Neutral"; // 0x97 MovS
	func_217(var_91_object, var_165_string); // 0x98 NEW_2
	var_166_int = 515459; // 0x9a PushI
	SetMessage(var_166_int); // 0x9b TObjFunc
	ClearReplies(); // 0x9d TObjFunc
	var_167_int = 515460; // 0x9f PushI
	var_168_int = 41515; // 0xa0 PushI
	var_169_int = 16577; // 0xa1 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0xa2 TObjFunc
	var_170_int = 539577; // 0xa4 PushI
	var_171_int = 41519; // 0xa5 PushI
	var_172_int = 41518; // 0xa6 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xa7 TObjFunc
	goto Label_187; // 0xa9 Jump
	
Label_170:
	var_173_string = ""; // 0xaa PushV
	var_173_string = "Neutral"; // 0xab MovS
	func_217(var_91_object, var_173_string); // 0xac NEW_2
	var_174_int = 515465; // 0xae PushI
	SetMessage(var_174_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_175_int = 515466; // 0xb3 PushI
	var_176_int = -1; // 0xb4 PushI
	var_177_int = 16583; // 0xb5 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0xb6 TObjFunc
	goto Label_187; // 0xb8 Jump
}


func_2149()
{
	func_2185(); // 0x867 NEW_2
	return 0; // 0x869 Return
}


func_2154()
{
	var_51_bool = 0; var_52_string = ""; var_53_string = ""; // 0x86b PushV
	var_52_string = "quest_d10_01"; // 0x86c MovS
	var_53_string = "soldier_fight"; // 0x86d MovS
	func_2099(var_51_bool, var_52_string, var_53_string); // 0x86e NEW_2
	return 0; // 0x870 Return
}


func_2161(var_97_bool)
{
	var_99_int = 0; var_100_string = ""; // 0x872 PushV
	var_100_string = "ood10MSoldier1"; // 0x873 MovS
	func_2077(var_99_int, var_100_string); // 0x874 NEW_2
	var_103_int = 0; // 0x876 PushI
	var_104_bool = var_99_int == var_103_int; // 0x877 Eq
	if(var_104_bool == 0) goto Label_2171; // 0x878 JumpB
	var_97_bool = 1; // 0x879 MovB
	return 0; // 0x87a Return
	
Label_2171:
	var_97_bool = 0; // 0x87b MovB
	return 0; // 0x87c Return
}


func_2173(var_155_bool)
{
	var_157_int = 0; var_158_string = ""; // 0x87e PushV
	var_158_string = "ood10MSoldier2"; // 0x87f MovS
	func_2077(var_157_int, var_158_string); // 0x880 NEW_2
	var_159_int = 0; // 0x882 PushI
	var_160_bool = var_157_int == var_159_int; // 0x883 Eq
	if(var_160_bool == 0) goto Label_2183; // 0x884 JumpB
	var_155_bool = 1; // 0x885 MovB
	return 0; // 0x886 Return
	
Label_2183:
	var_155_bool = 0; // 0x887 MovB
	return 0; // 0x888 Return
}


func_2185()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x889 PushV
	var_22_int = 188; // 0x88a PushI
	var_23_int = 1; // 0x88b PushI
	var_24_int = 515473; // 0x88c PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x88d Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x88f PushV
	var_26_object = var_21_object; // 0x890 Mov
	var_27_int = 186; // 0x891 MovI
	func_2211(var_25_bool, var_26_object, var_27_int); // 0x892 NEW_2
	return 2; // 0x894 Return
}


func_1676(var_18_object, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x68c PushV
	GetScene(var_25_object); // 0x68d Func
	var_27_string = "scripted"; // 0x68f PushS
	var_28_string = "blood_dir.xml"; // 0x690 PushS
	AddActorByType(var_26_object, var_27_string, var_25_object, var_21_cvector, var_22_cvector, var_28_string); // 0x691 Func
	var_29_object = Obj(); // 0x693 PushV
	var_29_object = var_18_object; // 0x694 Mov
	func_1564(var_29_object); // 0x695 NEW_2
	return 4; // 0x697 Return
}


func_1170(var_17_object)
{
	func_1367(); // 0x494 NEW_2
	var_18_int = 0; var_19_object = Obj(); // 0x496 PushV
	var_19_object = var_17_object; // 0x497 Mov
	TaskCall(1); // 0x498 TaskCall
	func_25(var_20_object, var_18_int, var_19_object); // 0x499 NEW_2
	TaskReturn(); // 0x49a TaskReturn
	return 0; // 0x49c Return
}


func_2198(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x896 PushV
	GetDiaryRoot(var_36_object); // 0x897 Func
	var_37_bool = var_36_object == 0; // 0x899 Not
	if(var_37_bool == 0) goto Label_2208; // 0x89a JumpB
	var_38_string = "Can't retrieve diary root"; // 0x89b PushS
	Trace(var_38_string); // 0x89c Func
	var_34_object = 0; // 0x89e MovB
	return 2; // 0x89f Return
	
Label_2208:
	var_34_object = var_36_object; // 0x8a0 Mov
	return 2; // 0x8a1 Return
}


func_1690()
{
	var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); // 0x69a PushV
	GetPosition(var_335_cvector); // 0x69b ObjFunc
	GetPosition(var_336_cvector); // 0x69d Func
	var_337_cvector = var_335_cvector - var_336_cvector; // 0x69f Sub2
	var_338_float = GetByIndex(var_337_cvector, 0); // 0x6a0 PushE
	var_339_float = GetByIndex(var_337_cvector, 2); // 0x6a1 PushE
	RotateAsync(var_338_float, var_339_float); // 0x6a2 Func
	return 6; // 0x6a4 Return
}


func_2714(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0xa9a PushV
	var_17_bool = 0; var_18_object = Obj(); // 0xa9b PushV
	var_18_object = var_14_object; // 0xa9c Mov
	func_1540(var_17_bool, var_18_object); // 0xa9d NEW_2
	var_51_bool = var_17_bool == 0; // 0xa9f Not
	if(var_51_bool == 0) goto Label_2723; // 0xaa0 JumpB
	var_13_bool = 0; // 0xaa1 MovB
	return 2; // 0xaa2 Return
	
Label_2723:
	var_52_object = GlobalVars[0]; // 0xaa3 PushGE
	in(var_16_bool, var_14_object); // 0xaa4 ObjFunc
	var_53_bool = var_16_bool; // 0xaa6 Push
	if(var_53_bool == 0) goto Label_2730; // 0xaa7 JumpB
	var_13_bool = 1; // 0xaa8 MovB
	return 2; // 0xaa9 Return
	
Label_2730:
	var_54_bool = 0; var_55_object = Obj(); // 0xaaa PushV
	var_55_object = var_14_object; // 0xaab Mov
	func_2634(var_54_bool, var_55_object); // 0xaac NEW_2
	var_13_bool = var_54_bool; // 0xaad Mov
	return 2; // 0xaaf Return
}


func_2211(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x8a3 PushV
	var_34_object = Obj(); // 0x8a4 PushV
	func_2198(var_34_object); // 0x8a5 NEW_2
	var_31_object = var_34_object; // 0x8a6 Mov
	Find(var_27_int, var_32_object); // 0x8a8 ObjFunc
	var_39_bool = var_32_object == 0; // 0x8aa Not
	if(var_39_bool == 0) goto Label_2226; // 0x8ab JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x8ac PushS
	var_41_int = var_40_string + var_27_int; // 0x8ad Add
	Trace(var_41_int); // 0x8ae Func
	var_25_bool = 0; // 0x8b0 MovB
	return 6; // 0x8b1 Return
	
Label_2226:
	AddChild(var_26_object); // 0x8b2 ObjFunc
	var_42_int = 7; // 0x8b4 PushI
	SendWorldWndMessage(var_42_int); // 0x8b5 Func
	GetCategory(var_33_int); // 0x8b7 ObjFunc
	SetDiarySection(var_33_int); // 0x8b9 Func
	var_25_bool = 0; // 0x8bb MovB
	return 6; // 0x8bc Return
}


func_677(var_126_string)
{
	RemoveRTEnvelope(); // 0x2a6 Func
	SetDeathState(); // 0x2a8 Func
	Stop(); // 0x2aa Func
	StopAsync(); // 0x2ac Func
	StopSecondaryAnimation(); // 0x2ae Func
	var_127_string = ""; // 0x2b0 PushV
	var_127_string = var_126_string; // 0x2b1 Mov
	func_1864(var_127_string); // 0x2b2 NEW_2
	var_156_string = "all"; // 0x2b4 PushS
	PlayAnimation(var_156_string, var_126_string); // 0x2b5 Func
	WaitForAnimEnd(); // 0x2b7 Func
	var_157_string = "all"; // 0x2b9 PushS
	LockAnimationEnd(var_157_string, var_126_string); // 0x2ba Func
	RemoveEnvelope(); // 0x2bc Func
	return 0; // 0x2be Return
}


func_1701(var_246_float)
{
	var_248_float = 0; var_249_float = 0; var_250_float = 0; var_251_float = 0; // 0x6a5 PushV
	GetEyesHeight(var_250_float); // 0x6a6 Func
	GetEyesHeight(var_251_float); // 0x6a8 ObjFunc
	var_246_float = var_251_float - var_250_float; // 0x6aa Sub2
	return 4; // 0x6ab Return
}


func_1708(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x6ac PushV
	IsLoaded(var_14_bool); // 0x6ad Func
	var_12_bool = var_14_bool; // 0x6af Mov
	return 2; // 0x6b0 Return
}


func_2736(var_133_object)
{
	var_134_object = Obj(); // 0xab1 PushV
	var_134_object = var_133_object; // 0xab2 Mov
	func_2768(var_134_object); // 0xab3 NEW_2
	return 0; // 0xab5 Return
}


func_1713(var_29_bool, var_31_float)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0; // 0x6b1 PushV
	GetPosition(var_42_cvector); // 0x6b2 ObjFunc
	GetEyesHeight(var_41_float); // 0x6b4 ObjFunc
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x6b6 PushE
	var_50_float = var_50_float + var_41_float; // 0x6b7 Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x6b8 PopE
	GetPosition(var_43_cvector); // 0x6b9 Func
	GetEyesHeight(var_41_float); // 0x6bb Func
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x6bd PushE
	var_51_float = var_51_float + var_41_float; // 0x6be Add2
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x6bf PopE
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x6c0 Sub2
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x6c1 PushE
	var_52_float = 0; // 0x6c2 MovI
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x6c3 PopE
	var_53_int = var_44_cvector | var_44_cvector; // 0x6c4 Or
	var_54_float = sqrt(var_53_int); // 0x6c5 Sqrt
	var_44_cvector = var_44_cvector / var_44_cvector; // 0x6c6 Div2
	var_45_cvector = -var_44_cvector; // 0x6c7 Neg2
	var_55_float = var_44_cvector * var_31_float; // 0x6c8 Mult
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x6c9 PushV
	var_58_cvector = CVector(0.0, 1.0, 0.0); // 0x6ca PushVec
	var_57_cvector = var_45_cvector ^ var_58_cvector; // 0x6cb Xor2
	func_1998(var_56_cvector, var_57_cvector); // 0x6cc NEW_2
	var_64_int = 25; // 0x6ce PushI
	var_65_float = var_56_cvector * var_64_int; // 0x6cf Mult
	var_66_int = var_55_float + var_65_float; // 0x6d0 Add
	var_67_cvector = CVector(0.0, 10.0, 0.0); // 0x6d1 PushVec
	var_46_cvector = var_66_int - var_67_cvector; // 0x6d2 Sub2
	var_47_cvector = var_43_cvector + var_46_cvector; // 0x6d3 Add2
	IsOverrideActive(var_48_bool); // 0x6d4 Func
	var_68_bool = var_48_bool; // 0x6d6 Push
	if(var_68_bool == 0) goto Label_1754; // 0x6d7 JumpB
	var_29_bool = 0; // 0x6d8 MovB
	return 18; // 0x6d9 Return
	
Label_1754:
	StopWorld(); // 0x6da Func
	var_69_bool = 1; // 0x6dc PushB
	CameraTransit(var_47_cvector, var_45_cvector, var_69_bool); // 0x6dd Func
	var_70_float = GetByIndex(var_46_cvector, 0); // 0x6df PushE
	var_71_float = GetByIndex(var_46_cvector, 2); // 0x6e0 PushE
	Rotate(var_70_float, var_71_float); // 0x6e1 Func
	var_72_bool = 0; // 0x6e3 PushV
	func_2802(var_72_bool); // 0x6e4 NEW_2
	if(var_72_bool == 0) goto Label_1768; // 0x6e6 JumpB
	goto Label_1776; // 0x6e7 Jump
	
Label_1776:
	CameraWaitForPlayFinish(); // 0x6f0 Func
	ResumeWorld(); // 0x6f2 Func
	var_29_bool = 1; // 0x6f4 MovB
	return 18; // 0x6f5 Return
	
Label_1768:
	var_73_string = "head"; // 0x6e8 PushS
	HasAnimationTrack(var_49_bool, var_73_string); // 0x6e9 Func
	var_74_bool = var_49_bool; // 0x6eb Push
	if(var_74_bool == 0) goto Label_1776; // 0x6ec JumpB
	var_75_string = "head"; // 0x6ed PushS
	LookAsyncCamera(var_75_string); // 0x6ee Func
}


func_2742(var_15_bool, var_16_object, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0; // 0xab6 PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; // 0xab7 PushV
	var_22_object = var_17_object; // 0xab8 Mov
	var_23_bool = !var_18_bool; // 0xab9 Not2
	func_2445(var_21_bool, var_22_object, var_23_bool); // 0xaba NEW_2
	if(var_21_bool == 0) goto Label_2766; // 0xabc JumpB
	CanSee(var_20_bool, var_16_object); // 0xabd Func
	var_89_bool = 0; // 0xabf PushV
	var_89_bool = 1; // 0xac0 MovB
	var_90_bool = var_20_bool; // 0xac1 Push
	if(var_90_bool == 0) goto Label_2763; // 0xac2 JumpB
	var_91_float = 0; var_92_object = Obj(); // 0xac3 PushV
	var_92_object = var_16_object; // 0xac4 Mov
	func_1394(var_92_object); // 0xac5 NEW_2
	var_99_float = 490000.0; // 0xac7 PushF
	var_100_bool = var_91_float <= var_99_float; // 0xac8 LE
	if(var_100_bool == 0) goto Label_2763; // 0xac9 JumpB
	var_89_bool = 0; // 0xaca MovB
	
Label_2763:
	if(var_89_bool == 0) goto Label_2766; // 0xacb JumpB
	var_15_bool = 1; // 0xacc MovB
	return 2; // 0xacd Return
	
Label_2766:
	var_15_bool = 0; // 0xace MovB
	return 2; // 0xacf Return
}


func_2239(var_81_int)
{
	var_82_int = 0; var_83_int = 0; // 0x8bf PushV
	var_84_string = "branch"; // 0x8c0 PushS
	GetVariable(var_84_string, var_83_int); // 0x8c1 Func
	var_85_int = 0; // 0x8c3 PushI
	var_86_bool = var_83_int == var_85_int; // 0x8c4 Eq
	if(var_86_bool == 0) goto Label_2249; // 0x8c5 JumpB
	var_81_int = 1; // 0x8c6 MovI
	return 2; // 0x8c7 Return
	
Label_2249:
	var_87_int = 1; // 0x8c9 PushI
	var_88_bool = var_83_int == var_87_int; // 0x8ca Eq
	if(var_88_bool == 0) goto Label_2254; // 0x8cb JumpB
	var_81_int = 2; // 0x8cc MovI
	return 2; // 0x8cd Return
	
Label_2254:
	var_81_int = 3; // 0x8ce MovI
	return 2; // 0x8cf Return
}


func_709(var_0_object, var_52_object)
{
	var_54_bool = 0; var_55_bool = 0; // 0x2c5 PushV
	var_0_object = var_52_object; // 0x2c6 TMov
	Face(var_52_object); // 0x2c7 Func
	
Label_713:
	var_56_float = 0.5; // 0x2c9 PushF
	Sleep(var_56_float, var_55_bool); // 0x2ca Func
	var_57_bool = 0; // 0x2cc PushV
	var_57_bool = 1; // 0x2cd MovB
	var_58_bool = var_55_bool == 0; // 0x2ce Not
	if(var_58_bool == 0) goto Label_727; // 0x2cf JumpB
	var_59_bool = 0; var_60_object = Obj(); // 0x2d0 PushV
	var_60_object = var_0_object; // 0x2d1 MovT
	func_1540(var_59_bool, var_60_object); // 0x2d2 NEW_2
	var_61_bool = var_59_bool == 0; // 0x2d4 Not
	if(var_61_bool == 0) goto Label_727; // 0x2d5 JumpB
	var_57_bool = 0; // 0x2d6 MovB
	
Label_727:
	if(var_57_bool == 0) goto Label_729; // 0x2d7 JumpB
	goto Label_730; // 0x2d8 Jump
	
Label_730:
	StopAsync(); // 0x2da Func
	return 2; // 0x2dc Return
	
Label_729:
	goto Label_713; // 0x2d9 Jump
}


func_2768(var_132_object)
{
	var_133_bool = 0; var_134_bool = 0; // 0xad0 PushV
	var_135_object = GlobalVars[0]; // 0xad1 PushGE
	in(var_134_bool, var_132_object); // 0xad2 ObjFunc
	var_136_bool = var_134_bool; // 0xad4 Push
	if(var_136_bool == 0) goto Label_2779; // 0xad5 JumpB
	var_137_object = Obj(); var_138_bool = 0; // 0xad6 PushV
	var_137_object = var_132_object; // 0xad7 Mov
	var_138_bool = 1; // 0xad8 MovB
	func_2588(var_137_object, var_138_bool); // 0xad9 NEW_2
	
Label_2779:
	return 2; // 0xadb Return
}


func_2256(var_83_int)
{
	var_84_int = 0; var_85_int = 0; // 0x8d0 PushV
	var_86_string = "branch"; // 0x8d1 PushS
	GetVariable(var_86_string, var_85_int); // 0x8d2 Func
	var_83_int = var_85_int; // 0x8d4 Mov
	return 2; // 0x8d5 Return
}


func_2262(var_16_object)
{
	var_17_int = 0; // 0x8d7 PushV
	func_2256(var_17_int); // 0x8d8 NEW_2
	var_21_int = 1; // 0x8da PushI
	var_22_bool = var_17_int == var_21_int; // 0x8db Eq
	if(var_22_bool == 0) goto Label_2272; // 0x8dc JumpB
	WorkWithCorpse(var_16_object); // 0x8dd Func
	goto Label_2274; // 0x8df Jump
	
Label_2274:
	return 0; // 0x8e2 Return
	
Label_2272:
	Barter(var_16_object); // 0x8e0 Func
}


func_217(var_2_object, var_113_string)
{
	var_114_bool = 0; // 0xda PushV
	func_2802(var_114_bool); // 0xdb NEW_2
	var_115_bool = var_114_bool == 0; // 0xdd Not
	if(var_115_bool == 0) goto Label_224; // 0xde JumpB
	return 0; // 0xdf Return
	
Label_224:
	var_116_bool = var_113_string == var_2_object; // 0xe0 Eq
	if(var_116_bool == 0) goto Label_227; // 0xe1 JumpB
	return 0; // 0xe2 Return
	
Label_227:
	var_117_string = ""; var_118_bool = 0; // 0xe3 PushV
	var_117_string = var_113_string; // 0xe4 Mov
	var_119_string = ""; // 0xe5 PushS
	var_120_bool = var_113_string == var_119_string; // 0xe6 Eq
	if(var_120_bool == 0) goto Label_234; // 0xe7 JumpB
	var_118_bool = 0; // 0xe8 MovB
	goto Label_235; // 0xe9 Jump
	
Label_235:
	func_1816(var_117_string, var_118_bool); // 0xeb NEW_2
	var_2_object = var_113_string; // 0xed TMov
	return 0; // 0xee Return
	
Label_234:
	var_118_bool = 1; // 0xea MovB
}


func_733()
{
	StopAsync(); // 0x2dd Func
	var_132_int = 100; // 0x2df PushI
	KillTimer(var_132_int); // 0x2e0 Func
	StopGroup0(); // 0x2e2 Func
	return 0; // 0x2e4 Return
}


func_2275(var_32_int, var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; // 0x8e3 PushV
	var_38_bool = var_32_int > var_33_int; // 0x8e4 GT
	if(var_38_bool == 0) goto Label_2282; // 0x8e5 JumpB
	var_39_string = "GenerateMoney: iMin > iMax"; // 0x8e6 PushS
	Trace(var_39_string); // 0x8e7 Func
	return 4; // 0x8e9 Return
	
Label_2282:
	var_36_int = 0; // 0x8ea MovI
	var_40_bool = var_32_int != var_33_int; // 0x8eb Neq
	if(var_40_bool == 0) goto Label_2289; // 0x8ec JumpB
	var_41_int = var_33_int - var_32_int; // 0x8ed Sub
	irand(var_36_int, var_41_int); // 0x8ee Func
	goto Label_2293; // 0x8f0 Jump
	
Label_2293:
	var_36_int = var_36_int + var_32_int; // 0x8f5 Add2
	var_42_int = 0; // 0x8f6 PushI
	var_43_bool = var_36_int == var_42_int; // 0x8f7 Eq
	if(var_43_bool == 0) goto Label_2298; // 0x8f8 JumpB
	return 4; // 0x8f9 Return
	
Label_2298:
	var_44_int = 0; var_45_string = ""; // 0x8fa PushV
	var_45_string = "Money"; // 0x8fb MovS
	func_2383(var_44_int, var_45_string); // 0x8fc NEW_2
	var_48_int = 0; // 0x8fe PushI
	AddItem(var_37_bool, var_44_int, var_48_int, var_36_int); // 0x8ff Func
	return 4; // 0x901 Return
	
Label_2289:
	var_49_int = 0; // 0x8f1 PushI
	var_50_bool = var_32_int == var_49_int; // 0x8f2 Eq
	if(var_50_bool == 0) goto Label_2293; // 0x8f3 JumpB
	return 4; // 0x8f4 Return
}


func_2788(var_22_object)
{
	var_23_object = Obj(); // 0xae5 PushV
	var_23_object = var_22_object; // 0xae6 Mov
	func_2388(var_23_object); // 0xae7 NEW_2
	return 0; // 0xae9 Return
}


func_2794(var_78_int)
{
	var_78_int = 515597; // 0xaea MovI
	return 0; // 0xaeb Return
}


func_2796(var_77_int)
{
	var_77_int = 514841; // 0xaec MovI
	return 0; // 0xaed Return
}


func_1260()
{
	func_2581(); // 0x4ed NEW_2
	
Label_1263:
	func_1283(var_10_cvector, var_11_bool); // 0x4f0 NEW_2
	goto Label_1263; // 0x4f2 Jump
}


func_2798(var_79_string)
{
	var_79_string = "ui/NPC_Citizen2.png"; // 0xaee MovS
	return 0; // 0xaef Return
}


func_2800(var_80_string)
{
	var_80_string = "ui/NPC_Citizen2_b.png"; // 0xaf0 MovS
	return 0; // 0xaf1 Return
}


func_2802(var_72_bool)
{
	var_72_bool = 0; // 0xaf2 MovB
	return 0; // 0xaf3 Return
}


func_1268()
{
	return 0; // 0x4f4 Return
}


func_1782()
{
	var_180_bool = 0; var_181_bool = 0; // 0x6f6 PushV
	var_182_bool = 1; // 0x6f7 PushB
	CameraSwitchToNormal(var_182_bool); // 0x6f8 Func
	var_183_bool = 0; // 0x6fa PushV
	func_2802(var_183_bool); // 0x6fb NEW_2
	if(var_183_bool == 0) goto Label_1791; // 0x6fd JumpB
	goto Label_1799; // 0x6fe Jump
	
Label_1799:
	return 2; // 0x707 Return
	
Label_1791:
	var_184_string = "head"; // 0x6ff PushS
	HasAnimationTrack(var_181_bool, var_184_string); // 0x700 Func
	var_185_bool = var_181_bool; // 0x702 Push
	if(var_185_bool == 0) goto Label_1799; // 0x703 JumpB
	var_186_string = "head"; // 0x704 PushS
	UnlookAsync(var_186_string); // 0x705 Func
}


func_2306(var_89_string)
{
	var_90_object = Obj(); var_91_int = 0; var_92_bool = 0; var_93_object = Obj(); var_94_int = 0; var_95_bool = 0; // 0x902 PushV
	CreateInvItem(var_93_object); // 0x903 Func
	SetItemName(var_89_string); // 0x905 ObjFunc
	var_96_string = "Organ"; // 0x907 PushS
	var_97_int = 1; // 0x908 PushI
	SetProperty(var_96_string, var_97_int); // 0x909 ObjFunc
	GetItemID(var_94_int); // 0x90b ObjFunc
	var_98_int = 0; // 0x90d PushI
	var_99_int = 1; // 0x90e PushI
	AddItem(var_95_bool, var_93_object, var_98_int, var_99_int); // 0x90f Func
	return 6; // 0x911 Return
}


func_1283(var_0_object, var_1_object)
{
	var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_object = Obj(); // 0x503 PushV
	GetPFPosition(var_29_object); // 0x504 Func
	GetDirection(var_0_object); // 0x506 Func
	
Label_1288:
	func_1372(); // 0x509 NEW_2
	var_30_int = 10; // 0x50b PushI
	irand(var_26_int, var_30_int); // 0x50c Func
	var_31_int = 5; // 0x50e PushI
	var_32_int = var_26_int + var_31_int; // 0x50f Add
	Sleep(var_32_int, var_27_bool); // 0x510 Func
	var_33_bool = var_27_bool; // 0x512 Push
	if(var_33_bool == 0) goto Label_1304; // 0x513 JumpB
	func_1268(); // 0x515 NEW_2
	goto Label_1365; // 0x517 Jump
	
Label_1365:
	goto Label_1288; // 0x555 Jump
	
Label_1304:
	func_1372(); // 0x519 NEW_2
	GetPFPosition(var_28_cvector); // 0x51b Func
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); // 0x51d PushV
	var_35_cvector = var_1_object; // 0x51e MovT
	var_36_cvector = var_28_cvector; // 0x51f Mov
	func_2008(var_34_float, var_35_cvector, var_36_cvector); // 0x520 NEW_2
	var_39_int = 40000; // 0x522 PushI
	var_40_bool = var_34_float > var_39_int; // 0x523 GT
	if(var_40_bool == 0) goto Label_1351; // 0x524 JumpB
	FindPathTo(var_29_object, var_29_object); // 0x525 Func
	var_41_bool = var_29_object != 0; // 0x527 NullNeq
	if(var_41_bool == 0) goto Label_1346; // 0x528 JumpB
	RotatePath(var_29_object, var_27_bool); // 0x529 Func
	var_42_bool = var_27_bool == 0; // 0x52b Not
	if(var_42_bool == 0) goto Label_1326; // 0x52c JumpB
	goto Label_1364; // 0x52d Jump
	
Label_1364:
	goto Label_1304; // 0x554 Jump
	
Label_1326:
	var_43_bool = 0; // 0x52e PushB
	FollowPath(var_29_object, var_43_bool, var_27_bool); // 0x52f Func
	var_44_bool = var_27_bool == 0; // 0x531 Not
	if(var_44_bool == 0) goto Label_1332; // 0x532 JumpB
	goto Label_1364; // 0x533 Jump
	
Label_1332:
	var_45_float = GetByIndex(var_0_object, 0); // 0x534 PushE
	var_46_float = GetByIndex(var_0_object, 2); // 0x535 PushE
	Rotate(var_45_float, var_46_float, var_27_bool); // 0x536 Func
	var_47_bool = var_27_bool == 0; // 0x538 Not
	if(var_47_bool == 0) goto Label_1339; // 0x539 JumpB
	goto Label_1364; // 0x53a Jump
	
Label_1339:
	WaitForAnimEnd(var_27_bool); // 0x53b Func
	var_48_bool = var_27_bool == 0; // 0x53d Not
	if(var_48_bool == 0) goto Label_1344; // 0x53e JumpB
	goto Label_1364; // 0x53f Jump
	
Label_1344:
	goto Label_1365; // 0x540 Jump
	
Label_1346:
	var_49_int = 1; // 0x542 PushI
	Sleep(var_49_int); // 0x543 Func
	var_29_object = 0; // 0x545 SetNull
	goto Label_1364; // 0x546 Jump
	
Label_1351:
	var_50_float = GetByIndex(var_0_object, 0); // 0x547 PushE
	var_51_float = GetByIndex(var_0_object, 2); // 0x548 PushE
	Rotate(var_50_float, var_51_float, var_27_bool); // 0x549 Func
	var_52_bool = var_27_bool == 0; // 0x54b Not
	if(var_52_bool == 0) goto Label_1358; // 0x54c JumpB
	goto Label_1364; // 0x54d Jump
	
Label_1358:
	WaitForAnimEnd(var_27_bool); // 0x54e Func
	var_53_bool = var_27_bool == 0; // 0x550 Not
	if(var_53_bool == 0) goto Label_1363; // 0x551 JumpB
	goto Label_1364; // 0x552 Jump
	
Label_1363:
	goto Label_1365; // 0x553 Jump
}


func_1800(var_139_string)
{
	var_140_bool = 0; var_141_float = 0; var_142_float = 0; var_143_bool = 0; var_144_float = 0; var_145_float = 0; // 0x708 PushV
	lshHasAnimation(var_143_bool, var_139_string); // 0x709 Func
	var_146_bool = var_143_bool; // 0x70b Push
	if(var_146_bool == 0) goto Label_1811; // 0x70c JumpB
	lshGetAnimTimes(var_139_string, var_144_float, var_145_float); // 0x70d Func
	var_147_bool = 0; // 0x70f PushB
	lshPlayAnimation(var_144_float, var_145_float, var_147_bool); // 0x710 Func
	goto Label_1815; // 0x712 Jump
	
Label_1815:
	return 6; // 0x717 Return
	
Label_1811:
	var_148_string = "Can't find lsh animation : "; // 0x713 PushS
	var_149_int = var_148_string + var_139_string; // 0x714 Add
	Trace(var_149_int); // 0x715 Func
}


func_2323()
{
	var_83_int = 0; // 0x913 PushV
	func_2256(var_83_int); // 0x914 NEW_2
	var_87_int = 1; // 0x916 PushI
	var_88_bool = var_83_int != var_87_int; // 0x917 Neq
	if(var_88_bool == 0) goto Label_2330; // 0x918 JumpB
	return 0; // 0x919 Return
	
Label_2330:
	var_89_string = ""; // 0x91a PushV
	var_89_string = "liver"; // 0x91b MovS
	func_2306(var_89_string); // 0x91c NEW_2
	var_100_string = ""; // 0x91e PushV
	var_100_string = "kidney"; // 0x91f MovS
	func_2306(var_100_string); // 0x920 NEW_2
	var_101_string = ""; // 0x922 PushV
	var_101_string = "heart"; // 0x923 MovS
	func_2306(var_101_string); // 0x924 NEW_2
	var_102_string = ""; // 0x926 PushV
	var_102_string = "blood"; // 0x927 MovS
	func_2306(var_102_string); // 0x928 NEW_2
	return 0; // 0x92a Return
}


func_1816(var_117_string, var_118_bool)
{
	var_121_bool = 0; var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_float = 0; var_126_float = 0; // 0x718 PushV
	lshHasAnimation(var_124_bool, var_117_string); // 0x719 Func
	var_127_bool = var_124_bool; // 0x71b Push
	if(var_127_bool == 0) goto Label_1826; // 0x71c JumpB
	lshGetAnimTimes(var_117_string, var_125_float, var_126_float); // 0x71d Func
	lshPlayAnimation(var_125_float, var_126_float, var_118_bool); // 0x71f Func
	goto Label_1830; // 0x721 Jump
	
Label_1830:
	return 6; // 0x726 Return
	
Label_1826:
	var_128_string = "Can't find lsh animation : "; // 0x722 PushS
	var_129_int = var_128_string + var_117_string; // 0x723 Add
	Trace(var_129_int); // 0x724 Func
}


func_1831()
{
	var_15_bool = 0; // 0x727 PushV
	func_2802(var_15_bool); // 0x728 NEW_2
	if(var_15_bool == 0) goto Label_1837; // 0x72a JumpB
	lshStopSpeech(); // 0x72b Func
	
Label_1837:
	return 0; // 0x72d Return
}


func_2347()
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x92b PushV
	var_31_int = 0; // 0x92c PushI
	ClearSubContainer(var_31_int); // 0x92d Func
	var_32_int = 0; var_33_int = 0; // 0x92f PushV
	var_32_int = 500; // 0x930 MovI
	var_33_int = 1000; // 0x931 MovI
	func_2275(var_32_int, var_33_int); // 0x932 NEW_2
	var_51_string = ""; var_52_int = 0; var_53_int = 0; var_54_int = 0; // 0x934 PushV
	var_51_string = "rifle_ammo"; // 0x935 MovS
	var_52_int = 1; // 0x936 MovI
	var_53_int = 3; // 0x937 MovI
	var_54_int = 3; // 0x938 MovI
	func_1849(var_51_string, var_52_int, var_53_int, var_54_int); // 0x939 NEW_2
	var_67_string = ""; var_68_int = 0; var_69_int = 0; var_70_int = 0; // 0x93b PushV
	var_67_string = "rusk"; // 0x93c MovS
	var_68_int = 1; // 0x93d MovI
	var_69_int = 3; // 0x93e MovI
	var_70_int = 2; // 0x93f MovI
	func_1849(var_67_string, var_68_int, var_69_int, var_70_int); // 0x940 NEW_2
	var_71_string = ""; var_72_int = 0; var_73_int = 0; // 0x942 PushV
	var_71_string = "bandage"; // 0x943 MovS
	var_72_int = 1; // 0x944 MovI
	var_73_int = 6; // 0x945 MovI
	func_1838(var_71_string, var_72_int, var_73_int); // 0x946 NEW_2
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0x948 PushV
	var_80_string = "tourniquet"; // 0x949 MovS
	var_81_int = 1; // 0x94a MovI
	var_82_int = 6; // 0x94b MovI
	func_1838(var_80_string, var_81_int, var_82_int); // 0x94c NEW_2
	return 4; // 0x94e Return
}


func_1838(var_71_string, var_72_int, var_73_int)
{
	var_74_bool = 0; var_75_bool = 0; // 0x72e PushV
	var_76_bool = 0; var_77_int = 0; var_78_int = 0; // 0x72f PushV
	var_77_int = var_72_int; // 0x730 Mov
	var_78_int = var_73_int; // 0x731 Mov
	func_2030(var_76_bool, var_77_int, var_78_int); // 0x732 NEW_2
	if(var_76_bool == 0) goto Label_1848; // 0x734 JumpB
	var_79_int = 0; // 0x735 PushI
	AddItem(var_75_bool, var_71_string, var_79_int); // 0x736 Func
	
Label_1848:
	return 2; // 0x738 Return
}


func_1849(var_51_string, var_52_int, var_53_int, var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; // 0x739 PushV
	var_59_bool = 0; var_60_int = 0; var_61_int = 0; // 0x73a PushV
	var_60_int = var_52_int; // 0x73b Mov
	var_61_int = var_53_int; // 0x73c Mov
	func_2030(var_59_bool, var_60_int, var_61_int); // 0x73d NEW_2
	if(var_59_bool == 0) goto Label_1863; // 0x73f JumpB
	irand(var_57_int, var_54_int); // 0x740 Func
	var_64_int = 0; // 0x742 PushI
	var_65_int = 1; // 0x743 PushI
	var_66_int = var_57_int + var_65_int; // 0x744 Add
	AddItem(var_58_bool, var_51_string, var_64_int, var_66_int); // 0x745 Func
	
Label_1863:
	return 4; // 0x747 Return
}


func_829(var_0_object, var_1_object, var_2_object, var_139_object, var_140_bool)
{
	var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; var_147_bool = 0; // 0x33d PushV
	var_0_object = var_139_object; // 0x33e TMov
	var_148_object = Obj(); // 0x33f PushV
	var_148_object = var_0_object; // 0x340 MovT
	func_2111(var_148_object); // 0x341 NEW_2
	func_2120(); // 0x344 NEW_2
	Face(var_0_object); // 0x346 Func
	var_159_bool = var_140_bool; // 0x348 Push
	if(var_159_bool == 0) goto Label_848; // 0x349 JumpB
	var_160_string = "all"; // 0x34a PushS
	var_161_string = "attack_on"; // 0x34b PushS
	PlayAnimation(var_160_string, var_161_string); // 0x34c Func
	WaitForAnimEnd(); // 0x34e Func
	
Label_848:
	var_162_string = "all"; // 0x350 PushS
	var_163_string = "attack_on"; // 0x351 PushS
	LockAnimationEnd(var_162_string, var_163_string); // 0x352 Func
	var_164_bool = 1; // 0x354 PushB
	SetAttackState(var_164_bool); // 0x355 Func
	
Label_855:
	var_165_bool = 0; var_166_object = Obj(); // 0x357 PushV
	var_166_object = var_0_object; // 0x358 MovT
	func_1540(var_165_bool, var_166_object); // 0x359 NEW_2
	if(var_165_bool == 0) goto Label_961; // 0x35b JumpB
	CanSee(var_147_bool, var_0_object); // 0x35c Func
	var_167_bool = var_147_bool; // 0x35e Push
	if(var_167_bool == 0) goto Label_872; // 0x35f JumpB
	var_168_object = Obj(); // 0x360 PushV
	var_168_object = var_0_object; // 0x361 MovT
	func_2111(var_168_object); // 0x362 NEW_2
	func_1009(var_147_bool); // 0x365 NEW_2
	goto Label_951; // 0x367 Jump
	
Label_951:
	var_329_bool = var_1_object != 0; // 0x3b7 NullNeq
	if(var_329_bool == 0) goto Label_957; // 0x3b8 JumpB
	func_1004(var_146_bool, var_147_bool); // 0x3ba NEW_2
	goto Label_960; // 0x3bc Jump
	
Label_960:
	goto Label_855; // 0x3c0 Jump
	
Label_957:
	var_330_int = 2; // 0x3bd PushI
	Sleep(var_330_int); // 0x3be Func
	
Label_872:
	var_331_object = Obj(); // 0x368 PushV
	var_331_object = var_0_object; // 0x369 MovT
	func_1690(); // 0x36a NEW_2
	var_2_object = 1; // 0x36c TMovB
	var_340_string = "all"; // 0x36d PushS
	var_341_string = "hunt"; // 0x36e PushS
	PlayAnimation(var_340_string, var_341_string); // 0x36f Func
	WaitForAnimEnd(var_146_bool); // 0x371 Func
	var_342_bool = var_146_bool == 0; // 0x373 Not
	if(var_342_bool == 0) goto Label_895; // 0x374 JumpB
	var_343_bool = var_1_object != 0; // 0x375 NullNeq
	if(var_343_bool == 0) goto Label_890; // 0x376 JumpB
	func_1004(var_146_bool, var_147_bool); // 0x378 NEW_2
	
Label_890:
	var_344_string = "all"; // 0x37a PushS
	var_345_string = "attack_on"; // 0x37b PushS
	LockAnimationEnd(var_344_string, var_345_string); // 0x37c Func
	goto Label_855; // 0x37e Jump
	
Label_895:
	var_346_bool = 0; var_347_object = Obj(); // 0x37f PushV
	var_347_object = var_0_object; // 0x380 MovT
	func_1540(var_346_bool, var_347_object); // 0x381 NEW_2
	var_348_bool = var_346_bool == 0; // 0x383 Not
	if(var_348_bool == 0) goto Label_902; // 0x384 JumpB
	goto Label_961; // 0x385 Jump
	
Label_961:
	var_349_bool = 0; // 0x3c1 PushB
	SetAttackState(var_349_bool); // 0x3c2 Func
	StopAsync(); // 0x3c4 Func
	var_350_string = "all"; // 0x3c6 PushS
	var_351_string = "attack_off"; // 0x3c7 PushS
	PlayAnimation(var_350_string, var_351_string); // 0x3c8 Func
	WaitForAnimEnd(); // 0x3ca Func
	return 4; // 0x3cc Return
	
Label_902:
	CanSee(var_147_bool, var_0_object); // 0x386 Func
	var_352_bool = var_147_bool; // 0x388 Push
	if(var_352_bool == 0) goto Label_913; // 0x389 JumpB
	var_2_object = 0; // 0x38a TMovB
	Face(var_0_object); // 0x38b Func
	func_1009(var_147_bool); // 0x38e NEW_2
	goto Label_951; // 0x390 Jump
	
Label_913:
	var_353_string = "all"; // 0x391 PushS
	var_354_string = "attack_on"; // 0x392 PushS
	LockAnimationEnd(var_353_string, var_354_string); // 0x393 Func
	var_355_int = 3; // 0x395 PushI
	Sleep(var_355_int, var_146_bool); // 0x396 Func
	var_356_bool = var_146_bool == 0; // 0x398 Not
	if(var_356_bool == 0) goto Label_932; // 0x399 JumpB
	var_357_bool = var_1_object != 0; // 0x39a NullNeq
	if(var_357_bool == 0) goto Label_927; // 0x39b JumpB
	func_1004(var_146_bool, var_147_bool); // 0x39d NEW_2
	
Label_927:
	var_358_string = "all"; // 0x39f PushS
	var_359_string = "attack_on"; // 0x3a0 PushS
	LockAnimationEnd(var_358_string, var_359_string); // 0x3a1 Func
	goto Label_855; // 0x3a3 Jump
	
Label_932:
	var_360_bool = 0; var_361_object = Obj(); // 0x3a4 PushV
	var_361_object = var_0_object; // 0x3a5 MovT
	func_1540(var_360_bool, var_361_object); // 0x3a6 NEW_2
	var_362_bool = var_360_bool == 0; // 0x3a8 Not
	if(var_362_bool == 0) goto Label_939; // 0x3a9 JumpB
	goto Label_961; // 0x3aa Jump
	
Label_939:
	var_2_object = 0; // 0x3ab TMovB
	CanSee(var_147_bool, var_0_object); // 0x3ac Func
	var_363_bool = var_147_bool; // 0x3ae Push
	if(var_363_bool == 0) goto Label_950; // 0x3af JumpB
	Face(var_0_object); // 0x3b0 Func
	func_1009(var_147_bool); // 0x3b3 NEW_2
	goto Label_951; // 0x3b5 Jump
	
Label_950:
	goto Label_961; // 0x3b6 Jump
}


func_1864(var_127_string)
{
	var_128_bool = 0; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_bool = 0; var_133_float = 0; var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_bool = 0; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); // 0x748 PushV
	IsExisting3DSound(var_136_bool, var_127_string); // 0x749 Func
	var_144_bool = var_136_bool == 0; // 0x74b Not
	if(var_144_bool == 0) goto Label_1889; // 0x74c JumpB
	var_137_int = 0; // 0x74d MovI
	
Label_1870:
	var_145_int = 1; // 0x74e PushI
	var_146_int = var_137_int + var_145_int; // 0x74f Add
	var_147_int = var_127_string + var_146_int; // 0x750 Add
	IsExisting3DSound(var_138_bool, var_147_int); // 0x751 Func
	var_148_bool = var_138_bool == 0; // 0x753 Not
	if(var_148_bool == 0) goto Label_1878; // 0x754 JumpB
	goto Label_1881; // 0x755 Jump
	
Label_1881:
	var_149_bool = var_137_int == 0; // 0x759 Not
	if(var_149_bool == 0) goto Label_1884; // 0x75a JumpB
	return 16; // 0x75b Return
	
Label_1884:
	irand(var_139_int, var_137_int); // 0x75c Func
	var_150_int = 1; // 0x75e PushI
	var_151_int = var_139_int + var_150_int; // 0x75f Add
	var_127_string = var_127_string + var_151_int; // 0x760 Add2
	
Label_1889:
	Is3DSoundLoaded(var_140_bool, var_127_string); // 0x761 Func
	var_152_bool = var_140_bool; // 0x763 Push
	if(var_152_bool == 0) goto Label_1904; // 0x764 JumpB
	GetEyesHeight(var_141_float); // 0x765 Func
	GetDirection(var_142_cvector); // 0x767 Func
	var_153_int = 50; // 0x769 PushI
	var_143_cvector = var_142_cvector * var_153_int; // 0x76a Mult2
	var_154_float = GetByIndex(var_143_cvector, 1); // 0x76b PushE
	var_154_float = var_154_float + var_141_float; // 0x76c Add2
	SetByIndex(var_143_cvector, 1) = var_154_float; // 0x76d PopE
	PlayGlobalSound(var_127_string, var_143_cvector); // 0x76e Func
	
Label_1904:
	return 16; // 0x770 Return
	
Label_1878:
	var_155_int = 1; // 0x756 PushI
	var_137_int = var_137_int + var_155_int; // 0x757 Add2
	goto Label_1870; // 0x758 Jump
}


func_2383(var_44_int, var_45_string)
{
	var_46_int = 0; var_47_int = 0; // 0x94f PushV
	GetInvItemByName(var_47_int, var_45_string); // 0x950 Func
	var_44_int = var_47_int; // 0x952 Mov
	return 2; // 0x953 Return
}


func_2388(var_23_object)
{
	var_24_object = Obj(); // 0x955 PushV
	var_24_object = var_23_object; // 0x956 Mov
	TaskCall(3); // 0x957 TaskCall
	func_544(var_24_object); // 0x958 NEW_2
	TaskReturn(); // 0x959 TaskReturn
	return 0; // 0x95b Return
}


func_1367()
{
	StopGroup0(); // 0x557 Func
	Stop(); // 0x559 Func
	return 0; // 0x55b Return
}


func_1372()
{
	return 0; // 0x55c Return
}


func_1373(var_280_string, var_281_int)
{
	var_282_int = 2; // 0x55e PushI
	var_283_bool = var_281_int == var_282_int; // 0x55f Eq
	if(var_283_bool == 0) goto Label_1380; // 0x560 JumpB
	var_280_string = "fire"; // 0x561 MovS
	return 0; // 0x562 Return
	
Label_1380:
	var_284_int = 1; // 0x564 PushI
	var_285_bool = var_281_int == var_284_int; // 0x565 Eq
	if(var_285_bool == 0) goto Label_1385; // 0x566 JumpB
	var_280_string = "bullet"; // 0x567 MovS
	return 0; // 0x568 Return
	
Label_1385:
	var_280_string = "phys"; // 0x569 MovS
	return 0; // 0x56a Return
}


func_1387(var_46_cvector)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x56b PushV
	GetPosition(var_50_cvector); // 0x56c Func
	GetPosition(var_51_cvector); // 0x56e ObjFunc
	var_46_cvector = var_51_cvector - var_50_cvector; // 0x570 Sub2
	return 4; // 0x571 Return
}


func_1905(var_89_bool, var_90_string)
{
	var_89_bool = 1; // 0x772 MovB
	var_91_bool = 0; // 0x773 PushV
	var_91_bool = 1; // 0x774 MovB
	var_92_bool = 0; // 0x775 PushV
	var_92_bool = 1; // 0x776 MovB
	var_93_bool = 0; // 0x777 PushV
	var_93_bool = 1; // 0x778 MovB
	var_94_bool = 0; // 0x779 PushV
	var_94_bool = 1; // 0x77a MovB
	var_95_bool = 0; // 0x77b PushV
	var_95_bool = 1; // 0x77c MovB
	var_96_bool = 0; // 0x77d PushV
	var_96_bool = 1; // 0x77e MovB
	var_97_bool = 0; // 0x77f PushV
	var_97_bool = 1; // 0x780 MovB
	var_98_bool = 0; // 0x781 PushV
	var_98_bool = 1; // 0x782 MovB
	var_99_bool = 0; // 0x783 PushV
	var_99_bool = 1; // 0x784 MovB
	var_100_bool = 0; // 0x785 PushV
	var_100_bool = 1; // 0x786 MovB
	var_101_bool = 0; // 0x787 PushV
	var_101_bool = 1; // 0x788 MovB
	var_102_string = "woman"; // 0x789 PushS
	var_103_bool = var_90_string == var_102_string; // 0x78a Eq
	if(var_103_bool == 0) goto Label_1936; // 0x78b JumpB
	var_104_string = "worker"; // 0x78c PushS
	var_105_bool = var_90_string == var_104_string; // 0x78d Eq
	if(var_105_bool == 0) goto Label_1936; // 0x78e JumpB
	var_101_bool = 0; // 0x78f MovB
	
Label_1936:
	if(var_101_bool == 0) goto Label_1941; // 0x790 JumpB
	var_106_string = "butcher"; // 0x791 PushS
	var_107_bool = var_90_string == var_106_string; // 0x792 Eq
	if(var_107_bool == 0) goto Label_1941; // 0x793 JumpB
	var_100_bool = 0; // 0x794 MovB
	
Label_1941:
	if(var_100_bool == 0) goto Label_1946; // 0x795 JumpB
	var_108_string = "wasted_girl"; // 0x796 PushS
	var_109_bool = var_90_string == var_108_string; // 0x797 Eq
	if(var_109_bool == 0) goto Label_1946; // 0x798 JumpB
	var_99_bool = 0; // 0x799 MovB
	
Label_1946:
	if(var_99_bool == 0) goto Label_1951; // 0x79a JumpB
	var_110_string = "boy"; // 0x79b PushS
	var_111_bool = var_90_string == var_110_string; // 0x79c Eq
	if(var_111_bool == 0) goto Label_1951; // 0x79d JumpB
	var_98_bool = 0; // 0x79e MovB
	
Label_1951:
	if(var_98_bool == 0) goto Label_1956; // 0x79f JumpB
	var_112_string = "vaxxabitka"; // 0x7a0 PushS
	var_113_bool = var_90_string == var_112_string; // 0x7a1 Eq
	if(var_113_bool == 0) goto Label_1956; // 0x7a2 JumpB
	var_97_bool = 0; // 0x7a3 MovB
	
Label_1956:
	if(var_97_bool == 0) goto Label_1961; // 0x7a4 JumpB
	var_114_string = "unosha"; // 0x7a5 PushS
	var_115_bool = var_90_string == var_114_string; // 0x7a6 Eq
	if(var_115_bool == 0) goto Label_1961; // 0x7a7 JumpB
	var_96_bool = 0; // 0x7a8 MovB
	
Label_1961:
	if(var_96_bool == 0) goto Label_1966; // 0x7a9 JumpB
	var_116_string = "wasted_male"; // 0x7aa PushS
	var_117_bool = var_90_string == var_116_string; // 0x7ab Eq
	if(var_117_bool == 0) goto Label_1966; // 0x7ac JumpB
	var_95_bool = 0; // 0x7ad MovB
	
Label_1966:
	if(var_95_bool == 0) goto Label_1971; // 0x7ae JumpB
	var_118_string = "alkash"; // 0x7af PushS
	var_119_bool = var_90_string == var_118_string; // 0x7b0 Eq
	if(var_119_bool == 0) goto Label_1971; // 0x7b1 JumpB
	var_94_bool = 0; // 0x7b2 MovB
	
Label_1971:
	if(var_94_bool == 0) goto Label_1976; // 0x7b3 JumpB
	var_120_string = "dohodyaga"; // 0x7b4 PushS
	var_121_bool = var_90_string == var_120_string; // 0x7b5 Eq
	if(var_121_bool == 0) goto Label_1976; // 0x7b6 JumpB
	var_93_bool = 0; // 0x7b7 MovB
	
Label_1976:
	if(var_93_bool == 0) goto Label_1981; // 0x7b8 JumpB
	var_122_string = "vaxxabit"; // 0x7b9 PushS
	var_123_bool = var_90_string == var_122_string; // 0x7ba Eq
	if(var_123_bool == 0) goto Label_1981; // 0x7bb JumpB
	var_92_bool = 0; // 0x7bc MovB
	
Label_1981:
	if(var_92_bool == 0) goto Label_1986; // 0x7bd JumpB
	var_124_string = "nudegirl"; // 0x7be PushS
	var_125_bool = var_90_string == var_124_string; // 0x7bf Eq
	if(var_125_bool == 0) goto Label_1986; // 0x7c0 JumpB
	var_91_bool = 0; // 0x7c1 MovB
	
Label_1986:
	if(var_91_bool == 0) goto Label_1991; // 0x7c2 JumpB
	var_126_string = "morlok"; // 0x7c3 PushS
	var_127_bool = var_90_string == var_126_string; // 0x7c4 Eq
	if(var_127_bool == 0) goto Label_1991; // 0x7c5 JumpB
	var_89_bool = 0; // 0x7c6 MovB
	
Label_1991:
	return 0; // 0x7c7 Return
}


func_1394(var_91_float)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0x572 PushV
	GetPosition(var_96_cvector); // 0x573 Func
	GetPosition(var_97_cvector); // 0x575 ObjFunc
	var_98_cvector = var_97_cvector - var_96_cvector; // 0x577 Sub2
	var_91_float = var_98_cvector | var_98_cvector; // 0x578 Or2
	return 6; // 0x579 Return
}


func_1402(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x57a PushV
	var_20_string = "player"; // 0x57b PushS
	FindActor(var_19_object, var_20_string); // 0x57c Func
	var_17_object = var_19_object; // 0x57e Mov
	return 2; // 0x57f Return
}


func_1409(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x581 PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x582 Func
	var_13_bool = var_16_bool; // 0x584 Mov
	return 2; // 0x585 Return
}


func_1414(var_39_bool, var_40_object, var_41_string)
{
	var_42_bool = 0; var_43_bool = 0; // 0x586 PushV
	var_44_string = "HasProperty"; // 0x587 PushS
	var_45_int = 2; // 0x588 PushI
	var_46_bool = IsFuncExist(var_40_object, var_44_string, var_45_int); // 0x589 FuncExist
	var_47_bool = var_46_bool == 0; // 0x58a Not
	if(var_47_bool == 0) goto Label_1422; // 0x58b JumpB
	var_39_bool = 0; // 0x58c MovB
	return 2; // 0x58d Return
	
Label_1422:
	HasProperty(var_41_string, var_43_bool); // 0x58e ObjFunc
	var_39_bool = var_43_bool; // 0x590 Mov
	return 2; // 0x591 Return
}


func_2445(var_21_bool, var_22_object, var_23_bool)
{
	var_24_string = ""; var_25_string = ""; // 0x98d PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x98e PushV
	var_27_object = var_22_object; // 0x98f Mov
	var_28_string = "class"; // 0x990 MovS
	func_1414(var_26_bool, var_27_object, var_28_string); // 0x991 NEW_2
	var_35_bool = var_26_bool == 0; // 0x993 Not
	if(var_35_bool == 0) goto Label_2455; // 0x994 JumpB
	var_21_bool = 0; // 0x995 MovB
	return 2; // 0x996 Return
	
Label_2455:
	var_36_string = "class"; // 0x997 PushS
	GetProperty(var_36_string, var_25_string); // 0x998 ObjFunc
	var_37_bool = 0; // 0x99a PushV
	var_37_bool = 1; // 0x99b MovB
	var_38_bool = 0; // 0x99c PushV
	var_38_bool = 1; // 0x99d MovB
	var_39_bool = 0; // 0x99e PushV
	var_39_bool = 1; // 0x99f MovB
	var_40_bool = 0; // 0x9a0 PushV
	var_40_bool = 1; // 0x9a1 MovB
	var_41_bool = 0; // 0x9a2 PushV
	var_41_bool = 1; // 0x9a3 MovB
	var_42_bool = 0; // 0x9a4 PushV
	var_42_bool = 1; // 0x9a5 MovB
	var_43_bool = 0; // 0x9a6 PushV
	var_43_bool = 1; // 0x9a7 MovB
	var_44_bool = 0; // 0x9a8 PushV
	var_44_bool = 1; // 0x9a9 MovB
	var_45_bool = 0; // 0x9aa PushV
	var_45_bool = 1; // 0x9ab MovB
	var_46_bool = 0; // 0x9ac PushV
	var_46_bool = 1; // 0x9ad MovB
	var_47_string = "patrol"; // 0x9ae PushS
	var_48_bool = var_25_string == var_47_string; // 0x9af Eq
	if(var_48_bool == 0) goto Label_2485; // 0x9b0 JumpB
	var_49_string = "sanitar"; // 0x9b1 PushS
	var_50_bool = var_25_string == var_49_string; // 0x9b2 Eq
	if(var_50_bool == 0) goto Label_2485; // 0x9b3 JumpB
	var_46_bool = 0; // 0x9b4 MovB
	
Label_2485:
	if(var_46_bool == 0) goto Label_2490; // 0x9b5 JumpB
	var_51_string = "soldier"; // 0x9b6 PushS
	var_52_bool = var_25_string == var_51_string; // 0x9b7 Eq
	if(var_52_bool == 0) goto Label_2490; // 0x9b8 JumpB
	var_45_bool = 0; // 0x9b9 MovB
	
Label_2490:
	if(var_45_bool == 0) goto Label_2495; // 0x9ba JumpB
	var_53_string = "woman"; // 0x9bb PushS
	var_54_bool = var_25_string == var_53_string; // 0x9bc Eq
	if(var_54_bool == 0) goto Label_2495; // 0x9bd JumpB
	var_44_bool = 0; // 0x9be MovB
	
Label_2495:
	if(var_44_bool == 0) goto Label_2500; // 0x9bf JumpB
	var_55_string = "wasted_girl"; // 0x9c0 PushS
	var_56_bool = var_25_string == var_55_string; // 0x9c1 Eq
	if(var_56_bool == 0) goto Label_2500; // 0x9c2 JumpB
	var_43_bool = 0; // 0x9c3 MovB
	
Label_2500:
	if(var_43_bool == 0) goto Label_2505; // 0x9c4 JumpB
	var_57_string = "vaxxabitka"; // 0x9c5 PushS
	var_58_bool = var_25_string == var_57_string; // 0x9c6 Eq
	if(var_58_bool == 0) goto Label_2505; // 0x9c7 JumpB
	var_42_bool = 0; // 0x9c8 MovB
	
Label_2505:
	if(var_42_bool == 0) goto Label_2510; // 0x9c9 JumpB
	var_59_string = "vaxxabit"; // 0x9ca PushS
	var_60_bool = var_25_string == var_59_string; // 0x9cb Eq
	if(var_60_bool == 0) goto Label_2510; // 0x9cc JumpB
	var_41_bool = 0; // 0x9cd MovB
	
Label_2510:
	if(var_41_bool == 0) goto Label_2515; // 0x9ce JumpB
	var_61_string = "little_girl"; // 0x9cf PushS
	var_62_bool = var_25_string == var_61_string; // 0x9d0 Eq
	if(var_62_bool == 0) goto Label_2515; // 0x9d1 JumpB
	var_40_bool = 0; // 0x9d2 MovB
	
Label_2515:
	if(var_40_bool == 0) goto Label_2520; // 0x9d3 JumpB
	var_63_string = "girl"; // 0x9d4 PushS
	var_64_bool = var_25_string == var_63_string; // 0x9d5 Eq
	if(var_64_bool == 0) goto Label_2520; // 0x9d6 JumpB
	var_39_bool = 0; // 0x9d7 MovB
	
Label_2520:
	if(var_39_bool == 0) goto Label_2525; // 0x9d8 JumpB
	var_65_string = "dohodyaga"; // 0x9d9 PushS
	var_66_bool = var_25_string == var_65_string; // 0x9da Eq
	if(var_66_bool == 0) goto Label_2525; // 0x9db JumpB
	var_38_bool = 0; // 0x9dc MovB
	
Label_2525:
	if(var_38_bool == 0) goto Label_2530; // 0x9dd JumpB
	var_67_string = "nudegirl"; // 0x9de PushS
	var_68_bool = var_25_string == var_67_string; // 0x9df Eq
	if(var_68_bool == 0) goto Label_2530; // 0x9e0 JumpB
	var_37_bool = 0; // 0x9e1 MovB
	
Label_2530:
	if(var_37_bool == 0) goto Label_2533; // 0x9e2 JumpB
	var_21_bool = 1; // 0x9e3 MovB
	return 2; // 0x9e4 Return
	
Label_2533:
	var_69_bool = var_23_bool; // 0x9e5 Push
	if(var_69_bool == 0) goto Label_2537; // 0x9e6 JumpB
	var_21_bool = 0; // 0x9e7 MovB
	return 2; // 0x9e8 Return
	
Label_2537:
	var_21_bool = 1; // 0x9e9 MovB
	var_70_bool = 0; // 0x9ea PushV
	var_70_bool = 1; // 0x9eb MovB
	var_71_bool = 0; // 0x9ec PushV
	var_71_bool = 1; // 0x9ed MovB
	var_72_bool = 0; // 0x9ee PushV
	var_72_bool = 1; // 0x9ef MovB
	var_73_bool = 0; // 0x9f0 PushV
	var_73_bool = 1; // 0x9f1 MovB
	var_74_bool = 0; // 0x9f2 PushV
	var_74_bool = 1; // 0x9f3 MovB
	var_75_string = "worker"; // 0x9f4 PushS
	var_76_bool = var_25_string == var_75_string; // 0x9f5 Eq
	if(var_76_bool == 0) goto Label_2555; // 0x9f6 JumpB
	var_77_string = "butcher"; // 0x9f7 PushS
	var_78_bool = var_25_string == var_77_string; // 0x9f8 Eq
	if(var_78_bool == 0) goto Label_2555; // 0x9f9 JumpB
	var_74_bool = 0; // 0x9fa MovB
	
Label_2555:
	if(var_74_bool == 0) goto Label_2560; // 0x9fb JumpB
	var_79_string = "boy"; // 0x9fc PushS
	var_80_bool = var_25_string == var_79_string; // 0x9fd Eq
	if(var_80_bool == 0) goto Label_2560; // 0x9fe JumpB
	var_73_bool = 0; // 0x9ff MovB
	
Label_2560:
	if(var_73_bool == 0) goto Label_2565; // 0xa00 JumpB
	var_81_string = "unosha"; // 0xa01 PushS
	var_82_bool = var_25_string == var_81_string; // 0xa02 Eq
	if(var_82_bool == 0) goto Label_2565; // 0xa03 JumpB
	var_72_bool = 0; // 0xa04 MovB
	
Label_2565:
	if(var_72_bool == 0) goto Label_2570; // 0xa05 JumpB
	var_83_string = "wasted_male"; // 0xa06 PushS
	var_84_bool = var_25_string == var_83_string; // 0xa07 Eq
	if(var_84_bool == 0) goto Label_2570; // 0xa08 JumpB
	var_71_bool = 0; // 0xa09 MovB
	
Label_2570:
	if(var_71_bool == 0) goto Label_2575; // 0xa0a JumpB
	var_85_string = "alkash"; // 0xa0b PushS
	var_86_bool = var_25_string == var_85_string; // 0xa0c Eq
	if(var_86_bool == 0) goto Label_2575; // 0xa0d JumpB
	var_70_bool = 0; // 0xa0e MovB
	
Label_2575:
	if(var_70_bool == 0) goto Label_2580; // 0xa0f JumpB
	var_87_string = "morlok"; // 0xa10 PushS
	var_88_bool = var_25_string == var_87_string; // 0xa11 Eq
	if(var_88_bool == 0) goto Label_2580; // 0xa12 JumpB
	var_21_bool = 0; // 0xa13 MovB
	
Label_2580:
	return 2; // 0xa14 Return
}


func_1426(var_255_float, var_256_object, var_257_float, var_258_int)
{
	var_259_int = 0; var_260_string = ""; var_261_int = 0; var_262_float = 0; var_263_float = 0; var_264_float = 0; var_265_int = 0; var_266_string = ""; var_267_int = 0; var_268_float = 0; var_269_float = 0; var_270_float = 0; // 0x592 PushV
	var_271_bool = 0; var_272_object = Obj(); var_273_string = ""; // 0x593 PushV
	var_272_object = var_256_object; // 0x594 Mov
	var_273_string = "health"; // 0x595 MovS
	func_1414(var_271_bool, var_272_object, var_273_string); // 0x596 NEW_2
	var_274_bool = var_271_bool == 0; // 0x598 Not
	if(var_274_bool == 0) goto Label_1436; // 0x599 JumpB
	var_255_float = 0.0; // 0x59a MovF
	return 12; // 0x59b Return
	
Label_1436:
	var_275_bool = 0; var_276_object = Obj(); var_277_string = ""; // 0x59c PushV
	var_276_object = var_256_object; // 0x59d Mov
	var_277_string = "armor"; // 0x59e MovS
	func_1414(var_275_bool, var_276_object, var_277_string); // 0x59f NEW_2
	var_278_bool = var_275_bool == 0; // 0x5a1 Not
	if(var_278_bool == 0) goto Label_1445; // 0x5a2 JumpB
	var_265_int = 0; // 0x5a3 MovI
	goto Label_1448; // 0x5a4 Jump
	
Label_1448:
	var_279_string = "armor_"; // 0x5a8 PushS
	var_280_string = ""; var_281_int = 0; // 0x5a9 PushV
	var_281_int = var_258_int; // 0x5aa Mov
	func_1373(var_280_string, var_281_int); // 0x5ab NEW_2
	var_266_string = var_279_string + var_280_string; // 0x5ad Add2
	var_286_bool = 0; var_287_object = Obj(); var_288_string = ""; // 0x5ae PushV
	var_287_object = var_256_object; // 0x5af Mov
	var_288_string = var_266_string; // 0x5b0 Mov
	func_1414(var_286_bool, var_287_object, var_288_string); // 0x5b1 NEW_2
	var_289_bool = var_286_bool == 0; // 0x5b3 Not
	if(var_289_bool == 0) goto Label_1463; // 0x5b4 JumpB
	var_267_int = 0; // 0x5b5 MovI
	goto Label_1465; // 0x5b6 Jump
	
Label_1465:
	var_290_float = 0; var_291_float = 0; var_292_float = 0; // 0x5b9 PushV
	var_293_int = var_265_int + var_267_int; // 0x5ba Add
	var_294_float = 100.0; // 0x5bb PushF
	var_291_float = var_293_int / var_293_int; // 0x5bc Div2
	var_292_float = 1; // 0x5bd MovI
	func_2012(var_290_float, var_291_float, var_292_float); // 0x5be NEW_2
	var_268_float = var_290_float; // 0x5bf Mov
	var_296_string = "health"; // 0x5c1 PushS
	GetProperty(var_296_string, var_269_float); // 0x5c2 ObjFunc
	var_297_int = 1; // 0x5c4 PushI
	var_298_int = var_297_int - var_268_float; // 0x5c5 Sub
	var_270_float = var_257_float * var_298_int; // 0x5c6 Mult2
	var_299_string = "health"; // 0x5c7 PushS
	var_300_float = 0; var_301_float = 0; var_302_float = 0; var_303_float = 0; // 0x5c8 PushV
	var_301_float = var_269_float - var_270_float; // 0x5c9 Sub2
	var_302_float = 0; // 0x5ca MovI
	var_303_float = 1; // 0x5cb MovI
	func_2019(var_300_float, var_301_float, var_302_float, var_303_float); // 0x5cc NEW_2
	SetProperty(var_299_string, var_300_float); // 0x5ce ObjFunc
	var_306_bool = 0; var_307_object = Obj(); // 0x5d0 PushV
	var_307_object = var_256_object; // 0x5d1 Mov
	func_1409(var_306_bool, var_307_object); // 0x5d2 NEW_2
	if(var_306_bool == 0) goto Label_1497; // 0x5d4 JumpB
	var_308_float = 0; // 0x5d5 PushV
	var_308_float = -var_270_float; // 0x5d6 Neg2
	func_2082(var_308_float); // 0x5d7 NEW_2
	
Label_1497:
	var_255_float = var_270_float; // 0x5d9 Mov
	return 12; // 0x5da Return
	
Label_1463:
	GetProperty(var_266_string, var_267_int); // 0x5b7 ObjFunc
	
Label_1445:
	var_316_string = "armor"; // 0x5a5 PushS
	GetProperty(var_316_string, var_265_int); // 0x5a6 ObjFunc
}


func_1992(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x7c8 PushV
	self(var_14_object); // 0x7c9 Func
	var_12_object = var_14_object; // 0x7cb Mov
	return 2; // 0x7cc Return
}


func_1998(var_44_cvector, var_45_cvector)
{
	var_52_float = 0; var_53_float = 0; // 0x7ce PushV
	var_54_int = var_45_cvector | var_45_cvector; // 0x7cf Or
	var_53_float = sqrt(var_54_int); // 0x7d0 Sqrt2
	var_55_float = 0.0; // 0x7d1 PushF
	var_56_bool = var_53_float < var_55_float; // 0x7d2 LT
	if(var_56_bool == 0) goto Label_2006; // 0x7d3 JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x7d4 MovV
	return 2; // 0x7d5 Return
	
Label_2006:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x7d6 Div2
	return 2; // 0x7d7 Return
}


func_2008(var_34_float, var_35_cvector, var_36_cvector)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x7d8 PushV
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x7d9 Sub2
	var_34_float = var_38_cvector | var_38_cvector; // 0x7da Or2
	return 2; // 0x7db Return
}


func_1499(var_32_bool)
{
	var_34_bool = 0; var_35_bool = 0; // 0x5db PushV
	IsDead(var_35_bool); // 0x5dc ObjFunc
	var_32_bool = var_35_bool; // 0x5de Mov
	return 2; // 0x5df Return
}


func_2012(var_290_float, var_291_float, var_292_float)
{
	var_295_bool = var_291_float < var_292_float; // 0x7dd LT
	if(var_295_bool == 0) goto Label_2017; // 0x7de JumpB
	var_290_float = var_291_float; // 0x7df Mov
	goto Label_2018; // 0x7e0 Jump
	
Label_2018:
	return 0; // 0x7e2 Return
	
Label_2017:
	var_290_float = var_292_float; // 0x7e1 Mov
}


func_1504(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x5e0 PushV
	var_27_bool = var_22_object == 0; // 0x5e1 NullEq
	if(var_27_bool == 0) goto Label_1509; // 0x5e2 JumpB
	var_21_bool = 0; // 0x5e3 MovB
	return 4; // 0x5e4 Return
	
Label_1509:
	var_28_bool = 0; // 0x5e5 PushV
	var_28_bool = 0; // 0x5e6 MovB
	var_29_string = "IsDead"; // 0x5e7 PushS
	var_30_int = 1; // 0x5e8 PushI
	var_31_bool = IsFuncExist(var_22_object, var_29_string, var_30_int); // 0x5e9 FuncExist
	if(var_31_bool == 0) goto Label_1521; // 0x5ea JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x5eb PushV
	var_33_object = var_22_object; // 0x5ec Mov
	func_1499(var_33_object); // 0x5ed NEW_2
	if(var_32_bool == 0) goto Label_1521; // 0x5ef JumpB
	var_28_bool = 1; // 0x5f0 MovB
	
Label_1521:
	if(var_28_bool == 0) goto Label_1524; // 0x5f1 JumpB
	var_21_bool = 0; // 0x5f2 MovB
	return 4; // 0x5f3 Return
	
Label_1524:
	GetScene(var_25_object); // 0x5f4 Func
	var_36_bool = var_25_object == 0; // 0x5f6 NullEq
	if(var_36_bool == 0) goto Label_1530; // 0x5f7 JumpB
	var_21_bool = 0; // 0x5f8 MovB
	return 4; // 0x5f9 Return
	
Label_1530:
	GetScene(var_26_object); // 0x5fa ObjFunc
	var_37_bool = var_25_object != var_26_object; // 0x5fc Neq
	if(var_37_bool == 0) goto Label_1536; // 0x5fd JumpB
	var_21_bool = 0; // 0x5fe MovB
	return 4; // 0x5ff Return
	
Label_1536:
	var_21_bool = 1; // 0x600 MovB
	return 4; // 0x601 Return
}


func_2019(var_300_float, var_301_float, var_302_float, var_303_float)
{
	var_304_bool = var_301_float < var_302_float; // 0x7e4 LT
	if(var_304_bool == 0) goto Label_2024; // 0x7e5 JumpB
	var_300_float = var_302_float; // 0x7e6 Mov
	return 0; // 0x7e7 Return
	
Label_2024:
	var_305_bool = var_301_float > var_303_float; // 0x7e8 GT
	if(var_305_bool == 0) goto Label_2028; // 0x7e9 JumpB
	var_300_float = var_303_float; // 0x7ea Mov
	return 0; // 0x7eb Return
	
Label_2028:
	var_300_float = var_301_float; // 0x7ec Mov
	return 0; // 0x7ed Return
}


func_1004(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x3ec TMovT
	var_1_object = 0; // 0x3ed SetNullT
	Face(var_0_object); // 0x3ee Func
	return 0; // 0x3f0 Return
}


func_2030(var_59_bool, var_60_int, var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x7ee PushV
	irand(var_63_int, var_61_int); // 0x7ef Func
	var_59_bool = var_63_int < var_60_int; // 0x7f1 LT2
	return 2; // 0x7f2 Return
}


func_1009(var_0_object)
{
	var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_bool = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_object = Obj(); var_178_int = 0; var_179_cvector = CVector(0,0,0); var_180_float = 0; var_181_object = Obj(); var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_bool = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_object = Obj(); var_190_cvector = CVector(0,0,0); var_191_object = Obj(); var_192_int = 0; var_193_cvector = CVector(0,0,0); var_194_float = 0; var_195_object = Obj(); var_196_object = Obj(); // 0x3f1 PushV
	var_197_object = Obj(); // 0x3f2 PushV
	var_197_object = var_0_object; // 0x3f3 MovT
	func_2111(var_197_object); // 0x3f4 NEW_2
	ReportAttack(var_0_object); // 0x3f6 Func
	var_198_bool = 0; var_199_object = Obj(); // 0x3f8 PushV
	var_199_object = var_0_object; // 0x3f9 MovT
	func_1409(var_198_bool, var_199_object); // 0x3fa NEW_2
	if(var_198_bool == 0) goto Label_1026; // 0x3fc JumpB
	var_200_object = Obj(); // 0x3fd PushV
	func_1992(var_200_object); // 0x3fe NEW_2
	SendPlayerEnemy(var_0_object, var_200_object); // 0x400 Func
	
Label_1026:
	GetDirection(var_183_cvector); // 0x402 Func
	var_201_cvector = CVector(0,0,0); var_202_object = Obj(); // 0x404 PushV
	var_202_object = var_0_object; // 0x405 MovT
	func_1387(var_202_object); // 0x406 NEW_2
	var_184_cvector = var_201_cvector; // 0x407 Mov
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); // 0x409 PushV
	var_208_cvector = var_183_cvector; // 0x40a Mov
	var_209_cvector = var_184_cvector; // 0x40b Mov
	func_2060(var_207_float, var_208_cvector, var_209_cvector); // 0x40c NEW_2
	var_231_float = 0.99939; // 0x40e PushF
	var_232_bool = var_207_float < var_231_float; // 0x40f LT
	if(var_232_bool == 0) goto Label_1042; // 0x410 JumpB
	return 28; // 0x411 Return
	
Label_1042:
	func_2120(); // 0x413 NEW_2
	var_233_string = "all"; // 0x415 PushS
	var_234_string = "attack_begin1"; // 0x416 PushS
	PlayAnimation(var_233_string, var_234_string); // 0x417 Func
	var_235_string = "attack"; // 0x419 PushS
	GetGeometryLocator(var_235_string, var_185_bool, var_186_cvector, var_187_cvector); // 0x41a Func
	var_236_bool = var_185_bool; // 0x41c Push
	if(var_236_bool == 0) goto Label_1063; // 0x41d JumpB
	GetScene(var_189_object); // 0x41e Func
	var_237_string = "light-dynamic"; // 0x420 PushS
	var_238_string = "soldier_fire.xml"; // 0x421 PushS
	AddActorByType(var_188_object, var_237_string, var_189_object, var_186_cvector, var_187_cvector, var_238_string); // 0x422 Func
	var_189_object = 0; // 0x424 SetNull
	var_188_object = 0; // 0x425 SetNull
	goto Label_1065; // 0x426 Jump
	
Label_1065:
	var_239_string = "shot"; // 0x429 PushS
	var_240_cvector = CVector(0.0, 150.0, 0.0); // 0x42a PushVec
	var_241_int = 800; // 0x42b PushI
	var_242_int = 100000; // 0x42c PushI
	PlayGlobalSound(var_239_string, var_240_cvector, var_241_int, var_242_int); // 0x42d Func
	GetDirection(var_183_cvector); // 0x42f Func
	var_243_cvector = CVector(0,0,0); var_244_object = Obj(); // 0x431 PushV
	var_244_object = var_0_object; // 0x432 MovT
	func_1387(var_244_object); // 0x433 NEW_2
	var_184_cvector = var_243_cvector; // 0x434 Mov
	var_245_float = GetByIndex(var_184_cvector, 1); // 0x436 PushE
	var_246_float = 0; var_247_object = Obj(); // 0x437 PushV
	var_247_object = var_0_object; // 0x438 MovT
	func_1701(var_247_object); // 0x439 NEW_2
	var_245_float = var_245_float + var_246_float; // 0x43b Add2
	SetByIndex(var_184_cvector, 1) = var_245_float; // 0x43c PopE
	var_252_float = 0.03491; // 0x43d PushF
	RandVecCone3D(var_190_cvector, var_184_cvector, var_252_float); // 0x43e Func
	GetVictimMaterial(var_190_cvector, var_191_object, var_192_int, var_193_cvector); // 0x440 Func
	var_253_bool = var_191_object != 0; // 0x442 NullNeq
	if(var_253_bool == 0) goto Label_1121; // 0x443 JumpB
	var_254_bool = var_191_object == var_0_object; // 0x444 Eq
	if(var_254_bool == 0) goto Label_1106; // 0x445 JumpB
	var_255_float = 0; var_256_object = Obj(); var_257_float = 0; var_258_int = 0; // 0x446 PushV
	var_256_object = var_0_object; // 0x447 MovT
	var_257_float = 1.5; // 0x448 MovF
	var_258_int = 1; // 0x449 MovI
	func_1426(var_255_float, var_256_object, var_257_float, var_258_int); // 0x44a NEW_2
	var_194_float = var_255_float; // 0x44b Mov
	var_317_int = 2; // 0x44d PushI
	var_318_float = 1.5; // 0x44e PushF
	ReportHit(var_0_object, var_317_int, var_194_float, var_318_float); // 0x44f Func
	goto Label_1121; // 0x451 Jump
	
Label_1121:
	var_319_string = "all"; // 0x461 PushS
	var_320_string = "attack_end1"; // 0x462 PushS
	PlayAnimation(var_319_string, var_320_string); // 0x463 Func
	WaitForAnimEnd(); // 0x465 Func
	var_321_string = "all"; // 0x467 PushS
	var_322_string = "attack_on"; // 0x468 PushS
	LockAnimationEnd(var_321_string, var_322_string); // 0x469 Func
	return 28; // 0x46b Return
	
Label_1106:
	var_323_int = -1; // 0x452 PushI
	var_324_bool = var_192_int != var_323_int; // 0x453 Neq
	if(var_324_bool == 0) goto Label_1121; // 0x454 JumpB
	GetScene(var_195_object); // 0x455 Func
	var_325_string = "scripted"; // 0x457 PushS
	var_326_cvector = CVector(0.0, 0.0, 1.0); // 0x458 PushVec
	var_327_string = "richochet.xml"; // 0x459 PushS
	AddActorByType(var_196_object, var_325_string, var_195_object, var_193_cvector, var_326_cvector, var_327_string); // 0x45a Func
	var_328_string = "Material"; // 0x45c PushS
	SetScriptProperty(var_328_string, var_192_int); // 0x45d ObjFunc
	var_196_object = 0; // 0x45f SetNull
	var_195_object = 0; // 0x460 SetNull
	
Label_1063:
	WaitForAnimEnd(); // 0x427 Func
}


func_2035(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x7f3 PushV
	CreateObjectSet(var_21_object); // 0x7f4 Func
	var_19_object = var_21_object; // 0x7f6 Mov
	return 2; // 0x7f7 Return
}


func_2041(var_210_float, var_211_cvector, var_212_cvector)
{
	var_213_float = GetByIndex(var_211_cvector, 0); // 0x7fa PushE
	var_214_float = GetByIndex(var_212_cvector, 0); // 0x7fb PushE
	var_215_float = var_213_float * var_214_float; // 0x7fc Mult
	var_216_float = GetByIndex(var_211_cvector, 2); // 0x7fd PushE
	var_217_float = GetByIndex(var_212_cvector, 2); // 0x7fe PushE
	var_218_float = var_216_float * var_217_float; // 0x7ff Mult
	var_210_float = var_215_float + var_218_float; // 0x800 Add2
	return 0; // 0x801 Return
}


