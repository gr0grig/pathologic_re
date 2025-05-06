task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0xa2 PushI
	if(var_33_int == 0) goto Label_202; // 0xa3 JumpB
	func_2540(); // 0xa5 NEW_2
	var_35_int = 19151; // 0xa7 PushI
	var_36_bool = var_31_bool == var_35_int; // 0xa8 Eq
	if(var_36_bool == 0) goto Label_190; // 0xa9 JumpB
	var_37_string = ""; // 0xaa PushV
	var_37_string = "Neutral"; // 0xab MovS
	func_139(var_32_cvector, var_37_string); // 0xac NEW_2
	var_54_int = 518018; // 0xae PushI
	SetMessage(var_54_int); // 0xaf TObjFunc
	ClearReplies(); // 0xb1 TObjFunc
	var_55_int = 518019; // 0xb3 PushI
	var_56_int = -1; // 0xb4 PushI
	var_57_int = 19152; // 0xb5 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0xb6 TObjFunc
	var_58_int = 527797; // 0xb8 PushI
	var_59_int = -1; // 0xb9 PushI
	var_60_int = 29130; // 0xba PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0xbb TObjFunc
	return 0; // 0xbd Return
	
Label_190:
	var_3_string = 1; // 0xbe TMovB
	var_61_bool = 0; // 0xbf PushV
	func_2620(var_61_bool); // 0xc0 NEW_2
	if(var_61_bool == 0) goto Label_198; // 0xc2 JumpB
	lshStopAnimation(); // 0xc3 Func
	goto Label_200; // 0xc5 Jump
	
Label_200:
	return 0; // 0xc8 Return
	
Label_198:
	StopAnimation(); // 0xc6 Func
	
Label_202:
	return 0; // 0xca Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x1b3 PushI
	if(var_33_int == 0) goto Label_771; // 0x1b4 JumpB
	func_2540(); // 0x1b6 NEW_2
	var_35_int = 21461; // 0x1b8 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x1b9 Eq
	if(var_36_bool == 0) goto Label_448; // 0x1ba JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x1bb PushV
	var_37_object = var_1_object; // 0x1bc MovT
	var_38_object = var_0_object; // 0x1bd MovT
	func_2628(); // 0x1be NEW_2
	
Label_448:
	var_41_int = 21464; // 0x1c0 PushI
	var_42_bool = var_32_cvector == var_41_int; // 0x1c1 Eq
	if(var_42_bool == 0) goto Label_456; // 0x1c2 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x1c3 PushV
	var_43_object = var_1_object; // 0x1c4 MovT
	var_44_object = var_0_object; // 0x1c5 MovT
	func_2634(); // 0x1c6 NEW_2
	
Label_456:
	var_47_int = 21440; // 0x1c8 PushI
	var_48_bool = var_31_bool == var_47_int; // 0x1c9 Eq
	if(var_48_bool == 0) goto Label_549; // 0x1ca JumpB
	var_49_bool = 0; // 0x1cb PushV
	var_49_bool = 0; // 0x1cc MovB
	var_50_bool = 0; var_51_object = Obj(); // 0x1cd PushV
	var_51_object = var_1_object; // 0x1ce MovT
	func_2705(var_51_object); // 0x1cf NEW_2
	var_58_bool = var_50_bool == 0; // 0x1d1 Not
	if(var_58_bool == 0) goto Label_473; // 0x1d2 JumpB
	var_59_bool = 0; var_60_object = Obj(); // 0x1d3 PushV
	var_60_object = var_1_object; // 0x1d4 MovT
	func_2717(var_60_object); // 0x1d5 NEW_2
	if(var_59_bool == 0) goto Label_473; // 0x1d7 JumpB
	var_49_bool = 1; // 0x1d8 MovB
	
