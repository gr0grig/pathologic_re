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
	func_5873(var_36_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool)
{
	var_36_bool = 0; var_37_object = Obj(); // 0x2a PushV
	var_37_object = var_35_bool; // 0x2b Mov
	func_4683(var_37_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xc5 PushI
	if(var_37_int == 0) goto Label_334; // 0xc6 JumpB
	func_4778(); // 0xc8 Call
	var_39_int = 362; // 0xca PushI
	var_40_bool = var_35_string == var_39_int; // 0xcb Eq
	if(var_40_bool == 0) goto Label_235; // 0xcc JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xcd PushV
	var_41_object = var_1_object; // 0xce MovT
	var_42_object = var_0_object; // 0xcf MovT
	func_5285(); // 0xd0 Call
	var_45_string = ""; // 0xd2 PushV
	var_45_string = "Neutral"; // 0xd3 MovS
	func_180(var_36_bool, var_45_string); // 0xd4 Call
	var_60_int = 309; // 0xd6 PushI
	SetMessage(var_60_int); // 0xd7 TObjFunc
	ClearReplies(); // 0xd9 TObjFunc
	var_61_int = 311; // 0xdb PushI
	var_62_int = 370; // 0xdc PushI
	var_63_int = 364; // 0xdd PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0xde TObjFunc
	var_64_int = 312; // 0xe0 PushI
	var_65_int = 366; // 0xe1 PushI
	var_66_int = 365; // 0xe2 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xe3 TObjFunc
	var_67_int = 310; // 0xe5 PushI
	var_68_int = 369; // 0xe6 PushI
	var_69_int = 363; // 0xe7 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_70_int = 369; // 0xeb PushI
	var_71_bool = var_35_string == var_70_int; // 0xec Eq
	if(var_71_bool == 0) goto Label_253; // 0xed JumpB
	var_72_string = ""; // 0xee PushV
	var_72_string = "Neutral"; // 0xef MovS
	func_180(var_36_bool, var_72_string); // 0xf0 Call
	var_73_int = 316; // 0xf2 PushI
	SetMessage(var_73_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_74_int = 6268; // 0xf7 PushI
	var_75_int = -1; // 0xf8 PushI
	var_76_int = 6938; // 0xf9 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0xfa TObjFunc
	return 0; // 0xfc Return
	
Label_253:
	var_77_int = 366; // 0xfd PushI
	var_78_bool = var_35_string == var_77_int; // 0xfe Eq
	if(var_78_bool == 0) goto Label_276; // 0xff JumpB
	var_79_string = ""; // 0x100 PushV
	var_79_string = "Neutral"; // 0x101 MovS
	func_180(var_36_bool, var_79_string); // 0x102 Call
	var_80_int = 313; // 0x104 PushI
	SetMessage(var_80_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_81_int = 314; // 0x109 PushI
	var_82_int = 370; // 0x10a PushI
	var_83_int = 367; // 0x10b PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x10c TObjFunc
	var_84_int = 315; // 0x10e PushI
	var_85_int = 370; // 0x10f PushI
	var_86_int = 368; // 0x110 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_87_int = 370; // 0x114 PushI
	var_88_bool = var_35_string == var_87_int; // 0x115 Eq
	if(var_88_bool == 0) goto Label_299; // 0x116 JumpB
	var_89_string = ""; // 0x117 PushV
	var_89_string = "Neutral"; // 0x118 MovS
	func_180(var_36_bool, var_89_string); // 0x119 Call
	var_90_int = 317; // 0x11b PushI
	SetMessage(var_90_int); // 0x11c TObjFunc
	ClearReplies(); // 0x11e TObjFunc
	var_91_int = 319; // 0x120 PushI
	var_92_int = 374; // 0x121 PushI
	var_93_int = 372; // 0x122 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x123 TObjFunc
	var_94_int = 318; // 0x125 PushI
	var_95_int = 374; // 0x126 PushI
	var_96_int = 371; // 0x127 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x128 TObjFunc
	return 0; // 0x12a Return
	
Label_299:
	var_97_int = 374; // 0x12b PushI
	var_98_bool = var_35_string == var_97_int; // 0x12c Eq
	if(var_98_bool == 0) goto Label_322; // 0x12d JumpB
	var_99_string = ""; // 0x12e PushV
	var_99_string = "Neutral"; // 0x12f MovS
	func_180(var_36_bool, var_99_string); // 0x130 Call
	var_100_int = 320; // 0x132 PushI
	SetMessage(var_100_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_101_int = 322; // 0x137 PushI
	var_102_int = -1; // 0x138 PushI
	var_103_int = 376; // 0x139 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x13a TObjFunc
	var_104_int = 323; // 0x13c PushI
	var_105_int = -1; // 0x13d PushI
	var_106_int = 377; // 0x13e PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x13f TObjFunc
	return 0; // 0x141 Return
	
Label_322:
	var_3_string = 1; // 0x142 TMovB
	var_107_bool = 0; // 0x143 PushV
	func_4871(var_107_bool); // 0x144 Call
	if(var_107_bool == 0) goto Label_330; // 0x146 JumpB
	lshStopAnimation(); // 0x147 Func
	goto Label_332; // 0x149 Jump
	
Label_332:
	return 0; // 0x14c Return
	
Label_330:
	StopAnimation(); // 0x14a Func
	
Label_334:
	return 0; // 0x14e Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x20e PushI
	if(var_37_int == 0) goto Label_1055; // 0x20f JumpB
	func_4778(); // 0x211 Call
	var_39_int = 3869; // 0x213 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x214 Eq
	if(var_40_bool == 0) goto Label_549; // 0x215 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x216 PushV
	var_41_object = var_1_object; // 0x217 MovT
	var_42_object = var_0_object; // 0x218 MovT
	func_5090(); // 0x219 Call
	var_45_object = Obj(); var_46_object = Obj(); // 0x21b PushV
	var_45_object = var_1_object; // 0x21c MovT
	var_46_object = var_0_object; // 0x21d MovT
	func_5137(); // 0x21e Call
	var_49_object = Obj(); var_50_object = Obj(); // 0x220 PushV
	var_49_object = var_1_object; // 0x221 MovT
	var_50_object = var_0_object; // 0x222 MovT
	func_5123(var_50_object); // 0x223 Call
	
Label_549:
	var_93_int = 3872; // 0x225 PushI
	var_94_bool = var_36_bool == var_93_int; // 0x226 Eq
	if(var_94_bool == 0) goto Label_567; // 0x227 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x228 PushV
	var_95_object = var_1_object; // 0x229 MovT
	var_96_object = var_0_object; // 0x22a MovT
	func_5090(); // 0x22b Call
	var_97_object = Obj(); var_98_object = Obj(); // 0x22d PushV
	var_97_object = var_1_object; // 0x22e MovT
	var_98_object = var_0_object; // 0x22f MovT
	func_5137(); // 0x230 Call
	var_99_object = Obj(); var_100_object = Obj(); // 0x232 PushV
	var_99_object = var_1_object; // 0x233 MovT
	var_100_object = var_0_object; // 0x234 MovT
	func_5123(var_100_object); // 0x235 Call
	
Label_567:
	var_101_int = 3870; // 0x237 PushI
	var_102_bool = var_36_bool == var_101_int; // 0x238 Eq
	if(var_102_bool == 0) goto Label_585; // 0x239 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x23a PushV
	var_103_object = var_1_object; // 0x23b MovT
	var_104_object = var_0_object; // 0x23c MovT
	func_5090(); // 0x23d Call
	var_105_object = Obj(); var_106_object = Obj(); // 0x23f PushV
	var_105_object = var_1_object; // 0x240 MovT
	var_106_object = var_0_object; // 0x241 MovT
	func_5123(var_106_object); // 0x242 Call
	var_107_object = Obj(); var_108_object = Obj(); // 0x244 PushV
	var_107_object = var_1_object; // 0x245 MovT
	var_108_object = var_0_object; // 0x246 MovT
	func_5137(); // 0x247 Call
	
Label_585:
	var_109_int = 3860; // 0x249 PushI
	var_110_bool = var_36_bool == var_109_int; // 0x24a Eq
	if(var_110_bool == 0) goto Label_603; // 0x24b JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x24c PushV
	var_111_object = var_1_object; // 0x24d MovT
	var_112_object = var_0_object; // 0x24e MovT
	func_5090(); // 0x24f Call
	var_113_object = Obj(); var_114_object = Obj(); // 0x251 PushV
	var_113_object = var_1_object; // 0x252 MovT
	var_114_object = var_0_object; // 0x253 MovT
	func_5137(); // 0x254 Call
	var_115_object = Obj(); var_116_object = Obj(); // 0x256 PushV
	var_115_object = var_1_object; // 0x257 MovT
	var_116_object = var_0_object; // 0x258 MovT
	func_5123(var_116_object); // 0x259 Call
	
Label_603:
	var_117_int = 3856; // 0x25b PushI
	var_118_bool = var_36_bool == var_117_int; // 0x25c Eq
	if(var_118_bool == 0) goto Label_611; // 0x25d JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x25e PushV
	var_119_object = var_1_object; // 0x25f MovT
	var_120_object = var_0_object; // 0x260 MovT
	func_5090(); // 0x261 Call
	
Label_611:
	var_121_int = 3857; // 0x263 PushI
	var_122_bool = var_36_bool == var_121_int; // 0x264 Eq
	if(var_122_bool == 0) goto Label_629; // 0x265 JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x266 PushV
	var_123_object = var_1_object; // 0x267 MovT
	var_124_object = var_0_object; // 0x268 MovT
	func_5090(); // 0x269 Call
	var_125_object = Obj(); var_126_object = Obj(); // 0x26b PushV
	var_125_object = var_1_object; // 0x26c MovT
	var_126_object = var_0_object; // 0x26d MovT
	func_5123(var_126_object); // 0x26e Call
	var_127_object = Obj(); var_128_object = Obj(); // 0x270 PushV
	var_127_object = var_1_object; // 0x271 MovT
	var_128_object = var_0_object; // 0x272 MovT
	func_5137(); // 0x273 Call
	
Label_629:
	var_129_int = 13923; // 0x275 PushI
	var_130_bool = var_36_bool == var_129_int; // 0x276 Eq
	if(var_130_bool == 0) goto Label_637; // 0x277 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x278 PushV
	var_131_object = var_1_object; // 0x279 MovT
	var_132_object = var_0_object; // 0x27a MovT
	func_5096(); // 0x27b Call
	
Label_637:
	var_135_int = 11938; // 0x27d PushI
	var_136_bool = var_36_bool == var_135_int; // 0x27e Eq
	if(var_136_bool == 0) goto Label_645; // 0x27f JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x280 PushV
	var_137_object = var_1_object; // 0x281 MovT
	var_138_object = var_0_object; // 0x282 MovT
	func_5143(); // 0x283 Call
	
Label_645:
	var_213_int = 11939; // 0x285 PushI
	var_214_bool = var_36_bool == var_213_int; // 0x286 Eq
	if(var_214_bool == 0) goto Label_653; // 0x287 JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x288 PushV
	var_215_object = var_1_object; // 0x289 MovT
	var_216_object = var_0_object; // 0x28a MovT
	func_5143(); // 0x28b Call
	
Label_653:
	var_217_int = 13922; // 0x28d PushI
	var_218_bool = var_35_string == var_217_int; // 0x28e Eq
	if(var_218_bool == 0) goto Label_729; // 0x28f JumpB
	var_219_string = ""; // 0x290 PushV
	var_219_string = "Neutral"; // 0x291 MovS
	func_509(var_36_bool, var_219_string); // 0x292 Call
	var_234_int = 12729; // 0x294 PushI
	SetMessage(var_234_int); // 0x295 TObjFunc
	ClearReplies(); // 0x297 TObjFunc
	var_235_bool = 0; // 0x299 PushV
	var_235_bool = 0; // 0x29a MovB
	var_236_bool = 0; var_237_object = Obj(); // 0x29b PushV
	var_237_object = var_1_object; // 0x29c MovT
	func_5519(var_237_object); // 0x29d Call
	if(var_236_bool == 0) goto Label_678; // 0x29f JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x2a0 PushV
	var_245_object = var_1_object; // 0x2a1 MovT
	func_5507(var_245_object); // 0x2a2 Call
	if(var_244_bool == 0) goto Label_678; // 0x2a4 JumpB
	var_235_bool = 1; // 0x2a5 MovB
	
Label_678:
	if(var_235_bool == 0) goto Label_684; // 0x2a6 JumpB
	var_250_int = 12731; // 0x2a7 PushI
	var_251_int = 3851; // 0x2a8 PushI
	var_252_int = 13924; // 0x2a9 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x2aa TObjFunc
	
Label_684:
	var_253_bool = 0; // 0x2ac PushV
	var_253_bool = 0; // 0x2ad MovB
	var_254_bool = 0; // 0x2ae PushV
	var_254_bool = 0; // 0x2af MovB
	var_255_bool = 0; // 0x2b0 PushV
	var_255_bool = 0; // 0x2b1 MovB
	var_256_bool = 0; var_257_object = Obj(); // 0x2b2 PushV
	var_257_object = var_1_object; // 0x2b3 MovT
	func_5531(var_257_object); // 0x2b4 Call
	if(var_256_bool == 0) goto Label_701; // 0x2b6 JumpB
	var_262_bool = 0; var_263_object = Obj(); // 0x2b7 PushV
	var_263_object = var_1_object; // 0x2b8 MovT
	func_5579(var_263_object); // 0x2b9 Call
	if(var_262_bool == 0) goto Label_701; // 0x2bb JumpB
	var_255_bool = 1; // 0x2bc MovB
	
Label_701:
	if(var_255_bool == 0) goto Label_709; // 0x2bd JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x2be PushV
	var_269_object = var_1_object; // 0x2bf MovT
	func_5591(var_269_object); // 0x2c0 Call
	var_274_bool = var_268_bool == 0; // 0x2c2 Not
	if(var_274_bool == 0) goto Label_709; // 0x2c3 JumpB
	var_254_bool = 1; // 0x2c4 MovB
	
Label_709:
	if(var_254_bool == 0) goto Label_717; // 0x2c5 JumpB
	var_275_bool = 0; var_276_object = Obj(); // 0x2c6 PushV
	var_276_object = var_1_object; // 0x2c7 MovT
	func_5603(var_276_object); // 0x2c8 Call
	var_281_bool = var_275_bool == 0; // 0x2ca Not
	if(var_281_bool == 0) goto Label_717; // 0x2cb JumpB
	var_253_bool = 1; // 0x2cc MovB
	
Label_717:
	if(var_253_bool == 0) goto Label_723; // 0x2cd JumpB
	var_282_int = 12730; // 0x2ce PushI
	var_283_int = 11927; // 0x2cf PushI
	var_284_int = 13923; // 0x2d0 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x2d1 TObjFunc
	
Label_723:
	var_285_int = 12732; // 0x2d3 PushI
	var_286_int = -1; // 0x2d4 PushI
	var_287_int = 13926; // 0x2d5 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x2d6 TObjFunc
	return 0; // 0x2d8 Return
	
Label_729:
	var_288_int = 11927; // 0x2d9 PushI
	var_289_bool = var_35_string == var_288_int; // 0x2da Eq
	if(var_289_bool == 0) goto Label_752; // 0x2db JumpB
	var_290_string = ""; // 0x2dc PushV
	var_290_string = "Neutral"; // 0x2dd MovS
	func_509(var_36_bool, var_290_string); // 0x2de Call
	var_291_int = 10791; // 0x2e0 PushI
	SetMessage(var_291_int); // 0x2e1 TObjFunc
	ClearReplies(); // 0x2e3 TObjFunc
	var_292_int = 10792; // 0x2e5 PushI
	var_293_int = 11929; // 0x2e6 PushI
	var_294_int = 11928; // 0x2e7 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x2e8 TObjFunc
	var_295_int = 10810; // 0x2ea PushI
	var_296_int = 11929; // 0x2eb PushI
	var_297_int = 11950; // 0x2ec PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x2ed TObjFunc
	return 0; // 0x2ef Return
	
Label_752:
	var_298_int = 11929; // 0x2f0 PushI
	var_299_bool = var_35_string == var_298_int; // 0x2f1 Eq
	if(var_299_bool == 0) goto Label_780; // 0x2f2 JumpB
	var_300_string = ""; // 0x2f3 PushV
	var_300_string = "Neutral"; // 0x2f4 MovS
	func_509(var_36_bool, var_300_string); // 0x2f5 Call
	var_301_int = 10793; // 0x2f7 PushI
	SetMessage(var_301_int); // 0x2f8 TObjFunc
	ClearReplies(); // 0x2fa TObjFunc
	var_302_int = 10794; // 0x2fc PushI
	var_303_int = 11931; // 0x2fd PushI
	var_304_int = 11930; // 0x2fe PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x2ff TObjFunc
	var_305_int = 10808; // 0x301 PushI
	var_306_int = 11931; // 0x302 PushI
	var_307_int = 11946; // 0x303 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x304 TObjFunc
	var_308_int = 10809; // 0x306 PushI
	var_309_int = 11931; // 0x307 PushI
	var_310_int = 11948; // 0x308 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x309 TObjFunc
	return 0; // 0x30b Return
	
Label_780:
	var_311_int = 11931; // 0x30c PushI
	var_312_bool = var_35_string == var_311_int; // 0x30d Eq
	if(var_312_bool == 0) goto Label_803; // 0x30e JumpB
	var_313_string = ""; // 0x30f PushV
	var_313_string = "Neutral"; // 0x310 MovS
	func_509(var_36_bool, var_313_string); // 0x311 Call
	var_314_int = 10795; // 0x313 PushI
	SetMessage(var_314_int); // 0x314 TObjFunc
	ClearReplies(); // 0x316 TObjFunc
	var_315_int = 10796; // 0x318 PushI
	var_316_int = 11933; // 0x319 PushI
	var_317_int = 11932; // 0x31a PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x31b TObjFunc
	var_318_int = 10807; // 0x31d PushI
	var_319_int = 11933; // 0x31e PushI
	var_320_int = 11945; // 0x31f PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x320 TObjFunc
	return 0; // 0x322 Return
	
Label_803:
	var_321_int = 11933; // 0x323 PushI
	var_322_bool = var_35_string == var_321_int; // 0x324 Eq
	if(var_322_bool == 0) goto Label_826; // 0x325 JumpB
	var_323_string = ""; // 0x326 PushV
	var_323_string = "Neutral"; // 0x327 MovS
	func_509(var_36_bool, var_323_string); // 0x328 Call
	var_324_int = 10797; // 0x32a PushI
	SetMessage(var_324_int); // 0x32b TObjFunc
	ClearReplies(); // 0x32d TObjFunc
	var_325_int = 10798; // 0x32f PushI
	var_326_int = 11935; // 0x330 PushI
	var_327_int = 11934; // 0x331 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x332 TObjFunc
	var_328_int = 10806; // 0x334 PushI
	var_329_int = 11937; // 0x335 PushI
	var_330_int = 11943; // 0x336 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x337 TObjFunc
	return 0; // 0x339 Return
	
Label_826:
	var_331_int = 11935; // 0x33a PushI
	var_332_bool = var_35_string == var_331_int; // 0x33b Eq
	if(var_332_bool == 0) goto Label_849; // 0x33c JumpB
	var_333_string = ""; // 0x33d PushV
	var_333_string = "Disappointment"; // 0x33e MovS
	func_509(var_36_bool, var_333_string); // 0x33f Call
	var_334_int = 10799; // 0x341 PushI
	SetMessage(var_334_int); // 0x342 TObjFunc
	ClearReplies(); // 0x344 TObjFunc
	var_335_int = 10800; // 0x346 PushI
	var_336_int = 11937; // 0x347 PushI
	var_337_int = 11936; // 0x348 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x349 TObjFunc
	var_338_int = 10805; // 0x34b PushI
	var_339_int = 11937; // 0x34c PushI
	var_340_int = 11941; // 0x34d PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x34e TObjFunc
	return 0; // 0x350 Return
	
Label_849:
	var_341_int = 11937; // 0x351 PushI
	var_342_bool = var_35_string == var_341_int; // 0x352 Eq
	if(var_342_bool == 0) goto Label_877; // 0x353 JumpB
	var_343_string = ""; // 0x354 PushV
	var_343_string = "Neutral"; // 0x355 MovS
	func_509(var_36_bool, var_343_string); // 0x356 Call
	var_344_int = 10801; // 0x358 PushI
	SetMessage(var_344_int); // 0x359 TObjFunc
	ClearReplies(); // 0x35b TObjFunc
	var_345_int = 10802; // 0x35d PushI
	var_346_int = -1; // 0x35e PushI
	var_347_int = 11938; // 0x35f PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x360 TObjFunc
	var_348_int = 10803; // 0x362 PushI
	var_349_int = -1; // 0x363 PushI
	var_350_int = 11939; // 0x364 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x365 TObjFunc
	var_351_int = 10804; // 0x367 PushI
	var_352_int = -1; // 0x368 PushI
	var_353_int = 11940; // 0x369 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x36a TObjFunc
	return 0; // 0x36c Return
	
Label_877:
	var_354_int = 3851; // 0x36d PushI
	var_355_bool = var_35_string == var_354_int; // 0x36e Eq
	if(var_355_bool == 0) goto Label_905; // 0x36f JumpB
	var_356_string = ""; // 0x370 PushV
	var_356_string = "Neutral"; // 0x371 MovS
	func_509(var_36_bool, var_356_string); // 0x372 Call
	var_357_int = 3562; // 0x374 PushI
	SetMessage(var_357_int); // 0x375 TObjFunc
	ClearReplies(); // 0x377 TObjFunc
	var_358_int = 3563; // 0x379 PushI
	var_359_int = 3858; // 0x37a PushI
	var_360_int = 3852; // 0x37b PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x37c TObjFunc
	var_361_int = 3564; // 0x37e PushI
	var_362_int = 3858; // 0x37f PushI
	var_363_int = 3853; // 0x380 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x381 TObjFunc
	var_364_int = 3565; // 0x383 PushI
	var_365_int = 3855; // 0x384 PushI
	var_366_int = 3854; // 0x385 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x386 TObjFunc
	return 0; // 0x388 Return
	
Label_905:
	var_367_int = 3855; // 0x389 PushI
	var_368_bool = var_35_string == var_367_int; // 0x38a Eq
	if(var_368_bool == 0) goto Label_928; // 0x38b JumpB
	var_369_string = ""; // 0x38c PushV
	var_369_string = "Neutral"; // 0x38d MovS
	func_509(var_36_bool, var_369_string); // 0x38e Call
	var_370_int = 3566; // 0x390 PushI
	SetMessage(var_370_int); // 0x391 TObjFunc
	ClearReplies(); // 0x393 TObjFunc
	var_371_int = 3567; // 0x395 PushI
	var_372_int = -1; // 0x396 PushI
	var_373_int = 3856; // 0x397 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x398 TObjFunc
	var_374_int = 3568; // 0x39a PushI
	var_375_int = -1; // 0x39b PushI
	var_376_int = 3857; // 0x39c PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x39d TObjFunc
	return 0; // 0x39f Return
	
Label_928:
	var_377_int = 3858; // 0x3a0 PushI
	var_378_bool = var_35_string == var_377_int; // 0x3a1 Eq
	if(var_378_bool == 0) goto Label_956; // 0x3a2 JumpB
	var_379_string = ""; // 0x3a3 PushV
	var_379_string = "Neutral"; // 0x3a4 MovS
	func_509(var_36_bool, var_379_string); // 0x3a5 Call
	var_380_int = 3569; // 0x3a7 PushI
	SetMessage(var_380_int); // 0x3a8 TObjFunc
	ClearReplies(); // 0x3aa TObjFunc
	var_381_int = 3571; // 0x3ac PushI
	var_382_int = 3862; // 0x3ad PushI
	var_383_int = 3861; // 0x3ae PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x3af TObjFunc
	var_384_int = 3582; // 0x3b1 PushI
	var_385_int = 3874; // 0x3b2 PushI
	var_386_int = 3873; // 0x3b3 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x3b4 TObjFunc
	var_387_int = 3570; // 0x3b6 PushI
	var_388_int = -1; // 0x3b7 PushI
	var_389_int = 3860; // 0x3b8 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x3b9 TObjFunc
	return 0; // 0x3bb Return
	
Label_956:
	var_390_int = 3874; // 0x3bc PushI
	var_391_bool = var_35_string == var_390_int; // 0x3bd Eq
	if(var_391_bool == 0) goto Label_974; // 0x3be JumpB
	var_392_string = ""; // 0x3bf PushV
	var_392_string = "Neutral"; // 0x3c0 MovS
	func_509(var_36_bool, var_392_string); // 0x3c1 Call
	var_393_int = 3583; // 0x3c3 PushI
	SetMessage(var_393_int); // 0x3c4 TObjFunc
	ClearReplies(); // 0x3c6 TObjFunc
	var_394_int = 3584; // 0x3c8 PushI
	var_395_int = 3867; // 0x3c9 PushI
	var_396_int = 3875; // 0x3ca PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x3cb TObjFunc
	return 0; // 0x3cd Return
	
Label_974:
	var_397_int = 3862; // 0x3ce PushI
	var_398_bool = var_35_string == var_397_int; // 0x3cf Eq
	if(var_398_bool == 0) goto Label_997; // 0x3d0 JumpB
	var_399_string = ""; // 0x3d1 PushV
	var_399_string = "Neutral"; // 0x3d2 MovS
	func_509(var_36_bool, var_399_string); // 0x3d3 Call
	var_400_int = 3572; // 0x3d5 PushI
	SetMessage(var_400_int); // 0x3d6 TObjFunc
	ClearReplies(); // 0x3d8 TObjFunc
	var_401_int = 3573; // 0x3da PushI
	var_402_int = 3864; // 0x3db PushI
	var_403_int = 3863; // 0x3dc PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x3dd TObjFunc
	var_404_int = 3576; // 0x3df PushI
	var_405_int = 3867; // 0x3e0 PushI
	var_406_int = 3866; // 0x3e1 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x3e2 TObjFunc
	return 0; // 0x3e4 Return
	
Label_997:
	var_407_int = 3864; // 0x3e5 PushI
	var_408_bool = var_35_string == var_407_int; // 0x3e6 Eq
	if(var_408_bool == 0) goto Label_1020; // 0x3e7 JumpB
	var_409_string = ""; // 0x3e8 PushV
	var_409_string = "Neutral"; // 0x3e9 MovS
	func_509(var_36_bool, var_409_string); // 0x3ea Call
	var_410_int = 3574; // 0x3ec PushI
	SetMessage(var_410_int); // 0x3ed TObjFunc
	ClearReplies(); // 0x3ef TObjFunc
	var_411_int = 3575; // 0x3f1 PushI
	var_412_int = 3867; // 0x3f2 PushI
	var_413_int = 3865; // 0x3f3 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x3f4 TObjFunc
	var_414_int = 3579; // 0x3f6 PushI
	var_415_int = -1; // 0x3f7 PushI
	var_416_int = 3870; // 0x3f8 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x3f9 TObjFunc
	return 0; // 0x3fb Return
	
Label_1020:
	var_417_int = 3867; // 0x3fc PushI
	var_418_bool = var_35_string == var_417_int; // 0x3fd Eq
	if(var_418_bool == 0) goto Label_1043; // 0x3fe JumpB
	var_419_string = ""; // 0x3ff PushV
	var_419_string = "Neutral"; // 0x400 MovS
	func_509(var_36_bool, var_419_string); // 0x401 Call
	var_420_int = 3577; // 0x403 PushI
	SetMessage(var_420_int); // 0x404 TObjFunc
	ClearReplies(); // 0x406 TObjFunc
	var_421_int = 3578; // 0x408 PushI
	var_422_int = -1; // 0x409 PushI
	var_423_int = 3869; // 0x40a PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x40b TObjFunc
	var_424_int = 3581; // 0x40d PushI
	var_425_int = -1; // 0x40e PushI
	var_426_int = 3872; // 0x40f PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x410 TObjFunc
	return 0; // 0x412 Return
	
Label_1043:
	var_3_string = 1; // 0x413 TMovB
	var_427_bool = 0; // 0x414 PushV
	func_4871(var_427_bool); // 0x415 Call
	if(var_427_bool == 0) goto Label_1051; // 0x417 JumpB
	lshStopAnimation(); // 0x418 Func
	goto Label_1053; // 0x41a Jump
	
Label_1053:
	return 0; // 0x41d Return
	
Label_1051:
	StopAnimation(); // 0x41b Func
	
Label_1055:
	return 0; // 0x41f Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0x52f PushI
	if(var_37_int == 0) goto Label_2391; // 0x530 JumpB
	func_4778(); // 0x532 Call
	var_39_int = 6645; // 0x534 PushI
	var_40_bool = var_36_bool == var_39_int; // 0x535 Eq
	if(var_40_bool == 0) goto Label_1340; // 0x536 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x537 PushV
	var_41_object = var_1_object; // 0x538 MovT
	var_42_object = var_0_object; // 0x539 MovT
	func_4873(); // 0x53a Call
	
Label_1340:
	var_45_int = 6653; // 0x53c PushI
	var_46_bool = var_36_bool == var_45_int; // 0x53d Eq
	if(var_46_bool == 0) goto Label_1353; // 0x53e JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x53f PushV
	var_47_object = var_1_object; // 0x540 MovT
	var_48_object = var_0_object; // 0x541 MovT
	func_4873(); // 0x542 Call
	var_49_object = Obj(); var_50_object = Obj(); // 0x544 PushV
	var_49_object = var_1_object; // 0x545 MovT
	var_50_object = var_0_object; // 0x546 MovT
	func_4891(); // 0x547 Call
	
Label_1353:
	var_72_int = 6312; // 0x549 PushI
	var_73_bool = var_36_bool == var_72_int; // 0x54a Eq
	if(var_73_bool == 0) goto Label_1361; // 0x54b JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0x54c PushV
	var_74_object = var_1_object; // 0x54d MovT
	var_75_object = var_0_object; // 0x54e MovT
	func_4879(); // 0x54f Call
	
Label_1361:
	var_78_int = 6313; // 0x551 PushI
	var_79_bool = var_36_bool == var_78_int; // 0x552 Eq
	if(var_79_bool == 0) goto Label_1369; // 0x553 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x554 PushV
	var_80_object = var_1_object; // 0x555 MovT
	var_81_object = var_0_object; // 0x556 MovT
	func_4879(); // 0x557 Call
	
Label_1369:
	var_82_int = 6314; // 0x559 PushI
	var_83_bool = var_36_bool == var_82_int; // 0x55a Eq
	if(var_83_bool == 0) goto Label_1377; // 0x55b JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x55c PushV
	var_84_object = var_1_object; // 0x55d MovT
	var_85_object = var_0_object; // 0x55e MovT
	func_4879(); // 0x55f Call
	
Label_1377:
	var_86_int = 6319; // 0x561 PushI
	var_87_bool = var_36_bool == var_86_int; // 0x562 Eq
	if(var_87_bool == 0) goto Label_1385; // 0x563 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x564 PushV
	var_88_object = var_1_object; // 0x565 MovT
	var_89_object = var_0_object; // 0x566 MovT
	func_4879(); // 0x567 Call
	
Label_1385:
	var_90_int = 6320; // 0x569 PushI
	var_91_bool = var_36_bool == var_90_int; // 0x56a Eq
	if(var_91_bool == 0) goto Label_1393; // 0x56b JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x56c PushV
	var_92_object = var_1_object; // 0x56d MovT
	var_93_object = var_0_object; // 0x56e MovT
	func_4879(); // 0x56f Call
	
Label_1393:
	var_94_int = 6321; // 0x571 PushI
	var_95_bool = var_36_bool == var_94_int; // 0x572 Eq
	if(var_95_bool == 0) goto Label_1401; // 0x573 JumpB
	var_96_object = Obj(); var_97_object = Obj(); // 0x574 PushV
	var_96_object = var_1_object; // 0x575 MovT
	var_97_object = var_0_object; // 0x576 MovT
	func_4879(); // 0x577 Call
	
Label_1401:
	var_98_int = 6327; // 0x579 PushI
	var_99_bool = var_36_bool == var_98_int; // 0x57a Eq
	if(var_99_bool == 0) goto Label_1409; // 0x57b JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x57c PushV
	var_100_object = var_1_object; // 0x57d MovT
	var_101_object = var_0_object; // 0x57e MovT
	func_4885(); // 0x57f Call
	
Label_1409:
	var_104_int = 6328; // 0x581 PushI
	var_105_bool = var_36_bool == var_104_int; // 0x582 Eq
	if(var_105_bool == 0) goto Label_1417; // 0x583 JumpB
	var_106_object = Obj(); var_107_object = Obj(); // 0x584 PushV
	var_106_object = var_1_object; // 0x585 MovT
	var_107_object = var_0_object; // 0x586 MovT
	func_4885(); // 0x587 Call
	
Label_1417:
	var_108_int = 6329; // 0x589 PushI
	var_109_bool = var_36_bool == var_108_int; // 0x58a Eq
	if(var_109_bool == 0) goto Label_1425; // 0x58b JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x58c PushV
	var_110_object = var_1_object; // 0x58d MovT
	var_111_object = var_0_object; // 0x58e MovT
	func_4885(); // 0x58f Call
	
Label_1425:
	var_112_int = 6332; // 0x591 PushI
	var_113_bool = var_36_bool == var_112_int; // 0x592 Eq
	if(var_113_bool == 0) goto Label_1433; // 0x593 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x594 PushV
	var_114_object = var_1_object; // 0x595 MovT
	var_115_object = var_0_object; // 0x596 MovT
	func_4885(); // 0x597 Call
	
Label_1433:
	var_116_int = 6333; // 0x599 PushI
	var_117_bool = var_36_bool == var_116_int; // 0x59a Eq
	if(var_117_bool == 0) goto Label_1441; // 0x59b JumpB
	var_118_object = Obj(); var_119_object = Obj(); // 0x59c PushV
	var_118_object = var_1_object; // 0x59d MovT
	var_119_object = var_0_object; // 0x59e MovT
	func_4885(); // 0x59f Call
	
Label_1441:
	var_120_int = 9456; // 0x5a1 PushI
	var_121_bool = var_36_bool == var_120_int; // 0x5a2 Eq
	if(var_121_bool == 0) goto Label_1449; // 0x5a3 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x5a4 PushV
	var_122_object = var_1_object; // 0x5a5 MovT
	var_123_object = var_0_object; // 0x5a6 MovT
	func_4918(); // 0x5a7 Call
	
Label_1449:
	var_126_int = 9453; // 0x5a9 PushI
	var_127_bool = var_36_bool == var_126_int; // 0x5aa Eq
	if(var_127_bool == 0) goto Label_1457; // 0x5ab JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0x5ac PushV
	var_128_object = var_1_object; // 0x5ad MovT
	var_129_object = var_0_object; // 0x5ae MovT
	func_4918(); // 0x5af Call
	
Label_1457:
	var_130_int = 9469; // 0x5b1 PushI
	var_131_bool = var_36_bool == var_130_int; // 0x5b2 Eq
	if(var_131_bool == 0) goto Label_1465; // 0x5b3 JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0x5b4 PushV
	var_132_object = var_1_object; // 0x5b5 MovT
	var_133_object = var_0_object; // 0x5b6 MovT
	func_4924(); // 0x5b7 Call
	
Label_1465:
	var_136_int = 9466; // 0x5b9 PushI
	var_137_bool = var_36_bool == var_136_int; // 0x5ba Eq
	if(var_137_bool == 0) goto Label_1473; // 0x5bb JumpB
	var_138_object = Obj(); var_139_object = Obj(); // 0x5bc PushV
	var_138_object = var_1_object; // 0x5bd MovT
	var_139_object = var_0_object; // 0x5be MovT
	func_4924(); // 0x5bf Call
	
Label_1473:
	var_140_int = 9474; // 0x5c1 PushI
	var_141_bool = var_36_bool == var_140_int; // 0x5c2 Eq
	if(var_141_bool == 0) goto Label_1481; // 0x5c3 JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x5c4 PushV
	var_142_object = var_1_object; // 0x5c5 MovT
	var_143_object = var_0_object; // 0x5c6 MovT
	func_4930(); // 0x5c7 Call
	
Label_1481:
	var_146_int = 6305; // 0x5c9 PushI
	var_147_bool = var_35_string == var_146_int; // 0x5ca Eq
	if(var_147_bool == 0) goto Label_1637; // 0x5cb JumpB
	var_148_bool = 0; // 0x5cc PushV
	var_148_bool = 0; // 0x5cd MovB
	var_149_bool = 0; var_150_object = Obj(); // 0x5ce PushV
	var_150_object = var_1_object; // 0x5cf MovT
	func_5291(var_150_object); // 0x5d0 Call
	if(var_149_bool == 0) goto Label_1497; // 0x5d2 JumpB
	var_157_bool = 0; var_158_object = Obj(); // 0x5d3 PushV
	var_158_object = var_1_object; // 0x5d4 MovT
	func_5339(var_158_object); // 0x5d5 Call
	if(var_157_bool == 0) goto Label_1497; // 0x5d7 JumpB
	var_148_bool = 1; // 0x5d8 MovB
	
Label_1497:
	if(var_148_bool == 0) goto Label_1518; // 0x5d9 JumpB
	var_163_string = ""; // 0x5da PushV
	var_163_string = "Neutral"; // 0x5db MovS
	func_1310(var_36_bool, var_163_string); // 0x5dc Call
	var_178_int = 5721; // 0x5de PushI
	SetMessage(var_178_int); // 0x5df TObjFunc
	ClearReplies(); // 0x5e1 TObjFunc
	var_179_int = 5722; // 0x5e3 PushI
	var_180_int = 6334; // 0x5e4 PushI
	var_181_int = 6306; // 0x5e5 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x5e6 TObjFunc
	var_182_int = 6003; // 0x5e8 PushI
	var_183_int = 6615; // 0x5e9 PushI
	var_184_int = 6614; // 0x5ea PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x5eb TObjFunc
	return 0; // 0x5ed Return
	
Label_1518:
	var_185_string = ""; // 0x5ee PushV
	var_185_string = "Neutral"; // 0x5ef MovS
	func_1310(var_36_bool, var_185_string); // 0x5f0 Call
	var_186_int = 8287; // 0x5f2 PushI
	SetMessage(var_186_int); // 0x5f3 TObjFunc
	ClearReplies(); // 0x5f5 TObjFunc
	var_187_bool = 0; // 0x5f7 PushV
	var_187_bool = 0; // 0x5f8 MovB
	var_188_bool = 0; var_189_object = Obj(); // 0x5f9 PushV
	var_189_object = var_1_object; // 0x5fa MovT
	func_5303(var_189_object); // 0x5fb Call
	if(var_188_bool == 0) goto Label_1540; // 0x5fd JumpB
	var_194_bool = 0; var_195_object = Obj(); // 0x5fe PushV
	var_195_object = var_1_object; // 0x5ff MovT
	func_5327(var_195_object); // 0x600 Call
	if(var_194_bool == 0) goto Label_1540; // 0x602 JumpB
	var_187_bool = 1; // 0x603 MovB
	
Label_1540:
	if(var_187_bool == 0) goto Label_1546; // 0x604 JumpB
	var_200_int = 8288; // 0x605 PushI
	var_201_int = 6307; // 0x606 PushI
	var_202_int = 9111; // 0x607 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x608 TObjFunc
	
Label_1546:
	var_203_bool = 0; var_204_object = Obj(); // 0x60a PushV
	var_204_object = var_1_object; // 0x60b MovT
	func_5315(var_204_object); // 0x60c Call
	if(var_203_bool == 0) goto Label_1556; // 0x60e JumpB
	var_209_int = 8291; // 0x60f PushI
	var_210_int = 6322; // 0x610 PushI
	var_211_int = 9114; // 0x611 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x612 TObjFunc
	
Label_1556:
	var_212_bool = 0; // 0x614 PushV
	var_212_bool = 0; // 0x615 MovB
	var_213_bool = 0; var_214_object = Obj(); // 0x616 PushV
	var_214_object = var_1_object; // 0x617 MovT
	func_5627(var_214_object); // 0x618 Call
	if(var_213_bool == 0) goto Label_1569; // 0x61a JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0x61b PushV
	var_220_object = var_1_object; // 0x61c MovT
	func_5351(var_220_object); // 0x61d Call
	if(var_219_bool == 0) goto Label_1569; // 0x61f JumpB
	var_212_bool = 1; // 0x620 MovB
	
Label_1569:
	if(var_212_bool == 0) goto Label_1575; // 0x621 JumpB
	var_225_int = 8299; // 0x622 PushI
	var_226_int = 9137; // 0x623 PushI
	var_227_int = 9122; // 0x624 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x625 TObjFunc
	
Label_1575:
	var_228_bool = 0; // 0x627 PushV
	var_228_bool = 1; // 0x628 MovB
	var_229_bool = 0; // 0x629 PushV
	var_229_bool = 0; // 0x62a MovB
	var_230_bool = 0; var_231_object = Obj(); // 0x62b PushV
	var_231_object = var_1_object; // 0x62c MovT
	func_5651(var_231_object); // 0x62d Call
	if(var_230_bool == 0) goto Label_1590; // 0x62f JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x630 PushV
	var_237_object = var_1_object; // 0x631 MovT
	func_5363(var_237_object); // 0x632 Call
	if(var_236_bool == 0) goto Label_1590; // 0x634 JumpB
	var_229_bool = 1; // 0x635 MovB
	
Label_1590:
	if(var_229_bool == 0) goto Label_1606; // 0x636 JumpB
	var_242_bool = 0; // 0x637 PushV
	var_242_bool = 0; // 0x638 MovB
	var_243_bool = 0; var_244_object = Obj(); // 0x639 PushV
	var_244_object = var_1_object; // 0x63a MovT
	func_5615(var_244_object); // 0x63b Call
	if(var_243_bool == 0) goto Label_1604; // 0x63d JumpB
	var_249_bool = 0; var_250_object = Obj(); // 0x63e PushV
	var_250_object = var_1_object; // 0x63f MovT
	func_5363(var_250_object); // 0x640 Call
	if(var_249_bool == 0) goto Label_1604; // 0x642 JumpB
	var_242_bool = 1; // 0x643 MovB
	
Label_1604:
	if(var_242_bool == 0) goto Label_1606; // 0x644 JumpB
	var_228_bool = 0; // 0x645 MovB
	
Label_1606:
	if(var_228_bool == 0) goto Label_1612; // 0x646 JumpB
	var_251_int = 8302; // 0x647 PushI
	var_252_int = 9457; // 0x648 PushI
	var_253_int = 9125; // 0x649 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x64a TObjFunc
	
Label_1612:
	var_254_bool = 0; // 0x64c PushV
	var_254_bool = 0; // 0x64d MovB
	var_255_bool = 0; var_256_object = Obj(); // 0x64e PushV
	var_256_object = var_1_object; // 0x64f MovT
	func_5639(var_256_object); // 0x650 Call
	if(var_255_bool == 0) goto Label_1625; // 0x652 JumpB
	var_261_bool = 0; var_262_object = Obj(); // 0x653 PushV
	var_262_object = var_1_object; // 0x654 MovT
	func_5375(var_262_object); // 0x655 Call
	if(var_261_bool == 0) goto Label_1625; // 0x657 JumpB
	var_254_bool = 1; // 0x658 MovB
	
Label_1625:
	if(var_254_bool == 0) goto Label_1631; // 0x659 JumpB
	var_267_int = 8310; // 0x65a PushI
	var_268_int = 9140; // 0x65b PushI
	var_269_int = 9133; // 0x65c PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x65d TObjFunc
	
Label_1631:
	var_270_int = 8723; // 0x65f PushI
	var_271_int = -1; // 0x660 PushI
	var_272_int = 9560; // 0x661 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x662 TObjFunc
	return 0; // 0x664 Return
	
Label_1637:
	var_273_int = 9140; // 0x665 PushI
	var_274_bool = var_35_string == var_273_int; // 0x666 Eq
	if(var_274_bool == 0) goto Label_1655; // 0x667 JumpB
	var_275_string = ""; // 0x668 PushV
	var_275_string = "Neutral"; // 0x669 MovS
	func_1310(var_36_bool, var_275_string); // 0x66a Call
	var_276_int = 8317; // 0x66c PushI
	SetMessage(var_276_int); // 0x66d TObjFunc
	ClearReplies(); // 0x66f TObjFunc
	var_277_int = 8623; // 0x671 PushI
	var_278_int = 9471; // 0x672 PushI
	var_279_int = 9470; // 0x673 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x674 TObjFunc
	return 0; // 0x676 Return
	
Label_1655:
	var_280_int = 9471; // 0x677 PushI
	var_281_bool = var_35_string == var_280_int; // 0x678 Eq
	if(var_281_bool == 0) goto Label_1673; // 0x679 JumpB
	var_282_string = ""; // 0x67a PushV
	var_282_string = "Neutral"; // 0x67b MovS
	func_1310(var_36_bool, var_282_string); // 0x67c Call
	var_283_int = 8624; // 0x67e PushI
	SetMessage(var_283_int); // 0x67f TObjFunc
	ClearReplies(); // 0x681 TObjFunc
	var_284_int = 8625; // 0x683 PushI
	var_285_int = 9473; // 0x684 PushI
	var_286_int = 9472; // 0x685 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x686 TObjFunc
	return 0; // 0x688 Return
	
Label_1673:
	var_287_int = 9473; // 0x689 PushI
	var_288_bool = var_35_string == var_287_int; // 0x68a Eq
	if(var_288_bool == 0) goto Label_1691; // 0x68b JumpB
	var_289_string = ""; // 0x68c PushV
	var_289_string = "Neutral"; // 0x68d MovS
	func_1310(var_36_bool, var_289_string); // 0x68e Call
	var_290_int = 8626; // 0x690 PushI
	SetMessage(var_290_int); // 0x691 TObjFunc
	ClearReplies(); // 0x693 TObjFunc
	var_291_int = 8627; // 0x695 PushI
	var_292_int = -1; // 0x696 PushI
	var_293_int = 9474; // 0x697 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x698 TObjFunc
	return 0; // 0x69a Return
	
Label_1691:
	var_294_int = 9457; // 0x69b PushI
	var_295_bool = var_35_string == var_294_int; // 0x69c Eq
	if(var_295_bool == 0) goto Label_1724; // 0x69d JumpB
	var_296_string = ""; // 0x69e PushV
	var_296_string = "Neutral"; // 0x69f MovS
	func_1310(var_36_bool, var_296_string); // 0x6a0 Call
	var_297_int = 8610; // 0x6a2 PushI
	SetMessage(var_297_int); // 0x6a3 TObjFunc
	ClearReplies(); // 0x6a5 TObjFunc
	var_298_bool = 0; var_299_object = Obj(); // 0x6a7 PushV
	var_299_object = var_1_object; // 0x6a8 MovT
	func_5615(var_299_object); // 0x6a9 Call
	if(var_298_bool == 0) goto Label_1713; // 0x6ab JumpB
	var_300_int = 8611; // 0x6ac PushI
	var_301_int = 9462; // 0x6ad PushI
	var_302_int = 9458; // 0x6ae PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x6af TObjFunc
	
Label_1713:
	var_303_bool = 0; var_304_object = Obj(); // 0x6b1 PushV
	var_304_object = var_1_object; // 0x6b2 MovT
	func_5651(var_304_object); // 0x6b3 Call
	if(var_303_bool == 0) goto Label_1723; // 0x6b5 JumpB
	var_305_int = 8612; // 0x6b6 PushI
	var_306_int = 9460; // 0x6b7 PushI
	var_307_int = 9459; // 0x6b8 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x6b9 TObjFunc
	
Label_1723:
	return 0; // 0x6bb Return
	
Label_1724:
	var_308_int = 9460; // 0x6bc PushI
	var_309_bool = var_35_string == var_308_int; // 0x6bd Eq
	if(var_309_bool == 0) goto Label_1742; // 0x6be JumpB
	var_310_string = ""; // 0x6bf PushV
	var_310_string = "Neutral"; // 0x6c0 MovS
	func_1310(var_36_bool, var_310_string); // 0x6c1 Call
	var_311_int = 8613; // 0x6c3 PushI
	SetMessage(var_311_int); // 0x6c4 TObjFunc
	ClearReplies(); // 0x6c6 TObjFunc
	var_312_int = 8614; // 0x6c8 PushI
	var_313_int = 9139; // 0x6c9 PushI
	var_314_int = 9461; // 0x6ca PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x6cb TObjFunc
	return 0; // 0x6cd Return
	
Label_1742:
	var_315_int = 9139; // 0x6ce PushI
	var_316_bool = var_35_string == var_315_int; // 0x6cf Eq
	if(var_316_bool == 0) goto Label_1760; // 0x6d0 JumpB
	var_317_string = ""; // 0x6d1 PushV
	var_317_string = "Neutral"; // 0x6d2 MovS
	func_1310(var_36_bool, var_317_string); // 0x6d3 Call
	var_318_int = 8316; // 0x6d5 PushI
	SetMessage(var_318_int); // 0x6d6 TObjFunc
	ClearReplies(); // 0x6d8 TObjFunc
	var_319_int = 8617; // 0x6da PushI
	var_320_int = 9465; // 0x6db PushI
	var_321_int = 9464; // 0x6dc PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x6dd TObjFunc
	return 0; // 0x6df Return
	
Label_1760:
	var_322_int = 9465; // 0x6e0 PushI
	var_323_bool = var_35_string == var_322_int; // 0x6e1 Eq
	if(var_323_bool == 0) goto Label_1778; // 0x6e2 JumpB
	var_324_string = ""; // 0x6e3 PushV
	var_324_string = "Neutral"; // 0x6e4 MovS
	func_1310(var_36_bool, var_324_string); // 0x6e5 Call
	var_325_int = 8618; // 0x6e7 PushI
	SetMessage(var_325_int); // 0x6e8 TObjFunc
	ClearReplies(); // 0x6ea TObjFunc
	var_326_int = 8619; // 0x6ec PushI
	var_327_int = -1; // 0x6ed PushI
	var_328_int = 9466; // 0x6ee PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x6ef TObjFunc
	return 0; // 0x6f1 Return
	
Label_1778:
	var_329_int = 9462; // 0x6f2 PushI
	var_330_bool = var_35_string == var_329_int; // 0x6f3 Eq
	if(var_330_bool == 0) goto Label_1796; // 0x6f4 JumpB
	var_331_string = ""; // 0x6f5 PushV
	var_331_string = "Neutral"; // 0x6f6 MovS
	func_1310(var_36_bool, var_331_string); // 0x6f7 Call
	var_332_int = 8615; // 0x6f9 PushI
	SetMessage(var_332_int); // 0x6fa TObjFunc
	ClearReplies(); // 0x6fc TObjFunc
	var_333_int = 8616; // 0x6fe PushI
	var_334_int = 9138; // 0x6ff PushI
	var_335_int = 9463; // 0x700 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x701 TObjFunc
	return 0; // 0x703 Return
	
Label_1796:
	var_336_int = 9138; // 0x704 PushI
	var_337_bool = var_35_string == var_336_int; // 0x705 Eq
	if(var_337_bool == 0) goto Label_1814; // 0x706 JumpB
	var_338_string = ""; // 0x707 PushV
	var_338_string = "Neutral"; // 0x708 MovS
	func_1310(var_36_bool, var_338_string); // 0x709 Call
	var_339_int = 8315; // 0x70b PushI
	SetMessage(var_339_int); // 0x70c TObjFunc
	ClearReplies(); // 0x70e TObjFunc
	var_340_int = 8620; // 0x710 PushI
	var_341_int = 9468; // 0x711 PushI
	var_342_int = 9467; // 0x712 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x713 TObjFunc
	return 0; // 0x715 Return
	
Label_1814:
	var_343_int = 9468; // 0x716 PushI
	var_344_bool = var_35_string == var_343_int; // 0x717 Eq
	if(var_344_bool == 0) goto Label_1832; // 0x718 JumpB
	var_345_string = ""; // 0x719 PushV
	var_345_string = "Neutral"; // 0x71a MovS
	func_1310(var_36_bool, var_345_string); // 0x71b Call
	var_346_int = 8621; // 0x71d PushI
	SetMessage(var_346_int); // 0x71e TObjFunc
	ClearReplies(); // 0x720 TObjFunc
	var_347_int = 8622; // 0x722 PushI
	var_348_int = -1; // 0x723 PushI
	var_349_int = 9469; // 0x724 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x725 TObjFunc
	return 0; // 0x727 Return
	
Label_1832:
	var_350_int = 9137; // 0x728 PushI
	var_351_bool = var_35_string == var_350_int; // 0x729 Eq
	if(var_351_bool == 0) goto Label_1850; // 0x72a JumpB
	var_352_string = ""; // 0x72b PushV
	var_352_string = "Neutral"; // 0x72c MovS
	func_1310(var_36_bool, var_352_string); // 0x72d Call
	var_353_int = 8314; // 0x72f PushI
	SetMessage(var_353_int); // 0x730 TObjFunc
	ClearReplies(); // 0x732 TObjFunc
	var_354_int = 8604; // 0x734 PushI
	var_355_int = 9452; // 0x735 PushI
	var_356_int = 9451; // 0x736 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x737 TObjFunc
	return 0; // 0x739 Return
	
Label_1850:
	var_357_int = 9452; // 0x73a PushI
	var_358_bool = var_35_string == var_357_int; // 0x73b Eq
	if(var_358_bool == 0) goto Label_1873; // 0x73c JumpB
	var_359_string = ""; // 0x73d PushV
	var_359_string = "Neutral"; // 0x73e MovS
	func_1310(var_36_bool, var_359_string); // 0x73f Call
	var_360_int = 8605; // 0x741 PushI
	SetMessage(var_360_int); // 0x742 TObjFunc
	ClearReplies(); // 0x744 TObjFunc
	var_361_int = 8607; // 0x746 PushI
	var_362_int = 9455; // 0x747 PushI
	var_363_int = 9454; // 0x748 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x749 TObjFunc
	var_364_int = 8606; // 0x74b PushI
	var_365_int = -1; // 0x74c PushI
	var_366_int = 9453; // 0x74d PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x74e TObjFunc
	return 0; // 0x750 Return
	
Label_1873:
	var_367_int = 9455; // 0x751 PushI
	var_368_bool = var_35_string == var_367_int; // 0x752 Eq
	if(var_368_bool == 0) goto Label_1891; // 0x753 JumpB
	var_369_string = ""; // 0x754 PushV
	var_369_string = "Neutral"; // 0x755 MovS
	func_1310(var_36_bool, var_369_string); // 0x756 Call
	var_370_int = 8608; // 0x758 PushI
	SetMessage(var_370_int); // 0x759 TObjFunc
	ClearReplies(); // 0x75b TObjFunc
	var_371_int = 8609; // 0x75d PushI
	var_372_int = -1; // 0x75e PushI
	var_373_int = 9456; // 0x75f PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x760 TObjFunc
	return 0; // 0x762 Return
	
Label_1891:
	var_374_int = 6322; // 0x763 PushI
	var_375_bool = var_35_string == var_374_int; // 0x764 Eq
	if(var_375_bool == 0) goto Label_1914; // 0x765 JumpB
	var_376_string = ""; // 0x766 PushV
	var_376_string = "Neutral"; // 0x767 MovS
	func_1310(var_36_bool, var_376_string); // 0x768 Call
	var_377_int = 5737; // 0x76a PushI
	SetMessage(var_377_int); // 0x76b TObjFunc
	ClearReplies(); // 0x76d TObjFunc
	var_378_int = 5738; // 0x76f PushI
	var_379_int = 6324; // 0x770 PushI
	var_380_int = 6323; // 0x771 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x772 TObjFunc
	var_381_int = 5745; // 0x774 PushI
	var_382_int = 6331; // 0x775 PushI
	var_383_int = 6330; // 0x776 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x777 TObjFunc
	return 0; // 0x779 Return
	
Label_1914:
	var_384_int = 6331; // 0x77a PushI
	var_385_bool = var_35_string == var_384_int; // 0x77b Eq
	if(var_385_bool == 0) goto Label_1937; // 0x77c JumpB
	var_386_string = ""; // 0x77d PushV
	var_386_string = "Neutral"; // 0x77e MovS
	func_1310(var_36_bool, var_386_string); // 0x77f Call
	var_387_int = 5746; // 0x781 PushI
	SetMessage(var_387_int); // 0x782 TObjFunc
	ClearReplies(); // 0x784 TObjFunc
	var_388_int = 5747; // 0x786 PushI
	var_389_int = -1; // 0x787 PushI
	var_390_int = 6332; // 0x788 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x789 TObjFunc
	var_391_int = 5748; // 0x78b PushI
	var_392_int = -1; // 0x78c PushI
	var_393_int = 6333; // 0x78d PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x78e TObjFunc
	return 0; // 0x790 Return
	
Label_1937:
	var_394_int = 6324; // 0x791 PushI
	var_395_bool = var_35_string == var_394_int; // 0x792 Eq
	if(var_395_bool == 0) goto Label_1960; // 0x793 JumpB
	var_396_string = ""; // 0x794 PushV
	var_396_string = "Neutral"; // 0x795 MovS
	func_1310(var_36_bool, var_396_string); // 0x796 Call
	var_397_int = 5739; // 0x798 PushI
	SetMessage(var_397_int); // 0x799 TObjFunc
	ClearReplies(); // 0x79b TObjFunc
	var_398_int = 5740; // 0x79d PushI
	var_399_int = 6326; // 0x79e PushI
	var_400_int = 6325; // 0x79f PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x7a0 TObjFunc
	var_401_int = 5744; // 0x7a2 PushI
	var_402_int = -1; // 0x7a3 PushI
	var_403_int = 6329; // 0x7a4 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x7a5 TObjFunc
	return 0; // 0x7a7 Return
	
Label_1960:
	var_404_int = 6326; // 0x7a8 PushI
	var_405_bool = var_35_string == var_404_int; // 0x7a9 Eq
	if(var_405_bool == 0) goto Label_1983; // 0x7aa JumpB
	var_406_string = ""; // 0x7ab PushV
	var_406_string = "Neutral"; // 0x7ac MovS
	func_1310(var_36_bool, var_406_string); // 0x7ad Call
	var_407_int = 5741; // 0x7af PushI
	SetMessage(var_407_int); // 0x7b0 TObjFunc
	ClearReplies(); // 0x7b2 TObjFunc
	var_408_int = 5742; // 0x7b4 PushI
	var_409_int = -1; // 0x7b5 PushI
	var_410_int = 6327; // 0x7b6 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x7b7 TObjFunc
	var_411_int = 5743; // 0x7b9 PushI
	var_412_int = -1; // 0x7ba PushI
	var_413_int = 6328; // 0x7bb PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x7bc TObjFunc
	return 0; // 0x7be Return
	
Label_1983:
	var_414_int = 6307; // 0x7bf PushI
	var_415_bool = var_35_string == var_414_int; // 0x7c0 Eq
	if(var_415_bool == 0) goto Label_2011; // 0x7c1 JumpB
	var_416_string = ""; // 0x7c2 PushV
	var_416_string = "Neutral"; // 0x7c3 MovS
	func_1310(var_36_bool, var_416_string); // 0x7c4 Call
	var_417_int = 5723; // 0x7c6 PushI
	SetMessage(var_417_int); // 0x7c7 TObjFunc
	ClearReplies(); // 0x7c9 TObjFunc
	var_418_int = 5724; // 0x7cb PushI
	var_419_int = 6309; // 0x7cc PushI
	var_420_int = 6308; // 0x7cd PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x7ce TObjFunc
	var_421_int = 5732; // 0x7d0 PushI
	var_422_int = 6318; // 0x7d1 PushI
	var_423_int = 6317; // 0x7d2 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x7d3 TObjFunc
	var_424_int = 5736; // 0x7d5 PushI
	var_425_int = -1; // 0x7d6 PushI
	var_426_int = 6321; // 0x7d7 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x7d8 TObjFunc
	return 0; // 0x7da Return
	
Label_2011:
	var_427_int = 6318; // 0x7db PushI
	var_428_bool = var_35_string == var_427_int; // 0x7dc Eq
	if(var_428_bool == 0) goto Label_2034; // 0x7dd JumpB
	var_429_string = ""; // 0x7de PushV
	var_429_string = "Neutral"; // 0x7df MovS
	func_1310(var_36_bool, var_429_string); // 0x7e0 Call
	var_430_int = 5733; // 0x7e2 PushI
	SetMessage(var_430_int); // 0x7e3 TObjFunc
	ClearReplies(); // 0x7e5 TObjFunc
	var_431_int = 5734; // 0x7e7 PushI
	var_432_int = -1; // 0x7e8 PushI
	var_433_int = 6319; // 0x7e9 PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x7ea TObjFunc
	var_434_int = 5735; // 0x7ec PushI
	var_435_int = -1; // 0x7ed PushI
	var_436_int = 6320; // 0x7ee PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x7ef TObjFunc
	return 0; // 0x7f1 Return
	
Label_2034:
	var_437_int = 6309; // 0x7f2 PushI
	var_438_bool = var_35_string == var_437_int; // 0x7f3 Eq
	if(var_438_bool == 0) goto Label_2062; // 0x7f4 JumpB
	var_439_string = ""; // 0x7f5 PushV
	var_439_string = "Neutral"; // 0x7f6 MovS
	func_1310(var_36_bool, var_439_string); // 0x7f7 Call
	var_440_int = 5725; // 0x7f9 PushI
	SetMessage(var_440_int); // 0x7fa TObjFunc
	ClearReplies(); // 0x7fc TObjFunc
	var_441_int = 5726; // 0x7fe PushI
	var_442_int = 6311; // 0x7ff PushI
	var_443_int = 6310; // 0x800 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x801 TObjFunc
	var_444_int = 5730; // 0x803 PushI
	var_445_int = -1; // 0x804 PushI
	var_446_int = 6314; // 0x805 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x806 TObjFunc
	var_447_int = 5731; // 0x808 PushI
	var_448_int = 6311; // 0x809 PushI
	var_449_int = 6315; // 0x80a PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x80b TObjFunc
	return 0; // 0x80d Return
	
Label_2062:
	var_450_int = 6311; // 0x80e PushI
	var_451_bool = var_35_string == var_450_int; // 0x80f Eq
	if(var_451_bool == 0) goto Label_2085; // 0x810 JumpB
	var_452_string = ""; // 0x811 PushV
	var_452_string = "Neutral"; // 0x812 MovS
	func_1310(var_36_bool, var_452_string); // 0x813 Call
	var_453_int = 5727; // 0x815 PushI
	SetMessage(var_453_int); // 0x816 TObjFunc
	ClearReplies(); // 0x818 TObjFunc
	var_454_int = 5728; // 0x81a PushI
	var_455_int = -1; // 0x81b PushI
	var_456_int = 6312; // 0x81c PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x81d TObjFunc
	var_457_int = 5729; // 0x81f PushI
	var_458_int = -1; // 0x820 PushI
	var_459_int = 6313; // 0x821 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x822 TObjFunc
	return 0; // 0x824 Return
	
Label_2085:
	var_460_int = 6615; // 0x825 PushI
	var_461_bool = var_35_string == var_460_int; // 0x826 Eq
	if(var_461_bool == 0) goto Label_2108; // 0x827 JumpB
	var_462_string = ""; // 0x828 PushV
	var_462_string = "Neutral"; // 0x829 MovS
	func_1310(var_36_bool, var_462_string); // 0x82a Call
	var_463_int = 6004; // 0x82c PushI
	SetMessage(var_463_int); // 0x82d TObjFunc
	ClearReplies(); // 0x82f TObjFunc
	var_464_int = 6005; // 0x831 PushI
	var_465_int = 6618; // 0x832 PushI
	var_466_int = 6616; // 0x833 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x834 TObjFunc
	var_467_int = 6006; // 0x836 PushI
	var_468_int = 6625; // 0x837 PushI
	var_469_int = 6617; // 0x838 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x839 TObjFunc
	return 0; // 0x83b Return
	
Label_2108:
	var_470_int = 6618; // 0x83c PushI
	var_471_bool = var_35_string == var_470_int; // 0x83d Eq
	if(var_471_bool == 0) goto Label_2131; // 0x83e JumpB
	var_472_string = ""; // 0x83f PushV
	var_472_string = "Neutral"; // 0x840 MovS
	func_1310(var_36_bool, var_472_string); // 0x841 Call
	var_473_int = 6007; // 0x843 PushI
	SetMessage(var_473_int); // 0x844 TObjFunc
	ClearReplies(); // 0x846 TObjFunc
	var_474_int = 6011; // 0x848 PushI
	var_475_int = 6625; // 0x849 PushI
	var_476_int = 6622; // 0x84a PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x84b TObjFunc
	var_477_int = 6015; // 0x84d PushI
	var_478_int = 6625; // 0x84e PushI
	var_479_int = 6628; // 0x84f PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x850 TObjFunc
	return 0; // 0x852 Return
	
Label_2131:
	var_480_int = 6334; // 0x853 PushI
	var_481_bool = var_35_string == var_480_int; // 0x854 Eq
	if(var_481_bool == 0) goto Label_2154; // 0x855 JumpB
	var_482_string = ""; // 0x856 PushV
	var_482_string = "Neutral"; // 0x857 MovS
	func_1310(var_36_bool, var_482_string); // 0x858 Call
	var_483_int = 5749; // 0x85a PushI
	SetMessage(var_483_int); // 0x85b TObjFunc
	ClearReplies(); // 0x85d TObjFunc
	var_484_int = 6008; // 0x85f PushI
	var_485_int = 6621; // 0x860 PushI
	var_486_int = 6619; // 0x861 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0x862 TObjFunc
	var_487_int = 6009; // 0x864 PushI
	var_488_int = 6621; // 0x865 PushI
	var_489_int = 6620; // 0x866 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x867 TObjFunc
	return 0; // 0x869 Return
	
Label_2154:
	var_490_int = 6621; // 0x86a PushI
	var_491_bool = var_35_string == var_490_int; // 0x86b Eq
	if(var_491_bool == 0) goto Label_2177; // 0x86c JumpB
	var_492_string = ""; // 0x86d PushV
	var_492_string = "Neutral"; // 0x86e MovS
	func_1310(var_36_bool, var_492_string); // 0x86f Call
	var_493_int = 6010; // 0x871 PushI
	SetMessage(var_493_int); // 0x872 TObjFunc
	ClearReplies(); // 0x874 TObjFunc
	var_494_int = 6016; // 0x876 PushI
	var_495_int = 6632; // 0x877 PushI
	var_496_int = 6631; // 0x878 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x879 TObjFunc
	var_497_int = 6013; // 0x87b PushI
	var_498_int = 6625; // 0x87c PushI
	var_499_int = 6624; // 0x87d PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x87e TObjFunc
	return 0; // 0x880 Return
	
Label_2177:
	var_500_int = 6625; // 0x881 PushI
	var_501_bool = var_35_string == var_500_int; // 0x882 Eq
	if(var_501_bool == 0) goto Label_2195; // 0x883 JumpB
	var_502_string = ""; // 0x884 PushV
	var_502_string = "Neutral"; // 0x885 MovS
	func_1310(var_36_bool, var_502_string); // 0x886 Call
	var_503_int = 6014; // 0x888 PushI
	SetMessage(var_503_int); // 0x889 TObjFunc
	ClearReplies(); // 0x88b TObjFunc
	var_504_int = 6018; // 0x88d PushI
	var_505_int = 6632; // 0x88e PushI
	var_506_int = 6633; // 0x88f PushI
	AddReply(var_504_int, var_505_int, var_506_int); // 0x890 TObjFunc
	return 0; // 0x892 Return
	
Label_2195:
	var_507_int = 6632; // 0x893 PushI
	var_508_bool = var_35_string == var_507_int; // 0x894 Eq
	if(var_508_bool == 0) goto Label_2223; // 0x895 JumpB
	var_509_string = ""; // 0x896 PushV
	var_509_string = "Neutral"; // 0x897 MovS
	func_1310(var_36_bool, var_509_string); // 0x898 Call
	var_510_int = 6017; // 0x89a PushI
	SetMessage(var_510_int); // 0x89b TObjFunc
	ClearReplies(); // 0x89d TObjFunc
	var_511_int = 6019; // 0x89f PushI
	var_512_int = 6636; // 0x8a0 PushI
	var_513_int = 6634; // 0x8a1 PushI
	AddReply(var_511_int, var_512_int, var_513_int); // 0x8a2 TObjFunc
	var_514_int = 6020; // 0x8a4 PushI
	var_515_int = 6637; // 0x8a5 PushI
	var_516_int = 6635; // 0x8a6 PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0x8a7 TObjFunc
	var_517_int = 6039; // 0x8a9 PushI
	var_518_int = 6661; // 0x8aa PushI
	var_519_int = 6660; // 0x8ab PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x8ac TObjFunc
	return 0; // 0x8ae Return
	
Label_2223:
	var_520_int = 6661; // 0x8af PushI
	var_521_bool = var_35_string == var_520_int; // 0x8b0 Eq
	if(var_521_bool == 0) goto Label_2241; // 0x8b1 JumpB
	var_522_string = ""; // 0x8b2 PushV
	var_522_string = "Neutral"; // 0x8b3 MovS
	func_1310(var_36_bool, var_522_string); // 0x8b4 Call
	var_523_int = 6040; // 0x8b6 PushI
	SetMessage(var_523_int); // 0x8b7 TObjFunc
	ClearReplies(); // 0x8b9 TObjFunc
	var_524_int = 6041; // 0x8bb PushI
	var_525_int = 6636; // 0x8bc PushI
	var_526_int = 6662; // 0x8bd PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0x8be TObjFunc
	return 0; // 0x8c0 Return
	
Label_2241:
	var_527_int = 6637; // 0x8c1 PushI
	var_528_bool = var_35_string == var_527_int; // 0x8c2 Eq
	if(var_528_bool == 0) goto Label_2269; // 0x8c3 JumpB
	var_529_string = ""; // 0x8c4 PushV
	var_529_string = "Neutral"; // 0x8c5 MovS
	func_1310(var_36_bool, var_529_string); // 0x8c6 Call
	var_530_int = 6022; // 0x8c8 PushI
	SetMessage(var_530_int); // 0x8c9 TObjFunc
	ClearReplies(); // 0x8cb TObjFunc
	var_531_int = 6023; // 0x8cd PushI
	var_532_int = 6641; // 0x8ce PushI
	var_533_int = 6638; // 0x8cf PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x8d0 TObjFunc
	var_534_int = 6027; // 0x8d2 PushI
	var_535_int = 6652; // 0x8d3 PushI
	var_536_int = 6642; // 0x8d4 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x8d5 TObjFunc
	var_537_int = 6029; // 0x8d7 PushI
	var_538_int = 6647; // 0x8d8 PushI
	var_539_int = 6646; // 0x8d9 PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x8da TObjFunc
	return 0; // 0x8dc Return
	
Label_2269:
	var_540_int = 6647; // 0x8dd PushI
	var_541_bool = var_35_string == var_540_int; // 0x8de Eq
	if(var_541_bool == 0) goto Label_2292; // 0x8df JumpB
	var_542_string = ""; // 0x8e0 PushV
	var_542_string = "Neutral"; // 0x8e1 MovS
	func_1310(var_36_bool, var_542_string); // 0x8e2 Call
	var_543_int = 6030; // 0x8e4 PushI
	SetMessage(var_543_int); // 0x8e5 TObjFunc
	ClearReplies(); // 0x8e7 TObjFunc
	var_544_int = 6031; // 0x8e9 PushI
	var_545_int = 6652; // 0x8ea PushI
	var_546_int = 6648; // 0x8eb PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x8ec TObjFunc
	var_547_int = 6032; // 0x8ee PushI
	var_548_int = 6650; // 0x8ef PushI
	var_549_int = 6649; // 0x8f0 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x8f1 TObjFunc
	return 0; // 0x8f3 Return
	
Label_2292:
	var_550_int = 6650; // 0x8f4 PushI
	var_551_bool = var_35_string == var_550_int; // 0x8f5 Eq
	if(var_551_bool == 0) goto Label_2315; // 0x8f6 JumpB
	var_552_string = ""; // 0x8f7 PushV
	var_552_string = "Neutral"; // 0x8f8 MovS
	func_1310(var_36_bool, var_552_string); // 0x8f9 Call
	var_553_int = 6033; // 0x8fb PushI
	SetMessage(var_553_int); // 0x8fc TObjFunc
	ClearReplies(); // 0x8fe TObjFunc
	var_554_int = 6034; // 0x900 PushI
	var_555_int = 6652; // 0x901 PushI
	var_556_int = 6651; // 0x902 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x903 TObjFunc
	var_557_int = 6037; // 0x905 PushI
	var_558_int = 6641; // 0x906 PushI
	var_559_int = 6655; // 0x907 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x908 TObjFunc
	return 0; // 0x90a Return
	
Label_2315:
	var_560_int = 6652; // 0x90b PushI
	var_561_bool = var_35_string == var_560_int; // 0x90c Eq
	if(var_561_bool == 0) goto Label_2338; // 0x90d JumpB
	var_562_string = ""; // 0x90e PushV
	var_562_string = "Neutral"; // 0x90f MovS
	func_1310(var_36_bool, var_562_string); // 0x910 Call
	var_563_int = 6035; // 0x912 PushI
	SetMessage(var_563_int); // 0x913 TObjFunc
	ClearReplies(); // 0x915 TObjFunc
	var_564_int = 6036; // 0x917 PushI
	var_565_int = -1; // 0x918 PushI
	var_566_int = 6653; // 0x919 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x91a TObjFunc
	var_567_int = 6038; // 0x91c PushI
	var_568_int = 6641; // 0x91d PushI
	var_569_int = 6656; // 0x91e PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0x91f TObjFunc
	return 0; // 0x921 Return
	
Label_2338:
	var_570_int = 6636; // 0x922 PushI
	var_571_bool = var_35_string == var_570_int; // 0x923 Eq
	if(var_571_bool == 0) goto Label_2361; // 0x924 JumpB
	var_572_string = ""; // 0x925 PushV
	var_572_string = "Neutral"; // 0x926 MovS
	func_1310(var_36_bool, var_572_string); // 0x927 Call
	var_573_int = 6021; // 0x929 PushI
	SetMessage(var_573_int); // 0x92a TObjFunc
	ClearReplies(); // 0x92c TObjFunc
	var_574_int = 6024; // 0x92e PushI
	var_575_int = 6641; // 0x92f PushI
	var_576_int = 6639; // 0x930 PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x931 TObjFunc
	var_577_int = 6025; // 0x933 PushI
	var_578_int = 6641; // 0x934 PushI
	var_579_int = 6640; // 0x935 PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x936 TObjFunc
	return 0; // 0x938 Return
	
Label_2361:
	var_580_int = 6641; // 0x939 PushI
	var_581_bool = var_35_string == var_580_int; // 0x93a Eq
	if(var_581_bool == 0) goto Label_2379; // 0x93b JumpB
	var_582_string = ""; // 0x93c PushV
	var_582_string = "Neutral"; // 0x93d MovS
	func_1310(var_36_bool, var_582_string); // 0x93e Call
	var_583_int = 6026; // 0x940 PushI
	SetMessage(var_583_int); // 0x941 TObjFunc
	ClearReplies(); // 0x943 TObjFunc
	var_584_int = 6028; // 0x945 PushI
	var_585_int = -1; // 0x946 PushI
	var_586_int = 6645; // 0x947 PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0x948 TObjFunc
	return 0; // 0x94a Return
	
Label_2379:
	var_3_string = 1; // 0x94b TMovB
	var_587_bool = 0; // 0x94c PushV
	func_4871(var_587_bool); // 0x94d Call
	if(var_587_bool == 0) goto Label_2387; // 0x94f JumpB
	lshStopAnimation(); // 0x950 Func
	goto Label_2389; // 0x952 Jump
	
Label_2389:
	return 0; // 0x955 Return
	
Label_2387:
	StopAnimation(); // 0x953 Func
	
Label_2391:
	return 0; // 0x957 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xa2a PushI
	if(var_37_int == 0) goto Label_3257; // 0xa2b JumpB
	func_4778(); // 0xa2d Call
	var_39_int = 9768; // 0xa2f PushI
	var_40_bool = var_36_bool == var_39_int; // 0xa30 Eq
	if(var_40_bool == 0) goto Label_2625; // 0xa31 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xa32 PushV
	var_41_object = var_1_object; // 0xa33 MovT
	var_42_object = var_0_object; // 0xa34 MovT
	func_4954(); // 0xa35 Call
	var_91_object = Obj(); var_92_object = Obj(); // 0xa37 PushV
	var_91_object = var_1_object; // 0xa38 MovT
	var_92_object = var_0_object; // 0xa39 MovT
	func_4942(); // 0xa3a Call
	var_95_object = Obj(); var_96_object = Obj(); // 0xa3c PushV
	var_95_object = var_1_object; // 0xa3d MovT
	var_96_object = var_0_object; // 0xa3e MovT
	func_5020(); // 0xa3f Call
	
Label_2625:
	var_121_int = 9769; // 0xa41 PushI
	var_122_bool = var_36_bool == var_121_int; // 0xa42 Eq
	if(var_122_bool == 0) goto Label_2633; // 0xa43 JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0xa44 PushV
	var_123_object = var_1_object; // 0xa45 MovT
	var_124_object = var_0_object; // 0xa46 MovT
	func_4942(); // 0xa47 Call
	
Label_2633:
	var_125_int = 9760; // 0xa49 PushI
	var_126_bool = var_36_bool == var_125_int; // 0xa4a Eq
	if(var_126_bool == 0) goto Label_2641; // 0xa4b JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0xa4c PushV
	var_127_object = var_1_object; // 0xa4d MovT
	var_128_object = var_0_object; // 0xa4e MovT
	func_4942(); // 0xa4f Call
	
Label_2641:
	var_129_int = 9762; // 0xa51 PushI
	var_130_bool = var_36_bool == var_129_int; // 0xa52 Eq
	if(var_130_bool == 0) goto Label_2649; // 0xa53 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0xa54 PushV
	var_131_object = var_1_object; // 0xa55 MovT
	var_132_object = var_0_object; // 0xa56 MovT
	func_4942(); // 0xa57 Call
	
Label_2649:
	var_133_int = 12327; // 0xa59 PushI
	var_134_bool = var_36_bool == var_133_int; // 0xa5a Eq
	if(var_134_bool == 0) goto Label_2667; // 0xa5b JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0xa5c PushV
	var_135_object = var_1_object; // 0xa5d MovT
	var_136_object = var_0_object; // 0xa5e MovT
	func_4954(); // 0xa5f Call
	var_137_object = Obj(); var_138_object = Obj(); // 0xa61 PushV
	var_137_object = var_1_object; // 0xa62 MovT
	var_138_object = var_0_object; // 0xa63 MovT
	func_4986(); // 0xa64 Call
	var_141_object = Obj(); var_142_object = Obj(); // 0xa66 PushV
	var_141_object = var_1_object; // 0xa67 MovT
	var_142_object = var_0_object; // 0xa68 MovT
	func_5020(); // 0xa69 Call
	
Label_2667:
	var_143_int = 9736; // 0xa6b PushI
	var_144_bool = var_36_bool == var_143_int; // 0xa6c Eq
	if(var_144_bool == 0) goto Label_2675; // 0xa6d JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0xa6e PushV
	var_145_object = var_1_object; // 0xa6f MovT
	var_146_object = var_0_object; // 0xa70 MovT
	func_4936(); // 0xa71 Call
	
Label_2675:
	var_149_int = 9737; // 0xa73 PushI
	var_150_bool = var_36_bool == var_149_int; // 0xa74 Eq
	if(var_150_bool == 0) goto Label_2683; // 0xa75 JumpB
	var_151_object = Obj(); var_152_object = Obj(); // 0xa76 PushV
	var_151_object = var_1_object; // 0xa77 MovT
	var_152_object = var_0_object; // 0xa78 MovT
	func_4936(); // 0xa79 Call
	
Label_2683:
	var_153_int = 9738; // 0xa7b PushI
	var_154_bool = var_36_bool == var_153_int; // 0xa7c Eq
	if(var_154_bool == 0) goto Label_2691; // 0xa7d JumpB
	var_155_object = Obj(); var_156_object = Obj(); // 0xa7e PushV
	var_155_object = var_1_object; // 0xa7f MovT
	var_156_object = var_0_object; // 0xa80 MovT
	func_4936(); // 0xa81 Call
	
Label_2691:
	var_157_int = 9745; // 0xa83 PushI
	var_158_bool = var_36_bool == var_157_int; // 0xa84 Eq
	if(var_158_bool == 0) goto Label_2699; // 0xa85 JumpB
	var_159_object = Obj(); var_160_object = Obj(); // 0xa86 PushV
	var_159_object = var_1_object; // 0xa87 MovT
	var_160_object = var_0_object; // 0xa88 MovT
	func_4936(); // 0xa89 Call
	
Label_2699:
	var_161_int = 9746; // 0xa8b PushI
	var_162_bool = var_36_bool == var_161_int; // 0xa8c Eq
	if(var_162_bool == 0) goto Label_2707; // 0xa8d JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0xa8e PushV
	var_163_object = var_1_object; // 0xa8f MovT
	var_164_object = var_0_object; // 0xa90 MovT
	func_4936(); // 0xa91 Call
	
Label_2707:
	var_165_int = 9788; // 0xa93 PushI
	var_166_bool = var_36_bool == var_165_int; // 0xa94 Eq
	if(var_166_bool == 0) goto Label_2720; // 0xa95 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0xa96 PushV
	var_167_object = var_1_object; // 0xa97 MovT
	var_168_object = var_0_object; // 0xa98 MovT
	func_4948(); // 0xa99 Call
	var_171_object = Obj(); var_172_object = Obj(); // 0xa9b PushV
	var_171_object = var_1_object; // 0xa9c MovT
	var_172_object = var_0_object; // 0xa9d MovT
	func_4992(); // 0xa9e Call
	
Label_2720:
	var_198_int = 9789; // 0xaa0 PushI
	var_199_bool = var_36_bool == var_198_int; // 0xaa1 Eq
	if(var_199_bool == 0) goto Label_2733; // 0xaa2 JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0xaa3 PushV
	var_200_object = var_1_object; // 0xaa4 MovT
	var_201_object = var_0_object; // 0xaa5 MovT
	func_4948(); // 0xaa6 Call
	var_202_object = Obj(); var_203_object = Obj(); // 0xaa8 PushV
	var_202_object = var_1_object; // 0xaa9 MovT
	var_203_object = var_0_object; // 0xaaa MovT
	func_4992(); // 0xaab Call
	
Label_2733:
	var_204_int = 9728; // 0xaad PushI
	var_205_bool = var_35_string == var_204_int; // 0xaae Eq
	if(var_205_bool == 0) goto Label_2828; // 0xaaf JumpB
	var_206_string = ""; // 0xab0 PushV
	var_206_string = "Neutral"; // 0xab1 MovS
	func_2585(var_36_bool, var_206_string); // 0xab2 Call
	var_221_int = 8869; // 0xab4 PushI
	SetMessage(var_221_int); // 0xab5 TObjFunc
	ClearReplies(); // 0xab7 TObjFunc
	var_222_bool = 0; // 0xab9 PushV
	var_222_bool = 0; // 0xaba MovB
	var_223_bool = 0; var_224_object = Obj(); // 0xabb PushV
	var_224_object = var_1_object; // 0xabc MovT
	func_5399(var_224_object); // 0xabd Call
	if(var_223_bool == 0) goto Label_2758; // 0xabf JumpB
	var_231_bool = 0; var_232_object = Obj(); // 0xac0 PushV
	var_232_object = var_1_object; // 0xac1 MovT
	func_5435(var_232_object); // 0xac2 Call
	if(var_231_bool == 0) goto Label_2758; // 0xac4 JumpB
	var_222_bool = 1; // 0xac5 MovB
	
Label_2758:
	if(var_222_bool == 0) goto Label_2764; // 0xac6 JumpB
	var_237_int = 8889; // 0xac7 PushI
	var_238_int = 9751; // 0xac8 PushI
	var_239_int = 9750; // 0xac9 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0xaca TObjFunc
	
Label_2764:
	var_240_bool = 0; // 0xacc PushV
	var_240_bool = 0; // 0xacd MovB
	var_241_bool = 0; // 0xace PushV
	var_241_bool = 0; // 0xacf MovB
	var_242_bool = 0; var_243_object = Obj(); // 0xad0 PushV
	var_243_object = var_1_object; // 0xad1 MovT
	func_5423(var_243_object); // 0xad2 Call
	if(var_242_bool == 0) goto Label_2780; // 0xad4 JumpB
	var_248_bool = 0; var_249_object = Obj(); // 0xad5 PushV
	var_249_object = var_1_object; // 0xad6 MovT
	func_5399(var_249_object); // 0xad7 Call
	var_250_bool = var_248_bool == 0; // 0xad9 Not
	if(var_250_bool == 0) goto Label_2780; // 0xada JumpB
	var_241_bool = 1; // 0xadb MovB
	
Label_2780:
	if(var_241_bool == 0) goto Label_2787; // 0xadc JumpB
	var_251_bool = 0; var_252_object = Obj(); // 0xadd PushV
	var_252_object = var_1_object; // 0xade MovT
	func_5435(var_252_object); // 0xadf Call
	if(var_251_bool == 0) goto Label_2787; // 0xae1 JumpB
	var_240_bool = 1; // 0xae2 MovB
	
Label_2787:
	if(var_240_bool == 0) goto Label_2793; // 0xae3 JumpB
	var_253_int = 11136; // 0xae4 PushI
	var_254_int = 12326; // 0xae5 PushI
	var_255_int = 12325; // 0xae6 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0xae7 TObjFunc
	
Label_2793:
	var_256_bool = 0; var_257_object = Obj(); // 0xae9 PushV
	var_257_object = var_1_object; // 0xaea MovT
	func_5387(var_257_object); // 0xaeb Call
	if(var_256_bool == 0) goto Label_2803; // 0xaed JumpB
	var_262_int = 8888; // 0xaee PushI
	var_263_int = 9729; // 0xaef PushI
	var_264_int = 9749; // 0xaf0 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0xaf1 TObjFunc
	
Label_2803:
	var_265_bool = 0; // 0xaf3 PushV
	var_265_bool = 0; // 0xaf4 MovB
	var_266_bool = 0; var_267_object = Obj(); // 0xaf5 PushV
	var_267_object = var_1_object; // 0xaf6 MovT
	func_5411(var_267_object); // 0xaf7 Call
	if(var_266_bool == 0) goto Label_2816; // 0xaf9 JumpB
	var_272_bool = 0; var_273_object = Obj(); // 0xafa PushV
	var_273_object = var_1_object; // 0xafb MovT
	func_5447(var_273_object); // 0xafc Call
	if(var_272_bool == 0) goto Label_2816; // 0xafe JumpB
	var_265_bool = 1; // 0xaff MovB
	
Label_2816:
	if(var_265_bool == 0) goto Label_2822; // 0xb00 JumpB
	var_278_int = 8908; // 0xb01 PushI
	var_279_int = 9772; // 0xb02 PushI
	var_280_int = 9771; // 0xb03 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0xb04 TObjFunc
	
Label_2822:
	var_281_int = 11134; // 0xb06 PushI
	var_282_int = -1; // 0xb07 PushI
	var_283_int = 12323; // 0xb08 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0xb09 TObjFunc
	return 0; // 0xb0b Return
	
Label_2828:
	var_284_int = 9772; // 0xb0c PushI
	var_285_bool = var_35_string == var_284_int; // 0xb0d Eq
	if(var_285_bool == 0) goto Label_2856; // 0xb0e JumpB
	var_286_string = ""; // 0xb0f PushV
	var_286_string = "Neutral"; // 0xb10 MovS
	func_2585(var_36_bool, var_286_string); // 0xb11 Call
	var_287_int = 8909; // 0xb13 PushI
	SetMessage(var_287_int); // 0xb14 TObjFunc
	ClearReplies(); // 0xb16 TObjFunc
	var_288_int = 8913; // 0xb18 PushI
	var_289_int = 9778; // 0xb19 PushI
	var_290_int = 9777; // 0xb1a PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0xb1b TObjFunc
	var_291_int = 8910; // 0xb1d PushI
	var_292_int = 9775; // 0xb1e PushI
	var_293_int = 9773; // 0xb1f PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0xb20 TObjFunc
	var_294_int = 8911; // 0xb22 PushI
	var_295_int = 9775; // 0xb23 PushI
	var_296_int = 9774; // 0xb24 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0xb25 TObjFunc
	return 0; // 0xb27 Return
	
Label_2856:
	var_297_int = 9775; // 0xb28 PushI
	var_298_bool = var_35_string == var_297_int; // 0xb29 Eq
	if(var_298_bool == 0) goto Label_2874; // 0xb2a JumpB
	var_299_string = ""; // 0xb2b PushV
	var_299_string = "Neutral"; // 0xb2c MovS
	func_2585(var_36_bool, var_299_string); // 0xb2d Call
	var_300_int = 8912; // 0xb2f PushI
	SetMessage(var_300_int); // 0xb30 TObjFunc
	ClearReplies(); // 0xb32 TObjFunc
	var_301_int = 8915; // 0xb34 PushI
	var_302_int = -1; // 0xb35 PushI
	var_303_int = 9779; // 0xb36 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0xb37 TObjFunc
	return 0; // 0xb39 Return
	
Label_2874:
	var_304_int = 9778; // 0xb3a PushI
	var_305_bool = var_35_string == var_304_int; // 0xb3b Eq
	if(var_305_bool == 0) goto Label_2897; // 0xb3c JumpB
	var_306_string = ""; // 0xb3d PushV
	var_306_string = "Neutral"; // 0xb3e MovS
	func_2585(var_36_bool, var_306_string); // 0xb3f Call
	var_307_int = 8914; // 0xb41 PushI
	SetMessage(var_307_int); // 0xb42 TObjFunc
	ClearReplies(); // 0xb44 TObjFunc
	var_308_int = 8916; // 0xb46 PushI
	var_309_int = 9781; // 0xb47 PushI
	var_310_int = 9780; // 0xb48 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0xb49 TObjFunc
	var_311_int = 8918; // 0xb4b PushI
	var_312_int = 9783; // 0xb4c PushI
	var_313_int = 9782; // 0xb4d PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0xb4e TObjFunc
	return 0; // 0xb50 Return
	
Label_2897:
	var_314_int = 9783; // 0xb51 PushI
	var_315_bool = var_35_string == var_314_int; // 0xb52 Eq
	if(var_315_bool == 0) goto Label_2915; // 0xb53 JumpB
	var_316_string = ""; // 0xb54 PushV
	var_316_string = "Neutral"; // 0xb55 MovS
	func_2585(var_36_bool, var_316_string); // 0xb56 Call
	var_317_int = 8919; // 0xb58 PushI
	SetMessage(var_317_int); // 0xb59 TObjFunc
	ClearReplies(); // 0xb5b TObjFunc
	var_318_int = 8920; // 0xb5d PushI
	var_319_int = 9786; // 0xb5e PushI
	var_320_int = 9784; // 0xb5f PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0xb60 TObjFunc
	return 0; // 0xb62 Return
	
Label_2915:
	var_321_int = 9781; // 0xb63 PushI
	var_322_bool = var_35_string == var_321_int; // 0xb64 Eq
	if(var_322_bool == 0) goto Label_2933; // 0xb65 JumpB
	var_323_string = ""; // 0xb66 PushV
	var_323_string = "Neutral"; // 0xb67 MovS
	func_2585(var_36_bool, var_323_string); // 0xb68 Call
	var_324_int = 8917; // 0xb6a PushI
	SetMessage(var_324_int); // 0xb6b TObjFunc
	ClearReplies(); // 0xb6d TObjFunc
	var_325_int = 8921; // 0xb6f PushI
	var_326_int = 9786; // 0xb70 PushI
	var_327_int = 9785; // 0xb71 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0xb72 TObjFunc
	return 0; // 0xb74 Return
	
Label_2933:
	var_328_int = 9786; // 0xb75 PushI
	var_329_bool = var_35_string == var_328_int; // 0xb76 Eq
	if(var_329_bool == 0) goto Label_2956; // 0xb77 JumpB
	var_330_string = ""; // 0xb78 PushV
	var_330_string = "Neutral"; // 0xb79 MovS
	func_2585(var_36_bool, var_330_string); // 0xb7a Call
	var_331_int = 8922; // 0xb7c PushI
	SetMessage(var_331_int); // 0xb7d TObjFunc
	ClearReplies(); // 0xb7f TObjFunc
	var_332_int = 8923; // 0xb81 PushI
	var_333_int = -1; // 0xb82 PushI
	var_334_int = 9788; // 0xb83 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0xb84 TObjFunc
	var_335_int = 8924; // 0xb86 PushI
	var_336_int = -1; // 0xb87 PushI
	var_337_int = 9789; // 0xb88 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0xb89 TObjFunc
	return 0; // 0xb8b Return
	
Label_2956:
	var_338_int = 9729; // 0xb8c PushI
	var_339_bool = var_35_string == var_338_int; // 0xb8d Eq
	if(var_339_bool == 0) goto Label_2979; // 0xb8e JumpB
	var_340_string = ""; // 0xb8f PushV
	var_340_string = "Neutral"; // 0xb90 MovS
	func_2585(var_36_bool, var_340_string); // 0xb91 Call
	var_341_int = 8870; // 0xb93 PushI
	SetMessage(var_341_int); // 0xb94 TObjFunc
	ClearReplies(); // 0xb96 TObjFunc
	var_342_int = 8871; // 0xb98 PushI
	var_343_int = 9731; // 0xb99 PushI
	var_344_int = 9730; // 0xb9a PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0xb9b TObjFunc
	var_345_int = 8887; // 0xb9d PushI
	var_346_int = 9731; // 0xb9e PushI
	var_347_int = 9747; // 0xb9f PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xba0 TObjFunc
	return 0; // 0xba2 Return
	
Label_2979:
	var_348_int = 9731; // 0xba3 PushI
	var_349_bool = var_35_string == var_348_int; // 0xba4 Eq
	if(var_349_bool == 0) goto Label_3002; // 0xba5 JumpB
	var_350_string = ""; // 0xba6 PushV
	var_350_string = "Neutral"; // 0xba7 MovS
	func_2585(var_36_bool, var_350_string); // 0xba8 Call
	var_351_int = 8872; // 0xbaa PushI
	SetMessage(var_351_int); // 0xbab TObjFunc
	ClearReplies(); // 0xbad TObjFunc
	var_352_int = 8873; // 0xbaf PushI
	var_353_int = 9733; // 0xbb0 PushI
	var_354_int = 9732; // 0xbb1 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0xbb2 TObjFunc
	var_355_int = 8880; // 0xbb4 PushI
	var_356_int = 9740; // 0xbb5 PushI
	var_357_int = 9739; // 0xbb6 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0xbb7 TObjFunc
	return 0; // 0xbb9 Return
	
Label_3002:
	var_358_int = 9740; // 0xbba PushI
	var_359_bool = var_35_string == var_358_int; // 0xbbb Eq
	if(var_359_bool == 0) goto Label_3025; // 0xbbc JumpB
	var_360_string = ""; // 0xbbd PushV
	var_360_string = "Neutral"; // 0xbbe MovS
	func_2585(var_36_bool, var_360_string); // 0xbbf Call
	var_361_int = 8881; // 0xbc1 PushI
	SetMessage(var_361_int); // 0xbc2 TObjFunc
	ClearReplies(); // 0xbc4 TObjFunc
	var_362_int = 8882; // 0xbc6 PushI
	var_363_int = 9733; // 0xbc7 PushI
	var_364_int = 9741; // 0xbc8 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0xbc9 TObjFunc
	var_365_int = 8883; // 0xbcb PushI
	var_366_int = 9744; // 0xbcc PushI
	var_367_int = 9743; // 0xbcd PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0xbce TObjFunc
	return 0; // 0xbd0 Return
	
Label_3025:
	var_368_int = 9744; // 0xbd1 PushI
	var_369_bool = var_35_string == var_368_int; // 0xbd2 Eq
	if(var_369_bool == 0) goto Label_3048; // 0xbd3 JumpB
	var_370_string = ""; // 0xbd4 PushV
	var_370_string = "Neutral"; // 0xbd5 MovS
	func_2585(var_36_bool, var_370_string); // 0xbd6 Call
	var_371_int = 8884; // 0xbd8 PushI
	SetMessage(var_371_int); // 0xbd9 TObjFunc
	ClearReplies(); // 0xbdb TObjFunc
	var_372_int = 8885; // 0xbdd PushI
	var_373_int = -1; // 0xbde PushI
	var_374_int = 9745; // 0xbdf PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xbe0 TObjFunc
	var_375_int = 8886; // 0xbe2 PushI
	var_376_int = -1; // 0xbe3 PushI
	var_377_int = 9746; // 0xbe4 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0xbe5 TObjFunc
	return 0; // 0xbe7 Return
	
Label_3048:
	var_378_int = 9733; // 0xbe8 PushI
	var_379_bool = var_35_string == var_378_int; // 0xbe9 Eq
	if(var_379_bool == 0) goto Label_3071; // 0xbea JumpB
	var_380_string = ""; // 0xbeb PushV
	var_380_string = "Neutral"; // 0xbec MovS
	func_2585(var_36_bool, var_380_string); // 0xbed Call
	var_381_int = 8874; // 0xbef PushI
	SetMessage(var_381_int); // 0xbf0 TObjFunc
	ClearReplies(); // 0xbf2 TObjFunc
	var_382_int = 8875; // 0xbf4 PushI
	var_383_int = 9735; // 0xbf5 PushI
	var_384_int = 9734; // 0xbf6 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0xbf7 TObjFunc
	var_385_int = 8879; // 0xbf9 PushI
	var_386_int = -1; // 0xbfa PushI
	var_387_int = 9738; // 0xbfb PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0xbfc TObjFunc
	return 0; // 0xbfe Return
	
Label_3071:
	var_388_int = 9735; // 0xbff PushI
	var_389_bool = var_35_string == var_388_int; // 0xc00 Eq
	if(var_389_bool == 0) goto Label_3094; // 0xc01 JumpB
	var_390_string = ""; // 0xc02 PushV
	var_390_string = "Neutral"; // 0xc03 MovS
	func_2585(var_36_bool, var_390_string); // 0xc04 Call
	var_391_int = 8876; // 0xc06 PushI
	SetMessage(var_391_int); // 0xc07 TObjFunc
	ClearReplies(); // 0xc09 TObjFunc
	var_392_int = 8877; // 0xc0b PushI
	var_393_int = -1; // 0xc0c PushI
	var_394_int = 9736; // 0xc0d PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0xc0e TObjFunc
	var_395_int = 8878; // 0xc10 PushI
	var_396_int = -1; // 0xc11 PushI
	var_397_int = 9737; // 0xc12 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xc13 TObjFunc
	return 0; // 0xc15 Return
	
Label_3094:
	var_398_int = 12326; // 0xc16 PushI
	var_399_bool = var_35_string == var_398_int; // 0xc17 Eq
	if(var_399_bool == 0) goto Label_3112; // 0xc18 JumpB
	var_400_string = ""; // 0xc19 PushV
	var_400_string = "Neutral"; // 0xc1a MovS
	func_2585(var_36_bool, var_400_string); // 0xc1b Call
	var_401_int = 11137; // 0xc1d PushI
	SetMessage(var_401_int); // 0xc1e TObjFunc
	ClearReplies(); // 0xc20 TObjFunc
	var_402_int = 11138; // 0xc22 PushI
	var_403_int = -1; // 0xc23 PushI
	var_404_int = 12327; // 0xc24 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xc25 TObjFunc
	return 0; // 0xc27 Return
	
Label_3112:
	var_405_int = 9751; // 0xc28 PushI
	var_406_bool = var_35_string == var_405_int; // 0xc29 Eq
	if(var_406_bool == 0) goto Label_3135; // 0xc2a JumpB
	var_407_string = ""; // 0xc2b PushV
	var_407_string = "Neutral"; // 0xc2c MovS
	func_2585(var_36_bool, var_407_string); // 0xc2d Call
	var_408_int = 8890; // 0xc2f PushI
	SetMessage(var_408_int); // 0xc30 TObjFunc
	ClearReplies(); // 0xc32 TObjFunc
	var_409_int = 8891; // 0xc34 PushI
	var_410_int = 9753; // 0xc35 PushI
	var_411_int = 9752; // 0xc36 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0xc37 TObjFunc
	var_412_int = 8893; // 0xc39 PushI
	var_413_int = 9759; // 0xc3a PushI
	var_414_int = 9754; // 0xc3b PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0xc3c TObjFunc
	return 0; // 0xc3e Return
	
Label_3135:
	var_415_int = 9759; // 0xc3f PushI
	var_416_bool = var_35_string == var_415_int; // 0xc40 Eq
	if(var_416_bool == 0) goto Label_3158; // 0xc41 JumpB
	var_417_string = ""; // 0xc42 PushV
	var_417_string = "Neutral"; // 0xc43 MovS
	func_2585(var_36_bool, var_417_string); // 0xc44 Call
	var_418_int = 8898; // 0xc46 PushI
	SetMessage(var_418_int); // 0xc47 TObjFunc
	ClearReplies(); // 0xc49 TObjFunc
	var_419_int = 8899; // 0xc4b PushI
	var_420_int = -1; // 0xc4c PushI
	var_421_int = 9760; // 0xc4d PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0xc4e TObjFunc
	var_422_int = 8900; // 0xc50 PushI
	var_423_int = -1; // 0xc51 PushI
	var_424_int = 9762; // 0xc52 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0xc53 TObjFunc
	return 0; // 0xc55 Return
	
Label_3158:
	var_425_int = 9753; // 0xc56 PushI
	var_426_bool = var_35_string == var_425_int; // 0xc57 Eq
	if(var_426_bool == 0) goto Label_3176; // 0xc58 JumpB
	var_427_string = ""; // 0xc59 PushV
	var_427_string = "Neutral"; // 0xc5a MovS
	func_2585(var_36_bool, var_427_string); // 0xc5b Call
	var_428_int = 8892; // 0xc5d PushI
	SetMessage(var_428_int); // 0xc5e TObjFunc
	ClearReplies(); // 0xc60 TObjFunc
	var_429_int = 8894; // 0xc62 PushI
	var_430_int = 9756; // 0xc63 PushI
	var_431_int = 9755; // 0xc64 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0xc65 TObjFunc
	return 0; // 0xc67 Return
	
Label_3176:
	var_432_int = 9756; // 0xc68 PushI
	var_433_bool = var_35_string == var_432_int; // 0xc69 Eq
	if(var_433_bool == 0) goto Label_3199; // 0xc6a JumpB
	var_434_string = ""; // 0xc6b PushV
	var_434_string = "Neutral"; // 0xc6c MovS
	func_2585(var_36_bool, var_434_string); // 0xc6d Call
	var_435_int = 8895; // 0xc6f PushI
	SetMessage(var_435_int); // 0xc70 TObjFunc
	ClearReplies(); // 0xc72 TObjFunc
	var_436_int = 8896; // 0xc74 PushI
	var_437_int = 9763; // 0xc75 PushI
	var_438_int = 9757; // 0xc76 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0xc77 TObjFunc
	var_439_int = 8897; // 0xc79 PushI
	var_440_int = 9759; // 0xc7a PushI
	var_441_int = 9758; // 0xc7b PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0xc7c TObjFunc
	return 0; // 0xc7e Return
	
Label_3199:
	var_442_int = 9763; // 0xc7f PushI
	var_443_bool = var_35_string == var_442_int; // 0xc80 Eq
	if(var_443_bool == 0) goto Label_3222; // 0xc81 JumpB
	var_444_string = ""; // 0xc82 PushV
	var_444_string = "Neutral"; // 0xc83 MovS
	func_2585(var_36_bool, var_444_string); // 0xc84 Call
	var_445_int = 8901; // 0xc86 PushI
	SetMessage(var_445_int); // 0xc87 TObjFunc
	ClearReplies(); // 0xc89 TObjFunc
	var_446_int = 8902; // 0xc8b PushI
	var_447_int = 9766; // 0xc8c PushI
	var_448_int = 9764; // 0xc8d PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0xc8e TObjFunc
	var_449_int = 8903; // 0xc90 PushI
	var_450_int = 9766; // 0xc91 PushI
	var_451_int = 9765; // 0xc92 PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0xc93 TObjFunc
	return 0; // 0xc95 Return
	
Label_3222:
	var_452_int = 9766; // 0xc96 PushI
	var_453_bool = var_35_string == var_452_int; // 0xc97 Eq
	if(var_453_bool == 0) goto Label_3245; // 0xc98 JumpB
	var_454_string = ""; // 0xc99 PushV
	var_454_string = "Neutral"; // 0xc9a MovS
	func_2585(var_36_bool, var_454_string); // 0xc9b Call
	var_455_int = 8904; // 0xc9d PushI
	SetMessage(var_455_int); // 0xc9e TObjFunc
	ClearReplies(); // 0xca0 TObjFunc
	var_456_int = 8905; // 0xca2 PushI
	var_457_int = -1; // 0xca3 PushI
	var_458_int = 9768; // 0xca4 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0xca5 TObjFunc
	var_459_int = 8906; // 0xca7 PushI
	var_460_int = -1; // 0xca8 PushI
	var_461_int = 9769; // 0xca9 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0xcaa TObjFunc
	return 0; // 0xcac Return
	
Label_3245:
	var_3_string = 1; // 0xcad TMovB
	var_462_bool = 0; // 0xcae PushV
	func_4871(var_462_bool); // 0xcaf Call
	if(var_462_bool == 0) goto Label_3253; // 0xcb1 JumpB
	lshStopAnimation(); // 0xcb2 Func
	goto Label_3255; // 0xcb4 Jump
	
Label_3255:
	return 0; // 0xcb7 Return
	
Label_3253:
	StopAnimation(); // 0xcb5 Func
	
Label_3257:
	return 0; // 0xcb9 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xd44 PushI
	if(var_37_int == 0) goto Label_3515; // 0xd45 JumpB
	func_4778(); // 0xd47 Call
	var_39_int = 10322; // 0xd49 PushI
	var_40_bool = var_35_string == var_39_int; // 0xd4a Eq
	if(var_40_bool == 0) goto Label_3424; // 0xd4b JumpB
	var_41_string = ""; // 0xd4c PushV
	var_41_string = "Neutral"; // 0xd4d MovS
	func_3379(var_36_bool, var_41_string); // 0xd4e Call
	var_56_int = 9394; // 0xd50 PushI
	SetMessage(var_56_int); // 0xd51 TObjFunc
	ClearReplies(); // 0xd53 TObjFunc
	var_57_int = 9395; // 0xd55 PushI
	var_58_int = 10324; // 0xd56 PushI
	var_59_int = 10323; // 0xd57 PushI
	AddReply(var_57_int, var_58_int, var_59_int); // 0xd58 TObjFunc
	var_60_int = 9407; // 0xd5a PushI
	var_61_int = 10328; // 0xd5b PushI
	var_62_int = 10335; // 0xd5c PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xd5d TObjFunc
	return 0; // 0xd5f Return
	
Label_3424:
	var_63_int = 10324; // 0xd60 PushI
	var_64_bool = var_35_string == var_63_int; // 0xd61 Eq
	if(var_64_bool == 0) goto Label_3452; // 0xd62 JumpB
	var_65_string = ""; // 0xd63 PushV
	var_65_string = "Neutral"; // 0xd64 MovS
	func_3379(var_36_bool, var_65_string); // 0xd65 Call
	var_66_int = 9396; // 0xd67 PushI
	SetMessage(var_66_int); // 0xd68 TObjFunc
	ClearReplies(); // 0xd6a TObjFunc
	var_67_int = 9397; // 0xd6c PushI
	var_68_int = 10326; // 0xd6d PushI
	var_69_int = 10325; // 0xd6e PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xd6f TObjFunc
	var_70_int = 9405; // 0xd71 PushI
	var_71_int = -1; // 0xd72 PushI
	var_72_int = 10333; // 0xd73 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xd74 TObjFunc
	var_73_int = 9406; // 0xd76 PushI
	var_74_int = -1; // 0xd77 PushI
	var_75_int = 10334; // 0xd78 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xd79 TObjFunc
	return 0; // 0xd7b Return
	
Label_3452:
	var_76_int = 10326; // 0xd7c PushI
	var_77_bool = var_35_string == var_76_int; // 0xd7d Eq
	if(var_77_bool == 0) goto Label_3480; // 0xd7e JumpB
	var_78_string = ""; // 0xd7f PushV
	var_78_string = "Neutral"; // 0xd80 MovS
	func_3379(var_36_bool, var_78_string); // 0xd81 Call
	var_79_int = 9398; // 0xd83 PushI
	SetMessage(var_79_int); // 0xd84 TObjFunc
	ClearReplies(); // 0xd86 TObjFunc
	var_80_int = 9399; // 0xd88 PushI
	var_81_int = 10328; // 0xd89 PushI
	var_82_int = 10327; // 0xd8a PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0xd8b TObjFunc
	var_83_int = 9403; // 0xd8d PushI
	var_84_int = -1; // 0xd8e PushI
	var_85_int = 10331; // 0xd8f PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xd90 TObjFunc
	var_86_int = 9404; // 0xd92 PushI
	var_87_int = -1; // 0xd93 PushI
	var_88_int = 10332; // 0xd94 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xd95 TObjFunc
	return 0; // 0xd97 Return
	
Label_3480:
	var_89_int = 10328; // 0xd98 PushI
	var_90_bool = var_35_string == var_89_int; // 0xd99 Eq
	if(var_90_bool == 0) goto Label_3503; // 0xd9a JumpB
	var_91_string = ""; // 0xd9b PushV
	var_91_string = "Neutral"; // 0xd9c MovS
	func_3379(var_36_bool, var_91_string); // 0xd9d Call
	var_92_int = 9400; // 0xd9f PushI
	SetMessage(var_92_int); // 0xda0 TObjFunc
	ClearReplies(); // 0xda2 TObjFunc
	var_93_int = 9401; // 0xda4 PushI
	var_94_int = -1; // 0xda5 PushI
	var_95_int = 10329; // 0xda6 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xda7 TObjFunc
	var_96_int = 9402; // 0xda9 PushI
	var_97_int = -1; // 0xdaa PushI
	var_98_int = 10330; // 0xdab PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xdac TObjFunc
	return 0; // 0xdae Return
	
Label_3503:
	var_3_string = 1; // 0xdaf TMovB
	var_99_bool = 0; // 0xdb0 PushV
	func_4871(var_99_bool); // 0xdb1 Call
	if(var_99_bool == 0) goto Label_3511; // 0xdb3 JumpB
	lshStopAnimation(); // 0xdb4 Func
	goto Label_3513; // 0xdb6 Jump
	
Label_3513:
	return 0; // 0xdb9 Return
	
Label_3511:
	StopAnimation(); // 0xdb7 Func
	
Label_3515:
	return 0; // 0xdbb Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool)
{
	var_37_int = 1; // 0xe67 PushI
	if(var_37_int == 0) goto Label_4024; // 0xe68 JumpB
	func_4778(); // 0xe6a Call
	var_39_int = 12266; // 0xe6c PushI
	var_40_bool = var_36_bool == var_39_int; // 0xe6d Eq
	if(var_40_bool == 0) goto Label_3710; // 0xe6e JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xe6f PushV
	var_41_object = var_1_object; // 0xe70 MovT
	var_42_object = var_0_object; // 0xe71 MovT
	func_5072(); // 0xe72 Call
	var_45_object = Obj(); var_46_object = Obj(); // 0xe74 PushV
	var_45_object = var_1_object; // 0xe75 MovT
	var_46_object = var_0_object; // 0xe76 MovT
	func_5052(); // 0xe77 Call
	var_65_object = Obj(); var_66_object = Obj(); // 0xe79 PushV
	var_65_object = var_1_object; // 0xe7a MovT
	var_66_object = var_0_object; // 0xe7b MovT
	func_5036(); // 0xe7c Call
	
Label_3710:
	var_91_int = 12267; // 0xe7e PushI
	var_92_bool = var_36_bool == var_91_int; // 0xe7f Eq
	if(var_92_bool == 0) goto Label_3728; // 0xe80 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0xe81 PushV
	var_93_object = var_1_object; // 0xe82 MovT
	var_94_object = var_0_object; // 0xe83 MovT
	func_5072(); // 0xe84 Call
	var_95_object = Obj(); var_96_object = Obj(); // 0xe86 PushV
	var_95_object = var_1_object; // 0xe87 MovT
	var_96_object = var_0_object; // 0xe88 MovT
	func_5052(); // 0xe89 Call
	var_97_object = Obj(); var_98_object = Obj(); // 0xe8b PushV
	var_97_object = var_1_object; // 0xe8c MovT
	var_98_object = var_0_object; // 0xe8d MovT
	func_5036(); // 0xe8e Call
	
Label_3728:
	var_99_int = 12281; // 0xe90 PushI
	var_100_bool = var_36_bool == var_99_int; // 0xe91 Eq
	if(var_100_bool == 0) goto Label_3741; // 0xe92 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0xe93 PushV
	var_101_object = var_1_object; // 0xe94 MovT
	var_102_object = var_0_object; // 0xe95 MovT
	func_5084(); // 0xe96 Call
	var_105_object = Obj(); var_106_object = Obj(); // 0xe98 PushV
	var_105_object = var_1_object; // 0xe99 MovT
	var_106_object = var_0_object; // 0xe9a MovT
	func_5078(); // 0xe9b Call
	
Label_3741:
	var_109_int = 12246; // 0xe9d PushI
	var_110_bool = var_35_string == var_109_int; // 0xe9e Eq
	if(var_110_bool == 0) goto Label_3797; // 0xe9f JumpB
	var_111_string = ""; // 0xea0 PushV
	var_111_string = "Neutral"; // 0xea1 MovS
	func_3670(var_36_bool, var_111_string); // 0xea2 Call
	var_126_int = 11065; // 0xea4 PushI
	SetMessage(var_126_int); // 0xea5 TObjFunc
	ClearReplies(); // 0xea7 TObjFunc
	var_127_bool = 0; // 0xea9 PushV
	var_127_bool = 0; // 0xeaa MovB
	var_128_bool = 0; var_129_object = Obj(); // 0xeab PushV
	var_129_object = var_1_object; // 0xeac MovT
	func_5471(var_129_object); // 0xead Call
	if(var_128_bool == 0) goto Label_3766; // 0xeaf JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0xeb0 PushV
	var_137_object = var_1_object; // 0xeb1 MovT
	func_5459(var_137_object); // 0xeb2 Call
	if(var_136_bool == 0) goto Label_3766; // 0xeb4 JumpB
	var_127_bool = 1; // 0xeb5 MovB
	
Label_3766:
	if(var_127_bool == 0) goto Label_3772; // 0xeb6 JumpB
	var_142_int = 11066; // 0xeb7 PushI
	var_143_int = 12248; // 0xeb8 PushI
	var_144_int = 12247; // 0xeb9 PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0xeba TObjFunc
	
Label_3772:
	var_145_bool = 0; // 0xebc PushV
	var_145_bool = 0; // 0xebd MovB
	var_146_bool = 0; var_147_object = Obj(); // 0xebe PushV
	var_147_object = var_1_object; // 0xebf MovT
	func_5495(var_147_object); // 0xec0 Call
	if(var_146_bool == 0) goto Label_3785; // 0xec2 JumpB
	var_152_bool = 0; var_153_object = Obj(); // 0xec3 PushV
	var_153_object = var_1_object; // 0xec4 MovT
	func_5483(var_153_object); // 0xec5 Call
	if(var_152_bool == 0) goto Label_3785; // 0xec7 JumpB
	var_145_bool = 1; // 0xec8 MovB
	
Label_3785:
	if(var_145_bool == 0) goto Label_3791; // 0xec9 JumpB
	var_158_int = 11079; // 0xeca PushI
	var_159_int = 12268; // 0xecb PushI
	var_160_int = 12263; // 0xecc PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0xecd TObjFunc
	
Label_3791:
	var_161_int = 11505; // 0xecf PushI
	var_162_int = -1; // 0xed0 PushI
	var_163_int = 12707; // 0xed1 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0xed2 TObjFunc
	return 0; // 0xed4 Return
	
Label_3797:
	var_164_int = 12268; // 0xed5 PushI
	var_165_bool = var_35_string == var_164_int; // 0xed6 Eq
	if(var_165_bool == 0) goto Label_3820; // 0xed7 JumpB
	var_166_string = ""; // 0xed8 PushV
	var_166_string = "Neutral"; // 0xed9 MovS
	func_3670(var_36_bool, var_166_string); // 0xeda Call
	var_167_int = 11083; // 0xedc PushI
	SetMessage(var_167_int); // 0xedd TObjFunc
	ClearReplies(); // 0xedf TObjFunc
	var_168_int = 11084; // 0xee1 PushI
	var_169_int = 12271; // 0xee2 PushI
	var_170_int = 12269; // 0xee3 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0xee4 TObjFunc
	var_171_int = 11085; // 0xee6 PushI
	var_172_int = 12272; // 0xee7 PushI
	var_173_int = 12270; // 0xee8 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0xee9 TObjFunc
	return 0; // 0xeeb Return
	
Label_3820:
	var_174_int = 12272; // 0xeec PushI
	var_175_bool = var_35_string == var_174_int; // 0xeed Eq
	if(var_175_bool == 0) goto Label_3838; // 0xeee JumpB
	var_176_string = ""; // 0xeef PushV
	var_176_string = "Neutral"; // 0xef0 MovS
	func_3670(var_36_bool, var_176_string); // 0xef1 Call
	var_177_int = 11087; // 0xef3 PushI
	SetMessage(var_177_int); // 0xef4 TObjFunc
	ClearReplies(); // 0xef6 TObjFunc
	var_178_int = 11088; // 0xef8 PushI
	var_179_int = 12275; // 0xef9 PushI
	var_180_int = 12273; // 0xefa PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0xefb TObjFunc
	return 0; // 0xefd Return
	
Label_3838:
	var_181_int = 12271; // 0xefe PushI
	var_182_bool = var_35_string == var_181_int; // 0xeff Eq
	if(var_182_bool == 0) goto Label_3856; // 0xf00 JumpB
	var_183_string = ""; // 0xf01 PushV
	var_183_string = "Neutral"; // 0xf02 MovS
	func_3670(var_36_bool, var_183_string); // 0xf03 Call
	var_184_int = 11086; // 0xf05 PushI
	SetMessage(var_184_int); // 0xf06 TObjFunc
	ClearReplies(); // 0xf08 TObjFunc
	var_185_int = 11089; // 0xf0a PushI
	var_186_int = 12275; // 0xf0b PushI
	var_187_int = 12274; // 0xf0c PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0xf0d TObjFunc
	return 0; // 0xf0f Return
	
Label_3856:
	var_188_int = 12275; // 0xf10 PushI
	var_189_bool = var_35_string == var_188_int; // 0xf11 Eq
	if(var_189_bool == 0) goto Label_3879; // 0xf12 JumpB
	var_190_string = ""; // 0xf13 PushV
	var_190_string = "Neutral"; // 0xf14 MovS
	func_3670(var_36_bool, var_190_string); // 0xf15 Call
	var_191_int = 11090; // 0xf17 PushI
	SetMessage(var_191_int); // 0xf18 TObjFunc
	ClearReplies(); // 0xf1a TObjFunc
	var_192_int = 11091; // 0xf1c PushI
	var_193_int = 12279; // 0xf1d PushI
	var_194_int = 12276; // 0xf1e PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xf1f TObjFunc
	var_195_int = 11092; // 0xf21 PushI
	var_196_int = 12279; // 0xf22 PushI
	var_197_int = 12277; // 0xf23 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0xf24 TObjFunc
	return 0; // 0xf26 Return
	
Label_3879:
	var_198_int = 12279; // 0xf27 PushI
	var_199_bool = var_35_string == var_198_int; // 0xf28 Eq
	if(var_199_bool == 0) goto Label_3897; // 0xf29 JumpB
	var_200_string = ""; // 0xf2a PushV
	var_200_string = "Neutral"; // 0xf2b MovS
	func_3670(var_36_bool, var_200_string); // 0xf2c Call
	var_201_int = 11093; // 0xf2e PushI
	SetMessage(var_201_int); // 0xf2f TObjFunc
	ClearReplies(); // 0xf31 TObjFunc
	var_202_int = 11094; // 0xf33 PushI
	var_203_int = -1; // 0xf34 PushI
	var_204_int = 12281; // 0xf35 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0xf36 TObjFunc
	return 0; // 0xf38 Return
	
Label_3897:
	var_205_int = 12248; // 0xf39 PushI
	var_206_bool = var_35_string == var_205_int; // 0xf3a Eq
	if(var_206_bool == 0) goto Label_3920; // 0xf3b JumpB
	var_207_string = ""; // 0xf3c PushV
	var_207_string = "Neutral"; // 0xf3d MovS
	func_3670(var_36_bool, var_207_string); // 0xf3e Call
	var_208_int = 11067; // 0xf40 PushI
	SetMessage(var_208_int); // 0xf41 TObjFunc
	ClearReplies(); // 0xf43 TObjFunc
	var_209_int = 11068; // 0xf45 PushI
	var_210_int = 12250; // 0xf46 PushI
	var_211_int = 12249; // 0xf47 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0xf48 TObjFunc
	var_212_int = 11073; // 0xf4a PushI
	var_213_int = 12255; // 0xf4b PushI
	var_214_int = 12254; // 0xf4c PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0xf4d TObjFunc
	return 0; // 0xf4f Return
	
Label_3920:
	var_215_int = 12250; // 0xf50 PushI
	var_216_bool = var_35_string == var_215_int; // 0xf51 Eq
	if(var_216_bool == 0) goto Label_3948; // 0xf52 JumpB
	var_217_string = ""; // 0xf53 PushV
	var_217_string = "Neutral"; // 0xf54 MovS
	func_3670(var_36_bool, var_217_string); // 0xf55 Call
	var_218_int = 11069; // 0xf57 PushI
	SetMessage(var_218_int); // 0xf58 TObjFunc
	ClearReplies(); // 0xf5a TObjFunc
	var_219_int = 11070; // 0xf5c PushI
	var_220_int = 12257; // 0xf5d PushI
	var_221_int = 12251; // 0xf5e PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0xf5f TObjFunc
	var_222_int = 11071; // 0xf61 PushI
	var_223_int = 12257; // 0xf62 PushI
	var_224_int = 12252; // 0xf63 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0xf64 TObjFunc
	var_225_int = 11072; // 0xf66 PushI
	var_226_int = 12255; // 0xf67 PushI
	var_227_int = 12253; // 0xf68 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0xf69 TObjFunc
	return 0; // 0xf6b Return
	
Label_3948:
	var_228_int = 12255; // 0xf6c PushI
	var_229_bool = var_35_string == var_228_int; // 0xf6d Eq
	if(var_229_bool == 0) goto Label_3966; // 0xf6e JumpB
	var_230_string = ""; // 0xf6f PushV
	var_230_string = "Neutral"; // 0xf70 MovS
	func_3670(var_36_bool, var_230_string); // 0xf71 Call
	var_231_int = 11074; // 0xf73 PushI
	SetMessage(var_231_int); // 0xf74 TObjFunc
	ClearReplies(); // 0xf76 TObjFunc
	var_232_int = 11075; // 0xf78 PushI
	var_233_int = 12257; // 0xf79 PushI
	var_234_int = 12256; // 0xf7a PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0xf7b TObjFunc
	return 0; // 0xf7d Return
	
Label_3966:
	var_235_int = 12257; // 0xf7e PushI
	var_236_bool = var_35_string == var_235_int; // 0xf7f Eq
	if(var_236_bool == 0) goto Label_3989; // 0xf80 JumpB
	var_237_string = ""; // 0xf81 PushV
	var_237_string = "Neutral"; // 0xf82 MovS
	func_3670(var_36_bool, var_237_string); // 0xf83 Call
	var_238_int = 11076; // 0xf85 PushI
	SetMessage(var_238_int); // 0xf86 TObjFunc
	ClearReplies(); // 0xf88 TObjFunc
	var_239_int = 11077; // 0xf8a PushI
	var_240_int = 12264; // 0xf8b PushI
	var_241_int = 12261; // 0xf8c PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0xf8d TObjFunc
	var_242_int = 11078; // 0xf8f PushI
	var_243_int = 12264; // 0xf90 PushI
	var_244_int = 12262; // 0xf91 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0xf92 TObjFunc
	return 0; // 0xf94 Return
	
Label_3989:
	var_245_int = 12264; // 0xf95 PushI
	var_246_bool = var_35_string == var_245_int; // 0xf96 Eq
	if(var_246_bool == 0) goto Label_4012; // 0xf97 JumpB
	var_247_string = ""; // 0xf98 PushV
	var_247_string = "Neutral"; // 0xf99 MovS
	func_3670(var_36_bool, var_247_string); // 0xf9a Call
	var_248_int = 11080; // 0xf9c PushI
	SetMessage(var_248_int); // 0xf9d TObjFunc
	ClearReplies(); // 0xf9f TObjFunc
	var_249_int = 11081; // 0xfa1 PushI
	var_250_int = -1; // 0xfa2 PushI
	var_251_int = 12266; // 0xfa3 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0xfa4 TObjFunc
	var_252_int = 11082; // 0xfa6 PushI
	var_253_int = -1; // 0xfa7 PushI
	var_254_int = 12267; // 0xfa8 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0xfa9 TObjFunc
	return 0; // 0xfab Return
	
Label_4012:
	var_3_string = 1; // 0xfac TMovB
	var_255_bool = 0; // 0xfad PushV
	func_4871(var_255_bool); // 0xfae Call
	if(var_255_bool == 0) goto Label_4020; // 0xfb0 JumpB
	lshStopAnimation(); // 0xfb1 Func
	goto Label_4022; // 0xfb3 Jump
	
Label_4022:
	return 0; // 0xfb6 Return
	
Label_4020:
	StopAnimation(); // 0xfb4 Func
	
Label_4024:
	return 0; // 0xfb8 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int)
{
	var_37_int = 1; // 0x105c PushI
	if(var_37_int == 0) goto Label_4682; // 0x105d JumpB
	func_4778(); // 0x105f Call
	var_39_int = 14897; // 0x1061 PushI
	var_40_bool = var_36_int == var_39_int; // 0x1062 Eq
	if(var_40_bool == 0) goto Label_4201; // 0x1063 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0x1064 PushV
	var_41_object = var_1_object; // 0x1065 MovT
	var_42_object = var_0_object; // 0x1066 MovT
	func_5117(); // 0x1067 Call
	
Label_4201:
	var_45_int = 14911; // 0x1069 PushI
	var_46_bool = var_36_int == var_45_int; // 0x106a Eq
	if(var_46_bool == 0) goto Label_4209; // 0x106b JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x106c PushV
	var_47_object = var_1_object; // 0x106d MovT
	var_48_object = var_0_object; // 0x106e MovT
	func_5102(); // 0x106f Call
	
Label_4209:
	var_76_int = 13535; // 0x1071 PushI
	var_77_bool = var_36_int == var_76_int; // 0x1072 Eq
	if(var_77_bool == 0) goto Label_4217; // 0x1073 JumpB
	var_78_object = Obj(); var_79_object = Obj(); // 0x1074 PushV
	var_78_object = var_1_object; // 0x1075 MovT
	var_79_object = var_0_object; // 0x1076 MovT
	func_5111(); // 0x1077 Call
	
Label_4217:
	var_82_int = 13534; // 0x1079 PushI
	var_83_bool = var_35_int == var_82_int; // 0x107a Eq
	if(var_83_bool == 0) goto Label_4265; // 0x107b JumpB
	var_84_string = ""; // 0x107c PushV
	var_84_string = "Neutral"; // 0x107d MovS
	func_4171(var_36_int, var_84_string); // 0x107e Call
	var_99_int = 12374; // 0x1080 PushI
	SetMessage(var_99_int); // 0x1081 TObjFunc
	ClearReplies(); // 0x1083 TObjFunc
	var_100_bool = 0; // 0x1085 PushV
	var_100_bool = 0; // 0x1086 MovB
	var_101_bool = 0; var_102_object = Obj(); // 0x1087 PushV
	var_102_object = var_1_object; // 0x1088 MovT
	func_5543(var_102_object); // 0x1089 Call
	var_109_bool = var_101_bool == 0; // 0x108b Not
	if(var_109_bool == 0) goto Label_4243; // 0x108c JumpB
	var_110_bool = 0; var_111_object = Obj(); // 0x108d PushV
	var_111_object = var_1_object; // 0x108e MovT
	func_5567(var_111_object); // 0x108f Call
	if(var_110_bool == 0) goto Label_4243; // 0x1091 JumpB
	var_100_bool = 1; // 0x1092 MovB
	
Label_4243:
	if(var_100_bool == 0) goto Label_4249; // 0x1093 JumpB
	var_116_int = 13641; // 0x1094 PushI
	var_117_int = 14898; // 0x1095 PushI
	var_118_int = 14897; // 0x1096 PushI
	AddReply(var_116_int, var_117_int, var_118_int); // 0x1097 TObjFunc
	
Label_4249:
	var_119_bool = 0; var_120_object = Obj(); // 0x1099 PushV
	var_120_object = var_1_object; // 0x109a MovT
	func_5555(var_120_object); // 0x109b Call
	if(var_119_bool == 0) goto Label_4259; // 0x109d JumpB
	var_125_int = 12375; // 0x109e PushI
	var_126_int = 13536; // 0x109f PushI
	var_127_int = 13535; // 0x10a0 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x10a1 TObjFunc
	
Label_4259:
	var_128_int = 13658; // 0x10a3 PushI
	var_129_int = -1; // 0x10a4 PushI
	var_130_int = 14916; // 0x10a5 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x10a6 TObjFunc
	return 0; // 0x10a8 Return
	
Label_4265:
	var_131_int = 13536; // 0x10a9 PushI
	var_132_bool = var_35_int == var_131_int; // 0x10aa Eq
	if(var_132_bool == 0) goto Label_4288; // 0x10ab JumpB
	var_133_string = ""; // 0x10ac PushV
	var_133_string = "Neutral"; // 0x10ad MovS
	func_4171(var_36_int, var_133_string); // 0x10ae Call
	var_134_int = 12376; // 0x10b0 PushI
	SetMessage(var_134_int); // 0x10b1 TObjFunc
	ClearReplies(); // 0x10b3 TObjFunc
	var_135_int = 12378; // 0x10b5 PushI
	var_136_int = 13544; // 0x10b6 PushI
	var_137_int = 13538; // 0x10b7 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x10b8 TObjFunc
	var_138_int = 12377; // 0x10ba PushI
	var_139_int = 13539; // 0x10bb PushI
	var_140_int = 13537; // 0x10bc PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x10bd TObjFunc
	return 0; // 0x10bf Return
	
Label_4288:
	var_141_int = 13539; // 0x10c0 PushI
	var_142_bool = var_35_int == var_141_int; // 0x10c1 Eq
	if(var_142_bool == 0) goto Label_4306; // 0x10c2 JumpB
	var_143_string = ""; // 0x10c3 PushV
	var_143_string = "Neutral"; // 0x10c4 MovS
	func_4171(var_36_int, var_143_string); // 0x10c5 Call
	var_144_int = 12379; // 0x10c7 PushI
	SetMessage(var_144_int); // 0x10c8 TObjFunc
	ClearReplies(); // 0x10ca TObjFunc
	var_145_int = 12380; // 0x10cc PushI
	var_146_int = 13541; // 0x10cd PushI
	var_147_int = 13540; // 0x10ce PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x10cf TObjFunc
	return 0; // 0x10d1 Return
	
Label_4306:
	var_148_int = 13541; // 0x10d2 PushI
	var_149_bool = var_35_int == var_148_int; // 0x10d3 Eq
	if(var_149_bool == 0) goto Label_4329; // 0x10d4 JumpB
	var_150_string = ""; // 0x10d5 PushV
	var_150_string = "Neutral"; // 0x10d6 MovS
	func_4171(var_36_int, var_150_string); // 0x10d7 Call
	var_151_int = 12381; // 0x10d9 PushI
	SetMessage(var_151_int); // 0x10da TObjFunc
	ClearReplies(); // 0x10dc TObjFunc
	var_152_int = 12382; // 0x10de PushI
	var_153_int = -1; // 0x10df PushI
	var_154_int = 13542; // 0x10e0 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x10e1 TObjFunc
	var_155_int = 12383; // 0x10e3 PushI
	var_156_int = -1; // 0x10e4 PushI
	var_157_int = 13543; // 0x10e5 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x10e6 TObjFunc
	return 0; // 0x10e8 Return
	
Label_4329:
	var_158_int = 13544; // 0x10e9 PushI
	var_159_bool = var_35_int == var_158_int; // 0x10ea Eq
	if(var_159_bool == 0) goto Label_4352; // 0x10eb JumpB
	var_160_string = ""; // 0x10ec PushV
	var_160_string = "Neutral"; // 0x10ed MovS
	func_4171(var_36_int, var_160_string); // 0x10ee Call
	var_161_int = 12384; // 0x10f0 PushI
	SetMessage(var_161_int); // 0x10f1 TObjFunc
	ClearReplies(); // 0x10f3 TObjFunc
	var_162_int = 12385; // 0x10f5 PushI
	var_163_int = 13552; // 0x10f6 PushI
	var_164_int = 13545; // 0x10f7 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x10f8 TObjFunc
	var_165_int = 12386; // 0x10fa PushI
	var_166_int = 13547; // 0x10fb PushI
	var_167_int = 13546; // 0x10fc PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x10fd TObjFunc
	return 0; // 0x10ff Return
	
Label_4352:
	var_168_int = 13547; // 0x1100 PushI
	var_169_bool = var_35_int == var_168_int; // 0x1101 Eq
	if(var_169_bool == 0) goto Label_4375; // 0x1102 JumpB
	var_170_string = ""; // 0x1103 PushV
	var_170_string = "Neutral"; // 0x1104 MovS
	func_4171(var_36_int, var_170_string); // 0x1105 Call
	var_171_int = 12387; // 0x1107 PushI
	SetMessage(var_171_int); // 0x1108 TObjFunc
	ClearReplies(); // 0x110a TObjFunc
	var_172_int = 12388; // 0x110c PushI
	var_173_int = 13550; // 0x110d PushI
	var_174_int = 13548; // 0x110e PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x110f TObjFunc
	var_175_int = 12389; // 0x1111 PushI
	var_176_int = 13550; // 0x1112 PushI
	var_177_int = 13549; // 0x1113 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x1114 TObjFunc
	return 0; // 0x1116 Return
	
Label_4375:
	var_178_int = 13550; // 0x1117 PushI
	var_179_bool = var_35_int == var_178_int; // 0x1118 Eq
	if(var_179_bool == 0) goto Label_4393; // 0x1119 JumpB
	var_180_string = ""; // 0x111a PushV
	var_180_string = "Neutral"; // 0x111b MovS
	func_4171(var_36_int, var_180_string); // 0x111c Call
	var_181_int = 12390; // 0x111e PushI
	SetMessage(var_181_int); // 0x111f TObjFunc
	ClearReplies(); // 0x1121 TObjFunc
	var_182_int = 12391; // 0x1123 PushI
	var_183_int = -1; // 0x1124 PushI
	var_184_int = 13551; // 0x1125 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x1126 TObjFunc
	return 0; // 0x1128 Return
	
Label_4393:
	var_185_int = 13552; // 0x1129 PushI
	var_186_bool = var_35_int == var_185_int; // 0x112a Eq
	if(var_186_bool == 0) goto Label_4421; // 0x112b JumpB
	var_187_string = ""; // 0x112c PushV
	var_187_string = "Neutral"; // 0x112d MovS
	func_4171(var_36_int, var_187_string); // 0x112e Call
	var_188_int = 12392; // 0x1130 PushI
	SetMessage(var_188_int); // 0x1131 TObjFunc
	ClearReplies(); // 0x1133 TObjFunc
	var_189_int = 12393; // 0x1135 PushI
	var_190_int = 13559; // 0x1136 PushI
	var_191_int = 13554; // 0x1137 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x1138 TObjFunc
	var_192_int = 12394; // 0x113a PushI
	var_193_int = 13557; // 0x113b PushI
	var_194_int = 13555; // 0x113c PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x113d TObjFunc
	var_195_int = 12395; // 0x113f PushI
	var_196_int = 13558; // 0x1140 PushI
	var_197_int = 13556; // 0x1141 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1142 TObjFunc
	return 0; // 0x1144 Return
	
Label_4421:
	var_198_int = 13558; // 0x1145 PushI
	var_199_bool = var_35_int == var_198_int; // 0x1146 Eq
	if(var_199_bool == 0) goto Label_4439; // 0x1147 JumpB
	var_200_string = ""; // 0x1148 PushV
	var_200_string = "Neutral"; // 0x1149 MovS
	func_4171(var_36_int, var_200_string); // 0x114a Call
	var_201_int = 12397; // 0x114c PushI
	SetMessage(var_201_int); // 0x114d TObjFunc
	ClearReplies(); // 0x114f TObjFunc
	var_202_int = 12403; // 0x1151 PushI
	var_203_int = 13565; // 0x1152 PushI
	var_204_int = 13564; // 0x1153 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x1154 TObjFunc
	return 0; // 0x1156 Return
	
Label_4439:
	var_205_int = 13557; // 0x1157 PushI
	var_206_bool = var_35_int == var_205_int; // 0x1158 Eq
	if(var_206_bool == 0) goto Label_4457; // 0x1159 JumpB
	var_207_string = ""; // 0x115a PushV
	var_207_string = "Neutral"; // 0x115b MovS
	func_4171(var_36_int, var_207_string); // 0x115c Call
	var_208_int = 12396; // 0x115e PushI
	SetMessage(var_208_int); // 0x115f TObjFunc
	ClearReplies(); // 0x1161 TObjFunc
	var_209_int = 12402; // 0x1163 PushI
	var_210_int = 13565; // 0x1164 PushI
	var_211_int = 13563; // 0x1165 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x1166 TObjFunc
	return 0; // 0x1168 Return
	
Label_4457:
	var_212_int = 13559; // 0x1169 PushI
	var_213_bool = var_35_int == var_212_int; // 0x116a Eq
	if(var_213_bool == 0) goto Label_4475; // 0x116b JumpB
	var_214_string = ""; // 0x116c PushV
	var_214_string = "Neutral"; // 0x116d MovS
	func_4171(var_36_int, var_214_string); // 0x116e Call
	var_215_int = 12398; // 0x1170 PushI
	SetMessage(var_215_int); // 0x1171 TObjFunc
	ClearReplies(); // 0x1173 TObjFunc
	var_216_int = 12399; // 0x1175 PushI
	var_217_int = 13561; // 0x1176 PushI
	var_218_int = 13560; // 0x1177 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1178 TObjFunc
	return 0; // 0x117a Return
	
Label_4475:
	var_219_int = 13561; // 0x117b PushI
	var_220_bool = var_35_int == var_219_int; // 0x117c Eq
	if(var_220_bool == 0) goto Label_4493; // 0x117d JumpB
	var_221_string = ""; // 0x117e PushV
	var_221_string = "Neutral"; // 0x117f MovS
	func_4171(var_36_int, var_221_string); // 0x1180 Call
	var_222_int = 12400; // 0x1182 PushI
	SetMessage(var_222_int); // 0x1183 TObjFunc
	ClearReplies(); // 0x1185 TObjFunc
	var_223_int = 12401; // 0x1187 PushI
	var_224_int = 13565; // 0x1188 PushI
	var_225_int = 13562; // 0x1189 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x118a TObjFunc
	return 0; // 0x118c Return
	
Label_4493:
	var_226_int = 13565; // 0x118d PushI
	var_227_bool = var_35_int == var_226_int; // 0x118e Eq
	if(var_227_bool == 0) goto Label_4516; // 0x118f JumpB
	var_228_string = ""; // 0x1190 PushV
	var_228_string = "Neutral"; // 0x1191 MovS
	func_4171(var_36_int, var_228_string); // 0x1192 Call
	var_229_int = 12404; // 0x1194 PushI
	SetMessage(var_229_int); // 0x1195 TObjFunc
	ClearReplies(); // 0x1197 TObjFunc
	var_230_int = 12405; // 0x1199 PushI
	var_231_int = 13570; // 0x119a PushI
	var_232_int = 13568; // 0x119b PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x119c TObjFunc
	var_233_int = 12406; // 0x119e PushI
	var_234_int = 13570; // 0x119f PushI
	var_235_int = 13569; // 0x11a0 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x11a1 TObjFunc
	return 0; // 0x11a3 Return
	
Label_4516:
	var_236_int = 13570; // 0x11a4 PushI
	var_237_bool = var_35_int == var_236_int; // 0x11a5 Eq
	if(var_237_bool == 0) goto Label_4534; // 0x11a6 JumpB
	var_238_string = ""; // 0x11a7 PushV
	var_238_string = "Neutral"; // 0x11a8 MovS
	func_4171(var_36_int, var_238_string); // 0x11a9 Call
	var_239_int = 12407; // 0x11ab PushI
	SetMessage(var_239_int); // 0x11ac TObjFunc
	ClearReplies(); // 0x11ae TObjFunc
	var_240_int = 12408; // 0x11b0 PushI
	var_241_int = -1; // 0x11b1 PushI
	var_242_int = 13572; // 0x11b2 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x11b3 TObjFunc
	return 0; // 0x11b5 Return
	
Label_4534:
	var_243_int = 14898; // 0x11b6 PushI
	var_244_bool = var_35_int == var_243_int; // 0x11b7 Eq
	if(var_244_bool == 0) goto Label_4552; // 0x11b8 JumpB
	var_245_string = ""; // 0x11b9 PushV
	var_245_string = "Neutral"; // 0x11ba MovS
	func_4171(var_36_int, var_245_string); // 0x11bb Call
	var_246_int = 13642; // 0x11bd PushI
	SetMessage(var_246_int); // 0x11be TObjFunc
	ClearReplies(); // 0x11c0 TObjFunc
	var_247_int = 13643; // 0x11c2 PushI
	var_248_int = 14900; // 0x11c3 PushI
	var_249_int = 14899; // 0x11c4 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x11c5 TObjFunc
	return 0; // 0x11c7 Return
	
Label_4552:
	var_250_int = 14900; // 0x11c8 PushI
	var_251_bool = var_35_int == var_250_int; // 0x11c9 Eq
	if(var_251_bool == 0) goto Label_4570; // 0x11ca JumpB
	var_252_string = ""; // 0x11cb PushV
	var_252_string = "Neutral"; // 0x11cc MovS
	func_4171(var_36_int, var_252_string); // 0x11cd Call
	var_253_int = 13644; // 0x11cf PushI
	SetMessage(var_253_int); // 0x11d0 TObjFunc
	ClearReplies(); // 0x11d2 TObjFunc
	var_254_int = 13645; // 0x11d4 PushI
	var_255_int = 14902; // 0x11d5 PushI
	var_256_int = 14901; // 0x11d6 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x11d7 TObjFunc
	return 0; // 0x11d9 Return
	
Label_4570:
	var_257_int = 14902; // 0x11da PushI
	var_258_bool = var_35_int == var_257_int; // 0x11db Eq
	if(var_258_bool == 0) goto Label_4593; // 0x11dc JumpB
	var_259_string = ""; // 0x11dd PushV
	var_259_string = "Neutral"; // 0x11de MovS
	func_4171(var_36_int, var_259_string); // 0x11df Call
	var_260_int = 13646; // 0x11e1 PushI
	SetMessage(var_260_int); // 0x11e2 TObjFunc
	ClearReplies(); // 0x11e4 TObjFunc
	var_261_int = 13647; // 0x11e6 PushI
	var_262_int = 14904; // 0x11e7 PushI
	var_263_int = 14903; // 0x11e8 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x11e9 TObjFunc
	var_264_int = 13649; // 0x11eb PushI
	var_265_int = 14906; // 0x11ec PushI
	var_266_int = 14905; // 0x11ed PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x11ee TObjFunc
	return 0; // 0x11f0 Return
	
Label_4593:
	var_267_int = 14906; // 0x11f1 PushI
	var_268_bool = var_35_int == var_267_int; // 0x11f2 Eq
	if(var_268_bool == 0) goto Label_4611; // 0x11f3 JumpB
	var_269_string = ""; // 0x11f4 PushV
	var_269_string = "Neutral"; // 0x11f5 MovS
	func_4171(var_36_int, var_269_string); // 0x11f6 Call
	var_270_int = 13650; // 0x11f8 PushI
	SetMessage(var_270_int); // 0x11f9 TObjFunc
	ClearReplies(); // 0x11fb TObjFunc
	var_271_int = 13652; // 0x11fd PushI
	var_272_int = 14907; // 0x11fe PushI
	var_273_int = 14908; // 0x11ff PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x1200 TObjFunc
	return 0; // 0x1202 Return
	
Label_4611:
	var_274_int = 14904; // 0x1203 PushI
	var_275_bool = var_35_int == var_274_int; // 0x1204 Eq
	if(var_275_bool == 0) goto Label_4634; // 0x1205 JumpB
	var_276_string = ""; // 0x1206 PushV
	var_276_string = "Neutral"; // 0x1207 MovS
	func_4171(var_36_int, var_276_string); // 0x1208 Call
	var_277_int = 13648; // 0x120a PushI
	SetMessage(var_277_int); // 0x120b TObjFunc
	ClearReplies(); // 0x120d TObjFunc
	var_278_int = 13651; // 0x120f PushI
	var_279_int = 14909; // 0x1210 PushI
	var_280_int = 14907; // 0x1211 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x1212 TObjFunc
	var_281_int = 13655; // 0x1214 PushI
	var_282_int = 14913; // 0x1215 PushI
	var_283_int = 14912; // 0x1216 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x1217 TObjFunc
	return 0; // 0x1219 Return
	
Label_4634:
	var_284_int = 14913; // 0x121a PushI
	var_285_bool = var_35_int == var_284_int; // 0x121b Eq
	if(var_285_bool == 0) goto Label_4652; // 0x121c JumpB
	var_286_string = ""; // 0x121d PushV
	var_286_string = "Neutral"; // 0x121e MovS
	func_4171(var_36_int, var_286_string); // 0x121f Call
	var_287_int = 13656; // 0x1221 PushI
	SetMessage(var_287_int); // 0x1222 TObjFunc
	ClearReplies(); // 0x1224 TObjFunc
	var_288_int = 13657; // 0x1226 PushI
	var_289_int = 14909; // 0x1227 PushI
	var_290_int = 14914; // 0x1228 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x1229 TObjFunc
	return 0; // 0x122b Return
	
Label_4652:
	var_291_int = 14909; // 0x122c PushI
	var_292_bool = var_35_int == var_291_int; // 0x122d Eq
	if(var_292_bool == 0) goto Label_4670; // 0x122e JumpB
	var_293_string = ""; // 0x122f PushV
	var_293_string = "Neutral"; // 0x1230 MovS
	func_4171(var_36_int, var_293_string); // 0x1231 Call
	var_294_int = 13653; // 0x1233 PushI
	SetMessage(var_294_int); // 0x1234 TObjFunc
	ClearReplies(); // 0x1236 TObjFunc
	var_295_int = 13654; // 0x1238 PushI
	var_296_int = -1; // 0x1239 PushI
	var_297_int = 14911; // 0x123a PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x123b TObjFunc
	return 0; // 0x123d Return
	
Label_4670:
	var_3_string = 1; // 0x123e TMovB
	var_298_bool = 0; // 0x123f PushV
	func_4871(var_298_bool); // 0x1240 Call
	if(var_298_bool == 0) goto Label_4678; // 0x1242 JumpB
	lshStopAnimation(); // 0x1243 Func
	goto Label_4680; // 0x1245 Jump
	
Label_4680:
	return 0; // 0x1248 Return
	
Label_4678:
	StopAnimation(); // 0x1246 Func
	
Label_4682:
	return 0; // 0x124a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool)
{
	func_5869(); // 0x7 Call
	var_36_bool = 0; // 0x9 PushV
	func_4695(var_36_bool); // 0xa Call
	var_39_bool = var_36_bool == 0; // 0xc Not
	if(var_39_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_40_string = ""; // 0x13 PushV
	var_40_string = "Neutral"; // 0x14 MovS
	func_4760(var_40_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_5123(var_49_object)
{
	func_5821(); // 0x1405 Call
	var_76_string = "ospina blood is given"; // 0x1407 PushS
	Trace(var_76_string); // 0x1408 Func
	var_77_object = Obj(); var_78_string = ""; var_79_int = 0; // 0x140a PushV
	var_77_object = var_49_object; // 0x140b Mov
	var_78_string = "d6q01_ospina_blood"; // 0x140c MovS
	var_79_int = 1; // 0x140d MovI
	func_4813(var_77_object, var_78_string, var_79_int); // 0x140e Call
	return 0; // 0x1410 Return
}


func_4867(var_91_int)
{
	var_91_int = 2874; // 0x1303 MovI
	return 0; // 0x1304 Return
}


func_4869(var_92_string)
{
	var_92_string = "ui/NPC_Ospina.png"; // 0x1305 MovS
	return 0; // 0x1306 Return
}


func_5639(var_255_bool)
{
	var_257_int = 0; var_258_string = ""; // 0x1608 PushV
	var_258_string = "KnowLaska"; // 0x1609 MovS
	func_4795(var_257_int, var_258_string); // 0x160a Call
	var_259_int = 1; // 0x160c PushI
	var_260_bool = var_257_int == var_259_int; // 0x160d Eq
	if(var_260_bool == 0) goto Label_5649; // 0x160e JumpB
	var_255_bool = 1; // 0x160f MovB
	return 0; // 0x1610 Return
	
Label_5649:
	var_255_bool = 0; // 0x1611 MovB
	return 0; // 0x1612 Return
}


func_4871(var_38_bool)
{
	var_38_bool = 1; // 0x1307 MovB
	return 0; // 0x1308 Return
}


func_4873()
{
	var_43_string = "ood1Ospina1"; // 0x130a PushS
	var_44_int = 1; // 0x130b PushI
	SetVariable(var_43_string, var_44_int); // 0x130c Func
	return 0; // 0x130e Return
}


func_5387(var_256_bool)
{
	var_258_int = 0; var_259_string = ""; // 0x150c PushV
	var_259_string = "ood3Ospina1"; // 0x150d MovS
	func_4795(var_258_int, var_259_string); // 0x150e Call
	var_260_int = 0; // 0x1510 PushI
	var_261_bool = var_258_int == var_260_int; // 0x1511 Eq
	if(var_261_bool == 0) goto Label_5397; // 0x1512 JumpB
	var_256_bool = 1; // 0x1513 MovB
	return 0; // 0x1514 Return
	
Label_5397:
	var_256_bool = 0; // 0x1515 MovB
	return 0; // 0x1516 Return
}


func_4879()
{
	var_76_string = "ood1Ospina2"; // 0x1310 PushS
	var_77_int = 1; // 0x1311 PushI
	SetVariable(var_76_string, var_77_int); // 0x1312 Func
	return 0; // 0x1314 Return
}


func_5137()
{
	var_47_string = "playsound"; // 0x1412 PushS
	var_48_string = "giveitem"; // 0x1413 PushS
	TriggerWorld(var_47_string, var_48_string); // 0x1414 Func
	return 0; // 0x1416 Return
}


func_5651(var_230_bool)
{
	var_232_int = 0; var_233_string = ""; // 0x1614 PushV
	var_233_string = "KnowMladVlad"; // 0x1615 MovS
	func_4795(var_232_int, var_233_string); // 0x1616 Call
	var_234_int = 1; // 0x1618 PushI
	var_235_bool = var_232_int == var_234_int; // 0x1619 Eq
	if(var_235_bool == 0) goto Label_5661; // 0x161a JumpB
	var_230_bool = 1; // 0x161b MovB
	return 0; // 0x161c Return
	
Label_5661:
	var_230_bool = 0; // 0x161d MovB
	return 0; // 0x161e Return
}


func_4885()
{
	var_102_string = "ood1Ospina3"; // 0x1316 PushS
	var_103_int = 1; // 0x1317 PushI
	SetVariable(var_102_string, var_103_int); // 0x1318 Func
	return 0; // 0x131a Return
}


func_5143()
{
	var_139_object = Obj(); var_140_object = Obj(); var_141_object = Obj(); var_142_object = Obj(); // 0x1417 PushV
	var_143_string = "d6q01OspinaVolonteer"; // 0x1418 PushS
	var_144_int = 1; // 0x1419 PushI
	SetVariable(var_143_string, var_144_int); // 0x141a Func
	var_145_object = Obj(); // 0x141c PushV
	func_5722(var_145_object); // 0x141d Call
	var_141_object = var_145_object; // 0x141e Mov
	var_152_string = "d6q01AlexandrGotoJulia"; // 0x1420 PushS
	FindMark(var_142_object, var_152_string); // 0x1421 ObjFunc
	var_153_object = var_142_object; // 0x1423 Push
	if(var_153_object == 0) goto Label_5159; // 0x1424 JumpB
	Remove(); // 0x1425 ObjFunc
	
Label_5159:
	var_154_string = "d6q01AlexandrGotoKaterina"; // 0x1427 PushS
	FindMark(var_142_object, var_154_string); // 0x1428 ObjFunc
	var_155_object = var_142_object; // 0x142a Push
	if(var_155_object == 0) goto Label_5166; // 0x142b JumpB
	Remove(); // 0x142c ObjFunc
	
Label_5166:
	var_156_string = "d6q01AlexandrGotoLara"; // 0x142e PushS
	FindMark(var_142_object, var_156_string); // 0x142f ObjFunc
	var_157_object = var_142_object; // 0x1431 Push
	if(var_157_object == 0) goto Label_5173; // 0x1432 JumpB
	Remove(); // 0x1433 ObjFunc
	
Label_5173:
	var_158_string = "d6q01AlexangrGotoJulLaraSelf"; // 0x1435 PushS
	FindMark(var_142_object, var_158_string); // 0x1436 ObjFunc
	var_159_object = var_142_object; // 0x1438 Push
	if(var_159_object == 0) goto Label_5180; // 0x1439 JumpB
	Remove(); // 0x143a ObjFunc
	
Label_5180:
	var_160_string = "d6q01BigVladGotoAnna"; // 0x143c PushS
	FindMark(var_142_object, var_160_string); // 0x143d ObjFunc
	var_161_object = var_142_object; // 0x143f Push
	if(var_161_object == 0) goto Label_5187; // 0x1440 JumpB
	Remove(); // 0x1441 ObjFunc
	
Label_5187:
	var_162_string = "d6q01BigVladGotoAnnaOspinaSelf"; // 0x1443 PushS
	FindMark(var_142_object, var_162_string); // 0x1444 ObjFunc
	var_163_object = var_142_object; // 0x1446 Push
	if(var_163_object == 0) goto Label_5194; // 0x1447 JumpB
	Remove(); // 0x1448 ObjFunc
	
Label_5194:
	var_164_string = "d6q01BigVladGotoOspina"; // 0x144a PushS
	FindMark(var_142_object, var_164_string); // 0x144b ObjFunc
	var_165_object = var_142_object; // 0x144d Push
	if(var_165_object == 0) goto Label_5201; // 0x144e JumpB
	Remove(); // 0x144f ObjFunc
	
Label_5201:
	var_166_string = "d6q01KaterinaGotoLaska"; // 0x1451 PushS
	FindMark(var_142_object, var_166_string); // 0x1452 ObjFunc
	var_167_object = var_142_object; // 0x1454 Push
	if(var_167_object == 0) goto Label_5208; // 0x1455 JumpB
	Remove(); // 0x1456 ObjFunc
	
Label_5208:
	var_168_string = "d6q01KaterinagotoLaskaSelf"; // 0x1458 PushS
	FindMark(var_142_object, var_168_string); // 0x1459 ObjFunc
	var_169_object = var_142_object; // 0x145b Push
	if(var_169_object == 0) goto Label_5215; // 0x145c JumpB
	Remove(); // 0x145d ObjFunc
	
Label_5215:
	var_170_string = "d6q01KillerIsKlara"; // 0x145f PushS
	FindMark(var_142_object, var_170_string); // 0x1460 ObjFunc
	var_171_object = var_142_object; // 0x1462 Push
	if(var_171_object == 0) goto Label_5222; // 0x1463 JumpB
	Remove(); // 0x1464 ObjFunc
	
Label_5222:
	var_172_string = "d6q01LaskaGotoAlbinos"; // 0x1466 PushS
	FindMark(var_142_object, var_172_string); // 0x1467 ObjFunc
	var_173_object = var_142_object; // 0x1469 Push
	if(var_173_object == 0) goto Label_5229; // 0x146a JumpB
	Remove(); // 0x146b ObjFunc
	
Label_5229:
	var_174_string = "d6q01ViktorGotoAlexandr"; // 0x146d PushS
	FindMark(var_142_object, var_174_string); // 0x146e ObjFunc
	var_175_object = var_142_object; // 0x1470 Push
	if(var_175_object == 0) goto Label_5236; // 0x1471 JumpB
	Remove(); // 0x1472 ObjFunc
	
Label_5236:
	var_176_string = "d6q01ViktorGotoAlxBigSelf"; // 0x1474 PushS
	FindMark(var_142_object, var_176_string); // 0x1475 ObjFunc
	var_177_object = var_142_object; // 0x1477 Push
	if(var_177_object == 0) goto Label_5243; // 0x1478 JumpB
	Remove(); // 0x1479 ObjFunc
	
Label_5243:
	var_178_string = "d6q01ViktorGotoBigVlad"; // 0x147b PushS
	FindMark(var_142_object, var_178_string); // 0x147c ObjFunc
	var_179_object = var_142_object; // 0x147e Push
	if(var_179_object == 0) goto Label_5250; // 0x147f JumpB
	Remove(); // 0x1480 ObjFunc
	
Label_5250:
	func_5837(); // 0x1483 Call
	var_189_bool = 0; var_190_int = 0; // 0x1485 PushV
	var_190_int = 112; // 0x1486 MovI
	func_5705(var_189_bool, var_190_int); // 0x1487 Call
	var_197_bool = 0; var_198_int = 0; // 0x1489 PushV
	var_198_int = 113; // 0x148a MovI
	func_5705(var_197_bool, var_198_int); // 0x148b Call
	var_199_bool = 0; var_200_int = 0; // 0x148d PushV
	var_200_int = 114; // 0x148e MovI
	func_5705(var_199_bool, var_200_int); // 0x148f Call
	var_201_bool = 0; var_202_int = 0; // 0x1491 PushV
	var_202_int = 115; // 0x1492 MovI
	func_5705(var_201_bool, var_202_int); // 0x1493 Call
	var_203_bool = 0; var_204_int = 0; // 0x1495 PushV
	var_204_int = 116; // 0x1496 MovI
	func_5705(var_203_bool, var_204_int); // 0x1497 Call
	var_205_bool = 0; var_206_int = 0; // 0x1499 PushV
	var_206_int = 117; // 0x149a MovI
	func_5705(var_205_bool, var_206_int); // 0x149b Call
	var_207_bool = 0; var_208_string = ""; var_209_string = ""; // 0x149d PushV
	var_208_string = "quest_d6_01"; // 0x149e MovS
	var_209_string = "completed"; // 0x149f MovS
	func_4826(var_207_bool, var_208_string, var_209_string); // 0x14a0 Call
	return 4; // 0x14a2 Return
}


func_5399(var_223_bool)
{
	var_225_int = 0; var_226_string = ""; // 0x1518 PushV
	var_226_string = "ood3Ospina2"; // 0x1519 MovS
	func_4795(var_225_int, var_226_string); // 0x151a Call
	var_229_int = 0; // 0x151c PushI
	var_230_bool = var_225_int == var_229_int; // 0x151d Eq
	if(var_230_bool == 0) goto Label_5409; // 0x151e JumpB
	var_223_bool = 1; // 0x151f MovB
	return 0; // 0x1520 Return
	
Label_5409:
	var_223_bool = 0; // 0x1521 MovB
	return 0; // 0x1522 Return
}


func_2585(var_2_object, var_206_string)
{
	var_207_bool = 0; // 0xa1a PushV
	func_4871(var_207_bool); // 0xa1b Call
	var_208_bool = var_207_bool == 0; // 0xa1d Not
	if(var_208_bool == 0) goto Label_2592; // 0xa1e JumpB
	return 0; // 0xa1f Return
	
Label_2592:
	var_209_bool = var_206_string == var_2_object; // 0xa20 Eq
	if(var_209_bool == 0) goto Label_2595; // 0xa21 JumpB
	return 0; // 0xa22 Return
	
Label_2595:
	var_210_string = ""; // 0xa23 PushV
	var_210_string = var_206_string; // 0xa24 Mov
	func_4760(var_210_string); // 0xa25 Call
	var_2_object = var_206_string; // 0xa27 TMov
	return 0; // 0xa28 Return
}


func_4891()
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj(); // 0x131b PushV
	var_55_object = Obj(); // 0x131c PushV
	func_5722(var_55_object); // 0x131d Call
	var_53_object = var_55_object; // 0x131e Mov
	var_62_string = "d1q03KapellaGotoOspina"; // 0x1320 PushS
	FindMark(var_54_object, var_62_string); // 0x1321 ObjFunc
	var_63_object = var_54_object; // 0x1323 Push
	if(var_63_object == 0) goto Label_4903; // 0x1324 JumpB
	Remove(); // 0x1325 ObjFunc
	
Label_4903:
	var_64_string = "d1q03MladVladGotoOspina"; // 0x1327 PushS
	FindMark(var_54_object, var_64_string); // 0x1328 ObjFunc
	var_65_object = var_54_object; // 0x132a Push
	if(var_65_object == 0) goto Label_4910; // 0x132b JumpB
	Remove(); // 0x132c ObjFunc
	
Label_4910:
	var_66_bool = 0; var_67_string = ""; var_68_string = ""; // 0x132e PushV
	var_67_string = "quest_d1_03"; // 0x132f MovS
	var_68_string = "kapella_finish"; // 0x1330 MovS
	func_4826(var_66_bool, var_67_string, var_68_string); // 0x1331 Call
	return 4; // 0x1333 Return
}


func_1310(var_2_object, var_163_string)
{
	var_164_bool = 0; // 0x51f PushV
	func_4871(var_164_bool); // 0x520 Call
	var_165_bool = var_164_bool == 0; // 0x522 Not
	if(var_165_bool == 0) goto Label_1317; // 0x523 JumpB
	return 0; // 0x524 Return
	
Label_1317:
	var_166_bool = var_163_string == var_2_object; // 0x525 Eq
	if(var_166_bool == 0) goto Label_1320; // 0x526 JumpB
	return 0; // 0x527 Return
	
Label_1320:
	var_167_string = ""; // 0x528 PushV
	var_167_string = var_163_string; // 0x529 Mov
	func_4760(var_167_string); // 0x52a Call
	var_2_object = var_163_string; // 0x52c TMov
	return 0; // 0x52d Return
}


func_5663(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); // 0x161f PushV
	GetDiaryRoot(var_68_object); // 0x1620 Func
	var_69_bool = var_68_object == 0; // 0x1622 Not
	if(var_69_bool == 0) goto Label_5673; // 0x1623 JumpB
	var_70_string = "Can't retrieve diary root"; // 0x1624 PushS
	Trace(var_70_string); // 0x1625 Func
	var_66_object = 0; // 0x1627 MovB
	return 2; // 0x1628 Return
	
Label_5673:
	var_66_object = var_68_object; // 0x1629 Mov
	return 2; // 0x162a Return
}


func_1056(var_0_object, var_157_int, var_158_object)
{
	var_160_object = Obj(); var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_object = Obj(); var_165_bool = 0; var_166_int = 0; var_167_bool = 0; // 0x420 PushV
	var_0_object = var_158_object; // 0x421 TMov
	var_168_bool = 0; var_169_object = Obj(); // 0x422 PushV
	var_169_object = var_158_object; // 0x423 Mov
	func_4700(var_169_object); // 0x424 Call
	var_170_bool = var_168_bool == 0; // 0x426 Not
	if(var_170_bool == 0) goto Label_1066; // 0x427 JumpB
	var_157_int = -2; // 0x428 MovI
	return 8; // 0x429 Return
	
Label_1066:
	CreateDialog(var_164_object); // 0x42a Func
	var_171_int = 0; // 0x42c PushV
	func_4867(var_171_int); // 0x42d Call
	SetNPCName(var_171_int); // 0x42f ObjFunc
	var_172_string = ""; // 0x431 PushV
	func_4869(var_172_string); // 0x432 Call
	SetPhoto(var_172_string); // 0x434 ObjFunc
	var_173_int = 0; // 0x436 PushV
	func_5772(var_173_int); // 0x437 Call
	SetPlayerName(var_173_int); // 0x439 ObjFunc
	var_166_int = -1; // 0x43b MovI
	IsOverrideActive(var_165_bool); // 0x43c Func
	var_174_bool = var_165_bool; // 0x43e Push
	if(var_174_bool == 0) goto Label_1090; // 0x43f JumpB
	var_157_int = -2; // 0x440 MovI
	return 8; // 0x441 Return
	
Label_1090:
	DoDialog(var_164_object); // 0x442 Func
	var_175_object = Obj(); var_176_object = Obj(); // 0x444 PushV
	var_175_object = var_158_object; // 0x445 Mov
	var_176_object = var_164_object; // 0x446 Mov
	TaskCall(7); // 0x447 TaskCall
	func_1119(var_177_object, var_178_object, var_179_string, var_180_bool, var_175_object, var_176_object); // 0x448 Call
	TaskReturn(); // 0x449 TaskReturn
	IsDialogEnd(var_167_bool); // 0x44b ObjFunc
	
Label_1101:
	var_305_bool = var_167_bool == 0; // 0x44d Not
	if(var_305_bool == 0) goto Label_1108; // 0x44e JumpB
	sync(); // 0x44f Func
	IsDialogEnd(var_167_bool); // 0x451 ObjFunc
	goto Label_1101; // 0x453 Jump
	
Label_1108:
	var_306_object = Obj(); // 0x454 PushV
	var_306_object = var_158_object; // 0x455 Mov
	func_4756(); // 0x456 Call
	StopDialog(var_164_object); // 0x458 Func
	GetReturnValue(var_166_int); // 0x45a ObjFunc
	var_157_int = var_166_int; // 0x45c Mov
	return 8; // 0x45d Return
}


func_5411(var_266_bool)
{
	var_268_int = 0; var_269_string = ""; // 0x1524 PushV
	var_269_string = "ood3Ospina3"; // 0x1525 MovS
	func_4795(var_268_int, var_269_string); // 0x1526 Call
	var_270_int = 0; // 0x1528 PushI
	var_271_bool = var_268_int == var_270_int; // 0x1529 Eq
	if(var_271_bool == 0) goto Label_5421; // 0x152a JumpB
	var_266_bool = 1; // 0x152b MovB
	return 0; // 0x152c Return
	
Label_5421:
	var_266_bool = 0; // 0x152d MovB
	return 0; // 0x152e Return
}


func_5676(var_57_bool, var_58_object, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); var_62_int = 0; var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; // 0x162c PushV
	var_66_object = Obj(); // 0x162d PushV
	func_5663(var_66_object); // 0x162e Call
	var_63_object = var_66_object; // 0x162f Mov
	Find(var_59_int, var_64_object); // 0x1631 ObjFunc
	var_71_bool = var_64_object == 0; // 0x1633 Not
	if(var_71_bool == 0) goto Label_5691; // 0x1634 JumpB
	var_72_string = "Can't find diary parent with id: "; // 0x1635 PushS
	var_73_int = var_72_string + var_59_int; // 0x1636 Add
	Trace(var_73_int); // 0x1637 Func
	var_57_bool = 0; // 0x1639 MovB
	return 6; // 0x163a Return
	
Label_5691:
	AddChild(var_58_object); // 0x163b ObjFunc
	var_74_string = "player_diary"; // 0x163d PushS
	var_75_int = 1; // 0x163e PushI
	SetVariable(var_74_string, var_75_int); // 0x163f Func
	GetCategory(var_65_int); // 0x1641 ObjFunc
	SetDiarySection(var_65_int); // 0x1643 Func
	var_57_bool = 0; // 0x1645 MovB
	return 6; // 0x1646 Return
}


func_5423(var_242_bool)
{
	var_244_int = 0; var_245_string = ""; // 0x1530 PushV
	var_245_string = "ood3Ospina4"; // 0x1531 MovS
	func_4795(var_244_int, var_245_string); // 0x1532 Call
	var_246_int = 0; // 0x1534 PushI
	var_247_bool = var_244_int == var_246_int; // 0x1535 Eq
	if(var_247_bool == 0) goto Label_5433; // 0x1536 JumpB
	var_242_bool = 1; // 0x1537 MovB
	return 0; // 0x1538 Return
	
Label_5433:
	var_242_bool = 0; // 0x1539 MovB
	return 0; // 0x153a Return
}


func_49(var_0_object, var_39_int, var_40_object)
{
	var_42_object = Obj(); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_object = Obj(); var_47_bool = 0; var_48_int = 0; var_49_bool = 0; // 0x31 PushV
	var_0_object = var_40_object; // 0x32 TMov
	var_50_bool = 0; var_51_object = Obj(); // 0x33 PushV
	var_51_object = var_40_object; // 0x34 Mov
	func_4700(var_51_object); // 0x35 Call
	var_90_bool = var_50_bool == 0; // 0x37 Not
	if(var_90_bool == 0) goto Label_59; // 0x38 JumpB
	var_39_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_46_object); // 0x3b Func
	var_91_int = 0; // 0x3d PushV
	func_4867(var_91_int); // 0x3e Call
	SetNPCName(var_91_int); // 0x40 ObjFunc
	var_92_string = ""; // 0x42 PushV
	func_4869(var_92_string); // 0x43 Call
	SetPhoto(var_92_string); // 0x45 ObjFunc
	var_93_int = 0; // 0x47 PushV
	func_5772(var_93_int); // 0x48 Call
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
	func_4756(); // 0x67 Call
	StopDialog(var_46_object); // 0x69 Func
	GetReturnValue(var_48_int); // 0x6b ObjFunc
	var_39_int = var_48_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_3379(var_2_object, var_41_string)
{
	var_42_bool = 0; // 0xd34 PushV
	func_4871(var_42_bool); // 0xd35 Call
	var_43_bool = var_42_bool == 0; // 0xd37 Not
	if(var_43_bool == 0) goto Label_3386; // 0xd38 JumpB
	return 0; // 0xd39 Return
	
Label_3386:
	var_44_bool = var_41_string == var_2_object; // 0xd3a Eq
	if(var_44_bool == 0) goto Label_3389; // 0xd3b JumpB
	return 0; // 0xd3c Return
	
Label_3389:
	var_45_string = ""; // 0xd3d PushV
	var_45_string = var_41_string; // 0xd3e Mov
	func_4760(var_45_string); // 0xd3f Call
	var_2_object = var_41_string; // 0xd41 TMov
	return 0; // 0xd42 Return
}


func_4918()
{
	var_124_string = "ood1Ospina4"; // 0x1337 PushS
	var_125_int = 1; // 0x1338 PushI
	SetVariable(var_124_string, var_125_int); // 0x1339 Func
	return 0; // 0x133b Return
}


func_5435(var_231_bool)
{
	var_233_int = 0; var_234_string = ""; // 0x153c PushV
	var_234_string = "d3q01"; // 0x153d MovS
	func_4795(var_233_int, var_234_string); // 0x153e Call
	var_235_int = 2; // 0x1540 PushI
	var_236_bool = var_233_int == var_235_int; // 0x1541 Eq
	if(var_236_bool == 0) goto Label_5445; // 0x1542 JumpB
	var_231_bool = 1; // 0x1543 MovB
	return 0; // 0x1544 Return
	
Label_5445:
	var_231_bool = 0; // 0x1545 MovB
	return 0; // 0x1546 Return
}


func_4924()
{
	var_134_string = "ood1Ospina5"; // 0x133d PushS
	var_135_int = 1; // 0x133e PushI
	SetVariable(var_134_string, var_135_int); // 0x133f Func
	return 0; // 0x1341 Return
}


func_4930()
{
	var_144_string = "ood1Ospina6"; // 0x1343 PushS
	var_145_int = 1; // 0x1344 PushI
	SetVariable(var_144_string, var_145_int); // 0x1345 Func
	return 0; // 0x1347 Return
}


func_5447(var_272_bool)
{
	var_274_int = 0; var_275_string = ""; // 0x1548 PushV
	var_275_string = "d3q01"; // 0x1549 MovS
	func_4795(var_274_int, var_275_string); // 0x154a Call
	var_276_int = 6; // 0x154c PushI
	var_277_bool = var_274_int == var_276_int; // 0x154d Eq
	if(var_277_bool == 0) goto Label_5457; // 0x154e JumpB
	var_272_bool = 1; // 0x154f MovB
	return 0; // 0x1550 Return
	
Label_5457:
	var_272_bool = 0; // 0x1551 MovB
	return 0; // 0x1552 Return
}


func_4936()
{
	var_147_string = "ood3Ospina1"; // 0x1349 PushS
	var_148_int = 1; // 0x134a PushI
	SetVariable(var_147_string, var_148_int); // 0x134b Func
	return 0; // 0x134d Return
}


func_5705(var_189_bool, var_190_int)
{
	var_191_object = Obj(); var_192_object = Obj(); var_193_object = Obj(); var_194_object = Obj(); // 0x1649 PushV
	var_195_object = Obj(); // 0x164a PushV
	func_5663(var_195_object); // 0x164b Call
	var_193_object = var_195_object; // 0x164c Mov
	Find(var_190_int, var_194_object); // 0x164e ObjFunc
	var_196_bool = var_194_object == 0; // 0x1650 Not
	if(var_196_bool == 0) goto Label_5716; // 0x1651 JumpB
	var_189_bool = 0; // 0x1652 MovB
	return 4; // 0x1653 Return
	
Label_5716:
	Remove(); // 0x1654 ObjFunc
	var_189_bool = 1; // 0x1656 MovB
	return 4; // 0x1657 Return
}


func_4683(var_36_bool)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; // 0x124b PushV
	GetPosition(var_42_cvector); // 0x124c ObjFunc
	GetPosition(var_43_cvector); // 0x124e Func
	var_44_cvector = var_42_cvector - var_43_cvector; // 0x1250 Sub2
	var_46_float = GetByIndex(var_44_cvector, 0); // 0x1251 PushE
	var_47_float = GetByIndex(var_44_cvector, 2); // 0x1252 PushE
	Rotate(var_46_float, var_47_float, var_45_bool); // 0x1253 Func
	var_36_bool = var_45_bool; // 0x1255 Mov
	return 8; // 0x1256 Return
}


func_4171(var_2_object, var_84_string)
{
	var_85_bool = 0; // 0x104c PushV
	func_4871(var_85_bool); // 0x104d Call
	var_86_bool = var_85_bool == 0; // 0x104f Not
	if(var_86_bool == 0) goto Label_4178; // 0x1050 JumpB
	return 0; // 0x1051 Return
	
Label_4178:
	var_87_bool = var_84_string == var_2_object; // 0x1052 Eq
	if(var_87_bool == 0) goto Label_4181; // 0x1053 JumpB
	return 0; // 0x1054 Return
	
Label_4181:
	var_88_string = ""; // 0x1055 PushV
	var_88_string = var_84_string; // 0x1056 Mov
	func_4760(var_88_string); // 0x1057 Call
	var_2_object = var_84_string; // 0x1059 TMov
	return 0; // 0x105a Return
}


func_4942()
{
	var_93_string = "ood3Ospina2"; // 0x134f PushS
	var_94_int = 1; // 0x1350 PushI
	SetVariable(var_93_string, var_94_int); // 0x1351 Func
	return 0; // 0x1353 Return
}


func_335(var_0_object, var_539_int, var_540_object)
{
	var_542_object = Obj(); var_543_bool = 0; var_544_int = 0; var_545_bool = 0; var_546_object = Obj(); var_547_bool = 0; var_548_int = 0; var_549_bool = 0; // 0x14f PushV
	var_0_object = var_540_object; // 0x150 TMov
	var_550_bool = 0; var_551_object = Obj(); // 0x151 PushV
	var_551_object = var_540_object; // 0x152 Mov
	func_4700(var_551_object); // 0x153 Call
	var_552_bool = var_550_bool == 0; // 0x155 Not
	if(var_552_bool == 0) goto Label_345; // 0x156 JumpB
	var_539_int = -2; // 0x157 MovI
	return 8; // 0x158 Return
	
Label_345:
	CreateDialog(var_546_object); // 0x159 Func
	var_553_int = 0; // 0x15b PushV
	func_4867(var_553_int); // 0x15c Call
	SetNPCName(var_553_int); // 0x15e ObjFunc
	var_554_string = ""; // 0x160 PushV
	func_4869(var_554_string); // 0x161 Call
	SetPhoto(var_554_string); // 0x163 ObjFunc
	var_555_int = 0; // 0x165 PushV
	func_5772(var_555_int); // 0x166 Call
	SetPlayerName(var_555_int); // 0x168 ObjFunc
	var_548_int = -1; // 0x16a MovI
	IsOverrideActive(var_547_bool); // 0x16b Func
	var_556_bool = var_547_bool; // 0x16d Push
	if(var_556_bool == 0) goto Label_369; // 0x16e JumpB
	var_539_int = -2; // 0x16f MovI
	return 8; // 0x170 Return
	
Label_369:
	DoDialog(var_546_object); // 0x171 Func
	var_557_object = Obj(); var_558_object = Obj(); // 0x173 PushV
	var_557_object = var_540_object; // 0x174 Mov
	var_558_object = var_546_object; // 0x175 Mov
	TaskCall(5); // 0x176 TaskCall
	func_398(var_559_object, var_560_object, var_561_string, var_562_bool, var_557_object, var_558_object); // 0x177 Call
	TaskReturn(); // 0x178 TaskReturn
	IsDialogEnd(var_549_bool); // 0x17a ObjFunc
	
Label_380:
	var_629_bool = var_549_bool == 0; // 0x17c Not
	if(var_629_bool == 0) goto Label_387; // 0x17d JumpB
	sync(); // 0x17e Func
	IsDialogEnd(var_549_bool); // 0x180 ObjFunc
	goto Label_380; // 0x182 Jump
	
Label_387:
	var_630_object = Obj(); // 0x183 PushV
	var_630_object = var_540_object; // 0x184 Mov
	func_4756(); // 0x185 Call
	StopDialog(var_546_object); // 0x187 Func
	GetReturnValue(var_548_int); // 0x189 ObjFunc
	var_539_int = var_548_int; // 0x18b Mov
	return 8; // 0x18c Return
}


func_5459(var_136_bool)
{
	var_138_int = 0; var_139_string = ""; // 0x1554 PushV
	var_139_string = "d4q01_subquest"; // 0x1555 MovS
	func_4795(var_138_int, var_139_string); // 0x1556 Call
	var_140_int = 1; // 0x1558 PushI
	var_141_bool = var_138_int == var_140_int; // 0x1559 Eq
	if(var_141_bool == 0) goto Label_5469; // 0x155a JumpB
	var_136_bool = 1; // 0x155b MovB
	return 0; // 0x155c Return
	
Label_5469:
	var_136_bool = 0; // 0x155d MovB
	return 0; // 0x155e Return
}


func_4948()
{
	var_169_string = "ood3Ospina3"; // 0x1355 PushS
	var_170_int = 1; // 0x1356 PushI
	SetVariable(var_169_string, var_170_int); // 0x1357 Func
	return 0; // 0x1359 Return
}


func_3670(var_2_object, var_111_string)
{
	var_112_bool = 0; // 0xe57 PushV
	func_4871(var_112_bool); // 0xe58 Call
	var_113_bool = var_112_bool == 0; // 0xe5a Not
	if(var_113_bool == 0) goto Label_3677; // 0xe5b JumpB
	return 0; // 0xe5c Return
	
Label_3677:
	var_114_bool = var_111_string == var_2_object; // 0xe5d Eq
	if(var_114_bool == 0) goto Label_3680; // 0xe5e JumpB
	return 0; // 0xe5f Return
	
Label_3680:
	var_115_string = ""; // 0xe60 PushV
	var_115_string = var_111_string; // 0xe61 Mov
	func_4760(var_115_string); // 0xe62 Call
	var_2_object = var_111_string; // 0xe64 TMov
	return 0; // 0xe65 Return
}


func_4695(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0x1257 PushV
	IsLoaded(var_38_bool); // 0x1258 Func
	var_36_bool = var_38_bool; // 0x125a Mov
	return 2; // 0x125b Return
}


func_2392(var_0_object, var_358_int, var_359_object)
{
	var_361_object = Obj(); var_362_bool = 0; var_363_int = 0; var_364_bool = 0; var_365_object = Obj(); var_366_bool = 0; var_367_int = 0; var_368_bool = 0; // 0x958 PushV
	var_0_object = var_359_object; // 0x959 TMov
	var_369_bool = 0; var_370_object = Obj(); // 0x95a PushV
	var_370_object = var_359_object; // 0x95b Mov
	func_4700(var_370_object); // 0x95c Call
	var_371_bool = var_369_bool == 0; // 0x95e Not
	if(var_371_bool == 0) goto Label_2402; // 0x95f JumpB
	var_358_int = -2; // 0x960 MovI
	return 8; // 0x961 Return
	
Label_2402:
	CreateDialog(var_365_object); // 0x962 Func
	var_372_int = 0; // 0x964 PushV
	func_4867(var_372_int); // 0x965 Call
	SetNPCName(var_372_int); // 0x967 ObjFunc
	var_373_string = ""; // 0x969 PushV
	func_4869(var_373_string); // 0x96a Call
	SetPhoto(var_373_string); // 0x96c ObjFunc
	var_374_int = 0; // 0x96e PushV
	func_5772(var_374_int); // 0x96f Call
	SetPlayerName(var_374_int); // 0x971 ObjFunc
	var_367_int = -1; // 0x973 MovI
	IsOverrideActive(var_366_bool); // 0x974 Func
	var_375_bool = var_366_bool; // 0x976 Push
	if(var_375_bool == 0) goto Label_2426; // 0x977 JumpB
	var_358_int = -2; // 0x978 MovI
	return 8; // 0x979 Return
	
Label_2426:
	DoDialog(var_365_object); // 0x97a Func
	var_376_object = Obj(); var_377_object = Obj(); // 0x97c PushV
	var_376_object = var_359_object; // 0x97d Mov
	var_377_object = var_365_object; // 0x97e Mov
	TaskCall(9); // 0x97f TaskCall
	func_2455(var_378_object, var_379_object, var_380_string, var_381_bool, var_376_object, var_377_object); // 0x980 Call
	TaskReturn(); // 0x981 TaskReturn
	IsDialogEnd(var_368_bool); // 0x983 ObjFunc
	
Label_2437:
	var_457_bool = var_368_bool == 0; // 0x985 Not
	if(var_457_bool == 0) goto Label_2444; // 0x986 JumpB
	sync(); // 0x987 Func
	IsDialogEnd(var_368_bool); // 0x989 ObjFunc
	goto Label_2437; // 0x98b Jump
	
Label_2444:
	var_458_object = Obj(); // 0x98c PushV
	var_458_object = var_359_object; // 0x98d Mov
	func_4756(); // 0x98e Call
	StopDialog(var_365_object); // 0x990 Func
	GetReturnValue(var_367_int); // 0x992 ObjFunc
	var_358_int = var_367_int; // 0x994 Mov
	return 8; // 0x995 Return
}


func_5722(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); // 0x165a PushV
	GetMainOutdoorScene(var_54_object); // 0x165b Func
	var_56_bool = var_54_object == 0; // 0x165d NullEq
	if(var_56_bool == 0) goto Label_5733; // 0x165e JumpB
	var_57_string = "Can't find main outdoor scene"; // 0x165f PushS
	Trace(var_57_string); // 0x1660 Func
	var_55_object = 0; // 0x1662 SetNull
	var_51_object = var_55_object; // 0x1663 Mov
	return 4; // 0x1664 Return
	
Label_5733:
	GetMap(var_55_object); // 0x1665 ObjFunc
	var_51_object = var_55_object; // 0x1667 Mov
	return 4; // 0x1668 Return
}


func_4954()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x135a PushV
	var_45_string = "d3q01"; // 0x135b PushS
	var_46_int = 3; // 0x135c PushI
	SetVariable(var_45_string, var_46_int); // 0x135d Func
	var_47_object = Obj(); // 0x135f PushV
	func_5722(var_47_object); // 0x1360 Call
	var_44_object = var_47_object; // 0x1361 Mov
	var_54_string = "d3q01OspinaGotoBigVlad"; // 0x1363 PushS
	var_55_string = "pt_map_bigvlad"; // 0x1364 PushS
	var_56_int = 1; // 0x1365 PushI
	var_57_int = 11152; // 0x1366 PushI
	var_58_float = 0; // 0x1367 PushV
	func_4838(var_58_float); // 0x1368 Call
	AddMark(var_54_string, var_55_string, var_56_int, var_57_int, var_58_float); // 0x136a ObjFunc
	var_61_string = "d3q01OspinaGotoBigVladSelf"; // 0x136c PushS
	var_62_string = "pt_map_ospina"; // 0x136d PushS
	var_63_int = 1; // 0x136e PushI
	var_64_int = 15296; // 0x136f PushI
	var_65_float = 0; // 0x1370 PushV
	func_4838(var_65_float); // 0x1371 Call
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0x1373 ObjFunc
	func_5805(); // 0x1376 Call
	return 2; // 0x1378 Return
}


func_4700(var_50_bool)
{
	var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; // 0x125c PushV
	GetPosition(var_61_cvector); // 0x125d ObjFunc
	GetEyesHeight(var_60_float); // 0x125f ObjFunc
	var_68_float = GetByIndex(var_61_cvector, 1); // 0x1261 PushE
	var_68_float = var_68_float + var_60_float; // 0x1262 Add2
	SetByIndex(var_61_cvector, 1) = var_68_float; // 0x1263 PopE
	GetPosition(var_62_cvector); // 0x1264 Func
	GetEyesHeight(var_60_float); // 0x1266 Func
	var_69_float = GetByIndex(var_62_cvector, 1); // 0x1268 PushE
	var_69_float = var_69_float + var_60_float; // 0x1269 Add2
	SetByIndex(var_62_cvector, 1) = var_69_float; // 0x126a PopE
	var_63_cvector = var_61_cvector - var_62_cvector; // 0x126b Sub2
	var_70_float = GetByIndex(var_63_cvector, 1); // 0x126c PushE
	var_70_float = 0; // 0x126d MovI
	SetByIndex(var_63_cvector, 1) = var_70_float; // 0x126e PopE
	var_71_int = var_63_cvector | var_63_cvector; // 0x126f Or
	var_72_float = sqrt(var_71_int); // 0x1270 Sqrt
	var_63_cvector = var_63_cvector / var_63_cvector; // 0x1271 Div2
	var_64_cvector = -var_63_cvector; // 0x1272 Neg2
	var_73_int = 70; // 0x1273 PushI
	var_74_float = var_63_cvector * var_73_int; // 0x1274 Mult
	var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); // 0x1275 PushV
	var_77_cvector = CVector(0.0, 1.0, 0.0); // 0x1276 PushVec
	var_76_cvector = var_64_cvector ^ var_77_cvector; // 0x1277 Xor2
	func_4785(var_75_cvector, var_76_cvector); // 0x1278 Call
	var_83_int = 25; // 0x127a PushI
	var_84_float = var_75_cvector * var_83_int; // 0x127b Mult
	var_85_int = var_74_float + var_84_float; // 0x127c Add
	var_86_cvector = CVector(0.0, 10.0, 0.0); // 0x127d PushVec
	var_65_cvector = var_85_int - var_86_cvector; // 0x127e Sub2
	var_66_cvector = var_62_cvector + var_65_cvector; // 0x127f Add2
	IsOverrideActive(var_67_bool); // 0x1280 Func
	var_87_bool = var_67_bool; // 0x1282 Push
	if(var_87_bool == 0) goto Label_4742; // 0x1283 JumpB
	var_50_bool = 0; // 0x1284 MovB
	return 16; // 0x1285 Return
	
Label_4742:
	StopWorld(); // 0x1286 Func
	CameraTransit(var_66_cvector, var_64_cvector); // 0x1288 Func
	var_88_float = GetByIndex(var_65_cvector, 0); // 0x128a PushE
	var_89_float = GetByIndex(var_65_cvector, 2); // 0x128b PushE
	Rotate(var_88_float, var_89_float); // 0x128c Func
	CameraWaitForPlayFinish(); // 0x128e Func
	ResumeWorld(); // 0x1290 Func
	var_50_bool = 1; // 0x1292 MovB
	return 16; // 0x1293 Return
}


func_1119(var_0_object, var_1_object, var_2_object, var_3_object, var_175_object, var_176_object)
{
	var_0_object = var_176_object; // 0x460 TMov
	var_1_object = var_175_object; // 0x461 TMov
	var_3_object = 0; // 0x462 TMovB
	var_181_int = 1; // 0x463 PushI
	if(var_181_int == 0) goto Label_1280; // 0x464 JumpB
	var_182_bool = 0; // 0x465 PushV
	var_182_bool = 0; // 0x466 MovB
	var_183_bool = 0; var_184_object = Obj(); // 0x467 PushV
	var_184_object = var_1_object; // 0x468 MovT
	func_5291(var_184_object); // 0x469 Call
	if(var_183_bool == 0) goto Label_1138; // 0x46b JumpB
	var_191_bool = 0; var_192_object = Obj(); // 0x46c PushV
	var_192_object = var_1_object; // 0x46d MovT
	func_5339(var_192_object); // 0x46e Call
	if(var_191_bool == 0) goto Label_1138; // 0x470 JumpB
	var_182_bool = 1; // 0x471 MovB
	
Label_1138:
	if(var_182_bool == 0) goto Label_1159; // 0x472 JumpB
	var_197_string = ""; // 0x473 PushV
	var_197_string = "Neutral"; // 0x474 MovS
	func_1310(var_176_object, var_197_string); // 0x475 Call
	var_202_int = 5721; // 0x477 PushI
	SetMessage(var_202_int); // 0x478 TObjFunc
	ClearReplies(); // 0x47a TObjFunc
	var_203_int = 5722; // 0x47c PushI
	var_204_int = 6334; // 0x47d PushI
	var_205_int = 6306; // 0x47e PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x47f TObjFunc
	var_206_int = 6003; // 0x481 PushI
	var_207_int = 6615; // 0x482 PushI
	var_208_int = 6614; // 0x483 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x484 TObjFunc
	goto Label_1280; // 0x486 Jump
	
Label_1280:
	var_209_bool = 0; // 0x500 PushV
	func_4871(var_209_bool); // 0x501 Call
	if(var_209_bool == 0) goto Label_1295; // 0x503 JumpB
	
Label_1284:
	lshWaitForAnimEnd(); // 0x504 Func
	var_210_object = var_3_object; // 0x506 PushT
	if(var_210_object == 0) goto Label_1289; // 0x507 JumpB
	goto Label_1294; // 0x508 Jump
	
Label_1294:
	goto Label_1309; // 0x50e Jump
	
Label_1309:
	return 0; // 0x51d Return
	
Label_1289:
	var_211_string = ""; // 0x509 PushV
	var_211_string = var_2_object; // 0x50a MovT
	func_4760(var_211_string); // 0x50b Call
	goto Label_1284; // 0x50d Jump
	
Label_1295:
	var_212_string = "all"; // 0x50f PushS
	var_213_string = "idle"; // 0x510 PushS
	PlayAnimation(var_212_string, var_213_string); // 0x511 Func
	
Label_1299:
	WaitForAnimEnd(); // 0x513 Func
	var_214_object = var_3_object; // 0x515 PushT
	if(var_214_object == 0) goto Label_1304; // 0x516 JumpB
	goto Label_1309; // 0x517 Jump
	
Label_1304:
	var_215_string = "all"; // 0x518 PushS
	var_216_string = "idle"; // 0x519 PushS
	PlayAnimation(var_215_string, var_216_string); // 0x51a Func
	goto Label_1299; // 0x51c Jump
	
Label_1159:
	var_217_string = ""; // 0x487 PushV
	var_217_string = "Neutral"; // 0x488 MovS
	func_1310(var_176_object, var_217_string); // 0x489 Call
	var_218_int = 8287; // 0x48b PushI
	SetMessage(var_218_int); // 0x48c TObjFunc
	ClearReplies(); // 0x48e TObjFunc
	var_219_bool = 0; // 0x490 PushV
	var_219_bool = 0; // 0x491 MovB
	var_220_bool = 0; var_221_object = Obj(); // 0x492 PushV
	var_221_object = var_1_object; // 0x493 MovT
	func_5303(var_221_object); // 0x494 Call
	if(var_220_bool == 0) goto Label_1181; // 0x496 JumpB
	var_226_bool = 0; var_227_object = Obj(); // 0x497 PushV
	var_227_object = var_1_object; // 0x498 MovT
	func_5327(var_227_object); // 0x499 Call
	if(var_226_bool == 0) goto Label_1181; // 0x49b JumpB
	var_219_bool = 1; // 0x49c MovB
	
Label_1181:
	if(var_219_bool == 0) goto Label_1187; // 0x49d JumpB
	var_232_int = 8288; // 0x49e PushI
	var_233_int = 6307; // 0x49f PushI
	var_234_int = 9111; // 0x4a0 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x4a1 TObjFunc
	
Label_1187:
	var_235_bool = 0; var_236_object = Obj(); // 0x4a3 PushV
	var_236_object = var_1_object; // 0x4a4 MovT
	func_5315(var_236_object); // 0x4a5 Call
	if(var_235_bool == 0) goto Label_1197; // 0x4a7 JumpB
	var_241_int = 8291; // 0x4a8 PushI
	var_242_int = 6322; // 0x4a9 PushI
	var_243_int = 9114; // 0x4aa PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x4ab TObjFunc
	
Label_1197:
	var_244_bool = 0; // 0x4ad PushV
	var_244_bool = 0; // 0x4ae MovB
	var_245_bool = 0; var_246_object = Obj(); // 0x4af PushV
	var_246_object = var_1_object; // 0x4b0 MovT
	func_5627(var_246_object); // 0x4b1 Call
	if(var_245_bool == 0) goto Label_1210; // 0x4b3 JumpB
	var_251_bool = 0; var_252_object = Obj(); // 0x4b4 PushV
	var_252_object = var_1_object; // 0x4b5 MovT
	func_5351(var_252_object); // 0x4b6 Call
	if(var_251_bool == 0) goto Label_1210; // 0x4b8 JumpB
	var_244_bool = 1; // 0x4b9 MovB
	
Label_1210:
	if(var_244_bool == 0) goto Label_1216; // 0x4ba JumpB
	var_257_int = 8299; // 0x4bb PushI
	var_258_int = 9137; // 0x4bc PushI
	var_259_int = 9122; // 0x4bd PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x4be TObjFunc
	
Label_1216:
	var_260_bool = 0; // 0x4c0 PushV
	var_260_bool = 1; // 0x4c1 MovB
	var_261_bool = 0; // 0x4c2 PushV
	var_261_bool = 0; // 0x4c3 MovB
	var_262_bool = 0; var_263_object = Obj(); // 0x4c4 PushV
	var_263_object = var_1_object; // 0x4c5 MovT
	func_5651(var_263_object); // 0x4c6 Call
	if(var_262_bool == 0) goto Label_1231; // 0x4c8 JumpB
	var_268_bool = 0; var_269_object = Obj(); // 0x4c9 PushV
	var_269_object = var_1_object; // 0x4ca MovT
	func_5363(var_269_object); // 0x4cb Call
	if(var_268_bool == 0) goto Label_1231; // 0x4cd JumpB
	var_261_bool = 1; // 0x4ce MovB
	
Label_1231:
	if(var_261_bool == 0) goto Label_1247; // 0x4cf JumpB
	var_274_bool = 0; // 0x4d0 PushV
	var_274_bool = 0; // 0x4d1 MovB
	var_275_bool = 0; var_276_object = Obj(); // 0x4d2 PushV
	var_276_object = var_1_object; // 0x4d3 MovT
	func_5615(var_276_object); // 0x4d4 Call
	if(var_275_bool == 0) goto Label_1245; // 0x4d6 JumpB
	var_281_bool = 0; var_282_object = Obj(); // 0x4d7 PushV
	var_282_object = var_1_object; // 0x4d8 MovT
	func_5363(var_282_object); // 0x4d9 Call
	if(var_281_bool == 0) goto Label_1245; // 0x4db JumpB
	var_274_bool = 1; // 0x4dc MovB
	
Label_1245:
	if(var_274_bool == 0) goto Label_1247; // 0x4dd JumpB
	var_260_bool = 0; // 0x4de MovB
	
Label_1247:
	if(var_260_bool == 0) goto Label_1253; // 0x4df JumpB
	var_283_int = 8302; // 0x4e0 PushI
	var_284_int = 9457; // 0x4e1 PushI
	var_285_int = 9125; // 0x4e2 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x4e3 TObjFunc
	
Label_1253:
	var_286_bool = 0; // 0x4e5 PushV
	var_286_bool = 0; // 0x4e6 MovB
	var_287_bool = 0; var_288_object = Obj(); // 0x4e7 PushV
	var_288_object = var_1_object; // 0x4e8 MovT
	func_5639(var_288_object); // 0x4e9 Call
	if(var_287_bool == 0) goto Label_1266; // 0x4eb JumpB
	var_293_bool = 0; var_294_object = Obj(); // 0x4ec PushV
	var_294_object = var_1_object; // 0x4ed MovT
	func_5375(var_294_object); // 0x4ee Call
	if(var_293_bool == 0) goto Label_1266; // 0x4f0 JumpB
	var_286_bool = 1; // 0x4f1 MovB
	
Label_1266:
	if(var_286_bool == 0) goto Label_1272; // 0x4f2 JumpB
	var_299_int = 8310; // 0x4f3 PushI
	var_300_int = 9140; // 0x4f4 PushI
	var_301_int = 9133; // 0x4f5 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x4f6 TObjFunc
	
Label_1272:
	var_302_int = 8723; // 0x4f8 PushI
	var_303_int = -1; // 0x4f9 PushI
	var_304_int = 9560; // 0x4fa PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x4fb TObjFunc
	goto Label_1280; // 0x4fd Jump
}


func_5471(var_128_bool)
{
	var_130_int = 0; var_131_string = ""; // 0x1560 PushV
	var_131_string = "ood4Ospina1"; // 0x1561 MovS
	func_4795(var_130_int, var_131_string); // 0x1562 Call
	var_134_int = 0; // 0x1564 PushI
	var_135_bool = var_130_int == var_134_int; // 0x1565 Eq
	if(var_135_bool == 0) goto Label_5481; // 0x1566 JumpB
	var_128_bool = 1; // 0x1567 MovB
	return 0; // 0x1568 Return
	
Label_5481:
	var_128_bool = 0; // 0x1569 MovB
	return 0; // 0x156a Return
}


func_5739(var_67_object, var_68_string, var_69_float)
{
	var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_object = Obj(); var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_object = Obj(); var_78_bool = 0; // 0x166b PushV
	GetMainOutdoorScene(var_77_object); // 0x166c Func
	var_79_bool = var_77_object == 0; // 0x166e NullEq
	if(var_79_bool == 0) goto Label_5748; // 0x166f JumpB
	var_80_string = "Can't find main outdoor scene"; // 0x1670 PushS
	Trace(var_80_string); // 0x1671 Func
	return 8; // 0x1673 Return
	
Label_5748:
	GetLocator(var_68_string, var_78_bool, var_75_cvector, var_76_cvector); // 0x1674 ObjFunc
	var_81_bool = var_78_bool == 0; // 0x1676 Not
	if(var_81_bool == 0) goto Label_5758; // 0x1677 JumpB
	var_82_string = "Warning: outdoor scene locator "; // 0x1678 PushS
	var_83_int = var_82_string + var_68_string; // 0x1679 Add
	var_84_string = " doesnt exist"; // 0x167a PushS
	var_85_int = var_83_int + var_84_string; // 0x167b Add
	Trace(var_85_int); // 0x167c Func
	
Label_5758:
	GetMap(var_67_object); // 0x167e ObjFunc
	var_86_bool = var_67_object == 0; // 0x1680 NullEq
	if(var_86_bool == 0) goto Label_5766; // 0x1681 JumpB
	var_87_string = "Can't find map"; // 0x1682 PushS
	Trace(var_87_string); // 0x1683 Func
	return 8; // 0x1685 Return
	
Label_5766:
	var_88_float = GetByIndex(var_75_cvector, 0); // 0x1686 PushE
	var_89_float = GetByIndex(var_75_cvector, 2); // 0x1687 PushE
	SetMapParams(var_88_float, var_89_float, var_69_float); // 0x1688 ObjFunc
	return 8; // 0x168a Return
}


func_5483(var_152_bool)
{
	var_154_int = 0; var_155_string = ""; // 0x156c PushV
	var_155_string = "d4q01_subquest"; // 0x156d MovS
	func_4795(var_154_int, var_155_string); // 0x156e Call
	var_156_int = 3; // 0x1570 PushI
	var_157_bool = var_154_int == var_156_int; // 0x1571 Eq
	if(var_157_bool == 0) goto Label_5493; // 0x1572 JumpB
	var_152_bool = 1; // 0x1573 MovB
	return 0; // 0x1574 Return
	
Label_5493:
	var_152_bool = 0; // 0x1575 MovB
	return 0; // 0x1576 Return
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
	func_5285(); // 0x79 Call
	var_113_string = ""; // 0x7b PushV
	var_113_string = "Neutral"; // 0x7c MovS
	func_180(var_103_object, var_113_string); // 0x7d Call
	var_128_int = 309; // 0x7f PushI
	SetMessage(var_128_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_129_int = 311; // 0x84 PushI
	var_130_int = 370; // 0x85 PushI
	var_131_int = 364; // 0x86 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x87 TObjFunc
	var_132_int = 312; // 0x89 PushI
	var_133_int = 366; // 0x8a PushI
	var_134_int = 365; // 0x8b PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x8c TObjFunc
	var_135_int = 310; // 0x8e PushI
	var_136_int = 369; // 0x8f PushI
	var_137_int = 363; // 0x90 PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
	
Label_150:
	var_138_bool = 0; // 0x96 PushV
	func_4871(var_138_bool); // 0x97 Call
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
	func_4760(var_140_string); // 0xa1 Call
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


func_5495(var_146_bool)
{
	var_148_int = 0; var_149_string = ""; // 0x1578 PushV
	var_149_string = "ood4Ospina2"; // 0x1579 MovS
	func_4795(var_148_int, var_149_string); // 0x157a Call
	var_150_int = 0; // 0x157c PushI
	var_151_bool = var_148_int == var_150_int; // 0x157d Eq
	if(var_151_bool == 0) goto Label_5505; // 0x157e JumpB
	var_146_bool = 1; // 0x157f MovB
	return 0; // 0x1580 Return
	
Label_5505:
	var_146_bool = 0; // 0x1581 MovB
	return 0; // 0x1582 Return
}


func_4986()
{
	var_139_string = "ood3Ospina4"; // 0x137b PushS
	var_140_int = 1; // 0x137c PushI
	SetVariable(var_139_string, var_140_int); // 0x137d Func
	return 0; // 0x137f Return
}


func_4992()
{
	var_173_object = Obj(); var_174_object = Obj(); // 0x1380 PushV
	var_175_string = "d3q01"; // 0x1381 PushS
	var_176_int = 7; // 0x1382 PushI
	SetVariable(var_175_string, var_176_int); // 0x1383 Func
	var_177_object = Obj(); // 0x1385 PushV
	func_5722(var_177_object); // 0x1386 Call
	var_174_object = var_177_object; // 0x1387 Mov
	var_178_string = "d3q01OspinaButchersWillHelpSelf"; // 0x1389 PushS
	var_179_string = "pt_map_ospina"; // 0x138a PushS
	var_180_int = 1; // 0x138b PushI
	var_181_int = 15301; // 0x138c PushI
	var_182_float = 0; // 0x138d PushV
	func_4838(var_182_float); // 0x138e Call
	AddMark(var_178_string, var_179_string, var_180_int, var_181_int, var_182_float); // 0x1390 ObjFunc
	func_5789(); // 0x1393 Call
	var_192_bool = 0; var_193_string = ""; var_194_string = ""; // 0x1395 PushV
	var_193_string = "quest_d3_01"; // 0x1396 MovS
	var_194_string = "place_butchers"; // 0x1397 MovS
	func_4826(var_192_bool, var_193_string, var_194_string); // 0x1398 Call
	return 2; // 0x139a Return
}


func_5507(var_244_bool)
{
	var_246_int = 0; var_247_string = ""; // 0x1584 PushV
	var_247_string = "d6q01"; // 0x1585 MovS
	func_4795(var_246_int, var_247_string); // 0x1586 Call
	var_248_int = 1; // 0x1588 PushI
	var_249_bool = var_246_int == var_248_int; // 0x1589 Eq
	if(var_249_bool == 0) goto Label_5517; // 0x158a JumpB
	var_244_bool = 1; // 0x158b MovB
	return 0; // 0x158c Return
	
Label_5517:
	var_244_bool = 0; // 0x158d MovB
	return 0; // 0x158e Return
}


func_5772(var_93_int)
{
	var_94_int = 0; var_95_int = 0; // 0x168c PushV
	var_96_string = "player"; // 0x168d PushS
	GetVariable(var_96_string, var_95_int); // 0x168e Func
	var_97_int = 0; // 0x1690 PushI
	var_98_bool = var_95_int == var_97_int; // 0x1691 Eq
	if(var_98_bool == 0) goto Label_5782; // 0x1692 JumpB
	var_93_int = 200001; // 0x1693 MovI
	return 2; // 0x1694 Return
	
Label_5782:
	var_99_int = 1; // 0x1696 PushI
	var_100_bool = var_95_int == var_99_int; // 0x1697 Eq
	if(var_100_bool == 0) goto Label_5787; // 0x1698 JumpB
	var_93_int = 200002; // 0x1699 MovI
	return 2; // 0x169a Return
	
Label_5787:
	var_93_int = 200003; // 0x169b MovI
	return 2; // 0x169c Return
}


func_398(var_0_object, var_1_object, var_2_object, var_3_object, var_557_object, var_558_object)
{
	var_0_object = var_558_object; // 0x18f TMov
	var_1_object = var_557_object; // 0x190 TMov
	var_3_object = 0; // 0x191 TMovB
	var_563_int = 1; // 0x192 PushI
	if(var_563_int == 0) goto Label_479; // 0x193 JumpB
	var_564_string = ""; // 0x194 PushV
	var_564_string = "Neutral"; // 0x195 MovS
	func_509(var_558_object, var_564_string); // 0x196 Call
	var_569_int = 12729; // 0x198 PushI
	SetMessage(var_569_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_570_bool = 0; // 0x19d PushV
	var_570_bool = 0; // 0x19e MovB
	var_571_bool = 0; var_572_object = Obj(); // 0x19f PushV
	var_572_object = var_1_object; // 0x1a0 MovT
	func_5519(var_572_object); // 0x1a1 Call
	if(var_571_bool == 0) goto Label_426; // 0x1a3 JumpB
	var_577_bool = 0; var_578_object = Obj(); // 0x1a4 PushV
	var_578_object = var_1_object; // 0x1a5 MovT
	func_5507(var_578_object); // 0x1a6 Call
	if(var_577_bool == 0) goto Label_426; // 0x1a8 JumpB
	var_570_bool = 1; // 0x1a9 MovB
	
Label_426:
	if(var_570_bool == 0) goto Label_432; // 0x1aa JumpB
	var_583_int = 12731; // 0x1ab PushI
	var_584_int = 3851; // 0x1ac PushI
	var_585_int = 13924; // 0x1ad PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x1ae TObjFunc
	
Label_432:
	var_586_bool = 0; // 0x1b0 PushV
	var_586_bool = 0; // 0x1b1 MovB
	var_587_bool = 0; // 0x1b2 PushV
	var_587_bool = 0; // 0x1b3 MovB
	var_588_bool = 0; // 0x1b4 PushV
	var_588_bool = 0; // 0x1b5 MovB
	var_589_bool = 0; var_590_object = Obj(); // 0x1b6 PushV
	var_590_object = var_1_object; // 0x1b7 MovT
	func_5531(var_590_object); // 0x1b8 Call
	if(var_589_bool == 0) goto Label_449; // 0x1ba JumpB
	var_595_bool = 0; var_596_object = Obj(); // 0x1bb PushV
	var_596_object = var_1_object; // 0x1bc MovT
	func_5579(var_596_object); // 0x1bd Call
	if(var_595_bool == 0) goto Label_449; // 0x1bf JumpB
	var_588_bool = 1; // 0x1c0 MovB
	
Label_449:
	if(var_588_bool == 0) goto Label_457; // 0x1c1 JumpB
	var_601_bool = 0; var_602_object = Obj(); // 0x1c2 PushV
	var_602_object = var_1_object; // 0x1c3 MovT
	func_5591(var_602_object); // 0x1c4 Call
	var_607_bool = var_601_bool == 0; // 0x1c6 Not
	if(var_607_bool == 0) goto Label_457; // 0x1c7 JumpB
	var_587_bool = 1; // 0x1c8 MovB
	
Label_457:
	if(var_587_bool == 0) goto Label_465; // 0x1c9 JumpB
	var_608_bool = 0; var_609_object = Obj(); // 0x1ca PushV
	var_609_object = var_1_object; // 0x1cb MovT
	func_5603(var_609_object); // 0x1cc Call
	var_614_bool = var_608_bool == 0; // 0x1ce Not
	if(var_614_bool == 0) goto Label_465; // 0x1cf JumpB
	var_586_bool = 1; // 0x1d0 MovB
	
Label_465:
	if(var_586_bool == 0) goto Label_471; // 0x1d1 JumpB
	var_615_int = 12730; // 0x1d2 PushI
	var_616_int = 11927; // 0x1d3 PushI
	var_617_int = 13923; // 0x1d4 PushI
	AddReply(var_615_int, var_616_int, var_617_int); // 0x1d5 TObjFunc
	
Label_471:
	var_618_int = 12732; // 0x1d7 PushI
	var_619_int = -1; // 0x1d8 PushI
	var_620_int = 13926; // 0x1d9 PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0x1da TObjFunc
	goto Label_479; // 0x1dc Jump
	
Label_479:
	var_621_bool = 0; // 0x1df PushV
	func_4871(var_621_bool); // 0x1e0 Call
	if(var_621_bool == 0) goto Label_494; // 0x1e2 JumpB
	
Label_483:
	lshWaitForAnimEnd(); // 0x1e3 Func
	var_622_object = var_3_object; // 0x1e5 PushT
	if(var_622_object == 0) goto Label_488; // 0x1e6 JumpB
	goto Label_493; // 0x1e7 Jump
	
Label_493:
	goto Label_508; // 0x1ed Jump
	
Label_508:
	return 0; // 0x1fc Return
	
Label_488:
	var_623_string = ""; // 0x1e8 PushV
	var_623_string = var_2_object; // 0x1e9 MovT
	func_4760(var_623_string); // 0x1ea Call
	goto Label_483; // 0x1ec Jump
	
Label_494:
	var_624_string = "all"; // 0x1ee PushS
	var_625_string = "idle"; // 0x1ef PushS
	PlayAnimation(var_624_string, var_625_string); // 0x1f0 Func
	
Label_498:
	WaitForAnimEnd(); // 0x1f2 Func
	var_626_object = var_3_object; // 0x1f4 PushT
	if(var_626_object == 0) goto Label_503; // 0x1f5 JumpB
	goto Label_508; // 0x1f6 Jump
	
Label_503:
	var_627_string = "all"; // 0x1f7 PushS
	var_628_string = "idle"; // 0x1f8 PushS
	PlayAnimation(var_627_string, var_628_string); // 0x1f9 Func
	goto Label_498; // 0x1fb Jump
}


func_5519(var_236_bool)
{
	var_238_int = 0; var_239_string = ""; // 0x1590 PushV
	var_239_string = "ood6Ospina1"; // 0x1591 MovS
	func_4795(var_238_int, var_239_string); // 0x1592 Call
	var_242_int = 0; // 0x1594 PushI
	var_243_bool = var_238_int == var_242_int; // 0x1595 Eq
	if(var_243_bool == 0) goto Label_5529; // 0x1596 JumpB
	var_236_bool = 1; // 0x1597 MovB
	return 0; // 0x1598 Return
	
Label_5529:
	var_236_bool = 0; // 0x1599 MovB
	return 0; // 0x159a Return
}


func_5117()
{
	var_43_string = "ood8Ospina2"; // 0x13fe PushS
	var_44_int = 1; // 0x13ff PushI
	SetVariable(var_43_string, var_44_int); // 0x1400 Func
	return 0; // 0x1402 Return
}


func_4756()
{
	CameraSwitchToNormal(); // 0x1295 Func
	return 0; // 0x1297 Return
}


func_2455(var_0_object, var_1_object, var_2_object, var_3_object, var_376_object, var_377_object)
{
	var_0_object = var_377_object; // 0x998 TMov
	var_1_object = var_376_object; // 0x999 TMov
	var_3_object = 0; // 0x99a TMovB
	var_382_int = 1; // 0x99b PushI
	if(var_382_int == 0) goto Label_2555; // 0x99c JumpB
	var_383_string = ""; // 0x99d PushV
	var_383_string = "Neutral"; // 0x99e MovS
	func_2585(var_377_object, var_383_string); // 0x99f Call
	var_388_int = 8869; // 0x9a1 PushI
	SetMessage(var_388_int); // 0x9a2 TObjFunc
	ClearReplies(); // 0x9a4 TObjFunc
	var_389_bool = 0; // 0x9a6 PushV
	var_389_bool = 0; // 0x9a7 MovB
	var_390_bool = 0; var_391_object = Obj(); // 0x9a8 PushV
	var_391_object = var_1_object; // 0x9a9 MovT
	func_5399(var_391_object); // 0x9aa Call
	if(var_390_bool == 0) goto Label_2483; // 0x9ac JumpB
	var_396_bool = 0; var_397_object = Obj(); // 0x9ad PushV
	var_397_object = var_1_object; // 0x9ae MovT
	func_5435(var_397_object); // 0x9af Call
	if(var_396_bool == 0) goto Label_2483; // 0x9b1 JumpB
	var_389_bool = 1; // 0x9b2 MovB
	
Label_2483:
	if(var_389_bool == 0) goto Label_2489; // 0x9b3 JumpB
	var_402_int = 8889; // 0x9b4 PushI
	var_403_int = 9751; // 0x9b5 PushI
	var_404_int = 9750; // 0x9b6 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x9b7 TObjFunc
	
Label_2489:
	var_405_bool = 0; // 0x9b9 PushV
	var_405_bool = 0; // 0x9ba MovB
	var_406_bool = 0; // 0x9bb PushV
	var_406_bool = 0; // 0x9bc MovB
	var_407_bool = 0; var_408_object = Obj(); // 0x9bd PushV
	var_408_object = var_1_object; // 0x9be MovT
	func_5423(var_408_object); // 0x9bf Call
	if(var_407_bool == 0) goto Label_2505; // 0x9c1 JumpB
	var_413_bool = 0; var_414_object = Obj(); // 0x9c2 PushV
	var_414_object = var_1_object; // 0x9c3 MovT
	func_5399(var_414_object); // 0x9c4 Call
	var_415_bool = var_413_bool == 0; // 0x9c6 Not
	if(var_415_bool == 0) goto Label_2505; // 0x9c7 JumpB
	var_406_bool = 1; // 0x9c8 MovB
	
Label_2505:
	if(var_406_bool == 0) goto Label_2512; // 0x9c9 JumpB
	var_416_bool = 0; var_417_object = Obj(); // 0x9ca PushV
	var_417_object = var_1_object; // 0x9cb MovT
	func_5435(var_417_object); // 0x9cc Call
	if(var_416_bool == 0) goto Label_2512; // 0x9ce JumpB
	var_405_bool = 1; // 0x9cf MovB
	
Label_2512:
	if(var_405_bool == 0) goto Label_2518; // 0x9d0 JumpB
	var_418_int = 11136; // 0x9d1 PushI
	var_419_int = 12326; // 0x9d2 PushI
	var_420_int = 12325; // 0x9d3 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x9d4 TObjFunc
	
Label_2518:
	var_421_bool = 0; var_422_object = Obj(); // 0x9d6 PushV
	var_422_object = var_1_object; // 0x9d7 MovT
	func_5387(var_422_object); // 0x9d8 Call
	if(var_421_bool == 0) goto Label_2528; // 0x9da JumpB
	var_427_int = 8888; // 0x9db PushI
	var_428_int = 9729; // 0x9dc PushI
	var_429_int = 9749; // 0x9dd PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x9de TObjFunc
	
Label_2528:
	var_430_bool = 0; // 0x9e0 PushV
	var_430_bool = 0; // 0x9e1 MovB
	var_431_bool = 0; var_432_object = Obj(); // 0x9e2 PushV
	var_432_object = var_1_object; // 0x9e3 MovT
	func_5411(var_432_object); // 0x9e4 Call
	if(var_431_bool == 0) goto Label_2541; // 0x9e6 JumpB
	var_437_bool = 0; var_438_object = Obj(); // 0x9e7 PushV
	var_438_object = var_1_object; // 0x9e8 MovT
	func_5447(var_438_object); // 0x9e9 Call
	if(var_437_bool == 0) goto Label_2541; // 0x9eb JumpB
	var_430_bool = 1; // 0x9ec MovB
	
Label_2541:
	if(var_430_bool == 0) goto Label_2547; // 0x9ed JumpB
	var_443_int = 8908; // 0x9ee PushI
	var_444_int = 9772; // 0x9ef PushI
	var_445_int = 9771; // 0x9f0 PushI
	AddReply(var_443_int, var_444_int, var_445_int); // 0x9f1 TObjFunc
	
Label_2547:
	var_446_int = 11134; // 0x9f3 PushI
	var_447_int = -1; // 0x9f4 PushI
	var_448_int = 12323; // 0x9f5 PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x9f6 TObjFunc
	goto Label_2555; // 0x9f8 Jump
	
Label_2555:
	var_449_bool = 0; // 0x9fb PushV
	func_4871(var_449_bool); // 0x9fc Call
	if(var_449_bool == 0) goto Label_2570; // 0x9fe JumpB
	
Label_2559:
	lshWaitForAnimEnd(); // 0x9ff Func
	var_450_object = var_3_object; // 0xa01 PushT
	if(var_450_object == 0) goto Label_2564; // 0xa02 JumpB
	goto Label_2569; // 0xa03 Jump
	
Label_2569:
	goto Label_2584; // 0xa09 Jump
	
Label_2584:
	return 0; // 0xa18 Return
	
Label_2564:
	var_451_string = ""; // 0xa04 PushV
	var_451_string = var_2_object; // 0xa05 MovT
	func_4760(var_451_string); // 0xa06 Call
	goto Label_2559; // 0xa08 Jump
	
Label_2570:
	var_452_string = "all"; // 0xa0a PushS
	var_453_string = "idle"; // 0xa0b PushS
	PlayAnimation(var_452_string, var_453_string); // 0xa0c Func
	
Label_2574:
	WaitForAnimEnd(); // 0xa0e Func
	var_454_object = var_3_object; // 0xa10 PushT
	if(var_454_object == 0) goto Label_2579; // 0xa11 JumpB
	goto Label_2584; // 0xa12 Jump
	
Label_2579:
	var_455_string = "all"; // 0xa13 PushS
	var_456_string = "idle"; // 0xa14 PushS
	PlayAnimation(var_455_string, var_456_string); // 0xa15 Func
	goto Label_2574; // 0xa17 Jump
}


func_4760(var_40_string)
{
	var_41_float = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0; // 0x1298 PushV
	var_45_string = "playing "; // 0x1299 PushS
	var_46_int = var_45_string + var_40_string; // 0x129a Add
	Trace(var_46_int); // 0x129b Func
	lshGetAnimTimes(var_40_string, var_43_float, var_44_float); // 0x129d Func
	lshPlayAnimation(var_43_float, var_44_float); // 0x129f Func
	var_47_string = "start: "; // 0x12a1 PushS
	var_48_int = var_47_string + var_43_float; // 0x12a2 Add
	Trace(var_48_int); // 0x12a3 Func
	var_49_string = "end: "; // 0x12a5 PushS
	var_50_int = var_49_string + var_44_float; // 0x12a6 Add
	Trace(var_50_int); // 0x12a7 Func
	return 4; // 0x12a9 Return
}


func_5627(var_213_bool)
{
	var_215_int = 0; var_216_string = ""; // 0x15fc PushV
	var_216_string = "KnowKaterina"; // 0x15fd MovS
	func_4795(var_215_int, var_216_string); // 0x15fe Call
	var_217_int = 1; // 0x1600 PushI
	var_218_bool = var_215_int == var_217_int; // 0x1601 Eq
	if(var_218_bool == 0) goto Label_5637; // 0x1602 JumpB
	var_213_bool = 1; // 0x1603 MovB
	return 0; // 0x1604 Return
	
Label_5637:
	var_213_bool = 0; // 0x1605 MovB
	return 0; // 0x1606 Return
}


func_5531(var_256_bool)
{
	var_258_int = 0; var_259_string = ""; // 0x159c PushV
	var_259_string = "ood6Ospina2"; // 0x159d MovS
	func_4795(var_258_int, var_259_string); // 0x159e Call
	var_260_int = 0; // 0x15a0 PushI
	var_261_bool = var_258_int == var_260_int; // 0x15a1 Eq
	if(var_261_bool == 0) goto Label_5541; // 0x15a2 JumpB
	var_256_bool = 1; // 0x15a3 MovB
	return 0; // 0x15a4 Return
	
Label_5541:
	var_256_bool = 0; // 0x15a5 MovB
	return 0; // 0x15a6 Return
}


func_5020()
{
	var_97_object = Obj(); var_98_string = ""; var_99_float = 0; // 0x139d PushV
	var_100_object = Obj(); // 0x139e PushV
	func_5722(var_100_object); // 0x139f Call
	var_97_object = var_100_object; // 0x13a0 Mov
	var_98_string = "pt_map_bigvlad"; // 0x13a2 MovS
	var_99_float = 2; // 0x13a3 MovI
	func_5739(var_97_object, var_98_string, var_99_float); // 0x13a4 Call
	var_120_object = Obj(); // 0x13a6 PushV
	func_5722(var_120_object); // 0x13a7 Call
	ShowMap(var_120_object); // 0x13a9 ObjFunc
	return 0; // 0x13ab Return
}


func_5789()
{
	var_183_object = Obj(); var_184_object = Obj(); // 0x169d PushV
	var_185_string = "Adding diary entry"; // 0x169e PushS
	Trace(var_185_string); // 0x169f Func
	var_186_int = 71; // 0x16a1 PushI
	var_187_int = 1; // 0x16a2 PushI
	var_188_int = 12153; // 0x16a3 PushI
	CreateDiaryEntry(var_184_object, var_186_int, var_187_int, var_188_int); // 0x16a4 Func
	var_189_bool = 0; var_190_object = Obj(); var_191_int = 0; // 0x16a6 PushV
	var_190_object = var_184_object; // 0x16a7 Mov
	var_191_int = 25; // 0x16a8 MovI
	func_5676(var_189_bool, var_190_object, var_191_int); // 0x16a9 Call
	return 2; // 0x16ab Return
}


func_5285()
{
	var_43_string = "KnowOspina"; // 0x14a6 PushS
	var_44_int = 1; // 0x14a7 PushI
	SetVariable(var_43_string, var_44_int); // 0x14a8 Func
	return 0; // 0x14aa Return
}


func_5543(var_101_bool)
{
	var_103_int = 0; var_104_string = ""; // 0x15a8 PushV
	var_104_string = "d8q01"; // 0x15a9 MovS
	func_4795(var_103_int, var_104_string); // 0x15aa Call
	var_107_int = 0; // 0x15ac PushI
	var_108_bool = var_103_int == var_107_int; // 0x15ad Eq
	if(var_108_bool == 0) goto Label_5553; // 0x15ae JumpB
	var_101_bool = 1; // 0x15af MovB
	return 0; // 0x15b0 Return
	
Label_5553:
	var_101_bool = 0; // 0x15b1 MovB
	return 0; // 0x15b2 Return
}


func_4778()
{
	var_38_bool = 0; // 0x12aa PushV
	func_4871(var_38_bool); // 0x12ab Call
	if(var_38_bool == 0) goto Label_4784; // 0x12ad JumpB
	lshStopSpeech(); // 0x12ae Func
	
Label_4784:
	return 0; // 0x12b0 Return
}


func_5291(var_149_bool)
{
	var_151_int = 0; var_152_string = ""; // 0x14ac PushV
	var_152_string = "ood1Ospina1"; // 0x14ad MovS
	func_4795(var_151_int, var_152_string); // 0x14ae Call
	var_155_int = 0; // 0x14b0 PushI
	var_156_bool = var_151_int == var_155_int; // 0x14b1 Eq
	if(var_156_bool == 0) goto Label_5301; // 0x14b2 JumpB
	var_149_bool = 1; // 0x14b3 MovB
	return 0; // 0x14b4 Return
	
Label_5301:
	var_149_bool = 0; // 0x14b5 MovB
	return 0; // 0x14b6 Return
}


func_5036()
{
	var_67_object = Obj(); var_68_string = ""; var_69_float = 0; // 0x13ad PushV
	var_70_object = Obj(); // 0x13ae PushV
	func_5722(var_70_object); // 0x13af Call
	var_67_object = var_70_object; // 0x13b0 Mov
	var_68_string = "pt_map_lara"; // 0x13b2 MovS
	var_69_float = 2; // 0x13b3 MovI
	func_5739(var_67_object, var_68_string, var_69_float); // 0x13b4 Call
	var_90_object = Obj(); // 0x13b6 PushV
	func_5722(var_90_object); // 0x13b7 Call
	ShowMap(var_90_object); // 0x13b9 ObjFunc
	return 0; // 0x13bb Return
}


func_5805()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x16ad PushV
	var_68_string = "Adding diary entry"; // 0x16ae PushS
	Trace(var_68_string); // 0x16af Func
	var_69_int = 70; // 0x16b1 PushI
	var_70_int = 1; // 0x16b2 PushI
	var_71_int = 12152; // 0x16b3 PushI
	CreateDiaryEntry(var_67_object, var_69_int, var_70_int, var_71_int); // 0x16b4 Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0x16b6 PushV
	var_73_object = var_67_object; // 0x16b7 Mov
	var_74_int = 25; // 0x16b8 MovI
	func_5676(var_72_bool, var_73_object, var_74_int); // 0x16b9 Call
	return 2; // 0x16bb Return
}


func_4785(var_75_cvector, var_76_cvector)
{
	var_78_float = 0; var_79_float = 0; // 0x12b1 PushV
	var_80_int = var_76_cvector | var_76_cvector; // 0x12b2 Or
	var_79_float = sqrt(var_80_int); // 0x12b3 Sqrt2
	var_81_float = 0.0; // 0x12b4 PushF
	var_82_bool = var_79_float < var_81_float; // 0x12b5 LT
	if(var_82_bool == 0) goto Label_4793; // 0x12b6 JumpB
	var_75_cvector = CVector(0.0, 0.0, 0.0); // 0x12b7 MovV
	return 2; // 0x12b8 Return
	
Label_4793:
	var_75_cvector = var_76_cvector / var_76_cvector; // 0x12b9 Div2
	return 2; // 0x12ba Return
}


func_5555(var_119_bool)
{
	var_121_int = 0; var_122_string = ""; // 0x15b4 PushV
	var_122_string = "ood8Ospina1"; // 0x15b5 MovS
	func_4795(var_121_int, var_122_string); // 0x15b6 Call
	var_123_int = 0; // 0x15b8 PushI
	var_124_bool = var_121_int == var_123_int; // 0x15b9 Eq
	if(var_124_bool == 0) goto Label_5565; // 0x15ba JumpB
	var_119_bool = 1; // 0x15bb MovB
	return 0; // 0x15bc Return
	
Label_5565:
	var_119_bool = 0; // 0x15bd MovB
	return 0; // 0x15be Return
}


func_180(var_2_object, var_45_string)
{
	var_46_bool = 0; // 0xb5 PushV
	func_4871(var_46_bool); // 0xb6 Call
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
	func_4760(var_49_string); // 0xc0 Call
	var_2_object = var_45_string; // 0xc2 TMov
	return 0; // 0xc3 Return
}


func_5303(var_188_bool)
{
	var_190_int = 0; var_191_string = ""; // 0x14b8 PushV
	var_191_string = "ood1Ospina2"; // 0x14b9 MovS
	func_4795(var_190_int, var_191_string); // 0x14ba Call
	var_192_int = 0; // 0x14bc PushI
	var_193_bool = var_190_int == var_192_int; // 0x14bd Eq
	if(var_193_bool == 0) goto Label_5313; // 0x14be JumpB
	var_188_bool = 1; // 0x14bf MovB
	return 0; // 0x14c0 Return
	
Label_5313:
	var_188_bool = 0; // 0x14c1 MovB
	return 0; // 0x14c2 Return
}


func_4025(var_0_object, var_633_int, var_634_object)
{
	var_636_object = Obj(); var_637_bool = 0; var_638_int = 0; var_639_bool = 0; var_640_object = Obj(); var_641_bool = 0; var_642_int = 0; var_643_bool = 0; // 0xfb9 PushV
	var_0_object = var_634_object; // 0xfba TMov
	var_644_bool = 0; var_645_object = Obj(); // 0xfbb PushV
	var_645_object = var_634_object; // 0xfbc Mov
	func_4700(var_645_object); // 0xfbd Call
	var_646_bool = var_644_bool == 0; // 0xfbf Not
	if(var_646_bool == 0) goto Label_4035; // 0xfc0 JumpB
	var_633_int = -2; // 0xfc1 MovI
	return 8; // 0xfc2 Return
	
Label_4035:
	CreateDialog(var_640_object); // 0xfc3 Func
	var_647_int = 0; // 0xfc5 PushV
	func_4867(var_647_int); // 0xfc6 Call
	SetNPCName(var_647_int); // 0xfc8 ObjFunc
	var_648_string = ""; // 0xfca PushV
	func_4869(var_648_string); // 0xfcb Call
	SetPhoto(var_648_string); // 0xfcd ObjFunc
	var_649_int = 0; // 0xfcf PushV
	func_5772(var_649_int); // 0xfd0 Call
	SetPlayerName(var_649_int); // 0xfd2 ObjFunc
	var_642_int = -1; // 0xfd4 MovI
	IsOverrideActive(var_641_bool); // 0xfd5 Func
	var_650_bool = var_641_bool; // 0xfd7 Push
	if(var_650_bool == 0) goto Label_4059; // 0xfd8 JumpB
	var_633_int = -2; // 0xfd9 MovI
	return 8; // 0xfda Return
	
Label_4059:
	DoDialog(var_640_object); // 0xfdb Func
	var_651_object = Obj(); var_652_object = Obj(); // 0xfdd PushV
	var_651_object = var_634_object; // 0xfde Mov
	var_652_object = var_640_object; // 0xfdf Mov
	TaskCall(15); // 0xfe0 TaskCall
	func_4088(var_653_object, var_654_object, var_655_string, var_656_bool, var_651_object, var_652_object); // 0xfe1 Call
	TaskReturn(); // 0xfe2 TaskReturn
	IsDialogEnd(var_643_bool); // 0xfe4 ObjFunc
	
Label_4070:
	var_701_bool = var_643_bool == 0; // 0xfe6 Not
	if(var_701_bool == 0) goto Label_4077; // 0xfe7 JumpB
	sync(); // 0xfe8 Func
	IsDialogEnd(var_643_bool); // 0xfea ObjFunc
	goto Label_4070; // 0xfec Jump
	
Label_4077:
	var_702_object = Obj(); // 0xfed PushV
	var_702_object = var_634_object; // 0xfee Mov
	func_4756(); // 0xfef Call
	StopDialog(var_640_object); // 0xff1 Func
	GetReturnValue(var_642_int); // 0xff3 ObjFunc
	var_633_int = var_642_int; // 0xff5 Mov
	return 8; // 0xff6 Return
}


func_3258(var_0_object, var_309_int, var_310_object)
{
	var_312_object = Obj(); var_313_bool = 0; var_314_int = 0; var_315_bool = 0; var_316_object = Obj(); var_317_bool = 0; var_318_int = 0; var_319_bool = 0; // 0xcba PushV
	var_0_object = var_310_object; // 0xcbb TMov
	var_320_bool = 0; var_321_object = Obj(); // 0xcbc PushV
	var_321_object = var_310_object; // 0xcbd Mov
	func_4700(var_321_object); // 0xcbe Call
	var_322_bool = var_320_bool == 0; // 0xcc0 Not
	if(var_322_bool == 0) goto Label_3268; // 0xcc1 JumpB
	var_309_int = -2; // 0xcc2 MovI
	return 8; // 0xcc3 Return
	
Label_3268:
	CreateDialog(var_316_object); // 0xcc4 Func
	var_323_int = 0; // 0xcc6 PushV
	func_4867(var_323_int); // 0xcc7 Call
	SetNPCName(var_323_int); // 0xcc9 ObjFunc
	var_324_string = ""; // 0xccb PushV
	func_4869(var_324_string); // 0xccc Call
	SetPhoto(var_324_string); // 0xcce ObjFunc
	var_325_int = 0; // 0xcd0 PushV
	func_5772(var_325_int); // 0xcd1 Call
	SetPlayerName(var_325_int); // 0xcd3 ObjFunc
	var_318_int = -1; // 0xcd5 MovI
	IsOverrideActive(var_317_bool); // 0xcd6 Func
	var_326_bool = var_317_bool; // 0xcd8 Push
	if(var_326_bool == 0) goto Label_3292; // 0xcd9 JumpB
	var_309_int = -2; // 0xcda MovI
	return 8; // 0xcdb Return
	
Label_3292:
	DoDialog(var_316_object); // 0xcdc Func
	var_327_object = Obj(); var_328_object = Obj(); // 0xcde PushV
	var_327_object = var_310_object; // 0xcdf Mov
	var_328_object = var_316_object; // 0xce0 Mov
	TaskCall(11); // 0xce1 TaskCall
	func_3321(var_329_object, var_330_object, var_331_string, var_332_bool, var_327_object, var_328_object); // 0xce2 Call
	TaskReturn(); // 0xce3 TaskReturn
	IsDialogEnd(var_319_bool); // 0xce5 ObjFunc
	
Label_3303:
	var_354_bool = var_319_bool == 0; // 0xce7 Not
	if(var_354_bool == 0) goto Label_3310; // 0xce8 JumpB
	sync(); // 0xce9 Func
	IsDialogEnd(var_319_bool); // 0xceb ObjFunc
	goto Label_3303; // 0xced Jump
	
Label_3310:
	var_355_object = Obj(); // 0xcee PushV
	var_355_object = var_310_object; // 0xcef Mov
	func_4756(); // 0xcf0 Call
	StopDialog(var_316_object); // 0xcf2 Func
	GetReturnValue(var_318_int); // 0xcf4 ObjFunc
	var_309_int = var_318_int; // 0xcf6 Mov
	return 8; // 0xcf7 Return
}


func_4795(var_103_int, var_104_string)
{
	var_105_int = 0; var_106_int = 0; // 0x12bb PushV
	GetVariable(var_104_string, var_106_int); // 0x12bc Func
	var_103_int = var_106_int; // 0x12be Mov
	return 2; // 0x12bf Return
}


func_5052()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x13bc PushV
	var_49_string = "d4q01_subquest"; // 0x13bd PushS
	var_50_int = 2; // 0x13be PushI
	SetVariable(var_49_string, var_50_int); // 0x13bf Func
	var_51_object = Obj(); // 0x13c1 PushV
	func_5722(var_51_object); // 0x13c2 Call
	var_48_object = var_51_object; // 0x13c3 Mov
	var_58_string = "d4q01OspinaGotoLara"; // 0x13c5 PushS
	var_59_string = "pt_map_lara"; // 0x13c6 PushS
	var_60_int = 1; // 0x13c7 PushI
	var_61_int = 11504; // 0x13c8 PushI
	var_62_float = 0; // 0x13c9 PushV
	func_4838(var_62_float); // 0x13ca Call
	AddMark(var_58_string, var_59_string, var_60_int, var_61_int, var_62_float); // 0x13cc ObjFunc
	return 2; // 0x13ce Return
}


func_5821()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x16bd PushV
	var_53_string = "Adding diary entry"; // 0x16be PushS
	Trace(var_53_string); // 0x16bf Func
	var_54_int = 162; // 0x16c1 PushI
	var_55_int = 1; // 0x16c2 PushI
	var_56_int = 15395; // 0x16c3 PushI
	CreateDiaryEntry(var_52_object, var_54_int, var_55_int, var_56_int); // 0x16c4 Func
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0; // 0x16c6 PushV
	var_58_object = var_52_object; // 0x16c7 Mov
	var_59_int = 111; // 0x16c8 MovI
	func_5676(var_57_bool, var_58_object, var_59_int); // 0x16c9 Call
	return 2; // 0x16cb Return
}


func_3516(var_0_object, var_461_int, var_462_object)
{
	var_464_object = Obj(); var_465_bool = 0; var_466_int = 0; var_467_bool = 0; var_468_object = Obj(); var_469_bool = 0; var_470_int = 0; var_471_bool = 0; // 0xdbc PushV
	var_0_object = var_462_object; // 0xdbd TMov
	var_472_bool = 0; var_473_object = Obj(); // 0xdbe PushV
	var_473_object = var_462_object; // 0xdbf Mov
	func_4700(var_473_object); // 0xdc0 Call
	var_474_bool = var_472_bool == 0; // 0xdc2 Not
	if(var_474_bool == 0) goto Label_3526; // 0xdc3 JumpB
	var_461_int = -2; // 0xdc4 MovI
	return 8; // 0xdc5 Return
	
Label_3526:
	CreateDialog(var_468_object); // 0xdc6 Func
	var_475_int = 0; // 0xdc8 PushV
	func_4867(var_475_int); // 0xdc9 Call
	SetNPCName(var_475_int); // 0xdcb ObjFunc
	var_476_string = ""; // 0xdcd PushV
	func_4869(var_476_string); // 0xdce Call
	SetPhoto(var_476_string); // 0xdd0 ObjFunc
	var_477_int = 0; // 0xdd2 PushV
	func_5772(var_477_int); // 0xdd3 Call
	SetPlayerName(var_477_int); // 0xdd5 ObjFunc
	var_470_int = -1; // 0xdd7 MovI
	IsOverrideActive(var_469_bool); // 0xdd8 Func
	var_478_bool = var_469_bool; // 0xdda Push
	if(var_478_bool == 0) goto Label_3550; // 0xddb JumpB
	var_461_int = -2; // 0xddc MovI
	return 8; // 0xddd Return
	
Label_3550:
	DoDialog(var_468_object); // 0xdde Func
	var_479_object = Obj(); var_480_object = Obj(); // 0xde0 PushV
	var_479_object = var_462_object; // 0xde1 Mov
	var_480_object = var_468_object; // 0xde2 Mov
	TaskCall(13); // 0xde3 TaskCall
	func_3579(var_481_object, var_482_object, var_483_string, var_484_bool, var_479_object, var_480_object); // 0xde4 Call
	TaskReturn(); // 0xde5 TaskReturn
	IsDialogEnd(var_471_bool); // 0xde7 ObjFunc
	
Label_3561:
	var_535_bool = var_471_bool == 0; // 0xde9 Not
	if(var_535_bool == 0) goto Label_3568; // 0xdea JumpB
	sync(); // 0xdeb Func
	IsDialogEnd(var_471_bool); // 0xded ObjFunc
	goto Label_3561; // 0xdef Jump
	
Label_3568:
	var_536_object = Obj(); // 0xdf0 PushV
	var_536_object = var_462_object; // 0xdf1 Mov
	func_4756(); // 0xdf2 Call
	StopDialog(var_468_object); // 0xdf4 Func
	GetReturnValue(var_470_int); // 0xdf6 ObjFunc
	var_461_int = var_470_int; // 0xdf8 Mov
	return 8; // 0xdf9 Return
}


func_5567(var_110_bool)
{
	var_112_int = 0; var_113_string = ""; // 0x15c0 PushV
	var_113_string = "ood8Ospina2"; // 0x15c1 MovS
	func_4795(var_112_int, var_113_string); // 0x15c2 Call
	var_114_int = 0; // 0x15c4 PushI
	var_115_bool = var_112_int == var_114_int; // 0x15c5 Eq
	if(var_115_bool == 0) goto Label_5577; // 0x15c6 JumpB
	var_110_bool = 1; // 0x15c7 MovB
	return 0; // 0x15c8 Return
	
Label_5577:
	var_110_bool = 0; // 0x15c9 MovB
	return 0; // 0x15ca Return
}


func_4800(var_83_object, var_84_int)
{
	var_85_int = 0; var_86_int = 0; var_87_bool = 0; var_88_int = 0; var_89_int = 0; var_90_bool = 0; // 0x12c0 PushV
	GetItemID(var_88_int); // 0x12c1 ObjFunc
	var_91_string = "Category"; // 0x12c3 PushS
	GetInvItemProperty(var_89_int, var_88_int, var_91_string); // 0x12c4 Func
	AddItem(var_90_bool, var_83_object, var_89_int, var_84_int); // 0x12c6 ObjFunc
	var_92_bool = var_90_bool == 0; // 0x12c8 Not
	if(var_92_bool == 0) goto Label_4812; // 0x12c9 JumpB
	DropItems(var_83_object, var_84_int); // 0x12ca ObjFunc
	
Label_4812:
	return 6; // 0x12cc Return
}


func_5315(var_203_bool)
{
	var_205_int = 0; var_206_string = ""; // 0x14c4 PushV
	var_206_string = "ood1Ospina3"; // 0x14c5 MovS
	func_4795(var_205_int, var_206_string); // 0x14c6 Call
	var_207_int = 0; // 0x14c8 PushI
	var_208_bool = var_205_int == var_207_int; // 0x14c9 Eq
	if(var_208_bool == 0) goto Label_5325; // 0x14ca JumpB
	var_203_bool = 1; // 0x14cb MovB
	return 0; // 0x14cc Return
	
Label_5325:
	var_203_bool = 0; // 0x14cd MovB
	return 0; // 0x14ce Return
}


func_5579(var_262_bool)
{
	var_264_int = 0; var_265_string = ""; // 0x15cc PushV
	var_265_string = "microscope_d6q01_ospina_blood"; // 0x15cd MovS
	func_4795(var_264_int, var_265_string); // 0x15ce Call
	var_266_int = 0; // 0x15d0 PushI
	var_267_bool = var_264_int != var_266_int; // 0x15d1 Neq
	if(var_267_bool == 0) goto Label_5589; // 0x15d2 JumpB
	var_262_bool = 1; // 0x15d3 MovB
	return 0; // 0x15d4 Return
	
Label_5589:
	var_262_bool = 0; // 0x15d5 MovB
	return 0; // 0x15d6 Return
}


func_4813(var_77_object, var_78_string, var_79_int)
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x12cd PushV
	CreateInvItem(var_81_object); // 0x12ce Func
	SetItemName(var_78_string); // 0x12d0 ObjFunc
	var_82_object = Obj(); var_83_object = Obj(); var_84_int = 0; // 0x12d2 PushV
	var_82_object = var_77_object; // 0x12d3 Mov
	var_83_object = var_81_object; // 0x12d4 Mov
	var_84_int = var_79_int; // 0x12d5 Mov
	func_4800(var_83_object, var_84_int); // 0x12d6 Call
	return 2; // 0x12d8 Return
}


func_5837()
{
	var_180_object = Obj(); var_181_object = Obj(); // 0x16cd PushV
	var_182_string = "Adding diary entry"; // 0x16ce PushS
	Trace(var_182_string); // 0x16cf Func
	var_183_int = 121; // 0x16d1 PushI
	var_184_int = 1; // 0x16d2 PushI
	var_185_int = 13744; // 0x16d3 PushI
	CreateDiaryEntry(var_181_object, var_183_int, var_184_int, var_185_int); // 0x16d4 Func
	var_186_bool = 0; var_187_object = Obj(); var_188_int = 0; // 0x16d6 PushV
	var_187_object = var_181_object; // 0x16d7 Mov
	var_188_int = 111; // 0x16d8 MovI
	func_5676(var_186_bool, var_187_object, var_188_int); // 0x16d9 Call
	return 2; // 0x16db Return
}


func_5327(var_194_bool)
{
	var_196_int = 0; var_197_string = ""; // 0x14d0 PushV
	var_197_string = "d1q01FirstGeorgVisit"; // 0x14d1 MovS
	func_4795(var_196_int, var_197_string); // 0x14d2 Call
	var_198_int = 1; // 0x14d4 PushI
	var_199_bool = var_196_int == var_198_int; // 0x14d5 Eq
	if(var_199_bool == 0) goto Label_5337; // 0x14d6 JumpB
	var_194_bool = 1; // 0x14d7 MovB
	return 0; // 0x14d8 Return
	
Label_5337:
	var_194_bool = 0; // 0x14d9 MovB
	return 0; // 0x14da Return
}


func_5072()
{
	var_43_string = "ood4Ospina1"; // 0x13d1 PushS
	var_44_int = 1; // 0x13d2 PushI
	SetVariable(var_43_string, var_44_int); // 0x13d3 Func
	return 0; // 0x13d5 Return
}


func_5078()
{
	var_107_string = "d4q01_subquest"; // 0x13d7 PushS
	var_108_int = 1000; // 0x13d8 PushI
	SetVariable(var_107_string, var_108_int); // 0x13d9 Func
	return 0; // 0x13db Return
}


func_5591(var_268_bool)
{
	var_270_int = 0; var_271_string = ""; // 0x15d8 PushV
	var_271_string = "d6q01"; // 0x15d9 MovS
	func_4795(var_270_int, var_271_string); // 0x15da Call
	var_272_int = 1000; // 0x15dc PushI
	var_273_bool = var_270_int == var_272_int; // 0x15dd Eq
	if(var_273_bool == 0) goto Label_5601; // 0x15de JumpB
	var_268_bool = 1; // 0x15df MovB
	return 0; // 0x15e0 Return
	
Label_5601:
	var_268_bool = 0; // 0x15e1 MovB
	return 0; // 0x15e2 Return
}


func_4826(var_192_bool, var_193_string, var_194_string)
{
	var_195_object = Obj(); var_196_object = Obj(); // 0x12da PushV
	FindActor(var_196_object, var_193_string); // 0x12db Func
	var_197_bool = var_196_object == 0; // 0x12dd NullEq
	if(var_197_bool == 0) goto Label_4833; // 0x12de JumpB
	var_192_bool = 0; // 0x12df MovB
	return 2; // 0x12e0 Return
	
Label_4833:
	Trigger(var_196_object, var_194_string); // 0x12e1 Func
	var_192_bool = 1; // 0x12e3 MovB
	return 2; // 0x12e4 Return
}


func_5339(var_157_bool)
{
	var_159_int = 0; var_160_string = ""; // 0x14dc PushV
	var_160_string = "d1q03"; // 0x14dd MovS
	func_4795(var_159_int, var_160_string); // 0x14de Call
	var_161_int = 1; // 0x14e0 PushI
	var_162_bool = var_159_int == var_161_int; // 0x14e1 Eq
	if(var_162_bool == 0) goto Label_5349; // 0x14e2 JumpB
	var_157_bool = 1; // 0x14e3 MovB
	return 0; // 0x14e4 Return
	
Label_5349:
	var_157_bool = 0; // 0x14e5 MovB
	return 0; // 0x14e6 Return
}


func_5084()
{
	var_103_string = "ood4Ospina2"; // 0x13dd PushS
	var_104_int = 1; // 0x13de PushI
	SetVariable(var_103_string, var_104_int); // 0x13df Func
	return 0; // 0x13e1 Return
}


func_5853()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x16dd PushV
	var_53_string = "Adding diary entry"; // 0x16de PushS
	Trace(var_53_string); // 0x16df Func
	var_54_int = 178; // 0x16e1 PushI
	var_55_int = 1; // 0x16e2 PushI
	var_56_int = 15437; // 0x16e3 PushI
	CreateDiaryEntry(var_52_object, var_54_int, var_55_int, var_56_int); // 0x16e4 Func
	var_57_bool = 0; var_58_object = Obj(); var_59_int = 0; // 0x16e6 PushV
	var_58_object = var_52_object; // 0x16e7 Mov
	var_59_int = 175; // 0x16e8 MovI
	func_5676(var_57_bool, var_58_object, var_59_int); // 0x16e9 Call
	return 2; // 0x16eb Return
}


func_5090()
{
	var_43_string = "ood6Ospina1"; // 0x13e3 PushS
	var_44_int = 1; // 0x13e4 PushI
	SetVariable(var_43_string, var_44_int); // 0x13e5 Func
	return 0; // 0x13e7 Return
}


func_5603(var_275_bool)
{
	var_277_int = 0; var_278_string = ""; // 0x15e4 PushV
	var_278_string = "d6q01"; // 0x15e5 MovS
	func_4795(var_277_int, var_278_string); // 0x15e6 Call
	var_279_int = -1; // 0x15e8 PushI
	var_280_bool = var_277_int == var_279_int; // 0x15e9 Eq
	if(var_280_bool == 0) goto Label_5613; // 0x15ea JumpB
	var_275_bool = 1; // 0x15eb MovB
	return 0; // 0x15ec Return
	
Label_5613:
	var_275_bool = 0; // 0x15ed MovB
	return 0; // 0x15ee Return
}


func_4838(var_62_float)
{
	var_63_float = 0; var_64_float = 0; // 0x12e6 PushV
	GetGameTime(var_64_float); // 0x12e7 Func
	var_62_float = var_64_float; // 0x12e9 Mov
	return 2; // 0x12ea Return
}


func_5351(var_219_bool)
{
	var_221_int = 0; var_222_string = ""; // 0x14e8 PushV
	var_222_string = "ood1Ospina4"; // 0x14e9 MovS
	func_4795(var_221_int, var_222_string); // 0x14ea Call
	var_223_int = 0; // 0x14ec PushI
	var_224_bool = var_221_int == var_223_int; // 0x14ed Eq
	if(var_224_bool == 0) goto Label_5361; // 0x14ee JumpB
	var_219_bool = 1; // 0x14ef MovB
	return 0; // 0x14f0 Return
	
Label_5361:
	var_219_bool = 0; // 0x14f1 MovB
	return 0; // 0x14f2 Return
}


func_5096()
{
	var_133_string = "ood6Ospina2"; // 0x13e9 PushS
	var_134_int = 1; // 0x13ea PushI
	SetVariable(var_133_string, var_134_int); // 0x13eb Func
	return 0; // 0x13ed Return
}


func_4843(var_151_int)
{
	var_152_float = 0; var_153_float = 0; // 0x12eb PushV
	GetGameTime(var_153_float); // 0x12ec Func
	var_154_int = 1; // 0x12ee PushI
	var_155_int = 0; // 0x12ef PushV
	var_156_int = 24; // 0x12f0 PushI
	var_155_int = var_153_float / var_153_float; // 0x12f1 Div2
	var_151_int = var_154_int + var_155_int; // 0x12f2 Add2
	return 2; // 0x12f3 Return
}


func_5869()
{
	var_35_bool = GlobalVars[1]; // 0x16ed PushGE
	var_35_bool = 0; // 0x16ee MovB
	GlobalVars[1] = var_35_bool; // 0x16ef PopGE
	return 0; // 0x16f0 Return
}


func_5102()
{
	var_49_string = "d8q01MladVladIsBad"; // 0x13ef PushS
	var_50_int = 1; // 0x13f0 PushI
	SetVariable(var_49_string, var_50_int); // 0x13f1 Func
	func_5853(); // 0x13f4 Call
	return 0; // 0x13f6 Return
}


func_5615(var_243_bool)
{
	var_245_int = 0; var_246_string = ""; // 0x15f0 PushV
	var_246_string = "KnowBigVlad"; // 0x15f1 MovS
	func_4795(var_245_int, var_246_string); // 0x15f2 Call
	var_247_int = 1; // 0x15f4 PushI
	var_248_bool = var_245_int == var_247_int; // 0x15f5 Eq
	if(var_248_bool == 0) goto Label_5625; // 0x15f6 JumpB
	var_243_bool = 1; // 0x15f7 MovB
	return 0; // 0x15f8 Return
	
Label_5625:
	var_243_bool = 0; // 0x15f9 MovB
	return 0; // 0x15fa Return
}


func_5873(var_36_object)
{
	var_37_bool = GlobalVars[1]; // 0x16f2 PushGE
	var_38_bool = var_37_bool == 0; // 0x16f3 Not
	if(var_38_bool == 0) goto Label_5886; // 0x16f4 JumpB
	var_39_int = 0; var_40_object = Obj(); // 0x16f5 PushV
	var_40_object = var_36_object; // 0x16f6 Mov
	TaskCall(2); // 0x16f7 TaskCall
	func_49(var_41_object, var_39_int, var_40_object); // 0x16f8 Call
	TaskReturn(); // 0x16f9 TaskReturn
	var_148_bool = GlobalVars[1]; // 0x16fb PushGE
	var_148_bool = 1; // 0x16fc MovB
	GlobalVars[1] = var_148_bool; // 0x16fd PopGE
	
Label_5886:
	var_149_bool = 0; var_150_int = 0; // 0x16fe PushV
	var_150_int = 1; // 0x16ff MovI
	func_4852(var_149_bool, var_150_int); // 0x1700 Call
	if(var_149_bool == 0) goto Label_5898; // 0x1702 JumpB
	var_157_int = 0; var_158_object = Obj(); // 0x1703 PushV
	var_158_object = var_36_object; // 0x1704 Mov
	TaskCall(6); // 0x1705 TaskCall
	func_1056(var_159_object, var_157_int, var_158_object); // 0x1706 Call
	TaskReturn(); // 0x1707 TaskReturn
	return 0; // 0x1709 Return
	
Label_5898:
	var_307_bool = 0; var_308_int = 0; // 0x170a PushV
	var_308_int = 2; // 0x170b MovI
	func_4852(var_307_bool, var_308_int); // 0x170c Call
	if(var_307_bool == 0) goto Label_5910; // 0x170e JumpB
	var_309_int = 0; var_310_object = Obj(); // 0x170f PushV
	var_310_object = var_36_object; // 0x1710 Mov
	TaskCall(10); // 0x1711 TaskCall
	func_3258(var_311_object, var_309_int, var_310_object); // 0x1712 Call
	TaskReturn(); // 0x1713 TaskReturn
	return 0; // 0x1715 Return
	
Label_5910:
	var_356_bool = 0; var_357_int = 0; // 0x1716 PushV
	var_357_int = 3; // 0x1717 MovI
	func_4852(var_356_bool, var_357_int); // 0x1718 Call
	if(var_356_bool == 0) goto Label_5922; // 0x171a JumpB
	var_358_int = 0; var_359_object = Obj(); // 0x171b PushV
	var_359_object = var_36_object; // 0x171c Mov
	TaskCall(8); // 0x171d TaskCall
	func_2392(var_360_object, var_358_int, var_359_object); // 0x171e Call
	TaskReturn(); // 0x171f TaskReturn
	return 0; // 0x1721 Return
	
Label_5922:
	var_459_bool = 0; var_460_int = 0; // 0x1722 PushV
	var_460_int = 4; // 0x1723 MovI
	func_4852(var_459_bool, var_460_int); // 0x1724 Call
	if(var_459_bool == 0) goto Label_5934; // 0x1726 JumpB
	var_461_int = 0; var_462_object = Obj(); // 0x1727 PushV
	var_462_object = var_36_object; // 0x1728 Mov
	TaskCall(12); // 0x1729 TaskCall
	func_3516(var_463_object, var_461_int, var_462_object); // 0x172a Call
	TaskReturn(); // 0x172b TaskReturn
	return 0; // 0x172d Return
	
Label_5934:
	var_537_bool = 0; var_538_int = 0; // 0x172e PushV
	var_538_int = 6; // 0x172f MovI
	func_4852(var_537_bool, var_538_int); // 0x1730 Call
	if(var_537_bool == 0) goto Label_5946; // 0x1732 JumpB
	var_539_int = 0; var_540_object = Obj(); // 0x1733 PushV
	var_540_object = var_36_object; // 0x1734 Mov
	TaskCall(4); // 0x1735 TaskCall
	func_335(var_541_object, var_539_int, var_540_object); // 0x1736 Call
	TaskReturn(); // 0x1737 TaskReturn
	return 0; // 0x1739 Return
	
Label_5946:
	var_631_bool = 0; var_632_int = 0; // 0x173a PushV
	var_632_int = 8; // 0x173b MovI
	func_4852(var_631_bool, var_632_int); // 0x173c Call
	if(var_631_bool == 0) goto Label_5958; // 0x173e JumpB
	var_633_int = 0; var_634_object = Obj(); // 0x173f PushV
	var_634_object = var_36_object; // 0x1740 Mov
	TaskCall(14); // 0x1741 TaskCall
	func_4025(var_635_object, var_633_int, var_634_object); // 0x1742 Call
	TaskReturn(); // 0x1743 TaskReturn
	return 0; // 0x1745 Return
	
Label_5958:
	var_703_bool = 0; // 0x1746 PushV
	func_4858(var_703_bool); // 0x1747 Call
	return 0; // 0x1749 Return
}


func_5363(var_236_bool)
{
	var_238_int = 0; var_239_string = ""; // 0x14f4 PushV
	var_239_string = "ood1Ospina5"; // 0x14f5 MovS
	func_4795(var_238_int, var_239_string); // 0x14f6 Call
	var_240_int = 0; // 0x14f8 PushI
	var_241_bool = var_238_int == var_240_int; // 0x14f9 Eq
	if(var_241_bool == 0) goto Label_5373; // 0x14fa JumpB
	var_236_bool = 1; // 0x14fb MovB
	return 0; // 0x14fc Return
	
Label_5373:
	var_236_bool = 0; // 0x14fd MovB
	return 0; // 0x14fe Return
}


func_4852(var_149_bool, var_150_int)
{
	var_151_int = 0; // 0x12f5 PushV
	func_4843(var_151_int); // 0x12f6 Call
	var_149_bool = var_151_int == var_150_int; // 0x12f8 Eq2
	return 0; // 0x12f9 Return
}


func_5111()
{
	var_80_string = "ood8Ospina1"; // 0x13f8 PushS
	var_81_int = 1; // 0x13f9 PushI
	SetVariable(var_80_string, var_81_int); // 0x13fa Func
	return 0; // 0x13fc Return
}


func_4088(var_0_object, var_1_object, var_2_object, var_3_object, var_651_object, var_652_object)
{
	var_0_object = var_652_object; // 0xff9 TMov
	var_1_object = var_651_object; // 0xffa TMov
	var_3_object = 0; // 0xffb TMovB
	var_657_int = 1; // 0xffc PushI
	if(var_657_int == 0) goto Label_4141; // 0xffd JumpB
	var_658_string = ""; // 0xffe PushV
	var_658_string = "Neutral"; // 0xfff MovS
	func_4171(var_652_object, var_658_string); // 0x1000 Call
	var_663_int = 12374; // 0x1002 PushI
	SetMessage(var_663_int); // 0x1003 TObjFunc
	ClearReplies(); // 0x1005 TObjFunc
	var_664_bool = 0; // 0x1007 PushV
	var_664_bool = 0; // 0x1008 MovB
	var_665_bool = 0; var_666_object = Obj(); // 0x1009 PushV
	var_666_object = var_1_object; // 0x100a MovT
	func_5543(var_666_object); // 0x100b Call
	var_671_bool = var_665_bool == 0; // 0x100d Not
	if(var_671_bool == 0) goto Label_4117; // 0x100e JumpB
	var_672_bool = 0; var_673_object = Obj(); // 0x100f PushV
	var_673_object = var_1_object; // 0x1010 MovT
	func_5567(var_673_object); // 0x1011 Call
	if(var_672_bool == 0) goto Label_4117; // 0x1013 JumpB
	var_664_bool = 1; // 0x1014 MovB
	
Label_4117:
	if(var_664_bool == 0) goto Label_4123; // 0x1015 JumpB
	var_678_int = 13641; // 0x1016 PushI
	var_679_int = 14898; // 0x1017 PushI
	var_680_int = 14897; // 0x1018 PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0x1019 TObjFunc
	
Label_4123:
	var_681_bool = 0; var_682_object = Obj(); // 0x101b PushV
	var_682_object = var_1_object; // 0x101c MovT
	func_5555(var_682_object); // 0x101d Call
	if(var_681_bool == 0) goto Label_4133; // 0x101f JumpB
	var_687_int = 12375; // 0x1020 PushI
	var_688_int = 13536; // 0x1021 PushI
	var_689_int = 13535; // 0x1022 PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0x1023 TObjFunc
	
Label_4133:
	var_690_int = 13658; // 0x1025 PushI
	var_691_int = -1; // 0x1026 PushI
	var_692_int = 14916; // 0x1027 PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0x1028 TObjFunc
	goto Label_4141; // 0x102a Jump
	
Label_4141:
	var_693_bool = 0; // 0x102d PushV
	func_4871(var_693_bool); // 0x102e Call
	if(var_693_bool == 0) goto Label_4156; // 0x1030 JumpB
	
Label_4145:
	lshWaitForAnimEnd(); // 0x1031 Func
	var_694_object = var_3_object; // 0x1033 PushT
	if(var_694_object == 0) goto Label_4150; // 0x1034 JumpB
	goto Label_4155; // 0x1035 Jump
	
Label_4155:
	goto Label_4170; // 0x103b Jump
	
Label_4170:
	return 0; // 0x104a Return
	
Label_4150:
	var_695_string = ""; // 0x1036 PushV
	var_695_string = var_2_object; // 0x1037 MovT
	func_4760(var_695_string); // 0x1038 Call
	goto Label_4145; // 0x103a Jump
	
Label_4156:
	var_696_string = "all"; // 0x103c PushS
	var_697_string = "idle"; // 0x103d PushS
	PlayAnimation(var_696_string, var_697_string); // 0x103e Func
	
Label_4160:
	WaitForAnimEnd(); // 0x1040 Func
	var_698_object = var_3_object; // 0x1042 PushT
	if(var_698_object == 0) goto Label_4165; // 0x1043 JumpB
	goto Label_4170; // 0x1044 Jump
	
Label_4165:
	var_699_string = "all"; // 0x1045 PushS
	var_700_string = "idle"; // 0x1046 PushS
	PlayAnimation(var_699_string, var_700_string); // 0x1047 Func
	goto Label_4160; // 0x1049 Jump
}


func_3321(var_0_object, var_1_object, var_2_object, var_3_object, var_327_object, var_328_object)
{
	var_0_object = var_328_object; // 0xcfa TMov
	var_1_object = var_327_object; // 0xcfb TMov
	var_3_object = 0; // 0xcfc TMovB
	var_333_int = 1; // 0xcfd PushI
	if(var_333_int == 0) goto Label_3349; // 0xcfe JumpB
	var_334_string = ""; // 0xcff PushV
	var_334_string = "Neutral"; // 0xd00 MovS
	func_3379(var_328_object, var_334_string); // 0xd01 Call
	var_339_int = 9394; // 0xd03 PushI
	SetMessage(var_339_int); // 0xd04 TObjFunc
	ClearReplies(); // 0xd06 TObjFunc
	var_340_int = 9395; // 0xd08 PushI
	var_341_int = 10324; // 0xd09 PushI
	var_342_int = 10323; // 0xd0a PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xd0b TObjFunc
	var_343_int = 9407; // 0xd0d PushI
	var_344_int = 10328; // 0xd0e PushI
	var_345_int = 10335; // 0xd0f PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0xd10 TObjFunc
	goto Label_3349; // 0xd12 Jump
	
Label_3349:
	var_346_bool = 0; // 0xd15 PushV
	func_4871(var_346_bool); // 0xd16 Call
	if(var_346_bool == 0) goto Label_3364; // 0xd18 JumpB
	
Label_3353:
	lshWaitForAnimEnd(); // 0xd19 Func
	var_347_object = var_3_object; // 0xd1b PushT
	if(var_347_object == 0) goto Label_3358; // 0xd1c JumpB
	goto Label_3363; // 0xd1d Jump
	
Label_3363:
	goto Label_3378; // 0xd23 Jump
	
Label_3378:
	return 0; // 0xd32 Return
	
Label_3358:
	var_348_string = ""; // 0xd1e PushV
	var_348_string = var_2_object; // 0xd1f MovT
	func_4760(var_348_string); // 0xd20 Call
	goto Label_3353; // 0xd22 Jump
	
Label_3364:
	var_349_string = "all"; // 0xd24 PushS
	var_350_string = "idle"; // 0xd25 PushS
	PlayAnimation(var_349_string, var_350_string); // 0xd26 Func
	
Label_3368:
	WaitForAnimEnd(); // 0xd28 Func
	var_351_object = var_3_object; // 0xd2a PushT
	if(var_351_object == 0) goto Label_3373; // 0xd2b JumpB
	goto Label_3378; // 0xd2c Jump
	
Label_3373:
	var_352_string = "all"; // 0xd2d PushS
	var_353_string = "idle"; // 0xd2e PushS
	PlayAnimation(var_352_string, var_353_string); // 0xd2f Func
	goto Label_3368; // 0xd31 Jump
}


func_4858(var_703_bool)
{
	var_704_bool = 0; var_705_bool = 0; // 0x12fa PushV
	var_706_string = ""; // 0x12fb PushV
	var_706_string = "No"; // 0x12fc MovS
	func_4760(var_706_string); // 0x12fd Call
	lshWaitForAnimEnd(var_705_bool); // 0x12ff Func
	var_703_bool = var_705_bool; // 0x1301 Mov
	return 2; // 0x1302 Return
}


func_3579(var_0_object, var_1_object, var_2_object, var_3_object, var_479_object, var_480_object)
{
	var_0_object = var_480_object; // 0xdfc TMov
	var_1_object = var_479_object; // 0xdfd TMov
	var_3_object = 0; // 0xdfe TMovB
	var_485_int = 1; // 0xdff PushI
	if(var_485_int == 0) goto Label_3640; // 0xe00 JumpB
	var_486_string = ""; // 0xe01 PushV
	var_486_string = "Neutral"; // 0xe02 MovS
	func_3670(var_480_object, var_486_string); // 0xe03 Call
	var_491_int = 11065; // 0xe05 PushI
	SetMessage(var_491_int); // 0xe06 TObjFunc
	ClearReplies(); // 0xe08 TObjFunc
	var_492_bool = 0; // 0xe0a PushV
	var_492_bool = 0; // 0xe0b MovB
	var_493_bool = 0; var_494_object = Obj(); // 0xe0c PushV
	var_494_object = var_1_object; // 0xe0d MovT
	func_5471(var_494_object); // 0xe0e Call
	if(var_493_bool == 0) goto Label_3607; // 0xe10 JumpB
	var_499_bool = 0; var_500_object = Obj(); // 0xe11 PushV
	var_500_object = var_1_object; // 0xe12 MovT
	func_5459(var_500_object); // 0xe13 Call
	if(var_499_bool == 0) goto Label_3607; // 0xe15 JumpB
	var_492_bool = 1; // 0xe16 MovB
	
Label_3607:
	if(var_492_bool == 0) goto Label_3613; // 0xe17 JumpB
	var_505_int = 11066; // 0xe18 PushI
	var_506_int = 12248; // 0xe19 PushI
	var_507_int = 12247; // 0xe1a PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0xe1b TObjFunc
	
Label_3613:
	var_508_bool = 0; // 0xe1d PushV
	var_508_bool = 0; // 0xe1e MovB
	var_509_bool = 0; var_510_object = Obj(); // 0xe1f PushV
	var_510_object = var_1_object; // 0xe20 MovT
	func_5495(var_510_object); // 0xe21 Call
	if(var_509_bool == 0) goto Label_3626; // 0xe23 JumpB
	var_515_bool = 0; var_516_object = Obj(); // 0xe24 PushV
	var_516_object = var_1_object; // 0xe25 MovT
	func_5483(var_516_object); // 0xe26 Call
	if(var_515_bool == 0) goto Label_3626; // 0xe28 JumpB
	var_508_bool = 1; // 0xe29 MovB
	
Label_3626:
	if(var_508_bool == 0) goto Label_3632; // 0xe2a JumpB
	var_521_int = 11079; // 0xe2b PushI
	var_522_int = 12268; // 0xe2c PushI
	var_523_int = 12263; // 0xe2d PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0xe2e TObjFunc
	
Label_3632:
	var_524_int = 11505; // 0xe30 PushI
	var_525_int = -1; // 0xe31 PushI
	var_526_int = 12707; // 0xe32 PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0xe33 TObjFunc
	goto Label_3640; // 0xe35 Jump
	
Label_3640:
	var_527_bool = 0; // 0xe38 PushV
	func_4871(var_527_bool); // 0xe39 Call
	if(var_527_bool == 0) goto Label_3655; // 0xe3b JumpB
	
Label_3644:
	lshWaitForAnimEnd(); // 0xe3c Func
	var_528_object = var_3_object; // 0xe3e PushT
	if(var_528_object == 0) goto Label_3649; // 0xe3f JumpB
	goto Label_3654; // 0xe40 Jump
	
Label_3654:
	goto Label_3669; // 0xe46 Jump
	
Label_3669:
	return 0; // 0xe55 Return
	
Label_3649:
	var_529_string = ""; // 0xe41 PushV
	var_529_string = var_2_object; // 0xe42 MovT
	func_4760(var_529_string); // 0xe43 Call
	goto Label_3644; // 0xe45 Jump
	
Label_3655:
	var_530_string = "all"; // 0xe47 PushS
	var_531_string = "idle"; // 0xe48 PushS
	PlayAnimation(var_530_string, var_531_string); // 0xe49 Func
	
Label_3659:
	WaitForAnimEnd(); // 0xe4b Func
	var_532_object = var_3_object; // 0xe4d PushT
	if(var_532_object == 0) goto Label_3664; // 0xe4e JumpB
	goto Label_3669; // 0xe4f Jump
	
Label_3664:
	var_533_string = "all"; // 0xe50 PushS
	var_534_string = "idle"; // 0xe51 PushS
	PlayAnimation(var_533_string, var_534_string); // 0xe52 Func
	goto Label_3659; // 0xe54 Jump
}


func_509(var_2_object, var_219_string)
{
	var_220_bool = 0; // 0x1fe PushV
	func_4871(var_220_bool); // 0x1ff Call
	var_221_bool = var_220_bool == 0; // 0x201 Not
	if(var_221_bool == 0) goto Label_516; // 0x202 JumpB
	return 0; // 0x203 Return
	
Label_516:
	var_222_bool = var_219_string == var_2_object; // 0x204 Eq
	if(var_222_bool == 0) goto Label_519; // 0x205 JumpB
	return 0; // 0x206 Return
	
Label_519:
	var_223_string = ""; // 0x207 PushV
	var_223_string = var_219_string; // 0x208 Mov
	func_4760(var_223_string); // 0x209 Call
	var_2_object = var_219_string; // 0x20b TMov
	return 0; // 0x20c Return
}


func_5375(var_261_bool)
{
	var_263_int = 0; var_264_string = ""; // 0x1500 PushV
	var_264_string = "ood1Ospina6"; // 0x1501 MovS
	func_4795(var_263_int, var_264_string); // 0x1502 Call
	var_265_int = 0; // 0x1504 PushI
	var_266_bool = var_263_int == var_265_int; // 0x1505 Eq
	if(var_266_bool == 0) goto Label_5385; // 0x1506 JumpB
	var_261_bool = 1; // 0x1507 MovB
	return 0; // 0x1508 Return
	
Label_5385:
	var_261_bool = 0; // 0x1509 MovB
	return 0; // 0x150a Return
}


