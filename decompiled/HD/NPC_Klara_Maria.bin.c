task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xbb PushI
	if(var_58_int == 0) goto Label_370; // 0xbc JumpB
	func_4516(); // 0xbe NEW_2
	var_60_int = 26084; // 0xc0 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xc1 Eq
	if(var_61_bool == 0) goto Label_200; // 0xc2 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xc3 PushV
	var_62_object = var_1_object; // 0xc4 MovT
	var_63_object = var_0_object; // 0xc5 MovT
	func_4762(); // 0xc6 NEW_2
	
Label_200:
	var_89_int = 26083; // 0xc8 PushI
	var_90_bool = var_56_bool == var_89_int; // 0xc9 Eq
	if(var_90_bool == 0) goto Label_248; // 0xca JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0xcb PushV
	var_92_object = var_1_object; // 0xcc MovT
	func_4980(var_92_object); // 0xcd NEW_2
	if(var_91_bool == 0) goto Label_228; // 0xcf JumpB
	var_99_string = ""; // 0xd0 PushV
	var_99_string = "Neutral"; // 0xd1 MovS
	func_164(var_57_cvector, var_99_string); // 0xd2 NEW_2
	var_116_int = 524759; // 0xd4 PushI
	SetMessage(var_116_int); // 0xd5 TObjFunc
	ClearReplies(); // 0xd7 TObjFunc
	var_117_int = 526896; // 0xd9 PushI
	var_118_int = 28184; // 0xda PushI
	var_119_int = 28183; // 0xdb PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0xdc TObjFunc
	var_120_int = 526903; // 0xde PushI
	var_121_int = 28184; // 0xdf PushI
	var_122_int = 28191; // 0xe0 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xe1 TObjFunc
	return 0; // 0xe3 Return
	