Label_473:
	if(var_49_bool == 0) goto Label_494; // 0x1d9 JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0x1da PushV
	var_65_object = var_1_object; // 0x1db MovT
	var_66_object = var_0_object; // 0x1dc MovT
	func_2622(); // 0x1dd NEW_2
	var_69_string = ""; // 0x1df PushV
	var_69_string = "Suffering"; // 0x1e0 MovS
	func_412(var_32_cvector, var_69_string); // 0x1e1 NEW_2
	var_86_int = 520248; // 0x1e3 PushI
	SetMessage(var_86_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_87_int = 520249; // 0x1e8 PushI
	var_88_int = 21442; // 0x1e9 PushI
	var_89_int = 21441; // 0x1ea PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_90_string = ""; // 0x1ee PushV
	var_90_string = "Neutral"; // 0x1ef MovS
	func_412(var_32_cvector, var_90_string); // 0x1f0 NEW_2
	var_91_int = 520268; // 0x1f2 PushI
	SetMessage(var_91_int); // 0x1f3 TObjFunc
	ClearReplies(); // 0x1f5 TObjFunc
	var_92_bool = 0; // 0x1f7 PushV
	var_92_bool = 0; // 0x1f8 MovB
	var_93_bool = 0; var_94_object = Obj(); // 0x1f9 PushV
	var_94_object = var_1_object; // 0x1fa MovT
	func_2717(var_94_object); // 0x1fb NEW_2
	var_95_bool = var_93_bool == 0; // 0x1fd Not
	if(var_95_bool == 0) goto Label_517; // 0x1fe JumpB
	var_96_bool = 0; var_97_object = Obj(); // 0x1ff PushV
	var_97_object = var_1_object; // 0x200 MovT
	func_2729(var_97_object); // 0x201 NEW_2
	if(var_96_bool == 0) goto Label_517; // 0x203 JumpB
	var_92_bool = 1; // 0x204 MovB
	
Label_517:
	if(var_92_bool == 0) goto Label_523; // 0x205 JumpB
	var_102_int = 520269; // 0x206 PushI
	var_103_int = 21462; // 0x207 PushI
	var_104_int = 21461; // 0x208 PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x209 TObjFunc
	
Label_523:
	var_105_bool = 0; // 0x20b PushV
	var_105_bool = 0; // 0x20c MovB
	var_106_bool = 0; var_107_object = Obj(); // 0x20d PushV
	var_107_object = var_1_object; // 0x20e MovT
	func_2717(var_107_object); // 0x20f NEW_2
	var_108_bool = var_106_bool == 0; // 0x211 Not
	if(var_108_bool == 0) goto Label_537; // 0x212 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x213 PushV
	var_110_object = var_1_object; // 0x214 MovT
	func_2741(var_110_object); // 0x215 NEW_2
	if(var_109_bool == 0) goto Label_537; // 0x217 JumpB
	var_105_bool = 1; // 0x218 MovB
	
Label_537:
	if(var_105_bool == 0) goto Label_543; // 0x219 JumpB
	var_115_int = 520272; // 0x21a PushI
	var_116_int = 21465; // 0x21b PushI
	var_117_int = 21464; // 0x21c PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x21d TObjFunc
	
Label_543:
	var_118_int = 520277; // 0x21f PushI
	var_119_int = -1; // 0x220 PushI
	var_120_int = 21469; // 0x221 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x222 TObjFunc
	return 0; // 0x224 Return
	
Label_549:
	var_121_int = 21465; // 0x225 PushI
	var_122_bool = var_31_bool == var_121_int; // 0x226 Eq
	if(var_122_bool == 0) goto Label_567; // 0x227 JumpB
	var_123_string = ""; // 0x228 PushV
	var_123_string = "Penetrating"; // 0x229 MovS
	func_412(var_32_cvector, var_123_string); // 0x22a NEW_2
	var_124_int = 520273; // 0x22c PushI
	SetMessage(var_124_int); // 0x22d TObjFunc
	ClearReplies(); // 0x22f TObjFunc
	var_125_int = 520274; // 0x231 PushI
	var_126_int = 21467; // 0x232 PushI
	var_127_int = 21466; // 0x233 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x234 TObjFunc
	return 0; // 0x236 Return
	
Label_567:
	var_128_int = 21467; // 0x237 PushI
	var_129_bool = var_31_bool == var_128_int; // 0x238 Eq
	if(var_129_bool == 0) goto Label_590; // 0x239 JumpB
	var_130_string = ""; // 0x23a PushV
	var_130_string = "Penetrating"; // 0x23b MovS
	func_412(var_32_cvector, var_130_string); // 0x23c NEW_2
	var_131_int = 520275; // 0x23e PushI
	SetMessage(var_131_int); // 0x23f TObjFunc
	ClearReplies(); // 0x241 TObjFunc
	var_132_int = 520276; // 0x243 PushI
	var_133_int = -1; // 0x244 PushI
	var_134_int = 21468; // 0x245 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x246 TObjFunc
	var_135_int = 527804; // 0x248 PushI
	var_136_int = -1; // 0x249 PushI
	var_137_int = 29140; // 0x24a PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x24b TObjFunc
	return 0; // 0x24d Return
	
Label_590:
	var_138_int = 21462; // 0x24e PushI
	var_139_bool = var_31_bool == var_138_int; // 0x24f Eq
	if(var_139_bool == 0) goto Label_608; // 0x250 JumpB
	var_140_string = ""; // 0x251 PushV
	var_140_string = "Grin"; // 0x252 MovS
	func_412(var_32_cvector, var_140_string); // 0x253 NEW_2
	var_141_int = 520270; // 0x255 PushI
	SetMessage(var_141_int); // 0x256 TObjFunc
	ClearReplies(); // 0x258 TObjFunc
	var_142_int = 520271; // 0x25a PushI
	var_143_int = -1; // 0x25b PushI
	var_144_int = 21463; // 0x25c PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x25d TObjFunc
	return 0; // 0x25f Return
	
Label_608:
	var_145_int = 21442; // 0x260 PushI
	var_146_bool = var_31_bool == var_145_int; // 0x261 Eq
	if(var_146_bool == 0) goto Label_636; // 0x262 JumpB
	var_147_string = ""; // 0x263 PushV
	var_147_string = "Suffering"; // 0x264 MovS
	func_412(var_32_cvector, var_147_string); // 0x265 NEW_2
	var_148_int = 520250; // 0x267 PushI
	SetMessage(var_148_int); // 0x268 TObjFunc
	ClearReplies(); // 0x26a TObjFunc
	var_149_int = 520251; // 0x26c PushI
	var_150_int = 21444; // 0x26d PushI
	var_151_int = 21443; // 0x26e PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x26f TObjFunc
	var_152_int = 520259; // 0x271 PushI
	var_153_int = 21452; // 0x272 PushI
	var_154_int = 21451; // 0x273 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x274 TObjFunc
	var_155_int = 520265; // 0x276 PushI
	var_156_int = 21458; // 0x277 PushI
	var_157_int = 21457; // 0x278 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x279 TObjFunc
	return 0; // 0x27b Return
	
Label_636:
	var_158_int = 21458; // 0x27c PushI
	var_159_bool = var_31_bool == var_158_int; // 0x27d Eq
	if(var_159_bool == 0) goto Label_659; // 0x27e JumpB
	var_160_string = ""; // 0x27f PushV
	var_160_string = "Suffering"; // 0x280 MovS
	func_412(var_32_cvector, var_160_string); // 0x281 NEW_2
	var_161_int = 520266; // 0x283 PushI
	SetMessage(var_161_int); // 0x284 TObjFunc
	ClearReplies(); // 0x286 TObjFunc
	var_162_int = 527803; // 0x288 PushI
	var_163_int = 21452; // 0x289 PushI
	var_164_int = 29136; // 0x28a PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x28b TObjFunc
	var_165_int = 520267; // 0x28d PushI
	var_166_int = -1; // 0x28e PushI
	var_167_int = 21459; // 0x28f PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x290 TObjFunc
	return 0; // 0x292 Return
	
Label_659:
	var_168_int = 21452; // 0x293 PushI
	var_169_bool = var_31_bool == var_168_int; // 0x294 Eq
	if(var_169_bool == 0) goto Label_682; // 0x295 JumpB
	var_170_string = ""; // 0x296 PushV
	var_170_string = "Penetrating"; // 0x297 MovS
	func_412(var_32_cvector, var_170_string); // 0x298 NEW_2
	var_171_int = 520260; // 0x29a PushI
	SetMessage(var_171_int); // 0x29b TObjFunc
	ClearReplies(); // 0x29d TObjFunc
	var_172_int = 520261; // 0x29f PushI
	var_173_int = 21454; // 0x2a0 PushI
	var_174_int = 21453; // 0x2a1 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x2a2 TObjFunc
	var_175_int = 520264; // 0x2a4 PushI
	var_176_int = 21454; // 0x2a5 PushI
	var_177_int = 21456; // 0x2a6 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x2a7 TObjFunc
	return 0; // 0x2a9 Return
	
Label_682:
	var_178_int = 21454; // 0x2aa PushI
	var_179_bool = var_31_bool == var_178_int; // 0x2ab Eq
	if(var_179_bool == 0) goto Label_700; // 0x2ac JumpB
	var_180_string = ""; // 0x2ad PushV
	var_180_string = "Suffering"; // 0x2ae MovS
	func_412(var_32_cvector, var_180_string); // 0x2af NEW_2
	var_181_int = 520262; // 0x2b1 PushI
	SetMessage(var_181_int); // 0x2b2 TObjFunc
	ClearReplies(); // 0x2b4 TObjFunc
	var_182_int = 520263; // 0x2b6 PushI
	var_183_int = -1; // 0x2b7 PushI
	var_184_int = 21455; // 0x2b8 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x2b9 TObjFunc
	return 0; // 0x2bb Return
	
Label_700:
	var_185_int = 21444; // 0x2bc PushI
	var_186_bool = var_31_bool == var_185_int; // 0x2bd Eq
	if(var_186_bool == 0) goto Label_723; // 0x2be JumpB
	var_187_string = ""; // 0x2bf PushV
	var_187_string = "Suffering"; // 0x2c0 MovS
	func_412(var_32_cvector, var_187_string); // 0x2c1 NEW_2
	var_188_int = 520252; // 0x2c3 PushI
	SetMessage(var_188_int); // 0x2c4 TObjFunc
	ClearReplies(); // 0x2c6 TObjFunc
	var_189_int = 520253; // 0x2c8 PushI
	var_190_int = 21446; // 0x2c9 PushI
	var_191_int = 21445; // 0x2ca PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x2cb TObjFunc
	var_192_int = 520256; // 0x2cd PushI
	var_193_int = 21449; // 0x2ce PushI
	var_194_int = 21448; // 0x2cf PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x2d0 TObjFunc
	return 0; // 0x2d2 Return
	
Label_723:
	var_195_int = 21449; // 0x2d3 PushI
	var_196_bool = var_31_bool == var_195_int; // 0x2d4 Eq
	if(var_196_bool == 0) goto Label_741; // 0x2d5 JumpB
	var_197_string = ""; // 0x2d6 PushV
	var_197_string = "Neutral"; // 0x2d7 MovS
	func_412(var_32_cvector, var_197_string); // 0x2d8 NEW_2
	var_198_int = 520257; // 0x2da PushI
	SetMessage(var_198_int); // 0x2db TObjFunc
	ClearReplies(); // 0x2dd TObjFunc
	var_199_int = 520258; // 0x2df PushI
	var_200_int = -1; // 0x2e0 PushI
	var_201_int = 21450; // 0x2e1 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x2e2 TObjFunc
	return 0; // 0x2e4 Return
	
Label_741:
	var_202_int = 21446; // 0x2e5 PushI
	var_203_bool = var_31_bool == var_202_int; // 0x2e6 Eq
	if(var_203_bool == 0) goto Label_759; // 0x2e7 JumpB
	var_204_string = ""; // 0x2e8 PushV
	var_204_string = "Penetrating"; // 0x2e9 MovS
	func_412(var_32_cvector, var_204_string); // 0x2ea NEW_2
	var_205_int = 520254; // 0x2ec PushI
	SetMessage(var_205_int); // 0x2ed TObjFunc
	ClearReplies(); // 0x2ef TObjFunc
	var_206_int = 520255; // 0x2f1 PushI
	var_207_int = -1; // 0x2f2 PushI
	var_208_int = 21447; // 0x2f3 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x2f4 TObjFunc
	return 0; // 0x2f6 Return
	
Label_759:
	var_3_string = 1; // 0x2f7 TMovB
	var_209_bool = 0; // 0x2f8 PushV
	func_2620(var_209_bool); // 0x2f9 NEW_2
	if(var_209_bool == 0) goto Label_767; // 0x2fb JumpB
	lshStopAnimation(); // 0x2fc Func
	goto Label_769; // 0x2fe Jump
	
Label_769:
	return 0; // 0x301 Return
	
Label_767:
	StopAnimation(); // 0x2ff Func
	
Label_771:
	return 0; // 0x303 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x3b0 PushI
	if(var_33_int == 0) goto Label_1120; // 0x3b1 JumpB
	func_2540(); // 0x3b3 NEW_2
	var_35_int = 22678; // 0x3b5 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x3b6 Eq
	if(var_36_bool == 0) goto Label_957; // 0x3b7 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x3b8 PushV
	var_37_object = var_1_object; // 0x3b9 MovT
	var_38_object = var_0_object; // 0x3ba MovT
	func_2640(); // 0x3bb NEW_2
	
Label_957:
	var_80_int = 22675; // 0x3bd PushI
	var_81_bool = var_31_bool == var_80_int; // 0x3be Eq
	if(var_81_bool == 0) goto Label_990; // 0x3bf JumpB
	var_82_string = ""; // 0x3c0 PushV
	var_82_string = "Fear"; // 0x3c1 MovS
	func_921(var_32_cvector, var_82_string); // 0x3c2 NEW_2
	var_99_int = 521514; // 0x3c4 PushI
	SetMessage(var_99_int); // 0x3c5 TObjFunc
	ClearReplies(); // 0x3c7 TObjFunc
	var_100_bool = 0; var_101_object = Obj(); // 0x3c9 PushV
	var_101_object = var_1_object; // 0x3ca MovT
	func_2669(var_101_object); // 0x3cb NEW_2
	if(var_100_bool == 0) goto Label_979; // 0x3cd JumpB
	var_108_int = 521515; // 0x3ce PushI
	var_109_int = 22677; // 0x3cf PushI
	var_110_int = 22676; // 0x3d0 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x3d1 TObjFunc
	
Label_979:
	var_111_int = 521518; // 0x3d3 PushI
	var_112_int = -1; // 0x3d4 PushI
	var_113_int = 22679; // 0x3d5 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x3d6 TObjFunc
	var_114_int = 523976; // 0x3d8 PushI
	var_115_int = -1; // 0x3d9 PushI
	var_116_int = 25264; // 0x3da PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x3db TObjFunc
	return 0; // 0x3dd Return
	
Label_990:
	var_117_int = 22677; // 0x3de PushI
	var_118_bool = var_31_bool == var_117_int; // 0x3df Eq
	if(var_118_bool == 0) goto Label_1013; // 0x3e0 JumpB
	var_119_string = ""; // 0x3e1 PushV
	var_119_string = "Fear"; // 0x3e2 MovS
	func_921(var_32_cvector, var_119_string); // 0x3e3 NEW_2
	var_120_int = 521516; // 0x3e5 PushI
	SetMessage(var_120_int); // 0x3e6 TObjFunc
	ClearReplies(); // 0x3e8 TObjFunc
	var_121_int = 523977; // 0x3ea PushI
	var_122_int = 25266; // 0x3eb PushI
	var_123_int = 25265; // 0x3ec PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x3ed TObjFunc
	var_124_int = 523981; // 0x3ef PushI
	var_125_int = 25270; // 0x3f0 PushI
	var_126_int = 25269; // 0x3f1 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x3f2 TObjFunc
	return 0; // 0x3f4 Return
	
Label_1013:
	var_127_int = 25270; // 0x3f5 PushI
	var_128_bool = var_31_bool == var_127_int; // 0x3f6 Eq
	if(var_128_bool == 0) goto Label_1031; // 0x3f7 JumpB
	var_129_string = ""; // 0x3f8 PushV
	var_129_string = "Suffering"; // 0x3f9 MovS
	func_921(var_32_cvector, var_129_string); // 0x3fa NEW_2
	var_130_int = 523982; // 0x3fc PushI
	SetMessage(var_130_int); // 0x3fd TObjFunc
	ClearReplies(); // 0x3ff TObjFunc
	var_131_int = 523983; // 0x401 PushI
	var_132_int = 25266; // 0x402 PushI
	var_133_int = 25271; // 0x403 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x404 TObjFunc
	return 0; // 0x406 Return
	
Label_1031:
	var_134_int = 25266; // 0x407 PushI
	var_135_bool = var_31_bool == var_134_int; // 0x408 Eq
	if(var_135_bool == 0) goto Label_1049; // 0x409 JumpB
	var_136_string = ""; // 0x40a PushV
	var_136_string = "Penetrating"; // 0x40b MovS
	func_921(var_32_cvector, var_136_string); // 0x40c NEW_2
	var_137_int = 523978; // 0x40e PushI
	SetMessage(var_137_int); // 0x40f TObjFunc
	ClearReplies(); // 0x411 TObjFunc
	var_138_int = 523979; // 0x413 PushI
	var_139_int = 25268; // 0x414 PushI
	var_140_int = 25267; // 0x415 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x416 TObjFunc
	return 0; // 0x418 Return
	
Label_1049:
	var_141_int = 25268; // 0x419 PushI
	var_142_bool = var_31_bool == var_141_int; // 0x41a Eq
	if(var_142_bool == 0) goto Label_1067; // 0x41b JumpB
	var_143_string = ""; // 0x41c PushV
	var_143_string = "Penetrating"; // 0x41d MovS
	func_921(var_32_cvector, var_143_string); // 0x41e NEW_2
	var_144_int = 523980; // 0x420 PushI
	SetMessage(var_144_int); // 0x421 TObjFunc
	ClearReplies(); // 0x423 TObjFunc
	var_145_int = 523984; // 0x425 PushI
	var_146_int = 25274; // 0x426 PushI
	var_147_int = 25273; // 0x427 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x428 TObjFunc
	return 0; // 0x42a Return
	
Label_1067:
	var_148_int = 25274; // 0x42b PushI
	var_149_bool = var_31_bool == var_148_int; // 0x42c Eq
	if(var_149_bool == 0) goto Label_1090; // 0x42d JumpB
	var_150_string = ""; // 0x42e PushV
	var_150_string = "Grin"; // 0x42f MovS
	func_921(var_32_cvector, var_150_string); // 0x430 NEW_2
	var_151_int = 523985; // 0x432 PushI
	SetMessage(var_151_int); // 0x433 TObjFunc
	ClearReplies(); // 0x435 TObjFunc
	var_152_int = 523986; // 0x437 PushI
	var_153_int = 25276; // 0x438 PushI
	var_154_int = 25275; // 0x439 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x43a TObjFunc
	var_155_int = 523988; // 0x43c PushI
	var_156_int = 25276; // 0x43d PushI
	var_157_int = 25277; // 0x43e PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x43f TObjFunc
	return 0; // 0x441 Return
	
Label_1090:
	var_158_int = 25276; // 0x442 PushI
	var_159_bool = var_31_bool == var_158_int; // 0x443 Eq
	if(var_159_bool == 0) goto Label_1108; // 0x444 JumpB
	var_160_string = ""; // 0x445 PushV
	var_160_string = "Grin"; // 0x446 MovS
	func_921(var_32_cvector, var_160_string); // 0x447 NEW_2
	var_161_int = 523987; // 0x449 PushI
	SetMessage(var_161_int); // 0x44a TObjFunc
	ClearReplies(); // 0x44c TObjFunc
	var_162_int = 521517; // 0x44e PushI
	var_163_int = -1; // 0x44f PushI
	var_164_int = 22678; // 0x450 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x451 TObjFunc
	return 0; // 0x453 Return
	
Label_1108:
	var_3_string = 1; // 0x454 TMovB
	var_165_bool = 0; // 0x455 PushV
	func_2620(var_165_bool); // 0x456 NEW_2
	if(var_165_bool == 0) goto Label_1116; // 0x458 JumpB
	lshStopAnimation(); // 0x459 Func
	goto Label_1118; // 0x45b Jump
	
Label_1118:
	return 0; // 0x45e Return
	
Label_1116:
	StopAnimation(); // 0x45c Func
	
Label_1120:
	return 0; // 0x460 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x512 PushI
	if(var_33_int == 0) goto Label_1515; // 0x513 JumpB
	func_2540(); // 0x515 NEW_2
	var_35_int = 23108; // 0x517 PushI
	var_36_bool = var_32_cvector == var_35_int; // 0x518 Eq
	if(var_36_bool == 0) goto Label_1311; // 0x519 JumpB
	var_37_object = Obj(); var_38_object = Obj(); // 0x51a PushV
	var_37_object = var_1_object; // 0x51b MovT
	var_38_object = var_0_object; // 0x51c MovT
	func_2663(); // 0x51d NEW_2
	
Label_1311:
	var_41_int = 23687; // 0x51f PushI
	var_42_bool = var_32_cvector == var_41_int; // 0x520 Eq
	if(var_42_bool == 0) goto Label_1319; // 0x521 JumpB
	var_43_object = Obj(); var_44_object = Obj(); // 0x522 PushV
	var_43_object = var_1_object; // 0x523 MovT
	var_44_object = var_0_object; // 0x524 MovT
	func_2663(); // 0x525 NEW_2
	
Label_1319:
	var_45_int = 23104; // 0x527 PushI
	var_46_bool = var_31_bool == var_45_int; // 0x528 Eq
	if(var_46_bool == 0) goto Label_1357; // 0x529 JumpB
	var_47_string = ""; // 0x52a PushV
	var_47_string = "Neutral"; // 0x52b MovS
	func_1275(var_32_cvector, var_47_string); // 0x52c NEW_2
	var_64_int = 521930; // 0x52e PushI
	SetMessage(var_64_int); // 0x52f TObjFunc
	ClearReplies(); // 0x531 TObjFunc
	var_65_bool = 0; // 0x533 PushV
	var_65_bool = 0; // 0x534 MovB
	var_66_bool = 0; var_67_object = Obj(); // 0x535 PushV
	var_67_object = var_1_object; // 0x536 MovT
	func_2681(var_67_object); // 0x537 NEW_2
	if(var_66_bool == 0) goto Label_1345; // 0x539 JumpB
	var_74_bool = 0; var_75_object = Obj(); // 0x53a PushV
	var_75_object = var_1_object; // 0x53b MovT
	func_2693(var_75_object); // 0x53c NEW_2
	var_80_bool = var_74_bool == 0; // 0x53e Not
	if(var_80_bool == 0) goto Label_1345; // 0x53f JumpB
	var_65_bool = 1; // 0x540 MovB
	
Label_1345:
	if(var_65_bool == 0) goto Label_1351; // 0x541 JumpB
	var_81_int = 521931; // 0x542 PushI
	var_82_int = 23673; // 0x543 PushI
	var_83_int = 23105; // 0x544 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x545 TObjFunc
	
Label_1351:
	var_84_int = 521932; // 0x547 PushI
	var_85_int = -1; // 0x548 PushI
	var_86_int = 23106; // 0x549 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x54a TObjFunc
	return 0; // 0x54c Return
	
Label_1357:
	var_87_int = 23673; // 0x54d PushI
	var_88_bool = var_31_bool == var_87_int; // 0x54e Eq
	if(var_88_bool == 0) goto Label_1380; // 0x54f JumpB
	var_89_string = ""; // 0x550 PushV
	var_89_string = "Penetrating"; // 0x551 MovS
	func_1275(var_32_cvector, var_89_string); // 0x552 NEW_2
	var_90_int = 522498; // 0x554 PushI
	SetMessage(var_90_int); // 0x555 TObjFunc
	ClearReplies(); // 0x557 TObjFunc
	var_91_int = 522501; // 0x559 PushI
	var_92_int = 23677; // 0x55a PushI
	var_93_int = 23676; // 0x55b PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x55c TObjFunc
	var_94_int = 522499; // 0x55e PushI
	var_95_int = 23675; // 0x55f PushI
	var_96_int = 23674; // 0x560 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x561 TObjFunc
	return 0; // 0x563 Return
	
Label_1380:
	var_97_int = 23675; // 0x564 PushI
	var_98_bool = var_31_bool == var_97_int; // 0x565 Eq
	if(var_98_bool == 0) goto Label_1398; // 0x566 JumpB
	var_99_string = ""; // 0x567 PushV
	var_99_string = "Penetrating"; // 0x568 MovS
	func_1275(var_32_cvector, var_99_string); // 0x569 NEW_2
	var_100_int = 522500; // 0x56b PushI
	SetMessage(var_100_int); // 0x56c TObjFunc
	ClearReplies(); // 0x56e TObjFunc
	var_101_int = 522506; // 0x570 PushI
	var_102_int = 23679; // 0x571 PushI
	var_103_int = 23681; // 0x572 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x573 TObjFunc
	return 0; // 0x575 Return
	
Label_1398:
	var_104_int = 23679; // 0x576 PushI
	var_105_bool = var_31_bool == var_104_int; // 0x577 Eq
	if(var_105_bool == 0) goto Label_1416; // 0x578 JumpB
	var_106_string = ""; // 0x579 PushV
	var_106_string = "Penetrating"; // 0x57a MovS
	func_1275(var_32_cvector, var_106_string); // 0x57b NEW_2
	var_107_int = 522504; // 0x57d PushI
	SetMessage(var_107_int); // 0x57e TObjFunc
	ClearReplies(); // 0x580 TObjFunc
	var_108_int = 522505; // 0x582 PushI
	var_109_int = 23677; // 0x583 PushI
	var_110_int = 23680; // 0x584 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x585 TObjFunc
	return 0; // 0x587 Return
	
Label_1416:
	var_111_int = 23677; // 0x588 PushI
	var_112_bool = var_31_bool == var_111_int; // 0x589 Eq
	if(var_112_bool == 0) goto Label_1439; // 0x58a JumpB
	var_113_string = ""; // 0x58b PushV
	var_113_string = "Penetrating"; // 0x58c MovS
	func_1275(var_32_cvector, var_113_string); // 0x58d NEW_2
	var_114_int = 522502; // 0x58f PushI
	SetMessage(var_114_int); // 0x590 TObjFunc
	ClearReplies(); // 0x592 TObjFunc
	var_115_int = 522503; // 0x594 PushI
	var_116_int = 23683; // 0x595 PushI
	var_117_int = 23678; // 0x596 PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x597 TObjFunc
	var_118_int = 531516; // 0x599 PushI
	var_119_int = 32868; // 0x59a PushI
	var_120_int = 32871; // 0x59b PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x59c TObjFunc
	return 0; // 0x59e Return
	
Label_1439:
	var_121_int = 23683; // 0x59f PushI
	var_122_bool = var_31_bool == var_121_int; // 0x5a0 Eq
	if(var_122_bool == 0) goto Label_1462; // 0x5a1 JumpB
	var_123_string = ""; // 0x5a2 PushV
	var_123_string = "Grin"; // 0x5a3 MovS
	func_1275(var_32_cvector, var_123_string); // 0x5a4 NEW_2
	var_124_int = 522507; // 0x5a6 PushI
	SetMessage(var_124_int); // 0x5a7 TObjFunc
	ClearReplies(); // 0x5a9 TObjFunc
	var_125_int = 522508; // 0x5ab PushI
	var_126_int = 23685; // 0x5ac PushI
	var_127_int = 23684; // 0x5ad PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x5ae TObjFunc
	var_128_int = 531513; // 0x5b0 PushI
	var_129_int = 32868; // 0x5b1 PushI
	var_130_int = 32867; // 0x5b2 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x5b3 TObjFunc
	return 0; // 0x5b5 Return
	
Label_1462:
	var_131_int = 32868; // 0x5b6 PushI
	var_132_bool = var_31_bool == var_131_int; // 0x5b7 Eq
	if(var_132_bool == 0) goto Label_1480; // 0x5b8 JumpB
	var_133_string = ""; // 0x5b9 PushV
	var_133_string = "Grin"; // 0x5ba MovS
	func_1275(var_32_cvector, var_133_string); // 0x5bb NEW_2
	var_134_int = 531514; // 0x5bd PushI
	SetMessage(var_134_int); // 0x5be TObjFunc
	ClearReplies(); // 0x5c0 TObjFunc
	var_135_int = 531515; // 0x5c2 PushI
	var_136_int = 23685; // 0x5c3 PushI
	var_137_int = 32869; // 0x5c4 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x5c5 TObjFunc
	return 0; // 0x5c7 Return
	
Label_1480:
	var_138_int = 23685; // 0x5c8 PushI
	var_139_bool = var_31_bool == var_138_int; // 0x5c9 Eq
	if(var_139_bool == 0) goto Label_1503; // 0x5ca JumpB
	var_140_string = ""; // 0x5cb PushV
	var_140_string = "Grin"; // 0x5cc MovS
	func_1275(var_32_cvector, var_140_string); // 0x5cd NEW_2
	var_141_int = 522509; // 0x5cf PushI
	SetMessage(var_141_int); // 0x5d0 TObjFunc
	ClearReplies(); // 0x5d2 TObjFunc
	var_142_int = 521934; // 0x5d4 PushI
	var_143_int = -1; // 0x5d5 PushI
	var_144_int = 23108; // 0x5d6 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x5d7 TObjFunc
	var_145_int = 522511; // 0x5d9 PushI
	var_146_int = -1; // 0x5da PushI
	var_147_int = 23687; // 0x5db PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x5dc TObjFunc
	return 0; // 0x5de Return
	
Label_1503:
	var_3_string = 1; // 0x5df TMovB
	var_148_bool = 0; // 0x5e0 PushV
	func_2620(var_148_bool); // 0x5e1 NEW_2
	if(var_148_bool == 0) goto Label_1511; // 0x5e3 JumpB
	lshStopAnimation(); // 0x5e4 Func
	goto Label_1513; // 0x5e6 Jump
	
Label_1513:
	return 0; // 0x5e9 Return
	
Label_1511:
	StopAnimation(); // 0x5e7 Func
	
Label_1515:
	return 0; // 0x5eb Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_cvector)
{
	var_33_int = 1; // 0x693 PushI
	if(var_33_int == 0) goto Label_1774; // 0x694 JumpB
	func_2540(); // 0x696 NEW_2
	var_35_int = 36971; // 0x698 PushI
	var_36_bool = var_31_bool == var_35_int; // 0x699 Eq
	if(var_36_bool == 0) goto Label_1716; // 0x69a JumpB
	var_37_string = ""; // 0x69b PushV
	var_37_string = "Neutral"; // 0x69c MovS
	func_1660(var_32_cvector, var_37_string); // 0x69d NEW_2
	var_54_int = 535294; // 0x69f PushI
	SetMessage(var_54_int); // 0x6a0 TObjFunc
	ClearReplies(); // 0x6a2 TObjFunc
	var_55_int = 535295; // 0x6a4 PushI
	var_56_int = 36973; // 0x6a5 PushI
	var_57_int = 36972; // 0x6a6 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x6a7 TObjFunc
	var_58_int = 535302; // 0x6a9 PushI
	var_59_int = -1; // 0x6aa PushI
	var_60_int = 36980; // 0x6ab PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x6ac TObjFunc
	var_61_int = 535303; // 0x6ae PushI
	var_62_int = -1; // 0x6af PushI
	var_63_int = 36981; // 0x6b0 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x6b1 TObjFunc
	return 0; // 0x6b3 Return
	
Label_1716:
	var_64_int = 36973; // 0x6b4 PushI
	var_65_bool = var_31_bool == var_64_int; // 0x6b5 Eq
	if(var_65_bool == 0) goto Label_1739; // 0x6b6 JumpB
	var_66_string = ""; // 0x6b7 PushV
	var_66_string = "Neutral"; // 0x6b8 MovS
	func_1660(var_32_cvector, var_66_string); // 0x6b9 NEW_2
	var_67_int = 535296; // 0x6bb PushI
	SetMessage(var_67_int); // 0x6bc TObjFunc
	ClearReplies(); // 0x6be TObjFunc
	var_68_int = 535297; // 0x6c0 PushI
	var_69_int = 36975; // 0x6c1 PushI
	var_70_int = 36974; // 0x6c2 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x6c3 TObjFunc
	var_71_int = 535301; // 0x6c5 PushI
	var_72_int = 36975; // 0x6c6 PushI
	var_73_int = 36978; // 0x6c7 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x6c8 TObjFunc
	return 0; // 0x6ca Return
	
Label_1739:
	var_74_int = 36975; // 0x6cb PushI
	var_75_bool = var_31_bool == var_74_int; // 0x6cc Eq
	if(var_75_bool == 0) goto Label_1762; // 0x6cd JumpB
	var_76_string = ""; // 0x6ce PushV
	var_76_string = "Neutral"; // 0x6cf MovS
	func_1660(var_32_cvector, var_76_string); // 0x6d0 NEW_2
	var_77_int = 535298; // 0x6d2 PushI
	SetMessage(var_77_int); // 0x6d3 TObjFunc
	ClearReplies(); // 0x6d5 TObjFunc
	var_78_int = 535299; // 0x6d7 PushI
	var_79_int = -1; // 0x6d8 PushI
	var_80_int = 36976; // 0x6d9 PushI
	AddReply(var_78_int, var_79_int, var_80_int); // 0x6da TObjFunc
	var_81_int = 535300; // 0x6dc PushI
	var_82_int = -1; // 0x6dd PushI
	var_83_int = 36977; // 0x6de PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x6df TObjFunc
	return 0; // 0x6e1 Return
	
Label_1762:
	var_3_string = 1; // 0x6e2 TMovB
	var_84_bool = 0; // 0x6e3 PushV
	func_2620(var_84_bool); // 0x6e4 NEW_2
	if(var_84_bool == 0) goto Label_1770; // 0x6e6 JumpB
	lshStopAnimation(); // 0x6e7 Func
	goto Label_1772; // 0x6e9 Jump
	
Label_1772:
	return 0; // 0x6ec Return
	
Label_1770:
	StopAnimation(); // 0x6ea Func
	
Label_1774:
	return 0; // 0x6ee Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_cvector)
{
	var_33_int = 1; // 0x791 PushI
	if(var_33_int == 0) goto Label_1977; // 0x792 JumpB
	func_2540(); // 0x794 NEW_2
	var_35_int = 42560; // 0x796 PushI
	var_36_bool = var_31_int == var_35_int; // 0x797 Eq
	if(var_36_bool == 0) goto Label_1965; // 0x798 JumpB
	var_37_string = ""; // 0x799 PushV
	var_37_string = "Neutral"; // 0x79a MovS
	func_1914(var_32_cvector, var_37_string); // 0x79b NEW_2
	var_54_int = 540551; // 0x79d PushI
	SetMessage(var_54_int); // 0x79e TObjFunc
	ClearReplies(); // 0x7a0 TObjFunc
	var_55_int = 540552; // 0x7a2 PushI
	var_56_int = -1; // 0x7a3 PushI
	var_57_int = 42561; // 0x7a4 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x7a5 TObjFunc
	var_58_int = 540795; // 0x7a7 PushI
	var_59_int = -1; // 0x7a8 PushI
	var_60_int = 42844; // 0x7a9 PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x7aa TObjFunc
	return 0; // 0x7ac Return
	
Label_1965:
	var_3_string = 1; // 0x7ad TMovB
	var_61_bool = 0; // 0x7ae PushV
	func_2620(var_61_bool); // 0x7af NEW_2
	if(var_61_bool == 0) goto Label_1973; // 0x7b1 JumpB
	lshStopAnimation(); // 0x7b2 Func
	goto Label_1975; // 0x7b4 Jump
	
Label_1975:
	return 0; // 0x7b7 Return
	
Label_1973:
	StopAnimation(); // 0x7b5 Func
	
Label_1977:
	return 0; // 0x7b9 Return
}


task_12_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_int)
{
	var_32_int = 10; // 0x807 PushI
	var_33_bool = var_31_int == var_32_int; // 0x808 Eq
	if(var_33_bool == 0) goto Label_2091; // 0x809 JumpB
	func_2050(); // 0x80b NEW_2
	var_35_bool = 0; // 0x80d PushV
	var_35_bool = 0; // 0x80e MovB
	var_36_bool = 0; // 0x80f PushV
	func_2264(var_36_bool); // 0x810 NEW_2
	if(var_36_bool == 0) goto Label_2072; // 0x812 JumpB
	var_39_bool = 0; // 0x813 PushV
	func_2019(var_39_bool); // 0x814 NEW_2
	if(var_39_bool == 0) goto Label_2072; // 0x816 JumpB
	var_35_bool = 1; // 0x817 MovB
	
Label_2072:
	if(var_35_bool == 0) goto Label_2085; // 0x818 JumpB
	var_56_bool = 0; // 0x819 PushV
	func_1999(var_56_bool); // 0x81a NEW_2
	if(var_56_bool == 0) goto Label_2084; // 0x81c JumpB
	var_75_bool = 0; var_76_object = Obj(); // 0x81d PushV
	var_77_object = Obj(); // 0x81e PushV
	func_2547(var_77_object); // 0x81f NEW_2
	var_76_object = var_77_object; // 0x820 Mov
	func_2414(var_76_object); // 0x822 NEW_2
	
Label_2084:
	goto Label_2091; // 0x824 Jump
	
Label_2091:
	return 0; // 0x82b Return
	
Label_2085:
	func_2014(var_31_int); // 0x826 NEW_2
	func_2041(); // 0x829 NEW_2
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	func_2232(); // 0x82d NEW_2
	func_2050(); // 0x830 NEW_2
	lshStopSpeech(); // 0x832 Func
	lshStopAnimation(); // 0x834 Func
	StopAsync(); // 0x836 Func
	Hold(); // 0x838 Func
	return 0; // 0x83a Return
}


task_12_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	StopGroup0(); // 0x83b Func
	func_2050(); // 0x83e NEW_2
	var_32_string = ""; // 0x840 PushV
	var_32_string = "Neutral"; // 0x841 MovS
	func_2494(var_32_string); // 0x842 NEW_2
	func_2041(); // 0x845 NEW_2
	return 0; // 0x847 Return
}


