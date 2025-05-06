task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xa2 PushI
	if(var_33_int == 0) goto Label_248; // 0xa3 JumpB
	func_2830(); // 0xa5 NEW_2
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
	func_3004(var_81_bool); // 0xee NEW_2
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
	func_2830(); // 0x1bc NEW_2
	var_35_int = 27393; // 0x1be PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x1bf Eq
	if(var_36_bool == 0) goto Label_464; // 0x1c0 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x1c1 PushV
	var_37_object = var_1_object; // 0x1c2 MovT
	var_38_object = var_0_object; // 0x1c3 MovT
	func_3012(); // 0x1c4 NEW_2
	var_45_object = Obj(); var_46_object = Obj(); // 0x1c6 PushV
	var_45_object = var_1_object; // 0x1c7 MovT
	var_46_object = var_0_object; // 0x1c8 MovT
	func_3019(); // 0x1c9 NEW_2
	var_73_object = Obj(); var_74_object = Obj(); // 0x1cb PushV
	var_73_object = var_1_object; // 0x1cc MovT
	var_74_object = var_0_object; // 0x1cd MovT
	func_3106(var_74_object); // 0x1ce NEW_2
	
Label_464:
	var_113_int = 27390; // 0x1d0 PushI
	var_114_bool = var_32_cvector == var_113_int; // 0x1d1 Eq
	if(var_114_bool == 0) goto Label_482; // 0x1d2 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x1d3 PushV
	var_115_object = var_1_object; // 0x1d4 MovT
	var_116_object = var_0_object; // 0x1d5 MovT
	func_3012(); // 0x1d6 NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0x1d8 PushV
	var_117_object = var_1_object; // 0x1d9 MovT
	var_118_object = var_0_object; // 0x1da MovT
	func_3019(); // 0x1db NEW_2
	var_119_object = Obj(); var_120_object = Obj(); // 0x1dd PushV
	var_119_object = var_1_object; // 0x1de MovT
	var_120_object = var_0_object; // 0x1df MovT
	func_3106(var_120_object); // 0x1e0 NEW_2
	
Label_482:
	var_121_int = 27383; // 0x1e2 PushI
	var_122_bool = var_31_bool == var_121_int; // 0x1e3 Eq
	if(var_122_bool == 0) goto Label_535; // 0x1e4 JumpB
	var_123_bool = 0; var_124_object = Obj(); // 0x1e5 PushV
	var_124_object = var_1_object; // 0x1e6 MovT
	func_3135(var_124_object); // 0x1e7 NEW_2
	if(var_123_bool == 0) goto Label_515; // 0x1e9 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x1ea PushV
	var_131_object = var_1_object; // 0x1eb MovT
	var_132_object = var_0_object; // 0x1ec MovT
	func_3006(); // 0x1ed NEW_2
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
	func_3004(var_201_bool); // 0x26b NEW_2
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
	func_2830(); // 0x33d NEW_2
	var_35_int = 27398; // 0x33f PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x340 Eq
	if(var_36_bool == 0) goto Label_844; // 0x341 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x342 PushV
	var_37_object = var_1_object; // 0x343 MovT
	var_38_object = var_0_object; // 0x344 MovT
	func_3035(var_38_object); // 0x345 NEW_2
	var_58_object = Obj(); var_59_object = Obj(); // 0x347 PushV
	var_58_object = var_1_object; // 0x348 MovT
	var_59_object = var_0_object; // 0x349 MovT
	func_3045(); // 0x34a NEW_2
	
Label_844:
	var_62_int = 27397; // 0x34c PushI
	var_63_bool = var_31_bool == var_62_int; // 0x34d Eq
	if(var_63_bool == 0) goto Label_901; // 0x34e JumpB
	var_64_bool = 0; // 0x34f PushV
	var_64_bool = 0; // 0x350 MovB
	var_65_bool = 0; var_66_object = Obj(); // 0x351 PushV
	var_66_object = var_1_object; // 0x352 MovT
	func_3147(var_66_object); // 0x353 NEW_2
	if(var_65_bool == 0) goto Label_860; // 0x355 JumpB
	var_73_bool = 0; var_74_object = Obj(); // 0x356 PushV
	var_74_object = var_1_object; // 0x357 MovT
	func_3159(var_74_object); // 0x358 NEW_2
	if(var_73_bool == 0) goto Label_860; // 0x35a JumpB
	var_64_bool = 1; // 0x35b MovB
	
Label_860:
	if(var_64_bool == 0) goto Label_886; // 0x35c JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x35d PushV
	var_79_object = var_1_object; // 0x35e MovT
	var_80_object = var_0_object; // 0x35f MovT
	func_3029(); // 0x360 NEW_2
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
	func_3004(var_129_bool); // 0x3b0 NEW_2
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
	func_2830(); // 0x4ab NEW_2
	var_35_int = 41290; // 0x4ad PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x4ae Eq
	if(var_36_bool == 0) goto Label_1205; // 0x4af JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x4b0 PushV
	var_37_object = var_1_object; // 0x4b1 MovT
	var_38_object = var_0_object; // 0x4b2 MovT
	func_3060(); // 0x4b3 NEW_2
	
Label_1205:
	var_70_int = 41293; // 0x4b5 PushI
	var_71_bool = var_32_cvector == var_70_int; // 0x4b6 Eq
	if(var_71_bool == 0) goto Label_1213; // 0x4b7 JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0x4b8 PushV
	var_72_object = var_1_object; // 0x4b9 MovT
	var_73_object = var_0_object; // 0x4ba MovT
	func_3051(); // 0x4bb NEW_2
	
Label_1213:
	var_84_int = 41300; // 0x4bd PushI
	var_85_bool = var_32_cvector == var_84_int; // 0x4be Eq
	if(var_85_bool == 0) goto Label_1221; // 0x4bf JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x4c0 PushV
	var_86_object = var_1_object; // 0x4c1 MovT
	var_87_object = var_0_object; // 0x4c2 MovT
	func_3051(); // 0x4c3 NEW_2
	
Label_1221:
	var_88_int = 41283; // 0x4c5 PushI
	var_89_bool = var_31_bool == var_88_int; // 0x4c6 Eq
	if(var_89_bool == 0) goto Label_1319; // 0x4c7 JumpB
	var_90_bool = 0; // 0x4c8 PushV
	var_90_bool = 0; // 0x4c9 MovB
	var_91_bool = 0; var_92_object = Obj(); // 0x4ca PushV
	var_92_object = var_1_object; // 0x4cb MovT
	func_3113(var_92_object); // 0x4cc NEW_2
	var_97_bool = var_91_bool == 0; // 0x4ce Not
	if(var_97_bool == 0) goto Label_1238; // 0x4cf JumpB
	var_98_bool = 0; var_99_object = Obj(); // 0x4d0 PushV
	var_99_object = var_1_object; // 0x4d1 MovT
	func_3183(var_99_object); // 0x4d2 NEW_2
	if(var_98_bool == 0) goto Label_1238; // 0x4d4 JumpB
	var_90_bool = 1; // 0x4d5 MovB
	
Label_1238:
	if(var_90_bool == 0) goto Label_1269; // 0x4d6 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x4d7 PushV
	var_104_object = var_1_object; // 0x4d8 MovT
	var_105_object = var_0_object; // 0x4d9 MovT
	func_3076(); // 0x4da NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x4dc PushV
	var_108_object = var_1_object; // 0x4dd MovT
	var_109_object = var_0_object; // 0x4de MovT
	func_3100(); // 0x4df NEW_2
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
	func_3100(); // 0x4f8 NEW_2
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
	func_3171(var_143_object); // 0x509 NEW_2
	var_148_bool = var_142_bool == 0; // 0x50b Not
	if(var_148_bool == 0) goto Label_1299; // 0x50c JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x50d PushV
	var_150_object = var_1_object; // 0x50e MovT
	func_3125(var_149_bool, var_150_object); // 0x50f NEW_2
	if(var_149_bool == 0) goto Label_1299; // 0x511 JumpB
	var_141_bool = 1; // 0x512 MovB
	
Label_1299:
	if(var_141_bool == 0) goto Label_1307; // 0x513 JumpB
	var_198_bool = 0; var_199_object = Obj(); // 0x514 PushV
	var_199_object = var_1_object; // 0x515 MovT
	func_3113(var_199_object); // 0x516 NEW_2
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
	func_3125(var_308_bool, var_309_object); // 0x61d NEW_2
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
	func_3125(var_319_bool, var_320_object); // 0x637 NEW_2
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
	func_3004(var_346_bool); // 0x679 NEW_2
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
	func_2830(); // 0x733 NEW_2
	var_35_int = 41369; // 0x735 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x736 Eq
	if(var_36_bool == 0) goto Label_1858; // 0x737 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x738 PushV
	var_37_object = var_1_object; // 0x739 MovT
	var_38_object = var_0_object; // 0x73a MovT
	func_3082(); // 0x73b NEW_2
	var_41_object = Obj(); var_42_object = Obj(); // 0x73d PushV
	var_41_object = var_1_object; // 0x73e MovT
	var_42_object = var_0_object; // 0x73f MovT
	func_3088(); // 0x740 NEW_2
	
Label_1858:
	var_72_int = 42820; // 0x742 PushI
	var_73_bool = var_32_cvector == var_72_int; // 0x743 Eq
	if(var_73_bool == 0) goto Label_1871; // 0x744 JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x745 PushV
	var_74_object = var_1_object; // 0x746 MovT
	var_75_object = var_0_object; // 0x747 MovT
	func_3082(); // 0x748 NEW_2
	var_76_object = Obj(); var_77_object = Obj(); // 0x74a PushV
	var_76_object = var_1_object; // 0x74b MovT
	var_77_object = var_0_object; // 0x74c MovT
	func_3088(); // 0x74d NEW_2
	
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
	func_3195(var_99_object); // 0x75d NEW_2
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
	func_3004(var_160_bool); // 0x7e0 NEW_2
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
	func_2830(); // 0x890 NEW_2
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
	func_3004(var_61_bool); // 0x8ab NEW_2
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
	func_2837(var_77_object); // 0x918 NEW_2
	var_76_object = var_77_object; // 0x919 Mov
	func_2704(var_76_object); // 0x91b NEW_2
	
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
	func_2784(var_32_string); // 0x93b NEW_2
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
	func_2784(var_38_string); // 0x94a NEW_2
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
	func_3414(var_49_object); // 0x95d NEW_2
	var_714_string = ""; // 0x95f PushV
	var_714_string = "Neutral"; // 0x960 MovS
	func_2784(var_714_string); // 0x961 NEW_2
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
	var_112_bool = var_65_bool == 0; // 0x7 Not
	if(var_112_bool == 0) goto Label_11; // 0x8 JumpB
	var_54_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_61_object); // 0xb Func
	var_113_int = 0; // 0xd PushV
	func_2998(var_113_int); // 0xe NEW_2
	SetNPCName(var_113_int); // 0x10 ObjFunc
	var_114_int = 0; // 0x12 PushV
	func_2996(var_114_int); // 0x13 NEW_2
	SetNPCDescription(var_114_int); // 0x15 ObjFunc
	var_115_string = ""; // 0x17 PushV
	func_3000(var_115_string); // 0x18 NEW_2
	SetPhoto(var_115_string); // 0x1a ObjFunc
	var_116_string = ""; // 0x1c PushV
	func_3002(var_116_string); // 0x1d NEW_2
	SetPhoto2(var_116_string); // 0x1f ObjFunc
	var_117_int = 0; // 0x21 PushV
	func_3306(var_117_int); // 0x22 NEW_2
	SetPlayerName(var_117_int); // 0x24 ObjFunc
	var_63_int = -1; // 0x26 MovI
	IsOverrideActive(var_62_bool); // 0x27 Func
	var_125_bool = var_62_bool; // 0x29 Push
	if(var_125_bool == 0) goto Label_45; // 0x2a JumpB
	var_54_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_61_object); // 0x2d Func
	var_126_bool = 0; var_127_object = Obj(); // 0x2f PushV
	var_128_object = Obj(); // 0x30 PushV
	func_2837(var_128_object); // 0x31 NEW_2
	var_127_object = var_128_object; // 0x32 Mov
	func_2646(var_126_bool, var_127_object); // 0x34 NEW_2
	var_221_object = Obj(); var_222_object = Obj(); // 0x36 PushV
	var_221_object = var_55_object; // 0x37 Mov
	var_222_object = var_61_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_223_object, var_224_object, var_225_string, var_226_bool, var_221_object, var_222_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_64_bool); // 0x3d ObjFunc
	
