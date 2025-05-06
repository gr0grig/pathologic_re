task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xb5 PushI
	if(var_23_int == 0) goto Label_425; // 0xb6 JumpB
	func_1740(); // 0xb8 NEW_2
	var_25_int = 26614; // 0xba PushI
	var_26_bool = var_22_cvector == var_25_int; // 0xbb Eq
	if(var_26_bool == 0) goto Label_194; // 0xbc JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0xbd PushV
	var_27_object = var_1_object; // 0xbe MovT
	var_28_object = var_0_object; // 0xbf MovT
	func_1922(); // 0xc0 NEW_2
	
Label_194:
	var_31_int = 26616; // 0xc2 PushI
	var_32_bool = var_22_cvector == var_31_int; // 0xc3 Eq
	if(var_32_bool == 0) goto Label_202; // 0xc4 JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0xc5 PushV
	var_33_object = var_1_object; // 0xc6 MovT
	var_34_object = var_0_object; // 0xc7 MovT
	func_1904(var_34_object); // 0xc8 NEW_2
	
Label_202:
	var_73_int = 44497; // 0xca PushI
	var_74_bool = var_22_cvector == var_73_int; // 0xcb Eq
	if(var_74_bool == 0) goto Label_210; // 0xcc JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0xcd PushV
	var_75_object = var_1_object; // 0xce MovT
	var_76_object = var_0_object; // 0xcf MovT
	func_1911(var_76_object); // 0xd0 NEW_2
	
Label_210:
	var_99_int = 26613; // 0xd2 PushI
	var_100_bool = var_21_bool == var_99_int; // 0xd3 Eq
	if(var_100_bool == 0) goto Label_252; // 0xd4 JumpB
	var_101_string = ""; // 0xd5 PushV
	var_101_string = "Neutral"; // 0xd6 MovS
	func_158(var_22_cvector, var_101_string); // 0xd7 NEW_2
	var_118_int = 525245; // 0xd9 PushI
	SetMessage(var_118_int); // 0xda TObjFunc
	ClearReplies(); // 0xdc TObjFunc
	var_119_bool = 0; // 0xde PushV
	var_119_bool = 0; // 0xdf MovB
	var_120_bool = 0; var_121_object = Obj(); // 0xe0 PushV
	var_121_object = var_1_object; // 0xe1 MovT
	func_1928(var_121_object); // 0xe2 NEW_2
	if(var_120_bool == 0) goto Label_235; // 0xe4 JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0xe5 PushV
	var_129_object = var_1_object; // 0xe6 MovT
	func_1940(var_129_object); // 0xe7 NEW_2
	if(var_128_bool == 0) goto Label_235; // 0xe9 JumpB
	var_119_bool = 1; // 0xea MovB
	
Label_235:
	if(var_119_bool == 0) goto Label_241; // 0xeb JumpB
	var_134_int = 525246; // 0xec PushI
	var_135_int = 44478; // 0xed PushI
	var_136_int = 26614; // 0xee PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0xef TObjFunc
	
Label_241:
	var_137_int = 525249; // 0xf1 PushI
	var_138_int = -1; // 0xf2 PushI
	var_139_int = 26617; // 0xf3 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xf4 TObjFunc
	var_140_int = 529151; // 0xf6 PushI
	var_141_int = -1; // 0xf7 PushI
	var_142_int = 30598; // 0xf8 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0xf9 TObjFunc
	return 0; // 0xfb Return
	
Label_252:
	var_143_int = 44478; // 0xfc PushI
	var_144_bool = var_21_bool == var_143_int; // 0xfd Eq
	if(var_144_bool == 0) goto Label_275; // 0xfe JumpB
	var_145_string = ""; // 0xff PushV
	var_145_string = "Distrust"; // 0x100 MovS
	func_158(var_22_cvector, var_145_string); // 0x101 NEW_2
	var_146_int = 542162; // 0x103 PushI
	SetMessage(var_146_int); // 0x104 TObjFunc
	ClearReplies(); // 0x106 TObjFunc
	var_147_int = 542163; // 0x108 PushI
	var_148_int = 30599; // 0x109 PushI
	var_149_int = 44479; // 0x10a PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x10b TObjFunc
	var_150_int = 542164; // 0x10d PushI
	var_151_int = 44481; // 0x10e PushI
	var_152_int = 44480; // 0x10f PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x110 TObjFunc
	return 0; // 0x112 Return
	