task_12_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_bool)
{
	var_32_bool = var_31_bool; // 0x849 Push
	if(var_32_bool == 0) goto Label_2127; // 0x84a JumpB
	func_2041(); // 0x84c NEW_2
	goto Label_2131; // 0x84e Jump
	
Label_2131:
	return 0; // 0x853 Return
	
Label_2127:
	var_38_string = ""; // 0x84f PushV
	var_38_string = "Neutral"; // 0x850 MovS
	func_2494(var_38_string); // 0x851 NEW_2
}


task_12_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0; // 0x854 PushV
	IsOverrideActive(var_33_bool); // 0x855 Func
	var_34_bool = var_33_bool == 0; // 0x857 Not
	if(var_34_bool == 0) goto Label_2160; // 0x858 JumpB
	EventDisable(0); // 0x859 EventDisable
	func_2232(); // 0x85b NEW_2
	var_35_bool = 0; var_36_object = Obj(); // 0x85d PushV
	var_36_object = var_31_object; // 0x85e Mov
	func_2255(var_36_object); // 0x85f NEW_2
	EventEnable(0); // 0x861 EventEnable
	var_49_object = Obj(); // 0x862 PushV
	var_49_object = var_31_object; // 0x863 Mov
	func_2841(var_49_object); // 0x864 NEW_2
	var_645_string = ""; // 0x866 PushV
	var_645_string = "Neutral"; // 0x867 MovS
	func_2494(var_645_string); // 0x868 NEW_2
	func_2050(); // 0x86b NEW_2
	func_2041(); // 0x86e NEW_2
	
Label_2160:
	return 2; // 0x870 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_cvector)
{
	var_31_bool = GlobalVars[1]; // 0x7ba PushGE
	var_31_bool = 0; // 0x7bb MovB
	GlobalVars[1] = var_31_bool; // 0x7bc PopGE
	func_1985(var_30_cvector); // 0x7be NEW_2
	return 0; // 0x7c0 Return
}


func_0(var_0_object, var_52_int, var_53_object)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_object = Obj(); var_60_bool = 0; var_61_int = 0; var_62_bool = 0; // 0x0 PushV
	var_0_object = var_53_object; // 0x1 TMov
	var_63_bool = 0; var_64_object = Obj(); var_65_float = 0; // 0x2 PushV
	var_64_object = var_53_object; // 0x3 Mov
	var_65_float = 70.0; // 0x4 MovF
	func_2269(var_64_object, var_65_float); // 0x5 NEW_2
	var_110_bool = var_63_bool == 0; // 0x7 Not
	if(var_110_bool == 0) goto Label_11; // 0x8 JumpB
	var_52_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_59_object); // 0xb Func
	var_111_int = 0; // 0xd PushV
	func_2614(var_111_int); // 0xe NEW_2
	SetNPCName(var_111_int); // 0x10 ObjFunc
	var_112_int = 0; // 0x12 PushV
	func_2612(var_112_int); // 0x13 NEW_2
	SetNPCDescription(var_112_int); // 0x15 ObjFunc
	var_113_string = ""; // 0x17 PushV
	func_2616(var_113_string); // 0x18 NEW_2
	SetPhoto(var_113_string); // 0x1a ObjFunc
	var_114_string = ""; // 0x1c PushV
	func_2618(var_114_string); // 0x1d NEW_2
	SetPhoto2(var_114_string); // 0x1f ObjFunc
	var_115_int = 0; // 0x21 PushV
	func_2824(var_115_int); // 0x22 NEW_2
	SetPlayerName(var_115_int); // 0x24 ObjFunc
	var_61_int = -1; // 0x26 MovI
	IsOverrideActive(var_60_bool); // 0x27 Func
	var_123_bool = var_60_bool; // 0x29 Push
	if(var_123_bool == 0) goto Label_45; // 0x2a JumpB
	var_52_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_59_object); // 0x2d Func
	var_124_bool = 0; var_125_object = Obj(); // 0x2f PushV
	var_126_object = Obj(); // 0x30 PushV
	func_2547(var_126_object); // 0x31 NEW_2
	var_125_object = var_126_object; // 0x32 Mov
	func_2356(var_124_bool, var_125_object); // 0x34 NEW_2
	var_219_object = Obj(); var_220_object = Obj(); // 0x36 PushV
	var_219_object = var_53_object; // 0x37 Mov
	var_220_object = var_59_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_221_object, var_222_object, var_223_string, var_224_bool, var_219_object, var_220_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_62_bool); // 0x3d ObjFunc
	
