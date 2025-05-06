task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_11(var_0_bool, var_1_int, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_string, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_float, var_19_float, var_20_int)
{
	var_21_bool = 0; // 0x28 PushV
	func_2023(var_21_bool); // 0x29 NEW_2
	if(var_21_bool == 0) goto Label_47; // 0x2b JumpB
	lshStopAnimation(); // 0x2c Func
	goto Label_49; // 0x2e Jump
	
Label_49:
	StopTrade(); // 0x31 Func
	var_0_bool = 1; // 0x33 TMovB
	return 0; // 0x34 Return
	
Label_47:
	StopAnimation(); // 0x2f Func
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	var_0_bool = 1; // 0x60 TMovB
	func_185(); // 0x62 NEW_2
	func_2007(); // 0x65 NEW_2
	TaskCall(0); // 0x68 TaskCall
	func_0(); // 0x69 NEW_2
	TaskReturn(); // 0x6a TaskReturn
	return 0; // 0x6c Return
}


task_2_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_float, var_19_float, var_20_int)
{
	var_21_bool = 0; var_22_bool = 0; // 0x6d PushV
	IsOverrideActive(var_22_bool); // 0x6e Func
	var_23_bool = var_22_bool == 0; // 0x70 Not
	if(var_23_bool == 0) goto Label_128; // 0x71 JumpB
	func_185(); // 0x73 NEW_2
	EventDisable(0); // 0x75 EventDisable
	var_24_bool = 0; var_25_object = Obj(); // 0x76 PushV
	var_25_object = var_20_int; // 0x77 Mov
	func_1625(var_25_object); // 0x78 NEW_2
	EventEnable(0); // 0x7a EventEnable
	var_38_object = Obj(); // 0x7b PushV
	var_38_object = var_20_int; // 0x7c Mov
	func_2237(var_21_bool, var_22_bool, var_38_object); // 0x7d NEW_2
	var_0_bool = 0; // 0x7f TMovB
	
Label_128:
	return 2; // 0x80 Return
}


	task_2_event_10(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_object, var_5_object, var_6_string, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_float, var_19_float, var_20_int, var_21_object, var_22_object, var_42_object)
	{
	var_43_bool = 0; var_44_bool = 0; // 0x81 PushV
	IsPlayerActor(var_42_object, var_44_bool); // 0x82 Func
	var_45_bool = var_44_bool; // 0x84 Push
	if(var_45_bool == 0) goto Label_148; // 0x85 JumpB
	func_185(); // 0x87 NEW_2
	var_46_object = Obj(); // 0x89 PushV
	var_46_object = var_42_object; // 0x8a Mov
	TaskCall(3); // 0x8b TaskCall
	func_188(var_46_object); // 0x8c NEW_2
	TaskReturn(); // 0x8d TaskReturn
	var_0_bool = 0; // 0x8f TMovB
	var_60_int = 20; // 0x90 PushI
	var_61_float = 10.0; // 0x91 PushF
	SetTimer(var_60_int, var_61_float); // 0x92 Func
	
Label_148:
	return 2; // 0x94 Return
	}


task_2_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_object, var_5_object, var_6_string, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_float, var_19_float, var_20_int)
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x95 PushV
	var_23_int = 20; // 0x96 PushI
	var_24_bool = var_20_int == var_23_int; // 0x97 Eq
	if(var_24_bool == 0) goto Label_158; // 0x98 JumpB
	var_0_bool = 1; // 0x99 TMovB
	var_25_int = 20; // 0x9a PushI
	KillTimer(var_25_int); // 0x9b Func
	goto Label_184; // 0x9d Jump
	
Label_184:
	return 2; // 0xb8 Return
	
Label_158:
	var_26_int = 21; // 0x9e PushI
	var_27_bool = var_20_int == var_26_int; // 0x9f Eq
	if(var_27_bool == 0) goto Label_184; // 0xa0 JumpB
	var_28_bool = var_0_bool; // 0xa1 PushT
	if(var_28_bool == 0) goto Label_184; // 0xa2 JumpB
	var_29_string = "player"; // 0xa3 PushS
	FindActor(var_22_object, var_29_string); // 0xa4 Func
	var_30_bool = 0; // 0xa6 PushV
	var_30_bool = 0; // 0xa7 MovB
	var_31_object = var_22_object; // 0xa8 Push
	if(var_31_object == 0) goto Label_178; // 0xa9 JumpB
	var_32_float = 0; var_33_object = Obj(); // 0xaa PushV
	var_33_object = var_22_object; // 0xab Mov
	func_1607(var_33_object); // 0xac NEW_2
	var_40_float = 62500.0; // 0xae PushF
	var_41_bool = var_32_float <= var_40_float; // 0xaf LE
	if(var_41_bool == 0) goto Label_178; // 0xb0 JumpB
	var_30_bool = 1; // 0xb1 MovB
	
Label_178:
	if(var_30_bool == 0) goto Label_183; // 0xb2 JumpB
	var_42_object = Obj(); // 0xb3 PushV
	var_42_object = var_22_object; // 0xb4 Mov
	func_129(); // 0xb5 NEW_2
	
Label_183:
	var_22_object = 0; // 0xb7 SetNull
}


task_3_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	func_233(); // 0xcb NEW_2
	func_2007(); // 0xce NEW_2
	TaskCall(0); // 0xd1 TaskCall
	func_0(); // 0xd2 NEW_2
	TaskReturn(); // 0xd3 TaskReturn
	return 0; // 0xd5 Return
}


task_3_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_string, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_float, var_19_float, var_20_int)
{
	var_21_bool = 0; var_22_bool = 0; // 0xd6 PushV
	IsOverrideActive(var_22_bool); // 0xd7 Func
	var_23_bool = var_22_bool == 0; // 0xd9 Not
	if(var_23_bool == 0) goto Label_232; // 0xda JumpB
	func_233(); // 0xdc NEW_2
	EventDisable(0); // 0xde EventDisable
	var_24_bool = 0; var_25_object = Obj(); // 0xdf PushV
	var_25_object = var_20_int; // 0xe0 Mov
	func_1625(var_25_object); // 0xe1 NEW_2
	EventEnable(0); // 0xe3 EventEnable
	var_38_object = Obj(); // 0xe4 PushV
	var_38_object = var_20_int; // 0xe5 Mov
	func_2237(var_21_bool, var_22_bool, var_38_object); // 0xe6 NEW_2
	
Label_232:
	return 2; // 0xe8 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	func_2007(); // 0x120 NEW_2
	TaskCall(0); // 0x123 TaskCall
	func_0(); // 0x124 NEW_2
	TaskReturn(); // 0x125 TaskReturn
	return 0; // 0x127 Return
}


