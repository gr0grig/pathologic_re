task_0_event_26(var_0_string, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_string = "cleanup"; // 0x1 PushS
	var_14_bool = var_12_bool == var_13_string; // 0x2 Eq
	if(var_14_bool == 0) goto Label_11; // 0x3 JumpB
	var_15_object = Obj(); // 0x4 PushV
	func_1987(var_15_object); // 0x5 NEW_2
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
	func_1826(); // 0xf3 NEW_2
	var_16_int = 41529; // 0xf5 PushI
	var_17_bool = var_13_bool == var_16_int; // 0xf6 Eq
	if(var_17_bool == 0) goto Label_253; // 0xf7 JumpB
	var_18_object = Obj(); var_19_object = Obj(); // 0xf8 PushV
	var_18_object = var_1_object; // 0xf9 MovT
	var_19_object = var_0_object; // 0xfa MovT
	func_2137(); // 0xfb NEW_2
	
Label_253:
	var_43_int = 16575; // 0xfd PushI
	var_44_bool = var_13_bool == var_43_int; // 0xfe Eq
	if(var_44_bool == 0) goto Label_261; // 0xff JumpB
	var_45_object = Obj(); var_46_object = Obj(); // 0x100 PushV
	var_45_object = var_1_object; // 0x101 MovT
	var_46_object = var_0_object; // 0x102 MovT
	func_2137(); // 0x103 NEW_2
	
Label_261:
	var_47_int = 16583; // 0x105 PushI
	var_48_bool = var_13_bool == var_47_int; // 0x106 Eq
	if(var_48_bool == 0) goto Label_269; // 0x107 JumpB
	var_49_object = Obj(); var_50_object = Obj(); // 0x108 PushV
	var_49_object = var_1_object; // 0x109 MovT
	var_50_object = var_0_object; // 0x10a MovT
	func_2142(); // 0x10b NEW_2
	
Label_269:
	var_57_int = 16570; // 0x10d PushI
	var_58_bool = var_12_cvector == var_57_int; // 0x10e Eq
	if(var_58_bool == 0) goto Label_352; // 0x10f JumpB
	var_59_bool = 0; var_60_object = Obj(); // 0x110 PushV
	var_60_object = var_1_object; // 0x111 MovT
	func_2149(var_60_object); // 0x112 NEW_2
	if(var_59_bool == 0) goto Label_307; // 0x114 JumpB
	var_67_object = Obj(); var_68_object = Obj(); // 0x115 PushV
	var_67_object = var_1_object; // 0x116 MovT
	var_68_object = var_0_object; // 0x117 MovT
	func_2125(); // 0x118 NEW_2
	var_71_object = Obj(); var_72_object = Obj(); // 0x11a PushV
	var_71_object = var_1_object; // 0x11b MovT
	var_72_object = var_0_object; // 0x11c MovT
	func_2119(); // 0x11d NEW_2
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
	func_2161(var_100_object); // 0x135 NEW_2
	if(var_99_bool == 0) goto Label_337; // 0x137 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x138 PushV
	var_105_object = var_1_object; // 0x139 MovT
	var_106_object = var_0_object; // 0x13a MovT
	func_2131(); // 0x13b NEW_2
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
	func_2790(var_199_bool); // 0x215 NEW_2
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
	func_2250(var_16_object); // 0x247 NEW_2
	
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
	func_2415(); // 0x2eb NEW_2
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
	func_1687(); // 0x300 NEW_2
	
Label_770:
	return 0; // 0x302 Return
}


	task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool, var_101_object)
	{
	var_102_bool = 0; var_103_object = Obj(); // 0x304 PushV
	var_103_object = var_101_object; // 0x305 Mov
	func_1537(var_102_bool, var_103_object); // 0x306 NEW_2
	var_130_bool = var_102_bool == 0; // 0x308 Not
	if(var_130_bool == 0) goto Label_783; // 0x309 JumpB
	var_131_object = Obj(); // 0x30a PushV
	var_131_object = var_101_object; // 0x30b Mov
	func_2587(var_131_object); // 0x30c NEW_2
	return 0; // 0x30e Return
	
Label_783:
	func_733(); // 0x310 NEW_2
	var_147_object = Obj(); // 0x312 PushV
	var_147_object = var_101_object; // 0x313 Mov
	func_2611(var_147_object); // 0x314 NEW_2
	return 0; // 0x316 Return
	}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0; // 0x318 PushV
	var_16_object = var_12_cvector; // 0x319 Mov
	var_17_object = var_13_cvector; // 0x31a Mov
	var_18_bool = var_14_bool; // 0x31b Mov
	func_2730(var_15_bool, var_16_object, var_17_object, var_18_bool); // 0x31c NEW_2
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
	func_2702(var_13_bool, var_14_object); // 0x327 NEW_2
	if(var_13_bool == 0) goto Label_817; // 0x329 JumpB
	func_733(); // 0x32b NEW_2
	var_133_object = Obj(); // 0x32d PushV
	var_133_object = var_12_bool; // 0x32e Mov
	func_2724(var_133_object); // 0x32f NEW_2
	
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
	func_1687(); // 0x3d8 NEW_2
	
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
	var_102_bool = 0; var_103_object = Obj(); // 0x46b PushV
	var_103_object = var_101_object; // 0x46c Mov
	func_1537(var_102_bool, var_103_object); // 0x46d NEW_2
	var_130_bool = var_102_bool == 0; // 0x46f Not
	if(var_130_bool == 0) goto Label_1138; // 0x470 JumpB
	return 0; // 0x471 Return
	
Label_1138:
	var_131_object = Obj(); // 0x472 PushV
	var_131_object = var_101_object; // 0x473 Mov
	func_2587(var_131_object); // 0x474 NEW_2
	var_146_bool = var_101_object == var_0_object; // 0x476 Eq
	if(var_146_bool == 0) goto Label_1146; // 0x477 JumpB
	var_1_object = 0; // 0x478 SetNullT
	goto Label_1153; // 0x479 Jump
	
Label_1153:
	return 0; // 0x481 Return
	
Label_1146:
	var_1_object = var_101_object; // 0x47a TMov
	var_147_object = var_2_object; // 0x47b PushT
	if(var_147_object == 0) goto Label_1153; // 0x47c JumpB
	StopAnimation(); // 0x47d Func
	StopGroup0(); // 0x47f Func
	}


task_5_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_object, var_11_bool, var_12_cvector, var_13_cvector, var_14_bool)
{
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj(); var_18_bool = 0; // 0x483 PushV
	var_16_object = var_12_cvector; // 0x484 Mov
	var_17_object = var_13_cvector; // 0x485 Mov
	var_18_bool = var_14_bool; // 0x486 Mov
	func_2730(var_15_bool, var_16_object, var_17_object, var_18_bool); // 0x487 NEW_2
	if(var_15_bool == 0) goto Label_1166; // 0x489 JumpB
	var_101_object = Obj(); // 0x48a PushV
	var_101_object = var_12_cvector; // 0x48b Mov
	func_1130(); // 0x48c NEW_2
	
Label_1166:
	return 0; // 0x48e Return
}


task_6_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x4a8 PushV
	var_15_object = GlobalVars[0]; // 0x4a9 PushGE
	in(var_14_bool, var_12_object); // 0x4aa ObjFunc
	var_16_bool = var_14_bool == 0; // 0x4ac Not
	if(var_16_bool == 0) goto Label_1202; // 0x4ad JumpB
	var_17_object = Obj(); // 0x4ae PushV
	var_17_object = var_12_object; // 0x4af Mov
	func_1167(var_17_object); // 0x4b0 NEW_2
	
Label_1202:
	return 2; // 0x4b2 Return
}


task_6_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x4b3 PushV
	var_15_string = "attack"; // 0x4b4 PushS
	var_16_bool = var_12_string == var_15_string; // 0x4b5 Eq
	if(var_16_bool == 0) goto Label_1220; // 0x4b6 JumpB
	var_17_object = Obj(); // 0x4b7 PushV
	func_1399(var_17_object); // 0x4b8 NEW_2
	var_14_object = var_17_object; // 0x4b9 Mov
	func_1364(); // 0x4bc NEW_2
	var_21_object = Obj(); // 0x4be PushV
	var_21_object = var_14_object; // 0x4bf Mov
	func_2611(var_21_object); // 0x4c0 NEW_2
	var_14_object = 0; // 0x4c2 SetNull
	goto Label_1224; // 0x4c3 Jump
	
Label_1224:
	return 2; // 0x4c8 Return
	
Label_1220:
	var_287_string = "cleanup"; // 0x4c4 PushS
	var_288_bool = var_12_string == var_287_string; // 0x4c5 Eq
	if(var_288_bool == 0) goto Label_1224; // 0x4c6 JumpB
	var_2_object = 1; // 0x4c7 TMovB
}


task_6_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_string = ""; var_15_string = ""; // 0x4ca PushV
	var_14_string = "quest_d10_01"; // 0x4cb MovS
	var_15_string = "soldier_fight"; // 0x4cc MovS
	func_2087(var_13_bool, var_14_string, var_15_string); // 0x4cd NEW_2
	return 0; // 0x4cf Return
}


task_6_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_object, var_14_bool)
{
	return 0; // 0x4d1 Return
}


task_6_event_3(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0; // 0x4d2 PushV
	var_15_bool = 0; var_16_object = Obj(); // 0x4d3 PushV
	var_16_object = var_12_object; // 0x4d4 Mov
	func_1537(var_15_bool, var_16_object); // 0x4d5 NEW_2
	var_49_bool = var_15_bool == 0; // 0x4d7 Not
	if(var_49_bool == 0) goto Label_1242; // 0x4d8 JumpB
	return 2; // 0x4d9 Return
	
Label_1242:
	var_50_object = GlobalVars[0]; // 0x4da PushGE
	in(var_14_bool, var_12_object); // 0x4db ObjFunc
	var_51_bool = var_14_bool; // 0x4dd Push
	if(var_51_bool == 0) goto Label_1256; // 0x4de JumpB
	func_1364(); // 0x4e0 NEW_2
	var_52_object = Obj(); // 0x4e2 PushV
	var_52_object = var_12_object; // 0x4e3 Mov
	TaskCall(4); // 0x4e4 TaskCall
	func_709(var_53_object, var_52_object); // 0x4e5 NEW_2
	TaskReturn(); // 0x4e6 TaskReturn
	
Label_1256:
	return 2; // 0x4e8 Return
}


task_6_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x4f3 PushV
	var_14_object = var_12_object; // 0x4f4 Mov
	func_2702(var_13_bool, var_14_object); // 0x4f5 NEW_2
	if(var_13_bool == 0) goto Label_1279; // 0x4f7 JumpB
	func_1364(); // 0x4f9 NEW_2
	var_132_object = Obj(); // 0x4fb PushV
	var_132_object = var_12_object; // 0x4fc Mov
	func_2756(var_132_object); // 0x4fd NEW_2
	
Label_1279:
	return 0; // 0x4ff Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; // 0x951 PushV
	var_16_object = var_12_object; // 0x952 Mov
	var_17_int = var_13_int; // 0x953 Mov
	var_18_float = var_14_float; // 0x954 Mov
	func_1605(var_16_object, var_17_int, var_18_float); // 0x955 NEW_2
	return 0; // 0x957 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_int, var_14_float, var_15_float, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_int = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); // 0x959 PushV
	var_18_object = var_12_object; // 0x95a Mov
	var_19_int = var_13_int; // 0x95b Mov
	var_20_float = var_14_float; // 0x95c Mov
	var_21_cvector = var_16_cvector; // 0x95d Mov
	var_22_cvector = var_17_cvector; // 0x95e Mov
	func_1673(var_20_float, var_21_cvector, var_22_cvector); // 0x95f NEW_2
	return 0; // 0x961 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0; // 0x962 PushV
	var_16_string = "health"; // 0x963 PushS
	var_17_bool = var_13_string == var_16_string; // 0x964 Eq
	if(var_17_bool == 0) goto Label_2414; // 0x965 JumpB
	var_18_string = "health"; // 0x966 PushS
	GetProperty(var_18_string, var_15_float); // 0x967 Func
	var_19_int = 0; // 0x969 PushI
	var_20_bool = var_15_float <= var_19_int; // 0x96a LE
	if(var_20_bool == 0) goto Label_2414; // 0x96b JumpB
	SignalDeath(var_12_object); // 0x96c Func
	
Label_2414:
	return 2; // 0x96e Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); // 0x970 PushV
	var_14_object = var_12_object; // 0x971 Mov
	func_1406(var_13_bool, var_14_object); // 0x972 NEW_2
	if(var_13_bool == 0) goto Label_2428; // 0x974 JumpB
	var_17_object = Obj(); // 0x975 PushV
	func_1987(var_17_object); // 0x976 NEW_2
	var_20_float = 0.0; // 0x978 PushF
	var_21_bool = 1; // 0x979 PushB
	ReportReputationChange(var_12_object, var_17_object, var_20_float, var_21_bool); // 0x97a Func
	
Label_2428:
	var_22_object = Obj(); // 0x97c PushV
	var_22_object = var_12_object; // 0x97d Mov
	func_2776(var_22_object); // 0x97e NEW_2
	return 0; // 0x980 Return
}


event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_object = Obj(); // 0xad0 PushV
	func_1987(var_12_object); // 0xad1 NEW_2
	RemoveActor(var_12_object); // 0xad3 Func
	Hold(); // 0xad5 Func
	return 0; // 0xad7 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_bool = 0; // 0x49a PushV
	func_1705(var_12_bool); // 0x49b NEW_2
	var_15_bool = var_12_bool == 0; // 0x49d Not
	if(var_15_bool == 0) goto Label_1188; // 0x49e JumpB
	TaskCall(0); // 0x4a0 TaskCall
	func_12(); // 0x4a1 NEW_2
	TaskReturn(); // 0x4a2 TaskReturn
	
Label_1188:
	func_1257(); // 0x4a5 NEW_2
	return 0; // 0x4a7 Return
}


func_1537(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0; // 0x601 PushV
	var_21_bool = 0; var_22_object = Obj(); // 0x602 PushV
	var_22_object = var_18_object; // 0x603 Mov
	func_1501(var_21_bool, var_22_object); // 0x604 NEW_2
	var_38_bool = var_21_bool == 0; // 0x606 Not
	if(var_38_bool == 0) goto Label_1546; // 0x607 JumpB
	var_17_bool = 0; // 0x608 MovB
	return 2; // 0x609 Return
	
Label_1546:
	var_39_bool = 0; var_40_object = Obj(); var_41_string = ""; // 0x60a PushV
	var_40_object = var_18_object; // 0x60b Mov
	var_41_string = "noaccess"; // 0x60c MovS
	func_1411(var_39_bool, var_40_object, var_41_string); // 0x60d NEW_2
	var_48_bool = var_39_bool == 0; // 0x60f Not
	if(var_48_bool == 0) goto Label_1555; // 0x610 JumpB
	var_17_bool = 1; // 0x611 MovB
	return 2; // 0x612 Return
	
Label_1555:
	var_49_string = "noaccess"; // 0x613 PushS
	GetProperty(var_49_string, var_20_int); // 0x614 ObjFunc
	var_50_int = 0; // 0x616 PushI
	var_17_bool = var_20_int == var_50_int; // 0x617 Eq2
	return 2; // 0x618 Return
}


