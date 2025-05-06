task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xbb PushI
	if(var_48_int == 0) goto Label_511; // 0xbc JumpB
	func_4768(); // 0xbe NEW_2
	var_50_int = 22231; // 0xc0 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xc1 Eq
	if(var_51_bool == 0) goto Label_210; // 0xc2 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xc3 PushV
	var_52_object = var_1_object; // 0xc4 MovT
	var_53_object = var_0_object; // 0xc5 MovT
	func_4960(); // 0xc6 NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0xc8 PushV
	var_79_object = var_1_object; // 0xc9 MovT
	var_80_object = var_0_object; // 0xca MovT
	func_5123(); // 0xcb NEW_2
	var_83_object = Obj(); var_84_object = Obj(); // 0xcd PushV
	var_83_object = var_1_object; // 0xce MovT
	var_84_object = var_0_object; // 0xcf MovT
	func_4969(var_84_object); // 0xd0 NEW_2
	
Label_210:
	var_107_int = 22230; // 0xd2 PushI
	var_108_bool = var_46_bool == var_107_int; // 0xd3 Eq
	if(var_108_bool == 0) goto Label_258; // 0xd4 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0xd5 PushV
	var_110_object = var_1_object; // 0xd6 MovT
	func_5461(var_110_object); // 0xd7 NEW_2
	if(var_109_bool == 0) goto Label_238; // 0xd9 JumpB
	var_117_string = ""; // 0xda PushV
	var_117_string = "Oracle"; // 0xdb MovS
	func_164(var_47_cvector, var_117_string); // 0xdc NEW_2
	var_134_int = 521017; // 0xde PushI
	SetMessage(var_134_int); // 0xdf TObjFunc
	ClearReplies(); // 0xe1 TObjFunc
	var_135_int = 528565; // 0xe3 PushI
	var_136_int = 29962; // 0xe4 PushI
	var_137_int = 29961; // 0xe5 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0xe6 TObjFunc
	var_138_int = 528573; // 0xe8 PushI
	var_139_int = 29966; // 0xe9 PushI
	var_140_int = 29969; // 0xea PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0xeb TObjFunc
	return 0; // 0xed Return
	
