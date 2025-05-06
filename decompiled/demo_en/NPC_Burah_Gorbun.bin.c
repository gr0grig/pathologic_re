task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_1_event_11(var_0_bool, var_1_int, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_string, var_7_bool, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_float, var_19_float, var_20_int)
{
	var_21_bool = 0; // 0x28 PushV
	func_1994(var_21_bool); // 0x29 NEW_2
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
	func_1978(); // 0x65 NEW_2
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
	func_1600(var_25_object); // 0x78 NEW_2
	EventEnable(0); // 0x7a EventEnable
	var_38_object = Obj(); // 0x7b PushV
	var_38_object = var_20_int; // 0x7c Mov
	func_2208(var_21_bool, var_22_bool, var_38_object); // 0x7d NEW_2
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
	func_1582(var_33_object); // 0xac NEW_2
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
	func_1978(); // 0xce NEW_2
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
	func_1600(var_25_object); // 0xe1 NEW_2
	EventEnable(0); // 0xe3 EventEnable
	var_38_object = Obj(); // 0xe4 PushV
	var_38_object = var_20_int; // 0xe5 Mov
	func_2208(var_21_bool, var_22_bool, var_38_object); // 0xe6 NEW_2
	
Label_232:
	return 2; // 0xe8 Return
}


task_4_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	func_1978(); // 0x120 NEW_2
	TaskCall(0); // 0x123 TaskCall
	func_0(); // 0x124 NEW_2
	TaskReturn(); // 0x125 TaskReturn
	return 0; // 0x127 Return
}


task_6_event_11(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_int, var_8_int, var_9_object, var_10_object, var_11_object, var_12_string, var_13_bool, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_float, var_20_float, var_21_int)
{
	var_22_int = 1; // 0x267 PushI
	if(var_22_int == 0) goto Label_992; // 0x268 JumpB
	func_1792(); // 0x26a NEW_2
	var_24_int = 19051; // 0x26c PushI
	var_25_bool = var_21_int == var_24_int; // 0x26d Eq
	if(var_25_bool == 0) goto Label_633; // 0x26e JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x26f PushV
	var_26_object = var_1_bool; // 0x270 MovT
	var_27_object = var_0_bool; // 0x271 MovT
	func_2019(var_27_object); // 0x272 NEW_2
	var_80_object = Obj(); var_81_object = Obj(); // 0x274 PushV
	var_80_object = var_1_bool; // 0x275 MovT
	var_81_object = var_0_bool; // 0x276 MovT
	func_1996(); // 0x277 NEW_2
	
Label_633:
	var_84_int = 19062; // 0x279 PushI
	var_85_bool = var_21_int == var_84_int; // 0x27a Eq
	if(var_85_bool == 0) goto Label_641; // 0x27b JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x27c PushV
	var_86_object = var_1_bool; // 0x27d MovT
	var_87_object = var_0_bool; // 0x27e MovT
	func_2019(var_87_object); // 0x27f NEW_2
	
Label_641:
	var_88_int = 43908; // 0x281 PushI
	var_89_bool = var_21_int == var_88_int; // 0x282 Eq
	if(var_89_bool == 0) goto Label_649; // 0x283 JumpB
	var_90_object = Obj(); var_91_object = Obj(); // 0x284 PushV
	var_90_object = var_1_bool; // 0x285 MovT
	var_91_object = var_0_bool; // 0x286 MovT
	func_2002(); // 0x287 NEW_2
	
Label_649:
	var_93_int = 19310; // 0x289 PushI
	var_94_bool = var_21_int == var_93_int; // 0x28a Eq
	if(var_94_bool == 0) goto Label_657; // 0x28b JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x28c PushV
	var_95_object = var_1_bool; // 0x28d MovT
	var_96_object = var_0_bool; // 0x28e MovT
	func_2002(); // 0x28f NEW_2
	
Label_657:
	var_97_int = 19048; // 0x291 PushI
	var_98_bool = var_20_float == var_97_int; // 0x292 Eq
	if(var_98_bool == 0) goto Label_818; // 0x293 JumpB
	var_99_bool = 0; // 0x294 PushV
	var_99_bool = 0; // 0x295 MovB
	var_100_bool = 0; // 0x296 PushV
	var_100_bool = 0; // 0x297 MovB
	var_101_bool = 0; var_102_object = Obj(); // 0x298 PushV
	var_102_object = var_1_bool; // 0x299 MovT
	func_2045(var_101_bool, var_102_object); // 0x29a NEW_2
	if(var_101_bool == 0) goto Label_675; // 0x29c JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x29d PushV
	var_110_object = var_1_bool; // 0x29e MovT
	func_2055(var_110_object); // 0x29f NEW_2
	if(var_109_bool == 0) goto Label_675; // 0x2a1 JumpB
	var_100_bool = 1; // 0x2a2 MovB
	
Label_675:
	if(var_100_bool == 0) goto Label_682; // 0x2a3 JumpB
	var_117_bool = 0; var_118_object = Obj(); // 0x2a4 PushV
	var_118_object = var_1_bool; // 0x2a5 MovT
	func_2067(var_118_object); // 0x2a6 NEW_2
	if(var_117_bool == 0) goto Label_682; // 0x2a8 JumpB
	var_99_bool = 1; // 0x2a9 MovB
	
Label_682:
	if(var_99_bool == 0) goto Label_708; // 0x2aa JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x2ab PushV
	var_123_object = var_1_bool; // 0x2ac MovT
	var_124_object = var_0_bool; // 0x2ad MovT
	func_2007(); // 0x2ae NEW_2
	var_127_string = ""; // 0x2b0 PushV
	var_127_string = "Neutral"; // 0x2b1 MovS
	func_592(var_21_int, var_127_string); // 0x2b2 NEW_2
	var_144_int = 517910; // 0x2b4 PushI
	SetMessage(var_144_int); // 0x2b5 TObjFunc
	ClearReplies(); // 0x2b7 TObjFunc
	var_145_int = 520406; // 0x2b9 PushI
	var_146_int = 21615; // 0x2ba PushI
	var_147_int = 21614; // 0x2bb PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x2bc TObjFunc
	var_148_int = 517911; // 0x2be PushI
	var_149_int = 19050; // 0x2bf PushI
	var_150_int = 19049; // 0x2c0 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x2c1 TObjFunc
	return 0; // 0x2c3 Return
	
Label_708:
	var_151_bool = 0; // 0x2c4 PushV
	var_151_bool = 0; // 0x2c5 MovB
	var_152_bool = 0; // 0x2c6 PushV
	var_152_bool = 0; // 0x2c7 MovB
	var_153_bool = 0; var_154_object = Obj(); // 0x2c8 PushV
	var_154_object = var_1_bool; // 0x2c9 MovT
	func_2045(var_153_bool, var_154_object); // 0x2ca NEW_2
	var_155_bool = var_153_bool == 0; // 0x2cc Not
	if(var_155_bool == 0) goto Label_724; // 0x2cd JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x2ce PushV
	var_157_object = var_1_bool; // 0x2cf MovT
	func_2055(var_157_object); // 0x2d0 NEW_2
	if(var_156_bool == 0) goto Label_724; // 0x2d2 JumpB
	var_152_bool = 1; // 0x2d3 MovB
	
Label_724:
	if(var_152_bool == 0) goto Label_731; // 0x2d4 JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0x2d5 PushV
	var_159_object = var_1_bool; // 0x2d6 MovT
	func_2079(var_159_object); // 0x2d7 NEW_2
	if(var_158_bool == 0) goto Label_731; // 0x2d9 JumpB
	var_151_bool = 1; // 0x2da MovB
	
Label_731:
	if(var_151_bool == 0) goto Label_752; // 0x2db JumpB
	var_164_object = Obj(); var_165_object = Obj(); // 0x2dc PushV
	var_164_object = var_1_bool; // 0x2dd MovT
	var_165_object = var_0_bool; // 0x2de MovT
	func_2013(); // 0x2df NEW_2
	var_168_string = ""; // 0x2e1 PushV
	var_168_string = "Neutral"; // 0x2e2 MovS
	func_592(var_21_int, var_168_string); // 0x2e3 NEW_2
	var_169_int = 517915; // 0x2e5 PushI
	SetMessage(var_169_int); // 0x2e6 TObjFunc
	ClearReplies(); // 0x2e8 TObjFunc
	var_170_int = 517916; // 0x2ea PushI
	var_171_int = 19055; // 0x2eb PushI
	var_172_int = 19054; // 0x2ec PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x2ed TObjFunc
	return 0; // 0x2ef Return
	
Label_752:
	var_173_bool = 0; var_174_object = Obj(); // 0x2f0 PushV
	var_174_object = var_1_bool; // 0x2f1 MovT
	func_2055(var_174_object); // 0x2f2 NEW_2
	if(var_173_bool == 0) goto Label_798; // 0x2f4 JumpB
	var_175_string = ""; // 0x2f5 PushV
	var_175_string = "Neutral"; // 0x2f6 MovS
	func_592(var_21_int, var_175_string); // 0x2f7 NEW_2
	var_176_int = 517919; // 0x2f9 PushI
	SetMessage(var_176_int); // 0x2fa TObjFunc
	ClearReplies(); // 0x2fc TObjFunc
	var_177_bool = 0; var_178_object = Obj(); // 0x2fe PushV
	var_178_object = var_1_bool; // 0x2ff MovT
	func_2045(var_177_bool, var_178_object); // 0x300 NEW_2
	if(var_177_bool == 0) goto Label_776; // 0x302 JumpB
	var_179_int = 517920; // 0x303 PushI
	var_180_int = 19061; // 0x304 PushI
	var_181_int = 19058; // 0x305 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x306 TObjFunc
	
Label_776:
	var_182_bool = 0; var_183_object = Obj(); // 0x308 PushV
	var_183_object = var_1_bool; // 0x309 MovT
	func_2045(var_182_bool, var_183_object); // 0x30a NEW_2
	var_184_bool = var_182_bool == 0; // 0x30c Not
	if(var_184_bool == 0) goto Label_787; // 0x30d JumpB
	var_185_int = 517921; // 0x30e PushI
	var_186_int = 19063; // 0x30f PushI
	var_187_int = 19059; // 0x310 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x311 TObjFunc
	
Label_787:
	var_188_int = 541718; // 0x313 PushI
	var_189_int = -1; // 0x314 PushI
	var_190_int = 43908; // 0x315 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x316 TObjFunc
	var_191_int = 517922; // 0x318 PushI
	var_192_int = -1; // 0x319 PushI
	var_193_int = 19060; // 0x31a PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x31b TObjFunc
	return 0; // 0x31d Return
	
Label_798:
	var_194_string = ""; // 0x31e PushV
	var_194_string = "Neutral"; // 0x31f MovS
	func_592(var_21_int, var_194_string); // 0x320 NEW_2
	var_195_int = 517927; // 0x322 PushI
	SetMessage(var_195_int); // 0x323 TObjFunc
	ClearReplies(); // 0x325 TObjFunc
	var_196_int = 518197; // 0x327 PushI
	var_197_int = -1; // 0x328 PushI
	var_198_int = 19310; // 0x329 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x32a TObjFunc
	var_199_int = 517928; // 0x32c PushI
	var_200_int = -1; // 0x32d PushI
	var_201_int = 19066; // 0x32e PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x32f TObjFunc
	return 0; // 0x331 Return
	
Label_818:
	var_202_int = 19063; // 0x332 PushI
	var_203_bool = var_20_float == var_202_int; // 0x333 Eq
	if(var_203_bool == 0) goto Label_836; // 0x334 JumpB
	var_204_string = ""; // 0x335 PushV
	var_204_string = "Neutral"; // 0x336 MovS
	func_592(var_21_int, var_204_string); // 0x337 NEW_2
	var_205_int = 517925; // 0x339 PushI
	SetMessage(var_205_int); // 0x33a TObjFunc
	ClearReplies(); // 0x33c TObjFunc
	var_206_int = 517926; // 0x33e PushI
	var_207_int = -1; // 0x33f PushI
	var_208_int = 19064; // 0x340 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x341 TObjFunc
	return 0; // 0x343 Return
	
Label_836:
	var_209_int = 19061; // 0x344 PushI
	var_210_bool = var_20_float == var_209_int; // 0x345 Eq
	if(var_210_bool == 0) goto Label_854; // 0x346 JumpB
	var_211_string = ""; // 0x347 PushV
	var_211_string = "Neutral"; // 0x348 MovS
	func_592(var_21_int, var_211_string); // 0x349 NEW_2
	var_212_int = 517923; // 0x34b PushI
	SetMessage(var_212_int); // 0x34c TObjFunc
	ClearReplies(); // 0x34e TObjFunc
	var_213_int = 517924; // 0x350 PushI
	var_214_int = -1; // 0x351 PushI
	var_215_int = 19062; // 0x352 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x353 TObjFunc
	return 0; // 0x355 Return
	
Label_854:
	var_216_int = 21620; // 0x356 PushI
	var_217_bool = var_20_float == var_216_int; // 0x357 Eq
	if(var_217_bool == 0) goto Label_857; // 0x358 JumpB
	
Label_857:
	var_218_int = 19055; // 0x359 PushI
	var_219_bool = var_20_float == var_218_int; // 0x35a Eq
	if(var_219_bool == 0) goto Label_875; // 0x35b JumpB
	var_220_string = ""; // 0x35c PushV
	var_220_string = "Neutral"; // 0x35d MovS
	func_592(var_21_int, var_220_string); // 0x35e NEW_2
	var_221_int = 517917; // 0x360 PushI
	SetMessage(var_221_int); // 0x361 TObjFunc
	ClearReplies(); // 0x363 TObjFunc
	var_222_int = 517918; // 0x365 PushI
	var_223_int = 21618; // 0x366 PushI
	var_224_int = 19056; // 0x367 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x368 TObjFunc
	return 0; // 0x36a Return
	
Label_875:
	var_225_int = 21618; // 0x36b PushI
	var_226_bool = var_20_float == var_225_int; // 0x36c Eq
	if(var_226_bool == 0) goto Label_898; // 0x36d JumpB
	var_227_string = ""; // 0x36e PushV
	var_227_string = "Neutral"; // 0x36f MovS
	func_592(var_21_int, var_227_string); // 0x370 NEW_2
	var_228_int = 520409; // 0x372 PushI
	SetMessage(var_228_int); // 0x373 TObjFunc
	ClearReplies(); // 0x375 TObjFunc
	var_229_int = 520413; // 0x377 PushI
	var_230_int = 21624; // 0x378 PushI
	var_231_int = 21623; // 0x379 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x37a TObjFunc
	var_232_int = 520418; // 0x37c PushI
	var_233_int = -1; // 0x37d PushI
	var_234_int = 21628; // 0x37e PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x37f TObjFunc
	return 0; // 0x381 Return
	
Label_898:
	var_235_int = 21624; // 0x382 PushI
	var_236_bool = var_20_float == var_235_int; // 0x383 Eq
	if(var_236_bool == 0) goto Label_921; // 0x384 JumpB
	var_237_string = ""; // 0x385 PushV
	var_237_string = "Neutral"; // 0x386 MovS
	func_592(var_21_int, var_237_string); // 0x387 NEW_2
	var_238_int = 520414; // 0x389 PushI
	SetMessage(var_238_int); // 0x38a TObjFunc
	ClearReplies(); // 0x38c TObjFunc
	var_239_int = 520415; // 0x38e PushI
	var_240_int = 21626; // 0x38f PushI
	var_241_int = 21625; // 0x390 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x391 TObjFunc
	var_242_int = 520419; // 0x393 PushI
	var_243_int = -1; // 0x394 PushI
	var_244_int = 21629; // 0x395 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x396 TObjFunc
	return 0; // 0x398 Return
	
Label_921:
	var_245_int = 21626; // 0x399 PushI
	var_246_bool = var_20_float == var_245_int; // 0x39a Eq
	if(var_246_bool == 0) goto Label_939; // 0x39b JumpB
	var_247_string = ""; // 0x39c PushV
	var_247_string = "Neutral"; // 0x39d MovS
	func_592(var_21_int, var_247_string); // 0x39e NEW_2
	var_248_int = 520416; // 0x3a0 PushI
	SetMessage(var_248_int); // 0x3a1 TObjFunc
	ClearReplies(); // 0x3a3 TObjFunc
	var_249_int = 520417; // 0x3a5 PushI
	var_250_int = -1; // 0x3a6 PushI
	var_251_int = 21627; // 0x3a7 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x3a8 TObjFunc
	return 0; // 0x3aa Return
	
Label_939:
	var_252_int = 19050; // 0x3ab PushI
	var_253_bool = var_20_float == var_252_int; // 0x3ac Eq
	if(var_253_bool == 0) goto Label_962; // 0x3ad JumpB
	var_254_string = ""; // 0x3ae PushV
	var_254_string = "Neutral"; // 0x3af MovS
	func_592(var_21_int, var_254_string); // 0x3b0 NEW_2
	var_255_int = 517912; // 0x3b2 PushI
	SetMessage(var_255_int); // 0x3b3 TObjFunc
	ClearReplies(); // 0x3b5 TObjFunc
	var_256_int = 517913; // 0x3b7 PushI
	var_257_int = -1; // 0x3b8 PushI
	var_258_int = 19051; // 0x3b9 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x3ba TObjFunc
	var_259_int = 517914; // 0x3bc PushI
	var_260_int = -1; // 0x3bd PushI
	var_261_int = 19052; // 0x3be PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x3bf TObjFunc
	return 0; // 0x3c1 Return
	
Label_962:
	var_262_int = 21615; // 0x3c2 PushI
	var_263_bool = var_20_float == var_262_int; // 0x3c3 Eq
	if(var_263_bool == 0) goto Label_980; // 0x3c4 JumpB
	var_264_string = ""; // 0x3c5 PushV
	var_264_string = "Neutral"; // 0x3c6 MovS
	func_592(var_21_int, var_264_string); // 0x3c7 NEW_2
	var_265_int = 520407; // 0x3c9 PushI
	SetMessage(var_265_int); // 0x3ca TObjFunc
	ClearReplies(); // 0x3cc TObjFunc
	var_266_int = 520408; // 0x3ce PushI
	var_267_int = 19050; // 0x3cf PushI
	var_268_int = 21616; // 0x3d0 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x3d1 TObjFunc
	return 0; // 0x3d3 Return
	
Label_980:
	var_3_object = 1; // 0x3d4 TMovB
	var_269_bool = 0; // 0x3d5 PushV
	func_1994(var_269_bool); // 0x3d6 NEW_2
	if(var_269_bool == 0) goto Label_988; // 0x3d8 JumpB
	lshStopAnimation(); // 0x3d9 Func
	goto Label_990; // 0x3db Jump
	
Label_990:
	return 0; // 0x3de Return
	
Label_988:
	StopAnimation(); // 0x3dc Func
	
Label_992:
	return 0; // 0x3e0 Return
}