func_2055(var_207_float, var_208_cvector, var_209_cvector)
{
	var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); // 0x808 PushV
	var_211_cvector = var_208_cvector; // 0x809 Mov
	var_212_cvector = var_209_cvector; // 0x80a Mov
	func_2036(var_210_float, var_211_cvector, var_212_cvector); // 0x80b NEW_2
	var_219_float = 0; var_220_cvector = CVector(0,0,0); // 0x80d PushV
	var_220_cvector = var_208_cvector; // 0x80e Mov
	func_2045(var_219_float, var_220_cvector); // 0x80f NEW_2
	var_228_float = 0; var_229_cvector = CVector(0,0,0); // 0x811 PushV
	var_229_cvector = var_209_cvector; // 0x812 Mov
	func_2045(var_228_float, var_229_cvector); // 0x813 NEW_2
	var_230_float = var_219_float * var_228_float; // 0x815 Mult
	var_207_float = var_210_float / var_210_float; // 0x816 Div2
	return 0; // 0x817 Return
}


func_2569()
{
	var_18_object = GlobalVars[0]; // 0xa09 PushGE
	var_19_object = Obj(); // 0xa0a PushV
	func_2030(var_19_object); // 0xa0b NEW_2
	var_18_object = var_19_object; // 0xa0c Mov
	GlobalVars[0] = var_18_object; // 0xa0e PopGE
	return 0; // 0xa0f Return
}


func_12()
{
	
Label_12:
	Hold(); // 0xc Func
	var_16_bool = 0; // 0xe PushV
	func_1705(var_16_bool); // 0xf NEW_2
	var_17_bool = var_16_bool == 0; // 0x11 Not
	if(var_17_bool == 0) goto Label_12; // 0x12 JumpB
	return 0; // 0x13 Return
}


func_2576(var_137_object, var_138_bool)
{
	var_139_object = Obj(); var_140_bool = 0; // 0xa11 PushV
	var_139_object = var_137_object; // 0xa12 Mov
	var_140_bool = var_138_bool; // 0xa13 Mov
	TaskCall(5); // 0xa14 TaskCall
	func_829(var_141_object, var_142_object, var_143_bool, var_139_object, var_140_bool); // 0xa15 NEW_2
	TaskReturn(); // 0xa16 TaskReturn
	ResetAAS(); // 0xa18 Func
	return 0; // 0xa1a Return
}


func_2072(var_98_int, var_99_string)
{
	var_100_int = 0; var_101_int = 0; // 0x818 PushV
	GetVariable(var_99_string, var_101_int); // 0x819 Func
	var_98_int = var_101_int; // 0x81b Mov
	return 2; // 0x81c Return
}


func_1561(var_29_object)
{
	var_30_bool = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = ""; var_37_bool = 0; var_38_int = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_string = ""; // 0x619 PushV
	var_44_bool = var_29_object == 0; // 0x61a NullEq
	if(var_44_bool == 0) goto Label_1565; // 0x61b JumpB
	return 14; // 0x61c Return
	
Label_1565:
	IsDead(var_37_bool); // 0x61d Func
	var_45_bool = var_37_bool; // 0x61f Push
	if(var_45_bool == 0) goto Label_1570; // 0x620 JumpB
	return 14; // 0x621 Return
	
Label_1570:
	GetSecondaryAnimationType(var_38_int); // 0x622 Func
	var_46_int = 0; // 0x624 PushI
	var_47_bool = var_38_int < var_46_int; // 0x625 LT
	if(var_47_bool == 0) goto Label_1576; // 0x626 JumpB
	return 14; // 0x627 Return
	
Label_1576:
	GetPosition(var_39_cvector); // 0x628 ObjFunc
	GetPosition(var_40_cvector); // 0x62a Func
	GetDirection(var_41_cvector); // 0x62c Func
	var_42_cvector = var_40_cvector - var_39_cvector; // 0x62e Sub2
	var_48_float = GetByIndex(var_42_cvector, 0); // 0x62f PushE
	var_49_float = GetByIndex(var_41_cvector, 0); // 0x630 PushE
	var_50_float = var_48_float * var_49_float; // 0x631 Mult
	var_51_float = GetByIndex(var_42_cvector, 2); // 0x632 PushE
	var_52_float = GetByIndex(var_41_cvector, 2); // 0x633 PushE
	var_53_float = var_51_float * var_52_float; // 0x634 Mult
	var_54_int = var_50_float + var_53_float; // 0x635 Add
	var_55_int = 0; // 0x636 PushI
	var_56_bool = var_54_int >= var_55_int; // 0x637 GE
	if(var_56_bool == 0) goto Label_1595; // 0x638 JumpB
	var_43_string = "fhit"; // 0x639 MovS
	goto Label_1596; // 0x63a Jump
	
Label_1596:
	var_57_string = "hit_react"; // 0x63c PushS
	var_58_string = "1"; // 0x63d PushS
	var_59_int = var_43_string + var_58_string; // 0x63e Add
	var_60_string = "2"; // 0x63f PushS
	var_61_int = var_43_string + var_60_string; // 0x640 Add
	var_62_int = -10; // 0x641 PushI
	FadeSecondaryAnimation(var_57_string, var_59_int, var_61_int, var_62_int); // 0x642 Func
	return 14; // 0x644 Return
	
Label_1595:
	var_43_string = "bhit"; // 0x63b MovS
}


func_25(var_0_object, var_18_int, var_19_object)
{
	var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0; var_27_int = 0; var_28_bool = 0; // 0x19 PushV
	var_0_object = var_19_object; // 0x1a TMov
	var_29_bool = 0; var_30_object = Obj(); var_31_float = 0; // 0x1b PushV
	var_30_object = var_19_object; // 0x1c Mov
	var_31_float = 70.0; // 0x1d MovF
	func_1710(var_30_object, var_31_float); // 0x1e NEW_2
	var_75_bool = var_29_bool == 0; // 0x20 Not
	if(var_75_bool == 0) goto Label_36; // 0x21 JumpB
	var_18_int = -2; // 0x22 MovI
	return 8; // 0x23 Return
	
Label_36:
	CreateDialog(var_25_object); // 0x24 Func
	var_76_int = 0; // 0x26 PushV
	func_2784(var_76_int); // 0x27 NEW_2
	SetNPCName(var_76_int); // 0x29 ObjFunc
	var_77_int = 0; // 0x2b PushV
	func_2782(var_77_int); // 0x2c NEW_2
	SetNPCDescription(var_77_int); // 0x2e ObjFunc
	var_78_string = ""; // 0x30 PushV
	func_2786(var_78_string); // 0x31 NEW_2
	SetPhoto(var_78_string); // 0x33 ObjFunc
	var_79_string = ""; // 0x35 PushV
	func_2788(var_79_string); // 0x36 NEW_2
	SetPhoto2(var_79_string); // 0x38 ObjFunc
	var_80_int = 0; // 0x3a PushV
	func_2227(var_80_int); // 0x3b NEW_2
	SetPlayerName(var_80_int); // 0x3d ObjFunc
	var_27_int = -1; // 0x3f MovI
	IsOverrideActive(var_26_bool); // 0x40 Func
	var_88_bool = var_26_bool; // 0x42 Push
	if(var_88_bool == 0) goto Label_70; // 0x43 JumpB
	var_18_int = -2; // 0x44 MovI
	return 8; // 0x45 Return
	
Label_70:
	DoDialog(var_25_object); // 0x46 Func
	var_89_object = Obj(); var_90_object = Obj(); // 0x48 PushV
	var_89_object = var_19_object; // 0x49 Mov
	var_90_object = var_25_object; // 0x4a Mov
	TaskCall(2); // 0x4b TaskCall
	func_99(var_91_object, var_92_object, var_93_string, var_94_bool, var_89_object, var_90_object); // 0x4c NEW_2
	TaskReturn(); // 0x4d TaskReturn
	IsDialogEnd(var_28_bool); // 0x4f ObjFunc
	
Label_81:
	var_177_bool = var_28_bool == 0; // 0x51 Not
	if(var_177_bool == 0) goto Label_88; // 0x52 JumpB
	sync(); // 0x53 Func
	IsDialogEnd(var_28_bool); // 0x55 ObjFunc
	goto Label_81; // 0x57 Jump
	
Label_88:
	var_178_object = Obj(); // 0x58 PushV
	var_178_object = var_19_object; // 0x59 Mov
	func_1778(); // 0x5a NEW_2
	StopDialog(var_25_object); // 0x5c Func
	GetReturnValue(var_27_int); // 0x5e ObjFunc
	var_18_int = var_27_int; // 0x60 Mov
	return 8; // 0x61 Return
}


func_2587(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0; // 0xa1b PushV
	var_25_bool = var_22_object == 0; // 0xa1c NullEq
	if(var_25_bool == 0) goto Label_2591; // 0xa1d JumpB
	return 2; // 0xa1e Return
	
Label_2591:
	var_26_object = GlobalVars[0]; // 0xa1f PushGE
	in(var_24_bool, var_22_object); // 0xa20 ObjFunc
	var_27_bool = var_24_bool == 0; // 0xa22 Not
	if(var_27_bool == 0) goto Label_2599; // 0xa23 JumpB
	var_28_object = GlobalVars[0]; // 0xa24 PushGE
	add(var_22_object); // 0xa25 ObjFunc
	
Label_2599:
	var_29_bool = 0; var_30_object = Obj(); // 0xa27 PushV
	var_30_object = var_22_object; // 0xa28 Mov
	func_1406(var_29_bool, var_30_object); // 0xa29 NEW_2
	if(var_29_bool == 0) goto Label_2610; // 0xa2b JumpB
	var_33_object = Obj(); // 0xa2c PushV
	func_1987(var_33_object); // 0xa2d NEW_2
	var_36_float = 0.0; // 0xa2f PushF
	ReportReputationChange(var_22_object, var_33_object, var_36_float); // 0xa30 Func
	
Label_2610:
	return 2; // 0xa32 Return
}


func_2077(var_305_float)
{
	var_306_object = Obj(); var_307_object = Obj(); // 0x81d PushV
	CreateFloatVector(var_307_object); // 0x81e Func
	add(var_305_float); // 0x820 ObjFunc
	var_308_int = 15; // 0x822 PushI
	SendWorldWndMessage(var_308_int, var_307_object); // 0x823 Func
	return 2; // 0x825 Return
}


func_544(var_24_object)
{
	var_25_bool = 0; var_26_object = Obj(); // 0x221 PushV
	var_26_object = var_24_object; // 0x222 Mov
	func_1406(var_25_bool, var_26_object); // 0x223 NEW_2
	if(var_25_bool == 0) goto Label_553; // 0x225 JumpB
	func_2335(); // 0x227 NEW_2
	
Label_553:
	func_2311(); // 0x22a NEW_2
	var_103_object = Obj(); // 0x22c PushV
	var_103_object = var_24_object; // 0x22d Mov
	func_561(var_103_object); // 0x22e NEW_2
	return 0; // 0x230 Return
}


func_2087(var_13_bool, var_14_string, var_15_string)
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x827 PushV
	FindActor(var_17_object, var_14_string); // 0x828 Func
	var_18_bool = var_17_object == 0; // 0x82a NullEq
	if(var_18_bool == 0) goto Label_2094; // 0x82b JumpB
	var_13_bool = 0; // 0x82c MovB
	return 2; // 0x82d Return
	
Label_2094:
	Trigger(var_17_object, var_15_string); // 0x82e Func
	var_13_bool = 1; // 0x830 MovB
	return 2; // 0x831 Return
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


func_2611(var_21_object)
{
	var_22_object = Obj(); // 0xa34 PushV
	var_22_object = var_21_object; // 0xa35 Mov
	func_2587(var_22_object); // 0xa36 NEW_2
	var_37_object = Obj(); var_38_bool = 0; // 0xa38 PushV
	var_37_object = var_21_object; // 0xa39 Mov
	var_38_bool = 1; // 0xa3a MovB
	func_2576(var_37_object, var_38_bool); // 0xa3b NEW_2
	return 0; // 0xa3d Return
}


func_2099(var_148_object)
{
	var_149_bool = 0; var_150_bool = 0; // 0x833 PushV
	IsPlayerActor(var_148_object, var_150_bool); // 0x834 Func
	var_151_bool = var_150_bool; // 0x836 Push
	if(var_151_bool == 0) goto Label_2107; // 0x837 JumpB
	var_152_string = "attack"; // 0x838 PushS
	PlayGlobalMusic(var_152_string); // 0x839 Func
	
Label_2107:
	return 2; // 0x83b Return
}


func_2108()
{
	var_153_object = Obj(); var_154_object = Obj(); // 0x83c PushV
	GetScene(var_154_object); // 0x83d Func
	var_155_string = "battle"; // 0x83f PushS
	var_156_object = Obj(); // 0x840 PushV
	func_1987(var_156_object); // 0x841 NEW_2
	BroadcastMessage(var_155_string, var_156_object, var_154_object); // 0x843 Func
	return 2; // 0x845 Return
}


