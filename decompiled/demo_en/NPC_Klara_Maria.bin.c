task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xbb PushI
	if(var_58_int == 0) goto Label_370; // 0xbc JumpB
	func_4425(); // 0xbe NEW_2
	var_60_int = 26084; // 0xc0 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xc1 Eq
	if(var_61_bool == 0) goto Label_200; // 0xc2 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xc3 PushV
	var_62_object = var_1_object; // 0xc4 MovT
	var_63_object = var_0_object; // 0xc5 MovT
	func_4671(); // 0xc6 NEW_2
	
Label_200:
	var_89_int = 26083; // 0xc8 PushI
	var_90_bool = var_56_bool == var_89_int; // 0xc9 Eq
	if(var_90_bool == 0) goto Label_248; // 0xca JumpB
	var_91_bool = 0; var_92_object = Obj(); // 0xcb PushV
	var_92_object = var_1_object; // 0xcc MovT
	func_4883(var_92_object); // 0xcd NEW_2
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
	func_4636(var_178_bool); // 0x168 NEW_2
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
	func_4425(); // 0x218 NEW_2
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
	func_4636(var_96_bool); // 0x24a NEW_2
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
	var_58_int = 1; // 0x305 PushI
	if(var_58_int == 0) goto Label_959; // 0x306 JumpB
	func_4425(); // 0x308 NEW_2
	var_60_int = 26955; // 0x30a PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x30b Eq
	if(var_61_bool == 0) goto Label_786; // 0x30c JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x30d PushV
	var_62_object = var_1_object; // 0x30e MovT
	var_63_object = var_0_object; // 0x30f MovT
	func_4680(); // 0x310 NEW_2
	
Label_786:
	var_66_int = 26959; // 0x312 PushI
	var_67_bool = var_57_cvector == var_66_int; // 0x313 Eq
	if(var_67_bool == 0) goto Label_794; // 0x314 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0x315 PushV
	var_68_object = var_1_object; // 0x316 MovT
	var_69_object = var_0_object; // 0x317 MovT
	func_4836(var_69_object); // 0x318 NEW_2
	
Label_794:
	var_108_int = 42741; // 0x31a PushI
	var_109_bool = var_57_cvector == var_108_int; // 0x31b Eq
	if(var_109_bool == 0) goto Label_802; // 0x31c JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x31d PushV
	var_110_object = var_1_object; // 0x31e MovT
	var_111_object = var_0_object; // 0x31f MovT
	func_4836(var_111_object); // 0x320 NEW_2
	
Label_802:
	var_112_int = 26954; // 0x322 PushI
	var_113_bool = var_56_bool == var_112_int; // 0x323 Eq
	if(var_113_bool == 0) goto Label_839; // 0x324 JumpB
	var_114_string = ""; // 0x325 PushV
	var_114_string = "Neutral"; // 0x326 MovS
	func_750(var_57_cvector, var_114_string); // 0x327 NEW_2
	var_131_int = 525607; // 0x329 PushI
	SetMessage(var_131_int); // 0x32a TObjFunc
	ClearReplies(); // 0x32c TObjFunc
	var_132_bool = 0; // 0x32e PushV
	var_132_bool = 0; // 0x32f MovB
	var_133_bool = 0; var_134_object = Obj(); // 0x330 PushV
	var_134_object = var_1_object; // 0x331 MovT
	func_4895(var_134_object); // 0x332 NEW_2
	if(var_133_bool == 0) goto Label_827; // 0x334 JumpB
	var_141_bool = 0; var_142_object = Obj(); // 0x335 PushV
	var_142_object = var_1_object; // 0x336 MovT
	func_4907(var_142_object); // 0x337 NEW_2
	if(var_141_bool == 0) goto Label_827; // 0x339 JumpB
	var_132_bool = 1; // 0x33a MovB
	
Label_827:
	if(var_132_bool == 0) goto Label_833; // 0x33b JumpB
	var_147_int = 525608; // 0x33c PushI
	var_148_int = 26956; // 0x33d PushI
	var_149_int = 26955; // 0x33e PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x33f TObjFunc
	
Label_833:
	var_150_int = 525613; // 0x341 PushI
	var_151_int = -1; // 0x342 PushI
	var_152_int = 26960; // 0x343 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x344 TObjFunc
	return 0; // 0x346 Return
	
Label_839:
	var_153_int = 42737; // 0x347 PushI
	var_154_bool = var_56_bool == var_153_int; // 0x348 Eq
	if(var_154_bool == 0) goto Label_842; // 0x349 JumpB
	
Label_842:
	var_155_int = 42740; // 0x34a PushI
	var_156_bool = var_56_bool == var_155_int; // 0x34b Eq
	if(var_156_bool == 0) goto Label_865; // 0x34c JumpB
	var_157_string = ""; // 0x34d PushV
	var_157_string = "Neutral"; // 0x34e MovS
	func_750(var_57_cvector, var_157_string); // 0x34f NEW_2
	var_158_int = 540704; // 0x351 PushI
	SetMessage(var_158_int); // 0x352 TObjFunc
	ClearReplies(); // 0x354 TObjFunc
	var_159_int = 540706; // 0x356 PushI
	var_160_int = 42744; // 0x357 PushI
	var_161_int = 42742; // 0x358 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x359 TObjFunc
	var_162_int = 540707; // 0x35b PushI
	var_163_int = -1; // 0x35c PushI
	var_164_int = 42743; // 0x35d PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x35e TObjFunc
	return 0; // 0x360 Return
	
Label_865:
	var_165_int = 42744; // 0x361 PushI
	var_166_bool = var_56_bool == var_165_int; // 0x362 Eq
	if(var_166_bool == 0) goto Label_888; // 0x363 JumpB
	var_167_string = ""; // 0x364 PushV
	var_167_string = "Angry"; // 0x365 MovS
	func_750(var_57_cvector, var_167_string); // 0x366 NEW_2
	var_168_int = 540708; // 0x368 PushI
	SetMessage(var_168_int); // 0x369 TObjFunc
	ClearReplies(); // 0x36b TObjFunc
	var_169_int = 540709; // 0x36d PushI
	var_170_int = -1; // 0x36e PushI
	var_171_int = 42745; // 0x36f PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x370 TObjFunc
	var_172_int = 540710; // 0x372 PushI
	var_173_int = -1; // 0x373 PushI
	var_174_int = 42746; // 0x374 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x375 TObjFunc
	return 0; // 0x377 Return
	
Label_888:
	var_175_int = 26956; // 0x378 PushI
	var_176_bool = var_56_bool == var_175_int; // 0x379 Eq
	if(var_176_bool == 0) goto Label_911; // 0x37a JumpB
	var_177_string = ""; // 0x37b PushV
	var_177_string = "Mysterious"; // 0x37c MovS
	func_750(var_57_cvector, var_177_string); // 0x37d NEW_2
	var_178_int = 525609; // 0x37f PushI
	SetMessage(var_178_int); // 0x380 TObjFunc
	ClearReplies(); // 0x382 TObjFunc
	var_179_int = 525610; // 0x384 PushI
	var_180_int = 26958; // 0x385 PushI
	var_181_int = 26957; // 0x386 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x387 TObjFunc
	var_182_int = 540705; // 0x389 PushI
	var_183_int = -1; // 0x38a PushI
	var_184_int = 42741; // 0x38b PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x38c TObjFunc
	return 0; // 0x38e Return
	
Label_911:
	var_185_int = 26958; // 0x38f PushI
	var_186_bool = var_56_bool == var_185_int; // 0x390 Eq
	if(var_186_bool == 0) goto Label_929; // 0x391 JumpB
	var_187_string = ""; // 0x392 PushV
	var_187_string = "Mysterious"; // 0x393 MovS
	func_750(var_57_cvector, var_187_string); // 0x394 NEW_2
	var_188_int = 525611; // 0x396 PushI
	SetMessage(var_188_int); // 0x397 TObjFunc
	ClearReplies(); // 0x399 TObjFunc
	var_189_int = 529340; // 0x39b PushI
	var_190_int = 30796; // 0x39c PushI
	var_191_int = 30795; // 0x39d PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x39e TObjFunc
	return 0; // 0x3a0 Return
	
Label_929:
	var_192_int = 30796; // 0x3a1 PushI
	var_193_bool = var_56_bool == var_192_int; // 0x3a2 Eq
	if(var_193_bool == 0) goto Label_947; // 0x3a3 JumpB
	var_194_string = ""; // 0x3a4 PushV
	var_194_string = "Rage"; // 0x3a5 MovS
	func_750(var_57_cvector, var_194_string); // 0x3a6 NEW_2
	var_195_int = 529341; // 0x3a8 PushI
	SetMessage(var_195_int); // 0x3a9 TObjFunc
	ClearReplies(); // 0x3ab TObjFunc
	var_196_int = 525612; // 0x3ad PushI
	var_197_int = -1; // 0x3ae PushI
	var_198_int = 26959; // 0x3af PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x3b0 TObjFunc
	return 0; // 0x3b2 Return
	
Label_947:
	var_3_string = 1; // 0x3b3 TMovB
	var_199_bool = 0; // 0x3b4 PushV
	func_4636(var_199_bool); // 0x3b5 NEW_2
	if(var_199_bool == 0) goto Label_955; // 0x3b7 JumpB
	lshStopAnimation(); // 0x3b8 Func
	goto Label_957; // 0x3ba Jump
	
Label_957:
	return 0; // 0x3bd Return
	
Label_955:
	StopAnimation(); // 0x3bb Func
	
Label_959:
	return 0; // 0x3bf Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x489 PushI
	if(var_58_int == 0) goto Label_1336; // 0x48a JumpB
	func_4425(); // 0x48c NEW_2
	var_60_int = 27069; // 0x48e PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x48f Eq
	if(var_61_bool == 0) goto Label_1174; // 0x490 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x491 PushV
	var_62_object = var_1_object; // 0x492 MovT
	var_63_object = var_0_object; // 0x493 MovT
	func_4829(var_63_object); // 0x494 NEW_2
	
Label_1174:
	var_102_int = 27070; // 0x496 PushI
	var_103_bool = var_57_cvector == var_102_int; // 0x497 Eq
	if(var_103_bool == 0) goto Label_1182; // 0x498 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x499 PushV
	var_104_object = var_1_object; // 0x49a MovT
	var_105_object = var_0_object; // 0x49b MovT
	func_4843(var_105_object); // 0x49c NEW_2
	
Label_1182:
	var_109_int = 42750; // 0x49e PushI
	var_110_bool = var_57_cvector == var_109_int; // 0x49f Eq
	if(var_110_bool == 0) goto Label_1190; // 0x4a0 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x4a1 PushV
	var_111_object = var_1_object; // 0x4a2 MovT
	var_112_object = var_0_object; // 0x4a3 MovT
	func_4843(var_112_object); // 0x4a4 NEW_2
	
Label_1190:
	var_113_int = 42753; // 0x4a6 PushI
	var_114_bool = var_57_cvector == var_113_int; // 0x4a7 Eq
	if(var_114_bool == 0) goto Label_1198; // 0x4a8 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x4a9 PushV
	var_115_object = var_1_object; // 0x4aa MovT
	var_116_object = var_0_object; // 0x4ab MovT
	func_4836(var_116_object); // 0x4ac NEW_2
	
Label_1198:
	var_120_int = 27068; // 0x4ae PushI
	var_121_bool = var_56_bool == var_120_int; // 0x4af Eq
	if(var_121_bool == 0) goto Label_1260; // 0x4b0 JumpB
	var_122_bool = 0; // 0x4b1 PushV
	var_122_bool = 0; // 0x4b2 MovB
	var_123_bool = 0; var_124_object = Obj(); // 0x4b3 PushV
	var_124_object = var_1_object; // 0x4b4 MovT
	func_4919(var_124_object); // 0x4b5 NEW_2
	if(var_123_bool == 0) goto Label_1214; // 0x4b7 JumpB
	var_131_bool = 0; var_132_object = Obj(); // 0x4b8 PushV
	var_132_object = var_1_object; // 0x4b9 MovT
	func_4931(var_132_object); // 0x4ba NEW_2
	if(var_131_bool == 0) goto Label_1214; // 0x4bc JumpB
	var_122_bool = 1; // 0x4bd MovB
	
Label_1214:
	if(var_122_bool == 0) goto Label_1240; // 0x4be JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x4bf PushV
	var_137_object = var_1_object; // 0x4c0 MovT
	var_138_object = var_0_object; // 0x4c1 MovT
	func_4686(); // 0x4c2 NEW_2
	var_141_string = ""; // 0x4c4 PushV
	var_141_string = "Neutral"; // 0x4c5 MovS
	func_1138(var_57_cvector, var_141_string); // 0x4c6 NEW_2
	var_158_int = 525756; // 0x4c8 PushI
	SetMessage(var_158_int); // 0x4c9 TObjFunc
	ClearReplies(); // 0x4cb TObjFunc
	var_159_int = 540712; // 0x4cd PushI
	var_160_int = 42749; // 0x4ce PushI
	var_161_int = 42748; // 0x4cf PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x4d0 TObjFunc
	var_162_int = 540717; // 0x4d2 PushI
	var_163_int = -1; // 0x4d3 PushI
	var_164_int = 42753; // 0x4d4 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x4d5 TObjFunc
	return 0; // 0x4d7 Return
	
Label_1240:
	var_165_string = ""; // 0x4d8 PushV
	var_165_string = "Neutral"; // 0x4d9 MovS
	func_1138(var_57_cvector, var_165_string); // 0x4da NEW_2
	var_166_int = 525759; // 0x4dc PushI
	SetMessage(var_166_int); // 0x4dd TObjFunc
	ClearReplies(); // 0x4df TObjFunc
	var_167_int = 525760; // 0x4e1 PushI
	var_168_int = -1; // 0x4e2 PushI
	var_169_int = 27072; // 0x4e3 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x4e4 TObjFunc
	var_170_int = 540711; // 0x4e6 PushI
	var_171_int = -1; // 0x4e7 PushI
	var_172_int = 42747; // 0x4e8 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x4e9 TObjFunc
	return 0; // 0x4eb Return
	
Label_1260:
	var_173_int = 42749; // 0x4ec PushI
	var_174_bool = var_56_bool == var_173_int; // 0x4ed Eq
	if(var_174_bool == 0) goto Label_1283; // 0x4ee JumpB
	var_175_string = ""; // 0x4ef PushV
	var_175_string = "Neutral"; // 0x4f0 MovS
	func_1138(var_57_cvector, var_175_string); // 0x4f1 NEW_2
	var_176_int = 540713; // 0x4f3 PushI
	SetMessage(var_176_int); // 0x4f4 TObjFunc
	ClearReplies(); // 0x4f6 TObjFunc
	var_177_int = 529233; // 0x4f8 PushI
	var_178_int = 30688; // 0x4f9 PushI
	var_179_int = 30687; // 0x4fa PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x4fb TObjFunc
	var_180_int = 540714; // 0x4fd PushI
	var_181_int = -1; // 0x4fe PushI
	var_182_int = 42750; // 0x4ff PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x500 TObjFunc
	return 0; // 0x502 Return
	
Label_1283:
	var_183_int = 30688; // 0x503 PushI
	var_184_bool = var_56_bool == var_183_int; // 0x504 Eq
	if(var_184_bool == 0) goto Label_1301; // 0x505 JumpB
	var_185_string = ""; // 0x506 PushV
	var_185_string = "Neutral"; // 0x507 MovS
	func_1138(var_57_cvector, var_185_string); // 0x508 NEW_2
	var_186_int = 529234; // 0x50a PushI
	SetMessage(var_186_int); // 0x50b TObjFunc
	ClearReplies(); // 0x50d TObjFunc
	var_187_int = 540715; // 0x50f PushI
	var_188_int = 42752; // 0x510 PushI
	var_189_int = 42751; // 0x511 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x512 TObjFunc
	return 0; // 0x514 Return
	
Label_1301:
	var_190_int = 42752; // 0x515 PushI
	var_191_bool = var_56_bool == var_190_int; // 0x516 Eq
	if(var_191_bool == 0) goto Label_1324; // 0x517 JumpB
	var_192_string = ""; // 0x518 PushV
	var_192_string = "Staring"; // 0x519 MovS
	func_1138(var_57_cvector, var_192_string); // 0x51a NEW_2
	var_193_int = 540716; // 0x51c PushI
	SetMessage(var_193_int); // 0x51d TObjFunc
	ClearReplies(); // 0x51f TObjFunc
	var_194_int = 525757; // 0x521 PushI
	var_195_int = -1; // 0x522 PushI
	var_196_int = 27069; // 0x523 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x524 TObjFunc
	var_197_int = 525758; // 0x526 PushI
	var_198_int = -1; // 0x527 PushI
	var_199_int = 27070; // 0x528 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x529 TObjFunc
	return 0; // 0x52b Return
	
Label_1324:
	var_3_string = 1; // 0x52c TMovB
	var_200_bool = 0; // 0x52d PushV
	func_4636(var_200_bool); // 0x52e NEW_2
	if(var_200_bool == 0) goto Label_1332; // 0x530 JumpB
	lshStopAnimation(); // 0x531 Func
	goto Label_1334; // 0x533 Jump
	
Label_1334:
	return 0; // 0x536 Return
	
Label_1332:
	StopAnimation(); // 0x534 Func
	
Label_1336:
	return 0; // 0x538 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x5e0 PushI
	if(var_58_int == 0) goto Label_1675; // 0x5e1 JumpB
	func_4425(); // 0x5e3 NEW_2
	var_60_int = 27476; // 0x5e5 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x5e6 Eq
	if(var_61_bool == 0) goto Label_1517; // 0x5e7 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x5e8 PushV
	var_62_object = var_1_object; // 0x5e9 MovT
	var_63_object = var_0_object; // 0x5ea MovT
	func_4692(); // 0x5eb NEW_2
	
Label_1517:
	var_89_int = 27473; // 0x5ed PushI
	var_90_bool = var_56_bool == var_89_int; // 0x5ee Eq
	if(var_90_bool == 0) goto Label_1545; // 0x5ef JumpB
	var_91_string = ""; // 0x5f0 PushV
	var_91_string = "Neutral"; // 0x5f1 MovS
	func_1481(var_57_cvector, var_91_string); // 0x5f2 NEW_2
	var_108_int = 526192; // 0x5f4 PushI
	SetMessage(var_108_int); // 0x5f5 TObjFunc
	ClearReplies(); // 0x5f7 TObjFunc
	var_109_bool = 0; var_110_object = Obj(); // 0x5f9 PushV
	var_110_object = var_1_object; // 0x5fa MovT
	func_4943(var_110_object); // 0x5fb NEW_2
	if(var_109_bool == 0) goto Label_1539; // 0x5fd JumpB
	var_117_int = 526193; // 0x5fe PushI
	var_118_int = 30159; // 0x5ff PushI
	var_119_int = 27474; // 0x600 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x601 TObjFunc
	
Label_1539:
	var_120_int = 526196; // 0x603 PushI
	var_121_int = -1; // 0x604 PushI
	var_122_int = 27477; // 0x605 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x606 TObjFunc
	return 0; // 0x608 Return
	
Label_1545:
	var_123_int = 30159; // 0x609 PushI
	var_124_bool = var_56_bool == var_123_int; // 0x60a Eq
	if(var_124_bool == 0) goto Label_1568; // 0x60b JumpB
	var_125_string = ""; // 0x60c PushV
	var_125_string = "Neutral"; // 0x60d MovS
	func_1481(var_57_cvector, var_125_string); // 0x60e NEW_2
	var_126_int = 528735; // 0x610 PushI
	SetMessage(var_126_int); // 0x611 TObjFunc
	ClearReplies(); // 0x613 TObjFunc
	var_127_int = 528736; // 0x615 PushI
	var_128_int = 30161; // 0x616 PushI
	var_129_int = 30160; // 0x617 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x618 TObjFunc
	var_130_int = 528745; // 0x61a PushI
	var_131_int = 30163; // 0x61b PushI
	var_132_int = 30169; // 0x61c PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x61d TObjFunc
	return 0; // 0x61f Return
	
Label_1568:
	var_133_int = 30161; // 0x620 PushI
	var_134_bool = var_56_bool == var_133_int; // 0x621 Eq
	if(var_134_bool == 0) goto Label_1586; // 0x622 JumpB
	var_135_string = ""; // 0x623 PushV
	var_135_string = "Neutral"; // 0x624 MovS
	func_1481(var_57_cvector, var_135_string); // 0x625 NEW_2
	var_136_int = 528737; // 0x627 PushI
	SetMessage(var_136_int); // 0x628 TObjFunc
	ClearReplies(); // 0x62a TObjFunc
	var_137_int = 528738; // 0x62c PushI
	var_138_int = 30163; // 0x62d PushI
	var_139_int = 30162; // 0x62e PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x62f TObjFunc
	return 0; // 0x631 Return
	
Label_1586:
	var_140_int = 30163; // 0x632 PushI
	var_141_bool = var_56_bool == var_140_int; // 0x633 Eq
	if(var_141_bool == 0) goto Label_1604; // 0x634 JumpB
	var_142_string = ""; // 0x635 PushV
	var_142_string = "Neutral"; // 0x636 MovS
	func_1481(var_57_cvector, var_142_string); // 0x637 NEW_2
	var_143_int = 528739; // 0x639 PushI
	SetMessage(var_143_int); // 0x63a TObjFunc
	ClearReplies(); // 0x63c TObjFunc
	var_144_int = 528740; // 0x63e PushI
	var_145_int = 30165; // 0x63f PushI
	var_146_int = 30164; // 0x640 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x641 TObjFunc
	return 0; // 0x643 Return
	
Label_1604:
	var_147_int = 30165; // 0x644 PushI
	var_148_bool = var_56_bool == var_147_int; // 0x645 Eq
	if(var_148_bool == 0) goto Label_1622; // 0x646 JumpB
	var_149_string = ""; // 0x647 PushV
	var_149_string = "Mysterious"; // 0x648 MovS
	func_1481(var_57_cvector, var_149_string); // 0x649 NEW_2
	var_150_int = 528741; // 0x64b PushI
	SetMessage(var_150_int); // 0x64c TObjFunc
	ClearReplies(); // 0x64e TObjFunc
	var_151_int = 528742; // 0x650 PushI
	var_152_int = 30167; // 0x651 PushI
	var_153_int = 30166; // 0x652 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x653 TObjFunc
	return 0; // 0x655 Return
	
Label_1622:
	var_154_int = 30167; // 0x656 PushI
	var_155_bool = var_56_bool == var_154_int; // 0x657 Eq
	if(var_155_bool == 0) goto Label_1645; // 0x658 JumpB
	var_156_string = ""; // 0x659 PushV
	var_156_string = "Mysterious"; // 0x65a MovS
	func_1481(var_57_cvector, var_156_string); // 0x65b NEW_2
	var_157_int = 528743; // 0x65d PushI
	SetMessage(var_157_int); // 0x65e TObjFunc
	ClearReplies(); // 0x660 TObjFunc
	var_158_int = 528744; // 0x662 PushI
	var_159_int = 27475; // 0x663 PushI
	var_160_int = 30168; // 0x664 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x665 TObjFunc
	var_161_int = 528746; // 0x667 PushI
	var_162_int = 27475; // 0x668 PushI
	var_163_int = 30171; // 0x669 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x66a TObjFunc
	return 0; // 0x66c Return
	
Label_1645:
	var_164_int = 27475; // 0x66d PushI
	var_165_bool = var_56_bool == var_164_int; // 0x66e Eq
	if(var_165_bool == 0) goto Label_1663; // 0x66f JumpB
	var_166_string = ""; // 0x670 PushV
	var_166_string = "Neutral"; // 0x671 MovS
	func_1481(var_57_cvector, var_166_string); // 0x672 NEW_2
	var_167_int = 526194; // 0x674 PushI
	SetMessage(var_167_int); // 0x675 TObjFunc
	ClearReplies(); // 0x677 TObjFunc
	var_168_int = 526195; // 0x679 PushI
	var_169_int = -1; // 0x67a PushI
	var_170_int = 27476; // 0x67b PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x67c TObjFunc
	return 0; // 0x67e Return
	
Label_1663:
	var_3_string = 1; // 0x67f TMovB
	var_171_bool = 0; // 0x680 PushV
	func_4636(var_171_bool); // 0x681 NEW_2
	if(var_171_bool == 0) goto Label_1671; // 0x683 JumpB
	lshStopAnimation(); // 0x684 Func
	goto Label_1673; // 0x686 Jump
	
Label_1673:
	return 0; // 0x689 Return
	
Label_1671:
	StopAnimation(); // 0x687 Func
	
Label_1675:
	return 0; // 0x68b Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x770 PushI
	if(var_58_int == 0) goto Label_2157; // 0x771 JumpB
	func_4425(); // 0x773 NEW_2
	var_60_int = 28242; // 0x775 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x776 Eq
	if(var_61_bool == 0) goto Label_1917; // 0x777 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x778 PushV
	var_62_object = var_1_object; // 0x779 MovT
	var_63_object = var_0_object; // 0x77a MovT
	func_4701(); // 0x77b NEW_2
	
Label_1917:
	var_95_int = 41804; // 0x77d PushI
	var_96_bool = var_57_cvector == var_95_int; // 0x77e Eq
	if(var_96_bool == 0) goto Label_1925; // 0x77f JumpB
	var_97_object = Obj(); var_98_object = Obj(); // 0x780 PushV
	var_97_object = var_1_object; // 0x781 MovT
	var_98_object = var_0_object; // 0x782 MovT
	func_4784(); // 0x783 NEW_2
	
Label_1925:
	var_101_int = 41807; // 0x785 PushI
	var_102_bool = var_57_cvector == var_101_int; // 0x786 Eq
	if(var_102_bool == 0) goto Label_1933; // 0x787 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x788 PushV
	var_103_object = var_1_object; // 0x789 MovT
	var_104_object = var_0_object; // 0x78a MovT
	func_4790(); // 0x78b NEW_2
	
Label_1933:
	var_107_int = 41809; // 0x78d PushI
	var_108_bool = var_57_cvector == var_107_int; // 0x78e Eq
	if(var_108_bool == 0) goto Label_1956; // 0x78f JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x790 PushV
	var_109_object = var_1_object; // 0x791 MovT
	var_110_object = var_0_object; // 0x792 MovT
	func_4755(); // 0x793 NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0x795 PushV
	var_119_object = var_1_object; // 0x796 MovT
	var_120_object = var_0_object; // 0x797 MovT
	func_4818(var_120_object); // 0x798 NEW_2
	var_143_object = Obj(); var_144_object = Obj(); // 0x79a PushV
	var_143_object = var_1_object; // 0x79b MovT
	var_144_object = var_0_object; // 0x79c MovT
	func_4715(); // 0x79d NEW_2
	var_147_object = Obj(); var_148_object = Obj(); // 0x79f PushV
	var_147_object = var_1_object; // 0x7a0 MovT
	var_148_object = var_0_object; // 0x7a1 MovT
	func_4721(var_148_object); // 0x7a2 NEW_2
	
Label_1956:
	var_168_int = 28239; // 0x7a4 PushI
	var_169_bool = var_56_bool == var_168_int; // 0x7a5 Eq
	if(var_169_bool == 0) goto Label_2045; // 0x7a6 JumpB
	var_170_string = ""; // 0x7a7 PushV
	var_170_string = "Mysterious"; // 0x7a8 MovS
	func_1881(var_57_cvector, var_170_string); // 0x7a9 NEW_2
	var_187_int = 526947; // 0x7ab PushI
	SetMessage(var_187_int); // 0x7ac TObjFunc
	ClearReplies(); // 0x7ae TObjFunc
	var_188_bool = 0; var_189_object = Obj(); // 0x7b0 PushV
	var_189_object = var_1_object; // 0x7b1 MovT
	func_4955(var_189_object); // 0x7b2 NEW_2
	if(var_188_bool == 0) goto Label_1978; // 0x7b4 JumpB
	var_196_int = 526948; // 0x7b5 PushI
	var_197_int = 28241; // 0x7b6 PushI
	var_198_int = 28240; // 0x7b7 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x7b8 TObjFunc
	
Label_1978:
	var_199_bool = 0; // 0x7ba PushV
	var_199_bool = 0; // 0x7bb MovB
	var_200_bool = 0; // 0x7bc PushV
	var_200_bool = 0; // 0x7bd MovB
	var_201_bool = 0; var_202_object = Obj(); // 0x7be PushV
	var_202_object = var_1_object; // 0x7bf MovT
	func_4979(var_201_bool, var_202_object); // 0x7c0 NEW_2
	if(var_201_bool == 0) goto Label_1993; // 0x7c2 JumpB
	var_216_bool = 0; var_217_object = Obj(); // 0x7c3 PushV
	var_217_object = var_1_object; // 0x7c4 MovT
	func_4989(var_216_bool, var_217_object); // 0x7c5 NEW_2
	if(var_216_bool == 0) goto Label_1993; // 0x7c7 JumpB
	var_200_bool = 1; // 0x7c8 MovB
	
Label_1993:
	if(var_200_bool == 0) goto Label_2000; // 0x7c9 JumpB
	var_230_bool = 0; var_231_object = Obj(); // 0x7ca PushV
	var_231_object = var_1_object; // 0x7cb MovT
	func_5057(var_231_object); // 0x7cc NEW_2
	if(var_230_bool == 0) goto Label_2000; // 0x7ce JumpB
	var_199_bool = 1; // 0x7cf MovB
	
Label_2000:
	if(var_199_bool == 0) goto Label_2006; // 0x7d0 JumpB
	var_236_int = 539852; // 0x7d1 PushI
	var_237_int = 41805; // 0x7d2 PushI
	var_238_int = 41804; // 0x7d3 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x7d4 TObjFunc
	
Label_2006:
	var_239_bool = 0; // 0x7d6 PushV
	var_239_bool = 0; // 0x7d7 MovB
	var_240_bool = 0; // 0x7d8 PushV
	var_240_bool = 0; // 0x7d9 MovB
	var_241_bool = 0; var_242_object = Obj(); // 0x7da PushV
	var_242_object = var_1_object; // 0x7db MovT
	func_4979(var_241_bool, var_242_object); // 0x7dc NEW_2
	if(var_241_bool == 0) goto Label_2021; // 0x7de JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0x7df PushV
	var_244_object = var_1_object; // 0x7e0 MovT
	func_4999(var_243_bool, var_244_object); // 0x7e1 NEW_2
	if(var_243_bool == 0) goto Label_2021; // 0x7e3 JumpB
	var_240_bool = 1; // 0x7e4 MovB
	
Label_2021:
	if(var_240_bool == 0) goto Label_2028; // 0x7e5 JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0x7e6 PushV
	var_251_object = var_1_object; // 0x7e7 MovT
	func_5069(var_251_object); // 0x7e8 NEW_2
	if(var_250_bool == 0) goto Label_2028; // 0x7ea JumpB
	var_239_bool = 1; // 0x7eb MovB
	
Label_2028:
	if(var_239_bool == 0) goto Label_2034; // 0x7ec JumpB
	var_256_int = 539855; // 0x7ed PushI
	var_257_int = 41808; // 0x7ee PushI
	var_258_int = 41807; // 0x7ef PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x7f0 TObjFunc
	
Label_2034:
	var_259_int = 526951; // 0x7f2 PushI
	var_260_int = -1; // 0x7f3 PushI
	var_261_int = 28243; // 0x7f4 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x7f5 TObjFunc
	var_262_int = 528006; // 0x7f7 PushI
	var_263_int = -1; // 0x7f8 PushI
	var_264_int = 29366; // 0x7f9 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x7fa TObjFunc
	return 0; // 0x7fc Return
	