Label_238:
	var_141_string = ""; // 0xee PushV
	var_141_string = "Neutral"; // 0xef MovS
	func_164(var_47_cvector, var_141_string); // 0xf0 NEW_2
	var_142_int = 521041; // 0xf2 PushI
	SetMessage(var_142_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_143_int = 528593; // 0xf7 PushI
	var_144_int = 29994; // 0xf8 PushI
	var_145_int = 29993; // 0xf9 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0xfa TObjFunc
	var_146_int = 521042; // 0xfc PushI
	var_147_int = -1; // 0xfd PushI
	var_148_int = 22238; // 0xfe PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0xff TObjFunc
	return 0; // 0x101 Return
	
Label_258:
	var_149_int = 29994; // 0x102 PushI
	var_150_bool = var_46_bool == var_149_int; // 0x103 Eq
	if(var_150_bool == 0) goto Label_276; // 0x104 JumpB
	var_151_string = ""; // 0x105 PushV
	var_151_string = "Neutral"; // 0x106 MovS
	func_164(var_47_cvector, var_151_string); // 0x107 NEW_2
	var_152_int = 528594; // 0x109 PushI
	SetMessage(var_152_int); // 0x10a TObjFunc
	ClearReplies(); // 0x10c TObjFunc
	var_153_int = 528595; // 0x10e PushI
	var_154_int = -1; // 0x10f PushI
	var_155_int = 29995; // 0x110 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_156_int = 29962; // 0x114 PushI
	var_157_bool = var_46_bool == var_156_int; // 0x115 Eq
	if(var_157_bool == 0) goto Label_299; // 0x116 JumpB
	var_158_string = ""; // 0x117 PushV
	var_158_string = "Oracle"; // 0x118 MovS
	func_164(var_47_cvector, var_158_string); // 0x119 NEW_2
	var_159_int = 528566; // 0x11b PushI
	SetMessage(var_159_int); // 0x11c TObjFunc
	ClearReplies(); // 0x11e TObjFunc
	var_160_int = 528567; // 0x120 PushI
	var_161_int = 29964; // 0x121 PushI
	var_162_int = 29963; // 0x122 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x123 TObjFunc
	var_163_int = 528574; // 0x125 PushI
	var_164_int = 29964; // 0x126 PushI
	var_165_int = 29970; // 0x127 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x128 TObjFunc
	return 0; // 0x12a Return
	
Label_299:
	var_166_int = 29964; // 0x12b PushI
	var_167_bool = var_46_bool == var_166_int; // 0x12c Eq
	if(var_167_bool == 0) goto Label_322; // 0x12d JumpB
	var_168_string = ""; // 0x12e PushV
	var_168_string = "Smile"; // 0x12f MovS
	func_164(var_47_cvector, var_168_string); // 0x130 NEW_2
	var_169_int = 528568; // 0x132 PushI
	SetMessage(var_169_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_170_int = 528569; // 0x137 PushI
	var_171_int = 29987; // 0x138 PushI
	var_172_int = 29965; // 0x139 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x13a TObjFunc
	var_173_int = 528575; // 0x13c PushI
	var_174_int = 29973; // 0x13d PushI
	var_175_int = 29972; // 0x13e PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x13f TObjFunc
	return 0; // 0x141 Return
	
Label_322:
	var_176_int = 29973; // 0x142 PushI
	var_177_bool = var_46_bool == var_176_int; // 0x143 Eq
	if(var_177_bool == 0) goto Label_340; // 0x144 JumpB
	var_178_string = ""; // 0x145 PushV
	var_178_string = "Neutral"; // 0x146 MovS
	func_164(var_47_cvector, var_178_string); // 0x147 NEW_2
	var_179_int = 528576; // 0x149 PushI
	SetMessage(var_179_int); // 0x14a TObjFunc
	ClearReplies(); // 0x14c TObjFunc
	var_180_int = 528577; // 0x14e PushI
	var_181_int = -1; // 0x14f PushI
	var_182_int = 29974; // 0x150 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x151 TObjFunc
	return 0; // 0x153 Return
	
Label_340:
	var_183_int = 29987; // 0x154 PushI
	var_184_bool = var_46_bool == var_183_int; // 0x155 Eq
	if(var_184_bool == 0) goto Label_363; // 0x156 JumpB
	var_185_string = ""; // 0x157 PushV
	var_185_string = "Neutral"; // 0x158 MovS
	func_164(var_47_cvector, var_185_string); // 0x159 NEW_2
	var_186_int = 528588; // 0x15b PushI
	SetMessage(var_186_int); // 0x15c TObjFunc
	ClearReplies(); // 0x15e TObjFunc
	var_187_int = 528589; // 0x160 PushI
	var_188_int = 29966; // 0x161 PushI
	var_189_int = 29988; // 0x162 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x163 TObjFunc
	var_190_int = 528590; // 0x165 PushI
	var_191_int = 29966; // 0x166 PushI
	var_192_int = 29989; // 0x167 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x168 TObjFunc
	return 0; // 0x16a Return
	
Label_363:
	var_193_int = 29966; // 0x16b PushI
	var_194_bool = var_46_bool == var_193_int; // 0x16c Eq
	if(var_194_bool == 0) goto Label_381; // 0x16d JumpB
	var_195_string = ""; // 0x16e PushV
	var_195_string = "Neutral"; // 0x16f MovS
	func_164(var_47_cvector, var_195_string); // 0x170 NEW_2
	var_196_int = 528570; // 0x172 PushI
	SetMessage(var_196_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_197_int = 528571; // 0x177 PushI
	var_198_int = 29968; // 0x178 PushI
	var_199_int = 29967; // 0x179 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x17a TObjFunc
	return 0; // 0x17c Return
	
Label_381:
	var_200_int = 29968; // 0x17d PushI
	var_201_bool = var_46_bool == var_200_int; // 0x17e Eq
	if(var_201_bool == 0) goto Label_404; // 0x17f JumpB
	var_202_string = ""; // 0x180 PushV
	var_202_string = "Neutral"; // 0x181 MovS
	func_164(var_47_cvector, var_202_string); // 0x182 NEW_2
	var_203_int = 528572; // 0x184 PushI
	SetMessage(var_203_int); // 0x185 TObjFunc
	ClearReplies(); // 0x187 TObjFunc
	var_204_int = 528578; // 0x189 PushI
	var_205_int = 29976; // 0x18a PushI
	var_206_int = 29975; // 0x18b PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x18c TObjFunc
	var_207_int = 528584; // 0x18e PushI
	var_208_int = 29976; // 0x18f PushI
	var_209_int = 29981; // 0x190 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x191 TObjFunc
	return 0; // 0x193 Return
	
Label_404:
	var_210_int = 29976; // 0x194 PushI
	var_211_bool = var_46_bool == var_210_int; // 0x195 Eq
	if(var_211_bool == 0) goto Label_427; // 0x196 JumpB
	var_212_string = ""; // 0x197 PushV
	var_212_string = "Oracle"; // 0x198 MovS
	func_164(var_47_cvector, var_212_string); // 0x199 NEW_2
	var_213_int = 528579; // 0x19b PushI
	SetMessage(var_213_int); // 0x19c TObjFunc
	ClearReplies(); // 0x19e TObjFunc
	var_214_int = 528585; // 0x1a0 PushI
	var_215_int = 29984; // 0x1a1 PushI
	var_216_int = 29983; // 0x1a2 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x1a3 TObjFunc
	var_217_int = 528587; // 0x1a5 PushI
	var_218_int = 29984; // 0x1a6 PushI
	var_219_int = 29985; // 0x1a7 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x1a8 TObjFunc
	return 0; // 0x1aa Return
	
Label_427:
	var_220_int = 29984; // 0x1ab PushI
	var_221_bool = var_46_bool == var_220_int; // 0x1ac Eq
	if(var_221_bool == 0) goto Label_445; // 0x1ad JumpB
	var_222_string = ""; // 0x1ae PushV
	var_222_string = "Refusal"; // 0x1af MovS
	func_164(var_47_cvector, var_222_string); // 0x1b0 NEW_2
	var_223_int = 528586; // 0x1b2 PushI
	SetMessage(var_223_int); // 0x1b3 TObjFunc
	ClearReplies(); // 0x1b5 TObjFunc
	var_224_int = 528580; // 0x1b7 PushI
	var_225_int = 29978; // 0x1b8 PushI
	var_226_int = 29977; // 0x1b9 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x1ba TObjFunc
	return 0; // 0x1bc Return
	
Label_445:
	var_227_int = 29978; // 0x1bd PushI
	var_228_bool = var_46_bool == var_227_int; // 0x1be Eq
	if(var_228_bool == 0) goto Label_463; // 0x1bf JumpB
	var_229_string = ""; // 0x1c0 PushV
	var_229_string = "Neutral"; // 0x1c1 MovS
	func_164(var_47_cvector, var_229_string); // 0x1c2 NEW_2
	var_230_int = 528581; // 0x1c4 PushI
	SetMessage(var_230_int); // 0x1c5 TObjFunc
	ClearReplies(); // 0x1c7 TObjFunc
	var_231_int = 528582; // 0x1c9 PushI
	var_232_int = 29980; // 0x1ca PushI
	var_233_int = 29979; // 0x1cb PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1cc TObjFunc
	return 0; // 0x1ce Return
	
Label_463:
	var_234_int = 29980; // 0x1cf PushI
	var_235_bool = var_46_bool == var_234_int; // 0x1d0 Eq
	if(var_235_bool == 0) goto Label_481; // 0x1d1 JumpB
	var_236_string = ""; // 0x1d2 PushV
	var_236_string = "Neutral"; // 0x1d3 MovS
	func_164(var_47_cvector, var_236_string); // 0x1d4 NEW_2
	var_237_int = 528583; // 0x1d6 PushI
	SetMessage(var_237_int); // 0x1d7 TObjFunc
	ClearReplies(); // 0x1d9 TObjFunc
	var_238_int = 528591; // 0x1db PushI
	var_239_int = 29992; // 0x1dc PushI
	var_240_int = 29991; // 0x1dd PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1de TObjFunc
	return 0; // 0x1e0 Return
	
Label_481:
	var_241_int = 29992; // 0x1e1 PushI
	var_242_bool = var_46_bool == var_241_int; // 0x1e2 Eq
	if(var_242_bool == 0) goto Label_499; // 0x1e3 JumpB
	var_243_string = ""; // 0x1e4 PushV
	var_243_string = "Refusal"; // 0x1e5 MovS
	func_164(var_47_cvector, var_243_string); // 0x1e6 NEW_2
	var_244_int = 528592; // 0x1e8 PushI
	SetMessage(var_244_int); // 0x1e9 TObjFunc
	ClearReplies(); // 0x1eb TObjFunc
	var_245_int = 521018; // 0x1ed PushI
	var_246_int = -1; // 0x1ee PushI
	var_247_int = 22231; // 0x1ef PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x1f0 TObjFunc
	return 0; // 0x1f2 Return
	
Label_499:
	var_3_string = 1; // 0x1f3 TMovB
	var_248_bool = 0; // 0x1f4 PushV
	func_4951(var_248_bool); // 0x1f5 NEW_2
	if(var_248_bool == 0) goto Label_507; // 0x1f7 JumpB
	lshStopAnimation(); // 0x1f8 Func
	goto Label_509; // 0x1fa Jump
	
Label_509:
	return 0; // 0x1fd Return
	
Label_507:
	StopAnimation(); // 0x1fb Func
	
Label_511:
	return 0; // 0x1ff Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x2c4 PushI
	if(var_48_int == 0) goto Label_1126; // 0x2c5 JumpB
	func_4768(); // 0x2c7 NEW_2
	var_50_int = 22599; // 0x2c9 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x2ca Eq
	if(var_51_bool == 0) goto Label_721; // 0x2cb JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x2cc PushV
	var_52_object = var_1_object; // 0x2cd MovT
	var_53_object = var_0_object; // 0x2ce MovT
	func_4980(); // 0x2cf NEW_2
	
Label_721:
	var_79_int = 22607; // 0x2d1 PushI
	var_80_bool = var_47_cvector == var_79_int; // 0x2d2 Eq
	if(var_80_bool == 0) goto Label_744; // 0x2d3 JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0x2d4 PushV
	var_81_object = var_1_object; // 0x2d5 MovT
	var_82_object = var_0_object; // 0x2d6 MovT
	func_4989(); // 0x2d7 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0x2d9 PushV
	var_95_object = var_1_object; // 0x2da MovT
	var_96_object = var_0_object; // 0x2db MovT
	func_5129(); // 0x2dc NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0x2de PushV
	var_123_object = var_1_object; // 0x2df MovT
	var_124_object = var_0_object; // 0x2e0 MovT
	func_5197(); // 0x2e1 NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0x2e3 PushV
	var_133_object = var_1_object; // 0x2e4 MovT
	var_134_object = var_0_object; // 0x2e5 MovT
	func_5231(); // 0x2e6 NEW_2
	
Label_744:
	var_165_int = 22596; // 0x2e8 PushI
	var_166_bool = var_46_bool == var_165_int; // 0x2e9 Eq
	if(var_166_bool == 0) goto Label_801; // 0x2ea JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0x2eb PushV
	var_168_object = var_1_object; // 0x2ec MovT
	func_5259(var_168_object); // 0x2ed NEW_2
	if(var_167_bool == 0) goto Label_767; // 0x2ef JumpB
	var_173_string = ""; // 0x2f0 PushV
	var_173_string = "Refusal"; // 0x2f1 MovS
	func_685(var_47_cvector, var_173_string); // 0x2f2 NEW_2
	var_190_int = 521418; // 0x2f4 PushI
	SetMessage(var_190_int); // 0x2f5 TObjFunc
	ClearReplies(); // 0x2f7 TObjFunc
	var_191_int = 521419; // 0x2f9 PushI
	var_192_int = 24983; // 0x2fa PushI
	var_193_int = 22597; // 0x2fb PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x2fc TObjFunc
	return 0; // 0x2fe Return
	
Label_767:
	var_194_string = ""; // 0x2ff PushV
	var_194_string = "Neutral"; // 0x300 MovS
	func_685(var_47_cvector, var_194_string); // 0x301 NEW_2
	var_195_int = 521423; // 0x303 PushI
	SetMessage(var_195_int); // 0x304 TObjFunc
	ClearReplies(); // 0x306 TObjFunc
	var_196_bool = 0; // 0x308 PushV
	var_196_bool = 0; // 0x309 MovB
	var_197_bool = 0; var_198_object = Obj(); // 0x30a PushV
	var_198_object = var_1_object; // 0x30b MovT
	func_5247(var_198_object); // 0x30c NEW_2
	if(var_197_bool == 0) goto Label_789; // 0x30e JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x30f PushV
	var_204_object = var_1_object; // 0x310 MovT
	func_5438(var_203_bool, var_204_object); // 0x311 NEW_2
	if(var_203_bool == 0) goto Label_789; // 0x313 JumpB
	var_196_bool = 1; // 0x314 MovB
	
Label_789:
	if(var_196_bool == 0) goto Label_795; // 0x315 JumpB
	var_212_int = 521425; // 0x316 PushI
	var_213_int = 22604; // 0x317 PushI
	var_214_int = 22603; // 0x318 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x319 TObjFunc
	
Label_795:
	var_215_int = 521424; // 0x31b PushI
	var_216_int = -1; // 0x31c PushI
	var_217_int = 22602; // 0x31d PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x31e TObjFunc
	return 0; // 0x320 Return
	
Label_801:
	var_218_int = 22604; // 0x321 PushI
	var_219_bool = var_46_bool == var_218_int; // 0x322 Eq
	if(var_219_bool == 0) goto Label_819; // 0x323 JumpB
	var_220_string = ""; // 0x324 PushV
	var_220_string = "Oracle"; // 0x325 MovS
	func_685(var_47_cvector, var_220_string); // 0x326 NEW_2
	var_221_int = 521426; // 0x328 PushI
	SetMessage(var_221_int); // 0x329 TObjFunc
	ClearReplies(); // 0x32b TObjFunc
	var_222_int = 521427; // 0x32d PushI
	var_223_int = 22606; // 0x32e PushI
	var_224_int = 22605; // 0x32f PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x330 TObjFunc
	return 0; // 0x332 Return
	
Label_819:
	var_225_int = 22606; // 0x333 PushI
	var_226_bool = var_46_bool == var_225_int; // 0x334 Eq
	if(var_226_bool == 0) goto Label_837; // 0x335 JumpB
	var_227_string = ""; // 0x336 PushV
	var_227_string = "Oracle"; // 0x337 MovS
	func_685(var_47_cvector, var_227_string); // 0x338 NEW_2
	var_228_int = 521428; // 0x33a PushI
	SetMessage(var_228_int); // 0x33b TObjFunc
	ClearReplies(); // 0x33d TObjFunc
	var_229_int = 523745; // 0x33f PushI
	var_230_int = 25009; // 0x340 PushI
	var_231_int = 25008; // 0x341 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x342 TObjFunc
	return 0; // 0x344 Return
	
Label_837:
	var_232_int = 25009; // 0x345 PushI
	var_233_bool = var_46_bool == var_232_int; // 0x346 Eq
	if(var_233_bool == 0) goto Label_855; // 0x347 JumpB
	var_234_string = ""; // 0x348 PushV
	var_234_string = "Oracle"; // 0x349 MovS
	func_685(var_47_cvector, var_234_string); // 0x34a NEW_2
	var_235_int = 523746; // 0x34c PushI
	SetMessage(var_235_int); // 0x34d TObjFunc
	ClearReplies(); // 0x34f TObjFunc
	var_236_int = 523747; // 0x351 PushI
	var_237_int = 25011; // 0x352 PushI
	var_238_int = 25010; // 0x353 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x354 TObjFunc
	return 0; // 0x356 Return
	
Label_855:
	var_239_int = 25011; // 0x357 PushI
	var_240_bool = var_46_bool == var_239_int; // 0x358 Eq
	if(var_240_bool == 0) goto Label_873; // 0x359 JumpB
	var_241_string = ""; // 0x35a PushV
	var_241_string = "Oracle"; // 0x35b MovS
	func_685(var_47_cvector, var_241_string); // 0x35c NEW_2
	var_242_int = 523748; // 0x35e PushI
	SetMessage(var_242_int); // 0x35f TObjFunc
	ClearReplies(); // 0x361 TObjFunc
	var_243_int = 523749; // 0x363 PushI
	var_244_int = 25013; // 0x364 PushI
	var_245_int = 25012; // 0x365 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x366 TObjFunc
	return 0; // 0x368 Return
	
Label_873:
	var_246_int = 25013; // 0x369 PushI
	var_247_bool = var_46_bool == var_246_int; // 0x36a Eq
	if(var_247_bool == 0) goto Label_891; // 0x36b JumpB
	var_248_string = ""; // 0x36c PushV
	var_248_string = "Neutral"; // 0x36d MovS
	func_685(var_47_cvector, var_248_string); // 0x36e NEW_2
	var_249_int = 523750; // 0x370 PushI
	SetMessage(var_249_int); // 0x371 TObjFunc
	ClearReplies(); // 0x373 TObjFunc
	var_250_int = 523751; // 0x375 PushI
	var_251_int = 25015; // 0x376 PushI
	var_252_int = 25014; // 0x377 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x378 TObjFunc
	return 0; // 0x37a Return
	
Label_891:
	var_253_int = 25015; // 0x37b PushI
	var_254_bool = var_46_bool == var_253_int; // 0x37c Eq
	if(var_254_bool == 0) goto Label_909; // 0x37d JumpB
	var_255_string = ""; // 0x37e PushV
	var_255_string = "Refusal"; // 0x37f MovS
	func_685(var_47_cvector, var_255_string); // 0x380 NEW_2
	var_256_int = 523752; // 0x382 PushI
	SetMessage(var_256_int); // 0x383 TObjFunc
	ClearReplies(); // 0x385 TObjFunc
	var_257_int = 523753; // 0x387 PushI
	var_258_int = 25017; // 0x388 PushI
	var_259_int = 25016; // 0x389 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x38a TObjFunc
	return 0; // 0x38c Return
	
Label_909:
	var_260_int = 25017; // 0x38d PushI
	var_261_bool = var_46_bool == var_260_int; // 0x38e Eq
	if(var_261_bool == 0) goto Label_927; // 0x38f JumpB
	var_262_string = ""; // 0x390 PushV
	var_262_string = "Refusal"; // 0x391 MovS
	func_685(var_47_cvector, var_262_string); // 0x392 NEW_2
	var_263_int = 523754; // 0x394 PushI
	SetMessage(var_263_int); // 0x395 TObjFunc
	ClearReplies(); // 0x397 TObjFunc
	var_264_int = 523755; // 0x399 PushI
	var_265_int = 25019; // 0x39a PushI
	var_266_int = 25018; // 0x39b PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x39c TObjFunc
	return 0; // 0x39e Return
	
Label_927:
	var_267_int = 25019; // 0x39f PushI
	var_268_bool = var_46_bool == var_267_int; // 0x3a0 Eq
	if(var_268_bool == 0) goto Label_945; // 0x3a1 JumpB
	var_269_string = ""; // 0x3a2 PushV
	var_269_string = "Refusal"; // 0x3a3 MovS
	func_685(var_47_cvector, var_269_string); // 0x3a4 NEW_2
	var_270_int = 523756; // 0x3a6 PushI
	SetMessage(var_270_int); // 0x3a7 TObjFunc
	ClearReplies(); // 0x3a9 TObjFunc
	var_271_int = 521429; // 0x3ab PushI
	var_272_int = -1; // 0x3ac PushI
	var_273_int = 22607; // 0x3ad PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x3ae TObjFunc
	return 0; // 0x3b0 Return
	
Label_945:
	var_274_int = 24983; // 0x3b1 PushI
	var_275_bool = var_46_bool == var_274_int; // 0x3b2 Eq
	if(var_275_bool == 0) goto Label_963; // 0x3b3 JumpB
	var_276_string = ""; // 0x3b4 PushV
	var_276_string = "Refusal"; // 0x3b5 MovS
	func_685(var_47_cvector, var_276_string); // 0x3b6 NEW_2
	var_277_int = 523725; // 0x3b8 PushI
	SetMessage(var_277_int); // 0x3b9 TObjFunc
	ClearReplies(); // 0x3bb TObjFunc
	var_278_int = 523726; // 0x3bd PushI
	var_279_int = 24985; // 0x3be PushI
	var_280_int = 24984; // 0x3bf PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x3c0 TObjFunc
	return 0; // 0x3c2 Return
	
Label_963:
	var_281_int = 24985; // 0x3c3 PushI
	var_282_bool = var_46_bool == var_281_int; // 0x3c4 Eq
	if(var_282_bool == 0) goto Label_986; // 0x3c5 JumpB
	var_283_string = ""; // 0x3c6 PushV
	var_283_string = "Neutral"; // 0x3c7 MovS
	func_685(var_47_cvector, var_283_string); // 0x3c8 NEW_2
	var_284_int = 523727; // 0x3ca PushI
	SetMessage(var_284_int); // 0x3cb TObjFunc
	ClearReplies(); // 0x3cd TObjFunc
	var_285_int = 523728; // 0x3cf PushI
	var_286_int = 24987; // 0x3d0 PushI
	var_287_int = 24986; // 0x3d1 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x3d2 TObjFunc
	var_288_int = 523740; // 0x3d4 PushI
	var_289_int = 24994; // 0x3d5 PushI
	var_290_int = 25000; // 0x3d6 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x3d7 TObjFunc
	return 0; // 0x3d9 Return
	
Label_986:
	var_291_int = 24987; // 0x3da PushI
	var_292_bool = var_46_bool == var_291_int; // 0x3db Eq
	if(var_292_bool == 0) goto Label_1009; // 0x3dc JumpB
	var_293_string = ""; // 0x3dd PushV
	var_293_string = "Neutral"; // 0x3de MovS
	func_685(var_47_cvector, var_293_string); // 0x3df NEW_2
	var_294_int = 523729; // 0x3e1 PushI
	SetMessage(var_294_int); // 0x3e2 TObjFunc
	ClearReplies(); // 0x3e4 TObjFunc
	var_295_int = 523730; // 0x3e6 PushI
	var_296_int = 24989; // 0x3e7 PushI
	var_297_int = 24988; // 0x3e8 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x3e9 TObjFunc
	var_298_int = 523737; // 0x3eb PushI
	var_299_int = 24994; // 0x3ec PushI
	var_300_int = 24995; // 0x3ed PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x3ee TObjFunc
	return 0; // 0x3f0 Return
	
Label_1009:
	var_301_int = 24989; // 0x3f1 PushI
	var_302_bool = var_46_bool == var_301_int; // 0x3f2 Eq
	if(var_302_bool == 0) goto Label_1032; // 0x3f3 JumpB
	var_303_string = ""; // 0x3f4 PushV
	var_303_string = "Neutral"; // 0x3f5 MovS
	func_685(var_47_cvector, var_303_string); // 0x3f6 NEW_2
	var_304_int = 523731; // 0x3f8 PushI
	SetMessage(var_304_int); // 0x3f9 TObjFunc
	ClearReplies(); // 0x3fb TObjFunc
	var_305_int = 523732; // 0x3fd PushI
	var_306_int = 24991; // 0x3fe PushI
	var_307_int = 24990; // 0x3ff PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x400 TObjFunc
	var_308_int = 523739; // 0x402 PushI
	var_309_int = 24994; // 0x403 PushI
	var_310_int = 24998; // 0x404 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x405 TObjFunc
	return 0; // 0x407 Return
	
Label_1032:
	var_311_int = 24991; // 0x408 PushI
	var_312_bool = var_46_bool == var_311_int; // 0x409 Eq
	if(var_312_bool == 0) goto Label_1055; // 0x40a JumpB
	var_313_string = ""; // 0x40b PushV
	var_313_string = "Neutral"; // 0x40c MovS
	func_685(var_47_cvector, var_313_string); // 0x40d NEW_2
	var_314_int = 523733; // 0x40f PushI
	SetMessage(var_314_int); // 0x410 TObjFunc
	ClearReplies(); // 0x412 TObjFunc
	var_315_int = 523734; // 0x414 PushI
	var_316_int = 25002; // 0x415 PushI
	var_317_int = 24992; // 0x416 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x417 TObjFunc
	var_318_int = 523735; // 0x419 PushI
	var_319_int = 24994; // 0x41a PushI
	var_320_int = 24993; // 0x41b PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x41c TObjFunc
	return 0; // 0x41e Return
	
Label_1055:
	var_321_int = 24994; // 0x41f PushI
	var_322_bool = var_46_bool == var_321_int; // 0x420 Eq
	if(var_322_bool == 0) goto Label_1073; // 0x421 JumpB
	var_323_string = ""; // 0x422 PushV
	var_323_string = "Neutral"; // 0x423 MovS
	func_685(var_47_cvector, var_323_string); // 0x424 NEW_2
	var_324_int = 523736; // 0x426 PushI
	SetMessage(var_324_int); // 0x427 TObjFunc
	ClearReplies(); // 0x429 TObjFunc
	var_325_int = 523738; // 0x42b PushI
	var_326_int = 25005; // 0x42c PushI
	var_327_int = 24996; // 0x42d PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x42e TObjFunc
	return 0; // 0x430 Return
	
Label_1073:
	var_328_int = 25002; // 0x431 PushI
	var_329_bool = var_46_bool == var_328_int; // 0x432 Eq
	if(var_329_bool == 0) goto Label_1096; // 0x433 JumpB
	var_330_string = ""; // 0x434 PushV
	var_330_string = "Oracle"; // 0x435 MovS
	func_685(var_47_cvector, var_330_string); // 0x436 NEW_2
	var_331_int = 523741; // 0x438 PushI
	SetMessage(var_331_int); // 0x439 TObjFunc
	ClearReplies(); // 0x43b TObjFunc
	var_332_int = 523742; // 0x43d PushI
	var_333_int = 25005; // 0x43e PushI
	var_334_int = 25003; // 0x43f PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x440 TObjFunc
	var_335_int = 523743; // 0x442 PushI
	var_336_int = 25005; // 0x443 PushI
	var_337_int = 25004; // 0x444 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x445 TObjFunc
	return 0; // 0x447 Return
	
Label_1096:
	var_338_int = 25005; // 0x448 PushI
	var_339_bool = var_46_bool == var_338_int; // 0x449 Eq
	if(var_339_bool == 0) goto Label_1114; // 0x44a JumpB
	var_340_string = ""; // 0x44b PushV
	var_340_string = "Oracle"; // 0x44c MovS
	func_685(var_47_cvector, var_340_string); // 0x44d NEW_2
	var_341_int = 523744; // 0x44f PushI
	SetMessage(var_341_int); // 0x450 TObjFunc
	ClearReplies(); // 0x452 TObjFunc
	var_342_int = 521421; // 0x454 PushI
	var_343_int = -1; // 0x455 PushI
	var_344_int = 22599; // 0x456 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x457 TObjFunc
	return 0; // 0x459 Return
	
Label_1114:
	var_3_string = 1; // 0x45a TMovB
	var_345_bool = 0; // 0x45b PushV
	func_4951(var_345_bool); // 0x45c NEW_2
	if(var_345_bool == 0) goto Label_1122; // 0x45e JumpB
	lshStopAnimation(); // 0x45f Func
	goto Label_1124; // 0x461 Jump
	
Label_1124:
	return 0; // 0x464 Return
	
Label_1122:
	StopAnimation(); // 0x462 Func
	
Label_1126:
	return 0; // 0x466 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x53b PushI
	if(var_48_int == 0) goto Label_1799; // 0x53c JumpB
	func_4768(); // 0x53e NEW_2
	var_50_int = 22709; // 0x540 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x541 Eq
	if(var_51_bool == 0) goto Label_1357; // 0x542 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x543 PushV
	var_52_object = var_1_object; // 0x544 MovT
	var_53_object = var_0_object; // 0x545 MovT
	func_5002(); // 0x546 NEW_2
	var_94_object = Obj(); var_95_object = Obj(); // 0x548 PushV
	var_94_object = var_1_object; // 0x549 MovT
	var_95_object = var_0_object; // 0x54a MovT
	func_4953(); // 0x54b NEW_2
	
Label_1357:
	var_107_int = 22711; // 0x54d PushI
	var_108_bool = var_47_cvector == var_107_int; // 0x54e Eq
	if(var_108_bool == 0) goto Label_1365; // 0x54f JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x550 PushV
	var_109_object = var_1_object; // 0x551 MovT
	var_110_object = var_0_object; // 0x552 MovT
	func_5002(); // 0x553 NEW_2
	
Label_1365:
	var_111_int = 22772; // 0x555 PushI
	var_112_bool = var_47_cvector == var_111_int; // 0x556 Eq
	if(var_112_bool == 0) goto Label_1373; // 0x557 JumpB
	var_113_object = Obj(); var_114_object = Obj(); // 0x558 PushV
	var_113_object = var_1_object; // 0x559 MovT
	var_114_object = var_0_object; // 0x55a MovT
	func_5022(var_114_object); // 0x55b NEW_2
	
Label_1373:
	var_127_int = 23578; // 0x55d PushI
	var_128_bool = var_47_cvector == var_127_int; // 0x55e Eq
	if(var_128_bool == 0) goto Label_1381; // 0x55f JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x560 PushV
	var_129_object = var_1_object; // 0x561 MovT
	var_130_object = var_0_object; // 0x562 MovT
	func_5041(); // 0x563 NEW_2
	
Label_1381:
	var_133_int = 22700; // 0x565 PushI
	var_134_bool = var_46_bool == var_133_int; // 0x566 Eq
	if(var_134_bool == 0) goto Label_1454; // 0x567 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x568 PushV
	var_136_object = var_1_object; // 0x569 MovT
	func_5283(var_136_object); // 0x56a NEW_2
	if(var_135_bool == 0) goto Label_1409; // 0x56c JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x56d PushV
	var_143_object = var_1_object; // 0x56e MovT
	var_144_object = var_0_object; // 0x56f MovT
	func_5035(); // 0x570 NEW_2
	var_147_string = ""; // 0x572 PushV
	var_147_string = "Neutral"; // 0x573 MovS
	func_1316(var_47_cvector, var_147_string); // 0x574 NEW_2
	var_164_int = 521539; // 0x576 PushI
	SetMessage(var_164_int); // 0x577 TObjFunc
	ClearReplies(); // 0x579 TObjFunc
	var_165_int = 522390; // 0x57b PushI
	var_166_int = 23556; // 0x57c PushI
	var_167_int = 23555; // 0x57d PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x57e TObjFunc
	return 0; // 0x580 Return
	
Label_1409:
	var_168_string = ""; // 0x581 PushV
	var_168_string = "Neutral"; // 0x582 MovS
	func_1316(var_47_cvector, var_168_string); // 0x583 NEW_2
	var_169_int = 521544; // 0x585 PushI
	SetMessage(var_169_int); // 0x586 TObjFunc
	ClearReplies(); // 0x588 TObjFunc
	var_170_bool = 0; var_171_object = Obj(); // 0x58a PushV
	var_171_object = var_1_object; // 0x58b MovT
	func_5271(var_171_object); // 0x58c NEW_2
	if(var_170_bool == 0) goto Label_1428; // 0x58e JumpB
	var_176_int = 521545; // 0x58f PushI
	var_177_int = 22710; // 0x590 PushI
	var_178_int = 22706; // 0x591 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x592 TObjFunc
	
Label_1428:
	var_179_bool = 0; var_180_object = Obj(); // 0x594 PushV
	var_180_object = var_1_object; // 0x595 MovT
	func_5295(var_180_object); // 0x596 NEW_2
	if(var_179_bool == 0) goto Label_1438; // 0x598 JumpB
	var_185_int = 521587; // 0x599 PushI
	var_186_int = 22749; // 0x59a PushI
	var_187_int = 22748; // 0x59b PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x59c TObjFunc
	
Label_1438:
	var_188_bool = 0; var_189_object = Obj(); // 0x59e PushV
	var_189_object = var_1_object; // 0x59f MovT
	func_5307(var_189_object); // 0x5a0 NEW_2
	if(var_188_bool == 0) goto Label_1448; // 0x5a2 JumpB
	var_194_int = 522411; // 0x5a3 PushI
	var_195_int = 23579; // 0x5a4 PushI
	var_196_int = 23578; // 0x5a5 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x5a6 TObjFunc
	
Label_1448:
	var_197_int = 521546; // 0x5a8 PushI
	var_198_int = -1; // 0x5a9 PushI
	var_199_int = 22707; // 0x5aa PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x5ab TObjFunc
	return 0; // 0x5ad Return
	
Label_1454:
	var_200_int = 23579; // 0x5ae PushI
	var_201_bool = var_46_bool == var_200_int; // 0x5af Eq
	if(var_201_bool == 0) goto Label_1477; // 0x5b0 JumpB
	var_202_string = ""; // 0x5b1 PushV
	var_202_string = "Neutral"; // 0x5b2 MovS
	func_1316(var_47_cvector, var_202_string); // 0x5b3 NEW_2
	var_203_int = 522412; // 0x5b5 PushI
	SetMessage(var_203_int); // 0x5b6 TObjFunc
	ClearReplies(); // 0x5b8 TObjFunc
	var_204_int = 522414; // 0x5ba PushI
	var_205_int = 23582; // 0x5bb PushI
	var_206_int = 23581; // 0x5bc PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x5bd TObjFunc
	var_207_int = 522413; // 0x5bf PushI
	var_208_int = -1; // 0x5c0 PushI
	var_209_int = 23580; // 0x5c1 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x5c2 TObjFunc
	return 0; // 0x5c4 Return
	
Label_1477:
	var_210_int = 23582; // 0x5c5 PushI
	var_211_bool = var_46_bool == var_210_int; // 0x5c6 Eq
	if(var_211_bool == 0) goto Label_1495; // 0x5c7 JumpB
	var_212_string = ""; // 0x5c8 PushV
	var_212_string = "Neutral"; // 0x5c9 MovS
	func_1316(var_47_cvector, var_212_string); // 0x5ca NEW_2
	var_213_int = 522415; // 0x5cc PushI
	SetMessage(var_213_int); // 0x5cd TObjFunc
	ClearReplies(); // 0x5cf TObjFunc
	var_214_int = 522416; // 0x5d1 PushI
	var_215_int = -1; // 0x5d2 PushI
	var_216_int = 23583; // 0x5d3 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x5d4 TObjFunc
	return 0; // 0x5d6 Return
	
Label_1495:
	var_217_int = 22749; // 0x5d7 PushI
	var_218_bool = var_46_bool == var_217_int; // 0x5d8 Eq
	if(var_218_bool == 0) goto Label_1513; // 0x5d9 JumpB
	var_219_string = ""; // 0x5da PushV
	var_219_string = "Neutral"; // 0x5db MovS
	func_1316(var_47_cvector, var_219_string); // 0x5dc NEW_2
	var_220_int = 521588; // 0x5de PushI
	SetMessage(var_220_int); // 0x5df TObjFunc
	ClearReplies(); // 0x5e1 TObjFunc
	var_221_int = 521589; // 0x5e3 PushI
	var_222_int = 22751; // 0x5e4 PushI
	var_223_int = 22750; // 0x5e5 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x5e6 TObjFunc
	return 0; // 0x5e8 Return
	
Label_1513:
	var_224_int = 22751; // 0x5e9 PushI
	var_225_bool = var_46_bool == var_224_int; // 0x5ea Eq
	if(var_225_bool == 0) goto Label_1531; // 0x5eb JumpB
	var_226_string = ""; // 0x5ec PushV
	var_226_string = "Neutral"; // 0x5ed MovS
	func_1316(var_47_cvector, var_226_string); // 0x5ee NEW_2
	var_227_int = 521590; // 0x5f0 PushI
	SetMessage(var_227_int); // 0x5f1 TObjFunc
	ClearReplies(); // 0x5f3 TObjFunc
	var_228_int = 521592; // 0x5f5 PushI
	var_229_int = 22768; // 0x5f6 PushI
	var_230_int = 22755; // 0x5f7 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x5f8 TObjFunc
	return 0; // 0x5fa Return
	
Label_1531:
	var_231_int = 22768; // 0x5fb PushI
	var_232_bool = var_46_bool == var_231_int; // 0x5fc Eq
	if(var_232_bool == 0) goto Label_1549; // 0x5fd JumpB
	var_233_string = ""; // 0x5fe PushV
	var_233_string = "Neutral"; // 0x5ff MovS
	func_1316(var_47_cvector, var_233_string); // 0x600 NEW_2
	var_234_int = 521603; // 0x602 PushI
	SetMessage(var_234_int); // 0x603 TObjFunc
	ClearReplies(); // 0x605 TObjFunc
	var_235_int = 522468; // 0x607 PushI
	var_236_int = 23642; // 0x608 PushI
	var_237_int = 23641; // 0x609 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x60a TObjFunc
	return 0; // 0x60c Return
	
Label_1549:
	var_238_int = 23642; // 0x60d PushI
	var_239_bool = var_46_bool == var_238_int; // 0x60e Eq
	if(var_239_bool == 0) goto Label_1567; // 0x60f JumpB
	var_240_string = ""; // 0x610 PushV
	var_240_string = "Neutral"; // 0x611 MovS
	func_1316(var_47_cvector, var_240_string); // 0x612 NEW_2
	var_241_int = 522469; // 0x614 PushI
	SetMessage(var_241_int); // 0x615 TObjFunc
	ClearReplies(); // 0x617 TObjFunc
	var_242_int = 521593; // 0x619 PushI
	var_243_int = 22771; // 0x61a PushI
	var_244_int = 22756; // 0x61b PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x61c TObjFunc
	return 0; // 0x61e Return
	
Label_1567:
	var_245_int = 22771; // 0x61f PushI
	var_246_bool = var_46_bool == var_245_int; // 0x620 Eq
	if(var_246_bool == 0) goto Label_1585; // 0x621 JumpB
	var_247_string = ""; // 0x622 PushV
	var_247_string = "Neutral"; // 0x623 MovS
	func_1316(var_47_cvector, var_247_string); // 0x624 NEW_2
	var_248_int = 521605; // 0x626 PushI
	SetMessage(var_248_int); // 0x627 TObjFunc
	ClearReplies(); // 0x629 TObjFunc
	var_249_int = 521606; // 0x62b PushI
	var_250_int = -1; // 0x62c PushI
	var_251_int = 22772; // 0x62d PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x62e TObjFunc
	return 0; // 0x630 Return
	
Label_1585:
	var_252_int = 22710; // 0x631 PushI
	var_253_bool = var_46_bool == var_252_int; // 0x632 Eq
	if(var_253_bool == 0) goto Label_1603; // 0x633 JumpB
	var_254_string = ""; // 0x634 PushV
	var_254_string = "Neutral"; // 0x635 MovS
	func_1316(var_47_cvector, var_254_string); // 0x636 NEW_2
	var_255_int = 521549; // 0x638 PushI
	SetMessage(var_255_int); // 0x639 TObjFunc
	ClearReplies(); // 0x63b TObjFunc
	var_256_int = 521550; // 0x63d PushI
	var_257_int = -1; // 0x63e PushI
	var_258_int = 22711; // 0x63f PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x640 TObjFunc
	return 0; // 0x642 Return
	
Label_1603:
	var_259_int = 23556; // 0x643 PushI
	var_260_bool = var_46_bool == var_259_int; // 0x644 Eq
	if(var_260_bool == 0) goto Label_1626; // 0x645 JumpB
	var_261_string = ""; // 0x646 PushV
	var_261_string = "Neutral"; // 0x647 MovS
	func_1316(var_47_cvector, var_261_string); // 0x648 NEW_2
	var_262_int = 522391; // 0x64a PushI
	SetMessage(var_262_int); // 0x64b TObjFunc
	ClearReplies(); // 0x64d TObjFunc
	var_263_int = 522393; // 0x64f PushI
	var_264_int = 23559; // 0x650 PushI
	var_265_int = 23558; // 0x651 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x652 TObjFunc
	var_266_int = 522392; // 0x654 PushI
	var_267_int = -1; // 0x655 PushI
	var_268_int = 23557; // 0x656 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x657 TObjFunc
	return 0; // 0x659 Return
	
Label_1626:
	var_269_int = 23559; // 0x65a PushI
	var_270_bool = var_46_bool == var_269_int; // 0x65b Eq
	if(var_270_bool == 0) goto Label_1654; // 0x65c JumpB
	var_271_string = ""; // 0x65d PushV
	var_271_string = "Neutral"; // 0x65e MovS
	func_1316(var_47_cvector, var_271_string); // 0x65f NEW_2
	var_272_int = 522394; // 0x661 PushI
	SetMessage(var_272_int); // 0x662 TObjFunc
	ClearReplies(); // 0x664 TObjFunc
	var_273_int = 521540; // 0x666 PushI
	var_274_int = 22702; // 0x667 PushI
	var_275_int = 22701; // 0x668 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x669 TObjFunc
	var_276_int = 522396; // 0x66b PushI
	var_277_int = 23562; // 0x66c PushI
	var_278_int = 23561; // 0x66d PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x66e TObjFunc
	var_279_int = 522395; // 0x670 PushI
	var_280_int = 23570; // 0x671 PushI
	var_281_int = 23560; // 0x672 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x673 TObjFunc
	return 0; // 0x675 Return
	
Label_1654:
	var_282_int = 23570; // 0x676 PushI
	var_283_bool = var_46_bool == var_282_int; // 0x677 Eq
	if(var_283_bool == 0) goto Label_1672; // 0x678 JumpB
	var_284_string = ""; // 0x679 PushV
	var_284_string = "Smile"; // 0x67a MovS
	func_1316(var_47_cvector, var_284_string); // 0x67b NEW_2
	var_285_int = 522404; // 0x67d PushI
	SetMessage(var_285_int); // 0x67e TObjFunc
	ClearReplies(); // 0x680 TObjFunc
	var_286_int = 522405; // 0x682 PushI
	var_287_int = 23572; // 0x683 PushI
	var_288_int = 23571; // 0x684 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x685 TObjFunc
	return 0; // 0x687 Return
	
Label_1672:
	var_289_int = 23572; // 0x688 PushI
	var_290_bool = var_46_bool == var_289_int; // 0x689 Eq
	if(var_290_bool == 0) goto Label_1695; // 0x68a JumpB
	var_291_string = ""; // 0x68b PushV
	var_291_string = "Smile"; // 0x68c MovS
	func_1316(var_47_cvector, var_291_string); // 0x68d NEW_2
	var_292_int = 522406; // 0x68f PushI
	SetMessage(var_292_int); // 0x690 TObjFunc
	ClearReplies(); // 0x692 TObjFunc
	var_293_int = 522407; // 0x694 PushI
	var_294_int = 23564; // 0x695 PushI
	var_295_int = 23573; // 0x696 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x697 TObjFunc
	var_296_int = 522408; // 0x699 PushI
	var_297_int = -1; // 0x69a PushI
	var_298_int = 23574; // 0x69b PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x69c TObjFunc
	return 0; // 0x69e Return
	
Label_1695:
	var_299_int = 23562; // 0x69f PushI
	var_300_bool = var_46_bool == var_299_int; // 0x6a0 Eq
	if(var_300_bool == 0) goto Label_1723; // 0x6a1 JumpB
	var_301_string = ""; // 0x6a2 PushV
	var_301_string = "Neutral"; // 0x6a3 MovS
	func_1316(var_47_cvector, var_301_string); // 0x6a4 NEW_2
	var_302_int = 522397; // 0x6a6 PushI
	SetMessage(var_302_int); // 0x6a7 TObjFunc
	ClearReplies(); // 0x6a9 TObjFunc
	var_303_int = 522398; // 0x6ab PushI
	var_304_int = 23564; // 0x6ac PushI
	var_305_int = 23563; // 0x6ad PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x6ae TObjFunc
	var_306_int = 522401; // 0x6b0 PushI
	var_307_int = 23564; // 0x6b1 PushI
	var_308_int = 23566; // 0x6b2 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x6b3 TObjFunc
	var_309_int = 522403; // 0x6b5 PushI
	var_310_int = -1; // 0x6b6 PushI
	var_311_int = 23569; // 0x6b7 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x6b8 TObjFunc
	return 0; // 0x6ba Return
	
Label_1723:
	var_312_int = 23564; // 0x6bb PushI
	var_313_bool = var_46_bool == var_312_int; // 0x6bc Eq
	if(var_313_bool == 0) goto Label_1746; // 0x6bd JumpB
	var_314_string = ""; // 0x6be PushV
	var_314_string = "Neutral"; // 0x6bf MovS
	func_1316(var_47_cvector, var_314_string); // 0x6c0 NEW_2
	var_315_int = 522399; // 0x6c2 PushI
	SetMessage(var_315_int); // 0x6c3 TObjFunc
	ClearReplies(); // 0x6c5 TObjFunc
	var_316_int = 522400; // 0x6c7 PushI
	var_317_int = -1; // 0x6c8 PushI
	var_318_int = 23565; // 0x6c9 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x6ca TObjFunc
	var_319_int = 522402; // 0x6cc PushI
	var_320_int = -1; // 0x6cd PushI
	var_321_int = 23567; // 0x6ce PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x6cf TObjFunc
	return 0; // 0x6d1 Return
	
Label_1746:
	var_322_int = 22702; // 0x6d2 PushI
	var_323_bool = var_46_bool == var_322_int; // 0x6d3 Eq
	if(var_323_bool == 0) goto Label_1769; // 0x6d4 JumpB
	var_324_string = ""; // 0x6d5 PushV
	var_324_string = "Refusal"; // 0x6d6 MovS
	func_1316(var_47_cvector, var_324_string); // 0x6d7 NEW_2
	var_325_int = 521541; // 0x6d9 PushI
	SetMessage(var_325_int); // 0x6da TObjFunc
	ClearReplies(); // 0x6dc TObjFunc
	var_326_int = 521542; // 0x6de PushI
	var_327_int = 22708; // 0x6df PushI
	var_328_int = 22703; // 0x6e0 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x6e1 TObjFunc
	var_329_int = 521543; // 0x6e3 PushI
	var_330_int = -1; // 0x6e4 PushI
	var_331_int = 22704; // 0x6e5 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x6e6 TObjFunc
	return 0; // 0x6e8 Return
	
Label_1769:
	var_332_int = 22708; // 0x6e9 PushI
	var_333_bool = var_46_bool == var_332_int; // 0x6ea Eq
	if(var_333_bool == 0) goto Label_1787; // 0x6eb JumpB
	var_334_string = ""; // 0x6ec PushV
	var_334_string = "Neutral"; // 0x6ed MovS
	func_1316(var_47_cvector, var_334_string); // 0x6ee NEW_2
	var_335_int = 521547; // 0x6f0 PushI
	SetMessage(var_335_int); // 0x6f1 TObjFunc
	ClearReplies(); // 0x6f3 TObjFunc
	var_336_int = 521548; // 0x6f5 PushI
	var_337_int = -1; // 0x6f6 PushI
	var_338_int = 22709; // 0x6f7 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x6f8 TObjFunc
	return 0; // 0x6fa Return
	
Label_1787:
	var_3_string = 1; // 0x6fb TMovB
	var_339_bool = 0; // 0x6fc PushV
	func_4951(var_339_bool); // 0x6fd NEW_2
	if(var_339_bool == 0) goto Label_1795; // 0x6ff JumpB
	lshStopAnimation(); // 0x700 Func
	goto Label_1797; // 0x702 Jump
	
Label_1797:
	return 0; // 0x705 Return
	
Label_1795:
	StopAnimation(); // 0x703 Func
	
Label_1799:
	return 0; // 0x707 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x7f8 PushI
	if(var_48_int == 0) goto Label_2582; // 0x7f9 JumpB
	func_4768(); // 0x7fb NEW_2
	var_50_int = 23048; // 0x7fd PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x7fe Eq
	if(var_51_bool == 0) goto Label_2058; // 0x7ff JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x800 PushV
	var_52_object = var_1_object; // 0x801 MovT
	var_53_object = var_0_object; // 0x802 MovT
	func_5053(); // 0x803 NEW_2
	var_102_object = Obj(); var_103_object = Obj(); // 0x805 PushV
	var_102_object = var_1_object; // 0x806 MovT
	var_103_object = var_0_object; // 0x807 MovT
	func_5181(); // 0x808 NEW_2
	
Label_2058:
	var_128_int = 23050; // 0x80a PushI
	var_129_bool = var_47_cvector == var_128_int; // 0x80b Eq
	if(var_129_bool == 0) goto Label_2071; // 0x80c JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x80d PushV
	var_130_object = var_1_object; // 0x80e MovT
	var_131_object = var_0_object; // 0x80f MovT
	func_5053(); // 0x810 NEW_2
	var_132_object = Obj(); var_133_object = Obj(); // 0x812 PushV
	var_132_object = var_1_object; // 0x813 MovT
	var_133_object = var_0_object; // 0x814 MovT
	func_5181(); // 0x815 NEW_2
	
Label_2071:
	var_134_int = 23057; // 0x817 PushI
	var_135_bool = var_47_cvector == var_134_int; // 0x818 Eq
	if(var_135_bool == 0) goto Label_2079; // 0x819 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x81a PushV
	var_136_object = var_1_object; // 0x81b MovT
	var_137_object = var_0_object; // 0x81c MovT
	func_5084(); // 0x81d NEW_2
	
Label_2079:
	var_148_int = 23752; // 0x81f PushI
	var_149_bool = var_47_cvector == var_148_int; // 0x820 Eq
	if(var_149_bool == 0) goto Label_2087; // 0x821 JumpB
	var_150_object = Obj(); var_151_object = Obj(); // 0x822 PushV
	var_150_object = var_1_object; // 0x823 MovT
	var_151_object = var_0_object; // 0x824 MovT
	func_5084(); // 0x825 NEW_2
	
Label_2087:
	var_152_int = 23042; // 0x827 PushI
	var_153_bool = var_46_bool == var_152_int; // 0x828 Eq
	if(var_153_bool == 0) goto Label_2188; // 0x829 JumpB
	var_154_bool = 0; // 0x82a PushV
	var_154_bool = 0; // 0x82b MovB
	var_155_bool = 0; var_156_object = Obj(); // 0x82c PushV
	var_156_object = var_1_object; // 0x82d MovT
	func_5319(var_156_object); // 0x82e NEW_2
	if(var_155_bool == 0) goto Label_2103; // 0x830 JumpB
	var_163_bool = 0; var_164_object = Obj(); // 0x831 PushV
	var_164_object = var_1_object; // 0x832 MovT
	func_5366(var_164_object); // 0x833 NEW_2
	if(var_163_bool == 0) goto Label_2103; // 0x835 JumpB
	var_154_bool = 1; // 0x836 MovB
	
Label_2103:
	if(var_154_bool == 0) goto Label_2134; // 0x837 JumpB
	var_169_object = Obj(); var_170_object = Obj(); // 0x838 PushV
	var_169_object = var_1_object; // 0x839 MovT
	var_170_object = var_0_object; // 0x83a MovT
	func_5047(); // 0x83b NEW_2
	var_173_string = ""; // 0x83d PushV
	var_173_string = "Smile"; // 0x83e MovS
	func_2017(var_47_cvector, var_173_string); // 0x83f NEW_2
	var_190_int = 521870; // 0x841 PushI
	SetMessage(var_190_int); // 0x842 TObjFunc
	ClearReplies(); // 0x844 TObjFunc
	var_191_int = 522575; // 0x846 PushI
	var_192_int = 23755; // 0x847 PushI
	var_193_int = 23754; // 0x848 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x849 TObjFunc
	var_194_int = 522581; // 0x84b PushI
	var_195_int = 23755; // 0x84c PushI
	var_196_int = 23760; // 0x84d PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x84e TObjFunc
	var_197_int = 522586; // 0x850 PushI
	var_198_int = 23047; // 0x851 PushI
	var_199_int = 23767; // 0x852 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x853 TObjFunc
	return 0; // 0x855 Return
	
Label_2134:
	var_200_string = ""; // 0x856 PushV
	var_200_string = "Neutral"; // 0x857 MovS
	func_2017(var_47_cvector, var_200_string); // 0x858 NEW_2
	var_201_int = 521873; // 0x85a PushI
	SetMessage(var_201_int); // 0x85b TObjFunc
	ClearReplies(); // 0x85d TObjFunc
	var_202_bool = 0; var_203_object = Obj(); // 0x85f PushV
	var_203_object = var_1_object; // 0x860 MovT
	func_5366(var_203_object); // 0x861 NEW_2
	if(var_202_bool == 0) goto Label_2153; // 0x863 JumpB
	var_204_int = 521874; // 0x864 PushI
	var_205_int = 23049; // 0x865 PushI
	var_206_int = 23046; // 0x866 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x867 TObjFunc
	
Label_2153:
	var_207_bool = 0; var_208_object = Obj(); // 0x869 PushV
	var_208_object = var_1_object; // 0x86a MovT
	func_5343(var_208_object); // 0x86b NEW_2
	if(var_207_bool == 0) goto Label_2163; // 0x86d JumpB
	var_218_int = 521886; // 0x86e PushI
	var_219_int = 23059; // 0x86f PushI
	var_220_int = 23058; // 0x870 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x871 TObjFunc
	
Label_2163:
	var_221_bool = 0; // 0x873 PushV
	var_221_bool = 0; // 0x874 MovB
	var_222_bool = 0; var_223_object = Obj(); // 0x875 PushV
	var_223_object = var_1_object; // 0x876 MovT
	func_5331(var_223_object); // 0x877 NEW_2
	if(var_222_bool == 0) goto Label_2176; // 0x879 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x87a PushV
	var_229_object = var_1_object; // 0x87b MovT
	func_5426(var_229_object); // 0x87c NEW_2
	if(var_228_bool == 0) goto Label_2176; // 0x87e JumpB
	var_221_bool = 1; // 0x87f MovB
	
Label_2176:
	if(var_221_bool == 0) goto Label_2182; // 0x880 JumpB
	var_234_int = 521883; // 0x881 PushI
	var_235_int = 23744; // 0x882 PushI
	var_236_int = 23055; // 0x883 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x884 TObjFunc
	
Label_2182:
	var_237_int = 521879; // 0x886 PushI
	var_238_int = -1; // 0x887 PushI
	var_239_int = 23051; // 0x888 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x889 TObjFunc
	return 0; // 0x88b Return
	
Label_2188:
	var_240_int = 23744; // 0x88c PushI
	var_241_bool = var_46_bool == var_240_int; // 0x88d Eq
	if(var_241_bool == 0) goto Label_2206; // 0x88e JumpB
	var_242_string = ""; // 0x88f PushV
	var_242_string = "Neutral"; // 0x890 MovS
	func_2017(var_47_cvector, var_242_string); // 0x891 NEW_2
	var_243_int = 522565; // 0x893 PushI
	SetMessage(var_243_int); // 0x894 TObjFunc
	ClearReplies(); // 0x896 TObjFunc
	var_244_int = 522566; // 0x898 PushI
	var_245_int = 23635; // 0x899 PushI
	var_246_int = 23745; // 0x89a PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x89b TObjFunc
	return 0; // 0x89d Return
	
Label_2206:
	var_247_int = 23635; // 0x89e PushI
	var_248_bool = var_46_bool == var_247_int; // 0x89f Eq
	if(var_248_bool == 0) goto Label_2224; // 0x8a0 JumpB
	var_249_string = ""; // 0x8a1 PushV
	var_249_string = "Oracle"; // 0x8a2 MovS
	func_2017(var_47_cvector, var_249_string); // 0x8a3 NEW_2
	var_250_int = 522462; // 0x8a5 PushI
	SetMessage(var_250_int); // 0x8a6 TObjFunc
	ClearReplies(); // 0x8a8 TObjFunc
	var_251_int = 522463; // 0x8aa PushI
	var_252_int = 23637; // 0x8ab PushI
	var_253_int = 23636; // 0x8ac PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x8ad TObjFunc
	return 0; // 0x8af Return
	
Label_2224:
	var_254_int = 23637; // 0x8b0 PushI
	var_255_bool = var_46_bool == var_254_int; // 0x8b1 Eq
	if(var_255_bool == 0) goto Label_2242; // 0x8b2 JumpB
	var_256_string = ""; // 0x8b3 PushV
	var_256_string = "Oracle"; // 0x8b4 MovS
	func_2017(var_47_cvector, var_256_string); // 0x8b5 NEW_2
	var_257_int = 522464; // 0x8b7 PushI
	SetMessage(var_257_int); // 0x8b8 TObjFunc
	ClearReplies(); // 0x8ba TObjFunc
	var_258_int = 522567; // 0x8bc PushI
	var_259_int = 23747; // 0x8bd PushI
	var_260_int = 23746; // 0x8be PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x8bf TObjFunc
	return 0; // 0x8c1 Return
	
Label_2242:
	var_261_int = 23747; // 0x8c2 PushI
	var_262_bool = var_46_bool == var_261_int; // 0x8c3 Eq
	if(var_262_bool == 0) goto Label_2265; // 0x8c4 JumpB
	var_263_string = ""; // 0x8c5 PushV
	var_263_string = "Smile"; // 0x8c6 MovS
	func_2017(var_47_cvector, var_263_string); // 0x8c7 NEW_2
	var_264_int = 522568; // 0x8c9 PushI
	SetMessage(var_264_int); // 0x8ca TObjFunc
	ClearReplies(); // 0x8cc TObjFunc
	var_265_int = 522465; // 0x8ce PushI
	var_266_int = 23639; // 0x8cf PushI
	var_267_int = 23638; // 0x8d0 PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x8d1 TObjFunc
	var_268_int = 522569; // 0x8d3 PushI
	var_269_int = 23749; // 0x8d4 PushI
	var_270_int = 23748; // 0x8d5 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x8d6 TObjFunc
	return 0; // 0x8d8 Return
	
Label_2265:
	var_271_int = 23749; // 0x8d9 PushI
	var_272_bool = var_46_bool == var_271_int; // 0x8da Eq
	if(var_272_bool == 0) goto Label_2283; // 0x8db JumpB
	var_273_string = ""; // 0x8dc PushV
	var_273_string = "Smile"; // 0x8dd MovS
	func_2017(var_47_cvector, var_273_string); // 0x8de NEW_2
	var_274_int = 522570; // 0x8e0 PushI
	SetMessage(var_274_int); // 0x8e1 TObjFunc
	ClearReplies(); // 0x8e3 TObjFunc
	var_275_int = 522571; // 0x8e5 PushI
	var_276_int = 23751; // 0x8e6 PushI
	var_277_int = 23750; // 0x8e7 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x8e8 TObjFunc
	return 0; // 0x8ea Return
	
Label_2283:
	var_278_int = 23751; // 0x8eb PushI
	var_279_bool = var_46_bool == var_278_int; // 0x8ec Eq
	if(var_279_bool == 0) goto Label_2301; // 0x8ed JumpB
	var_280_string = ""; // 0x8ee PushV
	var_280_string = "Neutral"; // 0x8ef MovS
	func_2017(var_47_cvector, var_280_string); // 0x8f0 NEW_2
	var_281_int = 522572; // 0x8f2 PushI
	SetMessage(var_281_int); // 0x8f3 TObjFunc
	ClearReplies(); // 0x8f5 TObjFunc
	var_282_int = 522573; // 0x8f7 PushI
	var_283_int = -1; // 0x8f8 PushI
	var_284_int = 23752; // 0x8f9 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x8fa TObjFunc
	return 0; // 0x8fc Return
	
Label_2301:
	var_285_int = 23639; // 0x8fd PushI
	var_286_bool = var_46_bool == var_285_int; // 0x8fe Eq
	if(var_286_bool == 0) goto Label_2319; // 0x8ff JumpB
	var_287_string = ""; // 0x900 PushV
	var_287_string = "Neutral"; // 0x901 MovS
	func_2017(var_47_cvector, var_287_string); // 0x902 NEW_2
	var_288_int = 522466; // 0x904 PushI
	SetMessage(var_288_int); // 0x905 TObjFunc
	ClearReplies(); // 0x907 TObjFunc
	var_289_int = 521885; // 0x909 PushI
	var_290_int = -1; // 0x90a PushI
	var_291_int = 23057; // 0x90b PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x90c TObjFunc
	return 0; // 0x90e Return
	
Label_2319:
	var_292_int = 23059; // 0x90f PushI
	var_293_bool = var_46_bool == var_292_int; // 0x910 Eq
	if(var_293_bool == 0) goto Label_2342; // 0x911 JumpB
	var_294_string = ""; // 0x912 PushV
	var_294_string = "Smile"; // 0x913 MovS
	func_2017(var_47_cvector, var_294_string); // 0x914 NEW_2
	var_295_int = 521887; // 0x916 PushI
	SetMessage(var_295_int); // 0x917 TObjFunc
	ClearReplies(); // 0x919 TObjFunc
	var_296_int = 521888; // 0x91b PushI
	var_297_int = -1; // 0x91c PushI
	var_298_int = 23060; // 0x91d PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x91e TObjFunc
	var_299_int = 522560; // 0x920 PushI
	var_300_int = 23740; // 0x921 PushI
	var_301_int = 23739; // 0x922 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x923 TObjFunc
	return 0; // 0x925 Return
	
Label_2342:
	var_302_int = 23740; // 0x926 PushI
	var_303_bool = var_46_bool == var_302_int; // 0x927 Eq
	if(var_303_bool == 0) goto Label_2360; // 0x928 JumpB
	var_304_string = ""; // 0x929 PushV
	var_304_string = "Smile"; // 0x92a MovS
	func_2017(var_47_cvector, var_304_string); // 0x92b NEW_2
	var_305_int = 522561; // 0x92d PushI
	SetMessage(var_305_int); // 0x92e TObjFunc
	ClearReplies(); // 0x930 TObjFunc
	var_306_int = 522562; // 0x932 PushI
	var_307_int = 23742; // 0x933 PushI
	var_308_int = 23741; // 0x934 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x935 TObjFunc
	return 0; // 0x937 Return
	
Label_2360:
	var_309_int = 23742; // 0x938 PushI
	var_310_bool = var_46_bool == var_309_int; // 0x939 Eq
	if(var_310_bool == 0) goto Label_2378; // 0x93a JumpB
	var_311_string = ""; // 0x93b PushV
	var_311_string = "Smile"; // 0x93c MovS
	func_2017(var_47_cvector, var_311_string); // 0x93d NEW_2
	var_312_int = 522563; // 0x93f PushI
	SetMessage(var_312_int); // 0x940 TObjFunc
	ClearReplies(); // 0x942 TObjFunc
	var_313_int = 522564; // 0x944 PushI
	var_314_int = -1; // 0x945 PushI
	var_315_int = 23743; // 0x946 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x947 TObjFunc
	return 0; // 0x949 Return
	
Label_2378:
	var_316_int = 23049; // 0x94a PushI
	var_317_bool = var_46_bool == var_316_int; // 0x94b Eq
	if(var_317_bool == 0) goto Label_2396; // 0x94c JumpB
	var_318_string = ""; // 0x94d PushV
	var_318_string = "Neutral"; // 0x94e MovS
	func_2017(var_47_cvector, var_318_string); // 0x94f NEW_2
	var_319_int = 521877; // 0x951 PushI
	SetMessage(var_319_int); // 0x952 TObjFunc
	ClearReplies(); // 0x954 TObjFunc
	var_320_int = 521878; // 0x956 PushI
	var_321_int = -1; // 0x957 PushI
	var_322_int = 23050; // 0x958 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x959 TObjFunc
	return 0; // 0x95b Return
	
Label_2396:
	var_323_int = 23755; // 0x95c PushI
	var_324_bool = var_46_bool == var_323_int; // 0x95d Eq
	if(var_324_bool == 0) goto Label_2414; // 0x95e JumpB
	var_325_string = ""; // 0x95f PushV
	var_325_string = "Smile"; // 0x960 MovS
	func_2017(var_47_cvector, var_325_string); // 0x961 NEW_2
	var_326_int = 522576; // 0x963 PushI
	SetMessage(var_326_int); // 0x964 TObjFunc
	ClearReplies(); // 0x966 TObjFunc
	var_327_int = 522577; // 0x968 PushI
	var_328_int = 23757; // 0x969 PushI
	var_329_int = 23756; // 0x96a PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x96b TObjFunc
	return 0; // 0x96d Return
	
Label_2414:
	var_330_int = 23757; // 0x96e PushI
	var_331_bool = var_46_bool == var_330_int; // 0x96f Eq
	if(var_331_bool == 0) goto Label_2437; // 0x970 JumpB
	var_332_string = ""; // 0x971 PushV
	var_332_string = "Smile"; // 0x972 MovS
	func_2017(var_47_cvector, var_332_string); // 0x973 NEW_2
	var_333_int = 522578; // 0x975 PushI
	SetMessage(var_333_int); // 0x976 TObjFunc
	ClearReplies(); // 0x978 TObjFunc
	var_334_int = 521871; // 0x97a PushI
	var_335_int = 23047; // 0x97b PushI
	var_336_int = 23043; // 0x97c PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x97d TObjFunc
	var_337_int = 522584; // 0x97f PushI
	var_338_int = 23047; // 0x980 PushI
	var_339_int = 23765; // 0x981 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x982 TObjFunc
	return 0; // 0x984 Return
	
Label_2437:
	var_340_int = 23047; // 0x985 PushI
	var_341_bool = var_46_bool == var_340_int; // 0x986 Eq
	if(var_341_bool == 0) goto Label_2465; // 0x987 JumpB
	var_342_string = ""; // 0x988 PushV
	var_342_string = "Refusal"; // 0x989 MovS
	func_2017(var_47_cvector, var_342_string); // 0x98a NEW_2
	var_343_int = 521875; // 0x98c PushI
	SetMessage(var_343_int); // 0x98d TObjFunc
	ClearReplies(); // 0x98f TObjFunc
	var_344_int = 522579; // 0x991 PushI
	var_345_int = 23759; // 0x992 PushI
	var_346_int = 23758; // 0x993 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x994 TObjFunc
	var_347_int = 521872; // 0x996 PushI
	var_348_int = 23771; // 0x997 PushI
	var_349_int = 23044; // 0x998 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x999 TObjFunc
	var_350_int = 522591; // 0x99b PushI
	var_351_int = 23777; // 0x99c PushI
	var_352_int = 23776; // 0x99d PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x99e TObjFunc
	return 0; // 0x9a0 Return
	
Label_2465:
	var_353_int = 23777; // 0x9a1 PushI
	var_354_bool = var_46_bool == var_353_int; // 0x9a2 Eq
	if(var_354_bool == 0) goto Label_2483; // 0x9a3 JumpB
	var_355_string = ""; // 0x9a4 PushV
	var_355_string = "Refusal"; // 0x9a5 MovS
	func_2017(var_47_cvector, var_355_string); // 0x9a6 NEW_2
	var_356_int = 522592; // 0x9a8 PushI
	SetMessage(var_356_int); // 0x9a9 TObjFunc
	ClearReplies(); // 0x9ab TObjFunc
	var_357_int = 522593; // 0x9ad PushI
	var_358_int = 23759; // 0x9ae PushI
	var_359_int = 23778; // 0x9af PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x9b0 TObjFunc
	return 0; // 0x9b2 Return
	
Label_2483:
	var_360_int = 23771; // 0x9b3 PushI
	var_361_bool = var_46_bool == var_360_int; // 0x9b4 Eq
	if(var_361_bool == 0) goto Label_2506; // 0x9b5 JumpB
	var_362_string = ""; // 0x9b6 PushV
	var_362_string = "Refusal"; // 0x9b7 MovS
	func_2017(var_47_cvector, var_362_string); // 0x9b8 NEW_2
	var_363_int = 522587; // 0x9ba PushI
	SetMessage(var_363_int); // 0x9bb TObjFunc
	ClearReplies(); // 0x9bd TObjFunc
	var_364_int = 522588; // 0x9bf PushI
	var_365_int = 23773; // 0x9c0 PushI
	var_366_int = 23772; // 0x9c1 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x9c2 TObjFunc
	var_367_int = 522590; // 0x9c4 PushI
	var_368_int = 23759; // 0x9c5 PushI
	var_369_int = 23774; // 0x9c6 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x9c7 TObjFunc
	return 0; // 0x9c9 Return
	
Label_2506:
	var_370_int = 23773; // 0x9ca PushI
	var_371_bool = var_46_bool == var_370_int; // 0x9cb Eq
	if(var_371_bool == 0) goto Label_2524; // 0x9cc JumpB
	var_372_string = ""; // 0x9cd PushV
	var_372_string = "Refusal"; // 0x9ce MovS
	func_2017(var_47_cvector, var_372_string); // 0x9cf NEW_2
	var_373_int = 522589; // 0x9d1 PushI
	SetMessage(var_373_int); // 0x9d2 TObjFunc
	ClearReplies(); // 0x9d4 TObjFunc
	var_374_int = 532185; // 0x9d6 PushI
	var_375_int = 23759; // 0x9d7 PushI
	var_376_int = 33601; // 0x9d8 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x9d9 TObjFunc
	return 0; // 0x9db Return
	
Label_2524:
	var_377_int = 23759; // 0x9dc PushI
	var_378_bool = var_46_bool == var_377_int; // 0x9dd Eq
	if(var_378_bool == 0) goto Label_2547; // 0x9de JumpB
	var_379_string = ""; // 0x9df PushV
	var_379_string = "Refusal"; // 0x9e0 MovS
	func_2017(var_47_cvector, var_379_string); // 0x9e1 NEW_2
	var_380_int = 522580; // 0x9e3 PushI
	SetMessage(var_380_int); // 0x9e4 TObjFunc
	ClearReplies(); // 0x9e6 TObjFunc
	var_381_int = 522594; // 0x9e8 PushI
	var_382_int = 23781; // 0x9e9 PushI
	var_383_int = 23780; // 0x9ea PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x9eb TObjFunc
	var_384_int = 522582; // 0x9ed PushI
	var_385_int = -1; // 0x9ee PushI
	var_386_int = 23763; // 0x9ef PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x9f0 TObjFunc
	return 0; // 0x9f2 Return
	
Label_2547:
	var_387_int = 23781; // 0x9f3 PushI
	var_388_bool = var_46_bool == var_387_int; // 0x9f4 Eq
	if(var_388_bool == 0) goto Label_2570; // 0x9f5 JumpB
	var_389_string = ""; // 0x9f6 PushV
	var_389_string = "Refusal"; // 0x9f7 MovS
	func_2017(var_47_cvector, var_389_string); // 0x9f8 NEW_2
	var_390_int = 522595; // 0x9fa PushI
	SetMessage(var_390_int); // 0x9fb TObjFunc
	ClearReplies(); // 0x9fd TObjFunc
	var_391_int = 521876; // 0x9ff PushI
	var_392_int = -1; // 0xa00 PushI
	var_393_int = 23048; // 0xa01 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0xa02 TObjFunc
	var_394_int = 522596; // 0xa04 PushI
	var_395_int = -1; // 0xa05 PushI
	var_396_int = 23782; // 0xa06 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0xa07 TObjFunc
	return 0; // 0xa09 Return
	
Label_2570:
	var_3_string = 1; // 0xa0a TMovB
	var_397_bool = 0; // 0xa0b PushV
	func_4951(var_397_bool); // 0xa0c NEW_2
	if(var_397_bool == 0) goto Label_2578; // 0xa0e JumpB
	lshStopAnimation(); // 0xa0f Func
	goto Label_2580; // 0xa11 Jump
	
Label_2580:
	return 0; // 0xa14 Return
	
Label_2578:
	StopAnimation(); // 0xa12 Func
	
Label_2582:
	return 0; // 0xa16 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xb09 PushI
	if(var_48_int == 0) goto Label_3400; // 0xb0a JumpB
	func_4768(); // 0xb0c NEW_2
	var_50_int = 23169; // 0xb0e PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xb0f Eq
	if(var_51_bool == 0) goto Label_2848; // 0xb10 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xb11 PushV
	var_52_object = var_1_object; // 0xb12 MovT
	var_53_object = var_0_object; // 0xb13 MovT
	func_5099(); // 0xb14 NEW_2
	var_93_object = Obj(); var_94_object = Obj(); // 0xb16 PushV
	var_93_object = var_1_object; // 0xb17 MovT
	var_94_object = var_0_object; // 0xb18 MovT
	func_5214(); // 0xb19 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0xb1b PushV
	var_105_object = var_1_object; // 0xb1c MovT
	var_106_object = var_0_object; // 0xb1d MovT
	func_5231(); // 0xb1e NEW_2
	
Label_2848:
	var_137_int = 24875; // 0xb20 PushI
	var_138_bool = var_47_cvector == var_137_int; // 0xb21 Eq
	if(var_138_bool == 0) goto Label_2866; // 0xb22 JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0xb23 PushV
	var_139_object = var_1_object; // 0xb24 MovT
	var_140_object = var_0_object; // 0xb25 MovT
	func_5099(); // 0xb26 NEW_2
	var_141_object = Obj(); var_142_object = Obj(); // 0xb28 PushV
	var_141_object = var_1_object; // 0xb29 MovT
	var_142_object = var_0_object; // 0xb2a MovT
	func_5214(); // 0xb2b NEW_2
	var_143_object = Obj(); var_144_object = Obj(); // 0xb2d PushV
	var_143_object = var_1_object; // 0xb2e MovT
	var_144_object = var_0_object; // 0xb2f MovT
	func_5231(); // 0xb30 NEW_2
	
Label_2866:
	var_145_int = 23225; // 0xb32 PushI
	var_146_bool = var_47_cvector == var_145_int; // 0xb33 Eq
	if(var_146_bool == 0) goto Label_2874; // 0xb34 JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0xb35 PushV
	var_147_object = var_1_object; // 0xb36 MovT
	var_148_object = var_0_object; // 0xb37 MovT
	func_5116(); // 0xb38 NEW_2
	
Label_2874:
	var_152_int = 24857; // 0xb3a PushI
	var_153_bool = var_47_cvector == var_152_int; // 0xb3b Eq
	if(var_153_bool == 0) goto Label_2882; // 0xb3c JumpB
	var_154_object = Obj(); var_155_object = Obj(); // 0xb3d PushV
	var_154_object = var_1_object; // 0xb3e MovT
	var_155_object = var_0_object; // 0xb3f MovT
	func_5116(); // 0xb40 NEW_2
	
Label_2882:
	var_156_int = 24858; // 0xb42 PushI
	var_157_bool = var_47_cvector == var_156_int; // 0xb43 Eq
	if(var_157_bool == 0) goto Label_2890; // 0xb44 JumpB
	var_158_object = Obj(); var_159_object = Obj(); // 0xb45 PushV
	var_158_object = var_1_object; // 0xb46 MovT
	var_159_object = var_0_object; // 0xb47 MovT
	func_5116(); // 0xb48 NEW_2
	
Label_2890:
	var_160_int = 24882; // 0xb4a PushI
	var_161_bool = var_47_cvector == var_160_int; // 0xb4b Eq
	if(var_161_bool == 0) goto Label_2898; // 0xb4c JumpB
	var_162_object = Obj(); var_163_object = Obj(); // 0xb4d PushV
	var_162_object = var_1_object; // 0xb4e MovT
	var_163_object = var_0_object; // 0xb4f MovT
	func_5099(); // 0xb50 NEW_2
	
Label_2898:
	var_164_int = 24885; // 0xb52 PushI
	var_165_bool = var_47_cvector == var_164_int; // 0xb53 Eq
	if(var_165_bool == 0) goto Label_2906; // 0xb54 JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0xb55 PushV
	var_166_object = var_1_object; // 0xb56 MovT
	var_167_object = var_0_object; // 0xb57 MovT
	func_5099(); // 0xb58 NEW_2
	
Label_2906:
	var_168_int = 23227; // 0xb5a PushI
	var_169_bool = var_47_cvector == var_168_int; // 0xb5b Eq
	if(var_169_bool == 0) goto Label_2919; // 0xb5c JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0xb5d PushV
	var_170_object = var_1_object; // 0xb5e MovT
	var_171_object = var_0_object; // 0xb5f MovT
	func_5116(); // 0xb60 NEW_2
	var_172_object = Obj(); var_173_object = Obj(); // 0xb62 PushV
	var_172_object = var_1_object; // 0xb63 MovT
	var_173_object = var_0_object; // 0xb64 MovT
	func_5153(); // 0xb65 NEW_2
	
Label_2919:
	var_200_int = 24844; // 0xb67 PushI
	var_201_bool = var_47_cvector == var_200_int; // 0xb68 Eq
	if(var_201_bool == 0) goto Label_2932; // 0xb69 JumpB
	var_202_object = Obj(); var_203_object = Obj(); // 0xb6a PushV
	var_202_object = var_1_object; // 0xb6b MovT
	var_203_object = var_0_object; // 0xb6c MovT
	func_5116(); // 0xb6d NEW_2
	var_204_object = Obj(); var_205_object = Obj(); // 0xb6f PushV
	var_204_object = var_1_object; // 0xb70 MovT
	var_205_object = var_0_object; // 0xb71 MovT
	func_5153(); // 0xb72 NEW_2
	
Label_2932:
	var_206_int = 24846; // 0xb74 PushI
	var_207_bool = var_47_cvector == var_206_int; // 0xb75 Eq
	if(var_207_bool == 0) goto Label_2945; // 0xb76 JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0xb77 PushV
	var_208_object = var_1_object; // 0xb78 MovT
	var_209_object = var_0_object; // 0xb79 MovT
	func_5116(); // 0xb7a NEW_2
	var_210_object = Obj(); var_211_object = Obj(); // 0xb7c PushV
	var_210_object = var_1_object; // 0xb7d MovT
	var_211_object = var_0_object; // 0xb7e MovT
	func_5153(); // 0xb7f NEW_2
	
Label_2945:
	var_212_int = 23163; // 0xb81 PushI
	var_213_bool = var_46_bool == var_212_int; // 0xb82 Eq
	if(var_213_bool == 0) goto Label_3048; // 0xb83 JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0xb84 PushV
	var_215_object = var_1_object; // 0xb85 MovT
	func_5378(var_215_object); // 0xb86 NEW_2
	if(var_214_bool == 0) goto Label_2983; // 0xb88 JumpB
	var_220_object = Obj(); var_221_object = Obj(); // 0xb89 PushV
	var_220_object = var_1_object; // 0xb8a MovT
	var_221_object = var_0_object; // 0xb8b MovT
	func_5093(); // 0xb8c NEW_2
	var_224_string = ""; // 0xb8e PushV
	var_224_string = "Neutral"; // 0xb8f MovS
	func_2802(var_47_cvector, var_224_string); // 0xb90 NEW_2
	var_241_int = 521993; // 0xb92 PushI
	SetMessage(var_241_int); // 0xb93 TObjFunc
	ClearReplies(); // 0xb95 TObjFunc
	var_242_int = 521994; // 0xb97 PushI
	var_243_int = 23168; // 0xb98 PushI
	var_244_int = 23164; // 0xb99 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0xb9a TObjFunc
	var_245_bool = 0; var_246_object = Obj(); // 0xb9c PushV
	var_246_object = var_1_object; // 0xb9d MovT
	func_5449(var_246_object); // 0xb9e NEW_2
	if(var_245_bool == 0) goto Label_2982; // 0xba0 JumpB
	var_251_int = 521996; // 0xba1 PushI
	var_252_int = 23168; // 0xba2 PushI
	var_253_int = 23166; // 0xba3 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0xba4 TObjFunc
	
Label_2982:
	return 0; // 0xba6 Return
	
Label_2983:
	var_254_bool = 0; var_255_object = Obj(); // 0xba7 PushV
	var_255_object = var_1_object; // 0xba8 MovT
	func_5414(var_255_object); // 0xba9 NEW_2
	if(var_254_bool == 0) goto Label_3013; // 0xbab JumpB
	var_260_string = ""; // 0xbac PushV
	var_260_string = "Smile"; // 0xbad MovS
	func_2802(var_47_cvector, var_260_string); // 0xbae NEW_2
	var_261_int = 522051; // 0xbb0 PushI
	SetMessage(var_261_int); // 0xbb1 TObjFunc
	ClearReplies(); // 0xbb3 TObjFunc
	var_262_int = 523621; // 0xbb5 PushI
	var_263_int = 24861; // 0xbb6 PushI
	var_264_int = 24860; // 0xbb7 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0xbb8 TObjFunc
	var_265_int = 523612; // 0xbba PushI
	var_266_int = 24851; // 0xbbb PushI
	var_267_int = 24849; // 0xbbc PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xbbd TObjFunc
	var_268_int = 523613; // 0xbbf PushI
	var_269_int = 24851; // 0xbc0 PushI
	var_270_int = 24850; // 0xbc1 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xbc2 TObjFunc
	return 0; // 0xbc4 Return
	
Label_3013:
	var_271_string = ""; // 0xbc5 PushV
	var_271_string = "Neutral"; // 0xbc6 MovS
	func_2802(var_47_cvector, var_271_string); // 0xbc7 NEW_2
	var_272_int = 521997; // 0xbc9 PushI
	SetMessage(var_272_int); // 0xbca TObjFunc
	ClearReplies(); // 0xbcc TObjFunc
	var_273_bool = 0; var_274_object = Obj(); // 0xbce PushV
	var_274_object = var_1_object; // 0xbcf MovT
	func_5390(var_274_object); // 0xbd0 NEW_2
	if(var_273_bool == 0) goto Label_3032; // 0xbd2 JumpB
	var_279_int = 522000; // 0xbd3 PushI
	var_280_int = 24859; // 0xbd4 PushI
	var_281_int = 23170; // 0xbd5 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xbd6 TObjFunc
	
Label_3032:
	var_282_bool = 0; var_283_object = Obj(); // 0xbd8 PushV
	var_283_object = var_1_object; // 0xbd9 MovT
	func_5402(var_283_object); // 0xbda NEW_2
	if(var_282_bool == 0) goto Label_3042; // 0xbdc JumpB
	var_288_int = 522003; // 0xbdd PushI
	var_289_int = 23226; // 0xbde PushI
	var_290_int = 23173; // 0xbdf PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0xbe0 TObjFunc
	
Label_3042:
	var_291_int = 522004; // 0xbe2 PushI
	var_292_int = -1; // 0xbe3 PushI
	var_293_int = 23174; // 0xbe4 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0xbe5 TObjFunc
	return 0; // 0xbe7 Return
	
Label_3048:
	var_294_int = 23226; // 0xbe8 PushI
	var_295_bool = var_46_bool == var_294_int; // 0xbe9 Eq
	if(var_295_bool == 0) goto Label_3076; // 0xbea JumpB
	var_296_string = ""; // 0xbeb PushV
	var_296_string = "Smile"; // 0xbec MovS
	func_2802(var_47_cvector, var_296_string); // 0xbed NEW_2
	var_297_int = 522053; // 0xbef PushI
	SetMessage(var_297_int); // 0xbf0 TObjFunc
	ClearReplies(); // 0xbf2 TObjFunc
	var_298_int = 522054; // 0xbf4 PushI
	var_299_int = -1; // 0xbf5 PushI
	var_300_int = 23227; // 0xbf6 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0xbf7 TObjFunc
	var_301_int = 523600; // 0xbf9 PushI
	var_302_int = 24837; // 0xbfa PushI
	var_303_int = 24835; // 0xbfb PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0xbfc TObjFunc
	var_304_int = 523603; // 0xbfe PushI
	var_305_int = 24839; // 0xbff PushI
	var_306_int = 24838; // 0xc00 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0xc01 TObjFunc
	return 0; // 0xc03 Return
	
Label_3076:
	var_307_int = 24839; // 0xc04 PushI
	var_308_bool = var_46_bool == var_307_int; // 0xc05 Eq
	if(var_308_bool == 0) goto Label_3099; // 0xc06 JumpB
	var_309_string = ""; // 0xc07 PushV
	var_309_string = "Smile"; // 0xc08 MovS
	func_2802(var_47_cvector, var_309_string); // 0xc09 NEW_2
	var_310_int = 523604; // 0xc0b PushI
	SetMessage(var_310_int); // 0xc0c TObjFunc
	ClearReplies(); // 0xc0e TObjFunc
	var_311_int = 523605; // 0xc10 PushI
	var_312_int = 24837; // 0xc11 PushI
	var_313_int = 24840; // 0xc12 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0xc13 TObjFunc
	var_314_int = 523606; // 0xc15 PushI
	var_315_int = 24842; // 0xc16 PushI
	var_316_int = 24841; // 0xc17 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xc18 TObjFunc
	return 0; // 0xc1a Return
	
Label_3099:
	var_317_int = 24842; // 0xc1b PushI
	var_318_bool = var_46_bool == var_317_int; // 0xc1c Eq
	if(var_318_bool == 0) goto Label_3122; // 0xc1d JumpB
	var_319_string = ""; // 0xc1e PushV
	var_319_string = "Smile"; // 0xc1f MovS
	func_2802(var_47_cvector, var_319_string); // 0xc20 NEW_2
	var_320_int = 523607; // 0xc22 PushI
	SetMessage(var_320_int); // 0xc23 TObjFunc
	ClearReplies(); // 0xc25 TObjFunc
	var_321_int = 523610; // 0xc27 PushI
	var_322_int = -1; // 0xc28 PushI
	var_323_int = 24846; // 0xc29 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0xc2a TObjFunc
	var_324_int = 523611; // 0xc2c PushI
	var_325_int = 24837; // 0xc2d PushI
	var_326_int = 24847; // 0xc2e PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0xc2f TObjFunc
	return 0; // 0xc31 Return
	
Label_3122:
	var_327_int = 24837; // 0xc32 PushI
	var_328_bool = var_46_bool == var_327_int; // 0xc33 Eq
	if(var_328_bool == 0) goto Label_3145; // 0xc34 JumpB
	var_329_string = ""; // 0xc35 PushV
	var_329_string = "Smile"; // 0xc36 MovS
	func_2802(var_47_cvector, var_329_string); // 0xc37 NEW_2
	var_330_int = 523602; // 0xc39 PushI
	SetMessage(var_330_int); // 0xc3a TObjFunc
	ClearReplies(); // 0xc3c TObjFunc
	var_331_int = 523608; // 0xc3e PushI
	var_332_int = -1; // 0xc3f PushI
	var_333_int = 24844; // 0xc40 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0xc41 TObjFunc
	var_334_int = 523609; // 0xc43 PushI
	var_335_int = -1; // 0xc44 PushI
	var_336_int = 24845; // 0xc45 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0xc46 TObjFunc
	return 0; // 0xc48 Return
	
Label_3145:
	var_337_int = 24859; // 0xc49 PushI
	var_338_bool = var_46_bool == var_337_int; // 0xc4a Eq
	if(var_338_bool == 0) goto Label_3163; // 0xc4b JumpB
	var_339_string = ""; // 0xc4c PushV
	var_339_string = "Oracle"; // 0xc4d MovS
	func_2802(var_47_cvector, var_339_string); // 0xc4e NEW_2
	var_340_int = 523620; // 0xc50 PushI
	SetMessage(var_340_int); // 0xc51 TObjFunc
	ClearReplies(); // 0xc53 TObjFunc
	var_341_int = 523637; // 0xc55 PushI
	var_342_int = 24881; // 0xc56 PushI
	var_343_int = 24880; // 0xc57 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0xc58 TObjFunc
	return 0; // 0xc5a Return
	
Label_3163:
	var_344_int = 24881; // 0xc5b PushI
	var_345_bool = var_46_bool == var_344_int; // 0xc5c Eq
	if(var_345_bool == 0) goto Label_3186; // 0xc5d JumpB
	var_346_string = ""; // 0xc5e PushV
	var_346_string = "Neutral"; // 0xc5f MovS
	func_2802(var_47_cvector, var_346_string); // 0xc60 NEW_2
	var_347_int = 523638; // 0xc62 PushI
	SetMessage(var_347_int); // 0xc63 TObjFunc
	ClearReplies(); // 0xc65 TObjFunc
	var_348_int = 523639; // 0xc67 PushI
	var_349_int = -1; // 0xc68 PushI
	var_350_int = 24882; // 0xc69 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0xc6a TObjFunc
	var_351_int = 523640; // 0xc6c PushI
	var_352_int = 24884; // 0xc6d PushI
	var_353_int = 24883; // 0xc6e PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0xc6f TObjFunc
	return 0; // 0xc71 Return
	
Label_3186:
	var_354_int = 24884; // 0xc72 PushI
	var_355_bool = var_46_bool == var_354_int; // 0xc73 Eq
	if(var_355_bool == 0) goto Label_3204; // 0xc74 JumpB
	var_356_string = ""; // 0xc75 PushV
	var_356_string = "Neutral"; // 0xc76 MovS
	func_2802(var_47_cvector, var_356_string); // 0xc77 NEW_2
	var_357_int = 523641; // 0xc79 PushI
	SetMessage(var_357_int); // 0xc7a TObjFunc
	ClearReplies(); // 0xc7c TObjFunc
	var_358_int = 523642; // 0xc7e PushI
	var_359_int = -1; // 0xc7f PushI
	var_360_int = 24885; // 0xc80 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0xc81 TObjFunc
	return 0; // 0xc83 Return
	
Label_3204:
	var_361_int = 24851; // 0xc84 PushI
	var_362_bool = var_46_bool == var_361_int; // 0xc85 Eq
	if(var_362_bool == 0) goto Label_3227; // 0xc86 JumpB
	var_363_string = ""; // 0xc87 PushV
	var_363_string = "Refusal"; // 0xc88 MovS
	func_2802(var_47_cvector, var_363_string); // 0xc89 NEW_2
	var_364_int = 523614; // 0xc8b PushI
	SetMessage(var_364_int); // 0xc8c TObjFunc
	ClearReplies(); // 0xc8e TObjFunc
	var_365_int = 523615; // 0xc90 PushI
	var_366_int = 24855; // 0xc91 PushI
	var_367_int = 24853; // 0xc92 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0xc93 TObjFunc
	var_368_int = 523616; // 0xc95 PushI
	var_369_int = 24855; // 0xc96 PushI
	var_370_int = 24854; // 0xc97 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0xc98 TObjFunc
	return 0; // 0xc9a Return
	
Label_3227:
	var_371_int = 24855; // 0xc9b PushI
	var_372_bool = var_46_bool == var_371_int; // 0xc9c Eq
	if(var_372_bool == 0) goto Label_3255; // 0xc9d JumpB
	var_373_string = ""; // 0xc9e PushV
	var_373_string = "Refusal"; // 0xc9f MovS
	func_2802(var_47_cvector, var_373_string); // 0xca0 NEW_2
	var_374_int = 523617; // 0xca2 PushI
	SetMessage(var_374_int); // 0xca3 TObjFunc
	ClearReplies(); // 0xca5 TObjFunc
	var_375_int = 522052; // 0xca7 PushI
	var_376_int = -1; // 0xca8 PushI
	var_377_int = 23225; // 0xca9 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0xcaa TObjFunc
	var_378_int = 523618; // 0xcac PushI
	var_379_int = -1; // 0xcad PushI
	var_380_int = 24857; // 0xcae PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0xcaf TObjFunc
	var_381_int = 523619; // 0xcb1 PushI
	var_382_int = -1; // 0xcb2 PushI
	var_383_int = 24858; // 0xcb3 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0xcb4 TObjFunc
	return 0; // 0xcb6 Return
	
Label_3255:
	var_384_int = 24861; // 0xcb7 PushI
	var_385_bool = var_46_bool == var_384_int; // 0xcb8 Eq
	if(var_385_bool == 0) goto Label_3278; // 0xcb9 JumpB
	var_386_string = ""; // 0xcba PushV
	var_386_string = "Smile"; // 0xcbb MovS
	func_2802(var_47_cvector, var_386_string); // 0xcbc NEW_2
	var_387_int = 523622; // 0xcbe PushI
	SetMessage(var_387_int); // 0xcbf TObjFunc
	ClearReplies(); // 0xcc1 TObjFunc
	var_388_int = 523623; // 0xcc3 PushI
	var_389_int = 24851; // 0xcc4 PushI
	var_390_int = 24862; // 0xcc5 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0xcc6 TObjFunc
	var_391_int = 523624; // 0xcc8 PushI
	var_392_int = 24851; // 0xcc9 PushI
	var_393_int = 24864; // 0xcca PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0xccb TObjFunc
	return 0; // 0xccd Return
	
Label_3278:
	var_394_int = 23168; // 0xcce PushI
	var_395_bool = var_46_bool == var_394_int; // 0xccf Eq
	if(var_395_bool == 0) goto Label_3301; // 0xcd0 JumpB
	var_396_string = ""; // 0xcd1 PushV
	var_396_string = "Oracle"; // 0xcd2 MovS
	func_2802(var_47_cvector, var_396_string); // 0xcd3 NEW_2
	var_397_int = 521998; // 0xcd5 PushI
	SetMessage(var_397_int); // 0xcd6 TObjFunc
	ClearReplies(); // 0xcd8 TObjFunc
	var_398_int = 523625; // 0xcda PushI
	var_399_int = 24867; // 0xcdb PushI
	var_400_int = 24866; // 0xcdc PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0xcdd TObjFunc
	var_401_int = 523627; // 0xcdf PushI
	var_402_int = 24869; // 0xce0 PushI
	var_403_int = 24868; // 0xce1 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0xce2 TObjFunc
	return 0; // 0xce4 Return
	
Label_3301:
	var_404_int = 24867; // 0xce5 PushI
	var_405_bool = var_46_bool == var_404_int; // 0xce6 Eq
	if(var_405_bool == 0) goto Label_3324; // 0xce7 JumpB
	var_406_string = ""; // 0xce8 PushV
	var_406_string = "Oracle"; // 0xce9 MovS
	func_2802(var_47_cvector, var_406_string); // 0xcea NEW_2
	var_407_int = 523626; // 0xcec PushI
	SetMessage(var_407_int); // 0xced TObjFunc
	ClearReplies(); // 0xcef TObjFunc
	var_408_int = 523629; // 0xcf1 PushI
	var_409_int = 24869; // 0xcf2 PushI
	var_410_int = 24870; // 0xcf3 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xcf4 TObjFunc
	var_411_int = 523634; // 0xcf6 PushI
	var_412_int = 24877; // 0xcf7 PushI
	var_413_int = 24876; // 0xcf8 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xcf9 TObjFunc
	return 0; // 0xcfb Return
	
Label_3324:
	var_414_int = 24877; // 0xcfc PushI
	var_415_bool = var_46_bool == var_414_int; // 0xcfd Eq
	if(var_415_bool == 0) goto Label_3342; // 0xcfe JumpB
	var_416_string = ""; // 0xcff PushV
	var_416_string = "Neutral"; // 0xd00 MovS
	func_2802(var_47_cvector, var_416_string); // 0xd01 NEW_2
	var_417_int = 523635; // 0xd03 PushI
	SetMessage(var_417_int); // 0xd04 TObjFunc
	ClearReplies(); // 0xd06 TObjFunc
	var_418_int = 523636; // 0xd08 PushI
	var_419_int = 24869; // 0xd09 PushI
	var_420_int = 24878; // 0xd0a PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xd0b TObjFunc
	return 0; // 0xd0d Return
	
Label_3342:
	var_421_int = 24869; // 0xd0e PushI
	var_422_bool = var_46_bool == var_421_int; // 0xd0f Eq
	if(var_422_bool == 0) goto Label_3365; // 0xd10 JumpB
	var_423_string = ""; // 0xd11 PushV
	var_423_string = "Neutral"; // 0xd12 MovS
	func_2802(var_47_cvector, var_423_string); // 0xd13 NEW_2
	var_424_int = 523628; // 0xd15 PushI
	SetMessage(var_424_int); // 0xd16 TObjFunc
	ClearReplies(); // 0xd18 TObjFunc
	var_425_int = 521999; // 0xd1a PushI
	var_426_int = -1; // 0xd1b PushI
	var_427_int = 23169; // 0xd1c PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0xd1d TObjFunc
	var_428_int = 523631; // 0xd1f PushI
	var_429_int = 24874; // 0xd20 PushI
	var_430_int = 24873; // 0xd21 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0xd22 TObjFunc
	return 0; // 0xd24 Return
	
Label_3365:
	var_431_int = 24874; // 0xd25 PushI
	var_432_bool = var_46_bool == var_431_int; // 0xd26 Eq
	if(var_432_bool == 0) goto Label_3388; // 0xd27 JumpB
	var_433_string = ""; // 0xd28 PushV
	var_433_string = "Neutral"; // 0xd29 MovS
	func_2802(var_47_cvector, var_433_string); // 0xd2a NEW_2
	var_434_int = 523632; // 0xd2c PushI
	SetMessage(var_434_int); // 0xd2d TObjFunc
	ClearReplies(); // 0xd2f TObjFunc
	var_435_int = 523633; // 0xd31 PushI
	var_436_int = -1; // 0xd32 PushI
	var_437_int = 24875; // 0xd33 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0xd34 TObjFunc
	var_438_int = 523630; // 0xd36 PushI
	var_439_int = -1; // 0xd37 PushI
	var_440_int = 24871; // 0xd38 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xd39 TObjFunc
	return 0; // 0xd3b Return
	
Label_3388:
	var_3_string = 1; // 0xd3c TMovB
	var_441_bool = 0; // 0xd3d PushV
	func_4951(var_441_bool); // 0xd3e NEW_2
	if(var_441_bool == 0) goto Label_3396; // 0xd40 JumpB
	lshStopAnimation(); // 0xd41 Func
	goto Label_3398; // 0xd43 Jump
	
Label_3398:
	return 0; // 0xd46 Return
	
Label_3396:
	StopAnimation(); // 0xd44 Func
	
Label_3400:
	return 0; // 0xd48 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xdeb PushI
	if(var_48_int == 0) goto Label_3603; // 0xdec JumpB
	func_4768(); // 0xdee NEW_2
	var_50_int = 31309; // 0xdf0 PushI
	var_51_bool = var_46_bool == var_50_int; // 0xdf1 Eq
	if(var_51_bool == 0) goto Label_3591; // 0xdf2 JumpB
	var_52_string = ""; // 0xdf3 PushV
	var_52_string = "Neutral"; // 0xdf4 MovS
	func_3540(var_47_cvector, var_52_string); // 0xdf5 NEW_2
	var_69_int = 529926; // 0xdf7 PushI
	SetMessage(var_69_int); // 0xdf8 TObjFunc
	ClearReplies(); // 0xdfa TObjFunc
	var_70_int = 529927; // 0xdfc PushI
	var_71_int = -1; // 0xdfd PushI
	var_72_int = 31310; // 0xdfe PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xdff TObjFunc
	var_73_int = 529928; // 0xe01 PushI
	var_74_int = -1; // 0xe02 PushI
	var_75_int = 31311; // 0xe03 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xe04 TObjFunc
	return 0; // 0xe06 Return
	
Label_3591:
	var_3_string = 1; // 0xe07 TMovB
	var_76_bool = 0; // 0xe08 PushV
	func_4951(var_76_bool); // 0xe09 NEW_2
	if(var_76_bool == 0) goto Label_3599; // 0xe0b JumpB
	lshStopAnimation(); // 0xe0c Func
	goto Label_3601; // 0xe0e Jump
	
Label_3601:
	return 0; // 0xe11 Return
	
Label_3599:
	StopAnimation(); // 0xe0f Func
	
Label_3603:
	return 0; // 0xe13 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xeb6 PushI
	if(var_48_int == 0) goto Label_3806; // 0xeb7 JumpB
	func_4768(); // 0xeb9 NEW_2
	var_50_int = 31317; // 0xebb PushI
	var_51_bool = var_46_bool == var_50_int; // 0xebc Eq
	if(var_51_bool == 0) goto Label_3794; // 0xebd JumpB
	var_52_string = ""; // 0xebe PushV
	var_52_string = "Neutral"; // 0xebf MovS
	func_3743(var_47_cvector, var_52_string); // 0xec0 NEW_2
	var_69_int = 529934; // 0xec2 PushI
	SetMessage(var_69_int); // 0xec3 TObjFunc
	ClearReplies(); // 0xec5 TObjFunc
	var_70_int = 529935; // 0xec7 PushI
	var_71_int = -1; // 0xec8 PushI
	var_72_int = 31318; // 0xec9 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xeca TObjFunc
	var_73_int = 529936; // 0xecc PushI
	var_74_int = -1; // 0xecd PushI
	var_75_int = 31319; // 0xece PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xecf TObjFunc
	return 0; // 0xed1 Return
	
Label_3794:
	var_3_string = 1; // 0xed2 TMovB
	var_76_bool = 0; // 0xed3 PushV
	func_4951(var_76_bool); // 0xed4 NEW_2
	if(var_76_bool == 0) goto Label_3802; // 0xed6 JumpB
	lshStopAnimation(); // 0xed7 Func
	goto Label_3804; // 0xed9 Jump
	
Label_3804:
	return 0; // 0xedc Return
	
Label_3802:
	StopAnimation(); // 0xeda Func
	
Label_3806:
	return 0; // 0xede Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xf81 PushI
	if(var_48_int == 0) goto Label_4009; // 0xf82 JumpB
	func_4768(); // 0xf84 NEW_2
	var_50_int = 31321; // 0xf86 PushI
	var_51_bool = var_46_bool == var_50_int; // 0xf87 Eq
	if(var_51_bool == 0) goto Label_3997; // 0xf88 JumpB
	var_52_string = ""; // 0xf89 PushV
	var_52_string = "Neutral"; // 0xf8a MovS
	func_3946(var_47_cvector, var_52_string); // 0xf8b NEW_2
	var_69_int = 529938; // 0xf8d PushI
	SetMessage(var_69_int); // 0xf8e TObjFunc
	ClearReplies(); // 0xf90 TObjFunc
	var_70_int = 529939; // 0xf92 PushI
	var_71_int = -1; // 0xf93 PushI
	var_72_int = 31322; // 0xf94 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xf95 TObjFunc
	var_73_int = 529940; // 0xf97 PushI
	var_74_int = -1; // 0xf98 PushI
	var_75_int = 31323; // 0xf99 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xf9a TObjFunc
	return 0; // 0xf9c Return
	
Label_3997:
	var_3_string = 1; // 0xf9d TMovB
	var_76_bool = 0; // 0xf9e PushV
	func_4951(var_76_bool); // 0xf9f NEW_2
	if(var_76_bool == 0) goto Label_4005; // 0xfa1 JumpB
	lshStopAnimation(); // 0xfa2 Func
	goto Label_4007; // 0xfa4 Jump
	
Label_4007:
	return 0; // 0xfa7 Return
	
Label_4005:
	StopAnimation(); // 0xfa5 Func
	
Label_4009:
	return 0; // 0xfa9 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	var_48_int = 1; // 0x104c PushI
	if(var_48_int == 0) goto Label_4212; // 0x104d JumpB
	func_4768(); // 0x104f NEW_2
	var_50_int = 42563; // 0x1051 PushI
	var_51_bool = var_46_int == var_50_int; // 0x1052 Eq
	if(var_51_bool == 0) goto Label_4200; // 0x1053 JumpB
	var_52_string = ""; // 0x1054 PushV
	var_52_string = "Neutral"; // 0x1055 MovS
	func_4149(var_47_cvector, var_52_string); // 0x1056 NEW_2
	var_69_int = 540554; // 0x1058 PushI
	SetMessage(var_69_int); // 0x1059 TObjFunc
	ClearReplies(); // 0x105b TObjFunc
	var_70_int = 540555; // 0x105d PushI
	var_71_int = -1; // 0x105e PushI
	var_72_int = 42564; // 0x105f PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x1060 TObjFunc
	var_73_int = 540794; // 0x1062 PushI
	var_74_int = -1; // 0x1063 PushI
	var_75_int = 42843; // 0x1064 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x1065 TObjFunc
	return 0; // 0x1067 Return
	
Label_4200:
	var_3_string = 1; // 0x1068 TMovB
	var_76_bool = 0; // 0x1069 PushV
	func_4951(var_76_bool); // 0x106a NEW_2
	if(var_76_bool == 0) goto Label_4208; // 0x106c JumpB
	lshStopAnimation(); // 0x106d Func
	goto Label_4210; // 0x106f Jump
	
Label_4210:
	return 0; // 0x1072 Return
	
Label_4208:
	StopAnimation(); // 0x1070 Func
	
Label_4212:
	return 0; // 0x1074 Return
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_47_int = 10; // 0x10bb PushI
	var_48_bool = var_46_int == var_47_int; // 0x10bc Eq
	if(var_48_bool == 0) goto Label_4319; // 0x10bd JumpB
	func_4278(); // 0x10bf NEW_2
	var_50_bool = 0; // 0x10c1 PushV
	var_50_bool = 0; // 0x10c2 MovB
	var_51_bool = 0; // 0x10c3 PushV
	func_4492(var_51_bool); // 0x10c4 NEW_2
	if(var_51_bool == 0) goto Label_4300; // 0x10c6 JumpB
	var_54_bool = 0; // 0x10c7 PushV
	func_4247(var_54_bool); // 0x10c8 NEW_2
	if(var_54_bool == 0) goto Label_4300; // 0x10ca JumpB
	var_50_bool = 1; // 0x10cb MovB
	
Label_4300:
	if(var_50_bool == 0) goto Label_4313; // 0x10cc JumpB
	var_71_bool = 0; // 0x10cd PushV
	func_4227(var_71_bool); // 0x10ce NEW_2
	if(var_71_bool == 0) goto Label_4312; // 0x10d0 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x10d1 PushV
	var_92_object = Obj(); // 0x10d2 PushV
	func_4775(var_92_object); // 0x10d3 NEW_2
	var_91_object = var_92_object; // 0x10d4 Mov
	func_4642(var_91_object); // 0x10d6 NEW_2
	
Label_4312:
	goto Label_4319; // 0x10d8 Jump
	
Label_4319:
	return 0; // 0x10df Return
	
Label_4313:
	func_4242(var_46_int); // 0x10da NEW_2
	func_4269(); // 0x10dd NEW_2
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_4460(); // 0x10e1 NEW_2
	func_4278(); // 0x10e4 NEW_2
	lshStopSpeech(); // 0x10e6 Func
	lshStopAnimation(); // 0x10e8 Func
	StopAsync(); // 0x10ea Func
	Hold(); // 0x10ec Func
	return 0; // 0x10ee Return
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0(); // 0x10ef Func
	func_4278(); // 0x10f2 NEW_2
	var_47_string = ""; // 0x10f4 PushV
	var_47_string = "Neutral"; // 0x10f5 MovS
	func_4722(var_47_string); // 0x10f6 NEW_2
	func_4269(); // 0x10f9 NEW_2
	return 0; // 0x10fb Return
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool; // 0x10fd Push
	if(var_47_bool == 0) goto Label_4355; // 0x10fe JumpB
	func_4269(); // 0x1100 NEW_2
	goto Label_4359; // 0x1102 Jump
	
Label_4359:
	return 0; // 0x1107 Return
	
Label_4355:
	var_53_string = ""; // 0x1103 PushV
	var_53_string = "Neutral"; // 0x1104 MovS
	func_4722(var_53_string); // 0x1105 NEW_2
}


task_18_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0; // 0x1108 PushV
	IsOverrideActive(var_48_bool); // 0x1109 Func
	var_49_bool = var_48_bool == 0; // 0x110b Not
	if(var_49_bool == 0) goto Label_4388; // 0x110c JumpB
	EventDisable(0); // 0x110d EventDisable
	func_4460(); // 0x110f NEW_2
	var_50_bool = 0; var_51_object = Obj(); // 0x1111 PushV
	var_51_object = var_46_object; // 0x1112 Mov
	func_4483(var_51_object); // 0x1113 NEW_2
	EventEnable(0); // 0x1115 EventEnable
	var_64_object = Obj(); // 0x1116 PushV
	var_64_object = var_46_object; // 0x1117 Mov
	func_5754(var_64_object); // 0x1118 NEW_2
	var_966_string = ""; // 0x111a PushV
	var_966_string = "Neutral"; // 0x111b MovS
	func_4722(var_966_string); // 0x111c NEW_2
	func_4278(); // 0x111f NEW_2
	func_4269(); // 0x1122 NEW_2
	
Label_4388:
	return 2; // 0x1124 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = 0; // 0x1075 PushV
	func_4492(var_46_bool); // 0x1076 NEW_2
	var_49_bool = var_46_bool == 0; // 0x1078 Not
	if(var_49_bool == 0) goto Label_4220; // 0x1079 JumpB
	Hold(); // 0x107a Func
	
Label_4220:
	GetDirection(var_0_object); // 0x107c Func
	
Label_4222:
	func_4389(); // 0x107f NEW_2
	goto Label_4222; // 0x1081 Jump
}


func_0(var_0_object, var_424_int, var_425_object)
{
	var_427_object = Obj(); var_428_bool = 0; var_429_int = 0; var_430_bool = 0; var_431_object = Obj(); var_432_bool = 0; var_433_int = 0; var_434_bool = 0; // 0x0 PushV
	var_0_object = var_425_object; // 0x1 TMov
	var_435_bool = 0; var_436_object = Obj(); var_437_float = 0; // 0x2 PushV
	var_436_object = var_425_object; // 0x3 Mov
	var_437_float = 130.0; // 0x4 MovF
	func_4497(var_436_object, var_437_float); // 0x5 NEW_2
	var_438_bool = var_435_bool == 0; // 0x7 Not
	if(var_438_bool == 0) goto Label_11; // 0x8 JumpB
	var_424_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_431_object); // 0xb Func
	var_439_int = 0; // 0xd PushV
	func_4945(var_439_int); // 0xe NEW_2
	SetNPCName(var_439_int); // 0x10 ObjFunc
	var_440_int = 0; // 0x12 PushV
	func_4943(var_440_int); // 0x13 NEW_2
	SetNPCDescription(var_440_int); // 0x15 ObjFunc
	var_441_string = ""; // 0x17 PushV
	func_4947(var_441_string); // 0x18 NEW_2
	SetPhoto(var_441_string); // 0x1a ObjFunc
	var_442_string = ""; // 0x1c PushV
	func_4949(var_442_string); // 0x1d NEW_2
	SetPhoto2(var_442_string); // 0x1f ObjFunc
	var_443_int = 0; // 0x21 PushV
	func_5737(var_443_int); // 0x22 NEW_2
	SetPlayerName(var_443_int); // 0x24 ObjFunc
	var_433_int = -1; // 0x26 MovI
	IsOverrideActive(var_432_bool); // 0x27 Func
	var_444_bool = var_432_bool; // 0x29 Push
	if(var_444_bool == 0) goto Label_45; // 0x2a JumpB
	var_424_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_431_object); // 0x2d Func
	var_445_bool = 0; var_446_object = Obj(); // 0x2f PushV
	var_447_object = Obj(); // 0x30 PushV
	func_4775(var_447_object); // 0x31 NEW_2
	var_446_object = var_447_object; // 0x32 Mov
	func_4584(var_445_bool, var_446_object); // 0x34 NEW_2
	var_448_object = Obj(); var_449_object = Obj(); // 0x36 PushV
	var_448_object = var_425_object; // 0x37 Mov
	var_449_object = var_431_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_450_object, var_451_object, var_452_string, var_453_bool, var_448_object, var_449_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_434_bool); // 0x3d ObjFunc
	
