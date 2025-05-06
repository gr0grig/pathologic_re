task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_int, var_23_bool, var_24_int, var_25_int)
{
	var_26_int = 1; // 0x9b PushI
	if(var_26_int == 0) goto Label_221; // 0x9c JumpB
	func_1818(); // 0x9e NEW_2
	var_28_int = 21241; // 0xa0 PushI
	var_29_bool = var_25_int == var_28_int; // 0xa1 Eq
	if(var_29_bool == 0) goto Label_173; // 0xa2 JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0xa3 PushV
	var_30_object = var_1_object; // 0xa4 MovT
	var_31_object = var_0_object; // 0xa5 MovT
	func_1956(var_31_object); // 0xa6 NEW_2
	var_51_object = Obj(); var_52_object = Obj(); // 0xa8 PushV
	var_51_object = var_1_object; // 0xa9 MovT
	var_52_object = var_0_object; // 0xaa MovT
	func_1966(); // 0xab NEW_2
	
Label_173:
	var_55_int = 21242; // 0xad PushI
	var_56_bool = var_25_int == var_55_int; // 0xae Eq
	if(var_56_bool == 0) goto Label_186; // 0xaf JumpB
	var_57_object = Obj(); var_58_object = Obj(); // 0xb0 PushV
	var_57_object = var_1_object; // 0xb1 MovT
	var_58_object = var_0_object; // 0xb2 MovT
	func_1956(var_58_object); // 0xb3 NEW_2
	var_59_object = Obj(); var_60_object = Obj(); // 0xb5 PushV
	var_59_object = var_1_object; // 0xb6 MovT
	var_60_object = var_0_object; // 0xb7 MovT
	func_1966(); // 0xb8 NEW_2
	
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
	func_2066(var_87_bool); // 0xd3 NEW_2
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
	func_1818(); // 0x186 NEW_2
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
	func_1984(var_49_object); // 0x196 NEW_2
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
	func_2066(var_65_bool); // 0x1ab NEW_2
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
	func_1818(); // 0x254 NEW_2
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
	func_2066(var_54_bool); // 0x26f NEW_2
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
	func_1818(); // 0x35e NEW_2
	var_28_int = 21270; // 0x360 PushI
	var_29_bool = var_25_int == var_28_int; // 0x361 Eq
	if(var_29_bool == 0) goto Label_872; // 0x362 JumpB
	var_30_object = Obj(); var_31_object = Obj(); // 0x363 PushV
	var_30_object = var_1_object; // 0x364 MovT
	var_31_object = var_0_object; // 0x365 MovT
	func_1945(); // 0x366 NEW_2
	
Label_872:
	var_33_int = 21253; // 0x368 PushI
	var_34_bool = var_24_int == var_33_int; // 0x369 Eq
	if(var_34_bool == 0) goto Label_965; // 0x36a JumpB
	var_35_bool = 0; var_36_object = Obj(); // 0x36b PushV
	var_36_object = var_1_object; // 0x36c MovT
	func_2029(var_36_object); // 0x36d NEW_2
	if(var_35_bool == 0) goto Label_930; // 0x36f JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x370 PushV
	var_43_object = var_1_object; // 0x371 MovT
	var_44_object = var_0_object; // 0x372 MovT
	func_1950(); // 0x373 NEW_2
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
	func_1984(var_69_object); // 0x385 NEW_2
	if(var_68_bool == 0) goto Label_909; // 0x387 JumpB
	var_74_int = 520085; // 0x388 PushI
	var_75_int = 21266; // 0x389 PushI
	var_76_int = 21265; // 0x38a PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x38b TObjFunc
	
Label_909:
	var_77_bool = 0; var_78_object = Obj(); // 0x38d PushV
	var_78_object = var_1_object; // 0x38e MovT
	func_1996(var_78_object); // 0x38f NEW_2
	if(var_77_bool == 0) goto Label_919; // 0x391 JumpB
	var_83_int = 541546; // 0x392 PushI
	var_84_int = 43710; // 0x393 PushI
	var_85_int = 43709; // 0x394 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x395 TObjFunc
	
Label_919:
	var_86_bool = 0; var_87_object = Obj(); // 0x397 PushV
	var_87_object = var_1_object; // 0x398 MovT
	func_1972(var_87_object); // 0x399 NEW_2
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
	func_2008(var_97_bool, var_98_object); // 0x3ad NEW_2
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
	func_1984(var_168_object); // 0x437 NEW_2
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
	func_2066(var_196_bool); // 0x47d NEW_2
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
	var_194_int = 1; // 0x499 PushI
	var_195_bool = var_0_object == var_194_int; // 0x49a Eq
	if(var_195_bool == 0) goto Label_1188; // 0x49b JumpB
	var_196_int = 0; var_197_object = Obj(); // 0x49c PushV
	var_197_object = var_24_int; // 0x49d Mov
	TaskCall(0); // 0x49e TaskCall
	func_0(var_198_object, var_196_int, var_197_object); // 0x49f NEW_2
	TaskReturn(); // 0x4a0 TaskReturn
	var_0_object = -1; // 0x4a2 TMovI
	goto Label_1284; // 0x4a3 Jump
	
Label_1188:
	var_249_int = 0; var_250_object = Obj(); // 0x4a4 PushV
	var_250_object = var_24_int; // 0x4a5 Mov
	TaskCall(6); // 0x4a6 TaskCall
	func_634(var_251_object, var_249_int, var_250_object); // 0x4a7 NEW_2
	TaskReturn(); // 0x4a8 TaskReturn
	var_359_int = 1; // 0x4aa PushI
	var_360_bool = var_251_object == var_359_int; // 0x4ab Eq
	if(var_360_bool == 0) goto Label_1284; // 0x4ac JumpB
	var_361_object = Obj(); // 0x4ad PushV
	func_1878(var_361_object); // 0x4ae NEW_2
	var_39_object = var_361_object; // 0x4af Mov
	CreateIntVector(var_40_object); // 0x4b1 Func
	var_364_int = 4; // 0x4b3 PushI
	GetItemCount(var_41_int, var_364_int); // 0x4b4 ObjFunc
	var_365_string = "rat"; // 0x4b6 PushS
	GetInvItemByName(var_42_int, var_365_string); // 0x4b7 Func
	var_366_string = "rat_big"; // 0x4b9 PushS
	GetInvItemByName(var_43_int, var_366_string); // 0x4ba Func
	var_44_int = 0; // 0x4bc MovI
	
Label_1213:
	var_367_bool = var_44_int < var_41_int; // 0x4bd LT
	if(var_367_bool == 0) goto Label_1236; // 0x4be JumpB
	var_368_int = 4; // 0x4bf PushI
	GetItem(var_45_object, var_44_int, var_368_int); // 0x4c0 ObjFunc
	GetItemID(var_46_int); // 0x4c2 ObjFunc
	var_369_bool = 0; // 0x4c4 PushV
	var_369_bool = 1; // 0x4c5 MovB
	var_370_bool = var_46_int == var_42_int; // 0x4c6 Eq
	if(var_370_bool == 0) goto Label_1227; // 0x4c7 JumpB
	var_371_bool = var_46_int == var_43_int; // 0x4c8 Eq
	if(var_371_bool == 0) goto Label_1227; // 0x4c9 JumpB
	var_369_bool = 0; // 0x4ca MovB
	
Label_1227:
	if(var_369_bool == 0) goto Label_1232; // 0x4cb JumpB
	add(var_45_object); // 0x4cc ObjFunc
	add(var_44_int); // 0x4ce ObjFunc
	
Label_1232:
	var_45_object = 0; // 0x4d0 SetNull
	var_372_int = 1; // 0x4d1 PushI
	var_44_int = var_44_int + var_372_int; // 0x4d2 Add2
	goto Label_1213; // 0x4d3 Jump
	
Label_1236:
	size(var_41_int); // 0x4d4 ObjFunc
	var_373_int = var_41_int; // 0x4d6 Push
	if(var_373_int == 0) goto Label_1282; // 0x4d7 JumpB
	var_374_int = 1; // 0x4d8 PushI
	var_375_bool = var_41_int == var_374_int; // 0x4d9 Eq
	if(var_375_bool == 0) goto Label_1245; // 0x4da JumpB
	var_47_int = 0; // 0x4db MovI
	goto Label_1259; // 0x4dc Jump
	
Label_1259:
	get(var_49_object, var_47_int); // 0x4eb ObjFunc
	get(var_50_int, var_47_int); // 0x4ed ObjFunc
	var_376_int = 1; // 0x4ef PushI
	var_377_int = 4; // 0x4f0 PushI
	RemoveItem(var_50_int, var_376_int, var_377_int); // 0x4f1 ObjFunc
	var_378_string = "quality"; // 0x4f3 PushS
	GetProperty(var_51_float, var_378_string); // 0x4f4 ObjFunc
	GetItemID(var_52_int); // 0x4f6 ObjFunc
	var_379_string = ""; var_380_float = 0; // 0x4f8 PushV
	var_381_bool = var_52_int == var_43_int; // 0x4f9 Eq
	if(var_381_bool == 0) goto Label_1277; // 0x4fa JumpB
	var_379_string = "pers_rat_big"; // 0x4fb MovS
	goto Label_1278; // 0x4fc Jump
	
Label_1278:
	var_380_float = var_51_float; // 0x4fe Mov
	func_1285(var_51_float, var_52_int, var_379_string, var_380_float); // 0x4ff NEW_2
	var_49_object = 0; // 0x501 SetNull
	
Label_1282:
	var_40_object = 0; // 0x502 SetNull
	var_39_object = 0; // 0x503 SetNull
	
Label_1277:
	var_379_string = "pers_rat"; // 0x4fd MovS
	
Label_1245:
	CreateIntVector(var_48_object); // 0x4dd Func
	ChooseItem(var_39_object, var_48_object); // 0x4df Func
	size(var_41_int); // 0x4e1 ObjFunc
	var_568_int = var_41_int; // 0x4e3 Push
	if(var_568_int == 0) goto Label_1257; // 0x4e4 JumpB
	var_569_int = 0; // 0x4e5 PushI
	get(var_47_int, var_569_int); // 0x4e6 ObjFunc
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
	var_25_int = 0; var_26_object = Obj(); // 0x5e8 PushV
	var_26_object = var_24_object; // 0x5e9 Mov
	TaskCall(4); // 0x5ea TaskCall
	func_438(var_27_object, var_25_int, var_26_object); // 0x5eb NEW_2
	TaskReturn(); // 0x5ec TaskReturn
	return 0; // 0x5ee Return
}


