task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xa2 PushI
	if(var_33_int == 0) goto Label_248; // 0xa3 JumpB
	func_2828(); // 0xa5 NEW_2
	var_35_int = 26830; // 0xa7 PushI
	var_36_bool = var_31_bool == var_35_int; // 0xa8 Eq
	if(var_36_bool == 0) goto Label_190; // 0xa9 JumpB
	var_37_string = ""; // 0xaa PushV
	var_37_string = "Neutral"; // 0xab MovS
	func_139(var_32_cvector, var_37_string); // 0xac NEW_2
	var_54_int = 525474; // 0xae PushI
	SetMessage(var_54_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_55_int = 525475; // 0xb3 PushI
	var_56_int = 27554; // 0xb4 PushI
	var_57_int = 26831; // 0xb5 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xb6 TObjFunc
	var_58_int = 526277; // 0xb8 PushI
	var_59_int = 27557; // 0xb9 PushI
	var_60_int = 27553; // 0xba PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_61_int = 27554; // 0xbe PushI
	var_62_bool = var_31_bool == var_61_int; // 0xbf Eq
	if(var_62_bool == 0) goto Label_213; // 0xc0 JumpB
	var_63_string = ""; // 0xc1 PushV
	var_63_string = "Neutral"; // 0xc2 MovS
	func_139(var_32_cvector, var_63_string); // 0xc3 NEW_2
	var_64_int = 526278; // 0xc5 PushI
	SetMessage(var_64_int); // 0xc6 TObjFunc
	ClearReplies(); // 0xc8 TObjFunc
	var_65_int = 526279; // 0xca PushI
	var_66_int = 27557; // 0xcb PushI
	var_67_int = 27555; // 0xcc PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0xcd TObjFunc
	var_68_int = 526280; // 0xcf PushI
	var_69_int = 27557; // 0xd0 PushI
	var_70_int = 27556; // 0xd1 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0xd2 TObjFunc
	return 0; // 0xd4 Return
	
Label_213:
	var_71_int = 27557; // 0xd5 PushI
	var_72_bool = var_31_bool == var_71_int; // 0xd6 Eq
	if(var_72_bool == 0) goto Label_236; // 0xd7 JumpB
	var_73_string = ""; // 0xd8 PushV
	var_73_string = "Neutral"; // 0xd9 MovS
	func_139(var_32_cvector, var_73_string); // 0xda NEW_2
	var_74_int = 526281; // 0xdc PushI
	SetMessage(var_74_int); // 0xdd TObjFunc
	ClearReplies(); // 0xdf TObjFunc
	var_75_int = 526282; // 0xe1 PushI
	var_76_int = -1; // 0xe2 PushI
	var_77_int = 27560; // 0xe3 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0xe4 TObjFunc
	var_78_int = 526283; // 0xe6 PushI
	var_79_int = -1; // 0xe7 PushI
	var_80_int = 27561; // 0xe8 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0xe9 TObjFunc
	return 0; // 0xeb Return
	
Label_236:
	var_3_string = 1; // 0xec TMovB
	var_81_bool = 0; // 0xed PushV
	func_3002(var_81_bool); // 0xee NEW_2
	if(var_81_bool == 0) goto Label_244; // 0xf0 JumpB
	lshStopAnimation(); // 0xf1 Func
	goto Label_246; // 0xf3 Jump
	
Label_246:
	return 0; // 0xf6 Return
	
Label_244:
	StopAnimation(); // 0xf4 Func
	
Label_248:
	return 0; // 0xf8 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x1b9 PushI
	if(var_33_int == 0) goto Label_629; // 0x1ba JumpB
	func_2828(); // 0x1bc NEW_2
	var_35_int = 27393; // 0x1be PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x1bf Eq
	if(var_36_bool == 0) goto Label_464; // 0x1c0 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x1c1 PushV
	var_37_object = var_1_object; // 0x1c2 MovT
	var_38_object = var_0_object; // 0x1c3 MovT
	func_3010(); // 0x1c4 NEW_2
	var_45_object = Obj(); var_46_object = Obj(); // 0x1c6 PushV
	var_45_object = var_1_object; // 0x1c7 MovT
	var_46_object = var_0_object; // 0x1c8 MovT
	func_3017(); // 0x1c9 NEW_2
	var_73_object = Obj(); var_74_object = Obj(); // 0x1cb PushV
	var_73_object = var_1_object; // 0x1cc MovT
	var_74_object = var_0_object; // 0x1cd MovT
	func_3104(var_74_object); // 0x1ce NEW_2
	
Label_464:
	var_113_int = 27390; // 0x1d0 PushI
	var_114_bool = var_32_cvector == var_113_int; // 0x1d1 Eq
	if(var_114_bool == 0) goto Label_482; // 0x1d2 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x1d3 PushV
	var_115_object = var_1_object; // 0x1d4 MovT
	var_116_object = var_0_object; // 0x1d5 MovT
	func_3010(); // 0x1d6 NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0x1d8 PushV
	var_117_object = var_1_object; // 0x1d9 MovT
	var_118_object = var_0_object; // 0x1da MovT
	func_3017(); // 0x1db NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0x1dd PushV
	var_119_object = var_1_object; // 0x1de MovT
	var_120_object = var_0_object; // 0x1df MovT
	func_3104(var_120_object); // 0x1e0 NEW_2
	
Label_482:
	var_121_int = 27383; // 0x1e2 PushI
	var_122_bool = var_31_bool == var_121_int; // 0x1e3 Eq
	if(var_122_bool == 0) goto Label_535; // 0x1e4 JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x1e5 PushV
	var_124_object = var_1_object; // 0x1e6 MovT
	func_3133(var_124_object); // 0x1e7 NEW_2
	if(var_123_bool == 0) goto Label_515; // 0x1e9 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x1ea PushV
	var_131_object = var_1_object; // 0x1eb MovT
	var_132_object = var_0_object; // 0x1ec MovT
	func_3004(); // 0x1ed NEW_2
	var_135_string = ""; // 0x1ef PushV
	var_135_string = "Menace"; // 0x1f0 MovS
	func_418(var_32_cvector, var_135_string); // 0x1f1 NEW_2
	var_152_int = 526097; // 0x1f3 PushI
	SetMessage(var_152_int); // 0x1f4 TObjFunc
	ClearReplies(); // 0x1f6 TObjFunc
	var_153_int = 526098; // 0x1f8 PushI
	var_154_int = 27386; // 0x1f9 PushI
	var_155_int = 27384; // 0x1fa PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x1fb TObjFunc
	var_156_int = 526099; // 0x1fd PushI
	var_157_int = 27386; // 0x1fe PushI
	var_158_int = 27385; // 0x1ff PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x200 TObjFunc
	return 0; // 0x202 Return
	
Label_515:
	var_159_string = ""; // 0x203 PushV
	var_159_string = "Menace"; // 0x204 MovS
	func_418(var_32_cvector, var_159_string); // 0x205 NEW_2
	var_160_int = 526107; // 0x207 PushI
	SetMessage(var_160_int); // 0x208 TObjFunc
	ClearReplies(); // 0x20a TObjFunc
	var_161_int = 526108; // 0x20c PushI
	var_162_int = -1; // 0x20d PushI
	var_163_int = 27395; // 0x20e PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x20f TObjFunc
	var_164_int = 528917; // 0x211 PushI
	var_165_int = -1; // 0x212 PushI
	var_166_int = 30347; // 0x213 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x214 TObjFunc
	return 0; // 0x216 Return
	
Label_535:
	var_167_int = 27386; // 0x217 PushI
	var_168_bool = var_31_bool == var_167_int; // 0x218 Eq
	if(var_168_bool == 0) goto Label_558; // 0x219 JumpB
	var_169_string = ""; // 0x21a PushV
	var_169_string = "Smile"; // 0x21b MovS
	func_418(var_32_cvector, var_169_string); // 0x21c NEW_2
	var_170_int = 526100; // 0x21e PushI
	SetMessage(var_170_int); // 0x21f TObjFunc
	ClearReplies(); // 0x221 TObjFunc
	var_171_int = 526101; // 0x223 PushI
	var_172_int = 27388; // 0x224 PushI
	var_173_int = 27387; // 0x225 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x226 TObjFunc
	var_174_int = 541281; // 0x228 PushI
	var_175_int = 43414; // 0x229 PushI
	var_176_int = 43413; // 0x22a PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x22b TObjFunc
	return 0; // 0x22d Return
	
Label_558:
	var_177_int = 43414; // 0x22e PushI
	var_178_bool = var_31_bool == var_177_int; // 0x22f Eq
	if(var_178_bool == 0) goto Label_576; // 0x230 JumpB
	var_179_string = ""; // 0x231 PushV
	var_179_string = "Untrust"; // 0x232 MovS
	func_418(var_32_cvector, var_179_string); // 0x233 NEW_2
	var_180_int = 541282; // 0x235 PushI
	SetMessage(var_180_int); // 0x236 TObjFunc
	ClearReplies(); // 0x238 TObjFunc
	var_181_int = 541283; // 0x23a PushI
	var_182_int = 27392; // 0x23b PushI
	var_183_int = 43415; // 0x23c PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x23d TObjFunc
	return 0; // 0x23f Return
	
Label_576:
	var_184_int = 27388; // 0x240 PushI
	var_185_bool = var_31_bool == var_184_int; // 0x241 Eq
	if(var_185_bool == 0) goto Label_599; // 0x242 JumpB
	var_186_string = ""; // 0x243 PushV
	var_186_string = "Sorrow"; // 0x244 MovS
	func_418(var_32_cvector, var_186_string); // 0x245 NEW_2
	var_187_int = 526102; // 0x247 PushI
	SetMessage(var_187_int); // 0x248 TObjFunc
	ClearReplies(); // 0x24a TObjFunc
	var_188_int = 526103; // 0x24c PushI
	var_189_int = 27392; // 0x24d PushI
	var_190_int = 27389; // 0x24e PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x24f TObjFunc
	var_191_int = 526104; // 0x251 PushI
	var_192_int = -1; // 0x252 PushI
	var_193_int = 27390; // 0x253 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x254 TObjFunc
	return 0; // 0x256 Return
	
Label_599:
	var_194_int = 27392; // 0x257 PushI
	var_195_bool = var_31_bool == var_194_int; // 0x258 Eq
	if(var_195_bool == 0) goto Label_617; // 0x259 JumpB
	var_196_string = ""; // 0x25a PushV
	var_196_string = "Smile"; // 0x25b MovS
	func_418(var_32_cvector, var_196_string); // 0x25c NEW_2
	var_197_int = 526105; // 0x25e PushI
	SetMessage(var_197_int); // 0x25f TObjFunc
	ClearReplies(); // 0x261 TObjFunc
	var_198_int = 526106; // 0x263 PushI
	var_199_int = -1; // 0x264 PushI
	var_200_int = 27393; // 0x265 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x266 TObjFunc
	return 0; // 0x268 Return
	
Label_617:
	var_3_string = 1; // 0x269 TMovB
	var_201_bool = 0; // 0x26a PushV
	func_3002(var_201_bool); // 0x26b NEW_2
	if(var_201_bool == 0) goto Label_625; // 0x26d JumpB
	lshStopAnimation(); // 0x26e Func
	goto Label_627; // 0x270 Jump
	
Label_627:
	return 0; // 0x273 Return
	
Label_625:
	StopAnimation(); // 0x271 Func
	
Label_629:
	return 0; // 0x275 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x33a PushI
	if(var_33_int == 0) goto Label_954; // 0x33b JumpB
	func_2828(); // 0x33d NEW_2
	var_35_int = 27398; // 0x33f PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x340 Eq
	if(var_36_bool == 0) goto Label_844; // 0x341 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x342 PushV
	var_37_object = var_1_object; // 0x343 MovT
	var_38_object = var_0_object; // 0x344 MovT
	func_3033(var_38_object); // 0x345 NEW_2
	var_58_object = Obj(); var_59_object = Obj(); // 0x347 PushV
	var_58_object = var_1_object; // 0x348 MovT
	var_59_object = var_0_object; // 0x349 MovT
	func_3043(); // 0x34a NEW_2
	
Label_844:
	var_62_int = 27397; // 0x34c PushI
	var_63_bool = var_31_bool == var_62_int; // 0x34d Eq
	if(var_63_bool == 0) goto Label_901; // 0x34e JumpB
	var_64_bool = 0; // 0x34f PushV
	var_64_bool = 0; // 0x350 MovB
	var_65_bool = 0; var_66_object = Obj(); // 0x351 PushV
	var_66_object = var_1_object; // 0x352 MovT
	func_3145(var_66_object); // 0x353 NEW_2
	if(var_65_bool == 0) goto Label_860; // 0x355 JumpB
	var_73_bool = 0; var_74_object = Obj(); // 0x356 PushV
	var_74_object = var_1_object; // 0x357 MovT
	func_3157(var_74_object); // 0x358 NEW_2
	if(var_73_bool == 0) goto Label_860; // 0x35a JumpB
	var_64_bool = 1; // 0x35b MovB
	
Label_860:
	if(var_64_bool == 0) goto Label_886; // 0x35c JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x35d PushV
	var_79_object = var_1_object; // 0x35e MovT
	var_80_object = var_0_object; // 0x35f MovT
	func_3027(); // 0x360 NEW_2
	var_83_string = ""; // 0x362 PushV
	var_83_string = "Neutral"; // 0x363 MovS
	func_803(var_32_cvector, var_83_string); // 0x364 NEW_2
	var_100_int = 526118; // 0x366 PushI
	SetMessage(var_100_int); // 0x367 TObjFunc
	ClearReplies(); // 0x369 TObjFunc
	var_101_int = 528252; // 0x36b PushI
	var_102_int = 29614; // 0x36c PushI
	var_103_int = 29613; // 0x36d PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x36e TObjFunc
	var_104_int = 528256; // 0x370 PushI
	var_105_int = 29614; // 0x371 PushI
	var_106_int = 29617; // 0x372 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x373 TObjFunc
	return 0; // 0x375 Return
	
Label_886:
	var_107_string = ""; // 0x376 PushV
	var_107_string = "Sorrow"; // 0x377 MovS
	func_803(var_32_cvector, var_107_string); // 0x378 NEW_2
	var_108_int = 526120; // 0x37a PushI
	SetMessage(var_108_int); // 0x37b TObjFunc
	ClearReplies(); // 0x37d TObjFunc
	var_109_int = 526121; // 0x37f PushI
	var_110_int = -1; // 0x380 PushI
	var_111_int = 27400; // 0x381 PushI
	AddReply(var_109_int, var_110_int, var_111_int); // 0x382 TObjFunc
	return 0; // 0x384 Return
	
Label_901:
	var_112_int = 29614; // 0x385 PushI
	var_113_bool = var_31_bool == var_112_int; // 0x386 Eq
	if(var_113_bool == 0) goto Label_924; // 0x387 JumpB
	var_114_string = ""; // 0x388 PushV
	var_114_string = "Smile"; // 0x389 MovS
	func_803(var_32_cvector, var_114_string); // 0x38a NEW_2
	var_115_int = 528253; // 0x38c PushI
	SetMessage(var_115_int); // 0x38d TObjFunc
	ClearReplies(); // 0x38f TObjFunc
	var_116_int = 528254; // 0x391 PushI
	var_117_int = 29616; // 0x392 PushI
	var_118_int = 29615; // 0x393 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x394 TObjFunc
	var_119_int = 528257; // 0x396 PushI
	var_120_int = 29616; // 0x397 PushI
	var_121_int = 29619; // 0x398 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x399 TObjFunc
	return 0; // 0x39b Return
	
Label_924:
	var_122_int = 29616; // 0x39c PushI
	var_123_bool = var_31_bool == var_122_int; // 0x39d Eq
	if(var_123_bool == 0) goto Label_942; // 0x39e JumpB
	var_124_string = ""; // 0x39f PushV
	var_124_string = "Sorrow"; // 0x3a0 MovS
	func_803(var_32_cvector, var_124_string); // 0x3a1 NEW_2
	var_125_int = 528255; // 0x3a3 PushI
	SetMessage(var_125_int); // 0x3a4 TObjFunc
	ClearReplies(); // 0x3a6 TObjFunc
	var_126_int = 526119; // 0x3a8 PushI
	var_127_int = -1; // 0x3a9 PushI
	var_128_int = 27398; // 0x3aa PushI
	AddReply(var_126_int, var_127_int, var_128_int); // 0x3ab TObjFunc
	return 0; // 0x3ad Return
	
Label_942:
	var_3_string = 1; // 0x3ae TMovB
	var_129_bool = 0; // 0x3af PushV
	func_3002(var_129_bool); // 0x3b0 NEW_2
	if(var_129_bool == 0) goto Label_950; // 0x3b2 JumpB
	lshStopAnimation(); // 0x3b3 Func
	goto Label_952; // 0x3b5 Jump
	
Label_952:
	return 0; // 0x3b8 Return
	
Label_950:
	StopAnimation(); // 0x3b6 Func
	
Label_954:
	return 0; // 0x3ba Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x4a8 PushI
	if(var_33_int == 0) goto Label_1667; // 0x4a9 JumpB
	func_2828(); // 0x4ab NEW_2
	var_35_int = 41290; // 0x4ad PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x4ae Eq
	if(var_36_bool == 0) goto Label_1205; // 0x4af JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x4b0 PushV
	var_37_object = var_1_object; // 0x4b1 MovT
	var_38_object = var_0_object; // 0x4b2 MovT
	func_3058(); // 0x4b3 NEW_2
	
Label_1205:
	var_70_int = 41293; // 0x4b5 PushI
	var_71_bool = var_32_cvector == var_70_int; // 0x4b6 Eq
	if(var_71_bool == 0) goto Label_1213; // 0x4b7 JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0x4b8 PushV
	var_72_object = var_1_object; // 0x4b9 MovT
	var_73_object = var_0_object; // 0x4ba MovT
	func_3049(); // 0x4bb NEW_2
	
Label_1213:
	var_84_int = 41300; // 0x4bd PushI
	var_85_bool = var_32_cvector == var_84_int; // 0x4be Eq
	if(var_85_bool == 0) goto Label_1221; // 0x4bf JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x4c0 PushV
	var_86_object = var_1_object; // 0x4c1 MovT
	var_87_object = var_0_object; // 0x4c2 MovT
	func_3049(); // 0x4c3 NEW_2
	
Label_1221:
	var_88_int = 41283; // 0x4c5 PushI
	var_89_bool = var_31_bool == var_88_int; // 0x4c6 Eq
	if(var_89_bool == 0) goto Label_1319; // 0x4c7 JumpB
	var_90_bool = 0; // 0x4c8 PushV
	var_90_bool = 0; // 0x4c9 MovB
	var_91_bool = 0; var_92_object = Obj(); // 0x4ca PushV
	var_92_object = var_1_object; // 0x4cb MovT
	func_3111(var_92_object); // 0x4cc NEW_2
	var_97_bool = var_91_bool == 0; // 0x4ce Not
	if(var_97_bool == 0) goto Label_1238; // 0x4cf JumpB
	var_98_bool = 0; var_99_object = Obj(); // 0x4d0 PushV
	var_99_object = var_1_object; // 0x4d1 MovT
	func_3181(var_99_object); // 0x4d2 NEW_2
	if(var_98_bool == 0) goto Label_1238; // 0x4d4 JumpB
	var_90_bool = 1; // 0x4d5 MovB
	
Label_1238:
	if(var_90_bool == 0) goto Label_1269; // 0x4d6 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x4d7 PushV
	var_104_object = var_1_object; // 0x4d8 MovT
	var_105_object = var_0_object; // 0x4d9 MovT
	func_3074(); // 0x4da NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x4dc PushV
	var_108_object = var_1_object; // 0x4dd MovT
	var_109_object = var_0_object; // 0x4de MovT
	func_3098(); // 0x4df NEW_2
	var_112_string = ""; // 0x4e1 PushV
	var_112_string = "Neutral"; // 0x4e2 MovS
	func_1169(var_32_cvector, var_112_string); // 0x4e3 NEW_2
	var_129_int = 539339; // 0x4e5 PushI
	SetMessage(var_129_int); // 0x4e6 TObjFunc
	ClearReplies(); // 0x4e8 TObjFunc
	var_130_int = 539340; // 0x4ea PushI
	var_131_int = 43548; // 0x4eb PushI
	var_132_int = 41284; // 0x4ec PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x4ed TObjFunc
	var_133_int = 542972; // 0x4ef PushI
	var_134_int = 45416; // 0x4f0 PushI
	var_135_int = 45415; // 0x4f1 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x4f2 TObjFunc
	return 0; // 0x4f4 Return
	
Label_1269:
	var_136_object = Obj(); var_137_object = Obj(); // 0x4f5 PushV
	var_136_object = var_1_object; // 0x4f6 MovT
	var_137_object = var_0_object; // 0x4f7 MovT
	func_3098(); // 0x4f8 NEW_2
	var_138_string = ""; // 0x4fa PushV
	var_138_string = "Neutral"; // 0x4fb MovS
	func_1169(var_32_cvector, var_138_string); // 0x4fc NEW_2
	var_139_int = 539352; // 0x4fe PushI
	SetMessage(var_139_int); // 0x4ff TObjFunc
	ClearReplies(); // 0x501 TObjFunc
	var_140_bool = 0; // 0x503 PushV
	var_140_bool = 0; // 0x504 MovB
	var_141_bool = 0; // 0x505 PushV
	var_141_bool = 0; // 0x506 MovB
	var_142_bool = 0; var_143_object = Obj(); // 0x507 PushV
	var_143_object = var_1_object; // 0x508 MovT
	func_3169(var_143_object); // 0x509 NEW_2
	var_148_bool = var_142_bool == 0; // 0x50b Not
	if(var_148_bool == 0) goto Label_1299; // 0x50c JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x50d PushV
	var_150_object = var_1_object; // 0x50e MovT
	func_3123(var_149_bool, var_150_object); // 0x50f NEW_2
	if(var_149_bool == 0) goto Label_1299; // 0x511 JumpB
	var_141_bool = 1; // 0x512 MovB
	
Label_1299:
	if(var_141_bool == 0) goto Label_1307; // 0x513 JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x514 PushV
	var_199_object = var_1_object; // 0x515 MovT
	func_3111(var_199_object); // 0x516 NEW_2
	var_200_bool = var_198_bool == 0; // 0x518 Not
	if(var_200_bool == 0) goto Label_1307; // 0x519 JumpB
	var_140_bool = 1; // 0x51a MovB
	
Label_1307:
	if(var_140_bool == 0) goto Label_1313; // 0x51b JumpB
	var_201_int = 539353; // 0x51c PushI
	var_202_int = 43589; // 0x51d PushI
	var_203_int = 41298; // 0x51e PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x51f TObjFunc
	
Label_1313:
	var_204_int = 539356; // 0x521 PushI
	var_205_int = -1; // 0x522 PushI
	var_206_int = 41301; // 0x523 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x524 TObjFunc
	return 0; // 0x526 Return
	
Label_1319:
	var_207_int = 43589; // 0x527 PushI
	var_208_bool = var_31_bool == var_207_int; // 0x528 Eq
	if(var_208_bool == 0) goto Label_1337; // 0x529 JumpB
	var_209_string = ""; // 0x52a PushV
	var_209_string = "Smile"; // 0x52b MovS
	func_1169(var_32_cvector, var_209_string); // 0x52c NEW_2
	var_210_int = 541433; // 0x52e PushI
	SetMessage(var_210_int); // 0x52f TObjFunc
	ClearReplies(); // 0x531 TObjFunc
	var_211_int = 539355; // 0x533 PushI
	var_212_int = -1; // 0x534 PushI
	var_213_int = 41300; // 0x535 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x536 TObjFunc
	return 0; // 0x538 Return
	
Label_1337:
	var_214_int = 45416; // 0x539 PushI
	var_215_bool = var_31_bool == var_214_int; // 0x53a Eq
	if(var_215_bool == 0) goto Label_1355; // 0x53b JumpB
	var_216_string = ""; // 0x53c PushV
	var_216_string = "Smile"; // 0x53d MovS
	func_1169(var_32_cvector, var_216_string); // 0x53e NEW_2
	var_217_int = 542973; // 0x540 PushI
	SetMessage(var_217_int); // 0x541 TObjFunc
	ClearReplies(); // 0x543 TObjFunc
	var_218_int = 542974; // 0x545 PushI
	var_219_int = 43548; // 0x546 PushI
	var_220_int = 45417; // 0x547 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x548 TObjFunc
	return 0; // 0x54a Return
	
Label_1355:
	var_221_int = 43548; // 0x54b PushI
	var_222_bool = var_31_bool == var_221_int; // 0x54c Eq
	if(var_222_bool == 0) goto Label_1373; // 0x54d JumpB
	var_223_string = ""; // 0x54e PushV
	var_223_string = "Neutral"; // 0x54f MovS
	func_1169(var_32_cvector, var_223_string); // 0x550 NEW_2
	var_224_int = 541394; // 0x552 PushI
	SetMessage(var_224_int); // 0x553 TObjFunc
	ClearReplies(); // 0x555 TObjFunc
	var_225_int = 541395; // 0x557 PushI
	var_226_int = 43550; // 0x558 PushI
	var_227_int = 43549; // 0x559 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x55a TObjFunc
	return 0; // 0x55c Return
	
Label_1373:
	var_228_int = 43550; // 0x55d PushI
	var_229_bool = var_31_bool == var_228_int; // 0x55e Eq
	if(var_229_bool == 0) goto Label_1396; // 0x55f JumpB
	var_230_string = ""; // 0x560 PushV
	var_230_string = "Untrust"; // 0x561 MovS
	func_1169(var_32_cvector, var_230_string); // 0x562 NEW_2
	var_231_int = 541396; // 0x564 PushI
	SetMessage(var_231_int); // 0x565 TObjFunc
	ClearReplies(); // 0x567 TObjFunc
	var_232_int = 541397; // 0x569 PushI
	var_233_int = 43552; // 0x56a PushI
	var_234_int = 43551; // 0x56b PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x56c TObjFunc
	var_235_int = 542975; // 0x56e PushI
	var_236_int = 43554; // 0x56f PushI
	var_237_int = 45419; // 0x570 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x571 TObjFunc
	return 0; // 0x573 Return
	
Label_1396:
	var_238_int = 43552; // 0x574 PushI
	var_239_bool = var_31_bool == var_238_int; // 0x575 Eq
	if(var_239_bool == 0) goto Label_1414; // 0x576 JumpB
	var_240_string = ""; // 0x577 PushV
	var_240_string = "Untrust"; // 0x578 MovS
	func_1169(var_32_cvector, var_240_string); // 0x579 NEW_2
	var_241_int = 541398; // 0x57b PushI
	SetMessage(var_241_int); // 0x57c TObjFunc
	ClearReplies(); // 0x57e TObjFunc
	var_242_int = 541399; // 0x580 PushI
	var_243_int = 45421; // 0x581 PushI
	var_244_int = 43553; // 0x582 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x583 TObjFunc
	return 0; // 0x585 Return
	
Label_1414:
	var_245_int = 45421; // 0x586 PushI
	var_246_bool = var_31_bool == var_245_int; // 0x587 Eq
	if(var_246_bool == 0) goto Label_1437; // 0x588 JumpB
	var_247_string = ""; // 0x589 PushV
	var_247_string = "Untrust"; // 0x58a MovS
	func_1169(var_32_cvector, var_247_string); // 0x58b NEW_2
	var_248_int = 542976; // 0x58d PushI
	SetMessage(var_248_int); // 0x58e TObjFunc
	ClearReplies(); // 0x590 TObjFunc
	var_249_int = 542977; // 0x592 PushI
	var_250_int = 45423; // 0x593 PushI
	var_251_int = 45422; // 0x594 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x595 TObjFunc
	var_252_int = 542984; // 0x597 PushI
	var_253_int = 45428; // 0x598 PushI
	var_254_int = 45429; // 0x599 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x59a TObjFunc
	return 0; // 0x59c Return
	
Label_1437:
	var_255_int = 45423; // 0x59d PushI
	var_256_bool = var_31_bool == var_255_int; // 0x59e Eq
	if(var_256_bool == 0) goto Label_1455; // 0x59f JumpB
	var_257_string = ""; // 0x5a0 PushV
	var_257_string = "Smile"; // 0x5a1 MovS
	func_1169(var_32_cvector, var_257_string); // 0x5a2 NEW_2
	var_258_int = 542978; // 0x5a4 PushI
	SetMessage(var_258_int); // 0x5a5 TObjFunc
	ClearReplies(); // 0x5a7 TObjFunc
	var_259_int = 542979; // 0x5a9 PushI
	var_260_int = 45428; // 0x5aa PushI
	var_261_int = 45424; // 0x5ab PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x5ac TObjFunc
	return 0; // 0x5ae Return
	
Label_1455:
	var_262_int = 45428; // 0x5af PushI
	var_263_bool = var_31_bool == var_262_int; // 0x5b0 Eq
	if(var_263_bool == 0) goto Label_1478; // 0x5b1 JumpB
	var_264_string = ""; // 0x5b2 PushV
	var_264_string = "Smile"; // 0x5b3 MovS
	func_1169(var_32_cvector, var_264_string); // 0x5b4 NEW_2
	var_265_int = 542983; // 0x5b6 PushI
	SetMessage(var_265_int); // 0x5b7 TObjFunc
	ClearReplies(); // 0x5b9 TObjFunc
	var_266_int = 542980; // 0x5bb PushI
	var_267_int = 45426; // 0x5bc PushI
	var_268_int = 45425; // 0x5bd PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x5be TObjFunc
	var_269_int = 542985; // 0x5c0 PushI
	var_270_int = -1; // 0x5c1 PushI
	var_271_int = 45431; // 0x5c2 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x5c3 TObjFunc
	return 0; // 0x5c5 Return
	
Label_1478:
	var_272_int = 45426; // 0x5c6 PushI
	var_273_bool = var_31_bool == var_272_int; // 0x5c7 Eq
	if(var_273_bool == 0) goto Label_1501; // 0x5c8 JumpB
	var_274_string = ""; // 0x5c9 PushV
	var_274_string = "Menace"; // 0x5ca MovS
	func_1169(var_32_cvector, var_274_string); // 0x5cb NEW_2
	var_275_int = 542981; // 0x5cd PushI
	SetMessage(var_275_int); // 0x5ce TObjFunc
	ClearReplies(); // 0x5d0 TObjFunc
	var_276_int = 542982; // 0x5d2 PushI
	var_277_int = 45435; // 0x5d3 PushI
	var_278_int = 45427; // 0x5d4 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x5d5 TObjFunc
	var_279_int = 542986; // 0x5d7 PushI
	var_280_int = 45433; // 0x5d8 PushI
	var_281_int = 45432; // 0x5d9 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x5da TObjFunc
	return 0; // 0x5dc Return
	
Label_1501:
	var_282_int = 45433; // 0x5dd PushI
	var_283_bool = var_31_bool == var_282_int; // 0x5de Eq
	if(var_283_bool == 0) goto Label_1519; // 0x5df JumpB
	var_284_string = ""; // 0x5e0 PushV
	var_284_string = "Neutral"; // 0x5e1 MovS
	func_1169(var_32_cvector, var_284_string); // 0x5e2 NEW_2
	var_285_int = 542987; // 0x5e4 PushI
	SetMessage(var_285_int); // 0x5e5 TObjFunc
	ClearReplies(); // 0x5e7 TObjFunc
	var_286_int = 542988; // 0x5e9 PushI
	var_287_int = 45438; // 0x5ea PushI
	var_288_int = 45434; // 0x5eb PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x5ec TObjFunc
	return 0; // 0x5ee Return
	
Label_1519:
	var_289_int = 45438; // 0x5ef PushI
	var_290_bool = var_31_bool == var_289_int; // 0x5f0 Eq
	if(var_290_bool == 0) goto Label_1542; // 0x5f1 JumpB
	var_291_string = ""; // 0x5f2 PushV
	var_291_string = "Neutral"; // 0x5f3 MovS
	func_1169(var_32_cvector, var_291_string); // 0x5f4 NEW_2
	var_292_int = 542992; // 0x5f6 PushI
	SetMessage(var_292_int); // 0x5f7 TObjFunc
	ClearReplies(); // 0x5f9 TObjFunc
	var_293_int = 542993; // 0x5fb PushI
	var_294_int = 43554; // 0x5fc PushI
	var_295_int = 45439; // 0x5fd PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x5fe TObjFunc
	var_296_int = 542994; // 0x600 PushI
	var_297_int = -1; // 0x601 PushI
	var_298_int = 45441; // 0x602 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x603 TObjFunc
	return 0; // 0x605 Return
	
Label_1542:
	var_299_int = 43554; // 0x606 PushI
	var_300_bool = var_31_bool == var_299_int; // 0x607 Eq
	if(var_300_bool == 0) goto Label_1560; // 0x608 JumpB
	var_301_string = ""; // 0x609 PushV
	var_301_string = "Untrust"; // 0x60a MovS
	func_1169(var_32_cvector, var_301_string); // 0x60b NEW_2
	var_302_int = 541400; // 0x60d PushI
	SetMessage(var_302_int); // 0x60e TObjFunc
	ClearReplies(); // 0x610 TObjFunc
	var_303_int = 541401; // 0x612 PushI
	var_304_int = 41289; // 0x613 PushI
	var_305_int = 43555; // 0x614 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x615 TObjFunc
	return 0; // 0x617 Return
	
Label_1560:
	var_306_int = 41289; // 0x618 PushI
	var_307_bool = var_31_bool == var_306_int; // 0x619 Eq
	if(var_307_bool == 0) goto Label_1614; // 0x61a JumpB
	var_308_bool = 0; var_309_object = Obj(); // 0x61b PushV
	var_309_object = var_1_object; // 0x61c MovT
	func_3123(var_308_bool, var_309_object); // 0x61d NEW_2
	var_310_bool = var_308_bool == 0; // 0x61f Not
	if(var_310_bool == 0) goto Label_1589; // 0x620 JumpB
	var_311_string = ""; // 0x621 PushV
	var_311_string = "Untrust"; // 0x622 MovS
	func_1169(var_32_cvector, var_311_string); // 0x623 NEW_2
	var_312_int = 539345; // 0x625 PushI
	SetMessage(var_312_int); // 0x626 TObjFunc
	ClearReplies(); // 0x628 TObjFunc
	var_313_int = 541431; // 0x62a PushI
	var_314_int = 43558; // 0x62b PushI
	var_315_int = 43587; // 0x62c PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x62d TObjFunc
	var_316_int = 541406; // 0x62f PushI
	var_317_int = -1; // 0x630 PushI
	var_318_int = 43560; // 0x631 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x632 TObjFunc
	return 0; // 0x634 Return
	
Label_1589:
	var_319_bool = 0; var_320_object = Obj(); // 0x635 PushV
	var_320_object = var_1_object; // 0x636 MovT
	func_3123(var_319_bool, var_320_object); // 0x637 NEW_2
	if(var_319_bool == 0) goto Label_1614; // 0x639 JumpB
	var_321_string = ""; // 0x63a PushV
	var_321_string = "Neutral"; // 0x63b MovS
	func_1169(var_32_cvector, var_321_string); // 0x63c NEW_2
	var_322_int = 539348; // 0x63e PushI
	SetMessage(var_322_int); // 0x63f TObjFunc
	ClearReplies(); // 0x641 TObjFunc
	var_323_int = 539349; // 0x643 PushI
	var_324_int = -1; // 0x644 PushI
	var_325_int = 41293; // 0x645 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x646 TObjFunc
	var_326_int = 539350; // 0x648 PushI
	var_327_int = -1; // 0x649 PushI
	var_328_int = 41294; // 0x64a PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x64b TObjFunc
	return 0; // 0x64d Return
	
Label_1614:
	var_329_int = 43558; // 0x64e PushI
	var_330_bool = var_31_bool == var_329_int; // 0x64f Eq
	if(var_330_bool == 0) goto Label_1632; // 0x650 JumpB
	var_331_string = ""; // 0x651 PushV
	var_331_string = "Neutral"; // 0x652 MovS
	func_1169(var_32_cvector, var_331_string); // 0x653 NEW_2
	var_332_int = 541404; // 0x655 PushI
	SetMessage(var_332_int); // 0x656 TObjFunc
	ClearReplies(); // 0x658 TObjFunc
	var_333_int = 539346; // 0x65a PushI
	var_334_int = -1; // 0x65b PushI
	var_335_int = 41290; // 0x65c PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x65d TObjFunc
	return 0; // 0x65f Return
	
Label_1632:
	var_336_int = 45435; // 0x660 PushI
	var_337_bool = var_31_bool == var_336_int; // 0x661 Eq
	if(var_337_bool == 0) goto Label_1655; // 0x662 JumpB
	var_338_string = ""; // 0x663 PushV
	var_338_string = "Neutral"; // 0x664 MovS
	func_1169(var_32_cvector, var_338_string); // 0x665 NEW_2
	var_339_int = 542989; // 0x667 PushI
	SetMessage(var_339_int); // 0x668 TObjFunc
	ClearReplies(); // 0x66a TObjFunc
	var_340_int = 542990; // 0x66c PushI
	var_341_int = 43554; // 0x66d PushI
	var_342_int = 45436; // 0x66e PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x66f TObjFunc
	var_343_int = 542991; // 0x671 PushI
	var_344_int = -1; // 0x672 PushI
	var_345_int = 45437; // 0x673 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x674 TObjFunc
	return 0; // 0x676 Return
	
Label_1655:
	var_3_string = 1; // 0x677 TMovB
	var_346_bool = 0; // 0x678 PushV
	func_3002(var_346_bool); // 0x679 NEW_2
	if(var_346_bool == 0) goto Label_1663; // 0x67b JumpB
	lshStopAnimation(); // 0x67c Func
	goto Label_1665; // 0x67e Jump
	
Label_1665:
	return 0; // 0x681 Return
	
Label_1663:
	StopAnimation(); // 0x67f Func
	
Label_1667:
	return 0; // 0x683 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x730 PushI
	if(var_33_int == 0) goto Label_2026; // 0x731 JumpB
	func_2828(); // 0x733 NEW_2
	var_35_int = 41369; // 0x735 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x736 Eq
	if(var_36_bool == 0) goto Label_1858; // 0x737 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x738 PushV
	var_37_object = var_1_object; // 0x739 MovT
	var_38_object = var_0_object; // 0x73a MovT
	func_3080(); // 0x73b NEW_2
	var_41_object = Obj(); var_42_object = Obj(); // 0x73d PushV
	var_41_object = var_1_object; // 0x73e MovT
	var_42_object = var_0_object; // 0x73f MovT
	func_3086(); // 0x740 NEW_2
	
Label_1858:
	var_72_int = 42820; // 0x742 PushI
	var_73_bool = var_32_cvector == var_72_int; // 0x743 Eq
	if(var_73_bool == 0) goto Label_1871; // 0x744 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x745 PushV
	var_74_object = var_1_object; // 0x746 MovT
	var_75_object = var_0_object; // 0x747 MovT
	func_3080(); // 0x748 NEW_2
	var_76_object = Obj(); var_77_object = Obj(); // 0x74a PushV
	var_76_object = var_1_object; // 0x74b MovT
	var_77_object = var_0_object; // 0x74c MovT
	func_3086(); // 0x74d NEW_2
	
Label_1871:
	var_78_int = 41366; // 0x74f PushI
	var_79_bool = var_31_bool == var_78_int; // 0x750 Eq
	if(var_79_bool == 0) goto Label_1904; // 0x751 JumpB
	var_80_string = ""; // 0x752 PushV
	var_80_string = "Neutral"; // 0x753 MovS
	func_1817(var_32_cvector, var_80_string); // 0x754 NEW_2
	var_97_int = 539435; // 0x756 PushI
	SetMessage(var_97_int); // 0x757 TObjFunc
	ClearReplies(); // 0x759 TObjFunc
	var_98_bool = 0; var_99_object = Obj(); // 0x75b PushV
	var_99_object = var_1_object; // 0x75c MovT
	func_3193(var_99_object); // 0x75d NEW_2
	if(var_98_bool == 0) goto Label_1893; // 0x75f JumpB
	var_104_int = 539436; // 0x760 PushI
	var_105_int = 42812; // 0x761 PushI
	var_106_int = 41367; // 0x762 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x763 TObjFunc
	
Label_1893:
	var_107_int = 539439; // 0x765 PushI
	var_108_int = -1; // 0x766 PushI
	var_109_int = 41370; // 0x767 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x768 TObjFunc
	var_110_int = 540767; // 0x76a PushI
	var_111_int = -1; // 0x76b PushI
	var_112_int = 42811; // 0x76c PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x76d TObjFunc
	return 0; // 0x76f Return
	
Label_1904:
	var_113_int = 42812; // 0x770 PushI
	var_114_bool = var_31_bool == var_113_int; // 0x771 Eq
	if(var_114_bool == 0) goto Label_1927; // 0x772 JumpB
	var_115_string = ""; // 0x773 PushV
	var_115_string = "Untrust"; // 0x774 MovS
	func_1817(var_32_cvector, var_115_string); // 0x775 NEW_2
	var_116_int = 540768; // 0x777 PushI
	SetMessage(var_116_int); // 0x778 TObjFunc
	ClearReplies(); // 0x77a TObjFunc
	var_117_int = 540769; // 0x77c PushI
	var_118_int = 42814; // 0x77d PushI
	var_119_int = 42813; // 0x77e PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x77f TObjFunc
	var_120_int = 540772; // 0x781 PushI
	var_121_int = 42817; // 0x782 PushI
	var_122_int = 42816; // 0x783 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x784 TObjFunc
	return 0; // 0x786 Return
	
Label_1927:
	var_123_int = 42817; // 0x787 PushI
	var_124_bool = var_31_bool == var_123_int; // 0x788 Eq
	if(var_124_bool == 0) goto Label_1945; // 0x789 JumpB
	var_125_string = ""; // 0x78a PushV
	var_125_string = "Neutral"; // 0x78b MovS
	func_1817(var_32_cvector, var_125_string); // 0x78c NEW_2
	var_126_int = 540773; // 0x78e PushI
	SetMessage(var_126_int); // 0x78f TObjFunc
	ClearReplies(); // 0x791 TObjFunc
	var_127_int = 540774; // 0x793 PushI
	var_128_int = 41368; // 0x794 PushI
	var_129_int = 42818; // 0x795 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x796 TObjFunc
	return 0; // 0x798 Return
	
Label_1945:
	var_130_int = 42814; // 0x799 PushI
	var_131_bool = var_31_bool == var_130_int; // 0x79a Eq
	if(var_131_bool == 0) goto Label_1968; // 0x79b JumpB
	var_132_string = ""; // 0x79c PushV
	var_132_string = "Smile"; // 0x79d MovS
	func_1817(var_32_cvector, var_132_string); // 0x79e NEW_2
	var_133_int = 540770; // 0x7a0 PushI
	SetMessage(var_133_int); // 0x7a1 TObjFunc
	ClearReplies(); // 0x7a3 TObjFunc
	var_134_int = 540771; // 0x7a5 PushI
	var_135_int = 42823; // 0x7a6 PushI
	var_136_int = 42815; // 0x7a7 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x7a8 TObjFunc
	var_137_int = 540776; // 0x7aa PushI
	var_138_int = 41368; // 0x7ab PushI
	var_139_int = 42821; // 0x7ac PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x7ad TObjFunc
	return 0; // 0x7af Return
	
Label_1968:
	var_140_int = 42823; // 0x7b0 PushI
	var_141_bool = var_31_bool == var_140_int; // 0x7b1 Eq
	if(var_141_bool == 0) goto Label_1991; // 0x7b2 JumpB
	var_142_string = ""; // 0x7b3 PushV
	var_142_string = "Smile"; // 0x7b4 MovS
	func_1817(var_32_cvector, var_142_string); // 0x7b5 NEW_2
	var_143_int = 540777; // 0x7b7 PushI
	SetMessage(var_143_int); // 0x7b8 TObjFunc
	ClearReplies(); // 0x7ba TObjFunc
	var_144_int = 540778; // 0x7bc PushI
	var_145_int = 41368; // 0x7bd PushI
	var_146_int = 42824; // 0x7be PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x7bf TObjFunc
	var_147_int = 540779; // 0x7c1 PushI
	var_148_int = -1; // 0x7c2 PushI
	var_149_int = 42825; // 0x7c3 PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x7c4 TObjFunc
	return 0; // 0x7c6 Return
	
Label_1991:
	var_150_int = 41368; // 0x7c7 PushI
	var_151_bool = var_31_bool == var_150_int; // 0x7c8 Eq
	if(var_151_bool == 0) goto Label_2014; // 0x7c9 JumpB
	var_152_string = ""; // 0x7ca PushV
	var_152_string = "Menace"; // 0x7cb MovS
	func_1817(var_32_cvector, var_152_string); // 0x7cc NEW_2
	var_153_int = 539437; // 0x7ce PushI
	SetMessage(var_153_int); // 0x7cf TObjFunc
	ClearReplies(); // 0x7d1 TObjFunc
	var_154_int = 539438; // 0x7d3 PushI
	var_155_int = -1; // 0x7d4 PushI
	var_156_int = 41369; // 0x7d5 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0x7d6 TObjFunc
	var_157_int = 540775; // 0x7d8 PushI
	var_158_int = -1; // 0x7d9 PushI
	var_159_int = 42820; // 0x7da PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x7db TObjFunc
	return 0; // 0x7dd Return
	
Label_2014:
	var_3_string = 1; // 0x7de TMovB
	var_160_bool = 0; // 0x7df PushV
	func_3002(var_160_bool); // 0x7e0 NEW_2
	if(var_160_bool == 0) goto Label_2022; // 0x7e2 JumpB
	lshStopAnimation(); // 0x7e3 Func
	goto Label_2024; // 0x7e5 Jump
	
Label_2024:
	return 0; // 0x7e8 Return
	
Label_2022:
	StopAnimation(); // 0x7e6 Func
	
Label_2026:
	return 0; // 0x7ea Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0x88d PushI
	if(var_33_int == 0) goto Label_2229; // 0x88e JumpB
	func_2828(); // 0x890 NEW_2
	var_35_int = 42554; // 0x892 PushI
	var_36_bool = var_31_int == var_35_int; // 0x893 Eq
	if(var_36_bool == 0) goto Label_2217; // 0x894 JumpB
	var_37_string = ""; // 0x895 PushV
	var_37_string = "Neutral"; // 0x896 MovS
	func_2166(var_32_cvector, var_37_string); // 0x897 NEW_2
	var_54_int = 540545; // 0x899 PushI
	SetMessage(var_54_int); // 0x89a TObjFunc
	ClearReplies(); // 0x89c TObjFunc
	var_55_int = 540546; // 0x89e PushI
	var_56_int = -1; // 0x89f PushI
	var_57_int = 42555; // 0x8a0 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x8a1 TObjFunc
	var_58_int = 540798; // 0x8a3 PushI
	var_59_int = -1; // 0x8a4 PushI
	var_60_int = 42847; // 0x8a5 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x8a6 TObjFunc
	return 0; // 0x8a8 Return
	
Label_2217:
	var_3_string = 1; // 0x8a9 TMovB
	var_61_bool = 0; // 0x8aa PushV
	func_3002(var_61_bool); // 0x8ab NEW_2
	if(var_61_bool == 0) goto Label_2225; // 0x8ad JumpB
	lshStopAnimation(); // 0x8ae Func
	goto Label_2227; // 0x8b0 Jump
	
Label_2227:
	return 0; // 0x8b3 Return
	
Label_2225:
	StopAnimation(); // 0x8b1 Func
	
Label_2229:
	return 0; // 0x8b5 Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0x900 PushI
	var_33_bool = var_31_int == var_32_int; // 0x901 Eq
	if(var_33_bool == 0) goto Label_2340; // 0x902 JumpB
	func_2299(); // 0x904 NEW_2
	var_35_bool = 0; // 0x906 PushV
	var_35_bool = 0; // 0x907 MovB
	var_36_bool = 0; // 0x908 PushV
	func_2554(var_36_bool); // 0x909 NEW_2
	if(var_36_bool == 0) goto Label_2321; // 0x90b JumpB
	var_39_bool = 0; // 0x90c PushV
	func_2268(var_39_bool); // 0x90d NEW_2
	if(var_39_bool == 0) goto Label_2321; // 0x90f JumpB
	var_35_bool = 1; // 0x910 MovB
	
Label_2321:
	if(var_35_bool == 0) goto Label_2334; // 0x911 JumpB
	var_56_bool = 0; // 0x912 PushV
	func_2248(var_56_bool); // 0x913 NEW_2
	if(var_56_bool == 0) goto Label_2333; // 0x915 JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x916 PushV
	var_77_object = Obj(); // 0x917 PushV
	func_2835(var_77_object); // 0x918 NEW_2
	var_76_object = var_77_object; // 0x919 Mov
	func_2702(var_76_object); // 0x91b NEW_2
	
Label_2333:
	goto Label_2340; // 0x91d Jump
	
Label_2340:
	return 0; // 0x924 Return
	
Label_2334:
	func_2263(var_31_int); // 0x91f NEW_2
	func_2290(); // 0x922 NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2481(); // 0x926 NEW_2
	func_2299(); // 0x929 NEW_2
	lshStopSpeech(); // 0x92b Func
	lshStopAnimation(); // 0x92d Func
	StopAsync(); // 0x92f Func
	Hold(); // 0x931 Func
	return 0; // 0x933 Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0x934 Func
	func_2299(); // 0x937 NEW_2
	var_32_string = ""; // 0x939 PushV
	var_32_string = "Neutral"; // 0x93a MovS
	func_2782(var_32_string); // 0x93b NEW_2
	func_2290(); // 0x93e NEW_2
	return 0; // 0x940 Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0x942 Push
	if(var_32_bool == 0) goto Label_2376; // 0x943 JumpB
	func_2290(); // 0x945 NEW_2
	goto Label_2380; // 0x947 Jump
	
Label_2380:
	return 0; // 0x94c Return
	
Label_2376:
	var_38_string = ""; // 0x948 PushV
	var_38_string = "Neutral"; // 0x949 MovS
	func_2782(var_38_string); // 0x94a NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x94d PushV
	IsOverrideActive(var_33_bool); // 0x94e Func
	var_34_bool = var_33_bool == 0; // 0x950 Not
	if(var_34_bool == 0) goto Label_2409; // 0x951 JumpB
	EventDisable(0); // 0x952 EventDisable
	func_2481(); // 0x954 NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0x956 PushV
	var_36_object = var_31_object; // 0x957 Mov
	func_2545(var_36_object); // 0x958 NEW_2
	EventEnable(0); // 0x95a EventEnable
	var_49_object = Obj(); // 0x95b PushV
	var_49_object = var_31_object; // 0x95c Mov
	func_3412(var_49_object); // 0x95d NEW_2
	var_712_string = ""; // 0x95f PushV
	var_712_string = "Neutral"; // 0x960 MovS
	func_2782(var_712_string); // 0x961 NEW_2
	func_2299(); // 0x964 NEW_2
	func_2290(); // 0x967 NEW_2
	
Label_2409:
	return 2; // 0x969 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2234(var_30_cvector); // 0x8b7 NEW_2
	return 0; // 0x8b9 Return
}


