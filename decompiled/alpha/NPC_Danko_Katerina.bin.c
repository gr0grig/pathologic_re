task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_object = Obj(); // 0x24 PushV
	var_36_object = var_35_bool; // 0x25 Mov
	func_5221(var_36_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x2a PushV
	var_37_object = var_35_bool; // 0x2b Mov
	func_4020(var_37_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xc5 PushI
	if(var_37_int == 0) goto Label_316; // 0xc6 JumpB
	func_4115(); // 0xc8 Call
	var_39_int = 346; // 0xca PushI
	var_40_bool = var_35_string == var_39_int; // 0xcb Eq
	if(var_40_bool == 0) goto Label_235; // 0xcc JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xcd PushV
	var_41_object = var_1_object; // 0xce MovT
	var_42_object = var_0_object; // 0xcf MovT
	func_4256(); // 0xd0 Call
	var_45_string = ""; // 0xd2 PushV
	var_45_string = "Neutral"; // 0xd3 MovS
	func_180(var_36_bool, var_45_string); // 0xd4 Call
	var_60_int = 295; // 0xd6 PushI
	SetMessage(var_60_int); // 0xd7 TObjFunc
	ClearReplies(); // 0xd9 TObjFunc
	var_61_int = 296; // 0xdb PushI
	var_62_int = 350; // 0xdc PushI
	var_63_int = 347; // 0xdd PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xde TObjFunc
	var_64_int = 297; // 0xe0 PushI
	var_65_int = 350; // 0xe1 PushI
	var_66_int = 348; // 0xe2 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xe3 TObjFunc
	var_67_int = 298; // 0xe5 PushI
	var_68_int = 350; // 0xe6 PushI
	var_69_int = 349; // 0xe7 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_70_int = 350; // 0xeb PushI
	var_71_bool = var_35_string == var_70_int; // 0xec Eq
	if(var_71_bool == 0) goto Label_258; // 0xed JumpB
	var_72_string = ""; // 0xee PushV
	var_72_string = "Neutral"; // 0xef MovS
	func_180(var_36_bool, var_72_string); // 0xf0 Call
	var_73_int = 299; // 0xf2 PushI
	SetMessage(var_73_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_74_int = 300; // 0xf7 PushI
	var_75_int = 355; // 0xf8 PushI
	var_76_int = 351; // 0xf9 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xfa TObjFunc
	var_77_int = 301; // 0xfc PushI
	var_78_int = 358; // 0xfd PushI
	var_79_int = 352; // 0xfe PushI
	AddReply(var_77_int, var_78_int, var_79_int); // 0xff TObjFunc
	return 0; // 0x101 Return
	
Label_258:
	var_80_int = 358; // 0x102 PushI
	var_81_bool = var_35_string == var_80_int; // 0x103 Eq
	if(var_81_bool == 0) goto Label_281; // 0x104 JumpB
	var_82_string = ""; // 0x105 PushV
	var_82_string = "Neutral"; // 0x106 MovS
	func_180(var_36_bool, var_82_string); // 0x107 Call
	var_83_int = 305; // 0x109 PushI
	SetMessage(var_83_int); // 0x10a TObjFunc
	ClearReplies(); // 0x10c TObjFunc
	var_84_int = 306; // 0x10e PushI
	var_85_int = -1; // 0x10f PushI
	var_86_int = 359; // 0x110 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x111 TObjFunc
	var_87_int = 307; // 0x113 PushI
	var_88_int = -1; // 0x114 PushI
	var_89_int = 360; // 0x115 PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x116 TObjFunc
	return 0; // 0x118 Return
	
Label_281:
	var_90_int = 355; // 0x119 PushI
	var_91_bool = var_35_string == var_90_int; // 0x11a Eq
	if(var_91_bool == 0) goto Label_304; // 0x11b JumpB
	var_92_string = ""; // 0x11c PushV
	var_92_string = "Neutral"; // 0x11d MovS
	func_180(var_36_bool, var_92_string); // 0x11e Call
	var_93_int = 302; // 0x120 PushI
	SetMessage(var_93_int); // 0x121 TObjFunc
	ClearReplies(); // 0x123 TObjFunc
	var_94_int = 304; // 0x125 PushI
	var_95_int = -1; // 0x126 PushI
	var_96_int = 357; // 0x127 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x128 TObjFunc
	var_97_int = 303; // 0x12a PushI
	var_98_int = -1; // 0x12b PushI
	var_99_int = 356; // 0x12c PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x12d TObjFunc
	return 0; // 0x12f Return
	
Label_304:
	var_3_string = 1; // 0x130 TMovB
	var_100_bool = 0; // 0x131 PushV
	func_4236(var_100_bool); // 0x132 Call
	if(var_100_bool == 0) goto Label_312; // 0x134 JumpB
	lshStopAnimation(); // 0x135 Func
	goto Label_314; // 0x137 Jump
	
Label_314:
	return 0; // 0x13a Return
	
Label_312:
	StopAnimation(); // 0x138 Func
	
Label_316:
	return 0; // 0x13c Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x20d PushI
	if(var_37_int == 0) goto Label_1034; // 0x20e JumpB
	func_4115(); // 0x210 Call
	var_39_int = 3742; // 0x212 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x213 Eq
	if(var_40_bool == 0) goto Label_538; // 0x214 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x215 PushV
	var_41_object = var_1_object; // 0x216 MovT
	var_42_object = var_0_object; // 0x217 MovT
	func_4523(); // 0x218 Call
	
Label_538:
	var_45_int = 3745; // 0x21a PushI
	var_46_bool = var_36_bool == var_45_int; // 0x21b Eq
	if(var_46_bool == 0) goto Label_546; // 0x21c JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x21d PushV
	var_47_object = var_1_object; // 0x21e MovT
	var_48_object = var_0_object; // 0x21f MovT
	func_4523(); // 0x220 Call
	
Label_546:
	var_49_int = 3746; // 0x222 PushI
	var_50_bool = var_36_bool == var_49_int; // 0x223 Eq
	if(var_50_bool == 0) goto Label_554; // 0x224 JumpB
	var_51_object = Obj(); var_52_object = Obj(); // 0x225 PushV
	var_51_object = var_1_object; // 0x226 MovT
	var_52_object = var_0_object; // 0x227 MovT
	func_4523(); // 0x228 Call
	
Label_554:
	var_53_int = 3740; // 0x22a PushI
	var_54_bool = var_36_bool == var_53_int; // 0x22b Eq
	if(var_54_bool == 0) goto Label_562; // 0x22c JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0x22d PushV
	var_55_object = var_1_object; // 0x22e MovT
	var_56_object = var_0_object; // 0x22f MovT
	func_4523(); // 0x230 Call
	
Label_562:
	var_57_int = 13984; // 0x232 PushI
	var_58_bool = var_36_bool == var_57_int; // 0x233 Eq
	if(var_58_bool == 0) goto Label_575; // 0x234 JumpB
	var_59_object = Obj(); var_60_object = Obj(); // 0x235 PushV
	var_59_object = var_1_object; // 0x236 MovT
	var_60_object = var_0_object; // 0x237 MovT
	func_4529(); // 0x238 Call
	var_63_object = Obj(); var_64_object = Obj(); // 0x23a PushV
	var_63_object = var_1_object; // 0x23b MovT
	var_64_object = var_0_object; // 0x23c MovT
	func_4535(); // 0x23d Call
	
Label_575:
	var_119_int = 13988; // 0x23f PushI
	var_120_bool = var_36_bool == var_119_int; // 0x240 Eq
	if(var_120_bool == 0) goto Label_588; // 0x241 JumpB
	var_121_object = Obj(); var_122_object = Obj(); // 0x242 PushV
	var_121_object = var_1_object; // 0x243 MovT
	var_122_object = var_0_object; // 0x244 MovT
	func_4529(); // 0x245 Call
	var_123_object = Obj(); var_124_object = Obj(); // 0x247 PushV
	var_123_object = var_1_object; // 0x248 MovT
	var_124_object = var_0_object; // 0x249 MovT
	func_4535(); // 0x24a Call
	
Label_588:
	var_125_int = 13990; // 0x24c PushI
	var_126_bool = var_36_bool == var_125_int; // 0x24d Eq
	if(var_126_bool == 0) goto Label_596; // 0x24e JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0x24f PushV
	var_127_object = var_1_object; // 0x250 MovT
	var_128_object = var_0_object; // 0x251 MovT
	func_4572(); // 0x252 Call
	
Label_596:
	var_131_int = 13969; // 0x254 PushI
	var_132_bool = var_35_string == var_131_int; // 0x255 Eq
	if(var_132_bool == 0) goto Label_689; // 0x256 JumpB
	var_133_string = ""; // 0x257 PushV
	var_133_string = "Neutral"; // 0x258 MovS
	func_508(var_36_bool, var_133_string); // 0x259 Call
	var_148_int = 12770; // 0x25b PushI
	SetMessage(var_148_int); // 0x25c TObjFunc
	ClearReplies(); // 0x25e TObjFunc
	var_149_bool = 0; // 0x260 PushV
	var_149_bool = 0; // 0x261 MovB
	var_150_bool = 0; var_151_object = Obj(); // 0x262 PushV
	var_151_object = var_1_object; // 0x263 MovT
	func_4820(var_151_object); // 0x264 Call
	if(var_150_bool == 0) goto Label_621; // 0x266 JumpB
	var_158_bool = 0; var_159_object = Obj(); // 0x267 PushV
	var_159_object = var_1_object; // 0x268 MovT
	func_4796(var_159_object); // 0x269 Call
	if(var_158_bool == 0) goto Label_621; // 0x26b JumpB
	var_149_bool = 1; // 0x26c MovB
	
Label_621:
	if(var_149_bool == 0) goto Label_627; // 0x26d JumpB
	var_164_int = 12771; // 0x26e PushI
	var_165_int = 3726; // 0x26f PushI
	var_166_int = 13970; // 0x270 PushI
	AddReply(var_164_int, var_165_int, var_166_int); // 0x271 TObjFunc
	
Label_627:
	var_167_bool = 0; // 0x273 PushV
	var_167_bool = 0; // 0x274 MovB
	var_168_bool = 0; var_169_object = Obj(); // 0x275 PushV
	var_169_object = var_1_object; // 0x276 MovT
	func_4832(var_169_object); // 0x277 Call
	if(var_168_bool == 0) goto Label_640; // 0x279 JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x27a PushV
	var_175_object = var_1_object; // 0x27b MovT
	func_4808(var_175_object); // 0x27c Call
	if(var_174_bool == 0) goto Label_640; // 0x27e JumpB
	var_167_bool = 1; // 0x27f MovB
	
Label_640:
	if(var_167_bool == 0) goto Label_646; // 0x280 JumpB
	var_180_int = 12772; // 0x281 PushI
	var_181_int = 13972; // 0x282 PushI
	var_182_int = 13971; // 0x283 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x284 TObjFunc
	
Label_646:
	var_183_bool = 0; // 0x286 PushV
	var_183_bool = 1; // 0x287 MovB
	var_184_bool = 0; // 0x288 PushV
	var_184_bool = 0; // 0x289 MovB
	var_185_bool = 0; var_186_object = Obj(); // 0x28a PushV
	var_186_object = var_1_object; // 0x28b MovT
	func_4844(var_186_object); // 0x28c Call
	if(var_185_bool == 0) goto Label_661; // 0x28e JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0x28f PushV
	var_192_object = var_1_object; // 0x290 MovT
	func_4868(var_192_object); // 0x291 Call
	if(var_191_bool == 0) goto Label_661; // 0x293 JumpB
	var_184_bool = 1; // 0x294 MovB
	
Label_661:
	if(var_184_bool == 0) goto Label_677; // 0x295 JumpB
	var_197_bool = 0; // 0x296 PushV
	var_197_bool = 0; // 0x297 MovB
	var_198_bool = 0; var_199_object = Obj(); // 0x298 PushV
	var_199_object = var_1_object; // 0x299 MovT
	func_4856(var_199_object); // 0x29a Call
	if(var_198_bool == 0) goto Label_675; // 0x29c JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x29d PushV
	var_205_object = var_1_object; // 0x29e MovT
	func_4868(var_205_object); // 0x29f Call
	if(var_204_bool == 0) goto Label_675; // 0x2a1 JumpB
	var_197_bool = 1; // 0x2a2 MovB
	
Label_675:
	if(var_197_bool == 0) goto Label_677; // 0x2a3 JumpB
	var_183_bool = 0; // 0x2a4 MovB
	
Label_677:
	if(var_183_bool == 0) goto Label_683; // 0x2a5 JumpB
	var_206_int = 12791; // 0x2a6 PushI
	var_207_int = 13991; // 0x2a7 PushI
	var_208_int = 13990; // 0x2a8 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x2a9 TObjFunc
	
Label_683:
	var_209_int = 12790; // 0x2ab PushI
	var_210_int = -1; // 0x2ac PushI
	var_211_int = 13989; // 0x2ad PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x2ae TObjFunc
	return 0; // 0x2b0 Return
	
Label_689:
	var_212_int = 13991; // 0x2b1 PushI
	var_213_bool = var_35_string == var_212_int; // 0x2b2 Eq
	if(var_213_bool == 0) goto Label_707; // 0x2b3 JumpB
	var_214_string = ""; // 0x2b4 PushV
	var_214_string = "Neutral"; // 0x2b5 MovS
	func_508(var_36_bool, var_214_string); // 0x2b6 Call
	var_215_int = 12792; // 0x2b8 PushI
	SetMessage(var_215_int); // 0x2b9 TObjFunc
	ClearReplies(); // 0x2bb TObjFunc
	var_216_int = 12793; // 0x2bd PushI
	var_217_int = 13993; // 0x2be PushI
	var_218_int = 13992; // 0x2bf PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x2c0 TObjFunc
	return 0; // 0x2c2 Return
	
Label_707:
	var_219_int = 13993; // 0x2c3 PushI
	var_220_bool = var_35_string == var_219_int; // 0x2c4 Eq
	if(var_220_bool == 0) goto Label_730; // 0x2c5 JumpB
	var_221_string = ""; // 0x2c6 PushV
	var_221_string = "Neutral"; // 0x2c7 MovS
	func_508(var_36_bool, var_221_string); // 0x2c8 Call
	var_222_int = 12794; // 0x2ca PushI
	SetMessage(var_222_int); // 0x2cb TObjFunc
	ClearReplies(); // 0x2cd TObjFunc
	var_223_int = 12795; // 0x2cf PushI
	var_224_int = -1; // 0x2d0 PushI
	var_225_int = 13994; // 0x2d1 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x2d2 TObjFunc
	var_226_int = 12798; // 0x2d4 PushI
	var_227_int = -1; // 0x2d5 PushI
	var_228_int = 13997; // 0x2d6 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x2d7 TObjFunc
	return 0; // 0x2d9 Return
	
Label_730:
	var_229_int = 13972; // 0x2da PushI
	var_230_bool = var_35_string == var_229_int; // 0x2db Eq
	if(var_230_bool == 0) goto Label_748; // 0x2dc JumpB
	var_231_string = ""; // 0x2dd PushV
	var_231_string = "Neutral"; // 0x2de MovS
	func_508(var_36_bool, var_231_string); // 0x2df Call
	var_232_int = 12773; // 0x2e1 PushI
	SetMessage(var_232_int); // 0x2e2 TObjFunc
	ClearReplies(); // 0x2e4 TObjFunc
	var_233_int = 12774; // 0x2e6 PushI
	var_234_int = 13974; // 0x2e7 PushI
	var_235_int = 13973; // 0x2e8 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x2e9 TObjFunc
	return 0; // 0x2eb Return
	
Label_748:
	var_236_int = 13974; // 0x2ec PushI
	var_237_bool = var_35_string == var_236_int; // 0x2ed Eq
	if(var_237_bool == 0) goto Label_766; // 0x2ee JumpB
	var_238_string = ""; // 0x2ef PushV
	var_238_string = "Neutral"; // 0x2f0 MovS
	func_508(var_36_bool, var_238_string); // 0x2f1 Call
	var_239_int = 12775; // 0x2f3 PushI
	SetMessage(var_239_int); // 0x2f4 TObjFunc
	ClearReplies(); // 0x2f6 TObjFunc
	var_240_int = 12776; // 0x2f8 PushI
	var_241_int = 13976; // 0x2f9 PushI
	var_242_int = 13975; // 0x2fa PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x2fb TObjFunc
	return 0; // 0x2fd Return
	
Label_766:
	var_243_int = 13976; // 0x2fe PushI
	var_244_bool = var_35_string == var_243_int; // 0x2ff Eq
	if(var_244_bool == 0) goto Label_789; // 0x300 JumpB
	var_245_string = ""; // 0x301 PushV
	var_245_string = "Neutral"; // 0x302 MovS
	func_508(var_36_bool, var_245_string); // 0x303 Call
	var_246_int = 12777; // 0x305 PushI
	SetMessage(var_246_int); // 0x306 TObjFunc
	ClearReplies(); // 0x308 TObjFunc
	var_247_int = 12779; // 0x30a PushI
	var_248_int = 13980; // 0x30b PushI
	var_249_int = 13978; // 0x30c PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x30d TObjFunc
	var_250_int = 12778; // 0x30f PushI
	var_251_int = 13979; // 0x310 PushI
	var_252_int = 13977; // 0x311 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x312 TObjFunc
	return 0; // 0x314 Return
	
Label_789:
	var_253_int = 13979; // 0x315 PushI
	var_254_bool = var_35_string == var_253_int; // 0x316 Eq
	if(var_254_bool == 0) goto Label_807; // 0x317 JumpB
	var_255_string = ""; // 0x318 PushV
	var_255_string = "Neutral"; // 0x319 MovS
	func_508(var_36_bool, var_255_string); // 0x31a Call
	var_256_int = 12780; // 0x31c PushI
	SetMessage(var_256_int); // 0x31d TObjFunc
	ClearReplies(); // 0x31f TObjFunc
	var_257_int = 13020; // 0x321 PushI
	var_258_int = 13983; // 0x322 PushI
	var_259_int = 14226; // 0x323 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x324 TObjFunc
	return 0; // 0x326 Return
	
Label_807:
	var_260_int = 13980; // 0x327 PushI
	var_261_bool = var_35_string == var_260_int; // 0x328 Eq
	if(var_261_bool == 0) goto Label_825; // 0x329 JumpB
	var_262_string = ""; // 0x32a PushV
	var_262_string = "Neutral"; // 0x32b MovS
	func_508(var_36_bool, var_262_string); // 0x32c Call
	var_263_int = 12781; // 0x32e PushI
	SetMessage(var_263_int); // 0x32f TObjFunc
	ClearReplies(); // 0x331 TObjFunc
	var_264_int = 12782; // 0x333 PushI
	var_265_int = 13983; // 0x334 PushI
	var_266_int = 13981; // 0x335 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x336 TObjFunc
	return 0; // 0x338 Return
	
Label_825:
	var_267_int = 13983; // 0x339 PushI
	var_268_bool = var_35_string == var_267_int; // 0x33a Eq
	if(var_268_bool == 0) goto Label_848; // 0x33b JumpB
	var_269_string = ""; // 0x33c PushV
	var_269_string = "Neutral"; // 0x33d MovS
	func_508(var_36_bool, var_269_string); // 0x33e Call
	var_270_int = 12784; // 0x340 PushI
	SetMessage(var_270_int); // 0x341 TObjFunc
	ClearReplies(); // 0x343 TObjFunc
	var_271_int = 12785; // 0x345 PushI
	var_272_int = -1; // 0x346 PushI
	var_273_int = 13984; // 0x347 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x348 TObjFunc
	var_274_int = 12783; // 0x34a PushI
	var_275_int = 13985; // 0x34b PushI
	var_276_int = 13982; // 0x34c PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x34d TObjFunc
	return 0; // 0x34f Return
	
Label_848:
	var_277_int = 13985; // 0x350 PushI
	var_278_bool = var_35_string == var_277_int; // 0x351 Eq
	if(var_278_bool == 0) goto Label_866; // 0x352 JumpB
	var_279_string = ""; // 0x353 PushV
	var_279_string = "Neutral"; // 0x354 MovS
	func_508(var_36_bool, var_279_string); // 0x355 Call
	var_280_int = 12786; // 0x357 PushI
	SetMessage(var_280_int); // 0x358 TObjFunc
	ClearReplies(); // 0x35a TObjFunc
	var_281_int = 12787; // 0x35c PushI
	var_282_int = 13987; // 0x35d PushI
	var_283_int = 13986; // 0x35e PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x35f TObjFunc
	return 0; // 0x361 Return
	
Label_866:
	var_284_int = 13987; // 0x362 PushI
	var_285_bool = var_35_string == var_284_int; // 0x363 Eq
	if(var_285_bool == 0) goto Label_884; // 0x364 JumpB
	var_286_string = ""; // 0x365 PushV
	var_286_string = "Neutral"; // 0x366 MovS
	func_508(var_36_bool, var_286_string); // 0x367 Call
	var_287_int = 12788; // 0x369 PushI
	SetMessage(var_287_int); // 0x36a TObjFunc
	ClearReplies(); // 0x36c TObjFunc
	var_288_int = 12789; // 0x36e PushI
	var_289_int = -1; // 0x36f PushI
	var_290_int = 13988; // 0x370 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x371 TObjFunc
	return 0; // 0x373 Return
	
Label_884:
	var_291_int = 3726; // 0x374 PushI
	var_292_bool = var_35_string == var_291_int; // 0x375 Eq
	if(var_292_bool == 0) goto Label_907; // 0x376 JumpB
	var_293_string = ""; // 0x377 PushV
	var_293_string = "Neutral"; // 0x378 MovS
	func_508(var_36_bool, var_293_string); // 0x379 Call
	var_294_int = 3459; // 0x37b PushI
	SetMessage(var_294_int); // 0x37c TObjFunc
	ClearReplies(); // 0x37e TObjFunc
	var_295_int = 3460; // 0x380 PushI
	var_296_int = 3729; // 0x381 PushI
	var_297_int = 3727; // 0x382 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x383 TObjFunc
	var_298_int = 3461; // 0x385 PushI
	var_299_int = 3730; // 0x386 PushI
	var_300_int = 3728; // 0x387 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x388 TObjFunc
	return 0; // 0x38a Return
	
Label_907:
	var_301_int = 3730; // 0x38b PushI
	var_302_bool = var_35_string == var_301_int; // 0x38c Eq
	if(var_302_bool == 0) goto Label_930; // 0x38d JumpB
	var_303_string = ""; // 0x38e PushV
	var_303_string = "Neutral"; // 0x38f MovS
	func_508(var_36_bool, var_303_string); // 0x390 Call
	var_304_int = 3463; // 0x392 PushI
	SetMessage(var_304_int); // 0x393 TObjFunc
	ClearReplies(); // 0x395 TObjFunc
	var_305_int = 3464; // 0x397 PushI
	var_306_int = 3729; // 0x398 PushI
	var_307_int = 3731; // 0x399 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x39a TObjFunc
	var_308_int = 3465; // 0x39c PushI
	var_309_int = 3734; // 0x39d PushI
	var_310_int = 3733; // 0x39e PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x39f TObjFunc
	return 0; // 0x3a1 Return
	
Label_930:
	var_311_int = 3734; // 0x3a2 PushI
	var_312_bool = var_35_string == var_311_int; // 0x3a3 Eq
	if(var_312_bool == 0) goto Label_953; // 0x3a4 JumpB
	var_313_string = ""; // 0x3a5 PushV
	var_313_string = "Neutral"; // 0x3a6 MovS
	func_508(var_36_bool, var_313_string); // 0x3a7 Call
	var_314_int = 3466; // 0x3a9 PushI
	SetMessage(var_314_int); // 0x3aa TObjFunc
	ClearReplies(); // 0x3ac TObjFunc
	var_315_int = 3467; // 0x3ae PushI
	var_316_int = 3729; // 0x3af PushI
	var_317_int = 3735; // 0x3b0 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x3b1 TObjFunc
	var_318_int = 3468; // 0x3b3 PushI
	var_319_int = 3729; // 0x3b4 PushI
	var_320_int = 3736; // 0x3b5 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x3b6 TObjFunc
	return 0; // 0x3b8 Return
	
Label_953:
	var_321_int = 3729; // 0x3b9 PushI
	var_322_bool = var_35_string == var_321_int; // 0x3ba Eq
	if(var_322_bool == 0) goto Label_976; // 0x3bb JumpB
	var_323_string = ""; // 0x3bc PushV
	var_323_string = "Neutral"; // 0x3bd MovS
	func_508(var_36_bool, var_323_string); // 0x3be Call
	var_324_int = 3462; // 0x3c0 PushI
	SetMessage(var_324_int); // 0x3c1 TObjFunc
	ClearReplies(); // 0x3c3 TObjFunc
	var_325_int = 3469; // 0x3c5 PushI
	var_326_int = 3741; // 0x3c6 PushI
	var_327_int = 3739; // 0x3c7 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x3c8 TObjFunc
	var_328_int = 3470; // 0x3ca PushI
	var_329_int = -1; // 0x3cb PushI
	var_330_int = 3740; // 0x3cc PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x3cd TObjFunc
	return 0; // 0x3cf Return
	
Label_976:
	var_331_int = 3741; // 0x3d0 PushI
	var_332_bool = var_35_string == var_331_int; // 0x3d1 Eq
	if(var_332_bool == 0) goto Label_999; // 0x3d2 JumpB
	var_333_string = ""; // 0x3d3 PushV
	var_333_string = "Neutral"; // 0x3d4 MovS
	func_508(var_36_bool, var_333_string); // 0x3d5 Call
	var_334_int = 3471; // 0x3d7 PushI
	SetMessage(var_334_int); // 0x3d8 TObjFunc
	ClearReplies(); // 0x3da TObjFunc
	var_335_int = 3472; // 0x3dc PushI
	var_336_int = -1; // 0x3dd PushI
	var_337_int = 3742; // 0x3de PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x3df TObjFunc
	var_338_int = 3473; // 0x3e1 PushI
	var_339_int = 3744; // 0x3e2 PushI
	var_340_int = 3743; // 0x3e3 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x3e4 TObjFunc
	return 0; // 0x3e6 Return
	
Label_999:
	var_341_int = 3744; // 0x3e7 PushI
	var_342_bool = var_35_string == var_341_int; // 0x3e8 Eq
	if(var_342_bool == 0) goto Label_1022; // 0x3e9 JumpB
	var_343_string = ""; // 0x3ea PushV
	var_343_string = "Neutral"; // 0x3eb MovS
	func_508(var_36_bool, var_343_string); // 0x3ec Call
	var_344_int = 3474; // 0x3ee PushI
	SetMessage(var_344_int); // 0x3ef TObjFunc
	ClearReplies(); // 0x3f1 TObjFunc
	var_345_int = 3475; // 0x3f3 PushI
	var_346_int = -1; // 0x3f4 PushI
	var_347_int = 3745; // 0x3f5 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x3f6 TObjFunc
	var_348_int = 3476; // 0x3f8 PushI
	var_349_int = -1; // 0x3f9 PushI
	var_350_int = 3746; // 0x3fa PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x3fb TObjFunc
	return 0; // 0x3fd Return
	
Label_1022:
	var_3_string = 1; // 0x3fe TMovB
	var_351_bool = 0; // 0x3ff PushV
	func_4236(var_351_bool); // 0x400 Call
	if(var_351_bool == 0) goto Label_1030; // 0x402 JumpB
	lshStopAnimation(); // 0x403 Func
	goto Label_1032; // 0x405 Jump
	
Label_1032:
	return 0; // 0x408 Return
	
Label_1030:
	StopAnimation(); // 0x406 Func
	
Label_1034:
	return 0; // 0x40a Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x573 PushI
	if(var_37_int == 0) goto Label_2508; // 0x574 JumpB
	func_4115(); // 0x576 Call
	var_39_int = 6059; // 0x578 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x579 Eq
	if(var_40_bool == 0) goto Label_1413; // 0x57a JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x57b PushV
	var_41_object = var_1_object; // 0x57c MovT
	var_42_object = var_0_object; // 0x57d MovT
	func_4238(); // 0x57e Call
	var_45_object = Obj(); var_46_object = Obj(); // 0x580 PushV
	var_45_object = var_1_object; // 0x581 MovT
	var_46_object = var_0_object; // 0x582 MovT
	func_4514(); // 0x583 Call
	
Label_1413:
	var_74_int = 6060; // 0x585 PushI
	var_75_bool = var_36_bool == var_74_int; // 0x586 Eq
	if(var_75_bool == 0) goto Label_1426; // 0x587 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x588 PushV
	var_76_object = var_1_object; // 0x589 MovT
	var_77_object = var_0_object; // 0x58a MovT
	func_4238(); // 0x58b Call
	var_78_object = Obj(); var_79_object = Obj(); // 0x58d PushV
	var_78_object = var_1_object; // 0x58e MovT
	var_79_object = var_0_object; // 0x58f MovT
	func_4514(); // 0x590 Call
	
Label_1426:
	var_80_int = 6061; // 0x592 PushI
	var_81_bool = var_36_bool == var_80_int; // 0x593 Eq
	if(var_81_bool == 0) goto Label_1439; // 0x594 JumpB
	var_82_object = Obj(); var_83_object = Obj(); // 0x595 PushV
	var_82_object = var_1_object; // 0x596 MovT
	var_83_object = var_0_object; // 0x597 MovT
	func_4238(); // 0x598 Call
	var_84_object = Obj(); var_85_object = Obj(); // 0x59a PushV
	var_84_object = var_1_object; // 0x59b MovT
	var_85_object = var_0_object; // 0x59c MovT
	func_4514(); // 0x59d Call
	
Label_1439:
	var_86_int = 6089; // 0x59f PushI
	var_87_bool = var_36_bool == var_86_int; // 0x5a0 Eq
	if(var_87_bool == 0) goto Label_1452; // 0x5a1 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x5a2 PushV
	var_88_object = var_1_object; // 0x5a3 MovT
	var_89_object = var_0_object; // 0x5a4 MovT
	func_4238(); // 0x5a5 Call
	var_90_object = Obj(); var_91_object = Obj(); // 0x5a7 PushV
	var_90_object = var_1_object; // 0x5a8 MovT
	var_91_object = var_0_object; // 0x5a9 MovT
	func_4514(); // 0x5aa Call
	
Label_1452:
	var_92_int = 6746; // 0x5ac PushI
	var_93_bool = var_36_bool == var_92_int; // 0x5ad Eq
	if(var_93_bool == 0) goto Label_1475; // 0x5ae JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x5af PushV
	var_94_object = var_1_object; // 0x5b0 MovT
	var_95_object = var_0_object; // 0x5b1 MovT
	func_4244(); // 0x5b2 Call
	var_98_object = Obj(); var_99_object = Obj(); // 0x5b4 PushV
	var_98_object = var_1_object; // 0x5b5 MovT
	var_99_object = var_0_object; // 0x5b6 MovT
	func_4262(); // 0x5b7 Call
	var_126_object = Obj(); var_127_object = Obj(); // 0x5b9 PushV
	var_126_object = var_1_object; // 0x5ba MovT
	var_127_object = var_0_object; // 0x5bb MovT
	func_4401(); // 0x5bc Call
	var_144_object = Obj(); var_145_object = Obj(); // 0x5be PushV
	var_144_object = var_1_object; // 0x5bf MovT
	var_145_object = var_0_object; // 0x5c0 MovT
	func_4417(); // 0x5c1 Call
	
Label_1475:
	var_170_int = 6747; // 0x5c3 PushI
	var_171_bool = var_36_bool == var_170_int; // 0x5c4 Eq
	if(var_171_bool == 0) goto Label_1493; // 0x5c5 JumpB
	var_172_object = Obj(); var_173_object = Obj(); // 0x5c6 PushV
	var_172_object = var_1_object; // 0x5c7 MovT
	var_173_object = var_0_object; // 0x5c8 MovT
	func_4244(); // 0x5c9 Call
	var_174_object = Obj(); var_175_object = Obj(); // 0x5cb PushV
	var_174_object = var_1_object; // 0x5cc MovT
	var_175_object = var_0_object; // 0x5cd MovT
	func_4262(); // 0x5ce Call
	var_176_object = Obj(); var_177_object = Obj(); // 0x5d0 PushV
	var_176_object = var_1_object; // 0x5d1 MovT
	var_177_object = var_0_object; // 0x5d2 MovT
	func_4401(); // 0x5d3 Call
	
Label_1493:
	var_178_int = 6744; // 0x5d5 PushI
	var_179_bool = var_36_bool == var_178_int; // 0x5d6 Eq
	if(var_179_bool == 0) goto Label_1501; // 0x5d7 JumpB
	var_180_object = Obj(); var_181_object = Obj(); // 0x5d8 PushV
	var_180_object = var_1_object; // 0x5d9 MovT
	var_181_object = var_0_object; // 0x5da MovT
	func_4244(); // 0x5db Call
	
Label_1501:
	var_182_int = 6073; // 0x5dd PushI
	var_183_bool = var_36_bool == var_182_int; // 0x5de Eq
	if(var_183_bool == 0) goto Label_1509; // 0x5df JumpB
	var_184_object = Obj(); var_185_object = Obj(); // 0x5e0 PushV
	var_184_object = var_1_object; // 0x5e1 MovT
	var_185_object = var_0_object; // 0x5e2 MovT
	func_4250(); // 0x5e3 Call
	
Label_1509:
	var_188_int = 6074; // 0x5e5 PushI
	var_189_bool = var_36_bool == var_188_int; // 0x5e6 Eq
	if(var_189_bool == 0) goto Label_1517; // 0x5e7 JumpB
	var_190_object = Obj(); var_191_object = Obj(); // 0x5e8 PushV
	var_190_object = var_1_object; // 0x5e9 MovT
	var_191_object = var_0_object; // 0x5ea MovT
	func_4250(); // 0x5eb Call
	
Label_1517:
	var_192_int = 6075; // 0x5ed PushI
	var_193_bool = var_36_bool == var_192_int; // 0x5ee Eq
	if(var_193_bool == 0) goto Label_1525; // 0x5ef JumpB
	var_194_object = Obj(); var_195_object = Obj(); // 0x5f0 PushV
	var_194_object = var_1_object; // 0x5f1 MovT
	var_195_object = var_0_object; // 0x5f2 MovT
	func_4250(); // 0x5f3 Call
	
Label_1525:
	var_196_int = 6084; // 0x5f5 PushI
	var_197_bool = var_36_bool == var_196_int; // 0x5f6 Eq
	if(var_197_bool == 0) goto Label_1533; // 0x5f7 JumpB
	var_198_object = Obj(); var_199_object = Obj(); // 0x5f8 PushV
	var_198_object = var_1_object; // 0x5f9 MovT
	var_199_object = var_0_object; // 0x5fa MovT
	func_4250(); // 0x5fb Call
	
Label_1533:
	var_200_int = 6048; // 0x5fd PushI
	var_201_bool = var_36_bool == var_200_int; // 0x5fe Eq
	if(var_201_bool == 0) goto Label_1546; // 0x5ff JumpB
	var_202_object = Obj(); var_203_object = Obj(); // 0x600 PushV
	var_202_object = var_1_object; // 0x601 MovT
	var_203_object = var_0_object; // 0x602 MovT
	func_4280(var_203_object); // 0x603 Call
	var_252_object = Obj(); var_253_object = Obj(); // 0x605 PushV
	var_252_object = var_1_object; // 0x606 MovT
	var_253_object = var_0_object; // 0x607 MovT
	func_4274(); // 0x608 Call
	
Label_1546:
	var_256_int = 6946; // 0x60a PushI
	var_257_bool = var_36_bool == var_256_int; // 0x60b Eq
	if(var_257_bool == 0) goto Label_1559; // 0x60c JumpB
	var_258_object = Obj(); var_259_object = Obj(); // 0x60d PushV
	var_258_object = var_1_object; // 0x60e MovT
	var_259_object = var_0_object; // 0x60f MovT
	func_4340(); // 0x610 Call
	var_289_object = Obj(); var_290_object = Obj(); // 0x612 PushV
	var_289_object = var_1_object; // 0x613 MovT
	var_290_object = var_0_object; // 0x614 MovT
	func_4274(); // 0x615 Call
	
Label_1559:
	var_291_int = 10030; // 0x617 PushI
	var_292_bool = var_36_bool == var_291_int; // 0x618 Eq
	if(var_292_bool == 0) goto Label_1577; // 0x619 JumpB
	var_293_object = Obj(); var_294_object = Obj(); // 0x61a PushV
	var_293_object = var_1_object; // 0x61b MovT
	var_294_object = var_0_object; // 0x61c MovT
	func_4401(); // 0x61d Call
	var_295_object = Obj(); var_296_object = Obj(); // 0x61f PushV
	var_295_object = var_1_object; // 0x620 MovT
	var_296_object = var_0_object; // 0x621 MovT
	func_4262(); // 0x622 Call
	var_297_object = Obj(); var_298_object = Obj(); // 0x624 PushV
	var_297_object = var_1_object; // 0x625 MovT
	var_298_object = var_0_object; // 0x626 MovT
	func_4433(); // 0x627 Call
	
Label_1577:
	var_301_int = 10031; // 0x629 PushI
	var_302_bool = var_36_bool == var_301_int; // 0x62a Eq
	if(var_302_bool == 0) goto Label_1600; // 0x62b JumpB
	var_303_object = Obj(); var_304_object = Obj(); // 0x62c PushV
	var_303_object = var_1_object; // 0x62d MovT
	var_304_object = var_0_object; // 0x62e MovT
	func_4401(); // 0x62f Call
	var_305_object = Obj(); var_306_object = Obj(); // 0x631 PushV
	var_305_object = var_1_object; // 0x632 MovT
	var_306_object = var_0_object; // 0x633 MovT
	func_4417(); // 0x634 Call
	var_307_object = Obj(); var_308_object = Obj(); // 0x636 PushV
	var_307_object = var_1_object; // 0x637 MovT
	var_308_object = var_0_object; // 0x638 MovT
	func_4262(); // 0x639 Call
	var_309_object = Obj(); var_310_object = Obj(); // 0x63b PushV
	var_309_object = var_1_object; // 0x63c MovT
	var_310_object = var_0_object; // 0x63d MovT
	func_4433(); // 0x63e Call
	
Label_1600:
	var_311_int = 9548; // 0x640 PushI
	var_312_bool = var_36_bool == var_311_int; // 0x641 Eq
	if(var_312_bool == 0) goto Label_1608; // 0x642 JumpB
	var_313_object = Obj(); var_314_object = Obj(); // 0x643 PushV
	var_313_object = var_1_object; // 0x644 MovT
	var_314_object = var_0_object; // 0x645 MovT
	func_4439(); // 0x646 Call
	
Label_1608:
	var_317_int = 9549; // 0x648 PushI
	var_318_bool = var_36_bool == var_317_int; // 0x649 Eq
	if(var_318_bool == 0) goto Label_1616; // 0x64a JumpB
	var_319_object = Obj(); var_320_object = Obj(); // 0x64b PushV
	var_319_object = var_1_object; // 0x64c MovT
	var_320_object = var_0_object; // 0x64d MovT
	func_4445(); // 0x64e Call
	
Label_1616:
	var_323_int = 9550; // 0x650 PushI
	var_324_bool = var_36_bool == var_323_int; // 0x651 Eq
	if(var_324_bool == 0) goto Label_1624; // 0x652 JumpB
	var_325_object = Obj(); var_326_object = Obj(); // 0x653 PushV
	var_325_object = var_1_object; // 0x654 MovT
	var_326_object = var_0_object; // 0x655 MovT
	func_4451(); // 0x656 Call
	
Label_1624:
	var_329_int = 9551; // 0x658 PushI
	var_330_bool = var_36_bool == var_329_int; // 0x659 Eq
	if(var_330_bool == 0) goto Label_1632; // 0x65a JumpB
	var_331_object = Obj(); var_332_object = Obj(); // 0x65b PushV
	var_331_object = var_1_object; // 0x65c MovT
	var_332_object = var_0_object; // 0x65d MovT
	func_4457(); // 0x65e Call
	
Label_1632:
	var_335_int = 9552; // 0x660 PushI
	var_336_bool = var_36_bool == var_335_int; // 0x661 Eq
	if(var_336_bool == 0) goto Label_1640; // 0x662 JumpB
	var_337_object = Obj(); var_338_object = Obj(); // 0x663 PushV
	var_337_object = var_1_object; // 0x664 MovT
	var_338_object = var_0_object; // 0x665 MovT
	func_4463(); // 0x666 Call
	
Label_1640:
	var_341_int = 6050; // 0x668 PushI
	var_342_bool = var_35_string == var_341_int; // 0x669 Eq
	if(var_342_bool == 0) goto Label_1885; // 0x66a JumpB
	var_343_bool = 0; // 0x66b PushV
	var_343_bool = 0; // 0x66c MovB
	var_344_bool = 0; var_345_object = Obj(); // 0x66d PushV
	var_345_object = var_1_object; // 0x66e MovT
	func_4607(var_345_object); // 0x66f Call
	if(var_344_bool == 0) goto Label_1657; // 0x671 JumpB
	var_352_bool = 0; var_353_object = Obj(); // 0x672 PushV
	var_353_object = var_1_object; // 0x673 MovT
	func_4643(var_353_object); // 0x674 Call
	var_358_bool = var_352_bool == 0; // 0x676 Not
	if(var_358_bool == 0) goto Label_1657; // 0x677 JumpB
	var_343_bool = 1; // 0x678 MovB
	
Label_1657:
	if(var_343_bool == 0) goto Label_1678; // 0x679 JumpB
	var_359_string = ""; // 0x67a PushV
	var_359_string = "Neutral"; // 0x67b MovS
	func_1378(var_36_bool, var_359_string); // 0x67c Call
	var_374_int = 5491; // 0x67e PushI
	SetMessage(var_374_int); // 0x67f TObjFunc
	ClearReplies(); // 0x681 TObjFunc
	var_375_int = 5492; // 0x683 PushI
	var_376_int = 6052; // 0x684 PushI
	var_377_int = 6051; // 0x685 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x686 TObjFunc
	var_378_int = 5505; // 0x688 PushI
	var_379_int = 6052; // 0x689 PushI
	var_380_int = 6066; // 0x68a PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x68b TObjFunc
	return 0; // 0x68d Return
	
Label_1678:
	var_381_bool = 0; var_382_object = Obj(); // 0x68e PushV
	var_382_object = var_1_object; // 0x68f MovT
	func_4619(var_382_object); // 0x690 Call
	if(var_381_bool == 0) goto Label_1708; // 0x692 JumpB
	var_387_string = ""; // 0x693 PushV
	var_387_string = "Neutral"; // 0x694 MovS
	func_1378(var_36_bool, var_387_string); // 0x695 Call
	var_388_int = 5486; // 0x697 PushI
	SetMessage(var_388_int); // 0x698 TObjFunc
	ClearReplies(); // 0x69a TObjFunc
	var_389_int = 5522; // 0x69c PushI
	var_390_int = 6719; // 0x69d PushI
	var_391_int = 6086; // 0x69e PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x69f TObjFunc
	var_392_int = 6083; // 0x6a1 PushI
	var_393_int = 6719; // 0x6a2 PushI
	var_394_int = 6713; // 0x6a3 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x6a4 TObjFunc
	var_395_int = 5488; // 0x6a6 PushI
	var_396_int = 6714; // 0x6a7 PushI
	var_397_int = 6047; // 0x6a8 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x6a9 TObjFunc
	return 0; // 0x6ab Return
	
Label_1708:
	var_398_string = ""; // 0x6ac PushV
	var_398_string = "Neutral"; // 0x6ad MovS
	func_1378(var_36_bool, var_398_string); // 0x6ae Call
	var_399_int = 5521; // 0x6b0 PushI
	SetMessage(var_399_int); // 0x6b1 TObjFunc
	ClearReplies(); // 0x6b3 TObjFunc
	var_400_bool = 0; // 0x6b5 PushV
	var_400_bool = 0; // 0x6b6 MovB
	var_401_bool = 0; var_402_object = Obj(); // 0x6b7 PushV
	var_402_object = var_1_object; // 0x6b8 MovT
	func_4631(var_402_object); // 0x6b9 Call
	if(var_401_bool == 0) goto Label_1730; // 0x6bb JumpB
	var_407_bool = 0; var_408_object = Obj(); // 0x6bc PushV
	var_408_object = var_1_object; // 0x6bd MovT
	func_4964(var_408_object); // 0x6be Call
	if(var_407_bool == 0) goto Label_1730; // 0x6c0 JumpB
	var_400_bool = 1; // 0x6c1 MovB
	
Label_1730:
	if(var_400_bool == 0) goto Label_1736; // 0x6c2 JumpB
	var_413_int = 9151; // 0x6c3 PushI
	var_414_int = 6068; // 0x6c4 PushI
	var_415_int = 10032; // 0x6c5 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x6c6 TObjFunc
	
Label_1736:
	var_416_bool = 0; // 0x6c8 PushV
	var_416_bool = 0; // 0x6c9 MovB
	var_417_bool = 0; // 0x6ca PushV
	var_417_bool = 0; // 0x6cb MovB
	var_418_bool = 0; var_419_object = Obj(); // 0x6cc PushV
	var_419_object = var_1_object; // 0x6cd MovT
	func_4667(var_419_object); // 0x6ce Call
	if(var_418_bool == 0) goto Label_1752; // 0x6d0 JumpB
	var_424_bool = 0; var_425_object = Obj(); // 0x6d1 PushV
	var_425_object = var_1_object; // 0x6d2 MovT
	func_4655(var_425_object); // 0x6d3 Call
	var_430_bool = var_424_bool == 0; // 0x6d5 Not
	if(var_430_bool == 0) goto Label_1752; // 0x6d6 JumpB
	var_417_bool = 1; // 0x6d7 MovB
	
Label_1752:
	if(var_417_bool == 0) goto Label_1759; // 0x6d8 JumpB
	var_431_bool = 0; var_432_object = Obj(); // 0x6d9 PushV
	var_432_object = var_1_object; // 0x6da MovT
	func_4679(var_431_bool, var_432_object); // 0x6db Call
	if(var_431_bool == 0) goto Label_1759; // 0x6dd JumpB
	var_416_bool = 1; // 0x6de MovB
	
Label_1759:
	if(var_416_bool == 0) goto Label_1765; // 0x6df JumpB
	var_440_int = 6292; // 0x6e0 PushI
	var_441_int = 6945; // 0x6e1 PushI
	var_442_int = 6944; // 0x6e2 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x6e3 TObjFunc
	
Label_1765:
	var_443_bool = 0; // 0x6e5 PushV
	var_443_bool = 0; // 0x6e6 MovB
	var_444_bool = 0; var_445_object = Obj(); // 0x6e7 PushV
	var_445_object = var_1_object; // 0x6e8 MovT
	func_4655(var_445_object); // 0x6e9 Call
	if(var_444_bool == 0) goto Label_1778; // 0x6eb JumpB
	var_446_bool = 0; var_447_object = Obj(); // 0x6ec PushV
	var_447_object = var_1_object; // 0x6ed MovT
	func_4700(var_447_object); // 0x6ee Call
	if(var_446_bool == 0) goto Label_1778; // 0x6f0 JumpB
	var_443_bool = 1; // 0x6f1 MovB
	
Label_1778:
	if(var_443_bool == 0) goto Label_1784; // 0x6f2 JumpB
	var_452_int = 6111; // 0x6f3 PushI
	var_453_int = 10029; // 0x6f4 PushI
	var_454_int = 6748; // 0x6f5 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x6f6 TObjFunc
	
Label_1784:
	var_455_bool = 0; // 0x6f8 PushV
	var_455_bool = 0; // 0x6f9 MovB
	var_456_bool = 0; var_457_object = Obj(); // 0x6fa PushV
	var_457_object = var_1_object; // 0x6fb MovT
	func_4940(var_457_object); // 0x6fc Call
	if(var_456_bool == 0) goto Label_1797; // 0x6fe JumpB
	var_462_bool = 0; var_463_object = Obj(); // 0x6ff PushV
	var_463_object = var_1_object; // 0x700 MovT
	func_4712(var_463_object); // 0x701 Call
	if(var_462_bool == 0) goto Label_1797; // 0x703 JumpB
	var_455_bool = 1; // 0x704 MovB
	
Label_1797:
	if(var_455_bool == 0) goto Label_1803; // 0x705 JumpB
	var_468_int = 8011; // 0x706 PushI
	var_469_int = 8851; // 0x707 PushI
	var_470_int = 8834; // 0x708 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x709 TObjFunc
	
Label_1803:
	var_471_bool = 0; // 0x70b PushV
	var_471_bool = 0; // 0x70c MovB
	var_472_bool = 0; var_473_object = Obj(); // 0x70d PushV
	var_473_object = var_1_object; // 0x70e MovT
	func_4904(var_473_object); // 0x70f Call
	if(var_472_bool == 0) goto Label_1816; // 0x711 JumpB
	var_478_bool = 0; var_479_object = Obj(); // 0x712 PushV
	var_479_object = var_1_object; // 0x713 MovT
	func_4724(var_479_object); // 0x714 Call
	if(var_478_bool == 0) goto Label_1816; // 0x716 JumpB
	var_471_bool = 1; // 0x717 MovB
	
Label_1816:
	if(var_471_bool == 0) goto Label_1822; // 0x718 JumpB
	var_484_int = 8012; // 0x719 PushI
	var_485_int = 8852; // 0x71a PushI
	var_486_int = 8835; // 0x71b PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x71c TObjFunc
	
Label_1822:
	var_487_bool = 0; // 0x71e PushV
	var_487_bool = 0; // 0x71f MovB
	var_488_bool = 0; var_489_object = Obj(); // 0x720 PushV
	var_489_object = var_1_object; // 0x721 MovT
	func_4952(var_489_object); // 0x722 Call
	if(var_488_bool == 0) goto Label_1835; // 0x724 JumpB
	var_494_bool = 0; var_495_object = Obj(); // 0x725 PushV
	var_495_object = var_1_object; // 0x726 MovT
	func_4736(var_495_object); // 0x727 Call
	if(var_494_bool == 0) goto Label_1835; // 0x729 JumpB
	var_487_bool = 1; // 0x72a MovB
	
Label_1835:
	if(var_487_bool == 0) goto Label_1841; // 0x72b JumpB
	var_500_int = 8023; // 0x72c PushI
	var_501_int = 8856; // 0x72d PushI
	var_502_int = 8846; // 0x72e PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x72f TObjFunc
	
Label_1841:
	var_503_bool = 0; // 0x731 PushV
	var_503_bool = 0; // 0x732 MovB
	var_504_bool = 0; var_505_object = Obj(); // 0x733 PushV
	var_505_object = var_1_object; // 0x734 MovT
	func_4892(var_505_object); // 0x735 Call
	if(var_504_bool == 0) goto Label_1854; // 0x737 JumpB
	var_510_bool = 0; var_511_object = Obj(); // 0x738 PushV
	var_511_object = var_1_object; // 0x739 MovT
	func_4748(var_511_object); // 0x73a Call
	if(var_510_bool == 0) goto Label_1854; // 0x73c JumpB
	var_503_bool = 1; // 0x73d MovB
	
Label_1854:
	if(var_503_bool == 0) goto Label_1860; // 0x73e JumpB
	var_516_int = 8024; // 0x73f PushI
	var_517_int = 8855; // 0x740 PushI
	var_518_int = 8847; // 0x741 PushI
	AddReply(var_516_int, var_517_int, var_518_int); // 0x742 TObjFunc
	
Label_1860:
	var_519_bool = 0; // 0x744 PushV
	var_519_bool = 0; // 0x745 MovB
	var_520_bool = 0; var_521_object = Obj(); // 0x746 PushV
	var_521_object = var_1_object; // 0x747 MovT
	func_4880(var_521_object); // 0x748 Call
	if(var_520_bool == 0) goto Label_1873; // 0x74a JumpB
	var_526_bool = 0; var_527_object = Obj(); // 0x74b PushV
	var_527_object = var_1_object; // 0x74c MovT
	func_4760(var_527_object); // 0x74d Call
	if(var_526_bool == 0) goto Label_1873; // 0x74f JumpB
	var_519_bool = 1; // 0x750 MovB
	
Label_1873:
	if(var_519_bool == 0) goto Label_1879; // 0x751 JumpB
	var_532_int = 8030; // 0x752 PushI
	var_533_int = 8854; // 0x753 PushI
	var_534_int = 8853; // 0x754 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x755 TObjFunc
	
Label_1879:
	var_535_int = 8716; // 0x757 PushI
	var_536_int = -1; // 0x758 PushI
	var_537_int = 9553; // 0x759 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x75a TObjFunc
	return 0; // 0x75c Return
	
Label_1885:
	var_538_int = 8854; // 0x75d PushI
	var_539_bool = var_35_string == var_538_int; // 0x75e Eq
	if(var_539_bool == 0) goto Label_1903; // 0x75f JumpB
	var_540_string = ""; // 0x760 PushV
	var_540_string = "Neutral"; // 0x761 MovS
	func_1378(var_36_bool, var_540_string); // 0x762 Call
	var_541_int = 8031; // 0x764 PushI
	SetMessage(var_541_int); // 0x765 TObjFunc
	ClearReplies(); // 0x767 TObjFunc
	var_542_int = 8715; // 0x769 PushI
	var_543_int = -1; // 0x76a PushI
	var_544_int = 9552; // 0x76b PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x76c TObjFunc
	return 0; // 0x76e Return
	
Label_1903:
	var_545_int = 8855; // 0x76f PushI
	var_546_bool = var_35_string == var_545_int; // 0x770 Eq
	if(var_546_bool == 0) goto Label_1921; // 0x771 JumpB
	var_547_string = ""; // 0x772 PushV
	var_547_string = "Neutral"; // 0x773 MovS
	func_1378(var_36_bool, var_547_string); // 0x774 Call
	var_548_int = 8032; // 0x776 PushI
	SetMessage(var_548_int); // 0x777 TObjFunc
	ClearReplies(); // 0x779 TObjFunc
	var_549_int = 8714; // 0x77b PushI
	var_550_int = -1; // 0x77c PushI
	var_551_int = 9551; // 0x77d PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x77e TObjFunc
	return 0; // 0x780 Return
	
Label_1921:
	var_552_int = 8856; // 0x781 PushI
	var_553_bool = var_35_string == var_552_int; // 0x782 Eq
	if(var_553_bool == 0) goto Label_1939; // 0x783 JumpB
	var_554_string = ""; // 0x784 PushV
	var_554_string = "Neutral"; // 0x785 MovS
	func_1378(var_36_bool, var_554_string); // 0x786 Call
	var_555_int = 8033; // 0x788 PushI
	SetMessage(var_555_int); // 0x789 TObjFunc
	ClearReplies(); // 0x78b TObjFunc
	var_556_int = 8713; // 0x78d PushI
	var_557_int = -1; // 0x78e PushI
	var_558_int = 9550; // 0x78f PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x790 TObjFunc
	return 0; // 0x792 Return
	
Label_1939:
	var_559_int = 8852; // 0x793 PushI
	var_560_bool = var_35_string == var_559_int; // 0x794 Eq
	if(var_560_bool == 0) goto Label_1957; // 0x795 JumpB
	var_561_string = ""; // 0x796 PushV
	var_561_string = "Neutral"; // 0x797 MovS
	func_1378(var_36_bool, var_561_string); // 0x798 Call
	var_562_int = 8029; // 0x79a PushI
	SetMessage(var_562_int); // 0x79b TObjFunc
	ClearReplies(); // 0x79d TObjFunc
	var_563_int = 8712; // 0x79f PushI
	var_564_int = -1; // 0x7a0 PushI
	var_565_int = 9549; // 0x7a1 PushI
	AddReply(var_563_int, var_564_int, var_565_int); // 0x7a2 TObjFunc
	return 0; // 0x7a4 Return
	
Label_1957:
	var_566_int = 8851; // 0x7a5 PushI
	var_567_bool = var_35_string == var_566_int; // 0x7a6 Eq
	if(var_567_bool == 0) goto Label_1975; // 0x7a7 JumpB
	var_568_string = ""; // 0x7a8 PushV
	var_568_string = "Neutral"; // 0x7a9 MovS
	func_1378(var_36_bool, var_568_string); // 0x7aa Call
	var_569_int = 8028; // 0x7ac PushI
	SetMessage(var_569_int); // 0x7ad TObjFunc
	ClearReplies(); // 0x7af TObjFunc
	var_570_int = 8711; // 0x7b1 PushI
	var_571_int = -1; // 0x7b2 PushI
	var_572_int = 9548; // 0x7b3 PushI
	AddReply(var_570_int, var_571_int, var_572_int); // 0x7b4 TObjFunc
	return 0; // 0x7b6 Return
	
Label_1975:
	var_573_int = 10029; // 0x7b7 PushI
	var_574_bool = var_35_string == var_573_int; // 0x7b8 Eq
	if(var_574_bool == 0) goto Label_1998; // 0x7b9 JumpB
	var_575_string = ""; // 0x7ba PushV
	var_575_string = "Neutral"; // 0x7bb MovS
	func_1378(var_36_bool, var_575_string); // 0x7bc Call
	var_576_int = 9148; // 0x7be PushI
	SetMessage(var_576_int); // 0x7bf TObjFunc
	ClearReplies(); // 0x7c1 TObjFunc
	var_577_int = 9149; // 0x7c3 PushI
	var_578_int = -1; // 0x7c4 PushI
	var_579_int = 10030; // 0x7c5 PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x7c6 TObjFunc
	var_580_int = 9150; // 0x7c8 PushI
	var_581_int = -1; // 0x7c9 PushI
	var_582_int = 10031; // 0x7ca PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0x7cb TObjFunc
	return 0; // 0x7cd Return
	
Label_1998:
	var_583_int = 6945; // 0x7ce PushI
	var_584_bool = var_35_string == var_583_int; // 0x7cf Eq
	if(var_584_bool == 0) goto Label_2021; // 0x7d0 JumpB
	var_585_string = ""; // 0x7d1 PushV
	var_585_string = "Neutral"; // 0x7d2 MovS
	func_1378(var_36_bool, var_585_string); // 0x7d3 Call
	var_586_int = 6293; // 0x7d5 PushI
	SetMessage(var_586_int); // 0x7d6 TObjFunc
	ClearReplies(); // 0x7d8 TObjFunc
	var_587_int = 5489; // 0x7da PushI
	var_588_int = -1; // 0x7db PushI
	var_589_int = 6048; // 0x7dc PushI
	AddReply(var_587_int, var_588_int, var_589_int); // 0x7dd TObjFunc
	var_590_int = 6294; // 0x7df PushI
	var_591_int = -1; // 0x7e0 PushI
	var_592_int = 6946; // 0x7e1 PushI
	AddReply(var_590_int, var_591_int, var_592_int); // 0x7e2 TObjFunc
	return 0; // 0x7e4 Return
	
Label_2021:
	var_593_int = 6068; // 0x7e5 PushI
	var_594_bool = var_35_string == var_593_int; // 0x7e6 Eq
	if(var_594_bool == 0) goto Label_2049; // 0x7e7 JumpB
	var_595_string = ""; // 0x7e8 PushV
	var_595_string = "Neutral"; // 0x7e9 MovS
	func_1378(var_36_bool, var_595_string); // 0x7ea Call
	var_596_int = 5506; // 0x7ec PushI
	SetMessage(var_596_int); // 0x7ed TObjFunc
	ClearReplies(); // 0x7ef TObjFunc
	var_597_bool = 0; var_598_object = Obj(); // 0x7f1 PushV
	var_598_object = var_1_object; // 0x7f2 MovT
	func_4964(var_598_object); // 0x7f3 Call
	if(var_597_bool == 0) goto Label_2043; // 0x7f5 JumpB
	var_599_int = 5507; // 0x7f6 PushI
	var_600_int = 6070; // 0x7f7 PushI
	var_601_int = 6069; // 0x7f8 PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0x7f9 TObjFunc
	
Label_2043:
	var_602_int = 5520; // 0x7fb PushI
	var_603_int = -1; // 0x7fc PushI
	var_604_int = 6084; // 0x7fd PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0x7fe TObjFunc
	return 0; // 0x800 Return
	
Label_2049:
	var_605_int = 6070; // 0x801 PushI
	var_606_bool = var_35_string == var_605_int; // 0x802 Eq
	if(var_606_bool == 0) goto Label_2072; // 0x803 JumpB
	var_607_string = ""; // 0x804 PushV
	var_607_string = "Neutral"; // 0x805 MovS
	func_1378(var_36_bool, var_607_string); // 0x806 Call
	var_608_int = 5508; // 0x808 PushI
	SetMessage(var_608_int); // 0x809 TObjFunc
	ClearReplies(); // 0x80b TObjFunc
	var_609_int = 5509; // 0x80d PushI
	var_610_int = 6072; // 0x80e PushI
	var_611_int = 6071; // 0x80f PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0x810 TObjFunc
	var_612_int = 5514; // 0x812 PushI
	var_613_int = 6077; // 0x813 PushI
	var_614_int = 6076; // 0x814 PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0x815 TObjFunc
	return 0; // 0x817 Return
	
Label_2072:
	var_615_int = 6077; // 0x818 PushI
	var_616_bool = var_35_string == var_615_int; // 0x819 Eq
	if(var_616_bool == 0) goto Label_2090; // 0x81a JumpB
	var_617_string = ""; // 0x81b PushV
	var_617_string = "Neutral"; // 0x81c MovS
	func_1378(var_36_bool, var_617_string); // 0x81d Call
	var_618_int = 5515; // 0x81f PushI
	SetMessage(var_618_int); // 0x820 TObjFunc
	ClearReplies(); // 0x822 TObjFunc
	var_619_int = 5516; // 0x824 PushI
	var_620_int = 6079; // 0x825 PushI
	var_621_int = 6078; // 0x826 PushI
	AddReply(var_619_int, var_620_int, var_621_int); // 0x827 TObjFunc
	return 0; // 0x829 Return
	
Label_2090:
	var_622_int = 6079; // 0x82a PushI
	var_623_bool = var_35_string == var_622_int; // 0x82b Eq
	if(var_623_bool == 0) goto Label_2113; // 0x82c JumpB
	var_624_string = ""; // 0x82d PushV
	var_624_string = "Neutral"; // 0x82e MovS
	func_1378(var_36_bool, var_624_string); // 0x82f Call
	var_625_int = 5517; // 0x831 PushI
	SetMessage(var_625_int); // 0x832 TObjFunc
	ClearReplies(); // 0x834 TObjFunc
	var_626_int = 5518; // 0x836 PushI
	var_627_int = 6072; // 0x837 PushI
	var_628_int = 6080; // 0x838 PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0x839 TObjFunc
	var_629_int = 5519; // 0x83b PushI
	var_630_int = 6072; // 0x83c PushI
	var_631_int = 6082; // 0x83d PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0x83e TObjFunc
	return 0; // 0x840 Return
	
Label_2113:
	var_632_int = 6072; // 0x841 PushI
	var_633_bool = var_35_string == var_632_int; // 0x842 Eq
	if(var_633_bool == 0) goto Label_2141; // 0x843 JumpB
	var_634_string = ""; // 0x844 PushV
	var_634_string = "Neutral"; // 0x845 MovS
	func_1378(var_36_bool, var_634_string); // 0x846 Call
	var_635_int = 5510; // 0x848 PushI
	SetMessage(var_635_int); // 0x849 TObjFunc
	ClearReplies(); // 0x84b TObjFunc
	var_636_int = 5511; // 0x84d PushI
	var_637_int = -1; // 0x84e PushI
	var_638_int = 6073; // 0x84f PushI
	AddReply(var_636_int, var_637_int, var_638_int); // 0x850 TObjFunc
	var_639_int = 5512; // 0x852 PushI
	var_640_int = -1; // 0x853 PushI
	var_641_int = 6074; // 0x854 PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0x855 TObjFunc
	var_642_int = 5513; // 0x857 PushI
	var_643_int = -1; // 0x858 PushI
	var_644_int = 6075; // 0x859 PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x85a TObjFunc
	return 0; // 0x85c Return
	
Label_2141:
	var_645_int = 6714; // 0x85d PushI
	var_646_bool = var_35_string == var_645_int; // 0x85e Eq
	if(var_646_bool == 0) goto Label_2164; // 0x85f JumpB
	var_647_string = ""; // 0x860 PushV
	var_647_string = "Neutral"; // 0x861 MovS
	func_1378(var_36_bool, var_647_string); // 0x862 Call
	var_648_int = 6084; // 0x864 PushI
	SetMessage(var_648_int); // 0x865 TObjFunc
	ClearReplies(); // 0x867 TObjFunc
	var_649_int = 6085; // 0x869 PushI
	var_650_int = 6717; // 0x86a PushI
	var_651_int = 6715; // 0x86b PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x86c TObjFunc
	var_652_int = 6086; // 0x86e PushI
	var_653_int = 6719; // 0x86f PushI
	var_654_int = 6716; // 0x870 PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0x871 TObjFunc
	return 0; // 0x873 Return
	
Label_2164:
	var_655_int = 6717; // 0x874 PushI
	var_656_bool = var_35_string == var_655_int; // 0x875 Eq
	if(var_656_bool == 0) goto Label_2182; // 0x876 JumpB
	var_657_string = ""; // 0x877 PushV
	var_657_string = "Neutral"; // 0x878 MovS
	func_1378(var_36_bool, var_657_string); // 0x879 Call
	var_658_int = 6087; // 0x87b PushI
	SetMessage(var_658_int); // 0x87c TObjFunc
	ClearReplies(); // 0x87e TObjFunc
	var_659_int = 6088; // 0x880 PushI
	var_660_int = 6719; // 0x881 PushI
	var_661_int = 6718; // 0x882 PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x883 TObjFunc
	return 0; // 0x885 Return
	
Label_2182:
	var_662_int = 6719; // 0x886 PushI
	var_663_bool = var_35_string == var_662_int; // 0x887 Eq
	if(var_663_bool == 0) goto Label_2205; // 0x888 JumpB
	var_664_string = ""; // 0x889 PushV
	var_664_string = "Neutral"; // 0x88a MovS
	func_1378(var_36_bool, var_664_string); // 0x88b Call
	var_665_int = 6089; // 0x88d PushI
	SetMessage(var_665_int); // 0x88e TObjFunc
	ClearReplies(); // 0x890 TObjFunc
	var_666_int = 6090; // 0x892 PushI
	var_667_int = 6725; // 0x893 PushI
	var_668_int = 6720; // 0x894 PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x895 TObjFunc
	var_669_int = 6091; // 0x897 PushI
	var_670_int = 6725; // 0x898 PushI
	var_671_int = 6721; // 0x899 PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x89a TObjFunc
	return 0; // 0x89c Return
	
Label_2205:
	var_672_int = 6725; // 0x89d PushI
	var_673_bool = var_35_string == var_672_int; // 0x89e Eq
	if(var_673_bool == 0) goto Label_2238; // 0x89f JumpB
	var_674_object = Obj(); var_675_object = Obj(); // 0x8a0 PushV
	var_674_object = var_1_object; // 0x8a1 MovT
	var_675_object = var_0_object; // 0x8a2 MovT
	func_4395(); // 0x8a3 Call
	var_678_object = Obj(); var_679_object = Obj(); // 0x8a5 PushV
	var_678_object = var_1_object; // 0x8a6 MovT
	var_679_object = var_0_object; // 0x8a7 MovT
	func_4389(); // 0x8a8 Call
	var_682_string = ""; // 0x8aa PushV
	var_682_string = "Neutral"; // 0x8ab MovS
	func_1378(var_36_bool, var_682_string); // 0x8ac Call
	var_683_int = 6092; // 0x8ae PushI
	SetMessage(var_683_int); // 0x8af TObjFunc
	ClearReplies(); // 0x8b1 TObjFunc
	var_684_int = 6095; // 0x8b3 PushI
	var_685_int = 6730; // 0x8b4 PushI
	var_686_int = 6729; // 0x8b5 PushI
	AddReply(var_684_int, var_685_int, var_686_int); // 0x8b6 TObjFunc
	var_687_int = 6093; // 0x8b8 PushI
	var_688_int = 6728; // 0x8b9 PushI
	var_689_int = 6727; // 0x8ba PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0x8bb TObjFunc
	return 0; // 0x8bd Return
	
Label_2238:
	var_690_int = 6728; // 0x8be PushI
	var_691_bool = var_35_string == var_690_int; // 0x8bf Eq
	if(var_691_bool == 0) goto Label_2266; // 0x8c0 JumpB
	var_692_object = Obj(); var_693_object = Obj(); // 0x8c1 PushV
	var_692_object = var_1_object; // 0x8c2 MovT
	var_693_object = var_0_object; // 0x8c3 MovT
	func_4395(); // 0x8c4 Call
	var_694_string = ""; // 0x8c6 PushV
	var_694_string = "Neutral"; // 0x8c7 MovS
	func_1378(var_36_bool, var_694_string); // 0x8c8 Call
	var_695_int = 6094; // 0x8ca PushI
	SetMessage(var_695_int); // 0x8cb TObjFunc
	ClearReplies(); // 0x8cd TObjFunc
	var_696_int = 6097; // 0x8cf PushI
	var_697_int = 6732; // 0x8d0 PushI
	var_698_int = 6731; // 0x8d1 PushI
	AddReply(var_696_int, var_697_int, var_698_int); // 0x8d2 TObjFunc
	var_699_int = 6102; // 0x8d4 PushI
	var_700_int = 6730; // 0x8d5 PushI
	var_701_int = 6736; // 0x8d6 PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0x8d7 TObjFunc
	return 0; // 0x8d9 Return
	
Label_2266:
	var_702_int = 6732; // 0x8da PushI
	var_703_bool = var_35_string == var_702_int; // 0x8db Eq
	if(var_703_bool == 0) goto Label_2294; // 0x8dc JumpB
	var_704_object = Obj(); var_705_object = Obj(); // 0x8dd PushV
	var_704_object = var_1_object; // 0x8de MovT
	var_705_object = var_0_object; // 0x8df MovT
	func_4485(); // 0x8e0 Call
	var_708_string = ""; // 0x8e2 PushV
	var_708_string = "Neutral"; // 0x8e3 MovS
	func_1378(var_36_bool, var_708_string); // 0x8e4 Call
	var_709_int = 6098; // 0x8e6 PushI
	SetMessage(var_709_int); // 0x8e7 TObjFunc
	ClearReplies(); // 0x8e9 TObjFunc
	var_710_int = 6099; // 0x8eb PushI
	var_711_int = 6734; // 0x8ec PushI
	var_712_int = 6733; // 0x8ed PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x8ee TObjFunc
	var_713_int = 6103; // 0x8f0 PushI
	var_714_int = 6730; // 0x8f1 PushI
	var_715_int = 6738; // 0x8f2 PushI
	AddReply(var_713_int, var_714_int, var_715_int); // 0x8f3 TObjFunc
	return 0; // 0x8f5 Return
	
Label_2294:
	var_716_int = 6734; // 0x8f6 PushI
	var_717_bool = var_35_string == var_716_int; // 0x8f7 Eq
	if(var_717_bool == 0) goto Label_2312; // 0x8f8 JumpB
	var_718_string = ""; // 0x8f9 PushV
	var_718_string = "Neutral"; // 0x8fa MovS
	func_1378(var_36_bool, var_718_string); // 0x8fb Call
	var_719_int = 6100; // 0x8fd PushI
	SetMessage(var_719_int); // 0x8fe TObjFunc
	ClearReplies(); // 0x900 TObjFunc
	var_720_int = 6101; // 0x902 PushI
	var_721_int = 6730; // 0x903 PushI
	var_722_int = 6735; // 0x904 PushI
	AddReply(var_720_int, var_721_int, var_722_int); // 0x905 TObjFunc
	return 0; // 0x907 Return
	
Label_2312:
	var_723_int = 6730; // 0x908 PushI
	var_724_bool = var_35_string == var_723_int; // 0x909 Eq
	if(var_724_bool == 0) goto Label_2335; // 0x90a JumpB
	var_725_string = ""; // 0x90b PushV
	var_725_string = "Neutral"; // 0x90c MovS
	func_1378(var_36_bool, var_725_string); // 0x90d Call
	var_726_int = 6096; // 0x90f PushI
	SetMessage(var_726_int); // 0x910 TObjFunc
	ClearReplies(); // 0x912 TObjFunc
	var_727_int = 6104; // 0x914 PushI
	var_728_int = 6745; // 0x915 PushI
	var_729_int = 6741; // 0x916 PushI
	AddReply(var_727_int, var_728_int, var_729_int); // 0x917 TObjFunc
	var_730_int = 6105; // 0x919 PushI
	var_731_int = 6743; // 0x91a PushI
	var_732_int = 6742; // 0x91b PushI
	AddReply(var_730_int, var_731_int, var_732_int); // 0x91c TObjFunc
	return 0; // 0x91e Return
	
Label_2335:
	var_733_int = 6743; // 0x91f PushI
	var_734_bool = var_35_string == var_733_int; // 0x920 Eq
	if(var_734_bool == 0) goto Label_2353; // 0x921 JumpB
	var_735_string = ""; // 0x922 PushV
	var_735_string = "Neutral"; // 0x923 MovS
	func_1378(var_36_bool, var_735_string); // 0x924 Call
	var_736_int = 6106; // 0x926 PushI
	SetMessage(var_736_int); // 0x927 TObjFunc
	ClearReplies(); // 0x929 TObjFunc
	var_737_int = 6107; // 0x92b PushI
	var_738_int = -1; // 0x92c PushI
	var_739_int = 6744; // 0x92d PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0x92e TObjFunc
	return 0; // 0x930 Return
	
Label_2353:
	var_740_int = 6745; // 0x931 PushI
	var_741_bool = var_35_string == var_740_int; // 0x932 Eq
	if(var_741_bool == 0) goto Label_2381; // 0x933 JumpB
	var_742_object = Obj(); var_743_object = Obj(); // 0x934 PushV
	var_742_object = var_1_object; // 0x935 MovT
	var_743_object = var_0_object; // 0x936 MovT
	func_4578(); // 0x937 Call
	var_746_string = ""; // 0x939 PushV
	var_746_string = "Neutral"; // 0x93a MovS
	func_1378(var_36_bool, var_746_string); // 0x93b Call
	var_747_int = 6108; // 0x93d PushI
	SetMessage(var_747_int); // 0x93e TObjFunc
	ClearReplies(); // 0x940 TObjFunc
	var_748_int = 6109; // 0x942 PushI
	var_749_int = -1; // 0x943 PushI
	var_750_int = 6746; // 0x944 PushI
	AddReply(var_748_int, var_749_int, var_750_int); // 0x945 TObjFunc
	var_751_int = 6110; // 0x947 PushI
	var_752_int = -1; // 0x948 PushI
	var_753_int = 6747; // 0x949 PushI
	AddReply(var_751_int, var_752_int, var_753_int); // 0x94a TObjFunc
	return 0; // 0x94c Return
	
Label_2381:
	var_754_int = 6052; // 0x94d PushI
	var_755_bool = var_35_string == var_754_int; // 0x94e Eq
	if(var_755_bool == 0) goto Label_2409; // 0x94f JumpB
	var_756_string = ""; // 0x950 PushV
	var_756_string = "Neutral"; // 0x951 MovS
	func_1378(var_36_bool, var_756_string); // 0x952 Call
	var_757_int = 5493; // 0x954 PushI
	SetMessage(var_757_int); // 0x955 TObjFunc
	ClearReplies(); // 0x957 TObjFunc
	var_758_int = 5494; // 0x959 PushI
	var_759_int = 6054; // 0x95a PushI
	var_760_int = 6053; // 0x95b PushI
	AddReply(var_758_int, var_759_int, var_760_int); // 0x95c TObjFunc
	var_761_int = 5504; // 0x95e PushI
	var_762_int = 6054; // 0x95f PushI
	var_763_int = 6064; // 0x960 PushI
	AddReply(var_761_int, var_762_int, var_763_int); // 0x961 TObjFunc
	var_764_int = 5523; // 0x963 PushI
	var_765_int = 6088; // 0x964 PushI
	var_766_int = 6087; // 0x965 PushI
	AddReply(var_764_int, var_765_int, var_766_int); // 0x966 TObjFunc
	return 0; // 0x968 Return
	
Label_2409:
	var_767_int = 6088; // 0x969 PushI
	var_768_bool = var_35_string == var_767_int; // 0x96a Eq
	if(var_768_bool == 0) goto Label_2427; // 0x96b JumpB
	var_769_string = ""; // 0x96c PushV
	var_769_string = "Neutral"; // 0x96d MovS
	func_1378(var_36_bool, var_769_string); // 0x96e Call
	var_770_int = 5524; // 0x970 PushI
	SetMessage(var_770_int); // 0x971 TObjFunc
	ClearReplies(); // 0x973 TObjFunc
	var_771_int = 5525; // 0x975 PushI
	var_772_int = -1; // 0x976 PushI
	var_773_int = 6089; // 0x977 PushI
	AddReply(var_771_int, var_772_int, var_773_int); // 0x978 TObjFunc
	return 0; // 0x97a Return
	
Label_2427:
	var_774_int = 6054; // 0x97b PushI
	var_775_bool = var_35_string == var_774_int; // 0x97c Eq
	if(var_775_bool == 0) goto Label_2450; // 0x97d JumpB
	var_776_string = ""; // 0x97e PushV
	var_776_string = "Neutral"; // 0x97f MovS
	func_1378(var_36_bool, var_776_string); // 0x980 Call
	var_777_int = 5495; // 0x982 PushI
	SetMessage(var_777_int); // 0x983 TObjFunc
	ClearReplies(); // 0x985 TObjFunc
	var_778_int = 5496; // 0x987 PushI
	var_779_int = 6056; // 0x988 PushI
	var_780_int = 6055; // 0x989 PushI
	AddReply(var_778_int, var_779_int, var_780_int); // 0x98a TObjFunc
	var_781_int = 5503; // 0x98c PushI
	var_782_int = 6058; // 0x98d PushI
	var_783_int = 6062; // 0x98e PushI
	AddReply(var_781_int, var_782_int, var_783_int); // 0x98f TObjFunc
	return 0; // 0x991 Return
	
Label_2450:
	var_784_int = 6056; // 0x992 PushI
	var_785_bool = var_35_string == var_784_int; // 0x993 Eq
	if(var_785_bool == 0) goto Label_2473; // 0x994 JumpB
	var_786_string = ""; // 0x995 PushV
	var_786_string = "Neutral"; // 0x996 MovS
	func_1378(var_36_bool, var_786_string); // 0x997 Call
	var_787_int = 5497; // 0x999 PushI
	SetMessage(var_787_int); // 0x99a TObjFunc
	ClearReplies(); // 0x99c TObjFunc
	var_788_int = 5498; // 0x99e PushI
	var_789_int = 6058; // 0x99f PushI
	var_790_int = 6057; // 0x9a0 PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0x9a1 TObjFunc
	var_791_int = 5502; // 0x9a3 PushI
	var_792_int = -1; // 0x9a4 PushI
	var_793_int = 6061; // 0x9a5 PushI
	AddReply(var_791_int, var_792_int, var_793_int); // 0x9a6 TObjFunc
	return 0; // 0x9a8 Return
	
Label_2473:
	var_794_int = 6058; // 0x9a9 PushI
	var_795_bool = var_35_string == var_794_int; // 0x9aa Eq
	if(var_795_bool == 0) goto Label_2496; // 0x9ab JumpB
	var_796_string = ""; // 0x9ac PushV
	var_796_string = "Neutral"; // 0x9ad MovS
	func_1378(var_36_bool, var_796_string); // 0x9ae Call
	var_797_int = 5499; // 0x9b0 PushI
	SetMessage(var_797_int); // 0x9b1 TObjFunc
	ClearReplies(); // 0x9b3 TObjFunc
	var_798_int = 5500; // 0x9b5 PushI
	var_799_int = -1; // 0x9b6 PushI
	var_800_int = 6059; // 0x9b7 PushI
	AddReply(var_798_int, var_799_int, var_800_int); // 0x9b8 TObjFunc
	var_801_int = 5501; // 0x9ba PushI
	var_802_int = -1; // 0x9bb PushI
	var_803_int = 6060; // 0x9bc PushI
	AddReply(var_801_int, var_802_int, var_803_int); // 0x9bd TObjFunc
	return 0; // 0x9bf Return
	
Label_2496:
	var_3_string = 1; // 0x9c0 TMovB
	var_804_bool = 0; // 0x9c1 PushV
	func_4236(var_804_bool); // 0x9c2 Call
	if(var_804_bool == 0) goto Label_2504; // 0x9c4 JumpB
	lshStopAnimation(); // 0x9c5 Func
	goto Label_2506; // 0x9c7 Jump
	
Label_2506:
	return 0; // 0x9ca Return
	
Label_2504:
	StopAnimation(); // 0x9c8 Func
	
Label_2508:
	return 0; // 0x9cc Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xa75 PushI
	if(var_37_int == 0) goto Label_2826; // 0xa76 JumpB
	func_4115(); // 0xa78 Call
	var_39_int = 10246; // 0xa7a PushI
	var_40_bool = var_35_string == var_39_int; // 0xa7b Eq
	if(var_40_bool == 0) goto Label_2735; // 0xa7c JumpB
	var_41_string = ""; // 0xa7d PushV
	var_41_string = "Neutral"; // 0xa7e MovS
	func_2660(var_36_bool, var_41_string); // 0xa7f Call
	var_56_int = 9330; // 0xa81 PushI
	SetMessage(var_56_int); // 0xa82 TObjFunc
	ClearReplies(); // 0xa84 TObjFunc
	var_57_int = 9331; // 0xa86 PushI
	var_58_int = 10248; // 0xa87 PushI
	var_59_int = 10247; // 0xa88 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xa89 TObjFunc
	var_60_int = 9340; // 0xa8b PushI
	var_61_int = 10248; // 0xa8c PushI
	var_62_int = 10258; // 0xa8d PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xa8e TObjFunc
	var_63_int = 9341; // 0xa90 PushI
	var_64_int = 10248; // 0xa91 PushI
	var_65_int = 10260; // 0xa92 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xa93 TObjFunc
	return 0; // 0xa95 Return
	
Label_2735:
	var_66_int = 10239; // 0xaaf PushI
	var_67_bool = var_35_string == var_66_int; // 0xab0 Eq
	if(var_67_bool == 0) goto Label_2758; // 0xab1 JumpB
	var_68_string = ""; // 0xab2 PushV
	var_68_string = "Neutral"; // 0xab3 MovS
	func_2660(var_36_bool, var_68_string); // 0xab4 Call
	var_69_int = 9325; // 0xab6 PushI
	SetMessage(var_69_int); // 0xab7 TObjFunc
	ClearReplies(); // 0xab9 TObjFunc
	var_70_int = 9326; // 0xabb PushI
	var_71_int = -1; // 0xabc PushI
	var_72_int = 10240; // 0xabd PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xabe TObjFunc
	var_73_int = 9327; // 0xac0 PushI
	var_74_int = -1; // 0xac1 PushI
	var_75_int = 10241; // 0xac2 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xac3 TObjFunc
	return 0; // 0xac5 Return
	
Label_2758:
	var_76_int = 10248; // 0xac6 PushI
	var_77_bool = var_35_string == var_76_int; // 0xac7 Eq
	if(var_77_bool == 0) goto Label_2786; // 0xac8 JumpB
	var_78_string = ""; // 0xac9 PushV
	var_78_string = "Neutral"; // 0xaca MovS
	func_2660(var_36_bool, var_78_string); // 0xacb Call
	var_79_int = 9332; // 0xacd PushI
	SetMessage(var_79_int); // 0xace TObjFunc
	ClearReplies(); // 0xad0 TObjFunc
	var_80_int = 9333; // 0xad2 PushI
	var_81_int = 10250; // 0xad3 PushI
	var_82_int = 10249; // 0xad4 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xad5 TObjFunc
	var_83_int = 9338; // 0xad7 PushI
	var_84_int = 10250; // 0xad8 PushI
	var_85_int = 10254; // 0xad9 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xada TObjFunc
	var_86_int = 9339; // 0xadc PushI
	var_87_int = 10250; // 0xadd PushI
	var_88_int = 10256; // 0xade PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xadf TObjFunc
	return 0; // 0xae1 Return
	
Label_2786:
	var_89_int = 10250; // 0xae2 PushI
	var_90_bool = var_35_string == var_89_int; // 0xae3 Eq
	if(var_90_bool == 0) goto Label_2814; // 0xae4 JumpB
	var_91_string = ""; // 0xae5 PushV
	var_91_string = "Neutral"; // 0xae6 MovS
	func_2660(var_36_bool, var_91_string); // 0xae7 Call
	var_92_int = 9334; // 0xae9 PushI
	SetMessage(var_92_int); // 0xaea TObjFunc
	ClearReplies(); // 0xaec TObjFunc
	var_93_int = 9335; // 0xaee PushI
	var_94_int = -1; // 0xaef PushI
	var_95_int = 10251; // 0xaf0 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xaf1 TObjFunc
	var_96_int = 9336; // 0xaf3 PushI
	var_97_int = -1; // 0xaf4 PushI
	var_98_int = 10252; // 0xaf5 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xaf6 TObjFunc
	var_99_int = 9337; // 0xaf8 PushI
	var_100_int = -1; // 0xaf9 PushI
	var_101_int = 10253; // 0xafa PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xafb TObjFunc
	return 0; // 0xafd Return
	
Label_2814:
	var_3_string = 1; // 0xafe TMovB
	var_102_bool = 0; // 0xaff PushV
	func_4236(var_102_bool); // 0xb00 Call
	if(var_102_bool == 0) goto Label_2822; // 0xb02 JumpB
	lshStopAnimation(); // 0xb03 Func
	goto Label_2824; // 0xb05 Jump
	
Label_2824:
	return 0; // 0xb08 Return
	
Label_2822:
	StopAnimation(); // 0xb06 Func
	
Label_2826:
	return 0; // 0xb0a Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xbc2 PushI
	if(var_37_int == 0) goto Label_3425; // 0xbc3 JumpB
	func_4115(); // 0xbc5 Call
	var_39_int = 10945; // 0xbc7 PushI
	var_40_bool = var_36_bool == var_39_int; // 0xbc8 Eq
	if(var_40_bool == 0) goto Label_3028; // 0xbc9 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xbca PushV
	var_41_object = var_1_object; // 0xbcb MovT
	var_42_object = var_0_object; // 0xbcc MovT
	func_4590(var_42_object); // 0xbcd Call
	var_60_object = Obj(); var_61_object = Obj(); // 0xbcf PushV
	var_60_object = var_1_object; // 0xbd0 MovT
	var_61_object = var_0_object; // 0xbd1 MovT
	func_4334(); // 0xbd2 Call
	
Label_3028:
	var_64_int = 10946; // 0xbd4 PushI
	var_65_bool = var_36_bool == var_64_int; // 0xbd5 Eq
	if(var_65_bool == 0) goto Label_3041; // 0xbd6 JumpB
	var_66_object = Obj(); var_67_object = Obj(); // 0xbd7 PushV
	var_66_object = var_1_object; // 0xbd8 MovT
	var_67_object = var_0_object; // 0xbd9 MovT
	func_4590(var_67_object); // 0xbda Call
	var_68_object = Obj(); var_69_object = Obj(); // 0xbdc PushV
	var_68_object = var_1_object; // 0xbdd MovT
	var_69_object = var_0_object; // 0xbde MovT
	func_4334(); // 0xbdf Call
	
Label_3041:
	var_70_int = 10936; // 0xbe1 PushI
	var_71_bool = var_35_string == var_70_int; // 0xbe2 Eq
	if(var_71_bool == 0) goto Label_3109; // 0xbe3 JumpB
	var_72_bool = 0; // 0xbe4 PushV
	var_72_bool = 0; // 0xbe5 MovB
	var_73_bool = 0; var_74_object = Obj(); // 0xbe6 PushV
	var_74_object = var_1_object; // 0xbe7 MovT
	func_4916(var_74_object); // 0xbe8 Call
	if(var_73_bool == 0) goto Label_3058; // 0xbea JumpB
	var_81_bool = 0; var_82_object = Obj(); // 0xbeb PushV
	var_82_object = var_1_object; // 0xbec MovT
	func_4772(var_82_object); // 0xbed Call
	var_87_bool = var_81_bool == 0; // 0xbef Not
	if(var_87_bool == 0) goto Label_3058; // 0xbf0 JumpB
	var_72_bool = 1; // 0xbf1 MovB
	
Label_3058:
	if(var_72_bool == 0) goto Label_3084; // 0xbf2 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0xbf3 PushV
	var_88_object = var_1_object; // 0xbf4 MovT
	var_89_object = var_0_object; // 0xbf5 MovT
	func_4584(); // 0xbf6 Call
	var_92_string = ""; // 0xbf8 PushV
	var_92_string = "Neutral"; // 0xbf9 MovS
	func_2993(var_36_bool, var_92_string); // 0xbfa Call
	var_107_int = 9926; // 0xbfc PushI
	SetMessage(var_107_int); // 0xbfd TObjFunc
	ClearReplies(); // 0xbff TObjFunc
	var_108_int = 9927; // 0xc01 PushI
	var_109_int = 10938; // 0xc02 PushI
	var_110_int = 10937; // 0xc03 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0xc04 TObjFunc
	var_111_int = 9940; // 0xc06 PushI
	var_112_int = 10954; // 0xc07 PushI
	var_113_int = 10953; // 0xc08 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xc09 TObjFunc
	return 0; // 0xc0b Return
	
Label_3084:
	var_114_bool = 0; var_115_object = Obj(); // 0xc0c PushV
	var_115_object = var_1_object; // 0xc0d MovT
	func_4690(var_114_bool, var_115_object); // 0xc0e Call
	if(var_114_bool == 0) goto Label_3109; // 0xc10 JumpB
	var_118_string = ""; // 0xc11 PushV
	var_118_string = "Neutral"; // 0xc12 MovS
	func_2993(var_36_bool, var_118_string); // 0xc13 Call
	var_119_int = 10178; // 0xc15 PushI
	SetMessage(var_119_int); // 0xc16 TObjFunc
	ClearReplies(); // 0xc18 TObjFunc
	var_120_int = 10186; // 0xc1a PushI
	var_121_int = 11233; // 0xc1b PushI
	var_122_int = 11232; // 0xc1c PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0xc1d TObjFunc
	var_123_int = 10464; // 0xc1f PushI
	var_124_int = 11233; // 0xc20 PushI
	var_125_int = 11537; // 0xc21 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xc22 TObjFunc
	return 0; // 0xc24 Return
	
Label_3109:
	var_126_int = 11233; // 0xc25 PushI
	var_127_bool = var_35_string == var_126_int; // 0xc26 Eq
	if(var_127_bool == 0) goto Label_3132; // 0xc27 JumpB
	var_128_string = ""; // 0xc28 PushV
	var_128_string = "Neutral"; // 0xc29 MovS
	func_2993(var_36_bool, var_128_string); // 0xc2a Call
	var_129_int = 10187; // 0xc2c PushI
	SetMessage(var_129_int); // 0xc2d TObjFunc
	ClearReplies(); // 0xc2f TObjFunc
	var_130_int = 10179; // 0xc31 PushI
	var_131_int = 11226; // 0xc32 PushI
	var_132_int = 11225; // 0xc33 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0xc34 TObjFunc
	var_133_int = 10463; // 0xc36 PushI
	var_134_int = 11226; // 0xc37 PushI
	var_135_int = 11536; // 0xc38 PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0xc39 TObjFunc
	return 0; // 0xc3b Return
	
Label_3132:
	var_136_int = 11226; // 0xc3c PushI
	var_137_bool = var_35_string == var_136_int; // 0xc3d Eq
	if(var_137_bool == 0) goto Label_3155; // 0xc3e JumpB
	var_138_string = ""; // 0xc3f PushV
	var_138_string = "Neutral"; // 0xc40 MovS
	func_2993(var_36_bool, var_138_string); // 0xc41 Call
	var_139_int = 10180; // 0xc43 PushI
	SetMessage(var_139_int); // 0xc44 TObjFunc
	ClearReplies(); // 0xc46 TObjFunc
	var_140_int = 10465; // 0xc48 PushI
	var_141_int = 11541; // 0xc49 PushI
	var_142_int = 11540; // 0xc4a PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0xc4b TObjFunc
	var_143_int = 10470; // 0xc4d PushI
	var_144_int = 11228; // 0xc4e PushI
	var_145_int = 11547; // 0xc4f PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0xc50 TObjFunc
	return 0; // 0xc52 Return
	
Label_3155:
	var_146_int = 11541; // 0xc53 PushI
	var_147_bool = var_35_string == var_146_int; // 0xc54 Eq
	if(var_147_bool == 0) goto Label_3183; // 0xc55 JumpB
	var_148_string = ""; // 0xc56 PushV
	var_148_string = "Neutral"; // 0xc57 MovS
	func_2993(var_36_bool, var_148_string); // 0xc58 Call
	var_149_int = 10466; // 0xc5a PushI
	SetMessage(var_149_int); // 0xc5b TObjFunc
	ClearReplies(); // 0xc5d TObjFunc
	var_150_int = 10181; // 0xc5f PushI
	var_151_int = 11228; // 0xc60 PushI
	var_152_int = 11227; // 0xc61 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0xc62 TObjFunc
	var_153_int = 10467; // 0xc64 PushI
	var_154_int = 11228; // 0xc65 PushI
	var_155_int = 11542; // 0xc66 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0xc67 TObjFunc
	var_156_int = 10468; // 0xc69 PushI
	var_157_int = 11228; // 0xc6a PushI
	var_158_int = 11543; // 0xc6b PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0xc6c TObjFunc
	return 0; // 0xc6e Return
	
Label_3183:
	var_159_int = 11228; // 0xc6f PushI
	var_160_bool = var_35_string == var_159_int; // 0xc70 Eq
	if(var_160_bool == 0) goto Label_3201; // 0xc71 JumpB
	var_161_string = ""; // 0xc72 PushV
	var_161_string = "Neutral"; // 0xc73 MovS
	func_2993(var_36_bool, var_161_string); // 0xc74 Call
	var_162_int = 10182; // 0xc76 PushI
	SetMessage(var_162_int); // 0xc77 TObjFunc
	ClearReplies(); // 0xc79 TObjFunc
	var_163_int = 10183; // 0xc7b PushI
	var_164_int = 11230; // 0xc7c PushI
	var_165_int = 11229; // 0xc7d PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0xc7e TObjFunc
	return 0; // 0xc80 Return
	
Label_3201:
	var_166_int = 11230; // 0xc81 PushI
	var_167_bool = var_35_string == var_166_int; // 0xc82 Eq
	if(var_167_bool == 0) goto Label_3224; // 0xc83 JumpB
	var_168_string = ""; // 0xc84 PushV
	var_168_string = "Neutral"; // 0xc85 MovS
	func_2993(var_36_bool, var_168_string); // 0xc86 Call
	var_169_int = 10184; // 0xc88 PushI
	SetMessage(var_169_int); // 0xc89 TObjFunc
	ClearReplies(); // 0xc8b TObjFunc
	var_170_int = 10185; // 0xc8d PushI
	var_171_int = 11234; // 0xc8e PushI
	var_172_int = 11231; // 0xc8f PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0xc90 TObjFunc
	var_173_int = 10469; // 0xc92 PushI
	var_174_int = -1; // 0xc93 PushI
	var_175_int = 11546; // 0xc94 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0xc95 TObjFunc
	return 0; // 0xc97 Return
	
Label_3224:
	var_176_int = 11234; // 0xc98 PushI
	var_177_bool = var_35_string == var_176_int; // 0xc99 Eq
	if(var_177_bool == 0) goto Label_3252; // 0xc9a JumpB
	var_178_string = ""; // 0xc9b PushV
	var_178_string = "Neutral"; // 0xc9c MovS
	func_2993(var_36_bool, var_178_string); // 0xc9d Call
	var_179_int = 10188; // 0xc9f PushI
	SetMessage(var_179_int); // 0xca0 TObjFunc
	ClearReplies(); // 0xca2 TObjFunc
	var_180_int = 10189; // 0xca4 PushI
	var_181_int = -1; // 0xca5 PushI
	var_182_int = 11235; // 0xca6 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0xca7 TObjFunc
	var_183_int = 10471; // 0xca9 PushI
	var_184_int = -1; // 0xcaa PushI
	var_185_int = 11549; // 0xcab PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0xcac TObjFunc
	var_186_int = 10472; // 0xcae PushI
	var_187_int = -1; // 0xcaf PushI
	var_188_int = 11550; // 0xcb0 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0xcb1 TObjFunc
	return 0; // 0xcb3 Return
	
Label_3252:
	var_189_int = 10954; // 0xcb4 PushI
	var_190_bool = var_35_string == var_189_int; // 0xcb5 Eq
	if(var_190_bool == 0) goto Label_3275; // 0xcb6 JumpB
	var_191_string = ""; // 0xcb7 PushV
	var_191_string = "Neutral"; // 0xcb8 MovS
	func_2993(var_36_bool, var_191_string); // 0xcb9 Call
	var_192_int = 9941; // 0xcbb PushI
	SetMessage(var_192_int); // 0xcbc TObjFunc
	ClearReplies(); // 0xcbe TObjFunc
	var_193_int = 9942; // 0xcc0 PushI
	var_194_int = 10956; // 0xcc1 PushI
	var_195_int = 10955; // 0xcc2 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0xcc3 TObjFunc
	var_196_int = 9949; // 0xcc5 PushI
	var_197_int = 10938; // 0xcc6 PushI
	var_198_int = 10965; // 0xcc7 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0xcc8 TObjFunc
	return 0; // 0xcca Return
	
Label_3275:
	var_199_int = 10956; // 0xccb PushI
	var_200_bool = var_35_string == var_199_int; // 0xccc Eq
	if(var_200_bool == 0) goto Label_3298; // 0xccd JumpB
	var_201_string = ""; // 0xcce PushV
	var_201_string = "Neutral"; // 0xccf MovS
	func_2993(var_36_bool, var_201_string); // 0xcd0 Call
	var_202_int = 9943; // 0xcd2 PushI
	SetMessage(var_202_int); // 0xcd3 TObjFunc
	ClearReplies(); // 0xcd5 TObjFunc
	var_203_int = 9944; // 0xcd7 PushI
	var_204_int = 10958; // 0xcd8 PushI
	var_205_int = 10957; // 0xcd9 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0xcda TObjFunc
	var_206_int = 9948; // 0xcdc PushI
	var_207_int = 10938; // 0xcdd PushI
	var_208_int = 10963; // 0xcde PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xcdf TObjFunc
	return 0; // 0xce1 Return
	
Label_3298:
	var_209_int = 10958; // 0xce2 PushI
	var_210_bool = var_35_string == var_209_int; // 0xce3 Eq
	if(var_210_bool == 0) goto Label_3321; // 0xce4 JumpB
	var_211_string = ""; // 0xce5 PushV
	var_211_string = "Neutral"; // 0xce6 MovS
	func_2993(var_36_bool, var_211_string); // 0xce7 Call
	var_212_int = 9945; // 0xce9 PushI
	SetMessage(var_212_int); // 0xcea TObjFunc
	ClearReplies(); // 0xcec TObjFunc
	var_213_int = 9946; // 0xcee PushI
	var_214_int = 10938; // 0xcef PushI
	var_215_int = 10959; // 0xcf0 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xcf1 TObjFunc
	var_216_int = 9947; // 0xcf3 PushI
	var_217_int = 10938; // 0xcf4 PushI
	var_218_int = 10961; // 0xcf5 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0xcf6 TObjFunc
	return 0; // 0xcf8 Return
	
Label_3321:
	var_219_int = 10938; // 0xcf9 PushI
	var_220_bool = var_35_string == var_219_int; // 0xcfa Eq
	if(var_220_bool == 0) goto Label_3344; // 0xcfb JumpB
	var_221_string = ""; // 0xcfc PushV
	var_221_string = "Neutral"; // 0xcfd MovS
	func_2993(var_36_bool, var_221_string); // 0xcfe Call
	var_222_int = 9928; // 0xd00 PushI
	SetMessage(var_222_int); // 0xd01 TObjFunc
	ClearReplies(); // 0xd03 TObjFunc
	var_223_int = 9929; // 0xd05 PushI
	var_224_int = 10940; // 0xd06 PushI
	var_225_int = 10939; // 0xd07 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xd08 TObjFunc
	var_226_int = 9939; // 0xd0a PushI
	var_227_int = 10942; // 0xd0b PushI
	var_228_int = 10951; // 0xd0c PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xd0d TObjFunc
	return 0; // 0xd0f Return
	
Label_3344:
	var_229_int = 10940; // 0xd10 PushI
	var_230_bool = var_35_string == var_229_int; // 0xd11 Eq
	if(var_230_bool == 0) goto Label_3367; // 0xd12 JumpB
	var_231_string = ""; // 0xd13 PushV
	var_231_string = "Neutral"; // 0xd14 MovS
	func_2993(var_36_bool, var_231_string); // 0xd15 Call
	var_232_int = 9930; // 0xd17 PushI
	SetMessage(var_232_int); // 0xd18 TObjFunc
	ClearReplies(); // 0xd1a TObjFunc
	var_233_int = 9931; // 0xd1c PushI
	var_234_int = 10942; // 0xd1d PushI
	var_235_int = 10941; // 0xd1e PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0xd1f TObjFunc
	var_236_int = 9938; // 0xd21 PushI
	var_237_int = 10942; // 0xd22 PushI
	var_238_int = 10949; // 0xd23 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xd24 TObjFunc
	return 0; // 0xd26 Return
	
Label_3367:
	var_239_int = 10942; // 0xd27 PushI
	var_240_bool = var_35_string == var_239_int; // 0xd28 Eq
	if(var_240_bool == 0) goto Label_3390; // 0xd29 JumpB
	var_241_string = ""; // 0xd2a PushV
	var_241_string = "Neutral"; // 0xd2b MovS
	func_2993(var_36_bool, var_241_string); // 0xd2c Call
	var_242_int = 9932; // 0xd2e PushI
	SetMessage(var_242_int); // 0xd2f TObjFunc
	ClearReplies(); // 0xd31 TObjFunc
	var_243_int = 9933; // 0xd33 PushI
	var_244_int = 10944; // 0xd34 PushI
	var_245_int = 10943; // 0xd35 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0xd36 TObjFunc
	var_246_int = 9937; // 0xd38 PushI
	var_247_int = 10944; // 0xd39 PushI
	var_248_int = 10947; // 0xd3a PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0xd3b TObjFunc
	return 0; // 0xd3d Return
	
Label_3390:
	var_249_int = 10944; // 0xd3e PushI
	var_250_bool = var_35_string == var_249_int; // 0xd3f Eq
	if(var_250_bool == 0) goto Label_3413; // 0xd40 JumpB
	var_251_string = ""; // 0xd41 PushV
	var_251_string = "Neutral"; // 0xd42 MovS
	func_2993(var_36_bool, var_251_string); // 0xd43 Call
	var_252_int = 9934; // 0xd45 PushI
	SetMessage(var_252_int); // 0xd46 TObjFunc
	ClearReplies(); // 0xd48 TObjFunc
	var_253_int = 9935; // 0xd4a PushI
	var_254_int = -1; // 0xd4b PushI
	var_255_int = 10945; // 0xd4c PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xd4d TObjFunc
	var_256_int = 9936; // 0xd4f PushI
	var_257_int = -1; // 0xd50 PushI
	var_258_int = 10946; // 0xd51 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0xd52 TObjFunc
	return 0; // 0xd54 Return
	
Label_3413:
	var_3_string = 1; // 0xd55 TMovB
	var_259_bool = 0; // 0xd56 PushV
	func_4236(var_259_bool); // 0xd57 Call
	if(var_259_bool == 0) goto Label_3421; // 0xd59 JumpB
	lshStopAnimation(); // 0xd5a Func
	goto Label_3423; // 0xd5c Jump
	
Label_3423:
	return 0; // 0xd5f Return
	
Label_3421:
	StopAnimation(); // 0xd5d Func
	
Label_3425:
	return 0; // 0xd61 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xdf1 PushI
	if(var_37_int == 0) goto Label_3663; // 0xdf2 JumpB
	func_4115(); // 0xdf4 Call
	var_39_int = 12392; // 0xdf6 PushI
	var_40_bool = var_36_bool == var_39_int; // 0xdf7 Eq
	if(var_40_bool == 0) goto Label_3582; // 0xdf8 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xdf9 PushV
	var_41_object = var_1_object; // 0xdfa MovT
	var_42_object = var_0_object; // 0xdfb MovT
	func_4601(); // 0xdfc Call
	
Label_3582:
	var_45_int = 12391; // 0xdfe PushI
	var_46_bool = var_35_string == var_45_int; // 0xdff Eq
	if(var_46_bool == 0) goto Label_3610; // 0xe00 JumpB
	var_47_string = ""; // 0xe01 PushV
	var_47_string = "Neutral"; // 0xe02 MovS
	func_3552(var_36_bool, var_47_string); // 0xe03 Call
	var_62_int = 11203; // 0xe05 PushI
	SetMessage(var_62_int); // 0xe06 TObjFunc
	ClearReplies(); // 0xe08 TObjFunc
	var_63_bool = 0; var_64_object = Obj(); // 0xe0a PushV
	var_64_object = var_1_object; // 0xe0b MovT
	func_4928(var_64_object); // 0xe0c Call
	if(var_63_bool == 0) goto Label_3604; // 0xe0e JumpB
	var_71_int = 11204; // 0xe0f PushI
	var_72_int = 12393; // 0xe10 PushI
	var_73_int = 12392; // 0xe11 PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0xe12 TObjFunc
	
Label_3604:
	var_74_int = 15336; // 0xe14 PushI
	var_75_int = -1; // 0xe15 PushI
	var_76_int = 16559; // 0xe16 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xe17 TObjFunc
	return 0; // 0xe19 Return
	
Label_3610:
	var_77_int = 12393; // 0xe1a PushI
	var_78_bool = var_35_string == var_77_int; // 0xe1b Eq
	if(var_78_bool == 0) goto Label_3628; // 0xe1c JumpB
	var_79_string = ""; // 0xe1d PushV
	var_79_string = "Neutral"; // 0xe1e MovS
	func_3552(var_36_bool, var_79_string); // 0xe1f Call
	var_80_int = 11205; // 0xe21 PushI
	SetMessage(var_80_int); // 0xe22 TObjFunc
	ClearReplies(); // 0xe24 TObjFunc
	var_81_int = 11206; // 0xe26 PushI
	var_82_int = 12395; // 0xe27 PushI
	var_83_int = 12394; // 0xe28 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0xe29 TObjFunc
	return 0; // 0xe2b Return
	
Label_3628:
	var_84_int = 12395; // 0xe2c PushI
	var_85_bool = var_35_string == var_84_int; // 0xe2d Eq
	if(var_85_bool == 0) goto Label_3651; // 0xe2e JumpB
	var_86_string = ""; // 0xe2f PushV
	var_86_string = "Neutral"; // 0xe30 MovS
	func_3552(var_36_bool, var_86_string); // 0xe31 Call
	var_87_int = 11207; // 0xe33 PushI
	SetMessage(var_87_int); // 0xe34 TObjFunc
	ClearReplies(); // 0xe36 TObjFunc
	var_88_int = 11208; // 0xe38 PushI
	var_89_int = -1; // 0xe39 PushI
	var_90_int = 12396; // 0xe3a PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0xe3b TObjFunc
	var_91_int = 11209; // 0xe3d PushI
	var_92_int = -1; // 0xe3e PushI
	var_93_int = 12397; // 0xe3f PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0xe40 TObjFunc
	return 0; // 0xe42 Return
	
Label_3651:
	var_3_string = 1; // 0xe43 TMovB
	var_94_bool = 0; // 0xe44 PushV
	func_4236(var_94_bool); // 0xe45 Call
	if(var_94_bool == 0) goto Label_3659; // 0xe47 JumpB
	lshStopAnimation(); // 0xe48 Func
	goto Label_3661; // 0xe4a Jump
	
Label_3661:
	return 0; // 0xe4d Return
	
Label_3659:
	StopAnimation(); // 0xe4b Func
	
Label_3663:
	return 0; // 0xe4f Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	var_37_int = 1; // 0xee4 PushI
	if(var_37_int == 0) goto Label_4019; // 0xee5 JumpB
	func_4115(); // 0xee7 Call
	var_39_int = 12849; // 0xee9 PushI
	var_40_bool = var_36_int == var_39_int; // 0xeea Eq
	if(var_40_bool == 0) goto Label_3830; // 0xeeb JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xeec PushV
	var_41_object = var_1_object; // 0xeed MovT
	var_42_object = var_0_object; // 0xeee MovT
	func_4491(); // 0xeef Call
	var_86_object = Obj(); var_87_object = Obj(); // 0xef1 PushV
	var_86_object = var_1_object; // 0xef2 MovT
	var_87_object = var_0_object; // 0xef3 MovT
	func_4469(); // 0xef4 Call
	
Label_3830:
	var_112_int = 12840; // 0xef6 PushI
	var_113_bool = var_35_int == var_112_int; // 0xef7 Eq
	if(var_113_bool == 0) goto Label_3863; // 0xef8 JumpB
	var_114_string = ""; // 0xef9 PushV
	var_114_string = "Neutral"; // 0xefa MovS
	func_3795(var_36_int, var_114_string); // 0xefb Call
	var_129_int = 11641; // 0xefd PushI
	SetMessage(var_129_int); // 0xefe TObjFunc
	ClearReplies(); // 0xf00 TObjFunc
	var_130_bool = 0; var_131_object = Obj(); // 0xf02 PushV
	var_131_object = var_1_object; // 0xf03 MovT
	func_4784(var_131_object); // 0xf04 Call
	if(var_130_bool == 0) goto Label_3852; // 0xf06 JumpB
	var_138_int = 11642; // 0xf07 PushI
	var_139_int = 12842; // 0xf08 PushI
	var_140_int = 12841; // 0xf09 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0xf0a TObjFunc
	
Label_3852:
	var_141_int = 11651; // 0xf0c PushI
	var_142_int = 12851; // 0xf0d PushI
	var_143_int = 12850; // 0xf0e PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0xf0f TObjFunc
	var_144_int = 11660; // 0xf11 PushI
	var_145_int = -1; // 0xf12 PushI
	var_146_int = 12859; // 0xf13 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0xf14 TObjFunc
	return 0; // 0xf16 Return
	
Label_3863:
	var_147_int = 12851; // 0xf17 PushI
	var_148_bool = var_35_int == var_147_int; // 0xf18 Eq
	if(var_148_bool == 0) goto Label_3881; // 0xf19 JumpB
	var_149_string = ""; // 0xf1a PushV
	var_149_string = "Neutral"; // 0xf1b MovS
	func_3795(var_36_int, var_149_string); // 0xf1c Call
	var_150_int = 11652; // 0xf1e PushI
	SetMessage(var_150_int); // 0xf1f TObjFunc
	ClearReplies(); // 0xf21 TObjFunc
	var_151_int = 11653; // 0xf23 PushI
	var_152_int = 12853; // 0xf24 PushI
	var_153_int = 12852; // 0xf25 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0xf26 TObjFunc
	return 0; // 0xf28 Return
	
Label_3881:
	var_154_int = 12853; // 0xf29 PushI
	var_155_bool = var_35_int == var_154_int; // 0xf2a Eq
	if(var_155_bool == 0) goto Label_3899; // 0xf2b JumpB
	var_156_string = ""; // 0xf2c PushV
	var_156_string = "Neutral"; // 0xf2d MovS
	func_3795(var_36_int, var_156_string); // 0xf2e Call
	var_157_int = 11654; // 0xf30 PushI
	SetMessage(var_157_int); // 0xf31 TObjFunc
	ClearReplies(); // 0xf33 TObjFunc
	var_158_int = 11655; // 0xf35 PushI
	var_159_int = 12855; // 0xf36 PushI
	var_160_int = 12854; // 0xf37 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0xf38 TObjFunc
	return 0; // 0xf3a Return
	
Label_3899:
	var_161_int = 12855; // 0xf3b PushI
	var_162_bool = var_35_int == var_161_int; // 0xf3c Eq
	if(var_162_bool == 0) goto Label_3917; // 0xf3d JumpB
	var_163_string = ""; // 0xf3e PushV
	var_163_string = "Neutral"; // 0xf3f MovS
	func_3795(var_36_int, var_163_string); // 0xf40 Call
	var_164_int = 11656; // 0xf42 PushI
	SetMessage(var_164_int); // 0xf43 TObjFunc
	ClearReplies(); // 0xf45 TObjFunc
	var_165_int = 11657; // 0xf47 PushI
	var_166_int = 12857; // 0xf48 PushI
	var_167_int = 12856; // 0xf49 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0xf4a TObjFunc
	return 0; // 0xf4c Return
	
Label_3917:
	var_168_int = 12857; // 0xf4d PushI
	var_169_bool = var_35_int == var_168_int; // 0xf4e Eq
	if(var_169_bool == 0) goto Label_3935; // 0xf4f JumpB
	var_170_string = ""; // 0xf50 PushV
	var_170_string = "Neutral"; // 0xf51 MovS
	func_3795(var_36_int, var_170_string); // 0xf52 Call
	var_171_int = 11658; // 0xf54 PushI
	SetMessage(var_171_int); // 0xf55 TObjFunc
	ClearReplies(); // 0xf57 TObjFunc
	var_172_int = 11659; // 0xf59 PushI
	var_173_int = -1; // 0xf5a PushI
	var_174_int = 12858; // 0xf5b PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0xf5c TObjFunc
	return 0; // 0xf5e Return
	
Label_3935:
	var_175_int = 12842; // 0xf5f PushI
	var_176_bool = var_35_int == var_175_int; // 0xf60 Eq
	if(var_176_bool == 0) goto Label_3953; // 0xf61 JumpB
	var_177_string = ""; // 0xf62 PushV
	var_177_string = "Neutral"; // 0xf63 MovS
	func_3795(var_36_int, var_177_string); // 0xf64 Call
	var_178_int = 11643; // 0xf66 PushI
	SetMessage(var_178_int); // 0xf67 TObjFunc
	ClearReplies(); // 0xf69 TObjFunc
	var_179_int = 11644; // 0xf6b PushI
	var_180_int = 12844; // 0xf6c PushI
	var_181_int = 12843; // 0xf6d PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xf6e TObjFunc
	return 0; // 0xf70 Return
	
Label_3953:
	var_182_int = 12844; // 0xf71 PushI
	var_183_bool = var_35_int == var_182_int; // 0xf72 Eq
	if(var_183_bool == 0) goto Label_3971; // 0xf73 JumpB
	var_184_string = ""; // 0xf74 PushV
	var_184_string = "Neutral"; // 0xf75 MovS
	func_3795(var_36_int, var_184_string); // 0xf76 Call
	var_185_int = 11645; // 0xf78 PushI
	SetMessage(var_185_int); // 0xf79 TObjFunc
	ClearReplies(); // 0xf7b TObjFunc
	var_186_int = 11646; // 0xf7d PushI
	var_187_int = 12846; // 0xf7e PushI
	var_188_int = 12845; // 0xf7f PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0xf80 TObjFunc
	return 0; // 0xf82 Return
	
Label_3971:
	var_189_int = 12846; // 0xf83 PushI
	var_190_bool = var_35_int == var_189_int; // 0xf84 Eq
	if(var_190_bool == 0) goto Label_3989; // 0xf85 JumpB
	var_191_string = ""; // 0xf86 PushV
	var_191_string = "Neutral"; // 0xf87 MovS
	func_3795(var_36_int, var_191_string); // 0xf88 Call
	var_192_int = 11647; // 0xf8a PushI
	SetMessage(var_192_int); // 0xf8b TObjFunc
	ClearReplies(); // 0xf8d TObjFunc
	var_193_int = 11648; // 0xf8f PushI
	var_194_int = 12848; // 0xf90 PushI
	var_195_int = 12847; // 0xf91 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0xf92 TObjFunc
	return 0; // 0xf94 Return
	
Label_3989:
	var_196_int = 12848; // 0xf95 PushI
	var_197_bool = var_35_int == var_196_int; // 0xf96 Eq
	if(var_197_bool == 0) goto Label_4007; // 0xf97 JumpB
	var_198_string = ""; // 0xf98 PushV
	var_198_string = "Neutral"; // 0xf99 MovS
	func_3795(var_36_int, var_198_string); // 0xf9a Call
	var_199_int = 11649; // 0xf9c PushI
	SetMessage(var_199_int); // 0xf9d TObjFunc
	ClearReplies(); // 0xf9f TObjFunc
	var_200_int = 11650; // 0xfa1 PushI
	var_201_int = -1; // 0xfa2 PushI
	var_202_int = 12849; // 0xfa3 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0xfa4 TObjFunc
	return 0; // 0xfa6 Return
	
Label_4007:
	var_3_string = 1; // 0xfa7 TMovB
	var_203_bool = 0; // 0xfa8 PushV
	func_4236(var_203_bool); // 0xfa9 Call
	if(var_203_bool == 0) goto Label_4015; // 0xfab JumpB
	lshStopAnimation(); // 0xfac Func
	goto Label_4017; // 0xfae Jump
	
Label_4017:
	return 0; // 0xfb1 Return
	
Label_4015:
	StopAnimation(); // 0xfaf Func
	
Label_4019:
	return 0; // 0xfb3 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_5217(); // 0x7 Call
	var_36_bool = 0; // 0x9 PushV
	func_4032(var_36_bool); // 0xa Call
	var_39_bool = var_36_bool == 0; // 0xc Not
	if(var_39_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_40_string = ""; // 0x13 PushV
	var_40_string = "Neutral"; // 0x14 MovS
	func_4097(var_40_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_4097(var_40_string)
{
	var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0; // 0x1001 PushV
	var_45_string = "playing "; // 0x1002 PushS
	var_46_int = var_45_string + var_40_string; // 0x1003 Add
	Trace(var_46_int); // 0x1004 Func
	lshGetAnimTimes(var_40_string, var_43_float, var_44_float); // 0x1006 Func
	lshPlayAnimation(var_43_float, var_44_float); // 0x1008 Func
	var_47_string = "start: "; // 0x100a PushS
	var_48_int = var_47_string + var_43_float; // 0x100b Add
	Trace(var_48_int); // 0x100c Func
	var_49_string = "end: "; // 0x100e PushS
	var_50_int = var_49_string + var_44_float; // 0x100f Add
	Trace(var_50_int); // 0x1010 Func
	return 4; // 0x1012 Return
}


func_5121()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x1401 PushV
	var_102_string = "Adding diary entry"; // 0x1402 PushS
	Trace(var_102_string); // 0x1403 Func
	var_103_int = 43; // 0x1405 PushI
	var_104_int = 2; // 0x1406 PushI
	var_105_int = 12125; // 0x1407 PushI
	CreateDiaryEntry(var_101_object, var_103_int, var_104_int, var_105_int); // 0x1408 Func
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0; // 0x140a PushV
	var_107_object = var_101_object; // 0x140b Mov
	var_108_int = -1; // 0x140c MovI
	func_4992(var_106_bool, var_107_object, var_108_int); // 0x140d Call
	return 2; // 0x140f Return
}


func_4868(var_191_bool)
{
	var_193_int = 0; var_194_string = ""; // 0x1305 PushV
	var_194_string = "ood6Katerina3"; // 0x1306 MovS
	func_4132(var_193_int, var_194_string); // 0x1307 Call
	var_195_int = 0; // 0x1309 PushI
	var_196_bool = var_193_int == var_195_int; // 0x130a Eq
	if(var_196_bool == 0) goto Label_4878; // 0x130b JumpB
	var_191_bool = 1; // 0x130c MovB
	return 0; // 0x130d Return
	
Label_4878:
	var_191_bool = 0; // 0x130e MovB
	return 0; // 0x130f Return
}


func_4619(var_381_bool)
{
	var_383_int = 0; var_384_string = ""; // 0x120c PushV
	var_384_string = "ood1Katerina2"; // 0x120d MovS
	func_4132(var_383_int, var_384_string); // 0x120e Call
	var_385_int = 0; // 0x1210 PushI
	var_386_bool = var_383_int == var_385_int; // 0x1211 Eq
	if(var_386_bool == 0) goto Label_4629; // 0x1212 JumpB
	var_381_bool = 1; // 0x1213 MovB
	return 0; // 0x1214 Return
	
Label_4629:
	var_381_bool = 0; // 0x1215 MovB
	return 0; // 0x1216 Return
}


func_2572(var_0_object, var_1_object, var_2_object, var_3_object, var_397_object, var_398_object)
{
	var_0_object = var_398_object; // 0xa0d TMov
	var_1_object = var_397_object; // 0xa0e TMov
	var_3_object = 0; // 0xa0f TMovB
	var_403_int = 1; // 0xa10 PushI
	if(var_403_int == 0) goto Label_2630; // 0xa11 JumpB
	var_404_string = ""; // 0xa12 PushV
	var_404_string = "Neutral"; // 0xa13 MovS
	func_2660(var_398_object, var_404_string); // 0xa14 Call
	var_409_int = 9330; // 0xa16 PushI
	SetMessage(var_409_int); // 0xa17 TObjFunc
	ClearReplies(); // 0xa19 TObjFunc
	var_410_int = 9331; // 0xa1b PushI
	var_411_int = 10248; // 0xa1c PushI
	var_412_int = 10247; // 0xa1d PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0xa1e TObjFunc
	var_413_int = 9340; // 0xa20 PushI
	var_414_int = 10248; // 0xa21 PushI
	var_415_int = 10258; // 0xa22 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0xa23 TObjFunc
	var_416_int = 9341; // 0xa25 PushI
	var_417_int = 10248; // 0xa26 PushI
	var_418_int = 10260; // 0xa27 PushI
	AddReply(var_416_int, var_417_int, var_418_int); // 0xa28 TObjFunc
	goto Label_2630; // 0xa2a Jump
	
Label_2630:
	var_419_bool = 0; // 0xa46 PushV
	func_4236(var_419_bool); // 0xa47 Call
	if(var_419_bool == 0) goto Label_2645; // 0xa49 JumpB
	
Label_2634:
	lshWaitForAnimEnd(); // 0xa4a Func
	var_420_object = var_3_object; // 0xa4c PushT
	if(var_420_object == 0) goto Label_2639; // 0xa4d JumpB
	goto Label_2644; // 0xa4e Jump
	
Label_2644:
	goto Label_2659; // 0xa54 Jump
	
Label_2659:
	return 0; // 0xa63 Return
	
Label_2639:
	var_421_string = ""; // 0xa4f PushV
	var_421_string = var_2_object; // 0xa50 MovT
	func_4097(var_421_string); // 0xa51 Call
	goto Label_2634; // 0xa53 Jump
	
Label_2645:
	var_422_string = "all"; // 0xa55 PushS
	var_423_string = "idle"; // 0xa56 PushS
	PlayAnimation(var_422_string, var_423_string); // 0xa57 Func
	
Label_2649:
	WaitForAnimEnd(); // 0xa59 Func
	var_424_object = var_3_object; // 0xa5b PushT
	if(var_424_object == 0) goto Label_2654; // 0xa5c JumpB
	goto Label_2659; // 0xa5d Jump
	
Label_2654:
	var_425_string = "all"; // 0xa5e PushS
	var_426_string = "idle"; // 0xa5f PushS
	PlayAnimation(var_425_string, var_426_string); // 0xa60 Func
	goto Label_2649; // 0xa62 Jump
}


func_1035(var_0_object, var_157_int, var_158_object)
{
	var_160_object = Obj(); var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_object = Obj(); var_165_bool = 0; var_166_int = 0; var_167_bool = 0; // 0x40b PushV
	var_0_object = var_158_object; // 0x40c TMov
	var_168_bool = 0; var_169_object = Obj(); // 0x40d PushV
	var_169_object = var_158_object; // 0x40e Mov
	func_4037(var_169_object); // 0x40f Call
	var_170_bool = var_168_bool == 0; // 0x411 Not
	if(var_170_bool == 0) goto Label_1045; // 0x412 JumpB
	var_157_int = -2; // 0x413 MovI
	return 8; // 0x414 Return
	
Label_1045:
	CreateDialog(var_164_object); // 0x415 Func
	var_171_int = 0; // 0x417 PushV
	func_4232(var_171_int); // 0x418 Call
	SetNPCName(var_171_int); // 0x41a ObjFunc
	var_172_string = ""; // 0x41c PushV
	func_4234(var_172_string); // 0x41d Call
	SetPhoto(var_172_string); // 0x41f ObjFunc
	var_173_int = 0; // 0x421 PushV
	func_5088(var_173_int); // 0x422 Call
	SetPlayerName(var_173_int); // 0x424 ObjFunc
	var_166_int = -1; // 0x426 MovI
	IsOverrideActive(var_165_bool); // 0x427 Func
	var_174_bool = var_165_bool; // 0x429 Push
	if(var_174_bool == 0) goto Label_1069; // 0x42a JumpB
	var_157_int = -2; // 0x42b MovI
	return 8; // 0x42c Return
	
Label_1069:
	DoDialog(var_164_object); // 0x42d Func
	var_175_object = Obj(); var_176_object = Obj(); // 0x42f PushV
	var_175_object = var_158_object; // 0x430 Mov
	var_176_object = var_164_object; // 0x431 Mov
	TaskCall(7); // 0x432 TaskCall
	func_1098(var_177_object, var_178_object, var_179_string, var_180_bool, var_175_object, var_176_object); // 0x433 Call
	TaskReturn(); // 0x434 TaskReturn
	IsDialogEnd(var_167_bool); // 0x436 ObjFunc
	
Label_1080:
	var_375_bool = var_167_bool == 0; // 0x438 Not
	if(var_375_bool == 0) goto Label_1087; // 0x439 JumpB
	sync(); // 0x43a Func
	IsDialogEnd(var_167_bool); // 0x43c ObjFunc
	goto Label_1080; // 0x43e Jump
	
Label_1087:
	var_376_object = Obj(); // 0x43f PushV
	var_376_object = var_158_object; // 0x440 Mov
	func_4093(); // 0x441 Call
	StopDialog(var_164_object); // 0x443 Func
	GetReturnValue(var_166_int); // 0x445 ObjFunc
	var_157_int = var_166_int; // 0x447 Mov
	return 8; // 0x448 Return
}


func_2827(var_0_object, var_431_int, var_432_object)
{
	var_434_object = Obj(); var_435_bool = 0; var_436_int = 0; var_437_bool = 0; var_438_object = Obj(); var_439_bool = 0; var_440_int = 0; var_441_bool = 0; // 0xb0b PushV
	var_0_object = var_432_object; // 0xb0c TMov
	var_442_bool = 0; var_443_object = Obj(); // 0xb0d PushV
	var_443_object = var_432_object; // 0xb0e Mov
	func_4037(var_443_object); // 0xb0f Call
	var_444_bool = var_442_bool == 0; // 0xb11 Not
	if(var_444_bool == 0) goto Label_2837; // 0xb12 JumpB
	var_431_int = -2; // 0xb13 MovI
	return 8; // 0xb14 Return
	
Label_2837:
	CreateDialog(var_438_object); // 0xb15 Func
	var_445_int = 0; // 0xb17 PushV
	func_4232(var_445_int); // 0xb18 Call
	SetNPCName(var_445_int); // 0xb1a ObjFunc
	var_446_string = ""; // 0xb1c PushV
	func_4234(var_446_string); // 0xb1d Call
	SetPhoto(var_446_string); // 0xb1f ObjFunc
	var_447_int = 0; // 0xb21 PushV
	func_5088(var_447_int); // 0xb22 Call
	SetPlayerName(var_447_int); // 0xb24 ObjFunc
	var_440_int = -1; // 0xb26 MovI
	IsOverrideActive(var_439_bool); // 0xb27 Func
	var_448_bool = var_439_bool; // 0xb29 Push
	if(var_448_bool == 0) goto Label_2861; // 0xb2a JumpB
	var_431_int = -2; // 0xb2b MovI
	return 8; // 0xb2c Return
	
Label_2861:
	DoDialog(var_438_object); // 0xb2d Func
	var_449_object = Obj(); var_450_object = Obj(); // 0xb2f PushV
	var_449_object = var_432_object; // 0xb30 Mov
	var_450_object = var_438_object; // 0xb31 Mov
	TaskCall(11); // 0xb32 TaskCall
	func_2890(var_451_object, var_452_object, var_453_string, var_454_bool, var_449_object, var_450_object); // 0xb33 Call
	TaskReturn(); // 0xb34 TaskReturn
	IsDialogEnd(var_441_bool); // 0xb36 ObjFunc
	
Label_2872:
	var_506_bool = var_441_bool == 0; // 0xb38 Not
	if(var_506_bool == 0) goto Label_2879; // 0xb39 JumpB
	sync(); // 0xb3a Func
	IsDialogEnd(var_441_bool); // 0xb3c ObjFunc
	goto Label_2872; // 0xb3e Jump
	
Label_2879:
	var_507_object = Obj(); // 0xb3f PushV
	var_507_object = var_432_object; // 0xb40 Mov
	func_4093(); // 0xb41 Call
	StopDialog(var_438_object); // 0xb43 Func
	GetReturnValue(var_440_int); // 0xb45 ObjFunc
	var_431_int = var_440_int; // 0xb47 Mov
	return 8; // 0xb48 Return
}


func_4880(var_520_bool)
{
	var_522_int = 0; var_523_string = ""; // 0x1311 PushV
	var_523_string = "KnowGeorg"; // 0x1312 MovS
	func_4132(var_522_int, var_523_string); // 0x1313 Call
	var_524_int = 1; // 0x1315 PushI
	var_525_bool = var_522_int == var_524_int; // 0x1316 Eq
	if(var_525_bool == 0) goto Label_4890; // 0x1317 JumpB
	var_520_bool = 1; // 0x1318 MovB
	return 0; // 0x1319 Return
	
Label_4890:
	var_520_bool = 0; // 0x131a MovB
	return 0; // 0x131b Return
}


func_5137()
{
	var_215_object = Obj(); var_216_object = Obj(); // 0x1411 PushV
	var_217_string = "Adding diary entry"; // 0x1412 PushS
	Trace(var_217_string); // 0x1413 Func
	var_218_int = 47; // 0x1415 PushI
	var_219_int = 2; // 0x1416 PushI
	var_220_int = 12129; // 0x1417 PushI
	CreateDiaryEntry(var_216_object, var_218_int, var_219_int, var_220_int); // 0x1418 Func
	var_221_bool = 0; var_222_object = Obj(); var_223_int = 0; // 0x141a PushV
	var_222_object = var_216_object; // 0x141b Mov
	var_223_int = 43; // 0x141c MovI
	func_4992(var_221_bool, var_222_object, var_223_int); // 0x141d Call
	return 2; // 0x141f Return
}


func_4115()
{
	var_38_bool = 0; // 0x1013 PushV
	func_4236(var_38_bool); // 0x1014 Call
	if(var_38_bool == 0) goto Label_4121; // 0x1016 JumpB
	lshStopSpeech(); // 0x1017 Func
	
Label_4121:
	return 0; // 0x1019 Return
}


func_4631(var_401_bool)
{
	var_403_int = 0; var_404_string = ""; // 0x1218 PushV
	var_404_string = "ood1Katerina3"; // 0x1219 MovS
	func_4132(var_403_int, var_404_string); // 0x121a Call
	var_405_int = 0; // 0x121c PushI
	var_406_bool = var_403_int == var_405_int; // 0x121d Eq
	if(var_406_bool == 0) goto Label_4641; // 0x121e JumpB
	var_401_bool = 1; // 0x121f MovB
	return 0; // 0x1220 Return
	
Label_4641:
	var_401_bool = 0; // 0x1221 MovB
	return 0; // 0x1222 Return
}


func_4122(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0; // 0x101a PushV
	var_80_int = var_76_cvector | var_76_cvector; // 0x101b Or
	var_79_float = sqrt(var_80_int); // 0x101c Sqrt2
	var_81_float = 0.0; // 0x101d PushF
	var_82_bool = var_79_float < var_81_float; // 0x101e LT
	if(var_82_bool == 0) goto Label_4130; // 0x101f JumpB
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0x1020 MovV
	return 2; // 0x1021 Return
	
Label_4130:
	var_75_cvector = var_76_cvector / var_76_cvector; // 0x1022 Div2
	return 2; // 0x1023 Return
}


func_4892(var_504_bool)
{
	var_506_int = 0; var_507_string = ""; // 0x131d PushV
	var_507_string = "KnowLaska"; // 0x131e MovS
	func_4132(var_506_int, var_507_string); // 0x131f Call
	var_508_int = 1; // 0x1321 PushI
	var_509_bool = var_506_int == var_508_int; // 0x1322 Eq
	if(var_509_bool == 0) goto Label_4902; // 0x1323 JumpB
	var_504_bool = 1; // 0x1324 MovB
	return 0; // 0x1325 Return
	
Label_4902:
	var_504_bool = 0; // 0x1326 MovB
	return 0; // 0x1327 Return
}


func_5153()
{
	var_271_object = Obj(); var_272_object = Obj(); // 0x1421 PushV
	var_273_string = "Adding diary entry"; // 0x1422 PushS
	Trace(var_273_string); // 0x1423 Func
	var_274_int = 48; // 0x1425 PushI
	var_275_int = 2; // 0x1426 PushI
	var_276_int = 12130; // 0x1427 PushI
	CreateDiaryEntry(var_272_object, var_274_int, var_275_int, var_276_int); // 0x1428 Func
	var_277_bool = 0; var_278_object = Obj(); var_279_int = 0; // 0x142a PushV
	var_278_object = var_272_object; // 0x142b Mov
	var_279_int = 43; // 0x142c MovI
	func_4992(var_277_bool, var_278_object, var_279_int); // 0x142d Call
	return 2; // 0x142f Return
}


func_4643(var_352_bool)
{
	var_354_int = 0; var_355_string = ""; // 0x1224 PushV
	var_355_string = "d1q01"; // 0x1225 MovS
	func_4132(var_354_int, var_355_string); // 0x1226 Call
	var_356_int = 0; // 0x1228 PushI
	var_357_bool = var_354_int == var_356_int; // 0x1229 Eq
	if(var_357_bool == 0) goto Label_4653; // 0x122a JumpB
	var_352_bool = 1; // 0x122b MovB
	return 0; // 0x122c Return
	
Label_4653:
	var_352_bool = 0; // 0x122d MovB
	return 0; // 0x122e Return
}


func_4132(var_132_int, var_133_string)
{
	var_134_int = 0; var_135_int = 0; // 0x1024 PushV
	GetVariable(var_133_string, var_135_int); // 0x1025 Func
	var_132_int = var_135_int; // 0x1027 Mov
	return 2; // 0x1028 Return
}


func_4389()
{
	var_680_string = "KnowZemlja"; // 0x1126 PushS
	var_681_int = 1; // 0x1127 PushI
	SetVariable(var_680_string, var_681_int); // 0x1128 Func
	return 0; // 0x112a Return
}


func_4904(var_472_bool)
{
	var_474_int = 0; var_475_string = ""; // 0x1329 PushV
	var_475_string = "KnowMaria"; // 0x132a MovS
	func_4132(var_474_int, var_475_string); // 0x132b Call
	var_476_int = 1; // 0x132d PushI
	var_477_bool = var_474_int == var_476_int; // 0x132e Eq
	if(var_477_bool == 0) goto Label_4914; // 0x132f JumpB
	var_472_bool = 1; // 0x1330 MovB
	return 0; // 0x1331 Return
	
Label_4914:
	var_472_bool = 0; // 0x1332 MovB
	return 0; // 0x1333 Return
}


func_4137(var_118_object, var_119_string)
{
	var_120_object = Obj(); var_121_object = Obj(); var_122_object = Obj(); var_123_object = Obj(); // 0x1029 PushV
	GetMainOutdoorScene(var_122_object); // 0x102a Func
	var_124_string = ".bin"; // 0x102c PushS
	var_125_int = var_119_string + var_124_string; // 0x102d Add
	AddBlankActor(var_123_object, var_122_object, var_119_string, var_125_int); // 0x102e Func
	var_118_object = var_123_object; // 0x1030 Mov
	return 4; // 0x1031 Return
}


func_4395()
{
	var_676_string = "KnowZastroiki"; // 0x112c PushS
	var_677_int = 1; // 0x112d PushI
	SetVariable(var_676_string, var_677_int); // 0x112e Func
	return 0; // 0x1130 Return
}


func_4655(var_424_bool)
{
	var_426_int = 0; var_427_string = ""; // 0x1230 PushV
	var_427_string = "d1q04"; // 0x1231 MovS
	func_4132(var_426_int, var_427_string); // 0x1232 Call
	var_428_int = 0; // 0x1234 PushI
	var_429_bool = var_426_int == var_428_int; // 0x1235 Eq
	if(var_429_bool == 0) goto Label_4665; // 0x1236 JumpB
	var_424_bool = 1; // 0x1237 MovB
	return 0; // 0x1238 Return
	
Label_4665:
	var_424_bool = 0; // 0x1239 MovB
	return 0; // 0x123a Return
}


func_5169()
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x1431 PushV
	var_111_string = "Adding diary entry"; // 0x1432 PushS
	Trace(var_111_string); // 0x1433 Func
	var_112_int = 44; // 0x1435 PushI
	var_113_int = 2; // 0x1436 PushI
	var_114_int = 12126; // 0x1437 PushI
	CreateDiaryEntry(var_110_object, var_112_int, var_113_int, var_114_int); // 0x1438 Func
	var_115_bool = 0; var_116_object = Obj(); var_117_int = 0; // 0x143a PushV
	var_116_object = var_110_object; // 0x143b Mov
	var_117_int = 43; // 0x143c MovI
	func_4992(var_115_bool, var_116_object, var_117_int); // 0x143d Call
	return 2; // 0x143f Return
}


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x31 PushV
	var_0_object = var_40_object; // 0x32 TMov
	var_50_bool = 0; var_51_object = Obj(); // 0x33 PushV
	var_51_object = var_40_object; // 0x34 Mov
	func_4037(var_51_object); // 0x35 Call
	var_90_bool = var_50_bool == 0; // 0x37 Not
	if(var_90_bool == 0) goto Label_59; // 0x38 JumpB
	var_39_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_46_object); // 0x3b Func
	var_91_int = 0; // 0x3d PushV
	func_4232(var_91_int); // 0x3e Call
	SetNPCName(var_91_int); // 0x40 ObjFunc
	var_92_string = ""; // 0x42 PushV
	func_4234(var_92_string); // 0x43 Call
	SetPhoto(var_92_string); // 0x45 ObjFunc
	var_93_int = 0; // 0x47 PushV
	func_5088(var_93_int); // 0x48 Call
	SetPlayerName(var_93_int); // 0x4a ObjFunc
	var_48_int = -1; // 0x4c MovI
	IsOverrideActive(var_47_bool); // 0x4d Func
	var_101_bool = var_47_bool; // 0x4f Push
	if(var_101_bool == 0) goto Label_83; // 0x50 JumpB
	var_39_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_46_object); // 0x53 Func
	var_102_object = Obj(); var_103_object = Obj(); // 0x55 PushV
	var_102_object = var_40_object; // 0x56 Mov
	var_103_object = var_46_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_104_object, var_105_object, var_106_string, var_107_bool, var_102_object, var_103_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_49_bool); // 0x5c ObjFunc
	