task_9_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int, var_24_string)
{
	var_25_string = "race_over1"; // 0x5f0 PushS
	var_26_bool = var_24_string == var_25_string; // 0x5f1 Eq
	if(var_26_bool == 0) goto Label_1542; // 0x5f2 JumpB
	var_27_int = 0; var_28_bool = 0; // 0x5f3 PushV
	var_27_int = 3; // 0x5f4 MovI
	var_28_bool = 0; // 0x5f5 MovB
	func_1668(var_27_int, var_28_bool); // 0x5f6 NEW_2
	var_37_int = 1; // 0x5f8 PushI
	var_1_object = var_1_object + var_37_int; // 0x5f9 Add2
	var_38_int = 1; // 0x5fa PushI
	var_39_bool = var_1_object == var_38_int; // 0x5fb Eq
	if(var_39_bool == 0) goto Label_1535; // 0x5fc JumpB
	var_2_object = 1; // 0x5fd TMovI
	goto Label_1541; // 0x5fe Jump
	
Label_1541:
	goto Label_1585; // 0x605 Jump
	
Label_1585:
	return 0; // 0x631 Return
	
Label_1535:
	var_40_int = 3; // 0x5ff PushI
	var_41_bool = var_1_object == var_40_int; // 0x600 Eq
	if(var_41_bool == 0) goto Label_1541; // 0x601 JumpB
	var_0_object = 1; // 0x602 TMovB
	StopGroup0(); // 0x603 Func
	
Label_1542:
	var_42_string = "race_over2"; // 0x606 PushS
	var_43_bool = var_24_string == var_42_string; // 0x607 Eq
	if(var_43_bool == 0) goto Label_1564; // 0x608 JumpB
	var_44_int = 0; var_45_bool = 0; // 0x609 PushV
	var_44_int = 4; // 0x60a MovI
	var_45_bool = 0; // 0x60b MovB
	func_1668(var_44_int, var_45_bool); // 0x60c NEW_2
	var_46_int = 1; // 0x60e PushI
	var_1_object = var_1_object + var_46_int; // 0x60f Add2
	var_47_int = 1; // 0x610 PushI
	var_48_bool = var_1_object == var_47_int; // 0x611 Eq
	if(var_48_bool == 0) goto Label_1557; // 0x612 JumpB
	var_2_object = 0; // 0x613 TMovI
	goto Label_1563; // 0x614 Jump
	
Label_1563:
	goto Label_1585; // 0x61b Jump
	
Label_1557:
	var_49_int = 3; // 0x615 PushI
	var_50_bool = var_1_object == var_49_int; // 0x616 Eq
	if(var_50_bool == 0) goto Label_1563; // 0x617 JumpB
	var_0_object = 1; // 0x618 TMovB
	StopGroup0(); // 0x619 Func
	
Label_1564:
	var_51_string = "race_over3"; // 0x61c PushS
	var_52_bool = var_24_string == var_51_string; // 0x61d Eq
	if(var_52_bool == 0) goto Label_1585; // 0x61e JumpB
	var_53_int = 0; var_54_bool = 0; // 0x61f PushV
	var_53_int = 5; // 0x620 MovI
	var_54_bool = 0; // 0x621 MovB
	func_1668(var_53_int, var_54_bool); // 0x622 NEW_2
	var_55_int = 1; // 0x624 PushI
	var_1_object = var_1_object + var_55_int; // 0x625 Add2
	var_56_int = 1; // 0x626 PushI
	var_57_bool = var_1_object == var_56_int; // 0x627 Eq
	if(var_57_bool == 0) goto Label_1579; // 0x628 JumpB
	var_2_object = 0; // 0x629 TMovI
	goto Label_1585; // 0x62a Jump
	
Label_1579:
	var_58_int = 3; // 0x62b PushI
	var_59_bool = var_1_object == var_58_int; // 0x62c Eq
	if(var_59_bool == 0) goto Label_1585; // 0x62d JumpB
	var_0_object = 1; // 0x62e TMovB
	StopGroup0(); // 0x62f Func
}


task_9_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int)
{
	var_2_object = -1; // 0x695 TMovI
	var_0_object = 1; // 0x696 TMovB
	StopGroup0(); // 0x697 Func
	return 0; // 0x699 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_bool, var_22_int, var_23_int)
{
	var_0_object = -1; // 0x488 TMovI
	
Label_1161:
	Hold(); // 0x489 Func
	goto Label_1161; // 0x48b Jump
}


func_512(var_0_object, var_1_object, var_2_object, var_3_string, var_96_object, var_97_object)
{
	var_0_object = var_97_object; // 0x201 TMov
	var_1_object = var_96_object; // 0x202 TMov
	var_3_string = 0; // 0x203 TMovB
	var_102_int = 1; // 0x204 PushI
	if(var_102_int == 0) goto Label_540; // 0x205 JumpB
	var_103_string = ""; // 0x206 PushV
	var_103_string = "Neutral"; // 0x207 MovS
	func_570(var_97_object, var_103_string); // 0x208 NEW_2
	var_120_int = 520069; // 0x20a PushI
	SetMessage(var_120_int); // 0x20b TObjFunc
	ClearReplies(); // 0x20d TObjFunc
	var_121_int = 520070; // 0x20f PushI
	var_122_int = -1; // 0x210 PushI
	var_123_int = 21250; // 0x211 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x212 TObjFunc
	var_124_int = 520071; // 0x214 PushI
	var_125_int = -1; // 0x215 PushI
	var_126_int = 21251; // 0x216 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x217 TObjFunc
	goto Label_540; // 0x219 Jump
	
Label_540:
	var_127_bool = 0; // 0x21c PushV
	func_2066(var_127_bool); // 0x21d NEW_2
	if(var_127_bool == 0) goto Label_555; // 0x21f JumpB
	
Label_544:
	lshWaitForAnimEnd(); // 0x220 Func
	var_128_string = var_3_string; // 0x222 PushT
	if(var_128_string == 0) goto Label_549; // 0x223 JumpB
	goto Label_554; // 0x224 Jump
	
Label_554:
	goto Label_569; // 0x22a Jump
	
Label_569:
	return 0; // 0x239 Return
	
Label_549:
	var_129_string = ""; // 0x225 PushV
	var_129_string = var_2_object; // 0x226 MovT
	func_1787(var_129_string); // 0x227 NEW_2
	goto Label_544; // 0x229 Jump
	
Label_555:
	var_140_string = "all"; // 0x22b PushS
	var_141_string = "idle"; // 0x22c PushS
	PlayAnimation(var_140_string, var_141_string); // 0x22d Func
	
Label_559:
	WaitForAnimEnd(); // 0x22f Func
	var_142_string = var_3_string; // 0x231 PushT
	if(var_142_string == 0) goto Label_564; // 0x232 JumpB
	goto Label_569; // 0x233 Jump
	
Label_564:
	var_143_string = "all"; // 0x234 PushS
	var_144_string = "idle"; // 0x235 PushS
	PlayAnimation(var_143_string, var_144_string); // 0x236 Func
	goto Label_559; // 0x238 Jump
}


func_0(var_0_object, var_196_int, var_197_object)
{
	var_199_object = Obj(); var_200_bool = 0; var_201_int = 0; var_202_bool = 0; var_203_object = Obj(); var_204_bool = 0; var_205_int = 0; var_206_bool = 0; // 0x0 PushV
	var_0_object = var_197_object; // 0x1 TMov
	var_207_bool = 0; var_208_object = Obj(); var_209_float = 0; // 0x2 PushV
	var_208_object = var_197_object; // 0x3 Mov
	var_209_float = 70.0; // 0x4 MovF
	func_1702(var_208_object, var_209_float); // 0x5 NEW_2
	var_210_bool = var_207_bool == 0; // 0x7 Not
	if(var_210_bool == 0) goto Label_11; // 0x8 JumpB
	var_196_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_203_object); // 0xb Func
	var_211_int = 0; // 0xd PushV
	func_2060(var_211_int); // 0xe NEW_2
	SetNPCName(var_211_int); // 0x10 ObjFunc
	var_212_int = 0; // 0x12 PushV
	func_2058(var_212_int); // 0x13 NEW_2
	SetNPCDescription(var_212_int); // 0x15 ObjFunc
	var_213_string = ""; // 0x17 PushV
	func_2062(var_213_string); // 0x18 NEW_2
	SetPhoto(var_213_string); // 0x1a ObjFunc
	var_214_string = ""; // 0x1c PushV
	func_2064(var_214_string); // 0x1d NEW_2
	SetPhoto2(var_214_string); // 0x1f ObjFunc
	var_215_int = 0; // 0x21 PushV
	func_2041(var_215_int); // 0x22 NEW_2
	SetPlayerName(var_215_int); // 0x24 ObjFunc
	var_205_int = -1; // 0x26 MovI
	IsOverrideActive(var_204_bool); // 0x27 Func
	var_216_bool = var_204_bool; // 0x29 Push
	if(var_216_bool == 0) goto Label_45; // 0x2a JumpB
	var_196_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_203_object); // 0x2d Func
	var_217_object = Obj(); var_218_object = Obj(); // 0x2f PushV
	var_217_object = var_197_object; // 0x30 Mov
	var_218_object = var_203_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_219_object, var_220_object, var_221_string, var_222_bool, var_217_object, var_218_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_206_bool); // 0x36 ObjFunc
	