Label_2045:
	var_265_int = 41808; // 0x7fd PushI
	var_266_bool = var_56_bool == var_265_int; // 0x7fe Eq
	if(var_266_bool == 0) goto Label_2063; // 0x7ff JumpB
	var_267_string = ""; // 0x800 PushV
	var_267_string = "Neutral"; // 0x801 MovS
	func_1881(var_57_cvector, var_267_string); // 0x802 NEW_2
	var_268_int = 539856; // 0x804 PushI
	SetMessage(var_268_int); // 0x805 TObjFunc
	ClearReplies(); // 0x807 TObjFunc
	var_269_int = 539857; // 0x809 PushI
	var_270_int = -1; // 0x80a PushI
	var_271_int = 41809; // 0x80b PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x80c TObjFunc
	return 0; // 0x80e Return
	
Label_2063:
	var_272_int = 41805; // 0x80f PushI
	var_273_bool = var_56_bool == var_272_int; // 0x810 Eq
	if(var_273_bool == 0) goto Label_2081; // 0x811 JumpB
	var_274_string = ""; // 0x812 PushV
	var_274_string = "Angry"; // 0x813 MovS
	func_1881(var_57_cvector, var_274_string); // 0x814 NEW_2
	var_275_int = 539853; // 0x816 PushI
	SetMessage(var_275_int); // 0x817 TObjFunc
	ClearReplies(); // 0x819 TObjFunc
	var_276_int = 539854; // 0x81b PushI
	var_277_int = -1; // 0x81c PushI
	var_278_int = 41806; // 0x81d PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x81e TObjFunc
	return 0; // 0x820 Return
	
Label_2081:
	var_279_int = 28241; // 0x821 PushI
	var_280_bool = var_56_bool == var_279_int; // 0x822 Eq
	if(var_280_bool == 0) goto Label_2104; // 0x823 JumpB
	var_281_string = ""; // 0x824 PushV
	var_281_string = "Rage"; // 0x825 MovS
	func_1881(var_57_cvector, var_281_string); // 0x826 NEW_2
	var_282_int = 526949; // 0x828 PushI
	SetMessage(var_282_int); // 0x829 TObjFunc
	ClearReplies(); // 0x82b TObjFunc
	var_283_int = 528007; // 0x82d PushI
	var_284_int = 29368; // 0x82e PushI
	var_285_int = 29367; // 0x82f PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x830 TObjFunc
	var_286_int = 528011; // 0x832 PushI
	var_287_int = 29368; // 0x833 PushI
	var_288_int = 29371; // 0x834 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x835 TObjFunc
	return 0; // 0x837 Return
	
Label_2104:
	var_289_int = 29368; // 0x838 PushI
	var_290_bool = var_56_bool == var_289_int; // 0x839 Eq
	if(var_290_bool == 0) goto Label_2127; // 0x83a JumpB
	var_291_string = ""; // 0x83b PushV
	var_291_string = "Rage"; // 0x83c MovS
	func_1881(var_57_cvector, var_291_string); // 0x83d NEW_2
	var_292_int = 528008; // 0x83f PushI
	SetMessage(var_292_int); // 0x840 TObjFunc
	ClearReplies(); // 0x842 TObjFunc
	var_293_int = 528009; // 0x844 PushI
	var_294_int = 29370; // 0x845 PushI
	var_295_int = 29369; // 0x846 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x847 TObjFunc
	var_296_int = 528012; // 0x849 PushI
	var_297_int = 29370; // 0x84a PushI
	var_298_int = 29373; // 0x84b PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x84c TObjFunc
	return 0; // 0x84e Return
	
Label_2127:
	var_299_int = 29370; // 0x84f PushI
	var_300_bool = var_56_bool == var_299_int; // 0x850 Eq
	if(var_300_bool == 0) goto Label_2145; // 0x851 JumpB
	var_301_string = ""; // 0x852 PushV
	var_301_string = "Angry"; // 0x853 MovS
	func_1881(var_57_cvector, var_301_string); // 0x854 NEW_2
	var_302_int = 528010; // 0x856 PushI
	SetMessage(var_302_int); // 0x857 TObjFunc
	ClearReplies(); // 0x859 TObjFunc
	var_303_int = 526950; // 0x85b PushI
	var_304_int = -1; // 0x85c PushI
	var_305_int = 28242; // 0x85d PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x85e TObjFunc
	return 0; // 0x860 Return
	
Label_2145:
	var_3_string = 1; // 0x861 TMovB
	var_306_bool = 0; // 0x862 PushV
	func_4636(var_306_bool); // 0x863 NEW_2
	if(var_306_bool == 0) goto Label_2153; // 0x865 JumpB
	lshStopAnimation(); // 0x866 Func
	goto Label_2155; // 0x868 Jump
	
Label_2155:
	return 0; // 0x86b Return
	
Label_2153:
	StopAnimation(); // 0x869 Func
	
Label_2157:
	return 0; // 0x86d Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x915 PushI
	if(var_58_int == 0) goto Label_2416; // 0x916 JumpB
	func_4425(); // 0x918 NEW_2
	var_60_int = 36906; // 0x91a PushI
	var_61_bool = var_56_bool == var_60_int; // 0x91b Eq
	if(var_61_bool == 0) goto Label_2358; // 0x91c JumpB
	var_62_string = ""; // 0x91d PushV
	var_62_string = "Neutral"; // 0x91e MovS
	func_2302(var_57_cvector, var_62_string); // 0x91f NEW_2
	var_79_int = 535231; // 0x921 PushI
	SetMessage(var_79_int); // 0x922 TObjFunc
	ClearReplies(); // 0x924 TObjFunc
	var_80_int = 535232; // 0x926 PushI
	var_81_int = 36953; // 0x927 PushI
	var_82_int = 36907; // 0x928 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x929 TObjFunc
	var_83_int = 535233; // 0x92b PushI
	var_84_int = -1; // 0x92c PushI
	var_85_int = 36908; // 0x92d PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x92e TObjFunc
	var_86_int = 535280; // 0x930 PushI
	var_87_int = -1; // 0x931 PushI
	var_88_int = 36956; // 0x932 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x933 TObjFunc
	return 0; // 0x935 Return
	
Label_2358:
	var_89_int = 36953; // 0x936 PushI
	var_90_bool = var_56_bool == var_89_int; // 0x937 Eq
	if(var_90_bool == 0) goto Label_2381; // 0x938 JumpB
	var_91_string = ""; // 0x939 PushV
	var_91_string = "Neutral"; // 0x93a MovS
	func_2302(var_57_cvector, var_91_string); // 0x93b NEW_2
	var_92_int = 535277; // 0x93d PushI
	SetMessage(var_92_int); // 0x93e TObjFunc
	ClearReplies(); // 0x940 TObjFunc
	var_93_int = 535278; // 0x942 PushI
	var_94_int = 36957; // 0x943 PushI
	var_95_int = 36954; // 0x944 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x945 TObjFunc
	var_96_int = 535279; // 0x947 PushI
	var_97_int = 36957; // 0x948 PushI
	var_98_int = 36955; // 0x949 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x94a TObjFunc
	return 0; // 0x94c Return
	
Label_2381:
	var_99_int = 36957; // 0x94d PushI
	var_100_bool = var_56_bool == var_99_int; // 0x94e Eq
	if(var_100_bool == 0) goto Label_2404; // 0x94f JumpB
	var_101_string = ""; // 0x950 PushV
	var_101_string = "Neutral"; // 0x951 MovS
	func_2302(var_57_cvector, var_101_string); // 0x952 NEW_2
	var_102_int = 535281; // 0x954 PushI
	SetMessage(var_102_int); // 0x955 TObjFunc
	ClearReplies(); // 0x957 TObjFunc
	var_103_int = 535282; // 0x959 PushI
	var_104_int = -1; // 0x95a PushI
	var_105_int = 36958; // 0x95b PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x95c TObjFunc
	var_106_int = 535283; // 0x95e PushI
	var_107_int = -1; // 0x95f PushI
	var_108_int = 36959; // 0x960 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x961 TObjFunc
	return 0; // 0x963 Return
	
Label_2404:
	var_3_string = 1; // 0x964 TMovB
	var_109_bool = 0; // 0x965 PushV
	func_4636(var_109_bool); // 0x966 NEW_2
	if(var_109_bool == 0) goto Label_2412; // 0x968 JumpB
	lshStopAnimation(); // 0x969 Func
	goto Label_2414; // 0x96b Jump
	
Label_2414:
	return 0; // 0x96e Return
	
Label_2412:
	StopAnimation(); // 0x96c Func
	
Label_2416:
	return 0; // 0x970 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xa1d PushI
	if(var_58_int == 0) goto Label_2809; // 0xa1e JumpB
	func_4425(); // 0xa20 NEW_2
	var_60_int = 41363; // 0xa22 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xa23 Eq
	if(var_61_bool == 0) goto Label_2607; // 0xa24 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xa25 PushV
	var_62_object = var_1_object; // 0xa26 MovT
	var_63_object = var_0_object; // 0xa27 MovT
	func_4732(); // 0xa28 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0xa2a PushV
	var_105_object = var_1_object; // 0xa2b MovT
	var_106_object = var_0_object; // 0xa2c MovT
	func_4638(); // 0xa2d NEW_2
	
Label_2607:
	var_131_int = 42772; // 0xa2f PushI
	var_132_bool = var_57_cvector == var_131_int; // 0xa30 Eq
	if(var_132_bool == 0) goto Label_2630; // 0xa31 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0xa32 PushV
	var_133_object = var_1_object; // 0xa33 MovT
	var_134_object = var_0_object; // 0xa34 MovT
	func_4732(); // 0xa35 NEW_2
	var_135_object = Obj(); var_136_object = Obj(); // 0xa37 PushV
	var_135_object = var_1_object; // 0xa38 MovT
	var_136_object = var_0_object; // 0xa39 MovT
	func_4638(); // 0xa3a NEW_2
	var_137_object = Obj(); var_138_object = Obj(); // 0xa3c PushV
	var_137_object = var_1_object; // 0xa3d MovT
	var_138_object = var_0_object; // 0xa3e MovT
	func_4654(var_138_object); // 0xa3f NEW_2
	var_158_object = Obj(); var_159_object = Obj(); // 0xa41 PushV
	var_158_object = var_1_object; // 0xa42 MovT
	var_159_object = var_0_object; // 0xa43 MovT
	func_4715(); // 0xa44 NEW_2
	
Label_2630:
	var_162_int = 42754; // 0xa46 PushI
	var_163_bool = var_57_cvector == var_162_int; // 0xa47 Eq
	if(var_163_bool == 0) goto Label_2638; // 0xa48 JumpB
	var_164_object = Obj(); var_165_object = Obj(); // 0xa49 PushV
	var_164_object = var_1_object; // 0xa4a MovT
	var_165_object = var_0_object; // 0xa4b MovT
	func_4664(var_165_object); // 0xa4c NEW_2
	
Label_2638:
	var_204_int = 41356; // 0xa4e PushI
	var_205_bool = var_56_bool == var_204_int; // 0xa4f Eq
	if(var_205_bool == 0) goto Label_2671; // 0xa50 JumpB
	var_206_string = ""; // 0xa51 PushV
	var_206_string = "Neutral"; // 0xa52 MovS
	func_2566(var_57_cvector, var_206_string); // 0xa53 NEW_2
	var_223_int = 539425; // 0xa55 PushI
	SetMessage(var_223_int); // 0xa56 TObjFunc
	ClearReplies(); // 0xa58 TObjFunc
	var_224_bool = 0; var_225_object = Obj(); // 0xa5a PushV
	var_225_object = var_1_object; // 0xa5b MovT
	func_4967(var_225_object); // 0xa5c NEW_2
	if(var_224_bool == 0) goto Label_2660; // 0xa5e JumpB
	var_232_int = 539426; // 0xa5f PushI
	var_233_int = 42755; // 0xa60 PushI
	var_234_int = 41357; // 0xa61 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xa62 TObjFunc
	
Label_2660:
	var_235_int = 539433; // 0xa64 PushI
	var_236_int = -1; // 0xa65 PushI
	var_237_int = 41364; // 0xa66 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0xa67 TObjFunc
	var_238_int = 540718; // 0xa69 PushI
	var_239_int = -1; // 0xa6a PushI
	var_240_int = 42754; // 0xa6b PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xa6c TObjFunc
	return 0; // 0xa6e Return
	
Label_2671:
	var_241_int = 42755; // 0xa6f PushI
	var_242_bool = var_56_bool == var_241_int; // 0xa70 Eq
	if(var_242_bool == 0) goto Label_2689; // 0xa71 JumpB
	var_243_string = ""; // 0xa72 PushV
	var_243_string = "Angry"; // 0xa73 MovS
	func_2566(var_57_cvector, var_243_string); // 0xa74 NEW_2
	var_244_int = 540719; // 0xa76 PushI
	SetMessage(var_244_int); // 0xa77 TObjFunc
	ClearReplies(); // 0xa79 TObjFunc
	var_245_int = 540720; // 0xa7b PushI
	var_246_int = 41358; // 0xa7c PushI
	var_247_int = 42756; // 0xa7d PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xa7e TObjFunc
	return 0; // 0xa80 Return
	
Label_2689:
	var_248_int = 42760; // 0xa81 PushI
	var_249_bool = var_56_bool == var_248_int; // 0xa82 Eq
	if(var_249_bool == 0) goto Label_2692; // 0xa83 JumpB
	
Label_2692:
	var_250_int = 42763; // 0xa84 PushI
	var_251_bool = var_56_bool == var_250_int; // 0xa85 Eq
	if(var_251_bool == 0) goto Label_2715; // 0xa86 JumpB
	var_252_string = ""; // 0xa87 PushV
	var_252_string = "Angry"; // 0xa88 MovS
	func_2566(var_57_cvector, var_252_string); // 0xa89 NEW_2
	var_253_int = 540727; // 0xa8b PushI
	SetMessage(var_253_int); // 0xa8c TObjFunc
	ClearReplies(); // 0xa8e TObjFunc
	var_254_int = 540728; // 0xa90 PushI
	var_255_int = 41360; // 0xa91 PushI
	var_256_int = 42764; // 0xa92 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0xa93 TObjFunc
	var_257_int = 540729; // 0xa95 PushI
	var_258_int = 41360; // 0xa96 PushI
	var_259_int = 42765; // 0xa97 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0xa98 TObjFunc
	return 0; // 0xa9a Return
	
Label_2715:
	var_260_int = 41358; // 0xa9b PushI
	var_261_bool = var_56_bool == var_260_int; // 0xa9c Eq
	if(var_261_bool == 0) goto Label_2733; // 0xa9d JumpB
	var_262_string = ""; // 0xa9e PushV
	var_262_string = "Mysterious"; // 0xa9f MovS
	func_2566(var_57_cvector, var_262_string); // 0xaa0 NEW_2
	var_263_int = 539427; // 0xaa2 PushI
	SetMessage(var_263_int); // 0xaa3 TObjFunc
	ClearReplies(); // 0xaa5 TObjFunc
	var_264_int = 539428; // 0xaa7 PushI
	var_265_int = 41360; // 0xaa8 PushI
	var_266_int = 41359; // 0xaa9 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0xaaa TObjFunc
	return 0; // 0xaac Return
	
Label_2733:
	var_267_int = 41360; // 0xaad PushI
	var_268_bool = var_56_bool == var_267_int; // 0xaae Eq
	if(var_268_bool == 0) goto Label_2756; // 0xaaf JumpB
	var_269_string = ""; // 0xab0 PushV
	var_269_string = "Neutral"; // 0xab1 MovS
	func_2566(var_57_cvector, var_269_string); // 0xab2 NEW_2
	var_270_int = 539429; // 0xab4 PushI
	SetMessage(var_270_int); // 0xab5 TObjFunc
	ClearReplies(); // 0xab7 TObjFunc
	var_271_int = 539430; // 0xab9 PushI
	var_272_int = 41362; // 0xaba PushI
	var_273_int = 41361; // 0xabb PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0xabc TObjFunc
	var_274_int = 540730; // 0xabe PushI
	var_275_int = 41362; // 0xabf PushI
	var_276_int = 42767; // 0xac0 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0xac1 TObjFunc
	return 0; // 0xac3 Return
	
Label_2756:
	var_277_int = 41362; // 0xac4 PushI
	var_278_bool = var_56_bool == var_277_int; // 0xac5 Eq
	if(var_278_bool == 0) goto Label_2779; // 0xac6 JumpB
	var_279_string = ""; // 0xac7 PushV
	var_279_string = "Neutral"; // 0xac8 MovS
	func_2566(var_57_cvector, var_279_string); // 0xac9 NEW_2
	var_280_int = 539431; // 0xacb PushI
	SetMessage(var_280_int); // 0xacc TObjFunc
	ClearReplies(); // 0xace TObjFunc
	var_281_int = 539432; // 0xad0 PushI
	var_282_int = -1; // 0xad1 PushI
	var_283_int = 41363; // 0xad2 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0xad3 TObjFunc
	var_284_int = 540731; // 0xad5 PushI
	var_285_int = 42771; // 0xad6 PushI
	var_286_int = 42768; // 0xad7 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0xad8 TObjFunc
	return 0; // 0xada Return
	
Label_2779:
	var_287_int = 42771; // 0xadb PushI
	var_288_bool = var_56_bool == var_287_int; // 0xadc Eq
	if(var_288_bool == 0) goto Label_2797; // 0xadd JumpB
	var_289_string = ""; // 0xade PushV
	var_289_string = "Neutral"; // 0xadf MovS
	func_2566(var_57_cvector, var_289_string); // 0xae0 NEW_2
	var_290_int = 540734; // 0xae2 PushI
	SetMessage(var_290_int); // 0xae3 TObjFunc
	ClearReplies(); // 0xae5 TObjFunc
	var_291_int = 540735; // 0xae7 PushI
	var_292_int = -1; // 0xae8 PushI
	var_293_int = 42772; // 0xae9 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0xaea TObjFunc
	return 0; // 0xaec Return
	
Label_2797:
	var_3_string = 1; // 0xaed TMovB
	var_294_bool = 0; // 0xaee PushV
	func_4636(var_294_bool); // 0xaef NEW_2
	if(var_294_bool == 0) goto Label_2805; // 0xaf1 JumpB
	lshStopAnimation(); // 0xaf2 Func
	goto Label_2807; // 0xaf4 Jump
	
Label_2807:
	return 0; // 0xaf7 Return
	
Label_2805:
	StopAnimation(); // 0xaf5 Func
	
Label_2809:
	return 0; // 0xaf9 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xbcf PushI
	if(var_58_int == 0) goto Label_3235; // 0xbd0 JumpB
	func_4425(); // 0xbd2 NEW_2
	var_60_int = 41781; // 0xbd4 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xbd5 Eq
	if(var_61_bool == 0) goto Label_3036; // 0xbd6 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xbd7 PushV
	var_62_object = var_1_object; // 0xbd8 MovT
	var_63_object = var_0_object; // 0xbd9 MovT
	func_4760(); // 0xbda NEW_2
	
Label_3036:
	var_66_int = 41784; // 0xbdc PushI
	var_67_bool = var_57_cvector == var_66_int; // 0xbdd Eq
	if(var_67_bool == 0) goto Label_3044; // 0xbde JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xbdf PushV
	var_68_object = var_1_object; // 0xbe0 MovT
	var_69_object = var_0_object; // 0xbe1 MovT
	func_4766(); // 0xbe2 NEW_2
	
Label_3044:
	var_72_int = 41786; // 0xbe4 PushI
	var_73_bool = var_57_cvector == var_72_int; // 0xbe5 Eq
	if(var_73_bool == 0) goto Label_3062; // 0xbe6 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xbe7 PushV
	var_74_object = var_1_object; // 0xbe8 MovT
	var_75_object = var_0_object; // 0xbe9 MovT
	func_4755(); // 0xbea NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0xbec PushV
	var_99_object = var_1_object; // 0xbed MovT
	var_100_object = var_0_object; // 0xbee MovT
	func_4796(var_100_object); // 0xbef NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0xbf1 PushV
	var_123_object = var_1_object; // 0xbf2 MovT
	var_124_object = var_0_object; // 0xbf3 MovT
	func_4850(var_124_object); // 0xbf4 NEW_2
	
Label_3062:
	var_144_int = 41780; // 0xbf6 PushI
	var_145_bool = var_56_bool == var_144_int; // 0xbf7 Eq
	if(var_145_bool == 0) goto Label_3136; // 0xbf8 JumpB
	var_146_string = ""; // 0xbf9 PushV
	var_146_string = "Neutral"; // 0xbfa MovS
	func_3000(var_57_cvector, var_146_string); // 0xbfb NEW_2
	var_163_int = 539828; // 0xbfd PushI
	SetMessage(var_163_int); // 0xbfe TObjFunc
	ClearReplies(); // 0xc00 TObjFunc
	var_164_bool = 0; // 0xc02 PushV
	var_164_bool = 0; // 0xc03 MovB
	var_165_bool = 0; // 0xc04 PushV
	var_165_bool = 0; // 0xc05 MovB
	var_166_bool = 0; var_167_object = Obj(); // 0xc06 PushV
	var_167_object = var_1_object; // 0xc07 MovT
	func_4979(var_166_bool, var_167_object); // 0xc08 NEW_2
	if(var_166_bool == 0) goto Label_3089; // 0xc0a JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0xc0b PushV
	var_182_object = var_1_object; // 0xc0c MovT
	func_4989(var_181_bool, var_182_object); // 0xc0d NEW_2
	if(var_181_bool == 0) goto Label_3089; // 0xc0f JumpB
	var_165_bool = 1; // 0xc10 MovB
	
Label_3089:
	if(var_165_bool == 0) goto Label_3096; // 0xc11 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0xc12 PushV
	var_196_object = var_1_object; // 0xc13 MovT
	func_5009(var_196_object); // 0xc14 NEW_2
	if(var_195_bool == 0) goto Label_3096; // 0xc16 JumpB
	var_164_bool = 1; // 0xc17 MovB
	
Label_3096:
	if(var_164_bool == 0) goto Label_3102; // 0xc18 JumpB
	var_203_int = 539829; // 0xc19 PushI
	var_204_int = 41782; // 0xc1a PushI
	var_205_int = 41781; // 0xc1b PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0xc1c TObjFunc
	
Label_3102:
	var_206_bool = 0; // 0xc1e PushV
	var_206_bool = 0; // 0xc1f MovB
	var_207_bool = 0; // 0xc20 PushV
	var_207_bool = 0; // 0xc21 MovB
	var_208_bool = 0; var_209_object = Obj(); // 0xc22 PushV
	var_209_object = var_1_object; // 0xc23 MovT
	func_4979(var_208_bool, var_209_object); // 0xc24 NEW_2
	if(var_208_bool == 0) goto Label_3117; // 0xc26 JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0xc27 PushV
	var_211_object = var_1_object; // 0xc28 MovT
	func_4999(var_210_bool, var_211_object); // 0xc29 NEW_2
	if(var_210_bool == 0) goto Label_3117; // 0xc2b JumpB
	var_207_bool = 1; // 0xc2c MovB
	
Label_3117:
	if(var_207_bool == 0) goto Label_3124; // 0xc2d JumpB
	var_217_bool = 0; var_218_object = Obj(); // 0xc2e PushV
	var_218_object = var_1_object; // 0xc2f MovT
	func_5021(var_218_object); // 0xc30 NEW_2
	if(var_217_bool == 0) goto Label_3124; // 0xc32 JumpB
	var_206_bool = 1; // 0xc33 MovB
	
Label_3124:
	if(var_206_bool == 0) goto Label_3130; // 0xc34 JumpB
	var_223_int = 539832; // 0xc35 PushI
	var_224_int = 41785; // 0xc36 PushI
	var_225_int = 41784; // 0xc37 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xc38 TObjFunc
	
Label_3130:
	var_226_int = 539838; // 0xc3a PushI
	var_227_int = -1; // 0xc3b PushI
	var_228_int = 41790; // 0xc3c PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xc3d TObjFunc
	return 0; // 0xc3f Return
	
Label_3136:
	var_229_int = 41785; // 0xc40 PushI
	var_230_bool = var_56_bool == var_229_int; // 0xc41 Eq
	if(var_230_bool == 0) goto Label_3159; // 0xc42 JumpB
	var_231_string = ""; // 0xc43 PushV
	var_231_string = "Neutral"; // 0xc44 MovS
	func_3000(var_57_cvector, var_231_string); // 0xc45 NEW_2
	var_232_int = 539833; // 0xc47 PushI
	SetMessage(var_232_int); // 0xc48 TObjFunc
	ClearReplies(); // 0xc4a TObjFunc
	var_233_int = 542518; // 0xc4c PushI
	var_234_int = 44912; // 0xc4d PushI
	var_235_int = 44911; // 0xc4e PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xc4f TObjFunc
	var_236_int = 542520; // 0xc51 PushI
	var_237_int = 44912; // 0xc52 PushI
	var_238_int = 44913; // 0xc53 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xc54 TObjFunc
	return 0; // 0xc56 Return
	
Label_3159:
	var_239_int = 44912; // 0xc57 PushI
	var_240_bool = var_56_bool == var_239_int; // 0xc58 Eq
	if(var_240_bool == 0) goto Label_3177; // 0xc59 JumpB
	var_241_string = ""; // 0xc5a PushV
	var_241_string = "Mysterious"; // 0xc5b MovS
	func_3000(var_57_cvector, var_241_string); // 0xc5c NEW_2
	var_242_int = 542519; // 0xc5e PushI
	SetMessage(var_242_int); // 0xc5f TObjFunc
	ClearReplies(); // 0xc61 TObjFunc
	var_243_int = 539834; // 0xc63 PushI
	var_244_int = -1; // 0xc64 PushI
	var_245_int = 41786; // 0xc65 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xc66 TObjFunc
	return 0; // 0xc68 Return
	
Label_3177:
	var_246_int = 41782; // 0xc69 PushI
	var_247_bool = var_56_bool == var_246_int; // 0xc6a Eq
	if(var_247_bool == 0) goto Label_3200; // 0xc6b JumpB
	var_248_string = ""; // 0xc6c PushV
	var_248_string = "Neutral"; // 0xc6d MovS
	func_3000(var_57_cvector, var_248_string); // 0xc6e NEW_2
	var_249_int = 539830; // 0xc70 PushI
	SetMessage(var_249_int); // 0xc71 TObjFunc
	ClearReplies(); // 0xc73 TObjFunc
	var_250_int = 542521; // 0xc75 PushI
	var_251_int = 44916; // 0xc76 PushI
	var_252_int = 44915; // 0xc77 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0xc78 TObjFunc
	var_253_int = 542524; // 0xc7a PushI
	var_254_int = -1; // 0xc7b PushI
	var_255_int = 44918; // 0xc7c PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xc7d TObjFunc
	return 0; // 0xc7f Return
	
Label_3200:
	var_256_int = 44916; // 0xc80 PushI
	var_257_bool = var_56_bool == var_256_int; // 0xc81 Eq
	if(var_257_bool == 0) goto Label_3223; // 0xc82 JumpB
	var_258_string = ""; // 0xc83 PushV
	var_258_string = "Mysterious"; // 0xc84 MovS
	func_3000(var_57_cvector, var_258_string); // 0xc85 NEW_2
	var_259_int = 542522; // 0xc87 PushI
	SetMessage(var_259_int); // 0xc88 TObjFunc
	ClearReplies(); // 0xc8a TObjFunc
	var_260_int = 539831; // 0xc8c PushI
	var_261_int = -1; // 0xc8d PushI
	var_262_int = 41783; // 0xc8e PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0xc8f TObjFunc
	var_263_int = 542523; // 0xc91 PushI
	var_264_int = -1; // 0xc92 PushI
	var_265_int = 44917; // 0xc93 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xc94 TObjFunc
	return 0; // 0xc96 Return
	
Label_3223:
	var_3_string = 1; // 0xc97 TMovB
	var_266_bool = 0; // 0xc98 PushV
	func_4636(var_266_bool); // 0xc99 NEW_2
	if(var_266_bool == 0) goto Label_3231; // 0xc9b JumpB
	lshStopAnimation(); // 0xc9c Func
	goto Label_3233; // 0xc9e Jump
	
Label_3233:
	return 0; // 0xca1 Return
	
Label_3231:
	StopAnimation(); // 0xc9f Func
	
Label_3235:
	return 0; // 0xca3 Return
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xd79 PushI
	if(var_58_int == 0) goto Label_3620; // 0xd7a JumpB
	func_4425(); // 0xd7c NEW_2
	var_60_int = 41793; // 0xd7e PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xd7f Eq
	if(var_61_bool == 0) goto Label_3462; // 0xd80 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xd81 PushV
	var_62_object = var_1_object; // 0xd82 MovT
	var_63_object = var_0_object; // 0xd83 MovT
	func_4772(); // 0xd84 NEW_2
	
Label_3462:
	var_66_int = 41796; // 0xd86 PushI
	var_67_bool = var_57_cvector == var_66_int; // 0xd87 Eq
	if(var_67_bool == 0) goto Label_3470; // 0xd88 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0xd89 PushV
	var_68_object = var_1_object; // 0xd8a MovT
	var_69_object = var_0_object; // 0xd8b MovT
	func_4778(); // 0xd8c NEW_2
	
Label_3470:
	var_72_int = 41798; // 0xd8e PushI
	var_73_bool = var_57_cvector == var_72_int; // 0xd8f Eq
	if(var_73_bool == 0) goto Label_3498; // 0xd90 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xd91 PushV
	var_74_object = var_1_object; // 0xd92 MovT
	var_75_object = var_0_object; // 0xd93 MovT
	func_4755(); // 0xd94 NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0xd96 PushV
	var_99_object = var_1_object; // 0xd97 MovT
	var_100_object = var_0_object; // 0xd98 MovT
	func_4807(var_100_object); // 0xd99 NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0xd9b PushV
	var_123_object = var_1_object; // 0xd9c MovT
	var_124_object = var_0_object; // 0xd9d MovT
	func_4715(); // 0xd9e NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0xda0 PushV
	var_127_object = var_1_object; // 0xda1 MovT
	var_128_object = var_0_object; // 0xda2 MovT
	func_4861(var_128_object); // 0xda3 NEW_2
	var_148_object = Obj(); var_149_object = Obj(); // 0xda5 PushV
	var_148_object = var_1_object; // 0xda6 MovT
	var_149_object = var_0_object; // 0xda7 MovT
	func_4872(var_149_object); // 0xda8 NEW_2
	
Label_3498:
	var_154_int = 41792; // 0xdaa PushI
	var_155_bool = var_56_bool == var_154_int; // 0xdab Eq
	if(var_155_bool == 0) goto Label_3572; // 0xdac JumpB
	var_156_string = ""; // 0xdad PushV
	var_156_string = "Mysterious"; // 0xdae MovS
	func_3426(var_57_cvector, var_156_string); // 0xdaf NEW_2
	var_173_int = 539840; // 0xdb1 PushI
	SetMessage(var_173_int); // 0xdb2 TObjFunc
	ClearReplies(); // 0xdb4 TObjFunc
	var_174_bool = 0; // 0xdb6 PushV
	var_174_bool = 0; // 0xdb7 MovB
	var_175_bool = 0; // 0xdb8 PushV
	var_175_bool = 0; // 0xdb9 MovB
	var_176_bool = 0; var_177_object = Obj(); // 0xdba PushV
	var_177_object = var_1_object; // 0xdbb MovT
	func_4979(var_176_bool, var_177_object); // 0xdbc NEW_2
	if(var_176_bool == 0) goto Label_3525; // 0xdbe JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0xdbf PushV
	var_192_object = var_1_object; // 0xdc0 MovT
	func_4989(var_191_bool, var_192_object); // 0xdc1 NEW_2
	if(var_191_bool == 0) goto Label_3525; // 0xdc3 JumpB
	var_175_bool = 1; // 0xdc4 MovB
	