Label_94:
	var_146_bool = var_49_bool == 0; // 0x5e Not
	if(var_146_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_49_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_147_object = Obj(); // 0x65 PushV
	var_147_object = var_40_object; // 0x66 Mov
	func_4093(); // 0x67 Call
	StopDialog(var_46_object); // 0x69 Func
	GetReturnValue(var_48_int); // 0x6b ObjFunc
	var_39_int = var_48_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_4401()
{
	var_128_object = Obj(); var_129_object = Obj(); // 0x1131 PushV
	var_130_object = Obj(); // 0x1132 PushV
	func_5038(var_130_object); // 0x1133 Call
	var_129_object = var_130_object; // 0x1134 Mov
	var_137_string = "d1q04KaterinaGotoMishka"; // 0x1136 PushS
	var_138_string = "pt_map_mishka"; // 0x1137 PushS
	var_139_int = 0; // 0x1138 PushI
	var_140_int = 8643; // 0x1139 PushI
	var_141_float = 0; // 0x113a PushV
	func_4203(var_141_float); // 0x113b Call
	AddMark(var_137_string, var_138_string, var_139_int, var_140_int, var_141_float); // 0x113d ObjFunc
	return 2; // 0x113f Return
}


func_4148(var_50_object, var_51_int)
{
	var_52_int = 0; var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_int = 0; var_57_bool = 0; // 0x1034 PushV
	GetItemID(var_55_int); // 0x1035 ObjFunc
	var_58_string = "Category"; // 0x1037 PushS
	GetInvItemProperty(var_56_int, var_55_int, var_58_string); // 0x1038 Func
	AddItem(var_57_bool, var_50_object, var_56_int, var_51_int); // 0x103a ObjFunc
	var_59_bool = var_57_bool == 0; // 0x103c Not
	if(var_59_bool == 0) goto Label_4160; // 0x103d JumpB
	DropItems(var_50_object, var_51_int); // 0x103e ObjFunc
	
Label_4160:
	return 6; // 0x1040 Return
}


func_4916(var_73_bool)
{
	var_75_int = 0; var_76_string = ""; // 0x1335 PushV
	var_76_string = "ood3Katerina1"; // 0x1336 MovS
	func_4132(var_75_int, var_76_string); // 0x1337 Call
	var_79_int = 0; // 0x1339 PushI
	var_80_bool = var_75_int == var_79_int; // 0x133a Eq
	if(var_80_bool == 0) goto Label_4926; // 0x133b JumpB
	var_73_bool = 1; // 0x133c MovB
	return 0; // 0x133d Return
	
Label_4926:
	var_73_bool = 0; // 0x133e MovB
	return 0; // 0x133f Return
}


func_4667(var_418_bool)
{
	var_420_int = 0; var_421_string = ""; // 0x123c PushV
	var_421_string = "ood1Katerina4"; // 0x123d MovS
	func_4132(var_420_int, var_421_string); // 0x123e Call
	var_422_int = 0; // 0x1240 PushI
	var_423_bool = var_420_int == var_422_int; // 0x1241 Eq
	if(var_423_bool == 0) goto Label_4677; // 0x1242 JumpB
	var_418_bool = 1; // 0x1243 MovB
	return 0; // 0x1244 Return
	
Label_4677:
	var_418_bool = 0; // 0x1245 MovB
	return 0; // 0x1246 Return
}


func_317(var_0_object, var_623_int, var_624_object)
{
	var_626_object = Obj(); var_627_bool = 0; var_628_int = 0; var_629_bool = 0; var_630_object = Obj(); var_631_bool = 0; var_632_int = 0; var_633_bool = 0; // 0x13d PushV
	var_0_object = var_624_object; // 0x13e TMov
	var_634_bool = 0; var_635_object = Obj(); // 0x13f PushV
	var_635_object = var_624_object; // 0x140 Mov
	func_4037(var_635_object); // 0x141 Call
	var_636_bool = var_634_bool == 0; // 0x143 Not
	if(var_636_bool == 0) goto Label_327; // 0x144 JumpB
	var_623_int = -2; // 0x145 MovI
	return 8; // 0x146 Return
	
Label_327:
	CreateDialog(var_630_object); // 0x147 Func
	var_637_int = 0; // 0x149 PushV
	func_4232(var_637_int); // 0x14a Call
	SetNPCName(var_637_int); // 0x14c ObjFunc
	var_638_string = ""; // 0x14e PushV
	func_4234(var_638_string); // 0x14f Call
	SetPhoto(var_638_string); // 0x151 ObjFunc
	var_639_int = 0; // 0x153 PushV
	func_5088(var_639_int); // 0x154 Call
	SetPlayerName(var_639_int); // 0x156 ObjFunc
	var_632_int = -1; // 0x158 MovI
	IsOverrideActive(var_631_bool); // 0x159 Func
	var_640_bool = var_631_bool; // 0x15b Push
	if(var_640_bool == 0) goto Label_351; // 0x15c JumpB
	var_623_int = -2; // 0x15d MovI
	return 8; // 0x15e Return
	
Label_351:
	DoDialog(var_630_object); // 0x15f Func
	var_641_object = Obj(); var_642_object = Obj(); // 0x161 PushV
	var_641_object = var_624_object; // 0x162 Mov
	var_642_object = var_630_object; // 0x163 Mov
	TaskCall(5); // 0x164 TaskCall
	func_380(var_643_object, var_644_object, var_645_string, var_646_bool, var_641_object, var_642_object); // 0x165 Call
	TaskReturn(); // 0x166 TaskReturn
	IsDialogEnd(var_633_bool); // 0x168 ObjFunc
	
Label_362:
	var_723_bool = var_633_bool == 0; // 0x16a Not
	if(var_723_bool == 0) goto Label_369; // 0x16b JumpB
	sync(); // 0x16c Func
	IsDialogEnd(var_633_bool); // 0x16e ObjFunc
	goto Label_362; // 0x170 Jump
	
Label_369:
	var_724_object = Obj(); // 0x171 PushV
	var_724_object = var_624_object; // 0x172 Mov
	func_4093(); // 0x173 Call
	StopDialog(var_630_object); // 0x175 Func
	GetReturnValue(var_632_int); // 0x177 ObjFunc
	var_623_int = var_632_int; // 0x179 Mov
	return 8; // 0x17a Return
}


func_4928(var_63_bool)
{
	var_65_int = 0; var_66_string = ""; // 0x1341 PushV
	var_66_string = "ood4Katerina1"; // 0x1342 MovS
	func_4132(var_65_int, var_66_string); // 0x1343 Call
	var_69_int = 0; // 0x1345 PushI
	var_70_bool = var_65_int == var_69_int; // 0x1346 Eq
	if(var_70_bool == 0) goto Label_4938; // 0x1347 JumpB
	var_63_bool = 1; // 0x1348 MovB
	return 0; // 0x1349 Return
	
Label_4938:
	var_63_bool = 0; // 0x134a MovB
	return 0; // 0x134b Return
}


func_5185()
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x1441 PushV
	var_63_string = "Adding diary entry"; // 0x1442 PushS
	Trace(var_63_string); // 0x1443 Func
	var_64_int = 142; // 0x1445 PushI
	var_65_int = 1; // 0x1446 PushI
	var_66_int = 15342; // 0x1447 PushI
	CreateDiaryEntry(var_62_object, var_64_int, var_65_int, var_66_int); // 0x1448 Func
	var_67_bool = 0; var_68_object = Obj(); var_69_int = 0; // 0x144a PushV
	var_68_object = var_62_object; // 0x144b Mov
	var_69_int = 139; // 0x144c MovI
	func_4992(var_67_bool, var_68_object, var_69_int); // 0x144d Call
	return 2; // 0x144f Return
}