task_6_event_11(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_int, var_8_int, var_9_object, var_10_object, var_11_object, var_12_string, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_float, var_20_float, var_21_int)
{
	var_22_int = 1; // 0x26c PushI
	if(var_22_int == 0) goto Label_1017; // 0x26d JumpB
	func_1821(); // 0x26f NEW_2
	var_24_int = 19051; // 0x271 PushI
	var_25_bool = var_21_int == var_24_int; // 0x272 Eq
	if(var_25_bool == 0) goto Label_638; // 0x273 JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x274 PushV
	var_26_object = var_1_bool; // 0x275 MovT
	var_27_object = var_0_bool; // 0x276 MovT
	func_2048(var_27_object); // 0x277 NEW_2
	var_80_object = Obj(); var_81_object = Obj(); // 0x279 PushV
	var_80_object = var_1_bool; // 0x27a MovT
	var_81_object = var_0_bool; // 0x27b MovT
	func_2025(); // 0x27c NEW_2
	
Label_638:
	var_84_int = 19062; // 0x27e PushI
	var_85_bool = var_21_int == var_84_int; // 0x27f Eq
	if(var_85_bool == 0) goto Label_646; // 0x280 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x281 PushV
	var_86_object = var_1_bool; // 0x282 MovT
	var_87_object = var_0_bool; // 0x283 MovT
	func_2048(var_87_object); // 0x284 NEW_2
	
Label_646:
	var_88_int = 43908; // 0x286 PushI
	var_89_bool = var_21_int == var_88_int; // 0x287 Eq
	if(var_89_bool == 0) goto Label_654; // 0x288 JumpB
	var_90_object = Obj(); var_91_object = Obj(); // 0x289 PushV
	var_90_object = var_1_bool; // 0x28a MovT
	var_91_object = var_0_bool; // 0x28b MovT
	func_2031(); // 0x28c NEW_2
	
Label_654:
	var_93_int = 19310; // 0x28e PushI
	var_94_bool = var_21_int == var_93_int; // 0x28f Eq
	if(var_94_bool == 0) goto Label_662; // 0x290 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x291 PushV
	var_95_object = var_1_bool; // 0x292 MovT
	var_96_object = var_0_bool; // 0x293 MovT
	func_2031(); // 0x294 NEW_2
	
Label_662:
	var_97_int = 19048; // 0x296 PushI
	var_98_bool = var_20_float == var_97_int; // 0x297 Eq
	if(var_98_bool == 0) goto Label_828; // 0x298 JumpB
	var_99_bool = 0; // 0x299 PushV
	var_99_bool = 0; // 0x29a MovB
	var_100_bool = 0; // 0x29b PushV
	var_100_bool = 0; // 0x29c MovB
	var_101_bool = 0; var_102_object = Obj(); // 0x29d PushV
	var_102_object = var_1_bool; // 0x29e MovT
	func_2074(var_101_bool, var_102_object); // 0x29f NEW_2
	if(var_101_bool == 0) goto Label_680; // 0x2a1 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x2a2 PushV
	var_110_object = var_1_bool; // 0x2a3 MovT
	func_2084(var_110_object); // 0x2a4 NEW_2
	if(var_109_bool == 0) goto Label_680; // 0x2a6 JumpB
	var_100_bool = 1; // 0x2a7 MovB
	
Label_680:
	if(var_100_bool == 0) goto Label_687; // 0x2a8 JumpB
	var_117_bool = 0; var_118_object = Obj(); // 0x2a9 PushV
	var_118_object = var_1_bool; // 0x2aa MovT
	func_2096(var_118_object); // 0x2ab NEW_2
	if(var_117_bool == 0) goto Label_687; // 0x2ad JumpB
	var_99_bool = 1; // 0x2ae MovB
	
Label_687:
	if(var_99_bool == 0) goto Label_713; // 0x2af JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x2b0 PushV
	var_123_object = var_1_bool; // 0x2b1 MovT
	var_124_object = var_0_bool; // 0x2b2 MovT
	func_2036(); // 0x2b3 NEW_2
	var_127_string = ""; // 0x2b5 PushV
	var_127_string = "Neutral"; // 0x2b6 MovS
	func_597(var_21_int, var_127_string); // 0x2b7 NEW_2
	var_144_int = 517910; // 0x2b9 PushI
	SetMessage(var_144_int); // 0x2ba TObjFunc
	ClearReplies(); // 0x2bc TObjFunc
	var_145_int = 520406; // 0x2be PushI
	var_146_int = 21615; // 0x2bf PushI
	var_147_int = 21614; // 0x2c0 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x2c1 TObjFunc
	var_148_int = 517911; // 0x2c3 PushI
	var_149_int = 19050; // 0x2c4 PushI
	var_150_int = 19049; // 0x2c5 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x2c6 TObjFunc
	return 0; // 0x2c8 Return
	
Label_713:
	var_151_bool = 0; // 0x2c9 PushV
	var_151_bool = 0; // 0x2ca MovB
	var_152_bool = 0; // 0x2cb PushV
	var_152_bool = 0; // 0x2cc MovB
	var_153_bool = 0; var_154_object = Obj(); // 0x2cd PushV
	var_154_object = var_1_bool; // 0x2ce MovT
	func_2074(var_153_bool, var_154_object); // 0x2cf NEW_2
	var_155_bool = var_153_bool == 0; // 0x2d1 Not
	if(var_155_bool == 0) goto Label_729; // 0x2d2 JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x2d3 PushV
	var_157_object = var_1_bool; // 0x2d4 MovT
	func_2084(var_157_object); // 0x2d5 NEW_2
	if(var_156_bool == 0) goto Label_729; // 0x2d7 JumpB
	var_152_bool = 1; // 0x2d8 MovB
	
Label_729:
	if(var_152_bool == 0) goto Label_736; // 0x2d9 JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0x2da PushV
	var_159_object = var_1_bool; // 0x2db MovT
	func_2108(var_159_object); // 0x2dc NEW_2
	if(var_158_bool == 0) goto Label_736; // 0x2de JumpB
	var_151_bool = 1; // 0x2df MovB
	
Label_736:
	if(var_151_bool == 0) goto Label_762; // 0x2e0 JumpB
	var_164_object = Obj(); var_165_object = Obj(); // 0x2e1 PushV
	var_164_object = var_1_bool; // 0x2e2 MovT
	var_165_object = var_0_bool; // 0x2e3 MovT
	func_2042(); // 0x2e4 NEW_2
	var_168_string = ""; // 0x2e6 PushV
	var_168_string = "Neutral"; // 0x2e7 MovS
	func_597(var_21_int, var_168_string); // 0x2e8 NEW_2
	var_169_int = 517915; // 0x2ea PushI
	SetMessage(var_169_int); // 0x2eb TObjFunc
	ClearReplies(); // 0x2ed TObjFunc
	var_170_int = 517916; // 0x2ef PushI
	var_171_int = 19055; // 0x2f0 PushI
	var_172_int = 19054; // 0x2f1 PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x2f2 TObjFunc
	var_173_int = 520410; // 0x2f4 PushI
	var_174_int = 21620; // 0x2f5 PushI
	var_175_int = 21619; // 0x2f6 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x2f7 TObjFunc
	return 0; // 0x2f9 Return
	
Label_762:
	var_176_bool = 0; var_177_object = Obj(); // 0x2fa PushV
	var_177_object = var_1_bool; // 0x2fb MovT
	func_2084(var_177_object); // 0x2fc NEW_2
	if(var_176_bool == 0) goto Label_808; // 0x2fe JumpB
	var_178_string = ""; // 0x2ff PushV
	var_178_string = "Neutral"; // 0x300 MovS
	func_597(var_21_int, var_178_string); // 0x301 NEW_2
	var_179_int = 517919; // 0x303 PushI
	SetMessage(var_179_int); // 0x304 TObjFunc
	ClearReplies(); // 0x306 TObjFunc
	var_180_bool = 0; var_181_object = Obj(); // 0x308 PushV
	var_181_object = var_1_bool; // 0x309 MovT
	func_2074(var_180_bool, var_181_object); // 0x30a NEW_2
	if(var_180_bool == 0) goto Label_786; // 0x30c JumpB
	var_182_int = 517920; // 0x30d PushI
	var_183_int = 19061; // 0x30e PushI
	var_184_int = 19058; // 0x30f PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x310 TObjFunc
	
Label_786:
	var_185_bool = 0; var_186_object = Obj(); // 0x312 PushV
	var_186_object = var_1_bool; // 0x313 MovT
	func_2074(var_185_bool, var_186_object); // 0x314 NEW_2
	var_187_bool = var_185_bool == 0; // 0x316 Not
	if(var_187_bool == 0) goto Label_797; // 0x317 JumpB
	var_188_int = 517921; // 0x318 PushI
	var_189_int = 19063; // 0x319 PushI
	var_190_int = 19059; // 0x31a PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x31b TObjFunc
	
Label_797:
	var_191_int = 541718; // 0x31d PushI
	var_192_int = -1; // 0x31e PushI
	var_193_int = 43908; // 0x31f PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x320 TObjFunc
	var_194_int = 517922; // 0x322 PushI
	var_195_int = -1; // 0x323 PushI
	var_196_int = 19060; // 0x324 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x325 TObjFunc
	return 0; // 0x327 Return
	
Label_808:
	var_197_string = ""; // 0x328 PushV
	var_197_string = "Neutral"; // 0x329 MovS
	func_597(var_21_int, var_197_string); // 0x32a NEW_2
	var_198_int = 517927; // 0x32c PushI
	SetMessage(var_198_int); // 0x32d TObjFunc
	ClearReplies(); // 0x32f TObjFunc
	var_199_int = 518197; // 0x331 PushI
	var_200_int = -1; // 0x332 PushI
	var_201_int = 19310; // 0x333 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x334 TObjFunc
	var_202_int = 517928; // 0x336 PushI
	var_203_int = -1; // 0x337 PushI
	var_204_int = 19066; // 0x338 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x339 TObjFunc
	return 0; // 0x33b Return
	
Label_828:
	var_205_int = 19063; // 0x33c PushI
	var_206_bool = var_20_float == var_205_int; // 0x33d Eq
	if(var_206_bool == 0) goto Label_846; // 0x33e JumpB
	var_207_string = ""; // 0x33f PushV
	var_207_string = "Neutral"; // 0x340 MovS
	func_597(var_21_int, var_207_string); // 0x341 NEW_2
	var_208_int = 517925; // 0x343 PushI
	SetMessage(var_208_int); // 0x344 TObjFunc
	ClearReplies(); // 0x346 TObjFunc
	var_209_int = 517926; // 0x348 PushI
	var_210_int = -1; // 0x349 PushI
	var_211_int = 19064; // 0x34a PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x34b TObjFunc
	return 0; // 0x34d Return
	
Label_846:
	var_212_int = 19061; // 0x34e PushI
	var_213_bool = var_20_float == var_212_int; // 0x34f Eq
	if(var_213_bool == 0) goto Label_864; // 0x350 JumpB
	var_214_string = ""; // 0x351 PushV
	var_214_string = "Neutral"; // 0x352 MovS
	func_597(var_21_int, var_214_string); // 0x353 NEW_2
	var_215_int = 517923; // 0x355 PushI
	SetMessage(var_215_int); // 0x356 TObjFunc
	ClearReplies(); // 0x358 TObjFunc
	var_216_int = 517924; // 0x35a PushI
	var_217_int = -1; // 0x35b PushI
	var_218_int = 19062; // 0x35c PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x35d TObjFunc
	return 0; // 0x35f Return
	
Label_864:
	var_219_int = 21620; // 0x360 PushI
	var_220_bool = var_20_float == var_219_int; // 0x361 Eq
	if(var_220_bool == 0) goto Label_882; // 0x362 JumpB
	var_221_string = ""; // 0x363 PushV
	var_221_string = "Neutral"; // 0x364 MovS
	func_597(var_21_int, var_221_string); // 0x365 NEW_2
	var_222_int = 520411; // 0x367 PushI
	SetMessage(var_222_int); // 0x368 TObjFunc
	ClearReplies(); // 0x36a TObjFunc
	var_223_int = 520412; // 0x36c PushI
	var_224_int = 19055; // 0x36d PushI
	var_225_int = 21621; // 0x36e PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x36f TObjFunc
	return 0; // 0x371 Return
	
Label_882:
	var_226_int = 19055; // 0x372 PushI
	var_227_bool = var_20_float == var_226_int; // 0x373 Eq
	if(var_227_bool == 0) goto Label_900; // 0x374 JumpB
	var_228_string = ""; // 0x375 PushV
	var_228_string = "Neutral"; // 0x376 MovS
	func_597(var_21_int, var_228_string); // 0x377 NEW_2
	var_229_int = 517917; // 0x379 PushI
	SetMessage(var_229_int); // 0x37a TObjFunc
	ClearReplies(); // 0x37c TObjFunc
	var_230_int = 517918; // 0x37e PushI
	var_231_int = 21618; // 0x37f PushI
	var_232_int = 19056; // 0x380 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x381 TObjFunc
	return 0; // 0x383 Return
	
Label_900:
	var_233_int = 21618; // 0x384 PushI
	var_234_bool = var_20_float == var_233_int; // 0x385 Eq
	if(var_234_bool == 0) goto Label_923; // 0x386 JumpB
	var_235_string = ""; // 0x387 PushV
	var_235_string = "Neutral"; // 0x388 MovS
	func_597(var_21_int, var_235_string); // 0x389 NEW_2
	var_236_int = 520409; // 0x38b PushI
	SetMessage(var_236_int); // 0x38c TObjFunc
	ClearReplies(); // 0x38e TObjFunc
	var_237_int = 520413; // 0x390 PushI
	var_238_int = 21624; // 0x391 PushI
	var_239_int = 21623; // 0x392 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x393 TObjFunc
	var_240_int = 520418; // 0x395 PushI
	var_241_int = -1; // 0x396 PushI
	var_242_int = 21628; // 0x397 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x398 TObjFunc
	return 0; // 0x39a Return
	
Label_923:
	var_243_int = 21624; // 0x39b PushI
	var_244_bool = var_20_float == var_243_int; // 0x39c Eq
	if(var_244_bool == 0) goto Label_946; // 0x39d JumpB
	var_245_string = ""; // 0x39e PushV
	var_245_string = "Neutral"; // 0x39f MovS
	func_597(var_21_int, var_245_string); // 0x3a0 NEW_2
	var_246_int = 520414; // 0x3a2 PushI
	SetMessage(var_246_int); // 0x3a3 TObjFunc
	ClearReplies(); // 0x3a5 TObjFunc
	var_247_int = 520415; // 0x3a7 PushI
	var_248_int = 21626; // 0x3a8 PushI
	var_249_int = 21625; // 0x3a9 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x3aa TObjFunc
	var_250_int = 520419; // 0x3ac PushI
	var_251_int = -1; // 0x3ad PushI
	var_252_int = 21629; // 0x3ae PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x3af TObjFunc
	return 0; // 0x3b1 Return
	
Label_946:
	var_253_int = 21626; // 0x3b2 PushI
	var_254_bool = var_20_float == var_253_int; // 0x3b3 Eq
	if(var_254_bool == 0) goto Label_964; // 0x3b4 JumpB
	var_255_string = ""; // 0x3b5 PushV
	var_255_string = "Neutral"; // 0x3b6 MovS
	func_597(var_21_int, var_255_string); // 0x3b7 NEW_2
	var_256_int = 520416; // 0x3b9 PushI
	SetMessage(var_256_int); // 0x3ba TObjFunc
	ClearReplies(); // 0x3bc TObjFunc
	var_257_int = 520417; // 0x3be PushI
	var_258_int = -1; // 0x3bf PushI
	var_259_int = 21627; // 0x3c0 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x3c1 TObjFunc
	return 0; // 0x3c3 Return
	
Label_964:
	var_260_int = 19050; // 0x3c4 PushI
	var_261_bool = var_20_float == var_260_int; // 0x3c5 Eq
	if(var_261_bool == 0) goto Label_987; // 0x3c6 JumpB
	var_262_string = ""; // 0x3c7 PushV
	var_262_string = "Neutral"; // 0x3c8 MovS
	func_597(var_21_int, var_262_string); // 0x3c9 NEW_2
	var_263_int = 517912; // 0x3cb PushI
	SetMessage(var_263_int); // 0x3cc TObjFunc
	ClearReplies(); // 0x3ce TObjFunc
	var_264_int = 517913; // 0x3d0 PushI
	var_265_int = -1; // 0x3d1 PushI
	var_266_int = 19051; // 0x3d2 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x3d3 TObjFunc
	var_267_int = 517914; // 0x3d5 PushI
	var_268_int = -1; // 0x3d6 PushI
	var_269_int = 19052; // 0x3d7 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x3d8 TObjFunc
	return 0; // 0x3da Return
	
Label_987:
	var_270_int = 21615; // 0x3db PushI
	var_271_bool = var_20_float == var_270_int; // 0x3dc Eq
	if(var_271_bool == 0) goto Label_1005; // 0x3dd JumpB
	var_272_string = ""; // 0x3de PushV
	var_272_string = "Neutral"; // 0x3df MovS
	func_597(var_21_int, var_272_string); // 0x3e0 NEW_2
	var_273_int = 520407; // 0x3e2 PushI
	SetMessage(var_273_int); // 0x3e3 TObjFunc
	ClearReplies(); // 0x3e5 TObjFunc
	var_274_int = 520408; // 0x3e7 PushI
	var_275_int = 19050; // 0x3e8 PushI
	var_276_int = 21616; // 0x3e9 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x3ea TObjFunc
	return 0; // 0x3ec Return
	
Label_1005:
	var_3_object = 1; // 0x3ed TMovB
	var_277_bool = 0; // 0x3ee PushV
	func_2023(var_277_bool); // 0x3ef NEW_2
	if(var_277_bool == 0) goto Label_1013; // 0x3f1 JumpB
	lshStopAnimation(); // 0x3f2 Func
	goto Label_1015; // 0x3f4 Jump
	
Label_1015:
	return 0; // 0x3f7 Return
	
Label_1013:
	StopAnimation(); // 0x3f5 Func
	
Label_1017:
	return 0; // 0x3f9 Return
}


task_8_event_11(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_float, var_20_float, var_21_int)
{
	var_22_int = 1; // 0x495 PushI
	if(var_22_int == 0) goto Label_1213; // 0x496 JumpB
	func_1821(); // 0x498 NEW_2
	var_24_int = 21937; // 0x49a PushI
	var_25_bool = var_20_float == var_24_int; // 0x49b Eq
	if(var_25_bool == 0) goto Label_1201; // 0x49c JumpB
	var_26_string = ""; // 0x49d PushV
	var_26_string = "Neutral"; // 0x49e MovS
	func_1150(var_21_int, var_26_string); // 0x49f NEW_2
	var_43_int = 520726; // 0x4a1 PushI
	SetMessage(var_43_int); // 0x4a2 TObjFunc
	ClearReplies(); // 0x4a4 TObjFunc
	var_44_int = 520727; // 0x4a6 PushI
	var_45_int = -1; // 0x4a7 PushI
	var_46_int = 21938; // 0x4a8 PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0x4a9 TObjFunc
	var_47_int = 520728; // 0x4ab PushI
	var_48_int = -1; // 0x4ac PushI
	var_49_int = 21939; // 0x4ad PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0x4ae TObjFunc
	return 0; // 0x4b0 Return
	
Label_1201:
	var_3_object = 1; // 0x4b1 TMovB
	var_50_bool = 0; // 0x4b2 PushV
	func_2023(var_50_bool); // 0x4b3 NEW_2
	if(var_50_bool == 0) goto Label_1209; // 0x4b5 JumpB
	lshStopAnimation(); // 0x4b6 Func
	goto Label_1211; // 0x4b8 Jump
	
Label_1211:
	return 0; // 0x4bb Return
	
Label_1209:
	StopAnimation(); // 0x4b9 Func
	
Label_1213:
	return 0; // 0x4bd Return
}


task_10_event_11(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int, var_19_float, var_20_float, var_21_int)
{
	var_22_int = 1; // 0x55e PushI
	if(var_22_int == 0) goto Label_1427; // 0x55f JumpB
	func_1821(); // 0x561 NEW_2
	var_24_int = 43906; // 0x563 PushI
	var_25_bool = var_21_int == var_24_int; // 0x564 Eq
	if(var_25_bool == 0) goto Label_1387; // 0x565 JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x566 PushV
	var_26_object = var_1_bool; // 0x567 MovT
	var_27_object = var_0_bool; // 0x568 MovT
	func_2031(); // 0x569 NEW_2
	
Label_1387:
	var_29_int = 43905; // 0x56b PushI
	var_30_bool = var_20_float == var_29_int; // 0x56c Eq
	if(var_30_bool == 0) goto Label_1415; // 0x56d JumpB
	var_31_string = ""; // 0x56e PushV
	var_31_string = "Neutral"; // 0x56f MovS
	func_1351(var_21_int, var_31_string); // 0x570 NEW_2
	var_48_int = 541715; // 0x572 PushI
	SetMessage(var_48_int); // 0x573 TObjFunc
	ClearReplies(); // 0x575 TObjFunc
	var_49_int = 541716; // 0x577 PushI
	var_50_int = -1; // 0x578 PushI
	var_51_int = 43906; // 0x579 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0x57a TObjFunc
	var_52_int = 541717; // 0x57c PushI
	var_53_int = -1; // 0x57d PushI
	var_54_int = 43907; // 0x57e PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0x57f TObjFunc
	var_55_int = 541742; // 0x581 PushI
	var_56_int = -1; // 0x582 PushI
	var_57_int = 43939; // 0x583 PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x584 TObjFunc
	return 0; // 0x586 Return
	
Label_1415:
	var_3_object = 1; // 0x587 TMovB
	var_58_bool = 0; // 0x588 PushV
	func_2023(var_58_bool); // 0x589 NEW_2
	if(var_58_bool == 0) goto Label_1423; // 0x58b JumpB
	lshStopAnimation(); // 0x58c Func
	goto Label_1425; // 0x58e Jump
	
Label_1425:
	return 0; // 0x591 Return
	
Label_1423:
	StopAnimation(); // 0x58f Func
	
Label_1427:
	return 0; // 0x593 Return
}