Label_3525:
	if(var_175_bool == 0) goto Label_3532; // 0xdc5 JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0xdc6 PushV
	var_206_object = var_1_object; // 0xdc7 MovT
	func_5033(var_206_object); // 0xdc8 NEW_2
	if(var_205_bool == 0) goto Label_3532; // 0xdca JumpB
	var_174_bool = 1; // 0xdcb MovB
	
Label_3532:
	if(var_174_bool == 0) goto Label_3538; // 0xdcc JumpB
	var_213_int = 539841; // 0xdcd PushI
	var_214_int = 41794; // 0xdce PushI
	var_215_int = 41793; // 0xdcf PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xdd0 TObjFunc
	
Label_3538:
	var_216_bool = 0; // 0xdd2 PushV
	var_216_bool = 0; // 0xdd3 MovB
	var_217_bool = 0; // 0xdd4 PushV
	var_217_bool = 0; // 0xdd5 MovB
	var_218_bool = 0; var_219_object = Obj(); // 0xdd6 PushV
	var_219_object = var_1_object; // 0xdd7 MovT
	func_4979(var_218_bool, var_219_object); // 0xdd8 NEW_2
	if(var_218_bool == 0) goto Label_3553; // 0xdda JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0xddb PushV
	var_221_object = var_1_object; // 0xddc MovT
	func_4999(var_220_bool, var_221_object); // 0xddd NEW_2
	if(var_220_bool == 0) goto Label_3553; // 0xddf JumpB
	var_217_bool = 1; // 0xde0 MovB
	
Label_3553:
	if(var_217_bool == 0) goto Label_3560; // 0xde1 JumpB
	var_227_bool = 0; var_228_object = Obj(); // 0xde2 PushV
	var_228_object = var_1_object; // 0xde3 MovT
	func_5045(var_228_object); // 0xde4 NEW_2
	if(var_227_bool == 0) goto Label_3560; // 0xde6 JumpB
	var_216_bool = 1; // 0xde7 MovB
	
Label_3560:
	if(var_216_bool == 0) goto Label_3566; // 0xde8 JumpB
	var_233_int = 539844; // 0xde9 PushI
	var_234_int = 41797; // 0xdea PushI
	var_235_int = 41796; // 0xdeb PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xdec TObjFunc
	
Label_3566:
	var_236_int = 539850; // 0xdee PushI
	var_237_int = -1; // 0xdef PushI
	var_238_int = 41802; // 0xdf0 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xdf1 TObjFunc
	return 0; // 0xdf3 Return
	
Label_3572:
	var_239_int = 41797; // 0xdf4 PushI
	var_240_bool = var_56_bool == var_239_int; // 0xdf5 Eq
	if(var_240_bool == 0) goto Label_3590; // 0xdf6 JumpB
	var_241_string = ""; // 0xdf7 PushV
	var_241_string = "Neutral"; // 0xdf8 MovS
	func_3426(var_57_cvector, var_241_string); // 0xdf9 NEW_2
	var_242_int = 539845; // 0xdfb PushI
	SetMessage(var_242_int); // 0xdfc TObjFunc
	ClearReplies(); // 0xdfe TObjFunc
	var_243_int = 539846; // 0xe00 PushI
	var_244_int = -1; // 0xe01 PushI
	var_245_int = 41798; // 0xe02 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xe03 TObjFunc
	return 0; // 0xe05 Return
	
Label_3590:
	var_246_int = 41794; // 0xe06 PushI
	var_247_bool = var_56_bool == var_246_int; // 0xe07 Eq
	if(var_247_bool == 0) goto Label_3608; // 0xe08 JumpB
	var_248_string = ""; // 0xe09 PushV
	var_248_string = "Neutral"; // 0xe0a MovS
	func_3426(var_57_cvector, var_248_string); // 0xe0b NEW_2
	var_249_int = 539842; // 0xe0d PushI
	SetMessage(var_249_int); // 0xe0e TObjFunc
	ClearReplies(); // 0xe10 TObjFunc
	var_250_int = 539843; // 0xe12 PushI
	var_251_int = -1; // 0xe13 PushI
	var_252_int = 41795; // 0xe14 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0xe15 TObjFunc
	return 0; // 0xe17 Return
	
Label_3608:
	var_3_string = 1; // 0xe18 TMovB
	var_253_bool = 0; // 0xe19 PushV
	func_4636(var_253_bool); // 0xe1a NEW_2
	if(var_253_bool == 0) goto Label_3616; // 0xe1c JumpB
	lshStopAnimation(); // 0xe1d Func
	goto Label_3618; // 0xe1f Jump
	
Label_3618:
	return 0; // 0xe22 Return
	
Label_3616:
	StopAnimation(); // 0xe20 Func
	
Label_3620:
	return 0; // 0xe24 Return
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_cvector)
{
	var_58_int = 1; // 0xec7 PushI
	if(var_58_int == 0) goto Label_3823; // 0xec8 JumpB
	func_4425(); // 0xeca NEW_2
	var_60_int = 42548; // 0xecc PushI
	var_61_bool = var_56_int == var_60_int; // 0xecd Eq
	if(var_61_bool == 0) goto Label_3811; // 0xece JumpB
	var_62_string = ""; // 0xecf PushV
	var_62_string = "Neutral"; // 0xed0 MovS
	func_3760(var_57_cvector, var_62_string); // 0xed1 NEW_2
	var_79_int = 540539; // 0xed3 PushI
	SetMessage(var_79_int); // 0xed4 TObjFunc
	ClearReplies(); // 0xed6 TObjFunc
	var_80_int = 540540; // 0xed8 PushI
	var_81_int = -1; // 0xed9 PushI
	var_82_int = 42549; // 0xeda PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xedb TObjFunc
	var_83_int = 540799; // 0xedd PushI
	var_84_int = -1; // 0xede PushI
	var_85_int = 42848; // 0xedf PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xee0 TObjFunc
	return 0; // 0xee2 Return
	
Label_3811:
	var_3_string = 1; // 0xee3 TMovB
	var_86_bool = 0; // 0xee4 PushV
	func_4636(var_86_bool); // 0xee5 NEW_2
	if(var_86_bool == 0) goto Label_3819; // 0xee7 JumpB
	lshStopAnimation(); // 0xee8 Func
	goto Label_3821; // 0xeea Jump
	
Label_3821:
	return 0; // 0xeed Return
	
Label_3819:
	StopAnimation(); // 0xeeb Func
	
Label_3823:
	return 0; // 0xeef Return
}


task_22_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_int)
{
	var_57_int = 10; // 0xf3d PushI
	var_58_bool = var_56_int == var_57_int; // 0xf3e Eq
	if(var_58_bool == 0) goto Label_3937; // 0xf3f JumpB
	func_3896(); // 0xf41 NEW_2
	var_60_bool = 0; // 0xf43 PushV
	var_60_bool = 0; // 0xf44 MovB
	var_61_bool = 0; // 0xf45 PushV
	func_4151(var_61_bool); // 0xf46 NEW_2
	if(var_61_bool == 0) goto Label_3918; // 0xf48 JumpB
	var_64_bool = 0; // 0xf49 PushV
	func_3865(var_64_bool); // 0xf4a NEW_2
	if(var_64_bool == 0) goto Label_3918; // 0xf4c JumpB
	var_60_bool = 1; // 0xf4d MovB
	
Label_3918:
	if(var_60_bool == 0) goto Label_3931; // 0xf4e JumpB
	var_81_bool = 0; // 0xf4f PushV
	func_3845(var_81_bool); // 0xf50 NEW_2
	if(var_81_bool == 0) goto Label_3930; // 0xf52 JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0xf53 PushV
	var_102_object = Obj(); // 0xf54 PushV
	func_4432(var_102_object); // 0xf55 NEW_2
	var_101_object = var_102_object; // 0xf56 Mov
	func_4299(var_101_object); // 0xf58 NEW_2
	
Label_3930:
	goto Label_3937; // 0xf5a Jump
	
Label_3937:
	return 0; // 0xf61 Return
	
Label_3931:
	func_3860(var_56_int); // 0xf5c NEW_2
	func_3887(); // 0xf5f NEW_2
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	func_4078(); // 0xf63 NEW_2
	func_3896(); // 0xf66 NEW_2
	lshStopSpeech(); // 0xf68 Func
	lshStopAnimation(); // 0xf6a Func
	StopAsync(); // 0xf6c Func
	Hold(); // 0xf6e Func
	return 0; // 0xf70 Return
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	StopGroup0(); // 0xf71 Func
	func_3896(); // 0xf74 NEW_2
	var_57_string = ""; // 0xf76 PushV
	var_57_string = "Neutral"; // 0xf77 MovS
	func_4379(var_57_string); // 0xf78 NEW_2
	func_3887(); // 0xf7b NEW_2
	return 0; // 0xf7d Return
}


task_22_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_bool)
{
	var_57_bool = var_56_bool; // 0xf7f Push
	if(var_57_bool == 0) goto Label_3973; // 0xf80 JumpB
	func_3887(); // 0xf82 NEW_2
	goto Label_3977; // 0xf84 Jump
	
Label_3977:
	return 0; // 0xf89 Return
	
Label_3973:
	var_63_string = ""; // 0xf85 PushV
	var_63_string = "Neutral"; // 0xf86 MovS
	func_4379(var_63_string); // 0xf87 NEW_2
}


task_22_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_object)
{
	var_57_bool = 0; var_58_bool = 0; // 0xf8a PushV
	IsOverrideActive(var_58_bool); // 0xf8b Func
	var_59_bool = var_58_bool == 0; // 0xf8d Not
	if(var_59_bool == 0) goto Label_4006; // 0xf8e JumpB
	EventDisable(0); // 0xf8f EventDisable
	func_4078(); // 0xf91 NEW_2
	var_60_bool = 0; var_61_object = Obj(); // 0xf93 PushV
	var_61_object = var_56_object; // 0xf94 Mov
	func_4142(var_61_object); // 0xf95 NEW_2
	EventEnable(0); // 0xf97 EventEnable
	var_74_object = Obj(); // 0xf98 PushV
	var_74_object = var_56_object; // 0xf99 Mov
	func_5309(var_74_object); // 0xf9a NEW_2
	var_1070_string = ""; // 0xf9c PushV
	var_1070_string = "Neutral"; // 0xf9d MovS
	func_4379(var_1070_string); // 0xf9e NEW_2
	func_3896(); // 0xfa1 NEW_2
	func_3887(); // 0xfa4 NEW_2
	
Label_4006:
	return 2; // 0xfa6 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	var_56_bool = GlobalVars[1]; // 0xef0 PushGE
	var_56_bool = 0; // 0xef1 MovB
	GlobalVars[1] = var_56_bool; // 0xef2 PopGE
	func_3831(var_55_cvector); // 0xef4 NEW_2
	return 0; // 0xef6 Return
}


func_0(var_0_object, var_304_int, var_305_object)
{
	var_307_object = Obj(); var_308_bool = 0; var_309_int = 0; var_310_bool = 0; var_311_object = Obj(); var_312_bool = 0; var_313_int = 0; var_314_bool = 0; // 0x0 PushV
	var_0_object = var_305_object; // 0x1 TMov
	var_315_bool = 0; var_316_object = Obj(); var_317_float = 0; // 0x2 PushV
	var_316_object = var_305_object; // 0x3 Mov
	var_317_float = 70.0; // 0x4 MovF
	func_4156(var_316_object, var_317_float); // 0x5 NEW_2
	var_318_bool = var_315_bool == 0; // 0x7 Not
	if(var_318_bool == 0) goto Label_11; // 0x8 JumpB
	var_304_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_311_object); // 0xb Func
	var_319_int = 0; // 0xd PushV
	func_4630(var_319_int); // 0xe NEW_2
	SetNPCName(var_319_int); // 0x10 ObjFunc
	var_320_int = 0; // 0x12 PushV
	func_4628(var_320_int); // 0x13 NEW_2
	SetNPCDescription(var_320_int); // 0x15 ObjFunc
	var_321_string = ""; // 0x17 PushV
	func_4632(var_321_string); // 0x18 NEW_2
	SetPhoto(var_321_string); // 0x1a ObjFunc
	var_322_string = ""; // 0x1c PushV
	func_4634(var_322_string); // 0x1d NEW_2
	SetPhoto2(var_322_string); // 0x1f ObjFunc
	var_323_int = 0; // 0x21 PushV
	func_5255(var_323_int); // 0x22 NEW_2
	SetPlayerName(var_323_int); // 0x24 ObjFunc
	var_313_int = -1; // 0x26 MovI
	IsOverrideActive(var_312_bool); // 0x27 Func
	var_324_bool = var_312_bool; // 0x29 Push
	if(var_324_bool == 0) goto Label_45; // 0x2a JumpB
	var_304_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_311_object); // 0x2d Func
	var_325_bool = 0; var_326_object = Obj(); // 0x2f PushV
	var_327_object = Obj(); // 0x30 PushV
	func_4432(var_327_object); // 0x31 NEW_2
	var_326_object = var_327_object; // 0x32 Mov
	func_4241(var_325_bool, var_326_object); // 0x34 NEW_2
	var_328_object = Obj(); var_329_object = Obj(); // 0x36 PushV
	var_328_object = var_305_object; // 0x37 Mov
	var_329_object = var_311_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_330_object, var_331_object, var_332_string, var_333_bool, var_328_object, var_329_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_314_bool); // 0x3d ObjFunc
	
Label_63:
	var_374_bool = var_314_bool == 0; // 0x3f Not
	if(var_374_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_314_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_375_object = Obj(); // 0x46 PushV
	var_375_object = var_305_object; // 0x47 Mov
	func_4224(); // 0x48 NEW_2
	StopDialog(var_311_object); // 0x4a Func
	GetReturnValue(var_313_int); // 0x4c ObjFunc
	var_304_int = var_313_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_4611(var_75_int)
{
	var_76_int = 0; var_77_bool = 0; var_78_int = 0; var_79_bool = 0; // 0x1203 PushV
	var_78_int = 0; // 0x1204 MovI
	
Label_4613:
	var_80_string = "all"; // 0x1205 PushS
	var_81_string = ""; var_82_int = 0; // 0x1206 PushV
	var_82_int = var_78_int; // 0x1207 Mov
	func_4604(var_81_string, var_82_int); // 0x1208 NEW_2
	HasAnimation(var_79_bool, var_80_string, var_81_string); // 0x120a Func
	var_86_bool = var_79_bool == 0; // 0x120c Not
	if(var_86_bool == 0) goto Label_4623; // 0x120d JumpB
	goto Label_4626; // 0x120e Jump
	
Label_4626:
	var_75_int = var_78_int; // 0x1212 Mov
	return 4; // 0x1213 Return
	
Label_4623:
	var_87_int = 1; // 0x120f PushI
	var_78_int = var_78_int + var_87_int; // 0x1210 Add2
	goto Label_4613; // 0x1211 Jump
}


func_5125()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x1405 PushV
	var_78_int = 762; // 0x1406 PushI
	var_79_int = 2; // 0x1407 PushI
	var_80_int = 539747; // 0x1408 PushI
	CreateDiaryEntry(var_77_object, var_78_int, var_79_int, var_80_int); // 0x1409 Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0x140b PushV
	var_82_object = var_77_object; // 0x140c Mov
	var_83_int = 757; // 0x140d MovI
	func_5177(var_81_bool, var_82_object, var_83_int); // 0x140e NEW_2
	return 2; // 0x1410 Return
}


func_2566(var_2_object, var_563_string)
{
	var_564_bool = 0; // 0xa07 PushV
	func_4636(var_564_bool); // 0xa08 NEW_2
	var_565_bool = var_564_bool == 0; // 0xa0a Not
	if(var_565_bool == 0) goto Label_2573; // 0xa0b JumpB
	return 0; // 0xa0c Return
	
Label_2573:
	var_566_bool = var_563_string == var_2_object; // 0xa0d Eq
	if(var_566_bool == 0) goto Label_2576; // 0xa0e JumpB
	return 0; // 0xa0f Return
	
Label_2576:
	var_567_string = ""; var_568_bool = 0; // 0xa10 PushV
	var_567_string = var_563_string; // 0xa11 Mov
	var_569_string = ""; // 0xa12 PushS
	var_570_bool = var_563_string == var_569_string; // 0xa13 Eq
	if(var_570_bool == 0) goto Label_2583; // 0xa14 JumpB
	var_568_bool = 0; // 0xa15 MovB
	goto Label_2584; // 0xa16 Jump
	
Label_2584:
	func_4395(var_567_string, var_568_bool); // 0xa18 NEW_2
	var_2_object = var_563_string; // 0xa1a TMov
	return 0; // 0xa1b Return
	
Label_2583:
	var_568_bool = 1; // 0xa17 MovB
}


func_4103(var_177_bool, var_178_object, var_179_string, var_180_float, var_181_float, var_182_float)
{
	var_183_float = 0; var_184_float = 0; // 0x1007 PushV
	var_185_bool = 0; var_186_object = Obj(); var_187_string = ""; // 0x1008 PushV
	var_186_object = var_178_object; // 0x1009 Mov
	var_187_string = var_179_string; // 0x100a Mov
	func_4091(var_185_bool, var_186_object, var_187_string); // 0x100b NEW_2
	var_194_bool = var_185_bool == 0; // 0x100d Not
	if(var_194_bool == 0) goto Label_4113; // 0x100e JumpB
	var_177_bool = 0; // 0x100f MovB
	return 2; // 0x1010 Return
	
Label_4113:
	GetProperty(var_179_string, var_184_float); // 0x1011 ObjFunc
	var_195_float = 0; var_196_float = 0; var_197_float = 0; var_198_float = 0; // 0x1013 PushV
	var_196_float = var_184_float + var_180_float; // 0x1014 Add2
	var_197_float = var_181_float; // 0x1015 Mov
	var_198_float = var_182_float; // 0x1016 Mov
	func_4448(var_195_float, var_196_float, var_197_float, var_198_float); // 0x1017 NEW_2
	SetProperty(var_179_string, var_195_float); // 0x1019 ObjFunc
	var_177_bool = 1; // 0x101b MovB
	return 2; // 0x101c Return
}


func_1041(var_0_object, var_1_object, var_2_object, var_3_string, var_473_object, var_474_object)
{
	var_0_object = var_474_object; // 0x412 TMov
	var_1_object = var_473_object; // 0x413 TMov
	var_3_string = 0; // 0x414 TMovB
	var_479_int = 1; // 0x415 PushI
	if(var_479_int == 0) goto Label_1108; // 0x416 JumpB
	var_480_bool = 0; // 0x417 PushV
	var_480_bool = 0; // 0x418 MovB
	var_481_bool = 0; var_482_object = Obj(); // 0x419 PushV
	var_482_object = var_1_object; // 0x41a MovT
	func_4919(var_482_object); // 0x41b NEW_2
	if(var_481_bool == 0) goto Label_1060; // 0x41d JumpB
	var_487_bool = 0; var_488_object = Obj(); // 0x41e PushV
	var_488_object = var_1_object; // 0x41f MovT
	func_4931(var_488_object); // 0x420 NEW_2
	if(var_487_bool == 0) goto Label_1060; // 0x422 JumpB
	var_480_bool = 1; // 0x423 MovB
	
Label_1060:
	if(var_480_bool == 0) goto Label_1086; // 0x424 JumpB
	var_493_object = Obj(); var_494_object = Obj(); // 0x425 PushV
	var_493_object = var_1_object; // 0x426 MovT
	var_494_object = var_0_object; // 0x427 MovT
	func_4686(); // 0x428 NEW_2
	var_497_string = ""; // 0x42a PushV
	var_497_string = "Neutral"; // 0x42b MovS
	func_1138(var_474_object, var_497_string); // 0x42c NEW_2
	var_505_int = 525756; // 0x42e PushI
	SetMessage(var_505_int); // 0x42f TObjFunc
	ClearReplies(); // 0x431 TObjFunc
	var_506_int = 540712; // 0x433 PushI
	var_507_int = 42749; // 0x434 PushI
	var_508_int = 42748; // 0x435 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x436 TObjFunc
	var_509_int = 540717; // 0x438 PushI
	var_510_int = -1; // 0x439 PushI
	var_511_int = 42753; // 0x43a PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0x43b TObjFunc
	goto Label_1108; // 0x43d Jump
	
Label_1108:
	var_512_bool = 0; // 0x454 PushV
	func_4636(var_512_bool); // 0x455 NEW_2
	if(var_512_bool == 0) goto Label_1123; // 0x457 JumpB
	
Label_1112:
	lshWaitForAnimEnd(); // 0x458 Func
	var_513_string = var_3_string; // 0x45a PushT
	if(var_513_string == 0) goto Label_1117; // 0x45b JumpB
	goto Label_1122; // 0x45c Jump
	
Label_1122:
	goto Label_1137; // 0x462 Jump
	
Label_1137:
	return 0; // 0x471 Return
	
Label_1117:
	var_514_string = ""; // 0x45d PushV
	var_514_string = var_2_object; // 0x45e MovT
	func_4379(var_514_string); // 0x45f NEW_2
	goto Label_1112; // 0x461 Jump
	
Label_1123:
	var_515_string = "all"; // 0x463 PushS
	var_516_string = "idle"; // 0x464 PushS
	PlayAnimation(var_515_string, var_516_string); // 0x465 Func
	
Label_1127:
	WaitForAnimEnd(); // 0x467 Func
	var_517_string = var_3_string; // 0x469 PushT
	if(var_517_string == 0) goto Label_1132; // 0x46a JumpB
	goto Label_1137; // 0x46b Jump
	
Label_1132:
	var_518_string = "all"; // 0x46c PushS
	var_519_string = "idle"; // 0x46d PushS
	PlayAnimation(var_518_string, var_519_string); // 0x46e Func
	goto Label_1127; // 0x470 Jump
	
Label_1086:
	var_520_string = ""; // 0x43e PushV
	var_520_string = "Neutral"; // 0x43f MovS
	func_1138(var_474_object, var_520_string); // 0x440 NEW_2
	var_521_int = 525759; // 0x442 PushI
	SetMessage(var_521_int); // 0x443 TObjFunc
	ClearReplies(); // 0x445 TObjFunc
	var_522_int = 525760; // 0x447 PushI
	var_523_int = -1; // 0x448 PushI
	var_524_int = 27072; // 0x449 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x44a TObjFunc
	var_525_int = 540711; // 0x44c PushI
	var_526_int = -1; // 0x44d PushI
	var_527_int = 42747; // 0x44e PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x44f TObjFunc
	goto Label_1108; // 0x451 Jump
}


func_5138()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x1412 PushV
	var_84_int = 742; // 0x1413 PushI
	var_85_int = 2; // 0x1414 PushI
	var_86_int = 539459; // 0x1415 PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0x1416 Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0x1418 PushV
	var_88_object = var_83_object; // 0x1419 Mov
	var_89_int = 740; // 0x141a MovI
	func_5177(var_87_bool, var_88_object, var_89_int); // 0x141b NEW_2
	return 2; // 0x141d Return
}


func_4628(var_136_int)
{
	var_136_int = 515543; // 0x1214 MovI
	return 0; // 0x1215 Return
}


func_4630(var_135_int)
{
	var_135_int = 502868; // 0x1216 MovI
	return 0; // 0x1217 Return
}


func_4632(var_137_string)
{
	var_137_string = "ui/NPC_Maria.png"; // 0x1218 MovS
	return 0; // 0x1219 Return
}


func_4634(var_138_string)
{
	var_138_string = "ui/NPC_Maria_b.png"; // 0x121a MovS
	return 0; // 0x121b Return
}


func_4636(var_130_bool)
{
	var_130_bool = 1; // 0x121c MovB
	return 0; // 0x121d Return
}


func_4125(var_110_string, var_111_int)
{
	var_112_int = 0; var_113_int = 0; // 0x101d PushV
	GetProperty(var_110_string, var_113_int); // 0x101e ObjFunc
	var_114_int = var_113_int + var_111_int; // 0x1020 Add
	SetProperty(var_110_string, var_114_int); // 0x1021 ObjFunc
	return 2; // 0x1023 Return
}


func_4638()
{
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0; // 0x121f PushV
	var_110_object = Obj(); // 0x1220 PushV
	func_5205(var_110_object); // 0x1221 NEW_2
	var_107_object = var_110_object; // 0x1222 Mov
	var_108_string = "pt_map_eva"; // 0x1224 MovS
	var_109_float = 2; // 0x1225 MovI
	func_5222(var_107_object, var_108_string, var_109_float); // 0x1226 NEW_2
	var_130_object = Obj(); // 0x1228 PushV
	func_5205(var_130_object); // 0x1229 NEW_2
	ShowMap(var_130_object); // 0x122b ObjFunc
	return 0; // 0x122d Return
}


func_5151()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x141f PushV
	var_68_int = 425; // 0x1420 PushI
	var_69_int = 1; // 0x1421 PushI
	var_70_int = 526224; // 0x1422 PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x1423 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x1425 PushV
	var_72_object = var_67_object; // 0x1426 Mov
	var_73_int = 416; // 0x1427 MovI
	func_5177(var_71_bool, var_72_object, var_73_int); // 0x1428 NEW_2
	return 2; // 0x142a Return
}


func_4132(var_64_bool, var_65_cvector)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; // 0x1024 PushV
	GetPosition(var_69_cvector); // 0x1025 Func
	var_70_cvector = var_65_cvector - var_69_cvector; // 0x1027 Sub2
	var_72_float = GetByIndex(var_70_cvector, 0); // 0x1028 PushE
	var_73_float = GetByIndex(var_70_cvector, 2); // 0x1029 PushE
	Rotate(var_72_float, var_73_float, var_71_bool); // 0x102a Func
	var_64_bool = var_71_bool; // 0x102c Mov
	return 6; // 0x102d Return
}


func_3621(var_0_object, var_1014_int, var_1015_object)
{
	var_1017_object = Obj(); var_1018_bool = 0; var_1019_int = 0; var_1020_bool = 0; var_1021_object = Obj(); var_1022_bool = 0; var_1023_int = 0; var_1024_bool = 0; // 0xe25 PushV
	var_0_object = var_1015_object; // 0xe26 TMov
	var_1025_bool = 0; var_1026_object = Obj(); var_1027_float = 0; // 0xe27 PushV
	var_1026_object = var_1015_object; // 0xe28 Mov
	var_1027_float = 70.0; // 0xe29 MovF
	func_4156(var_1026_object, var_1027_float); // 0xe2a NEW_2
	var_1028_bool = var_1025_bool == 0; // 0xe2c Not
	if(var_1028_bool == 0) goto Label_3632; // 0xe2d JumpB
	var_1014_int = -2; // 0xe2e MovI
	return 8; // 0xe2f Return
	
Label_3632:
	CreateDialog(var_1021_object); // 0xe30 Func
	var_1029_int = 0; // 0xe32 PushV
	func_4630(var_1029_int); // 0xe33 NEW_2
	SetNPCName(var_1029_int); // 0xe35 ObjFunc
	var_1030_int = 0; // 0xe37 PushV
	func_4628(var_1030_int); // 0xe38 NEW_2
	SetNPCDescription(var_1030_int); // 0xe3a ObjFunc
	var_1031_string = ""; // 0xe3c PushV
	func_4632(var_1031_string); // 0xe3d NEW_2
	SetPhoto(var_1031_string); // 0xe3f ObjFunc
	var_1032_string = ""; // 0xe41 PushV
	func_4634(var_1032_string); // 0xe42 NEW_2
	SetPhoto2(var_1032_string); // 0xe44 ObjFunc
	var_1033_int = 0; // 0xe46 PushV
	func_5255(var_1033_int); // 0xe47 NEW_2
	SetPlayerName(var_1033_int); // 0xe49 ObjFunc
	var_1023_int = -1; // 0xe4b MovI
	IsOverrideActive(var_1022_bool); // 0xe4c Func
	var_1034_bool = var_1022_bool; // 0xe4e Push
	if(var_1034_bool == 0) goto Label_3666; // 0xe4f JumpB
	var_1014_int = -2; // 0xe50 MovI
	return 8; // 0xe51 Return
	
Label_3666:
	DoDialog(var_1021_object); // 0xe52 Func
	var_1035_bool = 0; var_1036_object = Obj(); // 0xe54 PushV
	var_1037_object = Obj(); // 0xe55 PushV
	func_4432(var_1037_object); // 0xe56 NEW_2
	var_1036_object = var_1037_object; // 0xe57 Mov
	func_4241(var_1035_bool, var_1036_object); // 0xe59 NEW_2
	var_1038_object = Obj(); var_1039_object = Obj(); // 0xe5b PushV
	var_1038_object = var_1015_object; // 0xe5c Mov
	var_1039_object = var_1021_object; // 0xe5d Mov
	TaskCall(21); // 0xe5e TaskCall
	func_3702(var_1040_object, var_1041_object, var_1042_string, var_1043_bool, var_1038_object, var_1039_object); // 0xe5f NEW_2
	TaskReturn(); // 0xe60 TaskReturn
	IsDialogEnd(var_1024_bool); // 0xe62 ObjFunc
	
Label_3684:
	var_1068_bool = var_1024_bool == 0; // 0xe64 Not
	if(var_1068_bool == 0) goto Label_3691; // 0xe65 JumpB
	sync(); // 0xe66 Func
	IsDialogEnd(var_1024_bool); // 0xe68 ObjFunc
	goto Label_3684; // 0xe6a Jump
	
Label_3691:
	var_1069_object = Obj(); // 0xe6b PushV
	var_1069_object = var_1015_object; // 0xe6c Mov
	func_4224(); // 0xe6d NEW_2
	StopDialog(var_1021_object); // 0xe6f Func
	GetReturnValue(var_1023_int); // 0xe71 ObjFunc
	var_1014_int = var_1023_int; // 0xe73 Mov
	return 8; // 0xe74 Return
}


func_5164(var_90_object)
{
	var_91_object = Obj(); var_92_object = Obj(); // 0x142c PushV
	GetDiaryRoot(var_92_object); // 0x142d Func
	var_93_bool = var_92_object == 0; // 0x142f Not
	if(var_93_bool == 0) goto Label_5174; // 0x1430 JumpB
	var_94_string = "Can't retrieve diary root"; // 0x1431 PushS
	Trace(var_94_string); // 0x1432 Func
	var_90_object = 0; // 0x1434 MovB
	return 2; // 0x1435 Return
	
Label_5174:
	var_90_object = var_92_object; // 0x1436 Mov
	return 2; // 0x1437 Return
}


func_4654(var_137_object)
{
	var_139_string = "money 4000 is given"; // 0x122f PushS
	Trace(var_139_string); // 0x1230 Func
	var_140_object = Obj(); var_141_int = 0; // 0x1232 PushV
	var_140_object = var_137_object; // 0x1233 Mov
	var_141_int = 4000; // 0x1234 MovI
	func_4476(var_140_object, var_141_int); // 0x1235 NEW_2
	return 0; // 0x1237 Return
}


func_4142(var_60_bool)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x102e PushV
	GetPosition(var_63_cvector); // 0x102f ObjFunc
	var_64_bool = 0; var_65_cvector = CVector(0,0,0); // 0x1031 PushV
	var_65_cvector = var_63_cvector; // 0x1032 Mov
	func_4132(var_64_bool, var_65_cvector); // 0x1033 NEW_2
	var_60_bool = var_64_bool; // 0x1034 Mov
	return 2; // 0x1036 Return
}


func_4151(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0; // 0x1037 PushV
	IsLoaded(var_59_bool); // 0x1038 Func
	var_57_bool = var_59_bool; // 0x103a Mov
	return 2; // 0x103b Return
}