func_4161(var_44_object, var_45_string, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x1041 PushV
	CreateInvItem(var_48_object); // 0x1042 Func
	SetItemName(var_45_string); // 0x1044 ObjFunc
	var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; // 0x1046 PushV
	var_49_object = var_44_object; // 0x1047 Mov
	var_50_object = var_48_object; // 0x1048 Mov
	var_51_int = var_46_int; // 0x1049 Mov
	func_4148(var_50_object, var_51_int); // 0x104a Call
	return 2; // 0x104c Return
}


func_4417()
{
	var_146_object = Obj(); var_147_string = ""; var_148_float = 0; // 0x1142 PushV
	var_149_object = Obj(); // 0x1143 PushV
	func_5038(var_149_object); // 0x1144 Call
	var_146_object = var_149_object; // 0x1145 Mov
	var_147_string = "pt_map_mishka"; // 0x1147 MovS
	var_148_float = 2; // 0x1148 MovI
	func_5055(var_146_object, var_147_string, var_148_float); // 0x1149 Call
	var_169_object = Obj(); // 0x114b PushV
	func_5038(var_169_object); // 0x114c Call
	ShowMap(var_169_object); // 0x114e ObjFunc
	return 0; // 0x1150 Return
}


func_4679(var_431_bool, var_432_object)
{
	var_433_bool = 0; var_434_object = Obj(); var_435_string = ""; // 0x1248 PushV
	var_434_object = var_432_object; // 0x1249 Mov
	var_435_string = "powder"; // 0x124a MovS
	func_4174(var_434_object, var_435_string); // 0x124b Call
	if(var_433_bool == 0) goto Label_4688; // 0x124d JumpB
	var_431_bool = 1; // 0x124e MovB
	return 0; // 0x124f Return
	
Label_4688:
	var_431_bool = 0; // 0x1250 MovB
	return 0; // 0x1251 Return
}