Label_275:
	var_153_int = 44481; // 0x113 PushI
	var_154_bool = var_21_bool == var_153_int; // 0x114 Eq
	if(var_154_bool == 0) goto Label_298; // 0x115 JumpB
	var_155_string = ""; // 0x116 PushV
	var_155_string = "Anger"; // 0x117 MovS
	func_158(var_22_cvector, var_155_string); // 0x118 NEW_2
	var_156_int = 542165; // 0x11a PushI
	SetMessage(var_156_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_157_int = 542169; // 0x11f PushI
	var_158_int = 30599; // 0x120 PushI
	var_159_int = 44485; // 0x121 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x122 TObjFunc
	var_160_int = 542170; // 0x124 PushI
	var_161_int = -1; // 0x125 PushI
	var_162_int = 44486; // 0x126 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_163_int = 30599; // 0x12a PushI
	var_164_bool = var_21_bool == var_163_int; // 0x12b Eq
	if(var_164_bool == 0) goto Label_321; // 0x12c JumpB
	var_165_string = ""; // 0x12d PushV
	var_165_string = "Distrust"; // 0x12e MovS
	func_158(var_22_cvector, var_165_string); // 0x12f NEW_2
	var_166_int = 529152; // 0x131 PushI
	SetMessage(var_166_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_167_int = 529153; // 0x136 PushI
	var_168_int = 30601; // 0x137 PushI
	var_169_int = 30600; // 0x138 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x139 TObjFunc
	var_170_int = 529155; // 0x13b PushI
	var_171_int = 30601; // 0x13c PushI
	var_172_int = 30602; // 0x13d PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x13e TObjFunc
	return 0; // 0x140 Return
	
Label_321:
	var_173_int = 30601; // 0x141 PushI
	var_174_bool = var_21_bool == var_173_int; // 0x142 Eq
	if(var_174_bool == 0) goto Label_344; // 0x143 JumpB
	var_175_string = ""; // 0x144 PushV
	var_175_string = "Anger"; // 0x145 MovS
	func_158(var_22_cvector, var_175_string); // 0x146 NEW_2
	var_176_int = 529154; // 0x148 PushI
	SetMessage(var_176_int); // 0x149 TObjFunc
	ClearReplies(); // 0x14b TObjFunc
	var_177_int = 529156; // 0x14d PushI
	var_178_int = 26615; // 0x14e PushI
	var_179_int = 30604; // 0x14f PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x150 TObjFunc
	var_180_int = 529157; // 0x152 PushI
	var_181_int = 44482; // 0x153 PushI
	var_182_int = 30605; // 0x154 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_183_int = 44482; // 0x158 PushI
	var_184_bool = var_21_bool == var_183_int; // 0x159 Eq
	if(var_184_bool == 0) goto Label_367; // 0x15a JumpB
	var_185_string = ""; // 0x15b PushV
	var_185_string = "Distrust"; // 0x15c MovS
	func_158(var_22_cvector, var_185_string); // 0x15d NEW_2
	var_186_int = 542166; // 0x15f PushI
	SetMessage(var_186_int); // 0x160 TObjFunc
	ClearReplies(); // 0x162 TObjFunc
	var_187_int = 542167; // 0x164 PushI
	var_188_int = 26615; // 0x165 PushI
	var_189_int = 44483; // 0x166 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x167 TObjFunc
	var_190_int = 542168; // 0x169 PushI
	var_191_int = 44494; // 0x16a PushI
	var_192_int = 44484; // 0x16b PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_193_int = 26615; // 0x16f PushI
	var_194_bool = var_21_bool == var_193_int; // 0x170 Eq
	if(var_194_bool == 0) goto Label_390; // 0x171 JumpB
	var_195_string = ""; // 0x172 PushV
	var_195_string = "Anger"; // 0x173 MovS
	func_158(var_22_cvector, var_195_string); // 0x174 NEW_2
	var_196_int = 525247; // 0x176 PushI
	SetMessage(var_196_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_197_int = 542171; // 0x17b PushI
	var_198_int = 44494; // 0x17c PushI
	var_199_int = 44488; // 0x17d PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x17e TObjFunc
	var_200_int = 542176; // 0x180 PushI
	var_201_int = 44494; // 0x181 PushI
	var_202_int = 44493; // 0x182 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_203_int = 44494; // 0x186 PushI
	var_204_bool = var_21_bool == var_203_int; // 0x187 Eq
	if(var_204_bool == 0) goto Label_413; // 0x188 JumpB
	var_205_string = ""; // 0x189 PushV
	var_205_string = "Repentance"; // 0x18a MovS
	func_158(var_22_cvector, var_205_string); // 0x18b NEW_2
	var_206_int = 542177; // 0x18d PushI
	SetMessage(var_206_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_207_int = 525248; // 0x192 PushI
	var_208_int = -1; // 0x193 PushI
	var_209_int = 26616; // 0x194 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x195 TObjFunc
	var_210_int = 542178; // 0x197 PushI
	var_211_int = -1; // 0x198 PushI
	var_212_int = 44497; // 0x199 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x19a TObjFunc
	return 0; // 0x19c Return
	
Label_413:
	var_3_string = 1; // 0x19d TMovB
	var_213_bool = 0; // 0x19e PushV
	func_1902(var_213_bool); // 0x19f NEW_2
	if(var_213_bool == 0) goto Label_421; // 0x1a1 JumpB
	lshStopAnimation(); // 0x1a2 Func
	goto Label_423; // 0x1a4 Jump
	
Label_423:
	return 0; // 0x1a7 Return
	
Label_421:
	StopAnimation(); // 0x1a5 Func
	
Label_425:
	return 0; // 0x1a9 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x24c PushI
	if(var_23_int == 0) goto Label_674; // 0x24d JumpB
	func_1740(); // 0x24f NEW_2
	var_25_int = 26824; // 0x251 PushI
	var_26_bool = var_21_bool == var_25_int; // 0x252 Eq
	if(var_26_bool == 0) goto Label_616; // 0x253 JumpB
	var_27_string = ""; // 0x254 PushV
	var_27_string = "Neutral"; // 0x255 MovS
	func_565(var_22_cvector, var_27_string); // 0x256 NEW_2
	var_44_int = 525468; // 0x258 PushI
	SetMessage(var_44_int); // 0x259 TObjFunc
	ClearReplies(); // 0x25b TObjFunc
	var_45_int = 525469; // 0x25d PushI
	var_46_int = 30746; // 0x25e PushI
	var_47_int = 26825; // 0x25f PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x260 TObjFunc
	var_48_int = 542158; // 0x262 PushI
	var_49_int = 44475; // 0x263 PushI
	var_50_int = 44474; // 0x264 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x265 TObjFunc
	return 0; // 0x267 Return
	
Label_616:
	var_51_int = 44475; // 0x268 PushI
	var_52_bool = var_21_bool == var_51_int; // 0x269 Eq
	if(var_52_bool == 0) goto Label_639; // 0x26a JumpB
	var_53_string = ""; // 0x26b PushV
	var_53_string = "Neutral"; // 0x26c MovS
	func_565(var_22_cvector, var_53_string); // 0x26d NEW_2
	var_54_int = 542159; // 0x26f PushI
	SetMessage(var_54_int); // 0x270 TObjFunc
	ClearReplies(); // 0x272 TObjFunc
	var_55_int = 542160; // 0x274 PushI
	var_56_int = -1; // 0x275 PushI
	var_57_int = 44476; // 0x276 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x277 TObjFunc
	var_58_int = 542161; // 0x279 PushI
	var_59_int = -1; // 0x27a PushI
	var_60_int = 44477; // 0x27b PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x27c TObjFunc
	return 0; // 0x27e Return
	
Label_639:
	var_61_int = 30746; // 0x27f PushI
	var_62_bool = var_21_bool == var_61_int; // 0x280 Eq
	if(var_62_bool == 0) goto Label_662; // 0x281 JumpB
	var_63_string = ""; // 0x282 PushV
	var_63_string = "Neutral"; // 0x283 MovS
	func_565(var_22_cvector, var_63_string); // 0x284 NEW_2
	var_64_int = 529292; // 0x286 PushI
	SetMessage(var_64_int); // 0x287 TObjFunc
	ClearReplies(); // 0x289 TObjFunc
	var_65_int = 529293; // 0x28b PushI
	var_66_int = -1; // 0x28c PushI
	var_67_int = 30747; // 0x28d PushI
	AddReply(var_65_int, var_66_int, var_67_int); // 0x28e TObjFunc
	var_68_int = 529294; // 0x290 PushI
	var_69_int = -1; // 0x291 PushI
	var_70_int = 30748; // 0x292 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x293 TObjFunc
	return 0; // 0x295 Return
	
Label_662:
	var_3_string = 1; // 0x296 TMovB
	var_71_bool = 0; // 0x297 PushV
	func_1902(var_71_bool); // 0x298 NEW_2
	if(var_71_bool == 0) goto Label_670; // 0x29a JumpB
	lshStopAnimation(); // 0x29b Func
	goto Label_672; // 0x29d Jump
	
Label_672:
	return 0; // 0x2a0 Return
	
Label_670:
	StopAnimation(); // 0x29e Func
	
Label_674:
	return 0; // 0x2a2 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x34a PushI
	if(var_23_int == 0) goto Label_933; // 0x34b JumpB
	func_1740(); // 0x34d NEW_2
	var_25_int = 36960; // 0x34f PushI
	var_26_bool = var_21_bool == var_25_int; // 0x350 Eq
	if(var_26_bool == 0) goto Label_875; // 0x351 JumpB
	var_27_string = ""; // 0x352 PushV
	var_27_string = "Neutral"; // 0x353 MovS
	func_819(var_22_cvector, var_27_string); // 0x354 NEW_2
	var_44_int = 535284; // 0x356 PushI
	SetMessage(var_44_int); // 0x357 TObjFunc
	ClearReplies(); // 0x359 TObjFunc
	var_45_int = 535285; // 0x35b PushI
	var_46_int = 36962; // 0x35c PushI
	var_47_int = 36961; // 0x35d PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x35e TObjFunc
	var_48_int = 535292; // 0x360 PushI
	var_49_int = -1; // 0x361 PushI
	var_50_int = 36968; // 0x362 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x363 TObjFunc
	var_51_int = 535293; // 0x365 PushI
	var_52_int = -1; // 0x366 PushI
	var_53_int = 36969; // 0x367 PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0x368 TObjFunc
	return 0; // 0x36a Return
	
Label_875:
	var_54_int = 36962; // 0x36b PushI
	var_55_bool = var_21_bool == var_54_int; // 0x36c Eq
	if(var_55_bool == 0) goto Label_898; // 0x36d JumpB
	var_56_string = ""; // 0x36e PushV
	var_56_string = "Neutral"; // 0x36f MovS
	func_819(var_22_cvector, var_56_string); // 0x370 NEW_2
	var_57_int = 535286; // 0x372 PushI
	SetMessage(var_57_int); // 0x373 TObjFunc
	ClearReplies(); // 0x375 TObjFunc
	var_58_int = 535287; // 0x377 PushI
	var_59_int = 36964; // 0x378 PushI
	var_60_int = 36963; // 0x379 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x37a TObjFunc
	var_61_int = 535291; // 0x37c PushI
	var_62_int = -1; // 0x37d PushI
	var_63_int = 36967; // 0x37e PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x37f TObjFunc
	return 0; // 0x381 Return
	
Label_898:
	var_64_int = 36964; // 0x382 PushI
	var_65_bool = var_21_bool == var_64_int; // 0x383 Eq
	if(var_65_bool == 0) goto Label_921; // 0x384 JumpB
	var_66_string = ""; // 0x385 PushV
	var_66_string = "Neutral"; // 0x386 MovS
	func_819(var_22_cvector, var_66_string); // 0x387 NEW_2
	var_67_int = 535288; // 0x389 PushI
	SetMessage(var_67_int); // 0x38a TObjFunc
	ClearReplies(); // 0x38c TObjFunc
	var_68_int = 535289; // 0x38e PushI
	var_69_int = -1; // 0x38f PushI
	var_70_int = 36965; // 0x390 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x391 TObjFunc
	var_71_int = 535290; // 0x393 PushI
	var_72_int = -1; // 0x394 PushI
	var_73_int = 36966; // 0x395 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x396 TObjFunc
	return 0; // 0x398 Return
	
Label_921:
	var_3_string = 1; // 0x399 TMovB
	var_74_bool = 0; // 0x39a PushV
	func_1902(var_74_bool); // 0x39b NEW_2
	if(var_74_bool == 0) goto Label_929; // 0x39d JumpB
	lshStopAnimation(); // 0x39e Func
	goto Label_931; // 0x3a0 Jump
	
Label_931:
	return 0; // 0x3a3 Return
	
Label_929:
	StopAnimation(); // 0x3a1 Func
	
Label_933:
	return 0; // 0x3a5 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x448 PushI
	if(var_23_int == 0) goto Label_1136; // 0x449 JumpB
	func_1740(); // 0x44b NEW_2
	var_25_int = 42554; // 0x44d PushI
	var_26_bool = var_21_int == var_25_int; // 0x44e Eq
	if(var_26_bool == 0) goto Label_1124; // 0x44f JumpB
	var_27_string = ""; // 0x450 PushV
	var_27_string = "Neutral"; // 0x451 MovS
	func_1073(var_22_cvector, var_27_string); // 0x452 NEW_2
	var_44_int = 540545; // 0x454 PushI
	SetMessage(var_44_int); // 0x455 TObjFunc
	ClearReplies(); // 0x457 TObjFunc
	var_45_int = 540546; // 0x459 PushI
	var_46_int = -1; // 0x45a PushI
	var_47_int = 42555; // 0x45b PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x45c TObjFunc
	var_48_int = 540798; // 0x45e PushI
	var_49_int = -1; // 0x45f PushI
	var_50_int = 42847; // 0x460 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x461 TObjFunc
	return 0; // 0x463 Return
	
Label_1124:
	var_3_string = 1; // 0x464 TMovB
	var_51_bool = 0; // 0x465 PushV
	func_1902(var_51_bool); // 0x466 NEW_2
	if(var_51_bool == 0) goto Label_1132; // 0x468 JumpB
	lshStopAnimation(); // 0x469 Func
	goto Label_1134; // 0x46b Jump
	
Label_1134:
	return 0; // 0x46e Return
	
Label_1132:
	StopAnimation(); // 0x46c Func
	
Label_1136:
	return 0; // 0x470 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x4be PushI
	var_23_bool = var_21_int == var_22_int; // 0x4bf Eq
	if(var_23_bool == 0) goto Label_1250; // 0x4c0 JumpB
	func_1209(); // 0x4c2 NEW_2
	var_25_bool = 0; // 0x4c4 PushV
	var_25_bool = 0; // 0x4c5 MovB
	var_26_bool = 0; // 0x4c6 PushV
	func_1464(var_26_bool); // 0x4c7 NEW_2
	if(var_26_bool == 0) goto Label_1231; // 0x4c9 JumpB
	var_29_bool = 0; // 0x4ca PushV
	func_1178(var_29_bool); // 0x4cb NEW_2
	if(var_29_bool == 0) goto Label_1231; // 0x4cd JumpB
	var_25_bool = 1; // 0x4ce MovB
	
Label_1231:
	if(var_25_bool == 0) goto Label_1244; // 0x4cf JumpB
	var_46_bool = 0; // 0x4d0 PushV
	func_1158(var_46_bool); // 0x4d1 NEW_2
	if(var_46_bool == 0) goto Label_1243; // 0x4d3 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x4d4 PushV
	var_67_object = Obj(); // 0x4d5 PushV
	func_1747(var_67_object); // 0x4d6 NEW_2
	var_66_object = var_67_object; // 0x4d7 Mov
	func_1614(var_66_object); // 0x4d9 NEW_2
	
Label_1243:
	goto Label_1250; // 0x4db Jump
	
Label_1250:
	return 0; // 0x4e2 Return
	
Label_1244:
	func_1173(var_21_int); // 0x4dd NEW_2
	func_1200(); // 0x4e0 NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1391(); // 0x4e4 NEW_2
	func_1209(); // 0x4e7 NEW_2
	lshStopSpeech(); // 0x4e9 Func
	lshStopAnimation(); // 0x4eb Func
	StopAsync(); // 0x4ed Func
	Hold(); // 0x4ef Func
	return 0; // 0x4f1 Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x4f2 Func
	func_1209(); // 0x4f5 NEW_2
	var_22_string = ""; // 0x4f7 PushV
	var_22_string = "Neutral"; // 0x4f8 MovS
	func_1694(var_22_string); // 0x4f9 NEW_2
	func_1200(); // 0x4fc NEW_2
	return 0; // 0x4fe Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x500 Push
	if(var_22_bool == 0) goto Label_1286; // 0x501 JumpB
	func_1200(); // 0x503 NEW_2
	goto Label_1290; // 0x505 Jump
	
Label_1290:
	return 0; // 0x50a Return
	
Label_1286:
	var_28_string = ""; // 0x506 PushV
	var_28_string = "Neutral"; // 0x507 MovS
	func_1694(var_28_string); // 0x508 NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x50b PushV
	IsOverrideActive(var_23_bool); // 0x50c Func
	var_24_bool = var_23_bool == 0; // 0x50e Not
	if(var_24_bool == 0) goto Label_1319; // 0x50f JumpB
	EventDisable(0); // 0x510 EventDisable
	func_1391(); // 0x512 NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x514 PushV
	var_26_object = var_21_object; // 0x515 Mov
	func_1455(var_26_object); // 0x516 NEW_2
	EventEnable(0); // 0x518 EventEnable
	var_39_object = Obj(); // 0x519 PushV
	var_39_object = var_21_object; // 0x51a Mov
	func_1969(var_39_object); // 0x51b NEW_2
	var_462_string = ""; // 0x51d PushV
	var_462_string = "Neutral"; // 0x51e MovS
	func_1694(var_462_string); // 0x51f NEW_2
	func_1209(); // 0x522 NEW_2
	func_1200(); // 0x525 NEW_2
	
Label_1319:
	return 2; // 0x527 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1]; // 0x471 PushGE
	var_21_bool = 0; // 0x472 MovB
	GlobalVars[1] = var_21_bool; // 0x473 PopGE
	func_1144(var_20_cvector); // 0x475 NEW_2
	return 0; // 0x477 Return
}


func_0(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0; // 0x0 PushV
	var_0_object = var_272_object; // 0x1 TMov
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0; // 0x2 PushV
	var_283_object = var_272_object; // 0x3 Mov
	var_284_float = 70.0; // 0x4 MovF
	func_1469(var_283_object, var_284_float); // 0x5 NEW_2
	var_285_bool = var_282_bool == 0; // 0x7 Not
	if(var_285_bool == 0) goto Label_11; // 0x8 JumpB
	var_271_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_278_object); // 0xb Func
	var_286_int = 0; // 0xd PushV
	func_1896(var_286_int); // 0xe NEW_2
	SetNPCName(var_286_int); // 0x10 ObjFunc
	var_287_int = 0; // 0x12 PushV
	func_1894(var_287_int); // 0x13 NEW_2
	SetNPCDescription(var_287_int); // 0x15 ObjFunc
	var_288_string = ""; // 0x17 PushV
	func_1898(var_288_string); // 0x18 NEW_2
	SetPhoto(var_288_string); // 0x1a ObjFunc
	var_289_string = ""; // 0x1c PushV
	func_1900(var_289_string); // 0x1d NEW_2
	SetPhoto2(var_289_string); // 0x1f ObjFunc
	var_290_int = 0; // 0x21 PushV
	func_1952(var_290_int); // 0x22 NEW_2
	SetPlayerName(var_290_int); // 0x24 ObjFunc
	var_280_int = -1; // 0x26 MovI
	IsOverrideActive(var_279_bool); // 0x27 Func
	var_291_bool = var_279_bool; // 0x29 Push
	if(var_291_bool == 0) goto Label_45; // 0x2a JumpB
	var_271_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_278_object); // 0x2d Func
	var_292_bool = 0; var_293_object = Obj(); // 0x2f PushV
	var_294_object = Obj(); // 0x30 PushV
	func_1747(var_294_object); // 0x31 NEW_2
	var_293_object = var_294_object; // 0x32 Mov
	func_1556(var_292_bool, var_293_object); // 0x34 NEW_2
	var_295_object = Obj(); var_296_object = Obj(); // 0x36 PushV
	var_295_object = var_272_object; // 0x37 Mov
	var_296_object = var_278_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_281_bool); // 0x3d ObjFunc
	
Label_63:
	var_343_bool = var_281_bool == 0; // 0x3f Not
	if(var_343_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_281_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_344_object = Obj(); // 0x46 PushV
	var_344_object = var_272_object; // 0x47 Mov
	func_1538(); // 0x48 NEW_2
	StopDialog(var_278_object); // 0x4a Func
	GetReturnValue(var_280_int); // 0x4c ObjFunc
	var_271_int = var_280_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1538()
{
	var_260_bool = 0; var_261_bool = 0; // 0x602 PushV
	var_262_bool = 1; // 0x603 PushB
	CameraSwitchToNormal(var_262_bool); // 0x604 Func
	var_263_bool = 0; // 0x606 PushV
	func_1902(var_263_bool); // 0x607 NEW_2
	if(var_263_bool == 0) goto Label_1547; // 0x609 JumpB
	goto Label_1555; // 0x60a Jump
	
Label_1555:
	return 2; // 0x613 Return
	
Label_1547:
	var_264_string = "head"; // 0x60b PushS
	HasAnimationTrack(var_261_bool, var_264_string); // 0x60c Func
	var_265_bool = var_261_bool; // 0x60e Push
	if(var_265_bool == 0) goto Label_1555; // 0x60f JumpB
	var_266_string = "head"; // 0x610 PushS
	UnlookAsync(var_266_string); // 0x611 Func
}


func_1922()
{
	var_29_string = "ook2BigVlad1"; // 0x783 PushS
	var_30_int = 1; // 0x784 PushI
	SetVariable(var_29_string, var_30_int); // 0x785 Func
	return 0; // 0x787 Return
}


func_1158(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x486 PushV
	var_49_string = "player"; // 0x487 PushS
	FindActor(var_48_object, var_49_string); // 0x488 Func
	var_50_bool = var_48_object == 0; // 0x48a Not
	if(var_50_bool == 0) goto Label_1166; // 0x48b JumpB
	var_46_bool = 0; // 0x48c MovB
	return 2; // 0x48d Return
	
Label_1166:
	var_51_bool = 0; var_52_object = Obj(); // 0x48e PushV
	var_52_object = var_48_object; // 0x48f Mov
	func_1455(var_52_object); // 0x490 NEW_2
	var_46_bool = var_51_bool; // 0x491 Mov
	return 2; // 0x493 Return
}


func_1928(var_312_bool)
{
	var_314_int = 0; var_315_string = ""; // 0x789 PushV
	var_315_string = "k2q01"; // 0x78a MovS
	func_1774(var_314_int, var_315_string); // 0x78b NEW_2
	var_318_int = 2; // 0x78d PushI
	var_319_bool = var_314_int == var_318_int; // 0x78e Eq
	if(var_319_bool == 0) goto Label_1938; // 0x78f JumpB
	var_312_bool = 1; // 0x790 MovB
	return 0; // 0x791 Return
	
Label_1938:
	var_312_bool = 0; // 0x792 MovB
	return 0; // 0x793 Return
}


func_1416(var_46_bool, var_47_object, var_48_string, var_49_float, var_50_float, var_51_float)
{
	var_52_float = 0; var_53_float = 0; // 0x588 PushV
	var_54_bool = 0; var_55_object = Obj(); var_56_string = ""; // 0x589 PushV
	var_55_object = var_47_object; // 0x58a Mov
	var_56_string = var_48_string; // 0x58b Mov
	func_1404(var_54_bool, var_55_object, var_56_string); // 0x58c NEW_2
	var_63_bool = var_54_bool == 0; // 0x58e Not
	if(var_63_bool == 0) goto Label_1426; // 0x58f JumpB
	var_46_bool = 0; // 0x590 MovB
	return 2; // 0x591 Return
	
Label_1426:
	GetProperty(var_48_string, var_53_float); // 0x592 ObjFunc
	var_64_float = 0; var_65_float = 0; var_66_float = 0; var_67_float = 0; // 0x594 PushV
	var_65_float = var_53_float + var_49_float; // 0x595 Add2
	var_66_float = var_50_float; // 0x596 Mov
	var_67_float = var_51_float; // 0x597 Mov
	func_1763(var_64_float, var_65_float, var_66_float, var_67_float); // 0x598 NEW_2
	SetProperty(var_48_string, var_64_float); // 0x59a ObjFunc
	var_46_bool = 1; // 0x59c MovB
	return 2; // 0x59d Return
}


func_1911(var_75_object)
{
	var_77_int = 0; var_78_int = 0; // 0x777 PushV
	var_79_int = 1000; // 0x778 PushI
	irand(var_78_int, var_79_int); // 0x779 Func
	var_80_object = Obj(); var_81_int = 0; // 0x77b PushV
	var_80_object = var_75_object; // 0x77c Mov
	var_82_int = 2000; // 0x77d PushI
	var_81_int = var_78_int + var_82_int; // 0x77e Add2
	func_1791(var_80_object, var_81_int); // 0x77f NEW_2
	return 2; // 0x781 Return
}


func_1810(var_35_bool, var_36_object, var_37_float)
{
	var_38_bool = var_36_object == 0; // 0x713 Not
	if(var_38_bool == 0) goto Label_1815; // 0x714 JumpB
	var_35_bool = 0; // 0x715 MovB
	return 0; // 0x716 Return
	
Label_1815:
	var_39_int = 0; // 0x717 PushI
	var_40_bool = var_37_float > var_39_int; // 0x718 GT
	if(var_40_bool == 0) goto Label_1822; // 0x719 JumpB
	var_41_int = 8; // 0x71a PushI
	SendWorldWndMessage(var_41_int); // 0x71b Func
	goto Label_1831; // 0x71d Jump
	
Label_1831:
	var_42_float = 0; // 0x727 PushV
	var_42_float = var_37_float; // 0x728 Mov
	func_1845(var_42_float); // 0x729 NEW_2
	var_46_bool = 0; var_47_object = Obj(); var_48_string = ""; var_49_float = 0; var_50_float = 0; var_51_float = 0; // 0x72b PushV
	var_47_object = var_36_object; // 0x72c Mov
	var_48_string = "reputation"; // 0x72d MovS
	var_49_float = var_37_float; // 0x72e Mov
	var_50_float = 0; // 0x72f MovI
	var_51_float = 1; // 0x730 MovI
	func_1416(var_46_bool, var_47_object, var_48_string, var_49_float, var_50_float, var_51_float); // 0x731 NEW_2
	var_35_bool = 1; // 0x733 MovB
	return 0; // 0x734 Return
	
Label_1822:
	var_70_int = 0; // 0x71e PushI
	var_71_bool = var_37_float < var_70_int; // 0x71f LT
	if(var_71_bool == 0) goto Label_1829; // 0x720 JumpB
	var_72_int = 9; // 0x721 PushI
	SendWorldWndMessage(var_72_int); // 0x722 Func
	goto Label_1831; // 0x724 Jump
	
Label_1829:
	var_35_bool = 0; // 0x725 MovB
	return 0; // 0x726 Return
}


func_1556(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; // 0x614 PushV
	var_123_string = "voice_common"; // 0x615 PushS
	GetVariable(var_123_string, var_121_int); // 0x616 Func
	var_124_int = var_121_int; // 0x618 Push
	if(var_124_int == 0) goto Label_1594; // 0x619 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x61a PushV
	var_126_object = var_115_object; // 0x61b Mov
	func_1614(var_126_object); // 0x61c NEW_2
	var_155_bool = var_125_bool == 0; // 0x61e Not
	if(var_155_bool == 0) goto Label_1576; // 0x61f JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x620 PushV
	var_157_object = var_115_object; // 0x621 Mov
	func_1651(var_157_object); // 0x622 NEW_2
	var_191_bool = var_156_bool == 0; // 0x624 Not
	if(var_191_bool == 0) goto Label_1576; // 0x625 JumpB
	var_114_bool = 0; // 0x626 MovB
	return 4; // 0x627 Return
	
Label_1576:
	var_192_int = 2; // 0x628 PushI
	irand(var_122_int, var_192_int); // 0x629 Func
	var_193_int = var_122_int; // 0x62b Push
	if(var_193_int == 0) goto Label_1589; // 0x62c JumpB
	var_194_string = "voice_common"; // 0x62d PushS
	var_195_int = 1; // 0x62e PushI
	var_196_int = var_121_int + var_195_int; // 0x62f Add
	var_197_int = 3; // 0x630 PushI
	var_198_int = var_196_int / var_197_int; // 0x631 Mod
	SetVariable(var_194_string, var_198_int); // 0x632 Func
	goto Label_1593; // 0x634 Jump
	
Label_1593:
	goto Label_1612; // 0x639 Jump
	
Label_1612:
	var_114_bool = 1; // 0x64c MovB
	return 4; // 0x64d Return
	
Label_1589:
	var_199_string = "voice_common"; // 0x635 PushS
	var_200_int = 0; // 0x636 PushI
	SetVariable(var_199_string, var_200_int); // 0x637 Func
	
Label_1594:
	var_201_bool = 0; var_202_object = Obj(); // 0x63a PushV
	var_202_object = var_115_object; // 0x63b Mov
	func_1651(var_202_object); // 0x63c NEW_2
	var_203_bool = var_201_bool == 0; // 0x63e Not
	if(var_203_bool == 0) goto Label_1608; // 0x63f JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x640 PushV
	var_205_object = var_115_object; // 0x641 Mov
	func_1614(var_205_object); // 0x642 NEW_2
	var_206_bool = var_204_bool == 0; // 0x644 Not
	if(var_206_bool == 0) goto Label_1608; // 0x645 JumpB
	var_114_bool = 0; // 0x646 MovB
	return 4; // 0x647 Return
	
Label_1608:
	var_207_string = "voice_common"; // 0x648 PushS
	var_208_int = 1; // 0x649 PushI
	SetVariable(var_207_string, var_208_int); // 0x64a Func
}


func_1940(var_320_bool)
{
	var_322_int = 0; var_323_string = ""; // 0x795 PushV
	var_323_string = "ook2BigVlad1"; // 0x796 MovS
	func_1774(var_322_int, var_323_string); // 0x797 NEW_2
	var_324_int = 0; // 0x799 PushI
	var_325_bool = var_322_int == var_324_int; // 0x79a Eq
	if(var_325_bool == 0) goto Label_1950; // 0x79b JumpB
	var_320_bool = 1; // 0x79c MovB
	return 0; // 0x79d Return
	
Label_1950:
	var_320_bool = 0; // 0x79e MovB
	return 0; // 0x79f Return
}


func_1173(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x495 PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x496 PushE
	RotateAsync(var_98_float, var_99_float); // 0x497 Func
	return 0; // 0x499 Return
}


func_1178(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x49a PushV
	var_34_string = "player"; // 0x49b PushS
	FindActor(var_32_object, var_34_string); // 0x49c Func
	var_35_bool = var_32_object == 0; // 0x49e Not
	if(var_35_bool == 0) goto Label_1186; // 0x49f JumpB
	var_29_bool = 0; // 0x4a0 MovB
	return 4; // 0x4a1 Return
	
Label_1186:
	var_36_float = 0; var_37_object = Obj(); // 0x4a2 PushV
	var_37_object = var_32_object; // 0x4a3 Mov
	func_1396(var_37_object); // 0x4a4 NEW_2
	var_44_float = 90000.0; // 0x4a6 PushF
	var_45_bool = var_36_float > var_44_float; // 0x4a7 GT
	if(var_45_bool == 0) goto Label_1195; // 0x4a8 JumpB
	var_29_bool = 0; // 0x4a9 MovB
	return 4; // 0x4aa Return
	
Label_1195:
	CanSee(var_33_bool, var_32_object); // 0x4ab Func
	var_29_bool = var_33_bool; // 0x4ad Mov
	return 4; // 0x4ae Return
}


func_1438(var_86_string, var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x59e PushV
	GetProperty(var_86_string, var_89_int); // 0x59f ObjFunc
	var_90_int = var_89_int + var_87_int; // 0x5a1 Add
	SetProperty(var_86_string, var_90_int); // 0x5a2 ObjFunc
	return 2; // 0x5a4 Return
}


func_158(var_2_object, var_302_string)
{
	var_303_bool = 0; // 0x9f PushV
	func_1902(var_303_bool); // 0xa0 NEW_2
	var_304_bool = var_303_bool == 0; // 0xa2 Not
	if(var_304_bool == 0) goto Label_165; // 0xa3 JumpB
	return 0; // 0xa4 Return
	
Label_165:
	var_305_bool = var_302_string == var_2_object; // 0xa5 Eq
	if(var_305_bool == 0) goto Label_168; // 0xa6 JumpB
	return 0; // 0xa7 Return
	
Label_168:
	var_306_string = ""; var_307_bool = 0; // 0xa8 PushV
	var_306_string = var_302_string; // 0xa9 Mov
	var_308_string = ""; // 0xaa PushS
	var_309_bool = var_302_string == var_308_string; // 0xab Eq
	if(var_309_bool == 0) goto Label_175; // 0xac JumpB
	var_307_bool = 0; // 0xad MovB
	goto Label_176; // 0xae Jump
	
Label_176:
	func_1710(var_306_string, var_307_bool); // 0xb0 NEW_2
	var_2_object = var_302_string; // 0xb2 TMov
	return 0; // 0xb3 Return
	
Label_175:
	var_307_bool = 1; // 0xaf MovB
}


func_1952(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0x7a0 PushV
	var_108_string = "branch"; // 0x7a1 PushS
	GetVariable(var_108_string, var_107_int); // 0x7a2 Func
	var_109_int = 0; // 0x7a4 PushI
	var_110_bool = var_107_int == var_109_int; // 0x7a5 Eq
	if(var_110_bool == 0) goto Label_1962; // 0x7a6 JumpB
	var_105_int = 1; // 0x7a7 MovI
	return 2; // 0x7a8 Return
	
Label_1962:
	var_111_int = 1; // 0x7aa PushI
	var_112_bool = var_107_int == var_111_int; // 0x7ab Eq
	if(var_112_bool == 0) goto Label_1967; // 0x7ac JumpB
	var_105_int = 2; // 0x7ad MovI
	return 2; // 0x7ae Return
	
Label_1967:
	var_105_int = 3; // 0x7af MovI
	return 2; // 0x7b0 Return
}


func_1694(var_242_string)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0; // 0x69e PushV
	lshHasAnimation(var_246_bool, var_242_string); // 0x69f Func
	var_249_bool = var_246_bool; // 0x6a1 Push
	if(var_249_bool == 0) goto Label_1705; // 0x6a2 JumpB
	lshGetAnimTimes(var_242_string, var_247_float, var_248_float); // 0x6a3 Func
	var_250_bool = 0; // 0x6a5 PushB
	lshPlayAnimation(var_247_float, var_248_float, var_250_bool); // 0x6a6 Func
	goto Label_1709; // 0x6a8 Jump
	
Label_1709:
	return 6; // 0x6ad Return
	
Label_1705:
	var_251_string = "Can't find lsh animation : "; // 0x6a9 PushS
	var_252_int = var_251_string + var_242_string; // 0x6aa Add
	Trace(var_252_int); // 0x6ab Func
}


func_675(var_0_object, var_347_int, var_348_object)
{
	var_350_object = Obj(); var_351_bool = 0; var_352_int = 0; var_353_bool = 0; var_354_object = Obj(); var_355_bool = 0; var_356_int = 0; var_357_bool = 0; // 0x2a3 PushV
	var_0_object = var_348_object; // 0x2a4 TMov
	var_358_bool = 0; var_359_object = Obj(); var_360_float = 0; // 0x2a5 PushV
	var_359_object = var_348_object; // 0x2a6 Mov
	var_360_float = 70.0; // 0x2a7 MovF
	func_1469(var_359_object, var_360_float); // 0x2a8 NEW_2
	var_361_bool = var_358_bool == 0; // 0x2aa Not
	if(var_361_bool == 0) goto Label_686; // 0x2ab JumpB
	var_347_int = -2; // 0x2ac MovI
	return 8; // 0x2ad Return
	
Label_686:
	CreateDialog(var_354_object); // 0x2ae Func
	var_362_int = 0; // 0x2b0 PushV
	func_1896(var_362_int); // 0x2b1 NEW_2
	SetNPCName(var_362_int); // 0x2b3 ObjFunc
	var_363_int = 0; // 0x2b5 PushV
	func_1894(var_363_int); // 0x2b6 NEW_2
	SetNPCDescription(var_363_int); // 0x2b8 ObjFunc
	var_364_string = ""; // 0x2ba PushV
	func_1898(var_364_string); // 0x2bb NEW_2
	SetPhoto(var_364_string); // 0x2bd ObjFunc
	var_365_string = ""; // 0x2bf PushV
	func_1900(var_365_string); // 0x2c0 NEW_2
	SetPhoto2(var_365_string); // 0x2c2 ObjFunc
	var_366_int = 0; // 0x2c4 PushV
	func_1952(var_366_int); // 0x2c5 NEW_2
	SetPlayerName(var_366_int); // 0x2c7 ObjFunc
	var_356_int = -1; // 0x2c9 MovI
	IsOverrideActive(var_355_bool); // 0x2ca Func
	var_367_bool = var_355_bool; // 0x2cc Push
	if(var_367_bool == 0) goto Label_720; // 0x2cd JumpB
	var_347_int = -2; // 0x2ce MovI
	return 8; // 0x2cf Return
	
Label_720:
	DoDialog(var_354_object); // 0x2d0 Func
	var_368_bool = 0; var_369_object = Obj(); // 0x2d2 PushV
	var_370_object = Obj(); // 0x2d3 PushV
	func_1747(var_370_object); // 0x2d4 NEW_2
	var_369_object = var_370_object; // 0x2d5 Mov
	func_1556(var_368_bool, var_369_object); // 0x2d7 NEW_2
	var_371_object = Obj(); var_372_object = Obj(); // 0x2d9 PushV
	var_371_object = var_348_object; // 0x2da Mov
	var_372_object = var_354_object; // 0x2db Mov
	TaskCall(5); // 0x2dc TaskCall
	func_756(var_373_object, var_374_object, var_375_string, var_376_bool, var_371_object, var_372_object); // 0x2dd NEW_2
	TaskReturn(); // 0x2de TaskReturn
	IsDialogEnd(var_357_bool); // 0x2e0 ObjFunc
	
Label_738:
	var_404_bool = var_357_bool == 0; // 0x2e2 Not
	if(var_404_bool == 0) goto Label_745; // 0x2e3 JumpB
	sync(); // 0x2e4 Func
	IsDialogEnd(var_357_bool); // 0x2e6 ObjFunc
	goto Label_738; // 0x2e8 Jump
	
Label_745:
	var_405_object = Obj(); // 0x2e9 PushV
	var_405_object = var_348_object; // 0x2ea Mov
	func_1538(); // 0x2eb NEW_2
	StopDialog(var_354_object); // 0x2ed Func
	GetReturnValue(var_356_int); // 0x2ef ObjFunc
	var_347_int = var_356_int; // 0x2f1 Mov
	return 8; // 0x2f2 Return
}


func_1445(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x5a5 PushV
	GetPosition(var_34_cvector); // 0x5a6 Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x5a8 Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x5a9 PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x5aa PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x5ab Func
	var_29_bool = var_36_bool; // 0x5ad Mov
	return 6; // 0x5ae Return
}


func_934(var_0_object, var_406_int, var_407_object)
{
	var_409_object = Obj(); var_410_bool = 0; var_411_int = 0; var_412_bool = 0; var_413_object = Obj(); var_414_bool = 0; var_415_int = 0; var_416_bool = 0; // 0x3a6 PushV
	var_0_object = var_407_object; // 0x3a7 TMov
	var_417_bool = 0; var_418_object = Obj(); var_419_float = 0; // 0x3a8 PushV
	var_418_object = var_407_object; // 0x3a9 Mov
	var_419_float = 70.0; // 0x3aa MovF
	func_1469(var_418_object, var_419_float); // 0x3ab NEW_2
	var_420_bool = var_417_bool == 0; // 0x3ad Not
	if(var_420_bool == 0) goto Label_945; // 0x3ae JumpB
	var_406_int = -2; // 0x3af MovI
	return 8; // 0x3b0 Return
	
Label_945:
	CreateDialog(var_413_object); // 0x3b1 Func
	var_421_int = 0; // 0x3b3 PushV
	func_1896(var_421_int); // 0x3b4 NEW_2
	SetNPCName(var_421_int); // 0x3b6 ObjFunc
	var_422_int = 0; // 0x3b8 PushV
	func_1894(var_422_int); // 0x3b9 NEW_2
	SetNPCDescription(var_422_int); // 0x3bb ObjFunc
	var_423_string = ""; // 0x3bd PushV
	func_1898(var_423_string); // 0x3be NEW_2
	SetPhoto(var_423_string); // 0x3c0 ObjFunc
	var_424_string = ""; // 0x3c2 PushV
	func_1900(var_424_string); // 0x3c3 NEW_2
	SetPhoto2(var_424_string); // 0x3c5 ObjFunc
	var_425_int = 0; // 0x3c7 PushV
	func_1952(var_425_int); // 0x3c8 NEW_2
	SetPlayerName(var_425_int); // 0x3ca ObjFunc
	var_415_int = -1; // 0x3cc MovI
	IsOverrideActive(var_414_bool); // 0x3cd Func
	var_426_bool = var_414_bool; // 0x3cf Push
	if(var_426_bool == 0) goto Label_979; // 0x3d0 JumpB
	var_406_int = -2; // 0x3d1 MovI
	return 8; // 0x3d2 Return
	
Label_979:
	DoDialog(var_413_object); // 0x3d3 Func
	var_427_bool = 0; var_428_object = Obj(); // 0x3d5 PushV
	var_429_object = Obj(); // 0x3d6 PushV
	func_1747(var_429_object); // 0x3d7 NEW_2
	var_428_object = var_429_object; // 0x3d8 Mov
	func_1556(var_427_bool, var_428_object); // 0x3da NEW_2
	var_430_object = Obj(); var_431_object = Obj(); // 0x3dc PushV
	var_430_object = var_407_object; // 0x3dd Mov
	var_431_object = var_413_object; // 0x3de Mov
	TaskCall(7); // 0x3df TaskCall
	func_1015(var_432_object, var_433_object, var_434_string, var_435_bool, var_430_object, var_431_object); // 0x3e0 NEW_2
	TaskReturn(); // 0x3e1 TaskReturn
	IsDialogEnd(var_416_bool); // 0x3e3 ObjFunc
	
Label_997:
	var_460_bool = var_416_bool == 0; // 0x3e5 Not
	if(var_460_bool == 0) goto Label_1004; // 0x3e6 JumpB
	sync(); // 0x3e7 Func
	IsDialogEnd(var_416_bool); // 0x3e9 ObjFunc
	goto Label_997; // 0x3eb Jump
	
Label_1004:
	var_461_object = Obj(); // 0x3ec PushV
	var_461_object = var_407_object; // 0x3ed Mov
	func_1538(); // 0x3ee NEW_2
	StopDialog(var_413_object); // 0x3f0 Func
	GetReturnValue(var_415_int); // 0x3f2 ObjFunc
	var_406_int = var_415_int; // 0x3f4 Mov
	return 8; // 0x3f5 Return
}


func_1320()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x528 PushV
	WaitForAnimEnd(); // 0x529 Func
	var_38_bool = 0; // 0x52b PushV
	func_1464(var_38_bool); // 0x52c NEW_2
	var_39_bool = var_38_bool == 0; // 0x52e Not
	if(var_39_bool == 0) goto Label_1329; // 0x52f JumpB
	return 12; // 0x530 Return
	
Label_1329:
	var_40_int = 0; // 0x531 PushV
	func_1877(var_40_int); // 0x532 NEW_2
	var_32_int = var_40_int; // 0x533 Mov
	var_33_int = 0; // 0x535 MovI
	
Label_1334:
	var_53_bool = 0; // 0x536 PushV
	var_53_bool = 0; // 0x537 MovB
	var_54_int = 5; // 0x538 PushI
	var_55_bool = var_33_int < var_54_int; // 0x539 LT
	if(var_55_bool == 0) goto Label_1344; // 0x53a JumpB
	var_56_bool = 0; // 0x53b PushV
	func_1464(var_56_bool); // 0x53c NEW_2
	if(var_56_bool == 0) goto Label_1344; // 0x53e JumpB
	var_53_bool = 1; // 0x53f MovB
	
Label_1344:
	if(var_53_bool == 0) goto Label_1386; // 0x540 JumpB
	var_57_bool = var_32_int == 0; // 0x541 Not
	if(var_57_bool == 0) goto Label_1354; // 0x542 JumpB
	var_58_int = 3; // 0x543 PushI
	Sleep(var_58_int, var_34_bool); // 0x544 Func
	var_59_bool = var_34_bool == 0; // 0x546 Not
	if(var_59_bool == 0) goto Label_1353; // 0x547 JumpB
	goto Label_1386; // 0x548 Jump
	
Label_1386:
	ResetAAS(); // 0x56a Func
	return 12; // 0x56c Return
	
Label_1353:
	goto Label_1375; // 0x549 Jump
	
Label_1375:
	var_60_bool = 0; // 0x55f PushV
	func_1389(var_60_bool); // 0x560 NEW_2
	var_61_bool = var_60_bool == 0; // 0x562 Not
	if(var_61_bool == 0) goto Label_1381; // 0x563 JumpB
	goto Label_1386; // 0x564 Jump
	
Label_1381:
	ResetAAS(); // 0x565 Func
	var_62_int = 1; // 0x567 PushI
	var_33_int = var_33_int + var_62_int; // 0x568 Add2
	goto Label_1334; // 0x569 Jump
	
Label_1354:
	irand(var_35_int, var_32_int); // 0x54a Func
	var_63_int = 5; // 0x54c PushI
	irand(var_36_int, var_63_int); // 0x54d Func
	var_64_int = 0; // 0x54f PushI
	var_65_bool = var_36_int != var_64_int; // 0x550 Neq
	if(var_65_bool == 0) goto Label_1363; // 0x551 JumpB
	var_35_int = 0; // 0x552 MovI
	
Label_1363:
	var_66_string = "all"; // 0x553 PushS
	var_67_string = ""; var_68_int = 0; // 0x554 PushV
	var_68_int = var_35_int; // 0x555 Mov
	func_1870(var_67_string, var_68_int); // 0x556 NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x558 Func
	WaitForAnimEnd(var_37_bool); // 0x55a Func
	var_69_bool = var_37_bool == 0; // 0x55c Not
	if(var_69_bool == 0) goto Label_1375; // 0x55d JumpB
	goto Label_1386; // 0x55e Jump
}