Label_63:
	var_494_bool = var_434_bool == 0; // 0x3f Not
	if(var_494_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_434_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_495_object = Obj(); // 0x46 PushV
	var_495_object = var_425_object; // 0x47 Mov
	func_4566(); // 0x48 NEW_2
	StopDialog(var_431_object); // 0x4a Func
	GetReturnValue(var_433_int); // 0x4c ObjFunc
	var_424_int = var_433_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_512(var_0_object, var_498_int, var_499_object)
{
	var_501_object = Obj(); var_502_bool = 0; var_503_int = 0; var_504_bool = 0; var_505_object = Obj(); var_506_bool = 0; var_507_int = 0; var_508_bool = 0; // 0x200 PushV
	var_0_object = var_499_object; // 0x201 TMov
	var_509_bool = 0; var_510_object = Obj(); var_511_float = 0; // 0x202 PushV
	var_510_object = var_499_object; // 0x203 Mov
	var_511_float = 130.0; // 0x204 MovF
	func_4497(var_510_object, var_511_float); // 0x205 NEW_2
	var_512_bool = var_509_bool == 0; // 0x207 Not
	if(var_512_bool == 0) goto Label_523; // 0x208 JumpB
	var_498_int = -2; // 0x209 MovI
	return 8; // 0x20a Return
	
Label_523:
	CreateDialog(var_505_object); // 0x20b Func
	var_513_int = 0; // 0x20d PushV
	func_4945(var_513_int); // 0x20e NEW_2
	SetNPCName(var_513_int); // 0x210 ObjFunc
	var_514_int = 0; // 0x212 PushV
	func_4943(var_514_int); // 0x213 NEW_2
	SetNPCDescription(var_514_int); // 0x215 ObjFunc
	var_515_string = ""; // 0x217 PushV
	func_4947(var_515_string); // 0x218 NEW_2
	SetPhoto(var_515_string); // 0x21a ObjFunc
	var_516_string = ""; // 0x21c PushV
	func_4949(var_516_string); // 0x21d NEW_2
	SetPhoto2(var_516_string); // 0x21f ObjFunc
	var_517_int = 0; // 0x221 PushV
	func_5737(var_517_int); // 0x222 NEW_2
	SetPlayerName(var_517_int); // 0x224 ObjFunc
	var_507_int = -1; // 0x226 MovI
	IsOverrideActive(var_506_bool); // 0x227 Func
	var_518_bool = var_506_bool; // 0x229 Push
	if(var_518_bool == 0) goto Label_557; // 0x22a JumpB
	var_498_int = -2; // 0x22b MovI
	return 8; // 0x22c Return
	
Label_557:
	DoDialog(var_505_object); // 0x22d Func
	var_519_bool = 0; var_520_object = Obj(); // 0x22f PushV
	var_521_object = Obj(); // 0x230 PushV
	func_4775(var_521_object); // 0x231 NEW_2
	var_520_object = var_521_object; // 0x232 Mov
	func_4584(var_519_bool, var_520_object); // 0x234 NEW_2
	var_522_object = Obj(); var_523_object = Obj(); // 0x236 PushV
	var_522_object = var_499_object; // 0x237 Mov
	var_523_object = var_505_object; // 0x238 Mov
	TaskCall(3); // 0x239 TaskCall
	func_593(var_524_object, var_525_object, var_526_string, var_527_bool, var_522_object, var_523_object); // 0x23a NEW_2
	TaskReturn(); // 0x23b TaskReturn
	IsDialogEnd(var_508_bool); // 0x23d ObjFunc
	
Label_575:
	var_579_bool = var_508_bool == 0; // 0x23f Not
	if(var_579_bool == 0) goto Label_582; // 0x240 JumpB
	sync(); // 0x241 Func
	IsDialogEnd(var_508_bool); // 0x243 ObjFunc
	goto Label_575; // 0x245 Jump
	
Label_582:
	var_580_object = Obj(); // 0x246 PushV
	var_580_object = var_499_object; // 0x247 Mov
	func_4566(); // 0x248 NEW_2
	StopDialog(var_505_object); // 0x24a Func
	GetReturnValue(var_507_int); // 0x24c ObjFunc
	var_498_int = var_507_int; // 0x24e Mov
	return 8; // 0x24f Return
}


func_5378(var_829_bool)
{
	var_831_int = 0; var_832_string = ""; // 0x1503 PushV
	var_832_string = "oob11Starshina1"; // 0x1504 MovS
	func_4791(var_831_int, var_832_string); // 0x1505 NEW_2
	var_833_int = 0; // 0x1507 PushI
	var_834_bool = var_831_int == var_833_int; // 0x1508 Eq
	if(var_834_bool == 0) goto Label_5388; // 0x1509 JumpB
	var_829_bool = 1; // 0x150a MovB
	return 0; // 0x150b Return
	
Label_5388:
	var_829_bool = 0; // 0x150c MovB
	return 0; // 0x150d Return
}


func_5123()
{
	var_81_string = "playsound"; // 0x1404 PushS
	var_82_string = "giveitem"; // 0x1405 PushS
	TriggerWorld(var_81_string, var_82_string); // 0x1406 Func
	return 0; // 0x1408 Return
}


func_4868(var_87_bool, var_88_string, var_89_string)
{
	var_90_object = Obj(); var_91_object = Obj(); // 0x1304 PushV
	FindActor(var_91_object, var_88_string); // 0x1305 Func
	var_92_bool = var_91_object == 0; // 0x1307 NullEq
	if(var_92_bool == 0) goto Label_4875; // 0x1308 JumpB
	var_87_bool = 0; // 0x1309 MovB
	return 2; // 0x130a Return
	
Label_4875:
	Trigger(var_91_object, var_89_string); // 0x130b Func
	var_87_bool = 1; // 0x130d MovB
	return 2; // 0x130e Return
}


func_1800(var_0_object, var_680_int, var_681_object)
{
	var_683_object = Obj(); var_684_bool = 0; var_685_int = 0; var_686_bool = 0; var_687_object = Obj(); var_688_bool = 0; var_689_int = 0; var_690_bool = 0; // 0x708 PushV
	var_0_object = var_681_object; // 0x709 TMov
	var_691_bool = 0; var_692_object = Obj(); var_693_float = 0; // 0x70a PushV
	var_692_object = var_681_object; // 0x70b Mov
	var_693_float = 130.0; // 0x70c MovF
	func_4497(var_692_object, var_693_float); // 0x70d NEW_2
	var_694_bool = var_691_bool == 0; // 0x70f Not
	if(var_694_bool == 0) goto Label_1811; // 0x710 JumpB
	var_680_int = -2; // 0x711 MovI
	return 8; // 0x712 Return
	
Label_1811:
	CreateDialog(var_687_object); // 0x713 Func
	var_695_int = 0; // 0x715 PushV
	func_4945(var_695_int); // 0x716 NEW_2
	SetNPCName(var_695_int); // 0x718 ObjFunc
	var_696_int = 0; // 0x71a PushV
	func_4943(var_696_int); // 0x71b NEW_2
	SetNPCDescription(var_696_int); // 0x71d ObjFunc
	var_697_string = ""; // 0x71f PushV
	func_4947(var_697_string); // 0x720 NEW_2
	SetPhoto(var_697_string); // 0x722 ObjFunc
	var_698_string = ""; // 0x724 PushV
	func_4949(var_698_string); // 0x725 NEW_2
	SetPhoto2(var_698_string); // 0x727 ObjFunc
	var_699_int = 0; // 0x729 PushV
	func_5737(var_699_int); // 0x72a NEW_2
	SetPlayerName(var_699_int); // 0x72c ObjFunc
	var_689_int = -1; // 0x72e MovI
	IsOverrideActive(var_688_bool); // 0x72f Func
	var_700_bool = var_688_bool; // 0x731 Push
	if(var_700_bool == 0) goto Label_1845; // 0x732 JumpB
	var_680_int = -2; // 0x733 MovI
	return 8; // 0x734 Return
	
Label_1845:
	DoDialog(var_687_object); // 0x735 Func
	var_701_bool = 0; var_702_object = Obj(); // 0x737 PushV
	var_703_object = Obj(); // 0x738 PushV
	func_4775(var_703_object); // 0x739 NEW_2
	var_702_object = var_703_object; // 0x73a Mov
	func_4584(var_701_bool, var_702_object); // 0x73c NEW_2
	var_704_object = Obj(); var_705_object = Obj(); // 0x73e PushV
	var_704_object = var_681_object; // 0x73f Mov
	var_705_object = var_687_object; // 0x740 Mov
	TaskCall(7); // 0x741 TaskCall
	func_1881(var_706_object, var_707_object, var_708_string, var_709_bool, var_704_object, var_705_object); // 0x742 NEW_2
	TaskReturn(); // 0x743 TaskReturn
	IsDialogEnd(var_690_bool); // 0x745 ObjFunc
	
Label_1863:
	var_794_bool = var_690_bool == 0; // 0x747 Not
	if(var_794_bool == 0) goto Label_1870; // 0x748 JumpB
	sync(); // 0x749 Func
	IsDialogEnd(var_690_bool); // 0x74b ObjFunc
	goto Label_1863; // 0x74d Jump
	
Label_1870:
	var_795_object = Obj(); // 0x74e PushV
	var_795_object = var_681_object; // 0x74f Mov
	func_4566(); // 0x750 NEW_2
	StopDialog(var_687_object); // 0x752 Func
	GetReturnValue(var_689_int); // 0x754 ObjFunc
	var_680_int = var_689_int; // 0x756 Mov
	return 8; // 0x757 Return
}


func_5129()
{
	var_97_int = 0; var_98_string = ""; // 0x140a PushV
	var_98_string = "B_Mission3"; // 0x140b MovS
	func_4791(var_97_int, var_98_string); // 0x140c NEW_2
	var_101_int = 0; // 0x140e PushI
	var_102_bool = var_97_int == var_101_int; // 0x140f Eq
	if(var_102_bool == 0) goto Label_5152; // 0x1410 JumpB
	var_103_string = "B_Mission3"; // 0x1411 PushS
	var_104_int = 1; // 0x1412 PushI
	SetVariable(var_103_string, var_104_int); // 0x1413 Func
	func_5473(); // 0x1416 NEW_2
	var_113_bool = 0; var_114_int = 0; // 0x1418 PushV
	var_114_int = 562; // 0x1419 MovI
	func_5670(var_113_bool, var_114_int); // 0x141a NEW_2
	var_121_bool = 0; var_122_int = 0; // 0x141c PushV
	var_122_int = 563; // 0x141d MovI
	func_5670(var_121_bool, var_122_int); // 0x141e NEW_2
	
Label_5152:
	return 0; // 0x1420 Return
}


func_5642(var_61_bool, var_62_object, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; // 0x160a PushV
	var_70_object = Obj(); // 0x160b PushV
	func_5629(var_70_object); // 0x160c NEW_2
	var_67_object = var_70_object; // 0x160d Mov
	Find(var_63_int, var_68_object); // 0x160f ObjFunc
	var_75_bool = var_68_object == 0; // 0x1611 Not
	if(var_75_bool == 0) goto Label_5657; // 0x1612 JumpB
	var_76_string = "Can't find diary parent with id: "; // 0x1613 PushS
	var_77_int = var_76_string + var_63_int; // 0x1614 Add
	Trace(var_77_int); // 0x1615 Func
	var_61_bool = 0; // 0x1617 MovB
	return 6; // 0x1618 Return
	
Label_5657:
	AddChild(var_62_object); // 0x1619 ObjFunc
	var_78_int = 7; // 0x161b PushI
	SendWorldWndMessage(var_78_int); // 0x161c Func
	GetCategory(var_69_int); // 0x161e ObjFunc
	SetDiarySection(var_69_int); // 0x1620 Func
	var_61_bool = 0; // 0x1622 MovB
	return 6; // 0x1623 Return
}


func_5390(var_887_bool)
{
	var_889_int = 0; var_890_string = ""; // 0x150f PushV
	var_890_string = "b11q01"; // 0x1510 MovS
	func_4791(var_889_int, var_890_string); // 0x1511 NEW_2
	var_891_int = 0; // 0x1513 PushI
	var_892_bool = var_889_int == var_891_int; // 0x1514 Eq
	if(var_892_bool == 0) goto Label_5400; // 0x1515 JumpB
	var_887_bool = 1; // 0x1516 MovB
	return 0; // 0x1517 Return
	
Label_5400:
	var_887_bool = 0; // 0x1518 MovB
	return 0; // 0x1519 Return
}


func_4880(var_69_float)
{
	var_70_float = 0; var_71_float = 0; // 0x1310 PushV
	GetGameTime(var_71_float); // 0x1311 Func
	var_69_float = var_71_float; // 0x1313 Mov
	return 2; // 0x1314 Return
}


func_3604(var_0_object, var_307_int, var_308_object)
{
	var_310_object = Obj(); var_311_bool = 0; var_312_int = 0; var_313_bool = 0; var_314_object = Obj(); var_315_bool = 0; var_316_int = 0; var_317_bool = 0; // 0xe14 PushV
	var_0_object = var_308_object; // 0xe15 TMov
	var_318_bool = 0; var_319_object = Obj(); var_320_float = 0; // 0xe16 PushV
	var_319_object = var_308_object; // 0xe17 Mov
	var_320_float = 130.0; // 0xe18 MovF
	func_4497(var_319_object, var_320_float); // 0xe19 NEW_2
	var_321_bool = var_318_bool == 0; // 0xe1b Not
	if(var_321_bool == 0) goto Label_3615; // 0xe1c JumpB
	var_307_int = -2; // 0xe1d MovI
	return 8; // 0xe1e Return
	
Label_3615:
	CreateDialog(var_314_object); // 0xe1f Func
	var_322_int = 0; // 0xe21 PushV
	func_4945(var_322_int); // 0xe22 NEW_2
	SetNPCName(var_322_int); // 0xe24 ObjFunc
	var_323_int = 0; // 0xe26 PushV
	func_4943(var_323_int); // 0xe27 NEW_2
	SetNPCDescription(var_323_int); // 0xe29 ObjFunc
	var_324_string = ""; // 0xe2b PushV
	func_4947(var_324_string); // 0xe2c NEW_2
	SetPhoto(var_324_string); // 0xe2e ObjFunc
	var_325_string = ""; // 0xe30 PushV
	func_4949(var_325_string); // 0xe31 NEW_2
	SetPhoto2(var_325_string); // 0xe33 ObjFunc
	var_326_int = 0; // 0xe35 PushV
	func_5737(var_326_int); // 0xe36 NEW_2
	SetPlayerName(var_326_int); // 0xe38 ObjFunc
	var_316_int = -1; // 0xe3a MovI
	IsOverrideActive(var_315_bool); // 0xe3b Func
	var_327_bool = var_315_bool; // 0xe3d Push
	if(var_327_bool == 0) goto Label_3649; // 0xe3e JumpB
	var_307_int = -2; // 0xe3f MovI
	return 8; // 0xe40 Return
	
Label_3649:
	DoDialog(var_314_object); // 0xe41 Func
	var_328_bool = 0; var_329_object = Obj(); // 0xe43 PushV
	var_330_object = Obj(); // 0xe44 PushV
	func_4775(var_330_object); // 0xe45 NEW_2
	var_329_object = var_330_object; // 0xe46 Mov
	func_4584(var_328_bool, var_329_object); // 0xe48 NEW_2
	var_331_object = Obj(); var_332_object = Obj(); // 0xe4a PushV
	var_331_object = var_308_object; // 0xe4b Mov
	var_332_object = var_314_object; // 0xe4c Mov
	TaskCall(13); // 0xe4d TaskCall
	func_3685(var_333_object, var_334_object, var_335_string, var_336_bool, var_331_object, var_332_object); // 0xe4e NEW_2
	TaskReturn(); // 0xe4f TaskReturn
	IsDialogEnd(var_317_bool); // 0xe51 ObjFunc
	
Label_3667:
	var_361_bool = var_317_bool == 0; // 0xe53 Not
	if(var_361_bool == 0) goto Label_3674; // 0xe54 JumpB
	sync(); // 0xe55 Func
	IsDialogEnd(var_317_bool); // 0xe57 ObjFunc
	goto Label_3667; // 0xe59 Jump
	
Label_3674:
	var_362_object = Obj(); // 0xe5a PushV
	var_362_object = var_308_object; // 0xe5b Mov
	func_4566(); // 0xe5c NEW_2
	StopDialog(var_314_object); // 0xe5e Func
	GetReturnValue(var_316_int); // 0xe60 ObjFunc
	var_307_int = var_316_int; // 0xe62 Mov
	return 8; // 0xe63 Return
}


func_4885(var_207_int)
{
	var_208_float = 0; var_209_float = 0; // 0x1315 PushV
	GetGameTime(var_209_float); // 0x1316 Func
	var_210_int = 1; // 0x1318 PushI
	var_211_int = 0; // 0x1319 PushV
	var_212_int = 24; // 0x131a PushI
	var_211_int = var_209_float / var_209_float; // 0x131b Div2
	var_207_int = var_210_int + var_211_int; // 0x131c Add2
	return 2; // 0x131d Return
}


func_2583(var_0_object, var_798_int, var_799_object)
{
	var_801_object = Obj(); var_802_bool = 0; var_803_int = 0; var_804_bool = 0; var_805_object = Obj(); var_806_bool = 0; var_807_int = 0; var_808_bool = 0; // 0xa17 PushV
	var_0_object = var_799_object; // 0xa18 TMov
	var_809_bool = 0; var_810_object = Obj(); var_811_float = 0; // 0xa19 PushV
	var_810_object = var_799_object; // 0xa1a Mov
	var_811_float = 130.0; // 0xa1b MovF
	func_4497(var_810_object, var_811_float); // 0xa1c NEW_2
	var_812_bool = var_809_bool == 0; // 0xa1e Not
	if(var_812_bool == 0) goto Label_2594; // 0xa1f JumpB
	var_798_int = -2; // 0xa20 MovI
	return 8; // 0xa21 Return
	
Label_2594:
	CreateDialog(var_805_object); // 0xa22 Func
	var_813_int = 0; // 0xa24 PushV
	func_4945(var_813_int); // 0xa25 NEW_2
	SetNPCName(var_813_int); // 0xa27 ObjFunc
	var_814_int = 0; // 0xa29 PushV
	func_4943(var_814_int); // 0xa2a NEW_2
	SetNPCDescription(var_814_int); // 0xa2c ObjFunc
	var_815_string = ""; // 0xa2e PushV
	func_4947(var_815_string); // 0xa2f NEW_2
	SetPhoto(var_815_string); // 0xa31 ObjFunc
	var_816_string = ""; // 0xa33 PushV
	func_4949(var_816_string); // 0xa34 NEW_2
	SetPhoto2(var_816_string); // 0xa36 ObjFunc
	var_817_int = 0; // 0xa38 PushV
	func_5737(var_817_int); // 0xa39 NEW_2
	SetPlayerName(var_817_int); // 0xa3b ObjFunc
	var_807_int = -1; // 0xa3d MovI
	IsOverrideActive(var_806_bool); // 0xa3e Func
	var_818_bool = var_806_bool; // 0xa40 Push
	if(var_818_bool == 0) goto Label_2628; // 0xa41 JumpB
	var_798_int = -2; // 0xa42 MovI
	return 8; // 0xa43 Return
	
Label_2628:
	DoDialog(var_805_object); // 0xa44 Func
	var_819_bool = 0; var_820_object = Obj(); // 0xa46 PushV
	var_821_object = Obj(); // 0xa47 PushV
	func_4775(var_821_object); // 0xa48 NEW_2
	var_820_object = var_821_object; // 0xa49 Mov
	func_4584(var_819_bool, var_820_object); // 0xa4b NEW_2
	var_822_object = Obj(); var_823_object = Obj(); // 0xa4d PushV
	var_822_object = var_799_object; // 0xa4e Mov
	var_823_object = var_805_object; // 0xa4f Mov
	TaskCall(9); // 0xa50 TaskCall
	func_2664(var_824_object, var_825_object, var_826_string, var_827_bool, var_822_object, var_823_object); // 0xa51 NEW_2
	TaskReturn(); // 0xa52 TaskReturn
	IsDialogEnd(var_808_bool); // 0xa54 ObjFunc
	
Label_2646:
	var_908_bool = var_808_bool == 0; // 0xa56 Not
	if(var_908_bool == 0) goto Label_2653; // 0xa57 JumpB
	sync(); // 0xa58 Func
	IsDialogEnd(var_808_bool); // 0xa5a ObjFunc
	goto Label_2646; // 0xa5c Jump
	
Label_2653:
	var_909_object = Obj(); // 0xa5d PushV
	var_909_object = var_799_object; // 0xa5e Mov
	func_4566(); // 0xa5f NEW_2
	StopDialog(var_805_object); // 0xa61 Func
	GetReturnValue(var_807_int); // 0xa63 ObjFunc
	var_798_int = var_807_int; // 0xa65 Mov
	return 8; // 0xa66 Return
}


func_5402(var_896_bool)
{
	var_898_int = 0; var_899_string = ""; // 0x151b PushV
	var_899_string = "b11q01KnowWhoKilled"; // 0x151c MovS
	func_4791(var_898_int, var_899_string); // 0x151d NEW_2
	var_900_int = 1; // 0x151f PushI
	var_901_bool = var_898_int == var_900_int; // 0x1520 Eq
	if(var_901_bool == 0) goto Label_5412; // 0x1521 JumpB
	var_896_bool = 1; // 0x1522 MovB
	return 0; // 0x1523 Return
	
Label_5412:
	var_896_bool = 0; // 0x1524 MovB
	return 0; // 0x1525 Return
}


func_4894(var_421_bool, var_422_int)
{
	var_423_int = 0; // 0x131f PushV
	func_4885(var_423_int); // 0x1320 NEW_2
	var_421_bool = var_423_int == var_422_int; // 0x1322 Eq2
	return 0; // 0x1323 Return
}


func_5153()
{
	var_174_int = 0; var_175_string = ""; // 0x1422 PushV
	var_175_string = "B_Mission4"; // 0x1423 MovS
	func_4791(var_174_int, var_175_string); // 0x1424 NEW_2
	var_176_int = 0; // 0x1426 PushI
	var_177_bool = var_174_int == var_176_int; // 0x1427 Eq
	if(var_177_bool == 0) goto Label_5180; // 0x1428 JumpB
	var_178_string = "B_Mission4"; // 0x1429 PushS
	var_179_int = 1; // 0x142a PushI
	SetVariable(var_178_string, var_179_int); // 0x142b Func
	func_5486(); // 0x142e NEW_2
	var_188_bool = 0; var_189_int = 0; // 0x1430 PushV
	var_189_int = 562; // 0x1431 MovI
	func_5670(var_188_bool, var_189_int); // 0x1432 NEW_2
	var_196_bool = 0; var_197_int = 0; // 0x1434 PushV
	var_197_int = 563; // 0x1435 MovI
	func_5670(var_196_bool, var_197_int); // 0x1436 NEW_2
	var_198_bool = 0; var_199_int = 0; // 0x1438 PushV
	var_199_int = 564; // 0x1439 MovI
	func_5670(var_198_bool, var_199_int); // 0x143a NEW_2
	
Label_5180:
	return 0; // 0x143c Return
}


func_4642(var_163_bool)
{
	var_165_string = ""; var_166_int = 0; var_167_bool = 0; var_168_int = 0; var_169_string = ""; var_170_string = ""; var_171_int = 0; var_172_bool = 0; var_173_int = 0; var_174_string = ""; // 0x1222 PushV
	var_170_string = "c"; // 0x1223 MovS
	var_171_int = 0; // 0x1224 MovI
	
Label_4645:
	var_175_int = 1; // 0x1225 PushI
	if(var_175_int == 0) goto Label_4658; // 0x1226 JumpB
	var_176_int = 1; // 0x1227 PushI
	var_177_int = var_171_int + var_176_int; // 0x1228 Add
	var_178_int = var_170_string + var_177_int; // 0x1229 Add
	HasProperty(var_178_int, var_172_bool); // 0x122a ObjFunc
	var_179_bool = var_172_bool == 0; // 0x122c Not
	if(var_179_bool == 0) goto Label_4655; // 0x122d JumpB
	goto Label_4658; // 0x122e Jump
	
Label_4658:
	var_180_bool = var_171_int == 0; // 0x1232 Not
	if(var_180_bool == 0) goto Label_4662; // 0x1233 JumpB
	var_163_bool = 0; // 0x1234 MovB
	return 10; // 0x1235 Return
	
Label_4662:
	var_173_int = 0; // 0x1236 MovI
	var_181_int = 1; // 0x1237 PushI
	var_182_bool = var_171_int > var_181_int; // 0x1238 GT
	if(var_182_bool == 0) goto Label_4668; // 0x1239 JumpB
	irand(var_173_int, var_171_int); // 0x123a Func
	
Label_4668:
	var_183_int = 1; // 0x123c PushI
	var_184_int = var_173_int + var_183_int; // 0x123d Add
	var_185_int = var_170_string + var_184_int; // 0x123e Add
	GetProperty(var_185_int, var_174_string); // 0x123f ObjFunc
	var_186_bool = 0; var_187_string = ""; // 0x1241 PushV
	var_187_string = var_174_string; // 0x1242 Mov
	func_4753(var_186_bool, var_187_string); // 0x1243 NEW_2
	var_163_bool = var_186_bool; // 0x1244 Mov
	return 10; // 0x1246 Return
	
Label_4655:
	var_192_int = 1; // 0x122f PushI
	var_171_int = var_171_int + var_192_int; // 0x1230 Add2
	goto Label_4645; // 0x1231 Jump
}


func_1316(var_2_object, var_624_string)
{
	var_625_bool = 0; // 0x525 PushV
	func_4951(var_625_bool); // 0x526 NEW_2
	var_626_bool = var_625_bool == 0; // 0x528 Not
	if(var_626_bool == 0) goto Label_1323; // 0x529 JumpB
	return 0; // 0x52a Return
	
Label_1323:
	var_627_bool = var_624_string == var_2_object; // 0x52b Eq
	if(var_627_bool == 0) goto Label_1326; // 0x52c JumpB
	return 0; // 0x52d Return
	
Label_1326:
	var_628_string = ""; var_629_bool = 0; // 0x52e PushV
	var_628_string = var_624_string; // 0x52f Mov
	var_630_string = ""; // 0x530 PushS
	var_631_bool = var_624_string == var_630_string; // 0x531 Eq
	if(var_631_bool == 0) goto Label_1333; // 0x532 JumpB
	var_629_bool = 0; // 0x533 MovB
	goto Label_1334; // 0x534 Jump
	
Label_1334:
	func_4738(var_628_string, var_629_bool); // 0x536 NEW_2
	var_2_object = var_624_string; // 0x538 TMov
	return 0; // 0x539 Return
	
Label_1333:
	var_629_bool = 1; // 0x535 MovB
}


func_4389()
{
	var_50_int = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_int = 0; var_61_bool = 0; // 0x1125 PushV
	WaitForAnimEnd(); // 0x1126 Func
	var_62_bool = 0; // 0x1128 PushV
	func_4492(var_62_bool); // 0x1129 NEW_2
	var_63_bool = var_62_bool == 0; // 0x112b Not
	if(var_63_bool == 0) goto Label_4398; // 0x112c JumpB
	return 12; // 0x112d Return
	
Label_4398:
	var_64_int = 0; // 0x112e PushV
	func_4926(var_64_int); // 0x112f NEW_2
	var_56_int = var_64_int; // 0x1130 Mov
	var_57_int = 0; // 0x1132 MovI
	
Label_4403:
	var_77_bool = 0; // 0x1133 PushV
	var_77_bool = 0; // 0x1134 MovB
	var_78_int = 5; // 0x1135 PushI
	var_79_bool = var_57_int < var_78_int; // 0x1136 LT
	if(var_79_bool == 0) goto Label_4413; // 0x1137 JumpB
	var_80_bool = 0; // 0x1138 PushV
	func_4492(var_80_bool); // 0x1139 NEW_2
	if(var_80_bool == 0) goto Label_4413; // 0x113b JumpB
	var_77_bool = 1; // 0x113c MovB
	
Label_4413:
	if(var_77_bool == 0) goto Label_4455; // 0x113d JumpB
	var_81_bool = var_56_int == 0; // 0x113e Not
	if(var_81_bool == 0) goto Label_4423; // 0x113f JumpB
	var_82_int = 3; // 0x1140 PushI
	Sleep(var_82_int, var_58_bool); // 0x1141 Func
	var_83_bool = var_58_bool == 0; // 0x1143 Not
	if(var_83_bool == 0) goto Label_4422; // 0x1144 JumpB
	goto Label_4455; // 0x1145 Jump
	
Label_4455:
	ResetAAS(); // 0x1167 Func
	return 12; // 0x1169 Return
	
Label_4422:
	goto Label_4444; // 0x1146 Jump
	
Label_4444:
	var_84_bool = 0; // 0x115c PushV
	func_4458(var_84_bool); // 0x115d NEW_2
	var_85_bool = var_84_bool == 0; // 0x115f Not
	if(var_85_bool == 0) goto Label_4450; // 0x1160 JumpB
	goto Label_4455; // 0x1161 Jump
	
Label_4450:
	ResetAAS(); // 0x1162 Func
	var_86_int = 1; // 0x1164 PushI
	var_57_int = var_57_int + var_86_int; // 0x1165 Add2
	goto Label_4403; // 0x1166 Jump
	
Label_4423:
	irand(var_59_int, var_56_int); // 0x1147 Func
	var_87_int = 5; // 0x1149 PushI
	irand(var_60_int, var_87_int); // 0x114a Func
	var_88_int = 0; // 0x114c PushI
	var_89_bool = var_60_int != var_88_int; // 0x114d Neq
	if(var_89_bool == 0) goto Label_4432; // 0x114e JumpB
	var_59_int = 0; // 0x114f MovI
	
Label_4432:
	var_90_string = "all"; // 0x1150 PushS
	var_91_string = ""; var_92_int = 0; // 0x1151 PushV
	var_92_int = var_59_int; // 0x1152 Mov
	func_4919(var_91_string, var_92_int); // 0x1153 NEW_2
	PlayAnimation(var_90_string, var_91_string); // 0x1155 Func
	WaitForAnimEnd(var_61_bool); // 0x1157 Func
	var_93_bool = var_61_bool == 0; // 0x1159 Not
	if(var_93_bool == 0) goto Label_4444; // 0x115a JumpB
	goto Label_4455; // 0x115b Jump
}


func_5670(var_188_bool, var_189_int)
{
	var_190_object = Obj(); var_191_object = Obj(); var_192_object = Obj(); var_193_object = Obj(); // 0x1626 PushV
	var_194_object = Obj(); // 0x1627 PushV
	func_5629(var_194_object); // 0x1628 NEW_2
	var_192_object = var_194_object; // 0x1629 Mov
	Find(var_189_int, var_193_object); // 0x162b ObjFunc
	var_195_bool = var_193_object == 0; // 0x162d Not
	if(var_195_bool == 0) goto Label_5681; // 0x162e JumpB
	var_188_bool = 0; // 0x162f MovB
	return 4; // 0x1630 Return
	
Label_5681:
	Remove(); // 0x1631 ObjFunc
	var_188_bool = 1; // 0x1633 MovB
	return 4; // 0x1634 Return
}


func_5414(var_868_bool)
{
	var_870_int = 0; var_871_string = ""; // 0x1527 PushV
	var_871_string = "b11q01"; // 0x1528 MovS
	func_4791(var_870_int, var_871_string); // 0x1529 NEW_2
	var_872_int = 2; // 0x152b PushI
	var_873_bool = var_870_int == var_872_int; // 0x152c Eq
	if(var_873_bool == 0) goto Label_5424; // 0x152d JumpB
	var_868_bool = 1; // 0x152e MovB
	return 0; // 0x152f Return
	
Label_5424:
	var_868_bool = 0; // 0x1530 MovB
	return 0; // 0x1531 Return
}


func_4900(var_65_bool, var_66_int)
{
	var_67_float = 0; var_68_int = 0; var_69_int = 0; var_70_float = 0; var_71_int = 0; var_72_int = 0; // 0x1324 PushV
	GetGameTime(var_70_float); // 0x1325 Func
	var_73_int = 1; // 0x1327 PushI
	var_74_int = 0; // 0x1328 PushV
	var_75_int = 24; // 0x1329 PushI
	var_74_int = var_70_float / var_70_float; // 0x132a Div2
	var_71_int = var_73_int + var_74_int; // 0x132b Add2
	var_76_bool = var_71_int != var_66_int; // 0x132c Neq
	if(var_76_bool == 0) goto Label_4912; // 0x132d JumpB
	var_65_bool = 0; // 0x132e MovB
	return 6; // 0x132f Return
	
Label_4912:
	var_77_int = 0; // 0x1330 PushV
	var_77_int = var_70_float; // 0x1331 Mov
	var_78_int = 24; // 0x1332 PushI
	var_72_int = var_77_int % var_78_int; // 0x1333 Mod2
	var_79_int = 7; // 0x1334 PushI
	var_65_bool = var_72_int < var_79_int; // 0x1335 LT2
	return 6; // 0x1336 Return
}


func_3888(var_0_object, var_1_object, var_2_object, var_3_string, var_389_object, var_390_object)
{
	var_0_object = var_390_object; // 0xf31 TMov
	var_1_object = var_389_object; // 0xf32 TMov
	var_3_string = 0; // 0xf33 TMovB
	var_395_int = 1; // 0xf34 PushI
	if(var_395_int == 0) goto Label_3916; // 0xf35 JumpB
	var_396_string = ""; // 0xf36 PushV
	var_396_string = "Neutral"; // 0xf37 MovS
	func_3946(var_390_object, var_396_string); // 0xf38 NEW_2
	var_404_int = 529938; // 0xf3a PushI
	SetMessage(var_404_int); // 0xf3b TObjFunc
	ClearReplies(); // 0xf3d TObjFunc
	var_405_int = 529939; // 0xf3f PushI
	var_406_int = -1; // 0xf40 PushI
	var_407_int = 31322; // 0xf41 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0xf42 TObjFunc
	var_408_int = 529940; // 0xf44 PushI
	var_409_int = -1; // 0xf45 PushI
	var_410_int = 31323; // 0xf46 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xf47 TObjFunc
	goto Label_3916; // 0xf49 Jump
	
Label_3916:
	var_411_bool = 0; // 0xf4c PushV
	func_4951(var_411_bool); // 0xf4d NEW_2
	if(var_411_bool == 0) goto Label_3931; // 0xf4f JumpB
	
Label_3920:
	lshWaitForAnimEnd(); // 0xf50 Func
	var_412_string = var_3_string; // 0xf52 PushT
	if(var_412_string == 0) goto Label_3925; // 0xf53 JumpB
	goto Label_3930; // 0xf54 Jump
	
Label_3930:
	goto Label_3945; // 0xf5a Jump
	
Label_3945:
	return 0; // 0xf69 Return
	
Label_3925:
	var_413_string = ""; // 0xf55 PushV
	var_413_string = var_2_object; // 0xf56 MovT
	func_4722(var_413_string); // 0xf57 NEW_2
	goto Label_3920; // 0xf59 Jump
	
Label_3931:
	var_414_string = "all"; // 0xf5b PushS
	var_415_string = "idle"; // 0xf5c PushS
	PlayAnimation(var_414_string, var_415_string); // 0xf5d Func
	
Label_3935:
	WaitForAnimEnd(); // 0xf5f Func
	var_416_string = var_3_string; // 0xf61 PushT
	if(var_416_string == 0) goto Label_3940; // 0xf62 JumpB
	goto Label_3945; // 0xf63 Jump
	
Label_3940:
	var_417_string = "all"; // 0xf64 PushS
	var_418_string = "idle"; // 0xf65 PushS
	PlayAnimation(var_417_string, var_418_string); // 0xf66 Func
	goto Label_3935; // 0xf68 Jump
}


func_5426(var_782_bool)
{
	var_784_int = 0; var_785_string = ""; // 0x1533 PushV
	var_785_string = "b10q01"; // 0x1534 MovS
	func_4791(var_784_int, var_785_string); // 0x1535 NEW_2
	var_786_int = 2; // 0x1537 PushI
	var_787_bool = var_784_int == var_786_int; // 0x1538 Eq
	if(var_787_bool == 0) goto Label_5436; // 0x1539 JumpB
	var_782_bool = 1; // 0x153a MovB
	return 0; // 0x153b Return
	
Label_5436:
	var_782_bool = 0; // 0x153c MovB
	return 0; // 0x153d Return
}


func_4149(var_2_object, var_941_string)
{
	var_942_bool = 0; // 0x1036 PushV
	func_4951(var_942_bool); // 0x1037 NEW_2
	var_943_bool = var_942_bool == 0; // 0x1039 Not
	if(var_943_bool == 0) goto Label_4156; // 0x103a JumpB
	return 0; // 0x103b Return
	
Label_4156:
	var_944_bool = var_941_string == var_2_object; // 0x103c Eq
	if(var_944_bool == 0) goto Label_4159; // 0x103d JumpB
	return 0; // 0x103e Return
	
Label_4159:
	var_945_string = ""; var_946_bool = 0; // 0x103f PushV
	var_945_string = var_941_string; // 0x1040 Mov
	var_947_string = ""; // 0x1041 PushS
	var_948_bool = var_941_string == var_947_string; // 0x1042 Eq
	if(var_948_bool == 0) goto Label_4166; // 0x1043 JumpB
	var_946_bool = 0; // 0x1044 MovB
	goto Label_4167; // 0x1045 Jump
	
Label_4167:
	func_4738(var_945_string, var_946_bool); // 0x1047 NEW_2
	var_2_object = var_941_string; // 0x1049 TMov
	return 0; // 0x104a Return
	
Label_4166:
	var_946_bool = 1; // 0x1046 MovB
}


func_5687(var_110_object)
{
	var_111_object = Obj(); var_112_object = Obj(); var_113_object = Obj(); var_114_object = Obj(); // 0x1637 PushV
	GetMainOutdoorScene(var_113_object); // 0x1638 Func
	var_115_bool = var_113_object == 0; // 0x163a NullEq
	if(var_115_bool == 0) goto Label_5698; // 0x163b JumpB
	var_116_string = "Can't find main outdoor scene"; // 0x163c PushS
	Trace(var_116_string); // 0x163d Func
	var_114_object = 0; // 0x163f SetNull
	var_110_object = var_114_object; // 0x1640 Mov
	return 4; // 0x1641 Return
	
Label_5698:
	GetMap(var_114_object); // 0x1642 ObjFunc
	var_110_object = var_114_object; // 0x1644 Mov
	return 4; // 0x1645 Return
}


func_4919(var_70_string, var_71_int)
{
	var_72_string = ""; var_73_string = ""; // 0x1337 PushV
	var_73_string = "idle"; // 0x1338 MovS
	var_74_int = var_71_int; // 0x1339 Push
	if(var_74_int == 0) goto Label_4924; // 0x133a JumpB
	var_73_string = var_73_string + var_71_int; // 0x133b Add2
	
Label_4924:
	var_70_string = var_73_string; // 0x133c Mov
	return 2; // 0x133d Return
}


func_5181()
{
	var_104_object = Obj(); var_105_string = ""; var_106_float = 0; // 0x143e PushV
	var_107_object = Obj(); // 0x143f PushV
	func_5687(var_107_object); // 0x1440 NEW_2
	var_104_object = var_107_object; // 0x1441 Mov
	var_105_string = "pt_map_kurgan"; // 0x1443 MovS
	var_106_float = 2; // 0x1444 MovI
	func_5704(var_104_object, var_105_string, var_106_float); // 0x1445 NEW_2
	var_127_object = Obj(); // 0x1447 PushV
	func_5687(var_127_object); // 0x1448 NEW_2
	ShowMap(var_127_object); // 0x144a ObjFunc
	return 0; // 0x144c Return
}


func_5438(var_564_bool, var_565_object)
{
	var_566_bool = 0; var_567_object = Obj(); var_568_string = ""; // 0x153f PushV
	var_567_object = var_565_object; // 0x1540 Mov
	var_568_string = "b8q01_bone"; // 0x1541 MovS
	func_4861(var_567_object, var_568_string); // 0x1542 NEW_2
	if(var_566_bool == 0) goto Label_5447; // 0x1544 JumpB
	var_564_bool = 1; // 0x1545 MovB
	return 0; // 0x1546 Return
	
Label_5447:
	var_564_bool = 0; // 0x1547 MovB
	return 0; // 0x1548 Return
}


func_4926(var_64_int)
{
	var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_bool = 0; // 0x133e PushV
	var_67_int = 0; // 0x133f MovI
	
Label_4928:
	var_69_string = "all"; // 0x1340 PushS
	var_70_string = ""; var_71_int = 0; // 0x1341 PushV
	var_71_int = var_67_int; // 0x1342 Mov
	func_4919(var_70_string, var_71_int); // 0x1343 NEW_2
	HasAnimation(var_68_bool, var_69_string, var_70_string); // 0x1345 Func
	var_75_bool = var_68_bool == 0; // 0x1347 Not
	if(var_75_bool == 0) goto Label_4938; // 0x1348 JumpB
	goto Label_4941; // 0x1349 Jump
	
Label_4941:
	var_64_int = var_67_int; // 0x134d Mov
	return 4; // 0x134e Return
	
Label_4938:
	var_76_int = 1; // 0x134a PushI
	var_67_int = var_67_int + var_76_int; // 0x134b Add2
	goto Label_4928; // 0x134c Jump
}


func_4679(var_194_bool)
{
	var_196_string = ""; var_197_int = 0; var_198_bool = 0; var_199_int = 0; var_200_string = ""; var_201_string = ""; var_202_int = 0; var_203_bool = 0; var_204_int = 0; var_205_string = ""; // 0x1247 PushV
	var_206_string = "d"; // 0x1248 PushS
	var_207_int = 0; // 0x1249 PushV
	func_4885(var_207_int); // 0x124a NEW_2
	var_213_int = var_206_string + var_207_int; // 0x124c Add
	var_214_string = "m"; // 0x124d PushS
	var_201_string = var_213_int + var_214_string; // 0x124e Add2
	var_202_int = 0; // 0x124f MovI
	
Label_4688:
	var_215_int = 1; // 0x1250 PushI
	if(var_215_int == 0) goto Label_4701; // 0x1251 JumpB
	var_216_int = 1; // 0x1252 PushI
	var_217_int = var_202_int + var_216_int; // 0x1253 Add
	var_218_int = var_201_string + var_217_int; // 0x1254 Add
	HasProperty(var_218_int, var_203_bool); // 0x1255 ObjFunc
	var_219_bool = var_203_bool == 0; // 0x1257 Not
	if(var_219_bool == 0) goto Label_4698; // 0x1258 JumpB
	goto Label_4701; // 0x1259 Jump
	
Label_4701:
	var_220_bool = var_202_int == 0; // 0x125d Not
	if(var_220_bool == 0) goto Label_4705; // 0x125e JumpB
	var_194_bool = 0; // 0x125f MovB
	return 10; // 0x1260 Return
	
Label_4705:
	var_204_int = 0; // 0x1261 MovI
	var_221_int = 1; // 0x1262 PushI
	var_222_bool = var_202_int > var_221_int; // 0x1263 GT
	if(var_222_bool == 0) goto Label_4711; // 0x1264 JumpB
	irand(var_204_int, var_202_int); // 0x1265 Func
	
Label_4711:
	var_223_int = 1; // 0x1267 PushI
	var_224_int = var_204_int + var_223_int; // 0x1268 Add
	var_225_int = var_201_string + var_224_int; // 0x1269 Add
	GetProperty(var_225_int, var_205_string); // 0x126a ObjFunc
	var_226_bool = 0; var_227_string = ""; // 0x126c PushV
	var_227_string = var_205_string; // 0x126d Mov
	func_4753(var_226_bool, var_227_string); // 0x126e NEW_2
	var_194_bool = var_226_bool; // 0x126f Mov
	return 10; // 0x1271 Return
	
Label_4698:
	var_228_int = 1; // 0x125a PushI
	var_202_int = var_202_int + var_228_int; // 0x125b Add2
	goto Label_4688; // 0x125c Jump
}


func_5704(var_107_object, var_108_string, var_109_float)
{
	var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_object = Obj(); var_120_bool = 0; var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_object = Obj(); var_124_bool = 0; // 0x1648 PushV
	GetMainOutdoorScene(var_123_object); // 0x1649 Func
	var_125_bool = var_123_object == 0; // 0x164b NullEq
	if(var_125_bool == 0) goto Label_5713; // 0x164c JumpB
	var_126_string = "Can't find main outdoor scene"; // 0x164d PushS
	Trace(var_126_string); // 0x164e Func
	return 8; // 0x1650 Return
	
Label_5713:
	GetLocator(var_108_string, var_124_bool, var_121_cvector, var_122_cvector); // 0x1651 ObjFunc
	var_127_bool = var_124_bool == 0; // 0x1653 Not
	if(var_127_bool == 0) goto Label_5723; // 0x1654 JumpB
	var_128_string = "Warning: outdoor scene locator "; // 0x1655 PushS
	var_129_int = var_128_string + var_108_string; // 0x1656 Add
	var_130_string = " doesnt exist"; // 0x1657 PushS
	var_131_int = var_129_int + var_130_string; // 0x1658 Add
	Trace(var_131_int); // 0x1659 Func
	
Label_5723:
	GetMap(var_107_object); // 0x165b ObjFunc
	var_132_bool = var_107_object == 0; // 0x165d NullEq
	if(var_132_bool == 0) goto Label_5731; // 0x165e JumpB
	var_133_string = "Can't find map"; // 0x165f PushS
	Trace(var_133_string); // 0x1660 Func
	return 8; // 0x1662 Return
	
Label_5731:
	var_134_float = GetByIndex(var_121_cvector, 0); // 0x1663 PushE
	var_135_float = GetByIndex(var_121_cvector, 2); // 0x1664 PushE
	SetMapParams(var_134_float, var_135_float, var_109_float); // 0x1665 ObjFunc
	return 8; // 0x1667 Return
}


func_5449(var_851_bool)
{
	var_853_int = 0; var_854_string = ""; // 0x154a PushV
	var_854_string = "b10q03"; // 0x154b MovS
	func_4791(var_853_int, var_854_string); // 0x154c NEW_2
	var_855_int = 1000; // 0x154e PushI
	var_856_bool = var_853_int == var_855_int; // 0x154f Eq
	if(var_856_bool == 0) goto Label_5459; // 0x1550 JumpB
	var_851_bool = 1; // 0x1551 MovB
	return 0; // 0x1552 Return
	
Label_5459:
	var_851_bool = 0; // 0x1553 MovB
	return 0; // 0x1554 Return
}


func_3401(var_0_object, var_80_int, var_81_object)
{
	var_83_object = Obj(); var_84_bool = 0; var_85_int = 0; var_86_bool = 0; var_87_object = Obj(); var_88_bool = 0; var_89_int = 0; var_90_bool = 0; // 0xd49 PushV
	var_0_object = var_81_object; // 0xd4a TMov
	var_91_bool = 0; var_92_object = Obj(); var_93_float = 0; // 0xd4b PushV
	var_92_object = var_81_object; // 0xd4c Mov
	var_93_float = 130.0; // 0xd4d MovF
	func_4497(var_92_object, var_93_float); // 0xd4e NEW_2
	var_138_bool = var_91_bool == 0; // 0xd50 Not
	if(var_138_bool == 0) goto Label_3412; // 0xd51 JumpB
	var_80_int = -2; // 0xd52 MovI
	return 8; // 0xd53 Return
	
Label_3412:
	CreateDialog(var_87_object); // 0xd54 Func
	var_139_int = 0; // 0xd56 PushV
	func_4945(var_139_int); // 0xd57 NEW_2
	SetNPCName(var_139_int); // 0xd59 ObjFunc
	var_140_int = 0; // 0xd5b PushV
	func_4943(var_140_int); // 0xd5c NEW_2
	SetNPCDescription(var_140_int); // 0xd5e ObjFunc
	var_141_string = ""; // 0xd60 PushV
	func_4947(var_141_string); // 0xd61 NEW_2
	SetPhoto(var_141_string); // 0xd63 ObjFunc
	var_142_string = ""; // 0xd65 PushV
	func_4949(var_142_string); // 0xd66 NEW_2
	SetPhoto2(var_142_string); // 0xd68 ObjFunc
	var_143_int = 0; // 0xd6a PushV
	func_5737(var_143_int); // 0xd6b NEW_2
	SetPlayerName(var_143_int); // 0xd6d ObjFunc
	var_89_int = -1; // 0xd6f MovI
	IsOverrideActive(var_88_bool); // 0xd70 Func
	var_151_bool = var_88_bool; // 0xd72 Push
	if(var_151_bool == 0) goto Label_3446; // 0xd73 JumpB
	var_80_int = -2; // 0xd74 MovI
	return 8; // 0xd75 Return
	
Label_3446:
	DoDialog(var_87_object); // 0xd76 Func
	var_152_bool = 0; var_153_object = Obj(); // 0xd78 PushV
	var_154_object = Obj(); // 0xd79 PushV
	func_4775(var_154_object); // 0xd7a NEW_2
	var_153_object = var_154_object; // 0xd7b Mov
	func_4584(var_152_bool, var_153_object); // 0xd7d NEW_2
	var_247_object = Obj(); var_248_object = Obj(); // 0xd7f PushV
	var_247_object = var_81_object; // 0xd80 Mov
	var_248_object = var_87_object; // 0xd81 Mov
	TaskCall(11); // 0xd82 TaskCall
	func_3482(var_249_object, var_250_object, var_251_string, var_252_bool, var_247_object, var_248_object); // 0xd83 NEW_2
	TaskReturn(); // 0xd84 TaskReturn
	IsDialogEnd(var_90_bool); // 0xd86 ObjFunc
	
Label_3464:
	var_296_bool = var_90_bool == 0; // 0xd88 Not
	if(var_296_bool == 0) goto Label_3471; // 0xd89 JumpB
	sync(); // 0xd8a Func
	IsDialogEnd(var_90_bool); // 0xd8c ObjFunc
	goto Label_3464; // 0xd8e Jump
	
Label_3471:
	var_297_object = Obj(); // 0xd8f PushV
	var_297_object = var_81_object; // 0xd90 Mov
	func_4566(); // 0xd91 NEW_2
	StopDialog(var_87_object); // 0xd93 Func
	GetReturnValue(var_89_int); // 0xd95 ObjFunc
	var_80_int = var_89_int; // 0xd97 Mov
	return 8; // 0xd98 Return
}


func_5197()
{
	var_125_int = 0; var_126_string = ""; // 0x144e PushV
	var_126_string = "map_chertez_state"; // 0x144f MovS
	func_4791(var_125_int, var_126_string); // 0x1450 NEW_2
	var_127_int = 3; // 0x1452 PushI
	var_128_bool = var_125_int <= var_127_int; // 0x1453 LE
	if(var_128_bool == 0) goto Label_5213; // 0x1454 JumpB
	var_129_string = "map_chertez_state"; // 0x1455 PushS
	var_130_int = 3; // 0x1456 PushI
	SetVariable(var_129_string, var_130_int); // 0x1457 Func
	var_131_string = "map_chertez_force"; // 0x1459 PushS
	var_132_int = 1; // 0x145a PushI
	SetVariable(var_131_string, var_132_int); // 0x145b Func
	
Label_5213:
	return 0; // 0x145d Return
}


func_4943(var_140_int)
{
	var_140_int = 515553; // 0x134f MovI
	return 0; // 0x1350 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_448_object, var_449_object)
{
	var_0_object = var_449_object; // 0x52 TMov
	var_1_object = var_448_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_454_int = 1; // 0x55 PushI
	if(var_454_int == 0) goto Label_134; // 0x56 JumpB
	var_455_bool = 0; var_456_object = Obj(); // 0x57 PushV
	var_456_object = var_1_object; // 0x58 MovT
	func_5461(var_456_object); // 0x59 NEW_2
	if(var_455_bool == 0) goto Label_112; // 0x5b JumpB
	var_463_string = ""; // 0x5c PushV
	var_463_string = "Oracle"; // 0x5d MovS
	func_164(var_449_object, var_463_string); // 0x5e NEW_2
	var_471_int = 521017; // 0x60 PushI
	SetMessage(var_471_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_472_int = 528565; // 0x65 PushI
	var_473_int = 29962; // 0x66 PushI
	var_474_int = 29961; // 0x67 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x68 TObjFunc
	var_475_int = 528573; // 0x6a PushI
	var_476_int = 29966; // 0x6b PushI
	var_477_int = 29969; // 0x6c PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x6d TObjFunc
	goto Label_134; // 0x6f Jump
	
Label_134:
	var_478_bool = 0; // 0x86 PushV
	func_4951(var_478_bool); // 0x87 NEW_2
	if(var_478_bool == 0) goto Label_149; // 0x89 JumpB
	
Label_138:
	lshWaitForAnimEnd(); // 0x8a Func
	var_479_string = var_3_string; // 0x8c PushT
	if(var_479_string == 0) goto Label_143; // 0x8d JumpB
	goto Label_148; // 0x8e Jump
	
Label_148:
	goto Label_163; // 0x94 Jump
	
Label_163:
	return 0; // 0xa3 Return
	
Label_143:
	var_480_string = ""; // 0x8f PushV
	var_480_string = var_2_object; // 0x90 MovT
	func_4722(var_480_string); // 0x91 NEW_2
	goto Label_138; // 0x93 Jump
	
Label_149:
	var_481_string = "all"; // 0x95 PushS
	var_482_string = "idle"; // 0x96 PushS
	PlayAnimation(var_481_string, var_482_string); // 0x97 Func
	
Label_153:
	WaitForAnimEnd(); // 0x99 Func
	var_483_string = var_3_string; // 0x9b PushT
	if(var_483_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_158:
	var_484_string = "all"; // 0x9e PushS
	var_485_string = "idle"; // 0x9f PushS
	PlayAnimation(var_484_string, var_485_string); // 0xa0 Func
	goto Label_153; // 0xa2 Jump
	
Label_112:
	var_486_string = ""; // 0x70 PushV
	var_486_string = "Neutral"; // 0x71 MovS
	func_164(var_449_object, var_486_string); // 0x72 NEW_2
	var_487_int = 521041; // 0x74 PushI
	SetMessage(var_487_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_488_int = 528593; // 0x79 PushI
	var_489_int = 29994; // 0x7a PushI
	var_490_int = 29993; // 0x7b PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x7c TObjFunc
	var_491_int = 521042; // 0x7e PushI
	var_492_int = -1; // 0x7f PushI
	var_493_int = 22238; // 0x80 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0x81 TObjFunc
	goto Label_134; // 0x83 Jump
}


func_593(var_0_object, var_1_object, var_2_object, var_3_string, var_522_object, var_523_object)
{
	var_0_object = var_523_object; // 0x252 TMov
	var_1_object = var_522_object; // 0x253 TMov
	var_3_string = 0; // 0x254 TMovB
	var_528_int = 1; // 0x255 PushI
	if(var_528_int == 0) goto Label_655; // 0x256 JumpB
	var_529_bool = 0; var_530_object = Obj(); // 0x257 PushV
	var_530_object = var_1_object; // 0x258 MovT
	func_5259(var_530_object); // 0x259 NEW_2
	if(var_529_bool == 0) goto Label_619; // 0x25b JumpB
	var_535_string = ""; // 0x25c PushV
	var_535_string = "Refusal"; // 0x25d MovS
	func_685(var_523_object, var_535_string); // 0x25e NEW_2
	var_543_int = 521418; // 0x260 PushI
	SetMessage(var_543_int); // 0x261 TObjFunc
	ClearReplies(); // 0x263 TObjFunc
	var_544_int = 521419; // 0x265 PushI
	var_545_int = 24983; // 0x266 PushI
	var_546_int = 22597; // 0x267 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x268 TObjFunc
	goto Label_655; // 0x26a Jump
	
Label_655:
	var_547_bool = 0; // 0x28f PushV
	func_4951(var_547_bool); // 0x290 NEW_2
	if(var_547_bool == 0) goto Label_670; // 0x292 JumpB
	
Label_659:
	lshWaitForAnimEnd(); // 0x293 Func
	var_548_string = var_3_string; // 0x295 PushT
	if(var_548_string == 0) goto Label_664; // 0x296 JumpB
	goto Label_669; // 0x297 Jump
	
Label_669:
	goto Label_684; // 0x29d Jump
	
Label_684:
	return 0; // 0x2ac Return
	
Label_664:
	var_549_string = ""; // 0x298 PushV
	var_549_string = var_2_object; // 0x299 MovT
	func_4722(var_549_string); // 0x29a NEW_2
	goto Label_659; // 0x29c Jump
	
Label_670:
	var_550_string = "all"; // 0x29e PushS
	var_551_string = "idle"; // 0x29f PushS
	PlayAnimation(var_550_string, var_551_string); // 0x2a0 Func
	
Label_674:
	WaitForAnimEnd(); // 0x2a2 Func
	var_552_string = var_3_string; // 0x2a4 PushT
	if(var_552_string == 0) goto Label_679; // 0x2a5 JumpB
	goto Label_684; // 0x2a6 Jump
	
Label_679:
	var_553_string = "all"; // 0x2a7 PushS
	var_554_string = "idle"; // 0x2a8 PushS
	PlayAnimation(var_553_string, var_554_string); // 0x2a9 Func
	goto Label_674; // 0x2ab Jump
	
Label_619:
	var_555_string = ""; // 0x26b PushV
	var_555_string = "Neutral"; // 0x26c MovS
	func_685(var_523_object, var_555_string); // 0x26d NEW_2
	var_556_int = 521423; // 0x26f PushI
	SetMessage(var_556_int); // 0x270 TObjFunc
	ClearReplies(); // 0x272 TObjFunc
	var_557_bool = 0; // 0x274 PushV
	var_557_bool = 0; // 0x275 MovB
	var_558_bool = 0; var_559_object = Obj(); // 0x276 PushV
	var_559_object = var_1_object; // 0x277 MovT
	func_5247(var_559_object); // 0x278 NEW_2
	if(var_558_bool == 0) goto Label_641; // 0x27a JumpB
	var_564_bool = 0; var_565_object = Obj(); // 0x27b PushV
	var_565_object = var_1_object; // 0x27c MovT
	func_5438(var_564_bool, var_565_object); // 0x27d NEW_2
	if(var_564_bool == 0) goto Label_641; // 0x27f JumpB
	var_557_bool = 1; // 0x280 MovB
	
Label_641:
	if(var_557_bool == 0) goto Label_647; // 0x281 JumpB
	var_573_int = 521425; // 0x282 PushI
	var_574_int = 22604; // 0x283 PushI
	var_575_int = 22603; // 0x284 PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x285 TObjFunc
	
Label_647:
	var_576_int = 521424; // 0x287 PushI
	var_577_int = -1; // 0x288 PushI
	var_578_int = 22602; // 0x289 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x28a TObjFunc
	goto Label_655; // 0x28c Jump
}


func_4945(var_139_int)
{
	var_139_int = 502878; // 0x1351 MovI
	return 0; // 0x1352 Return
}


func_4947(var_141_string)
{
	var_141_string = "ui/NPC_Starshina.png"; // 0x1353 MovS
	return 0; // 0x1354 Return
}


func_4949(var_142_string)
{
	var_142_string = "ui/NPC_Starshina_b.png"; // 0x1355 MovS
	return 0; // 0x1356 Return
}


func_5461(var_455_bool)
{
	var_457_int = 0; var_458_string = ""; // 0x1556 PushV
	var_458_string = "b7q01"; // 0x1557 MovS
	func_4791(var_457_int, var_458_string); // 0x1558 NEW_2
	var_461_int = 7; // 0x155a PushI
	var_462_bool = var_457_int == var_461_int; // 0x155b Eq
	if(var_462_bool == 0) goto Label_5471; // 0x155c JumpB
	var_455_bool = 1; // 0x155d MovB
	return 0; // 0x155e Return
	
Label_5471:
	var_455_bool = 0; // 0x155f MovB
	return 0; // 0x1560 Return
}


func_4951(var_134_bool)
{
	var_134_bool = 1; // 0x1357 MovB
	return 0; // 0x1358 Return
}


func_4953()
{
	var_96_string = ""; var_97_bool = 0; // 0x135a PushV
	var_96_string = "icot_eva_door"; // 0x135b MovS
	var_97_bool = 1; // 0x135c MovB
	func_4796(var_96_string, var_97_bool); // 0x135d NEW_2
	return 0; // 0x135f Return
}


func_1881(var_0_object, var_1_object, var_2_object, var_3_string, var_704_object, var_705_object)
{
	var_0_object = var_705_object; // 0x75a TMov
	var_1_object = var_704_object; // 0x75b TMov
	var_3_string = 0; // 0x75c TMovB
	var_710_int = 1; // 0x75d PushI
	if(var_710_int == 0) goto Label_1987; // 0x75e JumpB
	var_711_bool = 0; // 0x75f PushV
	var_711_bool = 0; // 0x760 MovB
	var_712_bool = 0; var_713_object = Obj(); // 0x761 PushV
	var_713_object = var_1_object; // 0x762 MovT
	func_5319(var_713_object); // 0x763 NEW_2
	if(var_712_bool == 0) goto Label_1900; // 0x765 JumpB
	var_718_bool = 0; var_719_object = Obj(); // 0x766 PushV
	var_719_object = var_1_object; // 0x767 MovT
	func_5366(var_719_object); // 0x768 NEW_2
	if(var_718_bool == 0) goto Label_1900; // 0x76a JumpB
	var_711_bool = 1; // 0x76b MovB
	
Label_1900:
	if(var_711_bool == 0) goto Label_1931; // 0x76c JumpB
	var_724_object = Obj(); var_725_object = Obj(); // 0x76d PushV
	var_724_object = var_1_object; // 0x76e MovT
	var_725_object = var_0_object; // 0x76f MovT
	func_5047(); // 0x770 NEW_2
	var_728_string = ""; // 0x772 PushV
	var_728_string = "Smile"; // 0x773 MovS
	func_2017(var_705_object, var_728_string); // 0x774 NEW_2
	var_736_int = 521870; // 0x776 PushI
	SetMessage(var_736_int); // 0x777 TObjFunc
	ClearReplies(); // 0x779 TObjFunc
	var_737_int = 522575; // 0x77b PushI
	var_738_int = 23755; // 0x77c PushI
	var_739_int = 23754; // 0x77d PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0x77e TObjFunc
	var_740_int = 522581; // 0x780 PushI
	var_741_int = 23755; // 0x781 PushI
	var_742_int = 23760; // 0x782 PushI
	AddReply(var_740_int, var_741_int, var_742_int); // 0x783 TObjFunc
	var_743_int = 522586; // 0x785 PushI
	var_744_int = 23047; // 0x786 PushI
	var_745_int = 23767; // 0x787 PushI
	AddReply(var_743_int, var_744_int, var_745_int); // 0x788 TObjFunc
	goto Label_1987; // 0x78a Jump
	
Label_1987:
	var_746_bool = 0; // 0x7c3 PushV
	func_4951(var_746_bool); // 0x7c4 NEW_2
	if(var_746_bool == 0) goto Label_2002; // 0x7c6 JumpB
	
Label_1991:
	lshWaitForAnimEnd(); // 0x7c7 Func
	var_747_string = var_3_string; // 0x7c9 PushT
	if(var_747_string == 0) goto Label_1996; // 0x7ca JumpB
	goto Label_2001; // 0x7cb Jump
	
Label_2001:
	goto Label_2016; // 0x7d1 Jump
	
Label_2016:
	return 0; // 0x7e0 Return
	
Label_1996:
	var_748_string = ""; // 0x7cc PushV
	var_748_string = var_2_object; // 0x7cd MovT
	func_4722(var_748_string); // 0x7ce NEW_2
	goto Label_1991; // 0x7d0 Jump
	
Label_2002:
	var_749_string = "all"; // 0x7d2 PushS
	var_750_string = "idle"; // 0x7d3 PushS
	PlayAnimation(var_749_string, var_750_string); // 0x7d4 Func
	
Label_2006:
	WaitForAnimEnd(); // 0x7d6 Func
	var_751_string = var_3_string; // 0x7d8 PushT
	if(var_751_string == 0) goto Label_2011; // 0x7d9 JumpB
	goto Label_2016; // 0x7da Jump
	
Label_2011:
	var_752_string = "all"; // 0x7db PushS
	var_753_string = "idle"; // 0x7dc PushS
	PlayAnimation(var_752_string, var_753_string); // 0x7dd Func
	goto Label_2006; // 0x7df Jump
	
Label_1931:
	var_754_string = ""; // 0x78b PushV
	var_754_string = "Neutral"; // 0x78c MovS
	func_2017(var_705_object, var_754_string); // 0x78d NEW_2
	var_755_int = 521873; // 0x78f PushI
	SetMessage(var_755_int); // 0x790 TObjFunc
	ClearReplies(); // 0x792 TObjFunc
	var_756_bool = 0; var_757_object = Obj(); // 0x794 PushV
	var_757_object = var_1_object; // 0x795 MovT
	func_5366(var_757_object); // 0x796 NEW_2
	if(var_756_bool == 0) goto Label_1950; // 0x798 JumpB
	var_758_int = 521874; // 0x799 PushI
	var_759_int = 23049; // 0x79a PushI
	var_760_int = 23046; // 0x79b PushI
	AddReply(var_758_int, var_759_int, var_760_int); // 0x79c TObjFunc
	
Label_1950:
	var_761_bool = 0; var_762_object = Obj(); // 0x79e PushV
	var_762_object = var_1_object; // 0x79f MovT
	func_5343(var_762_object); // 0x7a0 NEW_2
	if(var_761_bool == 0) goto Label_1960; // 0x7a2 JumpB
	var_772_int = 521886; // 0x7a3 PushI
	var_773_int = 23059; // 0x7a4 PushI
	var_774_int = 23058; // 0x7a5 PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0x7a6 TObjFunc
	
Label_1960:
	var_775_bool = 0; // 0x7a8 PushV
	var_775_bool = 0; // 0x7a9 MovB
	var_776_bool = 0; var_777_object = Obj(); // 0x7aa PushV
	var_777_object = var_1_object; // 0x7ab MovT
	func_5331(var_777_object); // 0x7ac NEW_2
	if(var_776_bool == 0) goto Label_1973; // 0x7ae JumpB
	var_782_bool = 0; var_783_object = Obj(); // 0x7af PushV
	var_783_object = var_1_object; // 0x7b0 MovT
	func_5426(var_783_object); // 0x7b1 NEW_2
	if(var_782_bool == 0) goto Label_1973; // 0x7b3 JumpB
	var_775_bool = 1; // 0x7b4 MovB
	
Label_1973:
	if(var_775_bool == 0) goto Label_1979; // 0x7b5 JumpB
	var_788_int = 521883; // 0x7b6 PushI
	var_789_int = 23744; // 0x7b7 PushI
	var_790_int = 23055; // 0x7b8 PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0x7b9 TObjFunc
	
Label_1979:
	var_791_int = 521879; // 0x7bb PushI
	var_792_int = -1; // 0x7bc PushI
	var_793_int = 23051; // 0x7bd PushI
	AddReply(var_791_int, var_792_int, var_793_int); // 0x7be TObjFunc
	goto Label_1987; // 0x7c0 Jump
}


func_5214()
{
	var_95_int = 0; var_96_string = ""; // 0x145f PushV
	var_96_string = "map_chertez_state"; // 0x1460 MovS
	func_4791(var_95_int, var_96_string); // 0x1461 NEW_2
	var_99_int = 6; // 0x1463 PushI
	var_100_bool = var_95_int <= var_99_int; // 0x1464 LE
	if(var_100_bool == 0) goto Label_5230; // 0x1465 JumpB
	var_101_string = "map_chertez_state"; // 0x1466 PushS
	var_102_int = 6; // 0x1467 PushI
	SetVariable(var_101_string, var_102_int); // 0x1468 Func
	var_103_string = "map_chertez_force"; // 0x146a PushS
	var_104_int = 1; // 0x146b PushI
	SetVariable(var_103_string, var_104_int); // 0x146c Func
	
Label_5230:
	return 0; // 0x146e Return
}


func_4960()
{
	var_54_string = "b7q01"; // 0x1361 PushS
	var_55_int = 8; // 0x1362 PushI
	SetVariable(var_54_string, var_55_int); // 0x1363 Func
	func_5551(); // 0x1366 NEW_2
	return 0; // 0x1368 Return
}


func_5473()
{
	var_105_object = Obj(); var_106_object = Obj(); // 0x1561 PushV
	var_107_int = 564; // 0x1562 PushI
	var_108_int = 0; // 0x1563 PushI
	var_109_int = 530578; // 0x1564 PushI
	CreateDiaryEntry(var_106_object, var_107_int, var_108_int, var_109_int); // 0x1565 Func
	var_110_bool = 0; var_111_object = Obj(); var_112_int = 0; // 0x1567 PushV
	var_111_object = var_106_object; // 0x1568 Mov
	var_112_int = -1; // 0x1569 MovI
	func_5642(var_110_bool, var_111_object, var_112_int); // 0x156a NEW_2
	return 2; // 0x156c Return
}


func_3685(var_0_object, var_1_object, var_2_object, var_3_string, var_331_object, var_332_object)
{
	var_0_object = var_332_object; // 0xe66 TMov
	var_1_object = var_331_object; // 0xe67 TMov
	var_3_string = 0; // 0xe68 TMovB
	var_337_int = 1; // 0xe69 PushI
	if(var_337_int == 0) goto Label_3713; // 0xe6a JumpB
	var_338_string = ""; // 0xe6b PushV
	var_338_string = "Neutral"; // 0xe6c MovS
	func_3743(var_332_object, var_338_string); // 0xe6d NEW_2
	var_346_int = 529934; // 0xe6f PushI
	SetMessage(var_346_int); // 0xe70 TObjFunc
	ClearReplies(); // 0xe72 TObjFunc
	var_347_int = 529935; // 0xe74 PushI
	var_348_int = -1; // 0xe75 PushI
	var_349_int = 31318; // 0xe76 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xe77 TObjFunc
	var_350_int = 529936; // 0xe79 PushI
	var_351_int = -1; // 0xe7a PushI
	var_352_int = 31319; // 0xe7b PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xe7c TObjFunc
	goto Label_3713; // 0xe7e Jump
	
Label_3713:
	var_353_bool = 0; // 0xe81 PushV
	func_4951(var_353_bool); // 0xe82 NEW_2
	if(var_353_bool == 0) goto Label_3728; // 0xe84 JumpB
	
Label_3717:
	lshWaitForAnimEnd(); // 0xe85 Func
	var_354_string = var_3_string; // 0xe87 PushT
	if(var_354_string == 0) goto Label_3722; // 0xe88 JumpB
	goto Label_3727; // 0xe89 Jump
	
Label_3727:
	goto Label_3742; // 0xe8f Jump
	
Label_3742:
	return 0; // 0xe9e Return
	
Label_3722:
	var_355_string = ""; // 0xe8a PushV
	var_355_string = var_2_object; // 0xe8b MovT
	func_4722(var_355_string); // 0xe8c NEW_2
	goto Label_3717; // 0xe8e Jump
	
Label_3728:
	var_356_string = "all"; // 0xe90 PushS
	var_357_string = "idle"; // 0xe91 PushS
	PlayAnimation(var_356_string, var_357_string); // 0xe92 Func
	
Label_3732:
	WaitForAnimEnd(); // 0xe94 Func
	var_358_string = var_3_string; // 0xe96 PushT
	if(var_358_string == 0) goto Label_3737; // 0xe97 JumpB
	goto Label_3742; // 0xe98 Jump
	
Label_3737:
	var_359_string = "all"; // 0xe99 PushS
	var_360_string = "idle"; // 0xe9a PushS
	PlayAnimation(var_359_string, var_360_string); // 0xe9b Func
	goto Label_3732; // 0xe9d Jump
}


func_1127(var_0_object, var_583_int, var_584_object)
{
	var_586_object = Obj(); var_587_bool = 0; var_588_int = 0; var_589_bool = 0; var_590_object = Obj(); var_591_bool = 0; var_592_int = 0; var_593_bool = 0; // 0x467 PushV
	var_0_object = var_584_object; // 0x468 TMov
	var_594_bool = 0; var_595_object = Obj(); var_596_float = 0; // 0x469 PushV
	var_595_object = var_584_object; // 0x46a Mov
	var_596_float = 130.0; // 0x46b MovF
	func_4497(var_595_object, var_596_float); // 0x46c NEW_2
	var_597_bool = var_594_bool == 0; // 0x46e Not
	if(var_597_bool == 0) goto Label_1138; // 0x46f JumpB
	var_583_int = -2; // 0x470 MovI
	return 8; // 0x471 Return
	
Label_1138:
	CreateDialog(var_590_object); // 0x472 Func
	var_598_int = 0; // 0x474 PushV
	func_4945(var_598_int); // 0x475 NEW_2
	SetNPCName(var_598_int); // 0x477 ObjFunc
	var_599_int = 0; // 0x479 PushV
	func_4943(var_599_int); // 0x47a NEW_2
	SetNPCDescription(var_599_int); // 0x47c ObjFunc
	var_600_string = ""; // 0x47e PushV
	func_4947(var_600_string); // 0x47f NEW_2
	SetPhoto(var_600_string); // 0x481 ObjFunc
	var_601_string = ""; // 0x483 PushV
	func_4949(var_601_string); // 0x484 NEW_2
	SetPhoto2(var_601_string); // 0x486 ObjFunc
	var_602_int = 0; // 0x488 PushV
	func_5737(var_602_int); // 0x489 NEW_2
	SetPlayerName(var_602_int); // 0x48b ObjFunc
	var_592_int = -1; // 0x48d MovI
	IsOverrideActive(var_591_bool); // 0x48e Func
	var_603_bool = var_591_bool; // 0x490 Push
	if(var_603_bool == 0) goto Label_1172; // 0x491 JumpB
	var_583_int = -2; // 0x492 MovI
	return 8; // 0x493 Return
	
Label_1172:
	DoDialog(var_590_object); // 0x494 Func
	var_604_bool = 0; var_605_object = Obj(); // 0x496 PushV
	var_606_object = Obj(); // 0x497 PushV
	func_4775(var_606_object); // 0x498 NEW_2
	var_605_object = var_606_object; // 0x499 Mov
	func_4584(var_604_bool, var_605_object); // 0x49b NEW_2
	var_607_object = Obj(); var_608_object = Obj(); // 0x49d PushV
	var_607_object = var_584_object; // 0x49e Mov
	var_608_object = var_590_object; // 0x49f Mov
	TaskCall(5); // 0x4a0 TaskCall
	func_1208(var_609_object, var_610_object, var_611_string, var_612_bool, var_607_object, var_608_object); // 0x4a1 NEW_2
	TaskReturn(); // 0x4a2 TaskReturn
	IsDialogEnd(var_593_bool); // 0x4a4 ObjFunc
	
Label_1190:
	var_676_bool = var_593_bool == 0; // 0x4a6 Not
	if(var_676_bool == 0) goto Label_1197; // 0x4a7 JumpB
	sync(); // 0x4a8 Func
	IsDialogEnd(var_593_bool); // 0x4aa ObjFunc
	goto Label_1190; // 0x4ac Jump
	
Label_1197:
	var_677_object = Obj(); // 0x4ad PushV
	var_677_object = var_584_object; // 0x4ae Mov
	func_4566(); // 0x4af NEW_2
	StopDialog(var_590_object); // 0x4b1 Func
	GetReturnValue(var_592_int); // 0x4b3 ObjFunc
	var_583_int = var_592_int; // 0x4b5 Mov
	return 8; // 0x4b6 Return
}


func_2664(var_0_object, var_1_object, var_2_object, var_3_string, var_822_object, var_823_object)
{
	var_0_object = var_823_object; // 0xa69 TMov
	var_1_object = var_822_object; // 0xa6a TMov
	var_3_string = 0; // 0xa6b TMovB
	var_828_int = 1; // 0xa6c PushI
	if(var_828_int == 0) goto Label_2772; // 0xa6d JumpB
	var_829_bool = 0; var_830_object = Obj(); // 0xa6e PushV
	var_830_object = var_1_object; // 0xa6f MovT
	func_5378(var_830_object); // 0xa70 NEW_2
	if(var_829_bool == 0) goto Label_2705; // 0xa72 JumpB
	var_835_object = Obj(); var_836_object = Obj(); // 0xa73 PushV
	var_835_object = var_1_object; // 0xa74 MovT
	var_836_object = var_0_object; // 0xa75 MovT
	func_5093(); // 0xa76 NEW_2
	var_839_string = ""; // 0xa78 PushV
	var_839_string = "Neutral"; // 0xa79 MovS
	func_2802(var_823_object, var_839_string); // 0xa7a NEW_2
	var_847_int = 521993; // 0xa7c PushI
	SetMessage(var_847_int); // 0xa7d TObjFunc
	ClearReplies(); // 0xa7f TObjFunc
	var_848_int = 521994; // 0xa81 PushI
	var_849_int = 23168; // 0xa82 PushI
	var_850_int = 23164; // 0xa83 PushI
	AddReply(var_848_int, var_849_int, var_850_int); // 0xa84 TObjFunc
	var_851_bool = 0; var_852_object = Obj(); // 0xa86 PushV
	var_852_object = var_1_object; // 0xa87 MovT
	func_5449(var_852_object); // 0xa88 NEW_2
	if(var_851_bool == 0) goto Label_2704; // 0xa8a JumpB
	var_857_int = 521996; // 0xa8b PushI
	var_858_int = 23168; // 0xa8c PushI
	var_859_int = 23166; // 0xa8d PushI
	AddReply(var_857_int, var_858_int, var_859_int); // 0xa8e TObjFunc
	
Label_2704:
	goto Label_2772; // 0xa90 Jump
	
Label_2772:
	var_860_bool = 0; // 0xad4 PushV
	func_4951(var_860_bool); // 0xad5 NEW_2
	if(var_860_bool == 0) goto Label_2787; // 0xad7 JumpB
	
Label_2776:
	lshWaitForAnimEnd(); // 0xad8 Func
	var_861_string = var_3_string; // 0xada PushT
	if(var_861_string == 0) goto Label_2781; // 0xadb JumpB
	goto Label_2786; // 0xadc Jump
	
Label_2786:
	goto Label_2801; // 0xae2 Jump
	
Label_2801:
	return 0; // 0xaf1 Return
	
Label_2781:
	var_862_string = ""; // 0xadd PushV
	var_862_string = var_2_object; // 0xade MovT
	func_4722(var_862_string); // 0xadf NEW_2
	goto Label_2776; // 0xae1 Jump
	
Label_2787:
	var_863_string = "all"; // 0xae3 PushS
	var_864_string = "idle"; // 0xae4 PushS
	PlayAnimation(var_863_string, var_864_string); // 0xae5 Func
	
Label_2791:
	WaitForAnimEnd(); // 0xae7 Func
	var_865_string = var_3_string; // 0xae9 PushT
	if(var_865_string == 0) goto Label_2796; // 0xaea JumpB
	goto Label_2801; // 0xaeb Jump
	
Label_2796:
	var_866_string = "all"; // 0xaec PushS
	var_867_string = "idle"; // 0xaed PushS
	PlayAnimation(var_866_string, var_867_string); // 0xaee Func
	goto Label_2791; // 0xaf0 Jump
	
Label_2705:
	var_868_bool = 0; var_869_object = Obj(); // 0xa91 PushV
	var_869_object = var_1_object; // 0xa92 MovT
	func_5414(var_869_object); // 0xa93 NEW_2
	if(var_868_bool == 0) goto Label_2735; // 0xa95 JumpB
	var_874_string = ""; // 0xa96 PushV
	var_874_string = "Smile"; // 0xa97 MovS
	func_2802(var_823_object, var_874_string); // 0xa98 NEW_2
	var_875_int = 522051; // 0xa9a PushI
	SetMessage(var_875_int); // 0xa9b TObjFunc
	ClearReplies(); // 0xa9d TObjFunc
	var_876_int = 523621; // 0xa9f PushI
	var_877_int = 24861; // 0xaa0 PushI
	var_878_int = 24860; // 0xaa1 PushI
	AddReply(var_876_int, var_877_int, var_878_int); // 0xaa2 TObjFunc
	var_879_int = 523612; // 0xaa4 PushI
	var_880_int = 24851; // 0xaa5 PushI
	var_881_int = 24849; // 0xaa6 PushI
	AddReply(var_879_int, var_880_int, var_881_int); // 0xaa7 TObjFunc
	var_882_int = 523613; // 0xaa9 PushI
	var_883_int = 24851; // 0xaaa PushI
	var_884_int = 24850; // 0xaab PushI
	AddReply(var_882_int, var_883_int, var_884_int); // 0xaac TObjFunc
	goto Label_2772; // 0xaae Jump
	
Label_2735:
	var_885_string = ""; // 0xaaf PushV
	var_885_string = "Neutral"; // 0xab0 MovS
	func_2802(var_823_object, var_885_string); // 0xab1 NEW_2
	var_886_int = 521997; // 0xab3 PushI
	SetMessage(var_886_int); // 0xab4 TObjFunc
	ClearReplies(); // 0xab6 TObjFunc
	var_887_bool = 0; var_888_object = Obj(); // 0xab8 PushV
	var_888_object = var_1_object; // 0xab9 MovT
	func_5390(var_888_object); // 0xaba NEW_2
	if(var_887_bool == 0) goto Label_2754; // 0xabc JumpB
	var_893_int = 522000; // 0xabd PushI
	var_894_int = 24859; // 0xabe PushI
	var_895_int = 23170; // 0xabf PushI
	AddReply(var_893_int, var_894_int, var_895_int); // 0xac0 TObjFunc
	
Label_2754:
	var_896_bool = 0; var_897_object = Obj(); // 0xac2 PushV
	var_897_object = var_1_object; // 0xac3 MovT
	func_5402(var_897_object); // 0xac4 NEW_2
	if(var_896_bool == 0) goto Label_2764; // 0xac6 JumpB
	var_902_int = 522003; // 0xac7 PushI
	var_903_int = 23226; // 0xac8 PushI
	var_904_int = 23173; // 0xac9 PushI
	AddReply(var_902_int, var_903_int, var_904_int); // 0xaca TObjFunc
	
Label_2764:
	var_905_int = 522004; // 0xacc PushI
	var_906_int = -1; // 0xacd PushI
	var_907_int = 23174; // 0xace PushI
	AddReply(var_905_int, var_906_int, var_907_int); // 0xacf TObjFunc
	goto Label_2772; // 0xad1 Jump
}


func_5737(var_143_int)
{
	var_144_int = 0; var_145_int = 0; // 0x1669 PushV
	var_146_string = "branch"; // 0x166a PushS
	GetVariable(var_146_string, var_145_int); // 0x166b Func
	var_147_int = 0; // 0x166d PushI
	var_148_bool = var_145_int == var_147_int; // 0x166e Eq
	if(var_148_bool == 0) goto Label_5747; // 0x166f JumpB
	var_143_int = 1; // 0x1670 MovI
	return 2; // 0x1671 Return
	
Label_5747:
	var_149_int = 1; // 0x1673 PushI
	var_150_bool = var_145_int == var_149_int; // 0x1674 Eq
	if(var_150_bool == 0) goto Label_5752; // 0x1675 JumpB
	var_143_int = 2; // 0x1676 MovI
	return 2; // 0x1677 Return
	
Label_5752:
	var_143_int = 3; // 0x1678 MovI
	return 2; // 0x1679 Return
}


func_4969(var_83_object)
{
	var_85_string = "avroks blood is given"; // 0x136a PushS
	Trace(var_85_string); // 0x136b Func
	var_86_object = Obj(); var_87_string = ""; var_88_int = 0; // 0x136d PushV
	var_86_object = var_83_object; // 0x136e Mov
	var_87_string = "avroks_blood"; // 0x136f MovS
	var_88_int = 1; // 0x1370 MovI
	func_4848(var_86_object, var_87_string, var_88_int); // 0x1371 NEW_2
	return 0; // 0x1373 Return
}


func_3946(var_2_object, var_396_string)
{
	var_397_bool = 0; // 0xf6b PushV
	func_4951(var_397_bool); // 0xf6c NEW_2
	var_398_bool = var_397_bool == 0; // 0xf6e Not
	if(var_398_bool == 0) goto Label_3953; // 0xf6f JumpB
	return 0; // 0xf70 Return
	
Label_3953:
	var_399_bool = var_396_string == var_2_object; // 0xf71 Eq
	if(var_399_bool == 0) goto Label_3956; // 0xf72 JumpB
	return 0; // 0xf73 Return
	
Label_3956:
	var_400_string = ""; var_401_bool = 0; // 0xf74 PushV
	var_400_string = var_396_string; // 0xf75 Mov
	var_402_string = ""; // 0xf76 PushS
	var_403_bool = var_396_string == var_402_string; // 0xf77 Eq
	if(var_403_bool == 0) goto Label_3963; // 0xf78 JumpB
	var_401_bool = 0; // 0xf79 MovB
	goto Label_3964; // 0xf7a Jump
	
Label_3964:
	func_4738(var_400_string, var_401_bool); // 0xf7c NEW_2
	var_2_object = var_396_string; // 0xf7e TMov
	return 0; // 0xf7f Return
	
Label_3963:
	var_401_bool = 1; // 0xf7b MovB
}


func_4458(var_84_bool)
{
	var_84_bool = 1; // 0x116a MovB
	return 0; // 0x116b Return
}


func_4460()
{
	StopAnimation(); // 0x116c Func
	StopGroup0(); // 0x116e Func
	return 0; // 0x1170 Return
}


func_5486()
{
	var_180_object = Obj(); var_181_object = Obj(); // 0x156e PushV
	var_182_int = 565; // 0x156f PushI
	var_183_int = 0; // 0x1570 PushI
	var_184_int = 530579; // 0x1571 PushI
	CreateDiaryEntry(var_181_object, var_182_int, var_183_int, var_184_int); // 0x1572 Func
	var_185_bool = 0; var_186_object = Obj(); var_187_int = 0; // 0x1574 PushV
	var_186_object = var_181_object; // 0x1575 Mov
	var_187_int = -1; // 0x1576 MovI
	func_5642(var_185_bool, var_186_object, var_187_int); // 0x1577 NEW_2
	return 2; // 0x1579 Return
}


func_5231()
{
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0; // 0x1470 PushV
	var_110_object = Obj(); // 0x1471 PushV
	func_5687(var_110_object); // 0x1472 NEW_2
	var_107_object = var_110_object; // 0x1473 Mov
	var_108_string = "pt_map_aglaja"; // 0x1475 MovS
	var_109_float = -1; // 0x1476 MovI
	func_5704(var_107_object, var_108_string, var_109_float); // 0x1477 NEW_2
	var_136_object = Obj(); // 0x1479 PushV
	func_5687(var_136_object); // 0x147a NEW_2
	ShowMap(var_136_object); // 0x147c ObjFunc
	return 0; // 0x147e Return
}


func_4465(var_61_float)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x1171 PushV
	GetPosition(var_66_cvector); // 0x1172 Func
	GetPosition(var_67_cvector); // 0x1174 ObjFunc
	var_68_cvector = var_67_cvector - var_66_cvector; // 0x1176 Sub2
	var_61_float = var_68_cvector | var_68_cvector; // 0x1177 Or2
	return 6; // 0x1178 Return
}


func_4722(var_280_string)
{
	var_281_bool = 0; var_282_float = 0; var_283_float = 0; var_284_bool = 0; var_285_float = 0; var_286_float = 0; // 0x1272 PushV
	lshHasAnimation(var_284_bool, var_280_string); // 0x1273 Func
	var_287_bool = var_284_bool; // 0x1275 Push
	if(var_287_bool == 0) goto Label_4733; // 0x1276 JumpB
	lshGetAnimTimes(var_280_string, var_285_float, var_286_float); // 0x1277 Func
	var_288_bool = 0; // 0x1279 PushB
	lshPlayAnimation(var_285_float, var_286_float, var_288_bool); // 0x127a Func
	goto Label_4737; // 0x127c Jump
	
Label_4737:
	return 6; // 0x1281 Return
	
Label_4733:
	var_289_string = "Can't find lsh animation : "; // 0x127d PushS
	var_290_int = var_289_string + var_280_string; // 0x127e Add
	Trace(var_290_int); // 0x127f Func
}


func_4980()
{
	var_54_string = "b8q01"; // 0x1375 PushS
	var_55_int = 5; // 0x1376 PushI
	SetVariable(var_54_string, var_55_int); // 0x1377 Func
	func_5577(); // 0x137a NEW_2
	return 0; // 0x137c Return
}


func_4473(var_54_bool, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; // 0x1179 PushV
	GetPosition(var_59_cvector); // 0x117a Func
	var_60_cvector = var_55_cvector - var_59_cvector; // 0x117c Sub2
	var_62_float = GetByIndex(var_60_cvector, 0); // 0x117d PushE
	var_63_float = GetByIndex(var_60_cvector, 2); // 0x117e PushE
	Rotate(var_62_float, var_63_float, var_61_bool); // 0x117f Func
	var_54_bool = var_61_bool; // 0x1181 Mov
	return 6; // 0x1182 Return
}


func_5754(var_64_object)
{
	var_65_bool = 0; var_66_int = 0; // 0x167b PushV
	var_66_int = 9; // 0x167c MovI
	func_4900(var_65_bool, var_66_int); // 0x167d NEW_2
	if(var_65_bool == 0) goto Label_5767; // 0x167f JumpB
	var_80_int = 0; var_81_object = Obj(); // 0x1680 PushV
	var_81_object = var_64_object; // 0x1681 Mov
	TaskCall(10); // 0x1682 TaskCall
	func_3401(var_82_object, var_80_int, var_81_object); // 0x1683 NEW_2
	TaskReturn(); // 0x1684 TaskReturn
	return 0; // 0x1686 Return
	
Label_5767:
	var_305_bool = 0; var_306_int = 0; // 0x1687 PushV
	var_306_int = 10; // 0x1688 MovI
	func_4900(var_305_bool, var_306_int); // 0x1689 NEW_2
	if(var_305_bool == 0) goto Label_5779; // 0x168b JumpB
	var_307_int = 0; var_308_object = Obj(); // 0x168c PushV
	var_308_object = var_64_object; // 0x168d Mov
	TaskCall(12); // 0x168e TaskCall
	func_3604(var_309_object, var_307_int, var_308_object); // 0x168f NEW_2
	TaskReturn(); // 0x1690 TaskReturn
	return 0; // 0x1692 Return
	
Label_5779:
	var_363_bool = 0; var_364_int = 0; // 0x1693 PushV
	var_364_int = 11; // 0x1694 MovI
	func_4900(var_363_bool, var_364_int); // 0x1695 NEW_2
	if(var_363_bool == 0) goto Label_5791; // 0x1697 JumpB
	var_365_int = 0; var_366_object = Obj(); // 0x1698 PushV
	var_366_object = var_64_object; // 0x1699 Mov
	TaskCall(14); // 0x169a TaskCall
	func_3807(var_367_object, var_365_int, var_366_object); // 0x169b NEW_2
	TaskReturn(); // 0x169c TaskReturn
	return 0; // 0x169e Return
	
Label_5791:
	var_421_bool = 0; var_422_int = 0; // 0x169f PushV
	var_422_int = 7; // 0x16a0 MovI
	func_4894(var_421_bool, var_422_int); // 0x16a1 NEW_2
	if(var_421_bool == 0) goto Label_5803; // 0x16a3 JumpB
	var_424_int = 0; var_425_object = Obj(); // 0x16a4 PushV
	var_425_object = var_64_object; // 0x16a5 Mov
	TaskCall(0); // 0x16a6 TaskCall
	func_0(var_426_object, var_424_int, var_425_object); // 0x16a7 NEW_2
	TaskReturn(); // 0x16a8 TaskReturn
	return 0; // 0x16aa Return
	
Label_5803:
	var_496_bool = 0; var_497_int = 0; // 0x16ab PushV
	var_497_int = 8; // 0x16ac MovI
	func_4894(var_496_bool, var_497_int); // 0x16ad NEW_2
	if(var_496_bool == 0) goto Label_5815; // 0x16af JumpB
	var_498_int = 0; var_499_object = Obj(); // 0x16b0 PushV
	var_499_object = var_64_object; // 0x16b1 Mov
	TaskCall(2); // 0x16b2 TaskCall
	func_512(var_500_object, var_498_int, var_499_object); // 0x16b3 NEW_2
	TaskReturn(); // 0x16b4 TaskReturn
	return 0; // 0x16b6 Return
	
Label_5815:
	var_581_bool = 0; var_582_int = 0; // 0x16b7 PushV
	var_582_int = 9; // 0x16b8 MovI
	func_4894(var_581_bool, var_582_int); // 0x16b9 NEW_2
	if(var_581_bool == 0) goto Label_5827; // 0x16bb JumpB
	var_583_int = 0; var_584_object = Obj(); // 0x16bc PushV
	var_584_object = var_64_object; // 0x16bd Mov
	TaskCall(4); // 0x16be TaskCall
	func_1127(var_585_object, var_583_int, var_584_object); // 0x16bf NEW_2
	TaskReturn(); // 0x16c0 TaskReturn
	return 0; // 0x16c2 Return
	
Label_5827:
	var_678_bool = 0; var_679_int = 0; // 0x16c3 PushV
	var_679_int = 10; // 0x16c4 MovI
	func_4894(var_678_bool, var_679_int); // 0x16c5 NEW_2
	if(var_678_bool == 0) goto Label_5839; // 0x16c7 JumpB
	var_680_int = 0; var_681_object = Obj(); // 0x16c8 PushV
	var_681_object = var_64_object; // 0x16c9 Mov
	TaskCall(6); // 0x16ca TaskCall
	func_1800(var_682_object, var_680_int, var_681_object); // 0x16cb NEW_2
	TaskReturn(); // 0x16cc TaskReturn
	return 0; // 0x16ce Return
	
Label_5839:
	var_796_bool = 0; var_797_int = 0; // 0x16cf PushV
	var_797_int = 11; // 0x16d0 MovI
	func_4894(var_796_bool, var_797_int); // 0x16d1 NEW_2
	if(var_796_bool == 0) goto Label_5851; // 0x16d3 JumpB
	var_798_int = 0; var_799_object = Obj(); // 0x16d4 PushV
	var_799_object = var_64_object; // 0x16d5 Mov
	TaskCall(8); // 0x16d6 TaskCall
	func_2583(var_800_object, var_798_int, var_799_object); // 0x16d7 NEW_2
	TaskReturn(); // 0x16d8 TaskReturn
	return 0; // 0x16da Return
	
Label_5851:
	var_910_int = 0; var_911_object = Obj(); // 0x16db PushV
	var_911_object = var_64_object; // 0x16dc Mov
	TaskCall(16); // 0x16dd TaskCall
	func_4010(var_912_object, var_910_int, var_911_object); // 0x16de NEW_2
	TaskReturn(); // 0x16df TaskReturn
	return 0; // 0x16e1 Return
}


func_5499()
{
	var_140_object = Obj(); var_141_object = Obj(); // 0x157b PushV
	var_142_int = 309; // 0x157c PushI
	var_143_int = 1; // 0x157d PushI
	var_144_int = 521960; // 0x157e PushI
	CreateDiaryEntry(var_141_object, var_142_int, var_143_int, var_144_int); // 0x157f Func
	var_145_bool = 0; var_146_object = Obj(); var_147_int = 0; // 0x1581 PushV
	var_146_object = var_141_object; // 0x1582 Mov
	var_147_int = 305; // 0x1583 MovI
	func_5642(var_145_bool, var_146_object, var_147_int); // 0x1584 NEW_2
	return 2; // 0x1586 Return
}


func_4989()
{
	var_83_string = "b8q01"; // 0x137e PushS
	var_84_int = 7; // 0x137f PushI
	SetVariable(var_83_string, var_84_int); // 0x1380 Func
	var_85_string = "b8q01KnowSgustki"; // 0x1382 PushS
	var_86_int = 1; // 0x1383 PushI
	SetVariable(var_85_string, var_86_int); // 0x1384 Func
	func_5564(); // 0x1387 NEW_2
	return 0; // 0x1389 Return
}


func_5247(var_558_bool)
{
	var_560_int = 0; var_561_string = ""; // 0x1480 PushV
	var_561_string = "b8q01"; // 0x1481 MovS
	func_4791(var_560_int, var_561_string); // 0x1482 NEW_2
	var_562_int = 6; // 0x1484 PushI
	var_563_bool = var_560_int == var_562_int; // 0x1485 Eq
	if(var_563_bool == 0) goto Label_5257; // 0x1486 JumpB
	var_558_bool = 1; // 0x1487 MovB
	return 0; // 0x1488 Return
	
Label_5257:
	var_558_bool = 0; // 0x1489 MovB
	return 0; // 0x148a Return
}


func_4738(var_258_string, var_259_bool)
{
	var_262_bool = 0; var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_float = 0; var_267_float = 0; // 0x1282 PushV
	lshHasAnimation(var_265_bool, var_258_string); // 0x1283 Func
	var_268_bool = var_265_bool; // 0x1285 Push
	if(var_268_bool == 0) goto Label_4748; // 0x1286 JumpB
	lshGetAnimTimes(var_258_string, var_266_float, var_267_float); // 0x1287 Func
	lshPlayAnimation(var_266_float, var_267_float, var_259_bool); // 0x1289 Func
	goto Label_4752; // 0x128b Jump
	
Label_4752:
	return 6; // 0x1290 Return
	
Label_4748:
	var_269_string = "Can't find lsh animation : "; // 0x128c PushS
	var_270_int = var_269_string + var_258_string; // 0x128d Add
	Trace(var_270_int); // 0x128e Func
}


func_4227(var_71_bool)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x1083 PushV
	var_74_string = "player"; // 0x1084 PushS
	FindActor(var_73_object, var_74_string); // 0x1085 Func
	var_75_bool = var_73_object == 0; // 0x1087 Not
	if(var_75_bool == 0) goto Label_4235; // 0x1088 JumpB
	var_71_bool = 0; // 0x1089 MovB
	return 2; // 0x108a Return
	
Label_4235:
	var_76_bool = 0; var_77_object = Obj(); // 0x108b PushV
	var_77_object = var_73_object; // 0x108c Mov
	func_4483(var_77_object); // 0x108d NEW_2
	var_71_bool = var_76_bool; // 0x108e Mov
	return 2; // 0x1090 Return
}


func_4483(var_50_bool)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x1183 PushV
	GetPosition(var_53_cvector); // 0x1184 ObjFunc
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); // 0x1186 PushV
	var_55_cvector = var_53_cvector; // 0x1187 Mov
	func_4473(var_54_bool, var_55_cvector); // 0x1188 NEW_2
	var_50_bool = var_54_bool; // 0x1189 Mov
	return 2; // 0x118b Return
}


func_5512()
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x1588 PushV
	var_74_int = 307; // 0x1589 PushI
	var_75_int = 1; // 0x158a PushI
	var_76_int = 521958; // 0x158b PushI
	CreateDiaryEntry(var_73_object, var_74_int, var_75_int, var_76_int); // 0x158c Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0x158e PushV
	var_78_object = var_73_object; // 0x158f Mov
	var_79_int = 305; // 0x1590 MovI
	func_5642(var_77_bool, var_78_object, var_79_int); // 0x1591 NEW_2
	return 2; // 0x1593 Return
}