Label_56:
	var_247_bool = var_206_bool == 0; // 0x38 Not
	if(var_247_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_206_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_248_object = Obj(); // 0x3f PushV
	var_248_object = var_197_object; // 0x40 Mov
	func_1770(); // 0x41 NEW_2
	StopDialog(var_203_object); // 0x43 Func
	GetReturnValue(var_205_int); // 0x45 ObjFunc
	var_196_int = var_205_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_132(var_2_object, var_224_string)
{
	var_225_bool = 0; // 0x85 PushV
	func_2066(var_225_bool); // 0x86 NEW_2
	var_226_bool = var_225_bool == 0; // 0x88 Not
	if(var_226_bool == 0) goto Label_139; // 0x89 JumpB
	return 0; // 0x8a Return
	
Label_139:
	var_227_bool = var_224_string == var_2_object; // 0x8b Eq
	if(var_227_bool == 0) goto Label_142; // 0x8c JumpB
	return 0; // 0x8d Return
	
Label_142:
	var_228_string = ""; var_229_bool = 0; // 0x8e PushV
	var_228_string = var_224_string; // 0x8f Mov
	var_230_string = ""; // 0x90 PushS
	var_231_bool = var_224_string == var_230_string; // 0x91 Eq
	if(var_231_bool == 0) goto Label_149; // 0x92 JumpB
	var_229_bool = 0; // 0x93 MovB
	goto Label_150; // 0x94 Jump
	
Label_150:
	func_1803(var_228_string, var_229_bool); // 0x96 NEW_2
	var_2_object = var_224_string; // 0x98 TMov
	return 0; // 0x99 Return
	
Label_149:
	var_229_bool = 1; // 0x95 MovB
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
	var_205_bool = 0; // 0x50e PushV
	func_1697(var_205_bool); // 0x50f NEW_2
	var_208_bool = var_205_bool == 0; // 0x511 Not
	if(var_208_bool == 0) goto Label_1301; // 0x512 JumpB
	var_0_object = -1; // 0x513 TMovI
	goto Label_1314; // 0x514 Jump
	
Label_1314:
	return 0; // 0x522 Return
	
Label_1301:
	var_209_int = 1; // 0x515 PushI
	var_210_bool = var_0_object == var_209_int; // 0x516 Eq
	if(var_210_bool == 0) goto Label_1308; // 0x517 JumpB
	var_211_string = "You've won a rat race"; // 0x518 PushS
	Trace(var_211_string); // 0x519 Func
	goto Label_1314; // 0x51b Jump
	
Label_1308:
	var_212_int = 0; // 0x51c PushI
	var_213_bool = var_0_object == var_212_int; // 0x51d Eq
	if(var_213_bool == 0) goto Label_1314; // 0x51e JumpB
	var_214_string = "Looser!"; // 0x51f PushS
	Trace(var_214_string); // 0x520 Func
}


func_1668(var_27_int, var_28_bool)
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x684 PushV
	var_31_string = "rats_track_door"; // 0x685 PushS
	var_32_int = 1; // 0x686 PushI
	var_33_int = var_27_int + var_32_int; // 0x687 Add
	var_34_int = var_31_string + var_33_int; // 0x688 Add
	FindActor(var_30_object, var_34_int); // 0x689 Func
	var_35_bool = var_28_bool; // 0x68b Push
	if(var_35_bool == 0) goto Label_1681; // 0x68c JumpB
	var_36_bool = 0; // 0x68d PushB
	Open(var_36_bool); // 0x68e ObjFunc
	goto Label_1683; // 0x690 Jump
	
Label_1683:
	return 2; // 0x693 Return
	
Label_1681:
	Close(); // 0x691 ObjFunc
}


func_2058(var_84_int)
{
	var_84_int = 518097; // 0x80a MovI
	return 0; // 0x80b Return
}


func_1803(var_107_string, var_108_bool)
{
	var_111_bool = 0; var_112_float = 0; var_113_float = 0; var_114_bool = 0; var_115_float = 0; var_116_float = 0; // 0x70b PushV
	lshHasAnimation(var_114_bool, var_107_string); // 0x70c Func
	var_117_bool = var_114_bool; // 0x70e Push
	if(var_117_bool == 0) goto Label_1813; // 0x70f JumpB
	lshGetAnimTimes(var_107_string, var_115_float, var_116_float); // 0x710 Func
	lshPlayAnimation(var_115_float, var_116_float, var_108_bool); // 0x712 Func
	goto Label_1817; // 0x714 Jump
	
Label_1817:
	return 6; // 0x719 Return
	
Label_1813:
	var_118_string = "Can't find lsh animation : "; // 0x715 PushS
	var_119_int = var_118_string + var_107_string; // 0x716 Add
	Trace(var_119_int); // 0x717 Func
}


func_2060(var_83_int)
{
	var_83_int = 518096; // 0x80c MovI
	return 0; // 0x80d Return
}


func_2062(var_85_string)
{
	var_85_string = "ui/NPC_Citizen2.png"; // 0x80e MovS
	return 0; // 0x80f Return
}


func_2064(var_86_string)
{
	var_86_string = "ui/NPC_Citizen2_b.png"; // 0x810 MovS
	return 0; // 0x811 Return
}


func_2066(var_78_bool)
{
	var_78_bool = 0; // 0x812 MovB
	return 0; // 0x813 Return
}


func_1938(var_335_bool, var_337_string)
{
	var_338_int = 0; var_339_bool = 0; var_340_int = 0; var_341_bool = 0; // 0x792 PushV
	GetInvItemByName(var_340_int, var_337_string); // 0x793 Func
	HasItem(var_340_int, var_341_bool); // 0x795 ObjFunc
	var_335_bool = var_341_bool; // 0x797 Mov
	return 4; // 0x798 Return
}


func_1945()
{
	var_32_int = 1; // 0x79a PushI
	SetReturnValue(var_32_int); // 0x79b ObjFunc
	return 0; // 0x79d Return
}


func_1690(var_38_string, var_39_int)
{
	var_40_int = 0; var_41_int = 0; // 0x69a PushV
	GetProperty(var_38_string, var_41_int); // 0x69b ObjFunc
	var_42_int = var_41_int + var_39_int; // 0x69d Add
	SetProperty(var_38_string, var_42_int); // 0x69e ObjFunc
	return 2; // 0x6a0 Return
}


func_1818()
{
	var_27_bool = 0; // 0x71a PushV
	func_2066(var_27_bool); // 0x71b NEW_2
	if(var_27_bool == 0) goto Label_1824; // 0x71d JumpB
	lshStopSpeech(); // 0x71e Func
	
Label_1824:
	return 0; // 0x720 Return
}


func_1950()
{
	var_285_string = "ooRatsManager1"; // 0x79f PushS
	var_286_int = 1; // 0x7a0 PushI
	SetVariable(var_285_string, var_286_int); // 0x7a1 Func
	return 0; // 0x7a3 Return
}


func_1697(var_205_bool)
{
	var_206_bool = 0; var_207_bool = 0; // 0x6a1 PushV
	IsLoaded(var_207_bool); // 0x6a2 Func
	var_205_bool = var_207_bool; // 0x6a4 Mov
	return 2; // 0x6a5 Return
}


func_1825(var_129_int, var_130_int, var_131_int, var_132_int)
{
	var_133_bool = var_130_int < var_131_int; // 0x722 LT
	if(var_133_bool == 0) goto Label_1834; // 0x723 JumpB
	var_134_bool = var_130_int < var_132_int; // 0x724 LT
	if(var_134_bool == 0) goto Label_1832; // 0x725 JumpB
	var_129_int = 0; // 0x726 MovI
	goto Label_1833; // 0x727 Jump
	
Label_1833:
	return 0; // 0x729 Return
	
Label_1832:
	var_129_int = 2; // 0x728 MovI
	
Label_1834:
	var_135_bool = var_131_int < var_132_int; // 0x72a LT
	if(var_135_bool == 0) goto Label_1838; // 0x72b JumpB
	var_129_int = 1; // 0x72c MovI
	goto Label_1839; // 0x72d Jump
	
Label_1839:
	return 0; // 0x72f Return
	
Label_1838:
	var_129_int = 2; // 0x72e MovI
}


func_1956(var_30_object)
{
	var_32_string = "money500 is given"; // 0x7a5 PushS
	Trace(var_32_string); // 0x7a6 Func
	var_33_object = Obj(); var_34_int = 0; // 0x7a8 PushV
	var_33_object = var_30_object; // 0x7a9 Mov
	var_34_int = 500; // 0x7aa MovI
	func_1919(var_33_object, var_34_int); // 0x7ab NEW_2
	return 0; // 0x7ad Return
}


func_1702(var_36_bool, var_38_float)
{
	var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; var_56_bool = 0; // 0x6a6 PushV
	GetPosition(var_49_cvector); // 0x6a7 ObjFunc
	GetEyesHeight(var_48_float); // 0x6a9 ObjFunc
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x6ab PushE
	var_57_float = var_57_float + var_48_float; // 0x6ac Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x6ad PopE
	GetPosition(var_50_cvector); // 0x6ae Func
	GetEyesHeight(var_48_float); // 0x6b0 Func
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x6b2 PushE
	var_58_float = var_58_float + var_48_float; // 0x6b3 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x6b4 PopE
	var_51_cvector = var_49_cvector - var_50_cvector; // 0x6b5 Sub2
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x6b6 PushE
	var_59_float = 0; // 0x6b7 MovI
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x6b8 PopE
	var_60_int = var_51_cvector | var_51_cvector; // 0x6b9 Or
	var_61_float = sqrt(var_60_int); // 0x6ba Sqrt
	var_51_cvector = var_51_cvector / var_51_cvector; // 0x6bb Div2
	var_52_cvector = -var_51_cvector; // 0x6bc Neg2
	var_62_float = var_51_cvector * var_38_float; // 0x6bd Mult
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); // 0x6be PushV
	var_65_cvector = CVector(0.0, 1.0, 0.0); // 0x6bf PushVec
	var_64_cvector = var_52_cvector ^ var_65_cvector; // 0x6c0 Xor2
	func_1855(var_63_cvector, var_64_cvector); // 0x6c1 NEW_2
	var_71_int = 25; // 0x6c3 PushI
	var_72_float = var_63_cvector * var_71_int; // 0x6c4 Mult
	var_73_int = var_62_float + var_72_float; // 0x6c5 Add
	var_74_cvector = CVector(0.0, 10.0, 0.0); // 0x6c6 PushVec
	var_53_cvector = var_73_int - var_74_cvector; // 0x6c7 Sub2
	var_54_cvector = var_50_cvector + var_53_cvector; // 0x6c8 Add2
	IsOverrideActive(var_55_bool); // 0x6c9 Func
	var_75_bool = var_55_bool; // 0x6cb Push
	if(var_75_bool == 0) goto Label_1743; // 0x6cc JumpB
	var_36_bool = 0; // 0x6cd MovB
	return 18; // 0x6ce Return
	
Label_1743:
	StopWorld(); // 0x6cf Func
	CameraTransit(var_54_cvector, var_52_cvector); // 0x6d1 Func
	var_76_float = GetByIndex(var_53_cvector, 0); // 0x6d3 PushE
	var_77_float = GetByIndex(var_53_cvector, 2); // 0x6d4 PushE
	Rotate(var_76_float, var_77_float); // 0x6d5 Func
	var_78_bool = 0; // 0x6d7 PushV
	func_2066(var_78_bool); // 0x6d8 NEW_2
	if(var_78_bool == 0) goto Label_1756; // 0x6da JumpB
	goto Label_1764; // 0x6db Jump
	
Label_1764:
	CameraWaitForPlayFinish(); // 0x6e4 Func
	ResumeWorld(); // 0x6e6 Func
	var_36_bool = 1; // 0x6e8 MovB
	return 18; // 0x6e9 Return
	
Label_1756:
	var_79_string = "head"; // 0x6dc PushS
	HasAnimationTrack(var_56_bool, var_79_string); // 0x6dd Func
	var_80_bool = var_56_bool; // 0x6df Push
	if(var_80_bool == 0) goto Label_1764; // 0x6e0 JumpB
	var_81_string = "head"; // 0x6e1 PushS
	LookAsyncCamera(var_81_string); // 0x6e2 Func
}