Label_63:
	var_268_bool = var_62_bool == 0; // 0x3f Not
	if(var_268_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_62_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_269_object = Obj(); // 0x46 PushV
	var_269_object = var_53_object; // 0x47 Mov
	func_2338(); // 0x48 NEW_2
	StopDialog(var_59_object); // 0x4a Func
	GetReturnValue(var_61_int); // 0x4c ObjFunc
	var_52_int = var_61_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2050()
{
	var_646_int = 10; // 0x802 PushI
	KillTimer(var_646_int); // 0x803 Func
	return 0; // 0x805 Return
}


func_2563(var_315_int, var_316_string)
{
	var_317_int = 0; var_318_int = 0; // 0xa03 PushV
	GetVariable(var_316_string, var_318_int); // 0xa04 Func
	var_315_int = var_318_int; // 0xa06 Mov
	return 2; // 0xa07 Return
}


func_772(var_0_object, var_387_int, var_388_object)
{
	var_390_object = Obj(); var_391_bool = 0; var_392_int = 0; var_393_bool = 0; var_394_object = Obj(); var_395_bool = 0; var_396_int = 0; var_397_bool = 0; // 0x304 PushV
	var_0_object = var_388_object; // 0x305 TMov
	var_398_bool = 0; var_399_object = Obj(); var_400_float = 0; // 0x306 PushV
	var_399_object = var_388_object; // 0x307 Mov
	var_400_float = 70.0; // 0x308 MovF
	func_2269(var_399_object, var_400_float); // 0x309 NEW_2
	var_401_bool = var_398_bool == 0; // 0x30b Not
	if(var_401_bool == 0) goto Label_783; // 0x30c JumpB
	var_387_int = -2; // 0x30d MovI
	return 8; // 0x30e Return
	
Label_783:
	CreateDialog(var_394_object); // 0x30f Func
	var_402_int = 0; // 0x311 PushV
	func_2614(var_402_int); // 0x312 NEW_2
	SetNPCName(var_402_int); // 0x314 ObjFunc
	var_403_int = 0; // 0x316 PushV
	func_2612(var_403_int); // 0x317 NEW_2
	SetNPCDescription(var_403_int); // 0x319 ObjFunc
	var_404_string = ""; // 0x31b PushV
	func_2616(var_404_string); // 0x31c NEW_2
	SetPhoto(var_404_string); // 0x31e ObjFunc
	var_405_string = ""; // 0x320 PushV
	func_2618(var_405_string); // 0x321 NEW_2
	SetPhoto2(var_405_string); // 0x323 ObjFunc
	var_406_int = 0; // 0x325 PushV
	func_2824(var_406_int); // 0x326 NEW_2
	SetPlayerName(var_406_int); // 0x328 ObjFunc
	var_396_int = -1; // 0x32a MovI
	IsOverrideActive(var_395_bool); // 0x32b Func
	var_407_bool = var_395_bool; // 0x32d Push
	if(var_407_bool == 0) goto Label_817; // 0x32e JumpB
	var_387_int = -2; // 0x32f MovI
	return 8; // 0x330 Return
	
Label_817:
	DoDialog(var_394_object); // 0x331 Func
	var_408_bool = 0; var_409_object = Obj(); // 0x333 PushV
	var_410_object = Obj(); // 0x334 PushV
	func_2547(var_410_object); // 0x335 NEW_2
	var_409_object = var_410_object; // 0x336 Mov
	func_2356(var_408_bool, var_409_object); // 0x338 NEW_2
	var_411_object = Obj(); var_412_object = Obj(); // 0x33a PushV
	var_411_object = var_388_object; // 0x33b Mov
	var_412_object = var_394_object; // 0x33c Mov
	TaskCall(5); // 0x33d TaskCall
	func_853(var_413_object, var_414_object, var_415_string, var_416_bool, var_411_object, var_412_object); // 0x33e NEW_2
	TaskReturn(); // 0x33f TaskReturn
	IsDialogEnd(var_397_bool); // 0x341 ObjFunc
	
Label_835:
	var_450_bool = var_397_bool == 0; // 0x343 Not
	if(var_450_bool == 0) goto Label_842; // 0x344 JumpB
	sync(); // 0x345 Func
	IsDialogEnd(var_397_bool); // 0x347 ObjFunc
	goto Label_835; // 0x349 Jump
	
Label_842:
	var_451_object = Obj(); // 0x34a PushV
	var_451_object = var_388_object; // 0x34b Mov
	func_2338(); // 0x34c NEW_2
	StopDialog(var_394_object); // 0x34e Func
	GetReturnValue(var_396_int); // 0x350 ObjFunc
	var_387_int = var_396_int; // 0x352 Mov
	return 8; // 0x353 Return
}


func_2824(var_115_int)
{
	var_116_int = 0; var_117_int = 0; // 0xb08 PushV
	var_118_string = "branch"; // 0xb09 PushS
	GetVariable(var_118_string, var_117_int); // 0xb0a Func
	var_119_int = 0; // 0xb0c PushI
	var_120_bool = var_117_int == var_119_int; // 0xb0d Eq
	if(var_120_bool == 0) goto Label_2834; // 0xb0e JumpB
	var_115_int = 1; // 0xb0f MovI
	return 2; // 0xb10 Return
	
Label_2834:
	var_121_int = 1; // 0xb12 PushI
	var_122_bool = var_117_int == var_121_int; // 0xb13 Eq
	if(var_122_bool == 0) goto Label_2839; // 0xb14 JumpB
	var_115_int = 2; // 0xb15 MovI
	return 2; // 0xb16 Return
	
Label_2839:
	var_115_int = 3; // 0xb17 MovI
	return 2; // 0xb18 Return
}


func_2568(var_54_float)
{
	var_55_float = 0; var_56_float = 0; // 0xa08 PushV
	GetGameTime(var_56_float); // 0xa09 Func
	var_54_float = var_56_float; // 0xa0b Mov
	return 2; // 0xa0c Return
}


func_2573(var_179_int)
{
	var_180_float = 0; var_181_float = 0; // 0xa0d PushV
	GetGameTime(var_181_float); // 0xa0e Func
	var_182_int = 1; // 0xa10 PushI
	var_183_int = 0; // 0xa11 PushV
	var_184_int = 24; // 0xa12 PushI
	var_183_int = var_181_float / var_181_float; // 0xa13 Div2
	var_179_int = var_182_int + var_183_int; // 0xa14 Add2
	return 2; // 0xa15 Return
}


func_2582(var_278_bool, var_279_int)
{
	var_280_int = 0; // 0xa17 PushV
	func_2573(var_280_int); // 0xa18 NEW_2
	var_278_bool = var_280_int == var_279_int; // 0xa1a Eq2
	return 0; // 0xa1b Return
}


func_2841(var_49_object)
{
	var_50_bool = GlobalVars[1]; // 0xb1a PushGE
	var_51_bool = var_50_bool == 0; // 0xb1b Not
	if(var_51_bool == 0) goto Label_2854; // 0xb1c JumpB
	var_52_int = 0; var_53_object = Obj(); // 0xb1d PushV
	var_53_object = var_49_object; // 0xb1e Mov
	TaskCall(0); // 0xb1f TaskCall
	func_0(var_54_object, var_52_int, var_53_object); // 0xb20 NEW_2
	TaskReturn(); // 0xb21 TaskReturn
	var_277_bool = GlobalVars[1]; // 0xb23 PushGE
	var_277_bool = 1; // 0xb24 MovB
	GlobalVars[1] = var_277_bool; // 0xb25 PopGE
	
Label_2854:
	var_278_bool = 0; var_279_int = 0; // 0xb26 PushV
	var_279_int = 2; // 0xb27 MovI
	func_2582(var_278_bool, var_279_int); // 0xb28 NEW_2
	if(var_278_bool == 0) goto Label_2866; // 0xb2a JumpB
	var_281_int = 0; var_282_object = Obj(); // 0xb2b PushV
	var_282_object = var_49_object; // 0xb2c Mov
	TaskCall(2); // 0xb2d TaskCall
	func_203(var_283_object, var_281_int, var_282_object); // 0xb2e NEW_2
	TaskReturn(); // 0xb2f TaskReturn
	return 0; // 0xb31 Return
	
Label_2866:
	var_385_bool = 0; var_386_int = 0; // 0xb32 PushV
	var_386_int = 8; // 0xb33 MovI
	func_2582(var_385_bool, var_386_int); // 0xb34 NEW_2
	if(var_385_bool == 0) goto Label_2878; // 0xb36 JumpB
	var_387_int = 0; var_388_object = Obj(); // 0xb37 PushV
	var_388_object = var_49_object; // 0xb38 Mov
	TaskCall(4); // 0xb39 TaskCall
	func_772(var_389_object, var_387_int, var_388_object); // 0xb3a NEW_2
	TaskReturn(); // 0xb3b TaskReturn
	return 0; // 0xb3d Return
	
Label_2878:
	var_452_bool = 0; var_453_int = 0; // 0xb3e PushV
	var_453_int = 10; // 0xb3f MovI
	func_2582(var_452_bool, var_453_int); // 0xb40 NEW_2
	if(var_452_bool == 0) goto Label_2890; // 0xb42 JumpB
	var_454_int = 0; var_455_object = Obj(); // 0xb43 PushV
	var_455_object = var_49_object; // 0xb44 Mov
	TaskCall(6); // 0xb45 TaskCall
	func_1121(var_456_object, var_454_int, var_455_object); // 0xb46 NEW_2
	TaskReturn(); // 0xb47 TaskReturn
	return 0; // 0xb49 Return
	
Label_2890:
	var_524_bool = 0; // 0xb4a PushV
	var_524_bool = 0; // 0xb4b MovB
	var_525_bool = 0; var_526_int = 0; // 0xb4c PushV
	var_526_int = 12; // 0xb4d MovI
	func_2582(var_525_bool, var_526_int); // 0xb4e NEW_2
	if(var_525_bool == 0) goto Label_2901; // 0xb50 JumpB
	var_527_bool = GlobalVars[2]; // 0xb51 PushGE
	var_528_bool = var_527_bool == 0; // 0xb52 Not
	if(var_528_bool == 0) goto Label_2901; // 0xb53 JumpB
	var_524_bool = 1; // 0xb54 MovB
	
Label_2901:
	if(var_524_bool == 0) goto Label_2912; // 0xb55 JumpB
	var_529_int = 0; var_530_object = Obj(); // 0xb56 PushV
	var_530_object = var_49_object; // 0xb57 Mov
	TaskCall(8); // 0xb58 TaskCall
	func_1516(var_531_object, var_529_int, var_530_object); // 0xb59 NEW_2
	TaskReturn(); // 0xb5a TaskReturn
	var_588_bool = GlobalVars[2]; // 0xb5c PushGE
	var_588_bool = 1; // 0xb5d MovB
	GlobalVars[2] = var_588_bool; // 0xb5e PopGE
	return 0; // 0xb5f Return
	
Label_2912:
	var_589_int = 0; var_590_object = Obj(); // 0xb60 PushV
	var_590_object = var_49_object; // 0xb61 Mov
	TaskCall(10); // 0xb62 TaskCall
	func_1775(var_591_object, var_589_int, var_590_object); // 0xb63 NEW_2
	TaskReturn(); // 0xb64 TaskReturn
	return 0; // 0xb66 Return
}


func_2588(var_56_string, var_57_int)
{
	var_58_string = ""; var_59_string = ""; // 0xa1c PushV
	var_59_string = "idle"; // 0xa1d MovS
	var_60_int = var_57_int; // 0xa1e Push
	if(var_60_int == 0) goto Label_2593; // 0xa1f JumpB
	var_59_string = var_59_string + var_57_int; // 0xa20 Add2
	
Label_2593:
	var_56_string = var_59_string; // 0xa21 Mov
	return 2; // 0xa22 Return
}


func_284(var_0_object, var_1_object, var_2_object, var_3_string, var_305_object, var_306_object)
{
	var_0_object = var_306_object; // 0x11d TMov
	var_1_object = var_305_object; // 0x11e TMov
	var_3_string = 0; // 0x11f TMovB
	var_311_int = 1; // 0x120 PushI
	if(var_311_int == 0) goto Label_382; // 0x121 JumpB
	var_312_bool = 0; // 0x122 PushV
	var_312_bool = 0; // 0x123 MovB
	var_313_bool = 0; var_314_object = Obj(); // 0x124 PushV
	var_314_object = var_1_object; // 0x125 MovT
	func_2705(var_314_object); // 0x126 NEW_2
	var_321_bool = var_313_bool == 0; // 0x128 Not
	if(var_321_bool == 0) goto Label_304; // 0x129 JumpB
	var_322_bool = 0; var_323_object = Obj(); // 0x12a PushV
	var_323_object = var_1_object; // 0x12b MovT
	func_2717(var_323_object); // 0x12c NEW_2
	if(var_322_bool == 0) goto Label_304; // 0x12e JumpB
	var_312_bool = 1; // 0x12f MovB
	
Label_304:
	if(var_312_bool == 0) goto Label_325; // 0x130 JumpB
	var_328_object = Obj(); var_329_object = Obj(); // 0x131 PushV
	var_328_object = var_1_object; // 0x132 MovT
	var_329_object = var_0_object; // 0x133 MovT
	func_2622(); // 0x134 NEW_2
	var_332_string = ""; // 0x136 PushV
	var_332_string = "Suffering"; // 0x137 MovS
	func_412(var_306_object, var_332_string); // 0x138 NEW_2
	var_340_int = 520248; // 0x13a PushI
	SetMessage(var_340_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_341_int = 520249; // 0x13f PushI
	var_342_int = 21442; // 0x140 PushI
	var_343_int = 21441; // 0x141 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x142 TObjFunc
	goto Label_382; // 0x144 Jump
	
Label_382:
	var_344_bool = 0; // 0x17e PushV
	func_2620(var_344_bool); // 0x17f NEW_2
	if(var_344_bool == 0) goto Label_397; // 0x181 JumpB
	
Label_386:
	lshWaitForAnimEnd(); // 0x182 Func
	var_345_string = var_3_string; // 0x184 PushT
	if(var_345_string == 0) goto Label_391; // 0x185 JumpB
	goto Label_396; // 0x186 Jump
	
Label_396:
	goto Label_411; // 0x18c Jump
	
Label_411:
	return 0; // 0x19b Return
	
Label_391:
	var_346_string = ""; // 0x187 PushV
	var_346_string = var_2_object; // 0x188 MovT
	func_2494(var_346_string); // 0x189 NEW_2
	goto Label_386; // 0x18b Jump
	
Label_397:
	var_347_string = "all"; // 0x18d PushS
	var_348_string = "idle"; // 0x18e PushS
	PlayAnimation(var_347_string, var_348_string); // 0x18f Func
	
Label_401:
	WaitForAnimEnd(); // 0x191 Func
	var_349_string = var_3_string; // 0x193 PushT
	if(var_349_string == 0) goto Label_406; // 0x194 JumpB
	goto Label_411; // 0x195 Jump
	
Label_406:
	var_350_string = "all"; // 0x196 PushS
	var_351_string = "idle"; // 0x197 PushS
	PlayAnimation(var_350_string, var_351_string); // 0x198 Func
	goto Label_401; // 0x19a Jump
	
Label_325:
	var_352_string = ""; // 0x145 PushV
	var_352_string = "Neutral"; // 0x146 MovS
	func_412(var_306_object, var_352_string); // 0x147 NEW_2
	var_353_int = 520268; // 0x149 PushI
	SetMessage(var_353_int); // 0x14a TObjFunc
	ClearReplies(); // 0x14c TObjFunc
	var_354_bool = 0; // 0x14e PushV
	var_354_bool = 0; // 0x14f MovB
	var_355_bool = 0; var_356_object = Obj(); // 0x150 PushV
	var_356_object = var_1_object; // 0x151 MovT
	func_2717(var_356_object); // 0x152 NEW_2
	var_357_bool = var_355_bool == 0; // 0x154 Not
	if(var_357_bool == 0) goto Label_348; // 0x155 JumpB
	var_358_bool = 0; var_359_object = Obj(); // 0x156 PushV
	var_359_object = var_1_object; // 0x157 MovT
	func_2729(var_359_object); // 0x158 NEW_2
	if(var_358_bool == 0) goto Label_348; // 0x15a JumpB
	var_354_bool = 1; // 0x15b MovB
	
Label_348:
	if(var_354_bool == 0) goto Label_354; // 0x15c JumpB
	var_364_int = 520269; // 0x15d PushI
	var_365_int = 21462; // 0x15e PushI
	var_366_int = 21461; // 0x15f PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x160 TObjFunc
	
Label_354:
	var_367_bool = 0; // 0x162 PushV
	var_367_bool = 0; // 0x163 MovB
	var_368_bool = 0; var_369_object = Obj(); // 0x164 PushV
	var_369_object = var_1_object; // 0x165 MovT
	func_2717(var_369_object); // 0x166 NEW_2
	var_370_bool = var_368_bool == 0; // 0x168 Not
	if(var_370_bool == 0) goto Label_368; // 0x169 JumpB
	var_371_bool = 0; var_372_object = Obj(); // 0x16a PushV
	var_372_object = var_1_object; // 0x16b MovT
	func_2741(var_372_object); // 0x16c NEW_2
	if(var_371_bool == 0) goto Label_368; // 0x16e JumpB
	var_367_bool = 1; // 0x16f MovB
	
Label_368:
	if(var_367_bool == 0) goto Label_374; // 0x170 JumpB
	var_377_int = 520272; // 0x171 PushI
	var_378_int = 21465; // 0x172 PushI
	var_379_int = 21464; // 0x173 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x174 TObjFunc
	
Label_374:
	var_380_int = 520277; // 0x176 PushI
	var_381_int = -1; // 0x177 PushI
	var_382_int = 21469; // 0x178 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x179 TObjFunc
	goto Label_382; // 0x17b Jump
}


func_2041()
{
	var_647_float = 0; var_648_float = 0; // 0x7f9 PushV
	var_649_int = 8; // 0x7fa PushI
	var_650_int = 16; // 0x7fb PushI
	rand(var_648_float, var_649_int, var_650_int); // 0x7fc Func
	var_651_int = 10; // 0x7fe PushI
	SetTimer(var_651_int, var_648_float); // 0x7ff Func
	return 2; // 0x801 Return
}


func_2338()
{
	var_270_bool = 0; var_271_bool = 0; // 0x922 PushV
	var_272_bool = 1; // 0x923 PushB
	CameraSwitchToNormal(var_272_bool); // 0x924 Func
	var_273_bool = 0; // 0x926 PushV
	func_2620(var_273_bool); // 0x927 NEW_2
	if(var_273_bool == 0) goto Label_2347; // 0x929 JumpB
	goto Label_2355; // 0x92a Jump
	
Label_2355:
	return 2; // 0x933 Return
	
Label_2347:
	var_274_string = "head"; // 0x92b PushS
	HasAnimationTrack(var_271_bool, var_274_string); // 0x92c Func
	var_275_bool = var_271_bool; // 0x92e Push
	if(var_275_bool == 0) goto Label_2355; // 0x92f JumpB
	var_276_string = "head"; // 0x930 PushS
	UnlookAsync(var_276_string); // 0x931 Func
}


func_2595(var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0xa23 PushV
	var_53_int = 0; // 0xa24 MovI
	
Label_2597:
	var_55_string = "all"; // 0xa25 PushS
	var_56_string = ""; var_57_int = 0; // 0xa26 PushV
	var_57_int = var_53_int; // 0xa27 Mov
	func_2588(var_56_string, var_57_int); // 0xa28 NEW_2
	HasAnimation(var_54_bool, var_55_string, var_56_string); // 0xa2a Func
	var_61_bool = var_54_bool == 0; // 0xa2c Not
	if(var_61_bool == 0) goto Label_2607; // 0xa2d JumpB
	goto Label_2610; // 0xa2e Jump
	
Label_2610:
	var_50_int = var_53_int; // 0xa32 Mov
	return 4; // 0xa33 Return
	
Label_2607:
	var_62_int = 1; // 0xa2f PushI
	var_53_int = var_53_int + var_62_int; // 0xa30 Add2
	goto Label_2597; // 0xa31 Jump
}


func_2612(var_112_int)
{
	var_112_int = 515539; // 0xa34 MovI
	return 0; // 0xa35 Return
}


func_2356(var_124_bool, var_125_object)
{
	var_129_int = 0; var_130_int = 0; var_131_int = 0; var_132_int = 0; // 0x934 PushV
	var_133_string = "voice_common"; // 0x935 PushS
	GetVariable(var_133_string, var_131_int); // 0x936 Func
	var_134_int = var_131_int; // 0x938 Push
	if(var_134_int == 0) goto Label_2394; // 0x939 JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x93a PushV
	var_136_object = var_125_object; // 0x93b Mov
	func_2414(var_136_object); // 0x93c NEW_2
	var_165_bool = var_135_bool == 0; // 0x93e Not
	if(var_165_bool == 0) goto Label_2376; // 0x93f JumpB
	var_166_bool = 0; var_167_object = Obj(); // 0x940 PushV
	var_167_object = var_125_object; // 0x941 Mov
	func_2451(var_167_object); // 0x942 NEW_2
	var_201_bool = var_166_bool == 0; // 0x944 Not
	if(var_201_bool == 0) goto Label_2376; // 0x945 JumpB
	var_124_bool = 0; // 0x946 MovB
	return 4; // 0x947 Return
	
Label_2376:
	var_202_int = 2; // 0x948 PushI
	irand(var_132_int, var_202_int); // 0x949 Func
	var_203_int = var_132_int; // 0x94b Push
	if(var_203_int == 0) goto Label_2389; // 0x94c JumpB
	var_204_string = "voice_common"; // 0x94d PushS
	var_205_int = 1; // 0x94e PushI
	var_206_int = var_131_int + var_205_int; // 0x94f Add
	var_207_int = 3; // 0x950 PushI
	var_208_int = var_206_int / var_207_int; // 0x951 Mod
	SetVariable(var_204_string, var_208_int); // 0x952 Func
	goto Label_2393; // 0x954 Jump
	
Label_2393:
	goto Label_2412; // 0x959 Jump
	
Label_2412:
	var_124_bool = 1; // 0x96c MovB
	return 4; // 0x96d Return
	
Label_2389:
	var_209_string = "voice_common"; // 0x955 PushS
	var_210_int = 0; // 0x956 PushI
	SetVariable(var_209_string, var_210_int); // 0x957 Func
	
Label_2394:
	var_211_bool = 0; var_212_object = Obj(); // 0x95a PushV
	var_212_object = var_125_object; // 0x95b Mov
	func_2451(var_212_object); // 0x95c NEW_2
	var_213_bool = var_211_bool == 0; // 0x95e Not
	if(var_213_bool == 0) goto Label_2408; // 0x95f JumpB
	var_214_bool = 0; var_215_object = Obj(); // 0x960 PushV
	var_215_object = var_125_object; // 0x961 Mov
	func_2414(var_215_object); // 0x962 NEW_2
	var_216_bool = var_214_bool == 0; // 0x964 Not
	if(var_216_bool == 0) goto Label_2408; // 0x965 JumpB
	var_124_bool = 0; // 0x966 MovB
	return 4; // 0x967 Return
	
Label_2408:
	var_217_string = "voice_common"; // 0x968 PushS
	var_218_int = 1; // 0x969 PushI
	SetVariable(var_217_string, var_218_int); // 0x96a Func
}


func_2614(var_111_int)
{
	var_111_int = 502864; // 0xa36 MovI
	return 0; // 0xa37 Return
}


func_2616(var_113_string)
{
	var_113_string = "ui/NPC_Katerina.png"; // 0xa38 MovS
	return 0; // 0xa39 Return
}


func_2618(var_114_string)
{
	var_114_string = "ui/NPC_Katerina_b.png"; // 0xa3a MovS
	return 0; // 0xa3b Return
}


func_2620(var_106_bool)
{
	var_106_bool = 1; // 0xa3c MovB
	return 0; // 0xa3d Return
}


func_1597(var_0_object, var_1_object, var_2_object, var_3_string, var_553_object, var_554_object)
{
	var_0_object = var_554_object; // 0x63e TMov
	var_1_object = var_553_object; // 0x63f TMov
	var_3_string = 0; // 0x640 TMovB
	var_559_int = 1; // 0x641 PushI
	if(var_559_int == 0) goto Label_1630; // 0x642 JumpB
	var_560_string = ""; // 0x643 PushV
	var_560_string = "Neutral"; // 0x644 MovS
	func_1660(var_554_object, var_560_string); // 0x645 NEW_2
	var_568_int = 535294; // 0x647 PushI
	SetMessage(var_568_int); // 0x648 TObjFunc
	ClearReplies(); // 0x64a TObjFunc
	var_569_int = 535295; // 0x64c PushI
	var_570_int = 36973; // 0x64d PushI
	var_571_int = 36972; // 0x64e PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x64f TObjFunc
	var_572_int = 535302; // 0x651 PushI
	var_573_int = -1; // 0x652 PushI
	var_574_int = 36980; // 0x653 PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0x654 TObjFunc
	var_575_int = 535303; // 0x656 PushI
	var_576_int = -1; // 0x657 PushI
	var_577_int = 36981; // 0x658 PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0x659 TObjFunc
	goto Label_1630; // 0x65b Jump
	
Label_1630:
	var_578_bool = 0; // 0x65e PushV
	func_2620(var_578_bool); // 0x65f NEW_2
	if(var_578_bool == 0) goto Label_1645; // 0x661 JumpB
	
Label_1634:
	lshWaitForAnimEnd(); // 0x662 Func
	var_579_string = var_3_string; // 0x664 PushT
	if(var_579_string == 0) goto Label_1639; // 0x665 JumpB
	goto Label_1644; // 0x666 Jump
	
Label_1644:
	goto Label_1659; // 0x66c Jump
	
Label_1659:
	return 0; // 0x67b Return
	
Label_1639:
	var_580_string = ""; // 0x667 PushV
	var_580_string = var_2_object; // 0x668 MovT
	func_2494(var_580_string); // 0x669 NEW_2
	goto Label_1634; // 0x66b Jump
	
Label_1645:
	var_581_string = "all"; // 0x66d PushS
	var_582_string = "idle"; // 0x66e PushS
	PlayAnimation(var_581_string, var_582_string); // 0x66f Func
	
Label_1649:
	WaitForAnimEnd(); // 0x671 Func
	var_583_string = var_3_string; // 0x673 PushT
	if(var_583_string == 0) goto Label_1654; // 0x674 JumpB
	goto Label_1659; // 0x675 Jump
	
Label_1654:
	var_584_string = "all"; // 0x676 PushS
	var_585_string = "idle"; // 0x677 PushS
	PlayAnimation(var_584_string, var_585_string); // 0x678 Func
	goto Label_1649; // 0x67a Jump
}


func_2622()
{
	var_330_string = "oob2Katerina1"; // 0xa3f PushS
	var_331_int = 1; // 0xa40 PushI
	SetVariable(var_330_string, var_331_int); // 0xa41 Func
	return 0; // 0xa43 Return
}


func_1856(var_0_object, var_1_object, var_2_object, var_3_string, var_613_object, var_614_object)
{
	var_0_object = var_614_object; // 0x741 TMov
	var_1_object = var_613_object; // 0x742 TMov
	var_3_string = 0; // 0x743 TMovB
	var_619_int = 1; // 0x744 PushI
	if(var_619_int == 0) goto Label_1884; // 0x745 JumpB
	var_620_string = ""; // 0x746 PushV
	var_620_string = "Neutral"; // 0x747 MovS
	func_1914(var_614_object, var_620_string); // 0x748 NEW_2
	var_628_int = 540551; // 0x74a PushI
	SetMessage(var_628_int); // 0x74b TObjFunc
	ClearReplies(); // 0x74d TObjFunc
	var_629_int = 540552; // 0x74f PushI
	var_630_int = -1; // 0x750 PushI
	var_631_int = 42561; // 0x751 PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0x752 TObjFunc
	var_632_int = 540795; // 0x754 PushI
	var_633_int = -1; // 0x755 PushI
	var_634_int = 42844; // 0x756 PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0x757 TObjFunc
	goto Label_1884; // 0x759 Jump
	
Label_1884:
	var_635_bool = 0; // 0x75c PushV
	func_2620(var_635_bool); // 0x75d NEW_2
	if(var_635_bool == 0) goto Label_1899; // 0x75f JumpB
	
Label_1888:
	lshWaitForAnimEnd(); // 0x760 Func
	var_636_string = var_3_string; // 0x762 PushT
	if(var_636_string == 0) goto Label_1893; // 0x763 JumpB
	goto Label_1898; // 0x764 Jump
	
Label_1898:
	goto Label_1913; // 0x76a Jump
	
Label_1913:
	return 0; // 0x779 Return
	
Label_1893:
	var_637_string = ""; // 0x765 PushV
	var_637_string = var_2_object; // 0x766 MovT
	func_2494(var_637_string); // 0x767 NEW_2
	goto Label_1888; // 0x769 Jump
	
Label_1899:
	var_638_string = "all"; // 0x76b PushS
	var_639_string = "idle"; // 0x76c PushS
	PlayAnimation(var_638_string, var_639_string); // 0x76d Func
	
Label_1903:
	WaitForAnimEnd(); // 0x76f Func
	var_640_string = var_3_string; // 0x771 PushT
	if(var_640_string == 0) goto Label_1908; // 0x772 JumpB
	goto Label_1913; // 0x773 Jump
	
Label_1908:
	var_641_string = "all"; // 0x774 PushS
	var_642_string = "idle"; // 0x775 PushS
	PlayAnimation(var_641_string, var_642_string); // 0x776 Func
	goto Label_1903; // 0x778 Jump
}


func_2628()
{
	var_39_string = "oob2Katerina2"; // 0xa45 PushS
	var_40_int = 1; // 0xa46 PushI
	SetVariable(var_39_string, var_40_int); // 0xa47 Func
	return 0; // 0xa49 Return
}


func_2634()
{
	var_45_string = "oob2Katerina3"; // 0xa4b PushS
	var_46_int = 1; // 0xa4c PushI
	SetVariable(var_45_string, var_46_int); // 0xa4d Func
	return 0; // 0xa4f Return
}


func_2640()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0xa50 PushV
	var_41_string = "b8q03"; // 0xa51 PushS
	var_42_int = 2; // 0xa52 PushI
	SetVariable(var_41_string, var_42_int); // 0xa53 Func
	var_43_object = Obj(); // 0xa55 PushV
	func_2807(var_43_object); // 0xa56 NEW_2
	var_40_object = var_43_object; // 0xa57 Mov
	var_50_string = "b8q03KaterinaGotoMat"; // 0xa59 PushS
	var_51_string = "pt_map_mat"; // 0xa5a PushS
	var_52_int = 0; // 0xa5b PushI
	var_53_int = 530664; // 0xa5c PushI
	var_54_float = 0; // 0xa5d PushV
	func_2568(var_54_float); // 0xa5e NEW_2
	AddMark(var_50_string, var_51_string, var_52_int, var_53_int, var_54_float); // 0xa60 ObjFunc
	func_2753(); // 0xa63 NEW_2
	return 2; // 0xa65 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_219_object, var_220_object)
{
	var_0_object = var_220_object; // 0x52 TMov
	var_1_object = var_219_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_225_int = 1; // 0x55 PushI
	if(var_225_int == 0) goto Label_109; // 0x56 JumpB
	var_226_string = ""; // 0x57 PushV
	var_226_string = "Neutral"; // 0x58 MovS
	func_139(var_220_object, var_226_string); // 0x59 NEW_2
	var_243_int = 518018; // 0x5b PushI
	SetMessage(var_243_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_244_int = 518019; // 0x60 PushI
	var_245_int = -1; // 0x61 PushI
	var_246_int = 19152; // 0x62 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x63 TObjFunc
	var_247_int = 527797; // 0x65 PushI
	var_248_int = -1; // 0x66 PushI
	var_249_int = 29130; // 0x67 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x68 TObjFunc
	goto Label_109; // 0x6a Jump
	
Label_109:
	var_250_bool = 0; // 0x6d PushV
	func_2620(var_250_bool); // 0x6e NEW_2
	if(var_250_bool == 0) goto Label_124; // 0x70 JumpB
	
Label_113:
	lshWaitForAnimEnd(); // 0x71 Func
	var_251_string = var_3_string; // 0x73 PushT
	if(var_251_string == 0) goto Label_118; // 0x74 JumpB
	goto Label_123; // 0x75 Jump
	
Label_123:
	goto Label_138; // 0x7b Jump
	
Label_138:
	return 0; // 0x8a Return
	
Label_118:
	var_252_string = ""; // 0x76 PushV
	var_252_string = var_2_object; // 0x77 MovT
	func_2494(var_252_string); // 0x78 NEW_2
	goto Label_113; // 0x7a Jump
	
Label_124:
	var_263_string = "all"; // 0x7c PushS
	var_264_string = "idle"; // 0x7d PushS
	PlayAnimation(var_263_string, var_264_string); // 0x7e Func
	
Label_128:
	WaitForAnimEnd(); // 0x80 Func
	var_265_string = var_3_string; // 0x82 PushT
	if(var_265_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_133:
	var_266_string = "all"; // 0x85 PushS
	var_267_string = "idle"; // 0x86 PushS
	PlayAnimation(var_266_string, var_267_string); // 0x87 Func
	goto Label_128; // 0x89 Jump
}


func_853(var_0_object, var_1_object, var_2_object, var_3_string, var_411_object, var_412_object)
{
	var_0_object = var_412_object; // 0x356 TMov
	var_1_object = var_411_object; // 0x357 TMov
	var_3_string = 0; // 0x358 TMovB
	var_417_int = 1; // 0x359 PushI
	if(var_417_int == 0) goto Label_891; // 0x35a JumpB
	var_418_string = ""; // 0x35b PushV
	var_418_string = "Fear"; // 0x35c MovS
	func_921(var_412_object, var_418_string); // 0x35d NEW_2
	var_426_int = 521514; // 0x35f PushI
	SetMessage(var_426_int); // 0x360 TObjFunc
	ClearReplies(); // 0x362 TObjFunc
	var_427_bool = 0; var_428_object = Obj(); // 0x364 PushV
	var_428_object = var_1_object; // 0x365 MovT
	func_2669(var_428_object); // 0x366 NEW_2
	if(var_427_bool == 0) goto Label_878; // 0x368 JumpB
	var_433_int = 521515; // 0x369 PushI
	var_434_int = 22677; // 0x36a PushI
	var_435_int = 22676; // 0x36b PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x36c TObjFunc
	
Label_878:
	var_436_int = 521518; // 0x36e PushI
	var_437_int = -1; // 0x36f PushI
	var_438_int = 22679; // 0x370 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x371 TObjFunc
	var_439_int = 523976; // 0x373 PushI
	var_440_int = -1; // 0x374 PushI
	var_441_int = 25264; // 0x375 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x376 TObjFunc
	goto Label_891; // 0x378 Jump
	
Label_891:
	var_442_bool = 0; // 0x37b PushV
	func_2620(var_442_bool); // 0x37c NEW_2
	if(var_442_bool == 0) goto Label_906; // 0x37e JumpB
	
Label_895:
	lshWaitForAnimEnd(); // 0x37f Func
	var_443_string = var_3_string; // 0x381 PushT
	if(var_443_string == 0) goto Label_900; // 0x382 JumpB
	goto Label_905; // 0x383 Jump
	
Label_905:
	goto Label_920; // 0x389 Jump
	
Label_920:
	return 0; // 0x398 Return
	
Label_900:
	var_444_string = ""; // 0x384 PushV
	var_444_string = var_2_object; // 0x385 MovT
	func_2494(var_444_string); // 0x386 NEW_2
	goto Label_895; // 0x388 Jump
	
Label_906:
	var_445_string = "all"; // 0x38a PushS
	var_446_string = "idle"; // 0x38b PushS
	PlayAnimation(var_445_string, var_446_string); // 0x38c Func
	
Label_910:
	WaitForAnimEnd(); // 0x38e Func
	var_447_string = var_3_string; // 0x390 PushT
	if(var_447_string == 0) goto Label_915; // 0x391 JumpB
	goto Label_920; // 0x392 Jump
	
Label_915:
	var_448_string = "all"; // 0x393 PushS
	var_449_string = "idle"; // 0x394 PushS
	PlayAnimation(var_448_string, var_449_string); // 0x395 Func
	goto Label_910; // 0x397 Jump
}


func_1121(var_0_object, var_454_int, var_455_object)
{
	var_457_object = Obj(); var_458_bool = 0; var_459_int = 0; var_460_bool = 0; var_461_object = Obj(); var_462_bool = 0; var_463_int = 0; var_464_bool = 0; // 0x461 PushV
	var_0_object = var_455_object; // 0x462 TMov
	var_465_bool = 0; var_466_object = Obj(); var_467_float = 0; // 0x463 PushV
	var_466_object = var_455_object; // 0x464 Mov
	var_467_float = 70.0; // 0x465 MovF
	func_2269(var_466_object, var_467_float); // 0x466 NEW_2
	var_468_bool = var_465_bool == 0; // 0x468 Not
	if(var_468_bool == 0) goto Label_1132; // 0x469 JumpB
	var_454_int = -2; // 0x46a MovI
	return 8; // 0x46b Return
	
Label_1132:
	CreateDialog(var_461_object); // 0x46c Func
	var_469_int = 0; // 0x46e PushV
	func_2614(var_469_int); // 0x46f NEW_2
	SetNPCName(var_469_int); // 0x471 ObjFunc
	var_470_int = 0; // 0x473 PushV
	func_2612(var_470_int); // 0x474 NEW_2
	SetNPCDescription(var_470_int); // 0x476 ObjFunc
	var_471_string = ""; // 0x478 PushV
	func_2616(var_471_string); // 0x479 NEW_2
	SetPhoto(var_471_string); // 0x47b ObjFunc
	var_472_string = ""; // 0x47d PushV
	func_2618(var_472_string); // 0x47e NEW_2
	SetPhoto2(var_472_string); // 0x480 ObjFunc
	var_473_int = 0; // 0x482 PushV
	func_2824(var_473_int); // 0x483 NEW_2
	SetPlayerName(var_473_int); // 0x485 ObjFunc
	var_463_int = -1; // 0x487 MovI
	IsOverrideActive(var_462_bool); // 0x488 Func
	var_474_bool = var_462_bool; // 0x48a Push
	if(var_474_bool == 0) goto Label_1166; // 0x48b JumpB
	var_454_int = -2; // 0x48c MovI
	return 8; // 0x48d Return
	
Label_1166:
	DoDialog(var_461_object); // 0x48e Func
	var_475_bool = 0; var_476_object = Obj(); // 0x490 PushV
	var_477_object = Obj(); // 0x491 PushV
	func_2547(var_477_object); // 0x492 NEW_2
	var_476_object = var_477_object; // 0x493 Mov
	func_2356(var_475_bool, var_476_object); // 0x495 NEW_2
	var_478_object = Obj(); var_479_object = Obj(); // 0x497 PushV
	var_478_object = var_455_object; // 0x498 Mov
	var_479_object = var_461_object; // 0x499 Mov
	TaskCall(7); // 0x49a TaskCall
	func_1202(var_480_object, var_481_object, var_482_string, var_483_bool, var_478_object, var_479_object); // 0x49b NEW_2
	TaskReturn(); // 0x49c TaskReturn
	IsDialogEnd(var_464_bool); // 0x49e ObjFunc
	
Label_1184:
	var_522_bool = var_464_bool == 0; // 0x4a0 Not
	if(var_522_bool == 0) goto Label_1191; // 0x4a1 JumpB
	sync(); // 0x4a2 Func
	IsDialogEnd(var_464_bool); // 0x4a4 ObjFunc
	goto Label_1184; // 0x4a6 Jump
	
Label_1191:
	var_523_object = Obj(); // 0x4a7 PushV
	var_523_object = var_455_object; // 0x4a8 Mov
	func_2338(); // 0x4a9 NEW_2
	StopDialog(var_461_object); // 0x4ab Func
	GetReturnValue(var_463_int); // 0x4ad ObjFunc
	var_454_int = var_463_int; // 0x4af Mov
	return 8; // 0x4b0 Return
}


func_2663()
{
	var_39_string = "b10q01TalkKaterina"; // 0xa68 PushS
	var_40_int = 1; // 0xa69 PushI
	SetVariable(var_39_string, var_40_int); // 0xa6a Func
	return 0; // 0xa6c Return
}


func_2669(var_427_bool)
{
	var_429_int = 0; var_430_string = ""; // 0xa6e PushV
	var_430_string = "b8q03"; // 0xa6f MovS
	func_2563(var_429_int, var_430_string); // 0xa70 NEW_2
	var_431_int = 1; // 0xa72 PushI
	var_432_bool = var_429_int == var_431_int; // 0xa73 Eq
	if(var_432_bool == 0) goto Label_2679; // 0xa74 JumpB
	var_427_bool = 1; // 0xa75 MovB
	return 0; // 0xa76 Return
	
Label_2679:
	var_427_bool = 0; // 0xa77 MovB
	return 0; // 0xa78 Return
}


func_2414(var_135_bool)
{
	var_137_string = ""; var_138_int = 0; var_139_bool = 0; var_140_int = 0; var_141_string = ""; var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; // 0x96e PushV
	var_142_string = "c"; // 0x96f MovS
	var_143_int = 0; // 0x970 MovI
	
Label_2417:
	var_147_int = 1; // 0x971 PushI
	if(var_147_int == 0) goto Label_2430; // 0x972 JumpB
	var_148_int = 1; // 0x973 PushI
	var_149_int = var_143_int + var_148_int; // 0x974 Add
	var_150_int = var_142_string + var_149_int; // 0x975 Add
	HasProperty(var_150_int, var_144_bool); // 0x976 ObjFunc
	var_151_bool = var_144_bool == 0; // 0x978 Not
	if(var_151_bool == 0) goto Label_2427; // 0x979 JumpB
	goto Label_2430; // 0x97a Jump
	
Label_2430:
	var_152_bool = var_143_int == 0; // 0x97e Not
	if(var_152_bool == 0) goto Label_2434; // 0x97f JumpB
	var_135_bool = 0; // 0x980 MovB
	return 10; // 0x981 Return
	
Label_2434:
	var_145_int = 0; // 0x982 MovI
	var_153_int = 1; // 0x983 PushI
	var_154_bool = var_143_int > var_153_int; // 0x984 GT
	if(var_154_bool == 0) goto Label_2440; // 0x985 JumpB
	irand(var_145_int, var_143_int); // 0x986 Func
	
Label_2440:
	var_155_int = 1; // 0x988 PushI
	var_156_int = var_145_int + var_155_int; // 0x989 Add
	var_157_int = var_142_string + var_156_int; // 0x98a Add
	GetProperty(var_157_int, var_146_string); // 0x98b ObjFunc
	var_158_bool = 0; var_159_string = ""; // 0x98d PushV
	var_159_string = var_146_string; // 0x98e Mov
	func_2525(var_158_bool, var_159_string); // 0x98f NEW_2
	var_135_bool = var_158_bool; // 0x990 Mov
	return 10; // 0x992 Return
	
Label_2427:
	var_164_int = 1; // 0x97b PushI
	var_143_int = var_143_int + var_164_int; // 0x97c Add2
	goto Label_2417; // 0x97d Jump
}


func_2161()
{
	var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; // 0x871 PushV
	WaitForAnimEnd(); // 0x872 Func
	var_48_bool = 0; // 0x874 PushV
	func_2264(var_48_bool); // 0x875 NEW_2
	var_49_bool = var_48_bool == 0; // 0x877 Not
	if(var_49_bool == 0) goto Label_2170; // 0x878 JumpB
	return 12; // 0x879 Return
	
Label_2170:
	var_50_int = 0; // 0x87a PushV
	func_2595(var_50_int); // 0x87b NEW_2
	var_42_int = var_50_int; // 0x87c Mov
	var_43_int = 0; // 0x87e MovI
	
Label_2175:
	var_63_bool = 0; // 0x87f PushV
	var_63_bool = 0; // 0x880 MovB
	var_64_int = 5; // 0x881 PushI
	var_65_bool = var_43_int < var_64_int; // 0x882 LT
	if(var_65_bool == 0) goto Label_2185; // 0x883 JumpB
	var_66_bool = 0; // 0x884 PushV
	func_2264(var_66_bool); // 0x885 NEW_2
	if(var_66_bool == 0) goto Label_2185; // 0x887 JumpB
	var_63_bool = 1; // 0x888 MovB
	
Label_2185:
	if(var_63_bool == 0) goto Label_2227; // 0x889 JumpB
	var_67_bool = var_42_int == 0; // 0x88a Not
	if(var_67_bool == 0) goto Label_2195; // 0x88b JumpB
	var_68_int = 3; // 0x88c PushI
	Sleep(var_68_int, var_44_bool); // 0x88d Func
	var_69_bool = var_44_bool == 0; // 0x88f Not
	if(var_69_bool == 0) goto Label_2194; // 0x890 JumpB
	goto Label_2227; // 0x891 Jump
	
Label_2227:
	ResetAAS(); // 0x8b3 Func
	return 12; // 0x8b5 Return
	
Label_2194:
	goto Label_2216; // 0x892 Jump
	
Label_2216:
	var_70_bool = 0; // 0x8a8 PushV
	func_2230(var_70_bool); // 0x8a9 NEW_2
	var_71_bool = var_70_bool == 0; // 0x8ab Not
	if(var_71_bool == 0) goto Label_2222; // 0x8ac JumpB
	goto Label_2227; // 0x8ad Jump
	
Label_2222:
	ResetAAS(); // 0x8ae Func
	var_72_int = 1; // 0x8b0 PushI
	var_43_int = var_43_int + var_72_int; // 0x8b1 Add2
	goto Label_2175; // 0x8b2 Jump
	
Label_2195:
	irand(var_45_int, var_42_int); // 0x893 Func
	var_73_int = 5; // 0x895 PushI
	irand(var_46_int, var_73_int); // 0x896 Func
	var_74_int = 0; // 0x898 PushI
	var_75_bool = var_46_int != var_74_int; // 0x899 Neq
	if(var_75_bool == 0) goto Label_2204; // 0x89a JumpB
	var_45_int = 0; // 0x89b MovI
	
Label_2204:
	var_76_string = "all"; // 0x89c PushS
	var_77_string = ""; var_78_int = 0; // 0x89d PushV
	var_78_int = var_45_int; // 0x89e Mov
	func_2588(var_77_string, var_78_int); // 0x89f NEW_2
	PlayAnimation(var_76_string, var_77_string); // 0x8a1 Func
	WaitForAnimEnd(var_47_bool); // 0x8a3 Func
	var_79_bool = var_47_bool == 0; // 0x8a5 Not
	if(var_79_bool == 0) goto Label_2216; // 0x8a6 JumpB
	goto Label_2227; // 0x8a7 Jump
}


func_2681(var_495_bool)
{
	var_497_int = 0; var_498_string = ""; // 0xa7a PushV
	var_498_string = "b10q01"; // 0xa7b MovS
	func_2563(var_497_int, var_498_string); // 0xa7c NEW_2
	var_499_int = 4; // 0xa7e PushI
	var_500_bool = var_497_int == var_499_int; // 0xa7f Eq
	if(var_500_bool == 0) goto Label_2691; // 0xa80 JumpB
	var_495_bool = 1; // 0xa81 MovB
	return 0; // 0xa82 Return
	
Label_2691:
	var_495_bool = 0; // 0xa83 MovB
	return 0; // 0xa84 Return
}


func_1914(var_2_object, var_620_string)
{
	var_621_bool = 0; // 0x77b PushV
	func_2620(var_621_bool); // 0x77c NEW_2
	var_622_bool = var_621_bool == 0; // 0x77e Not
	if(var_622_bool == 0) goto Label_1921; // 0x77f JumpB
	return 0; // 0x780 Return
	
Label_1921:
	var_623_bool = var_620_string == var_2_object; // 0x781 Eq
	if(var_623_bool == 0) goto Label_1924; // 0x782 JumpB
	return 0; // 0x783 Return
	
Label_1924:
	var_624_string = ""; var_625_bool = 0; // 0x784 PushV
	var_624_string = var_620_string; // 0x785 Mov
	var_626_string = ""; // 0x786 PushS
	var_627_bool = var_620_string == var_626_string; // 0x787 Eq
	if(var_627_bool == 0) goto Label_1931; // 0x788 JumpB
	var_625_bool = 0; // 0x789 MovB
	goto Label_1932; // 0x78a Jump
	
Label_1932:
	func_2510(var_624_string, var_625_bool); // 0x78c NEW_2
	var_2_object = var_620_string; // 0x78e TMov
	return 0; // 0x78f Return
	
Label_1931:
	var_625_bool = 1; // 0x78b MovB
}


func_1660(var_2_object, var_560_string)
{
	var_561_bool = 0; // 0x67d PushV
	func_2620(var_561_bool); // 0x67e NEW_2
	var_562_bool = var_561_bool == 0; // 0x680 Not
	if(var_562_bool == 0) goto Label_1667; // 0x681 JumpB
	return 0; // 0x682 Return
	
Label_1667:
	var_563_bool = var_560_string == var_2_object; // 0x683 Eq
	if(var_563_bool == 0) goto Label_1670; // 0x684 JumpB
	return 0; // 0x685 Return
	
Label_1670:
	var_564_string = ""; var_565_bool = 0; // 0x686 PushV
	var_564_string = var_560_string; // 0x687 Mov
	var_566_string = ""; // 0x688 PushS
	var_567_bool = var_560_string == var_566_string; // 0x689 Eq
	if(var_567_bool == 0) goto Label_1677; // 0x68a JumpB
	var_565_bool = 0; // 0x68b MovB
	goto Label_1678; // 0x68c Jump
	
Label_1678:
	func_2510(var_564_string, var_565_bool); // 0x68e NEW_2
	var_2_object = var_560_string; // 0x690 TMov
	return 0; // 0x691 Return
	
Label_1677:
	var_565_bool = 1; // 0x68d MovB
}


func_2693(var_501_bool)
{
	var_503_int = 0; var_504_string = ""; // 0xa86 PushV
	var_504_string = "b10q01TalkKaterina"; // 0xa87 MovS
	func_2563(var_503_int, var_504_string); // 0xa88 NEW_2
	var_505_int = 1; // 0xa8a PushI
	var_506_bool = var_503_int == var_505_int; // 0xa8b Eq
	if(var_506_bool == 0) goto Label_2703; // 0xa8c JumpB
	var_501_bool = 1; // 0xa8d MovB
	return 0; // 0xa8e Return
	
Label_2703:
	var_501_bool = 0; // 0xa8f MovB
	return 0; // 0xa90 Return
}


func_139(var_2_object, var_226_string)
{
	var_227_bool = 0; // 0x8c PushV
	func_2620(var_227_bool); // 0x8d NEW_2
	var_228_bool = var_227_bool == 0; // 0x8f Not
	if(var_228_bool == 0) goto Label_146; // 0x90 JumpB
	return 0; // 0x91 Return
	
Label_146:
	var_229_bool = var_226_string == var_2_object; // 0x92 Eq
	if(var_229_bool == 0) goto Label_149; // 0x93 JumpB
	return 0; // 0x94 Return
	
Label_149:
	var_230_string = ""; var_231_bool = 0; // 0x95 PushV
	var_230_string = var_226_string; // 0x96 Mov
	var_232_string = ""; // 0x97 PushS
	var_233_bool = var_226_string == var_232_string; // 0x98 Eq
	if(var_233_bool == 0) goto Label_156; // 0x99 JumpB
	var_231_bool = 0; // 0x9a MovB
	goto Label_157; // 0x9b Jump
	
Label_157:
	func_2510(var_230_string, var_231_bool); // 0x9d NEW_2
	var_2_object = var_226_string; // 0x9f TMov
	return 0; // 0xa0 Return
	
Label_156:
	var_231_bool = 1; // 0x9c MovB
}


func_2705(var_313_bool)
{
	var_315_int = 0; var_316_string = ""; // 0xa92 PushV
	var_316_string = "b2q01"; // 0xa93 MovS
	func_2563(var_315_int, var_316_string); // 0xa94 NEW_2
	var_319_int = 0; // 0xa96 PushI
	var_320_bool = var_315_int == var_319_int; // 0xa97 Eq
	if(var_320_bool == 0) goto Label_2715; // 0xa98 JumpB
	var_313_bool = 1; // 0xa99 MovB
	return 0; // 0xa9a Return
	
Label_2715:
	var_313_bool = 0; // 0xa9b MovB
	return 0; // 0xa9c Return
}


func_2451(var_166_bool)
{
	var_168_string = ""; var_169_int = 0; var_170_bool = 0; var_171_int = 0; var_172_string = ""; var_173_string = ""; var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_string = ""; // 0x993 PushV
	var_178_string = "d"; // 0x994 PushS
	var_179_int = 0; // 0x995 PushV
	func_2573(var_179_int); // 0x996 NEW_2
	var_185_int = var_178_string + var_179_int; // 0x998 Add
	var_186_string = "m"; // 0x999 PushS
	var_173_string = var_185_int + var_186_string; // 0x99a Add2
	var_174_int = 0; // 0x99b MovI
	
Label_2460:
	var_187_int = 1; // 0x99c PushI
	if(var_187_int == 0) goto Label_2473; // 0x99d JumpB
	var_188_int = 1; // 0x99e PushI
	var_189_int = var_174_int + var_188_int; // 0x99f Add
	var_190_int = var_173_string + var_189_int; // 0x9a0 Add
	HasProperty(var_190_int, var_175_bool); // 0x9a1 ObjFunc
	var_191_bool = var_175_bool == 0; // 0x9a3 Not
	if(var_191_bool == 0) goto Label_2470; // 0x9a4 JumpB
	goto Label_2473; // 0x9a5 Jump
	
Label_2473:
	var_192_bool = var_174_int == 0; // 0x9a9 Not
	if(var_192_bool == 0) goto Label_2477; // 0x9aa JumpB
	var_166_bool = 0; // 0x9ab MovB
	return 10; // 0x9ac Return
	
Label_2477:
	var_176_int = 0; // 0x9ad MovI
	var_193_int = 1; // 0x9ae PushI
	var_194_bool = var_174_int > var_193_int; // 0x9af GT
	if(var_194_bool == 0) goto Label_2483; // 0x9b0 JumpB
	irand(var_176_int, var_174_int); // 0x9b1 Func
	
Label_2483:
	var_195_int = 1; // 0x9b3 PushI
	var_196_int = var_176_int + var_195_int; // 0x9b4 Add
	var_197_int = var_173_string + var_196_int; // 0x9b5 Add
	GetProperty(var_197_int, var_177_string); // 0x9b6 ObjFunc
	var_198_bool = 0; var_199_string = ""; // 0x9b8 PushV
	var_199_string = var_177_string; // 0x9b9 Mov
	func_2525(var_198_bool, var_199_string); // 0x9ba NEW_2
	var_166_bool = var_198_bool; // 0x9bb Mov
	return 10; // 0x9bd Return
	
Label_2470:
	var_200_int = 1; // 0x9a6 PushI
	var_174_int = var_174_int + var_200_int; // 0x9a7 Add2
	goto Label_2460; // 0x9a8 Jump
}


func_921(var_2_object, var_418_string)
{
	var_419_bool = 0; // 0x39a PushV
	func_2620(var_419_bool); // 0x39b NEW_2
	var_420_bool = var_419_bool == 0; // 0x39d Not
	if(var_420_bool == 0) goto Label_928; // 0x39e JumpB
	return 0; // 0x39f Return
	
Label_928:
	var_421_bool = var_418_string == var_2_object; // 0x3a0 Eq
	if(var_421_bool == 0) goto Label_931; // 0x3a1 JumpB
	return 0; // 0x3a2 Return
	
Label_931:
	var_422_string = ""; var_423_bool = 0; // 0x3a3 PushV
	var_422_string = var_418_string; // 0x3a4 Mov
	var_424_string = ""; // 0x3a5 PushS
	var_425_bool = var_418_string == var_424_string; // 0x3a6 Eq
	if(var_425_bool == 0) goto Label_938; // 0x3a7 JumpB
	var_423_bool = 0; // 0x3a8 MovB
	goto Label_939; // 0x3a9 Jump
	
Label_939:
	func_2510(var_422_string, var_423_bool); // 0x3ab NEW_2
	var_2_object = var_418_string; // 0x3ad TMov
	return 0; // 0x3ae Return
	
Label_938:
	var_423_bool = 1; // 0x3aa MovB
}


func_412(var_2_object, var_332_string)
{
	var_333_bool = 0; // 0x19d PushV
	func_2620(var_333_bool); // 0x19e NEW_2
	var_334_bool = var_333_bool == 0; // 0x1a0 Not
	if(var_334_bool == 0) goto Label_419; // 0x1a1 JumpB
	return 0; // 0x1a2 Return
	
Label_419:
	var_335_bool = var_332_string == var_2_object; // 0x1a3 Eq
	if(var_335_bool == 0) goto Label_422; // 0x1a4 JumpB
	return 0; // 0x1a5 Return
	
Label_422:
	var_336_string = ""; var_337_bool = 0; // 0x1a6 PushV
	var_336_string = var_332_string; // 0x1a7 Mov
	var_338_string = ""; // 0x1a8 PushS
	var_339_bool = var_332_string == var_338_string; // 0x1a9 Eq
	if(var_339_bool == 0) goto Label_429; // 0x1aa JumpB
	var_337_bool = 0; // 0x1ab MovB
	goto Label_430; // 0x1ac Jump
	
Label_430:
	func_2510(var_336_string, var_337_bool); // 0x1ae NEW_2
	var_2_object = var_332_string; // 0x1b0 TMov
	return 0; // 0x1b1 Return
	
Label_429:
	var_337_bool = 1; // 0x1ad MovB
}


func_2717(var_322_bool)
{
	var_324_int = 0; var_325_string = ""; // 0xa9e PushV
	var_325_string = "oob2Katerina1"; // 0xa9f MovS
	func_2563(var_324_int, var_325_string); // 0xaa0 NEW_2
	var_326_int = 0; // 0xaa2 PushI
	var_327_bool = var_324_int == var_326_int; // 0xaa3 Eq
	if(var_327_bool == 0) goto Label_2727; // 0xaa4 JumpB
	var_322_bool = 1; // 0xaa5 MovB
	return 0; // 0xaa6 Return
	
Label_2727:
	var_322_bool = 0; // 0xaa7 MovB
	return 0; // 0xaa8 Return
}


func_2729(var_358_bool)
{
	var_360_int = 0; var_361_string = ""; // 0xaaa PushV
	var_361_string = "oob2Katerina2"; // 0xaab MovS
	func_2563(var_360_int, var_361_string); // 0xaac NEW_2
	var_362_int = 0; // 0xaae PushI
	var_363_bool = var_360_int == var_362_int; // 0xaaf Eq
	if(var_363_bool == 0) goto Label_2739; // 0xab0 JumpB
	var_358_bool = 1; // 0xab1 MovB
	return 0; // 0xab2 Return
	
Label_2739:
	var_358_bool = 0; // 0xab3 MovB
	return 0; // 0xab4 Return
}


func_1202(var_0_object, var_1_object, var_2_object, var_3_string, var_478_object, var_479_object)
{
	var_0_object = var_479_object; // 0x4b3 TMov
	var_1_object = var_478_object; // 0x4b4 TMov
	var_3_string = 0; // 0x4b5 TMovB
	var_484_int = 1; // 0x4b6 PushI
	if(var_484_int == 0) goto Label_1245; // 0x4b7 JumpB
	var_485_string = ""; // 0x4b8 PushV
	var_485_string = "Neutral"; // 0x4b9 MovS
	func_1275(var_479_object, var_485_string); // 0x4ba NEW_2
	var_493_int = 521930; // 0x4bc PushI
	SetMessage(var_493_int); // 0x4bd TObjFunc
	ClearReplies(); // 0x4bf TObjFunc
	var_494_bool = 0; // 0x4c1 PushV
	var_494_bool = 0; // 0x4c2 MovB
	var_495_bool = 0; var_496_object = Obj(); // 0x4c3 PushV
	var_496_object = var_1_object; // 0x4c4 MovT
	func_2681(var_496_object); // 0x4c5 NEW_2
	if(var_495_bool == 0) goto Label_1231; // 0x4c7 JumpB
	var_501_bool = 0; var_502_object = Obj(); // 0x4c8 PushV
	var_502_object = var_1_object; // 0x4c9 MovT
	func_2693(var_502_object); // 0x4ca NEW_2
	var_507_bool = var_501_bool == 0; // 0x4cc Not
	if(var_507_bool == 0) goto Label_1231; // 0x4cd JumpB
	var_494_bool = 1; // 0x4ce MovB
	
Label_1231:
	if(var_494_bool == 0) goto Label_1237; // 0x4cf JumpB
	var_508_int = 521931; // 0x4d0 PushI
	var_509_int = 23673; // 0x4d1 PushI
	var_510_int = 23105; // 0x4d2 PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0x4d3 TObjFunc
	
Label_1237:
	var_511_int = 521932; // 0x4d5 PushI
	var_512_int = -1; // 0x4d6 PushI
	var_513_int = 23106; // 0x4d7 PushI
	AddReply(var_511_int, var_512_int, var_513_int); // 0x4d8 TObjFunc
	goto Label_1245; // 0x4da Jump
	
Label_1245:
	var_514_bool = 0; // 0x4dd PushV
	func_2620(var_514_bool); // 0x4de NEW_2
	if(var_514_bool == 0) goto Label_1260; // 0x4e0 JumpB
	
Label_1249:
	lshWaitForAnimEnd(); // 0x4e1 Func
	var_515_string = var_3_string; // 0x4e3 PushT
	if(var_515_string == 0) goto Label_1254; // 0x4e4 JumpB
	goto Label_1259; // 0x4e5 Jump
	
Label_1259:
	goto Label_1274; // 0x4eb Jump
	
Label_1274:
	return 0; // 0x4fa Return
	
Label_1254:
	var_516_string = ""; // 0x4e6 PushV
	var_516_string = var_2_object; // 0x4e7 MovT
	func_2494(var_516_string); // 0x4e8 NEW_2
	goto Label_1249; // 0x4ea Jump
	
Label_1260:
	var_517_string = "all"; // 0x4ec PushS
	var_518_string = "idle"; // 0x4ed PushS
	PlayAnimation(var_517_string, var_518_string); // 0x4ee Func
	
Label_1264:
	WaitForAnimEnd(); // 0x4f0 Func
	var_519_string = var_3_string; // 0x4f2 PushT
	if(var_519_string == 0) goto Label_1269; // 0x4f3 JumpB
	goto Label_1274; // 0x4f4 Jump
	
Label_1269:
	var_520_string = "all"; // 0x4f5 PushS
	var_521_string = "idle"; // 0x4f6 PushS
	PlayAnimation(var_520_string, var_521_string); // 0x4f7 Func
	goto Label_1264; // 0x4f9 Jump
}


func_2741(var_371_bool)
{
	var_373_int = 0; var_374_string = ""; // 0xab6 PushV
	var_374_string = "oob2Katerina3"; // 0xab7 MovS
	func_2563(var_373_int, var_374_string); // 0xab8 NEW_2
	var_375_int = 0; // 0xaba PushI
	var_376_bool = var_373_int == var_375_int; // 0xabb Eq
	if(var_376_bool == 0) goto Label_2751; // 0xabc JumpB
	var_371_bool = 1; // 0xabd MovB
	return 0; // 0xabe Return
	
Label_2751:
	var_371_bool = 0; // 0xabf MovB
	return 0; // 0xac0 Return
}


func_2230(var_70_bool)
{
	var_70_bool = 1; // 0x8b6 MovB
	return 0; // 0x8b7 Return
}


func_2232()
{
	StopAnimation(); // 0x8b8 Func
	StopGroup0(); // 0x8ba Func
	return 0; // 0x8bc Return
}


func_2237(var_46_float)
{
	var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x8bd PushV
	GetPosition(var_51_cvector); // 0x8be Func
	GetPosition(var_52_cvector); // 0x8c0 ObjFunc
	var_53_cvector = var_52_cvector - var_51_cvector; // 0x8c2 Sub2
	var_46_float = var_53_cvector | var_53_cvector; // 0x8c3 Or2
	return 6; // 0x8c4 Return
}


func_2494(var_252_string)
{
	var_253_bool = 0; var_254_float = 0; var_255_float = 0; var_256_bool = 0; var_257_float = 0; var_258_float = 0; // 0x9be PushV
	lshHasAnimation(var_256_bool, var_252_string); // 0x9bf Func
	var_259_bool = var_256_bool; // 0x9c1 Push
	if(var_259_bool == 0) goto Label_2505; // 0x9c2 JumpB
	lshGetAnimTimes(var_252_string, var_257_float, var_258_float); // 0x9c3 Func
	var_260_bool = 0; // 0x9c5 PushB
	lshPlayAnimation(var_257_float, var_258_float, var_260_bool); // 0x9c6 Func
	goto Label_2509; // 0x9c8 Jump
	
Label_2509:
	return 6; // 0x9cd Return
	
Label_2505:
	var_261_string = "Can't find lsh animation : "; // 0x9c9 PushS
	var_262_int = var_261_string + var_252_string; // 0x9ca Add
	Trace(var_262_int); // 0x9cb Func
}


func_1985(var_0_object)
{
	var_32_bool = 0; // 0x7c1 PushV
	func_2264(var_32_bool); // 0x7c2 NEW_2
	var_35_bool = var_32_bool == 0; // 0x7c4 Not
	if(var_35_bool == 0) goto Label_1992; // 0x7c5 JumpB
	Hold(); // 0x7c6 Func
	
Label_1992:
	GetDirection(var_0_object); // 0x7c8 Func
	
Label_1994:
	func_2161(); // 0x7cb NEW_2
	goto Label_1994; // 0x7cd Jump
}


func_2753()
{
	var_57_object = Obj(); var_58_object = Obj(); // 0xac1 PushV
	var_59_int = 577; // 0xac2 PushI
	var_60_int = 2; // 0xac3 PushI
	var_61_int = 530657; // 0xac4 PushI
	CreateDiaryEntry(var_58_object, var_59_int, var_60_int, var_61_int); // 0xac5 Func
	var_62_bool = 0; var_63_object = Obj(); var_64_int = 0; // 0xac7 PushV
	var_63_object = var_58_object; // 0xac8 Mov
	var_64_int = 575; // 0xac9 MovI
	func_2779(var_62_bool, var_63_object, var_64_int); // 0xaca NEW_2
	return 2; // 0xacc Return
}


func_2245(var_39_bool, var_40_cvector)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; // 0x8c5 PushV
	GetPosition(var_44_cvector); // 0x8c6 Func
	var_45_cvector = var_40_cvector - var_44_cvector; // 0x8c8 Sub2
	var_47_float = GetByIndex(var_45_cvector, 0); // 0x8c9 PushE
	var_48_float = GetByIndex(var_45_cvector, 2); // 0x8ca PushE
	Rotate(var_47_float, var_48_float, var_46_bool); // 0x8cb Func
	var_39_bool = var_46_bool; // 0x8cd Mov
	return 6; // 0x8ce Return
}


func_203(var_0_object, var_281_int, var_282_object)
{
	var_284_object = Obj(); var_285_bool = 0; var_286_int = 0; var_287_bool = 0; var_288_object = Obj(); var_289_bool = 0; var_290_int = 0; var_291_bool = 0; // 0xcb PushV
	var_0_object = var_282_object; // 0xcc TMov
	var_292_bool = 0; var_293_object = Obj(); var_294_float = 0; // 0xcd PushV
	var_293_object = var_282_object; // 0xce Mov
	var_294_float = 70.0; // 0xcf MovF
	func_2269(var_293_object, var_294_float); // 0xd0 NEW_2
	var_295_bool = var_292_bool == 0; // 0xd2 Not
	if(var_295_bool == 0) goto Label_214; // 0xd3 JumpB
	var_281_int = -2; // 0xd4 MovI
	return 8; // 0xd5 Return
	
Label_214:
	CreateDialog(var_288_object); // 0xd6 Func
	var_296_int = 0; // 0xd8 PushV
	func_2614(var_296_int); // 0xd9 NEW_2
	SetNPCName(var_296_int); // 0xdb ObjFunc
	var_297_int = 0; // 0xdd PushV
	func_2612(var_297_int); // 0xde NEW_2
	SetNPCDescription(var_297_int); // 0xe0 ObjFunc
	var_298_string = ""; // 0xe2 PushV
	func_2616(var_298_string); // 0xe3 NEW_2
	SetPhoto(var_298_string); // 0xe5 ObjFunc
	var_299_string = ""; // 0xe7 PushV
	func_2618(var_299_string); // 0xe8 NEW_2
	SetPhoto2(var_299_string); // 0xea ObjFunc
	var_300_int = 0; // 0xec PushV
	func_2824(var_300_int); // 0xed NEW_2
	SetPlayerName(var_300_int); // 0xef ObjFunc
	var_290_int = -1; // 0xf1 MovI
	IsOverrideActive(var_289_bool); // 0xf2 Func
	var_301_bool = var_289_bool; // 0xf4 Push
	if(var_301_bool == 0) goto Label_248; // 0xf5 JumpB
	var_281_int = -2; // 0xf6 MovI
	return 8; // 0xf7 Return
	
Label_248:
	DoDialog(var_288_object); // 0xf8 Func
	var_302_bool = 0; var_303_object = Obj(); // 0xfa PushV
	var_304_object = Obj(); // 0xfb PushV
	func_2547(var_304_object); // 0xfc NEW_2
	var_303_object = var_304_object; // 0xfd Mov
	func_2356(var_302_bool, var_303_object); // 0xff NEW_2
	var_305_object = Obj(); var_306_object = Obj(); // 0x101 PushV
	var_305_object = var_282_object; // 0x102 Mov
	var_306_object = var_288_object; // 0x103 Mov
	TaskCall(3); // 0x104 TaskCall
	func_284(var_307_object, var_308_object, var_309_string, var_310_bool, var_305_object, var_306_object); // 0x105 NEW_2
	TaskReturn(); // 0x106 TaskReturn
	IsDialogEnd(var_291_bool); // 0x108 ObjFunc
	
Label_266:
	var_383_bool = var_291_bool == 0; // 0x10a Not
	if(var_383_bool == 0) goto Label_273; // 0x10b JumpB
	sync(); // 0x10c Func
	IsDialogEnd(var_291_bool); // 0x10e ObjFunc
	goto Label_266; // 0x110 Jump
	
Label_273:
	var_384_object = Obj(); // 0x111 PushV
	var_384_object = var_282_object; // 0x112 Mov
	func_2338(); // 0x113 NEW_2
	StopDialog(var_288_object); // 0x115 Func
	GetReturnValue(var_290_int); // 0x117 ObjFunc
	var_281_int = var_290_int; // 0x119 Mov
	return 8; // 0x11a Return
}


func_2510(var_230_string, var_231_bool)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0; // 0x9ce PushV
	lshHasAnimation(var_237_bool, var_230_string); // 0x9cf Func
	var_240_bool = var_237_bool; // 0x9d1 Push
	if(var_240_bool == 0) goto Label_2520; // 0x9d2 JumpB
	lshGetAnimTimes(var_230_string, var_238_float, var_239_float); // 0x9d3 Func
	lshPlayAnimation(var_238_float, var_239_float, var_231_bool); // 0x9d5 Func
	goto Label_2524; // 0x9d7 Jump
	
Label_2524:
	return 6; // 0x9dc Return
	
Label_2520:
	var_241_string = "Can't find lsh animation : "; // 0x9d8 PushS
	var_242_int = var_241_string + var_230_string; // 0x9d9 Add
	Trace(var_242_int); // 0x9da Func
}


func_2255(var_35_bool)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); // 0x8cf PushV
	GetPosition(var_38_cvector); // 0x8d0 ObjFunc
	var_39_bool = 0; var_40_cvector = CVector(0,0,0); // 0x8d2 PushV
	var_40_cvector = var_38_cvector; // 0x8d3 Mov
	func_2245(var_39_bool, var_40_cvector); // 0x8d4 NEW_2
	var_35_bool = var_39_bool; // 0x8d5 Mov
	return 2; // 0x8d7 Return
}