task_11_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	func_2007(); // 0x62a NEW_2
	TaskCall(0); // 0x62d TaskCall
	func_0(); // 0x62e NEW_2
	TaskReturn(); // 0x62f TaskReturn
	return 0; // 0x631 Return
}


task_11_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x632 PushV
	IsOverrideActive(var_22_bool); // 0x633 Func
	var_23_bool = var_22_bool == 0; // 0x635 Not
	if(var_23_bool == 0) goto Label_1601; // 0x636 JumpB
	EventDisable(0); // 0x637 EventDisable
	var_24_bool = 0; var_25_object = Obj(); // 0x638 PushV
	var_25_object = var_20_object; // 0x639 Mov
	func_1625(var_25_object); // 0x63a NEW_2
	EventEnable(0); // 0x63c EventEnable
	var_38_object = Obj(); // 0x63d PushV
	var_38_object = var_20_object; // 0x63e Mov
	func_2237(var_21_bool, var_22_bool, var_38_object); // 0x63f NEW_2
	
Label_1601:
	return 2; // 0x641 Return
}


	event_26(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int, var_20_int, var_21_float, var_24_string)
	{
	var_25_bool = 0; var_26_bool = 0; // 0x7bf PushV
	var_27_string = "cleanup"; // 0x7c0 PushS
	var_28_bool = var_24_string == var_27_string; // 0x7c1 Eq
	if(var_28_bool == 0) goto Label_2000; // 0x7c2 JumpB
	var_29_bool = GlobalVars[1]; // 0x7c3 PushGE
	var_29_bool = 1; // 0x7c4 MovB
	GlobalVars[1] = var_29_bool; // 0x7c5 PopGE
	IsLoaded(var_26_bool); // 0x7c6 Func
	var_30_bool = var_26_bool == 0; // 0x7c8 Not
	if(var_30_bool == 0) goto Label_1999; // 0x7c9 JumpB
	var_31_object = Obj(); // 0x7ca PushV
	func_1843(var_31_object); // 0x7cb NEW_2
	RemoveActor(var_31_object); // 0x7cd Func
	
Label_1999:
	goto Label_2006; // 0x7cf Jump
	
Label_2006:
	return 2; // 0x7d6 Return
	
Label_2000:
	var_34_string = "restore"; // 0x7d0 PushS
	var_35_bool = var_24_string == var_34_string; // 0x7d1 Eq
	if(var_35_bool == 0) goto Label_2006; // 0x7d2 JumpB
	var_36_bool = GlobalVars[1]; // 0x7d3 PushGE
	var_36_bool = 0; // 0x7d4 MovB
	GlobalVars[1] = var_36_bool; // 0x7d5 PopGE
	}


event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	var_20_bool = GlobalVars[1]; // 0x7d7 PushGE
	if(var_20_bool == 0) goto Label_2014; // 0x7d8 JumpB
	var_21_object = Obj(); // 0x7d9 PushV
	func_1843(var_21_object); // 0x7da NEW_2
	RemoveActor(var_21_object); // 0x7dc Func
	
Label_2014:
	return 0; // 0x7de Return
}