Label_228:
	var_123_string = ""; // 0xe4 PushV
	var_123_string = "Neutral"; // 0xe5 MovS
	func_164(var_57_cvector, var_123_string); // 0xe6 NEW_2
	var_124_int = 524761; // 0xe8 PushI
	SetMessage(var_124_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_125_int = 526893; // 0xed PushI
	var_126_int = -1; // 0xee PushI
	var_127_int = 28180; // 0xef PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0xf0 TObjFunc
	var_128_int = 542280; // 0xf2 PushI
	var_129_int = -1; // 0xf3 PushI
	var_130_int = 44625; // 0xf4 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0xf5 TObjFunc
	return 0; // 0xf7 Return
	
Label_248:
	var_131_int = 28184; // 0xf8 PushI
	var_132_bool = var_56_bool == var_131_int; // 0xf9 Eq
	if(var_132_bool == 0) goto Label_271; // 0xfa JumpB
	var_133_string = ""; // 0xfb PushV
	var_133_string = "Mysterious"; // 0xfc MovS
	func_164(var_57_cvector, var_133_string); // 0xfd NEW_2
	var_134_int = 526897; // 0xff PushI
	SetMessage(var_134_int); // 0x100 TObjFunc
	ClearReplies(); // 0x102 TObjFunc
	var_135_int = 526894; // 0x104 PushI
	var_136_int = 28185; // 0x105 PushI
	var_137_int = 28181; // 0x106 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x107 TObjFunc
	var_138_int = 526904; // 0x109 PushI
	var_139_int = 28194; // 0x10a PushI
	var_140_int = 28193; // 0x10b PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x10c TObjFunc
	return 0; // 0x10e Return
	
Label_271:
	var_141_int = 28194; // 0x10f PushI
	var_142_bool = var_56_bool == var_141_int; // 0x110 Eq
	if(var_142_bool == 0) goto Label_294; // 0x111 JumpB
	var_143_string = ""; // 0x112 PushV
	var_143_string = "Mysterious"; // 0x113 MovS
	func_164(var_57_cvector, var_143_string); // 0x114 NEW_2
	var_144_int = 526905; // 0x116 PushI
	SetMessage(var_144_int); // 0x117 TObjFunc
	ClearReplies(); // 0x119 TObjFunc
	var_145_int = 526906; // 0x11b PushI
	var_146_int = 28185; // 0x11c PushI
	var_147_int = 28195; // 0x11d PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x11e TObjFunc
	var_148_int = 526907; // 0x120 PushI
	var_149_int = 28187; // 0x121 PushI
	var_150_int = 28197; // 0x122 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x123 TObjFunc
	return 0; // 0x125 Return
	
Label_294:
	var_151_int = 28185; // 0x126 PushI
	var_152_bool = var_56_bool == var_151_int; // 0x127 Eq
	if(var_152_bool == 0) goto Label_317; // 0x128 JumpB
	var_153_string = ""; // 0x129 PushV
	var_153_string = "Neutral"; // 0x12a MovS
	func_164(var_57_cvector, var_153_string); // 0x12b NEW_2
	var_154_int = 526898; // 0x12d PushI
	SetMessage(var_154_int); // 0x12e TObjFunc
	ClearReplies(); // 0x130 TObjFunc
	var_155_int = 526899; // 0x132 PushI
	var_156_int = 28187; // 0x133 PushI
	var_157_int = 28186; // 0x134 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x135 TObjFunc
	var_158_int = 526908; // 0x137 PushI
	var_159_int = 28182; // 0x138 PushI
	var_160_int = 28199; // 0x139 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x13a TObjFunc
	return 0; // 0x13c Return
	
Label_317:
	var_161_int = 28187; // 0x13d PushI
	var_162_bool = var_56_bool == var_161_int; // 0x13e Eq
	if(var_162_bool == 0) goto Label_340; // 0x13f JumpB
	var_163_string = ""; // 0x140 PushV
	var_163_string = "Neutral"; // 0x141 MovS
	func_164(var_57_cvector, var_163_string); // 0x142 NEW_2
	var_164_int = 526900; // 0x144 PushI
	SetMessage(var_164_int); // 0x145 TObjFunc
	ClearReplies(); // 0x147 TObjFunc
	var_165_int = 526901; // 0x149 PushI
	var_166_int = 28182; // 0x14a PushI
	var_167_int = 28188; // 0x14b PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x14c TObjFunc
	var_168_int = 526902; // 0x14e PushI
	var_169_int = 28182; // 0x14f PushI
	var_170_int = 28189; // 0x150 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x151 TObjFunc
	return 0; // 0x153 Return
	
Label_340:
	var_171_int = 28182; // 0x154 PushI
	var_172_bool = var_56_bool == var_171_int; // 0x155 Eq
	if(var_172_bool == 0) goto Label_358; // 0x156 JumpB
	var_173_string = ""; // 0x157 PushV
	var_173_string = "Angry"; // 0x158 MovS
	func_164(var_57_cvector, var_173_string); // 0x159 NEW_2
	var_174_int = 526895; // 0x15b PushI
	SetMessage(var_174_int); // 0x15c TObjFunc
	ClearReplies(); // 0x15e TObjFunc
	var_175_int = 524760; // 0x160 PushI
	var_176_int = -1; // 0x161 PushI
	var_177_int = 26084; // 0x162 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x163 TObjFunc
	return 0; // 0x165 Return
	
Label_358:
	var_3_string = 1; // 0x166 TMovB
	var_178_bool = 0; // 0x167 PushV
	func_4727(var_178_bool); // 0x168 NEW_2
	if(var_178_bool == 0) goto Label_366; // 0x16a JumpB
	lshStopAnimation(); // 0x16b Func
	goto Label_368; // 0x16d Jump
	
Label_368:
	return 0; // 0x170 Return
	
Label_366:
	StopAnimation(); // 0x16e Func
	
Label_370:
	return 0; // 0x172 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x215 PushI
	if(var_58_int == 0) goto Label_596; // 0x216 JumpB
	func_4516(); // 0x218 NEW_2
	var_60_int = 26857; // 0x21a PushI
	var_61_bool = var_56_bool == var_60_int; // 0x21b Eq
	if(var_61_bool == 0) goto Label_561; // 0x21c JumpB
	var_62_string = ""; // 0x21d PushV
	var_62_string = "Neutral"; // 0x21e MovS
	func_510(var_57_cvector, var_62_string); // 0x21f NEW_2
	var_79_int = 525501; // 0x221 PushI
	SetMessage(var_79_int); // 0x222 TObjFunc
	ClearReplies(); // 0x224 TObjFunc
	var_80_int = 525502; // 0x226 PushI
	var_81_int = 27545; // 0x227 PushI
	var_82_int = 26858; // 0x228 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x229 TObjFunc
	var_83_int = 526269; // 0x22b PushI
	var_84_int = 27545; // 0x22c PushI
	var_85_int = 27544; // 0x22d PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x22e TObjFunc
	return 0; // 0x230 Return
	
Label_561:
	var_86_int = 27545; // 0x231 PushI
	var_87_bool = var_56_bool == var_86_int; // 0x232 Eq
	if(var_87_bool == 0) goto Label_584; // 0x233 JumpB
	var_88_string = ""; // 0x234 PushV
	var_88_string = "Neutral"; // 0x235 MovS
	func_510(var_57_cvector, var_88_string); // 0x236 NEW_2
	var_89_int = 526270; // 0x238 PushI
	SetMessage(var_89_int); // 0x239 TObjFunc
	ClearReplies(); // 0x23b TObjFunc
	var_90_int = 526271; // 0x23d PushI
	var_91_int = -1; // 0x23e PushI
	var_92_int = 27546; // 0x23f PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x240 TObjFunc
	var_93_int = 526272; // 0x242 PushI
	var_94_int = -1; // 0x243 PushI
	var_95_int = 27547; // 0x244 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x245 TObjFunc
	return 0; // 0x247 Return
	
Label_584:
	var_3_string = 1; // 0x248 TMovB
	var_96_bool = 0; // 0x249 PushV
	func_4727(var_96_bool); // 0x24a NEW_2
	if(var_96_bool == 0) goto Label_592; // 0x24c JumpB
	lshStopAnimation(); // 0x24d Func
	goto Label_594; // 0x24f Jump
	
Label_594:
	return 0; // 0x252 Return
	
Label_592:
	StopAnimation(); // 0x250 Func
	
Label_596:
	return 0; // 0x254 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x30f PushI
	if(var_58_int == 0) goto Label_1023; // 0x310 JumpB
	func_4516(); // 0x312 NEW_2
	var_60_int = 26955; // 0x314 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x315 Eq
	if(var_61_bool == 0) goto Label_796; // 0x316 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x317 PushV
	var_62_object = var_1_object; // 0x318 MovT
	var_63_object = var_0_object; // 0x319 MovT
	func_4771(); // 0x31a NEW_2
	
Label_796:
	var_66_int = 26959; // 0x31c PushI
	var_67_bool = var_57_cvector == var_66_int; // 0x31d Eq
	if(var_67_bool == 0) goto Label_804; // 0x31e JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0x31f PushV
	var_68_object = var_1_object; // 0x320 MovT
	var_69_object = var_0_object; // 0x321 MovT
	func_4933(var_69_object); // 0x322 NEW_2
	
Label_804:
	var_108_int = 42741; // 0x324 PushI
	var_109_bool = var_57_cvector == var_108_int; // 0x325 Eq
	if(var_109_bool == 0) goto Label_812; // 0x326 JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x327 PushV
	var_110_object = var_1_object; // 0x328 MovT
	var_111_object = var_0_object; // 0x329 MovT
	func_4933(var_111_object); // 0x32a NEW_2
	
Label_812:
	var_112_int = 42736; // 0x32c PushI
	var_113_bool = var_57_cvector == var_112_int; // 0x32d Eq
	if(var_113_bool == 0) goto Label_820; // 0x32e JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x32f PushV
	var_114_object = var_1_object; // 0x330 MovT
	var_115_object = var_0_object; // 0x331 MovT
	func_4920(); // 0x332 NEW_2
	
Label_820:
	var_118_int = 42745; // 0x334 PushI
	var_119_bool = var_57_cvector == var_118_int; // 0x335 Eq
	if(var_119_bool == 0) goto Label_828; // 0x336 JumpB
	var_120_object = Obj(); var_121_object = Obj(); // 0x337 PushV
	var_120_object = var_1_object; // 0x338 MovT
	var_121_object = var_0_object; // 0x339 MovT
	func_4926(var_121_object); // 0x33a NEW_2
	
Label_828:
	var_125_int = 42746; // 0x33c PushI
	var_126_bool = var_57_cvector == var_125_int; // 0x33d Eq
	if(var_126_bool == 0) goto Label_836; // 0x33e JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0x33f PushV
	var_127_object = var_1_object; // 0x340 MovT
	var_128_object = var_0_object; // 0x341 MovT
	func_4926(var_128_object); // 0x342 NEW_2
	
Label_836:
	var_129_int = 26954; // 0x344 PushI
	var_130_bool = var_56_bool == var_129_int; // 0x345 Eq
	if(var_130_bool == 0) goto Label_883; // 0x346 JumpB
	var_131_string = ""; // 0x347 PushV
	var_131_string = "Neutral"; // 0x348 MovS
	func_760(var_57_cvector, var_131_string); // 0x349 NEW_2
	var_148_int = 525607; // 0x34b PushI
	SetMessage(var_148_int); // 0x34c TObjFunc
	ClearReplies(); // 0x34e TObjFunc
	var_149_bool = 0; // 0x350 PushV
	var_149_bool = 0; // 0x351 MovB
	var_150_bool = 0; var_151_object = Obj(); // 0x352 PushV
	var_151_object = var_1_object; // 0x353 MovT
	func_4992(var_151_object); // 0x354 NEW_2
	if(var_150_bool == 0) goto Label_861; // 0x356 JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0x357 PushV
	var_159_object = var_1_object; // 0x358 MovT
	func_5004(var_159_object); // 0x359 NEW_2
	if(var_158_bool == 0) goto Label_861; // 0x35b JumpB
	var_149_bool = 1; // 0x35c MovB
	
Label_861:
	if(var_149_bool == 0) goto Label_867; // 0x35d JumpB
	var_164_int = 525608; // 0x35e PushI
	var_165_int = 26956; // 0x35f PushI
	var_166_int = 26955; // 0x360 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x361 TObjFunc
	
Label_867:
	var_167_bool = 0; var_168_object = Obj(); // 0x363 PushV
	var_168_object = var_1_object; // 0x364 MovT
	func_5178(var_168_object); // 0x365 NEW_2
	if(var_167_bool == 0) goto Label_877; // 0x367 JumpB
	var_173_int = 540700; // 0x368 PushI
	var_174_int = 42737; // 0x369 PushI
	var_175_int = 42736; // 0x36a PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x36b TObjFunc
	
Label_877:
	var_176_int = 525613; // 0x36d PushI
	var_177_int = -1; // 0x36e PushI
	var_178_int = 26960; // 0x36f PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x370 TObjFunc
	return 0; // 0x372 Return
	
Label_883:
	var_179_int = 42737; // 0x373 PushI
	var_180_bool = var_56_bool == var_179_int; // 0x374 Eq
	if(var_180_bool == 0) goto Label_906; // 0x375 JumpB
	var_181_string = ""; // 0x376 PushV
	var_181_string = "Mysterious"; // 0x377 MovS
	func_760(var_57_cvector, var_181_string); // 0x378 NEW_2
	var_182_int = 540701; // 0x37a PushI
	SetMessage(var_182_int); // 0x37b TObjFunc
	ClearReplies(); // 0x37d TObjFunc
	var_183_int = 540702; // 0x37f PushI
	var_184_int = 42740; // 0x380 PushI
	var_185_int = 42738; // 0x381 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x382 TObjFunc
	var_186_int = 540703; // 0x384 PushI
	var_187_int = -1; // 0x385 PushI
	var_188_int = 42739; // 0x386 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x387 TObjFunc
	return 0; // 0x389 Return
	
Label_906:
	var_189_int = 42740; // 0x38a PushI
	var_190_bool = var_56_bool == var_189_int; // 0x38b Eq
	if(var_190_bool == 0) goto Label_929; // 0x38c JumpB
	var_191_string = ""; // 0x38d PushV
	var_191_string = "Neutral"; // 0x38e MovS
	func_760(var_57_cvector, var_191_string); // 0x38f NEW_2
	var_192_int = 540704; // 0x391 PushI
	SetMessage(var_192_int); // 0x392 TObjFunc
	ClearReplies(); // 0x394 TObjFunc
	var_193_int = 540706; // 0x396 PushI
	var_194_int = 42744; // 0x397 PushI
	var_195_int = 42742; // 0x398 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x399 TObjFunc
	var_196_int = 540707; // 0x39b PushI
	var_197_int = -1; // 0x39c PushI
	var_198_int = 42743; // 0x39d PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x39e TObjFunc
	return 0; // 0x3a0 Return
	
Label_929:
	var_199_int = 42744; // 0x3a1 PushI
	var_200_bool = var_56_bool == var_199_int; // 0x3a2 Eq
	if(var_200_bool == 0) goto Label_952; // 0x3a3 JumpB
	var_201_string = ""; // 0x3a4 PushV
	var_201_string = "Angry"; // 0x3a5 MovS
	func_760(var_57_cvector, var_201_string); // 0x3a6 NEW_2
	var_202_int = 540708; // 0x3a8 PushI
	SetMessage(var_202_int); // 0x3a9 TObjFunc
	ClearReplies(); // 0x3ab TObjFunc
	var_203_int = 540709; // 0x3ad PushI
	var_204_int = -1; // 0x3ae PushI
	var_205_int = 42745; // 0x3af PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x3b0 TObjFunc
	var_206_int = 540710; // 0x3b2 PushI
	var_207_int = -1; // 0x3b3 PushI
	var_208_int = 42746; // 0x3b4 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x3b5 TObjFunc
	return 0; // 0x3b7 Return
	
Label_952:
	var_209_int = 26956; // 0x3b8 PushI
	var_210_bool = var_56_bool == var_209_int; // 0x3b9 Eq
	if(var_210_bool == 0) goto Label_975; // 0x3ba JumpB
	var_211_string = ""; // 0x3bb PushV
	var_211_string = "Mysterious"; // 0x3bc MovS
	func_760(var_57_cvector, var_211_string); // 0x3bd NEW_2
	var_212_int = 525609; // 0x3bf PushI
	SetMessage(var_212_int); // 0x3c0 TObjFunc
	ClearReplies(); // 0x3c2 TObjFunc
	var_213_int = 525610; // 0x3c4 PushI
	var_214_int = 26958; // 0x3c5 PushI
	var_215_int = 26957; // 0x3c6 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x3c7 TObjFunc
	var_216_int = 540705; // 0x3c9 PushI
	var_217_int = -1; // 0x3ca PushI
	var_218_int = 42741; // 0x3cb PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x3cc TObjFunc
	return 0; // 0x3ce Return
	
Label_975:
	var_219_int = 26958; // 0x3cf PushI
	var_220_bool = var_56_bool == var_219_int; // 0x3d0 Eq
	if(var_220_bool == 0) goto Label_993; // 0x3d1 JumpB
	var_221_string = ""; // 0x3d2 PushV
	var_221_string = "Mysterious"; // 0x3d3 MovS
	func_760(var_57_cvector, var_221_string); // 0x3d4 NEW_2
	var_222_int = 525611; // 0x3d6 PushI
	SetMessage(var_222_int); // 0x3d7 TObjFunc
	ClearReplies(); // 0x3d9 TObjFunc
	var_223_int = 529340; // 0x3db PushI
	var_224_int = 30796; // 0x3dc PushI
	var_225_int = 30795; // 0x3dd PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x3de TObjFunc
	return 0; // 0x3e0 Return
	
Label_993:
	var_226_int = 30796; // 0x3e1 PushI
	var_227_bool = var_56_bool == var_226_int; // 0x3e2 Eq
	if(var_227_bool == 0) goto Label_1011; // 0x3e3 JumpB
	var_228_string = ""; // 0x3e4 PushV
	var_228_string = "Rage"; // 0x3e5 MovS
	func_760(var_57_cvector, var_228_string); // 0x3e6 NEW_2
	var_229_int = 529341; // 0x3e8 PushI
	SetMessage(var_229_int); // 0x3e9 TObjFunc
	ClearReplies(); // 0x3eb TObjFunc
	var_230_int = 525612; // 0x3ed PushI
	var_231_int = -1; // 0x3ee PushI
	var_232_int = 26959; // 0x3ef PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x3f0 TObjFunc
	return 0; // 0x3f2 Return
	
Label_1011:
	var_3_string = 1; // 0x3f3 TMovB
	var_233_bool = 0; // 0x3f4 PushV
	func_4727(var_233_bool); // 0x3f5 NEW_2
	if(var_233_bool == 0) goto Label_1019; // 0x3f7 JumpB
	lshStopAnimation(); // 0x3f8 Func
	goto Label_1021; // 0x3fa Jump
	
Label_1021:
	return 0; // 0x3fd Return
	
Label_1019:
	StopAnimation(); // 0x3fb Func
	
Label_1023:
	return 0; // 0x3ff Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x4c9 PushI
	if(var_58_int == 0) goto Label_1400; // 0x4ca JumpB
	func_4516(); // 0x4cc NEW_2
	var_60_int = 27069; // 0x4ce PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x4cf Eq
	if(var_61_bool == 0) goto Label_1238; // 0x4d0 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x4d1 PushV
	var_62_object = var_1_object; // 0x4d2 MovT
	var_63_object = var_0_object; // 0x4d3 MovT
	func_4926(var_63_object); // 0x4d4 NEW_2
	
Label_1238:
	var_102_int = 27070; // 0x4d6 PushI
	var_103_bool = var_57_cvector == var_102_int; // 0x4d7 Eq
	if(var_103_bool == 0) goto Label_1246; // 0x4d8 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x4d9 PushV
	var_104_object = var_1_object; // 0x4da MovT
	var_105_object = var_0_object; // 0x4db MovT
	func_4940(var_105_object); // 0x4dc NEW_2
	
Label_1246:
	var_109_int = 42750; // 0x4de PushI
	var_110_bool = var_57_cvector == var_109_int; // 0x4df Eq
	if(var_110_bool == 0) goto Label_1254; // 0x4e0 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x4e1 PushV
	var_111_object = var_1_object; // 0x4e2 MovT
	var_112_object = var_0_object; // 0x4e3 MovT
	func_4940(var_112_object); // 0x4e4 NEW_2
	
Label_1254:
	var_113_int = 42753; // 0x4e6 PushI
	var_114_bool = var_57_cvector == var_113_int; // 0x4e7 Eq
	if(var_114_bool == 0) goto Label_1262; // 0x4e8 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x4e9 PushV
	var_115_object = var_1_object; // 0x4ea MovT
	var_116_object = var_0_object; // 0x4eb MovT
	func_4933(var_116_object); // 0x4ec NEW_2
	
Label_1262:
	var_120_int = 27068; // 0x4ee PushI
	var_121_bool = var_56_bool == var_120_int; // 0x4ef Eq
	if(var_121_bool == 0) goto Label_1324; // 0x4f0 JumpB
	var_122_bool = 0; // 0x4f1 PushV
	var_122_bool = 0; // 0x4f2 MovB
	var_123_bool = 0; var_124_object = Obj(); // 0x4f3 PushV
	var_124_object = var_1_object; // 0x4f4 MovT
	func_5016(var_124_object); // 0x4f5 NEW_2
	if(var_123_bool == 0) goto Label_1278; // 0x4f7 JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x4f8 PushV
	var_132_object = var_1_object; // 0x4f9 MovT
	func_5028(var_132_object); // 0x4fa NEW_2
	if(var_131_bool == 0) goto Label_1278; // 0x4fc JumpB
	var_122_bool = 1; // 0x4fd MovB
	
Label_1278:
	if(var_122_bool == 0) goto Label_1304; // 0x4fe JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x4ff PushV
	var_137_object = var_1_object; // 0x500 MovT
	var_138_object = var_0_object; // 0x501 MovT
	func_4777(); // 0x502 NEW_2
	var_141_string = ""; // 0x504 PushV
	var_141_string = "Neutral"; // 0x505 MovS
	func_1202(var_57_cvector, var_141_string); // 0x506 NEW_2
	var_158_int = 525756; // 0x508 PushI
	SetMessage(var_158_int); // 0x509 TObjFunc
	ClearReplies(); // 0x50b TObjFunc
	var_159_int = 540712; // 0x50d PushI
	var_160_int = 42749; // 0x50e PushI
	var_161_int = 42748; // 0x50f PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x510 TObjFunc
	var_162_int = 540717; // 0x512 PushI
	var_163_int = -1; // 0x513 PushI
	var_164_int = 42753; // 0x514 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x515 TObjFunc
	return 0; // 0x517 Return
	
Label_1304:
	var_165_string = ""; // 0x518 PushV
	var_165_string = "Neutral"; // 0x519 MovS
	func_1202(var_57_cvector, var_165_string); // 0x51a NEW_2
	var_166_int = 525759; // 0x51c PushI
	SetMessage(var_166_int); // 0x51d TObjFunc
	ClearReplies(); // 0x51f TObjFunc
	var_167_int = 525760; // 0x521 PushI
	var_168_int = -1; // 0x522 PushI
	var_169_int = 27072; // 0x523 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x524 TObjFunc
	var_170_int = 540711; // 0x526 PushI
	var_171_int = -1; // 0x527 PushI
	var_172_int = 42747; // 0x528 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x529 TObjFunc
	return 0; // 0x52b Return
	
Label_1324:
	var_173_int = 42749; // 0x52c PushI
	var_174_bool = var_56_bool == var_173_int; // 0x52d Eq
	if(var_174_bool == 0) goto Label_1347; // 0x52e JumpB
	var_175_string = ""; // 0x52f PushV
	var_175_string = "Neutral"; // 0x530 MovS
	func_1202(var_57_cvector, var_175_string); // 0x531 NEW_2
	var_176_int = 540713; // 0x533 PushI
	SetMessage(var_176_int); // 0x534 TObjFunc
	ClearReplies(); // 0x536 TObjFunc
	var_177_int = 529233; // 0x538 PushI
	var_178_int = 30688; // 0x539 PushI
	var_179_int = 30687; // 0x53a PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x53b TObjFunc
	var_180_int = 540714; // 0x53d PushI
	var_181_int = -1; // 0x53e PushI
	var_182_int = 42750; // 0x53f PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x540 TObjFunc
	return 0; // 0x542 Return
	
Label_1347:
	var_183_int = 30688; // 0x543 PushI
	var_184_bool = var_56_bool == var_183_int; // 0x544 Eq
	if(var_184_bool == 0) goto Label_1365; // 0x545 JumpB
	var_185_string = ""; // 0x546 PushV
	var_185_string = "Neutral"; // 0x547 MovS
	func_1202(var_57_cvector, var_185_string); // 0x548 NEW_2
	var_186_int = 529234; // 0x54a PushI
	SetMessage(var_186_int); // 0x54b TObjFunc
	ClearReplies(); // 0x54d TObjFunc
	var_187_int = 540715; // 0x54f PushI
	var_188_int = 42752; // 0x550 PushI
	var_189_int = 42751; // 0x551 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x552 TObjFunc
	return 0; // 0x554 Return
	
Label_1365:
	var_190_int = 42752; // 0x555 PushI
	var_191_bool = var_56_bool == var_190_int; // 0x556 Eq
	if(var_191_bool == 0) goto Label_1388; // 0x557 JumpB
	var_192_string = ""; // 0x558 PushV
	var_192_string = "Staring"; // 0x559 MovS
	func_1202(var_57_cvector, var_192_string); // 0x55a NEW_2
	var_193_int = 540716; // 0x55c PushI
	SetMessage(var_193_int); // 0x55d TObjFunc
	ClearReplies(); // 0x55f TObjFunc
	var_194_int = 525757; // 0x561 PushI
	var_195_int = -1; // 0x562 PushI
	var_196_int = 27069; // 0x563 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x564 TObjFunc
	var_197_int = 525758; // 0x566 PushI
	var_198_int = -1; // 0x567 PushI
	var_199_int = 27070; // 0x568 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x569 TObjFunc
	return 0; // 0x56b Return
	
Label_1388:
	var_3_string = 1; // 0x56c TMovB
	var_200_bool = 0; // 0x56d PushV
	func_4727(var_200_bool); // 0x56e NEW_2
	if(var_200_bool == 0) goto Label_1396; // 0x570 JumpB
	lshStopAnimation(); // 0x571 Func
	goto Label_1398; // 0x573 Jump
	
Label_1398:
	return 0; // 0x576 Return
	
Label_1396:
	StopAnimation(); // 0x574 Func
	
Label_1400:
	return 0; // 0x578 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x620 PushI
	if(var_58_int == 0) goto Label_1739; // 0x621 JumpB
	func_4516(); // 0x623 NEW_2
	var_60_int = 27476; // 0x625 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x626 Eq
	if(var_61_bool == 0) goto Label_1581; // 0x627 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x628 PushV
	var_62_object = var_1_object; // 0x629 MovT
	var_63_object = var_0_object; // 0x62a MovT
	func_4783(); // 0x62b NEW_2
	
Label_1581:
	var_89_int = 27473; // 0x62d PushI
	var_90_bool = var_56_bool == var_89_int; // 0x62e Eq
	if(var_90_bool == 0) goto Label_1609; // 0x62f JumpB
	var_91_string = ""; // 0x630 PushV
	var_91_string = "Neutral"; // 0x631 MovS
	func_1545(var_57_cvector, var_91_string); // 0x632 NEW_2
	var_108_int = 526192; // 0x634 PushI
	SetMessage(var_108_int); // 0x635 TObjFunc
	ClearReplies(); // 0x637 TObjFunc
	var_109_bool = 0; var_110_object = Obj(); // 0x639 PushV
	var_110_object = var_1_object; // 0x63a MovT
	func_5040(var_110_object); // 0x63b NEW_2
	if(var_109_bool == 0) goto Label_1603; // 0x63d JumpB
	var_117_int = 526193; // 0x63e PushI
	var_118_int = 30159; // 0x63f PushI
	var_119_int = 27474; // 0x640 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x641 TObjFunc
	
Label_1603:
	var_120_int = 526196; // 0x643 PushI
	var_121_int = -1; // 0x644 PushI
	var_122_int = 27477; // 0x645 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x646 TObjFunc
	return 0; // 0x648 Return
	
Label_1609:
	var_123_int = 30159; // 0x649 PushI
	var_124_bool = var_56_bool == var_123_int; // 0x64a Eq
	if(var_124_bool == 0) goto Label_1632; // 0x64b JumpB
	var_125_string = ""; // 0x64c PushV
	var_125_string = "Neutral"; // 0x64d MovS
	func_1545(var_57_cvector, var_125_string); // 0x64e NEW_2
	var_126_int = 528735; // 0x650 PushI
	SetMessage(var_126_int); // 0x651 TObjFunc
	ClearReplies(); // 0x653 TObjFunc
	var_127_int = 528736; // 0x655 PushI
	var_128_int = 30161; // 0x656 PushI
	var_129_int = 30160; // 0x657 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x658 TObjFunc
	var_130_int = 528745; // 0x65a PushI
	var_131_int = 30163; // 0x65b PushI
	var_132_int = 30169; // 0x65c PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x65d TObjFunc
	return 0; // 0x65f Return
	
Label_1632:
	var_133_int = 30161; // 0x660 PushI
	var_134_bool = var_56_bool == var_133_int; // 0x661 Eq
	if(var_134_bool == 0) goto Label_1650; // 0x662 JumpB
	var_135_string = ""; // 0x663 PushV
	var_135_string = "Neutral"; // 0x664 MovS
	func_1545(var_57_cvector, var_135_string); // 0x665 NEW_2
	var_136_int = 528737; // 0x667 PushI
	SetMessage(var_136_int); // 0x668 TObjFunc
	ClearReplies(); // 0x66a TObjFunc
	var_137_int = 528738; // 0x66c PushI
	var_138_int = 30163; // 0x66d PushI
	var_139_int = 30162; // 0x66e PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x66f TObjFunc
	return 0; // 0x671 Return
	
Label_1650:
	var_140_int = 30163; // 0x672 PushI
	var_141_bool = var_56_bool == var_140_int; // 0x673 Eq
	if(var_141_bool == 0) goto Label_1668; // 0x674 JumpB
	var_142_string = ""; // 0x675 PushV
	var_142_string = "Neutral"; // 0x676 MovS
	func_1545(var_57_cvector, var_142_string); // 0x677 NEW_2
	var_143_int = 528739; // 0x679 PushI
	SetMessage(var_143_int); // 0x67a TObjFunc
	ClearReplies(); // 0x67c TObjFunc
	var_144_int = 528740; // 0x67e PushI
	var_145_int = 30165; // 0x67f PushI
	var_146_int = 30164; // 0x680 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x681 TObjFunc
	return 0; // 0x683 Return
	
Label_1668:
	var_147_int = 30165; // 0x684 PushI
	var_148_bool = var_56_bool == var_147_int; // 0x685 Eq
	if(var_148_bool == 0) goto Label_1686; // 0x686 JumpB
	var_149_string = ""; // 0x687 PushV
	var_149_string = "Mysterious"; // 0x688 MovS
	func_1545(var_57_cvector, var_149_string); // 0x689 NEW_2
	var_150_int = 528741; // 0x68b PushI
	SetMessage(var_150_int); // 0x68c TObjFunc
	ClearReplies(); // 0x68e TObjFunc
	var_151_int = 528742; // 0x690 PushI
	var_152_int = 30167; // 0x691 PushI
	var_153_int = 30166; // 0x692 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x693 TObjFunc
	return 0; // 0x695 Return
	
Label_1686:
	var_154_int = 30167; // 0x696 PushI
	var_155_bool = var_56_bool == var_154_int; // 0x697 Eq
	if(var_155_bool == 0) goto Label_1709; // 0x698 JumpB
	var_156_string = ""; // 0x699 PushV
	var_156_string = "Mysterious"; // 0x69a MovS
	func_1545(var_57_cvector, var_156_string); // 0x69b NEW_2
	var_157_int = 528743; // 0x69d PushI
	SetMessage(var_157_int); // 0x69e TObjFunc
	ClearReplies(); // 0x6a0 TObjFunc
	var_158_int = 528744; // 0x6a2 PushI
	var_159_int = 27475; // 0x6a3 PushI
	var_160_int = 30168; // 0x6a4 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x6a5 TObjFunc
	var_161_int = 528746; // 0x6a7 PushI
	var_162_int = 27475; // 0x6a8 PushI
	var_163_int = 30171; // 0x6a9 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x6aa TObjFunc
	return 0; // 0x6ac Return
	
Label_1709:
	var_164_int = 27475; // 0x6ad PushI
	var_165_bool = var_56_bool == var_164_int; // 0x6ae Eq
	if(var_165_bool == 0) goto Label_1727; // 0x6af JumpB
	var_166_string = ""; // 0x6b0 PushV
	var_166_string = "Neutral"; // 0x6b1 MovS
	func_1545(var_57_cvector, var_166_string); // 0x6b2 NEW_2
	var_167_int = 526194; // 0x6b4 PushI
	SetMessage(var_167_int); // 0x6b5 TObjFunc
	ClearReplies(); // 0x6b7 TObjFunc
	var_168_int = 526195; // 0x6b9 PushI
	var_169_int = -1; // 0x6ba PushI
	var_170_int = 27476; // 0x6bb PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x6bc TObjFunc
	return 0; // 0x6be Return
	
Label_1727:
	var_3_string = 1; // 0x6bf TMovB
	var_171_bool = 0; // 0x6c0 PushV
	func_4727(var_171_bool); // 0x6c1 NEW_2
	if(var_171_bool == 0) goto Label_1735; // 0x6c3 JumpB
	lshStopAnimation(); // 0x6c4 Func
	goto Label_1737; // 0x6c6 Jump
	
Label_1737:
	return 0; // 0x6c9 Return
	
Label_1735:
	StopAnimation(); // 0x6c7 Func
	
Label_1739:
	return 0; // 0x6cb Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x7b0 PushI
	if(var_58_int == 0) goto Label_2221; // 0x7b1 JumpB
	func_4516(); // 0x7b3 NEW_2
	var_60_int = 28242; // 0x7b5 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x7b6 Eq
	if(var_61_bool == 0) goto Label_1981; // 0x7b7 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x7b8 PushV
	var_62_object = var_1_object; // 0x7b9 MovT
	var_63_object = var_0_object; // 0x7ba MovT
	func_4792(); // 0x7bb NEW_2
	
Label_1981:
	var_95_int = 41804; // 0x7bd PushI
	var_96_bool = var_57_cvector == var_95_int; // 0x7be Eq
	if(var_96_bool == 0) goto Label_1989; // 0x7bf JumpB
	var_97_object = Obj(); var_98_object = Obj(); // 0x7c0 PushV
	var_97_object = var_1_object; // 0x7c1 MovT
	var_98_object = var_0_object; // 0x7c2 MovT
	func_4875(); // 0x7c3 NEW_2
	
Label_1989:
	var_101_int = 41807; // 0x7c5 PushI
	var_102_bool = var_57_cvector == var_101_int; // 0x7c6 Eq
	if(var_102_bool == 0) goto Label_1997; // 0x7c7 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x7c8 PushV
	var_103_object = var_1_object; // 0x7c9 MovT
	var_104_object = var_0_object; // 0x7ca MovT
	func_4881(); // 0x7cb NEW_2
	
Label_1997:
	var_107_int = 41809; // 0x7cd PushI
	var_108_bool = var_57_cvector == var_107_int; // 0x7ce Eq
	if(var_108_bool == 0) goto Label_2020; // 0x7cf JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x7d0 PushV
	var_109_object = var_1_object; // 0x7d1 MovT
	var_110_object = var_0_object; // 0x7d2 MovT
	func_4846(); // 0x7d3 NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0x7d5 PushV
	var_119_object = var_1_object; // 0x7d6 MovT
	var_120_object = var_0_object; // 0x7d7 MovT
	func_4909(var_120_object); // 0x7d8 NEW_2
	var_143_object = Obj(); var_144_object = Obj(); // 0x7da PushV
	var_143_object = var_1_object; // 0x7db MovT
	var_144_object = var_0_object; // 0x7dc MovT
	func_4806(); // 0x7dd NEW_2
	var_147_object = Obj(); var_148_object = Obj(); // 0x7df PushV
	var_147_object = var_1_object; // 0x7e0 MovT
	var_148_object = var_0_object; // 0x7e1 MovT
	func_4812(var_148_object); // 0x7e2 NEW_2
	
Label_2020:
	var_168_int = 28239; // 0x7e4 PushI
	var_169_bool = var_56_bool == var_168_int; // 0x7e5 Eq
	if(var_169_bool == 0) goto Label_2109; // 0x7e6 JumpB
	var_170_string = ""; // 0x7e7 PushV
	var_170_string = "Mysterious"; // 0x7e8 MovS
	func_1945(var_57_cvector, var_170_string); // 0x7e9 NEW_2
	var_187_int = 526947; // 0x7eb PushI
	SetMessage(var_187_int); // 0x7ec TObjFunc
	ClearReplies(); // 0x7ee TObjFunc
	var_188_bool = 0; var_189_object = Obj(); // 0x7f0 PushV
	var_189_object = var_1_object; // 0x7f1 MovT
	func_5052(var_189_object); // 0x7f2 NEW_2
	if(var_188_bool == 0) goto Label_2042; // 0x7f4 JumpB
	var_196_int = 526948; // 0x7f5 PushI
	var_197_int = 28241; // 0x7f6 PushI
	var_198_int = 28240; // 0x7f7 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x7f8 TObjFunc
	
Label_2042:
	var_199_bool = 0; // 0x7fa PushV
	var_199_bool = 0; // 0x7fb MovB
	var_200_bool = 0; // 0x7fc PushV
	var_200_bool = 0; // 0x7fd MovB
	var_201_bool = 0; var_202_object = Obj(); // 0x7fe PushV
	var_202_object = var_1_object; // 0x7ff MovT
	func_5076(var_201_bool, var_202_object); // 0x800 NEW_2
	if(var_201_bool == 0) goto Label_2057; // 0x802 JumpB
	var_216_bool = 0; var_217_object = Obj(); // 0x803 PushV
	var_217_object = var_1_object; // 0x804 MovT
	func_5086(var_216_bool, var_217_object); // 0x805 NEW_2
	if(var_216_bool == 0) goto Label_2057; // 0x807 JumpB
	var_200_bool = 1; // 0x808 MovB
	
Label_2057:
	if(var_200_bool == 0) goto Label_2064; // 0x809 JumpB
	var_230_bool = 0; var_231_object = Obj(); // 0x80a PushV
	var_231_object = var_1_object; // 0x80b MovT
	func_5154(var_231_object); // 0x80c NEW_2
	if(var_230_bool == 0) goto Label_2064; // 0x80e JumpB
	var_199_bool = 1; // 0x80f MovB
	
Label_2064:
	if(var_199_bool == 0) goto Label_2070; // 0x810 JumpB
	var_236_int = 539852; // 0x811 PushI
	var_237_int = 41805; // 0x812 PushI
	var_238_int = 41804; // 0x813 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x814 TObjFunc
	
Label_2070:
	var_239_bool = 0; // 0x816 PushV
	var_239_bool = 0; // 0x817 MovB
	var_240_bool = 0; // 0x818 PushV
	var_240_bool = 0; // 0x819 MovB
	var_241_bool = 0; var_242_object = Obj(); // 0x81a PushV
	var_242_object = var_1_object; // 0x81b MovT
	func_5076(var_241_bool, var_242_object); // 0x81c NEW_2
	if(var_241_bool == 0) goto Label_2085; // 0x81e JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0x81f PushV
	var_244_object = var_1_object; // 0x820 MovT
	func_5096(var_243_bool, var_244_object); // 0x821 NEW_2
	if(var_243_bool == 0) goto Label_2085; // 0x823 JumpB
	var_240_bool = 1; // 0x824 MovB
	
Label_2085:
	if(var_240_bool == 0) goto Label_2092; // 0x825 JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0x826 PushV
	var_251_object = var_1_object; // 0x827 MovT
	func_5166(var_251_object); // 0x828 NEW_2
	if(var_250_bool == 0) goto Label_2092; // 0x82a JumpB
	var_239_bool = 1; // 0x82b MovB
	
Label_2092:
	if(var_239_bool == 0) goto Label_2098; // 0x82c JumpB
	var_256_int = 539855; // 0x82d PushI
	var_257_int = 41808; // 0x82e PushI
	var_258_int = 41807; // 0x82f PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x830 TObjFunc
	
Label_2098:
	var_259_int = 526951; // 0x832 PushI
	var_260_int = -1; // 0x833 PushI
	var_261_int = 28243; // 0x834 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x835 TObjFunc
	var_262_int = 528006; // 0x837 PushI
	var_263_int = -1; // 0x838 PushI
	var_264_int = 29366; // 0x839 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x83a TObjFunc
	return 0; // 0x83c Return
	
Label_2109:
	var_265_int = 41808; // 0x83d PushI
	var_266_bool = var_56_bool == var_265_int; // 0x83e Eq
	if(var_266_bool == 0) goto Label_2127; // 0x83f JumpB
	var_267_string = ""; // 0x840 PushV
	var_267_string = "Neutral"; // 0x841 MovS
	func_1945(var_57_cvector, var_267_string); // 0x842 NEW_2
	var_268_int = 539856; // 0x844 PushI
	SetMessage(var_268_int); // 0x845 TObjFunc
	ClearReplies(); // 0x847 TObjFunc
	var_269_int = 539857; // 0x849 PushI
	var_270_int = -1; // 0x84a PushI
	var_271_int = 41809; // 0x84b PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x84c TObjFunc
	return 0; // 0x84e Return
	
Label_2127:
	var_272_int = 41805; // 0x84f PushI
	var_273_bool = var_56_bool == var_272_int; // 0x850 Eq
	if(var_273_bool == 0) goto Label_2145; // 0x851 JumpB
	var_274_string = ""; // 0x852 PushV
	var_274_string = "Angry"; // 0x853 MovS
	func_1945(var_57_cvector, var_274_string); // 0x854 NEW_2
	var_275_int = 539853; // 0x856 PushI
	SetMessage(var_275_int); // 0x857 TObjFunc
	ClearReplies(); // 0x859 TObjFunc
	var_276_int = 539854; // 0x85b PushI
	var_277_int = -1; // 0x85c PushI
	var_278_int = 41806; // 0x85d PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x85e TObjFunc
	return 0; // 0x860 Return
	
Label_2145:
	var_279_int = 28241; // 0x861 PushI
	var_280_bool = var_56_bool == var_279_int; // 0x862 Eq
	if(var_280_bool == 0) goto Label_2168; // 0x863 JumpB
	var_281_string = ""; // 0x864 PushV
	var_281_string = "Rage"; // 0x865 MovS
	func_1945(var_57_cvector, var_281_string); // 0x866 NEW_2
	var_282_int = 526949; // 0x868 PushI
	SetMessage(var_282_int); // 0x869 TObjFunc
	ClearReplies(); // 0x86b TObjFunc
	var_283_int = 528007; // 0x86d PushI
	var_284_int = 29368; // 0x86e PushI
	var_285_int = 29367; // 0x86f PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x870 TObjFunc
	var_286_int = 528011; // 0x872 PushI
	var_287_int = 29368; // 0x873 PushI
	var_288_int = 29371; // 0x874 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x875 TObjFunc
	return 0; // 0x877 Return
	
Label_2168:
	var_289_int = 29368; // 0x878 PushI
	var_290_bool = var_56_bool == var_289_int; // 0x879 Eq
	if(var_290_bool == 0) goto Label_2191; // 0x87a JumpB
	var_291_string = ""; // 0x87b PushV
	var_291_string = "Rage"; // 0x87c MovS
	func_1945(var_57_cvector, var_291_string); // 0x87d NEW_2
	var_292_int = 528008; // 0x87f PushI
	SetMessage(var_292_int); // 0x880 TObjFunc
	ClearReplies(); // 0x882 TObjFunc
	var_293_int = 528009; // 0x884 PushI
	var_294_int = 29370; // 0x885 PushI
	var_295_int = 29369; // 0x886 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x887 TObjFunc
	var_296_int = 528012; // 0x889 PushI
	var_297_int = 29370; // 0x88a PushI
	var_298_int = 29373; // 0x88b PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x88c TObjFunc
	return 0; // 0x88e Return
	
Label_2191:
	var_299_int = 29370; // 0x88f PushI
	var_300_bool = var_56_bool == var_299_int; // 0x890 Eq
	if(var_300_bool == 0) goto Label_2209; // 0x891 JumpB
	var_301_string = ""; // 0x892 PushV
	var_301_string = "Angry"; // 0x893 MovS
	func_1945(var_57_cvector, var_301_string); // 0x894 NEW_2
	var_302_int = 528010; // 0x896 PushI
	SetMessage(var_302_int); // 0x897 TObjFunc
	ClearReplies(); // 0x899 TObjFunc
	var_303_int = 526950; // 0x89b PushI
	var_304_int = -1; // 0x89c PushI
	var_305_int = 28242; // 0x89d PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x89e TObjFunc
	return 0; // 0x8a0 Return
	
Label_2209:
	var_3_string = 1; // 0x8a1 TMovB
	var_306_bool = 0; // 0x8a2 PushV
	func_4727(var_306_bool); // 0x8a3 NEW_2
	if(var_306_bool == 0) goto Label_2217; // 0x8a5 JumpB
	lshStopAnimation(); // 0x8a6 Func
	goto Label_2219; // 0x8a8 Jump
	
Label_2219:
	return 0; // 0x8ab Return
	
Label_2217:
	StopAnimation(); // 0x8a9 Func
	
Label_2221:
	return 0; // 0x8ad Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x955 PushI
	if(var_58_int == 0) goto Label_2480; // 0x956 JumpB
	func_4516(); // 0x958 NEW_2
	var_60_int = 36906; // 0x95a PushI
	var_61_bool = var_56_bool == var_60_int; // 0x95b Eq
	if(var_61_bool == 0) goto Label_2422; // 0x95c JumpB
	var_62_string = ""; // 0x95d PushV
	var_62_string = "Neutral"; // 0x95e MovS
	func_2366(var_57_cvector, var_62_string); // 0x95f NEW_2
	var_79_int = 535231; // 0x961 PushI
	SetMessage(var_79_int); // 0x962 TObjFunc
	ClearReplies(); // 0x964 TObjFunc
	var_80_int = 535232; // 0x966 PushI
	var_81_int = 36953; // 0x967 PushI
	var_82_int = 36907; // 0x968 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x969 TObjFunc
	var_83_int = 535233; // 0x96b PushI
	var_84_int = -1; // 0x96c PushI
	var_85_int = 36908; // 0x96d PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x96e TObjFunc
	var_86_int = 535280; // 0x970 PushI
	var_87_int = -1; // 0x971 PushI
	var_88_int = 36956; // 0x972 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x973 TObjFunc
	return 0; // 0x975 Return
	
Label_2422:
	var_89_int = 36953; // 0x976 PushI
	var_90_bool = var_56_bool == var_89_int; // 0x977 Eq
	if(var_90_bool == 0) goto Label_2445; // 0x978 JumpB
	var_91_string = ""; // 0x979 PushV
	var_91_string = "Neutral"; // 0x97a MovS
	func_2366(var_57_cvector, var_91_string); // 0x97b NEW_2
	var_92_int = 535277; // 0x97d PushI
	SetMessage(var_92_int); // 0x97e TObjFunc
	ClearReplies(); // 0x980 TObjFunc
	var_93_int = 535278; // 0x982 PushI
	var_94_int = 36957; // 0x983 PushI
	var_95_int = 36954; // 0x984 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x985 TObjFunc
	var_96_int = 535279; // 0x987 PushI
	var_97_int = 36957; // 0x988 PushI
	var_98_int = 36955; // 0x989 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x98a TObjFunc
	return 0; // 0x98c Return
	
Label_2445:
	var_99_int = 36957; // 0x98d PushI
	var_100_bool = var_56_bool == var_99_int; // 0x98e Eq
	if(var_100_bool == 0) goto Label_2468; // 0x98f JumpB
	var_101_string = ""; // 0x990 PushV
	var_101_string = "Neutral"; // 0x991 MovS
	func_2366(var_57_cvector, var_101_string); // 0x992 NEW_2
	var_102_int = 535281; // 0x994 PushI
	SetMessage(var_102_int); // 0x995 TObjFunc
	ClearReplies(); // 0x997 TObjFunc
	var_103_int = 535282; // 0x999 PushI
	var_104_int = -1; // 0x99a PushI
	var_105_int = 36958; // 0x99b PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x99c TObjFunc
	var_106_int = 535283; // 0x99e PushI
	var_107_int = -1; // 0x99f PushI
	var_108_int = 36959; // 0x9a0 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x9a1 TObjFunc
	return 0; // 0x9a3 Return
	
Label_2468:
	var_3_string = 1; // 0x9a4 TMovB
	var_109_bool = 0; // 0x9a5 PushV
	func_4727(var_109_bool); // 0x9a6 NEW_2
	if(var_109_bool == 0) goto Label_2476; // 0x9a8 JumpB
	lshStopAnimation(); // 0x9a9 Func
	goto Label_2478; // 0x9ab Jump
	
Label_2478:
	return 0; // 0x9ae Return
	
Label_2476:
	StopAnimation(); // 0x9ac Func
	
Label_2480:
	return 0; // 0x9b0 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xa5d PushI
	if(var_58_int == 0) goto Label_2898; // 0xa5e JumpB
	func_4516(); // 0xa60 NEW_2
	var_60_int = 41363; // 0xa62 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xa63 Eq
	if(var_61_bool == 0) goto Label_2671; // 0xa64 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xa65 PushV
	var_62_object = var_1_object; // 0xa66 MovT
	var_63_object = var_0_object; // 0xa67 MovT
	func_4823(); // 0xa68 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0xa6a PushV
	var_105_object = var_1_object; // 0xa6b MovT
	var_106_object = var_0_object; // 0xa6c MovT
	func_4729(); // 0xa6d NEW_2
	
Label_2671:
	var_131_int = 42772; // 0xa6f PushI
	var_132_bool = var_57_cvector == var_131_int; // 0xa70 Eq
	if(var_132_bool == 0) goto Label_2694; // 0xa71 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0xa72 PushV
	var_133_object = var_1_object; // 0xa73 MovT
	var_134_object = var_0_object; // 0xa74 MovT
	func_4823(); // 0xa75 NEW_2
	var_135_object = Obj(); var_136_object = Obj(); // 0xa77 PushV
	var_135_object = var_1_object; // 0xa78 MovT
	var_136_object = var_0_object; // 0xa79 MovT
	func_4729(); // 0xa7a NEW_2
	var_137_object = Obj(); var_138_object = Obj(); // 0xa7c PushV
	var_137_object = var_1_object; // 0xa7d MovT
	var_138_object = var_0_object; // 0xa7e MovT
	func_4745(var_138_object); // 0xa7f NEW_2
	var_158_object = Obj(); var_159_object = Obj(); // 0xa81 PushV
	var_158_object = var_1_object; // 0xa82 MovT
	var_159_object = var_0_object; // 0xa83 MovT
	func_4806(); // 0xa84 NEW_2
	
Label_2694:
	var_162_int = 42754; // 0xa86 PushI
	var_163_bool = var_57_cvector == var_162_int; // 0xa87 Eq
	if(var_163_bool == 0) goto Label_2702; // 0xa88 JumpB
	var_164_object = Obj(); var_165_object = Obj(); // 0xa89 PushV
	var_164_object = var_1_object; // 0xa8a MovT
	var_165_object = var_0_object; // 0xa8b MovT
	func_4755(var_165_object); // 0xa8c NEW_2
	
Label_2702:
	var_204_int = 41356; // 0xa8e PushI
	var_205_bool = var_56_bool == var_204_int; // 0xa8f Eq
	if(var_205_bool == 0) goto Label_2735; // 0xa90 JumpB
	var_206_string = ""; // 0xa91 PushV
	var_206_string = "Neutral"; // 0xa92 MovS
	func_2630(var_57_cvector, var_206_string); // 0xa93 NEW_2
	var_223_int = 539425; // 0xa95 PushI
	SetMessage(var_223_int); // 0xa96 TObjFunc
	ClearReplies(); // 0xa98 TObjFunc
	var_224_bool = 0; var_225_object = Obj(); // 0xa9a PushV
	var_225_object = var_1_object; // 0xa9b MovT
	func_5064(var_225_object); // 0xa9c NEW_2
	if(var_224_bool == 0) goto Label_2724; // 0xa9e JumpB
	var_232_int = 539426; // 0xa9f PushI
	var_233_int = 42755; // 0xaa0 PushI
	var_234_int = 41357; // 0xaa1 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xaa2 TObjFunc
	
Label_2724:
	var_235_int = 539433; // 0xaa4 PushI
	var_236_int = -1; // 0xaa5 PushI
	var_237_int = 41364; // 0xaa6 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0xaa7 TObjFunc
	var_238_int = 540718; // 0xaa9 PushI
	var_239_int = -1; // 0xaaa PushI
	var_240_int = 42754; // 0xaab PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xaac TObjFunc
	return 0; // 0xaae Return
	
Label_2735:
	var_241_int = 42755; // 0xaaf PushI
	var_242_bool = var_56_bool == var_241_int; // 0xab0 Eq
	if(var_242_bool == 0) goto Label_2758; // 0xab1 JumpB
	var_243_string = ""; // 0xab2 PushV
	var_243_string = "Angry"; // 0xab3 MovS
	func_2630(var_57_cvector, var_243_string); // 0xab4 NEW_2
	var_244_int = 540719; // 0xab6 PushI
	SetMessage(var_244_int); // 0xab7 TObjFunc
	ClearReplies(); // 0xab9 TObjFunc
	var_245_int = 540720; // 0xabb PushI
	var_246_int = 41358; // 0xabc PushI
	var_247_int = 42756; // 0xabd PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xabe TObjFunc
	var_248_int = 540723; // 0xac0 PushI
	var_249_int = 42760; // 0xac1 PushI
	var_250_int = 42759; // 0xac2 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xac3 TObjFunc
	return 0; // 0xac5 Return
	
Label_2758:
	var_251_int = 42760; // 0xac6 PushI
	var_252_bool = var_56_bool == var_251_int; // 0xac7 Eq
	if(var_252_bool == 0) goto Label_2781; // 0xac8 JumpB
	var_253_string = ""; // 0xac9 PushV
	var_253_string = "Angry"; // 0xaca MovS
	func_2630(var_57_cvector, var_253_string); // 0xacb NEW_2
	var_254_int = 540724; // 0xacd PushI
	SetMessage(var_254_int); // 0xace TObjFunc
	ClearReplies(); // 0xad0 TObjFunc
	var_255_int = 540725; // 0xad2 PushI
	var_256_int = 41360; // 0xad3 PushI
	var_257_int = 42761; // 0xad4 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xad5 TObjFunc
	var_258_int = 540726; // 0xad7 PushI
	var_259_int = 42763; // 0xad8 PushI
	var_260_int = 42762; // 0xad9 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0xada TObjFunc
	return 0; // 0xadc Return
	
Label_2781:
	var_261_int = 42763; // 0xadd PushI
	var_262_bool = var_56_bool == var_261_int; // 0xade Eq
	if(var_262_bool == 0) goto Label_2804; // 0xadf JumpB
	var_263_string = ""; // 0xae0 PushV
	var_263_string = "Angry"; // 0xae1 MovS
	func_2630(var_57_cvector, var_263_string); // 0xae2 NEW_2
	var_264_int = 540727; // 0xae4 PushI
	SetMessage(var_264_int); // 0xae5 TObjFunc
	ClearReplies(); // 0xae7 TObjFunc
	var_265_int = 540728; // 0xae9 PushI
	var_266_int = 41360; // 0xaea PushI
	var_267_int = 42764; // 0xaeb PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xaec TObjFunc
	var_268_int = 540729; // 0xaee PushI
	var_269_int = 41360; // 0xaef PushI
	var_270_int = 42765; // 0xaf0 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xaf1 TObjFunc
	return 0; // 0xaf3 Return
	
Label_2804:
	var_271_int = 41358; // 0xaf4 PushI
	var_272_bool = var_56_bool == var_271_int; // 0xaf5 Eq
	if(var_272_bool == 0) goto Label_2822; // 0xaf6 JumpB
	var_273_string = ""; // 0xaf7 PushV
	var_273_string = "Mysterious"; // 0xaf8 MovS
	func_2630(var_57_cvector, var_273_string); // 0xaf9 NEW_2
	var_274_int = 539427; // 0xafb PushI
	SetMessage(var_274_int); // 0xafc TObjFunc
	ClearReplies(); // 0xafe TObjFunc
	var_275_int = 539428; // 0xb00 PushI
	var_276_int = 41360; // 0xb01 PushI
	var_277_int = 41359; // 0xb02 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0xb03 TObjFunc
	return 0; // 0xb05 Return
	
Label_2822:
	var_278_int = 41360; // 0xb06 PushI
	var_279_bool = var_56_bool == var_278_int; // 0xb07 Eq
	if(var_279_bool == 0) goto Label_2845; // 0xb08 JumpB
	var_280_string = ""; // 0xb09 PushV
	var_280_string = "Neutral"; // 0xb0a MovS
	func_2630(var_57_cvector, var_280_string); // 0xb0b NEW_2
	var_281_int = 539429; // 0xb0d PushI
	SetMessage(var_281_int); // 0xb0e TObjFunc
	ClearReplies(); // 0xb10 TObjFunc
	var_282_int = 539430; // 0xb12 PushI
	var_283_int = 41362; // 0xb13 PushI
	var_284_int = 41361; // 0xb14 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xb15 TObjFunc
	var_285_int = 540730; // 0xb17 PushI
	var_286_int = 41362; // 0xb18 PushI
	var_287_int = 42767; // 0xb19 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0xb1a TObjFunc
	return 0; // 0xb1c Return
	
Label_2845:
	var_288_int = 41362; // 0xb1d PushI
	var_289_bool = var_56_bool == var_288_int; // 0xb1e Eq
	if(var_289_bool == 0) goto Label_2868; // 0xb1f JumpB
	var_290_string = ""; // 0xb20 PushV
	var_290_string = "Neutral"; // 0xb21 MovS
	func_2630(var_57_cvector, var_290_string); // 0xb22 NEW_2
	var_291_int = 539431; // 0xb24 PushI
	SetMessage(var_291_int); // 0xb25 TObjFunc
	ClearReplies(); // 0xb27 TObjFunc
	var_292_int = 539432; // 0xb29 PushI
	var_293_int = -1; // 0xb2a PushI
	var_294_int = 41363; // 0xb2b PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xb2c TObjFunc
	var_295_int = 540731; // 0xb2e PushI
	var_296_int = 42771; // 0xb2f PushI
	var_297_int = 42768; // 0xb30 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0xb31 TObjFunc
	return 0; // 0xb33 Return
	
Label_2868:
	var_298_int = 42771; // 0xb34 PushI
	var_299_bool = var_56_bool == var_298_int; // 0xb35 Eq
	if(var_299_bool == 0) goto Label_2886; // 0xb36 JumpB
	var_300_string = ""; // 0xb37 PushV
	var_300_string = "Neutral"; // 0xb38 MovS
	func_2630(var_57_cvector, var_300_string); // 0xb39 NEW_2
	var_301_int = 540734; // 0xb3b PushI
	SetMessage(var_301_int); // 0xb3c TObjFunc
	ClearReplies(); // 0xb3e TObjFunc
	var_302_int = 540735; // 0xb40 PushI
	var_303_int = -1; // 0xb41 PushI
	var_304_int = 42772; // 0xb42 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0xb43 TObjFunc
	return 0; // 0xb45 Return
	
Label_2886:
	var_3_string = 1; // 0xb46 TMovB
	var_305_bool = 0; // 0xb47 PushV
	func_4727(var_305_bool); // 0xb48 NEW_2
	if(var_305_bool == 0) goto Label_2894; // 0xb4a JumpB
	lshStopAnimation(); // 0xb4b Func
	goto Label_2896; // 0xb4d Jump
	
Label_2896:
	return 0; // 0xb50 Return
	
Label_2894:
	StopAnimation(); // 0xb4e Func
	
Label_2898:
	return 0; // 0xb52 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xc28 PushI
	if(var_58_int == 0) goto Label_3324; // 0xc29 JumpB
	func_4516(); // 0xc2b NEW_2
	var_60_int = 41781; // 0xc2d PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xc2e Eq
	if(var_61_bool == 0) goto Label_3125; // 0xc2f JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xc30 PushV
	var_62_object = var_1_object; // 0xc31 MovT
	var_63_object = var_0_object; // 0xc32 MovT
	func_4851(); // 0xc33 NEW_2
	
Label_3125:
	var_66_int = 41784; // 0xc35 PushI
	var_67_bool = var_57_cvector == var_66_int; // 0xc36 Eq
	if(var_67_bool == 0) goto Label_3133; // 0xc37 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xc38 PushV
	var_68_object = var_1_object; // 0xc39 MovT
	var_69_object = var_0_object; // 0xc3a MovT
	func_4857(); // 0xc3b NEW_2
	
Label_3133:
	var_72_int = 41786; // 0xc3d PushI
	var_73_bool = var_57_cvector == var_72_int; // 0xc3e Eq
	if(var_73_bool == 0) goto Label_3151; // 0xc3f JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xc40 PushV
	var_74_object = var_1_object; // 0xc41 MovT
	var_75_object = var_0_object; // 0xc42 MovT
	func_4846(); // 0xc43 NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0xc45 PushV
	var_99_object = var_1_object; // 0xc46 MovT
	var_100_object = var_0_object; // 0xc47 MovT
	func_4887(var_100_object); // 0xc48 NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0xc4a PushV
	var_123_object = var_1_object; // 0xc4b MovT
	var_124_object = var_0_object; // 0xc4c MovT
	func_4947(var_124_object); // 0xc4d NEW_2
	
Label_3151:
	var_144_int = 41780; // 0xc4f PushI
	var_145_bool = var_56_bool == var_144_int; // 0xc50 Eq
	if(var_145_bool == 0) goto Label_3225; // 0xc51 JumpB
	var_146_string = ""; // 0xc52 PushV
	var_146_string = "Neutral"; // 0xc53 MovS
	func_3089(var_57_cvector, var_146_string); // 0xc54 NEW_2
	var_163_int = 539828; // 0xc56 PushI
	SetMessage(var_163_int); // 0xc57 TObjFunc
	ClearReplies(); // 0xc59 TObjFunc
	var_164_bool = 0; // 0xc5b PushV
	var_164_bool = 0; // 0xc5c MovB
	var_165_bool = 0; // 0xc5d PushV
	var_165_bool = 0; // 0xc5e MovB
	var_166_bool = 0; var_167_object = Obj(); // 0xc5f PushV
	var_167_object = var_1_object; // 0xc60 MovT
	func_5076(var_166_bool, var_167_object); // 0xc61 NEW_2
	if(var_166_bool == 0) goto Label_3178; // 0xc63 JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0xc64 PushV
	var_182_object = var_1_object; // 0xc65 MovT
	func_5086(var_181_bool, var_182_object); // 0xc66 NEW_2
	if(var_181_bool == 0) goto Label_3178; // 0xc68 JumpB
	var_165_bool = 1; // 0xc69 MovB
	
Label_3178:
	if(var_165_bool == 0) goto Label_3185; // 0xc6a JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0xc6b PushV
	var_196_object = var_1_object; // 0xc6c MovT
	func_5106(var_196_object); // 0xc6d NEW_2
	if(var_195_bool == 0) goto Label_3185; // 0xc6f JumpB
	var_164_bool = 1; // 0xc70 MovB
	
Label_3185:
	if(var_164_bool == 0) goto Label_3191; // 0xc71 JumpB
	var_203_int = 539829; // 0xc72 PushI
	var_204_int = 41782; // 0xc73 PushI
	var_205_int = 41781; // 0xc74 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0xc75 TObjFunc
	
Label_3191:
	var_206_bool = 0; // 0xc77 PushV
	var_206_bool = 0; // 0xc78 MovB
	var_207_bool = 0; // 0xc79 PushV
	var_207_bool = 0; // 0xc7a MovB
	var_208_bool = 0; var_209_object = Obj(); // 0xc7b PushV
	var_209_object = var_1_object; // 0xc7c MovT
	func_5076(var_208_bool, var_209_object); // 0xc7d NEW_2
	if(var_208_bool == 0) goto Label_3206; // 0xc7f JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0xc80 PushV
	var_211_object = var_1_object; // 0xc81 MovT
	func_5096(var_210_bool, var_211_object); // 0xc82 NEW_2
	if(var_210_bool == 0) goto Label_3206; // 0xc84 JumpB
	var_207_bool = 1; // 0xc85 MovB
	
Label_3206:
	if(var_207_bool == 0) goto Label_3213; // 0xc86 JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0xc87 PushV
	var_218_object = var_1_object; // 0xc88 MovT
	func_5118(var_218_object); // 0xc89 NEW_2
	if(var_217_bool == 0) goto Label_3213; // 0xc8b JumpB
	var_206_bool = 1; // 0xc8c MovB
	
Label_3213:
	if(var_206_bool == 0) goto Label_3219; // 0xc8d JumpB
	var_223_int = 539832; // 0xc8e PushI
	var_224_int = 41785; // 0xc8f PushI
	var_225_int = 41784; // 0xc90 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xc91 TObjFunc
	
Label_3219:
	var_226_int = 539838; // 0xc93 PushI
	var_227_int = -1; // 0xc94 PushI
	var_228_int = 41790; // 0xc95 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xc96 TObjFunc
	return 0; // 0xc98 Return
	
Label_3225:
	var_229_int = 41785; // 0xc99 PushI
	var_230_bool = var_56_bool == var_229_int; // 0xc9a Eq
	if(var_230_bool == 0) goto Label_3248; // 0xc9b JumpB
	var_231_string = ""; // 0xc9c PushV
	var_231_string = "Neutral"; // 0xc9d MovS
	func_3089(var_57_cvector, var_231_string); // 0xc9e NEW_2
	var_232_int = 539833; // 0xca0 PushI
	SetMessage(var_232_int); // 0xca1 TObjFunc
	ClearReplies(); // 0xca3 TObjFunc
	var_233_int = 542518; // 0xca5 PushI
	var_234_int = 44912; // 0xca6 PushI
	var_235_int = 44911; // 0xca7 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xca8 TObjFunc
	var_236_int = 542520; // 0xcaa PushI
	var_237_int = 44912; // 0xcab PushI
	var_238_int = 44913; // 0xcac PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xcad TObjFunc
	return 0; // 0xcaf Return
	
Label_3248:
	var_239_int = 44912; // 0xcb0 PushI
	var_240_bool = var_56_bool == var_239_int; // 0xcb1 Eq
	if(var_240_bool == 0) goto Label_3266; // 0xcb2 JumpB
	var_241_string = ""; // 0xcb3 PushV
	var_241_string = "Mysterious"; // 0xcb4 MovS
	func_3089(var_57_cvector, var_241_string); // 0xcb5 NEW_2
	var_242_int = 542519; // 0xcb7 PushI
	SetMessage(var_242_int); // 0xcb8 TObjFunc
	ClearReplies(); // 0xcba TObjFunc
	var_243_int = 539834; // 0xcbc PushI
	var_244_int = -1; // 0xcbd PushI
	var_245_int = 41786; // 0xcbe PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xcbf TObjFunc
	return 0; // 0xcc1 Return
	
Label_3266:
	var_246_int = 41782; // 0xcc2 PushI
	var_247_bool = var_56_bool == var_246_int; // 0xcc3 Eq
	if(var_247_bool == 0) goto Label_3289; // 0xcc4 JumpB
	var_248_string = ""; // 0xcc5 PushV
	var_248_string = "Neutral"; // 0xcc6 MovS
	func_3089(var_57_cvector, var_248_string); // 0xcc7 NEW_2
	var_249_int = 539830; // 0xcc9 PushI
	SetMessage(var_249_int); // 0xcca TObjFunc
	ClearReplies(); // 0xccc TObjFunc
	var_250_int = 542521; // 0xcce PushI
	var_251_int = 44916; // 0xccf PushI
	var_252_int = 44915; // 0xcd0 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0xcd1 TObjFunc
	var_253_int = 542524; // 0xcd3 PushI
	var_254_int = -1; // 0xcd4 PushI
	var_255_int = 44918; // 0xcd5 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xcd6 TObjFunc
	return 0; // 0xcd8 Return
	
Label_3289:
	var_256_int = 44916; // 0xcd9 PushI
	var_257_bool = var_56_bool == var_256_int; // 0xcda Eq
	if(var_257_bool == 0) goto Label_3312; // 0xcdb JumpB
	var_258_string = ""; // 0xcdc PushV
	var_258_string = "Mysterious"; // 0xcdd MovS
	func_3089(var_57_cvector, var_258_string); // 0xcde NEW_2
	var_259_int = 542522; // 0xce0 PushI
	SetMessage(var_259_int); // 0xce1 TObjFunc
	ClearReplies(); // 0xce3 TObjFunc
	var_260_int = 539831; // 0xce5 PushI
	var_261_int = -1; // 0xce6 PushI
	var_262_int = 41783; // 0xce7 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0xce8 TObjFunc
	var_263_int = 542523; // 0xcea PushI
	var_264_int = -1; // 0xceb PushI
	var_265_int = 44917; // 0xcec PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xced TObjFunc
	return 0; // 0xcef Return
	
Label_3312:
	var_3_string = 1; // 0xcf0 TMovB
	var_266_bool = 0; // 0xcf1 PushV
	func_4727(var_266_bool); // 0xcf2 NEW_2
	if(var_266_bool == 0) goto Label_3320; // 0xcf4 JumpB
	lshStopAnimation(); // 0xcf5 Func
	goto Label_3322; // 0xcf7 Jump
	
Label_3322:
	return 0; // 0xcfa Return
	
Label_3320:
	StopAnimation(); // 0xcf8 Func
	
Label_3324:
	return 0; // 0xcfc Return
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xdd2 PushI
	if(var_58_int == 0) goto Label_3709; // 0xdd3 JumpB
	func_4516(); // 0xdd5 NEW_2
	var_60_int = 41793; // 0xdd7 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xdd8 Eq
	if(var_61_bool == 0) goto Label_3551; // 0xdd9 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xdda PushV
	var_62_object = var_1_object; // 0xddb MovT
	var_63_object = var_0_object; // 0xddc MovT
	func_4863(); // 0xddd NEW_2
	
Label_3551:
	var_66_int = 41796; // 0xddf PushI
	var_67_bool = var_57_cvector == var_66_int; // 0xde0 Eq
	if(var_67_bool == 0) goto Label_3559; // 0xde1 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xde2 PushV
	var_68_object = var_1_object; // 0xde3 MovT
	var_69_object = var_0_object; // 0xde4 MovT
	func_4869(); // 0xde5 NEW_2
	
Label_3559:
	var_72_int = 41798; // 0xde7 PushI
	var_73_bool = var_57_cvector == var_72_int; // 0xde8 Eq
	if(var_73_bool == 0) goto Label_3587; // 0xde9 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xdea PushV
	var_74_object = var_1_object; // 0xdeb MovT
	var_75_object = var_0_object; // 0xdec MovT
	func_4846(); // 0xded NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0xdef PushV
	var_99_object = var_1_object; // 0xdf0 MovT
	var_100_object = var_0_object; // 0xdf1 MovT
	func_4898(var_100_object); // 0xdf2 NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0xdf4 PushV
	var_123_object = var_1_object; // 0xdf5 MovT
	var_124_object = var_0_object; // 0xdf6 MovT
	func_4806(); // 0xdf7 NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0xdf9 PushV
	var_127_object = var_1_object; // 0xdfa MovT
	var_128_object = var_0_object; // 0xdfb MovT
	func_4958(var_128_object); // 0xdfc NEW_2
	var_148_object = Obj(); var_149_object = Obj(); // 0xdfe PushV
	var_148_object = var_1_object; // 0xdff MovT
	var_149_object = var_0_object; // 0xe00 MovT
	func_4969(var_149_object); // 0xe01 NEW_2
	
Label_3587:
	var_154_int = 41792; // 0xe03 PushI
	var_155_bool = var_56_bool == var_154_int; // 0xe04 Eq
	if(var_155_bool == 0) goto Label_3661; // 0xe05 JumpB
	var_156_string = ""; // 0xe06 PushV
	var_156_string = "Mysterious"; // 0xe07 MovS
	func_3515(var_57_cvector, var_156_string); // 0xe08 NEW_2
	var_173_int = 539840; // 0xe0a PushI
	SetMessage(var_173_int); // 0xe0b TObjFunc
	ClearReplies(); // 0xe0d TObjFunc
	var_174_bool = 0; // 0xe0f PushV
	var_174_bool = 0; // 0xe10 MovB
	var_175_bool = 0; // 0xe11 PushV
	var_175_bool = 0; // 0xe12 MovB
	var_176_bool = 0; var_177_object = Obj(); // 0xe13 PushV
	var_177_object = var_1_object; // 0xe14 MovT
	func_5076(var_176_bool, var_177_object); // 0xe15 NEW_2
	if(var_176_bool == 0) goto Label_3614; // 0xe17 JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0xe18 PushV
	var_192_object = var_1_object; // 0xe19 MovT
	func_5086(var_191_bool, var_192_object); // 0xe1a NEW_2
	if(var_191_bool == 0) goto Label_3614; // 0xe1c JumpB
	var_175_bool = 1; // 0xe1d MovB
	
Label_3614:
	if(var_175_bool == 0) goto Label_3621; // 0xe1e JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0xe1f PushV
	var_206_object = var_1_object; // 0xe20 MovT
	func_5130(var_206_object); // 0xe21 NEW_2
	if(var_205_bool == 0) goto Label_3621; // 0xe23 JumpB
	var_174_bool = 1; // 0xe24 MovB
	
Label_3621:
	if(var_174_bool == 0) goto Label_3627; // 0xe25 JumpB
	var_213_int = 539841; // 0xe26 PushI
	var_214_int = 41794; // 0xe27 PushI
	var_215_int = 41793; // 0xe28 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xe29 TObjFunc
	
Label_3627:
	var_216_bool = 0; // 0xe2b PushV
	var_216_bool = 0; // 0xe2c MovB
	var_217_bool = 0; // 0xe2d PushV
	var_217_bool = 0; // 0xe2e MovB
	var_218_bool = 0; var_219_object = Obj(); // 0xe2f PushV
	var_219_object = var_1_object; // 0xe30 MovT
	func_5076(var_218_bool, var_219_object); // 0xe31 NEW_2
	if(var_218_bool == 0) goto Label_3642; // 0xe33 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0xe34 PushV
	var_221_object = var_1_object; // 0xe35 MovT
	func_5096(var_220_bool, var_221_object); // 0xe36 NEW_2
	if(var_220_bool == 0) goto Label_3642; // 0xe38 JumpB
	var_217_bool = 1; // 0xe39 MovB
	
Label_3642:
	if(var_217_bool == 0) goto Label_3649; // 0xe3a JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0xe3b PushV
	var_228_object = var_1_object; // 0xe3c MovT
	func_5142(var_228_object); // 0xe3d NEW_2
	if(var_227_bool == 0) goto Label_3649; // 0xe3f JumpB
	var_216_bool = 1; // 0xe40 MovB
	
Label_3649:
	if(var_216_bool == 0) goto Label_3655; // 0xe41 JumpB
	var_233_int = 539844; // 0xe42 PushI
	var_234_int = 41797; // 0xe43 PushI
	var_235_int = 41796; // 0xe44 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xe45 TObjFunc
	
Label_3655:
	var_236_int = 539850; // 0xe47 PushI
	var_237_int = -1; // 0xe48 PushI
	var_238_int = 41802; // 0xe49 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xe4a TObjFunc
	return 0; // 0xe4c Return
	
Label_3661:
	var_239_int = 41797; // 0xe4d PushI
	var_240_bool = var_56_bool == var_239_int; // 0xe4e Eq
	if(var_240_bool == 0) goto Label_3679; // 0xe4f JumpB
	var_241_string = ""; // 0xe50 PushV
	var_241_string = "Neutral"; // 0xe51 MovS
	func_3515(var_57_cvector, var_241_string); // 0xe52 NEW_2
	var_242_int = 539845; // 0xe54 PushI
	SetMessage(var_242_int); // 0xe55 TObjFunc
	ClearReplies(); // 0xe57 TObjFunc
	var_243_int = 539846; // 0xe59 PushI
	var_244_int = -1; // 0xe5a PushI
	var_245_int = 41798; // 0xe5b PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xe5c TObjFunc
	return 0; // 0xe5e Return
	
Label_3679:
	var_246_int = 41794; // 0xe5f PushI
	var_247_bool = var_56_bool == var_246_int; // 0xe60 Eq
	if(var_247_bool == 0) goto Label_3697; // 0xe61 JumpB
	var_248_string = ""; // 0xe62 PushV
	var_248_string = "Neutral"; // 0xe63 MovS
	func_3515(var_57_cvector, var_248_string); // 0xe64 NEW_2
	var_249_int = 539842; // 0xe66 PushI
	SetMessage(var_249_int); // 0xe67 TObjFunc
	ClearReplies(); // 0xe69 TObjFunc
	var_250_int = 539843; // 0xe6b PushI
	var_251_int = -1; // 0xe6c PushI
	var_252_int = 41795; // 0xe6d PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0xe6e TObjFunc
	return 0; // 0xe70 Return
	
Label_3697:
	var_3_string = 1; // 0xe71 TMovB
	var_253_bool = 0; // 0xe72 PushV
	func_4727(var_253_bool); // 0xe73 NEW_2
	if(var_253_bool == 0) goto Label_3705; // 0xe75 JumpB
	lshStopAnimation(); // 0xe76 Func
	goto Label_3707; // 0xe78 Jump
	
Label_3707:
	return 0; // 0xe7b Return
	
Label_3705:
	StopAnimation(); // 0xe79 Func
	
Label_3709:
	return 0; // 0xe7d Return
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_cvector)
{
	var_58_int = 1; // 0xf20 PushI
	if(var_58_int == 0) goto Label_3912; // 0xf21 JumpB
	func_4516(); // 0xf23 NEW_2
	var_60_int = 42548; // 0xf25 PushI
	var_61_bool = var_56_int == var_60_int; // 0xf26 Eq
	if(var_61_bool == 0) goto Label_3900; // 0xf27 JumpB
	var_62_string = ""; // 0xf28 PushV
	var_62_string = "Neutral"; // 0xf29 MovS
	func_3849(var_57_cvector, var_62_string); // 0xf2a NEW_2
	var_79_int = 540539; // 0xf2c PushI
	SetMessage(var_79_int); // 0xf2d TObjFunc
	ClearReplies(); // 0xf2f TObjFunc
	var_80_int = 540540; // 0xf31 PushI
	var_81_int = -1; // 0xf32 PushI
	var_82_int = 42549; // 0xf33 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xf34 TObjFunc
	var_83_int = 540799; // 0xf36 PushI
	var_84_int = -1; // 0xf37 PushI
	var_85_int = 42848; // 0xf38 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xf39 TObjFunc
	return 0; // 0xf3b Return
	
Label_3900:
	var_3_string = 1; // 0xf3c TMovB
	var_86_bool = 0; // 0xf3d PushV
	func_4727(var_86_bool); // 0xf3e NEW_2
	if(var_86_bool == 0) goto Label_3908; // 0xf40 JumpB
	lshStopAnimation(); // 0xf41 Func
	goto Label_3910; // 0xf43 Jump
	
Label_3910:
	return 0; // 0xf46 Return
	
Label_3908:
	StopAnimation(); // 0xf44 Func
	
Label_3912:
	return 0; // 0xf48 Return
}