func_2622(var_54_bool, var_55_object)
{
	var_56_float = 0; var_57_string = ""; var_58_float = 0; var_59_float = 0; var_60_string = ""; var_61_float = 0; // 0xa3e PushV
	var_62_bool = 0; var_63_object = Obj(); // 0xa3f PushV
	var_63_object = var_55_object; // 0xa40 Mov
	func_1537(var_62_bool, var_63_object); // 0xa41 NEW_2
	var_64_bool = var_62_bool == 0; // 0xa43 Not
	if(var_64_bool == 0) goto Label_2631; // 0xa44 JumpB
	var_54_bool = 0; // 0xa45 MovB
	return 6; // 0xa46 Return
	
Label_2631:
	var_65_bool = 0; var_66_object = Obj(); // 0xa47 PushV
	var_66_object = var_55_object; // 0xa48 Mov
	func_1406(var_65_bool, var_66_object); // 0xa49 NEW_2
	if(var_65_bool == 0) goto Label_2642; // 0xa4b JumpB
	var_69_string = "reputation"; // 0xa4c PushS
	GetProperty(var_69_string, var_59_float); // 0xa4d ObjFunc
	var_70_float = 0.33; // 0xa4f PushF
	var_54_bool = var_59_float < var_70_float; // 0xa50 LT2
	return 6; // 0xa51 Return
	
Label_2642:
	var_71_bool = 0; var_72_object = Obj(); var_73_string = ""; // 0xa52 PushV
	var_72_object = var_55_object; // 0xa53 Mov
	var_73_string = "class"; // 0xa54 MovS
	func_1411(var_71_bool, var_72_object, var_73_string); // 0xa55 NEW_2
	var_74_bool = var_71_bool == 0; // 0xa57 Not
	if(var_74_bool == 0) goto Label_2651; // 0xa58 JumpB
	var_54_bool = 0; // 0xa59 MovB
	return 6; // 0xa5a Return
	
Label_2651:
	var_75_string = "class"; // 0xa5b PushS
	GetProperty(var_75_string, var_60_string); // 0xa5c ObjFunc
	var_76_bool = 0; // 0xa5e PushV
	var_76_bool = 1; // 0xa5f MovB
	var_77_bool = 0; // 0xa60 PushV
	var_77_bool = 1; // 0xa61 MovB
	var_78_string = "bomber"; // 0xa62 PushS
	var_79_bool = var_60_string == var_78_string; // 0xa63 Eq
	if(var_79_bool == 0) goto Label_2665; // 0xa64 JumpB
	var_80_string = "hunter"; // 0xa65 PushS
	var_81_bool = var_60_string == var_80_string; // 0xa66 Eq
	if(var_81_bool == 0) goto Label_2665; // 0xa67 JumpB
	var_77_bool = 0; // 0xa68 MovB
	
Label_2665:
	if(var_77_bool == 0) goto Label_2670; // 0xa69 JumpB
	var_82_string = "grabitel"; // 0xa6a PushS
	var_83_bool = var_60_string == var_82_string; // 0xa6b Eq
	if(var_83_bool == 0) goto Label_2670; // 0xa6c JumpB
	var_76_bool = 0; // 0xa6d MovB
	
Label_2670:
	if(var_76_bool == 0) goto Label_2673; // 0xa6e JumpB
	var_54_bool = 1; // 0xa6f MovB
	return 6; // 0xa70 Return
	
Label_2673:
	var_84_bool = 0; var_85_object = Obj(); var_86_string = ""; // 0xa71 PushV
	var_85_object = var_55_object; // 0xa72 Mov
	var_86_string = "disease"; // 0xa73 MovS
	func_1411(var_84_bool, var_85_object, var_86_string); // 0xa74 NEW_2
	var_87_bool = var_84_bool == 0; // 0xa76 Not
	if(var_87_bool == 0) goto Label_2682; // 0xa77 JumpB
	var_54_bool = 0; // 0xa78 MovB
	return 6; // 0xa79 Return
	
Label_2682:
	var_88_bool = 0; // 0xa7a PushV
	var_88_bool = 1; // 0xa7b MovB
	var_89_bool = 0; var_90_string = ""; // 0xa7c PushV
	var_90_string = var_60_string; // 0xa7d Mov
	func_1900(var_89_bool, var_90_string); // 0xa7e NEW_2
	if(var_89_bool == 0) goto Label_2693; // 0xa80 JumpB
	var_128_string = "dog"; // 0xa81 PushS
	var_129_bool = var_60_string == var_128_string; // 0xa82 Eq
	if(var_129_bool == 0) goto Label_2693; // 0xa83 JumpB
	var_88_bool = 0; // 0xa84 MovB
	
Label_2693:
	if(var_88_bool == 0) goto Label_2700; // 0xa85 JumpB
	var_130_string = "disease"; // 0xa86 PushS
	GetProperty(var_130_string, var_61_float); // 0xa87 ObjFunc
	var_131_int = 0; // 0xa89 PushI
	var_54_bool = var_61_float > var_131_int; // 0xa8a GT2
	return 6; // 0xa8b Return
	
Label_2700:
	var_54_bool = 0; // 0xa8c MovB
	return 6; // 0xa8d Return
}


func_1605(var_16_object, var_17_int, var_18_float)
{
	var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_int = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_object = Obj(); var_30_int = 0; var_31_bool = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); // 0x645 PushV
	var_37_bool = 0; // 0x646 PushV
	var_37_bool = 0; // 0x647 MovB
	var_38_bool = 0; // 0x648 PushV
	var_38_bool = 0; // 0x649 MovB
	var_39_object = var_16_object; // 0x64a Push
	if(var_39_object == 0) goto Label_1616; // 0x64b JumpB
	var_40_int = 4; // 0x64c PushI
	var_41_bool = var_17_int != var_40_int; // 0x64d Neq
	if(var_41_bool == 0) goto Label_1616; // 0x64e JumpB
	var_38_bool = 1; // 0x64f MovB
	
Label_1616:
	if(var_38_bool == 0) goto Label_1621; // 0x650 JumpB
	var_42_int = 5; // 0x651 PushI
	var_43_bool = var_17_int != var_42_int; // 0x652 Neq
	if(var_43_bool == 0) goto Label_1621; // 0x653 JumpB
	var_37_bool = 1; // 0x654 MovB
	
Label_1621:
	if(var_37_bool == 0) goto Label_1668; // 0x655 JumpB
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x656 PushV
	var_46_cvector = CVector(0,0,0); var_47_object = Obj(); // 0x657 PushV
	var_47_object = var_16_object; // 0x658 Mov
	func_1384(var_47_object); // 0x659 NEW_2
	var_45_cvector = var_46_cvector; // 0x65a Mov
	func_1993(var_44_cvector, var_45_cvector); // 0x65c NEW_2
	var_28_cvector = var_44_cvector; // 0x65d Mov
	CreateVectorVector(var_29_object); // 0x65f Func
	var_30_int = 1; // 0x661 MovI
	
Label_1634:
	var_57_string = "hit"; // 0x662 PushS
	var_58_int = var_57_string + var_30_int; // 0x663 Add
	GetGeometryLocator(var_58_int, var_31_bool, var_32_cvector, var_33_cvector); // 0x664 Func
	var_59_bool = var_31_bool == 0; // 0x666 Not
	if(var_59_bool == 0) goto Label_1641; // 0x667 JumpB
	goto Label_1650; // 0x668 Jump
	
Label_1650:
	size(var_34_int); // 0x672 ObjFunc
	var_60_int = var_34_int; // 0x674 Push
	if(var_60_int == 0) goto Label_1667; // 0x675 JumpB
	irand(var_35_int, var_34_int); // 0x676 Func
	get(var_36_cvector, var_35_int); // 0x678 ObjFunc
	var_61_object = Obj(); var_62_int = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x67a PushV
	var_61_object = var_16_object; // 0x67b Mov
	var_62_int = var_17_int; // 0x67c Mov
	var_63_float = var_18_float; // 0x67d Mov
	var_64_cvector = var_36_cvector; // 0x67e Mov
	var_65_cvector = -var_28_cvector; // 0x67f Neg2
	func_1673(var_63_float, var_64_cvector, var_65_cvector); // 0x680 NEW_2
	return 18; // 0x682 Return
	
Label_1667:
	var_29_object = 0; // 0x683 SetNull
	
Label_1668:
	var_106_object = Obj(); // 0x684 PushV
	var_106_object = var_16_object; // 0x685 Mov
	func_1561(var_106_object); // 0x686 NEW_2
	return 18; // 0x688 Return
	
Label_1641:
	var_107_int = var_33_cvector | var_28_cvector; // 0x669 Or
	var_108_float = 0.70711; // 0x66a PushF
	var_109_bool = var_107_int >= var_108_float; // 0x66b GE
	if(var_109_bool == 0) goto Label_1647; // 0x66c JumpB
	add(var_32_cvector); // 0x66d ObjFunc
	
Label_1647:
	var_110_int = 1; // 0x66f PushI
	var_30_int = var_30_int + var_110_int; // 0x670 Add2
	goto Label_1634; // 0x671 Jump
}


func_2119()
{
	var_110_string = "d10q01SoldierTalk"; // 0x848 PushS
	var_111_int = 1; // 0x849 PushI
	SetVariable(var_110_string, var_111_int); // 0x84a Func
	return 0; // 0x84c Return
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
	func_1859(var_179_string); // 0x290 NEW_2
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


func_2125()
{
	var_106_string = "ood10MSoldier1"; // 0x84e PushS
	var_107_int = 1; // 0x84f PushI
	SetVariable(var_106_string, var_107_int); // 0x850 Func
	return 0; // 0x852 Return
}


func_2131()
{
	var_162_string = "ood10MSoldier2"; // 0x854 PushS
	var_163_int = 1; // 0x855 PushI
	SetVariable(var_162_string, var_163_int); // 0x856 Func
	return 0; // 0x858 Return
}


func_2137()
{
	func_2173(); // 0x85b NEW_2
	return 0; // 0x85d Return
}


func_2142()
{
	var_51_bool = 0; var_52_string = ""; var_53_string = ""; // 0x85f PushV
	var_52_string = "quest_d10_01"; // 0x860 MovS
	var_53_string = "soldier_fight"; // 0x861 MovS
	func_2087(var_51_bool, var_52_string, var_53_string); // 0x862 NEW_2
	return 0; // 0x864 Return
}


func_99(var_0_object, var_1_object, var_2_object, var_3_string, var_89_object, var_90_object)
{
	var_0_object = var_90_object; // 0x64 TMov
	var_1_object = var_89_object; // 0x65 TMov
	var_3_string = 0; // 0x66 TMovB
	var_95_int = 1; // 0x67 PushI
	if(var_95_int == 0) goto Label_187; // 0x68 JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x69 PushV
	var_97_object = var_1_object; // 0x6a MovT
	func_2149(var_97_object); // 0x6b NEW_2
	if(var_96_bool == 0) goto Label_140; // 0x6d JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x6e PushV
	var_104_object = var_1_object; // 0x6f MovT
	var_105_object = var_0_object; // 0x70 MovT
	func_2125(); // 0x71 NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x73 PushV
	var_108_object = var_1_object; // 0x74 MovT
	var_109_object = var_0_object; // 0x75 MovT
	func_2119(); // 0x76 NEW_2
	var_112_string = ""; // 0x78 PushV
	var_112_string = "Neutral"; // 0x79 MovS
	func_217(var_90_object, var_112_string); // 0x7a NEW_2
	var_129_int = 515453; // 0x7c PushI
	SetMessage(var_129_int); // 0x7d TObjFunc
	ClearReplies(); // 0x7f TObjFunc
	var_130_int = 515454; // 0x81 PushI
	var_131_int = 16572; // 0x82 PushI
	var_132_int = 16571; // 0x83 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x84 TObjFunc
	var_133_int = 539571; // 0x86 PushI
	var_134_int = 41513; // 0x87 PushI
	var_135_int = 41512; // 0x88 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x89 TObjFunc
	goto Label_187; // 0x8b Jump
	
Label_187:
	var_136_bool = 0; // 0xbb PushV
	func_2790(var_136_bool); // 0xbc NEW_2
	if(var_136_bool == 0) goto Label_202; // 0xbe JumpB
	
Label_191:
	lshWaitForAnimEnd(); // 0xbf Func
	var_137_string = var_3_string; // 0xc1 PushT
	if(var_137_string == 0) goto Label_196; // 0xc2 JumpB
	goto Label_201; // 0xc3 Jump
	
Label_201:
	goto Label_216; // 0xc9 Jump
	
Label_216:
	return 0; // 0xd8 Return
	
Label_196:
	var_138_string = ""; // 0xc4 PushV
	var_138_string = var_2_object; // 0xc5 MovT
	func_1795(var_138_string); // 0xc6 NEW_2
	goto Label_191; // 0xc8 Jump
	
Label_202:
	var_149_string = "all"; // 0xca PushS
	var_150_string = "idle"; // 0xcb PushS
	PlayAnimation(var_149_string, var_150_string); // 0xcc Func
	
Label_206:
	WaitForAnimEnd(); // 0xce Func
	var_151_string = var_3_string; // 0xd0 PushT
	if(var_151_string == 0) goto Label_211; // 0xd1 JumpB
	goto Label_216; // 0xd2 Jump
	
Label_211:
	var_152_string = "all"; // 0xd3 PushS
	var_153_string = "idle"; // 0xd4 PushS
	PlayAnimation(var_152_string, var_153_string); // 0xd5 Func
	goto Label_206; // 0xd7 Jump
	
Label_140:
	var_154_bool = 0; var_155_object = Obj(); // 0x8c PushV
	var_155_object = var_1_object; // 0x8d MovT
	func_2161(var_155_object); // 0x8e NEW_2
	if(var_154_bool == 0) goto Label_170; // 0x90 JumpB
	var_160_object = Obj(); var_161_object = Obj(); // 0x91 PushV
	var_160_object = var_1_object; // 0x92 MovT
	var_161_object = var_0_object; // 0x93 MovT
	func_2131(); // 0x94 NEW_2
	var_164_string = ""; // 0x96 PushV
	var_164_string = "Neutral"; // 0x97 MovS
	func_217(var_90_object, var_164_string); // 0x98 NEW_2
	var_165_int = 515459; // 0x9a PushI
	SetMessage(var_165_int); // 0x9b TObjFunc
	ClearReplies(); // 0x9d TObjFunc
	var_166_int = 515460; // 0x9f PushI
	var_167_int = 41515; // 0xa0 PushI
	var_168_int = 16577; // 0xa1 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0xa2 TObjFunc
	var_169_int = 539577; // 0xa4 PushI
	var_170_int = 41519; // 0xa5 PushI
	var_171_int = 41518; // 0xa6 PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0xa7 TObjFunc
	goto Label_187; // 0xa9 Jump
	
Label_170:
	var_172_string = ""; // 0xaa PushV
	var_172_string = "Neutral"; // 0xab MovS
	func_217(var_90_object, var_172_string); // 0xac NEW_2
	var_173_int = 515465; // 0xae PushI
	SetMessage(var_173_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_174_int = 515466; // 0xb3 PushI
	var_175_int = -1; // 0xb4 PushI
	var_176_int = 16583; // 0xb5 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0xb6 TObjFunc
	goto Label_187; // 0xb8 Jump
}


func_2149(var_96_bool)
{
	var_98_int = 0; var_99_string = ""; // 0x866 PushV
	var_99_string = "ood10MSoldier1"; // 0x867 MovS
	func_2072(var_98_int, var_99_string); // 0x868 NEW_2
	var_102_int = 0; // 0x86a PushI
	var_103_bool = var_98_int == var_102_int; // 0x86b Eq
	if(var_103_bool == 0) goto Label_2159; // 0x86c JumpB
	var_96_bool = 1; // 0x86d MovB
	return 0; // 0x86e Return
	
Label_2159:
	var_96_bool = 0; // 0x86f MovB
	return 0; // 0x870 Return
}


func_2161(var_154_bool)
{
	var_156_int = 0; var_157_string = ""; // 0x872 PushV
	var_157_string = "ood10MSoldier2"; // 0x873 MovS
	func_2072(var_156_int, var_157_string); // 0x874 NEW_2
	var_158_int = 0; // 0x876 PushI
	var_159_bool = var_156_int == var_158_int; // 0x877 Eq
	if(var_159_bool == 0) goto Label_2171; // 0x878 JumpB
	var_154_bool = 1; // 0x879 MovB
	return 0; // 0x87a Return
	
Label_2171:
	var_154_bool = 0; // 0x87b MovB
	return 0; // 0x87c Return
}


func_2173()
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x87d PushV
	var_22_int = 188; // 0x87e PushI
	var_23_int = 1; // 0x87f PushI
	var_24_int = 515473; // 0x880 PushI
	CreateDiaryEntry(var_21_object, var_22_int, var_23_int, var_24_int); // 0x881 Func
	var_25_bool = 0; var_26_object = Obj(); var_27_int = 0; // 0x883 PushV
	var_26_object = var_21_object; // 0x884 Mov
	var_27_int = 186; // 0x885 MovI
	func_2199(var_25_bool, var_26_object, var_27_int); // 0x886 NEW_2
	return 2; // 0x888 Return
}


func_1673(var_18_object, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x689 PushV
	GetScene(var_25_object); // 0x68a Func
	var_27_string = "scripted"; // 0x68c PushS
	var_28_string = "blood_dir.xml"; // 0x68d PushS
	AddActorByType(var_26_object, var_27_string, var_25_object, var_21_cvector, var_22_cvector, var_28_string); // 0x68e Func
	var_29_object = Obj(); // 0x690 PushV
	var_29_object = var_18_object; // 0x691 Mov
	func_1561(var_29_object); // 0x692 NEW_2
	return 4; // 0x694 Return
}


func_2186(var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); // 0x88a PushV
	GetDiaryRoot(var_36_object); // 0x88b Func
	var_37_bool = var_36_object == 0; // 0x88d Not
	if(var_37_bool == 0) goto Label_2196; // 0x88e JumpB
	var_38_string = "Can't retrieve diary root"; // 0x88f PushS
	Trace(var_38_string); // 0x890 Func
	var_34_object = 0; // 0x892 MovB
	return 2; // 0x893 Return
	
Label_2196:
	var_34_object = var_36_object; // 0x894 Mov
	return 2; // 0x895 Return
}