task_8_event_11(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_object, var_15_object, var_16_object, var_17_string, var_18_bool, var_19_float, var_20_float, var_21_int)
{
	var_22_int = 1; // 0x47c PushI
	if(var_22_int == 0) goto Label_1188; // 0x47d JumpB
	func_1792(); // 0x47f NEW_2
	var_24_int = 21937; // 0x481 PushI
	var_25_bool = var_20_float == var_24_int; // 0x482 Eq
	if(var_25_bool == 0) goto Label_1176; // 0x483 JumpB
	var_26_string = ""; // 0x484 PushV
	var_26_string = "Neutral"; // 0x485 MovS
	func_1125(var_21_int, var_26_string); // 0x486 NEW_2
	var_43_int = 520726; // 0x488 PushI
	SetMessage(var_43_int); // 0x489 TObjFunc
	ClearReplies(); // 0x48b TObjFunc
	var_44_int = 520727; // 0x48d PushI
	var_45_int = -1; // 0x48e PushI
	var_46_int = 21938; // 0x48f PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0x490 TObjFunc
	var_47_int = 520728; // 0x492 PushI
	var_48_int = -1; // 0x493 PushI
	var_49_int = 21939; // 0x494 PushI
	AddReply(var_47_int, var_48_int, var_49_int); // 0x495 TObjFunc
	return 0; // 0x497 Return
	
Label_1176:
	var_3_object = 1; // 0x498 TMovB
	var_50_bool = 0; // 0x499 PushV
	func_1994(var_50_bool); // 0x49a NEW_2
	if(var_50_bool == 0) goto Label_1184; // 0x49c JumpB
	lshStopAnimation(); // 0x49d Func
	goto Label_1186; // 0x49f Jump
	
Label_1186:
	return 0; // 0x4a2 Return
	
Label_1184:
	StopAnimation(); // 0x4a0 Func
	
Label_1188:
	return 0; // 0x4a4 Return
}


task_10_event_11(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_int, var_18_int, var_19_float, var_20_float, var_21_int)
{
	var_22_int = 1; // 0x545 PushI
	if(var_22_int == 0) goto Label_1402; // 0x546 JumpB
	func_1792(); // 0x548 NEW_2
	var_24_int = 43906; // 0x54a PushI
	var_25_bool = var_21_int == var_24_int; // 0x54b Eq
	if(var_25_bool == 0) goto Label_1362; // 0x54c JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x54d PushV
	var_26_object = var_1_bool; // 0x54e MovT
	var_27_object = var_0_bool; // 0x54f MovT
	func_2002(); // 0x550 NEW_2
	
Label_1362:
	var_29_int = 43905; // 0x552 PushI
	var_30_bool = var_20_float == var_29_int; // 0x553 Eq
	if(var_30_bool == 0) goto Label_1390; // 0x554 JumpB
	var_31_string = ""; // 0x555 PushV
	var_31_string = "Neutral"; // 0x556 MovS
	func_1326(var_21_int, var_31_string); // 0x557 NEW_2
	var_48_int = 541715; // 0x559 PushI
	SetMessage(var_48_int); // 0x55a TObjFunc
	ClearReplies(); // 0x55c TObjFunc
	var_49_int = 541716; // 0x55e PushI
	var_50_int = -1; // 0x55f PushI
	var_51_int = 43906; // 0x560 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0x561 TObjFunc
	var_52_int = 541717; // 0x563 PushI
	var_53_int = -1; // 0x564 PushI
	var_54_int = 43907; // 0x565 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0x566 TObjFunc
	var_55_int = 541742; // 0x568 PushI
	var_56_int = -1; // 0x569 PushI
	var_57_int = 43939; // 0x56a PushI
	AddReply(var_55_int, var_56_int, var_57_int); // 0x56b TObjFunc
	return 0; // 0x56d Return
	
Label_1390:
	var_3_object = 1; // 0x56e TMovB
	var_58_bool = 0; // 0x56f PushV
	func_1994(var_58_bool); // 0x570 NEW_2
	if(var_58_bool == 0) goto Label_1398; // 0x572 JumpB
	lshStopAnimation(); // 0x573 Func
	goto Label_1400; // 0x575 Jump
	
Label_1400:
	return 0; // 0x578 Return
	
Label_1398:
	StopAnimation(); // 0x576 Func
	
Label_1402:
	return 0; // 0x57a Return
}


task_11_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	func_1978(); // 0x611 NEW_2
	TaskCall(0); // 0x614 TaskCall
	func_0(); // 0x615 NEW_2
	TaskReturn(); // 0x616 TaskReturn
	return 0; // 0x618 Return
}


task_11_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0; // 0x619 PushV
	IsOverrideActive(var_22_bool); // 0x61a Func
	var_23_bool = var_22_bool == 0; // 0x61c Not
	if(var_23_bool == 0) goto Label_1576; // 0x61d JumpB
	EventDisable(0); // 0x61e EventDisable
	var_24_bool = 0; var_25_object = Obj(); // 0x61f PushV
	var_25_object = var_20_object; // 0x620 Mov
	func_1600(var_25_object); // 0x621 NEW_2
	EventEnable(0); // 0x623 EventEnable
	var_38_object = Obj(); // 0x624 PushV
	var_38_object = var_20_object; // 0x625 Mov
	func_2208(var_21_bool, var_22_bool, var_38_object); // 0x626 NEW_2
	
Label_1576:
	return 2; // 0x628 Return
}


	event_26(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int, var_20_int, var_21_float, var_24_string)
	{
	var_25_bool = 0; var_26_bool = 0; // 0x7a2 PushV
	var_27_string = "cleanup"; // 0x7a3 PushS
	var_28_bool = var_24_string == var_27_string; // 0x7a4 Eq
	if(var_28_bool == 0) goto Label_1971; // 0x7a5 JumpB
	var_29_bool = GlobalVars[1]; // 0x7a6 PushGE
	var_29_bool = 1; // 0x7a7 MovB
	GlobalVars[1] = var_29_bool; // 0x7a8 PopGE
	IsLoaded(var_26_bool); // 0x7a9 Func
	var_30_bool = var_26_bool == 0; // 0x7ab Not
	if(var_30_bool == 0) goto Label_1970; // 0x7ac JumpB
	var_31_object = Obj(); // 0x7ad PushV
	func_1814(var_31_object); // 0x7ae NEW_2
	RemoveActor(var_31_object); // 0x7b0 Func
	
Label_1970:
	goto Label_1977; // 0x7b2 Jump
	
Label_1977:
	return 2; // 0x7b9 Return
	
Label_1971:
	var_34_string = "restore"; // 0x7b3 PushS
	var_35_bool = var_24_string == var_34_string; // 0x7b4 Eq
	if(var_35_bool == 0) goto Label_1977; // 0x7b5 JumpB
	var_36_bool = GlobalVars[1]; // 0x7b6 PushGE
	var_36_bool = 0; // 0x7b7 MovB
	GlobalVars[1] = var_36_bool; // 0x7b8 PopGE
	}