task_22_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_int)
{
	var_57_int = 10; // 0xf96 PushI
	var_58_bool = var_56_int == var_57_int; // 0xf97 Eq
	if(var_58_bool == 0) goto Label_4026; // 0xf98 JumpB
	func_3985(); // 0xf9a NEW_2
	var_60_bool = 0; // 0xf9c PushV
	var_60_bool = 0; // 0xf9d MovB
	var_61_bool = 0; // 0xf9e PushV
	func_4240(var_61_bool); // 0xf9f NEW_2
	if(var_61_bool == 0) goto Label_4007; // 0xfa1 JumpB
	var_64_bool = 0; // 0xfa2 PushV
	func_3954(var_64_bool); // 0xfa3 NEW_2
	if(var_64_bool == 0) goto Label_4007; // 0xfa5 JumpB
	var_60_bool = 1; // 0xfa6 MovB
	
Label_4007:
	if(var_60_bool == 0) goto Label_4020; // 0xfa7 JumpB
	var_81_bool = 0; // 0xfa8 PushV
	func_3934(var_81_bool); // 0xfa9 NEW_2
	if(var_81_bool == 0) goto Label_4019; // 0xfab JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0xfac PushV
	var_102_object = Obj(); // 0xfad PushV
	func_4523(var_102_object); // 0xfae NEW_2
	var_101_object = var_102_object; // 0xfaf Mov
	func_4390(var_101_object); // 0xfb1 NEW_2
	
Label_4019:
	goto Label_4026; // 0xfb3 Jump
	
Label_4026:
	return 0; // 0xfba Return
	
Label_4020:
	func_3949(var_56_int); // 0xfb5 NEW_2
	func_3976(); // 0xfb8 NEW_2
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	func_4167(); // 0xfbc NEW_2
	func_3985(); // 0xfbf NEW_2
	lshStopSpeech(); // 0xfc1 Func
	lshStopAnimation(); // 0xfc3 Func
	StopAsync(); // 0xfc5 Func
	Hold(); // 0xfc7 Func
	return 0; // 0xfc9 Return
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	StopGroup0(); // 0xfca Func
	func_3985(); // 0xfcd NEW_2
	var_57_string = ""; // 0xfcf PushV
	var_57_string = "Neutral"; // 0xfd0 MovS
	func_4470(var_57_string); // 0xfd1 NEW_2
	func_3976(); // 0xfd4 NEW_2
	return 0; // 0xfd6 Return
}


task_22_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_bool)
{
	var_57_bool = var_56_bool; // 0xfd8 Push
	if(var_57_bool == 0) goto Label_4062; // 0xfd9 JumpB
	func_3976(); // 0xfdb NEW_2
	goto Label_4066; // 0xfdd Jump
	
Label_4066:
	return 0; // 0xfe2 Return
	
Label_4062:
	var_63_string = ""; // 0xfde PushV
	var_63_string = "Neutral"; // 0xfdf MovS
	func_4470(var_63_string); // 0xfe0 NEW_2
}


task_22_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_object)
{
	var_57_bool = 0; var_58_bool = 0; // 0xfe3 PushV
	IsOverrideActive(var_58_bool); // 0xfe4 Func
	var_59_bool = var_58_bool == 0; // 0xfe6 Not
	if(var_59_bool == 0) goto Label_4095; // 0xfe7 JumpB
	EventDisable(0); // 0xfe8 EventDisable
	func_4167(); // 0xfea NEW_2
	var_60_bool = 0; var_61_object = Obj(); // 0xfec PushV
	var_61_object = var_56_object; // 0xfed Mov
	func_4231(var_61_object); // 0xfee NEW_2
	EventEnable(0); // 0xff0 EventEnable
	var_74_object = Obj(); // 0xff1 PushV
	var_74_object = var_56_object; // 0xff2 Mov
	func_5418(var_74_object); // 0xff3 NEW_2
	var_1081_string = ""; // 0xff5 PushV
	var_1081_string = "Neutral"; // 0xff6 MovS
	func_4470(var_1081_string); // 0xff7 NEW_2
	func_3985(); // 0xffa NEW_2
	func_3976(); // 0xffd NEW_2
	
Label_4095:
	return 2; // 0xfff Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	var_56_bool = GlobalVars[1]; // 0xf49 PushGE
	var_56_bool = 0; // 0xf4a MovB
	GlobalVars[1] = var_56_bool; // 0xf4b PopGE
	func_3920(var_55_cvector); // 0xf4d NEW_2
	return 0; // 0xf4f Return
}


func_4096()
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; // 0x1000 PushV
	WaitForAnimEnd(); // 0x1001 Func
	var_73_bool = 0; // 0x1003 PushV
	func_4240(var_73_bool); // 0x1004 NEW_2
	var_74_bool = var_73_bool == 0; // 0x1006 Not
	if(var_74_bool == 0) goto Label_4105; // 0x1007 JumpB
	return 12; // 0x1008 Return
	
Label_4105:
	var_75_int = 0; // 0x1009 PushV
	func_4702(var_75_int); // 0x100a NEW_2
	var_67_int = var_75_int; // 0x100b Mov
	var_68_int = 0; // 0x100d MovI
	
Label_4110:
	var_88_bool = 0; // 0x100e PushV
	var_88_bool = 0; // 0x100f MovB
	var_89_int = 5; // 0x1010 PushI
	var_90_bool = var_68_int < var_89_int; // 0x1011 LT
	if(var_90_bool == 0) goto Label_4120; // 0x1012 JumpB
	var_91_bool = 0; // 0x1013 PushV
	func_4240(var_91_bool); // 0x1014 NEW_2
	if(var_91_bool == 0) goto Label_4120; // 0x1016 JumpB
	var_88_bool = 1; // 0x1017 MovB
	
Label_4120:
	if(var_88_bool == 0) goto Label_4162; // 0x1018 JumpB
	var_92_bool = var_67_int == 0; // 0x1019 Not
	if(var_92_bool == 0) goto Label_4130; // 0x101a JumpB
	var_93_int = 3; // 0x101b PushI
	Sleep(var_93_int, var_69_bool); // 0x101c Func
	var_94_bool = var_69_bool == 0; // 0x101e Not
	if(var_94_bool == 0) goto Label_4129; // 0x101f JumpB
	goto Label_4162; // 0x1020 Jump
	
Label_4162:
	ResetAAS(); // 0x1042 Func
	return 12; // 0x1044 Return
	
Label_4129:
	goto Label_4151; // 0x1021 Jump
	
Label_4151:
	var_95_bool = 0; // 0x1037 PushV
	func_4165(var_95_bool); // 0x1038 NEW_2
	var_96_bool = var_95_bool == 0; // 0x103a Not
	if(var_96_bool == 0) goto Label_4157; // 0x103b JumpB
	goto Label_4162; // 0x103c Jump
	
Label_4157:
	ResetAAS(); // 0x103d Func
	var_97_int = 1; // 0x103f PushI
	var_68_int = var_68_int + var_97_int; // 0x1040 Add2
	goto Label_4110; // 0x1041 Jump
	
Label_4130:
	irand(var_70_int, var_67_int); // 0x1022 Func
	var_98_int = 5; // 0x1024 PushI
	irand(var_71_int, var_98_int); // 0x1025 Func
	var_99_int = 0; // 0x1027 PushI
	var_100_bool = var_71_int != var_99_int; // 0x1028 Neq
	if(var_100_bool == 0) goto Label_4139; // 0x1029 JumpB
	var_70_int = 0; // 0x102a MovI
	
Label_4139:
	var_101_string = "all"; // 0x102b PushS
	var_102_string = ""; var_103_int = 0; // 0x102c PushV
	var_103_int = var_70_int; // 0x102d Mov
	func_4695(var_102_string, var_103_int); // 0x102e NEW_2
	PlayAnimation(var_101_string, var_102_string); // 0x1030 Func
	WaitForAnimEnd(var_72_bool); // 0x1032 Func
	var_104_bool = var_72_bool == 0; // 0x1034 Not
	if(var_104_bool == 0) goto Label_4151; // 0x1035 JumpB
	goto Label_4162; // 0x1036 Jump
}


func_0(var_0_object, var_306_int, var_307_object)
{
	var_309_object = Obj(); var_310_bool = 0; var_311_int = 0; var_312_bool = 0; var_313_object = Obj(); var_314_bool = 0; var_315_int = 0; var_316_bool = 0; // 0x0 PushV
	var_0_object = var_307_object; // 0x1 TMov
	var_317_bool = 0; var_318_object = Obj(); var_319_float = 0; // 0x2 PushV
	var_318_object = var_307_object; // 0x3 Mov
	var_319_float = 70.0; // 0x4 MovF
	func_4245(var_318_object, var_319_float); // 0x5 NEW_2
	var_320_bool = var_317_bool == 0; // 0x7 Not
	if(var_320_bool == 0) goto Label_11; // 0x8 JumpB
	var_306_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_313_object); // 0xb Func
	var_321_int = 0; // 0xd PushV
	func_4721(var_321_int); // 0xe NEW_2
	SetNPCName(var_321_int); // 0x10 ObjFunc
	var_322_int = 0; // 0x12 PushV
	func_4719(var_322_int); // 0x13 NEW_2
	SetNPCDescription(var_322_int); // 0x15 ObjFunc
	var_323_string = ""; // 0x17 PushV
	func_4723(var_323_string); // 0x18 NEW_2
	SetPhoto(var_323_string); // 0x1a ObjFunc
	var_324_string = ""; // 0x1c PushV
	func_4725(var_324_string); // 0x1d NEW_2
	SetPhoto2(var_324_string); // 0x1f ObjFunc
	var_325_int = 0; // 0x21 PushV
	func_5364(var_325_int); // 0x22 NEW_2
	SetPlayerName(var_325_int); // 0x24 ObjFunc
	var_315_int = -1; // 0x26 MovI
	IsOverrideActive(var_314_bool); // 0x27 Func
	var_326_bool = var_314_bool; // 0x29 Push
	if(var_326_bool == 0) goto Label_45; // 0x2a JumpB
	var_306_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_313_object); // 0x2d Func
	var_327_bool = 0; var_328_object = Obj(); // 0x2f PushV
	var_329_object = Obj(); // 0x30 PushV
	func_4523(var_329_object); // 0x31 NEW_2
	var_328_object = var_329_object; // 0x32 Mov
	func_4332(var_327_bool, var_328_object); // 0x34 NEW_2
	var_330_object = Obj(); var_331_object = Obj(); // 0x36 PushV
	var_330_object = var_307_object; // 0x37 Mov
	var_331_object = var_313_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_332_object, var_333_object, var_334_string, var_335_bool, var_330_object, var_331_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_316_bool); // 0x3d ObjFunc
	