func_2702(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0xa8e PushV
	var_17_bool = 0; var_18_object = Obj(); // 0xa8f PushV
	var_18_object = var_14_object; // 0xa90 Mov
	func_1537(var_17_bool, var_18_object); // 0xa91 NEW_2
	var_51_bool = var_17_bool == 0; // 0xa93 Not
	if(var_51_bool == 0) goto Label_2711; // 0xa94 JumpB
	var_13_bool = 0; // 0xa95 MovB
	return 2; // 0xa96 Return
	
Label_2711:
	var_52_object = GlobalVars[0]; // 0xa97 PushGE
	in(var_16_bool, var_14_object); // 0xa98 ObjFunc
	var_53_bool = var_16_bool; // 0xa9a Push
	if(var_53_bool == 0) goto Label_2718; // 0xa9b JumpB
	var_13_bool = 1; // 0xa9c MovB
	return 2; // 0xa9d Return
	
Label_2718:
	var_54_bool = 0; var_55_object = Obj(); // 0xa9e PushV
	var_55_object = var_14_object; // 0xa9f Mov
	func_2622(var_54_bool, var_55_object); // 0xaa0 NEW_2
	var_13_bool = var_54_bool; // 0xaa1 Mov
	return 2; // 0xaa3 Return
}


func_1167(var_17_object)
{
	func_1364(); // 0x491 NEW_2
	var_18_int = 0; var_19_object = Obj(); // 0x493 PushV
	var_19_object = var_17_object; // 0x494 Mov
	TaskCall(1); // 0x495 TaskCall
	func_25(var_20_object, var_18_int, var_19_object); // 0x496 NEW_2
	TaskReturn(); // 0x497 TaskReturn
	return 0; // 0x499 Return
}


func_1687()
{
	var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); // 0x697 PushV
	GetPosition(var_328_cvector); // 0x698 ObjFunc
	GetPosition(var_329_cvector); // 0x69a Func
	var_330_cvector = var_328_cvector - var_329_cvector; // 0x69c Sub2
	var_331_float = GetByIndex(var_330_cvector, 0); // 0x69d PushE
	var_332_float = GetByIndex(var_330_cvector, 2); // 0x69e PushE
	RotateAsync(var_331_float, var_332_float); // 0x69f Func
	return 6; // 0x6a1 Return
}


func_2199(var_25_bool, var_26_object, var_27_int)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_int = 0; var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; // 0x897 PushV
	var_34_object = Obj(); // 0x898 PushV
	func_2186(var_34_object); // 0x899 NEW_2
	var_31_object = var_34_object; // 0x89a Mov
	Find(var_27_int, var_32_object); // 0x89c ObjFunc
	var_39_bool = var_32_object == 0; // 0x89e Not
	if(var_39_bool == 0) goto Label_2214; // 0x89f JumpB
	var_40_string = "Can't find diary parent with id: "; // 0x8a0 PushS
	var_41_int = var_40_string + var_27_int; // 0x8a1 Add
	Trace(var_41_int); // 0x8a2 Func
	var_25_bool = 0; // 0x8a4 MovB
	return 6; // 0x8a5 Return
	
Label_2214:
	AddChild(var_26_object); // 0x8a6 ObjFunc
	var_42_int = 7; // 0x8a8 PushI
	SendWorldWndMessage(var_42_int); // 0x8a9 Func
	GetCategory(var_33_int); // 0x8ab ObjFunc
	SetDiarySection(var_33_int); // 0x8ad Func
	var_25_bool = 0; // 0x8af MovB
	return 6; // 0x8b0 Return
}


func_1698(var_243_float)
{
	var_245_float = 0; var_246_float = 0; var_247_float = 0; var_248_float = 0; // 0x6a2 PushV
	GetEyesHeight(var_247_float); // 0x6a3 Func
	GetEyesHeight(var_248_float); // 0x6a5 ObjFunc
	var_243_float = var_248_float - var_247_float; // 0x6a7 Sub2
	return 4; // 0x6a8 Return
}


func_2724(var_133_object)
{
	var_134_object = Obj(); // 0xaa5 PushV
	var_134_object = var_133_object; // 0xaa6 Mov
	func_2756(var_134_object); // 0xaa7 NEW_2
	return 0; // 0xaa9 Return
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
	func_1859(var_127_string); // 0x2b2 NEW_2
	var_156_string = "all"; // 0x2b4 PushS
	PlayAnimation(var_156_string, var_126_string); // 0x2b5 Func
	WaitForAnimEnd(); // 0x2b7 Func
	var_157_string = "all"; // 0x2b9 PushS
	LockAnimationEnd(var_157_string, var_126_string); // 0x2ba Func
	RemoveEnvelope(); // 0x2bc Func
	return 0; // 0x2be Return
}


func_1705(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x6a9 PushV
	IsLoaded(var_14_bool); // 0x6aa Func
	var_12_bool = var_14_bool; // 0x6ac Mov
	return 2; // 0x6ad Return
}


func_2730(var_15_bool, var_16_object, var_17_object, var_18_bool)
{
	var_19_bool = 0; var_20_bool = 0; // 0xaaa PushV
	var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; // 0xaab PushV
	var_22_object = var_17_object; // 0xaac Mov
	var_23_bool = !var_18_bool; // 0xaad Not2
	func_2433(var_21_bool, var_22_object, var_23_bool); // 0xaae NEW_2
	if(var_21_bool == 0) goto Label_2754; // 0xab0 JumpB
	CanSee(var_20_bool, var_16_object); // 0xab1 Func
	var_89_bool = 0; // 0xab3 PushV
	var_89_bool = 1; // 0xab4 MovB
	var_90_bool = var_20_bool; // 0xab5 Push
	if(var_90_bool == 0) goto Label_2751; // 0xab6 JumpB
	var_91_float = 0; var_92_object = Obj(); // 0xab7 PushV
	var_92_object = var_16_object; // 0xab8 Mov
	func_1391(var_92_object); // 0xab9 NEW_2
	var_99_float = 490000.0; // 0xabb PushF
	var_100_bool = var_91_float <= var_99_float; // 0xabc LE
	if(var_100_bool == 0) goto Label_2751; // 0xabd JumpB
	var_89_bool = 0; // 0xabe MovB
	
Label_2751:
	if(var_89_bool == 0) goto Label_2754; // 0xabf JumpB
	var_15_bool = 1; // 0xac0 MovB
	return 2; // 0xac1 Return
	
Label_2754:
	var_15_bool = 0; // 0xac2 MovB
	return 2; // 0xac3 Return
}


func_1710(var_29_bool, var_31_float)
{
	var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0; // 0x6ae PushV
	GetPosition(var_42_cvector); // 0x6af ObjFunc
	GetEyesHeight(var_41_float); // 0x6b1 ObjFunc
	var_50_float = GetByIndex(var_42_cvector, 1); // 0x6b3 PushE
	var_50_float = var_50_float + var_41_float; // 0x6b4 Add2
	SetByIndex(var_42_cvector, 1) = var_50_float; // 0x6b5 PopE
	GetPosition(var_43_cvector); // 0x6b6 Func
	GetEyesHeight(var_41_float); // 0x6b8 Func
	var_51_float = GetByIndex(var_43_cvector, 1); // 0x6ba PushE
	var_51_float = var_51_float + var_41_float; // 0x6bb Add2
	SetByIndex(var_43_cvector, 1) = var_51_float; // 0x6bc PopE
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x6bd Sub2
	var_52_float = GetByIndex(var_44_cvector, 1); // 0x6be PushE
	var_52_float = 0; // 0x6bf MovI
	SetByIndex(var_44_cvector, 1) = var_52_float; // 0x6c0 PopE
	var_53_int = var_44_cvector | var_44_cvector; // 0x6c1 Or
	var_54_float = sqrt(var_53_int); // 0x6c2 Sqrt
	var_44_cvector = var_44_cvector / var_44_cvector; // 0x6c3 Div2
	var_45_cvector = -var_44_cvector; // 0x6c4 Neg2
	var_55_float = var_44_cvector * var_31_float; // 0x6c5 Mult
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); // 0x6c6 PushV
	var_58_cvector = CVector(0.0, 1.0, 0.0); // 0x6c7 PushVec
	var_57_cvector = var_45_cvector ^ var_58_cvector; // 0x6c8 Xor2
	func_1993(var_56_cvector, var_57_cvector); // 0x6c9 NEW_2
	var_64_int = 25; // 0x6cb PushI
	var_65_float = var_56_cvector * var_64_int; // 0x6cc Mult
	var_66_int = var_55_float + var_65_float; // 0x6cd Add
	var_67_cvector = CVector(0.0, 10.0, 0.0); // 0x6ce PushVec
	var_46_cvector = var_66_int - var_67_cvector; // 0x6cf Sub2
	var_47_cvector = var_43_cvector + var_46_cvector; // 0x6d0 Add2
	IsOverrideActive(var_48_bool); // 0x6d1 Func
	var_68_bool = var_48_bool; // 0x6d3 Push
	if(var_68_bool == 0) goto Label_1751; // 0x6d4 JumpB
	var_29_bool = 0; // 0x6d5 MovB
	return 18; // 0x6d6 Return
	
Label_1751:
	StopWorld(); // 0x6d7 Func
	CameraTransit(var_47_cvector, var_45_cvector); // 0x6d9 Func
	var_69_float = GetByIndex(var_46_cvector, 0); // 0x6db PushE
	var_70_float = GetByIndex(var_46_cvector, 2); // 0x6dc PushE
	Rotate(var_69_float, var_70_float); // 0x6dd Func
	var_71_bool = 0; // 0x6df PushV
	func_2790(var_71_bool); // 0x6e0 NEW_2
	if(var_71_bool == 0) goto Label_1764; // 0x6e2 JumpB
	goto Label_1772; // 0x6e3 Jump
	
Label_1772:
	CameraWaitForPlayFinish(); // 0x6ec Func
	ResumeWorld(); // 0x6ee Func
	var_29_bool = 1; // 0x6f0 MovB
	return 18; // 0x6f1 Return
	
Label_1764:
	var_72_string = "head"; // 0x6e4 PushS
	HasAnimationTrack(var_49_bool, var_72_string); // 0x6e5 Func
	var_73_bool = var_49_bool; // 0x6e7 Push
	if(var_73_bool == 0) goto Label_1772; // 0x6e8 JumpB
	var_74_string = "head"; // 0x6e9 PushS
	LookAsyncCamera(var_74_string); // 0x6ea Func
}


func_2227(var_80_int)
{
	var_81_int = 0; var_82_int = 0; // 0x8b3 PushV
	var_83_string = "branch"; // 0x8b4 PushS
	GetVariable(var_83_string, var_82_int); // 0x8b5 Func
	var_84_int = 0; // 0x8b7 PushI
	var_85_bool = var_82_int == var_84_int; // 0x8b8 Eq
	if(var_85_bool == 0) goto Label_2237; // 0x8b9 JumpB
	var_80_int = 1; // 0x8ba MovI
	return 2; // 0x8bb Return
	
Label_2237:
	var_86_int = 1; // 0x8bd PushI
	var_87_bool = var_82_int == var_86_int; // 0x8be Eq
	if(var_87_bool == 0) goto Label_2242; // 0x8bf JumpB
	var_80_int = 2; // 0x8c0 MovI
	return 2; // 0x8c1 Return
	
Label_2242:
	var_80_int = 3; // 0x8c2 MovI
	return 2; // 0x8c3 Return
}