func_1999(var_56_bool)
{
	var_57_object = Obj(); var_58_object = Obj(); // 0x7cf PushV
	var_59_string = "player"; // 0x7d0 PushS
	FindActor(var_58_object, var_59_string); // 0x7d1 Func
	var_60_bool = var_58_object == 0; // 0x7d3 Not
	if(var_60_bool == 0) goto Label_2007; // 0x7d4 JumpB
	var_56_bool = 0; // 0x7d5 MovB
	return 2; // 0x7d6 Return
	
Label_2007:
	var_61_bool = 0; var_62_object = Obj(); // 0x7d7 PushV
	var_62_object = var_58_object; // 0x7d8 Mov
	func_2255(var_62_object); // 0x7d9 NEW_2
	var_56_bool = var_61_bool; // 0x7da Mov
	return 2; // 0x7dc Return
}


func_2766(var_71_object)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0xace PushV
	GetDiaryRoot(var_73_object); // 0xacf Func
	var_74_bool = var_73_object == 0; // 0xad1 Not
	if(var_74_bool == 0) goto Label_2776; // 0xad2 JumpB
	var_75_string = "Can't retrieve diary root"; // 0xad3 PushS
	Trace(var_75_string); // 0xad4 Func
	var_71_object = 0; // 0xad6 MovB
	return 2; // 0xad7 Return
	