event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	var_20_bool = GlobalVars[1]; // 0x7ba PushGE
	if(var_20_bool == 0) goto Label_1985; // 0x7bb JumpB
	var_21_object = Obj(); // 0x7bc PushV
	func_1814(var_21_object); // 0x7bd NEW_2
	RemoveActor(var_21_object); // 0x7bf Func
	
Label_1985:
	return 0; // 0x7c1 Return
}


event_9(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int, var_20_int, var_21_float)
{
	var_22_int = 0; // 0x891 PushI
	var_23_bool = var_20_int == var_22_int; // 0x892 Eq
	if(var_23_bool == 0) goto Label_2201; // 0x893 JumpB
	var_24_string = ""; // 0x894 PushV
	var_24_string = "cleanup"; // 0x895 MovS
	func_1954(); // 0x896 NEW_2
	goto Label_2207; // 0x898 Jump
	
Label_2207:
	return 0; // 0x89f Return
	
Label_2201:
	var_37_int = 1; // 0x899 PushI
	var_38_bool = var_20_int == var_37_int; // 0x89a Eq
	if(var_38_bool == 0) goto Label_2207; // 0x89b JumpB
	func_2152(); // 0x89d NEW_2
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_float, var_18_float, var_19_int)
{
	func_2152(); // 0x57c NEW_2
	var_49_int = 0; // 0x57e PushI
	var_50_int = 144; // 0x57f PushI
	SetTimeEvent(var_49_int, var_50_int); // 0x580 Func
	var_51_int = 1; // 0x582 PushI
	var_52_int = 24; // 0x583 PushI
	SetTimeEvent(var_51_int, var_52_int); // 0x584 Func
	var_53_int = 1; // 0x586 PushI
	var_54_int = 48; // 0x587 PushI
	SetTimeEvent(var_53_int, var_54_int); // 0x588 Func
	var_55_int = 1; // 0x58a PushI
	var_56_int = 72; // 0x58b PushI
	SetTimeEvent(var_55_int, var_56_int); // 0x58c Func
	var_57_int = 1; // 0x58e PushI
	var_58_int = 96; // 0x58f PushI
	SetTimeEvent(var_57_int, var_58_int); // 0x590 Func
	var_59_int = 1; // 0x592 PushI
	var_60_int = 120; // 0x593 PushI
	SetTimeEvent(var_59_int, var_60_int); // 0x594 Func
	func_1434(var_17_float, var_18_float, var_19_int); // 0x597 NEW_2
	return 0; // 0x599 Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_102_bool = 0; // 0x2 PushV
	func_1620(var_102_bool); // 0x3 NEW_2
	var_103_bool = var_102_bool == 0; // 0x5 Not
	if(var_103_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_1792()
{
	var_23_bool = 0; // 0x700 PushV
	func_1994(var_23_bool); // 0x701 NEW_2
	if(var_23_bool == 0) goto Label_1798; // 0x703 JumpB
	lshStopSpeech(); // 0x704 Func
	
Label_1798:
	return 0; // 0x706 Return
}


func_1924(var_206_int)
{
	var_207_int = 0; var_208_bool = 0; var_209_int = 0; var_210_bool = 0; // 0x784 PushV
	var_209_int = 0; // 0x785 MovI
	
Label_1926:
	var_211_string = "all"; // 0x786 PushS
	var_212_string = ""; var_213_int = 0; // 0x787 PushV
	var_213_int = var_209_int; // 0x788 Mov
	func_1917(var_212_string, var_213_int); // 0x789 NEW_2
	HasAnimation(var_210_bool, var_211_string, var_212_string); // 0x78b Func
	var_217_bool = var_210_bool == 0; // 0x78d Not
	if(var_217_bool == 0) goto Label_1936; // 0x78e JumpB
	goto Label_1939; // 0x78f Jump
	
Label_1939:
	var_206_int = var_209_int; // 0x793 Mov
	return 4; // 0x794 Return
	
Label_1936:
	var_218_int = 1; // 0x790 PushI
	var_209_int = var_209_int + var_218_int; // 0x791 Add2
	goto Label_1926; // 0x792 Jump
}


func_1799(var_29_string, var_30_int, var_31_int, var_32_int)
{
	var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x707 PushV
	var_37_bool = 0; var_38_int = 0; var_39_int = 0; // 0x708 PushV
	var_38_int = var_30_int; // 0x709 Mov
	var_39_int = var_31_int; // 0x70a Mov
	func_1838(var_37_bool, var_38_int, var_39_int); // 0x70b NEW_2
	if(var_37_bool == 0) goto Label_1813; // 0x70d JumpB
	irand(var_35_int, var_32_int); // 0x70e Func
	var_42_int = 0; // 0x710 PushI
	var_43_int = 1; // 0x711 PushI
	var_44_int = var_35_int + var_43_int; // 0x712 Add
	AddItem(var_36_bool, var_29_string, var_42_int, var_44_int); // 0x713 Func
	
Label_1813:
	return 4; // 0x715 Return
}


func_2055(var_220_bool)
{
	var_222_int = 0; var_223_string = ""; // 0x808 PushV
	var_223_string = "b1q02"; // 0x809 MovS
	func_1853(var_222_int, var_223_string); // 0x80a NEW_2
	var_226_int = 1; // 0x80c PushI
	var_227_bool = var_222_int == var_226_int; // 0x80d Eq
	if(var_227_bool == 0) goto Label_2065; // 0x80e JumpB
	var_220_bool = 1; // 0x80f MovB
	return 0; // 0x810 Return
	
Label_2065:
	var_220_bool = 0; // 0x811 MovB
	return 0; // 0x812 Return
}


func_396(var_0_bool, var_1_bool, var_2_object, var_3_object, var_203_object, var_204_object)
{
	var_0_bool = var_204_object; // 0x18d TMov
	var_1_bool = var_203_object; // 0x18e TMov
	var_3_object = 0; // 0x18f TMovB
	var_209_int = 1; // 0x190 PushI
	if(var_209_int == 0) goto Label_562; // 0x191 JumpB
	var_210_bool = 0; // 0x192 PushV
	var_210_bool = 0; // 0x193 MovB
	var_211_bool = 0; // 0x194 PushV
	var_211_bool = 0; // 0x195 MovB
	var_212_bool = 0; var_213_object = Obj(); // 0x196 PushV
	var_213_object = var_1_bool; // 0x197 MovT
	func_2045(var_212_bool, var_213_object); // 0x198 NEW_2
	if(var_212_bool == 0) goto Label_417; // 0x19a JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x19b PushV
	var_221_object = var_1_bool; // 0x19c MovT
	func_2055(var_221_object); // 0x19d NEW_2
	if(var_220_bool == 0) goto Label_417; // 0x19f JumpB
	var_211_bool = 1; // 0x1a0 MovB
	
Label_417:
	if(var_211_bool == 0) goto Label_424; // 0x1a1 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x1a2 PushV
	var_229_object = var_1_bool; // 0x1a3 MovT
	func_2067(var_229_object); // 0x1a4 NEW_2
	if(var_228_bool == 0) goto Label_424; // 0x1a6 JumpB
	var_210_bool = 1; // 0x1a7 MovB
	
Label_424:
	if(var_210_bool == 0) goto Label_450; // 0x1a8 JumpB
	var_234_object = Obj(); var_235_object = Obj(); // 0x1a9 PushV
	var_234_object = var_1_bool; // 0x1aa MovT
	var_235_object = var_0_bool; // 0x1ab MovT
	func_2007(); // 0x1ac NEW_2
	var_238_string = ""; // 0x1ae PushV
	var_238_string = "Neutral"; // 0x1af MovS
	func_592(var_204_object, var_238_string); // 0x1b0 NEW_2
	var_246_int = 517910; // 0x1b2 PushI
	SetMessage(var_246_int); // 0x1b3 TObjFunc
	ClearReplies(); // 0x1b5 TObjFunc
	var_247_int = 520406; // 0x1b7 PushI
	var_248_int = 21615; // 0x1b8 PushI
	var_249_int = 21614; // 0x1b9 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x1ba TObjFunc
	var_250_int = 517911; // 0x1bc PushI
	var_251_int = 19050; // 0x1bd PushI
	var_252_int = 19049; // 0x1be PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x1bf TObjFunc
	goto Label_562; // 0x1c1 Jump
	
Label_562:
	var_253_bool = 0; // 0x232 PushV
	func_1994(var_253_bool); // 0x233 NEW_2
	if(var_253_bool == 0) goto Label_577; // 0x235 JumpB
	
Label_566:
	lshWaitForAnimEnd(); // 0x236 Func
	var_254_object = var_3_object; // 0x238 PushT
	if(var_254_object == 0) goto Label_571; // 0x239 JumpB
	goto Label_576; // 0x23a Jump
	
Label_576:
	goto Label_591; // 0x240 Jump
	
Label_591:
	return 0; // 0x24f Return
	
Label_571:
	var_255_string = ""; // 0x23b PushV
	var_255_string = var_2_object; // 0x23c MovT
	func_1761(var_255_string); // 0x23d NEW_2
	goto Label_566; // 0x23f Jump
	
Label_577:
	var_256_string = "all"; // 0x241 PushS
	var_257_string = "idle"; // 0x242 PushS
	PlayAnimation(var_256_string, var_257_string); // 0x243 Func
	
Label_581:
	WaitForAnimEnd(); // 0x245 Func
	var_258_object = var_3_object; // 0x247 PushT
	if(var_258_object == 0) goto Label_586; // 0x248 JumpB
	goto Label_591; // 0x249 Jump
	
Label_586:
	var_259_string = "all"; // 0x24a PushS
	var_260_string = "idle"; // 0x24b PushS
	PlayAnimation(var_259_string, var_260_string); // 0x24c Func
	goto Label_581; // 0x24e Jump
	
Label_450:
	var_261_bool = 0; // 0x1c2 PushV
	var_261_bool = 0; // 0x1c3 MovB
	var_262_bool = 0; // 0x1c4 PushV
	var_262_bool = 0; // 0x1c5 MovB
	var_263_bool = 0; var_264_object = Obj(); // 0x1c6 PushV
	var_264_object = var_1_bool; // 0x1c7 MovT
	func_2045(var_263_bool, var_264_object); // 0x1c8 NEW_2
	var_265_bool = var_263_bool == 0; // 0x1ca Not
	if(var_265_bool == 0) goto Label_466; // 0x1cb JumpB
	var_266_bool = 0; var_267_object = Obj(); // 0x1cc PushV
	var_267_object = var_1_bool; // 0x1cd MovT
	func_2055(var_267_object); // 0x1ce NEW_2
	if(var_266_bool == 0) goto Label_466; // 0x1d0 JumpB
	var_262_bool = 1; // 0x1d1 MovB
	
Label_466:
	if(var_262_bool == 0) goto Label_473; // 0x1d2 JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x1d3 PushV
	var_269_object = var_1_bool; // 0x1d4 MovT
	func_2079(var_269_object); // 0x1d5 NEW_2
	if(var_268_bool == 0) goto Label_473; // 0x1d7 JumpB
	var_261_bool = 1; // 0x1d8 MovB
	
Label_473:
	if(var_261_bool == 0) goto Label_494; // 0x1d9 JumpB
	var_274_object = Obj(); var_275_object = Obj(); // 0x1da PushV
	var_274_object = var_1_bool; // 0x1db MovT
	var_275_object = var_0_bool; // 0x1dc MovT
	func_2013(); // 0x1dd NEW_2
	var_278_string = ""; // 0x1df PushV
	var_278_string = "Neutral"; // 0x1e0 MovS
	func_592(var_204_object, var_278_string); // 0x1e1 NEW_2
	var_279_int = 517915; // 0x1e3 PushI
	SetMessage(var_279_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_280_int = 517916; // 0x1e8 PushI
	var_281_int = 19055; // 0x1e9 PushI
	var_282_int = 19054; // 0x1ea PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x1eb TObjFunc
	goto Label_562; // 0x1ed Jump
	
Label_494:
	var_283_bool = 0; var_284_object = Obj(); // 0x1ee PushV
	var_284_object = var_1_bool; // 0x1ef MovT
	func_2055(var_284_object); // 0x1f0 NEW_2
	if(var_283_bool == 0) goto Label_540; // 0x1f2 JumpB
	var_285_string = ""; // 0x1f3 PushV
	var_285_string = "Neutral"; // 0x1f4 MovS
	func_592(var_204_object, var_285_string); // 0x1f5 NEW_2
	var_286_int = 517919; // 0x1f7 PushI
	SetMessage(var_286_int); // 0x1f8 TObjFunc
	ClearReplies(); // 0x1fa TObjFunc
	var_287_bool = 0; var_288_object = Obj(); // 0x1fc PushV
	var_288_object = var_1_bool; // 0x1fd MovT
	func_2045(var_287_bool, var_288_object); // 0x1fe NEW_2
	if(var_287_bool == 0) goto Label_518; // 0x200 JumpB
	var_289_int = 517920; // 0x201 PushI
	var_290_int = 19061; // 0x202 PushI
	var_291_int = 19058; // 0x203 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x204 TObjFunc
	
Label_518:
	var_292_bool = 0; var_293_object = Obj(); // 0x206 PushV
	var_293_object = var_1_bool; // 0x207 MovT
	func_2045(var_292_bool, var_293_object); // 0x208 NEW_2
	var_294_bool = var_292_bool == 0; // 0x20a Not
	if(var_294_bool == 0) goto Label_529; // 0x20b JumpB
	var_295_int = 517921; // 0x20c PushI
	var_296_int = 19063; // 0x20d PushI
	var_297_int = 19059; // 0x20e PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x20f TObjFunc
	
Label_529:
	var_298_int = 541718; // 0x211 PushI
	var_299_int = -1; // 0x212 PushI
	var_300_int = 43908; // 0x213 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x214 TObjFunc
	var_301_int = 517922; // 0x216 PushI
	var_302_int = -1; // 0x217 PushI
	var_303_int = 19060; // 0x218 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x219 TObjFunc
	goto Label_562; // 0x21b Jump
	
Label_540:
	var_304_string = ""; // 0x21c PushV
	var_304_string = "Neutral"; // 0x21d MovS
	func_592(var_204_object, var_304_string); // 0x21e NEW_2
	var_305_int = 517927; // 0x220 PushI
	SetMessage(var_305_int); // 0x221 TObjFunc
	ClearReplies(); // 0x223 TObjFunc
	var_306_int = 518197; // 0x225 PushI
	var_307_int = -1; // 0x226 PushI
	var_308_int = 19310; // 0x227 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x228 TObjFunc
	var_309_int = 517928; // 0x22a PushI
	var_310_int = -1; // 0x22b PushI
	var_311_int = 19066; // 0x22c PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x22d TObjFunc
	goto Label_562; // 0x22f Jump
}


func_13(var_0_bool)
{
	DoTrade(); // 0xe Func
	var_0_bool = 0; // 0x10 TMovB
	
Label_17:
	var_347_bool = 0; // 0x11 PushV
	func_1994(var_347_bool); // 0x12 NEW_2
	if(var_347_bool == 0) goto Label_28; // 0x14 JumpB
	var_348_string = ""; // 0x15 PushV
	var_348_string = "Neutral"; // 0x16 MovS
	func_1761(var_348_string); // 0x17 NEW_2
	lshWaitForAnimEnd(); // 0x19 Func
	goto Label_34; // 0x1b Jump
	
Label_34:
	var_349_bool = var_0_bool; // 0x22 PushT
	if(var_349_bool == 0) goto Label_37; // 0x23 JumpB
	return 0; // 0x24 Return
	
Label_37:
	goto Label_17; // 0x25 Jump
	
Label_28:
	WaitForAnimEnd(); // 0x1c Func
	var_350_string = "all"; // 0x1e PushS
	var_351_string = "idle"; // 0x1f PushS
	PlayAnimation(var_350_string, var_351_string); // 0x20 Func
}


func_2067(var_228_bool)
{
	var_230_int = 0; var_231_string = ""; // 0x814 PushV
	var_231_string = "oob1Gorbun1"; // 0x815 MovS
	func_1853(var_230_int, var_231_string); // 0x816 NEW_2
	var_232_int = 0; // 0x818 PushI
	var_233_bool = var_230_int == var_232_int; // 0x819 Eq
	if(var_233_bool == 0) goto Label_2077; // 0x81a JumpB
	var_228_bool = 1; // 0x81b MovB
	return 0; // 0x81c Return
	
Label_2077:
	var_228_bool = 0; // 0x81d MovB
	return 0; // 0x81e Return
}


func_1941(var_88_string, var_89_int)
{
	var_90_int = 0; // 0x796 PushI
	var_91_bool = var_89_int == var_90_int; // 0x797 Eq
	if(var_91_bool == 0) goto Label_1949; // 0x798 JumpB
	var_92_string = "pt_"; // 0x799 PushS
	var_93_string = GlobalVars[0]; // 0x79a PushGE
	var_88_string = var_92_string + var_93_string; // 0x79b Add2
	goto Label_1953; // 0x79c Jump
	
Label_1953:
	return 0; // 0x7a1 Return
	
Label_1949:
	var_94_string = "pt_"; // 0x79d PushS
	var_95_string = GlobalVars[0]; // 0x79e PushGE
	var_96_int = var_94_string + var_95_string; // 0x79f Add
	var_88_string = var_96_int + var_89_int; // 0x7a0 Add2
}


func_1814(var_31_object)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x716 PushV
	self(var_33_object); // 0x717 Func
	var_31_object = var_33_object; // 0x719 Mov
	return 2; // 0x71a Return
}


func_1434(var_0_bool, var_1_bool, var_2_object)
{
	var_61_object = Obj(); var_62_bool = 0; var_63_int = 0; var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_object = Obj(); var_73_bool = 0; var_74_int = 0; var_75_bool = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_cvector = CVector(0,0,0); // 0x59a PushV
	var_83_bool = 1; // 0x59b PushB
	SensePlayerOnly(var_83_bool); // 0x59c Func
	func_1522(); // 0x59f NEW_2
	GetScene(var_72_object); // 0x5a1 Func
	var_2_object = 0; // 0x5a3 TMovI
	
Label_1444:
	var_88_string = ""; var_89_int = 0; // 0x5a4 PushV
	var_89_int = var_2_object; // 0x5a5 MovT
	func_1941(var_88_string, var_89_int); // 0x5a6 NEW_2
	GetLocator(var_88_string, var_73_bool); // 0x5a8 ObjFunc
	var_97_bool = var_73_bool == 0; // 0x5aa Not
	if(var_97_bool == 0) goto Label_1453; // 0x5ab JumpB
	goto Label_1456; // 0x5ac Jump
	
Label_1456:
	var_98_bool = 0; // 0x5b0 PushV
	func_1620(var_98_bool); // 0x5b1 NEW_2
	var_101_bool = var_98_bool == 0; // 0x5b3 Not
	if(var_101_bool == 0) goto Label_1466; // 0x5b4 JumpB
	TaskCall(0); // 0x5b6 TaskCall
	func_0(); // 0x5b7 NEW_2
	TaskReturn(); // 0x5b8 TaskReturn
	
Label_1466:
	func_1530(var_81_bool, var_82_cvector); // 0x5bb NEW_2
	
Label_1469:
	irand(var_74_int, var_81_bool); // 0x5bd Func
	var_122_string = ""; var_123_int = 0; // 0x5bf PushV
	var_123_int = var_74_int; // 0x5c0 Mov
	func_1941(var_122_string, var_123_int); // 0x5c1 NEW_2
	GetLocator(var_122_string, var_75_bool, var_76_cvector, var_77_cvector); // 0x5c3 ObjFunc
	var_124_cvector = CVector(0,0,0); // 0x5c5 PushV
	func_1577(var_124_cvector); // 0x5c6 NEW_2
	var_78_cvector = var_76_cvector - var_124_cvector; // 0x5c8 Sub2
	var_127_float = 0; var_128_cvector = CVector(0,0,0); // 0x5c9 PushV
	var_128_cvector = var_78_cvector; // 0x5ca Mov
	func_1843(var_127_float, var_128_cvector); // 0x5cb NEW_2
	var_136_bool = var_127_float > var_1_bool; // 0x5cd GT
	if(var_136_bool == 0) goto Label_1516; // 0x5ce JumpB
	GetHeight(var_79_float); // 0x5cf Func
	var_80_cvector = var_76_cvector; // 0x5d1 Mov
	var_137_float = GetByIndex(var_80_cvector, 1); // 0x5d2 PushE
	var_137_float = var_137_float + var_79_float; // 0x5d3 Add2
	SetByIndex(var_80_cvector, 1) = var_137_float; // 0x5d4 PopE
	CanReachByPF(var_81_bool, var_80_cvector); // 0x5d5 Func
	var_138_bool = var_81_bool; // 0x5d7 Push
	if(var_138_bool == 0) goto Label_1516; // 0x5d8 JumpB
	var_139_int = var_78_cvector | var_78_cvector; // 0x5d9 Or
	var_140_float = sqrt(var_139_int); // 0x5da Sqrt
	var_141_float = var_0_bool / var_140_float; // 0x5db Div
	var_142_float = var_78_cvector * var_141_float; // 0x5dc Mult
	var_82_cvector = var_76_cvector - var_142_float; // 0x5dd Sub2
	var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); // 0x5de PushV
	var_144_cvector = var_82_cvector; // 0x5df Mov
	var_145_cvector = var_77_cvector; // 0x5e0 Mov
	TaskCall(2); // 0x5e1 TaskCall
	func_53(var_146_bool, var_143_bool, var_144_cvector, var_145_cvector); // 0x5e2 NEW_2
	TaskReturn(); // 0x5e3 TaskReturn
	if(var_146_bool == 0) goto Label_1516; // 0x5e5 JumpB
	var_170_int = 0; // 0x5e6 PushV
	var_170_int = var_74_int; // 0x5e7 Mov
	TaskCall(4); // 0x5e8 TaskCall
	func_238(var_170_int); // 0x5e9 NEW_2
	TaskReturn(); // 0x5ea TaskReturn
	
Label_1516:
	var_223_int = 1; // 0x5ec PushI
	Sleep(var_223_int); // 0x5ed Func
	goto Label_1469; // 0x5ef Jump
	
Label_1453:
	var_224_int = 1; // 0x5ad PushI
	var_2_object = var_2_object + var_224_int; // 0x5ae Add2
	goto Label_1444; // 0x5af Jump
}


func_1820(var_81_cvector, var_82_cvector)
{
	var_84_float = 0; var_85_float = 0; // 0x71c PushV
	var_86_int = var_82_cvector | var_82_cvector; // 0x71d Or
	var_85_float = sqrt(var_86_int); // 0x71e Sqrt2
	var_87_float = 0.0; // 0x71f PushF
	var_88_bool = var_85_float < var_87_float; // 0x720 LT
	if(var_88_bool == 0) goto Label_1828; // 0x721 JumpB
	var_81_cvector = CVector(0.0, 0.0, 0.0); // 0x722 MovV
	return 2; // 0x723 Return
	
Label_1828:
	var_81_cvector = var_82_cvector / var_82_cvector; // 0x724 Div2
	return 2; // 0x725 Return
}


func_1693()
{
	var_165_bool = 0; var_166_bool = 0; // 0x69d PushV
	CameraSwitchToNormal(); // 0x69e Func
	var_167_bool = 0; // 0x6a0 PushV
	func_1994(var_167_bool); // 0x6a1 NEW_2
	if(var_167_bool == 0) goto Label_1701; // 0x6a3 JumpB
	goto Label_1709; // 0x6a4 Jump
	
Label_1709:
	return 2; // 0x6ad Return
	
Label_1701:
	var_168_string = "head"; // 0x6a5 PushS
	HasAnimationTrack(var_166_bool, var_168_string); // 0x6a6 Func
	var_169_bool = var_166_bool; // 0x6a8 Push
	if(var_169_bool == 0) goto Label_1709; // 0x6a9 JumpB
	var_170_string = "head"; // 0x6aa PushS
	UnlookAsync(var_170_string); // 0x6ab Func
}


func_2079(var_268_bool)
{
	var_270_int = 0; var_271_string = ""; // 0x820 PushV
	var_271_string = "oob1Gorbun2"; // 0x821 MovS
	func_1853(var_270_int, var_271_string); // 0x822 NEW_2
	var_272_int = 0; // 0x824 PushI
	var_273_bool = var_270_int == var_272_int; // 0x825 Eq
	if(var_273_bool == 0) goto Label_2089; // 0x826 JumpB
	var_268_bool = 1; // 0x827 MovB
	return 0; // 0x828 Return
	
Label_2089:
	var_268_bool = 0; // 0x829 MovB
	return 0; // 0x82a Return
}


func_2208(var_38_object, var_184_object, var_356_object)
{
	var_39_int = 0; var_40_int = 0; // 0x8a0 PushV
	var_41_string = "mt_gorbun"; // 0x8a1 PushS
	GetVariable(var_41_string, var_40_int); // 0x8a2 Func
	var_42_bool = var_40_int == 0; // 0x8a4 Not
	if(var_42_bool == 0) goto Label_2224; // 0x8a5 JumpB
	var_43_int = 0; var_44_object = Obj(); // 0x8a6 PushV
	var_44_object = var_38_object; // 0x8a7 Mov
	TaskCall(7); // 0x8a8 TaskCall
	func_993(var_45_object, var_43_int, var_44_object); // 0x8a9 NEW_2
	TaskReturn(); // 0x8aa TaskReturn
	var_171_string = "mt_gorbun"; // 0x8ac PushS
	var_172_int = 1; // 0x8ad PushI
	SetVariable(var_171_string, var_172_int); // 0x8ae Func
	
Label_2224:
	var_173_bool = 0; var_174_int = 0; // 0x8b0 PushV
	var_174_int = 1; // 0x8b1 MovI
	func_1911(var_173_bool, var_174_int); // 0x8b2 NEW_2
	if(var_173_bool == 0) goto Label_2257; // 0x8b4 JumpB
	var_181_int = 1000; // 0x8b5 PushI
	var_182_int = 0; var_183_object = Obj(); // 0x8b6 PushV
	var_183_object = var_38_object; // 0x8b7 Mov
	TaskCall(5); // 0x8b8 TaskCall
	func_322(var_184_object, var_182_int, var_183_object); // 0x8b9 NEW_2
	TaskReturn(); // 0x8ba TaskReturn
	var_314_bool = var_181_int == var_184_object; // 0x8bc Eq
	if(var_314_bool == 0) goto Label_2256; // 0x8bd JumpB
	var_315_bool = 0; var_316_object = Obj(); var_317_float = 0; // 0x8be PushV
	var_316_object = var_38_object; // 0x8bf Mov
	var_317_float = 110; // 0x8c0 MovI
	func_1710(var_316_object, var_317_float); // 0x8c1 NEW_2
	var_344_bool = var_315_bool == 0; // 0x8c3 Not
	if(var_344_bool == 0) goto Label_2246; // 0x8c4 JumpB
	return 2; // 0x8c5 Return
	
Label_2246:
	var_345_object = Obj(); // 0x8c6 PushV
	var_345_object = var_38_object; // 0x8c7 Mov
	TaskCall(1); // 0x8c8 TaskCall
	func_13(var_345_object); // 0x8c9 NEW_2
	TaskReturn(); // 0x8ca TaskReturn
	var_352_object = Obj(); // 0x8cc PushV
	var_352_object = var_38_object; // 0x8cd Mov
	func_1757(); // 0x8ce NEW_2
	
Label_2256:
	return 2; // 0x8d0 Return
	
Label_2257:
	var_353_int = 1000; // 0x8d1 PushI
	var_354_int = 0; var_355_object = Obj(); // 0x8d2 PushV
	var_355_object = var_38_object; // 0x8d3 Mov
	TaskCall(9); // 0x8d4 TaskCall
	func_1189(var_356_object, var_354_int, var_355_object); // 0x8d5 NEW_2
	TaskReturn(); // 0x8d6 TaskReturn
	var_410_bool = var_353_int == var_356_object; // 0x8d8 Eq
	if(var_410_bool == 0) goto Label_2284; // 0x8d9 JumpB
	var_411_bool = 0; var_412_object = Obj(); var_413_float = 0; // 0x8da PushV
	var_412_object = var_38_object; // 0x8db Mov
	var_413_float = 110; // 0x8dc MovI
	func_1710(var_412_object, var_413_float); // 0x8dd NEW_2
	var_414_bool = var_411_bool == 0; // 0x8df Not
	if(var_414_bool == 0) goto Label_2274; // 0x8e0 JumpB
	return 2; // 0x8e1 Return
	
Label_2274:
	var_415_object = Obj(); // 0x8e2 PushV
	var_415_object = var_38_object; // 0x8e3 Mov
	TaskCall(1); // 0x8e4 TaskCall
	func_13(var_415_object); // 0x8e5 NEW_2
	TaskReturn(); // 0x8e6 TaskReturn
	var_417_object = Obj(); // 0x8e8 PushV
	var_417_object = var_38_object; // 0x8e9 Mov
	func_1757(); // 0x8ea NEW_2
	
Label_2284:
	return 2; // 0x8ec Return
}


func_1189(var_0_bool, var_354_int, var_355_object)
{
	var_357_object = Obj(); var_358_bool = 0; var_359_int = 0; var_360_bool = 0; var_361_object = Obj(); var_362_bool = 0; var_363_int = 0; var_364_bool = 0; // 0x4a5 PushV
	var_0_bool = var_355_object; // 0x4a6 TMov
	var_365_bool = 0; var_366_object = Obj(); var_367_float = 0; // 0x4a7 PushV
	var_366_object = var_355_object; // 0x4a8 Mov
	var_367_float = 100.0; // 0x4a9 MovF
	func_1625(var_366_object, var_367_float); // 0x4aa NEW_2
	var_368_bool = var_365_bool == 0; // 0x4ac Not
	if(var_368_bool == 0) goto Label_1200; // 0x4ad JumpB
	var_354_int = -2; // 0x4ae MovI
	return 8; // 0x4af Return
	
Label_1200:
	CreateDialog(var_361_object); // 0x4b0 Func
	var_369_int = 0; // 0x4b2 PushV
	func_1988(var_369_int); // 0x4b3 NEW_2
	SetNPCName(var_369_int); // 0x4b5 ObjFunc
	var_370_int = 0; // 0x4b7 PushV
	func_1986(var_370_int); // 0x4b8 NEW_2
	SetNPCDescription(var_370_int); // 0x4ba ObjFunc
	var_371_string = ""; // 0x4bc PushV
	func_1990(var_371_string); // 0x4bd NEW_2
	SetPhoto(var_371_string); // 0x4bf ObjFunc
	var_372_string = ""; // 0x4c1 PushV
	func_1992(var_372_string); // 0x4c2 NEW_2
	SetPhoto2(var_372_string); // 0x4c4 ObjFunc
	var_373_int = 0; // 0x4c6 PushV
	func_2175(var_373_int); // 0x4c7 NEW_2
	SetPlayerName(var_373_int); // 0x4c9 ObjFunc
	var_363_int = -1; // 0x4cb MovI
	IsOverrideActive(var_362_bool); // 0x4cc Func
	var_374_bool = var_362_bool; // 0x4ce Push
	if(var_374_bool == 0) goto Label_1234; // 0x4cf JumpB
	var_354_int = -2; // 0x4d0 MovI
	return 8; // 0x4d1 Return
	
Label_1234:
	DoDialog(var_361_object); // 0x4d2 Func
	var_375_object = Obj(); var_376_object = Obj(); // 0x4d4 PushV
	var_375_object = var_355_object; // 0x4d5 Mov
	var_376_object = var_361_object; // 0x4d6 Mov
	TaskCall(10); // 0x4d7 TaskCall
	func_1263(var_377_object, var_378_object, var_379_string, var_380_bool, var_375_object, var_376_object); // 0x4d8 NEW_2
	TaskReturn(); // 0x4d9 TaskReturn
	IsDialogEnd(var_364_bool); // 0x4db ObjFunc
	
Label_1245:
	var_408_bool = var_364_bool == 0; // 0x4dd Not
	if(var_408_bool == 0) goto Label_1252; // 0x4de JumpB
	sync(); // 0x4df Func
	IsDialogEnd(var_364_bool); // 0x4e1 ObjFunc
	goto Label_1245; // 0x4e3 Jump
	
Label_1252:
	var_409_object = Obj(); // 0x4e4 PushV
	var_409_object = var_355_object; // 0x4e5 Mov
	func_1693(); // 0x4e6 NEW_2
	StopDialog(var_361_object); // 0x4e8 Func
	GetReturnValue(var_363_int); // 0x4ea ObjFunc
	var_354_int = var_363_int; // 0x4ec Mov
	return 8; // 0x4ed Return
}


func_1830(var_116_float, var_117_float)
{
	var_119_int = 0; // 0x727 PushI
	var_120_bool = var_117_float < var_119_int; // 0x728 LT
	if(var_120_bool == 0) goto Label_1836; // 0x729 JumpB
	var_116_float = -var_117_float; // 0x72a Neg2
	goto Label_1837; // 0x72b Jump
	
Label_1837:
	return 0; // 0x72d Return
	
Label_1836:
	var_116_float = var_117_float; // 0x72c Mov
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


func_1577(var_124_cvector)
{
	var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); // 0x629 PushV
	GetPosition(var_126_cvector); // 0x62a Func
	var_124_cvector = var_126_cvector; // 0x62c Mov
	return 2; // 0x62d Return
}


func_1067(var_0_bool, var_1_bool, var_2_object, var_3_object, var_114_object, var_115_object)
{
	var_0_bool = var_115_object; // 0x42c TMov
	var_1_bool = var_114_object; // 0x42d TMov
	var_3_object = 0; // 0x42e TMovB
	var_120_int = 1; // 0x42f PushI
	if(var_120_int == 0) goto Label_1095; // 0x430 JumpB
	var_121_string = ""; // 0x431 PushV
	var_121_string = "Neutral"; // 0x432 MovS
	func_1125(var_115_object, var_121_string); // 0x433 NEW_2
	var_138_int = 520726; // 0x435 PushI
	SetMessage(var_138_int); // 0x436 TObjFunc
	ClearReplies(); // 0x438 TObjFunc
	var_139_int = 520727; // 0x43a PushI
	var_140_int = -1; // 0x43b PushI
	var_141_int = 21938; // 0x43c PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x43d TObjFunc
	var_142_int = 520728; // 0x43f PushI
	var_143_int = -1; // 0x440 PushI
	var_144_int = 21939; // 0x441 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0x442 TObjFunc
	goto Label_1095; // 0x444 Jump
	
Label_1095:
	var_145_bool = 0; // 0x447 PushV
	func_1994(var_145_bool); // 0x448 NEW_2
	if(var_145_bool == 0) goto Label_1110; // 0x44a JumpB
	
Label_1099:
	lshWaitForAnimEnd(); // 0x44b Func
	var_146_object = var_3_object; // 0x44d PushT
	if(var_146_object == 0) goto Label_1104; // 0x44e JumpB
	goto Label_1109; // 0x44f Jump
	
Label_1109:
	goto Label_1124; // 0x455 Jump
	
Label_1124:
	return 0; // 0x464 Return
	
Label_1104:
	var_147_string = ""; // 0x450 PushV
	var_147_string = var_2_object; // 0x451 MovT
	func_1761(var_147_string); // 0x452 NEW_2
	goto Label_1099; // 0x454 Jump
	
Label_1110:
	var_158_string = "all"; // 0x456 PushS
	var_159_string = "idle"; // 0x457 PushS
	PlayAnimation(var_158_string, var_159_string); // 0x458 Func
	
Label_1114:
	WaitForAnimEnd(); // 0x45a Func
	var_160_object = var_3_object; // 0x45c PushT
	if(var_160_object == 0) goto Label_1119; // 0x45d JumpB
	goto Label_1124; // 0x45e Jump
	
Label_1119:
	var_161_string = "all"; // 0x45f PushS
	var_162_string = "idle"; // 0x460 PushS
	PlayAnimation(var_161_string, var_162_string); // 0x461 Func
	goto Label_1114; // 0x463 Jump
}


func_2091(var_214_bool)
{
	var_216_float = 0; var_217_float = 0; // 0x82b PushV
	var_218_string = "health"; // 0x82c PushS
	GetProperty(var_218_string, var_217_float); // 0x82d ObjFunc
	var_219_float = 0.4; // 0x82f PushF
	var_214_bool = var_217_float >= var_219_float; // 0x830 GE2
	return 2; // 0x831 Return
}


func_1582(var_32_float)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); // 0x62e PushV
	GetPosition(var_37_cvector); // 0x62f Func
	GetPosition(var_38_cvector); // 0x631 ObjFunc
	var_39_cvector = var_38_cvector - var_37_cvector; // 0x633 Sub2
	var_32_float = var_39_cvector | var_39_cvector; // 0x634 Or2
	return 6; // 0x635 Return
}