event_9(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int, var_20_int, var_21_float)
{
	var_22_int = 0; // 0x8ae PushI
	var_23_bool = var_20_int == var_22_int; // 0x8af Eq
	if(var_23_bool == 0) goto Label_2230; // 0x8b0 JumpB
	var_24_string = ""; // 0x8b1 PushV
	var_24_string = "cleanup"; // 0x8b2 MovS
	func_1983(); // 0x8b3 NEW_2
	goto Label_2236; // 0x8b5 Jump
	
Label_2236:
	return 0; // 0x8bc Return
	
Label_2230:
	var_37_int = 1; // 0x8b6 PushI
	var_38_bool = var_20_int == var_37_int; // 0x8b7 Eq
	if(var_38_bool == 0) goto Label_2236; // 0x8b8 JumpB
	func_2181(); // 0x8ba NEW_2
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	func_2181(); // 0x595 NEW_2
	var_49_int = 0; // 0x597 PushI
	var_50_int = 144; // 0x598 PushI
	SetTimeEvent(var_49_int, var_50_int); // 0x599 Func
	var_51_int = 1; // 0x59b PushI
	var_52_int = 24; // 0x59c PushI
	SetTimeEvent(var_51_int, var_52_int); // 0x59d Func
	var_53_int = 1; // 0x59f PushI
	var_54_int = 48; // 0x5a0 PushI
	SetTimeEvent(var_53_int, var_54_int); // 0x5a1 Func
	var_55_int = 1; // 0x5a3 PushI
	var_56_int = 72; // 0x5a4 PushI
	SetTimeEvent(var_55_int, var_56_int); // 0x5a5 Func
	var_57_int = 1; // 0x5a7 PushI
	var_58_int = 96; // 0x5a8 PushI
	SetTimeEvent(var_57_int, var_58_int); // 0x5a9 Func
	var_59_int = 1; // 0x5ab PushI
	var_60_int = 120; // 0x5ac PushI
	SetTimeEvent(var_59_int, var_60_int); // 0x5ad Func
	func_1459(var_17_float, var_18_float, var_19_int); // 0x5b0 NEW_2
	return 0; // 0x5b2 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_102_bool = 0; // 0x2 PushV
	func_1645(var_102_bool); // 0x3 NEW_2
	var_103_bool = var_102_bool == 0; // 0x5 Not
	if(var_103_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_2048(var_26_object)
{
	var_28_float = 0; var_29_float = 0; // 0x800 PushV
	var_30_string = "b1q02"; // 0x801 PushS
	var_31_int = 2; // 0x802 PushI
	SetVariable(var_30_string, var_31_int); // 0x803 Func
	func_2127(); // 0x806 NEW_2
	var_55_string = "health"; // 0x808 PushS
	GetProperty(var_55_string, var_29_float); // 0x809 ObjFunc
	var_56_float = 0.3; // 0x80b PushF
	var_29_float = var_29_float - var_56_float; // 0x80c Sub2
	var_57_string = "health"; // 0x80d PushS
	SetProperty(var_57_string, var_29_float); // 0x80e ObjFunc
	var_58_string = "blood is given"; // 0x810 PushS
	Trace(var_58_string); // 0x811 Func
	var_59_object = Obj(); var_60_string = ""; var_61_int = 0; // 0x813 PushV
	var_59_object = var_26_object; // 0x814 Mov
	var_60_string = "b1q02_blood"; // 0x815 MovS
	var_61_int = 1; // 0x816 MovI
	func_1918(var_59_object, var_60_string, var_61_int); // 0x817 NEW_2
	return 2; // 0x819 Return
}


func_1018(var_0_bool, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x3fa PushV
	var_0_bool = var_44_object; // 0x3fb TMov
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0; // 0x3fc PushV
	var_55_object = var_44_object; // 0x3fd Mov
	var_56_float = 100.0; // 0x3fe MovF
	func_1650(var_55_object, var_56_float); // 0x3ff NEW_2
	var_101_bool = var_54_bool == 0; // 0x401 Not
	if(var_101_bool == 0) goto Label_1029; // 0x402 JumpB
	var_43_int = -2; // 0x403 MovI
	return 8; // 0x404 Return
	
Label_1029:
	CreateDialog(var_50_object); // 0x405 Func
	var_102_int = 0; // 0x407 PushV
	func_2017(var_102_int); // 0x408 NEW_2
	SetNPCName(var_102_int); // 0x40a ObjFunc
	var_103_int = 0; // 0x40c PushV
	func_2015(var_103_int); // 0x40d NEW_2
	SetNPCDescription(var_103_int); // 0x40f ObjFunc
	var_104_string = ""; // 0x411 PushV
	func_2019(var_104_string); // 0x412 NEW_2
	SetPhoto(var_104_string); // 0x414 ObjFunc
	var_105_string = ""; // 0x416 PushV
	func_2021(var_105_string); // 0x417 NEW_2
	SetPhoto2(var_105_string); // 0x419 ObjFunc
	var_106_int = 0; // 0x41b PushV
	func_2204(var_106_int); // 0x41c NEW_2
	SetPlayerName(var_106_int); // 0x41e ObjFunc
	var_52_int = -1; // 0x420 MovI
	IsOverrideActive(var_51_bool); // 0x421 Func
	var_114_bool = var_51_bool; // 0x423 Push
	if(var_114_bool == 0) goto Label_1063; // 0x424 JumpB
	var_43_int = -2; // 0x425 MovI
	return 8; // 0x426 Return
	
Label_1063:
	DoDialog(var_50_object); // 0x427 Func
	var_115_object = Obj(); var_116_object = Obj(); // 0x429 PushV
	var_115_object = var_44_object; // 0x42a Mov
	var_116_object = var_50_object; // 0x42b Mov
	TaskCall(8); // 0x42c TaskCall
	func_1092(var_117_object, var_118_object, var_119_string, var_120_bool, var_115_object, var_116_object); // 0x42d NEW_2
	TaskReturn(); // 0x42e TaskReturn
	IsDialogEnd(var_53_bool); // 0x430 ObjFunc
	
Label_1074:
	var_164_bool = var_53_bool == 0; // 0x432 Not
	if(var_164_bool == 0) goto Label_1081; // 0x433 JumpB
	sync(); // 0x434 Func
	IsDialogEnd(var_53_bool); // 0x436 ObjFunc
	goto Label_1074; // 0x438 Jump
	
Label_1081:
	var_165_object = Obj(); // 0x439 PushV
	var_165_object = var_44_object; // 0x43a Mov
	func_1719(); // 0x43b NEW_2
	StopDialog(var_50_object); // 0x43d Func
	GetReturnValue(var_52_int); // 0x43f ObjFunc
	var_43_int = var_52_int; // 0x441 Mov
	return 8; // 0x442 Return
}


func_2181()
{
	var_20_int = 0; var_21_int = 0; // 0x885 PushV
	var_22_int = 0; // 0x886 PushI
	ClearSubContainer(var_22_int); // 0x887 Func
	var_23_int = 0; // 0x889 PushV
	func_1931(var_23_int); // 0x88a NEW_2
	var_21_int = var_23_int; // 0x88b Mov
	var_29_string = ""; var_30_int = 0; var_31_int = 0; var_32_int = 0; // 0x88d PushV
	var_29_string = "tourniquet"; // 0x88e MovS
	var_30_int = 1; // 0x88f MovI
	var_31_int = 1; // 0x890 MovI
	var_32_int = 5; // 0x891 MovI
	func_1828(var_29_string, var_30_int, var_31_int, var_32_int); // 0x892 NEW_2
	var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0x894 PushV
	var_45_string = "bandage"; // 0x895 MovS
	var_46_int = 1; // 0x896 MovI
	var_47_int = 1; // 0x897 MovI
	var_48_int = 5; // 0x898 MovI
	func_1828(var_45_string, var_46_int, var_47_int, var_48_int); // 0x899 NEW_2
	return 2; // 0x89b Return
}


func_1288(var_0_bool, var_1_bool, var_2_object, var_3_object, var_382_object, var_383_object)
{
	var_0_bool = var_383_object; // 0x509 TMov
	var_1_bool = var_382_object; // 0x50a TMov
	var_3_object = 0; // 0x50b TMovB
	var_388_int = 1; // 0x50c PushI
	if(var_388_int == 0) goto Label_1321; // 0x50d JumpB
	var_389_string = ""; // 0x50e PushV
	var_389_string = "Neutral"; // 0x50f MovS
	func_1351(var_383_object, var_389_string); // 0x510 NEW_2
	var_397_int = 541715; // 0x512 PushI
	SetMessage(var_397_int); // 0x513 TObjFunc
	ClearReplies(); // 0x515 TObjFunc
	var_398_int = 541716; // 0x517 PushI
	var_399_int = -1; // 0x518 PushI
	var_400_int = 43906; // 0x519 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x51a TObjFunc
	var_401_int = 541717; // 0x51c PushI
	var_402_int = -1; // 0x51d PushI
	var_403_int = 43907; // 0x51e PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x51f TObjFunc
	var_404_int = 541742; // 0x521 PushI
	var_405_int = -1; // 0x522 PushI
	var_406_int = 43939; // 0x523 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x524 TObjFunc
	goto Label_1321; // 0x526 Jump
	
Label_1321:
	var_407_bool = 0; // 0x529 PushV
	func_2023(var_407_bool); // 0x52a NEW_2
	if(var_407_bool == 0) goto Label_1336; // 0x52c JumpB
	
Label_1325:
	lshWaitForAnimEnd(); // 0x52d Func
	var_408_object = var_3_object; // 0x52f PushT
	if(var_408_object == 0) goto Label_1330; // 0x530 JumpB
	goto Label_1335; // 0x531 Jump
	
Label_1335:
	goto Label_1350; // 0x537 Jump
	
Label_1350:
	return 0; // 0x546 Return
	
Label_1330:
	var_409_string = ""; // 0x532 PushV
	var_409_string = var_2_object; // 0x533 MovT
	func_1790(var_409_string); // 0x534 NEW_2
	goto Label_1325; // 0x536 Jump
	
Label_1336:
	var_410_string = "all"; // 0x538 PushS
	var_411_string = "idle"; // 0x539 PushS
	PlayAnimation(var_410_string, var_411_string); // 0x53a Func
	
Label_1340:
	WaitForAnimEnd(); // 0x53c Func
	var_412_object = var_3_object; // 0x53e PushT
	if(var_412_object == 0) goto Label_1345; // 0x53f JumpB
	goto Label_1350; // 0x540 Jump
	
Label_1345:
	var_413_string = "all"; // 0x541 PushS
	var_414_string = "idle"; // 0x542 PushS
	PlayAnimation(var_413_string, var_414_string); // 0x543 Func
	goto Label_1340; // 0x545 Jump
}


func_1547()
{
	var_84_string = ""; var_85_string = ""; // 0x60b PushV
	var_86_string = "loc"; // 0x60c PushS
	GetProperty(var_86_string, var_85_string); // 0x60d Func
	var_87_string = GlobalVars[0]; // 0x60f PushGE
	var_87_string = var_85_string; // 0x610 Mov
	GlobalVars[0] = var_87_string; // 0x611 PopGE
	return 2; // 0x612 Return
}


func_396(var_0_bool, var_1_bool, var_2_object, var_3_object, var_205_object, var_206_object)
{
	var_0_bool = var_206_object; // 0x18d TMov
	var_1_bool = var_205_object; // 0x18e TMov
	var_3_object = 0; // 0x18f TMovB
	var_211_int = 1; // 0x190 PushI
	if(var_211_int == 0) goto Label_567; // 0x191 JumpB
	var_212_bool = 0; // 0x192 PushV
	var_212_bool = 0; // 0x193 MovB
	var_213_bool = 0; // 0x194 PushV
	var_213_bool = 0; // 0x195 MovB
	var_214_bool = 0; var_215_object = Obj(); // 0x196 PushV
	var_215_object = var_1_bool; // 0x197 MovT
	func_2074(var_214_bool, var_215_object); // 0x198 NEW_2
	if(var_214_bool == 0) goto Label_417; // 0x19a JumpB
	var_222_bool = 0; var_223_object = Obj(); // 0x19b PushV
	var_223_object = var_1_bool; // 0x19c MovT
	func_2084(var_223_object); // 0x19d NEW_2
	if(var_222_bool == 0) goto Label_417; // 0x19f JumpB
	var_213_bool = 1; // 0x1a0 MovB
	
Label_417:
	if(var_213_bool == 0) goto Label_424; // 0x1a1 JumpB
	var_230_bool = 0; var_231_object = Obj(); // 0x1a2 PushV
	var_231_object = var_1_bool; // 0x1a3 MovT
	func_2096(var_231_object); // 0x1a4 NEW_2
	if(var_230_bool == 0) goto Label_424; // 0x1a6 JumpB
	var_212_bool = 1; // 0x1a7 MovB
	
Label_424:
	if(var_212_bool == 0) goto Label_450; // 0x1a8 JumpB
	var_236_object = Obj(); var_237_object = Obj(); // 0x1a9 PushV
	var_236_object = var_1_bool; // 0x1aa MovT
	var_237_object = var_0_bool; // 0x1ab MovT
	func_2036(); // 0x1ac NEW_2
	var_240_string = ""; // 0x1ae PushV
	var_240_string = "Neutral"; // 0x1af MovS
	func_597(var_206_object, var_240_string); // 0x1b0 NEW_2
	var_248_int = 517910; // 0x1b2 PushI
	SetMessage(var_248_int); // 0x1b3 TObjFunc
	ClearReplies(); // 0x1b5 TObjFunc
	var_249_int = 520406; // 0x1b7 PushI
	var_250_int = 21615; // 0x1b8 PushI
	var_251_int = 21614; // 0x1b9 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x1ba TObjFunc
	var_252_int = 517911; // 0x1bc PushI
	var_253_int = 19050; // 0x1bd PushI
	var_254_int = 19049; // 0x1be PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x1bf TObjFunc
	goto Label_567; // 0x1c1 Jump
	
Label_567:
	var_255_bool = 0; // 0x237 PushV
	func_2023(var_255_bool); // 0x238 NEW_2
	if(var_255_bool == 0) goto Label_582; // 0x23a JumpB
	
Label_571:
	lshWaitForAnimEnd(); // 0x23b Func
	var_256_object = var_3_object; // 0x23d PushT
	if(var_256_object == 0) goto Label_576; // 0x23e JumpB
	goto Label_581; // 0x23f Jump
	
Label_581:
	goto Label_596; // 0x245 Jump
	
Label_596:
	return 0; // 0x254 Return
	
Label_576:
	var_257_string = ""; // 0x240 PushV
	var_257_string = var_2_object; // 0x241 MovT
	func_1790(var_257_string); // 0x242 NEW_2
	goto Label_571; // 0x244 Jump
	
Label_582:
	var_258_string = "all"; // 0x246 PushS
	var_259_string = "idle"; // 0x247 PushS
	PlayAnimation(var_258_string, var_259_string); // 0x248 Func
	
Label_586:
	WaitForAnimEnd(); // 0x24a Func
	var_260_object = var_3_object; // 0x24c PushT
	if(var_260_object == 0) goto Label_591; // 0x24d JumpB
	goto Label_596; // 0x24e Jump
	
Label_591:
	var_261_string = "all"; // 0x24f PushS
	var_262_string = "idle"; // 0x250 PushS
	PlayAnimation(var_261_string, var_262_string); // 0x251 Func
	goto Label_586; // 0x253 Jump
	
Label_450:
	var_263_bool = 0; // 0x1c2 PushV
	var_263_bool = 0; // 0x1c3 MovB
	var_264_bool = 0; // 0x1c4 PushV
	var_264_bool = 0; // 0x1c5 MovB
	var_265_bool = 0; var_266_object = Obj(); // 0x1c6 PushV
	var_266_object = var_1_bool; // 0x1c7 MovT
	func_2074(var_265_bool, var_266_object); // 0x1c8 NEW_2
	var_267_bool = var_265_bool == 0; // 0x1ca Not
	if(var_267_bool == 0) goto Label_466; // 0x1cb JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x1cc PushV
	var_269_object = var_1_bool; // 0x1cd MovT
	func_2084(var_269_object); // 0x1ce NEW_2
	if(var_268_bool == 0) goto Label_466; // 0x1d0 JumpB
	var_264_bool = 1; // 0x1d1 MovB
	
Label_466:
	if(var_264_bool == 0) goto Label_473; // 0x1d2 JumpB
	var_270_bool = 0; var_271_object = Obj(); // 0x1d3 PushV
	var_271_object = var_1_bool; // 0x1d4 MovT
	func_2108(var_271_object); // 0x1d5 NEW_2
	if(var_270_bool == 0) goto Label_473; // 0x1d7 JumpB
	var_263_bool = 1; // 0x1d8 MovB
	
Label_473:
	if(var_263_bool == 0) goto Label_499; // 0x1d9 JumpB
	var_276_object = Obj(); var_277_object = Obj(); // 0x1da PushV
	var_276_object = var_1_bool; // 0x1db MovT
	var_277_object = var_0_bool; // 0x1dc MovT
	func_2042(); // 0x1dd NEW_2
	var_280_string = ""; // 0x1df PushV
	var_280_string = "Neutral"; // 0x1e0 MovS
	func_597(var_206_object, var_280_string); // 0x1e1 NEW_2
	var_281_int = 517915; // 0x1e3 PushI
	SetMessage(var_281_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_282_int = 517916; // 0x1e8 PushI
	var_283_int = 19055; // 0x1e9 PushI
	var_284_int = 19054; // 0x1ea PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x1eb TObjFunc
	var_285_int = 520410; // 0x1ed PushI
	var_286_int = 21620; // 0x1ee PushI
	var_287_int = 21619; // 0x1ef PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x1f0 TObjFunc
	goto Label_567; // 0x1f2 Jump
	
Label_499:
	var_288_bool = 0; var_289_object = Obj(); // 0x1f3 PushV
	var_289_object = var_1_bool; // 0x1f4 MovT
	func_2084(var_289_object); // 0x1f5 NEW_2
	if(var_288_bool == 0) goto Label_545; // 0x1f7 JumpB
	var_290_string = ""; // 0x1f8 PushV
	var_290_string = "Neutral"; // 0x1f9 MovS
	func_597(var_206_object, var_290_string); // 0x1fa NEW_2
	var_291_int = 517919; // 0x1fc PushI
	SetMessage(var_291_int); // 0x1fd TObjFunc
	ClearReplies(); // 0x1ff TObjFunc
	var_292_bool = 0; var_293_object = Obj(); // 0x201 PushV
	var_293_object = var_1_bool; // 0x202 MovT
	func_2074(var_292_bool, var_293_object); // 0x203 NEW_2
	if(var_292_bool == 0) goto Label_523; // 0x205 JumpB
	var_294_int = 517920; // 0x206 PushI
	var_295_int = 19061; // 0x207 PushI
	var_296_int = 19058; // 0x208 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x209 TObjFunc
	
Label_523:
	var_297_bool = 0; var_298_object = Obj(); // 0x20b PushV
	var_298_object = var_1_bool; // 0x20c MovT
	func_2074(var_297_bool, var_298_object); // 0x20d NEW_2
	var_299_bool = var_297_bool == 0; // 0x20f Not
	if(var_299_bool == 0) goto Label_534; // 0x210 JumpB
	var_300_int = 517921; // 0x211 PushI
	var_301_int = 19063; // 0x212 PushI
	var_302_int = 19059; // 0x213 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x214 TObjFunc
	
Label_534:
	var_303_int = 541718; // 0x216 PushI
	var_304_int = -1; // 0x217 PushI
	var_305_int = 43908; // 0x218 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x219 TObjFunc
	var_306_int = 517922; // 0x21b PushI
	var_307_int = -1; // 0x21c PushI
	var_308_int = 19060; // 0x21d PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x21e TObjFunc
	goto Label_567; // 0x220 Jump
	
Label_545:
	var_309_string = ""; // 0x221 PushV
	var_309_string = "Neutral"; // 0x222 MovS
	func_597(var_206_object, var_309_string); // 0x223 NEW_2
	var_310_int = 517927; // 0x225 PushI
	SetMessage(var_310_int); // 0x226 TObjFunc
	ClearReplies(); // 0x228 TObjFunc
	var_311_int = 518197; // 0x22a PushI
	var_312_int = -1; // 0x22b PushI
	var_313_int = 19310; // 0x22c PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x22d TObjFunc
	var_314_int = 517928; // 0x22f PushI
	var_315_int = -1; // 0x230 PushI
	var_316_int = 19066; // 0x231 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x232 TObjFunc
	goto Label_567; // 0x234 Jump
}


func_1931(var_23_int)
{
	var_24_float = 0; var_25_float = 0; // 0x78b PushV
	GetGameTime(var_25_float); // 0x78c Func
	var_26_int = 1; // 0x78e PushI
	var_27_int = 0; // 0x78f PushV
	var_28_int = 24; // 0x790 PushI
	var_27_int = var_25_float / var_25_float; // 0x791 Div2
	var_23_int = var_26_int + var_27_int; // 0x792 Add2
	return 2; // 0x793 Return
}


func_1806(var_126_string, var_127_bool)
{
	var_130_bool = 0; var_131_float = 0; var_132_float = 0; var_133_bool = 0; var_134_float = 0; var_135_float = 0; // 0x70e PushV
	lshHasAnimation(var_133_bool, var_126_string); // 0x70f Func
	var_136_bool = var_133_bool; // 0x711 Push
	if(var_136_bool == 0) goto Label_1816; // 0x712 JumpB
	lshGetAnimTimes(var_126_string, var_134_float, var_135_float); // 0x713 Func
	lshPlayAnimation(var_134_float, var_135_float, var_127_bool); // 0x715 Func
	goto Label_1820; // 0x717 Jump
	
Label_1820:
	return 6; // 0x71c Return
	
Label_1816:
	var_137_string = "Can't find lsh animation : "; // 0x718 PushS
	var_138_int = var_137_string + var_126_string; // 0x719 Add
	Trace(var_138_int); // 0x71a Func
}


func_13(var_0_bool)
{
	DoTrade(); // 0xe Func
	var_0_bool = 0; // 0x10 TMovB
	
Label_17:
	var_353_bool = 0; // 0x11 PushV
	func_2023(var_353_bool); // 0x12 NEW_2
	if(var_353_bool == 0) goto Label_28; // 0x14 JumpB
	var_354_string = ""; // 0x15 PushV
	var_354_string = "Neutral"; // 0x16 MovS
	func_1790(var_354_string); // 0x17 NEW_2
	lshWaitForAnimEnd(); // 0x19 Func
	goto Label_34; // 0x1b Jump
	
Label_34:
	var_355_bool = var_0_bool; // 0x22 PushT
	if(var_355_bool == 0) goto Label_37; // 0x23 JumpB
	return 0; // 0x24 Return
	
Label_37:
	goto Label_17; // 0x25 Jump
	
Label_28:
	WaitForAnimEnd(); // 0x1c Func
	var_356_string = "all"; // 0x1e PushS
	var_357_string = "idle"; // 0x1f PushS
	PlayAnimation(var_356_string, var_357_string); // 0x20 Func
}


func_1555(var_0_bool, var_1_bool)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); // 0x613 PushV
	var_108_string = "all"; // 0x614 PushS
	var_109_string = "walk_stopl"; // 0x615 PushS
	GetAnimationOffset(var_106_cvector, var_108_string, var_109_string); // 0x616 Func
	var_110_string = "all"; // 0x618 PushS
	var_111_string = "walk_stopr"; // 0x619 PushS
	GetAnimationOffset(var_107_cvector, var_110_string, var_111_string); // 0x61a Func
	var_112_float = GetByIndex(var_106_cvector, 2); // 0x61c PushE
	var_113_float = GetByIndex(var_107_cvector, 2); // 0x61d PushE
	var_114_int = var_112_float + var_113_float; // 0x61e Add
	var_115_float = 2.0; // 0x61f PushF
	var_0_bool = var_114_int / var_114_int; // 0x620 Div2
	var_116_float = 0; var_117_float = 0; // 0x621 PushV
	var_118_float = GetByIndex(var_106_cvector, 2); // 0x622 PushE
	var_117_float = var_118_float - var_0_bool; // 0x623 Sub2
	func_1859(var_116_float, var_117_float); // 0x624 NEW_2
	var_121_int = 40; // 0x626 PushI
	var_1_bool = var_116_float + var_121_int; // 0x627 Add2
	return 4; // 0x628 Return
}


func_1940(var_175_bool, var_176_int)
{
	var_177_int = 0; // 0x795 PushV
	func_1931(var_177_int); // 0x796 NEW_2
	var_175_bool = var_177_int == var_176_int; // 0x798 Eq2
	return 0; // 0x799 Return
}


func_2074(var_214_bool, var_215_object)
{
	var_216_bool = 0; var_217_object = Obj(); // 0x81b PushV
	var_217_object = var_215_object; // 0x81c Mov
	func_2120(var_217_object); // 0x81d NEW_2
	if(var_216_bool == 0) goto Label_2082; // 0x81f JumpB
	var_214_bool = 1; // 0x820 MovB
	return 0; // 0x821 Return
	
Label_2082:
	var_214_bool = 0; // 0x822 MovB
	return 0; // 0x823 Return
}


func_1946(var_212_string, var_213_int)
{
	var_214_string = ""; var_215_string = ""; // 0x79a PushV
	var_215_string = "idle"; // 0x79b MovS
	var_216_int = var_213_int; // 0x79c Push
	if(var_216_int == 0) goto Label_1951; // 0x79d JumpB
	var_215_string = var_215_string + var_213_int; // 0x79e Add2
	
Label_1951:
	var_212_string = var_215_string; // 0x79f Mov
	return 2; // 0x7a0 Return
}


func_2204(var_106_int)
{
	var_107_int = 0; var_108_int = 0; // 0x89c PushV
	var_109_string = "branch"; // 0x89d PushS
	GetVariable(var_109_string, var_108_int); // 0x89e Func
	var_110_int = 0; // 0x8a0 PushI
	var_111_bool = var_108_int == var_110_int; // 0x8a1 Eq
	if(var_111_bool == 0) goto Label_2214; // 0x8a2 JumpB
	var_106_int = 1; // 0x8a3 MovI
	return 2; // 0x8a4 Return
	
Label_2214:
	var_112_int = 1; // 0x8a6 PushI
	var_113_bool = var_108_int == var_112_int; // 0x8a7 Eq
	if(var_113_bool == 0) goto Label_2219; // 0x8a8 JumpB
	var_106_int = 2; // 0x8a9 MovI
	return 2; // 0x8aa Return
	
Label_2219:
	var_106_int = 3; // 0x8ab MovI
	return 2; // 0x8ac Return
}


func_1821()
{
	var_23_bool = 0; // 0x71d PushV
	func_2023(var_23_bool); // 0x71e NEW_2
	if(var_23_bool == 0) goto Label_1827; // 0x720 JumpB
	lshStopSpeech(); // 0x721 Func
	
Label_1827:
	return 0; // 0x723 Return
}


func_1150(var_2_object, var_122_string)
{
	var_123_bool = 0; // 0x47f PushV
	func_2023(var_123_bool); // 0x480 NEW_2
	var_124_bool = var_123_bool == 0; // 0x482 Not
	if(var_124_bool == 0) goto Label_1157; // 0x483 JumpB
	return 0; // 0x484 Return
	
Label_1157:
	var_125_bool = var_122_string == var_2_object; // 0x485 Eq
	if(var_125_bool == 0) goto Label_1160; // 0x486 JumpB
	return 0; // 0x487 Return
	
Label_1160:
	var_126_string = ""; var_127_bool = 0; // 0x488 PushV
	var_126_string = var_122_string; // 0x489 Mov
	var_128_string = ""; // 0x48a PushS
	var_129_bool = var_122_string == var_128_string; // 0x48b Eq
	if(var_129_bool == 0) goto Label_1167; // 0x48c JumpB
	var_127_bool = 0; // 0x48d MovB
	goto Label_1168; // 0x48e Jump
	
Label_1168:
	func_1806(var_126_string, var_127_bool); // 0x490 NEW_2
	var_2_object = var_122_string; // 0x492 TMov
	return 0; // 0x493 Return
	
Label_1167:
	var_127_bool = 1; // 0x48f MovB
}


func_1953(var_206_int)
{
	var_207_int = 0; var_208_bool = 0; var_209_int = 0; var_210_bool = 0; // 0x7a1 PushV
	var_209_int = 0; // 0x7a2 MovI
	
Label_1955:
	var_211_string = "all"; // 0x7a3 PushS
	var_212_string = ""; var_213_int = 0; // 0x7a4 PushV
	var_213_int = var_209_int; // 0x7a5 Mov
	func_1946(var_212_string, var_213_int); // 0x7a6 NEW_2
	HasAnimation(var_210_bool, var_211_string, var_212_string); // 0x7a8 Func
	var_217_bool = var_210_bool == 0; // 0x7aa Not
	if(var_217_bool == 0) goto Label_1965; // 0x7ab JumpB
	goto Label_1968; // 0x7ac Jump
	
Label_1968:
	var_206_int = var_209_int; // 0x7b0 Mov
	return 4; // 0x7b1 Return
	
Label_1965:
	var_218_int = 1; // 0x7ad PushI
	var_209_int = var_209_int + var_218_int; // 0x7ae Add2
	goto Label_1955; // 0x7af Jump
}


func_2084(var_222_bool)
{
	var_224_int = 0; var_225_string = ""; // 0x825 PushV
	var_225_string = "b1q02"; // 0x826 MovS
	func_1882(var_224_int, var_225_string); // 0x827 NEW_2
	var_228_int = 1; // 0x829 PushI
	var_229_bool = var_224_int == var_228_int; // 0x82a Eq
	if(var_229_bool == 0) goto Label_2094; // 0x82b JumpB
	var_222_bool = 1; // 0x82c MovB
	return 0; // 0x82d Return
	
Label_2094:
	var_222_bool = 0; // 0x82e MovB
	return 0; // 0x82f Return
}


func_1828(var_29_string, var_30_int, var_31_int, var_32_int)
{
	var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x724 PushV
	var_37_bool = 0; var_38_int = 0; var_39_int = 0; // 0x725 PushV
	var_38_int = var_30_int; // 0x726 Mov
	var_39_int = var_31_int; // 0x727 Mov
	func_1867(var_37_bool, var_38_int, var_39_int); // 0x728 NEW_2
	if(var_37_bool == 0) goto Label_1842; // 0x72a JumpB
	irand(var_35_int, var_32_int); // 0x72b Func
	var_42_int = 0; // 0x72d PushI
	var_43_int = 1; // 0x72e PushI
	var_44_int = var_35_int + var_43_int; // 0x72f Add
	AddItem(var_36_bool, var_29_string, var_42_int, var_44_int); // 0x730 Func
	
Label_1842:
	return 4; // 0x732 Return
}


func_296(var_195_string, var_196_string, var_197_int)
{
	var_198_int = 0; // 0x129 PushI
	var_199_bool = var_197_int == var_198_int; // 0x12a Eq
	if(var_199_bool == 0) goto Label_302; // 0x12b JumpB
	var_195_string = var_196_string; // 0x12c Mov
	goto Label_303; // 0x12d Jump
	
Label_303:
	return 0; // 0x12f Return
	
Label_302:
	var_195_string = var_196_string + var_197_int; // 0x12e Add2
}


func_304(var_188_int, var_189_string)
{
	var_190_int = 0; var_191_bool = 0; var_192_int = 0; var_193_bool = 0; // 0x130 PushV
	var_192_int = 0; // 0x131 MovI
	
Label_306:
	var_194_string = "all"; // 0x132 PushS
	var_195_string = ""; var_196_string = ""; var_197_int = 0; // 0x133 PushV
	var_196_string = var_189_string; // 0x134 Mov
	var_197_int = var_192_int; // 0x135 Mov
	func_296(var_195_string, var_196_string, var_197_int); // 0x136 NEW_2
	HasAnimation(var_193_bool, var_194_string, var_195_string); // 0x138 Func
	var_200_bool = var_193_bool == 0; // 0x13a Not
	if(var_200_bool == 0) goto Label_317; // 0x13b JumpB
	goto Label_320; // 0x13c Jump
	
Label_320:
	var_188_int = var_192_int; // 0x140 Mov
	return 4; // 0x141 Return
	
Label_317:
	var_201_int = 1; // 0x13d PushI
	var_192_int = var_192_int + var_201_int; // 0x13e Add2
	goto Label_306; // 0x13f Jump
}


func_2096(var_230_bool)
{
	var_232_int = 0; var_233_string = ""; // 0x831 PushV
	var_233_string = "oob1Gorbun1"; // 0x832 MovS
	func_1882(var_232_int, var_233_string); // 0x833 NEW_2
	var_234_int = 0; // 0x835 PushI
	var_235_bool = var_232_int == var_234_int; // 0x836 Eq
	if(var_235_bool == 0) goto Label_2106; // 0x837 JumpB
	var_230_bool = 1; // 0x838 MovB
	return 0; // 0x839 Return
	
Label_2106:
	var_230_bool = 0; // 0x83a MovB
	return 0; // 0x83b Return
}


func_1970(var_88_string, var_89_int)
{
	var_90_int = 0; // 0x7b3 PushI
	var_91_bool = var_89_int == var_90_int; // 0x7b4 Eq
	if(var_91_bool == 0) goto Label_1978; // 0x7b5 JumpB
	var_92_string = "pt_"; // 0x7b6 PushS
	var_93_string = GlobalVars[0]; // 0x7b7 PushGE
	var_88_string = var_92_string + var_93_string; // 0x7b8 Add2
	goto Label_1982; // 0x7b9 Jump
	
Label_1982:
	return 0; // 0x7be Return
	
Label_1978:
	var_94_string = "pt_"; // 0x7ba PushS
	var_95_string = GlobalVars[0]; // 0x7bb PushGE
	var_96_int = var_94_string + var_95_string; // 0x7bc Add
	var_88_string = var_96_int + var_89_int; // 0x7bd Add2
}


func_1459(var_0_bool, var_1_bool, var_2_object)
{
	var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_object = Obj(); var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_cvector = CVector(0,0,0); // 0x5b3 PushV
	var_83_bool = 1; // 0x5b4 PushB
	SensePlayerOnly(var_83_bool); // 0x5b5 Func
	func_1547(); // 0x5b8 NEW_2
	GetScene(var_72_object); // 0x5ba Func
	var_2_object = 0; // 0x5bc TMovI
	
Label_1469:
	var_88_string = ""; var_89_int = 0; // 0x5bd PushV
	var_89_int = var_2_object; // 0x5be MovT
	func_1970(var_88_string, var_89_int); // 0x5bf NEW_2
	GetLocator(var_88_string, var_73_bool); // 0x5c1 ObjFunc
	var_97_bool = var_73_bool == 0; // 0x5c3 Not
	if(var_97_bool == 0) goto Label_1478; // 0x5c4 JumpB
	goto Label_1481; // 0x5c5 Jump
	
Label_1481:
	var_98_bool = 0; // 0x5c9 PushV
	func_1645(var_98_bool); // 0x5ca NEW_2
	var_101_bool = var_98_bool == 0; // 0x5cc Not
	if(var_101_bool == 0) goto Label_1491; // 0x5cd JumpB
	TaskCall(0); // 0x5cf TaskCall
	func_0(); // 0x5d0 NEW_2
	TaskReturn(); // 0x5d1 TaskReturn
	
Label_1491:
	func_1555(var_81_bool, var_82_cvector); // 0x5d4 NEW_2
	
Label_1494:
	irand(var_74_int, var_81_bool); // 0x5d6 Func
	var_122_string = ""; var_123_int = 0; // 0x5d8 PushV
	var_123_int = var_74_int; // 0x5d9 Mov
	func_1970(var_122_string, var_123_int); // 0x5da NEW_2
	GetLocator(var_122_string, var_75_bool, var_76_cvector, var_77_cvector); // 0x5dc ObjFunc
	var_124_cvector = CVector(0,0,0); // 0x5de PushV
	func_1602(var_124_cvector); // 0x5df NEW_2
	var_78_cvector = var_76_cvector - var_124_cvector; // 0x5e1 Sub2
	var_127_float = 0; var_128_cvector = CVector(0,0,0); // 0x5e2 PushV
	var_128_cvector = var_78_cvector; // 0x5e3 Mov
	func_1872(var_127_float, var_128_cvector); // 0x5e4 NEW_2
	var_136_bool = var_127_float > var_1_bool; // 0x5e6 GT
	if(var_136_bool == 0) goto Label_1541; // 0x5e7 JumpB
	GetHeight(var_79_float); // 0x5e8 Func
	var_80_cvector = var_76_cvector; // 0x5ea Mov
	var_137_float = GetByIndex(var_80_cvector, 1); // 0x5eb PushE
	var_137_float = var_137_float + var_79_float; // 0x5ec Add2
	SetByIndex(var_80_cvector, 1) = var_137_float; // 0x5ed PopE
	CanReachByPF(var_81_bool, var_80_cvector); // 0x5ee Func
	var_138_bool = var_81_bool; // 0x5f0 Push
	if(var_138_bool == 0) goto Label_1541; // 0x5f1 JumpB
	var_139_int = var_78_cvector | var_78_cvector; // 0x5f2 Or
	var_140_float = sqrt(var_139_int); // 0x5f3 Sqrt
	var_141_float = var_0_bool / var_140_float; // 0x5f4 Div
	var_142_float = var_78_cvector * var_141_float; // 0x5f5 Mult
	var_82_cvector = var_76_cvector - var_142_float; // 0x5f6 Sub2
	var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); // 0x5f7 PushV
	var_144_cvector = var_82_cvector; // 0x5f8 Mov
	var_145_cvector = var_77_cvector; // 0x5f9 Mov
	TaskCall(2); // 0x5fa TaskCall
	func_53(var_146_bool, var_143_bool, var_144_cvector, var_145_cvector); // 0x5fb NEW_2
	TaskReturn(); // 0x5fc TaskReturn
	if(var_146_bool == 0) goto Label_1541; // 0x5fe JumpB
	var_170_int = 0; // 0x5ff PushV
	var_170_int = var_74_int; // 0x600 Mov
	TaskCall(4); // 0x601 TaskCall
	func_238(var_170_int); // 0x602 NEW_2
	TaskReturn(); // 0x603 TaskReturn
	
Label_1541:
	var_223_int = 1; // 0x605 PushI
	Sleep(var_223_int); // 0x606 Func
	goto Label_1494; // 0x608 Jump
	
Label_1478:
	var_224_int = 1; // 0x5c6 PushI
	var_2_object = var_2_object + var_224_int; // 0x5c7 Add2
	goto Label_1469; // 0x5c8 Jump
}