Label_2776:
	var_71_object = var_73_object; // 0xad8 Mov
	return 2; // 0xad9 Return
}


func_2264(var_32_bool)
{
	var_33_bool = 0; var_34_bool = 0; // 0x8d8 PushV
	IsLoaded(var_34_bool); // 0x8d9 Func
	var_32_bool = var_34_bool; // 0x8db Mov
	return 2; // 0x8dc Return
}


func_2779(var_62_bool, var_63_object, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); var_67_int = 0; var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; // 0xadb PushV
	var_71_object = Obj(); // 0xadc PushV
	func_2766(var_71_object); // 0xadd NEW_2
	var_68_object = var_71_object; // 0xade Mov
	Find(var_64_int, var_69_object); // 0xae0 ObjFunc
	var_76_bool = var_69_object == 0; // 0xae2 Not
	if(var_76_bool == 0) goto Label_2794; // 0xae3 JumpB
	var_77_string = "Can't find diary parent with id: "; // 0xae4 PushS
	var_78_int = var_77_string + var_64_int; // 0xae5 Add
	Trace(var_78_int); // 0xae6 Func
	var_62_bool = 0; // 0xae8 MovB
	return 6; // 0xae9 Return
	
Label_2794:
	AddChild(var_63_object); // 0xaea ObjFunc
	var_79_int = 7; // 0xaec PushI
	SendWorldWndMessage(var_79_int); // 0xaed Func
	GetCategory(var_70_int); // 0xaef ObjFunc
	SetDiarySection(var_70_int); // 0xaf1 Func
	var_62_bool = 0; // 0xaf3 MovB
	return 6; // 0xaf4 Return
}