func_4664(var_164_object)
{
	var_166_bool = 0; var_167_object = Obj(); var_168_float = 0; // 0x1239 PushV
	var_167_object = var_164_object; // 0x123a Mov
	var_168_float = -0.05; // 0x123b MovF
	func_4527(var_166_bool, var_167_object, var_168_float); // 0x123c NEW_2
	return 0; // 0x123e Return
}


func_5177(var_81_bool, var_82_object, var_83_int)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_int = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0; // 0x1439 PushV
	var_90_object = Obj(); // 0x143a PushV
	func_5164(var_90_object); // 0x143b NEW_2
	var_87_object = var_90_object; // 0x143c Mov
	Find(var_83_int, var_88_object); // 0x143e ObjFunc
	var_95_bool = var_88_object == 0; // 0x1440 Not
	if(var_95_bool == 0) goto Label_5192; // 0x1441 JumpB
	var_96_string = "Can't find diary parent with id: "; // 0x1442 PushS
	var_97_int = var_96_string + var_83_int; // 0x1443 Add
	Trace(var_97_int); // 0x1444 Func
	var_81_bool = 0; // 0x1446 MovB
	return 6; // 0x1447 Return
	
Label_5192:
	AddChild(var_82_object); // 0x1448 ObjFunc
	var_98_int = 7; // 0x144a PushI
	SendWorldWndMessage(var_98_int); // 0x144b Func
	GetCategory(var_89_int); // 0x144d ObjFunc
	SetDiarySection(var_89_int); // 0x144f Func
	var_81_bool = 0; // 0x1451 MovB
	return 6; // 0x1452 Return
}


func_4156(var_88_bool, var_90_float)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_bool = 0; var_108_bool = 0; // 0x103c PushV
	GetPosition(var_101_cvector); // 0x103d ObjFunc
	GetEyesHeight(var_100_float); // 0x103f ObjFunc
	var_109_float = GetByIndex(var_101_cvector, 1); // 0x1041 PushE
	var_109_float = var_109_float + var_100_float; // 0x1042 Add2
	SetByIndex(var_101_cvector, 1) = var_109_float; // 0x1043 PopE
	GetPosition(var_102_cvector); // 0x1044 Func
	GetEyesHeight(var_100_float); // 0x1046 Func
	var_110_float = GetByIndex(var_102_cvector, 1); // 0x1048 PushE
	var_110_float = var_110_float + var_100_float; // 0x1049 Add2
	SetByIndex(var_102_cvector, 1) = var_110_float; // 0x104a PopE
	var_103_cvector = var_101_cvector - var_102_cvector; // 0x104b Sub2
	var_111_float = GetByIndex(var_103_cvector, 1); // 0x104c PushE
	var_111_float = 0; // 0x104d MovI
	SetByIndex(var_103_cvector, 1) = var_111_float; // 0x104e PopE
	var_112_int = var_103_cvector | var_103_cvector; // 0x104f Or
	var_113_float = sqrt(var_112_int); // 0x1050 Sqrt
	var_103_cvector = var_103_cvector / var_103_cvector; // 0x1051 Div2
	var_104_cvector = -var_103_cvector; // 0x1052 Neg2
	var_114_float = var_103_cvector * var_90_float; // 0x1053 Mult
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x1054 PushV
	var_117_cvector = CVector(0.0, 1.0, 0.0); // 0x1055 PushVec
	var_116_cvector = var_104_cvector ^ var_117_cvector; // 0x1056 Xor2
	func_4438(var_115_cvector, var_116_cvector); // 0x1057 NEW_2
	var_123_int = 25; // 0x1059 PushI
	var_124_float = var_115_cvector * var_123_int; // 0x105a Mult
	var_125_int = var_114_float + var_124_float; // 0x105b Add
	var_126_cvector = CVector(0.0, 10.0, 0.0); // 0x105c PushVec
	var_105_cvector = var_125_int - var_126_cvector; // 0x105d Sub2
	var_106_cvector = var_102_cvector + var_105_cvector; // 0x105e Add2
	IsOverrideActive(var_107_bool); // 0x105f Func
	var_127_bool = var_107_bool; // 0x1061 Push
	if(var_127_bool == 0) goto Label_4197; // 0x1062 JumpB
	var_88_bool = 0; // 0x1063 MovB
	return 18; // 0x1064 Return
	
Label_4197:
	StopWorld(); // 0x1065 Func
	CameraTransit(var_106_cvector, var_104_cvector); // 0x1067 Func
	var_128_float = GetByIndex(var_105_cvector, 0); // 0x1069 PushE
	var_129_float = GetByIndex(var_105_cvector, 2); // 0x106a PushE
	Rotate(var_128_float, var_129_float); // 0x106b Func
	var_130_bool = 0; // 0x106d PushV
	func_4636(var_130_bool); // 0x106e NEW_2
	if(var_130_bool == 0) goto Label_4210; // 0x1070 JumpB
	goto Label_4218; // 0x1071 Jump
	
Label_4218:
	CameraWaitForPlayFinish(); // 0x107a Func
	ResumeWorld(); // 0x107c Func
	var_88_bool = 1; // 0x107e MovB
	return 18; // 0x107f Return
	
Label_4210:
	var_131_string = "head"; // 0x1072 PushS
	HasAnimationTrack(var_108_bool, var_131_string); // 0x1073 Func
	var_132_bool = var_108_bool; // 0x1075 Push
	if(var_132_bool == 0) goto Label_4218; // 0x1076 JumpB
	var_133_string = "head"; // 0x1077 PushS
	LookAsyncCamera(var_133_string); // 0x1078 Func
}


func_4671()
{
	var_64_string = "k1q02"; // 0x1240 PushS
	var_65_int = 4; // 0x1241 PushI
	SetVariable(var_64_string, var_65_int); // 0x1242 Func
	func_5112(); // 0x1245 NEW_2
	return 0; // 0x1247 Return
}


func_4680()
{
	var_64_string = "ook3Maria1"; // 0x1249 PushS
	var_65_int = 1; // 0x124a PushI
	SetVariable(var_64_string, var_65_int); // 0x124b Func
	return 0; // 0x124d Return
}