func_1326(var_2_object, var_382_string)
{
	var_383_bool = 0; // 0x52f PushV
	func_1994(var_383_bool); // 0x530 NEW_2
	var_384_bool = var_383_bool == 0; // 0x532 Not
	if(var_384_bool == 0) goto Label_1333; // 0x533 JumpB
	return 0; // 0x534 Return
	
Label_1333:
	var_385_bool = var_382_string == var_2_object; // 0x535 Eq
	if(var_385_bool == 0) goto Label_1336; // 0x536 JumpB
	return 0; // 0x537 Return
	
Label_1336:
	var_386_string = ""; var_387_bool = 0; // 0x538 PushV
	var_386_string = var_382_string; // 0x539 Mov
	var_388_string = ""; // 0x53a PushS
	var_389_bool = var_382_string == var_388_string; // 0x53b Eq
	if(var_389_bool == 0) goto Label_1343; // 0x53c JumpB
	var_387_bool = 0; // 0x53d MovB
	goto Label_1344; // 0x53e Jump
	
Label_1344:
	func_1777(var_386_string, var_387_bool); // 0x540 NEW_2
	var_2_object = var_382_string; // 0x542 TMov
	return 0; // 0x543 Return
	
Label_1343:
	var_387_bool = 1; // 0x53f MovB
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


func_1838(var_37_bool, var_38_int, var_39_int)
{
	var_40_int = 0; var_41_int = 0; // 0x72e PushV
	irand(var_41_int, var_39_int); // 0x72f Func
	var_37_bool = var_41_int < var_38_int; // 0x731 LT2
	return 2; // 0x732 Return
}


func_2098()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x832 PushV
	var_34_int = 202; // 0x833 PushI
	var_35_int = 2; // 0x834 PushI
	var_36_int = 517942; // 0x835 PushI
	CreateDiaryEntry(var_33_object, var_34_int, var_35_int, var_36_int); // 0x836 Func
	var_37_bool = 0; var_38_object = Obj(); var_39_int = 0; // 0x838 PushV
	var_38_object = var_33_object; // 0x839 Mov
	var_39_int = 200; // 0x83a MovI
	func_2124(var_37_bool, var_38_object, var_39_int); // 0x83b NEW_2
	return 2; // 0x83d Return
}