func_426(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x1aa PushV
	var_0_object = var_43_object; // 0x1ab TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x1ac PushV
	var_54_object = var_43_object; // 0x1ad Mov
	var_55_float = 70.0; // 0x1ae MovF
	func_1469(var_54_object, var_55_float); // 0x1af NEW_2
	var_100_bool = var_53_bool == 0; // 0x1b1 Not
	if(var_100_bool == 0) goto Label_437; // 0x1b2 JumpB
	var_42_int = -2; // 0x1b3 MovI
	return 8; // 0x1b4 Return
	
Label_437:
	CreateDialog(var_49_object); // 0x1b5 Func
	var_101_int = 0; // 0x1b7 PushV
	func_1896(var_101_int); // 0x1b8 NEW_2
	SetNPCName(var_101_int); // 0x1ba ObjFunc
	var_102_int = 0; // 0x1bc PushV
	func_1894(var_102_int); // 0x1bd NEW_2
	SetNPCDescription(var_102_int); // 0x1bf ObjFunc
	var_103_string = ""; // 0x1c1 PushV
	func_1898(var_103_string); // 0x1c2 NEW_2
	SetPhoto(var_103_string); // 0x1c4 ObjFunc
	var_104_string = ""; // 0x1c6 PushV
	func_1900(var_104_string); // 0x1c7 NEW_2
	SetPhoto2(var_104_string); // 0x1c9 ObjFunc
	var_105_int = 0; // 0x1cb PushV
	func_1952(var_105_int); // 0x1cc NEW_2
	SetPlayerName(var_105_int); // 0x1ce ObjFunc
	var_51_int = -1; // 0x1d0 MovI
	IsOverrideActive(var_50_bool); // 0x1d1 Func
	var_113_bool = var_50_bool; // 0x1d3 Push
	if(var_113_bool == 0) goto Label_471; // 0x1d4 JumpB
	var_42_int = -2; // 0x1d5 MovI
	return 8; // 0x1d6 Return
	
Label_471:
	DoDialog(var_49_object); // 0x1d7 Func
	var_114_bool = 0; var_115_object = Obj(); // 0x1d9 PushV
	var_116_object = Obj(); // 0x1da PushV
	func_1747(var_116_object); // 0x1db NEW_2
	var_115_object = var_116_object; // 0x1dc Mov
	func_1556(var_114_bool, var_115_object); // 0x1de NEW_2
	var_209_object = Obj(); var_210_object = Obj(); // 0x1e0 PushV
	var_209_object = var_43_object; // 0x1e1 Mov
	var_210_object = var_49_object; // 0x1e2 Mov
	TaskCall(3); // 0x1e3 TaskCall
	func_507(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object); // 0x1e4 NEW_2
	TaskReturn(); // 0x1e5 TaskReturn
	IsDialogEnd(var_52_bool); // 0x1e7 ObjFunc
	
Label_489:
	var_258_bool = var_52_bool == 0; // 0x1e9 Not
	if(var_258_bool == 0) goto Label_496; // 0x1ea JumpB
	sync(); // 0x1eb Func
	IsDialogEnd(var_52_bool); // 0x1ed ObjFunc
	goto Label_489; // 0x1ef Jump
	
Label_496:
	var_259_object = Obj(); // 0x1f0 PushV
	var_259_object = var_43_object; // 0x1f1 Mov
	func_1538(); // 0x1f2 NEW_2
	StopDialog(var_49_object); // 0x1f4 Func
	GetReturnValue(var_51_int); // 0x1f6 ObjFunc
	var_42_int = var_51_int; // 0x1f8 Mov
	return 8; // 0x1f9 Return
}


