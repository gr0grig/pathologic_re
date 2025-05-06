task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_bool, var_24_int, var_25_int)
{
	var_26_int = 1; // 0x9b PushI
	if(var_26_int == 0) goto Label_221; // 0x9c JumpB
	func_1839(); // 0x9e NEW_2
	var_28_int = 21241; // 0xa0 PushI
	var_29_bool = var_25_int == var_28_int; // 0xa1 Eq
	if(var_29_bool == 0) goto Label_173; // 0xa2 JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0xa3 PushV
	var_30_object = var_1_object; // 0xa4 MovT
	var_31_object = var_0_object; // 0xa5 MovT
	func_1977(var_31_object); // 0xa6 NEW_2
	var_51_object = Obj(); var_52_object = Obj(); // 0xa8 PushV
	var_51_object = var_1_object; // 0xa9 MovT
	var_52_object = var_0_object; // 0xaa MovT
	func_1987(); // 0xab NEW_2
	
Label_173:
	var_55_int = 21242; // 0xad PushI
	var_56_bool = var_25_int == var_55_int; // 0xae Eq
	if(var_56_bool == 0) goto Label_186; // 0xaf JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xb0 PushV
	var_57_object = var_1_object; // 0xb1 MovT
	var_58_object = var_0_object; // 0xb2 MovT
	func_1977(var_58_object); // 0xb3 NEW_2
	var_59_object = Obj(); var_60_object = Obj(); // 0xb5 PushV
	var_59_object = var_1_object; // 0xb6 MovT
	var_60_object = var_0_object; // 0xb7 MovT
	func_1987(); // 0xb8 NEW_2
	
Label_186:
	var_61_int = 21240; // 0xba PushI
	var_62_bool = var_24_int == var_61_int; // 0xbb Eq
	if(var_62_bool == 0) goto Label_209; // 0xbc JumpB
	var_63_string = ""; // 0xbd PushV
	var_63_string = "Neutral"; // 0xbe MovS
	func_132(var_25_int, var_63_string); // 0xbf NEW_2
	var_80_int = 520060; // 0xc1 PushI
	SetMessage(var_80_int); // 0xc2 TObjFunc
	ClearReplies(); // 0xc4 TObjFunc
	var_81_int = 520061; // 0xc6 PushI
	var_82_int = -1; // 0xc7 PushI
	var_83_int = 21241; // 0xc8 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xc9 TObjFunc
	var_84_int = 520062; // 0xcb PushI
	var_85_int = -1; // 0xcc PushI
	var_86_int = 21242; // 0xcd PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0xce TObjFunc
	return 0; // 0xd0 Return
	
Label_209:
	var_3_string = 1; // 0xd1 TMovB
	var_87_bool = 0; // 0xd2 PushV
	func_2093(var_87_bool); // 0xd3 NEW_2
	if(var_87_bool == 0) goto Label_217; // 0xd5 JumpB
	lshStopAnimation(); // 0xd6 Func
	goto Label_219; // 0xd8 Jump
	
Label_219:
	return 0; // 0xdb Return
	
Label_217:
	StopAnimation(); // 0xd9 Func
	
Label_221:
	return 0; // 0xdd Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_bool, var_24_int, var_25_int)
{
	var_26_int = 1; // 0x183 PushI
	if(var_26_int == 0) goto Label_437; // 0x184 JumpB
	func_1839(); // 0x186 NEW_2
	var_28_int = 21244; // 0x188 PushI
	var_29_bool = var_24_int == var_28_int; // 0x189 Eq
	if(var_29_bool == 0) goto Label_425; // 0x18a JumpB
	var_30_string = ""; // 0x18b PushV
	var_30_string = "Neutral"; // 0x18c MovS
	func_364(var_25_int, var_30_string); // 0x18d NEW_2
	var_47_int = 520064; // 0x18f PushI
	SetMessage(var_47_int); // 0x190 TObjFunc
	ClearReplies(); // 0x192 TObjFunc
	var_48_bool = 0; var_49_object = Obj(); // 0x194 PushV
	var_49_object = var_1_object; // 0x195 MovT
	func_2005(var_49_object); // 0x196 NEW_2
	if(var_48_bool == 0) goto Label_414; // 0x198 JumpB
	var_56_int = 520065; // 0x199 PushI
	var_57_int = -1; // 0x19a PushI
	var_58_int = 21245; // 0x19b PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0x19c TObjFunc
	
Label_414:
	var_59_int = 520066; // 0x19e PushI
	var_60_int = -1; // 0x19f PushI
	var_61_int = 21246; // 0x1a0 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0x1a1 TObjFunc
	var_62_int = 520067; // 0x1a3 PushI
	var_63_int = -1; // 0x1a4 PushI
	var_64_int = 21247; // 0x1a5 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_3_string = 1; // 0x1a9 TMovB
	var_65_bool = 0; // 0x1aa PushV
	func_2093(var_65_bool); // 0x1ab NEW_2
	if(var_65_bool == 0) goto Label_433; // 0x1ad JumpB
	lshStopAnimation(); // 0x1ae Func
	goto Label_435; // 0x1b0 Jump
	
Label_435:
	return 0; // 0x1b3 Return
	
Label_433:
	StopAnimation(); // 0x1b1 Func
	
Label_437:
	return 0; // 0x1b5 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_bool, var_24_int, var_25_int)
{
	var_26_int = 1; // 0x251 PushI
	if(var_26_int == 0) goto Label_633; // 0x252 JumpB
	func_1839(); // 0x254 NEW_2
	var_28_int = 21249; // 0x256 PushI
	var_29_bool = var_24_int == var_28_int; // 0x257 Eq
	if(var_29_bool == 0) goto Label_621; // 0x258 JumpB
	var_30_string = ""; // 0x259 PushV
	var_30_string = "Neutral"; // 0x25a MovS
	func_570(var_25_int, var_30_string); // 0x25b NEW_2
	var_47_int = 520069; // 0x25d PushI
	SetMessage(var_47_int); // 0x25e TObjFunc
	ClearReplies(); // 0x260 TObjFunc
	var_48_int = 520070; // 0x262 PushI
	var_49_int = -1; // 0x263 PushI
	var_50_int = 21250; // 0x264 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x265 TObjFunc
	var_51_int = 520071; // 0x267 PushI
	var_52_int = -1; // 0x268 PushI
	var_53_int = 21251; // 0x269 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0x26a TObjFunc
	return 0; // 0x26c Return
	
Label_621:
	var_3_string = 1; // 0x26d TMovB
	var_54_bool = 0; // 0x26e PushV
	func_2093(var_54_bool); // 0x26f NEW_2
	if(var_54_bool == 0) goto Label_629; // 0x271 JumpB
	lshStopAnimation(); // 0x272 Func
	goto Label_631; // 0x274 Jump
	
Label_631:
	return 0; // 0x277 Return
	
Label_629:
	StopAnimation(); // 0x275 Func
	
Label_633:
	return 0; // 0x279 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_int, var_23_bool, var_24_int, var_25_int)
{
	var_26_int = 1; // 0x35b PushI
	if(var_26_int == 0) goto Label_1159; // 0x35c JumpB
	func_1839(); // 0x35e NEW_2
	var_28_int = 21270; // 0x360 PushI
	var_29_bool = var_25_int == var_28_int; // 0x361 Eq
	if(var_29_bool == 0) goto Label_872; // 0x362 JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0x363 PushV
	var_30_object = var_1_object; // 0x364 MovT
	var_31_object = var_0_object; // 0x365 MovT
	func_1966(); // 0x366 NEW_2
	
Label_872:
	var_33_int = 21253; // 0x368 PushI
	var_34_bool = var_24_int == var_33_int; // 0x369 Eq
	if(var_34_bool == 0) goto Label_965; // 0x36a JumpB
	var_35_bool = 0; var_36_object = Obj(); // 0x36b PushV
	var_36_object = var_1_object; // 0x36c MovT
	func_2050(var_36_object); // 0x36d NEW_2
	if(var_35_bool == 0) goto Label_930; // 0x36f JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x370 PushV
	var_43_object = var_1_object; // 0x371 MovT
	var_44_object = var_0_object; // 0x372 MovT
	func_1971(); // 0x373 NEW_2
	var_47_string = ""; // 0x375 PushV
	var_47_string = "Neutral"; // 0x376 MovS
	func_836(var_25_int, var_47_string); // 0x377 NEW_2
	var_64_int = 520073; // 0x379 PushI
	SetMessage(var_64_int); // 0x37a TObjFunc
	ClearReplies(); // 0x37c TObjFunc
	var_65_int = 520074; // 0x37e PushI
	var_66_int = 21255; // 0x37f PushI
	var_67_int = 21254; // 0x380 PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x381 TObjFunc
	var_68_bool = 0; var_69_object = Obj(); // 0x383 PushV
	var_69_object = var_1_object; // 0x384 MovT
	func_2005(var_69_object); // 0x385 NEW_2
	if(var_68_bool == 0) goto Label_909; // 0x387 JumpB
	var_74_int = 520085; // 0x388 PushI
	var_75_int = 21266; // 0x389 PushI
	var_76_int = 21265; // 0x38a PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x38b TObjFunc
	
Label_909:
	var_77_bool = 0; var_78_object = Obj(); // 0x38d PushV
	var_78_object = var_1_object; // 0x38e MovT
	func_2017(var_78_object); // 0x38f NEW_2
	if(var_77_bool == 0) goto Label_919; // 0x391 JumpB
	var_83_int = 541546; // 0x392 PushI
	var_84_int = 43710; // 0x393 PushI
	var_85_int = 43709; // 0x394 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x395 TObjFunc
	
Label_919:
	var_86_bool = 0; var_87_object = Obj(); // 0x397 PushV
	var_87_object = var_1_object; // 0x398 MovT
	func_1993(var_87_object); // 0x399 NEW_2
	if(var_86_bool == 0) goto Label_929; // 0x39b JumpB
	var_92_int = 541549; // 0x39c PushI
	var_93_int = 21255; // 0x39d PushI
	var_94_int = 43713; // 0x39e PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x39f TObjFunc
	
Label_929:
	return 0; // 0x3a1 Return
	
Label_930:
	var_95_string = ""; // 0x3a2 PushV
	var_95_string = "Neutral"; // 0x3a3 MovS
	func_836(var_25_int, var_95_string); // 0x3a4 NEW_2
	var_96_int = 520088; // 0x3a6 PushI
	SetMessage(var_96_int); // 0x3a7 TObjFunc
	ClearReplies(); // 0x3a9 TObjFunc
	var_97_bool = 0; var_98_object = Obj(); // 0x3ab PushV
	var_98_object = var_1_object; // 0x3ac MovT
	func_2029(var_97_bool, var_98_object); // 0x3ad NEW_2
	if(var_97_bool == 0) goto Label_949; // 0x3af JumpB
	var_110_int = 520089; // 0x3b0 PushI
	var_111_int = -1; // 0x3b1 PushI
	var_112_int = 21270; // 0x3b2 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x3b3 TObjFunc
	
Label_949:
	var_113_int = 520090; // 0x3b5 PushI
	var_114_int = 21272; // 0x3b6 PushI
	var_115_int = 21271; // 0x3b7 PushI
	AddReply(var_113_int, var_114_int, var_115_int); // 0x3b8 TObjFunc
	var_116_int = 520092; // 0x3ba PushI
	var_117_int = 21274; // 0x3bb PushI
	var_118_int = 21273; // 0x3bc PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x3bd TObjFunc
	var_119_int = 520095; // 0x3bf PushI
	var_120_int = -1; // 0x3c0 PushI
	var_121_int = 21277; // 0x3c1 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x3c2 TObjFunc
	return 0; // 0x3c4 Return
	
Label_965:
	var_122_int = 21274; // 0x3c5 PushI
	var_123_bool = var_24_int == var_122_int; // 0x3c6 Eq
	if(var_123_bool == 0) goto Label_983; // 0x3c7 JumpB
	var_124_string = ""; // 0x3c8 PushV
	var_124_string = "Neutral"; // 0x3c9 MovS
	func_836(var_25_int, var_124_string); // 0x3ca NEW_2
	var_125_int = 520093; // 0x3cc PushI
	SetMessage(var_125_int); // 0x3cd TObjFunc
	ClearReplies(); // 0x3cf TObjFunc
	var_126_int = 520094; // 0x3d1 PushI
	var_127_int = 21272; // 0x3d2 PushI
	var_128_int = 21275; // 0x3d3 PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x3d4 TObjFunc
	return 0; // 0x3d6 Return
	
Label_983:
	var_129_int = 21272; // 0x3d7 PushI
	var_130_bool = var_24_int == var_129_int; // 0x3d8 Eq
	if(var_130_bool == 0) goto Label_1001; // 0x3d9 JumpB
	var_131_string = ""; // 0x3da PushV
	var_131_string = "Neutral"; // 0x3db MovS
	func_836(var_25_int, var_131_string); // 0x3dc NEW_2
	var_132_int = 520091; // 0x3de PushI
	SetMessage(var_132_int); // 0x3df TObjFunc
	ClearReplies(); // 0x3e1 TObjFunc
	var_133_int = 520096; // 0x3e3 PushI
	var_134_int = -1; // 0x3e4 PushI
	var_135_int = 21278; // 0x3e5 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x3e6 TObjFunc
	return 0; // 0x3e8 Return
	
Label_1001:
	var_136_int = 43710; // 0x3e9 PushI
	var_137_bool = var_24_int == var_136_int; // 0x3ea Eq
	if(var_137_bool == 0) goto Label_1019; // 0x3eb JumpB
	var_138_string = ""; // 0x3ec PushV
	var_138_string = "Neutral"; // 0x3ed MovS
	func_836(var_25_int, var_138_string); // 0x3ee NEW_2
	var_139_int = 541547; // 0x3f0 PushI
	SetMessage(var_139_int); // 0x3f1 TObjFunc
	ClearReplies(); // 0x3f3 TObjFunc
	var_140_int = 541548; // 0x3f5 PushI
	var_141_int = 21255; // 0x3f6 PushI
	var_142_int = 43711; // 0x3f7 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x3f8 TObjFunc
	return 0; // 0x3fa Return
	
Label_1019:
	var_143_int = 21266; // 0x3fb PushI
	var_144_bool = var_24_int == var_143_int; // 0x3fc Eq
	if(var_144_bool == 0) goto Label_1037; // 0x3fd JumpB
	var_145_string = ""; // 0x3fe PushV
	var_145_string = "Neutral"; // 0x3ff MovS
	func_836(var_25_int, var_145_string); // 0x400 NEW_2
	var_146_int = 520086; // 0x402 PushI
	SetMessage(var_146_int); // 0x403 TObjFunc
	ClearReplies(); // 0x405 TObjFunc
	var_147_int = 520087; // 0x407 PushI
	var_148_int = 21255; // 0x408 PushI
	var_149_int = 21267; // 0x409 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x40a TObjFunc
	return 0; // 0x40c Return
	
Label_1037:
	var_150_int = 21255; // 0x40d PushI
	var_151_bool = var_24_int == var_150_int; // 0x40e Eq
	if(var_151_bool == 0) goto Label_1055; // 0x40f JumpB
	var_152_string = ""; // 0x410 PushV
	var_152_string = "Neutral"; // 0x411 MovS
	func_836(var_25_int, var_152_string); // 0x412 NEW_2
	var_153_int = 520075; // 0x414 PushI
	SetMessage(var_153_int); // 0x415 TObjFunc
	ClearReplies(); // 0x417 TObjFunc
	var_154_int = 520076; // 0x419 PushI
	var_155_int = 21257; // 0x41a PushI
	var_156_int = 21256; // 0x41b PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x41c TObjFunc
	return 0; // 0x41e Return
	
Label_1055:
	var_157_int = 21257; // 0x41f PushI
	var_158_bool = var_24_int == var_157_int; // 0x420 Eq
	if(var_158_bool == 0) goto Label_1088; // 0x421 JumpB
	var_159_string = ""; // 0x422 PushV
	var_159_string = "Neutral"; // 0x423 MovS
	func_836(var_25_int, var_159_string); // 0x424 NEW_2
	var_160_int = 520077; // 0x426 PushI
	SetMessage(var_160_int); // 0x427 TObjFunc
	ClearReplies(); // 0x429 TObjFunc
	var_161_int = 520078; // 0x42b PushI
	var_162_int = 21259; // 0x42c PushI
	var_163_int = 21258; // 0x42d PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x42e TObjFunc
	var_164_int = 520082; // 0x430 PushI
	var_165_int = 21263; // 0x431 PushI
	var_166_int = 21262; // 0x432 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x433 TObjFunc
	var_167_bool = 0; var_168_object = Obj(); // 0x435 PushV
	var_168_object = var_1_object; // 0x436 MovT
	func_2005(var_168_object); // 0x437 NEW_2
	if(var_167_bool == 0) goto Label_1087; // 0x439 JumpB
	var_169_int = 520097; // 0x43a PushI
	var_170_int = 21280; // 0x43b PushI
	var_171_int = 21279; // 0x43c PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x43d TObjFunc
	
Label_1087:
	return 0; // 0x43f Return
	
Label_1088:
	var_172_int = 21280; // 0x440 PushI
	var_173_bool = var_24_int == var_172_int; // 0x441 Eq
	if(var_173_bool == 0) goto Label_1106; // 0x442 JumpB
	var_174_string = ""; // 0x443 PushV
	var_174_string = "Neutral"; // 0x444 MovS
	func_836(var_25_int, var_174_string); // 0x445 NEW_2
	var_175_int = 520098; // 0x447 PushI
	SetMessage(var_175_int); // 0x448 TObjFunc
	ClearReplies(); // 0x44a TObjFunc
	var_176_int = 520099; // 0x44c PushI
	var_177_int = -1; // 0x44d PushI
	var_178_int = 21281; // 0x44e PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x44f TObjFunc
	return 0; // 0x451 Return
	
Label_1106:
	var_179_int = 21263; // 0x452 PushI
	var_180_bool = var_24_int == var_179_int; // 0x453 Eq
	if(var_180_bool == 0) goto Label_1124; // 0x454 JumpB
	var_181_string = ""; // 0x455 PushV
	var_181_string = "Neutral"; // 0x456 MovS
	func_836(var_25_int, var_181_string); // 0x457 NEW_2
	var_182_int = 520083; // 0x459 PushI
	SetMessage(var_182_int); // 0x45a TObjFunc
	ClearReplies(); // 0x45c TObjFunc
	var_183_int = 520084; // 0x45e PushI
	var_184_int = -1; // 0x45f PushI
	var_185_int = 21264; // 0x460 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x461 TObjFunc
	return 0; // 0x463 Return
	
Label_1124:
	var_186_int = 21259; // 0x464 PushI
	var_187_bool = var_24_int == var_186_int; // 0x465 Eq
	if(var_187_bool == 0) goto Label_1147; // 0x466 JumpB
	var_188_string = ""; // 0x467 PushV
	var_188_string = "Neutral"; // 0x468 MovS
	func_836(var_25_int, var_188_string); // 0x469 NEW_2
	var_189_int = 520079; // 0x46b PushI
	SetMessage(var_189_int); // 0x46c TObjFunc
	ClearReplies(); // 0x46e TObjFunc
	var_190_int = 520080; // 0x470 PushI
	var_191_int = -1; // 0x471 PushI
	var_192_int = 21260; // 0x472 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x473 TObjFunc
	var_193_int = 520081; // 0x475 PushI
	var_194_int = -1; // 0x476 PushI
	var_195_int = 21261; // 0x477 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x478 TObjFunc
	return 0; // 0x47a Return
	
Label_1147:
	var_3_string = 1; // 0x47b TMovB
	var_196_bool = 0; // 0x47c PushV
	func_2093(var_196_bool); // 0x47d NEW_2
	if(var_196_bool == 0) goto Label_1155; // 0x47f JumpB
	lshStopAnimation(); // 0x480 Func
	goto Label_1157; // 0x482 Jump
	
Label_1157:
	return 0; // 0x485 Return
	
Label_1155:
	StopAnimation(); // 0x483 Func
	
Label_1159:
	return 0; // 0x487 Return
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_object, var_22_bool, var_23_int, var_24_int)
{
	var_25_object = Obj(); var_26_object = Obj(); var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_object = Obj(); var_32_int = 0; var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; var_37_float = 0; var_38_int = 0; var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_object = Obj(); var_46_int = 0; var_47_int = 0; var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; var_51_float = 0; var_52_int = 0; // 0x48d PushV
	var_53_int = 0; // 0x48e PushI
	var_54_bool = var_0_object == var_53_int; // 0x48f Eq
	if(var_54_bool == 0) goto Label_1177; // 0x490 JumpB
	var_55_int = 0; var_56_object = Obj(); // 0x491 PushV
	var_56_object = var_24_int; // 0x492 Mov
	TaskCall(2); // 0x493 TaskCall
	func_222(var_57_object, var_55_int, var_56_object); // 0x494 NEW_2
	TaskReturn(); // 0x495 TaskReturn
	var_0_object = -1; // 0x497 TMovI
	goto Label_1284; // 0x498 Jump
	
Label_1284:
	return 28; // 0x504 Return
	
Label_1177:
	var_196_int = 1; // 0x499 PushI
	var_197_bool = var_0_object == var_196_int; // 0x49a Eq
	if(var_197_bool == 0) goto Label_1188; // 0x49b JumpB
	var_198_int = 0; var_199_object = Obj(); // 0x49c PushV
	var_199_object = var_24_int; // 0x49d Mov
	TaskCall(0); // 0x49e TaskCall
	func_0(var_200_object, var_198_int, var_199_object); // 0x49f NEW_2
	TaskReturn(); // 0x4a0 TaskReturn
	var_0_object = -1; // 0x4a2 TMovI
	goto Label_1284; // 0x4a3 Jump
	
Label_1188:
	var_251_int = 0; var_252_object = Obj(); // 0x4a4 PushV
	var_252_object = var_24_int; // 0x4a5 Mov
	TaskCall(6); // 0x4a6 TaskCall
	func_634(var_253_object, var_251_int, var_252_object); // 0x4a7 NEW_2
	TaskReturn(); // 0x4a8 TaskReturn
	var_361_int = 1; // 0x4aa PushI
	var_362_bool = var_253_object == var_361_int; // 0x4ab Eq
	if(var_362_bool == 0) goto Label_1284; // 0x4ac JumpB
	var_363_object = Obj(); // 0x4ad PushV
	func_1899(var_363_object); // 0x4ae NEW_2
	var_39_object = var_363_object; // 0x4af Mov
	CreateIntVector(var_40_object); // 0x4b1 Func
	var_366_int = 4; // 0x4b3 PushI
	GetItemCount(var_41_int, var_366_int); // 0x4b4 ObjFunc
	var_367_string = "rat"; // 0x4b6 PushS
	GetInvItemByName(var_42_int, var_367_string); // 0x4b7 Func
	var_368_string = "rat_big"; // 0x4b9 PushS
	GetInvItemByName(var_43_int, var_368_string); // 0x4ba Func
	var_44_int = 0; // 0x4bc MovI
	
Label_1213:
	var_369_bool = var_44_int < var_41_int; // 0x4bd LT
	if(var_369_bool == 0) goto Label_1236; // 0x4be JumpB
	var_370_int = 4; // 0x4bf PushI
	GetItem(var_45_object, var_44_int, var_370_int); // 0x4c0 ObjFunc
	GetItemID(var_46_int); // 0x4c2 ObjFunc
	var_371_bool = 0; // 0x4c4 PushV
	var_371_bool = 1; // 0x4c5 MovB
	var_372_bool = var_46_int == var_42_int; // 0x4c6 Eq
	if(var_372_bool == 0) goto Label_1227; // 0x4c7 JumpB
	var_373_bool = var_46_int == var_43_int; // 0x4c8 Eq
	if(var_373_bool == 0) goto Label_1227; // 0x4c9 JumpB
	var_371_bool = 0; // 0x4ca MovB
	
Label_1227:
	if(var_371_bool == 0) goto Label_1232; // 0x4cb JumpB
	add(var_45_object); // 0x4cc ObjFunc
	add(var_44_int); // 0x4ce ObjFunc
	
Label_1232:
	var_45_object = 0; // 0x4d0 SetNull
	var_374_int = 1; // 0x4d1 PushI
	var_44_int = var_44_int + var_374_int; // 0x4d2 Add2
	goto Label_1213; // 0x4d3 Jump
	
Label_1236:
	size(var_41_int); // 0x4d4 ObjFunc
	var_375_int = var_41_int; // 0x4d6 Push
	if(var_375_int == 0) goto Label_1282; // 0x4d7 JumpB
	var_376_int = 1; // 0x4d8 PushI
	var_377_bool = var_41_int == var_376_int; // 0x4d9 Eq
	if(var_377_bool == 0) goto Label_1245; // 0x4da JumpB
	var_47_int = 0; // 0x4db MovI
	goto Label_1259; // 0x4dc Jump
	
Label_1259:
	get(var_49_object, var_47_int); // 0x4eb ObjFunc
	get(var_50_int, var_47_int); // 0x4ed ObjFunc
	var_378_int = 1; // 0x4ef PushI
	var_379_int = 4; // 0x4f0 PushI
	RemoveItem(var_50_int, var_378_int, var_379_int); // 0x4f1 ObjFunc
	var_380_string = "quality"; // 0x4f3 PushS
	GetProperty(var_51_float, var_380_string); // 0x4f4 ObjFunc
	GetItemID(var_52_int); // 0x4f6 ObjFunc
	var_381_string = ""; var_382_float = 0; // 0x4f8 PushV
	var_383_bool = var_52_int == var_43_int; // 0x4f9 Eq
	if(var_383_bool == 0) goto Label_1277; // 0x4fa JumpB
	var_381_string = "pers_rat_big"; // 0x4fb MovS
	goto Label_1278; // 0x4fc Jump
	
Label_1278:
	var_382_float = var_51_float; // 0x4fe Mov
	func_1285(var_51_float, var_52_int, var_381_string, var_382_float); // 0x4ff NEW_2
	var_49_object = 0; // 0x501 SetNull
	
Label_1282:
	var_40_object = 0; // 0x502 SetNull
	var_39_object = 0; // 0x503 SetNull
	
Label_1277:
	var_381_string = "pers_rat"; // 0x4fd MovS
	
Label_1245:
	CreateIntVector(var_48_object); // 0x4dd Func
	ChooseItem(var_39_object, var_48_object); // 0x4df Func
	size(var_41_int); // 0x4e1 ObjFunc
	var_584_int = var_41_int; // 0x4e3 Push
	if(var_584_int == 0) goto Label_1257; // 0x4e4 JumpB
	var_585_int = 0; // 0x4e5 PushI
	get(var_47_int, var_585_int); // 0x4e6 ObjFunc
	goto Label_1258; // 0x4e8 Jump
	
Label_1258:
	var_48_object = 0; // 0x4ea SetNull
	
Label_1257:
	return 28; // 0x4e9 Return
}


task_8_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_string, var_22_bool, var_23_int, var_24_int)
{
	var_25_string = "race_begin"; // 0x524 PushS
	var_26_bool = var_24_int == var_25_string; // 0x525 Eq
	if(var_26_bool == 0) goto Label_1324; // 0x526 JumpB
	var_27_string = ""; var_28_float = 0; // 0x527 PushV
	var_27_string = "pers_rat_big"; // 0x528 MovS
	var_28_float = 1.0; // 0x529 MovF
	func_1285(var_23_int, var_24_int, var_27_string, var_28_float); // 0x52a NEW_2
	
Label_1324:
	return 0; // 0x52c Return
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int)
{
	var_0_object = -1; // 0x52d TMovI
	return 0; // 0x52e Return
}


task_9_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int, var_24_object)
{
	var_25_int = 0; var_26_object = Obj(); // 0x5fb PushV
	var_26_object = var_24_object; // 0x5fc Mov
	TaskCall(4); // 0x5fd TaskCall
	func_438(var_27_object, var_25_int, var_26_object); // 0x5fe NEW_2
	TaskReturn(); // 0x5ff TaskReturn
	return 0; // 0x601 Return
}


task_9_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int, var_24_string)
{
	var_25_string = "race_over1"; // 0x603 PushS
	var_26_bool = var_24_string == var_25_string; // 0x604 Eq
	if(var_26_bool == 0) goto Label_1561; // 0x605 JumpB
	var_27_int = 0; var_28_bool = 0; // 0x606 PushV
	var_27_int = 3; // 0x607 MovI
	var_28_bool = 0; // 0x608 MovB
	func_1687(var_27_int, var_28_bool); // 0x609 NEW_2
	var_37_int = 1; // 0x60b PushI
	var_1_object = var_1_object + var_37_int; // 0x60c Add2
	var_38_int = 1; // 0x60d PushI
	var_39_bool = var_1_object == var_38_int; // 0x60e Eq
	if(var_39_bool == 0) goto Label_1554; // 0x60f JumpB
	var_2_object = 1; // 0x610 TMovI
	goto Label_1560; // 0x611 Jump
	
Label_1560:
	goto Label_1604; // 0x618 Jump
	
Label_1604:
	return 0; // 0x644 Return
	
Label_1554:
	var_40_int = 3; // 0x612 PushI
	var_41_bool = var_1_object == var_40_int; // 0x613 Eq
	if(var_41_bool == 0) goto Label_1560; // 0x614 JumpB
	var_0_object = 1; // 0x615 TMovB
	StopGroup0(); // 0x616 Func
	
Label_1561:
	var_42_string = "race_over2"; // 0x619 PushS
	var_43_bool = var_24_string == var_42_string; // 0x61a Eq
	if(var_43_bool == 0) goto Label_1583; // 0x61b JumpB
	var_44_int = 0; var_45_bool = 0; // 0x61c PushV
	var_44_int = 4; // 0x61d MovI
	var_45_bool = 0; // 0x61e MovB
	func_1687(var_44_int, var_45_bool); // 0x61f NEW_2
	var_46_int = 1; // 0x621 PushI
	var_1_object = var_1_object + var_46_int; // 0x622 Add2
	var_47_int = 1; // 0x623 PushI
	var_48_bool = var_1_object == var_47_int; // 0x624 Eq
	if(var_48_bool == 0) goto Label_1576; // 0x625 JumpB
	var_2_object = 0; // 0x626 TMovI
	goto Label_1582; // 0x627 Jump
	
Label_1582:
	goto Label_1604; // 0x62e Jump
	
Label_1576:
	var_49_int = 3; // 0x628 PushI
	var_50_bool = var_1_object == var_49_int; // 0x629 Eq
	if(var_50_bool == 0) goto Label_1582; // 0x62a JumpB
	var_0_object = 1; // 0x62b TMovB
	StopGroup0(); // 0x62c Func
	
Label_1583:
	var_51_string = "race_over3"; // 0x62f PushS
	var_52_bool = var_24_string == var_51_string; // 0x630 Eq
	if(var_52_bool == 0) goto Label_1604; // 0x631 JumpB
	var_53_int = 0; var_54_bool = 0; // 0x632 PushV
	var_53_int = 5; // 0x633 MovI
	var_54_bool = 0; // 0x634 MovB
	func_1687(var_53_int, var_54_bool); // 0x635 NEW_2
	var_55_int = 1; // 0x637 PushI
	var_1_object = var_1_object + var_55_int; // 0x638 Add2
	var_56_int = 1; // 0x639 PushI
	var_57_bool = var_1_object == var_56_int; // 0x63a Eq
	if(var_57_bool == 0) goto Label_1598; // 0x63b JumpB
	var_2_object = 0; // 0x63c TMovI
	goto Label_1604; // 0x63d Jump
	
Label_1598:
	var_58_int = 3; // 0x63e PushI
	var_59_bool = var_1_object == var_58_int; // 0x63f Eq
	if(var_59_bool == 0) goto Label_1604; // 0x640 JumpB
	var_0_object = 1; // 0x641 TMovB
	StopGroup0(); // 0x642 Func
}