func_296(var_0_object, var_1_object, var_2_object, var_3_string, var_126_object, var_127_object)
{
	var_0_object = var_127_object; // 0x129 TMov
	var_1_object = var_126_object; // 0x12a TMov
	var_3_string = 0; // 0x12b TMovB
	var_132_int = 1; // 0x12c PushI
	if(var_132_int == 0) goto Label_334; // 0x12d JumpB
	var_133_string = ""; // 0x12e PushV
	var_133_string = "Neutral"; // 0x12f MovS
	func_364(var_127_object, var_133_string); // 0x130 NEW_2
	var_150_int = 520064; // 0x132 PushI
	SetMessage(var_150_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_151_bool = 0; var_152_object = Obj(); // 0x137 PushV
	var_152_object = var_1_object; // 0x138 MovT
	func_1984(var_152_object); // 0x139 NEW_2
	if(var_151_bool == 0) goto Label_321; // 0x13b JumpB
	var_159_int = 520065; // 0x13c PushI
	var_160_int = -1; // 0x13d PushI
	var_161_int = 21245; // 0x13e PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0x13f TObjFunc
	
Label_321:
	var_162_int = 520066; // 0x141 PushI
	var_163_int = -1; // 0x142 PushI
	var_164_int = 21246; // 0x143 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x144 TObjFunc
	var_165_int = 520067; // 0x146 PushI
	var_166_int = -1; // 0x147 PushI
	var_167_int = 21247; // 0x148 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x149 TObjFunc
	goto Label_334; // 0x14b Jump
	
Label_334:
	var_168_bool = 0; // 0x14e PushV
	func_2066(var_168_bool); // 0x14f NEW_2
	if(var_168_bool == 0) goto Label_349; // 0x151 JumpB
	
Label_338:
	lshWaitForAnimEnd(); // 0x152 Func
	var_169_string = var_3_string; // 0x154 PushT
	if(var_169_string == 0) goto Label_343; // 0x155 JumpB
	goto Label_348; // 0x156 Jump
	
Label_348:
	goto Label_363; // 0x15c Jump
	
Label_363:
	return 0; // 0x16b Return
	
Label_343:
	var_170_string = ""; // 0x157 PushV
	var_170_string = var_2_object; // 0x158 MovT
	func_1787(var_170_string); // 0x159 NEW_2
	goto Label_338; // 0x15b Jump
	
Label_349:
	var_181_string = "all"; // 0x15d PushS
	var_182_string = "idle"; // 0x15e PushS
	PlayAnimation(var_181_string, var_182_string); // 0x15f Func
	
Label_353:
	WaitForAnimEnd(); // 0x161 Func
	var_183_string = var_3_string; // 0x163 PushT
	if(var_183_string == 0) goto Label_358; // 0x164 JumpB
	goto Label_363; // 0x165 Jump
	
Label_358:
	var_184_string = "all"; // 0x166 PushS
	var_185_string = "idle"; // 0x167 PushS
	PlayAnimation(var_184_string, var_185_string); // 0x168 Func
	goto Label_353; // 0x16a Jump
}


func_1966()
{
	var_53_string = "playsound"; // 0x7af PushS
	var_54_string = "givemoney"; // 0x7b0 PushS
	TriggerWorld(var_53_string, var_54_string); // 0x7b1 Func
	return 0; // 0x7b3 Return
}


func_1327(var_0_object, var_1_object, var_2_object, var_29_int, var_30_string, var_31_float)
{
	var_35_int = 0; var_36_int = 0; // 0x52f PushV
	var_1_object = 0; // 0x530 TMovI
	var_37_string = ""; var_38_float = 0; // 0x531 PushV
	var_37_string = var_30_string; // 0x532 Mov
	var_38_float = var_31_float; // 0x533 Mov
	func_1352(var_37_string, var_38_float); // 0x534 NEW_2
	
Label_1334:
	Hold(); // 0x536 Func
	var_199_bool = var_0_object == 0; // 0x538 Not
	if(var_199_bool == 0) goto Label_1334; // 0x539 JumpB
	var_36_int = 0; // 0x53a MovI
	
Label_1339:
	var_200_int = 6; // 0x53b PushI
	var_201_bool = var_36_int < var_200_int; // 0x53c LT
	if(var_201_bool == 0) goto Label_1350; // 0x53d JumpB
	var_202_int = 0; var_203_bool = 0; // 0x53e PushV
	var_202_int = var_36_int; // 0x53f Mov
	var_203_bool = 0; // 0x540 MovB
	func_1668(var_202_int, var_203_bool); // 0x541 NEW_2
	var_204_int = 1; // 0x543 PushI
	var_36_int = var_36_int + var_204_int; // 0x544 Add2
	goto Label_1339; // 0x545 Jump
	
Label_1350:
	var_29_int = var_2_object; // 0x546 MovT
	return 2; // 0x547 Return
}


func_1840(var_191_int, var_192_int, var_193_int, var_194_int)
{
	var_195_bool = var_192_int > var_193_int; // 0x731 GT
	if(var_195_bool == 0) goto Label_1849; // 0x732 JumpB
	var_196_bool = var_192_int > var_194_int; // 0x733 GT
	if(var_196_bool == 0) goto Label_1847; // 0x734 JumpB
	var_191_int = 0; // 0x735 MovI
	goto Label_1848; // 0x736 Jump
	
Label_1848:
	return 0; // 0x738 Return
	
Label_1847:
	var_191_int = 2; // 0x737 MovI
	
Label_1849:
	var_197_bool = var_193_int > var_194_int; // 0x739 GT
	if(var_197_bool == 0) goto Label_1853; // 0x73a JumpB
	var_191_int = 1; // 0x73b MovI
	goto Label_1854; // 0x73c Jump
	
Label_1854:
	return 0; // 0x73e Return
	
Label_1853:
	var_191_int = 2; // 0x73d MovI
}


func_1586(var_63_int)
{
	var_65_int = 0; var_66_int = 0; var_67_bool = 0; var_68_bool = 0; var_69_int = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; var_73_bool = 0; var_74_int = 0; // 0x632 PushV
	var_70_int = 0; // 0x633 MovI
	var_71_int = 0; // 0x634 MovI
	var_72_bool = 1; // 0x635 MovB
	var_73_bool = 0; // 0x636 MovB
	
Label_1591:
	var_75_bool = 0; // 0x637 PushV
	var_75_bool = 1; // 0x638 MovB
	var_76_bool = var_72_bool; // 0x639 Push
	if(var_76_bool == 0) goto Label_1598; // 0x63a JumpB
	var_77_bool = var_70_int == 0; // 0x63b Not
	if(var_77_bool == 0) goto Label_1598; // 0x63c JumpB
	var_75_bool = 0; // 0x63d MovB
	
Label_1598:
	if(var_75_bool == 0) goto Label_1605; // 0x63e JumpB
	var_78_int = 3; // 0x63f PushI
	irand(var_74_int, var_78_int); // 0x640 Func
	var_79_int = 1; // 0x642 PushI
	var_74_int = var_74_int + var_79_int; // 0x643 Add2
	goto Label_1640; // 0x644 Jump
	
Label_1640:
	var_70_int = var_70_int + var_74_int; // 0x668 Add2
	var_80_int = 12; // 0x669 PushI
	var_81_bool = var_70_int >= var_80_int; // 0x66a GE
	if(var_81_bool == 0) goto Label_1650; // 0x66b JumpB
	var_82_int = 12; // 0x66c PushI
	var_83_int = var_70_int - var_82_int; // 0x66d Sub
	var_84_int = var_74_int - var_83_int; // 0x66e Sub
	var_71_int = var_71_int + var_84_int; // 0x66f Add2
	goto Label_1666; // 0x670 Jump
	
Label_1666:
	var_63_int = var_71_int; // 0x682 Mov
	return 10; // 0x683 Return
	
Label_1650:
	var_85_int = var_74_int; // 0x672 Push
	if(var_85_int == 0) goto Label_1657; // 0x673 JumpB
	var_86_int = 0; var_87_int = 0; // 0x674 PushV
	var_87_int = var_74_int; // 0x675 Mov
	func_1865(var_86_int, var_87_int); // 0x676 NEW_2
	goto Label_1658; // 0x678 Jump
	
Label_1658:
	var_71_int = var_71_int + var_86_int; // 0x67a Add2
	add(var_70_int); // 0x67b ObjFunc
	var_90_int = 0; // 0x67d PushI
	var_73_bool = var_74_int == var_90_int; // 0x67e Eq2
	var_91_int = 0; // 0x67f PushI
	var_72_bool = var_74_int < var_91_int; // 0x680 LT2
	
Label_1665:
	goto Label_1591; // 0x681 Jump
	
Label_1657:
	var_92_int = 1; // 0x679 PushI
	
Label_1605:
	var_93_bool = 0; var_94_float = 0; // 0x645 PushV
	var_94_float = 0.66667; // 0x646 MovF
	func_1873(var_93_bool, var_94_float); // 0x647 NEW_2
	if(var_93_bool == 0) goto Label_1616; // 0x649 JumpB
	var_97_int = 3; // 0x64a PushI
	irand(var_74_int, var_97_int); // 0x64b Func
	var_98_int = 1; // 0x64d PushI
	var_74_int = var_74_int + var_98_int; // 0x64e Add2
	goto Label_1640; // 0x64f Jump
	
Label_1616:
	var_99_bool = 0; // 0x650 PushV
	var_99_bool = 0; // 0x651 MovB
	var_100_bool = var_73_bool == 0; // 0x652 Not
	if(var_100_bool == 0) goto Label_1626; // 0x653 JumpB
	var_101_bool = 0; var_102_float = 0; // 0x654 PushV
	var_102_float = 0.5; // 0x655 MovF
	func_1873(var_101_bool, var_102_float); // 0x656 NEW_2
	if(var_101_bool == 0) goto Label_1626; // 0x658 JumpB
	var_99_bool = 1; // 0x659 MovB
	
Label_1626:
	if(var_99_bool == 0) goto Label_1629; // 0x65a JumpB
	var_74_int = 0; // 0x65b MovI
	goto Label_1640; // 0x65c Jump
	
Label_1629:
	var_103_int = 2; // 0x65d PushI
	irand(var_74_int, var_103_int); // 0x65e Func
	var_104_int = 1; // 0x660 PushI
	var_105_int = var_74_int + var_104_int; // 0x661 Add
	var_74_int = -var_105_int; // 0x662 Neg2
	var_106_int = var_70_int + var_74_int; // 0x663 Add
	var_107_int = 0; // 0x664 PushI
	var_108_bool = var_106_int < var_107_int; // 0x665 LT
	if(var_108_bool == 0) goto Label_1640; // 0x666 JumpB
	goto Label_1665; // 0x667 Jump
}


func_1972(var_313_bool)
{
	var_315_int = 0; var_316_string = ""; // 0x7b5 PushV
	var_316_string = "branch"; // 0x7b6 MovS
	func_1884(var_315_int, var_316_string); // 0x7b7 NEW_2
	var_317_int = 0; // 0x7b9 PushI
	var_318_bool = var_315_int == var_317_int; // 0x7ba Eq
	if(var_318_bool == 0) goto Label_1982; // 0x7bb JumpB
	var_313_bool = 1; // 0x7bc MovB
	return 0; // 0x7bd Return
	
Label_1982:
	var_313_bool = 0; // 0x7be MovB
	return 0; // 0x7bf Return
}


func_438(var_0_object, var_25_int, var_26_object)
{
	var_28_object = Obj(); var_29_bool = 0; var_30_int = 0; var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0; // 0x1b6 PushV
	var_0_object = var_26_object; // 0x1b7 TMov
	var_36_bool = 0; var_37_object = Obj(); var_38_float = 0; // 0x1b8 PushV
	var_37_object = var_26_object; // 0x1b9 Mov
	var_38_float = 70.0; // 0x1ba MovF
	func_1702(var_37_object, var_38_float); // 0x1bb NEW_2
	var_82_bool = var_36_bool == 0; // 0x1bd Not
	if(var_82_bool == 0) goto Label_449; // 0x1be JumpB
	var_25_int = -2; // 0x1bf MovI
	return 8; // 0x1c0 Return
	
Label_449:
	CreateDialog(var_32_object); // 0x1c1 Func
	var_83_int = 0; // 0x1c3 PushV
	func_2060(var_83_int); // 0x1c4 NEW_2
	SetNPCName(var_83_int); // 0x1c6 ObjFunc
	var_84_int = 0; // 0x1c8 PushV
	func_2058(var_84_int); // 0x1c9 NEW_2
	SetNPCDescription(var_84_int); // 0x1cb ObjFunc
	var_85_string = ""; // 0x1cd PushV
	func_2062(var_85_string); // 0x1ce NEW_2
	SetPhoto(var_85_string); // 0x1d0 ObjFunc
	var_86_string = ""; // 0x1d2 PushV
	func_2064(var_86_string); // 0x1d3 NEW_2
	SetPhoto2(var_86_string); // 0x1d5 ObjFunc
	var_87_int = 0; // 0x1d7 PushV
	func_2041(var_87_int); // 0x1d8 NEW_2
	SetPlayerName(var_87_int); // 0x1da ObjFunc
	var_34_int = -1; // 0x1dc MovI
	IsOverrideActive(var_33_bool); // 0x1dd Func
	var_95_bool = var_33_bool; // 0x1df Push
	if(var_95_bool == 0) goto Label_483; // 0x1e0 JumpB
	var_25_int = -2; // 0x1e1 MovI
	return 8; // 0x1e2 Return
	
Label_483:
	DoDialog(var_32_object); // 0x1e3 Func
	var_96_object = Obj(); var_97_object = Obj(); // 0x1e5 PushV
	var_96_object = var_26_object; // 0x1e6 Mov
	var_97_object = var_32_object; // 0x1e7 Mov
	TaskCall(5); // 0x1e8 TaskCall
	func_512(var_98_object, var_99_object, var_100_string, var_101_bool, var_96_object, var_97_object); // 0x1e9 NEW_2
	TaskReturn(); // 0x1ea TaskReturn
	IsDialogEnd(var_35_bool); // 0x1ec ObjFunc
	
Label_494:
	var_145_bool = var_35_bool == 0; // 0x1ee Not
	if(var_145_bool == 0) goto Label_501; // 0x1ef JumpB
	sync(); // 0x1f0 Func
	IsDialogEnd(var_35_bool); // 0x1f2 ObjFunc
	goto Label_494; // 0x1f4 Jump
	
Label_501:
	var_146_object = Obj(); // 0x1f5 PushV
	var_146_object = var_26_object; // 0x1f6 Mov
	func_1770(); // 0x1f7 NEW_2
	StopDialog(var_32_object); // 0x1f9 Func
	GetReturnValue(var_34_int); // 0x1fb ObjFunc
	var_25_int = var_34_int; // 0x1fd Mov
	return 8; // 0x1fe Return
}


func_570(var_2_object, var_103_string)
{
	var_104_bool = 0; // 0x23b PushV
	func_2066(var_104_bool); // 0x23c NEW_2
	var_105_bool = var_104_bool == 0; // 0x23e Not
	if(var_105_bool == 0) goto Label_577; // 0x23f JumpB
	return 0; // 0x240 Return
	
Label_577:
	var_106_bool = var_103_string == var_2_object; // 0x241 Eq
	if(var_106_bool == 0) goto Label_580; // 0x242 JumpB
	return 0; // 0x243 Return
	
Label_580:
	var_107_string = ""; var_108_bool = 0; // 0x244 PushV
	var_107_string = var_103_string; // 0x245 Mov
	var_109_string = ""; // 0x246 PushS
	var_110_bool = var_103_string == var_109_string; // 0x247 Eq
	if(var_110_bool == 0) goto Label_587; // 0x248 JumpB
	var_108_bool = 0; // 0x249 MovB
	goto Label_588; // 0x24a Jump
	
Label_588:
	func_1803(var_107_string, var_108_bool); // 0x24c NEW_2
	var_2_object = var_103_string; // 0x24e TMov
	return 0; // 0x24f Return
	
Label_587:
	var_108_bool = 1; // 0x24b MovB
}


func_1855(var_63_cvector, var_64_cvector)
{
	var_66_float = 0; var_67_float = 0; // 0x73f PushV
	var_68_int = var_64_cvector | var_64_cvector; // 0x740 Or
	var_67_float = sqrt(var_68_int); // 0x741 Sqrt2
	var_69_float = 0.0; // 0x742 PushF
	var_70_bool = var_67_float < var_69_float; // 0x743 LT
	if(var_70_bool == 0) goto Label_1863; // 0x744 JumpB
	var_63_cvector = CVector(0.0, 0.0, 0.0); // 0x745 MovV
	return 2; // 0x746 Return
	
Label_1863:
	var_63_cvector = var_64_cvector / var_64_cvector; // 0x747 Div2
	return 2; // 0x748 Return
}


func_1984(var_151_bool)
{
	var_153_int = 0; var_154_string = ""; // 0x7c1 PushV
	var_154_string = "branch"; // 0x7c2 MovS
	func_1884(var_153_int, var_154_string); // 0x7c3 NEW_2
	var_157_int = 1; // 0x7c5 PushI
	var_158_bool = var_153_int == var_157_int; // 0x7c6 Eq
	if(var_158_bool == 0) goto Label_1994; // 0x7c7 JumpB
	var_151_bool = 1; // 0x7c8 MovB
	return 0; // 0x7c9 Return
	
Label_1994:
	var_151_bool = 0; // 0x7ca MovB
	return 0; // 0x7cb Return
}


func_708(var_0_object, var_1_object, var_2_object, var_3_string, var_270_object, var_271_object)
{
	var_0_object = var_271_object; // 0x2c5 TMov
	var_1_object = var_270_object; // 0x2c6 TMov
	var_3_string = 0; // 0x2c7 TMovB
	var_276_int = 1; // 0x2c8 PushI
	if(var_276_int == 0) goto Label_806; // 0x2c9 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0x2ca PushV
	var_278_object = var_1_object; // 0x2cb MovT
	func_2029(var_278_object); // 0x2cc NEW_2
	if(var_277_bool == 0) goto Label_769; // 0x2ce JumpB
	var_283_object = Obj(); var_284_object = Obj(); // 0x2cf PushV
	var_283_object = var_1_object; // 0x2d0 MovT
	var_284_object = var_0_object; // 0x2d1 MovT
	func_1950(); // 0x2d2 NEW_2
	var_287_string = ""; // 0x2d4 PushV
	var_287_string = "Neutral"; // 0x2d5 MovS
	func_836(var_271_object, var_287_string); // 0x2d6 NEW_2
	var_295_int = 520073; // 0x2d8 PushI
	SetMessage(var_295_int); // 0x2d9 TObjFunc
	ClearReplies(); // 0x2db TObjFunc
	var_296_int = 520074; // 0x2dd PushI
	var_297_int = 21255; // 0x2de PushI
	var_298_int = 21254; // 0x2df PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x2e0 TObjFunc
	var_299_bool = 0; var_300_object = Obj(); // 0x2e2 PushV
	var_300_object = var_1_object; // 0x2e3 MovT
	func_1984(var_300_object); // 0x2e4 NEW_2
	if(var_299_bool == 0) goto Label_748; // 0x2e6 JumpB
	var_301_int = 520085; // 0x2e7 PushI
	var_302_int = 21266; // 0x2e8 PushI
	var_303_int = 21265; // 0x2e9 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x2ea TObjFunc
	
Label_748:
	var_304_bool = 0; var_305_object = Obj(); // 0x2ec PushV
	var_305_object = var_1_object; // 0x2ed MovT
	func_1996(var_305_object); // 0x2ee NEW_2
	if(var_304_bool == 0) goto Label_758; // 0x2f0 JumpB
	var_310_int = 541546; // 0x2f1 PushI
	var_311_int = 43710; // 0x2f2 PushI
	var_312_int = 43709; // 0x2f3 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x2f4 TObjFunc
	
Label_758:
	var_313_bool = 0; var_314_object = Obj(); // 0x2f6 PushV
	var_314_object = var_1_object; // 0x2f7 MovT
	func_1972(var_314_object); // 0x2f8 NEW_2
	if(var_313_bool == 0) goto Label_768; // 0x2fa JumpB
	var_319_int = 541549; // 0x2fb PushI
	var_320_int = 21255; // 0x2fc PushI
	var_321_int = 43713; // 0x2fd PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x2fe TObjFunc
	
Label_768:
	goto Label_806; // 0x300 Jump
	
Label_806:
	var_322_bool = 0; // 0x326 PushV
	func_2066(var_322_bool); // 0x327 NEW_2
	if(var_322_bool == 0) goto Label_821; // 0x329 JumpB
	
Label_810:
	lshWaitForAnimEnd(); // 0x32a Func
	var_323_string = var_3_string; // 0x32c PushT
	if(var_323_string == 0) goto Label_815; // 0x32d JumpB
	goto Label_820; // 0x32e Jump
	
Label_820:
	goto Label_835; // 0x334 Jump
	
Label_835:
	return 0; // 0x343 Return
	
Label_815:
	var_324_string = ""; // 0x32f PushV
	var_324_string = var_2_object; // 0x330 MovT
	func_1787(var_324_string); // 0x331 NEW_2
	goto Label_810; // 0x333 Jump
	
Label_821:
	var_325_string = "all"; // 0x335 PushS
	var_326_string = "idle"; // 0x336 PushS
	PlayAnimation(var_325_string, var_326_string); // 0x337 Func
	
Label_825:
	WaitForAnimEnd(); // 0x339 Func
	var_327_string = var_3_string; // 0x33b PushT
	if(var_327_string == 0) goto Label_830; // 0x33c JumpB
	goto Label_835; // 0x33d Jump
	
Label_830:
	var_328_string = "all"; // 0x33e PushS
	var_329_string = "idle"; // 0x33f PushS
	PlayAnimation(var_328_string, var_329_string); // 0x340 Func
	goto Label_825; // 0x342 Jump
	
Label_769:
	var_330_string = ""; // 0x301 PushV
	var_330_string = "Neutral"; // 0x302 MovS
	func_836(var_271_object, var_330_string); // 0x303 NEW_2
	var_331_int = 520088; // 0x305 PushI
	SetMessage(var_331_int); // 0x306 TObjFunc
	ClearReplies(); // 0x308 TObjFunc
	var_332_bool = 0; var_333_object = Obj(); // 0x30a PushV
	var_333_object = var_1_object; // 0x30b MovT
	func_2008(var_332_bool, var_333_object); // 0x30c NEW_2
	if(var_332_bool == 0) goto Label_788; // 0x30e JumpB
	var_345_int = 520089; // 0x30f PushI
	var_346_int = -1; // 0x310 PushI
	var_347_int = 21270; // 0x311 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x312 TObjFunc
	
Label_788:
	var_348_int = 520090; // 0x314 PushI
	var_349_int = 21272; // 0x315 PushI
	var_350_int = 21271; // 0x316 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x317 TObjFunc
	var_351_int = 520092; // 0x319 PushI
	var_352_int = 21274; // 0x31a PushI
	var_353_int = 21273; // 0x31b PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x31c TObjFunc
	var_354_int = 520095; // 0x31e PushI
	var_355_int = -1; // 0x31f PushI
	var_356_int = 21277; // 0x320 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x321 TObjFunc
	goto Label_806; // 0x323 Jump
}


func_836(var_2_object, var_287_string)
{
	var_288_bool = 0; // 0x345 PushV
	func_2066(var_288_bool); // 0x346 NEW_2
	var_289_bool = var_288_bool == 0; // 0x348 Not
	if(var_289_bool == 0) goto Label_843; // 0x349 JumpB
	return 0; // 0x34a Return
	
Label_843:
	var_290_bool = var_287_string == var_2_object; // 0x34b Eq
	if(var_290_bool == 0) goto Label_846; // 0x34c JumpB
	return 0; // 0x34d Return
	
Label_846:
	var_291_string = ""; var_292_bool = 0; // 0x34e PushV
	var_291_string = var_287_string; // 0x34f Mov
	var_293_string = ""; // 0x350 PushS
	var_294_bool = var_287_string == var_293_string; // 0x351 Eq
	if(var_294_bool == 0) goto Label_853; // 0x352 JumpB
	var_292_bool = 0; // 0x353 MovB
	goto Label_854; // 0x354 Jump
	
Label_854:
	func_1803(var_291_string, var_292_bool); // 0x356 NEW_2
	var_2_object = var_287_string; // 0x358 TMov
	return 0; // 0x359 Return
	
Label_853:
	var_292_bool = 1; // 0x355 MovB
}


func_1352(var_37_string, var_38_float)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_object = Obj(); var_47_object = Obj(); var_48_object = Obj(); var_49_object = Obj(); var_50_int = 0; var_51_object = Obj(); var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_object = Obj(); var_59_object = Obj(); var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; // 0x548 PushV
	CreateIntVector(var_51_object); // 0x549 Func
	CreateIntVector(var_52_object); // 0x54b Func
	CreateIntVector(var_53_object); // 0x54d Func
	
Label_1359:
	var_63_int = 0; var_64_object = Obj(); // 0x54f PushV
	var_64_object = var_51_object; // 0x550 Mov
	func_1586(var_64_object); // 0x551 NEW_2
	var_54_int = var_63_int; // 0x552 Mov
	var_109_int = 72; // 0x554 PushI
	var_110_bool = var_54_int > var_109_int; // 0x555 GT
	if(var_110_bool == 0) goto Label_1368; // 0x556 JumpB
	goto Label_1401; // 0x557 Jump
	
Label_1401:
	goto Label_1359; // 0x579 Jump
	
Label_1368:
	var_111_int = 0; var_112_object = Obj(); // 0x558 PushV
	var_112_object = var_52_object; // 0x559 Mov
	func_1586(var_112_object); // 0x55a NEW_2
	var_55_int = var_111_int; // 0x55b Mov
	var_113_int = 72; // 0x55d PushI
	var_114_bool = var_55_int > var_113_int; // 0x55e GT
	if(var_114_bool == 0) goto Label_1377; // 0x55f JumpB
	goto Label_1401; // 0x560 Jump
	
Label_1377:
	var_115_int = 0; var_116_object = Obj(); // 0x561 PushV
	var_116_object = var_53_object; // 0x562 Mov
	func_1586(var_116_object); // 0x563 NEW_2
	var_56_int = var_115_int; // 0x564 Mov
	var_117_int = 72; // 0x566 PushI
	var_118_bool = var_56_int > var_117_int; // 0x567 GT
	if(var_118_bool == 0) goto Label_1386; // 0x568 JumpB
	goto Label_1401; // 0x569 Jump
	
Label_1386:
	var_119_bool = 0; // 0x56a PushV
	var_119_bool = 0; // 0x56b MovB
	var_120_bool = 0; // 0x56c PushV
	var_120_bool = 0; // 0x56d MovB
	var_121_bool = var_54_int != var_55_int; // 0x56e Neq
	if(var_121_bool == 0) goto Label_1395; // 0x56f JumpB
	var_122_bool = var_54_int != var_56_int; // 0x570 Neq
	if(var_122_bool == 0) goto Label_1395; // 0x571 JumpB
	var_120_bool = 1; // 0x572 MovB
	
Label_1395:
	if(var_120_bool == 0) goto Label_1399; // 0x573 JumpB
	var_123_bool = var_55_int != var_56_int; // 0x574 Neq
	if(var_123_bool == 0) goto Label_1399; // 0x575 JumpB
	var_119_bool = 1; // 0x576 MovB
	
Label_1399:
	if(var_119_bool == 0) goto Label_1401; // 0x577 JumpB
	goto Label_1402; // 0x578 Jump
	
Label_1402:
	var_124_bool = 0; var_125_float = 0; // 0x57a PushV
	var_126_float = 0.1; // 0x57b PushF
	var_127_float = 0.4; // 0x57c PushF
	var_128_float = var_38_float * var_127_float; // 0x57d Mult
	var_125_float = var_126_float + var_128_float; // 0x57e Add2
	func_1873(var_124_bool, var_125_float); // 0x57f NEW_2
	if(var_124_bool == 0) goto Label_1421; // 0x581 JumpB
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0; // 0x582 PushV
	var_130_int = var_54_int; // 0x583 Mov
	var_131_int = var_55_int; // 0x584 Mov
	var_132_int = var_56_int; // 0x585 Mov
	func_1825(var_129_int, var_130_int, var_131_int, var_132_int); // 0x586 NEW_2
	var_57_int = var_129_int; // 0x587 Mov
	var_136_string = "winner"; // 0x589 PushS
	Trace(var_136_string); // 0x58a Func
	goto Label_1431; // 0x58c Jump
	
Label_1431:
	var_137_int = 1; // 0x597 PushI
	var_138_bool = var_57_int == var_137_int; // 0x598 Eq
	if(var_138_bool == 0) goto Label_1439; // 0x599 JumpB
	var_58_object = var_51_object; // 0x59a Mov
	var_51_object = var_52_object; // 0x59b Mov
	var_52_object = var_58_object; // 0x59c Mov
	var_58_object = 0; // 0x59d SetNull
	goto Label_1446; // 0x59e Jump
	
Label_1446:
	GetScene(var_60_object); // 0x5a6 Func
	var_139_object = Obj(); var_140_object = Obj(); var_141_string = ""; var_142_string = ""; var_143_string = ""; // 0x5a8 PushV
	var_140_object = var_60_object; // 0x5a9 Mov
	var_141_string = "pt_rat1"; // 0x5aa MovS
	var_142_string = var_37_string; // 0x5ab Mov
	var_143_string = "rat_race.xml"; // 0x5ac MovS
	func_1889(var_139_object, var_140_object, var_141_string, var_142_string, var_143_string); // 0x5ad NEW_2
	var_61_object = var_139_object; // 0x5ae Mov
	var_157_string = "Index"; // 0x5b0 PushS
	var_158_int = 1; // 0x5b1 PushI
	SetScriptProperty(var_157_string, var_158_int); // 0x5b2 ObjFunc
	var_159_string = "Race"; // 0x5b4 PushS
	SetScriptProperty(var_159_string, var_51_object); // 0x5b5 ObjFunc
	var_160_object = Obj(); var_161_object = Obj(); var_162_string = ""; var_163_string = ""; var_164_string = ""; // 0x5b7 PushV
	var_161_object = var_60_object; // 0x5b8 Mov
	var_162_string = "pt_rat2"; // 0x5b9 MovS
	var_163_string = "pers_rat"; // 0x5ba MovS
	var_164_string = "rat_race.xml"; // 0x5bb MovS
	func_1889(var_160_object, var_161_object, var_162_string, var_163_string, var_164_string); // 0x5bc NEW_2
	var_61_object = var_160_object; // 0x5bd Mov
	var_165_string = "Index"; // 0x5bf PushS
	var_166_int = 2; // 0x5c0 PushI
	SetScriptProperty(var_165_string, var_166_int); // 0x5c1 ObjFunc
	var_167_string = "Race"; // 0x5c3 PushS
	SetScriptProperty(var_167_string, var_52_object); // 0x5c4 ObjFunc
	var_168_object = Obj(); var_169_object = Obj(); var_170_string = ""; var_171_string = ""; var_172_string = ""; // 0x5c6 PushV
	var_169_object = var_60_object; // 0x5c7 Mov
	var_170_string = "pt_rat3"; // 0x5c8 MovS
	var_171_string = "pers_rat"; // 0x5c9 MovS
	var_172_string = "rat_race.xml"; // 0x5ca MovS
	func_1889(var_168_object, var_169_object, var_170_string, var_171_string, var_172_string); // 0x5cb NEW_2
	var_61_object = var_168_object; // 0x5cc Mov
	var_173_string = "Index"; // 0x5ce PushS
	var_174_int = 3; // 0x5cf PushI
	SetScriptProperty(var_173_string, var_174_int); // 0x5d0 ObjFunc
	var_175_string = "Race"; // 0x5d2 PushS
	SetScriptProperty(var_175_string, var_53_object); // 0x5d3 ObjFunc
	var_62_int = 0; // 0x5d5 MovI
	
Label_1494:
	var_176_int = 6; // 0x5d6 PushI
	var_177_bool = var_62_int < var_176_int; // 0x5d7 LT
	if(var_177_bool == 0) goto Label_1505; // 0x5d8 JumpB
	var_178_int = 0; var_179_bool = 0; // 0x5d9 PushV
	var_178_int = var_62_int; // 0x5da Mov
	var_179_bool = 1; // 0x5db MovB
	func_1668(var_178_int, var_179_bool); // 0x5dc NEW_2
	var_188_int = 1; // 0x5de PushI
	var_62_int = var_62_int + var_188_int; // 0x5df Add2
	goto Label_1494; // 0x5e0 Jump
	
Label_1505:
	return 24; // 0x5e1 Return
	
Label_1439:
	var_189_int = 2; // 0x59f PushI
	var_190_bool = var_57_int == var_189_int; // 0x5a0 Eq
	if(var_190_bool == 0) goto Label_1446; // 0x5a1 JumpB
	var_59_object = var_51_object; // 0x5a2 Mov
	var_51_object = var_53_object; // 0x5a3 Mov
	var_53_object = var_59_object; // 0x5a4 Mov
	var_59_object = 0; // 0x5a5 SetNull
	
Label_1421:
	var_191_int = 0; var_192_int = 0; var_193_int = 0; var_194_int = 0; // 0x58d PushV
	var_192_int = var_54_int; // 0x58e Mov
	var_193_int = var_55_int; // 0x58f Mov
	var_194_int = var_56_int; // 0x590 Mov
	func_1840(var_191_int, var_192_int, var_193_int, var_194_int); // 0x591 NEW_2
	var_57_int = var_191_int; // 0x592 Mov
	var_198_string = "looser"; // 0x594 PushS
	Trace(var_198_string); // 0x595 Func
}