func_1843(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x733 PushV
	self(var_33_object); // 0x734 Func
	var_31_object = var_33_object; // 0x736 Mov
	return 2; // 0x737 Return
}


func_53(var_0_bool, var_143_bool, var_144_cvector, var_145_cvector)
{
	var_147_bool = 0; var_148_bool = 0; // 0x35 PushV
	var_0_bool = 1; // 0x36 TMovB
	var_149_int = 21; // 0x37 PushI
	var_150_float = 0.5; // 0x38 PushF
	SetTimer(var_149_int, var_150_float); // 0x39 Func
	
Label_59:
	var_151_bool = 0; var_152_cvector = CVector(0,0,0); // 0x3b PushV
	var_152_cvector = var_144_cvector; // 0x3c Mov
	func_1615(var_151_bool, var_152_cvector); // 0x3d NEW_2
	var_161_bool = var_151_bool == 0; // 0x3f Not
	if(var_161_bool == 0) goto Label_66; // 0x40 JumpB
	goto Label_59; // 0x41 Jump
	
Label_66:
	var_162_bool = 0; // 0x42 PushB
	MovePoint(var_144_cvector, var_162_bool, var_148_bool); // 0x43 Func
	var_163_bool = var_148_bool; // 0x45 Push
	if(var_163_bool == 0) goto Label_72; // 0x46 JumpB
	goto Label_73; // 0x47 Jump
	
Label_73:
	var_164_int = 20; // 0x49 PushI
	KillTimer(var_164_int); // 0x4a Func
	var_165_int = 21; // 0x4c PushI
	KillTimer(var_165_int); // 0x4d Func
	var_0_bool = 0; // 0x4f TMovB
	WaitForAnimEnd(var_148_bool); // 0x50 Func
	var_166_bool = var_148_bool == 0; // 0x52 Not
	if(var_166_bool == 0) goto Label_86; // 0x53 JumpB
	var_143_bool = 0; // 0x54 MovB
	return 2; // 0x55 Return
	
Label_86:
	var_167_float = GetByIndex(var_145_cvector, 0); // 0x56 PushE
	var_168_float = GetByIndex(var_145_cvector, 2); // 0x57 PushE
	Rotate(var_167_float, var_168_float, var_148_bool); // 0x58 Func
	var_169_bool = var_148_bool == 0; // 0x5a Not
	if(var_169_bool == 0) goto Label_94; // 0x5b JumpB
	var_143_bool = 0; // 0x5c MovB
	return 2; // 0x5d Return
	
Label_94:
	var_143_bool = 1; // 0x5e MovB
	return 2; // 0x5f Return
	
Label_72:
	goto Label_59; // 0x48 Jump
}