Label_63:
	var_376_bool = var_316_bool == 0; // 0x3f Not
	if(var_376_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_316_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_377_object = Obj(); // 0x46 PushV
	var_377_object = var_307_object; // 0x47 Mov
	func_4314(); // 0x48 NEW_2
	StopDialog(var_313_object); // 0x4a Func
	GetReturnValue(var_315_int); // 0x4c ObjFunc
	var_306_int = var_315_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2562(var_0_object, var_1_object, var_2_object, var_3_string, var_567_object, var_568_object)
{
	var_0_object = var_568_object; // 0xa03 TMov
	var_1_object = var_567_object; // 0xa04 TMov
	var_3_string = 0; // 0xa05 TMovB
	var_573_int = 1; // 0xa06 PushI
	if(var_573_int == 0) goto Label_2600; // 0xa07 JumpB
	var_574_string = ""; // 0xa08 PushV
	var_574_string = "Neutral"; // 0xa09 MovS
	func_2630(var_568_object, var_574_string); // 0xa0a NEW_2
	var_582_int = 539425; // 0xa0c PushI
	SetMessage(var_582_int); // 0xa0d TObjFunc
	ClearReplies(); // 0xa0f TObjFunc
	var_583_bool = 0; var_584_object = Obj(); // 0xa11 PushV
	var_584_object = var_1_object; // 0xa12 MovT
	func_5064(var_584_object); // 0xa13 NEW_2
	if(var_583_bool == 0) goto Label_2587; // 0xa15 JumpB
	var_589_int = 539426; // 0xa16 PushI
	var_590_int = 42755; // 0xa17 PushI
	var_591_int = 41357; // 0xa18 PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0xa19 TObjFunc
	
Label_2587:
	var_592_int = 539433; // 0xa1b PushI
	var_593_int = -1; // 0xa1c PushI
	var_594_int = 41364; // 0xa1d PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0xa1e TObjFunc
	var_595_int = 540718; // 0xa20 PushI
	var_596_int = -1; // 0xa21 PushI
	var_597_int = 42754; // 0xa22 PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0xa23 TObjFunc
	goto Label_2600; // 0xa25 Jump
	
Label_2600:
	var_598_bool = 0; // 0xa28 PushV
	func_4727(var_598_bool); // 0xa29 NEW_2
	if(var_598_bool == 0) goto Label_2615; // 0xa2b JumpB
	
Label_2604:
	lshWaitForAnimEnd(); // 0xa2c Func
	var_599_string = var_3_string; // 0xa2e PushT
	if(var_599_string == 0) goto Label_2609; // 0xa2f JumpB
	goto Label_2614; // 0xa30 Jump
	
Label_2614:
	goto Label_2629; // 0xa36 Jump
	
Label_2629:
	return 0; // 0xa45 Return
	
Label_2609:
	var_600_string = ""; // 0xa31 PushV
	var_600_string = var_2_object; // 0xa32 MovT
	func_4470(var_600_string); // 0xa33 NEW_2
	goto Label_2604; // 0xa35 Jump
	
Label_2615:
	var_601_string = "all"; // 0xa37 PushS
	var_602_string = "idle"; // 0xa38 PushS
	PlayAnimation(var_601_string, var_602_string); // 0xa39 Func
	
Label_2619:
	WaitForAnimEnd(); // 0xa3b Func
	var_603_string = var_3_string; // 0xa3d PushT
	if(var_603_string == 0) goto Label_2624; // 0xa3e JumpB
	goto Label_2629; // 0xa3f Jump
	
Label_2624:
	var_604_string = "all"; // 0xa40 PushS
	var_605_string = "idle"; // 0xa41 PushS
	PlayAnimation(var_604_string, var_605_string); // 0xa42 Func
	goto Label_2619; // 0xa44 Jump
}


func_1024(var_0_object, var_460_int, var_461_object)
{
	var_463_object = Obj(); var_464_bool = 0; var_465_int = 0; var_466_bool = 0; var_467_object = Obj(); var_468_bool = 0; var_469_int = 0; var_470_bool = 0; // 0x400 PushV
	var_0_object = var_461_object; // 0x401 TMov
	var_471_bool = 0; var_472_object = Obj(); var_473_float = 0; // 0x402 PushV
	var_472_object = var_461_object; // 0x403 Mov
	var_473_float = 70.0; // 0x404 MovF
	func_4245(var_472_object, var_473_float); // 0x405 NEW_2
	var_474_bool = var_471_bool == 0; // 0x407 Not
	if(var_474_bool == 0) goto Label_1035; // 0x408 JumpB
	var_460_int = -2; // 0x409 MovI
	return 8; // 0x40a Return
	
Label_1035:
	CreateDialog(var_467_object); // 0x40b Func
	var_475_int = 0; // 0x40d PushV
	func_4721(var_475_int); // 0x40e NEW_2
	SetNPCName(var_475_int); // 0x410 ObjFunc
	var_476_int = 0; // 0x412 PushV
	func_4719(var_476_int); // 0x413 NEW_2
	SetNPCDescription(var_476_int); // 0x415 ObjFunc
	var_477_string = ""; // 0x417 PushV
	func_4723(var_477_string); // 0x418 NEW_2
	SetPhoto(var_477_string); // 0x41a ObjFunc
	var_478_string = ""; // 0x41c PushV
	func_4725(var_478_string); // 0x41d NEW_2
	SetPhoto2(var_478_string); // 0x41f ObjFunc
	var_479_int = 0; // 0x421 PushV
	func_5364(var_479_int); // 0x422 NEW_2
	SetPlayerName(var_479_int); // 0x424 ObjFunc
	var_469_int = -1; // 0x426 MovI
	IsOverrideActive(var_468_bool); // 0x427 Func
	var_480_bool = var_468_bool; // 0x429 Push
	if(var_480_bool == 0) goto Label_1069; // 0x42a JumpB
	var_460_int = -2; // 0x42b MovI
	return 8; // 0x42c Return
	
Label_1069:
	DoDialog(var_467_object); // 0x42d Func
	var_481_bool = 0; var_482_object = Obj(); // 0x42f PushV
	var_483_object = Obj(); // 0x430 PushV
	func_4523(var_483_object); // 0x431 NEW_2
	var_482_object = var_483_object; // 0x432 Mov
	func_4332(var_481_bool, var_482_object); // 0x434 NEW_2
	var_484_object = Obj(); var_485_object = Obj(); // 0x436 PushV
	var_484_object = var_461_object; // 0x437 Mov
	var_485_object = var_467_object; // 0x438 Mov
	TaskCall(7); // 0x439 TaskCall
	func_1105(var_486_object, var_487_object, var_488_string, var_489_bool, var_484_object, var_485_object); // 0x43a NEW_2
	TaskReturn(); // 0x43b TaskReturn
	IsDialogEnd(var_470_bool); // 0x43d ObjFunc
	
Label_1087:
	var_539_bool = var_470_bool == 0; // 0x43f Not
	if(var_539_bool == 0) goto Label_1094; // 0x440 JumpB
	sync(); // 0x441 Func
	IsDialogEnd(var_470_bool); // 0x443 ObjFunc
	goto Label_1087; // 0x445 Jump
	
Label_1094:
	var_540_object = Obj(); // 0x446 PushV
	var_540_object = var_461_object; // 0x447 Mov
	func_4314(); // 0x448 NEW_2
	StopDialog(var_467_object); // 0x44a Func
	GetReturnValue(var_469_int); // 0x44c ObjFunc
	var_460_int = var_469_int; // 0x44e Mov
	return 8; // 0x44f Return
}


func_1545(var_2_object, var_641_string)
{
	var_642_bool = 0; // 0x60a PushV
	func_4727(var_642_bool); // 0x60b NEW_2
	var_643_bool = var_642_bool == 0; // 0x60d Not
	if(var_643_bool == 0) goto Label_1552; // 0x60e JumpB
	return 0; // 0x60f Return
	
Label_1552:
	var_644_bool = var_641_string == var_2_object; // 0x610 Eq
	if(var_644_bool == 0) goto Label_1555; // 0x611 JumpB
	return 0; // 0x612 Return
	
Label_1555:
	var_645_string = ""; var_646_bool = 0; // 0x613 PushV
	var_645_string = var_641_string; // 0x614 Mov
	var_647_string = ""; // 0x615 PushS
	var_648_bool = var_641_string == var_647_string; // 0x616 Eq
	if(var_648_bool == 0) goto Label_1562; // 0x617 JumpB
	var_646_bool = 0; // 0x618 MovB
	goto Label_1563; // 0x619 Jump
	
Label_1563:
	func_4486(var_645_string, var_646_bool); // 0x61b NEW_2
	var_2_object = var_641_string; // 0x61d TMov
	return 0; // 0x61e Return
	
Label_1562:
	var_646_bool = 1; // 0x61a MovB
}


func_5130(var_830_bool)
{
	var_832_int = 0; var_833_string = ""; // 0x140b PushV
	var_833_string = "ook9Maria1"; // 0x140c MovS
	func_4550(var_832_int, var_833_string); // 0x140d NEW_2
	var_834_int = 0; // 0x140f PushI
	var_835_bool = var_832_int == var_834_int; // 0x1410 Eq
	if(var_835_bool == 0) goto Label_5140; // 0x1411 JumpB
	var_830_bool = 1; // 0x1412 MovB
	return 0; // 0x1413 Return
	
Label_5140:
	var_830_bool = 0; // 0x1414 MovB
	return 0; // 0x1415 Return
}


func_4618(var_166_bool, var_167_object, var_168_float)
{
	var_169_bool = var_167_object == 0; // 0x120b Not
	if(var_169_bool == 0) goto Label_4623; // 0x120c JumpB
	var_166_bool = 0; // 0x120d MovB
	return 0; // 0x120e Return
	
Label_4623:
	var_170_int = 0; // 0x120f PushI
	var_171_bool = var_168_float > var_170_int; // 0x1210 GT
	if(var_171_bool == 0) goto Label_4630; // 0x1211 JumpB
	var_172_int = 8; // 0x1212 PushI
	SendWorldWndMessage(var_172_int); // 0x1213 Func
	goto Label_4639; // 0x1215 Jump
	
Label_4639:
	var_173_float = 0; // 0x121f PushV
	var_173_float = var_168_float; // 0x1220 Mov
	func_4653(var_173_float); // 0x1221 NEW_2
	var_177_bool = 0; var_178_object = Obj(); var_179_string = ""; var_180_float = 0; var_181_float = 0; var_182_float = 0; // 0x1223 PushV
	var_178_object = var_167_object; // 0x1224 Mov
	var_179_string = "reputation"; // 0x1225 MovS
	var_180_float = var_168_float; // 0x1226 Mov
	var_181_float = 0; // 0x1227 MovI
	var_182_float = 1; // 0x1228 MovI
	func_4192(var_177_bool, var_178_object, var_179_string, var_180_float, var_181_float, var_182_float); // 0x1229 NEW_2
	var_166_bool = 1; // 0x122b MovB
	return 0; // 0x122c Return
	
Label_4630:
	var_201_int = 0; // 0x1216 PushI
	var_202_bool = var_168_float < var_201_int; // 0x1217 LT
	if(var_202_bool == 0) goto Label_4637; // 0x1218 JumpB
	var_203_int = 9; // 0x1219 PushI
	SendWorldWndMessage(var_203_int); // 0x121a Func
	goto Label_4639; // 0x121c Jump
	
Label_4637:
	var_166_bool = 0; // 0x121d MovB
	return 0; // 0x121e Return
}


func_3089(var_2_object, var_705_string)
{
	var_706_bool = 0; // 0xc12 PushV
	func_4727(var_706_bool); // 0xc13 NEW_2
	var_707_bool = var_706_bool == 0; // 0xc15 Not
	if(var_707_bool == 0) goto Label_3096; // 0xc16 JumpB
	return 0; // 0xc17 Return
	
Label_3096:
	var_708_bool = var_705_string == var_2_object; // 0xc18 Eq
	if(var_708_bool == 0) goto Label_3099; // 0xc19 JumpB
	return 0; // 0xc1a Return
	
Label_3099:
	var_709_string = ""; var_710_bool = 0; // 0xc1b PushV
	var_709_string = var_705_string; // 0xc1c Mov
	var_711_string = ""; // 0xc1d PushS
	var_712_bool = var_705_string == var_711_string; // 0xc1e Eq
	if(var_712_bool == 0) goto Label_3106; // 0xc1f JumpB
	var_710_bool = 0; // 0xc20 MovB
	goto Label_3107; // 0xc21 Jump
	
Label_3107:
	func_4486(var_709_string, var_710_bool); // 0xc23 NEW_2
	var_2_object = var_705_string; // 0xc25 TMov
	return 0; // 0xc26 Return
	
Label_3106:
	var_710_bool = 1; // 0xc22 MovB
}


func_5142(var_845_bool)
{
	var_847_int = 0; var_848_string = ""; // 0x1417 PushV
	var_848_string = "ook9Maria2"; // 0x1418 MovS
	func_4550(var_847_int, var_848_string); // 0x1419 NEW_2
	var_849_int = 0; // 0x141b PushI
	var_850_bool = var_847_int == var_849_int; // 0x141c Eq
	if(var_850_bool == 0) goto Label_5152; // 0x141d JumpB
	var_845_bool = 1; // 0x141e MovB
	return 0; // 0x141f Return
	
Label_5152:
	var_845_bool = 0; // 0x1420 MovB
	return 0; // 0x1421 Return
}


func_5154(var_924_bool)
{
	var_926_int = 0; var_927_string = ""; // 0x1423 PushV
	var_927_string = "ook10Maria1"; // 0x1424 MovS
	func_4550(var_926_int, var_927_string); // 0x1425 NEW_2
	var_928_int = 0; // 0x1427 PushI
	var_929_bool = var_926_int == var_928_int; // 0x1428 Eq
	if(var_929_bool == 0) goto Label_5164; // 0x1429 JumpB
	var_924_bool = 1; // 0x142a MovB
	return 0; // 0x142b Return
	
Label_5164:
	var_924_bool = 0; // 0x142c MovB
	return 0; // 0x142d Return
}


func_4653(var_173_float)
{
	var_174_object = Obj(); var_175_object = Obj(); // 0x122d PushV
	CreateFloatVector(var_175_object); // 0x122e Func
	add(var_173_float); // 0x1230 ObjFunc
	var_176_int = 16; // 0x1232 PushI
	SendWorldWndMessage(var_176_int, var_175_object); // 0x1233 Func
	return 2; // 0x1235 Return
}


func_5166(var_939_bool)
{
	var_941_int = 0; var_942_string = ""; // 0x142f PushV
	var_942_string = "ook10Maria2"; // 0x1430 MovS
	func_4550(var_941_int, var_942_string); // 0x1431 NEW_2
	var_943_int = 0; // 0x1433 PushI
	var_944_bool = var_941_int == var_943_int; // 0x1434 Eq
	if(var_944_bool == 0) goto Label_5176; // 0x1435 JumpB
	var_939_bool = 1; // 0x1436 MovB
	return 0; // 0x1437 Return
	
Label_5176:
	var_939_bool = 0; // 0x1438 MovB
	return 0; // 0x1439 Return
}


func_4663(var_89_bool, var_90_string, var_91_string)
{
	var_92_object = Obj(); var_93_object = Obj(); // 0x1237 PushV
	FindActor(var_93_object, var_90_string); // 0x1238 Func
	var_94_bool = var_93_object == 0; // 0x123a NullEq
	if(var_94_bool == 0) goto Label_4670; // 0x123b JumpB
	var_89_bool = 0; // 0x123c MovB
	return 2; // 0x123d Return
	
Label_4670:
	Trigger(var_93_object, var_91_string); // 0x123e Func
	var_89_bool = 1; // 0x1240 MovB
	return 2; // 0x1241 Return
}


func_5178(var_436_bool)
{
	var_438_int = 0; var_439_string = ""; // 0x143b PushV
	var_439_string = "ook3Maria2"; // 0x143c MovS
	func_4550(var_438_int, var_439_string); // 0x143d NEW_2
	var_440_int = 0; // 0x143f PushI
	var_441_bool = var_438_int == var_440_int; // 0x1440 Eq
	if(var_441_bool == 0) goto Label_5188; // 0x1441 JumpB
	var_436_bool = 1; // 0x1442 MovB
	return 0; // 0x1443 Return
	
Label_5188:
	var_436_bool = 0; // 0x1444 MovB
	return 0; // 0x1445 Return
}


func_4675(var_79_float)
{
	var_80_float = 0; var_81_float = 0; // 0x1243 PushV
	GetGameTime(var_81_float); // 0x1244 Func
	var_79_float = var_81_float; // 0x1246 Mov
	return 2; // 0x1247 Return
}


func_4165(var_95_bool)
{
	var_95_bool = 1; // 0x1045 MovB
	return 0; // 0x1046 Return
}


func_2630(var_2_object, var_574_string)
{
	var_575_bool = 0; // 0xa47 PushV
	func_4727(var_575_bool); // 0xa48 NEW_2
	var_576_bool = var_575_bool == 0; // 0xa4a Not
	if(var_576_bool == 0) goto Label_2637; // 0xa4b JumpB
	return 0; // 0xa4c Return
	
Label_2637:
	var_577_bool = var_574_string == var_2_object; // 0xa4d Eq
	if(var_577_bool == 0) goto Label_2640; // 0xa4e JumpB
	return 0; // 0xa4f Return
	
Label_2640:
	var_578_string = ""; var_579_bool = 0; // 0xa50 PushV
	var_578_string = var_574_string; // 0xa51 Mov
	var_580_string = ""; // 0xa52 PushS
	var_581_bool = var_574_string == var_580_string; // 0xa53 Eq
	if(var_581_bool == 0) goto Label_2647; // 0xa54 JumpB
	var_579_bool = 0; // 0xa55 MovB
	goto Label_2648; // 0xa56 Jump
	
Label_2648:
	func_4486(var_578_string, var_579_bool); // 0xa58 NEW_2
	var_2_object = var_574_string; // 0xa5a TMov
	return 0; // 0xa5b Return
	
Label_2647:
	var_579_bool = 1; // 0xa57 MovB
}


func_4167()
{
	StopAnimation(); // 0x1047 Func
	StopGroup0(); // 0x1049 Func
	return 0; // 0x104b Return
}


func_4680(var_204_int)
{
	var_205_float = 0; var_206_float = 0; // 0x1248 PushV
	GetGameTime(var_206_float); // 0x1249 Func
	var_207_int = 1; // 0x124b PushI
	var_208_int = 0; // 0x124c PushV
	var_209_int = 24; // 0x124d PushI
	var_208_int = var_206_float / var_206_float; // 0x124e Div2
	var_204_int = var_207_int + var_208_int; // 0x124f Add2
	return 2; // 0x1250 Return
}


func_5190(var_718_bool)
{
	var_720_bool = 0; // 0x1447 PushV
	func_5398(var_720_bool); // 0x1448 NEW_2
	var_718_bool = var_720_bool; // 0x1449 Mov
	return 0; // 0x144b Return
}


func_4172(var_71_float)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x104c PushV
	GetPosition(var_76_cvector); // 0x104d Func
	GetPosition(var_77_cvector); // 0x104f ObjFunc
	var_78_cvector = var_77_cvector - var_76_cvector; // 0x1051 Sub2
	var_71_float = var_78_cvector | var_78_cvector; // 0x1052 Or2
	return 6; // 0x1053 Return
}