func_1710(var_220_string, var_221_bool)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0; // 0x6ae PushV
	lshHasAnimation(var_227_bool, var_220_string); // 0x6af Func
	var_230_bool = var_227_bool; // 0x6b1 Push
	if(var_230_bool == 0) goto Label_1720; // 0x6b2 JumpB
	lshGetAnimTimes(var_220_string, var_228_float, var_229_float); // 0x6b3 Func
	lshPlayAnimation(var_228_float, var_229_float, var_221_bool); // 0x6b5 Func
	goto Label_1724; // 0x6b7 Jump
	
Label_1724:
	return 6; // 0x6bc Return
	
Label_1720:
	var_231_string = "Can't find lsh animation : "; // 0x6b8 PushS
	var_232_int = var_231_string + var_220_string; // 0x6b9 Add
	Trace(var_232_int); // 0x6ba Func
}


func_1455(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x5af PushV
	GetPosition(var_28_cvector); // 0x5b0 ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x5b2 PushV
	var_30_cvector = var_28_cvector; // 0x5b3 Mov
	func_1445(var_29_bool, var_30_cvector); // 0x5b4 NEW_2
	var_25_bool = var_29_bool; // 0x5b5 Mov
	return 2; // 0x5b7 Return
}


func_1200()
{
	var_464_float = 0; var_465_float = 0; // 0x4b0 PushV
	var_466_int = 8; // 0x4b1 PushI
	var_467_int = 16; // 0x4b2 PushI
	rand(var_465_float, var_466_int, var_467_int); // 0x4b3 Func
	var_468_int = 10; // 0x4b5 PushI
	SetTimer(var_468_int, var_465_float); // 0x4b6 Func
	return 2; // 0x4b8 Return
}