func_1843(var_127_float, var_128_cvector)
{
	var_129_float = GetByIndex(var_128_cvector, 0); // 0x734 PushE
	var_130_float = GetByIndex(var_128_cvector, 0); // 0x735 PushE
	var_131_float = var_129_float * var_130_float; // 0x736 Mult
	var_132_float = GetByIndex(var_128_cvector, 2); // 0x737 PushE
	var_133_float = GetByIndex(var_128_cvector, 2); // 0x738 PushE
	var_134_float = var_132_float * var_133_float; // 0x739 Mult
	var_135_int = var_131_float + var_134_float; // 0x73a Add
	var_127_float = sqrt(var_135_int); // 0x73b Sqrt2
	return 0; // 0x73c Return
}


func_1710(var_315_bool, var_317_float)
{
	var_318_float = 0; var_319_cvector = CVector(0,0,0); var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0); var_325_bool = 0; var_326_float = 0; var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_bool = 0; // 0x6ae PushV
	GetPosition(var_327_cvector); // 0x6af ObjFunc
	GetEyesHeight(var_326_float); // 0x6b1 ObjFunc
	var_334_float = GetByIndex(var_327_cvector, 1); // 0x6b3 PushE
	var_334_float = var_334_float + var_326_float; // 0x6b4 Add2
	SetByIndex(var_327_cvector, 1) = var_334_float; // 0x6b5 PopE
	GetPosition(var_328_cvector); // 0x6b6 Func
	GetEyesHeight(var_326_float); // 0x6b8 Func
	var_335_float = GetByIndex(var_328_cvector, 1); // 0x6ba PushE
	var_335_float = var_335_float + var_326_float; // 0x6bb Add2
	SetByIndex(var_328_cvector, 1) = var_335_float; // 0x6bc PopE
	var_329_cvector = var_327_cvector - var_328_cvector; // 0x6bd Sub2
	var_336_float = GetByIndex(var_329_cvector, 1); // 0x6be PushE
	var_336_float = 0; // 0x6bf MovI
	SetByIndex(var_329_cvector, 1) = var_336_float; // 0x6c0 PopE
	var_337_int = var_329_cvector | var_329_cvector; // 0x6c1 Or
	var_338_float = sqrt(var_337_int); // 0x6c2 Sqrt
	var_329_cvector = var_329_cvector / var_329_cvector; // 0x6c3 Div2
	var_330_cvector = -var_329_cvector; // 0x6c4 Neg2
	var_339_float = var_329_cvector * var_317_float; // 0x6c5 Mult
	var_340_cvector = CVector(0.0, 10.0, 0.0); // 0x6c6 PushVec
	var_331_cvector = var_339_float - var_340_cvector; // 0x6c7 Sub2
	var_332_cvector = var_328_cvector + var_331_cvector; // 0x6c8 Add2
	IsOverrideActive(var_333_bool); // 0x6c9 Func
	var_341_bool = var_333_bool; // 0x6cb Push
	if(var_341_bool == 0) goto Label_1743; // 0x6cc JumpB
	var_315_bool = 0; // 0x6cd MovB
	return 16; // 0x6ce Return
	