func_2269(var_63_bool, var_65_float)
{
	var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; // 0x8dd PushV
	GetPosition(var_76_cvector); // 0x8de ObjFunc
	GetEyesHeight(var_75_float); // 0x8e0 ObjFunc
	var_84_float = GetByIndex(var_76_cvector, 1); // 0x8e2 PushE
	var_84_float = var_84_float + var_75_float; // 0x8e3 Add2
	SetByIndex(var_76_cvector, 1) = var_84_float; // 0x8e4 PopE
	GetPosition(var_77_cvector); // 0x8e5 Func
	GetEyesHeight(var_75_float); // 0x8e7 Func
	var_85_float = GetByIndex(var_77_cvector, 1); // 0x8e9 PushE
	var_85_float = var_85_float + var_75_float; // 0x8ea Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0x8eb PopE
	var_78_cvector = var_76_cvector - var_77_cvector; // 0x8ec Sub2
	var_86_float = GetByIndex(var_78_cvector, 1); // 0x8ed PushE
	var_86_float = 0; // 0x8ee MovI
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0x8ef PopE
	var_87_int = var_78_cvector | var_78_cvector; // 0x8f0 Or
	var_88_float = sqrt(var_87_int); // 0x8f1 Sqrt
	var_78_cvector = var_78_cvector / var_78_cvector; // 0x8f2 Div2
	var_79_cvector = -var_78_cvector; // 0x8f3 Neg2
	var_89_float = var_78_cvector * var_65_float; // 0x8f4 Mult
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); // 0x8f5 PushV
	var_92_cvector = CVector(0.0, 1.0, 0.0); // 0x8f6 PushVec
	var_91_cvector = var_79_cvector ^ var_92_cvector; // 0x8f7 Xor2
	func_2553(var_90_cvector, var_91_cvector); // 0x8f8 NEW_2
	var_98_int = 25; // 0x8fa PushI
	var_99_float = var_90_cvector * var_98_int; // 0x8fb Mult
	var_100_int = var_89_float + var_99_float; // 0x8fc Add
	var_101_cvector = CVector(0.0, 10.0, 0.0); // 0x8fd PushVec
	var_80_cvector = var_100_int - var_101_cvector; // 0x8fe Sub2
	var_81_cvector = var_77_cvector + var_80_cvector; // 0x8ff Add2
	IsOverrideActive(var_82_bool); // 0x900 Func
	var_102_bool = var_82_bool; // 0x902 Push
	if(var_102_bool == 0) goto Label_2310; // 0x903 JumpB
	var_63_bool = 0; // 0x904 MovB
	return 18; // 0x905 Return
	