func_5196(var_728_bool)
{
	var_730_bool = 0; // 0x144d PushV
	func_5412(var_730_bool); // 0x144e NEW_2
	var_728_bool = var_730_bool; // 0x144f Mov
	return 0; // 0x1451 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_330_object, var_331_object)
{
	var_0_object = var_331_object; // 0x52 TMov
	var_1_object = var_330_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_336_int = 1; // 0x55 PushI
	if(var_336_int == 0) goto Label_134; // 0x56 JumpB
	var_337_bool = 0; var_338_object = Obj(); // 0x57 PushV
	var_338_object = var_1_object; // 0x58 MovT
	func_4980(var_338_object); // 0x59 NEW_2
	if(var_337_bool == 0) goto Label_112; // 0x5b JumpB
	var_345_string = ""; // 0x5c PushV
	var_345_string = "Neutral"; // 0x5d MovS
	func_164(var_331_object, var_345_string); // 0x5e NEW_2
	var_353_int = 524759; // 0x60 PushI
	SetMessage(var_353_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_354_int = 526896; // 0x65 PushI
	var_355_int = 28184; // 0x66 PushI
	var_356_int = 28183; // 0x67 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x68 TObjFunc
	var_357_int = 526903; // 0x6a PushI
	var_358_int = 28184; // 0x6b PushI
	var_359_int = 28191; // 0x6c PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x6d TObjFunc
	goto Label_134; // 0x6f Jump
	
Label_134:
	var_360_bool = 0; // 0x86 PushV
	func_4727(var_360_bool); // 0x87 NEW_2
	if(var_360_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_361_string = var_3_string; // 0x8c PushT
	if(var_361_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_362_string = ""; // 0x8f PushV
	var_362_string = var_2_object; // 0x90 MovT
	func_4470(var_362_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_363_string = "all"; // 0x95 PushS
	var_364_string = "idle"; // 0x96 PushS
	PlayAnimation(var_363_string, var_364_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_365_string = var_3_string; // 0x9b PushT
	if(var_365_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_366_string = "all"; // 0x9e PushS
	var_367_string = "idle"; // 0x9f PushS
	PlayAnimation(var_366_string, var_367_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_112:
	var_368_string = ""; // 0x70 PushV
	var_368_string = "Neutral"; // 0x71 MovS
	func_164(var_331_object, var_368_string); // 0x72 NEW_2
	var_369_int = 524761; // 0x74 PushI
	SetMessage(var_369_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_370_int = 526893; // 0x79 PushI
	var_371_int = -1; // 0x7a PushI
	var_372_int = 28180; // 0x7b PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x7c TObjFunc
	var_373_int = 542280; // 0x7e PushI
	var_374_int = -1; // 0x7f PushI
	var_375_int = 44625; // 0x80 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_1105(var_0_object, var_1_object, var_2_object, var_3_string, var_484_object, var_485_object)
{
	var_0_object = var_485_object; // 0x452 TMov
	var_1_object = var_484_object; // 0x453 TMov
	var_3_string = 0; // 0x454 TMovB
	var_490_int = 1; // 0x455 PushI
	if(var_490_int == 0) goto Label_1172; // 0x456 JumpB
	var_491_bool = 0; // 0x457 PushV
	var_491_bool = 0; // 0x458 MovB
	var_492_bool = 0; var_493_object = Obj(); // 0x459 PushV
	var_493_object = var_1_object; // 0x45a MovT
	func_5016(var_493_object); // 0x45b NEW_2
	if(var_492_bool == 0) goto Label_1124; // 0x45d JumpB
	var_498_bool = 0; var_499_object = Obj(); // 0x45e PushV
	var_499_object = var_1_object; // 0x45f MovT
	func_5028(var_499_object); // 0x460 NEW_2
	if(var_498_bool == 0) goto Label_1124; // 0x462 JumpB
	var_491_bool = 1; // 0x463 MovB
	
Label_1124:
	if(var_491_bool == 0) goto Label_1150; // 0x464 JumpB
	var_504_object = Obj(); var_505_object = Obj(); // 0x465 PushV
	var_504_object = var_1_object; // 0x466 MovT
	var_505_object = var_0_object; // 0x467 MovT
	func_4777(); // 0x468 NEW_2
	var_508_string = ""; // 0x46a PushV
	var_508_string = "Neutral"; // 0x46b MovS
	func_1202(var_485_object, var_508_string); // 0x46c NEW_2
	var_516_int = 525756; // 0x46e PushI
	SetMessage(var_516_int); // 0x46f TObjFunc
	ClearReplies(); // 0x471 TObjFunc
	var_517_int = 540712; // 0x473 PushI
	var_518_int = 42749; // 0x474 PushI
	var_519_int = 42748; // 0x475 PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x476 TObjFunc
	var_520_int = 540717; // 0x478 PushI
	var_521_int = -1; // 0x479 PushI
	var_522_int = 42753; // 0x47a PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x47b TObjFunc
	goto Label_1172; // 0x47d Jump
	
Label_1172:
	var_523_bool = 0; // 0x494 PushV
	func_4727(var_523_bool); // 0x495 NEW_2
	if(var_523_bool == 0) goto Label_1187; // 0x497 JumpB
	
Label_1176:
	lshWaitForAnimEnd(); // 0x498 Func
	var_524_string = var_3_string; // 0x49a PushT
	if(var_524_string == 0) goto Label_1181; // 0x49b JumpB
	goto Label_1186; // 0x49c Jump
	
Label_1186:
	goto Label_1201; // 0x4a2 Jump
	
Label_1201:
	return 0; // 0x4b1 Return
	
Label_1181:
	var_525_string = ""; // 0x49d PushV
	var_525_string = var_2_object; // 0x49e MovT
	func_4470(var_525_string); // 0x49f NEW_2
	goto Label_1176; // 0x4a1 Jump
	
Label_1187:
	var_526_string = "all"; // 0x4a3 PushS
	var_527_string = "idle"; // 0x4a4 PushS
	PlayAnimation(var_526_string, var_527_string); // 0x4a5 Func
	
Label_1191:
	WaitForAnimEnd(); // 0x4a7 Func
	var_528_string = var_3_string; // 0x4a9 PushT
	if(var_528_string == 0) goto Label_1196; // 0x4aa JumpB
	goto Label_1201; // 0x4ab Jump
	
Label_1196:
	var_529_string = "all"; // 0x4ac PushS
	var_530_string = "idle"; // 0x4ad PushS
	PlayAnimation(var_529_string, var_530_string); // 0x4ae Func
	goto Label_1191; // 0x4b0 Jump
	
Label_1150:
	var_531_string = ""; // 0x47e PushV
	var_531_string = "Neutral"; // 0x47f MovS
	func_1202(var_485_object, var_531_string); // 0x480 NEW_2
	var_532_int = 525759; // 0x482 PushI
	SetMessage(var_532_int); // 0x483 TObjFunc
	ClearReplies(); // 0x485 TObjFunc
	var_533_int = 525760; // 0x487 PushI
	var_534_int = -1; // 0x488 PushI
	var_535_int = 27072; // 0x489 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0x48a TObjFunc
	var_536_int = 540711; // 0x48c PushI
	var_537_int = -1; // 0x48d PushI
	var_538_int = 42747; // 0x48e PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0x48f TObjFunc
	goto Label_1172; // 0x491 Jump
}


func_5202(var_755_bool)
{
	var_757_bool = 0; // 0x1453 PushV
	func_5406(var_757_bool); // 0x1454 NEW_2
	var_755_bool = var_757_bool; // 0x1455 Mov
	return 0; // 0x1457 Return
}


func_4180(var_185_bool, var_186_object, var_187_string)
{
	var_188_bool = 0; var_189_bool = 0; // 0x1054 PushV
	var_190_string = "HasProperty"; // 0x1055 PushS
	var_191_int = 2; // 0x1056 PushI
	var_192_bool = IsFuncExist(var_186_object, var_190_string, var_191_int); // 0x1057 FuncExist
	var_193_bool = var_192_bool == 0; // 0x1058 Not
	if(var_193_bool == 0) goto Label_4188; // 0x1059 JumpB
	var_185_bool = 0; // 0x105a MovB
	return 2; // 0x105b Return
	
Label_4188:
	HasProperty(var_187_string, var_189_bool); // 0x105c ObjFunc
	var_185_bool = var_189_bool; // 0x105e Mov
	return 2; // 0x105f Return
}


func_4689(var_303_bool, var_304_int)
{
	var_305_int = 0; // 0x1252 PushV
	func_4680(var_305_int); // 0x1253 NEW_2
	var_303_bool = var_305_int == var_304_int; // 0x1255 Eq2
	return 0; // 0x1256 Return
}


func_597(var_0_object, var_380_int, var_381_object)
{
	var_383_object = Obj(); var_384_bool = 0; var_385_int = 0; var_386_bool = 0; var_387_object = Obj(); var_388_bool = 0; var_389_int = 0; var_390_bool = 0; // 0x255 PushV
	var_0_object = var_381_object; // 0x256 TMov
	var_391_bool = 0; var_392_object = Obj(); var_393_float = 0; // 0x257 PushV
	var_392_object = var_381_object; // 0x258 Mov
	var_393_float = 70.0; // 0x259 MovF
	func_4245(var_392_object, var_393_float); // 0x25a NEW_2
	var_394_bool = var_391_bool == 0; // 0x25c Not
	if(var_394_bool == 0) goto Label_608; // 0x25d JumpB
	var_380_int = -2; // 0x25e MovI
	return 8; // 0x25f Return
	
Label_608:
	CreateDialog(var_387_object); // 0x260 Func
	var_395_int = 0; // 0x262 PushV
	func_4721(var_395_int); // 0x263 NEW_2
	SetNPCName(var_395_int); // 0x265 ObjFunc
	var_396_int = 0; // 0x267 PushV
	func_4719(var_396_int); // 0x268 NEW_2
	SetNPCDescription(var_396_int); // 0x26a ObjFunc
	var_397_string = ""; // 0x26c PushV
	func_4723(var_397_string); // 0x26d NEW_2
	SetPhoto(var_397_string); // 0x26f ObjFunc
	var_398_string = ""; // 0x271 PushV
	func_4725(var_398_string); // 0x272 NEW_2
	SetPhoto2(var_398_string); // 0x274 ObjFunc
	var_399_int = 0; // 0x276 PushV
	func_5364(var_399_int); // 0x277 NEW_2
	SetPlayerName(var_399_int); // 0x279 ObjFunc
	var_389_int = -1; // 0x27b MovI
	IsOverrideActive(var_388_bool); // 0x27c Func
	var_400_bool = var_388_bool; // 0x27e Push
	if(var_400_bool == 0) goto Label_642; // 0x27f JumpB
	var_380_int = -2; // 0x280 MovI
	return 8; // 0x281 Return
	
Label_642:
	DoDialog(var_387_object); // 0x282 Func
	var_401_bool = 0; var_402_object = Obj(); // 0x284 PushV
	var_403_object = Obj(); // 0x285 PushV
	func_4523(var_403_object); // 0x286 NEW_2
	var_402_object = var_403_object; // 0x287 Mov
	func_4332(var_401_bool, var_402_object); // 0x289 NEW_2
	var_404_object = Obj(); var_405_object = Obj(); // 0x28b PushV
	var_404_object = var_381_object; // 0x28c Mov
	var_405_object = var_387_object; // 0x28d Mov
	TaskCall(5); // 0x28e TaskCall
	func_678(var_406_object, var_407_object, var_408_string, var_409_bool, var_404_object, var_405_object); // 0x28f NEW_2
	TaskReturn(); // 0x290 TaskReturn
	IsDialogEnd(var_390_bool); // 0x292 ObjFunc
	
Label_660:
	var_456_bool = var_390_bool == 0; // 0x294 Not
	if(var_456_bool == 0) goto Label_667; // 0x295 JumpB
	sync(); // 0x296 Func
	IsDialogEnd(var_390_bool); // 0x298 ObjFunc
	goto Label_660; // 0x29a Jump
	
Label_667:
	var_457_object = Obj(); // 0x29b PushV
	var_457_object = var_381_object; // 0x29c Mov
	func_4314(); // 0x29d NEW_2
	StopDialog(var_387_object); // 0x29f Func
	GetReturnValue(var_389_int); // 0x2a1 ObjFunc
	var_380_int = var_389_int; // 0x2a3 Mov
	return 8; // 0x2a4 Return
}


func_4695(var_81_string, var_82_int)
{
	var_83_string = ""; var_84_string = ""; // 0x1257 PushV
	var_84_string = "idle"; // 0x1258 MovS
	var_85_int = var_82_int; // 0x1259 Push
	if(var_85_int == 0) goto Label_4700; // 0x125a JumpB
	var_84_string = var_84_string + var_82_int; // 0x125b Add2
	
Label_4700:
	var_81_string = var_84_string; // 0x125c Mov
	return 2; // 0x125d Return
}


func_5208()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x1458 PushV
	var_68_int = 449; // 0x1459 PushI
	var_69_int = 1; // 0x145a PushI
	var_70_int = 527007; // 0x145b PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x145c Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x145e PushV
	var_72_object = var_67_object; // 0x145f Mov
	var_73_int = 447; // 0x1460 MovI
	func_5286(var_71_bool, var_72_object, var_73_int); // 0x1461 NEW_2
	return 2; // 0x1463 Return
}


func_4702(var_75_int)
{
	var_76_int = 0; var_77_bool = 0; var_78_int = 0; var_79_bool = 0; // 0x125e PushV
	var_78_int = 0; // 0x125f MovI
	
Label_4704:
	var_80_string = "all"; // 0x1260 PushS
	var_81_string = ""; var_82_int = 0; // 0x1261 PushV
	var_82_int = var_78_int; // 0x1262 Mov
	func_4695(var_81_string, var_82_int); // 0x1263 NEW_2
	HasAnimation(var_79_bool, var_80_string, var_81_string); // 0x1265 Func
	var_86_bool = var_79_bool == 0; // 0x1267 Not
	if(var_86_bool == 0) goto Label_4714; // 0x1268 JumpB
	goto Label_4717; // 0x1269 Jump
	
Label_4717:
	var_75_int = var_78_int; // 0x126d Mov
	return 4; // 0x126e Return
	
Label_4714:
	var_87_int = 1; // 0x126a PushI
	var_78_int = var_78_int + var_87_int; // 0x126b Add2
	goto Label_4704; // 0x126c Jump
}


func_4192(var_177_bool, var_178_object, var_179_string, var_180_float, var_181_float, var_182_float)
{
	var_183_float = 0; var_184_float = 0; // 0x1060 PushV
	var_185_bool = 0; var_186_object = Obj(); var_187_string = ""; // 0x1061 PushV
	var_186_object = var_178_object; // 0x1062 Mov
	var_187_string = var_179_string; // 0x1063 Mov
	func_4180(var_185_bool, var_186_object, var_187_string); // 0x1064 NEW_2
	var_194_bool = var_185_bool == 0; // 0x1066 Not
	if(var_194_bool == 0) goto Label_4202; // 0x1067 JumpB
	var_177_bool = 0; // 0x1068 MovB
	return 2; // 0x1069 Return
	
Label_4202:
	GetProperty(var_179_string, var_184_float); // 0x106a ObjFunc
	var_195_float = 0; var_196_float = 0; var_197_float = 0; var_198_float = 0; // 0x106c PushV
	var_196_float = var_184_float + var_180_float; // 0x106d Add2
	var_197_float = var_181_float; // 0x106e Mov
	var_198_float = var_182_float; // 0x106f Mov
	func_4539(var_195_float, var_196_float, var_197_float, var_198_float); // 0x1070 NEW_2
	SetProperty(var_179_string, var_195_float); // 0x1072 ObjFunc
	var_177_bool = 1; // 0x1074 MovB
	return 2; // 0x1075 Return
}


func_5221()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x1465 PushV
	var_68_int = 330; // 0x1466 PushI
	var_69_int = 2; // 0x1467 PushI
	var_70_int = 524775; // 0x1468 PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x1469 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x146b PushV
	var_72_object = var_67_object; // 0x146c Mov
	var_73_int = 326; // 0x146d MovI
	func_5286(var_71_bool, var_72_object, var_73_int); // 0x146e NEW_2
	return 2; // 0x1470 Return
}


func_4719(var_137_int)
{
	var_137_int = 515543; // 0x126f MovI
	return 0; // 0x1270 Return
}


func_4721(var_136_int)
{
	var_136_int = 502868; // 0x1271 MovI
	return 0; // 0x1272 Return
}


func_5234()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x1472 PushV
	var_78_int = 762; // 0x1473 PushI
	var_79_int = 2; // 0x1474 PushI
	var_80_int = 539747; // 0x1475 PushI
	CreateDiaryEntry(var_77_object, var_78_int, var_79_int, var_80_int); // 0x1476 Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0x1478 PushV
	var_82_object = var_77_object; // 0x1479 Mov
	var_83_int = 757; // 0x147a MovI
	func_5286(var_81_bool, var_82_object, var_83_int); // 0x147b NEW_2
	return 2; // 0x147d Return
}


func_4723(var_138_string)
{
	var_138_string = "ui/NPC_Maria.png"; // 0x1273 MovS
	return 0; // 0x1274 Return
}


func_4725(var_139_string)
{
	var_139_string = "ui/NPC_Maria_b.png"; // 0x1275 MovS
	return 0; // 0x1276 Return
}


func_4214(var_110_string, var_111_int)
{
	var_112_int = 0; var_113_int = 0; // 0x1076 PushV
	GetProperty(var_110_string, var_113_int); // 0x1077 ObjFunc
	var_114_int = var_113_int + var_111_int; // 0x1079 Add
	SetProperty(var_110_string, var_114_int); // 0x107a ObjFunc
	return 2; // 0x107c Return
}


func_4727(var_131_bool)
{
	var_131_bool = 1; // 0x1277 MovB
	return 0; // 0x1278 Return
}


func_4729()
{
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0; // 0x127a PushV
	var_110_object = Obj(); // 0x127b PushV
	func_5314(var_110_object); // 0x127c NEW_2
	var_107_object = var_110_object; // 0x127d Mov
	var_108_string = "pt_map_eva"; // 0x127f MovS
	var_109_float = 2; // 0x1280 MovI
	func_5331(var_107_object, var_108_string, var_109_float); // 0x1281 NEW_2
	var_130_object = Obj(); // 0x1283 PushV
	func_5314(var_130_object); // 0x1284 NEW_2
	ShowMap(var_130_object); // 0x1286 ObjFunc
	return 0; // 0x1288 Return
}


func_4221(var_64_bool, var_65_cvector)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; // 0x107d PushV
	GetPosition(var_69_cvector); // 0x107e Func
	var_70_cvector = var_65_cvector - var_69_cvector; // 0x1080 Sub2
	var_72_float = GetByIndex(var_70_cvector, 0); // 0x1081 PushE
	var_73_float = GetByIndex(var_70_cvector, 2); // 0x1082 PushE
	Rotate(var_72_float, var_73_float, var_71_bool); // 0x1083 Func
	var_64_bool = var_71_bool; // 0x1085 Mov
	return 6; // 0x1086 Return
}


func_3710(var_0_object, var_1025_int, var_1026_object)
{
	var_1028_object = Obj(); var_1029_bool = 0; var_1030_int = 0; var_1031_bool = 0; var_1032_object = Obj(); var_1033_bool = 0; var_1034_int = 0; var_1035_bool = 0; // 0xe7e PushV
	var_0_object = var_1026_object; // 0xe7f TMov
	var_1036_bool = 0; var_1037_object = Obj(); var_1038_float = 0; // 0xe80 PushV
	var_1037_object = var_1026_object; // 0xe81 Mov
	var_1038_float = 70.0; // 0xe82 MovF
	func_4245(var_1037_object, var_1038_float); // 0xe83 NEW_2
	var_1039_bool = var_1036_bool == 0; // 0xe85 Not
	if(var_1039_bool == 0) goto Label_3721; // 0xe86 JumpB
	var_1025_int = -2; // 0xe87 MovI
	return 8; // 0xe88 Return
	
Label_3721:
	CreateDialog(var_1032_object); // 0xe89 Func
	var_1040_int = 0; // 0xe8b PushV
	func_4721(var_1040_int); // 0xe8c NEW_2
	SetNPCName(var_1040_int); // 0xe8e ObjFunc
	var_1041_int = 0; // 0xe90 PushV
	func_4719(var_1041_int); // 0xe91 NEW_2
	SetNPCDescription(var_1041_int); // 0xe93 ObjFunc
	var_1042_string = ""; // 0xe95 PushV
	func_4723(var_1042_string); // 0xe96 NEW_2
	SetPhoto(var_1042_string); // 0xe98 ObjFunc
	var_1043_string = ""; // 0xe9a PushV
	func_4725(var_1043_string); // 0xe9b NEW_2
	SetPhoto2(var_1043_string); // 0xe9d ObjFunc
	var_1044_int = 0; // 0xe9f PushV
	func_5364(var_1044_int); // 0xea0 NEW_2
	SetPlayerName(var_1044_int); // 0xea2 ObjFunc
	var_1034_int = -1; // 0xea4 MovI
	IsOverrideActive(var_1033_bool); // 0xea5 Func
	var_1045_bool = var_1033_bool; // 0xea7 Push
	if(var_1045_bool == 0) goto Label_3755; // 0xea8 JumpB
	var_1025_int = -2; // 0xea9 MovI
	return 8; // 0xeaa Return
	
Label_3755:
	DoDialog(var_1032_object); // 0xeab Func
	var_1046_bool = 0; var_1047_object = Obj(); // 0xead PushV
	var_1048_object = Obj(); // 0xeae PushV
	func_4523(var_1048_object); // 0xeaf NEW_2
	var_1047_object = var_1048_object; // 0xeb0 Mov
	func_4332(var_1046_bool, var_1047_object); // 0xeb2 NEW_2
	var_1049_object = Obj(); var_1050_object = Obj(); // 0xeb4 PushV
	var_1049_object = var_1026_object; // 0xeb5 Mov
	var_1050_object = var_1032_object; // 0xeb6 Mov
	TaskCall(21); // 0xeb7 TaskCall
	func_3791(var_1051_object, var_1052_object, var_1053_string, var_1054_bool, var_1049_object, var_1050_object); // 0xeb8 NEW_2
	TaskReturn(); // 0xeb9 TaskReturn
	IsDialogEnd(var_1035_bool); // 0xebb ObjFunc
	
Label_3773:
	var_1079_bool = var_1035_bool == 0; // 0xebd Not
	if(var_1079_bool == 0) goto Label_3780; // 0xebe JumpB
	sync(); // 0xebf Func
	IsDialogEnd(var_1035_bool); // 0xec1 ObjFunc
	goto Label_3773; // 0xec3 Jump
	
Label_3780:
	var_1080_object = Obj(); // 0xec4 PushV
	var_1080_object = var_1026_object; // 0xec5 Mov
	func_4314(); // 0xec6 NEW_2
	StopDialog(var_1032_object); // 0xec8 Func
	GetReturnValue(var_1034_int); // 0xeca ObjFunc
	var_1025_int = var_1034_int; // 0xecc Mov
	return 8; // 0xecd Return
}


func_5247()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x147f PushV
	var_84_int = 742; // 0x1480 PushI
	var_85_int = 2; // 0x1481 PushI
	var_86_int = 539459; // 0x1482 PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0x1483 Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0x1485 PushV
	var_88_object = var_83_object; // 0x1486 Mov
	var_89_int = 740; // 0x1487 MovI
	func_5286(var_87_bool, var_88_object, var_89_int); // 0x1488 NEW_2
	return 2; // 0x148a Return
}


func_4231(var_60_bool)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x1087 PushV
	GetPosition(var_63_cvector); // 0x1088 ObjFunc
	var_64_bool = 0; var_65_cvector = CVector(0,0,0); // 0x108a PushV
	var_65_cvector = var_63_cvector; // 0x108b Mov
	func_4221(var_64_bool, var_65_cvector); // 0x108c NEW_2
	var_60_bool = var_64_bool; // 0x108d Mov
	return 2; // 0x108f Return
}


func_4745(var_137_object)
{
	var_139_string = "money 4000 is given"; // 0x128a PushS
	Trace(var_139_string); // 0x128b Func
	var_140_object = Obj(); var_141_int = 0; // 0x128d PushV
	var_140_object = var_137_object; // 0x128e Mov
	var_141_int = 4000; // 0x128f MovI
	func_4567(var_140_object, var_141_int); // 0x1290 NEW_2
	return 0; // 0x1292 Return
}


func_5260()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x148c PushV
	var_68_int = 425; // 0x148d PushI
	var_69_int = 1; // 0x148e PushI
	var_70_int = 526224; // 0x148f PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x1490 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x1492 PushV
	var_72_object = var_67_object; // 0x1493 Mov
	var_73_int = 416; // 0x1494 MovI
	func_5286(var_71_bool, var_72_object, var_73_int); // 0x1495 NEW_2
	return 2; // 0x1497 Return
}


func_4240(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0; // 0x1090 PushV
	IsLoaded(var_59_bool); // 0x1091 Func
	var_57_bool = var_59_bool; // 0x1093 Mov
	return 2; // 0x1094 Return
}


func_4755(var_164_object)
{
	var_166_bool = 0; var_167_object = Obj(); var_168_float = 0; // 0x1294 PushV
	var_167_object = var_164_object; // 0x1295 Mov
	var_168_float = -0.05; // 0x1296 MovF
	func_4618(var_166_bool, var_167_object, var_168_float); // 0x1297 NEW_2
	return 0; // 0x1299 Return
}


func_4245(var_88_bool, var_90_float)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_bool = 0; var_108_bool = 0; // 0x1095 PushV
	GetPosition(var_101_cvector); // 0x1096 ObjFunc
	GetEyesHeight(var_100_float); // 0x1098 ObjFunc
	var_109_float = GetByIndex(var_101_cvector, 1); // 0x109a PushE
	var_109_float = var_109_float + var_100_float; // 0x109b Add2
	SetByIndex(var_101_cvector, 1) = var_109_float; // 0x109c PopE
	GetPosition(var_102_cvector); // 0x109d Func
	GetEyesHeight(var_100_float); // 0x109f Func
	var_110_float = GetByIndex(var_102_cvector, 1); // 0x10a1 PushE
	var_110_float = var_110_float + var_100_float; // 0x10a2 Add2
	SetByIndex(var_102_cvector, 1) = var_110_float; // 0x10a3 PopE
	var_103_cvector = var_101_cvector - var_102_cvector; // 0x10a4 Sub2
	var_111_float = GetByIndex(var_103_cvector, 1); // 0x10a5 PushE
	var_111_float = 0; // 0x10a6 MovI
	SetByIndex(var_103_cvector, 1) = var_111_float; // 0x10a7 PopE
	var_112_int = var_103_cvector | var_103_cvector; // 0x10a8 Or
	var_113_float = sqrt(var_112_int); // 0x10a9 Sqrt
	var_103_cvector = var_103_cvector / var_103_cvector; // 0x10aa Div2
	var_104_cvector = -var_103_cvector; // 0x10ab Neg2
	var_114_float = var_103_cvector * var_90_float; // 0x10ac Mult
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x10ad PushV
	var_117_cvector = CVector(0.0, 1.0, 0.0); // 0x10ae PushVec
	var_116_cvector = var_104_cvector ^ var_117_cvector; // 0x10af Xor2
	func_4529(var_115_cvector, var_116_cvector); // 0x10b0 NEW_2
	var_123_int = 25; // 0x10b2 PushI
	var_124_float = var_115_cvector * var_123_int; // 0x10b3 Mult
	var_125_int = var_114_float + var_124_float; // 0x10b4 Add
	var_126_cvector = CVector(0.0, 10.0, 0.0); // 0x10b5 PushVec
	var_105_cvector = var_125_int - var_126_cvector; // 0x10b6 Sub2
	var_106_cvector = var_102_cvector + var_105_cvector; // 0x10b7 Add2
	IsOverrideActive(var_107_bool); // 0x10b8 Func
	var_127_bool = var_107_bool; // 0x10ba Push
	if(var_127_bool == 0) goto Label_4286; // 0x10bb JumpB
	var_88_bool = 0; // 0x10bc MovB
	return 18; // 0x10bd Return
	
Label_4286:
	StopWorld(); // 0x10be Func
	var_128_bool = 1; // 0x10c0 PushB
	CameraTransit(var_106_cvector, var_104_cvector, var_128_bool); // 0x10c1 Func
	var_129_float = GetByIndex(var_105_cvector, 0); // 0x10c3 PushE
	var_130_float = GetByIndex(var_105_cvector, 2); // 0x10c4 PushE
	Rotate(var_129_float, var_130_float); // 0x10c5 Func
	var_131_bool = 0; // 0x10c7 PushV
	func_4727(var_131_bool); // 0x10c8 NEW_2
	if(var_131_bool == 0) goto Label_4300; // 0x10ca JumpB
	goto Label_4308; // 0x10cb Jump
	
Label_4308:
	CameraWaitForPlayFinish(); // 0x10d4 Func
	ResumeWorld(); // 0x10d6 Func
	var_88_bool = 1; // 0x10d8 MovB
	return 18; // 0x10d9 Return
	
Label_4300:
	var_132_string = "head"; // 0x10cc PushS
	HasAnimationTrack(var_108_bool, var_132_string); // 0x10cd Func
	var_133_bool = var_108_bool; // 0x10cf Push
	if(var_133_bool == 0) goto Label_4308; // 0x10d0 JumpB
	var_134_string = "head"; // 0x10d1 PushS
	LookAsyncCamera(var_134_string); // 0x10d2 Func
}


func_5118(var_760_bool)
{
	var_762_int = 0; var_763_string = ""; // 0x13ff PushV
	var_763_string = "ook8Maria2"; // 0x1400 MovS
	func_4550(var_762_int, var_763_string); // 0x1401 NEW_2
	var_764_int = 0; // 0x1403 PushI
	var_765_bool = var_762_int == var_764_int; // 0x1404 Eq
	if(var_765_bool == 0) goto Label_5128; // 0x1405 JumpB
	var_760_bool = 1; // 0x1406 MovB
	return 0; // 0x1407 Return
	
Label_5128:
	var_760_bool = 0; // 0x1408 MovB
	return 0; // 0x1409 Return
}


func_5273(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); // 0x1499 PushV
	GetDiaryRoot(var_92_object); // 0x149a Func
	var_93_bool = var_92_object == 0; // 0x149c Not
	if(var_93_bool == 0) goto Label_5283; // 0x149d JumpB
	var_94_string = "Can't retrieve diary root"; // 0x149e PushS
	Trace(var_94_string); // 0x149f Func
	var_90_object = 0; // 0x14a1 MovB
	return 2; // 0x14a2 Return
	
Label_5283:
	var_90_object = var_92_object; // 0x14a3 Mov
	return 2; // 0x14a4 Return
}


func_4762()
{
	var_64_string = "k1q02"; // 0x129b PushS
	var_65_int = 4; // 0x129c PushI
	SetVariable(var_64_string, var_65_int); // 0x129d Func
	func_5221(); // 0x12a0 NEW_2
	return 0; // 0x12a2 Return
}


func_4771()
{
	var_64_string = "ook3Maria1"; // 0x12a4 PushS
	var_65_int = 1; // 0x12a5 PushI
	SetVariable(var_64_string, var_65_int); // 0x12a6 Func
	return 0; // 0x12a8 Return
}


func_164(var_2_object, var_345_string)
{
	var_346_bool = 0; // 0xa5 PushV
	func_4727(var_346_bool); // 0xa6 NEW_2
	var_347_bool = var_346_bool == 0; // 0xa8 Not
	if(var_347_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_348_bool = var_345_string == var_2_object; // 0xab Eq
	if(var_348_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_349_string = ""; var_350_bool = 0; // 0xae PushV
	var_349_string = var_345_string; // 0xaf Mov
	var_351_string = ""; // 0xb0 PushS
	var_352_bool = var_345_string == var_351_string; // 0xb1 Eq
	if(var_352_bool == 0) goto Label_181; // 0xb2 JumpB
	var_350_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_4486(var_349_string, var_350_bool); // 0xb6 NEW_2
	var_2_object = var_345_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_350_bool = 1; // 0xb5 MovB
}


func_678(var_0_object, var_1_object, var_2_object, var_3_string, var_404_object, var_405_object)
{
	var_0_object = var_405_object; // 0x2a7 TMov
	var_1_object = var_404_object; // 0x2a8 TMov
	var_3_string = 0; // 0x2a9 TMovB
	var_410_int = 1; // 0x2aa PushI
	if(var_410_int == 0) goto Label_730; // 0x2ab JumpB
	var_411_string = ""; // 0x2ac PushV
	var_411_string = "Neutral"; // 0x2ad MovS
	func_760(var_405_object, var_411_string); // 0x2ae NEW_2
	var_419_int = 525607; // 0x2b0 PushI
	SetMessage(var_419_int); // 0x2b1 TObjFunc
	ClearReplies(); // 0x2b3 TObjFunc
	var_420_bool = 0; // 0x2b5 PushV
	var_420_bool = 0; // 0x2b6 MovB
	var_421_bool = 0; var_422_object = Obj(); // 0x2b7 PushV
	var_422_object = var_1_object; // 0x2b8 MovT
	func_4992(var_422_object); // 0x2b9 NEW_2
	if(var_421_bool == 0) goto Label_706; // 0x2bb JumpB
	var_427_bool = 0; var_428_object = Obj(); // 0x2bc PushV
	var_428_object = var_1_object; // 0x2bd MovT
	func_5004(var_428_object); // 0x2be NEW_2
	if(var_427_bool == 0) goto Label_706; // 0x2c0 JumpB
	var_420_bool = 1; // 0x2c1 MovB
	
Label_706:
	if(var_420_bool == 0) goto Label_712; // 0x2c2 JumpB
	var_433_int = 525608; // 0x2c3 PushI
	var_434_int = 26956; // 0x2c4 PushI
	var_435_int = 26955; // 0x2c5 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x2c6 TObjFunc
	
Label_712:
	var_436_bool = 0; var_437_object = Obj(); // 0x2c8 PushV
	var_437_object = var_1_object; // 0x2c9 MovT
	func_5178(var_437_object); // 0x2ca NEW_2
	if(var_436_bool == 0) goto Label_722; // 0x2cc JumpB
	var_442_int = 540700; // 0x2cd PushI
	var_443_int = 42737; // 0x2ce PushI
	var_444_int = 42736; // 0x2cf PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x2d0 TObjFunc
	
Label_722:
	var_445_int = 525613; // 0x2d2 PushI
	var_446_int = -1; // 0x2d3 PushI
	var_447_int = 26960; // 0x2d4 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x2d5 TObjFunc
	goto Label_730; // 0x2d7 Jump
	
Label_730:
	var_448_bool = 0; // 0x2da PushV
	func_4727(var_448_bool); // 0x2db NEW_2
	if(var_448_bool == 0) goto Label_745; // 0x2dd JumpB
	
Label_734:
	lshWaitForAnimEnd(); // 0x2de Func
	var_449_string = var_3_string; // 0x2e0 PushT
	if(var_449_string == 0) goto Label_739; // 0x2e1 JumpB
	goto Label_744; // 0x2e2 Jump
	
Label_744:
	goto Label_759; // 0x2e8 Jump
	
Label_759:
	return 0; // 0x2f7 Return
	
Label_739:
	var_450_string = ""; // 0x2e3 PushV
	var_450_string = var_2_object; // 0x2e4 MovT
	func_4470(var_450_string); // 0x2e5 NEW_2
	goto Label_734; // 0x2e7 Jump
	
Label_745:
	var_451_string = "all"; // 0x2e9 PushS
	var_452_string = "idle"; // 0x2ea PushS
	PlayAnimation(var_451_string, var_452_string); // 0x2eb Func
	
Label_749:
	WaitForAnimEnd(); // 0x2ed Func
	var_453_string = var_3_string; // 0x2ef PushT
	if(var_453_string == 0) goto Label_754; // 0x2f0 JumpB
	goto Label_759; // 0x2f1 Jump
	
Label_754:
	var_454_string = "all"; // 0x2f2 PushS
	var_455_string = "idle"; // 0x2f3 PushS
	PlayAnimation(var_454_string, var_455_string); // 0x2f4 Func
	goto Label_749; // 0x2f6 Jump
}


func_5286(var_81_bool, var_82_object, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0; // 0x14a6 PushV
	var_90_object = Obj(); // 0x14a7 PushV
	func_5273(var_90_object); // 0x14a8 NEW_2
	var_87_object = var_90_object; // 0x14a9 Mov
	Find(var_83_int, var_88_object); // 0x14ab ObjFunc
	var_95_bool = var_88_object == 0; // 0x14ad Not
	if(var_95_bool == 0) goto Label_5301; // 0x14ae JumpB
	var_96_string = "Can't find diary parent with id: "; // 0x14af PushS
	var_97_int = var_96_string + var_83_int; // 0x14b0 Add
	Trace(var_97_int); // 0x14b1 Func
	var_81_bool = 0; // 0x14b3 MovB
	return 6; // 0x14b4 Return
	
Label_5301:
	AddChild(var_82_object); // 0x14b5 ObjFunc
	var_98_int = 7; // 0x14b7 PushI
	SendWorldWndMessage(var_98_int); // 0x14b8 Func
	GetCategory(var_89_int); // 0x14ba ObjFunc
	SetDiarySection(var_89_int); // 0x14bc Func
	var_81_bool = 0; // 0x14be MovB
	return 6; // 0x14bf Return
}


func_4777()
{
	var_506_string = "ook4Maria1"; // 0x12aa PushS
	var_507_int = 1; // 0x12ab PushI
	SetVariable(var_506_string, var_507_int); // 0x12ac Func
	return 0; // 0x12ae Return
}


func_2222(var_0_object, var_966_int, var_967_object)
{
	var_969_object = Obj(); var_970_bool = 0; var_971_int = 0; var_972_bool = 0; var_973_object = Obj(); var_974_bool = 0; var_975_int = 0; var_976_bool = 0; // 0x8ae PushV
	var_0_object = var_967_object; // 0x8af TMov
	var_977_bool = 0; var_978_object = Obj(); var_979_float = 0; // 0x8b0 PushV
	var_978_object = var_967_object; // 0x8b1 Mov
	var_979_float = 70.0; // 0x8b2 MovF
	func_4245(var_978_object, var_979_float); // 0x8b3 NEW_2
	var_980_bool = var_977_bool == 0; // 0x8b5 Not
	if(var_980_bool == 0) goto Label_2233; // 0x8b6 JumpB
	var_966_int = -2; // 0x8b7 MovI
	return 8; // 0x8b8 Return
	
Label_2233:
	CreateDialog(var_973_object); // 0x8b9 Func
	var_981_int = 0; // 0x8bb PushV
	func_4721(var_981_int); // 0x8bc NEW_2
	SetNPCName(var_981_int); // 0x8be ObjFunc
	var_982_int = 0; // 0x8c0 PushV
	func_4719(var_982_int); // 0x8c1 NEW_2
	SetNPCDescription(var_982_int); // 0x8c3 ObjFunc
	var_983_string = ""; // 0x8c5 PushV
	func_4723(var_983_string); // 0x8c6 NEW_2
	SetPhoto(var_983_string); // 0x8c8 ObjFunc
	var_984_string = ""; // 0x8ca PushV
	func_4725(var_984_string); // 0x8cb NEW_2
	SetPhoto2(var_984_string); // 0x8cd ObjFunc
	var_985_int = 0; // 0x8cf PushV
	func_5364(var_985_int); // 0x8d0 NEW_2
	SetPlayerName(var_985_int); // 0x8d2 ObjFunc
	var_975_int = -1; // 0x8d4 MovI
	IsOverrideActive(var_974_bool); // 0x8d5 Func
	var_986_bool = var_974_bool; // 0x8d7 Push
	if(var_986_bool == 0) goto Label_2267; // 0x8d8 JumpB
	var_966_int = -2; // 0x8d9 MovI
	return 8; // 0x8da Return
	
Label_2267:
	DoDialog(var_973_object); // 0x8db Func
	var_987_bool = 0; var_988_object = Obj(); // 0x8dd PushV
	var_989_object = Obj(); // 0x8de PushV
	func_4523(var_989_object); // 0x8df NEW_2
	var_988_object = var_989_object; // 0x8e0 Mov
	func_4332(var_987_bool, var_988_object); // 0x8e2 NEW_2
	var_990_object = Obj(); var_991_object = Obj(); // 0x8e4 PushV
	var_990_object = var_967_object; // 0x8e5 Mov
	var_991_object = var_973_object; // 0x8e6 Mov
	TaskCall(13); // 0x8e7 TaskCall
	func_2303(var_992_object, var_993_object, var_994_string, var_995_bool, var_990_object, var_991_object); // 0x8e8 NEW_2
	TaskReturn(); // 0x8e9 TaskReturn
	IsDialogEnd(var_976_bool); // 0x8eb ObjFunc
	
Label_2285:
	var_1023_bool = var_976_bool == 0; // 0x8ed Not
	if(var_1023_bool == 0) goto Label_2292; // 0x8ee JumpB
	sync(); // 0x8ef Func
	IsDialogEnd(var_976_bool); // 0x8f1 ObjFunc
	goto Label_2285; // 0x8f3 Jump
	
Label_2292:
	var_1024_object = Obj(); // 0x8f4 PushV
	var_1024_object = var_967_object; // 0x8f5 Mov
	func_4314(); // 0x8f6 NEW_2
	StopDialog(var_973_object); // 0x8f8 Func
	GetReturnValue(var_975_int); // 0x8fa ObjFunc
	var_966_int = var_975_int; // 0x8fc Mov
	return 8; // 0x8fd Return
}


func_4783()
{
	var_64_string = "k7q01"; // 0x12b0 PushS
	var_65_int = 7; // 0x12b1 PushI
	SetVariable(var_64_string, var_65_int); // 0x12b2 Func
	func_5260(); // 0x12b5 NEW_2
	return 0; // 0x12b7 Return
}


func_1202(var_2_object, var_508_string)
{
	var_509_bool = 0; // 0x4b3 PushV
	func_4727(var_509_bool); // 0x4b4 NEW_2
	var_510_bool = var_509_bool == 0; // 0x4b6 Not
	if(var_510_bool == 0) goto Label_1209; // 0x4b7 JumpB
	return 0; // 0x4b8 Return
	
Label_1209:
	var_511_bool = var_508_string == var_2_object; // 0x4b9 Eq
	if(var_511_bool == 0) goto Label_1212; // 0x4ba JumpB
	return 0; // 0x4bb Return
	
Label_1212:
	var_512_string = ""; var_513_bool = 0; // 0x4bc PushV
	var_512_string = var_508_string; // 0x4bd Mov
	var_514_string = ""; // 0x4be PushS
	var_515_bool = var_508_string == var_514_string; // 0x4bf Eq
	if(var_515_bool == 0) goto Label_1219; // 0x4c0 JumpB
	var_513_bool = 0; // 0x4c1 MovB
	goto Label_1220; // 0x4c2 Jump
	
Label_1220:
	func_4486(var_512_string, var_513_bool); // 0x4c4 NEW_2
	var_2_object = var_508_string; // 0x4c6 TMov
	return 0; // 0x4c7 Return
	
Label_1219:
	var_513_bool = 1; // 0x4c3 MovB
}


func_4792()
{
	var_64_string = "k10q01"; // 0x12b9 PushS
	var_65_int = 2; // 0x12ba PushI
	SetVariable(var_64_string, var_65_int); // 0x12bb Func
	func_5208(); // 0x12be NEW_2
	var_89_bool = 0; var_90_string = ""; var_91_string = ""; // 0x12c0 PushV
	var_90_string = "quest_k10_01"; // 0x12c1 MovS
	var_91_string = "place_soldiers"; // 0x12c2 MovS
	func_4663(var_89_bool, var_90_string, var_91_string); // 0x12c3 NEW_2
	return 0; // 0x12c5 Return
}


func_5314(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj(); var_72_object = Obj(); // 0x14c2 PushV
	GetMainOutdoorScene(var_71_object); // 0x14c3 Func
	var_73_bool = var_71_object == 0; // 0x14c5 NullEq
	if(var_73_bool == 0) goto Label_5325; // 0x14c6 JumpB
	var_74_string = "Can't find main outdoor scene"; // 0x14c7 PushS
	Trace(var_74_string); // 0x14c8 Func
	var_72_object = 0; // 0x14ca SetNull
	var_68_object = var_72_object; // 0x14cb Mov
	return 4; // 0x14cc Return
	
Label_5325:
	GetMap(var_72_object); // 0x14cd ObjFunc
	var_68_object = var_72_object; // 0x14cf Mov
	return 4; // 0x14d0 Return
}


func_4806()
{
	var_125_string = "playsound"; // 0x12c7 PushS
	var_126_string = "givemoney"; // 0x12c8 PushS
	TriggerWorld(var_125_string, var_126_string); // 0x12c9 Func
	return 0; // 0x12cb Return
}


func_4812(var_147_object)
{
	var_149_string = "feromicin2 is given"; // 0x12cd PushS
	Trace(var_149_string); // 0x12ce Func
	var_150_object = Obj(); var_151_string = ""; var_152_int = 0; // 0x12d0 PushV
	var_150_object = var_147_object; // 0x12d1 Mov
	var_151_string = "feromicin"; // 0x12d2 MovS
	var_152_int = 2; // 0x12d3 MovI
	func_4605(var_150_object, var_151_string, var_152_int); // 0x12d4 NEW_2
	return 0; // 0x12d6 Return
}


func_1740(var_0_object, var_869_int, var_870_object)
{
	var_872_object = Obj(); var_873_bool = 0; var_874_int = 0; var_875_bool = 0; var_876_object = Obj(); var_877_bool = 0; var_878_int = 0; var_879_bool = 0; // 0x6cc PushV
	var_0_object = var_870_object; // 0x6cd TMov
	var_880_bool = 0; var_881_object = Obj(); var_882_float = 0; // 0x6ce PushV
	var_881_object = var_870_object; // 0x6cf Mov
	var_882_float = 70.0; // 0x6d0 MovF
	func_4245(var_881_object, var_882_float); // 0x6d1 NEW_2
	var_883_bool = var_880_bool == 0; // 0x6d3 Not
	if(var_883_bool == 0) goto Label_1751; // 0x6d4 JumpB
	var_869_int = -2; // 0x6d5 MovI
	return 8; // 0x6d6 Return
	
Label_1751:
	CreateDialog(var_876_object); // 0x6d7 Func
	var_884_int = 0; // 0x6d9 PushV
	func_4721(var_884_int); // 0x6da NEW_2
	SetNPCName(var_884_int); // 0x6dc ObjFunc
	var_885_int = 0; // 0x6de PushV
	func_4719(var_885_int); // 0x6df NEW_2
	SetNPCDescription(var_885_int); // 0x6e1 ObjFunc
	var_886_string = ""; // 0x6e3 PushV
	func_4723(var_886_string); // 0x6e4 NEW_2
	SetPhoto(var_886_string); // 0x6e6 ObjFunc
	var_887_string = ""; // 0x6e8 PushV
	func_4725(var_887_string); // 0x6e9 NEW_2
	SetPhoto2(var_887_string); // 0x6eb ObjFunc
	var_888_int = 0; // 0x6ed PushV
	func_5364(var_888_int); // 0x6ee NEW_2
	SetPlayerName(var_888_int); // 0x6f0 ObjFunc
	var_878_int = -1; // 0x6f2 MovI
	IsOverrideActive(var_877_bool); // 0x6f3 Func
	var_889_bool = var_877_bool; // 0x6f5 Push
	if(var_889_bool == 0) goto Label_1785; // 0x6f6 JumpB
	var_869_int = -2; // 0x6f7 MovI
	return 8; // 0x6f8 Return
	
Label_1785:
	DoDialog(var_876_object); // 0x6f9 Func
	var_890_bool = 0; var_891_object = Obj(); // 0x6fb PushV
	var_892_object = Obj(); // 0x6fc PushV
	func_4523(var_892_object); // 0x6fd NEW_2
	var_891_object = var_892_object; // 0x6fe Mov
	func_4332(var_890_bool, var_891_object); // 0x700 NEW_2
	var_893_object = Obj(); var_894_object = Obj(); // 0x702 PushV
	var_893_object = var_870_object; // 0x703 Mov
	var_894_object = var_876_object; // 0x704 Mov
	TaskCall(11); // 0x705 TaskCall
	func_1821(var_895_object, var_896_object, var_897_string, var_898_bool, var_893_object, var_894_object); // 0x706 NEW_2
	TaskReturn(); // 0x707 TaskReturn
	IsDialogEnd(var_879_bool); // 0x709 ObjFunc
	
Label_1803:
	var_962_bool = var_879_bool == 0; // 0x70b Not
	if(var_962_bool == 0) goto Label_1810; // 0x70c JumpB
	sync(); // 0x70d Func
	IsDialogEnd(var_879_bool); // 0x70f ObjFunc
	goto Label_1803; // 0x711 Jump
	
Label_1810:
	var_963_object = Obj(); // 0x712 PushV
	var_963_object = var_870_object; // 0x713 Mov
	func_4314(); // 0x714 NEW_2
	StopDialog(var_876_object); // 0x716 Func
	GetReturnValue(var_878_int); // 0x718 ObjFunc
	var_869_int = var_878_int; // 0x71a Mov
	return 8; // 0x71b Return
}


func_3791(var_0_object, var_1_object, var_2_object, var_3_string, var_1049_object, var_1050_object)
{
	var_0_object = var_1050_object; // 0xed0 TMov
	var_1_object = var_1049_object; // 0xed1 TMov
	var_3_string = 0; // 0xed2 TMovB
	var_1055_int = 1; // 0xed3 PushI
	if(var_1055_int == 0) goto Label_3819; // 0xed4 JumpB
	var_1056_string = ""; // 0xed5 PushV
	var_1056_string = "Neutral"; // 0xed6 MovS
	func_3849(var_1050_object, var_1056_string); // 0xed7 NEW_2
	var_1064_int = 540539; // 0xed9 PushI
	SetMessage(var_1064_int); // 0xeda TObjFunc
	ClearReplies(); // 0xedc TObjFunc
	var_1065_int = 540540; // 0xede PushI
	var_1066_int = -1; // 0xedf PushI
	var_1067_int = 42549; // 0xee0 PushI
	AddReply(var_1065_int, var_1066_int, var_1067_int); // 0xee1 TObjFunc
	var_1068_int = 540799; // 0xee3 PushI
	var_1069_int = -1; // 0xee4 PushI
	var_1070_int = 42848; // 0xee5 PushI
	AddReply(var_1068_int, var_1069_int, var_1070_int); // 0xee6 TObjFunc
	goto Label_3819; // 0xee8 Jump
	
Label_3819:
	var_1071_bool = 0; // 0xeeb PushV
	func_4727(var_1071_bool); // 0xeec NEW_2
	if(var_1071_bool == 0) goto Label_3834; // 0xeee JumpB
	
Label_3823:
	lshWaitForAnimEnd(); // 0xeef Func
	var_1072_string = var_3_string; // 0xef1 PushT
	if(var_1072_string == 0) goto Label_3828; // 0xef2 JumpB
	goto Label_3833; // 0xef3 Jump
	
Label_3833:
	goto Label_3848; // 0xef9 Jump
	
Label_3848:
	return 0; // 0xf08 Return
	
Label_3828:
	var_1073_string = ""; // 0xef4 PushV
	var_1073_string = var_2_object; // 0xef5 MovT
	func_4470(var_1073_string); // 0xef6 NEW_2
	goto Label_3823; // 0xef8 Jump
	
Label_3834:
	var_1074_string = "all"; // 0xefa PushS
	var_1075_string = "idle"; // 0xefb PushS
	PlayAnimation(var_1074_string, var_1075_string); // 0xefc Func
	
Label_3838:
	WaitForAnimEnd(); // 0xefe Func
	var_1076_string = var_3_string; // 0xf00 PushT
	if(var_1076_string == 0) goto Label_3843; // 0xf01 JumpB
	goto Label_3848; // 0xf02 Jump
	
Label_3843:
	var_1077_string = "all"; // 0xf03 PushS
	var_1078_string = "idle"; // 0xf04 PushS
	PlayAnimation(var_1077_string, var_1078_string); // 0xf05 Func
	goto Label_3838; // 0xf07 Jump
}


func_5331(var_107_object, var_108_string, var_109_float)
{
	var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_object = Obj(); var_114_bool = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_object = Obj(); var_118_bool = 0; // 0x14d3 PushV
	GetMainOutdoorScene(var_117_object); // 0x14d4 Func
	var_119_bool = var_117_object == 0; // 0x14d6 NullEq
	if(var_119_bool == 0) goto Label_5340; // 0x14d7 JumpB
	var_120_string = "Can't find main outdoor scene"; // 0x14d8 PushS
	Trace(var_120_string); // 0x14d9 Func
	return 8; // 0x14db Return
	
Label_5340:
	GetLocator(var_108_string, var_118_bool, var_115_cvector, var_116_cvector); // 0x14dc ObjFunc
	var_121_bool = var_118_bool == 0; // 0x14de Not
	if(var_121_bool == 0) goto Label_5350; // 0x14df JumpB
	var_122_string = "Warning: outdoor scene locator "; // 0x14e0 PushS
	var_123_int = var_122_string + var_108_string; // 0x14e1 Add
	var_124_string = " doesnt exist"; // 0x14e2 PushS
	var_125_int = var_123_int + var_124_string; // 0x14e3 Add
	Trace(var_125_int); // 0x14e4 Func
	
Label_5350:
	GetMap(var_107_object); // 0x14e6 ObjFunc
	var_126_bool = var_107_object == 0; // 0x14e8 NullEq
	if(var_126_bool == 0) goto Label_5358; // 0x14e9 JumpB
	var_127_string = "Can't find map"; // 0x14ea PushS
	Trace(var_127_string); // 0x14eb Func
	return 8; // 0x14ed Return
	
Label_5358:
	var_128_float = GetByIndex(var_115_cvector, 0); // 0x14ee PushE
	var_129_float = GetByIndex(var_115_cvector, 2); // 0x14ef PushE
	SetMapParams(var_128_float, var_129_float, var_109_float); // 0x14f0 ObjFunc
	return 8; // 0x14f2 Return
}


func_4823()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x12d7 PushV
	var_66_string = "k5q04"; // 0x12d8 PushS
	var_67_int = 2; // 0x12d9 PushI
	SetVariable(var_66_string, var_67_int); // 0x12da Func
	var_68_object = Obj(); // 0x12dc PushV
	func_5314(var_68_object); // 0x12dd NEW_2
	var_65_object = var_68_object; // 0x12de Mov
	var_75_string = "k5q04MariaGotoDanko"; // 0x12e0 PushS
	var_76_string = "pt_map_eva"; // 0x12e1 PushS
	var_77_int = 0; // 0x12e2 PushI
	var_78_int = 515279; // 0x12e3 PushI
	var_79_float = 0; // 0x12e4 PushV
	func_4675(var_79_float); // 0x12e5 NEW_2
	AddMark(var_75_string, var_76_string, var_77_int, var_78_int, var_79_float); // 0x12e7 ObjFunc
	func_5247(); // 0x12ea NEW_2
	return 2; // 0x12ec Return
}


func_4314()
{
	var_295_bool = 0; var_296_bool = 0; // 0x10da PushV
	var_297_bool = 1; // 0x10db PushB
	CameraSwitchToNormal(var_297_bool); // 0x10dc Func
	var_298_bool = 0; // 0x10de PushV
	func_4727(var_298_bool); // 0x10df NEW_2
	if(var_298_bool == 0) goto Label_4323; // 0x10e1 JumpB
	goto Label_4331; // 0x10e2 Jump
	
Label_4331:
	return 2; // 0x10eb Return
	
Label_4323:
	var_299_string = "head"; // 0x10e3 PushS
	HasAnimationTrack(var_296_bool, var_299_string); // 0x10e4 Func
	var_300_bool = var_296_bool; // 0x10e6 Push
	if(var_300_bool == 0) goto Label_4331; // 0x10e7 JumpB
	var_301_string = "head"; // 0x10e8 PushS
	UnlookAsync(var_301_string); // 0x10e9 Func
}


func_4332(var_149_bool, var_150_object)
{
	var_154_int = 0; var_155_int = 0; var_156_int = 0; var_157_int = 0; // 0x10ec PushV
	var_158_string = "voice_common"; // 0x10ed PushS
	GetVariable(var_158_string, var_156_int); // 0x10ee Func
	var_159_int = var_156_int; // 0x10f0 Push
	if(var_159_int == 0) goto Label_4370; // 0x10f1 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x10f2 PushV
	var_161_object = var_150_object; // 0x10f3 Mov
	func_4390(var_161_object); // 0x10f4 NEW_2
	var_190_bool = var_160_bool == 0; // 0x10f6 Not
	if(var_190_bool == 0) goto Label_4352; // 0x10f7 JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0x10f8 PushV
	var_192_object = var_150_object; // 0x10f9 Mov
	func_4427(var_192_object); // 0x10fa NEW_2
	var_226_bool = var_191_bool == 0; // 0x10fc Not
	if(var_226_bool == 0) goto Label_4352; // 0x10fd JumpB
	var_149_bool = 0; // 0x10fe MovB
	return 4; // 0x10ff Return
	
Label_4352:
	var_227_int = 2; // 0x1100 PushI
	irand(var_157_int, var_227_int); // 0x1101 Func
	var_228_int = var_157_int; // 0x1103 Push
	if(var_228_int == 0) goto Label_4365; // 0x1104 JumpB
	var_229_string = "voice_common"; // 0x1105 PushS
	var_230_int = 1; // 0x1106 PushI
	var_231_int = var_156_int + var_230_int; // 0x1107 Add
	var_232_int = 3; // 0x1108 PushI
	var_233_int = var_231_int / var_232_int; // 0x1109 Mod
	SetVariable(var_229_string, var_233_int); // 0x110a Func
	goto Label_4369; // 0x110c Jump
	
Label_4369:
	goto Label_4388; // 0x1111 Jump
	
Label_4388:
	var_149_bool = 1; // 0x1124 MovB
	return 4; // 0x1125 Return
	
Label_4365:
	var_234_string = "voice_common"; // 0x110d PushS
	var_235_int = 0; // 0x110e PushI
	SetVariable(var_234_string, var_235_int); // 0x110f Func
	
Label_4370:
	var_236_bool = 0; var_237_object = Obj(); // 0x1112 PushV
	var_237_object = var_150_object; // 0x1113 Mov
	func_4427(var_237_object); // 0x1114 NEW_2
	var_238_bool = var_236_bool == 0; // 0x1116 Not
	if(var_238_bool == 0) goto Label_4384; // 0x1117 JumpB
	var_239_bool = 0; var_240_object = Obj(); // 0x1118 PushV
	var_240_object = var_150_object; // 0x1119 Mov
	func_4390(var_240_object); // 0x111a NEW_2
	var_241_bool = var_239_bool == 0; // 0x111c Not
	if(var_241_bool == 0) goto Label_4384; // 0x111d JumpB
	var_149_bool = 0; // 0x111e MovB
	return 4; // 0x111f Return
	
Label_4384:
	var_242_string = "voice_common"; // 0x1120 PushS
	var_243_int = 1; // 0x1121 PushI
	SetVariable(var_242_string, var_243_int); // 0x1122 Func
}


func_4846()
{
	func_5234(); // 0x12f0 NEW_2
	return 0; // 0x12f2 Return
}


func_4851()
{
	var_64_string = "ook8Maria1"; // 0x12f4 PushS
	var_65_int = 1; // 0x12f5 PushI
	SetVariable(var_64_string, var_65_int); // 0x12f6 Func
	return 0; // 0x12f8 Return
}


func_5364(var_140_int)
{
	var_141_int = 0; var_142_int = 0; // 0x14f4 PushV
	var_143_string = "branch"; // 0x14f5 PushS
	GetVariable(var_143_string, var_142_int); // 0x14f6 Func
	var_144_int = 0; // 0x14f8 PushI
	var_145_bool = var_142_int == var_144_int; // 0x14f9 Eq
	if(var_145_bool == 0) goto Label_5374; // 0x14fa JumpB
	var_140_int = 1; // 0x14fb MovI
	return 2; // 0x14fc Return
	
Label_5374:
	var_146_int = 1; // 0x14fe PushI
	var_147_bool = var_142_int == var_146_int; // 0x14ff Eq
	if(var_147_bool == 0) goto Label_5379; // 0x1500 JumpB
	var_140_int = 2; // 0x1501 MovI
	return 2; // 0x1502 Return
	
Label_5379:
	var_140_int = 3; // 0x1503 MovI
	return 2; // 0x1504 Return
}


func_760(var_2_object, var_411_string)
{
	var_412_bool = 0; // 0x2f9 PushV
	func_4727(var_412_bool); // 0x2fa NEW_2
	var_413_bool = var_412_bool == 0; // 0x2fc Not
	if(var_413_bool == 0) goto Label_767; // 0x2fd JumpB
	return 0; // 0x2fe Return
	
Label_767:
	var_414_bool = var_411_string == var_2_object; // 0x2ff Eq
	if(var_414_bool == 0) goto Label_770; // 0x300 JumpB
	return 0; // 0x301 Return
	
Label_770:
	var_415_string = ""; var_416_bool = 0; // 0x302 PushV
	var_415_string = var_411_string; // 0x303 Mov
	var_417_string = ""; // 0x304 PushS
	var_418_bool = var_411_string == var_417_string; // 0x305 Eq
	if(var_418_bool == 0) goto Label_777; // 0x306 JumpB
	var_416_bool = 0; // 0x307 MovB
	goto Label_778; // 0x308 Jump
	
Label_778:
	func_4486(var_415_string, var_416_bool); // 0x30a NEW_2
	var_2_object = var_411_string; // 0x30c TMov
	return 0; // 0x30d Return
	
Label_777:
	var_416_bool = 1; // 0x309 MovB
}


func_4857()
{
	var_70_string = "ook8Maria2"; // 0x12fa PushS
	var_71_int = 1; // 0x12fb PushI
	SetVariable(var_70_string, var_71_int); // 0x12fc Func
	return 0; // 0x12fe Return
}


func_3325(var_0_object, var_784_int, var_785_object)
{
	var_787_object = Obj(); var_788_bool = 0; var_789_int = 0; var_790_bool = 0; var_791_object = Obj(); var_792_bool = 0; var_793_int = 0; var_794_bool = 0; // 0xcfd PushV
	var_0_object = var_785_object; // 0xcfe TMov
	var_795_bool = 0; var_796_object = Obj(); var_797_float = 0; // 0xcff PushV
	var_796_object = var_785_object; // 0xd00 Mov
	var_797_float = 70.0; // 0xd01 MovF
	func_4245(var_796_object, var_797_float); // 0xd02 NEW_2
	var_798_bool = var_795_bool == 0; // 0xd04 Not
	if(var_798_bool == 0) goto Label_3336; // 0xd05 JumpB
	var_784_int = -2; // 0xd06 MovI
	return 8; // 0xd07 Return
	
Label_3336:
	CreateDialog(var_791_object); // 0xd08 Func
	var_799_int = 0; // 0xd0a PushV
	func_4721(var_799_int); // 0xd0b NEW_2
	SetNPCName(var_799_int); // 0xd0d ObjFunc
	var_800_int = 0; // 0xd0f PushV
	func_4719(var_800_int); // 0xd10 NEW_2
	SetNPCDescription(var_800_int); // 0xd12 ObjFunc
	var_801_string = ""; // 0xd14 PushV
	func_4723(var_801_string); // 0xd15 NEW_2
	SetPhoto(var_801_string); // 0xd17 ObjFunc
	var_802_string = ""; // 0xd19 PushV
	func_4725(var_802_string); // 0xd1a NEW_2
	SetPhoto2(var_802_string); // 0xd1c ObjFunc
	var_803_int = 0; // 0xd1e PushV
	func_5364(var_803_int); // 0xd1f NEW_2
	SetPlayerName(var_803_int); // 0xd21 ObjFunc
	var_793_int = -1; // 0xd23 MovI
	IsOverrideActive(var_792_bool); // 0xd24 Func
	var_804_bool = var_792_bool; // 0xd26 Push
	if(var_804_bool == 0) goto Label_3370; // 0xd27 JumpB
	var_784_int = -2; // 0xd28 MovI
	return 8; // 0xd29 Return
	
Label_3370:
	DoDialog(var_791_object); // 0xd2a Func
	var_805_bool = 0; var_806_object = Obj(); // 0xd2c PushV
	var_807_object = Obj(); // 0xd2d PushV
	func_4523(var_807_object); // 0xd2e NEW_2
	var_806_object = var_807_object; // 0xd2f Mov
	func_4332(var_805_bool, var_806_object); // 0xd31 NEW_2
	var_808_object = Obj(); var_809_object = Obj(); // 0xd33 PushV
	var_808_object = var_785_object; // 0xd34 Mov
	var_809_object = var_791_object; // 0xd35 Mov
	TaskCall(19); // 0xd36 TaskCall
	func_3406(var_810_object, var_811_object, var_812_string, var_813_bool, var_808_object, var_809_object); // 0xd37 NEW_2
	TaskReturn(); // 0xd38 TaskReturn
	IsDialogEnd(var_794_bool); // 0xd3a ObjFunc
	
Label_3388:
	var_865_bool = var_794_bool == 0; // 0xd3c Not
	if(var_865_bool == 0) goto Label_3395; // 0xd3d JumpB
	sync(); // 0xd3e Func
	IsDialogEnd(var_794_bool); // 0xd40 ObjFunc
	goto Label_3388; // 0xd42 Jump
	
Label_3395:
	var_866_object = Obj(); // 0xd43 PushV
	var_866_object = var_785_object; // 0xd44 Mov
	func_4314(); // 0xd45 NEW_2
	StopDialog(var_791_object); // 0xd47 Func
	GetReturnValue(var_793_int); // 0xd49 ObjFunc
	var_784_int = var_793_int; // 0xd4b Mov
	return 8; // 0xd4c Return
}


func_4863()
{
	var_64_string = "ook9Maria1"; // 0x1300 PushS
	var_65_int = 1; // 0x1301 PushI
	SetVariable(var_64_string, var_65_int); // 0x1302 Func
	return 0; // 0x1304 Return
}


func_2303(var_0_object, var_1_object, var_2_object, var_3_string, var_990_object, var_991_object)
{
	var_0_object = var_991_object; // 0x900 TMov
	var_1_object = var_990_object; // 0x901 TMov
	var_3_string = 0; // 0x902 TMovB
	var_996_int = 1; // 0x903 PushI
	if(var_996_int == 0) goto Label_2336; // 0x904 JumpB
	var_997_string = ""; // 0x905 PushV
	var_997_string = "Neutral"; // 0x906 MovS
	func_2366(var_991_object, var_997_string); // 0x907 NEW_2
	var_1005_int = 535231; // 0x909 PushI
	SetMessage(var_1005_int); // 0x90a TObjFunc
	ClearReplies(); // 0x90c TObjFunc
	var_1006_int = 535232; // 0x90e PushI
	var_1007_int = 36953; // 0x90f PushI
	var_1008_int = 36907; // 0x910 PushI
	AddReply(var_1006_int, var_1007_int, var_1008_int); // 0x911 TObjFunc
	var_1009_int = 535233; // 0x913 PushI
	var_1010_int = -1; // 0x914 PushI
	var_1011_int = 36908; // 0x915 PushI
	AddReply(var_1009_int, var_1010_int, var_1011_int); // 0x916 TObjFunc
	var_1012_int = 535280; // 0x918 PushI
	var_1013_int = -1; // 0x919 PushI
	var_1014_int = 36956; // 0x91a PushI
	AddReply(var_1012_int, var_1013_int, var_1014_int); // 0x91b TObjFunc
	goto Label_2336; // 0x91d Jump
	
Label_2336:
	var_1015_bool = 0; // 0x920 PushV
	func_4727(var_1015_bool); // 0x921 NEW_2
	if(var_1015_bool == 0) goto Label_2351; // 0x923 JumpB
	
Label_2340:
	lshWaitForAnimEnd(); // 0x924 Func
	var_1016_string = var_3_string; // 0x926 PushT
	if(var_1016_string == 0) goto Label_2345; // 0x927 JumpB
	goto Label_2350; // 0x928 Jump
	
Label_2350:
	goto Label_2365; // 0x92e Jump
	
Label_2365:
	return 0; // 0x93d Return
	
Label_2345:
	var_1017_string = ""; // 0x929 PushV
	var_1017_string = var_2_object; // 0x92a MovT
	func_4470(var_1017_string); // 0x92b NEW_2
	goto Label_2340; // 0x92d Jump
	
Label_2351:
	var_1018_string = "all"; // 0x92f PushS
	var_1019_string = "idle"; // 0x930 PushS
	PlayAnimation(var_1018_string, var_1019_string); // 0x931 Func
	
Label_2355:
	WaitForAnimEnd(); // 0x933 Func
	var_1020_string = var_3_string; // 0x935 PushT
	if(var_1020_string == 0) goto Label_2360; // 0x936 JumpB
	goto Label_2365; // 0x937 Jump
	
Label_2360:
	var_1021_string = "all"; // 0x938 PushS
	var_1022_string = "idle"; // 0x939 PushS
	PlayAnimation(var_1021_string, var_1022_string); // 0x93a Func
	goto Label_2355; // 0x93c Jump
}


func_4869()
{
	var_70_string = "ook9Maria2"; // 0x1306 PushS
	var_71_int = 1; // 0x1307 PushI
	SetVariable(var_70_string, var_71_int); // 0x1308 Func
	return 0; // 0x130a Return
}


func_5381(var_722_int)
{
	var_723_int = 0; var_724_int = 0; // 0x1505 PushV
	var_725_string = "k2system_danko_day"; // 0x1506 PushS
	GetVariable(var_725_string, var_724_int); // 0x1507 Func
	var_722_int = var_724_int; // 0x1509 Mov
	return 2; // 0x150a Return
}


func_3849(var_2_object, var_1056_string)
{
	var_1057_bool = 0; // 0xf0a PushV
	func_4727(var_1057_bool); // 0xf0b NEW_2
	var_1058_bool = var_1057_bool == 0; // 0xf0d Not
	if(var_1058_bool == 0) goto Label_3856; // 0xf0e JumpB
	return 0; // 0xf0f Return
	
Label_3856:
	var_1059_bool = var_1056_string == var_2_object; // 0xf10 Eq
	if(var_1059_bool == 0) goto Label_3859; // 0xf11 JumpB
	return 0; // 0xf12 Return
	
Label_3859:
	var_1060_string = ""; var_1061_bool = 0; // 0xf13 PushV
	var_1060_string = var_1056_string; // 0xf14 Mov
	var_1062_string = ""; // 0xf15 PushS
	var_1063_bool = var_1056_string == var_1062_string; // 0xf16 Eq
	if(var_1063_bool == 0) goto Label_3866; // 0xf17 JumpB
	var_1061_bool = 0; // 0xf18 MovB
	goto Label_3867; // 0xf19 Jump
	
Label_3867:
	func_4486(var_1060_string, var_1061_bool); // 0xf1b NEW_2
	var_2_object = var_1056_string; // 0xf1d TMov
	return 0; // 0xf1e Return
	
Label_3866:
	var_1061_bool = 1; // 0xf1a MovB
}


func_4875()
{
	var_99_string = "ook10Maria1"; // 0x130c PushS
	var_100_int = 1; // 0x130d PushI
	SetVariable(var_99_string, var_100_int); // 0x130e Func
	return 0; // 0x1310 Return
}


func_5387(var_731_int)
{
	var_732_int = 0; var_733_int = 0; var_734_int = 0; var_735_int = 0; // 0x150b PushV
	var_736_int = 0; // 0x150c PushV
	func_5381(var_736_int); // 0x150d NEW_2
	var_734_int = var_736_int; // 0x150e Mov
	var_737_string = "k2system_danko_state"; // 0x1510 PushS
	var_738_int = var_737_string + var_734_int; // 0x1511 Add
	GetVariable(var_738_int, var_735_int); // 0x1512 Func
	var_731_int = var_735_int; // 0x1514 Mov
	return 4; // 0x1515 Return
}


func_4881()
{
	var_105_string = "ook10Maria2"; // 0x1312 PushS
	var_106_int = 1; // 0x1313 PushI
	SetVariable(var_105_string, var_106_int); // 0x1314 Func
	return 0; // 0x1316 Return
}


func_5398(var_720_bool)
{
	var_721_int = 0; // 0x1516 PushV
	func_4680(var_721_int); // 0x1517 NEW_2
	var_722_int = 0; // 0x1519 PushV
	func_5381(var_722_int); // 0x151a NEW_2
	var_720_bool = var_721_int == var_722_int; // 0x151c Eq2
	return 0; // 0x151d Return
}


func_4887(var_99_object)
{
	var_101_int = 0; var_102_int = 0; // 0x1317 PushV
	var_103_int = 1000; // 0x1318 PushI
	irand(var_102_int, var_103_int); // 0x1319 Func
	var_104_object = Obj(); var_105_int = 0; // 0x131b PushV
	var_104_object = var_99_object; // 0x131c Mov
	var_106_int = 2000; // 0x131d PushI
	var_105_int = var_102_int + var_106_int; // 0x131e Add2
	func_4567(var_104_object, var_105_int); // 0x131f NEW_2
	return 2; // 0x1321 Return
}


func_1821(var_0_object, var_1_object, var_2_object, var_3_string, var_893_object, var_894_object)
{
	var_0_object = var_894_object; // 0x71e TMov
	var_1_object = var_893_object; // 0x71f TMov
	var_3_string = 0; // 0x720 TMovB
	var_899_int = 1; // 0x721 PushI
	if(var_899_int == 0) goto Label_1915; // 0x722 JumpB
	var_900_string = ""; // 0x723 PushV
	var_900_string = "Mysterious"; // 0x724 MovS
	func_1945(var_894_object, var_900_string); // 0x725 NEW_2
	var_908_int = 526947; // 0x727 PushI
	SetMessage(var_908_int); // 0x728 TObjFunc
	ClearReplies(); // 0x72a TObjFunc
	var_909_bool = 0; var_910_object = Obj(); // 0x72c PushV
	var_910_object = var_1_object; // 0x72d MovT
	func_5052(var_910_object); // 0x72e NEW_2
	if(var_909_bool == 0) goto Label_1846; // 0x730 JumpB
	var_915_int = 526948; // 0x731 PushI
	var_916_int = 28241; // 0x732 PushI
	var_917_int = 28240; // 0x733 PushI
	AddReply(var_915_int, var_916_int, var_917_int); // 0x734 TObjFunc
	
Label_1846:
	var_918_bool = 0; // 0x736 PushV
	var_918_bool = 0; // 0x737 MovB
	var_919_bool = 0; // 0x738 PushV
	var_919_bool = 0; // 0x739 MovB
	var_920_bool = 0; var_921_object = Obj(); // 0x73a PushV
	var_921_object = var_1_object; // 0x73b MovT
	func_5076(var_920_bool, var_921_object); // 0x73c NEW_2
	if(var_920_bool == 0) goto Label_1861; // 0x73e JumpB
	var_922_bool = 0; var_923_object = Obj(); // 0x73f PushV
	var_923_object = var_1_object; // 0x740 MovT
	func_5086(var_922_bool, var_923_object); // 0x741 NEW_2
	if(var_922_bool == 0) goto Label_1861; // 0x743 JumpB
	var_919_bool = 1; // 0x744 MovB
	
Label_1861:
	if(var_919_bool == 0) goto Label_1868; // 0x745 JumpB
	var_924_bool = 0; var_925_object = Obj(); // 0x746 PushV
	var_925_object = var_1_object; // 0x747 MovT
	func_5154(var_925_object); // 0x748 NEW_2
	if(var_924_bool == 0) goto Label_1868; // 0x74a JumpB
	var_918_bool = 1; // 0x74b MovB
	
Label_1868:
	if(var_918_bool == 0) goto Label_1874; // 0x74c JumpB
	var_930_int = 539852; // 0x74d PushI
	var_931_int = 41805; // 0x74e PushI
	var_932_int = 41804; // 0x74f PushI
	AddReply(var_930_int, var_931_int, var_932_int); // 0x750 TObjFunc
	
Label_1874:
	var_933_bool = 0; // 0x752 PushV
	var_933_bool = 0; // 0x753 MovB
	var_934_bool = 0; // 0x754 PushV
	var_934_bool = 0; // 0x755 MovB
	var_935_bool = 0; var_936_object = Obj(); // 0x756 PushV
	var_936_object = var_1_object; // 0x757 MovT
	func_5076(var_935_bool, var_936_object); // 0x758 NEW_2
	if(var_935_bool == 0) goto Label_1889; // 0x75a JumpB
	var_937_bool = 0; var_938_object = Obj(); // 0x75b PushV
	var_938_object = var_1_object; // 0x75c MovT
	func_5096(var_937_bool, var_938_object); // 0x75d NEW_2
	if(var_937_bool == 0) goto Label_1889; // 0x75f JumpB
	var_934_bool = 1; // 0x760 MovB
	
Label_1889:
	if(var_934_bool == 0) goto Label_1896; // 0x761 JumpB
	var_939_bool = 0; var_940_object = Obj(); // 0x762 PushV
	var_940_object = var_1_object; // 0x763 MovT
	func_5166(var_940_object); // 0x764 NEW_2
	if(var_939_bool == 0) goto Label_1896; // 0x766 JumpB
	var_933_bool = 1; // 0x767 MovB
	
Label_1896:
	if(var_933_bool == 0) goto Label_1902; // 0x768 JumpB
	var_945_int = 539855; // 0x769 PushI
	var_946_int = 41808; // 0x76a PushI
	var_947_int = 41807; // 0x76b PushI
	AddReply(var_945_int, var_946_int, var_947_int); // 0x76c TObjFunc
	
Label_1902:
	var_948_int = 526951; // 0x76e PushI
	var_949_int = -1; // 0x76f PushI
	var_950_int = 28243; // 0x770 PushI
	AddReply(var_948_int, var_949_int, var_950_int); // 0x771 TObjFunc
	var_951_int = 528006; // 0x773 PushI
	var_952_int = -1; // 0x774 PushI
	var_953_int = 29366; // 0x775 PushI
	AddReply(var_951_int, var_952_int, var_953_int); // 0x776 TObjFunc
	goto Label_1915; // 0x778 Jump
	
Label_1915:
	var_954_bool = 0; // 0x77b PushV
	func_4727(var_954_bool); // 0x77c NEW_2
	if(var_954_bool == 0) goto Label_1930; // 0x77e JumpB
	
Label_1919:
	lshWaitForAnimEnd(); // 0x77f Func
	var_955_string = var_3_string; // 0x781 PushT
	if(var_955_string == 0) goto Label_1924; // 0x782 JumpB
	goto Label_1929; // 0x783 Jump
	
Label_1929:
	goto Label_1944; // 0x789 Jump
	
Label_1944:
	return 0; // 0x798 Return
	
Label_1924:
	var_956_string = ""; // 0x784 PushV
	var_956_string = var_2_object; // 0x785 MovT
	func_4470(var_956_string); // 0x786 NEW_2
	goto Label_1919; // 0x788 Jump
	
Label_1930:
	var_957_string = "all"; // 0x78a PushS
	var_958_string = "idle"; // 0x78b PushS
	PlayAnimation(var_957_string, var_958_string); // 0x78c Func
	
Label_1934:
	WaitForAnimEnd(); // 0x78e Func
	var_959_string = var_3_string; // 0x790 PushT
	if(var_959_string == 0) goto Label_1939; // 0x791 JumpB
	goto Label_1944; // 0x792 Jump
	
Label_1939:
	var_960_string = "all"; // 0x793 PushS
	var_961_string = "idle"; // 0x794 PushS
	PlayAnimation(var_960_string, var_961_string); // 0x795 Func
	goto Label_1934; // 0x797 Jump
}


func_5406(var_757_bool)
{
	var_758_int = 0; // 0x151e PushV
	func_5387(var_758_int); // 0x151f NEW_2
	var_759_int = 2; // 0x1521 PushI
	var_757_bool = var_758_int == var_759_int; // 0x1522 Eq2
	return 0; // 0x1523 Return
}


func_4898(var_99_object)
{
	var_101_int = 0; var_102_int = 0; // 0x1322 PushV
	var_103_int = 1000; // 0x1323 PushI
	irand(var_102_int, var_103_int); // 0x1324 Func
	var_104_object = Obj(); var_105_int = 0; // 0x1326 PushV
	var_104_object = var_99_object; // 0x1327 Mov
	var_106_int = 3000; // 0x1328 PushI
	var_105_int = var_102_int + var_106_int; // 0x1329 Add2
	func_4567(var_104_object, var_105_int); // 0x132a NEW_2
	return 2; // 0x132c Return
}


func_5412(var_730_bool)
{
	var_731_int = 0; // 0x1524 PushV
	func_5387(var_731_int); // 0x1525 NEW_2
	var_739_int = 0; // 0x1527 PushI
	var_730_bool = var_731_int == var_739_int; // 0x1528 Eq2
	return 0; // 0x1529 Return
}


func_4390(var_160_bool)
{
	var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; var_167_string = ""; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_string = ""; // 0x1126 PushV
	var_167_string = "c"; // 0x1127 MovS
	var_168_int = 0; // 0x1128 MovI
	
Label_4393:
	var_172_int = 1; // 0x1129 PushI
	if(var_172_int == 0) goto Label_4406; // 0x112a JumpB
	var_173_int = 1; // 0x112b PushI
	var_174_int = var_168_int + var_173_int; // 0x112c Add
	var_175_int = var_167_string + var_174_int; // 0x112d Add
	HasProperty(var_175_int, var_169_bool); // 0x112e ObjFunc
	var_176_bool = var_169_bool == 0; // 0x1130 Not
	if(var_176_bool == 0) goto Label_4403; // 0x1131 JumpB
	goto Label_4406; // 0x1132 Jump
	
Label_4406:
	var_177_bool = var_168_int == 0; // 0x1136 Not
	if(var_177_bool == 0) goto Label_4410; // 0x1137 JumpB
	var_160_bool = 0; // 0x1138 MovB
	return 10; // 0x1139 Return
	
Label_4410:
	var_170_int = 0; // 0x113a MovI
	var_178_int = 1; // 0x113b PushI
	var_179_bool = var_168_int > var_178_int; // 0x113c GT
	if(var_179_bool == 0) goto Label_4416; // 0x113d JumpB
	irand(var_170_int, var_168_int); // 0x113e Func
	
Label_4416:
	var_180_int = 1; // 0x1140 PushI
	var_181_int = var_170_int + var_180_int; // 0x1141 Add
	var_182_int = var_167_string + var_181_int; // 0x1142 Add
	GetProperty(var_182_int, var_171_string); // 0x1143 ObjFunc
	var_183_bool = 0; var_184_string = ""; // 0x1145 PushV
	var_184_string = var_171_string; // 0x1146 Mov
	func_4501(var_183_bool, var_184_string); // 0x1147 NEW_2
	var_160_bool = var_183_bool; // 0x1148 Mov
	return 10; // 0x114a Return
	
Label_4403:
	var_189_int = 1; // 0x1133 PushI
	var_168_int = var_168_int + var_189_int; // 0x1134 Add2
	goto Label_4393; // 0x1135 Jump
}


func_5418(var_74_object)
{
	var_75_bool = GlobalVars[1]; // 0x152b PushGE
	var_76_bool = var_75_bool == 0; // 0x152c Not
	if(var_76_bool == 0) goto Label_5431; // 0x152d JumpB
	var_77_int = 0; var_78_object = Obj(); // 0x152e PushV
	var_78_object = var_74_object; // 0x152f Mov
	TaskCall(2); // 0x1530 TaskCall
	func_371(var_79_object, var_77_int, var_78_object); // 0x1531 NEW_2
	TaskReturn(); // 0x1532 TaskReturn
	var_302_bool = GlobalVars[1]; // 0x1534 PushGE
	var_302_bool = 1; // 0x1535 MovB
	GlobalVars[1] = var_302_bool; // 0x1536 PopGE
	
Label_5431:
	var_303_bool = 0; var_304_int = 0; // 0x1537 PushV
	var_304_int = 1; // 0x1538 MovI
	func_4689(var_303_bool, var_304_int); // 0x1539 NEW_2
	if(var_303_bool == 0) goto Label_5443; // 0x153b JumpB
	var_306_int = 0; var_307_object = Obj(); // 0x153c PushV
	var_307_object = var_74_object; // 0x153d Mov
	TaskCall(0); // 0x153e TaskCall
	func_0(var_308_object, var_306_int, var_307_object); // 0x153f NEW_2
	TaskReturn(); // 0x1540 TaskReturn
	return 0; // 0x1542 Return
	
Label_5443:
	var_378_bool = 0; var_379_int = 0; // 0x1543 PushV
	var_379_int = 3; // 0x1544 MovI
	func_4689(var_378_bool, var_379_int); // 0x1545 NEW_2
	if(var_378_bool == 0) goto Label_5455; // 0x1547 JumpB
	var_380_int = 0; var_381_object = Obj(); // 0x1548 PushV
	var_381_object = var_74_object; // 0x1549 Mov
	TaskCall(4); // 0x154a TaskCall
	func_597(var_382_object, var_380_int, var_381_object); // 0x154b NEW_2
	TaskReturn(); // 0x154c TaskReturn
	return 0; // 0x154e Return
	
Label_5455:
	var_458_bool = 0; var_459_int = 0; // 0x154f PushV
	var_459_int = 4; // 0x1550 MovI
	func_4689(var_458_bool, var_459_int); // 0x1551 NEW_2
	if(var_458_bool == 0) goto Label_5467; // 0x1553 JumpB
	var_460_int = 0; var_461_object = Obj(); // 0x1554 PushV
	var_461_object = var_74_object; // 0x1555 Mov
	TaskCall(6); // 0x1556 TaskCall
	func_1024(var_462_object, var_460_int, var_461_object); // 0x1557 NEW_2
	TaskReturn(); // 0x1558 TaskReturn
	return 0; // 0x155a Return
	
Label_5467:
	var_541_bool = 0; var_542_int = 0; // 0x155b PushV
	var_542_int = 5; // 0x155c MovI
	func_4689(var_541_bool, var_542_int); // 0x155d NEW_2
	if(var_541_bool == 0) goto Label_5479; // 0x155f JumpB
	var_543_int = 0; var_544_object = Obj(); // 0x1560 PushV
	var_544_object = var_74_object; // 0x1561 Mov
	TaskCall(14); // 0x1562 TaskCall
	func_2481(var_545_object, var_543_int, var_544_object); // 0x1563 NEW_2
	TaskReturn(); // 0x1564 TaskReturn
	return 0; // 0x1566 Return
	
Label_5479:
	var_608_bool = 0; var_609_int = 0; // 0x1567 PushV
	var_609_int = 7; // 0x1568 MovI
	func_4689(var_608_bool, var_609_int); // 0x1569 NEW_2
	if(var_608_bool == 0) goto Label_5491; // 0x156b JumpB
	var_610_int = 0; var_611_object = Obj(); // 0x156c PushV
	var_611_object = var_74_object; // 0x156d Mov
	TaskCall(8); // 0x156e TaskCall
	func_1401(var_612_object, var_610_int, var_611_object); // 0x156f NEW_2
	TaskReturn(); // 0x1570 TaskReturn
	return 0; // 0x1572 Return
	
Label_5491:
	var_672_bool = 0; var_673_int = 0; // 0x1573 PushV
	var_673_int = 8; // 0x1574 MovI
	func_4689(var_672_bool, var_673_int); // 0x1575 NEW_2
	if(var_672_bool == 0) goto Label_5503; // 0x1577 JumpB
	var_674_int = 0; var_675_object = Obj(); // 0x1578 PushV
	var_675_object = var_74_object; // 0x1579 Mov
	TaskCall(16); // 0x157a TaskCall
	func_2899(var_676_object, var_674_int, var_675_object); // 0x157b NEW_2
	TaskReturn(); // 0x157c TaskReturn
	return 0; // 0x157e Return
	
Label_5503:
	var_782_bool = 0; var_783_int = 0; // 0x157f PushV
	var_783_int = 9; // 0x1580 MovI
	func_4689(var_782_bool, var_783_int); // 0x1581 NEW_2
	if(var_782_bool == 0) goto Label_5515; // 0x1583 JumpB
	var_784_int = 0; var_785_object = Obj(); // 0x1584 PushV
	var_785_object = var_74_object; // 0x1585 Mov
	TaskCall(18); // 0x1586 TaskCall
	func_3325(var_786_object, var_784_int, var_785_object); // 0x1587 NEW_2
	TaskReturn(); // 0x1588 TaskReturn
	return 0; // 0x158a Return
	
Label_5515:
	var_867_bool = 0; var_868_int = 0; // 0x158b PushV
	var_868_int = 10; // 0x158c MovI
	func_4689(var_867_bool, var_868_int); // 0x158d NEW_2
	if(var_867_bool == 0) goto Label_5527; // 0x158f JumpB
	var_869_int = 0; var_870_object = Obj(); // 0x1590 PushV
	var_870_object = var_74_object; // 0x1591 Mov
	TaskCall(10); // 0x1592 TaskCall
	func_1740(var_871_object, var_869_int, var_870_object); // 0x1593 NEW_2
	TaskReturn(); // 0x1594 TaskReturn
	return 0; // 0x1596 Return
	
Label_5527:
	var_964_bool = 0; var_965_int = 0; // 0x1597 PushV
	var_965_int = 12; // 0x1598 MovI
	func_4689(var_964_bool, var_965_int); // 0x1599 NEW_2
	if(var_964_bool == 0) goto Label_5539; // 0x159b JumpB
	var_966_int = 0; var_967_object = Obj(); // 0x159c PushV
	var_967_object = var_74_object; // 0x159d Mov
	TaskCall(12); // 0x159e TaskCall
	func_2222(var_968_object, var_966_int, var_967_object); // 0x159f NEW_2
	TaskReturn(); // 0x15a0 TaskReturn
	return 0; // 0x15a2 Return
	
Label_5539:
	var_1025_int = 0; var_1026_object = Obj(); // 0x15a3 PushV
	var_1026_object = var_74_object; // 0x15a4 Mov
	TaskCall(20); // 0x15a5 TaskCall
	func_3710(var_1027_object, var_1025_int, var_1026_object); // 0x15a6 NEW_2
	TaskReturn(); // 0x15a7 TaskReturn
	return 0; // 0x15a9 Return
}


func_4909(var_119_object)
{
	var_121_int = 0; var_122_int = 0; // 0x132d PushV
	var_123_int = 1000; // 0x132e PushI
	irand(var_122_int, var_123_int); // 0x132f Func
	var_124_object = Obj(); var_125_int = 0; // 0x1331 PushV
	var_124_object = var_119_object; // 0x1332 Mov
	var_126_int = 4000; // 0x1333 PushI
	var_125_int = var_122_int + var_126_int; // 0x1334 Add2
	func_4567(var_124_object, var_125_int); // 0x1335 NEW_2
	return 2; // 0x1337 Return
}


func_4920()
{
	var_116_string = "ook3Maria2"; // 0x1339 PushS
	var_117_int = 1; // 0x133a PushI
	SetVariable(var_116_string, var_117_int); // 0x133b Func
	return 0; // 0x133d Return
}


func_4926(var_62_object)
{
	var_64_bool = 0; var_65_object = Obj(); var_66_float = 0; // 0x133f PushV
	var_65_object = var_62_object; // 0x1340 Mov
	var_66_float = 0.1; // 0x1341 MovF
	func_4618(var_64_bool, var_65_object, var_66_float); // 0x1342 NEW_2
	return 0; // 0x1344 Return
}


func_2366(var_2_object, var_997_string)
{
	var_998_bool = 0; // 0x93f PushV
	func_4727(var_998_bool); // 0x940 NEW_2
	var_999_bool = var_998_bool == 0; // 0x942 Not
	if(var_999_bool == 0) goto Label_2373; // 0x943 JumpB
	return 0; // 0x944 Return
	
Label_2373:
	var_1000_bool = var_997_string == var_2_object; // 0x945 Eq
	if(var_1000_bool == 0) goto Label_2376; // 0x946 JumpB
	return 0; // 0x947 Return
	
Label_2376:
	var_1001_string = ""; var_1002_bool = 0; // 0x948 PushV
	var_1001_string = var_997_string; // 0x949 Mov
	var_1003_string = ""; // 0x94a PushS
	var_1004_bool = var_997_string == var_1003_string; // 0x94b Eq
	if(var_1004_bool == 0) goto Label_2383; // 0x94c JumpB
	var_1002_bool = 0; // 0x94d MovB
	goto Label_2384; // 0x94e Jump
	
Label_2384:
	func_4486(var_1001_string, var_1002_bool); // 0x950 NEW_2
	var_2_object = var_997_string; // 0x952 TMov
	return 0; // 0x953 Return
	
Label_2383:
	var_1002_bool = 1; // 0x94f MovB
}


func_4933(var_115_object)
{
	var_117_bool = 0; var_118_object = Obj(); var_119_float = 0; // 0x1346 PushV
	var_118_object = var_115_object; // 0x1347 Mov
	var_119_float = -0.1; // 0x1348 MovF
	func_4618(var_117_bool, var_118_object, var_119_float); // 0x1349 NEW_2
	return 0; // 0x134b Return
}


func_4427(var_191_bool)
{
	var_193_string = ""; var_194_int = 0; var_195_bool = 0; var_196_int = 0; var_197_string = ""; var_198_string = ""; var_199_int = 0; var_200_bool = 0; var_201_int = 0; var_202_string = ""; // 0x114b PushV
	var_203_string = "d"; // 0x114c PushS
	var_204_int = 0; // 0x114d PushV
	func_4680(var_204_int); // 0x114e NEW_2
	var_210_int = var_203_string + var_204_int; // 0x1150 Add
	var_211_string = "m"; // 0x1151 PushS
	var_198_string = var_210_int + var_211_string; // 0x1152 Add2
	var_199_int = 0; // 0x1153 MovI
	
Label_4436:
	var_212_int = 1; // 0x1154 PushI
	if(var_212_int == 0) goto Label_4449; // 0x1155 JumpB
	var_213_int = 1; // 0x1156 PushI
	var_214_int = var_199_int + var_213_int; // 0x1157 Add
	var_215_int = var_198_string + var_214_int; // 0x1158 Add
	HasProperty(var_215_int, var_200_bool); // 0x1159 ObjFunc
	var_216_bool = var_200_bool == 0; // 0x115b Not
	if(var_216_bool == 0) goto Label_4446; // 0x115c JumpB
	goto Label_4449; // 0x115d Jump
	
Label_4449:
	var_217_bool = var_199_int == 0; // 0x1161 Not
	if(var_217_bool == 0) goto Label_4453; // 0x1162 JumpB
	var_191_bool = 0; // 0x1163 MovB
	return 10; // 0x1164 Return
	
Label_4453:
	var_201_int = 0; // 0x1165 MovI
	var_218_int = 1; // 0x1166 PushI
	var_219_bool = var_199_int > var_218_int; // 0x1167 GT
	if(var_219_bool == 0) goto Label_4459; // 0x1168 JumpB
	irand(var_201_int, var_199_int); // 0x1169 Func
	
Label_4459:
	var_220_int = 1; // 0x116b PushI
	var_221_int = var_201_int + var_220_int; // 0x116c Add
	var_222_int = var_198_string + var_221_int; // 0x116d Add
	GetProperty(var_222_int, var_202_string); // 0x116e ObjFunc
	var_223_bool = 0; var_224_string = ""; // 0x1170 PushV
	var_224_string = var_202_string; // 0x1171 Mov
	func_4501(var_223_bool, var_224_string); // 0x1172 NEW_2
	var_191_bool = var_223_bool; // 0x1173 Mov
	return 10; // 0x1175 Return
	
Label_4446:
	var_225_int = 1; // 0x115e PushI
	var_199_int = var_199_int + var_225_int; // 0x115f Add2
	goto Label_4436; // 0x1160 Jump
}


func_4940(var_104_object)
{
	var_106_bool = 0; var_107_object = Obj(); var_108_float = 0; // 0x134d PushV
	var_107_object = var_104_object; // 0x134e Mov
	var_108_float = -0.3; // 0x134f MovF
	func_4618(var_106_bool, var_107_object, var_108_float); // 0x1350 NEW_2
	return 0; // 0x1352 Return
}


func_3406(var_0_object, var_1_object, var_2_object, var_3_string, var_808_object, var_809_object)
{
	var_0_object = var_809_object; // 0xd4f TMov
	var_1_object = var_808_object; // 0xd50 TMov
	var_3_string = 0; // 0xd51 TMovB
	var_814_int = 1; // 0xd52 PushI
	if(var_814_int == 0) goto Label_3485; // 0xd53 JumpB
	var_815_string = ""; // 0xd54 PushV
	var_815_string = "Mysterious"; // 0xd55 MovS
	func_3515(var_809_object, var_815_string); // 0xd56 NEW_2
	var_823_int = 539840; // 0xd58 PushI
	SetMessage(var_823_int); // 0xd59 TObjFunc
	ClearReplies(); // 0xd5b TObjFunc
	var_824_bool = 0; // 0xd5d PushV
	var_824_bool = 0; // 0xd5e MovB
	var_825_bool = 0; // 0xd5f PushV
	var_825_bool = 0; // 0xd60 MovB
	var_826_bool = 0; var_827_object = Obj(); // 0xd61 PushV
	var_827_object = var_1_object; // 0xd62 MovT
	func_5076(var_826_bool, var_827_object); // 0xd63 NEW_2
	if(var_826_bool == 0) goto Label_3436; // 0xd65 JumpB
	var_828_bool = 0; var_829_object = Obj(); // 0xd66 PushV
	var_829_object = var_1_object; // 0xd67 MovT
	func_5086(var_828_bool, var_829_object); // 0xd68 NEW_2
	if(var_828_bool == 0) goto Label_3436; // 0xd6a JumpB
	var_825_bool = 1; // 0xd6b MovB
	
Label_3436:
	if(var_825_bool == 0) goto Label_3443; // 0xd6c JumpB
	var_830_bool = 0; var_831_object = Obj(); // 0xd6d PushV
	var_831_object = var_1_object; // 0xd6e MovT
	func_5130(var_831_object); // 0xd6f NEW_2
	if(var_830_bool == 0) goto Label_3443; // 0xd71 JumpB
	var_824_bool = 1; // 0xd72 MovB
	
Label_3443:
	if(var_824_bool == 0) goto Label_3449; // 0xd73 JumpB
	var_836_int = 539841; // 0xd74 PushI
	var_837_int = 41794; // 0xd75 PushI
	var_838_int = 41793; // 0xd76 PushI
	AddReply(var_836_int, var_837_int, var_838_int); // 0xd77 TObjFunc
	
Label_3449:
	var_839_bool = 0; // 0xd79 PushV
	var_839_bool = 0; // 0xd7a MovB
	var_840_bool = 0; // 0xd7b PushV
	var_840_bool = 0; // 0xd7c MovB
	var_841_bool = 0; var_842_object = Obj(); // 0xd7d PushV
	var_842_object = var_1_object; // 0xd7e MovT
	func_5076(var_841_bool, var_842_object); // 0xd7f NEW_2
	if(var_841_bool == 0) goto Label_3464; // 0xd81 JumpB
	var_843_bool = 0; var_844_object = Obj(); // 0xd82 PushV
	var_844_object = var_1_object; // 0xd83 MovT
	func_5096(var_843_bool, var_844_object); // 0xd84 NEW_2
	if(var_843_bool == 0) goto Label_3464; // 0xd86 JumpB
	var_840_bool = 1; // 0xd87 MovB
	
Label_3464:
	if(var_840_bool == 0) goto Label_3471; // 0xd88 JumpB
	var_845_bool = 0; var_846_object = Obj(); // 0xd89 PushV
	var_846_object = var_1_object; // 0xd8a MovT
	func_5142(var_846_object); // 0xd8b NEW_2
	if(var_845_bool == 0) goto Label_3471; // 0xd8d JumpB
	var_839_bool = 1; // 0xd8e MovB
	
Label_3471:
	if(var_839_bool == 0) goto Label_3477; // 0xd8f JumpB
	var_851_int = 539844; // 0xd90 PushI
	var_852_int = 41797; // 0xd91 PushI
	var_853_int = 41796; // 0xd92 PushI
	AddReply(var_851_int, var_852_int, var_853_int); // 0xd93 TObjFunc
	
Label_3477:
	var_854_int = 539850; // 0xd95 PushI
	var_855_int = -1; // 0xd96 PushI
	var_856_int = 41802; // 0xd97 PushI
	AddReply(var_854_int, var_855_int, var_856_int); // 0xd98 TObjFunc
	goto Label_3485; // 0xd9a Jump
	
Label_3485:
	var_857_bool = 0; // 0xd9d PushV
	func_4727(var_857_bool); // 0xd9e NEW_2
	if(var_857_bool == 0) goto Label_3500; // 0xda0 JumpB
	
Label_3489:
	lshWaitForAnimEnd(); // 0xda1 Func
	var_858_string = var_3_string; // 0xda3 PushT
	if(var_858_string == 0) goto Label_3494; // 0xda4 JumpB
	goto Label_3499; // 0xda5 Jump
	
Label_3499:
	goto Label_3514; // 0xdab Jump
	
Label_3514:
	return 0; // 0xdba Return
	
Label_3494:
	var_859_string = ""; // 0xda6 PushV
	var_859_string = var_2_object; // 0xda7 MovT
	func_4470(var_859_string); // 0xda8 NEW_2
	goto Label_3489; // 0xdaa Jump
	
Label_3500:
	var_860_string = "all"; // 0xdac PushS
	var_861_string = "idle"; // 0xdad PushS
	PlayAnimation(var_860_string, var_861_string); // 0xdae Func
	
Label_3504:
	WaitForAnimEnd(); // 0xdb0 Func
	var_862_string = var_3_string; // 0xdb2 PushT
	if(var_862_string == 0) goto Label_3509; // 0xdb3 JumpB
	goto Label_3514; // 0xdb4 Jump
	
Label_3509:
	var_863_string = "all"; // 0xdb5 PushS
	var_864_string = "idle"; // 0xdb6 PushS
	PlayAnimation(var_863_string, var_864_string); // 0xdb7 Func
	goto Label_3504; // 0xdb9 Jump
}


func_3920(var_0_object)
{
	var_57_bool = 0; // 0xf50 PushV
	func_4240(var_57_bool); // 0xf51 NEW_2
	var_60_bool = var_57_bool == 0; // 0xf53 Not
	if(var_60_bool == 0) goto Label_3927; // 0xf54 JumpB
	Hold(); // 0xf55 Func
	
Label_3927:
	GetDirection(var_0_object); // 0xf57 Func
	
Label_3929:
	func_4096(); // 0xf5a NEW_2
	goto Label_3929; // 0xf5c Jump
}


func_4947(var_123_object)
{
	var_125_string = "feromicin is given"; // 0x1354 PushS
	Trace(var_125_string); // 0x1355 Func
	var_126_object = Obj(); var_127_string = ""; var_128_int = 0; // 0x1357 PushV
	var_126_object = var_123_object; // 0x1358 Mov
	var_127_string = "feromicin"; // 0x1359 MovS
	var_128_int = 1; // 0x135a MovI
	func_4605(var_126_object, var_127_string, var_128_int); // 0x135b NEW_2
	return 0; // 0x135d Return
}


func_2899(var_0_object, var_674_int, var_675_object)
{
	var_677_object = Obj(); var_678_bool = 0; var_679_int = 0; var_680_bool = 0; var_681_object = Obj(); var_682_bool = 0; var_683_int = 0; var_684_bool = 0; // 0xb53 PushV
	var_0_object = var_675_object; // 0xb54 TMov
	var_685_bool = 0; var_686_object = Obj(); var_687_float = 0; // 0xb55 PushV
	var_686_object = var_675_object; // 0xb56 Mov
	var_687_float = 70.0; // 0xb57 MovF
	func_4245(var_686_object, var_687_float); // 0xb58 NEW_2
	var_688_bool = var_685_bool == 0; // 0xb5a Not
	if(var_688_bool == 0) goto Label_2910; // 0xb5b JumpB
	var_674_int = -2; // 0xb5c MovI
	return 8; // 0xb5d Return
	
Label_2910:
	CreateDialog(var_681_object); // 0xb5e Func
	var_689_int = 0; // 0xb60 PushV
	func_4721(var_689_int); // 0xb61 NEW_2
	SetNPCName(var_689_int); // 0xb63 ObjFunc
	var_690_int = 0; // 0xb65 PushV
	func_4719(var_690_int); // 0xb66 NEW_2
	SetNPCDescription(var_690_int); // 0xb68 ObjFunc
	var_691_string = ""; // 0xb6a PushV
	func_4723(var_691_string); // 0xb6b NEW_2
	SetPhoto(var_691_string); // 0xb6d ObjFunc
	var_692_string = ""; // 0xb6f PushV
	func_4725(var_692_string); // 0xb70 NEW_2
	SetPhoto2(var_692_string); // 0xb72 ObjFunc
	var_693_int = 0; // 0xb74 PushV
	func_5364(var_693_int); // 0xb75 NEW_2
	SetPlayerName(var_693_int); // 0xb77 ObjFunc
	var_683_int = -1; // 0xb79 MovI
	IsOverrideActive(var_682_bool); // 0xb7a Func
	var_694_bool = var_682_bool; // 0xb7c Push
	if(var_694_bool == 0) goto Label_2944; // 0xb7d JumpB
	var_674_int = -2; // 0xb7e MovI
	return 8; // 0xb7f Return
	
Label_2944:
	DoDialog(var_681_object); // 0xb80 Func
	var_695_bool = 0; var_696_object = Obj(); // 0xb82 PushV
	var_697_object = Obj(); // 0xb83 PushV
	func_4523(var_697_object); // 0xb84 NEW_2
	var_696_object = var_697_object; // 0xb85 Mov
	func_4332(var_695_bool, var_696_object); // 0xb87 NEW_2
	var_698_object = Obj(); var_699_object = Obj(); // 0xb89 PushV
	var_698_object = var_675_object; // 0xb8a Mov
	var_699_object = var_681_object; // 0xb8b Mov
	TaskCall(17); // 0xb8c TaskCall
	func_2980(var_700_object, var_701_object, var_702_string, var_703_bool, var_698_object, var_699_object); // 0xb8d NEW_2
	TaskReturn(); // 0xb8e TaskReturn
	IsDialogEnd(var_684_bool); // 0xb90 ObjFunc
	
Label_2962:
	var_780_bool = var_684_bool == 0; // 0xb92 Not
	if(var_780_bool == 0) goto Label_2969; // 0xb93 JumpB
	sync(); // 0xb94 Func
	IsDialogEnd(var_684_bool); // 0xb96 ObjFunc
	goto Label_2962; // 0xb98 Jump
	
Label_2969:
	var_781_object = Obj(); // 0xb99 PushV
	var_781_object = var_675_object; // 0xb9a Mov
	func_4314(); // 0xb9b NEW_2
	StopDialog(var_681_object); // 0xb9d Func
	GetReturnValue(var_683_int); // 0xb9f ObjFunc
	var_674_int = var_683_int; // 0xba1 Mov
	return 8; // 0xba2 Return
}


func_4958(var_127_object)
{
	var_129_string = "morfin is given"; // 0x135f PushS
	Trace(var_129_string); // 0x1360 Func
	var_130_object = Obj(); var_131_string = ""; var_132_int = 0; // 0x1362 PushV
	var_130_object = var_127_object; // 0x1363 Mov
	var_131_string = "morfin"; // 0x1364 MovS
	var_132_int = 1; // 0x1365 MovI
	func_4605(var_130_object, var_131_string, var_132_int); // 0x1366 NEW_2
	return 0; // 0x1368 Return
}


func_3934(var_81_bool)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0xf5e PushV
	var_84_string = "player"; // 0xf5f PushS
	FindActor(var_83_object, var_84_string); // 0xf60 Func
	var_85_bool = var_83_object == 0; // 0xf62 Not
	if(var_85_bool == 0) goto Label_3942; // 0xf63 JumpB
	var_81_bool = 0; // 0xf64 MovB
	return 2; // 0xf65 Return
	
Label_3942:
	var_86_bool = 0; var_87_object = Obj(); // 0xf66 PushV
	var_87_object = var_83_object; // 0xf67 Mov
	func_4231(var_87_object); // 0xf68 NEW_2
	var_81_bool = var_86_bool; // 0xf69 Mov
	return 2; // 0xf6b Return
}


func_4969(var_148_object)
{
	var_150_string = "neomicin is given"; // 0x136a PushS
	Trace(var_150_string); // 0x136b Func
	var_151_object = Obj(); var_152_string = ""; var_153_int = 0; // 0x136d PushV
	var_151_object = var_148_object; // 0x136e Mov
	var_152_string = "neomicin"; // 0x136f MovS
	var_153_int = 1; // 0x1370 MovI
	func_4605(var_151_object, var_152_string, var_153_int); // 0x1371 NEW_2
	return 0; // 0x1373 Return
}


func_3949(var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0); // 0xf6d PushE
	var_134_float = GetByIndex(var_0_object, 2); // 0xf6e PushE
	RotateAsync(var_133_float, var_134_float); // 0xf6f Func
	return 0; // 0xf71 Return
}