func_1865(var_86_int, var_87_int)
{
	var_88_int = 0; // 0x74a PushI
	var_89_bool = var_87_int < var_88_int; // 0x74b LT
	if(var_89_bool == 0) goto Label_1871; // 0x74c JumpB
	var_86_int = -var_87_int; // 0x74d Neg2
	goto Label_1872; // 0x74e Jump
	
Label_1872:
	return 0; // 0x750 Return
	
Label_1871:
	var_86_int = var_87_int; // 0x74f Mov
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_217_object, var_218_object)
{
	var_0_object = var_218_object; // 0x4b TMov
	var_1_object = var_217_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_223_int = 1; // 0x4e PushI
	if(var_223_int == 0) goto Label_102; // 0x4f JumpB
	var_224_string = ""; // 0x50 PushV
	var_224_string = "Neutral"; // 0x51 MovS
	func_132(var_218_object, var_224_string); // 0x52 NEW_2
	var_232_int = 520060; // 0x54 PushI
	SetMessage(var_232_int); // 0x55 TObjFunc
	ClearReplies(); // 0x57 TObjFunc
	var_233_int = 520061; // 0x59 PushI
	var_234_int = -1; // 0x5a PushI
	var_235_int = 21241; // 0x5b PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x5c TObjFunc
	var_236_int = 520062; // 0x5e PushI
	var_237_int = -1; // 0x5f PushI
	var_238_int = 21242; // 0x60 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x61 TObjFunc
	goto Label_102; // 0x63 Jump
	
Label_102:
	var_239_bool = 0; // 0x66 PushV
	func_2066(var_239_bool); // 0x67 NEW_2
	if(var_239_bool == 0) goto Label_117; // 0x69 JumpB
	
Label_106:
	lshWaitForAnimEnd(); // 0x6a Func
	var_240_string = var_3_string; // 0x6c PushT
	if(var_240_string == 0) goto Label_111; // 0x6d JumpB
	goto Label_116; // 0x6e Jump
	
Label_116:
	goto Label_131; // 0x74 Jump
	
Label_131:
	return 0; // 0x83 Return
	
Label_111:
	var_241_string = ""; // 0x6f PushV
	var_241_string = var_2_object; // 0x70 MovT
	func_1787(var_241_string); // 0x71 NEW_2
	goto Label_106; // 0x73 Jump
	
Label_117:
	var_242_string = "all"; // 0x75 PushS
	var_243_string = "idle"; // 0x76 PushS
	PlayAnimation(var_242_string, var_243_string); // 0x77 Func
	
Label_121:
	WaitForAnimEnd(); // 0x79 Func
	var_244_string = var_3_string; // 0x7b PushT
	if(var_244_string == 0) goto Label_126; // 0x7c JumpB
	goto Label_131; // 0x7d Jump
	
Label_126:
	var_245_string = "all"; // 0x7e PushS
	var_246_string = "idle"; // 0x7f PushS
	PlayAnimation(var_245_string, var_246_string); // 0x80 Func
	goto Label_121; // 0x82 Jump
}