func_4686()
{
	var_495_string = "ook4Maria1"; // 0x124f PushS
	var_496_int = 1; // 0x1250 PushI
	SetVariable(var_495_string, var_496_int); // 0x1251 Func
	return 0; // 0x1253 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_328_object, var_329_object)
{
	var_0_object = var_329_object; // 0x52 TMov
	var_1_object = var_328_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_334_int = 1; // 0x55 PushI
	if(var_334_int == 0) goto Label_134; // 0x56 JumpB
	var_335_bool = 0; var_336_object = Obj(); // 0x57 PushV
	var_336_object = var_1_object; // 0x58 MovT
	func_4883(var_336_object); // 0x59 NEW_2
	if(var_335_bool == 0) goto Label_112; // 0x5b JumpB
	var_343_string = ""; // 0x5c PushV
	var_343_string = "Neutral"; // 0x5d MovS
	func_164(var_329_object, var_343_string); // 0x5e NEW_2
	var_351_int = 524759; // 0x60 PushI
	SetMessage(var_351_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_352_int = 526896; // 0x65 PushI
	var_353_int = 28184; // 0x66 PushI
	var_354_int = 28183; // 0x67 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x68 TObjFunc
	var_355_int = 526903; // 0x6a PushI
	var_356_int = 28184; // 0x6b PushI
	var_357_int = 28191; // 0x6c PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x6d TObjFunc
	goto Label_134; // 0x6f Jump
	
Label_134:
	var_358_bool = 0; // 0x86 PushV
	func_4636(var_358_bool); // 0x87 NEW_2
	if(var_358_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_359_string = var_3_string; // 0x8c PushT
	if(var_359_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_360_string = ""; // 0x8f PushV
	var_360_string = var_2_object; // 0x90 MovT
	func_4379(var_360_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_361_string = "all"; // 0x95 PushS
	var_362_string = "idle"; // 0x96 PushS
	PlayAnimation(var_361_string, var_362_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_363_string = var_3_string; // 0x9b PushT
	if(var_363_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_364_string = "all"; // 0x9e PushS
	var_365_string = "idle"; // 0x9f PushS
	PlayAnimation(var_364_string, var_365_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_112:
	var_366_string = ""; // 0x70 PushV
	var_366_string = "Neutral"; // 0x71 MovS
	func_164(var_329_object, var_366_string); // 0x72 NEW_2
	var_367_int = 524761; // 0x74 PushI
	SetMessage(var_367_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_368_int = 526893; // 0x79 PushI
	var_369_int = -1; // 0x7a PushI
	var_370_int = 28180; // 0x7b PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x7c TObjFunc
	var_371_int = 542280; // 0x7e PushI
	var_372_int = -1; // 0x7f PushI
	var_373_int = 44625; // 0x80 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_4692()
{
	var_64_string = "k7q01"; // 0x1255 PushS
	var_65_int = 7; // 0x1256 PushI
	SetVariable(var_64_string, var_65_int); // 0x1257 Func
	func_5151(); // 0x125a NEW_2
	return 0; // 0x125c Return
}


func_5205(var_68_object)
{
	var_69_object = Obj(); var_70_object = Obj(); var_71_object = Obj(); var_72_object = Obj(); // 0x1455 PushV
	GetMainOutdoorScene(var_71_object); // 0x1456 Func
	var_73_bool = var_71_object == 0; // 0x1458 NullEq
	if(var_73_bool == 0) goto Label_5216; // 0x1459 JumpB
	var_74_string = "Can't find main outdoor scene"; // 0x145a PushS
	Trace(var_74_string); // 0x145b Func
	var_72_object = 0; // 0x145d SetNull
	var_68_object = var_72_object; // 0x145e Mov
	return 4; // 0x145f Return
	
Label_5216:
	GetMap(var_72_object); // 0x1460 ObjFunc
	var_68_object = var_72_object; // 0x1462 Mov
	return 4; // 0x1463 Return
}


func_597(var_0_object, var_378_int, var_379_object)
{
	var_381_object = Obj(); var_382_bool = 0; var_383_int = 0; var_384_bool = 0; var_385_object = Obj(); var_386_bool = 0; var_387_int = 0; var_388_bool = 0; // 0x255 PushV
	var_0_object = var_379_object; // 0x256 TMov
	var_389_bool = 0; var_390_object = Obj(); var_391_float = 0; // 0x257 PushV
	var_390_object = var_379_object; // 0x258 Mov
	var_391_float = 70.0; // 0x259 MovF
	func_4156(var_390_object, var_391_float); // 0x25a NEW_2
	var_392_bool = var_389_bool == 0; // 0x25c Not
	if(var_392_bool == 0) goto Label_608; // 0x25d JumpB
	var_378_int = -2; // 0x25e MovI
	return 8; // 0x25f Return
	
Label_608:
	CreateDialog(var_385_object); // 0x260 Func
	var_393_int = 0; // 0x262 PushV
	func_4630(var_393_int); // 0x263 NEW_2
	SetNPCName(var_393_int); // 0x265 ObjFunc
	var_394_int = 0; // 0x267 PushV
	func_4628(var_394_int); // 0x268 NEW_2
	SetNPCDescription(var_394_int); // 0x26a ObjFunc
	var_395_string = ""; // 0x26c PushV
	func_4632(var_395_string); // 0x26d NEW_2
	SetPhoto(var_395_string); // 0x26f ObjFunc
	var_396_string = ""; // 0x271 PushV
	func_4634(var_396_string); // 0x272 NEW_2
	SetPhoto2(var_396_string); // 0x274 ObjFunc
	var_397_int = 0; // 0x276 PushV
	func_5255(var_397_int); // 0x277 NEW_2
	SetPlayerName(var_397_int); // 0x279 ObjFunc
	var_387_int = -1; // 0x27b MovI
	IsOverrideActive(var_386_bool); // 0x27c Func
	var_398_bool = var_386_bool; // 0x27e Push
	if(var_398_bool == 0) goto Label_642; // 0x27f JumpB
	var_378_int = -2; // 0x280 MovI
	return 8; // 0x281 Return
	
Label_642:
	DoDialog(var_385_object); // 0x282 Func
	var_399_bool = 0; var_400_object = Obj(); // 0x284 PushV
	var_401_object = Obj(); // 0x285 PushV
	func_4432(var_401_object); // 0x286 NEW_2
	var_400_object = var_401_object; // 0x287 Mov
	func_4241(var_399_bool, var_400_object); // 0x289 NEW_2
	var_402_object = Obj(); var_403_object = Obj(); // 0x28b PushV
	var_402_object = var_379_object; // 0x28c Mov
	var_403_object = var_385_object; // 0x28d Mov
	TaskCall(5); // 0x28e TaskCall
	func_678(var_404_object, var_405_object, var_406_string, var_407_bool, var_402_object, var_403_object); // 0x28f NEW_2
	TaskReturn(); // 0x290 TaskReturn
	IsDialogEnd(var_388_bool); // 0x292 ObjFunc
	
Label_660:
	var_445_bool = var_388_bool == 0; // 0x294 Not
	if(var_445_bool == 0) goto Label_667; // 0x295 JumpB
	sync(); // 0x296 Func
	IsDialogEnd(var_388_bool); // 0x298 ObjFunc
	goto Label_660; // 0x29a Jump
	
Label_667:
	var_446_object = Obj(); // 0x29b PushV
	var_446_object = var_379_object; // 0x29c Mov
	func_4224(); // 0x29d NEW_2
	StopDialog(var_385_object); // 0x29f Func
	GetReturnValue(var_387_int); // 0x2a1 ObjFunc
	var_378_int = var_387_int; // 0x2a3 Mov
	return 8; // 0x2a4 Return
}


func_4701()
{
	var_64_string = "k10q01"; // 0x125e PushS
	var_65_int = 2; // 0x125f PushI
	SetVariable(var_64_string, var_65_int); // 0x1260 Func
	func_5099(); // 0x1263 NEW_2
	var_89_bool = 0; var_90_string = ""; var_91_string = ""; // 0x1265 PushV
	var_90_string = "quest_k10_01"; // 0x1266 MovS
	var_91_string = "place_soldiers"; // 0x1267 MovS
	func_4572(var_89_bool, var_90_string, var_91_string); // 0x1268 NEW_2
	return 0; // 0x126a Return
}


func_5222(var_107_object, var_108_string, var_109_float)
{
	var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_object = Obj(); var_114_bool = 0; var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_object = Obj(); var_118_bool = 0; // 0x1466 PushV
	GetMainOutdoorScene(var_117_object); // 0x1467 Func
	var_119_bool = var_117_object == 0; // 0x1469 NullEq
	if(var_119_bool == 0) goto Label_5231; // 0x146a JumpB
	var_120_string = "Can't find main outdoor scene"; // 0x146b PushS
	Trace(var_120_string); // 0x146c Func
	return 8; // 0x146e Return
	
Label_5231:
	GetLocator(var_108_string, var_118_bool, var_115_cvector, var_116_cvector); // 0x146f ObjFunc
	var_121_bool = var_118_bool == 0; // 0x1471 Not
	if(var_121_bool == 0) goto Label_5241; // 0x1472 JumpB
	var_122_string = "Warning: outdoor scene locator "; // 0x1473 PushS
	var_123_int = var_122_string + var_108_string; // 0x1474 Add
	var_124_string = " doesnt exist"; // 0x1475 PushS
	var_125_int = var_123_int + var_124_string; // 0x1476 Add
	Trace(var_125_int); // 0x1477 Func
	
Label_5241:
	GetMap(var_107_object); // 0x1479 ObjFunc
	var_126_bool = var_107_object == 0; // 0x147b NullEq
	if(var_126_bool == 0) goto Label_5249; // 0x147c JumpB
	var_127_string = "Can't find map"; // 0x147d PushS
	Trace(var_127_string); // 0x147e Func
	return 8; // 0x1480 Return
	
Label_5249:
	var_128_float = GetByIndex(var_115_cvector, 0); // 0x1481 PushE
	var_129_float = GetByIndex(var_115_cvector, 2); // 0x1482 PushE
	SetMapParams(var_128_float, var_129_float, var_109_float); // 0x1483 ObjFunc
	return 8; // 0x1485 Return
}


func_4715()
{
	var_125_string = "playsound"; // 0x126c PushS
	var_126_string = "givemoney"; // 0x126d PushS
	TriggerWorld(var_125_string, var_126_string); // 0x126e Func
	return 0; // 0x1270 Return
}


func_2158(var_0_object, var_955_int, var_956_object)
{
	var_958_object = Obj(); var_959_bool = 0; var_960_int = 0; var_961_bool = 0; var_962_object = Obj(); var_963_bool = 0; var_964_int = 0; var_965_bool = 0; // 0x86e PushV
	var_0_object = var_956_object; // 0x86f TMov
	var_966_bool = 0; var_967_object = Obj(); var_968_float = 0; // 0x870 PushV
	var_967_object = var_956_object; // 0x871 Mov
	var_968_float = 70.0; // 0x872 MovF
	func_4156(var_967_object, var_968_float); // 0x873 NEW_2
	var_969_bool = var_966_bool == 0; // 0x875 Not
	if(var_969_bool == 0) goto Label_2169; // 0x876 JumpB
	var_955_int = -2; // 0x877 MovI
	return 8; // 0x878 Return
	
Label_2169:
	CreateDialog(var_962_object); // 0x879 Func
	var_970_int = 0; // 0x87b PushV
	func_4630(var_970_int); // 0x87c NEW_2
	SetNPCName(var_970_int); // 0x87e ObjFunc
	var_971_int = 0; // 0x880 PushV
	func_4628(var_971_int); // 0x881 NEW_2
	SetNPCDescription(var_971_int); // 0x883 ObjFunc
	var_972_string = ""; // 0x885 PushV
	func_4632(var_972_string); // 0x886 NEW_2
	SetPhoto(var_972_string); // 0x888 ObjFunc
	var_973_string = ""; // 0x88a PushV
	func_4634(var_973_string); // 0x88b NEW_2
	SetPhoto2(var_973_string); // 0x88d ObjFunc
	var_974_int = 0; // 0x88f PushV
	func_5255(var_974_int); // 0x890 NEW_2
	SetPlayerName(var_974_int); // 0x892 ObjFunc
	var_964_int = -1; // 0x894 MovI
	IsOverrideActive(var_963_bool); // 0x895 Func
	var_975_bool = var_963_bool; // 0x897 Push
	if(var_975_bool == 0) goto Label_2203; // 0x898 JumpB
	var_955_int = -2; // 0x899 MovI
	return 8; // 0x89a Return
	
Label_2203:
	DoDialog(var_962_object); // 0x89b Func
	var_976_bool = 0; var_977_object = Obj(); // 0x89d PushV
	var_978_object = Obj(); // 0x89e PushV
	func_4432(var_978_object); // 0x89f NEW_2
	var_977_object = var_978_object; // 0x8a0 Mov
	func_4241(var_976_bool, var_977_object); // 0x8a2 NEW_2
	var_979_object = Obj(); var_980_object = Obj(); // 0x8a4 PushV
	var_979_object = var_956_object; // 0x8a5 Mov
	var_980_object = var_962_object; // 0x8a6 Mov
	TaskCall(13); // 0x8a7 TaskCall
	func_2239(var_981_object, var_982_object, var_983_string, var_984_bool, var_979_object, var_980_object); // 0x8a8 NEW_2
	TaskReturn(); // 0x8a9 TaskReturn
	IsDialogEnd(var_965_bool); // 0x8ab ObjFunc
	
Label_2221:
	var_1012_bool = var_965_bool == 0; // 0x8ad Not
	if(var_1012_bool == 0) goto Label_2228; // 0x8ae JumpB
	sync(); // 0x8af Func
	IsDialogEnd(var_965_bool); // 0x8b1 ObjFunc
	goto Label_2221; // 0x8b3 Jump
	
Label_2228:
	var_1013_object = Obj(); // 0x8b4 PushV
	var_1013_object = var_956_object; // 0x8b5 Mov
	func_4224(); // 0x8b6 NEW_2
	StopDialog(var_962_object); // 0x8b8 Func
	GetReturnValue(var_964_int); // 0x8ba ObjFunc
	var_955_int = var_964_int; // 0x8bc Mov
	return 8; // 0x8bd Return
}


func_4721(var_147_object)
{
	var_149_string = "feromicin2 is given"; // 0x1272 PushS
	Trace(var_149_string); // 0x1273 Func
	var_150_object = Obj(); var_151_string = ""; var_152_int = 0; // 0x1275 PushV
	var_150_object = var_147_object; // 0x1276 Mov
	var_151_string = "feromicin"; // 0x1277 MovS
	var_152_int = 2; // 0x1278 MovI
	func_4514(var_150_object, var_151_string, var_152_int); // 0x1279 NEW_2
	return 0; // 0x127b Return
}


func_1138(var_2_object, var_497_string)
{
	var_498_bool = 0; // 0x473 PushV
	func_4636(var_498_bool); // 0x474 NEW_2
	var_499_bool = var_498_bool == 0; // 0x476 Not
	if(var_499_bool == 0) goto Label_1145; // 0x477 JumpB
	return 0; // 0x478 Return
	
Label_1145:
	var_500_bool = var_497_string == var_2_object; // 0x479 Eq
	if(var_500_bool == 0) goto Label_1148; // 0x47a JumpB
	return 0; // 0x47b Return
	
Label_1148:
	var_501_string = ""; var_502_bool = 0; // 0x47c PushV
	var_501_string = var_497_string; // 0x47d Mov
	var_503_string = ""; // 0x47e PushS
	var_504_bool = var_497_string == var_503_string; // 0x47f Eq
	if(var_504_bool == 0) goto Label_1155; // 0x480 JumpB
	var_502_bool = 0; // 0x481 MovB
	goto Label_1156; // 0x482 Jump
	
Label_1156:
	func_4395(var_501_string, var_502_bool); // 0x484 NEW_2
	var_2_object = var_497_string; // 0x486 TMov
	return 0; // 0x487 Return
	
Label_1155:
	var_502_bool = 1; // 0x483 MovB
}


func_3702(var_0_object, var_1_object, var_2_object, var_3_string, var_1038_object, var_1039_object)
{
	var_0_object = var_1039_object; // 0xe77 TMov
	var_1_object = var_1038_object; // 0xe78 TMov
	var_3_string = 0; // 0xe79 TMovB
	var_1044_int = 1; // 0xe7a PushI
	if(var_1044_int == 0) goto Label_3730; // 0xe7b JumpB
	var_1045_string = ""; // 0xe7c PushV
	var_1045_string = "Neutral"; // 0xe7d MovS
	func_3760(var_1039_object, var_1045_string); // 0xe7e NEW_2
	var_1053_int = 540539; // 0xe80 PushI
	SetMessage(var_1053_int); // 0xe81 TObjFunc
	ClearReplies(); // 0xe83 TObjFunc
	var_1054_int = 540540; // 0xe85 PushI
	var_1055_int = -1; // 0xe86 PushI
	var_1056_int = 42549; // 0xe87 PushI
	AddReply(var_1054_int, var_1055_int, var_1056_int); // 0xe88 TObjFunc
	var_1057_int = 540799; // 0xe8a PushI
	var_1058_int = -1; // 0xe8b PushI
	var_1059_int = 42848; // 0xe8c PushI
	AddReply(var_1057_int, var_1058_int, var_1059_int); // 0xe8d TObjFunc
	goto Label_3730; // 0xe8f Jump
	
Label_3730:
	var_1060_bool = 0; // 0xe92 PushV
	func_4636(var_1060_bool); // 0xe93 NEW_2
	if(var_1060_bool == 0) goto Label_3745; // 0xe95 JumpB
	
Label_3734:
	lshWaitForAnimEnd(); // 0xe96 Func
	var_1061_string = var_3_string; // 0xe98 PushT
	if(var_1061_string == 0) goto Label_3739; // 0xe99 JumpB
	goto Label_3744; // 0xe9a Jump
	
Label_3744:
	goto Label_3759; // 0xea0 Jump
	
Label_3759:
	return 0; // 0xeaf Return
	
Label_3739:
	var_1062_string = ""; // 0xe9b PushV
	var_1062_string = var_2_object; // 0xe9c MovT
	func_4379(var_1062_string); // 0xe9d NEW_2
	goto Label_3734; // 0xe9f Jump
	
Label_3745:
	var_1063_string = "all"; // 0xea1 PushS
	var_1064_string = "idle"; // 0xea2 PushS
	PlayAnimation(var_1063_string, var_1064_string); // 0xea3 Func
	
Label_3749:
	WaitForAnimEnd(); // 0xea5 Func
	var_1065_string = var_3_string; // 0xea7 PushT
	if(var_1065_string == 0) goto Label_3754; // 0xea8 JumpB
	goto Label_3759; // 0xea9 Jump
	
Label_3754:
	var_1066_string = "all"; // 0xeaa PushS
	var_1067_string = "idle"; // 0xeab PushS
	PlayAnimation(var_1066_string, var_1067_string); // 0xeac Func
	goto Label_3749; // 0xeae Jump
}


func_4732()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x127c PushV
	var_66_string = "k5q04"; // 0x127d PushS
	var_67_int = 2; // 0x127e PushI
	SetVariable(var_66_string, var_67_int); // 0x127f Func
	var_68_object = Obj(); // 0x1281 PushV
	func_5205(var_68_object); // 0x1282 NEW_2
	var_65_object = var_68_object; // 0x1283 Mov
	var_75_string = "k5q04MariaGotoDanko"; // 0x1285 PushS
	var_76_string = "pt_map_eva"; // 0x1286 PushS
	var_77_int = 0; // 0x1287 PushI
	var_78_int = 515279; // 0x1288 PushI
	var_79_float = 0; // 0x1289 PushV
	func_4584(var_79_float); // 0x128a NEW_2
	AddMark(var_75_string, var_76_string, var_77_int, var_78_int, var_79_float); // 0x128c ObjFunc
	func_5138(); // 0x128f NEW_2
	return 2; // 0x1291 Return
}


func_4224()
{
	var_294_bool = 0; var_295_bool = 0; // 0x1080 PushV
	CameraSwitchToNormal(); // 0x1081 Func
	var_296_bool = 0; // 0x1083 PushV
	func_4636(var_296_bool); // 0x1084 NEW_2
	if(var_296_bool == 0) goto Label_4232; // 0x1086 JumpB
	goto Label_4240; // 0x1087 Jump
	
Label_4240:
	return 2; // 0x1090 Return
	
Label_4232:
	var_297_string = "head"; // 0x1088 PushS
	HasAnimationTrack(var_295_bool, var_297_string); // 0x1089 Func
	var_298_bool = var_295_bool; // 0x108b Push
	if(var_298_bool == 0) goto Label_4240; // 0x108c JumpB
	var_299_string = "head"; // 0x108d PushS
	UnlookAsync(var_299_string); // 0x108e Func
}


func_5255(var_139_int)
{
	var_140_int = 0; var_141_int = 0; // 0x1487 PushV
	var_142_string = "branch"; // 0x1488 PushS
	GetVariable(var_142_string, var_141_int); // 0x1489 Func
	var_143_int = 0; // 0x148b PushI
	var_144_bool = var_141_int == var_143_int; // 0x148c Eq
	if(var_144_bool == 0) goto Label_5265; // 0x148d JumpB
	var_139_int = 1; // 0x148e MovI
	return 2; // 0x148f Return
	
Label_5265:
	var_145_int = 1; // 0x1491 PushI
	var_146_bool = var_141_int == var_145_int; // 0x1492 Eq
	if(var_146_bool == 0) goto Label_5270; // 0x1493 JumpB
	var_139_int = 2; // 0x1494 MovI
	return 2; // 0x1495 Return
	
Label_5270:
	var_139_int = 3; // 0x1496 MovI
	return 2; // 0x1497 Return
}


func_1676(var_0_object, var_858_int, var_859_object)
{
	var_861_object = Obj(); var_862_bool = 0; var_863_int = 0; var_864_bool = 0; var_865_object = Obj(); var_866_bool = 0; var_867_int = 0; var_868_bool = 0; // 0x68c PushV
	var_0_object = var_859_object; // 0x68d TMov
	var_869_bool = 0; var_870_object = Obj(); var_871_float = 0; // 0x68e PushV
	var_870_object = var_859_object; // 0x68f Mov
	var_871_float = 70.0; // 0x690 MovF
	func_4156(var_870_object, var_871_float); // 0x691 NEW_2
	var_872_bool = var_869_bool == 0; // 0x693 Not
	if(var_872_bool == 0) goto Label_1687; // 0x694 JumpB
	var_858_int = -2; // 0x695 MovI
	return 8; // 0x696 Return
	
Label_1687:
	CreateDialog(var_865_object); // 0x697 Func
	var_873_int = 0; // 0x699 PushV
	func_4630(var_873_int); // 0x69a NEW_2
	SetNPCName(var_873_int); // 0x69c ObjFunc
	var_874_int = 0; // 0x69e PushV
	func_4628(var_874_int); // 0x69f NEW_2
	SetNPCDescription(var_874_int); // 0x6a1 ObjFunc
	var_875_string = ""; // 0x6a3 PushV
	func_4632(var_875_string); // 0x6a4 NEW_2
	SetPhoto(var_875_string); // 0x6a6 ObjFunc
	var_876_string = ""; // 0x6a8 PushV
	func_4634(var_876_string); // 0x6a9 NEW_2
	SetPhoto2(var_876_string); // 0x6ab ObjFunc
	var_877_int = 0; // 0x6ad PushV
	func_5255(var_877_int); // 0x6ae NEW_2
	SetPlayerName(var_877_int); // 0x6b0 ObjFunc
	var_867_int = -1; // 0x6b2 MovI
	IsOverrideActive(var_866_bool); // 0x6b3 Func
	var_878_bool = var_866_bool; // 0x6b5 Push
	if(var_878_bool == 0) goto Label_1721; // 0x6b6 JumpB
	var_858_int = -2; // 0x6b7 MovI
	return 8; // 0x6b8 Return
	
Label_1721:
	DoDialog(var_865_object); // 0x6b9 Func
	var_879_bool = 0; var_880_object = Obj(); // 0x6bb PushV
	var_881_object = Obj(); // 0x6bc PushV
	func_4432(var_881_object); // 0x6bd NEW_2
	var_880_object = var_881_object; // 0x6be Mov
	func_4241(var_879_bool, var_880_object); // 0x6c0 NEW_2
	var_882_object = Obj(); var_883_object = Obj(); // 0x6c2 PushV
	var_882_object = var_859_object; // 0x6c3 Mov
	var_883_object = var_865_object; // 0x6c4 Mov
	TaskCall(11); // 0x6c5 TaskCall
	func_1757(var_884_object, var_885_object, var_886_string, var_887_bool, var_882_object, var_883_object); // 0x6c6 NEW_2
	TaskReturn(); // 0x6c7 TaskReturn
	IsDialogEnd(var_868_bool); // 0x6c9 ObjFunc
	
Label_1739:
	var_951_bool = var_868_bool == 0; // 0x6cb Not
	if(var_951_bool == 0) goto Label_1746; // 0x6cc JumpB
	sync(); // 0x6cd Func
	IsDialogEnd(var_868_bool); // 0x6cf ObjFunc
	goto Label_1739; // 0x6d1 Jump
	
Label_1746:
	var_952_object = Obj(); // 0x6d2 PushV
	var_952_object = var_859_object; // 0x6d3 Mov
	func_4224(); // 0x6d4 NEW_2
	StopDialog(var_865_object); // 0x6d6 Func
	GetReturnValue(var_867_int); // 0x6d8 ObjFunc
	var_858_int = var_867_int; // 0x6da Mov
	return 8; // 0x6db Return
}


func_4241(var_148_bool, var_149_object)
{
	var_153_int = 0; var_154_int = 0; var_155_int = 0; var_156_int = 0; // 0x1091 PushV
	var_157_string = "voice_common"; // 0x1092 PushS
	GetVariable(var_157_string, var_155_int); // 0x1093 Func
	var_158_int = var_155_int; // 0x1095 Push
	if(var_158_int == 0) goto Label_4279; // 0x1096 JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x1097 PushV
	var_160_object = var_149_object; // 0x1098 Mov
	func_4299(var_160_object); // 0x1099 NEW_2
	var_189_bool = var_159_bool == 0; // 0x109b Not
	if(var_189_bool == 0) goto Label_4261; // 0x109c JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x109d PushV
	var_191_object = var_149_object; // 0x109e Mov
	func_4336(var_191_object); // 0x109f NEW_2
	var_225_bool = var_190_bool == 0; // 0x10a1 Not
	if(var_225_bool == 0) goto Label_4261; // 0x10a2 JumpB
	var_148_bool = 0; // 0x10a3 MovB
	return 4; // 0x10a4 Return
	
Label_4261:
	var_226_int = 2; // 0x10a5 PushI
	irand(var_156_int, var_226_int); // 0x10a6 Func
	var_227_int = var_156_int; // 0x10a8 Push
	if(var_227_int == 0) goto Label_4274; // 0x10a9 JumpB
	var_228_string = "voice_common"; // 0x10aa PushS
	var_229_int = 1; // 0x10ab PushI
	var_230_int = var_155_int + var_229_int; // 0x10ac Add
	var_231_int = 3; // 0x10ad PushI
	var_232_int = var_230_int / var_231_int; // 0x10ae Mod
	SetVariable(var_228_string, var_232_int); // 0x10af Func
	goto Label_4278; // 0x10b1 Jump
	
Label_4278:
	goto Label_4297; // 0x10b6 Jump
	
Label_4297:
	var_148_bool = 1; // 0x10c9 MovB
	return 4; // 0x10ca Return
	
Label_4274:
	var_233_string = "voice_common"; // 0x10b2 PushS
	var_234_int = 0; // 0x10b3 PushI
	SetVariable(var_233_string, var_234_int); // 0x10b4 Func
	
Label_4279:
	var_235_bool = 0; var_236_object = Obj(); // 0x10b7 PushV
	var_236_object = var_149_object; // 0x10b8 Mov
	func_4336(var_236_object); // 0x10b9 NEW_2
	var_237_bool = var_235_bool == 0; // 0x10bb Not
	if(var_237_bool == 0) goto Label_4293; // 0x10bc JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0x10bd PushV
	var_239_object = var_149_object; // 0x10be Mov
	func_4299(var_239_object); // 0x10bf NEW_2
	var_240_bool = var_238_bool == 0; // 0x10c1 Not
	if(var_240_bool == 0) goto Label_4293; // 0x10c2 JumpB
	var_148_bool = 0; // 0x10c3 MovB
	return 4; // 0x10c4 Return
	
Label_4293:
	var_241_string = "voice_common"; // 0x10c5 PushS
	var_242_int = 1; // 0x10c6 PushI
	SetVariable(var_241_string, var_242_int); // 0x10c7 Func
}


func_4755()
{
	func_5125(); // 0x1295 NEW_2
	return 0; // 0x1297 Return
}


func_4760()
{
	var_64_string = "ook8Maria1"; // 0x1299 PushS
	var_65_int = 1; // 0x129a PushI
	SetVariable(var_64_string, var_65_int); // 0x129b Func
	return 0; // 0x129d Return
}


func_5272(var_711_int)
{
	var_712_int = 0; var_713_int = 0; // 0x1498 PushV
	var_714_string = "k2system_danko_day"; // 0x1499 PushS
	GetVariable(var_714_string, var_713_int); // 0x149a Func
	var_711_int = var_713_int; // 0x149c Mov
	return 2; // 0x149d Return
}


func_4766()
{
	var_70_string = "ook8Maria2"; // 0x129f PushS
	var_71_int = 1; // 0x12a0 PushI
	SetVariable(var_70_string, var_71_int); // 0x12a1 Func
	return 0; // 0x12a3 Return
}


func_5278(var_720_int)
{
	var_721_int = 0; var_722_int = 0; var_723_int = 0; var_724_int = 0; // 0x149e PushV
	var_725_int = 0; // 0x149f PushV
	func_5272(var_725_int); // 0x14a0 NEW_2
	var_723_int = var_725_int; // 0x14a1 Mov
	var_726_string = "k2system_danko_state"; // 0x14a3 PushS
	var_727_int = var_726_string + var_723_int; // 0x14a4 Add
	GetVariable(var_727_int, var_724_int); // 0x14a5 Func
	var_720_int = var_724_int; // 0x14a7 Mov
	return 4; // 0x14a8 Return
}


func_164(var_2_object, var_343_string)
{
	var_344_bool = 0; // 0xa5 PushV
	func_4636(var_344_bool); // 0xa6 NEW_2
	var_345_bool = var_344_bool == 0; // 0xa8 Not
	if(var_345_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_346_bool = var_343_string == var_2_object; // 0xab Eq
	if(var_346_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_347_string = ""; var_348_bool = 0; // 0xae PushV
	var_347_string = var_343_string; // 0xaf Mov
	var_349_string = ""; // 0xb0 PushS
	var_350_bool = var_343_string == var_349_string; // 0xb1 Eq
	if(var_350_bool == 0) goto Label_181; // 0xb2 JumpB
	var_348_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_4395(var_347_string, var_348_bool); // 0xb6 NEW_2
	var_2_object = var_343_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_348_bool = 1; // 0xb5 MovB
}


func_4772()
{
	var_64_string = "ook9Maria1"; // 0x12a5 PushS
	var_65_int = 1; // 0x12a6 PushI
	SetVariable(var_64_string, var_65_int); // 0x12a7 Func
	return 0; // 0x12a9 Return
}


func_678(var_0_object, var_1_object, var_2_object, var_3_string, var_402_object, var_403_object)
{
	var_0_object = var_403_object; // 0x2a7 TMov
	var_1_object = var_402_object; // 0x2a8 TMov
	var_3_string = 0; // 0x2a9 TMovB
	var_408_int = 1; // 0x2aa PushI
	if(var_408_int == 0) goto Label_720; // 0x2ab JumpB
	var_409_string = ""; // 0x2ac PushV
	var_409_string = "Neutral"; // 0x2ad MovS
	func_750(var_403_object, var_409_string); // 0x2ae NEW_2
	var_417_int = 525607; // 0x2b0 PushI
	SetMessage(var_417_int); // 0x2b1 TObjFunc
	ClearReplies(); // 0x2b3 TObjFunc
	var_418_bool = 0; // 0x2b5 PushV
	var_418_bool = 0; // 0x2b6 MovB
	var_419_bool = 0; var_420_object = Obj(); // 0x2b7 PushV
	var_420_object = var_1_object; // 0x2b8 MovT
	func_4895(var_420_object); // 0x2b9 NEW_2
	if(var_419_bool == 0) goto Label_706; // 0x2bb JumpB
	var_425_bool = 0; var_426_object = Obj(); // 0x2bc PushV
	var_426_object = var_1_object; // 0x2bd MovT
	func_4907(var_426_object); // 0x2be NEW_2
	if(var_425_bool == 0) goto Label_706; // 0x2c0 JumpB
	var_418_bool = 1; // 0x2c1 MovB
	
Label_706:
	if(var_418_bool == 0) goto Label_712; // 0x2c2 JumpB
	var_431_int = 525608; // 0x2c3 PushI
	var_432_int = 26956; // 0x2c4 PushI
	var_433_int = 26955; // 0x2c5 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x2c6 TObjFunc
	
Label_712:
	var_434_int = 525613; // 0x2c8 PushI
	var_435_int = -1; // 0x2c9 PushI
	var_436_int = 26960; // 0x2ca PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x2cb TObjFunc
	goto Label_720; // 0x2cd Jump
	
Label_720:
	var_437_bool = 0; // 0x2d0 PushV
	func_4636(var_437_bool); // 0x2d1 NEW_2
	if(var_437_bool == 0) goto Label_735; // 0x2d3 JumpB
	
Label_724:
	lshWaitForAnimEnd(); // 0x2d4 Func
	var_438_string = var_3_string; // 0x2d6 PushT
	if(var_438_string == 0) goto Label_729; // 0x2d7 JumpB
	goto Label_734; // 0x2d8 Jump
	
Label_734:
	goto Label_749; // 0x2de Jump
	
Label_749:
	return 0; // 0x2ed Return
	
Label_729:
	var_439_string = ""; // 0x2d9 PushV
	var_439_string = var_2_object; // 0x2da MovT
	func_4379(var_439_string); // 0x2db NEW_2
	goto Label_724; // 0x2dd Jump
	
Label_735:
	var_440_string = "all"; // 0x2df PushS
	var_441_string = "idle"; // 0x2e0 PushS
	PlayAnimation(var_440_string, var_441_string); // 0x2e1 Func
	
Label_739:
	WaitForAnimEnd(); // 0x2e3 Func
	var_442_string = var_3_string; // 0x2e5 PushT
	if(var_442_string == 0) goto Label_744; // 0x2e6 JumpB
	goto Label_749; // 0x2e7 Jump
	
Label_744:
	var_443_string = "all"; // 0x2e8 PushS
	var_444_string = "idle"; // 0x2e9 PushS
	PlayAnimation(var_443_string, var_444_string); // 0x2ea Func
	goto Label_739; // 0x2ec Jump
}


func_3236(var_0_object, var_773_int, var_774_object)
{
	var_776_object = Obj(); var_777_bool = 0; var_778_int = 0; var_779_bool = 0; var_780_object = Obj(); var_781_bool = 0; var_782_int = 0; var_783_bool = 0; // 0xca4 PushV
	var_0_object = var_774_object; // 0xca5 TMov
	var_784_bool = 0; var_785_object = Obj(); var_786_float = 0; // 0xca6 PushV
	var_785_object = var_774_object; // 0xca7 Mov
	var_786_float = 70.0; // 0xca8 MovF
	func_4156(var_785_object, var_786_float); // 0xca9 NEW_2
	var_787_bool = var_784_bool == 0; // 0xcab Not
	if(var_787_bool == 0) goto Label_3247; // 0xcac JumpB
	var_773_int = -2; // 0xcad MovI
	return 8; // 0xcae Return
	
Label_3247:
	CreateDialog(var_780_object); // 0xcaf Func
	var_788_int = 0; // 0xcb1 PushV
	func_4630(var_788_int); // 0xcb2 NEW_2
	SetNPCName(var_788_int); // 0xcb4 ObjFunc
	var_789_int = 0; // 0xcb6 PushV
	func_4628(var_789_int); // 0xcb7 NEW_2
	SetNPCDescription(var_789_int); // 0xcb9 ObjFunc
	var_790_string = ""; // 0xcbb PushV
	func_4632(var_790_string); // 0xcbc NEW_2
	SetPhoto(var_790_string); // 0xcbe ObjFunc
	var_791_string = ""; // 0xcc0 PushV
	func_4634(var_791_string); // 0xcc1 NEW_2
	SetPhoto2(var_791_string); // 0xcc3 ObjFunc
	var_792_int = 0; // 0xcc5 PushV
	func_5255(var_792_int); // 0xcc6 NEW_2
	SetPlayerName(var_792_int); // 0xcc8 ObjFunc
	var_782_int = -1; // 0xcca MovI
	IsOverrideActive(var_781_bool); // 0xccb Func
	var_793_bool = var_781_bool; // 0xccd Push
	if(var_793_bool == 0) goto Label_3281; // 0xcce JumpB
	var_773_int = -2; // 0xccf MovI
	return 8; // 0xcd0 Return
	
Label_3281:
	DoDialog(var_780_object); // 0xcd1 Func
	var_794_bool = 0; var_795_object = Obj(); // 0xcd3 PushV
	var_796_object = Obj(); // 0xcd4 PushV
	func_4432(var_796_object); // 0xcd5 NEW_2
	var_795_object = var_796_object; // 0xcd6 Mov
	func_4241(var_794_bool, var_795_object); // 0xcd8 NEW_2
	var_797_object = Obj(); var_798_object = Obj(); // 0xcda PushV
	var_797_object = var_774_object; // 0xcdb Mov
	var_798_object = var_780_object; // 0xcdc Mov
	TaskCall(19); // 0xcdd TaskCall
	func_3317(var_799_object, var_800_object, var_801_string, var_802_bool, var_797_object, var_798_object); // 0xcde NEW_2
	TaskReturn(); // 0xcdf TaskReturn
	IsDialogEnd(var_783_bool); // 0xce1 ObjFunc
	
Label_3299:
	var_854_bool = var_783_bool == 0; // 0xce3 Not
	if(var_854_bool == 0) goto Label_3306; // 0xce4 JumpB
	sync(); // 0xce5 Func
	IsDialogEnd(var_783_bool); // 0xce7 ObjFunc
	goto Label_3299; // 0xce9 Jump
	
Label_3306:
	var_855_object = Obj(); // 0xcea PushV
	var_855_object = var_774_object; // 0xceb Mov
	func_4224(); // 0xcec NEW_2
	StopDialog(var_780_object); // 0xcee Func
	GetReturnValue(var_782_int); // 0xcf0 ObjFunc
	var_773_int = var_782_int; // 0xcf2 Mov
	return 8; // 0xcf3 Return
}


func_5289(var_709_bool)
{
	var_710_int = 0; // 0x14a9 PushV
	func_4589(var_710_int); // 0x14aa NEW_2
	var_711_int = 0; // 0x14ac PushV
	func_5272(var_711_int); // 0x14ad NEW_2
	var_709_bool = var_710_int == var_711_int; // 0x14af Eq2
	return 0; // 0x14b0 Return
}


func_4778()
{
	var_70_string = "ook9Maria2"; // 0x12ab PushS
	var_71_int = 1; // 0x12ac PushI
	SetVariable(var_70_string, var_71_int); // 0x12ad Func
	return 0; // 0x12af Return
}


func_4784()
{
	var_99_string = "ook10Maria1"; // 0x12b1 PushS
	var_100_int = 1; // 0x12b2 PushI
	SetVariable(var_99_string, var_100_int); // 0x12b3 Func
	return 0; // 0x12b5 Return
}


func_3760(var_2_object, var_1045_string)
{
	var_1046_bool = 0; // 0xeb1 PushV
	func_4636(var_1046_bool); // 0xeb2 NEW_2
	var_1047_bool = var_1046_bool == 0; // 0xeb4 Not
	if(var_1047_bool == 0) goto Label_3767; // 0xeb5 JumpB
	return 0; // 0xeb6 Return
	
Label_3767:
	var_1048_bool = var_1045_string == var_2_object; // 0xeb7 Eq
	if(var_1048_bool == 0) goto Label_3770; // 0xeb8 JumpB
	return 0; // 0xeb9 Return
	
Label_3770:
	var_1049_string = ""; var_1050_bool = 0; // 0xeba PushV
	var_1049_string = var_1045_string; // 0xebb Mov
	var_1051_string = ""; // 0xebc PushS
	var_1052_bool = var_1045_string == var_1051_string; // 0xebd Eq
	if(var_1052_bool == 0) goto Label_3777; // 0xebe JumpB
	var_1050_bool = 0; // 0xebf MovB
	goto Label_3778; // 0xec0 Jump
	
Label_3778:
	func_4395(var_1049_string, var_1050_bool); // 0xec2 NEW_2
	var_2_object = var_1045_string; // 0xec4 TMov
	return 0; // 0xec5 Return
	
Label_3777:
	var_1050_bool = 1; // 0xec1 MovB
}


func_5297(var_746_bool)
{
	var_747_int = 0; // 0x14b1 PushV
	func_5278(var_747_int); // 0x14b2 NEW_2
	var_748_int = 2; // 0x14b4 PushI
	var_746_bool = var_747_int == var_748_int; // 0x14b5 Eq2
	return 0; // 0x14b6 Return
}


func_4790()
{
	var_105_string = "ook10Maria2"; // 0x12b7 PushS
	var_106_int = 1; // 0x12b8 PushI
	SetVariable(var_105_string, var_106_int); // 0x12b9 Func
	return 0; // 0x12bb Return
}


func_5303(var_719_bool)
{
	var_720_int = 0; // 0x14b7 PushV
	func_5278(var_720_int); // 0x14b8 NEW_2
	var_728_int = 0; // 0x14ba PushI
	var_719_bool = var_720_int == var_728_int; // 0x14bb Eq2
	return 0; // 0x14bc Return
}


func_4796(var_99_object)
{
	var_101_int = 0; var_102_int = 0; // 0x12bc PushV
	var_103_int = 1000; // 0x12bd PushI
	irand(var_102_int, var_103_int); // 0x12be Func
	var_104_object = Obj(); var_105_int = 0; // 0x12c0 PushV
	var_104_object = var_99_object; // 0x12c1 Mov
	var_106_int = 2000; // 0x12c2 PushI
	var_105_int = var_102_int + var_106_int; // 0x12c3 Add2
	func_4476(var_104_object, var_105_int); // 0x12c4 NEW_2
	return 2; // 0x12c6 Return
}


func_5309(var_74_object)
{
	var_75_bool = GlobalVars[1]; // 0x14be PushGE
	var_76_bool = var_75_bool == 0; // 0x14bf Not
	if(var_76_bool == 0) goto Label_5322; // 0x14c0 JumpB
	var_77_int = 0; var_78_object = Obj(); // 0x14c1 PushV
	var_78_object = var_74_object; // 0x14c2 Mov
	TaskCall(2); // 0x14c3 TaskCall
	func_371(var_79_object, var_77_int, var_78_object); // 0x14c4 NEW_2
	TaskReturn(); // 0x14c5 TaskReturn
	var_300_bool = GlobalVars[1]; // 0x14c7 PushGE
	var_300_bool = 1; // 0x14c8 MovB
	GlobalVars[1] = var_300_bool; // 0x14c9 PopGE
	
Label_5322:
	var_301_bool = 0; var_302_int = 0; // 0x14ca PushV
	var_302_int = 1; // 0x14cb MovI
	func_4598(var_301_bool, var_302_int); // 0x14cc NEW_2
	if(var_301_bool == 0) goto Label_5334; // 0x14ce JumpB
	var_304_int = 0; var_305_object = Obj(); // 0x14cf PushV
	var_305_object = var_74_object; // 0x14d0 Mov
	TaskCall(0); // 0x14d1 TaskCall
	func_0(var_306_object, var_304_int, var_305_object); // 0x14d2 NEW_2
	TaskReturn(); // 0x14d3 TaskReturn
	return 0; // 0x14d5 Return
	
Label_5334:
	var_376_bool = 0; var_377_int = 0; // 0x14d6 PushV
	var_377_int = 3; // 0x14d7 MovI
	func_4598(var_376_bool, var_377_int); // 0x14d8 NEW_2
	if(var_376_bool == 0) goto Label_5346; // 0x14da JumpB
	var_378_int = 0; var_379_object = Obj(); // 0x14db PushV
	var_379_object = var_74_object; // 0x14dc Mov
	TaskCall(4); // 0x14dd TaskCall
	func_597(var_380_object, var_378_int, var_379_object); // 0x14de NEW_2
	TaskReturn(); // 0x14df TaskReturn
	return 0; // 0x14e1 Return
	
Label_5346:
	var_447_bool = 0; var_448_int = 0; // 0x14e2 PushV
	var_448_int = 4; // 0x14e3 MovI
	func_4598(var_447_bool, var_448_int); // 0x14e4 NEW_2
	if(var_447_bool == 0) goto Label_5358; // 0x14e6 JumpB
	var_449_int = 0; var_450_object = Obj(); // 0x14e7 PushV
	var_450_object = var_74_object; // 0x14e8 Mov
	TaskCall(6); // 0x14e9 TaskCall
	func_960(var_451_object, var_449_int, var_450_object); // 0x14ea NEW_2
	TaskReturn(); // 0x14eb TaskReturn
	return 0; // 0x14ed Return
	
Label_5358:
	var_530_bool = 0; var_531_int = 0; // 0x14ee PushV
	var_531_int = 5; // 0x14ef MovI
	func_4598(var_530_bool, var_531_int); // 0x14f0 NEW_2
	if(var_530_bool == 0) goto Label_5370; // 0x14f2 JumpB
	var_532_int = 0; var_533_object = Obj(); // 0x14f3 PushV
	var_533_object = var_74_object; // 0x14f4 Mov
	TaskCall(14); // 0x14f5 TaskCall
	func_2417(var_534_object, var_532_int, var_533_object); // 0x14f6 NEW_2
	TaskReturn(); // 0x14f7 TaskReturn
	return 0; // 0x14f9 Return
	
Label_5370:
	var_597_bool = 0; var_598_int = 0; // 0x14fa PushV
	var_598_int = 7; // 0x14fb MovI
	func_4598(var_597_bool, var_598_int); // 0x14fc NEW_2
	if(var_597_bool == 0) goto Label_5382; // 0x14fe JumpB
	var_599_int = 0; var_600_object = Obj(); // 0x14ff PushV
	var_600_object = var_74_object; // 0x1500 Mov
	TaskCall(8); // 0x1501 TaskCall
	func_1337(var_601_object, var_599_int, var_600_object); // 0x1502 NEW_2
	TaskReturn(); // 0x1503 TaskReturn
	return 0; // 0x1505 Return
	
Label_5382:
	var_661_bool = 0; var_662_int = 0; // 0x1506 PushV
	var_662_int = 8; // 0x1507 MovI
	func_4598(var_661_bool, var_662_int); // 0x1508 NEW_2
	if(var_661_bool == 0) goto Label_5394; // 0x150a JumpB
	var_663_int = 0; var_664_object = Obj(); // 0x150b PushV
	var_664_object = var_74_object; // 0x150c Mov
	TaskCall(16); // 0x150d TaskCall
	func_2810(var_665_object, var_663_int, var_664_object); // 0x150e NEW_2
	TaskReturn(); // 0x150f TaskReturn
	return 0; // 0x1511 Return
	
Label_5394:
	var_771_bool = 0; var_772_int = 0; // 0x1512 PushV
	var_772_int = 9; // 0x1513 MovI
	func_4598(var_771_bool, var_772_int); // 0x1514 NEW_2
	if(var_771_bool == 0) goto Label_5406; // 0x1516 JumpB
	var_773_int = 0; var_774_object = Obj(); // 0x1517 PushV
	var_774_object = var_74_object; // 0x1518 Mov
	TaskCall(18); // 0x1519 TaskCall
	func_3236(var_775_object, var_773_int, var_774_object); // 0x151a NEW_2
	TaskReturn(); // 0x151b TaskReturn
	return 0; // 0x151d Return
	
Label_5406:
	var_856_bool = 0; var_857_int = 0; // 0x151e PushV
	var_857_int = 10; // 0x151f MovI
	func_4598(var_856_bool, var_857_int); // 0x1520 NEW_2
	if(var_856_bool == 0) goto Label_5418; // 0x1522 JumpB
	var_858_int = 0; var_859_object = Obj(); // 0x1523 PushV
	var_859_object = var_74_object; // 0x1524 Mov
	TaskCall(10); // 0x1525 TaskCall
	func_1676(var_860_object, var_858_int, var_859_object); // 0x1526 NEW_2
	TaskReturn(); // 0x1527 TaskReturn
	return 0; // 0x1529 Return
	
Label_5418:
	var_953_bool = 0; var_954_int = 0; // 0x152a PushV
	var_954_int = 12; // 0x152b MovI
	func_4598(var_953_bool, var_954_int); // 0x152c NEW_2
	if(var_953_bool == 0) goto Label_5430; // 0x152e JumpB
	var_955_int = 0; var_956_object = Obj(); // 0x152f PushV
	var_956_object = var_74_object; // 0x1530 Mov
	TaskCall(12); // 0x1531 TaskCall
	func_2158(var_957_object, var_955_int, var_956_object); // 0x1532 NEW_2
	TaskReturn(); // 0x1533 TaskReturn
	return 0; // 0x1535 Return
	
Label_5430:
	var_1014_int = 0; var_1015_object = Obj(); // 0x1536 PushV
	var_1015_object = var_74_object; // 0x1537 Mov
	TaskCall(20); // 0x1538 TaskCall
	func_3621(var_1016_object, var_1014_int, var_1015_object); // 0x1539 NEW_2
	TaskReturn(); // 0x153a TaskReturn
	return 0; // 0x153c Return
}


func_2239(var_0_object, var_1_object, var_2_object, var_3_string, var_979_object, var_980_object)
{
	var_0_object = var_980_object; // 0x8c0 TMov
	var_1_object = var_979_object; // 0x8c1 TMov
	var_3_string = 0; // 0x8c2 TMovB
	var_985_int = 1; // 0x8c3 PushI
	if(var_985_int == 0) goto Label_2272; // 0x8c4 JumpB
	var_986_string = ""; // 0x8c5 PushV
	var_986_string = "Neutral"; // 0x8c6 MovS
	func_2302(var_980_object, var_986_string); // 0x8c7 NEW_2
	var_994_int = 535231; // 0x8c9 PushI
	SetMessage(var_994_int); // 0x8ca TObjFunc
	ClearReplies(); // 0x8cc TObjFunc
	var_995_int = 535232; // 0x8ce PushI
	var_996_int = 36953; // 0x8cf PushI
	var_997_int = 36907; // 0x8d0 PushI
	AddReply(var_995_int, var_996_int, var_997_int); // 0x8d1 TObjFunc
	var_998_int = 535233; // 0x8d3 PushI
	var_999_int = -1; // 0x8d4 PushI
	var_1000_int = 36908; // 0x8d5 PushI
	AddReply(var_998_int, var_999_int, var_1000_int); // 0x8d6 TObjFunc
	var_1001_int = 535280; // 0x8d8 PushI
	var_1002_int = -1; // 0x8d9 PushI
	var_1003_int = 36956; // 0x8da PushI
	AddReply(var_1001_int, var_1002_int, var_1003_int); // 0x8db TObjFunc
	goto Label_2272; // 0x8dd Jump
	
Label_2272:
	var_1004_bool = 0; // 0x8e0 PushV
	func_4636(var_1004_bool); // 0x8e1 NEW_2
	if(var_1004_bool == 0) goto Label_2287; // 0x8e3 JumpB
	
Label_2276:
	lshWaitForAnimEnd(); // 0x8e4 Func
	var_1005_string = var_3_string; // 0x8e6 PushT
	if(var_1005_string == 0) goto Label_2281; // 0x8e7 JumpB
	goto Label_2286; // 0x8e8 Jump
	
Label_2286:
	goto Label_2301; // 0x8ee Jump
	
Label_2301:
	return 0; // 0x8fd Return
	
Label_2281:
	var_1006_string = ""; // 0x8e9 PushV
	var_1006_string = var_2_object; // 0x8ea MovT
	func_4379(var_1006_string); // 0x8eb NEW_2
	goto Label_2276; // 0x8ed Jump
	
Label_2287:
	var_1007_string = "all"; // 0x8ef PushS
	var_1008_string = "idle"; // 0x8f0 PushS
	PlayAnimation(var_1007_string, var_1008_string); // 0x8f1 Func
	
Label_2291:
	WaitForAnimEnd(); // 0x8f3 Func
	var_1009_string = var_3_string; // 0x8f5 PushT
	if(var_1009_string == 0) goto Label_2296; // 0x8f6 JumpB
	goto Label_2301; // 0x8f7 Jump
	
Label_2296:
	var_1010_string = "all"; // 0x8f8 PushS
	var_1011_string = "idle"; // 0x8f9 PushS
	PlayAnimation(var_1010_string, var_1011_string); // 0x8fa Func
	goto Label_2291; // 0x8fc Jump
}


func_4807(var_99_object)
{
	var_101_int = 0; var_102_int = 0; // 0x12c7 PushV
	var_103_int = 1000; // 0x12c8 PushI
	irand(var_102_int, var_103_int); // 0x12c9 Func
	var_104_object = Obj(); var_105_int = 0; // 0x12cb PushV
	var_104_object = var_99_object; // 0x12cc Mov
	var_106_int = 3000; // 0x12cd PushI
	var_105_int = var_102_int + var_106_int; // 0x12ce Add2
	func_4476(var_104_object, var_105_int); // 0x12cf NEW_2
	return 2; // 0x12d1 Return
}


func_4299(var_159_bool)
{
	var_161_string = ""; var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_string = ""; var_166_string = ""; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_string = ""; // 0x10cb PushV
	var_166_string = "c"; // 0x10cc MovS
	var_167_int = 0; // 0x10cd MovI
	
Label_4302:
	var_171_int = 1; // 0x10ce PushI
	if(var_171_int == 0) goto Label_4315; // 0x10cf JumpB
	var_172_int = 1; // 0x10d0 PushI
	var_173_int = var_167_int + var_172_int; // 0x10d1 Add
	var_174_int = var_166_string + var_173_int; // 0x10d2 Add
	HasProperty(var_174_int, var_168_bool); // 0x10d3 ObjFunc
	var_175_bool = var_168_bool == 0; // 0x10d5 Not
	if(var_175_bool == 0) goto Label_4312; // 0x10d6 JumpB
	goto Label_4315; // 0x10d7 Jump
	
Label_4315:
	var_176_bool = var_167_int == 0; // 0x10db Not
	if(var_176_bool == 0) goto Label_4319; // 0x10dc JumpB
	var_159_bool = 0; // 0x10dd MovB
	return 10; // 0x10de Return
	
Label_4319:
	var_169_int = 0; // 0x10df MovI
	var_177_int = 1; // 0x10e0 PushI
	var_178_bool = var_167_int > var_177_int; // 0x10e1 GT
	if(var_178_bool == 0) goto Label_4325; // 0x10e2 JumpB
	irand(var_169_int, var_167_int); // 0x10e3 Func
	
Label_4325:
	var_179_int = 1; // 0x10e5 PushI
	var_180_int = var_169_int + var_179_int; // 0x10e6 Add
	var_181_int = var_166_string + var_180_int; // 0x10e7 Add
	GetProperty(var_181_int, var_170_string); // 0x10e8 ObjFunc
	var_182_bool = 0; var_183_string = ""; // 0x10ea PushV
	var_183_string = var_170_string; // 0x10eb Mov
	func_4410(var_182_bool, var_183_string); // 0x10ec NEW_2
	var_159_bool = var_182_bool; // 0x10ed Mov
	return 10; // 0x10ef Return
	
Label_4312:
	var_188_int = 1; // 0x10d8 PushI
	var_167_int = var_167_int + var_188_int; // 0x10d9 Add2
	goto Label_4302; // 0x10da Jump
}


func_4818(var_119_object)
{
	var_121_int = 0; var_122_int = 0; // 0x12d2 PushV
	var_123_int = 1000; // 0x12d3 PushI
	irand(var_122_int, var_123_int); // 0x12d4 Func
	var_124_object = Obj(); var_125_int = 0; // 0x12d6 PushV
	var_124_object = var_119_object; // 0x12d7 Mov
	var_126_int = 4000; // 0x12d8 PushI
	var_125_int = var_122_int + var_126_int; // 0x12d9 Add2
	func_4476(var_124_object, var_125_int); // 0x12da NEW_2
	return 2; // 0x12dc Return
}


func_4829(var_62_object)
{
	var_64_bool = 0; var_65_object = Obj(); var_66_float = 0; // 0x12de PushV
	var_65_object = var_62_object; // 0x12df Mov
	var_66_float = 0.1; // 0x12e0 MovF
	func_4527(var_64_bool, var_65_object, var_66_float); // 0x12e1 NEW_2
	return 0; // 0x12e3 Return
}


func_1757(var_0_object, var_1_object, var_2_object, var_3_string, var_882_object, var_883_object)
{
	var_0_object = var_883_object; // 0x6de TMov
	var_1_object = var_882_object; // 0x6df TMov
	var_3_string = 0; // 0x6e0 TMovB
	var_888_int = 1; // 0x6e1 PushI
	if(var_888_int == 0) goto Label_1851; // 0x6e2 JumpB
	var_889_string = ""; // 0x6e3 PushV
	var_889_string = "Mysterious"; // 0x6e4 MovS
	func_1881(var_883_object, var_889_string); // 0x6e5 NEW_2
	var_897_int = 526947; // 0x6e7 PushI
	SetMessage(var_897_int); // 0x6e8 TObjFunc
	ClearReplies(); // 0x6ea TObjFunc
	var_898_bool = 0; var_899_object = Obj(); // 0x6ec PushV
	var_899_object = var_1_object; // 0x6ed MovT
	func_4955(var_899_object); // 0x6ee NEW_2
	if(var_898_bool == 0) goto Label_1782; // 0x6f0 JumpB
	var_904_int = 526948; // 0x6f1 PushI
	var_905_int = 28241; // 0x6f2 PushI
	var_906_int = 28240; // 0x6f3 PushI
	AddReply(var_904_int, var_905_int, var_906_int); // 0x6f4 TObjFunc
	
Label_1782:
	var_907_bool = 0; // 0x6f6 PushV
	var_907_bool = 0; // 0x6f7 MovB
	var_908_bool = 0; // 0x6f8 PushV
	var_908_bool = 0; // 0x6f9 MovB
	var_909_bool = 0; var_910_object = Obj(); // 0x6fa PushV
	var_910_object = var_1_object; // 0x6fb MovT
	func_4979(var_909_bool, var_910_object); // 0x6fc NEW_2
	if(var_909_bool == 0) goto Label_1797; // 0x6fe JumpB
	var_911_bool = 0; var_912_object = Obj(); // 0x6ff PushV
	var_912_object = var_1_object; // 0x700 MovT
	func_4989(var_911_bool, var_912_object); // 0x701 NEW_2
	if(var_911_bool == 0) goto Label_1797; // 0x703 JumpB
	var_908_bool = 1; // 0x704 MovB
	
Label_1797:
	if(var_908_bool == 0) goto Label_1804; // 0x705 JumpB
	var_913_bool = 0; var_914_object = Obj(); // 0x706 PushV
	var_914_object = var_1_object; // 0x707 MovT
	func_5057(var_914_object); // 0x708 NEW_2
	if(var_913_bool == 0) goto Label_1804; // 0x70a JumpB
	var_907_bool = 1; // 0x70b MovB
	
Label_1804:
	if(var_907_bool == 0) goto Label_1810; // 0x70c JumpB
	var_919_int = 539852; // 0x70d PushI
	var_920_int = 41805; // 0x70e PushI
	var_921_int = 41804; // 0x70f PushI
	AddReply(var_919_int, var_920_int, var_921_int); // 0x710 TObjFunc
	
Label_1810:
	var_922_bool = 0; // 0x712 PushV
	var_922_bool = 0; // 0x713 MovB
	var_923_bool = 0; // 0x714 PushV
	var_923_bool = 0; // 0x715 MovB
	var_924_bool = 0; var_925_object = Obj(); // 0x716 PushV
	var_925_object = var_1_object; // 0x717 MovT
	func_4979(var_924_bool, var_925_object); // 0x718 NEW_2
	if(var_924_bool == 0) goto Label_1825; // 0x71a JumpB
	var_926_bool = 0; var_927_object = Obj(); // 0x71b PushV
	var_927_object = var_1_object; // 0x71c MovT
	func_4999(var_926_bool, var_927_object); // 0x71d NEW_2
	if(var_926_bool == 0) goto Label_1825; // 0x71f JumpB
	var_923_bool = 1; // 0x720 MovB
	
Label_1825:
	if(var_923_bool == 0) goto Label_1832; // 0x721 JumpB
	var_928_bool = 0; var_929_object = Obj(); // 0x722 PushV
	var_929_object = var_1_object; // 0x723 MovT
	func_5069(var_929_object); // 0x724 NEW_2
	if(var_928_bool == 0) goto Label_1832; // 0x726 JumpB
	var_922_bool = 1; // 0x727 MovB
	
Label_1832:
	if(var_922_bool == 0) goto Label_1838; // 0x728 JumpB
	var_934_int = 539855; // 0x729 PushI
	var_935_int = 41808; // 0x72a PushI
	var_936_int = 41807; // 0x72b PushI
	AddReply(var_934_int, var_935_int, var_936_int); // 0x72c TObjFunc
	
Label_1838:
	var_937_int = 526951; // 0x72e PushI
	var_938_int = -1; // 0x72f PushI
	var_939_int = 28243; // 0x730 PushI
	AddReply(var_937_int, var_938_int, var_939_int); // 0x731 TObjFunc
	var_940_int = 528006; // 0x733 PushI
	var_941_int = -1; // 0x734 PushI
	var_942_int = 29366; // 0x735 PushI
	AddReply(var_940_int, var_941_int, var_942_int); // 0x736 TObjFunc
	goto Label_1851; // 0x738 Jump
	
Label_1851:
	var_943_bool = 0; // 0x73b PushV
	func_4636(var_943_bool); // 0x73c NEW_2
	if(var_943_bool == 0) goto Label_1866; // 0x73e JumpB
	
Label_1855:
	lshWaitForAnimEnd(); // 0x73f Func
	var_944_string = var_3_string; // 0x741 PushT
	if(var_944_string == 0) goto Label_1860; // 0x742 JumpB
	goto Label_1865; // 0x743 Jump
	
Label_1865:
	goto Label_1880; // 0x749 Jump
	
Label_1880:
	return 0; // 0x758 Return
	
Label_1860:
	var_945_string = ""; // 0x744 PushV
	var_945_string = var_2_object; // 0x745 MovT
	func_4379(var_945_string); // 0x746 NEW_2
	goto Label_1855; // 0x748 Jump
	
Label_1866:
	var_946_string = "all"; // 0x74a PushS
	var_947_string = "idle"; // 0x74b PushS
	PlayAnimation(var_946_string, var_947_string); // 0x74c Func
	
Label_1870:
	WaitForAnimEnd(); // 0x74e Func
	var_948_string = var_3_string; // 0x750 PushT
	if(var_948_string == 0) goto Label_1875; // 0x751 JumpB
	goto Label_1880; // 0x752 Jump
	
Label_1875:
	var_949_string = "all"; // 0x753 PushS
	var_950_string = "idle"; // 0x754 PushS
	PlayAnimation(var_949_string, var_950_string); // 0x755 Func
	goto Label_1870; // 0x757 Jump
}


func_4836(var_115_object)
{
	var_117_bool = 0; var_118_object = Obj(); var_119_float = 0; // 0x12e5 PushV
	var_118_object = var_115_object; // 0x12e6 Mov
	var_119_float = -0.1; // 0x12e7 MovF
	func_4527(var_117_bool, var_118_object, var_119_float); // 0x12e8 NEW_2
	return 0; // 0x12ea Return
}


func_4843(var_104_object)
{
	var_106_bool = 0; var_107_object = Obj(); var_108_float = 0; // 0x12ec PushV
	var_107_object = var_104_object; // 0x12ed Mov
	var_108_float = -0.3; // 0x12ee MovF
	func_4527(var_106_bool, var_107_object, var_108_float); // 0x12ef NEW_2
	return 0; // 0x12f1 Return
}


func_750(var_2_object, var_409_string)
{
	var_410_bool = 0; // 0x2ef PushV
	func_4636(var_410_bool); // 0x2f0 NEW_2
	var_411_bool = var_410_bool == 0; // 0x2f2 Not
	if(var_411_bool == 0) goto Label_757; // 0x2f3 JumpB
	return 0; // 0x2f4 Return
	
Label_757:
	var_412_bool = var_409_string == var_2_object; // 0x2f5 Eq
	if(var_412_bool == 0) goto Label_760; // 0x2f6 JumpB
	return 0; // 0x2f7 Return
	
Label_760:
	var_413_string = ""; var_414_bool = 0; // 0x2f8 PushV
	var_413_string = var_409_string; // 0x2f9 Mov
	var_415_string = ""; // 0x2fa PushS
	var_416_bool = var_409_string == var_415_string; // 0x2fb Eq
	if(var_416_bool == 0) goto Label_767; // 0x2fc JumpB
	var_414_bool = 0; // 0x2fd MovB
	goto Label_768; // 0x2fe Jump
	
Label_768:
	func_4395(var_413_string, var_414_bool); // 0x300 NEW_2
	var_2_object = var_409_string; // 0x302 TMov
	return 0; // 0x303 Return
	
Label_767:
	var_414_bool = 1; // 0x2ff MovB
}


func_4336(var_190_bool)
{
	var_192_string = ""; var_193_int = 0; var_194_bool = 0; var_195_int = 0; var_196_string = ""; var_197_string = ""; var_198_int = 0; var_199_bool = 0; var_200_int = 0; var_201_string = ""; // 0x10f0 PushV
	var_202_string = "d"; // 0x10f1 PushS
	var_203_int = 0; // 0x10f2 PushV
	func_4589(var_203_int); // 0x10f3 NEW_2
	var_209_int = var_202_string + var_203_int; // 0x10f5 Add
	var_210_string = "m"; // 0x10f6 PushS
	var_197_string = var_209_int + var_210_string; // 0x10f7 Add2
	var_198_int = 0; // 0x10f8 MovI
	
Label_4345:
	var_211_int = 1; // 0x10f9 PushI
	if(var_211_int == 0) goto Label_4358; // 0x10fa JumpB
	var_212_int = 1; // 0x10fb PushI
	var_213_int = var_198_int + var_212_int; // 0x10fc Add
	var_214_int = var_197_string + var_213_int; // 0x10fd Add
	HasProperty(var_214_int, var_199_bool); // 0x10fe ObjFunc
	var_215_bool = var_199_bool == 0; // 0x1100 Not
	if(var_215_bool == 0) goto Label_4355; // 0x1101 JumpB
	goto Label_4358; // 0x1102 Jump
	
Label_4358:
	var_216_bool = var_198_int == 0; // 0x1106 Not
	if(var_216_bool == 0) goto Label_4362; // 0x1107 JumpB
	var_190_bool = 0; // 0x1108 MovB
	return 10; // 0x1109 Return
	
Label_4362:
	var_200_int = 0; // 0x110a MovI
	var_217_int = 1; // 0x110b PushI
	var_218_bool = var_198_int > var_217_int; // 0x110c GT
	if(var_218_bool == 0) goto Label_4368; // 0x110d JumpB
	irand(var_200_int, var_198_int); // 0x110e Func
	
Label_4368:
	var_219_int = 1; // 0x1110 PushI
	var_220_int = var_200_int + var_219_int; // 0x1111 Add
	var_221_int = var_197_string + var_220_int; // 0x1112 Add
	GetProperty(var_221_int, var_201_string); // 0x1113 ObjFunc
	var_222_bool = 0; var_223_string = ""; // 0x1115 PushV
	var_223_string = var_201_string; // 0x1116 Mov
	func_4410(var_222_bool, var_223_string); // 0x1117 NEW_2
	var_190_bool = var_222_bool; // 0x1118 Mov
	return 10; // 0x111a Return
	
Label_4355:
	var_224_int = 1; // 0x1103 PushI
	var_198_int = var_198_int + var_224_int; // 0x1104 Add2
	goto Label_4345; // 0x1105 Jump
}


func_4850(var_123_object)
{
	var_125_string = "feromicin is given"; // 0x12f3 PushS
	Trace(var_125_string); // 0x12f4 Func
	var_126_object = Obj(); var_127_string = ""; var_128_int = 0; // 0x12f6 PushV
	var_126_object = var_123_object; // 0x12f7 Mov
	var_127_string = "feromicin"; // 0x12f8 MovS
	var_128_int = 1; // 0x12f9 MovI
	func_4514(var_126_object, var_127_string, var_128_int); // 0x12fa NEW_2
	return 0; // 0x12fc Return
}


func_3317(var_0_object, var_1_object, var_2_object, var_3_string, var_797_object, var_798_object)
{
	var_0_object = var_798_object; // 0xcf6 TMov
	var_1_object = var_797_object; // 0xcf7 TMov
	var_3_string = 0; // 0xcf8 TMovB
	var_803_int = 1; // 0xcf9 PushI
	if(var_803_int == 0) goto Label_3396; // 0xcfa JumpB
	var_804_string = ""; // 0xcfb PushV
	var_804_string = "Mysterious"; // 0xcfc MovS
	func_3426(var_798_object, var_804_string); // 0xcfd NEW_2
	var_812_int = 539840; // 0xcff PushI
	SetMessage(var_812_int); // 0xd00 TObjFunc
	ClearReplies(); // 0xd02 TObjFunc
	var_813_bool = 0; // 0xd04 PushV
	var_813_bool = 0; // 0xd05 MovB
	var_814_bool = 0; // 0xd06 PushV
	var_814_bool = 0; // 0xd07 MovB
	var_815_bool = 0; var_816_object = Obj(); // 0xd08 PushV
	var_816_object = var_1_object; // 0xd09 MovT
	func_4979(var_815_bool, var_816_object); // 0xd0a NEW_2
	if(var_815_bool == 0) goto Label_3347; // 0xd0c JumpB
	var_817_bool = 0; var_818_object = Obj(); // 0xd0d PushV
	var_818_object = var_1_object; // 0xd0e MovT
	func_4989(var_817_bool, var_818_object); // 0xd0f NEW_2
	if(var_817_bool == 0) goto Label_3347; // 0xd11 JumpB
	var_814_bool = 1; // 0xd12 MovB
	
Label_3347:
	if(var_814_bool == 0) goto Label_3354; // 0xd13 JumpB
	var_819_bool = 0; var_820_object = Obj(); // 0xd14 PushV
	var_820_object = var_1_object; // 0xd15 MovT
	func_5033(var_820_object); // 0xd16 NEW_2
	if(var_819_bool == 0) goto Label_3354; // 0xd18 JumpB
	var_813_bool = 1; // 0xd19 MovB
	
Label_3354:
	if(var_813_bool == 0) goto Label_3360; // 0xd1a JumpB
	var_825_int = 539841; // 0xd1b PushI
	var_826_int = 41794; // 0xd1c PushI
	var_827_int = 41793; // 0xd1d PushI
	AddReply(var_825_int, var_826_int, var_827_int); // 0xd1e TObjFunc
	
Label_3360:
	var_828_bool = 0; // 0xd20 PushV
	var_828_bool = 0; // 0xd21 MovB
	var_829_bool = 0; // 0xd22 PushV
	var_829_bool = 0; // 0xd23 MovB
	var_830_bool = 0; var_831_object = Obj(); // 0xd24 PushV
	var_831_object = var_1_object; // 0xd25 MovT
	func_4979(var_830_bool, var_831_object); // 0xd26 NEW_2
	if(var_830_bool == 0) goto Label_3375; // 0xd28 JumpB
	var_832_bool = 0; var_833_object = Obj(); // 0xd29 PushV
	var_833_object = var_1_object; // 0xd2a MovT
	func_4999(var_832_bool, var_833_object); // 0xd2b NEW_2
	if(var_832_bool == 0) goto Label_3375; // 0xd2d JumpB
	var_829_bool = 1; // 0xd2e MovB
	
Label_3375:
	if(var_829_bool == 0) goto Label_3382; // 0xd2f JumpB
	var_834_bool = 0; var_835_object = Obj(); // 0xd30 PushV
	var_835_object = var_1_object; // 0xd31 MovT
	func_5045(var_835_object); // 0xd32 NEW_2
	if(var_834_bool == 0) goto Label_3382; // 0xd34 JumpB
	var_828_bool = 1; // 0xd35 MovB
	
Label_3382:
	if(var_828_bool == 0) goto Label_3388; // 0xd36 JumpB
	var_840_int = 539844; // 0xd37 PushI
	var_841_int = 41797; // 0xd38 PushI
	var_842_int = 41796; // 0xd39 PushI
	AddReply(var_840_int, var_841_int, var_842_int); // 0xd3a TObjFunc
	
Label_3388:
	var_843_int = 539850; // 0xd3c PushI
	var_844_int = -1; // 0xd3d PushI
	var_845_int = 41802; // 0xd3e PushI
	AddReply(var_843_int, var_844_int, var_845_int); // 0xd3f TObjFunc
	goto Label_3396; // 0xd41 Jump
	
Label_3396:
	var_846_bool = 0; // 0xd44 PushV
	func_4636(var_846_bool); // 0xd45 NEW_2
	if(var_846_bool == 0) goto Label_3411; // 0xd47 JumpB
	
Label_3400:
	lshWaitForAnimEnd(); // 0xd48 Func
	var_847_string = var_3_string; // 0xd4a PushT
	if(var_847_string == 0) goto Label_3405; // 0xd4b JumpB
	goto Label_3410; // 0xd4c Jump
	
Label_3410:
	goto Label_3425; // 0xd52 Jump
	
Label_3425:
	return 0; // 0xd61 Return
	
Label_3405:
	var_848_string = ""; // 0xd4d PushV
	var_848_string = var_2_object; // 0xd4e MovT
	func_4379(var_848_string); // 0xd4f NEW_2
	goto Label_3400; // 0xd51 Jump
	
Label_3411:
	var_849_string = "all"; // 0xd53 PushS
	var_850_string = "idle"; // 0xd54 PushS
	PlayAnimation(var_849_string, var_850_string); // 0xd55 Func
	
Label_3415:
	WaitForAnimEnd(); // 0xd57 Func
	var_851_string = var_3_string; // 0xd59 PushT
	if(var_851_string == 0) goto Label_3420; // 0xd5a JumpB
	goto Label_3425; // 0xd5b Jump
	
Label_3420:
	var_852_string = "all"; // 0xd5c PushS
	var_853_string = "idle"; // 0xd5d PushS
	PlayAnimation(var_852_string, var_853_string); // 0xd5e Func
	goto Label_3415; // 0xd60 Jump
}


func_3831(var_0_object)
{
	var_57_bool = 0; // 0xef7 PushV
	func_4151(var_57_bool); // 0xef8 NEW_2
	var_60_bool = var_57_bool == 0; // 0xefa Not
	if(var_60_bool == 0) goto Label_3838; // 0xefb JumpB
	Hold(); // 0xefc Func
	
Label_3838:
	GetDirection(var_0_object); // 0xefe Func
	
Label_3840:
	func_4007(); // 0xf01 NEW_2
	goto Label_3840; // 0xf03 Jump
}


func_2810(var_0_object, var_663_int, var_664_object)
{
	var_666_object = Obj(); var_667_bool = 0; var_668_int = 0; var_669_bool = 0; var_670_object = Obj(); var_671_bool = 0; var_672_int = 0; var_673_bool = 0; // 0xafa PushV
	var_0_object = var_664_object; // 0xafb TMov
	var_674_bool = 0; var_675_object = Obj(); var_676_float = 0; // 0xafc PushV
	var_675_object = var_664_object; // 0xafd Mov
	var_676_float = 70.0; // 0xafe MovF
	func_4156(var_675_object, var_676_float); // 0xaff NEW_2
	var_677_bool = var_674_bool == 0; // 0xb01 Not
	if(var_677_bool == 0) goto Label_2821; // 0xb02 JumpB
	var_663_int = -2; // 0xb03 MovI
	return 8; // 0xb04 Return
	
Label_2821:
	CreateDialog(var_670_object); // 0xb05 Func
	var_678_int = 0; // 0xb07 PushV
	func_4630(var_678_int); // 0xb08 NEW_2
	SetNPCName(var_678_int); // 0xb0a ObjFunc
	var_679_int = 0; // 0xb0c PushV
	func_4628(var_679_int); // 0xb0d NEW_2
	SetNPCDescription(var_679_int); // 0xb0f ObjFunc
	var_680_string = ""; // 0xb11 PushV
	func_4632(var_680_string); // 0xb12 NEW_2
	SetPhoto(var_680_string); // 0xb14 ObjFunc
	var_681_string = ""; // 0xb16 PushV
	func_4634(var_681_string); // 0xb17 NEW_2
	SetPhoto2(var_681_string); // 0xb19 ObjFunc
	var_682_int = 0; // 0xb1b PushV
	func_5255(var_682_int); // 0xb1c NEW_2
	SetPlayerName(var_682_int); // 0xb1e ObjFunc
	var_672_int = -1; // 0xb20 MovI
	IsOverrideActive(var_671_bool); // 0xb21 Func
	var_683_bool = var_671_bool; // 0xb23 Push
	if(var_683_bool == 0) goto Label_2855; // 0xb24 JumpB
	var_663_int = -2; // 0xb25 MovI
	return 8; // 0xb26 Return
	
Label_2855:
	DoDialog(var_670_object); // 0xb27 Func
	var_684_bool = 0; var_685_object = Obj(); // 0xb29 PushV
	var_686_object = Obj(); // 0xb2a PushV
	func_4432(var_686_object); // 0xb2b NEW_2
	var_685_object = var_686_object; // 0xb2c Mov
	func_4241(var_684_bool, var_685_object); // 0xb2e NEW_2
	var_687_object = Obj(); var_688_object = Obj(); // 0xb30 PushV
	var_687_object = var_664_object; // 0xb31 Mov
	var_688_object = var_670_object; // 0xb32 Mov
	TaskCall(17); // 0xb33 TaskCall
	func_2891(var_689_object, var_690_object, var_691_string, var_692_bool, var_687_object, var_688_object); // 0xb34 NEW_2
	TaskReturn(); // 0xb35 TaskReturn
	IsDialogEnd(var_673_bool); // 0xb37 ObjFunc
	
Label_2873:
	var_769_bool = var_673_bool == 0; // 0xb39 Not
	if(var_769_bool == 0) goto Label_2880; // 0xb3a JumpB
	sync(); // 0xb3b Func
	IsDialogEnd(var_673_bool); // 0xb3d ObjFunc
	goto Label_2873; // 0xb3f Jump
	
Label_2880:
	var_770_object = Obj(); // 0xb40 PushV
	var_770_object = var_664_object; // 0xb41 Mov
	func_4224(); // 0xb42 NEW_2
	StopDialog(var_670_object); // 0xb44 Func
	GetReturnValue(var_672_int); // 0xb46 ObjFunc
	var_663_int = var_672_int; // 0xb48 Mov
	return 8; // 0xb49 Return
}


func_4861(var_127_object)
{
	var_129_string = "morfin is given"; // 0x12fe PushS
	Trace(var_129_string); // 0x12ff Func
	var_130_object = Obj(); var_131_string = ""; var_132_int = 0; // 0x1301 PushV
	var_130_object = var_127_object; // 0x1302 Mov
	var_131_string = "morfin"; // 0x1303 MovS
	var_132_int = 1; // 0x1304 MovI
	func_4514(var_130_object, var_131_string, var_132_int); // 0x1305 NEW_2
	return 0; // 0x1307 Return
}


func_2302(var_2_object, var_986_string)
{
	var_987_bool = 0; // 0x8ff PushV
	func_4636(var_987_bool); // 0x900 NEW_2
	var_988_bool = var_987_bool == 0; // 0x902 Not
	if(var_988_bool == 0) goto Label_2309; // 0x903 JumpB
	return 0; // 0x904 Return
	
Label_2309:
	var_989_bool = var_986_string == var_2_object; // 0x905 Eq
	if(var_989_bool == 0) goto Label_2312; // 0x906 JumpB
	return 0; // 0x907 Return
	
Label_2312:
	var_990_string = ""; var_991_bool = 0; // 0x908 PushV
	var_990_string = var_986_string; // 0x909 Mov
	var_992_string = ""; // 0x90a PushS
	var_993_bool = var_986_string == var_992_string; // 0x90b Eq
	if(var_993_bool == 0) goto Label_2319; // 0x90c JumpB
	var_991_bool = 0; // 0x90d MovB
	goto Label_2320; // 0x90e Jump
	
Label_2320:
	func_4395(var_990_string, var_991_bool); // 0x910 NEW_2
	var_2_object = var_986_string; // 0x912 TMov
	return 0; // 0x913 Return
	
Label_2319:
	var_991_bool = 1; // 0x90f MovB
}


func_3845(var_81_bool)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0xf05 PushV
	var_84_string = "player"; // 0xf06 PushS
	FindActor(var_83_object, var_84_string); // 0xf07 Func
	var_85_bool = var_83_object == 0; // 0xf09 Not
	if(var_85_bool == 0) goto Label_3853; // 0xf0a JumpB
	var_81_bool = 0; // 0xf0b MovB
	return 2; // 0xf0c Return
	
Label_3853:
	var_86_bool = 0; var_87_object = Obj(); // 0xf0d PushV
	var_87_object = var_83_object; // 0xf0e Mov
	func_4142(var_87_object); // 0xf0f NEW_2
	var_81_bool = var_86_bool; // 0xf10 Mov
	return 2; // 0xf12 Return
}


func_4872(var_148_object)
{
	var_150_string = "neomicin is given"; // 0x1309 PushS
	Trace(var_150_string); // 0x130a Func
	var_151_object = Obj(); var_152_string = ""; var_153_int = 0; // 0x130c PushV
	var_151_object = var_148_object; // 0x130d Mov
	var_152_string = "neomicin"; // 0x130e MovS
	var_153_int = 1; // 0x130f MovI
	func_4514(var_151_object, var_152_string, var_153_int); // 0x1310 NEW_2
	return 0; // 0x1312 Return
}


func_4883(var_335_bool)
{
	var_337_int = 0; var_338_string = ""; // 0x1314 PushV
	var_338_string = "k1q02"; // 0x1315 MovS
	func_4459(var_337_int, var_338_string); // 0x1316 NEW_2
	var_341_int = 3; // 0x1318 PushI
	var_342_bool = var_337_int == var_341_int; // 0x1319 Eq
	if(var_342_bool == 0) goto Label_4893; // 0x131a JumpB
	var_335_bool = 1; // 0x131b MovB
	return 0; // 0x131c Return
	
Label_4893:
	var_335_bool = 0; // 0x131d MovB
	return 0; // 0x131e Return
}


func_3860(var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0); // 0xf14 PushE
	var_134_float = GetByIndex(var_0_object, 2); // 0xf15 PushE
	RotateAsync(var_133_float, var_134_float); // 0xf16 Func
	return 0; // 0xf18 Return
}


func_3865(var_64_bool)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0; // 0xf19 PushV
	var_69_string = "player"; // 0xf1a PushS
	FindActor(var_67_object, var_69_string); // 0xf1b Func
	var_70_bool = var_67_object == 0; // 0xf1d Not
	if(var_70_bool == 0) goto Label_3873; // 0xf1e JumpB
	var_64_bool = 0; // 0xf1f MovB
	return 4; // 0xf20 Return
	
Label_3873:
	var_71_float = 0; var_72_object = Obj(); // 0xf21 PushV
	var_72_object = var_67_object; // 0xf22 Mov
	func_4083(var_72_object); // 0xf23 NEW_2
	var_79_float = 90000.0; // 0xf25 PushF
	var_80_bool = var_71_float > var_79_float; // 0xf26 GT
	if(var_80_bool == 0) goto Label_3882; // 0xf27 JumpB
	var_64_bool = 0; // 0xf28 MovB
	return 4; // 0xf29 Return
	
Label_3882:
	CanSee(var_68_bool, var_67_object); // 0xf2a Func
	var_64_bool = var_68_bool; // 0xf2c Mov
	return 4; // 0xf2d Return
}


func_4379(var_276_string)
{
	var_277_bool = 0; var_278_float = 0; var_279_float = 0; var_280_bool = 0; var_281_float = 0; var_282_float = 0; // 0x111b PushV
	lshHasAnimation(var_280_bool, var_276_string); // 0x111c Func
	var_283_bool = var_280_bool; // 0x111e Push
	if(var_283_bool == 0) goto Label_4390; // 0x111f JumpB
	lshGetAnimTimes(var_276_string, var_281_float, var_282_float); // 0x1120 Func
	var_284_bool = 0; // 0x1122 PushB
	lshPlayAnimation(var_281_float, var_282_float, var_284_bool); // 0x1123 Func
	goto Label_4394; // 0x1125 Jump
	
Label_4394:
	return 6; // 0x112a Return
	
Label_4390:
	var_285_string = "Can't find lsh animation : "; // 0x1126 PushS
	var_286_int = var_285_string + var_276_string; // 0x1127 Add
	Trace(var_286_int); // 0x1128 Func
}


func_4895(var_419_bool)
{
	var_421_int = 0; var_422_string = ""; // 0x1320 PushV
	var_422_string = "k3q03"; // 0x1321 MovS
	func_4459(var_421_int, var_422_string); // 0x1322 NEW_2
	var_423_int = 1000; // 0x1324 PushI
	var_424_bool = var_421_int == var_423_int; // 0x1325 Eq
	if(var_424_bool == 0) goto Label_4905; // 0x1326 JumpB
	var_419_bool = 1; // 0x1327 MovB
	return 0; // 0x1328 Return
	
Label_4905:
	var_419_bool = 0; // 0x1329 MovB
	return 0; // 0x132a Return
}


func_4395(var_254_string, var_255_bool)
{
	var_258_bool = 0; var_259_float = 0; var_260_float = 0; var_261_bool = 0; var_262_float = 0; var_263_float = 0; // 0x112b PushV
	lshHasAnimation(var_261_bool, var_254_string); // 0x112c Func
	var_264_bool = var_261_bool; // 0x112e Push
	if(var_264_bool == 0) goto Label_4405; // 0x112f JumpB
	lshGetAnimTimes(var_254_string, var_262_float, var_263_float); // 0x1130 Func
	lshPlayAnimation(var_262_float, var_263_float, var_255_bool); // 0x1132 Func
	goto Label_4409; // 0x1134 Jump
	
Label_4409:
	return 6; // 0x1139 Return
	
Label_4405:
	var_265_string = "Can't find lsh animation : "; // 0x1135 PushS
	var_266_int = var_265_string + var_254_string; // 0x1136 Add
	Trace(var_266_int); // 0x1137 Func
}


func_4907(var_425_bool)
{
	var_427_int = 0; var_428_string = ""; // 0x132c PushV
	var_428_string = "ook3Maria1"; // 0x132d MovS
	func_4459(var_427_int, var_428_string); // 0x132e NEW_2
	var_429_int = 0; // 0x1330 PushI
	var_430_bool = var_427_int == var_429_int; // 0x1331 Eq
	if(var_430_bool == 0) goto Label_4917; // 0x1332 JumpB
	var_425_bool = 1; // 0x1333 MovB
	return 0; // 0x1334 Return
	
Label_4917:
	var_425_bool = 0; // 0x1335 MovB
	return 0; // 0x1336 Return
}


func_3887()
{
	var_1072_float = 0; var_1073_float = 0; // 0xf2f PushV
	var_1074_int = 8; // 0xf30 PushI
	var_1075_int = 16; // 0xf31 PushI
	rand(var_1073_float, var_1074_int, var_1075_int); // 0xf32 Func
	var_1076_int = 10; // 0xf34 PushI
	SetTimer(var_1076_int, var_1073_float); // 0xf35 Func
	return 2; // 0xf37 Return
}


func_4919(var_481_bool)
{
	var_483_int = 0; var_484_string = ""; // 0x1338 PushV
	var_484_string = "k4q02"; // 0x1339 MovS
	func_4459(var_483_int, var_484_string); // 0x133a NEW_2
	var_485_int = 1; // 0x133c PushI
	var_486_bool = var_483_int == var_485_int; // 0x133d Eq
	if(var_486_bool == 0) goto Label_4929; // 0x133e JumpB
	var_481_bool = 1; // 0x133f MovB
	return 0; // 0x1340 Return
	
Label_4929:
	var_481_bool = 0; // 0x1341 MovB
	return 0; // 0x1342 Return
}


func_3896()
{
	var_1071_int = 10; // 0xf38 PushI
	KillTimer(var_1071_int); // 0xf39 Func
	return 0; // 0xf3b Return
}


func_1337(var_0_object, var_599_int, var_600_object)
{
	var_602_object = Obj(); var_603_bool = 0; var_604_int = 0; var_605_bool = 0; var_606_object = Obj(); var_607_bool = 0; var_608_int = 0; var_609_bool = 0; // 0x539 PushV
	var_0_object = var_600_object; // 0x53a TMov
	var_610_bool = 0; var_611_object = Obj(); var_612_float = 0; // 0x53b PushV
	var_611_object = var_600_object; // 0x53c Mov
	var_612_float = 70.0; // 0x53d MovF
	func_4156(var_611_object, var_612_float); // 0x53e NEW_2
	var_613_bool = var_610_bool == 0; // 0x540 Not
	if(var_613_bool == 0) goto Label_1348; // 0x541 JumpB
	var_599_int = -2; // 0x542 MovI
	return 8; // 0x543 Return
	
Label_1348:
	CreateDialog(var_606_object); // 0x544 Func
	var_614_int = 0; // 0x546 PushV
	func_4630(var_614_int); // 0x547 NEW_2
	SetNPCName(var_614_int); // 0x549 ObjFunc
	var_615_int = 0; // 0x54b PushV
	func_4628(var_615_int); // 0x54c NEW_2
	SetNPCDescription(var_615_int); // 0x54e ObjFunc
	var_616_string = ""; // 0x550 PushV
	func_4632(var_616_string); // 0x551 NEW_2
	SetPhoto(var_616_string); // 0x553 ObjFunc
	var_617_string = ""; // 0x555 PushV
	func_4634(var_617_string); // 0x556 NEW_2
	SetPhoto2(var_617_string); // 0x558 ObjFunc
	var_618_int = 0; // 0x55a PushV
	func_5255(var_618_int); // 0x55b NEW_2
	SetPlayerName(var_618_int); // 0x55d ObjFunc
	var_608_int = -1; // 0x55f MovI
	IsOverrideActive(var_607_bool); // 0x560 Func
	var_619_bool = var_607_bool; // 0x562 Push
	if(var_619_bool == 0) goto Label_1382; // 0x563 JumpB
	var_599_int = -2; // 0x564 MovI
	return 8; // 0x565 Return
	
Label_1382:
	DoDialog(var_606_object); // 0x566 Func
	var_620_bool = 0; var_621_object = Obj(); // 0x568 PushV
	var_622_object = Obj(); // 0x569 PushV
	func_4432(var_622_object); // 0x56a NEW_2
	var_621_object = var_622_object; // 0x56b Mov
	func_4241(var_620_bool, var_621_object); // 0x56d NEW_2
	var_623_object = Obj(); var_624_object = Obj(); // 0x56f PushV
	var_623_object = var_600_object; // 0x570 Mov
	var_624_object = var_606_object; // 0x571 Mov
	TaskCall(9); // 0x572 TaskCall
	func_1418(var_625_object, var_626_object, var_627_string, var_628_bool, var_623_object, var_624_object); // 0x573 NEW_2
	TaskReturn(); // 0x574 TaskReturn
	IsDialogEnd(var_609_bool); // 0x576 ObjFunc
	
Label_1400:
	var_659_bool = var_609_bool == 0; // 0x578 Not
	if(var_659_bool == 0) goto Label_1407; // 0x579 JumpB
	sync(); // 0x57a Func
	IsDialogEnd(var_609_bool); // 0x57c ObjFunc
	goto Label_1400; // 0x57e Jump
	
Label_1407:
	var_660_object = Obj(); // 0x57f PushV
	var_660_object = var_600_object; // 0x580 Mov
	func_4224(); // 0x581 NEW_2
	StopDialog(var_606_object); // 0x583 Func
	GetReturnValue(var_608_int); // 0x585 ObjFunc
	var_599_int = var_608_int; // 0x587 Mov
	return 8; // 0x588 Return
}


func_4410(var_182_bool, var_183_string)
{
	var_184_bool = 0; var_185_bool = 0; // 0x113a PushV
	var_186_bool = 0; // 0x113b PushV
	func_4636(var_186_bool); // 0x113c NEW_2
	if(var_186_bool == 0) goto Label_4423; // 0x113e JumpB
	lshHasSpeech(var_185_bool, var_183_string); // 0x113f Func
	var_187_bool = var_185_bool; // 0x1141 Push
	if(var_187_bool == 0) goto Label_4423; // 0x1142 JumpB
	lshPlaySpeech(var_183_string); // 0x1143 Func
	var_182_bool = 1; // 0x1145 MovB
	return 2; // 0x1146 Return
	
Label_4423:
	var_182_bool = 0; // 0x1147 MovB
	return 2; // 0x1148 Return
}


func_4931(var_487_bool)
{
	var_489_int = 0; var_490_string = ""; // 0x1344 PushV
	var_490_string = "ook4Maria1"; // 0x1345 MovS
	func_4459(var_489_int, var_490_string); // 0x1346 NEW_2
	var_491_int = 0; // 0x1348 PushI
	var_492_bool = var_489_int == var_491_int; // 0x1349 Eq
	if(var_492_bool == 0) goto Label_4941; // 0x134a JumpB
	var_487_bool = 1; // 0x134b MovB
	return 0; // 0x134c Return
	
Label_4941:
	var_487_bool = 0; // 0x134d MovB
	return 0; // 0x134e Return
}


func_4425()
{
	var_59_bool = 0; // 0x1149 PushV
	func_4636(var_59_bool); // 0x114a NEW_2
	if(var_59_bool == 0) goto Label_4431; // 0x114c JumpB
	lshStopSpeech(); // 0x114d Func
	
Label_4431:
	return 0; // 0x114f Return
}


func_2891(var_0_object, var_1_object, var_2_object, var_3_string, var_687_object, var_688_object)
{
	var_0_object = var_688_object; // 0xb4c TMov
	var_1_object = var_687_object; // 0xb4d TMov
	var_3_string = 0; // 0xb4e TMovB
	var_693_int = 1; // 0xb4f PushI
	if(var_693_int == 0) goto Label_2970; // 0xb50 JumpB
	var_694_string = ""; // 0xb51 PushV
	var_694_string = "Neutral"; // 0xb52 MovS
	func_3000(var_688_object, var_694_string); // 0xb53 NEW_2
	var_702_int = 539828; // 0xb55 PushI
	SetMessage(var_702_int); // 0xb56 TObjFunc
	ClearReplies(); // 0xb58 TObjFunc
	var_703_bool = 0; // 0xb5a PushV
	var_703_bool = 0; // 0xb5b MovB
	var_704_bool = 0; // 0xb5c PushV
	var_704_bool = 0; // 0xb5d MovB
	var_705_bool = 0; var_706_object = Obj(); // 0xb5e PushV
	var_706_object = var_1_object; // 0xb5f MovT
	func_4979(var_705_bool, var_706_object); // 0xb60 NEW_2
	if(var_705_bool == 0) goto Label_2921; // 0xb62 JumpB
	var_715_bool = 0; var_716_object = Obj(); // 0xb63 PushV
	var_716_object = var_1_object; // 0xb64 MovT
	func_4989(var_715_bool, var_716_object); // 0xb65 NEW_2
	if(var_715_bool == 0) goto Label_2921; // 0xb67 JumpB
	var_704_bool = 1; // 0xb68 MovB
	
Label_2921:
	if(var_704_bool == 0) goto Label_2928; // 0xb69 JumpB
	var_729_bool = 0; var_730_object = Obj(); // 0xb6a PushV
	var_730_object = var_1_object; // 0xb6b MovT
	func_5009(var_730_object); // 0xb6c NEW_2
	if(var_729_bool == 0) goto Label_2928; // 0xb6e JumpB
	var_703_bool = 1; // 0xb6f MovB
	
Label_2928:
	if(var_703_bool == 0) goto Label_2934; // 0xb70 JumpB
	var_735_int = 539829; // 0xb71 PushI
	var_736_int = 41782; // 0xb72 PushI
	var_737_int = 41781; // 0xb73 PushI
	AddReply(var_735_int, var_736_int, var_737_int); // 0xb74 TObjFunc
	
Label_2934:
	var_738_bool = 0; // 0xb76 PushV
	var_738_bool = 0; // 0xb77 MovB
	var_739_bool = 0; // 0xb78 PushV
	var_739_bool = 0; // 0xb79 MovB
	var_740_bool = 0; var_741_object = Obj(); // 0xb7a PushV
	var_741_object = var_1_object; // 0xb7b MovT
	func_4979(var_740_bool, var_741_object); // 0xb7c NEW_2
	if(var_740_bool == 0) goto Label_2949; // 0xb7e JumpB
	var_742_bool = 0; var_743_object = Obj(); // 0xb7f PushV
	var_743_object = var_1_object; // 0xb80 MovT
	func_4999(var_742_bool, var_743_object); // 0xb81 NEW_2
	if(var_742_bool == 0) goto Label_2949; // 0xb83 JumpB
	var_739_bool = 1; // 0xb84 MovB
	
Label_2949:
	if(var_739_bool == 0) goto Label_2956; // 0xb85 JumpB
	var_749_bool = 0; var_750_object = Obj(); // 0xb86 PushV
	var_750_object = var_1_object; // 0xb87 MovT
	func_5021(var_750_object); // 0xb88 NEW_2
	if(var_749_bool == 0) goto Label_2956; // 0xb8a JumpB
	var_738_bool = 1; // 0xb8b MovB
	
Label_2956:
	if(var_738_bool == 0) goto Label_2962; // 0xb8c JumpB
	var_755_int = 539832; // 0xb8d PushI
	var_756_int = 41785; // 0xb8e PushI
	var_757_int = 41784; // 0xb8f PushI
	AddReply(var_755_int, var_756_int, var_757_int); // 0xb90 TObjFunc
	
Label_2962:
	var_758_int = 539838; // 0xb92 PushI
	var_759_int = -1; // 0xb93 PushI
	var_760_int = 41790; // 0xb94 PushI
	AddReply(var_758_int, var_759_int, var_760_int); // 0xb95 TObjFunc
	goto Label_2970; // 0xb97 Jump
	
Label_2970:
	var_761_bool = 0; // 0xb9a PushV
	func_4636(var_761_bool); // 0xb9b NEW_2
	if(var_761_bool == 0) goto Label_2985; // 0xb9d JumpB
	
Label_2974:
	lshWaitForAnimEnd(); // 0xb9e Func
	var_762_string = var_3_string; // 0xba0 PushT
	if(var_762_string == 0) goto Label_2979; // 0xba1 JumpB
	goto Label_2984; // 0xba2 Jump
	
Label_2984:
	goto Label_2999; // 0xba8 Jump
	
Label_2999:
	return 0; // 0xbb7 Return
	
Label_2979:
	var_763_string = ""; // 0xba3 PushV
	var_763_string = var_2_object; // 0xba4 MovT
	func_4379(var_763_string); // 0xba5 NEW_2
	goto Label_2974; // 0xba7 Jump
	
Label_2985:
	var_764_string = "all"; // 0xba9 PushS
	var_765_string = "idle"; // 0xbaa PushS
	PlayAnimation(var_764_string, var_765_string); // 0xbab Func
	
Label_2989:
	WaitForAnimEnd(); // 0xbad Func
	var_766_string = var_3_string; // 0xbaf PushT
	if(var_766_string == 0) goto Label_2994; // 0xbb0 JumpB
	goto Label_2999; // 0xbb1 Jump
	
Label_2994:
	var_767_string = "all"; // 0xbb2 PushS
	var_768_string = "idle"; // 0xbb3 PushS
	PlayAnimation(var_767_string, var_768_string); // 0xbb4 Func
	goto Label_2989; // 0xbb6 Jump
}


func_4943(var_639_bool)
{
	var_641_int = 0; var_642_string = ""; // 0x1350 PushV
	var_642_string = "k7q01"; // 0x1351 MovS
	func_4459(var_641_int, var_642_string); // 0x1352 NEW_2
	var_643_int = 6; // 0x1354 PushI
	var_644_bool = var_641_int == var_643_int; // 0x1355 Eq
	if(var_644_bool == 0) goto Label_4953; // 0x1356 JumpB
	var_639_bool = 1; // 0x1357 MovB
	return 0; // 0x1358 Return
	
Label_4953:
	var_639_bool = 0; // 0x1359 MovB
	return 0; // 0x135a Return
}


func_4432(var_150_object)
{
	var_151_object = Obj(); var_152_object = Obj(); // 0x1150 PushV
	self(var_152_object); // 0x1151 Func
	var_150_object = var_152_object; // 0x1153 Mov
	return 2; // 0x1154 Return
}


func_4438(var_115_cvector, var_116_cvector)
{
	var_118_float = 0; var_119_float = 0; // 0x1156 PushV
	var_120_int = var_116_cvector | var_116_cvector; // 0x1157 Or
	var_119_float = sqrt(var_120_int); // 0x1158 Sqrt2
	var_121_float = 0.0; // 0x1159 PushF
	var_122_bool = var_119_float < var_121_float; // 0x115a LT
	if(var_122_bool == 0) goto Label_4446; // 0x115b JumpB
	var_115_cvector = CVector(0.0, 0.0, 0.0); // 0x115c MovV
	return 2; // 0x115d Return
	
Label_4446:
	var_115_cvector = var_116_cvector / var_116_cvector; // 0x115e Div2
	return 2; // 0x115f Return
}


func_1881(var_2_object, var_889_string)
{
	var_890_bool = 0; // 0x75a PushV
	func_4636(var_890_bool); // 0x75b NEW_2
	var_891_bool = var_890_bool == 0; // 0x75d Not
	if(var_891_bool == 0) goto Label_1888; // 0x75e JumpB
	return 0; // 0x75f Return
	
Label_1888:
	var_892_bool = var_889_string == var_2_object; // 0x760 Eq
	if(var_892_bool == 0) goto Label_1891; // 0x761 JumpB
	return 0; // 0x762 Return
	
Label_1891:
	var_893_string = ""; var_894_bool = 0; // 0x763 PushV
	var_893_string = var_889_string; // 0x764 Mov
	var_895_string = ""; // 0x765 PushS
	var_896_bool = var_889_string == var_895_string; // 0x766 Eq
	if(var_896_bool == 0) goto Label_1898; // 0x767 JumpB
	var_894_bool = 0; // 0x768 MovB
	goto Label_1899; // 0x769 Jump
	
Label_1899:
	func_4395(var_893_string, var_894_bool); // 0x76b NEW_2
	var_2_object = var_889_string; // 0x76d TMov
	return 0; // 0x76e Return
	
Label_1898:
	var_894_bool = 1; // 0x76a MovB
}


func_4955(var_898_bool)
{
	var_900_int = 0; var_901_string = ""; // 0x135c PushV
	var_901_string = "k10q01"; // 0x135d MovS
	func_4459(var_900_int, var_901_string); // 0x135e NEW_2
	var_902_int = 1; // 0x1360 PushI
	var_903_bool = var_900_int == var_902_int; // 0x1361 Eq
	if(var_903_bool == 0) goto Label_4965; // 0x1362 JumpB
	var_898_bool = 1; // 0x1363 MovB
	return 0; // 0x1364 Return
	
Label_4965:
	var_898_bool = 0; // 0x1365 MovB
	return 0; // 0x1366 Return
}


func_4448(var_195_float, var_196_float, var_197_float, var_198_float)
{
	var_199_bool = var_196_float < var_197_float; // 0x1161 LT
	if(var_199_bool == 0) goto Label_4453; // 0x1162 JumpB
	var_195_float = var_197_float; // 0x1163 Mov
	return 0; // 0x1164 Return
	
Label_4453:
	var_200_bool = var_196_float > var_198_float; // 0x1165 GT
	if(var_200_bool == 0) goto Label_4457; // 0x1166 JumpB
	var_195_float = var_198_float; // 0x1167 Mov
	return 0; // 0x1168 Return
	
Label_4457:
	var_195_float = var_196_float; // 0x1169 Mov
	return 0; // 0x116a Return
}


func_3426(var_2_object, var_804_string)
{
	var_805_bool = 0; // 0xd63 PushV
	func_4636(var_805_bool); // 0xd64 NEW_2
	var_806_bool = var_805_bool == 0; // 0xd66 Not
	if(var_806_bool == 0) goto Label_3433; // 0xd67 JumpB
	return 0; // 0xd68 Return
	
Label_3433:
	var_807_bool = var_804_string == var_2_object; // 0xd69 Eq
	if(var_807_bool == 0) goto Label_3436; // 0xd6a JumpB
	return 0; // 0xd6b Return
	
Label_3436:
	var_808_string = ""; var_809_bool = 0; // 0xd6c PushV
	var_808_string = var_804_string; // 0xd6d Mov
	var_810_string = ""; // 0xd6e PushS
	var_811_bool = var_804_string == var_810_string; // 0xd6f Eq
	if(var_811_bool == 0) goto Label_3443; // 0xd70 JumpB
	var_809_bool = 0; // 0xd71 MovB
	goto Label_3444; // 0xd72 Jump
	
Label_3444:
	func_4395(var_808_string, var_809_bool); // 0xd74 NEW_2
	var_2_object = var_804_string; // 0xd76 TMov
	return 0; // 0xd77 Return
	
Label_3443:
	var_809_bool = 1; // 0xd73 MovB
}


func_4967(var_572_bool)
{
	var_574_int = 0; var_575_string = ""; // 0x1368 PushV
	var_575_string = "k5q04"; // 0x1369 MovS
	func_4459(var_574_int, var_575_string); // 0x136a NEW_2
	var_576_int = 1; // 0x136c PushI
	var_577_bool = var_574_int == var_576_int; // 0x136d Eq
	if(var_577_bool == 0) goto Label_4977; // 0x136e JumpB
	var_572_bool = 1; // 0x136f MovB
	return 0; // 0x1370 Return
	
Label_4977:
	var_572_bool = 0; // 0x1371 MovB
	return 0; // 0x1372 Return
}


func_4459(var_337_int, var_338_string)
{
	var_339_int = 0; var_340_int = 0; // 0x116b PushV
	GetVariable(var_338_string, var_340_int); // 0x116c Func
	var_337_int = var_340_int; // 0x116e Mov
	return 2; // 0x116f Return
}


func_4464(var_118_int, var_119_int)
{
	var_120_object = Obj(); var_121_object = Obj(); // 0x1170 PushV
	CreateIntVector(var_121_object); // 0x1171 Func
	add(var_118_int); // 0x1173 ObjFunc
	add(var_119_int); // 0x1175 ObjFunc
	var_122_int = 3; // 0x1177 PushI
	SendWorldWndMessage(var_122_int, var_121_object); // 0x1178 Func
	return 2; // 0x117a Return
}


func_2417(var_0_object, var_532_int, var_533_object)
{
	var_535_object = Obj(); var_536_bool = 0; var_537_int = 0; var_538_bool = 0; var_539_object = Obj(); var_540_bool = 0; var_541_int = 0; var_542_bool = 0; // 0x971 PushV
	var_0_object = var_533_object; // 0x972 TMov
	var_543_bool = 0; var_544_object = Obj(); var_545_float = 0; // 0x973 PushV
	var_544_object = var_533_object; // 0x974 Mov
	var_545_float = 70.0; // 0x975 MovF
	func_4156(var_544_object, var_545_float); // 0x976 NEW_2
	var_546_bool = var_543_bool == 0; // 0x978 Not
	if(var_546_bool == 0) goto Label_2428; // 0x979 JumpB
	var_532_int = -2; // 0x97a MovI
	return 8; // 0x97b Return
	
Label_2428:
	CreateDialog(var_539_object); // 0x97c Func
	var_547_int = 0; // 0x97e PushV
	func_4630(var_547_int); // 0x97f NEW_2
	SetNPCName(var_547_int); // 0x981 ObjFunc
	var_548_int = 0; // 0x983 PushV
	func_4628(var_548_int); // 0x984 NEW_2
	SetNPCDescription(var_548_int); // 0x986 ObjFunc
	var_549_string = ""; // 0x988 PushV
	func_4632(var_549_string); // 0x989 NEW_2
	SetPhoto(var_549_string); // 0x98b ObjFunc
	var_550_string = ""; // 0x98d PushV
	func_4634(var_550_string); // 0x98e NEW_2
	SetPhoto2(var_550_string); // 0x990 ObjFunc
	var_551_int = 0; // 0x992 PushV
	func_5255(var_551_int); // 0x993 NEW_2
	SetPlayerName(var_551_int); // 0x995 ObjFunc
	var_541_int = -1; // 0x997 MovI
	IsOverrideActive(var_540_bool); // 0x998 Func
	var_552_bool = var_540_bool; // 0x99a Push
	if(var_552_bool == 0) goto Label_2462; // 0x99b JumpB
	var_532_int = -2; // 0x99c MovI
	return 8; // 0x99d Return
	
Label_2462:
	DoDialog(var_539_object); // 0x99e Func
	var_553_bool = 0; var_554_object = Obj(); // 0x9a0 PushV
	var_555_object = Obj(); // 0x9a1 PushV
	func_4432(var_555_object); // 0x9a2 NEW_2
	var_554_object = var_555_object; // 0x9a3 Mov
	func_4241(var_553_bool, var_554_object); // 0x9a5 NEW_2
	var_556_object = Obj(); var_557_object = Obj(); // 0x9a7 PushV
	var_556_object = var_533_object; // 0x9a8 Mov
	var_557_object = var_539_object; // 0x9a9 Mov
	TaskCall(15); // 0x9aa TaskCall
	func_2498(var_558_object, var_559_object, var_560_string, var_561_bool, var_556_object, var_557_object); // 0x9ab NEW_2
	TaskReturn(); // 0x9ac TaskReturn
	IsDialogEnd(var_542_bool); // 0x9ae ObjFunc
	
Label_2480:
	var_595_bool = var_542_bool == 0; // 0x9b0 Not
	if(var_595_bool == 0) goto Label_2487; // 0x9b1 JumpB
	sync(); // 0x9b2 Func
	IsDialogEnd(var_542_bool); // 0x9b4 ObjFunc
	goto Label_2480; // 0x9b6 Jump
	
Label_2487:
	var_596_object = Obj(); // 0x9b7 PushV
	var_596_object = var_533_object; // 0x9b8 Mov
	func_4224(); // 0x9b9 NEW_2
	StopDialog(var_539_object); // 0x9bb Func
	GetReturnValue(var_541_int); // 0x9bd ObjFunc
	var_532_int = var_541_int; // 0x9bf Mov
	return 8; // 0x9c0 Return
}


func_4979(var_705_bool, var_706_object)
{
	var_707_bool = 0; var_708_object = Obj(); // 0x1374 PushV
	var_708_object = var_706_object; // 0x1375 Mov
	func_5081(var_708_object); // 0x1376 NEW_2
	if(var_707_bool == 0) goto Label_4987; // 0x1378 JumpB
	var_705_bool = 1; // 0x1379 MovB
	return 0; // 0x137a Return
	
Label_4987:
	var_705_bool = 0; // 0x137b MovB
	return 0; // 0x137c Return
}


func_371(var_0_object, var_77_int, var_78_object)
{
	var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0; // 0x173 PushV
	var_0_object = var_78_object; // 0x174 TMov
	var_88_bool = 0; var_89_object = Obj(); var_90_float = 0; // 0x175 PushV
	var_89_object = var_78_object; // 0x176 Mov
	var_90_float = 70.0; // 0x177 MovF
	func_4156(var_89_object, var_90_float); // 0x178 NEW_2
	var_134_bool = var_88_bool == 0; // 0x17a Not
	if(var_134_bool == 0) goto Label_382; // 0x17b JumpB
	var_77_int = -2; // 0x17c MovI
	return 8; // 0x17d Return
	
Label_382:
	CreateDialog(var_84_object); // 0x17e Func
	var_135_int = 0; // 0x180 PushV
	func_4630(var_135_int); // 0x181 NEW_2
	SetNPCName(var_135_int); // 0x183 ObjFunc
	var_136_int = 0; // 0x185 PushV
	func_4628(var_136_int); // 0x186 NEW_2
	SetNPCDescription(var_136_int); // 0x188 ObjFunc
	var_137_string = ""; // 0x18a PushV
	func_4632(var_137_string); // 0x18b NEW_2
	SetPhoto(var_137_string); // 0x18d ObjFunc
	var_138_string = ""; // 0x18f PushV
	func_4634(var_138_string); // 0x190 NEW_2
	SetPhoto2(var_138_string); // 0x192 ObjFunc
	var_139_int = 0; // 0x194 PushV
	func_5255(var_139_int); // 0x195 NEW_2
	SetPlayerName(var_139_int); // 0x197 ObjFunc
	var_86_int = -1; // 0x199 MovI
	IsOverrideActive(var_85_bool); // 0x19a Func
	var_147_bool = var_85_bool; // 0x19c Push
	if(var_147_bool == 0) goto Label_416; // 0x19d JumpB
	var_77_int = -2; // 0x19e MovI
	return 8; // 0x19f Return
	
Label_416:
	DoDialog(var_84_object); // 0x1a0 Func
	var_148_bool = 0; var_149_object = Obj(); // 0x1a2 PushV
	var_150_object = Obj(); // 0x1a3 PushV
	func_4432(var_150_object); // 0x1a4 NEW_2
	var_149_object = var_150_object; // 0x1a5 Mov
	func_4241(var_148_bool, var_149_object); // 0x1a7 NEW_2
	var_243_object = Obj(); var_244_object = Obj(); // 0x1a9 PushV
	var_243_object = var_78_object; // 0x1aa Mov
	var_244_object = var_84_object; // 0x1ab Mov
	TaskCall(3); // 0x1ac TaskCall
	func_452(var_245_object, var_246_object, var_247_string, var_248_bool, var_243_object, var_244_object); // 0x1ad NEW_2
	TaskReturn(); // 0x1ae TaskReturn
	IsDialogEnd(var_87_bool); // 0x1b0 ObjFunc
	
Label_434:
	var_292_bool = var_87_bool == 0; // 0x1b2 Not
	if(var_292_bool == 0) goto Label_441; // 0x1b3 JumpB
	sync(); // 0x1b4 Func
	IsDialogEnd(var_87_bool); // 0x1b6 ObjFunc
	goto Label_434; // 0x1b8 Jump
	
Label_441:
	var_293_object = Obj(); // 0x1b9 PushV
	var_293_object = var_78_object; // 0x1ba Mov
	func_4224(); // 0x1bb NEW_2
	StopDialog(var_84_object); // 0x1bd Func
	GetReturnValue(var_86_int); // 0x1bf ObjFunc
	var_77_int = var_86_int; // 0x1c1 Mov
	return 8; // 0x1c2 Return
}


func_4476(var_104_object, var_105_int)
{
	var_107_int = 0; var_108_int = 0; // 0x117c PushV
	var_109_object = Obj(); var_110_string = ""; var_111_int = 0; // 0x117d PushV
	var_109_object = var_104_object; // 0x117e Mov
	var_110_string = "money"; // 0x117f MovS
	var_111_int = var_105_int; // 0x1180 Mov
	func_4125(var_110_string, var_111_int); // 0x1181 NEW_2
	var_115_int = 0; // 0x1183 PushI
	var_116_bool = var_105_int > var_115_int; // 0x1184 GT
	if(var_116_bool == 0) goto Label_4494; // 0x1185 JumpB
	var_117_string = "Money"; // 0x1186 PushS
	GetInvItemByName(var_108_int, var_117_string); // 0x1187 Func
	var_118_int = 0; var_119_int = 0; // 0x1189 PushV
	var_118_int = var_108_int; // 0x118a Mov
	var_119_int = var_105_int; // 0x118b Mov
	func_4464(var_118_int, var_119_int); // 0x118c NEW_2
	
Label_4494:
	return 2; // 0x118e Return
}


func_4989(var_715_bool, var_716_object)
{
	var_717_bool = 0; var_718_object = Obj(); // 0x137e PushV
	var_718_object = var_716_object; // 0x137f Mov
	func_5087(var_718_object); // 0x1380 NEW_2
	if(var_717_bool == 0) goto Label_4997; // 0x1382 JumpB
	var_715_bool = 1; // 0x1383 MovB
	return 0; // 0x1384 Return
	
Label_4997:
	var_715_bool = 0; // 0x1385 MovB
	return 0; // 0x1386 Return
}


func_4999(var_742_bool, var_743_object)
{
	var_744_bool = 0; var_745_object = Obj(); // 0x1388 PushV
	var_745_object = var_743_object; // 0x1389 Mov
	func_5093(var_745_object); // 0x138a NEW_2
	if(var_744_bool == 0) goto Label_5007; // 0x138c JumpB
	var_742_bool = 1; // 0x138d MovB
	return 0; // 0x138e Return
	
Label_5007:
	var_742_bool = 0; // 0x138f MovB
	return 0; // 0x1390 Return
}


func_1418(var_0_object, var_1_object, var_2_object, var_3_string, var_623_object, var_624_object)
{
	var_0_object = var_624_object; // 0x58b TMov
	var_1_object = var_623_object; // 0x58c TMov
	var_3_string = 0; // 0x58d TMovB
	var_629_int = 1; // 0x58e PushI
	if(var_629_int == 0) goto Label_1451; // 0x58f JumpB
	var_630_string = ""; // 0x590 PushV
	var_630_string = "Neutral"; // 0x591 MovS
	func_1481(var_624_object, var_630_string); // 0x592 NEW_2
	var_638_int = 526192; // 0x594 PushI
	SetMessage(var_638_int); // 0x595 TObjFunc
	ClearReplies(); // 0x597 TObjFunc
	var_639_bool = 0; var_640_object = Obj(); // 0x599 PushV
	var_640_object = var_1_object; // 0x59a MovT
	func_4943(var_640_object); // 0x59b NEW_2
	if(var_639_bool == 0) goto Label_1443; // 0x59d JumpB
	var_645_int = 526193; // 0x59e PushI
	var_646_int = 30159; // 0x59f PushI
	var_647_int = 27474; // 0x5a0 PushI
	AddReply(var_645_int, var_646_int, var_647_int); // 0x5a1 TObjFunc
	
Label_1443:
	var_648_int = 526196; // 0x5a3 PushI
	var_649_int = -1; // 0x5a4 PushI
	var_650_int = 27477; // 0x5a5 PushI
	AddReply(var_648_int, var_649_int, var_650_int); // 0x5a6 TObjFunc
	goto Label_1451; // 0x5a8 Jump
	
Label_1451:
	var_651_bool = 0; // 0x5ab PushV
	func_4636(var_651_bool); // 0x5ac NEW_2
	if(var_651_bool == 0) goto Label_1466; // 0x5ae JumpB
	
Label_1455:
	lshWaitForAnimEnd(); // 0x5af Func
	var_652_string = var_3_string; // 0x5b1 PushT
	if(var_652_string == 0) goto Label_1460; // 0x5b2 JumpB
	goto Label_1465; // 0x5b3 Jump
	
Label_1465:
	goto Label_1480; // 0x5b9 Jump
	
Label_1480:
	return 0; // 0x5c8 Return
	
Label_1460:
	var_653_string = ""; // 0x5b4 PushV
	var_653_string = var_2_object; // 0x5b5 MovT
	func_4379(var_653_string); // 0x5b6 NEW_2
	goto Label_1455; // 0x5b8 Jump
	
Label_1466:
	var_654_string = "all"; // 0x5ba PushS
	var_655_string = "idle"; // 0x5bb PushS
	PlayAnimation(var_654_string, var_655_string); // 0x5bc Func
	
Label_1470:
	WaitForAnimEnd(); // 0x5be Func
	var_656_string = var_3_string; // 0x5c0 PushT
	if(var_656_string == 0) goto Label_1475; // 0x5c1 JumpB
	goto Label_1480; // 0x5c2 Jump
	
Label_1475:
	var_657_string = "all"; // 0x5c3 PushS
	var_658_string = "idle"; // 0x5c4 PushS
	PlayAnimation(var_657_string, var_658_string); // 0x5c5 Func
	goto Label_1470; // 0x5c7 Jump
}


func_4495(var_136_object, var_137_int)
{
	var_138_int = 0; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; // 0x118f PushV
	GetItemID(var_141_int); // 0x1190 ObjFunc
	var_144_string = "Category"; // 0x1192 PushS
	GetInvItemProperty(var_142_int, var_141_int, var_144_string); // 0x1193 Func
	AddItem(var_143_bool, var_136_object, var_142_int, var_137_int); // 0x1195 ObjFunc
	var_145_bool = var_143_bool == 0; // 0x1197 Not
	if(var_145_bool == 0) goto Label_4508; // 0x1198 JumpB
	DropItems(var_136_object, var_137_int); // 0x1199 ObjFunc
	goto Label_4513; // 0x119b Jump
	
Label_4513:
	return 6; // 0x11a1 Return
	
Label_4508:
	var_146_int = 0; var_147_int = 0; // 0x119c PushV
	var_146_int = var_141_int; // 0x119d Mov
	var_147_int = var_137_int; // 0x119e Mov
	func_4464(var_146_int, var_147_int); // 0x119f NEW_2
}


func_5009(var_729_bool)
{
	var_731_int = 0; var_732_string = ""; // 0x1392 PushV
	var_732_string = "ook8Maria1"; // 0x1393 MovS
	func_4459(var_731_int, var_732_string); // 0x1394 NEW_2
	var_733_int = 0; // 0x1396 PushI
	var_734_bool = var_731_int == var_733_int; // 0x1397 Eq
	if(var_734_bool == 0) goto Label_5019; // 0x1398 JumpB
	var_729_bool = 1; // 0x1399 MovB
	return 0; // 0x139a Return
	
Label_5019:
	var_729_bool = 0; // 0x139b MovB
	return 0; // 0x139c Return
}


func_5021(var_749_bool)
{
	var_751_int = 0; var_752_string = ""; // 0x139e PushV
	var_752_string = "ook8Maria2"; // 0x139f MovS
	func_4459(var_751_int, var_752_string); // 0x13a0 NEW_2
	var_753_int = 0; // 0x13a2 PushI
	var_754_bool = var_751_int == var_753_int; // 0x13a3 Eq
	if(var_754_bool == 0) goto Label_5031; // 0x13a4 JumpB
	var_749_bool = 1; // 0x13a5 MovB
	return 0; // 0x13a6 Return
	
Label_5031:
	var_749_bool = 0; // 0x13a7 MovB
	return 0; // 0x13a8 Return
}


func_4514(var_130_object, var_131_string, var_132_int)
{
	var_133_object = Obj(); var_134_object = Obj(); // 0x11a2 PushV
	CreateInvItem(var_134_object); // 0x11a3 Func
	SetItemName(var_131_string); // 0x11a5 ObjFunc
	var_135_object = Obj(); var_136_object = Obj(); var_137_int = 0; // 0x11a7 PushV
	var_135_object = var_130_object; // 0x11a8 Mov
	var_136_object = var_134_object; // 0x11a9 Mov
	var_137_int = var_132_int; // 0x11aa Mov
	func_4495(var_136_object, var_137_int); // 0x11ab NEW_2
	return 2; // 0x11ad Return
}


func_4007()
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; // 0xfa7 PushV
	WaitForAnimEnd(); // 0xfa8 Func
	var_73_bool = 0; // 0xfaa PushV
	func_4151(var_73_bool); // 0xfab NEW_2
	var_74_bool = var_73_bool == 0; // 0xfad Not
	if(var_74_bool == 0) goto Label_4016; // 0xfae JumpB
	return 12; // 0xfaf Return
	
Label_4016:
	var_75_int = 0; // 0xfb0 PushV
	func_4611(var_75_int); // 0xfb1 NEW_2
	var_67_int = var_75_int; // 0xfb2 Mov
	var_68_int = 0; // 0xfb4 MovI
	
Label_4021:
	var_88_bool = 0; // 0xfb5 PushV
	var_88_bool = 0; // 0xfb6 MovB
	var_89_int = 5; // 0xfb7 PushI
	var_90_bool = var_68_int < var_89_int; // 0xfb8 LT
	if(var_90_bool == 0) goto Label_4031; // 0xfb9 JumpB
	var_91_bool = 0; // 0xfba PushV
	func_4151(var_91_bool); // 0xfbb NEW_2
	if(var_91_bool == 0) goto Label_4031; // 0xfbd JumpB
	var_88_bool = 1; // 0xfbe MovB
	
Label_4031:
	if(var_88_bool == 0) goto Label_4073; // 0xfbf JumpB
	var_92_bool = var_67_int == 0; // 0xfc0 Not
	if(var_92_bool == 0) goto Label_4041; // 0xfc1 JumpB
	var_93_int = 3; // 0xfc2 PushI
	Sleep(var_93_int, var_69_bool); // 0xfc3 Func
	var_94_bool = var_69_bool == 0; // 0xfc5 Not
	if(var_94_bool == 0) goto Label_4040; // 0xfc6 JumpB
	goto Label_4073; // 0xfc7 Jump
	
Label_4073:
	ResetAAS(); // 0xfe9 Func
	return 12; // 0xfeb Return
	
Label_4040:
	goto Label_4062; // 0xfc8 Jump
	
Label_4062:
	var_95_bool = 0; // 0xfde PushV
	func_4076(var_95_bool); // 0xfdf NEW_2
	var_96_bool = var_95_bool == 0; // 0xfe1 Not
	if(var_96_bool == 0) goto Label_4068; // 0xfe2 JumpB
	goto Label_4073; // 0xfe3 Jump
	
Label_4068:
	ResetAAS(); // 0xfe4 Func
	var_97_int = 1; // 0xfe6 PushI
	var_68_int = var_68_int + var_97_int; // 0xfe7 Add2
	goto Label_4021; // 0xfe8 Jump
	
Label_4041:
	irand(var_70_int, var_67_int); // 0xfc9 Func
	var_98_int = 5; // 0xfcb PushI
	irand(var_71_int, var_98_int); // 0xfcc Func
	var_99_int = 0; // 0xfce PushI
	var_100_bool = var_71_int != var_99_int; // 0xfcf Neq
	if(var_100_bool == 0) goto Label_4050; // 0xfd0 JumpB
	var_70_int = 0; // 0xfd1 MovI
	
Label_4050:
	var_101_string = "all"; // 0xfd2 PushS
	var_102_string = ""; var_103_int = 0; // 0xfd3 PushV
	var_103_int = var_70_int; // 0xfd4 Mov
	func_4604(var_102_string, var_103_int); // 0xfd5 NEW_2
	PlayAnimation(var_101_string, var_102_string); // 0xfd7 Func
	WaitForAnimEnd(var_72_bool); // 0xfd9 Func
	var_104_bool = var_72_bool == 0; // 0xfdb Not
	if(var_104_bool == 0) goto Label_4062; // 0xfdc JumpB
	goto Label_4073; // 0xfdd Jump
}


func_5033(var_819_bool)
{
	var_821_int = 0; var_822_string = ""; // 0x13aa PushV
	var_822_string = "ook9Maria1"; // 0x13ab MovS
	func_4459(var_821_int, var_822_string); // 0x13ac NEW_2
	var_823_int = 0; // 0x13ae PushI
	var_824_bool = var_821_int == var_823_int; // 0x13af Eq
	if(var_824_bool == 0) goto Label_5043; // 0x13b0 JumpB
	var_819_bool = 1; // 0x13b1 MovB
	return 0; // 0x13b2 Return
	
Label_5043:
	var_819_bool = 0; // 0x13b3 MovB
	return 0; // 0x13b4 Return
}


func_4527(var_166_bool, var_167_object, var_168_float)
{
	var_169_bool = var_167_object == 0; // 0x11b0 Not
	if(var_169_bool == 0) goto Label_4532; // 0x11b1 JumpB
	var_166_bool = 0; // 0x11b2 MovB
	return 0; // 0x11b3 Return
	
Label_4532:
	var_170_int = 0; // 0x11b4 PushI
	var_171_bool = var_168_float > var_170_int; // 0x11b5 GT
	if(var_171_bool == 0) goto Label_4539; // 0x11b6 JumpB
	var_172_int = 8; // 0x11b7 PushI
	SendWorldWndMessage(var_172_int); // 0x11b8 Func
	goto Label_4548; // 0x11ba Jump
	
Label_4548:
	var_173_float = 0; // 0x11c4 PushV
	var_173_float = var_168_float; // 0x11c5 Mov
	func_4562(var_173_float); // 0x11c6 NEW_2
	var_177_bool = 0; var_178_object = Obj(); var_179_string = ""; var_180_float = 0; var_181_float = 0; var_182_float = 0; // 0x11c8 PushV
	var_178_object = var_167_object; // 0x11c9 Mov
	var_179_string = "reputation"; // 0x11ca MovS
	var_180_float = var_168_float; // 0x11cb Mov
	var_181_float = 0; // 0x11cc MovI
	var_182_float = 1; // 0x11cd MovI
	func_4103(var_177_bool, var_178_object, var_179_string, var_180_float, var_181_float, var_182_float); // 0x11ce NEW_2
	var_166_bool = 1; // 0x11d0 MovB
	return 0; // 0x11d1 Return
	
Label_4539:
	var_201_int = 0; // 0x11bb PushI
	var_202_bool = var_168_float < var_201_int; // 0x11bc LT
	if(var_202_bool == 0) goto Label_4546; // 0x11bd JumpB
	var_203_int = 9; // 0x11be PushI
	SendWorldWndMessage(var_203_int); // 0x11bf Func
	goto Label_4548; // 0x11c1 Jump
	
Label_4546:
	var_166_bool = 0; // 0x11c2 MovB
	return 0; // 0x11c3 Return
}


func_5045(var_834_bool)
{
	var_836_int = 0; var_837_string = ""; // 0x13b6 PushV
	var_837_string = "ook9Maria2"; // 0x13b7 MovS
	func_4459(var_836_int, var_837_string); // 0x13b8 NEW_2
	var_838_int = 0; // 0x13ba PushI
	var_839_bool = var_836_int == var_838_int; // 0x13bb Eq
	if(var_839_bool == 0) goto Label_5055; // 0x13bc JumpB
	var_834_bool = 1; // 0x13bd MovB
	return 0; // 0x13be Return
	
Label_5055:
	var_834_bool = 0; // 0x13bf MovB
	return 0; // 0x13c0 Return
}


func_3000(var_2_object, var_694_string)
{
	var_695_bool = 0; // 0xbb9 PushV
	func_4636(var_695_bool); // 0xbba NEW_2
	var_696_bool = var_695_bool == 0; // 0xbbc Not
	if(var_696_bool == 0) goto Label_3007; // 0xbbd JumpB
	return 0; // 0xbbe Return
	
Label_3007:
	var_697_bool = var_694_string == var_2_object; // 0xbbf Eq
	if(var_697_bool == 0) goto Label_3010; // 0xbc0 JumpB
	return 0; // 0xbc1 Return
	
Label_3010:
	var_698_string = ""; var_699_bool = 0; // 0xbc2 PushV
	var_698_string = var_694_string; // 0xbc3 Mov
	var_700_string = ""; // 0xbc4 PushS
	var_701_bool = var_694_string == var_700_string; // 0xbc5 Eq
	if(var_701_bool == 0) goto Label_3017; // 0xbc6 JumpB
	var_699_bool = 0; // 0xbc7 MovB
	goto Label_3018; // 0xbc8 Jump
	
Label_3018:
	func_4395(var_698_string, var_699_bool); // 0xbca NEW_2
	var_2_object = var_694_string; // 0xbcc TMov
	return 0; // 0xbcd Return
	
Label_3017:
	var_699_bool = 1; // 0xbc9 MovB
}


func_960(var_0_object, var_449_int, var_450_object)
{
	var_452_object = Obj(); var_453_bool = 0; var_454_int = 0; var_455_bool = 0; var_456_object = Obj(); var_457_bool = 0; var_458_int = 0; var_459_bool = 0; // 0x3c0 PushV
	var_0_object = var_450_object; // 0x3c1 TMov
	var_460_bool = 0; var_461_object = Obj(); var_462_float = 0; // 0x3c2 PushV
	var_461_object = var_450_object; // 0x3c3 Mov
	var_462_float = 70.0; // 0x3c4 MovF
	func_4156(var_461_object, var_462_float); // 0x3c5 NEW_2
	var_463_bool = var_460_bool == 0; // 0x3c7 Not
	if(var_463_bool == 0) goto Label_971; // 0x3c8 JumpB
	var_449_int = -2; // 0x3c9 MovI
	return 8; // 0x3ca Return
	
Label_971:
	CreateDialog(var_456_object); // 0x3cb Func
	var_464_int = 0; // 0x3cd PushV
	func_4630(var_464_int); // 0x3ce NEW_2
	SetNPCName(var_464_int); // 0x3d0 ObjFunc
	var_465_int = 0; // 0x3d2 PushV
	func_4628(var_465_int); // 0x3d3 NEW_2
	SetNPCDescription(var_465_int); // 0x3d5 ObjFunc
	var_466_string = ""; // 0x3d7 PushV
	func_4632(var_466_string); // 0x3d8 NEW_2
	SetPhoto(var_466_string); // 0x3da ObjFunc
	var_467_string = ""; // 0x3dc PushV
	func_4634(var_467_string); // 0x3dd NEW_2
	SetPhoto2(var_467_string); // 0x3df ObjFunc
	var_468_int = 0; // 0x3e1 PushV
	func_5255(var_468_int); // 0x3e2 NEW_2
	SetPlayerName(var_468_int); // 0x3e4 ObjFunc
	var_458_int = -1; // 0x3e6 MovI
	IsOverrideActive(var_457_bool); // 0x3e7 Func
	var_469_bool = var_457_bool; // 0x3e9 Push
	if(var_469_bool == 0) goto Label_1005; // 0x3ea JumpB
	var_449_int = -2; // 0x3eb MovI
	return 8; // 0x3ec Return
	
Label_1005:
	DoDialog(var_456_object); // 0x3ed Func
	var_470_bool = 0; var_471_object = Obj(); // 0x3ef PushV
	var_472_object = Obj(); // 0x3f0 PushV
	func_4432(var_472_object); // 0x3f1 NEW_2
	var_471_object = var_472_object; // 0x3f2 Mov
	func_4241(var_470_bool, var_471_object); // 0x3f4 NEW_2
	var_473_object = Obj(); var_474_object = Obj(); // 0x3f6 PushV
	var_473_object = var_450_object; // 0x3f7 Mov
	var_474_object = var_456_object; // 0x3f8 Mov
	TaskCall(7); // 0x3f9 TaskCall
	func_1041(var_475_object, var_476_object, var_477_string, var_478_bool, var_473_object, var_474_object); // 0x3fa NEW_2
	TaskReturn(); // 0x3fb TaskReturn
	IsDialogEnd(var_459_bool); // 0x3fd ObjFunc
	
Label_1023:
	var_528_bool = var_459_bool == 0; // 0x3ff Not
	if(var_528_bool == 0) goto Label_1030; // 0x400 JumpB
	sync(); // 0x401 Func
	IsDialogEnd(var_459_bool); // 0x403 ObjFunc
	goto Label_1023; // 0x405 Jump
	
Label_1030:
	var_529_object = Obj(); // 0x406 PushV
	var_529_object = var_450_object; // 0x407 Mov
	func_4224(); // 0x408 NEW_2
	StopDialog(var_456_object); // 0x40a Func
	GetReturnValue(var_458_int); // 0x40c ObjFunc
	var_449_int = var_458_int; // 0x40e Mov
	return 8; // 0x40f Return
}


func_5057(var_913_bool)
{
	var_915_int = 0; var_916_string = ""; // 0x13c2 PushV
	var_916_string = "ook10Maria1"; // 0x13c3 MovS
	func_4459(var_915_int, var_916_string); // 0x13c4 NEW_2
	var_917_int = 0; // 0x13c6 PushI
	var_918_bool = var_915_int == var_917_int; // 0x13c7 Eq
	if(var_918_bool == 0) goto Label_5067; // 0x13c8 JumpB
	var_913_bool = 1; // 0x13c9 MovB
	return 0; // 0x13ca Return
	
Label_5067:
	var_913_bool = 0; // 0x13cb MovB
	return 0; // 0x13cc Return
}


func_2498(var_0_object, var_1_object, var_2_object, var_3_string, var_556_object, var_557_object)
{
	var_0_object = var_557_object; // 0x9c3 TMov
	var_1_object = var_556_object; // 0x9c4 TMov
	var_3_string = 0; // 0x9c5 TMovB
	var_562_int = 1; // 0x9c6 PushI
	if(var_562_int == 0) goto Label_2536; // 0x9c7 JumpB
	var_563_string = ""; // 0x9c8 PushV
	var_563_string = "Neutral"; // 0x9c9 MovS
	func_2566(var_557_object, var_563_string); // 0x9ca NEW_2
	var_571_int = 539425; // 0x9cc PushI
	SetMessage(var_571_int); // 0x9cd TObjFunc
	ClearReplies(); // 0x9cf TObjFunc
	var_572_bool = 0; var_573_object = Obj(); // 0x9d1 PushV
	var_573_object = var_1_object; // 0x9d2 MovT
	func_4967(var_573_object); // 0x9d3 NEW_2
	if(var_572_bool == 0) goto Label_2523; // 0x9d5 JumpB
	var_578_int = 539426; // 0x9d6 PushI
	var_579_int = 42755; // 0x9d7 PushI
	var_580_int = 41357; // 0x9d8 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0x9d9 TObjFunc
	
Label_2523:
	var_581_int = 539433; // 0x9db PushI
	var_582_int = -1; // 0x9dc PushI
	var_583_int = 41364; // 0x9dd PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0x9de TObjFunc
	var_584_int = 540718; // 0x9e0 PushI
	var_585_int = -1; // 0x9e1 PushI
	var_586_int = 42754; // 0x9e2 PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0x9e3 TObjFunc
	goto Label_2536; // 0x9e5 Jump
	
Label_2536:
	var_587_bool = 0; // 0x9e8 PushV
	func_4636(var_587_bool); // 0x9e9 NEW_2
	if(var_587_bool == 0) goto Label_2551; // 0x9eb JumpB
	
Label_2540:
	lshWaitForAnimEnd(); // 0x9ec Func
	var_588_string = var_3_string; // 0x9ee PushT
	if(var_588_string == 0) goto Label_2545; // 0x9ef JumpB
	goto Label_2550; // 0x9f0 Jump
	
Label_2550:
	goto Label_2565; // 0x9f6 Jump
	
Label_2565:
	return 0; // 0xa05 Return
	
Label_2545:
	var_589_string = ""; // 0x9f1 PushV
	var_589_string = var_2_object; // 0x9f2 MovT
	func_4379(var_589_string); // 0x9f3 NEW_2
	goto Label_2540; // 0x9f5 Jump
	
Label_2551:
	var_590_string = "all"; // 0x9f7 PushS
	var_591_string = "idle"; // 0x9f8 PushS
	PlayAnimation(var_590_string, var_591_string); // 0x9f9 Func
	
Label_2555:
	WaitForAnimEnd(); // 0x9fb Func
	var_592_string = var_3_string; // 0x9fd PushT
	if(var_592_string == 0) goto Label_2560; // 0x9fe JumpB
	goto Label_2565; // 0x9ff Jump
	
Label_2560:
	var_593_string = "all"; // 0xa00 PushS
	var_594_string = "idle"; // 0xa01 PushS
	PlayAnimation(var_593_string, var_594_string); // 0xa02 Func
	goto Label_2555; // 0xa04 Jump
}


func_452(var_0_object, var_1_object, var_2_object, var_3_string, var_243_object, var_244_object)
{
	var_0_object = var_244_object; // 0x1c5 TMov
	var_1_object = var_243_object; // 0x1c6 TMov
	var_3_string = 0; // 0x1c7 TMovB
	var_249_int = 1; // 0x1c8 PushI
	if(var_249_int == 0) goto Label_480; // 0x1c9 JumpB
	var_250_string = ""; // 0x1ca PushV
	var_250_string = "Neutral"; // 0x1cb MovS
	func_510(var_244_object, var_250_string); // 0x1cc NEW_2
	var_267_int = 525501; // 0x1ce PushI
	SetMessage(var_267_int); // 0x1cf TObjFunc
	ClearReplies(); // 0x1d1 TObjFunc
	var_268_int = 525502; // 0x1d3 PushI
	var_269_int = 27545; // 0x1d4 PushI
	var_270_int = 26858; // 0x1d5 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x1d6 TObjFunc
	var_271_int = 526269; // 0x1d8 PushI
	var_272_int = 27545; // 0x1d9 PushI
	var_273_int = 27544; // 0x1da PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x1db TObjFunc
	goto Label_480; // 0x1dd Jump
	
Label_480:
	var_274_bool = 0; // 0x1e0 PushV
	func_4636(var_274_bool); // 0x1e1 NEW_2
	if(var_274_bool == 0) goto Label_495; // 0x1e3 JumpB
	
Label_484:
	lshWaitForAnimEnd(); // 0x1e4 Func
	var_275_string = var_3_string; // 0x1e6 PushT
	if(var_275_string == 0) goto Label_489; // 0x1e7 JumpB
	goto Label_494; // 0x1e8 Jump
	
Label_494:
	goto Label_509; // 0x1ee Jump
	
Label_509:
	return 0; // 0x1fd Return
	
Label_489:
	var_276_string = ""; // 0x1e9 PushV
	var_276_string = var_2_object; // 0x1ea MovT
	func_4379(var_276_string); // 0x1eb NEW_2
	goto Label_484; // 0x1ed Jump
	
Label_495:
	var_287_string = "all"; // 0x1ef PushS
	var_288_string = "idle"; // 0x1f0 PushS
	PlayAnimation(var_287_string, var_288_string); // 0x1f1 Func
	
Label_499:
	WaitForAnimEnd(); // 0x1f3 Func
	var_289_string = var_3_string; // 0x1f5 PushT
	if(var_289_string == 0) goto Label_504; // 0x1f6 JumpB
	goto Label_509; // 0x1f7 Jump
	
Label_504:
	var_290_string = "all"; // 0x1f8 PushS
	var_291_string = "idle"; // 0x1f9 PushS
	PlayAnimation(var_290_string, var_291_string); // 0x1fa Func
	goto Label_499; // 0x1fc Jump
}


func_1481(var_2_object, var_630_string)
{
	var_631_bool = 0; // 0x5ca PushV
	func_4636(var_631_bool); // 0x5cb NEW_2
	var_632_bool = var_631_bool == 0; // 0x5cd Not
	if(var_632_bool == 0) goto Label_1488; // 0x5ce JumpB
	return 0; // 0x5cf Return
	
Label_1488:
	var_633_bool = var_630_string == var_2_object; // 0x5d0 Eq
	if(var_633_bool == 0) goto Label_1491; // 0x5d1 JumpB
	return 0; // 0x5d2 Return
	
Label_1491:
	var_634_string = ""; var_635_bool = 0; // 0x5d3 PushV
	var_634_string = var_630_string; // 0x5d4 Mov
	var_636_string = ""; // 0x5d5 PushS
	var_637_bool = var_630_string == var_636_string; // 0x5d6 Eq
	if(var_637_bool == 0) goto Label_1498; // 0x5d7 JumpB
	var_635_bool = 0; // 0x5d8 MovB
	goto Label_1499; // 0x5d9 Jump
	
Label_1499:
	func_4395(var_634_string, var_635_bool); // 0x5db NEW_2
	var_2_object = var_630_string; // 0x5dd TMov
	return 0; // 0x5de Return
	
Label_1498:
	var_635_bool = 1; // 0x5da MovB
}


func_5069(var_928_bool)
{
	var_930_int = 0; var_931_string = ""; // 0x13ce PushV
	var_931_string = "ook10Maria2"; // 0x13cf MovS
	func_4459(var_930_int, var_931_string); // 0x13d0 NEW_2
	var_932_int = 0; // 0x13d2 PushI
	var_933_bool = var_930_int == var_932_int; // 0x13d3 Eq
	if(var_933_bool == 0) goto Label_5079; // 0x13d4 JumpB
	var_928_bool = 1; // 0x13d5 MovB
	return 0; // 0x13d6 Return
	
Label_5079:
	var_928_bool = 0; // 0x13d7 MovB
	return 0; // 0x13d8 Return
}


func_4562(var_173_float)
{
	var_174_object = Obj(); var_175_object = Obj(); // 0x11d2 PushV
	CreateFloatVector(var_175_object); // 0x11d3 Func
	add(var_173_float); // 0x11d5 ObjFunc
	var_176_int = 16; // 0x11d7 PushI
	SendWorldWndMessage(var_176_int, var_175_object); // 0x11d8 Func
	return 2; // 0x11da Return
}


func_5081(var_707_bool)
{
	var_709_bool = 0; // 0x13da PushV
	func_5289(var_709_bool); // 0x13db NEW_2
	var_707_bool = var_709_bool; // 0x13dc Mov
	return 0; // 0x13de Return
}


func_4572(var_89_bool, var_90_string, var_91_string)
{
	var_92_object = Obj(); var_93_object = Obj(); // 0x11dc PushV
	FindActor(var_93_object, var_90_string); // 0x11dd Func
	var_94_bool = var_93_object == 0; // 0x11df NullEq
	if(var_94_bool == 0) goto Label_4579; // 0x11e0 JumpB
	var_89_bool = 0; // 0x11e1 MovB
	return 2; // 0x11e2 Return
	
Label_4579:
	Trigger(var_93_object, var_91_string); // 0x11e3 Func
	var_89_bool = 1; // 0x11e5 MovB
	return 2; // 0x11e6 Return
}


func_5087(var_717_bool)
{
	var_719_bool = 0; // 0x13e0 PushV
	func_5303(var_719_bool); // 0x13e1 NEW_2
	var_717_bool = var_719_bool; // 0x13e2 Mov
	return 0; // 0x13e4 Return
}


func_5093(var_744_bool)
{
	var_746_bool = 0; // 0x13e6 PushV
	func_5297(var_746_bool); // 0x13e7 NEW_2
	var_744_bool = var_746_bool; // 0x13e8 Mov
	return 0; // 0x13ea Return
}


func_4584(var_79_float)
{
	var_80_float = 0; var_81_float = 0; // 0x11e8 PushV
	GetGameTime(var_81_float); // 0x11e9 Func
	var_79_float = var_81_float; // 0x11eb Mov
	return 2; // 0x11ec Return
}


func_5099()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x13eb PushV
	var_68_int = 449; // 0x13ec PushI
	var_69_int = 1; // 0x13ed PushI
	var_70_int = 527007; // 0x13ee PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x13ef Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x13f1 PushV
	var_72_object = var_67_object; // 0x13f2 Mov
	var_73_int = 447; // 0x13f3 MovI
	func_5177(var_71_bool, var_72_object, var_73_int); // 0x13f4 NEW_2
	return 2; // 0x13f6 Return
}


func_4076(var_95_bool)
{
	var_95_bool = 1; // 0xfec MovB
	return 0; // 0xfed Return
}


func_4589(var_203_int)
{
	var_204_float = 0; var_205_float = 0; // 0x11ed PushV
	GetGameTime(var_205_float); // 0x11ee Func
	var_206_int = 1; // 0x11f0 PushI
	var_207_int = 0; // 0x11f1 PushV
	var_208_int = 24; // 0x11f2 PushI
	var_207_int = var_205_float / var_205_float; // 0x11f3 Div2
	var_203_int = var_206_int + var_207_int; // 0x11f4 Add2
	return 2; // 0x11f5 Return
}


func_4078()
{
	StopAnimation(); // 0xfee Func
	StopGroup0(); // 0xff0 Func
	return 0; // 0xff2 Return
}


func_4083(var_71_float)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0xff3 PushV
	GetPosition(var_76_cvector); // 0xff4 Func
	GetPosition(var_77_cvector); // 0xff6 ObjFunc
	var_78_cvector = var_77_cvector - var_76_cvector; // 0xff8 Sub2
	var_71_float = var_78_cvector | var_78_cvector; // 0xff9 Or2
	return 6; // 0xffa Return
}


func_4598(var_301_bool, var_302_int)
{
	var_303_int = 0; // 0x11f7 PushV
	func_4589(var_303_int); // 0x11f8 NEW_2
	var_301_bool = var_303_int == var_302_int; // 0x11fa Eq2
	return 0; // 0x11fb Return
}


func_5112()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x13f8 PushV
	var_68_int = 330; // 0x13f9 PushI
	var_69_int = 2; // 0x13fa PushI
	var_70_int = 524775; // 0x13fb PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x13fc Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x13fe PushV
	var_72_object = var_67_object; // 0x13ff Mov
	var_73_int = 326; // 0x1400 MovI
	func_5177(var_71_bool, var_72_object, var_73_int); // 0x1401 NEW_2
	return 2; // 0x1403 Return
}


func_4091(var_185_bool, var_186_object, var_187_string)
{
	var_188_bool = 0; var_189_bool = 0; // 0xffb PushV
	var_190_string = "HasProperty"; // 0xffc PushS
	var_191_int = 2; // 0xffd PushI
	var_192_bool = IsFuncExist(var_186_object, var_190_string, var_191_int); // 0xffe FuncExist
	var_193_bool = var_192_bool == 0; // 0xfff Not
	if(var_193_bool == 0) goto Label_4099; // 0x1000 JumpB
	var_185_bool = 0; // 0x1001 MovB
	return 2; // 0x1002 Return
	
Label_4099:
	HasProperty(var_187_string, var_189_bool); // 0x1003 ObjFunc
	var_185_bool = var_189_bool; // 0x1005 Mov
	return 2; // 0x1006 Return
}


func_4604(var_81_string, var_82_int)
{
	var_83_string = ""; var_84_string = ""; // 0x11fc PushV
	var_84_string = "idle"; // 0x11fd MovS
	var_85_int = var_82_int; // 0x11fe Push
	if(var_85_int == 0) goto Label_4609; // 0x11ff JumpB
	var_84_string = var_84_string + var_82_int; // 0x1200 Add2
	
Label_4609:
	var_81_string = var_84_string; // 0x1201 Mov
	return 2; // 0x1202 Return
}


func_510(var_2_object, var_250_string)
{
	var_251_bool = 0; // 0x1ff PushV
	func_4636(var_251_bool); // 0x200 NEW_2
	var_252_bool = var_251_bool == 0; // 0x202 Not
	if(var_252_bool == 0) goto Label_517; // 0x203 JumpB
	return 0; // 0x204 Return
	
Label_517:
	var_253_bool = var_250_string == var_2_object; // 0x205 Eq
	if(var_253_bool == 0) goto Label_520; // 0x206 JumpB
	return 0; // 0x207 Return
	
Label_520:
	var_254_string = ""; var_255_bool = 0; // 0x208 PushV
	var_254_string = var_250_string; // 0x209 Mov
	var_256_string = ""; // 0x20a PushS
	var_257_bool = var_250_string == var_256_string; // 0x20b Eq
	if(var_257_bool == 0) goto Label_527; // 0x20c JumpB
	var_255_bool = 0; // 0x20d MovB
	goto Label_528; // 0x20e Jump
	
Label_528:
	func_4395(var_254_string, var_255_bool); // 0x210 NEW_2
	var_2_object = var_250_string; // 0x212 TMov
	return 0; // 0x213 Return
	
Label_527:
	var_255_bool = 1; // 0x20f MovB
}