func_2756(var_132_object)
{
	var_133_bool = 0; var_134_bool = 0; // 0xac4 PushV
	var_135_object = GlobalVars[0]; // 0xac5 PushGE
	in(var_134_bool, var_132_object); // 0xac6 ObjFunc
	var_136_bool = var_134_bool; // 0xac8 Push
	if(var_136_bool == 0) goto Label_2767; // 0xac9 JumpB
	var_137_object = Obj(); var_138_bool = 0; // 0xaca PushV
	var_137_object = var_132_object; // 0xacb Mov
	var_138_bool = 1; // 0xacc MovB
	func_2576(var_137_object, var_138_bool); // 0xacd NEW_2
	
Label_2767:
	return 2; // 0xacf Return
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
	func_1537(var_59_bool, var_60_object); // 0x2d2 NEW_2
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


func_2244(var_83_int)
{
	var_84_int = 0; var_85_int = 0; // 0x8c4 PushV
	var_86_string = "branch"; // 0x8c5 PushS
	GetVariable(var_86_string, var_85_int); // 0x8c6 Func
	var_83_int = var_85_int; // 0x8c8 Mov
	return 2; // 0x8c9 Return
}


func_2250(var_16_object)
{
	var_17_int = 0; // 0x8cb PushV
	func_2244(var_17_int); // 0x8cc NEW_2
	var_21_int = 1; // 0x8ce PushI
	var_22_bool = var_17_int == var_21_int; // 0x8cf Eq
	if(var_22_bool == 0) goto Label_2260; // 0x8d0 JumpB
	WorkWithCorpse(var_16_object); // 0x8d1 Func
	goto Label_2262; // 0x8d3 Jump
	
Label_2262:
	return 0; // 0x8d6 Return
	
Label_2260:
	Barter(var_16_object); // 0x8d4 Func
}


func_2263(var_32_int, var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0; // 0x8d7 PushV
	var_38_bool = var_32_int > var_33_int; // 0x8d8 GT
	if(var_38_bool == 0) goto Label_2270; // 0x8d9 JumpB
	var_39_string = "GenerateMoney: iMin > iMax"; // 0x8da PushS
	Trace(var_39_string); // 0x8db Func
	return 4; // 0x8dd Return
	
Label_2270:
	var_36_int = 0; // 0x8de MovI
	var_40_bool = var_32_int != var_33_int; // 0x8df Neq
	if(var_40_bool == 0) goto Label_2277; // 0x8e0 JumpB
	var_41_int = var_33_int - var_32_int; // 0x8e1 Sub
	irand(var_36_int, var_41_int); // 0x8e2 Func
	goto Label_2281; // 0x8e4 Jump
	
Label_2281:
	var_36_int = var_36_int + var_32_int; // 0x8e9 Add2
	var_42_int = 0; // 0x8ea PushI
	var_43_bool = var_36_int == var_42_int; // 0x8eb Eq
	if(var_43_bool == 0) goto Label_2286; // 0x8ec JumpB
	return 4; // 0x8ed Return
	
Label_2286:
	var_44_int = 0; var_45_string = ""; // 0x8ee PushV
	var_45_string = "Money"; // 0x8ef MovS
	func_2371(var_44_int, var_45_string); // 0x8f0 NEW_2
	var_48_int = 0; // 0x8f2 PushI
	AddItem(var_37_bool, var_44_int, var_48_int, var_36_int); // 0x8f3 Func
	return 4; // 0x8f5 Return
	
Label_2277:
	var_49_int = 0; // 0x8e5 PushI
	var_50_bool = var_32_int == var_49_int; // 0x8e6 Eq
	if(var_50_bool == 0) goto Label_2281; // 0x8e7 JumpB
	return 4; // 0x8e8 Return
}


func_2776(var_22_object)
{
	var_23_object = Obj(); // 0xad9 PushV
	var_23_object = var_22_object; // 0xada Mov
	func_2376(var_23_object); // 0xadb NEW_2
	return 0; // 0xadd Return
}


func_217(var_2_object, var_112_string)
{
	var_113_bool = 0; // 0xda PushV
	func_2790(var_113_bool); // 0xdb NEW_2
	var_114_bool = var_113_bool == 0; // 0xdd Not
	if(var_114_bool == 0) goto Label_224; // 0xde JumpB
	return 0; // 0xdf Return
	
Label_224:
	var_115_bool = var_112_string == var_2_object; // 0xe0 Eq
	if(var_115_bool == 0) goto Label_227; // 0xe1 JumpB
	return 0; // 0xe2 Return
	
Label_227:
	var_116_string = ""; var_117_bool = 0; // 0xe3 PushV
	var_116_string = var_112_string; // 0xe4 Mov
	var_118_string = ""; // 0xe5 PushS
	var_119_bool = var_112_string == var_118_string; // 0xe6 Eq
	if(var_119_bool == 0) goto Label_234; // 0xe7 JumpB
	var_117_bool = 0; // 0xe8 MovB
	goto Label_235; // 0xe9 Jump
	
Label_235:
	func_1811(var_116_string, var_117_bool); // 0xeb NEW_2
	var_2_object = var_112_string; // 0xed TMov
	return 0; // 0xee Return
	
Label_234:
	var_117_bool = 1; // 0xea MovB
}


func_733()
{
	StopAsync(); // 0x2dd Func
	var_132_int = 100; // 0x2df PushI
	KillTimer(var_132_int); // 0x2e0 Func
	StopGroup0(); // 0x2e2 Func
	return 0; // 0x2e4 Return
}


func_2782(var_77_int)
{
	var_77_int = 515597; // 0xade MovI
	return 0; // 0xadf Return
}


func_2784(var_76_int)
{
	var_76_int = 514841; // 0xae0 MovI
	return 0; // 0xae1 Return
}


func_2786(var_78_string)
{
	var_78_string = "ui/NPC_Citizen2.png"; // 0xae2 MovS
	return 0; // 0xae3 Return
}


func_2788(var_79_string)
{
	var_79_string = "ui/NPC_Citizen2_b.png"; // 0xae4 MovS
	return 0; // 0xae5 Return
}


func_2790(var_71_bool)
{
	var_71_bool = 0; // 0xae6 MovB
	return 0; // 0xae7 Return
}


func_1257()
{
	func_2569(); // 0x4ea NEW_2
	
Label_1260:
	func_1280(var_10_cvector, var_11_bool); // 0x4ed NEW_2
	goto Label_1260; // 0x4ef Jump
}


func_1265()
{
	return 0; // 0x4f1 Return
}


func_1778()
{
	var_179_bool = 0; var_180_bool = 0; // 0x6f2 PushV
	CameraSwitchToNormal(); // 0x6f3 Func
	var_181_bool = 0; // 0x6f5 PushV
	func_2790(var_181_bool); // 0x6f6 NEW_2
	if(var_181_bool == 0) goto Label_1786; // 0x6f8 JumpB
	goto Label_1794; // 0x6f9 Jump
	
Label_1794:
	return 2; // 0x702 Return
	
Label_1786:
	var_182_string = "head"; // 0x6fa PushS
	HasAnimationTrack(var_180_bool, var_182_string); // 0x6fb Func
	var_183_bool = var_180_bool; // 0x6fd Push
	if(var_183_bool == 0) goto Label_1794; // 0x6fe JumpB
	var_184_string = "head"; // 0x6ff PushS
	UnlookAsync(var_184_string); // 0x700 Func
}


func_2294(var_89_string)
{
	var_90_object = Obj(); var_91_int = 0; var_92_bool = 0; var_93_object = Obj(); var_94_int = 0; var_95_bool = 0; // 0x8f6 PushV
	CreateInvItem(var_93_object); // 0x8f7 Func
	SetItemName(var_89_string); // 0x8f9 ObjFunc
	var_96_string = "Organ"; // 0x8fb PushS
	var_97_int = 1; // 0x8fc PushI
	SetProperty(var_96_string, var_97_int); // 0x8fd ObjFunc
	GetItemID(var_94_int); // 0x8ff ObjFunc
	var_98_int = 0; // 0x901 PushI
	var_99_int = 1; // 0x902 PushI
	AddItem(var_95_bool, var_93_object, var_98_int, var_99_int); // 0x903 Func
	return 6; // 0x905 Return
}


func_1280(var_0_object, var_1_object)
{
	var_22_int = 0; var_23_bool = 0; var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_object = Obj(); // 0x500 PushV
	GetPFPosition(var_29_object); // 0x501 Func
	GetDirection(var_0_object); // 0x503 Func
	
Label_1285:
	func_1369(); // 0x506 NEW_2
	var_30_int = 10; // 0x508 PushI
	irand(var_26_int, var_30_int); // 0x509 Func
	var_31_int = 5; // 0x50b PushI
	var_32_int = var_26_int + var_31_int; // 0x50c Add
	Sleep(var_32_int, var_27_bool); // 0x50d Func
	var_33_bool = var_27_bool; // 0x50f Push
	if(var_33_bool == 0) goto Label_1301; // 0x510 JumpB
	func_1265(); // 0x512 NEW_2
	goto Label_1362; // 0x514 Jump
	
Label_1362:
	goto Label_1285; // 0x552 Jump
	
Label_1301:
	func_1369(); // 0x516 NEW_2
	GetPFPosition(var_28_cvector); // 0x518 Func
	var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); // 0x51a PushV
	var_35_cvector = var_1_object; // 0x51b MovT
	var_36_cvector = var_28_cvector; // 0x51c Mov
	func_2003(var_34_float, var_35_cvector, var_36_cvector); // 0x51d NEW_2
	var_39_int = 40000; // 0x51f PushI
	var_40_bool = var_34_float > var_39_int; // 0x520 GT
	if(var_40_bool == 0) goto Label_1348; // 0x521 JumpB
	FindPathTo(var_29_object, var_29_object); // 0x522 Func
	var_41_bool = var_29_object != 0; // 0x524 NullNeq
	if(var_41_bool == 0) goto Label_1343; // 0x525 JumpB
	RotatePath(var_29_object, var_27_bool); // 0x526 Func
	var_42_bool = var_27_bool == 0; // 0x528 Not
	if(var_42_bool == 0) goto Label_1323; // 0x529 JumpB
	goto Label_1361; // 0x52a Jump
	
Label_1361:
	goto Label_1301; // 0x551 Jump
	
Label_1323:
	var_43_bool = 0; // 0x52b PushB
	FollowPath(var_29_object, var_43_bool, var_27_bool); // 0x52c Func
	var_44_bool = var_27_bool == 0; // 0x52e Not
	if(var_44_bool == 0) goto Label_1329; // 0x52f JumpB
	goto Label_1361; // 0x530 Jump
	
Label_1329:
	var_45_float = GetByIndex(var_0_object, 0); // 0x531 PushE
	var_46_float = GetByIndex(var_0_object, 2); // 0x532 PushE
	Rotate(var_45_float, var_46_float, var_27_bool); // 0x533 Func
	var_47_bool = var_27_bool == 0; // 0x535 Not
	if(var_47_bool == 0) goto Label_1336; // 0x536 JumpB
	goto Label_1361; // 0x537 Jump
	
Label_1336:
	WaitForAnimEnd(var_27_bool); // 0x538 Func
	var_48_bool = var_27_bool == 0; // 0x53a Not
	if(var_48_bool == 0) goto Label_1341; // 0x53b JumpB
	goto Label_1361; // 0x53c Jump
	
Label_1341:
	goto Label_1362; // 0x53d Jump
	
Label_1343:
	var_49_int = 1; // 0x53f PushI
	Sleep(var_49_int); // 0x540 Func
	var_29_object = 0; // 0x542 SetNull
	goto Label_1361; // 0x543 Jump
	
Label_1348:
	var_50_float = GetByIndex(var_0_object, 0); // 0x544 PushE
	var_51_float = GetByIndex(var_0_object, 2); // 0x545 PushE
	Rotate(var_50_float, var_51_float, var_27_bool); // 0x546 Func
	var_52_bool = var_27_bool == 0; // 0x548 Not
	if(var_52_bool == 0) goto Label_1355; // 0x549 JumpB
	goto Label_1361; // 0x54a Jump
	
Label_1355:
	WaitForAnimEnd(var_27_bool); // 0x54b Func
	var_53_bool = var_27_bool == 0; // 0x54d Not
	if(var_53_bool == 0) goto Label_1360; // 0x54e JumpB
	goto Label_1361; // 0x54f Jump
	
Label_1360:
	goto Label_1362; // 0x550 Jump
}


func_1795(var_138_string)
{
	var_139_bool = 0; var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_float = 0; var_144_float = 0; // 0x703 PushV
	lshHasAnimation(var_142_bool, var_138_string); // 0x704 Func
	var_145_bool = var_142_bool; // 0x706 Push
	if(var_145_bool == 0) goto Label_1806; // 0x707 JumpB
	lshGetAnimTimes(var_138_string, var_143_float, var_144_float); // 0x708 Func
	var_146_bool = 0; // 0x70a PushB
	lshPlayAnimation(var_143_float, var_144_float, var_146_bool); // 0x70b Func
	goto Label_1810; // 0x70d Jump
	
Label_1810:
	return 6; // 0x712 Return
	
Label_1806:
	var_147_string = "Can't find lsh animation : "; // 0x70e PushS
	var_148_int = var_147_string + var_138_string; // 0x70f Add
	Trace(var_148_int); // 0x710 Func
}


func_2311()
{
	var_83_int = 0; // 0x907 PushV
	func_2244(var_83_int); // 0x908 NEW_2
	var_87_int = 1; // 0x90a PushI
	var_88_bool = var_83_int != var_87_int; // 0x90b Neq
	if(var_88_bool == 0) goto Label_2318; // 0x90c JumpB
	return 0; // 0x90d Return
	
Label_2318:
	var_89_string = ""; // 0x90e PushV
	var_89_string = "liver"; // 0x90f MovS
	func_2294(var_89_string); // 0x910 NEW_2
	var_100_string = ""; // 0x912 PushV
	var_100_string = "kidney"; // 0x913 MovS
	func_2294(var_100_string); // 0x914 NEW_2
	var_101_string = ""; // 0x916 PushV
	var_101_string = "heart"; // 0x917 MovS
	func_2294(var_101_string); // 0x918 NEW_2
	var_102_string = ""; // 0x91a PushV
	var_102_string = "blood"; // 0x91b MovS
	func_2294(var_102_string); // 0x91c NEW_2
	return 0; // 0x91e Return
}


func_1811(var_116_string, var_117_bool)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0; // 0x713 PushV
	lshHasAnimation(var_123_bool, var_116_string); // 0x714 Func
	var_126_bool = var_123_bool; // 0x716 Push
	if(var_126_bool == 0) goto Label_1821; // 0x717 JumpB
	lshGetAnimTimes(var_116_string, var_124_float, var_125_float); // 0x718 Func
	lshPlayAnimation(var_124_float, var_125_float, var_117_bool); // 0x71a Func
	goto Label_1825; // 0x71c Jump
	
Label_1825:
	return 6; // 0x721 Return
	
Label_1821:
	var_127_string = "Can't find lsh animation : "; // 0x71d PushS
	var_128_int = var_127_string + var_116_string; // 0x71e Add
	Trace(var_128_int); // 0x71f Func
}


func_2335()
{
	var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_bool = 0; // 0x91f PushV
	var_31_int = 0; // 0x920 PushI
	ClearSubContainer(var_31_int); // 0x921 Func
	var_32_int = 0; var_33_int = 0; // 0x923 PushV
	var_32_int = 500; // 0x924 MovI
	var_33_int = 1000; // 0x925 MovI
	func_2263(var_32_int, var_33_int); // 0x926 NEW_2
	var_51_string = ""; var_52_int = 0; var_53_int = 0; var_54_int = 0; // 0x928 PushV
	var_51_string = "rifle_ammo"; // 0x929 MovS
	var_52_int = 1; // 0x92a MovI
	var_53_int = 3; // 0x92b MovI
	var_54_int = 3; // 0x92c MovI
	func_1844(var_51_string, var_52_int, var_53_int, var_54_int); // 0x92d NEW_2
	var_67_string = ""; var_68_int = 0; var_69_int = 0; var_70_int = 0; // 0x92f PushV
	var_67_string = "rusk"; // 0x930 MovS
	var_68_int = 1; // 0x931 MovI
	var_69_int = 3; // 0x932 MovI
	var_70_int = 2; // 0x933 MovI
	func_1844(var_67_string, var_68_int, var_69_int, var_70_int); // 0x934 NEW_2
	var_71_string = ""; var_72_int = 0; var_73_int = 0; // 0x936 PushV
	var_71_string = "bandage"; // 0x937 MovS
	var_72_int = 1; // 0x938 MovI
	var_73_int = 6; // 0x939 MovI
	func_1833(var_71_string, var_72_int, var_73_int); // 0x93a NEW_2
	var_80_string = ""; var_81_int = 0; var_82_int = 0; // 0x93c PushV
	var_80_string = "tourniquet"; // 0x93d MovS
	var_81_int = 1; // 0x93e MovI
	var_82_int = 6; // 0x93f MovI
	func_1833(var_80_string, var_81_int, var_82_int); // 0x940 NEW_2
	return 4; // 0x942 Return
}


func_1826()
{
	var_15_bool = 0; // 0x722 PushV
	func_2790(var_15_bool); // 0x723 NEW_2
	if(var_15_bool == 0) goto Label_1832; // 0x725 JumpB
	lshStopSpeech(); // 0x726 Func
	
Label_1832:
	return 0; // 0x728 Return
}


func_1833(var_71_string, var_72_int, var_73_int)
{
	var_74_bool = 0; var_75_bool = 0; // 0x729 PushV
	var_76_bool = 0; var_77_int = 0; var_78_int = 0; // 0x72a PushV
	var_77_int = var_72_int; // 0x72b Mov
	var_78_int = var_73_int; // 0x72c Mov
	func_2025(var_76_bool, var_77_int, var_78_int); // 0x72d NEW_2
	if(var_76_bool == 0) goto Label_1843; // 0x72f JumpB
	var_79_int = 0; // 0x730 PushI
	AddItem(var_75_bool, var_71_string, var_79_int); // 0x731 Func
	
Label_1843:
	return 2; // 0x733 Return
}


