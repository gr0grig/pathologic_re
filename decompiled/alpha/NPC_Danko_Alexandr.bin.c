task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_object = Obj(); // 0x24 PushV
	var_41_object = var_40_bool; // 0x25 Mov
	func_8633(var_41_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_bool = 0; var_42_object = Obj(); // 0x2a PushV
	var_42_object = var_40_bool; // 0x2b Mov
	func_6783(var_42_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xc5 PushI
	if(var_42_int == 0) goto Label_270; // 0xc6 JumpB
	func_6878(); // 0xc8 Call
	var_44_int = 336; // 0xca PushI
	var_45_bool = var_40_string == var_44_int; // 0xcb Eq
	if(var_45_bool == 0) goto Label_235; // 0xcc JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xcd PushV
	var_46_object = var_1_object; // 0xce MovT
	var_47_object = var_0_object; // 0xcf MovT
	func_7573(); // 0xd0 Call
	var_50_string = ""; // 0xd2 PushV
	var_50_string = "Neutral"; // 0xd3 MovS
	func_180(var_41_bool, var_50_string); // 0xd4 Call
	var_65_int = 287; // 0xd6 PushI
	SetMessage(var_65_int); // 0xd7 TObjFunc
	ClearReplies(); // 0xd9 TObjFunc
	var_66_int = 288; // 0xdb PushI
	var_67_int = 340; // 0xdc PushI
	var_68_int = 337; // 0xdd PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xde TObjFunc
	var_69_int = 289; // 0xe0 PushI
	var_70_int = 340; // 0xe1 PushI
	var_71_int = 338; // 0xe2 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xe3 TObjFunc
	var_72_int = 290; // 0xe5 PushI
	var_73_int = 340; // 0xe6 PushI
	var_74_int = 339; // 0xe7 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_75_int = 340; // 0xeb PushI
	var_76_bool = var_40_string == var_75_int; // 0xec Eq
	if(var_76_bool == 0) goto Label_258; // 0xed JumpB
	var_77_string = ""; // 0xee PushV
	var_77_string = "Neutral"; // 0xef MovS
	func_180(var_41_bool, var_77_string); // 0xf0 Call
	var_78_int = 291; // 0xf2 PushI
	SetMessage(var_78_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_79_int = 292; // 0xf7 PushI
	var_80_int = -1; // 0xf8 PushI
	var_81_int = 341; // 0xf9 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xfa TObjFunc
	var_82_int = 293; // 0xfc PushI
	var_83_int = -1; // 0xfd PushI
	var_84_int = 342; // 0xfe PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xff TObjFunc
	return 0; // 0x101 Return
	
Label_258:
	var_3_string = 1; // 0x102 TMovB
	var_85_bool = 0; // 0x103 PushV
	func_7001(var_85_bool); // 0x104 Call
	if(var_85_bool == 0) goto Label_266; // 0x106 JumpB
	lshStopAnimation(); // 0x107 Func
	goto Label_268; // 0x109 Jump
	
Label_268:
	return 0; // 0x10c Return
	
Label_266:
	StopAnimation(); // 0x10a Func
	
Label_270:
	return 0; // 0x10e Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x1f4 PushI
	if(var_42_int == 0) goto Label_1300; // 0x1f5 JumpB
	func_6878(); // 0x1f7 Call
	var_44_int = 13846; // 0x1f9 PushI
	var_45_bool = var_41_bool == var_44_int; // 0x1fa Eq
	if(var_45_bool == 0) goto Label_513; // 0x1fb JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x1fc PushV
	var_46_object = var_1_object; // 0x1fd MovT
	var_47_object = var_0_object; // 0x1fe MovT
	func_7579(); // 0x1ff Call
	
Label_513:
	var_99_int = 13851; // 0x201 PushI
	var_100_bool = var_41_bool == var_99_int; // 0x202 Eq
	if(var_100_bool == 0) goto Label_521; // 0x203 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0x204 PushV
	var_101_object = var_1_object; // 0x205 MovT
	var_102_object = var_0_object; // 0x206 MovT
	func_7579(); // 0x207 Call
	
Label_521:
	var_103_int = 13904; // 0x209 PushI
	var_104_bool = var_41_bool == var_103_int; // 0x20a Eq
	if(var_104_bool == 0) goto Label_529; // 0x20b JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x20c PushV
	var_105_object = var_1_object; // 0x20d MovT
	var_106_object = var_0_object; // 0x20e MovT
	func_7579(); // 0x20f Call
	
Label_529:
	var_107_int = 13829; // 0x211 PushI
	var_108_bool = var_41_bool == var_107_int; // 0x212 Eq
	if(var_108_bool == 0) goto Label_537; // 0x213 JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x214 PushV
	var_109_object = var_1_object; // 0x215 MovT
	var_110_object = var_0_object; // 0x216 MovT
	func_7533(); // 0x217 Call
	
Label_537:
	var_113_int = 13840; // 0x219 PushI
	var_114_bool = var_41_bool == var_113_int; // 0x21a Eq
	if(var_114_bool == 0) goto Label_545; // 0x21b JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x21c PushV
	var_115_object = var_1_object; // 0x21d MovT
	var_116_object = var_0_object; // 0x21e MovT
	func_7539(); // 0x21f Call
	
Label_545:
	var_119_int = 13195; // 0x221 PushI
	var_120_bool = var_41_bool == var_119_int; // 0x222 Eq
	if(var_120_bool == 0) goto Label_553; // 0x223 JumpB
	var_121_object = Obj(); var_122_object = Obj(); // 0x224 PushV
	var_121_object = var_1_object; // 0x225 MovT
	var_122_object = var_0_object; // 0x226 MovT
	func_7545(); // 0x227 Call
	
Label_553:
	var_125_int = 11744; // 0x229 PushI
	var_126_bool = var_41_bool == var_125_int; // 0x22a Eq
	if(var_126_bool == 0) goto Label_561; // 0x22b JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0x22c PushV
	var_127_object = var_1_object; // 0x22d MovT
	var_128_object = var_0_object; // 0x22e MovT
	func_7551(); // 0x22f Call
	
Label_561:
	var_137_int = 11745; // 0x231 PushI
	var_138_bool = var_41_bool == var_137_int; // 0x232 Eq
	if(var_138_bool == 0) goto Label_569; // 0x233 JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0x234 PushV
	var_139_object = var_1_object; // 0x235 MovT
	var_140_object = var_0_object; // 0x236 MovT
	func_7551(); // 0x237 Call
	
Label_569:
	var_141_int = 11756; // 0x239 PushI
	var_142_bool = var_41_bool == var_141_int; // 0x23a Eq
	if(var_142_bool == 0) goto Label_577; // 0x23b JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x23c PushV
	var_143_object = var_1_object; // 0x23d MovT
	var_144_object = var_0_object; // 0x23e MovT
	func_7551(); // 0x23f Call
	
Label_577:
	var_145_int = 11759; // 0x241 PushI
	var_146_bool = var_41_bool == var_145_int; // 0x242 Eq
	if(var_146_bool == 0) goto Label_585; // 0x243 JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x244 PushV
	var_147_object = var_1_object; // 0x245 MovT
	var_148_object = var_0_object; // 0x246 MovT
	func_7551(); // 0x247 Call
	
Label_585:
	var_149_int = 11760; // 0x249 PushI
	var_150_bool = var_41_bool == var_149_int; // 0x24a Eq
	if(var_150_bool == 0) goto Label_593; // 0x24b JumpB
	var_151_object = Obj(); var_152_object = Obj(); // 0x24c PushV
	var_151_object = var_1_object; // 0x24d MovT
	var_152_object = var_0_object; // 0x24e MovT
	func_7551(); // 0x24f Call
	
Label_593:
	var_153_int = 13830; // 0x251 PushI
	var_154_bool = var_40_string == var_153_int; // 0x252 Eq
	if(var_154_bool == 0) goto Label_707; // 0x253 JumpB
	var_155_bool = 0; // 0x254 PushV
	var_155_bool = 0; // 0x255 MovB
	var_156_bool = 0; var_157_object = Obj(); // 0x256 PushV
	var_157_object = var_1_object; // 0x257 MovT
	func_8133(var_157_object); // 0x258 Call
	if(var_156_bool == 0) goto Label_609; // 0x25a JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x25b PushV
	var_165_object = var_1_object; // 0x25c MovT
	func_8145(var_165_object); // 0x25d Call
	if(var_164_bool == 0) goto Label_609; // 0x25f JumpB
	var_155_bool = 1; // 0x260 MovB
	
Label_609:
	if(var_155_bool == 0) goto Label_635; // 0x261 JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0x262 PushV
	var_170_object = var_1_object; // 0x263 MovT
	var_171_object = var_0_object; // 0x264 MovT
	func_7527(); // 0x265 Call
	var_174_string = ""; // 0x267 PushV
	var_174_string = "Neutral"; // 0x268 MovS
	func_483(var_41_bool, var_174_string); // 0x269 Call
	var_189_int = 12650; // 0x26b PushI
	SetMessage(var_189_int); // 0x26c TObjFunc
	ClearReplies(); // 0x26e TObjFunc
	var_190_int = 10633; // 0x270 PushI
	var_191_int = 13839; // 0x271 PushI
	var_192_int = 11732; // 0x272 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x273 TObjFunc
	var_193_int = 10665; // 0x275 PushI
	var_194_int = 11772; // 0x276 PushI
	var_195_int = 11771; // 0x277 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x278 TObjFunc
	return 0; // 0x27a Return
	
Label_635:
	var_196_string = ""; // 0x27b PushV
	var_196_string = "Neutral"; // 0x27c MovS
	func_483(var_41_bool, var_196_string); // 0x27d Call
	var_197_int = 11979; // 0x27f PushI
	SetMessage(var_197_int); // 0x280 TObjFunc
	ClearReplies(); // 0x282 TObjFunc
	var_198_bool = 0; // 0x284 PushV
	var_198_bool = 0; // 0x285 MovB
	var_199_bool = 0; var_200_object = Obj(); // 0x286 PushV
	var_200_object = var_1_object; // 0x287 MovT
	func_8157(var_200_object); // 0x288 Call
	if(var_199_bool == 0) goto Label_657; // 0x28a JumpB
	var_205_bool = 0; var_206_object = Obj(); // 0x28b PushV
	var_206_object = var_1_object; // 0x28c MovT
	func_8073(var_206_object); // 0x28d Call
	if(var_205_bool == 0) goto Label_657; // 0x28f JumpB
	var_198_bool = 1; // 0x290 MovB
	
Label_657:
	if(var_198_bool == 0) goto Label_663; // 0x291 JumpB
	var_211_int = 12649; // 0x292 PushI
	var_212_int = 13832; // 0x293 PushI
	var_213_int = 13829; // 0x294 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x295 TObjFunc
	
Label_663:
	var_214_bool = 0; // 0x297 PushV
	var_214_bool = 0; // 0x298 MovB
	var_215_bool = 0; var_216_object = Obj(); // 0x299 PushV
	var_216_object = var_1_object; // 0x29a MovT
	func_8169(var_216_object); // 0x29b Call
	if(var_215_bool == 0) goto Label_676; // 0x29d JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0x29e PushV
	var_222_object = var_1_object; // 0x29f MovT
	func_8073(var_222_object); // 0x2a0 Call
	if(var_221_bool == 0) goto Label_676; // 0x2a2 JumpB
	var_214_bool = 1; // 0x2a3 MovB
	
Label_676:
	if(var_214_bool == 0) goto Label_682; // 0x2a4 JumpB
	var_223_int = 12660; // 0x2a5 PushI
	var_224_int = 13832; // 0x2a6 PushI
	var_225_int = 13840; // 0x2a7 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x2a8 TObjFunc
	
Label_682:
	var_226_bool = 0; // 0x2aa PushV
	var_226_bool = 0; // 0x2ab MovB
	var_227_bool = 0; var_228_object = Obj(); // 0x2ac PushV
	var_228_object = var_1_object; // 0x2ad MovT
	func_8181(var_228_object); // 0x2ae Call
	if(var_227_bool == 0) goto Label_695; // 0x2b0 JumpB
	var_233_bool = 0; var_234_object = Obj(); // 0x2b1 PushV
	var_234_object = var_1_object; // 0x2b2 MovT
	func_8193(var_234_object); // 0x2b3 Call
	if(var_233_bool == 0) goto Label_695; // 0x2b5 JumpB
	var_226_bool = 1; // 0x2b6 MovB
	
Label_695:
	if(var_226_bool == 0) goto Label_701; // 0x2b7 JumpB
	var_239_int = 11980; // 0x2b8 PushI
	var_240_int = 13196; // 0x2b9 PushI
	var_241_int = 13195; // 0x2ba PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x2bb TObjFunc
	
Label_701:
	var_242_int = 13018; // 0x2bd PushI
	var_243_int = -1; // 0x2be PushI
	var_244_int = 14224; // 0x2bf PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x2c0 TObjFunc
	return 0; // 0x2c2 Return
	
Label_707:
	var_245_int = 13196; // 0x2c3 PushI
	var_246_bool = var_40_string == var_245_int; // 0x2c4 Eq
	if(var_246_bool == 0) goto Label_735; // 0x2c5 JumpB
	var_247_string = ""; // 0x2c6 PushV
	var_247_string = "Neutral"; // 0x2c7 MovS
	func_483(var_41_bool, var_247_string); // 0x2c8 Call
	var_248_int = 11981; // 0x2ca PushI
	SetMessage(var_248_int); // 0x2cb TObjFunc
	ClearReplies(); // 0x2cd TObjFunc
	var_249_bool = 0; var_250_object = Obj(); // 0x2cf PushV
	var_250_object = var_1_object; // 0x2d0 MovT
	func_7829(var_249_bool, var_250_object); // 0x2d1 Call
	if(var_249_bool == 0) goto Label_729; // 0x2d3 JumpB
	var_253_int = 11982; // 0x2d4 PushI
	var_254_int = 13198; // 0x2d5 PushI
	var_255_int = 13197; // 0x2d6 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x2d7 TObjFunc
	
Label_729:
	var_256_int = 12658; // 0x2d9 PushI
	var_257_int = 11733; // 0x2da PushI
	var_258_int = 13838; // 0x2db PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x2dc TObjFunc
	return 0; // 0x2de Return
	
Label_735:
	var_259_int = 11733; // 0x2df PushI
	var_260_bool = var_40_string == var_259_int; // 0x2e0 Eq
	if(var_260_bool == 0) goto Label_763; // 0x2e1 JumpB
	var_261_string = ""; // 0x2e2 PushV
	var_261_string = "Neutral"; // 0x2e3 MovS
	func_483(var_41_bool, var_261_string); // 0x2e4 Call
	var_262_int = 10634; // 0x2e6 PushI
	SetMessage(var_262_int); // 0x2e7 TObjFunc
	ClearReplies(); // 0x2e9 TObjFunc
	var_263_int = 10635; // 0x2eb PushI
	var_264_int = 11735; // 0x2ec PushI
	var_265_int = 11734; // 0x2ed PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x2ee TObjFunc
	var_266_int = 10660; // 0x2f0 PushI
	var_267_int = 11766; // 0x2f1 PushI
	var_268_int = 11763; // 0x2f2 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x2f3 TObjFunc
	var_269_int = 10661; // 0x2f5 PushI
	var_270_int = 11766; // 0x2f6 PushI
	var_271_int = 11765; // 0x2f7 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x2f8 TObjFunc
	return 0; // 0x2fa Return
	
Label_763:
	var_272_int = 11766; // 0x2fb PushI
	var_273_bool = var_40_string == var_272_int; // 0x2fc Eq
	if(var_273_bool == 0) goto Label_786; // 0x2fd JumpB
	var_274_string = ""; // 0x2fe PushV
	var_274_string = "Neutral"; // 0x2ff MovS
	func_483(var_41_bool, var_274_string); // 0x300 Call
	var_275_int = 10662; // 0x302 PushI
	SetMessage(var_275_int); // 0x303 TObjFunc
	ClearReplies(); // 0x305 TObjFunc
	var_276_int = 10663; // 0x307 PushI
	var_277_int = 11735; // 0x308 PushI
	var_278_int = 11767; // 0x309 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x30a TObjFunc
	var_279_int = 10664; // 0x30c PushI
	var_280_int = 11735; // 0x30d PushI
	var_281_int = 11769; // 0x30e PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x30f TObjFunc
	return 0; // 0x311 Return
	
Label_786:
	var_282_int = 11735; // 0x312 PushI
	var_283_bool = var_40_string == var_282_int; // 0x313 Eq
	if(var_283_bool == 0) goto Label_809; // 0x314 JumpB
	var_284_string = ""; // 0x315 PushV
	var_284_string = "Neutral"; // 0x316 MovS
	func_483(var_41_bool, var_284_string); // 0x317 Call
	var_285_int = 10636; // 0x319 PushI
	SetMessage(var_285_int); // 0x31a TObjFunc
	ClearReplies(); // 0x31c TObjFunc
	var_286_int = 10637; // 0x31e PushI
	var_287_int = 11737; // 0x31f PushI
	var_288_int = 11736; // 0x320 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x321 TObjFunc
	var_289_int = 10647; // 0x323 PushI
	var_290_int = 11749; // 0x324 PushI
	var_291_int = 11748; // 0x325 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x326 TObjFunc
	return 0; // 0x328 Return
	
Label_809:
	var_292_int = 11749; // 0x329 PushI
	var_293_bool = var_40_string == var_292_int; // 0x32a Eq
	if(var_293_bool == 0) goto Label_832; // 0x32b JumpB
	var_294_string = ""; // 0x32c PushV
	var_294_string = "Neutral"; // 0x32d MovS
	func_483(var_41_bool, var_294_string); // 0x32e Call
	var_295_int = 10648; // 0x330 PushI
	SetMessage(var_295_int); // 0x331 TObjFunc
	ClearReplies(); // 0x333 TObjFunc
	var_296_int = 10649; // 0x335 PushI
	var_297_int = 11737; // 0x336 PushI
	var_298_int = 11750; // 0x337 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x338 TObjFunc
	var_299_int = 10650; // 0x33a PushI
	var_300_int = 11753; // 0x33b PushI
	var_301_int = 11752; // 0x33c PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x33d TObjFunc
	return 0; // 0x33f Return
	
Label_832:
	var_302_int = 11753; // 0x340 PushI
	var_303_bool = var_40_string == var_302_int; // 0x341 Eq
	if(var_303_bool == 0) goto Label_855; // 0x342 JumpB
	var_304_string = ""; // 0x343 PushV
	var_304_string = "Neutral"; // 0x344 MovS
	func_483(var_41_bool, var_304_string); // 0x345 Call
	var_305_int = 10651; // 0x347 PushI
	SetMessage(var_305_int); // 0x348 TObjFunc
	ClearReplies(); // 0x34a TObjFunc
	var_306_int = 10652; // 0x34c PushI
	var_307_int = 11755; // 0x34d PushI
	var_308_int = 11754; // 0x34e PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x34f TObjFunc
	var_309_int = 10659; // 0x351 PushI
	var_310_int = 11755; // 0x352 PushI
	var_311_int = 11761; // 0x353 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x354 TObjFunc
	return 0; // 0x356 Return
	
Label_855:
	var_312_int = 11755; // 0x357 PushI
	var_313_bool = var_40_string == var_312_int; // 0x358 Eq
	if(var_313_bool == 0) goto Label_878; // 0x359 JumpB
	var_314_string = ""; // 0x35a PushV
	var_314_string = "Neutral"; // 0x35b MovS
	func_483(var_41_bool, var_314_string); // 0x35c Call
	var_315_int = 10653; // 0x35e PushI
	SetMessage(var_315_int); // 0x35f TObjFunc
	ClearReplies(); // 0x361 TObjFunc
	var_316_int = 10654; // 0x363 PushI
	var_317_int = -1; // 0x364 PushI
	var_318_int = 11756; // 0x365 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x366 TObjFunc
	var_319_int = 10655; // 0x368 PushI
	var_320_int = 11758; // 0x369 PushI
	var_321_int = 11757; // 0x36a PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x36b TObjFunc
	return 0; // 0x36d Return
	
Label_878:
	var_322_int = 11758; // 0x36e PushI
	var_323_bool = var_40_string == var_322_int; // 0x36f Eq
	if(var_323_bool == 0) goto Label_901; // 0x370 JumpB
	var_324_string = ""; // 0x371 PushV
	var_324_string = "Neutral"; // 0x372 MovS
	func_483(var_41_bool, var_324_string); // 0x373 Call
	var_325_int = 10656; // 0x375 PushI
	SetMessage(var_325_int); // 0x376 TObjFunc
	ClearReplies(); // 0x378 TObjFunc
	var_326_int = 10657; // 0x37a PushI
	var_327_int = -1; // 0x37b PushI
	var_328_int = 11759; // 0x37c PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x37d TObjFunc
	var_329_int = 10658; // 0x37f PushI
	var_330_int = -1; // 0x380 PushI
	var_331_int = 11760; // 0x381 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x382 TObjFunc
	return 0; // 0x384 Return
	
Label_901:
	var_332_int = 11737; // 0x385 PushI
	var_333_bool = var_40_string == var_332_int; // 0x386 Eq
	if(var_333_bool == 0) goto Label_929; // 0x387 JumpB
	var_334_string = ""; // 0x388 PushV
	var_334_string = "Neutral"; // 0x389 MovS
	func_483(var_41_bool, var_334_string); // 0x38a Call
	var_335_int = 10638; // 0x38c PushI
	SetMessage(var_335_int); // 0x38d TObjFunc
	ClearReplies(); // 0x38f TObjFunc
	var_336_int = 10642; // 0x391 PushI
	var_337_int = 11743; // 0x392 PushI
	var_338_int = 11742; // 0x393 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x394 TObjFunc
	var_339_int = 10639; // 0x396 PushI
	var_340_int = 11739; // 0x397 PushI
	var_341_int = 11738; // 0x398 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x399 TObjFunc
	var_342_int = 10646; // 0x39b PushI
	var_343_int = 11739; // 0x39c PushI
	var_344_int = 11746; // 0x39d PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x39e TObjFunc
	return 0; // 0x3a0 Return
	
Label_929:
	var_345_int = 11739; // 0x3a1 PushI
	var_346_bool = var_40_string == var_345_int; // 0x3a2 Eq
	if(var_346_bool == 0) goto Label_947; // 0x3a3 JumpB
	var_347_string = ""; // 0x3a4 PushV
	var_347_string = "Neutral"; // 0x3a5 MovS
	func_483(var_41_bool, var_347_string); // 0x3a6 Call
	var_348_int = 10640; // 0x3a8 PushI
	SetMessage(var_348_int); // 0x3a9 TObjFunc
	ClearReplies(); // 0x3ab TObjFunc
	var_349_int = 10641; // 0x3ad PushI
	var_350_int = 11755; // 0x3ae PushI
	var_351_int = 11740; // 0x3af PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x3b0 TObjFunc
	return 0; // 0x3b2 Return
	
Label_947:
	var_352_int = 11743; // 0x3b3 PushI
	var_353_bool = var_40_string == var_352_int; // 0x3b4 Eq
	if(var_353_bool == 0) goto Label_970; // 0x3b5 JumpB
	var_354_string = ""; // 0x3b6 PushV
	var_354_string = "Neutral"; // 0x3b7 MovS
	func_483(var_41_bool, var_354_string); // 0x3b8 Call
	var_355_int = 10643; // 0x3ba PushI
	SetMessage(var_355_int); // 0x3bb TObjFunc
	ClearReplies(); // 0x3bd TObjFunc
	var_356_int = 10644; // 0x3bf PushI
	var_357_int = -1; // 0x3c0 PushI
	var_358_int = 11744; // 0x3c1 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x3c2 TObjFunc
	var_359_int = 10645; // 0x3c4 PushI
	var_360_int = -1; // 0x3c5 PushI
	var_361_int = 11745; // 0x3c6 PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x3c7 TObjFunc
	return 0; // 0x3c9 Return
	
Label_970:
	var_362_int = 13198; // 0x3ca PushI
	var_363_bool = var_40_string == var_362_int; // 0x3cb Eq
	if(var_363_bool == 0) goto Label_988; // 0x3cc JumpB
	var_364_string = ""; // 0x3cd PushV
	var_364_string = "Neutral"; // 0x3ce MovS
	func_483(var_41_bool, var_364_string); // 0x3cf Call
	var_365_int = 11983; // 0x3d1 PushI
	SetMessage(var_365_int); // 0x3d2 TObjFunc
	ClearReplies(); // 0x3d4 TObjFunc
	var_366_int = 11984; // 0x3d6 PushI
	var_367_int = 13200; // 0x3d7 PushI
	var_368_int = 13199; // 0x3d8 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x3d9 TObjFunc
	return 0; // 0x3db Return
	
Label_988:
	var_369_int = 13200; // 0x3dc PushI
	var_370_bool = var_40_string == var_369_int; // 0x3dd Eq
	if(var_370_bool == 0) goto Label_1006; // 0x3de JumpB
	var_371_string = ""; // 0x3df PushV
	var_371_string = "Neutral"; // 0x3e0 MovS
	func_483(var_41_bool, var_371_string); // 0x3e1 Call
	var_372_int = 11985; // 0x3e3 PushI
	SetMessage(var_372_int); // 0x3e4 TObjFunc
	ClearReplies(); // 0x3e6 TObjFunc
	var_373_int = 11986; // 0x3e8 PushI
	var_374_int = -1; // 0x3e9 PushI
	var_375_int = 13201; // 0x3ea PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x3eb TObjFunc
	return 0; // 0x3ed Return
	
Label_1006:
	var_376_int = 13832; // 0x3ee PushI
	var_377_bool = var_40_string == var_376_int; // 0x3ef Eq
	if(var_377_bool == 0) goto Label_1024; // 0x3f0 JumpB
	var_378_string = ""; // 0x3f1 PushV
	var_378_string = "Neutral"; // 0x3f2 MovS
	func_483(var_41_bool, var_378_string); // 0x3f3 Call
	var_379_int = 12652; // 0x3f5 PushI
	SetMessage(var_379_int); // 0x3f6 TObjFunc
	ClearReplies(); // 0x3f8 TObjFunc
	var_380_int = 12653; // 0x3fa PushI
	var_381_int = 13834; // 0x3fb PushI
	var_382_int = 13833; // 0x3fc PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x3fd TObjFunc
	return 0; // 0x3ff Return
	
Label_1024:
	var_383_int = 13834; // 0x400 PushI
	var_384_bool = var_40_string == var_383_int; // 0x401 Eq
	if(var_384_bool == 0) goto Label_1042; // 0x402 JumpB
	var_385_string = ""; // 0x403 PushV
	var_385_string = "Neutral"; // 0x404 MovS
	func_483(var_41_bool, var_385_string); // 0x405 Call
	var_386_int = 12654; // 0x407 PushI
	SetMessage(var_386_int); // 0x408 TObjFunc
	ClearReplies(); // 0x40a TObjFunc
	var_387_int = 12655; // 0x40c PushI
	var_388_int = -1; // 0x40d PushI
	var_389_int = 13835; // 0x40e PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x40f TObjFunc
	return 0; // 0x411 Return
	
Label_1042:
	var_390_int = 11772; // 0x412 PushI
	var_391_bool = var_40_string == var_390_int; // 0x413 Eq
	if(var_391_bool == 0) goto Label_1060; // 0x414 JumpB
	var_392_string = ""; // 0x415 PushV
	var_392_string = "Neutral"; // 0x416 MovS
	func_483(var_41_bool, var_392_string); // 0x417 Call
	var_393_int = 10666; // 0x419 PushI
	SetMessage(var_393_int); // 0x41a TObjFunc
	ClearReplies(); // 0x41c TObjFunc
	var_394_int = 10668; // 0x41e PushI
	var_395_int = 11776; // 0x41f PushI
	var_396_int = 11775; // 0x420 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x421 TObjFunc
	return 0; // 0x423 Return
	
Label_1060:
	var_397_int = 11776; // 0x424 PushI
	var_398_bool = var_40_string == var_397_int; // 0x425 Eq
	if(var_398_bool == 0) goto Label_1078; // 0x426 JumpB
	var_399_string = ""; // 0x427 PushV
	var_399_string = "Neutral"; // 0x428 MovS
	func_483(var_41_bool, var_399_string); // 0x429 Call
	var_400_int = 10669; // 0x42b PushI
	SetMessage(var_400_int); // 0x42c TObjFunc
	ClearReplies(); // 0x42e TObjFunc
	var_401_int = 10670; // 0x430 PushI
	var_402_int = 13839; // 0x431 PushI
	var_403_int = 11777; // 0x432 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x433 TObjFunc
	return 0; // 0x435 Return
	
Label_1078:
	var_404_int = 13839; // 0x436 PushI
	var_405_bool = var_40_string == var_404_int; // 0x437 Eq
	if(var_405_bool == 0) goto Label_1096; // 0x438 JumpB
	var_406_string = ""; // 0x439 PushV
	var_406_string = "Neutral"; // 0x43a MovS
	func_483(var_41_bool, var_406_string); // 0x43b Call
	var_407_int = 12659; // 0x43d PushI
	SetMessage(var_407_int); // 0x43e TObjFunc
	ClearReplies(); // 0x440 TObjFunc
	var_408_int = 12648; // 0x442 PushI
	var_409_int = 13831; // 0x443 PushI
	var_410_int = 13828; // 0x444 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x445 TObjFunc
	return 0; // 0x447 Return
	
Label_1096:
	var_411_int = 13831; // 0x448 PushI
	var_412_bool = var_40_string == var_411_int; // 0x449 Eq
	if(var_412_bool == 0) goto Label_1124; // 0x44a JumpB
	var_413_string = ""; // 0x44b PushV
	var_413_string = "Neutral"; // 0x44c MovS
	func_483(var_41_bool, var_413_string); // 0x44d Call
	var_414_int = 12651; // 0x44f PushI
	SetMessage(var_414_int); // 0x450 TObjFunc
	ClearReplies(); // 0x452 TObjFunc
	var_415_int = 12656; // 0x454 PushI
	var_416_int = 13837; // 0x455 PushI
	var_417_int = 13836; // 0x456 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x457 TObjFunc
	var_418_int = 12695; // 0x459 PushI
	var_419_int = 13887; // 0x45a PushI
	var_420_int = 13886; // 0x45b PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x45c TObjFunc
	var_421_int = 12701; // 0x45e PushI
	var_422_int = 13897; // 0x45f PushI
	var_423_int = 13892; // 0x460 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x461 TObjFunc
	return 0; // 0x463 Return
	
Label_1124:
	var_424_int = 13897; // 0x464 PushI
	var_425_bool = var_40_string == var_424_int; // 0x465 Eq
	if(var_425_bool == 0) goto Label_1142; // 0x466 JumpB
	var_426_string = ""; // 0x467 PushV
	var_426_string = "Neutral"; // 0x468 MovS
	func_483(var_41_bool, var_426_string); // 0x469 Call
	var_427_int = 12706; // 0x46b PushI
	SetMessage(var_427_int); // 0x46c TObjFunc
	ClearReplies(); // 0x46e TObjFunc
	var_428_int = 12707; // 0x470 PushI
	var_429_int = 13899; // 0x471 PushI
	var_430_int = 13898; // 0x472 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x473 TObjFunc
	return 0; // 0x475 Return
	
Label_1142:
	var_431_int = 13899; // 0x476 PushI
	var_432_bool = var_40_string == var_431_int; // 0x477 Eq
	if(var_432_bool == 0) goto Label_1165; // 0x478 JumpB
	var_433_string = ""; // 0x479 PushV
	var_433_string = "Neutral"; // 0x47a MovS
	func_483(var_41_bool, var_433_string); // 0x47b Call
	var_434_int = 12708; // 0x47d PushI
	SetMessage(var_434_int); // 0x47e TObjFunc
	ClearReplies(); // 0x480 TObjFunc
	var_435_int = 12709; // 0x482 PushI
	var_436_int = 13901; // 0x483 PushI
	var_437_int = 13900; // 0x484 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x485 TObjFunc
	var_438_int = 12715; // 0x487 PushI
	var_439_int = 13901; // 0x488 PushI
	var_440_int = 13906; // 0x489 PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x48a TObjFunc
	return 0; // 0x48c Return
	
Label_1165:
	var_441_int = 13901; // 0x48d PushI
	var_442_bool = var_40_string == var_441_int; // 0x48e Eq
	if(var_442_bool == 0) goto Label_1188; // 0x48f JumpB
	var_443_string = ""; // 0x490 PushV
	var_443_string = "Neutral"; // 0x491 MovS
	func_483(var_41_bool, var_443_string); // 0x492 Call
	var_444_int = 12710; // 0x494 PushI
	SetMessage(var_444_int); // 0x495 TObjFunc
	ClearReplies(); // 0x497 TObjFunc
	var_445_int = 12711; // 0x499 PushI
	var_446_int = 13903; // 0x49a PushI
	var_447_int = 13902; // 0x49b PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x49c TObjFunc
	var_448_int = 12714; // 0x49e PushI
	var_449_int = -1; // 0x49f PushI
	var_450_int = 13905; // 0x4a0 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x4a1 TObjFunc
	return 0; // 0x4a3 Return
	
Label_1188:
	var_451_int = 13903; // 0x4a4 PushI
	var_452_bool = var_40_string == var_451_int; // 0x4a5 Eq
	if(var_452_bool == 0) goto Label_1206; // 0x4a6 JumpB
	var_453_string = ""; // 0x4a7 PushV
	var_453_string = "Neutral"; // 0x4a8 MovS
	func_483(var_41_bool, var_453_string); // 0x4a9 Call
	var_454_int = 12712; // 0x4ab PushI
	SetMessage(var_454_int); // 0x4ac TObjFunc
	ClearReplies(); // 0x4ae TObjFunc
	var_455_int = 12713; // 0x4b0 PushI
	var_456_int = -1; // 0x4b1 PushI
	var_457_int = 13904; // 0x4b2 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x4b3 TObjFunc
	return 0; // 0x4b5 Return
	
Label_1206:
	var_458_int = 13887; // 0x4b6 PushI
	var_459_bool = var_40_string == var_458_int; // 0x4b7 Eq
	if(var_459_bool == 0) goto Label_1224; // 0x4b8 JumpB
	var_460_string = ""; // 0x4b9 PushV
	var_460_string = "Neutral"; // 0x4ba MovS
	func_483(var_41_bool, var_460_string); // 0x4bb Call
	var_461_int = 12696; // 0x4bd PushI
	SetMessage(var_461_int); // 0x4be TObjFunc
	ClearReplies(); // 0x4c0 TObjFunc
	var_462_int = 12700; // 0x4c2 PushI
	var_463_int = -1; // 0x4c3 PushI
	var_464_int = 13891; // 0x4c4 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x4c5 TObjFunc
	return 0; // 0x4c7 Return
	
Label_1224:
	var_465_int = 13837; // 0x4c8 PushI
	var_466_bool = var_40_string == var_465_int; // 0x4c9 Eq
	if(var_466_bool == 0) goto Label_1247; // 0x4ca JumpB
	var_467_string = ""; // 0x4cb PushV
	var_467_string = "Neutral"; // 0x4cc MovS
	func_483(var_41_bool, var_467_string); // 0x4cd Call
	var_468_int = 12657; // 0x4cf PushI
	SetMessage(var_468_int); // 0x4d0 TObjFunc
	ClearReplies(); // 0x4d2 TObjFunc
	var_469_int = 12661; // 0x4d4 PushI
	var_470_int = 13843; // 0x4d5 PushI
	var_471_int = 13842; // 0x4d6 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x4d7 TObjFunc
	var_472_int = 12667; // 0x4d9 PushI
	var_473_int = 13843; // 0x4da PushI
	var_474_int = 13849; // 0x4db PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x4dc TObjFunc
	return 0; // 0x4de Return
	
Label_1247:
	var_475_int = 13843; // 0x4df PushI
	var_476_bool = var_40_string == var_475_int; // 0x4e0 Eq
	if(var_476_bool == 0) goto Label_1265; // 0x4e1 JumpB
	var_477_string = ""; // 0x4e2 PushV
	var_477_string = "Neutral"; // 0x4e3 MovS
	func_483(var_41_bool, var_477_string); // 0x4e4 Call
	var_478_int = 12662; // 0x4e6 PushI
	SetMessage(var_478_int); // 0x4e7 TObjFunc
	ClearReplies(); // 0x4e9 TObjFunc
	var_479_int = 12663; // 0x4eb PushI
	var_480_int = 13845; // 0x4ec PushI
	var_481_int = 13844; // 0x4ed PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x4ee TObjFunc
	return 0; // 0x4f0 Return
	
Label_1265:
	var_482_int = 13845; // 0x4f1 PushI
	var_483_bool = var_40_string == var_482_int; // 0x4f2 Eq
	if(var_483_bool == 0) goto Label_1288; // 0x4f3 JumpB
	var_484_string = ""; // 0x4f4 PushV
	var_484_string = "Neutral"; // 0x4f5 MovS
	func_483(var_41_bool, var_484_string); // 0x4f6 Call
	var_485_int = 12664; // 0x4f8 PushI
	SetMessage(var_485_int); // 0x4f9 TObjFunc
	ClearReplies(); // 0x4fb TObjFunc
	var_486_int = 12665; // 0x4fd PushI
	var_487_int = -1; // 0x4fe PushI
	var_488_int = 13846; // 0x4ff PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x500 TObjFunc
	var_489_int = 12668; // 0x502 PushI
	var_490_int = -1; // 0x503 PushI
	var_491_int = 13851; // 0x504 PushI
	AddReply(var_489_int, var_490_int, var_491_int); // 0x505 TObjFunc
	return 0; // 0x507 Return
	
Label_1288:
	var_3_string = 1; // 0x508 TMovB
	var_492_bool = 0; // 0x509 PushV
	func_7001(var_492_bool); // 0x50a Call
	if(var_492_bool == 0) goto Label_1296; // 0x50c JumpB
	lshStopAnimation(); // 0x50d Func
	goto Label_1298; // 0x50f Jump
	
Label_1298:
	return 0; // 0x512 Return
	
Label_1296:
	StopAnimation(); // 0x510 Func
	
Label_1300:
	return 0; // 0x514 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x6d5 PushI
	if(var_42_int == 0) goto Label_3025; // 0x6d6 JumpB
	func_6878(); // 0x6d8 Call
	var_44_int = 5906; // 0x6da PushI
	var_45_bool = var_41_bool == var_44_int; // 0x6db Eq
	if(var_45_bool == 0) goto Label_1767; // 0x6dc JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x6dd PushV
	var_46_object = var_1_object; // 0x6de MovT
	var_47_object = var_0_object; // 0x6df MovT
	func_7003(); // 0x6e0 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0x6e2 PushV
	var_50_object = var_1_object; // 0x6e3 MovT
	var_51_object = var_0_object; // 0x6e4 MovT
	func_7194(); // 0x6e5 Call
	
Label_1767:
	var_68_int = 5766; // 0x6e7 PushI
	var_69_bool = var_41_bool == var_68_int; // 0x6e8 Eq
	if(var_69_bool == 0) goto Label_1775; // 0x6e9 JumpB
	var_70_object = Obj(); var_71_object = Obj(); // 0x6ea PushV
	var_70_object = var_1_object; // 0x6eb MovT
	var_71_object = var_0_object; // 0x6ec MovT
	func_7009(); // 0x6ed Call
	
Label_1775:
	var_74_int = 5767; // 0x6ef PushI
	var_75_bool = var_41_bool == var_74_int; // 0x6f0 Eq
	if(var_75_bool == 0) goto Label_1783; // 0x6f1 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x6f2 PushV
	var_76_object = var_1_object; // 0x6f3 MovT
	var_77_object = var_0_object; // 0x6f4 MovT
	func_7009(); // 0x6f5 Call
	
Label_1783:
	var_78_int = 5743; // 0x6f7 PushI
	var_79_bool = var_41_bool == var_78_int; // 0x6f8 Eq
	if(var_79_bool == 0) goto Label_1791; // 0x6f9 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x6fa PushV
	var_80_object = var_1_object; // 0x6fb MovT
	var_81_object = var_0_object; // 0x6fc MovT
	func_7015(); // 0x6fd Call
	
Label_1791:
	var_84_int = 5753; // 0x6ff PushI
	var_85_bool = var_41_bool == var_84_int; // 0x700 Eq
	if(var_85_bool == 0) goto Label_1799; // 0x701 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x702 PushV
	var_86_object = var_1_object; // 0x703 MovT
	var_87_object = var_0_object; // 0x704 MovT
	func_7021(); // 0x705 Call
	
Label_1799:
	var_90_int = 5754; // 0x707 PushI
	var_91_bool = var_41_bool == var_90_int; // 0x708 Eq
	if(var_91_bool == 0) goto Label_1807; // 0x709 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x70a PushV
	var_92_object = var_1_object; // 0x70b MovT
	var_93_object = var_0_object; // 0x70c MovT
	func_7021(); // 0x70d Call
	
Label_1807:
	var_94_int = 5757; // 0x70f PushI
	var_95_bool = var_41_bool == var_94_int; // 0x710 Eq
	if(var_95_bool == 0) goto Label_1815; // 0x711 JumpB
	var_96_object = Obj(); var_97_object = Obj(); // 0x712 PushV
	var_96_object = var_1_object; // 0x713 MovT
	var_97_object = var_0_object; // 0x714 MovT
	func_7021(); // 0x715 Call
	
Label_1815:
	var_98_int = 5758; // 0x717 PushI
	var_99_bool = var_41_bool == var_98_int; // 0x718 Eq
	if(var_99_bool == 0) goto Label_1823; // 0x719 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x71a PushV
	var_100_object = var_1_object; // 0x71b MovT
	var_101_object = var_0_object; // 0x71c MovT
	func_7021(); // 0x71d Call
	
Label_1823:
	var_102_int = 7040; // 0x71f PushI
	var_103_bool = var_41_bool == var_102_int; // 0x720 Eq
	if(var_103_bool == 0) goto Label_1831; // 0x721 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x722 PushV
	var_104_object = var_1_object; // 0x723 MovT
	var_105_object = var_0_object; // 0x724 MovT
	func_7039(); // 0x725 Call
	
Label_1831:
	var_108_int = 7046; // 0x727 PushI
	var_109_bool = var_41_bool == var_108_int; // 0x728 Eq
	if(var_109_bool == 0) goto Label_1839; // 0x729 JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x72a PushV
	var_110_object = var_1_object; // 0x72b MovT
	var_111_object = var_0_object; // 0x72c MovT
	func_7045(); // 0x72d Call
	
Label_1839:
	var_114_int = 7054; // 0x72f PushI
	var_115_bool = var_41_bool == var_114_int; // 0x730 Eq
	if(var_115_bool == 0) goto Label_1847; // 0x731 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x732 PushV
	var_116_object = var_1_object; // 0x733 MovT
	var_117_object = var_0_object; // 0x734 MovT
	func_7051(); // 0x735 Call
	
Label_1847:
	var_120_int = 7064; // 0x737 PushI
	var_121_bool = var_41_bool == var_120_int; // 0x738 Eq
	if(var_121_bool == 0) goto Label_1855; // 0x739 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x73a PushV
	var_122_object = var_1_object; // 0x73b MovT
	var_123_object = var_0_object; // 0x73c MovT
	func_7057(); // 0x73d Call
	
Label_1855:
	var_126_int = 7075; // 0x73f PushI
	var_127_bool = var_41_bool == var_126_int; // 0x740 Eq
	if(var_127_bool == 0) goto Label_1863; // 0x741 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x742 PushV
	var_128_object = var_1_object; // 0x743 MovT
	var_129_object = var_0_object; // 0x744 MovT
	func_7063(); // 0x745 Call
	
Label_1863:
	var_132_int = 7086; // 0x747 PushI
	var_133_bool = var_41_bool == var_132_int; // 0x748 Eq
	if(var_133_bool == 0) goto Label_1871; // 0x749 JumpB
	var_134_object = Obj(); var_135_object = Obj(); // 0x74a PushV
	var_134_object = var_1_object; // 0x74b MovT
	var_135_object = var_0_object; // 0x74c MovT
	func_7069(); // 0x74d Call
	
Label_1871:
	var_138_int = 7089; // 0x74f PushI
	var_139_bool = var_41_bool == var_138_int; // 0x750 Eq
	if(var_139_bool == 0) goto Label_1879; // 0x751 JumpB
	var_140_object = Obj(); var_141_object = Obj(); // 0x752 PushV
	var_140_object = var_1_object; // 0x753 MovT
	var_141_object = var_0_object; // 0x754 MovT
	func_7069(); // 0x755 Call
	
Label_1879:
	var_142_int = 7095; // 0x757 PushI
	var_143_bool = var_41_bool == var_142_int; // 0x758 Eq
	if(var_143_bool == 0) goto Label_1887; // 0x759 JumpB
	var_144_object = Obj(); var_145_object = Obj(); // 0x75a PushV
	var_144_object = var_1_object; // 0x75b MovT
	var_145_object = var_0_object; // 0x75c MovT
	func_7075(); // 0x75d Call
	
Label_1887:
	var_148_int = 7099; // 0x75f PushI
	var_149_bool = var_41_bool == var_148_int; // 0x760 Eq
	if(var_149_bool == 0) goto Label_1895; // 0x761 JumpB
	var_150_object = Obj(); var_151_object = Obj(); // 0x762 PushV
	var_150_object = var_1_object; // 0x763 MovT
	var_151_object = var_0_object; // 0x764 MovT
	func_7081(); // 0x765 Call
	
Label_1895:
	var_154_int = 7100; // 0x767 PushI
	var_155_bool = var_41_bool == var_154_int; // 0x768 Eq
	if(var_155_bool == 0) goto Label_1903; // 0x769 JumpB
	var_156_object = Obj(); var_157_object = Obj(); // 0x76a PushV
	var_156_object = var_1_object; // 0x76b MovT
	var_157_object = var_0_object; // 0x76c MovT
	func_7081(); // 0x76d Call
	
Label_1903:
	var_158_int = 5734; // 0x76f PushI
	var_159_bool = var_40_string == var_158_int; // 0x770 Eq
	if(var_159_bool == 0) goto Label_2236; // 0x771 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x772 PushV
	var_161_object = var_1_object; // 0x773 MovT
	func_7625(var_161_object); // 0x774 Call
	if(var_160_bool == 0) goto Label_1931; // 0x776 JumpB
	var_168_string = ""; // 0x777 PushV
	var_168_string = "Neutral"; // 0x778 MovS
	func_1732(var_41_bool, var_168_string); // 0x779 Call
	var_183_int = 5205; // 0x77b PushI
	SetMessage(var_183_int); // 0x77c TObjFunc
	ClearReplies(); // 0x77e TObjFunc
	var_184_int = 5206; // 0x780 PushI
	var_185_int = 5905; // 0x781 PushI
	var_186_int = 5735; // 0x782 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x783 TObjFunc
	var_187_int = 5365; // 0x785 PushI
	var_188_int = 5908; // 0x786 PushI
	var_189_int = 5907; // 0x787 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x788 TObjFunc
	return 0; // 0x78a Return
	
Label_1931:
	var_190_string = ""; // 0x78b PushV
	var_190_string = "Neutral"; // 0x78c MovS
	func_1732(var_41_bool, var_190_string); // 0x78d Call
	var_191_int = 6325; // 0x78f PushI
	SetMessage(var_191_int); // 0x790 TObjFunc
	ClearReplies(); // 0x792 TObjFunc
	var_192_bool = 0; // 0x794 PushV
	var_192_bool = 0; // 0x795 MovB
	var_193_bool = 0; var_194_object = Obj(); // 0x796 PushV
	var_194_object = var_1_object; // 0x797 MovT
	func_7637(var_194_object); // 0x798 Call
	if(var_193_bool == 0) goto Label_1953; // 0x79a JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x79b PushV
	var_200_object = var_1_object; // 0x79c MovT
	func_7673(var_200_object); // 0x79d Call
	if(var_199_bool == 0) goto Label_1953; // 0x79f JumpB
	var_192_bool = 1; // 0x7a0 MovB
	
Label_1953:
	if(var_192_bool == 0) goto Label_1959; // 0x7a1 JumpB
	var_205_int = 6329; // 0x7a2 PushI
	var_206_int = 5761; // 0x7a3 PushI
	var_207_int = 6985; // 0x7a4 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x7a5 TObjFunc
	
Label_1959:
	var_208_bool = 0; // 0x7a7 PushV
	var_208_bool = 1; // 0x7a8 MovB
	var_209_bool = 0; // 0x7a9 PushV
	var_209_bool = 0; // 0x7aa MovB
	var_210_bool = 0; // 0x7ab PushV
	var_210_bool = 0; // 0x7ac MovB
	var_211_bool = 0; var_212_object = Obj(); // 0x7ad PushV
	var_212_object = var_1_object; // 0x7ae MovT
	func_7964(var_211_bool, var_212_object); // 0x7af Call
	if(var_211_bool == 0) goto Label_1976; // 0x7b1 JumpB
	var_222_bool = 0; var_223_object = Obj(); // 0x7b2 PushV
	var_223_object = var_1_object; // 0x7b3 MovT
	func_7649(var_223_object); // 0x7b4 Call
	if(var_222_bool == 0) goto Label_1976; // 0x7b6 JumpB
	var_210_bool = 1; // 0x7b7 MovB
	
Label_1976:
	if(var_210_bool == 0) goto Label_1983; // 0x7b8 JumpB
	var_228_bool = 0; var_229_object = Obj(); // 0x7b9 PushV
	var_229_object = var_1_object; // 0x7ba MovT
	func_7673(var_229_object); // 0x7bb Call
	if(var_228_bool == 0) goto Label_1983; // 0x7bd JumpB
	var_209_bool = 1; // 0x7be MovB
	
Label_1983:
	if(var_209_bool == 0) goto Label_2008; // 0x7bf JumpB
	var_230_bool = 0; // 0x7c0 PushV
	var_230_bool = 0; // 0x7c1 MovB
	var_231_bool = 0; // 0x7c2 PushV
	var_231_bool = 0; // 0x7c3 MovB
	var_232_bool = 0; var_233_object = Obj(); // 0x7c4 PushV
	var_233_object = var_1_object; // 0x7c5 MovT
	func_8046(var_232_bool, var_233_object); // 0x7c6 Call
	if(var_232_bool == 0) goto Label_1999; // 0x7c8 JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0x7c9 PushV
	var_244_object = var_1_object; // 0x7ca MovT
	func_7649(var_244_object); // 0x7cb Call
	if(var_243_bool == 0) goto Label_1999; // 0x7cd JumpB
	var_231_bool = 1; // 0x7ce MovB
	
Label_1999:
	if(var_231_bool == 0) goto Label_2006; // 0x7cf JumpB
	var_245_bool = 0; var_246_object = Obj(); // 0x7d0 PushV
	var_246_object = var_1_object; // 0x7d1 MovT
	func_7673(var_246_object); // 0x7d2 Call
	if(var_245_bool == 0) goto Label_2006; // 0x7d4 JumpB
	var_230_bool = 1; // 0x7d5 MovB
	
Label_2006:
	if(var_230_bool == 0) goto Label_2008; // 0x7d6 JumpB
	var_208_bool = 0; // 0x7d7 MovB
	
Label_2008:
	if(var_208_bool == 0) goto Label_2014; // 0x7d8 JumpB
	var_247_int = 6326; // 0x7d9 PushI
	var_248_int = 5738; // 0x7da PushI
	var_249_int = 6982; // 0x7db PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x7dc TObjFunc
	
Label_2014:
	var_250_bool = 0; // 0x7de PushV
	var_250_bool = 1; // 0x7df MovB
	var_251_bool = 0; // 0x7e0 PushV
	var_251_bool = 0; // 0x7e1 MovB
	var_252_bool = 0; // 0x7e2 PushV
	var_252_bool = 0; // 0x7e3 MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x7e4 PushV
	var_254_object = var_1_object; // 0x7e5 MovT
	func_8046(var_253_bool, var_254_object); // 0x7e6 Call
	if(var_253_bool == 0) goto Label_2031; // 0x7e8 JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0x7e9 PushV
	var_256_object = var_1_object; // 0x7ea MovT
	func_7661(var_256_object); // 0x7eb Call
	if(var_255_bool == 0) goto Label_2031; // 0x7ed JumpB
	var_252_bool = 1; // 0x7ee MovB
	
Label_2031:
	if(var_252_bool == 0) goto Label_2038; // 0x7ef JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x7f0 PushV
	var_262_object = var_1_object; // 0x7f1 MovT
	func_7673(var_262_object); // 0x7f2 Call
	if(var_261_bool == 0) goto Label_2038; // 0x7f4 JumpB
	var_251_bool = 1; // 0x7f5 MovB
	
Label_2038:
	if(var_251_bool == 0) goto Label_2063; // 0x7f6 JumpB
	var_263_bool = 0; // 0x7f7 PushV
	var_263_bool = 0; // 0x7f8 MovB
	var_264_bool = 0; // 0x7f9 PushV
	var_264_bool = 0; // 0x7fa MovB
	var_265_bool = 0; var_266_object = Obj(); // 0x7fb PushV
	var_266_object = var_1_object; // 0x7fc MovT
	func_7964(var_265_bool, var_266_object); // 0x7fd Call
	if(var_265_bool == 0) goto Label_2054; // 0x7ff JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x800 PushV
	var_268_object = var_1_object; // 0x801 MovT
	func_7661(var_268_object); // 0x802 Call
	if(var_267_bool == 0) goto Label_2054; // 0x804 JumpB
	var_264_bool = 1; // 0x805 MovB
	
Label_2054:
	if(var_264_bool == 0) goto Label_2061; // 0x806 JumpB
	var_269_bool = 0; var_270_object = Obj(); // 0x807 PushV
	var_270_object = var_1_object; // 0x808 MovT
	func_7673(var_270_object); // 0x809 Call
	if(var_269_bool == 0) goto Label_2061; // 0x80b JumpB
	var_263_bool = 1; // 0x80c MovB
	
Label_2061:
	if(var_263_bool == 0) goto Label_2063; // 0x80d JumpB
	var_250_bool = 0; // 0x80e MovB
	
Label_2063:
	if(var_250_bool == 0) goto Label_2069; // 0x80f JumpB
	var_271_int = 6354; // 0x810 PushI
	var_272_int = 5748; // 0x811 PushI
	var_273_int = 7010; // 0x812 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x813 TObjFunc
	
Label_2069:
	var_274_bool = 0; // 0x815 PushV
	var_274_bool = 0; // 0x816 MovB
	var_275_bool = 0; var_276_object = Obj(); // 0x817 PushV
	var_276_object = var_1_object; // 0x818 MovT
	func_8289(var_276_object); // 0x819 Call
	if(var_275_bool == 0) goto Label_2082; // 0x81b JumpB
	var_281_bool = 0; var_282_object = Obj(); // 0x81c PushV
	var_282_object = var_1_object; // 0x81d MovT
	func_7685(var_282_object); // 0x81e Call
	if(var_281_bool == 0) goto Label_2082; // 0x820 JumpB
	var_274_bool = 1; // 0x821 MovB
	
Label_2082:
	if(var_274_bool == 0) goto Label_2088; // 0x822 JumpB
	var_287_int = 6330; // 0x823 PushI
	var_288_int = 7035; // 0x824 PushI
	var_289_int = 6986; // 0x825 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x826 TObjFunc
	
Label_2088:
	var_290_bool = 0; // 0x828 PushV
	var_290_bool = 0; // 0x829 MovB
	var_291_bool = 0; var_292_object = Obj(); // 0x82a PushV
	var_292_object = var_1_object; // 0x82b MovT
	func_8265(var_292_object); // 0x82c Call
	if(var_291_bool == 0) goto Label_2101; // 0x82e JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x82f PushV
	var_298_object = var_1_object; // 0x830 MovT
	func_7697(var_298_object); // 0x831 Call
	if(var_297_bool == 0) goto Label_2101; // 0x833 JumpB
	var_290_bool = 1; // 0x834 MovB
	
Label_2101:
	if(var_290_bool == 0) goto Label_2107; // 0x835 JumpB
	var_303_int = 6337; // 0x836 PushI
	var_304_int = 7041; // 0x837 PushI
	var_305_int = 6993; // 0x838 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x839 TObjFunc
	
Label_2107:
	var_306_bool = 0; // 0x83b PushV
	var_306_bool = 0; // 0x83c MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x83d PushV
	var_308_object = var_1_object; // 0x83e MovT
	func_8277(var_308_object); // 0x83f Call
	if(var_307_bool == 0) goto Label_2120; // 0x841 JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x842 PushV
	var_314_object = var_1_object; // 0x843 MovT
	func_7709(var_314_object); // 0x844 Call
	if(var_313_bool == 0) goto Label_2120; // 0x846 JumpB
	var_306_bool = 1; // 0x847 MovB
	
Label_2120:
	if(var_306_bool == 0) goto Label_2126; // 0x848 JumpB
	var_319_int = 6332; // 0x849 PushI
	var_320_int = 7047; // 0x84a PushI
	var_321_int = 6988; // 0x84b PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x84c TObjFunc
	
Label_2126:
	var_322_bool = 0; // 0x84e PushV
	var_322_bool = 0; // 0x84f MovB
	var_323_bool = 0; // 0x850 PushV
	var_323_bool = 0; // 0x851 MovB
	var_324_bool = 0; var_325_object = Obj(); // 0x852 PushV
	var_325_object = var_1_object; // 0x853 MovT
	func_8241(var_325_object); // 0x854 Call
	if(var_324_bool == 0) goto Label_2141; // 0x856 JumpB
	var_330_bool = 0; var_331_object = Obj(); // 0x857 PushV
	var_331_object = var_1_object; // 0x858 MovT
	func_7721(var_331_object); // 0x859 Call
	if(var_330_bool == 0) goto Label_2141; // 0x85b JumpB
	var_323_bool = 1; // 0x85c MovB
	
Label_2141:
	if(var_323_bool == 0) goto Label_2148; // 0x85d JumpB
	var_336_bool = 0; var_337_object = Obj(); // 0x85e PushV
	var_337_object = var_1_object; // 0x85f MovT
	func_7673(var_337_object); // 0x860 Call
	if(var_336_bool == 0) goto Label_2148; // 0x862 JumpB
	var_322_bool = 1; // 0x863 MovB
	
Label_2148:
	if(var_322_bool == 0) goto Label_2154; // 0x864 JumpB
	var_338_int = 6339; // 0x865 PushI
	var_339_int = 7055; // 0x866 PushI
	var_340_int = 6995; // 0x867 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x868 TObjFunc
	
Label_2154:
	var_341_bool = 0; // 0x86a PushV
	var_341_bool = 0; // 0x86b MovB
	var_342_bool = 0; var_343_object = Obj(); // 0x86c PushV
	var_343_object = var_1_object; // 0x86d MovT
	func_8229(var_343_object); // 0x86e Call
	if(var_342_bool == 0) goto Label_2167; // 0x870 JumpB
	var_348_bool = 0; var_349_object = Obj(); // 0x871 PushV
	var_349_object = var_1_object; // 0x872 MovT
	func_7733(var_349_object); // 0x873 Call
	if(var_348_bool == 0) goto Label_2167; // 0x875 JumpB
	var_341_bool = 1; // 0x876 MovB
	
Label_2167:
	if(var_341_bool == 0) goto Label_2173; // 0x877 JumpB
	var_354_int = 6340; // 0x878 PushI
	var_355_int = 7065; // 0x879 PushI
	var_356_int = 6996; // 0x87a PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x87b TObjFunc
	
Label_2173:
	var_357_bool = 0; // 0x87d PushV
	var_357_bool = 0; // 0x87e MovB
	var_358_bool = 0; var_359_object = Obj(); // 0x87f PushV
	var_359_object = var_1_object; // 0x880 MovT
	func_8253(var_359_object); // 0x881 Call
	if(var_358_bool == 0) goto Label_2186; // 0x883 JumpB
	var_364_bool = 0; var_365_object = Obj(); // 0x884 PushV
	var_365_object = var_1_object; // 0x885 MovT
	func_7745(var_365_object); // 0x886 Call
	if(var_364_bool == 0) goto Label_2186; // 0x888 JumpB
	var_357_bool = 1; // 0x889 MovB
	
Label_2186:
	if(var_357_bool == 0) goto Label_2192; // 0x88a JumpB
	var_370_int = 6344; // 0x88b PushI
	var_371_int = 7083; // 0x88c PushI
	var_372_int = 7000; // 0x88d PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x88e TObjFunc
	
Label_2192:
	var_373_bool = 0; // 0x890 PushV
	var_373_bool = 0; // 0x891 MovB
	var_374_bool = 0; var_375_object = Obj(); // 0x892 PushV
	var_375_object = var_1_object; // 0x893 MovT
	func_8301(var_375_object); // 0x894 Call
	if(var_374_bool == 0) goto Label_2205; // 0x896 JumpB
	var_380_bool = 0; var_381_object = Obj(); // 0x897 PushV
	var_381_object = var_1_object; // 0x898 MovT
	func_7757(var_381_object); // 0x899 Call
	if(var_380_bool == 0) goto Label_2205; // 0x89b JumpB
	var_373_bool = 1; // 0x89c MovB
	
Label_2205:
	if(var_373_bool == 0) goto Label_2211; // 0x89d JumpB
	var_386_int = 6345; // 0x89e PushI
	var_387_int = 7090; // 0x89f PushI
	var_388_int = 7001; // 0x8a0 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x8a1 TObjFunc
	
Label_2211:
	var_389_bool = 0; // 0x8a3 PushV
	var_389_bool = 0; // 0x8a4 MovB
	var_390_bool = 0; var_391_object = Obj(); // 0x8a5 PushV
	var_391_object = var_1_object; // 0x8a6 MovT
	func_7940(var_391_object); // 0x8a7 Call
	if(var_390_bool == 0) goto Label_2224; // 0x8a9 JumpB
	var_396_bool = 0; var_397_object = Obj(); // 0x8aa PushV
	var_397_object = var_1_object; // 0x8ab MovT
	func_7769(var_397_object); // 0x8ac Call
	if(var_396_bool == 0) goto Label_2224; // 0x8ae JumpB
	var_389_bool = 1; // 0x8af MovB
	
Label_2224:
	if(var_389_bool == 0) goto Label_2230; // 0x8b0 JumpB
	var_402_int = 6346; // 0x8b1 PushI
	var_403_int = 7096; // 0x8b2 PushI
	var_404_int = 7002; // 0x8b3 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x8b4 TObjFunc
	
Label_2230:
	var_405_int = 7537; // 0x8b6 PushI
	var_406_int = -1; // 0x8b7 PushI
	var_407_int = 8319; // 0x8b8 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x8b9 TObjFunc
	return 0; // 0x8bb Return
	
Label_2236:
	var_408_int = 7096; // 0x8bc PushI
	var_409_bool = var_40_string == var_408_int; // 0x8bd Eq
	if(var_409_bool == 0) goto Label_2254; // 0x8be JumpB
	var_410_string = ""; // 0x8bf PushV
	var_410_string = "Neutral"; // 0x8c0 MovS
	func_1732(var_41_bool, var_410_string); // 0x8c1 Call
	var_411_int = 6433; // 0x8c3 PushI
	SetMessage(var_411_int); // 0x8c4 TObjFunc
	ClearReplies(); // 0x8c6 TObjFunc
	var_412_int = 6434; // 0x8c8 PushI
	var_413_int = 7098; // 0x8c9 PushI
	var_414_int = 7097; // 0x8ca PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x8cb TObjFunc
	return 0; // 0x8cd Return
	
Label_2254:
	var_415_int = 7098; // 0x8ce PushI
	var_416_bool = var_40_string == var_415_int; // 0x8cf Eq
	if(var_416_bool == 0) goto Label_2277; // 0x8d0 JumpB
	var_417_string = ""; // 0x8d1 PushV
	var_417_string = "Neutral"; // 0x8d2 MovS
	func_1732(var_41_bool, var_417_string); // 0x8d3 Call
	var_418_int = 6435; // 0x8d5 PushI
	SetMessage(var_418_int); // 0x8d6 TObjFunc
	ClearReplies(); // 0x8d8 TObjFunc
	var_419_int = 6436; // 0x8da PushI
	var_420_int = -1; // 0x8db PushI
	var_421_int = 7099; // 0x8dc PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x8dd TObjFunc
	var_422_int = 6437; // 0x8df PushI
	var_423_int = -1; // 0x8e0 PushI
	var_424_int = 7100; // 0x8e1 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x8e2 TObjFunc
	return 0; // 0x8e4 Return
	
Label_2277:
	var_425_int = 7090; // 0x8e5 PushI
	var_426_bool = var_40_string == var_425_int; // 0x8e6 Eq
	if(var_426_bool == 0) goto Label_2295; // 0x8e7 JumpB
	var_427_string = ""; // 0x8e8 PushV
	var_427_string = "Neutral"; // 0x8e9 MovS
	func_1732(var_41_bool, var_427_string); // 0x8ea Call
	var_428_int = 6427; // 0x8ec PushI
	SetMessage(var_428_int); // 0x8ed TObjFunc
	ClearReplies(); // 0x8ef TObjFunc
	var_429_int = 6428; // 0x8f1 PushI
	var_430_int = 7092; // 0x8f2 PushI
	var_431_int = 7091; // 0x8f3 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x8f4 TObjFunc
	return 0; // 0x8f6 Return
	
Label_2295:
	var_432_int = 7092; // 0x8f7 PushI
	var_433_bool = var_40_string == var_432_int; // 0x8f8 Eq
	if(var_433_bool == 0) goto Label_2313; // 0x8f9 JumpB
	var_434_string = ""; // 0x8fa PushV
	var_434_string = "Neutral"; // 0x8fb MovS
	func_1732(var_41_bool, var_434_string); // 0x8fc Call
	var_435_int = 6429; // 0x8fe PushI
	SetMessage(var_435_int); // 0x8ff TObjFunc
	ClearReplies(); // 0x901 TObjFunc
	var_436_int = 6430; // 0x903 PushI
	var_437_int = 7094; // 0x904 PushI
	var_438_int = 7093; // 0x905 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x906 TObjFunc
	return 0; // 0x908 Return
	
Label_2313:
	var_439_int = 7094; // 0x909 PushI
	var_440_bool = var_40_string == var_439_int; // 0x90a Eq
	if(var_440_bool == 0) goto Label_2331; // 0x90b JumpB
	var_441_string = ""; // 0x90c PushV
	var_441_string = "Neutral"; // 0x90d MovS
	func_1732(var_41_bool, var_441_string); // 0x90e Call
	var_442_int = 6431; // 0x910 PushI
	SetMessage(var_442_int); // 0x911 TObjFunc
	ClearReplies(); // 0x913 TObjFunc
	var_443_int = 6432; // 0x915 PushI
	var_444_int = -1; // 0x916 PushI
	var_445_int = 7095; // 0x917 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x918 TObjFunc
	return 0; // 0x91a Return
	
Label_2331:
	var_446_int = 7083; // 0x91b PushI
	var_447_bool = var_40_string == var_446_int; // 0x91c Eq
	if(var_447_bool == 0) goto Label_2349; // 0x91d JumpB
	var_448_string = ""; // 0x91e PushV
	var_448_string = "Neutral"; // 0x91f MovS
	func_1732(var_41_bool, var_448_string); // 0x920 Call
	var_449_int = 6420; // 0x922 PushI
	SetMessage(var_449_int); // 0x923 TObjFunc
	ClearReplies(); // 0x925 TObjFunc
	var_450_int = 6421; // 0x927 PushI
	var_451_int = 7085; // 0x928 PushI
	var_452_int = 7084; // 0x929 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x92a TObjFunc
	return 0; // 0x92c Return
	
Label_2349:
	var_453_int = 7085; // 0x92d PushI
	var_454_bool = var_40_string == var_453_int; // 0x92e Eq
	if(var_454_bool == 0) goto Label_2372; // 0x92f JumpB
	var_455_string = ""; // 0x930 PushV
	var_455_string = "Neutral"; // 0x931 MovS
	func_1732(var_41_bool, var_455_string); // 0x932 Call
	var_456_int = 6422; // 0x934 PushI
	SetMessage(var_456_int); // 0x935 TObjFunc
	ClearReplies(); // 0x937 TObjFunc
	var_457_int = 6423; // 0x939 PushI
	var_458_int = -1; // 0x93a PushI
	var_459_int = 7086; // 0x93b PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x93c TObjFunc
	var_460_int = 6424; // 0x93e PushI
	var_461_int = 7088; // 0x93f PushI
	var_462_int = 7087; // 0x940 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x941 TObjFunc
	return 0; // 0x943 Return
	
Label_2372:
	var_463_int = 7088; // 0x944 PushI
	var_464_bool = var_40_string == var_463_int; // 0x945 Eq
	if(var_464_bool == 0) goto Label_2390; // 0x946 JumpB
	var_465_string = ""; // 0x947 PushV
	var_465_string = "Neutral"; // 0x948 MovS
	func_1732(var_41_bool, var_465_string); // 0x949 Call
	var_466_int = 6425; // 0x94b PushI
	SetMessage(var_466_int); // 0x94c TObjFunc
	ClearReplies(); // 0x94e TObjFunc
	var_467_int = 6426; // 0x950 PushI
	var_468_int = -1; // 0x951 PushI
	var_469_int = 7089; // 0x952 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x953 TObjFunc
	return 0; // 0x955 Return
	
Label_2390:
	var_470_int = 7065; // 0x956 PushI
	var_471_bool = var_40_string == var_470_int; // 0x957 Eq
	if(var_471_bool == 0) goto Label_2413; // 0x958 JumpB
	var_472_string = ""; // 0x959 PushV
	var_472_string = "Neutral"; // 0x95a MovS
	func_1732(var_41_bool, var_472_string); // 0x95b Call
	var_473_int = 6406; // 0x95d PushI
	SetMessage(var_473_int); // 0x95e TObjFunc
	ClearReplies(); // 0x960 TObjFunc
	var_474_int = 6407; // 0x962 PushI
	var_475_int = 7068; // 0x963 PushI
	var_476_int = 7066; // 0x964 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x965 TObjFunc
	var_477_int = 6408; // 0x967 PushI
	var_478_int = 7068; // 0x968 PushI
	var_479_int = 7067; // 0x969 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x96a TObjFunc
	return 0; // 0x96c Return
	
Label_2413:
	var_480_int = 7068; // 0x96d PushI
	var_481_bool = var_40_string == var_480_int; // 0x96e Eq
	if(var_481_bool == 0) goto Label_2452; // 0x96f JumpB
	var_482_bool = 0; var_483_object = Obj(); // 0x970 PushV
	var_483_object = var_1_object; // 0x971 MovT
	func_8313(var_483_object); // 0x972 Call
	if(var_482_bool == 0) goto Label_2452; // 0x974 JumpB
	var_488_string = ""; // 0x975 PushV
	var_488_string = "Neutral"; // 0x976 MovS
	func_1732(var_41_bool, var_488_string); // 0x977 Call
	var_489_int = 6409; // 0x979 PushI
	SetMessage(var_489_int); // 0x97a TObjFunc
	ClearReplies(); // 0x97c TObjFunc
	var_490_int = 6410; // 0x97e PushI
	var_491_int = 7070; // 0x97f PushI
	var_492_int = 7069; // 0x980 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x981 TObjFunc
	var_493_int = 6413; // 0x983 PushI
	var_494_int = 7074; // 0x984 PushI
	var_495_int = 7073; // 0x985 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x986 TObjFunc
	var_496_bool = 0; var_497_object = Obj(); // 0x988 PushV
	var_497_object = var_1_object; // 0x989 MovT
	func_8313(var_497_object); // 0x98a Call
	var_498_bool = var_496_bool == 0; // 0x98c Not
	if(var_498_bool == 0) goto Label_2451; // 0x98d JumpB
	var_499_int = 6416; // 0x98e PushI
	var_500_int = 7079; // 0x98f PushI
	var_501_int = 7078; // 0x990 PushI
	AddReply(var_499_int, var_500_int, var_501_int); // 0x991 TObjFunc
	
Label_2451:
	return 0; // 0x993 Return
	
Label_2452:
	var_502_int = 7079; // 0x994 PushI
	var_503_bool = var_40_string == var_502_int; // 0x995 Eq
	if(var_503_bool == 0) goto Label_2470; // 0x996 JumpB
	var_504_string = ""; // 0x997 PushV
	var_504_string = "Neutral"; // 0x998 MovS
	func_1732(var_41_bool, var_504_string); // 0x999 Call
	var_505_int = 6417; // 0x99b PushI
	SetMessage(var_505_int); // 0x99c TObjFunc
	ClearReplies(); // 0x99e TObjFunc
	var_506_int = 6418; // 0x9a0 PushI
	var_507_int = 7070; // 0x9a1 PushI
	var_508_int = 7080; // 0x9a2 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0x9a3 TObjFunc
	return 0; // 0x9a5 Return
	
Label_2470:
	var_509_int = 7070; // 0x9a6 PushI
	var_510_bool = var_40_string == var_509_int; // 0x9a7 Eq
	if(var_510_bool == 0) goto Label_2488; // 0x9a8 JumpB
	var_511_string = ""; // 0x9a9 PushV
	var_511_string = "Neutral"; // 0x9aa MovS
	func_1732(var_41_bool, var_511_string); // 0x9ab Call
	var_512_int = 6411; // 0x9ad PushI
	SetMessage(var_512_int); // 0x9ae TObjFunc
	ClearReplies(); // 0x9b0 TObjFunc
	var_513_int = 6412; // 0x9b2 PushI
	var_514_int = 7074; // 0x9b3 PushI
	var_515_int = 7072; // 0x9b4 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0x9b5 TObjFunc
	return 0; // 0x9b7 Return
	
Label_2488:
	var_516_int = 7074; // 0x9b8 PushI
	var_517_bool = var_40_string == var_516_int; // 0x9b9 Eq
	if(var_517_bool == 0) goto Label_2506; // 0x9ba JumpB
	var_518_string = ""; // 0x9bb PushV
	var_518_string = "Neutral"; // 0x9bc MovS
	func_1732(var_41_bool, var_518_string); // 0x9bd Call
	var_519_int = 6414; // 0x9bf PushI
	SetMessage(var_519_int); // 0x9c0 TObjFunc
	ClearReplies(); // 0x9c2 TObjFunc
	var_520_int = 6415; // 0x9c4 PushI
	var_521_int = -1; // 0x9c5 PushI
	var_522_int = 7075; // 0x9c6 PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0x9c7 TObjFunc
	return 0; // 0x9c9 Return
	
Label_2506:
	var_523_int = 7055; // 0x9ca PushI
	var_524_bool = var_40_string == var_523_int; // 0x9cb Eq
	if(var_524_bool == 0) goto Label_2529; // 0x9cc JumpB
	var_525_string = ""; // 0x9cd PushV
	var_525_string = "Neutral"; // 0x9ce MovS
	func_1732(var_41_bool, var_525_string); // 0x9cf Call
	var_526_int = 6397; // 0x9d1 PushI
	SetMessage(var_526_int); // 0x9d2 TObjFunc
	ClearReplies(); // 0x9d4 TObjFunc
	var_527_int = 6398; // 0x9d6 PushI
	var_528_int = 7057; // 0x9d7 PushI
	var_529_int = 7056; // 0x9d8 PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x9d9 TObjFunc
	var_530_int = 6400; // 0x9db PushI
	var_531_int = 7059; // 0x9dc PushI
	var_532_int = 7058; // 0x9dd PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0x9de TObjFunc
	return 0; // 0x9e0 Return
	
Label_2529:
	var_533_int = 7059; // 0x9e1 PushI
	var_534_bool = var_40_string == var_533_int; // 0x9e2 Eq
	if(var_534_bool == 0) goto Label_2547; // 0x9e3 JumpB
	var_535_string = ""; // 0x9e4 PushV
	var_535_string = "Neutral"; // 0x9e5 MovS
	func_1732(var_41_bool, var_535_string); // 0x9e6 Call
	var_536_int = 6401; // 0x9e8 PushI
	SetMessage(var_536_int); // 0x9e9 TObjFunc
	ClearReplies(); // 0x9eb TObjFunc
	var_537_int = 6402; // 0x9ed PushI
	var_538_int = 7057; // 0x9ee PushI
	var_539_int = 7060; // 0x9ef PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x9f0 TObjFunc
	return 0; // 0x9f2 Return
	
Label_2547:
	var_540_int = 7057; // 0x9f3 PushI
	var_541_bool = var_40_string == var_540_int; // 0x9f4 Eq
	if(var_541_bool == 0) goto Label_2565; // 0x9f5 JumpB
	var_542_string = ""; // 0x9f6 PushV
	var_542_string = "Neutral"; // 0x9f7 MovS
	func_1732(var_41_bool, var_542_string); // 0x9f8 Call
	var_543_int = 6399; // 0x9fa PushI
	SetMessage(var_543_int); // 0x9fb TObjFunc
	ClearReplies(); // 0x9fd TObjFunc
	var_544_int = 6403; // 0x9ff PushI
	var_545_int = 7063; // 0xa00 PushI
	var_546_int = 7062; // 0xa01 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0xa02 TObjFunc
	return 0; // 0xa04 Return
	
Label_2565:
	var_547_int = 7063; // 0xa05 PushI
	var_548_bool = var_40_string == var_547_int; // 0xa06 Eq
	if(var_548_bool == 0) goto Label_2583; // 0xa07 JumpB
	var_549_string = ""; // 0xa08 PushV
	var_549_string = "Neutral"; // 0xa09 MovS
	func_1732(var_41_bool, var_549_string); // 0xa0a Call
	var_550_int = 6404; // 0xa0c PushI
	SetMessage(var_550_int); // 0xa0d TObjFunc
	ClearReplies(); // 0xa0f TObjFunc
	var_551_int = 6405; // 0xa11 PushI
	var_552_int = -1; // 0xa12 PushI
	var_553_int = 7064; // 0xa13 PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0xa14 TObjFunc
	return 0; // 0xa16 Return
	
Label_2583:
	var_554_int = 7047; // 0xa17 PushI
	var_555_bool = var_40_string == var_554_int; // 0xa18 Eq
	if(var_555_bool == 0) goto Label_2601; // 0xa19 JumpB
	var_556_string = ""; // 0xa1a PushV
	var_556_string = "Neutral"; // 0xa1b MovS
	func_1732(var_41_bool, var_556_string); // 0xa1c Call
	var_557_int = 6390; // 0xa1e PushI
	SetMessage(var_557_int); // 0xa1f TObjFunc
	ClearReplies(); // 0xa21 TObjFunc
	var_558_int = 6391; // 0xa23 PushI
	var_559_int = 7049; // 0xa24 PushI
	var_560_int = 7048; // 0xa25 PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0xa26 TObjFunc
	return 0; // 0xa28 Return
	
Label_2601:
	var_561_int = 7049; // 0xa29 PushI
	var_562_bool = var_40_string == var_561_int; // 0xa2a Eq
	if(var_562_bool == 0) goto Label_2624; // 0xa2b JumpB
	var_563_string = ""; // 0xa2c PushV
	var_563_string = "Neutral"; // 0xa2d MovS
	func_1732(var_41_bool, var_563_string); // 0xa2e Call
	var_564_int = 6392; // 0xa30 PushI
	SetMessage(var_564_int); // 0xa31 TObjFunc
	ClearReplies(); // 0xa33 TObjFunc
	var_565_int = 6394; // 0xa35 PushI
	var_566_int = 7052; // 0xa36 PushI
	var_567_int = 7051; // 0xa37 PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0xa38 TObjFunc
	var_568_int = 6393; // 0xa3a PushI
	var_569_int = 7052; // 0xa3b PushI
	var_570_int = 7050; // 0xa3c PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0xa3d TObjFunc
	return 0; // 0xa3f Return
	
Label_2624:
	var_571_int = 7052; // 0xa40 PushI
	var_572_bool = var_40_string == var_571_int; // 0xa41 Eq
	if(var_572_bool == 0) goto Label_2642; // 0xa42 JumpB
	var_573_string = ""; // 0xa43 PushV
	var_573_string = "Neutral"; // 0xa44 MovS
	func_1732(var_41_bool, var_573_string); // 0xa45 Call
	var_574_int = 6395; // 0xa47 PushI
	SetMessage(var_574_int); // 0xa48 TObjFunc
	ClearReplies(); // 0xa4a TObjFunc
	var_575_int = 6396; // 0xa4c PushI
	var_576_int = -1; // 0xa4d PushI
	var_577_int = 7054; // 0xa4e PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0xa4f TObjFunc
	return 0; // 0xa51 Return
	
Label_2642:
	var_578_int = 7041; // 0xa52 PushI
	var_579_bool = var_40_string == var_578_int; // 0xa53 Eq
	if(var_579_bool == 0) goto Label_2665; // 0xa54 JumpB
	var_580_string = ""; // 0xa55 PushV
	var_580_string = "Neutral"; // 0xa56 MovS
	func_1732(var_41_bool, var_580_string); // 0xa57 Call
	var_581_int = 6385; // 0xa59 PushI
	SetMessage(var_581_int); // 0xa5a TObjFunc
	ClearReplies(); // 0xa5c TObjFunc
	var_582_int = 6386; // 0xa5e PushI
	var_583_int = 7043; // 0xa5f PushI
	var_584_int = 7042; // 0xa60 PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0xa61 TObjFunc
	var_585_int = 6388; // 0xa63 PushI
	var_586_int = 7043; // 0xa64 PushI
	var_587_int = 7044; // 0xa65 PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0xa66 TObjFunc
	return 0; // 0xa68 Return
	
Label_2665:
	var_588_int = 7043; // 0xa69 PushI
	var_589_bool = var_40_string == var_588_int; // 0xa6a Eq
	if(var_589_bool == 0) goto Label_2683; // 0xa6b JumpB
	var_590_string = ""; // 0xa6c PushV
	var_590_string = "Neutral"; // 0xa6d MovS
	func_1732(var_41_bool, var_590_string); // 0xa6e Call
	var_591_int = 6387; // 0xa70 PushI
	SetMessage(var_591_int); // 0xa71 TObjFunc
	ClearReplies(); // 0xa73 TObjFunc
	var_592_int = 6389; // 0xa75 PushI
	var_593_int = -1; // 0xa76 PushI
	var_594_int = 7046; // 0xa77 PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0xa78 TObjFunc
	return 0; // 0xa7a Return
	
Label_2683:
	var_595_int = 7035; // 0xa7b PushI
	var_596_bool = var_40_string == var_595_int; // 0xa7c Eq
	if(var_596_bool == 0) goto Label_2701; // 0xa7d JumpB
	var_597_string = ""; // 0xa7e PushV
	var_597_string = "Neutral"; // 0xa7f MovS
	func_1732(var_41_bool, var_597_string); // 0xa80 Call
	var_598_int = 6379; // 0xa82 PushI
	SetMessage(var_598_int); // 0xa83 TObjFunc
	ClearReplies(); // 0xa85 TObjFunc
	var_599_int = 6380; // 0xa87 PushI
	var_600_int = 7037; // 0xa88 PushI
	var_601_int = 7036; // 0xa89 PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0xa8a TObjFunc
	return 0; // 0xa8c Return
	
Label_2701:
	var_602_int = 7037; // 0xa8d PushI
	var_603_bool = var_40_string == var_602_int; // 0xa8e Eq
	if(var_603_bool == 0) goto Label_2719; // 0xa8f JumpB
	var_604_string = ""; // 0xa90 PushV
	var_604_string = "Neutral"; // 0xa91 MovS
	func_1732(var_41_bool, var_604_string); // 0xa92 Call
	var_605_int = 6381; // 0xa94 PushI
	SetMessage(var_605_int); // 0xa95 TObjFunc
	ClearReplies(); // 0xa97 TObjFunc
	var_606_int = 6382; // 0xa99 PushI
	var_607_int = 7039; // 0xa9a PushI
	var_608_int = 7038; // 0xa9b PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0xa9c TObjFunc
	return 0; // 0xa9e Return
	
Label_2719:
	var_609_int = 7039; // 0xa9f PushI
	var_610_bool = var_40_string == var_609_int; // 0xaa0 Eq
	if(var_610_bool == 0) goto Label_2737; // 0xaa1 JumpB
	var_611_string = ""; // 0xaa2 PushV
	var_611_string = "Neutral"; // 0xaa3 MovS
	func_1732(var_41_bool, var_611_string); // 0xaa4 Call
	var_612_int = 6383; // 0xaa6 PushI
	SetMessage(var_612_int); // 0xaa7 TObjFunc
	ClearReplies(); // 0xaa9 TObjFunc
	var_613_int = 6384; // 0xaab PushI
	var_614_int = -1; // 0xaac PushI
	var_615_int = 7040; // 0xaad PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0xaae TObjFunc
	return 0; // 0xab0 Return
	
Label_2737:
	var_616_int = 5748; // 0xab1 PushI
	var_617_bool = var_40_string == var_616_int; // 0xab2 Eq
	if(var_617_bool == 0) goto Label_2765; // 0xab3 JumpB
	var_618_string = ""; // 0xab4 PushV
	var_618_string = "Neutral"; // 0xab5 MovS
	func_1732(var_41_bool, var_618_string); // 0xab6 Call
	var_619_int = 5217; // 0xab8 PushI
	SetMessage(var_619_int); // 0xab9 TObjFunc
	ClearReplies(); // 0xabb TObjFunc
	var_620_int = 5218; // 0xabd PushI
	var_621_int = 5750; // 0xabe PushI
	var_622_int = 5749; // 0xabf PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0xac0 TObjFunc
	var_623_int = 5226; // 0xac2 PushI
	var_624_int = -1; // 0xac3 PushI
	var_625_int = 5758; // 0xac4 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0xac5 TObjFunc
	var_626_int = 5227; // 0xac7 PushI
	var_627_int = 5750; // 0xac8 PushI
	var_628_int = 5759; // 0xac9 PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0xaca TObjFunc
	return 0; // 0xacc Return
	
Label_2765:
	var_629_int = 5750; // 0xacd PushI
	var_630_bool = var_40_string == var_629_int; // 0xace Eq
	if(var_630_bool == 0) goto Label_2793; // 0xacf JumpB
	var_631_string = ""; // 0xad0 PushV
	var_631_string = "Neutral"; // 0xad1 MovS
	func_1732(var_41_bool, var_631_string); // 0xad2 Call
	var_632_int = 5219; // 0xad4 PushI
	SetMessage(var_632_int); // 0xad5 TObjFunc
	ClearReplies(); // 0xad7 TObjFunc
	var_633_int = 5220; // 0xad9 PushI
	var_634_int = 5752; // 0xada PushI
	var_635_int = 5751; // 0xadb PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0xadc TObjFunc
	var_636_int = 5224; // 0xade PushI
	var_637_int = 5752; // 0xadf PushI
	var_638_int = 5755; // 0xae0 PushI
	AddReply(var_636_int, var_637_int, var_638_int); // 0xae1 TObjFunc
	var_639_int = 5225; // 0xae3 PushI
	var_640_int = -1; // 0xae4 PushI
	var_641_int = 5757; // 0xae5 PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0xae6 TObjFunc
	return 0; // 0xae8 Return
	
Label_2793:
	var_642_int = 5752; // 0xae9 PushI
	var_643_bool = var_40_string == var_642_int; // 0xaea Eq
	if(var_643_bool == 0) goto Label_2816; // 0xaeb JumpB
	var_644_string = ""; // 0xaec PushV
	var_644_string = "Neutral"; // 0xaed MovS
	func_1732(var_41_bool, var_644_string); // 0xaee Call
	var_645_int = 5221; // 0xaf0 PushI
	SetMessage(var_645_int); // 0xaf1 TObjFunc
	ClearReplies(); // 0xaf3 TObjFunc
	var_646_int = 5222; // 0xaf5 PushI
	var_647_int = -1; // 0xaf6 PushI
	var_648_int = 5753; // 0xaf7 PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0xaf8 TObjFunc
	var_649_int = 5223; // 0xafa PushI
	var_650_int = -1; // 0xafb PushI
	var_651_int = 5754; // 0xafc PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0xafd TObjFunc
	return 0; // 0xaff Return
	
Label_2816:
	var_652_int = 5738; // 0xb00 PushI
	var_653_bool = var_40_string == var_652_int; // 0xb01 Eq
	if(var_653_bool == 0) goto Label_2839; // 0xb02 JumpB
	var_654_string = ""; // 0xb03 PushV
	var_654_string = "Neutral"; // 0xb04 MovS
	func_1732(var_41_bool, var_654_string); // 0xb05 Call
	var_655_int = 5209; // 0xb07 PushI
	SetMessage(var_655_int); // 0xb08 TObjFunc
	ClearReplies(); // 0xb0a TObjFunc
	var_656_int = 5210; // 0xb0c PushI
	var_657_int = 5740; // 0xb0d PushI
	var_658_int = 5739; // 0xb0e PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0xb0f TObjFunc
	var_659_int = 5216; // 0xb11 PushI
	var_660_int = 5740; // 0xb12 PushI
	var_661_int = 5746; // 0xb13 PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0xb14 TObjFunc
	return 0; // 0xb16 Return
	
Label_2839:
	var_662_int = 5740; // 0xb17 PushI
	var_663_bool = var_40_string == var_662_int; // 0xb18 Eq
	if(var_663_bool == 0) goto Label_2862; // 0xb19 JumpB
	var_664_string = ""; // 0xb1a PushV
	var_664_string = "Pain"; // 0xb1b MovS
	func_1732(var_41_bool, var_664_string); // 0xb1c Call
	var_665_int = 5211; // 0xb1e PushI
	SetMessage(var_665_int); // 0xb1f TObjFunc
	ClearReplies(); // 0xb21 TObjFunc
	var_666_int = 5212; // 0xb23 PushI
	var_667_int = 5742; // 0xb24 PushI
	var_668_int = 5741; // 0xb25 PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0xb26 TObjFunc
	var_669_int = 5215; // 0xb28 PushI
	var_670_int = 5742; // 0xb29 PushI
	var_671_int = 5744; // 0xb2a PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0xb2b TObjFunc
	return 0; // 0xb2d Return
	
Label_2862:
	var_672_int = 5742; // 0xb2e PushI
	var_673_bool = var_40_string == var_672_int; // 0xb2f Eq
	if(var_673_bool == 0) goto Label_2880; // 0xb30 JumpB
	var_674_string = ""; // 0xb31 PushV
	var_674_string = "Neutral"; // 0xb32 MovS
	func_1732(var_41_bool, var_674_string); // 0xb33 Call
	var_675_int = 5213; // 0xb35 PushI
	SetMessage(var_675_int); // 0xb36 TObjFunc
	ClearReplies(); // 0xb38 TObjFunc
	var_676_int = 5214; // 0xb3a PushI
	var_677_int = -1; // 0xb3b PushI
	var_678_int = 5743; // 0xb3c PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0xb3d TObjFunc
	return 0; // 0xb3f Return
	
Label_2880:
	var_679_int = 5761; // 0xb40 PushI
	var_680_bool = var_40_string == var_679_int; // 0xb41 Eq
	if(var_680_bool == 0) goto Label_2903; // 0xb42 JumpB
	var_681_string = ""; // 0xb43 PushV
	var_681_string = "Neutral"; // 0xb44 MovS
	func_1732(var_41_bool, var_681_string); // 0xb45 Call
	var_682_int = 5228; // 0xb47 PushI
	SetMessage(var_682_int); // 0xb48 TObjFunc
	ClearReplies(); // 0xb4a TObjFunc
	var_683_int = 5229; // 0xb4c PushI
	var_684_int = 5763; // 0xb4d PushI
	var_685_int = 5762; // 0xb4e PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0xb4f TObjFunc
	var_686_int = 5236; // 0xb51 PushI
	var_687_int = 5763; // 0xb52 PushI
	var_688_int = 5770; // 0xb53 PushI
	AddReply(var_686_int, var_687_int, var_688_int); // 0xb54 TObjFunc
	return 0; // 0xb56 Return
	
Label_2903:
	var_689_int = 5763; // 0xb57 PushI
	var_690_bool = var_40_string == var_689_int; // 0xb58 Eq
	if(var_690_bool == 0) goto Label_2926; // 0xb59 JumpB
	var_691_string = ""; // 0xb5a PushV
	var_691_string = "Neutral"; // 0xb5b MovS
	func_1732(var_41_bool, var_691_string); // 0xb5c Call
	var_692_int = 5230; // 0xb5e PushI
	SetMessage(var_692_int); // 0xb5f TObjFunc
	ClearReplies(); // 0xb61 TObjFunc
	var_693_int = 5231; // 0xb63 PushI
	var_694_int = 5765; // 0xb64 PushI
	var_695_int = 5764; // 0xb65 PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0xb66 TObjFunc
	var_696_int = 5235; // 0xb68 PushI
	var_697_int = 5765; // 0xb69 PushI
	var_698_int = 5768; // 0xb6a PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0xb6b TObjFunc
	return 0; // 0xb6d Return
	
Label_2926:
	var_699_int = 5765; // 0xb6e PushI
	var_700_bool = var_40_string == var_699_int; // 0xb6f Eq
	if(var_700_bool == 0) goto Label_2949; // 0xb70 JumpB
	var_701_string = ""; // 0xb71 PushV
	var_701_string = "Neutral"; // 0xb72 MovS
	func_1732(var_41_bool, var_701_string); // 0xb73 Call
	var_702_int = 5232; // 0xb75 PushI
	SetMessage(var_702_int); // 0xb76 TObjFunc
	ClearReplies(); // 0xb78 TObjFunc
	var_703_int = 5233; // 0xb7a PushI
	var_704_int = -1; // 0xb7b PushI
	var_705_int = 5766; // 0xb7c PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0xb7d TObjFunc
	var_706_int = 5234; // 0xb7f PushI
	var_707_int = -1; // 0xb80 PushI
	var_708_int = 5767; // 0xb81 PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0xb82 TObjFunc
	return 0; // 0xb84 Return
	
Label_2949:
	var_709_int = 5908; // 0xb85 PushI
	var_710_bool = var_40_string == var_709_int; // 0xb86 Eq
	if(var_710_bool == 0) goto Label_2972; // 0xb87 JumpB
	var_711_string = ""; // 0xb88 PushV
	var_711_string = "Neutral"; // 0xb89 MovS
	func_1732(var_41_bool, var_711_string); // 0xb8a Call
	var_712_int = 5366; // 0xb8c PushI
	SetMessage(var_712_int); // 0xb8d TObjFunc
	ClearReplies(); // 0xb8f TObjFunc
	var_713_int = 5367; // 0xb91 PushI
	var_714_int = 5910; // 0xb92 PushI
	var_715_int = 5909; // 0xb93 PushI
	AddReply(var_713_int, var_714_int, var_715_int); // 0xb94 TObjFunc
	var_716_int = 5369; // 0xb96 PushI
	var_717_int = 5905; // 0xb97 PushI
	var_718_int = 5911; // 0xb98 PushI
	AddReply(var_716_int, var_717_int, var_718_int); // 0xb99 TObjFunc
	return 0; // 0xb9b Return
	
Label_2972:
	var_719_int = 5910; // 0xb9c PushI
	var_720_bool = var_40_string == var_719_int; // 0xb9d Eq
	if(var_720_bool == 0) goto Label_2995; // 0xb9e JumpB
	var_721_string = ""; // 0xb9f PushV
	var_721_string = "Neutral"; // 0xba0 MovS
	func_1732(var_41_bool, var_721_string); // 0xba1 Call
	var_722_int = 5368; // 0xba3 PushI
	SetMessage(var_722_int); // 0xba4 TObjFunc
	ClearReplies(); // 0xba6 TObjFunc
	var_723_int = 5370; // 0xba8 PushI
	var_724_int = 5905; // 0xba9 PushI
	var_725_int = 5913; // 0xbaa PushI
	AddReply(var_723_int, var_724_int, var_725_int); // 0xbab TObjFunc
	var_726_int = 5371; // 0xbad PushI
	var_727_int = 5905; // 0xbae PushI
	var_728_int = 5914; // 0xbaf PushI
	AddReply(var_726_int, var_727_int, var_728_int); // 0xbb0 TObjFunc
	return 0; // 0xbb2 Return
	
Label_2995:
	var_729_int = 5905; // 0xbb3 PushI
	var_730_bool = var_40_string == var_729_int; // 0xbb4 Eq
	if(var_730_bool == 0) goto Label_3013; // 0xbb5 JumpB
	var_731_string = ""; // 0xbb6 PushV
	var_731_string = "Neutral"; // 0xbb7 MovS
	func_1732(var_41_bool, var_731_string); // 0xbb8 Call
	var_732_int = 5363; // 0xbba PushI
	SetMessage(var_732_int); // 0xbbb TObjFunc
	ClearReplies(); // 0xbbd TObjFunc
	var_733_int = 5364; // 0xbbf PushI
	var_734_int = -1; // 0xbc0 PushI
	var_735_int = 5906; // 0xbc1 PushI
	AddReply(var_733_int, var_734_int, var_735_int); // 0xbc2 TObjFunc
	return 0; // 0xbc4 Return
	
Label_3013:
	var_3_string = 1; // 0xbc5 TMovB
	var_736_bool = 0; // 0xbc6 PushV
	func_7001(var_736_bool); // 0xbc7 Call
	if(var_736_bool == 0) goto Label_3021; // 0xbc9 JumpB
	lshStopAnimation(); // 0xbca Func
	goto Label_3023; // 0xbcc Jump
	
Label_3023:
	return 0; // 0xbcf Return
	
Label_3021:
	StopAnimation(); // 0xbcd Func
	
Label_3025:
	return 0; // 0xbd1 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xcd1 PushI
	if(var_42_int == 0) goto Label_4209; // 0xcd2 JumpB
	func_6878(); // 0xcd4 Call
	var_44_int = 7775; // 0xcd6 PushI
	var_45_bool = var_41_bool == var_44_int; // 0xcd7 Eq
	if(var_45_bool == 0) goto Label_3304; // 0xcd8 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xcd9 PushV
	var_46_object = var_1_object; // 0xcda MovT
	var_47_object = var_0_object; // 0xcdb MovT
	func_7087(); // 0xcdc Call
	var_50_object = Obj(); var_51_object = Obj(); // 0xcde PushV
	var_50_object = var_1_object; // 0xcdf MovT
	var_51_object = var_0_object; // 0xce0 MovT
	func_7111(); // 0xce1 Call
	var_112_object = Obj(); var_113_object = Obj(); // 0xce3 PushV
	var_112_object = var_1_object; // 0xce4 MovT
	var_113_object = var_0_object; // 0xce5 MovT
	func_7210(); // 0xce6 Call
	
Label_3304:
	var_138_int = 7779; // 0xce8 PushI
	var_139_bool = var_41_bool == var_138_int; // 0xce9 Eq
	if(var_139_bool == 0) goto Label_3322; // 0xcea JumpB
	var_140_object = Obj(); var_141_object = Obj(); // 0xceb PushV
	var_140_object = var_1_object; // 0xcec MovT
	var_141_object = var_0_object; // 0xced MovT
	func_7087(); // 0xcee Call
	var_142_object = Obj(); var_143_object = Obj(); // 0xcf0 PushV
	var_142_object = var_1_object; // 0xcf1 MovT
	var_143_object = var_0_object; // 0xcf2 MovT
	func_7111(); // 0xcf3 Call
	var_144_object = Obj(); var_145_object = Obj(); // 0xcf5 PushV
	var_144_object = var_1_object; // 0xcf6 MovT
	var_145_object = var_0_object; // 0xcf7 MovT
	func_7210(); // 0xcf8 Call
	
Label_3322:
	var_146_int = 7780; // 0xcfa PushI
	var_147_bool = var_41_bool == var_146_int; // 0xcfb Eq
	if(var_147_bool == 0) goto Label_3330; // 0xcfc JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0xcfd PushV
	var_148_object = var_1_object; // 0xcfe MovT
	var_149_object = var_0_object; // 0xcff MovT
	func_7087(); // 0xd00 Call
	
Label_3330:
	var_150_int = 7783; // 0xd02 PushI
	var_151_bool = var_41_bool == var_150_int; // 0xd03 Eq
	if(var_151_bool == 0) goto Label_3338; // 0xd04 JumpB
	var_152_object = Obj(); var_153_object = Obj(); // 0xd05 PushV
	var_152_object = var_1_object; // 0xd06 MovT
	var_153_object = var_0_object; // 0xd07 MovT
	func_7087(); // 0xd08 Call
	
Label_3338:
	var_154_int = 7790; // 0xd0a PushI
	var_155_bool = var_41_bool == var_154_int; // 0xd0b Eq
	if(var_155_bool == 0) goto Label_3351; // 0xd0c JumpB
	var_156_object = Obj(); var_157_object = Obj(); // 0xd0d PushV
	var_156_object = var_1_object; // 0xd0e MovT
	var_157_object = var_0_object; // 0xd0f MovT
	func_7093(); // 0xd10 Call
	var_160_object = Obj(); var_161_object = Obj(); // 0xd12 PushV
	var_160_object = var_1_object; // 0xd13 MovT
	var_161_object = var_0_object; // 0xd14 MovT
	func_7141(); // 0xd15 Call
	
Label_3351:
	var_177_int = 7791; // 0xd17 PushI
	var_178_bool = var_41_bool == var_177_int; // 0xd18 Eq
	if(var_178_bool == 0) goto Label_3364; // 0xd19 JumpB
	var_179_object = Obj(); var_180_object = Obj(); // 0xd1a PushV
	var_179_object = var_1_object; // 0xd1b MovT
	var_180_object = var_0_object; // 0xd1c MovT
	func_7093(); // 0xd1d Call
	var_181_object = Obj(); var_182_object = Obj(); // 0xd1f PushV
	var_181_object = var_1_object; // 0xd20 MovT
	var_182_object = var_0_object; // 0xd21 MovT
	func_7141(); // 0xd22 Call
	
Label_3364:
	var_183_int = 7436; // 0xd24 PushI
	var_184_bool = var_41_bool == var_183_int; // 0xd25 Eq
	if(var_184_bool == 0) goto Label_3372; // 0xd26 JumpB
	var_185_object = Obj(); var_186_object = Obj(); // 0xd27 PushV
	var_185_object = var_1_object; // 0xd28 MovT
	var_186_object = var_0_object; // 0xd29 MovT
	func_7093(); // 0xd2a Call
	
Label_3372:
	var_187_int = 7284; // 0xd2c PushI
	var_188_bool = var_41_bool == var_187_int; // 0xd2d Eq
	if(var_188_bool == 0) goto Label_3380; // 0xd2e JumpB
	var_189_object = Obj(); var_190_object = Obj(); // 0xd2f PushV
	var_189_object = var_1_object; // 0xd30 MovT
	var_190_object = var_0_object; // 0xd31 MovT
	func_7314(); // 0xd32 Call
	
Label_3380:
	var_204_int = 7795; // 0xd34 PushI
	var_205_bool = var_41_bool == var_204_int; // 0xd35 Eq
	if(var_205_bool == 0) goto Label_3403; // 0xd36 JumpB
	var_206_object = Obj(); var_207_object = Obj(); // 0xd37 PushV
	var_206_object = var_1_object; // 0xd38 MovT
	var_207_object = var_0_object; // 0xd39 MovT
	func_7099(); // 0xd3a Call
	var_210_object = Obj(); var_211_object = Obj(); // 0xd3c PushV
	var_210_object = var_1_object; // 0xd3d MovT
	var_211_object = var_0_object; // 0xd3e MovT
	func_7151(); // 0xd3f Call
	var_227_object = Obj(); var_228_object = Obj(); // 0xd41 PushV
	var_227_object = var_1_object; // 0xd42 MovT
	var_228_object = var_0_object; // 0xd43 MovT
	func_7314(); // 0xd44 Call
	var_229_object = Obj(); var_230_object = Obj(); // 0xd46 PushV
	var_229_object = var_1_object; // 0xd47 MovT
	var_230_object = var_0_object; // 0xd48 MovT
	func_7298(); // 0xd49 Call
	
Label_3403:
	var_236_int = 7798; // 0xd4b PushI
	var_237_bool = var_41_bool == var_236_int; // 0xd4c Eq
	if(var_237_bool == 0) goto Label_3426; // 0xd4d JumpB
	var_238_object = Obj(); var_239_object = Obj(); // 0xd4e PushV
	var_238_object = var_1_object; // 0xd4f MovT
	var_239_object = var_0_object; // 0xd50 MovT
	func_7099(); // 0xd51 Call
	var_240_object = Obj(); var_241_object = Obj(); // 0xd53 PushV
	var_240_object = var_1_object; // 0xd54 MovT
	var_241_object = var_0_object; // 0xd55 MovT
	func_7151(); // 0xd56 Call
	var_242_object = Obj(); var_243_object = Obj(); // 0xd58 PushV
	var_242_object = var_1_object; // 0xd59 MovT
	var_243_object = var_0_object; // 0xd5a MovT
	func_7314(); // 0xd5b Call
	var_244_object = Obj(); var_245_object = Obj(); // 0xd5d PushV
	var_244_object = var_1_object; // 0xd5e MovT
	var_245_object = var_0_object; // 0xd5f MovT
	func_7298(); // 0xd60 Call
	
Label_3426:
	var_246_int = 7799; // 0xd62 PushI
	var_247_bool = var_41_bool == var_246_int; // 0xd63 Eq
	if(var_247_bool == 0) goto Label_3449; // 0xd64 JumpB
	var_248_object = Obj(); var_249_object = Obj(); // 0xd65 PushV
	var_248_object = var_1_object; // 0xd66 MovT
	var_249_object = var_0_object; // 0xd67 MovT
	func_7099(); // 0xd68 Call
	var_250_object = Obj(); var_251_object = Obj(); // 0xd6a PushV
	var_250_object = var_1_object; // 0xd6b MovT
	var_251_object = var_0_object; // 0xd6c MovT
	func_7151(); // 0xd6d Call
	var_252_object = Obj(); var_253_object = Obj(); // 0xd6f PushV
	var_252_object = var_1_object; // 0xd70 MovT
	var_253_object = var_0_object; // 0xd71 MovT
	func_7314(); // 0xd72 Call
	var_254_object = Obj(); var_255_object = Obj(); // 0xd74 PushV
	var_254_object = var_1_object; // 0xd75 MovT
	var_255_object = var_0_object; // 0xd76 MovT
	func_7298(); // 0xd77 Call
	
Label_3449:
	var_256_int = 7801; // 0xd79 PushI
	var_257_bool = var_41_bool == var_256_int; // 0xd7a Eq
	if(var_257_bool == 0) goto Label_3462; // 0xd7b JumpB
	var_258_object = Obj(); var_259_object = Obj(); // 0xd7c PushV
	var_258_object = var_1_object; // 0xd7d MovT
	var_259_object = var_0_object; // 0xd7e MovT
	func_7111(); // 0xd7f Call
	var_260_object = Obj(); var_261_object = Obj(); // 0xd81 PushV
	var_260_object = var_1_object; // 0xd82 MovT
	var_261_object = var_0_object; // 0xd83 MovT
	func_7210(); // 0xd84 Call
	
Label_3462:
	var_262_int = 7410; // 0xd86 PushI
	var_263_bool = var_41_bool == var_262_int; // 0xd87 Eq
	if(var_263_bool == 0) goto Label_3470; // 0xd88 JumpB
	var_264_object = Obj(); var_265_object = Obj(); // 0xd89 PushV
	var_264_object = var_1_object; // 0xd8a MovT
	var_265_object = var_0_object; // 0xd8b MovT
	func_7105(); // 0xd8c Call
	
Label_3470:
	var_268_int = 7411; // 0xd8e PushI
	var_269_bool = var_41_bool == var_268_int; // 0xd8f Eq
	if(var_269_bool == 0) goto Label_3478; // 0xd90 JumpB
	var_270_object = Obj(); var_271_object = Obj(); // 0xd91 PushV
	var_270_object = var_1_object; // 0xd92 MovT
	var_271_object = var_0_object; // 0xd93 MovT
	func_7105(); // 0xd94 Call
	
Label_3478:
	var_272_int = 7414; // 0xd96 PushI
	var_273_bool = var_41_bool == var_272_int; // 0xd97 Eq
	if(var_273_bool == 0) goto Label_3486; // 0xd98 JumpB
	var_274_object = Obj(); var_275_object = Obj(); // 0xd99 PushV
	var_274_object = var_1_object; // 0xd9a MovT
	var_275_object = var_0_object; // 0xd9b MovT
	func_7105(); // 0xd9c Call
	
Label_3486:
	var_276_int = 7416; // 0xd9e PushI
	var_277_bool = var_41_bool == var_276_int; // 0xd9f Eq
	if(var_277_bool == 0) goto Label_3494; // 0xda0 JumpB
	var_278_object = Obj(); var_279_object = Obj(); // 0xda1 PushV
	var_278_object = var_1_object; // 0xda2 MovT
	var_279_object = var_0_object; // 0xda3 MovT
	func_7105(); // 0xda4 Call
	
Label_3494:
	var_280_int = 7279; // 0xda6 PushI
	var_281_bool = var_40_string == var_280_int; // 0xda7 Eq
	if(var_281_bool == 0) goto Label_3634; // 0xda8 JumpB
	var_282_bool = 0; var_283_object = Obj(); // 0xda9 PushV
	var_283_object = var_1_object; // 0xdaa MovT
	func_7781(var_283_object); // 0xdab Call
	if(var_282_bool == 0) goto Label_3527; // 0xdad JumpB
	var_290_object = Obj(); var_291_object = Obj(); // 0xdae PushV
	var_290_object = var_1_object; // 0xdaf MovT
	var_291_object = var_0_object; // 0xdb0 MovT
	func_7616(); // 0xdb1 Call
	var_296_string = ""; // 0xdb3 PushV
	var_296_string = "Neutral"; // 0xdb4 MovS
	func_3264(var_41_bool, var_296_string); // 0xdb5 Call
	var_311_int = 6610; // 0xdb7 PushI
	SetMessage(var_311_int); // 0xdb8 TObjFunc
	ClearReplies(); // 0xdba TObjFunc
	var_312_int = 6611; // 0xdbc PushI
	var_313_int = 7748; // 0xdbd PushI
	var_314_int = 7280; // 0xdbe PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0xdbf TObjFunc
	var_315_int = 7066; // 0xdc1 PushI
	var_316_int = 7748; // 0xdc2 PushI
	var_317_int = 7784; // 0xdc3 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0xdc4 TObjFunc
	return 0; // 0xdc6 Return
	
Label_3527:
	var_318_bool = 0; // 0xdc7 PushV
	var_318_bool = 0; // 0xdc8 MovB
	var_319_bool = 0; // 0xdc9 PushV
	var_319_bool = 0; // 0xdca MovB
	var_320_bool = 0; var_321_object = Obj(); // 0xdcb PushV
	var_321_object = var_1_object; // 0xdcc MovT
	func_7793(var_321_object); // 0xdcd Call
	if(var_320_bool == 0) goto Label_3542; // 0xdcf JumpB
	var_326_bool = 0; var_327_object = Obj(); // 0xdd0 PushV
	var_327_object = var_1_object; // 0xdd1 MovT
	func_7863(var_327_object); // 0xdd2 Call
	if(var_326_bool == 0) goto Label_3542; // 0xdd4 JumpB
	var_319_bool = 1; // 0xdd5 MovB
	
Label_3542:
	if(var_319_bool == 0) goto Label_3549; // 0xdd6 JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0xdd7 PushV
	var_329_object = var_1_object; // 0xdd8 MovT
	func_7868(var_329_object); // 0xdd9 Call
	if(var_328_bool == 0) goto Label_3549; // 0xddb JumpB
	var_318_bool = 1; // 0xddc MovB
	
Label_3549:
	if(var_318_bool == 0) goto Label_3575; // 0xddd JumpB
	var_334_string = ""; // 0xdde PushV
	var_334_string = "Neutral"; // 0xddf MovS
	func_3264(var_41_bool, var_334_string); // 0xde0 Call
	var_335_int = 6731; // 0xde2 PushI
	SetMessage(var_335_int); // 0xde3 TObjFunc
	ClearReplies(); // 0xde5 TObjFunc
	var_336_int = 6732; // 0xde7 PushI
	var_337_int = 7420; // 0xde8 PushI
	var_338_int = 7419; // 0xde9 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0xdea TObjFunc
	var_339_int = 6742; // 0xdec PushI
	var_340_int = 7420; // 0xded PushI
	var_341_int = 7430; // 0xdee PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0xdef TObjFunc
	var_342_int = 6743; // 0xdf1 PushI
	var_343_int = 7433; // 0xdf2 PushI
	var_344_int = 7432; // 0xdf3 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0xdf4 TObjFunc
	return 0; // 0xdf6 Return
	
Label_3575:
	var_345_string = ""; // 0xdf7 PushV
	var_345_string = "Neutral"; // 0xdf8 MovS
	func_3264(var_41_bool, var_345_string); // 0xdf9 Call
	var_346_int = 6614; // 0xdfb PushI
	SetMessage(var_346_int); // 0xdfc TObjFunc
	ClearReplies(); // 0xdfe TObjFunc
	var_347_bool = 0; // 0xe00 PushV
	var_347_bool = 0; // 0xe01 MovB
	var_348_bool = 0; var_349_object = Obj(); // 0xe02 PushV
	var_349_object = var_1_object; // 0xe03 MovT
	func_7805(var_349_object); // 0xe04 Call
	if(var_348_bool == 0) goto Label_3597; // 0xe06 JumpB
	var_354_bool = 0; var_355_object = Obj(); // 0xe07 PushV
	var_355_object = var_1_object; // 0xe08 MovT
	func_7851(var_355_object); // 0xe09 Call
	if(var_354_bool == 0) goto Label_3597; // 0xe0b JumpB
	var_347_bool = 1; // 0xe0c MovB
	
Label_3597:
	if(var_347_bool == 0) goto Label_3603; // 0xe0d JumpB
	var_360_int = 6615; // 0xe0e PushI
	var_361_int = 7282; // 0xe0f PushI
	var_362_int = 7284; // 0xe10 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0xe11 TObjFunc
	
Label_3603:
	var_363_bool = 0; var_364_object = Obj(); // 0xe13 PushV
	var_364_object = var_1_object; // 0xe14 MovT
	func_7839(var_364_object); // 0xe15 Call
	if(var_363_bool == 0) goto Label_3613; // 0xe17 JumpB
	var_369_int = 6618; // 0xe18 PushI
	var_370_int = 7800; // 0xe19 PushI
	var_371_int = 7287; // 0xe1a PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xe1b TObjFunc
	
Label_3613:
	var_372_bool = 0; var_373_object = Obj(); // 0xe1d PushV
	var_373_object = var_1_object; // 0xe1e MovT
	func_7817(var_373_object); // 0xe1f Call
	if(var_372_bool == 0) goto Label_3623; // 0xe21 JumpB
	var_378_int = 6730; // 0xe22 PushI
	var_379_int = 7405; // 0xe23 PushI
	var_380_int = 7417; // 0xe24 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0xe25 TObjFunc
	
Label_3623:
	var_381_int = 7071; // 0xe27 PushI
	var_382_int = 7802; // 0xe28 PushI
	var_383_int = 7794; // 0xe29 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0xe2a TObjFunc
	var_384_int = 7532; // 0xe2c PushI
	var_385_int = -1; // 0xe2d PushI
	var_386_int = 8314; // 0xe2e PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0xe2f TObjFunc
	return 0; // 0xe31 Return
	
Label_3634:
	var_387_int = 7802; // 0xe32 PushI
	var_388_bool = var_40_string == var_387_int; // 0xe33 Eq
	if(var_388_bool == 0) goto Label_3657; // 0xe34 JumpB
	var_389_string = ""; // 0xe35 PushV
	var_389_string = "Neutral"; // 0xe36 MovS
	func_3264(var_41_bool, var_389_string); // 0xe37 Call
	var_390_int = 7079; // 0xe39 PushI
	SetMessage(var_390_int); // 0xe3a TObjFunc
	ClearReplies(); // 0xe3c TObjFunc
	var_391_int = 7080; // 0xe3e PushI
	var_392_int = 7805; // 0xe3f PushI
	var_393_int = 7803; // 0xe40 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0xe41 TObjFunc
	var_394_int = 7081; // 0xe43 PushI
	var_395_int = -1; // 0xe44 PushI
	var_396_int = 7804; // 0xe45 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0xe46 TObjFunc
	return 0; // 0xe48 Return
	
Label_3657:
	var_397_int = 7805; // 0xe49 PushI
	var_398_bool = var_40_string == var_397_int; // 0xe4a Eq
	if(var_398_bool == 0) goto Label_3675; // 0xe4b JumpB
	var_399_string = ""; // 0xe4c PushV
	var_399_string = "Neutral"; // 0xe4d MovS
	func_3264(var_41_bool, var_399_string); // 0xe4e Call
	var_400_int = 7082; // 0xe50 PushI
	SetMessage(var_400_int); // 0xe51 TObjFunc
	ClearReplies(); // 0xe53 TObjFunc
	var_401_int = 7083; // 0xe55 PushI
	var_402_int = -1; // 0xe56 PushI
	var_403_int = 7806; // 0xe57 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0xe58 TObjFunc
	return 0; // 0xe5a Return
	
Label_3675:
	var_404_int = 7405; // 0xe5b PushI
	var_405_bool = var_40_string == var_404_int; // 0xe5c Eq
	if(var_405_bool == 0) goto Label_3698; // 0xe5d JumpB
	var_406_string = ""; // 0xe5e PushV
	var_406_string = "Neutral"; // 0xe5f MovS
	func_3264(var_41_bool, var_406_string); // 0xe60 Call
	var_407_int = 6718; // 0xe62 PushI
	SetMessage(var_407_int); // 0xe63 TObjFunc
	ClearReplies(); // 0xe65 TObjFunc
	var_408_int = 6719; // 0xe67 PushI
	var_409_int = 7407; // 0xe68 PushI
	var_410_int = 7406; // 0xe69 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xe6a TObjFunc
	var_411_int = 6729; // 0xe6c PushI
	var_412_int = -1; // 0xe6d PushI
	var_413_int = 7416; // 0xe6e PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xe6f TObjFunc
	return 0; // 0xe71 Return
	
Label_3698:
	var_414_int = 7407; // 0xe72 PushI
	var_415_bool = var_40_string == var_414_int; // 0xe73 Eq
	if(var_415_bool == 0) goto Label_3721; // 0xe74 JumpB
	var_416_string = ""; // 0xe75 PushV
	var_416_string = "Neutral"; // 0xe76 MovS
	func_3264(var_41_bool, var_416_string); // 0xe77 Call
	var_417_int = 6720; // 0xe79 PushI
	SetMessage(var_417_int); // 0xe7a TObjFunc
	ClearReplies(); // 0xe7c TObjFunc
	var_418_int = 6721; // 0xe7e PushI
	var_419_int = 7409; // 0xe7f PushI
	var_420_int = 7408; // 0xe80 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xe81 TObjFunc
	var_421_int = 6725; // 0xe83 PushI
	var_422_int = 7413; // 0xe84 PushI
	var_423_int = 7412; // 0xe85 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0xe86 TObjFunc
	return 0; // 0xe88 Return
	
Label_3721:
	var_424_int = 7413; // 0xe89 PushI
	var_425_bool = var_40_string == var_424_int; // 0xe8a Eq
	if(var_425_bool == 0) goto Label_3739; // 0xe8b JumpB
	var_426_string = ""; // 0xe8c PushV
	var_426_string = "Neutral"; // 0xe8d MovS
	func_3264(var_41_bool, var_426_string); // 0xe8e Call
	var_427_int = 6726; // 0xe90 PushI
	SetMessage(var_427_int); // 0xe91 TObjFunc
	ClearReplies(); // 0xe93 TObjFunc
	var_428_int = 6727; // 0xe95 PushI
	var_429_int = -1; // 0xe96 PushI
	var_430_int = 7414; // 0xe97 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0xe98 TObjFunc
	return 0; // 0xe9a Return
	
Label_3739:
	var_431_int = 7409; // 0xe9b PushI
	var_432_bool = var_40_string == var_431_int; // 0xe9c Eq
	if(var_432_bool == 0) goto Label_3762; // 0xe9d JumpB
	var_433_string = ""; // 0xe9e PushV
	var_433_string = "Neutral"; // 0xe9f MovS
	func_3264(var_41_bool, var_433_string); // 0xea0 Call
	var_434_int = 6722; // 0xea2 PushI
	SetMessage(var_434_int); // 0xea3 TObjFunc
	ClearReplies(); // 0xea5 TObjFunc
	var_435_int = 6723; // 0xea7 PushI
	var_436_int = -1; // 0xea8 PushI
	var_437_int = 7410; // 0xea9 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0xeaa TObjFunc
	var_438_int = 6724; // 0xeac PushI
	var_439_int = -1; // 0xead PushI
	var_440_int = 7411; // 0xeae PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0xeaf TObjFunc
	return 0; // 0xeb1 Return
	
Label_3762:
	var_441_int = 7800; // 0xeb2 PushI
	var_442_bool = var_40_string == var_441_int; // 0xeb3 Eq
	if(var_442_bool == 0) goto Label_3780; // 0xeb4 JumpB
	var_443_string = ""; // 0xeb5 PushV
	var_443_string = "Neutral"; // 0xeb6 MovS
	func_3264(var_41_bool, var_443_string); // 0xeb7 Call
	var_444_int = 7077; // 0xeb9 PushI
	SetMessage(var_444_int); // 0xeba TObjFunc
	ClearReplies(); // 0xebc TObjFunc
	var_445_int = 7078; // 0xebe PushI
	var_446_int = -1; // 0xebf PushI
	var_447_int = 7801; // 0xec0 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xec1 TObjFunc
	return 0; // 0xec3 Return
	
Label_3780:
	var_448_int = 7282; // 0xec4 PushI
	var_449_bool = var_40_string == var_448_int; // 0xec5 Eq
	if(var_449_bool == 0) goto Label_3803; // 0xec6 JumpB
	var_450_string = ""; // 0xec7 PushV
	var_450_string = "Neutral"; // 0xec8 MovS
	func_3264(var_41_bool, var_450_string); // 0xec9 Call
	var_451_int = 6613; // 0xecb PushI
	SetMessage(var_451_int); // 0xecc TObjFunc
	ClearReplies(); // 0xece TObjFunc
	var_452_int = 7072; // 0xed0 PushI
	var_453_int = -1; // 0xed1 PushI
	var_454_int = 7795; // 0xed2 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0xed3 TObjFunc
	var_455_int = 7073; // 0xed5 PushI
	var_456_int = 7797; // 0xed6 PushI
	var_457_int = 7796; // 0xed7 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0xed8 TObjFunc
	return 0; // 0xeda Return
	
Label_3803:
	var_458_int = 7797; // 0xedb PushI
	var_459_bool = var_40_string == var_458_int; // 0xedc Eq
	if(var_459_bool == 0) goto Label_3826; // 0xedd JumpB
	var_460_string = ""; // 0xede PushV
	var_460_string = "Neutral"; // 0xedf MovS
	func_3264(var_41_bool, var_460_string); // 0xee0 Call
	var_461_int = 7074; // 0xee2 PushI
	SetMessage(var_461_int); // 0xee3 TObjFunc
	ClearReplies(); // 0xee5 TObjFunc
	var_462_int = 7075; // 0xee7 PushI
	var_463_int = -1; // 0xee8 PushI
	var_464_int = 7798; // 0xee9 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0xeea TObjFunc
	var_465_int = 7076; // 0xeec PushI
	var_466_int = -1; // 0xeed PushI
	var_467_int = 7799; // 0xeee PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0xeef TObjFunc
	return 0; // 0xef1 Return
	
Label_3826:
	var_468_int = 7433; // 0xef2 PushI
	var_469_bool = var_40_string == var_468_int; // 0xef3 Eq
	if(var_469_bool == 0) goto Label_3849; // 0xef4 JumpB
	var_470_string = ""; // 0xef5 PushV
	var_470_string = "Neutral"; // 0xef6 MovS
	func_3264(var_41_bool, var_470_string); // 0xef7 Call
	var_471_int = 6744; // 0xef9 PushI
	SetMessage(var_471_int); // 0xefa TObjFunc
	ClearReplies(); // 0xefc TObjFunc
	var_472_int = 6745; // 0xefe PushI
	var_473_int = 7420; // 0xeff PushI
	var_474_int = 7434; // 0xf00 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0xf01 TObjFunc
	var_475_int = 6746; // 0xf03 PushI
	var_476_int = -1; // 0xf04 PushI
	var_477_int = 7436; // 0xf05 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0xf06 TObjFunc
	return 0; // 0xf08 Return
	
Label_3849:
	var_478_int = 7420; // 0xf09 PushI
	var_479_bool = var_40_string == var_478_int; // 0xf0a Eq
	if(var_479_bool == 0) goto Label_3872; // 0xf0b JumpB
	var_480_string = ""; // 0xf0c PushV
	var_480_string = "Neutral"; // 0xf0d MovS
	func_3264(var_41_bool, var_480_string); // 0xf0e Call
	var_481_int = 6733; // 0xf10 PushI
	SetMessage(var_481_int); // 0xf11 TObjFunc
	ClearReplies(); // 0xf13 TObjFunc
	var_482_int = 6734; // 0xf15 PushI
	var_483_int = 7422; // 0xf16 PushI
	var_484_int = 7421; // 0xf17 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0xf18 TObjFunc
	var_485_int = 6741; // 0xf1a PushI
	var_486_int = 7422; // 0xf1b PushI
	var_487_int = 7428; // 0xf1c PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0xf1d TObjFunc
	return 0; // 0xf1f Return
	
Label_3872:
	var_488_int = 7422; // 0xf20 PushI
	var_489_bool = var_40_string == var_488_int; // 0xf21 Eq
	if(var_489_bool == 0) goto Label_3895; // 0xf22 JumpB
	var_490_string = ""; // 0xf23 PushV
	var_490_string = "Neutral"; // 0xf24 MovS
	func_3264(var_41_bool, var_490_string); // 0xf25 Call
	var_491_int = 6735; // 0xf27 PushI
	SetMessage(var_491_int); // 0xf28 TObjFunc
	ClearReplies(); // 0xf2a TObjFunc
	var_492_int = 6737; // 0xf2c PushI
	var_493_int = 7425; // 0xf2d PushI
	var_494_int = 7424; // 0xf2e PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0xf2f TObjFunc
	var_495_int = 6736; // 0xf31 PushI
	var_496_int = 7789; // 0xf32 PushI
	var_497_int = 7423; // 0xf33 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0xf34 TObjFunc
	return 0; // 0xf36 Return
	
Label_3895:
	var_498_int = 7425; // 0xf37 PushI
	var_499_bool = var_40_string == var_498_int; // 0xf38 Eq
	if(var_499_bool == 0) goto Label_3918; // 0xf39 JumpB
	var_500_string = ""; // 0xf3a PushV
	var_500_string = "Neutral"; // 0xf3b MovS
	func_3264(var_41_bool, var_500_string); // 0xf3c Call
	var_501_int = 6738; // 0xf3e PushI
	SetMessage(var_501_int); // 0xf3f TObjFunc
	ClearReplies(); // 0xf41 TObjFunc
	var_502_int = 6739; // 0xf43 PushI
	var_503_int = 7789; // 0xf44 PushI
	var_504_int = 7426; // 0xf45 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0xf46 TObjFunc
	var_505_int = 6740; // 0xf48 PushI
	var_506_int = 7789; // 0xf49 PushI
	var_507_int = 7427; // 0xf4a PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0xf4b TObjFunc
	return 0; // 0xf4d Return
	
Label_3918:
	var_508_int = 7789; // 0xf4e PushI
	var_509_bool = var_40_string == var_508_int; // 0xf4f Eq
	if(var_509_bool == 0) goto Label_3941; // 0xf50 JumpB
	var_510_string = ""; // 0xf51 PushV
	var_510_string = "Neutral"; // 0xf52 MovS
	func_3264(var_41_bool, var_510_string); // 0xf53 Call
	var_511_int = 7068; // 0xf55 PushI
	SetMessage(var_511_int); // 0xf56 TObjFunc
	ClearReplies(); // 0xf58 TObjFunc
	var_512_int = 7069; // 0xf5a PushI
	var_513_int = -1; // 0xf5b PushI
	var_514_int = 7790; // 0xf5c PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0xf5d TObjFunc
	var_515_int = 7070; // 0xf5f PushI
	var_516_int = -1; // 0xf60 PushI
	var_517_int = 7791; // 0xf61 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0xf62 TObjFunc
	return 0; // 0xf64 Return
	
Label_3941:
	var_518_int = 7748; // 0xf65 PushI
	var_519_bool = var_40_string == var_518_int; // 0xf66 Eq
	if(var_519_bool == 0) goto Label_3964; // 0xf67 JumpB
	var_520_string = ""; // 0xf68 PushV
	var_520_string = "Neutral"; // 0xf69 MovS
	func_3264(var_41_bool, var_520_string); // 0xf6a Call
	var_521_int = 7034; // 0xf6c PushI
	SetMessage(var_521_int); // 0xf6d TObjFunc
	ClearReplies(); // 0xf6f TObjFunc
	var_522_int = 7035; // 0xf71 PushI
	var_523_int = 7750; // 0xf72 PushI
	var_524_int = 7749; // 0xf73 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0xf74 TObjFunc
	var_525_int = 7051; // 0xf76 PushI
	var_526_int = 7766; // 0xf77 PushI
	var_527_int = 7765; // 0xf78 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0xf79 TObjFunc
	return 0; // 0xf7b Return
	
Label_3964:
	var_528_int = 7766; // 0xf7c PushI
	var_529_bool = var_40_string == var_528_int; // 0xf7d Eq
	if(var_529_bool == 0) goto Label_3982; // 0xf7e JumpB
	var_530_string = ""; // 0xf7f PushV
	var_530_string = "Neutral"; // 0xf80 MovS
	func_3264(var_41_bool, var_530_string); // 0xf81 Call
	var_531_int = 7052; // 0xf83 PushI
	SetMessage(var_531_int); // 0xf84 TObjFunc
	ClearReplies(); // 0xf86 TObjFunc
	var_532_int = 7053; // 0xf88 PushI
	var_533_int = 7750; // 0xf89 PushI
	var_534_int = 7767; // 0xf8a PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0xf8b TObjFunc
	return 0; // 0xf8d Return
	
Label_3982:
	var_535_int = 7750; // 0xf8e PushI
	var_536_bool = var_40_string == var_535_int; // 0xf8f Eq
	if(var_536_bool == 0) goto Label_4000; // 0xf90 JumpB
	var_537_string = ""; // 0xf91 PushV
	var_537_string = "Neutral"; // 0xf92 MovS
	func_3264(var_41_bool, var_537_string); // 0xf93 Call
	var_538_int = 7036; // 0xf95 PushI
	SetMessage(var_538_int); // 0xf96 TObjFunc
	ClearReplies(); // 0xf98 TObjFunc
	var_539_int = 7037; // 0xf9a PushI
	var_540_int = 7752; // 0xf9b PushI
	var_541_int = 7751; // 0xf9c PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0xf9d TObjFunc
	return 0; // 0xf9f Return
	
Label_4000:
	var_542_int = 7752; // 0xfa0 PushI
	var_543_bool = var_40_string == var_542_int; // 0xfa1 Eq
	if(var_543_bool == 0) goto Label_4023; // 0xfa2 JumpB
	var_544_string = ""; // 0xfa3 PushV
	var_544_string = "Neutral"; // 0xfa4 MovS
	func_3264(var_41_bool, var_544_string); // 0xfa5 Call
	var_545_int = 7038; // 0xfa7 PushI
	SetMessage(var_545_int); // 0xfa8 TObjFunc
	ClearReplies(); // 0xfaa TObjFunc
	var_546_int = 7039; // 0xfac PushI
	var_547_int = 7754; // 0xfad PushI
	var_548_int = 7753; // 0xfae PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0xfaf TObjFunc
	var_549_int = 7048; // 0xfb1 PushI
	var_550_int = 7763; // 0xfb2 PushI
	var_551_int = 7762; // 0xfb3 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0xfb4 TObjFunc
	return 0; // 0xfb6 Return
	
Label_4023:
	var_552_int = 7763; // 0xfb7 PushI
	var_553_bool = var_40_string == var_552_int; // 0xfb8 Eq
	if(var_553_bool == 0) goto Label_4041; // 0xfb9 JumpB
	var_554_string = ""; // 0xfba PushV
	var_554_string = "Neutral"; // 0xfbb MovS
	func_3264(var_41_bool, var_554_string); // 0xfbc Call
	var_555_int = 7049; // 0xfbe PushI
	SetMessage(var_555_int); // 0xfbf TObjFunc
	ClearReplies(); // 0xfc1 TObjFunc
	var_556_int = 7054; // 0xfc3 PushI
	var_557_int = 7759; // 0xfc4 PushI
	var_558_int = 7770; // 0xfc5 PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0xfc6 TObjFunc
	return 0; // 0xfc8 Return
	
Label_4041:
	var_559_int = 7754; // 0xfc9 PushI
	var_560_bool = var_40_string == var_559_int; // 0xfca Eq
	if(var_560_bool == 0) goto Label_4064; // 0xfcb JumpB
	var_561_string = ""; // 0xfcc PushV
	var_561_string = "Neutral"; // 0xfcd MovS
	func_3264(var_41_bool, var_561_string); // 0xfce Call
	var_562_int = 7040; // 0xfd0 PushI
	SetMessage(var_562_int); // 0xfd1 TObjFunc
	ClearReplies(); // 0xfd3 TObjFunc
	var_563_int = 7043; // 0xfd5 PushI
	var_564_int = 7759; // 0xfd6 PushI
	var_565_int = 7757; // 0xfd7 PushI
	AddReply(var_563_int, var_564_int, var_565_int); // 0xfd8 TObjFunc
	var_566_int = 7041; // 0xfda PushI
	var_567_int = 7756; // 0xfdb PushI
	var_568_int = 7755; // 0xfdc PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0xfdd TObjFunc
	return 0; // 0xfdf Return
	
Label_4064:
	var_569_int = 7756; // 0xfe0 PushI
	var_570_bool = var_40_string == var_569_int; // 0xfe1 Eq
	if(var_570_bool == 0) goto Label_4082; // 0xfe2 JumpB
	var_571_string = ""; // 0xfe3 PushV
	var_571_string = "Neutral"; // 0xfe4 MovS
	func_3264(var_41_bool, var_571_string); // 0xfe5 Call
	var_572_int = 7042; // 0xfe7 PushI
	SetMessage(var_572_int); // 0xfe8 TObjFunc
	ClearReplies(); // 0xfea TObjFunc
	var_573_int = 7044; // 0xfec PushI
	var_574_int = 7759; // 0xfed PushI
	var_575_int = 7758; // 0xfee PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0xfef TObjFunc
	return 0; // 0xff1 Return
	
Label_4082:
	var_576_int = 7759; // 0xff2 PushI
	var_577_bool = var_40_string == var_576_int; // 0xff3 Eq
	if(var_577_bool == 0) goto Label_4110; // 0xff4 JumpB
	var_578_string = ""; // 0xff5 PushV
	var_578_string = "Neutral"; // 0xff6 MovS
	func_3264(var_41_bool, var_578_string); // 0xff7 Call
	var_579_int = 7045; // 0xff9 PushI
	SetMessage(var_579_int); // 0xffa TObjFunc
	ClearReplies(); // 0xffc TObjFunc
	var_580_int = 7046; // 0xffe PushI
	var_581_int = 7761; // 0xfff PushI
	var_582_int = 7760; // 0x1000 PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0x1001 TObjFunc
	var_583_int = 7067; // 0x1003 PushI
	var_584_int = 7761; // 0x1004 PushI
	var_585_int = 7787; // 0x1005 PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x1006 TObjFunc
	var_586_int = 7055; // 0x1008 PushI
	var_587_int = 7773; // 0x1009 PushI
	var_588_int = 7772; // 0x100a PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x100b TObjFunc
	return 0; // 0x100d Return
	
Label_4110:
	var_589_int = 7773; // 0x100e PushI
	var_590_bool = var_40_string == var_589_int; // 0x100f Eq
	if(var_590_bool == 0) goto Label_4128; // 0x1010 JumpB
	var_591_string = ""; // 0x1011 PushV
	var_591_string = "Neutral"; // 0x1012 MovS
	func_3264(var_41_bool, var_591_string); // 0x1013 Call
	var_592_int = 7056; // 0x1015 PushI
	SetMessage(var_592_int); // 0x1016 TObjFunc
	ClearReplies(); // 0x1018 TObjFunc
	var_593_int = 7057; // 0x101a PushI
	var_594_int = 7761; // 0x101b PushI
	var_595_int = 7774; // 0x101c PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x101d TObjFunc
	return 0; // 0x101f Return
	
Label_4128:
	var_596_int = 7761; // 0x1020 PushI
	var_597_bool = var_40_string == var_596_int; // 0x1021 Eq
	if(var_597_bool == 0) goto Label_4151; // 0x1022 JumpB
	var_598_string = ""; // 0x1023 PushV
	var_598_string = "Neutral"; // 0x1024 MovS
	func_3264(var_41_bool, var_598_string); // 0x1025 Call
	var_599_int = 7047; // 0x1027 PushI
	SetMessage(var_599_int); // 0x1028 TObjFunc
	ClearReplies(); // 0x102a TObjFunc
	var_600_int = 7058; // 0x102c PushI
	var_601_int = -1; // 0x102d PushI
	var_602_int = 7775; // 0x102e PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x102f TObjFunc
	var_603_int = 7059; // 0x1031 PushI
	var_604_int = 7778; // 0x1032 PushI
	var_605_int = 7777; // 0x1033 PushI
	AddReply(var_603_int, var_604_int, var_605_int); // 0x1034 TObjFunc
	return 0; // 0x1036 Return
	
Label_4151:
	var_606_int = 7778; // 0x1037 PushI
	var_607_bool = var_40_string == var_606_int; // 0x1038 Eq
	if(var_607_bool == 0) goto Label_4179; // 0x1039 JumpB
	var_608_string = ""; // 0x103a PushV
	var_608_string = "Neutral"; // 0x103b MovS
	func_3264(var_41_bool, var_608_string); // 0x103c Call
	var_609_int = 7060; // 0x103e PushI
	SetMessage(var_609_int); // 0x103f TObjFunc
	ClearReplies(); // 0x1041 TObjFunc
	var_610_int = 7061; // 0x1043 PushI
	var_611_int = -1; // 0x1044 PushI
	var_612_int = 7779; // 0x1045 PushI
	AddReply(var_610_int, var_611_int, var_612_int); // 0x1046 TObjFunc
	var_613_int = 7062; // 0x1048 PushI
	var_614_int = -1; // 0x1049 PushI
	var_615_int = 7780; // 0x104a PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0x104b TObjFunc
	var_616_int = 7063; // 0x104d PushI
	var_617_int = 7782; // 0x104e PushI
	var_618_int = 7781; // 0x104f PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x1050 TObjFunc
	return 0; // 0x1052 Return
	
Label_4179:
	var_619_int = 7782; // 0x1053 PushI
	var_620_bool = var_40_string == var_619_int; // 0x1054 Eq
	if(var_620_bool == 0) goto Label_4197; // 0x1055 JumpB
	var_621_string = ""; // 0x1056 PushV
	var_621_string = "Neutral"; // 0x1057 MovS
	func_3264(var_41_bool, var_621_string); // 0x1058 Call
	var_622_int = 7064; // 0x105a PushI
	SetMessage(var_622_int); // 0x105b TObjFunc
	ClearReplies(); // 0x105d TObjFunc
	var_623_int = 7065; // 0x105f PushI
	var_624_int = -1; // 0x1060 PushI
	var_625_int = 7783; // 0x1061 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x1062 TObjFunc
	return 0; // 0x1064 Return
	
Label_4197:
	var_3_string = 1; // 0x1065 TMovB
	var_626_bool = 0; // 0x1066 PushV
	func_7001(var_626_bool); // 0x1067 Call
	if(var_626_bool == 0) goto Label_4205; // 0x1069 JumpB
	lshStopAnimation(); // 0x106a Func
	goto Label_4207; // 0x106c Jump
	
Label_4207:
	return 0; // 0x106f Return
	
Label_4205:
	StopAnimation(); // 0x106d Func
	
Label_4209:
	return 0; // 0x1071 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x114a PushI
	if(var_42_int == 0) goto Label_5050; // 0x114b JumpB
	func_6878(); // 0x114d Call
	var_44_int = 9978; // 0x114f PushI
	var_45_bool = var_41_bool == var_44_int; // 0x1150 Eq
	if(var_45_bool == 0) goto Label_4439; // 0x1151 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x1152 PushV
	var_46_object = var_1_object; // 0x1153 MovT
	var_47_object = var_0_object; // 0x1154 MovT
	func_7260(); // 0x1155 Call
	
Label_4439:
	var_50_int = 9979; // 0x1157 PushI
	var_51_bool = var_41_bool == var_50_int; // 0x1158 Eq
	if(var_51_bool == 0) goto Label_4447; // 0x1159 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x115a PushV
	var_52_object = var_1_object; // 0x115b MovT
	var_53_object = var_0_object; // 0x115c MovT
	func_7260(); // 0x115d Call
	
Label_4447:
	var_54_int = 9724; // 0x115f PushI
	var_55_bool = var_41_bool == var_54_int; // 0x1160 Eq
	if(var_55_bool == 0) goto Label_4470; // 0x1161 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0x1162 PushV
	var_56_object = var_1_object; // 0x1163 MovT
	var_57_object = var_0_object; // 0x1164 MovT
	func_7248(); // 0x1165 Call
	var_60_object = Obj(); var_61_object = Obj(); // 0x1167 PushV
	var_60_object = var_1_object; // 0x1168 MovT
	var_61_object = var_0_object; // 0x1169 MovT
	func_7266(); // 0x116a Call
	var_110_object = Obj(); var_111_object = Obj(); // 0x116c PushV
	var_110_object = var_1_object; // 0x116d MovT
	var_111_object = var_0_object; // 0x116e MovT
	func_7254(); // 0x116f Call
	var_114_object = Obj(); var_115_object = Obj(); // 0x1171 PushV
	var_114_object = var_1_object; // 0x1172 MovT
	var_115_object = var_0_object; // 0x1173 MovT
	func_7226(); // 0x1174 Call
	
Label_4470:
	var_140_int = 9704; // 0x1176 PushI
	var_141_bool = var_41_bool == var_140_int; // 0x1177 Eq
	if(var_141_bool == 0) goto Label_4478; // 0x1178 JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x1179 PushV
	var_142_object = var_1_object; // 0x117a MovT
	var_143_object = var_0_object; // 0x117b MovT
	func_7242(); // 0x117c Call
	
Label_4478:
	var_146_int = 13182; // 0x117e PushI
	var_147_bool = var_41_bool == var_146_int; // 0x117f Eq
	if(var_147_bool == 0) goto Label_4486; // 0x1180 JumpB
	var_148_object = Obj(); var_149_object = Obj(); // 0x1181 PushV
	var_148_object = var_1_object; // 0x1182 MovT
	var_149_object = var_0_object; // 0x1183 MovT
	func_7513(); // 0x1184 Call
	
Label_4486:
	var_150_int = 13183; // 0x1186 PushI
	var_151_bool = var_41_bool == var_150_int; // 0x1187 Eq
	if(var_151_bool == 0) goto Label_4494; // 0x1188 JumpB
	var_152_object = Obj(); var_153_object = Obj(); // 0x1189 PushV
	var_152_object = var_1_object; // 0x118a MovT
	var_153_object = var_0_object; // 0x118b MovT
	func_7513(); // 0x118c Call
	
Label_4494:
	var_154_int = 13184; // 0x118e PushI
	var_155_bool = var_41_bool == var_154_int; // 0x118f Eq
	if(var_155_bool == 0) goto Label_4502; // 0x1190 JumpB
	var_156_object = Obj(); var_157_object = Obj(); // 0x1191 PushV
	var_156_object = var_1_object; // 0x1192 MovT
	var_157_object = var_0_object; // 0x1193 MovT
	func_7513(); // 0x1194 Call
	
Label_4502:
	var_158_int = 9964; // 0x1196 PushI
	var_159_bool = var_40_string == var_158_int; // 0x1197 Eq
	if(var_159_bool == 0) goto Label_4603; // 0x1198 JumpB
	var_160_bool = 0; // 0x1199 PushV
	var_160_bool = 0; // 0x119a MovB
	var_161_bool = 0; var_162_object = Obj(); // 0x119b PushV
	var_162_object = var_1_object; // 0x119c MovT
	func_7928(var_162_object); // 0x119d Call
	if(var_161_bool == 0) goto Label_4518; // 0x119f JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x11a0 PushV
	var_170_object = var_1_object; // 0x11a1 MovT
	func_7916(var_170_object); // 0x11a2 Call
	if(var_169_bool == 0) goto Label_4518; // 0x11a4 JumpB
	var_160_bool = 1; // 0x11a5 MovB
	
Label_4518:
	if(var_160_bool == 0) goto Label_4539; // 0x11a6 JumpB
	var_175_string = ""; // 0x11a7 PushV
	var_175_string = "Neutral"; // 0x11a8 MovS
	func_4409(var_41_bool, var_175_string); // 0x11a9 Call
	var_190_int = 9086; // 0x11ab PushI
	SetMessage(var_190_int); // 0x11ac TObjFunc
	ClearReplies(); // 0x11ae TObjFunc
	var_191_int = 9087; // 0x11b0 PushI
	var_192_int = 9969; // 0x11b1 PushI
	var_193_int = 9965; // 0x11b2 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x11b3 TObjFunc
	var_194_int = 9088; // 0x11b5 PushI
	var_195_int = 9967; // 0x11b6 PushI
	var_196_int = 9966; // 0x11b7 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x11b8 TObjFunc
	return 0; // 0x11ba Return
	
Label_4539:
	var_197_string = ""; // 0x11bb PushV
	var_197_string = "Neutral"; // 0x11bc MovS
	func_4409(var_41_bool, var_197_string); // 0x11bd Call
	var_198_int = 8854; // 0x11bf PushI
	SetMessage(var_198_int); // 0x11c0 TObjFunc
	ClearReplies(); // 0x11c2 TObjFunc
	var_199_bool = 0; // 0x11c4 PushV
	var_199_bool = 0; // 0x11c5 MovB
	var_200_bool = 0; var_201_object = Obj(); // 0x11c6 PushV
	var_201_object = var_1_object; // 0x11c7 MovT
	func_7892(var_201_object); // 0x11c8 Call
	if(var_200_bool == 0) goto Label_4561; // 0x11ca JumpB
	var_206_bool = 0; var_207_object = Obj(); // 0x11cb PushV
	var_207_object = var_1_object; // 0x11cc MovT
	func_7952(var_207_object); // 0x11cd Call
	if(var_206_bool == 0) goto Label_4561; // 0x11cf JumpB
	var_199_bool = 1; // 0x11d0 MovB
	
Label_4561:
	if(var_199_bool == 0) goto Label_4567; // 0x11d1 JumpB
	var_212_int = 8840; // 0x11d2 PushI
	var_213_int = 9693; // 0x11d3 PushI
	var_214_int = 9692; // 0x11d4 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x11d5 TObjFunc
	
Label_4567:
	var_215_bool = 0; var_216_object = Obj(); // 0x11d7 PushV
	var_216_object = var_1_object; // 0x11d8 MovT
	func_7880(var_216_object); // 0x11d9 Call
	if(var_215_bool == 0) goto Label_4577; // 0x11db JumpB
	var_221_int = 8855; // 0x11dc PushI
	var_222_int = 9687; // 0x11dd PushI
	var_223_int = 9711; // 0x11de PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x11df TObjFunc
	
Label_4577:
	var_224_bool = 0; var_225_object = Obj(); // 0x11e1 PushV
	var_225_object = var_1_object; // 0x11e2 MovT
	func_7904(var_225_object); // 0x11e3 Call
	if(var_224_bool == 0) goto Label_4587; // 0x11e5 JumpB
	var_230_int = 8856; // 0x11e6 PushI
	var_231_int = 9691; // 0x11e7 PushI
	var_232_int = 9712; // 0x11e8 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x11e9 TObjFunc
	
Label_4587:
	var_233_bool = 0; var_234_object = Obj(); // 0x11eb PushV
	var_234_object = var_1_object; // 0x11ec MovT
	func_8068(var_234_object); // 0x11ed Call
	if(var_233_bool == 0) goto Label_4597; // 0x11ef JumpB
	var_235_int = 11978; // 0x11f0 PushI
	var_236_int = 13175; // 0x11f1 PushI
	var_237_int = 13193; // 0x11f2 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x11f3 TObjFunc
	
Label_4597:
	var_238_int = 11133; // 0x11f5 PushI
	var_239_int = -1; // 0x11f6 PushI
	var_240_int = 12322; // 0x11f7 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x11f8 TObjFunc
	return 0; // 0x11fa Return
	
Label_4603:
	var_241_int = 13175; // 0x11fb PushI
	var_242_bool = var_40_string == var_241_int; // 0x11fc Eq
	if(var_242_bool == 0) goto Label_4631; // 0x11fd JumpB
	var_243_string = ""; // 0x11fe PushV
	var_243_string = "Neutral"; // 0x11ff MovS
	func_4409(var_41_bool, var_243_string); // 0x1200 Call
	var_244_int = 11964; // 0x1202 PushI
	SetMessage(var_244_int); // 0x1203 TObjFunc
	ClearReplies(); // 0x1205 TObjFunc
	var_245_int = 11965; // 0x1207 PushI
	var_246_int = 13177; // 0x1208 PushI
	var_247_int = 13176; // 0x1209 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x120a TObjFunc
	var_248_int = 11976; // 0x120c PushI
	var_249_int = 13177; // 0x120d PushI
	var_250_int = 13189; // 0x120e PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x120f TObjFunc
	var_251_int = 11977; // 0x1211 PushI
	var_252_int = 13177; // 0x1212 PushI
	var_253_int = 13191; // 0x1213 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x1214 TObjFunc
	return 0; // 0x1216 Return
	
Label_4631:
	var_254_int = 13177; // 0x1217 PushI
	var_255_bool = var_40_string == var_254_int; // 0x1218 Eq
	if(var_255_bool == 0) goto Label_4654; // 0x1219 JumpB
	var_256_string = ""; // 0x121a PushV
	var_256_string = "Neutral"; // 0x121b MovS
	func_4409(var_41_bool, var_256_string); // 0x121c Call
	var_257_int = 11966; // 0x121e PushI
	SetMessage(var_257_int); // 0x121f TObjFunc
	ClearReplies(); // 0x1221 TObjFunc
	var_258_int = 11967; // 0x1223 PushI
	var_259_int = 13179; // 0x1224 PushI
	var_260_int = 13178; // 0x1225 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x1226 TObjFunc
	var_261_int = 11975; // 0x1228 PushI
	var_262_int = 13179; // 0x1229 PushI
	var_263_int = 13187; // 0x122a PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x122b TObjFunc
	return 0; // 0x122d Return
	
Label_4654:
	var_264_int = 13179; // 0x122e PushI
	var_265_bool = var_40_string == var_264_int; // 0x122f Eq
	if(var_265_bool == 0) goto Label_4677; // 0x1230 JumpB
	var_266_string = ""; // 0x1231 PushV
	var_266_string = "Neutral"; // 0x1232 MovS
	func_4409(var_41_bool, var_266_string); // 0x1233 Call
	var_267_int = 11968; // 0x1235 PushI
	SetMessage(var_267_int); // 0x1236 TObjFunc
	ClearReplies(); // 0x1238 TObjFunc
	var_268_int = 11969; // 0x123a PushI
	var_269_int = 13181; // 0x123b PushI
	var_270_int = 13180; // 0x123c PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x123d TObjFunc
	var_271_int = 11974; // 0x123f PushI
	var_272_int = 13181; // 0x1240 PushI
	var_273_int = 13185; // 0x1241 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x1242 TObjFunc
	return 0; // 0x1244 Return
	
Label_4677:
	var_274_int = 13181; // 0x1245 PushI
	var_275_bool = var_40_string == var_274_int; // 0x1246 Eq
	if(var_275_bool == 0) goto Label_4705; // 0x1247 JumpB
	var_276_string = ""; // 0x1248 PushV
	var_276_string = "Neutral"; // 0x1249 MovS
	func_4409(var_41_bool, var_276_string); // 0x124a Call
	var_277_int = 11970; // 0x124c PushI
	SetMessage(var_277_int); // 0x124d TObjFunc
	ClearReplies(); // 0x124f TObjFunc
	var_278_int = 11971; // 0x1251 PushI
	var_279_int = -1; // 0x1252 PushI
	var_280_int = 13182; // 0x1253 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x1254 TObjFunc
	var_281_int = 11972; // 0x1256 PushI
	var_282_int = -1; // 0x1257 PushI
	var_283_int = 13183; // 0x1258 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x1259 TObjFunc
	var_284_int = 11973; // 0x125b PushI
	var_285_int = -1; // 0x125c PushI
	var_286_int = 13184; // 0x125d PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x125e TObjFunc
	return 0; // 0x1260 Return
	
Label_4705:
	var_287_int = 9691; // 0x1261 PushI
	var_288_bool = var_40_string == var_287_int; // 0x1262 Eq
	if(var_288_bool == 0) goto Label_4723; // 0x1263 JumpB
	var_289_string = ""; // 0x1264 PushV
	var_289_string = "Neutral"; // 0x1265 MovS
	func_4409(var_41_bool, var_289_string); // 0x1266 Call
	var_290_int = 8839; // 0x1268 PushI
	SetMessage(var_290_int); // 0x1269 TObjFunc
	ClearReplies(); // 0x126b TObjFunc
	var_291_int = 8857; // 0x126d PushI
	var_292_int = 9714; // 0x126e PushI
	var_293_int = 9713; // 0x126f PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x1270 TObjFunc
	return 0; // 0x1272 Return
	
Label_4723:
	var_294_int = 9714; // 0x1273 PushI
	var_295_bool = var_40_string == var_294_int; // 0x1274 Eq
	if(var_295_bool == 0) goto Label_4741; // 0x1275 JumpB
	var_296_string = ""; // 0x1276 PushV
	var_296_string = "Neutral"; // 0x1277 MovS
	func_4409(var_41_bool, var_296_string); // 0x1278 Call
	var_297_int = 8858; // 0x127a PushI
	SetMessage(var_297_int); // 0x127b TObjFunc
	ClearReplies(); // 0x127d TObjFunc
	var_298_int = 8859; // 0x127f PushI
	var_299_int = 9693; // 0x1280 PushI
	var_300_int = 9715; // 0x1281 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x1282 TObjFunc
	return 0; // 0x1284 Return
	
Label_4741:
	var_301_int = 9687; // 0x1285 PushI
	var_302_bool = var_40_string == var_301_int; // 0x1286 Eq
	if(var_302_bool == 0) goto Label_4769; // 0x1287 JumpB
	var_303_string = ""; // 0x1288 PushV
	var_303_string = "Neutral"; // 0x1289 MovS
	func_4409(var_41_bool, var_303_string); // 0x128a Call
	var_304_int = 8835; // 0x128c PushI
	SetMessage(var_304_int); // 0x128d TObjFunc
	ClearReplies(); // 0x128f TObjFunc
	var_305_int = 8836; // 0x1291 PushI
	var_306_int = 9689; // 0x1292 PushI
	var_307_int = 9688; // 0x1293 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x1294 TObjFunc
	var_308_int = 8852; // 0x1296 PushI
	var_309_int = 9689; // 0x1297 PushI
	var_310_int = 9706; // 0x1298 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x1299 TObjFunc
	var_311_int = 8853; // 0x129b PushI
	var_312_int = 9689; // 0x129c PushI
	var_313_int = 9708; // 0x129d PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x129e TObjFunc
	return 0; // 0x12a0 Return
	
Label_4769:
	var_314_int = 9689; // 0x12a1 PushI
	var_315_bool = var_40_string == var_314_int; // 0x12a2 Eq
	if(var_315_bool == 0) goto Label_4787; // 0x12a3 JumpB
	var_316_string = ""; // 0x12a4 PushV
	var_316_string = "Neutral"; // 0x12a5 MovS
	func_4409(var_41_bool, var_316_string); // 0x12a6 Call
	var_317_int = 8837; // 0x12a8 PushI
	SetMessage(var_317_int); // 0x12a9 TObjFunc
	ClearReplies(); // 0x12ab TObjFunc
	var_318_int = 8849; // 0x12ad PushI
	var_319_int = 9703; // 0x12ae PushI
	var_320_int = 9702; // 0x12af PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x12b0 TObjFunc
	return 0; // 0x12b2 Return
	
Label_4787:
	var_321_int = 9703; // 0x12b3 PushI
	var_322_bool = var_40_string == var_321_int; // 0x12b4 Eq
	if(var_322_bool == 0) goto Label_4805; // 0x12b5 JumpB
	var_323_string = ""; // 0x12b6 PushV
	var_323_string = "Neutral"; // 0x12b7 MovS
	func_4409(var_41_bool, var_323_string); // 0x12b8 Call
	var_324_int = 8850; // 0x12ba PushI
	SetMessage(var_324_int); // 0x12bb TObjFunc
	ClearReplies(); // 0x12bd TObjFunc
	var_325_int = 8851; // 0x12bf PushI
	var_326_int = -1; // 0x12c0 PushI
	var_327_int = 9704; // 0x12c1 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x12c2 TObjFunc
	return 0; // 0x12c4 Return
	
Label_4805:
	var_328_int = 9693; // 0x12c5 PushI
	var_329_bool = var_40_string == var_328_int; // 0x12c6 Eq
	if(var_329_bool == 0) goto Label_4833; // 0x12c7 JumpB
	var_330_string = ""; // 0x12c8 PushV
	var_330_string = "Neutral"; // 0x12c9 MovS
	func_4409(var_41_bool, var_330_string); // 0x12ca Call
	var_331_int = 8841; // 0x12cc PushI
	SetMessage(var_331_int); // 0x12cd TObjFunc
	ClearReplies(); // 0x12cf TObjFunc
	var_332_int = 8842; // 0x12d1 PushI
	var_333_int = 9695; // 0x12d2 PushI
	var_334_int = 9694; // 0x12d3 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x12d4 TObjFunc
	var_335_int = 8846; // 0x12d6 PushI
	var_336_int = 9699; // 0x12d7 PushI
	var_337_int = 9698; // 0x12d8 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x12d9 TObjFunc
	var_338_int = 8861; // 0x12db PushI
	var_339_int = 9719; // 0x12dc PushI
	var_340_int = 9718; // 0x12dd PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x12de TObjFunc
	return 0; // 0x12e0 Return
	
Label_4833:
	var_341_int = 9719; // 0x12e1 PushI
	var_342_bool = var_40_string == var_341_int; // 0x12e2 Eq
	if(var_342_bool == 0) goto Label_4856; // 0x12e3 JumpB
	var_343_string = ""; // 0x12e4 PushV
	var_343_string = "Neutral"; // 0x12e5 MovS
	func_4409(var_41_bool, var_343_string); // 0x12e6 Call
	var_344_int = 8862; // 0x12e8 PushI
	SetMessage(var_344_int); // 0x12e9 TObjFunc
	ClearReplies(); // 0x12eb TObjFunc
	var_345_int = 8863; // 0x12ed PushI
	var_346_int = 9716; // 0x12ee PushI
	var_347_int = 9720; // 0x12ef PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x12f0 TObjFunc
	var_348_int = 8867; // 0x12f2 PushI
	var_349_int = 9695; // 0x12f3 PushI
	var_350_int = 9725; // 0x12f4 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x12f5 TObjFunc
	return 0; // 0x12f7 Return
	
Label_4856:
	var_351_int = 9699; // 0x12f8 PushI
	var_352_bool = var_40_string == var_351_int; // 0x12f9 Eq
	if(var_352_bool == 0) goto Label_4874; // 0x12fa JumpB
	var_353_string = ""; // 0x12fb PushV
	var_353_string = "Neutral"; // 0x12fc MovS
	func_4409(var_41_bool, var_353_string); // 0x12fd Call
	var_354_int = 8847; // 0x12ff PushI
	SetMessage(var_354_int); // 0x1300 TObjFunc
	ClearReplies(); // 0x1302 TObjFunc
	var_355_int = 8848; // 0x1304 PushI
	var_356_int = 9695; // 0x1305 PushI
	var_357_int = 9700; // 0x1306 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x1307 TObjFunc
	return 0; // 0x1309 Return
	
Label_4874:
	var_358_int = 9695; // 0x130a PushI
	var_359_bool = var_40_string == var_358_int; // 0x130b Eq
	if(var_359_bool == 0) goto Label_4897; // 0x130c JumpB
	var_360_string = ""; // 0x130d PushV
	var_360_string = "Neutral"; // 0x130e MovS
	func_4409(var_41_bool, var_360_string); // 0x130f Call
	var_361_int = 8843; // 0x1311 PushI
	SetMessage(var_361_int); // 0x1312 TObjFunc
	ClearReplies(); // 0x1314 TObjFunc
	var_362_int = 8844; // 0x1316 PushI
	var_363_int = 9716; // 0x1317 PushI
	var_364_int = 9696; // 0x1318 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x1319 TObjFunc
	var_365_int = 8845; // 0x131b PushI
	var_366_int = 9716; // 0x131c PushI
	var_367_int = 9697; // 0x131d PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x131e TObjFunc
	return 0; // 0x1320 Return
	
Label_4897:
	var_368_int = 9716; // 0x1321 PushI
	var_369_bool = var_40_string == var_368_int; // 0x1322 Eq
	if(var_369_bool == 0) goto Label_4915; // 0x1323 JumpB
	var_370_string = ""; // 0x1324 PushV
	var_370_string = "Neutral"; // 0x1325 MovS
	func_4409(var_41_bool, var_370_string); // 0x1326 Call
	var_371_int = 8860; // 0x1328 PushI
	SetMessage(var_371_int); // 0x1329 TObjFunc
	ClearReplies(); // 0x132b TObjFunc
	var_372_int = 8864; // 0x132d PushI
	var_373_int = 9723; // 0x132e PushI
	var_374_int = 9722; // 0x132f PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x1330 TObjFunc
	return 0; // 0x1332 Return
	
Label_4915:
	var_375_int = 9723; // 0x1333 PushI
	var_376_bool = var_40_string == var_375_int; // 0x1334 Eq
	if(var_376_bool == 0) goto Label_4933; // 0x1335 JumpB
	var_377_string = ""; // 0x1336 PushV
	var_377_string = "Neutral"; // 0x1337 MovS
	func_4409(var_41_bool, var_377_string); // 0x1338 Call
	var_378_int = 8865; // 0x133a PushI
	SetMessage(var_378_int); // 0x133b TObjFunc
	ClearReplies(); // 0x133d TObjFunc
	var_379_int = 8866; // 0x133f PushI
	var_380_int = -1; // 0x1340 PushI
	var_381_int = 9724; // 0x1341 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x1342 TObjFunc
	return 0; // 0x1344 Return
	
Label_4933:
	var_382_int = 9967; // 0x1345 PushI
	var_383_bool = var_40_string == var_382_int; // 0x1346 Eq
	if(var_383_bool == 0) goto Label_4951; // 0x1347 JumpB
	var_384_string = ""; // 0x1348 PushV
	var_384_string = "Neutral"; // 0x1349 MovS
	func_4409(var_41_bool, var_384_string); // 0x134a Call
	var_385_int = 9089; // 0x134c PushI
	SetMessage(var_385_int); // 0x134d TObjFunc
	ClearReplies(); // 0x134f TObjFunc
	var_386_int = 9090; // 0x1351 PushI
	var_387_int = 9969; // 0x1352 PushI
	var_388_int = 9968; // 0x1353 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x1354 TObjFunc
	return 0; // 0x1356 Return
	
Label_4951:
	var_389_int = 9969; // 0x1357 PushI
	var_390_bool = var_40_string == var_389_int; // 0x1358 Eq
	if(var_390_bool == 0) goto Label_4969; // 0x1359 JumpB
	var_391_string = ""; // 0x135a PushV
	var_391_string = "Neutral"; // 0x135b MovS
	func_4409(var_41_bool, var_391_string); // 0x135c Call
	var_392_int = 9091; // 0x135e PushI
	SetMessage(var_392_int); // 0x135f TObjFunc
	ClearReplies(); // 0x1361 TObjFunc
	var_393_int = 9092; // 0x1363 PushI
	var_394_int = 9971; // 0x1364 PushI
	var_395_int = 9970; // 0x1365 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x1366 TObjFunc
	return 0; // 0x1368 Return
	
Label_4969:
	var_396_int = 9971; // 0x1369 PushI
	var_397_bool = var_40_string == var_396_int; // 0x136a Eq
	if(var_397_bool == 0) goto Label_4987; // 0x136b JumpB
	var_398_string = ""; // 0x136c PushV
	var_398_string = "Neutral"; // 0x136d MovS
	func_4409(var_41_bool, var_398_string); // 0x136e Call
	var_399_int = 9093; // 0x1370 PushI
	SetMessage(var_399_int); // 0x1371 TObjFunc
	ClearReplies(); // 0x1373 TObjFunc
	var_400_int = 9094; // 0x1375 PushI
	var_401_int = 9974; // 0x1376 PushI
	var_402_int = 9973; // 0x1377 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x1378 TObjFunc
	return 0; // 0x137a Return
	
Label_4987:
	var_403_int = 9974; // 0x137b PushI
	var_404_bool = var_40_string == var_403_int; // 0x137c Eq
	if(var_404_bool == 0) goto Label_5015; // 0x137d JumpB
	var_405_string = ""; // 0x137e PushV
	var_405_string = "Neutral"; // 0x137f MovS
	func_4409(var_41_bool, var_405_string); // 0x1380 Call
	var_406_int = 9095; // 0x1382 PushI
	SetMessage(var_406_int); // 0x1383 TObjFunc
	ClearReplies(); // 0x1385 TObjFunc
	var_407_bool = 0; var_408_object = Obj(); // 0x1387 PushV
	var_408_object = var_1_object; // 0x1388 MovT
	func_7916(var_408_object); // 0x1389 Call
	if(var_407_bool == 0) goto Label_5009; // 0x138b JumpB
	var_409_int = 9096; // 0x138c PushI
	var_410_int = -1; // 0x138d PushI
	var_411_int = 9975; // 0x138e PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x138f TObjFunc
	
Label_5009:
	var_412_int = 9097; // 0x1391 PushI
	var_413_int = 9977; // 0x1392 PushI
	var_414_int = 9976; // 0x1393 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x1394 TObjFunc
	return 0; // 0x1396 Return
	
Label_5015:
	var_415_int = 9977; // 0x1397 PushI
	var_416_bool = var_40_string == var_415_int; // 0x1398 Eq
	if(var_416_bool == 0) goto Label_5038; // 0x1399 JumpB
	var_417_string = ""; // 0x139a PushV
	var_417_string = "Neutral"; // 0x139b MovS
	func_4409(var_41_bool, var_417_string); // 0x139c Call
	var_418_int = 9098; // 0x139e PushI
	SetMessage(var_418_int); // 0x139f TObjFunc
	ClearReplies(); // 0x13a1 TObjFunc
	var_419_int = 9099; // 0x13a3 PushI
	var_420_int = -1; // 0x13a4 PushI
	var_421_int = 9978; // 0x13a5 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x13a6 TObjFunc
	var_422_int = 9100; // 0x13a8 PushI
	var_423_int = -1; // 0x13a9 PushI
	var_424_int = 9979; // 0x13aa PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x13ab TObjFunc
	return 0; // 0x13ad Return
	
Label_5038:
	var_3_string = 1; // 0x13ae TMovB
	var_425_bool = 0; // 0x13af PushV
	func_7001(var_425_bool); // 0x13b0 Call
	if(var_425_bool == 0) goto Label_5046; // 0x13b2 JumpB
	lshStopAnimation(); // 0x13b3 Func
	goto Label_5048; // 0x13b5 Jump
	
Label_5048:
	return 0; // 0x13b8 Return
	
Label_5046:
	StopAnimation(); // 0x13b6 Func
	
Label_5050:
	return 0; // 0x13ba Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x1493 PushI
	if(var_42_int == 0) goto Label_5808; // 0x1494 JumpB
	func_6878(); // 0x1496 Call
	var_44_int = 12370; // 0x1498 PushI
	var_45_bool = var_41_bool == var_44_int; // 0x1499 Eq
	if(var_45_bool == 0) goto Label_5295; // 0x149a JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x149b PushV
	var_46_object = var_1_object; // 0x149c MovT
	var_47_object = var_0_object; // 0x149d MovT
	func_7323(); // 0x149e Call
	var_50_object = Obj(); var_51_object = Obj(); // 0x14a0 PushV
	var_50_object = var_1_object; // 0x14a1 MovT
	var_51_object = var_0_object; // 0x14a2 MovT
	func_7329(); // 0x14a3 Call
	var_115_object = Obj(); var_116_object = Obj(); // 0x14a5 PushV
	var_115_object = var_1_object; // 0x14a6 MovT
	var_116_object = var_0_object; // 0x14a7 MovT
	func_7476(var_116_object); // 0x14a8 Call
	var_134_object = Obj(); var_135_object = Obj(); // 0x14aa PushV
	var_134_object = var_1_object; // 0x14ab MovT
	var_135_object = var_0_object; // 0x14ac MovT
	func_7364(); // 0x14ad Call
	
Label_5295:
	var_160_int = 12371; // 0x14af PushI
	var_161_bool = var_41_bool == var_160_int; // 0x14b0 Eq
	if(var_161_bool == 0) goto Label_5303; // 0x14b1 JumpB
	var_162_object = Obj(); var_163_object = Obj(); // 0x14b2 PushV
	var_162_object = var_1_object; // 0x14b3 MovT
	var_163_object = var_0_object; // 0x14b4 MovT
	func_7323(); // 0x14b5 Call
	
Label_5303:
	var_164_int = 12695; // 0x14b7 PushI
	var_165_bool = var_41_bool == var_164_int; // 0x14b8 Eq
	if(var_165_bool == 0) goto Label_5326; // 0x14b9 JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0x14ba PushV
	var_166_object = var_1_object; // 0x14bb MovT
	var_167_object = var_0_object; // 0x14bc MovT
	func_7329(); // 0x14bd Call
	var_168_object = Obj(); var_169_object = Obj(); // 0x14bf PushV
	var_168_object = var_1_object; // 0x14c0 MovT
	var_169_object = var_0_object; // 0x14c1 MovT
	func_7476(var_169_object); // 0x14c2 Call
	var_170_object = Obj(); var_171_object = Obj(); // 0x14c4 PushV
	var_170_object = var_1_object; // 0x14c5 MovT
	var_171_object = var_0_object; // 0x14c6 MovT
	func_7033(); // 0x14c7 Call
	var_174_object = Obj(); var_175_object = Obj(); // 0x14c9 PushV
	var_174_object = var_1_object; // 0x14ca MovT
	var_175_object = var_0_object; // 0x14cb MovT
	func_7364(); // 0x14cc Call
	
Label_5326:
	var_176_int = 12376; // 0x14ce PushI
	var_177_bool = var_41_bool == var_176_int; // 0x14cf Eq
	if(var_177_bool == 0) goto Label_5344; // 0x14d0 JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x14d1 PushV
	var_178_object = var_1_object; // 0x14d2 MovT
	var_179_object = var_0_object; // 0x14d3 MovT
	func_7380(); // 0x14d4 Call
	var_182_object = Obj(); var_183_object = Obj(); // 0x14d6 PushV
	var_182_object = var_1_object; // 0x14d7 MovT
	var_183_object = var_0_object; // 0x14d8 MovT
	func_7386(); // 0x14d9 Call
	var_203_object = Obj(); var_204_object = Obj(); // 0x14db PushV
	var_203_object = var_1_object; // 0x14dc MovT
	var_204_object = var_0_object; // 0x14dd MovT
	func_7460(); // 0x14de Call
	
Label_5344:
	var_210_int = 12377; // 0x14e0 PushI
	var_211_bool = var_41_bool == var_210_int; // 0x14e1 Eq
	if(var_211_bool == 0) goto Label_5362; // 0x14e2 JumpB
	var_212_object = Obj(); var_213_object = Obj(); // 0x14e3 PushV
	var_212_object = var_1_object; // 0x14e4 MovT
	var_213_object = var_0_object; // 0x14e5 MovT
	func_7380(); // 0x14e6 Call
	var_214_object = Obj(); var_215_object = Obj(); // 0x14e8 PushV
	var_214_object = var_1_object; // 0x14e9 MovT
	var_215_object = var_0_object; // 0x14ea MovT
	func_7386(); // 0x14eb Call
	var_216_object = Obj(); var_217_object = Obj(); // 0x14ed PushV
	var_216_object = var_1_object; // 0x14ee MovT
	var_217_object = var_0_object; // 0x14ef MovT
	func_7460(); // 0x14f0 Call
	
Label_5362:
	var_218_int = 12702; // 0x14f2 PushI
	var_219_bool = var_41_bool == var_218_int; // 0x14f3 Eq
	if(var_219_bool == 0) goto Label_5385; // 0x14f4 JumpB
	var_220_object = Obj(); var_221_object = Obj(); // 0x14f5 PushV
	var_220_object = var_1_object; // 0x14f6 MovT
	var_221_object = var_0_object; // 0x14f7 MovT
	func_7487(); // 0x14f8 Call
	var_224_object = Obj(); var_225_object = Obj(); // 0x14fa PushV
	var_224_object = var_1_object; // 0x14fb MovT
	var_225_object = var_0_object; // 0x14fc MovT
	func_7183(var_225_object); // 0x14fd Call
	var_233_object = Obj(); var_234_object = Obj(); // 0x14ff PushV
	var_233_object = var_1_object; // 0x1500 MovT
	var_234_object = var_0_object; // 0x1501 MovT
	func_7027(); // 0x1502 Call
	var_237_object = Obj(); var_238_object = Obj(); // 0x1504 PushV
	var_237_object = var_1_object; // 0x1505 MovT
	var_238_object = var_0_object; // 0x1506 MovT
	func_7409(); // 0x1507 Call
	
Label_5385:
	var_269_int = 12359; // 0x1509 PushI
	var_270_bool = var_40_string == var_269_int; // 0x150a Eq
	if(var_270_bool == 0) goto Label_5486; // 0x150b JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0x150c PushV
	var_272_object = var_1_object; // 0x150d MovT
	func_7974(var_272_object); // 0x150e Call
	if(var_271_bool == 0) goto Label_5413; // 0x1510 JumpB
	var_279_string = ""; // 0x1511 PushV
	var_279_string = "Neutral"; // 0x1512 MovS
	func_5250(var_41_bool, var_279_string); // 0x1513 Call
	var_294_int = 11175; // 0x1515 PushI
	SetMessage(var_294_int); // 0x1516 TObjFunc
	ClearReplies(); // 0x1518 TObjFunc
	var_295_int = 11176; // 0x151a PushI
	var_296_int = 12361; // 0x151b PushI
	var_297_int = 12360; // 0x151c PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x151d TObjFunc
	var_298_int = 11178; // 0x151f PushI
	var_299_int = 12366; // 0x1520 PushI
	var_300_int = 12362; // 0x1521 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x1522 TObjFunc
	return 0; // 0x1524 Return
	
Label_5413:
	var_301_string = ""; // 0x1525 PushV
	var_301_string = "Neutral"; // 0x1526 MovS
	func_5250(var_41_bool, var_301_string); // 0x1527 Call
	var_302_int = 11164; // 0x1529 PushI
	SetMessage(var_302_int); // 0x152a TObjFunc
	ClearReplies(); // 0x152c TObjFunc
	var_303_bool = 0; var_304_object = Obj(); // 0x152e PushV
	var_304_object = var_1_object; // 0x152f MovT
	func_7986(var_304_object); // 0x1530 Call
	if(var_303_bool == 0) goto Label_5432; // 0x1532 JumpB
	var_309_int = 11489; // 0x1533 PushI
	var_310_int = 12692; // 0x1534 PushI
	var_311_int = 12691; // 0x1535 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x1536 TObjFunc
	
Label_5432:
	var_312_bool = 0; // 0x1538 PushV
	var_312_bool = 0; // 0x1539 MovB
	var_313_bool = 0; var_314_object = Obj(); // 0x153a PushV
	var_314_object = var_1_object; // 0x153b MovT
	func_7998(var_314_object); // 0x153c Call
	if(var_313_bool == 0) goto Label_5445; // 0x153e JumpB
	var_319_bool = 0; var_320_object = Obj(); // 0x153f PushV
	var_320_object = var_1_object; // 0x1540 MovT
	func_8010(var_320_object); // 0x1541 Call
	if(var_319_bool == 0) goto Label_5445; // 0x1543 JumpB
	var_312_bool = 1; // 0x1544 MovB
	
Label_5445:
	if(var_312_bool == 0) goto Label_5451; // 0x1545 JumpB
	var_325_int = 11187; // 0x1546 PushI
	var_326_int = 12373; // 0x1547 PushI
	var_327_int = 12372; // 0x1548 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x1549 TObjFunc
	
Label_5451:
	var_328_bool = 0; // 0x154b PushV
	var_328_bool = 0; // 0x154c MovB
	var_329_bool = 0; var_330_object = Obj(); // 0x154d PushV
	var_330_object = var_1_object; // 0x154e MovT
	func_8022(var_330_object); // 0x154f Call
	if(var_329_bool == 0) goto Label_5464; // 0x1551 JumpB
	var_335_bool = 0; var_336_object = Obj(); // 0x1552 PushV
	var_336_object = var_1_object; // 0x1553 MovT
	func_8034(var_336_object); // 0x1554 Call
	if(var_335_bool == 0) goto Label_5464; // 0x1556 JumpB
	var_328_bool = 1; // 0x1557 MovB
	
Label_5464:
	if(var_328_bool == 0) goto Label_5470; // 0x1558 JumpB
	var_341_int = 11495; // 0x1559 PushI
	var_342_int = 12697; // 0x155a PushI
	var_343_int = 12696; // 0x155b PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x155c TObjFunc
	
Label_5470:
	var_344_bool = 0; var_345_object = Obj(); // 0x155e PushV
	var_345_object = var_1_object; // 0x155f MovT
	func_7829(var_344_bool, var_345_object); // 0x1560 Call
	if(var_344_bool == 0) goto Label_5480; // 0x1562 JumpB
	var_348_int = 11165; // 0x1563 PushI
	var_349_int = 12349; // 0x1564 PushI
	var_350_int = 12348; // 0x1565 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x1566 TObjFunc
	
Label_5480:
	var_351_int = 11174; // 0x1568 PushI
	var_352_int = -1; // 0x1569 PushI
	var_353_int = 12358; // 0x156a PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x156b TObjFunc
	return 0; // 0x156d Return
	
Label_5486:
	var_354_int = 12349; // 0x156e PushI
	var_355_bool = var_40_string == var_354_int; // 0x156f Eq
	if(var_355_bool == 0) goto Label_5504; // 0x1570 JumpB
	var_356_string = ""; // 0x1571 PushV
	var_356_string = "Neutral"; // 0x1572 MovS
	func_5250(var_41_bool, var_356_string); // 0x1573 Call
	var_357_int = 11166; // 0x1575 PushI
	SetMessage(var_357_int); // 0x1576 TObjFunc
	ClearReplies(); // 0x1578 TObjFunc
	var_358_int = 11167; // 0x157a PushI
	var_359_int = 12354; // 0x157b PushI
	var_360_int = 12350; // 0x157c PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x157d TObjFunc
	return 0; // 0x157f Return
	
Label_5504:
	var_361_int = 12354; // 0x1580 PushI
	var_362_bool = var_40_string == var_361_int; // 0x1581 Eq
	if(var_362_bool == 0) goto Label_5522; // 0x1582 JumpB
	var_363_string = ""; // 0x1583 PushV
	var_363_string = "Neutral"; // 0x1584 MovS
	func_5250(var_41_bool, var_363_string); // 0x1585 Call
	var_364_int = 11171; // 0x1587 PushI
	SetMessage(var_364_int); // 0x1588 TObjFunc
	ClearReplies(); // 0x158a TObjFunc
	var_365_int = 11172; // 0x158c PushI
	var_366_int = -1; // 0x158d PushI
	var_367_int = 12355; // 0x158e PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x158f TObjFunc
	return 0; // 0x1591 Return
	
Label_5522:
	var_368_int = 12697; // 0x1592 PushI
	var_369_bool = var_40_string == var_368_int; // 0x1593 Eq
	if(var_369_bool == 0) goto Label_5540; // 0x1594 JumpB
	var_370_string = ""; // 0x1595 PushV
	var_370_string = "Neutral"; // 0x1596 MovS
	func_5250(var_41_bool, var_370_string); // 0x1597 Call
	var_371_int = 11496; // 0x1599 PushI
	SetMessage(var_371_int); // 0x159a TObjFunc
	ClearReplies(); // 0x159c TObjFunc
	var_372_int = 11497; // 0x159e PushI
	var_373_int = 12699; // 0x159f PushI
	var_374_int = 12698; // 0x15a0 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x15a1 TObjFunc
	return 0; // 0x15a3 Return
	
Label_5540:
	var_375_int = 12699; // 0x15a4 PushI
	var_376_bool = var_40_string == var_375_int; // 0x15a5 Eq
	if(var_376_bool == 0) goto Label_5558; // 0x15a6 JumpB
	var_377_string = ""; // 0x15a7 PushV
	var_377_string = "Neutral"; // 0x15a8 MovS
	func_5250(var_41_bool, var_377_string); // 0x15a9 Call
	var_378_int = 11498; // 0x15ab PushI
	SetMessage(var_378_int); // 0x15ac TObjFunc
	ClearReplies(); // 0x15ae TObjFunc
	var_379_int = 11499; // 0x15b0 PushI
	var_380_int = 12701; // 0x15b1 PushI
	var_381_int = 12700; // 0x15b2 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x15b3 TObjFunc
	return 0; // 0x15b5 Return
	
Label_5558:
	var_382_int = 12701; // 0x15b6 PushI
	var_383_bool = var_40_string == var_382_int; // 0x15b7 Eq
	if(var_383_bool == 0) goto Label_5586; // 0x15b8 JumpB
	var_384_string = ""; // 0x15b9 PushV
	var_384_string = "Neutral"; // 0x15ba MovS
	func_5250(var_41_bool, var_384_string); // 0x15bb Call
	var_385_int = 11500; // 0x15bd PushI
	SetMessage(var_385_int); // 0x15be TObjFunc
	ClearReplies(); // 0x15c0 TObjFunc
	var_386_int = 11501; // 0x15c2 PushI
	var_387_int = -1; // 0x15c3 PushI
	var_388_int = 12702; // 0x15c4 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x15c5 TObjFunc
	var_389_bool = 0; var_390_object = Obj(); // 0x15c7 PushV
	var_390_object = var_1_object; // 0x15c8 MovT
	func_8034(var_390_object); // 0x15c9 Call
	if(var_389_bool == 0) goto Label_5585; // 0x15cb JumpB
	var_391_int = 11502; // 0x15cc PushI
	var_392_int = -1; // 0x15cd PushI
	var_393_int = 12703; // 0x15ce PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x15cf TObjFunc
	
Label_5585:
	return 0; // 0x15d1 Return
	
Label_5586:
	var_394_int = 12373; // 0x15d2 PushI
	var_395_bool = var_40_string == var_394_int; // 0x15d3 Eq
	if(var_395_bool == 0) goto Label_5604; // 0x15d4 JumpB
	var_396_string = ""; // 0x15d5 PushV
	var_396_string = "Neutral"; // 0x15d6 MovS
	func_5250(var_41_bool, var_396_string); // 0x15d7 Call
	var_397_int = 11188; // 0x15d9 PushI
	SetMessage(var_397_int); // 0x15da TObjFunc
	ClearReplies(); // 0x15dc TObjFunc
	var_398_int = 11189; // 0x15de PushI
	var_399_int = 12375; // 0x15df PushI
	var_400_int = 12374; // 0x15e0 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x15e1 TObjFunc
	return 0; // 0x15e3 Return
	
Label_5604:
	var_401_int = 12375; // 0x15e4 PushI
	var_402_bool = var_40_string == var_401_int; // 0x15e5 Eq
	if(var_402_bool == 0) goto Label_5627; // 0x15e6 JumpB
	var_403_string = ""; // 0x15e7 PushV
	var_403_string = "Neutral"; // 0x15e8 MovS
	func_5250(var_41_bool, var_403_string); // 0x15e9 Call
	var_404_int = 11190; // 0x15eb PushI
	SetMessage(var_404_int); // 0x15ec TObjFunc
	ClearReplies(); // 0x15ee TObjFunc
	var_405_int = 11191; // 0x15f0 PushI
	var_406_int = -1; // 0x15f1 PushI
	var_407_int = 12376; // 0x15f2 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x15f3 TObjFunc
	var_408_int = 11192; // 0x15f5 PushI
	var_409_int = -1; // 0x15f6 PushI
	var_410_int = 12377; // 0x15f7 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x15f8 TObjFunc
	return 0; // 0x15fa Return
	
Label_5627:
	var_411_int = 12692; // 0x15fb PushI
	var_412_bool = var_40_string == var_411_int; // 0x15fc Eq
	if(var_412_bool == 0) goto Label_5645; // 0x15fd JumpB
	var_413_string = ""; // 0x15fe PushV
	var_413_string = "Neutral"; // 0x15ff MovS
	func_5250(var_41_bool, var_413_string); // 0x1600 Call
	var_414_int = 11490; // 0x1602 PushI
	SetMessage(var_414_int); // 0x1603 TObjFunc
	ClearReplies(); // 0x1605 TObjFunc
	var_415_int = 11491; // 0x1607 PushI
	var_416_int = 12694; // 0x1608 PushI
	var_417_int = 12693; // 0x1609 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x160a TObjFunc
	return 0; // 0x160c Return
	
Label_5645:
	var_418_int = 12694; // 0x160d PushI
	var_419_bool = var_40_string == var_418_int; // 0x160e Eq
	if(var_419_bool == 0) goto Label_5663; // 0x160f JumpB
	var_420_string = ""; // 0x1610 PushV
	var_420_string = "Neutral"; // 0x1611 MovS
	func_5250(var_41_bool, var_420_string); // 0x1612 Call
	var_421_int = 11492; // 0x1614 PushI
	SetMessage(var_421_int); // 0x1615 TObjFunc
	ClearReplies(); // 0x1617 TObjFunc
	var_422_int = 11493; // 0x1619 PushI
	var_423_int = -1; // 0x161a PushI
	var_424_int = 12695; // 0x161b PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x161c TObjFunc
	return 0; // 0x161e Return
	
Label_5663:
	var_425_int = 12361; // 0x161f PushI
	var_426_bool = var_40_string == var_425_int; // 0x1620 Eq
	if(var_426_bool == 0) goto Label_5686; // 0x1621 JumpB
	var_427_string = ""; // 0x1622 PushV
	var_427_string = "Neutral"; // 0x1623 MovS
	func_5250(var_41_bool, var_427_string); // 0x1624 Call
	var_428_int = 11177; // 0x1626 PushI
	SetMessage(var_428_int); // 0x1627 TObjFunc
	ClearReplies(); // 0x1629 TObjFunc
	var_429_int = 11180; // 0x162b PushI
	var_430_int = 12363; // 0x162c PushI
	var_431_int = 12364; // 0x162d PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x162e TObjFunc
	var_432_int = 11193; // 0x1630 PushI
	var_433_int = 12379; // 0x1631 PushI
	var_434_int = 12378; // 0x1632 PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x1633 TObjFunc
	return 0; // 0x1635 Return
	
Label_5686:
	var_435_int = 12379; // 0x1636 PushI
	var_436_bool = var_40_string == var_435_int; // 0x1637 Eq
	if(var_436_bool == 0) goto Label_5709; // 0x1638 JumpB
	var_437_string = ""; // 0x1639 PushV
	var_437_string = "Neutral"; // 0x163a MovS
	func_5250(var_41_bool, var_437_string); // 0x163b Call
	var_438_int = 11194; // 0x163d PushI
	SetMessage(var_438_int); // 0x163e TObjFunc
	ClearReplies(); // 0x1640 TObjFunc
	var_439_int = 11195; // 0x1642 PushI
	var_440_int = 12363; // 0x1643 PushI
	var_441_int = 12380; // 0x1644 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x1645 TObjFunc
	var_442_int = 11198; // 0x1647 PushI
	var_443_int = 12385; // 0x1648 PushI
	var_444_int = 12384; // 0x1649 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x164a TObjFunc
	return 0; // 0x164c Return
	
Label_5709:
	var_445_int = 12385; // 0x164d PushI
	var_446_bool = var_40_string == var_445_int; // 0x164e Eq
	if(var_446_bool == 0) goto Label_5732; // 0x164f JumpB
	var_447_string = ""; // 0x1650 PushV
	var_447_string = "Neutral"; // 0x1651 MovS
	func_5250(var_41_bool, var_447_string); // 0x1652 Call
	var_448_int = 11199; // 0x1654 PushI
	SetMessage(var_448_int); // 0x1655 TObjFunc
	ClearReplies(); // 0x1657 TObjFunc
	var_449_int = 11200; // 0x1659 PushI
	var_450_int = 12366; // 0x165a PushI
	var_451_int = 12386; // 0x165b PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x165c TObjFunc
	var_452_int = 11201; // 0x165e PushI
	var_453_int = 12363; // 0x165f PushI
	var_454_int = 12388; // 0x1660 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x1661 TObjFunc
	return 0; // 0x1663 Return
	
Label_5732:
	var_455_int = 12363; // 0x1664 PushI
	var_456_bool = var_40_string == var_455_int; // 0x1665 Eq
	if(var_456_bool == 0) goto Label_5755; // 0x1666 JumpB
	var_457_string = ""; // 0x1667 PushV
	var_457_string = "Neutral"; // 0x1668 MovS
	func_5250(var_41_bool, var_457_string); // 0x1669 Call
	var_458_int = 11179; // 0x166b PushI
	SetMessage(var_458_int); // 0x166c TObjFunc
	ClearReplies(); // 0x166e TObjFunc
	var_459_int = 11181; // 0x1670 PushI
	var_460_int = 12366; // 0x1671 PushI
	var_461_int = 12365; // 0x1672 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x1673 TObjFunc
	var_462_int = 11196; // 0x1675 PushI
	var_463_int = 12383; // 0x1676 PushI
	var_464_int = 12382; // 0x1677 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x1678 TObjFunc
	return 0; // 0x167a Return
	
Label_5755:
	var_465_int = 12383; // 0x167b PushI
	var_466_bool = var_40_string == var_465_int; // 0x167c Eq
	if(var_466_bool == 0) goto Label_5773; // 0x167d JumpB
	var_467_string = ""; // 0x167e PushV
	var_467_string = "Neutral"; // 0x167f MovS
	func_5250(var_41_bool, var_467_string); // 0x1680 Call
	var_468_int = 11197; // 0x1682 PushI
	SetMessage(var_468_int); // 0x1683 TObjFunc
	ClearReplies(); // 0x1685 TObjFunc
	var_469_int = 11486; // 0x1687 PushI
	var_470_int = 12366; // 0x1688 PushI
	var_471_int = 12688; // 0x1689 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x168a TObjFunc
	return 0; // 0x168c Return
	
Label_5773:
	var_472_int = 12366; // 0x168d PushI
	var_473_bool = var_40_string == var_472_int; // 0x168e Eq
	if(var_473_bool == 0) goto Label_5796; // 0x168f JumpB
	var_474_string = ""; // 0x1690 PushV
	var_474_string = "Neutral"; // 0x1691 MovS
	func_5250(var_41_bool, var_474_string); // 0x1692 Call
	var_475_int = 11182; // 0x1694 PushI
	SetMessage(var_475_int); // 0x1695 TObjFunc
	ClearReplies(); // 0x1697 TObjFunc
	var_476_int = 11185; // 0x1699 PushI
	var_477_int = -1; // 0x169a PushI
	var_478_int = 12370; // 0x169b PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x169c TObjFunc
	var_479_int = 11186; // 0x169e PushI
	var_480_int = -1; // 0x169f PushI
	var_481_int = 12371; // 0x16a0 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x16a1 TObjFunc
	return 0; // 0x16a3 Return
	
Label_5796:
	var_3_string = 1; // 0x16a4 TMovB
	var_482_bool = 0; // 0x16a5 PushV
	func_7001(var_482_bool); // 0x16a6 Call
	if(var_482_bool == 0) goto Label_5804; // 0x16a8 JumpB
	lshStopAnimation(); // 0x16a9 Func
	goto Label_5806; // 0x16ab Jump
	
Label_5806:
	return 0; // 0x16ae Return
	
Label_5804:
	StopAnimation(); // 0x16ac Func
	
Label_5808:
	return 0; // 0x16b0 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x1766 PushI
	if(var_42_int == 0) goto Label_6457; // 0x1767 JumpB
	func_6878(); // 0x1769 Call
	var_44_int = 12808; // 0x176b PushI
	var_45_bool = var_41_bool == var_44_int; // 0x176c Eq
	if(var_45_bool == 0) goto Label_6003; // 0x176d JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x176e PushV
	var_46_object = var_1_object; // 0x176f MovT
	var_47_object = var_0_object; // 0x1770 MovT
	func_7493(); // 0x1771 Call
	
Label_6003:
	var_66_int = 12802; // 0x1773 PushI
	var_67_bool = var_41_bool == var_66_int; // 0x1774 Eq
	if(var_67_bool == 0) goto Label_6011; // 0x1775 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0x1776 PushV
	var_68_object = var_1_object; // 0x1777 MovT
	var_69_object = var_0_object; // 0x1778 MovT
	func_7493(); // 0x1779 Call
	
Label_6011:
	var_70_int = 12819; // 0x177b PushI
	var_71_bool = var_41_bool == var_70_int; // 0x177c Eq
	if(var_71_bool == 0) goto Label_6019; // 0x177d JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0x177e PushV
	var_72_object = var_1_object; // 0x177f MovT
	var_73_object = var_0_object; // 0x1780 MovT
	func_7515(); // 0x1781 Call
	
Label_6019:
	var_76_int = 12820; // 0x1783 PushI
	var_77_bool = var_41_bool == var_76_int; // 0x1784 Eq
	if(var_77_bool == 0) goto Label_6027; // 0x1785 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x1786 PushV
	var_78_object = var_1_object; // 0x1787 MovT
	var_79_object = var_0_object; // 0x1788 MovT
	func_7515(); // 0x1789 Call
	
Label_6027:
	var_80_int = 12821; // 0x178b PushI
	var_81_bool = var_41_bool == var_80_int; // 0x178c Eq
	if(var_81_bool == 0) goto Label_6035; // 0x178d JumpB
	var_82_object = Obj(); var_83_object = Obj(); // 0x178e PushV
	var_82_object = var_1_object; // 0x178f MovT
	var_83_object = var_0_object; // 0x1790 MovT
	func_7515(); // 0x1791 Call
	
Label_6035:
	var_84_int = 12832; // 0x1793 PushI
	var_85_bool = var_41_bool == var_84_int; // 0x1794 Eq
	if(var_85_bool == 0) goto Label_6043; // 0x1795 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x1796 PushV
	var_86_object = var_1_object; // 0x1797 MovT
	var_87_object = var_0_object; // 0x1798 MovT
	func_7521(); // 0x1799 Call
	
Label_6043:
	var_90_int = 12833; // 0x179b PushI
	var_91_bool = var_41_bool == var_90_int; // 0x179c Eq
	if(var_91_bool == 0) goto Label_6051; // 0x179d JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x179e PushV
	var_92_object = var_1_object; // 0x179f MovT
	var_93_object = var_0_object; // 0x17a0 MovT
	func_7521(); // 0x17a1 Call
	
Label_6051:
	var_94_int = 12786; // 0x17a3 PushI
	var_95_bool = var_40_string == var_94_int; // 0x17a4 Eq
	if(var_95_bool == 0) goto Label_6117; // 0x17a5 JumpB
	var_96_string = ""; // 0x17a6 PushV
	var_96_string = "Neutral"; // 0x17a7 MovS
	func_5973(var_41_bool, var_96_string); // 0x17a8 Call
	var_111_int = 11591; // 0x17aa PushI
	SetMessage(var_111_int); // 0x17ab TObjFunc
	ClearReplies(); // 0x17ad TObjFunc
	var_112_bool = 0; var_113_object = Obj(); // 0x17af PushV
	var_113_object = var_1_object; // 0x17b0 MovT
	func_8056(var_113_object); // 0x17b1 Call
	if(var_112_bool == 0) goto Label_6073; // 0x17b3 JumpB
	var_120_int = 11592; // 0x17b4 PushI
	var_121_int = 12788; // 0x17b5 PushI
	var_122_int = 12787; // 0x17b6 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x17b7 TObjFunc
	
Label_6073:
	var_123_bool = 0; // 0x17b9 PushV
	var_123_bool = 0; // 0x17ba MovB
	var_124_bool = 0; var_125_object = Obj(); // 0x17bb PushV
	var_125_object = var_1_object; // 0x17bc MovT
	func_8085(var_125_object); // 0x17bd Call
	if(var_124_bool == 0) goto Label_6086; // 0x17bf JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x17c0 PushV
	var_131_object = var_1_object; // 0x17c1 MovT
	func_8109(var_131_object); // 0x17c2 Call
	if(var_130_bool == 0) goto Label_6086; // 0x17c4 JumpB
	var_123_bool = 1; // 0x17c5 MovB
	
Label_6086:
	if(var_123_bool == 0) goto Label_6092; // 0x17c6 JumpB
	var_136_int = 11611; // 0x17c7 PushI
	var_137_int = 12810; // 0x17c8 PushI
	var_138_int = 12809; // 0x17c9 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x17ca TObjFunc
	
Label_6092:
	var_139_bool = 0; // 0x17cc PushV
	var_139_bool = 0; // 0x17cd MovB
	var_140_bool = 0; var_141_object = Obj(); // 0x17ce PushV
	var_141_object = var_1_object; // 0x17cf MovT
	func_8097(var_141_object); // 0x17d0 Call
	if(var_140_bool == 0) goto Label_6105; // 0x17d2 JumpB
	var_146_bool = 0; var_147_object = Obj(); // 0x17d3 PushV
	var_147_object = var_1_object; // 0x17d4 MovT
	func_8121(var_147_object); // 0x17d5 Call
	if(var_146_bool == 0) goto Label_6105; // 0x17d7 JumpB
	var_139_bool = 1; // 0x17d8 MovB
	
Label_6105:
	if(var_139_bool == 0) goto Label_6111; // 0x17d9 JumpB
	var_152_int = 11624; // 0x17da PushI
	var_153_int = 12823; // 0x17db PushI
	var_154_int = 12822; // 0x17dc PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x17dd TObjFunc
	
Label_6111:
	var_155_int = 11635; // 0x17df PushI
	var_156_int = -1; // 0x17e0 PushI
	var_157_int = 12834; // 0x17e1 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x17e2 TObjFunc
	return 0; // 0x17e4 Return
	
Label_6117:
	var_158_int = 12823; // 0x17e5 PushI
	var_159_bool = var_40_string == var_158_int; // 0x17e6 Eq
	if(var_159_bool == 0) goto Label_6140; // 0x17e7 JumpB
	var_160_string = ""; // 0x17e8 PushV
	var_160_string = "Neutral"; // 0x17e9 MovS
	func_5973(var_41_bool, var_160_string); // 0x17ea Call
	var_161_int = 11625; // 0x17ec PushI
	SetMessage(var_161_int); // 0x17ed TObjFunc
	ClearReplies(); // 0x17ef TObjFunc
	var_162_int = 11626; // 0x17f1 PushI
	var_163_int = 12825; // 0x17f2 PushI
	var_164_int = 12824; // 0x17f3 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x17f4 TObjFunc
	var_165_int = 11628; // 0x17f6 PushI
	var_166_int = 12827; // 0x17f7 PushI
	var_167_int = 12826; // 0x17f8 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x17f9 TObjFunc
	return 0; // 0x17fb Return
	
Label_6140:
	var_168_int = 12827; // 0x17fc PushI
	var_169_bool = var_40_string == var_168_int; // 0x17fd Eq
	if(var_169_bool == 0) goto Label_6158; // 0x17fe JumpB
	var_170_string = ""; // 0x17ff PushV
	var_170_string = "Neutral"; // 0x1800 MovS
	func_5973(var_41_bool, var_170_string); // 0x1801 Call
	var_171_int = 11629; // 0x1803 PushI
	SetMessage(var_171_int); // 0x1804 TObjFunc
	ClearReplies(); // 0x1806 TObjFunc
	var_172_int = 11631; // 0x1808 PushI
	var_173_int = 12830; // 0x1809 PushI
	var_174_int = 12829; // 0x180a PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x180b TObjFunc
	return 0; // 0x180d Return
	
Label_6158:
	var_175_int = 12825; // 0x180e PushI
	var_176_bool = var_40_string == var_175_int; // 0x180f Eq
	if(var_176_bool == 0) goto Label_6176; // 0x1810 JumpB
	var_177_string = ""; // 0x1811 PushV
	var_177_string = "Neutral"; // 0x1812 MovS
	func_5973(var_41_bool, var_177_string); // 0x1813 Call
	var_178_int = 11627; // 0x1815 PushI
	SetMessage(var_178_int); // 0x1816 TObjFunc
	ClearReplies(); // 0x1818 TObjFunc
	var_179_int = 11630; // 0x181a PushI
	var_180_int = 12830; // 0x181b PushI
	var_181_int = 12828; // 0x181c PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x181d TObjFunc
	return 0; // 0x181f Return
	
Label_6176:
	var_182_int = 12830; // 0x1820 PushI
	var_183_bool = var_40_string == var_182_int; // 0x1821 Eq
	if(var_183_bool == 0) goto Label_6199; // 0x1822 JumpB
	var_184_string = ""; // 0x1823 PushV
	var_184_string = "Neutral"; // 0x1824 MovS
	func_5973(var_41_bool, var_184_string); // 0x1825 Call
	var_185_int = 11632; // 0x1827 PushI
	SetMessage(var_185_int); // 0x1828 TObjFunc
	ClearReplies(); // 0x182a TObjFunc
	var_186_int = 11633; // 0x182c PushI
	var_187_int = -1; // 0x182d PushI
	var_188_int = 12832; // 0x182e PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x182f TObjFunc
	var_189_int = 11634; // 0x1831 PushI
	var_190_int = -1; // 0x1832 PushI
	var_191_int = 12833; // 0x1833 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x1834 TObjFunc
	return 0; // 0x1836 Return
	
Label_6199:
	var_192_int = 12810; // 0x1837 PushI
	var_193_bool = var_40_string == var_192_int; // 0x1838 Eq
	if(var_193_bool == 0) goto Label_6217; // 0x1839 JumpB
	var_194_string = ""; // 0x183a PushV
	var_194_string = "Neutral"; // 0x183b MovS
	func_5973(var_41_bool, var_194_string); // 0x183c Call
	var_195_int = 11612; // 0x183e PushI
	SetMessage(var_195_int); // 0x183f TObjFunc
	ClearReplies(); // 0x1841 TObjFunc
	var_196_int = 11613; // 0x1843 PushI
	var_197_int = 12812; // 0x1844 PushI
	var_198_int = 12811; // 0x1845 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x1846 TObjFunc
	return 0; // 0x1848 Return
	
Label_6217:
	var_199_int = 12812; // 0x1849 PushI
	var_200_bool = var_40_string == var_199_int; // 0x184a Eq
	if(var_200_bool == 0) goto Label_6235; // 0x184b JumpB
	var_201_string = ""; // 0x184c PushV
	var_201_string = "Neutral"; // 0x184d MovS
	func_5973(var_41_bool, var_201_string); // 0x184e Call
	var_202_int = 11614; // 0x1850 PushI
	SetMessage(var_202_int); // 0x1851 TObjFunc
	ClearReplies(); // 0x1853 TObjFunc
	var_203_int = 11615; // 0x1855 PushI
	var_204_int = 12814; // 0x1856 PushI
	var_205_int = 12813; // 0x1857 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x1858 TObjFunc
	return 0; // 0x185a Return
	
Label_6235:
	var_206_int = 12814; // 0x185b PushI
	var_207_bool = var_40_string == var_206_int; // 0x185c Eq
	if(var_207_bool == 0) goto Label_6253; // 0x185d JumpB
	var_208_string = ""; // 0x185e PushV
	var_208_string = "Neutral"; // 0x185f MovS
	func_5973(var_41_bool, var_208_string); // 0x1860 Call
	var_209_int = 11616; // 0x1862 PushI
	SetMessage(var_209_int); // 0x1863 TObjFunc
	ClearReplies(); // 0x1865 TObjFunc
	var_210_int = 11617; // 0x1867 PushI
	var_211_int = 12816; // 0x1868 PushI
	var_212_int = 12815; // 0x1869 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x186a TObjFunc
	return 0; // 0x186c Return
	
Label_6253:
	var_213_int = 12816; // 0x186d PushI
	var_214_bool = var_40_string == var_213_int; // 0x186e Eq
	if(var_214_bool == 0) goto Label_6271; // 0x186f JumpB
	var_215_string = ""; // 0x1870 PushV
	var_215_string = "Neutral"; // 0x1871 MovS
	func_5973(var_41_bool, var_215_string); // 0x1872 Call
	var_216_int = 11618; // 0x1874 PushI
	SetMessage(var_216_int); // 0x1875 TObjFunc
	ClearReplies(); // 0x1877 TObjFunc
	var_217_int = 11619; // 0x1879 PushI
	var_218_int = 12818; // 0x187a PushI
	var_219_int = 12817; // 0x187b PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x187c TObjFunc
	return 0; // 0x187e Return
	
Label_6271:
	var_220_int = 12818; // 0x187f PushI
	var_221_bool = var_40_string == var_220_int; // 0x1880 Eq
	if(var_221_bool == 0) goto Label_6299; // 0x1881 JumpB
	var_222_string = ""; // 0x1882 PushV
	var_222_string = "Neutral"; // 0x1883 MovS
	func_5973(var_41_bool, var_222_string); // 0x1884 Call
	var_223_int = 11620; // 0x1886 PushI
	SetMessage(var_223_int); // 0x1887 TObjFunc
	ClearReplies(); // 0x1889 TObjFunc
	var_224_int = 11621; // 0x188b PushI
	var_225_int = -1; // 0x188c PushI
	var_226_int = 12819; // 0x188d PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x188e TObjFunc
	var_227_int = 11622; // 0x1890 PushI
	var_228_int = -1; // 0x1891 PushI
	var_229_int = 12820; // 0x1892 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1893 TObjFunc
	var_230_int = 11623; // 0x1895 PushI
	var_231_int = -1; // 0x1896 PushI
	var_232_int = 12821; // 0x1897 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1898 TObjFunc
	return 0; // 0x189a Return
	
Label_6299:
	var_233_int = 12788; // 0x189b PushI
	var_234_bool = var_40_string == var_233_int; // 0x189c Eq
	if(var_234_bool == 0) goto Label_6322; // 0x189d JumpB
	var_235_string = ""; // 0x189e PushV
	var_235_string = "Neutral"; // 0x189f MovS
	func_5973(var_41_bool, var_235_string); // 0x18a0 Call
	var_236_int = 11593; // 0x18a2 PushI
	SetMessage(var_236_int); // 0x18a3 TObjFunc
	ClearReplies(); // 0x18a5 TObjFunc
	var_237_int = 11594; // 0x18a7 PushI
	var_238_int = 12790; // 0x18a8 PushI
	var_239_int = 12789; // 0x18a9 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x18aa TObjFunc
	var_240_int = 11599; // 0x18ac PushI
	var_241_int = 12795; // 0x18ad PushI
	var_242_int = 12794; // 0x18ae PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x18af TObjFunc
	return 0; // 0x18b1 Return
	
Label_6322:
	var_243_int = 12795; // 0x18b2 PushI
	var_244_bool = var_40_string == var_243_int; // 0x18b3 Eq
	if(var_244_bool == 0) goto Label_6340; // 0x18b4 JumpB
	var_245_string = ""; // 0x18b5 PushV
	var_245_string = "Neutral"; // 0x18b6 MovS
	func_5973(var_41_bool, var_245_string); // 0x18b7 Call
	var_246_int = 11600; // 0x18b9 PushI
	SetMessage(var_246_int); // 0x18ba TObjFunc
	ClearReplies(); // 0x18bc TObjFunc
	var_247_int = 11601; // 0x18be PushI
	var_248_int = 12790; // 0x18bf PushI
	var_249_int = 12796; // 0x18c0 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x18c1 TObjFunc
	return 0; // 0x18c3 Return
	
Label_6340:
	var_250_int = 12790; // 0x18c4 PushI
	var_251_bool = var_40_string == var_250_int; // 0x18c5 Eq
	if(var_251_bool == 0) goto Label_6363; // 0x18c6 JumpB
	var_252_string = ""; // 0x18c7 PushV
	var_252_string = "Neutral"; // 0x18c8 MovS
	func_5973(var_41_bool, var_252_string); // 0x18c9 Call
	var_253_int = 11595; // 0x18cb PushI
	SetMessage(var_253_int); // 0x18cc TObjFunc
	ClearReplies(); // 0x18ce TObjFunc
	var_254_int = 11596; // 0x18d0 PushI
	var_255_int = 12792; // 0x18d1 PushI
	var_256_int = 12791; // 0x18d2 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x18d3 TObjFunc
	var_257_int = 11602; // 0x18d5 PushI
	var_258_int = 12799; // 0x18d6 PushI
	var_259_int = 12798; // 0x18d7 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x18d8 TObjFunc
	return 0; // 0x18da Return
	
Label_6363:
	var_260_int = 12799; // 0x18db PushI
	var_261_bool = var_40_string == var_260_int; // 0x18dc Eq
	if(var_261_bool == 0) goto Label_6381; // 0x18dd JumpB
	var_262_string = ""; // 0x18de PushV
	var_262_string = "Neutral"; // 0x18df MovS
	func_5973(var_41_bool, var_262_string); // 0x18e0 Call
	var_263_int = 11603; // 0x18e2 PushI
	SetMessage(var_263_int); // 0x18e3 TObjFunc
	ClearReplies(); // 0x18e5 TObjFunc
	var_264_int = 11604; // 0x18e7 PushI
	var_265_int = 12792; // 0x18e8 PushI
	var_266_int = 12800; // 0x18e9 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x18ea TObjFunc
	return 0; // 0x18ec Return
	
Label_6381:
	var_267_int = 12792; // 0x18ed PushI
	var_268_bool = var_40_string == var_267_int; // 0x18ee Eq
	if(var_268_bool == 0) goto Label_6404; // 0x18ef JumpB
	var_269_string = ""; // 0x18f0 PushV
	var_269_string = "Neutral"; // 0x18f1 MovS
	func_5973(var_41_bool, var_269_string); // 0x18f2 Call
	var_270_int = 11597; // 0x18f4 PushI
	SetMessage(var_270_int); // 0x18f5 TObjFunc
	ClearReplies(); // 0x18f7 TObjFunc
	var_271_int = 11598; // 0x18f9 PushI
	var_272_int = 12803; // 0x18fa PushI
	var_273_int = 12793; // 0x18fb PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x18fc TObjFunc
	var_274_int = 11605; // 0x18fe PushI
	var_275_int = -1; // 0x18ff PushI
	var_276_int = 12802; // 0x1900 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x1901 TObjFunc
	return 0; // 0x1903 Return
	
Label_6404:
	var_277_int = 12803; // 0x1904 PushI
	var_278_bool = var_40_string == var_277_int; // 0x1905 Eq
	if(var_278_bool == 0) goto Label_6427; // 0x1906 JumpB
	var_279_string = ""; // 0x1907 PushV
	var_279_string = "Neutral"; // 0x1908 MovS
	func_5973(var_41_bool, var_279_string); // 0x1909 Call
	var_280_int = 11606; // 0x190b PushI
	SetMessage(var_280_int); // 0x190c TObjFunc
	ClearReplies(); // 0x190e TObjFunc
	var_281_int = 11607; // 0x1910 PushI
	var_282_int = 12805; // 0x1911 PushI
	var_283_int = 12804; // 0x1912 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x1913 TObjFunc
	var_284_int = 11609; // 0x1915 PushI
	var_285_int = 12805; // 0x1916 PushI
	var_286_int = 12806; // 0x1917 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x1918 TObjFunc
	return 0; // 0x191a Return
	
Label_6427:
	var_287_int = 12805; // 0x191b PushI
	var_288_bool = var_40_string == var_287_int; // 0x191c Eq
	if(var_288_bool == 0) goto Label_6445; // 0x191d JumpB
	var_289_string = ""; // 0x191e PushV
	var_289_string = "Neutral"; // 0x191f MovS
	func_5973(var_41_bool, var_289_string); // 0x1920 Call
	var_290_int = 11608; // 0x1922 PushI
	SetMessage(var_290_int); // 0x1923 TObjFunc
	ClearReplies(); // 0x1925 TObjFunc
	var_291_int = 11610; // 0x1927 PushI
	var_292_int = -1; // 0x1928 PushI
	var_293_int = 12808; // 0x1929 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x192a TObjFunc
	return 0; // 0x192c Return
	
Label_6445:
	var_3_string = 1; // 0x192d TMovB
	var_294_bool = 0; // 0x192e PushV
	func_7001(var_294_bool); // 0x192f Call
	if(var_294_bool == 0) goto Label_6453; // 0x1931 JumpB
	lshStopAnimation(); // 0x1932 Func
	goto Label_6455; // 0x1934 Jump
	
Label_6455:
	return 0; // 0x1937 Return
	
Label_6453:
	StopAnimation(); // 0x1935 Func
	
Label_6457:
	return 0; // 0x1939 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int)
{
	var_42_int = 1; // 0x19d2 PushI
	if(var_42_int == 0) goto Label_6775; // 0x19d3 JumpB
	func_6878(); // 0x19d5 Call
	var_44_int = 14578; // 0x19d7 PushI
	var_45_bool = var_41_int == var_44_int; // 0x19d8 Eq
	if(var_45_bool == 0) goto Label_6623; // 0x19d9 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x19da PushV
	var_46_object = var_1_object; // 0x19db MovT
	var_47_object = var_0_object; // 0x19dc MovT
	func_7567(); // 0x19dd Call
	
Label_6623:
	var_50_int = 14583; // 0x19df PushI
	var_51_bool = var_41_int == var_50_int; // 0x19e0 Eq
	if(var_51_bool == 0) goto Label_6631; // 0x19e1 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x19e2 PushV
	var_52_object = var_1_object; // 0x19e3 MovT
	var_53_object = var_0_object; // 0x19e4 MovT
	func_7567(); // 0x19e5 Call
	
Label_6631:
	var_54_int = 13358; // 0x19e7 PushI
	var_55_bool = var_40_int == var_54_int; // 0x19e8 Eq
	if(var_55_bool == 0) goto Label_6668; // 0x19e9 JumpB
	var_56_string = ""; // 0x19ea PushV
	var_56_string = "Neutral"; // 0x19eb MovS
	func_6593(var_41_int, var_56_string); // 0x19ec Call
	var_71_int = 12203; // 0x19ee PushI
	SetMessage(var_71_int); // 0x19ef TObjFunc
	ClearReplies(); // 0x19f1 TObjFunc
	var_72_bool = 0; // 0x19f3 PushV
	var_72_bool = 0; // 0x19f4 MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x19f5 PushV
	var_74_object = var_1_object; // 0x19f6 MovT
	func_8205(var_74_object); // 0x19f7 Call
	if(var_73_bool == 0) goto Label_6656; // 0x19f9 JumpB
	var_81_bool = 0; var_82_object = Obj(); // 0x19fa PushV
	var_82_object = var_1_object; // 0x19fb MovT
	func_8217(var_82_object); // 0x19fc Call
	if(var_81_bool == 0) goto Label_6656; // 0x19fe JumpB
	var_72_bool = 1; // 0x19ff MovB
	
Label_6656:
	if(var_72_bool == 0) goto Label_6662; // 0x1a00 JumpB
	var_87_int = 13340; // 0x1a01 PushI
	var_88_int = 14573; // 0x1a02 PushI
	var_89_int = 14572; // 0x1a03 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x1a04 TObjFunc
	
Label_6662:
	var_90_int = 12204; // 0x1a06 PushI
	var_91_int = -1; // 0x1a07 PushI
	var_92_int = 13359; // 0x1a08 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x1a09 TObjFunc
	return 0; // 0x1a0b Return
	
Label_6668:
	var_93_int = 14573; // 0x1a0c PushI
	var_94_bool = var_40_int == var_93_int; // 0x1a0d Eq
	if(var_94_bool == 0) goto Label_6686; // 0x1a0e JumpB
	var_95_string = ""; // 0x1a0f PushV
	var_95_string = "Neutral"; // 0x1a10 MovS
	func_6593(var_41_int, var_95_string); // 0x1a11 Call
	var_96_int = 13341; // 0x1a13 PushI
	SetMessage(var_96_int); // 0x1a14 TObjFunc
	ClearReplies(); // 0x1a16 TObjFunc
	var_97_int = 13342; // 0x1a18 PushI
	var_98_int = 14575; // 0x1a19 PushI
	var_99_int = 14574; // 0x1a1a PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x1a1b TObjFunc
	return 0; // 0x1a1d Return
	
Label_6686:
	var_100_int = 14575; // 0x1a1e PushI
	var_101_bool = var_40_int == var_100_int; // 0x1a1f Eq
	if(var_101_bool == 0) goto Label_6704; // 0x1a20 JumpB
	var_102_string = ""; // 0x1a21 PushV
	var_102_string = "Neutral"; // 0x1a22 MovS
	func_6593(var_41_int, var_102_string); // 0x1a23 Call
	var_103_int = 13343; // 0x1a25 PushI
	SetMessage(var_103_int); // 0x1a26 TObjFunc
	ClearReplies(); // 0x1a28 TObjFunc
	var_104_int = 13344; // 0x1a2a PushI
	var_105_int = 14577; // 0x1a2b PushI
	var_106_int = 14576; // 0x1a2c PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x1a2d TObjFunc
	return 0; // 0x1a2f Return
	
Label_6704:
	var_107_int = 14577; // 0x1a30 PushI
	var_108_bool = var_40_int == var_107_int; // 0x1a31 Eq
	if(var_108_bool == 0) goto Label_6727; // 0x1a32 JumpB
	var_109_string = ""; // 0x1a33 PushV
	var_109_string = "Neutral"; // 0x1a34 MovS
	func_6593(var_41_int, var_109_string); // 0x1a35 Call
	var_110_int = 13345; // 0x1a37 PushI
	SetMessage(var_110_int); // 0x1a38 TObjFunc
	ClearReplies(); // 0x1a3a TObjFunc
	var_111_int = 13346; // 0x1a3c PushI
	var_112_int = -1; // 0x1a3d PushI
	var_113_int = 14578; // 0x1a3e PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x1a3f TObjFunc
	var_114_int = 13347; // 0x1a41 PushI
	var_115_int = 14580; // 0x1a42 PushI
	var_116_int = 14579; // 0x1a43 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x1a44 TObjFunc
	return 0; // 0x1a46 Return
	
Label_6727:
	var_117_int = 14580; // 0x1a47 PushI
	var_118_bool = var_40_int == var_117_int; // 0x1a48 Eq
	if(var_118_bool == 0) goto Label_6745; // 0x1a49 JumpB
	var_119_string = ""; // 0x1a4a PushV
	var_119_string = "Neutral"; // 0x1a4b MovS
	func_6593(var_41_int, var_119_string); // 0x1a4c Call
	var_120_int = 13348; // 0x1a4e PushI
	SetMessage(var_120_int); // 0x1a4f TObjFunc
	ClearReplies(); // 0x1a51 TObjFunc
	var_121_int = 13349; // 0x1a53 PushI
	var_122_int = 14582; // 0x1a54 PushI
	var_123_int = 14581; // 0x1a55 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x1a56 TObjFunc
	return 0; // 0x1a58 Return
	
Label_6745:
	var_124_int = 14582; // 0x1a59 PushI
	var_125_bool = var_40_int == var_124_int; // 0x1a5a Eq
	if(var_125_bool == 0) goto Label_6763; // 0x1a5b JumpB
	var_126_string = ""; // 0x1a5c PushV
	var_126_string = "Neutral"; // 0x1a5d MovS
	func_6593(var_41_int, var_126_string); // 0x1a5e Call
	var_127_int = 13350; // 0x1a60 PushI
	SetMessage(var_127_int); // 0x1a61 TObjFunc
	ClearReplies(); // 0x1a63 TObjFunc
	var_128_int = 13351; // 0x1a65 PushI
	var_129_int = -1; // 0x1a66 PushI
	var_130_int = 14583; // 0x1a67 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x1a68 TObjFunc
	return 0; // 0x1a6a Return
	
Label_6763:
	var_3_string = 1; // 0x1a6b TMovB
	var_131_bool = 0; // 0x1a6c PushV
	func_7001(var_131_bool); // 0x1a6d Call
	if(var_131_bool == 0) goto Label_6771; // 0x1a6f JumpB
	lshStopAnimation(); // 0x1a70 Func
	goto Label_6773; // 0x1a72 Jump
	
Label_6773:
	return 0; // 0x1a75 Return
	
Label_6771:
	StopAnimation(); // 0x1a73 Func
	
Label_6775:
	return 0; // 0x1a77 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	func_8629(); // 0x7 Call
	var_41_bool = 0; // 0x9 PushV
	func_6795(var_41_bool); // 0xa Call
	var_44_bool = var_41_bool == 0; // 0xc Not
	if(var_44_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_45_string = ""; // 0x13 PushV
	var_45_string = "Neutral"; // 0x14 MovS
	func_6860(var_45_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_8193(var_233_bool)
{
	var_235_int = 0; var_236_string = ""; // 0x2002 PushV
	var_236_string = "ood6Alexandr4"; // 0x2003 MovS
	func_6895(var_235_int, var_236_string); // 0x2004 Call
	var_237_int = 0; // 0x2006 PushI
	var_238_bool = var_235_int == var_237_int; // 0x2007 Eq
	if(var_238_bool == 0) goto Label_8203; // 0x2008 JumpB
	var_233_bool = 1; // 0x2009 MovB
	return 0; // 0x200a Return
	
Label_8203:
	var_233_bool = 0; // 0x200b MovB
	return 0; // 0x200c Return
}


func_7685(var_281_bool)
{
	var_283_int = 0; var_284_string = ""; // 0x1e06 PushV
	var_284_string = "ood1Alexandr5"; // 0x1e07 MovS
	func_6895(var_283_int, var_284_string); // 0x1e08 Call
	var_285_int = 0; // 0x1e0a PushI
	var_286_bool = var_283_int == var_285_int; // 0x1e0b Eq
	if(var_286_bool == 0) goto Label_7695; // 0x1e0c JumpB
	var_281_bool = 1; // 0x1e0d MovB
	return 0; // 0x1e0e Return
	
Label_7695:
	var_281_bool = 0; // 0x1e0f MovB
	return 0; // 0x1e10 Return
}


func_8205(var_73_bool)
{
	var_75_int = 0; var_76_string = ""; // 0x200e PushV
	var_76_string = "d7q02"; // 0x200f MovS
	func_6895(var_75_int, var_76_string); // 0x2010 Call
	var_79_int = 1; // 0x2012 PushI
	var_80_bool = var_75_int == var_79_int; // 0x2013 Eq
	if(var_80_bool == 0) goto Label_8215; // 0x2014 JumpB
	var_73_bool = 1; // 0x2015 MovB
	return 0; // 0x2016 Return
	
Label_8215:
	var_73_bool = 0; // 0x2017 MovB
	return 0; // 0x2018 Return
}


func_7183(var_224_object)
{
	var_226_string = "money 5000 is given"; // 0x1c10 PushS
	Trace(var_226_string); // 0x1c11 Func
	var_227_object = Obj(); var_228_string = ""; var_229_int = 0; // 0x1c13 PushV
	var_227_object = var_224_object; // 0x1c14 Mov
	var_228_string = "money"; // 0x1c15 MovS
	var_229_int = 5000; // 0x1c16 MovI
	func_6776(var_228_string, var_229_int); // 0x1c17 Call
	return 0; // 0x1c19 Return
}


func_7697(var_297_bool)
{
	var_299_int = 0; var_300_string = ""; // 0x1e12 PushV
	var_300_string = "ood1Alexandr6"; // 0x1e13 MovS
	func_6895(var_299_int, var_300_string); // 0x1e14 Call
	var_301_int = 0; // 0x1e16 PushI
	var_302_bool = var_299_int == var_301_int; // 0x1e17 Eq
	if(var_302_bool == 0) goto Label_7707; // 0x1e18 JumpB
	var_297_bool = 1; // 0x1e19 MovB
	return 0; // 0x1e1a Return
	
Label_7707:
	var_297_bool = 0; // 0x1e1b MovB
	return 0; // 0x1e1c Return
}


func_3089(var_0_object, var_1_object, var_2_object, var_3_object, var_455_object, var_456_object)
{
	var_0_object = var_456_object; // 0xc12 TMov
	var_1_object = var_455_object; // 0xc13 TMov
	var_3_object = 0; // 0xc14 TMovB
	var_461_int = 1; // 0xc15 PushI
	if(var_461_int == 0) goto Label_3234; // 0xc16 JumpB
	var_462_bool = 0; var_463_object = Obj(); // 0xc17 PushV
	var_463_object = var_1_object; // 0xc18 MovT
	func_7781(var_463_object); // 0xc19 Call
	if(var_462_bool == 0) goto Label_3125; // 0xc1b JumpB
	var_468_object = Obj(); var_469_object = Obj(); // 0xc1c PushV
	var_468_object = var_1_object; // 0xc1d MovT
	var_469_object = var_0_object; // 0xc1e MovT
	func_7616(); // 0xc1f Call
	var_474_string = ""; // 0xc21 PushV
	var_474_string = "Neutral"; // 0xc22 MovS
	func_3264(var_456_object, var_474_string); // 0xc23 Call
	var_479_int = 6610; // 0xc25 PushI
	SetMessage(var_479_int); // 0xc26 TObjFunc
	ClearReplies(); // 0xc28 TObjFunc
	var_480_int = 6611; // 0xc2a PushI
	var_481_int = 7748; // 0xc2b PushI
	var_482_int = 7280; // 0xc2c PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0xc2d TObjFunc
	var_483_int = 7066; // 0xc2f PushI
	var_484_int = 7748; // 0xc30 PushI
	var_485_int = 7784; // 0xc31 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0xc32 TObjFunc
	goto Label_3234; // 0xc34 Jump
	
Label_3234:
	var_486_bool = 0; // 0xca2 PushV
	func_7001(var_486_bool); // 0xca3 Call
	if(var_486_bool == 0) goto Label_3249; // 0xca5 JumpB
	
Label_3238:
	lshWaitForAnimEnd(); // 0xca6 Func
	var_487_object = var_3_object; // 0xca8 PushT
	if(var_487_object == 0) goto Label_3243; // 0xca9 JumpB
	goto Label_3248; // 0xcaa Jump
	
Label_3248:
	goto Label_3263; // 0xcb0 Jump
	
Label_3263:
	return 0; // 0xcbf Return
	
Label_3243:
	var_488_string = ""; // 0xcab PushV
	var_488_string = var_2_object; // 0xcac MovT
	func_6860(var_488_string); // 0xcad Call
	goto Label_3238; // 0xcaf Jump
	
Label_3249:
	var_489_string = "all"; // 0xcb1 PushS
	var_490_string = "idle"; // 0xcb2 PushS
	PlayAnimation(var_489_string, var_490_string); // 0xcb3 Func
	
Label_3253:
	WaitForAnimEnd(); // 0xcb5 Func
	var_491_object = var_3_object; // 0xcb7 PushT
	if(var_491_object == 0) goto Label_3258; // 0xcb8 JumpB
	goto Label_3263; // 0xcb9 Jump
	
Label_3258:
	var_492_string = "all"; // 0xcba PushS
	var_493_string = "idle"; // 0xcbb PushS
	PlayAnimation(var_492_string, var_493_string); // 0xcbc Func
	goto Label_3253; // 0xcbe Jump
	
Label_3125:
	var_494_bool = 0; // 0xc35 PushV
	var_494_bool = 0; // 0xc36 MovB
	var_495_bool = 0; // 0xc37 PushV
	var_495_bool = 0; // 0xc38 MovB
	var_496_bool = 0; var_497_object = Obj(); // 0xc39 PushV
	var_497_object = var_1_object; // 0xc3a MovT
	func_7793(var_497_object); // 0xc3b Call
	if(var_496_bool == 0) goto Label_3140; // 0xc3d JumpB
	var_502_bool = 0; var_503_object = Obj(); // 0xc3e PushV
	var_503_object = var_1_object; // 0xc3f MovT
	func_7863(var_503_object); // 0xc40 Call
	if(var_502_bool == 0) goto Label_3140; // 0xc42 JumpB
	var_495_bool = 1; // 0xc43 MovB
	
Label_3140:
	if(var_495_bool == 0) goto Label_3147; // 0xc44 JumpB
	var_504_bool = 0; var_505_object = Obj(); // 0xc45 PushV
	var_505_object = var_1_object; // 0xc46 MovT
	func_7868(var_505_object); // 0xc47 Call
	if(var_504_bool == 0) goto Label_3147; // 0xc49 JumpB
	var_494_bool = 1; // 0xc4a MovB
	
Label_3147:
	if(var_494_bool == 0) goto Label_3173; // 0xc4b JumpB
	var_510_string = ""; // 0xc4c PushV
	var_510_string = "Neutral"; // 0xc4d MovS
	func_3264(var_456_object, var_510_string); // 0xc4e Call
	var_511_int = 6731; // 0xc50 PushI
	SetMessage(var_511_int); // 0xc51 TObjFunc
	ClearReplies(); // 0xc53 TObjFunc
	var_512_int = 6732; // 0xc55 PushI
	var_513_int = 7420; // 0xc56 PushI
	var_514_int = 7419; // 0xc57 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0xc58 TObjFunc
	var_515_int = 6742; // 0xc5a PushI
	var_516_int = 7420; // 0xc5b PushI
	var_517_int = 7430; // 0xc5c PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0xc5d TObjFunc
	var_518_int = 6743; // 0xc5f PushI
	var_519_int = 7433; // 0xc60 PushI
	var_520_int = 7432; // 0xc61 PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0xc62 TObjFunc
	goto Label_3234; // 0xc64 Jump
	
Label_3173:
	var_521_string = ""; // 0xc65 PushV
	var_521_string = "Neutral"; // 0xc66 MovS
	func_3264(var_456_object, var_521_string); // 0xc67 Call
	var_522_int = 6614; // 0xc69 PushI
	SetMessage(var_522_int); // 0xc6a TObjFunc
	ClearReplies(); // 0xc6c TObjFunc
	var_523_bool = 0; // 0xc6e PushV
	var_523_bool = 0; // 0xc6f MovB
	var_524_bool = 0; var_525_object = Obj(); // 0xc70 PushV
	var_525_object = var_1_object; // 0xc71 MovT
	func_7805(var_525_object); // 0xc72 Call
	if(var_524_bool == 0) goto Label_3195; // 0xc74 JumpB
	var_530_bool = 0; var_531_object = Obj(); // 0xc75 PushV
	var_531_object = var_1_object; // 0xc76 MovT
	func_7851(var_531_object); // 0xc77 Call
	if(var_530_bool == 0) goto Label_3195; // 0xc79 JumpB
	var_523_bool = 1; // 0xc7a MovB
	
Label_3195:
	if(var_523_bool == 0) goto Label_3201; // 0xc7b JumpB
	var_536_int = 6615; // 0xc7c PushI
	var_537_int = 7282; // 0xc7d PushI
	var_538_int = 7284; // 0xc7e PushI
	AddReply(var_536_int, var_537_int, var_538_int); // 0xc7f TObjFunc
	
Label_3201:
	var_539_bool = 0; var_540_object = Obj(); // 0xc81 PushV
	var_540_object = var_1_object; // 0xc82 MovT
	func_7839(var_540_object); // 0xc83 Call
	if(var_539_bool == 0) goto Label_3211; // 0xc85 JumpB
	var_545_int = 6618; // 0xc86 PushI
	var_546_int = 7800; // 0xc87 PushI
	var_547_int = 7287; // 0xc88 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0xc89 TObjFunc
	
Label_3211:
	var_548_bool = 0; var_549_object = Obj(); // 0xc8b PushV
	var_549_object = var_1_object; // 0xc8c MovT
	func_7817(var_549_object); // 0xc8d Call
	if(var_548_bool == 0) goto Label_3221; // 0xc8f JumpB
	var_554_int = 6730; // 0xc90 PushI
	var_555_int = 7405; // 0xc91 PushI
	var_556_int = 7417; // 0xc92 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0xc93 TObjFunc
	
Label_3221:
	var_557_int = 7071; // 0xc95 PushI
	var_558_int = 7802; // 0xc96 PushI
	var_559_int = 7794; // 0xc97 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0xc98 TObjFunc
	var_560_int = 7532; // 0xc9a PushI
	var_561_int = -1; // 0xc9b PushI
	var_562_int = 8314; // 0xc9c PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0xc9d TObjFunc
	goto Label_3234; // 0xc9f Jump
}


func_8217(var_81_bool)
{
	var_83_int = 0; var_84_string = ""; // 0x201a PushV
	var_84_string = "ood7Alexandr1"; // 0x201b MovS
	func_6895(var_83_int, var_84_string); // 0x201c Call
	var_85_int = 0; // 0x201e PushI
	var_86_bool = var_83_int == var_85_int; // 0x201f Eq
	if(var_86_bool == 0) goto Label_8227; // 0x2020 JumpB
	var_81_bool = 1; // 0x2021 MovB
	return 0; // 0x2022 Return
	
Label_8227:
	var_81_bool = 0; // 0x2023 MovB
	return 0; // 0x2024 Return
}


func_7194()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x1c1a PushV
	var_54_object = Obj(); // 0x1c1b PushV
	func_8402(var_54_object); // 0x1c1c Call
	var_53_object = var_54_object; // 0x1c1d Mov
	var_61_string = "d1AlexandrAboutKaterina"; // 0x1c1f PushS
	var_62_string = "pt_map_katerina"; // 0x1c20 PushS
	var_63_int = 3; // 0x1c21 PushI
	var_64_int = 8640; // 0x1c22 PushI
	var_65_float = 0; // 0x1c23 PushV
	func_6960(var_65_float); // 0x1c24 Call
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0x1c26 ObjFunc
	return 2; // 0x1c28 Return
}


func_7709(var_313_bool)
{
	var_315_int = 0; var_316_string = ""; // 0x1e1e PushV
	var_316_string = "ood1Alexandr7"; // 0x1e1f MovS
	func_6895(var_315_int, var_316_string); // 0x1e20 Call
	var_317_int = 0; // 0x1e22 PushI
	var_318_bool = var_315_int == var_317_int; // 0x1e23 Eq
	if(var_318_bool == 0) goto Label_7719; // 0x1e24 JumpB
	var_313_bool = 1; // 0x1e25 MovB
	return 0; // 0x1e26 Return
	
Label_7719:
	var_313_bool = 0; // 0x1e27 MovB
	return 0; // 0x1e28 Return
}


func_8229(var_342_bool)
{
	var_344_int = 0; var_345_string = ""; // 0x2026 PushV
	var_345_string = "KnowBigVlad"; // 0x2027 MovS
	func_6895(var_344_int, var_345_string); // 0x2028 Call
	var_346_int = 1; // 0x202a PushI
	var_347_bool = var_344_int == var_346_int; // 0x202b Eq
	if(var_347_bool == 0) goto Label_8239; // 0x202c JumpB
	var_342_bool = 1; // 0x202d MovB
	return 0; // 0x202e Return
	
Label_8239:
	var_342_bool = 0; // 0x202f MovB
	return 0; // 0x2030 Return
}


func_7721(var_330_bool)
{
	var_332_int = 0; var_333_string = ""; // 0x1e2a PushV
	var_333_string = "ood1Alexandr8"; // 0x1e2b MovS
	func_6895(var_332_int, var_333_string); // 0x1e2c Call
	var_334_int = 0; // 0x1e2e PushI
	var_335_bool = var_332_int == var_334_int; // 0x1e2f Eq
	if(var_335_bool == 0) goto Label_7731; // 0x1e30 JumpB
	var_330_bool = 1; // 0x1e31 MovB
	return 0; // 0x1e32 Return
	
Label_7731:
	var_330_bool = 0; // 0x1e33 MovB
	return 0; // 0x1e34 Return
}


func_7210()
{
	var_114_object = Obj(); var_115_string = ""; var_116_float = 0; // 0x1c2b PushV
	var_117_object = Obj(); // 0x1c2c PushV
	func_8402(var_117_object); // 0x1c2d Call
	var_114_object = var_117_object; // 0x1c2e Mov
	var_115_string = "pt_map_anna"; // 0x1c30 MovS
	var_116_float = 2; // 0x1c31 MovI
	func_8419(var_114_object, var_115_string, var_116_float); // 0x1c32 Call
	var_137_object = Obj(); // 0x1c34 PushV
	func_8402(var_137_object); // 0x1c35 Call
	ShowMap(var_137_object); // 0x1c37 ObjFunc
	return 0; // 0x1c39 Return
}


func_8241(var_324_bool)
{
	var_326_int = 0; var_327_string = ""; // 0x2032 PushV
	var_327_string = "KnowGeorg"; // 0x2033 MovS
	func_6895(var_326_int, var_327_string); // 0x2034 Call
	var_328_int = 1; // 0x2036 PushI
	var_329_bool = var_326_int == var_328_int; // 0x2037 Eq
	if(var_329_bool == 0) goto Label_8251; // 0x2038 JumpB
	var_324_bool = 1; // 0x2039 MovB
	return 0; // 0x203a Return
	
Label_8251:
	var_324_bool = 0; // 0x203b MovB
	return 0; // 0x203c Return
}


func_49(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x31 PushV
	var_0_object = var_45_object; // 0x32 TMov
	var_55_bool = 0; var_56_object = Obj(); // 0x33 PushV
	var_56_object = var_45_object; // 0x34 Mov
	func_6800(var_56_object); // 0x35 Call
	var_95_bool = var_55_bool == 0; // 0x37 Not
	if(var_95_bool == 0) goto Label_59; // 0x38 JumpB
	var_44_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_51_object); // 0x3b Func
	var_96_int = 0; // 0x3d PushV
	func_6997(var_96_int); // 0x3e Call
	SetNPCName(var_96_int); // 0x40 ObjFunc
	var_97_string = ""; // 0x42 PushV
	func_6999(var_97_string); // 0x43 Call
	SetPhoto(var_97_string); // 0x45 ObjFunc
	var_98_int = 0; // 0x47 PushV
	func_8452(var_98_int); // 0x48 Call
	SetPlayerName(var_98_int); // 0x4a ObjFunc
	var_53_int = -1; // 0x4c MovI
	IsOverrideActive(var_52_bool); // 0x4d Func
	var_106_bool = var_52_bool; // 0x4f Push
	if(var_106_bool == 0) goto Label_83; // 0x50 JumpB
	var_44_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_51_object); // 0x53 Func
	var_107_object = Obj(); var_108_object = Obj(); // 0x55 PushV
	var_107_object = var_45_object; // 0x56 Mov
	var_108_object = var_51_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_109_object, var_110_object, var_111_string, var_112_bool, var_107_object, var_108_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_54_bool); // 0x5c ObjFunc
	
Label_94:
	var_151_bool = var_54_bool == 0; // 0x5e Not
	if(var_151_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_54_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_152_object = Obj(); // 0x65 PushV
	var_152_object = var_45_object; // 0x66 Mov
	func_6856(); // 0x67 Call
	StopDialog(var_51_object); // 0x69 Func
	GetReturnValue(var_53_int); // 0x6b ObjFunc
	var_44_int = var_53_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_7733(var_348_bool)
{
	var_350_int = 0; var_351_string = ""; // 0x1e36 PushV
	var_351_string = "ood1Alexandr9"; // 0x1e37 MovS
	func_6895(var_350_int, var_351_string); // 0x1e38 Call
	var_352_int = 0; // 0x1e3a PushI
	var_353_bool = var_350_int == var_352_int; // 0x1e3b Eq
	if(var_353_bool == 0) goto Label_7743; // 0x1e3c JumpB
	var_348_bool = 1; // 0x1e3d MovB
	return 0; // 0x1e3e Return
	
Label_7743:
	var_348_bool = 0; // 0x1e3f MovB
	return 0; // 0x1e40 Return
}


func_7226()
{
	var_116_object = Obj(); var_117_string = ""; var_118_float = 0; // 0x1c3b PushV
	var_119_object = Obj(); // 0x1c3c PushV
	func_8402(var_119_object); // 0x1c3d Call
	var_116_object = var_119_object; // 0x1c3e Mov
	var_117_string = "pt_map_ospina"; // 0x1c40 MovS
	var_118_float = 2; // 0x1c41 MovI
	func_8419(var_116_object, var_117_string, var_118_float); // 0x1c42 Call
	var_139_object = Obj(); // 0x1c44 PushV
	func_8402(var_139_object); // 0x1c45 Call
	ShowMap(var_139_object); // 0x1c47 ObjFunc
	return 0; // 0x1c49 Return
}


func_8253(var_358_bool)
{
	var_360_int = 0; var_361_string = ""; // 0x203e PushV
	var_361_string = "KnowGrif"; // 0x203f MovS
	func_6895(var_360_int, var_361_string); // 0x2040 Call
	var_362_int = 1; // 0x2042 PushI
	var_363_bool = var_360_int == var_362_int; // 0x2043 Eq
	if(var_363_bool == 0) goto Label_8263; // 0x2044 JumpB
	var_358_bool = 1; // 0x2045 MovB
	return 0; // 0x2046 Return
	
Label_8263:
	var_358_bool = 0; // 0x2047 MovB
	return 0; // 0x2048 Return
}


func_7745(var_364_bool)
{
	var_366_int = 0; var_367_string = ""; // 0x1e42 PushV
	var_367_string = "ood1Alexandr10"; // 0x1e43 MovS
	func_6895(var_366_int, var_367_string); // 0x1e44 Call
	var_368_int = 0; // 0x1e46 PushI
	var_369_bool = var_366_int == var_368_int; // 0x1e47 Eq
	if(var_369_bool == 0) goto Label_7755; // 0x1e48 JumpB
	var_364_bool = 1; // 0x1e49 MovB
	return 0; // 0x1e4a Return
	
Label_7755:
	var_364_bool = 0; // 0x1e4b MovB
	return 0; // 0x1e4c Return
}


func_8265(var_291_bool)
{
	var_293_int = 0; var_294_string = ""; // 0x204a PushV
	var_294_string = "KnowKaterina"; // 0x204b MovS
	func_6895(var_293_int, var_294_string); // 0x204c Call
	var_295_int = 1; // 0x204e PushI
	var_296_bool = var_293_int == var_295_int; // 0x204f Eq
	if(var_296_bool == 0) goto Label_8275; // 0x2050 JumpB
	var_291_bool = 1; // 0x2051 MovB
	return 0; // 0x2052 Return
	
Label_8275:
	var_291_bool = 0; // 0x2053 MovB
	return 0; // 0x2054 Return
}


func_7242()
{
	var_144_string = "ood3Alexandr1"; // 0x1c4b PushS
	var_145_int = 1; // 0x1c4c PushI
	SetVariable(var_144_string, var_145_int); // 0x1c4d Func
	return 0; // 0x1c4f Return
}


func_7757(var_380_bool)
{
	var_382_int = 0; var_383_string = ""; // 0x1e4e PushV
	var_383_string = "ood1Alexandr11"; // 0x1e4f MovS
	func_6895(var_382_int, var_383_string); // 0x1e50 Call
	var_384_int = 0; // 0x1e52 PushI
	var_385_bool = var_382_int == var_384_int; // 0x1e53 Eq
	if(var_385_bool == 0) goto Label_7767; // 0x1e54 JumpB
	var_380_bool = 1; // 0x1e55 MovB
	return 0; // 0x1e56 Return
	
Label_7767:
	var_380_bool = 0; // 0x1e57 MovB
	return 0; // 0x1e58 Return
}


func_7248()
{
	var_58_string = "ood3Alexandr2"; // 0x1c51 PushS
	var_59_int = 1; // 0x1c52 PushI
	SetVariable(var_58_string, var_59_int); // 0x1c53 Func
	return 0; // 0x1c55 Return
}


func_8277(var_307_bool)
{
	var_309_int = 0; var_310_string = ""; // 0x2056 PushV
	var_310_string = "KnowLara"; // 0x2057 MovS
	func_6895(var_309_int, var_310_string); // 0x2058 Call
	var_311_int = 1; // 0x205a PushI
	var_312_bool = var_309_int == var_311_int; // 0x205b Eq
	if(var_312_bool == 0) goto Label_8287; // 0x205c JumpB
	var_307_bool = 1; // 0x205d MovB
	return 0; // 0x205e Return
	
Label_8287:
	var_307_bool = 0; // 0x205f MovB
	return 0; // 0x2060 Return
}


func_7254()
{
	var_112_string = "ood3Alexandr3"; // 0x1c57 PushS
	var_113_int = 1; // 0x1c58 PushI
	SetVariable(var_112_string, var_113_int); // 0x1c59 Func
	return 0; // 0x1c5b Return
}


func_7769(var_396_bool)
{
	var_398_int = 0; var_399_string = ""; // 0x1e5a PushV
	var_399_string = "ood1Alexandr12"; // 0x1e5b MovS
	func_6895(var_398_int, var_399_string); // 0x1e5c Call
	var_400_int = 0; // 0x1e5e PushI
	var_401_bool = var_398_int == var_400_int; // 0x1e5f Eq
	if(var_401_bool == 0) goto Label_7779; // 0x1e60 JumpB
	var_396_bool = 1; // 0x1e61 MovB
	return 0; // 0x1e62 Return
	
Label_7779:
	var_396_bool = 0; // 0x1e63 MovB
	return 0; // 0x1e64 Return
}


func_7260()
{
	var_48_string = "ood3Alexandr4"; // 0x1c5d PushS
	var_49_int = 1; // 0x1c5e PushI
	SetVariable(var_48_string, var_49_int); // 0x1c5f Func
	return 0; // 0x1c61 Return
}


func_8289(var_275_bool)
{
	var_277_int = 0; var_278_string = ""; // 0x2062 PushV
	var_278_string = "KnowPredictions"; // 0x2063 MovS
	func_6895(var_277_int, var_278_string); // 0x2064 Call
	var_279_int = 1; // 0x2066 PushI
	var_280_bool = var_277_int == var_279_int; // 0x2067 Eq
	if(var_280_bool == 0) goto Label_8299; // 0x2068 JumpB
	var_275_bool = 1; // 0x2069 MovB
	return 0; // 0x206a Return
	
Label_8299:
	var_275_bool = 0; // 0x206b MovB
	return 0; // 0x206c Return
}


func_7266()
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x1c62 PushV
	var_64_string = "d3q01"; // 0x1c63 PushS
	var_65_int = 2; // 0x1c64 PushI
	SetVariable(var_64_string, var_65_int); // 0x1c65 Func
	var_66_object = Obj(); // 0x1c67 PushV
	func_8402(var_66_object); // 0x1c68 Call
	var_63_object = var_66_object; // 0x1c69 Mov
	var_73_string = "d3q01AlexandrGotoOspina"; // 0x1c6b PushS
	var_74_string = "pt_map_ospina"; // 0x1c6c PushS
	var_75_int = 1; // 0x1c6d PushI
	var_76_int = 11148; // 0x1c6e PushI
	var_77_float = 0; // 0x1c6f PushV
	func_6960(var_77_float); // 0x1c70 Call
	AddMark(var_73_string, var_74_string, var_75_int, var_76_int, var_77_float); // 0x1c72 ObjFunc
	var_80_string = "d3q01AlexandrGotoOspinaSelf"; // 0x1c74 PushS
	var_81_string = "pt_map_alexandr"; // 0x1c75 PushS
	var_82_int = 1; // 0x1c76 PushI
	var_83_int = 15295; // 0x1c77 PushI
	var_84_float = 0; // 0x1c78 PushV
	func_6960(var_84_float); // 0x1c79 Call
	AddMark(var_80_string, var_81_string, var_82_int, var_83_int, var_84_float); // 0x1c7b ObjFunc
	func_8533(); // 0x1c7e Call
	return 2; // 0x1c80 Return
}


func_7781(var_282_bool)
{
	var_284_int = 0; var_285_string = ""; // 0x1e66 PushV
	var_285_string = "ood2Alexandr1"; // 0x1e67 MovS
	func_6895(var_284_int, var_285_string); // 0x1e68 Call
	var_288_int = 0; // 0x1e6a PushI
	var_289_bool = var_284_int == var_288_int; // 0x1e6b Eq
	if(var_289_bool == 0) goto Label_7791; // 0x1e6c JumpB
	var_282_bool = 1; // 0x1e6d MovB
	return 0; // 0x1e6e Return
	
Label_7791:
	var_282_bool = 0; // 0x1e6f MovB
	return 0; // 0x1e70 Return
}


func_8301(var_374_bool)
{
	var_376_int = 0; var_377_string = ""; // 0x206e PushV
	var_377_string = "KnowStamatins"; // 0x206f MovS
	func_6895(var_376_int, var_377_string); // 0x2070 Call
	var_378_int = 1; // 0x2072 PushI
	var_379_bool = var_376_int == var_378_int; // 0x2073 Eq
	if(var_379_bool == 0) goto Label_8311; // 0x2074 JumpB
	var_374_bool = 1; // 0x2075 MovB
	return 0; // 0x2076 Return
	
Label_8311:
	var_374_bool = 0; // 0x2077 MovB
	return 0; // 0x2078 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_107_object, var_108_object)
{
	var_0_object = var_108_object; // 0x71 TMov
	var_1_object = var_107_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_113_int = 1; // 0x74 PushI
	if(var_113_int == 0) goto Label_150; // 0x75 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x76 PushV
	var_114_object = var_1_object; // 0x77 MovT
	var_115_object = var_0_object; // 0x78 MovT
	func_7573(); // 0x79 Call
	var_118_string = ""; // 0x7b PushV
	var_118_string = "Neutral"; // 0x7c MovS
	func_180(var_108_object, var_118_string); // 0x7d Call
	var_133_int = 287; // 0x7f PushI
	SetMessage(var_133_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_134_int = 288; // 0x84 PushI
	var_135_int = 340; // 0x85 PushI
	var_136_int = 337; // 0x86 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x87 TObjFunc
	var_137_int = 289; // 0x89 PushI
	var_138_int = 340; // 0x8a PushI
	var_139_int = 338; // 0x8b PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x8c TObjFunc
	var_140_int = 290; // 0x8e PushI
	var_141_int = 340; // 0x8f PushI
	var_142_int = 339; // 0x90 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
	
Label_150:
	var_143_bool = 0; // 0x96 PushV
	func_7001(var_143_bool); // 0x97 Call
	if(var_143_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_144_object = var_3_object; // 0x9c PushT
	if(var_144_object == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_145_string = ""; // 0x9f PushV
	var_145_string = var_2_object; // 0xa0 MovT
	func_6860(var_145_string); // 0xa1 Call
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_146_string = "all"; // 0xa5 PushS
	var_147_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_146_string, var_147_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_148_object = var_3_object; // 0xab PushT
	if(var_148_object == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_149_string = "all"; // 0xae PushS
	var_150_string = "idle"; // 0xaf PushS
	PlayAnimation(var_149_string, var_150_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
}


func_7793(var_320_bool)
{
	var_322_int = 0; var_323_string = ""; // 0x1e72 PushV
	var_323_string = "ood2Alexandr2"; // 0x1e73 MovS
	func_6895(var_322_int, var_323_string); // 0x1e74 Call
	var_324_int = 0; // 0x1e76 PushI
	var_325_bool = var_322_int == var_324_int; // 0x1e77 Eq
	if(var_325_bool == 0) goto Label_7803; // 0x1e78 JumpB
	var_320_bool = 1; // 0x1e79 MovB
	return 0; // 0x1e7a Return
	
Label_7803:
	var_320_bool = 0; // 0x1e7b MovB
	return 0; // 0x1e7c Return
}


func_4210(var_0_object, var_567_int, var_568_object)
{
	var_570_object = Obj(); var_571_bool = 0; var_572_int = 0; var_573_bool = 0; var_574_object = Obj(); var_575_bool = 0; var_576_int = 0; var_577_bool = 0; // 0x1072 PushV
	var_0_object = var_568_object; // 0x1073 TMov
	var_578_bool = 0; var_579_object = Obj(); // 0x1074 PushV
	var_579_object = var_568_object; // 0x1075 Mov
	func_6800(var_579_object); // 0x1076 Call
	var_580_bool = var_578_bool == 0; // 0x1078 Not
	if(var_580_bool == 0) goto Label_4220; // 0x1079 JumpB
	var_567_int = -2; // 0x107a MovI
	return 8; // 0x107b Return
	
Label_4220:
	CreateDialog(var_574_object); // 0x107c Func
	var_581_int = 0; // 0x107e PushV
	func_6997(var_581_int); // 0x107f Call
	SetNPCName(var_581_int); // 0x1081 ObjFunc
	var_582_string = ""; // 0x1083 PushV
	func_6999(var_582_string); // 0x1084 Call
	SetPhoto(var_582_string); // 0x1086 ObjFunc
	var_583_int = 0; // 0x1088 PushV
	func_8452(var_583_int); // 0x1089 Call
	SetPlayerName(var_583_int); // 0x108b ObjFunc
	var_576_int = -1; // 0x108d MovI
	IsOverrideActive(var_575_bool); // 0x108e Func
	var_584_bool = var_575_bool; // 0x1090 Push
	if(var_584_bool == 0) goto Label_4244; // 0x1091 JumpB
	var_567_int = -2; // 0x1092 MovI
	return 8; // 0x1093 Return
	
Label_4244:
	DoDialog(var_574_object); // 0x1094 Func
	var_585_object = Obj(); var_586_object = Obj(); // 0x1096 PushV
	var_585_object = var_568_object; // 0x1097 Mov
	var_586_object = var_574_object; // 0x1098 Mov
	TaskCall(11); // 0x1099 TaskCall
	func_4273(var_587_object, var_588_object, var_589_string, var_590_bool, var_585_object, var_586_object); // 0x109a Call
	TaskReturn(); // 0x109b TaskReturn
	IsDialogEnd(var_577_bool); // 0x109d ObjFunc
	
Label_4255:
	var_669_bool = var_577_bool == 0; // 0x109f Not
	if(var_669_bool == 0) goto Label_4262; // 0x10a0 JumpB
	sync(); // 0x10a1 Func
	IsDialogEnd(var_577_bool); // 0x10a3 ObjFunc
	goto Label_4255; // 0x10a5 Jump
	
Label_4262:
	var_670_object = Obj(); // 0x10a6 PushV
	var_670_object = var_568_object; // 0x10a7 Mov
	func_6856(); // 0x10a8 Call
	StopDialog(var_574_object); // 0x10aa Func
	GetReturnValue(var_576_int); // 0x10ac ObjFunc
	var_567_int = var_576_int; // 0x10ae Mov
	return 8; // 0x10af Return
}


func_6776(var_228_string, var_229_int)
{
	var_230_int = 0; var_231_int = 0; // 0x1a78 PushV
	GetProperty(var_228_string, var_231_int); // 0x1a79 ObjFunc
	var_232_int = var_231_int + var_229_int; // 0x1a7b Add
	SetProperty(var_228_string, var_232_int); // 0x1a7c ObjFunc
	return 2; // 0x1a7e Return
}


func_8313(var_482_bool)
{
	var_484_int = 0; var_485_string = ""; // 0x207a PushV
	var_485_string = "KnowUklad"; // 0x207b MovS
	func_6895(var_484_int, var_485_string); // 0x207c Call
	var_486_int = 1; // 0x207e PushI
	var_487_bool = var_484_int == var_486_int; // 0x207f Eq
	if(var_487_bool == 0) goto Label_8323; // 0x2080 JumpB
	var_482_bool = 1; // 0x2081 MovB
	return 0; // 0x2082 Return
	
Label_8323:
	var_482_bool = 0; // 0x2083 MovB
	return 0; // 0x2084 Return
}


func_7805(var_348_bool)
{
	var_350_int = 0; var_351_string = ""; // 0x1e7e PushV
	var_351_string = "ood2Alexandr3"; // 0x1e7f MovS
	func_6895(var_350_int, var_351_string); // 0x1e80 Call
	var_352_int = 0; // 0x1e82 PushI
	var_353_bool = var_350_int == var_352_int; // 0x1e83 Eq
	if(var_353_bool == 0) goto Label_7815; // 0x1e84 JumpB
	var_348_bool = 1; // 0x1e85 MovB
	return 0; // 0x1e86 Return
	
Label_7815:
	var_348_bool = 0; // 0x1e87 MovB
	return 0; // 0x1e88 Return
}


func_6783(var_41_bool)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; // 0x1a7f PushV
	GetPosition(var_47_cvector); // 0x1a80 ObjFunc
	GetPosition(var_48_cvector); // 0x1a82 Func
	var_49_cvector = var_47_cvector - var_48_cvector; // 0x1a84 Sub2
	var_51_float = GetByIndex(var_49_cvector, 0); // 0x1a85 PushE
	var_52_float = GetByIndex(var_49_cvector, 2); // 0x1a86 PushE
	Rotate(var_51_float, var_52_float, var_50_bool); // 0x1a87 Func
	var_41_bool = var_50_bool; // 0x1a89 Mov
	return 8; // 0x1a8a Return
}


func_7298()
{
	var_231_object = Obj(); var_232_string = ""; var_233_float = 0; // 0x1c83 PushV
	var_234_object = Obj(); // 0x1c84 PushV
	func_8402(var_234_object); // 0x1c85 Call
	var_231_object = var_234_object; // 0x1c86 Mov
	var_232_string = "pt_map_bigvlad"; // 0x1c88 MovS
	var_233_float = 2; // 0x1c89 MovI
	func_8419(var_231_object, var_232_string, var_233_float); // 0x1c8a Call
	var_235_object = Obj(); // 0x1c8c PushV
	func_8402(var_235_object); // 0x1c8d Call
	ShowMap(var_235_object); // 0x1c8f ObjFunc
	return 0; // 0x1c91 Return
}


func_5250(var_2_object, var_279_string)
{
	var_280_bool = 0; // 0x1483 PushV
	func_7001(var_280_bool); // 0x1484 Call
	var_281_bool = var_280_bool == 0; // 0x1486 Not
	if(var_281_bool == 0) goto Label_5257; // 0x1487 JumpB
	return 0; // 0x1488 Return
	
Label_5257:
	var_282_bool = var_279_string == var_2_object; // 0x1489 Eq
	if(var_282_bool == 0) goto Label_5260; // 0x148a JumpB
	return 0; // 0x148b Return
	
Label_5260:
	var_283_string = ""; // 0x148c PushV
	var_283_string = var_279_string; // 0x148d Mov
	func_6860(var_283_string); // 0x148e Call
	var_2_object = var_279_string; // 0x1490 TMov
	return 0; // 0x1491 Return
}


func_8325(var_346_bool)
{
	var_346_bool = 0; // 0x2086 MovB
	return 0; // 0x2087 Return
}


func_8328(var_213_bool)
{
	var_215_int = 0; // 0x2089 PushV
	func_6974(var_215_int); // 0x208a Call
	var_220_int = 18; // 0x208c PushI
	var_221_bool = var_215_int >= var_220_int; // 0x208d GE
	if(var_221_bool == 0) goto Label_8337; // 0x208e JumpB
	var_213_bool = 1; // 0x208f MovB
	return 0; // 0x2090 Return
	
Label_8337:
	var_213_bool = 0; // 0x2091 MovB
	return 0; // 0x2092 Return
}


func_7817(var_372_bool)
{
	var_374_int = 0; var_375_string = ""; // 0x1e8a PushV
	var_375_string = "ood2Alexandr5"; // 0x1e8b MovS
	func_6895(var_374_int, var_375_string); // 0x1e8c Call
	var_376_int = 0; // 0x1e8e PushI
	var_377_bool = var_374_int == var_376_int; // 0x1e8f Eq
	if(var_377_bool == 0) goto Label_7827; // 0x1e90 JumpB
	var_372_bool = 1; // 0x1e91 MovB
	return 0; // 0x1e92 Return
	
Label_7827:
	var_372_bool = 0; // 0x1e93 MovB
	return 0; // 0x1e94 Return
}


func_6795(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0x1a8b PushV
	IsLoaded(var_43_bool); // 0x1a8c Func
	var_41_bool = var_43_bool; // 0x1a8e Mov
	return 2; // 0x1a8f Return
}


func_6800(var_55_bool)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; // 0x1a90 PushV
	GetPosition(var_66_cvector); // 0x1a91 ObjFunc
	GetEyesHeight(var_65_float); // 0x1a93 ObjFunc
	var_73_float = GetByIndex(var_66_cvector, 1); // 0x1a95 PushE
	var_73_float = var_73_float + var_65_float; // 0x1a96 Add2
	SetByIndex(var_66_cvector, 1) = var_73_float; // 0x1a97 PopE
	GetPosition(var_67_cvector); // 0x1a98 Func
	GetEyesHeight(var_65_float); // 0x1a9a Func
	var_74_float = GetByIndex(var_67_cvector, 1); // 0x1a9c PushE
	var_74_float = var_74_float + var_65_float; // 0x1a9d Add2
	SetByIndex(var_67_cvector, 1) = var_74_float; // 0x1a9e PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x1a9f Sub2
	var_75_float = GetByIndex(var_68_cvector, 1); // 0x1aa0 PushE
	var_75_float = 0; // 0x1aa1 MovI
	SetByIndex(var_68_cvector, 1) = var_75_float; // 0x1aa2 PopE
	var_76_int = var_68_cvector | var_68_cvector; // 0x1aa3 Or
	var_77_float = sqrt(var_76_int); // 0x1aa4 Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x1aa5 Div2
	var_69_cvector = -var_68_cvector; // 0x1aa6 Neg2
	var_78_int = 70; // 0x1aa7 PushI
	var_79_float = var_68_cvector * var_78_int; // 0x1aa8 Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x1aa9 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x1aaa PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x1aab Xor2
	func_6885(var_80_cvector, var_81_cvector); // 0x1aac Call
	var_88_int = 25; // 0x1aae PushI
	var_89_float = var_80_cvector * var_88_int; // 0x1aaf Mult
	var_90_int = var_79_float + var_89_float; // 0x1ab0 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x1ab1 PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x1ab2 Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x1ab3 Add2
	IsOverrideActive(var_72_bool); // 0x1ab4 Func
	var_92_bool = var_72_bool; // 0x1ab6 Push
	if(var_92_bool == 0) goto Label_6842; // 0x1ab7 JumpB
	var_55_bool = 0; // 0x1ab8 MovB
	return 16; // 0x1ab9 Return
	
Label_6842:
	StopWorld(); // 0x1aba Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0x1abc Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0x1abe PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0x1abf PushE
	Rotate(var_93_float, var_94_float); // 0x1ac0 Func
	CameraWaitForPlayFinish(); // 0x1ac2 Func
	ResumeWorld(); // 0x1ac4 Func
	var_55_bool = 1; // 0x1ac6 MovB
	return 16; // 0x1ac7 Return
}


func_7314()
{
	var_191_int = 0; var_192_int = 0; // 0x1c92 PushV
	func_8501(); // 0x1c94 Call
	var_202_string = "d2q01_key"; // 0x1c96 PushS
	var_203_int = 1; // 0x1c97 PushI
	RemoveItemByType(var_192_int, var_202_string, var_203_int); // 0x1c98 ObjFunc
	return 2; // 0x1c9a Return
}


func_8339(var_234_bool)
{
	var_236_bool = 0; // 0x2094 PushV
	var_236_bool = 0; // 0x2095 MovB
	var_237_int = 0; // 0x2096 PushV
	func_6974(var_237_int); // 0x2097 Call
	var_238_int = 12; // 0x2099 PushI
	var_239_bool = var_237_int >= var_238_int; // 0x209a GE
	if(var_239_bool == 0) goto Label_8355; // 0x209b JumpB
	var_240_int = 0; // 0x209c PushV
	func_6974(var_240_int); // 0x209d Call
	var_241_int = 18; // 0x209f PushI
	var_242_bool = var_240_int < var_241_int; // 0x20a0 LT
	if(var_242_bool == 0) goto Label_8355; // 0x20a1 JumpB
	var_236_bool = 1; // 0x20a2 MovB
	
Label_8355:
	if(var_236_bool == 0) goto Label_8358; // 0x20a3 JumpB
	var_234_bool = 1; // 0x20a4 MovB
	return 0; // 0x20a5 Return
	
Label_8358:
	var_234_bool = 0; // 0x20a6 MovB
	return 0; // 0x20a7 Return
}


func_7829(var_344_bool, var_345_object)
{
	var_346_bool = 0; var_347_object = Obj(); // 0x1e96 PushV
	var_347_object = var_345_object; // 0x1e97 Mov
	func_8325(var_347_object); // 0x1e98 Call
	if(var_346_bool == 0) goto Label_7837; // 0x1e9a JumpB
	var_344_bool = 1; // 0x1e9b MovB
	return 0; // 0x1e9c Return
	
Label_7837:
	var_344_bool = 0; // 0x1e9d MovB
	return 0; // 0x1e9e Return
}


func_7323()
{
	var_48_string = "ood4Alexandr1"; // 0x1c9c PushS
	var_49_int = 1; // 0x1c9d PushI
	SetVariable(var_48_string, var_49_int); // 0x1c9e Func
	return 0; // 0x1ca0 Return
}


func_7839(var_363_bool)
{
	var_365_int = 0; var_366_string = ""; // 0x1ea0 PushV
	var_366_string = "d2q01"; // 0x1ea1 MovS
	func_6895(var_365_int, var_366_string); // 0x1ea2 Call
	var_367_int = 0; // 0x1ea4 PushI
	var_368_bool = var_365_int == var_367_int; // 0x1ea5 Eq
	if(var_368_bool == 0) goto Label_7849; // 0x1ea6 JumpB
	var_363_bool = 1; // 0x1ea7 MovB
	return 0; // 0x1ea8 Return
	
Label_7849:
	var_363_bool = 0; // 0x1ea9 MovB
	return 0; // 0x1eaa Return
}


func_7329()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x1ca1 PushV
	var_54_object = Obj(); // 0x1ca2 PushV
	func_8402(var_54_object); // 0x1ca3 Call
	var_53_object = var_54_object; // 0x1ca4 Mov
	var_61_string = "d4q03AlexandrGotoGrif"; // 0x1ca6 PushS
	var_62_string = "pt_map_grif"; // 0x1ca7 PushS
	var_63_int = 0; // 0x1ca8 PushI
	var_64_int = 11487; // 0x1ca9 PushI
	var_65_float = 0; // 0x1caa PushV
	func_6960(var_65_float); // 0x1cab Call
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0x1cad ObjFunc
	var_68_string = "d4q03AlexandrGotoGrifSelf"; // 0x1caf PushS
	var_69_string = "pt_map_alexandr"; // 0x1cb0 PushS
	var_70_int = 0; // 0x1cb1 PushI
	var_71_int = 15330; // 0x1cb2 PushI
	var_72_float = 0; // 0x1cb3 PushV
	func_6960(var_72_float); // 0x1cb4 Call
	AddMark(var_68_string, var_69_string, var_70_int, var_71_int, var_72_float); // 0x1cb6 ObjFunc
	func_8549(); // 0x1cb9 Call
	func_8565(); // 0x1cbc Call
	var_107_object = Obj(); var_108_string = ""; // 0x1cbe PushV
	var_108_string = "quest_d4_03"; // 0x1cbf MovS
	func_6911(var_107_object, var_108_string); // 0x1cc0 Call
	return 2; // 0x1cc2 Return
}


func_8360(var_88_object)
{
	var_89_object = Obj(); var_90_object = Obj(); // 0x20a8 PushV
	GetDiaryRoot(var_90_object); // 0x20a9 Func
	var_91_bool = var_90_object == 0; // 0x20ab Not
	if(var_91_bool == 0) goto Label_8370; // 0x20ac JumpB
	var_92_string = "Can't retrieve diary root"; // 0x20ad PushS
	Trace(var_92_string); // 0x20ae Func
	var_88_object = 0; // 0x20b0 MovB
	return 2; // 0x20b1 Return
	
Label_8370:
	var_88_object = var_90_object; // 0x20b2 Mov
	return 2; // 0x20b3 Return
}


func_7851(var_354_bool)
{
	var_356_int = 0; var_357_string = ""; // 0x1eac PushV
	var_357_string = "d2q01"; // 0x1ead MovS
	func_6895(var_356_int, var_357_string); // 0x1eae Call
	var_358_int = 5; // 0x1eb0 PushI
	var_359_bool = var_356_int == var_358_int; // 0x1eb1 Eq
	if(var_359_bool == 0) goto Label_7861; // 0x1eb2 JumpB
	var_354_bool = 1; // 0x1eb3 MovB
	return 0; // 0x1eb4 Return
	
Label_7861:
	var_354_bool = 0; // 0x1eb5 MovB
	return 0; // 0x1eb6 Return
}


func_4273(var_0_object, var_1_object, var_2_object, var_3_object, var_585_object, var_586_object)
{
	var_0_object = var_586_object; // 0x10b2 TMov
	var_1_object = var_585_object; // 0x10b3 TMov
	var_3_object = 0; // 0x10b4 TMovB
	var_591_int = 1; // 0x10b5 PushI
	if(var_591_int == 0) goto Label_4379; // 0x10b6 JumpB
	var_592_bool = 0; // 0x10b7 PushV
	var_592_bool = 0; // 0x10b8 MovB
	var_593_bool = 0; var_594_object = Obj(); // 0x10b9 PushV
	var_594_object = var_1_object; // 0x10ba MovT
	func_7928(var_594_object); // 0x10bb Call
	if(var_593_bool == 0) goto Label_4292; // 0x10bd JumpB
	var_599_bool = 0; var_600_object = Obj(); // 0x10be PushV
	var_600_object = var_1_object; // 0x10bf MovT
	func_7916(var_600_object); // 0x10c0 Call
	if(var_599_bool == 0) goto Label_4292; // 0x10c2 JumpB
	var_592_bool = 1; // 0x10c3 MovB
	
Label_4292:
	if(var_592_bool == 0) goto Label_4313; // 0x10c4 JumpB
	var_605_string = ""; // 0x10c5 PushV
	var_605_string = "Neutral"; // 0x10c6 MovS
	func_4409(var_586_object, var_605_string); // 0x10c7 Call
	var_610_int = 9086; // 0x10c9 PushI
	SetMessage(var_610_int); // 0x10ca TObjFunc
	ClearReplies(); // 0x10cc TObjFunc
	var_611_int = 9087; // 0x10ce PushI
	var_612_int = 9969; // 0x10cf PushI
	var_613_int = 9965; // 0x10d0 PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x10d1 TObjFunc
	var_614_int = 9088; // 0x10d3 PushI
	var_615_int = 9967; // 0x10d4 PushI
	var_616_int = 9966; // 0x10d5 PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x10d6 TObjFunc
	goto Label_4379; // 0x10d8 Jump
	
Label_4379:
	var_617_bool = 0; // 0x111b PushV
	func_7001(var_617_bool); // 0x111c Call
	if(var_617_bool == 0) goto Label_4394; // 0x111e JumpB
	
Label_4383:
	lshWaitForAnimEnd(); // 0x111f Func
	var_618_object = var_3_object; // 0x1121 PushT
	if(var_618_object == 0) goto Label_4388; // 0x1122 JumpB
	goto Label_4393; // 0x1123 Jump
	
Label_4393:
	goto Label_4408; // 0x1129 Jump
	
Label_4408:
	return 0; // 0x1138 Return
	
Label_4388:
	var_619_string = ""; // 0x1124 PushV
	var_619_string = var_2_object; // 0x1125 MovT
	func_6860(var_619_string); // 0x1126 Call
	goto Label_4383; // 0x1128 Jump
	
Label_4394:
	var_620_string = "all"; // 0x112a PushS
	var_621_string = "idle"; // 0x112b PushS
	PlayAnimation(var_620_string, var_621_string); // 0x112c Func
	
Label_4398:
	WaitForAnimEnd(); // 0x112e Func
	var_622_object = var_3_object; // 0x1130 PushT
	if(var_622_object == 0) goto Label_4403; // 0x1131 JumpB
	goto Label_4408; // 0x1132 Jump
	
Label_4403:
	var_623_string = "all"; // 0x1133 PushS
	var_624_string = "idle"; // 0x1134 PushS
	PlayAnimation(var_623_string, var_624_string); // 0x1135 Func
	goto Label_4398; // 0x1137 Jump
	
Label_4313:
	var_625_string = ""; // 0x10d9 PushV
	var_625_string = "Neutral"; // 0x10da MovS
	func_4409(var_586_object, var_625_string); // 0x10db Call
	var_626_int = 8854; // 0x10dd PushI
	SetMessage(var_626_int); // 0x10de TObjFunc
	ClearReplies(); // 0x10e0 TObjFunc
	var_627_bool = 0; // 0x10e2 PushV
	var_627_bool = 0; // 0x10e3 MovB
	var_628_bool = 0; var_629_object = Obj(); // 0x10e4 PushV
	var_629_object = var_1_object; // 0x10e5 MovT
	func_7892(var_629_object); // 0x10e6 Call
	if(var_628_bool == 0) goto Label_4335; // 0x10e8 JumpB
	var_634_bool = 0; var_635_object = Obj(); // 0x10e9 PushV
	var_635_object = var_1_object; // 0x10ea MovT
	func_7952(var_635_object); // 0x10eb Call
	if(var_634_bool == 0) goto Label_4335; // 0x10ed JumpB
	var_627_bool = 1; // 0x10ee MovB
	
Label_4335:
	if(var_627_bool == 0) goto Label_4341; // 0x10ef JumpB
	var_640_int = 8840; // 0x10f0 PushI
	var_641_int = 9693; // 0x10f1 PushI
	var_642_int = 9692; // 0x10f2 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x10f3 TObjFunc
	
Label_4341:
	var_643_bool = 0; var_644_object = Obj(); // 0x10f5 PushV
	var_644_object = var_1_object; // 0x10f6 MovT
	func_7880(var_644_object); // 0x10f7 Call
	if(var_643_bool == 0) goto Label_4351; // 0x10f9 JumpB
	var_649_int = 8855; // 0x10fa PushI
	var_650_int = 9687; // 0x10fb PushI
	var_651_int = 9711; // 0x10fc PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x10fd TObjFunc
	
Label_4351:
	var_652_bool = 0; var_653_object = Obj(); // 0x10ff PushV
	var_653_object = var_1_object; // 0x1100 MovT
	func_7904(var_653_object); // 0x1101 Call
	if(var_652_bool == 0) goto Label_4361; // 0x1103 JumpB
	var_658_int = 8856; // 0x1104 PushI
	var_659_int = 9691; // 0x1105 PushI
	var_660_int = 9712; // 0x1106 PushI
	AddReply(var_658_int, var_659_int, var_660_int); // 0x1107 TObjFunc
	
Label_4361:
	var_661_bool = 0; var_662_object = Obj(); // 0x1109 PushV
	var_662_object = var_1_object; // 0x110a MovT
	func_8068(var_662_object); // 0x110b Call
	if(var_661_bool == 0) goto Label_4371; // 0x110d JumpB
	var_663_int = 11978; // 0x110e PushI
	var_664_int = 13175; // 0x110f PushI
	var_665_int = 13193; // 0x1110 PushI
	AddReply(var_663_int, var_664_int, var_665_int); // 0x1111 TObjFunc
	
Label_4371:
	var_666_int = 11133; // 0x1113 PushI
	var_667_int = -1; // 0x1114 PushI
	var_668_int = 12322; // 0x1115 PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x1116 TObjFunc
	goto Label_4379; // 0x1118 Jump
}


func_5809(var_0_object, var_781_int, var_782_object)
{
	var_784_object = Obj(); var_785_bool = 0; var_786_int = 0; var_787_bool = 0; var_788_object = Obj(); var_789_bool = 0; var_790_int = 0; var_791_bool = 0; // 0x16b1 PushV
	var_0_object = var_782_object; // 0x16b2 TMov
	var_792_bool = 0; var_793_object = Obj(); // 0x16b3 PushV
	var_793_object = var_782_object; // 0x16b4 Mov
	func_6800(var_793_object); // 0x16b5 Call
	var_794_bool = var_792_bool == 0; // 0x16b7 Not
	if(var_794_bool == 0) goto Label_5819; // 0x16b8 JumpB
	var_781_int = -2; // 0x16b9 MovI
	return 8; // 0x16ba Return
	
Label_5819:
	CreateDialog(var_788_object); // 0x16bb Func
	var_795_int = 0; // 0x16bd PushV
	func_6997(var_795_int); // 0x16be Call
	SetNPCName(var_795_int); // 0x16c0 ObjFunc
	var_796_string = ""; // 0x16c2 PushV
	func_6999(var_796_string); // 0x16c3 Call
	SetPhoto(var_796_string); // 0x16c5 ObjFunc
	var_797_int = 0; // 0x16c7 PushV
	func_8452(var_797_int); // 0x16c8 Call
	SetPlayerName(var_797_int); // 0x16ca ObjFunc
	var_790_int = -1; // 0x16cc MovI
	IsOverrideActive(var_789_bool); // 0x16cd Func
	var_798_bool = var_789_bool; // 0x16cf Push
	if(var_798_bool == 0) goto Label_5843; // 0x16d0 JumpB
	var_781_int = -2; // 0x16d1 MovI
	return 8; // 0x16d2 Return
	
Label_5843:
	DoDialog(var_788_object); // 0x16d3 Func
	var_799_object = Obj(); var_800_object = Obj(); // 0x16d5 PushV
	var_799_object = var_782_object; // 0x16d6 Mov
	var_800_object = var_788_object; // 0x16d7 Mov
	TaskCall(15); // 0x16d8 TaskCall
	func_5872(var_801_object, var_802_object, var_803_string, var_804_bool, var_799_object, var_800_object); // 0x16d9 Call
	TaskReturn(); // 0x16da TaskReturn
	IsDialogEnd(var_791_bool); // 0x16dc ObjFunc
	
Label_5854:
	var_864_bool = var_791_bool == 0; // 0x16de Not
	if(var_864_bool == 0) goto Label_5861; // 0x16df JumpB
	sync(); // 0x16e0 Func
	IsDialogEnd(var_791_bool); // 0x16e2 ObjFunc
	goto Label_5854; // 0x16e4 Jump
	
Label_5861:
	var_865_object = Obj(); // 0x16e5 PushV
	var_865_object = var_782_object; // 0x16e6 Mov
	func_6856(); // 0x16e7 Call
	StopDialog(var_788_object); // 0x16e9 Func
	GetReturnValue(var_790_int); // 0x16eb ObjFunc
	var_781_int = var_790_int; // 0x16ed Mov
	return 8; // 0x16ee Return
}


func_180(var_2_object, var_50_string)
{
	var_51_bool = 0; // 0xb5 PushV
	func_7001(var_51_bool); // 0xb6 Call
	var_52_bool = var_51_bool == 0; // 0xb8 Not
	if(var_52_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_53_bool = var_50_string == var_2_object; // 0xbb Eq
	if(var_53_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_54_string = ""; // 0xbe PushV
	var_54_string = var_50_string; // 0xbf Mov
	func_6860(var_54_string); // 0xc0 Call
	var_2_object = var_50_string; // 0xc2 TMov
	return 0; // 0xc3 Return
}


func_8373(var_79_bool, var_80_object, var_81_int)
{
	var_82_object = Obj(); var_83_object = Obj(); var_84_int = 0; var_85_object = Obj(); var_86_object = Obj(); var_87_int = 0; // 0x20b5 PushV
	var_88_object = Obj(); // 0x20b6 PushV
	func_8360(var_88_object); // 0x20b7 Call
	var_85_object = var_88_object; // 0x20b8 Mov
	Find(var_81_int, var_86_object); // 0x20ba ObjFunc
	var_93_bool = var_86_object == 0; // 0x20bc Not
	if(var_93_bool == 0) goto Label_8388; // 0x20bd JumpB
	var_94_string = "Can't find diary parent with id: "; // 0x20be PushS
	var_95_int = var_94_string + var_81_int; // 0x20bf Add
	Trace(var_95_int); // 0x20c0 Func
	var_79_bool = 0; // 0x20c2 MovB
	return 6; // 0x20c3 Return
	
Label_8388:
	AddChild(var_80_object); // 0x20c4 ObjFunc
	var_96_string = "player_diary"; // 0x20c6 PushS
	var_97_int = 1; // 0x20c7 PushI
	SetVariable(var_96_string, var_97_int); // 0x20c8 Func
	GetCategory(var_87_int); // 0x20ca ObjFunc
	SetDiarySection(var_87_int); // 0x20cc Func
	var_79_bool = 0; // 0x20ce MovB
	return 6; // 0x20cf Return
}


func_7863(var_326_bool)
{
	var_326_bool = 1; // 0x1eb8 MovB
	return 0; // 0x1eb9 Return
}


func_7868(var_328_bool)
{
	var_330_int = 0; var_331_string = ""; // 0x1ebd PushV
	var_331_string = "d2q01BigVladVisit"; // 0x1ebe MovS
	func_6895(var_330_int, var_331_string); // 0x1ebf Call
	var_332_int = 1; // 0x1ec1 PushI
	var_333_bool = var_330_int == var_332_int; // 0x1ec2 Eq
	if(var_333_bool == 0) goto Label_7878; // 0x1ec3 JumpB
	var_328_bool = 1; // 0x1ec4 MovB
	return 0; // 0x1ec5 Return
	
Label_7878:
	var_328_bool = 0; // 0x1ec6 MovB
	return 0; // 0x1ec7 Return
}


func_3264(var_2_object, var_296_string)
{
	var_297_bool = 0; // 0xcc1 PushV
	func_7001(var_297_bool); // 0xcc2 Call
	var_298_bool = var_297_bool == 0; // 0xcc4 Not
	if(var_298_bool == 0) goto Label_3271; // 0xcc5 JumpB
	return 0; // 0xcc6 Return
	
Label_3271:
	var_299_bool = var_296_string == var_2_object; // 0xcc7 Eq
	if(var_299_bool == 0) goto Label_3274; // 0xcc8 JumpB
	return 0; // 0xcc9 Return
	
Label_3274:
	var_300_string = ""; // 0xcca PushV
	var_300_string = var_296_string; // 0xccb Mov
	func_6860(var_300_string); // 0xccc Call
	var_2_object = var_296_string; // 0xcce TMov
	return 0; // 0xccf Return
}


func_1732(var_2_object, var_168_string)
{
	var_169_bool = 0; // 0x6c5 PushV
	func_7001(var_169_bool); // 0x6c6 Call
	var_170_bool = var_169_bool == 0; // 0x6c8 Not
	if(var_170_bool == 0) goto Label_1739; // 0x6c9 JumpB
	return 0; // 0x6ca Return
	
Label_1739:
	var_171_bool = var_168_string == var_2_object; // 0x6cb Eq
	if(var_171_bool == 0) goto Label_1742; // 0x6cc JumpB
	return 0; // 0x6cd Return
	
Label_1742:
	var_172_string = ""; // 0x6ce PushV
	var_172_string = var_168_string; // 0x6cf Mov
	func_6860(var_172_string); // 0x6d0 Call
	var_2_object = var_168_string; // 0x6d2 TMov
	return 0; // 0x6d3 Return
}


func_7364()
{
	var_136_object = Obj(); var_137_string = ""; var_138_float = 0; // 0x1cc5 PushV
	var_139_object = Obj(); // 0x1cc6 PushV
	func_8402(var_139_object); // 0x1cc7 Call
	var_136_object = var_139_object; // 0x1cc8 Mov
	var_137_string = "pt_map_grif"; // 0x1cca MovS
	var_138_float = 2; // 0x1ccb MovI
	func_8419(var_136_object, var_137_string, var_138_float); // 0x1ccc Call
	var_159_object = Obj(); // 0x1cce PushV
	func_8402(var_159_object); // 0x1ccf Call
	ShowMap(var_159_object); // 0x1cd1 ObjFunc
	return 0; // 0x1cd3 Return
}


func_6856()
{
	CameraSwitchToNormal(); // 0x1ac9 Func
	return 0; // 0x1acb Return
}


func_7880(var_215_bool)
{
	var_217_int = 0; var_218_string = ""; // 0x1ec9 PushV
	var_218_string = "ood3Alexandr1"; // 0x1eca MovS
	func_6895(var_217_int, var_218_string); // 0x1ecb Call
	var_219_int = 0; // 0x1ecd PushI
	var_220_bool = var_217_int == var_219_int; // 0x1ece Eq
	if(var_220_bool == 0) goto Label_7890; // 0x1ecf JumpB
	var_215_bool = 1; // 0x1ed0 MovB
	return 0; // 0x1ed1 Return
	
Label_7890:
	var_215_bool = 0; // 0x1ed2 MovB
	return 0; // 0x1ed3 Return
}


func_6860(var_45_string)
{
	var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; // 0x1acc PushV
	var_50_string = "playing "; // 0x1acd PushS
	var_51_int = var_50_string + var_45_string; // 0x1ace Add
	Trace(var_51_int); // 0x1acf Func
	lshGetAnimTimes(var_45_string, var_48_float, var_49_float); // 0x1ad1 Func
	lshPlayAnimation(var_48_float, var_49_float); // 0x1ad3 Func
	var_52_string = "start: "; // 0x1ad5 PushS
	var_53_int = var_52_string + var_48_float; // 0x1ad6 Add
	Trace(var_53_int); // 0x1ad7 Func
	var_54_string = "end: "; // 0x1ad9 PushS
	var_55_int = var_54_string + var_49_float; // 0x1ada Add
	Trace(var_55_int); // 0x1adb Func
	return 4; // 0x1add Return
}


func_8402(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); // 0x20d2 PushV
	GetMainOutdoorScene(var_55_object); // 0x20d3 Func
	var_57_bool = var_55_object == 0; // 0x20d5 NullEq
	if(var_57_bool == 0) goto Label_8413; // 0x20d6 JumpB
	var_58_string = "Can't find main outdoor scene"; // 0x20d7 PushS
	Trace(var_58_string); // 0x20d8 Func
	var_56_object = 0; // 0x20da SetNull
	var_52_object = var_56_object; // 0x20db Mov
	return 4; // 0x20dc Return
	
Label_8413:
	GetMap(var_56_object); // 0x20dd ObjFunc
	var_52_object = var_56_object; // 0x20df Mov
	return 4; // 0x20e0 Return
}


func_7892(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x1ed5 PushV
	var_203_string = "ood3Alexandr2"; // 0x1ed6 MovS
	func_6895(var_202_int, var_203_string); // 0x1ed7 Call
	var_204_int = 0; // 0x1ed9 PushI
	var_205_bool = var_202_int == var_204_int; // 0x1eda Eq
	if(var_205_bool == 0) goto Label_7902; // 0x1edb JumpB
	var_200_bool = 1; // 0x1edc MovB
	return 0; // 0x1edd Return
	
Label_7902:
	var_200_bool = 0; // 0x1ede MovB
	return 0; // 0x1edf Return
}


func_7380()
{
	var_180_string = "ood4Alexandr2"; // 0x1cd5 PushS
	var_181_int = 1; // 0x1cd6 PushI
	SetVariable(var_180_string, var_181_int); // 0x1cd7 Func
	return 0; // 0x1cd9 Return
}


func_7386()
{
	var_184_object = Obj(); var_185_object = Obj(); // 0x1cda PushV
	var_186_string = "d4q03"; // 0x1cdb PushS
	var_187_int = 3; // 0x1cdc PushI
	SetVariable(var_186_string, var_187_int); // 0x1cdd Func
	var_188_object = Obj(); // 0x1cdf PushV
	func_8402(var_188_object); // 0x1ce0 Call
	var_185_object = var_188_object; // 0x1ce1 Mov
	var_189_string = "d4q03AlexandrAboutVolnica"; // 0x1ce3 PushS
	var_190_string = "pt_map_warehouse_gangster"; // 0x1ce4 PushS
	var_191_int = 0; // 0x1ce5 PushI
	var_192_int = 11494; // 0x1ce6 PushI
	var_193_float = 0; // 0x1ce7 PushV
	func_6960(var_193_float); // 0x1ce8 Call
	AddMark(var_189_string, var_190_string, var_191_int, var_192_int, var_193_float); // 0x1cea ObjFunc
	func_8581(); // 0x1ced Call
	return 2; // 0x1cef Return
}


func_6878()
{
	var_43_bool = 0; // 0x1ade PushV
	func_7001(var_43_bool); // 0x1adf Call
	if(var_43_bool == 0) goto Label_6884; // 0x1ae1 JumpB
	lshStopSpeech(); // 0x1ae2 Func
	
Label_6884:
	return 0; // 0x1ae4 Return
}


func_7904(var_224_bool)
{
	var_226_int = 0; var_227_string = ""; // 0x1ee1 PushV
	var_227_string = "ood3Alexandr3"; // 0x1ee2 MovS
	func_6895(var_226_int, var_227_string); // 0x1ee3 Call
	var_228_int = 0; // 0x1ee5 PushI
	var_229_bool = var_226_int == var_228_int; // 0x1ee6 Eq
	if(var_229_bool == 0) goto Label_7914; // 0x1ee7 JumpB
	var_224_bool = 1; // 0x1ee8 MovB
	return 0; // 0x1ee9 Return
	
Label_7914:
	var_224_bool = 0; // 0x1eea MovB
	return 0; // 0x1eeb Return
}


func_8419(var_136_object, var_137_string, var_138_float)
{
	var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_object = Obj(); var_143_bool = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_object = Obj(); var_147_bool = 0; // 0x20e3 PushV
	GetMainOutdoorScene(var_146_object); // 0x20e4 Func
	var_148_bool = var_146_object == 0; // 0x20e6 NullEq
	if(var_148_bool == 0) goto Label_8428; // 0x20e7 JumpB
	var_149_string = "Can't find main outdoor scene"; // 0x20e8 PushS
	Trace(var_149_string); // 0x20e9 Func
	return 8; // 0x20eb Return
	
Label_8428:
	GetLocator(var_137_string, var_147_bool, var_144_cvector, var_145_cvector); // 0x20ec ObjFunc
	var_150_bool = var_147_bool == 0; // 0x20ee Not
	if(var_150_bool == 0) goto Label_8438; // 0x20ef JumpB
	var_151_string = "Warning: outdoor scene locator "; // 0x20f0 PushS
	var_152_int = var_151_string + var_137_string; // 0x20f1 Add
	var_153_string = " doesnt exist"; // 0x20f2 PushS
	var_154_int = var_152_int + var_153_string; // 0x20f3 Add
	Trace(var_154_int); // 0x20f4 Func
	
Label_8438:
	GetMap(var_136_object); // 0x20f6 ObjFunc
	var_155_bool = var_136_object == 0; // 0x20f8 NullEq
	if(var_155_bool == 0) goto Label_8446; // 0x20f9 JumpB
	var_156_string = "Can't find map"; // 0x20fa PushS
	Trace(var_156_string); // 0x20fb Func
	return 8; // 0x20fd Return
	
Label_8446:
	var_157_float = GetByIndex(var_144_cvector, 0); // 0x20fe PushE
	var_158_float = GetByIndex(var_144_cvector, 2); // 0x20ff PushE
	SetMapParams(var_157_float, var_158_float, var_138_float); // 0x2100 ObjFunc
	return 8; // 0x2102 Return
}


func_6885(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x1ae5 PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x1ae6 Or
	var_84_float = sqrt(var_85_int); // 0x1ae7 Sqrt2
	var_86_float = 0.0; // 0x1ae8 PushF
	var_87_bool = var_84_float < var_86_float; // 0x1ae9 LT
	if(var_87_bool == 0) goto Label_6893; // 0x1aea JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x1aeb MovV
	return 2; // 0x1aec Return
	
Label_6893:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x1aed Div2
	return 2; // 0x1aee Return
}


func_7916(var_169_bool)
{
	var_171_int = 0; var_172_string = ""; // 0x1eed PushV
	var_172_string = "ood3Alexandr4"; // 0x1eee MovS
	func_6895(var_171_int, var_172_string); // 0x1eef Call
	var_173_int = 0; // 0x1ef1 PushI
	var_174_bool = var_171_int == var_173_int; // 0x1ef2 Eq
	if(var_174_bool == 0) goto Label_7926; // 0x1ef3 JumpB
	var_169_bool = 1; // 0x1ef4 MovB
	return 0; // 0x1ef5 Return
	
Label_7926:
	var_169_bool = 0; // 0x1ef6 MovB
	return 0; // 0x1ef7 Return
}


func_6895(var_75_int, var_76_string)
{
	var_77_int = 0; var_78_int = 0; // 0x1aef PushV
	GetVariable(var_76_string, var_78_int); // 0x1af0 Func
	var_75_int = var_78_int; // 0x1af2 Mov
	return 2; // 0x1af3 Return
}


func_5872(var_0_object, var_1_object, var_2_object, var_3_object, var_799_object, var_800_object)
{
	var_0_object = var_800_object; // 0x16f1 TMov
	var_1_object = var_799_object; // 0x16f2 TMov
	var_3_object = 0; // 0x16f3 TMovB
	var_805_int = 1; // 0x16f4 PushI
	if(var_805_int == 0) goto Label_5943; // 0x16f5 JumpB
	var_806_string = ""; // 0x16f6 PushV
	var_806_string = "Neutral"; // 0x16f7 MovS
	func_5973(var_800_object, var_806_string); // 0x16f8 Call
	var_811_int = 11591; // 0x16fa PushI
	SetMessage(var_811_int); // 0x16fb TObjFunc
	ClearReplies(); // 0x16fd TObjFunc
	var_812_bool = 0; var_813_object = Obj(); // 0x16ff PushV
	var_813_object = var_1_object; // 0x1700 MovT
	func_8056(var_813_object); // 0x1701 Call
	if(var_812_bool == 0) goto Label_5897; // 0x1703 JumpB
	var_818_int = 11592; // 0x1704 PushI
	var_819_int = 12788; // 0x1705 PushI
	var_820_int = 12787; // 0x1706 PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0x1707 TObjFunc
	
Label_5897:
	var_821_bool = 0; // 0x1709 PushV
	var_821_bool = 0; // 0x170a MovB
	var_822_bool = 0; var_823_object = Obj(); // 0x170b PushV
	var_823_object = var_1_object; // 0x170c MovT
	func_8085(var_823_object); // 0x170d Call
	if(var_822_bool == 0) goto Label_5910; // 0x170f JumpB
	var_828_bool = 0; var_829_object = Obj(); // 0x1710 PushV
	var_829_object = var_1_object; // 0x1711 MovT
	func_8109(var_829_object); // 0x1712 Call
	if(var_828_bool == 0) goto Label_5910; // 0x1714 JumpB
	var_821_bool = 1; // 0x1715 MovB
	
Label_5910:
	if(var_821_bool == 0) goto Label_5916; // 0x1716 JumpB
	var_834_int = 11611; // 0x1717 PushI
	var_835_int = 12810; // 0x1718 PushI
	var_836_int = 12809; // 0x1719 PushI
	AddReply(var_834_int, var_835_int, var_836_int); // 0x171a TObjFunc
	
Label_5916:
	var_837_bool = 0; // 0x171c PushV
	var_837_bool = 0; // 0x171d MovB
	var_838_bool = 0; var_839_object = Obj(); // 0x171e PushV
	var_839_object = var_1_object; // 0x171f MovT
	func_8097(var_839_object); // 0x1720 Call
	if(var_838_bool == 0) goto Label_5929; // 0x1722 JumpB
	var_844_bool = 0; var_845_object = Obj(); // 0x1723 PushV
	var_845_object = var_1_object; // 0x1724 MovT
	func_8121(var_845_object); // 0x1725 Call
	if(var_844_bool == 0) goto Label_5929; // 0x1727 JumpB
	var_837_bool = 1; // 0x1728 MovB
	
Label_5929:
	if(var_837_bool == 0) goto Label_5935; // 0x1729 JumpB
	var_850_int = 11624; // 0x172a PushI
	var_851_int = 12823; // 0x172b PushI
	var_852_int = 12822; // 0x172c PushI
	AddReply(var_850_int, var_851_int, var_852_int); // 0x172d TObjFunc
	
Label_5935:
	var_853_int = 11635; // 0x172f PushI
	var_854_int = -1; // 0x1730 PushI
	var_855_int = 12834; // 0x1731 PushI
	AddReply(var_853_int, var_854_int, var_855_int); // 0x1732 TObjFunc
	goto Label_5943; // 0x1734 Jump
	
Label_5943:
	var_856_bool = 0; // 0x1737 PushV
	func_7001(var_856_bool); // 0x1738 Call
	if(var_856_bool == 0) goto Label_5958; // 0x173a JumpB
	
Label_5947:
	lshWaitForAnimEnd(); // 0x173b Func
	var_857_object = var_3_object; // 0x173d PushT
	if(var_857_object == 0) goto Label_5952; // 0x173e JumpB
	goto Label_5957; // 0x173f Jump
	
Label_5957:
	goto Label_5972; // 0x1745 Jump
	
Label_5972:
	return 0; // 0x1754 Return
	
Label_5952:
	var_858_string = ""; // 0x1740 PushV
	var_858_string = var_2_object; // 0x1741 MovT
	func_6860(var_858_string); // 0x1742 Call
	goto Label_5947; // 0x1744 Jump
	
Label_5958:
	var_859_string = "all"; // 0x1746 PushS
	var_860_string = "idle"; // 0x1747 PushS
	PlayAnimation(var_859_string, var_860_string); // 0x1748 Func
	
Label_5962:
	WaitForAnimEnd(); // 0x174a Func
	var_861_object = var_3_object; // 0x174c PushT
	if(var_861_object == 0) goto Label_5967; // 0x174d JumpB
	goto Label_5972; // 0x174e Jump
	
Label_5967:
	var_862_string = "all"; // 0x174f PushS
	var_863_string = "idle"; // 0x1750 PushS
	PlayAnimation(var_862_string, var_863_string); // 0x1751 Func
	goto Label_5962; // 0x1753 Jump
}


func_7409()
{
	var_239_object = Obj(); var_240_object = Obj(); var_241_object = Obj(); var_242_object = Obj(); // 0x1cf1 PushV
	var_243_object = Obj(); // 0x1cf2 PushV
	func_8402(var_243_object); // 0x1cf3 Call
	var_241_object = var_243_object; // 0x1cf4 Mov
	var_244_string = "d4q03AlexandrAboutVolnica"; // 0x1cf6 PushS
	FindMark(var_242_object, var_244_string); // 0x1cf7 ObjFunc
	var_245_object = var_242_object; // 0x1cf9 Push
	if(var_245_object == 0) goto Label_7421; // 0x1cfa JumpB
	Remove(); // 0x1cfb ObjFunc
	
Label_7421:
	var_246_string = "d4q03AlexandrGotoGrif"; // 0x1cfd PushS
	FindMark(var_242_object, var_246_string); // 0x1cfe ObjFunc
	var_247_object = var_242_object; // 0x1d00 Push
	if(var_247_object == 0) goto Label_7428; // 0x1d01 JumpB
	Remove(); // 0x1d02 ObjFunc
	
Label_7428:
	var_248_string = "d4q03AlexandrGotoGrifSelf"; // 0x1d04 PushS
	FindMark(var_242_object, var_248_string); // 0x1d05 ObjFunc
	var_249_object = var_242_object; // 0x1d07 Push
	if(var_249_object == 0) goto Label_7435; // 0x1d08 JumpB
	Remove(); // 0x1d09 ObjFunc
	
Label_7435:
	var_250_string = "d4q03GrifGotoAlexandr"; // 0x1d0b PushS
	FindMark(var_242_object, var_250_string); // 0x1d0c ObjFunc
	var_251_object = var_242_object; // 0x1d0e Push
	if(var_251_object == 0) goto Label_7442; // 0x1d0f JumpB
	Remove(); // 0x1d10 ObjFunc
	
Label_7442:
	var_252_string = "d4q03GrifGotoAlexandrSelf"; // 0x1d12 PushS
	FindMark(var_242_object, var_252_string); // 0x1d13 ObjFunc
	var_253_object = var_242_object; // 0x1d15 Push
	if(var_253_object == 0) goto Label_7449; // 0x1d16 JumpB
	Remove(); // 0x1d17 ObjFunc
	
Label_7449:
	func_8597(); // 0x1d1a Call
	var_263_bool = 0; var_264_string = ""; var_265_string = ""; // 0x1d1c PushV
	var_264_string = "quest_d4_03"; // 0x1d1d MovS
	var_265_string = "completed"; // 0x1d1e MovS
	func_6948(var_263_bool, var_264_string, var_265_string); // 0x1d1f Call
	return 4; // 0x1d21 Return
}


func_6900(var_104_object, var_105_string)
{
	var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj(); var_109_object = Obj(); // 0x1af4 PushV
	GetMainOutdoorScene(var_108_object); // 0x1af5 Func
	var_110_string = ".bin"; // 0x1af7 PushS
	var_111_int = var_105_string + var_110_string; // 0x1af8 Add
	AddBlankActor(var_109_object, var_108_object, var_105_string, var_111_int); // 0x1af9 Func
	var_104_object = var_109_object; // 0x1afb Mov
	return 4; // 0x1afc Return
}


func_7928(var_161_bool)
{
	var_163_int = 0; var_164_string = ""; // 0x1ef9 PushV
	var_164_string = "d3q01"; // 0x1efa MovS
	func_6895(var_163_int, var_164_string); // 0x1efb Call
	var_167_int = 8; // 0x1efd PushI
	var_168_bool = var_163_int == var_167_int; // 0x1efe Eq
	if(var_168_bool == 0) goto Label_7938; // 0x1eff JumpB
	var_161_bool = 1; // 0x1f00 MovB
	return 0; // 0x1f01 Return
	
Label_7938:
	var_161_bool = 0; // 0x1f02 MovB
	return 0; // 0x1f03 Return
}


func_6911(var_107_object, var_108_string)
{
	var_109_object = Obj(); var_110_object = Obj(); var_111_object = Obj(); var_112_object = Obj(); // 0x1aff PushV
	GetMainOutdoorScene(var_111_object); // 0x1b00 Func
	var_113_string = ".xml"; // 0x1b02 PushS
	var_114_int = var_108_string + var_113_string; // 0x1b03 Add
	AddBlankActorFromXml(var_112_object, var_111_object, var_108_string, var_114_int); // 0x1b04 Func
	var_107_object = var_112_object; // 0x1b06 Mov
	return 4; // 0x1b07 Return
}


func_8452(var_98_int)
{
	var_99_int = 0; var_100_int = 0; // 0x2104 PushV
	var_101_string = "player"; // 0x2105 PushS
	GetVariable(var_101_string, var_100_int); // 0x2106 Func
	var_102_int = 0; // 0x2108 PushI
	var_103_bool = var_100_int == var_102_int; // 0x2109 Eq
	if(var_103_bool == 0) goto Label_8462; // 0x210a JumpB
	var_98_int = 200001; // 0x210b MovI
	return 2; // 0x210c Return
	
Label_8462:
	var_104_int = 1; // 0x210e PushI
	var_105_bool = var_100_int == var_104_int; // 0x210f Eq
	if(var_105_bool == 0) goto Label_8467; // 0x2110 JumpB
	var_98_int = 200002; // 0x2111 MovI
	return 2; // 0x2112 Return
	
Label_8467:
	var_98_int = 200003; // 0x2113 MovI
	return 2; // 0x2114 Return
}


func_7940(var_390_bool)
{
	var_392_int = 0; var_393_string = ""; // 0x1f05 PushV
	var_393_string = "KnowRubin"; // 0x1f06 MovS
	func_6895(var_392_int, var_393_string); // 0x1f07 Call
	var_394_int = 1; // 0x1f09 PushI
	var_395_bool = var_392_int == var_394_int; // 0x1f0a Eq
	if(var_395_bool == 0) goto Label_7950; // 0x1f0b JumpB
	var_390_bool = 1; // 0x1f0c MovB
	return 0; // 0x1f0d Return
	
Label_7950:
	var_390_bool = 0; // 0x1f0e MovB
	return 0; // 0x1f0f Return
}


func_6922(var_124_object, var_125_int)
{
	var_126_int = 0; var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_int = 0; var_131_bool = 0; // 0x1b0a PushV
	GetItemID(var_129_int); // 0x1b0b ObjFunc
	var_132_string = "Category"; // 0x1b0d PushS
	GetInvItemProperty(var_130_int, var_129_int, var_132_string); // 0x1b0e Func
	AddItem(var_131_bool, var_124_object, var_130_int, var_125_int); // 0x1b10 ObjFunc
	var_133_bool = var_131_bool == 0; // 0x1b12 Not
	if(var_133_bool == 0) goto Label_6934; // 0x1b13 JumpB
	DropItems(var_124_object, var_125_int); // 0x1b14 ObjFunc
	
Label_6934:
	return 6; // 0x1b16 Return
}


func_271(var_0_object, var_868_int, var_869_object)
{
	var_871_object = Obj(); var_872_bool = 0; var_873_int = 0; var_874_bool = 0; var_875_object = Obj(); var_876_bool = 0; var_877_int = 0; var_878_bool = 0; // 0x10f PushV
	var_0_object = var_869_object; // 0x110 TMov
	var_879_bool = 0; var_880_object = Obj(); // 0x111 PushV
	var_880_object = var_869_object; // 0x112 Mov
	func_6800(var_880_object); // 0x113 Call
	var_881_bool = var_879_bool == 0; // 0x115 Not
	if(var_881_bool == 0) goto Label_281; // 0x116 JumpB
	var_868_int = -2; // 0x117 MovI
	return 8; // 0x118 Return
	
Label_281:
	CreateDialog(var_875_object); // 0x119 Func
	var_882_int = 0; // 0x11b PushV
	func_6997(var_882_int); // 0x11c Call
	SetNPCName(var_882_int); // 0x11e ObjFunc
	var_883_string = ""; // 0x120 PushV
	func_6999(var_883_string); // 0x121 Call
	SetPhoto(var_883_string); // 0x123 ObjFunc
	var_884_int = 0; // 0x125 PushV
	func_8452(var_884_int); // 0x126 Call
	SetPlayerName(var_884_int); // 0x128 ObjFunc
	var_877_int = -1; // 0x12a MovI
	IsOverrideActive(var_876_bool); // 0x12b Func
	var_885_bool = var_876_bool; // 0x12d Push
	if(var_885_bool == 0) goto Label_305; // 0x12e JumpB
	var_868_int = -2; // 0x12f MovI
	return 8; // 0x130 Return
	
Label_305:
	DoDialog(var_875_object); // 0x131 Func
	var_886_object = Obj(); var_887_object = Obj(); // 0x133 PushV
	var_886_object = var_869_object; // 0x134 Mov
	var_887_object = var_875_object; // 0x135 Mov
	TaskCall(5); // 0x136 TaskCall
	func_334(var_888_object, var_889_object, var_890_string, var_891_bool, var_886_object, var_887_object); // 0x137 Call
	TaskReturn(); // 0x138 TaskReturn
	IsDialogEnd(var_878_bool); // 0x13a ObjFunc
	
Label_316:
	var_979_bool = var_878_bool == 0; // 0x13c Not
	if(var_979_bool == 0) goto Label_323; // 0x13d JumpB
	sync(); // 0x13e Func
	IsDialogEnd(var_878_bool); // 0x140 ObjFunc
	goto Label_316; // 0x142 Jump
	
Label_323:
	var_980_object = Obj(); // 0x143 PushV
	var_980_object = var_869_object; // 0x144 Mov
	func_6856(); // 0x145 Call
	StopDialog(var_875_object); // 0x147 Func
	GetReturnValue(var_877_int); // 0x149 ObjFunc
	var_868_int = var_877_int; // 0x14b Mov
	return 8; // 0x14c Return
}


func_7952(var_206_bool)
{
	var_208_int = 0; var_209_string = ""; // 0x1f11 PushV
	var_209_string = "d3q01"; // 0x1f12 MovS
	func_6895(var_208_int, var_209_string); // 0x1f13 Call
	var_210_int = 1; // 0x1f15 PushI
	var_211_bool = var_208_int == var_210_int; // 0x1f16 Eq
	if(var_211_bool == 0) goto Label_7962; // 0x1f17 JumpB
	var_206_bool = 1; // 0x1f18 MovB
	return 0; // 0x1f19 Return
	
Label_7962:
	var_206_bool = 0; // 0x1f1a MovB
	return 0; // 0x1f1b Return
}


func_8469()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x2115 PushV
	var_72_string = "Adding diary entry"; // 0x2116 PushS
	Trace(var_72_string); // 0x2117 Func
	var_73_int = 10; // 0x2119 PushI
	var_74_int = 1; // 0x211a PushI
	var_75_int = 3081; // 0x211b PushI
	CreateDiaryEntry(var_71_object, var_73_int, var_74_int, var_75_int); // 0x211c Func
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0; // 0x211e PushV
	var_77_object = var_71_object; // 0x211f Mov
	var_78_int = -1; // 0x2120 MovI
	func_8373(var_76_bool, var_77_object, var_78_int); // 0x2121 Call
	return 2; // 0x2123 Return
}


func_1301(var_0_object, var_162_int, var_163_object)
{
	var_165_object = Obj(); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; var_169_object = Obj(); var_170_bool = 0; var_171_int = 0; var_172_bool = 0; // 0x515 PushV
	var_0_object = var_163_object; // 0x516 TMov
	var_173_bool = 0; var_174_object = Obj(); // 0x517 PushV
	var_174_object = var_163_object; // 0x518 Mov
	func_6800(var_174_object); // 0x519 Call
	var_175_bool = var_173_bool == 0; // 0x51b Not
	if(var_175_bool == 0) goto Label_1311; // 0x51c JumpB
	var_162_int = -2; // 0x51d MovI
	return 8; // 0x51e Return
	
Label_1311:
	CreateDialog(var_169_object); // 0x51f Func
	var_176_int = 0; // 0x521 PushV
	func_6997(var_176_int); // 0x522 Call
	SetNPCName(var_176_int); // 0x524 ObjFunc
	var_177_string = ""; // 0x526 PushV
	func_6999(var_177_string); // 0x527 Call
	SetPhoto(var_177_string); // 0x529 ObjFunc
	var_178_int = 0; // 0x52b PushV
	func_8452(var_178_int); // 0x52c Call
	SetPlayerName(var_178_int); // 0x52e ObjFunc
	var_171_int = -1; // 0x530 MovI
	IsOverrideActive(var_170_bool); // 0x531 Func
	var_179_bool = var_170_bool; // 0x533 Push
	if(var_179_bool == 0) goto Label_1335; // 0x534 JumpB
	var_162_int = -2; // 0x535 MovI
	return 8; // 0x536 Return
	
Label_1335:
	DoDialog(var_169_object); // 0x537 Func
	var_180_object = Obj(); var_181_object = Obj(); // 0x539 PushV
	var_180_object = var_163_object; // 0x53a Mov
	var_181_object = var_169_object; // 0x53b Mov
	TaskCall(7); // 0x53c TaskCall
	func_1364(var_182_object, var_183_object, var_184_string, var_185_bool, var_180_object, var_181_object); // 0x53d Call
	TaskReturn(); // 0x53e TaskReturn
	IsDialogEnd(var_172_bool); // 0x540 ObjFunc
	
Label_1346:
	var_433_bool = var_172_bool == 0; // 0x542 Not
	if(var_433_bool == 0) goto Label_1353; // 0x543 JumpB
	sync(); // 0x544 Func
	IsDialogEnd(var_172_bool); // 0x546 ObjFunc
	goto Label_1346; // 0x548 Jump
	
Label_1353:
	var_434_object = Obj(); // 0x549 PushV
	var_434_object = var_163_object; // 0x54a Mov
	func_6856(); // 0x54b Call
	StopDialog(var_169_object); // 0x54d Func
	GetReturnValue(var_171_int); // 0x54f ObjFunc
	var_162_int = var_171_int; // 0x551 Mov
	return 8; // 0x552 Return
}


func_6935(var_118_object, var_119_string, var_120_int)
{
	var_121_object = Obj(); var_122_object = Obj(); // 0x1b17 PushV
	CreateInvItem(var_122_object); // 0x1b18 Func
	SetItemName(var_119_string); // 0x1b1a ObjFunc
	var_123_object = Obj(); var_124_object = Obj(); var_125_int = 0; // 0x1b1c PushV
	var_123_object = var_118_object; // 0x1b1d Mov
	var_124_object = var_122_object; // 0x1b1e Mov
	var_125_int = var_120_int; // 0x1b1f Mov
	func_6922(var_124_object, var_125_int); // 0x1b20 Call
	return 2; // 0x1b22 Return
}


func_7964(var_211_bool, var_212_object)
{
	var_213_bool = 0; var_214_object = Obj(); // 0x1f1d PushV
	var_214_object = var_212_object; // 0x1f1e Mov
	func_8328(var_214_object); // 0x1f1f Call
	if(var_213_bool == 0) goto Label_7972; // 0x1f21 JumpB
	var_211_bool = 1; // 0x1f22 MovB
	return 0; // 0x1f23 Return
	
Label_7972:
	var_211_bool = 0; // 0x1f24 MovB
	return 0; // 0x1f25 Return
}


func_7460()
{
	var_205_object = Obj(); var_206_string = ""; var_207_float = 0; // 0x1d25 PushV
	var_208_object = Obj(); // 0x1d26 PushV
	func_8402(var_208_object); // 0x1d27 Call
	var_205_object = var_208_object; // 0x1d28 Mov
	var_206_string = "pt_map_warehouse_gangster"; // 0x1d2a MovS
	var_207_float = 2; // 0x1d2b MovI
	func_8419(var_205_object, var_206_string, var_207_float); // 0x1d2c Call
	var_209_object = Obj(); // 0x1d2e PushV
	func_8402(var_209_object); // 0x1d2f Call
	ShowMap(var_209_object); // 0x1d31 ObjFunc
	return 0; // 0x1d33 Return
}


func_8485()
{
	var_95_object = Obj(); var_96_object = Obj(); // 0x2125 PushV
	var_97_string = "Adding diary entry"; // 0x2126 PushS
	Trace(var_97_string); // 0x2127 Func
	var_98_int = 50; // 0x2129 PushI
	var_99_int = 1; // 0x212a PushI
	var_100_int = 12132; // 0x212b PushI
	CreateDiaryEntry(var_96_object, var_98_int, var_99_int, var_100_int); // 0x212c Func
	var_101_bool = 0; var_102_object = Obj(); var_103_int = 0; // 0x212e PushV
	var_102_object = var_96_object; // 0x212f Mov
	var_103_int = 10; // 0x2130 MovI
	func_8373(var_101_bool, var_102_object, var_103_int); // 0x2131 Call
	return 2; // 0x2133 Return
}


func_7974(var_271_bool)
{
	var_273_int = 0; var_274_string = ""; // 0x1f27 PushV
	var_274_string = "ood4Alexandr1"; // 0x1f28 MovS
	func_6895(var_273_int, var_274_string); // 0x1f29 Call
	var_277_int = 0; // 0x1f2b PushI
	var_278_bool = var_273_int == var_277_int; // 0x1f2c Eq
	if(var_278_bool == 0) goto Label_7984; // 0x1f2d JumpB
	var_271_bool = 1; // 0x1f2e MovB
	return 0; // 0x1f2f Return
	
Label_7984:
	var_271_bool = 0; // 0x1f30 MovB
	return 0; // 0x1f31 Return
}


func_6948(var_263_bool, var_264_string, var_265_string)
{
	var_266_object = Obj(); var_267_object = Obj(); // 0x1b24 PushV
	FindActor(var_267_object, var_264_string); // 0x1b25 Func
	var_268_bool = var_267_object == 0; // 0x1b27 NullEq
	if(var_268_bool == 0) goto Label_6955; // 0x1b28 JumpB
	var_263_bool = 0; // 0x1b29 MovB
	return 2; // 0x1b2a Return
	
Label_6955:
	Trigger(var_267_object, var_265_string); // 0x1b2b Func
	var_263_bool = 1; // 0x1b2d MovB
	return 2; // 0x1b2e Return
}


func_6960(var_63_float)
{
	var_64_float = 0; var_65_float = 0; // 0x1b30 PushV
	GetGameTime(var_65_float); // 0x1b31 Func
	var_63_float = var_65_float; // 0x1b33 Mov
	return 2; // 0x1b34 Return
}


func_7986(var_303_bool)
{
	var_305_int = 0; var_306_string = ""; // 0x1f33 PushV
	var_306_string = "d4q03"; // 0x1f34 MovS
	func_6895(var_305_int, var_306_string); // 0x1f35 Call
	var_307_int = 0; // 0x1f37 PushI
	var_308_bool = var_305_int == var_307_int; // 0x1f38 Eq
	if(var_308_bool == 0) goto Label_7996; // 0x1f39 JumpB
	var_303_bool = 1; // 0x1f3a MovB
	return 0; // 0x1f3b Return
	
Label_7996:
	var_303_bool = 0; // 0x1f3c MovB
	return 0; // 0x1f3d Return
}


func_7476(var_115_object)
{
	var_117_string = "revolver ammo6 is given"; // 0x1d35 PushS
	Trace(var_117_string); // 0x1d36 Func
	var_118_object = Obj(); var_119_string = ""; var_120_int = 0; // 0x1d38 PushV
	var_118_object = var_115_object; // 0x1d39 Mov
	var_119_string = "revolver_ammo"; // 0x1d3a MovS
	var_120_int = 6; // 0x1d3b MovI
	func_6935(var_118_object, var_119_string, var_120_int); // 0x1d3c Call
	return 0; // 0x1d3e Return
}


func_6965(var_156_int)
{
	var_157_float = 0; var_158_float = 0; // 0x1b35 PushV
	GetGameTime(var_158_float); // 0x1b36 Func
	var_159_int = 1; // 0x1b38 PushI
	var_160_int = 0; // 0x1b39 PushV
	var_161_int = 24; // 0x1b3a PushI
	var_160_int = var_158_float / var_158_float; // 0x1b3b Div2
	var_156_int = var_159_int + var_160_int; // 0x1b3c Add2
	return 2; // 0x1b3d Return
}


func_8501()
{
	var_193_object = Obj(); var_194_object = Obj(); // 0x2135 PushV
	var_195_string = "Adding diary entry"; // 0x2136 PushS
	Trace(var_195_string); // 0x2137 Func
	var_196_int = 55; // 0x2139 PushI
	var_197_int = 1; // 0x213a PushI
	var_198_int = 12137; // 0x213b PushI
	CreateDiaryEntry(var_194_object, var_196_int, var_197_int, var_198_int); // 0x213c Func
	var_199_bool = 0; var_200_object = Obj(); var_201_int = 0; // 0x213e PushV
	var_200_object = var_194_object; // 0x213f Mov
	var_201_int = 10; // 0x2140 MovI
	func_8373(var_199_bool, var_200_object, var_201_int); // 0x2141 Call
	return 2; // 0x2143 Return
}


func_4409(var_2_object, var_175_string)
{
	var_176_bool = 0; // 0x113a PushV
	func_7001(var_176_bool); // 0x113b Call
	var_177_bool = var_176_bool == 0; // 0x113d Not
	if(var_177_bool == 0) goto Label_4416; // 0x113e JumpB
	return 0; // 0x113f Return
	
Label_4416:
	var_178_bool = var_175_string == var_2_object; // 0x1140 Eq
	if(var_178_bool == 0) goto Label_4419; // 0x1141 JumpB
	return 0; // 0x1142 Return
	
Label_4419:
	var_179_string = ""; // 0x1143 PushV
	var_179_string = var_175_string; // 0x1144 Mov
	func_6860(var_179_string); // 0x1145 Call
	var_2_object = var_175_string; // 0x1147 TMov
	return 0; // 0x1148 Return
}


func_6458(var_0_object, var_983_int, var_984_object)
{
	var_986_object = Obj(); var_987_bool = 0; var_988_int = 0; var_989_bool = 0; var_990_object = Obj(); var_991_bool = 0; var_992_int = 0; var_993_bool = 0; // 0x193a PushV
	var_0_object = var_984_object; // 0x193b TMov
	var_994_bool = 0; var_995_object = Obj(); // 0x193c PushV
	var_995_object = var_984_object; // 0x193d Mov
	func_6800(var_995_object); // 0x193e Call
	var_996_bool = var_994_bool == 0; // 0x1940 Not
	if(var_996_bool == 0) goto Label_6468; // 0x1941 JumpB
	var_983_int = -2; // 0x1942 MovI
	return 8; // 0x1943 Return
	
Label_6468:
	CreateDialog(var_990_object); // 0x1944 Func
	var_997_int = 0; // 0x1946 PushV
	func_6997(var_997_int); // 0x1947 Call
	SetNPCName(var_997_int); // 0x1949 ObjFunc
	var_998_string = ""; // 0x194b PushV
	func_6999(var_998_string); // 0x194c Call
	SetPhoto(var_998_string); // 0x194e ObjFunc
	var_999_int = 0; // 0x1950 PushV
	func_8452(var_999_int); // 0x1951 Call
	SetPlayerName(var_999_int); // 0x1953 ObjFunc
	var_992_int = -1; // 0x1955 MovI
	IsOverrideActive(var_991_bool); // 0x1956 Func
	var_1000_bool = var_991_bool; // 0x1958 Push
	if(var_1000_bool == 0) goto Label_6492; // 0x1959 JumpB
	var_983_int = -2; // 0x195a MovI
	return 8; // 0x195b Return
	
Label_6492:
	DoDialog(var_990_object); // 0x195c Func
	var_1001_object = Obj(); var_1002_object = Obj(); // 0x195e PushV
	var_1001_object = var_984_object; // 0x195f Mov
	var_1002_object = var_990_object; // 0x1960 Mov
	TaskCall(17); // 0x1961 TaskCall
	func_6521(var_1003_object, var_1004_object, var_1005_string, var_1006_bool, var_1001_object, var_1002_object); // 0x1962 Call
	TaskReturn(); // 0x1963 TaskReturn
	IsDialogEnd(var_993_bool); // 0x1965 ObjFunc
	
Label_6503:
	var_1041_bool = var_993_bool == 0; // 0x1967 Not
	if(var_1041_bool == 0) goto Label_6510; // 0x1968 JumpB
	sync(); // 0x1969 Func
	IsDialogEnd(var_993_bool); // 0x196b ObjFunc
	goto Label_6503; // 0x196d Jump
	
Label_6510:
	var_1042_object = Obj(); // 0x196e PushV
	var_1042_object = var_984_object; // 0x196f Mov
	func_6856(); // 0x1970 Call
	StopDialog(var_990_object); // 0x1972 Func
	GetReturnValue(var_992_int); // 0x1974 ObjFunc
	var_983_int = var_992_int; // 0x1976 Mov
	return 8; // 0x1977 Return
}


func_7998(var_313_bool)
{
	var_315_int = 0; var_316_string = ""; // 0x1f3f PushV
	var_316_string = "ood4Alexandr2"; // 0x1f40 MovS
	func_6895(var_315_int, var_316_string); // 0x1f41 Call
	var_317_int = 0; // 0x1f43 PushI
	var_318_bool = var_315_int == var_317_int; // 0x1f44 Eq
	if(var_318_bool == 0) goto Label_8008; // 0x1f45 JumpB
	var_313_bool = 1; // 0x1f46 MovB
	return 0; // 0x1f47 Return
	
Label_8008:
	var_313_bool = 0; // 0x1f48 MovB
	return 0; // 0x1f49 Return
}


func_7487()
{
	var_222_string = "ood4Alexandr3"; // 0x1d40 PushS
	var_223_int = 1; // 0x1d41 PushI
	SetVariable(var_222_string, var_223_int); // 0x1d42 Func
	return 0; // 0x1d44 Return
}


func_6974(var_215_int)
{
	var_216_float = 0; var_217_float = 0; // 0x1b3e PushV
	GetGameTime(var_217_float); // 0x1b3f Func
	var_218_int = 0; // 0x1b41 PushV
	var_218_int = var_217_float; // 0x1b42 Mov
	var_219_int = 24; // 0x1b43 PushI
	var_215_int = var_218_int % var_219_int; // 0x1b44 Mod2
	return 2; // 0x1b45 Return
}


func_7493()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x1d45 PushV
	var_50_string = "d5q01"; // 0x1d46 PushS
	var_51_int = 3; // 0x1d47 PushI
	SetVariable(var_50_string, var_51_int); // 0x1d48 Func
	var_52_object = Obj(); // 0x1d4a PushV
	func_8402(var_52_object); // 0x1d4b Call
	var_49_object = var_52_object; // 0x1d4c Mov
	var_59_string = "d5q01AlexandrGotoKaterina"; // 0x1d4e PushS
	var_60_string = "pt_map_katerina"; // 0x1d4f PushS
	var_61_int = 1; // 0x1d50 PushI
	var_62_int = 11958; // 0x1d51 PushI
	var_63_float = 0; // 0x1d52 PushV
	func_6960(var_63_float); // 0x1d53 Call
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0x1d55 ObjFunc
	return 2; // 0x1d57 Return
}


func_8517()
{
	var_162_object = Obj(); var_163_object = Obj(); // 0x2145 PushV
	var_164_string = "Adding diary entry"; // 0x2146 PushS
	Trace(var_164_string); // 0x2147 Func
	var_165_int = 56; // 0x2149 PushI
	var_166_int = 1; // 0x214a PushI
	var_167_int = 12138; // 0x214b PushI
	CreateDiaryEntry(var_163_object, var_165_int, var_166_int, var_167_int); // 0x214c Func
	var_168_bool = 0; var_169_object = Obj(); var_170_int = 0; // 0x214e PushV
	var_169_object = var_163_object; // 0x214f Mov
	var_170_int = 10; // 0x2150 MovI
	func_8373(var_168_bool, var_169_object, var_170_int); // 0x2151 Call
	return 2; // 0x2153 Return
}


func_6982(var_154_bool, var_155_int)
{
	var_156_int = 0; // 0x1b47 PushV
	func_6965(var_156_int); // 0x1b48 Call
	var_154_bool = var_156_int == var_155_int; // 0x1b4a Eq2
	return 0; // 0x1b4b Return
}


func_8010(var_319_bool)
{
	var_321_int = 0; var_322_string = ""; // 0x1f4b PushV
	var_322_string = "d4q03"; // 0x1f4c MovS
	func_6895(var_321_int, var_322_string); // 0x1f4d Call
	var_323_int = 2; // 0x1f4f PushI
	var_324_bool = var_321_int == var_323_int; // 0x1f50 Eq
	if(var_324_bool == 0) goto Label_8020; // 0x1f51 JumpB
	var_319_bool = 1; // 0x1f52 MovB
	return 0; // 0x1f53 Return
	
Label_8020:
	var_319_bool = 0; // 0x1f54 MovB
	return 0; // 0x1f55 Return
}


func_6988(var_1043_bool)
{
	var_1044_bool = 0; var_1045_bool = 0; // 0x1b4c PushV
	var_1046_string = ""; // 0x1b4d PushV
	var_1046_string = "No"; // 0x1b4e MovS
	func_6860(var_1046_string); // 0x1b4f Call
	lshWaitForAnimEnd(var_1045_bool); // 0x1b51 Func
	var_1043_bool = var_1045_bool; // 0x1b53 Mov
	return 2; // 0x1b54 Return
}


func_334(var_0_object, var_1_object, var_2_object, var_3_object, var_886_object, var_887_object)
{
	var_0_object = var_887_object; // 0x14f TMov
	var_1_object = var_886_object; // 0x150 TMov
	var_3_object = 0; // 0x151 TMovB
	var_892_int = 1; // 0x152 PushI
	if(var_892_int == 0) goto Label_453; // 0x153 JumpB
	var_893_bool = 0; // 0x154 PushV
	var_893_bool = 0; // 0x155 MovB
	var_894_bool = 0; var_895_object = Obj(); // 0x156 PushV
	var_895_object = var_1_object; // 0x157 MovT
	func_8133(var_895_object); // 0x158 Call
	if(var_894_bool == 0) goto Label_353; // 0x15a JumpB
	var_900_bool = 0; var_901_object = Obj(); // 0x15b PushV
	var_901_object = var_1_object; // 0x15c MovT
	func_8145(var_901_object); // 0x15d Call
	if(var_900_bool == 0) goto Label_353; // 0x15f JumpB
	var_893_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_893_bool == 0) goto Label_379; // 0x161 JumpB
	var_906_object = Obj(); var_907_object = Obj(); // 0x162 PushV
	var_906_object = var_1_object; // 0x163 MovT
	var_907_object = var_0_object; // 0x164 MovT
	func_7527(); // 0x165 Call
	var_910_string = ""; // 0x167 PushV
	var_910_string = "Neutral"; // 0x168 MovS
	func_483(var_887_object, var_910_string); // 0x169 Call
	var_915_int = 12650; // 0x16b PushI
	SetMessage(var_915_int); // 0x16c TObjFunc
	ClearReplies(); // 0x16e TObjFunc
	var_916_int = 10633; // 0x170 PushI
	var_917_int = 13839; // 0x171 PushI
	var_918_int = 11732; // 0x172 PushI
	AddReply(var_916_int, var_917_int, var_918_int); // 0x173 TObjFunc
	var_919_int = 10665; // 0x175 PushI
	var_920_int = 11772; // 0x176 PushI
	var_921_int = 11771; // 0x177 PushI
	AddReply(var_919_int, var_920_int, var_921_int); // 0x178 TObjFunc
	goto Label_453; // 0x17a Jump
	
Label_453:
	var_922_bool = 0; // 0x1c5 PushV
	func_7001(var_922_bool); // 0x1c6 Call
	if(var_922_bool == 0) goto Label_468; // 0x1c8 JumpB
	
Label_457:
	lshWaitForAnimEnd(); // 0x1c9 Func
	var_923_object = var_3_object; // 0x1cb PushT
	if(var_923_object == 0) goto Label_462; // 0x1cc JumpB
	goto Label_467; // 0x1cd Jump
	
Label_467:
	goto Label_482; // 0x1d3 Jump
	
Label_482:
	return 0; // 0x1e2 Return
	
Label_462:
	var_924_string = ""; // 0x1ce PushV
	var_924_string = var_2_object; // 0x1cf MovT
	func_6860(var_924_string); // 0x1d0 Call
	goto Label_457; // 0x1d2 Jump
	
Label_468:
	var_925_string = "all"; // 0x1d4 PushS
	var_926_string = "idle"; // 0x1d5 PushS
	PlayAnimation(var_925_string, var_926_string); // 0x1d6 Func
	
Label_472:
	WaitForAnimEnd(); // 0x1d8 Func
	var_927_object = var_3_object; // 0x1da PushT
	if(var_927_object == 0) goto Label_477; // 0x1db JumpB
	goto Label_482; // 0x1dc Jump
	
Label_477:
	var_928_string = "all"; // 0x1dd PushS
	var_929_string = "idle"; // 0x1de PushS
	PlayAnimation(var_928_string, var_929_string); // 0x1df Func
	goto Label_472; // 0x1e1 Jump
	
Label_379:
	var_930_string = ""; // 0x17b PushV
	var_930_string = "Neutral"; // 0x17c MovS
	func_483(var_887_object, var_930_string); // 0x17d Call
	var_931_int = 11979; // 0x17f PushI
	SetMessage(var_931_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_932_bool = 0; // 0x184 PushV
	var_932_bool = 0; // 0x185 MovB
	var_933_bool = 0; var_934_object = Obj(); // 0x186 PushV
	var_934_object = var_1_object; // 0x187 MovT
	func_8157(var_934_object); // 0x188 Call
	if(var_933_bool == 0) goto Label_401; // 0x18a JumpB
	var_939_bool = 0; var_940_object = Obj(); // 0x18b PushV
	var_940_object = var_1_object; // 0x18c MovT
	func_8073(var_940_object); // 0x18d Call
	if(var_939_bool == 0) goto Label_401; // 0x18f JumpB
	var_932_bool = 1; // 0x190 MovB
	
Label_401:
	if(var_932_bool == 0) goto Label_407; // 0x191 JumpB
	var_945_int = 12649; // 0x192 PushI
	var_946_int = 13832; // 0x193 PushI
	var_947_int = 13829; // 0x194 PushI
	AddReply(var_945_int, var_946_int, var_947_int); // 0x195 TObjFunc
	
Label_407:
	var_948_bool = 0; // 0x197 PushV
	var_948_bool = 0; // 0x198 MovB
	var_949_bool = 0; var_950_object = Obj(); // 0x199 PushV
	var_950_object = var_1_object; // 0x19a MovT
	func_8169(var_950_object); // 0x19b Call
	if(var_949_bool == 0) goto Label_420; // 0x19d JumpB
	var_955_bool = 0; var_956_object = Obj(); // 0x19e PushV
	var_956_object = var_1_object; // 0x19f MovT
	func_8073(var_956_object); // 0x1a0 Call
	if(var_955_bool == 0) goto Label_420; // 0x1a2 JumpB
	var_948_bool = 1; // 0x1a3 MovB
	
Label_420:
	if(var_948_bool == 0) goto Label_426; // 0x1a4 JumpB
	var_957_int = 12660; // 0x1a5 PushI
	var_958_int = 13832; // 0x1a6 PushI
	var_959_int = 13840; // 0x1a7 PushI
	AddReply(var_957_int, var_958_int, var_959_int); // 0x1a8 TObjFunc
	
Label_426:
	var_960_bool = 0; // 0x1aa PushV
	var_960_bool = 0; // 0x1ab MovB
	var_961_bool = 0; var_962_object = Obj(); // 0x1ac PushV
	var_962_object = var_1_object; // 0x1ad MovT
	func_8181(var_962_object); // 0x1ae Call
	if(var_961_bool == 0) goto Label_439; // 0x1b0 JumpB
	var_967_bool = 0; var_968_object = Obj(); // 0x1b1 PushV
	var_968_object = var_1_object; // 0x1b2 MovT
	func_8193(var_968_object); // 0x1b3 Call
	if(var_967_bool == 0) goto Label_439; // 0x1b5 JumpB
	var_960_bool = 1; // 0x1b6 MovB
	
Label_439:
	if(var_960_bool == 0) goto Label_445; // 0x1b7 JumpB
	var_973_int = 11980; // 0x1b8 PushI
	var_974_int = 13196; // 0x1b9 PushI
	var_975_int = 13195; // 0x1ba PushI
	AddReply(var_973_int, var_974_int, var_975_int); // 0x1bb TObjFunc
	
Label_445:
	var_976_int = 13018; // 0x1bd PushI
	var_977_int = -1; // 0x1be PushI
	var_978_int = 14224; // 0x1bf PushI
	AddReply(var_976_int, var_977_int, var_978_int); // 0x1c0 TObjFunc
	goto Label_453; // 0x1c2 Jump
}


func_1364(var_0_object, var_1_object, var_2_object, var_3_object, var_180_object, var_181_object)
{
	var_0_object = var_181_object; // 0x555 TMov
	var_1_object = var_180_object; // 0x556 TMov
	var_3_object = 0; // 0x557 TMovB
	var_186_int = 1; // 0x558 PushI
	if(var_186_int == 0) goto Label_1702; // 0x559 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x55a PushV
	var_188_object = var_1_object; // 0x55b MovT
	func_7625(var_188_object); // 0x55c Call
	if(var_187_bool == 0) goto Label_1395; // 0x55e JumpB
	var_195_string = ""; // 0x55f PushV
	var_195_string = "Neutral"; // 0x560 MovS
	func_1732(var_181_object, var_195_string); // 0x561 Call
	var_200_int = 5205; // 0x563 PushI
	SetMessage(var_200_int); // 0x564 TObjFunc
	ClearReplies(); // 0x566 TObjFunc
	var_201_int = 5206; // 0x568 PushI
	var_202_int = 5905; // 0x569 PushI
	var_203_int = 5735; // 0x56a PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x56b TObjFunc
	var_204_int = 5365; // 0x56d PushI
	var_205_int = 5908; // 0x56e PushI
	var_206_int = 5907; // 0x56f PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x570 TObjFunc
	goto Label_1702; // 0x572 Jump
	
Label_1702:
	var_207_bool = 0; // 0x6a6 PushV
	func_7001(var_207_bool); // 0x6a7 Call
	if(var_207_bool == 0) goto Label_1717; // 0x6a9 JumpB
	
Label_1706:
	lshWaitForAnimEnd(); // 0x6aa Func
	var_208_object = var_3_object; // 0x6ac PushT
	if(var_208_object == 0) goto Label_1711; // 0x6ad JumpB
	goto Label_1716; // 0x6ae Jump
	
Label_1716:
	goto Label_1731; // 0x6b4 Jump
	
Label_1731:
	return 0; // 0x6c3 Return
	
Label_1711:
	var_209_string = ""; // 0x6af PushV
	var_209_string = var_2_object; // 0x6b0 MovT
	func_6860(var_209_string); // 0x6b1 Call
	goto Label_1706; // 0x6b3 Jump
	
Label_1717:
	var_210_string = "all"; // 0x6b5 PushS
	var_211_string = "idle"; // 0x6b6 PushS
	PlayAnimation(var_210_string, var_211_string); // 0x6b7 Func
	
Label_1721:
	WaitForAnimEnd(); // 0x6b9 Func
	var_212_object = var_3_object; // 0x6bb PushT
	if(var_212_object == 0) goto Label_1726; // 0x6bc JumpB
	goto Label_1731; // 0x6bd Jump
	
Label_1726:
	var_213_string = "all"; // 0x6be PushS
	var_214_string = "idle"; // 0x6bf PushS
	PlayAnimation(var_213_string, var_214_string); // 0x6c0 Func
	goto Label_1721; // 0x6c2 Jump
	
Label_1395:
	var_215_string = ""; // 0x573 PushV
	var_215_string = "Neutral"; // 0x574 MovS
	func_1732(var_181_object, var_215_string); // 0x575 Call
	var_216_int = 6325; // 0x577 PushI
	SetMessage(var_216_int); // 0x578 TObjFunc
	ClearReplies(); // 0x57a TObjFunc
	var_217_bool = 0; // 0x57c PushV
	var_217_bool = 0; // 0x57d MovB
	var_218_bool = 0; var_219_object = Obj(); // 0x57e PushV
	var_219_object = var_1_object; // 0x57f MovT
	func_7637(var_219_object); // 0x580 Call
	if(var_218_bool == 0) goto Label_1417; // 0x582 JumpB
	var_224_bool = 0; var_225_object = Obj(); // 0x583 PushV
	var_225_object = var_1_object; // 0x584 MovT
	func_7673(var_225_object); // 0x585 Call
	if(var_224_bool == 0) goto Label_1417; // 0x587 JumpB
	var_217_bool = 1; // 0x588 MovB
	
Label_1417:
	if(var_217_bool == 0) goto Label_1423; // 0x589 JumpB
	var_230_int = 6329; // 0x58a PushI
	var_231_int = 5761; // 0x58b PushI
	var_232_int = 6985; // 0x58c PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x58d TObjFunc
	
Label_1423:
	var_233_bool = 0; // 0x58f PushV
	var_233_bool = 1; // 0x590 MovB
	var_234_bool = 0; // 0x591 PushV
	var_234_bool = 0; // 0x592 MovB
	var_235_bool = 0; // 0x593 PushV
	var_235_bool = 0; // 0x594 MovB
	var_236_bool = 0; var_237_object = Obj(); // 0x595 PushV
	var_237_object = var_1_object; // 0x596 MovT
	func_7964(var_236_bool, var_237_object); // 0x597 Call
	if(var_236_bool == 0) goto Label_1440; // 0x599 JumpB
	var_247_bool = 0; var_248_object = Obj(); // 0x59a PushV
	var_248_object = var_1_object; // 0x59b MovT
	func_7649(var_248_object); // 0x59c Call
	if(var_247_bool == 0) goto Label_1440; // 0x59e JumpB
	var_235_bool = 1; // 0x59f MovB
	
Label_1440:
	if(var_235_bool == 0) goto Label_1447; // 0x5a0 JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0x5a1 PushV
	var_254_object = var_1_object; // 0x5a2 MovT
	func_7673(var_254_object); // 0x5a3 Call
	if(var_253_bool == 0) goto Label_1447; // 0x5a5 JumpB
	var_234_bool = 1; // 0x5a6 MovB
	
Label_1447:
	if(var_234_bool == 0) goto Label_1472; // 0x5a7 JumpB
	var_255_bool = 0; // 0x5a8 PushV
	var_255_bool = 0; // 0x5a9 MovB
	var_256_bool = 0; // 0x5aa PushV
	var_256_bool = 0; // 0x5ab MovB
	var_257_bool = 0; var_258_object = Obj(); // 0x5ac PushV
	var_258_object = var_1_object; // 0x5ad MovT
	func_8046(var_257_bool, var_258_object); // 0x5ae Call
	if(var_257_bool == 0) goto Label_1463; // 0x5b0 JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x5b1 PushV
	var_269_object = var_1_object; // 0x5b2 MovT
	func_7649(var_269_object); // 0x5b3 Call
	if(var_268_bool == 0) goto Label_1463; // 0x5b5 JumpB
	var_256_bool = 1; // 0x5b6 MovB
	
Label_1463:
	if(var_256_bool == 0) goto Label_1470; // 0x5b7 JumpB
	var_270_bool = 0; var_271_object = Obj(); // 0x5b8 PushV
	var_271_object = var_1_object; // 0x5b9 MovT
	func_7673(var_271_object); // 0x5ba Call
	if(var_270_bool == 0) goto Label_1470; // 0x5bc JumpB
	var_255_bool = 1; // 0x5bd MovB
	
Label_1470:
	if(var_255_bool == 0) goto Label_1472; // 0x5be JumpB
	var_233_bool = 0; // 0x5bf MovB
	
Label_1472:
	if(var_233_bool == 0) goto Label_1478; // 0x5c0 JumpB
	var_272_int = 6326; // 0x5c1 PushI
	var_273_int = 5738; // 0x5c2 PushI
	var_274_int = 6982; // 0x5c3 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x5c4 TObjFunc
	
Label_1478:
	var_275_bool = 0; // 0x5c6 PushV
	var_275_bool = 1; // 0x5c7 MovB
	var_276_bool = 0; // 0x5c8 PushV
	var_276_bool = 0; // 0x5c9 MovB
	var_277_bool = 0; // 0x5ca PushV
	var_277_bool = 0; // 0x5cb MovB
	var_278_bool = 0; var_279_object = Obj(); // 0x5cc PushV
	var_279_object = var_1_object; // 0x5cd MovT
	func_8046(var_278_bool, var_279_object); // 0x5ce Call
	if(var_278_bool == 0) goto Label_1495; // 0x5d0 JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x5d1 PushV
	var_281_object = var_1_object; // 0x5d2 MovT
	func_7661(var_281_object); // 0x5d3 Call
	if(var_280_bool == 0) goto Label_1495; // 0x5d5 JumpB
	var_277_bool = 1; // 0x5d6 MovB
	
Label_1495:
	if(var_277_bool == 0) goto Label_1502; // 0x5d7 JumpB
	var_286_bool = 0; var_287_object = Obj(); // 0x5d8 PushV
	var_287_object = var_1_object; // 0x5d9 MovT
	func_7673(var_287_object); // 0x5da Call
	if(var_286_bool == 0) goto Label_1502; // 0x5dc JumpB
	var_276_bool = 1; // 0x5dd MovB
	
Label_1502:
	if(var_276_bool == 0) goto Label_1527; // 0x5de JumpB
	var_288_bool = 0; // 0x5df PushV
	var_288_bool = 0; // 0x5e0 MovB
	var_289_bool = 0; // 0x5e1 PushV
	var_289_bool = 0; // 0x5e2 MovB
	var_290_bool = 0; var_291_object = Obj(); // 0x5e3 PushV
	var_291_object = var_1_object; // 0x5e4 MovT
	func_7964(var_290_bool, var_291_object); // 0x5e5 Call
	if(var_290_bool == 0) goto Label_1518; // 0x5e7 JumpB
	var_292_bool = 0; var_293_object = Obj(); // 0x5e8 PushV
	var_293_object = var_1_object; // 0x5e9 MovT
	func_7661(var_293_object); // 0x5ea Call
	if(var_292_bool == 0) goto Label_1518; // 0x5ec JumpB
	var_289_bool = 1; // 0x5ed MovB
	
Label_1518:
	if(var_289_bool == 0) goto Label_1525; // 0x5ee JumpB
	var_294_bool = 0; var_295_object = Obj(); // 0x5ef PushV
	var_295_object = var_1_object; // 0x5f0 MovT
	func_7673(var_295_object); // 0x5f1 Call
	if(var_294_bool == 0) goto Label_1525; // 0x5f3 JumpB
	var_288_bool = 1; // 0x5f4 MovB
	
Label_1525:
	if(var_288_bool == 0) goto Label_1527; // 0x5f5 JumpB
	var_275_bool = 0; // 0x5f6 MovB
	
Label_1527:
	if(var_275_bool == 0) goto Label_1533; // 0x5f7 JumpB
	var_296_int = 6354; // 0x5f8 PushI
	var_297_int = 5748; // 0x5f9 PushI
	var_298_int = 7010; // 0x5fa PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x5fb TObjFunc
	
Label_1533:
	var_299_bool = 0; // 0x5fd PushV
	var_299_bool = 0; // 0x5fe MovB
	var_300_bool = 0; var_301_object = Obj(); // 0x5ff PushV
	var_301_object = var_1_object; // 0x600 MovT
	func_8289(var_301_object); // 0x601 Call
	if(var_300_bool == 0) goto Label_1546; // 0x603 JumpB
	var_306_bool = 0; var_307_object = Obj(); // 0x604 PushV
	var_307_object = var_1_object; // 0x605 MovT
	func_7685(var_307_object); // 0x606 Call
	if(var_306_bool == 0) goto Label_1546; // 0x608 JumpB
	var_299_bool = 1; // 0x609 MovB
	
Label_1546:
	if(var_299_bool == 0) goto Label_1552; // 0x60a JumpB
	var_312_int = 6330; // 0x60b PushI
	var_313_int = 7035; // 0x60c PushI
	var_314_int = 6986; // 0x60d PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x60e TObjFunc
	
Label_1552:
	var_315_bool = 0; // 0x610 PushV
	var_315_bool = 0; // 0x611 MovB
	var_316_bool = 0; var_317_object = Obj(); // 0x612 PushV
	var_317_object = var_1_object; // 0x613 MovT
	func_8265(var_317_object); // 0x614 Call
	if(var_316_bool == 0) goto Label_1565; // 0x616 JumpB
	var_322_bool = 0; var_323_object = Obj(); // 0x617 PushV
	var_323_object = var_1_object; // 0x618 MovT
	func_7697(var_323_object); // 0x619 Call
	if(var_322_bool == 0) goto Label_1565; // 0x61b JumpB
	var_315_bool = 1; // 0x61c MovB
	
Label_1565:
	if(var_315_bool == 0) goto Label_1571; // 0x61d JumpB
	var_328_int = 6337; // 0x61e PushI
	var_329_int = 7041; // 0x61f PushI
	var_330_int = 6993; // 0x620 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x621 TObjFunc
	
Label_1571:
	var_331_bool = 0; // 0x623 PushV
	var_331_bool = 0; // 0x624 MovB
	var_332_bool = 0; var_333_object = Obj(); // 0x625 PushV
	var_333_object = var_1_object; // 0x626 MovT
	func_8277(var_333_object); // 0x627 Call
	if(var_332_bool == 0) goto Label_1584; // 0x629 JumpB
	var_338_bool = 0; var_339_object = Obj(); // 0x62a PushV
	var_339_object = var_1_object; // 0x62b MovT
	func_7709(var_339_object); // 0x62c Call
	if(var_338_bool == 0) goto Label_1584; // 0x62e JumpB
	var_331_bool = 1; // 0x62f MovB
	
Label_1584:
	if(var_331_bool == 0) goto Label_1590; // 0x630 JumpB
	var_344_int = 6332; // 0x631 PushI
	var_345_int = 7047; // 0x632 PushI
	var_346_int = 6988; // 0x633 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x634 TObjFunc
	
Label_1590:
	var_347_bool = 0; // 0x636 PushV
	var_347_bool = 0; // 0x637 MovB
	var_348_bool = 0; // 0x638 PushV
	var_348_bool = 0; // 0x639 MovB
	var_349_bool = 0; var_350_object = Obj(); // 0x63a PushV
	var_350_object = var_1_object; // 0x63b MovT
	func_8241(var_350_object); // 0x63c Call
	if(var_349_bool == 0) goto Label_1605; // 0x63e JumpB
	var_355_bool = 0; var_356_object = Obj(); // 0x63f PushV
	var_356_object = var_1_object; // 0x640 MovT
	func_7721(var_356_object); // 0x641 Call
	if(var_355_bool == 0) goto Label_1605; // 0x643 JumpB
	var_348_bool = 1; // 0x644 MovB
	
Label_1605:
	if(var_348_bool == 0) goto Label_1612; // 0x645 JumpB
	var_361_bool = 0; var_362_object = Obj(); // 0x646 PushV
	var_362_object = var_1_object; // 0x647 MovT
	func_7673(var_362_object); // 0x648 Call
	if(var_361_bool == 0) goto Label_1612; // 0x64a JumpB
	var_347_bool = 1; // 0x64b MovB
	
Label_1612:
	if(var_347_bool == 0) goto Label_1618; // 0x64c JumpB
	var_363_int = 6339; // 0x64d PushI
	var_364_int = 7055; // 0x64e PushI
	var_365_int = 6995; // 0x64f PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x650 TObjFunc
	
Label_1618:
	var_366_bool = 0; // 0x652 PushV
	var_366_bool = 0; // 0x653 MovB
	var_367_bool = 0; var_368_object = Obj(); // 0x654 PushV
	var_368_object = var_1_object; // 0x655 MovT
	func_8229(var_368_object); // 0x656 Call
	if(var_367_bool == 0) goto Label_1631; // 0x658 JumpB
	var_373_bool = 0; var_374_object = Obj(); // 0x659 PushV
	var_374_object = var_1_object; // 0x65a MovT
	func_7733(var_374_object); // 0x65b Call
	if(var_373_bool == 0) goto Label_1631; // 0x65d JumpB
	var_366_bool = 1; // 0x65e MovB
	
Label_1631:
	if(var_366_bool == 0) goto Label_1637; // 0x65f JumpB
	var_379_int = 6340; // 0x660 PushI
	var_380_int = 7065; // 0x661 PushI
	var_381_int = 6996; // 0x662 PushI
	AddReply(var_379_int, var_380_int, var_381_int); // 0x663 TObjFunc
	
Label_1637:
	var_382_bool = 0; // 0x665 PushV
	var_382_bool = 0; // 0x666 MovB
	var_383_bool = 0; var_384_object = Obj(); // 0x667 PushV
	var_384_object = var_1_object; // 0x668 MovT
	func_8253(var_384_object); // 0x669 Call
	if(var_383_bool == 0) goto Label_1650; // 0x66b JumpB
	var_389_bool = 0; var_390_object = Obj(); // 0x66c PushV
	var_390_object = var_1_object; // 0x66d MovT
	func_7745(var_390_object); // 0x66e Call
	if(var_389_bool == 0) goto Label_1650; // 0x670 JumpB
	var_382_bool = 1; // 0x671 MovB
	
Label_1650:
	if(var_382_bool == 0) goto Label_1656; // 0x672 JumpB
	var_395_int = 6344; // 0x673 PushI
	var_396_int = 7083; // 0x674 PushI
	var_397_int = 7000; // 0x675 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x676 TObjFunc
	
Label_1656:
	var_398_bool = 0; // 0x678 PushV
	var_398_bool = 0; // 0x679 MovB
	var_399_bool = 0; var_400_object = Obj(); // 0x67a PushV
	var_400_object = var_1_object; // 0x67b MovT
	func_8301(var_400_object); // 0x67c Call
	if(var_399_bool == 0) goto Label_1669; // 0x67e JumpB
	var_405_bool = 0; var_406_object = Obj(); // 0x67f PushV
	var_406_object = var_1_object; // 0x680 MovT
	func_7757(var_406_object); // 0x681 Call
	if(var_405_bool == 0) goto Label_1669; // 0x683 JumpB
	var_398_bool = 1; // 0x684 MovB
	
Label_1669:
	if(var_398_bool == 0) goto Label_1675; // 0x685 JumpB
	var_411_int = 6345; // 0x686 PushI
	var_412_int = 7090; // 0x687 PushI
	var_413_int = 7001; // 0x688 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x689 TObjFunc
	
Label_1675:
	var_414_bool = 0; // 0x68b PushV
	var_414_bool = 0; // 0x68c MovB
	var_415_bool = 0; var_416_object = Obj(); // 0x68d PushV
	var_416_object = var_1_object; // 0x68e MovT
	func_7940(var_416_object); // 0x68f Call
	if(var_415_bool == 0) goto Label_1688; // 0x691 JumpB
	var_421_bool = 0; var_422_object = Obj(); // 0x692 PushV
	var_422_object = var_1_object; // 0x693 MovT
	func_7769(var_422_object); // 0x694 Call
	if(var_421_bool == 0) goto Label_1688; // 0x696 JumpB
	var_414_bool = 1; // 0x697 MovB
	
Label_1688:
	if(var_414_bool == 0) goto Label_1694; // 0x698 JumpB
	var_427_int = 6346; // 0x699 PushI
	var_428_int = 7096; // 0x69a PushI
	var_429_int = 7002; // 0x69b PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x69c TObjFunc
	
Label_1694:
	var_430_int = 7537; // 0x69e PushI
	var_431_int = -1; // 0x69f PushI
	var_432_int = 8319; // 0x6a0 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x6a1 TObjFunc
	goto Label_1702; // 0x6a3 Jump
}


func_6997(var_96_int)
{
	var_96_int = 2854; // 0x1b55 MovI
	return 0; // 0x1b56 Return
}


func_8022(var_329_bool)
{
	var_331_int = 0; var_332_string = ""; // 0x1f57 PushV
	var_332_string = "d4q03_alldead"; // 0x1f58 MovS
	func_6895(var_331_int, var_332_string); // 0x1f59 Call
	var_333_int = 1; // 0x1f5b PushI
	var_334_bool = var_331_int == var_333_int; // 0x1f5c Eq
	if(var_334_bool == 0) goto Label_8032; // 0x1f5d JumpB
	var_329_bool = 1; // 0x1f5e MovB
	return 0; // 0x1f5f Return
	
Label_8032:
	var_329_bool = 0; // 0x1f60 MovB
	return 0; // 0x1f61 Return
}


func_6999(var_97_string)
{
	var_97_string = "ui/NPC_Black.png"; // 0x1b57 MovS
	return 0; // 0x1b58 Return
}


func_5973(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0x1756 PushV
	func_7001(var_97_bool); // 0x1757 Call
	var_98_bool = var_97_bool == 0; // 0x1759 Not
	if(var_98_bool == 0) goto Label_5980; // 0x175a JumpB
	return 0; // 0x175b Return
	
Label_5980:
	var_99_bool = var_96_string == var_2_object; // 0x175c Eq
	if(var_99_bool == 0) goto Label_5983; // 0x175d JumpB
	return 0; // 0x175e Return
	
Label_5983:
	var_100_string = ""; // 0x175f PushV
	var_100_string = var_96_string; // 0x1760 Mov
	func_6860(var_100_string); // 0x1761 Call
	var_2_object = var_96_string; // 0x1763 TMov
	return 0; // 0x1764 Return
}


func_7001(var_43_bool)
{
	var_43_bool = 1; // 0x1b59 MovB
	return 0; // 0x1b5a Return
}


func_7513()
{
	return 0; // 0x1d5a Return
}


func_7003()
{
	var_48_string = "ood1Alexandr1"; // 0x1b5c PushS
	var_49_int = 1; // 0x1b5d PushI
	SetVariable(var_48_string, var_49_int); // 0x1b5e Func
	return 0; // 0x1b60 Return
}


func_7515()
{
	var_74_string = "ood5Alexandr1"; // 0x1d5c PushS
	var_75_int = 1; // 0x1d5d PushI
	SetVariable(var_74_string, var_75_int); // 0x1d5e Func
	return 0; // 0x1d60 Return
}


func_8533()
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x2155 PushV
	var_87_string = "Adding diary entry"; // 0x2156 PushS
	Trace(var_87_string); // 0x2157 Func
	var_88_int = 69; // 0x2159 PushI
	var_89_int = 1; // 0x215a PushI
	var_90_int = 12151; // 0x215b PushI
	CreateDiaryEntry(var_86_object, var_88_int, var_89_int, var_90_int); // 0x215c Func
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0; // 0x215e PushV
	var_92_object = var_86_object; // 0x215f Mov
	var_93_int = 25; // 0x2160 MovI
	func_8373(var_91_bool, var_92_object, var_93_int); // 0x2161 Call
	return 2; // 0x2163 Return
}


func_7009()
{
	var_72_string = "ood1Alexandr2"; // 0x1b62 PushS
	var_73_int = 1; // 0x1b63 PushI
	SetVariable(var_72_string, var_73_int); // 0x1b64 Func
	return 0; // 0x1b66 Return
}


func_8034(var_335_bool)
{
	var_337_int = 0; var_338_string = ""; // 0x1f63 PushV
	var_338_string = "ood4Alexandr3"; // 0x1f64 MovS
	func_6895(var_337_int, var_338_string); // 0x1f65 Call
	var_339_int = 0; // 0x1f67 PushI
	var_340_bool = var_337_int == var_339_int; // 0x1f68 Eq
	if(var_340_bool == 0) goto Label_8044; // 0x1f69 JumpB
	var_335_bool = 1; // 0x1f6a MovB
	return 0; // 0x1f6b Return
	
Label_8044:
	var_335_bool = 0; // 0x1f6c MovB
	return 0; // 0x1f6d Return
}


func_7521()
{
	var_88_string = "ood5Alexandr2"; // 0x1d62 PushS
	var_89_int = 1; // 0x1d63 PushI
	SetVariable(var_88_string, var_89_int); // 0x1d64 Func
	return 0; // 0x1d66 Return
}


func_8549()
{
	var_73_object = Obj(); var_74_object = Obj(); // 0x2165 PushV
	var_75_string = "Adding diary entry"; // 0x2166 PushS
	Trace(var_75_string); // 0x2167 Func
	var_76_int = 22; // 0x2169 PushI
	var_77_int = 2; // 0x216a PushI
	var_78_int = 3362; // 0x216b PushI
	CreateDiaryEntry(var_74_object, var_76_int, var_77_int, var_78_int); // 0x216c Func
	var_79_bool = 0; var_80_object = Obj(); var_81_int = 0; // 0x216e PushV
	var_80_object = var_74_object; // 0x216f Mov
	var_81_int = -1; // 0x2170 MovI
	func_8373(var_79_bool, var_80_object, var_81_int); // 0x2171 Call
	return 2; // 0x2173 Return
}


func_7527()
{
	var_172_string = "ood6Alexandr1"; // 0x1d68 PushS
	var_173_int = 1; // 0x1d69 PushI
	SetVariable(var_172_string, var_173_int); // 0x1d6a Func
	return 0; // 0x1d6c Return
}


func_7015()
{
	var_82_string = "ood1Alexandr3"; // 0x1b68 PushS
	var_83_int = 1; // 0x1b69 PushI
	SetVariable(var_82_string, var_83_int); // 0x1b6a Func
	return 0; // 0x1b6c Return
}


func_7533()
{
	var_111_string = "ood6Alexandr2"; // 0x1d6e PushS
	var_112_int = 1; // 0x1d6f PushI
	SetVariable(var_111_string, var_112_int); // 0x1d70 Func
	return 0; // 0x1d72 Return
}


func_8046(var_232_bool, var_233_object)
{
	var_234_bool = 0; var_235_object = Obj(); // 0x1f6f PushV
	var_235_object = var_233_object; // 0x1f70 Mov
	func_8339(var_235_object); // 0x1f71 Call
	if(var_234_bool == 0) goto Label_8054; // 0x1f73 JumpB
	var_232_bool = 1; // 0x1f74 MovB
	return 0; // 0x1f75 Return
	
Label_8054:
	var_232_bool = 0; // 0x1f76 MovB
	return 0; // 0x1f77 Return
}


func_7021()
{
	var_88_string = "ood1Alexandr4"; // 0x1b6e PushS
	var_89_int = 1; // 0x1b6f PushI
	SetVariable(var_88_string, var_89_int); // 0x1b70 Func
	return 0; // 0x1b72 Return
}


func_7539()
{
	var_117_string = "ood6Alexandr3"; // 0x1d74 PushS
	var_118_int = 1; // 0x1d75 PushI
	SetVariable(var_117_string, var_118_int); // 0x1d76 Func
	return 0; // 0x1d78 Return
}


func_7027()
{
	var_235_string = "playsound"; // 0x1b74 PushS
	var_236_string = "givemoney"; // 0x1b75 PushS
	TriggerWorld(var_235_string, var_236_string); // 0x1b76 Func
	return 0; // 0x1b78 Return
}


func_8565()
{
	var_98_object = Obj(); var_99_object = Obj(); // 0x2175 PushV
	var_100_string = "Adding diary entry"; // 0x2176 PushS
	Trace(var_100_string); // 0x2177 Func
	var_101_int = 96; // 0x2179 PushI
	var_102_int = 2; // 0x217a PushI
	var_103_int = 12178; // 0x217b PushI
	CreateDiaryEntry(var_99_object, var_101_int, var_102_int, var_103_int); // 0x217c Func
	var_104_bool = 0; var_105_object = Obj(); var_106_int = 0; // 0x217e PushV
	var_105_object = var_99_object; // 0x217f Mov
	var_106_int = 22; // 0x2180 MovI
	func_8373(var_104_bool, var_105_object, var_106_int); // 0x2181 Call
	return 2; // 0x2183 Return
}


func_8056(var_112_bool)
{
	var_114_int = 0; var_115_string = ""; // 0x1f79 PushV
	var_115_string = "d5q01"; // 0x1f7a MovS
	func_6895(var_114_int, var_115_string); // 0x1f7b Call
	var_118_int = 2; // 0x1f7d PushI
	var_119_bool = var_114_int == var_118_int; // 0x1f7e Eq
	if(var_119_bool == 0) goto Label_8066; // 0x1f7f JumpB
	var_112_bool = 1; // 0x1f80 MovB
	return 0; // 0x1f81 Return
	
Label_8066:
	var_112_bool = 0; // 0x1f82 MovB
	return 0; // 0x1f83 Return
}


func_7545()
{
	var_123_string = "ood6Alexandr4"; // 0x1d7a PushS
	var_124_int = 1; // 0x1d7b PushI
	SetVariable(var_123_string, var_124_int); // 0x1d7c Func
	return 0; // 0x1d7e Return
}


func_7033()
{
	var_172_string = "playsound"; // 0x1b7a PushS
	var_173_string = "giveitem"; // 0x1b7b PushS
	TriggerWorld(var_172_string, var_173_string); // 0x1b7c Func
	return 0; // 0x1b7e Return
}


func_6521(var_0_object, var_1_object, var_2_object, var_3_object, var_1001_object, var_1002_object)
{
	var_0_object = var_1002_object; // 0x197a TMov
	var_1_object = var_1001_object; // 0x197b TMov
	var_3_object = 0; // 0x197c TMovB
	var_1007_int = 1; // 0x197d PushI
	if(var_1007_int == 0) goto Label_6563; // 0x197e JumpB
	var_1008_string = ""; // 0x197f PushV
	var_1008_string = "Neutral"; // 0x1980 MovS
	func_6593(var_1002_object, var_1008_string); // 0x1981 Call
	var_1013_int = 12203; // 0x1983 PushI
	SetMessage(var_1013_int); // 0x1984 TObjFunc
	ClearReplies(); // 0x1986 TObjFunc
	var_1014_bool = 0; // 0x1988 PushV
	var_1014_bool = 0; // 0x1989 MovB
	var_1015_bool = 0; var_1016_object = Obj(); // 0x198a PushV
	var_1016_object = var_1_object; // 0x198b MovT
	func_8205(var_1016_object); // 0x198c Call
	if(var_1015_bool == 0) goto Label_6549; // 0x198e JumpB
	var_1021_bool = 0; var_1022_object = Obj(); // 0x198f PushV
	var_1022_object = var_1_object; // 0x1990 MovT
	func_8217(var_1022_object); // 0x1991 Call
	if(var_1021_bool == 0) goto Label_6549; // 0x1993 JumpB
	var_1014_bool = 1; // 0x1994 MovB
	
Label_6549:
	if(var_1014_bool == 0) goto Label_6555; // 0x1995 JumpB
	var_1027_int = 13340; // 0x1996 PushI
	var_1028_int = 14573; // 0x1997 PushI
	var_1029_int = 14572; // 0x1998 PushI
	AddReply(var_1027_int, var_1028_int, var_1029_int); // 0x1999 TObjFunc
	
Label_6555:
	var_1030_int = 12204; // 0x199b PushI
	var_1031_int = -1; // 0x199c PushI
	var_1032_int = 13359; // 0x199d PushI
	AddReply(var_1030_int, var_1031_int, var_1032_int); // 0x199e TObjFunc
	goto Label_6563; // 0x19a0 Jump
	
Label_6563:
	var_1033_bool = 0; // 0x19a3 PushV
	func_7001(var_1033_bool); // 0x19a4 Call
	if(var_1033_bool == 0) goto Label_6578; // 0x19a6 JumpB
	
Label_6567:
	lshWaitForAnimEnd(); // 0x19a7 Func
	var_1034_object = var_3_object; // 0x19a9 PushT
	if(var_1034_object == 0) goto Label_6572; // 0x19aa JumpB
	goto Label_6577; // 0x19ab Jump
	
Label_6577:
	goto Label_6592; // 0x19b1 Jump
	
Label_6592:
	return 0; // 0x19c0 Return
	
Label_6572:
	var_1035_string = ""; // 0x19ac PushV
	var_1035_string = var_2_object; // 0x19ad MovT
	func_6860(var_1035_string); // 0x19ae Call
	goto Label_6567; // 0x19b0 Jump
	
Label_6578:
	var_1036_string = "all"; // 0x19b2 PushS
	var_1037_string = "idle"; // 0x19b3 PushS
	PlayAnimation(var_1036_string, var_1037_string); // 0x19b4 Func
	
Label_6582:
	WaitForAnimEnd(); // 0x19b6 Func
	var_1038_object = var_3_object; // 0x19b8 PushT
	if(var_1038_object == 0) goto Label_6587; // 0x19b9 JumpB
	goto Label_6592; // 0x19ba Jump
	
Label_6587:
	var_1039_string = "all"; // 0x19bb PushS
	var_1040_string = "idle"; // 0x19bc PushS
	PlayAnimation(var_1039_string, var_1040_string); // 0x19bd Func
	goto Label_6582; // 0x19bf Jump
}


func_7039()
{
	var_106_string = "ood1Alexandr5"; // 0x1b80 PushS
	var_107_int = 1; // 0x1b81 PushI
	SetVariable(var_106_string, var_107_int); // 0x1b82 Func
	return 0; // 0x1b84 Return
}


func_7551()
{
	var_129_object = Obj(); var_130_object = Obj(); // 0x1d7f PushV
	var_131_object = Obj(); // 0x1d80 PushV
	func_8402(var_131_object); // 0x1d81 Call
	var_130_object = var_131_object; // 0x1d82 Mov
	var_132_string = "d6q01AlexandrGotoKaterina"; // 0x1d84 PushS
	var_133_string = "pt_map_katerina"; // 0x1d85 PushS
	var_134_int = 1; // 0x1d86 PushI
	var_135_int = 15397; // 0x1d87 PushI
	var_136_float = 0; // 0x1d88 PushV
	func_6960(var_136_float); // 0x1d89 Call
	AddMark(var_132_string, var_133_string, var_134_int, var_135_int, var_136_float); // 0x1d8b ObjFunc
	return 2; // 0x1d8d Return
}


func_8068(var_233_bool)
{
	var_233_bool = 1; // 0x1f85 MovB
	return 0; // 0x1f86 Return
}


func_7045()
{
	var_112_string = "ood1Alexandr6"; // 0x1b86 PushS
	var_113_int = 1; // 0x1b87 PushI
	SetVariable(var_112_string, var_113_int); // 0x1b88 Func
	return 0; // 0x1b8a Return
}


func_8581()
{
	var_194_object = Obj(); var_195_object = Obj(); // 0x2185 PushV
	var_196_string = "Adding diary entry"; // 0x2186 PushS
	Trace(var_196_string); // 0x2187 Func
	var_197_int = 98; // 0x2189 PushI
	var_198_int = 2; // 0x218a PushI
	var_199_int = 12180; // 0x218b PushI
	CreateDiaryEntry(var_195_object, var_197_int, var_198_int, var_199_int); // 0x218c Func
	var_200_bool = 0; var_201_object = Obj(); var_202_int = 0; // 0x218e PushV
	var_201_object = var_195_object; // 0x218f Mov
	var_202_int = 22; // 0x2190 MovI
	func_8373(var_200_bool, var_201_object, var_202_int); // 0x2191 Call
	return 2; // 0x2193 Return
}


func_8073(var_205_bool)
{
	var_207_int = 0; var_208_string = ""; // 0x1f8a PushV
	var_208_string = "d6q02"; // 0x1f8b MovS
	func_6895(var_207_int, var_208_string); // 0x1f8c Call
	var_209_int = 1; // 0x1f8e PushI
	var_210_bool = var_207_int == var_209_int; // 0x1f8f Eq
	if(var_210_bool == 0) goto Label_8083; // 0x1f90 JumpB
	var_205_bool = 1; // 0x1f91 MovB
	return 0; // 0x1f92 Return
	
Label_8083:
	var_205_bool = 0; // 0x1f93 MovB
	return 0; // 0x1f94 Return
}


func_7051()
{
	var_118_string = "ood1Alexandr7"; // 0x1b8c PushS
	var_119_int = 1; // 0x1b8d PushI
	SetVariable(var_118_string, var_119_int); // 0x1b8e Func
	return 0; // 0x1b90 Return
}


func_7567()
{
	var_48_string = "ood7Alexandr1"; // 0x1d90 PushS
	var_49_int = 1; // 0x1d91 PushI
	SetVariable(var_48_string, var_49_int); // 0x1d92 Func
	return 0; // 0x1d94 Return
}


func_7057()
{
	var_124_string = "ood1Alexandr8"; // 0x1b92 PushS
	var_125_int = 1; // 0x1b93 PushI
	SetVariable(var_124_string, var_125_int); // 0x1b94 Func
	return 0; // 0x1b96 Return
}


func_7573()
{
	var_48_string = "KnowAlexandr"; // 0x1d96 PushS
	var_49_int = 1; // 0x1d97 PushI
	SetVariable(var_48_string, var_49_int); // 0x1d98 Func
	return 0; // 0x1d9a Return
}


func_8085(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0x1f96 PushV
	var_127_string = "ood5Alexandr1"; // 0x1f97 MovS
	func_6895(var_126_int, var_127_string); // 0x1f98 Call
	var_128_int = 0; // 0x1f9a PushI
	var_129_bool = var_126_int == var_128_int; // 0x1f9b Eq
	if(var_129_bool == 0) goto Label_8095; // 0x1f9c JumpB
	var_124_bool = 1; // 0x1f9d MovB
	return 0; // 0x1f9e Return
	
Label_8095:
	var_124_bool = 0; // 0x1f9f MovB
	return 0; // 0x1fa0 Return
}


func_7063()
{
	var_130_string = "ood1Alexandr9"; // 0x1b98 PushS
	var_131_int = 1; // 0x1b99 PushI
	SetVariable(var_130_string, var_131_int); // 0x1b9a Func
	return 0; // 0x1b9c Return
}


func_8597()
{
	var_254_object = Obj(); var_255_object = Obj(); // 0x2195 PushV
	var_256_string = "Adding diary entry"; // 0x2196 PushS
	Trace(var_256_string); // 0x2197 Func
	var_257_int = 100; // 0x2199 PushI
	var_258_int = 2; // 0x219a PushI
	var_259_int = 12182; // 0x219b PushI
	CreateDiaryEntry(var_255_object, var_257_int, var_258_int, var_259_int); // 0x219c Func
	var_260_bool = 0; var_261_object = Obj(); var_262_int = 0; // 0x219e PushV
	var_261_object = var_255_object; // 0x219f Mov
	var_262_int = 22; // 0x21a0 MovI
	func_8373(var_260_bool, var_261_object, var_262_int); // 0x21a1 Call
	return 2; // 0x21a3 Return
}


func_7579()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x1d9b PushV
	var_50_object = Obj(); // 0x1d9c PushV
	func_8402(var_50_object); // 0x1d9d Call
	var_49_object = var_50_object; // 0x1d9e Mov
	var_57_string = "d6q01AlexandrGotoJulia"; // 0x1da0 PushS
	var_58_string = "pt_map_julia"; // 0x1da1 PushS
	var_59_int = 1; // 0x1da2 PushI
	var_60_int = 15387; // 0x1da3 PushI
	var_61_float = 0; // 0x1da4 PushV
	func_6960(var_61_float); // 0x1da5 Call
	AddMark(var_57_string, var_58_string, var_59_int, var_60_int, var_61_float); // 0x1da7 ObjFunc
	var_64_string = "d6q01AlexandrGotoLara"; // 0x1da9 PushS
	var_65_string = "pt_map_lara"; // 0x1daa PushS
	var_66_int = 1; // 0x1dab PushI
	var_67_int = 15386; // 0x1dac PushI
	var_68_float = 0; // 0x1dad PushV
	func_6960(var_68_float); // 0x1dae Call
	AddMark(var_64_string, var_65_string, var_66_int, var_67_int, var_68_float); // 0x1db0 ObjFunc
	var_69_string = "d6q01AlexangrGotoJulLaraSelf"; // 0x1db2 PushS
	var_70_string = "pt_map_alexandr"; // 0x1db3 PushS
	var_71_int = 1; // 0x1db4 PushI
	var_72_int = 15388; // 0x1db5 PushI
	var_73_float = 0; // 0x1db6 PushV
	func_6960(var_73_float); // 0x1db7 Call
	AddMark(var_69_string, var_70_string, var_71_int, var_72_int, var_73_float); // 0x1db9 ObjFunc
	func_8613(); // 0x1dbc Call
	return 2; // 0x1dbe Return
}


func_7069()
{
	var_136_string = "ood1Alexandr10"; // 0x1b9e PushS
	var_137_int = 1; // 0x1b9f PushI
	SetVariable(var_136_string, var_137_int); // 0x1ba0 Func
	return 0; // 0x1ba2 Return
}


func_8097(var_140_bool)
{
	var_142_int = 0; var_143_string = ""; // 0x1fa2 PushV
	var_143_string = "ood5Alexandr2"; // 0x1fa3 MovS
	func_6895(var_142_int, var_143_string); // 0x1fa4 Call
	var_144_int = 0; // 0x1fa6 PushI
	var_145_bool = var_142_int == var_144_int; // 0x1fa7 Eq
	if(var_145_bool == 0) goto Label_8107; // 0x1fa8 JumpB
	var_140_bool = 1; // 0x1fa9 MovB
	return 0; // 0x1faa Return
	
Label_8107:
	var_140_bool = 0; // 0x1fab MovB
	return 0; // 0x1fac Return
}


func_7075()
{
	var_146_string = "ood1Alexandr11"; // 0x1ba4 PushS
	var_147_int = 1; // 0x1ba5 PushI
	SetVariable(var_146_string, var_147_int); // 0x1ba6 Func
	return 0; // 0x1ba8 Return
}


func_8613()
{
	var_74_object = Obj(); var_75_object = Obj(); // 0x21a5 PushV
	var_76_string = "Adding diary entry"; // 0x21a6 PushS
	Trace(var_76_string); // 0x21a7 Func
	var_77_int = 114; // 0x21a9 PushI
	var_78_int = 1; // 0x21aa PushI
	var_79_int = 13737; // 0x21ab PushI
	CreateDiaryEntry(var_75_object, var_77_int, var_78_int, var_79_int); // 0x21ac Func
	var_80_bool = 0; var_81_object = Obj(); var_82_int = 0; // 0x21ae PushV
	var_81_object = var_75_object; // 0x21af Mov
	var_82_int = 111; // 0x21b0 MovI
	func_8373(var_80_bool, var_81_object, var_82_int); // 0x21b1 Call
	return 2; // 0x21b3 Return
}


func_7081()
{
	var_152_string = "ood1Alexandr12"; // 0x1baa PushS
	var_153_int = 1; // 0x1bab PushI
	SetVariable(var_152_string, var_153_int); // 0x1bac Func
	return 0; // 0x1bae Return
}


func_8109(var_130_bool)
{
	var_132_int = 0; var_133_string = ""; // 0x1fae PushV
	var_133_string = "d5q03"; // 0x1faf MovS
	func_6895(var_132_int, var_133_string); // 0x1fb0 Call
	var_134_int = 1; // 0x1fb2 PushI
	var_135_bool = var_132_int == var_134_int; // 0x1fb3 Eq
	if(var_135_bool == 0) goto Label_8119; // 0x1fb4 JumpB
	var_130_bool = 1; // 0x1fb5 MovB
	return 0; // 0x1fb6 Return
	
Label_8119:
	var_130_bool = 0; // 0x1fb7 MovB
	return 0; // 0x1fb8 Return
}


func_7087()
{
	var_48_string = "ood2Alexandr1"; // 0x1bb0 PushS
	var_49_int = 1; // 0x1bb1 PushI
	SetVariable(var_48_string, var_49_int); // 0x1bb2 Func
	return 0; // 0x1bb4 Return
}


func_8629()
{
	var_40_bool = GlobalVars[1]; // 0x21b5 PushGE
	var_40_bool = 0; // 0x21b6 MovB
	GlobalVars[1] = var_40_bool; // 0x21b7 PopGE
	return 0; // 0x21b8 Return
}


func_7093()
{
	var_158_string = "ood2Alexandr2"; // 0x1bb6 PushS
	var_159_int = 1; // 0x1bb7 PushI
	SetVariable(var_158_string, var_159_int); // 0x1bb8 Func
	return 0; // 0x1bba Return
}


func_8633(var_41_object)
{
	var_42_bool = GlobalVars[1]; // 0x21ba PushGE
	var_43_bool = var_42_bool == 0; // 0x21bb Not
	if(var_43_bool == 0) goto Label_8646; // 0x21bc JumpB
	var_44_int = 0; var_45_object = Obj(); // 0x21bd PushV
	var_45_object = var_41_object; // 0x21be Mov
	TaskCall(2); // 0x21bf TaskCall
	func_49(var_46_object, var_44_int, var_45_object); // 0x21c0 Call
	TaskReturn(); // 0x21c1 TaskReturn
	var_153_bool = GlobalVars[1]; // 0x21c3 PushGE
	var_153_bool = 1; // 0x21c4 MovB
	GlobalVars[1] = var_153_bool; // 0x21c5 PopGE
	
Label_8646:
	var_154_bool = 0; var_155_int = 0; // 0x21c6 PushV
	var_155_int = 1; // 0x21c7 MovI
	func_6982(var_154_bool, var_155_int); // 0x21c8 Call
	if(var_154_bool == 0) goto Label_8658; // 0x21ca JumpB
	var_162_int = 0; var_163_object = Obj(); // 0x21cb PushV
	var_163_object = var_41_object; // 0x21cc Mov
	TaskCall(6); // 0x21cd TaskCall
	func_1301(var_164_object, var_162_int, var_163_object); // 0x21ce Call
	TaskReturn(); // 0x21cf TaskReturn
	return 0; // 0x21d1 Return
	
Label_8658:
	var_435_bool = 0; var_436_int = 0; // 0x21d2 PushV
	var_436_int = 2; // 0x21d3 MovI
	func_6982(var_435_bool, var_436_int); // 0x21d4 Call
	if(var_435_bool == 0) goto Label_8670; // 0x21d6 JumpB
	var_437_int = 0; var_438_object = Obj(); // 0x21d7 PushV
	var_438_object = var_41_object; // 0x21d8 Mov
	TaskCall(8); // 0x21d9 TaskCall
	func_3026(var_439_object, var_437_int, var_438_object); // 0x21da Call
	TaskReturn(); // 0x21db TaskReturn
	return 0; // 0x21dd Return
	
Label_8670:
	var_565_bool = 0; var_566_int = 0; // 0x21de PushV
	var_566_int = 3; // 0x21df MovI
	func_6982(var_565_bool, var_566_int); // 0x21e0 Call
	if(var_565_bool == 0) goto Label_8682; // 0x21e2 JumpB
	var_567_int = 0; var_568_object = Obj(); // 0x21e3 PushV
	var_568_object = var_41_object; // 0x21e4 Mov
	TaskCall(10); // 0x21e5 TaskCall
	func_4210(var_569_object, var_567_int, var_568_object); // 0x21e6 Call
	TaskReturn(); // 0x21e7 TaskReturn
	return 0; // 0x21e9 Return
	
Label_8682:
	var_671_bool = 0; var_672_int = 0; // 0x21ea PushV
	var_672_int = 4; // 0x21eb MovI
	func_6982(var_671_bool, var_672_int); // 0x21ec Call
	if(var_671_bool == 0) goto Label_8694; // 0x21ee JumpB
	var_673_int = 0; var_674_object = Obj(); // 0x21ef PushV
	var_674_object = var_41_object; // 0x21f0 Mov
	TaskCall(12); // 0x21f1 TaskCall
	func_5051(var_675_object, var_673_int, var_674_object); // 0x21f2 Call
	TaskReturn(); // 0x21f3 TaskReturn
	return 0; // 0x21f5 Return
	
Label_8694:
	var_779_bool = 0; var_780_int = 0; // 0x21f6 PushV
	var_780_int = 5; // 0x21f7 MovI
	func_6982(var_779_bool, var_780_int); // 0x21f8 Call
	if(var_779_bool == 0) goto Label_8706; // 0x21fa JumpB
	var_781_int = 0; var_782_object = Obj(); // 0x21fb PushV
	var_782_object = var_41_object; // 0x21fc Mov
	TaskCall(14); // 0x21fd TaskCall
	func_5809(var_783_object, var_781_int, var_782_object); // 0x21fe Call
	TaskReturn(); // 0x21ff TaskReturn
	return 0; // 0x2201 Return
	
Label_8706:
	var_866_bool = 0; var_867_int = 0; // 0x2202 PushV
	var_867_int = 6; // 0x2203 MovI
	func_6982(var_866_bool, var_867_int); // 0x2204 Call
	if(var_866_bool == 0) goto Label_8718; // 0x2206 JumpB
	var_868_int = 0; var_869_object = Obj(); // 0x2207 PushV
	var_869_object = var_41_object; // 0x2208 Mov
	TaskCall(4); // 0x2209 TaskCall
	func_271(var_870_object, var_868_int, var_869_object); // 0x220a Call
	TaskReturn(); // 0x220b TaskReturn
	return 0; // 0x220d Return
	
Label_8718:
	var_981_bool = 0; var_982_int = 0; // 0x220e PushV
	var_982_int = 7; // 0x220f MovI
	func_6982(var_981_bool, var_982_int); // 0x2210 Call
	if(var_981_bool == 0) goto Label_8730; // 0x2212 JumpB
	var_983_int = 0; var_984_object = Obj(); // 0x2213 PushV
	var_984_object = var_41_object; // 0x2214 Mov
	TaskCall(16); // 0x2215 TaskCall
	func_6458(var_985_object, var_983_int, var_984_object); // 0x2216 Call
	TaskReturn(); // 0x2217 TaskReturn
	return 0; // 0x2219 Return
	
Label_8730:
	var_1043_bool = 0; // 0x221a PushV
	func_6988(var_1043_bool); // 0x221b Call
	return 0; // 0x221d Return
}


func_8121(var_146_bool)
{
	var_148_int = 0; var_149_string = ""; // 0x1fba PushV
	var_149_string = "d5q03"; // 0x1fbb MovS
	func_6895(var_148_int, var_149_string); // 0x1fbc Call
	var_150_int = 2; // 0x1fbe PushI
	var_151_bool = var_148_int == var_150_int; // 0x1fbf Eq
	if(var_151_bool == 0) goto Label_8131; // 0x1fc0 JumpB
	var_146_bool = 1; // 0x1fc1 MovB
	return 0; // 0x1fc2 Return
	
Label_8131:
	var_146_bool = 0; // 0x1fc3 MovB
	return 0; // 0x1fc4 Return
}


func_7099()
{
	var_208_string = "ood2Alexandr3"; // 0x1bbc PushS
	var_209_int = 1; // 0x1bbd PushI
	SetVariable(var_208_string, var_209_int); // 0x1bbe Func
	return 0; // 0x1bc0 Return
}


func_5051(var_0_object, var_673_int, var_674_object)
{
	var_676_object = Obj(); var_677_bool = 0; var_678_int = 0; var_679_bool = 0; var_680_object = Obj(); var_681_bool = 0; var_682_int = 0; var_683_bool = 0; // 0x13bb PushV
	var_0_object = var_674_object; // 0x13bc TMov
	var_684_bool = 0; var_685_object = Obj(); // 0x13bd PushV
	var_685_object = var_674_object; // 0x13be Mov
	func_6800(var_685_object); // 0x13bf Call
	var_686_bool = var_684_bool == 0; // 0x13c1 Not
	if(var_686_bool == 0) goto Label_5061; // 0x13c2 JumpB
	var_673_int = -2; // 0x13c3 MovI
	return 8; // 0x13c4 Return
	
Label_5061:
	CreateDialog(var_680_object); // 0x13c5 Func
	var_687_int = 0; // 0x13c7 PushV
	func_6997(var_687_int); // 0x13c8 Call
	SetNPCName(var_687_int); // 0x13ca ObjFunc
	var_688_string = ""; // 0x13cc PushV
	func_6999(var_688_string); // 0x13cd Call
	SetPhoto(var_688_string); // 0x13cf ObjFunc
	var_689_int = 0; // 0x13d1 PushV
	func_8452(var_689_int); // 0x13d2 Call
	SetPlayerName(var_689_int); // 0x13d4 ObjFunc
	var_682_int = -1; // 0x13d6 MovI
	IsOverrideActive(var_681_bool); // 0x13d7 Func
	var_690_bool = var_681_bool; // 0x13d9 Push
	if(var_690_bool == 0) goto Label_5085; // 0x13da JumpB
	var_673_int = -2; // 0x13db MovI
	return 8; // 0x13dc Return
	
Label_5085:
	DoDialog(var_680_object); // 0x13dd Func
	var_691_object = Obj(); var_692_object = Obj(); // 0x13df PushV
	var_691_object = var_674_object; // 0x13e0 Mov
	var_692_object = var_680_object; // 0x13e1 Mov
	TaskCall(13); // 0x13e2 TaskCall
	func_5114(var_693_object, var_694_object, var_695_string, var_696_bool, var_691_object, var_692_object); // 0x13e3 Call
	TaskReturn(); // 0x13e4 TaskReturn
	IsDialogEnd(var_683_bool); // 0x13e6 ObjFunc
	
Label_5096:
	var_777_bool = var_683_bool == 0; // 0x13e8 Not
	if(var_777_bool == 0) goto Label_5103; // 0x13e9 JumpB
	sync(); // 0x13ea Func
	IsDialogEnd(var_683_bool); // 0x13ec ObjFunc
	goto Label_5096; // 0x13ee Jump
	
Label_5103:
	var_778_object = Obj(); // 0x13ef PushV
	var_778_object = var_674_object; // 0x13f0 Mov
	func_6856(); // 0x13f1 Call
	StopDialog(var_680_object); // 0x13f3 Func
	GetReturnValue(var_682_int); // 0x13f5 ObjFunc
	var_673_int = var_682_int; // 0x13f7 Mov
	return 8; // 0x13f8 Return
}


func_7616()
{
	var_292_int = 0; var_293_string = ""; // 0x1dc1 PushV
	var_293_string = "d2TalkToAlexandr"; // 0x1dc2 MovS
	func_6895(var_292_int, var_293_string); // 0x1dc3 Call
	var_294_int = 1; // 0x1dc5 PushI
	var_295_bool = var_292_int == var_294_int; // 0x1dc6 Eq
	if(var_295_bool == 0) goto Label_7624; // 0x1dc7 JumpB
	
Label_7624:
	return 0; // 0x1dc8 Return
}


func_7105()
{
	var_266_string = "ood2Alexandr5"; // 0x1bc2 PushS
	var_267_int = 1; // 0x1bc3 PushI
	SetVariable(var_266_string, var_267_int); // 0x1bc4 Func
	return 0; // 0x1bc6 Return
}


func_6593(var_2_object, var_56_string)
{
	var_57_bool = 0; // 0x19c2 PushV
	func_7001(var_57_bool); // 0x19c3 Call
	var_58_bool = var_57_bool == 0; // 0x19c5 Not
	if(var_58_bool == 0) goto Label_6600; // 0x19c6 JumpB
	return 0; // 0x19c7 Return
	
Label_6600:
	var_59_bool = var_56_string == var_2_object; // 0x19c8 Eq
	if(var_59_bool == 0) goto Label_6603; // 0x19c9 JumpB
	return 0; // 0x19ca Return
	
Label_6603:
	var_60_string = ""; // 0x19cb PushV
	var_60_string = var_56_string; // 0x19cc Mov
	func_6860(var_60_string); // 0x19cd Call
	var_2_object = var_56_string; // 0x19cf TMov
	return 0; // 0x19d0 Return
}


func_8133(var_156_bool)
{
	var_158_int = 0; var_159_string = ""; // 0x1fc6 PushV
	var_159_string = "d6q01"; // 0x1fc7 MovS
	func_6895(var_158_int, var_159_string); // 0x1fc8 Call
	var_162_int = 1; // 0x1fca PushI
	var_163_bool = var_158_int == var_162_int; // 0x1fcb Eq
	if(var_163_bool == 0) goto Label_8143; // 0x1fcc JumpB
	var_156_bool = 1; // 0x1fcd MovB
	return 0; // 0x1fce Return
	
Label_8143:
	var_156_bool = 0; // 0x1fcf MovB
	return 0; // 0x1fd0 Return
}


func_7111()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x1bc7 PushV
	var_54_string = "d2q01"; // 0x1bc8 PushS
	var_55_int = 1; // 0x1bc9 PushI
	SetVariable(var_54_string, var_55_int); // 0x1bca Func
	var_56_object = Obj(); // 0x1bcc PushV
	func_8402(var_56_object); // 0x1bcd Call
	var_53_object = var_56_object; // 0x1bce Mov
	var_63_string = "d2q01AlexandrGotoAnna"; // 0x1bd0 PushS
	var_64_string = "pt_map_anna"; // 0x1bd1 PushS
	var_65_int = 1; // 0x1bd2 PushI
	var_66_int = 11387; // 0x1bd3 PushI
	var_67_float = 0; // 0x1bd4 PushV
	func_6960(var_67_float); // 0x1bd5 Call
	AddMark(var_63_string, var_64_string, var_65_int, var_66_int, var_67_float); // 0x1bd7 ObjFunc
	func_8469(); // 0x1bda Call
	func_8485(); // 0x1bdd Call
	var_104_object = Obj(); var_105_string = ""; // 0x1bdf PushV
	var_105_string = "quest_d2_02"; // 0x1be0 MovS
	func_6900(var_104_object, var_105_string); // 0x1be1 Call
	return 2; // 0x1be3 Return
}


func_7625(var_160_bool)
{
	var_162_int = 0; var_163_string = ""; // 0x1dca PushV
	var_163_string = "ood1Alexandr1"; // 0x1dcb MovS
	func_6895(var_162_int, var_163_string); // 0x1dcc Call
	var_166_int = 0; // 0x1dce PushI
	var_167_bool = var_162_int == var_166_int; // 0x1dcf Eq
	if(var_167_bool == 0) goto Label_7635; // 0x1dd0 JumpB
	var_160_bool = 1; // 0x1dd1 MovB
	return 0; // 0x1dd2 Return
	
Label_7635:
	var_160_bool = 0; // 0x1dd3 MovB
	return 0; // 0x1dd4 Return
}


func_8145(var_164_bool)
{
	var_166_int = 0; var_167_string = ""; // 0x1fd2 PushV
	var_167_string = "ood6Alexandr1"; // 0x1fd3 MovS
	func_6895(var_166_int, var_167_string); // 0x1fd4 Call
	var_168_int = 0; // 0x1fd6 PushI
	var_169_bool = var_166_int == var_168_int; // 0x1fd7 Eq
	if(var_169_bool == 0) goto Label_8155; // 0x1fd8 JumpB
	var_164_bool = 1; // 0x1fd9 MovB
	return 0; // 0x1fda Return
	
Label_8155:
	var_164_bool = 0; // 0x1fdb MovB
	return 0; // 0x1fdc Return
}


func_3026(var_0_object, var_437_int, var_438_object)
{
	var_440_object = Obj(); var_441_bool = 0; var_442_int = 0; var_443_bool = 0; var_444_object = Obj(); var_445_bool = 0; var_446_int = 0; var_447_bool = 0; // 0xbd2 PushV
	var_0_object = var_438_object; // 0xbd3 TMov
	var_448_bool = 0; var_449_object = Obj(); // 0xbd4 PushV
	var_449_object = var_438_object; // 0xbd5 Mov
	func_6800(var_449_object); // 0xbd6 Call
	var_450_bool = var_448_bool == 0; // 0xbd8 Not
	if(var_450_bool == 0) goto Label_3036; // 0xbd9 JumpB
	var_437_int = -2; // 0xbda MovI
	return 8; // 0xbdb Return
	
Label_3036:
	CreateDialog(var_444_object); // 0xbdc Func
	var_451_int = 0; // 0xbde PushV
	func_6997(var_451_int); // 0xbdf Call
	SetNPCName(var_451_int); // 0xbe1 ObjFunc
	var_452_string = ""; // 0xbe3 PushV
	func_6999(var_452_string); // 0xbe4 Call
	SetPhoto(var_452_string); // 0xbe6 ObjFunc
	var_453_int = 0; // 0xbe8 PushV
	func_8452(var_453_int); // 0xbe9 Call
	SetPlayerName(var_453_int); // 0xbeb ObjFunc
	var_446_int = -1; // 0xbed MovI
	IsOverrideActive(var_445_bool); // 0xbee Func
	var_454_bool = var_445_bool; // 0xbf0 Push
	if(var_454_bool == 0) goto Label_3060; // 0xbf1 JumpB
	var_437_int = -2; // 0xbf2 MovI
	return 8; // 0xbf3 Return
	
Label_3060:
	DoDialog(var_444_object); // 0xbf4 Func
	var_455_object = Obj(); var_456_object = Obj(); // 0xbf6 PushV
	var_455_object = var_438_object; // 0xbf7 Mov
	var_456_object = var_444_object; // 0xbf8 Mov
	TaskCall(9); // 0xbf9 TaskCall
	func_3089(var_457_object, var_458_object, var_459_string, var_460_bool, var_455_object, var_456_object); // 0xbfa Call
	TaskReturn(); // 0xbfb TaskReturn
	IsDialogEnd(var_447_bool); // 0xbfd ObjFunc
	
Label_3071:
	var_563_bool = var_447_bool == 0; // 0xbff Not
	if(var_563_bool == 0) goto Label_3078; // 0xc00 JumpB
	sync(); // 0xc01 Func
	IsDialogEnd(var_447_bool); // 0xc03 ObjFunc
	goto Label_3071; // 0xc05 Jump
	
Label_3078:
	var_564_object = Obj(); // 0xc06 PushV
	var_564_object = var_438_object; // 0xc07 Mov
	func_6856(); // 0xc08 Call
	StopDialog(var_444_object); // 0xc0a Func
	GetReturnValue(var_446_int); // 0xc0c ObjFunc
	var_437_int = var_446_int; // 0xc0e Mov
	return 8; // 0xc0f Return
}


func_7637(var_193_bool)
{
	var_195_int = 0; var_196_string = ""; // 0x1dd6 PushV
	var_196_string = "ood1Alexandr2"; // 0x1dd7 MovS
	func_6895(var_195_int, var_196_string); // 0x1dd8 Call
	var_197_int = 0; // 0x1dda PushI
	var_198_bool = var_195_int == var_197_int; // 0x1ddb Eq
	if(var_198_bool == 0) goto Label_7647; // 0x1ddc JumpB
	var_193_bool = 1; // 0x1ddd MovB
	return 0; // 0x1dde Return
	
Label_7647:
	var_193_bool = 0; // 0x1ddf MovB
	return 0; // 0x1de0 Return
}


func_8157(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x1fde PushV
	var_202_string = "ood6Alexandr2"; // 0x1fdf MovS
	func_6895(var_201_int, var_202_string); // 0x1fe0 Call
	var_203_int = 0; // 0x1fe2 PushI
	var_204_bool = var_201_int == var_203_int; // 0x1fe3 Eq
	if(var_204_bool == 0) goto Label_8167; // 0x1fe4 JumpB
	var_199_bool = 1; // 0x1fe5 MovB
	return 0; // 0x1fe6 Return
	
Label_8167:
	var_199_bool = 0; // 0x1fe7 MovB
	return 0; // 0x1fe8 Return
}


func_7649(var_222_bool)
{
	var_224_int = 0; var_225_string = ""; // 0x1de2 PushV
	var_225_string = "ood1Alexandr3"; // 0x1de3 MovS
	func_6895(var_224_int, var_225_string); // 0x1de4 Call
	var_226_int = 0; // 0x1de6 PushI
	var_227_bool = var_224_int == var_226_int; // 0x1de7 Eq
	if(var_227_bool == 0) goto Label_7659; // 0x1de8 JumpB
	var_222_bool = 1; // 0x1de9 MovB
	return 0; // 0x1dea Return
	
Label_7659:
	var_222_bool = 0; // 0x1deb MovB
	return 0; // 0x1dec Return
}


func_483(var_2_object, var_174_string)
{
	var_175_bool = 0; // 0x1e4 PushV
	func_7001(var_175_bool); // 0x1e5 Call
	var_176_bool = var_175_bool == 0; // 0x1e7 Not
	if(var_176_bool == 0) goto Label_490; // 0x1e8 JumpB
	return 0; // 0x1e9 Return
	
Label_490:
	var_177_bool = var_174_string == var_2_object; // 0x1ea Eq
	if(var_177_bool == 0) goto Label_493; // 0x1eb JumpB
	return 0; // 0x1ec Return
	
Label_493:
	var_178_string = ""; // 0x1ed PushV
	var_178_string = var_174_string; // 0x1ee Mov
	func_6860(var_178_string); // 0x1ef Call
	var_2_object = var_174_string; // 0x1f1 TMov
	return 0; // 0x1f2 Return
}


func_7141()
{
	func_8517(); // 0x1be7 Call
	var_171_bool = 0; var_172_string = ""; var_173_string = ""; // 0x1be9 PushV
	var_172_string = "quest_d2_01"; // 0x1bea MovS
	var_173_string = "completed"; // 0x1beb MovS
	func_6948(var_171_bool, var_172_string, var_173_string); // 0x1bec Call
	return 0; // 0x1bee Return
}


func_8169(var_215_bool)
{
	var_217_int = 0; var_218_string = ""; // 0x1fea PushV
	var_218_string = "ood6Alexandr3"; // 0x1feb MovS
	func_6895(var_217_int, var_218_string); // 0x1fec Call
	var_219_int = 0; // 0x1fee PushI
	var_220_bool = var_217_int == var_219_int; // 0x1fef Eq
	if(var_220_bool == 0) goto Label_8179; // 0x1ff0 JumpB
	var_215_bool = 1; // 0x1ff1 MovB
	return 0; // 0x1ff2 Return
	
Label_8179:
	var_215_bool = 0; // 0x1ff3 MovB
	return 0; // 0x1ff4 Return
}


func_7661(var_255_bool)
{
	var_257_int = 0; var_258_string = ""; // 0x1dee PushV
	var_258_string = "ood1Alexandr4"; // 0x1def MovS
	func_6895(var_257_int, var_258_string); // 0x1df0 Call
	var_259_int = 0; // 0x1df2 PushI
	var_260_bool = var_257_int == var_259_int; // 0x1df3 Eq
	if(var_260_bool == 0) goto Label_7671; // 0x1df4 JumpB
	var_255_bool = 1; // 0x1df5 MovB
	return 0; // 0x1df6 Return
	
Label_7671:
	var_255_bool = 0; // 0x1df7 MovB
	return 0; // 0x1df8 Return
}


func_7151()
{
	var_212_object = Obj(); var_213_object = Obj(); // 0x1bef PushV
	var_214_string = "d2q01"; // 0x1bf0 PushS
	var_215_int = 6; // 0x1bf1 PushI
	SetVariable(var_214_string, var_215_int); // 0x1bf2 Func
	var_216_object = Obj(); // 0x1bf4 PushV
	func_8402(var_216_object); // 0x1bf5 Call
	var_213_object = var_216_object; // 0x1bf6 Mov
	var_217_string = "d2q01AlexandrGotoBigVlad"; // 0x1bf8 PushS
	var_218_string = "pt_map_bigvlad"; // 0x1bf9 PushS
	var_219_int = 1; // 0x1bfa PushI
	var_220_int = 11390; // 0x1bfb PushI
	var_221_float = 0; // 0x1bfc PushV
	func_6960(var_221_float); // 0x1bfd Call
	AddMark(var_217_string, var_218_string, var_219_int, var_220_int, var_221_float); // 0x1bff ObjFunc
	var_222_string = "d2q01AlexandrGotoGeorg"; // 0x1c01 PushS
	var_223_string = "pt_map_georg"; // 0x1c02 PushS
	var_224_int = 1; // 0x1c03 PushI
	var_225_int = 11391; // 0x1c04 PushI
	var_226_float = 0; // 0x1c05 PushV
	func_6960(var_226_float); // 0x1c06 Call
	AddMark(var_222_string, var_223_string, var_224_int, var_225_int, var_226_float); // 0x1c08 ObjFunc
	func_8501(); // 0x1c0b Call
	return 2; // 0x1c0d Return
}


func_8181(var_227_bool)
{
	var_229_int = 0; var_230_string = ""; // 0x1ff6 PushV
	var_230_string = "d6q01KnowKillerIsKlara"; // 0x1ff7 MovS
	func_6895(var_229_int, var_230_string); // 0x1ff8 Call
	var_231_int = 1; // 0x1ffa PushI
	var_232_bool = var_229_int == var_231_int; // 0x1ffb Eq
	if(var_232_bool == 0) goto Label_8191; // 0x1ffc JumpB
	var_227_bool = 1; // 0x1ffd MovB
	return 0; // 0x1ffe Return
	
Label_8191:
	var_227_bool = 0; // 0x1fff MovB
	return 0; // 0x2000 Return
}


func_7673(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x1dfa PushV
	var_202_string = "d1q01FirstGeorgVisit"; // 0x1dfb MovS
	func_6895(var_201_int, var_202_string); // 0x1dfc Call
	var_203_int = 1; // 0x1dfe PushI
	var_204_bool = var_201_int == var_203_int; // 0x1dff Eq
	if(var_204_bool == 0) goto Label_7683; // 0x1e00 JumpB
	var_199_bool = 1; // 0x1e01 MovB
	return 0; // 0x1e02 Return
	
Label_7683:
	var_199_bool = 0; // 0x1e03 MovB
	return 0; // 0x1e04 Return
}


func_5114(var_0_object, var_1_object, var_2_object, var_3_object, var_691_object, var_692_object)
{
	var_0_object = var_692_object; // 0x13fb TMov
	var_1_object = var_691_object; // 0x13fc TMov
	var_3_object = 0; // 0x13fd TMovB
	var_697_int = 1; // 0x13fe PushI
	if(var_697_int == 0) goto Label_5220; // 0x13ff JumpB
	var_698_bool = 0; var_699_object = Obj(); // 0x1400 PushV
	var_699_object = var_1_object; // 0x1401 MovT
	func_7974(var_699_object); // 0x1402 Call
	if(var_698_bool == 0) goto Label_5145; // 0x1404 JumpB
	var_704_string = ""; // 0x1405 PushV
	var_704_string = "Neutral"; // 0x1406 MovS
	func_5250(var_692_object, var_704_string); // 0x1407 Call
	var_709_int = 11175; // 0x1409 PushI
	SetMessage(var_709_int); // 0x140a TObjFunc
	ClearReplies(); // 0x140c TObjFunc
	var_710_int = 11176; // 0x140e PushI
	var_711_int = 12361; // 0x140f PushI
	var_712_int = 12360; // 0x1410 PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x1411 TObjFunc
	var_713_int = 11178; // 0x1413 PushI
	var_714_int = 12366; // 0x1414 PushI
	var_715_int = 12362; // 0x1415 PushI
	AddReply(var_713_int, var_714_int, var_715_int); // 0x1416 TObjFunc
	goto Label_5220; // 0x1418 Jump
	
Label_5220:
	var_716_bool = 0; // 0x1464 PushV
	func_7001(var_716_bool); // 0x1465 Call
	if(var_716_bool == 0) goto Label_5235; // 0x1467 JumpB
	
Label_5224:
	lshWaitForAnimEnd(); // 0x1468 Func
	var_717_object = var_3_object; // 0x146a PushT
	if(var_717_object == 0) goto Label_5229; // 0x146b JumpB
	goto Label_5234; // 0x146c Jump
	
Label_5234:
	goto Label_5249; // 0x1472 Jump
	
Label_5249:
	return 0; // 0x1481 Return
	
Label_5229:
	var_718_string = ""; // 0x146d PushV
	var_718_string = var_2_object; // 0x146e MovT
	func_6860(var_718_string); // 0x146f Call
	goto Label_5224; // 0x1471 Jump
	
Label_5235:
	var_719_string = "all"; // 0x1473 PushS
	var_720_string = "idle"; // 0x1474 PushS
	PlayAnimation(var_719_string, var_720_string); // 0x1475 Func
	
Label_5239:
	WaitForAnimEnd(); // 0x1477 Func
	var_721_object = var_3_object; // 0x1479 PushT
	if(var_721_object == 0) goto Label_5244; // 0x147a JumpB
	goto Label_5249; // 0x147b Jump
	
Label_5244:
	var_722_string = "all"; // 0x147c PushS
	var_723_string = "idle"; // 0x147d PushS
	PlayAnimation(var_722_string, var_723_string); // 0x147e Func
	goto Label_5239; // 0x1480 Jump
	
Label_5145:
	var_724_string = ""; // 0x1419 PushV
	var_724_string = "Neutral"; // 0x141a MovS
	func_5250(var_692_object, var_724_string); // 0x141b Call
	var_725_int = 11164; // 0x141d PushI
	SetMessage(var_725_int); // 0x141e TObjFunc
	ClearReplies(); // 0x1420 TObjFunc
	var_726_bool = 0; var_727_object = Obj(); // 0x1422 PushV
	var_727_object = var_1_object; // 0x1423 MovT
	func_7986(var_727_object); // 0x1424 Call
	if(var_726_bool == 0) goto Label_5164; // 0x1426 JumpB
	var_732_int = 11489; // 0x1427 PushI
	var_733_int = 12692; // 0x1428 PushI
	var_734_int = 12691; // 0x1429 PushI
	AddReply(var_732_int, var_733_int, var_734_int); // 0x142a TObjFunc
	
Label_5164:
	var_735_bool = 0; // 0x142c PushV
	var_735_bool = 0; // 0x142d MovB
	var_736_bool = 0; var_737_object = Obj(); // 0x142e PushV
	var_737_object = var_1_object; // 0x142f MovT
	func_7998(var_737_object); // 0x1430 Call
	if(var_736_bool == 0) goto Label_5177; // 0x1432 JumpB
	var_742_bool = 0; var_743_object = Obj(); // 0x1433 PushV
	var_743_object = var_1_object; // 0x1434 MovT
	func_8010(var_743_object); // 0x1435 Call
	if(var_742_bool == 0) goto Label_5177; // 0x1437 JumpB
	var_735_bool = 1; // 0x1438 MovB
	
Label_5177:
	if(var_735_bool == 0) goto Label_5183; // 0x1439 JumpB
	var_748_int = 11187; // 0x143a PushI
	var_749_int = 12373; // 0x143b PushI
	var_750_int = 12372; // 0x143c PushI
	AddReply(var_748_int, var_749_int, var_750_int); // 0x143d TObjFunc
	
Label_5183:
	var_751_bool = 0; // 0x143f PushV
	var_751_bool = 0; // 0x1440 MovB
	var_752_bool = 0; var_753_object = Obj(); // 0x1441 PushV
	var_753_object = var_1_object; // 0x1442 MovT
	func_8022(var_753_object); // 0x1443 Call
	if(var_752_bool == 0) goto Label_5196; // 0x1445 JumpB
	var_758_bool = 0; var_759_object = Obj(); // 0x1446 PushV
	var_759_object = var_1_object; // 0x1447 MovT
	func_8034(var_759_object); // 0x1448 Call
	if(var_758_bool == 0) goto Label_5196; // 0x144a JumpB
	var_751_bool = 1; // 0x144b MovB
	
Label_5196:
	if(var_751_bool == 0) goto Label_5202; // 0x144c JumpB
	var_764_int = 11495; // 0x144d PushI
	var_765_int = 12697; // 0x144e PushI
	var_766_int = 12696; // 0x144f PushI
	AddReply(var_764_int, var_765_int, var_766_int); // 0x1450 TObjFunc
	
Label_5202:
	var_767_bool = 0; var_768_object = Obj(); // 0x1452 PushV
	var_768_object = var_1_object; // 0x1453 MovT
	func_7829(var_767_bool, var_768_object); // 0x1454 Call
	if(var_767_bool == 0) goto Label_5212; // 0x1456 JumpB
	var_771_int = 11165; // 0x1457 PushI
	var_772_int = 12349; // 0x1458 PushI
	var_773_int = 12348; // 0x1459 PushI
	AddReply(var_771_int, var_772_int, var_773_int); // 0x145a TObjFunc
	
Label_5212:
	var_774_int = 11174; // 0x145c PushI
	var_775_int = -1; // 0x145d PushI
	var_776_int = 12358; // 0x145e PushI
	AddReply(var_774_int, var_775_int, var_776_int); // 0x145f TObjFunc
	goto Label_5220; // 0x1461 Jump
}