func_3954(var_64_bool)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0; // 0xf72 PushV
	var_69_string = "player"; // 0xf73 PushS
	FindActor(var_67_object, var_69_string); // 0xf74 Func
	var_70_bool = var_67_object == 0; // 0xf76 Not
	if(var_70_bool == 0) goto Label_3962; // 0xf77 JumpB
	var_64_bool = 0; // 0xf78 MovB
	return 4; // 0xf79 Return
	
Label_3962:
	var_71_float = 0; var_72_object = Obj(); // 0xf7a PushV
	var_72_object = var_67_object; // 0xf7b Mov
	func_4172(var_72_object); // 0xf7c NEW_2
	var_79_float = 90000.0; // 0xf7e PushF
	var_80_bool = var_71_float > var_79_float; // 0xf7f GT
	if(var_80_bool == 0) goto Label_3971; // 0xf80 JumpB
	var_64_bool = 0; // 0xf81 MovB
	return 4; // 0xf82 Return
	
Label_3971:
	CanSee(var_68_bool, var_67_object); // 0xf83 Func
	var_64_bool = var_68_bool; // 0xf85 Mov
	return 4; // 0xf86 Return
}


func_371(var_0_object, var_77_int, var_78_object)
{
	var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0; // 0x173 PushV
	var_0_object = var_78_object; // 0x174 TMov
	var_88_bool = 0; var_89_object = Obj(); var_90_float = 0; // 0x175 PushV
	var_89_object = var_78_object; // 0x176 Mov
	var_90_float = 70.0; // 0x177 MovF
	func_4245(var_89_object, var_90_float); // 0x178 NEW_2
	var_135_bool = var_88_bool == 0; // 0x17a Not
	if(var_135_bool == 0) goto Label_382; // 0x17b JumpB
	var_77_int = -2; // 0x17c MovI
	return 8; // 0x17d Return
	
Label_382:
	CreateDialog(var_84_object); // 0x17e Func
	var_136_int = 0; // 0x180 PushV
	func_4721(var_136_int); // 0x181 NEW_2
	SetNPCName(var_136_int); // 0x183 ObjFunc
	var_137_int = 0; // 0x185 PushV
	func_4719(var_137_int); // 0x186 NEW_2
	SetNPCDescription(var_137_int); // 0x188 ObjFunc
	var_138_string = ""; // 0x18a PushV
	func_4723(var_138_string); // 0x18b NEW_2
	SetPhoto(var_138_string); // 0x18d ObjFunc
	var_139_string = ""; // 0x18f PushV
	func_4725(var_139_string); // 0x190 NEW_2
	SetPhoto2(var_139_string); // 0x192 ObjFunc
	var_140_int = 0; // 0x194 PushV
	func_5364(var_140_int); // 0x195 NEW_2
	SetPlayerName(var_140_int); // 0x197 ObjFunc
	var_86_int = -1; // 0x199 MovI
	IsOverrideActive(var_85_bool); // 0x19a Func
	var_148_bool = var_85_bool; // 0x19c Push
	if(var_148_bool == 0) goto Label_416; // 0x19d JumpB
	var_77_int = -2; // 0x19e MovI
	return 8; // 0x19f Return
	
Label_416:
	DoDialog(var_84_object); // 0x1a0 Func
	var_149_bool = 0; var_150_object = Obj(); // 0x1a2 PushV
	var_151_object = Obj(); // 0x1a3 PushV
	func_4523(var_151_object); // 0x1a4 NEW_2
	var_150_object = var_151_object; // 0x1a5 Mov
	func_4332(var_149_bool, var_150_object); // 0x1a7 NEW_2
	var_244_object = Obj(); var_245_object = Obj(); // 0x1a9 PushV
	var_244_object = var_78_object; // 0x1aa Mov
	var_245_object = var_84_object; // 0x1ab Mov
	TaskCall(3); // 0x1ac TaskCall
	func_452(var_246_object, var_247_object, var_248_string, var_249_bool, var_244_object, var_245_object); // 0x1ad NEW_2
	TaskReturn(); // 0x1ae TaskReturn
	IsDialogEnd(var_87_bool); // 0x1b0 ObjFunc
	
Label_434:
	var_293_bool = var_87_bool == 0; // 0x1b2 Not
	if(var_293_bool == 0) goto Label_441; // 0x1b3 JumpB
	sync(); // 0x1b4 Func
	IsDialogEnd(var_87_bool); // 0x1b6 ObjFunc
	goto Label_434; // 0x1b8 Jump
	
Label_441:
	var_294_object = Obj(); // 0x1b9 PushV
	var_294_object = var_78_object; // 0x1ba Mov
	func_4314(); // 0x1bb NEW_2
	StopDialog(var_84_object); // 0x1bd Func
	GetReturnValue(var_86_int); // 0x1bf ObjFunc
	var_77_int = var_86_int; // 0x1c1 Mov
	return 8; // 0x1c2 Return
}