func_1844(var_51_string, var_52_int, var_53_int, var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; // 0x734 PushV
	var_59_bool = 0; var_60_int = 0; var_61_int = 0; // 0x735 PushV
	var_60_int = var_52_int; // 0x736 Mov
	var_61_int = var_53_int; // 0x737 Mov
	func_2025(var_59_bool, var_60_int, var_61_int); // 0x738 NEW_2
	if(var_59_bool == 0) goto Label_1858; // 0x73a JumpB
	irand(var_57_int, var_54_int); // 0x73b Func
	var_64_int = 0; // 0x73d PushI
	var_65_int = 1; // 0x73e PushI
	var_66_int = var_57_int + var_65_int; // 0x73f Add
	AddItem(var_58_bool, var_51_string, var_64_int, var_66_int); // 0x740 Func
	
Label_1858:
	return 4; // 0x742 Return
}


func_829(var_0_object, var_1_object, var_2_object, var_139_object, var_140_bool)
{
	var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; var_147_bool = 0; // 0x33d PushV
	var_0_object = var_139_object; // 0x33e TMov
	var_148_object = Obj(); // 0x33f PushV
	var_148_object = var_0_object; // 0x340 MovT
	func_2099(var_148_object); // 0x341 NEW_2
	func_2108(); // 0x344 NEW_2
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
	func_1537(var_165_bool, var_166_object); // 0x359 NEW_2
	if(var_165_bool == 0) goto Label_961; // 0x35b JumpB
	CanSee(var_147_bool, var_0_object); // 0x35c Func
	var_167_bool = var_147_bool; // 0x35e Push
	if(var_167_bool == 0) goto Label_872; // 0x35f JumpB
	var_168_object = Obj(); // 0x360 PushV
	var_168_object = var_0_object; // 0x361 MovT
	func_2099(var_168_object); // 0x362 NEW_2
	func_1009(var_147_bool); // 0x365 NEW_2
	goto Label_951; // 0x367 Jump
	
Label_951:
	var_322_bool = var_1_object != 0; // 0x3b7 NullNeq
	if(var_322_bool == 0) goto Label_957; // 0x3b8 JumpB
	func_1004(var_146_bool, var_147_bool); // 0x3ba NEW_2
	goto Label_960; // 0x3bc Jump
	
Label_960:
	goto Label_855; // 0x3c0 Jump
	
Label_957:
	var_323_int = 2; // 0x3bd PushI
	Sleep(var_323_int); // 0x3be Func
	
Label_872:
	var_324_object = Obj(); // 0x368 PushV
	var_324_object = var_0_object; // 0x369 MovT
	func_1687(); // 0x36a NEW_2
	var_2_object = 1; // 0x36c TMovB
	var_333_string = "all"; // 0x36d PushS
	var_334_string = "hunt"; // 0x36e PushS
	PlayAnimation(var_333_string, var_334_string); // 0x36f Func
	WaitForAnimEnd(var_146_bool); // 0x371 Func
	var_335_bool = var_146_bool == 0; // 0x373 Not
	if(var_335_bool == 0) goto Label_895; // 0x374 JumpB
	var_336_bool = var_1_object != 0; // 0x375 NullNeq
	if(var_336_bool == 0) goto Label_890; // 0x376 JumpB
	func_1004(var_146_bool, var_147_bool); // 0x378 NEW_2
	
Label_890:
	var_337_string = "all"; // 0x37a PushS
	var_338_string = "attack_on"; // 0x37b PushS
	LockAnimationEnd(var_337_string, var_338_string); // 0x37c Func
	goto Label_855; // 0x37e Jump
	
Label_895:
	var_339_bool = 0; var_340_object = Obj(); // 0x37f PushV
	var_340_object = var_0_object; // 0x380 MovT
	func_1537(var_339_bool, var_340_object); // 0x381 NEW_2
	var_341_bool = var_339_bool == 0; // 0x383 Not
	if(var_341_bool == 0) goto Label_902; // 0x384 JumpB
	goto Label_961; // 0x385 Jump
	
Label_961:
	var_342_bool = 0; // 0x3c1 PushB
	SetAttackState(var_342_bool); // 0x3c2 Func
	StopAsync(); // 0x3c4 Func
	var_343_string = "all"; // 0x3c6 PushS
	var_344_string = "attack_off"; // 0x3c7 PushS
	PlayAnimation(var_343_string, var_344_string); // 0x3c8 Func
	WaitForAnimEnd(); // 0x3ca Func
	return 4; // 0x3cc Return
	
Label_902:
	CanSee(var_147_bool, var_0_object); // 0x386 Func
	var_345_bool = var_147_bool; // 0x388 Push
	if(var_345_bool == 0) goto Label_913; // 0x389 JumpB
	var_2_object = 0; // 0x38a TMovB
	Face(var_0_object); // 0x38b Func
	func_1009(var_147_bool); // 0x38e NEW_2
	goto Label_951; // 0x390 Jump
	
Label_913:
	var_346_string = "all"; // 0x391 PushS
	var_347_string = "attack_on"; // 0x392 PushS
	LockAnimationEnd(var_346_string, var_347_string); // 0x393 Func
	var_348_int = 3; // 0x395 PushI
	Sleep(var_348_int, var_146_bool); // 0x396 Func
	var_349_bool = var_146_bool == 0; // 0x398 Not
	if(var_349_bool == 0) goto Label_932; // 0x399 JumpB
	var_350_bool = var_1_object != 0; // 0x39a NullNeq
	if(var_350_bool == 0) goto Label_927; // 0x39b JumpB
	func_1004(var_146_bool, var_147_bool); // 0x39d NEW_2
	
Label_927:
	var_351_string = "all"; // 0x39f PushS
	var_352_string = "attack_on"; // 0x3a0 PushS
	LockAnimationEnd(var_351_string, var_352_string); // 0x3a1 Func
	goto Label_855; // 0x3a3 Jump
	
Label_932:
	var_353_bool = 0; var_354_object = Obj(); // 0x3a4 PushV
	var_354_object = var_0_object; // 0x3a5 MovT
	func_1537(var_353_bool, var_354_object); // 0x3a6 NEW_2
	var_355_bool = var_353_bool == 0; // 0x3a8 Not
	if(var_355_bool == 0) goto Label_939; // 0x3a9 JumpB
	goto Label_961; // 0x3aa Jump
	
Label_939:
	var_2_object = 0; // 0x3ab TMovB
	CanSee(var_147_bool, var_0_object); // 0x3ac Func
	var_356_bool = var_147_bool; // 0x3ae Push
	if(var_356_bool == 0) goto Label_950; // 0x3af JumpB
	Face(var_0_object); // 0x3b0 Func
	func_1009(var_147_bool); // 0x3b3 NEW_2
	goto Label_951; // 0x3b5 Jump
	
Label_950:
	goto Label_961; // 0x3b6 Jump
}


func_1859(var_127_string)
{
	var_128_bool = 0; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_bool = 0; var_133_float = 0; var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_bool = 0; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); // 0x743 PushV
	IsExisting3DSound(var_136_bool, var_127_string); // 0x744 Func
	var_144_bool = var_136_bool == 0; // 0x746 Not
	if(var_144_bool == 0) goto Label_1884; // 0x747 JumpB
	var_137_int = 0; // 0x748 MovI
	
Label_1865:
	var_145_int = 1; // 0x749 PushI
	var_146_int = var_137_int + var_145_int; // 0x74a Add
	var_147_int = var_127_string + var_146_int; // 0x74b Add
	IsExisting3DSound(var_138_bool, var_147_int); // 0x74c Func
	var_148_bool = var_138_bool == 0; // 0x74e Not
	if(var_148_bool == 0) goto Label_1873; // 0x74f JumpB
	goto Label_1876; // 0x750 Jump
	
Label_1876:
	var_149_bool = var_137_int == 0; // 0x754 Not
	if(var_149_bool == 0) goto Label_1879; // 0x755 JumpB
	return 16; // 0x756 Return
	
Label_1879:
	irand(var_139_int, var_137_int); // 0x757 Func
	var_150_int = 1; // 0x759 PushI
	var_151_int = var_139_int + var_150_int; // 0x75a Add
	var_127_string = var_127_string + var_151_int; // 0x75b Add2
	
Label_1884:
	Is3DSoundLoaded(var_140_bool, var_127_string); // 0x75c Func
	var_152_bool = var_140_bool; // 0x75e Push
	if(var_152_bool == 0) goto Label_1899; // 0x75f JumpB
	GetEyesHeight(var_141_float); // 0x760 Func
	GetDirection(var_142_cvector); // 0x762 Func
	var_153_int = 50; // 0x764 PushI
	var_143_cvector = var_142_cvector * var_153_int; // 0x765 Mult2
	var_154_float = GetByIndex(var_143_cvector, 1); // 0x766 PushE
	var_154_float = var_154_float + var_141_float; // 0x767 Add2
	SetByIndex(var_143_cvector, 1) = var_154_float; // 0x768 PopE
	PlayGlobalSound(var_127_string, var_143_cvector); // 0x769 Func
	
Label_1899:
	return 16; // 0x76b Return
	
Label_1873:
	var_155_int = 1; // 0x751 PushI
	var_137_int = var_137_int + var_155_int; // 0x752 Add2
	goto Label_1865; // 0x753 Jump
}


func_2371(var_44_int, var_45_string)
{
	var_46_int = 0; var_47_int = 0; // 0x943 PushV
	GetInvItemByName(var_47_int, var_45_string); // 0x944 Func
	var_44_int = var_47_int; // 0x946 Mov
	return 2; // 0x947 Return
}


func_2376(var_23_object)
{
	var_24_object = Obj(); // 0x949 PushV
	var_24_object = var_23_object; // 0x94a Mov
	TaskCall(3); // 0x94b TaskCall
	func_544(var_24_object); // 0x94c NEW_2
	TaskReturn(); // 0x94d TaskReturn
	return 0; // 0x94f Return
}


func_1364()
{
	StopGroup0(); // 0x554 Func
	Stop(); // 0x556 Func
	return 0; // 0x558 Return
}


func_1369()
{
	return 0; // 0x559 Return
}


func_1370(var_277_string, var_278_int)
{
	var_279_int = 2; // 0x55b PushI
	var_280_bool = var_278_int == var_279_int; // 0x55c Eq
	if(var_280_bool == 0) goto Label_1377; // 0x55d JumpB
	var_277_string = "fire"; // 0x55e MovS
	return 0; // 0x55f Return
	
Label_1377:
	var_281_int = 1; // 0x561 PushI
	var_282_bool = var_278_int == var_281_int; // 0x562 Eq
	if(var_282_bool == 0) goto Label_1382; // 0x563 JumpB
	var_277_string = "bullet"; // 0x564 MovS
	return 0; // 0x565 Return
	
Label_1382:
	var_277_string = "phys"; // 0x566 MovS
	return 0; // 0x567 Return
}


func_1384(var_46_cvector)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); // 0x568 PushV
	GetPosition(var_50_cvector); // 0x569 Func
	GetPosition(var_51_cvector); // 0x56b ObjFunc
	var_46_cvector = var_51_cvector - var_50_cvector; // 0x56d Sub2
	return 4; // 0x56e Return
}


func_1900(var_89_bool, var_90_string)
{
	var_89_bool = 1; // 0x76d MovB
	var_91_bool = 0; // 0x76e PushV
	var_91_bool = 1; // 0x76f MovB
	var_92_bool = 0; // 0x770 PushV
	var_92_bool = 1; // 0x771 MovB
	var_93_bool = 0; // 0x772 PushV
	var_93_bool = 1; // 0x773 MovB
	var_94_bool = 0; // 0x774 PushV
	var_94_bool = 1; // 0x775 MovB
	var_95_bool = 0; // 0x776 PushV
	var_95_bool = 1; // 0x777 MovB
	var_96_bool = 0; // 0x778 PushV
	var_96_bool = 1; // 0x779 MovB
	var_97_bool = 0; // 0x77a PushV
	var_97_bool = 1; // 0x77b MovB
	var_98_bool = 0; // 0x77c PushV
	var_98_bool = 1; // 0x77d MovB
	var_99_bool = 0; // 0x77e PushV
	var_99_bool = 1; // 0x77f MovB
	var_100_bool = 0; // 0x780 PushV
	var_100_bool = 1; // 0x781 MovB
	var_101_bool = 0; // 0x782 PushV
	var_101_bool = 1; // 0x783 MovB
	var_102_string = "woman"; // 0x784 PushS
	var_103_bool = var_90_string == var_102_string; // 0x785 Eq
	if(var_103_bool == 0) goto Label_1931; // 0x786 JumpB
	var_104_string = "worker"; // 0x787 PushS
	var_105_bool = var_90_string == var_104_string; // 0x788 Eq
	if(var_105_bool == 0) goto Label_1931; // 0x789 JumpB
	var_101_bool = 0; // 0x78a MovB
	
Label_1931:
	if(var_101_bool == 0) goto Label_1936; // 0x78b JumpB
	var_106_string = "butcher"; // 0x78c PushS
	var_107_bool = var_90_string == var_106_string; // 0x78d Eq
	if(var_107_bool == 0) goto Label_1936; // 0x78e JumpB
	var_100_bool = 0; // 0x78f MovB
	
Label_1936:
	if(var_100_bool == 0) goto Label_1941; // 0x790 JumpB
	var_108_string = "wasted_girl"; // 0x791 PushS
	var_109_bool = var_90_string == var_108_string; // 0x792 Eq
	if(var_109_bool == 0) goto Label_1941; // 0x793 JumpB
	var_99_bool = 0; // 0x794 MovB
	
Label_1941:
	if(var_99_bool == 0) goto Label_1946; // 0x795 JumpB
	var_110_string = "boy"; // 0x796 PushS
	var_111_bool = var_90_string == var_110_string; // 0x797 Eq
	if(var_111_bool == 0) goto Label_1946; // 0x798 JumpB
	var_98_bool = 0; // 0x799 MovB
	
Label_1946:
	if(var_98_bool == 0) goto Label_1951; // 0x79a JumpB
	var_112_string = "vaxxabitka"; // 0x79b PushS
	var_113_bool = var_90_string == var_112_string; // 0x79c Eq
	if(var_113_bool == 0) goto Label_1951; // 0x79d JumpB
	var_97_bool = 0; // 0x79e MovB
	
Label_1951:
	if(var_97_bool == 0) goto Label_1956; // 0x79f JumpB
	var_114_string = "unosha"; // 0x7a0 PushS
	var_115_bool = var_90_string == var_114_string; // 0x7a1 Eq
	if(var_115_bool == 0) goto Label_1956; // 0x7a2 JumpB
	var_96_bool = 0; // 0x7a3 MovB
	
Label_1956:
	if(var_96_bool == 0) goto Label_1961; // 0x7a4 JumpB
	var_116_string = "wasted_male"; // 0x7a5 PushS
	var_117_bool = var_90_string == var_116_string; // 0x7a6 Eq
	if(var_117_bool == 0) goto Label_1961; // 0x7a7 JumpB
	var_95_bool = 0; // 0x7a8 MovB
	
Label_1961:
	if(var_95_bool == 0) goto Label_1966; // 0x7a9 JumpB
	var_118_string = "alkash"; // 0x7aa PushS
	var_119_bool = var_90_string == var_118_string; // 0x7ab Eq
	if(var_119_bool == 0) goto Label_1966; // 0x7ac JumpB
	var_94_bool = 0; // 0x7ad MovB
	
Label_1966:
	if(var_94_bool == 0) goto Label_1971; // 0x7ae JumpB
	var_120_string = "dohodyaga"; // 0x7af PushS
	var_121_bool = var_90_string == var_120_string; // 0x7b0 Eq
	if(var_121_bool == 0) goto Label_1971; // 0x7b1 JumpB
	var_93_bool = 0; // 0x7b2 MovB
	
Label_1971:
	if(var_93_bool == 0) goto Label_1976; // 0x7b3 JumpB
	var_122_string = "vaxxabit"; // 0x7b4 PushS
	var_123_bool = var_90_string == var_122_string; // 0x7b5 Eq
	if(var_123_bool == 0) goto Label_1976; // 0x7b6 JumpB
	var_92_bool = 0; // 0x7b7 MovB
	
Label_1976:
	if(var_92_bool == 0) goto Label_1981; // 0x7b8 JumpB
	var_124_string = "nudegirl"; // 0x7b9 PushS
	var_125_bool = var_90_string == var_124_string; // 0x7ba Eq
	if(var_125_bool == 0) goto Label_1981; // 0x7bb JumpB
	var_91_bool = 0; // 0x7bc MovB
	
Label_1981:
	if(var_91_bool == 0) goto Label_1986; // 0x7bd JumpB
	var_126_string = "morlok"; // 0x7be PushS
	var_127_bool = var_90_string == var_126_string; // 0x7bf Eq
	if(var_127_bool == 0) goto Label_1986; // 0x7c0 JumpB
	var_89_bool = 0; // 0x7c1 MovB
	
Label_1986:
	return 0; // 0x7c2 Return
}