func_0(var_0_object, var_54_int, var_55_object)
{
	var_57_object = Obj(); var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; // 0x0 PushV
	var_0_object = var_55_object; // 0x1 TMov
	var_65_bool = 0; var_66_object = Obj(); var_67_float = 0; // 0x2 PushV
	var_66_object = var_55_object; // 0x3 Mov
	var_67_float = 70.0; // 0x4 MovF
	func_2559(var_66_object, var_67_float); // 0x5 NEW_2
	var_111_bool = var_65_bool == 0; // 0x7 Not
	if(var_111_bool == 0) goto Label_11; // 0x8 JumpB
	var_54_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_61_object); // 0xb Func
	var_112_int = 0; // 0xd PushV
	func_2996(var_112_int); // 0xe NEW_2
	SetNPCName(var_112_int); // 0x10 ObjFunc
	var_113_int = 0; // 0x12 PushV
	func_2994(var_113_int); // 0x13 NEW_2
	SetNPCDescription(var_113_int); // 0x15 ObjFunc
	var_114_string = ""; // 0x17 PushV
	func_2998(var_114_string); // 0x18 NEW_2
	SetPhoto(var_114_string); // 0x1a ObjFunc
	var_115_string = ""; // 0x1c PushV
	func_3000(var_115_string); // 0x1d NEW_2
	SetPhoto2(var_115_string); // 0x1f ObjFunc
	var_116_int = 0; // 0x21 PushV
	func_3304(var_116_int); // 0x22 NEW_2
	SetPlayerName(var_116_int); // 0x24 ObjFunc
	var_63_int = -1; // 0x26 MovI
	IsOverrideActive(var_62_bool); // 0x27 Func
	var_124_bool = var_62_bool; // 0x29 Push
	if(var_124_bool == 0) goto Label_45; // 0x2a JumpB
	var_54_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_61_object); // 0x2d Func
	var_125_bool = 0; var_126_object = Obj(); // 0x2f PushV
	var_127_object = Obj(); // 0x30 PushV
	func_2835(var_127_object); // 0x31 NEW_2
	var_126_object = var_127_object; // 0x32 Mov
	func_2644(var_125_bool, var_126_object); // 0x34 NEW_2
	var_220_object = Obj(); var_221_object = Obj(); // 0x36 PushV
	var_220_object = var_55_object; // 0x37 Mov
	var_221_object = var_61_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_222_object, var_223_object, var_224_string, var_225_bool, var_220_object, var_221_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_64_bool); // 0x3d ObjFunc
	