func_1996(var_304_bool)
{
	var_306_int = 0; var_307_string = ""; // 0x7cd PushV
	var_307_string = "branch"; // 0x7ce MovS
	func_1884(var_306_int, var_307_string); // 0x7cf NEW_2
	var_308_int = 2; // 0x7d1 PushI
	var_309_bool = var_306_int == var_308_int; // 0x7d2 Eq
	if(var_309_bool == 0) goto Label_2006; // 0x7d3 JumpB
	var_304_bool = 1; // 0x7d4 MovB
	return 0; // 0x7d5 Return
	
Label_2006:
	var_304_bool = 0; // 0x7d6 MovB
	return 0; // 0x7d7 Return
}


func_1873(var_93_bool, var_94_float)
{
	var_95_float = 0; var_96_float = 0; // 0x751 PushV
	rand(var_96_float); // 0x752 Func
	var_93_bool = var_96_float < var_94_float; // 0x754 LT2
	return 2; // 0x755 Return
}


func_1878(var_361_object)
{
	var_362_object = Obj(); var_363_object = Obj(); // 0x756 PushV
	CreateObjectVector(var_363_object); // 0x757 Func
	var_361_object = var_363_object; // 0x759 Mov
	return 2; // 0x75a Return
}


func_2008(var_332_bool, var_333_object)
{
	var_334_bool = 0; // 0x7d9 PushV
	var_334_bool = 1; // 0x7da MovB
	var_335_bool = 0; var_336_object = Obj(); var_337_string = ""; // 0x7db PushV
	var_336_object = var_333_object; // 0x7dc Mov
	var_337_string = "rat"; // 0x7dd MovS
	func_1938(var_336_object, var_337_string); // 0x7de NEW_2
	if(var_335_bool == 0) goto Label_2024; // 0x7e0 JumpB
	var_342_bool = 0; var_343_object = Obj(); var_344_string = ""; // 0x7e1 PushV
	var_343_object = var_333_object; // 0x7e2 Mov
	var_344_string = "rat_big"; // 0x7e3 MovS
	func_1938(var_343_object, var_344_string); // 0x7e4 NEW_2
	if(var_342_bool == 0) goto Label_2024; // 0x7e6 JumpB
	var_334_bool = 0; // 0x7e7 MovB
	
Label_2024:
	if(var_334_bool == 0) goto Label_2027; // 0x7e8 JumpB
	var_332_bool = 1; // 0x7e9 MovB
	return 0; // 0x7ea Return
	
Label_2027:
	var_332_bool = 0; // 0x7eb MovB
	return 0; // 0x7ec Return
}