func_1391(var_91_float)
{
	var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0x56f PushV
	GetPosition(var_96_cvector); // 0x570 Func
	GetPosition(var_97_cvector); // 0x572 ObjFunc
	var_98_cvector = var_97_cvector - var_96_cvector; // 0x574 Sub2
	var_91_float = var_98_cvector | var_98_cvector; // 0x575 Or2
	return 6; // 0x576 Return
}


func_1399(var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x577 PushV
	var_20_string = "player"; // 0x578 PushS
	FindActor(var_19_object, var_20_string); // 0x579 Func
	var_17_object = var_19_object; // 0x57b Mov
	return 2; // 0x57c Return
}


func_1406(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0; // 0x57e PushV
	IsPlayerActor(var_14_object, var_16_bool); // 0x57f Func
	var_13_bool = var_16_bool; // 0x581 Mov
	return 2; // 0x582 Return
}


func_2433(var_21_bool, var_22_object, var_23_bool)
{
	var_24_string = ""; var_25_string = ""; // 0x981 PushV
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; // 0x982 PushV
	var_27_object = var_22_object; // 0x983 Mov
	var_28_string = "class"; // 0x984 MovS
	func_1411(var_26_bool, var_27_object, var_28_string); // 0x985 NEW_2
	var_35_bool = var_26_bool == 0; // 0x987 Not
	if(var_35_bool == 0) goto Label_2443; // 0x988 JumpB
	var_21_bool = 0; // 0x989 MovB
	return 2; // 0x98a Return
	
Label_2443:
	var_36_string = "class"; // 0x98b PushS
	GetProperty(var_36_string, var_25_string); // 0x98c ObjFunc
	var_37_bool = 0; // 0x98e PushV
	var_37_bool = 1; // 0x98f MovB
	var_38_bool = 0; // 0x990 PushV
	var_38_bool = 1; // 0x991 MovB
	var_39_bool = 0; // 0x992 PushV
	var_39_bool = 1; // 0x993 MovB
	var_40_bool = 0; // 0x994 PushV
	var_40_bool = 1; // 0x995 MovB
	var_41_bool = 0; // 0x996 PushV
	var_41_bool = 1; // 0x997 MovB
	var_42_bool = 0; // 0x998 PushV
	var_42_bool = 1; // 0x999 MovB
	var_43_bool = 0; // 0x99a PushV
	var_43_bool = 1; // 0x99b MovB
	var_44_bool = 0; // 0x99c PushV
	var_44_bool = 1; // 0x99d MovB
	var_45_bool = 0; // 0x99e PushV
	var_45_bool = 1; // 0x99f MovB
	var_46_bool = 0; // 0x9a0 PushV
	var_46_bool = 1; // 0x9a1 MovB
	var_47_string = "patrol"; // 0x9a2 PushS
	var_48_bool = var_25_string == var_47_string; // 0x9a3 Eq
	if(var_48_bool == 0) goto Label_2473; // 0x9a4 JumpB
	var_49_string = "sanitar"; // 0x9a5 PushS
	var_50_bool = var_25_string == var_49_string; // 0x9a6 Eq
	if(var_50_bool == 0) goto Label_2473; // 0x9a7 JumpB
	var_46_bool = 0; // 0x9a8 MovB
	
Label_2473:
	if(var_46_bool == 0) goto Label_2478; // 0x9a9 JumpB
	var_51_string = "soldier"; // 0x9aa PushS
	var_52_bool = var_25_string == var_51_string; // 0x9ab Eq
	if(var_52_bool == 0) goto Label_2478; // 0x9ac JumpB
	var_45_bool = 0; // 0x9ad MovB
	
Label_2478:
	if(var_45_bool == 0) goto Label_2483; // 0x9ae JumpB
	var_53_string = "woman"; // 0x9af PushS
	var_54_bool = var_25_string == var_53_string; // 0x9b0 Eq
	if(var_54_bool == 0) goto Label_2483; // 0x9b1 JumpB
	var_44_bool = 0; // 0x9b2 MovB
	
Label_2483:
	if(var_44_bool == 0) goto Label_2488; // 0x9b3 JumpB
	var_55_string = "wasted_girl"; // 0x9b4 PushS
	var_56_bool = var_25_string == var_55_string; // 0x9b5 Eq
	if(var_56_bool == 0) goto Label_2488; // 0x9b6 JumpB
	var_43_bool = 0; // 0x9b7 MovB
	
Label_2488:
	if(var_43_bool == 0) goto Label_2493; // 0x9b8 JumpB
	var_57_string = "vaxxabitka"; // 0x9b9 PushS
	var_58_bool = var_25_string == var_57_string; // 0x9ba Eq
	if(var_58_bool == 0) goto Label_2493; // 0x9bb JumpB
	var_42_bool = 0; // 0x9bc MovB
	
Label_2493:
	if(var_42_bool == 0) goto Label_2498; // 0x9bd JumpB
	var_59_string = "vaxxabit"; // 0x9be PushS
	var_60_bool = var_25_string == var_59_string; // 0x9bf Eq
	if(var_60_bool == 0) goto Label_2498; // 0x9c0 JumpB
	var_41_bool = 0; // 0x9c1 MovB
	
Label_2498:
	if(var_41_bool == 0) goto Label_2503; // 0x9c2 JumpB
	var_61_string = "little_girl"; // 0x9c3 PushS
	var_62_bool = var_25_string == var_61_string; // 0x9c4 Eq
	if(var_62_bool == 0) goto Label_2503; // 0x9c5 JumpB
	var_40_bool = 0; // 0x9c6 MovB
	
Label_2503:
	if(var_40_bool == 0) goto Label_2508; // 0x9c7 JumpB
	var_63_string = "girl"; // 0x9c8 PushS
	var_64_bool = var_25_string == var_63_string; // 0x9c9 Eq
	if(var_64_bool == 0) goto Label_2508; // 0x9ca JumpB
	var_39_bool = 0; // 0x9cb MovB
	
Label_2508:
	if(var_39_bool == 0) goto Label_2513; // 0x9cc JumpB
	var_65_string = "dohodyaga"; // 0x9cd PushS
	var_66_bool = var_25_string == var_65_string; // 0x9ce Eq
	if(var_66_bool == 0) goto Label_2513; // 0x9cf JumpB
	var_38_bool = 0; // 0x9d0 MovB
	
Label_2513:
	if(var_38_bool == 0) goto Label_2518; // 0x9d1 JumpB
	var_67_string = "nudegirl"; // 0x9d2 PushS
	var_68_bool = var_25_string == var_67_string; // 0x9d3 Eq
	if(var_68_bool == 0) goto Label_2518; // 0x9d4 JumpB
	var_37_bool = 0; // 0x9d5 MovB
	
Label_2518:
	if(var_37_bool == 0) goto Label_2521; // 0x9d6 JumpB
	var_21_bool = 1; // 0x9d7 MovB
	return 2; // 0x9d8 Return
	
Label_2521:
	var_69_bool = var_23_bool; // 0x9d9 Push
	if(var_69_bool == 0) goto Label_2525; // 0x9da JumpB
	var_21_bool = 0; // 0x9db MovB
	return 2; // 0x9dc Return
	
Label_2525:
	var_21_bool = 1; // 0x9dd MovB
	var_70_bool = 0; // 0x9de PushV
	var_70_bool = 1; // 0x9df MovB
	var_71_bool = 0; // 0x9e0 PushV
	var_71_bool = 1; // 0x9e1 MovB
	var_72_bool = 0; // 0x9e2 PushV
	var_72_bool = 1; // 0x9e3 MovB
	var_73_bool = 0; // 0x9e4 PushV
	var_73_bool = 1; // 0x9e5 MovB
	var_74_bool = 0; // 0x9e6 PushV
	var_74_bool = 1; // 0x9e7 MovB
	var_75_string = "worker"; // 0x9e8 PushS
	var_76_bool = var_25_string == var_75_string; // 0x9e9 Eq
	if(var_76_bool == 0) goto Label_2543; // 0x9ea JumpB
	var_77_string = "butcher"; // 0x9eb PushS
	var_78_bool = var_25_string == var_77_string; // 0x9ec Eq
	if(var_78_bool == 0) goto Label_2543; // 0x9ed JumpB
	var_74_bool = 0; // 0x9ee MovB
	
Label_2543:
	if(var_74_bool == 0) goto Label_2548; // 0x9ef JumpB
	var_79_string = "boy"; // 0x9f0 PushS
	var_80_bool = var_25_string == var_79_string; // 0x9f1 Eq
	if(var_80_bool == 0) goto Label_2548; // 0x9f2 JumpB
	var_73_bool = 0; // 0x9f3 MovB
	
Label_2548:
	if(var_73_bool == 0) goto Label_2553; // 0x9f4 JumpB
	var_81_string = "unosha"; // 0x9f5 PushS
	var_82_bool = var_25_string == var_81_string; // 0x9f6 Eq
	if(var_82_bool == 0) goto Label_2553; // 0x9f7 JumpB
	var_72_bool = 0; // 0x9f8 MovB
	
Label_2553:
	if(var_72_bool == 0) goto Label_2558; // 0x9f9 JumpB
	var_83_string = "wasted_male"; // 0x9fa PushS
	var_84_bool = var_25_string == var_83_string; // 0x9fb Eq
	if(var_84_bool == 0) goto Label_2558; // 0x9fc JumpB
	var_71_bool = 0; // 0x9fd MovB
	
Label_2558:
	if(var_71_bool == 0) goto Label_2563; // 0x9fe JumpB
	var_85_string = "alkash"; // 0x9ff PushS
	var_86_bool = var_25_string == var_85_string; // 0xa00 Eq
	if(var_86_bool == 0) goto Label_2563; // 0xa01 JumpB
	var_70_bool = 0; // 0xa02 MovB
	
Label_2563:
	if(var_70_bool == 0) goto Label_2568; // 0xa03 JumpB
	var_87_string = "morlok"; // 0xa04 PushS
	var_88_bool = var_25_string == var_87_string; // 0xa05 Eq
	if(var_88_bool == 0) goto Label_2568; // 0xa06 JumpB
	var_21_bool = 0; // 0xa07 MovB
	
Label_2568:
	return 2; // 0xa08 Return
}


func_1411(var_39_bool, var_40_object, var_41_string)
{
	var_42_bool = 0; var_43_bool = 0; // 0x583 PushV
	var_44_string = "HasProperty"; // 0x584 PushS
	var_45_int = 2; // 0x585 PushI
	var_46_bool = IsFuncExist(var_40_object, var_44_string, var_45_int); // 0x586 FuncExist
	var_47_bool = var_46_bool == 0; // 0x587 Not
	if(var_47_bool == 0) goto Label_1419; // 0x588 JumpB
	var_39_bool = 0; // 0x589 MovB
	return 2; // 0x58a Return
	
Label_1419:
	HasProperty(var_41_string, var_43_bool); // 0x58b ObjFunc
	var_39_bool = var_43_bool; // 0x58d Mov
	return 2; // 0x58e Return
}


