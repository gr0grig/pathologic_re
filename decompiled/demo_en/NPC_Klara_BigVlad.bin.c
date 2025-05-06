task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xb5 PushI
	if(var_23_int == 0) goto Label_425; // 0xb6 JumpB
	func_1738(); // 0xb8 NEW_2
	var_25_int = 26614; // 0xba PushI
	var_26_bool = var_22_cvector == var_25_int; // 0xbb Eq
	if(var_26_bool == 0) goto Label_194; // 0xbc JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0xbd PushV
	var_27_object = var_1_object; // 0xbe MovT
	var_28_object = var_0_object; // 0xbf MovT
	func_1920(); // 0xc0 NEW_2
	
Label_194:
	var_31_int = 26616; // 0xc2 PushI
	var_32_bool = var_22_cvector == var_31_int; // 0xc3 Eq
	if(var_32_bool == 0) goto Label_202; // 0xc4 JumpB
	var_33_object = Obj(); var_34_object = Obj(); // 0xc5 PushV
	var_33_object = var_1_object; // 0xc6 MovT
	var_34_object = var_0_object; // 0xc7 MovT
	func_1902(var_34_object); // 0xc8 NEW_2
	
Label_202:
	var_73_int = 44497; // 0xca PushI
	var_74_bool = var_22_cvector == var_73_int; // 0xcb Eq
	if(var_74_bool == 0) goto Label_210; // 0xcc JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0xcd PushV
	var_75_object = var_1_object; // 0xce MovT
	var_76_object = var_0_object; // 0xcf MovT
	func_1909(var_76_object); // 0xd0 NEW_2
	
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
	func_1926(var_121_object); // 0xe2 NEW_2
	if(var_120_bool == 0) goto Label_235; // 0xe4 JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0xe5 PushV
	var_129_object = var_1_object; // 0xe6 MovT
	func_1938(var_129_object); // 0xe7 NEW_2
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
	func_1900(var_213_bool); // 0x19f NEW_2
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
	func_1738(); // 0x24f NEW_2
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
	func_1900(var_71_bool); // 0x298 NEW_2
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
	func_1738(); // 0x34d NEW_2
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
	func_1900(var_74_bool); // 0x39b NEW_2
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
	func_1738(); // 0x44b NEW_2
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
	func_1900(var_51_bool); // 0x466 NEW_2
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
	func_1745(var_67_object); // 0x4d6 NEW_2
	var_66_object = var_67_object; // 0x4d7 Mov
	func_1612(var_66_object); // 0x4d9 NEW_2
	
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
	func_1692(var_22_string); // 0x4f9 NEW_2
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
	func_1692(var_28_string); // 0x508 NEW_2
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
	func_1967(var_39_object); // 0x51b NEW_2
	var_460_string = ""; // 0x51d PushV
	var_460_string = "Neutral"; // 0x51e MovS
	func_1692(var_460_string); // 0x51f NEW_2
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


func_1920()
{
	var_29_string = "ook2BigVlad1"; // 0x781 PushS
	var_30_int = 1; // 0x782 PushI
	SetVariable(var_29_string, var_30_int); // 0x783 Func
	return 0; // 0x785 Return
}


func_1537()
{
	var_259_bool = 0; var_260_bool = 0; // 0x601 PushV
	CameraSwitchToNormal(); // 0x602 Func
	var_261_bool = 0; // 0x604 PushV
	func_1900(var_261_bool); // 0x605 NEW_2
	if(var_261_bool == 0) goto Label_1545; // 0x607 JumpB
	goto Label_1553; // 0x608 Jump
	
Label_1553:
	return 2; // 0x611 Return
	
Label_1545:
	var_262_string = "head"; // 0x609 PushS
	HasAnimationTrack(var_260_bool, var_262_string); // 0x60a Func
	var_263_bool = var_260_bool; // 0x60c Push
	if(var_263_bool == 0) goto Label_1553; // 0x60d JumpB
	var_264_string = "head"; // 0x60e PushS
	UnlookAsync(var_264_string); // 0x60f Func
}


func_0(var_0_object, var_269_int, var_270_object)
{
	var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; var_275_bool = 0; var_276_object = Obj(); var_277_bool = 0; var_278_int = 0; var_279_bool = 0; // 0x0 PushV
	var_0_object = var_270_object; // 0x1 TMov
	var_280_bool = 0; var_281_object = Obj(); var_282_float = 0; // 0x2 PushV
	var_281_object = var_270_object; // 0x3 Mov
	var_282_float = 70.0; // 0x4 MovF
	func_1469(var_281_object, var_282_float); // 0x5 NEW_2
	var_283_bool = var_280_bool == 0; // 0x7 Not
	if(var_283_bool == 0) goto Label_11; // 0x8 JumpB
	var_269_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_276_object); // 0xb Func
	var_284_int = 0; // 0xd PushV
	func_1894(var_284_int); // 0xe NEW_2
	SetNPCName(var_284_int); // 0x10 ObjFunc
	var_285_int = 0; // 0x12 PushV
	func_1892(var_285_int); // 0x13 NEW_2
	SetNPCDescription(var_285_int); // 0x15 ObjFunc
	var_286_string = ""; // 0x17 PushV
	func_1896(var_286_string); // 0x18 NEW_2
	SetPhoto(var_286_string); // 0x1a ObjFunc
	var_287_string = ""; // 0x1c PushV
	func_1898(var_287_string); // 0x1d NEW_2
	SetPhoto2(var_287_string); // 0x1f ObjFunc
	var_288_int = 0; // 0x21 PushV
	func_1950(var_288_int); // 0x22 NEW_2
	SetPlayerName(var_288_int); // 0x24 ObjFunc
	var_278_int = -1; // 0x26 MovI
	IsOverrideActive(var_277_bool); // 0x27 Func
	var_289_bool = var_277_bool; // 0x29 Push
	if(var_289_bool == 0) goto Label_45; // 0x2a JumpB
	var_269_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_276_object); // 0x2d Func
	var_290_bool = 0; var_291_object = Obj(); // 0x2f PushV
	var_292_object = Obj(); // 0x30 PushV
	func_1745(var_292_object); // 0x31 NEW_2
	var_291_object = var_292_object; // 0x32 Mov
	func_1554(var_290_bool, var_291_object); // 0x34 NEW_2
	var_293_object = Obj(); var_294_object = Obj(); // 0x36 PushV
	var_293_object = var_270_object; // 0x37 Mov
	var_294_object = var_276_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_295_object, var_296_object, var_297_string, var_298_bool, var_293_object, var_294_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_279_bool); // 0x3d ObjFunc
	