func_1073(var_2_object, var_437_string)
{
	var_438_bool = 0; // 0x432 PushV
	func_1902(var_438_bool); // 0x433 NEW_2
	var_439_bool = var_438_bool == 0; // 0x435 Not
	if(var_439_bool == 0) goto Label_1080; // 0x436 JumpB
	return 0; // 0x437 Return
	
Label_1080:
	var_440_bool = var_437_string == var_2_object; // 0x438 Eq
	if(var_440_bool == 0) goto Label_1083; // 0x439 JumpB
	return 0; // 0x43a Return
	
Label_1083:
	var_441_string = ""; var_442_bool = 0; // 0x43b PushV
	var_441_string = var_437_string; // 0x43c Mov
	var_443_string = ""; // 0x43d PushS
	var_444_bool = var_437_string == var_443_string; // 0x43e Eq
	if(var_444_bool == 0) goto Label_1090; // 0x43f JumpB
	var_442_bool = 0; // 0x440 MovB
	goto Label_1091; // 0x441 Jump
	
Label_1091:
	func_1710(var_441_string, var_442_bool); // 0x443 NEW_2
	var_2_object = var_437_string; // 0x445 TMov
	return 0; // 0x446 Return
	
Label_1090:
	var_442_bool = 1; // 0x442 MovB
}