task_9_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int)
{
	var_2_object = -1; // 0x6a8 TMovI
	var_0_object = 1; // 0x6a9 TMovB
	StopGroup0(); // 0x6aa Func
	return 0; // 0x6ac Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int)
{
	var_0_object = -1; // 0x488 TMovI
	
Label_1161:
	Hold(); // 0x489 Func
	goto Label_1161; // 0x48b Jump
}


func_512(var_0_object, var_1_object, var_2_object, var_3_string, var_97_object, var_98_object)
{
	var_0_object = var_98_object; // 0x201 TMov
	var_1_object = var_97_object; // 0x202 TMov
	var_3_string = 0; // 0x203 TMovB
	var_103_int = 1; // 0x204 PushI
	if(var_103_int == 0) goto Label_540; // 0x205 JumpB
	var_104_string = ""; // 0x206 PushV
	var_104_string = "Neutral"; // 0x207 MovS
	func_570(var_98_object, var_104_string); // 0x208 NEW_2
	var_121_int = 520069; // 0x20a PushI
	SetMessage(var_121_int); // 0x20b TObjFunc
	ClearReplies(); // 0x20d TObjFunc
	var_122_int = 520070; // 0x20f PushI
	var_123_int = -1; // 0x210 PushI
	var_124_int = 21250; // 0x211 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x212 TObjFunc
	var_125_int = 520071; // 0x214 PushI
	var_126_int = -1; // 0x215 PushI
	var_127_int = 21251; // 0x216 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x217 TObjFunc
	goto Label_540; // 0x219 Jump
	
Label_540:
	var_128_bool = 0; // 0x21c PushV
	func_2093(var_128_bool); // 0x21d NEW_2
	if(var_128_bool == 0) goto Label_555; // 0x21f JumpB
	
Label_544:
	lshWaitForAnimEnd(); // 0x220 Func
	var_129_string = var_3_string; // 0x222 PushT
	if(var_129_string == 0) goto Label_549; // 0x223 JumpB
	goto Label_554; // 0x224 Jump
	
Label_554:
	goto Label_569; // 0x22a Jump
	
Label_569:
	return 0; // 0x239 Return
	
Label_549:
	var_130_string = ""; // 0x225 PushV
	var_130_string = var_2_object; // 0x226 MovT
	func_1808(var_130_string); // 0x227 NEW_2
	goto Label_544; // 0x229 Jump
	
Label_555:
	var_141_string = "all"; // 0x22b PushS
	var_142_string = "idle"; // 0x22c PushS
	PlayAnimation(var_141_string, var_142_string); // 0x22d Func
	
Label_559:
	WaitForAnimEnd(); // 0x22f Func
	var_143_string = var_3_string; // 0x231 PushT
	if(var_143_string == 0) goto Label_564; // 0x232 JumpB
	goto Label_569; // 0x233 Jump
	
Label_564:
	var_144_string = "all"; // 0x234 PushS
	var_145_string = "idle"; // 0x235 PushS
	PlayAnimation(var_144_string, var_145_string); // 0x236 Func
	goto Label_559; // 0x238 Jump
}


func_0(var_0_object, var_198_int, var_199_object)
{
	var_201_object = Obj(); var_202_bool = 0; var_203_int = 0; var_204_bool = 0; var_205_object = Obj(); var_206_bool = 0; var_207_int = 0; var_208_bool = 0; // 0x0 PushV
	var_0_object = var_199_object; // 0x1 TMov
	var_209_bool = 0; var_210_object = Obj(); var_211_float = 0; // 0x2 PushV
	var_210_object = var_199_object; // 0x3 Mov
	var_211_float = 70.0; // 0x4 MovF
	func_1721(var_210_object, var_211_float); // 0x5 NEW_2
	var_212_bool = var_209_bool == 0; // 0x7 Not
	if(var_212_bool == 0) goto Label_11; // 0x8 JumpB
	var_198_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_205_object); // 0xb Func
	var_213_int = 0; // 0xd PushV
	func_2087(var_213_int); // 0xe NEW_2
	SetNPCName(var_213_int); // 0x10 ObjFunc
	var_214_int = 0; // 0x12 PushV
	func_2085(var_214_int); // 0x13 NEW_2
	SetNPCDescription(var_214_int); // 0x15 ObjFunc
	var_215_string = ""; // 0x17 PushV
	func_2089(var_215_string); // 0x18 NEW_2
	SetPhoto(var_215_string); // 0x1a ObjFunc
	var_216_string = ""; // 0x1c PushV
	func_2091(var_216_string); // 0x1d NEW_2
	SetPhoto2(var_216_string); // 0x1f ObjFunc
	var_217_int = 0; // 0x21 PushV
	func_2062(var_217_int); // 0x22 NEW_2
	SetPlayerName(var_217_int); // 0x24 ObjFunc
	var_207_int = -1; // 0x26 MovI
	IsOverrideActive(var_206_bool); // 0x27 Func
	var_218_bool = var_206_bool; // 0x29 Push
	if(var_218_bool == 0) goto Label_45; // 0x2a JumpB
	var_198_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_205_object); // 0x2d Func
	var_219_object = Obj(); var_220_object = Obj(); // 0x2f PushV
	var_219_object = var_199_object; // 0x30 Mov
	var_220_object = var_205_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_208_bool); // 0x36 ObjFunc
	