func_5002()
{
	var_54_string = "b9q01"; // 0x138b PushS
	var_55_int = 1; // 0x138c PushI
	SetVariable(var_54_string, var_55_int); // 0x138d Func
	func_5590(); // 0x1390 NEW_2
	func_5616(); // 0x1393 NEW_2
	var_87_string = "quest_b9_01_effect.bin"; // 0x1395 PushS
	ApplyEffect(var_87_string); // 0x1396 ObjFunc
	var_88_bool = 0; var_89_string = ""; var_90_string = ""; // 0x1398 PushV
	var_89_string = "quest_b9_01"; // 0x1399 MovS
	var_90_string = "remove_danko"; // 0x139a MovS
	func_4868(var_88_bool, var_89_string, var_90_string); // 0x139b NEW_2
	return 0; // 0x139d Return
}


func_5259(var_529_bool)
{
	var_531_int = 0; var_532_string = ""; // 0x148c PushV
	var_532_string = "b8q01"; // 0x148d MovS
	func_4791(var_531_int, var_532_string); // 0x148e NEW_2
	var_533_int = 4; // 0x1490 PushI
	var_534_bool = var_531_int == var_533_int; // 0x1491 Eq
	if(var_534_bool == 0) goto Label_5269; // 0x1492 JumpB
	var_529_bool = 1; // 0x1493 MovB
	return 0; // 0x1494 Return
	
Label_5269:
	var_529_bool = 0; // 0x1495 MovB
	return 0; // 0x1496 Return
}