func_1969(var_39_object)
{
	var_40_bool = GlobalVars[1]; // 0x7b2 PushGE
	var_41_bool = var_40_bool == 0; // 0x7b3 Not
	if(var_41_bool == 0) goto Label_1982; // 0x7b4 JumpB
	var_42_int = 0; var_43_object = Obj(); // 0x7b5 PushV
	var_43_object = var_39_object; // 0x7b6 Mov
	TaskCall(2); // 0x7b7 TaskCall
	func_426(var_44_object, var_42_int, var_43_object); // 0x7b8 NEW_2
	TaskReturn(); // 0x7b9 TaskReturn
	var_267_bool = GlobalVars[1]; // 0x7bb PushGE
	var_267_bool = 1; // 0x7bc MovB
	GlobalVars[1] = var_267_bool; // 0x7bd PopGE
	
Label_1982:
	var_268_bool = 0; var_269_int = 0; // 0x7be PushV
	var_269_int = 2; // 0x7bf MovI
	func_1864(var_268_bool, var_269_int); // 0x7c0 NEW_2
	if(var_268_bool == 0) goto Label_1994; // 0x7c2 JumpB
	var_271_int = 0; var_272_object = Obj(); // 0x7c3 PushV
	var_272_object = var_39_object; // 0x7c4 Mov
	TaskCall(0); // 0x7c5 TaskCall
	func_0(var_273_object, var_271_int, var_272_object); // 0x7c6 NEW_2
	TaskReturn(); // 0x7c7 TaskReturn
	return 0; // 0x7c9 Return
	
Label_1994:
	var_345_bool = 0; var_346_int = 0; // 0x7ca PushV
	var_346_int = 12; // 0x7cb MovI
	func_1864(var_345_bool, var_346_int); // 0x7cc NEW_2
	if(var_345_bool == 0) goto Label_2006; // 0x7ce JumpB
	var_347_int = 0; var_348_object = Obj(); // 0x7cf PushV
	var_348_object = var_39_object; // 0x7d0 Mov
	TaskCall(4); // 0x7d1 TaskCall
	func_675(var_349_object, var_347_int, var_348_object); // 0x7d2 NEW_2
	TaskReturn(); // 0x7d3 TaskReturn
	return 0; // 0x7d5 Return
	
Label_2006:
	var_406_int = 0; var_407_object = Obj(); // 0x7d6 PushV
	var_407_object = var_39_object; // 0x7d7 Mov
	TaskCall(6); // 0x7d8 TaskCall
	func_934(var_408_object, var_406_int, var_407_object); // 0x7d9 NEW_2
	TaskReturn(); // 0x7da TaskReturn
	return 0; // 0x7dc Return
}


func_819(var_2_object, var_378_string)
{
	var_379_bool = 0; // 0x334 PushV
	func_1902(var_379_bool); // 0x335 NEW_2
	var_380_bool = var_379_bool == 0; // 0x337 Not
	if(var_380_bool == 0) goto Label_826; // 0x338 JumpB
	return 0; // 0x339 Return
	
Label_826:
	var_381_bool = var_378_string == var_2_object; // 0x33a Eq
	if(var_381_bool == 0) goto Label_829; // 0x33b JumpB
	return 0; // 0x33c Return
	
Label_829:
	var_382_string = ""; var_383_bool = 0; // 0x33d PushV
	var_382_string = var_378_string; // 0x33e Mov
	var_384_string = ""; // 0x33f PushS
	var_385_bool = var_378_string == var_384_string; // 0x340 Eq
	if(var_385_bool == 0) goto Label_836; // 0x341 JumpB
	var_383_bool = 0; // 0x342 MovB
	goto Label_837; // 0x343 Jump
	
Label_837:
	func_1710(var_382_string, var_383_bool); // 0x345 NEW_2
	var_2_object = var_378_string; // 0x347 TMov
	return 0; // 0x348 Return
	
Label_836:
	var_383_bool = 1; // 0x344 MovB
}


func_565(var_2_object, var_216_string)
{
	var_217_bool = 0; // 0x236 PushV
	func_1902(var_217_bool); // 0x237 NEW_2
	var_218_bool = var_217_bool == 0; // 0x239 Not
	if(var_218_bool == 0) goto Label_572; // 0x23a JumpB
	return 0; // 0x23b Return
	
Label_572:
	var_219_bool = var_216_string == var_2_object; // 0x23c Eq
	if(var_219_bool == 0) goto Label_575; // 0x23d JumpB
	return 0; // 0x23e Return
	
Label_575:
	var_220_string = ""; var_221_bool = 0; // 0x23f PushV
	var_220_string = var_216_string; // 0x240 Mov
	var_222_string = ""; // 0x241 PushS
	var_223_bool = var_216_string == var_222_string; // 0x242 Eq
	if(var_223_bool == 0) goto Label_582; // 0x243 JumpB
	var_221_bool = 0; // 0x244 MovB
	goto Label_583; // 0x245 Jump
	
Label_583:
	func_1710(var_220_string, var_221_bool); // 0x247 NEW_2
	var_2_object = var_216_string; // 0x249 TMov
	return 0; // 0x24a Return
	
Label_582:
	var_221_bool = 1; // 0x246 MovB
}


func_1845(var_42_float)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x735 PushV
	CreateFloatVector(var_44_object); // 0x736 Func
	add(var_42_float); // 0x738 ObjFunc
	var_45_int = 16; // 0x73a PushI
	SendWorldWndMessage(var_45_int, var_44_object); // 0x73b Func
	return 2; // 0x73d Return
}


func_1464(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x5b8 PushV
	IsLoaded(var_24_bool); // 0x5b9 Func
	var_22_bool = var_24_bool; // 0x5bb Mov
	return 2; // 0x5bc Return
}


func_1209()
{
	var_463_int = 10; // 0x4b9 PushI
	KillTimer(var_463_int); // 0x4ba Func
	return 0; // 0x4bc Return
}


func_1469(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0x5bd PushV
	GetPosition(var_66_cvector); // 0x5be ObjFunc
	GetEyesHeight(var_65_float); // 0x5c0 ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x5c2 PushE
	var_74_float = var_74_float + var_65_float; // 0x5c3 Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x5c4 PopE
	GetPosition(var_67_cvector); // 0x5c5 Func
	GetEyesHeight(var_65_float); // 0x5c7 Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x5c9 PushE
	var_75_float = var_75_float + var_65_float; // 0x5ca Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x5cb PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x5cc Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x5cd PushE
	var_76_float = 0; // 0x5ce MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x5cf PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0x5d0 Or
	var_78_float = sqrt(var_77_int); // 0x5d1 Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x5d2 Div2
	var_69_cvector = -var_68_cvector; // 0x5d3 Neg2
	var_79_float = var_68_cvector * var_55_float; // 0x5d4 Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x5d5 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x5d6 PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x5d7 Xor2
	func_1753(var_80_cvector, var_81_cvector); // 0x5d8 NEW_2
	var_88_int = 25; // 0x5da PushI
	var_89_float = var_80_cvector * var_88_int; // 0x5db Mult
	var_90_int = var_79_float + var_89_float; // 0x5dc Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x5dd PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x5de Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x5df Add2
	IsOverrideActive(var_72_bool); // 0x5e0 Func
	var_92_bool = var_72_bool; // 0x5e2 Push
	if(var_92_bool == 0) goto Label_1510; // 0x5e3 JumpB
	var_53_bool = 0; // 0x5e4 MovB
	return 18; // 0x5e5 Return
	
Label_1510:
	StopWorld(); // 0x5e6 Func
	var_93_bool = 1; // 0x5e8 PushB
	CameraTransit(var_71_cvector, var_69_cvector, var_93_bool); // 0x5e9 Func
	var_94_float = GetByIndex(var_70_cvector, 0); // 0x5eb PushE
	var_95_float = GetByIndex(var_70_cvector, 2); // 0x5ec PushE
	Rotate(var_94_float, var_95_float); // 0x5ed Func
	var_96_bool = 0; // 0x5ef PushV
	func_1902(var_96_bool); // 0x5f0 NEW_2
	if(var_96_bool == 0) goto Label_1524; // 0x5f2 JumpB
	goto Label_1532; // 0x5f3 Jump
	
Label_1532:
	CameraWaitForPlayFinish(); // 0x5fc Func
	ResumeWorld(); // 0x5fe Func
	var_53_bool = 1; // 0x600 MovB
	return 18; // 0x601 Return
	
Label_1524:
	var_97_string = "head"; // 0x5f4 PushS
	HasAnimationTrack(var_73_bool, var_97_string); // 0x5f5 Func
	var_98_bool = var_73_bool; // 0x5f7 Push
	if(var_98_bool == 0) goto Label_1532; // 0x5f8 JumpB
	var_99_string = "head"; // 0x5f9 PushS
	LookAsyncCamera(var_99_string); // 0x5fa Func
}


func_1725(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0; // 0x6bd PushV
	var_152_bool = 0; // 0x6be PushV
	func_1902(var_152_bool); // 0x6bf NEW_2
	if(var_152_bool == 0) goto Label_1738; // 0x6c1 JumpB
	lshHasSpeech(var_151_bool, var_149_string); // 0x6c2 Func
	var_153_bool = var_151_bool; // 0x6c4 Push
	if(var_153_bool == 0) goto Label_1738; // 0x6c5 JumpB
	lshPlaySpeech(var_149_string); // 0x6c6 Func
	var_148_bool = 1; // 0x6c8 MovB
	return 2; // 0x6c9 Return
	
Label_1738:
	var_148_bool = 0; // 0x6ca MovB
	return 2; // 0x6cb Return
}


func_1855(var_169_int)
{
	var_170_float = 0; var_171_float = 0; // 0x73f PushV
	GetGameTime(var_171_float); // 0x740 Func
	var_172_int = 1; // 0x742 PushI
	var_173_int = 0; // 0x743 PushV
	var_174_int = 24; // 0x744 PushI
	var_173_int = var_171_float / var_171_float; // 0x745 Div2
	var_169_int = var_172_int + var_173_int; // 0x746 Add2
	return 2; // 0x747 Return
}


func_1864(var_268_bool, var_269_int)
{
	var_270_int = 0; // 0x749 PushV
	func_1855(var_270_int); // 0x74a NEW_2
	var_268_bool = var_270_int == var_269_int; // 0x74c Eq2
	return 0; // 0x74d Return
}


func_1740()
{
	var_24_bool = 0; // 0x6cc PushV
	func_1902(var_24_bool); // 0x6cd NEW_2
	if(var_24_bool == 0) goto Label_1746; // 0x6cf JumpB
	lshStopSpeech(); // 0x6d0 Func
	
Label_1746:
	return 0; // 0x6d2 Return
}


func_1614(var_125_bool)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; // 0x64e PushV
	var_132_string = "c"; // 0x64f MovS
	var_133_int = 0; // 0x650 MovI
	