func_1098(var_0_object, var_1_object, var_2_object, var_3_object, var_175_object, var_176_object)
{
	var_0_object = var_176_object; // 0x44b TMov
	var_1_object = var_175_object; // 0x44c TMov
	var_3_object = 0; // 0x44d TMovB
	var_181_int = 1; // 0x44e PushI
	if(var_181_int == 0) goto Label_1348; // 0x44f JumpB
	var_182_bool = 0; // 0x450 PushV
	var_182_bool = 0; // 0x451 MovB
	var_183_bool = 0; var_184_object = Obj(); // 0x452 PushV
	var_184_object = var_1_object; // 0x453 MovT
	func_4607(var_184_object); // 0x454 Call
	if(var_183_bool == 0) goto Label_1118; // 0x456 JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0x457 PushV
	var_192_object = var_1_object; // 0x458 MovT
	func_4643(var_192_object); // 0x459 Call
	var_197_bool = var_191_bool == 0; // 0x45b Not
	if(var_197_bool == 0) goto Label_1118; // 0x45c JumpB
	var_182_bool = 1; // 0x45d MovB
	
Label_1118:
	if(var_182_bool == 0) goto Label_1139; // 0x45e JumpB
	var_198_string = ""; // 0x45f PushV
	var_198_string = "Neutral"; // 0x460 MovS
	func_1378(var_176_object, var_198_string); // 0x461 Call
	var_203_int = 5491; // 0x463 PushI
	SetMessage(var_203_int); // 0x464 TObjFunc
	ClearReplies(); // 0x466 TObjFunc
	var_204_int = 5492; // 0x468 PushI
	var_205_int = 6052; // 0x469 PushI
	var_206_int = 6051; // 0x46a PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x46b TObjFunc
	var_207_int = 5505; // 0x46d PushI
	var_208_int = 6052; // 0x46e PushI
	var_209_int = 6066; // 0x46f PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x470 TObjFunc
	goto Label_1348; // 0x472 Jump
	
Label_1348:
	var_210_bool = 0; // 0x544 PushV
	func_4236(var_210_bool); // 0x545 Call
	if(var_210_bool == 0) goto Label_1363; // 0x547 JumpB
	
Label_1352:
	lshWaitForAnimEnd(); // 0x548 Func
	var_211_object = var_3_object; // 0x54a PushT
	if(var_211_object == 0) goto Label_1357; // 0x54b JumpB
	goto Label_1362; // 0x54c Jump
	
Label_1362:
	goto Label_1377; // 0x552 Jump
	
Label_1377:
	return 0; // 0x561 Return
	
Label_1357:
	var_212_string = ""; // 0x54d PushV
	var_212_string = var_2_object; // 0x54e MovT
	func_4097(var_212_string); // 0x54f Call
	goto Label_1352; // 0x551 Jump
	
Label_1363:
	var_213_string = "all"; // 0x553 PushS
	var_214_string = "idle"; // 0x554 PushS
	PlayAnimation(var_213_string, var_214_string); // 0x555 Func
	
Label_1367:
	WaitForAnimEnd(); // 0x557 Func
	var_215_object = var_3_object; // 0x559 PushT
	if(var_215_object == 0) goto Label_1372; // 0x55a JumpB
	goto Label_1377; // 0x55b Jump
	
Label_1372:
	var_216_string = "all"; // 0x55c PushS
	var_217_string = "idle"; // 0x55d PushS
	PlayAnimation(var_216_string, var_217_string); // 0x55e Func
	goto Label_1367; // 0x560 Jump
	
Label_1139:
	var_218_bool = 0; var_219_object = Obj(); // 0x473 PushV
	var_219_object = var_1_object; // 0x474 MovT
	func_4619(var_219_object); // 0x475 Call
	if(var_218_bool == 0) goto Label_1169; // 0x477 JumpB
	var_224_string = ""; // 0x478 PushV
	var_224_string = "Neutral"; // 0x479 MovS
	func_1378(var_176_object, var_224_string); // 0x47a Call
	var_225_int = 5486; // 0x47c PushI
	SetMessage(var_225_int); // 0x47d TObjFunc
	ClearReplies(); // 0x47f TObjFunc
	var_226_int = 5522; // 0x481 PushI
	var_227_int = 6719; // 0x482 PushI
	var_228_int = 6086; // 0x483 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x484 TObjFunc
	var_229_int = 6083; // 0x486 PushI
	var_230_int = 6719; // 0x487 PushI
	var_231_int = 6713; // 0x488 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x489 TObjFunc
	var_232_int = 5488; // 0x48b PushI
	var_233_int = 6714; // 0x48c PushI
	var_234_int = 6047; // 0x48d PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x48e TObjFunc
	goto Label_1348; // 0x490 Jump
	
Label_1169:
	var_235_string = ""; // 0x491 PushV
	var_235_string = "Neutral"; // 0x492 MovS
	func_1378(var_176_object, var_235_string); // 0x493 Call
	var_236_int = 5521; // 0x495 PushI
	SetMessage(var_236_int); // 0x496 TObjFunc
	ClearReplies(); // 0x498 TObjFunc
	var_237_bool = 0; // 0x49a PushV
	var_237_bool = 0; // 0x49b MovB
	var_238_bool = 0; var_239_object = Obj(); // 0x49c PushV
	var_239_object = var_1_object; // 0x49d MovT
	func_4631(var_239_object); // 0x49e Call
	if(var_238_bool == 0) goto Label_1191; // 0x4a0 JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x4a1 PushV
	var_245_object = var_1_object; // 0x4a2 MovT
	func_4964(var_245_object); // 0x4a3 Call
	if(var_244_bool == 0) goto Label_1191; // 0x4a5 JumpB
	var_237_bool = 1; // 0x4a6 MovB
	
Label_1191:
	if(var_237_bool == 0) goto Label_1197; // 0x4a7 JumpB
	var_250_int = 9151; // 0x4a8 PushI
	var_251_int = 6068; // 0x4a9 PushI
	var_252_int = 10032; // 0x4aa PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x4ab TObjFunc
	
Label_1197:
	var_253_bool = 0; // 0x4ad PushV
	var_253_bool = 0; // 0x4ae MovB
	var_254_bool = 0; // 0x4af PushV
	var_254_bool = 0; // 0x4b0 MovB
	var_255_bool = 0; var_256_object = Obj(); // 0x4b1 PushV
	var_256_object = var_1_object; // 0x4b2 MovT
	func_4667(var_256_object); // 0x4b3 Call
	if(var_255_bool == 0) goto Label_1213; // 0x4b5 JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x4b6 PushV
	var_262_object = var_1_object; // 0x4b7 MovT
	func_4655(var_262_object); // 0x4b8 Call
	var_267_bool = var_261_bool == 0; // 0x4ba Not
	if(var_267_bool == 0) goto Label_1213; // 0x4bb JumpB
	var_254_bool = 1; // 0x4bc MovB
	
Label_1213:
	if(var_254_bool == 0) goto Label_1220; // 0x4bd JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x4be PushV
	var_269_object = var_1_object; // 0x4bf MovT
	func_4679(var_268_bool, var_269_object); // 0x4c0 Call
	if(var_268_bool == 0) goto Label_1220; // 0x4c2 JumpB
	var_253_bool = 1; // 0x4c3 MovB
	
Label_1220:
	if(var_253_bool == 0) goto Label_1226; // 0x4c4 JumpB
	var_277_int = 6292; // 0x4c5 PushI
	var_278_int = 6945; // 0x4c6 PushI
	var_279_int = 6944; // 0x4c7 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x4c8 TObjFunc
	
Label_1226:
	var_280_bool = 0; // 0x4ca PushV
	var_280_bool = 0; // 0x4cb MovB
	var_281_bool = 0; var_282_object = Obj(); // 0x4cc PushV
	var_282_object = var_1_object; // 0x4cd MovT
	func_4655(var_282_object); // 0x4ce Call
	if(var_281_bool == 0) goto Label_1239; // 0x4d0 JumpB
	var_283_bool = 0; var_284_object = Obj(); // 0x4d1 PushV
	var_284_object = var_1_object; // 0x4d2 MovT
	func_4700(var_284_object); // 0x4d3 Call
	if(var_283_bool == 0) goto Label_1239; // 0x4d5 JumpB
	var_280_bool = 1; // 0x4d6 MovB
	
Label_1239:
	if(var_280_bool == 0) goto Label_1245; // 0x4d7 JumpB
	var_289_int = 6111; // 0x4d8 PushI
	var_290_int = 10029; // 0x4d9 PushI
	var_291_int = 6748; // 0x4da PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x4db TObjFunc
	
Label_1245:
	var_292_bool = 0; // 0x4dd PushV
	var_292_bool = 0; // 0x4de MovB
	var_293_bool = 0; var_294_object = Obj(); // 0x4df PushV
	var_294_object = var_1_object; // 0x4e0 MovT
	func_4940(var_294_object); // 0x4e1 Call
	if(var_293_bool == 0) goto Label_1258; // 0x4e3 JumpB
	var_299_bool = 0; var_300_object = Obj(); // 0x4e4 PushV
	var_300_object = var_1_object; // 0x4e5 MovT
	func_4712(var_300_object); // 0x4e6 Call
	if(var_299_bool == 0) goto Label_1258; // 0x4e8 JumpB
	var_292_bool = 1; // 0x4e9 MovB
	
Label_1258:
	if(var_292_bool == 0) goto Label_1264; // 0x4ea JumpB
	var_305_int = 8011; // 0x4eb PushI
	var_306_int = 8851; // 0x4ec PushI
	var_307_int = 8834; // 0x4ed PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x4ee TObjFunc
	
Label_1264:
	var_308_bool = 0; // 0x4f0 PushV
	var_308_bool = 0; // 0x4f1 MovB
	var_309_bool = 0; var_310_object = Obj(); // 0x4f2 PushV
	var_310_object = var_1_object; // 0x4f3 MovT
	func_4904(var_310_object); // 0x4f4 Call
	if(var_309_bool == 0) goto Label_1277; // 0x4f6 JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x4f7 PushV
	var_316_object = var_1_object; // 0x4f8 MovT
	func_4724(var_316_object); // 0x4f9 Call
	if(var_315_bool == 0) goto Label_1277; // 0x4fb JumpB
	var_308_bool = 1; // 0x4fc MovB
	
Label_1277:
	if(var_308_bool == 0) goto Label_1283; // 0x4fd JumpB
	var_321_int = 8012; // 0x4fe PushI
	var_322_int = 8852; // 0x4ff PushI
	var_323_int = 8835; // 0x500 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x501 TObjFunc
	
Label_1283:
	var_324_bool = 0; // 0x503 PushV
	var_324_bool = 0; // 0x504 MovB
	var_325_bool = 0; var_326_object = Obj(); // 0x505 PushV
	var_326_object = var_1_object; // 0x506 MovT
	func_4952(var_326_object); // 0x507 Call
	if(var_325_bool == 0) goto Label_1296; // 0x509 JumpB
	var_331_bool = 0; var_332_object = Obj(); // 0x50a PushV
	var_332_object = var_1_object; // 0x50b MovT
	func_4736(var_332_object); // 0x50c Call
	if(var_331_bool == 0) goto Label_1296; // 0x50e JumpB
	var_324_bool = 1; // 0x50f MovB
	
Label_1296:
	if(var_324_bool == 0) goto Label_1302; // 0x510 JumpB
	var_337_int = 8023; // 0x511 PushI
	var_338_int = 8856; // 0x512 PushI
	var_339_int = 8846; // 0x513 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x514 TObjFunc
	
Label_1302:
	var_340_bool = 0; // 0x516 PushV
	var_340_bool = 0; // 0x517 MovB
	var_341_bool = 0; var_342_object = Obj(); // 0x518 PushV
	var_342_object = var_1_object; // 0x519 MovT
	func_4892(var_342_object); // 0x51a Call
	if(var_341_bool == 0) goto Label_1315; // 0x51c JumpB
	var_347_bool = 0; var_348_object = Obj(); // 0x51d PushV
	var_348_object = var_1_object; // 0x51e MovT
	func_4748(var_348_object); // 0x51f Call
	if(var_347_bool == 0) goto Label_1315; // 0x521 JumpB
	var_340_bool = 1; // 0x522 MovB
	
Label_1315:
	if(var_340_bool == 0) goto Label_1321; // 0x523 JumpB
	var_353_int = 8024; // 0x524 PushI
	var_354_int = 8855; // 0x525 PushI
	var_355_int = 8847; // 0x526 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x527 TObjFunc
	
Label_1321:
	var_356_bool = 0; // 0x529 PushV
	var_356_bool = 0; // 0x52a MovB
	var_357_bool = 0; var_358_object = Obj(); // 0x52b PushV
	var_358_object = var_1_object; // 0x52c MovT
	func_4880(var_358_object); // 0x52d Call
	if(var_357_bool == 0) goto Label_1334; // 0x52f JumpB
	var_363_bool = 0; var_364_object = Obj(); // 0x530 PushV
	var_364_object = var_1_object; // 0x531 MovT
	func_4760(var_364_object); // 0x532 Call
	if(var_363_bool == 0) goto Label_1334; // 0x534 JumpB
	var_356_bool = 1; // 0x535 MovB
	
Label_1334:
	if(var_356_bool == 0) goto Label_1340; // 0x536 JumpB
	var_369_int = 8030; // 0x537 PushI
	var_370_int = 8854; // 0x538 PushI
	var_371_int = 8853; // 0x539 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x53a TObjFunc
	
Label_1340:
	var_372_int = 8716; // 0x53c PushI
	var_373_int = -1; // 0x53d PushI
	var_374_int = 9553; // 0x53e PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x53f TObjFunc
	goto Label_1348; // 0x541 Jump
}