func_4492(var_46_bool)
{
	var_47_bool = 0; var_48_bool = 0; // 0x118c PushV
	IsLoaded(var_48_bool); // 0x118d Func
	var_46_bool = var_48_bool; // 0x118f Mov
	return 2; // 0x1190 Return
}


func_4753(var_186_bool, var_187_string)
{
	var_188_bool = 0; var_189_bool = 0; // 0x1291 PushV
	var_190_bool = 0; // 0x1292 PushV
	func_4951(var_190_bool); // 0x1293 NEW_2
	if(var_190_bool == 0) goto Label_4766; // 0x1295 JumpB
	lshHasSpeech(var_189_bool, var_187_string); // 0x1296 Func
	var_191_bool = var_189_bool; // 0x1298 Push
	if(var_191_bool == 0) goto Label_4766; // 0x1299 JumpB
	lshPlaySpeech(var_187_string); // 0x129a Func
	var_186_bool = 1; // 0x129c MovB
	return 2; // 0x129d Return
	
Label_4766:
	var_186_bool = 0; // 0x129e MovB
	return 2; // 0x129f Return
}


func_4242(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0); // 0x1092 PushE
	var_124_float = GetByIndex(var_0_object, 2); // 0x1093 PushE
	RotateAsync(var_123_float, var_124_float); // 0x1094 Func
	return 0; // 0x1096 Return
}