Label_63:
	var_341_bool = var_279_bool == 0; // 0x3f Not
	if(var_341_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_279_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_342_object = Obj(); // 0x46 PushV
	var_342_object = var_270_object; // 0x47 Mov
	func_1537(); // 0x48 NEW_2
	StopDialog(var_276_object); // 0x4a Func
	GetReturnValue(var_278_int); // 0x4c ObjFunc
	var_269_int = var_278_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1926(var_310_bool)
{
	var_312_int = 0; var_313_string = ""; // 0x787 PushV
	var_313_string = "k2q01"; // 0x788 MovS
	func_1772(var_312_int, var_313_string); // 0x789 NEW_2
	var_316_int = 2; // 0x78b PushI
	var_317_bool = var_312_int == var_316_int; // 0x78c Eq
	if(var_317_bool == 0) goto Label_1936; // 0x78d JumpB
	var_310_bool = 1; // 0x78e MovB
	return 0; // 0x78f Return
	
Label_1936:
	var_310_bool = 0; // 0x790 MovB
	return 0; // 0x791 Return
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
	func_1761(var_64_float, var_65_float, var_66_float, var_67_float); // 0x598 NEW_2
	SetProperty(var_48_string, var_64_float); // 0x59a ObjFunc
	var_46_bool = 1; // 0x59c MovB
	return 2; // 0x59d Return
}


func_1808(var_35_bool, var_36_object, var_37_float)
{
	var_38_bool = var_36_object == 0; // 0x711 Not
	if(var_38_bool == 0) goto Label_1813; // 0x712 JumpB
	var_35_bool = 0; // 0x713 MovB
	return 0; // 0x714 Return
	
Label_1813:
	var_39_int = 0; // 0x715 PushI
	var_40_bool = var_37_float > var_39_int; // 0x716 GT
	if(var_40_bool == 0) goto Label_1820; // 0x717 JumpB
	var_41_int = 8; // 0x718 PushI
	SendWorldWndMessage(var_41_int); // 0x719 Func
	goto Label_1829; // 0x71b Jump
	
Label_1829:
	var_42_float = 0; // 0x725 PushV
	var_42_float = var_37_float; // 0x726 Mov
	func_1843(var_42_float); // 0x727 NEW_2
	var_46_bool = 0; var_47_object = Obj(); var_48_string = ""; var_49_float = 0; var_50_float = 0; var_51_float = 0; // 0x729 PushV
	var_47_object = var_36_object; // 0x72a Mov
	var_48_string = "reputation"; // 0x72b MovS
	var_49_float = var_37_float; // 0x72c Mov
	var_50_float = 0; // 0x72d MovI
	var_51_float = 1; // 0x72e MovI
	func_1416(var_46_bool, var_47_object, var_48_string, var_49_float, var_50_float, var_51_float); // 0x72f NEW_2
	var_35_bool = 1; // 0x731 MovB
	return 0; // 0x732 Return
	
Label_1820:
	var_70_int = 0; // 0x71c PushI
	var_71_bool = var_37_float < var_70_int; // 0x71d LT
	if(var_71_bool == 0) goto Label_1827; // 0x71e JumpB
	var_72_int = 9; // 0x71f PushI
	SendWorldWndMessage(var_72_int); // 0x720 Func
	goto Label_1829; // 0x722 Jump
	
Label_1827:
	var_35_bool = 0; // 0x723 MovB
	return 0; // 0x724 Return
}


func_1554(var_113_bool, var_114_object)
{
	var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_int = 0; // 0x612 PushV
	var_122_string = "voice_common"; // 0x613 PushS
	GetVariable(var_122_string, var_120_int); // 0x614 Func
	var_123_int = var_120_int; // 0x616 Push
	if(var_123_int == 0) goto Label_1592; // 0x617 JumpB
	var_124_bool = 0; var_125_object = Obj(); // 0x618 PushV
	var_125_object = var_114_object; // 0x619 Mov
	func_1612(var_125_object); // 0x61a NEW_2
	var_154_bool = var_124_bool == 0; // 0x61c Not
	if(var_154_bool == 0) goto Label_1574; // 0x61d JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x61e PushV
	var_156_object = var_114_object; // 0x61f Mov
	func_1649(var_156_object); // 0x620 NEW_2
	var_190_bool = var_155_bool == 0; // 0x622 Not
	if(var_190_bool == 0) goto Label_1574; // 0x623 JumpB
	var_113_bool = 0; // 0x624 MovB
	return 4; // 0x625 Return
	
Label_1574:
	var_191_int = 2; // 0x626 PushI
	irand(var_121_int, var_191_int); // 0x627 Func
	var_192_int = var_121_int; // 0x629 Push
	if(var_192_int == 0) goto Label_1587; // 0x62a JumpB
	var_193_string = "voice_common"; // 0x62b PushS
	var_194_int = 1; // 0x62c PushI
	var_195_int = var_120_int + var_194_int; // 0x62d Add
	var_196_int = 3; // 0x62e PushI
	var_197_int = var_195_int / var_196_int; // 0x62f Mod
	SetVariable(var_193_string, var_197_int); // 0x630 Func
	goto Label_1591; // 0x632 Jump
	
Label_1591:
	goto Label_1610; // 0x637 Jump
	
Label_1610:
	var_113_bool = 1; // 0x64a MovB
	return 4; // 0x64b Return
	
Label_1587:
	var_198_string = "voice_common"; // 0x633 PushS
	var_199_int = 0; // 0x634 PushI
	SetVariable(var_198_string, var_199_int); // 0x635 Func
	
Label_1592:
	var_200_bool = 0; var_201_object = Obj(); // 0x638 PushV
	var_201_object = var_114_object; // 0x639 Mov
	func_1649(var_201_object); // 0x63a NEW_2
	var_202_bool = var_200_bool == 0; // 0x63c Not
	if(var_202_bool == 0) goto Label_1606; // 0x63d JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x63e PushV
	var_204_object = var_114_object; // 0x63f Mov
	func_1612(var_204_object); // 0x640 NEW_2
	var_205_bool = var_203_bool == 0; // 0x642 Not
	if(var_205_bool == 0) goto Label_1606; // 0x643 JumpB
	var_113_bool = 0; // 0x644 MovB
	return 4; // 0x645 Return
	
Label_1606:
	var_206_string = "voice_common"; // 0x646 PushS
	var_207_int = 1; // 0x647 PushI
	SetVariable(var_206_string, var_207_int); // 0x648 Func
}


func_1938(var_318_bool)
{
	var_320_int = 0; var_321_string = ""; // 0x793 PushV
	var_321_string = "ook2BigVlad1"; // 0x794 MovS
	func_1772(var_320_int, var_321_string); // 0x795 NEW_2
	var_322_int = 0; // 0x797 PushI
	var_323_bool = var_320_int == var_322_int; // 0x798 Eq
	if(var_323_bool == 0) goto Label_1948; // 0x799 JumpB
	var_318_bool = 1; // 0x79a MovB
	return 0; // 0x79b Return
	
Label_1948:
	var_318_bool = 0; // 0x79c MovB
	return 0; // 0x79d Return
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


func_1692(var_241_string)
{
	var_242_bool = 0; var_243_float = 0; var_244_float = 0; var_245_bool = 0; var_246_float = 0; var_247_float = 0; // 0x69c PushV
	lshHasAnimation(var_245_bool, var_241_string); // 0x69d Func
	var_248_bool = var_245_bool; // 0x69f Push
	if(var_248_bool == 0) goto Label_1703; // 0x6a0 JumpB
	lshGetAnimTimes(var_241_string, var_246_float, var_247_float); // 0x6a1 Func
	var_249_bool = 0; // 0x6a3 PushB
	lshPlayAnimation(var_246_float, var_247_float, var_249_bool); // 0x6a4 Func
	goto Label_1707; // 0x6a6 Jump
	
Label_1707:
	return 6; // 0x6ab Return
	
Label_1703:
	var_250_string = "Can't find lsh animation : "; // 0x6a7 PushS
	var_251_int = var_250_string + var_241_string; // 0x6a8 Add
	Trace(var_251_int); // 0x6a9 Func
}


func_1438(var_86_string, var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x59e PushV
	GetProperty(var_86_string, var_89_int); // 0x59f ObjFunc
	var_90_int = var_89_int + var_87_int; // 0x5a1 Add
	SetProperty(var_86_string, var_90_int); // 0x5a2 ObjFunc
	return 2; // 0x5a4 Return
}


func_1950(var_104_int)
{
	var_105_int = 0; var_106_int = 0; // 0x79e PushV
	var_107_string = "branch"; // 0x79f PushS
	GetVariable(var_107_string, var_106_int); // 0x7a0 Func
	var_108_int = 0; // 0x7a2 PushI
	var_109_bool = var_106_int == var_108_int; // 0x7a3 Eq
	if(var_109_bool == 0) goto Label_1960; // 0x7a4 JumpB
	var_104_int = 1; // 0x7a5 MovI
	return 2; // 0x7a6 Return
	
Label_1960:
	var_110_int = 1; // 0x7a8 PushI
	var_111_bool = var_106_int == var_110_int; // 0x7a9 Eq
	if(var_111_bool == 0) goto Label_1965; // 0x7aa JumpB
	var_104_int = 2; // 0x7ab MovI
	return 2; // 0x7ac Return
	
Label_1965:
	var_104_int = 3; // 0x7ad MovI
	return 2; // 0x7ae Return
}


func_158(var_2_object, var_300_string)
{
	var_301_bool = 0; // 0x9f PushV
	func_1900(var_301_bool); // 0xa0 NEW_2
	var_302_bool = var_301_bool == 0; // 0xa2 Not
	if(var_302_bool == 0) goto Label_165; // 0xa3 JumpB
	return 0; // 0xa4 Return
	
Label_165:
	var_303_bool = var_300_string == var_2_object; // 0xa5 Eq
	if(var_303_bool == 0) goto Label_168; // 0xa6 JumpB
	return 0; // 0xa7 Return
	
Label_168:
	var_304_string = ""; var_305_bool = 0; // 0xa8 PushV
	var_304_string = var_300_string; // 0xa9 Mov
	var_306_string = ""; // 0xaa PushS
	var_307_bool = var_300_string == var_306_string; // 0xab Eq
	if(var_307_bool == 0) goto Label_175; // 0xac JumpB
	var_305_bool = 0; // 0xad MovB
	goto Label_176; // 0xae Jump
	
Label_176:
	func_1708(var_304_string, var_305_bool); // 0xb0 NEW_2
	var_2_object = var_300_string; // 0xb2 TMov
	return 0; // 0xb3 Return
	
Label_175:
	var_305_bool = 1; // 0xaf MovB
}


func_675(var_0_object, var_345_int, var_346_object)
{
	var_348_object = Obj(); var_349_bool = 0; var_350_int = 0; var_351_bool = 0; var_352_object = Obj(); var_353_bool = 0; var_354_int = 0; var_355_bool = 0; // 0x2a3 PushV
	var_0_object = var_346_object; // 0x2a4 TMov
	var_356_bool = 0; var_357_object = Obj(); var_358_float = 0; // 0x2a5 PushV
	var_357_object = var_346_object; // 0x2a6 Mov
	var_358_float = 70.0; // 0x2a7 MovF
	func_1469(var_357_object, var_358_float); // 0x2a8 NEW_2
	var_359_bool = var_356_bool == 0; // 0x2aa Not
	if(var_359_bool == 0) goto Label_686; // 0x2ab JumpB
	var_345_int = -2; // 0x2ac MovI
	return 8; // 0x2ad Return
	
Label_686:
	CreateDialog(var_352_object); // 0x2ae Func
	var_360_int = 0; // 0x2b0 PushV
	func_1894(var_360_int); // 0x2b1 NEW_2
	SetNPCName(var_360_int); // 0x2b3 ObjFunc
	var_361_int = 0; // 0x2b5 PushV
	func_1892(var_361_int); // 0x2b6 NEW_2
	SetNPCDescription(var_361_int); // 0x2b8 ObjFunc
	var_362_string = ""; // 0x2ba PushV
	func_1896(var_362_string); // 0x2bb NEW_2
	SetPhoto(var_362_string); // 0x2bd ObjFunc
	var_363_string = ""; // 0x2bf PushV
	func_1898(var_363_string); // 0x2c0 NEW_2
	SetPhoto2(var_363_string); // 0x2c2 ObjFunc
	var_364_int = 0; // 0x2c4 PushV
	func_1950(var_364_int); // 0x2c5 NEW_2
	SetPlayerName(var_364_int); // 0x2c7 ObjFunc
	var_354_int = -1; // 0x2c9 MovI
	IsOverrideActive(var_353_bool); // 0x2ca Func
	var_365_bool = var_353_bool; // 0x2cc Push
	if(var_365_bool == 0) goto Label_720; // 0x2cd JumpB
	var_345_int = -2; // 0x2ce MovI
	return 8; // 0x2cf Return
	
Label_720:
	DoDialog(var_352_object); // 0x2d0 Func
	var_366_bool = 0; var_367_object = Obj(); // 0x2d2 PushV
	var_368_object = Obj(); // 0x2d3 PushV
	func_1745(var_368_object); // 0x2d4 NEW_2
	var_367_object = var_368_object; // 0x2d5 Mov
	func_1554(var_366_bool, var_367_object); // 0x2d7 NEW_2
	var_369_object = Obj(); var_370_object = Obj(); // 0x2d9 PushV
	var_369_object = var_346_object; // 0x2da Mov
	var_370_object = var_352_object; // 0x2db Mov
	TaskCall(5); // 0x2dc TaskCall
	func_756(var_371_object, var_372_object, var_373_string, var_374_bool, var_369_object, var_370_object); // 0x2dd NEW_2
	TaskReturn(); // 0x2de TaskReturn
	IsDialogEnd(var_355_bool); // 0x2e0 ObjFunc
	
Label_738:
	var_402_bool = var_355_bool == 0; // 0x2e2 Not
	if(var_402_bool == 0) goto Label_745; // 0x2e3 JumpB
	sync(); // 0x2e4 Func
	IsDialogEnd(var_355_bool); // 0x2e6 ObjFunc
	goto Label_738; // 0x2e8 Jump
	
Label_745:
	var_403_object = Obj(); // 0x2e9 PushV
	var_403_object = var_346_object; // 0x2ea Mov
	func_1537(); // 0x2eb NEW_2
	StopDialog(var_352_object); // 0x2ed Func
	GetReturnValue(var_354_int); // 0x2ef ObjFunc
	var_345_int = var_354_int; // 0x2f1 Mov
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


func_934(var_0_object, var_404_int, var_405_object)
{
	var_407_object = Obj(); var_408_bool = 0; var_409_int = 0; var_410_bool = 0; var_411_object = Obj(); var_412_bool = 0; var_413_int = 0; var_414_bool = 0; // 0x3a6 PushV
	var_0_object = var_405_object; // 0x3a7 TMov
	var_415_bool = 0; var_416_object = Obj(); var_417_float = 0; // 0x3a8 PushV
	var_416_object = var_405_object; // 0x3a9 Mov
	var_417_float = 70.0; // 0x3aa MovF
	func_1469(var_416_object, var_417_float); // 0x3ab NEW_2
	var_418_bool = var_415_bool == 0; // 0x3ad Not
	if(var_418_bool == 0) goto Label_945; // 0x3ae JumpB
	var_404_int = -2; // 0x3af MovI
	return 8; // 0x3b0 Return
	
Label_945:
	CreateDialog(var_411_object); // 0x3b1 Func
	var_419_int = 0; // 0x3b3 PushV
	func_1894(var_419_int); // 0x3b4 NEW_2
	SetNPCName(var_419_int); // 0x3b6 ObjFunc
	var_420_int = 0; // 0x3b8 PushV
	func_1892(var_420_int); // 0x3b9 NEW_2
	SetNPCDescription(var_420_int); // 0x3bb ObjFunc
	var_421_string = ""; // 0x3bd PushV
	func_1896(var_421_string); // 0x3be NEW_2
	SetPhoto(var_421_string); // 0x3c0 ObjFunc
	var_422_string = ""; // 0x3c2 PushV
	func_1898(var_422_string); // 0x3c3 NEW_2
	SetPhoto2(var_422_string); // 0x3c5 ObjFunc
	var_423_int = 0; // 0x3c7 PushV
	func_1950(var_423_int); // 0x3c8 NEW_2
	SetPlayerName(var_423_int); // 0x3ca ObjFunc
	var_413_int = -1; // 0x3cc MovI
	IsOverrideActive(var_412_bool); // 0x3cd Func
	var_424_bool = var_412_bool; // 0x3cf Push
	if(var_424_bool == 0) goto Label_979; // 0x3d0 JumpB
	var_404_int = -2; // 0x3d1 MovI
	return 8; // 0x3d2 Return
	
Label_979:
	DoDialog(var_411_object); // 0x3d3 Func
	var_425_bool = 0; var_426_object = Obj(); // 0x3d5 PushV
	var_427_object = Obj(); // 0x3d6 PushV
	func_1745(var_427_object); // 0x3d7 NEW_2
	var_426_object = var_427_object; // 0x3d8 Mov
	func_1554(var_425_bool, var_426_object); // 0x3da NEW_2
	var_428_object = Obj(); var_429_object = Obj(); // 0x3dc PushV
	var_428_object = var_405_object; // 0x3dd Mov
	var_429_object = var_411_object; // 0x3de Mov
	TaskCall(7); // 0x3df TaskCall
	func_1015(var_430_object, var_431_object, var_432_string, var_433_bool, var_428_object, var_429_object); // 0x3e0 NEW_2
	TaskReturn(); // 0x3e1 TaskReturn
	IsDialogEnd(var_414_bool); // 0x3e3 ObjFunc
	
Label_997:
	var_458_bool = var_414_bool == 0; // 0x3e5 Not
	if(var_458_bool == 0) goto Label_1004; // 0x3e6 JumpB
	sync(); // 0x3e7 Func
	IsDialogEnd(var_414_bool); // 0x3e9 ObjFunc
	goto Label_997; // 0x3eb Jump
	
Label_1004:
	var_459_object = Obj(); // 0x3ec PushV
	var_459_object = var_405_object; // 0x3ed Mov
	func_1537(); // 0x3ee NEW_2
	StopDialog(var_411_object); // 0x3f0 Func
	GetReturnValue(var_413_int); // 0x3f2 ObjFunc
	var_404_int = var_413_int; // 0x3f4 Mov
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
	func_1875(var_40_int); // 0x532 NEW_2
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
	func_1868(var_67_string, var_68_int); // 0x556 NEW_2
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
	var_99_bool = var_53_bool == 0; // 0x1b1 Not
	if(var_99_bool == 0) goto Label_437; // 0x1b2 JumpB
	var_42_int = -2; // 0x1b3 MovI
	return 8; // 0x1b4 Return
	
Label_437:
	CreateDialog(var_49_object); // 0x1b5 Func
	var_100_int = 0; // 0x1b7 PushV
	func_1894(var_100_int); // 0x1b8 NEW_2
	SetNPCName(var_100_int); // 0x1ba ObjFunc
	var_101_int = 0; // 0x1bc PushV
	func_1892(var_101_int); // 0x1bd NEW_2
	SetNPCDescription(var_101_int); // 0x1bf ObjFunc
	var_102_string = ""; // 0x1c1 PushV
	func_1896(var_102_string); // 0x1c2 NEW_2
	SetPhoto(var_102_string); // 0x1c4 ObjFunc
	var_103_string = ""; // 0x1c6 PushV
	func_1898(var_103_string); // 0x1c7 NEW_2
	SetPhoto2(var_103_string); // 0x1c9 ObjFunc
	var_104_int = 0; // 0x1cb PushV
	func_1950(var_104_int); // 0x1cc NEW_2
	SetPlayerName(var_104_int); // 0x1ce ObjFunc
	var_51_int = -1; // 0x1d0 MovI
	IsOverrideActive(var_50_bool); // 0x1d1 Func
	var_112_bool = var_50_bool; // 0x1d3 Push
	if(var_112_bool == 0) goto Label_471; // 0x1d4 JumpB
	var_42_int = -2; // 0x1d5 MovI
	return 8; // 0x1d6 Return
	
Label_471:
	DoDialog(var_49_object); // 0x1d7 Func
	var_113_bool = 0; var_114_object = Obj(); // 0x1d9 PushV
	var_115_object = Obj(); // 0x1da PushV
	func_1745(var_115_object); // 0x1db NEW_2
	var_114_object = var_115_object; // 0x1dc Mov
	func_1554(var_113_bool, var_114_object); // 0x1de NEW_2
	var_208_object = Obj(); var_209_object = Obj(); // 0x1e0 PushV
	var_208_object = var_43_object; // 0x1e1 Mov
	var_209_object = var_49_object; // 0x1e2 Mov
	TaskCall(3); // 0x1e3 TaskCall
	func_507(var_210_object, var_211_object, var_212_string, var_213_bool, var_208_object, var_209_object); // 0x1e4 NEW_2
	TaskReturn(); // 0x1e5 TaskReturn
	IsDialogEnd(var_52_bool); // 0x1e7 ObjFunc
	
Label_489:
	var_257_bool = var_52_bool == 0; // 0x1e9 Not
	if(var_257_bool == 0) goto Label_496; // 0x1ea JumpB
	sync(); // 0x1eb Func
	IsDialogEnd(var_52_bool); // 0x1ed ObjFunc
	goto Label_489; // 0x1ef Jump
	
Label_496:
	var_258_object = Obj(); // 0x1f0 PushV
	var_258_object = var_43_object; // 0x1f1 Mov
	func_1537(); // 0x1f2 NEW_2
	StopDialog(var_49_object); // 0x1f4 Func
	GetReturnValue(var_51_int); // 0x1f6 ObjFunc
	var_42_int = var_51_int; // 0x1f8 Mov
	return 8; // 0x1f9 Return
}


func_1708(var_219_string, var_220_bool)
{
	var_223_bool = 0; var_224_float = 0; var_225_float = 0; var_226_bool = 0; var_227_float = 0; var_228_float = 0; // 0x6ac PushV
	lshHasAnimation(var_226_bool, var_219_string); // 0x6ad Func
	var_229_bool = var_226_bool; // 0x6af Push
	if(var_229_bool == 0) goto Label_1718; // 0x6b0 JumpB
	lshGetAnimTimes(var_219_string, var_227_float, var_228_float); // 0x6b1 Func
	lshPlayAnimation(var_227_float, var_228_float, var_220_bool); // 0x6b3 Func
	goto Label_1722; // 0x6b5 Jump
	
Label_1722:
	return 6; // 0x6ba Return
	
Label_1718:
	var_230_string = "Can't find lsh animation : "; // 0x6b6 PushS
	var_231_int = var_230_string + var_219_string; // 0x6b7 Add
	Trace(var_231_int); // 0x6b8 Func
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
	var_462_float = 0; var_463_float = 0; // 0x4b0 PushV
	var_464_int = 8; // 0x4b1 PushI
	var_465_int = 16; // 0x4b2 PushI
	rand(var_463_float, var_464_int, var_465_int); // 0x4b3 Func
	var_466_int = 10; // 0x4b5 PushI
	SetTimer(var_466_int, var_463_float); // 0x4b6 Func
	return 2; // 0x4b8 Return
}


func_1073(var_2_object, var_435_string)
{
	var_436_bool = 0; // 0x432 PushV
	func_1900(var_436_bool); // 0x433 NEW_2
	var_437_bool = var_436_bool == 0; // 0x435 Not
	if(var_437_bool == 0) goto Label_1080; // 0x436 JumpB
	return 0; // 0x437 Return
	
Label_1080:
	var_438_bool = var_435_string == var_2_object; // 0x438 Eq
	if(var_438_bool == 0) goto Label_1083; // 0x439 JumpB
	return 0; // 0x43a Return
	
Label_1083:
	var_439_string = ""; var_440_bool = 0; // 0x43b PushV
	var_439_string = var_435_string; // 0x43c Mov
	var_441_string = ""; // 0x43d PushS
	var_442_bool = var_435_string == var_441_string; // 0x43e Eq
	if(var_442_bool == 0) goto Label_1090; // 0x43f JumpB
	var_440_bool = 0; // 0x440 MovB
	goto Label_1091; // 0x441 Jump
	
Label_1091:
	func_1708(var_439_string, var_440_bool); // 0x443 NEW_2
	var_2_object = var_435_string; // 0x445 TMov
	return 0; // 0x446 Return
	
Label_1090:
	var_440_bool = 1; // 0x442 MovB
}


func_1967(var_39_object)
{
	var_40_bool = GlobalVars[1]; // 0x7b0 PushGE
	var_41_bool = var_40_bool == 0; // 0x7b1 Not
	if(var_41_bool == 0) goto Label_1980; // 0x7b2 JumpB
	var_42_int = 0; var_43_object = Obj(); // 0x7b3 PushV
	var_43_object = var_39_object; // 0x7b4 Mov
	TaskCall(2); // 0x7b5 TaskCall
	func_426(var_44_object, var_42_int, var_43_object); // 0x7b6 NEW_2
	TaskReturn(); // 0x7b7 TaskReturn
	var_265_bool = GlobalVars[1]; // 0x7b9 PushGE
	var_265_bool = 1; // 0x7ba MovB
	GlobalVars[1] = var_265_bool; // 0x7bb PopGE
	
Label_1980:
	var_266_bool = 0; var_267_int = 0; // 0x7bc PushV
	var_267_int = 2; // 0x7bd MovI
	func_1862(var_266_bool, var_267_int); // 0x7be NEW_2
	if(var_266_bool == 0) goto Label_1992; // 0x7c0 JumpB
	var_269_int = 0; var_270_object = Obj(); // 0x7c1 PushV
	var_270_object = var_39_object; // 0x7c2 Mov
	TaskCall(0); // 0x7c3 TaskCall
	func_0(var_271_object, var_269_int, var_270_object); // 0x7c4 NEW_2
	TaskReturn(); // 0x7c5 TaskReturn
	return 0; // 0x7c7 Return
	
Label_1992:
	var_343_bool = 0; var_344_int = 0; // 0x7c8 PushV
	var_344_int = 12; // 0x7c9 MovI
	func_1862(var_343_bool, var_344_int); // 0x7ca NEW_2
	if(var_343_bool == 0) goto Label_2004; // 0x7cc JumpB
	var_345_int = 0; var_346_object = Obj(); // 0x7cd PushV
	var_346_object = var_39_object; // 0x7ce Mov
	TaskCall(4); // 0x7cf TaskCall
	func_675(var_347_object, var_345_int, var_346_object); // 0x7d0 NEW_2
	TaskReturn(); // 0x7d1 TaskReturn
	return 0; // 0x7d3 Return
	
Label_2004:
	var_404_int = 0; var_405_object = Obj(); // 0x7d4 PushV
	var_405_object = var_39_object; // 0x7d5 Mov
	TaskCall(6); // 0x7d6 TaskCall
	func_934(var_406_object, var_404_int, var_405_object); // 0x7d7 NEW_2
	TaskReturn(); // 0x7d8 TaskReturn
	return 0; // 0x7da Return
}


func_819(var_2_object, var_376_string)
{
	var_377_bool = 0; // 0x334 PushV
	func_1900(var_377_bool); // 0x335 NEW_2
	var_378_bool = var_377_bool == 0; // 0x337 Not
	if(var_378_bool == 0) goto Label_826; // 0x338 JumpB
	return 0; // 0x339 Return
	
Label_826:
	var_379_bool = var_376_string == var_2_object; // 0x33a Eq
	if(var_379_bool == 0) goto Label_829; // 0x33b JumpB
	return 0; // 0x33c Return
	
Label_829:
	var_380_string = ""; var_381_bool = 0; // 0x33d PushV
	var_380_string = var_376_string; // 0x33e Mov
	var_382_string = ""; // 0x33f PushS
	var_383_bool = var_376_string == var_382_string; // 0x340 Eq
	if(var_383_bool == 0) goto Label_836; // 0x341 JumpB
	var_381_bool = 0; // 0x342 MovB
	goto Label_837; // 0x343 Jump
	
Label_837:
	func_1708(var_380_string, var_381_bool); // 0x345 NEW_2
	var_2_object = var_376_string; // 0x347 TMov
	return 0; // 0x348 Return
	
Label_836:
	var_381_bool = 1; // 0x344 MovB
}


func_1843(var_42_float)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x733 PushV
	CreateFloatVector(var_44_object); // 0x734 Func
	add(var_42_float); // 0x736 ObjFunc
	var_45_int = 16; // 0x738 PushI
	SendWorldWndMessage(var_45_int, var_44_object); // 0x739 Func
	return 2; // 0x73b Return
}


func_565(var_2_object, var_215_string)
{
	var_216_bool = 0; // 0x236 PushV
	func_1900(var_216_bool); // 0x237 NEW_2
	var_217_bool = var_216_bool == 0; // 0x239 Not
	if(var_217_bool == 0) goto Label_572; // 0x23a JumpB
	return 0; // 0x23b Return
	
Label_572:
	var_218_bool = var_215_string == var_2_object; // 0x23c Eq
	if(var_218_bool == 0) goto Label_575; // 0x23d JumpB
	return 0; // 0x23e Return
	
Label_575:
	var_219_string = ""; var_220_bool = 0; // 0x23f PushV
	var_219_string = var_215_string; // 0x240 Mov
	var_221_string = ""; // 0x241 PushS
	var_222_bool = var_215_string == var_221_string; // 0x242 Eq
	if(var_222_bool == 0) goto Label_582; // 0x243 JumpB
	var_220_bool = 0; // 0x244 MovB
	goto Label_583; // 0x245 Jump
	
Label_583:
	func_1708(var_219_string, var_220_bool); // 0x247 NEW_2
	var_2_object = var_215_string; // 0x249 TMov
	return 0; // 0x24a Return
	
Label_582:
	var_220_bool = 1; // 0x246 MovB
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
	var_461_int = 10; // 0x4b9 PushI
	KillTimer(var_461_int); // 0x4ba Func
	return 0; // 0x4bc Return
}


func_1723(var_147_bool, var_148_string)
{
	var_149_bool = 0; var_150_bool = 0; // 0x6bb PushV
	var_151_bool = 0; // 0x6bc PushV
	func_1900(var_151_bool); // 0x6bd NEW_2
	if(var_151_bool == 0) goto Label_1736; // 0x6bf JumpB
	lshHasSpeech(var_150_bool, var_148_string); // 0x6c0 Func
	var_152_bool = var_150_bool; // 0x6c2 Push
	if(var_152_bool == 0) goto Label_1736; // 0x6c3 JumpB
	lshPlaySpeech(var_148_string); // 0x6c4 Func
	var_147_bool = 1; // 0x6c6 MovB
	return 2; // 0x6c7 Return
	
Label_1736:
	var_147_bool = 0; // 0x6c8 MovB
	return 2; // 0x6c9 Return
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
	func_1751(var_80_cvector, var_81_cvector); // 0x5d8 NEW_2
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
	CameraTransit(var_71_cvector, var_69_cvector); // 0x5e8 Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0x5ea PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0x5eb PushE
	Rotate(var_93_float, var_94_float); // 0x5ec Func
	var_95_bool = 0; // 0x5ee PushV
	func_1900(var_95_bool); // 0x5ef NEW_2
	if(var_95_bool == 0) goto Label_1523; // 0x5f1 JumpB
	goto Label_1531; // 0x5f2 Jump
	
Label_1531:
	CameraWaitForPlayFinish(); // 0x5fb Func
	ResumeWorld(); // 0x5fd Func
	var_53_bool = 1; // 0x5ff MovB
	return 18; // 0x600 Return
	
Label_1523:
	var_96_string = "head"; // 0x5f3 PushS
	HasAnimationTrack(var_73_bool, var_96_string); // 0x5f4 Func
	var_97_bool = var_73_bool; // 0x5f6 Push
	if(var_97_bool == 0) goto Label_1531; // 0x5f7 JumpB
	var_98_string = "head"; // 0x5f8 PushS
	LookAsyncCamera(var_98_string); // 0x5f9 Func
}


func_1853(var_168_int)
{
	var_169_float = 0; var_170_float = 0; // 0x73d PushV
	GetGameTime(var_170_float); // 0x73e Func
	var_171_int = 1; // 0x740 PushI
	var_172_int = 0; // 0x741 PushV
	var_173_int = 24; // 0x742 PushI
	var_172_int = var_170_float / var_170_float; // 0x743 Div2
	var_168_int = var_171_int + var_172_int; // 0x744 Add2
	return 2; // 0x745 Return
}


func_1862(var_266_bool, var_267_int)
{
	var_268_int = 0; // 0x747 PushV
	func_1853(var_268_int); // 0x748 NEW_2
	var_266_bool = var_268_int == var_267_int; // 0x74a Eq2
	return 0; // 0x74b Return
}


func_1738()
{
	var_24_bool = 0; // 0x6ca PushV
	func_1900(var_24_bool); // 0x6cb NEW_2
	if(var_24_bool == 0) goto Label_1744; // 0x6cd JumpB
	lshStopSpeech(); // 0x6ce Func
	
Label_1744:
	return 0; // 0x6d0 Return
}


func_1612(var_124_bool)
{
	var_126_string = ""; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_string = ""; var_131_string = ""; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_string = ""; // 0x64c PushV
	var_131_string = "c"; // 0x64d MovS
	var_132_int = 0; // 0x64e MovI
	
Label_1615:
	var_136_int = 1; // 0x64f PushI
	if(var_136_int == 0) goto Label_1628; // 0x650 JumpB
	var_137_int = 1; // 0x651 PushI
	var_138_int = var_132_int + var_137_int; // 0x652 Add
	var_139_int = var_131_string + var_138_int; // 0x653 Add
	HasProperty(var_139_int, var_133_bool); // 0x654 ObjFunc
	var_140_bool = var_133_bool == 0; // 0x656 Not
	if(var_140_bool == 0) goto Label_1625; // 0x657 JumpB
	goto Label_1628; // 0x658 Jump
	
Label_1628:
	var_141_bool = var_132_int == 0; // 0x65c Not
	if(var_141_bool == 0) goto Label_1632; // 0x65d JumpB
	var_124_bool = 0; // 0x65e MovB
	return 10; // 0x65f Return
	
Label_1632:
	var_134_int = 0; // 0x660 MovI
	var_142_int = 1; // 0x661 PushI
	var_143_bool = var_132_int > var_142_int; // 0x662 GT
	if(var_143_bool == 0) goto Label_1638; // 0x663 JumpB
	irand(var_134_int, var_132_int); // 0x664 Func
	
Label_1638:
	var_144_int = 1; // 0x666 PushI
	var_145_int = var_134_int + var_144_int; // 0x667 Add
	var_146_int = var_131_string + var_145_int; // 0x668 Add
	GetProperty(var_146_int, var_135_string); // 0x669 ObjFunc
	var_147_bool = 0; var_148_string = ""; // 0x66b PushV
	var_148_string = var_135_string; // 0x66c Mov
	func_1723(var_147_bool, var_148_string); // 0x66d NEW_2
	var_124_bool = var_147_bool; // 0x66e Mov
	return 10; // 0x670 Return
	
Label_1625:
	var_153_int = 1; // 0x659 PushI
	var_132_int = var_132_int + var_153_int; // 0x65a Add2
	goto Label_1615; // 0x65b Jump
}


func_1868(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x74c PushV
	var_49_string = "idle"; // 0x74d MovS
	var_50_int = var_47_int; // 0x74e Push
	if(var_50_int == 0) goto Label_1873; // 0x74f JumpB
	var_49_string = var_49_string + var_47_int; // 0x750 Add2
	
Label_1873:
	var_46_string = var_49_string; // 0x751 Mov
	return 2; // 0x752 Return
}


func_1745(var_115_object)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x6d1 PushV
	self(var_117_object); // 0x6d2 Func
	var_115_object = var_117_object; // 0x6d4 Mov
	return 2; // 0x6d5 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_293_object, var_294_object)
{
	var_0_object = var_294_object; // 0x52 TMov
	var_1_object = var_293_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_299_int = 1; // 0x55 PushI
	if(var_299_int == 0) goto Label_128; // 0x56 JumpB
	var_300_string = ""; // 0x57 PushV
	var_300_string = "Neutral"; // 0x58 MovS
	func_158(var_294_object, var_300_string); // 0x59 NEW_2
	var_308_int = 525245; // 0x5b PushI
	SetMessage(var_308_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_309_bool = 0; // 0x60 PushV
	var_309_bool = 0; // 0x61 MovB
	var_310_bool = 0; var_311_object = Obj(); // 0x62 PushV
	var_311_object = var_1_object; // 0x63 MovT
	func_1926(var_311_object); // 0x64 NEW_2
	if(var_310_bool == 0) goto Label_109; // 0x66 JumpB
	var_318_bool = 0; var_319_object = Obj(); // 0x67 PushV
	var_319_object = var_1_object; // 0x68 MovT
	func_1938(var_319_object); // 0x69 NEW_2
	if(var_318_bool == 0) goto Label_109; // 0x6b JumpB
	var_309_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_309_bool == 0) goto Label_115; // 0x6d JumpB
	var_324_int = 525246; // 0x6e PushI
	var_325_int = 44478; // 0x6f PushI
	var_326_int = 26614; // 0x70 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x71 TObjFunc
	
Label_115:
	var_327_int = 525249; // 0x73 PushI
	var_328_int = -1; // 0x74 PushI
	var_329_int = 26617; // 0x75 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x76 TObjFunc
	var_330_int = 529151; // 0x78 PushI
	var_331_int = -1; // 0x79 PushI
	var_332_int = 30598; // 0x7a PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x7b TObjFunc
	goto Label_128; // 0x7d Jump
	
Label_128:
	var_333_bool = 0; // 0x80 PushV
	func_1900(var_333_bool); // 0x81 NEW_2
	if(var_333_bool == 0) goto Label_143; // 0x83 JumpB
	
Label_132:
	lshWaitForAnimEnd(); // 0x84 Func
	var_334_string = var_3_string; // 0x86 PushT
	if(var_334_string == 0) goto Label_137; // 0x87 JumpB
	goto Label_142; // 0x88 Jump
	
Label_142:
	goto Label_157; // 0x8e Jump
	
Label_157:
	return 0; // 0x9d Return
	
Label_137:
	var_335_string = ""; // 0x89 PushV
	var_335_string = var_2_object; // 0x8a MovT
	func_1692(var_335_string); // 0x8b NEW_2
	goto Label_132; // 0x8d Jump
	
Label_143:
	var_336_string = "all"; // 0x8f PushS
	var_337_string = "idle"; // 0x90 PushS
	PlayAnimation(var_336_string, var_337_string); // 0x91 Func
	
Label_147:
	WaitForAnimEnd(); // 0x93 Func
	var_338_string = var_3_string; // 0x95 PushT
	if(var_338_string == 0) goto Label_152; // 0x96 JumpB
	goto Label_157; // 0x97 Jump
	
Label_152:
	var_339_string = "all"; // 0x98 PushS
	var_340_string = "idle"; // 0x99 PushS
	PlayAnimation(var_339_string, var_340_string); // 0x9a Func
	goto Label_147; // 0x9c Jump
}


func_1875(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x753 PushV
	var_43_int = 0; // 0x754 MovI
	
Label_1877:
	var_45_string = "all"; // 0x755 PushS
	var_46_string = ""; var_47_int = 0; // 0x756 PushV
	var_47_int = var_43_int; // 0x757 Mov
	func_1868(var_46_string, var_47_int); // 0x758 NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x75a Func
	var_51_bool = var_44_bool == 0; // 0x75c Not
	if(var_51_bool == 0) goto Label_1887; // 0x75d JumpB
	goto Label_1890; // 0x75e Jump
	
Label_1890:
	var_40_int = var_43_int; // 0x762 Mov
	return 4; // 0x763 Return
	
Label_1887:
	var_52_int = 1; // 0x75f PushI
	var_43_int = var_43_int + var_52_int; // 0x760 Add2
	goto Label_1877; // 0x761 Jump
}


func_1751(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x6d7 PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x6d8 Or
	var_84_float = sqrt(var_85_int); // 0x6d9 Sqrt2
	var_86_float = 0.0; // 0x6da PushF
	var_87_bool = var_84_float < var_86_float; // 0x6db LT
	if(var_87_bool == 0) goto Label_1759; // 0x6dc JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x6dd MovV
	return 2; // 0x6de Return
	
Label_1759:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x6df Div2
	return 2; // 0x6e0 Return
}


func_1761(var_64_float, var_65_float, var_66_float, var_67_float)
{
	var_68_bool = var_65_float < var_66_float; // 0x6e2 LT
	if(var_68_bool == 0) goto Label_1766; // 0x6e3 JumpB
	var_64_float = var_66_float; // 0x6e4 Mov
	return 0; // 0x6e5 Return
	
Label_1766:
	var_69_bool = var_65_float > var_67_float; // 0x6e6 GT
	if(var_69_bool == 0) goto Label_1770; // 0x6e7 JumpB
	var_64_float = var_67_float; // 0x6e8 Mov
	return 0; // 0x6e9 Return
	
Label_1770:
	var_64_float = var_65_float; // 0x6ea Mov
	return 0; // 0x6eb Return
}


func_1892(var_101_int)
{
	var_101_int = 515531; // 0x764 MovI
	return 0; // 0x765 Return
}


func_1894(var_100_int)
{
	var_100_int = 502857; // 0x766 MovI
	return 0; // 0x767 Return
}


func_1896(var_102_string)
{
	var_102_string = "ui/NPC_BigVlad.png"; // 0x768 MovS
	return 0; // 0x769 Return
}


func_1898(var_103_string)
{
	var_103_string = "ui/NPC_BigVlad_b.png"; // 0x76a MovS
	return 0; // 0x76b Return
}


func_1900(var_95_bool)
{
	var_95_bool = 1; // 0x76c MovB
	return 0; // 0x76d Return
}


func_1389(var_60_bool)
{
	var_60_bool = 1; // 0x56d MovB
	return 0; // 0x56e Return
}


func_1902(var_33_object)
{
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0; // 0x76f PushV
	var_36_object = var_33_object; // 0x770 Mov
	var_37_float = 0.02; // 0x771 MovF
	func_1808(var_35_bool, var_36_object, var_37_float); // 0x772 NEW_2
	return 0; // 0x774 Return
}


func_1391()
{
	StopAnimation(); // 0x56f Func
	StopGroup0(); // 0x571 Func
	return 0; // 0x573 Return
}


func_1772(var_312_int, var_313_string)
{
	var_314_int = 0; var_315_int = 0; // 0x6ec PushV
	GetVariable(var_313_string, var_315_int); // 0x6ed Func
	var_312_int = var_315_int; // 0x6ef Mov
	return 2; // 0x6f0 Return
}


func_1649(var_155_bool)
{
	var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; var_162_string = ""; var_163_int = 0; var_164_bool = 0; var_165_int = 0; var_166_string = ""; // 0x671 PushV
	var_167_string = "d"; // 0x672 PushS
	var_168_int = 0; // 0x673 PushV
	func_1853(var_168_int); // 0x674 NEW_2
	var_174_int = var_167_string + var_168_int; // 0x676 Add
	var_175_string = "m"; // 0x677 PushS
	var_162_string = var_174_int + var_175_string; // 0x678 Add2
	var_163_int = 0; // 0x679 MovI
	
Label_1658:
	var_176_int = 1; // 0x67a PushI
	if(var_176_int == 0) goto Label_1671; // 0x67b JumpB
	var_177_int = 1; // 0x67c PushI
	var_178_int = var_163_int + var_177_int; // 0x67d Add
	var_179_int = var_162_string + var_178_int; // 0x67e Add
	HasProperty(var_179_int, var_164_bool); // 0x67f ObjFunc
	var_180_bool = var_164_bool == 0; // 0x681 Not
	if(var_180_bool == 0) goto Label_1668; // 0x682 JumpB
	goto Label_1671; // 0x683 Jump
	
Label_1671:
	var_181_bool = var_163_int == 0; // 0x687 Not
	if(var_181_bool == 0) goto Label_1675; // 0x688 JumpB
	var_155_bool = 0; // 0x689 MovB
	return 10; // 0x68a Return
	
Label_1675:
	var_165_int = 0; // 0x68b MovI
	var_182_int = 1; // 0x68c PushI
	var_183_bool = var_163_int > var_182_int; // 0x68d GT
	if(var_183_bool == 0) goto Label_1681; // 0x68e JumpB
	irand(var_165_int, var_163_int); // 0x68f Func
	
Label_1681:
	var_184_int = 1; // 0x691 PushI
	var_185_int = var_165_int + var_184_int; // 0x692 Add
	var_186_int = var_162_string + var_185_int; // 0x693 Add
	GetProperty(var_186_int, var_166_string); // 0x694 ObjFunc
	var_187_bool = 0; var_188_string = ""; // 0x696 PushV
	var_188_string = var_166_string; // 0x697 Mov
	func_1723(var_187_bool, var_188_string); // 0x698 NEW_2
	var_155_bool = var_187_bool; // 0x699 Mov
	return 10; // 0x69b Return
	
Label_1668:
	var_189_int = 1; // 0x684 PushI
	var_163_int = var_163_int + var_189_int; // 0x685 Add2
	goto Label_1658; // 0x686 Jump
}


func_1777(var_94_int, var_95_int)
{
	var_96_object = Obj(); var_97_object = Obj(); // 0x6f1 PushV
	CreateIntVector(var_97_object); // 0x6f2 Func
	add(var_94_int); // 0x6f4 ObjFunc
	add(var_95_int); // 0x6f6 ObjFunc
	var_98_int = 3; // 0x6f8 PushI
	SendWorldWndMessage(var_98_int, var_97_object); // 0x6f9 Func
	return 2; // 0x6fb Return
}


func_756(var_0_object, var_1_object, var_2_object, var_3_string, var_369_object, var_370_object)
{
	var_0_object = var_370_object; // 0x2f5 TMov
	var_1_object = var_369_object; // 0x2f6 TMov
	var_3_string = 0; // 0x2f7 TMovB
	var_375_int = 1; // 0x2f8 PushI
	if(var_375_int == 0) goto Label_789; // 0x2f9 JumpB
	var_376_string = ""; // 0x2fa PushV
	var_376_string = "Neutral"; // 0x2fb MovS
	func_819(var_370_object, var_376_string); // 0x2fc NEW_2
	var_384_int = 535284; // 0x2fe PushI
	SetMessage(var_384_int); // 0x2ff TObjFunc
	ClearReplies(); // 0x301 TObjFunc
	var_385_int = 535285; // 0x303 PushI
	var_386_int = 36962; // 0x304 PushI
	var_387_int = 36961; // 0x305 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x306 TObjFunc
	var_388_int = 535292; // 0x308 PushI
	var_389_int = -1; // 0x309 PushI
	var_390_int = 36968; // 0x30a PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x30b TObjFunc
	var_391_int = 535293; // 0x30d PushI
	var_392_int = -1; // 0x30e PushI
	var_393_int = 36969; // 0x30f PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x310 TObjFunc
	goto Label_789; // 0x312 Jump
	
Label_789:
	var_394_bool = 0; // 0x315 PushV
	func_1900(var_394_bool); // 0x316 NEW_2
	if(var_394_bool == 0) goto Label_804; // 0x318 JumpB
	
Label_793:
	lshWaitForAnimEnd(); // 0x319 Func
	var_395_string = var_3_string; // 0x31b PushT
	if(var_395_string == 0) goto Label_798; // 0x31c JumpB
	goto Label_803; // 0x31d Jump
	
Label_803:
	goto Label_818; // 0x323 Jump
	
Label_818:
	return 0; // 0x332 Return
	
Label_798:
	var_396_string = ""; // 0x31e PushV
	var_396_string = var_2_object; // 0x31f MovT
	func_1692(var_396_string); // 0x320 NEW_2
	goto Label_793; // 0x322 Jump
	
Label_804:
	var_397_string = "all"; // 0x324 PushS
	var_398_string = "idle"; // 0x325 PushS
	PlayAnimation(var_397_string, var_398_string); // 0x326 Func
	
Label_808:
	WaitForAnimEnd(); // 0x328 Func
	var_399_string = var_3_string; // 0x32a PushT
	if(var_399_string == 0) goto Label_813; // 0x32b JumpB
	goto Label_818; // 0x32c Jump
	
Label_813:
	var_400_string = "all"; // 0x32d PushS
	var_401_string = "idle"; // 0x32e PushS
	PlayAnimation(var_400_string, var_401_string); // 0x32f Func
	goto Label_808; // 0x331 Jump
}


func_1909(var_75_object)
{
	var_77_int = 0; var_78_int = 0; // 0x775 PushV
	var_79_int = 1000; // 0x776 PushI
	irand(var_78_int, var_79_int); // 0x777 Func
	var_80_object = Obj(); var_81_int = 0; // 0x779 PushV
	var_80_object = var_75_object; // 0x77a Mov
	var_82_int = 2000; // 0x77b PushI
	var_81_int = var_78_int + var_82_int; // 0x77c Add2
	func_1789(var_80_object, var_81_int); // 0x77d NEW_2
	return 2; // 0x77f Return
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


func_1015(var_0_object, var_1_object, var_2_object, var_3_string, var_428_object, var_429_object)
{
	var_0_object = var_429_object; // 0x3f8 TMov
	var_1_object = var_428_object; // 0x3f9 TMov
	var_3_string = 0; // 0x3fa TMovB
	var_434_int = 1; // 0x3fb PushI
	if(var_434_int == 0) goto Label_1043; // 0x3fc JumpB
	var_435_string = ""; // 0x3fd PushV
	var_435_string = "Neutral"; // 0x3fe MovS
	func_1073(var_429_object, var_435_string); // 0x3ff NEW_2
	var_443_int = 540545; // 0x401 PushI
	SetMessage(var_443_int); // 0x402 TObjFunc
	ClearReplies(); // 0x404 TObjFunc
	var_444_int = 540546; // 0x406 PushI
	var_445_int = -1; // 0x407 PushI
	var_446_int = 42555; // 0x408 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x409 TObjFunc
	var_447_int = 540798; // 0x40b PushI
	var_448_int = -1; // 0x40c PushI
	var_449_int = 42847; // 0x40d PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x40e TObjFunc
	goto Label_1043; // 0x410 Jump
	
Label_1043:
	var_450_bool = 0; // 0x413 PushV
	func_1900(var_450_bool); // 0x414 NEW_2
	if(var_450_bool == 0) goto Label_1058; // 0x416 JumpB
	
Label_1047:
	lshWaitForAnimEnd(); // 0x417 Func
	var_451_string = var_3_string; // 0x419 PushT
	if(var_451_string == 0) goto Label_1052; // 0x41a JumpB
	goto Label_1057; // 0x41b Jump
	
Label_1057:
	goto Label_1072; // 0x421 Jump
	
Label_1072:
	return 0; // 0x430 Return
	
Label_1052:
	var_452_string = ""; // 0x41c PushV
	var_452_string = var_2_object; // 0x41d MovT
	func_1692(var_452_string); // 0x41e NEW_2
	goto Label_1047; // 0x420 Jump
	
Label_1058:
	var_453_string = "all"; // 0x422 PushS
	var_454_string = "idle"; // 0x423 PushS
	PlayAnimation(var_453_string, var_454_string); // 0x424 Func
	
Label_1062:
	WaitForAnimEnd(); // 0x426 Func
	var_455_string = var_3_string; // 0x428 PushT
	if(var_455_string == 0) goto Label_1067; // 0x429 JumpB
	goto Label_1072; // 0x42a Jump
	
Label_1067:
	var_456_string = "all"; // 0x42b PushS
	var_457_string = "idle"; // 0x42c PushS
	PlayAnimation(var_456_string, var_457_string); // 0x42d Func
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


func_507(var_0_object, var_1_object, var_2_object, var_3_string, var_208_object, var_209_object)
{
	var_0_object = var_209_object; // 0x1fc TMov
	var_1_object = var_208_object; // 0x1fd TMov
	var_3_string = 0; // 0x1fe TMovB
	var_214_int = 1; // 0x1ff PushI
	if(var_214_int == 0) goto Label_535; // 0x200 JumpB
	var_215_string = ""; // 0x201 PushV
	var_215_string = "Neutral"; // 0x202 MovS
	func_565(var_209_object, var_215_string); // 0x203 NEW_2
	var_232_int = 525468; // 0x205 PushI
	SetMessage(var_232_int); // 0x206 TObjFunc
	ClearReplies(); // 0x208 TObjFunc
	var_233_int = 525469; // 0x20a PushI
	var_234_int = 30746; // 0x20b PushI
	var_235_int = 26825; // 0x20c PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x20d TObjFunc
	var_236_int = 542158; // 0x20f PushI
	var_237_int = 44475; // 0x210 PushI
	var_238_int = 44474; // 0x211 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x212 TObjFunc
	goto Label_535; // 0x214 Jump
	
Label_535:
	var_239_bool = 0; // 0x217 PushV
	func_1900(var_239_bool); // 0x218 NEW_2
	if(var_239_bool == 0) goto Label_550; // 0x21a JumpB
	
Label_539:
	lshWaitForAnimEnd(); // 0x21b Func
	var_240_string = var_3_string; // 0x21d PushT
	if(var_240_string == 0) goto Label_544; // 0x21e JumpB
	goto Label_549; // 0x21f Jump
	
Label_549:
	goto Label_564; // 0x225 Jump
	
Label_564:
	return 0; // 0x234 Return
	
Label_544:
	var_241_string = ""; // 0x220 PushV
	var_241_string = var_2_object; // 0x221 MovT
	func_1692(var_241_string); // 0x222 NEW_2
	goto Label_539; // 0x224 Jump
	
Label_550:
	var_252_string = "all"; // 0x226 PushS
	var_253_string = "idle"; // 0x227 PushS
	PlayAnimation(var_252_string, var_253_string); // 0x228 Func
	
Label_554:
	WaitForAnimEnd(); // 0x22a Func
	var_254_string = var_3_string; // 0x22c PushT
	if(var_254_string == 0) goto Label_559; // 0x22d JumpB
	goto Label_564; // 0x22e Jump
	
Label_559:
	var_255_string = "all"; // 0x22f PushS
	var_256_string = "idle"; // 0x230 PushS
	PlayAnimation(var_255_string, var_256_string); // 0x231 Func
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


func_1789(var_80_object, var_81_int)
{
	var_83_int = 0; var_84_int = 0; // 0x6fd PushV
	var_85_object = Obj(); var_86_string = ""; var_87_int = 0; // 0x6fe PushV
	var_85_object = var_80_object; // 0x6ff Mov
	var_86_string = "money"; // 0x700 MovS
	var_87_int = var_81_int; // 0x701 Mov
	func_1438(var_86_string, var_87_int); // 0x702 NEW_2
	var_91_int = 0; // 0x704 PushI
	var_92_bool = var_81_int > var_91_int; // 0x705 GT
	if(var_92_bool == 0) goto Label_1807; // 0x706 JumpB
	var_93_string = "Money"; // 0x707 PushS
	GetInvItemByName(var_84_int, var_93_string); // 0x708 Func
	var_94_int = 0; var_95_int = 0; // 0x70a PushV
	var_94_int = var_84_int; // 0x70b Mov
	var_95_int = var_81_int; // 0x70c Mov
	func_1777(var_94_int, var_95_int); // 0x70d NEW_2
	
Label_1807:
	return 2; // 0x70f Return
}