func_2890(var_0_object, var_1_object, var_2_object, var_3_object, var_449_object, var_450_object)
{
	var_0_object = var_450_object; // 0xb4b TMov
	var_1_object = var_449_object; // 0xb4c TMov
	var_3_object = 0; // 0xb4d TMovB
	var_455_int = 1; // 0xb4e PushI
	if(var_455_int == 0) goto Label_2963; // 0xb4f JumpB
	var_456_bool = 0; // 0xb50 PushV
	var_456_bool = 0; // 0xb51 MovB
	var_457_bool = 0; var_458_object = Obj(); // 0xb52 PushV
	var_458_object = var_1_object; // 0xb53 MovT
	func_4916(var_458_object); // 0xb54 Call
	if(var_457_bool == 0) goto Label_2910; // 0xb56 JumpB
	var_463_bool = 0; var_464_object = Obj(); // 0xb57 PushV
	var_464_object = var_1_object; // 0xb58 MovT
	func_4772(var_464_object); // 0xb59 Call
	var_469_bool = var_463_bool == 0; // 0xb5b Not
	if(var_469_bool == 0) goto Label_2910; // 0xb5c JumpB
	var_456_bool = 1; // 0xb5d MovB
	
Label_2910:
	if(var_456_bool == 0) goto Label_2936; // 0xb5e JumpB
	var_470_object = Obj(); var_471_object = Obj(); // 0xb5f PushV
	var_470_object = var_1_object; // 0xb60 MovT
	var_471_object = var_0_object; // 0xb61 MovT
	func_4584(); // 0xb62 Call
	var_474_string = ""; // 0xb64 PushV
	var_474_string = "Neutral"; // 0xb65 MovS
	func_2993(var_450_object, var_474_string); // 0xb66 Call
	var_479_int = 9926; // 0xb68 PushI
	SetMessage(var_479_int); // 0xb69 TObjFunc
	ClearReplies(); // 0xb6b TObjFunc
	var_480_int = 9927; // 0xb6d PushI
	var_481_int = 10938; // 0xb6e PushI
	var_482_int = 10937; // 0xb6f PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0xb70 TObjFunc
	var_483_int = 9940; // 0xb72 PushI
	var_484_int = 10954; // 0xb73 PushI
	var_485_int = 10953; // 0xb74 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0xb75 TObjFunc
	goto Label_2963; // 0xb77 Jump
	
Label_2963:
	var_486_bool = 0; // 0xb93 PushV
	func_4236(var_486_bool); // 0xb94 Call
	if(var_486_bool == 0) goto Label_2978; // 0xb96 JumpB
	
Label_2967:
	lshWaitForAnimEnd(); // 0xb97 Func
	var_487_object = var_3_object; // 0xb99 PushT
	if(var_487_object == 0) goto Label_2972; // 0xb9a JumpB
	goto Label_2977; // 0xb9b Jump
	
Label_2977:
	goto Label_2992; // 0xba1 Jump
	
Label_2992:
	return 0; // 0xbb0 Return
	
Label_2972:
	var_488_string = ""; // 0xb9c PushV
	var_488_string = var_2_object; // 0xb9d MovT
	func_4097(var_488_string); // 0xb9e Call
	goto Label_2967; // 0xba0 Jump
	
Label_2978:
	var_489_string = "all"; // 0xba2 PushS
	var_490_string = "idle"; // 0xba3 PushS
	PlayAnimation(var_489_string, var_490_string); // 0xba4 Func
	
Label_2982:
	WaitForAnimEnd(); // 0xba6 Func
	var_491_object = var_3_object; // 0xba8 PushT
	if(var_491_object == 0) goto Label_2987; // 0xba9 JumpB
	goto Label_2992; // 0xbaa Jump
	
Label_2987:
	var_492_string = "all"; // 0xbab PushS
	var_493_string = "idle"; // 0xbac PushS
	PlayAnimation(var_492_string, var_493_string); // 0xbad Func
	goto Label_2982; // 0xbaf Jump
	
Label_2936:
	var_494_bool = 0; var_495_object = Obj(); // 0xb78 PushV
	var_495_object = var_1_object; // 0xb79 MovT
	func_4690(var_494_bool, var_495_object); // 0xb7a Call
	if(var_494_bool == 0) goto Label_2961; // 0xb7c JumpB
	var_498_string = ""; // 0xb7d PushV
	var_498_string = "Neutral"; // 0xb7e MovS
	func_2993(var_450_object, var_498_string); // 0xb7f Call
	var_499_int = 10178; // 0xb81 PushI
	SetMessage(var_499_int); // 0xb82 TObjFunc
	ClearReplies(); // 0xb84 TObjFunc
	var_500_int = 10186; // 0xb86 PushI
	var_501_int = 11233; // 0xb87 PushI
	var_502_int = 11232; // 0xb88 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0xb89 TObjFunc
	var_503_int = 10464; // 0xb8b PushI
	var_504_int = 11233; // 0xb8c PushI
	var_505_int = 11537; // 0xb8d PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0xb8e TObjFunc
	goto Label_2963; // 0xb90 Jump
	
Label_2961:
	return 0; // 0xb91 Return
}