func_4497(var_91_bool, var_93_float)
{
	var_94_float = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_bool = 0; var_102_bool = 0; var_103_float = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_bool = 0; var_111_bool = 0; // 0x1191 PushV
	GetPosition(var_104_cvector); // 0x1192 ObjFunc
	GetEyesHeight(var_103_float); // 0x1194 ObjFunc
	var_112_float = GetByIndex(var_104_cvector, 1); // 0x1196 PushE
	var_112_float = var_112_float + var_103_float; // 0x1197 Add2
	SetByIndex(var_104_cvector, 1) = var_112_float; // 0x1198 PopE
	GetPosition(var_105_cvector); // 0x1199 Func
	GetEyesHeight(var_103_float); // 0x119b Func
	var_113_float = GetByIndex(var_105_cvector, 1); // 0x119d PushE
	var_113_float = var_113_float + var_103_float; // 0x119e Add2
	SetByIndex(var_105_cvector, 1) = var_113_float; // 0x119f PopE
	var_106_cvector = var_104_cvector - var_105_cvector; // 0x11a0 Sub2
	var_114_float = GetByIndex(var_106_cvector, 1); // 0x11a1 PushE
	var_114_float = 0; // 0x11a2 MovI
	SetByIndex(var_106_cvector, 1) = var_114_float; // 0x11a3 PopE
	var_115_int = var_106_cvector | var_106_cvector; // 0x11a4 Or
	var_116_float = sqrt(var_115_int); // 0x11a5 Sqrt
	var_106_cvector = var_106_cvector / var_106_cvector; // 0x11a6 Div2
	var_107_cvector = -var_106_cvector; // 0x11a7 Neg2
	var_117_float = var_106_cvector * var_93_float; // 0x11a8 Mult
	var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); // 0x11a9 PushV
	var_120_cvector = CVector(0.0, 1.0, 0.0); // 0x11aa PushVec
	var_119_cvector = var_107_cvector ^ var_120_cvector; // 0x11ab Xor2
	func_4781(var_118_cvector, var_119_cvector); // 0x11ac NEW_2
	var_126_int = 25; // 0x11ae PushI
	var_127_float = var_118_cvector * var_126_int; // 0x11af Mult
	var_128_int = var_117_float + var_127_float; // 0x11b0 Add
	var_129_cvector = CVector(0.0, 10.0, 0.0); // 0x11b1 PushVec
	var_108_cvector = var_128_int - var_129_cvector; // 0x11b2 Sub2
	var_109_cvector = var_105_cvector + var_108_cvector; // 0x11b3 Add2
	IsOverrideActive(var_110_bool); // 0x11b4 Func
	var_130_bool = var_110_bool; // 0x11b6 Push
	if(var_130_bool == 0) goto Label_4538; // 0x11b7 JumpB
	var_91_bool = 0; // 0x11b8 MovB
	return 18; // 0x11b9 Return
	