func_1884(var_153_int, var_154_string)
{
	var_155_int = 0; var_156_int = 0; // 0x75c PushV
	GetVariable(var_154_string, var_156_int); // 0x75d Func
	var_153_int = var_156_int; // 0x75f Mov
	return 2; // 0x760 Return
}


func_222(var_0_object, var_55_int, var_56_object)
{
	var_58_object = Obj(); var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; // 0xde PushV
	var_0_object = var_56_object; // 0xdf TMov
	var_66_bool = 0; var_67_object = Obj(); var_68_float = 0; // 0xe0 PushV
	var_67_object = var_56_object; // 0xe1 Mov
	var_68_float = 70.0; // 0xe2 MovF
	func_1702(var_67_object, var_68_float); // 0xe3 NEW_2
	var_112_bool = var_66_bool == 0; // 0xe5 Not
	if(var_112_bool == 0) goto Label_233; // 0xe6 JumpB
	var_55_int = -2; // 0xe7 MovI
	return 8; // 0xe8 Return
	
Label_233:
	CreateDialog(var_62_object); // 0xe9 Func
	var_113_int = 0; // 0xeb PushV
	func_2060(var_113_int); // 0xec NEW_2
	SetNPCName(var_113_int); // 0xee ObjFunc
	var_114_int = 0; // 0xf0 PushV
	func_2058(var_114_int); // 0xf1 NEW_2
	SetNPCDescription(var_114_int); // 0xf3 ObjFunc
	var_115_string = ""; // 0xf5 PushV
	func_2062(var_115_string); // 0xf6 NEW_2
	SetPhoto(var_115_string); // 0xf8 ObjFunc
	var_116_string = ""; // 0xfa PushV
	func_2064(var_116_string); // 0xfb NEW_2
	SetPhoto2(var_116_string); // 0xfd ObjFunc
	var_117_int = 0; // 0xff PushV
	func_2041(var_117_int); // 0x100 NEW_2
	SetPlayerName(var_117_int); // 0x102 ObjFunc
	var_64_int = -1; // 0x104 MovI
	IsOverrideActive(var_63_bool); // 0x105 Func
	var_125_bool = var_63_bool; // 0x107 Push
	if(var_125_bool == 0) goto Label_267; // 0x108 JumpB
	var_55_int = -2; // 0x109 MovI
	return 8; // 0x10a Return
	
Label_267:
	DoDialog(var_62_object); // 0x10b Func
	var_126_object = Obj(); var_127_object = Obj(); // 0x10d PushV
	var_126_object = var_56_object; // 0x10e Mov
	var_127_object = var_62_object; // 0x10f Mov
	TaskCall(3); // 0x110 TaskCall
	func_296(var_128_object, var_129_object, var_130_string, var_131_bool, var_126_object, var_127_object); // 0x111 NEW_2
	TaskReturn(); // 0x112 TaskReturn
	IsDialogEnd(var_65_bool); // 0x114 ObjFunc
	
Label_278:
	var_186_bool = var_65_bool == 0; // 0x116 Not
	if(var_186_bool == 0) goto Label_285; // 0x117 JumpB
	sync(); // 0x118 Func
	IsDialogEnd(var_65_bool); // 0x11a ObjFunc
	goto Label_278; // 0x11c Jump
	
Label_285:
	var_187_object = Obj(); // 0x11d PushV
	var_187_object = var_56_object; // 0x11e Mov
	func_1770(); // 0x11f NEW_2
	StopDialog(var_62_object); // 0x121 Func
	GetReturnValue(var_64_int); // 0x123 ObjFunc
	var_55_int = var_64_int; // 0x125 Mov
	return 8; // 0x126 Return
}