Label_1743:
	StopWorld(); // 0x6cf Func
	CameraTransit(var_332_cvector, var_330_cvector); // 0x6d1 Func
	var_342_float = GetByIndex(var_331_cvector, 0); // 0x6d3 PushE
	var_343_float = GetByIndex(var_331_cvector, 2); // 0x6d4 PushE
	Rotate(var_342_float, var_343_float); // 0x6d5 Func
	CameraWaitForPlayFinish(); // 0x6d7 Func
	ResumeWorld(); // 0x6d9 Func
	var_315_bool = 1; // 0x6db MovB
	return 16; // 0x6dc Return
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
	func_1590(var_151_bool, var_152_cvector); // 0x3d NEW_2
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


func_1590(var_151_bool, var_152_cvector)
{
	var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_bool = 0; var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_bool = 0; // 0x636 PushV
	GetPosition(var_156_cvector); // 0x637 Func
	var_157_cvector = var_152_cvector - var_156_cvector; // 0x639 Sub2
	var_159_float = GetByIndex(var_157_cvector, 0); // 0x63a PushE
	var_160_float = GetByIndex(var_157_cvector, 2); // 0x63b PushE
	Rotate(var_159_float, var_160_float, var_158_bool); // 0x63c Func
	var_151_bool = var_158_bool; // 0x63e Mov
	return 6; // 0x63f Return
}


func_2045(var_212_bool, var_213_object)
{
	var_214_bool = 0; var_215_object = Obj(); // 0x7fe PushV
	var_215_object = var_213_object; // 0x7ff Mov
	func_2091(var_215_object); // 0x800 NEW_2
	if(var_214_bool == 0) goto Label_2053; // 0x802 JumpB
	var_212_bool = 1; // 0x803 MovB
	return 0; // 0x804 Return
	
Label_2053:
	var_212_bool = 0; // 0x805 MovB
	return 0; // 0x806 Return
}


func_185()
{
	Stop(); // 0xb9 Func
	return 0; // 0xbb Return
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
	func_1609(); // 0xc4 NEW_2
	var_59_int = 6; // 0xc6 PushI
	Sleep(var_59_int); // 0xc7 Func
	return 2; // 0xc9 Return
}


func_1853(var_222_int, var_223_string)
{
	var_224_int = 0; var_225_int = 0; // 0x73d PushV
	GetVariable(var_223_string, var_225_int); // 0x73e Func
	var_222_int = var_225_int; // 0x740 Mov
	return 2; // 0x741 Return
}


func_2111(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x83f PushV
	GetDiaryRoot(var_48_object); // 0x840 Func
	var_49_bool = var_48_object == 0; // 0x842 Not
	if(var_49_bool == 0) goto Label_2121; // 0x843 JumpB
	var_50_string = "Can't retrieve diary root"; // 0x844 PushS
	Trace(var_50_string); // 0x845 Func
	var_46_object = 0; // 0x847 MovB
	return 2; // 0x848 Return
	
Label_2121:
	var_46_object = var_48_object; // 0x849 Mov
	return 2; // 0x84a Return
}


func_1600(var_24_bool)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); // 0x640 PushV
	GetPosition(var_27_cvector); // 0x641 ObjFunc
	var_28_bool = 0; var_29_cvector = CVector(0,0,0); // 0x643 PushV
	var_29_cvector = var_27_cvector; // 0x644 Mov
	func_1590(var_28_bool, var_29_cvector); // 0x645 NEW_2
	var_24_bool = var_28_bool; // 0x646 Mov
	return 2; // 0x648 Return
}


func_1986(var_102_int)
{
	var_102_int = 515594; // 0x7c2 MovI
	return 0; // 0x7c3 Return
}


func_1858(var_75_int, var_76_int)
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x742 PushV
	CreateIntVector(var_78_object); // 0x743 Func
	add(var_75_int); // 0x745 ObjFunc
	add(var_76_int); // 0x747 ObjFunc
	var_79_int = 3; // 0x749 PushI
	SendWorldWndMessage(var_79_int, var_78_object); // 0x74a Func
	return 2; // 0x74c Return
}


func_1988(var_101_int)
{
	var_101_int = 512583; // 0x7c4 MovI
	return 0; // 0x7c5 Return
}


func_322(var_0_bool, var_182_int, var_183_object)
{
	var_185_object = Obj(); var_186_bool = 0; var_187_int = 0; var_188_bool = 0; var_189_object = Obj(); var_190_bool = 0; var_191_int = 0; var_192_bool = 0; // 0x142 PushV
	var_0_bool = var_183_object; // 0x143 TMov
	var_193_bool = 0; var_194_object = Obj(); var_195_float = 0; // 0x144 PushV
	var_194_object = var_183_object; // 0x145 Mov
	var_195_float = 100.0; // 0x146 MovF
	func_1625(var_194_object, var_195_float); // 0x147 NEW_2
	var_196_bool = var_193_bool == 0; // 0x149 Not
	if(var_196_bool == 0) goto Label_333; // 0x14a JumpB
	var_182_int = -2; // 0x14b MovI
	return 8; // 0x14c Return
	
Label_333:
	CreateDialog(var_189_object); // 0x14d Func
	var_197_int = 0; // 0x14f PushV
	func_1988(var_197_int); // 0x150 NEW_2
	SetNPCName(var_197_int); // 0x152 ObjFunc
	var_198_int = 0; // 0x154 PushV
	func_1986(var_198_int); // 0x155 NEW_2
	SetNPCDescription(var_198_int); // 0x157 ObjFunc
	var_199_string = ""; // 0x159 PushV
	func_1990(var_199_string); // 0x15a NEW_2
	SetPhoto(var_199_string); // 0x15c ObjFunc
	var_200_string = ""; // 0x15e PushV
	func_1992(var_200_string); // 0x15f NEW_2
	SetPhoto2(var_200_string); // 0x161 ObjFunc
	var_201_int = 0; // 0x163 PushV
	func_2175(var_201_int); // 0x164 NEW_2
	SetPlayerName(var_201_int); // 0x166 ObjFunc
	var_191_int = -1; // 0x168 MovI
	IsOverrideActive(var_190_bool); // 0x169 Func
	var_202_bool = var_190_bool; // 0x16b Push
	if(var_202_bool == 0) goto Label_367; // 0x16c JumpB
	var_182_int = -2; // 0x16d MovI
	return 8; // 0x16e Return
	
Label_367:
	DoDialog(var_189_object); // 0x16f Func
	var_203_object = Obj(); var_204_object = Obj(); // 0x171 PushV
	var_203_object = var_183_object; // 0x172 Mov
	var_204_object = var_189_object; // 0x173 Mov
	TaskCall(6); // 0x174 TaskCall
	func_396(var_205_object, var_206_object, var_207_string, var_208_bool, var_203_object, var_204_object); // 0x175 NEW_2
	TaskReturn(); // 0x176 TaskReturn
	IsDialogEnd(var_192_bool); // 0x178 ObjFunc
	
Label_378:
	var_312_bool = var_192_bool == 0; // 0x17a Not
	if(var_312_bool == 0) goto Label_385; // 0x17b JumpB
	sync(); // 0x17c Func
	IsDialogEnd(var_192_bool); // 0x17e ObjFunc
	goto Label_378; // 0x180 Jump
	
Label_385:
	var_313_object = Obj(); // 0x181 PushV
	var_313_object = var_183_object; // 0x182 Mov
	func_1693(); // 0x183 NEW_2
	StopDialog(var_189_object); // 0x185 Func
	GetReturnValue(var_191_int); // 0x187 ObjFunc
	var_182_int = var_191_int; // 0x189 Mov
	return 8; // 0x18a Return
}


func_1990(var_103_string)
{
	var_103_string = "ui/NPC_Citizen3.png"; // 0x7c6 MovS
	return 0; // 0x7c7 Return
}


func_1992(var_104_string)
{
	var_104_string = "ui/NPC_Citizen3_b.png"; // 0x7c8 MovS
	return 0; // 0x7c9 Return
}


func_1609()
{
	var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); // 0x649 PushV
	GetPosition(var_54_cvector); // 0x64a ObjFunc
	GetPosition(var_55_cvector); // 0x64c Func
	var_56_cvector = var_54_cvector - var_55_cvector; // 0x64e Sub2
	var_57_float = GetByIndex(var_56_cvector, 0); // 0x64f PushE
	var_58_float = GetByIndex(var_56_cvector, 2); // 0x650 PushE
	RotateAsync(var_57_float, var_58_float); // 0x651 Func
	return 6; // 0x653 Return
}


func_1994(var_96_bool)
{
	var_96_bool = 0; // 0x7ca MovB
	return 0; // 0x7cb Return
}


func_1996()
{
	var_82_string = "playsound"; // 0x7cd PushS
	var_83_string = "giveitem"; // 0x7ce PushS
	TriggerWorld(var_82_string, var_83_string); // 0x7cf Func
	return 0; // 0x7d1 Return
}