Label_4538:
	StopWorld(); // 0x11ba Func
	var_131_bool = 1; // 0x11bc PushB
	CameraTransit(var_109_cvector, var_107_cvector, var_131_bool); // 0x11bd Func
	var_132_float = GetByIndex(var_108_cvector, 0); // 0x11bf PushE
	var_133_float = GetByIndex(var_108_cvector, 2); // 0x11c0 PushE
	Rotate(var_132_float, var_133_float); // 0x11c1 Func
	var_134_bool = 0; // 0x11c3 PushV
	func_4951(var_134_bool); // 0x11c4 NEW_2
	if(var_134_bool == 0) goto Label_4552; // 0x11c6 JumpB
	goto Label_4560; // 0x11c7 Jump
	
Label_4560:
	CameraWaitForPlayFinish(); // 0x11d0 Func
	ResumeWorld(); // 0x11d2 Func
	var_91_bool = 1; // 0x11d4 MovB
	return 18; // 0x11d5 Return
	
Label_4552:
	var_135_string = "head"; // 0x11c8 PushS
	HasAnimationTrack(var_111_bool, var_135_string); // 0x11c9 Func
	var_136_bool = var_111_bool; // 0x11cb Push
	if(var_136_bool == 0) goto Label_4560; // 0x11cc JumpB
	var_137_string = "head"; // 0x11cd PushS
	LookAsyncCamera(var_137_string); // 0x11ce Func
}


func_5525()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x1595 PushV
	var_58_int = 313; // 0x1596 PushI
	var_59_int = 1; // 0x1597 PushI
	var_60_int = 522055; // 0x1598 PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x1599 Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x159b PushV
	var_62_object = var_57_object; // 0x159c Mov
	var_63_int = -1; // 0x159d MovI
	func_5642(var_61_bool, var_62_object, var_63_int); // 0x159e NEW_2
	return 2; // 0x15a0 Return
}


func_5271(var_646_bool)
{
	var_648_int = 0; var_649_string = ""; // 0x1498 PushV
	var_649_string = "b9q01"; // 0x1499 MovS
	func_4791(var_648_int, var_649_string); // 0x149a NEW_2
	var_650_int = 0; // 0x149c PushI
	var_651_bool = var_648_int == var_650_int; // 0x149d Eq
	if(var_651_bool == 0) goto Label_5281; // 0x149e JumpB
	var_646_bool = 1; // 0x149f MovB
	return 0; // 0x14a0 Return
	
Label_5281:
	var_646_bool = 0; // 0x14a1 MovB
	return 0; // 0x14a2 Return
}


func_4247(var_54_bool)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; // 0x1097 PushV
	var_59_string = "player"; // 0x1098 PushS
	FindActor(var_57_object, var_59_string); // 0x1099 Func
	var_60_bool = var_57_object == 0; // 0x109b Not
	if(var_60_bool == 0) goto Label_4255; // 0x109c JumpB
	var_54_bool = 0; // 0x109d MovB
	return 4; // 0x109e Return
	
Label_4255:
	var_61_float = 0; var_62_object = Obj(); // 0x109f PushV
	var_62_object = var_57_object; // 0x10a0 Mov
	func_4465(var_62_object); // 0x10a1 NEW_2
	var_69_float = 90000.0; // 0x10a3 PushF
	var_70_bool = var_61_float > var_69_float; // 0x10a4 GT
	if(var_70_bool == 0) goto Label_4264; // 0x10a5 JumpB
	var_54_bool = 0; // 0x10a6 MovB
	return 4; // 0x10a7 Return
	
Label_4264:
	CanSee(var_58_bool, var_57_object); // 0x10a8 Func
	var_54_bool = var_58_bool; // 0x10aa Mov
	return 4; // 0x10ab Return
}


func_3482(var_0_object, var_1_object, var_2_object, var_3_string, var_247_object, var_248_object)
{
	var_0_object = var_248_object; // 0xd9b TMov
	var_1_object = var_247_object; // 0xd9c TMov
	var_3_string = 0; // 0xd9d TMovB
	var_253_int = 1; // 0xd9e PushI
	if(var_253_int == 0) goto Label_3510; // 0xd9f JumpB
	var_254_string = ""; // 0xda0 PushV
	var_254_string = "Neutral"; // 0xda1 MovS
	func_3540(var_248_object, var_254_string); // 0xda2 NEW_2
	var_271_int = 529926; // 0xda4 PushI
	SetMessage(var_271_int); // 0xda5 TObjFunc
	ClearReplies(); // 0xda7 TObjFunc
	var_272_int = 529927; // 0xda9 PushI
	var_273_int = -1; // 0xdaa PushI
	var_274_int = 31310; // 0xdab PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xdac TObjFunc
	var_275_int = 529928; // 0xdae PushI
	var_276_int = -1; // 0xdaf PushI
	var_277_int = 31311; // 0xdb0 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0xdb1 TObjFunc
	goto Label_3510; // 0xdb3 Jump
	
Label_3510:
	var_278_bool = 0; // 0xdb6 PushV
	func_4951(var_278_bool); // 0xdb7 NEW_2
	if(var_278_bool == 0) goto Label_3525; // 0xdb9 JumpB
	
Label_3514:
	lshWaitForAnimEnd(); // 0xdba Func
	var_279_string = var_3_string; // 0xdbc PushT
	if(var_279_string == 0) goto Label_3519; // 0xdbd JumpB
	goto Label_3524; // 0xdbe Jump
	
Label_3524:
	goto Label_3539; // 0xdc4 Jump
	
Label_3539:
	return 0; // 0xdd3 Return
	
Label_3519:
	var_280_string = ""; // 0xdbf PushV
	var_280_string = var_2_object; // 0xdc0 MovT
	func_4722(var_280_string); // 0xdc1 NEW_2
	goto Label_3514; // 0xdc3 Jump
	
Label_3525:
	var_291_string = "all"; // 0xdc5 PushS
	var_292_string = "idle"; // 0xdc6 PushS
	PlayAnimation(var_291_string, var_292_string); // 0xdc7 Func
	
Label_3529:
	WaitForAnimEnd(); // 0xdc9 Func
	var_293_string = var_3_string; // 0xdcb PushT
	if(var_293_string == 0) goto Label_3534; // 0xdcc JumpB
	goto Label_3539; // 0xdcd Jump
	
Label_3534:
	var_294_string = "all"; // 0xdce PushS
	var_295_string = "idle"; // 0xdcf PushS
	PlayAnimation(var_294_string, var_295_string); // 0xdd0 Func
	goto Label_3529; // 0xdd2 Jump
}


func_5022(var_113_object)
{
	func_5603(); // 0x13a0 NEW_2
	var_123_bool = 0; var_124_string = ""; var_125_string = ""; // 0x13a2 PushV
	var_124_string = "quest_b9_01"; // 0x13a3 MovS
	var_125_string = "completed"; // 0x13a4 MovS
	func_4868(var_123_bool, var_124_string, var_125_string); // 0x13a5 NEW_2
	var_126_string = "b9q01_stop"; // 0x13a7 PushS
	Trigger(var_113_object, var_126_string); // 0x13a8 Func
	return 0; // 0x13aa Return
}


func_3743(var_2_object, var_338_string)
{
	var_339_bool = 0; // 0xea0 PushV
	func_4951(var_339_bool); // 0xea1 NEW_2
	var_340_bool = var_339_bool == 0; // 0xea3 Not
	if(var_340_bool == 0) goto Label_3750; // 0xea4 JumpB
	return 0; // 0xea5 Return
	
Label_3750:
	var_341_bool = var_338_string == var_2_object; // 0xea6 Eq
	if(var_341_bool == 0) goto Label_3753; // 0xea7 JumpB
	return 0; // 0xea8 Return
	
Label_3753:
	var_342_string = ""; var_343_bool = 0; // 0xea9 PushV
	var_342_string = var_338_string; // 0xeaa Mov
	var_344_string = ""; // 0xeab PushS
	var_345_bool = var_338_string == var_344_string; // 0xeac Eq
	if(var_345_bool == 0) goto Label_3760; // 0xead JumpB
	var_343_bool = 0; // 0xeae MovB
	goto Label_3761; // 0xeaf Jump
	
Label_3761:
	func_4738(var_342_string, var_343_bool); // 0xeb1 NEW_2
	var_2_object = var_338_string; // 0xeb3 TMov
	return 0; // 0xeb4 Return
	
Label_3760:
	var_343_bool = 1; // 0xeb0 MovB
}


func_4768()
{
	var_49_bool = 0; // 0x12a0 PushV
	func_4951(var_49_bool); // 0x12a1 NEW_2
	if(var_49_bool == 0) goto Label_4774; // 0x12a3 JumpB
	lshStopSpeech(); // 0x12a4 Func
	
Label_4774:
	return 0; // 0x12a6 Return
}


func_5629(var_70_object)
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x15fd PushV
	GetDiaryRoot(var_72_object); // 0x15fe Func
	var_73_bool = var_72_object == 0; // 0x1600 Not
	if(var_73_bool == 0) goto Label_5639; // 0x1601 JumpB
	var_74_string = "Can't retrieve diary root"; // 0x1602 PushS
	Trace(var_74_string); // 0x1603 Func
	var_70_object = 0; // 0x1605 MovB
	return 2; // 0x1606 Return
	
Label_5639:
	var_70_object = var_72_object; // 0x1607 Mov
	return 2; // 0x1608 Return
}


func_5538()
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x15a2 PushV
	var_81_int = 314; // 0x15a3 PushI
	var_82_int = 1; // 0x15a4 PushI
	var_83_int = 522056; // 0x15a5 PushI
	CreateDiaryEntry(var_80_object, var_81_int, var_82_int, var_83_int); // 0x15a6 Func
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0; // 0x15a8 PushV
	var_85_object = var_80_object; // 0x15a9 Mov
	var_86_int = 313; // 0x15aa MovI
	func_5642(var_84_bool, var_85_object, var_86_int); // 0x15ab NEW_2
	return 2; // 0x15ad Return
}


func_5283(var_614_bool)
{
	var_616_int = 0; var_617_string = ""; // 0x14a4 PushV
	var_617_string = "oob9Starshina1"; // 0x14a5 MovS
	func_4791(var_616_int, var_617_string); // 0x14a6 NEW_2
	var_618_int = 0; // 0x14a8 PushI
	var_619_bool = var_616_int == var_618_int; // 0x14a9 Eq
	if(var_619_bool == 0) goto Label_5293; // 0x14aa JumpB
	var_614_bool = 1; // 0x14ab MovB
	return 0; // 0x14ac Return
	
Label_5293:
	var_614_bool = 0; // 0x14ad MovB
	return 0; // 0x14ae Return
}


func_164(var_2_object, var_463_string)
{
	var_464_bool = 0; // 0xa5 PushV
	func_4951(var_464_bool); // 0xa6 NEW_2
	var_465_bool = var_464_bool == 0; // 0xa8 Not
	if(var_465_bool == 0) goto Label_171; // 0xa9 JumpB
	return 0; // 0xaa Return
	
Label_171:
	var_466_bool = var_463_string == var_2_object; // 0xab Eq
	if(var_466_bool == 0) goto Label_174; // 0xac JumpB
	return 0; // 0xad Return
	
Label_174:
	var_467_string = ""; var_468_bool = 0; // 0xae PushV
	var_467_string = var_463_string; // 0xaf Mov
	var_469_string = ""; // 0xb0 PushS
	var_470_bool = var_463_string == var_469_string; // 0xb1 Eq
	if(var_470_bool == 0) goto Label_181; // 0xb2 JumpB
	var_468_bool = 0; // 0xb3 MovB
	goto Label_182; // 0xb4 Jump
	
Label_182:
	func_4738(var_467_string, var_468_bool); // 0xb6 NEW_2
	var_2_object = var_463_string; // 0xb8 TMov
	return 0; // 0xb9 Return
	
Label_181:
	var_468_bool = 1; // 0xb5 MovB
}


func_4775(var_154_object)
{
	var_155_object = Obj(); var_156_object = Obj(); // 0x12a7 PushV
	self(var_156_object); // 0x12a8 Func
	var_154_object = var_156_object; // 0x12aa Mov
	return 2; // 0x12ab Return
}


func_4010(var_0_object, var_910_int, var_911_object)
{
	var_913_object = Obj(); var_914_bool = 0; var_915_int = 0; var_916_bool = 0; var_917_object = Obj(); var_918_bool = 0; var_919_int = 0; var_920_bool = 0; // 0xfaa PushV
	var_0_object = var_911_object; // 0xfab TMov
	var_921_bool = 0; var_922_object = Obj(); var_923_float = 0; // 0xfac PushV
	var_922_object = var_911_object; // 0xfad Mov
	var_923_float = 130.0; // 0xfae MovF
	func_4497(var_922_object, var_923_float); // 0xfaf NEW_2
	var_924_bool = var_921_bool == 0; // 0xfb1 Not
	if(var_924_bool == 0) goto Label_4021; // 0xfb2 JumpB
	var_910_int = -2; // 0xfb3 MovI
	return 8; // 0xfb4 Return
	
Label_4021:
	CreateDialog(var_917_object); // 0xfb5 Func
	var_925_int = 0; // 0xfb7 PushV
	func_4945(var_925_int); // 0xfb8 NEW_2
	SetNPCName(var_925_int); // 0xfba ObjFunc
	var_926_int = 0; // 0xfbc PushV
	func_4943(var_926_int); // 0xfbd NEW_2
	SetNPCDescription(var_926_int); // 0xfbf ObjFunc
	var_927_string = ""; // 0xfc1 PushV
	func_4947(var_927_string); // 0xfc2 NEW_2
	SetPhoto(var_927_string); // 0xfc4 ObjFunc
	var_928_string = ""; // 0xfc6 PushV
	func_4949(var_928_string); // 0xfc7 NEW_2
	SetPhoto2(var_928_string); // 0xfc9 ObjFunc
	var_929_int = 0; // 0xfcb PushV
	func_5737(var_929_int); // 0xfcc NEW_2
	SetPlayerName(var_929_int); // 0xfce ObjFunc
	var_919_int = -1; // 0xfd0 MovI
	IsOverrideActive(var_918_bool); // 0xfd1 Func
	var_930_bool = var_918_bool; // 0xfd3 Push
	if(var_930_bool == 0) goto Label_4055; // 0xfd4 JumpB
	var_910_int = -2; // 0xfd5 MovI
	return 8; // 0xfd6 Return
	
Label_4055:
	DoDialog(var_917_object); // 0xfd7 Func
	var_931_bool = 0; var_932_object = Obj(); // 0xfd9 PushV
	var_933_object = Obj(); // 0xfda PushV
	func_4775(var_933_object); // 0xfdb NEW_2
	var_932_object = var_933_object; // 0xfdc Mov
	func_4584(var_931_bool, var_932_object); // 0xfde NEW_2
	var_934_object = Obj(); var_935_object = Obj(); // 0xfe0 PushV
	var_934_object = var_911_object; // 0xfe1 Mov
	var_935_object = var_917_object; // 0xfe2 Mov
	TaskCall(17); // 0xfe3 TaskCall
	func_4091(var_936_object, var_937_object, var_938_string, var_939_bool, var_934_object, var_935_object); // 0xfe4 NEW_2
	TaskReturn(); // 0xfe5 TaskReturn
	IsDialogEnd(var_920_bool); // 0xfe7 ObjFunc
	
Label_4073:
	var_964_bool = var_920_bool == 0; // 0xfe9 Not
	if(var_964_bool == 0) goto Label_4080; // 0xfea JumpB
	sync(); // 0xfeb Func
	IsDialogEnd(var_920_bool); // 0xfed ObjFunc
	goto Label_4073; // 0xfef Jump
	
Label_4080:
	var_965_object = Obj(); // 0xff0 PushV
	var_965_object = var_911_object; // 0xff1 Mov
	func_4566(); // 0xff2 NEW_2
	StopDialog(var_917_object); // 0xff4 Func
	GetReturnValue(var_919_int); // 0xff6 ObjFunc
	var_910_int = var_919_int; // 0xff8 Mov
	return 8; // 0xff9 Return
}


func_5035()
{
	var_622_string = "oob9Starshina1"; // 0x13ac PushS
	var_623_int = 1; // 0x13ad PushI
	SetVariable(var_622_string, var_623_int); // 0x13ae Func
	return 0; // 0x13b0 Return
}


func_685(var_2_object, var_535_string)
{
	var_536_bool = 0; // 0x2ae PushV
	func_4951(var_536_bool); // 0x2af NEW_2
	var_537_bool = var_536_bool == 0; // 0x2b1 Not
	if(var_537_bool == 0) goto Label_692; // 0x2b2 JumpB
	return 0; // 0x2b3 Return
	
Label_692:
	var_538_bool = var_535_string == var_2_object; // 0x2b4 Eq
	if(var_538_bool == 0) goto Label_695; // 0x2b5 JumpB
	return 0; // 0x2b6 Return
	
Label_695:
	var_539_string = ""; var_540_bool = 0; // 0x2b7 PushV
	var_539_string = var_535_string; // 0x2b8 Mov
	var_541_string = ""; // 0x2b9 PushS
	var_542_bool = var_535_string == var_541_string; // 0x2ba Eq
	if(var_542_bool == 0) goto Label_702; // 0x2bb JumpB
	var_540_bool = 0; // 0x2bc MovB
	goto Label_703; // 0x2bd Jump
	
Label_703:
	func_4738(var_539_string, var_540_bool); // 0x2bf NEW_2
	var_2_object = var_535_string; // 0x2c1 TMov
	return 0; // 0x2c2 Return
	
Label_702:
	var_540_bool = 1; // 0x2be MovB
}


func_4269()
{
	var_968_float = 0; var_969_float = 0; // 0x10ad PushV
	var_970_int = 8; // 0x10ae PushI
	var_971_int = 16; // 0x10af PushI
	rand(var_969_float, var_970_int, var_971_int); // 0x10b0 Func
	var_972_int = 10; // 0x10b2 PushI
	SetTimer(var_972_int, var_969_float); // 0x10b3 Func
	return 2; // 0x10b5 Return
}


func_5295(var_655_bool)
{
	var_657_int = 0; var_658_string = ""; // 0x14b0 PushV
	var_658_string = "b9q01"; // 0x14b1 MovS
	func_4791(var_657_int, var_658_string); // 0x14b2 NEW_2
	var_659_int = 3; // 0x14b4 PushI
	var_660_bool = var_657_int == var_659_int; // 0x14b5 Eq
	if(var_660_bool == 0) goto Label_5305; // 0x14b6 JumpB
	var_655_bool = 1; // 0x14b7 MovB
	return 0; // 0x14b8 Return
	
Label_5305:
	var_655_bool = 0; // 0x14b9 MovB
	return 0; // 0x14ba Return
}


func_4781(var_118_cvector, var_119_cvector)
{
	var_121_float = 0; var_122_float = 0; // 0x12ad PushV
	var_123_int = var_119_cvector | var_119_cvector; // 0x12ae Or
	var_122_float = sqrt(var_123_int); // 0x12af Sqrt2
	var_124_float = 0.0; // 0x12b0 PushF
	var_125_bool = var_122_float < var_124_float; // 0x12b1 LT
	if(var_125_bool == 0) goto Label_4789; // 0x12b2 JumpB
	var_118_cvector = CVector(0.0, 0.0, 0.0); // 0x12b3 MovV
	return 2; // 0x12b4 Return
	
Label_4789:
	var_118_cvector = var_119_cvector / var_119_cvector; // 0x12b5 Div2
	return 2; // 0x12b6 Return
}


func_5551()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x15af PushV
	var_58_int = 260; // 0x15b0 PushI
	var_59_int = 1; // 0x15b1 PushI
	var_60_int = 521032; // 0x15b2 PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x15b3 Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x15b5 PushV
	var_62_object = var_57_object; // 0x15b6 Mov
	var_63_int = 253; // 0x15b7 MovI
	func_5642(var_61_bool, var_62_object, var_63_int); // 0x15b8 NEW_2
	return 2; // 0x15ba Return
}


func_5041()
{
	var_131_string = "oob9Starshina2"; // 0x13b2 PushS
	var_132_int = 1; // 0x13b3 PushI
	SetVariable(var_131_string, var_132_int); // 0x13b4 Func
	return 0; // 0x13b6 Return
}


func_4278()
{
	var_967_int = 10; // 0x10b6 PushI
	KillTimer(var_967_int); // 0x10b7 Func
	return 0; // 0x10b9 Return
}