Label_56:
	var_249_bool = var_208_bool == 0; // 0x38 Not
	if(var_249_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_208_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_250_object = Obj(); // 0x3f PushV
	var_250_object = var_199_object; // 0x40 Mov
	func_1790(); // 0x41 NEW_2
	StopDialog(var_205_object); // 0x43 Func
	GetReturnValue(var_207_int); // 0x45 ObjFunc
	var_198_int = var_207_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_2050(var_279_bool)
{
	var_281_int = 0; var_282_string = ""; // 0x803 PushV
	var_282_string = "ooRatsManager1"; // 0x804 MovS
	func_1905(var_281_int, var_282_string); // 0x805 NEW_2
	var_283_int = 0; // 0x807 PushI
	var_284_bool = var_281_int == var_283_int; // 0x808 Eq
	if(var_284_bool == 0) goto Label_2060; // 0x809 JumpB
	var_279_bool = 1; // 0x80a MovB
	return 0; // 0x80b Return
	
Label_2060:
	var_279_bool = 0; // 0x80c MovB
	return 0; // 0x80d Return
}


func_132(var_2_object, var_226_string)
{
	var_227_bool = 0; // 0x85 PushV
	func_2093(var_227_bool); // 0x86 NEW_2
	var_228_bool = var_227_bool == 0; // 0x88 Not
	if(var_228_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_229_bool = var_226_string == var_2_object; // 0x8b Eq
	if(var_229_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_230_string = ""; var_231_bool = 0; // 0x8e PushV
	var_230_string = var_226_string; // 0x8f Mov
	var_232_string = ""; // 0x90 PushS
	var_233_bool = var_226_string == var_232_string; // 0x91 Eq
	if(var_233_bool == 0) goto Label_149; // 0x92 JumpB
	var_231_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1824(var_230_string, var_231_bool); // 0x96 NEW_2
	var_2_object = var_226_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_231_bool = 1; // 0x95 MovB
}


func_1285(var_0_object, var_27_string, var_28_float, var_32_bool)
{
	var_29_int = 0; var_30_string = ""; var_31_float = 0; // 0x506 PushV
	var_30_string = var_27_string; // 0x507 Mov
	var_31_float = var_28_float; // 0x508 Mov
	TaskCall(9); // 0x509 TaskCall
	func_1327(var_32_bool, var_33_int, var_34_int, var_29_int, var_30_string, var_31_float); // 0x50a NEW_2
	TaskReturn(); // 0x50b TaskReturn
	var_0_object = var_32_bool; // 0x50c TMov
	var_219_bool = 0; // 0x50e PushV
	func_1716(var_219_bool); // 0x50f NEW_2
	var_222_bool = var_219_bool == 0; // 0x511 Not
	if(var_222_bool == 0) goto Label_1301; // 0x512 JumpB
	var_0_object = -1; // 0x513 TMovI
	goto Label_1314; // 0x514 Jump
	
Label_1314:
	return 0; // 0x522 Return
	
Label_1301:
	var_223_int = 1; // 0x515 PushI
	var_224_bool = var_0_object == var_223_int; // 0x516 Eq
	if(var_224_bool == 0) goto Label_1308; // 0x517 JumpB
	var_225_string = "You've won a rat race"; // 0x518 PushS
	Trace(var_225_string); // 0x519 Func
	goto Label_1314; // 0x51b Jump
	
Label_1308:
	var_226_int = 0; // 0x51c PushI
	var_227_bool = var_0_object == var_226_int; // 0x51d Eq
	if(var_227_bool == 0) goto Label_1314; // 0x51e JumpB
	var_228_string = "Looser!"; // 0x51f PushS
	Trace(var_228_string); // 0x520 Func
}


func_1928(var_46_int, var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x788 PushV
	CreateIntVector(var_49_object); // 0x789 Func
	add(var_46_int); // 0x78b ObjFunc
	add(var_47_int); // 0x78d ObjFunc
	var_50_int = 3; // 0x78f PushI
	SendWorldWndMessage(var_50_int, var_49_object); // 0x790 Func
	return 2; // 0x792 Return
}


func_2062(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x80e PushV
	var_91_string = "branch"; // 0x80f PushS
	GetVariable(var_91_string, var_90_int); // 0x810 Func
	var_92_int = 0; // 0x812 PushI
	var_93_bool = var_90_int == var_92_int; // 0x813 Eq
	if(var_93_bool == 0) goto Label_2072; // 0x814 JumpB
	var_88_int = 1; // 0x815 MovI
	return 2; // 0x816 Return
	
Label_2072:
	var_94_int = 1; // 0x818 PushI
	var_95_bool = var_90_int == var_94_int; // 0x819 Eq
	if(var_95_bool == 0) goto Label_2077; // 0x81a JumpB
	var_88_int = 2; // 0x81b MovI
	return 2; // 0x81c Return
	
Label_2077:
	var_88_int = 3; // 0x81d MovI
	return 2; // 0x81e Return
}


func_1808(var_130_string)
{
	var_131_bool = 0; var_132_float = 0; var_133_float = 0; var_134_bool = 0; var_135_float = 0; var_136_float = 0; // 0x710 PushV
	lshHasAnimation(var_134_bool, var_130_string); // 0x711 Func
	var_137_bool = var_134_bool; // 0x713 Push
	if(var_137_bool == 0) goto Label_1819; // 0x714 JumpB
	lshGetAnimTimes(var_130_string, var_135_float, var_136_float); // 0x715 Func
	var_138_bool = 0; // 0x717 PushB
	lshPlayAnimation(var_135_float, var_136_float, var_138_bool); // 0x718 Func
	goto Label_1823; // 0x71a Jump
	
Label_1823:
	return 6; // 0x71f Return
	
Label_1819:
	var_139_string = "Can't find lsh animation : "; // 0x71b PushS
	var_140_int = var_139_string + var_130_string; // 0x71c Add
	Trace(var_140_int); // 0x71d Func
}


func_1940(var_33_object, var_34_int)
{
	var_35_int = 0; var_36_int = 0; // 0x794 PushV
	var_37_object = Obj(); var_38_string = ""; var_39_int = 0; // 0x795 PushV
	var_37_object = var_33_object; // 0x796 Mov
	var_38_string = "money"; // 0x797 MovS
	var_39_int = var_34_int; // 0x798 Mov
	func_1709(var_38_string, var_39_int); // 0x799 NEW_2
	var_43_int = 0; // 0x79b PushI
	var_44_bool = var_34_int > var_43_int; // 0x79c GT
	if(var_44_bool == 0) goto Label_1958; // 0x79d JumpB
	var_45_string = "Money"; // 0x79e PushS
	GetInvItemByName(var_36_int, var_45_string); // 0x79f Func
	var_46_int = 0; var_47_int = 0; // 0x7a1 PushV
	var_46_int = var_36_int; // 0x7a2 Mov
	var_47_int = var_34_int; // 0x7a3 Mov
	func_1928(var_46_int, var_47_int); // 0x7a4 NEW_2
	
Label_1958:
	return 2; // 0x7a6 Return
}


func_1687(var_27_int, var_28_bool)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x697 PushV
	var_31_string = "rats_track_door"; // 0x698 PushS
	var_32_int = 1; // 0x699 PushI
	var_33_int = var_27_int + var_32_int; // 0x69a Add
	var_34_int = var_31_string + var_33_int; // 0x69b Add
	FindActor(var_30_object, var_34_int); // 0x69c Func
	var_35_bool = var_28_bool; // 0x69e Push
	if(var_35_bool == 0) goto Label_1700; // 0x69f JumpB
	var_36_bool = 0; // 0x6a0 PushB
	Open(var_36_bool); // 0x6a1 ObjFunc
	goto Label_1702; // 0x6a3 Jump
	
Label_1702:
	return 2; // 0x6a6 Return
	
Label_1700:
	Close(); // 0x6a4 ObjFunc
}


func_2079(var_39_int)
{
	var_40_int = 0; var_41_int = 0; // 0x81f PushV
	var_42_string = "branch"; // 0x820 PushS
	GetVariable(var_42_string, var_41_int); // 0x821 Func
	var_39_int = var_41_int; // 0x823 Mov
	return 2; // 0x824 Return
}


func_1824(var_108_string, var_109_bool)
{
	var_112_bool = 0; var_113_float = 0; var_114_float = 0; var_115_bool = 0; var_116_float = 0; var_117_float = 0; // 0x720 PushV
	lshHasAnimation(var_115_bool, var_108_string); // 0x721 Func
	var_118_bool = var_115_bool; // 0x723 Push
	if(var_118_bool == 0) goto Label_1834; // 0x724 JumpB
	lshGetAnimTimes(var_108_string, var_116_float, var_117_float); // 0x725 Func
	lshPlayAnimation(var_116_float, var_117_float, var_109_bool); // 0x727 Func
	goto Label_1838; // 0x729 Jump
	
Label_1838:
	return 6; // 0x72e Return
	
Label_1834:
	var_119_string = "Can't find lsh animation : "; // 0x72a PushS
	var_120_int = var_119_string + var_108_string; // 0x72b Add
	Trace(var_120_int); // 0x72c Func
}


func_2085(var_85_int)
{
	var_85_int = 518097; // 0x825 MovI
	return 0; // 0x826 Return
}


func_2087(var_84_int)
{
	var_84_int = 518096; // 0x827 MovI
	return 0; // 0x828 Return
}


func_296(var_0_object, var_1_object, var_2_object, var_3_string, var_127_object, var_128_object)
{
	var_0_object = var_128_object; // 0x129 TMov
	var_1_object = var_127_object; // 0x12a TMov
	var_3_string = 0; // 0x12b TMovB
	var_133_int = 1; // 0x12c PushI
	if(var_133_int == 0) goto Label_334; // 0x12d JumpB
	var_134_string = ""; // 0x12e PushV
	var_134_string = "Neutral"; // 0x12f MovS
	func_364(var_128_object, var_134_string); // 0x130 NEW_2
	var_151_int = 520064; // 0x132 PushI
	SetMessage(var_151_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_152_bool = 0; var_153_object = Obj(); // 0x137 PushV
	var_153_object = var_1_object; // 0x138 MovT
	func_2005(var_153_object); // 0x139 NEW_2
	if(var_152_bool == 0) goto Label_321; // 0x13b JumpB
	var_160_int = 520065; // 0x13c PushI
	var_161_int = -1; // 0x13d PushI
	var_162_int = 21245; // 0x13e PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x13f TObjFunc
	
Label_321:
	var_163_int = 520066; // 0x141 PushI
	var_164_int = -1; // 0x142 PushI
	var_165_int = 21246; // 0x143 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x144 TObjFunc
	var_166_int = 520067; // 0x146 PushI
	var_167_int = -1; // 0x147 PushI
	var_168_int = 21247; // 0x148 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x149 TObjFunc
	goto Label_334; // 0x14b Jump
	
Label_334:
	var_169_bool = 0; // 0x14e PushV
	func_2093(var_169_bool); // 0x14f NEW_2
	if(var_169_bool == 0) goto Label_349; // 0x151 JumpB
	
Label_338:
	lshWaitForAnimEnd(); // 0x152 Func
	var_170_string = var_3_string; // 0x154 PushT
	if(var_170_string == 0) goto Label_343; // 0x155 JumpB
	goto Label_348; // 0x156 Jump
	
Label_348:
	goto Label_363; // 0x15c Jump
	
Label_363:
	return 0; // 0x16b Return
	
Label_343:
	var_171_string = ""; // 0x157 PushV
	var_171_string = var_2_object; // 0x158 MovT
	func_1808(var_171_string); // 0x159 NEW_2
	goto Label_338; // 0x15b Jump
	
Label_349:
	var_182_string = "all"; // 0x15d PushS
	var_183_string = "idle"; // 0x15e PushS
	PlayAnimation(var_182_string, var_183_string); // 0x15f Func
	
Label_353:
	WaitForAnimEnd(); // 0x161 Func
	var_184_string = var_3_string; // 0x163 PushT
	if(var_184_string == 0) goto Label_358; // 0x164 JumpB
	goto Label_363; // 0x165 Jump
	
Label_358:
	var_185_string = "all"; // 0x166 PushS
	var_186_string = "idle"; // 0x167 PushS
	PlayAnimation(var_185_string, var_186_string); // 0x168 Func
	goto Label_353; // 0x16a Jump
}


func_2089(var_86_string)
{
	var_86_string = "ui/NPC_Citizen2.png"; // 0x829 MovS
	return 0; // 0x82a Return
}


func_1959(var_337_bool, var_339_string)
{
	var_340_int = 0; var_341_bool = 0; var_342_int = 0; var_343_bool = 0; // 0x7a7 PushV
	GetInvItemByName(var_342_int, var_339_string); // 0x7a8 Func
	HasItem(var_342_int, var_343_bool); // 0x7aa ObjFunc
	var_337_bool = var_343_bool; // 0x7ac Mov
	return 4; // 0x7ad Return
}


func_2091(var_87_string)
{
	var_87_string = "ui/NPC_Citizen2_b.png"; // 0x82b MovS
	return 0; // 0x82c Return
}


func_2093(var_79_bool)
{
	var_79_bool = 0; // 0x82d MovB
	return 0; // 0x82e Return
}


func_1966()
{
	var_32_int = 1; // 0x7af PushI
	SetReturnValue(var_32_int); // 0x7b0 ObjFunc
	return 0; // 0x7b2 Return
}


func_1839()
{
	var_27_bool = 0; // 0x72f PushV
	func_2093(var_27_bool); // 0x730 NEW_2
	if(var_27_bool == 0) goto Label_1845; // 0x732 JumpB
	lshStopSpeech(); // 0x733 Func
	
Label_1845:
	return 0; // 0x735 Return
}


func_1327(var_0_object, var_1_object, var_2_object, var_29_int, var_30_string, var_31_float)
{
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; // 0x52f PushV
	var_39_int = 0; // 0x530 PushV
	func_2079(var_39_int); // 0x531 NEW_2
	var_43_int = 1; // 0x533 PushI
	var_44_bool = var_39_int == var_43_int; // 0x534 Eq
	if(var_44_bool == 0) goto Label_1347; // 0x535 JumpB
	var_45_string = "ACHIEVEMENT_HELLO_1"; // 0x536 PushS
	GetVariable(var_45_string, var_37_int); // 0x537 Func
	var_46_int = 0; // 0x539 PushI
	var_47_bool = var_37_int == var_46_int; // 0x53a Eq
	if(var_47_bool == 0) goto Label_1347; // 0x53b JumpB
	var_48_string = "ACHIEVEMENT_HELLO_1"; // 0x53c PushS
	var_49_int = 1; // 0x53d PushI
	SetVariable(var_48_string, var_49_int); // 0x53e Func
	var_50_string = "ACHIEVEMENT_HELLO_1"; // 0x540 PushS
	UnlockAchievement(var_50_string); // 0x541 Func
	
Label_1347:
	var_1_object = 0; // 0x543 TMovI
	var_51_string = ""; var_52_float = 0; // 0x544 PushV
	var_51_string = var_30_string; // 0x545 Mov
	var_52_float = var_31_float; // 0x546 Mov
	func_1371(var_51_string, var_52_float); // 0x547 NEW_2
	
Label_1353:
	Hold(); // 0x549 Func
	var_213_bool = var_0_object == 0; // 0x54b Not
	if(var_213_bool == 0) goto Label_1353; // 0x54c JumpB
	var_38_int = 0; // 0x54d MovI
	
Label_1358:
	var_214_int = 6; // 0x54e PushI
	var_215_bool = var_38_int < var_214_int; // 0x54f LT
	if(var_215_bool == 0) goto Label_1369; // 0x550 JumpB
	var_216_int = 0; var_217_bool = 0; // 0x551 PushV
	var_216_int = var_38_int; // 0x552 Mov
	var_217_bool = 0; // 0x553 MovB
	func_1687(var_216_int, var_217_bool); // 0x554 NEW_2
	var_218_int = 1; // 0x556 PushI
	var_38_int = var_38_int + var_218_int; // 0x557 Add2
	goto Label_1358; // 0x558 Jump
	
Label_1369:
	var_29_int = var_2_object; // 0x559 MovT
	return 4; // 0x55a Return
}


func_1709(var_38_string, var_39_int)
{
	var_40_int = 0; var_41_int = 0; // 0x6ad PushV
	GetProperty(var_38_string, var_41_int); // 0x6ae ObjFunc
	var_42_int = var_41_int + var_39_int; // 0x6b0 Add
	SetProperty(var_38_string, var_42_int); // 0x6b1 ObjFunc
	return 2; // 0x6b3 Return
}


func_1971()
{
	var_287_string = "ooRatsManager1"; // 0x7b4 PushS
	var_288_int = 1; // 0x7b5 PushI
	SetVariable(var_287_string, var_288_int); // 0x7b6 Func
	return 0; // 0x7b8 Return
}


func_1716(var_219_bool)
{
	var_220_bool = 0; var_221_bool = 0; // 0x6b4 PushV
	IsLoaded(var_221_bool); // 0x6b5 Func
	var_219_bool = var_221_bool; // 0x6b7 Mov
	return 2; // 0x6b8 Return
}


func_1846(var_143_int, var_144_int, var_145_int, var_146_int)
{
	var_147_bool = var_144_int < var_145_int; // 0x737 LT
	if(var_147_bool == 0) goto Label_1855; // 0x738 JumpB
	var_148_bool = var_144_int < var_146_int; // 0x739 LT
	if(var_148_bool == 0) goto Label_1853; // 0x73a JumpB
	var_143_int = 0; // 0x73b MovI
	goto Label_1854; // 0x73c Jump
	
Label_1854:
	return 0; // 0x73e Return
	
Label_1853:
	var_143_int = 2; // 0x73d MovI
	
Label_1855:
	var_149_bool = var_145_int < var_146_int; // 0x73f LT
	if(var_149_bool == 0) goto Label_1859; // 0x740 JumpB
	var_143_int = 1; // 0x741 MovI
	goto Label_1860; // 0x742 Jump
	
Label_1860:
	return 0; // 0x744 Return
	
Label_1859:
	var_143_int = 2; // 0x743 MovI
}


func_438(var_0_object, var_25_int, var_26_object)
{
	var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x1b6 PushV
	var_0_object = var_26_object; // 0x1b7 TMov
	var_36_bool = 0; var_37_object = Obj(); var_38_float = 0; // 0x1b8 PushV
	var_37_object = var_26_object; // 0x1b9 Mov
	var_38_float = 70.0; // 0x1ba MovF
	func_1721(var_37_object, var_38_float); // 0x1bb NEW_2
	var_83_bool = var_36_bool == 0; // 0x1bd Not
	if(var_83_bool == 0) goto Label_449; // 0x1be JumpB
	var_25_int = -2; // 0x1bf MovI
	return 8; // 0x1c0 Return
	
Label_449:
	CreateDialog(var_32_object); // 0x1c1 Func
	var_84_int = 0; // 0x1c3 PushV
	func_2087(var_84_int); // 0x1c4 NEW_2
	SetNPCName(var_84_int); // 0x1c6 ObjFunc
	var_85_int = 0; // 0x1c8 PushV
	func_2085(var_85_int); // 0x1c9 NEW_2
	SetNPCDescription(var_85_int); // 0x1cb ObjFunc
	var_86_string = ""; // 0x1cd PushV
	func_2089(var_86_string); // 0x1ce NEW_2
	SetPhoto(var_86_string); // 0x1d0 ObjFunc
	var_87_string = ""; // 0x1d2 PushV
	func_2091(var_87_string); // 0x1d3 NEW_2
	SetPhoto2(var_87_string); // 0x1d5 ObjFunc
	var_88_int = 0; // 0x1d7 PushV
	func_2062(var_88_int); // 0x1d8 NEW_2
	SetPlayerName(var_88_int); // 0x1da ObjFunc
	var_34_int = -1; // 0x1dc MovI
	IsOverrideActive(var_33_bool); // 0x1dd Func
	var_96_bool = var_33_bool; // 0x1df Push
	if(var_96_bool == 0) goto Label_483; // 0x1e0 JumpB
	var_25_int = -2; // 0x1e1 MovI
	return 8; // 0x1e2 Return
	
Label_483:
	DoDialog(var_32_object); // 0x1e3 Func
	var_97_object = Obj(); var_98_object = Obj(); // 0x1e5 PushV
	var_97_object = var_26_object; // 0x1e6 Mov
	var_98_object = var_32_object; // 0x1e7 Mov
	TaskCall(5); // 0x1e8 TaskCall
	func_512(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object); // 0x1e9 NEW_2
	TaskReturn(); // 0x1ea TaskReturn
	IsDialogEnd(var_35_bool); // 0x1ec ObjFunc
	
Label_494:
	var_146_bool = var_35_bool == 0; // 0x1ee Not
	if(var_146_bool == 0) goto Label_501; // 0x1ef JumpB
	sync(); // 0x1f0 Func
	IsDialogEnd(var_35_bool); // 0x1f2 ObjFunc
	goto Label_494; // 0x1f4 Jump
	
Label_501:
	var_147_object = Obj(); // 0x1f5 PushV
	var_147_object = var_26_object; // 0x1f6 Mov
	func_1790(); // 0x1f7 NEW_2
	StopDialog(var_32_object); // 0x1f9 Func
	GetReturnValue(var_34_int); // 0x1fb ObjFunc
	var_25_int = var_34_int; // 0x1fd Mov
	return 8; // 0x1fe Return
}


func_1721(var_36_bool, var_38_float)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; // 0x6b9 PushV
	GetPosition(var_49_cvector); // 0x6ba ObjFunc
	GetEyesHeight(var_48_float); // 0x6bc ObjFunc
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x6be PushE
	var_57_float = var_57_float + var_48_float; // 0x6bf Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x6c0 PopE
	GetPosition(var_50_cvector); // 0x6c1 Func
	GetEyesHeight(var_48_float); // 0x6c3 Func
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x6c5 PushE
	var_58_float = var_58_float + var_48_float; // 0x6c6 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x6c7 PopE
	var_51_cvector = var_49_cvector - var_50_cvector; // 0x6c8 Sub2
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x6c9 PushE
	var_59_float = 0; // 0x6ca MovI
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x6cb PopE
	var_60_int = var_51_cvector | var_51_cvector; // 0x6cc Or
	var_61_float = sqrt(var_60_int); // 0x6cd Sqrt
	var_51_cvector = var_51_cvector / var_51_cvector; // 0x6ce Div2
	var_52_cvector = -var_51_cvector; // 0x6cf Neg2
	var_62_float = var_51_cvector * var_38_float; // 0x6d0 Mult
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x6d1 PushV
	var_65_cvector = CVector(0.0, 1.0, 0.0); // 0x6d2 PushVec
	var_64_cvector = var_52_cvector ^ var_65_cvector; // 0x6d3 Xor2
	func_1876(var_63_cvector, var_64_cvector); // 0x6d4 NEW_2
	var_71_int = 25; // 0x6d6 PushI
	var_72_float = var_63_cvector * var_71_int; // 0x6d7 Mult
	var_73_int = var_62_float + var_72_float; // 0x6d8 Add
	var_74_cvector = CVector(0.0, 10.0, 0.0); // 0x6d9 PushVec
	var_53_cvector = var_73_int - var_74_cvector; // 0x6da Sub2
	var_54_cvector = var_50_cvector + var_53_cvector; // 0x6db Add2
	IsOverrideActive(var_55_bool); // 0x6dc Func
	var_75_bool = var_55_bool; // 0x6de Push
	if(var_75_bool == 0) goto Label_1762; // 0x6df JumpB
	var_36_bool = 0; // 0x6e0 MovB
	return 18; // 0x6e1 Return
	
Label_1762:
	StopWorld(); // 0x6e2 Func
	var_76_bool = 1; // 0x6e4 PushB
	CameraTransit(var_54_cvector, var_52_cvector, var_76_bool); // 0x6e5 Func
	var_77_float = GetByIndex(var_53_cvector, 0); // 0x6e7 PushE
	var_78_float = GetByIndex(var_53_cvector, 2); // 0x6e8 PushE
	Rotate(var_77_float, var_78_float); // 0x6e9 Func
	var_79_bool = 0; // 0x6eb PushV
	func_2093(var_79_bool); // 0x6ec NEW_2
	if(var_79_bool == 0) goto Label_1776; // 0x6ee JumpB
	goto Label_1784; // 0x6ef Jump
	
Label_1784:
	CameraWaitForPlayFinish(); // 0x6f8 Func
	ResumeWorld(); // 0x6fa Func
	var_36_bool = 1; // 0x6fc MovB
	return 18; // 0x6fd Return
	
Label_1776:
	var_80_string = "head"; // 0x6f0 PushS
	HasAnimationTrack(var_56_bool, var_80_string); // 0x6f1 Func
	var_81_bool = var_56_bool; // 0x6f3 Push
	if(var_81_bool == 0) goto Label_1784; // 0x6f4 JumpB
	var_82_string = "head"; // 0x6f5 PushS
	LookAsyncCamera(var_82_string); // 0x6f6 Func
}


func_1977(var_30_object)
{
	var_32_string = "money500 is given"; // 0x7ba PushS
	Trace(var_32_string); // 0x7bb Func
	var_33_object = Obj(); var_34_int = 0; // 0x7bd PushV
	var_33_object = var_30_object; // 0x7be Mov
	var_34_int = 500; // 0x7bf MovI
	func_1940(var_33_object, var_34_int); // 0x7c0 NEW_2
	return 0; // 0x7c2 Return
}


func_570(var_2_object, var_104_string)
{
	var_105_bool = 0; // 0x23b PushV
	func_2093(var_105_bool); // 0x23c NEW_2
	var_106_bool = var_105_bool == 0; // 0x23e Not
	if(var_106_bool == 0) goto Label_577; // 0x23f JumpB
	return 0; // 0x240 Return
	
Label_577:
	var_107_bool = var_104_string == var_2_object; // 0x241 Eq
	if(var_107_bool == 0) goto Label_580; // 0x242 JumpB
	return 0; // 0x243 Return
	
Label_580:
	var_108_string = ""; var_109_bool = 0; // 0x244 PushV
	var_108_string = var_104_string; // 0x245 Mov
	var_110_string = ""; // 0x246 PushS
	var_111_bool = var_104_string == var_110_string; // 0x247 Eq
	if(var_111_bool == 0) goto Label_587; // 0x248 JumpB
	var_109_bool = 0; // 0x249 MovB
	goto Label_588; // 0x24a Jump
	
Label_588:
	func_1824(var_108_string, var_109_bool); // 0x24c NEW_2
	var_2_object = var_104_string; // 0x24e TMov
	return 0; // 0x24f Return
	
Label_587:
	var_109_bool = 1; // 0x24b MovB
}


func_1987()
{
	var_53_string = "playsound"; // 0x7c4 PushS
	var_54_string = "givemoney"; // 0x7c5 PushS
	TriggerWorld(var_53_string, var_54_string); // 0x7c6 Func
	return 0; // 0x7c8 Return
}


func_708(var_0_object, var_1_object, var_2_object, var_3_string, var_272_object, var_273_object)
{
	var_0_object = var_273_object; // 0x2c5 TMov
	var_1_object = var_272_object; // 0x2c6 TMov
	var_3_string = 0; // 0x2c7 TMovB
	var_278_int = 1; // 0x2c8 PushI
	if(var_278_int == 0) goto Label_806; // 0x2c9 JumpB
	var_279_bool = 0; var_280_object = Obj(); // 0x2ca PushV
	var_280_object = var_1_object; // 0x2cb MovT
	func_2050(var_280_object); // 0x2cc NEW_2
	if(var_279_bool == 0) goto Label_769; // 0x2ce JumpB
	var_285_object = Obj(); var_286_object = Obj(); // 0x2cf PushV
	var_285_object = var_1_object; // 0x2d0 MovT
	var_286_object = var_0_object; // 0x2d1 MovT
	func_1971(); // 0x2d2 NEW_2
	var_289_string = ""; // 0x2d4 PushV
	var_289_string = "Neutral"; // 0x2d5 MovS
	func_836(var_273_object, var_289_string); // 0x2d6 NEW_2
	var_297_int = 520073; // 0x2d8 PushI
	SetMessage(var_297_int); // 0x2d9 TObjFunc
	ClearReplies(); // 0x2db TObjFunc
	var_298_int = 520074; // 0x2dd PushI
	var_299_int = 21255; // 0x2de PushI
	var_300_int = 21254; // 0x2df PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x2e0 TObjFunc
	var_301_bool = 0; var_302_object = Obj(); // 0x2e2 PushV
	var_302_object = var_1_object; // 0x2e3 MovT
	func_2005(var_302_object); // 0x2e4 NEW_2
	if(var_301_bool == 0) goto Label_748; // 0x2e6 JumpB
	var_303_int = 520085; // 0x2e7 PushI
	var_304_int = 21266; // 0x2e8 PushI
	var_305_int = 21265; // 0x2e9 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x2ea TObjFunc
	
Label_748:
	var_306_bool = 0; var_307_object = Obj(); // 0x2ec PushV
	var_307_object = var_1_object; // 0x2ed MovT
	func_2017(var_307_object); // 0x2ee NEW_2
	if(var_306_bool == 0) goto Label_758; // 0x2f0 JumpB
	var_312_int = 541546; // 0x2f1 PushI
	var_313_int = 43710; // 0x2f2 PushI
	var_314_int = 43709; // 0x2f3 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x2f4 TObjFunc
	
Label_758:
	var_315_bool = 0; var_316_object = Obj(); // 0x2f6 PushV
	var_316_object = var_1_object; // 0x2f7 MovT
	func_1993(var_316_object); // 0x2f8 NEW_2
	if(var_315_bool == 0) goto Label_768; // 0x2fa JumpB
	var_321_int = 541549; // 0x2fb PushI
	var_322_int = 21255; // 0x2fc PushI
	var_323_int = 43713; // 0x2fd PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x2fe TObjFunc
	
Label_768:
	goto Label_806; // 0x300 Jump
	
Label_806:
	var_324_bool = 0; // 0x326 PushV
	func_2093(var_324_bool); // 0x327 NEW_2
	if(var_324_bool == 0) goto Label_821; // 0x329 JumpB
	
Label_810:
	lshWaitForAnimEnd(); // 0x32a Func
	var_325_string = var_3_string; // 0x32c PushT
	if(var_325_string == 0) goto Label_815; // 0x32d JumpB
	goto Label_820; // 0x32e Jump
	
Label_820:
	goto Label_835; // 0x334 Jump
	
Label_835:
	return 0; // 0x343 Return
	
Label_815:
	var_326_string = ""; // 0x32f PushV
	var_326_string = var_2_object; // 0x330 MovT
	func_1808(var_326_string); // 0x331 NEW_2
	goto Label_810; // 0x333 Jump
	
Label_821:
	var_327_string = "all"; // 0x335 PushS
	var_328_string = "idle"; // 0x336 PushS
	PlayAnimation(var_327_string, var_328_string); // 0x337 Func
	
Label_825:
	WaitForAnimEnd(); // 0x339 Func
	var_329_string = var_3_string; // 0x33b PushT
	if(var_329_string == 0) goto Label_830; // 0x33c JumpB
	goto Label_835; // 0x33d Jump
	
Label_830:
	var_330_string = "all"; // 0x33e PushS
	var_331_string = "idle"; // 0x33f PushS
	PlayAnimation(var_330_string, var_331_string); // 0x340 Func
	goto Label_825; // 0x342 Jump
	
Label_769:
	var_332_string = ""; // 0x301 PushV
	var_332_string = "Neutral"; // 0x302 MovS
	func_836(var_273_object, var_332_string); // 0x303 NEW_2
	var_333_int = 520088; // 0x305 PushI
	SetMessage(var_333_int); // 0x306 TObjFunc
	ClearReplies(); // 0x308 TObjFunc
	var_334_bool = 0; var_335_object = Obj(); // 0x30a PushV
	var_335_object = var_1_object; // 0x30b MovT
	func_2029(var_334_bool, var_335_object); // 0x30c NEW_2
	if(var_334_bool == 0) goto Label_788; // 0x30e JumpB
	var_347_int = 520089; // 0x30f PushI
	var_348_int = -1; // 0x310 PushI
	var_349_int = 21270; // 0x311 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x312 TObjFunc
	
Label_788:
	var_350_int = 520090; // 0x314 PushI
	var_351_int = 21272; // 0x315 PushI
	var_352_int = 21271; // 0x316 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x317 TObjFunc
	var_353_int = 520092; // 0x319 PushI
	var_354_int = 21274; // 0x31a PushI
	var_355_int = 21273; // 0x31b PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x31c TObjFunc
	var_356_int = 520095; // 0x31e PushI
	var_357_int = -1; // 0x31f PushI
	var_358_int = 21277; // 0x320 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x321 TObjFunc
	goto Label_806; // 0x323 Jump
}


func_836(var_2_object, var_289_string)
{
	var_290_bool = 0; // 0x345 PushV
	func_2093(var_290_bool); // 0x346 NEW_2
	var_291_bool = var_290_bool == 0; // 0x348 Not
	if(var_291_bool == 0) goto Label_843; // 0x349 JumpB
	return 0; // 0x34a Return
	
Label_843:
	var_292_bool = var_289_string == var_2_object; // 0x34b Eq
	if(var_292_bool == 0) goto Label_846; // 0x34c JumpB
	return 0; // 0x34d Return
	
Label_846:
	var_293_string = ""; var_294_bool = 0; // 0x34e PushV
	var_293_string = var_289_string; // 0x34f Mov
	var_295_string = ""; // 0x350 PushS
	var_296_bool = var_289_string == var_295_string; // 0x351 Eq
	if(var_296_bool == 0) goto Label_853; // 0x352 JumpB
	var_294_bool = 0; // 0x353 MovB
	goto Label_854; // 0x354 Jump
	
Label_854:
	func_1824(var_293_string, var_294_bool); // 0x356 NEW_2
	var_2_object = var_289_string; // 0x358 TMov
	return 0; // 0x359 Return
	
Label_853:
	var_294_bool = 1; // 0x355 MovB
}


func_1605(var_77_int)
{
	var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_bool = 0; var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_bool = 0; var_87_bool = 0; var_88_int = 0; // 0x645 PushV
	var_84_int = 0; // 0x646 MovI
	var_85_int = 0; // 0x647 MovI
	var_86_bool = 1; // 0x648 MovB
	var_87_bool = 0; // 0x649 MovB
	
Label_1610:
	var_89_bool = 0; // 0x64a PushV
	var_89_bool = 1; // 0x64b MovB
	var_90_bool = var_86_bool; // 0x64c Push
	if(var_90_bool == 0) goto Label_1617; // 0x64d JumpB
	var_91_bool = var_84_int == 0; // 0x64e Not
	if(var_91_bool == 0) goto Label_1617; // 0x64f JumpB
	var_89_bool = 0; // 0x650 MovB
	
Label_1617:
	if(var_89_bool == 0) goto Label_1624; // 0x651 JumpB
	var_92_int = 3; // 0x652 PushI
	irand(var_88_int, var_92_int); // 0x653 Func
	var_93_int = 1; // 0x655 PushI
	var_88_int = var_88_int + var_93_int; // 0x656 Add2
	goto Label_1659; // 0x657 Jump
	
Label_1659:
	var_84_int = var_84_int + var_88_int; // 0x67b Add2
	var_94_int = 12; // 0x67c PushI
	var_95_bool = var_84_int >= var_94_int; // 0x67d GE
	if(var_95_bool == 0) goto Label_1669; // 0x67e JumpB
	var_96_int = 12; // 0x67f PushI
	var_97_int = var_84_int - var_96_int; // 0x680 Sub
	var_98_int = var_88_int - var_97_int; // 0x681 Sub
	var_85_int = var_85_int + var_98_int; // 0x682 Add2
	goto Label_1685; // 0x683 Jump
	
Label_1685:
	var_77_int = var_85_int; // 0x695 Mov
	return 10; // 0x696 Return
	
Label_1669:
	var_99_int = var_88_int; // 0x685 Push
	if(var_99_int == 0) goto Label_1676; // 0x686 JumpB
	var_100_int = 0; var_101_int = 0; // 0x687 PushV
	var_101_int = var_88_int; // 0x688 Mov
	func_1886(var_100_int, var_101_int); // 0x689 NEW_2
	goto Label_1677; // 0x68b Jump
	
Label_1677:
	var_85_int = var_85_int + var_100_int; // 0x68d Add2
	add(var_84_int); // 0x68e ObjFunc
	var_104_int = 0; // 0x690 PushI
	var_87_bool = var_88_int == var_104_int; // 0x691 Eq2
	var_105_int = 0; // 0x692 PushI
	var_86_bool = var_88_int < var_105_int; // 0x693 LT2
	
Label_1684:
	goto Label_1610; // 0x694 Jump
	
Label_1676:
	var_106_int = 1; // 0x68c PushI
	
Label_1624:
	var_107_bool = 0; var_108_float = 0; // 0x658 PushV
	var_108_float = 0.66667; // 0x659 MovF
	func_1894(var_107_bool, var_108_float); // 0x65a NEW_2
	if(var_107_bool == 0) goto Label_1635; // 0x65c JumpB
	var_111_int = 3; // 0x65d PushI
	irand(var_88_int, var_111_int); // 0x65e Func
	var_112_int = 1; // 0x660 PushI
	var_88_int = var_88_int + var_112_int; // 0x661 Add2
	goto Label_1659; // 0x662 Jump
	
Label_1635:
	var_113_bool = 0; // 0x663 PushV
	var_113_bool = 0; // 0x664 MovB
	var_114_bool = var_87_bool == 0; // 0x665 Not
	if(var_114_bool == 0) goto Label_1645; // 0x666 JumpB
	var_115_bool = 0; var_116_float = 0; // 0x667 PushV
	var_116_float = 0.5; // 0x668 MovF
	func_1894(var_115_bool, var_116_float); // 0x669 NEW_2
	if(var_115_bool == 0) goto Label_1645; // 0x66b JumpB
	var_113_bool = 1; // 0x66c MovB
	
Label_1645:
	if(var_113_bool == 0) goto Label_1648; // 0x66d JumpB
	var_88_int = 0; // 0x66e MovI
	goto Label_1659; // 0x66f Jump
	
Label_1648:
	var_117_int = 2; // 0x670 PushI
	irand(var_88_int, var_117_int); // 0x671 Func
	var_118_int = 1; // 0x673 PushI
	var_119_int = var_88_int + var_118_int; // 0x674 Add
	var_88_int = -var_119_int; // 0x675 Neg2
	var_120_int = var_84_int + var_88_int; // 0x676 Add
	var_121_int = 0; // 0x677 PushI
	var_122_bool = var_120_int < var_121_int; // 0x678 LT
	if(var_122_bool == 0) goto Label_1659; // 0x679 JumpB
	goto Label_1684; // 0x67a Jump
}


func_1861(var_205_int, var_206_int, var_207_int, var_208_int)
{
	var_209_bool = var_206_int > var_207_int; // 0x746 GT
	if(var_209_bool == 0) goto Label_1870; // 0x747 JumpB
	var_210_bool = var_206_int > var_208_int; // 0x748 GT
	if(var_210_bool == 0) goto Label_1868; // 0x749 JumpB
	var_205_int = 0; // 0x74a MovI
	goto Label_1869; // 0x74b Jump
	
Label_1869:
	return 0; // 0x74d Return
	
Label_1868:
	var_205_int = 2; // 0x74c MovI
	
Label_1870:
	var_211_bool = var_207_int > var_208_int; // 0x74e GT
	if(var_211_bool == 0) goto Label_1874; // 0x74f JumpB
	var_205_int = 1; // 0x750 MovI
	goto Label_1875; // 0x751 Jump
	
Label_1875:
	return 0; // 0x753 Return
	
Label_1874:
	var_205_int = 2; // 0x752 MovI
}


func_1993(var_315_bool)
{
	var_317_int = 0; var_318_string = ""; // 0x7ca PushV
	var_318_string = "branch"; // 0x7cb MovS
	func_1905(var_317_int, var_318_string); // 0x7cc NEW_2
	var_319_int = 0; // 0x7ce PushI
	var_320_bool = var_317_int == var_319_int; // 0x7cf Eq
	if(var_320_bool == 0) goto Label_2003; // 0x7d0 JumpB
	var_315_bool = 1; // 0x7d1 MovB
	return 0; // 0x7d2 Return
	
Label_2003:
	var_315_bool = 0; // 0x7d3 MovB
	return 0; // 0x7d4 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object; // 0x4b TMov
	var_1_object = var_219_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_225_int = 1; // 0x4e PushI
	if(var_225_int == 0) goto Label_102; // 0x4f JumpB
	var_226_string = ""; // 0x50 PushV
	var_226_string = "Neutral"; // 0x51 MovS
	func_132(var_220_object, var_226_string); // 0x52 NEW_2
	var_234_int = 520060; // 0x54 PushI
	SetMessage(var_234_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_235_int = 520061; // 0x59 PushI
	var_236_int = -1; // 0x5a PushI
	var_237_int = 21241; // 0x5b PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x5c TObjFunc
	var_238_int = 520062; // 0x5e PushI
	var_239_int = -1; // 0x5f PushI
	var_240_int = 21242; // 0x60 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_241_bool = 0; // 0x66 PushV
	func_2093(var_241_bool); // 0x67 NEW_2
	if(var_241_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_242_string = var_3_string; // 0x6c PushT
	if(var_242_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_243_string = ""; // 0x6f PushV
	var_243_string = var_2_object; // 0x70 MovT
	func_1808(var_243_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_244_string = "all"; // 0x75 PushS
	var_245_string = "idle"; // 0x76 PushS
	PlayAnimation(var_244_string, var_245_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_246_string = var_3_string; // 0x7b PushT
	if(var_246_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_247_string = "all"; // 0x7e PushS
	var_248_string = "idle"; // 0x7f PushS
	PlayAnimation(var_247_string, var_248_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_1876(var_63_cvector, var_64_cvector)
{
	var_66_float = 0; var_67_float = 0; // 0x754 PushV
	var_68_int = var_64_cvector | var_64_cvector; // 0x755 Or
	var_67_float = sqrt(var_68_int); // 0x756 Sqrt2
	var_69_float = 0.0; // 0x757 PushF
	var_70_bool = var_67_float < var_69_float; // 0x758 LT
	if(var_70_bool == 0) goto Label_1884; // 0x759 JumpB
	var_63_cvector = CVector(0.0, 0.0, 0.0); // 0x75a MovV
	return 2; // 0x75b Return
	
Label_1884:
	var_63_cvector = var_64_cvector / var_64_cvector; // 0x75c Div2
	return 2; // 0x75d Return
}


func_2005(var_152_bool)
{
	var_154_int = 0; var_155_string = ""; // 0x7d6 PushV
	var_155_string = "branch"; // 0x7d7 MovS
	func_1905(var_154_int, var_155_string); // 0x7d8 NEW_2
	var_158_int = 1; // 0x7da PushI
	var_159_bool = var_154_int == var_158_int; // 0x7db Eq
	if(var_159_bool == 0) goto Label_2015; // 0x7dc JumpB
	var_152_bool = 1; // 0x7dd MovB
	return 0; // 0x7de Return
	
Label_2015:
	var_152_bool = 0; // 0x7df MovB
	return 0; // 0x7e0 Return
}


func_1371(var_51_string, var_52_float)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_object = Obj(); var_61_object = Obj(); var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0; var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj(); var_68_int = 0; var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_object = Obj(); var_73_object = Obj(); var_74_object = Obj(); var_75_object = Obj(); var_76_int = 0; // 0x55b PushV
	CreateIntVector(var_65_object); // 0x55c Func
	CreateIntVector(var_66_object); // 0x55e Func
	CreateIntVector(var_67_object); // 0x560 Func
	
Label_1378:
	var_77_int = 0; var_78_object = Obj(); // 0x562 PushV
	var_78_object = var_65_object; // 0x563 Mov
	func_1605(var_78_object); // 0x564 NEW_2
	var_68_int = var_77_int; // 0x565 Mov
	var_123_int = 72; // 0x567 PushI
	var_124_bool = var_68_int > var_123_int; // 0x568 GT
	if(var_124_bool == 0) goto Label_1387; // 0x569 JumpB
	goto Label_1420; // 0x56a Jump
	
Label_1420:
	goto Label_1378; // 0x58c Jump
	
Label_1387:
	var_125_int = 0; var_126_object = Obj(); // 0x56b PushV
	var_126_object = var_66_object; // 0x56c Mov
	func_1605(var_126_object); // 0x56d NEW_2
	var_69_int = var_125_int; // 0x56e Mov
	var_127_int = 72; // 0x570 PushI
	var_128_bool = var_69_int > var_127_int; // 0x571 GT
	if(var_128_bool == 0) goto Label_1396; // 0x572 JumpB
	goto Label_1420; // 0x573 Jump
	
Label_1396:
	var_129_int = 0; var_130_object = Obj(); // 0x574 PushV
	var_130_object = var_67_object; // 0x575 Mov
	func_1605(var_130_object); // 0x576 NEW_2
	var_70_int = var_129_int; // 0x577 Mov
	var_131_int = 72; // 0x579 PushI
	var_132_bool = var_70_int > var_131_int; // 0x57a GT
	if(var_132_bool == 0) goto Label_1405; // 0x57b JumpB
	goto Label_1420; // 0x57c Jump
	
Label_1405:
	var_133_bool = 0; // 0x57d PushV
	var_133_bool = 0; // 0x57e MovB
	var_134_bool = 0; // 0x57f PushV
	var_134_bool = 0; // 0x580 MovB
	var_135_bool = var_68_int != var_69_int; // 0x581 Neq
	if(var_135_bool == 0) goto Label_1414; // 0x582 JumpB
	var_136_bool = var_68_int != var_70_int; // 0x583 Neq
	if(var_136_bool == 0) goto Label_1414; // 0x584 JumpB
	var_134_bool = 1; // 0x585 MovB
	
Label_1414:
	if(var_134_bool == 0) goto Label_1418; // 0x586 JumpB
	var_137_bool = var_69_int != var_70_int; // 0x587 Neq
	if(var_137_bool == 0) goto Label_1418; // 0x588 JumpB
	var_133_bool = 1; // 0x589 MovB
	
Label_1418:
	if(var_133_bool == 0) goto Label_1420; // 0x58a JumpB
	goto Label_1421; // 0x58b Jump
	
Label_1421:
	var_138_bool = 0; var_139_float = 0; // 0x58d PushV
	var_140_float = 0.1; // 0x58e PushF
	var_141_float = 0.4; // 0x58f PushF
	var_142_float = var_52_float * var_141_float; // 0x590 Mult
	var_139_float = var_140_float + var_142_float; // 0x591 Add2
	func_1894(var_138_bool, var_139_float); // 0x592 NEW_2
	if(var_138_bool == 0) goto Label_1440; // 0x594 JumpB
	var_143_int = 0; var_144_int = 0; var_145_int = 0; var_146_int = 0; // 0x595 PushV
	var_144_int = var_68_int; // 0x596 Mov
	var_145_int = var_69_int; // 0x597 Mov
	var_146_int = var_70_int; // 0x598 Mov
	func_1846(var_143_int, var_144_int, var_145_int, var_146_int); // 0x599 NEW_2
	var_71_int = var_143_int; // 0x59a Mov
	var_150_string = "winner"; // 0x59c PushS
	Trace(var_150_string); // 0x59d Func
	goto Label_1450; // 0x59f Jump
	
Label_1450:
	var_151_int = 1; // 0x5aa PushI
	var_152_bool = var_71_int == var_151_int; // 0x5ab Eq
	if(var_152_bool == 0) goto Label_1458; // 0x5ac JumpB
	var_72_object = var_65_object; // 0x5ad Mov
	var_65_object = var_66_object; // 0x5ae Mov
	var_66_object = var_72_object; // 0x5af Mov
	var_72_object = 0; // 0x5b0 SetNull
	goto Label_1465; // 0x5b1 Jump
	
Label_1465:
	GetScene(var_74_object); // 0x5b9 Func
	var_153_object = Obj(); var_154_object = Obj(); var_155_string = ""; var_156_string = ""; var_157_string = ""; // 0x5bb PushV
	var_154_object = var_74_object; // 0x5bc Mov
	var_155_string = "pt_rat1"; // 0x5bd MovS
	var_156_string = var_51_string; // 0x5be Mov
	var_157_string = "rat_race.xml"; // 0x5bf MovS
	func_1910(var_153_object, var_154_object, var_155_string, var_156_string, var_157_string); // 0x5c0 NEW_2
	var_75_object = var_153_object; // 0x5c1 Mov
	var_171_string = "Index"; // 0x5c3 PushS
	var_172_int = 1; // 0x5c4 PushI
	SetScriptProperty(var_171_string, var_172_int); // 0x5c5 ObjFunc
	var_173_string = "Race"; // 0x5c7 PushS
	SetScriptProperty(var_173_string, var_65_object); // 0x5c8 ObjFunc
	var_174_object = Obj(); var_175_object = Obj(); var_176_string = ""; var_177_string = ""; var_178_string = ""; // 0x5ca PushV
	var_175_object = var_74_object; // 0x5cb Mov
	var_176_string = "pt_rat2"; // 0x5cc MovS
	var_177_string = "pers_rat"; // 0x5cd MovS
	var_178_string = "rat_race.xml"; // 0x5ce MovS
	func_1910(var_174_object, var_175_object, var_176_string, var_177_string, var_178_string); // 0x5cf NEW_2
	var_75_object = var_174_object; // 0x5d0 Mov
	var_179_string = "Index"; // 0x5d2 PushS
	var_180_int = 2; // 0x5d3 PushI
	SetScriptProperty(var_179_string, var_180_int); // 0x5d4 ObjFunc
	var_181_string = "Race"; // 0x5d6 PushS
	SetScriptProperty(var_181_string, var_66_object); // 0x5d7 ObjFunc
	var_182_object = Obj(); var_183_object = Obj(); var_184_string = ""; var_185_string = ""; var_186_string = ""; // 0x5d9 PushV
	var_183_object = var_74_object; // 0x5da Mov
	var_184_string = "pt_rat3"; // 0x5db MovS
	var_185_string = "pers_rat"; // 0x5dc MovS
	var_186_string = "rat_race.xml"; // 0x5dd MovS
	func_1910(var_182_object, var_183_object, var_184_string, var_185_string, var_186_string); // 0x5de NEW_2
	var_75_object = var_182_object; // 0x5df Mov
	var_187_string = "Index"; // 0x5e1 PushS
	var_188_int = 3; // 0x5e2 PushI
	SetScriptProperty(var_187_string, var_188_int); // 0x5e3 ObjFunc
	var_189_string = "Race"; // 0x5e5 PushS
	SetScriptProperty(var_189_string, var_67_object); // 0x5e6 ObjFunc
	var_76_int = 0; // 0x5e8 MovI
	
Label_1513:
	var_190_int = 6; // 0x5e9 PushI
	var_191_bool = var_76_int < var_190_int; // 0x5ea LT
	if(var_191_bool == 0) goto Label_1524; // 0x5eb JumpB
	var_192_int = 0; var_193_bool = 0; // 0x5ec PushV
	var_192_int = var_76_int; // 0x5ed Mov
	var_193_bool = 1; // 0x5ee MovB
	func_1687(var_192_int, var_193_bool); // 0x5ef NEW_2
	var_202_int = 1; // 0x5f1 PushI
	var_76_int = var_76_int + var_202_int; // 0x5f2 Add2
	goto Label_1513; // 0x5f3 Jump
	
Label_1524:
	return 24; // 0x5f4 Return
	
Label_1458:
	var_203_int = 2; // 0x5b2 PushI
	var_204_bool = var_71_int == var_203_int; // 0x5b3 Eq
	if(var_204_bool == 0) goto Label_1465; // 0x5b4 JumpB
	var_73_object = var_65_object; // 0x5b5 Mov
	var_65_object = var_67_object; // 0x5b6 Mov
	var_67_object = var_73_object; // 0x5b7 Mov
	var_73_object = 0; // 0x5b8 SetNull
	
Label_1440:
	var_205_int = 0; var_206_int = 0; var_207_int = 0; var_208_int = 0; // 0x5a0 PushV
	var_206_int = var_68_int; // 0x5a1 Mov
	var_207_int = var_69_int; // 0x5a2 Mov
	var_208_int = var_70_int; // 0x5a3 Mov
	func_1861(var_205_int, var_206_int, var_207_int, var_208_int); // 0x5a4 NEW_2
	var_71_int = var_205_int; // 0x5a5 Mov
	var_212_string = "looser"; // 0x5a7 PushS
	Trace(var_212_string); // 0x5a8 Func
}


func_222(var_0_object, var_55_int, var_56_object)
{
	var_58_object = Obj(); var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; // 0xde PushV
	var_0_object = var_56_object; // 0xdf TMov
	var_66_bool = 0; var_67_object = Obj(); var_68_float = 0; // 0xe0 PushV
	var_67_object = var_56_object; // 0xe1 Mov
	var_68_float = 70.0; // 0xe2 MovF
	func_1721(var_67_object, var_68_float); // 0xe3 NEW_2
	var_113_bool = var_66_bool == 0; // 0xe5 Not
	if(var_113_bool == 0) goto Label_233; // 0xe6 JumpB
	var_55_int = -2; // 0xe7 MovI
	return 8; // 0xe8 Return
	
Label_233:
	CreateDialog(var_62_object); // 0xe9 Func
	var_114_int = 0; // 0xeb PushV
	func_2087(var_114_int); // 0xec NEW_2
	SetNPCName(var_114_int); // 0xee ObjFunc
	var_115_int = 0; // 0xf0 PushV
	func_2085(var_115_int); // 0xf1 NEW_2
	SetNPCDescription(var_115_int); // 0xf3 ObjFunc
	var_116_string = ""; // 0xf5 PushV
	func_2089(var_116_string); // 0xf6 NEW_2
	SetPhoto(var_116_string); // 0xf8 ObjFunc
	var_117_string = ""; // 0xfa PushV
	func_2091(var_117_string); // 0xfb NEW_2
	SetPhoto2(var_117_string); // 0xfd ObjFunc
	var_118_int = 0; // 0xff PushV
	func_2062(var_118_int); // 0x100 NEW_2
	SetPlayerName(var_118_int); // 0x102 ObjFunc
	var_64_int = -1; // 0x104 MovI
	IsOverrideActive(var_63_bool); // 0x105 Func
	var_126_bool = var_63_bool; // 0x107 Push
	if(var_126_bool == 0) goto Label_267; // 0x108 JumpB
	var_55_int = -2; // 0x109 MovI
	return 8; // 0x10a Return
	
Label_267:
	DoDialog(var_62_object); // 0x10b Func
	var_127_object = Obj(); var_128_object = Obj(); // 0x10d PushV
	var_127_object = var_56_object; // 0x10e Mov
	var_128_object = var_62_object; // 0x10f Mov
	TaskCall(3); // 0x110 TaskCall
	func_296(var_129_object, var_130_object, var_131_string, var_132_bool, var_127_object, var_128_object); // 0x111 NEW_2
	TaskReturn(); // 0x112 TaskReturn
	IsDialogEnd(var_65_bool); // 0x114 ObjFunc
	
Label_278:
	var_187_bool = var_65_bool == 0; // 0x116 Not
	if(var_187_bool == 0) goto Label_285; // 0x117 JumpB
	sync(); // 0x118 Func
	IsDialogEnd(var_65_bool); // 0x11a ObjFunc
	goto Label_278; // 0x11c Jump
	
Label_285:
	var_188_object = Obj(); // 0x11d PushV
	var_188_object = var_56_object; // 0x11e Mov
	func_1790(); // 0x11f NEW_2
	StopDialog(var_62_object); // 0x121 Func
	GetReturnValue(var_64_int); // 0x123 ObjFunc
	var_55_int = var_64_int; // 0x125 Mov
	return 8; // 0x126 Return
}


func_1886(var_100_int, var_101_int)
{
	var_102_int = 0; // 0x75f PushI
	var_103_bool = var_101_int < var_102_int; // 0x760 LT
	if(var_103_bool == 0) goto Label_1892; // 0x761 JumpB
	var_100_int = -var_101_int; // 0x762 Neg2
	goto Label_1893; // 0x763 Jump
	
Label_1893:
	return 0; // 0x765 Return
	
Label_1892:
	var_100_int = var_101_int; // 0x764 Mov
}


func_2017(var_306_bool)
{
	var_308_int = 0; var_309_string = ""; // 0x7e2 PushV
	var_309_string = "branch"; // 0x7e3 MovS
	func_1905(var_308_int, var_309_string); // 0x7e4 NEW_2
	var_310_int = 2; // 0x7e6 PushI
	var_311_bool = var_308_int == var_310_int; // 0x7e7 Eq
	if(var_311_bool == 0) goto Label_2027; // 0x7e8 JumpB
	var_306_bool = 1; // 0x7e9 MovB
	return 0; // 0x7ea Return
	
Label_2027:
	var_306_bool = 0; // 0x7eb MovB
	return 0; // 0x7ec Return
}


func_1894(var_107_bool, var_108_float)
{
	var_109_float = 0; var_110_float = 0; // 0x766 PushV
	rand(var_110_float); // 0x767 Func
	var_107_bool = var_110_float < var_108_float; // 0x769 LT2
	return 2; // 0x76a Return
}


func_1899(var_363_object)
{
	var_364_object = Obj(); var_365_object = Obj(); // 0x76b PushV
	CreateObjectVector(var_365_object); // 0x76c Func
	var_363_object = var_365_object; // 0x76e Mov
	return 2; // 0x76f Return
}


func_364(var_2_object, var_134_string)
{
	var_135_bool = 0; // 0x16d PushV
	func_2093(var_135_bool); // 0x16e NEW_2
	var_136_bool = var_135_bool == 0; // 0x170 Not
	if(var_136_bool == 0) goto Label_371; // 0x171 JumpB
	return 0; // 0x172 Return
	
Label_371:
	var_137_bool = var_134_string == var_2_object; // 0x173 Eq
	if(var_137_bool == 0) goto Label_374; // 0x174 JumpB
	return 0; // 0x175 Return
	
Label_374:
	var_138_string = ""; var_139_bool = 0; // 0x176 PushV
	var_138_string = var_134_string; // 0x177 Mov
	var_140_string = ""; // 0x178 PushS
	var_141_bool = var_134_string == var_140_string; // 0x179 Eq
	if(var_141_bool == 0) goto Label_381; // 0x17a JumpB
	var_139_bool = 0; // 0x17b MovB
	goto Label_382; // 0x17c Jump
	
Label_382:
	func_1824(var_138_string, var_139_bool); // 0x17e NEW_2
	var_2_object = var_134_string; // 0x180 TMov
	return 0; // 0x181 Return
	
Label_381:
	var_139_bool = 1; // 0x17d MovB
}


func_2029(var_334_bool, var_335_object)
{
	var_336_bool = 0; // 0x7ee PushV
	var_336_bool = 1; // 0x7ef MovB
	var_337_bool = 0; var_338_object = Obj(); var_339_string = ""; // 0x7f0 PushV
	var_338_object = var_335_object; // 0x7f1 Mov
	var_339_string = "rat"; // 0x7f2 MovS
	func_1959(var_338_object, var_339_string); // 0x7f3 NEW_2
	if(var_337_bool == 0) goto Label_2045; // 0x7f5 JumpB
	var_344_bool = 0; var_345_object = Obj(); var_346_string = ""; // 0x7f6 PushV
	var_345_object = var_335_object; // 0x7f7 Mov
	var_346_string = "rat_big"; // 0x7f8 MovS
	func_1959(var_345_object, var_346_string); // 0x7f9 NEW_2
	if(var_344_bool == 0) goto Label_2045; // 0x7fb JumpB
	var_336_bool = 0; // 0x7fc MovB
	
Label_2045:
	if(var_336_bool == 0) goto Label_2048; // 0x7fd JumpB
	var_334_bool = 1; // 0x7fe MovB
	return 0; // 0x7ff Return
	
Label_2048:
	var_334_bool = 0; // 0x800 MovB
	return 0; // 0x801 Return
}


func_1905(var_154_int, var_155_string)
{
	var_156_int = 0; var_157_int = 0; // 0x771 PushV
	GetVariable(var_155_string, var_157_int); // 0x772 Func
	var_154_int = var_157_int; // 0x774 Mov
	return 2; // 0x775 Return
}


func_1910(var_153_object, var_154_object, var_155_string, var_156_string, var_157_string)
{
	var_158_bool = 0; var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_object = Obj(); var_162_bool = 0; var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_object = Obj(); // 0x776 PushV
	GetLocator(var_155_string, var_162_bool, var_163_cvector, var_164_cvector); // 0x777 ObjFunc
	var_166_bool = var_162_bool == 0; // 0x779 Not
	if(var_166_bool == 0) goto Label_1923; // 0x77a JumpB
	var_167_string = "Locator "; // 0x77b PushS
	var_168_int = var_167_string + var_155_string; // 0x77c Add
	var_169_string = " doesn't exist"; // 0x77d PushS
	var_170_int = var_168_int + var_169_string; // 0x77e Add
	Trace(var_170_int); // 0x77f Func
	var_165_object = 0; // 0x781 SetNull
	goto Label_1925; // 0x782 Jump
	
Label_1925:
	var_153_object = var_165_object; // 0x785 Mov
	return 8; // 0x786 Return
	
Label_1923:
	AddActor(var_165_object, var_156_string, var_154_object, var_163_cvector, var_164_cvector, var_157_string); // 0x783 Func
}


func_634(var_0_object, var_251_int, var_252_object)
{
	var_254_object = Obj(); var_255_bool = 0; var_256_int = 0; var_257_bool = 0; var_258_object = Obj(); var_259_bool = 0; var_260_int = 0; var_261_bool = 0; // 0x27a PushV
	var_0_object = var_252_object; // 0x27b TMov
	var_262_bool = 0; var_263_object = Obj(); var_264_float = 0; // 0x27c PushV
	var_263_object = var_252_object; // 0x27d Mov
	var_264_float = 70.0; // 0x27e MovF
	func_1721(var_263_object, var_264_float); // 0x27f NEW_2
	var_265_bool = var_262_bool == 0; // 0x281 Not
	if(var_265_bool == 0) goto Label_645; // 0x282 JumpB
	var_251_int = -2; // 0x283 MovI
	return 8; // 0x284 Return
	
Label_645:
	CreateDialog(var_258_object); // 0x285 Func
	var_266_int = 0; // 0x287 PushV
	func_2087(var_266_int); // 0x288 NEW_2
	SetNPCName(var_266_int); // 0x28a ObjFunc
	var_267_int = 0; // 0x28c PushV
	func_2085(var_267_int); // 0x28d NEW_2
	SetNPCDescription(var_267_int); // 0x28f ObjFunc
	var_268_string = ""; // 0x291 PushV
	func_2089(var_268_string); // 0x292 NEW_2
	SetPhoto(var_268_string); // 0x294 ObjFunc
	var_269_string = ""; // 0x296 PushV
	func_2091(var_269_string); // 0x297 NEW_2
	SetPhoto2(var_269_string); // 0x299 ObjFunc
	var_270_int = 0; // 0x29b PushV
	func_2062(var_270_int); // 0x29c NEW_2
	SetPlayerName(var_270_int); // 0x29e ObjFunc
	var_260_int = -1; // 0x2a0 MovI
	IsOverrideActive(var_259_bool); // 0x2a1 Func
	var_271_bool = var_259_bool; // 0x2a3 Push
	if(var_271_bool == 0) goto Label_679; // 0x2a4 JumpB
	var_251_int = -2; // 0x2a5 MovI
	return 8; // 0x2a6 Return
	
Label_679:
	DoDialog(var_258_object); // 0x2a7 Func
	var_272_object = Obj(); var_273_object = Obj(); // 0x2a9 PushV
	var_272_object = var_252_object; // 0x2aa Mov
	var_273_object = var_258_object; // 0x2ab Mov
	TaskCall(7); // 0x2ac TaskCall
	func_708(var_274_object, var_275_object, var_276_string, var_277_bool, var_272_object, var_273_object); // 0x2ad NEW_2
	TaskReturn(); // 0x2ae TaskReturn
	IsDialogEnd(var_261_bool); // 0x2b0 ObjFunc
	
Label_690:
	var_359_bool = var_261_bool == 0; // 0x2b2 Not
	if(var_359_bool == 0) goto Label_697; // 0x2b3 JumpB
	sync(); // 0x2b4 Func
	IsDialogEnd(var_261_bool); // 0x2b6 ObjFunc
	goto Label_690; // 0x2b8 Jump
	
Label_697:
	var_360_object = Obj(); // 0x2b9 PushV
	var_360_object = var_252_object; // 0x2ba Mov
	func_1790(); // 0x2bb NEW_2
	StopDialog(var_258_object); // 0x2bd Func
	GetReturnValue(var_260_int); // 0x2bf ObjFunc
	var_251_int = var_260_int; // 0x2c1 Mov
	return 8; // 0x2c2 Return
}


func_1790()
{
	var_148_bool = 0; var_149_bool = 0; // 0x6fe PushV
	var_150_bool = 1; // 0x6ff PushB
	CameraSwitchToNormal(var_150_bool); // 0x700 Func
	var_151_bool = 0; // 0x702 PushV
	func_2093(var_151_bool); // 0x703 NEW_2
	if(var_151_bool == 0) goto Label_1799; // 0x705 JumpB
	goto Label_1807; // 0x706 Jump
	
Label_1807:
	return 2; // 0x70f Return
	
Label_1799:
	var_152_string = "head"; // 0x707 PushS
	HasAnimationTrack(var_149_bool, var_152_string); // 0x708 Func
	var_153_bool = var_149_bool; // 0x70a Push
	if(var_153_bool == 0) goto Label_1807; // 0x70b JumpB
	var_154_string = "head"; // 0x70c PushS
	UnlookAsync(var_154_string); // 0x70d Func
}