Label_63:
	var_270_bool = var_64_bool == 0; // 0x3f Not
	if(var_270_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_64_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_271_object = Obj(); // 0x46 PushV
	var_271_object = var_55_object; // 0x47 Mov
	func_2628(); // 0x48 NEW_2
	StopDialog(var_61_object); // 0x4a Func
	GetReturnValue(var_63_int); // 0x4c ObjFunc
	var_54_int = var_63_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3076()
{
	var_556_string = "ook12Danko1"; // 0xc05 PushS
	var_557_int = 1; // 0xc06 PushI
	SetVariable(var_556_string, var_557_int); // 0xc07 Func
	return 0; // 0xc09 Return
}


func_3082()
{
	var_39_string = "k5q04"; // 0xc0b PushS
	var_40_int = 3; // 0xc0c PushI
	SetVariable(var_39_string, var_40_int); // 0xc0d Func
	return 0; // 0xc0f Return
}


func_1036(var_0_object, var_1_object, var_2_object, var_3_string, var_533_object, var_534_object)
{
	var_0_object = var_534_object; // 0x40d TMov
	var_1_object = var_533_object; // 0x40e TMov
	var_3_string = 0; // 0x40f TMovB
	var_539_int = 1; // 0x410 PushI
	if(var_539_int == 0) goto Label_1139; // 0x411 JumpB
	var_540_bool = 0; // 0x412 PushV
	var_540_bool = 0; // 0x413 MovB
	var_541_bool = 0; var_542_object = Obj(); // 0x414 PushV
	var_542_object = var_1_object; // 0x415 MovT
	func_3113(var_542_object); // 0x416 NEW_2
	var_547_bool = var_541_bool == 0; // 0x418 Not
	if(var_547_bool == 0) goto Label_1056; // 0x419 JumpB
	var_548_bool = 0; var_549_object = Obj(); // 0x41a PushV
	var_549_object = var_1_object; // 0x41b MovT
	func_3183(var_549_object); // 0x41c NEW_2
	if(var_548_bool == 0) goto Label_1056; // 0x41e JumpB
	var_540_bool = 1; // 0x41f MovB
	
Label_1056:
	if(var_540_bool == 0) goto Label_1087; // 0x420 JumpB
	var_554_object = Obj(); var_555_object = Obj(); // 0x421 PushV
	var_554_object = var_1_object; // 0x422 MovT
	var_555_object = var_0_object; // 0x423 MovT
	func_3076(); // 0x424 NEW_2
	var_558_object = Obj(); var_559_object = Obj(); // 0x426 PushV
	var_558_object = var_1_object; // 0x427 MovT
	var_559_object = var_0_object; // 0x428 MovT
	func_3100(); // 0x429 NEW_2
	var_562_string = ""; // 0x42b PushV
	var_562_string = "Neutral"; // 0x42c MovS
	func_1169(var_534_object, var_562_string); // 0x42d NEW_2
	var_570_int = 539339; // 0x42f PushI
	SetMessage(var_570_int); // 0x430 TObjFunc
	ClearReplies(); // 0x432 TObjFunc
	var_571_int = 539340; // 0x434 PushI
	var_572_int = 43548; // 0x435 PushI
	var_573_int = 41284; // 0x436 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0x437 TObjFunc
	var_574_int = 542972; // 0x439 PushI
	var_575_int = 45416; // 0x43a PushI
	var_576_int = 45415; // 0x43b PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x43c TObjFunc
	goto Label_1139; // 0x43e Jump
	
Label_1139:
	var_577_bool = 0; // 0x473 PushV
	func_3004(var_577_bool); // 0x474 NEW_2
	if(var_577_bool == 0) goto Label_1154; // 0x476 JumpB
	
Label_1143:
	lshWaitForAnimEnd(); // 0x477 Func
	var_578_string = var_3_string; // 0x479 PushT
	if(var_578_string == 0) goto Label_1148; // 0x47a JumpB
	goto Label_1153; // 0x47b Jump
	
Label_1153:
	goto Label_1168; // 0x481 Jump
	
Label_1168:
	return 0; // 0x490 Return
	
Label_1148:
	var_579_string = ""; // 0x47c PushV
	var_579_string = var_2_object; // 0x47d MovT
	func_2784(var_579_string); // 0x47e NEW_2
	goto Label_1143; // 0x480 Jump
	
Label_1154:
	var_580_string = "all"; // 0x482 PushS
	var_581_string = "idle"; // 0x483 PushS
	PlayAnimation(var_580_string, var_581_string); // 0x484 Func
	
Label_1158:
	WaitForAnimEnd(); // 0x486 Func
	var_582_string = var_3_string; // 0x488 PushT
	if(var_582_string == 0) goto Label_1163; // 0x489 JumpB
	goto Label_1168; // 0x48a Jump
	
Label_1163:
	var_583_string = "all"; // 0x48b PushS
	var_584_string = "idle"; // 0x48c PushS
	PlayAnimation(var_583_string, var_584_string); // 0x48d Func
	goto Label_1158; // 0x48f Jump
	
Label_1087:
	var_585_object = Obj(); var_586_object = Obj(); // 0x43f PushV
	var_585_object = var_1_object; // 0x440 MovT
	var_586_object = var_0_object; // 0x441 MovT
	func_3100(); // 0x442 NEW_2
	var_587_string = ""; // 0x444 PushV
	var_587_string = "Neutral"; // 0x445 MovS
	func_1169(var_534_object, var_587_string); // 0x446 NEW_2
	var_588_int = 539352; // 0x448 PushI
	SetMessage(var_588_int); // 0x449 TObjFunc
	ClearReplies(); // 0x44b TObjFunc
	var_589_bool = 0; // 0x44d PushV
	var_589_bool = 0; // 0x44e MovB
	var_590_bool = 0; // 0x44f PushV
	var_590_bool = 0; // 0x450 MovB
	var_591_bool = 0; var_592_object = Obj(); // 0x451 PushV
	var_592_object = var_1_object; // 0x452 MovT
	func_3171(var_592_object); // 0x453 NEW_2
	var_597_bool = var_591_bool == 0; // 0x455 Not
	if(var_597_bool == 0) goto Label_1117; // 0x456 JumpB
	var_598_bool = 0; var_599_object = Obj(); // 0x457 PushV
	var_599_object = var_1_object; // 0x458 MovT
	func_3125(var_598_bool, var_599_object); // 0x459 NEW_2
	if(var_598_bool == 0) goto Label_1117; // 0x45b JumpB
	var_590_bool = 1; // 0x45c MovB
	
Label_1117:
	if(var_590_bool == 0) goto Label_1125; // 0x45d JumpB
	var_647_bool = 0; var_648_object = Obj(); // 0x45e PushV
	var_648_object = var_1_object; // 0x45f MovT
	func_3113(var_648_object); // 0x460 NEW_2
	var_649_bool = var_647_bool == 0; // 0x462 Not
	if(var_649_bool == 0) goto Label_1125; // 0x463 JumpB
	var_589_bool = 1; // 0x464 MovB
	
Label_1125:
	if(var_589_bool == 0) goto Label_1131; // 0x465 JumpB
	var_650_int = 539353; // 0x466 PushI
	var_651_int = 43589; // 0x467 PushI
	var_652_int = 41298; // 0x468 PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0x469 TObjFunc
	
Label_1131:
	var_653_int = 539356; // 0x46b PushI
	var_654_int = -1; // 0x46c PushI
	var_655_int = 41301; // 0x46d PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0x46e TObjFunc
	goto Label_1139; // 0x470 Jump
}


func_2830()
{
	var_34_bool = 0; // 0xb0e PushV
	func_3004(var_34_bool); // 0xb0f NEW_2
	if(var_34_bool == 0) goto Label_2836; // 0xb11 JumpB
	lshStopSpeech(); // 0xb12 Func
	
Label_2836:
	return 0; // 0xb14 Return
}


func_3088()
{
	var_43_int = 0; var_44_string = ""; // 0xc11 PushV
	var_44_string = "k5q04_bring_water"; // 0xc12 MovS
	func_2864(var_43_int, var_44_string); // 0xc13 NEW_2
	var_47_int = 0; // 0xc15 PushI
	var_48_bool = var_43_int == var_47_int; // 0xc16 Eq
	if(var_48_bool == 0) goto Label_3099; // 0xc17 JumpB
	func_3239(); // 0xc19 NEW_2
	
Label_3099:
	return 0; // 0xc1b Return
}


func_2837(var_128_object)
{
	var_129_object = Obj(); var_130_object = Obj(); // 0xb15 PushV
	self(var_130_object); // 0xb16 Func
	var_128_object = var_130_object; // 0xb18 Mov
	return 2; // 0xb19 Return
}


func_1817(var_2_object, var_315_string)
{
	var_316_bool = 0; // 0x71a PushV
	func_3004(var_316_bool); // 0x71b NEW_2
	var_317_bool = var_316_bool == 0; // 0x71d Not
	if(var_317_bool == 0) goto Label_1824; // 0x71e JumpB
	return 0; // 0x71f Return
	
Label_1824:
	var_318_bool = var_315_string == var_2_object; // 0x720 Eq
	if(var_318_bool == 0) goto Label_1827; // 0x721 JumpB
	return 0; // 0x722 Return
	
Label_1827:
	var_319_string = ""; var_320_bool = 0; // 0x723 PushV
	var_319_string = var_315_string; // 0x724 Mov
	var_321_string = ""; // 0x725 PushS
	var_322_bool = var_315_string == var_321_string; // 0x726 Eq
	if(var_322_bool == 0) goto Label_1834; // 0x727 JumpB
	var_320_bool = 0; // 0x728 MovB
	goto Label_1835; // 0x729 Jump
	
Label_1835:
	func_2800(var_319_string, var_320_bool); // 0x72b NEW_2
	var_2_object = var_315_string; // 0x72d TMov
	return 0; // 0x72e Return
	
Label_1834:
	var_320_bool = 1; // 0x72a MovB
}


func_2843(var_92_cvector, var_93_cvector)
{
	var_95_float = 0; var_96_float = 0; // 0xb1b PushV
	var_97_int = var_93_cvector | var_93_cvector; // 0xb1c Or
	var_96_float = sqrt(var_97_int); // 0xb1d Sqrt2
	var_98_float = 0.0; // 0xb1e PushF
	var_99_bool = var_96_float < var_98_float; // 0xb1f LT
	if(var_99_bool == 0) goto Label_2851; // 0xb20 JumpB
	var_92_cvector = CVector(0.0, 0.0, 0.0); // 0xb21 MovV
	return 2; // 0xb22 Return
	
Label_2851:
	var_92_cvector = var_93_cvector / var_93_cvector; // 0xb23 Div2
	return 2; // 0xb24 Return
}


func_3100()
{
	var_560_string = "k12DankoVisit"; // 0xc1d PushS
	var_561_int = 1; // 0xc1e PushI
	SetVariable(var_560_string, var_561_int); // 0xc1f Func
	return 0; // 0xc21 Return
}


func_3356(var_637_bool, var_638_int)
{
	var_639_int = 0; var_640_int = 0; // 0xd1c PushV
	var_641_string = "vol_"; // 0xd1d PushS
	var_642_int = var_641_string + var_638_int; // 0xd1e Add
	GetVariable(var_642_int, var_640_int); // 0xd1f Func
	var_643_int = 4; // 0xd21 PushI
	var_644_int = var_640_int & var_643_int; // 0xd22 And
	var_645_int = 0; // 0xd23 PushI
	var_637_bool = var_644_int != var_645_int; // 0xd24 Neq2
	return 2; // 0xd25 Return
}


func_3106(var_73_object)
{
	var_75_bool = 0; var_76_object = Obj(); var_77_float = 0; // 0xc23 PushV
	var_76_object = var_73_object; // 0xc24 Mov
	var_77_float = 0.3; // 0xc25 MovF
	func_2900(var_75_bool, var_76_object, var_77_float); // 0xc26 NEW_2
	return 0; // 0xc28 Return
}


func_803(var_2_object, var_477_string)
{
	var_478_bool = 0; // 0x324 PushV
	func_3004(var_478_bool); // 0x325 NEW_2
	var_479_bool = var_478_bool == 0; // 0x327 Not
	if(var_479_bool == 0) goto Label_810; // 0x328 JumpB
	return 0; // 0x329 Return
	
Label_810:
	var_480_bool = var_477_string == var_2_object; // 0x32a Eq
	if(var_480_bool == 0) goto Label_813; // 0x32b JumpB
	return 0; // 0x32c Return
	
Label_813:
	var_481_string = ""; var_482_bool = 0; // 0x32d PushV
	var_481_string = var_477_string; // 0x32e Mov
	var_483_string = ""; // 0x32f PushS
	var_484_bool = var_477_string == var_483_string; // 0x330 Eq
	if(var_484_bool == 0) goto Label_820; // 0x331 JumpB
	var_482_bool = 0; // 0x332 MovB
	goto Label_821; // 0x333 Jump
	
Label_821:
	func_2800(var_481_string, var_482_bool); // 0x335 NEW_2
	var_2_object = var_477_string; // 0x337 TMov
	return 0; // 0x338 Return
	
Label_820:
	var_482_bool = 1; // 0x334 MovB
}


func_2853(var_104_float, var_105_float, var_106_float, var_107_float)
{
	var_108_bool = var_105_float < var_106_float; // 0xb26 LT
	if(var_108_bool == 0) goto Label_2858; // 0xb27 JumpB
	var_104_float = var_106_float; // 0xb28 Mov
	return 0; // 0xb29 Return
	
Label_2858:
	var_109_bool = var_105_float > var_107_float; // 0xb2a GT
	if(var_109_bool == 0) goto Label_2862; // 0xb2b JumpB
	var_104_float = var_107_float; // 0xb2c Mov
	return 0; // 0xb2d Return
	
Label_2862:
	var_104_float = var_105_float; // 0xb2e Mov
	return 0; // 0xb2f Return
}


func_3366(var_628_bool, var_629_int)
{
	var_630_int = 0; var_631_int = 0; // 0xd26 PushV
	var_632_string = "vol_"; // 0xd27 PushS
	var_633_int = var_632_string + var_629_int; // 0xd28 Add
	GetVariable(var_633_int, var_631_int); // 0xd29 Func
	var_634_int = 16; // 0xd2b PushI
	var_635_int = var_631_int & var_634_int; // 0xd2c And
	var_636_int = 0; // 0xd2d PushI
	var_628_bool = var_635_int != var_636_int; // 0xd2e Neq2
	return 2; // 0xd2f Return
}


func_3113(var_541_bool)
{
	var_543_int = 0; var_544_string = ""; // 0xc2a PushV
	var_544_string = "game_final"; // 0xc2b MovS
	func_2864(var_543_int, var_544_string); // 0xc2c NEW_2
	var_545_int = 0; // 0xc2e PushI
	var_546_bool = var_543_int != var_545_int; // 0xc2f Neq
	if(var_546_bool == 0) goto Label_3123; // 0xc30 JumpB
	var_541_bool = 1; // 0xc31 MovB
	return 0; // 0xc32 Return
	
Label_3123:
	var_541_bool = 0; // 0xc33 MovB
	return 0; // 0xc34 Return
}


func_2864(var_326_int, var_327_string)
{
	var_328_int = 0; var_329_int = 0; // 0xb30 PushV
	GetVariable(var_327_string, var_329_int); // 0xb31 Func
	var_326_int = var_329_int; // 0xb33 Mov
	return 2; // 0xb34 Return
}


func_3376(var_602_bool)
{
	var_603_object = Obj(); var_604_int = 0; var_605_int = 0; var_606_int = 0; var_607_object = Obj(); var_608_int = 0; var_609_int = 0; var_610_int = 0; // 0xd30 PushV
	CreateIntVector(var_607_object); // 0xd31 Func
	var_611_object = Obj(); var_612_bool = 0; var_613_int = 0; // 0xd33 PushV
	var_611_object = var_607_object; // 0xd34 Mov
	var_612_bool = 0; // 0xd35 MovB
	var_613_int = -1; // 0xd36 MovI
	func_3323(var_612_bool, var_613_int); // 0xd37 NEW_2
	size(var_608_int); // 0xd39 ObjFunc
	var_609_int = 0; // 0xd3b MovI
	
Label_3388:
	var_626_bool = var_609_int < var_608_int; // 0xd3c LT
	if(var_626_bool == 0) goto Label_3411; // 0xd3d JumpB
	get(var_610_int, var_609_int); // 0xd3e ObjFunc
	var_627_bool = 0; // 0xd40 PushV
	var_627_bool = 1; // 0xd41 MovB
	var_628_bool = 0; var_629_int = 0; // 0xd42 PushV
	var_629_int = var_610_int; // 0xd43 Mov
	func_3366(var_628_bool, var_629_int); // 0xd44 NEW_2
	if(var_628_bool == 0) goto Label_3405; // 0xd46 JumpB
	var_637_bool = 0; var_638_int = 0; // 0xd47 PushV
	var_638_int = var_610_int; // 0xd48 Mov
	func_3356(var_637_bool, var_638_int); // 0xd49 NEW_2
	if(var_637_bool == 0) goto Label_3405; // 0xd4b JumpB
	var_627_bool = 0; // 0xd4c MovB
	
Label_3405:
	if(var_627_bool == 0) goto Label_3408; // 0xd4d JumpB
	var_602_bool = 0; // 0xd4e MovB
	return 8; // 0xd4f Return
	
Label_3408:
	var_646_int = 1; // 0xd50 PushI
	var_609_int = var_609_int + var_646_int; // 0xd51 Add2
	goto Label_3388; // 0xd52 Jump
	
Label_3411:
	var_602_bool = 1; // 0xd53 MovB
	return 8; // 0xd54 Return
}


func_3125(var_598_bool, var_599_object)
{
	var_600_bool = 0; var_601_object = Obj(); // 0xc36 PushV
	var_601_object = var_599_object; // 0xc37 Mov
	func_3207(var_601_object); // 0xc38 NEW_2
	if(var_600_bool == 0) goto Label_3133; // 0xc3a JumpB
	var_598_bool = 1; // 0xc3b MovB
	return 0; // 0xc3c Return
	
Label_3133:
	var_598_bool = 0; // 0xc3d MovB
	return 0; // 0xc3e Return
}


func_2869(var_53_int, var_54_int)
{
	var_55_object = Obj(); var_56_object = Obj(); // 0xb35 PushV
	CreateIntVector(var_56_object); // 0xb36 Func
	add(var_53_int); // 0xb38 ObjFunc
	add(var_54_int); // 0xb3a ObjFunc
	var_57_int = 3; // 0xb3c PushI
	SendWorldWndMessage(var_57_int, var_56_object); // 0xb3d Func
	return 2; // 0xb3f Return
}


func_2108(var_0_object, var_1_object, var_2_object, var_3_string, var_682_object, var_683_object)
{
	var_0_object = var_683_object; // 0x83d TMov
	var_1_object = var_682_object; // 0x83e TMov
	var_3_string = 0; // 0x83f TMovB
	var_688_int = 1; // 0x840 PushI
	if(var_688_int == 0) goto Label_2136; // 0x841 JumpB
	var_689_string = ""; // 0x842 PushV
	var_689_string = "Neutral"; // 0x843 MovS
	func_2166(var_683_object, var_689_string); // 0x844 NEW_2
	var_697_int = 540545; // 0x846 PushI
	SetMessage(var_697_int); // 0x847 TObjFunc
	ClearReplies(); // 0x849 TObjFunc
	var_698_int = 540546; // 0x84b PushI
	var_699_int = -1; // 0x84c PushI
	var_700_int = 42555; // 0x84d PushI
	AddReply(var_698_int, var_699_int, var_700_int); // 0x84e TObjFunc
	var_701_int = 540798; // 0x850 PushI
	var_702_int = -1; // 0x851 PushI
	var_703_int = 42847; // 0x852 PushI
	AddReply(var_701_int, var_702_int, var_703_int); // 0x853 TObjFunc
	goto Label_2136; // 0x855 Jump
	
Label_2136:
	var_704_bool = 0; // 0x858 PushV
	func_3004(var_704_bool); // 0x859 NEW_2
	if(var_704_bool == 0) goto Label_2151; // 0x85b JumpB
	
Label_2140:
	lshWaitForAnimEnd(); // 0x85c Func
	var_705_string = var_3_string; // 0x85e PushT
	if(var_705_string == 0) goto Label_2145; // 0x85f JumpB
	goto Label_2150; // 0x860 Jump
	
Label_2150:
	goto Label_2165; // 0x866 Jump
	
Label_2165:
	return 0; // 0x875 Return
	
Label_2145:
	var_706_string = ""; // 0x861 PushV
	var_706_string = var_2_object; // 0x862 MovT
	func_2784(var_706_string); // 0x863 NEW_2
	goto Label_2140; // 0x865 Jump
	
Label_2151:
	var_707_string = "all"; // 0x867 PushS
	var_708_string = "idle"; // 0x868 PushS
	PlayAnimation(var_707_string, var_708_string); // 0x869 Func
	
Label_2155:
	WaitForAnimEnd(); // 0x86b Func
	var_709_string = var_3_string; // 0x86d PushT
	if(var_709_string == 0) goto Label_2160; // 0x86e JumpB
	goto Label_2165; // 0x86f Jump
	
Label_2160:
	var_710_string = "all"; // 0x870 PushS
	var_711_string = "idle"; // 0x871 PushS
	PlayAnimation(var_710_string, var_711_string); // 0x872 Func
	goto Label_2155; // 0x874 Jump
}


func_3135(var_384_bool)
{
	var_386_int = 0; var_387_string = ""; // 0xc40 PushV
	var_387_string = "ook6Danko1"; // 0xc41 MovS
	func_2864(var_386_int, var_387_string); // 0xc42 NEW_2
	var_388_int = 0; // 0xc44 PushI
	var_389_bool = var_386_int == var_388_int; // 0xc45 Eq
	if(var_389_bool == 0) goto Label_3145; // 0xc46 JumpB
	var_384_bool = 1; // 0xc47 MovB
	return 0; // 0xc48 Return
	
Label_3145:
	var_384_bool = 0; // 0xc49 MovB
	return 0; // 0xc4a Return
}


func_2881(var_40_object, var_41_int)
{
	var_42_int = 0; var_43_int = 0; // 0xb41 PushV
	var_44_object = Obj(); var_45_string = ""; var_46_int = 0; // 0xb42 PushV
	var_44_object = var_40_object; // 0xb43 Mov
	var_45_string = "money"; // 0xb44 MovS
	var_46_int = var_41_int; // 0xb45 Mov
	func_2528(var_45_string, var_46_int); // 0xb46 NEW_2
	var_50_int = 0; // 0xb48 PushI
	var_51_bool = var_41_int > var_50_int; // 0xb49 GT
	if(var_51_bool == 0) goto Label_2899; // 0xb4a JumpB
	var_52_string = "Money"; // 0xb4b PushS
	GetInvItemByName(var_43_int, var_52_string); // 0xb4c Func
	var_53_int = 0; var_54_int = 0; // 0xb4e PushV
	var_53_int = var_43_int; // 0xb4f Mov
	var_54_int = var_41_int; // 0xb50 Mov
	func_2869(var_53_int, var_54_int); // 0xb51 NEW_2
	
Label_2899:
	return 2; // 0xb53 Return
}


func_2628()
{
	var_272_bool = 0; var_273_bool = 0; // 0xa44 PushV
	var_274_bool = 1; // 0xa45 PushB
	CameraSwitchToNormal(var_274_bool); // 0xa46 Func
	var_275_bool = 0; // 0xa48 PushV
	func_3004(var_275_bool); // 0xa49 NEW_2
	if(var_275_bool == 0) goto Label_2637; // 0xa4b JumpB
	goto Label_2645; // 0xa4c Jump
	
Label_2645:
	return 2; // 0xa55 Return
	
Label_2637:
	var_276_string = "head"; // 0xa4d PushS
	HasAnimationTrack(var_273_bool, var_276_string); // 0xa4e Func
	var_277_bool = var_273_bool; // 0xa50 Push
	if(var_277_bool == 0) goto Label_2645; // 0xa51 JumpB
	var_278_string = "head"; // 0xa52 PushS
	UnlookAsync(var_278_string); // 0xa53 Func
}


func_330(var_0_object, var_1_object, var_2_object, var_3_string, var_377_object, var_378_object)
{
	var_0_object = var_378_object; // 0x14b TMov
	var_1_object = var_377_object; // 0x14c TMov
	var_3_string = 0; // 0x14d TMovB
	var_383_int = 1; // 0x14e PushI
	if(var_383_int == 0) goto Label_388; // 0x14f JumpB
	var_384_bool = 0; var_385_object = Obj(); // 0x150 PushV
	var_385_object = var_1_object; // 0x151 MovT
	func_3135(var_385_object); // 0x152 NEW_2
	if(var_384_bool == 0) goto Label_366; // 0x154 JumpB
	var_390_object = Obj(); var_391_object = Obj(); // 0x155 PushV
	var_390_object = var_1_object; // 0x156 MovT
	var_391_object = var_0_object; // 0x157 MovT
	func_3006(); // 0x158 NEW_2
	var_394_string = ""; // 0x15a PushV
	var_394_string = "Menace"; // 0x15b MovS
	func_418(var_378_object, var_394_string); // 0x15c NEW_2
	var_402_int = 526097; // 0x15e PushI
	SetMessage(var_402_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_403_int = 526098; // 0x163 PushI
	var_404_int = 27386; // 0x164 PushI
	var_405_int = 27384; // 0x165 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x166 TObjFunc
	var_406_int = 526099; // 0x168 PushI
	var_407_int = 27386; // 0x169 PushI
	var_408_int = 27385; // 0x16a PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x16b TObjFunc
	goto Label_388; // 0x16d Jump
	
Label_388:
	var_409_bool = 0; // 0x184 PushV
	func_3004(var_409_bool); // 0x185 NEW_2
	if(var_409_bool == 0) goto Label_403; // 0x187 JumpB
	
Label_392:
	lshWaitForAnimEnd(); // 0x188 Func
	var_410_string = var_3_string; // 0x18a PushT
	if(var_410_string == 0) goto Label_397; // 0x18b JumpB
	goto Label_402; // 0x18c Jump
	
Label_402:
	goto Label_417; // 0x192 Jump
	
Label_417:
	return 0; // 0x1a1 Return
	
Label_397:
	var_411_string = ""; // 0x18d PushV
	var_411_string = var_2_object; // 0x18e MovT
	func_2784(var_411_string); // 0x18f NEW_2
	goto Label_392; // 0x191 Jump
	
Label_403:
	var_412_string = "all"; // 0x193 PushS
	var_413_string = "idle"; // 0x194 PushS
	PlayAnimation(var_412_string, var_413_string); // 0x195 Func
	
Label_407:
	WaitForAnimEnd(); // 0x197 Func
	var_414_string = var_3_string; // 0x199 PushT
	if(var_414_string == 0) goto Label_412; // 0x19a JumpB
	goto Label_417; // 0x19b Jump
	
Label_412:
	var_415_string = "all"; // 0x19c PushS
	var_416_string = "idle"; // 0x19d PushS
	PlayAnimation(var_415_string, var_416_string); // 0x19e Func
	goto Label_407; // 0x1a0 Jump
	
Label_366:
	var_417_string = ""; // 0x16e PushV
	var_417_string = "Menace"; // 0x16f MovS
	func_418(var_378_object, var_417_string); // 0x170 NEW_2
	var_418_int = 526107; // 0x172 PushI
	SetMessage(var_418_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_419_int = 526108; // 0x177 PushI
	var_420_int = -1; // 0x178 PushI
	var_421_int = 27395; // 0x179 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x17a TObjFunc
	var_422_int = 528917; // 0x17c PushI
	var_423_int = -1; // 0x17d PushI
	var_424_int = 30347; // 0x17e PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x17f TObjFunc
	goto Label_388; // 0x181 Jump
}


func_3147(var_461_bool)
{
	var_463_int = 0; var_464_string = ""; // 0xc4c PushV
	var_464_string = "k7q01"; // 0xc4d MovS
	func_2864(var_463_int, var_464_string); // 0xc4e NEW_2
	var_465_int = 0; // 0xc50 PushI
	var_466_bool = var_463_int == var_465_int; // 0xc51 Eq
	if(var_466_bool == 0) goto Label_3157; // 0xc52 JumpB
	var_461_bool = 1; // 0xc53 MovB
	return 0; // 0xc54 Return
	
Label_3157:
	var_461_bool = 0; // 0xc55 MovB
	return 0; // 0xc56 Return
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
	func_2843(var_92_cvector, var_93_cvector); // 0xa1a NEW_2
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
	var_105_bool = 1; // 0xa2a PushB
	CameraTransit(var_83_cvector, var_81_cvector, var_105_bool); // 0xa2b Func
	var_106_float = GetByIndex(var_82_cvector, 0); // 0xa2d PushE
	var_107_float = GetByIndex(var_82_cvector, 2); // 0xa2e PushE
	Rotate(var_106_float, var_107_float); // 0xa2f Func
	var_108_bool = 0; // 0xa31 PushV
	func_3004(var_108_bool); // 0xa32 NEW_2
	if(var_108_bool == 0) goto Label_2614; // 0xa34 JumpB
	goto Label_2622; // 0xa35 Jump
	
Label_2622:
	CameraWaitForPlayFinish(); // 0xa3e Func
	ResumeWorld(); // 0xa40 Func
	var_65_bool = 1; // 0xa42 MovB
	return 18; // 0xa43 Return
	
Label_2614:
	var_109_string = "head"; // 0xa36 PushS
	HasAnimationTrack(var_85_bool, var_109_string); // 0xa37 Func
	var_110_bool = var_85_bool; // 0xa39 Push
	if(var_110_bool == 0) goto Label_2622; // 0xa3a JumpB
	var_111_string = "head"; // 0xa3b PushS
	LookAsyncCamera(var_111_string); // 0xa3c Func
}


func_3323(var_612_bool, var_613_int)
{
	var_614_int = 6; // 0xcfc PushI
	add(var_614_int); // 0xcfd ObjFunc
	var_615_int = 26; // 0xcff PushI
	add(var_615_int); // 0xd00 ObjFunc
	var_616_int = 2; // 0xd02 PushI
	add(var_616_int); // 0xd03 ObjFunc
	var_617_int = 22; // 0xd05 PushI
	add(var_617_int); // 0xd06 ObjFunc
	var_618_bool = 0; // 0xd08 PushB
	var_619_bool = var_612_bool == var_618_bool; // 0xd09 Eq
	if(var_619_bool == 0) goto Label_3349; // 0xd0a JumpB
	var_620_int = 15; // 0xd0b PushI
	add(var_620_int); // 0xd0c ObjFunc
	var_621_int = 5; // 0xd0e PushI
	add(var_621_int); // 0xd0f ObjFunc
	var_622_int = 16; // 0xd11 PushI
	add(var_622_int); // 0xd12 ObjFunc
	goto Label_3355; // 0xd14 Jump
	
Label_3355:
	return 0; // 0xd1b Return
	
Label_3349:
	var_623_int = 0; // 0xd15 PushI
	var_624_bool = var_613_int != var_623_int; // 0xd16 Neq
	if(var_624_bool == 0) goto Label_3355; // 0xd17 JumpB
	var_625_int = 15; // 0xd18 PushI
	add(var_625_int); // 0xd19 ObjFunc
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_221_object, var_222_object)
{
	var_0_object = var_222_object; // 0x52 TMov
	var_1_object = var_221_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_227_int = 1; // 0x55 PushI
	if(var_227_int == 0) goto Label_109; // 0x56 JumpB
	var_228_string = ""; // 0x57 PushV
	var_228_string = "Neutral"; // 0x58 MovS
	func_139(var_222_object, var_228_string); // 0x59 NEW_2
	var_245_int = 525474; // 0x5b PushI
	SetMessage(var_245_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_246_int = 525475; // 0x60 PushI
	var_247_int = 27554; // 0x61 PushI
	var_248_int = 26831; // 0x62 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x63 TObjFunc
	var_249_int = 526277; // 0x65 PushI
	var_250_int = 27557; // 0x66 PushI
	var_251_int = 27553; // 0x67 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_252_bool = 0; // 0x6d PushV
	func_3004(var_252_bool); // 0x6e NEW_2
	if(var_252_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_253_string = var_3_string; // 0x73 PushT
	if(var_253_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_254_string = ""; // 0x76 PushV
	var_254_string = var_2_object; // 0x77 MovT
	func_2784(var_254_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_265_string = "all"; // 0x7c PushS
	var_266_string = "idle"; // 0x7d PushS
	PlayAnimation(var_265_string, var_266_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_267_string = var_3_string; // 0x82 PushT
	if(var_267_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_268_string = "all"; // 0x85 PushS
	var_269_string = "idle"; // 0x86 PushS
	PlayAnimation(var_268_string, var_269_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_2900(var_75_bool, var_76_object, var_77_float)
{
	var_78_bool = var_76_object == 0; // 0xb55 Not
	if(var_78_bool == 0) goto Label_2905; // 0xb56 JumpB
	var_75_bool = 0; // 0xb57 MovB
	return 0; // 0xb58 Return
	
Label_2905:
	var_79_int = 0; // 0xb59 PushI
	var_80_bool = var_77_float > var_79_int; // 0xb5a GT
	if(var_80_bool == 0) goto Label_2912; // 0xb5b JumpB
	var_81_int = 8; // 0xb5c PushI
	SendWorldWndMessage(var_81_int); // 0xb5d Func
	goto Label_2921; // 0xb5f Jump
	
Label_2921:
	var_82_float = 0; // 0xb69 PushV
	var_82_float = var_77_float; // 0xb6a Mov
	func_2935(var_82_float); // 0xb6b NEW_2
	var_86_bool = 0; var_87_object = Obj(); var_88_string = ""; var_89_float = 0; var_90_float = 0; var_91_float = 0; // 0xb6d PushV
	var_87_object = var_76_object; // 0xb6e Mov
	var_88_string = "reputation"; // 0xb6f MovS
	var_89_float = var_77_float; // 0xb70 Mov
	var_90_float = 0; // 0xb71 MovI
	var_91_float = 1; // 0xb72 MovI
	func_2506(var_86_bool, var_87_object, var_88_string, var_89_float, var_90_float, var_91_float); // 0xb73 NEW_2
	var_75_bool = 1; // 0xb75 MovB
	return 0; // 0xb76 Return
	
Label_2912:
	var_110_int = 0; // 0xb60 PushI
	var_111_bool = var_77_float < var_110_int; // 0xb61 LT
	if(var_111_bool == 0) goto Label_2919; // 0xb62 JumpB
	var_112_int = 9; // 0xb63 PushI
	SendWorldWndMessage(var_112_int); // 0xb64 Func
	goto Label_2921; // 0xb66 Jump
	
Label_2919:
	var_75_bool = 0; // 0xb67 MovB
	return 0; // 0xb68 Return
}


func_2646(var_126_bool, var_127_object)
{
	var_131_int = 0; var_132_int = 0; var_133_int = 0; var_134_int = 0; // 0xa56 PushV
	var_135_string = "voice_common"; // 0xa57 PushS
	GetVariable(var_135_string, var_133_int); // 0xa58 Func
	var_136_int = var_133_int; // 0xa5a Push
	if(var_136_int == 0) goto Label_2684; // 0xa5b JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0xa5c PushV
	var_138_object = var_127_object; // 0xa5d Mov
	func_2704(var_138_object); // 0xa5e NEW_2
	var_167_bool = var_137_bool == 0; // 0xa60 Not
	if(var_167_bool == 0) goto Label_2666; // 0xa61 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0xa62 PushV
	var_169_object = var_127_object; // 0xa63 Mov
	func_2741(var_169_object); // 0xa64 NEW_2
	var_203_bool = var_168_bool == 0; // 0xa66 Not
	if(var_203_bool == 0) goto Label_2666; // 0xa67 JumpB
	var_126_bool = 0; // 0xa68 MovB
	return 4; // 0xa69 Return
	
Label_2666:
	var_204_int = 2; // 0xa6a PushI
	irand(var_134_int, var_204_int); // 0xa6b Func
	var_205_int = var_134_int; // 0xa6d Push
	if(var_205_int == 0) goto Label_2679; // 0xa6e JumpB
	var_206_string = "voice_common"; // 0xa6f PushS
	var_207_int = 1; // 0xa70 PushI
	var_208_int = var_133_int + var_207_int; // 0xa71 Add
	var_209_int = 3; // 0xa72 PushI
	var_210_int = var_208_int / var_209_int; // 0xa73 Mod
	SetVariable(var_206_string, var_210_int); // 0xa74 Func
	goto Label_2683; // 0xa76 Jump
	
Label_2683:
	goto Label_2702; // 0xa7b Jump
	
Label_2702:
	var_126_bool = 1; // 0xa8e MovB
	return 4; // 0xa8f Return
	
Label_2679:
	var_211_string = "voice_common"; // 0xa77 PushS
	var_212_int = 0; // 0xa78 PushI
	SetVariable(var_211_string, var_212_int); // 0xa79 Func
	
Label_2684:
	var_213_bool = 0; var_214_object = Obj(); // 0xa7c PushV
	var_214_object = var_127_object; // 0xa7d Mov
	func_2741(var_214_object); // 0xa7e NEW_2
	var_215_bool = var_213_bool == 0; // 0xa80 Not
	if(var_215_bool == 0) goto Label_2698; // 0xa81 JumpB
	var_216_bool = 0; var_217_object = Obj(); // 0xa82 PushV
	var_217_object = var_127_object; // 0xa83 Mov
	func_2704(var_217_object); // 0xa84 NEW_2
	var_218_bool = var_216_bool == 0; // 0xa86 Not
	if(var_218_bool == 0) goto Label_2698; // 0xa87 JumpB
	var_126_bool = 0; // 0xa88 MovB
	return 4; // 0xa89 Return
	
Label_2698:
	var_219_string = "voice_common"; // 0xa8a PushS
	var_220_int = 1; // 0xa8b PushI
	SetVariable(var_219_string, var_220_int); // 0xa8c Func
}


func_3159(var_467_bool)
{
	var_469_int = 0; var_470_string = ""; // 0xc58 PushV
	var_470_string = "ook7Danko1"; // 0xc59 MovS
	func_2864(var_469_int, var_470_string); // 0xc5a NEW_2
	var_471_int = 0; // 0xc5c PushI
	var_472_bool = var_469_int == var_471_int; // 0xc5d Eq
	if(var_472_bool == 0) goto Label_3169; // 0xc5e JumpB
	var_467_bool = 1; // 0xc5f MovB
	return 0; // 0xc60 Return
	
Label_3169:
	var_467_bool = 0; // 0xc61 MovB
	return 0; // 0xc62 Return
}


func_3414(var_49_object)
{
	var_50_int = 0; var_51_int = 0; // 0xd56 PushV
	var_52_string = "mt_danko"; // 0xd57 PushS
	GetVariable(var_52_string, var_51_int); // 0xd58 Func
	var_53_bool = var_51_int == 0; // 0xd5a Not
	if(var_53_bool == 0) goto Label_3430; // 0xd5b JumpB
	var_54_int = 0; var_55_object = Obj(); // 0xd5c PushV
	var_55_object = var_49_object; // 0xd5d Mov
	TaskCall(0); // 0xd5e TaskCall
	func_0(var_56_object, var_54_int, var_55_object); // 0xd5f NEW_2
	TaskReturn(); // 0xd60 TaskReturn
	var_279_string = "mt_danko"; // 0xd62 PushS
	var_280_int = 1; // 0xd63 PushI
	SetVariable(var_279_string, var_280_int); // 0xd64 Func
	
Label_3430:
	var_281_bool = 0; var_282_int = 0; // 0xd66 PushV
	var_282_int = 5; // 0xd67 MovI
	func_2966(var_281_bool, var_282_int); // 0xd68 NEW_2
	if(var_281_bool == 0) goto Label_3442; // 0xd6a JumpB
	var_284_int = 0; var_285_object = Obj(); // 0xd6b PushV
	var_285_object = var_49_object; // 0xd6c Mov
	TaskCall(8); // 0xd6d TaskCall
	func_1668(var_286_object, var_284_int, var_285_object); // 0xd6e NEW_2
	TaskReturn(); // 0xd6f TaskReturn
	return 2; // 0xd71 Return
	
Label_3442:
	var_351_bool = 0; var_352_int = 0; // 0xd72 PushV
	var_352_int = 6; // 0xd73 MovI
	func_2966(var_351_bool, var_352_int); // 0xd74 NEW_2
	if(var_351_bool == 0) goto Label_3454; // 0xd76 JumpB
	var_353_int = 0; var_354_object = Obj(); // 0xd77 PushV
	var_354_object = var_49_object; // 0xd78 Mov
	TaskCall(2); // 0xd79 TaskCall
	func_249(var_355_object, var_353_int, var_354_object); // 0xd7a NEW_2
	TaskReturn(); // 0xd7b TaskReturn
	return 2; // 0xd7d Return
	
Label_3454:
	var_427_bool = 0; var_428_int = 0; // 0xd7e PushV
	var_428_int = 7; // 0xd7f MovI
	func_2966(var_427_bool, var_428_int); // 0xd80 NEW_2
	if(var_427_bool == 0) goto Label_3466; // 0xd82 JumpB
	var_429_int = 0; var_430_object = Obj(); // 0xd83 PushV
	var_430_object = var_49_object; // 0xd84 Mov
	TaskCall(4); // 0xd85 TaskCall
	func_630(var_431_object, var_429_int, var_430_object); // 0xd86 NEW_2
	TaskReturn(); // 0xd87 TaskReturn
	return 2; // 0xd89 Return
	
Label_3466:
	var_507_bool = 0; var_508_int = 0; // 0xd8a PushV
	var_508_int = 12; // 0xd8b MovI
	func_2966(var_507_bool, var_508_int); // 0xd8c NEW_2
	if(var_507_bool == 0) goto Label_3478; // 0xd8e JumpB
	var_509_int = 0; var_510_object = Obj(); // 0xd8f PushV
	var_510_object = var_49_object; // 0xd90 Mov
	TaskCall(6); // 0xd91 TaskCall
	func_955(var_511_object, var_509_int, var_510_object); // 0xd92 NEW_2
	TaskReturn(); // 0xd93 TaskReturn
	return 2; // 0xd95 Return
	
Label_3478:
	var_658_int = 0; var_659_object = Obj(); // 0xd96 PushV
	var_659_object = var_49_object; // 0xd97 Mov
	TaskCall(10); // 0xd98 TaskCall
	func_2027(var_660_object, var_658_int, var_659_object); // 0xd99 NEW_2
	TaskReturn(); // 0xd9a TaskReturn
	return 2; // 0xd9c Return
}


func_3171(var_591_bool)
{
	var_593_int = 0; var_594_string = ""; // 0xc64 PushV
	var_594_string = "k12q01DankoInSobor"; // 0xc65 MovS
	func_2864(var_593_int, var_594_string); // 0xc66 NEW_2
	var_595_int = 0; // 0xc68 PushI
	var_596_bool = var_593_int != var_595_int; // 0xc69 Neq
	if(var_596_bool == 0) goto Label_3181; // 0xc6a JumpB
	var_591_bool = 1; // 0xc6b MovB
	return 0; // 0xc6c Return
	
Label_3181:
	var_591_bool = 0; // 0xc6d MovB
	return 0; // 0xc6e Return
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
	func_2979(var_49_int); // 0x974 NEW_2
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
	func_2972(var_76_string, var_77_int); // 0x998 NEW_2
	PlayAnimation(var_75_string, var_76_string); // 0x99a Func
	WaitForAnimEnd(var_46_bool); // 0x99c Func
	var_78_bool = var_46_bool == 0; // 0x99e Not
	if(var_78_bool == 0) goto Label_2465; // 0x99f JumpB
	goto Label_2476; // 0x9a0 Jump
}


func_3183(var_548_bool)
{
	var_550_int = 0; var_551_string = ""; // 0xc70 PushV
	var_551_string = "ook12Danko1"; // 0xc71 MovS
	func_2864(var_550_int, var_551_string); // 0xc72 NEW_2
	var_552_int = 0; // 0xc74 PushI
	var_553_bool = var_550_int == var_552_int; // 0xc75 Eq
	if(var_553_bool == 0) goto Label_3193; // 0xc76 JumpB
	var_548_bool = 1; // 0xc77 MovB
	return 0; // 0xc78 Return
	
Label_3193:
	var_548_bool = 0; // 0xc79 MovB
	return 0; // 0xc7a Return
}


func_2166(var_2_object, var_689_string)
{
	var_690_bool = 0; // 0x877 PushV
	func_3004(var_690_bool); // 0x878 NEW_2
	var_691_bool = var_690_bool == 0; // 0x87a Not
	if(var_691_bool == 0) goto Label_2173; // 0x87b JumpB
	return 0; // 0x87c Return
	
Label_2173:
	var_692_bool = var_689_string == var_2_object; // 0x87d Eq
	if(var_692_bool == 0) goto Label_2176; // 0x87e JumpB
	return 0; // 0x87f Return
	
Label_2176:
	var_693_string = ""; var_694_bool = 0; // 0x880 PushV
	var_693_string = var_689_string; // 0x881 Mov
	var_695_string = ""; // 0x882 PushS
	var_696_bool = var_689_string == var_695_string; // 0x883 Eq
	if(var_696_bool == 0) goto Label_2183; // 0x884 JumpB
	var_694_bool = 0; // 0x885 MovB
	goto Label_2184; // 0x886 Jump
	
Label_2184:
	func_2800(var_693_string, var_694_bool); // 0x888 NEW_2
	var_2_object = var_689_string; // 0x88a TMov
	return 0; // 0x88b Return
	
Label_2183:
	var_694_bool = 1; // 0x887 MovB
}


func_630(var_0_object, var_429_int, var_430_object)
{
	var_432_object = Obj(); var_433_bool = 0; var_434_int = 0; var_435_bool = 0; var_436_object = Obj(); var_437_bool = 0; var_438_int = 0; var_439_bool = 0; // 0x276 PushV
	var_0_object = var_430_object; // 0x277 TMov
	var_440_bool = 0; var_441_object = Obj(); var_442_float = 0; // 0x278 PushV
	var_441_object = var_430_object; // 0x279 Mov
	var_442_float = 70.0; // 0x27a MovF
	func_2559(var_441_object, var_442_float); // 0x27b NEW_2
	var_443_bool = var_440_bool == 0; // 0x27d Not
	if(var_443_bool == 0) goto Label_641; // 0x27e JumpB
	var_429_int = -2; // 0x27f MovI
	return 8; // 0x280 Return
	
Label_641:
	CreateDialog(var_436_object); // 0x281 Func
	var_444_int = 0; // 0x283 PushV
	func_2998(var_444_int); // 0x284 NEW_2
	SetNPCName(var_444_int); // 0x286 ObjFunc
	var_445_int = 0; // 0x288 PushV
	func_2996(var_445_int); // 0x289 NEW_2
	SetNPCDescription(var_445_int); // 0x28b ObjFunc
	var_446_string = ""; // 0x28d PushV
	func_3000(var_446_string); // 0x28e NEW_2
	SetPhoto(var_446_string); // 0x290 ObjFunc
	var_447_string = ""; // 0x292 PushV
	func_3002(var_447_string); // 0x293 NEW_2
	SetPhoto2(var_447_string); // 0x295 ObjFunc
	var_448_int = 0; // 0x297 PushV
	func_3306(var_448_int); // 0x298 NEW_2
	SetPlayerName(var_448_int); // 0x29a ObjFunc
	var_438_int = -1; // 0x29c MovI
	IsOverrideActive(var_437_bool); // 0x29d Func
	var_449_bool = var_437_bool; // 0x29f Push
	if(var_449_bool == 0) goto Label_675; // 0x2a0 JumpB
	var_429_int = -2; // 0x2a1 MovI
	return 8; // 0x2a2 Return
	
Label_675:
	DoDialog(var_436_object); // 0x2a3 Func
	var_450_bool = 0; var_451_object = Obj(); // 0x2a5 PushV
	var_452_object = Obj(); // 0x2a6 PushV
	func_2837(var_452_object); // 0x2a7 NEW_2
	var_451_object = var_452_object; // 0x2a8 Mov
	func_2646(var_450_bool, var_451_object); // 0x2aa NEW_2
	var_453_object = Obj(); var_454_object = Obj(); // 0x2ac PushV
	var_453_object = var_430_object; // 0x2ad Mov
	var_454_object = var_436_object; // 0x2ae Mov
	TaskCall(5); // 0x2af TaskCall
	func_711(var_455_object, var_456_object, var_457_string, var_458_bool, var_453_object, var_454_object); // 0x2b0 NEW_2
	TaskReturn(); // 0x2b1 TaskReturn
	IsDialogEnd(var_439_bool); // 0x2b3 ObjFunc
	
Label_693:
	var_505_bool = var_439_bool == 0; // 0x2b5 Not
	if(var_505_bool == 0) goto Label_700; // 0x2b6 JumpB
	sync(); // 0x2b7 Func
	IsDialogEnd(var_439_bool); // 0x2b9 ObjFunc
	goto Label_693; // 0x2bb Jump
	
Label_700:
	var_506_object = Obj(); // 0x2bc PushV
	var_506_object = var_430_object; // 0x2bd Mov
	func_2628(); // 0x2be NEW_2
	StopDialog(var_436_object); // 0x2c0 Func
	GetReturnValue(var_438_int); // 0x2c2 ObjFunc
	var_429_int = var_438_int; // 0x2c4 Mov
	return 8; // 0x2c5 Return
}


func_2935(var_82_float)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0xb77 PushV
	CreateFloatVector(var_84_object); // 0xb78 Func
	add(var_82_float); // 0xb7a ObjFunc
	var_85_int = 16; // 0xb7c PushI
	SendWorldWndMessage(var_85_int, var_84_object); // 0xb7d Func
	return 2; // 0xb7f Return
}


func_3195(var_324_bool)
{
	var_326_int = 0; var_327_string = ""; // 0xc7c PushV
	var_327_string = "k5q04"; // 0xc7d MovS
	func_2864(var_326_int, var_327_string); // 0xc7e NEW_2
	var_330_int = 2; // 0xc80 PushI
	var_331_bool = var_326_int == var_330_int; // 0xc81 Eq
	if(var_331_bool == 0) goto Label_3205; // 0xc82 JumpB
	var_324_bool = 1; // 0xc83 MovB
	return 0; // 0xc84 Return
	
Label_3205:
	var_324_bool = 0; // 0xc85 MovB
	return 0; // 0xc86 Return
}


func_2945(var_39_bool, var_40_string, var_41_string)
{
	var_42_object = Obj(); var_43_object = Obj(); // 0xb81 PushV
	FindActor(var_43_object, var_40_string); // 0xb82 Func
	var_44_bool = var_43_object == 0; // 0xb84 NullEq
	if(var_44_bool == 0) goto Label_2952; // 0xb85 JumpB
	var_39_bool = 0; // 0xb86 MovB
	return 2; // 0xb87 Return
	
Label_2952:
	Trigger(var_43_object, var_41_string); // 0xb88 Func
	var_39_bool = 1; // 0xb8a MovB
	return 2; // 0xb8b Return
}


func_1668(var_0_object, var_284_int, var_285_object)
{
	var_287_object = Obj(); var_288_bool = 0; var_289_int = 0; var_290_bool = 0; var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0; // 0x684 PushV
	var_0_object = var_285_object; // 0x685 TMov
	var_295_bool = 0; var_296_object = Obj(); var_297_float = 0; // 0x686 PushV
	var_296_object = var_285_object; // 0x687 Mov
	var_297_float = 70.0; // 0x688 MovF
	func_2559(var_296_object, var_297_float); // 0x689 NEW_2
	var_298_bool = var_295_bool == 0; // 0x68b Not
	if(var_298_bool == 0) goto Label_1679; // 0x68c JumpB
	var_284_int = -2; // 0x68d MovI
	return 8; // 0x68e Return
	
Label_1679:
	CreateDialog(var_291_object); // 0x68f Func
	var_299_int = 0; // 0x691 PushV
	func_2998(var_299_int); // 0x692 NEW_2
	SetNPCName(var_299_int); // 0x694 ObjFunc
	var_300_int = 0; // 0x696 PushV
	func_2996(var_300_int); // 0x697 NEW_2
	SetNPCDescription(var_300_int); // 0x699 ObjFunc
	var_301_string = ""; // 0x69b PushV
	func_3000(var_301_string); // 0x69c NEW_2
	SetPhoto(var_301_string); // 0x69e ObjFunc
	var_302_string = ""; // 0x6a0 PushV
	func_3002(var_302_string); // 0x6a1 NEW_2
	SetPhoto2(var_302_string); // 0x6a3 ObjFunc
	var_303_int = 0; // 0x6a5 PushV
	func_3306(var_303_int); // 0x6a6 NEW_2
	SetPlayerName(var_303_int); // 0x6a8 ObjFunc
	var_293_int = -1; // 0x6aa MovI
	IsOverrideActive(var_292_bool); // 0x6ab Func
	var_304_bool = var_292_bool; // 0x6ad Push
	if(var_304_bool == 0) goto Label_1713; // 0x6ae JumpB
	var_284_int = -2; // 0x6af MovI
	return 8; // 0x6b0 Return
	
Label_1713:
	DoDialog(var_291_object); // 0x6b1 Func
	var_305_bool = 0; var_306_object = Obj(); // 0x6b3 PushV
	var_307_object = Obj(); // 0x6b4 PushV
	func_2837(var_307_object); // 0x6b5 NEW_2
	var_306_object = var_307_object; // 0x6b6 Mov
	func_2646(var_305_bool, var_306_object); // 0x6b8 NEW_2
	var_308_object = Obj(); var_309_object = Obj(); // 0x6ba PushV
	var_308_object = var_285_object; // 0x6bb Mov
	var_309_object = var_291_object; // 0x6bc Mov
	TaskCall(9); // 0x6bd TaskCall
	func_1749(var_310_object, var_311_object, var_312_string, var_313_bool, var_308_object, var_309_object); // 0x6be NEW_2
	TaskReturn(); // 0x6bf TaskReturn
	IsDialogEnd(var_294_bool); // 0x6c1 ObjFunc
	
Label_1731:
	var_349_bool = var_294_bool == 0; // 0x6c3 Not
	if(var_349_bool == 0) goto Label_1738; // 0x6c4 JumpB
	sync(); // 0x6c5 Func
	IsDialogEnd(var_294_bool); // 0x6c7 ObjFunc
	goto Label_1731; // 0x6c9 Jump
	
Label_1738:
	var_350_object = Obj(); // 0x6ca PushV
	var_350_object = var_285_object; // 0x6cb Mov
	func_2628(); // 0x6cc NEW_2
	StopDialog(var_291_object); // 0x6ce Func
	GetReturnValue(var_293_int); // 0x6d0 ObjFunc
	var_284_int = var_293_int; // 0x6d2 Mov
	return 8; // 0x6d3 Return
}


func_3207(var_600_bool)
{
	var_602_bool = 0; // 0xc88 PushV
	func_3376(var_602_bool); // 0xc89 NEW_2
	var_600_bool = var_602_bool; // 0xc8a Mov
	return 0; // 0xc8c Return
}


func_139(var_2_object, var_228_string)
{
	var_229_bool = 0; // 0x8c PushV
	func_3004(var_229_bool); // 0x8d NEW_2
	var_230_bool = var_229_bool == 0; // 0x8f Not
	if(var_230_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_231_bool = var_228_string == var_2_object; // 0x92 Eq
	if(var_231_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_232_string = ""; var_233_bool = 0; // 0x95 PushV
	var_232_string = var_228_string; // 0x96 Mov
	var_234_string = ""; // 0x97 PushS
	var_235_bool = var_228_string == var_234_string; // 0x98 Eq
	if(var_235_bool == 0) goto Label_156; // 0x99 JumpB
	var_233_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2800(var_232_string, var_233_bool); // 0x9d NEW_2
	var_2_object = var_228_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_233_bool = 1; // 0x9c MovB
}


func_3213()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0xc8d PushV
	var_78_int = 730; // 0xc8e PushI
	var_79_int = 1; // 0xc8f PushI
	var_80_int = 539360; // 0xc90 PushI
	CreateDiaryEntry(var_77_object, var_78_int, var_79_int, var_80_int); // 0xc91 Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0xc93 PushV
	var_82_object = var_77_object; // 0xc94 Mov
	var_83_int = 729; // 0xc95 MovI
	func_3278(var_81_bool, var_82_object, var_83_int); // 0xc96 NEW_2
	return 2; // 0xc98 Return
}


func_2957(var_181_int)
{
	var_182_float = 0; var_183_float = 0; // 0xb8d PushV
	GetGameTime(var_183_float); // 0xb8e Func
	var_184_int = 1; // 0xb90 PushI
	var_185_int = 0; // 0xb91 PushV
	var_186_int = 24; // 0xb92 PushI
	var_185_int = var_183_float / var_183_float; // 0xb93 Div2
	var_181_int = var_184_int + var_185_int; // 0xb94 Add2
	return 2; // 0xb95 Return
}


func_2704(var_137_bool)
{
	var_139_string = ""; var_140_int = 0; var_141_bool = 0; var_142_int = 0; var_143_string = ""; var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; // 0xa90 PushV
	var_144_string = "c"; // 0xa91 MovS
	var_145_int = 0; // 0xa92 MovI
	
Label_2707:
	var_149_int = 1; // 0xa93 PushI
	if(var_149_int == 0) goto Label_2720; // 0xa94 JumpB
	var_150_int = 1; // 0xa95 PushI
	var_151_int = var_145_int + var_150_int; // 0xa96 Add
	var_152_int = var_144_string + var_151_int; // 0xa97 Add
	HasProperty(var_152_int, var_146_bool); // 0xa98 ObjFunc
	var_153_bool = var_146_bool == 0; // 0xa9a Not
	if(var_153_bool == 0) goto Label_2717; // 0xa9b JumpB
	goto Label_2720; // 0xa9c Jump
	
Label_2720:
	var_154_bool = var_145_int == 0; // 0xaa0 Not
	if(var_154_bool == 0) goto Label_2724; // 0xaa1 JumpB
	var_137_bool = 0; // 0xaa2 MovB
	return 10; // 0xaa3 Return
	
Label_2724:
	var_147_int = 0; // 0xaa4 MovI
	var_155_int = 1; // 0xaa5 PushI
	var_156_bool = var_145_int > var_155_int; // 0xaa6 GT
	if(var_156_bool == 0) goto Label_2730; // 0xaa7 JumpB
	irand(var_147_int, var_145_int); // 0xaa8 Func
	
Label_2730:
	var_157_int = 1; // 0xaaa PushI
	var_158_int = var_147_int + var_157_int; // 0xaab Add
	var_159_int = var_144_string + var_158_int; // 0xaac Add
	GetProperty(var_159_int, var_148_string); // 0xaad ObjFunc
	var_160_bool = 0; var_161_string = ""; // 0xaaf PushV
	var_161_string = var_148_string; // 0xab0 Mov
	func_2815(var_160_bool, var_161_string); // 0xab1 NEW_2
	var_137_bool = var_160_bool; // 0xab2 Mov
	return 10; // 0xab4 Return
	
Label_2717:
	var_166_int = 1; // 0xa9d PushI
	var_145_int = var_145_int + var_166_int; // 0xa9e Add2
	goto Label_2707; // 0xa9f Jump
}


func_1169(var_2_object, var_562_string)
{
	var_563_bool = 0; // 0x492 PushV
	func_3004(var_563_bool); // 0x493 NEW_2
	var_564_bool = var_563_bool == 0; // 0x495 Not
	if(var_564_bool == 0) goto Label_1176; // 0x496 JumpB
	return 0; // 0x497 Return
	
Label_1176:
	var_565_bool = var_562_string == var_2_object; // 0x498 Eq
	if(var_565_bool == 0) goto Label_1179; // 0x499 JumpB
	return 0; // 0x49a Return
	
Label_1179:
	var_566_string = ""; var_567_bool = 0; // 0x49b PushV
	var_566_string = var_562_string; // 0x49c Mov
	var_568_string = ""; // 0x49d PushS
	var_569_bool = var_562_string == var_568_string; // 0x49e Eq
	if(var_569_bool == 0) goto Label_1186; // 0x49f JumpB
	var_567_bool = 0; // 0x4a0 MovB
	goto Label_1187; // 0x4a1 Jump
	
Label_1187:
	func_2800(var_566_string, var_567_bool); // 0x4a3 NEW_2
	var_2_object = var_562_string; // 0x4a5 TMov
	return 0; // 0x4a6 Return
	
Label_1186:
	var_567_bool = 1; // 0x4a2 MovB
}


func_2966(var_281_bool, var_282_int)
{
	var_283_int = 0; // 0xb97 PushV
	func_2957(var_283_int); // 0xb98 NEW_2
	var_281_bool = var_283_int == var_282_int; // 0xb9a Eq2
	return 0; // 0xb9b Return
}


func_3226()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0xc9a PushV
	var_49_int = 736; // 0xc9b PushI
	var_50_int = 1; // 0xc9c PushI
	var_51_int = 539366; // 0xc9d PushI
	CreateDiaryEntry(var_48_object, var_49_int, var_50_int, var_51_int); // 0xc9e Func
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0; // 0xca0 PushV
	var_53_object = var_48_object; // 0xca1 Mov
	var_54_int = 729; // 0xca2 MovI
	func_3278(var_52_bool, var_53_object, var_54_int); // 0xca3 NEW_2
	return 2; // 0xca5 Return
}


func_2972(var_55_string, var_56_int)
{
	var_57_string = ""; var_58_string = ""; // 0xb9c PushV
	var_58_string = "idle"; // 0xb9d MovS
	var_59_int = var_56_int; // 0xb9e Push
	if(var_59_int == 0) goto Label_2977; // 0xb9f JumpB
	var_58_string = var_58_string + var_56_int; // 0xba0 Add2
	
Label_2977:
	var_55_string = var_58_string; // 0xba1 Mov
	return 2; // 0xba2 Return
}


func_418(var_2_object, var_394_string)
{
	var_395_bool = 0; // 0x1a3 PushV
	func_3004(var_395_bool); // 0x1a4 NEW_2
	var_396_bool = var_395_bool == 0; // 0x1a6 Not
	if(var_396_bool == 0) goto Label_425; // 0x1a7 JumpB
	return 0; // 0x1a8 Return
	
Label_425:
	var_397_bool = var_394_string == var_2_object; // 0x1a9 Eq
	if(var_397_bool == 0) goto Label_428; // 0x1aa JumpB
	return 0; // 0x1ab Return
	
Label_428:
	var_398_string = ""; var_399_bool = 0; // 0x1ac PushV
	var_398_string = var_394_string; // 0x1ad Mov
	var_400_string = ""; // 0x1ae PushS
	var_401_bool = var_394_string == var_400_string; // 0x1af Eq
	if(var_401_bool == 0) goto Label_435; // 0x1b0 JumpB
	var_399_bool = 0; // 0x1b1 MovB
	goto Label_436; // 0x1b2 Jump
	
Label_436:
	func_2800(var_398_string, var_399_bool); // 0x1b4 NEW_2
	var_2_object = var_394_string; // 0x1b6 TMov
	return 0; // 0x1b7 Return
	
Label_435:
	var_399_bool = 1; // 0x1b3 MovB
}


func_2979(var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0xba3 PushV
	var_52_int = 0; // 0xba4 MovI
	
Label_2981:
	var_54_string = "all"; // 0xba5 PushS
	var_55_string = ""; var_56_int = 0; // 0xba6 PushV
	var_56_int = var_52_int; // 0xba7 Mov
	func_2972(var_55_string, var_56_int); // 0xba8 NEW_2
	HasAnimation(var_53_bool, var_54_string, var_55_string); // 0xbaa Func
	var_60_bool = var_53_bool == 0; // 0xbac Not
	if(var_60_bool == 0) goto Label_2991; // 0xbad JumpB
	goto Label_2994; // 0xbae Jump
	
Label_2994:
	var_49_int = var_52_int; // 0xbb2 Mov
	return 4; // 0xbb3 Return
	
Label_2991:
	var_61_int = 1; // 0xbaf PushI
	var_52_int = var_52_int + var_61_int; // 0xbb0 Add2
	goto Label_2981; // 0xbb1 Jump
}


func_3239()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0xca7 PushV
	var_51_int = 743; // 0xca8 PushI
	var_52_int = 2; // 0xca9 PushI
	var_53_int = 539460; // 0xcaa PushI
	CreateDiaryEntry(var_50_object, var_51_int, var_52_int, var_53_int); // 0xcab Func
	var_54_bool = 0; var_55_object = Obj(); var_56_int = 0; // 0xcad PushV
	var_55_object = var_50_object; // 0xcae Mov
	var_56_int = 740; // 0xcaf MovI
	func_3278(var_54_bool, var_55_object, var_56_int); // 0xcb0 NEW_2
	return 2; // 0xcb2 Return
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


func_3252()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0xcb4 PushV
	var_49_int = 415; // 0xcb5 PushI
	var_50_int = 1; // 0xcb6 PushI
	var_51_int = 526116; // 0xcb7 PushI
	CreateDiaryEntry(var_48_object, var_49_int, var_50_int, var_51_int); // 0xcb8 Func
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0; // 0xcba PushV
	var_53_object = var_48_object; // 0xcbb Mov
	var_54_int = 408; // 0xcbc MovI
	func_3278(var_52_bool, var_53_object, var_54_int); // 0xcbd NEW_2
	return 2; // 0xcbf Return
}


func_2741(var_168_bool)
{
	var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; // 0xab5 PushV
	var_180_string = "d"; // 0xab6 PushS
	var_181_int = 0; // 0xab7 PushV
	func_2957(var_181_int); // 0xab8 NEW_2
	var_187_int = var_180_string + var_181_int; // 0xaba Add
	var_188_string = "m"; // 0xabb PushS
	var_175_string = var_187_int + var_188_string; // 0xabc Add2
	var_176_int = 0; // 0xabd MovI
	
Label_2750:
	var_189_int = 1; // 0xabe PushI
	if(var_189_int == 0) goto Label_2763; // 0xabf JumpB
	var_190_int = 1; // 0xac0 PushI
	var_191_int = var_176_int + var_190_int; // 0xac1 Add
	var_192_int = var_175_string + var_191_int; // 0xac2 Add
	HasProperty(var_192_int, var_177_bool); // 0xac3 ObjFunc
	var_193_bool = var_177_bool == 0; // 0xac5 Not
	if(var_193_bool == 0) goto Label_2760; // 0xac6 JumpB
	goto Label_2763; // 0xac7 Jump
	
Label_2763:
	var_194_bool = var_176_int == 0; // 0xacb Not
	if(var_194_bool == 0) goto Label_2767; // 0xacc JumpB
	var_168_bool = 0; // 0xacd MovB
	return 10; // 0xace Return
	
Label_2767:
	var_178_int = 0; // 0xacf MovI
	var_195_int = 1; // 0xad0 PushI
	var_196_bool = var_176_int > var_195_int; // 0xad1 GT
	if(var_196_bool == 0) goto Label_2773; // 0xad2 JumpB
	irand(var_178_int, var_176_int); // 0xad3 Func
	
Label_2773:
	var_197_int = 1; // 0xad5 PushI
	var_198_int = var_178_int + var_197_int; // 0xad6 Add
	var_199_int = var_175_string + var_198_int; // 0xad7 Add
	GetProperty(var_199_int, var_179_string); // 0xad8 ObjFunc
	var_200_bool = 0; var_201_string = ""; // 0xada PushV
	var_201_string = var_179_string; // 0xadb Mov
	func_2815(var_200_bool, var_201_string); // 0xadc NEW_2
	var_168_bool = var_200_bool; // 0xadd Mov
	return 10; // 0xadf Return
	
Label_2760:
	var_202_int = 1; // 0xac8 PushI
	var_176_int = var_176_int + var_202_int; // 0xac9 Add2
	goto Label_2750; // 0xaca Jump
}


func_2996(var_114_int)
{
	var_114_int = 515573; // 0xbb4 MovI
	return 0; // 0xbb5 Return
}


func_2998(var_113_int)
{
	var_113_int = 504032; // 0xbb6 MovI
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
	var_115_string = "ui/NPC_Bakalavr.png"; // 0xbb8 MovS
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


func_3002(var_116_string)
{
	var_116_string = "ui/NPC_Bakalavr_b.png"; // 0xbba MovS
	return 0; // 0xbbb Return
}


func_955(var_0_object, var_509_int, var_510_object)
{
	var_512_object = Obj(); var_513_bool = 0; var_514_int = 0; var_515_bool = 0; var_516_object = Obj(); var_517_bool = 0; var_518_int = 0; var_519_bool = 0; // 0x3bb PushV
	var_0_object = var_510_object; // 0x3bc TMov
	var_520_bool = 0; var_521_object = Obj(); var_522_float = 0; // 0x3bd PushV
	var_521_object = var_510_object; // 0x3be Mov
	var_522_float = 70.0; // 0x3bf MovF
	func_2559(var_521_object, var_522_float); // 0x3c0 NEW_2
	var_523_bool = var_520_bool == 0; // 0x3c2 Not
	if(var_523_bool == 0) goto Label_966; // 0x3c3 JumpB
	var_509_int = -2; // 0x3c4 MovI
	return 8; // 0x3c5 Return
	
Label_966:
	CreateDialog(var_516_object); // 0x3c6 Func
	var_524_int = 0; // 0x3c8 PushV
	func_2998(var_524_int); // 0x3c9 NEW_2
	SetNPCName(var_524_int); // 0x3cb ObjFunc
	var_525_int = 0; // 0x3cd PushV
	func_2996(var_525_int); // 0x3ce NEW_2
	SetNPCDescription(var_525_int); // 0x3d0 ObjFunc
	var_526_string = ""; // 0x3d2 PushV
	func_3000(var_526_string); // 0x3d3 NEW_2
	SetPhoto(var_526_string); // 0x3d5 ObjFunc
	var_527_string = ""; // 0x3d7 PushV
	func_3002(var_527_string); // 0x3d8 NEW_2
	SetPhoto2(var_527_string); // 0x3da ObjFunc
	var_528_int = 0; // 0x3dc PushV
	func_3306(var_528_int); // 0x3dd NEW_2
	SetPlayerName(var_528_int); // 0x3df ObjFunc
	var_518_int = -1; // 0x3e1 MovI
	IsOverrideActive(var_517_bool); // 0x3e2 Func
	var_529_bool = var_517_bool; // 0x3e4 Push
	if(var_529_bool == 0) goto Label_1000; // 0x3e5 JumpB
	var_509_int = -2; // 0x3e6 MovI
	return 8; // 0x3e7 Return
	
Label_1000:
	DoDialog(var_516_object); // 0x3e8 Func
	var_530_bool = 0; var_531_object = Obj(); // 0x3ea PushV
	var_532_object = Obj(); // 0x3eb PushV
	func_2837(var_532_object); // 0x3ec NEW_2
	var_531_object = var_532_object; // 0x3ed Mov
	func_2646(var_530_bool, var_531_object); // 0x3ef NEW_2
	var_533_object = Obj(); var_534_object = Obj(); // 0x3f1 PushV
	var_533_object = var_510_object; // 0x3f2 Mov
	var_534_object = var_516_object; // 0x3f3 Mov
	TaskCall(7); // 0x3f4 TaskCall
	func_1036(var_535_object, var_536_object, var_537_string, var_538_bool, var_533_object, var_534_object); // 0x3f5 NEW_2
	TaskReturn(); // 0x3f6 TaskReturn
	IsDialogEnd(var_519_bool); // 0x3f8 ObjFunc
	
Label_1018:
	var_656_bool = var_519_bool == 0; // 0x3fa Not
	if(var_656_bool == 0) goto Label_1025; // 0x3fb JumpB
	sync(); // 0x3fc Func
	IsDialogEnd(var_519_bool); // 0x3fe ObjFunc
	goto Label_1018; // 0x400 Jump
	
Label_1025:
	var_657_object = Obj(); // 0x401 PushV
	var_657_object = var_510_object; // 0x402 Mov
	func_2628(); // 0x403 NEW_2
	StopDialog(var_516_object); // 0x405 Func
	GetReturnValue(var_518_int); // 0x407 ObjFunc
	var_509_int = var_518_int; // 0x409 Mov
	return 8; // 0x40a Return
}


func_3004(var_108_bool)
{
	var_108_bool = 1; // 0xbbc MovB
	return 0; // 0xbbd Return
}


func_3006()
{
	var_392_string = "ook6Danko1"; // 0xbbf PushS
	var_393_int = 1; // 0xbc0 PushI
	SetVariable(var_392_string, var_393_int); // 0xbc1 Func
	return 0; // 0xbc3 Return
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


func_3265(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj(); // 0xcc1 PushV
	GetDiaryRoot(var_65_object); // 0xcc2 Func
	var_66_bool = var_65_object == 0; // 0xcc4 Not
	if(var_66_bool == 0) goto Label_3275; // 0xcc5 JumpB
	var_67_string = "Can't retrieve diary root"; // 0xcc6 PushS
	Trace(var_67_string); // 0xcc7 Func
	var_63_object = 0; // 0xcc9 MovB
	return 2; // 0xcca Return
	
Label_3275:
	var_63_object = var_65_object; // 0xccb Mov
	return 2; // 0xccc Return
}


func_3012()
{
	var_39_bool = 0; var_40_string = ""; var_41_string = ""; // 0xbc5 PushV
	var_40_string = "quest_k6_01"; // 0xbc6 MovS
	var_41_string = "teleport"; // 0xbc7 MovS
	func_2945(var_39_bool, var_40_string, var_41_string); // 0xbc8 NEW_2
	return 0; // 0xbca Return
}


func_711(var_0_object, var_1_object, var_2_object, var_3_string, var_453_object, var_454_object)
{
	var_0_object = var_454_object; // 0x2c8 TMov
	var_1_object = var_453_object; // 0x2c9 TMov
	var_3_string = 0; // 0x2ca TMovB
	var_459_int = 1; // 0x2cb PushI
	if(var_459_int == 0) goto Label_773; // 0x2cc JumpB
	var_460_bool = 0; // 0x2cd PushV
	var_460_bool = 0; // 0x2ce MovB
	var_461_bool = 0; var_462_object = Obj(); // 0x2cf PushV
	var_462_object = var_1_object; // 0x2d0 MovT
	func_3147(var_462_object); // 0x2d1 NEW_2
	if(var_461_bool == 0) goto Label_730; // 0x2d3 JumpB
	var_467_bool = 0; var_468_object = Obj(); // 0x2d4 PushV
	var_468_object = var_1_object; // 0x2d5 MovT
	func_3159(var_468_object); // 0x2d6 NEW_2
	if(var_467_bool == 0) goto Label_730; // 0x2d8 JumpB
	var_460_bool = 1; // 0x2d9 MovB
	
Label_730:
	if(var_460_bool == 0) goto Label_756; // 0x2da JumpB
	var_473_object = Obj(); var_474_object = Obj(); // 0x2db PushV
	var_473_object = var_1_object; // 0x2dc MovT
	var_474_object = var_0_object; // 0x2dd MovT
	func_3029(); // 0x2de NEW_2
	var_477_string = ""; // 0x2e0 PushV
	var_477_string = "Neutral"; // 0x2e1 MovS
	func_803(var_454_object, var_477_string); // 0x2e2 NEW_2
	var_485_int = 526118; // 0x2e4 PushI
	SetMessage(var_485_int); // 0x2e5 TObjFunc
	ClearReplies(); // 0x2e7 TObjFunc
	var_486_int = 528252; // 0x2e9 PushI
	var_487_int = 29614; // 0x2ea PushI
	var_488_int = 29613; // 0x2eb PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x2ec TObjFunc
	var_489_int = 528256; // 0x2ee PushI
	var_490_int = 29614; // 0x2ef PushI
	var_491_int = 29617; // 0x2f0 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x2f1 TObjFunc
	goto Label_773; // 0x2f3 Jump
	
Label_773:
	var_492_bool = 0; // 0x305 PushV
	func_3004(var_492_bool); // 0x306 NEW_2
	if(var_492_bool == 0) goto Label_788; // 0x308 JumpB
	
Label_777:
	lshWaitForAnimEnd(); // 0x309 Func
	var_493_string = var_3_string; // 0x30b PushT
	if(var_493_string == 0) goto Label_782; // 0x30c JumpB
	goto Label_787; // 0x30d Jump
	
Label_787:
	goto Label_802; // 0x313 Jump
	
Label_802:
	return 0; // 0x322 Return
	
Label_782:
	var_494_string = ""; // 0x30e PushV
	var_494_string = var_2_object; // 0x30f MovT
	func_2784(var_494_string); // 0x310 NEW_2
	goto Label_777; // 0x312 Jump
	
Label_788:
	var_495_string = "all"; // 0x314 PushS
	var_496_string = "idle"; // 0x315 PushS
	PlayAnimation(var_495_string, var_496_string); // 0x316 Func
	
Label_792:
	WaitForAnimEnd(); // 0x318 Func
	var_497_string = var_3_string; // 0x31a PushT
	if(var_497_string == 0) goto Label_797; // 0x31b JumpB
	goto Label_802; // 0x31c Jump
	
Label_797:
	var_498_string = "all"; // 0x31d PushS
	var_499_string = "idle"; // 0x31e PushS
	PlayAnimation(var_498_string, var_499_string); // 0x31f Func
	goto Label_792; // 0x321 Jump
	
Label_756:
	var_500_string = ""; // 0x2f4 PushV
	var_500_string = "Sorrow"; // 0x2f5 MovS
	func_803(var_454_object, var_500_string); // 0x2f6 NEW_2
	var_501_int = 526120; // 0x2f8 PushI
	SetMessage(var_501_int); // 0x2f9 TObjFunc
	ClearReplies(); // 0x2fb TObjFunc
	var_502_int = 526121; // 0x2fd PushI
	var_503_int = -1; // 0x2fe PushI
	var_504_int = 27400; // 0x2ff PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x300 TObjFunc
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
	func_2853(var_104_float, var_105_float, var_106_float, var_107_float); // 0x9da NEW_2
	SetProperty(var_88_string, var_104_float); // 0x9dc ObjFunc
	var_86_bool = 1; // 0x9de MovB
	return 2; // 0x9df Return
}


func_3019()
{
	func_3252(); // 0xbcd NEW_2
	var_70_bool = 0; var_71_string = ""; var_72_string = ""; // 0xbcf PushV
	var_71_string = "quest_k6_01"; // 0xbd0 MovS
	var_72_string = "completed"; // 0xbd1 MovS
	func_2945(var_70_bool, var_71_string, var_72_string); // 0xbd2 NEW_2
	return 0; // 0xbd4 Return
}


func_3278(var_54_bool, var_55_object, var_56_int)
{
	var_57_object = Obj(); var_58_object = Obj(); var_59_int = 0; var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; // 0xcce PushV
	var_63_object = Obj(); // 0xccf PushV
	func_3265(var_63_object); // 0xcd0 NEW_2
	var_60_object = var_63_object; // 0xcd1 Mov
	Find(var_56_int, var_61_object); // 0xcd3 ObjFunc
	var_68_bool = var_61_object == 0; // 0xcd5 Not
	if(var_68_bool == 0) goto Label_3293; // 0xcd6 JumpB
	var_69_string = "Can't find diary parent with id: "; // 0xcd7 PushS
	var_70_int = var_69_string + var_56_int; // 0xcd8 Add
	Trace(var_70_int); // 0xcd9 Func
	var_54_bool = 0; // 0xcdb MovB
	return 6; // 0xcdc Return
	
Label_3293:
	AddChild(var_55_object); // 0xcdd ObjFunc
	var_71_int = 7; // 0xcdf PushI
	SendWorldWndMessage(var_71_int); // 0xce0 Func
	GetCategory(var_62_int); // 0xce2 ObjFunc
	SetDiarySection(var_62_int); // 0xce4 Func
	var_54_bool = 0; // 0xce6 MovB
	return 6; // 0xce7 Return
}


func_1749(var_0_object, var_1_object, var_2_object, var_3_string, var_308_object, var_309_object)
{
	var_0_object = var_309_object; // 0x6d6 TMov
	var_1_object = var_308_object; // 0x6d7 TMov
	var_3_string = 0; // 0x6d8 TMovB
	var_314_int = 1; // 0x6d9 PushI
	if(var_314_int == 0) goto Label_1787; // 0x6da JumpB
	var_315_string = ""; // 0x6db PushV
	var_315_string = "Neutral"; // 0x6dc MovS
	func_1817(var_309_object, var_315_string); // 0x6dd NEW_2
	var_323_int = 539435; // 0x6df PushI
	SetMessage(var_323_int); // 0x6e0 TObjFunc
	ClearReplies(); // 0x6e2 TObjFunc
	var_324_bool = 0; var_325_object = Obj(); // 0x6e4 PushV
	var_325_object = var_1_object; // 0x6e5 MovT
	func_3195(var_325_object); // 0x6e6 NEW_2
	if(var_324_bool == 0) goto Label_1774; // 0x6e8 JumpB
	var_332_int = 539436; // 0x6e9 PushI
	var_333_int = 42812; // 0x6ea PushI
	var_334_int = 41367; // 0x6eb PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x6ec TObjFunc
	
Label_1774:
	var_335_int = 539439; // 0x6ee PushI
	var_336_int = -1; // 0x6ef PushI
	var_337_int = 41370; // 0x6f0 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x6f1 TObjFunc
	var_338_int = 540767; // 0x6f3 PushI
	var_339_int = -1; // 0x6f4 PushI
	var_340_int = 42811; // 0x6f5 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x6f6 TObjFunc
	goto Label_1787; // 0x6f8 Jump
	
Label_1787:
	var_341_bool = 0; // 0x6fb PushV
	func_3004(var_341_bool); // 0x6fc NEW_2
	if(var_341_bool == 0) goto Label_1802; // 0x6fe JumpB
	
Label_1791:
	lshWaitForAnimEnd(); // 0x6ff Func
	var_342_string = var_3_string; // 0x701 PushT
	if(var_342_string == 0) goto Label_1796; // 0x702 JumpB
	goto Label_1801; // 0x703 Jump
	
Label_1801:
	goto Label_1816; // 0x709 Jump
	
Label_1816:
	return 0; // 0x718 Return
	
Label_1796:
	var_343_string = ""; // 0x704 PushV
	var_343_string = var_2_object; // 0x705 MovT
	func_2784(var_343_string); // 0x706 NEW_2
	goto Label_1791; // 0x708 Jump
	
Label_1802:
	var_344_string = "all"; // 0x70a PushS
	var_345_string = "idle"; // 0x70b PushS
	PlayAnimation(var_344_string, var_345_string); // 0x70c Func
	
Label_1806:
	WaitForAnimEnd(); // 0x70e Func
	var_346_string = var_3_string; // 0x710 PushT
	if(var_346_string == 0) goto Label_1811; // 0x711 JumpB
	goto Label_1816; // 0x712 Jump
	
Label_1811:
	var_347_string = "all"; // 0x713 PushS
	var_348_string = "idle"; // 0x714 PushS
	PlayAnimation(var_347_string, var_348_string); // 0x715 Func
	goto Label_1806; // 0x717 Jump
}


func_3029()
{
	var_475_string = "ook7Danko1"; // 0xbd6 PushS
	var_476_int = 1; // 0xbd7 PushI
	SetVariable(var_475_string, var_476_int); // 0xbd8 Func
	return 0; // 0xbda Return
}


func_2263(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0x8d7 PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0x8d8 PushE
	RotateAsync(var_108_float, var_109_float); // 0x8d9 Func
	return 0; // 0x8db Return
}


func_3035(var_37_object)
{
	var_39_string = "money1000 is given"; // 0xbdc PushS
	Trace(var_39_string); // 0xbdd Func
	var_40_object = Obj(); var_41_int = 0; // 0xbdf PushV
	var_40_object = var_37_object; // 0xbe0 Mov
	var_41_int = 1000; // 0xbe1 MovI
	func_2881(var_40_object, var_41_int); // 0xbe2 NEW_2
	return 0; // 0xbe4 Return
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


func_2784(var_254_string)
{
	var_255_bool = 0; var_256_float = 0; var_257_float = 0; var_258_bool = 0; var_259_float = 0; var_260_float = 0; // 0xae0 PushV
	lshHasAnimation(var_258_bool, var_254_string); // 0xae1 Func
	var_261_bool = var_258_bool; // 0xae3 Push
	if(var_261_bool == 0) goto Label_2795; // 0xae4 JumpB
	lshGetAnimTimes(var_254_string, var_259_float, var_260_float); // 0xae5 Func
	var_262_bool = 0; // 0xae7 PushB
	lshPlayAnimation(var_259_float, var_260_float, var_262_bool); // 0xae8 Func
	goto Label_2799; // 0xaea Jump
	
Label_2799:
	return 6; // 0xaef Return
	
Label_2795:
	var_263_string = "Can't find lsh animation : "; // 0xaeb PushS
	var_264_int = var_263_string + var_254_string; // 0xaec Add
	Trace(var_264_int); // 0xaed Func
}


func_2528(var_45_string, var_46_int)
{
	var_47_int = 0; var_48_int = 0; // 0x9e0 PushV
	GetProperty(var_45_string, var_48_int); // 0x9e1 ObjFunc
	var_49_int = var_48_int + var_46_int; // 0x9e3 Add
	SetProperty(var_45_string, var_49_int); // 0x9e4 ObjFunc
	return 2; // 0x9e6 Return
}


func_3045()
{
	var_60_string = "playsound"; // 0xbe6 PushS
	var_61_string = "givemoney"; // 0xbe7 PushS
	TriggerWorld(var_60_string, var_61_string); // 0xbe8 Func
	return 0; // 0xbea Return
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


func_3306(var_117_int)
{
	var_118_int = 0; var_119_int = 0; // 0xcea PushV
	var_120_string = "branch"; // 0xceb PushS
	GetVariable(var_120_string, var_119_int); // 0xcec Func
	var_121_int = 0; // 0xcee PushI
	var_122_bool = var_119_int == var_121_int; // 0xcef Eq
	if(var_122_bool == 0) goto Label_3316; // 0xcf0 JumpB
	var_117_int = 1; // 0xcf1 MovI
	return 2; // 0xcf2 Return
	
Label_3316:
	var_123_int = 1; // 0xcf4 PushI
	var_124_bool = var_119_int == var_123_int; // 0xcf5 Eq
	if(var_124_bool == 0) goto Label_3321; // 0xcf6 JumpB
	var_117_int = 2; // 0xcf7 MovI
	return 2; // 0xcf8 Return
	
Label_3321:
	var_117_int = 3; // 0xcf9 MovI
	return 2; // 0xcfa Return
}


func_3051()
{
	var_74_string = "k12q01DankoInSobor"; // 0xbec PushS
	var_75_int = 1; // 0xbed PushI
	SetVariable(var_74_string, var_75_int); // 0xbee Func
	func_3213(); // 0xbf1 NEW_2
	return 0; // 0xbf3 Return
}


func_2027(var_0_object, var_658_int, var_659_object)
{
	var_661_object = Obj(); var_662_bool = 0; var_663_int = 0; var_664_bool = 0; var_665_object = Obj(); var_666_bool = 0; var_667_int = 0; var_668_bool = 0; // 0x7eb PushV
	var_0_object = var_659_object; // 0x7ec TMov
	var_669_bool = 0; var_670_object = Obj(); var_671_float = 0; // 0x7ed PushV
	var_670_object = var_659_object; // 0x7ee Mov
	var_671_float = 70.0; // 0x7ef MovF
	func_2559(var_670_object, var_671_float); // 0x7f0 NEW_2
	var_672_bool = var_669_bool == 0; // 0x7f2 Not
	if(var_672_bool == 0) goto Label_2038; // 0x7f3 JumpB
	var_658_int = -2; // 0x7f4 MovI
	return 8; // 0x7f5 Return
	
Label_2038:
	CreateDialog(var_665_object); // 0x7f6 Func
	var_673_int = 0; // 0x7f8 PushV
	func_2998(var_673_int); // 0x7f9 NEW_2
	SetNPCName(var_673_int); // 0x7fb ObjFunc
	var_674_int = 0; // 0x7fd PushV
	func_2996(var_674_int); // 0x7fe NEW_2
	SetNPCDescription(var_674_int); // 0x800 ObjFunc
	var_675_string = ""; // 0x802 PushV
	func_3000(var_675_string); // 0x803 NEW_2
	SetPhoto(var_675_string); // 0x805 ObjFunc
	var_676_string = ""; // 0x807 PushV
	func_3002(var_676_string); // 0x808 NEW_2
	SetPhoto2(var_676_string); // 0x80a ObjFunc
	var_677_int = 0; // 0x80c PushV
	func_3306(var_677_int); // 0x80d NEW_2
	SetPlayerName(var_677_int); // 0x80f ObjFunc
	var_667_int = -1; // 0x811 MovI
	IsOverrideActive(var_666_bool); // 0x812 Func
	var_678_bool = var_666_bool; // 0x814 Push
	if(var_678_bool == 0) goto Label_2072; // 0x815 JumpB
	var_658_int = -2; // 0x816 MovI
	return 8; // 0x817 Return
	
Label_2072:
	DoDialog(var_665_object); // 0x818 Func
	var_679_bool = 0; var_680_object = Obj(); // 0x81a PushV
	var_681_object = Obj(); // 0x81b PushV
	func_2837(var_681_object); // 0x81c NEW_2
	var_680_object = var_681_object; // 0x81d Mov
	func_2646(var_679_bool, var_680_object); // 0x81f NEW_2
	var_682_object = Obj(); var_683_object = Obj(); // 0x821 PushV
	var_682_object = var_659_object; // 0x822 Mov
	var_683_object = var_665_object; // 0x823 Mov
	TaskCall(11); // 0x824 TaskCall
	func_2108(var_684_object, var_685_object, var_686_string, var_687_bool, var_682_object, var_683_object); // 0x825 NEW_2
	TaskReturn(); // 0x826 TaskReturn
	IsDialogEnd(var_668_bool); // 0x828 ObjFunc
	
Label_2090:
	var_712_bool = var_668_bool == 0; // 0x82a Not
	if(var_712_bool == 0) goto Label_2097; // 0x82b JumpB
	sync(); // 0x82c Func
	IsDialogEnd(var_668_bool); // 0x82e ObjFunc
	goto Label_2090; // 0x830 Jump
	
Label_2097:
	var_713_object = Obj(); // 0x831 PushV
	var_713_object = var_659_object; // 0x832 Mov
	func_2628(); // 0x833 NEW_2
	StopDialog(var_665_object); // 0x835 Func
	GetReturnValue(var_667_int); // 0x837 ObjFunc
	var_658_int = var_667_int; // 0x839 Mov
	return 8; // 0x83a Return
}


func_2800(var_232_string, var_233_bool)
{
	var_236_bool = 0; var_237_float = 0; var_238_float = 0; var_239_bool = 0; var_240_float = 0; var_241_float = 0; // 0xaf0 PushV
	lshHasAnimation(var_239_bool, var_232_string); // 0xaf1 Func
	var_242_bool = var_239_bool; // 0xaf3 Push
	if(var_242_bool == 0) goto Label_2810; // 0xaf4 JumpB
	lshGetAnimTimes(var_232_string, var_240_float, var_241_float); // 0xaf5 Func
	lshPlayAnimation(var_240_float, var_241_float, var_233_bool); // 0xaf7 Func
	goto Label_2814; // 0xaf9 Jump
	
Label_2814:
	return 6; // 0xafe Return
	
Label_2810:
	var_243_string = "Can't find lsh animation : "; // 0xafa PushS
	var_244_int = var_243_string + var_232_string; // 0xafb Add
	Trace(var_244_int); // 0xafc Func
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
	var_716_float = 0; var_717_float = 0; // 0x8f2 PushV
	var_718_int = 8; // 0x8f3 PushI
	var_719_int = 16; // 0x8f4 PushI
	rand(var_717_float, var_718_int, var_719_int); // 0x8f5 Func
	var_720_int = 10; // 0x8f7 PushI
	SetTimer(var_720_int, var_717_float); // 0x8f8 Func
	return 2; // 0x8fa Return
}


func_3060()
{
	var_39_int = 0; var_40_string = ""; // 0xbf5 PushV
	var_40_string = "k12q01_Danko"; // 0xbf6 MovS
	func_2864(var_39_int, var_40_string); // 0xbf7 NEW_2
	var_43_int = 0; // 0xbf9 PushI
	var_44_bool = var_39_int == var_43_int; // 0xbfa Eq
	if(var_44_bool == 0) goto Label_3075; // 0xbfb JumpB
	var_45_string = "k12q01_Danko"; // 0xbfc PushS
	var_46_int = 1; // 0xbfd PushI
	SetVariable(var_45_string, var_46_int); // 0xbfe Func
	func_3226(); // 0xc01 NEW_2
	
Label_3075:
	return 0; // 0xc03 Return
}


func_249(var_0_object, var_353_int, var_354_object)
{
	var_356_object = Obj(); var_357_bool = 0; var_358_int = 0; var_359_bool = 0; var_360_object = Obj(); var_361_bool = 0; var_362_int = 0; var_363_bool = 0; // 0xf9 PushV
	var_0_object = var_354_object; // 0xfa TMov
	var_364_bool = 0; var_365_object = Obj(); var_366_float = 0; // 0xfb PushV
	var_365_object = var_354_object; // 0xfc Mov
	var_366_float = 70.0; // 0xfd MovF
	func_2559(var_365_object, var_366_float); // 0xfe NEW_2
	var_367_bool = var_364_bool == 0; // 0x100 Not
	if(var_367_bool == 0) goto Label_260; // 0x101 JumpB
	var_353_int = -2; // 0x102 MovI
	return 8; // 0x103 Return
	
Label_260:
	CreateDialog(var_360_object); // 0x104 Func
	var_368_int = 0; // 0x106 PushV
	func_2998(var_368_int); // 0x107 NEW_2
	SetNPCName(var_368_int); // 0x109 ObjFunc
	var_369_int = 0; // 0x10b PushV
	func_2996(var_369_int); // 0x10c NEW_2
	SetNPCDescription(var_369_int); // 0x10e ObjFunc
	var_370_string = ""; // 0x110 PushV
	func_3000(var_370_string); // 0x111 NEW_2
	SetPhoto(var_370_string); // 0x113 ObjFunc
	var_371_string = ""; // 0x115 PushV
	func_3002(var_371_string); // 0x116 NEW_2
	SetPhoto2(var_371_string); // 0x118 ObjFunc
	var_372_int = 0; // 0x11a PushV
	func_3306(var_372_int); // 0x11b NEW_2
	SetPlayerName(var_372_int); // 0x11d ObjFunc
	var_362_int = -1; // 0x11f MovI
	IsOverrideActive(var_361_bool); // 0x120 Func
	var_373_bool = var_361_bool; // 0x122 Push
	if(var_373_bool == 0) goto Label_294; // 0x123 JumpB
	var_353_int = -2; // 0x124 MovI
	return 8; // 0x125 Return
	
Label_294:
	DoDialog(var_360_object); // 0x126 Func
	var_374_bool = 0; var_375_object = Obj(); // 0x128 PushV
	var_376_object = Obj(); // 0x129 PushV
	func_2837(var_376_object); // 0x12a NEW_2
	var_375_object = var_376_object; // 0x12b Mov
	func_2646(var_374_bool, var_375_object); // 0x12d NEW_2
	var_377_object = Obj(); var_378_object = Obj(); // 0x12f PushV
	var_377_object = var_354_object; // 0x130 Mov
	var_378_object = var_360_object; // 0x131 Mov
	TaskCall(3); // 0x132 TaskCall
	func_330(var_379_object, var_380_object, var_381_string, var_382_bool, var_377_object, var_378_object); // 0x133 NEW_2
	TaskReturn(); // 0x134 TaskReturn
	IsDialogEnd(var_363_bool); // 0x136 ObjFunc
	
Label_312:
	var_425_bool = var_363_bool == 0; // 0x138 Not
	if(var_425_bool == 0) goto Label_319; // 0x139 JumpB
	sync(); // 0x13a Func
	IsDialogEnd(var_363_bool); // 0x13c ObjFunc
	goto Label_312; // 0x13e Jump
	
Label_319:
	var_426_object = Obj(); // 0x13f PushV
	var_426_object = var_354_object; // 0x140 Mov
	func_2628(); // 0x141 NEW_2
	StopDialog(var_360_object); // 0x143 Func
	GetReturnValue(var_362_int); // 0x145 ObjFunc
	var_353_int = var_362_int; // 0x147 Mov
	return 8; // 0x148 Return
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
	var_715_int = 10; // 0x8fb PushI
	KillTimer(var_715_int); // 0x8fc Func
	return 0; // 0x8fe Return
}


func_2815(var_160_bool, var_161_string)
{
	var_162_bool = 0; var_163_bool = 0; // 0xaff PushV
	var_164_bool = 0; // 0xb00 PushV
	func_3004(var_164_bool); // 0xb01 NEW_2
	if(var_164_bool == 0) goto Label_2828; // 0xb03 JumpB
	lshHasSpeech(var_163_bool, var_161_string); // 0xb04 Func
	var_165_bool = var_163_bool; // 0xb06 Push
	if(var_165_bool == 0) goto Label_2828; // 0xb07 JumpB
	lshPlaySpeech(var_161_string); // 0xb08 Func
	var_160_bool = 1; // 0xb0a MovB
	return 2; // 0xb0b Return
	
Label_2828:
	var_160_bool = 0; // 0xb0c MovB
	return 2; // 0xb0d Return
}