func_1918(var_59_object, var_60_string, var_61_int)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x77e PushV
	CreateInvItem(var_63_object); // 0x77f Func
	SetItemName(var_60_string); // 0x781 ObjFunc
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; // 0x783 PushV
	var_64_object = var_59_object; // 0x784 Mov
	var_65_object = var_63_object; // 0x785 Mov
	var_66_int = var_61_int; // 0x786 Mov
	func_1899(var_65_object, var_66_int); // 0x787 NEW_2
	return 2; // 0x789 Return
}


func_1719()
{
	var_166_bool = 0; var_167_bool = 0; // 0x6b7 PushV
	var_168_bool = 1; // 0x6b8 PushB
	CameraSwitchToNormal(var_168_bool); // 0x6b9 Func
	var_169_bool = 0; // 0x6bb PushV
	func_2023(var_169_bool); // 0x6bc NEW_2
	if(var_169_bool == 0) goto Label_1728; // 0x6be JumpB
	goto Label_1736; // 0x6bf Jump
	
Label_1736:
	return 2; // 0x6c8 Return
	
Label_1728:
	var_170_string = "head"; // 0x6c0 PushS
	HasAnimationTrack(var_167_bool, var_170_string); // 0x6c1 Func
	var_171_bool = var_167_bool; // 0x6c3 Push
	if(var_171_bool == 0) goto Label_1736; // 0x6c4 JumpB
	var_172_string = "head"; // 0x6c5 PushS
	UnlookAsync(var_172_string); // 0x6c6 Func
}


func_185()
{
	Stop(); // 0xb9 Func
	return 0; // 0xbb Return
}


func_1849(var_81_cvector, var_82_cvector)
{
	var_84_float = 0; var_85_float = 0; // 0x739 PushV
	var_86_int = var_82_cvector | var_82_cvector; // 0x73a Or
	var_85_float = sqrt(var_86_int); // 0x73b Sqrt2
	var_87_float = 0.0; // 0x73c PushF
	var_88_bool = var_85_float < var_87_float; // 0x73d LT
	if(var_88_bool == 0) goto Label_1857; // 0x73e JumpB
	var_81_cvector = CVector(0.0, 0.0, 0.0); // 0x73f MovV
	return 2; // 0x740 Return
	
Label_1857:
	var_81_cvector = var_82_cvector / var_82_cvector; // 0x741 Div2
	return 2; // 0x742 Return
}


func_188(var_46_object)
{
	var_47_bool = 0; var_48_bool = 0; // 0xbc PushV
	WaitForAnimEnd(var_48_bool); // 0xbd Func
	var_49_bool = var_48_bool == 0; // 0xbf Not
	if(var_49_bool == 0) goto Label_194; // 0xc0 JumpB
	return 2; // 0xc1 Return
	
Label_194:
	var_50_object = Obj(); // 0xc2 PushV
	var_50_object = var_46_object; // 0xc3 Mov
	func_1634(); // 0xc4 NEW_2
	var_59_int = 6; // 0xc6 PushI
	Sleep(var_59_int); // 0xc7 Func
	return 2; // 0xc9 Return
}


func_2237(var_38_object, var_186_object, var_363_object)
{
	var_39_int = 0; var_40_int = 0; // 0x8bd PushV
	var_41_string = "mt_gorbun"; // 0x8be PushS
	GetVariable(var_41_string, var_40_int); // 0x8bf Func
	var_42_bool = var_40_int == 0; // 0x8c1 Not
	if(var_42_bool == 0) goto Label_2253; // 0x8c2 JumpB
	var_43_int = 0; var_44_object = Obj(); // 0x8c3 PushV
	var_44_object = var_38_object; // 0x8c4 Mov
	TaskCall(7); // 0x8c5 TaskCall
	func_1018(var_45_object, var_43_int, var_44_object); // 0x8c6 NEW_2
	TaskReturn(); // 0x8c7 TaskReturn
	var_173_string = "mt_gorbun"; // 0x8c9 PushS
	var_174_int = 1; // 0x8ca PushI
	SetVariable(var_173_string, var_174_int); // 0x8cb Func
	
Label_2253:
	var_175_bool = 0; var_176_int = 0; // 0x8cd PushV
	var_176_int = 1; // 0x8ce MovI
	func_1940(var_175_bool, var_176_int); // 0x8cf NEW_2
	if(var_175_bool == 0) goto Label_2286; // 0x8d1 JumpB
	var_183_int = 1000; // 0x8d2 PushI
	var_184_int = 0; var_185_object = Obj(); // 0x8d3 PushV
	var_185_object = var_38_object; // 0x8d4 Mov
	TaskCall(5); // 0x8d5 TaskCall
	func_322(var_186_object, var_184_int, var_185_object); // 0x8d6 NEW_2
	TaskReturn(); // 0x8d7 TaskReturn
	var_319_bool = var_183_int == var_186_object; // 0x8d9 Eq
	if(var_319_bool == 0) goto Label_2285; // 0x8da JumpB
	var_320_bool = 0; var_321_object = Obj(); var_322_float = 0; // 0x8db PushV
	var_321_object = var_38_object; // 0x8dc Mov
	var_322_float = 110; // 0x8dd MovI
	func_1737(var_321_object, var_322_float); // 0x8de NEW_2
	var_350_bool = var_320_bool == 0; // 0x8e0 Not
	if(var_350_bool == 0) goto Label_2275; // 0x8e1 JumpB
	return 2; // 0x8e2 Return
	
Label_2275:
	var_351_object = Obj(); // 0x8e3 PushV
	var_351_object = var_38_object; // 0x8e4 Mov
	TaskCall(1); // 0x8e5 TaskCall
	func_13(var_351_object); // 0x8e6 NEW_2
	TaskReturn(); // 0x8e7 TaskReturn
	var_358_object = Obj(); // 0x8e9 PushV
	var_358_object = var_38_object; // 0x8ea Mov
	func_1785(); // 0x8eb NEW_2
	
Label_2285:
	return 2; // 0x8ed Return
	
Label_2286:
	var_360_int = 1000; // 0x8ee PushI
	var_361_int = 0; var_362_object = Obj(); // 0x8ef PushV
	var_362_object = var_38_object; // 0x8f0 Mov
	TaskCall(9); // 0x8f1 TaskCall
	func_1214(var_363_object, var_361_int, var_362_object); // 0x8f2 NEW_2
	TaskReturn(); // 0x8f3 TaskReturn
	var_417_bool = var_360_int == var_363_object; // 0x8f5 Eq
	if(var_417_bool == 0) goto Label_2313; // 0x8f6 JumpB
	var_418_bool = 0; var_419_object = Obj(); var_420_float = 0; // 0x8f7 PushV
	var_419_object = var_38_object; // 0x8f8 Mov
	var_420_float = 110; // 0x8f9 MovI
	func_1737(var_419_object, var_420_float); // 0x8fa NEW_2
	var_421_bool = var_418_bool == 0; // 0x8fc Not
	if(var_421_bool == 0) goto Label_2303; // 0x8fd JumpB
	return 2; // 0x8fe Return
	
Label_2303:
	var_422_object = Obj(); // 0x8ff PushV
	var_422_object = var_38_object; // 0x900 Mov
	TaskCall(1); // 0x901 TaskCall
	func_13(var_422_object); // 0x902 NEW_2
	TaskReturn(); // 0x903 TaskReturn
	var_424_object = Obj(); // 0x905 PushV
	var_424_object = var_38_object; // 0x906 Mov
	func_1785(); // 0x907 NEW_2
	
Label_2313:
	return 2; // 0x909 Return
}


func_2108(var_270_bool)
{
	var_272_int = 0; var_273_string = ""; // 0x83d PushV
	var_273_string = "oob1Gorbun2"; // 0x83e MovS
	func_1882(var_272_int, var_273_string); // 0x83f NEW_2
	var_274_int = 0; // 0x841 PushI
	var_275_bool = var_272_int == var_274_int; // 0x842 Eq
	if(var_275_bool == 0) goto Label_2118; // 0x843 JumpB
	var_270_bool = 1; // 0x844 MovB
	return 0; // 0x845 Return
	
Label_2118:
	var_270_bool = 0; // 0x846 MovB
	return 0; // 0x847 Return
}


func_1214(var_0_bool, var_361_int, var_362_object)
{
	var_364_object = Obj(); var_365_bool = 0; var_366_int = 0; var_367_bool = 0; var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0; // 0x4be PushV
	var_0_bool = var_362_object; // 0x4bf TMov
	var_372_bool = 0; var_373_object = Obj(); var_374_float = 0; // 0x4c0 PushV
	var_373_object = var_362_object; // 0x4c1 Mov
	var_374_float = 100.0; // 0x4c2 MovF
	func_1650(var_373_object, var_374_float); // 0x4c3 NEW_2
	var_375_bool = var_372_bool == 0; // 0x4c5 Not
	if(var_375_bool == 0) goto Label_1225; // 0x4c6 JumpB
	var_361_int = -2; // 0x4c7 MovI
	return 8; // 0x4c8 Return
	
Label_1225:
	CreateDialog(var_368_object); // 0x4c9 Func
	var_376_int = 0; // 0x4cb PushV
	func_2017(var_376_int); // 0x4cc NEW_2
	SetNPCName(var_376_int); // 0x4ce ObjFunc
	var_377_int = 0; // 0x4d0 PushV
	func_2015(var_377_int); // 0x4d1 NEW_2
	SetNPCDescription(var_377_int); // 0x4d3 ObjFunc
	var_378_string = ""; // 0x4d5 PushV
	func_2019(var_378_string); // 0x4d6 NEW_2
	SetPhoto(var_378_string); // 0x4d8 ObjFunc
	var_379_string = ""; // 0x4da PushV
	func_2021(var_379_string); // 0x4db NEW_2
	SetPhoto2(var_379_string); // 0x4dd ObjFunc
	var_380_int = 0; // 0x4df PushV
	func_2204(var_380_int); // 0x4e0 NEW_2
	SetPlayerName(var_380_int); // 0x4e2 ObjFunc
	var_370_int = -1; // 0x4e4 MovI
	IsOverrideActive(var_369_bool); // 0x4e5 Func
	var_381_bool = var_369_bool; // 0x4e7 Push
	if(var_381_bool == 0) goto Label_1259; // 0x4e8 JumpB
	var_361_int = -2; // 0x4e9 MovI
	return 8; // 0x4ea Return
	
Label_1259:
	DoDialog(var_368_object); // 0x4eb Func
	var_382_object = Obj(); var_383_object = Obj(); // 0x4ed PushV
	var_382_object = var_362_object; // 0x4ee Mov
	var_383_object = var_368_object; // 0x4ef Mov
	TaskCall(10); // 0x4f0 TaskCall
	func_1288(var_384_object, var_385_object, var_386_string, var_387_bool, var_382_object, var_383_object); // 0x4f1 NEW_2
	TaskReturn(); // 0x4f2 TaskReturn
	IsDialogEnd(var_371_bool); // 0x4f4 ObjFunc
	
Label_1270:
	var_415_bool = var_371_bool == 0; // 0x4f6 Not
	if(var_415_bool == 0) goto Label_1277; // 0x4f7 JumpB
	sync(); // 0x4f8 Func
	IsDialogEnd(var_371_bool); // 0x4fa ObjFunc
	goto Label_1270; // 0x4fc Jump
	
Label_1277:
	var_416_object = Obj(); // 0x4fd PushV
	var_416_object = var_362_object; // 0x4fe Mov
	func_1719(); // 0x4ff NEW_2
	StopDialog(var_368_object); // 0x501 Func
	GetReturnValue(var_370_int); // 0x503 ObjFunc
	var_361_int = var_370_int; // 0x505 Mov
	return 8; // 0x506 Return
}


func_1602(var_124_cvector)
{
	var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); // 0x642 PushV
	GetPosition(var_126_cvector); // 0x643 Func
	var_124_cvector = var_126_cvector; // 0x645 Mov
	return 2; // 0x646 Return
}


func_1859(var_116_float, var_117_float)
{
	var_119_int = 0; // 0x744 PushI
	var_120_bool = var_117_float < var_119_int; // 0x745 LT
	if(var_120_bool == 0) goto Label_1865; // 0x746 JumpB
	var_116_float = -var_117_float; // 0x747 Neg2
	goto Label_1866; // 0x748 Jump
	
Label_1866:
	return 0; // 0x74a Return
	
Label_1865:
	var_116_float = var_117_float; // 0x749 Mov
}