Label_1617:
	var_137_int = 1; // 0x651 PushI
	if(var_137_int == 0) goto Label_1630; // 0x652 JumpB
	var_138_int = 1; // 0x653 PushI
	var_139_int = var_133_int + var_138_int; // 0x654 Add
	var_140_int = var_132_string + var_139_int; // 0x655 Add
	HasProperty(var_140_int, var_134_bool); // 0x656 ObjFunc
	var_141_bool = var_134_bool == 0; // 0x658 Not
	if(var_141_bool == 0) goto Label_1627; // 0x659 JumpB
	goto Label_1630; // 0x65a Jump
	
Label_1630:
	var_142_bool = var_133_int == 0; // 0x65e Not
	if(var_142_bool == 0) goto Label_1634; // 0x65f JumpB
	var_125_bool = 0; // 0x660 MovB
	return 10; // 0x661 Return
	
Label_1634:
	var_135_int = 0; // 0x662 MovI
	var_143_int = 1; // 0x663 PushI
	var_144_bool = var_133_int > var_143_int; // 0x664 GT
	if(var_144_bool == 0) goto Label_1640; // 0x665 JumpB
	irand(var_135_int, var_133_int); // 0x666 Func
	
Label_1640:
	var_145_int = 1; // 0x668 PushI
	var_146_int = var_135_int + var_145_int; // 0x669 Add
	var_147_int = var_132_string + var_146_int; // 0x66a Add
	GetProperty(var_147_int, var_136_string); // 0x66b ObjFunc
	var_148_bool = 0; var_149_string = ""; // 0x66d PushV
	var_149_string = var_136_string; // 0x66e Mov
	func_1725(var_148_bool, var_149_string); // 0x66f NEW_2
	var_125_bool = var_148_bool; // 0x670 Mov
	return 10; // 0x672 Return
	
Label_1627:
	var_154_int = 1; // 0x65b PushI
	var_133_int = var_133_int + var_154_int; // 0x65c Add2
	goto Label_1617; // 0x65d Jump
}


func_1870(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x74e PushV
	var_49_string = "idle"; // 0x74f MovS
	var_50_int = var_47_int; // 0x750 Push
	if(var_50_int == 0) goto Label_1875; // 0x751 JumpB
	var_49_string = var_49_string + var_47_int; // 0x752 Add2
	
Label_1875:
	var_46_string = var_49_string; // 0x753 Mov
	return 2; // 0x754 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_295_object, var_296_object)
{
	var_0_object = var_296_object; // 0x52 TMov
	var_1_object = var_295_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_301_int = 1; // 0x55 PushI
	if(var_301_int == 0) goto Label_128; // 0x56 JumpB
	var_302_string = ""; // 0x57 PushV
	var_302_string = "Neutral"; // 0x58 MovS
	func_158(var_296_object, var_302_string); // 0x59 NEW_2
	var_310_int = 525245; // 0x5b PushI
	SetMessage(var_310_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_311_bool = 0; // 0x60 PushV
	var_311_bool = 0; // 0x61 MovB
	var_312_bool = 0; var_313_object = Obj(); // 0x62 PushV
	var_313_object = var_1_object; // 0x63 MovT
	func_1928(var_313_object); // 0x64 NEW_2
	if(var_312_bool == 0) goto Label_109; // 0x66 JumpB
	var_320_bool = 0; var_321_object = Obj(); // 0x67 PushV
	var_321_object = var_1_object; // 0x68 MovT
	func_1940(var_321_object); // 0x69 NEW_2
	if(var_320_bool == 0) goto Label_109; // 0x6b JumpB
	var_311_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_311_bool == 0) goto Label_115; // 0x6d JumpB
	var_326_int = 525246; // 0x6e PushI
	var_327_int = 44478; // 0x6f PushI
	var_328_int = 26614; // 0x70 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x71 TObjFunc
	
Label_115:
	var_329_int = 525249; // 0x73 PushI
	var_330_int = -1; // 0x74 PushI
	var_331_int = 26617; // 0x75 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x76 TObjFunc
	var_332_int = 529151; // 0x78 PushI
	var_333_int = -1; // 0x79 PushI
	var_334_int = 30598; // 0x7a PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x7b TObjFunc
	goto Label_128; // 0x7d Jump
	
Label_128:
	var_335_bool = 0; // 0x80 PushV
	func_1902(var_335_bool); // 0x81 NEW_2
	if(var_335_bool == 0) goto Label_143; // 0x83 JumpB
	
Label_132:
	lshWaitForAnimEnd(); // 0x84 Func
	var_336_string = var_3_string; // 0x86 PushT
	if(var_336_string == 0) goto Label_137; // 0x87 JumpB
	goto Label_142; // 0x88 Jump
	
Label_142:
	goto Label_157; // 0x8e Jump
	
Label_157:
	return 0; // 0x9d Return
	
Label_137:
	var_337_string = ""; // 0x89 PushV
	var_337_string = var_2_object; // 0x8a MovT
	func_1694(var_337_string); // 0x8b NEW_2
	goto Label_132; // 0x8d Jump
	
Label_143:
	var_338_string = "all"; // 0x8f PushS
	var_339_string = "idle"; // 0x90 PushS
	PlayAnimation(var_338_string, var_339_string); // 0x91 Func
	
Label_147:
	WaitForAnimEnd(); // 0x93 Func
	var_340_string = var_3_string; // 0x95 PushT
	if(var_340_string == 0) goto Label_152; // 0x96 JumpB
	goto Label_157; // 0x97 Jump
	
Label_152:
	var_341_string = "all"; // 0x98 PushS
	var_342_string = "idle"; // 0x99 PushS
	PlayAnimation(var_341_string, var_342_string); // 0x9a Func
	goto Label_147; // 0x9c Jump
}


func_1747(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x6d3 PushV
	self(var_118_object); // 0x6d4 Func
	var_116_object = var_118_object; // 0x6d6 Mov
	return 2; // 0x6d7 Return
}


func_1877(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x755 PushV
	var_43_int = 0; // 0x756 MovI
	
Label_1879:
	var_45_string = "all"; // 0x757 PushS
	var_46_string = ""; var_47_int = 0; // 0x758 PushV
	var_47_int = var_43_int; // 0x759 Mov
	func_1870(var_46_string, var_47_int); // 0x75a NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x75c Func
	var_51_bool = var_44_bool == 0; // 0x75e Not
	if(var_51_bool == 0) goto Label_1889; // 0x75f JumpB
	goto Label_1892; // 0x760 Jump
	
Label_1892:
	var_40_int = var_43_int; // 0x764 Mov
	return 4; // 0x765 Return
	
Label_1889:
	var_52_int = 1; // 0x761 PushI
	var_43_int = var_43_int + var_52_int; // 0x762 Add2
	goto Label_1879; // 0x763 Jump
}


func_1753(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x6d9 PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x6da Or
	var_84_float = sqrt(var_85_int); // 0x6db Sqrt2
	var_86_float = 0.0; // 0x6dc PushF
	var_87_bool = var_84_float < var_86_float; // 0x6dd LT
	if(var_87_bool == 0) goto Label_1761; // 0x6de JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x6df MovV
	return 2; // 0x6e0 Return
	
Label_1761:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x6e1 Div2
	return 2; // 0x6e2 Return
}


func_1763(var_64_float, var_65_float, var_66_float, var_67_float)
{
	var_68_bool = var_65_float < var_66_float; // 0x6e4 LT
	if(var_68_bool == 0) goto Label_1768; // 0x6e5 JumpB
	var_64_float = var_66_float; // 0x6e6 Mov
	return 0; // 0x6e7 Return
	
Label_1768:
	var_69_bool = var_65_float > var_67_float; // 0x6e8 GT
	if(var_69_bool == 0) goto Label_1772; // 0x6e9 JumpB
	var_64_float = var_67_float; // 0x6ea Mov
	return 0; // 0x6eb Return
	
Label_1772:
	var_64_float = var_65_float; // 0x6ec Mov
	return 0; // 0x6ed Return
}


func_1894(var_102_int)
{
	var_102_int = 515531; // 0x766 MovI
	return 0; // 0x767 Return
}


func_1896(var_101_int)
{
	var_101_int = 502857; // 0x768 MovI
	return 0; // 0x769 Return
}


func_1898(var_103_string)
{
	var_103_string = "ui/NPC_BigVlad.png"; // 0x76a MovS
	return 0; // 0x76b Return
}


func_1900(var_104_string)
{
	var_104_string = "ui/NPC_BigVlad_b.png"; // 0x76c MovS
	return 0; // 0x76d Return
}


func_1389(var_60_bool)
{
	var_60_bool = 1; // 0x56d MovB
	return 0; // 0x56e Return
}


func_1902(var_96_bool)
{
	var_96_bool = 1; // 0x76e MovB
	return 0; // 0x76f Return
}


func_1391()
{
	StopAnimation(); // 0x56f Func
	StopGroup0(); // 0x571 Func
	return 0; // 0x573 Return
}


func_1904(var_33_object)
{
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0; // 0x771 PushV
	var_36_object = var_33_object; // 0x772 Mov
	var_37_float = 0.02; // 0x773 MovF
	func_1810(var_35_bool, var_36_object, var_37_float); // 0x774 NEW_2
	return 0; // 0x776 Return
}


func_1774(var_314_int, var_315_string)
{
	var_316_int = 0; var_317_int = 0; // 0x6ee PushV
	GetVariable(var_315_string, var_317_int); // 0x6ef Func
	var_314_int = var_317_int; // 0x6f1 Mov
	return 2; // 0x6f2 Return
}


func_1651(var_156_bool)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; // 0x673 PushV
	var_168_string = "d"; // 0x674 PushS
	var_169_int = 0; // 0x675 PushV
	func_1855(var_169_int); // 0x676 NEW_2
	var_175_int = var_168_string + var_169_int; // 0x678 Add
	var_176_string = "m"; // 0x679 PushS
	var_163_string = var_175_int + var_176_string; // 0x67a Add2
	var_164_int = 0; // 0x67b MovI
	
Label_1660:
	var_177_int = 1; // 0x67c PushI
	if(var_177_int == 0) goto Label_1673; // 0x67d JumpB
	var_178_int = 1; // 0x67e PushI
	var_179_int = var_164_int + var_178_int; // 0x67f Add
	var_180_int = var_163_string + var_179_int; // 0x680 Add
	HasProperty(var_180_int, var_165_bool); // 0x681 ObjFunc
	var_181_bool = var_165_bool == 0; // 0x683 Not
	if(var_181_bool == 0) goto Label_1670; // 0x684 JumpB
	goto Label_1673; // 0x685 Jump
	
Label_1673:
	var_182_bool = var_164_int == 0; // 0x689 Not
	if(var_182_bool == 0) goto Label_1677; // 0x68a JumpB
	var_156_bool = 0; // 0x68b MovB
	return 10; // 0x68c Return
	
Label_1677:
	var_166_int = 0; // 0x68d MovI
	var_183_int = 1; // 0x68e PushI
	var_184_bool = var_164_int > var_183_int; // 0x68f GT
	if(var_184_bool == 0) goto Label_1683; // 0x690 JumpB
	irand(var_166_int, var_164_int); // 0x691 Func
	
Label_1683:
	var_185_int = 1; // 0x693 PushI
	var_186_int = var_166_int + var_185_int; // 0x694 Add
	var_187_int = var_163_string + var_186_int; // 0x695 Add
	GetProperty(var_187_int, var_167_string); // 0x696 ObjFunc
	var_188_bool = 0; var_189_string = ""; // 0x698 PushV
	var_189_string = var_167_string; // 0x699 Mov
	func_1725(var_188_bool, var_189_string); // 0x69a NEW_2
	var_156_bool = var_188_bool; // 0x69b Mov
	return 10; // 0x69d Return
	
Label_1670:
	var_190_int = 1; // 0x686 PushI
	var_164_int = var_164_int + var_190_int; // 0x687 Add2
	goto Label_1660; // 0x688 Jump
}