func_4940(var_456_bool)
{
	var_458_int = 0; var_459_string = ""; // 0x134d PushV
	var_459_string = "KnowOspina"; // 0x134e MovS
	func_4132(var_458_int, var_459_string); // 0x134f Call
	var_460_int = 1; // 0x1351 PushI
	var_461_bool = var_458_int == var_460_int; // 0x1352 Eq
	if(var_461_bool == 0) goto Label_4950; // 0x1353 JumpB
	var_456_bool = 1; // 0x1354 MovB
	return 0; // 0x1355 Return
	
Label_4950:
	var_456_bool = 0; // 0x1356 MovB
	return 0; // 0x1357 Return
}


func_4174(var_433_bool, var_435_string)
{
	var_436_int = 0; var_437_bool = 0; var_438_int = 0; var_439_bool = 0; // 0x104e PushV
	GetInvItemByName(var_438_int, var_435_string); // 0x104f Func
	HasItem(var_438_int, var_439_bool); // 0x1051 ObjFunc
	var_433_bool = var_439_bool; // 0x1053 Mov
	return 4; // 0x1054 Return
}


func_3664(var_0_object, var_565_int, var_566_object)
{
	var_568_object = Obj(); var_569_bool = 0; var_570_int = 0; var_571_bool = 0; var_572_object = Obj(); var_573_bool = 0; var_574_int = 0; var_575_bool = 0; // 0xe50 PushV
	var_0_object = var_566_object; // 0xe51 TMov
	var_576_bool = 0; var_577_object = Obj(); // 0xe52 PushV
	var_577_object = var_566_object; // 0xe53 Mov
	func_4037(var_577_object); // 0xe54 Call
	var_578_bool = var_576_bool == 0; // 0xe56 Not
	if(var_578_bool == 0) goto Label_3674; // 0xe57 JumpB
	var_565_int = -2; // 0xe58 MovI
	return 8; // 0xe59 Return
	
Label_3674:
	CreateDialog(var_572_object); // 0xe5a Func
	var_579_int = 0; // 0xe5c PushV
	func_4232(var_579_int); // 0xe5d Call
	SetNPCName(var_579_int); // 0xe5f ObjFunc
	var_580_string = ""; // 0xe61 PushV
	func_4234(var_580_string); // 0xe62 Call
	SetPhoto(var_580_string); // 0xe64 ObjFunc
	var_581_int = 0; // 0xe66 PushV
	func_5088(var_581_int); // 0xe67 Call
	SetPlayerName(var_581_int); // 0xe69 ObjFunc
	var_574_int = -1; // 0xe6b MovI
	IsOverrideActive(var_573_bool); // 0xe6c Func
	var_582_bool = var_573_bool; // 0xe6e Push
	if(var_582_bool == 0) goto Label_3698; // 0xe6f JumpB
	var_565_int = -2; // 0xe70 MovI
	return 8; // 0xe71 Return
	
Label_3698:
	DoDialog(var_572_object); // 0xe72 Func
	var_583_object = Obj(); var_584_object = Obj(); // 0xe74 PushV
	var_583_object = var_566_object; // 0xe75 Mov
	var_584_object = var_572_object; // 0xe76 Mov
	TaskCall(15); // 0xe77 TaskCall
	func_3727(var_585_object, var_586_object, var_587_string, var_588_bool, var_583_object, var_584_object); // 0xe78 Call
	TaskReturn(); // 0xe79 TaskReturn
	IsDialogEnd(var_575_bool); // 0xe7b ObjFunc
	
Label_3709:
	var_619_bool = var_575_bool == 0; // 0xe7d Not
	if(var_619_bool == 0) goto Label_3716; // 0xe7e JumpB
	sync(); // 0xe7f Func
	IsDialogEnd(var_575_bool); // 0xe81 ObjFunc
	goto Label_3709; // 0xe83 Jump
	
Label_3716:
	var_620_object = Obj(); // 0xe84 PushV
	var_620_object = var_566_object; // 0xe85 Mov
	func_4093(); // 0xe86 Call
	StopDialog(var_572_object); // 0xe88 Func
	GetReturnValue(var_574_int); // 0xe8a ObjFunc
	var_565_int = var_574_int; // 0xe8c Mov
	return 8; // 0xe8d Return
}


func_5201()
{
	var_88_object = Obj(); var_89_object = Obj(); // 0x1451 PushV
	var_90_string = "Adding diary entry"; // 0x1452 PushS
	Trace(var_90_string); // 0x1453 Func
	var_91_int = 123; // 0x1455 PushI
	var_92_int = 1; // 0x1456 PushI
	var_93_int = 13746; // 0x1457 PushI
	CreateDiaryEntry(var_89_object, var_91_int, var_92_int, var_93_int); // 0x1458 Func
	var_94_bool = 0; var_95_object = Obj(); var_96_int = 0; // 0x145a PushV
	var_95_object = var_89_object; // 0x145b Mov
	var_96_int = 111; // 0x145c MovI
	func_4992(var_94_bool, var_95_object, var_96_int); // 0x145d Call
	return 2; // 0x145f Return
}


func_4690(var_114_bool, var_115_object)
{
	var_116_bool = 0; var_117_object = Obj(); // 0x1253 PushV
	var_117_object = var_115_object; // 0x1254 Mov
	func_4976(var_117_object); // 0x1255 Call
	if(var_116_bool == 0) goto Label_4698; // 0x1257 JumpB
	var_114_bool = 1; // 0x1258 MovB
	return 0; // 0x1259 Return
	
Label_4698:
	var_114_bool = 0; // 0x125a MovB
	return 0; // 0x125b Return
}


func_4433()
{
	var_299_string = "ood1Katerina5"; // 0x1152 PushS
	var_300_int = 1; // 0x1153 PushI
	SetVariable(var_299_string, var_300_int); // 0x1154 Func
	return 0; // 0x1156 Return
}


func_4181(var_242_bool, var_244_string)
{
	var_245_int = 0; var_246_int = 0; var_247_bool = 0; var_248_int = 0; var_249_int = 0; var_250_bool = 0; // 0x1055 PushV
	GetInvItemByName(var_248_int, var_244_string); // 0x1056 Func
	var_251_string = "Category"; // 0x1058 PushS
	GetInvItemProperty(var_249_int, var_248_int, var_251_string); // 0x1059 Func
	RemoveItemByType(var_250_bool, var_248_int, var_249_int); // 0x105b ObjFunc
	var_242_bool = var_250_bool; // 0x105d Mov
	return 6; // 0x105e Return
}


func_4439()
{
	var_315_string = "ood1Katerina6"; // 0x1158 PushS
	var_316_int = 1; // 0x1159 PushI
	SetVariable(var_315_string, var_316_int); // 0x115a Func
	return 0; // 0x115c Return
}


func_4952(var_488_bool)
{
	var_490_int = 0; var_491_string = ""; // 0x1359 PushV
	var_491_string = "KnowKapella"; // 0x135a MovS
	func_4132(var_490_int, var_491_string); // 0x135b Call
	var_492_int = 1; // 0x135d PushI
	var_493_bool = var_490_int == var_492_int; // 0x135e Eq
	if(var_493_bool == 0) goto Label_4962; // 0x135f JumpB
	var_488_bool = 1; // 0x1360 MovB
	return 0; // 0x1361 Return
	
Label_4962:
	var_488_bool = 0; // 0x1362 MovB
	return 0; // 0x1363 Return
}


func_4700(var_446_bool)
{
	var_448_int = 0; var_449_string = ""; // 0x125d PushV
	var_449_string = "ood1Katerina5"; // 0x125e MovS
	func_4132(var_448_int, var_449_string); // 0x125f Call
	var_450_int = 0; // 0x1261 PushI
	var_451_bool = var_448_int == var_450_int; // 0x1262 Eq
	if(var_451_bool == 0) goto Label_4710; // 0x1263 JumpB
	var_446_bool = 1; // 0x1264 MovB
	return 0; // 0x1265 Return
	
Label_4710:
	var_446_bool = 0; // 0x1266 MovB
	return 0; // 0x1267 Return
}


func_4445()
{
	var_321_string = "ood1Katerina7"; // 0x115e PushS
	var_322_int = 1; // 0x115f PushI
	SetVariable(var_321_string, var_322_int); // 0x1160 Func
	return 0; // 0x1162 Return
}


func_4191(var_236_bool, var_237_string, var_238_string)
{
	var_239_object = Obj(); var_240_object = Obj(); // 0x105f PushV
	FindActor(var_240_object, var_237_string); // 0x1060 Func
	var_241_bool = var_240_object == 0; // 0x1062 NullEq
	if(var_241_bool == 0) goto Label_4198; // 0x1063 JumpB
	var_236_bool = 0; // 0x1064 MovB
	return 2; // 0x1065 Return
	
Label_4198:
	Trigger(var_240_object, var_238_string); // 0x1066 Func
	var_236_bool = 1; // 0x1068 MovB
	return 2; // 0x1069 Return
}


func_5217()
{
	var_35_bool = GlobalVars[1]; // 0x1461 PushGE
	var_35_bool = 0; // 0x1462 MovB
	GlobalVars[1] = var_35_bool; // 0x1463 PopGE
	return 0; // 0x1464 Return
}


func_1378(var_2_object, var_359_string)
{
	var_360_bool = 0; // 0x563 PushV
	func_4236(var_360_bool); // 0x564 Call
	var_361_bool = var_360_bool == 0; // 0x566 Not
	if(var_361_bool == 0) goto Label_1385; // 0x567 JumpB
	return 0; // 0x568 Return
	
Label_1385:
	var_362_bool = var_359_string == var_2_object; // 0x569 Eq
	if(var_362_bool == 0) goto Label_1388; // 0x56a JumpB
	return 0; // 0x56b Return
	
Label_1388:
	var_363_string = ""; // 0x56c PushV
	var_363_string = var_359_string; // 0x56d Mov
	func_4097(var_363_string); // 0x56e Call
	var_2_object = var_359_string; // 0x570 TMov
	return 0; // 0x571 Return
}


func_4451()
{
	var_327_string = "ood1Katerina8"; // 0x1164 PushS
	var_328_int = 1; // 0x1165 PushI
	SetVariable(var_327_string, var_328_int); // 0x1166 Func
	return 0; // 0x1168 Return
}


func_2660(var_2_object, var_41_string)
{
	var_42_bool = 0; // 0xa65 PushV
	func_4236(var_42_bool); // 0xa66 Call
	var_43_bool = var_42_bool == 0; // 0xa68 Not
	if(var_43_bool == 0) goto Label_2667; // 0xa69 JumpB
	return 0; // 0xa6a Return
	
Label_2667:
	var_44_bool = var_41_string == var_2_object; // 0xa6b Eq
	if(var_44_bool == 0) goto Label_2670; // 0xa6c JumpB
	return 0; // 0xa6d Return
	
Label_2670:
	var_45_string = ""; // 0xa6e PushV
	var_45_string = var_41_string; // 0xa6f Mov
	func_4097(var_45_string); // 0xa70 Call
	var_2_object = var_41_string; // 0xa72 TMov
	return 0; // 0xa73 Return
}


func_5221(var_36_object)
{
	var_37_bool = GlobalVars[1]; // 0x1466 PushGE
	var_38_bool = var_37_bool == 0; // 0x1467 Not
	if(var_38_bool == 0) goto Label_5234; // 0x1468 JumpB
	var_39_int = 0; var_40_object = Obj(); // 0x1469 PushV
	var_40_object = var_36_object; // 0x146a Mov
	TaskCall(2); // 0x146b TaskCall
	func_49(var_41_object, var_39_int, var_40_object); // 0x146c Call
	TaskReturn(); // 0x146d TaskReturn
	var_148_bool = GlobalVars[1]; // 0x146f PushGE
	var_148_bool = 1; // 0x1470 MovB
	GlobalVars[1] = var_148_bool; // 0x1471 PopGE
	
Label_5234:
	var_149_bool = 0; var_150_int = 0; // 0x1472 PushV
	var_150_int = 1; // 0x1473 MovI
	func_4217(var_149_bool, var_150_int); // 0x1474 Call
	if(var_149_bool == 0) goto Label_5246; // 0x1476 JumpB
	var_157_int = 0; var_158_object = Obj(); // 0x1477 PushV
	var_158_object = var_36_object; // 0x1478 Mov
	TaskCall(6); // 0x1479 TaskCall
	func_1035(var_159_object, var_157_int, var_158_object); // 0x147a Call
	TaskReturn(); // 0x147b TaskReturn
	return 0; // 0x147d Return
	
Label_5246:
	var_377_bool = 0; var_378_int = 0; // 0x147e PushV
	var_378_int = 2; // 0x147f MovI
	func_4217(var_377_bool, var_378_int); // 0x1480 Call
	if(var_377_bool == 0) goto Label_5258; // 0x1482 JumpB
	var_379_int = 0; var_380_object = Obj(); // 0x1483 PushV
	var_380_object = var_36_object; // 0x1484 Mov
	TaskCall(8); // 0x1485 TaskCall
	func_2509(var_381_object, var_379_int, var_380_object); // 0x1486 Call
	TaskReturn(); // 0x1487 TaskReturn
	return 0; // 0x1489 Return
	
Label_5258:
	var_429_bool = 0; var_430_int = 0; // 0x148a PushV
	var_430_int = 3; // 0x148b MovI
	func_4217(var_429_bool, var_430_int); // 0x148c Call
	if(var_429_bool == 0) goto Label_5270; // 0x148e JumpB
	var_431_int = 0; var_432_object = Obj(); // 0x148f PushV
	var_432_object = var_36_object; // 0x1490 Mov
	TaskCall(10); // 0x1491 TaskCall
	func_2827(var_433_object, var_431_int, var_432_object); // 0x1492 Call
	TaskReturn(); // 0x1493 TaskReturn
	return 0; // 0x1495 Return
	
Label_5270:
	var_508_bool = 0; var_509_int = 0; // 0x1496 PushV
	var_509_int = 4; // 0x1497 MovI
	func_4217(var_508_bool, var_509_int); // 0x1498 Call
	if(var_508_bool == 0) goto Label_5282; // 0x149a JumpB
	var_510_int = 0; var_511_object = Obj(); // 0x149b PushV
	var_511_object = var_36_object; // 0x149c Mov
	TaskCall(12); // 0x149d TaskCall
	func_3426(var_512_object, var_510_int, var_511_object); // 0x149e Call
	TaskReturn(); // 0x149f TaskReturn
	return 0; // 0x14a1 Return
	
Label_5282:
	var_563_bool = 0; var_564_int = 0; // 0x14a2 PushV
	var_564_int = 5; // 0x14a3 MovI
	func_4217(var_563_bool, var_564_int); // 0x14a4 Call
	if(var_563_bool == 0) goto Label_5294; // 0x14a6 JumpB
	var_565_int = 0; var_566_object = Obj(); // 0x14a7 PushV
	var_566_object = var_36_object; // 0x14a8 Mov
	TaskCall(14); // 0x14a9 TaskCall
	func_3664(var_567_object, var_565_int, var_566_object); // 0x14aa Call
	TaskReturn(); // 0x14ab TaskReturn
	return 0; // 0x14ad Return
	
Label_5294:
	var_621_bool = 0; var_622_int = 0; // 0x14ae PushV
	var_622_int = 6; // 0x14af MovI
	func_4217(var_621_bool, var_622_int); // 0x14b0 Call
	if(var_621_bool == 0) goto Label_5306; // 0x14b2 JumpB
	var_623_int = 0; var_624_object = Obj(); // 0x14b3 PushV
	var_624_object = var_36_object; // 0x14b4 Mov
	TaskCall(4); // 0x14b5 TaskCall
	func_317(var_625_object, var_623_int, var_624_object); // 0x14b6 Call
	TaskReturn(); // 0x14b7 TaskReturn
	return 0; // 0x14b9 Return
	
Label_5306:
	var_725_bool = 0; // 0x14ba PushV
	func_4223(var_725_bool); // 0x14bb Call
	return 0; // 0x14bd Return
}


func_4964(var_407_bool)
{
	var_409_int = 0; var_410_string = ""; // 0x1365 PushV
	var_410_string = "KnowPredictions"; // 0x1366 MovS
	func_4132(var_409_int, var_410_string); // 0x1367 Call
	var_411_int = 1; // 0x1369 PushI
	var_412_bool = var_409_int == var_411_int; // 0x136a Eq
	if(var_412_bool == 0) goto Label_4974; // 0x136b JumpB
	var_407_bool = 1; // 0x136c MovB
	return 0; // 0x136d Return
	
Label_4974:
	var_407_bool = 0; // 0x136e MovB
	return 0; // 0x136f Return
}