func_1092(var_0_bool, var_1_bool, var_2_object, var_3_object, var_115_object, var_116_object)
{
	var_0_bool = var_116_object; // 0x445 TMov
	var_1_bool = var_115_object; // 0x446 TMov
	var_3_object = 0; // 0x447 TMovB
	var_121_int = 1; // 0x448 PushI
	if(var_121_int == 0) goto Label_1120; // 0x449 JumpB
	var_122_string = ""; // 0x44a PushV
	var_122_string = "Neutral"; // 0x44b MovS
	func_1150(var_116_object, var_122_string); // 0x44c NEW_2
	var_139_int = 520726; // 0x44e PushI
	SetMessage(var_139_int); // 0x44f TObjFunc
	ClearReplies(); // 0x451 TObjFunc
	var_140_int = 520727; // 0x453 PushI
	var_141_int = -1; // 0x454 PushI
	var_142_int = 21938; // 0x455 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x456 TObjFunc
	var_143_int = 520728; // 0x458 PushI
	var_144_int = -1; // 0x459 PushI
	var_145_int = 21939; // 0x45a PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x45b TObjFunc
	goto Label_1120; // 0x45d Jump
	
Label_1120:
	var_146_bool = 0; // 0x460 PushV
	func_2023(var_146_bool); // 0x461 NEW_2
	if(var_146_bool == 0) goto Label_1135; // 0x463 JumpB
	
Label_1124:
	lshWaitForAnimEnd(); // 0x464 Func
	var_147_object = var_3_object; // 0x466 PushT
	if(var_147_object == 0) goto Label_1129; // 0x467 JumpB
	goto Label_1134; // 0x468 Jump
	
Label_1134:
	goto Label_1149; // 0x46e Jump
	
Label_1149:
	return 0; // 0x47d Return
	
Label_1129:
	var_148_string = ""; // 0x469 PushV
	var_148_string = var_2_object; // 0x46a MovT
	func_1790(var_148_string); // 0x46b NEW_2
	goto Label_1124; // 0x46d Jump
	
Label_1135:
	var_159_string = "all"; // 0x46f PushS
	var_160_string = "idle"; // 0x470 PushS
	PlayAnimation(var_159_string, var_160_string); // 0x471 Func
	
Label_1139:
	WaitForAnimEnd(); // 0x473 Func
	var_161_object = var_3_object; // 0x475 PushT
	if(var_161_object == 0) goto Label_1144; // 0x476 JumpB
	goto Label_1149; // 0x477 Jump
	
Label_1144:
	var_162_string = "all"; // 0x478 PushS
	var_163_string = "idle"; // 0x479 PushS
	PlayAnimation(var_162_string, var_163_string); // 0x47a Func
	goto Label_1139; // 0x47c Jump
}


func_322(var_0_bool, var_184_int, var_185_object)
{
	var_187_object = Obj(); var_188_bool = 0; var_189_int = 0; var_190_bool = 0; var_191_object = Obj(); var_192_bool = 0; var_193_int = 0; var_194_bool = 0; // 0x142 PushV
	var_0_bool = var_185_object; // 0x143 TMov
	var_195_bool = 0; var_196_object = Obj(); var_197_float = 0; // 0x144 PushV
	var_196_object = var_185_object; // 0x145 Mov
	var_197_float = 100.0; // 0x146 MovF
	func_1650(var_196_object, var_197_float); // 0x147 NEW_2
	var_198_bool = var_195_bool == 0; // 0x149 Not
	if(var_198_bool == 0) goto Label_333; // 0x14a JumpB
	var_184_int = -2; // 0x14b MovI
	return 8; // 0x14c Return
	
Label_333:
	CreateDialog(var_191_object); // 0x14d Func
	var_199_int = 0; // 0x14f PushV
	func_2017(var_199_int); // 0x150 NEW_2
	SetNPCName(var_199_int); // 0x152 ObjFunc
	var_200_int = 0; // 0x154 PushV
	func_2015(var_200_int); // 0x155 NEW_2
	SetNPCDescription(var_200_int); // 0x157 ObjFunc
	var_201_string = ""; // 0x159 PushV
	func_2019(var_201_string); // 0x15a NEW_2
	SetPhoto(var_201_string); // 0x15c ObjFunc
	var_202_string = ""; // 0x15e PushV
	func_2021(var_202_string); // 0x15f NEW_2
	SetPhoto2(var_202_string); // 0x161 ObjFunc
	var_203_int = 0; // 0x163 PushV
	func_2204(var_203_int); // 0x164 NEW_2
	SetPlayerName(var_203_int); // 0x166 ObjFunc
	var_193_int = -1; // 0x168 MovI
	IsOverrideActive(var_192_bool); // 0x169 Func
	var_204_bool = var_192_bool; // 0x16b Push
	if(var_204_bool == 0) goto Label_367; // 0x16c JumpB
	var_184_int = -2; // 0x16d MovI
	return 8; // 0x16e Return
	
Label_367:
	DoDialog(var_191_object); // 0x16f Func
	var_205_object = Obj(); var_206_object = Obj(); // 0x171 PushV
	var_205_object = var_185_object; // 0x172 Mov
	var_206_object = var_191_object; // 0x173 Mov
	TaskCall(6); // 0x174 TaskCall
	func_396(var_207_object, var_208_object, var_209_string, var_210_bool, var_205_object, var_206_object); // 0x175 NEW_2
	TaskReturn(); // 0x176 TaskReturn
	IsDialogEnd(var_194_bool); // 0x178 ObjFunc
	
Label_378:
	var_317_bool = var_194_bool == 0; // 0x17a Not
	if(var_317_bool == 0) goto Label_385; // 0x17b JumpB
	sync(); // 0x17c Func
	IsDialogEnd(var_194_bool); // 0x17e ObjFunc
	goto Label_378; // 0x180 Jump
	
Label_385:
	var_318_object = Obj(); // 0x181 PushV
	var_318_object = var_185_object; // 0x182 Mov
	func_1719(); // 0x183 NEW_2
	StopDialog(var_191_object); // 0x185 Func
	GetReturnValue(var_193_int); // 0x187 ObjFunc
	var_184_int = var_193_int; // 0x189 Mov
	return 8; // 0x18a Return
}


func_1607(var_32_float)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x647 PushV
	GetPosition(var_37_cvector); // 0x648 Func
	GetPosition(var_38_cvector); // 0x64a ObjFunc
	var_39_cvector = var_38_cvector - var_37_cvector; // 0x64c Sub2
	var_32_float = var_39_cvector | var_39_cvector; // 0x64d Or2
	return 6; // 0x64e Return
}


func_1351(var_2_object, var_389_string)
{
	var_390_bool = 0; // 0x548 PushV
	func_2023(var_390_bool); // 0x549 NEW_2
	var_391_bool = var_390_bool == 0; // 0x54b Not
	if(var_391_bool == 0) goto Label_1358; // 0x54c JumpB
	return 0; // 0x54d Return
	
Label_1358:
	var_392_bool = var_389_string == var_2_object; // 0x54e Eq
	if(var_392_bool == 0) goto Label_1361; // 0x54f JumpB
	return 0; // 0x550 Return
	
Label_1361:
	var_393_string = ""; var_394_bool = 0; // 0x551 PushV
	var_393_string = var_389_string; // 0x552 Mov
	var_395_string = ""; // 0x553 PushS
	var_396_bool = var_389_string == var_395_string; // 0x554 Eq
	if(var_396_bool == 0) goto Label_1368; // 0x555 JumpB
	var_394_bool = 0; // 0x556 MovB
	goto Label_1369; // 0x557 Jump
	
Label_1369:
	func_1806(var_393_string, var_394_bool); // 0x559 NEW_2
	var_2_object = var_389_string; // 0x55b TMov
	return 0; // 0x55c Return
	
Label_1368:
	var_394_bool = 1; // 0x558 MovB
}


func_2120(var_216_bool)
{
	var_218_float = 0; var_219_float = 0; // 0x848 PushV
	var_220_string = "health"; // 0x849 PushS
	GetProperty(var_220_string, var_219_float); // 0x84a ObjFunc
	var_221_float = 0.4; // 0x84c PushF
	var_216_bool = var_219_float >= var_221_float; // 0x84d GE2
	return 2; // 0x84e Return
}


func_1737(var_320_bool, var_322_float)
{
	var_323_float = 0; var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_bool = 0; var_331_float = 0; var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0); var_338_bool = 0; // 0x6c9 PushV
	GetPosition(var_332_cvector); // 0x6ca ObjFunc
	GetEyesHeight(var_331_float); // 0x6cc ObjFunc
	var_339_float = GetByIndex(var_332_cvector, 1); // 0x6ce PushE
	var_339_float = var_339_float + var_331_float; // 0x6cf Add2
	SetByIndex(var_332_cvector, 1) = var_339_float; // 0x6d0 PopE
	GetPosition(var_333_cvector); // 0x6d1 Func
	GetEyesHeight(var_331_float); // 0x6d3 Func
	var_340_float = GetByIndex(var_333_cvector, 1); // 0x6d5 PushE
	var_340_float = var_340_float + var_331_float; // 0x6d6 Add2
	SetByIndex(var_333_cvector, 1) = var_340_float; // 0x6d7 PopE
	var_334_cvector = var_332_cvector - var_333_cvector; // 0x6d8 Sub2
	var_341_float = GetByIndex(var_334_cvector, 1); // 0x6d9 PushE
	var_341_float = 0; // 0x6da MovI
	SetByIndex(var_334_cvector, 1) = var_341_float; // 0x6db PopE
	var_342_int = var_334_cvector | var_334_cvector; // 0x6dc Or
	var_343_float = sqrt(var_342_int); // 0x6dd Sqrt
	var_334_cvector = var_334_cvector / var_334_cvector; // 0x6de Div2
	var_335_cvector = -var_334_cvector; // 0x6df Neg2
	var_344_float = var_334_cvector * var_322_float; // 0x6e0 Mult
	var_345_cvector = CVector(0.0, 10.0, 0.0); // 0x6e1 PushVec
	var_336_cvector = var_344_float - var_345_cvector; // 0x6e2 Sub2
	var_337_cvector = var_333_cvector + var_336_cvector; // 0x6e3 Add2
	IsOverrideActive(var_338_bool); // 0x6e4 Func
	var_346_bool = var_338_bool; // 0x6e6 Push
	if(var_346_bool == 0) goto Label_1770; // 0x6e7 JumpB
	var_320_bool = 0; // 0x6e8 MovB
	return 16; // 0x6e9 Return
	
Label_1770:
	StopWorld(); // 0x6ea Func
	var_347_bool = 1; // 0x6ec PushB
	CameraTransit(var_337_cvector, var_335_cvector, var_347_bool); // 0x6ed Func
	var_348_float = GetByIndex(var_336_cvector, 0); // 0x6ef PushE
	var_349_float = GetByIndex(var_336_cvector, 2); // 0x6f0 PushE
	Rotate(var_348_float, var_349_float); // 0x6f1 Func
	CameraWaitForPlayFinish(); // 0x6f3 Func
	ResumeWorld(); // 0x6f5 Func
	var_320_bool = 1; // 0x6f7 MovB
	return 16; // 0x6f8 Return
}


func_1867(var_37_bool, var_38_int, var_39_int)
{
	var_40_int = 0; var_41_int = 0; // 0x74b PushV
	irand(var_41_int, var_39_int); // 0x74c Func
	var_37_bool = var_41_int < var_38_int; // 0x74e LT2
	return 2; // 0x74f Return
}


func_1615(var_151_bool, var_152_cvector)
{
	var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_bool = 0; var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_bool = 0; // 0x64f PushV
	GetPosition(var_156_cvector); // 0x650 Func
	var_157_cvector = var_152_cvector - var_156_cvector; // 0x652 Sub2
	var_159_float = GetByIndex(var_157_cvector, 0); // 0x653 PushE
	var_160_float = GetByIndex(var_157_cvector, 2); // 0x654 PushE
	Rotate(var_159_float, var_160_float, var_158_bool); // 0x655 Func
	var_151_bool = var_158_bool; // 0x657 Mov
	return 6; // 0x658 Return
}


func_1872(var_127_float, var_128_cvector)
{
	var_129_float = GetByIndex(var_128_cvector, 0); // 0x751 PushE
	var_130_float = GetByIndex(var_128_cvector, 0); // 0x752 PushE
	var_131_float = var_129_float * var_130_float; // 0x753 Mult
	var_132_float = GetByIndex(var_128_cvector, 2); // 0x754 PushE
	var_133_float = GetByIndex(var_128_cvector, 2); // 0x755 PushE
	var_134_float = var_132_float * var_133_float; // 0x756 Mult
	var_135_int = var_131_float + var_134_float; // 0x757 Add
	var_127_float = sqrt(var_135_int); // 0x758 Sqrt2
	return 0; // 0x759 Return
}


func_2127()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x84f PushV
	var_34_int = 202; // 0x850 PushI
	var_35_int = 2; // 0x851 PushI
	var_36_int = 517942; // 0x852 PushI
	CreateDiaryEntry(var_33_object, var_34_int, var_35_int, var_36_int); // 0x853 Func
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; // 0x855 PushV
	var_38_object = var_33_object; // 0x856 Mov
	var_39_int = 200; // 0x857 MovI
	func_2153(var_37_bool, var_38_object, var_39_int); // 0x858 NEW_2
	return 2; // 0x85a Return
}


func_597(var_2_object, var_240_string)
{
	var_241_bool = 0; // 0x256 PushV
	func_2023(var_241_bool); // 0x257 NEW_2
	var_242_bool = var_241_bool == 0; // 0x259 Not
	if(var_242_bool == 0) goto Label_604; // 0x25a JumpB
	return 0; // 0x25b Return
	
Label_604:
	var_243_bool = var_240_string == var_2_object; // 0x25c Eq
	if(var_243_bool == 0) goto Label_607; // 0x25d JumpB
	return 0; // 0x25e Return
	
Label_607:
	var_244_string = ""; var_245_bool = 0; // 0x25f PushV
	var_244_string = var_240_string; // 0x260 Mov
	var_246_string = ""; // 0x261 PushS
	var_247_bool = var_240_string == var_246_string; // 0x262 Eq
	if(var_247_bool == 0) goto Label_614; // 0x263 JumpB
	var_245_bool = 0; // 0x264 MovB
	goto Label_615; // 0x265 Jump
	
Label_615:
	func_1806(var_244_string, var_245_bool); // 0x267 NEW_2
	var_2_object = var_240_string; // 0x269 TMov
	return 0; // 0x26a Return
	
Label_614:
	var_245_bool = 1; // 0x266 MovB
}