func_4791(var_457_int, var_458_string)
{
	var_459_int = 0; var_460_int = 0; // 0x12b7 PushV
	GetVariable(var_458_string, var_460_int); // 0x12b8 Func
	var_457_int = var_460_int; // 0x12ba Mov
	return 2; // 0x12bb Return
}


func_1208(var_0_object, var_1_object, var_2_object, var_3_string, var_607_object, var_608_object)
{
	var_0_object = var_608_object; // 0x4b9 TMov
	var_1_object = var_607_object; // 0x4ba TMov
	var_3_string = 0; // 0x4bb TMovB
	var_613_int = 1; // 0x4bc PushI
	if(var_613_int == 0) goto Label_1286; // 0x4bd JumpB
	var_614_bool = 0; var_615_object = Obj(); // 0x4be PushV
	var_615_object = var_1_object; // 0x4bf MovT
	func_5283(var_615_object); // 0x4c0 NEW_2
	if(var_614_bool == 0) goto Label_1239; // 0x4c2 JumpB
	var_620_object = Obj(); var_621_object = Obj(); // 0x4c3 PushV
	var_620_object = var_1_object; // 0x4c4 MovT
	var_621_object = var_0_object; // 0x4c5 MovT
	func_5035(); // 0x4c6 NEW_2
	var_624_string = ""; // 0x4c8 PushV
	var_624_string = "Neutral"; // 0x4c9 MovS
	func_1316(var_608_object, var_624_string); // 0x4ca NEW_2
	var_632_int = 521539; // 0x4cc PushI
	SetMessage(var_632_int); // 0x4cd TObjFunc
	ClearReplies(); // 0x4cf TObjFunc
	var_633_int = 522390; // 0x4d1 PushI
	var_634_int = 23556; // 0x4d2 PushI
	var_635_int = 23555; // 0x4d3 PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0x4d4 TObjFunc
	goto Label_1286; // 0x4d6 Jump
	
Label_1286:
	var_636_bool = 0; // 0x506 PushV
	func_4951(var_636_bool); // 0x507 NEW_2
	if(var_636_bool == 0) goto Label_1301; // 0x509 JumpB
	
Label_1290:
	lshWaitForAnimEnd(); // 0x50a Func
	var_637_string = var_3_string; // 0x50c PushT
	if(var_637_string == 0) goto Label_1295; // 0x50d JumpB
	goto Label_1300; // 0x50e Jump
	
Label_1300:
	goto Label_1315; // 0x514 Jump
	
Label_1315:
	return 0; // 0x523 Return
	
Label_1295:
	var_638_string = ""; // 0x50f PushV
	var_638_string = var_2_object; // 0x510 MovT
	func_4722(var_638_string); // 0x511 NEW_2
	goto Label_1290; // 0x513 Jump
	
Label_1301:
	var_639_string = "all"; // 0x515 PushS
	var_640_string = "idle"; // 0x516 PushS
	PlayAnimation(var_639_string, var_640_string); // 0x517 Func
	
Label_1305:
	WaitForAnimEnd(); // 0x519 Func
	var_641_string = var_3_string; // 0x51b PushT
	if(var_641_string == 0) goto Label_1310; // 0x51c JumpB
	goto Label_1315; // 0x51d Jump
	
Label_1310:
	var_642_string = "all"; // 0x51e PushS
	var_643_string = "idle"; // 0x51f PushS
	PlayAnimation(var_642_string, var_643_string); // 0x520 Func
	goto Label_1305; // 0x522 Jump
	
Label_1239:
	var_644_string = ""; // 0x4d7 PushV
	var_644_string = "Neutral"; // 0x4d8 MovS
	func_1316(var_608_object, var_644_string); // 0x4d9 NEW_2
	var_645_int = 521544; // 0x4db PushI
	SetMessage(var_645_int); // 0x4dc TObjFunc
	ClearReplies(); // 0x4de TObjFunc
	var_646_bool = 0; var_647_object = Obj(); // 0x4e0 PushV
	var_647_object = var_1_object; // 0x4e1 MovT
	func_5271(var_647_object); // 0x4e2 NEW_2
	if(var_646_bool == 0) goto Label_1258; // 0x4e4 JumpB
	var_652_int = 521545; // 0x4e5 PushI
	var_653_int = 22710; // 0x4e6 PushI
	var_654_int = 22706; // 0x4e7 PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0x4e8 TObjFunc
	
Label_1258:
	var_655_bool = 0; var_656_object = Obj(); // 0x4ea PushV
	var_656_object = var_1_object; // 0x4eb MovT
	func_5295(var_656_object); // 0x4ec NEW_2
	if(var_655_bool == 0) goto Label_1268; // 0x4ee JumpB
	var_661_int = 521587; // 0x4ef PushI
	var_662_int = 22749; // 0x4f0 PushI
	var_663_int = 22748; // 0x4f1 PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0x4f2 TObjFunc
	
Label_1268:
	var_664_bool = 0; var_665_object = Obj(); // 0x4f4 PushV
	var_665_object = var_1_object; // 0x4f5 MovT
	func_5307(var_665_object); // 0x4f6 NEW_2
	if(var_664_bool == 0) goto Label_1278; // 0x4f8 JumpB
	var_670_int = 522411; // 0x4f9 PushI
	var_671_int = 23579; // 0x4fa PushI
	var_672_int = 23578; // 0x4fb PushI
	AddReply(var_670_int, var_671_int, var_672_int); // 0x4fc TObjFunc
	
Label_1278:
	var_673_int = 521546; // 0x4fe PushI
	var_674_int = -1; // 0x4ff PushI
	var_675_int = 22707; // 0x500 PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0x501 TObjFunc
	goto Label_1286; // 0x503 Jump
}


func_5047()
{
	var_726_string = "oob10Starshina1"; // 0x13b8 PushS
	var_727_int = 1; // 0x13b9 PushI
	SetVariable(var_726_string, var_727_int); // 0x13ba Func
	return 0; // 0x13bc Return
}


func_5307(var_664_bool)
{
	var_666_int = 0; var_667_string = ""; // 0x14bc PushV
	var_667_string = "oob9Starshina2"; // 0x14bd MovS
	func_4791(var_666_int, var_667_string); // 0x14be NEW_2
	var_668_int = 0; // 0x14c0 PushI
	var_669_bool = var_666_int == var_668_int; // 0x14c1 Eq
	if(var_669_bool == 0) goto Label_5317; // 0x14c2 JumpB
	var_664_bool = 1; // 0x14c3 MovB
	return 0; // 0x14c4 Return
	
Label_5317:
	var_664_bool = 0; // 0x14c5 MovB
	return 0; // 0x14c6 Return
}


func_4796(var_96_string, var_97_bool)
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x12bc PushV
	FindActor(var_99_object, var_96_string); // 0x12bd Func
	var_100_bool = var_99_object == 0; // 0x12bf Not
	if(var_100_bool == 0) goto Label_4808; // 0x12c0 JumpB
	var_101_string = "Door "; // 0x12c1 PushS
	var_102_int = var_101_string + var_96_string; // 0x12c2 Add
	var_103_string = " not found"; // 0x12c3 PushS
	var_104_int = var_102_int + var_103_string; // 0x12c4 Add
	Trace(var_104_int); // 0x12c5 Func
	goto Label_4815; // 0x12c7 Jump
	
Label_4815:
	return 2; // 0x12cf Return
	
Label_4808:
	var_105_bool = var_97_bool; // 0x12c8 Push
	if(var_105_bool == 0) goto Label_4812; // 0x12c9 JumpB
	Close(); // 0x12ca ObjFunc
	
Label_4812:
	var_106_string = "locked"; // 0x12cc PushS
	SetProperty(var_106_string, var_97_bool); // 0x12cd ObjFunc
}


func_5564()
{
	var_87_object = Obj(); var_88_object = Obj(); // 0x15bc PushV
	var_89_int = 291; // 0x15bd PushI
	var_90_int = 1; // 0x15be PushI
	var_91_int = 521462; // 0x15bf PushI
	CreateDiaryEntry(var_88_object, var_89_int, var_90_int, var_91_int); // 0x15c0 Func
	var_92_bool = 0; var_93_object = Obj(); var_94_int = 0; // 0x15c2 PushV
	var_93_object = var_88_object; // 0x15c3 Mov
	var_94_int = 284; // 0x15c4 MovI
	func_5642(var_92_bool, var_93_object, var_94_int); // 0x15c5 NEW_2
	return 2; // 0x15c7 Return
}


func_5053()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x13bd PushV
	var_56_string = "b10q01"; // 0x13be PushS
	var_57_int = 2; // 0x13bf PushI
	SetVariable(var_56_string, var_57_int); // 0x13c0 Func
	var_58_object = Obj(); // 0x13c2 PushV
	func_5687(var_58_object); // 0x13c3 NEW_2
	var_55_object = var_58_object; // 0x13c4 Mov
	var_65_string = "b10q01StarshinaGotoKurgan"; // 0x13c6 PushS
	var_66_string = "pt_map_kurgan"; // 0x13c7 PushS
	var_67_int = 1; // 0x13c8 PushI
	var_68_int = 531553; // 0x13c9 PushI
	var_69_float = 0; // 0x13ca PushV
	func_4880(var_69_float); // 0x13cb NEW_2
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x13cd ObjFunc
	func_5512(); // 0x13d0 NEW_2
	var_95_bool = 0; var_96_string = ""; var_97_string = ""; // 0x13d2 PushV
	var_96_string = "quest_b10_01"; // 0x13d3 MovS
	var_97_string = "usable_stone"; // 0x13d4 MovS
	func_4868(var_95_bool, var_96_string, var_97_string); // 0x13d5 NEW_2
	var_101_string = "quest_b10_01_effect.bin"; // 0x13d7 PushS
	ApplyEffect(var_101_string); // 0x13d8 ObjFunc
	return 2; // 0x13da Return
}


func_5319(var_712_bool)
{
	var_714_int = 0; var_715_string = ""; // 0x14c8 PushV
	var_715_string = "oob10Starshina1"; // 0x14c9 MovS
	func_4791(var_714_int, var_715_string); // 0x14ca NEW_2
	var_716_int = 0; // 0x14cc PushI
	var_717_bool = var_714_int == var_716_int; // 0x14cd Eq
	if(var_717_bool == 0) goto Label_5329; // 0x14ce JumpB
	var_712_bool = 1; // 0x14cf MovB
	return 0; // 0x14d0 Return
	
Label_5329:
	var_712_bool = 0; // 0x14d1 MovB
	return 0; // 0x14d2 Return
}


func_5577()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x15c9 PushV
	var_58_int = 289; // 0x15ca PushI
	var_59_int = 1; // 0x15cb PushI
	var_60_int = 521460; // 0x15cc PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x15cd Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x15cf PushV
	var_62_object = var_57_object; // 0x15d0 Mov
	var_63_int = 284; // 0x15d1 MovI
	func_5642(var_61_bool, var_62_object, var_63_int); // 0x15d2 NEW_2
	return 2; // 0x15d4 Return
}


func_4817(var_102_int, var_103_int)
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x12d1 PushV
	CreateIntVector(var_105_object); // 0x12d2 Func
	add(var_102_int); // 0x12d4 ObjFunc
	add(var_103_int); // 0x12d6 ObjFunc
	var_106_int = 3; // 0x12d8 PushI
	SendWorldWndMessage(var_106_int, var_105_object); // 0x12d9 Func
	return 2; // 0x12db Return
}


func_5331(var_776_bool)
{
	var_778_int = 0; var_779_string = ""; // 0x14d4 PushV
	var_779_string = "b10q01Butchers"; // 0x14d5 MovS
	func_4791(var_778_int, var_779_string); // 0x14d6 NEW_2
	var_780_int = 3; // 0x14d8 PushI
	var_781_bool = var_778_int == var_780_int; // 0x14d9 Eq
	if(var_781_bool == 0) goto Label_5341; // 0x14da JumpB
	var_776_bool = 1; // 0x14db MovB
	return 0; // 0x14dc Return
	
Label_5341:
	var_776_bool = 0; // 0x14dd MovB
	return 0; // 0x14de Return
}


func_3540(var_2_object, var_254_string)
{
	var_255_bool = 0; // 0xdd5 PushV
	func_4951(var_255_bool); // 0xdd6 NEW_2
	var_256_bool = var_255_bool == 0; // 0xdd8 Not
	if(var_256_bool == 0) goto Label_3547; // 0xdd9 JumpB
	return 0; // 0xdda Return
	
Label_3547:
	var_257_bool = var_254_string == var_2_object; // 0xddb Eq
	if(var_257_bool == 0) goto Label_3550; // 0xddc JumpB
	return 0; // 0xddd Return
	
Label_3550:
	var_258_string = ""; var_259_bool = 0; // 0xdde PushV
	var_258_string = var_254_string; // 0xddf Mov
	var_260_string = ""; // 0xde0 PushS
	var_261_bool = var_254_string == var_260_string; // 0xde1 Eq
	if(var_261_bool == 0) goto Label_3557; // 0xde2 JumpB
	var_259_bool = 0; // 0xde3 MovB
	goto Label_3558; // 0xde4 Jump
	
Label_3558:
	func_4738(var_258_string, var_259_bool); // 0xde6 NEW_2
	var_2_object = var_254_string; // 0xde8 TMov
	return 0; // 0xde9 Return
	
Label_3557:
	var_259_bool = 1; // 0xde5 MovB
}


func_4566()
{
	var_298_bool = 0; var_299_bool = 0; // 0x11d6 PushV
	var_300_bool = 1; // 0x11d7 PushB
	CameraSwitchToNormal(var_300_bool); // 0x11d8 Func
	var_301_bool = 0; // 0x11da PushV
	func_4951(var_301_bool); // 0x11db NEW_2
	if(var_301_bool == 0) goto Label_4575; // 0x11dd JumpB
	goto Label_4583; // 0x11de Jump
	
Label_4583:
	return 2; // 0x11e7 Return
	
Label_4575:
	var_302_string = "head"; // 0x11df PushS
	HasAnimationTrack(var_299_bool, var_302_string); // 0x11e0 Func
	var_303_bool = var_299_bool; // 0x11e2 Push
	if(var_303_bool == 0) goto Label_4583; // 0x11e3 JumpB
	var_304_string = "head"; // 0x11e4 PushS
	UnlookAsync(var_304_string); // 0x11e5 Func
}


func_5590()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x15d6 PushV
	var_58_int = 297; // 0x15d7 PushI
	var_59_int = 1; // 0x15d8 PushI
	var_60_int = 521612; // 0x15d9 PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x15da Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x15dc PushV
	var_62_object = var_57_object; // 0x15dd Mov
	var_63_int = -1; // 0x15de MovI
	func_5642(var_61_bool, var_62_object, var_63_int); // 0x15df NEW_2
	return 2; // 0x15e1 Return
}


func_5084()
{
	var_138_string = "b10q01"; // 0x13dd PushS
	var_139_int = 3; // 0x13de PushI
	SetVariable(var_138_string, var_139_int); // 0x13df Func
	func_5499(); // 0x13e2 NEW_2
	return 0; // 0x13e4 Return
}


func_4829(var_92_object, var_93_int)
{
	var_94_int = 0; var_95_int = 0; var_96_bool = 0; var_97_int = 0; var_98_int = 0; var_99_bool = 0; // 0x12dd PushV
	GetItemID(var_97_int); // 0x12de ObjFunc
	var_100_string = "Category"; // 0x12e0 PushS
	GetInvItemProperty(var_98_int, var_97_int, var_100_string); // 0x12e1 Func
	AddItem(var_99_bool, var_92_object, var_98_int, var_93_int); // 0x12e3 ObjFunc
	var_101_bool = var_99_bool == 0; // 0x12e5 Not
	if(var_101_bool == 0) goto Label_4842; // 0x12e6 JumpB
	DropItems(var_92_object, var_93_int); // 0x12e7 ObjFunc
	goto Label_4847; // 0x12e9 Jump
	
Label_4847:
	return 6; // 0x12ef Return
	
Label_4842:
	var_102_int = 0; var_103_int = 0; // 0x12ea PushV
	var_102_int = var_97_int; // 0x12eb Mov
	var_103_int = var_93_int; // 0x12ec Mov
	func_4817(var_102_int, var_103_int); // 0x12ed NEW_2
}


func_5343(var_761_bool)
{
	var_763_bool = 0; // 0x14e0 PushV
	var_763_bool = 1; // 0x14e1 MovB
	var_764_int = 0; var_765_string = ""; // 0x14e2 PushV
	var_765_string = "b10q01Butchers"; // 0x14e3 MovS
	func_4791(var_764_int, var_765_string); // 0x14e4 NEW_2
	var_766_int = 1; // 0x14e6 PushI
	var_767_bool = var_764_int == var_766_int; // 0x14e7 Eq
	if(var_767_bool == 0) goto Label_5361; // 0x14e8 JumpB
	var_768_int = 0; var_769_string = ""; // 0x14e9 PushV
	var_769_string = "b10q01Butchers"; // 0x14ea MovS
	func_4791(var_768_int, var_769_string); // 0x14eb NEW_2
	var_770_int = 2; // 0x14ed PushI
	var_771_bool = var_768_int == var_770_int; // 0x14ee Eq
	if(var_771_bool == 0) goto Label_5361; // 0x14ef JumpB
	var_763_bool = 0; // 0x14f0 MovB
	
Label_5361:
	if(var_763_bool == 0) goto Label_5364; // 0x14f1 JumpB
	var_761_bool = 1; // 0x14f2 MovB
	return 0; // 0x14f3 Return
	
Label_5364:
	var_761_bool = 0; // 0x14f4 MovB
	return 0; // 0x14f5 Return
}


func_3807(var_0_object, var_365_int, var_366_object)
{
	var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0; var_372_object = Obj(); var_373_bool = 0; var_374_int = 0; var_375_bool = 0; // 0xedf PushV
	var_0_object = var_366_object; // 0xee0 TMov
	var_376_bool = 0; var_377_object = Obj(); var_378_float = 0; // 0xee1 PushV
	var_377_object = var_366_object; // 0xee2 Mov
	var_378_float = 130.0; // 0xee3 MovF
	func_4497(var_377_object, var_378_float); // 0xee4 NEW_2
	var_379_bool = var_376_bool == 0; // 0xee6 Not
	if(var_379_bool == 0) goto Label_3818; // 0xee7 JumpB
	var_365_int = -2; // 0xee8 MovI
	return 8; // 0xee9 Return
	
Label_3818:
	CreateDialog(var_372_object); // 0xeea Func
	var_380_int = 0; // 0xeec PushV
	func_4945(var_380_int); // 0xeed NEW_2
	SetNPCName(var_380_int); // 0xeef ObjFunc
	var_381_int = 0; // 0xef1 PushV
	func_4943(var_381_int); // 0xef2 NEW_2
	SetNPCDescription(var_381_int); // 0xef4 ObjFunc
	var_382_string = ""; // 0xef6 PushV
	func_4947(var_382_string); // 0xef7 NEW_2
	SetPhoto(var_382_string); // 0xef9 ObjFunc
	var_383_string = ""; // 0xefb PushV
	func_4949(var_383_string); // 0xefc NEW_2
	SetPhoto2(var_383_string); // 0xefe ObjFunc
	var_384_int = 0; // 0xf00 PushV
	func_5737(var_384_int); // 0xf01 NEW_2
	SetPlayerName(var_384_int); // 0xf03 ObjFunc
	var_374_int = -1; // 0xf05 MovI
	IsOverrideActive(var_373_bool); // 0xf06 Func
	var_385_bool = var_373_bool; // 0xf08 Push
	if(var_385_bool == 0) goto Label_3852; // 0xf09 JumpB
	var_365_int = -2; // 0xf0a MovI
	return 8; // 0xf0b Return
	
Label_3852:
	DoDialog(var_372_object); // 0xf0c Func
	var_386_bool = 0; var_387_object = Obj(); // 0xf0e PushV
	var_388_object = Obj(); // 0xf0f PushV
	func_4775(var_388_object); // 0xf10 NEW_2
	var_387_object = var_388_object; // 0xf11 Mov
	func_4584(var_386_bool, var_387_object); // 0xf13 NEW_2
	var_389_object = Obj(); var_390_object = Obj(); // 0xf15 PushV
	var_389_object = var_366_object; // 0xf16 Mov
	var_390_object = var_372_object; // 0xf17 Mov
	TaskCall(15); // 0xf18 TaskCall
	func_3888(var_391_object, var_392_object, var_393_string, var_394_bool, var_389_object, var_390_object); // 0xf19 NEW_2
	TaskReturn(); // 0xf1a TaskReturn
	IsDialogEnd(var_375_bool); // 0xf1c ObjFunc
	
Label_3870:
	var_419_bool = var_375_bool == 0; // 0xf1e Not
	if(var_419_bool == 0) goto Label_3877; // 0xf1f JumpB
	sync(); // 0xf20 Func
	IsDialogEnd(var_375_bool); // 0xf22 ObjFunc
	goto Label_3870; // 0xf24 Jump
	
Label_3877:
	var_420_object = Obj(); // 0xf25 PushV
	var_420_object = var_366_object; // 0xf26 Mov
	func_4566(); // 0xf27 NEW_2
	StopDialog(var_372_object); // 0xf29 Func
	GetReturnValue(var_374_int); // 0xf2b ObjFunc
	var_365_int = var_374_int; // 0xf2d Mov
	return 8; // 0xf2e Return
}


func_2017(var_2_object, var_728_string)
{
	var_729_bool = 0; // 0x7e2 PushV
	func_4951(var_729_bool); // 0x7e3 NEW_2
	var_730_bool = var_729_bool == 0; // 0x7e5 Not
	if(var_730_bool == 0) goto Label_2024; // 0x7e6 JumpB
	return 0; // 0x7e7 Return
	
Label_2024:
	var_731_bool = var_728_string == var_2_object; // 0x7e8 Eq
	if(var_731_bool == 0) goto Label_2027; // 0x7e9 JumpB
	return 0; // 0x7ea Return
	
Label_2027:
	var_732_string = ""; var_733_bool = 0; // 0x7eb PushV
	var_732_string = var_728_string; // 0x7ec Mov
	var_734_string = ""; // 0x7ed PushS
	var_735_bool = var_728_string == var_734_string; // 0x7ee Eq
	if(var_735_bool == 0) goto Label_2034; // 0x7ef JumpB
	var_733_bool = 0; // 0x7f0 MovB
	goto Label_2035; // 0x7f1 Jump
	
Label_2035:
	func_4738(var_732_string, var_733_bool); // 0x7f3 NEW_2
	var_2_object = var_728_string; // 0x7f5 TMov
	return 0; // 0x7f6 Return
	
Label_2034:
	var_733_bool = 1; // 0x7f2 MovB
}


func_5603()
{
	var_115_object = Obj(); var_116_object = Obj(); // 0x15e3 PushV
	var_117_int = 304; // 0x15e4 PushI
	var_118_int = 1; // 0x15e5 PushI
	var_119_int = 521619; // 0x15e6 PushI
	CreateDiaryEntry(var_116_object, var_117_int, var_118_int, var_119_int); // 0x15e7 Func
	var_120_bool = 0; var_121_object = Obj(); var_122_int = 0; // 0x15e9 PushV
	var_121_object = var_116_object; // 0x15ea Mov
	var_122_int = 297; // 0x15eb MovI
	func_5642(var_120_bool, var_121_object, var_122_int); // 0x15ec NEW_2
	return 2; // 0x15ee Return
}


func_5093()
{
	var_837_string = "oob11Starshina1"; // 0x13e6 PushS
	var_838_int = 1; // 0x13e7 PushI
	SetVariable(var_837_string, var_838_int); // 0x13e8 Func
	return 0; // 0x13ea Return
}


func_4584(var_152_bool, var_153_object)
{
	var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; // 0x11e8 PushV
	var_161_string = "voice_common"; // 0x11e9 PushS
	GetVariable(var_161_string, var_159_int); // 0x11ea Func
	var_162_int = var_159_int; // 0x11ec Push
	if(var_162_int == 0) goto Label_4622; // 0x11ed JumpB
	var_163_bool = 0; var_164_object = Obj(); // 0x11ee PushV
	var_164_object = var_153_object; // 0x11ef Mov
	func_4642(var_164_object); // 0x11f0 NEW_2
	var_193_bool = var_163_bool == 0; // 0x11f2 Not
	if(var_193_bool == 0) goto Label_4604; // 0x11f3 JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x11f4 PushV
	var_195_object = var_153_object; // 0x11f5 Mov
	func_4679(var_195_object); // 0x11f6 NEW_2
	var_229_bool = var_194_bool == 0; // 0x11f8 Not
	if(var_229_bool == 0) goto Label_4604; // 0x11f9 JumpB
	var_152_bool = 0; // 0x11fa MovB
	return 4; // 0x11fb Return
	
Label_4604:
	var_230_int = 2; // 0x11fc PushI
	irand(var_160_int, var_230_int); // 0x11fd Func
	var_231_int = var_160_int; // 0x11ff Push
	if(var_231_int == 0) goto Label_4617; // 0x1200 JumpB
	var_232_string = "voice_common"; // 0x1201 PushS
	var_233_int = 1; // 0x1202 PushI
	var_234_int = var_159_int + var_233_int; // 0x1203 Add
	var_235_int = 3; // 0x1204 PushI
	var_236_int = var_234_int / var_235_int; // 0x1205 Mod
	SetVariable(var_232_string, var_236_int); // 0x1206 Func
	goto Label_4621; // 0x1208 Jump
	
Label_4621:
	goto Label_4640; // 0x120d Jump
	
Label_4640:
	var_152_bool = 1; // 0x1220 MovB
	return 4; // 0x1221 Return
	
Label_4617:
	var_237_string = "voice_common"; // 0x1209 PushS
	var_238_int = 0; // 0x120a PushI
	SetVariable(var_237_string, var_238_int); // 0x120b Func
	
Label_4622:
	var_239_bool = 0; var_240_object = Obj(); // 0x120e PushV
	var_240_object = var_153_object; // 0x120f Mov
	func_4679(var_240_object); // 0x1210 NEW_2
	var_241_bool = var_239_bool == 0; // 0x1212 Not
	if(var_241_bool == 0) goto Label_4636; // 0x1213 JumpB
	var_242_bool = 0; var_243_object = Obj(); // 0x1214 PushV
	var_243_object = var_153_object; // 0x1215 Mov
	func_4642(var_243_object); // 0x1216 NEW_2
	var_244_bool = var_242_bool == 0; // 0x1218 Not
	if(var_244_bool == 0) goto Label_4636; // 0x1219 JumpB
	var_152_bool = 0; // 0x121a MovB
	return 4; // 0x121b Return
	
Label_4636:
	var_245_string = "voice_common"; // 0x121c PushS
	var_246_int = 1; // 0x121d PushI
	SetVariable(var_245_string, var_246_int); // 0x121e Func
}


func_5099()
{
	var_54_string = "b11q01"; // 0x13ec PushS
	var_55_int = 1; // 0x13ed PushI
	SetVariable(var_54_string, var_55_int); // 0x13ee Func
	func_5525(); // 0x13f1 NEW_2
	func_5538(); // 0x13f4 NEW_2
	var_87_bool = 0; var_88_string = ""; var_89_string = ""; // 0x13f6 PushV
	var_88_string = "quest_b11_01"; // 0x13f7 MovS
	var_89_string = "open_shaft"; // 0x13f8 MovS
	func_4868(var_87_bool, var_88_string, var_89_string); // 0x13f9 NEW_2
	return 0; // 0x13fb Return
}


func_4848(var_86_object, var_87_string, var_88_int)
{
	var_89_object = Obj(); var_90_object = Obj(); // 0x12f0 PushV
	CreateInvItem(var_90_object); // 0x12f1 Func
	SetItemName(var_87_string); // 0x12f3 ObjFunc
	var_91_object = Obj(); var_92_object = Obj(); var_93_int = 0; // 0x12f5 PushV
	var_91_object = var_86_object; // 0x12f6 Mov
	var_92_object = var_90_object; // 0x12f7 Mov
	var_93_int = var_88_int; // 0x12f8 Mov
	func_4829(var_92_object, var_93_int); // 0x12f9 NEW_2
	return 2; // 0x12fb Return
}


func_5616()
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x15f0 PushV
	var_81_int = 298; // 0x15f1 PushI
	var_82_int = 1; // 0x15f2 PushI
	var_83_int = 521613; // 0x15f3 PushI
	CreateDiaryEntry(var_80_object, var_81_int, var_82_int, var_83_int); // 0x15f4 Func
	var_84_bool = 0; var_85_object = Obj(); var_86_int = 0; // 0x15f6 PushV
	var_85_object = var_80_object; // 0x15f7 Mov
	var_86_int = 297; // 0x15f8 MovI
	func_5642(var_84_bool, var_85_object, var_86_int); // 0x15f9 NEW_2
	return 2; // 0x15fb Return
}


func_2802(var_2_object, var_839_string)
{
	var_840_bool = 0; // 0xaf3 PushV
	func_4951(var_840_bool); // 0xaf4 NEW_2
	var_841_bool = var_840_bool == 0; // 0xaf6 Not
	if(var_841_bool == 0) goto Label_2809; // 0xaf7 JumpB
	return 0; // 0xaf8 Return
	
Label_2809:
	var_842_bool = var_839_string == var_2_object; // 0xaf9 Eq
	if(var_842_bool == 0) goto Label_2812; // 0xafa JumpB
	return 0; // 0xafb Return
	
Label_2812:
	var_843_string = ""; var_844_bool = 0; // 0xafc PushV
	var_843_string = var_839_string; // 0xafd Mov
	var_845_string = ""; // 0xafe PushS
	var_846_bool = var_839_string == var_845_string; // 0xaff Eq
	if(var_846_bool == 0) goto Label_2819; // 0xb00 JumpB
	var_844_bool = 0; // 0xb01 MovB
	goto Label_2820; // 0xb02 Jump
	
Label_2820:
	func_4738(var_843_string, var_844_bool); // 0xb04 NEW_2
	var_2_object = var_839_string; // 0xb06 TMov
	return 0; // 0xb07 Return
	
Label_2819:
	var_844_bool = 1; // 0xb03 MovB
}


func_5366(var_718_bool)
{
	var_720_int = 0; var_721_string = ""; // 0x14f7 PushV
	var_721_string = "b10q01"; // 0x14f8 MovS
	func_4791(var_720_int, var_721_string); // 0x14f9 NEW_2
	var_722_int = 1; // 0x14fb PushI
	var_723_bool = var_720_int == var_722_int; // 0x14fc Eq
	if(var_723_bool == 0) goto Label_5376; // 0x14fd JumpB
	var_718_bool = 1; // 0x14fe MovB
	return 0; // 0x14ff Return
	
Label_5376:
	var_718_bool = 0; // 0x1500 MovB
	return 0; // 0x1501 Return
}


func_4091(var_0_object, var_1_object, var_2_object, var_3_string, var_934_object, var_935_object)
{
	var_0_object = var_935_object; // 0xffc TMov
	var_1_object = var_934_object; // 0xffd TMov
	var_3_string = 0; // 0xffe TMovB
	var_940_int = 1; // 0xfff PushI
	if(var_940_int == 0) goto Label_4119; // 0x1000 JumpB
	var_941_string = ""; // 0x1001 PushV
	var_941_string = "Neutral"; // 0x1002 MovS
	func_4149(var_935_object, var_941_string); // 0x1003 NEW_2
	var_949_int = 540554; // 0x1005 PushI
	SetMessage(var_949_int); // 0x1006 TObjFunc
	ClearReplies(); // 0x1008 TObjFunc
	var_950_int = 540555; // 0x100a PushI
	var_951_int = -1; // 0x100b PushI
	var_952_int = 42564; // 0x100c PushI
	AddReply(var_950_int, var_951_int, var_952_int); // 0x100d TObjFunc
	var_953_int = 540794; // 0x100f PushI
	var_954_int = -1; // 0x1010 PushI
	var_955_int = 42843; // 0x1011 PushI
	AddReply(var_953_int, var_954_int, var_955_int); // 0x1012 TObjFunc
	goto Label_4119; // 0x1014 Jump
	
Label_4119:
	var_956_bool = 0; // 0x1017 PushV
	func_4951(var_956_bool); // 0x1018 NEW_2
	if(var_956_bool == 0) goto Label_4134; // 0x101a JumpB
	
Label_4123:
	lshWaitForAnimEnd(); // 0x101b Func
	var_957_string = var_3_string; // 0x101d PushT
	if(var_957_string == 0) goto Label_4128; // 0x101e JumpB
	goto Label_4133; // 0x101f Jump
	
Label_4133:
	goto Label_4148; // 0x1025 Jump
	
Label_4148:
	return 0; // 0x1034 Return
	
Label_4128:
	var_958_string = ""; // 0x1020 PushV
	var_958_string = var_2_object; // 0x1021 MovT
	func_4722(var_958_string); // 0x1022 NEW_2
	goto Label_4123; // 0x1024 Jump
	
Label_4134:
	var_959_string = "all"; // 0x1026 PushS
	var_960_string = "idle"; // 0x1027 PushS
	PlayAnimation(var_959_string, var_960_string); // 0x1028 Func
	
Label_4138:
	WaitForAnimEnd(); // 0x102a Func
	var_961_string = var_3_string; // 0x102c PushT
	if(var_961_string == 0) goto Label_4143; // 0x102d JumpB
	goto Label_4148; // 0x102e Jump
	
Label_4143:
	var_962_string = "all"; // 0x102f PushS
	var_963_string = "idle"; // 0x1030 PushS
	PlayAnimation(var_962_string, var_963_string); // 0x1031 Func
	goto Label_4138; // 0x1033 Jump
}


func_5116()
{
	var_149_bool = 0; var_150_string = ""; var_151_string = ""; // 0x13fd PushV
	var_150_string = "quest_b11_01"; // 0x13fe MovS
	var_151_string = "starshina_fight"; // 0x13ff MovS
	func_4868(var_149_bool, var_150_string, var_151_string); // 0x1400 NEW_2
	return 0; // 0x1402 Return
}


func_4861(var_566_bool, var_568_string)
{
	var_569_int = 0; var_570_bool = 0; var_571_int = 0; var_572_bool = 0; // 0x12fd PushV
	GetInvItemByName(var_571_int, var_568_string); // 0x12fe Func
	HasItem(var_571_int, var_572_bool); // 0x1300 ObjFunc
	var_566_bool = var_572_bool; // 0x1302 Mov
	return 4; // 0x1303 Return
}