func_3426(var_0_object, var_510_int, var_511_object)
{
	var_513_object = Obj(); var_514_bool = 0; var_515_int = 0; var_516_bool = 0; var_517_object = Obj(); var_518_bool = 0; var_519_int = 0; var_520_bool = 0; // 0xd62 PushV
	var_0_object = var_511_object; // 0xd63 TMov
	var_521_bool = 0; var_522_object = Obj(); // 0xd64 PushV
	var_522_object = var_511_object; // 0xd65 Mov
	func_4037(var_522_object); // 0xd66 Call
	var_523_bool = var_521_bool == 0; // 0xd68 Not
	if(var_523_bool == 0) goto Label_3436; // 0xd69 JumpB
	var_510_int = -2; // 0xd6a MovI
	return 8; // 0xd6b Return
	
Label_3436:
	CreateDialog(var_517_object); // 0xd6c Func
	var_524_int = 0; // 0xd6e PushV
	func_4232(var_524_int); // 0xd6f Call
	SetNPCName(var_524_int); // 0xd71 ObjFunc
	var_525_string = ""; // 0xd73 PushV
	func_4234(var_525_string); // 0xd74 Call
	SetPhoto(var_525_string); // 0xd76 ObjFunc
	var_526_int = 0; // 0xd78 PushV
	func_5088(var_526_int); // 0xd79 Call
	SetPlayerName(var_526_int); // 0xd7b ObjFunc
	var_519_int = -1; // 0xd7d MovI
	IsOverrideActive(var_518_bool); // 0xd7e Func
	var_527_bool = var_518_bool; // 0xd80 Push
	if(var_527_bool == 0) goto Label_3460; // 0xd81 JumpB
	var_510_int = -2; // 0xd82 MovI
	return 8; // 0xd83 Return
	
Label_3460:
	DoDialog(var_517_object); // 0xd84 Func
	var_528_object = Obj(); var_529_object = Obj(); // 0xd86 PushV
	var_528_object = var_511_object; // 0xd87 Mov
	var_529_object = var_517_object; // 0xd88 Mov
	TaskCall(13); // 0xd89 TaskCall
	func_3489(var_530_object, var_531_object, var_532_string, var_533_bool, var_528_object, var_529_object); // 0xd8a Call
	TaskReturn(); // 0xd8b TaskReturn
	IsDialogEnd(var_520_bool); // 0xd8d ObjFunc
	
Label_3471:
	var_561_bool = var_520_bool == 0; // 0xd8f Not
	if(var_561_bool == 0) goto Label_3478; // 0xd90 JumpB
	sync(); // 0xd91 Func
	IsDialogEnd(var_520_bool); // 0xd93 ObjFunc
	goto Label_3471; // 0xd95 Jump
	
Label_3478:
	var_562_object = Obj(); // 0xd96 PushV
	var_562_object = var_511_object; // 0xd97 Mov
	func_4093(); // 0xd98 Call
	StopDialog(var_517_object); // 0xd9a Func
	GetReturnValue(var_519_int); // 0xd9c ObjFunc
	var_510_int = var_519_int; // 0xd9e Mov
	return 8; // 0xd9f Return
}


func_4712(var_462_bool)
{
	var_464_int = 0; var_465_string = ""; // 0x1269 PushV
	var_465_string = "ood1Katerina6"; // 0x126a MovS
	func_4132(var_464_int, var_465_string); // 0x126b Call
	var_466_int = 0; // 0x126d PushI
	var_467_bool = var_464_int == var_466_int; // 0x126e Eq
	if(var_467_bool == 0) goto Label_4722; // 0x126f JumpB
	var_462_bool = 1; // 0x1270 MovB
	return 0; // 0x1271 Return
	
Label_4722:
	var_462_bool = 0; // 0x1272 MovB
	return 0; // 0x1273 Return
}


func_4457()
{
	var_333_string = "ood1Katerina9"; // 0x116a PushS
	var_334_int = 1; // 0x116b PushI
	SetVariable(var_333_string, var_334_int); // 0x116c Func
	return 0; // 0x116e Return
}


func_4203(var_58_float)
{
	var_59_float = 0; var_60_float = 0; // 0x106b PushV
	GetGameTime(var_60_float); // 0x106c Func
	var_58_float = var_60_float; // 0x106e Mov
	return 2; // 0x106f Return
}