Label_63:
	var_269_bool = var_64_bool == 0; // 0x3f Not
	if(var_269_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_64_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_270_object = Obj(); // 0x46 PushV
	var_270_object = var_55_object; // 0x47 Mov
	func_2627(); // 0x48 NEW_2
	StopDialog(var_61_object); // 0x4a Func
	GetReturnValue(var_63_int); // 0x4c ObjFunc
	var_54_int = var_63_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3074()
{
	var_554_string = "ook12Danko1"; // 0xc03 PushS
	var_555_int = 1; // 0xc04 PushI
	SetVariable(var_554_string, var_555_int); // 0xc05 Func
	return 0; // 0xc07 Return
}


func_3080()
{
	var_39_string = "k5q04"; // 0xc09 PushS
	var_40_int = 3; // 0xc0a PushI
	SetVariable(var_39_string, var_40_int); // 0xc0b Func
	return 0; // 0xc0d Return
}


func_1036(var_0_object, var_1_object, var_2_object, var_3_string, var_531_object, var_532_object)
{
	var_0_object = var_532_object; // 0x40d TMov
	var_1_object = var_531_object; // 0x40e TMov
	var_3_string = 0; // 0x40f TMovB
	var_537_int = 1; // 0x410 PushI
	if(var_537_int == 0) goto Label_1139; // 0x411 JumpB
	var_538_bool = 0; // 0x412 PushV
	var_538_bool = 0; // 0x413 MovB
	var_539_bool = 0; var_540_object = Obj(); // 0x414 PushV
	var_540_object = var_1_object; // 0x415 MovT
	func_3111(var_540_object); // 0x416 NEW_2
	var_545_bool = var_539_bool == 0; // 0x418 Not
	if(var_545_bool == 0) goto Label_1056; // 0x419 JumpB
	var_546_bool = 0; var_547_object = Obj(); // 0x41a PushV
	var_547_object = var_1_object; // 0x41b MovT
	func_3181(var_547_object); // 0x41c NEW_2
	if(var_546_bool == 0) goto Label_1056; // 0x41e JumpB
	var_538_bool = 1; // 0x41f MovB
	
Label_1056:
	if(var_538_bool == 0) goto Label_1087; // 0x420 JumpB
	var_552_object = Obj(); var_553_object = Obj(); // 0x421 PushV
	var_552_object = var_1_object; // 0x422 MovT
	var_553_object = var_0_object; // 0x423 MovT
	func_3074(); // 0x424 NEW_2
	var_556_object = Obj(); var_557_object = Obj(); // 0x426 PushV
	var_556_object = var_1_object; // 0x427 MovT
	var_557_object = var_0_object; // 0x428 MovT
	func_3098(); // 0x429 NEW_2
	var_560_string = ""; // 0x42b PushV
	var_560_string = "Neutral"; // 0x42c MovS
	func_1169(var_532_object, var_560_string); // 0x42d NEW_2
	var_568_int = 539339; // 0x42f PushI
	SetMessage(var_568_int); // 0x430 TObjFunc
	ClearReplies(); // 0x432 TObjFunc
	var_569_int = 539340; // 0x434 PushI
	var_570_int = 43548; // 0x435 PushI
	var_571_int = 41284; // 0x436 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x437 TObjFunc
	var_572_int = 542972; // 0x439 PushI
	var_573_int = 45416; // 0x43a PushI
	var_574_int = 45415; // 0x43b PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x43c TObjFunc
	goto Label_1139; // 0x43e Jump
	
Label_1139:
	var_575_bool = 0; // 0x473 PushV
	func_3002(var_575_bool); // 0x474 NEW_2
	if(var_575_bool == 0) goto Label_1154; // 0x476 JumpB
	
Label_1143:
	lshWaitForAnimEnd(); // 0x477 Func
	var_576_string = var_3_string; // 0x479 PushT
	if(var_576_string == 0) goto Label_1148; // 0x47a JumpB
	goto Label_1153; // 0x47b Jump
	
Label_1153:
	goto Label_1168; // 0x481 Jump
	
Label_1168:
	return 0; // 0x490 Return
	
Label_1148:
	var_577_string = ""; // 0x47c PushV
	var_577_string = var_2_object; // 0x47d MovT
	func_2782(var_577_string); // 0x47e NEW_2
	goto Label_1143; // 0x480 Jump
	
Label_1154:
	var_578_string = "all"; // 0x482 PushS
	var_579_string = "idle"; // 0x483 PushS
	PlayAnimation(var_578_string, var_579_string); // 0x484 Func
	
Label_1158:
	WaitForAnimEnd(); // 0x486 Func
	var_580_string = var_3_string; // 0x488 PushT
	if(var_580_string == 0) goto Label_1163; // 0x489 JumpB
	goto Label_1168; // 0x48a Jump
	
Label_1163:
	var_581_string = "all"; // 0x48b PushS
	var_582_string = "idle"; // 0x48c PushS
	PlayAnimation(var_581_string, var_582_string); // 0x48d Func
	goto Label_1158; // 0x48f Jump
	
Label_1087:
	var_583_object = Obj(); var_584_object = Obj(); // 0x43f PushV
	var_583_object = var_1_object; // 0x440 MovT
	var_584_object = var_0_object; // 0x441 MovT
	func_3098(); // 0x442 NEW_2
	var_585_string = ""; // 0x444 PushV
	var_585_string = "Neutral"; // 0x445 MovS
	func_1169(var_532_object, var_585_string); // 0x446 NEW_2
	var_586_int = 539352; // 0x448 PushI
	SetMessage(var_586_int); // 0x449 TObjFunc
	ClearReplies(); // 0x44b TObjFunc
	var_587_bool = 0; // 0x44d PushV
	var_587_bool = 0; // 0x44e MovB
	var_588_bool = 0; // 0x44f PushV
	var_588_bool = 0; // 0x450 MovB
	var_589_bool = 0; var_590_object = Obj(); // 0x451 PushV
	var_590_object = var_1_object; // 0x452 MovT
	func_3169(var_590_object); // 0x453 NEW_2
	var_595_bool = var_589_bool == 0; // 0x455 Not
	if(var_595_bool == 0) goto Label_1117; // 0x456 JumpB
	var_596_bool = 0; var_597_object = Obj(); // 0x457 PushV
	var_597_object = var_1_object; // 0x458 MovT
	func_3123(var_596_bool, var_597_object); // 0x459 NEW_2
	if(var_596_bool == 0) goto Label_1117; // 0x45b JumpB
	var_588_bool = 1; // 0x45c MovB
	
Label_1117:
	if(var_588_bool == 0) goto Label_1125; // 0x45d JumpB
	var_645_bool = 0; var_646_object = Obj(); // 0x45e PushV
	var_646_object = var_1_object; // 0x45f MovT
	func_3111(var_646_object); // 0x460 NEW_2
	var_647_bool = var_645_bool == 0; // 0x462 Not
	if(var_647_bool == 0) goto Label_1125; // 0x463 JumpB
	var_587_bool = 1; // 0x464 MovB
	
Label_1125:
	if(var_587_bool == 0) goto Label_1131; // 0x465 JumpB
	var_648_int = 539353; // 0x466 PushI
	var_649_int = 43589; // 0x467 PushI
	var_650_int = 41298; // 0x468 PushI
	AddReply(var_648_int, var_649_int, var_650_int); // 0x469 TObjFunc
	
Label_1131:
	var_651_int = 539356; // 0x46b PushI
	var_652_int = -1; // 0x46c PushI
	var_653_int = 41301; // 0x46d PushI
	AddReply(var_651_int, var_652_int, var_653_int); // 0x46e TObjFunc
	goto Label_1139; // 0x470 Jump
}


func_2828()
{
	var_34_bool = 0; // 0xb0c PushV
	func_3002(var_34_bool); // 0xb0d NEW_2
	if(var_34_bool == 0) goto Label_2834; // 0xb0f JumpB
	lshStopSpeech(); // 0xb10 Func
	
Label_2834:
	return 0; // 0xb12 Return
}


func_3086()
{
	var_43_int = 0; var_44_string = ""; // 0xc0f PushV
	var_44_string = "k5q04_bring_water"; // 0xc10 MovS
	func_2862(var_43_int, var_44_string); // 0xc11 NEW_2
	var_47_int = 0; // 0xc13 PushI
	var_48_bool = var_43_int == var_47_int; // 0xc14 Eq
	if(var_48_bool == 0) goto Label_3097; // 0xc15 JumpB
	func_3237(); // 0xc17 NEW_2
	
Label_3097:
	return 0; // 0xc19 Return
}


func_2835(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xb13 PushV
	self(var_129_object); // 0xb14 Func
	var_127_object = var_129_object; // 0xb16 Mov
	return 2; // 0xb17 Return
}


func_1817(var_2_object, var_313_string)
{
	var_314_bool = 0; // 0x71a PushV
	func_3002(var_314_bool); // 0x71b NEW_2
	var_315_bool = var_314_bool == 0; // 0x71d Not
	if(var_315_bool == 0) goto Label_1824; // 0x71e JumpB
	return 0; // 0x71f Return
	
Label_1824:
	var_316_bool = var_313_string == var_2_object; // 0x720 Eq
	if(var_316_bool == 0) goto Label_1827; // 0x721 JumpB
	return 0; // 0x722 Return
	
Label_1827:
	var_317_string = ""; var_318_bool = 0; // 0x723 PushV
	var_317_string = var_313_string; // 0x724 Mov
	var_319_string = ""; // 0x725 PushS
	var_320_bool = var_313_string == var_319_string; // 0x726 Eq
	if(var_320_bool == 0) goto Label_1834; // 0x727 JumpB
	var_318_bool = 0; // 0x728 MovB
	goto Label_1835; // 0x729 Jump
	
Label_1835:
	func_2798(var_317_string, var_318_bool); // 0x72b NEW_2
	var_2_object = var_313_string; // 0x72d TMov
	return 0; // 0x72e Return
	
Label_1834:
	var_318_bool = 1; // 0x72a MovB
}


func_3098()
{
	var_558_string = "k12DankoVisit"; // 0xc1b PushS
	var_559_int = 1; // 0xc1c PushI
	SetVariable(var_558_string, var_559_int); // 0xc1d Func
	return 0; // 0xc1f Return
}


func_2841(var_92_cvector, var_93_cvector)
{
	var_95_float = 0; var_96_float = 0; // 0xb19 PushV
	var_97_int = var_93_cvector | var_93_cvector; // 0xb1a Or
	var_96_float = sqrt(var_97_int); // 0xb1b Sqrt2
	var_98_float = 0.0; // 0xb1c PushF
	var_99_bool = var_96_float < var_98_float; // 0xb1d LT
	if(var_99_bool == 0) goto Label_2849; // 0xb1e JumpB
	var_92_cvector = CVector(0.0, 0.0, 0.0); // 0xb1f MovV
	return 2; // 0xb20 Return
	
Label_2849:
	var_92_cvector = var_93_cvector / var_93_cvector; // 0xb21 Div2
	return 2; // 0xb22 Return
}


func_3354(var_635_bool, var_636_int)
{
	var_637_int = 0; var_638_int = 0; // 0xd1a PushV
	var_639_string = "vol_"; // 0xd1b PushS
	var_640_int = var_639_string + var_636_int; // 0xd1c Add
	GetVariable(var_640_int, var_638_int); // 0xd1d Func
	var_641_int = 4; // 0xd1f PushI
	var_642_int = var_638_int & var_641_int; // 0xd20 And
	var_643_int = 0; // 0xd21 PushI
	var_635_bool = var_642_int != var_643_int; // 0xd22 Neq2
	return 2; // 0xd23 Return
}


func_3104(var_73_object)
{
	var_75_bool = 0; var_76_object = Obj(); var_77_float = 0; // 0xc21 PushV
	var_76_object = var_73_object; // 0xc22 Mov
	var_77_float = 0.3; // 0xc23 MovF
	func_2898(var_75_bool, var_76_object, var_77_float); // 0xc24 NEW_2
	return 0; // 0xc26 Return
}


func_803(var_2_object, var_475_string)
{
	var_476_bool = 0; // 0x324 PushV
	func_3002(var_476_bool); // 0x325 NEW_2
	var_477_bool = var_476_bool == 0; // 0x327 Not
	if(var_477_bool == 0) goto Label_810; // 0x328 JumpB
	return 0; // 0x329 Return
	
Label_810:
	var_478_bool = var_475_string == var_2_object; // 0x32a Eq
	if(var_478_bool == 0) goto Label_813; // 0x32b JumpB
	return 0; // 0x32c Return
	
Label_813:
	var_479_string = ""; var_480_bool = 0; // 0x32d PushV
	var_479_string = var_475_string; // 0x32e Mov
	var_481_string = ""; // 0x32f PushS
	var_482_bool = var_475_string == var_481_string; // 0x330 Eq
	if(var_482_bool == 0) goto Label_820; // 0x331 JumpB
	var_480_bool = 0; // 0x332 MovB
	goto Label_821; // 0x333 Jump
	
Label_821:
	func_2798(var_479_string, var_480_bool); // 0x335 NEW_2
	var_2_object = var_475_string; // 0x337 TMov
	return 0; // 0x338 Return
	
Label_820:
	var_480_bool = 1; // 0x334 MovB
}


func_2851(var_104_float, var_105_float, var_106_float, var_107_float)
{
	var_108_bool = var_105_float < var_106_float; // 0xb24 LT
	if(var_108_bool == 0) goto Label_2856; // 0xb25 JumpB
	var_104_float = var_106_float; // 0xb26 Mov
	return 0; // 0xb27 Return
	
Label_2856:
	var_109_bool = var_105_float > var_107_float; // 0xb28 GT
	if(var_109_bool == 0) goto Label_2860; // 0xb29 JumpB
	var_104_float = var_107_float; // 0xb2a Mov
	return 0; // 0xb2b Return
	
Label_2860:
	var_104_float = var_105_float; // 0xb2c Mov
	return 0; // 0xb2d Return
}


func_3364(var_626_bool, var_627_int)
{
	var_628_int = 0; var_629_int = 0; // 0xd24 PushV
	var_630_string = "vol_"; // 0xd25 PushS
	var_631_int = var_630_string + var_627_int; // 0xd26 Add
	GetVariable(var_631_int, var_629_int); // 0xd27 Func
	var_632_int = 16; // 0xd29 PushI
	var_633_int = var_629_int & var_632_int; // 0xd2a And
	var_634_int = 0; // 0xd2b PushI
	var_626_bool = var_633_int != var_634_int; // 0xd2c Neq2
	return 2; // 0xd2d Return
}


func_3111(var_539_bool)
{
	var_541_int = 0; var_542_string = ""; // 0xc28 PushV
	var_542_string = "game_final"; // 0xc29 MovS
	func_2862(var_541_int, var_542_string); // 0xc2a NEW_2
	var_543_int = 0; // 0xc2c PushI
	var_544_bool = var_541_int != var_543_int; // 0xc2d Neq
	if(var_544_bool == 0) goto Label_3121; // 0xc2e JumpB
	var_539_bool = 1; // 0xc2f MovB
	return 0; // 0xc30 Return
	
Label_3121:
	var_539_bool = 0; // 0xc31 MovB
	return 0; // 0xc32 Return
}


func_2862(var_324_int, var_325_string)
{
	var_326_int = 0; var_327_int = 0; // 0xb2e PushV
	GetVariable(var_325_string, var_327_int); // 0xb2f Func
	var_324_int = var_327_int; // 0xb31 Mov
	return 2; // 0xb32 Return
}


func_3374(var_600_bool)
{
	var_601_object = Obj(); var_602_int = 0; var_603_int = 0; var_604_int = 0; var_605_object = Obj(); var_606_int = 0; var_607_int = 0; var_608_int = 0; // 0xd2e PushV
	CreateIntVector(var_605_object); // 0xd2f Func
	var_609_object = Obj(); var_610_bool = 0; var_611_int = 0; // 0xd31 PushV
	var_609_object = var_605_object; // 0xd32 Mov
	var_610_bool = 0; // 0xd33 MovB
	var_611_int = -1; // 0xd34 MovI
	func_3321(var_610_bool, var_611_int); // 0xd35 NEW_2
	size(var_606_int); // 0xd37 ObjFunc
	var_607_int = 0; // 0xd39 MovI
	
Label_3386:
	var_624_bool = var_607_int < var_606_int; // 0xd3a LT
	if(var_624_bool == 0) goto Label_3409; // 0xd3b JumpB
	get(var_608_int, var_607_int); // 0xd3c ObjFunc
	var_625_bool = 0; // 0xd3e PushV
	var_625_bool = 1; // 0xd3f MovB
	var_626_bool = 0; var_627_int = 0; // 0xd40 PushV
	var_627_int = var_608_int; // 0xd41 Mov
	func_3364(var_626_bool, var_627_int); // 0xd42 NEW_2
	if(var_626_bool == 0) goto Label_3403; // 0xd44 JumpB
	var_635_bool = 0; var_636_int = 0; // 0xd45 PushV
	var_636_int = var_608_int; // 0xd46 Mov
	func_3354(var_635_bool, var_636_int); // 0xd47 NEW_2
	if(var_635_bool == 0) goto Label_3403; // 0xd49 JumpB
	var_625_bool = 0; // 0xd4a MovB
	
Label_3403:
	if(var_625_bool == 0) goto Label_3406; // 0xd4b JumpB
	var_600_bool = 0; // 0xd4c MovB
	return 8; // 0xd4d Return
	
Label_3406:
	var_644_int = 1; // 0xd4e PushI
	var_607_int = var_607_int + var_644_int; // 0xd4f Add2
	goto Label_3386; // 0xd50 Jump
	
Label_3409:
	var_600_bool = 1; // 0xd51 MovB
	return 8; // 0xd52 Return
}


func_3123(var_596_bool, var_597_object)
{
	var_598_bool = 0; var_599_object = Obj(); // 0xc34 PushV
	var_599_object = var_597_object; // 0xc35 Mov
	func_3205(var_599_object); // 0xc36 NEW_2
	if(var_598_bool == 0) goto Label_3131; // 0xc38 JumpB
	var_596_bool = 1; // 0xc39 MovB
	return 0; // 0xc3a Return
	
Label_3131:
	var_596_bool = 0; // 0xc3b MovB
	return 0; // 0xc3c Return
}


func_2867(var_53_int, var_54_int)
{
	var_55_object = Obj(); var_56_object = Obj(); // 0xb33 PushV
	CreateIntVector(var_56_object); // 0xb34 Func
	add(var_53_int); // 0xb36 ObjFunc
	add(var_54_int); // 0xb38 ObjFunc
	var_57_int = 3; // 0xb3a PushI
	SendWorldWndMessage(var_57_int, var_56_object); // 0xb3b Func
	return 2; // 0xb3d Return
}


func_2108(var_0_object, var_1_object, var_2_object, var_3_string, var_680_object, var_681_object)
{
	var_0_object = var_681_object; // 0x83d TMov
	var_1_object = var_680_object; // 0x83e TMov
	var_3_string = 0; // 0x83f TMovB
	var_686_int = 1; // 0x840 PushI
	if(var_686_int == 0) goto Label_2136; // 0x841 JumpB
	var_687_string = ""; // 0x842 PushV
	var_687_string = "Neutral"; // 0x843 MovS
	func_2166(var_681_object, var_687_string); // 0x844 NEW_2
	var_695_int = 540545; // 0x846 PushI
	SetMessage(var_695_int); // 0x847 TObjFunc
	ClearReplies(); // 0x849 TObjFunc
	var_696_int = 540546; // 0x84b PushI
	var_697_int = -1; // 0x84c PushI
	var_698_int = 42555; // 0x84d PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x84e TObjFunc
	var_699_int = 540798; // 0x850 PushI
	var_700_int = -1; // 0x851 PushI
	var_701_int = 42847; // 0x852 PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0x853 TObjFunc
	goto Label_2136; // 0x855 Jump
	
Label_2136:
	var_702_bool = 0; // 0x858 PushV
	func_3002(var_702_bool); // 0x859 NEW_2
	if(var_702_bool == 0) goto Label_2151; // 0x85b JumpB
	
Label_2140:
	lshWaitForAnimEnd(); // 0x85c Func
	var_703_string = var_3_string; // 0x85e PushT
	if(var_703_string == 0) goto Label_2145; // 0x85f JumpB
	goto Label_2150; // 0x860 Jump
	
Label_2150:
	goto Label_2165; // 0x866 Jump
	
Label_2165:
	return 0; // 0x875 Return
	
Label_2145:
	var_704_string = ""; // 0x861 PushV
	var_704_string = var_2_object; // 0x862 MovT
	func_2782(var_704_string); // 0x863 NEW_2
	goto Label_2140; // 0x865 Jump
	
Label_2151:
	var_705_string = "all"; // 0x867 PushS
	var_706_string = "idle"; // 0x868 PushS
	PlayAnimation(var_705_string, var_706_string); // 0x869 Func
	
Label_2155:
	WaitForAnimEnd(); // 0x86b Func
	var_707_string = var_3_string; // 0x86d PushT
	if(var_707_string == 0) goto Label_2160; // 0x86e JumpB
	goto Label_2165; // 0x86f Jump
	
Label_2160:
	var_708_string = "all"; // 0x870 PushS
	var_709_string = "idle"; // 0x871 PushS
	PlayAnimation(var_708_string, var_709_string); // 0x872 Func
	goto Label_2155; // 0x874 Jump
}


func_3133(var_382_bool)
{
	var_384_int = 0; var_385_string = ""; // 0xc3e PushV
	var_385_string = "ook6Danko1"; // 0xc3f MovS
	func_2862(var_384_int, var_385_string); // 0xc40 NEW_2
	var_386_int = 0; // 0xc42 PushI
	var_387_bool = var_384_int == var_386_int; // 0xc43 Eq
	if(var_387_bool == 0) goto Label_3143; // 0xc44 JumpB
	var_382_bool = 1; // 0xc45 MovB
	return 0; // 0xc46 Return
	
Label_3143:
	var_382_bool = 0; // 0xc47 MovB
	return 0; // 0xc48 Return
}


func_2879(var_40_object, var_41_int)
{
	var_42_int = 0; var_43_int = 0; // 0xb3f PushV
	var_44_object = Obj(); var_45_string = ""; var_46_int = 0; // 0xb40 PushV
	var_44_object = var_40_object; // 0xb41 Mov
	var_45_string = "money"; // 0xb42 MovS
	var_46_int = var_41_int; // 0xb43 Mov
	func_2528(var_45_string, var_46_int); // 0xb44 NEW_2
	var_50_int = 0; // 0xb46 PushI
	var_51_bool = var_41_int > var_50_int; // 0xb47 GT
	if(var_51_bool == 0) goto Label_2897; // 0xb48 JumpB
	var_52_string = "Money"; // 0xb49 PushS
	GetInvItemByName(var_43_int, var_52_string); // 0xb4a Func
	var_53_int = 0; var_54_int = 0; // 0xb4c PushV
	var_53_int = var_43_int; // 0xb4d Mov
	var_54_int = var_41_int; // 0xb4e Mov
	func_2867(var_53_int, var_54_int); // 0xb4f NEW_2
	
Label_2897:
	return 2; // 0xb51 Return
}


func_2627()
{
	var_271_bool = 0; var_272_bool = 0; // 0xa43 PushV
	CameraSwitchToNormal(); // 0xa44 Func
	var_273_bool = 0; // 0xa46 PushV
	func_3002(var_273_bool); // 0xa47 NEW_2
	if(var_273_bool == 0) goto Label_2635; // 0xa49 JumpB
	goto Label_2643; // 0xa4a Jump
	
Label_2643:
	return 2; // 0xa53 Return
	
Label_2635:
	var_274_string = "head"; // 0xa4b PushS
	HasAnimationTrack(var_272_bool, var_274_string); // 0xa4c Func
	var_275_bool = var_272_bool; // 0xa4e Push
	if(var_275_bool == 0) goto Label_2643; // 0xa4f JumpB
	var_276_string = "head"; // 0xa50 PushS
	UnlookAsync(var_276_string); // 0xa51 Func
}


func_3145(var_459_bool)
{
	var_461_int = 0; var_462_string = ""; // 0xc4a PushV
	var_462_string = "k7q01"; // 0xc4b MovS
	func_2862(var_461_int, var_462_string); // 0xc4c NEW_2
	var_463_int = 0; // 0xc4e PushI
	var_464_bool = var_461_int == var_463_int; // 0xc4f Eq
	if(var_464_bool == 0) goto Label_3155; // 0xc50 JumpB
	var_459_bool = 1; // 0xc51 MovB
	return 0; // 0xc52 Return
	
Label_3155:
	var_459_bool = 0; // 0xc53 MovB
	return 0; // 0xc54 Return
}


func_330(var_0_object, var_1_object, var_2_object, var_3_string, var_375_object, var_376_object)
{
	var_0_object = var_376_object; // 0x14b TMov
	var_1_object = var_375_object; // 0x14c TMov
	var_3_string = 0; // 0x14d TMovB
	var_381_int = 1; // 0x14e PushI
	if(var_381_int == 0) goto Label_388; // 0x14f JumpB
	var_382_bool = 0; var_383_object = Obj(); // 0x150 PushV
	var_383_object = var_1_object; // 0x151 MovT
	func_3133(var_383_object); // 0x152 NEW_2
	if(var_382_bool == 0) goto Label_366; // 0x154 JumpB
	var_388_object = Obj(); var_389_object = Obj(); // 0x155 PushV
	var_388_object = var_1_object; // 0x156 MovT
	var_389_object = var_0_object; // 0x157 MovT
	func_3004(); // 0x158 NEW_2
	var_392_string = ""; // 0x15a PushV
	var_392_string = "Menace"; // 0x15b MovS
	func_418(var_376_object, var_392_string); // 0x15c NEW_2
	var_400_int = 526097; // 0x15e PushI
	SetMessage(var_400_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_401_int = 526098; // 0x163 PushI
	var_402_int = 27386; // 0x164 PushI
	var_403_int = 27384; // 0x165 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x166 TObjFunc
	var_404_int = 526099; // 0x168 PushI
	var_405_int = 27386; // 0x169 PushI
	var_406_int = 27385; // 0x16a PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x16b TObjFunc
	goto Label_388; // 0x16d Jump
	
Label_388:
	var_407_bool = 0; // 0x184 PushV
	func_3002(var_407_bool); // 0x185 NEW_2
	if(var_407_bool == 0) goto Label_403; // 0x187 JumpB
	
Label_392:
	lshWaitForAnimEnd(); // 0x188 Func
	var_408_string = var_3_string; // 0x18a PushT
	if(var_408_string == 0) goto Label_397; // 0x18b JumpB
	goto Label_402; // 0x18c Jump
	
Label_402:
	goto Label_417; // 0x192 Jump
	
Label_417:
	return 0; // 0x1a1 Return
	
Label_397:
	var_409_string = ""; // 0x18d PushV
	var_409_string = var_2_object; // 0x18e MovT
	func_2782(var_409_string); // 0x18f NEW_2
	goto Label_392; // 0x191 Jump
	
Label_403:
	var_410_string = "all"; // 0x193 PushS
	var_411_string = "idle"; // 0x194 PushS
	PlayAnimation(var_410_string, var_411_string); // 0x195 Func
	
Label_407:
	WaitForAnimEnd(); // 0x197 Func
	var_412_string = var_3_string; // 0x199 PushT
	if(var_412_string == 0) goto Label_412; // 0x19a JumpB
	goto Label_417; // 0x19b Jump
	
Label_412:
	var_413_string = "all"; // 0x19c PushS
	var_414_string = "idle"; // 0x19d PushS
	PlayAnimation(var_413_string, var_414_string); // 0x19e Func
	goto Label_407; // 0x1a0 Jump
	
Label_366:
	var_415_string = ""; // 0x16e PushV
	var_415_string = "Menace"; // 0x16f MovS
	func_418(var_376_object, var_415_string); // 0x170 NEW_2
	var_416_int = 526107; // 0x172 PushI
	SetMessage(var_416_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_417_int = 526108; // 0x177 PushI
	var_418_int = -1; // 0x178 PushI
	var_419_int = 27395; // 0x179 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x17a TObjFunc
	var_420_int = 528917; // 0x17c PushI
	var_421_int = -1; // 0x17d PushI
	var_422_int = 30347; // 0x17e PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x17f TObjFunc
	goto Label_388; // 0x181 Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_220_object, var_221_object)
{
	var_0_object = var_221_object; // 0x52 TMov
	var_1_object = var_220_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_226_int = 1; // 0x55 PushI
	if(var_226_int == 0) goto Label_109; // 0x56 JumpB
	var_227_string = ""; // 0x57 PushV
	var_227_string = "Neutral"; // 0x58 MovS
	func_139(var_221_object, var_227_string); // 0x59 NEW_2
	var_244_int = 525474; // 0x5b PushI
	SetMessage(var_244_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_245_int = 525475; // 0x60 PushI
	var_246_int = 27554; // 0x61 PushI
	var_247_int = 26831; // 0x62 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x63 TObjFunc
	var_248_int = 526277; // 0x65 PushI
	var_249_int = 27557; // 0x66 PushI
	var_250_int = 27553; // 0x67 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_251_bool = 0; // 0x6d PushV
	func_3002(var_251_bool); // 0x6e NEW_2
	if(var_251_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_252_string = var_3_string; // 0x73 PushT
	if(var_252_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_253_string = ""; // 0x76 PushV
	var_253_string = var_2_object; // 0x77 MovT
	func_2782(var_253_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_264_string = "all"; // 0x7c PushS
	var_265_string = "idle"; // 0x7d PushS
	PlayAnimation(var_264_string, var_265_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_266_string = var_3_string; // 0x82 PushT
	if(var_266_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_267_string = "all"; // 0x85 PushS
	var_268_string = "idle"; // 0x86 PushS
	PlayAnimation(var_267_string, var_268_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_2898(var_75_bool, var_76_object, var_77_float)
{
	var_78_bool = var_76_object == 0; // 0xb53 Not
	if(var_78_bool == 0) goto Label_2903; // 0xb54 JumpB
	var_75_bool = 0; // 0xb55 MovB
	return 0; // 0xb56 Return
	
Label_2903:
	var_79_int = 0; // 0xb57 PushI
	var_80_bool = var_77_float > var_79_int; // 0xb58 GT
	if(var_80_bool == 0) goto Label_2910; // 0xb59 JumpB
	var_81_int = 8; // 0xb5a PushI
	SendWorldWndMessage(var_81_int); // 0xb5b Func
	goto Label_2919; // 0xb5d Jump
	
Label_2919:
	var_82_float = 0; // 0xb67 PushV
	var_82_float = var_77_float; // 0xb68 Mov
	func_2933(var_82_float); // 0xb69 NEW_2
	var_86_bool = 0; var_87_object = Obj(); var_88_string = ""; var_89_float = 0; var_90_float = 0; var_91_float = 0; // 0xb6b PushV
	var_87_object = var_76_object; // 0xb6c Mov
	var_88_string = "reputation"; // 0xb6d MovS
	var_89_float = var_77_float; // 0xb6e Mov
	var_90_float = 0; // 0xb6f MovI
	var_91_float = 1; // 0xb70 MovI
	func_2506(var_86_bool, var_87_object, var_88_string, var_89_float, var_90_float, var_91_float); // 0xb71 NEW_2
	var_75_bool = 1; // 0xb73 MovB
	return 0; // 0xb74 Return
	
Label_2910:
	var_110_int = 0; // 0xb5e PushI
	var_111_bool = var_77_float < var_110_int; // 0xb5f LT
	if(var_111_bool == 0) goto Label_2917; // 0xb60 JumpB
	var_112_int = 9; // 0xb61 PushI
	SendWorldWndMessage(var_112_int); // 0xb62 Func
	goto Label_2919; // 0xb64 Jump
	
Label_2917:
	var_75_bool = 0; // 0xb65 MovB
	return 0; // 0xb66 Return
}


func_2644(var_125_bool, var_126_object)
{
	var_130_int = 0; var_131_int = 0; var_132_int = 0; var_133_int = 0; // 0xa54 PushV
	var_134_string = "voice_common"; // 0xa55 PushS
	GetVariable(var_134_string, var_132_int); // 0xa56 Func
	var_135_int = var_132_int; // 0xa58 Push
	if(var_135_int == 0) goto Label_2682; // 0xa59 JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0xa5a PushV
	var_137_object = var_126_object; // 0xa5b Mov
	func_2702(var_137_object); // 0xa5c NEW_2
	var_166_bool = var_136_bool == 0; // 0xa5e Not
	if(var_166_bool == 0) goto Label_2664; // 0xa5f JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0xa60 PushV
	var_168_object = var_126_object; // 0xa61 Mov
	func_2739(var_168_object); // 0xa62 NEW_2
	var_202_bool = var_167_bool == 0; // 0xa64 Not
	if(var_202_bool == 0) goto Label_2664; // 0xa65 JumpB
	var_125_bool = 0; // 0xa66 MovB
	return 4; // 0xa67 Return
	
Label_2664:
	var_203_int = 2; // 0xa68 PushI
	irand(var_133_int, var_203_int); // 0xa69 Func
	var_204_int = var_133_int; // 0xa6b Push
	if(var_204_int == 0) goto Label_2677; // 0xa6c JumpB
	var_205_string = "voice_common"; // 0xa6d PushS
	var_206_int = 1; // 0xa6e PushI
	var_207_int = var_132_int + var_206_int; // 0xa6f Add
	var_208_int = 3; // 0xa70 PushI
	var_209_int = var_207_int / var_208_int; // 0xa71 Mod
	SetVariable(var_205_string, var_209_int); // 0xa72 Func
	goto Label_2681; // 0xa74 Jump
	
Label_2681:
	goto Label_2700; // 0xa79 Jump
	
Label_2700:
	var_125_bool = 1; // 0xa8c MovB
	return 4; // 0xa8d Return
	
Label_2677:
	var_210_string = "voice_common"; // 0xa75 PushS
	var_211_int = 0; // 0xa76 PushI
	SetVariable(var_210_string, var_211_int); // 0xa77 Func
	
Label_2682:
	var_212_bool = 0; var_213_object = Obj(); // 0xa7a PushV
	var_213_object = var_126_object; // 0xa7b Mov
	func_2739(var_213_object); // 0xa7c NEW_2
	var_214_bool = var_212_bool == 0; // 0xa7e Not
	if(var_214_bool == 0) goto Label_2696; // 0xa7f JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0xa80 PushV
	var_216_object = var_126_object; // 0xa81 Mov
	func_2702(var_216_object); // 0xa82 NEW_2
	var_217_bool = var_215_bool == 0; // 0xa84 Not
	if(var_217_bool == 0) goto Label_2696; // 0xa85 JumpB
	var_125_bool = 0; // 0xa86 MovB
	return 4; // 0xa87 Return
	
Label_2696:
	var_218_string = "voice_common"; // 0xa88 PushS
	var_219_int = 1; // 0xa89 PushI
	SetVariable(var_218_string, var_219_int); // 0xa8a Func
}


func_3157(var_465_bool)
{
	var_467_int = 0; var_468_string = ""; // 0xc56 PushV
	var_468_string = "ook7Danko1"; // 0xc57 MovS
	func_2862(var_467_int, var_468_string); // 0xc58 NEW_2
	var_469_int = 0; // 0xc5a PushI
	var_470_bool = var_467_int == var_469_int; // 0xc5b Eq
	if(var_470_bool == 0) goto Label_3167; // 0xc5c JumpB
	var_465_bool = 1; // 0xc5d MovB
	return 0; // 0xc5e Return
	
Label_3167:
	var_465_bool = 0; // 0xc5f MovB
	return 0; // 0xc60 Return
}


func_3412(var_49_object)
{
	var_50_int = 0; var_51_int = 0; // 0xd54 PushV
	var_52_string = "mt_danko"; // 0xd55 PushS
	GetVariable(var_52_string, var_51_int); // 0xd56 Func
	var_53_bool = var_51_int == 0; // 0xd58 Not
	if(var_53_bool == 0) goto Label_3428; // 0xd59 JumpB
	var_54_int = 0; var_55_object = Obj(); // 0xd5a PushV
	var_55_object = var_49_object; // 0xd5b Mov
	TaskCall(0); // 0xd5c TaskCall
	func_0(var_56_object, var_54_int, var_55_object); // 0xd5d NEW_2
	TaskReturn(); // 0xd5e TaskReturn
	var_277_string = "mt_danko"; // 0xd60 PushS
	var_278_int = 1; // 0xd61 PushI
	SetVariable(var_277_string, var_278_int); // 0xd62 Func
	
Label_3428:
	var_279_bool = 0; var_280_int = 0; // 0xd64 PushV
	var_280_int = 5; // 0xd65 MovI
	func_2964(var_279_bool, var_280_int); // 0xd66 NEW_2
	if(var_279_bool == 0) goto Label_3440; // 0xd68 JumpB
	var_282_int = 0; var_283_object = Obj(); // 0xd69 PushV
	var_283_object = var_49_object; // 0xd6a Mov
	TaskCall(8); // 0xd6b TaskCall
	func_1668(var_284_object, var_282_int, var_283_object); // 0xd6c NEW_2
	TaskReturn(); // 0xd6d TaskReturn
	return 2; // 0xd6f Return
	
Label_3440:
	var_349_bool = 0; var_350_int = 0; // 0xd70 PushV
	var_350_int = 6; // 0xd71 MovI
	func_2964(var_349_bool, var_350_int); // 0xd72 NEW_2
	if(var_349_bool == 0) goto Label_3452; // 0xd74 JumpB
	var_351_int = 0; var_352_object = Obj(); // 0xd75 PushV
	var_352_object = var_49_object; // 0xd76 Mov
	TaskCall(2); // 0xd77 TaskCall
	func_249(var_353_object, var_351_int, var_352_object); // 0xd78 NEW_2
	TaskReturn(); // 0xd79 TaskReturn
	return 2; // 0xd7b Return
	
Label_3452:
	var_425_bool = 0; var_426_int = 0; // 0xd7c PushV
	var_426_int = 7; // 0xd7d MovI
	func_2964(var_425_bool, var_426_int); // 0xd7e NEW_2
	if(var_425_bool == 0) goto Label_3464; // 0xd80 JumpB
	var_427_int = 0; var_428_object = Obj(); // 0xd81 PushV
	var_428_object = var_49_object; // 0xd82 Mov
	TaskCall(4); // 0xd83 TaskCall
	func_630(var_429_object, var_427_int, var_428_object); // 0xd84 NEW_2
	TaskReturn(); // 0xd85 TaskReturn
	return 2; // 0xd87 Return
	
Label_3464:
	var_505_bool = 0; var_506_int = 0; // 0xd88 PushV
	var_506_int = 12; // 0xd89 MovI
	func_2964(var_505_bool, var_506_int); // 0xd8a NEW_2
	if(var_505_bool == 0) goto Label_3476; // 0xd8c JumpB
	var_507_int = 0; var_508_object = Obj(); // 0xd8d PushV
	var_508_object = var_49_object; // 0xd8e Mov
	TaskCall(6); // 0xd8f TaskCall
	func_955(var_509_object, var_507_int, var_508_object); // 0xd90 NEW_2
	TaskReturn(); // 0xd91 TaskReturn
	return 2; // 0xd93 Return
	
Label_3476:
	var_656_int = 0; var_657_object = Obj(); // 0xd94 PushV
	var_657_object = var_49_object; // 0xd95 Mov
	TaskCall(10); // 0xd96 TaskCall
	func_2027(var_658_object, var_656_int, var_657_object); // 0xd97 NEW_2
	TaskReturn(); // 0xd98 TaskReturn
	return 2; // 0xd9a Return
}


func_3169(var_589_bool)
{
	var_591_int = 0; var_592_string = ""; // 0xc62 PushV
	var_592_string = "k12q01DankoInSobor"; // 0xc63 MovS
	func_2862(var_591_int, var_592_string); // 0xc64 NEW_2
	var_593_int = 0; // 0xc66 PushI
	var_594_bool = var_591_int != var_593_int; // 0xc67 Neq
	if(var_594_bool == 0) goto Label_3179; // 0xc68 JumpB
	var_589_bool = 1; // 0xc69 MovB
	return 0; // 0xc6a Return
	
Label_3179:
	var_589_bool = 0; // 0xc6b MovB
	return 0; // 0xc6c Return
}


func_2410()
{
	var_35_int = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; // 0x96a PushV
	WaitForAnimEnd(); // 0x96b Func
	var_47_bool = 0; // 0x96d PushV
	func_2554(var_47_bool); // 0x96e NEW_2
	var_48_bool = var_47_bool == 0; // 0x970 Not
	if(var_48_bool == 0) goto Label_2419; // 0x971 JumpB
	return 12; // 0x972 Return
	
Label_2419:
	var_49_int = 0; // 0x973 PushV
	func_2977(var_49_int); // 0x974 NEW_2
	var_41_int = var_49_int; // 0x975 Mov
	var_42_int = 0; // 0x977 MovI
	
Label_2424:
	var_62_bool = 0; // 0x978 PushV
	var_62_bool = 0; // 0x979 MovB
	var_63_int = 5; // 0x97a PushI
	var_64_bool = var_42_int < var_63_int; // 0x97b LT
	if(var_64_bool == 0) goto Label_2434; // 0x97c JumpB
	var_65_bool = 0; // 0x97d PushV
	func_2554(var_65_bool); // 0x97e NEW_2
	if(var_65_bool == 0) goto Label_2434; // 0x980 JumpB
	var_62_bool = 1; // 0x981 MovB
	
Label_2434:
	if(var_62_bool == 0) goto Label_2476; // 0x982 JumpB
	var_66_bool = var_41_int == 0; // 0x983 Not
	if(var_66_bool == 0) goto Label_2444; // 0x984 JumpB
	var_67_int = 3; // 0x985 PushI
	Sleep(var_67_int, var_43_bool); // 0x986 Func
	var_68_bool = var_43_bool == 0; // 0x988 Not
	if(var_68_bool == 0) goto Label_2443; // 0x989 JumpB
	goto Label_2476; // 0x98a Jump
	
Label_2476:
	ResetAAS(); // 0x9ac Func
	return 12; // 0x9ae Return
	
Label_2443:
	goto Label_2465; // 0x98b Jump
	
Label_2465:
	var_69_bool = 0; // 0x9a1 PushV
	func_2479(var_69_bool); // 0x9a2 NEW_2
	var_70_bool = var_69_bool == 0; // 0x9a4 Not
	if(var_70_bool == 0) goto Label_2471; // 0x9a5 JumpB
	goto Label_2476; // 0x9a6 Jump
	
Label_2471:
	ResetAAS(); // 0x9a7 Func
	var_71_int = 1; // 0x9a9 PushI
	var_42_int = var_42_int + var_71_int; // 0x9aa Add2
	goto Label_2424; // 0x9ab Jump
	
Label_2444:
	irand(var_44_int, var_41_int); // 0x98c Func
	var_72_int = 5; // 0x98e PushI
	irand(var_45_int, var_72_int); // 0x98f Func
	var_73_int = 0; // 0x991 PushI
	var_74_bool = var_45_int != var_73_int; // 0x992 Neq
	if(var_74_bool == 0) goto Label_2453; // 0x993 JumpB
	var_44_int = 0; // 0x994 MovI
	
Label_2453:
	var_75_string = "all"; // 0x995 PushS
	var_76_string = ""; var_77_int = 0; // 0x996 PushV
	var_77_int = var_44_int; // 0x997 Mov
	func_2970(var_76_string, var_77_int); // 0x998 NEW_2
	PlayAnimation(var_75_string, var_76_string); // 0x99a Func
	WaitForAnimEnd(var_46_bool); // 0x99c Func
	var_78_bool = var_46_bool == 0; // 0x99e Not
	if(var_78_bool == 0) goto Label_2465; // 0x99f JumpB
	goto Label_2476; // 0x9a0 Jump
}


func_3181(var_546_bool)
{
	var_548_int = 0; var_549_string = ""; // 0xc6e PushV
	var_549_string = "ook12Danko1"; // 0xc6f MovS
	func_2862(var_548_int, var_549_string); // 0xc70 NEW_2
	var_550_int = 0; // 0xc72 PushI
	var_551_bool = var_548_int == var_550_int; // 0xc73 Eq
	if(var_551_bool == 0) goto Label_3191; // 0xc74 JumpB
	var_546_bool = 1; // 0xc75 MovB
	return 0; // 0xc76 Return
	
Label_3191:
	var_546_bool = 0; // 0xc77 MovB
	return 0; // 0xc78 Return
}


func_2933(var_82_float)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0xb75 PushV
	CreateFloatVector(var_84_object); // 0xb76 Func
	add(var_82_float); // 0xb78 ObjFunc
	var_85_int = 16; // 0xb7a PushI
	SendWorldWndMessage(var_85_int, var_84_object); // 0xb7b Func
	return 2; // 0xb7d Return
}


func_2166(var_2_object, var_687_string)
{
	var_688_bool = 0; // 0x877 PushV
	func_3002(var_688_bool); // 0x878 NEW_2
	var_689_bool = var_688_bool == 0; // 0x87a Not
	if(var_689_bool == 0) goto Label_2173; // 0x87b JumpB
	return 0; // 0x87c Return
	
Label_2173:
	var_690_bool = var_687_string == var_2_object; // 0x87d Eq
	if(var_690_bool == 0) goto Label_2176; // 0x87e JumpB
	return 0; // 0x87f Return
	
Label_2176:
	var_691_string = ""; var_692_bool = 0; // 0x880 PushV
	var_691_string = var_687_string; // 0x881 Mov
	var_693_string = ""; // 0x882 PushS
	var_694_bool = var_687_string == var_693_string; // 0x883 Eq
	if(var_694_bool == 0) goto Label_2183; // 0x884 JumpB
	var_692_bool = 0; // 0x885 MovB
	goto Label_2184; // 0x886 Jump
	
Label_2184:
	func_2798(var_691_string, var_692_bool); // 0x888 NEW_2
	var_2_object = var_687_string; // 0x88a TMov
	return 0; // 0x88b Return
	
Label_2183:
	var_692_bool = 1; // 0x887 MovB
}


func_630(var_0_object, var_427_int, var_428_object)
{
	var_430_object = Obj(); var_431_bool = 0; var_432_int = 0; var_433_bool = 0; var_434_object = Obj(); var_435_bool = 0; var_436_int = 0; var_437_bool = 0; // 0x276 PushV
	var_0_object = var_428_object; // 0x277 TMov
	var_438_bool = 0; var_439_object = Obj(); var_440_float = 0; // 0x278 PushV
	var_439_object = var_428_object; // 0x279 Mov
	var_440_float = 70.0; // 0x27a MovF
	func_2559(var_439_object, var_440_float); // 0x27b NEW_2
	var_441_bool = var_438_bool == 0; // 0x27d Not
	if(var_441_bool == 0) goto Label_641; // 0x27e JumpB
	var_427_int = -2; // 0x27f MovI
	return 8; // 0x280 Return
	
Label_641:
	CreateDialog(var_434_object); // 0x281 Func
	var_442_int = 0; // 0x283 PushV
	func_2996(var_442_int); // 0x284 NEW_2
	SetNPCName(var_442_int); // 0x286 ObjFunc
	var_443_int = 0; // 0x288 PushV
	func_2994(var_443_int); // 0x289 NEW_2
	SetNPCDescription(var_443_int); // 0x28b ObjFunc
	var_444_string = ""; // 0x28d PushV
	func_2998(var_444_string); // 0x28e NEW_2
	SetPhoto(var_444_string); // 0x290 ObjFunc
	var_445_string = ""; // 0x292 PushV
	func_3000(var_445_string); // 0x293 NEW_2
	SetPhoto2(var_445_string); // 0x295 ObjFunc
	var_446_int = 0; // 0x297 PushV
	func_3304(var_446_int); // 0x298 NEW_2
	SetPlayerName(var_446_int); // 0x29a ObjFunc
	var_436_int = -1; // 0x29c MovI
	IsOverrideActive(var_435_bool); // 0x29d Func
	var_447_bool = var_435_bool; // 0x29f Push
	if(var_447_bool == 0) goto Label_675; // 0x2a0 JumpB
	var_427_int = -2; // 0x2a1 MovI
	return 8; // 0x2a2 Return
	
Label_675:
	DoDialog(var_434_object); // 0x2a3 Func
	var_448_bool = 0; var_449_object = Obj(); // 0x2a5 PushV
	var_450_object = Obj(); // 0x2a6 PushV
	func_2835(var_450_object); // 0x2a7 NEW_2
	var_449_object = var_450_object; // 0x2a8 Mov
	func_2644(var_448_bool, var_449_object); // 0x2aa NEW_2
	var_451_object = Obj(); var_452_object = Obj(); // 0x2ac PushV
	var_451_object = var_428_object; // 0x2ad Mov
	var_452_object = var_434_object; // 0x2ae Mov
	TaskCall(5); // 0x2af TaskCall
	func_711(var_453_object, var_454_object, var_455_string, var_456_bool, var_451_object, var_452_object); // 0x2b0 NEW_2
	TaskReturn(); // 0x2b1 TaskReturn
	IsDialogEnd(var_437_bool); // 0x2b3 ObjFunc
	
Label_693:
	var_503_bool = var_437_bool == 0; // 0x2b5 Not
	if(var_503_bool == 0) goto Label_700; // 0x2b6 JumpB
	sync(); // 0x2b7 Func
	IsDialogEnd(var_437_bool); // 0x2b9 ObjFunc
	goto Label_693; // 0x2bb Jump
	
Label_700:
	var_504_object = Obj(); // 0x2bc PushV
	var_504_object = var_428_object; // 0x2bd Mov
	func_2627(); // 0x2be NEW_2
	StopDialog(var_434_object); // 0x2c0 Func
	GetReturnValue(var_436_int); // 0x2c2 ObjFunc
	var_427_int = var_436_int; // 0x2c4 Mov
	return 8; // 0x2c5 Return
}


func_3193(var_322_bool)
{
	var_324_int = 0; var_325_string = ""; // 0xc7a PushV
	var_325_string = "k5q04"; // 0xc7b MovS
	func_2862(var_324_int, var_325_string); // 0xc7c NEW_2
	var_328_int = 2; // 0xc7e PushI
	var_329_bool = var_324_int == var_328_int; // 0xc7f Eq
	if(var_329_bool == 0) goto Label_3203; // 0xc80 JumpB
	var_322_bool = 1; // 0xc81 MovB
	return 0; // 0xc82 Return
	
Label_3203:
	var_322_bool = 0; // 0xc83 MovB
	return 0; // 0xc84 Return
}


func_2943(var_39_bool, var_40_string, var_41_string)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0xb7f PushV
	FindActor(var_43_object, var_40_string); // 0xb80 Func
	var_44_bool = var_43_object == 0; // 0xb82 NullEq
	if(var_44_bool == 0) goto Label_2950; // 0xb83 JumpB
	var_39_bool = 0; // 0xb84 MovB
	return 2; // 0xb85 Return
	
Label_2950:
	Trigger(var_43_object, var_41_string); // 0xb86 Func
	var_39_bool = 1; // 0xb88 MovB
	return 2; // 0xb89 Return
}


func_1668(var_0_object, var_282_int, var_283_object)
{
	var_285_object = Obj(); var_286_bool = 0; var_287_int = 0; var_288_bool = 0; var_289_object = Obj(); var_290_bool = 0; var_291_int = 0; var_292_bool = 0; // 0x684 PushV
	var_0_object = var_283_object; // 0x685 TMov
	var_293_bool = 0; var_294_object = Obj(); var_295_float = 0; // 0x686 PushV
	var_294_object = var_283_object; // 0x687 Mov
	var_295_float = 70.0; // 0x688 MovF
	func_2559(var_294_object, var_295_float); // 0x689 NEW_2
	var_296_bool = var_293_bool == 0; // 0x68b Not
	if(var_296_bool == 0) goto Label_1679; // 0x68c JumpB
	var_282_int = -2; // 0x68d MovI
	return 8; // 0x68e Return
	
Label_1679:
	CreateDialog(var_289_object); // 0x68f Func
	var_297_int = 0; // 0x691 PushV
	func_2996(var_297_int); // 0x692 NEW_2
	SetNPCName(var_297_int); // 0x694 ObjFunc
	var_298_int = 0; // 0x696 PushV
	func_2994(var_298_int); // 0x697 NEW_2
	SetNPCDescription(var_298_int); // 0x699 ObjFunc
	var_299_string = ""; // 0x69b PushV
	func_2998(var_299_string); // 0x69c NEW_2
	SetPhoto(var_299_string); // 0x69e ObjFunc
	var_300_string = ""; // 0x6a0 PushV
	func_3000(var_300_string); // 0x6a1 NEW_2
	SetPhoto2(var_300_string); // 0x6a3 ObjFunc
	var_301_int = 0; // 0x6a5 PushV
	func_3304(var_301_int); // 0x6a6 NEW_2
	SetPlayerName(var_301_int); // 0x6a8 ObjFunc
	var_291_int = -1; // 0x6aa MovI
	IsOverrideActive(var_290_bool); // 0x6ab Func
	var_302_bool = var_290_bool; // 0x6ad Push
	if(var_302_bool == 0) goto Label_1713; // 0x6ae JumpB
	var_282_int = -2; // 0x6af MovI
	return 8; // 0x6b0 Return
	
Label_1713:
	DoDialog(var_289_object); // 0x6b1 Func
	var_303_bool = 0; var_304_object = Obj(); // 0x6b3 PushV
	var_305_object = Obj(); // 0x6b4 PushV
	func_2835(var_305_object); // 0x6b5 NEW_2
	var_304_object = var_305_object; // 0x6b6 Mov
	func_2644(var_303_bool, var_304_object); // 0x6b8 NEW_2
	var_306_object = Obj(); var_307_object = Obj(); // 0x6ba PushV
	var_306_object = var_283_object; // 0x6bb Mov
	var_307_object = var_289_object; // 0x6bc Mov
	TaskCall(9); // 0x6bd TaskCall
	func_1749(var_308_object, var_309_object, var_310_string, var_311_bool, var_306_object, var_307_object); // 0x6be NEW_2
	TaskReturn(); // 0x6bf TaskReturn
	IsDialogEnd(var_292_bool); // 0x6c1 ObjFunc
	
Label_1731:
	var_347_bool = var_292_bool == 0; // 0x6c3 Not
	if(var_347_bool == 0) goto Label_1738; // 0x6c4 JumpB
	sync(); // 0x6c5 Func
	IsDialogEnd(var_292_bool); // 0x6c7 ObjFunc
	goto Label_1731; // 0x6c9 Jump
	
Label_1738:
	var_348_object = Obj(); // 0x6ca PushV
	var_348_object = var_283_object; // 0x6cb Mov
	func_2627(); // 0x6cc NEW_2
	StopDialog(var_289_object); // 0x6ce Func
	GetReturnValue(var_291_int); // 0x6d0 ObjFunc
	var_282_int = var_291_int; // 0x6d2 Mov
	return 8; // 0x6d3 Return
}


func_3205(var_598_bool)
{
	var_600_bool = 0; // 0xc86 PushV
	func_3374(var_600_bool); // 0xc87 NEW_2
	var_598_bool = var_600_bool; // 0xc88 Mov
	return 0; // 0xc8a Return
}


func_139(var_2_object, var_227_string)
{
	var_228_bool = 0; // 0x8c PushV
	func_3002(var_228_bool); // 0x8d NEW_2
	var_229_bool = var_228_bool == 0; // 0x8f Not
	if(var_229_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_230_bool = var_227_string == var_2_object; // 0x92 Eq
	if(var_230_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_231_string = ""; var_232_bool = 0; // 0x95 PushV
	var_231_string = var_227_string; // 0x96 Mov
	var_233_string = ""; // 0x97 PushS
	var_234_bool = var_227_string == var_233_string; // 0x98 Eq
	if(var_234_bool == 0) goto Label_156; // 0x99 JumpB
	var_232_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2798(var_231_string, var_232_bool); // 0x9d NEW_2
	var_2_object = var_227_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_232_bool = 1; // 0x9c MovB
}


func_3211()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0xc8b PushV
	var_78_int = 730; // 0xc8c PushI
	var_79_int = 1; // 0xc8d PushI
	var_80_int = 539360; // 0xc8e PushI
	CreateDiaryEntry(var_77_object, var_78_int, var_79_int, var_80_int); // 0xc8f Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0xc91 PushV
	var_82_object = var_77_object; // 0xc92 Mov
	var_83_int = 729; // 0xc93 MovI
	func_3276(var_81_bool, var_82_object, var_83_int); // 0xc94 NEW_2
	return 2; // 0xc96 Return
}


func_2955(var_180_int)
{
	var_181_float = 0; var_182_float = 0; // 0xb8b PushV
	GetGameTime(var_182_float); // 0xb8c Func
	var_183_int = 1; // 0xb8e PushI
	var_184_int = 0; // 0xb8f PushV
	var_185_int = 24; // 0xb90 PushI
	var_184_int = var_182_float / var_182_float; // 0xb91 Div2
	var_180_int = var_183_int + var_184_int; // 0xb92 Add2
	return 2; // 0xb93 Return
}


func_2702(var_136_bool)
{
	var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; // 0xa8e PushV
	var_143_string = "c"; // 0xa8f MovS
	var_144_int = 0; // 0xa90 MovI
	
Label_2705:
	var_148_int = 1; // 0xa91 PushI
	if(var_148_int == 0) goto Label_2718; // 0xa92 JumpB
	var_149_int = 1; // 0xa93 PushI
	var_150_int = var_144_int + var_149_int; // 0xa94 Add
	var_151_int = var_143_string + var_150_int; // 0xa95 Add
	HasProperty(var_151_int, var_145_bool); // 0xa96 ObjFunc
	var_152_bool = var_145_bool == 0; // 0xa98 Not
	if(var_152_bool == 0) goto Label_2715; // 0xa99 JumpB
	goto Label_2718; // 0xa9a Jump
	
Label_2718:
	var_153_bool = var_144_int == 0; // 0xa9e Not
	if(var_153_bool == 0) goto Label_2722; // 0xa9f JumpB
	var_136_bool = 0; // 0xaa0 MovB
	return 10; // 0xaa1 Return
	
Label_2722:
	var_146_int = 0; // 0xaa2 MovI
	var_154_int = 1; // 0xaa3 PushI
	var_155_bool = var_144_int > var_154_int; // 0xaa4 GT
	if(var_155_bool == 0) goto Label_2728; // 0xaa5 JumpB
	irand(var_146_int, var_144_int); // 0xaa6 Func
	
Label_2728:
	var_156_int = 1; // 0xaa8 PushI
	var_157_int = var_146_int + var_156_int; // 0xaa9 Add
	var_158_int = var_143_string + var_157_int; // 0xaaa Add
	GetProperty(var_158_int, var_147_string); // 0xaab ObjFunc
	var_159_bool = 0; var_160_string = ""; // 0xaad PushV
	var_160_string = var_147_string; // 0xaae Mov
	func_2813(var_159_bool, var_160_string); // 0xaaf NEW_2
	var_136_bool = var_159_bool; // 0xab0 Mov
	return 10; // 0xab2 Return
	
Label_2715:
	var_165_int = 1; // 0xa9b PushI
	var_144_int = var_144_int + var_165_int; // 0xa9c Add2
	goto Label_2705; // 0xa9d Jump
}


func_1169(var_2_object, var_560_string)
{
	var_561_bool = 0; // 0x492 PushV
	func_3002(var_561_bool); // 0x493 NEW_2
	var_562_bool = var_561_bool == 0; // 0x495 Not
	if(var_562_bool == 0) goto Label_1176; // 0x496 JumpB
	return 0; // 0x497 Return
	
Label_1176:
	var_563_bool = var_560_string == var_2_object; // 0x498 Eq
	if(var_563_bool == 0) goto Label_1179; // 0x499 JumpB
	return 0; // 0x49a Return
	
Label_1179:
	var_564_string = ""; var_565_bool = 0; // 0x49b PushV
	var_564_string = var_560_string; // 0x49c Mov
	var_566_string = ""; // 0x49d PushS
	var_567_bool = var_560_string == var_566_string; // 0x49e Eq
	if(var_567_bool == 0) goto Label_1186; // 0x49f JumpB
	var_565_bool = 0; // 0x4a0 MovB
	goto Label_1187; // 0x4a1 Jump
	
Label_1187:
	func_2798(var_564_string, var_565_bool); // 0x4a3 NEW_2
	var_2_object = var_560_string; // 0x4a5 TMov
	return 0; // 0x4a6 Return
	
Label_1186:
	var_565_bool = 1; // 0x4a2 MovB
}


func_2964(var_279_bool, var_280_int)
{
	var_281_int = 0; // 0xb95 PushV
	func_2955(var_281_int); // 0xb96 NEW_2
	var_279_bool = var_281_int == var_280_int; // 0xb98 Eq2
	return 0; // 0xb99 Return
}


func_3224()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0xc98 PushV
	var_49_int = 736; // 0xc99 PushI
	var_50_int = 1; // 0xc9a PushI
	var_51_int = 539366; // 0xc9b PushI
	CreateDiaryEntry(var_48_object, var_49_int, var_50_int, var_51_int); // 0xc9c Func
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0; // 0xc9e PushV
	var_53_object = var_48_object; // 0xc9f Mov
	var_54_int = 729; // 0xca0 MovI
	func_3276(var_52_bool, var_53_object, var_54_int); // 0xca1 NEW_2
	return 2; // 0xca3 Return
}


func_2970(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = ""; // 0xb9a PushV
	var_58_string = "idle"; // 0xb9b MovS
	var_59_int = var_56_int; // 0xb9c Push
	if(var_59_int == 0) goto Label_2975; // 0xb9d JumpB
	var_58_string = var_58_string + var_56_int; // 0xb9e Add2
	
Label_2975:
	var_55_string = var_58_string; // 0xb9f Mov
	return 2; // 0xba0 Return
}


func_2977(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0xba1 PushV
	var_52_int = 0; // 0xba2 MovI
	
Label_2979:
	var_54_string = "all"; // 0xba3 PushS
	var_55_string = ""; var_56_int = 0; // 0xba4 PushV
	var_56_int = var_52_int; // 0xba5 Mov
	func_2970(var_55_string, var_56_int); // 0xba6 NEW_2
	HasAnimation(var_53_bool, var_54_string, var_55_string); // 0xba8 Func
	var_60_bool = var_53_bool == 0; // 0xbaa Not
	if(var_60_bool == 0) goto Label_2989; // 0xbab JumpB
	goto Label_2992; // 0xbac Jump
	
Label_2992:
	var_49_int = var_52_int; // 0xbb0 Mov
	return 4; // 0xbb1 Return
	
Label_2989:
	var_61_int = 1; // 0xbad PushI
	var_52_int = var_52_int + var_61_int; // 0xbae Add2
	goto Label_2979; // 0xbaf Jump
}


func_418(var_2_object, var_392_string)
{
	var_393_bool = 0; // 0x1a3 PushV
	func_3002(var_393_bool); // 0x1a4 NEW_2
	var_394_bool = var_393_bool == 0; // 0x1a6 Not
	if(var_394_bool == 0) goto Label_425; // 0x1a7 JumpB
	return 0; // 0x1a8 Return
	
Label_425:
	var_395_bool = var_392_string == var_2_object; // 0x1a9 Eq
	if(var_395_bool == 0) goto Label_428; // 0x1aa JumpB
	return 0; // 0x1ab Return
	
Label_428:
	var_396_string = ""; var_397_bool = 0; // 0x1ac PushV
	var_396_string = var_392_string; // 0x1ad Mov
	var_398_string = ""; // 0x1ae PushS
	var_399_bool = var_392_string == var_398_string; // 0x1af Eq
	if(var_399_bool == 0) goto Label_435; // 0x1b0 JumpB
	var_397_bool = 0; // 0x1b1 MovB
	goto Label_436; // 0x1b2 Jump
	
Label_436:
	func_2798(var_396_string, var_397_bool); // 0x1b4 NEW_2
	var_2_object = var_392_string; // 0x1b6 TMov
	return 0; // 0x1b7 Return
	
Label_435:
	var_397_bool = 1; // 0x1b3 MovB
}


func_3237()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0xca5 PushV
	var_51_int = 743; // 0xca6 PushI
	var_52_int = 2; // 0xca7 PushI
	var_53_int = 539460; // 0xca8 PushI
	CreateDiaryEntry(var_50_object, var_51_int, var_52_int, var_53_int); // 0xca9 Func
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0; // 0xcab PushV
	var_55_object = var_50_object; // 0xcac Mov
	var_56_int = 740; // 0xcad MovI
	func_3276(var_54_bool, var_55_object, var_56_int); // 0xcae NEW_2
	return 2; // 0xcb0 Return
}


func_2479(var_69_bool)
{
	var_69_bool = 1; // 0x9af MovB
	return 0; // 0x9b0 Return
}


func_2481()
{
	StopAnimation(); // 0x9b1 Func
	StopGroup0(); // 0x9b3 Func
	return 0; // 0x9b5 Return
}


func_3250()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0xcb2 PushV
	var_49_int = 415; // 0xcb3 PushI
	var_50_int = 1; // 0xcb4 PushI
	var_51_int = 526116; // 0xcb5 PushI
	CreateDiaryEntry(var_48_object, var_49_int, var_50_int, var_51_int); // 0xcb6 Func
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0; // 0xcb8 PushV
	var_53_object = var_48_object; // 0xcb9 Mov
	var_54_int = 408; // 0xcba MovI
	func_3276(var_52_bool, var_53_object, var_54_int); // 0xcbb NEW_2
	return 2; // 0xcbd Return
}


func_2739(var_167_bool)
{
	var_169_string = ""; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_string = ""; var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; // 0xab3 PushV
	var_179_string = "d"; // 0xab4 PushS
	var_180_int = 0; // 0xab5 PushV
	func_2955(var_180_int); // 0xab6 NEW_2
	var_186_int = var_179_string + var_180_int; // 0xab8 Add
	var_187_string = "m"; // 0xab9 PushS
	var_174_string = var_186_int + var_187_string; // 0xaba Add2
	var_175_int = 0; // 0xabb MovI
	
Label_2748:
	var_188_int = 1; // 0xabc PushI
	if(var_188_int == 0) goto Label_2761; // 0xabd JumpB
	var_189_int = 1; // 0xabe PushI
	var_190_int = var_175_int + var_189_int; // 0xabf Add
	var_191_int = var_174_string + var_190_int; // 0xac0 Add
	HasProperty(var_191_int, var_176_bool); // 0xac1 ObjFunc
	var_192_bool = var_176_bool == 0; // 0xac3 Not
	if(var_192_bool == 0) goto Label_2758; // 0xac4 JumpB
	goto Label_2761; // 0xac5 Jump
	
Label_2761:
	var_193_bool = var_175_int == 0; // 0xac9 Not
	if(var_193_bool == 0) goto Label_2765; // 0xaca JumpB
	var_167_bool = 0; // 0xacb MovB
	return 10; // 0xacc Return
	
Label_2765:
	var_177_int = 0; // 0xacd MovI
	var_194_int = 1; // 0xace PushI
	var_195_bool = var_175_int > var_194_int; // 0xacf GT
	if(var_195_bool == 0) goto Label_2771; // 0xad0 JumpB
	irand(var_177_int, var_175_int); // 0xad1 Func
	
Label_2771:
	var_196_int = 1; // 0xad3 PushI
	var_197_int = var_177_int + var_196_int; // 0xad4 Add
	var_198_int = var_174_string + var_197_int; // 0xad5 Add
	GetProperty(var_198_int, var_178_string); // 0xad6 ObjFunc
	var_199_bool = 0; var_200_string = ""; // 0xad8 PushV
	var_200_string = var_178_string; // 0xad9 Mov
	func_2813(var_199_bool, var_200_string); // 0xada NEW_2
	var_167_bool = var_199_bool; // 0xadb Mov
	return 10; // 0xadd Return
	
Label_2758:
	var_201_int = 1; // 0xac6 PushI
	var_175_int = var_175_int + var_201_int; // 0xac7 Add2
	goto Label_2748; // 0xac8 Jump
}


func_2994(var_113_int)
{
	var_113_int = 515573; // 0xbb2 MovI
	return 0; // 0xbb3 Return
}


func_2996(var_112_int)
{
	var_112_int = 504032; // 0xbb4 MovI
	return 0; // 0xbb5 Return
}


func_2998(var_114_string)
{
	var_114_string = "ui/NPC_Bakalavr.png"; // 0xbb6 MovS
	return 0; // 0xbb7 Return
}


func_2486(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x9b6 PushV
	GetPosition(var_51_cvector); // 0x9b7 Func
	GetPosition(var_52_cvector); // 0x9b9 ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0x9bb Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0x9bc Or2
	return 6; // 0x9bd Return
}


func_3000(var_115_string)
{
	var_115_string = "ui/NPC_Bakalavr_b.png"; // 0xbb8 MovS
	return 0; // 0xbb9 Return
}


func_2234(var_0_object)
{
	var_31_bool = 0; // 0x8ba PushV
	func_2554(var_31_bool); // 0x8bb NEW_2
	var_34_bool = var_31_bool == 0; // 0x8bd Not
	if(var_34_bool == 0) goto Label_2241; // 0x8be JumpB
	Hold(); // 0x8bf Func
	
Label_2241:
	GetDirection(var_0_object); // 0x8c1 Func
	
Label_2243:
	func_2410(); // 0x8c4 NEW_2
	goto Label_2243; // 0x8c6 Jump
}


func_3002(var_107_bool)
{
	var_107_bool = 1; // 0xbba MovB
	return 0; // 0xbbb Return
}


func_955(var_0_object, var_507_int, var_508_object)
{
	var_510_object = Obj(); var_511_bool = 0; var_512_int = 0; var_513_bool = 0; var_514_object = Obj(); var_515_bool = 0; var_516_int = 0; var_517_bool = 0; // 0x3bb PushV
	var_0_object = var_508_object; // 0x3bc TMov
	var_518_bool = 0; var_519_object = Obj(); var_520_float = 0; // 0x3bd PushV
	var_519_object = var_508_object; // 0x3be Mov
	var_520_float = 70.0; // 0x3bf MovF
	func_2559(var_519_object, var_520_float); // 0x3c0 NEW_2
	var_521_bool = var_518_bool == 0; // 0x3c2 Not
	if(var_521_bool == 0) goto Label_966; // 0x3c3 JumpB
	var_507_int = -2; // 0x3c4 MovI
	return 8; // 0x3c5 Return
	
Label_966:
	CreateDialog(var_514_object); // 0x3c6 Func
	var_522_int = 0; // 0x3c8 PushV
	func_2996(var_522_int); // 0x3c9 NEW_2
	SetNPCName(var_522_int); // 0x3cb ObjFunc
	var_523_int = 0; // 0x3cd PushV
	func_2994(var_523_int); // 0x3ce NEW_2
	SetNPCDescription(var_523_int); // 0x3d0 ObjFunc
	var_524_string = ""; // 0x3d2 PushV
	func_2998(var_524_string); // 0x3d3 NEW_2
	SetPhoto(var_524_string); // 0x3d5 ObjFunc
	var_525_string = ""; // 0x3d7 PushV
	func_3000(var_525_string); // 0x3d8 NEW_2
	SetPhoto2(var_525_string); // 0x3da ObjFunc
	var_526_int = 0; // 0x3dc PushV
	func_3304(var_526_int); // 0x3dd NEW_2
	SetPlayerName(var_526_int); // 0x3df ObjFunc
	var_516_int = -1; // 0x3e1 MovI
	IsOverrideActive(var_515_bool); // 0x3e2 Func
	var_527_bool = var_515_bool; // 0x3e4 Push
	if(var_527_bool == 0) goto Label_1000; // 0x3e5 JumpB
	var_507_int = -2; // 0x3e6 MovI
	return 8; // 0x3e7 Return
	
Label_1000:
	DoDialog(var_514_object); // 0x3e8 Func
	var_528_bool = 0; var_529_object = Obj(); // 0x3ea PushV
	var_530_object = Obj(); // 0x3eb PushV
	func_2835(var_530_object); // 0x3ec NEW_2
	var_529_object = var_530_object; // 0x3ed Mov
	func_2644(var_528_bool, var_529_object); // 0x3ef NEW_2
	var_531_object = Obj(); var_532_object = Obj(); // 0x3f1 PushV
	var_531_object = var_508_object; // 0x3f2 Mov
	var_532_object = var_514_object; // 0x3f3 Mov
	TaskCall(7); // 0x3f4 TaskCall
	func_1036(var_533_object, var_534_object, var_535_string, var_536_bool, var_531_object, var_532_object); // 0x3f5 NEW_2
	TaskReturn(); // 0x3f6 TaskReturn
	IsDialogEnd(var_517_bool); // 0x3f8 ObjFunc
	
Label_1018:
	var_654_bool = var_517_bool == 0; // 0x3fa Not
	if(var_654_bool == 0) goto Label_1025; // 0x3fb JumpB
	sync(); // 0x3fc Func
	IsDialogEnd(var_517_bool); // 0x3fe ObjFunc
	goto Label_1018; // 0x400 Jump
	
Label_1025:
	var_655_object = Obj(); // 0x401 PushV
	var_655_object = var_508_object; // 0x402 Mov
	func_2627(); // 0x403 NEW_2
	StopDialog(var_514_object); // 0x405 Func
	GetReturnValue(var_516_int); // 0x407 ObjFunc
	var_507_int = var_516_int; // 0x409 Mov
	return 8; // 0x40a Return
}


func_3004()
{
	var_390_string = "ook6Danko1"; // 0xbbd PushS
	var_391_int = 1; // 0xbbe PushI
	SetVariable(var_390_string, var_391_int); // 0xbbf Func
	return 0; // 0xbc1 Return
}


func_2494(var_94_bool, var_95_object, var_96_string)
{
	var_97_bool = 0; var_98_bool = 0; // 0x9be PushV
	var_99_string = "HasProperty"; // 0x9bf PushS
	var_100_int = 2; // 0x9c0 PushI
	var_101_bool = IsFuncExist(var_95_object, var_99_string, var_100_int); // 0x9c1 FuncExist
	var_102_bool = var_101_bool == 0; // 0x9c2 Not
	if(var_102_bool == 0) goto Label_2502; // 0x9c3 JumpB
	var_94_bool = 0; // 0x9c4 MovB
	return 2; // 0x9c5 Return
	
Label_2502:
	HasProperty(var_96_string, var_98_bool); // 0x9c6 ObjFunc
	var_94_bool = var_98_bool; // 0x9c8 Mov
	return 2; // 0x9c9 Return
}


func_3263(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0xcbf PushV
	GetDiaryRoot(var_65_object); // 0xcc0 Func
	var_66_bool = var_65_object == 0; // 0xcc2 Not
	if(var_66_bool == 0) goto Label_3273; // 0xcc3 JumpB
	var_67_string = "Can't retrieve diary root"; // 0xcc4 PushS
	Trace(var_67_string); // 0xcc5 Func
	var_63_object = 0; // 0xcc7 MovB
	return 2; // 0xcc8 Return
	
Label_3273:
	var_63_object = var_65_object; // 0xcc9 Mov
	return 2; // 0xcca Return
}


func_3010()
{
	var_39_bool = 0; var_40_string = ""; var_41_string = ""; // 0xbc3 PushV
	var_40_string = "quest_k6_01"; // 0xbc4 MovS
	var_41_string = "teleport"; // 0xbc5 MovS
	func_2943(var_39_bool, var_40_string, var_41_string); // 0xbc6 NEW_2
	return 0; // 0xbc8 Return
}


func_711(var_0_object, var_1_object, var_2_object, var_3_string, var_451_object, var_452_object)
{
	var_0_object = var_452_object; // 0x2c8 TMov
	var_1_object = var_451_object; // 0x2c9 TMov
	var_3_string = 0; // 0x2ca TMovB
	var_457_int = 1; // 0x2cb PushI
	if(var_457_int == 0) goto Label_773; // 0x2cc JumpB
	var_458_bool = 0; // 0x2cd PushV
	var_458_bool = 0; // 0x2ce MovB
	var_459_bool = 0; var_460_object = Obj(); // 0x2cf PushV
	var_460_object = var_1_object; // 0x2d0 MovT
	func_3145(var_460_object); // 0x2d1 NEW_2
	if(var_459_bool == 0) goto Label_730; // 0x2d3 JumpB
	var_465_bool = 0; var_466_object = Obj(); // 0x2d4 PushV
	var_466_object = var_1_object; // 0x2d5 MovT
	func_3157(var_466_object); // 0x2d6 NEW_2
	if(var_465_bool == 0) goto Label_730; // 0x2d8 JumpB
	var_458_bool = 1; // 0x2d9 MovB
	
Label_730:
	if(var_458_bool == 0) goto Label_756; // 0x2da JumpB
	var_471_object = Obj(); var_472_object = Obj(); // 0x2db PushV
	var_471_object = var_1_object; // 0x2dc MovT
	var_472_object = var_0_object; // 0x2dd MovT
	func_3027(); // 0x2de NEW_2
	var_475_string = ""; // 0x2e0 PushV
	var_475_string = "Neutral"; // 0x2e1 MovS
	func_803(var_452_object, var_475_string); // 0x2e2 NEW_2
	var_483_int = 526118; // 0x2e4 PushI
	SetMessage(var_483_int); // 0x2e5 TObjFunc
	ClearReplies(); // 0x2e7 TObjFunc
	var_484_int = 528252; // 0x2e9 PushI
	var_485_int = 29614; // 0x2ea PushI
	var_486_int = 29613; // 0x2eb PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x2ec TObjFunc
	var_487_int = 528256; // 0x2ee PushI
	var_488_int = 29614; // 0x2ef PushI
	var_489_int = 29617; // 0x2f0 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x2f1 TObjFunc
	goto Label_773; // 0x2f3 Jump
	
Label_773:
	var_490_bool = 0; // 0x305 PushV
	func_3002(var_490_bool); // 0x306 NEW_2
	if(var_490_bool == 0) goto Label_788; // 0x308 JumpB
	
Label_777:
	lshWaitForAnimEnd(); // 0x309 Func
	var_491_string = var_3_string; // 0x30b PushT
	if(var_491_string == 0) goto Label_782; // 0x30c JumpB
	goto Label_787; // 0x30d Jump
	
Label_787:
	goto Label_802; // 0x313 Jump
	
Label_802:
	return 0; // 0x322 Return
	
Label_782:
	var_492_string = ""; // 0x30e PushV
	var_492_string = var_2_object; // 0x30f MovT
	func_2782(var_492_string); // 0x310 NEW_2
	goto Label_777; // 0x312 Jump
	
Label_788:
	var_493_string = "all"; // 0x314 PushS
	var_494_string = "idle"; // 0x315 PushS
	PlayAnimation(var_493_string, var_494_string); // 0x316 Func
	
Label_792:
	WaitForAnimEnd(); // 0x318 Func
	var_495_string = var_3_string; // 0x31a PushT
	if(var_495_string == 0) goto Label_797; // 0x31b JumpB
	goto Label_802; // 0x31c Jump
	
Label_797:
	var_496_string = "all"; // 0x31d PushS
	var_497_string = "idle"; // 0x31e PushS
	PlayAnimation(var_496_string, var_497_string); // 0x31f Func
	goto Label_792; // 0x321 Jump
	
Label_756:
	var_498_string = ""; // 0x2f4 PushV
	var_498_string = "Sorrow"; // 0x2f5 MovS
	func_803(var_452_object, var_498_string); // 0x2f6 NEW_2
	var_499_int = 526120; // 0x2f8 PushI
	SetMessage(var_499_int); // 0x2f9 TObjFunc
	ClearReplies(); // 0x2fb TObjFunc
	var_500_int = 526121; // 0x2fd PushI
	var_501_int = -1; // 0x2fe PushI
	var_502_int = 27400; // 0x2ff PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x300 TObjFunc
	goto Label_773; // 0x302 Jump
}


func_2248(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x8c8 PushV
	var_59_string = "player"; // 0x8c9 PushS
	FindActor(var_58_object, var_59_string); // 0x8ca Func
	var_60_bool = var_58_object == 0; // 0x8cc Not
	if(var_60_bool == 0) goto Label_2256; // 0x8cd JumpB
	var_56_bool = 0; // 0x8ce MovB
	return 2; // 0x8cf Return
	
Label_2256:
	var_61_bool = 0; var_62_object = Obj(); // 0x8d0 PushV
	var_62_object = var_58_object; // 0x8d1 Mov
	func_2545(var_62_object); // 0x8d2 NEW_2
	var_56_bool = var_61_bool; // 0x8d3 Mov
	return 2; // 0x8d5 Return
}


func_3017()
{
	func_3250(); // 0xbcb NEW_2
	var_70_bool = 0; var_71_string = ""; var_72_string = ""; // 0xbcd PushV
	var_71_string = "quest_k6_01"; // 0xbce MovS
	var_72_string = "completed"; // 0xbcf MovS
	func_2943(var_70_bool, var_71_string, var_72_string); // 0xbd0 NEW_2
	return 0; // 0xbd2 Return
}


func_2506(var_86_bool, var_87_object, var_88_string, var_89_float, var_90_float, var_91_float)
{
	var_92_float = 0; var_93_float = 0; // 0x9ca PushV
	var_94_bool = 0; var_95_object = Obj(); var_96_string = ""; // 0x9cb PushV
	var_95_object = var_87_object; // 0x9cc Mov
	var_96_string = var_88_string; // 0x9cd Mov
	func_2494(var_94_bool, var_95_object, var_96_string); // 0x9ce NEW_2
	var_103_bool = var_94_bool == 0; // 0x9d0 Not
	if(var_103_bool == 0) goto Label_2516; // 0x9d1 JumpB
	var_86_bool = 0; // 0x9d2 MovB
	return 2; // 0x9d3 Return
	
Label_2516:
	GetProperty(var_88_string, var_93_float); // 0x9d4 ObjFunc
	var_104_float = 0; var_105_float = 0; var_106_float = 0; var_107_float = 0; // 0x9d6 PushV
	var_105_float = var_93_float + var_89_float; // 0x9d7 Add2
	var_106_float = var_90_float; // 0x9d8 Mov
	var_107_float = var_91_float; // 0x9d9 Mov
	func_2851(var_104_float, var_105_float, var_106_float, var_107_float); // 0x9da NEW_2
	SetProperty(var_88_string, var_104_float); // 0x9dc ObjFunc
	var_86_bool = 1; // 0x9de MovB
	return 2; // 0x9df Return
}


func_3276(var_54_bool, var_55_object, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; // 0xccc PushV
	var_63_object = Obj(); // 0xccd PushV
	func_3263(var_63_object); // 0xcce NEW_2
	var_60_object = var_63_object; // 0xccf Mov
	Find(var_56_int, var_61_object); // 0xcd1 ObjFunc
	var_68_bool = var_61_object == 0; // 0xcd3 Not
	if(var_68_bool == 0) goto Label_3291; // 0xcd4 JumpB
	var_69_string = "Can't find diary parent with id: "; // 0xcd5 PushS
	var_70_int = var_69_string + var_56_int; // 0xcd6 Add
	Trace(var_70_int); // 0xcd7 Func
	var_54_bool = 0; // 0xcd9 MovB
	return 6; // 0xcda Return
	
Label_3291:
	AddChild(var_55_object); // 0xcdb ObjFunc
	var_71_int = 7; // 0xcdd PushI
	SendWorldWndMessage(var_71_int); // 0xcde Func
	GetCategory(var_62_int); // 0xce0 ObjFunc
	SetDiarySection(var_62_int); // 0xce2 Func
	var_54_bool = 0; // 0xce4 MovB
	return 6; // 0xce5 Return
}


func_3027()
{
	var_473_string = "ook7Danko1"; // 0xbd4 PushS
	var_474_int = 1; // 0xbd5 PushI
	SetVariable(var_473_string, var_474_int); // 0xbd6 Func
	return 0; // 0xbd8 Return
}


func_1749(var_0_object, var_1_object, var_2_object, var_3_string, var_306_object, var_307_object)
{
	var_0_object = var_307_object; // 0x6d6 TMov
	var_1_object = var_306_object; // 0x6d7 TMov
	var_3_string = 0; // 0x6d8 TMovB
	var_312_int = 1; // 0x6d9 PushI
	if(var_312_int == 0) goto Label_1787; // 0x6da JumpB
	var_313_string = ""; // 0x6db PushV
	var_313_string = "Neutral"; // 0x6dc MovS
	func_1817(var_307_object, var_313_string); // 0x6dd NEW_2
	var_321_int = 539435; // 0x6df PushI
	SetMessage(var_321_int); // 0x6e0 TObjFunc
	ClearReplies(); // 0x6e2 TObjFunc
	var_322_bool = 0; var_323_object = Obj(); // 0x6e4 PushV
	var_323_object = var_1_object; // 0x6e5 MovT
	func_3193(var_323_object); // 0x6e6 NEW_2
	if(var_322_bool == 0) goto Label_1774; // 0x6e8 JumpB
	var_330_int = 539436; // 0x6e9 PushI
	var_331_int = 42812; // 0x6ea PushI
	var_332_int = 41367; // 0x6eb PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x6ec TObjFunc
	
Label_1774:
	var_333_int = 539439; // 0x6ee PushI
	var_334_int = -1; // 0x6ef PushI
	var_335_int = 41370; // 0x6f0 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x6f1 TObjFunc
	var_336_int = 540767; // 0x6f3 PushI
	var_337_int = -1; // 0x6f4 PushI
	var_338_int = 42811; // 0x6f5 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x6f6 TObjFunc
	goto Label_1787; // 0x6f8 Jump
	
Label_1787:
	var_339_bool = 0; // 0x6fb PushV
	func_3002(var_339_bool); // 0x6fc NEW_2
	if(var_339_bool == 0) goto Label_1802; // 0x6fe JumpB
	
Label_1791:
	lshWaitForAnimEnd(); // 0x6ff Func
	var_340_string = var_3_string; // 0x701 PushT
	if(var_340_string == 0) goto Label_1796; // 0x702 JumpB
	goto Label_1801; // 0x703 Jump
	
Label_1801:
	goto Label_1816; // 0x709 Jump
	
Label_1816:
	return 0; // 0x718 Return
	
Label_1796:
	var_341_string = ""; // 0x704 PushV
	var_341_string = var_2_object; // 0x705 MovT
	func_2782(var_341_string); // 0x706 NEW_2
	goto Label_1791; // 0x708 Jump
	
Label_1802:
	var_342_string = "all"; // 0x70a PushS
	var_343_string = "idle"; // 0x70b PushS
	PlayAnimation(var_342_string, var_343_string); // 0x70c Func
	
Label_1806:
	WaitForAnimEnd(); // 0x70e Func
	var_344_string = var_3_string; // 0x710 PushT
	if(var_344_string == 0) goto Label_1811; // 0x711 JumpB
	goto Label_1816; // 0x712 Jump
	
Label_1811:
	var_345_string = "all"; // 0x713 PushS
	var_346_string = "idle"; // 0x714 PushS
	PlayAnimation(var_345_string, var_346_string); // 0x715 Func
	goto Label_1806; // 0x717 Jump
}


func_2263(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0x8d7 PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0x8d8 PushE
	RotateAsync(var_108_float, var_109_float); // 0x8d9 Func
	return 0; // 0x8db Return
}


func_3033(var_37_object)
{
	var_39_string = "money1000 is given"; // 0xbda PushS
	Trace(var_39_string); // 0xbdb Func
	var_40_object = Obj(); var_41_int = 0; // 0xbdd PushV
	var_40_object = var_37_object; // 0xbde Mov
	var_41_int = 1000; // 0xbdf MovI
	func_2879(var_40_object, var_41_int); // 0xbe0 NEW_2
	return 0; // 0xbe2 Return
}


func_2268(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0x8dc PushV
	var_44_string = "player"; // 0x8dd PushS
	FindActor(var_42_object, var_44_string); // 0x8de Func
	var_45_bool = var_42_object == 0; // 0x8e0 Not
	if(var_45_bool == 0) goto Label_2276; // 0x8e1 JumpB
	var_39_bool = 0; // 0x8e2 MovB
	return 4; // 0x8e3 Return
	
Label_2276:
	var_46_float = 0; var_47_object = Obj(); // 0x8e4 PushV
	var_47_object = var_42_object; // 0x8e5 Mov
	func_2486(var_47_object); // 0x8e6 NEW_2
	var_54_float = 90000.0; // 0x8e8 PushF
	var_55_bool = var_46_float > var_54_float; // 0x8e9 GT
	if(var_55_bool == 0) goto Label_2285; // 0x8ea JumpB
	var_39_bool = 0; // 0x8eb MovB
	return 4; // 0x8ec Return
	
Label_2285:
	CanSee(var_43_bool, var_42_object); // 0x8ed Func
	var_39_bool = var_43_bool; // 0x8ef Mov
	return 4; // 0x8f0 Return
}


func_2782(var_253_string)
{
	var_254_bool = 0; var_255_float = 0; var_256_float = 0; var_257_bool = 0; var_258_float = 0; var_259_float = 0; // 0xade PushV
	lshHasAnimation(var_257_bool, var_253_string); // 0xadf Func
	var_260_bool = var_257_bool; // 0xae1 Push
	if(var_260_bool == 0) goto Label_2793; // 0xae2 JumpB
	lshGetAnimTimes(var_253_string, var_258_float, var_259_float); // 0xae3 Func
	var_261_bool = 0; // 0xae5 PushB
	lshPlayAnimation(var_258_float, var_259_float, var_261_bool); // 0xae6 Func
	goto Label_2797; // 0xae8 Jump
	
Label_2797:
	return 6; // 0xaed Return
	
Label_2793:
	var_262_string = "Can't find lsh animation : "; // 0xae9 PushS
	var_263_int = var_262_string + var_253_string; // 0xaea Add
	Trace(var_263_int); // 0xaeb Func
}


func_2528(var_45_string, var_46_int)
{
	var_47_int = 0; var_48_int = 0; // 0x9e0 PushV
	GetProperty(var_45_string, var_48_int); // 0x9e1 ObjFunc
	var_49_int = var_48_int + var_46_int; // 0x9e3 Add
	SetProperty(var_45_string, var_49_int); // 0x9e4 ObjFunc
	return 2; // 0x9e6 Return
}


func_3043()
{
	var_60_string = "playsound"; // 0xbe4 PushS
	var_61_string = "givemoney"; // 0xbe5 PushS
	TriggerWorld(var_60_string, var_61_string); // 0xbe6 Func
	return 0; // 0xbe8 Return
}


func_249(var_0_object, var_351_int, var_352_object)
{
	var_354_object = Obj(); var_355_bool = 0; var_356_int = 0; var_357_bool = 0; var_358_object = Obj(); var_359_bool = 0; var_360_int = 0; var_361_bool = 0; // 0xf9 PushV
	var_0_object = var_352_object; // 0xfa TMov
	var_362_bool = 0; var_363_object = Obj(); var_364_float = 0; // 0xfb PushV
	var_363_object = var_352_object; // 0xfc Mov
	var_364_float = 70.0; // 0xfd MovF
	func_2559(var_363_object, var_364_float); // 0xfe NEW_2
	var_365_bool = var_362_bool == 0; // 0x100 Not
	if(var_365_bool == 0) goto Label_260; // 0x101 JumpB
	var_351_int = -2; // 0x102 MovI
	return 8; // 0x103 Return
	
Label_260:
	CreateDialog(var_358_object); // 0x104 Func
	var_366_int = 0; // 0x106 PushV
	func_2996(var_366_int); // 0x107 NEW_2
	SetNPCName(var_366_int); // 0x109 ObjFunc
	var_367_int = 0; // 0x10b PushV
	func_2994(var_367_int); // 0x10c NEW_2
	SetNPCDescription(var_367_int); // 0x10e ObjFunc
	var_368_string = ""; // 0x110 PushV
	func_2998(var_368_string); // 0x111 NEW_2
	SetPhoto(var_368_string); // 0x113 ObjFunc
	var_369_string = ""; // 0x115 PushV
	func_3000(var_369_string); // 0x116 NEW_2
	SetPhoto2(var_369_string); // 0x118 ObjFunc
	var_370_int = 0; // 0x11a PushV
	func_3304(var_370_int); // 0x11b NEW_2
	SetPlayerName(var_370_int); // 0x11d ObjFunc
	var_360_int = -1; // 0x11f MovI
	IsOverrideActive(var_359_bool); // 0x120 Func
	var_371_bool = var_359_bool; // 0x122 Push
	if(var_371_bool == 0) goto Label_294; // 0x123 JumpB
	var_351_int = -2; // 0x124 MovI
	return 8; // 0x125 Return
	
Label_294:
	DoDialog(var_358_object); // 0x126 Func
	var_372_bool = 0; var_373_object = Obj(); // 0x128 PushV
	var_374_object = Obj(); // 0x129 PushV
	func_2835(var_374_object); // 0x12a NEW_2
	var_373_object = var_374_object; // 0x12b Mov
	func_2644(var_372_bool, var_373_object); // 0x12d NEW_2
	var_375_object = Obj(); var_376_object = Obj(); // 0x12f PushV
	var_375_object = var_352_object; // 0x130 Mov
	var_376_object = var_358_object; // 0x131 Mov
	TaskCall(3); // 0x132 TaskCall
	func_330(var_377_object, var_378_object, var_379_string, var_380_bool, var_375_object, var_376_object); // 0x133 NEW_2
	TaskReturn(); // 0x134 TaskReturn
	IsDialogEnd(var_361_bool); // 0x136 ObjFunc
	
Label_312:
	var_423_bool = var_361_bool == 0; // 0x138 Not
	if(var_423_bool == 0) goto Label_319; // 0x139 JumpB
	sync(); // 0x13a Func
	IsDialogEnd(var_361_bool); // 0x13c ObjFunc
	goto Label_312; // 0x13e Jump
	
Label_319:
	var_424_object = Obj(); // 0x13f PushV
	var_424_object = var_352_object; // 0x140 Mov
	func_2627(); // 0x141 NEW_2
	StopDialog(var_358_object); // 0x143 Func
	GetReturnValue(var_360_int); // 0x145 ObjFunc
	var_351_int = var_360_int; // 0x147 Mov
	return 8; // 0x148 Return
}


func_2535(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x9e7 PushV
	GetPosition(var_44_cvector); // 0x9e8 Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0x9ea Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0x9eb PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0x9ec PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0x9ed Func
	var_39_bool = var_46_bool; // 0x9ef Mov
	return 6; // 0x9f0 Return
}


func_3304(var_116_int)
{
	var_117_int = 0; var_118_int = 0; // 0xce8 PushV
	var_119_string = "branch"; // 0xce9 PushS
	GetVariable(var_119_string, var_118_int); // 0xcea Func
	var_120_int = 0; // 0xcec PushI
	var_121_bool = var_118_int == var_120_int; // 0xced Eq
	if(var_121_bool == 0) goto Label_3314; // 0xcee JumpB
	var_116_int = 1; // 0xcef MovI
	return 2; // 0xcf0 Return
	
Label_3314:
	var_122_int = 1; // 0xcf2 PushI
	var_123_bool = var_118_int == var_122_int; // 0xcf3 Eq
	if(var_123_bool == 0) goto Label_3319; // 0xcf4 JumpB
	var_116_int = 2; // 0xcf5 MovI
	return 2; // 0xcf6 Return
	
Label_3319:
	var_116_int = 3; // 0xcf7 MovI
	return 2; // 0xcf8 Return
}


func_3049()
{
	var_74_string = "k12q01DankoInSobor"; // 0xbea PushS
	var_75_int = 1; // 0xbeb PushI
	SetVariable(var_74_string, var_75_int); // 0xbec Func
	func_3211(); // 0xbef NEW_2
	return 0; // 0xbf1 Return
}


func_2027(var_0_object, var_656_int, var_657_object)
{
	var_659_object = Obj(); var_660_bool = 0; var_661_int = 0; var_662_bool = 0; var_663_object = Obj(); var_664_bool = 0; var_665_int = 0; var_666_bool = 0; // 0x7eb PushV
	var_0_object = var_657_object; // 0x7ec TMov
	var_667_bool = 0; var_668_object = Obj(); var_669_float = 0; // 0x7ed PushV
	var_668_object = var_657_object; // 0x7ee Mov
	var_669_float = 70.0; // 0x7ef MovF
	func_2559(var_668_object, var_669_float); // 0x7f0 NEW_2
	var_670_bool = var_667_bool == 0; // 0x7f2 Not
	if(var_670_bool == 0) goto Label_2038; // 0x7f3 JumpB
	var_656_int = -2; // 0x7f4 MovI
	return 8; // 0x7f5 Return
	
Label_2038:
	CreateDialog(var_663_object); // 0x7f6 Func
	var_671_int = 0; // 0x7f8 PushV
	func_2996(var_671_int); // 0x7f9 NEW_2
	SetNPCName(var_671_int); // 0x7fb ObjFunc
	var_672_int = 0; // 0x7fd PushV
	func_2994(var_672_int); // 0x7fe NEW_2
	SetNPCDescription(var_672_int); // 0x800 ObjFunc
	var_673_string = ""; // 0x802 PushV
	func_2998(var_673_string); // 0x803 NEW_2
	SetPhoto(var_673_string); // 0x805 ObjFunc
	var_674_string = ""; // 0x807 PushV
	func_3000(var_674_string); // 0x808 NEW_2
	SetPhoto2(var_674_string); // 0x80a ObjFunc
	var_675_int = 0; // 0x80c PushV
	func_3304(var_675_int); // 0x80d NEW_2
	SetPlayerName(var_675_int); // 0x80f ObjFunc
	var_665_int = -1; // 0x811 MovI
	IsOverrideActive(var_664_bool); // 0x812 Func
	var_676_bool = var_664_bool; // 0x814 Push
	if(var_676_bool == 0) goto Label_2072; // 0x815 JumpB
	var_656_int = -2; // 0x816 MovI
	return 8; // 0x817 Return
	
Label_2072:
	DoDialog(var_663_object); // 0x818 Func
	var_677_bool = 0; var_678_object = Obj(); // 0x81a PushV
	var_679_object = Obj(); // 0x81b PushV
	func_2835(var_679_object); // 0x81c NEW_2
	var_678_object = var_679_object; // 0x81d Mov
	func_2644(var_677_bool, var_678_object); // 0x81f NEW_2
	var_680_object = Obj(); var_681_object = Obj(); // 0x821 PushV
	var_680_object = var_657_object; // 0x822 Mov
	var_681_object = var_663_object; // 0x823 Mov
	TaskCall(11); // 0x824 TaskCall
	func_2108(var_682_object, var_683_object, var_684_string, var_685_bool, var_680_object, var_681_object); // 0x825 NEW_2
	TaskReturn(); // 0x826 TaskReturn
	IsDialogEnd(var_666_bool); // 0x828 ObjFunc
	
Label_2090:
	var_710_bool = var_666_bool == 0; // 0x82a Not
	if(var_710_bool == 0) goto Label_2097; // 0x82b JumpB
	sync(); // 0x82c Func
	IsDialogEnd(var_666_bool); // 0x82e ObjFunc
	goto Label_2090; // 0x830 Jump
	
Label_2097:
	var_711_object = Obj(); // 0x831 PushV
	var_711_object = var_657_object; // 0x832 Mov
	func_2627(); // 0x833 NEW_2
	StopDialog(var_663_object); // 0x835 Func
	GetReturnValue(var_665_int); // 0x837 ObjFunc
	var_656_int = var_665_int; // 0x839 Mov
	return 8; // 0x83a Return
}


func_2798(var_231_string, var_232_bool)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0xaee PushV
	lshHasAnimation(var_238_bool, var_231_string); // 0xaef Func
	var_241_bool = var_238_bool; // 0xaf1 Push
	if(var_241_bool == 0) goto Label_2808; // 0xaf2 JumpB
	lshGetAnimTimes(var_231_string, var_239_float, var_240_float); // 0xaf3 Func
	lshPlayAnimation(var_239_float, var_240_float, var_232_bool); // 0xaf5 Func
	goto Label_2812; // 0xaf7 Jump
	
Label_2812:
	return 6; // 0xafc Return
	
Label_2808:
	var_242_string = "Can't find lsh animation : "; // 0xaf8 PushS
	var_243_int = var_242_string + var_231_string; // 0xaf9 Add
	Trace(var_243_int); // 0xafa Func
}


func_2545(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x9f1 PushV
	GetPosition(var_38_cvector); // 0x9f2 ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0x9f4 PushV
	var_40_cvector = var_38_cvector; // 0x9f5 Mov
	func_2535(var_39_bool, var_40_cvector); // 0x9f6 NEW_2
	var_35_bool = var_39_bool; // 0x9f7 Mov
	return 2; // 0x9f9 Return
}


func_2290()
{
	var_714_float = 0; var_715_float = 0; // 0x8f2 PushV
	var_716_int = 8; // 0x8f3 PushI
	var_717_int = 16; // 0x8f4 PushI
	rand(var_715_float, var_716_int, var_717_int); // 0x8f5 Func
	var_718_int = 10; // 0x8f7 PushI
	SetTimer(var_718_int, var_715_float); // 0x8f8 Func
	return 2; // 0x8fa Return
}


func_3058()
{
	var_39_int = 0; var_40_string = ""; // 0xbf3 PushV
	var_40_string = "k12q01_Danko"; // 0xbf4 MovS
	func_2862(var_39_int, var_40_string); // 0xbf5 NEW_2
	var_43_int = 0; // 0xbf7 PushI
	var_44_bool = var_39_int == var_43_int; // 0xbf8 Eq
	if(var_44_bool == 0) goto Label_3073; // 0xbf9 JumpB
	var_45_string = "k12q01_Danko"; // 0xbfa PushS
	var_46_int = 1; // 0xbfb PushI
	SetVariable(var_45_string, var_46_int); // 0xbfc Func
	func_3224(); // 0xbff NEW_2
	
Label_3073:
	return 0; // 0xc01 Return
}


func_3321(var_610_bool, var_611_int)
{
	var_612_int = 6; // 0xcfa PushI
	add(var_612_int); // 0xcfb ObjFunc
	var_613_int = 26; // 0xcfd PushI
	add(var_613_int); // 0xcfe ObjFunc
	var_614_int = 2; // 0xd00 PushI
	add(var_614_int); // 0xd01 ObjFunc
	var_615_int = 22; // 0xd03 PushI
	add(var_615_int); // 0xd04 ObjFunc
	var_616_bool = 0; // 0xd06 PushB
	var_617_bool = var_610_bool == var_616_bool; // 0xd07 Eq
	if(var_617_bool == 0) goto Label_3347; // 0xd08 JumpB
	var_618_int = 15; // 0xd09 PushI
	add(var_618_int); // 0xd0a ObjFunc
	var_619_int = 5; // 0xd0c PushI
	add(var_619_int); // 0xd0d ObjFunc
	var_620_int = 16; // 0xd0f PushI
	add(var_620_int); // 0xd10 ObjFunc
	goto Label_3353; // 0xd12 Jump
	
Label_3353:
	return 0; // 0xd19 Return
	
Label_3347:
	var_621_int = 0; // 0xd13 PushI
	var_622_bool = var_611_int != var_621_int; // 0xd14 Neq
	if(var_622_bool == 0) goto Label_3353; // 0xd15 JumpB
	var_623_int = 15; // 0xd16 PushI
	add(var_623_int); // 0xd17 ObjFunc
}


func_2554(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x9fa PushV
	IsLoaded(var_33_bool); // 0x9fb Func
	var_31_bool = var_33_bool; // 0x9fd Mov
	return 2; // 0x9fe Return
}


func_2299()
{
	var_713_int = 10; // 0x8fb PushI
	KillTimer(var_713_int); // 0x8fc Func
	return 0; // 0x8fe Return
}


func_2813(var_159_bool, var_160_string)
{
	var_161_bool = 0; var_162_bool = 0; // 0xafd PushV
	var_163_bool = 0; // 0xafe PushV
	func_3002(var_163_bool); // 0xaff NEW_2
	if(var_163_bool == 0) goto Label_2826; // 0xb01 JumpB
	lshHasSpeech(var_162_bool, var_160_string); // 0xb02 Func
	var_164_bool = var_162_bool; // 0xb04 Push
	if(var_164_bool == 0) goto Label_2826; // 0xb05 JumpB
	lshPlaySpeech(var_160_string); // 0xb06 Func
	var_159_bool = 1; // 0xb08 MovB
	return 2; // 0xb09 Return
	
Label_2826:
	var_159_bool = 0; // 0xb0a MovB
	return 2; // 0xb0b Return
}


func_2559(var_65_bool, var_67_float)
{
	var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_bool = 0; var_85_bool = 0; // 0x9ff PushV
	GetPosition(var_78_cvector); // 0xa00 ObjFunc
	GetEyesHeight(var_77_float); // 0xa02 ObjFunc
	var_86_float = GetByIndex(var_78_cvector, 1); // 0xa04 PushE
	var_86_float = var_86_float + var_77_float; // 0xa05 Add2
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0xa06 PopE
	GetPosition(var_79_cvector); // 0xa07 Func
	GetEyesHeight(var_77_float); // 0xa09 Func
	var_87_float = GetByIndex(var_79_cvector, 1); // 0xa0b PushE
	var_87_float = var_87_float + var_77_float; // 0xa0c Add2
	SetByIndex(var_79_cvector, 1) = var_87_float; // 0xa0d PopE
	var_80_cvector = var_78_cvector - var_79_cvector; // 0xa0e Sub2
	var_88_float = GetByIndex(var_80_cvector, 1); // 0xa0f PushE
	var_88_float = 0; // 0xa10 MovI
	SetByIndex(var_80_cvector, 1) = var_88_float; // 0xa11 PopE
	var_89_int = var_80_cvector | var_80_cvector; // 0xa12 Or
	var_90_float = sqrt(var_89_int); // 0xa13 Sqrt
	var_80_cvector = var_80_cvector / var_80_cvector; // 0xa14 Div2
	var_81_cvector = -var_80_cvector; // 0xa15 Neg2
	var_91_float = var_80_cvector * var_67_float; // 0xa16 Mult
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); // 0xa17 PushV
	var_94_cvector = CVector(0.0, 1.0, 0.0); // 0xa18 PushVec
	var_93_cvector = var_81_cvector ^ var_94_cvector; // 0xa19 Xor2
	func_2841(var_92_cvector, var_93_cvector); // 0xa1a NEW_2
	var_100_int = 25; // 0xa1c PushI
	var_101_float = var_92_cvector * var_100_int; // 0xa1d Mult
	var_102_int = var_91_float + var_101_float; // 0xa1e Add
	var_103_cvector = CVector(0.0, 10.0, 0.0); // 0xa1f PushVec
	var_82_cvector = var_102_int - var_103_cvector; // 0xa20 Sub2
	var_83_cvector = var_79_cvector + var_82_cvector; // 0xa21 Add2
	IsOverrideActive(var_84_bool); // 0xa22 Func
	var_104_bool = var_84_bool; // 0xa24 Push
	if(var_104_bool == 0) goto Label_2600; // 0xa25 JumpB
	var_65_bool = 0; // 0xa26 MovB
	return 18; // 0xa27 Return
	
Label_2600:
	StopWorld(); // 0xa28 Func
	CameraTransit(var_83_cvector, var_81_cvector); // 0xa2a Func
	var_105_float = GetByIndex(var_82_cvector, 0); // 0xa2c PushE
	var_106_float = GetByIndex(var_82_cvector, 2); // 0xa2d PushE
	Rotate(var_105_float, var_106_float); // 0xa2e Func
	var_107_bool = 0; // 0xa30 PushV
	func_3002(var_107_bool); // 0xa31 NEW_2
	if(var_107_bool == 0) goto Label_2613; // 0xa33 JumpB
	goto Label_2621; // 0xa34 Jump
	
Label_2621:
	CameraWaitForPlayFinish(); // 0xa3d Func
	ResumeWorld(); // 0xa3f Func
	var_65_bool = 1; // 0xa41 MovB
	return 18; // 0xa42 Return
	
Label_2613:
	var_108_string = "head"; // 0xa35 PushS
	HasAnimationTrack(var_85_bool, var_108_string); // 0xa36 Func
	var_109_bool = var_85_bool; // 0xa38 Push
	if(var_109_bool == 0) goto Label_2621; // 0xa39 JumpB
	var_110_string = "head"; // 0xa3a PushS
	LookAsyncCamera(var_110_string); // 0xa3b Func
}