func_2124(var_37_bool, var_38_object, var_39_int)
{
	var_40_object = Obj(); var_41_object = Obj(); var_42_int = 0; var_43_object = Obj(); var_44_object = Obj(); var_45_int = 0; // 0x84c PushV
	var_46_object = Obj(); // 0x84d PushV
	func_2111(var_46_object); // 0x84e NEW_2
	var_43_object = var_46_object; // 0x84f Mov
	Find(var_39_int, var_44_object); // 0x851 ObjFunc
	var_51_bool = var_44_object == 0; // 0x853 Not
	if(var_51_bool == 0) goto Label_2139; // 0x854 JumpB
	var_52_string = "Can't find diary parent with id: "; // 0x855 PushS
	var_53_int = var_52_string + var_39_int; // 0x856 Add
	Trace(var_53_int); // 0x857 Func
	var_37_bool = 0; // 0x859 MovB
	return 6; // 0x85a Return
	
Label_2139:
	AddChild(var_38_object); // 0x85b ObjFunc
	var_54_int = 7; // 0x85d PushI
	SendWorldWndMessage(var_54_int); // 0x85e Func
	GetCategory(var_45_int); // 0x860 ObjFunc
	SetDiarySection(var_45_int); // 0x862 Func
	var_37_bool = 0; // 0x864 MovB
	return 6; // 0x865 Return
}


func_1870(var_65_object, var_66_int)
{
	var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; // 0x74e PushV
	GetItemID(var_70_int); // 0x74f ObjFunc
	var_73_string = "Category"; // 0x751 PushS
	GetInvItemProperty(var_71_int, var_70_int, var_73_string); // 0x752 Func
	AddItem(var_72_bool, var_65_object, var_71_int, var_66_int); // 0x754 ObjFunc
	var_74_bool = var_72_bool == 0; // 0x756 Not
	if(var_74_bool == 0) goto Label_1883; // 0x757 JumpB
	DropItems(var_65_object, var_66_int); // 0x758 ObjFunc
	goto Label_1888; // 0x75a Jump
	
Label_1888:
	return 6; // 0x760 Return
	
Label_1883:
	var_75_int = 0; var_76_int = 0; // 0x75b PushV
	var_75_int = var_70_int; // 0x75c Mov
	var_76_int = var_66_int; // 0x75d Mov
	func_1858(var_75_int, var_76_int); // 0x75e NEW_2
}


func_592(var_2_object, var_238_string)
{
	var_239_bool = 0; // 0x251 PushV
	func_1994(var_239_bool); // 0x252 NEW_2
	var_240_bool = var_239_bool == 0; // 0x254 Not
	if(var_240_bool == 0) goto Label_599; // 0x255 JumpB
	return 0; // 0x256 Return
	
Label_599:
	var_241_bool = var_238_string == var_2_object; // 0x257 Eq
	if(var_241_bool == 0) goto Label_602; // 0x258 JumpB
	return 0; // 0x259 Return
	
Label_602:
	var_242_string = ""; var_243_bool = 0; // 0x25a PushV
	var_242_string = var_238_string; // 0x25b Mov
	var_244_string = ""; // 0x25c PushS
	var_245_bool = var_238_string == var_244_string; // 0x25d Eq
	if(var_245_bool == 0) goto Label_609; // 0x25e JumpB
	var_243_bool = 0; // 0x25f MovB
	goto Label_610; // 0x260 Jump
	
Label_610:
	func_1777(var_242_string, var_243_bool); // 0x262 NEW_2
	var_2_object = var_238_string; // 0x264 TMov
	return 0; // 0x265 Return
	
Label_609:
	var_243_bool = 1; // 0x261 MovB
}


func_2002()
{
	var_28_int = 1000; // 0x7d3 PushI
	SetReturnValue(var_28_int); // 0x7d4 ObjFunc
	return 0; // 0x7d6 Return
}


func_1620(var_98_bool)
{
	var_99_bool = 0; var_100_bool = 0; // 0x654 PushV
	IsLoaded(var_100_bool); // 0x655 Func
	var_98_bool = var_100_bool; // 0x657 Mov
	return 2; // 0x658 Return
}


func_2007()
{
	var_236_string = "oob1Gorbun1"; // 0x7d8 PushS
	var_237_int = 1; // 0x7d9 PushI
	SetVariable(var_236_string, var_237_int); // 0x7da Func
	return 0; // 0x7dc Return
}


func_1625(var_54_bool, var_56_float)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_bool = 0; var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_bool = 0; // 0x659 PushV
	GetPosition(var_67_cvector); // 0x65a ObjFunc
	GetEyesHeight(var_66_float); // 0x65c ObjFunc
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x65e PushE
	var_75_float = var_75_float + var_66_float; // 0x65f Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x660 PopE
	GetPosition(var_68_cvector); // 0x661 Func
	GetEyesHeight(var_66_float); // 0x663 Func
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x665 PushE
	var_76_float = var_76_float + var_66_float; // 0x666 Add2
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x667 PopE
	var_69_cvector = var_67_cvector - var_68_cvector; // 0x668 Sub2
	var_77_float = GetByIndex(var_69_cvector, 1); // 0x669 PushE
	var_77_float = 0; // 0x66a MovI
	SetByIndex(var_69_cvector, 1) = var_77_float; // 0x66b PopE
	var_78_int = var_69_cvector | var_69_cvector; // 0x66c Or
	var_79_float = sqrt(var_78_int); // 0x66d Sqrt
	var_69_cvector = var_69_cvector / var_69_cvector; // 0x66e Div2
	var_70_cvector = -var_69_cvector; // 0x66f Neg2
	var_80_float = var_69_cvector * var_56_float; // 0x670 Mult
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); // 0x671 PushV
	var_83_cvector = CVector(0.0, 1.0, 0.0); // 0x672 PushVec
	var_82_cvector = var_70_cvector ^ var_83_cvector; // 0x673 Xor2
	func_1820(var_81_cvector, var_82_cvector); // 0x674 NEW_2
	var_89_int = 25; // 0x676 PushI
	var_90_float = var_81_cvector * var_89_int; // 0x677 Mult
	var_91_int = var_80_float + var_90_float; // 0x678 Add
	var_92_cvector = CVector(0.0, 10.0, 0.0); // 0x679 PushVec
	var_71_cvector = var_91_int - var_92_cvector; // 0x67a Sub2
	var_72_cvector = var_68_cvector + var_71_cvector; // 0x67b Add2
	IsOverrideActive(var_73_bool); // 0x67c Func
	var_93_bool = var_73_bool; // 0x67e Push
	if(var_93_bool == 0) goto Label_1666; // 0x67f JumpB
	var_54_bool = 0; // 0x680 MovB
	return 18; // 0x681 Return
	
Label_1666:
	StopWorld(); // 0x682 Func
	CameraTransit(var_72_cvector, var_70_cvector); // 0x684 Func
	var_94_float = GetByIndex(var_71_cvector, 0); // 0x686 PushE
	var_95_float = GetByIndex(var_71_cvector, 2); // 0x687 PushE
	Rotate(var_94_float, var_95_float); // 0x688 Func
	var_96_bool = 0; // 0x68a PushV
	func_1994(var_96_bool); // 0x68b NEW_2
	if(var_96_bool == 0) goto Label_1679; // 0x68d JumpB
	goto Label_1687; // 0x68e Jump
	
Label_1687:
	CameraWaitForPlayFinish(); // 0x697 Func
	ResumeWorld(); // 0x699 Func
	var_54_bool = 1; // 0x69b MovB
	return 18; // 0x69c Return
	
Label_1679:
	var_97_string = "head"; // 0x68f PushS
	HasAnimationTrack(var_74_bool, var_97_string); // 0x690 Func
	var_98_bool = var_74_bool; // 0x692 Push
	if(var_98_bool == 0) goto Label_1687; // 0x693 JumpB
	var_99_string = "head"; // 0x694 PushS
	LookAsyncCamera(var_99_string); // 0x695 Func
}


func_2013()
{
	var_276_string = "oob1Gorbun2"; // 0x7de PushS
	var_277_int = 1; // 0x7df PushI
	SetVariable(var_276_string, var_277_int); // 0x7e0 Func
	return 0; // 0x7e2 Return
}


func_1757()
{
	CameraSwitchToNormal(); // 0x6de Func
	return 0; // 0x6e0 Return
}


func_1761(var_147_string)
{
	var_148_bool = 0; var_149_float = 0; var_150_float = 0; var_151_bool = 0; var_152_float = 0; var_153_float = 0; // 0x6e1 PushV
	lshHasAnimation(var_151_bool, var_147_string); // 0x6e2 Func
	var_154_bool = var_151_bool; // 0x6e4 Push
	if(var_154_bool == 0) goto Label_1772; // 0x6e5 JumpB
	lshGetAnimTimes(var_147_string, var_152_float, var_153_float); // 0x6e6 Func
	var_155_bool = 0; // 0x6e8 PushB
	lshPlayAnimation(var_152_float, var_153_float, var_155_bool); // 0x6e9 Func
	goto Label_1776; // 0x6eb Jump
	
Label_1776:
	return 6; // 0x6f0 Return
	
Label_1772:
	var_156_string = "Can't find lsh animation : "; // 0x6ec PushS
	var_157_int = var_156_string + var_147_string; // 0x6ed Add
	Trace(var_157_int); // 0x6ee Func
}


func_1889(var_59_object, var_60_string, var_61_int)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x761 PushV
	CreateInvItem(var_63_object); // 0x762 Func
	SetItemName(var_60_string); // 0x764 ObjFunc
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; // 0x766 PushV
	var_64_object = var_59_object; // 0x767 Mov
	var_65_object = var_63_object; // 0x768 Mov
	var_66_int = var_61_int; // 0x769 Mov
	func_1870(var_65_object, var_66_int); // 0x76a NEW_2
	return 2; // 0x76c Return
}


func_2019(var_26_object)
{
	var_28_float = 0; var_29_float = 0; // 0x7e3 PushV
	var_30_string = "b1q02"; // 0x7e4 PushS
	var_31_int = 2; // 0x7e5 PushI
	SetVariable(var_30_string, var_31_int); // 0x7e6 Func
	func_2098(); // 0x7e9 NEW_2
	var_55_string = "health"; // 0x7eb PushS
	GetProperty(var_55_string, var_29_float); // 0x7ec ObjFunc
	var_56_float = 0.3; // 0x7ee PushF
	var_29_float = var_29_float - var_56_float; // 0x7ef Sub2
	var_57_string = "health"; // 0x7f0 PushS
	SetProperty(var_57_string, var_29_float); // 0x7f1 ObjFunc
	var_58_string = "blood is given"; // 0x7f3 PushS
	Trace(var_58_string); // 0x7f4 Func
	var_59_object = Obj(); var_60_string = ""; var_61_int = 0; // 0x7f6 PushV
	var_59_object = var_26_object; // 0x7f7 Mov
	var_60_string = "b1q02_blood"; // 0x7f8 MovS
	var_61_int = 1; // 0x7f9 MovI
	func_1889(var_59_object, var_60_string, var_61_int); // 0x7fa NEW_2
	return 2; // 0x7fc Return
}


func_993(var_0_bool, var_43_int, var_44_object)
{
	var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; var_50_object = Obj(); var_51_bool = 0; var_52_int = 0; var_53_bool = 0; // 0x3e1 PushV
	var_0_bool = var_44_object; // 0x3e2 TMov
	var_54_bool = 0; var_55_object = Obj(); var_56_float = 0; // 0x3e3 PushV
	var_55_object = var_44_object; // 0x3e4 Mov
	var_56_float = 100.0; // 0x3e5 MovF
	func_1625(var_55_object, var_56_float); // 0x3e6 NEW_2
	var_100_bool = var_54_bool == 0; // 0x3e8 Not
	if(var_100_bool == 0) goto Label_1004; // 0x3e9 JumpB
	var_43_int = -2; // 0x3ea MovI
	return 8; // 0x3eb Return
	
Label_1004:
	CreateDialog(var_50_object); // 0x3ec Func
	var_101_int = 0; // 0x3ee PushV
	func_1988(var_101_int); // 0x3ef NEW_2
	SetNPCName(var_101_int); // 0x3f1 ObjFunc
	var_102_int = 0; // 0x3f3 PushV
	func_1986(var_102_int); // 0x3f4 NEW_2
	SetNPCDescription(var_102_int); // 0x3f6 ObjFunc
	var_103_string = ""; // 0x3f8 PushV
	func_1990(var_103_string); // 0x3f9 NEW_2
	SetPhoto(var_103_string); // 0x3fb ObjFunc
	var_104_string = ""; // 0x3fd PushV
	func_1992(var_104_string); // 0x3fe NEW_2
	SetPhoto2(var_104_string); // 0x400 ObjFunc
	var_105_int = 0; // 0x402 PushV
	func_2175(var_105_int); // 0x403 NEW_2
	SetPlayerName(var_105_int); // 0x405 ObjFunc
	var_52_int = -1; // 0x407 MovI
	IsOverrideActive(var_51_bool); // 0x408 Func
	var_113_bool = var_51_bool; // 0x40a Push
	if(var_113_bool == 0) goto Label_1038; // 0x40b JumpB
	var_43_int = -2; // 0x40c MovI
	return 8; // 0x40d Return
	
Label_1038:
	DoDialog(var_50_object); // 0x40e Func
	var_114_object = Obj(); var_115_object = Obj(); // 0x410 PushV
	var_114_object = var_44_object; // 0x411 Mov
	var_115_object = var_50_object; // 0x412 Mov
	TaskCall(8); // 0x413 TaskCall
	func_1067(var_116_object, var_117_object, var_118_string, var_119_bool, var_114_object, var_115_object); // 0x414 NEW_2
	TaskReturn(); // 0x415 TaskReturn
	IsDialogEnd(var_53_bool); // 0x417 ObjFunc
	
Label_1049:
	var_163_bool = var_53_bool == 0; // 0x419 Not
	if(var_163_bool == 0) goto Label_1056; // 0x41a JumpB
	sync(); // 0x41b Func
	IsDialogEnd(var_53_bool); // 0x41d ObjFunc
	goto Label_1049; // 0x41f Jump
	
Label_1056:
	var_164_object = Obj(); // 0x420 PushV
	var_164_object = var_44_object; // 0x421 Mov
	func_1693(); // 0x422 NEW_2
	StopDialog(var_50_object); // 0x424 Func
	GetReturnValue(var_52_int); // 0x426 ObjFunc
	var_43_int = var_52_int; // 0x428 Mov
	return 8; // 0x429 Return
}