func_4463()
{
	var_339_string = "ood1Katerina10"; // 0x1170 PushS
	var_340_int = 1; // 0x1171 PushI
	SetVariable(var_339_string, var_340_int); // 0x1172 Func
	return 0; // 0x1174 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_102_object, var_103_object)
{
	var_0_object = var_103_object; // 0x71 TMov
	var_1_object = var_102_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_108_int = 1; // 0x74 PushI
	if(var_108_int == 0) goto Label_150; // 0x75 JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x76 PushV
	var_109_object = var_1_object; // 0x77 MovT
	var_110_object = var_0_object; // 0x78 MovT
	func_4256(); // 0x79 Call
	var_113_string = ""; // 0x7b PushV
	var_113_string = "Neutral"; // 0x7c MovS
	func_180(var_103_object, var_113_string); // 0x7d Call
	var_128_int = 295; // 0x7f PushI
	SetMessage(var_128_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_129_int = 296; // 0x84 PushI
	var_130_int = 350; // 0x85 PushI
	var_131_int = 347; // 0x86 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x87 TObjFunc
	var_132_int = 297; // 0x89 PushI
	var_133_int = 350; // 0x8a PushI
	var_134_int = 348; // 0x8b PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x8c TObjFunc
	var_135_int = 298; // 0x8e PushI
	var_136_int = 350; // 0x8f PushI
	var_137_int = 349; // 0x90 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
	
Label_150:
	var_138_bool = 0; // 0x96 PushV
	func_4236(var_138_bool); // 0x97 Call
	if(var_138_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_139_object = var_3_object; // 0x9c PushT
	if(var_139_object == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_140_string = ""; // 0x9f PushV
	var_140_string = var_2_object; // 0xa0 MovT
	func_4097(var_140_string); // 0xa1 Call
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_141_string = "all"; // 0xa5 PushS
	var_142_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_141_string, var_142_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_143_object = var_3_object; // 0xab PushT
	if(var_143_object == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_144_string = "all"; // 0xae PushS
	var_145_string = "idle"; // 0xaf PushS
	PlayAnimation(var_144_string, var_145_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
}


func_4208(var_151_int)
{
	var_152_float = 0; var_153_float = 0; // 0x1070 PushV
	GetGameTime(var_153_float); // 0x1071 Func
	var_154_int = 1; // 0x1073 PushI
	var_155_int = 0; // 0x1074 PushV
	var_156_int = 24; // 0x1075 PushI
	var_155_int = var_153_float / var_153_float; // 0x1076 Div2
	var_151_int = var_154_int + var_155_int; // 0x1077 Add2
	return 2; // 0x1078 Return
}


func_4976(var_116_bool)
{
	var_116_bool = 0; // 0x1371 MovB
	return 0; // 0x1372 Return
}


func_4979(var_76_object)
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x1373 PushV
	GetDiaryRoot(var_78_object); // 0x1374 Func
	var_79_bool = var_78_object == 0; // 0x1376 Not
	if(var_79_bool == 0) goto Label_4989; // 0x1377 JumpB
	var_80_string = "Can't retrieve diary root"; // 0x1378 PushS
	Trace(var_80_string); // 0x1379 Func
	var_76_object = 0; // 0x137b MovB
	return 2; // 0x137c Return
	
Label_4989:
	var_76_object = var_78_object; // 0x137d Mov
	return 2; // 0x137e Return
}


func_4724(var_478_bool)
{
	var_480_int = 0; var_481_string = ""; // 0x1275 PushV
	var_481_string = "ood1Katerina7"; // 0x1276 MovS
	func_4132(var_480_int, var_481_string); // 0x1277 Call
	var_482_int = 0; // 0x1279 PushI
	var_483_bool = var_480_int == var_482_int; // 0x127a Eq
	if(var_483_bool == 0) goto Label_4734; // 0x127b JumpB
	var_478_bool = 1; // 0x127c MovB
	return 0; // 0x127d Return
	
Label_4734:
	var_478_bool = 0; // 0x127e MovB
	return 0; // 0x127f Return
}


func_4469()
{
	var_88_object = Obj(); var_89_string = ""; var_90_float = 0; // 0x1176 PushV
	var_91_object = Obj(); // 0x1177 PushV
	func_5038(var_91_object); // 0x1178 Call
	var_88_object = var_91_object; // 0x1179 Mov
	var_89_string = "pt_map_lara"; // 0x117b MovS
	var_90_float = 2; // 0x117c MovI
	func_5055(var_88_object, var_89_string, var_90_float); // 0x117d Call
	var_111_object = Obj(); // 0x117f PushV
	func_5038(var_111_object); // 0x1180 Call
	ShowMap(var_111_object); // 0x1182 ObjFunc
	return 0; // 0x1184 Return
}


func_4217(var_149_bool, var_150_int)
{
	var_151_int = 0; // 0x107a PushV
	func_4208(var_151_int); // 0x107b Call
	var_149_bool = var_151_int == var_150_int; // 0x107d Eq2
	return 0; // 0x107e Return
}


func_380(var_0_object, var_1_object, var_2_object, var_3_object, var_641_object, var_642_object)
{
	var_0_object = var_642_object; // 0x17d TMov
	var_1_object = var_641_object; // 0x17e TMov
	var_3_object = 0; // 0x17f TMovB
	var_647_int = 1; // 0x180 PushI
	if(var_647_int == 0) goto Label_478; // 0x181 JumpB
	var_648_string = ""; // 0x182 PushV
	var_648_string = "Neutral"; // 0x183 MovS
	func_508(var_642_object, var_648_string); // 0x184 Call
	var_653_int = 12770; // 0x186 PushI
	SetMessage(var_653_int); // 0x187 TObjFunc
	ClearReplies(); // 0x189 TObjFunc
	var_654_bool = 0; // 0x18b PushV
	var_654_bool = 0; // 0x18c MovB
	var_655_bool = 0; var_656_object = Obj(); // 0x18d PushV
	var_656_object = var_1_object; // 0x18e MovT
	func_4820(var_656_object); // 0x18f Call
	if(var_655_bool == 0) goto Label_408; // 0x191 JumpB
	var_661_bool = 0; var_662_object = Obj(); // 0x192 PushV
	var_662_object = var_1_object; // 0x193 MovT
	func_4796(var_662_object); // 0x194 Call
	if(var_661_bool == 0) goto Label_408; // 0x196 JumpB
	var_654_bool = 1; // 0x197 MovB
	
Label_408:
	if(var_654_bool == 0) goto Label_414; // 0x198 JumpB
	var_667_int = 12771; // 0x199 PushI
	var_668_int = 3726; // 0x19a PushI
	var_669_int = 13970; // 0x19b PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0x19c TObjFunc
	
Label_414:
	var_670_bool = 0; // 0x19e PushV
	var_670_bool = 0; // 0x19f MovB
	var_671_bool = 0; var_672_object = Obj(); // 0x1a0 PushV
	var_672_object = var_1_object; // 0x1a1 MovT
	func_4832(var_672_object); // 0x1a2 Call
	if(var_671_bool == 0) goto Label_427; // 0x1a4 JumpB
	var_677_bool = 0; var_678_object = Obj(); // 0x1a5 PushV
	var_678_object = var_1_object; // 0x1a6 MovT
	func_4808(var_678_object); // 0x1a7 Call
	if(var_677_bool == 0) goto Label_427; // 0x1a9 JumpB
	var_670_bool = 1; // 0x1aa MovB
	
Label_427:
	if(var_670_bool == 0) goto Label_433; // 0x1ab JumpB
	var_683_int = 12772; // 0x1ac PushI
	var_684_int = 13972; // 0x1ad PushI
	var_685_int = 13971; // 0x1ae PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x1af TObjFunc
	
Label_433:
	var_686_bool = 0; // 0x1b1 PushV
	var_686_bool = 1; // 0x1b2 MovB
	var_687_bool = 0; // 0x1b3 PushV
	var_687_bool = 0; // 0x1b4 MovB
	var_688_bool = 0; var_689_object = Obj(); // 0x1b5 PushV
	var_689_object = var_1_object; // 0x1b6 MovT
	func_4844(var_689_object); // 0x1b7 Call
	if(var_688_bool == 0) goto Label_448; // 0x1b9 JumpB
	var_694_bool = 0; var_695_object = Obj(); // 0x1ba PushV
	var_695_object = var_1_object; // 0x1bb MovT
	func_4868(var_695_object); // 0x1bc Call
	if(var_694_bool == 0) goto Label_448; // 0x1be JumpB
	var_687_bool = 1; // 0x1bf MovB
	
Label_448:
	if(var_687_bool == 0) goto Label_464; // 0x1c0 JumpB
	var_700_bool = 0; // 0x1c1 PushV
	var_700_bool = 0; // 0x1c2 MovB
	var_701_bool = 0; var_702_object = Obj(); // 0x1c3 PushV
	var_702_object = var_1_object; // 0x1c4 MovT
	func_4856(var_702_object); // 0x1c5 Call
	if(var_701_bool == 0) goto Label_462; // 0x1c7 JumpB
	var_707_bool = 0; var_708_object = Obj(); // 0x1c8 PushV
	var_708_object = var_1_object; // 0x1c9 MovT
	func_4868(var_708_object); // 0x1ca Call
	if(var_707_bool == 0) goto Label_462; // 0x1cc JumpB
	var_700_bool = 1; // 0x1cd MovB
	
Label_462:
	if(var_700_bool == 0) goto Label_464; // 0x1ce JumpB
	var_686_bool = 0; // 0x1cf MovB
	
Label_464:
	if(var_686_bool == 0) goto Label_470; // 0x1d0 JumpB
	var_709_int = 12791; // 0x1d1 PushI
	var_710_int = 13991; // 0x1d2 PushI
	var_711_int = 13990; // 0x1d3 PushI
	AddReply(var_709_int, var_710_int, var_711_int); // 0x1d4 TObjFunc
	
Label_470:
	var_712_int = 12790; // 0x1d6 PushI
	var_713_int = -1; // 0x1d7 PushI
	var_714_int = 13989; // 0x1d8 PushI
	AddReply(var_712_int, var_713_int, var_714_int); // 0x1d9 TObjFunc
	goto Label_478; // 0x1db Jump
	
Label_478:
	var_715_bool = 0; // 0x1de PushV
	func_4236(var_715_bool); // 0x1df Call
	if(var_715_bool == 0) goto Label_493; // 0x1e1 JumpB
	
Label_482:
	lshWaitForAnimEnd(); // 0x1e2 Func
	var_716_object = var_3_object; // 0x1e4 PushT
	if(var_716_object == 0) goto Label_487; // 0x1e5 JumpB
	goto Label_492; // 0x1e6 Jump
	
Label_492:
	goto Label_507; // 0x1ec Jump
	
Label_507:
	return 0; // 0x1fb Return
	
Label_487:
	var_717_string = ""; // 0x1e7 PushV
	var_717_string = var_2_object; // 0x1e8 MovT
	func_4097(var_717_string); // 0x1e9 Call
	goto Label_482; // 0x1eb Jump
	
Label_493:
	var_718_string = "all"; // 0x1ed PushS
	var_719_string = "idle"; // 0x1ee PushS
	PlayAnimation(var_718_string, var_719_string); // 0x1ef Func
	
Label_497:
	WaitForAnimEnd(); // 0x1f1 Func
	var_720_object = var_3_object; // 0x1f3 PushT
	if(var_720_object == 0) goto Label_502; // 0x1f4 JumpB
	goto Label_507; // 0x1f5 Jump
	
Label_502:
	var_721_string = "all"; // 0x1f6 PushS
	var_722_string = "idle"; // 0x1f7 PushS
	PlayAnimation(var_721_string, var_722_string); // 0x1f8 Func
	goto Label_497; // 0x1fa Jump
}


func_4223(var_725_bool)
{
	var_726_bool = 0; var_727_bool = 0; // 0x107f PushV
	var_728_string = ""; // 0x1080 PushV
	var_728_string = "No"; // 0x1081 MovS
	func_4097(var_728_string); // 0x1082 Call
	lshWaitForAnimEnd(var_727_bool); // 0x1084 Func
	var_725_bool = var_727_bool; // 0x1086 Mov
	return 2; // 0x1087 Return
}


func_4736(var_494_bool)
{
	var_496_int = 0; var_497_string = ""; // 0x1281 PushV
	var_497_string = "ood1Katerina8"; // 0x1282 MovS
	func_4132(var_496_int, var_497_string); // 0x1283 Call
	var_498_int = 0; // 0x1285 PushI
	var_499_bool = var_496_int == var_498_int; // 0x1286 Eq
	if(var_499_bool == 0) goto Label_4746; // 0x1287 JumpB
	var_494_bool = 1; // 0x1288 MovB
	return 0; // 0x1289 Return
	
Label_4746:
	var_494_bool = 0; // 0x128a MovB
	return 0; // 0x128b Return
}


func_4992(var_67_bool, var_68_object, var_69_int)
{
	var_70_object = Obj(); var_71_object = Obj(); var_72_int = 0; var_73_object = Obj(); var_74_object = Obj(); var_75_int = 0; // 0x1380 PushV
	var_76_object = Obj(); // 0x1381 PushV
	func_4979(var_76_object); // 0x1382 Call
	var_73_object = var_76_object; // 0x1383 Mov
	Find(var_69_int, var_74_object); // 0x1385 ObjFunc
	var_81_bool = var_74_object == 0; // 0x1387 Not
	if(var_81_bool == 0) goto Label_5007; // 0x1388 JumpB
	var_82_string = "Can't find diary parent with id: "; // 0x1389 PushS
	var_83_int = var_82_string + var_69_int; // 0x138a Add
	Trace(var_83_int); // 0x138b Func
	var_67_bool = 0; // 0x138d MovB
	return 6; // 0x138e Return
	
Label_5007:
	AddChild(var_68_object); // 0x138f ObjFunc
	var_84_string = "player_diary"; // 0x1391 PushS
	var_85_int = 1; // 0x1392 PushI
	SetVariable(var_84_string, var_85_int); // 0x1393 Func
	GetCategory(var_75_int); // 0x1395 ObjFunc
	SetDiarySection(var_75_int); // 0x1397 Func
	var_67_bool = 0; // 0x1399 MovB
	return 6; // 0x139a Return
}


func_4485()
{
	var_706_string = "KnowRubin"; // 0x1186 PushS
	var_707_int = 1; // 0x1187 PushI
	SetVariable(var_706_string, var_707_int); // 0x1188 Func
	return 0; // 0x118a Return
}


func_4232(var_91_int)
{
	var_91_int = 2864; // 0x1088 MovI
	return 0; // 0x1089 Return
}


func_4234(var_92_string)
{
	var_92_string = "ui/NPC_Black.png"; // 0x108a MovS
	return 0; // 0x108b Return
}


func_4491()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x118b PushV
	var_45_string = "d5q01"; // 0x118c PushS
	var_46_int = 4; // 0x118d PushI
	SetVariable(var_45_string, var_46_int); // 0x118e Func
	var_47_object = Obj(); // 0x1190 PushV
	func_5038(var_47_object); // 0x1191 Call
	var_44_object = var_47_object; // 0x1192 Mov
	var_54_string = "d5q01KaterinaGotoLara"; // 0x1194 PushS
	var_55_string = "pt_map_lara"; // 0x1195 PushS
	var_56_int = 1; // 0x1196 PushI
	var_57_int = 11959; // 0x1197 PushI
	var_58_float = 0; // 0x1198 PushV
	func_4203(var_58_float); // 0x1199 Call
	AddMark(var_54_string, var_55_string, var_56_int, var_57_int, var_58_float); // 0x119b ObjFunc
	func_5185(); // 0x119e Call
	return 2; // 0x11a0 Return
}


func_4236(var_38_bool)
{
	var_38_bool = 1; // 0x108c MovB
	return 0; // 0x108d Return
}


func_4748(var_510_bool)
{
	var_512_int = 0; var_513_string = ""; // 0x128d PushV
	var_513_string = "ood1Katerina9"; // 0x128e MovS
	func_4132(var_512_int, var_513_string); // 0x128f Call
	var_514_int = 0; // 0x1291 PushI
	var_515_bool = var_512_int == var_514_int; // 0x1292 Eq
	if(var_515_bool == 0) goto Label_4758; // 0x1293 JumpB
	var_510_bool = 1; // 0x1294 MovB
	return 0; // 0x1295 Return
	
Label_4758:
	var_510_bool = 0; // 0x1296 MovB
	return 0; // 0x1297 Return
}


func_4238()
{
	var_43_string = "ood1Katerina1"; // 0x108f PushS
	var_44_int = 1; // 0x1090 PushI
	SetVariable(var_43_string, var_44_int); // 0x1091 Func
	return 0; // 0x1093 Return
}


func_3727(var_0_object, var_1_object, var_2_object, var_3_object, var_583_object, var_584_object)
{
	var_0_object = var_584_object; // 0xe90 TMov
	var_1_object = var_583_object; // 0xe91 TMov
	var_3_object = 0; // 0xe92 TMovB
	var_589_int = 1; // 0xe93 PushI
	if(var_589_int == 0) goto Label_3765; // 0xe94 JumpB
	var_590_string = ""; // 0xe95 PushV
	var_590_string = "Neutral"; // 0xe96 MovS
	func_3795(var_584_object, var_590_string); // 0xe97 Call
	var_595_int = 11641; // 0xe99 PushI
	SetMessage(var_595_int); // 0xe9a TObjFunc
	ClearReplies(); // 0xe9c TObjFunc
	var_596_bool = 0; var_597_object = Obj(); // 0xe9e PushV
	var_597_object = var_1_object; // 0xe9f MovT
	func_4784(var_597_object); // 0xea0 Call
	if(var_596_bool == 0) goto Label_3752; // 0xea2 JumpB
	var_602_int = 11642; // 0xea3 PushI
	var_603_int = 12842; // 0xea4 PushI
	var_604_int = 12841; // 0xea5 PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0xea6 TObjFunc
	
Label_3752:
	var_605_int = 11651; // 0xea8 PushI
	var_606_int = 12851; // 0xea9 PushI
	var_607_int = 12850; // 0xeaa PushI
	AddReply(var_605_int, var_606_int, var_607_int); // 0xeab TObjFunc
	var_608_int = 11660; // 0xead PushI
	var_609_int = -1; // 0xeae PushI
	var_610_int = 12859; // 0xeaf PushI
	AddReply(var_608_int, var_609_int, var_610_int); // 0xeb0 TObjFunc
	goto Label_3765; // 0xeb2 Jump
	
Label_3765:
	var_611_bool = 0; // 0xeb5 PushV
	func_4236(var_611_bool); // 0xeb6 Call
	if(var_611_bool == 0) goto Label_3780; // 0xeb8 JumpB
	
Label_3769:
	lshWaitForAnimEnd(); // 0xeb9 Func
	var_612_object = var_3_object; // 0xebb PushT
	if(var_612_object == 0) goto Label_3774; // 0xebc JumpB
	goto Label_3779; // 0xebd Jump
	
Label_3779:
	goto Label_3794; // 0xec3 Jump
	
Label_3794:
	return 0; // 0xed2 Return
	
Label_3774:
	var_613_string = ""; // 0xebe PushV
	var_613_string = var_2_object; // 0xebf MovT
	func_4097(var_613_string); // 0xec0 Call
	goto Label_3769; // 0xec2 Jump
	
Label_3780:
	var_614_string = "all"; // 0xec4 PushS
	var_615_string = "idle"; // 0xec5 PushS
	PlayAnimation(var_614_string, var_615_string); // 0xec6 Func
	
Label_3784:
	WaitForAnimEnd(); // 0xec8 Func
	var_616_object = var_3_object; // 0xeca PushT
	if(var_616_object == 0) goto Label_3789; // 0xecb JumpB
	goto Label_3794; // 0xecc Jump
	
Label_3789:
	var_617_string = "all"; // 0xecd PushS
	var_618_string = "idle"; // 0xece PushS
	PlayAnimation(var_617_string, var_618_string); // 0xecf Func
	goto Label_3784; // 0xed1 Jump
}


func_4244()
{
	var_96_string = "ood1Katerina2"; // 0x1095 PushS
	var_97_int = 1; // 0x1096 PushI
	SetVariable(var_96_string, var_97_int); // 0x1097 Func
	return 0; // 0x1099 Return
}


func_4760(var_526_bool)
{
	var_528_int = 0; var_529_string = ""; // 0x1299 PushV
	var_529_string = "ood1Katerina10"; // 0x129a MovS
	func_4132(var_528_int, var_529_string); // 0x129b Call
	var_530_int = 0; // 0x129d PushI
	var_531_bool = var_528_int == var_530_int; // 0x129e Eq
	if(var_531_bool == 0) goto Label_4770; // 0x129f JumpB
	var_526_bool = 1; // 0x12a0 MovB
	return 0; // 0x12a1 Return
	
Label_4770:
	var_526_bool = 0; // 0x12a2 MovB
	return 0; // 0x12a3 Return
}


func_4250()
{
	var_186_string = "ood1Katerina3"; // 0x109b PushS
	var_187_int = 1; // 0x109c PushI
	SetVariable(var_186_string, var_187_int); // 0x109d Func
	return 0; // 0x109f Return
}


func_5021(var_224_bool, var_225_int)
{
	var_226_object = Obj(); var_227_object = Obj(); var_228_object = Obj(); var_229_object = Obj(); // 0x139d PushV
	var_230_object = Obj(); // 0x139e PushV
	func_4979(var_230_object); // 0x139f Call
	var_228_object = var_230_object; // 0x13a0 Mov
	Find(var_225_int, var_229_object); // 0x13a2 ObjFunc
	var_231_bool = var_229_object == 0; // 0x13a4 Not
	if(var_231_bool == 0) goto Label_5032; // 0x13a5 JumpB
	var_224_bool = 0; // 0x13a6 MovB
	return 4; // 0x13a7 Return
	
Label_5032:
	Remove(); // 0x13a8 ObjFunc
	var_224_bool = 1; // 0x13aa MovB
	return 4; // 0x13ab Return
}


func_4256()
{
	var_43_string = "KnowKaterina"; // 0x10a1 PushS
	var_44_int = 1; // 0x10a2 PushI
	SetVariable(var_43_string, var_44_int); // 0x10a3 Func
	return 0; // 0x10a5 Return
}


func_3489(var_0_object, var_1_object, var_2_object, var_3_object, var_528_object, var_529_object)
{
	var_0_object = var_529_object; // 0xda2 TMov
	var_1_object = var_528_object; // 0xda3 TMov
	var_3_object = 0; // 0xda4 TMovB
	var_534_int = 1; // 0xda5 PushI
	if(var_534_int == 0) goto Label_3522; // 0xda6 JumpB
	var_535_string = ""; // 0xda7 PushV
	var_535_string = "Neutral"; // 0xda8 MovS
	func_3552(var_529_object, var_535_string); // 0xda9 Call
	var_540_int = 11203; // 0xdab PushI
	SetMessage(var_540_int); // 0xdac TObjFunc
	ClearReplies(); // 0xdae TObjFunc
	var_541_bool = 0; var_542_object = Obj(); // 0xdb0 PushV
	var_542_object = var_1_object; // 0xdb1 MovT
	func_4928(var_542_object); // 0xdb2 Call
	if(var_541_bool == 0) goto Label_3514; // 0xdb4 JumpB
	var_547_int = 11204; // 0xdb5 PushI
	var_548_int = 12393; // 0xdb6 PushI
	var_549_int = 12392; // 0xdb7 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0xdb8 TObjFunc
	
Label_3514:
	var_550_int = 15336; // 0xdba PushI
	var_551_int = -1; // 0xdbb PushI
	var_552_int = 16559; // 0xdbc PushI
	AddReply(var_550_int, var_551_int, var_552_int); // 0xdbd TObjFunc
	goto Label_3522; // 0xdbf Jump
	
Label_3522:
	var_553_bool = 0; // 0xdc2 PushV
	func_4236(var_553_bool); // 0xdc3 Call
	if(var_553_bool == 0) goto Label_3537; // 0xdc5 JumpB
	
Label_3526:
	lshWaitForAnimEnd(); // 0xdc6 Func
	var_554_object = var_3_object; // 0xdc8 PushT
	if(var_554_object == 0) goto Label_3531; // 0xdc9 JumpB
	goto Label_3536; // 0xdca Jump
	
Label_3536:
	goto Label_3551; // 0xdd0 Jump
	
Label_3551:
	return 0; // 0xddf Return
	
Label_3531:
	var_555_string = ""; // 0xdcb PushV
	var_555_string = var_2_object; // 0xdcc MovT
	func_4097(var_555_string); // 0xdcd Call
	goto Label_3526; // 0xdcf Jump
	
Label_3537:
	var_556_string = "all"; // 0xdd1 PushS
	var_557_string = "idle"; // 0xdd2 PushS
	PlayAnimation(var_556_string, var_557_string); // 0xdd3 Func
	
Label_3541:
	WaitForAnimEnd(); // 0xdd5 Func
	var_558_object = var_3_object; // 0xdd7 PushT
	if(var_558_object == 0) goto Label_3546; // 0xdd8 JumpB
	goto Label_3551; // 0xdd9 Jump
	
Label_3546:
	var_559_string = "all"; // 0xdda PushS
	var_560_string = "idle"; // 0xddb PushS
	PlayAnimation(var_559_string, var_560_string); // 0xddc Func
	goto Label_3541; // 0xdde Jump
}


func_4514()
{
	var_47_string = "d1q01KaterinaUHave1day"; // 0x11a3 PushS
	var_48_int = 1; // 0x11a4 PushI
	SetVariable(var_47_string, var_48_int); // 0x11a5 Func
	func_5105(); // 0x11a8 Call
	return 0; // 0x11aa Return
}


func_4772(var_81_bool)
{
	var_83_int = 0; var_84_string = ""; // 0x12a5 PushV
	var_84_string = "d3q01"; // 0x12a6 MovS
	func_4132(var_83_int, var_84_string); // 0x12a7 Call
	var_85_int = 0; // 0x12a9 PushI
	var_86_bool = var_83_int == var_85_int; // 0x12aa Eq
	if(var_86_bool == 0) goto Label_4782; // 0x12ab JumpB
	var_81_bool = 1; // 0x12ac MovB
	return 0; // 0x12ad Return
	
Label_4782:
	var_81_bool = 0; // 0x12ae MovB
	return 0; // 0x12af Return
}


func_4262()
{
	func_5121(); // 0x10a8 Call
	func_5169(); // 0x10ab Call
	var_118_object = Obj(); var_119_string = ""; // 0x10ad PushV
	var_119_string = "quest_d1_04"; // 0x10ae MovS
	func_4137(var_118_object, var_119_string); // 0x10af Call
	return 0; // 0x10b1 Return
}


func_4523()
{
	var_43_string = "ood6Katerina1"; // 0x11ac PushS
	var_44_int = 1; // 0x11ad PushI
	SetVariable(var_43_string, var_44_int); // 0x11ae Func
	return 0; // 0x11b0 Return
}


func_5038(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); var_51_object = Obj(); // 0x13ae PushV
	GetMainOutdoorScene(var_50_object); // 0x13af Func
	var_52_bool = var_50_object == 0; // 0x13b1 NullEq
	if(var_52_bool == 0) goto Label_5049; // 0x13b2 JumpB
	var_53_string = "Can't find main outdoor scene"; // 0x13b3 PushS
	Trace(var_53_string); // 0x13b4 Func
	var_51_object = 0; // 0x13b6 SetNull
	var_47_object = var_51_object; // 0x13b7 Mov
	return 4; // 0x13b8 Return
	
Label_5049:
	GetMap(var_51_object); // 0x13b9 ObjFunc
	var_47_object = var_51_object; // 0x13bb Mov
	return 4; // 0x13bc Return
}


func_4784(var_130_bool)
{
	var_132_int = 0; var_133_string = ""; // 0x12b1 PushV
	var_133_string = "d5q01"; // 0x12b2 MovS
	func_4132(var_132_int, var_133_string); // 0x12b3 Call
	var_136_int = 3; // 0x12b5 PushI
	var_137_bool = var_132_int == var_136_int; // 0x12b6 Eq
	if(var_137_bool == 0) goto Label_4794; // 0x12b7 JumpB
	var_130_bool = 1; // 0x12b8 MovB
	return 0; // 0x12b9 Return
	
Label_4794:
	var_130_bool = 0; // 0x12ba MovB
	return 0; // 0x12bb Return
}


func_4529()
{
	var_61_string = "ood6Katerina2"; // 0x11b2 PushS
	var_62_int = 1; // 0x11b3 PushI
	SetVariable(var_61_string, var_62_int); // 0x11b4 Func
	return 0; // 0x11b6 Return
}


func_4274()
{
	var_254_string = "ood1Katerina4"; // 0x10b3 PushS
	var_255_int = 1; // 0x10b4 PushI
	SetVariable(var_254_string, var_255_int); // 0x10b5 Func
	return 0; // 0x10b7 Return
}


func_2993(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0xbb2 PushV
	func_4236(var_93_bool); // 0xbb3 Call
	var_94_bool = var_93_bool == 0; // 0xbb5 Not
	if(var_94_bool == 0) goto Label_3000; // 0xbb6 JumpB
	return 0; // 0xbb7 Return
	
Label_3000:
	var_95_bool = var_92_string == var_2_object; // 0xbb8 Eq
	if(var_95_bool == 0) goto Label_3003; // 0xbb9 JumpB
	return 0; // 0xbba Return
	
Label_3003:
	var_96_string = ""; // 0xbbb PushV
	var_96_string = var_92_string; // 0xbbc Mov
	func_4097(var_96_string); // 0xbbd Call
	var_2_object = var_92_string; // 0xbbf TMov
	return 0; // 0xbc0 Return
}


func_180(var_2_object, var_45_string)
{
	var_46_bool = 0; // 0xb5 PushV
	func_4236(var_46_bool); // 0xb6 Call
	var_47_bool = var_46_bool == 0; // 0xb8 Not
	if(var_47_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_48_bool = var_45_string == var_2_object; // 0xbb Eq
	if(var_48_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_49_string = ""; // 0xbe PushV
	var_49_string = var_45_string; // 0xbf Mov
	func_4097(var_49_string); // 0xc0 Call
	var_2_object = var_45_string; // 0xc2 TMov
	return 0; // 0xc3 Return
}


func_4020(var_36_bool)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; // 0xfb4 PushV
	GetPosition(var_42_cvector); // 0xfb5 ObjFunc
	GetPosition(var_43_cvector); // 0xfb7 Func
	var_44_cvector = var_42_cvector - var_43_cvector; // 0xfb9 Sub2
	var_46_float = GetByIndex(var_44_cvector, 0); // 0xfba PushE
	var_47_float = GetByIndex(var_44_cvector, 2); // 0xfbb PushE
	Rotate(var_46_float, var_47_float, var_45_bool); // 0xfbc Func
	var_36_bool = var_45_bool; // 0xfbe Mov
	return 8; // 0xfbf Return
}


func_4535()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x11b7 PushV
	var_67_string = "d6q01"; // 0x11b8 PushS
	var_68_int = 2; // 0x11b9 PushI
	SetVariable(var_67_string, var_68_int); // 0x11ba Func
	var_69_object = Obj(); // 0x11bc PushV
	func_5038(var_69_object); // 0x11bd Call
	var_66_object = var_69_object; // 0x11be Mov
	var_76_string = "d6q01KaterinaGotoLaska"; // 0x11c0 PushS
	var_77_string = "pt_map_laska"; // 0x11c1 PushS
	var_78_int = 1; // 0x11c2 PushI
	var_79_int = 15398; // 0x11c3 PushI
	var_80_float = 0; // 0x11c4 PushV
	func_4203(var_80_float); // 0x11c5 Call
	AddMark(var_76_string, var_77_string, var_78_int, var_79_int, var_80_float); // 0x11c7 ObjFunc
	var_83_string = "d6q01KaterinagotoLaskaSelf"; // 0x11c9 PushS
	var_84_string = "pt_map_katerina"; // 0x11ca PushS
	var_85_int = 1; // 0x11cb PushI
	var_86_int = 15399; // 0x11cc PushI
	var_87_float = 0; // 0x11cd PushV
	func_4203(var_87_float); // 0x11ce Call
	AddMark(var_83_string, var_84_string, var_85_int, var_86_int, var_87_float); // 0x11d0 ObjFunc
	func_5201(); // 0x11d3 Call
	var_113_bool = 0; var_114_string = ""; var_115_string = ""; // 0x11d5 PushV
	var_114_string = "quest_d6_01"; // 0x11d6 MovS
	var_115_string = "saburov_klara_remove"; // 0x11d7 MovS
	func_4191(var_113_bool, var_114_string, var_115_string); // 0x11d8 Call
	return 2; // 0x11da Return
}


func_4280(var_202_object)
{
	var_204_object = Obj(); var_205_object = Obj(); var_206_object = Obj(); var_207_object = Obj(); // 0x10b8 PushV
	var_208_object = Obj(); // 0x10b9 PushV
	func_5038(var_208_object); // 0x10ba Call
	var_206_object = var_208_object; // 0x10bb Mov
	var_209_string = "d1q04KaterinaGotoMishka"; // 0x10bd PushS
	FindMark(var_207_object, var_209_string); // 0x10be ObjFunc
	var_210_object = var_207_object; // 0x10c0 Push
	if(var_210_object == 0) goto Label_4292; // 0x10c1 JumpB
	Remove(); // 0x10c2 ObjFunc
	
Label_4292:
	var_211_string = "d1q04Spi4kaGotoPowderHouse"; // 0x10c4 PushS
	FindMark(var_207_object, var_211_string); // 0x10c5 ObjFunc
	var_212_object = var_207_object; // 0x10c7 Push
	if(var_212_object == 0) goto Label_4299; // 0x10c8 JumpB
	Remove(); // 0x10c9 ObjFunc
	
Label_4299:
	var_213_string = "d1q04MishkaGotoSpi4ka"; // 0x10cb PushS
	FindMark(var_207_object, var_213_string); // 0x10cc ObjFunc
	var_214_object = var_207_object; // 0x10ce Push
	if(var_214_object == 0) goto Label_4306; // 0x10cf JumpB
	Remove(); // 0x10d0 ObjFunc
	
Label_4306:
	func_5137(); // 0x10d3 Call
	var_224_bool = 0; var_225_int = 0; // 0x10d5 PushV
	var_225_int = 44; // 0x10d6 MovI
	func_5021(var_224_bool, var_225_int); // 0x10d7 Call
	var_232_bool = 0; var_233_int = 0; // 0x10d9 PushV
	var_233_int = 45; // 0x10da MovI
	func_5021(var_232_bool, var_233_int); // 0x10db Call
	var_234_bool = 0; var_235_int = 0; // 0x10dd PushV
	var_235_int = 46; // 0x10de MovI
	func_5021(var_234_bool, var_235_int); // 0x10df Call
	var_236_bool = 0; var_237_string = ""; var_238_string = ""; // 0x10e1 PushV
	var_237_string = "quest_d1_04"; // 0x10e2 MovS
	var_238_string = "completed"; // 0x10e3 MovS
	func_4191(var_236_bool, var_237_string, var_238_string); // 0x10e4 Call
	var_242_bool = 0; var_243_object = Obj(); var_244_string = ""; // 0x10e6 PushV
	var_243_object = var_202_object; // 0x10e7 Mov
	var_244_string = "powder"; // 0x10e8 MovS
	func_4181(var_243_object, var_244_string); // 0x10e9 Call
	return 4; // 0x10eb Return
}


func_4796(var_158_bool)
{
	var_160_int = 0; var_161_string = ""; // 0x12bd PushV
	var_161_string = "d6q01"; // 0x12be MovS
	func_4132(var_160_int, var_161_string); // 0x12bf Call
	var_162_int = 1; // 0x12c1 PushI
	var_163_bool = var_160_int == var_162_int; // 0x12c2 Eq
	if(var_163_bool == 0) goto Label_4806; // 0x12c3 JumpB
	var_158_bool = 1; // 0x12c4 MovB
	return 0; // 0x12c5 Return
	
Label_4806:
	var_158_bool = 0; // 0x12c6 MovB
	return 0; // 0x12c7 Return
}


func_5055(var_88_object, var_89_string, var_90_float)
{
	var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_object = Obj(); var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_object = Obj(); var_99_bool = 0; // 0x13bf PushV
	GetMainOutdoorScene(var_98_object); // 0x13c0 Func
	var_100_bool = var_98_object == 0; // 0x13c2 NullEq
	if(var_100_bool == 0) goto Label_5064; // 0x13c3 JumpB
	var_101_string = "Can't find main outdoor scene"; // 0x13c4 PushS
	Trace(var_101_string); // 0x13c5 Func
	return 8; // 0x13c7 Return
	
Label_5064:
	GetLocator(var_89_string, var_99_bool, var_96_cvector, var_97_cvector); // 0x13c8 ObjFunc
	var_102_bool = var_99_bool == 0; // 0x13ca Not
	if(var_102_bool == 0) goto Label_5074; // 0x13cb JumpB
	var_103_string = "Warning: outdoor scene locator "; // 0x13cc PushS
	var_104_int = var_103_string + var_89_string; // 0x13cd Add
	var_105_string = " doesnt exist"; // 0x13ce PushS
	var_106_int = var_104_int + var_105_string; // 0x13cf Add
	Trace(var_106_int); // 0x13d0 Func
	
Label_5074:
	GetMap(var_88_object); // 0x13d2 ObjFunc
	var_107_bool = var_88_object == 0; // 0x13d4 NullEq
	if(var_107_bool == 0) goto Label_5082; // 0x13d5 JumpB
	var_108_string = "Can't find map"; // 0x13d6 PushS
	Trace(var_108_string); // 0x13d7 Func
	return 8; // 0x13d9 Return
	
Label_5082:
	var_109_float = GetByIndex(var_96_cvector, 0); // 0x13da PushE
	var_110_float = GetByIndex(var_96_cvector, 2); // 0x13db PushE
	SetMapParams(var_109_float, var_110_float, var_90_float); // 0x13dc ObjFunc
	return 8; // 0x13de Return
}


func_4032(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0xfc0 PushV
	IsLoaded(var_38_bool); // 0xfc1 Func
	var_36_bool = var_38_bool; // 0xfc3 Mov
	return 2; // 0xfc4 Return
}


func_4037(var_50_bool)
{
	var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; // 0xfc5 PushV
	GetPosition(var_61_cvector); // 0xfc6 ObjFunc
	GetEyesHeight(var_60_float); // 0xfc8 ObjFunc
	var_68_float = GetByIndex(var_61_cvector, 1); // 0xfca PushE
	var_68_float = var_68_float + var_60_float; // 0xfcb Add2
	SetByIndex(var_61_cvector, 1) = var_68_float; // 0xfcc PopE
	GetPosition(var_62_cvector); // 0xfcd Func
	GetEyesHeight(var_60_float); // 0xfcf Func
	var_69_float = GetByIndex(var_62_cvector, 1); // 0xfd1 PushE
	var_69_float = var_69_float + var_60_float; // 0xfd2 Add2
	SetByIndex(var_62_cvector, 1) = var_69_float; // 0xfd3 PopE
	var_63_cvector = var_61_cvector - var_62_cvector; // 0xfd4 Sub2
	var_70_float = GetByIndex(var_63_cvector, 1); // 0xfd5 PushE
	var_70_float = 0; // 0xfd6 MovI
	SetByIndex(var_63_cvector, 1) = var_70_float; // 0xfd7 PopE
	var_71_int = var_63_cvector | var_63_cvector; // 0xfd8 Or
	var_72_float = sqrt(var_71_int); // 0xfd9 Sqrt
	var_63_cvector = var_63_cvector / var_63_cvector; // 0xfda Div2
	var_64_cvector = -var_63_cvector; // 0xfdb Neg2
	var_73_int = 70; // 0xfdc PushI
	var_74_float = var_63_cvector * var_73_int; // 0xfdd Mult
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0xfde PushV
	var_77_cvector = CVector(0.0, 1.0, 0.0); // 0xfdf PushVec
	var_76_cvector = var_64_cvector ^ var_77_cvector; // 0xfe0 Xor2
	func_4122(var_75_cvector, var_76_cvector); // 0xfe1 Call
	var_83_int = 25; // 0xfe3 PushI
	var_84_float = var_75_cvector * var_83_int; // 0xfe4 Mult
	var_85_int = var_74_float + var_84_float; // 0xfe5 Add
	var_86_cvector = CVector(0.0, 10.0, 0.0); // 0xfe6 PushVec
	var_65_cvector = var_85_int - var_86_cvector; // 0xfe7 Sub2
	var_66_cvector = var_62_cvector + var_65_cvector; // 0xfe8 Add2
	IsOverrideActive(var_67_bool); // 0xfe9 Func
	var_87_bool = var_67_bool; // 0xfeb Push
	if(var_87_bool == 0) goto Label_4079; // 0xfec JumpB
	var_50_bool = 0; // 0xfed MovB
	return 16; // 0xfee Return
	
Label_4079:
	StopWorld(); // 0xfef Func
	CameraTransit(var_66_cvector, var_64_cvector); // 0xff1 Func
	var_88_float = GetByIndex(var_65_cvector, 0); // 0xff3 PushE
	var_89_float = GetByIndex(var_65_cvector, 2); // 0xff4 PushE
	Rotate(var_88_float, var_89_float); // 0xff5 Func
	CameraWaitForPlayFinish(); // 0xff7 Func
	ResumeWorld(); // 0xff9 Func
	var_50_bool = 1; // 0xffb MovB
	return 16; // 0xffc Return
}


func_4808(var_174_bool)
{
	var_176_int = 0; var_177_string = ""; // 0x12c9 PushV
	var_177_string = "d6q01KnowKillerIsKlara"; // 0x12ca MovS
	func_4132(var_176_int, var_177_string); // 0x12cb Call
	var_178_int = 1; // 0x12cd PushI
	var_179_bool = var_176_int == var_178_int; // 0x12ce Eq
	if(var_179_bool == 0) goto Label_4818; // 0x12cf JumpB
	var_174_bool = 1; // 0x12d0 MovB
	return 0; // 0x12d1 Return
	
Label_4818:
	var_174_bool = 0; // 0x12d2 MovB
	return 0; // 0x12d3 Return
}


func_2509(var_0_object, var_379_int, var_380_object)
{
	var_382_object = Obj(); var_383_bool = 0; var_384_int = 0; var_385_bool = 0; var_386_object = Obj(); var_387_bool = 0; var_388_int = 0; var_389_bool = 0; // 0x9cd PushV
	var_0_object = var_380_object; // 0x9ce TMov
	var_390_bool = 0; var_391_object = Obj(); // 0x9cf PushV
	var_391_object = var_380_object; // 0x9d0 Mov
	func_4037(var_391_object); // 0x9d1 Call
	var_392_bool = var_390_bool == 0; // 0x9d3 Not
	if(var_392_bool == 0) goto Label_2519; // 0x9d4 JumpB
	var_379_int = -2; // 0x9d5 MovI
	return 8; // 0x9d6 Return
	
Label_2519:
	CreateDialog(var_386_object); // 0x9d7 Func
	var_393_int = 0; // 0x9d9 PushV
	func_4232(var_393_int); // 0x9da Call
	SetNPCName(var_393_int); // 0x9dc ObjFunc
	var_394_string = ""; // 0x9de PushV
	func_4234(var_394_string); // 0x9df Call
	SetPhoto(var_394_string); // 0x9e1 ObjFunc
	var_395_int = 0; // 0x9e3 PushV
	func_5088(var_395_int); // 0x9e4 Call
	SetPlayerName(var_395_int); // 0x9e6 ObjFunc
	var_388_int = -1; // 0x9e8 MovI
	IsOverrideActive(var_387_bool); // 0x9e9 Func
	var_396_bool = var_387_bool; // 0x9eb Push
	if(var_396_bool == 0) goto Label_2543; // 0x9ec JumpB
	var_379_int = -2; // 0x9ed MovI
	return 8; // 0x9ee Return
	
Label_2543:
	DoDialog(var_386_object); // 0x9ef Func
	var_397_object = Obj(); var_398_object = Obj(); // 0x9f1 PushV
	var_397_object = var_380_object; // 0x9f2 Mov
	var_398_object = var_386_object; // 0x9f3 Mov
	TaskCall(9); // 0x9f4 TaskCall
	func_2572(var_399_object, var_400_object, var_401_string, var_402_bool, var_397_object, var_398_object); // 0x9f5 Call
	TaskReturn(); // 0x9f6 TaskReturn
	IsDialogEnd(var_389_bool); // 0x9f8 ObjFunc
	
Label_2554:
	var_427_bool = var_389_bool == 0; // 0x9fa Not
	if(var_427_bool == 0) goto Label_2561; // 0x9fb JumpB
	sync(); // 0x9fc Func
	IsDialogEnd(var_389_bool); // 0x9fe ObjFunc
	goto Label_2554; // 0xa00 Jump
	
Label_2561:
	var_428_object = Obj(); // 0xa01 PushV
	var_428_object = var_380_object; // 0xa02 Mov
	func_4093(); // 0xa03 Call
	StopDialog(var_386_object); // 0xa05 Func
	GetReturnValue(var_388_int); // 0xa07 ObjFunc
	var_379_int = var_388_int; // 0xa09 Mov
	return 8; // 0xa0a Return
}


func_3795(var_2_object, var_114_string)
{
	var_115_bool = 0; // 0xed4 PushV
	func_4236(var_115_bool); // 0xed5 Call
	var_116_bool = var_115_bool == 0; // 0xed7 Not
	if(var_116_bool == 0) goto Label_3802; // 0xed8 JumpB
	return 0; // 0xed9 Return
	
Label_3802:
	var_117_bool = var_114_string == var_2_object; // 0xeda Eq
	if(var_117_bool == 0) goto Label_3805; // 0xedb JumpB
	return 0; // 0xedc Return
	
Label_3805:
	var_118_string = ""; // 0xedd PushV
	var_118_string = var_114_string; // 0xede Mov
	func_4097(var_118_string); // 0xedf Call
	var_2_object = var_114_string; // 0xee1 TMov
	return 0; // 0xee2 Return
}


func_4820(var_150_bool)
{
	var_152_int = 0; var_153_string = ""; // 0x12d5 PushV
	var_153_string = "ood6Katerina1"; // 0x12d6 MovS
	func_4132(var_152_int, var_153_string); // 0x12d7 Call
	var_156_int = 0; // 0x12d9 PushI
	var_157_bool = var_152_int == var_156_int; // 0x12da Eq
	if(var_157_bool == 0) goto Label_4830; // 0x12db JumpB
	var_150_bool = 1; // 0x12dc MovB
	return 0; // 0x12dd Return
	
Label_4830:
	var_150_bool = 0; // 0x12de MovB
	return 0; // 0x12df Return
}


func_4572()
{
	var_129_string = "ood6Katerina3"; // 0x11dd PushS
	var_130_int = 1; // 0x11de PushI
	SetVariable(var_129_string, var_130_int); // 0x11df Func
	return 0; // 0x11e1 Return
}


func_4832(var_168_bool)
{
	var_170_int = 0; var_171_string = ""; // 0x12e1 PushV
	var_171_string = "ood6Katerina2"; // 0x12e2 MovS
	func_4132(var_170_int, var_171_string); // 0x12e3 Call
	var_172_int = 0; // 0x12e5 PushI
	var_173_bool = var_170_int == var_172_int; // 0x12e6 Eq
	if(var_173_bool == 0) goto Label_4842; // 0x12e7 JumpB
	var_168_bool = 1; // 0x12e8 MovB
	return 0; // 0x12e9 Return
	
Label_4842:
	var_168_bool = 0; // 0x12ea MovB
	return 0; // 0x12eb Return
}


func_5088(var_93_int)
{
	var_94_int = 0; var_95_int = 0; // 0x13e0 PushV
	var_96_string = "player"; // 0x13e1 PushS
	GetVariable(var_96_string, var_95_int); // 0x13e2 Func
	var_97_int = 0; // 0x13e4 PushI
	var_98_bool = var_95_int == var_97_int; // 0x13e5 Eq
	if(var_98_bool == 0) goto Label_5098; // 0x13e6 JumpB
	var_93_int = 200001; // 0x13e7 MovI
	return 2; // 0x13e8 Return
	
Label_5098:
	var_99_int = 1; // 0x13ea PushI
	var_100_bool = var_95_int == var_99_int; // 0x13eb Eq
	if(var_100_bool == 0) goto Label_5103; // 0x13ec JumpB
	var_93_int = 200002; // 0x13ed MovI
	return 2; // 0x13ee Return
	
Label_5103:
	var_93_int = 200003; // 0x13ef MovI
	return 2; // 0x13f0 Return
}


func_3552(var_2_object, var_47_string)
{
	var_48_bool = 0; // 0xde1 PushV
	func_4236(var_48_bool); // 0xde2 Call
	var_49_bool = var_48_bool == 0; // 0xde4 Not
	if(var_49_bool == 0) goto Label_3559; // 0xde5 JumpB
	return 0; // 0xde6 Return
	
Label_3559:
	var_50_bool = var_47_string == var_2_object; // 0xde7 Eq
	if(var_50_bool == 0) goto Label_3562; // 0xde8 JumpB
	return 0; // 0xde9 Return
	
Label_3562:
	var_51_string = ""; // 0xdea PushV
	var_51_string = var_47_string; // 0xdeb Mov
	func_4097(var_51_string); // 0xdec Call
	var_2_object = var_47_string; // 0xdee TMov
	return 0; // 0xdef Return
}


func_4578()
{
	var_744_string = "KnowMishka"; // 0x11e3 PushS
	var_745_int = 1; // 0x11e4 PushI
	SetVariable(var_744_string, var_745_int); // 0x11e5 Func
	return 0; // 0x11e7 Return
}


func_4584()
{
	var_90_string = "ood3Katerina1"; // 0x11e9 PushS
	var_91_int = 1; // 0x11ea PushI
	SetVariable(var_90_string, var_91_int); // 0x11eb Func
	return 0; // 0x11ed Return
}


func_4844(var_185_bool)
{
	var_187_int = 0; var_188_string = ""; // 0x12ed PushV
	var_188_string = "d6q01"; // 0x12ee MovS
	func_4132(var_187_int, var_188_string); // 0x12ef Call
	var_189_int = 4; // 0x12f1 PushI
	var_190_bool = var_187_int == var_189_int; // 0x12f2 Eq
	if(var_190_bool == 0) goto Label_4854; // 0x12f3 JumpB
	var_185_bool = 1; // 0x12f4 MovB
	return 0; // 0x12f5 Return
	
Label_4854:
	var_185_bool = 0; // 0x12f6 MovB
	return 0; // 0x12f7 Return
}


func_4334()
{
	var_62_string = "playsound"; // 0x10ef PushS
	var_63_string = "giveitem"; // 0x10f0 PushS
	TriggerWorld(var_62_string, var_63_string); // 0x10f1 Func
	return 0; // 0x10f3 Return
}


func_4590(var_41_object)
{
	var_43_string = "drapery is given"; // 0x11ef PushS
	Trace(var_43_string); // 0x11f0 Func
	var_44_object = Obj(); var_45_string = ""; var_46_int = 0; // 0x11f2 PushV
	var_44_object = var_41_object; // 0x11f3 Mov
	var_45_string = "drapery"; // 0x11f4 MovS
	var_46_int = 1; // 0x11f5 MovI
	func_4161(var_44_object, var_45_string, var_46_int); // 0x11f6 Call
	return 0; // 0x11f8 Return
}


func_5105()
{
	var_49_object = Obj(); var_50_object = Obj(); // 0x13f1 PushV
	var_51_string = "Adding diary entry"; // 0x13f2 PushS
	Trace(var_51_string); // 0x13f3 Func
	var_52_int = 32; // 0x13f5 PushI
	var_53_int = 1; // 0x13f6 PushI
	var_54_int = 12114; // 0x13f7 PushI
	CreateDiaryEntry(var_50_object, var_52_int, var_53_int, var_54_int); // 0x13f8 Func
	var_55_bool = 0; var_56_object = Obj(); var_57_int = 0; // 0x13fa PushV
	var_56_object = var_50_object; // 0x13fb Mov
	var_57_int = 2; // 0x13fc MovI
	func_4992(var_55_bool, var_56_object, var_57_int); // 0x13fd Call
	return 2; // 0x13ff Return
}


func_4340()
{
	var_260_object = Obj(); var_261_object = Obj(); var_262_object = Obj(); var_263_object = Obj(); // 0x10f4 PushV
	var_264_object = Obj(); // 0x10f5 PushV
	func_5038(var_264_object); // 0x10f6 Call
	var_262_object = var_264_object; // 0x10f7 Mov
	var_265_string = "d1q04KaterinaGotoMishka"; // 0x10f9 PushS
	FindMark(var_263_object, var_265_string); // 0x10fa ObjFunc
	var_266_object = var_263_object; // 0x10fc Push
	if(var_266_object == 0) goto Label_4352; // 0x10fd JumpB
	Remove(); // 0x10fe ObjFunc
	
Label_4352:
	var_267_string = "d1q04MishkaGotoSpi4ka"; // 0x1100 PushS
	FindMark(var_263_object, var_267_string); // 0x1101 ObjFunc
	var_268_object = var_263_object; // 0x1103 Push
	if(var_268_object == 0) goto Label_4359; // 0x1104 JumpB
	Remove(); // 0x1105 ObjFunc
	
Label_4359:
	var_269_string = "d1q04Spi4kaGotoPowderHouse"; // 0x1107 PushS
	FindMark(var_263_object, var_269_string); // 0x1108 ObjFunc
	var_270_object = var_263_object; // 0x110a Push
	if(var_270_object == 0) goto Label_4366; // 0x110b JumpB
	Remove(); // 0x110c ObjFunc
	
Label_4366:
	func_5153(); // 0x110f Call
	var_280_bool = 0; var_281_int = 0; // 0x1111 PushV
	var_281_int = 44; // 0x1112 MovI
	func_5021(var_280_bool, var_281_int); // 0x1113 Call
	var_282_bool = 0; var_283_int = 0; // 0x1115 PushV
	var_283_int = 45; // 0x1116 MovI
	func_5021(var_282_bool, var_283_int); // 0x1117 Call
	var_284_bool = 0; var_285_int = 0; // 0x1119 PushV
	var_285_int = 46; // 0x111a MovI
	func_5021(var_284_bool, var_285_int); // 0x111b Call
	var_286_bool = 0; var_287_string = ""; var_288_string = ""; // 0x111d PushV
	var_287_string = "quest_d1_04"; // 0x111e MovS
	var_288_string = "failed"; // 0x111f MovS
	func_4191(var_286_bool, var_287_string, var_288_string); // 0x1120 Call
	return 4; // 0x1122 Return
}


func_4856(var_198_bool)
{
	var_200_int = 0; var_201_string = ""; // 0x12f9 PushV
	var_201_string = "d6q01"; // 0x12fa MovS
	func_4132(var_200_int, var_201_string); // 0x12fb Call
	var_202_int = 3; // 0x12fd PushI
	var_203_bool = var_200_int == var_202_int; // 0x12fe Eq
	if(var_203_bool == 0) goto Label_4866; // 0x12ff JumpB
	var_198_bool = 1; // 0x1300 MovB
	return 0; // 0x1301 Return
	
Label_4866:
	var_198_bool = 0; // 0x1302 MovB
	return 0; // 0x1303 Return
}


func_4601()
{
	var_43_string = "ood4Katerina1"; // 0x11fa PushS
	var_44_int = 1; // 0x11fb PushI
	SetVariable(var_43_string, var_44_int); // 0x11fc Func
	return 0; // 0x11fe Return
}


func_508(var_2_object, var_133_string)
{
	var_134_bool = 0; // 0x1fd PushV
	func_4236(var_134_bool); // 0x1fe Call
	var_135_bool = var_134_bool == 0; // 0x200 Not
	if(var_135_bool == 0) goto Label_515; // 0x201 JumpB
	return 0; // 0x202 Return
	
Label_515:
	var_136_bool = var_133_string == var_2_object; // 0x203 Eq
	if(var_136_bool == 0) goto Label_518; // 0x204 JumpB
	return 0; // 0x205 Return
	
Label_518:
	var_137_string = ""; // 0x206 PushV
	var_137_string = var_133_string; // 0x207 Mov
	func_4097(var_137_string); // 0x208 Call
	var_2_object = var_133_string; // 0x20a TMov
	return 0; // 0x20b Return
}


func_4093()
{
	CameraSwitchToNormal(); // 0xffe Func
	return 0; // 0x1000 Return
}


func_4607(var_344_bool)
{
	var_346_int = 0; var_347_string = ""; // 0x1200 PushV
	var_347_string = "ood1Katerina1"; // 0x1201 MovS
	func_4132(var_346_int, var_347_string); // 0x1202 Call
	var_350_int = 0; // 0x1204 PushI
	var_351_bool = var_346_int == var_350_int; // 0x1205 Eq
	if(var_351_bool == 0) goto Label_4617; // 0x1206 JumpB
	var_344_bool = 1; // 0x1207 MovB
	return 0; // 0x1208 Return
	
Label_4617:
	var_344_bool = 0; // 0x1209 MovB
	return 0; // 0x120a Return
}