func_4980(var_337_bool)
{
	var_339_int = 0; var_340_string = ""; // 0x1375 PushV
	var_340_string = "k1q02"; // 0x1376 MovS
	func_4550(var_339_int, var_340_string); // 0x1377 NEW_2
	var_343_int = 3; // 0x1379 PushI
	var_344_bool = var_339_int == var_343_int; // 0x137a Eq
	if(var_344_bool == 0) goto Label_4990; // 0x137b JumpB
	var_337_bool = 1; // 0x137c MovB
	return 0; // 0x137d Return
	
Label_4990:
	var_337_bool = 0; // 0x137e MovB
	return 0; // 0x137f Return
}


func_4470(var_277_string)
{
	var_278_bool = 0; var_279_float = 0; var_280_float = 0; var_281_bool = 0; var_282_float = 0; var_283_float = 0; // 0x1176 PushV
	lshHasAnimation(var_281_bool, var_277_string); // 0x1177 Func
	var_284_bool = var_281_bool; // 0x1179 Push
	if(var_284_bool == 0) goto Label_4481; // 0x117a JumpB
	lshGetAnimTimes(var_277_string, var_282_float, var_283_float); // 0x117b Func
	var_285_bool = 0; // 0x117d PushB
	lshPlayAnimation(var_282_float, var_283_float, var_285_bool); // 0x117e Func
	goto Label_4485; // 0x1180 Jump
	
Label_4485:
	return 6; // 0x1185 Return
	
Label_4481:
	var_286_string = "Can't find lsh animation : "; // 0x1181 PushS
	var_287_int = var_286_string + var_277_string; // 0x1182 Add
	Trace(var_287_int); // 0x1183 Func
}


func_1401(var_0_object, var_610_int, var_611_object)
{
	var_613_object = Obj(); var_614_bool = 0; var_615_int = 0; var_616_bool = 0; var_617_object = Obj(); var_618_bool = 0; var_619_int = 0; var_620_bool = 0; // 0x579 PushV
	var_0_object = var_611_object; // 0x57a TMov
	var_621_bool = 0; var_622_object = Obj(); var_623_float = 0; // 0x57b PushV
	var_622_object = var_611_object; // 0x57c Mov
	var_623_float = 70.0; // 0x57d MovF
	func_4245(var_622_object, var_623_float); // 0x57e NEW_2
	var_624_bool = var_621_bool == 0; // 0x580 Not
	if(var_624_bool == 0) goto Label_1412; // 0x581 JumpB
	var_610_int = -2; // 0x582 MovI
	return 8; // 0x583 Return
	
Label_1412:
	CreateDialog(var_617_object); // 0x584 Func
	var_625_int = 0; // 0x586 PushV
	func_4721(var_625_int); // 0x587 NEW_2
	SetNPCName(var_625_int); // 0x589 ObjFunc
	var_626_int = 0; // 0x58b PushV
	func_4719(var_626_int); // 0x58c NEW_2
	SetNPCDescription(var_626_int); // 0x58e ObjFunc
	var_627_string = ""; // 0x590 PushV
	func_4723(var_627_string); // 0x591 NEW_2
	SetPhoto(var_627_string); // 0x593 ObjFunc
	var_628_string = ""; // 0x595 PushV
	func_4725(var_628_string); // 0x596 NEW_2
	SetPhoto2(var_628_string); // 0x598 ObjFunc
	var_629_int = 0; // 0x59a PushV
	func_5364(var_629_int); // 0x59b NEW_2
	SetPlayerName(var_629_int); // 0x59d ObjFunc
	var_619_int = -1; // 0x59f MovI
	IsOverrideActive(var_618_bool); // 0x5a0 Func
	var_630_bool = var_618_bool; // 0x5a2 Push
	if(var_630_bool == 0) goto Label_1446; // 0x5a3 JumpB
	var_610_int = -2; // 0x5a4 MovI
	return 8; // 0x5a5 Return
	
Label_1446:
	DoDialog(var_617_object); // 0x5a6 Func
	var_631_bool = 0; var_632_object = Obj(); // 0x5a8 PushV
	var_633_object = Obj(); // 0x5a9 PushV
	func_4523(var_633_object); // 0x5aa NEW_2
	var_632_object = var_633_object; // 0x5ab Mov
	func_4332(var_631_bool, var_632_object); // 0x5ad NEW_2
	var_634_object = Obj(); var_635_object = Obj(); // 0x5af PushV
	var_634_object = var_611_object; // 0x5b0 Mov
	var_635_object = var_617_object; // 0x5b1 Mov
	TaskCall(9); // 0x5b2 TaskCall
	func_1482(var_636_object, var_637_object, var_638_string, var_639_bool, var_634_object, var_635_object); // 0x5b3 NEW_2
	TaskReturn(); // 0x5b4 TaskReturn
	IsDialogEnd(var_620_bool); // 0x5b6 ObjFunc
	
Label_1464:
	var_670_bool = var_620_bool == 0; // 0x5b8 Not
	if(var_670_bool == 0) goto Label_1471; // 0x5b9 JumpB
	sync(); // 0x5ba Func
	IsDialogEnd(var_620_bool); // 0x5bc ObjFunc
	goto Label_1464; // 0x5be Jump
	
Label_1471:
	var_671_object = Obj(); // 0x5bf PushV
	var_671_object = var_611_object; // 0x5c0 Mov
	func_4314(); // 0x5c1 NEW_2
	StopDialog(var_617_object); // 0x5c3 Func
	GetReturnValue(var_619_int); // 0x5c5 ObjFunc
	var_610_int = var_619_int; // 0x5c7 Mov
	return 8; // 0x5c8 Return
}


func_4992(var_421_bool)
{
	var_423_int = 0; var_424_string = ""; // 0x1381 PushV
	var_424_string = "k3q03"; // 0x1382 MovS
	func_4550(var_423_int, var_424_string); // 0x1383 NEW_2
	var_425_int = 1000; // 0x1385 PushI
	var_426_bool = var_423_int == var_425_int; // 0x1386 Eq
	if(var_426_bool == 0) goto Label_5002; // 0x1387 JumpB
	var_421_bool = 1; // 0x1388 MovB
	return 0; // 0x1389 Return
	
Label_5002:
	var_421_bool = 0; // 0x138a MovB
	return 0; // 0x138b Return
}


func_4486(var_255_string, var_256_bool)
{
	var_259_bool = 0; var_260_float = 0; var_261_float = 0; var_262_bool = 0; var_263_float = 0; var_264_float = 0; // 0x1186 PushV
	lshHasAnimation(var_262_bool, var_255_string); // 0x1187 Func
	var_265_bool = var_262_bool; // 0x1189 Push
	if(var_265_bool == 0) goto Label_4496; // 0x118a JumpB
	lshGetAnimTimes(var_255_string, var_263_float, var_264_float); // 0x118b Func
	lshPlayAnimation(var_263_float, var_264_float, var_256_bool); // 0x118d Func
	goto Label_4500; // 0x118f Jump
	
Label_4500:
	return 6; // 0x1194 Return
	
Label_4496:
	var_266_string = "Can't find lsh animation : "; // 0x1190 PushS
	var_267_int = var_266_string + var_255_string; // 0x1191 Add
	Trace(var_267_int); // 0x1192 Func
}