func_1625(var_24_bool)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x659 PushV
	GetPosition(var_27_cvector); // 0x65a ObjFunc
	var_28_bool = 0; var_29_cvector = CVector(0,0,0); // 0x65c PushV
	var_29_cvector = var_27_cvector; // 0x65d Mov
	func_1615(var_28_bool, var_29_cvector); // 0x65e NEW_2
	var_24_bool = var_28_bool; // 0x65f Mov
	return 2; // 0x661 Return
}


func_1882(var_224_int, var_225_string)
{
	var_226_int = 0; var_227_int = 0; // 0x75a PushV
	GetVariable(var_225_string, var_227_int); // 0x75b Func
	var_224_int = var_227_int; // 0x75d Mov
	return 2; // 0x75e Return
}


func_2140(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x85c PushV
	GetDiaryRoot(var_48_object); // 0x85d Func
	var_49_bool = var_48_object == 0; // 0x85f Not
	if(var_49_bool == 0) goto Label_2150; // 0x860 JumpB
	var_50_string = "Can't retrieve diary root"; // 0x861 PushS
	Trace(var_50_string); // 0x862 Func
	var_46_object = 0; // 0x864 MovB
	return 2; // 0x865 Return
	
Label_2150:
	var_46_object = var_48_object; // 0x866 Mov
	return 2; // 0x867 Return
}


func_2015(var_103_int)
{
	var_103_int = 515594; // 0x7df MovI
	return 0; // 0x7e0 Return
}


func_1887(var_75_int, var_76_int)
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x75f PushV
	CreateIntVector(var_78_object); // 0x760 Func
	add(var_75_int); // 0x762 ObjFunc
	add(var_76_int); // 0x764 ObjFunc
	var_79_int = 3; // 0x766 PushI
	SendWorldWndMessage(var_79_int, var_78_object); // 0x767 Func
	return 2; // 0x769 Return
}


func_2017(var_102_int)
{
	var_102_int = 512583; // 0x7e1 MovI
	return 0; // 0x7e2 Return
}


func_1634()
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x662 PushV
	GetPosition(var_54_cvector); // 0x663 ObjFunc
	GetPosition(var_55_cvector); // 0x665 Func
	var_56_cvector = var_54_cvector - var_55_cvector; // 0x667 Sub2
	var_57_float = GetByIndex(var_56_cvector, 0); // 0x668 PushE
	var_58_float = GetByIndex(var_56_cvector, 2); // 0x669 PushE
	RotateAsync(var_57_float, var_58_float); // 0x66a Func
	return 6; // 0x66c Return
}


func_2019(var_104_string)
{
	var_104_string = "ui/NPC_Citizen3.png"; // 0x7e3 MovS
	return 0; // 0x7e4 Return
}


func_2021(var_105_string)
{
	var_105_string = "ui/NPC_Citizen3_b.png"; // 0x7e5 MovS
	return 0; // 0x7e6 Return
}


func_2023(var_97_bool)
{
	var_97_bool = 0; // 0x7e7 MovB
	return 0; // 0x7e8 Return
}


func_233()
{
	StopGroup0(); // 0xe9 Func
	StopAnimation(); // 0xeb Func
	return 0; // 0xed Return
}


func_2025()
{
	var_82_string = "playsound"; // 0x7ea PushS
	var_83_string = "giveitem"; // 0x7eb PushS
	TriggerWorld(var_82_string, var_83_string); // 0x7ec Func
	return 0; // 0x7ee Return
}


func_1899(var_65_object, var_66_int)
{
	var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; // 0x76b PushV
	GetItemID(var_70_int); // 0x76c ObjFunc
	var_73_string = "Category"; // 0x76e PushS
	GetInvItemProperty(var_71_int, var_70_int, var_73_string); // 0x76f Func
	AddItem(var_72_bool, var_65_object, var_71_int, var_66_int); // 0x771 ObjFunc
	var_74_bool = var_72_bool == 0; // 0x773 Not
	if(var_74_bool == 0) goto Label_1912; // 0x774 JumpB
	DropItems(var_65_object, var_66_int); // 0x775 ObjFunc
	goto Label_1917; // 0x777 Jump
	
Label_1917:
	return 6; // 0x77d Return
	
Label_1912:
	var_75_int = 0; var_76_int = 0; // 0x778 PushV
	var_75_int = var_70_int; // 0x779 Mov
	var_76_int = var_66_int; // 0x77a Mov
	func_1887(var_75_int, var_76_int); // 0x77b NEW_2
}


func_2153(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x869 PushV
	var_46_object = Obj(); // 0x86a PushV
	func_2140(var_46_object); // 0x86b NEW_2
	var_43_object = var_46_object; // 0x86c Mov
	Find(var_39_int, var_44_object); // 0x86e ObjFunc
	var_51_bool = var_44_object == 0; // 0x870 Not
	if(var_51_bool == 0) goto Label_2168; // 0x871 JumpB
	var_52_string = "Can't find diary parent with id: "; // 0x872 PushS
	var_53_int = var_52_string + var_39_int; // 0x873 Add
	Trace(var_53_int); // 0x874 Func
	var_37_bool = 0; // 0x876 MovB
	return 6; // 0x877 Return
	
Label_2168:
	AddChild(var_38_object); // 0x878 ObjFunc
	var_54_int = 7; // 0x87a PushI
	SendWorldWndMessage(var_54_int); // 0x87b Func
	GetCategory(var_45_int); // 0x87d ObjFunc
	SetDiarySection(var_45_int); // 0x87f Func
	var_37_bool = 0; // 0x881 MovB
	return 6; // 0x882 Return
}


func_1645(var_98_bool)
{
	var_99_bool = 0; var_100_bool = 0; // 0x66d PushV
	IsLoaded(var_100_bool); // 0x66e Func
	var_98_bool = var_100_bool; // 0x670 Mov
	return 2; // 0x671 Return
}


func_238(var_170_int)
{
	var_171_string = ""; var_172_bool = 0; var_173_string = ""; var_174_int = 0; var_175_int = 0; var_176_int = 0; var_177_int = 0; var_178_string = ""; var_179_bool = 0; var_180_string = ""; var_181_int = 0; var_182_int = 0; var_183_int = 0; var_184_int = 0; // 0xee PushV
	var_185_int = var_170_int; // 0xef Push
	if(var_185_int == 0) goto Label_244; // 0xf0 JumpB
	var_186_string = "ptidle"; // 0xf1 PushS
	var_178_string = var_186_string + var_170_int; // 0xf2 Add2
	goto Label_245; // 0xf3 Jump
	
Label_245:
	HasProperty(var_178_string, var_179_bool); // 0xf5 Func
	var_187_bool = var_179_bool; // 0xf7 Push
	if(var_187_bool == 0) goto Label_269; // 0xf8 JumpB
	GetProperty(var_178_string, var_180_string); // 0xf9 Func
	var_188_int = 0; var_189_string = ""; // 0xfb PushV
	var_189_string = var_180_string; // 0xfc Mov
	func_304(var_188_int, var_189_string); // 0xfd NEW_2
	var_181_int = var_188_int; // 0xfe Mov
	irand(var_182_int, var_181_int); // 0x100 Func
	var_202_string = "all"; // 0x102 PushS
	var_203_string = ""; var_204_string = ""; var_205_int = 0; // 0x103 PushV
	var_204_string = var_180_string; // 0x104 Mov
	var_205_int = var_182_int; // 0x105 Mov
	func_296(var_203_string, var_204_string, var_205_int); // 0x106 NEW_2
	PlayAnimation(var_202_string, var_203_string); // 0x108 Func
	WaitForAnimEnd(); // 0x10a Func
	goto Label_286; // 0x10c Jump
	
Label_286:
	return 14; // 0x11e Return
	
Label_269:
	var_206_int = 0; // 0x10d PushV
	func_1953(var_206_int); // 0x10e NEW_2
	var_183_int = var_206_int; // 0x10f Mov
	var_219_int = var_183_int; // 0x111 Push
	if(var_219_int == 0) goto Label_286; // 0x112 JumpB
	irand(var_184_int, var_183_int); // 0x113 Func
	var_220_string = "all"; // 0x115 PushS
	var_221_string = ""; var_222_int = 0; // 0x116 PushV
	var_222_int = var_184_int; // 0x117 Mov
	func_1946(var_221_string, var_222_int); // 0x118 NEW_2
	PlayAnimation(var_220_string, var_221_string); // 0x11a Func
	WaitForAnimEnd(); // 0x11c Func
	
Label_244:
	var_178_string = "ptidle"; // 0xf4 MovS
}


func_2031()
{
	var_28_int = 1000; // 0x7f0 PushI
	SetReturnValue(var_28_int); // 0x7f1 ObjFunc
	return 0; // 0x7f3 Return
}


func_1650(var_54_bool, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; // 0x672 PushV
	GetPosition(var_67_cvector); // 0x673 ObjFunc
	GetEyesHeight(var_66_float); // 0x675 ObjFunc
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x677 PushE
	var_75_float = var_75_float + var_66_float; // 0x678 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x679 PopE
	GetPosition(var_68_cvector); // 0x67a Func
	GetEyesHeight(var_66_float); // 0x67c Func
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x67e PushE
	var_76_float = var_76_float + var_66_float; // 0x67f Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x680 PopE
	var_69_cvector = var_67_cvector - var_68_cvector; // 0x681 Sub2
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x682 PushE
	var_77_float = 0; // 0x683 MovI
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x684 PopE
	var_78_int = var_69_cvector | var_69_cvector; // 0x685 Or
	var_79_float = sqrt(var_78_int); // 0x686 Sqrt
	var_69_cvector = var_69_cvector / var_69_cvector; // 0x687 Div2
	var_70_cvector = -var_69_cvector; // 0x688 Neg2
	var_80_float = var_69_cvector * var_56_float; // 0x689 Mult
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0x68a PushV
	var_83_cvector = CVector(0.0, 1.0, 0.0); // 0x68b PushVec
	var_82_cvector = var_70_cvector ^ var_83_cvector; // 0x68c Xor2
	func_1849(var_81_cvector, var_82_cvector); // 0x68d NEW_2
	var_89_int = 25; // 0x68f PushI
	var_90_float = var_81_cvector * var_89_int; // 0x690 Mult
	var_91_int = var_80_float + var_90_float; // 0x691 Add
	var_92_cvector = CVector(0.0, 10.0, 0.0); // 0x692 PushVec
	var_71_cvector = var_91_int - var_92_cvector; // 0x693 Sub2
	var_72_cvector = var_68_cvector + var_71_cvector; // 0x694 Add2
	IsOverrideActive(var_73_bool); // 0x695 Func
	var_93_bool = var_73_bool; // 0x697 Push
	if(var_93_bool == 0) goto Label_1691; // 0x698 JumpB
	var_54_bool = 0; // 0x699 MovB
	return 18; // 0x69a Return
	
Label_1691:
	StopWorld(); // 0x69b Func
	var_94_bool = 1; // 0x69d PushB
	CameraTransit(var_72_cvector, var_70_cvector, var_94_bool); // 0x69e Func
	var_95_float = GetByIndex(var_71_cvector, 0); // 0x6a0 PushE
	var_96_float = GetByIndex(var_71_cvector, 2); // 0x6a1 PushE
	Rotate(var_95_float, var_96_float); // 0x6a2 Func
	var_97_bool = 0; // 0x6a4 PushV
	func_2023(var_97_bool); // 0x6a5 NEW_2
	if(var_97_bool == 0) goto Label_1705; // 0x6a7 JumpB
	goto Label_1713; // 0x6a8 Jump
	
Label_1713:
	CameraWaitForPlayFinish(); // 0x6b1 Func
	ResumeWorld(); // 0x6b3 Func
	var_54_bool = 1; // 0x6b5 MovB
	return 18; // 0x6b6 Return
	
Label_1705:
	var_98_string = "head"; // 0x6a9 PushS
	HasAnimationTrack(var_74_bool, var_98_string); // 0x6aa Func
	var_99_bool = var_74_bool; // 0x6ac Push
	if(var_99_bool == 0) goto Label_1713; // 0x6ad JumpB
	var_100_string = "head"; // 0x6ae PushS
	LookAsyncCamera(var_100_string); // 0x6af Func
}


func_2036()
{
	var_238_string = "oob1Gorbun1"; // 0x7f5 PushS
	var_239_int = 1; // 0x7f6 PushI
	SetVariable(var_238_string, var_239_int); // 0x7f7 Func
	return 0; // 0x7f9 Return
}


func_1785()
{
	var_359_bool = 1; // 0x6fa PushB
	CameraSwitchToNormal(var_359_bool); // 0x6fb Func
	return 0; // 0x6fd Return
}


func_2042()
{
	var_278_string = "oob1Gorbun2"; // 0x7fb PushS
	var_279_int = 1; // 0x7fc PushI
	SetVariable(var_278_string, var_279_int); // 0x7fd Func
	return 0; // 0x7ff Return
}


func_1790(var_148_string)
{
	var_149_bool = 0; var_150_float = 0; var_151_float = 0; var_152_bool = 0; var_153_float = 0; var_154_float = 0; // 0x6fe PushV
	lshHasAnimation(var_152_bool, var_148_string); // 0x6ff Func
	var_155_bool = var_152_bool; // 0x701 Push
	if(var_155_bool == 0) goto Label_1801; // 0x702 JumpB
	lshGetAnimTimes(var_148_string, var_153_float, var_154_float); // 0x703 Func
	var_156_bool = 0; // 0x705 PushB
	lshPlayAnimation(var_153_float, var_154_float, var_156_bool); // 0x706 Func
	goto Label_1805; // 0x708 Jump
	
Label_1805:
	return 6; // 0x70d Return
	
Label_1801:
	var_157_string = "Can't find lsh animation : "; // 0x709 PushS
	var_158_int = var_157_string + var_148_string; // 0x70a Add
	Trace(var_158_int); // 0x70b Func
}