Label_2310:
	StopWorld(); // 0x906 Func
	var_103_bool = 1; // 0x908 PushB
	CameraTransit(var_81_cvector, var_79_cvector, var_103_bool); // 0x909 Func
	var_104_float = GetByIndex(var_80_cvector, 0); // 0x90b PushE
	var_105_float = GetByIndex(var_80_cvector, 2); // 0x90c PushE
	Rotate(var_104_float, var_105_float); // 0x90d Func
	var_106_bool = 0; // 0x90f PushV
	func_2620(var_106_bool); // 0x910 NEW_2
	if(var_106_bool == 0) goto Label_2324; // 0x912 JumpB
	goto Label_2332; // 0x913 Jump
	
Label_2332:
	CameraWaitForPlayFinish(); // 0x91c Func
	ResumeWorld(); // 0x91e Func
	var_63_bool = 1; // 0x920 MovB
	return 18; // 0x921 Return
	
Label_2324:
	var_107_string = "head"; // 0x914 PushS
	HasAnimationTrack(var_83_bool, var_107_string); // 0x915 Func
	var_108_bool = var_83_bool; // 0x917 Push
	if(var_108_bool == 0) goto Label_2332; // 0x918 JumpB
	var_109_string = "head"; // 0x919 PushS
	LookAsyncCamera(var_109_string); // 0x91a Func
}


func_2014(var_0_object)
{
	var_108_float = GetByIndex(var_0_object, 0); // 0x7de PushE
	var_109_float = GetByIndex(var_0_object, 2); // 0x7df PushE
	RotateAsync(var_108_float, var_109_float); // 0x7e0 Func
	return 0; // 0x7e2 Return
}


func_2525(var_158_bool, var_159_string)
{
	var_160_bool = 0; var_161_bool = 0; // 0x9dd PushV
	var_162_bool = 0; // 0x9de PushV
	func_2620(var_162_bool); // 0x9df NEW_2
	if(var_162_bool == 0) goto Label_2538; // 0x9e1 JumpB
	lshHasSpeech(var_161_bool, var_159_string); // 0x9e2 Func
	var_163_bool = var_161_bool; // 0x9e4 Push
	if(var_163_bool == 0) goto Label_2538; // 0x9e5 JumpB
	lshPlaySpeech(var_159_string); // 0x9e6 Func
	var_158_bool = 1; // 0x9e8 MovB
	return 2; // 0x9e9 Return
	
Label_2538:
	var_158_bool = 0; // 0x9ea MovB
	return 2; // 0x9eb Return
}


func_2019(var_39_bool)
{
	var_40_object = Obj(); var_41_bool = 0; var_42_object = Obj(); var_43_bool = 0; // 0x7e3 PushV
	var_44_string = "player"; // 0x7e4 PushS
	FindActor(var_42_object, var_44_string); // 0x7e5 Func
	var_45_bool = var_42_object == 0; // 0x7e7 Not
	if(var_45_bool == 0) goto Label_2027; // 0x7e8 JumpB
	var_39_bool = 0; // 0x7e9 MovB
	return 4; // 0x7ea Return
	
Label_2027:
	var_46_float = 0; var_47_object = Obj(); // 0x7eb PushV
	var_47_object = var_42_object; // 0x7ec Mov
	func_2237(var_47_object); // 0x7ed NEW_2
	var_54_float = 90000.0; // 0x7ef PushF
	var_55_bool = var_46_float > var_54_float; // 0x7f0 GT
	if(var_55_bool == 0) goto Label_2036; // 0x7f1 JumpB
	var_39_bool = 0; // 0x7f2 MovB
	return 4; // 0x7f3 Return
	
Label_2036:
	CanSee(var_43_bool, var_42_object); // 0x7f4 Func
	var_39_bool = var_43_bool; // 0x7f6 Mov
	return 4; // 0x7f7 Return
}


func_2540()
{
	var_34_bool = 0; // 0x9ec PushV
	func_2620(var_34_bool); // 0x9ed NEW_2
	if(var_34_bool == 0) goto Label_2546; // 0x9ef JumpB
	lshStopSpeech(); // 0x9f0 Func
	
Label_2546:
	return 0; // 0x9f2 Return
}


func_1516(var_0_object, var_529_int, var_530_object)
{
	var_532_object = Obj(); var_533_bool = 0; var_534_int = 0; var_535_bool = 0; var_536_object = Obj(); var_537_bool = 0; var_538_int = 0; var_539_bool = 0; // 0x5ec PushV
	var_0_object = var_530_object; // 0x5ed TMov
	var_540_bool = 0; var_541_object = Obj(); var_542_float = 0; // 0x5ee PushV
	var_541_object = var_530_object; // 0x5ef Mov
	var_542_float = 70.0; // 0x5f0 MovF
	func_2269(var_541_object, var_542_float); // 0x5f1 NEW_2
	var_543_bool = var_540_bool == 0; // 0x5f3 Not
	if(var_543_bool == 0) goto Label_1527; // 0x5f4 JumpB
	var_529_int = -2; // 0x5f5 MovI
	return 8; // 0x5f6 Return
	
Label_1527:
	CreateDialog(var_536_object); // 0x5f7 Func
	var_544_int = 0; // 0x5f9 PushV
	func_2614(var_544_int); // 0x5fa NEW_2
	SetNPCName(var_544_int); // 0x5fc ObjFunc
	var_545_int = 0; // 0x5fe PushV
	func_2612(var_545_int); // 0x5ff NEW_2
	SetNPCDescription(var_545_int); // 0x601 ObjFunc
	var_546_string = ""; // 0x603 PushV
	func_2616(var_546_string); // 0x604 NEW_2
	SetPhoto(var_546_string); // 0x606 ObjFunc
	var_547_string = ""; // 0x608 PushV
	func_2618(var_547_string); // 0x609 NEW_2
	SetPhoto2(var_547_string); // 0x60b ObjFunc
	var_548_int = 0; // 0x60d PushV
	func_2824(var_548_int); // 0x60e NEW_2
	SetPlayerName(var_548_int); // 0x610 ObjFunc
	var_538_int = -1; // 0x612 MovI
	IsOverrideActive(var_537_bool); // 0x613 Func
	var_549_bool = var_537_bool; // 0x615 Push
	if(var_549_bool == 0) goto Label_1561; // 0x616 JumpB
	var_529_int = -2; // 0x617 MovI
	return 8; // 0x618 Return
	
Label_1561:
	DoDialog(var_536_object); // 0x619 Func
	var_550_bool = 0; var_551_object = Obj(); // 0x61b PushV
	var_552_object = Obj(); // 0x61c PushV
	func_2547(var_552_object); // 0x61d NEW_2
	var_551_object = var_552_object; // 0x61e Mov
	func_2356(var_550_bool, var_551_object); // 0x620 NEW_2
	var_553_object = Obj(); var_554_object = Obj(); // 0x622 PushV
	var_553_object = var_530_object; // 0x623 Mov
	var_554_object = var_536_object; // 0x624 Mov
	TaskCall(9); // 0x625 TaskCall
	func_1597(var_555_object, var_556_object, var_557_string, var_558_bool, var_553_object, var_554_object); // 0x626 NEW_2
	TaskReturn(); // 0x627 TaskReturn
	IsDialogEnd(var_539_bool); // 0x629 ObjFunc
	
Label_1579:
	var_586_bool = var_539_bool == 0; // 0x62b Not
	if(var_586_bool == 0) goto Label_1586; // 0x62c JumpB
	sync(); // 0x62d Func
	IsDialogEnd(var_539_bool); // 0x62f ObjFunc
	goto Label_1579; // 0x631 Jump
	
Label_1586:
	var_587_object = Obj(); // 0x632 PushV
	var_587_object = var_530_object; // 0x633 Mov
	func_2338(); // 0x634 NEW_2
	StopDialog(var_536_object); // 0x636 Func
	GetReturnValue(var_538_int); // 0x638 ObjFunc
	var_529_int = var_538_int; // 0x63a Mov
	return 8; // 0x63b Return
}


func_1775(var_0_object, var_589_int, var_590_object)
{
	var_592_object = Obj(); var_593_bool = 0; var_594_int = 0; var_595_bool = 0; var_596_object = Obj(); var_597_bool = 0; var_598_int = 0; var_599_bool = 0; // 0x6ef PushV
	var_0_object = var_590_object; // 0x6f0 TMov
	var_600_bool = 0; var_601_object = Obj(); var_602_float = 0; // 0x6f1 PushV
	var_601_object = var_590_object; // 0x6f2 Mov
	var_602_float = 70.0; // 0x6f3 MovF
	func_2269(var_601_object, var_602_float); // 0x6f4 NEW_2
	var_603_bool = var_600_bool == 0; // 0x6f6 Not
	if(var_603_bool == 0) goto Label_1786; // 0x6f7 JumpB
	var_589_int = -2; // 0x6f8 MovI
	return 8; // 0x6f9 Return
	
Label_1786:
	CreateDialog(var_596_object); // 0x6fa Func
	var_604_int = 0; // 0x6fc PushV
	func_2614(var_604_int); // 0x6fd NEW_2
	SetNPCName(var_604_int); // 0x6ff ObjFunc
	var_605_int = 0; // 0x701 PushV
	func_2612(var_605_int); // 0x702 NEW_2
	SetNPCDescription(var_605_int); // 0x704 ObjFunc
	var_606_string = ""; // 0x706 PushV
	func_2616(var_606_string); // 0x707 NEW_2
	SetPhoto(var_606_string); // 0x709 ObjFunc
	var_607_string = ""; // 0x70b PushV
	func_2618(var_607_string); // 0x70c NEW_2
	SetPhoto2(var_607_string); // 0x70e ObjFunc
	var_608_int = 0; // 0x710 PushV
	func_2824(var_608_int); // 0x711 NEW_2
	SetPlayerName(var_608_int); // 0x713 ObjFunc
	var_598_int = -1; // 0x715 MovI
	IsOverrideActive(var_597_bool); // 0x716 Func
	var_609_bool = var_597_bool; // 0x718 Push
	if(var_609_bool == 0) goto Label_1820; // 0x719 JumpB
	var_589_int = -2; // 0x71a MovI
	return 8; // 0x71b Return
	
Label_1820:
	DoDialog(var_596_object); // 0x71c Func
	var_610_bool = 0; var_611_object = Obj(); // 0x71e PushV
	var_612_object = Obj(); // 0x71f PushV
	func_2547(var_612_object); // 0x720 NEW_2
	var_611_object = var_612_object; // 0x721 Mov
	func_2356(var_610_bool, var_611_object); // 0x723 NEW_2
	var_613_object = Obj(); var_614_object = Obj(); // 0x725 PushV
	var_613_object = var_590_object; // 0x726 Mov
	var_614_object = var_596_object; // 0x727 Mov
	TaskCall(11); // 0x728 TaskCall
	func_1856(var_615_object, var_616_object, var_617_string, var_618_bool, var_613_object, var_614_object); // 0x729 NEW_2
	TaskReturn(); // 0x72a TaskReturn
	IsDialogEnd(var_599_bool); // 0x72c ObjFunc
	
Label_1838:
	var_643_bool = var_599_bool == 0; // 0x72e Not
	if(var_643_bool == 0) goto Label_1845; // 0x72f JumpB
	sync(); // 0x730 Func
	IsDialogEnd(var_599_bool); // 0x732 ObjFunc
	goto Label_1838; // 0x734 Jump
	
Label_1845:
	var_644_object = Obj(); // 0x735 PushV
	var_644_object = var_590_object; // 0x736 Mov
	func_2338(); // 0x737 NEW_2
	StopDialog(var_596_object); // 0x739 Func
	GetReturnValue(var_598_int); // 0x73b ObjFunc
	var_589_int = var_598_int; // 0x73d Mov
	return 8; // 0x73e Return
}


func_2547(var_126_object)
{
	var_127_object = Obj(); var_128_object = Obj(); // 0x9f3 PushV
	self(var_128_object); // 0x9f4 Func
	var_126_object = var_128_object; // 0x9f6 Mov
	return 2; // 0x9f7 Return
}


func_2807(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj(); // 0xaf7 PushV
	GetMainOutdoorScene(var_46_object); // 0xaf8 Func
	var_48_bool = var_46_object == 0; // 0xafa NullEq
	if(var_48_bool == 0) goto Label_2818; // 0xafb JumpB
	var_49_string = "Can't find main outdoor scene"; // 0xafc PushS
	Trace(var_49_string); // 0xafd Func
	var_47_object = 0; // 0xaff SetNull
	var_43_object = var_47_object; // 0xb00 Mov
	return 4; // 0xb01 Return
	
Label_2818:
	GetMap(var_47_object); // 0xb02 ObjFunc
	var_43_object = var_47_object; // 0xb04 Mov
	return 4; // 0xb05 Return
}


func_2553(var_90_cvector, var_91_cvector)
{
	var_93_float = 0; var_94_float = 0; // 0x9f9 PushV
	var_95_int = var_91_cvector | var_91_cvector; // 0x9fa Or
	var_94_float = sqrt(var_95_int); // 0x9fb Sqrt2
	var_96_float = 0.0; // 0x9fc PushF
	var_97_bool = var_94_float < var_96_float; // 0x9fd LT
	if(var_97_bool == 0) goto Label_2561; // 0x9fe JumpB
	var_90_cvector = CVector(0.0, 0.0, 0.0); // 0x9ff MovV
	return 2; // 0xa00 Return
	
Label_2561:
	var_90_cvector = var_91_cvector / var_91_cvector; // 0xa01 Div2
	return 2; // 0xa02 Return
}


func_1275(var_2_object, var_485_string)
{
	var_486_bool = 0; // 0x4fc PushV
	func_2620(var_486_bool); // 0x4fd NEW_2
	var_487_bool = var_486_bool == 0; // 0x4ff Not
	if(var_487_bool == 0) goto Label_1282; // 0x500 JumpB
	return 0; // 0x501 Return
	
Label_1282:
	var_488_bool = var_485_string == var_2_object; // 0x502 Eq
	if(var_488_bool == 0) goto Label_1285; // 0x503 JumpB
	return 0; // 0x504 Return
	
Label_1285:
	var_489_string = ""; var_490_bool = 0; // 0x505 PushV
	var_489_string = var_485_string; // 0x506 Mov
	var_491_string = ""; // 0x507 PushS
	var_492_bool = var_485_string == var_491_string; // 0x508 Eq
	if(var_492_bool == 0) goto Label_1292; // 0x509 JumpB
	var_490_bool = 0; // 0x50a MovB
	goto Label_1293; // 0x50b Jump
	
Label_1293:
	func_2510(var_489_string, var_490_bool); // 0x50d NEW_2
	var_2_object = var_485_string; // 0x50f TMov
	return 0; // 0x510 Return
	
Label_1292:
	var_490_bool = 1; // 0x50c MovB
}