func_3976()
{
	var_1083_float = 0; var_1084_float = 0; // 0xf88 PushV
	var_1085_int = 8; // 0xf89 PushI
	var_1086_int = 16; // 0xf8a PushI
	rand(var_1084_float, var_1085_int, var_1086_int); // 0xf8b Func
	var_1087_int = 10; // 0xf8d PushI
	SetTimer(var_1087_int, var_1084_float); // 0xf8e Func
	return 2; // 0xf90 Return
}


func_5004(var_427_bool)
{
	var_429_int = 0; var_430_string = ""; // 0x138d PushV
	var_430_string = "ook3Maria1"; // 0x138e MovS
	func_4550(var_429_int, var_430_string); // 0x138f NEW_2
	var_431_int = 0; // 0x1391 PushI
	var_432_bool = var_429_int == var_431_int; // 0x1392 Eq
	if(var_432_bool == 0) goto Label_5014; // 0x1393 JumpB
	var_427_bool = 1; // 0x1394 MovB
	return 0; // 0x1395 Return
	
Label_5014:
	var_427_bool = 0; // 0x1396 MovB
	return 0; // 0x1397 Return
}


func_3985()
{
	var_1082_int = 10; // 0xf91 PushI
	KillTimer(var_1082_int); // 0xf92 Func
	return 0; // 0xf94 Return
}


func_4501(var_183_bool, var_184_string)
{
	var_185_bool = 0; var_186_bool = 0; // 0x1195 PushV
	var_187_bool = 0; // 0x1196 PushV
	func_4727(var_187_bool); // 0x1197 NEW_2
	if(var_187_bool == 0) goto Label_4514; // 0x1199 JumpB
	lshHasSpeech(var_186_bool, var_184_string); // 0x119a Func
	var_188_bool = var_186_bool; // 0x119c Push
	if(var_188_bool == 0) goto Label_4514; // 0x119d JumpB
	lshPlaySpeech(var_184_string); // 0x119e Func
	var_183_bool = 1; // 0x11a0 MovB
	return 2; // 0x11a1 Return
	
Label_4514:
	var_183_bool = 0; // 0x11a2 MovB
	return 2; // 0x11a3 Return
}


func_5016(var_492_bool)
{
	var_494_int = 0; var_495_string = ""; // 0x1399 PushV
	var_495_string = "k4q02"; // 0x139a MovS
	func_4550(var_494_int, var_495_string); // 0x139b NEW_2
	var_496_int = 1; // 0x139d PushI
	var_497_bool = var_494_int == var_496_int; // 0x139e Eq
	if(var_497_bool == 0) goto Label_5026; // 0x139f JumpB
	var_492_bool = 1; // 0x13a0 MovB
	return 0; // 0x13a1 Return
	
Label_5026:
	var_492_bool = 0; // 0x13a2 MovB
	return 0; // 0x13a3 Return
}


func_1945(var_2_object, var_900_string)
{
	var_901_bool = 0; // 0x79a PushV
	func_4727(var_901_bool); // 0x79b NEW_2
	var_902_bool = var_901_bool == 0; // 0x79d Not
	if(var_902_bool == 0) goto Label_1952; // 0x79e JumpB
	return 0; // 0x79f Return
	
Label_1952:
	var_903_bool = var_900_string == var_2_object; // 0x7a0 Eq
	if(var_903_bool == 0) goto Label_1955; // 0x7a1 JumpB
	return 0; // 0x7a2 Return
	
Label_1955:
	var_904_string = ""; var_905_bool = 0; // 0x7a3 PushV
	var_904_string = var_900_string; // 0x7a4 Mov
	var_906_string = ""; // 0x7a5 PushS
	var_907_bool = var_900_string == var_906_string; // 0x7a6 Eq
	if(var_907_bool == 0) goto Label_1962; // 0x7a7 JumpB
	var_905_bool = 0; // 0x7a8 MovB
	goto Label_1963; // 0x7a9 Jump
	
Label_1963:
	func_4486(var_904_string, var_905_bool); // 0x7ab NEW_2
	var_2_object = var_900_string; // 0x7ad TMov
	return 0; // 0x7ae Return
	
Label_1962:
	var_905_bool = 1; // 0x7aa MovB
}


func_4516()
{
	var_59_bool = 0; // 0x11a4 PushV
	func_4727(var_59_bool); // 0x11a5 NEW_2
	if(var_59_bool == 0) goto Label_4522; // 0x11a7 JumpB
	lshStopSpeech(); // 0x11a8 Func
	
Label_4522:
	return 0; // 0x11aa Return
}


func_5028(var_498_bool)
{
	var_500_int = 0; var_501_string = ""; // 0x13a5 PushV
	var_501_string = "ook4Maria1"; // 0x13a6 MovS
	func_4550(var_500_int, var_501_string); // 0x13a7 NEW_2
	var_502_int = 0; // 0x13a9 PushI
	var_503_bool = var_500_int == var_502_int; // 0x13aa Eq
	if(var_503_bool == 0) goto Label_5038; // 0x13ab JumpB
	var_498_bool = 1; // 0x13ac MovB
	return 0; // 0x13ad Return
	
Label_5038:
	var_498_bool = 0; // 0x13ae MovB
	return 0; // 0x13af Return
}


func_2980(var_0_object, var_1_object, var_2_object, var_3_string, var_698_object, var_699_object)
{
	var_0_object = var_699_object; // 0xba5 TMov
	var_1_object = var_698_object; // 0xba6 TMov
	var_3_string = 0; // 0xba7 TMovB
	var_704_int = 1; // 0xba8 PushI
	if(var_704_int == 0) goto Label_3059; // 0xba9 JumpB
	var_705_string = ""; // 0xbaa PushV
	var_705_string = "Neutral"; // 0xbab MovS
	func_3089(var_699_object, var_705_string); // 0xbac NEW_2
	var_713_int = 539828; // 0xbae PushI
	SetMessage(var_713_int); // 0xbaf TObjFunc
	ClearReplies(); // 0xbb1 TObjFunc
	var_714_bool = 0; // 0xbb3 PushV
	var_714_bool = 0; // 0xbb4 MovB
	var_715_bool = 0; // 0xbb5 PushV
	var_715_bool = 0; // 0xbb6 MovB
	var_716_bool = 0; var_717_object = Obj(); // 0xbb7 PushV
	var_717_object = var_1_object; // 0xbb8 MovT
	func_5076(var_716_bool, var_717_object); // 0xbb9 NEW_2
	if(var_716_bool == 0) goto Label_3010; // 0xbbb JumpB
	var_726_bool = 0; var_727_object = Obj(); // 0xbbc PushV
	var_727_object = var_1_object; // 0xbbd MovT
	func_5086(var_726_bool, var_727_object); // 0xbbe NEW_2
	if(var_726_bool == 0) goto Label_3010; // 0xbc0 JumpB
	var_715_bool = 1; // 0xbc1 MovB
	
Label_3010:
	if(var_715_bool == 0) goto Label_3017; // 0xbc2 JumpB
	var_740_bool = 0; var_741_object = Obj(); // 0xbc3 PushV
	var_741_object = var_1_object; // 0xbc4 MovT
	func_5106(var_741_object); // 0xbc5 NEW_2
	if(var_740_bool == 0) goto Label_3017; // 0xbc7 JumpB
	var_714_bool = 1; // 0xbc8 MovB
	
Label_3017:
	if(var_714_bool == 0) goto Label_3023; // 0xbc9 JumpB
	var_746_int = 539829; // 0xbca PushI
	var_747_int = 41782; // 0xbcb PushI
	var_748_int = 41781; // 0xbcc PushI
	AddReply(var_746_int, var_747_int, var_748_int); // 0xbcd TObjFunc
	
Label_3023:
	var_749_bool = 0; // 0xbcf PushV
	var_749_bool = 0; // 0xbd0 MovB
	var_750_bool = 0; // 0xbd1 PushV
	var_750_bool = 0; // 0xbd2 MovB
	var_751_bool = 0; var_752_object = Obj(); // 0xbd3 PushV
	var_752_object = var_1_object; // 0xbd4 MovT
	func_5076(var_751_bool, var_752_object); // 0xbd5 NEW_2
	if(var_751_bool == 0) goto Label_3038; // 0xbd7 JumpB
	var_753_bool = 0; var_754_object = Obj(); // 0xbd8 PushV
	var_754_object = var_1_object; // 0xbd9 MovT
	func_5096(var_753_bool, var_754_object); // 0xbda NEW_2
	if(var_753_bool == 0) goto Label_3038; // 0xbdc JumpB
	var_750_bool = 1; // 0xbdd MovB
	
Label_3038:
	if(var_750_bool == 0) goto Label_3045; // 0xbde JumpB
	var_760_bool = 0; var_761_object = Obj(); // 0xbdf PushV
	var_761_object = var_1_object; // 0xbe0 MovT
	func_5118(var_761_object); // 0xbe1 NEW_2
	if(var_760_bool == 0) goto Label_3045; // 0xbe3 JumpB
	var_749_bool = 1; // 0xbe4 MovB
	
Label_3045:
	if(var_749_bool == 0) goto Label_3051; // 0xbe5 JumpB
	var_766_int = 539832; // 0xbe6 PushI
	var_767_int = 41785; // 0xbe7 PushI
	var_768_int = 41784; // 0xbe8 PushI
	AddReply(var_766_int, var_767_int, var_768_int); // 0xbe9 TObjFunc
	
Label_3051:
	var_769_int = 539838; // 0xbeb PushI
	var_770_int = -1; // 0xbec PushI
	var_771_int = 41790; // 0xbed PushI
	AddReply(var_769_int, var_770_int, var_771_int); // 0xbee TObjFunc
	goto Label_3059; // 0xbf0 Jump
	
Label_3059:
	var_772_bool = 0; // 0xbf3 PushV
	func_4727(var_772_bool); // 0xbf4 NEW_2
	if(var_772_bool == 0) goto Label_3074; // 0xbf6 JumpB
	
Label_3063:
	lshWaitForAnimEnd(); // 0xbf7 Func
	var_773_string = var_3_string; // 0xbf9 PushT
	if(var_773_string == 0) goto Label_3068; // 0xbfa JumpB
	goto Label_3073; // 0xbfb Jump
	
Label_3073:
	goto Label_3088; // 0xc01 Jump
	
Label_3088:
	return 0; // 0xc10 Return
	
Label_3068:
	var_774_string = ""; // 0xbfc PushV
	var_774_string = var_2_object; // 0xbfd MovT
	func_4470(var_774_string); // 0xbfe NEW_2
	goto Label_3063; // 0xc00 Jump
	
Label_3074:
	var_775_string = "all"; // 0xc02 PushS
	var_776_string = "idle"; // 0xc03 PushS
	PlayAnimation(var_775_string, var_776_string); // 0xc04 Func
	
Label_3078:
	WaitForAnimEnd(); // 0xc06 Func
	var_777_string = var_3_string; // 0xc08 PushT
	if(var_777_string == 0) goto Label_3083; // 0xc09 JumpB
	goto Label_3088; // 0xc0a Jump
	
Label_3083:
	var_778_string = "all"; // 0xc0b PushS
	var_779_string = "idle"; // 0xc0c PushS
	PlayAnimation(var_778_string, var_779_string); // 0xc0d Func
	goto Label_3078; // 0xc0f Jump
}


func_4523(var_151_object)
{
	var_152_object = Obj(); var_153_object = Obj(); // 0x11ab PushV
	self(var_153_object); // 0x11ac Func
	var_151_object = var_153_object; // 0x11ae Mov
	return 2; // 0x11af Return
}


func_5040(var_650_bool)
{
	var_652_int = 0; var_653_string = ""; // 0x13b1 PushV
	var_653_string = "k7q01"; // 0x13b2 MovS
	func_4550(var_652_int, var_653_string); // 0x13b3 NEW_2
	var_654_int = 6; // 0x13b5 PushI
	var_655_bool = var_652_int == var_654_int; // 0x13b6 Eq
	if(var_655_bool == 0) goto Label_5050; // 0x13b7 JumpB
	var_650_bool = 1; // 0x13b8 MovB
	return 0; // 0x13b9 Return
	
Label_5050:
	var_650_bool = 0; // 0x13ba MovB
	return 0; // 0x13bb Return
}


func_4529(var_115_cvector, var_116_cvector)
{
	var_118_float = 0; var_119_float = 0; // 0x11b1 PushV
	var_120_int = var_116_cvector | var_116_cvector; // 0x11b2 Or
	var_119_float = sqrt(var_120_int); // 0x11b3 Sqrt2
	var_121_float = 0.0; // 0x11b4 PushF
	var_122_bool = var_119_float < var_121_float; // 0x11b5 LT
	if(var_122_bool == 0) goto Label_4537; // 0x11b6 JumpB
	var_115_cvector = CVector(0.0, 0.0, 0.0); // 0x11b7 MovV
	return 2; // 0x11b8 Return
	
Label_4537:
	var_115_cvector = var_116_cvector / var_116_cvector; // 0x11b9 Div2
	return 2; // 0x11ba Return
}


func_2481(var_0_object, var_543_int, var_544_object)
{
	var_546_object = Obj(); var_547_bool = 0; var_548_int = 0; var_549_bool = 0; var_550_object = Obj(); var_551_bool = 0; var_552_int = 0; var_553_bool = 0; // 0x9b1 PushV
	var_0_object = var_544_object; // 0x9b2 TMov
	var_554_bool = 0; var_555_object = Obj(); var_556_float = 0; // 0x9b3 PushV
	var_555_object = var_544_object; // 0x9b4 Mov
	var_556_float = 70.0; // 0x9b5 MovF
	func_4245(var_555_object, var_556_float); // 0x9b6 NEW_2
	var_557_bool = var_554_bool == 0; // 0x9b8 Not
	if(var_557_bool == 0) goto Label_2492; // 0x9b9 JumpB
	var_543_int = -2; // 0x9ba MovI
	return 8; // 0x9bb Return
	
Label_2492:
	CreateDialog(var_550_object); // 0x9bc Func
	var_558_int = 0; // 0x9be PushV
	func_4721(var_558_int); // 0x9bf NEW_2
	SetNPCName(var_558_int); // 0x9c1 ObjFunc
	var_559_int = 0; // 0x9c3 PushV
	func_4719(var_559_int); // 0x9c4 NEW_2
	SetNPCDescription(var_559_int); // 0x9c6 ObjFunc
	var_560_string = ""; // 0x9c8 PushV
	func_4723(var_560_string); // 0x9c9 NEW_2
	SetPhoto(var_560_string); // 0x9cb ObjFunc
	var_561_string = ""; // 0x9cd PushV
	func_4725(var_561_string); // 0x9ce NEW_2
	SetPhoto2(var_561_string); // 0x9d0 ObjFunc
	var_562_int = 0; // 0x9d2 PushV
	func_5364(var_562_int); // 0x9d3 NEW_2
	SetPlayerName(var_562_int); // 0x9d5 ObjFunc
	var_552_int = -1; // 0x9d7 MovI
	IsOverrideActive(var_551_bool); // 0x9d8 Func
	var_563_bool = var_551_bool; // 0x9da Push
	if(var_563_bool == 0) goto Label_2526; // 0x9db JumpB
	var_543_int = -2; // 0x9dc MovI
	return 8; // 0x9dd Return
	
Label_2526:
	DoDialog(var_550_object); // 0x9de Func
	var_564_bool = 0; var_565_object = Obj(); // 0x9e0 PushV
	var_566_object = Obj(); // 0x9e1 PushV
	func_4523(var_566_object); // 0x9e2 NEW_2
	var_565_object = var_566_object; // 0x9e3 Mov
	func_4332(var_564_bool, var_565_object); // 0x9e5 NEW_2
	var_567_object = Obj(); var_568_object = Obj(); // 0x9e7 PushV
	var_567_object = var_544_object; // 0x9e8 Mov
	var_568_object = var_550_object; // 0x9e9 Mov
	TaskCall(15); // 0x9ea TaskCall
	func_2562(var_569_object, var_570_object, var_571_string, var_572_bool, var_567_object, var_568_object); // 0x9eb NEW_2
	TaskReturn(); // 0x9ec TaskReturn
	IsDialogEnd(var_553_bool); // 0x9ee ObjFunc
	
Label_2544:
	var_606_bool = var_553_bool == 0; // 0x9f0 Not
	if(var_606_bool == 0) goto Label_2551; // 0x9f1 JumpB
	sync(); // 0x9f2 Func
	IsDialogEnd(var_553_bool); // 0x9f4 ObjFunc
	goto Label_2544; // 0x9f6 Jump
	
Label_2551:
	var_607_object = Obj(); // 0x9f7 PushV
	var_607_object = var_544_object; // 0x9f8 Mov
	func_4314(); // 0x9f9 NEW_2
	StopDialog(var_550_object); // 0x9fb Func
	GetReturnValue(var_552_int); // 0x9fd ObjFunc
	var_543_int = var_552_int; // 0x9ff Mov
	return 8; // 0xa00 Return
}


func_3515(var_2_object, var_815_string)
{
	var_816_bool = 0; // 0xdbc PushV
	func_4727(var_816_bool); // 0xdbd NEW_2
	var_817_bool = var_816_bool == 0; // 0xdbf Not
	if(var_817_bool == 0) goto Label_3522; // 0xdc0 JumpB
	return 0; // 0xdc1 Return
	
Label_3522:
	var_818_bool = var_815_string == var_2_object; // 0xdc2 Eq
	if(var_818_bool == 0) goto Label_3525; // 0xdc3 JumpB
	return 0; // 0xdc4 Return
	
Label_3525:
	var_819_string = ""; var_820_bool = 0; // 0xdc5 PushV
	var_819_string = var_815_string; // 0xdc6 Mov
	var_821_string = ""; // 0xdc7 PushS
	var_822_bool = var_815_string == var_821_string; // 0xdc8 Eq
	if(var_822_bool == 0) goto Label_3532; // 0xdc9 JumpB
	var_820_bool = 0; // 0xdca MovB
	goto Label_3533; // 0xdcb Jump
	
Label_3533:
	func_4486(var_819_string, var_820_bool); // 0xdcd NEW_2
	var_2_object = var_815_string; // 0xdcf TMov
	return 0; // 0xdd0 Return
	
Label_3532:
	var_820_bool = 1; // 0xdcc MovB
}


func_5052(var_909_bool)
{
	var_911_int = 0; var_912_string = ""; // 0x13bd PushV
	var_912_string = "k10q01"; // 0x13be MovS
	func_4550(var_911_int, var_912_string); // 0x13bf NEW_2
	var_913_int = 1; // 0x13c1 PushI
	var_914_bool = var_911_int == var_913_int; // 0x13c2 Eq
	if(var_914_bool == 0) goto Label_5062; // 0x13c3 JumpB
	var_909_bool = 1; // 0x13c4 MovB
	return 0; // 0x13c5 Return
	
Label_5062:
	var_909_bool = 0; // 0x13c6 MovB
	return 0; // 0x13c7 Return
}


func_4539(var_195_float, var_196_float, var_197_float, var_198_float)
{
	var_199_bool = var_196_float < var_197_float; // 0x11bc LT
	if(var_199_bool == 0) goto Label_4544; // 0x11bd JumpB
	var_195_float = var_197_float; // 0x11be Mov
	return 0; // 0x11bf Return
	
Label_4544:
	var_200_bool = var_196_float > var_198_float; // 0x11c0 GT
	if(var_200_bool == 0) goto Label_4548; // 0x11c1 JumpB
	var_195_float = var_198_float; // 0x11c2 Mov
	return 0; // 0x11c3 Return
	
Label_4548:
	var_195_float = var_196_float; // 0x11c4 Mov
	return 0; // 0x11c5 Return
}


func_452(var_0_object, var_1_object, var_2_object, var_3_string, var_244_object, var_245_object)
{
	var_0_object = var_245_object; // 0x1c5 TMov
	var_1_object = var_244_object; // 0x1c6 TMov
	var_3_string = 0; // 0x1c7 TMovB
	var_250_int = 1; // 0x1c8 PushI
	if(var_250_int == 0) goto Label_480; // 0x1c9 JumpB
	var_251_string = ""; // 0x1ca PushV
	var_251_string = "Neutral"; // 0x1cb MovS
	func_510(var_245_object, var_251_string); // 0x1cc NEW_2
	var_268_int = 525501; // 0x1ce PushI
	SetMessage(var_268_int); // 0x1cf TObjFunc
	ClearReplies(); // 0x1d1 TObjFunc
	var_269_int = 525502; // 0x1d3 PushI
	var_270_int = 27545; // 0x1d4 PushI
	var_271_int = 26858; // 0x1d5 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x1d6 TObjFunc
	var_272_int = 526269; // 0x1d8 PushI
	var_273_int = 27545; // 0x1d9 PushI
	var_274_int = 27544; // 0x1da PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x1db TObjFunc
	goto Label_480; // 0x1dd Jump
	
Label_480:
	var_275_bool = 0; // 0x1e0 PushV
	func_4727(var_275_bool); // 0x1e1 NEW_2
	if(var_275_bool == 0) goto Label_495; // 0x1e3 JumpB
	
Label_484:
	lshWaitForAnimEnd(); // 0x1e4 Func
	var_276_string = var_3_string; // 0x1e6 PushT
	if(var_276_string == 0) goto Label_489; // 0x1e7 JumpB
	goto Label_494; // 0x1e8 Jump
	
Label_494:
	goto Label_509; // 0x1ee Jump
	
Label_509:
	return 0; // 0x1fd Return
	
Label_489:
	var_277_string = ""; // 0x1e9 PushV
	var_277_string = var_2_object; // 0x1ea MovT
	func_4470(var_277_string); // 0x1eb NEW_2
	goto Label_484; // 0x1ed Jump
	
Label_495:
	var_288_string = "all"; // 0x1ef PushS
	var_289_string = "idle"; // 0x1f0 PushS
	PlayAnimation(var_288_string, var_289_string); // 0x1f1 Func
	
Label_499:
	WaitForAnimEnd(); // 0x1f3 Func
	var_290_string = var_3_string; // 0x1f5 PushT
	if(var_290_string == 0) goto Label_504; // 0x1f6 JumpB
	goto Label_509; // 0x1f7 Jump
	
Label_504:
	var_291_string = "all"; // 0x1f8 PushS
	var_292_string = "idle"; // 0x1f9 PushS
	PlayAnimation(var_291_string, var_292_string); // 0x1fa Func
	goto Label_499; // 0x1fc Jump
}


func_4550(var_339_int, var_340_string)
{
	var_341_int = 0; var_342_int = 0; // 0x11c6 PushV
	GetVariable(var_340_string, var_342_int); // 0x11c7 Func
	var_339_int = var_342_int; // 0x11c9 Mov
	return 2; // 0x11ca Return
}


func_5064(var_583_bool)
{
	var_585_int = 0; var_586_string = ""; // 0x13c9 PushV
	var_586_string = "k5q04"; // 0x13ca MovS
	func_4550(var_585_int, var_586_string); // 0x13cb NEW_2
	var_587_int = 1; // 0x13cd PushI
	var_588_bool = var_585_int == var_587_int; // 0x13ce Eq
	if(var_588_bool == 0) goto Label_5074; // 0x13cf JumpB
	var_583_bool = 1; // 0x13d0 MovB
	return 0; // 0x13d1 Return
	
Label_5074:
	var_583_bool = 0; // 0x13d2 MovB
	return 0; // 0x13d3 Return
}


func_1482(var_0_object, var_1_object, var_2_object, var_3_string, var_634_object, var_635_object)
{
	var_0_object = var_635_object; // 0x5cb TMov
	var_1_object = var_634_object; // 0x5cc TMov
	var_3_string = 0; // 0x5cd TMovB
	var_640_int = 1; // 0x5ce PushI
	if(var_640_int == 0) goto Label_1515; // 0x5cf JumpB
	var_641_string = ""; // 0x5d0 PushV
	var_641_string = "Neutral"; // 0x5d1 MovS
	func_1545(var_635_object, var_641_string); // 0x5d2 NEW_2
	var_649_int = 526192; // 0x5d4 PushI
	SetMessage(var_649_int); // 0x5d5 TObjFunc
	ClearReplies(); // 0x5d7 TObjFunc
	var_650_bool = 0; var_651_object = Obj(); // 0x5d9 PushV
	var_651_object = var_1_object; // 0x5da MovT
	func_5040(var_651_object); // 0x5db NEW_2
	if(var_650_bool == 0) goto Label_1507; // 0x5dd JumpB
	var_656_int = 526193; // 0x5de PushI
	var_657_int = 30159; // 0x5df PushI
	var_658_int = 27474; // 0x5e0 PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0x5e1 TObjFunc
	
Label_1507:
	var_659_int = 526196; // 0x5e3 PushI
	var_660_int = -1; // 0x5e4 PushI
	var_661_int = 27477; // 0x5e5 PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x5e6 TObjFunc
	goto Label_1515; // 0x5e8 Jump
	
Label_1515:
	var_662_bool = 0; // 0x5eb PushV
	func_4727(var_662_bool); // 0x5ec NEW_2
	if(var_662_bool == 0) goto Label_1530; // 0x5ee JumpB
	
Label_1519:
	lshWaitForAnimEnd(); // 0x5ef Func
	var_663_string = var_3_string; // 0x5f1 PushT
	if(var_663_string == 0) goto Label_1524; // 0x5f2 JumpB
	goto Label_1529; // 0x5f3 Jump
	
Label_1529:
	goto Label_1544; // 0x5f9 Jump
	
Label_1544:
	return 0; // 0x608 Return
	
Label_1524:
	var_664_string = ""; // 0x5f4 PushV
	var_664_string = var_2_object; // 0x5f5 MovT
	func_4470(var_664_string); // 0x5f6 NEW_2
	goto Label_1519; // 0x5f8 Jump
	
Label_1530:
	var_665_string = "all"; // 0x5fa PushS
	var_666_string = "idle"; // 0x5fb PushS
	PlayAnimation(var_665_string, var_666_string); // 0x5fc Func
	
Label_1534:
	WaitForAnimEnd(); // 0x5fe Func
	var_667_string = var_3_string; // 0x600 PushT
	if(var_667_string == 0) goto Label_1539; // 0x601 JumpB
	goto Label_1544; // 0x602 Jump
	
Label_1539:
	var_668_string = "all"; // 0x603 PushS
	var_669_string = "idle"; // 0x604 PushS
	PlayAnimation(var_668_string, var_669_string); // 0x605 Func
	goto Label_1534; // 0x607 Jump
}


func_4555(var_118_int, var_119_int)
{
	var_120_object = Obj(); var_121_object = Obj(); // 0x11cb PushV
	CreateIntVector(var_121_object); // 0x11cc Func
	add(var_118_int); // 0x11ce ObjFunc
	add(var_119_int); // 0x11d0 ObjFunc
	var_122_int = 3; // 0x11d2 PushI
	SendWorldWndMessage(var_122_int, var_121_object); // 0x11d3 Func
	return 2; // 0x11d5 Return
}


func_5076(var_716_bool, var_717_object)
{
	var_718_bool = 0; var_719_object = Obj(); // 0x13d5 PushV
	var_719_object = var_717_object; // 0x13d6 Mov
	func_5190(var_719_object); // 0x13d7 NEW_2
	if(var_718_bool == 0) goto Label_5084; // 0x13d9 JumpB
	var_716_bool = 1; // 0x13da MovB
	return 0; // 0x13db Return
	
Label_5084:
	var_716_bool = 0; // 0x13dc MovB
	return 0; // 0x13dd Return
}


func_4567(var_104_object, var_105_int)
{
	var_107_int = 0; var_108_int = 0; // 0x11d7 PushV
	var_109_object = Obj(); var_110_string = ""; var_111_int = 0; // 0x11d8 PushV
	var_109_object = var_104_object; // 0x11d9 Mov
	var_110_string = "money"; // 0x11da MovS
	var_111_int = var_105_int; // 0x11db Mov
	func_4214(var_110_string, var_111_int); // 0x11dc NEW_2
	var_115_int = 0; // 0x11de PushI
	var_116_bool = var_105_int > var_115_int; // 0x11df GT
	if(var_116_bool == 0) goto Label_4585; // 0x11e0 JumpB
	var_117_string = "Money"; // 0x11e1 PushS
	GetInvItemByName(var_108_int, var_117_string); // 0x11e2 Func
	var_118_int = 0; var_119_int = 0; // 0x11e4 PushV
	var_118_int = var_108_int; // 0x11e5 Mov
	var_119_int = var_105_int; // 0x11e6 Mov
	func_4555(var_118_int, var_119_int); // 0x11e7 NEW_2
	
Label_4585:
	return 2; // 0x11e9 Return
}


func_5086(var_726_bool, var_727_object)
{
	var_728_bool = 0; var_729_object = Obj(); // 0x13df PushV
	var_729_object = var_727_object; // 0x13e0 Mov
	func_5196(var_729_object); // 0x13e1 NEW_2
	if(var_728_bool == 0) goto Label_5094; // 0x13e3 JumpB
	var_726_bool = 1; // 0x13e4 MovB
	return 0; // 0x13e5 Return
	
Label_5094:
	var_726_bool = 0; // 0x13e6 MovB
	return 0; // 0x13e7 Return
}


func_5096(var_753_bool, var_754_object)
{
	var_755_bool = 0; var_756_object = Obj(); // 0x13e9 PushV
	var_756_object = var_754_object; // 0x13ea Mov
	func_5202(var_756_object); // 0x13eb NEW_2
	if(var_755_bool == 0) goto Label_5104; // 0x13ed JumpB
	var_753_bool = 1; // 0x13ee MovB
	return 0; // 0x13ef Return
	
Label_5104:
	var_753_bool = 0; // 0x13f0 MovB
	return 0; // 0x13f1 Return
}


func_4586(var_136_object, var_137_int)
{
	var_138_int = 0; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; // 0x11ea PushV
	GetItemID(var_141_int); // 0x11eb ObjFunc
	var_144_string = "Category"; // 0x11ed PushS
	GetInvItemProperty(var_142_int, var_141_int, var_144_string); // 0x11ee Func
	AddItem(var_143_bool, var_136_object, var_142_int, var_137_int); // 0x11f0 ObjFunc
	var_145_bool = var_143_bool == 0; // 0x11f2 Not
	if(var_145_bool == 0) goto Label_4599; // 0x11f3 JumpB
	DropItems(var_136_object, var_137_int); // 0x11f4 ObjFunc
	goto Label_4604; // 0x11f6 Jump
	
Label_4604:
	return 6; // 0x11fc Return
	
Label_4599:
	var_146_int = 0; var_147_int = 0; // 0x11f7 PushV
	var_146_int = var_141_int; // 0x11f8 Mov
	var_147_int = var_137_int; // 0x11f9 Mov
	func_4555(var_146_int, var_147_int); // 0x11fa NEW_2
}


func_5106(var_740_bool)
{
	var_742_int = 0; var_743_string = ""; // 0x13f3 PushV
	var_743_string = "ook8Maria1"; // 0x13f4 MovS
	func_4550(var_742_int, var_743_string); // 0x13f5 NEW_2
	var_744_int = 0; // 0x13f7 PushI
	var_745_bool = var_742_int == var_744_int; // 0x13f8 Eq
	if(var_745_bool == 0) goto Label_5116; // 0x13f9 JumpB
	var_740_bool = 1; // 0x13fa MovB
	return 0; // 0x13fb Return
	
Label_5116:
	var_740_bool = 0; // 0x13fc MovB
	return 0; // 0x13fd Return
}


func_4605(var_130_object, var_131_string, var_132_int)
{
	var_133_object = Obj(); var_134_object = Obj(); // 0x11fd PushV
	CreateInvItem(var_134_object); // 0x11fe Func
	SetItemName(var_131_string); // 0x1200 ObjFunc
	var_135_object = Obj(); var_136_object = Obj(); var_137_int = 0; // 0x1202 PushV
	var_135_object = var_130_object; // 0x1203 Mov
	var_136_object = var_134_object; // 0x1204 Mov
	var_137_int = var_132_int; // 0x1205 Mov
	func_4586(var_136_object, var_137_int); // 0x1206 NEW_2
	return 2; // 0x1208 Return
}


func_510(var_2_object, var_251_string)
{
	var_252_bool = 0; // 0x1ff PushV
	func_4727(var_252_bool); // 0x200 NEW_2
	var_253_bool = var_252_bool == 0; // 0x202 Not
	if(var_253_bool == 0) goto Label_517; // 0x203 JumpB
	return 0; // 0x204 Return
	
Label_517:
	var_254_bool = var_251_string == var_2_object; // 0x205 Eq
	if(var_254_bool == 0) goto Label_520; // 0x206 JumpB
	return 0; // 0x207 Return
	
Label_520:
	var_255_string = ""; var_256_bool = 0; // 0x208 PushV
	var_255_string = var_251_string; // 0x209 Mov
	var_257_string = ""; // 0x20a PushS
	var_258_bool = var_251_string == var_257_string; // 0x20b Eq
	if(var_258_bool == 0) goto Label_527; // 0x20c JumpB
	var_256_bool = 0; // 0x20d MovB
	goto Label_528; // 0x20e Jump
	
Label_528:
	func_4486(var_255_string, var_256_bool); // 0x210 NEW_2
	var_2_object = var_251_string; // 0x212 TMov
	return 0; // 0x213 Return
	
Label_527:
	var_256_bool = 1; // 0x20f MovB
}