func_1423(var_252_float, var_253_object, var_254_float, var_255_int)
{
	var_256_int = 0; var_257_string = ""; var_258_int = 0; var_259_float = 0; var_260_float = 0; var_261_float = 0; var_262_int = 0; var_263_string = ""; var_264_int = 0; var_265_float = 0; var_266_float = 0; var_267_float = 0; // 0x58f PushV
	var_268_bool = 0; var_269_object = Obj(); var_270_string = ""; // 0x590 PushV
	var_269_object = var_253_object; // 0x591 Mov
	var_270_string = "health"; // 0x592 MovS
	func_1411(var_268_bool, var_269_object, var_270_string); // 0x593 NEW_2
	var_271_bool = var_268_bool == 0; // 0x595 Not
	if(var_271_bool == 0) goto Label_1433; // 0x596 JumpB
	var_252_float = 0.0; // 0x597 MovF
	return 12; // 0x598 Return
	
Label_1433:
	var_272_bool = 0; var_273_object = Obj(); var_274_string = ""; // 0x599 PushV
	var_273_object = var_253_object; // 0x59a Mov
	var_274_string = "armor"; // 0x59b MovS
	func_1411(var_272_bool, var_273_object, var_274_string); // 0x59c NEW_2
	var_275_bool = var_272_bool == 0; // 0x59e Not
	if(var_275_bool == 0) goto Label_1442; // 0x59f JumpB
	var_262_int = 0; // 0x5a0 MovI
	goto Label_1445; // 0x5a1 Jump
	
Label_1445:
	var_276_string = "armor_"; // 0x5a5 PushS
	var_277_string = ""; var_278_int = 0; // 0x5a6 PushV
	var_278_int = var_255_int; // 0x5a7 Mov
	func_1370(var_277_string, var_278_int); // 0x5a8 NEW_2
	var_263_string = var_276_string + var_277_string; // 0x5aa Add2
	var_283_bool = 0; var_284_object = Obj(); var_285_string = ""; // 0x5ab PushV
	var_284_object = var_253_object; // 0x5ac Mov
	var_285_string = var_263_string; // 0x5ad Mov
	func_1411(var_283_bool, var_284_object, var_285_string); // 0x5ae NEW_2
	var_286_bool = var_283_bool == 0; // 0x5b0 Not
	if(var_286_bool == 0) goto Label_1460; // 0x5b1 JumpB
	var_264_int = 0; // 0x5b2 MovI
	goto Label_1462; // 0x5b3 Jump
	
Label_1462:
	var_287_float = 0; var_288_float = 0; var_289_float = 0; // 0x5b6 PushV
	var_290_int = var_262_int + var_264_int; // 0x5b7 Add
	var_291_float = 100.0; // 0x5b8 PushF
	var_288_float = var_290_int / var_290_int; // 0x5b9 Div2
	var_289_float = 1; // 0x5ba MovI
	func_2007(var_287_float, var_288_float, var_289_float); // 0x5bb NEW_2
	var_265_float = var_287_float; // 0x5bc Mov
	var_293_string = "health"; // 0x5be PushS
	GetProperty(var_293_string, var_266_float); // 0x5bf ObjFunc
	var_294_int = 1; // 0x5c1 PushI
	var_295_int = var_294_int - var_265_float; // 0x5c2 Sub
	var_267_float = var_254_float * var_295_int; // 0x5c3 Mult2
	var_296_string = "health"; // 0x5c4 PushS
	var_297_float = 0; var_298_float = 0; var_299_float = 0; var_300_float = 0; // 0x5c5 PushV
	var_298_float = var_266_float - var_267_float; // 0x5c6 Sub2
	var_299_float = 0; // 0x5c7 MovI
	var_300_float = 1; // 0x5c8 MovI
	func_2014(var_297_float, var_298_float, var_299_float, var_300_float); // 0x5c9 NEW_2
	SetProperty(var_296_string, var_297_float); // 0x5cb ObjFunc
	var_303_bool = 0; var_304_object = Obj(); // 0x5cd PushV
	var_304_object = var_253_object; // 0x5ce Mov
	func_1406(var_303_bool, var_304_object); // 0x5cf NEW_2
	if(var_303_bool == 0) goto Label_1494; // 0x5d1 JumpB
	var_305_float = 0; // 0x5d2 PushV
	var_305_float = -var_267_float; // 0x5d3 Neg2
	func_2077(var_305_float); // 0x5d4 NEW_2
	
Label_1494:
	var_252_float = var_267_float; // 0x5d6 Mov
	return 12; // 0x5d7 Return
	
Label_1460:
	GetProperty(var_263_string, var_264_int); // 0x5b4 ObjFunc
	
Label_1442:
	var_309_string = "armor"; // 0x5a2 PushS
	GetProperty(var_309_string, var_262_int); // 0x5a3 ObjFunc
}


func_1987(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj(); // 0x7c3 PushV
	self(var_14_object); // 0x7c4 Func
	var_12_object = var_14_object; // 0x7c6 Mov
	return 2; // 0x7c7 Return
}


func_1993(var_44_cvector, var_45_cvector)
{
	var_52_float = 0; var_53_float = 0; // 0x7c9 PushV
	var_54_int = var_45_cvector | var_45_cvector; // 0x7ca Or
	var_53_float = sqrt(var_54_int); // 0x7cb Sqrt2
	var_55_float = 0.0; // 0x7cc PushF
	var_56_bool = var_53_float < var_55_float; // 0x7cd LT
	if(var_56_bool == 0) goto Label_2001; // 0x7ce JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x7cf MovV
	return 2; // 0x7d0 Return
	
Label_2001:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x7d1 Div2
	return 2; // 0x7d2 Return
}


func_2003(var_34_float, var_35_cvector, var_36_cvector)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x7d3 PushV
	var_38_cvector = var_36_cvector - var_35_cvector; // 0x7d4 Sub2
	var_34_float = var_38_cvector | var_38_cvector; // 0x7d5 Or2
	return 2; // 0x7d6 Return
}


func_2007(var_287_float, var_288_float, var_289_float)
{
	var_292_bool = var_288_float < var_289_float; // 0x7d8 LT
	if(var_292_bool == 0) goto Label_2012; // 0x7d9 JumpB
	var_287_float = var_288_float; // 0x7da Mov
	goto Label_2013; // 0x7db Jump
	
Label_2013:
	return 0; // 0x7dd Return
	
Label_2012:
	var_287_float = var_289_float; // 0x7dc Mov
}


func_1496(var_32_bool)
{
	var_34_bool = 0; var_35_bool = 0; // 0x5d8 PushV
	IsDead(var_35_bool); // 0x5d9 ObjFunc
	var_32_bool = var_35_bool; // 0x5db Mov
	return 2; // 0x5dc Return
}


func_1501(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj(); // 0x5dd PushV
	var_27_bool = var_22_object == 0; // 0x5de NullEq
	if(var_27_bool == 0) goto Label_1506; // 0x5df JumpB
	var_21_bool = 0; // 0x5e0 MovB
	return 4; // 0x5e1 Return
	
Label_1506:
	var_28_bool = 0; // 0x5e2 PushV
	var_28_bool = 0; // 0x5e3 MovB
	var_29_string = "IsDead"; // 0x5e4 PushS
	var_30_int = 1; // 0x5e5 PushI
	var_31_bool = IsFuncExist(var_22_object, var_29_string, var_30_int); // 0x5e6 FuncExist
	if(var_31_bool == 0) goto Label_1518; // 0x5e7 JumpB
	var_32_bool = 0; var_33_object = Obj(); // 0x5e8 PushV
	var_33_object = var_22_object; // 0x5e9 Mov
	func_1496(var_33_object); // 0x5ea NEW_2
	if(var_32_bool == 0) goto Label_1518; // 0x5ec JumpB
	var_28_bool = 1; // 0x5ed MovB
	
Label_1518:
	if(var_28_bool == 0) goto Label_1521; // 0x5ee JumpB
	var_21_bool = 0; // 0x5ef MovB
	return 4; // 0x5f0 Return
	
Label_1521:
	GetScene(var_25_object); // 0x5f1 Func
	var_36_bool = var_25_object == 0; // 0x5f3 NullEq
	if(var_36_bool == 0) goto Label_1527; // 0x5f4 JumpB
	var_21_bool = 0; // 0x5f5 MovB
	return 4; // 0x5f6 Return
	
Label_1527:
	GetScene(var_26_object); // 0x5f7 ObjFunc
	var_37_bool = var_25_object != var_26_object; // 0x5f9 Neq
	if(var_37_bool == 0) goto Label_1533; // 0x5fa JumpB
	var_21_bool = 0; // 0x5fb MovB
	return 4; // 0x5fc Return
	
Label_1533:
	var_21_bool = 1; // 0x5fd MovB
	return 4; // 0x5fe Return
}


func_2014(var_297_float, var_298_float, var_299_float, var_300_float)
{
	var_301_bool = var_298_float < var_299_float; // 0x7df LT
	if(var_301_bool == 0) goto Label_2019; // 0x7e0 JumpB
	var_297_float = var_299_float; // 0x7e1 Mov
	return 0; // 0x7e2 Return
	
Label_2019:
	var_302_bool = var_298_float > var_300_float; // 0x7e3 GT
	if(var_302_bool == 0) goto Label_2023; // 0x7e4 JumpB
	var_297_float = var_300_float; // 0x7e5 Mov
	return 0; // 0x7e6 Return
	
Label_2023:
	var_297_float = var_298_float; // 0x7e7 Mov
	return 0; // 0x7e8 Return
}


func_2025(var_59_bool, var_60_int, var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x7e9 PushV
	irand(var_63_int, var_61_int); // 0x7ea Func
	var_59_bool = var_63_int < var_60_int; // 0x7ec LT2
	return 2; // 0x7ed Return
}


func_1004(var_0_object, var_1_object)
{
	var_0_object = var_1_object; // 0x3ec TMovT
	var_1_object = 0; // 0x3ed SetNullT
	Face(var_0_object); // 0x3ee Func
	return 0; // 0x3f0 Return
}


func_2030(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj(); // 0x7ee PushV
	CreateObjectSet(var_21_object); // 0x7ef Func
	var_19_object = var_21_object; // 0x7f1 Mov
	return 2; // 0x7f2 Return
}


func_1009(var_0_object)
{
	var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_bool = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_object = Obj(); var_178_int = 0; var_179_cvector = CVector(0,0,0); var_180_float = 0; var_181_object = Obj(); var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_bool = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_object = Obj(); var_190_cvector = CVector(0,0,0); var_191_object = Obj(); var_192_int = 0; var_193_cvector = CVector(0,0,0); var_194_float = 0; var_195_object = Obj(); var_196_object = Obj(); // 0x3f1 PushV
	var_197_object = Obj(); // 0x3f2 PushV
	var_197_object = var_0_object; // 0x3f3 MovT
	func_2099(var_197_object); // 0x3f4 NEW_2
	ReportAttack(var_0_object); // 0x3f6 Func
	var_198_bool = 0; var_199_object = Obj(); // 0x3f8 PushV
	var_199_object = var_0_object; // 0x3f9 MovT
	func_1406(var_198_bool, var_199_object); // 0x3fa NEW_2
	if(var_198_bool == 0) goto Label_1026; // 0x3fc JumpB
	var_200_object = Obj(); // 0x3fd PushV
	func_1987(var_200_object); // 0x3fe NEW_2
	SendPlayerEnemy(var_0_object, var_200_object); // 0x400 Func
	
Label_1026:
	GetDirection(var_183_cvector); // 0x402 Func
	var_201_cvector = CVector(0,0,0); var_202_object = Obj(); // 0x404 PushV
	var_202_object = var_0_object; // 0x405 MovT
	func_1384(var_202_object); // 0x406 NEW_2
	var_184_cvector = var_201_cvector; // 0x407 Mov
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); // 0x409 PushV
	var_208_cvector = var_183_cvector; // 0x40a Mov
	var_209_cvector = var_184_cvector; // 0x40b Mov
	func_2055(var_207_float, var_208_cvector, var_209_cvector); // 0x40c NEW_2
	var_231_float = 0.99939; // 0x40e PushF
	var_232_bool = var_207_float < var_231_float; // 0x40f LT
	if(var_232_bool == 0) goto Label_1042; // 0x410 JumpB
	return 28; // 0x411 Return
	
Label_1042:
	func_2108(); // 0x413 NEW_2
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
	Speak(var_239_string); // 0x42a Func
	GetDirection(var_183_cvector); // 0x42c Func
	var_240_cvector = CVector(0,0,0); var_241_object = Obj(); // 0x42e PushV
	var_241_object = var_0_object; // 0x42f MovT
	func_1384(var_241_object); // 0x430 NEW_2
	var_184_cvector = var_240_cvector; // 0x431 Mov
	var_242_float = GetByIndex(var_184_cvector, 1); // 0x433 PushE
	var_243_float = 0; var_244_object = Obj(); // 0x434 PushV
	var_244_object = var_0_object; // 0x435 MovT
	func_1698(var_244_object); // 0x436 NEW_2
	var_242_float = var_242_float + var_243_float; // 0x438 Add2
	SetByIndex(var_184_cvector, 1) = var_242_float; // 0x439 PopE
	var_249_float = 0.03491; // 0x43a PushF
	RandVecCone3D(var_190_cvector, var_184_cvector, var_249_float); // 0x43b Func
	GetVictimMaterial(var_190_cvector, var_191_object, var_192_int, var_193_cvector); // 0x43d Func
	var_250_bool = var_191_object != 0; // 0x43f NullNeq
	if(var_250_bool == 0) goto Label_1118; // 0x440 JumpB
	var_251_bool = var_191_object == var_0_object; // 0x441 Eq
	if(var_251_bool == 0) goto Label_1103; // 0x442 JumpB
	var_252_float = 0; var_253_object = Obj(); var_254_float = 0; var_255_int = 0; // 0x443 PushV
	var_253_object = var_0_object; // 0x444 MovT
	var_254_float = 1.5; // 0x445 MovF
	var_255_int = 1; // 0x446 MovI
	func_1423(var_252_float, var_253_object, var_254_float, var_255_int); // 0x447 NEW_2
	var_194_float = var_252_float; // 0x448 Mov
	var_310_int = 2; // 0x44a PushI
	var_311_float = 1.5; // 0x44b PushF
	ReportHit(var_0_object, var_310_int, var_194_float, var_311_float); // 0x44c Func
	goto Label_1118; // 0x44e Jump
	
Label_1118:
	var_312_string = "all"; // 0x45e PushS
	var_313_string = "attack_end1"; // 0x45f PushS
	PlayAnimation(var_312_string, var_313_string); // 0x460 Func
	WaitForAnimEnd(); // 0x462 Func
	var_314_string = "all"; // 0x464 PushS
	var_315_string = "attack_on"; // 0x465 PushS
	LockAnimationEnd(var_314_string, var_315_string); // 0x466 Func
	return 28; // 0x468 Return
	
Label_1103:
	var_316_int = -1; // 0x44f PushI
	var_317_bool = var_192_int != var_316_int; // 0x450 Neq
	if(var_317_bool == 0) goto Label_1118; // 0x451 JumpB
	GetScene(var_195_object); // 0x452 Func
	var_318_string = "scripted"; // 0x454 PushS
	var_319_cvector = CVector(0.0, 0.0, 1.0); // 0x455 PushVec
	var_320_string = "richochet.xml"; // 0x456 PushS
	AddActorByType(var_196_object, var_318_string, var_195_object, var_193_cvector, var_319_cvector, var_320_string); // 0x457 Func
	var_321_string = "Material"; // 0x459 PushS
	SetScriptProperty(var_321_string, var_192_int); // 0x45a ObjFunc
	var_196_object = 0; // 0x45c SetNull
	var_195_object = 0; // 0x45d SetNull
	
Label_1063:
	WaitForAnimEnd(); // 0x427 Func
}


func_2036(var_210_float, var_211_cvector, var_212_cvector)
{
	var_213_float = GetByIndex(var_211_cvector, 0); // 0x7f5 PushE
	var_214_float = GetByIndex(var_212_cvector, 0); // 0x7f6 PushE
	var_215_float = var_213_float * var_214_float; // 0x7f7 Mult
	var_216_float = GetByIndex(var_211_cvector, 2); // 0x7f8 PushE
	var_217_float = GetByIndex(var_212_cvector, 2); // 0x7f9 PushE
	var_218_float = var_216_float * var_217_float; // 0x7fa Mult
	var_210_float = var_215_float + var_218_float; // 0x7fb Add2
	return 0; // 0x7fc Return
}


func_2045(var_219_float, var_220_cvector)
{
	var_221_float = GetByIndex(var_220_cvector, 0); // 0x7fe PushE
	var_222_float = GetByIndex(var_220_cvector, 0); // 0x7ff PushE
	var_223_float = var_221_float * var_222_float; // 0x800 Mult
	var_224_float = GetByIndex(var_220_cvector, 2); // 0x801 PushE
	var_225_float = GetByIndex(var_220_cvector, 2); // 0x802 PushE
	var_226_float = var_224_float * var_225_float; // 0x803 Mult
	var_227_int = var_223_float + var_226_float; // 0x804 Add
	var_219_float = sqrt(var_227_int); // 0x805 Sqrt2
	return 0; // 0x806 Return
}