func_1889(var_139_object, var_140_object, var_141_string, var_142_string, var_143_string)
{
	var_144_bool = 0; var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_object = Obj(); var_148_bool = 0; var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_object = Obj(); // 0x761 PushV
	GetLocator(var_141_string, var_148_bool, var_149_cvector, var_150_cvector); // 0x762 ObjFunc
	var_152_bool = var_148_bool == 0; // 0x764 Not
	if(var_152_bool == 0) goto Label_1902; // 0x765 JumpB
	var_153_string = "Locator "; // 0x766 PushS
	var_154_int = var_153_string + var_141_string; // 0x767 Add
	var_155_string = " doesn't exist"; // 0x768 PushS
	var_156_int = var_154_int + var_155_string; // 0x769 Add
	Trace(var_156_int); // 0x76a Func
	var_151_object = 0; // 0x76c SetNull
	goto Label_1904; // 0x76d Jump
	
Label_1904:
	var_139_object = var_151_object; // 0x770 Mov
	return 8; // 0x771 Return
	
Label_1902:
	AddActor(var_151_object, var_142_string, var_140_object, var_149_cvector, var_150_cvector, var_143_string); // 0x76e Func
}


func_1770()
{
	var_147_bool = 0; var_148_bool = 0; // 0x6ea PushV
	CameraSwitchToNormal(); // 0x6eb Func
	var_149_bool = 0; // 0x6ed PushV
	func_2066(var_149_bool); // 0x6ee NEW_2
	if(var_149_bool == 0) goto Label_1778; // 0x6f0 JumpB
	goto Label_1786; // 0x6f1 Jump
	
Label_1786:
	return 2; // 0x6fa Return
	
Label_1778:
	var_150_string = "head"; // 0x6f2 PushS
	HasAnimationTrack(var_148_bool, var_150_string); // 0x6f3 Func
	var_151_bool = var_148_bool; // 0x6f5 Push
	if(var_151_bool == 0) goto Label_1786; // 0x6f6 JumpB
	var_152_string = "head"; // 0x6f7 PushS
	UnlookAsync(var_152_string); // 0x6f8 Func
}


func_364(var_2_object, var_133_string)
{
	var_134_bool = 0; // 0x16d PushV
	func_2066(var_134_bool); // 0x16e NEW_2
	var_135_bool = var_134_bool == 0; // 0x170 Not
	if(var_135_bool == 0) goto Label_371; // 0x171 JumpB
	return 0; // 0x172 Return
	
Label_371:
	var_136_bool = var_133_string == var_2_object; // 0x173 Eq
	if(var_136_bool == 0) goto Label_374; // 0x174 JumpB
	return 0; // 0x175 Return
	
Label_374:
	var_137_string = ""; var_138_bool = 0; // 0x176 PushV
	var_137_string = var_133_string; // 0x177 Mov
	var_139_string = ""; // 0x178 PushS
	var_140_bool = var_133_string == var_139_string; // 0x179 Eq
	if(var_140_bool == 0) goto Label_381; // 0x17a JumpB
	var_138_bool = 0; // 0x17b MovB
	goto Label_382; // 0x17c Jump
	
Label_382:
	func_1803(var_137_string, var_138_bool); // 0x17e NEW_2
	var_2_object = var_133_string; // 0x180 TMov
	return 0; // 0x181 Return
	
Label_381:
	var_138_bool = 1; // 0x17d MovB
}


func_2029(var_277_bool)
{
	var_279_int = 0; var_280_string = ""; // 0x7ee PushV
	var_280_string = "ooRatsManager1"; // 0x7ef MovS
	func_1884(var_279_int, var_280_string); // 0x7f0 NEW_2
	var_281_int = 0; // 0x7f2 PushI
	var_282_bool = var_279_int == var_281_int; // 0x7f3 Eq
	if(var_282_bool == 0) goto Label_2039; // 0x7f4 JumpB
	var_277_bool = 1; // 0x7f5 MovB
	return 0; // 0x7f6 Return
	
Label_2039:
	var_277_bool = 0; // 0x7f7 MovB
	return 0; // 0x7f8 Return
}


func_1907(var_46_int, var_47_int)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x773 PushV
	CreateIntVector(var_49_object); // 0x774 Func
	add(var_46_int); // 0x776 ObjFunc
	add(var_47_int); // 0x778 ObjFunc
	var_50_int = 3; // 0x77a PushI
	SendWorldWndMessage(var_50_int, var_49_object); // 0x77b Func
	return 2; // 0x77d Return
}


func_2041(var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x7f9 PushV
	var_90_string = "branch"; // 0x7fa PushS
	GetVariable(var_90_string, var_89_int); // 0x7fb Func
	var_91_int = 0; // 0x7fd PushI
	var_92_bool = var_89_int == var_91_int; // 0x7fe Eq
	if(var_92_bool == 0) goto Label_2051; // 0x7ff JumpB
	var_87_int = 1; // 0x800 MovI
	return 2; // 0x801 Return
	
Label_2051:
	var_93_int = 1; // 0x803 PushI
	var_94_bool = var_89_int == var_93_int; // 0x804 Eq
	if(var_94_bool == 0) goto Label_2056; // 0x805 JumpB
	var_87_int = 2; // 0x806 MovI
	return 2; // 0x807 Return
	
Label_2056:
	var_87_int = 3; // 0x808 MovI
	return 2; // 0x809 Return
}


func_634(var_0_object, var_249_int, var_250_object)
{
	var_252_object = Obj(); var_253_bool = 0; var_254_int = 0; var_255_bool = 0; var_256_object = Obj(); var_257_bool = 0; var_258_int = 0; var_259_bool = 0; // 0x27a PushV
	var_0_object = var_250_object; // 0x27b TMov
	var_260_bool = 0; var_261_object = Obj(); var_262_float = 0; // 0x27c PushV
	var_261_object = var_250_object; // 0x27d Mov
	var_262_float = 70.0; // 0x27e MovF
	func_1702(var_261_object, var_262_float); // 0x27f NEW_2
	var_263_bool = var_260_bool == 0; // 0x281 Not
	if(var_263_bool == 0) goto Label_645; // 0x282 JumpB
	var_249_int = -2; // 0x283 MovI
	return 8; // 0x284 Return
	
Label_645:
	CreateDialog(var_256_object); // 0x285 Func
	var_264_int = 0; // 0x287 PushV
	func_2060(var_264_int); // 0x288 NEW_2
	SetNPCName(var_264_int); // 0x28a ObjFunc
	var_265_int = 0; // 0x28c PushV
	func_2058(var_265_int); // 0x28d NEW_2
	SetNPCDescription(var_265_int); // 0x28f ObjFunc
	var_266_string = ""; // 0x291 PushV
	func_2062(var_266_string); // 0x292 NEW_2
	SetPhoto(var_266_string); // 0x294 ObjFunc
	var_267_string = ""; // 0x296 PushV
	func_2064(var_267_string); // 0x297 NEW_2
	SetPhoto2(var_267_string); // 0x299 ObjFunc
	var_268_int = 0; // 0x29b PushV
	func_2041(var_268_int); // 0x29c NEW_2
	SetPlayerName(var_268_int); // 0x29e ObjFunc
	var_258_int = -1; // 0x2a0 MovI
	IsOverrideActive(var_257_bool); // 0x2a1 Func
	var_269_bool = var_257_bool; // 0x2a3 Push
	if(var_269_bool == 0) goto Label_679; // 0x2a4 JumpB
	var_249_int = -2; // 0x2a5 MovI
	return 8; // 0x2a6 Return
	
Label_679:
	DoDialog(var_256_object); // 0x2a7 Func
	var_270_object = Obj(); var_271_object = Obj(); // 0x2a9 PushV
	var_270_object = var_250_object; // 0x2aa Mov
	var_271_object = var_256_object; // 0x2ab Mov
	TaskCall(7); // 0x2ac TaskCall
	func_708(var_272_object, var_273_object, var_274_string, var_275_bool, var_270_object, var_271_object); // 0x2ad NEW_2
	TaskReturn(); // 0x2ae TaskReturn
	IsDialogEnd(var_259_bool); // 0x2b0 ObjFunc
	
Label_690:
	var_357_bool = var_259_bool == 0; // 0x2b2 Not
	if(var_357_bool == 0) goto Label_697; // 0x2b3 JumpB
	sync(); // 0x2b4 Func
	IsDialogEnd(var_259_bool); // 0x2b6 ObjFunc
	goto Label_690; // 0x2b8 Jump
	
Label_697:
	var_358_object = Obj(); // 0x2b9 PushV
	var_358_object = var_250_object; // 0x2ba Mov
	func_1770(); // 0x2bb NEW_2
	StopDialog(var_256_object); // 0x2bd Func
	GetReturnValue(var_258_int); // 0x2bf ObjFunc
	var_249_int = var_258_int; // 0x2c1 Mov
	return 8; // 0x2c2 Return
}


func_1787(var_129_string)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x6fb PushV
	lshHasAnimation(var_133_bool, var_129_string); // 0x6fc Func
	var_136_bool = var_133_bool; // 0x6fe Push
	if(var_136_bool == 0) goto Label_1798; // 0x6ff JumpB
	lshGetAnimTimes(var_129_string, var_134_float, var_135_float); // 0x700 Func
	var_137_bool = 0; // 0x702 PushB
	lshPlayAnimation(var_134_float, var_135_float, var_137_bool); // 0x703 Func
	goto Label_1802; // 0x705 Jump
	
Label_1802:
	return 6; // 0x70a Return
	
Label_1798:
	var_138_string = "Can't find lsh animation : "; // 0x706 PushS
	var_139_int = var_138_string + var_129_string; // 0x707 Add
	Trace(var_139_int); // 0x708 Func
}


func_1919(var_33_object, var_34_int)
{
	var_35_int = 0; var_36_int = 0; // 0x77f PushV
	var_37_object = Obj(); var_38_string = ""; var_39_int = 0; // 0x780 PushV
	var_37_object = var_33_object; // 0x781 Mov
	var_38_string = "money"; // 0x782 MovS
	var_39_int = var_34_int; // 0x783 Mov
	func_1690(var_38_string, var_39_int); // 0x784 NEW_2
	var_43_int = 0; // 0x786 PushI
	var_44_bool = var_34_int > var_43_int; // 0x787 GT
	if(var_44_bool == 0) goto Label_1937; // 0x788 JumpB
	var_45_string = "Money"; // 0x789 PushS
	GetInvItemByName(var_36_int, var_45_string); // 0x78a Func
	var_46_int = 0; var_47_int = 0; // 0x78c PushV
	var_46_int = var_36_int; // 0x78d Mov
	var_47_int = var_34_int; // 0x78e Mov
	func_1907(var_46_int, var_47_int); // 0x78f NEW_2
	
Label_1937:
	return 2; // 0x791 Return
}