func_1125(var_2_object, var_121_string)
{
	var_122_bool = 0; // 0x466 PushV
	func_1994(var_122_bool); // 0x467 NEW_2
	var_123_bool = var_122_bool == 0; // 0x469 Not
	if(var_123_bool == 0) goto Label_1132; // 0x46a JumpB
	return 0; // 0x46b Return
	
Label_1132:
	var_124_bool = var_121_string == var_2_object; // 0x46c Eq
	if(var_124_bool == 0) goto Label_1135; // 0x46d JumpB
	return 0; // 0x46e Return
	
Label_1135:
	var_125_string = ""; var_126_bool = 0; // 0x46f PushV
	var_125_string = var_121_string; // 0x470 Mov
	var_127_string = ""; // 0x471 PushS
	var_128_bool = var_121_string == var_127_string; // 0x472 Eq
	if(var_128_bool == 0) goto Label_1142; // 0x473 JumpB
	var_126_bool = 0; // 0x474 MovB
	goto Label_1143; // 0x475 Jump
	
Label_1143:
	func_1777(var_125_string, var_126_bool); // 0x477 NEW_2
	var_2_object = var_121_string; // 0x479 TMov
	return 0; // 0x47a Return
	
Label_1142:
	var_126_bool = 1; // 0x476 MovB
}


func_2152()
{
	var_20_int = 0; var_21_int = 0; // 0x868 PushV
	var_22_int = 0; // 0x869 PushI
	ClearSubContainer(var_22_int); // 0x86a Func
	var_23_int = 0; // 0x86c PushV
	func_1902(var_23_int); // 0x86d NEW_2
	var_21_int = var_23_int; // 0x86e Mov
	var_29_string = ""; var_30_int = 0; var_31_int = 0; var_32_int = 0; // 0x870 PushV
	var_29_string = "tourniquet"; // 0x871 MovS
	var_30_int = 1; // 0x872 MovI
	var_31_int = 1; // 0x873 MovI
	var_32_int = 5; // 0x874 MovI
	func_1799(var_29_string, var_30_int, var_31_int, var_32_int); // 0x875 NEW_2
	var_45_string = ""; var_46_int = 0; var_47_int = 0; var_48_int = 0; // 0x877 PushV
	var_45_string = "bandage"; // 0x878 MovS
	var_46_int = 1; // 0x879 MovI
	var_47_int = 1; // 0x87a MovI
	var_48_int = 5; // 0x87b MovI
	func_1799(var_45_string, var_46_int, var_47_int, var_48_int); // 0x87c NEW_2
	return 2; // 0x87e Return
}


func_233()
{
	StopGroup0(); // 0xe9 Func
	StopAnimation(); // 0xeb Func
	return 0; // 0xed Return
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
	func_1924(var_206_int); // 0x10e NEW_2
	var_183_int = var_206_int; // 0x10f Mov
	var_219_int = var_183_int; // 0x111 Push
	if(var_219_int == 0) goto Label_286; // 0x112 JumpB
	irand(var_184_int, var_183_int); // 0x113 Func
	var_220_string = "all"; // 0x115 PushS
	var_221_string = ""; var_222_int = 0; // 0x116 PushV
	var_222_int = var_184_int; // 0x117 Mov
	func_1917(var_221_string, var_222_int); // 0x118 NEW_2
	PlayAnimation(var_220_string, var_221_string); // 0x11a Func
	WaitForAnimEnd(); // 0x11c Func
	
Label_244:
	var_178_string = "ptidle"; // 0xf4 MovS
}


func_1263(var_0_bool, var_1_bool, var_2_object, var_3_object, var_375_object, var_376_object)
{
	var_0_bool = var_376_object; // 0x4f0 TMov
	var_1_bool = var_375_object; // 0x4f1 TMov
	var_3_object = 0; // 0x4f2 TMovB
	var_381_int = 1; // 0x4f3 PushI
	if(var_381_int == 0) goto Label_1296; // 0x4f4 JumpB
	var_382_string = ""; // 0x4f5 PushV
	var_382_string = "Neutral"; // 0x4f6 MovS
	func_1326(var_376_object, var_382_string); // 0x4f7 NEW_2
	var_390_int = 541715; // 0x4f9 PushI
	SetMessage(var_390_int); // 0x4fa TObjFunc
	ClearReplies(); // 0x4fc TObjFunc
	var_391_int = 541716; // 0x4fe PushI
	var_392_int = -1; // 0x4ff PushI
	var_393_int = 43906; // 0x500 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x501 TObjFunc
	var_394_int = 541717; // 0x503 PushI
	var_395_int = -1; // 0x504 PushI
	var_396_int = 43907; // 0x505 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x506 TObjFunc
	var_397_int = 541742; // 0x508 PushI
	var_398_int = -1; // 0x509 PushI
	var_399_int = 43939; // 0x50a PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x50b TObjFunc
	goto Label_1296; // 0x50d Jump
	
Label_1296:
	var_400_bool = 0; // 0x510 PushV
	func_1994(var_400_bool); // 0x511 NEW_2
	if(var_400_bool == 0) goto Label_1311; // 0x513 JumpB
	
Label_1300:
	lshWaitForAnimEnd(); // 0x514 Func
	var_401_object = var_3_object; // 0x516 PushT
	if(var_401_object == 0) goto Label_1305; // 0x517 JumpB
	goto Label_1310; // 0x518 Jump
	
Label_1310:
	goto Label_1325; // 0x51e Jump
	
Label_1325:
	return 0; // 0x52d Return
	
Label_1305:
	var_402_string = ""; // 0x519 PushV
	var_402_string = var_2_object; // 0x51a MovT
	func_1761(var_402_string); // 0x51b NEW_2
	goto Label_1300; // 0x51d Jump
	
Label_1311:
	var_403_string = "all"; // 0x51f PushS
	var_404_string = "idle"; // 0x520 PushS
	PlayAnimation(var_403_string, var_404_string); // 0x521 Func
	
Label_1315:
	WaitForAnimEnd(); // 0x523 Func
	var_405_object = var_3_object; // 0x525 PushT
	if(var_405_object == 0) goto Label_1320; // 0x526 JumpB
	goto Label_1325; // 0x527 Jump
	
Label_1320:
	var_406_string = "all"; // 0x528 PushS
	var_407_string = "idle"; // 0x529 PushS
	PlayAnimation(var_406_string, var_407_string); // 0x52a Func
	goto Label_1315; // 0x52c Jump
}


func_1902(var_23_int)
{
	var_24_float = 0; var_25_float = 0; // 0x76e PushV
	GetGameTime(var_25_float); // 0x76f Func
	var_26_int = 1; // 0x771 PushI
	var_27_int = 0; // 0x772 PushV
	var_28_int = 24; // 0x773 PushI
	var_27_int = var_25_float / var_25_float; // 0x774 Div2
	var_23_int = var_26_int + var_27_int; // 0x775 Add2
	return 2; // 0x776 Return
}


func_1777(var_125_string, var_126_bool)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0; // 0x6f1 PushV
	lshHasAnimation(var_132_bool, var_125_string); // 0x6f2 Func
	var_135_bool = var_132_bool; // 0x6f4 Push
	if(var_135_bool == 0) goto Label_1787; // 0x6f5 JumpB
	lshGetAnimTimes(var_125_string, var_133_float, var_134_float); // 0x6f6 Func
	lshPlayAnimation(var_133_float, var_134_float, var_126_bool); // 0x6f8 Func
	goto Label_1791; // 0x6fa Jump
	
Label_1791:
	return 6; // 0x6ff Return
	
Label_1787:
	var_136_string = "Can't find lsh animation : "; // 0x6fb PushS
	var_137_int = var_136_string + var_125_string; // 0x6fc Add
	Trace(var_137_int); // 0x6fd Func
}


func_1522()
{
	var_84_string = ""; var_85_string = ""; // 0x5f2 PushV
	var_86_string = "loc"; // 0x5f3 PushS
	GetProperty(var_86_string, var_85_string); // 0x5f4 Func
	var_87_string = GlobalVars[0]; // 0x5f6 PushGE
	var_87_string = var_85_string; // 0x5f7 Mov
	GlobalVars[0] = var_87_string; // 0x5f8 PopGE
	return 2; // 0x5f9 Return
}


func_1911(var_173_bool, var_174_int)
{
	var_175_int = 0; // 0x778 PushV
	func_1902(var_175_int); // 0x779 NEW_2
	var_173_bool = var_175_int == var_174_int; // 0x77b Eq2
	return 0; // 0x77c Return
}


func_1530(var_0_bool, var_1_bool)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); // 0x5fa PushV
	var_108_string = "all"; // 0x5fb PushS
	var_109_string = "walk_stopl"; // 0x5fc PushS
	GetAnimationOffset(var_106_cvector, var_108_string, var_109_string); // 0x5fd Func
	var_110_string = "all"; // 0x5ff PushS
	var_111_string = "walk_stopr"; // 0x600 PushS
	GetAnimationOffset(var_107_cvector, var_110_string, var_111_string); // 0x601 Func
	var_112_float = GetByIndex(var_106_cvector, 2); // 0x603 PushE
	var_113_float = GetByIndex(var_107_cvector, 2); // 0x604 PushE
	var_114_int = var_112_float + var_113_float; // 0x605 Add
	var_115_float = 2.0; // 0x606 PushF
	var_0_bool = var_114_int / var_114_int; // 0x607 Div2
	var_116_float = 0; var_117_float = 0; // 0x608 PushV
	var_118_float = GetByIndex(var_106_cvector, 2); // 0x609 PushE
	var_117_float = var_118_float - var_0_bool; // 0x60a Sub2
	func_1830(var_116_float, var_117_float); // 0x60b NEW_2
	var_121_int = 40; // 0x60d PushI
	var_1_bool = var_116_float + var_121_int; // 0x60e Add2
	return 4; // 0x60f Return
}


func_1917(var_212_string, var_213_int)
{
	var_214_string = ""; var_215_string = ""; // 0x77d PushV
	var_215_string = "idle"; // 0x77e MovS
	var_216_int = var_213_int; // 0x77f Push
	if(var_216_int == 0) goto Label_1922; // 0x780 JumpB
	var_215_string = var_215_string + var_213_int; // 0x781 Add2
	
Label_1922:
	var_212_string = var_215_string; // 0x782 Mov
	return 2; // 0x783 Return
}


func_2175(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0x87f PushV
	var_108_string = "branch"; // 0x880 PushS
	GetVariable(var_108_string, var_107_int); // 0x881 Func
	var_109_int = 0; // 0x883 PushI
	var_110_bool = var_107_int == var_109_int; // 0x884 Eq
	if(var_110_bool == 0) goto Label_2185; // 0x885 JumpB
	var_105_int = 1; // 0x886 MovI
	return 2; // 0x887 Return
	
Label_2185:
	var_111_int = 1; // 0x889 PushI
	var_112_bool = var_107_int == var_111_int; // 0x88a Eq
	if(var_112_bool == 0) goto Label_2190; // 0x88b JumpB
	var_105_int = 2; // 0x88c MovI
	return 2; // 0x88d Return
	
Label_2190:
	var_105_int = 3; // 0x88e MovI
	return 2; // 0x88f Return
}