func_756(var_0_object, var_1_object, var_2_object, var_3_string, var_371_object, var_372_object)
{
	var_0_object = var_372_object; // 0x2f5 TMov
	var_1_object = var_371_object; // 0x2f6 TMov
	var_3_string = 0; // 0x2f7 TMovB
	var_377_int = 1; // 0x2f8 PushI
	if(var_377_int == 0) goto Label_789; // 0x2f9 JumpB
	var_378_string = ""; // 0x2fa PushV
	var_378_string = "Neutral"; // 0x2fb MovS
	func_819(var_372_object, var_378_string); // 0x2fc NEW_2
	var_386_int = 535284; // 0x2fe PushI
	SetMessage(var_386_int); // 0x2ff TObjFunc
	ClearReplies(); // 0x301 TObjFunc
	var_387_int = 535285; // 0x303 PushI
	var_388_int = 36962; // 0x304 PushI
	var_389_int = 36961; // 0x305 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x306 TObjFunc
	var_390_int = 535292; // 0x308 PushI
	var_391_int = -1; // 0x309 PushI
	var_392_int = 36968; // 0x30a PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x30b TObjFunc
	var_393_int = 535293; // 0x30d PushI
	var_394_int = -1; // 0x30e PushI
	var_395_int = 36969; // 0x30f PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x310 TObjFunc
	goto Label_789; // 0x312 Jump
	
Label_789:
	var_396_bool = 0; // 0x315 PushV
	func_1902(var_396_bool); // 0x316 NEW_2
	if(var_396_bool == 0) goto Label_804; // 0x318 JumpB
	
Label_793:
	lshWaitForAnimEnd(); // 0x319 Func
	var_397_string = var_3_string; // 0x31b PushT
	if(var_397_string == 0) goto Label_798; // 0x31c JumpB
	goto Label_803; // 0x31d Jump
	
Label_803:
	goto Label_818; // 0x323 Jump
	
Label_818:
	return 0; // 0x332 Return
	
Label_798:
	var_398_string = ""; // 0x31e PushV
	var_398_string = var_2_object; // 0x31f MovT
	func_1694(var_398_string); // 0x320 NEW_2
	goto Label_793; // 0x322 Jump
	
Label_804:
	var_399_string = "all"; // 0x324 PushS
	var_400_string = "idle"; // 0x325 PushS
	PlayAnimation(var_399_string, var_400_string); // 0x326 Func
	
Label_808:
	WaitForAnimEnd(); // 0x328 Func
	var_401_string = var_3_string; // 0x32a PushT
	if(var_401_string == 0) goto Label_813; // 0x32b JumpB
	goto Label_818; // 0x32c Jump
	
Label_813:
	var_402_string = "all"; // 0x32d PushS
	var_403_string = "idle"; // 0x32e PushS
	PlayAnimation(var_402_string, var_403_string); // 0x32f Func
	goto Label_808; // 0x331 Jump
}


func_1396(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x574 PushV
	GetPosition(var_41_cvector); // 0x575 Func
	GetPosition(var_42_cvector); // 0x577 ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x579 Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x57a Or2
	return 6; // 0x57b Return
}


func_1779(var_94_int, var_95_int)
{
	var_96_object = Obj(); var_97_object = Obj(); // 0x6f3 PushV
	CreateIntVector(var_97_object); // 0x6f4 Func
	add(var_94_int); // 0x6f6 ObjFunc
	add(var_95_int); // 0x6f8 ObjFunc
	var_98_int = 3; // 0x6fa PushI
	SendWorldWndMessage(var_98_int, var_97_object); // 0x6fb Func
	return 2; // 0x6fd Return
}


func_1015(var_0_object, var_1_object, var_2_object, var_3_string, var_430_object, var_431_object)
{
	var_0_object = var_431_object; // 0x3f8 TMov
	var_1_object = var_430_object; // 0x3f9 TMov
	var_3_string = 0; // 0x3fa TMovB
	var_436_int = 1; // 0x3fb PushI
	if(var_436_int == 0) goto Label_1043; // 0x3fc JumpB
	var_437_string = ""; // 0x3fd PushV
	var_437_string = "Neutral"; // 0x3fe MovS
	func_1073(var_431_object, var_437_string); // 0x3ff NEW_2
	var_445_int = 540545; // 0x401 PushI
	SetMessage(var_445_int); // 0x402 TObjFunc
	ClearReplies(); // 0x404 TObjFunc
	var_446_int = 540546; // 0x406 PushI
	var_447_int = -1; // 0x407 PushI
	var_448_int = 42555; // 0x408 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x409 TObjFunc
	var_449_int = 540798; // 0x40b PushI
	var_450_int = -1; // 0x40c PushI
	var_451_int = 42847; // 0x40d PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x40e TObjFunc
	goto Label_1043; // 0x410 Jump
	
Label_1043:
	var_452_bool = 0; // 0x413 PushV
	func_1902(var_452_bool); // 0x414 NEW_2
	if(var_452_bool == 0) goto Label_1058; // 0x416 JumpB
	
Label_1047:
	lshWaitForAnimEnd(); // 0x417 Func
	var_453_string = var_3_string; // 0x419 PushT
	if(var_453_string == 0) goto Label_1052; // 0x41a JumpB
	goto Label_1057; // 0x41b Jump
	
Label_1057:
	goto Label_1072; // 0x421 Jump
	
Label_1072:
	return 0; // 0x430 Return
	
Label_1052:
	var_454_string = ""; // 0x41c PushV
	var_454_string = var_2_object; // 0x41d MovT
	func_1694(var_454_string); // 0x41e NEW_2
	goto Label_1047; // 0x420 Jump
	
Label_1058:
	var_455_string = "all"; // 0x422 PushS
	var_456_string = "idle"; // 0x423 PushS
	PlayAnimation(var_455_string, var_456_string); // 0x424 Func
	
Label_1062:
	WaitForAnimEnd(); // 0x426 Func
	var_457_string = var_3_string; // 0x428 PushT
	if(var_457_string == 0) goto Label_1067; // 0x429 JumpB
	goto Label_1072; // 0x42a Jump
	
Label_1067:
	var_458_string = "all"; // 0x42b PushS
	var_459_string = "idle"; // 0x42c PushS
	PlayAnimation(var_458_string, var_459_string); // 0x42d Func
	goto Label_1062; // 0x42f Jump
}


func_1144(var_0_object)
{
	var_22_bool = 0; // 0x478 PushV
	func_1464(var_22_bool); // 0x479 NEW_2
	var_25_bool = var_22_bool == 0; // 0x47b Not
	if(var_25_bool == 0) goto Label_1151; // 0x47c JumpB
	Hold(); // 0x47d Func
	
Label_1151:
	GetDirection(var_0_object); // 0x47f Func
	
Label_1153:
	func_1320(); // 0x482 NEW_2
	goto Label_1153; // 0x484 Jump
}


func_507(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object; // 0x1fc TMov
	var_1_object = var_209_object; // 0x1fd TMov
	var_3_string = 0; // 0x1fe TMovB
	var_215_int = 1; // 0x1ff PushI
	if(var_215_int == 0) goto Label_535; // 0x200 JumpB
	var_216_string = ""; // 0x201 PushV
	var_216_string = "Neutral"; // 0x202 MovS
	func_565(var_210_object, var_216_string); // 0x203 NEW_2
	var_233_int = 525468; // 0x205 PushI
	SetMessage(var_233_int); // 0x206 TObjFunc
	ClearReplies(); // 0x208 TObjFunc
	var_234_int = 525469; // 0x20a PushI
	var_235_int = 30746; // 0x20b PushI
	var_236_int = 26825; // 0x20c PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x20d TObjFunc
	var_237_int = 542158; // 0x20f PushI
	var_238_int = 44475; // 0x210 PushI
	var_239_int = 44474; // 0x211 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x212 TObjFunc
	goto Label_535; // 0x214 Jump
	
Label_535:
	var_240_bool = 0; // 0x217 PushV
	func_1902(var_240_bool); // 0x218 NEW_2
	if(var_240_bool == 0) goto Label_550; // 0x21a JumpB
	
Label_539:
	lshWaitForAnimEnd(); // 0x21b Func
	var_241_string = var_3_string; // 0x21d PushT
	if(var_241_string == 0) goto Label_544; // 0x21e JumpB
	goto Label_549; // 0x21f Jump
	
Label_549:
	goto Label_564; // 0x225 Jump
	
Label_564:
	return 0; // 0x234 Return
	
Label_544:
	var_242_string = ""; // 0x220 PushV
	var_242_string = var_2_object; // 0x221 MovT
	func_1694(var_242_string); // 0x222 NEW_2
	goto Label_539; // 0x224 Jump
	
Label_550:
	var_253_string = "all"; // 0x226 PushS
	var_254_string = "idle"; // 0x227 PushS
	PlayAnimation(var_253_string, var_254_string); // 0x228 Func
	
Label_554:
	WaitForAnimEnd(); // 0x22a Func
	var_255_string = var_3_string; // 0x22c PushT
	if(var_255_string == 0) goto Label_559; // 0x22d JumpB
	goto Label_564; // 0x22e Jump
	
Label_559:
	var_256_string = "all"; // 0x22f PushS
	var_257_string = "idle"; // 0x230 PushS
	PlayAnimation(var_256_string, var_257_string); // 0x231 Func
	goto Label_554; // 0x233 Jump
}


func_1404(var_54_bool, var_55_object, var_56_string)
{
	var_57_bool = 0; var_58_bool = 0; // 0x57c PushV
	var_59_string = "HasProperty"; // 0x57d PushS
	var_60_int = 2; // 0x57e PushI
	var_61_bool = IsFuncExist(var_55_object, var_59_string, var_60_int); // 0x57f FuncExist
	var_62_bool = var_61_bool == 0; // 0x580 Not
	if(var_62_bool == 0) goto Label_1412; // 0x581 JumpB
	var_54_bool = 0; // 0x582 MovB
	return 2; // 0x583 Return
	
Label_1412:
	HasProperty(var_56_string, var_58_bool); // 0x584 ObjFunc
	var_54_bool = var_58_bool; // 0x586 Mov
	return 2; // 0x587 Return
}


func_1791(var_80_object, var_81_int)
{
	var_83_int = 0; var_84_int = 0; // 0x6ff PushV
	var_85_object = Obj(); var_86_string = ""; var_87_int = 0; // 0x700 PushV
	var_85_object = var_80_object; // 0x701 Mov
	var_86_string = "money"; // 0x702 MovS
	var_87_int = var_81_int; // 0x703 Mov
	func_1438(var_86_string, var_87_int); // 0x704 NEW_2
	var_91_int = 0; // 0x706 PushI
	var_92_bool = var_81_int > var_91_int; // 0x707 GT
	if(var_92_bool == 0) goto Label_1809; // 0x708 JumpB
	var_93_string = "Money"; // 0x709 PushS
	GetInvItemByName(var_84_int, var_93_string); // 0x70a Func
	var_94_int = 0; var_95_int = 0; // 0x70c PushV
	var_94_int = var_84_int; // 0x70d Mov
	var_95_int = var_81_int; // 0x70e Mov
	func_1779(var_94_int, var_95_int); // 0x70f NEW_2
	
Label_1809:
	return 2; // 0x711 Return
}


