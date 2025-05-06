task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_object = Obj(); // 0x24 PushV
	var_31_object = var_30_bool; // 0x25 Mov
	func_6205(var_31_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x2a PushV
	var_32_object = var_30_bool; // 0x2b Mov
	func_4912(var_32_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xc5 PushI
	if(var_32_int == 0) goto Label_352; // 0xc6 JumpB
	func_5007(); // 0xc8 Call
	var_34_int = 379; // 0xca PushI
	var_35_bool = var_30_string == var_34_int; // 0xcb Eq
	if(var_35_bool == 0) goto Label_235; // 0xcc JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xcd PushV
	var_36_object = var_1_object; // 0xce MovT
	var_37_object = var_0_object; // 0xcf MovT
	func_5214(); // 0xd0 Call
	var_40_string = ""; // 0xd2 PushV
	var_40_string = "Neutral"; // 0xd3 MovS
	func_180(var_31_bool, var_40_string); // 0xd4 Call
	var_55_int = 325; // 0xd6 PushI
	SetMessage(var_55_int); // 0xd7 TObjFunc
	ClearReplies(); // 0xd9 TObjFunc
	var_56_int = 326; // 0xdb PushI
	var_57_int = 383; // 0xdc PushI
	var_58_int = 380; // 0xdd PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xde TObjFunc
	var_59_int = 327; // 0xe0 PushI
	var_60_int = 383; // 0xe1 PushI
	var_61_int = 381; // 0xe2 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xe3 TObjFunc
	var_62_int = 328; // 0xe5 PushI
	var_63_int = 393; // 0xe6 PushI
	var_64_int = 382; // 0xe7 PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_65_int = 393; // 0xeb PushI
	var_66_bool = var_30_string == var_65_int; // 0xec Eq
	if(var_66_bool == 0) goto Label_253; // 0xed JumpB
	var_67_string = ""; // 0xee PushV
	var_67_string = "Neutral"; // 0xef MovS
	func_180(var_31_bool, var_67_string); // 0xf0 Call
	var_68_int = 338; // 0xf2 PushI
	SetMessage(var_68_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_69_int = 339; // 0xf7 PushI
	var_70_int = 396; // 0xf8 PushI
	var_71_int = 394; // 0xf9 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xfa TObjFunc
	return 0; // 0xfc Return
	
Label_253:
	var_72_int = 396; // 0xfd PushI
	var_73_bool = var_30_string == var_72_int; // 0xfe Eq
	if(var_73_bool == 0) goto Label_276; // 0xff JumpB
	var_74_string = ""; // 0x100 PushV
	var_74_string = "Neutral"; // 0x101 MovS
	func_180(var_31_bool, var_74_string); // 0x102 Call
	var_75_int = 341; // 0x104 PushI
	SetMessage(var_75_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_76_int = 343; // 0x109 PushI
	var_77_int = -1; // 0x10a PushI
	var_78_int = 398; // 0x10b PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x10c TObjFunc
	var_79_int = 344; // 0x10e PushI
	var_80_int = -1; // 0x10f PushI
	var_81_int = 399; // 0x110 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x111 TObjFunc
	return 0; // 0x113 Return
	
Label_276:
	var_82_int = 383; // 0x114 PushI
	var_83_bool = var_30_string == var_82_int; // 0x115 Eq
	if(var_83_bool == 0) goto Label_299; // 0x116 JumpB
	var_84_string = ""; // 0x117 PushV
	var_84_string = "Neutral"; // 0x118 MovS
	func_180(var_31_bool, var_84_string); // 0x119 Call
	var_85_int = 329; // 0x11b PushI
	SetMessage(var_85_int); // 0x11c TObjFunc
	ClearReplies(); // 0x11e TObjFunc
	var_86_int = 330; // 0x120 PushI
	var_87_int = 386; // 0x121 PushI
	var_88_int = 385; // 0x122 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x123 TObjFunc
	var_89_int = 334; // 0x125 PushI
	var_90_int = 390; // 0x126 PushI
	var_91_int = 389; // 0x127 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x128 TObjFunc
	return 0; // 0x12a Return
	
Label_299:
	var_92_int = 390; // 0x12b PushI
	var_93_bool = var_30_string == var_92_int; // 0x12c Eq
	if(var_93_bool == 0) goto Label_322; // 0x12d JumpB
	var_94_string = ""; // 0x12e PushV
	var_94_string = "Neutral"; // 0x12f MovS
	func_180(var_31_bool, var_94_string); // 0x130 Call
	var_95_int = 335; // 0x132 PushI
	SetMessage(var_95_int); // 0x133 TObjFunc
	ClearReplies(); // 0x135 TObjFunc
	var_96_int = 336; // 0x137 PushI
	var_97_int = -1; // 0x138 PushI
	var_98_int = 391; // 0x139 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x13a TObjFunc
	var_99_int = 337; // 0x13c PushI
	var_100_int = -1; // 0x13d PushI
	var_101_int = 392; // 0x13e PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x13f TObjFunc
	return 0; // 0x141 Return
	
Label_322:
	var_102_int = 386; // 0x142 PushI
	var_103_bool = var_30_string == var_102_int; // 0x143 Eq
	if(var_103_bool == 0) goto Label_340; // 0x144 JumpB
	var_104_string = ""; // 0x145 PushV
	var_104_string = "Neutral"; // 0x146 MovS
	func_180(var_31_bool, var_104_string); // 0x147 Call
	var_105_int = 331; // 0x149 PushI
	SetMessage(var_105_int); // 0x14a TObjFunc
	ClearReplies(); // 0x14c TObjFunc
	var_106_int = 333; // 0x14e PushI
	var_107_int = -1; // 0x14f PushI
	var_108_int = 388; // 0x150 PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x151 TObjFunc
	return 0; // 0x153 Return
	
Label_340:
	var_3_string = 1; // 0x154 TMovB
	var_109_bool = 0; // 0x155 PushV
	func_5108(var_109_bool); // 0x156 Call
	if(var_109_bool == 0) goto Label_348; // 0x158 JumpB
	lshStopAnimation(); // 0x159 Func
	goto Label_350; // 0x15b Jump
	
Label_350:
	return 0; // 0x15e Return
	
Label_348:
	StopAnimation(); // 0x15c Func
	
Label_352:
	return 0; // 0x160 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x233 PushI
	if(var_32_int == 0) goto Label_1273; // 0x234 JumpB
	func_5007(); // 0x236 Call
	var_34_int = 3943; // 0x238 PushI
	var_35_bool = var_31_bool == var_34_int; // 0x239 Eq
	if(var_35_bool == 0) goto Label_576; // 0x23a JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x23b PushV
	var_36_object = var_1_object; // 0x23c MovT
	var_37_object = var_0_object; // 0x23d MovT
	func_5318(); // 0x23e Call
	
Label_576:
	var_40_int = 3953; // 0x240 PushI
	var_41_bool = var_31_bool == var_40_int; // 0x241 Eq
	if(var_41_bool == 0) goto Label_584; // 0x242 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x243 PushV
	var_42_object = var_1_object; // 0x244 MovT
	var_43_object = var_0_object; // 0x245 MovT
	func_5318(); // 0x246 Call
	
Label_584:
	var_44_int = 13927; // 0x248 PushI
	var_45_bool = var_31_bool == var_44_int; // 0x249 Eq
	if(var_45_bool == 0) goto Label_592; // 0x24a JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x24b PushV
	var_46_object = var_1_object; // 0x24c MovT
	var_47_object = var_0_object; // 0x24d MovT
	func_5324(); // 0x24e Call
	
Label_592:
	var_50_int = 11813; // 0x250 PushI
	var_51_bool = var_31_bool == var_50_int; // 0x251 Eq
	if(var_51_bool == 0) goto Label_605; // 0x252 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x253 PushV
	var_52_object = var_1_object; // 0x254 MovT
	var_53_object = var_0_object; // 0x255 MovT
	func_5330(var_53_object); // 0x256 Call
	var_96_object = Obj(); var_97_object = Obj(); // 0x258 PushV
	var_96_object = var_1_object; // 0x259 MovT
	var_97_object = var_0_object; // 0x25a MovT
	func_5344(); // 0x25b Call
	
Label_605:
	var_100_int = 11839; // 0x25d PushI
	var_101_bool = var_31_bool == var_100_int; // 0x25e Eq
	if(var_101_bool == 0) goto Label_623; // 0x25f JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x260 PushV
	var_102_object = var_1_object; // 0x261 MovT
	var_103_object = var_0_object; // 0x262 MovT
	func_5324(); // 0x263 Call
	var_104_object = Obj(); var_105_object = Obj(); // 0x265 PushV
	var_104_object = var_1_object; // 0x266 MovT
	var_105_object = var_0_object; // 0x267 MovT
	func_5330(var_105_object); // 0x268 Call
	var_106_object = Obj(); var_107_object = Obj(); // 0x26a PushV
	var_106_object = var_1_object; // 0x26b MovT
	var_107_object = var_0_object; // 0x26c MovT
	func_5344(); // 0x26d Call
	
Label_623:
	var_108_int = 13928; // 0x26f PushI
	var_109_bool = var_31_bool == var_108_int; // 0x270 Eq
	if(var_109_bool == 0) goto Label_631; // 0x271 JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x272 PushV
	var_110_object = var_1_object; // 0x273 MovT
	var_111_object = var_0_object; // 0x274 MovT
	func_5492(); // 0x275 Call
	
Label_631:
	var_112_int = 11853; // 0x277 PushI
	var_113_bool = var_31_bool == var_112_int; // 0x278 Eq
	if(var_113_bool == 0) goto Label_639; // 0x279 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x27a PushV
	var_114_object = var_1_object; // 0x27b MovT
	var_115_object = var_0_object; // 0x27c MovT
	func_5350(); // 0x27d Call
	
Label_639:
	var_190_int = 11854; // 0x27f PushI
	var_191_bool = var_31_bool == var_190_int; // 0x280 Eq
	if(var_191_bool == 0) goto Label_647; // 0x281 JumpB
	var_192_object = Obj(); var_193_object = Obj(); // 0x282 PushV
	var_192_object = var_1_object; // 0x283 MovT
	var_193_object = var_0_object; // 0x284 MovT
	func_5350(); // 0x285 Call
	
Label_647:
	var_194_int = 3942; // 0x287 PushI
	var_195_bool = var_30_string == var_194_int; // 0x288 Eq
	if(var_195_bool == 0) goto Label_742; // 0x289 JumpB
	var_196_string = ""; // 0x28a PushV
	var_196_string = "Neutral"; // 0x28b MovS
	func_546(var_31_bool, var_196_string); // 0x28c Call
	var_211_int = 3640; // 0x28e PushI
	SetMessage(var_211_int); // 0x28f TObjFunc
	ClearReplies(); // 0x291 TObjFunc
	var_212_bool = 0; // 0x293 PushV
	var_212_bool = 0; // 0x294 MovB
	var_213_bool = 0; var_214_object = Obj(); // 0x295 PushV
	var_214_object = var_1_object; // 0x296 MovT
	func_5867(var_214_object); // 0x297 Call
	if(var_213_bool == 0) goto Label_672; // 0x299 JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0x29a PushV
	var_222_object = var_1_object; // 0x29b MovT
	func_5879(var_222_object); // 0x29c Call
	if(var_221_bool == 0) goto Label_672; // 0x29e JumpB
	var_212_bool = 1; // 0x29f MovB
	
Label_672:
	if(var_212_bool == 0) goto Label_678; // 0x2a0 JumpB
	var_227_int = 3641; // 0x2a1 PushI
	var_228_int = 3945; // 0x2a2 PushI
	var_229_int = 3943; // 0x2a3 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x2a4 TObjFunc
	
Label_678:
	var_230_bool = 0; // 0x2a6 PushV
	var_230_bool = 0; // 0x2a7 MovB
	var_231_bool = 0; var_232_object = Obj(); // 0x2a8 PushV
	var_232_object = var_1_object; // 0x2a9 MovT
	func_5855(var_232_object); // 0x2aa Call
	if(var_231_bool == 0) goto Label_691; // 0x2ac JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0x2ad PushV
	var_238_object = var_1_object; // 0x2ae MovT
	func_5891(var_238_object); // 0x2af Call
	if(var_237_bool == 0) goto Label_691; // 0x2b1 JumpB
	var_230_bool = 1; // 0x2b2 MovB
	
Label_691:
	if(var_230_bool == 0) goto Label_697; // 0x2b3 JumpB
	var_243_int = 12733; // 0x2b4 PushI
	var_244_int = 11803; // 0x2b5 PushI
	var_245_int = 13927; // 0x2b6 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x2b7 TObjFunc
	
Label_697:
	var_246_bool = 0; // 0x2b9 PushV
	var_246_bool = 0; // 0x2ba MovB
	var_247_bool = 0; // 0x2bb PushV
	var_247_bool = 0; // 0x2bc MovB
	var_248_bool = 0; // 0x2bd PushV
	var_248_bool = 0; // 0x2be MovB
	var_249_bool = 0; var_250_object = Obj(); // 0x2bf PushV
	var_250_object = var_1_object; // 0x2c0 MovT
	func_5903(var_250_object); // 0x2c1 Call
	if(var_249_bool == 0) goto Label_714; // 0x2c3 JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0x2c4 PushV
	var_256_object = var_1_object; // 0x2c5 MovT
	func_5915(var_256_object); // 0x2c6 Call
	if(var_255_bool == 0) goto Label_714; // 0x2c8 JumpB
	var_248_bool = 1; // 0x2c9 MovB
	
Label_714:
	if(var_248_bool == 0) goto Label_722; // 0x2ca JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x2cb PushV
	var_258_object = var_1_object; // 0x2cc MovT
	func_5920(var_258_object); // 0x2cd Call
	var_263_bool = var_257_bool == 0; // 0x2cf Not
	if(var_263_bool == 0) goto Label_722; // 0x2d0 JumpB
	var_247_bool = 1; // 0x2d1 MovB
	
Label_722:
	if(var_247_bool == 0) goto Label_730; // 0x2d2 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x2d3 PushV
	var_265_object = var_1_object; // 0x2d4 MovT
	func_5932(var_265_object); // 0x2d5 Call
	var_270_bool = var_264_bool == 0; // 0x2d7 Not
	if(var_270_bool == 0) goto Label_730; // 0x2d8 JumpB
	var_246_bool = 1; // 0x2d9 MovB
	
Label_730:
	if(var_246_bool == 0) goto Label_736; // 0x2da JumpB
	var_271_int = 12734; // 0x2db PushI
	var_272_int = 11840; // 0x2dc PushI
	var_273_int = 13928; // 0x2dd PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x2de TObjFunc
	
Label_736:
	var_274_int = 3642; // 0x2e0 PushI
	var_275_int = -1; // 0x2e1 PushI
	var_276_int = 3944; // 0x2e2 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x2e3 TObjFunc
	return 0; // 0x2e5 Return
	
Label_742:
	var_277_int = 11840; // 0x2e6 PushI
	var_278_bool = var_30_string == var_277_int; // 0x2e7 Eq
	if(var_278_bool == 0) goto Label_760; // 0x2e8 JumpB
	var_279_string = ""; // 0x2e9 PushV
	var_279_string = "Neutral"; // 0x2ea MovS
	func_546(var_31_bool, var_279_string); // 0x2eb Call
	var_280_int = 10719; // 0x2ed PushI
	SetMessage(var_280_int); // 0x2ee TObjFunc
	ClearReplies(); // 0x2f0 TObjFunc
	var_281_int = 10720; // 0x2f2 PushI
	var_282_int = 11842; // 0x2f3 PushI
	var_283_int = 11841; // 0x2f4 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x2f5 TObjFunc
	return 0; // 0x2f7 Return
	
Label_760:
	var_284_int = 11842; // 0x2f8 PushI
	var_285_bool = var_30_string == var_284_int; // 0x2f9 Eq
	if(var_285_bool == 0) goto Label_788; // 0x2fa JumpB
	var_286_string = ""; // 0x2fb PushV
	var_286_string = "Neutral"; // 0x2fc MovS
	func_546(var_31_bool, var_286_string); // 0x2fd Call
	var_287_int = 10721; // 0x2ff PushI
	SetMessage(var_287_int); // 0x300 TObjFunc
	ClearReplies(); // 0x302 TObjFunc
	var_288_int = 10722; // 0x304 PushI
	var_289_int = 11844; // 0x305 PushI
	var_290_int = 11843; // 0x306 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x307 TObjFunc
	var_291_int = 10733; // 0x309 PushI
	var_292_int = 11844; // 0x30a PushI
	var_293_int = 11855; // 0x30b PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x30c TObjFunc
	var_294_int = 10734; // 0x30e PushI
	var_295_int = 11858; // 0x30f PushI
	var_296_int = 11857; // 0x310 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x311 TObjFunc
	return 0; // 0x313 Return
	
Label_788:
	var_297_int = 11858; // 0x314 PushI
	var_298_bool = var_30_string == var_297_int; // 0x315 Eq
	if(var_298_bool == 0) goto Label_811; // 0x316 JumpB
	var_299_string = ""; // 0x317 PushV
	var_299_string = "Neutral"; // 0x318 MovS
	func_546(var_31_bool, var_299_string); // 0x319 Call
	var_300_int = 10735; // 0x31b PushI
	SetMessage(var_300_int); // 0x31c TObjFunc
	ClearReplies(); // 0x31e TObjFunc
	var_301_int = 10736; // 0x320 PushI
	var_302_int = 11844; // 0x321 PushI
	var_303_int = 11859; // 0x322 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x323 TObjFunc
	var_304_int = 10737; // 0x325 PushI
	var_305_int = 11844; // 0x326 PushI
	var_306_int = 11861; // 0x327 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x328 TObjFunc
	return 0; // 0x32a Return
	
Label_811:
	var_307_int = 11844; // 0x32b PushI
	var_308_bool = var_30_string == var_307_int; // 0x32c Eq
	if(var_308_bool == 0) goto Label_839; // 0x32d JumpB
	var_309_string = ""; // 0x32e PushV
	var_309_string = "Neutral"; // 0x32f MovS
	func_546(var_31_bool, var_309_string); // 0x330 Call
	var_310_int = 10723; // 0x332 PushI
	SetMessage(var_310_int); // 0x333 TObjFunc
	ClearReplies(); // 0x335 TObjFunc
	var_311_int = 10724; // 0x337 PushI
	var_312_int = 11846; // 0x338 PushI
	var_313_int = 11845; // 0x339 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x33a TObjFunc
	var_314_int = 10728; // 0x33c PushI
	var_315_int = 11846; // 0x33d PushI
	var_316_int = 11849; // 0x33e PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x33f TObjFunc
	var_317_int = 10729; // 0x341 PushI
	var_318_int = 11852; // 0x342 PushI
	var_319_int = 11851; // 0x343 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x344 TObjFunc
	return 0; // 0x346 Return
	
Label_839:
	var_320_int = 11852; // 0x347 PushI
	var_321_bool = var_30_string == var_320_int; // 0x348 Eq
	if(var_321_bool == 0) goto Label_862; // 0x349 JumpB
	var_322_string = ""; // 0x34a PushV
	var_322_string = "Neutral"; // 0x34b MovS
	func_546(var_31_bool, var_322_string); // 0x34c Call
	var_323_int = 10730; // 0x34e PushI
	SetMessage(var_323_int); // 0x34f TObjFunc
	ClearReplies(); // 0x351 TObjFunc
	var_324_int = 10731; // 0x353 PushI
	var_325_int = -1; // 0x354 PushI
	var_326_int = 11853; // 0x355 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x356 TObjFunc
	var_327_int = 10732; // 0x358 PushI
	var_328_int = -1; // 0x359 PushI
	var_329_int = 11854; // 0x35a PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x35b TObjFunc
	return 0; // 0x35d Return
	
Label_862:
	var_330_int = 11846; // 0x35e PushI
	var_331_bool = var_30_string == var_330_int; // 0x35f Eq
	if(var_331_bool == 0) goto Label_885; // 0x360 JumpB
	var_332_string = ""; // 0x361 PushV
	var_332_string = "Neutral"; // 0x362 MovS
	func_546(var_31_bool, var_332_string); // 0x363 Call
	var_333_int = 10725; // 0x365 PushI
	SetMessage(var_333_int); // 0x366 TObjFunc
	ClearReplies(); // 0x368 TObjFunc
	var_334_int = 10726; // 0x36a PushI
	var_335_int = -1; // 0x36b PushI
	var_336_int = 11847; // 0x36c PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x36d TObjFunc
	var_337_int = 10727; // 0x36f PushI
	var_338_int = -1; // 0x370 PushI
	var_339_int = 11848; // 0x371 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x372 TObjFunc
	return 0; // 0x374 Return
	
Label_885:
	var_340_int = 11803; // 0x375 PushI
	var_341_bool = var_30_string == var_340_int; // 0x376 Eq
	if(var_341_bool == 0) goto Label_913; // 0x377 JumpB
	var_342_string = ""; // 0x378 PushV
	var_342_string = "Neutral"; // 0x379 MovS
	func_546(var_31_bool, var_342_string); // 0x37a Call
	var_343_int = 10689; // 0x37c PushI
	SetMessage(var_343_int); // 0x37d TObjFunc
	ClearReplies(); // 0x37f TObjFunc
	var_344_int = 10690; // 0x381 PushI
	var_345_int = 11805; // 0x382 PushI
	var_346_int = 11804; // 0x383 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x384 TObjFunc
	var_347_int = 10715; // 0x386 PushI
	var_348_int = 11807; // 0x387 PushI
	var_349_int = 11835; // 0x388 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x389 TObjFunc
	var_350_int = 10716; // 0x38b PushI
	var_351_int = 11838; // 0x38c PushI
	var_352_int = 11837; // 0x38d PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x38e TObjFunc
	return 0; // 0x390 Return
	
Label_913:
	var_353_int = 11838; // 0x391 PushI
	var_354_bool = var_30_string == var_353_int; // 0x392 Eq
	if(var_354_bool == 0) goto Label_931; // 0x393 JumpB
	var_355_string = ""; // 0x394 PushV
	var_355_string = "Neutral"; // 0x395 MovS
	func_546(var_31_bool, var_355_string); // 0x396 Call
	var_356_int = 10717; // 0x398 PushI
	SetMessage(var_356_int); // 0x399 TObjFunc
	ClearReplies(); // 0x39b TObjFunc
	var_357_int = 10718; // 0x39d PushI
	var_358_int = -1; // 0x39e PushI
	var_359_int = 11839; // 0x39f PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x3a0 TObjFunc
	return 0; // 0x3a2 Return
	
Label_931:
	var_360_int = 11805; // 0x3a3 PushI
	var_361_bool = var_30_string == var_360_int; // 0x3a4 Eq
	if(var_361_bool == 0) goto Label_954; // 0x3a5 JumpB
	var_362_string = ""; // 0x3a6 PushV
	var_362_string = "Neutral"; // 0x3a7 MovS
	func_546(var_31_bool, var_362_string); // 0x3a8 Call
	var_363_int = 10691; // 0x3aa PushI
	SetMessage(var_363_int); // 0x3ab TObjFunc
	ClearReplies(); // 0x3ad TObjFunc
	var_364_int = 10692; // 0x3af PushI
	var_365_int = 11807; // 0x3b0 PushI
	var_366_int = 11806; // 0x3b1 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x3b2 TObjFunc
	var_367_int = 10711; // 0x3b4 PushI
	var_368_int = 11830; // 0x3b5 PushI
	var_369_int = 11829; // 0x3b6 PushI
	AddReply(var_367_int, var_368_int, var_369_int); // 0x3b7 TObjFunc
	return 0; // 0x3b9 Return
	
Label_954:
	var_370_int = 11830; // 0x3ba PushI
	var_371_bool = var_30_string == var_370_int; // 0x3bb Eq
	if(var_371_bool == 0) goto Label_977; // 0x3bc JumpB
	var_372_string = ""; // 0x3bd PushV
	var_372_string = "Neutral"; // 0x3be MovS
	func_546(var_31_bool, var_372_string); // 0x3bf Call
	var_373_int = 10712; // 0x3c1 PushI
	SetMessage(var_373_int); // 0x3c2 TObjFunc
	ClearReplies(); // 0x3c4 TObjFunc
	var_374_int = 10713; // 0x3c6 PushI
	var_375_int = 11807; // 0x3c7 PushI
	var_376_int = 11831; // 0x3c8 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x3c9 TObjFunc
	var_377_int = 10714; // 0x3cb PushI
	var_378_int = 11807; // 0x3cc PushI
	var_379_int = 11833; // 0x3cd PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x3ce TObjFunc
	return 0; // 0x3d0 Return
	
Label_977:
	var_380_int = 11807; // 0x3d1 PushI
	var_381_bool = var_30_string == var_380_int; // 0x3d2 Eq
	if(var_381_bool == 0) goto Label_1005; // 0x3d3 JumpB
	var_382_string = ""; // 0x3d4 PushV
	var_382_string = "Neutral"; // 0x3d5 MovS
	func_546(var_31_bool, var_382_string); // 0x3d6 Call
	var_383_int = 10693; // 0x3d8 PushI
	SetMessage(var_383_int); // 0x3d9 TObjFunc
	ClearReplies(); // 0x3db TObjFunc
	var_384_int = 10694; // 0x3dd PushI
	var_385_int = 11809; // 0x3de PushI
	var_386_int = 11808; // 0x3df PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x3e0 TObjFunc
	var_387_int = 10701; // 0x3e2 PushI
	var_388_int = 11809; // 0x3e3 PushI
	var_389_int = 11816; // 0x3e4 PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x3e5 TObjFunc
	var_390_int = 10702; // 0x3e7 PushI
	var_391_int = 11818; // 0x3e8 PushI
	var_392_int = 11817; // 0x3e9 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x3ea TObjFunc
	return 0; // 0x3ec Return
	
Label_1005:
	var_393_int = 11818; // 0x3ed PushI
	var_394_bool = var_30_string == var_393_int; // 0x3ee Eq
	if(var_394_bool == 0) goto Label_1028; // 0x3ef JumpB
	var_395_string = ""; // 0x3f0 PushV
	var_395_string = "Neutral"; // 0x3f1 MovS
	func_546(var_31_bool, var_395_string); // 0x3f2 Call
	var_396_int = 10703; // 0x3f4 PushI
	SetMessage(var_396_int); // 0x3f5 TObjFunc
	ClearReplies(); // 0x3f7 TObjFunc
	var_397_int = 10704; // 0x3f9 PushI
	var_398_int = 11820; // 0x3fa PushI
	var_399_int = 11819; // 0x3fb PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x3fc TObjFunc
	var_400_int = 10710; // 0x3fe PushI
	var_401_int = 11820; // 0x3ff PushI
	var_402_int = 11827; // 0x400 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x401 TObjFunc
	return 0; // 0x403 Return
	
Label_1028:
	var_403_int = 11820; // 0x404 PushI
	var_404_bool = var_30_string == var_403_int; // 0x405 Eq
	if(var_404_bool == 0) goto Label_1051; // 0x406 JumpB
	var_405_string = ""; // 0x407 PushV
	var_405_string = "Neutral"; // 0x408 MovS
	func_546(var_31_bool, var_405_string); // 0x409 Call
	var_406_int = 10705; // 0x40b PushI
	SetMessage(var_406_int); // 0x40c TObjFunc
	ClearReplies(); // 0x40e TObjFunc
	var_407_int = 10706; // 0x410 PushI
	var_408_int = 11822; // 0x411 PushI
	var_409_int = 11821; // 0x412 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x413 TObjFunc
	var_410_int = 10709; // 0x415 PushI
	var_411_int = 11809; // 0x416 PushI
	var_412_int = 11825; // 0x417 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x418 TObjFunc
	return 0; // 0x41a Return
	
Label_1051:
	var_413_int = 11822; // 0x41b PushI
	var_414_bool = var_30_string == var_413_int; // 0x41c Eq
	if(var_414_bool == 0) goto Label_1069; // 0x41d JumpB
	var_415_string = ""; // 0x41e PushV
	var_415_string = "Neutral"; // 0x41f MovS
	func_546(var_31_bool, var_415_string); // 0x420 Call
	var_416_int = 10707; // 0x422 PushI
	SetMessage(var_416_int); // 0x423 TObjFunc
	ClearReplies(); // 0x425 TObjFunc
	var_417_int = 10708; // 0x427 PushI
	var_418_int = 11809; // 0x428 PushI
	var_419_int = 11823; // 0x429 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x42a TObjFunc
	return 0; // 0x42c Return
	
Label_1069:
	var_420_int = 11809; // 0x42d PushI
	var_421_bool = var_30_string == var_420_int; // 0x42e Eq
	if(var_421_bool == 0) goto Label_1092; // 0x42f JumpB
	var_422_string = ""; // 0x430 PushV
	var_422_string = "Neutral"; // 0x431 MovS
	func_546(var_31_bool, var_422_string); // 0x432 Call
	var_423_int = 10695; // 0x434 PushI
	SetMessage(var_423_int); // 0x435 TObjFunc
	ClearReplies(); // 0x437 TObjFunc
	var_424_int = 10696; // 0x439 PushI
	var_425_int = 11811; // 0x43a PushI
	var_426_int = 11810; // 0x43b PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x43c TObjFunc
	var_427_int = 10700; // 0x43e PushI
	var_428_int = 11811; // 0x43f PushI
	var_429_int = 11814; // 0x440 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x441 TObjFunc
	return 0; // 0x443 Return
	
Label_1092:
	var_430_int = 11811; // 0x444 PushI
	var_431_bool = var_30_string == var_430_int; // 0x445 Eq
	if(var_431_bool == 0) goto Label_1115; // 0x446 JumpB
	var_432_string = ""; // 0x447 PushV
	var_432_string = "Neutral"; // 0x448 MovS
	func_546(var_31_bool, var_432_string); // 0x449 Call
	var_433_int = 10697; // 0x44b PushI
	SetMessage(var_433_int); // 0x44c TObjFunc
	ClearReplies(); // 0x44e TObjFunc
	var_434_int = 10698; // 0x450 PushI
	var_435_int = -1; // 0x451 PushI
	var_436_int = 11812; // 0x452 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x453 TObjFunc
	var_437_int = 10699; // 0x455 PushI
	var_438_int = -1; // 0x456 PushI
	var_439_int = 11813; // 0x457 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x458 TObjFunc
	return 0; // 0x45a Return
	
Label_1115:
	var_440_int = 3945; // 0x45b PushI
	var_441_bool = var_30_string == var_440_int; // 0x45c Eq
	if(var_441_bool == 0) goto Label_1138; // 0x45d JumpB
	var_442_string = ""; // 0x45e PushV
	var_442_string = "Neutral"; // 0x45f MovS
	func_546(var_31_bool, var_442_string); // 0x460 Call
	var_443_int = 3643; // 0x462 PushI
	SetMessage(var_443_int); // 0x463 TObjFunc
	ClearReplies(); // 0x465 TObjFunc
	var_444_int = 3644; // 0x467 PushI
	var_445_int = 3948; // 0x468 PushI
	var_446_int = 3946; // 0x469 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x46a TObjFunc
	var_447_int = 3645; // 0x46c PushI
	var_448_int = 3951; // 0x46d PushI
	var_449_int = 3947; // 0x46e PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x46f TObjFunc
	return 0; // 0x471 Return
	
Label_1138:
	var_450_int = 3951; // 0x472 PushI
	var_451_bool = var_30_string == var_450_int; // 0x473 Eq
	if(var_451_bool == 0) goto Label_1161; // 0x474 JumpB
	var_452_string = ""; // 0x475 PushV
	var_452_string = "Neutral"; // 0x476 MovS
	func_546(var_31_bool, var_452_string); // 0x477 Call
	var_453_int = 3648; // 0x479 PushI
	SetMessage(var_453_int); // 0x47a TObjFunc
	ClearReplies(); // 0x47c TObjFunc
	var_454_int = 3649; // 0x47e PushI
	var_455_int = 3954; // 0x47f PushI
	var_456_int = 3952; // 0x480 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x481 TObjFunc
	var_457_int = 3650; // 0x483 PushI
	var_458_int = -1; // 0x484 PushI
	var_459_int = 3953; // 0x485 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x486 TObjFunc
	return 0; // 0x488 Return
	
Label_1161:
	var_460_int = 3954; // 0x489 PushI
	var_461_bool = var_30_string == var_460_int; // 0x48a Eq
	if(var_461_bool == 0) goto Label_1179; // 0x48b JumpB
	var_462_string = ""; // 0x48c PushV
	var_462_string = "Neutral"; // 0x48d MovS
	func_546(var_31_bool, var_462_string); // 0x48e Call
	var_463_int = 3651; // 0x490 PushI
	SetMessage(var_463_int); // 0x491 TObjFunc
	ClearReplies(); // 0x493 TObjFunc
	var_464_int = 3654; // 0x495 PushI
	var_465_int = 3958; // 0x496 PushI
	var_466_int = 3957; // 0x497 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x498 TObjFunc
	return 0; // 0x49a Return
	
Label_1179:
	var_467_int = 3958; // 0x49b PushI
	var_468_bool = var_30_string == var_467_int; // 0x49c Eq
	if(var_468_bool == 0) goto Label_1197; // 0x49d JumpB
	var_469_string = ""; // 0x49e PushV
	var_469_string = "Neutral"; // 0x49f MovS
	func_546(var_31_bool, var_469_string); // 0x4a0 Call
	var_470_int = 3655; // 0x4a2 PushI
	SetMessage(var_470_int); // 0x4a3 TObjFunc
	ClearReplies(); // 0x4a5 TObjFunc
	var_471_int = 3656; // 0x4a7 PushI
	var_472_int = 3948; // 0x4a8 PushI
	var_473_int = 3959; // 0x4a9 PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x4aa TObjFunc
	return 0; // 0x4ac Return
	
Label_1197:
	var_474_int = 3948; // 0x4ad PushI
	var_475_bool = var_30_string == var_474_int; // 0x4ae Eq
	if(var_475_bool == 0) goto Label_1220; // 0x4af JumpB
	var_476_string = ""; // 0x4b0 PushV
	var_476_string = "Neutral"; // 0x4b1 MovS
	func_546(var_31_bool, var_476_string); // 0x4b2 Call
	var_477_int = 3646; // 0x4b4 PushI
	SetMessage(var_477_int); // 0x4b5 TObjFunc
	ClearReplies(); // 0x4b7 TObjFunc
	var_478_int = 3647; // 0x4b9 PushI
	var_479_int = 3955; // 0x4ba PushI
	var_480_int = 3950; // 0x4bb PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x4bc TObjFunc
	var_481_int = 3657; // 0x4be PushI
	var_482_int = 3955; // 0x4bf PushI
	var_483_int = 3961; // 0x4c0 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x4c1 TObjFunc
	return 0; // 0x4c3 Return
	
Label_1220:
	var_484_int = 3955; // 0x4c4 PushI
	var_485_bool = var_30_string == var_484_int; // 0x4c5 Eq
	if(var_485_bool == 0) goto Label_1238; // 0x4c6 JumpB
	var_486_string = ""; // 0x4c7 PushV
	var_486_string = "Neutral"; // 0x4c8 MovS
	func_546(var_31_bool, var_486_string); // 0x4c9 Call
	var_487_int = 3652; // 0x4cb PushI
	SetMessage(var_487_int); // 0x4cc TObjFunc
	ClearReplies(); // 0x4ce TObjFunc
	var_488_int = 3653; // 0x4d0 PushI
	var_489_int = 3963; // 0x4d1 PushI
	var_490_int = 3956; // 0x4d2 PushI
	AddReply(var_488_int, var_489_int, var_490_int); // 0x4d3 TObjFunc
	return 0; // 0x4d5 Return
	
Label_1238:
	var_491_int = 3963; // 0x4d6 PushI
	var_492_bool = var_30_string == var_491_int; // 0x4d7 Eq
	if(var_492_bool == 0) goto Label_1261; // 0x4d8 JumpB
	var_493_string = ""; // 0x4d9 PushV
	var_493_string = "Neutral"; // 0x4da MovS
	func_546(var_31_bool, var_493_string); // 0x4db Call
	var_494_int = 3658; // 0x4dd PushI
	SetMessage(var_494_int); // 0x4de TObjFunc
	ClearReplies(); // 0x4e0 TObjFunc
	var_495_int = 3659; // 0x4e2 PushI
	var_496_int = -1; // 0x4e3 PushI
	var_497_int = 3964; // 0x4e4 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x4e5 TObjFunc
	var_498_int = 3660; // 0x4e7 PushI
	var_499_int = -1; // 0x4e8 PushI
	var_500_int = 3965; // 0x4e9 PushI
	AddReply(var_498_int, var_499_int, var_500_int); // 0x4ea TObjFunc
	return 0; // 0x4ec Return
	
Label_1261:
	var_3_string = 1; // 0x4ed TMovB
	var_501_bool = 0; // 0x4ee PushV
	func_5108(var_501_bool); // 0x4ef Call
	if(var_501_bool == 0) goto Label_1269; // 0x4f1 JumpB
	lshStopAnimation(); // 0x4f2 Func
	goto Label_1271; // 0x4f4 Jump
	
Label_1271:
	return 0; // 0x4f7 Return
	
Label_1269:
	StopAnimation(); // 0x4f5 Func
	
Label_1273:
	return 0; // 0x4f9 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x6a2 PushI
	if(var_32_int == 0) goto Label_3345; // 0x6a3 JumpB
	func_5007(); // 0x6a5 Call
	var_34_int = 6875; // 0x6a7 PushI
	var_35_bool = var_31_bool == var_34_int; // 0x6a8 Eq
	if(var_35_bool == 0) goto Label_1711; // 0x6a9 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x6aa PushV
	var_36_object = var_1_object; // 0x6ab MovT
	var_37_object = var_0_object; // 0x6ac MovT
	func_5110(); // 0x6ad Call
	
Label_1711:
	var_40_int = 6876; // 0x6af PushI
	var_41_bool = var_31_bool == var_40_int; // 0x6b0 Eq
	if(var_41_bool == 0) goto Label_1719; // 0x6b1 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x6b2 PushV
	var_42_object = var_1_object; // 0x6b3 MovT
	var_43_object = var_0_object; // 0x6b4 MovT
	func_5110(); // 0x6b5 Call
	
Label_1719:
	var_44_int = 9490; // 0x6b7 PushI
	var_45_bool = var_31_bool == var_44_int; // 0x6b8 Eq
	if(var_45_bool == 0) goto Label_1732; // 0x6b9 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x6ba PushV
	var_46_object = var_1_object; // 0x6bb MovT
	var_47_object = var_0_object; // 0x6bc MovT
	func_5208(); // 0x6bd Call
	var_50_object = Obj(); var_51_object = Obj(); // 0x6bf PushV
	var_50_object = var_1_object; // 0x6c0 MovT
	var_51_object = var_0_object; // 0x6c1 MovT
	func_5199(); // 0x6c2 Call
	
Label_1732:
	var_79_int = 9481; // 0x6c4 PushI
	var_80_bool = var_31_bool == var_79_int; // 0x6c5 Eq
	if(var_80_bool == 0) goto Label_1740; // 0x6c6 JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0x6c7 PushV
	var_81_object = var_1_object; // 0x6c8 MovT
	var_82_object = var_0_object; // 0x6c9 MovT
	func_5208(); // 0x6ca Call
	
Label_1740:
	var_83_int = 9482; // 0x6cc PushI
	var_84_bool = var_31_bool == var_83_int; // 0x6cd Eq
	if(var_84_bool == 0) goto Label_1748; // 0x6ce JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x6cf PushV
	var_85_object = var_1_object; // 0x6d0 MovT
	var_86_object = var_0_object; // 0x6d1 MovT
	func_5208(); // 0x6d2 Call
	
Label_1748:
	var_87_int = 8635; // 0x6d4 PushI
	var_88_bool = var_31_bool == var_87_int; // 0x6d5 Eq
	if(var_88_bool == 0) goto Label_1756; // 0x6d6 JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0x6d7 PushV
	var_89_object = var_1_object; // 0x6d8 MovT
	var_90_object = var_0_object; // 0x6d9 MovT
	func_5116(); // 0x6da Call
	
Label_1756:
	var_93_int = 8661; // 0x6dc PushI
	var_94_bool = var_31_bool == var_93_int; // 0x6dd Eq
	if(var_94_bool == 0) goto Label_1764; // 0x6de JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x6df PushV
	var_95_object = var_1_object; // 0x6e0 MovT
	var_96_object = var_0_object; // 0x6e1 MovT
	func_5122(); // 0x6e2 Call
	
Label_1764:
	var_99_int = 8662; // 0x6e4 PushI
	var_100_bool = var_31_bool == var_99_int; // 0x6e5 Eq
	if(var_100_bool == 0) goto Label_1772; // 0x6e6 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0x6e7 PushV
	var_101_object = var_1_object; // 0x6e8 MovT
	var_102_object = var_0_object; // 0x6e9 MovT
	func_5122(); // 0x6ea Call
	
Label_1772:
	var_103_int = 8675; // 0x6ec PushI
	var_104_bool = var_31_bool == var_103_int; // 0x6ed Eq
	if(var_104_bool == 0) goto Label_1780; // 0x6ee JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x6ef PushV
	var_105_object = var_1_object; // 0x6f0 MovT
	var_106_object = var_0_object; // 0x6f1 MovT
	func_5163(); // 0x6f2 Call
	
Label_1780:
	var_109_int = 8676; // 0x6f4 PushI
	var_110_bool = var_31_bool == var_109_int; // 0x6f5 Eq
	if(var_110_bool == 0) goto Label_1788; // 0x6f6 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x6f7 PushV
	var_111_object = var_1_object; // 0x6f8 MovT
	var_112_object = var_0_object; // 0x6f9 MovT
	func_5163(); // 0x6fa Call
	
Label_1788:
	var_113_int = 8697; // 0x6fc PushI
	var_114_bool = var_31_bool == var_113_int; // 0x6fd Eq
	if(var_114_bool == 0) goto Label_1796; // 0x6fe JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x6ff PushV
	var_115_object = var_1_object; // 0x700 MovT
	var_116_object = var_0_object; // 0x701 MovT
	func_5169(); // 0x702 Call
	
Label_1796:
	var_119_int = 8706; // 0x704 PushI
	var_120_bool = var_31_bool == var_119_int; // 0x705 Eq
	if(var_120_bool == 0) goto Label_1804; // 0x706 JumpB
	var_121_object = Obj(); var_122_object = Obj(); // 0x707 PushV
	var_121_object = var_1_object; // 0x708 MovT
	var_122_object = var_0_object; // 0x709 MovT
	func_5175(); // 0x70a Call
	
Label_1804:
	var_125_int = 8709; // 0x70c PushI
	var_126_bool = var_31_bool == var_125_int; // 0x70d Eq
	if(var_126_bool == 0) goto Label_1812; // 0x70e JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0x70f PushV
	var_127_object = var_1_object; // 0x710 MovT
	var_128_object = var_0_object; // 0x711 MovT
	func_5175(); // 0x712 Call
	
Label_1812:
	var_129_int = 8717; // 0x714 PushI
	var_130_bool = var_31_bool == var_129_int; // 0x715 Eq
	if(var_130_bool == 0) goto Label_1820; // 0x716 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x717 PushV
	var_131_object = var_1_object; // 0x718 MovT
	var_132_object = var_0_object; // 0x719 MovT
	func_5181(); // 0x71a Call
	
Label_1820:
	var_135_int = 8731; // 0x71c PushI
	var_136_bool = var_31_bool == var_135_int; // 0x71d Eq
	if(var_136_bool == 0) goto Label_1828; // 0x71e JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x71f PushV
	var_137_object = var_1_object; // 0x720 MovT
	var_138_object = var_0_object; // 0x721 MovT
	func_5187(); // 0x722 Call
	
Label_1828:
	var_141_int = 8732; // 0x724 PushI
	var_142_bool = var_31_bool == var_141_int; // 0x725 Eq
	if(var_142_bool == 0) goto Label_1836; // 0x726 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x727 PushV
	var_143_object = var_1_object; // 0x728 MovT
	var_144_object = var_0_object; // 0x729 MovT
	func_5187(); // 0x72a Call
	
Label_1836:
	var_145_int = 8745; // 0x72c PushI
	var_146_bool = var_31_bool == var_145_int; // 0x72d Eq
	if(var_146_bool == 0) goto Label_1844; // 0x72e JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x72f PushV
	var_147_object = var_1_object; // 0x730 MovT
	var_148_object = var_0_object; // 0x731 MovT
	func_5193(); // 0x732 Call
	
Label_1844:
	var_151_int = 5922; // 0x734 PushI
	var_152_bool = var_30_string == var_151_int; // 0x735 Eq
	if(var_152_bool == 0) goto Label_2153; // 0x736 JumpB
	var_153_bool = 0; // 0x737 PushV
	var_153_bool = 0; // 0x738 MovB
	var_154_bool = 0; // 0x739 PushV
	var_154_bool = 0; // 0x73a MovB
	var_155_bool = 0; // 0x73b PushV
	var_155_bool = 0; // 0x73c MovB
	var_156_bool = 0; // 0x73d PushV
	var_156_bool = 0; // 0x73e MovB
	var_157_bool = 0; var_158_object = Obj(); // 0x73f PushV
	var_158_object = var_1_object; // 0x740 MovT
	func_5533(var_158_object); // 0x741 Call
	if(var_157_bool == 0) goto Label_1867; // 0x743 JumpB
	var_165_bool = 0; var_166_object = Obj(); // 0x744 PushV
	var_166_object = var_1_object; // 0x745 MovT
	func_5581(var_166_object); // 0x746 Call
	var_171_bool = var_165_bool == 0; // 0x748 Not
	if(var_171_bool == 0) goto Label_1867; // 0x749 JumpB
	var_156_bool = 1; // 0x74a MovB
	
Label_1867:
	if(var_156_bool == 0) goto Label_1875; // 0x74b JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x74c PushV
	var_173_object = var_1_object; // 0x74d MovT
	func_5569(var_173_object); // 0x74e Call
	var_178_bool = var_172_bool == 0; // 0x750 Not
	if(var_178_bool == 0) goto Label_1875; // 0x751 JumpB
	var_155_bool = 1; // 0x752 MovB
	
Label_1875:
	if(var_155_bool == 0) goto Label_1882; // 0x753 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x754 PushV
	var_180_object = var_1_object; // 0x755 MovT
	func_5725(var_180_object); // 0x756 Call
	if(var_179_bool == 0) goto Label_1882; // 0x758 JumpB
	var_154_bool = 1; // 0x759 MovB
	
Label_1882:
	if(var_154_bool == 0) goto Label_1890; // 0x75a JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x75b PushV
	var_186_object = var_1_object; // 0x75c MovT
	func_5737(var_186_object); // 0x75d Call
	var_191_bool = var_185_bool == 0; // 0x75f Not
	if(var_191_bool == 0) goto Label_1890; // 0x760 JumpB
	var_153_bool = 1; // 0x761 MovB
	
Label_1890:
	if(var_153_bool == 0) goto Label_1927; // 0x762 JumpB
	var_192_object = Obj(); var_193_object = Obj(); // 0x763 PushV
	var_192_object = var_1_object; // 0x764 MovT
	var_193_object = var_0_object; // 0x765 MovT
	func_5220(); // 0x766 Call
	var_196_string = ""; // 0x768 PushV
	var_196_string = "Neutral"; // 0x769 MovS
	func_1681(var_31_bool, var_196_string); // 0x76a Call
	var_211_int = 5377; // 0x76c PushI
	SetMessage(var_211_int); // 0x76d TObjFunc
	ClearReplies(); // 0x76f TObjFunc
	var_212_bool = 0; var_213_object = Obj(); // 0x771 PushV
	var_213_object = var_1_object; // 0x772 MovT
	func_5749(var_213_object); // 0x773 Call
	var_218_bool = var_212_bool == 0; // 0x775 Not
	if(var_218_bool == 0) goto Label_1916; // 0x776 JumpB
	var_219_int = 5379; // 0x777 PushI
	var_220_int = 5964; // 0x778 PushI
	var_221_int = 5924; // 0x779 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x77a TObjFunc
	
Label_1916:
	var_222_bool = 0; var_223_object = Obj(); // 0x77c PushV
	var_223_object = var_1_object; // 0x77d MovT
	func_5749(var_223_object); // 0x77e Call
	if(var_222_bool == 0) goto Label_1926; // 0x780 JumpB
	var_224_int = 5380; // 0x781 PushI
	var_225_int = 6864; // 0x782 PushI
	var_226_int = 5925; // 0x783 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x784 TObjFunc
	
Label_1926:
	return 0; // 0x786 Return
	
Label_1927:
	var_227_bool = 0; // 0x787 PushV
	var_227_bool = 0; // 0x788 MovB
	var_228_bool = 0; // 0x789 PushV
	var_228_bool = 0; // 0x78a MovB
	var_229_bool = 0; // 0x78b PushV
	var_229_bool = 0; // 0x78c MovB
	var_230_bool = 0; var_231_object = Obj(); // 0x78d PushV
	var_231_object = var_1_object; // 0x78e MovT
	func_5725(var_231_object); // 0x78f Call
	var_232_bool = var_230_bool == 0; // 0x791 Not
	if(var_232_bool == 0) goto Label_1945; // 0x792 JumpB
	var_233_bool = 0; var_234_object = Obj(); // 0x793 PushV
	var_234_object = var_1_object; // 0x794 MovT
	func_5737(var_234_object); // 0x795 Call
	if(var_233_bool == 0) goto Label_1945; // 0x797 JumpB
	var_229_bool = 1; // 0x798 MovB
	
Label_1945:
	if(var_229_bool == 0) goto Label_1953; // 0x799 JumpB
	var_235_bool = 0; var_236_object = Obj(); // 0x79a PushV
	var_236_object = var_1_object; // 0x79b MovT
	func_5581(var_236_object); // 0x79c Call
	var_237_bool = var_235_bool == 0; // 0x79e Not
	if(var_237_bool == 0) goto Label_1953; // 0x79f JumpB
	var_228_bool = 1; // 0x7a0 MovB
	
Label_1953:
	if(var_228_bool == 0) goto Label_1961; // 0x7a1 JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0x7a2 PushV
	var_239_object = var_1_object; // 0x7a3 MovT
	func_5569(var_239_object); // 0x7a4 Call
	var_240_bool = var_238_bool == 0; // 0x7a6 Not
	if(var_240_bool == 0) goto Label_1961; // 0x7a7 JumpB
	var_227_bool = 1; // 0x7a8 MovB
	
Label_1961:
	if(var_227_bool == 0) goto Label_1977; // 0x7a9 JumpB
	var_241_string = ""; // 0x7aa PushV
	var_241_string = "Neutral"; // 0x7ab MovS
	func_1681(var_31_bool, var_241_string); // 0x7ac Call
	var_242_int = 8650; // 0x7ae PushI
	SetMessage(var_242_int); // 0x7af TObjFunc
	ClearReplies(); // 0x7b1 TObjFunc
	var_243_int = 8651; // 0x7b3 PushI
	var_244_int = 9477; // 0x7b4 PushI
	var_245_int = 9476; // 0x7b5 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x7b6 TObjFunc
	return 0; // 0x7b8 Return
	
Label_1977:
	var_246_string = ""; // 0x7b9 PushV
	var_246_string = "Neutral"; // 0x7ba MovS
	func_1681(var_31_bool, var_246_string); // 0x7bb Call
	var_247_int = 7779; // 0x7bd PushI
	SetMessage(var_247_int); // 0x7be TObjFunc
	ClearReplies(); // 0x7c0 TObjFunc
	var_248_bool = 0; // 0x7c2 PushV
	var_248_bool = 0; // 0x7c3 MovB
	var_249_bool = 0; var_250_object = Obj(); // 0x7c4 PushV
	var_250_object = var_1_object; // 0x7c5 MovT
	func_5545(var_250_object); // 0x7c6 Call
	if(var_249_bool == 0) goto Label_1999; // 0x7c8 JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0x7c9 PushV
	var_256_object = var_1_object; // 0x7ca MovT
	func_5593(var_256_object); // 0x7cb Call
	if(var_255_bool == 0) goto Label_1999; // 0x7cd JumpB
	var_248_bool = 1; // 0x7ce MovB
	
Label_1999:
	if(var_248_bool == 0) goto Label_2005; // 0x7cf JumpB
	var_261_int = 7815; // 0x7d0 PushI
	var_262_int = 8618; // 0x7d1 PushI
	var_263_int = 8617; // 0x7d2 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x7d3 TObjFunc
	
Label_2005:
	var_264_bool = 0; // 0x7d5 PushV
	var_264_bool = 0; // 0x7d6 MovB
	var_265_bool = 0; var_266_object = Obj(); // 0x7d7 PushV
	var_266_object = var_1_object; // 0x7d8 MovT
	func_5992(var_266_object); // 0x7d9 Call
	if(var_265_bool == 0) goto Label_2018; // 0x7db JumpB
	var_271_bool = 0; var_272_object = Obj(); // 0x7dc PushV
	var_272_object = var_1_object; // 0x7dd MovT
	func_5557(var_272_object); // 0x7de Call
	if(var_271_bool == 0) goto Label_2018; // 0x7e0 JumpB
	var_264_bool = 1; // 0x7e1 MovB
	
Label_2018:
	if(var_264_bool == 0) goto Label_2024; // 0x7e2 JumpB
	var_277_int = 7783; // 0x7e3 PushI
	var_278_int = 8607; // 0x7e4 PushI
	var_279_int = 8584; // 0x7e5 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x7e6 TObjFunc
	
Label_2024:
	var_280_bool = 0; // 0x7e8 PushV
	var_280_bool = 0; // 0x7e9 MovB
	var_281_bool = 0; // 0x7ea PushV
	var_281_bool = 0; // 0x7eb MovB
	var_282_bool = 0; var_283_object = Obj(); // 0x7ec PushV
	var_283_object = var_1_object; // 0x7ed MovT
	func_6004(var_283_object); // 0x7ee Call
	if(var_282_bool == 0) goto Label_2039; // 0x7f0 JumpB
	var_288_bool = 0; var_289_object = Obj(); // 0x7f1 PushV
	var_289_object = var_1_object; // 0x7f2 MovT
	func_5761(var_288_bool, var_289_object); // 0x7f3 Call
	if(var_288_bool == 0) goto Label_2039; // 0x7f5 JumpB
	var_281_bool = 1; // 0x7f6 MovB
	
Label_2039:
	if(var_281_bool == 0) goto Label_2046; // 0x7f7 JumpB
	var_299_bool = 0; var_300_object = Obj(); // 0x7f8 PushV
	var_300_object = var_1_object; // 0x7f9 MovT
	func_5641(var_300_object); // 0x7fa Call
	if(var_299_bool == 0) goto Label_2046; // 0x7fc JumpB
	var_280_bool = 1; // 0x7fd MovB
	
Label_2046:
	if(var_280_bool == 0) goto Label_2052; // 0x7fe JumpB
	var_305_int = 7784; // 0x7ff PushI
	var_306_int = 8608; // 0x800 PushI
	var_307_int = 8585; // 0x801 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x802 TObjFunc
	
Label_2052:
	var_308_bool = 0; // 0x804 PushV
	var_308_bool = 0; // 0x805 MovB
	var_309_bool = 0; var_310_object = Obj(); // 0x806 PushV
	var_310_object = var_1_object; // 0x807 MovT
	func_5653(var_310_object); // 0x808 Call
	if(var_309_bool == 0) goto Label_2065; // 0x80a JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0x80b PushV
	var_316_object = var_1_object; // 0x80c MovT
	func_5956(var_316_object); // 0x80d Call
	if(var_315_bool == 0) goto Label_2065; // 0x80f JumpB
	var_308_bool = 1; // 0x810 MovB
	
Label_2065:
	if(var_308_bool == 0) goto Label_2071; // 0x811 JumpB
	var_321_int = 7785; // 0x812 PushI
	var_322_int = 8687; // 0x813 PushI
	var_323_int = 8586; // 0x814 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x815 TObjFunc
	
Label_2071:
	var_324_bool = 0; // 0x817 PushV
	var_324_bool = 0; // 0x818 MovB
	var_325_bool = 0; var_326_object = Obj(); // 0x819 PushV
	var_326_object = var_1_object; // 0x81a MovT
	func_5968(var_326_object); // 0x81b Call
	if(var_325_bool == 0) goto Label_2084; // 0x81d JumpB
	var_331_bool = 0; var_332_object = Obj(); // 0x81e PushV
	var_332_object = var_1_object; // 0x81f MovT
	func_5665(var_332_object); // 0x820 Call
	if(var_331_bool == 0) goto Label_2084; // 0x822 JumpB
	var_324_bool = 1; // 0x823 MovB
	
Label_2084:
	if(var_324_bool == 0) goto Label_2090; // 0x824 JumpB
	var_337_int = 7786; // 0x825 PushI
	var_338_int = 8698; // 0x826 PushI
	var_339_int = 8587; // 0x827 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x828 TObjFunc
	
Label_2090:
	var_340_bool = 0; // 0x82a PushV
	var_340_bool = 0; // 0x82b MovB
	var_341_bool = 0; var_342_object = Obj(); // 0x82c PushV
	var_342_object = var_1_object; // 0x82d MovT
	func_5944(var_342_object); // 0x82e Call
	if(var_341_bool == 0) goto Label_2103; // 0x830 JumpB
	var_347_bool = 0; var_348_object = Obj(); // 0x831 PushV
	var_348_object = var_1_object; // 0x832 MovT
	func_5677(var_348_object); // 0x833 Call
	if(var_347_bool == 0) goto Label_2103; // 0x835 JumpB
	var_340_bool = 1; // 0x836 MovB
	
Label_2103:
	if(var_340_bool == 0) goto Label_2109; // 0x837 JumpB
	var_353_int = 7788; // 0x838 PushI
	var_354_int = 8710; // 0x839 PushI
	var_355_int = 8589; // 0x83a PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x83b TObjFunc
	
Label_2109:
	var_356_bool = 0; // 0x83d PushV
	var_356_bool = 0; // 0x83e MovB
	var_357_bool = 0; var_358_object = Obj(); // 0x83f PushV
	var_358_object = var_1_object; // 0x840 MovT
	func_5843(var_358_object); // 0x841 Call
	if(var_357_bool == 0) goto Label_2122; // 0x843 JumpB
	var_363_bool = 0; var_364_object = Obj(); // 0x844 PushV
	var_364_object = var_1_object; // 0x845 MovT
	func_5689(var_364_object); // 0x846 Call
	if(var_363_bool == 0) goto Label_2122; // 0x848 JumpB
	var_356_bool = 1; // 0x849 MovB
	
Label_2122:
	if(var_356_bool == 0) goto Label_2128; // 0x84a JumpB
	var_369_int = 7797; // 0x84b PushI
	var_370_int = 8613; // 0x84c PushI
	var_371_int = 8598; // 0x84d PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x84e TObjFunc
	
Label_2128:
	var_372_bool = 0; // 0x850 PushV
	var_372_bool = 0; // 0x851 MovB
	var_373_bool = 0; var_374_object = Obj(); // 0x852 PushV
	var_374_object = var_1_object; // 0x853 MovT
	func_5713(var_374_object); // 0x854 Call
	if(var_373_bool == 0) goto Label_2141; // 0x856 JumpB
	var_379_bool = 0; var_380_object = Obj(); // 0x857 PushV
	var_380_object = var_1_object; // 0x858 MovT
	func_5701(var_380_object); // 0x859 Call
	if(var_379_bool == 0) goto Label_2141; // 0x85b JumpB
	var_372_bool = 1; // 0x85c MovB
	
Label_2141:
	if(var_372_bool == 0) goto Label_2147; // 0x85d JumpB
	var_385_int = 7914; // 0x85e PushI
	var_386_int = 8734; // 0x85f PushI
	var_387_int = 8733; // 0x860 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x861 TObjFunc
	
Label_2147:
	var_388_int = 8703; // 0x863 PushI
	var_389_int = -1; // 0x864 PushI
	var_390_int = 9540; // 0x865 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x866 TObjFunc
	return 0; // 0x868 Return
	
Label_2153:
	var_391_int = 8734; // 0x869 PushI
	var_392_bool = var_30_string == var_391_int; // 0x86a Eq
	if(var_392_bool == 0) goto Label_2176; // 0x86b JumpB
	var_393_string = ""; // 0x86c PushV
	var_393_string = "Neutral"; // 0x86d MovS
	func_1681(var_31_bool, var_393_string); // 0x86e Call
	var_394_int = 7915; // 0x870 PushI
	SetMessage(var_394_int); // 0x871 TObjFunc
	ClearReplies(); // 0x873 TObjFunc
	var_395_int = 7916; // 0x875 PushI
	var_396_int = 8737; // 0x876 PushI
	var_397_int = 8735; // 0x877 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x878 TObjFunc
	var_398_int = 7917; // 0x87a PushI
	var_399_int = 8737; // 0x87b PushI
	var_400_int = 8736; // 0x87c PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x87d TObjFunc
	return 0; // 0x87f Return
	
Label_2176:
	var_401_int = 8737; // 0x880 PushI
	var_402_bool = var_30_string == var_401_int; // 0x881 Eq
	if(var_402_bool == 0) goto Label_2194; // 0x882 JumpB
	var_403_string = ""; // 0x883 PushV
	var_403_string = "Neutral"; // 0x884 MovS
	func_1681(var_31_bool, var_403_string); // 0x885 Call
	var_404_int = 7918; // 0x887 PushI
	SetMessage(var_404_int); // 0x888 TObjFunc
	ClearReplies(); // 0x88a TObjFunc
	var_405_int = 7919; // 0x88c PushI
	var_406_int = 8739; // 0x88d PushI
	var_407_int = 8738; // 0x88e PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x88f TObjFunc
	return 0; // 0x891 Return
	
Label_2194:
	var_408_int = 8739; // 0x892 PushI
	var_409_bool = var_30_string == var_408_int; // 0x893 Eq
	if(var_409_bool == 0) goto Label_2212; // 0x894 JumpB
	var_410_string = ""; // 0x895 PushV
	var_410_string = "Neutral"; // 0x896 MovS
	func_1681(var_31_bool, var_410_string); // 0x897 Call
	var_411_int = 7920; // 0x899 PushI
	SetMessage(var_411_int); // 0x89a TObjFunc
	ClearReplies(); // 0x89c TObjFunc
	var_412_int = 7921; // 0x89e PushI
	var_413_int = 8742; // 0x89f PushI
	var_414_int = 8740; // 0x8a0 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x8a1 TObjFunc
	return 0; // 0x8a3 Return
	
Label_2212:
	var_415_int = 8742; // 0x8a4 PushI
	var_416_bool = var_30_string == var_415_int; // 0x8a5 Eq
	if(var_416_bool == 0) goto Label_2230; // 0x8a6 JumpB
	var_417_string = ""; // 0x8a7 PushV
	var_417_string = "Neutral"; // 0x8a8 MovS
	func_1681(var_31_bool, var_417_string); // 0x8a9 Call
	var_418_int = 7922; // 0x8ab PushI
	SetMessage(var_418_int); // 0x8ac TObjFunc
	ClearReplies(); // 0x8ae TObjFunc
	var_419_int = 7923; // 0x8b0 PushI
	var_420_int = 8744; // 0x8b1 PushI
	var_421_int = 8743; // 0x8b2 PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x8b3 TObjFunc
	return 0; // 0x8b5 Return
	
Label_2230:
	var_422_int = 8744; // 0x8b6 PushI
	var_423_bool = var_30_string == var_422_int; // 0x8b7 Eq
	if(var_423_bool == 0) goto Label_2248; // 0x8b8 JumpB
	var_424_string = ""; // 0x8b9 PushV
	var_424_string = "Neutral"; // 0x8ba MovS
	func_1681(var_31_bool, var_424_string); // 0x8bb Call
	var_425_int = 7924; // 0x8bd PushI
	SetMessage(var_425_int); // 0x8be TObjFunc
	ClearReplies(); // 0x8c0 TObjFunc
	var_426_int = 7925; // 0x8c2 PushI
	var_427_int = -1; // 0x8c3 PushI
	var_428_int = 8745; // 0x8c4 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x8c5 TObjFunc
	return 0; // 0x8c7 Return
	
Label_2248:
	var_429_int = 8613; // 0x8c8 PushI
	var_430_bool = var_30_string == var_429_int; // 0x8c9 Eq
	if(var_430_bool == 0) goto Label_2266; // 0x8ca JumpB
	var_431_string = ""; // 0x8cb PushV
	var_431_string = "Neutral"; // 0x8cc MovS
	func_1681(var_31_bool, var_431_string); // 0x8cd Call
	var_432_int = 7812; // 0x8cf PushI
	SetMessage(var_432_int); // 0x8d0 TObjFunc
	ClearReplies(); // 0x8d2 TObjFunc
	var_433_int = 7906; // 0x8d4 PushI
	var_434_int = 8726; // 0x8d5 PushI
	var_435_int = 8725; // 0x8d6 PushI
	AddReply(var_433_int, var_434_int, var_435_int); // 0x8d7 TObjFunc
	return 0; // 0x8d9 Return
	
Label_2266:
	var_436_int = 8726; // 0x8da PushI
	var_437_bool = var_30_string == var_436_int; // 0x8db Eq
	if(var_437_bool == 0) goto Label_2284; // 0x8dc JumpB
	var_438_string = ""; // 0x8dd PushV
	var_438_string = "Neutral"; // 0x8de MovS
	func_1681(var_31_bool, var_438_string); // 0x8df Call
	var_439_int = 7907; // 0x8e1 PushI
	SetMessage(var_439_int); // 0x8e2 TObjFunc
	ClearReplies(); // 0x8e4 TObjFunc
	var_440_int = 7909; // 0x8e6 PushI
	var_441_int = 8730; // 0x8e7 PushI
	var_442_int = 8728; // 0x8e8 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x8e9 TObjFunc
	return 0; // 0x8eb Return
	
Label_2284:
	var_443_int = 8730; // 0x8ec PushI
	var_444_bool = var_30_string == var_443_int; // 0x8ed Eq
	if(var_444_bool == 0) goto Label_2307; // 0x8ee JumpB
	var_445_string = ""; // 0x8ef PushV
	var_445_string = "Neutral"; // 0x8f0 MovS
	func_1681(var_31_bool, var_445_string); // 0x8f1 Call
	var_446_int = 7911; // 0x8f3 PushI
	SetMessage(var_446_int); // 0x8f4 TObjFunc
	ClearReplies(); // 0x8f6 TObjFunc
	var_447_int = 7912; // 0x8f8 PushI
	var_448_int = -1; // 0x8f9 PushI
	var_449_int = 8731; // 0x8fa PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x8fb TObjFunc
	var_450_int = 7913; // 0x8fd PushI
	var_451_int = -1; // 0x8fe PushI
	var_452_int = 8732; // 0x8ff PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x900 TObjFunc
	return 0; // 0x902 Return
	
Label_2307:
	var_453_int = 8710; // 0x903 PushI
	var_454_bool = var_30_string == var_453_int; // 0x904 Eq
	if(var_454_bool == 0) goto Label_2325; // 0x905 JumpB
	var_455_string = ""; // 0x906 PushV
	var_455_string = "Neutral"; // 0x907 MovS
	func_1681(var_31_bool, var_455_string); // 0x908 Call
	var_456_int = 7892; // 0x90a PushI
	SetMessage(var_456_int); // 0x90b TObjFunc
	ClearReplies(); // 0x90d TObjFunc
	var_457_int = 7893; // 0x90f PushI
	var_458_int = 8712; // 0x910 PushI
	var_459_int = 8711; // 0x911 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x912 TObjFunc
	return 0; // 0x914 Return
	
Label_2325:
	var_460_int = 8712; // 0x915 PushI
	var_461_bool = var_30_string == var_460_int; // 0x916 Eq
	if(var_461_bool == 0) goto Label_2359; // 0x917 JumpB
	var_462_string = ""; // 0x918 PushV
	var_462_string = "Neutral"; // 0x919 MovS
	func_1681(var_31_bool, var_462_string); // 0x91a Call
	var_463_int = 7894; // 0x91c PushI
	SetMessage(var_463_int); // 0x91d TObjFunc
	ClearReplies(); // 0x91f TObjFunc
	var_464_bool = 0; var_465_object = Obj(); // 0x921 PushV
	var_465_object = var_1_object; // 0x922 MovT
	func_5605(var_465_object); // 0x923 Call
	if(var_464_bool == 0) goto Label_2347; // 0x925 JumpB
	var_470_int = 7895; // 0x926 PushI
	var_471_int = 8714; // 0x927 PushI
	var_472_int = 8713; // 0x928 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x929 TObjFunc
	
Label_2347:
	var_473_bool = 0; var_474_object = Obj(); // 0x92b PushV
	var_474_object = var_1_object; // 0x92c MovT
	func_5605(var_474_object); // 0x92d Call
	var_475_bool = var_473_bool == 0; // 0x92f Not
	if(var_475_bool == 0) goto Label_2358; // 0x930 JumpB
	var_476_int = 7897; // 0x931 PushI
	var_477_int = 8716; // 0x932 PushI
	var_478_int = 8715; // 0x933 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x934 TObjFunc
	
Label_2358:
	return 0; // 0x936 Return
	
Label_2359:
	var_479_int = 8716; // 0x937 PushI
	var_480_bool = var_30_string == var_479_int; // 0x938 Eq
	if(var_480_bool == 0) goto Label_2377; // 0x939 JumpB
	var_481_string = ""; // 0x93a PushV
	var_481_string = "Neutral"; // 0x93b MovS
	func_1681(var_31_bool, var_481_string); // 0x93c Call
	var_482_int = 7898; // 0x93e PushI
	SetMessage(var_482_int); // 0x93f TObjFunc
	ClearReplies(); // 0x941 TObjFunc
	var_483_int = 7900; // 0x943 PushI
	var_484_int = 8714; // 0x944 PushI
	var_485_int = 8718; // 0x945 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x946 TObjFunc
	return 0; // 0x948 Return
	
Label_2377:
	var_486_int = 8714; // 0x949 PushI
	var_487_bool = var_30_string == var_486_int; // 0x94a Eq
	if(var_487_bool == 0) goto Label_2395; // 0x94b JumpB
	var_488_string = ""; // 0x94c PushV
	var_488_string = "Neutral"; // 0x94d MovS
	func_1681(var_31_bool, var_488_string); // 0x94e Call
	var_489_int = 7896; // 0x950 PushI
	SetMessage(var_489_int); // 0x951 TObjFunc
	ClearReplies(); // 0x953 TObjFunc
	var_490_int = 7899; // 0x955 PushI
	var_491_int = -1; // 0x956 PushI
	var_492_int = 8717; // 0x957 PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x958 TObjFunc
	return 0; // 0x95a Return
	
Label_2395:
	var_493_int = 8698; // 0x95b PushI
	var_494_bool = var_30_string == var_493_int; // 0x95c Eq
	if(var_494_bool == 0) goto Label_2413; // 0x95d JumpB
	var_495_string = ""; // 0x95e PushV
	var_495_string = "Neutral"; // 0x95f MovS
	func_1681(var_31_bool, var_495_string); // 0x960 Call
	var_496_int = 7881; // 0x962 PushI
	SetMessage(var_496_int); // 0x963 TObjFunc
	ClearReplies(); // 0x965 TObjFunc
	var_497_int = 7882; // 0x967 PushI
	var_498_int = 8610; // 0x968 PushI
	var_499_int = 8699; // 0x969 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x96a TObjFunc
	return 0; // 0x96c Return
	
Label_2413:
	var_500_int = 8610; // 0x96d PushI
	var_501_bool = var_30_string == var_500_int; // 0x96e Eq
	if(var_501_bool == 0) goto Label_2436; // 0x96f JumpB
	var_502_string = ""; // 0x970 PushV
	var_502_string = "Neutral"; // 0x971 MovS
	func_1681(var_31_bool, var_502_string); // 0x972 Call
	var_503_int = 7809; // 0x974 PushI
	SetMessage(var_503_int); // 0x975 TObjFunc
	ClearReplies(); // 0x977 TObjFunc
	var_504_int = 7883; // 0x979 PushI
	var_505_int = 8701; // 0x97a PushI
	var_506_int = 8700; // 0x97b PushI
	AddReply(var_504_int, var_505_int, var_506_int); // 0x97c TObjFunc
	var_507_int = 7885; // 0x97e PushI
	var_508_int = 8703; // 0x97f PushI
	var_509_int = 8702; // 0x980 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x981 TObjFunc
	return 0; // 0x983 Return
	
Label_2436:
	var_510_int = 8703; // 0x984 PushI
	var_511_bool = var_30_string == var_510_int; // 0x985 Eq
	if(var_511_bool == 0) goto Label_2454; // 0x986 JumpB
	var_512_string = ""; // 0x987 PushV
	var_512_string = "Neutral"; // 0x988 MovS
	func_1681(var_31_bool, var_512_string); // 0x989 Call
	var_513_int = 7886; // 0x98b PushI
	SetMessage(var_513_int); // 0x98c TObjFunc
	ClearReplies(); // 0x98e TObjFunc
	var_514_int = 7887; // 0x990 PushI
	var_515_int = 8701; // 0x991 PushI
	var_516_int = 8704; // 0x992 PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0x993 TObjFunc
	return 0; // 0x995 Return
	
Label_2454:
	var_517_int = 8701; // 0x996 PushI
	var_518_bool = var_30_string == var_517_int; // 0x997 Eq
	if(var_518_bool == 0) goto Label_2477; // 0x998 JumpB
	var_519_string = ""; // 0x999 PushV
	var_519_string = "Neutral"; // 0x99a MovS
	func_1681(var_31_bool, var_519_string); // 0x99b Call
	var_520_int = 7884; // 0x99d PushI
	SetMessage(var_520_int); // 0x99e TObjFunc
	ClearReplies(); // 0x9a0 TObjFunc
	var_521_int = 7888; // 0x9a2 PushI
	var_522_int = -1; // 0x9a3 PushI
	var_523_int = 8706; // 0x9a4 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x9a5 TObjFunc
	var_524_int = 7889; // 0x9a7 PushI
	var_525_int = 8708; // 0x9a8 PushI
	var_526_int = 8707; // 0x9a9 PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0x9aa TObjFunc
	return 0; // 0x9ac Return
	
Label_2477:
	var_527_int = 8708; // 0x9ad PushI
	var_528_bool = var_30_string == var_527_int; // 0x9ae Eq
	if(var_528_bool == 0) goto Label_2495; // 0x9af JumpB
	var_529_string = ""; // 0x9b0 PushV
	var_529_string = "Neutral"; // 0x9b1 MovS
	func_1681(var_31_bool, var_529_string); // 0x9b2 Call
	var_530_int = 7890; // 0x9b4 PushI
	SetMessage(var_530_int); // 0x9b5 TObjFunc
	ClearReplies(); // 0x9b7 TObjFunc
	var_531_int = 7891; // 0x9b9 PushI
	var_532_int = -1; // 0x9ba PushI
	var_533_int = 8709; // 0x9bb PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x9bc TObjFunc
	return 0; // 0x9be Return
	
Label_2495:
	var_534_int = 8687; // 0x9bf PushI
	var_535_bool = var_30_string == var_534_int; // 0x9c0 Eq
	if(var_535_bool == 0) goto Label_2518; // 0x9c1 JumpB
	var_536_string = ""; // 0x9c2 PushV
	var_536_string = "Neutral"; // 0x9c3 MovS
	func_1681(var_31_bool, var_536_string); // 0x9c4 Call
	var_537_int = 7872; // 0x9c6 PushI
	SetMessage(var_537_int); // 0x9c7 TObjFunc
	ClearReplies(); // 0x9c9 TObjFunc
	var_538_int = 7873; // 0x9cb PushI
	var_539_int = 8609; // 0x9cc PushI
	var_540_int = 8688; // 0x9cd PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x9ce TObjFunc
	var_541_int = 7874; // 0x9d0 PushI
	var_542_int = 8609; // 0x9d1 PushI
	var_543_int = 8689; // 0x9d2 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x9d3 TObjFunc
	return 0; // 0x9d5 Return
	
Label_2518:
	var_544_int = 8609; // 0x9d6 PushI
	var_545_bool = var_30_string == var_544_int; // 0x9d7 Eq
	if(var_545_bool == 0) goto Label_2541; // 0x9d8 JumpB
	var_546_string = ""; // 0x9d9 PushV
	var_546_string = "Neutral"; // 0x9da MovS
	func_1681(var_31_bool, var_546_string); // 0x9db Call
	var_547_int = 7808; // 0x9dd PushI
	SetMessage(var_547_int); // 0x9de TObjFunc
	ClearReplies(); // 0x9e0 TObjFunc
	var_548_int = 7875; // 0x9e2 PushI
	var_549_int = 8692; // 0x9e3 PushI
	var_550_int = 8691; // 0x9e4 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x9e5 TObjFunc
	var_551_int = 7877; // 0x9e7 PushI
	var_552_int = 8694; // 0x9e8 PushI
	var_553_int = 8693; // 0x9e9 PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0x9ea TObjFunc
	return 0; // 0x9ec Return
	
Label_2541:
	var_554_int = 8694; // 0x9ed PushI
	var_555_bool = var_30_string == var_554_int; // 0x9ee Eq
	if(var_555_bool == 0) goto Label_2559; // 0x9ef JumpB
	var_556_string = ""; // 0x9f0 PushV
	var_556_string = "Neutral"; // 0x9f1 MovS
	func_1681(var_31_bool, var_556_string); // 0x9f2 Call
	var_557_int = 7878; // 0x9f4 PushI
	SetMessage(var_557_int); // 0x9f5 TObjFunc
	ClearReplies(); // 0x9f7 TObjFunc
	var_558_int = 7879; // 0x9f9 PushI
	var_559_int = 8692; // 0x9fa PushI
	var_560_int = 8695; // 0x9fb PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0x9fc TObjFunc
	return 0; // 0x9fe Return
	
Label_2559:
	var_561_int = 8692; // 0x9ff PushI
	var_562_bool = var_30_string == var_561_int; // 0xa00 Eq
	if(var_562_bool == 0) goto Label_2577; // 0xa01 JumpB
	var_563_string = ""; // 0xa02 PushV
	var_563_string = "Neutral"; // 0xa03 MovS
	func_1681(var_31_bool, var_563_string); // 0xa04 Call
	var_564_int = 7876; // 0xa06 PushI
	SetMessage(var_564_int); // 0xa07 TObjFunc
	ClearReplies(); // 0xa09 TObjFunc
	var_565_int = 7880; // 0xa0b PushI
	var_566_int = -1; // 0xa0c PushI
	var_567_int = 8697; // 0xa0d PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0xa0e TObjFunc
	return 0; // 0xa10 Return
	
Label_2577:
	var_568_int = 8608; // 0xa11 PushI
	var_569_bool = var_30_string == var_568_int; // 0xa12 Eq
	if(var_569_bool == 0) goto Label_2600; // 0xa13 JumpB
	var_570_string = ""; // 0xa14 PushV
	var_570_string = "Neutral"; // 0xa15 MovS
	func_1681(var_31_bool, var_570_string); // 0xa16 Call
	var_571_int = 7807; // 0xa18 PushI
	SetMessage(var_571_int); // 0xa19 TObjFunc
	ClearReplies(); // 0xa1b TObjFunc
	var_572_int = 7856; // 0xa1d PushI
	var_573_int = 8668; // 0xa1e PushI
	var_574_int = 8667; // 0xa1f PushI
	AddReply(var_572_int, var_573_int, var_574_int); // 0xa20 TObjFunc
	var_575_int = 7866; // 0xa22 PushI
	var_576_int = 8668; // 0xa23 PushI
	var_577_int = 8677; // 0xa24 PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0xa25 TObjFunc
	return 0; // 0xa27 Return
	
Label_2600:
	var_578_int = 8668; // 0xa28 PushI
	var_579_bool = var_30_string == var_578_int; // 0xa29 Eq
	if(var_579_bool == 0) goto Label_2623; // 0xa2a JumpB
	var_580_string = ""; // 0xa2b PushV
	var_580_string = "Neutral"; // 0xa2c MovS
	func_1681(var_31_bool, var_580_string); // 0xa2d Call
	var_581_int = 7857; // 0xa2f PushI
	SetMessage(var_581_int); // 0xa30 TObjFunc
	ClearReplies(); // 0xa32 TObjFunc
	var_582_int = 7858; // 0xa34 PushI
	var_583_int = 8670; // 0xa35 PushI
	var_584_int = 8669; // 0xa36 PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0xa37 TObjFunc
	var_585_int = 7867; // 0xa39 PushI
	var_586_int = 8670; // 0xa3a PushI
	var_587_int = 8679; // 0xa3b PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0xa3c TObjFunc
	return 0; // 0xa3e Return
	
Label_2623:
	var_588_int = 8670; // 0xa3f PushI
	var_589_bool = var_30_string == var_588_int; // 0xa40 Eq
	if(var_589_bool == 0) goto Label_2652; // 0xa41 JumpB
	var_590_string = ""; // 0xa42 PushV
	var_590_string = "Neutral"; // 0xa43 MovS
	func_1681(var_31_bool, var_590_string); // 0xa44 Call
	var_591_int = 7859; // 0xa46 PushI
	SetMessage(var_591_int); // 0xa47 TObjFunc
	ClearReplies(); // 0xa49 TObjFunc
	var_592_int = 7860; // 0xa4b PushI
	var_593_int = 8672; // 0xa4c PushI
	var_594_int = 8671; // 0xa4d PushI
	AddReply(var_592_int, var_593_int, var_594_int); // 0xa4e TObjFunc
	var_595_bool = 0; var_596_object = Obj(); // 0xa50 PushV
	var_596_object = var_1_object; // 0xa51 MovT
	func_5831(var_596_object); // 0xa52 Call
	var_601_bool = var_595_bool == 0; // 0xa54 Not
	if(var_601_bool == 0) goto Label_2651; // 0xa55 JumpB
	var_602_int = 7868; // 0xa56 PushI
	var_603_int = 8682; // 0xa57 PushI
	var_604_int = 8681; // 0xa58 PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0xa59 TObjFunc
	
Label_2651:
	return 0; // 0xa5b Return
	
Label_2652:
	var_605_int = 8682; // 0xa5c PushI
	var_606_bool = var_30_string == var_605_int; // 0xa5d Eq
	if(var_606_bool == 0) goto Label_2675; // 0xa5e JumpB
	var_607_object = Obj(); var_608_object = Obj(); // 0xa5f PushV
	var_607_object = var_1_object; // 0xa60 MovT
	var_608_object = var_0_object; // 0xa61 MovT
	func_5312(); // 0xa62 Call
	var_611_string = ""; // 0xa64 PushV
	var_611_string = "Neutral"; // 0xa65 MovS
	func_1681(var_31_bool, var_611_string); // 0xa66 Call
	var_612_int = 7869; // 0xa68 PushI
	SetMessage(var_612_int); // 0xa69 TObjFunc
	ClearReplies(); // 0xa6b TObjFunc
	var_613_int = 7870; // 0xa6d PushI
	var_614_int = 8672; // 0xa6e PushI
	var_615_int = 8683; // 0xa6f PushI
	AddReply(var_613_int, var_614_int, var_615_int); // 0xa70 TObjFunc
	return 0; // 0xa72 Return
	
Label_2675:
	var_616_int = 8672; // 0xa73 PushI
	var_617_bool = var_30_string == var_616_int; // 0xa74 Eq
	if(var_617_bool == 0) goto Label_2698; // 0xa75 JumpB
	var_618_string = ""; // 0xa76 PushV
	var_618_string = "Neutral"; // 0xa77 MovS
	func_1681(var_31_bool, var_618_string); // 0xa78 Call
	var_619_int = 7861; // 0xa7a PushI
	SetMessage(var_619_int); // 0xa7b TObjFunc
	ClearReplies(); // 0xa7d TObjFunc
	var_620_int = 7862; // 0xa7f PushI
	var_621_int = 8674; // 0xa80 PushI
	var_622_int = 8673; // 0xa81 PushI
	AddReply(var_620_int, var_621_int, var_622_int); // 0xa82 TObjFunc
	var_623_int = 7871; // 0xa84 PushI
	var_624_int = 8674; // 0xa85 PushI
	var_625_int = 8685; // 0xa86 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0xa87 TObjFunc
	return 0; // 0xa89 Return
	
Label_2698:
	var_626_int = 8674; // 0xa8a PushI
	var_627_bool = var_30_string == var_626_int; // 0xa8b Eq
	if(var_627_bool == 0) goto Label_2721; // 0xa8c JumpB
	var_628_string = ""; // 0xa8d PushV
	var_628_string = "Neutral"; // 0xa8e MovS
	func_1681(var_31_bool, var_628_string); // 0xa8f Call
	var_629_int = 7863; // 0xa91 PushI
	SetMessage(var_629_int); // 0xa92 TObjFunc
	ClearReplies(); // 0xa94 TObjFunc
	var_630_int = 7864; // 0xa96 PushI
	var_631_int = -1; // 0xa97 PushI
	var_632_int = 8675; // 0xa98 PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0xa99 TObjFunc
	var_633_int = 7865; // 0xa9b PushI
	var_634_int = -1; // 0xa9c PushI
	var_635_int = 8676; // 0xa9d PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0xa9e TObjFunc
	return 0; // 0xaa0 Return
	
Label_2721:
	var_636_int = 8607; // 0xaa1 PushI
	var_637_bool = var_30_string == var_636_int; // 0xaa2 Eq
	if(var_637_bool == 0) goto Label_2744; // 0xaa3 JumpB
	var_638_string = ""; // 0xaa4 PushV
	var_638_string = "Neutral"; // 0xaa5 MovS
	func_1681(var_31_bool, var_638_string); // 0xaa6 Call
	var_639_int = 7806; // 0xaa8 PushI
	SetMessage(var_639_int); // 0xaa9 TObjFunc
	ClearReplies(); // 0xaab TObjFunc
	var_640_int = 7843; // 0xaad PushI
	var_641_int = 8657; // 0xaae PushI
	var_642_int = 8651; // 0xaaf PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0xab0 TObjFunc
	var_643_int = 7855; // 0xab2 PushI
	var_644_int = 8652; // 0xab3 PushI
	var_645_int = 8665; // 0xab4 PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0xab5 TObjFunc
	return 0; // 0xab7 Return
	
Label_2744:
	var_646_int = 8657; // 0xab8 PushI
	var_647_bool = var_30_string == var_646_int; // 0xab9 Eq
	if(var_647_bool == 0) goto Label_2767; // 0xaba JumpB
	var_648_string = ""; // 0xabb PushV
	var_648_string = "Neutral"; // 0xabc MovS
	func_1681(var_31_bool, var_648_string); // 0xabd Call
	var_649_int = 7848; // 0xabf PushI
	SetMessage(var_649_int); // 0xac0 TObjFunc
	ClearReplies(); // 0xac2 TObjFunc
	var_650_int = 7849; // 0xac4 PushI
	var_651_int = 8659; // 0xac5 PushI
	var_652_int = 8658; // 0xac6 PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0xac7 TObjFunc
	var_653_int = 7854; // 0xac9 PushI
	var_654_int = 8659; // 0xaca PushI
	var_655_int = 8663; // 0xacb PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0xacc TObjFunc
	return 0; // 0xace Return
	
Label_2767:
	var_656_int = 8659; // 0xacf PushI
	var_657_bool = var_30_string == var_656_int; // 0xad0 Eq
	if(var_657_bool == 0) goto Label_2785; // 0xad1 JumpB
	var_658_string = ""; // 0xad2 PushV
	var_658_string = "Neutral"; // 0xad3 MovS
	func_1681(var_31_bool, var_658_string); // 0xad4 Call
	var_659_int = 7850; // 0xad6 PushI
	SetMessage(var_659_int); // 0xad7 TObjFunc
	ClearReplies(); // 0xad9 TObjFunc
	var_660_int = 7851; // 0xadb PushI
	var_661_int = 8652; // 0xadc PushI
	var_662_int = 8660; // 0xadd PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0xade TObjFunc
	return 0; // 0xae0 Return
	
Label_2785:
	var_663_int = 8652; // 0xae1 PushI
	var_664_bool = var_30_string == var_663_int; // 0xae2 Eq
	if(var_664_bool == 0) goto Label_2808; // 0xae3 JumpB
	var_665_string = ""; // 0xae4 PushV
	var_665_string = "Neutral"; // 0xae5 MovS
	func_1681(var_31_bool, var_665_string); // 0xae6 Call
	var_666_int = 7844; // 0xae8 PushI
	SetMessage(var_666_int); // 0xae9 TObjFunc
	ClearReplies(); // 0xaeb TObjFunc
	var_667_int = 7852; // 0xaed PushI
	var_668_int = -1; // 0xaee PushI
	var_669_int = 8661; // 0xaef PushI
	AddReply(var_667_int, var_668_int, var_669_int); // 0xaf0 TObjFunc
	var_670_int = 7853; // 0xaf2 PushI
	var_671_int = -1; // 0xaf3 PushI
	var_672_int = 8662; // 0xaf4 PushI
	AddReply(var_670_int, var_671_int, var_672_int); // 0xaf5 TObjFunc
	return 0; // 0xaf7 Return
	
Label_2808:
	var_673_int = 8618; // 0xaf8 PushI
	var_674_bool = var_30_string == var_673_int; // 0xaf9 Eq
	if(var_674_bool == 0) goto Label_2831; // 0xafa JumpB
	var_675_string = ""; // 0xafb PushV
	var_675_string = "Neutral"; // 0xafc MovS
	func_1681(var_31_bool, var_675_string); // 0xafd Call
	var_676_int = 7816; // 0xaff PushI
	SetMessage(var_676_int); // 0xb00 TObjFunc
	ClearReplies(); // 0xb02 TObjFunc
	var_677_int = 7817; // 0xb04 PushI
	var_678_int = 8620; // 0xb05 PushI
	var_679_int = 8619; // 0xb06 PushI
	AddReply(var_677_int, var_678_int, var_679_int); // 0xb07 TObjFunc
	var_680_int = 7845; // 0xb09 PushI
	var_681_int = 8654; // 0xb0a PushI
	var_682_int = 8653; // 0xb0b PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0xb0c TObjFunc
	return 0; // 0xb0e Return
	
Label_2831:
	var_683_int = 8654; // 0xb0f PushI
	var_684_bool = var_30_string == var_683_int; // 0xb10 Eq
	if(var_684_bool == 0) goto Label_2849; // 0xb11 JumpB
	var_685_string = ""; // 0xb12 PushV
	var_685_string = "Neutral"; // 0xb13 MovS
	func_1681(var_31_bool, var_685_string); // 0xb14 Call
	var_686_int = 7846; // 0xb16 PushI
	SetMessage(var_686_int); // 0xb17 TObjFunc
	ClearReplies(); // 0xb19 TObjFunc
	var_687_int = 7847; // 0xb1b PushI
	var_688_int = 8620; // 0xb1c PushI
	var_689_int = 8655; // 0xb1d PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0xb1e TObjFunc
	return 0; // 0xb20 Return
	
Label_2849:
	var_690_int = 8620; // 0xb21 PushI
	var_691_bool = var_30_string == var_690_int; // 0xb22 Eq
	if(var_691_bool == 0) goto Label_2872; // 0xb23 JumpB
	var_692_string = ""; // 0xb24 PushV
	var_692_string = "Neutral"; // 0xb25 MovS
	func_1681(var_31_bool, var_692_string); // 0xb26 Call
	var_693_int = 7818; // 0xb28 PushI
	SetMessage(var_693_int); // 0xb29 TObjFunc
	ClearReplies(); // 0xb2b TObjFunc
	var_694_int = 7821; // 0xb2d PushI
	var_695_int = 8625; // 0xb2e PushI
	var_696_int = 8623; // 0xb2f PushI
	AddReply(var_694_int, var_695_int, var_696_int); // 0xb30 TObjFunc
	var_697_int = 7819; // 0xb32 PushI
	var_698_int = 8622; // 0xb33 PushI
	var_699_int = 8621; // 0xb34 PushI
	AddReply(var_697_int, var_698_int, var_699_int); // 0xb35 TObjFunc
	return 0; // 0xb37 Return
	
Label_2872:
	var_700_int = 8622; // 0xb38 PushI
	var_701_bool = var_30_string == var_700_int; // 0xb39 Eq
	if(var_701_bool == 0) goto Label_2890; // 0xb3a JumpB
	var_702_string = ""; // 0xb3b PushV
	var_702_string = "Neutral"; // 0xb3c MovS
	func_1681(var_31_bool, var_702_string); // 0xb3d Call
	var_703_int = 7820; // 0xb3f PushI
	SetMessage(var_703_int); // 0xb40 TObjFunc
	ClearReplies(); // 0xb42 TObjFunc
	var_704_int = 7822; // 0xb44 PushI
	var_705_int = 8625; // 0xb45 PushI
	var_706_int = 8624; // 0xb46 PushI
	AddReply(var_704_int, var_705_int, var_706_int); // 0xb47 TObjFunc
	return 0; // 0xb49 Return
	
Label_2890:
	var_707_int = 8625; // 0xb4a PushI
	var_708_bool = var_30_string == var_707_int; // 0xb4b Eq
	if(var_708_bool == 0) goto Label_2913; // 0xb4c JumpB
	var_709_string = ""; // 0xb4d PushV
	var_709_string = "Neutral"; // 0xb4e MovS
	func_1681(var_31_bool, var_709_string); // 0xb4f Call
	var_710_int = 7823; // 0xb51 PushI
	SetMessage(var_710_int); // 0xb52 TObjFunc
	ClearReplies(); // 0xb54 TObjFunc
	var_711_int = 7824; // 0xb56 PushI
	var_712_int = 8627; // 0xb57 PushI
	var_713_int = 8626; // 0xb58 PushI
	AddReply(var_711_int, var_712_int, var_713_int); // 0xb59 TObjFunc
	var_714_int = 7842; // 0xb5b PushI
	var_715_int = 8630; // 0xb5c PushI
	var_716_int = 8649; // 0xb5d PushI
	AddReply(var_714_int, var_715_int, var_716_int); // 0xb5e TObjFunc
	return 0; // 0xb60 Return
	
Label_2913:
	var_717_int = 8627; // 0xb61 PushI
	var_718_bool = var_30_string == var_717_int; // 0xb62 Eq
	if(var_718_bool == 0) goto Label_2936; // 0xb63 JumpB
	var_719_string = ""; // 0xb64 PushV
	var_719_string = "Neutral"; // 0xb65 MovS
	func_1681(var_31_bool, var_719_string); // 0xb66 Call
	var_720_int = 7825; // 0xb68 PushI
	SetMessage(var_720_int); // 0xb69 TObjFunc
	ClearReplies(); // 0xb6b TObjFunc
	var_721_int = 7826; // 0xb6d PushI
	var_722_int = 8630; // 0xb6e PushI
	var_723_int = 8628; // 0xb6f PushI
	AddReply(var_721_int, var_722_int, var_723_int); // 0xb70 TObjFunc
	var_724_int = 7834; // 0xb72 PushI
	var_725_int = 8639; // 0xb73 PushI
	var_726_int = 8638; // 0xb74 PushI
	AddReply(var_724_int, var_725_int, var_726_int); // 0xb75 TObjFunc
	return 0; // 0xb77 Return
	
Label_2936:
	var_727_int = 8639; // 0xb78 PushI
	var_728_bool = var_30_string == var_727_int; // 0xb79 Eq
	if(var_728_bool == 0) goto Label_2959; // 0xb7a JumpB
	var_729_string = ""; // 0xb7b PushV
	var_729_string = "Neutral"; // 0xb7c MovS
	func_1681(var_31_bool, var_729_string); // 0xb7d Call
	var_730_int = 7835; // 0xb7f PushI
	SetMessage(var_730_int); // 0xb80 TObjFunc
	ClearReplies(); // 0xb82 TObjFunc
	var_731_int = 7836; // 0xb84 PushI
	var_732_int = 8641; // 0xb85 PushI
	var_733_int = 8640; // 0xb86 PushI
	AddReply(var_731_int, var_732_int, var_733_int); // 0xb87 TObjFunc
	var_734_int = 7841; // 0xb89 PushI
	var_735_int = 8641; // 0xb8a PushI
	var_736_int = 8645; // 0xb8b PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0xb8c TObjFunc
	return 0; // 0xb8e Return
	
Label_2959:
	var_737_int = 8641; // 0xb8f PushI
	var_738_bool = var_30_string == var_737_int; // 0xb90 Eq
	if(var_738_bool == 0) goto Label_2982; // 0xb91 JumpB
	var_739_string = ""; // 0xb92 PushV
	var_739_string = "Neutral"; // 0xb93 MovS
	func_1681(var_31_bool, var_739_string); // 0xb94 Call
	var_740_int = 7837; // 0xb96 PushI
	SetMessage(var_740_int); // 0xb97 TObjFunc
	ClearReplies(); // 0xb99 TObjFunc
	var_741_int = 7839; // 0xb9b PushI
	var_742_int = 8630; // 0xb9c PushI
	var_743_int = 8643; // 0xb9d PushI
	AddReply(var_741_int, var_742_int, var_743_int); // 0xb9e TObjFunc
	var_744_int = 7840; // 0xba0 PushI
	var_745_int = 8630; // 0xba1 PushI
	var_746_int = 8644; // 0xba2 PushI
	AddReply(var_744_int, var_745_int, var_746_int); // 0xba3 TObjFunc
	return 0; // 0xba5 Return
	
Label_2982:
	var_747_int = 8630; // 0xba6 PushI
	var_748_bool = var_30_string == var_747_int; // 0xba7 Eq
	if(var_748_bool == 0) goto Label_3005; // 0xba8 JumpB
	var_749_string = ""; // 0xba9 PushV
	var_749_string = "Neutral"; // 0xbaa MovS
	func_1681(var_31_bool, var_749_string); // 0xbab Call
	var_750_int = 7827; // 0xbad PushI
	SetMessage(var_750_int); // 0xbae TObjFunc
	ClearReplies(); // 0xbb0 TObjFunc
	var_751_int = 7828; // 0xbb2 PushI
	var_752_int = 8632; // 0xbb3 PushI
	var_753_int = 8631; // 0xbb4 PushI
	AddReply(var_751_int, var_752_int, var_753_int); // 0xbb5 TObjFunc
	var_754_int = 7833; // 0xbb7 PushI
	var_755_int = 8632; // 0xbb8 PushI
	var_756_int = 8636; // 0xbb9 PushI
	AddReply(var_754_int, var_755_int, var_756_int); // 0xbba TObjFunc
	return 0; // 0xbbc Return
	
Label_3005:
	var_757_int = 8632; // 0xbbd PushI
	var_758_bool = var_30_string == var_757_int; // 0xbbe Eq
	if(var_758_bool == 0) goto Label_3023; // 0xbbf JumpB
	var_759_string = ""; // 0xbc0 PushV
	var_759_string = "Neutral"; // 0xbc1 MovS
	func_1681(var_31_bool, var_759_string); // 0xbc2 Call
	var_760_int = 7829; // 0xbc4 PushI
	SetMessage(var_760_int); // 0xbc5 TObjFunc
	ClearReplies(); // 0xbc7 TObjFunc
	var_761_int = 7830; // 0xbc9 PushI
	var_762_int = 8634; // 0xbca PushI
	var_763_int = 8633; // 0xbcb PushI
	AddReply(var_761_int, var_762_int, var_763_int); // 0xbcc TObjFunc
	return 0; // 0xbce Return
	
Label_3023:
	var_764_int = 8634; // 0xbcf PushI
	var_765_bool = var_30_string == var_764_int; // 0xbd0 Eq
	if(var_765_bool == 0) goto Label_3041; // 0xbd1 JumpB
	var_766_string = ""; // 0xbd2 PushV
	var_766_string = "Neutral"; // 0xbd3 MovS
	func_1681(var_31_bool, var_766_string); // 0xbd4 Call
	var_767_int = 7831; // 0xbd6 PushI
	SetMessage(var_767_int); // 0xbd7 TObjFunc
	ClearReplies(); // 0xbd9 TObjFunc
	var_768_int = 7832; // 0xbdb PushI
	var_769_int = -1; // 0xbdc PushI
	var_770_int = 8635; // 0xbdd PushI
	AddReply(var_768_int, var_769_int, var_770_int); // 0xbde TObjFunc
	return 0; // 0xbe0 Return
	
Label_3041:
	var_771_int = 9477; // 0xbe1 PushI
	var_772_bool = var_30_string == var_771_int; // 0xbe2 Eq
	if(var_772_bool == 0) goto Label_3059; // 0xbe3 JumpB
	var_773_string = ""; // 0xbe4 PushV
	var_773_string = "Neutral"; // 0xbe5 MovS
	func_1681(var_31_bool, var_773_string); // 0xbe6 Call
	var_774_int = 8652; // 0xbe8 PushI
	SetMessage(var_774_int); // 0xbe9 TObjFunc
	ClearReplies(); // 0xbeb TObjFunc
	var_775_int = 8653; // 0xbed PushI
	var_776_int = 9479; // 0xbee PushI
	var_777_int = 9478; // 0xbef PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0xbf0 TObjFunc
	return 0; // 0xbf2 Return
	
Label_3059:
	var_778_int = 9479; // 0xbf3 PushI
	var_779_bool = var_30_string == var_778_int; // 0xbf4 Eq
	if(var_779_bool == 0) goto Label_3087; // 0xbf5 JumpB
	var_780_string = ""; // 0xbf6 PushV
	var_780_string = "Neutral"; // 0xbf7 MovS
	func_1681(var_31_bool, var_780_string); // 0xbf8 Call
	var_781_int = 8654; // 0xbfa PushI
	SetMessage(var_781_int); // 0xbfb TObjFunc
	ClearReplies(); // 0xbfd TObjFunc
	var_782_int = 8655; // 0xbff PushI
	var_783_int = 9483; // 0xc00 PushI
	var_784_int = 9480; // 0xc01 PushI
	AddReply(var_782_int, var_783_int, var_784_int); // 0xc02 TObjFunc
	var_785_int = 8656; // 0xc04 PushI
	var_786_int = -1; // 0xc05 PushI
	var_787_int = 9481; // 0xc06 PushI
	AddReply(var_785_int, var_786_int, var_787_int); // 0xc07 TObjFunc
	var_788_int = 8657; // 0xc09 PushI
	var_789_int = -1; // 0xc0a PushI
	var_790_int = 9482; // 0xc0b PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0xc0c TObjFunc
	return 0; // 0xc0e Return
	
Label_3087:
	var_791_int = 9483; // 0xc0f PushI
	var_792_bool = var_30_string == var_791_int; // 0xc10 Eq
	if(var_792_bool == 0) goto Label_3105; // 0xc11 JumpB
	var_793_string = ""; // 0xc12 PushV
	var_793_string = "Neutral"; // 0xc13 MovS
	func_1681(var_31_bool, var_793_string); // 0xc14 Call
	var_794_int = 8658; // 0xc16 PushI
	SetMessage(var_794_int); // 0xc17 TObjFunc
	ClearReplies(); // 0xc19 TObjFunc
	var_795_int = 8659; // 0xc1b PushI
	var_796_int = 9485; // 0xc1c PushI
	var_797_int = 9484; // 0xc1d PushI
	AddReply(var_795_int, var_796_int, var_797_int); // 0xc1e TObjFunc
	return 0; // 0xc20 Return
	
Label_3105:
	var_798_int = 9485; // 0xc21 PushI
	var_799_bool = var_30_string == var_798_int; // 0xc22 Eq
	if(var_799_bool == 0) goto Label_3123; // 0xc23 JumpB
	var_800_string = ""; // 0xc24 PushV
	var_800_string = "Neutral"; // 0xc25 MovS
	func_1681(var_31_bool, var_800_string); // 0xc26 Call
	var_801_int = 8660; // 0xc28 PushI
	SetMessage(var_801_int); // 0xc29 TObjFunc
	ClearReplies(); // 0xc2b TObjFunc
	var_802_int = 8661; // 0xc2d PushI
	var_803_int = 9487; // 0xc2e PushI
	var_804_int = 9486; // 0xc2f PushI
	AddReply(var_802_int, var_803_int, var_804_int); // 0xc30 TObjFunc
	return 0; // 0xc32 Return
	
Label_3123:
	var_805_int = 9487; // 0xc33 PushI
	var_806_bool = var_30_string == var_805_int; // 0xc34 Eq
	if(var_806_bool == 0) goto Label_3141; // 0xc35 JumpB
	var_807_string = ""; // 0xc36 PushV
	var_807_string = "Neutral"; // 0xc37 MovS
	func_1681(var_31_bool, var_807_string); // 0xc38 Call
	var_808_int = 8662; // 0xc3a PushI
	SetMessage(var_808_int); // 0xc3b TObjFunc
	ClearReplies(); // 0xc3d TObjFunc
	var_809_int = 8663; // 0xc3f PushI
	var_810_int = 9489; // 0xc40 PushI
	var_811_int = 9488; // 0xc41 PushI
	AddReply(var_809_int, var_810_int, var_811_int); // 0xc42 TObjFunc
	return 0; // 0xc44 Return
	
Label_3141:
	var_812_int = 9489; // 0xc45 PushI
	var_813_bool = var_30_string == var_812_int; // 0xc46 Eq
	if(var_813_bool == 0) goto Label_3164; // 0xc47 JumpB
	var_814_object = Obj(); var_815_object = Obj(); // 0xc48 PushV
	var_814_object = var_1_object; // 0xc49 MovT
	var_815_object = var_0_object; // 0xc4a MovT
	func_5220(); // 0xc4b Call
	var_816_string = ""; // 0xc4d PushV
	var_816_string = "Neutral"; // 0xc4e MovS
	func_1681(var_31_bool, var_816_string); // 0xc4f Call
	var_817_int = 8664; // 0xc51 PushI
	SetMessage(var_817_int); // 0xc52 TObjFunc
	ClearReplies(); // 0xc54 TObjFunc
	var_818_int = 8665; // 0xc56 PushI
	var_819_int = -1; // 0xc57 PushI
	var_820_int = 9490; // 0xc58 PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0xc59 TObjFunc
	return 0; // 0xc5b Return
	
Label_3164:
	var_821_int = 5964; // 0xc5c PushI
	var_822_bool = var_30_string == var_821_int; // 0xc5d Eq
	if(var_822_bool == 0) goto Label_3187; // 0xc5e JumpB
	var_823_string = ""; // 0xc5f PushV
	var_823_string = "Neutral"; // 0xc60 MovS
	func_1681(var_31_bool, var_823_string); // 0xc61 Call
	var_824_int = 5415; // 0xc63 PushI
	SetMessage(var_824_int); // 0xc64 TObjFunc
	ClearReplies(); // 0xc66 TObjFunc
	var_825_int = 6207; // 0xc68 PushI
	var_826_int = 6862; // 0xc69 PushI
	var_827_int = 6861; // 0xc6a PushI
	AddReply(var_825_int, var_826_int, var_827_int); // 0xc6b TObjFunc
	var_828_int = 5416; // 0xc6d PushI
	var_829_int = 5966; // 0xc6e PushI
	var_830_int = 5965; // 0xc6f PushI
	AddReply(var_828_int, var_829_int, var_830_int); // 0xc70 TObjFunc
	return 0; // 0xc72 Return
	
Label_3187:
	var_831_int = 6862; // 0xc73 PushI
	var_832_bool = var_30_string == var_831_int; // 0xc74 Eq
	if(var_832_bool == 0) goto Label_3205; // 0xc75 JumpB
	var_833_string = ""; // 0xc76 PushV
	var_833_string = "Neutral"; // 0xc77 MovS
	func_1681(var_31_bool, var_833_string); // 0xc78 Call
	var_834_int = 6208; // 0xc7a PushI
	SetMessage(var_834_int); // 0xc7b TObjFunc
	ClearReplies(); // 0xc7d TObjFunc
	var_835_int = 6209; // 0xc7f PushI
	var_836_int = 6864; // 0xc80 PushI
	var_837_int = 6863; // 0xc81 PushI
	AddReply(var_835_int, var_836_int, var_837_int); // 0xc82 TObjFunc
	return 0; // 0xc84 Return
	
Label_3205:
	var_838_int = 6864; // 0xc85 PushI
	var_839_bool = var_30_string == var_838_int; // 0xc86 Eq
	if(var_839_bool == 0) goto Label_3228; // 0xc87 JumpB
	var_840_object = Obj(); var_841_object = Obj(); // 0xc88 PushV
	var_840_object = var_1_object; // 0xc89 MovT
	var_841_object = var_0_object; // 0xc8a MovT
	func_5157(); // 0xc8b Call
	var_844_string = ""; // 0xc8d PushV
	var_844_string = "Neutral"; // 0xc8e MovS
	func_1681(var_31_bool, var_844_string); // 0xc8f Call
	var_845_int = 6210; // 0xc91 PushI
	SetMessage(var_845_int); // 0xc92 TObjFunc
	ClearReplies(); // 0xc94 TObjFunc
	var_846_int = 6211; // 0xc96 PushI
	var_847_int = 6866; // 0xc97 PushI
	var_848_int = 6865; // 0xc98 PushI
	AddReply(var_846_int, var_847_int, var_848_int); // 0xc99 TObjFunc
	return 0; // 0xc9b Return
	
Label_3228:
	var_849_int = 6866; // 0xc9c PushI
	var_850_bool = var_30_string == var_849_int; // 0xc9d Eq
	if(var_850_bool == 0) goto Label_3246; // 0xc9e JumpB
	var_851_string = ""; // 0xc9f PushV
	var_851_string = "Neutral"; // 0xca0 MovS
	func_1681(var_31_bool, var_851_string); // 0xca1 Call
	var_852_int = 6212; // 0xca3 PushI
	SetMessage(var_852_int); // 0xca4 TObjFunc
	ClearReplies(); // 0xca6 TObjFunc
	var_853_int = 6214; // 0xca8 PushI
	var_854_int = 5966; // 0xca9 PushI
	var_855_int = 6868; // 0xcaa PushI
	AddReply(var_853_int, var_854_int, var_855_int); // 0xcab TObjFunc
	return 0; // 0xcad Return
	
Label_3246:
	var_856_int = 5966; // 0xcae PushI
	var_857_bool = var_30_string == var_856_int; // 0xcaf Eq
	if(var_857_bool == 0) goto Label_3274; // 0xcb0 JumpB
	var_858_string = ""; // 0xcb1 PushV
	var_858_string = "Neutral"; // 0xcb2 MovS
	func_1681(var_31_bool, var_858_string); // 0xcb3 Call
	var_859_int = 5417; // 0xcb5 PushI
	SetMessage(var_859_int); // 0xcb6 TObjFunc
	ClearReplies(); // 0xcb8 TObjFunc
	var_860_int = 5419; // 0xcba PushI
	var_861_int = 5969; // 0xcbb PushI
	var_862_int = 5968; // 0xcbc PushI
	AddReply(var_860_int, var_861_int, var_862_int); // 0xcbd TObjFunc
	var_863_int = 6215; // 0xcbf PushI
	var_864_int = 6867; // 0xcc0 PushI
	var_865_int = 6870; // 0xcc1 PushI
	AddReply(var_863_int, var_864_int, var_865_int); // 0xcc2 TObjFunc
	var_866_int = 5418; // 0xcc4 PushI
	var_867_int = 6874; // 0xcc5 PushI
	var_868_int = 5967; // 0xcc6 PushI
	AddReply(var_866_int, var_867_int, var_868_int); // 0xcc7 TObjFunc
	return 0; // 0xcc9 Return
	
Label_3274:
	var_869_int = 6867; // 0xcca PushI
	var_870_bool = var_30_string == var_869_int; // 0xccb Eq
	if(var_870_bool == 0) goto Label_3292; // 0xccc JumpB
	var_871_string = ""; // 0xccd PushV
	var_871_string = "Neutral"; // 0xcce MovS
	func_1681(var_31_bool, var_871_string); // 0xccf Call
	var_872_int = 6213; // 0xcd1 PushI
	SetMessage(var_872_int); // 0xcd2 TObjFunc
	ClearReplies(); // 0xcd4 TObjFunc
	var_873_int = 6216; // 0xcd6 PushI
	var_874_int = 6874; // 0xcd7 PushI
	var_875_int = 6872; // 0xcd8 PushI
	AddReply(var_873_int, var_874_int, var_875_int); // 0xcd9 TObjFunc
	return 0; // 0xcdb Return
	
Label_3292:
	var_876_int = 5969; // 0xcdc PushI
	var_877_bool = var_30_string == var_876_int; // 0xcdd Eq
	if(var_877_bool == 0) goto Label_3310; // 0xcde JumpB
	var_878_string = ""; // 0xcdf PushV
	var_878_string = "Neutral"; // 0xce0 MovS
	func_1681(var_31_bool, var_878_string); // 0xce1 Call
	var_879_int = 5420; // 0xce3 PushI
	SetMessage(var_879_int); // 0xce4 TObjFunc
	ClearReplies(); // 0xce6 TObjFunc
	var_880_int = 5421; // 0xce8 PushI
	var_881_int = 6874; // 0xce9 PushI
	var_882_int = 5970; // 0xcea PushI
	AddReply(var_880_int, var_881_int, var_882_int); // 0xceb TObjFunc
	return 0; // 0xced Return
	
Label_3310:
	var_883_int = 6874; // 0xcee PushI
	var_884_bool = var_30_string == var_883_int; // 0xcef Eq
	if(var_884_bool == 0) goto Label_3333; // 0xcf0 JumpB
	var_885_string = ""; // 0xcf1 PushV
	var_885_string = "Neutral"; // 0xcf2 MovS
	func_1681(var_31_bool, var_885_string); // 0xcf3 Call
	var_886_int = 6217; // 0xcf5 PushI
	SetMessage(var_886_int); // 0xcf6 TObjFunc
	ClearReplies(); // 0xcf8 TObjFunc
	var_887_int = 6218; // 0xcfa PushI
	var_888_int = -1; // 0xcfb PushI
	var_889_int = 6875; // 0xcfc PushI
	AddReply(var_887_int, var_888_int, var_889_int); // 0xcfd TObjFunc
	var_890_int = 6219; // 0xcff PushI
	var_891_int = -1; // 0xd00 PushI
	var_892_int = 6876; // 0xd01 PushI
	AddReply(var_890_int, var_891_int, var_892_int); // 0xd02 TObjFunc
	return 0; // 0xd04 Return
	
Label_3333:
	var_3_string = 1; // 0xd05 TMovB
	var_893_bool = 0; // 0xd06 PushV
	func_5108(var_893_bool); // 0xd07 Call
	if(var_893_bool == 0) goto Label_3341; // 0xd09 JumpB
	lshStopAnimation(); // 0xd0a Func
	goto Label_3343; // 0xd0c Jump
	
Label_3343:
	return 0; // 0xd0f Return
	
Label_3341:
	StopAnimation(); // 0xd0d Func
	
Label_3345:
	return 0; // 0xd11 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xdd7 PushI
	if(var_32_int == 0) goto Label_3983; // 0xdd8 JumpB
	func_5007(); // 0xdda Call
	var_34_int = 8122; // 0xddc PushI
	var_35_bool = var_31_bool == var_34_int; // 0xddd Eq
	if(var_35_bool == 0) goto Label_3566; // 0xdde JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xddf PushV
	var_36_object = var_1_object; // 0xde0 MovT
	var_37_object = var_0_object; // 0xde1 MovT
	func_5151(); // 0xde2 Call
	var_40_object = Obj(); var_41_object = Obj(); // 0xde4 PushV
	var_40_object = var_1_object; // 0xde5 MovT
	var_41_object = var_0_object; // 0xde6 MovT
	func_5139(); // 0xde7 Call
	var_44_object = Obj(); var_45_object = Obj(); // 0xde9 PushV
	var_44_object = var_1_object; // 0xdea MovT
	var_45_object = var_0_object; // 0xdeb MovT
	func_5128(var_45_object); // 0xdec Call
	
Label_3566:
	var_53_int = 8131; // 0xdee PushI
	var_54_bool = var_31_bool == var_53_int; // 0xdef Eq
	if(var_54_bool == 0) goto Label_3584; // 0xdf0 JumpB
	var_55_object = Obj(); var_56_object = Obj(); // 0xdf1 PushV
	var_55_object = var_1_object; // 0xdf2 MovT
	var_56_object = var_0_object; // 0xdf3 MovT
	func_5151(); // 0xdf4 Call
	var_57_object = Obj(); var_58_object = Obj(); // 0xdf6 PushV
	var_57_object = var_1_object; // 0xdf7 MovT
	var_58_object = var_0_object; // 0xdf8 MovT
	func_5128(var_58_object); // 0xdf9 Call
	var_59_object = Obj(); var_60_object = Obj(); // 0xdfb PushV
	var_59_object = var_1_object; // 0xdfc MovT
	var_60_object = var_0_object; // 0xdfd MovT
	func_5139(); // 0xdfe Call
	
Label_3584:
	var_61_int = 7620; // 0xe00 PushI
	var_62_bool = var_30_string == var_61_int; // 0xe01 Eq
	if(var_62_bool == 0) goto Label_3666; // 0xe02 JumpB
	var_63_string = ""; // 0xe03 PushV
	var_63_string = "Neutral"; // 0xe04 MovS
	func_3526(var_31_bool, var_63_string); // 0xe05 Call
	var_78_int = 6914; // 0xe07 PushI
	SetMessage(var_78_int); // 0xe08 TObjFunc
	ClearReplies(); // 0xe0a TObjFunc
	var_79_bool = 0; // 0xe0c PushV
	var_79_bool = 0; // 0xe0d MovB
	var_80_bool = 0; var_81_object = Obj(); // 0xe0e PushV
	var_81_object = var_1_object; // 0xe0f MovT
	func_5617(var_81_object); // 0xe10 Call
	if(var_80_bool == 0) goto Label_3609; // 0xe12 JumpB
	var_88_bool = 0; var_89_object = Obj(); // 0xe13 PushV
	var_89_object = var_1_object; // 0xe14 MovT
	func_5629(var_89_object); // 0xe15 Call
	if(var_88_bool == 0) goto Label_3609; // 0xe17 JumpB
	var_79_bool = 1; // 0xe18 MovB
	
Label_3609:
	if(var_79_bool == 0) goto Label_3615; // 0xe19 JumpB
	var_94_int = 6915; // 0xe1a PushI
	var_95_int = 7622; // 0xe1b PushI
	var_96_int = 7621; // 0xe1c PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0xe1d TObjFunc
	
Label_3615:
	var_97_int = 7747; // 0xe1f PushI
	var_98_int = -1; // 0xe20 PushI
	var_99_int = 8548; // 0xe21 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xe22 TObjFunc
	return 0; // 0xe24 Return
	
Label_3666:
	var_100_int = 10233; // 0xe52 PushI
	var_101_bool = var_30_string == var_100_int; // 0xe53 Eq
	if(var_101_bool == 0) goto Label_3684; // 0xe54 JumpB
	var_102_string = ""; // 0xe55 PushV
	var_102_string = "Neutral"; // 0xe56 MovS
	func_3526(var_31_bool, var_102_string); // 0xe57 Call
	var_103_int = 9320; // 0xe59 PushI
	SetMessage(var_103_int); // 0xe5a TObjFunc
	ClearReplies(); // 0xe5c TObjFunc
	var_104_int = 9321; // 0xe5e PushI
	var_105_int = 10222; // 0xe5f PushI
	var_106_int = 10234; // 0xe60 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0xe61 TObjFunc
	return 0; // 0xe63 Return
	
Label_3684:
	var_107_int = 10229; // 0xe64 PushI
	var_108_bool = var_30_string == var_107_int; // 0xe65 Eq
	if(var_108_bool == 0) goto Label_3702; // 0xe66 JumpB
	var_109_string = ""; // 0xe67 PushV
	var_109_string = "Neutral"; // 0xe68 MovS
	func_3526(var_31_bool, var_109_string); // 0xe69 Call
	var_110_int = 9317; // 0xe6b PushI
	SetMessage(var_110_int); // 0xe6c TObjFunc
	ClearReplies(); // 0xe6e TObjFunc
	var_111_int = 9318; // 0xe70 PushI
	var_112_int = 10220; // 0xe71 PushI
	var_113_int = 10230; // 0xe72 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xe73 TObjFunc
	return 0; // 0xe75 Return
	
Label_3702:
	var_114_int = 10220; // 0xe76 PushI
	var_115_bool = var_30_string == var_114_int; // 0xe77 Eq
	if(var_115_bool == 0) goto Label_3725; // 0xe78 JumpB
	var_116_string = ""; // 0xe79 PushV
	var_116_string = "Neutral"; // 0xe7a MovS
	func_3526(var_31_bool, var_116_string); // 0xe7b Call
	var_117_int = 9309; // 0xe7d PushI
	SetMessage(var_117_int); // 0xe7e TObjFunc
	ClearReplies(); // 0xe80 TObjFunc
	var_118_int = 9310; // 0xe82 PushI
	var_119_int = 10222; // 0xe83 PushI
	var_120_int = 10221; // 0xe84 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0xe85 TObjFunc
	var_121_int = 9313; // 0xe87 PushI
	var_122_int = 10225; // 0xe88 PushI
	var_123_int = 10224; // 0xe89 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0xe8a TObjFunc
	return 0; // 0xe8c Return
	
Label_3725:
	var_124_int = 10225; // 0xe8d PushI
	var_125_bool = var_30_string == var_124_int; // 0xe8e Eq
	if(var_125_bool == 0) goto Label_3743; // 0xe8f JumpB
	var_126_string = ""; // 0xe90 PushV
	var_126_string = "Neutral"; // 0xe91 MovS
	func_3526(var_31_bool, var_126_string); // 0xe92 Call
	var_127_int = 9314; // 0xe94 PushI
	SetMessage(var_127_int); // 0xe95 TObjFunc
	ClearReplies(); // 0xe97 TObjFunc
	var_128_int = 9315; // 0xe99 PushI
	var_129_int = 10222; // 0xe9a PushI
	var_130_int = 10226; // 0xe9b PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0xe9c TObjFunc
	return 0; // 0xe9e Return
	
Label_3743:
	var_131_int = 10222; // 0xe9f PushI
	var_132_bool = var_30_string == var_131_int; // 0xea0 Eq
	if(var_132_bool == 0) goto Label_3761; // 0xea1 JumpB
	var_133_string = ""; // 0xea2 PushV
	var_133_string = "Neutral"; // 0xea3 MovS
	func_3526(var_31_bool, var_133_string); // 0xea4 Call
	var_134_int = 9311; // 0xea6 PushI
	SetMessage(var_134_int); // 0xea7 TObjFunc
	ClearReplies(); // 0xea9 TObjFunc
	var_135_int = 9312; // 0xeab PushI
	var_136_int = -1; // 0xeac PushI
	var_137_int = 10223; // 0xead PushI
	AddReply(var_135_int, var_136_int, var_137_int); // 0xeae TObjFunc
	return 0; // 0xeb0 Return
	
Label_3761:
	var_138_int = 10205; // 0xeb1 PushI
	var_139_bool = var_30_string == var_138_int; // 0xeb2 Eq
	if(var_139_bool == 0) goto Label_3784; // 0xeb3 JumpB
	var_140_string = ""; // 0xeb4 PushV
	var_140_string = "Neutral"; // 0xeb5 MovS
	func_3526(var_31_bool, var_140_string); // 0xeb6 Call
	var_141_int = 9296; // 0xeb8 PushI
	SetMessage(var_141_int); // 0xeb9 TObjFunc
	ClearReplies(); // 0xebb TObjFunc
	var_142_int = 9297; // 0xebd PushI
	var_143_int = 10207; // 0xebe PushI
	var_144_int = 10206; // 0xebf PushI
	AddReply(var_142_int, var_143_int, var_144_int); // 0xec0 TObjFunc
	var_145_int = 9305; // 0xec2 PushI
	var_146_int = 10207; // 0xec3 PushI
	var_147_int = 10214; // 0xec4 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0xec5 TObjFunc
	return 0; // 0xec7 Return
	
Label_3784:
	var_148_int = 10207; // 0xec8 PushI
	var_149_bool = var_30_string == var_148_int; // 0xec9 Eq
	if(var_149_bool == 0) goto Label_3807; // 0xeca JumpB
	var_150_string = ""; // 0xecb PushV
	var_150_string = "Neutral"; // 0xecc MovS
	func_3526(var_31_bool, var_150_string); // 0xecd Call
	var_151_int = 9298; // 0xecf PushI
	SetMessage(var_151_int); // 0xed0 TObjFunc
	ClearReplies(); // 0xed2 TObjFunc
	var_152_int = 9299; // 0xed4 PushI
	var_153_int = 10209; // 0xed5 PushI
	var_154_int = 10208; // 0xed6 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0xed7 TObjFunc
	var_155_int = 9303; // 0xed9 PushI
	var_156_int = 10213; // 0xeda PushI
	var_157_int = 10212; // 0xedb PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0xedc TObjFunc
	return 0; // 0xede Return
	
Label_3807:
	var_158_int = 10213; // 0xedf PushI
	var_159_bool = var_30_string == var_158_int; // 0xee0 Eq
	if(var_159_bool == 0) goto Label_3820; // 0xee1 JumpB
	var_160_string = ""; // 0xee2 PushV
	var_160_string = "Neutral"; // 0xee3 MovS
	func_3526(var_31_bool, var_160_string); // 0xee4 Call
	var_161_int = 9304; // 0xee6 PushI
	SetMessage(var_161_int); // 0xee7 TObjFunc
	ClearReplies(); // 0xee9 TObjFunc
	return 0; // 0xeeb Return
	
Label_3820:
	var_162_int = 10209; // 0xeec PushI
	var_163_bool = var_30_string == var_162_int; // 0xeed Eq
	if(var_163_bool == 0) goto Label_3843; // 0xeee JumpB
	var_164_string = ""; // 0xeef PushV
	var_164_string = "Neutral"; // 0xef0 MovS
	func_3526(var_31_bool, var_164_string); // 0xef1 Call
	var_165_int = 9300; // 0xef3 PushI
	SetMessage(var_165_int); // 0xef4 TObjFunc
	ClearReplies(); // 0xef6 TObjFunc
	var_166_int = 9301; // 0xef8 PushI
	var_167_int = -1; // 0xef9 PushI
	var_168_int = 10210; // 0xefa PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0xefb TObjFunc
	var_169_int = 9302; // 0xefd PushI
	var_170_int = -1; // 0xefe PushI
	var_171_int = 10211; // 0xeff PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0xf00 TObjFunc
	return 0; // 0xf02 Return
	
Label_3843:
	var_172_int = 7622; // 0xf03 PushI
	var_173_bool = var_30_string == var_172_int; // 0xf04 Eq
	if(var_173_bool == 0) goto Label_3866; // 0xf05 JumpB
	var_174_string = ""; // 0xf06 PushV
	var_174_string = "Neutral"; // 0xf07 MovS
	func_3526(var_31_bool, var_174_string); // 0xf08 Call
	var_175_int = 6916; // 0xf0a PushI
	SetMessage(var_175_int); // 0xf0b TObjFunc
	ClearReplies(); // 0xf0d TObjFunc
	var_176_int = 6917; // 0xf0f PushI
	var_177_int = 8117; // 0xf10 PushI
	var_178_int = 7623; // 0xf11 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0xf12 TObjFunc
	var_179_int = 7365; // 0xf14 PushI
	var_180_int = 8124; // 0xf15 PushI
	var_181_int = 8123; // 0xf16 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xf17 TObjFunc
	return 0; // 0xf19 Return
	
Label_3866:
	var_182_int = 8124; // 0xf1a PushI
	var_183_bool = var_30_string == var_182_int; // 0xf1b Eq
	if(var_183_bool == 0) goto Label_3889; // 0xf1c JumpB
	var_184_string = ""; // 0xf1d PushV
	var_184_string = "Neutral"; // 0xf1e MovS
	func_3526(var_31_bool, var_184_string); // 0xf1f Call
	var_185_int = 7366; // 0xf21 PushI
	SetMessage(var_185_int); // 0xf22 TObjFunc
	ClearReplies(); // 0xf24 TObjFunc
	var_186_int = 7367; // 0xf26 PushI
	var_187_int = 8121; // 0xf27 PushI
	var_188_int = 8125; // 0xf28 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0xf29 TObjFunc
	var_189_int = 7368; // 0xf2b PushI
	var_190_int = 8127; // 0xf2c PushI
	var_191_int = 8126; // 0xf2d PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xf2e TObjFunc
	return 0; // 0xf30 Return
	
Label_3889:
	var_192_int = 8127; // 0xf31 PushI
	var_193_bool = var_30_string == var_192_int; // 0xf32 Eq
	if(var_193_bool == 0) goto Label_3907; // 0xf33 JumpB
	var_194_string = ""; // 0xf34 PushV
	var_194_string = "Neutral"; // 0xf35 MovS
	func_3526(var_31_bool, var_194_string); // 0xf36 Call
	var_195_int = 7369; // 0xf38 PushI
	SetMessage(var_195_int); // 0xf39 TObjFunc
	ClearReplies(); // 0xf3b TObjFunc
	var_196_int = 7370; // 0xf3d PushI
	var_197_int = 8121; // 0xf3e PushI
	var_198_int = 8128; // 0xf3f PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0xf40 TObjFunc
	return 0; // 0xf42 Return
	
Label_3907:
	var_199_int = 8117; // 0xf43 PushI
	var_200_bool = var_30_string == var_199_int; // 0xf44 Eq
	if(var_200_bool == 0) goto Label_3930; // 0xf45 JumpB
	var_201_string = ""; // 0xf46 PushV
	var_201_string = "Neutral"; // 0xf47 MovS
	func_3526(var_31_bool, var_201_string); // 0xf48 Call
	var_202_int = 7359; // 0xf4a PushI
	SetMessage(var_202_int); // 0xf4b TObjFunc
	ClearReplies(); // 0xf4d TObjFunc
	var_203_int = 7360; // 0xf4f PushI
	var_204_int = 8119; // 0xf50 PushI
	var_205_int = 8118; // 0xf51 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0xf52 TObjFunc
	var_206_int = 7372; // 0xf54 PushI
	var_207_int = 8121; // 0xf55 PushI
	var_208_int = 8132; // 0xf56 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xf57 TObjFunc
	return 0; // 0xf59 Return
	
Label_3930:
	var_209_int = 8119; // 0xf5a PushI
	var_210_bool = var_30_string == var_209_int; // 0xf5b Eq
	if(var_210_bool == 0) goto Label_3948; // 0xf5c JumpB
	var_211_string = ""; // 0xf5d PushV
	var_211_string = "Neutral"; // 0xf5e MovS
	func_3526(var_31_bool, var_211_string); // 0xf5f Call
	var_212_int = 7361; // 0xf61 PushI
	SetMessage(var_212_int); // 0xf62 TObjFunc
	ClearReplies(); // 0xf64 TObjFunc
	var_213_int = 7362; // 0xf66 PushI
	var_214_int = 8121; // 0xf67 PushI
	var_215_int = 8120; // 0xf68 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0xf69 TObjFunc
	return 0; // 0xf6b Return
	
Label_3948:
	var_216_int = 8121; // 0xf6c PushI
	var_217_bool = var_30_string == var_216_int; // 0xf6d Eq
	if(var_217_bool == 0) goto Label_3971; // 0xf6e JumpB
	var_218_string = ""; // 0xf6f PushV
	var_218_string = "Neutral"; // 0xf70 MovS
	func_3526(var_31_bool, var_218_string); // 0xf71 Call
	var_219_int = 7363; // 0xf73 PushI
	SetMessage(var_219_int); // 0xf74 TObjFunc
	ClearReplies(); // 0xf76 TObjFunc
	var_220_int = 7364; // 0xf78 PushI
	var_221_int = -1; // 0xf79 PushI
	var_222_int = 8122; // 0xf7a PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0xf7b TObjFunc
	var_223_int = 7371; // 0xf7d PushI
	var_224_int = -1; // 0xf7e PushI
	var_225_int = 8131; // 0xf7f PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0xf80 TObjFunc
	return 0; // 0xf82 Return
	
Label_3971:
	var_3_string = 1; // 0xf83 TMovB
	var_226_bool = 0; // 0xf84 PushV
	func_5108(var_226_bool); // 0xf85 Call
	if(var_226_bool == 0) goto Label_3979; // 0xf87 JumpB
	lshStopAnimation(); // 0xf88 Func
	goto Label_3981; // 0xf8a Jump
	
Label_3981:
	return 0; // 0xf8d Return
	
Label_3979:
	StopAnimation(); // 0xf8b Func
	
Label_3983:
	return 0; // 0xf8f Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x1038 PushI
	if(var_32_int == 0) goto Label_4314; // 0x1039 JumpB
	func_5007(); // 0x103b Call
	var_34_int = 10865; // 0x103d PushI
	var_35_bool = var_30_string == var_34_int; // 0x103e Eq
	if(var_35_bool == 0) goto Label_4210; // 0x103f JumpB
	var_36_bool = 0; var_37_object = Obj(); // 0x1040 PushV
	var_37_object = var_1_object; // 0x1041 MovT
	func_5980(var_37_object); // 0x1042 Call
	if(var_36_bool == 0) goto Label_4195; // 0x1044 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0x1045 PushV
	var_44_object = var_1_object; // 0x1046 MovT
	var_45_object = var_0_object; // 0x1047 MovT
	func_5505(); // 0x1048 Call
	var_48_string = ""; // 0x104a PushV
	var_48_string = "Neutral"; // 0x104b MovS
	func_4135(var_31_bool, var_48_string); // 0x104c Call
	var_63_int = 9865; // 0x104e PushI
	SetMessage(var_63_int); // 0x104f TObjFunc
	ClearReplies(); // 0x1051 TObjFunc
	var_64_int = 9866; // 0x1053 PushI
	var_65_int = 10867; // 0x1054 PushI
	var_66_int = 10866; // 0x1055 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x1056 TObjFunc
	var_67_int = 9877; // 0x1058 PushI
	var_68_int = -1; // 0x1059 PushI
	var_69_int = 10880; // 0x105a PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x105b TObjFunc
	var_70_int = 9878; // 0x105d PushI
	var_71_int = 10882; // 0x105e PushI
	var_72_int = 10881; // 0x105f PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x1060 TObjFunc
	return 0; // 0x1062 Return
	
Label_4195:
	var_73_string = ""; // 0x1063 PushV
	var_73_string = "Neutral"; // 0x1064 MovS
	func_4135(var_31_bool, var_73_string); // 0x1065 Call
	var_74_int = 10190; // 0x1067 PushI
	SetMessage(var_74_int); // 0x1068 TObjFunc
	ClearReplies(); // 0x106a TObjFunc
	var_75_int = 15313; // 0x106c PushI
	var_76_int = -1; // 0x106d PushI
	var_77_int = 16551; // 0x106e PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x106f TObjFunc
	return 0; // 0x1071 Return
	
Label_4210:
	var_78_int = 10882; // 0x1072 PushI
	var_79_bool = var_30_string == var_78_int; // 0x1073 Eq
	if(var_79_bool == 0) goto Label_4228; // 0x1074 JumpB
	var_80_string = ""; // 0x1075 PushV
	var_80_string = "Neutral"; // 0x1076 MovS
	func_4135(var_31_bool, var_80_string); // 0x1077 Call
	var_81_int = 9879; // 0x1079 PushI
	SetMessage(var_81_int); // 0x107a TObjFunc
	ClearReplies(); // 0x107c TObjFunc
	var_82_int = 9880; // 0x107e PushI
	var_83_int = -1; // 0x107f PushI
	var_84_int = 10883; // 0x1080 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x1081 TObjFunc
	return 0; // 0x1083 Return
	
Label_4228:
	var_85_int = 10867; // 0x1084 PushI
	var_86_bool = var_30_string == var_85_int; // 0x1085 Eq
	if(var_86_bool == 0) goto Label_4251; // 0x1086 JumpB
	var_87_string = ""; // 0x1087 PushV
	var_87_string = "Neutral"; // 0x1088 MovS
	func_4135(var_31_bool, var_87_string); // 0x1089 Call
	var_88_int = 9867; // 0x108b PushI
	SetMessage(var_88_int); // 0x108c TObjFunc
	ClearReplies(); // 0x108e TObjFunc
	var_89_int = 9868; // 0x1090 PushI
	var_90_int = 10869; // 0x1091 PushI
	var_91_int = 10868; // 0x1092 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x1093 TObjFunc
	var_92_int = 9876; // 0x1095 PushI
	var_93_int = 10869; // 0x1096 PushI
	var_94_int = 10878; // 0x1097 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x1098 TObjFunc
	return 0; // 0x109a Return
	
Label_4251:
	var_95_int = 10869; // 0x109b PushI
	var_96_bool = var_30_string == var_95_int; // 0x109c Eq
	if(var_96_bool == 0) goto Label_4279; // 0x109d JumpB
	var_97_string = ""; // 0x109e PushV
	var_97_string = "Neutral"; // 0x109f MovS
	func_4135(var_31_bool, var_97_string); // 0x10a0 Call
	var_98_int = 9869; // 0x10a2 PushI
	SetMessage(var_98_int); // 0x10a3 TObjFunc
	ClearReplies(); // 0x10a5 TObjFunc
	var_99_int = 9870; // 0x10a7 PushI
	var_100_int = 10871; // 0x10a8 PushI
	var_101_int = 10870; // 0x10a9 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x10aa TObjFunc
	var_102_int = 9874; // 0x10ac PushI
	var_103_int = 10871; // 0x10ad PushI
	var_104_int = 10874; // 0x10ae PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x10af TObjFunc
	var_105_int = 9875; // 0x10b1 PushI
	var_106_int = 10871; // 0x10b2 PushI
	var_107_int = 10876; // 0x10b3 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x10b4 TObjFunc
	return 0; // 0x10b6 Return
	
Label_4279:
	var_108_int = 10871; // 0x10b7 PushI
	var_109_bool = var_30_string == var_108_int; // 0x10b8 Eq
	if(var_109_bool == 0) goto Label_4302; // 0x10b9 JumpB
	var_110_string = ""; // 0x10ba PushV
	var_110_string = "Neutral"; // 0x10bb MovS
	func_4135(var_31_bool, var_110_string); // 0x10bc Call
	var_111_int = 9871; // 0x10be PushI
	SetMessage(var_111_int); // 0x10bf TObjFunc
	ClearReplies(); // 0x10c1 TObjFunc
	var_112_int = 9872; // 0x10c3 PushI
	var_113_int = -1; // 0x10c4 PushI
	var_114_int = 10872; // 0x10c5 PushI
	AddReply(var_112_int, var_113_int, var_114_int); // 0x10c6 TObjFunc
	var_115_int = 9873; // 0x10c8 PushI
	var_116_int = -1; // 0x10c9 PushI
	var_117_int = 10873; // 0x10ca PushI
	AddReply(var_115_int, var_116_int, var_117_int); // 0x10cb TObjFunc
	return 0; // 0x10cd Return
	
Label_4302:
	var_3_string = 1; // 0x10ce TMovB
	var_118_bool = 0; // 0x10cf PushV
	func_5108(var_118_bool); // 0x10d0 Call
	if(var_118_bool == 0) goto Label_4310; // 0x10d2 JumpB
	lshStopAnimation(); // 0x10d3 Func
	goto Label_4312; // 0x10d5 Jump
	
Label_4312:
	return 0; // 0x10d8 Return
	
Label_4310:
	StopAnimation(); // 0x10d6 Func
	
Label_4314:
	return 0; // 0x10da Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	var_32_int = 1; // 0x1191 PushI
	if(var_32_int == 0) goto Label_4904; // 0x1192 JumpB
	func_5007(); // 0x1194 Call
	var_34_int = 12527; // 0x1196 PushI
	var_35_bool = var_31_int == var_34_int; // 0x1197 Eq
	if(var_35_bool == 0) goto Label_4540; // 0x1198 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x1199 PushV
	var_36_object = var_1_object; // 0x119a MovT
	var_37_object = var_0_object; // 0x119b MovT
	func_5226(); // 0x119c Call
	var_40_object = Obj(); var_41_object = Obj(); // 0x119e PushV
	var_40_object = var_1_object; // 0x119f MovT
	var_41_object = var_0_object; // 0x11a0 MovT
	func_5232(); // 0x11a1 Call
	var_44_object = Obj(); var_45_object = Obj(); // 0x11a3 PushV
	var_44_object = var_1_object; // 0x11a4 MovT
	var_45_object = var_0_object; // 0x11a5 MovT
	func_5238(); // 0x11a6 Call
	var_110_object = Obj(); var_111_object = Obj(); // 0x11a8 PushV
	var_110_object = var_1_object; // 0x11a9 MovT
	var_111_object = var_0_object; // 0x11aa MovT
	func_5494(var_111_object); // 0x11ab Call
	var_129_object = Obj(); var_130_object = Obj(); // 0x11ad PushV
	var_129_object = var_1_object; // 0x11ae MovT
	var_130_object = var_0_object; // 0x11af MovT
	func_5511(var_130_object); // 0x11b0 Call
	var_135_object = Obj(); var_136_object = Obj(); // 0x11b2 PushV
	var_135_object = var_1_object; // 0x11b3 MovT
	var_136_object = var_0_object; // 0x11b4 MovT
	func_5522(var_136_object); // 0x11b5 Call
	var_141_object = Obj(); var_142_object = Obj(); // 0x11b7 PushV
	var_141_object = var_1_object; // 0x11b8 MovT
	var_142_object = var_0_object; // 0x11b9 MovT
	func_5145(); // 0x11ba Call
	
Label_4540:
	var_145_int = 12674; // 0x11bc PushI
	var_146_bool = var_31_int == var_145_int; // 0x11bd Eq
	if(var_146_bool == 0) goto Label_4548; // 0x11be JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x11bf PushV
	var_147_object = var_1_object; // 0x11c0 MovT
	var_148_object = var_0_object; // 0x11c1 MovT
	func_5226(); // 0x11c2 Call
	
Label_4548:
	var_149_int = 12677; // 0x11c4 PushI
	var_150_bool = var_31_int == var_149_int; // 0x11c5 Eq
	if(var_150_bool == 0) goto Label_4581; // 0x11c6 JumpB
	var_151_object = Obj(); var_152_object = Obj(); // 0x11c7 PushV
	var_151_object = var_1_object; // 0x11c8 MovT
	var_152_object = var_0_object; // 0x11c9 MovT
	func_5232(); // 0x11ca Call
	var_153_object = Obj(); var_154_object = Obj(); // 0x11cc PushV
	var_153_object = var_1_object; // 0x11cd MovT
	var_154_object = var_0_object; // 0x11ce MovT
	func_5238(); // 0x11cf Call
	var_155_object = Obj(); var_156_object = Obj(); // 0x11d1 PushV
	var_155_object = var_1_object; // 0x11d2 MovT
	var_156_object = var_0_object; // 0x11d3 MovT
	func_5145(); // 0x11d4 Call
	var_157_object = Obj(); var_158_object = Obj(); // 0x11d6 PushV
	var_157_object = var_1_object; // 0x11d7 MovT
	var_158_object = var_0_object; // 0x11d8 MovT
	func_5494(var_158_object); // 0x11d9 Call
	var_159_object = Obj(); var_160_object = Obj(); // 0x11db PushV
	var_159_object = var_1_object; // 0x11dc MovT
	var_160_object = var_0_object; // 0x11dd MovT
	func_5522(var_160_object); // 0x11de Call
	var_161_object = Obj(); var_162_object = Obj(); // 0x11e0 PushV
	var_161_object = var_1_object; // 0x11e1 MovT
	var_162_object = var_0_object; // 0x11e2 MovT
	func_5511(var_162_object); // 0x11e3 Call
	
Label_4581:
	var_163_int = 13071; // 0x11e5 PushI
	var_164_bool = var_31_int == var_163_int; // 0x11e6 Eq
	if(var_164_bool == 0) goto Label_4589; // 0x11e7 JumpB
	var_165_object = Obj(); var_166_object = Obj(); // 0x11e8 PushV
	var_165_object = var_1_object; // 0x11e9 MovT
	var_166_object = var_0_object; // 0x11ea MovT
	func_5306(); // 0x11eb Call
	
Label_4589:
	var_169_int = 12514; // 0x11ed PushI
	var_170_bool = var_30_int == var_169_int; // 0x11ee Eq
	if(var_170_bool == 0) goto Label_4656; // 0x11ef JumpB
	var_171_string = ""; // 0x11f0 PushV
	var_171_string = "Neutral"; // 0x11f1 MovS
	func_4480(var_31_int, var_171_string); // 0x11f2 Call
	var_186_int = 11320; // 0x11f4 PushI
	SetMessage(var_186_int); // 0x11f5 TObjFunc
	ClearReplies(); // 0x11f7 TObjFunc
	var_187_bool = 0; var_188_object = Obj(); // 0x11f9 PushV
	var_188_object = var_1_object; // 0x11fa MovT
	func_5783(var_188_object); // 0x11fb Call
	if(var_187_bool == 0) goto Label_4611; // 0x11fd JumpB
	var_193_int = 11321; // 0x11fe PushI
	var_194_int = 12516; // 0x11ff PushI
	var_195_int = 12515; // 0x1200 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x1201 TObjFunc
	
Label_4611:
	var_196_bool = 0; // 0x1203 PushV
	var_196_bool = 0; // 0x1204 MovB
	var_197_bool = 0; var_198_object = Obj(); // 0x1205 PushV
	var_198_object = var_1_object; // 0x1206 MovT
	func_5771(var_198_object); // 0x1207 Call
	if(var_197_bool == 0) goto Label_4625; // 0x1209 JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x120a PushV
	var_204_object = var_1_object; // 0x120b MovT
	func_5795(var_204_object); // 0x120c Call
	var_209_bool = var_203_bool == 0; // 0x120e Not
	if(var_209_bool == 0) goto Label_4625; // 0x120f JumpB
	var_196_bool = 1; // 0x1210 MovB
	
Label_4625:
	if(var_196_bool == 0) goto Label_4631; // 0x1211 JumpB
	var_210_int = 11469; // 0x1212 PushI
	var_211_int = 12676; // 0x1213 PushI
	var_212_int = 12675; // 0x1214 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1215 TObjFunc
	
Label_4631:
	var_213_bool = 0; // 0x1217 PushV
	var_213_bool = 0; // 0x1218 MovB
	var_214_bool = 0; var_215_object = Obj(); // 0x1219 PushV
	var_215_object = var_1_object; // 0x121a MovT
	func_5819(var_215_object); // 0x121b Call
	if(var_214_bool == 0) goto Label_4644; // 0x121d JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x121e PushV
	var_221_object = var_1_object; // 0x121f MovT
	func_5807(var_221_object); // 0x1220 Call
	if(var_220_bool == 0) goto Label_4644; // 0x1222 JumpB
	var_213_bool = 1; // 0x1223 MovB
	
Label_4644:
	if(var_213_bool == 0) goto Label_4650; // 0x1224 JumpB
	var_226_int = 11856; // 0x1225 PushI
	var_227_int = 13070; // 0x1226 PushI
	var_228_int = 13069; // 0x1227 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1228 TObjFunc
	
Label_4650:
	var_229_int = 11472; // 0x122a PushI
	var_230_int = -1; // 0x122b PushI
	var_231_int = 12678; // 0x122c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x122d TObjFunc
	return 0; // 0x122f Return
	
Label_4656:
	var_232_int = 13070; // 0x1230 PushI
	var_233_bool = var_30_int == var_232_int; // 0x1231 Eq
	if(var_233_bool == 0) goto Label_4674; // 0x1232 JumpB
	var_234_string = ""; // 0x1233 PushV
	var_234_string = "Neutral"; // 0x1234 MovS
	func_4480(var_31_int, var_234_string); // 0x1235 Call
	var_235_int = 11857; // 0x1237 PushI
	SetMessage(var_235_int); // 0x1238 TObjFunc
	ClearReplies(); // 0x123a TObjFunc
	var_236_int = 11858; // 0x123c PushI
	var_237_int = -1; // 0x123d PushI
	var_238_int = 13071; // 0x123e PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x123f TObjFunc
	return 0; // 0x1241 Return
	
Label_4674:
	var_239_int = 12676; // 0x1242 PushI
	var_240_bool = var_30_int == var_239_int; // 0x1243 Eq
	if(var_240_bool == 0) goto Label_4692; // 0x1244 JumpB
	var_241_string = ""; // 0x1245 PushV
	var_241_string = "Neutral"; // 0x1246 MovS
	func_4480(var_31_int, var_241_string); // 0x1247 Call
	var_242_int = 11470; // 0x1249 PushI
	SetMessage(var_242_int); // 0x124a TObjFunc
	ClearReplies(); // 0x124c TObjFunc
	var_243_int = 11471; // 0x124e PushI
	var_244_int = -1; // 0x124f PushI
	var_245_int = 12677; // 0x1250 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x1251 TObjFunc
	return 0; // 0x1253 Return
	
Label_4692:
	var_246_int = 12516; // 0x1254 PushI
	var_247_bool = var_30_int == var_246_int; // 0x1255 Eq
	if(var_247_bool == 0) goto Label_4715; // 0x1256 JumpB
	var_248_string = ""; // 0x1257 PushV
	var_248_string = "Neutral"; // 0x1258 MovS
	func_4480(var_31_int, var_248_string); // 0x1259 Call
	var_249_int = 11322; // 0x125b PushI
	SetMessage(var_249_int); // 0x125c TObjFunc
	ClearReplies(); // 0x125e TObjFunc
	var_250_int = 11429; // 0x1260 PushI
	var_251_int = 12522; // 0x1261 PushI
	var_252_int = 12629; // 0x1262 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x1263 TObjFunc
	var_253_int = 11323; // 0x1265 PushI
	var_254_int = 12518; // 0x1266 PushI
	var_255_int = 12517; // 0x1267 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x1268 TObjFunc
	return 0; // 0x126a Return
	
Label_4715:
	var_256_int = 12518; // 0x126b PushI
	var_257_bool = var_30_int == var_256_int; // 0x126c Eq
	if(var_257_bool == 0) goto Label_4733; // 0x126d JumpB
	var_258_string = ""; // 0x126e PushV
	var_258_string = "Neutral"; // 0x126f MovS
	func_4480(var_31_int, var_258_string); // 0x1270 Call
	var_259_int = 11324; // 0x1272 PushI
	SetMessage(var_259_int); // 0x1273 TObjFunc
	ClearReplies(); // 0x1275 TObjFunc
	var_260_int = 11455; // 0x1277 PushI
	var_261_int = 12522; // 0x1278 PushI
	var_262_int = 12659; // 0x1279 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x127a TObjFunc
	return 0; // 0x127c Return
	
Label_4733:
	var_263_int = 12522; // 0x127d PushI
	var_264_bool = var_30_int == var_263_int; // 0x127e Eq
	if(var_264_bool == 0) goto Label_4756; // 0x127f JumpB
	var_265_string = ""; // 0x1280 PushV
	var_265_string = "Neutral"; // 0x1281 MovS
	func_4480(var_31_int, var_265_string); // 0x1282 Call
	var_266_int = 11328; // 0x1284 PushI
	SetMessage(var_266_int); // 0x1285 TObjFunc
	ClearReplies(); // 0x1287 TObjFunc
	var_267_int = 11329; // 0x1289 PushI
	var_268_int = 12524; // 0x128a PushI
	var_269_int = 12523; // 0x128b PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x128c TObjFunc
	var_270_int = 11456; // 0x128e PushI
	var_271_int = 12661; // 0x128f PushI
	var_272_int = 12660; // 0x1290 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x1291 TObjFunc
	return 0; // 0x1293 Return
	
Label_4756:
	var_273_int = 12661; // 0x1294 PushI
	var_274_bool = var_30_int == var_273_int; // 0x1295 Eq
	if(var_274_bool == 0) goto Label_4774; // 0x1296 JumpB
	var_275_string = ""; // 0x1297 PushV
	var_275_string = "Neutral"; // 0x1298 MovS
	func_4480(var_31_int, var_275_string); // 0x1299 Call
	var_276_int = 11457; // 0x129b PushI
	SetMessage(var_276_int); // 0x129c TObjFunc
	ClearReplies(); // 0x129e TObjFunc
	var_277_int = 11458; // 0x12a0 PushI
	var_278_int = 12663; // 0x12a1 PushI
	var_279_int = 12662; // 0x12a2 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x12a3 TObjFunc
	return 0; // 0x12a5 Return
	
Label_4774:
	var_280_int = 12663; // 0x12a6 PushI
	var_281_bool = var_30_int == var_280_int; // 0x12a7 Eq
	if(var_281_bool == 0) goto Label_4797; // 0x12a8 JumpB
	var_282_string = ""; // 0x12a9 PushV
	var_282_string = "Neutral"; // 0x12aa MovS
	func_4480(var_31_int, var_282_string); // 0x12ab Call
	var_283_int = 11459; // 0x12ad PushI
	SetMessage(var_283_int); // 0x12ae TObjFunc
	ClearReplies(); // 0x12b0 TObjFunc
	var_284_int = 11460; // 0x12b2 PushI
	var_285_int = 12665; // 0x12b3 PushI
	var_286_int = 12664; // 0x12b4 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x12b5 TObjFunc
	var_287_int = 11462; // 0x12b7 PushI
	var_288_int = 12667; // 0x12b8 PushI
	var_289_int = 12666; // 0x12b9 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x12ba TObjFunc
	return 0; // 0x12bc Return
	
Label_4797:
	var_290_int = 12667; // 0x12bd PushI
	var_291_bool = var_30_int == var_290_int; // 0x12be Eq
	if(var_291_bool == 0) goto Label_4815; // 0x12bf JumpB
	var_292_string = ""; // 0x12c0 PushV
	var_292_string = "Neutral"; // 0x12c1 MovS
	func_4480(var_31_int, var_292_string); // 0x12c2 Call
	var_293_int = 11463; // 0x12c4 PushI
	SetMessage(var_293_int); // 0x12c5 TObjFunc
	ClearReplies(); // 0x12c7 TObjFunc
	var_294_int = 11465; // 0x12c9 PushI
	var_295_int = 12524; // 0x12ca PushI
	var_296_int = 12669; // 0x12cb PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x12cc TObjFunc
	return 0; // 0x12ce Return
	
Label_4815:
	var_297_int = 12665; // 0x12cf PushI
	var_298_bool = var_30_int == var_297_int; // 0x12d0 Eq
	if(var_298_bool == 0) goto Label_4833; // 0x12d1 JumpB
	var_299_string = ""; // 0x12d2 PushV
	var_299_string = "Neutral"; // 0x12d3 MovS
	func_4480(var_31_int, var_299_string); // 0x12d4 Call
	var_300_int = 11461; // 0x12d6 PushI
	SetMessage(var_300_int); // 0x12d7 TObjFunc
	ClearReplies(); // 0x12d9 TObjFunc
	var_301_int = 11466; // 0x12db PushI
	var_302_int = 12524; // 0x12dc PushI
	var_303_int = 12670; // 0x12dd PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x12de TObjFunc
	return 0; // 0x12e0 Return
	
Label_4833:
	var_304_int = 12524; // 0x12e1 PushI
	var_305_bool = var_30_int == var_304_int; // 0x12e2 Eq
	if(var_305_bool == 0) goto Label_4851; // 0x12e3 JumpB
	var_306_string = ""; // 0x12e4 PushV
	var_306_string = "Neutral"; // 0x12e5 MovS
	func_4480(var_31_int, var_306_string); // 0x12e6 Call
	var_307_int = 11330; // 0x12e8 PushI
	SetMessage(var_307_int); // 0x12e9 TObjFunc
	ClearReplies(); // 0x12eb TObjFunc
	var_308_int = 11331; // 0x12ed PushI
	var_309_int = 12526; // 0x12ee PushI
	var_310_int = 12525; // 0x12ef PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x12f0 TObjFunc
	return 0; // 0x12f2 Return
	
Label_4851:
	var_311_int = 12526; // 0x12f3 PushI
	var_312_bool = var_30_int == var_311_int; // 0x12f4 Eq
	if(var_312_bool == 0) goto Label_4874; // 0x12f5 JumpB
	var_313_string = ""; // 0x12f6 PushV
	var_313_string = "Neutral"; // 0x12f7 MovS
	func_4480(var_31_int, var_313_string); // 0x12f8 Call
	var_314_int = 11332; // 0x12fa PushI
	SetMessage(var_314_int); // 0x12fb TObjFunc
	ClearReplies(); // 0x12fd TObjFunc
	var_315_int = 11333; // 0x12ff PushI
	var_316_int = -1; // 0x1300 PushI
	var_317_int = 12527; // 0x1301 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x1302 TObjFunc
	var_318_int = 11464; // 0x1304 PushI
	var_319_int = 12673; // 0x1305 PushI
	var_320_int = 12668; // 0x1306 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x1307 TObjFunc
	return 0; // 0x1309 Return
	
Label_4874:
	var_321_int = 12673; // 0x130a PushI
	var_322_bool = var_30_int == var_321_int; // 0x130b Eq
	if(var_322_bool == 0) goto Label_4892; // 0x130c JumpB
	var_323_string = ""; // 0x130d PushV
	var_323_string = "Neutral"; // 0x130e MovS
	func_4480(var_31_int, var_323_string); // 0x130f Call
	var_324_int = 11467; // 0x1311 PushI
	SetMessage(var_324_int); // 0x1312 TObjFunc
	ClearReplies(); // 0x1314 TObjFunc
	var_325_int = 11468; // 0x1316 PushI
	var_326_int = -1; // 0x1317 PushI
	var_327_int = 12674; // 0x1318 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x1319 TObjFunc
	return 0; // 0x131b Return
	
Label_4892:
	var_3_string = 1; // 0x131c TMovB
	var_328_bool = 0; // 0x131d PushV
	func_5108(var_328_bool); // 0x131e Call
	if(var_328_bool == 0) goto Label_4900; // 0x1320 JumpB
	lshStopAnimation(); // 0x1321 Func
	goto Label_4902; // 0x1323 Jump
	
Label_4902:
	return 0; // 0x1326 Return
	
Label_4900:
	StopAnimation(); // 0x1324 Func
	
Label_4904:
	return 0; // 0x1328 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_6201(); // 0x7 Call
	var_31_bool = 0; // 0x9 PushV
	func_4924(var_31_bool); // 0xa Call
	var_34_bool = var_31_bool == 0; // 0xc Not
	if(var_34_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_35_string = ""; // 0x13 PushV
	var_35_string = "Neutral"; // 0x14 MovS
	func_4989(var_35_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_5122()
{
	var_97_string = "ood1Julia3"; // 0x1403 PushS
	var_98_int = 1; // 0x1404 PushI
	SetVariable(var_97_string, var_98_int); // 0x1405 Func
	return 0; // 0x1407 Return
}


func_5891(var_237_bool)
{
	var_239_int = 0; var_240_string = ""; // 0x1704 PushV
	var_240_string = "ood6Julia2"; // 0x1705 MovS
	func_5024(var_239_int, var_240_string); // 0x1706 Call
	var_241_int = 0; // 0x1708 PushI
	var_242_bool = var_239_int == var_241_int; // 0x1709 Eq
	if(var_242_bool == 0) goto Label_5901; // 0x170a JumpB
	var_237_bool = 1; // 0x170b MovB
	return 0; // 0x170c Return
	
Label_5901:
	var_237_bool = 0; // 0x170d MovB
	return 0; // 0x170e Return
}


func_5128(var_44_object)
{
	var_46_string = "money1000 is given"; // 0x1409 PushS
	Trace(var_46_string); // 0x140a Func
	var_47_object = Obj(); var_48_string = ""; var_49_int = 0; // 0x140c PushV
	var_47_object = var_44_object; // 0x140d Mov
	var_48_string = "money"; // 0x140e MovS
	var_49_int = 1000; // 0x140f MovI
	func_4905(var_48_string, var_49_int); // 0x1410 Call
	return 0; // 0x1412 Return
}


func_6153()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1809 PushV
	var_56_string = "Adding diary entry"; // 0x180a PushS
	Trace(var_56_string); // 0x180b Func
	var_57_int = 33; // 0x180d PushI
	var_58_int = 1; // 0x180e PushI
	var_59_int = 12115; // 0x180f PushI
	CreateDiaryEntry(var_55_object, var_57_int, var_58_int, var_59_int); // 0x1810 Func
	var_60_bool = 0; var_61_object = Obj(); var_62_int = 0; // 0x1812 PushV
	var_61_object = var_55_object; // 0x1813 Mov
	var_62_int = 2; // 0x1814 MovI
	func_6040(var_60_bool, var_61_object, var_62_int); // 0x1815 Call
	return 2; // 0x1817 Return
}


func_5641(var_299_bool)
{
	var_301_int = 0; var_302_string = ""; // 0x160a PushV
	var_302_string = "ood1Julia4"; // 0x160b MovS
	func_5024(var_301_int, var_302_string); // 0x160c Call
	var_303_int = 0; // 0x160e PushI
	var_304_bool = var_301_int == var_303_int; // 0x160f Eq
	if(var_304_bool == 0) goto Label_5651; // 0x1610 JumpB
	var_299_bool = 1; // 0x1611 MovB
	return 0; // 0x1612 Return
	
Label_5651:
	var_299_bool = 0; // 0x1613 MovB
	return 0; // 0x1614 Return
}


func_5903(var_249_bool)
{
	var_251_int = 0; var_252_string = ""; // 0x1710 PushV
	var_252_string = "microscope_d6q01_julia_blood"; // 0x1711 MovS
	func_5024(var_251_int, var_252_string); // 0x1712 Call
	var_253_int = 0; // 0x1714 PushI
	var_254_bool = var_251_int != var_253_int; // 0x1715 Neq
	if(var_254_bool == 0) goto Label_5913; // 0x1716 JumpB
	var_249_bool = 1; // 0x1717 MovB
	return 0; // 0x1718 Return
	
Label_5913:
	var_249_bool = 0; // 0x1719 MovB
	return 0; // 0x171a Return
}


func_3346(var_0_object, var_417_int, var_418_object)
{
	var_420_object = Obj(); var_421_bool = 0; var_422_int = 0; var_423_bool = 0; var_424_object = Obj(); var_425_bool = 0; var_426_int = 0; var_427_bool = 0; // 0xd12 PushV
	var_0_object = var_418_object; // 0xd13 TMov
	var_428_bool = 0; var_429_object = Obj(); // 0xd14 PushV
	var_429_object = var_418_object; // 0xd15 Mov
	func_4929(var_429_object); // 0xd16 Call
	var_430_bool = var_428_bool == 0; // 0xd18 Not
	if(var_430_bool == 0) goto Label_3356; // 0xd19 JumpB
	var_417_int = -2; // 0xd1a MovI
	return 8; // 0xd1b Return
	
Label_3356:
	CreateDialog(var_424_object); // 0xd1c Func
	var_431_int = 0; // 0xd1e PushV
	func_5104(var_431_int); // 0xd1f Call
	SetNPCName(var_431_int); // 0xd21 ObjFunc
	var_432_string = ""; // 0xd23 PushV
	func_5106(var_432_string); // 0xd24 Call
	SetPhoto(var_432_string); // 0xd26 ObjFunc
	var_433_int = 0; // 0xd28 PushV
	func_6136(var_433_int); // 0xd29 Call
	SetPlayerName(var_433_int); // 0xd2b ObjFunc
	var_426_int = -1; // 0xd2d MovI
	IsOverrideActive(var_425_bool); // 0xd2e Func
	var_434_bool = var_425_bool; // 0xd30 Push
	if(var_434_bool == 0) goto Label_3380; // 0xd31 JumpB
	var_417_int = -2; // 0xd32 MovI
	return 8; // 0xd33 Return
	
Label_3380:
	DoDialog(var_424_object); // 0xd34 Func
	var_435_object = Obj(); var_436_object = Obj(); // 0xd36 PushV
	var_435_object = var_418_object; // 0xd37 Mov
	var_436_object = var_424_object; // 0xd38 Mov
	TaskCall(9); // 0xd39 TaskCall
	func_3409(var_437_object, var_438_object, var_439_string, var_440_bool, var_435_object, var_436_object); // 0xd3a Call
	TaskReturn(); // 0xd3b TaskReturn
	IsDialogEnd(var_427_bool); // 0xd3d ObjFunc
	
Label_3391:
	var_475_bool = var_427_bool == 0; // 0xd3f Not
	if(var_475_bool == 0) goto Label_3398; // 0xd40 JumpB
	sync(); // 0xd41 Func
	IsDialogEnd(var_427_bool); // 0xd43 ObjFunc
	goto Label_3391; // 0xd45 Jump
	
Label_3398:
	var_476_object = Obj(); // 0xd46 PushV
	var_476_object = var_418_object; // 0xd47 Mov
	func_4985(); // 0xd48 Call
	StopDialog(var_424_object); // 0xd4a Func
	GetReturnValue(var_426_int); // 0xd4c ObjFunc
	var_417_int = var_426_int; // 0xd4e Mov
	return 8; // 0xd4f Return
}


func_5139()
{
	var_42_string = "playsound"; // 0x1414 PushS
	var_43_string = "givemoney"; // 0x1415 PushS
	TriggerWorld(var_42_string, var_43_string); // 0x1416 Func
	return 0; // 0x1418 Return
}


func_5653(var_309_bool)
{
	var_311_int = 0; var_312_string = ""; // 0x1616 PushV
	var_312_string = "ood1Julia5"; // 0x1617 MovS
	func_5024(var_311_int, var_312_string); // 0x1618 Call
	var_313_int = 0; // 0x161a PushI
	var_314_bool = var_311_int == var_313_int; // 0x161b Eq
	if(var_314_bool == 0) goto Label_5663; // 0x161c JumpB
	var_309_bool = 1; // 0x161d MovB
	return 0; // 0x161e Return
	
Label_5663:
	var_309_bool = 0; // 0x161f MovB
	return 0; // 0x1620 Return
}


func_5145()
{
	var_143_string = "playsound"; // 0x141a PushS
	var_144_string = "giveitem"; // 0x141b PushS
	TriggerWorld(var_143_string, var_144_string); // 0x141c Func
	return 0; // 0x141e Return
}


func_6169()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1819 PushV
	var_56_string = "Adding diary entry"; // 0x181a PushS
	Trace(var_56_string); // 0x181b Func
	var_57_int = 161; // 0x181d PushI
	var_58_int = 1; // 0x181e PushI
	var_59_int = 15394; // 0x181f PushI
	CreateDiaryEntry(var_55_object, var_57_int, var_58_int, var_59_int); // 0x1820 Func
	var_60_bool = 0; var_61_object = Obj(); var_62_int = 0; // 0x1822 PushV
	var_61_object = var_55_object; // 0x1823 Mov
	var_62_int = 111; // 0x1824 MovI
	func_6040(var_60_bool, var_61_object, var_62_int); // 0x1825 Call
	return 2; // 0x1827 Return
}


func_4378(var_0_object, var_1_object, var_2_object, var_3_object, var_564_object, var_565_object)
{
	var_0_object = var_565_object; // 0x111b TMov
	var_1_object = var_564_object; // 0x111c TMov
	var_3_object = 0; // 0x111d TMovB
	var_570_int = 1; // 0x111e PushI
	if(var_570_int == 0) goto Label_4450; // 0x111f JumpB
	var_571_string = ""; // 0x1120 PushV
	var_571_string = "Neutral"; // 0x1121 MovS
	func_4480(var_565_object, var_571_string); // 0x1122 Call
	var_576_int = 11320; // 0x1124 PushI
	SetMessage(var_576_int); // 0x1125 TObjFunc
	ClearReplies(); // 0x1127 TObjFunc
	var_577_bool = 0; var_578_object = Obj(); // 0x1129 PushV
	var_578_object = var_1_object; // 0x112a MovT
	func_5783(var_578_object); // 0x112b Call
	if(var_577_bool == 0) goto Label_4403; // 0x112d JumpB
	var_583_int = 11321; // 0x112e PushI
	var_584_int = 12516; // 0x112f PushI
	var_585_int = 12515; // 0x1130 PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x1131 TObjFunc
	
Label_4403:
	var_586_bool = 0; // 0x1133 PushV
	var_586_bool = 0; // 0x1134 MovB
	var_587_bool = 0; var_588_object = Obj(); // 0x1135 PushV
	var_588_object = var_1_object; // 0x1136 MovT
	func_5771(var_588_object); // 0x1137 Call
	if(var_587_bool == 0) goto Label_4417; // 0x1139 JumpB
	var_593_bool = 0; var_594_object = Obj(); // 0x113a PushV
	var_594_object = var_1_object; // 0x113b MovT
	func_5795(var_594_object); // 0x113c Call
	var_599_bool = var_593_bool == 0; // 0x113e Not
	if(var_599_bool == 0) goto Label_4417; // 0x113f JumpB
	var_586_bool = 1; // 0x1140 MovB
	
Label_4417:
	if(var_586_bool == 0) goto Label_4423; // 0x1141 JumpB
	var_600_int = 11469; // 0x1142 PushI
	var_601_int = 12676; // 0x1143 PushI
	var_602_int = 12675; // 0x1144 PushI
	AddReply(var_600_int, var_601_int, var_602_int); // 0x1145 TObjFunc
	
Label_4423:
	var_603_bool = 0; // 0x1147 PushV
	var_603_bool = 0; // 0x1148 MovB
	var_604_bool = 0; var_605_object = Obj(); // 0x1149 PushV
	var_605_object = var_1_object; // 0x114a MovT
	func_5819(var_605_object); // 0x114b Call
	if(var_604_bool == 0) goto Label_4436; // 0x114d JumpB
	var_610_bool = 0; var_611_object = Obj(); // 0x114e PushV
	var_611_object = var_1_object; // 0x114f MovT
	func_5807(var_611_object); // 0x1150 Call
	if(var_610_bool == 0) goto Label_4436; // 0x1152 JumpB
	var_603_bool = 1; // 0x1153 MovB
	
Label_4436:
	if(var_603_bool == 0) goto Label_4442; // 0x1154 JumpB
	var_616_int = 11856; // 0x1155 PushI
	var_617_int = 13070; // 0x1156 PushI
	var_618_int = 13069; // 0x1157 PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x1158 TObjFunc
	
Label_4442:
	var_619_int = 11472; // 0x115a PushI
	var_620_int = -1; // 0x115b PushI
	var_621_int = 12678; // 0x115c PushI
	AddReply(var_619_int, var_620_int, var_621_int); // 0x115d TObjFunc
	goto Label_4450; // 0x115f Jump
	
Label_4450:
	var_622_bool = 0; // 0x1162 PushV
	func_5108(var_622_bool); // 0x1163 Call
	if(var_622_bool == 0) goto Label_4465; // 0x1165 JumpB
	
Label_4454:
	lshWaitForAnimEnd(); // 0x1166 Func
	var_623_object = var_3_object; // 0x1168 PushT
	if(var_623_object == 0) goto Label_4459; // 0x1169 JumpB
	goto Label_4464; // 0x116a Jump
	
Label_4464:
	goto Label_4479; // 0x1170 Jump
	
Label_4479:
	return 0; // 0x117f Return
	
Label_4459:
	var_624_string = ""; // 0x116b PushV
	var_624_string = var_2_object; // 0x116c MovT
	func_4989(var_624_string); // 0x116d Call
	goto Label_4454; // 0x116f Jump
	
Label_4465:
	var_625_string = "all"; // 0x1171 PushS
	var_626_string = "idle"; // 0x1172 PushS
	PlayAnimation(var_625_string, var_626_string); // 0x1173 Func
	
Label_4469:
	WaitForAnimEnd(); // 0x1175 Func
	var_627_object = var_3_object; // 0x1177 PushT
	if(var_627_object == 0) goto Label_4474; // 0x1178 JumpB
	goto Label_4479; // 0x1179 Jump
	
Label_4474:
	var_628_string = "all"; // 0x117a PushS
	var_629_string = "idle"; // 0x117b PushS
	PlayAnimation(var_628_string, var_629_string); // 0x117c Func
	goto Label_4469; // 0x117e Jump
}


func_5915(var_255_bool)
{
	var_255_bool = 1; // 0x171c MovB
	return 0; // 0x171d Return
}


func_5151()
{
	var_38_string = "ood2Julia1"; // 0x1420 PushS
	var_39_int = 1; // 0x1421 PushI
	SetVariable(var_38_string, var_39_int); // 0x1422 Func
	return 0; // 0x1424 Return
}


func_5920(var_257_bool)
{
	var_259_int = 0; var_260_string = ""; // 0x1721 PushV
	var_260_string = "d6q01"; // 0x1722 MovS
	func_5024(var_259_int, var_260_string); // 0x1723 Call
	var_261_int = 1000; // 0x1725 PushI
	var_262_bool = var_259_int == var_261_int; // 0x1726 Eq
	if(var_262_bool == 0) goto Label_5930; // 0x1727 JumpB
	var_257_bool = 1; // 0x1728 MovB
	return 0; // 0x1729 Return
	
Label_5930:
	var_257_bool = 0; // 0x172a MovB
	return 0; // 0x172b Return
}


func_5665(var_331_bool)
{
	var_333_int = 0; var_334_string = ""; // 0x1622 PushV
	var_334_string = "ood1Julia6"; // 0x1623 MovS
	func_5024(var_333_int, var_334_string); // 0x1624 Call
	var_335_int = 0; // 0x1626 PushI
	var_336_bool = var_333_int == var_335_int; // 0x1627 Eq
	if(var_336_bool == 0) goto Label_5675; // 0x1628 JumpB
	var_331_bool = 1; // 0x1629 MovB
	return 0; // 0x162a Return
	
Label_5675:
	var_331_bool = 0; // 0x162b MovB
	return 0; // 0x162c Return
}


func_546(var_2_object, var_196_string)
{
	var_197_bool = 0; // 0x223 PushV
	func_5108(var_197_bool); // 0x224 Call
	var_198_bool = var_197_bool == 0; // 0x226 Not
	if(var_198_bool == 0) goto Label_553; // 0x227 JumpB
	return 0; // 0x228 Return
	
Label_553:
	var_199_bool = var_196_string == var_2_object; // 0x229 Eq
	if(var_199_bool == 0) goto Label_556; // 0x22a JumpB
	return 0; // 0x22b Return
	
Label_556:
	var_200_string = ""; // 0x22c PushV
	var_200_string = var_196_string; // 0x22d Mov
	func_4989(var_200_string); // 0x22e Call
	var_2_object = var_196_string; // 0x230 TMov
	return 0; // 0x231 Return
}


func_5157()
{
	var_842_string = "KnowBurahDead"; // 0x1426 PushS
	var_843_int = 1; // 0x1427 PushI
	SetVariable(var_842_string, var_843_int); // 0x1428 Func
	return 0; // 0x142a Return
}


func_4135(var_2_object, var_48_string)
{
	var_49_bool = 0; // 0x1028 PushV
	func_5108(var_49_bool); // 0x1029 Call
	var_50_bool = var_49_bool == 0; // 0x102b Not
	if(var_50_bool == 0) goto Label_4142; // 0x102c JumpB
	return 0; // 0x102d Return
	
Label_4142:
	var_51_bool = var_48_string == var_2_object; // 0x102e Eq
	if(var_51_bool == 0) goto Label_4145; // 0x102f JumpB
	return 0; // 0x1030 Return
	
Label_4145:
	var_52_string = ""; // 0x1031 PushV
	var_52_string = var_48_string; // 0x1032 Mov
	func_4989(var_52_string); // 0x1033 Call
	var_2_object = var_48_string; // 0x1035 TMov
	return 0; // 0x1036 Return
}


func_6185()
{
	var_157_object = Obj(); var_158_object = Obj(); // 0x1829 PushV
	var_159_string = "Adding diary entry"; // 0x182a PushS
	Trace(var_159_string); // 0x182b Func
	var_160_int = 120; // 0x182d PushI
	var_161_int = 1; // 0x182e PushI
	var_162_int = 13743; // 0x182f PushI
	CreateDiaryEntry(var_158_object, var_160_int, var_161_int, var_162_int); // 0x1830 Func
	var_163_bool = 0; var_164_object = Obj(); var_165_int = 0; // 0x1832 PushV
	var_164_object = var_158_object; // 0x1833 Mov
	var_165_int = 111; // 0x1834 MovI
	func_6040(var_163_bool, var_164_object, var_165_int); // 0x1835 Call
	return 2; // 0x1837 Return
}


func_4905(var_48_string, var_49_int)
{
	var_50_int = 0; var_51_int = 0; // 0x1329 PushV
	GetProperty(var_48_string, var_51_int); // 0x132a ObjFunc
	var_52_int = var_51_int + var_49_int; // 0x132c Add
	SetProperty(var_48_string, var_52_int); // 0x132d ObjFunc
	return 2; // 0x132f Return
}


func_5163()
{
	var_107_string = "ood1Julia4"; // 0x142c PushS
	var_108_int = 1; // 0x142d PushI
	SetVariable(var_107_string, var_108_int); // 0x142e Func
	return 0; // 0x1430 Return
}


func_5932(var_264_bool)
{
	var_266_int = 0; var_267_string = ""; // 0x172d PushV
	var_267_string = "d6q01"; // 0x172e MovS
	func_5024(var_266_int, var_267_string); // 0x172f Call
	var_268_int = -1; // 0x1731 PushI
	var_269_bool = var_266_int == var_268_int; // 0x1732 Eq
	if(var_269_bool == 0) goto Label_5942; // 0x1733 JumpB
	var_264_bool = 1; // 0x1734 MovB
	return 0; // 0x1735 Return
	
Label_5942:
	var_264_bool = 0; // 0x1736 MovB
	return 0; // 0x1737 Return
}


func_5677(var_347_bool)
{
	var_349_int = 0; var_350_string = ""; // 0x162e PushV
	var_350_string = "ood1Julia7"; // 0x162f MovS
	func_5024(var_349_int, var_350_string); // 0x1630 Call
	var_351_int = 0; // 0x1632 PushI
	var_352_bool = var_349_int == var_351_int; // 0x1633 Eq
	if(var_352_bool == 0) goto Label_5687; // 0x1634 JumpB
	var_347_bool = 1; // 0x1635 MovB
	return 0; // 0x1636 Return
	
Label_5687:
	var_347_bool = 0; // 0x1637 MovB
	return 0; // 0x1638 Return
}


func_4912(var_31_bool)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; // 0x1330 PushV
	GetPosition(var_37_cvector); // 0x1331 ObjFunc
	GetPosition(var_38_cvector); // 0x1333 Func
	var_39_cvector = var_37_cvector - var_38_cvector; // 0x1335 Sub2
	var_41_float = GetByIndex(var_39_cvector, 0); // 0x1336 PushE
	var_42_float = GetByIndex(var_39_cvector, 2); // 0x1337 PushE
	Rotate(var_41_float, var_42_float, var_40_bool); // 0x1338 Func
	var_31_bool = var_40_bool; // 0x133a Mov
	return 8; // 0x133b Return
}


func_5169()
{
	var_117_string = "ood1Julia5"; // 0x1432 PushS
	var_118_int = 1; // 0x1433 PushI
	SetVariable(var_117_string, var_118_int); // 0x1434 Func
	return 0; // 0x1436 Return
}


func_49(var_0_object, var_34_int, var_35_object)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x31 PushV
	var_0_object = var_35_object; // 0x32 TMov
	var_45_bool = 0; var_46_object = Obj(); // 0x33 PushV
	var_46_object = var_35_object; // 0x34 Mov
	func_4929(var_46_object); // 0x35 Call
	var_85_bool = var_45_bool == 0; // 0x37 Not
	if(var_85_bool == 0) goto Label_59; // 0x38 JumpB
	var_34_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_41_object); // 0x3b Func
	var_86_int = 0; // 0x3d PushV
	func_5104(var_86_int); // 0x3e Call
	SetNPCName(var_86_int); // 0x40 ObjFunc
	var_87_string = ""; // 0x42 PushV
	func_5106(var_87_string); // 0x43 Call
	SetPhoto(var_87_string); // 0x45 ObjFunc
	var_88_int = 0; // 0x47 PushV
	func_6136(var_88_int); // 0x48 Call
	SetPlayerName(var_88_int); // 0x4a ObjFunc
	var_43_int = -1; // 0x4c MovI
	IsOverrideActive(var_42_bool); // 0x4d Func
	var_96_bool = var_42_bool; // 0x4f Push
	if(var_96_bool == 0) goto Label_83; // 0x50 JumpB
	var_34_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_41_object); // 0x53 Func
	var_97_object = Obj(); var_98_object = Obj(); // 0x55 PushV
	var_97_object = var_35_object; // 0x56 Mov
	var_98_object = var_41_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_44_bool); // 0x5c ObjFunc
	
Label_94:
	var_141_bool = var_44_bool == 0; // 0x5e Not
	if(var_141_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_44_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_142_object = Obj(); // 0x65 PushV
	var_142_object = var_35_object; // 0x66 Mov
	func_4985(); // 0x67 Call
	StopDialog(var_41_object); // 0x69 Func
	GetReturnValue(var_43_int); // 0x6b ObjFunc
	var_34_int = var_43_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_5175()
{
	var_123_string = "ood1Julia6"; // 0x1438 PushS
	var_124_int = 1; // 0x1439 PushI
	SetVariable(var_123_string, var_124_int); // 0x143a Func
	return 0; // 0x143c Return
}


func_5944(var_341_bool)
{
	var_343_int = 0; var_344_string = ""; // 0x1739 PushV
	var_344_string = "KnowAnna"; // 0x173a MovS
	func_5024(var_343_int, var_344_string); // 0x173b Call
	var_345_int = 1; // 0x173d PushI
	var_346_bool = var_343_int == var_345_int; // 0x173e Eq
	if(var_346_bool == 0) goto Label_5954; // 0x173f JumpB
	var_341_bool = 1; // 0x1740 MovB
	return 0; // 0x1741 Return
	
Label_5954:
	var_341_bool = 0; // 0x1742 MovB
	return 0; // 0x1743 Return
}


func_6201()
{
	var_30_bool = GlobalVars[1]; // 0x1839 PushGE
	var_30_bool = 0; // 0x183a MovB
	GlobalVars[1] = var_30_bool; // 0x183b PopGE
	return 0; // 0x183c Return
}


func_5689(var_363_bool)
{
	var_365_int = 0; var_366_string = ""; // 0x163a PushV
	var_366_string = "ood1Julia8"; // 0x163b MovS
	func_5024(var_365_int, var_366_string); // 0x163c Call
	var_367_int = 0; // 0x163e PushI
	var_368_bool = var_365_int == var_367_int; // 0x163f Eq
	if(var_368_bool == 0) goto Label_5699; // 0x1640 JumpB
	var_363_bool = 1; // 0x1641 MovB
	return 0; // 0x1642 Return
	
Label_5699:
	var_363_bool = 0; // 0x1643 MovB
	return 0; // 0x1644 Return
}


func_1337(var_0_object, var_1_object, var_2_object, var_3_object, var_170_object, var_171_object)
{
	var_0_object = var_171_object; // 0x53a TMov
	var_1_object = var_170_object; // 0x53b TMov
	var_3_object = 0; // 0x53c TMovB
	var_176_int = 1; // 0x53d PushI
	if(var_176_int == 0) goto Label_1651; // 0x53e JumpB
	var_177_bool = 0; // 0x53f PushV
	var_177_bool = 0; // 0x540 MovB
	var_178_bool = 0; // 0x541 PushV
	var_178_bool = 0; // 0x542 MovB
	var_179_bool = 0; // 0x543 PushV
	var_179_bool = 0; // 0x544 MovB
	var_180_bool = 0; // 0x545 PushV
	var_180_bool = 0; // 0x546 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x547 PushV
	var_182_object = var_1_object; // 0x548 MovT
	func_5533(var_182_object); // 0x549 Call
	if(var_181_bool == 0) goto Label_1363; // 0x54b JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x54c PushV
	var_190_object = var_1_object; // 0x54d MovT
	func_5581(var_190_object); // 0x54e Call
	var_195_bool = var_189_bool == 0; // 0x550 Not
	if(var_195_bool == 0) goto Label_1363; // 0x551 JumpB
	var_180_bool = 1; // 0x552 MovB
	
Label_1363:
	if(var_180_bool == 0) goto Label_1371; // 0x553 JumpB
	var_196_bool = 0; var_197_object = Obj(); // 0x554 PushV
	var_197_object = var_1_object; // 0x555 MovT
	func_5569(var_197_object); // 0x556 Call
	var_202_bool = var_196_bool == 0; // 0x558 Not
	if(var_202_bool == 0) goto Label_1371; // 0x559 JumpB
	var_179_bool = 1; // 0x55a MovB
	
Label_1371:
	if(var_179_bool == 0) goto Label_1378; // 0x55b JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x55c PushV
	var_204_object = var_1_object; // 0x55d MovT
	func_5725(var_204_object); // 0x55e Call
	if(var_203_bool == 0) goto Label_1378; // 0x560 JumpB
	var_178_bool = 1; // 0x561 MovB
	
Label_1378:
	if(var_178_bool == 0) goto Label_1386; // 0x562 JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x563 PushV
	var_210_object = var_1_object; // 0x564 MovT
	func_5737(var_210_object); // 0x565 Call
	var_215_bool = var_209_bool == 0; // 0x567 Not
	if(var_215_bool == 0) goto Label_1386; // 0x568 JumpB
	var_177_bool = 1; // 0x569 MovB
	
Label_1386:
	if(var_177_bool == 0) goto Label_1423; // 0x56a JumpB
	var_216_object = Obj(); var_217_object = Obj(); // 0x56b PushV
	var_216_object = var_1_object; // 0x56c MovT
	var_217_object = var_0_object; // 0x56d MovT
	func_5220(); // 0x56e Call
	var_220_string = ""; // 0x570 PushV
	var_220_string = "Neutral"; // 0x571 MovS
	func_1681(var_171_object, var_220_string); // 0x572 Call
	var_225_int = 5377; // 0x574 PushI
	SetMessage(var_225_int); // 0x575 TObjFunc
	ClearReplies(); // 0x577 TObjFunc
	var_226_bool = 0; var_227_object = Obj(); // 0x579 PushV
	var_227_object = var_1_object; // 0x57a MovT
	func_5749(var_227_object); // 0x57b Call
	var_232_bool = var_226_bool == 0; // 0x57d Not
	if(var_232_bool == 0) goto Label_1412; // 0x57e JumpB
	var_233_int = 5379; // 0x57f PushI
	var_234_int = 5964; // 0x580 PushI
	var_235_int = 5924; // 0x581 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x582 TObjFunc
	
Label_1412:
	var_236_bool = 0; var_237_object = Obj(); // 0x584 PushV
	var_237_object = var_1_object; // 0x585 MovT
	func_5749(var_237_object); // 0x586 Call
	if(var_236_bool == 0) goto Label_1422; // 0x588 JumpB
	var_238_int = 5380; // 0x589 PushI
	var_239_int = 6864; // 0x58a PushI
	var_240_int = 5925; // 0x58b PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x58c TObjFunc
	
Label_1422:
	goto Label_1651; // 0x58e Jump
	
Label_1651:
	var_241_bool = 0; // 0x673 PushV
	func_5108(var_241_bool); // 0x674 Call
	if(var_241_bool == 0) goto Label_1666; // 0x676 JumpB
	
Label_1655:
	lshWaitForAnimEnd(); // 0x677 Func
	var_242_object = var_3_object; // 0x679 PushT
	if(var_242_object == 0) goto Label_1660; // 0x67a JumpB
	goto Label_1665; // 0x67b Jump
	
Label_1665:
	goto Label_1680; // 0x681 Jump
	
Label_1680:
	return 0; // 0x690 Return
	
Label_1660:
	var_243_string = ""; // 0x67c PushV
	var_243_string = var_2_object; // 0x67d MovT
	func_4989(var_243_string); // 0x67e Call
	goto Label_1655; // 0x680 Jump
	
Label_1666:
	var_244_string = "all"; // 0x682 PushS
	var_245_string = "idle"; // 0x683 PushS
	PlayAnimation(var_244_string, var_245_string); // 0x684 Func
	
Label_1670:
	WaitForAnimEnd(); // 0x686 Func
	var_246_object = var_3_object; // 0x688 PushT
	if(var_246_object == 0) goto Label_1675; // 0x689 JumpB
	goto Label_1680; // 0x68a Jump
	
Label_1675:
	var_247_string = "all"; // 0x68b PushS
	var_248_string = "idle"; // 0x68c PushS
	PlayAnimation(var_247_string, var_248_string); // 0x68d Func
	goto Label_1670; // 0x68f Jump
	
Label_1423:
	var_249_bool = 0; // 0x58f PushV
	var_249_bool = 0; // 0x590 MovB
	var_250_bool = 0; // 0x591 PushV
	var_250_bool = 0; // 0x592 MovB
	var_251_bool = 0; // 0x593 PushV
	var_251_bool = 0; // 0x594 MovB
	var_252_bool = 0; var_253_object = Obj(); // 0x595 PushV
	var_253_object = var_1_object; // 0x596 MovT
	func_5725(var_253_object); // 0x597 Call
	var_254_bool = var_252_bool == 0; // 0x599 Not
	if(var_254_bool == 0) goto Label_1441; // 0x59a JumpB
	var_255_bool = 0; var_256_object = Obj(); // 0x59b PushV
	var_256_object = var_1_object; // 0x59c MovT
	func_5737(var_256_object); // 0x59d Call
	if(var_255_bool == 0) goto Label_1441; // 0x59f JumpB
	var_251_bool = 1; // 0x5a0 MovB
	
Label_1441:
	if(var_251_bool == 0) goto Label_1449; // 0x5a1 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x5a2 PushV
	var_258_object = var_1_object; // 0x5a3 MovT
	func_5581(var_258_object); // 0x5a4 Call
	var_259_bool = var_257_bool == 0; // 0x5a6 Not
	if(var_259_bool == 0) goto Label_1449; // 0x5a7 JumpB
	var_250_bool = 1; // 0x5a8 MovB
	
Label_1449:
	if(var_250_bool == 0) goto Label_1457; // 0x5a9 JumpB
	var_260_bool = 0; var_261_object = Obj(); // 0x5aa PushV
	var_261_object = var_1_object; // 0x5ab MovT
	func_5569(var_261_object); // 0x5ac Call
	var_262_bool = var_260_bool == 0; // 0x5ae Not
	if(var_262_bool == 0) goto Label_1457; // 0x5af JumpB
	var_249_bool = 1; // 0x5b0 MovB
	
Label_1457:
	if(var_249_bool == 0) goto Label_1473; // 0x5b1 JumpB
	var_263_string = ""; // 0x5b2 PushV
	var_263_string = "Neutral"; // 0x5b3 MovS
	func_1681(var_171_object, var_263_string); // 0x5b4 Call
	var_264_int = 8650; // 0x5b6 PushI
	SetMessage(var_264_int); // 0x5b7 TObjFunc
	ClearReplies(); // 0x5b9 TObjFunc
	var_265_int = 8651; // 0x5bb PushI
	var_266_int = 9477; // 0x5bc PushI
	var_267_int = 9476; // 0x5bd PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x5be TObjFunc
	goto Label_1651; // 0x5c0 Jump
	
Label_1473:
	var_268_string = ""; // 0x5c1 PushV
	var_268_string = "Neutral"; // 0x5c2 MovS
	func_1681(var_171_object, var_268_string); // 0x5c3 Call
	var_269_int = 7779; // 0x5c5 PushI
	SetMessage(var_269_int); // 0x5c6 TObjFunc
	ClearReplies(); // 0x5c8 TObjFunc
	var_270_bool = 0; // 0x5ca PushV
	var_270_bool = 0; // 0x5cb MovB
	var_271_bool = 0; var_272_object = Obj(); // 0x5cc PushV
	var_272_object = var_1_object; // 0x5cd MovT
	func_5545(var_272_object); // 0x5ce Call
	if(var_271_bool == 0) goto Label_1495; // 0x5d0 JumpB
	var_277_bool = 0; var_278_object = Obj(); // 0x5d1 PushV
	var_278_object = var_1_object; // 0x5d2 MovT
	func_5593(var_278_object); // 0x5d3 Call
	if(var_277_bool == 0) goto Label_1495; // 0x5d5 JumpB
	var_270_bool = 1; // 0x5d6 MovB
	
Label_1495:
	if(var_270_bool == 0) goto Label_1501; // 0x5d7 JumpB
	var_283_int = 7815; // 0x5d8 PushI
	var_284_int = 8618; // 0x5d9 PushI
	var_285_int = 8617; // 0x5da PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x5db TObjFunc
	
Label_1501:
	var_286_bool = 0; // 0x5dd PushV
	var_286_bool = 0; // 0x5de MovB
	var_287_bool = 0; var_288_object = Obj(); // 0x5df PushV
	var_288_object = var_1_object; // 0x5e0 MovT
	func_5992(var_288_object); // 0x5e1 Call
	if(var_287_bool == 0) goto Label_1514; // 0x5e3 JumpB
	var_293_bool = 0; var_294_object = Obj(); // 0x5e4 PushV
	var_294_object = var_1_object; // 0x5e5 MovT
	func_5557(var_294_object); // 0x5e6 Call
	if(var_293_bool == 0) goto Label_1514; // 0x5e8 JumpB
	var_286_bool = 1; // 0x5e9 MovB
	
Label_1514:
	if(var_286_bool == 0) goto Label_1520; // 0x5ea JumpB
	var_299_int = 7783; // 0x5eb PushI
	var_300_int = 8607; // 0x5ec PushI
	var_301_int = 8584; // 0x5ed PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x5ee TObjFunc
	
Label_1520:
	var_302_bool = 0; // 0x5f0 PushV
	var_302_bool = 0; // 0x5f1 MovB
	var_303_bool = 0; // 0x5f2 PushV
	var_303_bool = 0; // 0x5f3 MovB
	var_304_bool = 0; var_305_object = Obj(); // 0x5f4 PushV
	var_305_object = var_1_object; // 0x5f5 MovT
	func_6004(var_305_object); // 0x5f6 Call
	if(var_304_bool == 0) goto Label_1535; // 0x5f8 JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0x5f9 PushV
	var_311_object = var_1_object; // 0x5fa MovT
	func_5761(var_310_bool, var_311_object); // 0x5fb Call
	if(var_310_bool == 0) goto Label_1535; // 0x5fd JumpB
	var_303_bool = 1; // 0x5fe MovB
	
Label_1535:
	if(var_303_bool == 0) goto Label_1542; // 0x5ff JumpB
	var_321_bool = 0; var_322_object = Obj(); // 0x600 PushV
	var_322_object = var_1_object; // 0x601 MovT
	func_5641(var_322_object); // 0x602 Call
	if(var_321_bool == 0) goto Label_1542; // 0x604 JumpB
	var_302_bool = 1; // 0x605 MovB
	
Label_1542:
	if(var_302_bool == 0) goto Label_1548; // 0x606 JumpB
	var_327_int = 7784; // 0x607 PushI
	var_328_int = 8608; // 0x608 PushI
	var_329_int = 8585; // 0x609 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x60a TObjFunc
	
Label_1548:
	var_330_bool = 0; // 0x60c PushV
	var_330_bool = 0; // 0x60d MovB
	var_331_bool = 0; var_332_object = Obj(); // 0x60e PushV
	var_332_object = var_1_object; // 0x60f MovT
	func_5653(var_332_object); // 0x610 Call
	if(var_331_bool == 0) goto Label_1561; // 0x612 JumpB
	var_337_bool = 0; var_338_object = Obj(); // 0x613 PushV
	var_338_object = var_1_object; // 0x614 MovT
	func_5956(var_338_object); // 0x615 Call
	if(var_337_bool == 0) goto Label_1561; // 0x617 JumpB
	var_330_bool = 1; // 0x618 MovB
	
Label_1561:
	if(var_330_bool == 0) goto Label_1567; // 0x619 JumpB
	var_343_int = 7785; // 0x61a PushI
	var_344_int = 8687; // 0x61b PushI
	var_345_int = 8586; // 0x61c PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x61d TObjFunc
	
Label_1567:
	var_346_bool = 0; // 0x61f PushV
	var_346_bool = 0; // 0x620 MovB
	var_347_bool = 0; var_348_object = Obj(); // 0x621 PushV
	var_348_object = var_1_object; // 0x622 MovT
	func_5968(var_348_object); // 0x623 Call
	if(var_347_bool == 0) goto Label_1580; // 0x625 JumpB
	var_353_bool = 0; var_354_object = Obj(); // 0x626 PushV
	var_354_object = var_1_object; // 0x627 MovT
	func_5665(var_354_object); // 0x628 Call
	if(var_353_bool == 0) goto Label_1580; // 0x62a JumpB
	var_346_bool = 1; // 0x62b MovB
	
Label_1580:
	if(var_346_bool == 0) goto Label_1586; // 0x62c JumpB
	var_359_int = 7786; // 0x62d PushI
	var_360_int = 8698; // 0x62e PushI
	var_361_int = 8587; // 0x62f PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x630 TObjFunc
	
Label_1586:
	var_362_bool = 0; // 0x632 PushV
	var_362_bool = 0; // 0x633 MovB
	var_363_bool = 0; var_364_object = Obj(); // 0x634 PushV
	var_364_object = var_1_object; // 0x635 MovT
	func_5944(var_364_object); // 0x636 Call
	if(var_363_bool == 0) goto Label_1599; // 0x638 JumpB
	var_369_bool = 0; var_370_object = Obj(); // 0x639 PushV
	var_370_object = var_1_object; // 0x63a MovT
	func_5677(var_370_object); // 0x63b Call
	if(var_369_bool == 0) goto Label_1599; // 0x63d JumpB
	var_362_bool = 1; // 0x63e MovB
	
Label_1599:
	if(var_362_bool == 0) goto Label_1605; // 0x63f JumpB
	var_375_int = 7788; // 0x640 PushI
	var_376_int = 8710; // 0x641 PushI
	var_377_int = 8589; // 0x642 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x643 TObjFunc
	
Label_1605:
	var_378_bool = 0; // 0x645 PushV
	var_378_bool = 0; // 0x646 MovB
	var_379_bool = 0; var_380_object = Obj(); // 0x647 PushV
	var_380_object = var_1_object; // 0x648 MovT
	func_5843(var_380_object); // 0x649 Call
	if(var_379_bool == 0) goto Label_1618; // 0x64b JumpB
	var_385_bool = 0; var_386_object = Obj(); // 0x64c PushV
	var_386_object = var_1_object; // 0x64d MovT
	func_5689(var_386_object); // 0x64e Call
	if(var_385_bool == 0) goto Label_1618; // 0x650 JumpB
	var_378_bool = 1; // 0x651 MovB
	
Label_1618:
	if(var_378_bool == 0) goto Label_1624; // 0x652 JumpB
	var_391_int = 7797; // 0x653 PushI
	var_392_int = 8613; // 0x654 PushI
	var_393_int = 8598; // 0x655 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x656 TObjFunc
	
Label_1624:
	var_394_bool = 0; // 0x658 PushV
	var_394_bool = 0; // 0x659 MovB
	var_395_bool = 0; var_396_object = Obj(); // 0x65a PushV
	var_396_object = var_1_object; // 0x65b MovT
	func_5713(var_396_object); // 0x65c Call
	if(var_395_bool == 0) goto Label_1637; // 0x65e JumpB
	var_401_bool = 0; var_402_object = Obj(); // 0x65f PushV
	var_402_object = var_1_object; // 0x660 MovT
	func_5701(var_402_object); // 0x661 Call
	if(var_401_bool == 0) goto Label_1637; // 0x663 JumpB
	var_394_bool = 1; // 0x664 MovB
	
Label_1637:
	if(var_394_bool == 0) goto Label_1643; // 0x665 JumpB
	var_407_int = 7914; // 0x666 PushI
	var_408_int = 8734; // 0x667 PushI
	var_409_int = 8733; // 0x668 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x669 TObjFunc
	
Label_1643:
	var_410_int = 8703; // 0x66b PushI
	var_411_int = -1; // 0x66c PushI
	var_412_int = 9540; // 0x66d PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x66e TObjFunc
	goto Label_1651; // 0x670 Jump
}


func_4924(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x133c PushV
	IsLoaded(var_33_bool); // 0x133d Func
	var_31_bool = var_33_bool; // 0x133f Mov
	return 2; // 0x1340 Return
}


func_6205(var_31_object)
{
	var_32_bool = GlobalVars[1]; // 0x183e PushGE
	var_33_bool = var_32_bool == 0; // 0x183f Not
	if(var_33_bool == 0) goto Label_6218; // 0x1840 JumpB
	var_34_int = 0; var_35_object = Obj(); // 0x1841 PushV
	var_35_object = var_31_object; // 0x1842 Mov
	TaskCall(2); // 0x1843 TaskCall
	func_49(var_36_object, var_34_int, var_35_object); // 0x1844 Call
	TaskReturn(); // 0x1845 TaskReturn
	var_143_bool = GlobalVars[1]; // 0x1847 PushGE
	var_143_bool = 1; // 0x1848 MovB
	GlobalVars[1] = var_143_bool; // 0x1849 PopGE
	
Label_6218:
	var_144_bool = 0; var_145_int = 0; // 0x184a PushV
	var_145_int = 1; // 0x184b MovI
	func_5089(var_144_bool, var_145_int); // 0x184c Call
	if(var_144_bool == 0) goto Label_6230; // 0x184e JumpB
	var_152_int = 0; var_153_object = Obj(); // 0x184f PushV
	var_153_object = var_31_object; // 0x1850 Mov
	TaskCall(6); // 0x1851 TaskCall
	func_1274(var_154_object, var_152_int, var_153_object); // 0x1852 Call
	TaskReturn(); // 0x1853 TaskReturn
	return 0; // 0x1855 Return
	
Label_6230:
	var_415_bool = 0; var_416_int = 0; // 0x1856 PushV
	var_416_int = 2; // 0x1857 MovI
	func_5089(var_415_bool, var_416_int); // 0x1858 Call
	if(var_415_bool == 0) goto Label_6242; // 0x185a JumpB
	var_417_int = 0; var_418_object = Obj(); // 0x185b PushV
	var_418_object = var_31_object; // 0x185c Mov
	TaskCall(8); // 0x185d TaskCall
	func_3346(var_419_object, var_417_int, var_418_object); // 0x185e Call
	TaskReturn(); // 0x185f TaskReturn
	return 0; // 0x1861 Return
	
Label_6242:
	var_477_bool = 0; var_478_int = 0; // 0x1862 PushV
	var_478_int = 3; // 0x1863 MovI
	func_5089(var_477_bool, var_478_int); // 0x1864 Call
	if(var_477_bool == 0) goto Label_6254; // 0x1866 JumpB
	var_479_int = 0; var_480_object = Obj(); // 0x1867 PushV
	var_480_object = var_31_object; // 0x1868 Mov
	TaskCall(10); // 0x1869 TaskCall
	func_3984(var_481_object, var_479_int, var_480_object); // 0x186a Call
	TaskReturn(); // 0x186b TaskReturn
	return 0; // 0x186d Return
	
Label_6254:
	var_544_bool = 0; var_545_int = 0; // 0x186e PushV
	var_545_int = 4; // 0x186f MovI
	func_5089(var_544_bool, var_545_int); // 0x1870 Call
	if(var_544_bool == 0) goto Label_6266; // 0x1872 JumpB
	var_546_int = 0; var_547_object = Obj(); // 0x1873 PushV
	var_547_object = var_31_object; // 0x1874 Mov
	TaskCall(12); // 0x1875 TaskCall
	func_4315(var_548_object, var_546_int, var_547_object); // 0x1876 Call
	TaskReturn(); // 0x1877 TaskReturn
	return 0; // 0x1879 Return
	
Label_6266:
	var_632_bool = 0; var_633_int = 0; // 0x187a PushV
	var_633_int = 6; // 0x187b MovI
	func_5089(var_632_bool, var_633_int); // 0x187c Call
	if(var_632_bool == 0) goto Label_6278; // 0x187e JumpB
	var_634_int = 0; var_635_object = Obj(); // 0x187f PushV
	var_635_object = var_31_object; // 0x1880 Mov
	TaskCall(4); // 0x1881 TaskCall
	func_353(var_636_object, var_634_int, var_635_object); // 0x1882 Call
	TaskReturn(); // 0x1883 TaskReturn
	return 0; // 0x1885 Return
	
Label_6278:
	var_738_bool = 0; // 0x1886 PushV
	func_5095(var_738_bool); // 0x1887 Call
	return 0; // 0x1889 Return
}


func_5181()
{
	var_133_string = "ood1Julia7"; // 0x143e PushS
	var_134_int = 1; // 0x143f PushI
	SetVariable(var_133_string, var_134_int); // 0x1440 Func
	return 0; // 0x1442 Return
}


func_4929(var_45_bool)
{
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0; // 0x1341 PushV
	GetPosition(var_56_cvector); // 0x1342 ObjFunc
	GetEyesHeight(var_55_float); // 0x1344 ObjFunc
	var_63_float = GetByIndex(var_56_cvector, 1); // 0x1346 PushE
	var_63_float = var_63_float + var_55_float; // 0x1347 Add2
	SetByIndex(var_56_cvector, 1) = var_63_float; // 0x1348 PopE
	GetPosition(var_57_cvector); // 0x1349 Func
	GetEyesHeight(var_55_float); // 0x134b Func
	var_64_float = GetByIndex(var_57_cvector, 1); // 0x134d PushE
	var_64_float = var_64_float + var_55_float; // 0x134e Add2
	SetByIndex(var_57_cvector, 1) = var_64_float; // 0x134f PopE
	var_58_cvector = var_56_cvector - var_57_cvector; // 0x1350 Sub2
	var_65_float = GetByIndex(var_58_cvector, 1); // 0x1351 PushE
	var_65_float = 0; // 0x1352 MovI
	SetByIndex(var_58_cvector, 1) = var_65_float; // 0x1353 PopE
	var_66_int = var_58_cvector | var_58_cvector; // 0x1354 Or
	var_67_float = sqrt(var_66_int); // 0x1355 Sqrt
	var_58_cvector = var_58_cvector / var_58_cvector; // 0x1356 Div2
	var_59_cvector = -var_58_cvector; // 0x1357 Neg2
	var_68_int = 70; // 0x1358 PushI
	var_69_float = var_58_cvector * var_68_int; // 0x1359 Mult
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x135a PushV
	var_72_cvector = CVector(0.0, 1.0, 0.0); // 0x135b PushVec
	var_71_cvector = var_59_cvector ^ var_72_cvector; // 0x135c Xor2
	func_5014(var_70_cvector, var_71_cvector); // 0x135d Call
	var_78_int = 25; // 0x135f PushI
	var_79_float = var_70_cvector * var_78_int; // 0x1360 Mult
	var_80_int = var_69_float + var_79_float; // 0x1361 Add
	var_81_cvector = CVector(0.0, 10.0, 0.0); // 0x1362 PushVec
	var_60_cvector = var_80_int - var_81_cvector; // 0x1363 Sub2
	var_61_cvector = var_57_cvector + var_60_cvector; // 0x1364 Add2
	IsOverrideActive(var_62_bool); // 0x1365 Func
	var_82_bool = var_62_bool; // 0x1367 Push
	if(var_82_bool == 0) goto Label_4971; // 0x1368 JumpB
	var_45_bool = 0; // 0x1369 MovB
	return 16; // 0x136a Return
	
Label_4971:
	StopWorld(); // 0x136b Func
	CameraTransit(var_61_cvector, var_59_cvector); // 0x136d Func
	var_83_float = GetByIndex(var_60_cvector, 0); // 0x136f PushE
	var_84_float = GetByIndex(var_60_cvector, 2); // 0x1370 PushE
	Rotate(var_83_float, var_84_float); // 0x1371 Func
	CameraWaitForPlayFinish(); // 0x1373 Func
	ResumeWorld(); // 0x1375 Func
	var_45_bool = 1; // 0x1377 MovB
	return 16; // 0x1378 Return
}


func_5187()
{
	var_139_string = "ood1Julia8"; // 0x1444 PushS
	var_140_int = 1; // 0x1445 PushI
	SetVariable(var_139_string, var_140_int); // 0x1446 Func
	return 0; // 0x1448 Return
}


func_5956(var_315_bool)
{
	var_317_int = 0; var_318_string = ""; // 0x1745 PushV
	var_318_string = "KnowEva"; // 0x1746 MovS
	func_5024(var_317_int, var_318_string); // 0x1747 Call
	var_319_int = 1; // 0x1749 PushI
	var_320_bool = var_317_int == var_319_int; // 0x174a Eq
	if(var_320_bool == 0) goto Label_5966; // 0x174b JumpB
	var_315_bool = 1; // 0x174c MovB
	return 0; // 0x174d Return
	
Label_5966:
	var_315_bool = 0; // 0x174e MovB
	return 0; // 0x174f Return
}


func_5701(var_379_bool)
{
	var_381_int = 0; var_382_string = ""; // 0x1646 PushV
	var_382_string = "ood1Julia9"; // 0x1647 MovS
	func_5024(var_381_int, var_382_string); // 0x1648 Call
	var_383_int = 0; // 0x164a PushI
	var_384_bool = var_381_int == var_383_int; // 0x164b Eq
	if(var_384_bool == 0) goto Label_5711; // 0x164c JumpB
	var_379_bool = 1; // 0x164d MovB
	return 0; // 0x164e Return
	
Label_5711:
	var_379_bool = 0; // 0x164f MovB
	return 0; // 0x1650 Return
}


func_5193()
{
	var_149_string = "ood1Julia9"; // 0x144a PushS
	var_150_int = 1; // 0x144b PushI
	SetVariable(var_149_string, var_150_int); // 0x144c Func
	return 0; // 0x144e Return
}


func_5199()
{
	var_52_string = "d1q01KnowEpidemic"; // 0x1450 PushS
	var_53_int = 1; // 0x1451 PushI
	SetVariable(var_52_string, var_53_int); // 0x1452 Func
	func_6153(); // 0x1455 Call
	return 0; // 0x1457 Return
}


func_5968(var_325_bool)
{
	var_327_int = 0; var_328_string = ""; // 0x1751 PushV
	var_328_string = "KnowLara"; // 0x1752 MovS
	func_5024(var_327_int, var_328_string); // 0x1753 Call
	var_329_int = 1; // 0x1755 PushI
	var_330_bool = var_327_int == var_329_int; // 0x1756 Eq
	if(var_330_bool == 0) goto Label_5978; // 0x1757 JumpB
	var_325_bool = 1; // 0x1758 MovB
	return 0; // 0x1759 Return
	
Label_5978:
	var_325_bool = 0; // 0x175a MovB
	return 0; // 0x175b Return
}


func_5713(var_373_bool)
{
	var_375_int = 0; var_376_string = ""; // 0x1652 PushV
	var_376_string = "KnowViktor"; // 0x1653 MovS
	func_5024(var_375_int, var_376_string); // 0x1654 Call
	var_377_int = 1; // 0x1656 PushI
	var_378_bool = var_375_int == var_377_int; // 0x1657 Eq
	if(var_378_bool == 0) goto Label_5723; // 0x1658 JumpB
	var_373_bool = 1; // 0x1659 MovB
	return 0; // 0x165a Return
	
Label_5723:
	var_373_bool = 0; // 0x165b MovB
	return 0; // 0x165c Return
}


func_3409(var_0_object, var_1_object, var_2_object, var_3_object, var_435_object, var_436_object)
{
	var_0_object = var_436_object; // 0xd52 TMov
	var_1_object = var_435_object; // 0xd53 TMov
	var_3_object = 0; // 0xd54 TMovB
	var_441_int = 1; // 0xd55 PushI
	if(var_441_int == 0) goto Label_3496; // 0xd56 JumpB
	var_442_string = ""; // 0xd57 PushV
	var_442_string = "Neutral"; // 0xd58 MovS
	func_3526(var_436_object, var_442_string); // 0xd59 Call
	var_447_int = 6914; // 0xd5b PushI
	SetMessage(var_447_int); // 0xd5c TObjFunc
	ClearReplies(); // 0xd5e TObjFunc
	var_448_bool = 0; // 0xd60 PushV
	var_448_bool = 0; // 0xd61 MovB
	var_449_bool = 0; var_450_object = Obj(); // 0xd62 PushV
	var_450_object = var_1_object; // 0xd63 MovT
	func_5617(var_450_object); // 0xd64 Call
	if(var_449_bool == 0) goto Label_3437; // 0xd66 JumpB
	var_455_bool = 0; var_456_object = Obj(); // 0xd67 PushV
	var_456_object = var_1_object; // 0xd68 MovT
	func_5629(var_456_object); // 0xd69 Call
	if(var_455_bool == 0) goto Label_3437; // 0xd6b JumpB
	var_448_bool = 1; // 0xd6c MovB
	
Label_3437:
	if(var_448_bool == 0) goto Label_3443; // 0xd6d JumpB
	var_461_int = 6915; // 0xd6e PushI
	var_462_int = 7622; // 0xd6f PushI
	var_463_int = 7621; // 0xd70 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0xd71 TObjFunc
	
Label_3443:
	var_464_int = 7747; // 0xd73 PushI
	var_465_int = -1; // 0xd74 PushI
	var_466_int = 8548; // 0xd75 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0xd76 TObjFunc
	goto Label_3496; // 0xd78 Jump
	
Label_3496:
	var_467_bool = 0; // 0xda8 PushV
	func_5108(var_467_bool); // 0xda9 Call
	if(var_467_bool == 0) goto Label_3511; // 0xdab JumpB
	
Label_3500:
	lshWaitForAnimEnd(); // 0xdac Func
	var_468_object = var_3_object; // 0xdae PushT
	if(var_468_object == 0) goto Label_3505; // 0xdaf JumpB
	goto Label_3510; // 0xdb0 Jump
	
Label_3510:
	goto Label_3525; // 0xdb6 Jump
	
Label_3525:
	return 0; // 0xdc5 Return
	
Label_3505:
	var_469_string = ""; // 0xdb1 PushV
	var_469_string = var_2_object; // 0xdb2 MovT
	func_4989(var_469_string); // 0xdb3 Call
	goto Label_3500; // 0xdb5 Jump
	
Label_3511:
	var_470_string = "all"; // 0xdb7 PushS
	var_471_string = "idle"; // 0xdb8 PushS
	PlayAnimation(var_470_string, var_471_string); // 0xdb9 Func
	
Label_3515:
	WaitForAnimEnd(); // 0xdbb Func
	var_472_object = var_3_object; // 0xdbd PushT
	if(var_472_object == 0) goto Label_3520; // 0xdbe JumpB
	goto Label_3525; // 0xdbf Jump
	
Label_3520:
	var_473_string = "all"; // 0xdc0 PushS
	var_474_string = "idle"; // 0xdc1 PushS
	PlayAnimation(var_473_string, var_474_string); // 0xdc2 Func
	goto Label_3515; // 0xdc4 Jump
}


func_5208()
{
	var_48_string = "ood1Julia10"; // 0x1459 PushS
	var_49_int = 1; // 0x145a PushI
	SetVariable(var_48_string, var_49_int); // 0x145b Func
	return 0; // 0x145d Return
}


func_5980(var_36_bool)
{
	var_38_int = 0; var_39_string = ""; // 0x175d PushV
	var_39_string = "ood3Julia1"; // 0x175e MovS
	func_5024(var_38_int, var_39_string); // 0x175f Call
	var_42_int = 0; // 0x1761 PushI
	var_43_bool = var_38_int == var_42_int; // 0x1762 Eq
	if(var_43_bool == 0) goto Label_5990; // 0x1763 JumpB
	var_36_bool = 1; // 0x1764 MovB
	return 0; // 0x1765 Return
	
Label_5990:
	var_36_bool = 0; // 0x1766 MovB
	return 0; // 0x1767 Return
}


func_5725(var_179_bool)
{
	var_181_int = 0; var_182_string = ""; // 0x165e PushV
	var_182_string = "d1q01KnowEpidemic"; // 0x165f MovS
	func_5024(var_181_int, var_182_string); // 0x1660 Call
	var_183_int = 1; // 0x1662 PushI
	var_184_bool = var_181_int == var_183_int; // 0x1663 Eq
	if(var_184_bool == 0) goto Label_5735; // 0x1664 JumpB
	var_179_bool = 1; // 0x1665 MovB
	return 0; // 0x1666 Return
	
Label_5735:
	var_179_bool = 0; // 0x1667 MovB
	return 0; // 0x1668 Return
}


func_5214()
{
	var_38_string = "KnowJulia"; // 0x145f PushS
	var_39_int = 1; // 0x1460 PushI
	SetVariable(var_38_string, var_39_int); // 0x1461 Func
	return 0; // 0x1463 Return
}


func_353(var_0_object, var_634_int, var_635_object)
{
	var_637_object = Obj(); var_638_bool = 0; var_639_int = 0; var_640_bool = 0; var_641_object = Obj(); var_642_bool = 0; var_643_int = 0; var_644_bool = 0; // 0x161 PushV
	var_0_object = var_635_object; // 0x162 TMov
	var_645_bool = 0; var_646_object = Obj(); // 0x163 PushV
	var_646_object = var_635_object; // 0x164 Mov
	func_4929(var_646_object); // 0x165 Call
	var_647_bool = var_645_bool == 0; // 0x167 Not
	if(var_647_bool == 0) goto Label_363; // 0x168 JumpB
	var_634_int = -2; // 0x169 MovI
	return 8; // 0x16a Return
	
Label_363:
	CreateDialog(var_641_object); // 0x16b Func
	var_648_int = 0; // 0x16d PushV
	func_5104(var_648_int); // 0x16e Call
	SetNPCName(var_648_int); // 0x170 ObjFunc
	var_649_string = ""; // 0x172 PushV
	func_5106(var_649_string); // 0x173 Call
	SetPhoto(var_649_string); // 0x175 ObjFunc
	var_650_int = 0; // 0x177 PushV
	func_6136(var_650_int); // 0x178 Call
	SetPlayerName(var_650_int); // 0x17a ObjFunc
	var_643_int = -1; // 0x17c MovI
	IsOverrideActive(var_642_bool); // 0x17d Func
	var_651_bool = var_642_bool; // 0x17f Push
	if(var_651_bool == 0) goto Label_387; // 0x180 JumpB
	var_634_int = -2; // 0x181 MovI
	return 8; // 0x182 Return
	
Label_387:
	DoDialog(var_641_object); // 0x183 Func
	var_652_object = Obj(); var_653_object = Obj(); // 0x185 PushV
	var_652_object = var_635_object; // 0x186 Mov
	var_653_object = var_641_object; // 0x187 Mov
	TaskCall(5); // 0x188 TaskCall
	func_416(var_654_object, var_655_object, var_656_string, var_657_bool, var_652_object, var_653_object); // 0x189 Call
	TaskReturn(); // 0x18a TaskReturn
	IsDialogEnd(var_644_bool); // 0x18c ObjFunc
	
Label_398:
	var_736_bool = var_644_bool == 0; // 0x18e Not
	if(var_736_bool == 0) goto Label_405; // 0x18f JumpB
	sync(); // 0x190 Func
	IsDialogEnd(var_644_bool); // 0x192 ObjFunc
	goto Label_398; // 0x194 Jump
	
Label_405:
	var_737_object = Obj(); // 0x195 PushV
	var_737_object = var_635_object; // 0x196 Mov
	func_4985(); // 0x197 Call
	StopDialog(var_641_object); // 0x199 Func
	GetReturnValue(var_643_int); // 0x19b ObjFunc
	var_634_int = var_643_int; // 0x19d Mov
	return 8; // 0x19e Return
}


func_5220()
{
	var_194_string = "KnowRubin"; // 0x1465 PushS
	var_195_int = 1; // 0x1466 PushI
	SetVariable(var_194_string, var_195_int); // 0x1467 Func
	return 0; // 0x1469 Return
}


func_5992(var_265_bool)
{
	var_267_int = 0; var_268_string = ""; // 0x1769 PushV
	var_268_string = "KnowMyth"; // 0x176a MovS
	func_5024(var_267_int, var_268_string); // 0x176b Call
	var_269_int = 1; // 0x176d PushI
	var_270_bool = var_267_int == var_269_int; // 0x176e Eq
	if(var_270_bool == 0) goto Label_6002; // 0x176f JumpB
	var_265_bool = 1; // 0x1770 MovB
	return 0; // 0x1771 Return
	
Label_6002:
	var_265_bool = 0; // 0x1772 MovB
	return 0; // 0x1773 Return
}


func_5737(var_185_bool)
{
	var_187_int = 0; var_188_string = ""; // 0x166a PushV
	var_188_string = "ood1Julia10"; // 0x166b MovS
	func_5024(var_187_int, var_188_string); // 0x166c Call
	var_189_int = 0; // 0x166e PushI
	var_190_bool = var_187_int == var_189_int; // 0x166f Eq
	if(var_190_bool == 0) goto Label_5747; // 0x1670 JumpB
	var_185_bool = 1; // 0x1671 MovB
	return 0; // 0x1672 Return
	
Label_5747:
	var_185_bool = 0; // 0x1673 MovB
	return 0; // 0x1674 Return
}


func_5226()
{
	var_38_string = "ood4Julia1"; // 0x146b PushS
	var_39_int = 1; // 0x146c PushI
	SetVariable(var_38_string, var_39_int); // 0x146d Func
	return 0; // 0x146f Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_97_object, var_98_object)
{
	var_0_object = var_98_object; // 0x71 TMov
	var_1_object = var_97_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_103_int = 1; // 0x74 PushI
	if(var_103_int == 0) goto Label_150; // 0x75 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x76 PushV
	var_104_object = var_1_object; // 0x77 MovT
	var_105_object = var_0_object; // 0x78 MovT
	func_5214(); // 0x79 Call
	var_108_string = ""; // 0x7b PushV
	var_108_string = "Neutral"; // 0x7c MovS
	func_180(var_98_object, var_108_string); // 0x7d Call
	var_123_int = 325; // 0x7f PushI
	SetMessage(var_123_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_124_int = 326; // 0x84 PushI
	var_125_int = 383; // 0x85 PushI
	var_126_int = 380; // 0x86 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x87 TObjFunc
	var_127_int = 327; // 0x89 PushI
	var_128_int = 383; // 0x8a PushI
	var_129_int = 381; // 0x8b PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x8c TObjFunc
	var_130_int = 328; // 0x8e PushI
	var_131_int = 393; // 0x8f PushI
	var_132_int = 382; // 0x90 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
	
Label_150:
	var_133_bool = 0; // 0x96 PushV
	func_5108(var_133_bool); // 0x97 Call
	if(var_133_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_134_object = var_3_object; // 0x9c PushT
	if(var_134_object == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_135_string = ""; // 0x9f PushV
	var_135_string = var_2_object; // 0xa0 MovT
	func_4989(var_135_string); // 0xa1 Call
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_136_string = "all"; // 0xa5 PushS
	var_137_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_136_string, var_137_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_138_object = var_3_object; // 0xab PushT
	if(var_138_object == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_139_string = "all"; // 0xae PushS
	var_140_string = "idle"; // 0xaf PushS
	PlayAnimation(var_139_string, var_140_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
}


func_5232()
{
	var_42_string = "d4q02JuliaGivesMedcine"; // 0x1471 PushS
	var_43_int = 1; // 0x1472 PushI
	SetVariable(var_42_string, var_43_int); // 0x1473 Func
	return 0; // 0x1475 Return
}


func_5492()
{
	return 0; // 0x1575 Return
}


func_5749(var_212_bool)
{
	var_214_int = 0; var_215_string = ""; // 0x1676 PushV
	var_215_string = "KnowRubin"; // 0x1677 MovS
	func_5024(var_214_int, var_215_string); // 0x1678 Call
	var_216_int = 1; // 0x167a PushI
	var_217_bool = var_214_int == var_216_int; // 0x167b Eq
	if(var_217_bool == 0) goto Label_5759; // 0x167c JumpB
	var_212_bool = 1; // 0x167d MovB
	return 0; // 0x167e Return
	
Label_5759:
	var_212_bool = 0; // 0x167f MovB
	return 0; // 0x1680 Return
}


func_5238()
{
	var_46_object = Obj(); var_47_object = Obj(); // 0x1476 PushV
	var_48_bool = 0; // 0x1477 PushV
	var_48_bool = 0; // 0x1478 MovB
	var_49_bool = 0; // 0x1479 PushV
	var_49_bool = 0; // 0x147a MovB
	var_50_int = 0; var_51_string = ""; // 0x147b PushV
	var_51_string = "d4q02AnnaGivesMedcine"; // 0x147c MovS
	func_5024(var_50_int, var_51_string); // 0x147d Call
	var_54_int = 1; // 0x147f PushI
	var_55_bool = var_50_int == var_54_int; // 0x1480 Eq
	if(var_55_bool == 0) goto Label_5258; // 0x1481 JumpB
	var_56_int = 0; var_57_string = ""; // 0x1482 PushV
	var_57_string = "d4q02JuliaGivesMedcine"; // 0x1483 MovS
	func_5024(var_56_int, var_57_string); // 0x1484 Call
	var_58_int = 1; // 0x1486 PushI
	var_59_bool = var_56_int == var_58_int; // 0x1487 Eq
	if(var_59_bool == 0) goto Label_5258; // 0x1488 JumpB
	var_49_bool = 1; // 0x1489 MovB
	
Label_5258:
	if(var_49_bool == 0) goto Label_5267; // 0x148a JumpB
	var_60_int = 0; var_61_string = ""; // 0x148b PushV
	var_61_string = "d4q02LaraGivesMedcine"; // 0x148c MovS
	func_5024(var_60_int, var_61_string); // 0x148d Call
	var_62_int = 1; // 0x148f PushI
	var_63_bool = var_60_int == var_62_int; // 0x1490 Eq
	if(var_63_bool == 0) goto Label_5267; // 0x1491 JumpB
	var_48_bool = 1; // 0x1492 MovB
	
Label_5267:
	if(var_48_bool == 0) goto Label_5305; // 0x1493 JumpB
	var_64_string = "d4q02"; // 0x1494 PushS
	var_65_int = 2; // 0x1495 PushI
	SetVariable(var_64_string, var_65_int); // 0x1496 Func
	var_66_object = Obj(); // 0x1498 PushV
	func_6086(var_66_object); // 0x1499 Call
	var_47_object = var_66_object; // 0x149a Mov
	var_73_string = "d4q02BirdmaskNearHome"; // 0x149c PushS
	var_74_string = "pt_d4q02_birdmask"; // 0x149d PushS
	var_75_int = 0; // 0x149e PushI
	var_76_int = 11842; // 0x149f PushI
	var_77_float = 0; // 0x14a0 PushV
	func_5067(var_77_float); // 0x14a1 Call
	AddMark(var_73_string, var_74_string, var_75_int, var_76_int, var_77_float); // 0x14a3 ObjFunc
	var_80_bool = 0; var_81_string = ""; var_82_string = ""; // 0x14a5 PushV
	var_81_string = "quest_d4_02"; // 0x14a6 MovS
	var_82_string = "birdmask"; // 0x14a7 MovS
	func_5055(var_80_bool, var_81_string, var_82_string); // 0x14a8 Call
	var_86_object = Obj(); var_87_string = ""; var_88_float = 0; // 0x14aa PushV
	var_89_object = Obj(); // 0x14ab PushV
	func_6086(var_89_object); // 0x14ac Call
	var_86_object = var_89_object; // 0x14ad Mov
	var_87_string = "pt_d4q02_birdmask"; // 0x14af MovS
	var_88_float = 2; // 0x14b0 MovI
	func_6103(var_86_object, var_87_string, var_88_float); // 0x14b1 Call
	var_109_object = Obj(); // 0x14b3 PushV
	func_6086(var_109_object); // 0x14b4 Call
	ShowMap(var_109_object); // 0x14b6 ObjFunc
	var_47_object = 0; // 0x14b8 SetNull
	
Label_5305:
	return 2; // 0x14b9 Return
}


func_6004(var_282_bool)
{
	var_284_int = 0; var_285_string = ""; // 0x1775 PushV
	var_285_string = "KnowPredictions"; // 0x1776 MovS
	func_5024(var_284_int, var_285_string); // 0x1777 Call
	var_286_int = 1; // 0x1779 PushI
	var_287_bool = var_284_int == var_286_int; // 0x177a Eq
	if(var_287_bool == 0) goto Label_6014; // 0x177b JumpB
	var_282_bool = 1; // 0x177c MovB
	return 0; // 0x177d Return
	
Label_6014:
	var_282_bool = 0; // 0x177e MovB
	return 0; // 0x177f Return
}


func_5494(var_110_object)
{
	var_112_string = "feromicin is given"; // 0x1577 PushS
	Trace(var_112_string); // 0x1578 Func
	var_113_object = Obj(); var_114_string = ""; var_115_int = 0; // 0x157a PushV
	var_113_object = var_110_object; // 0x157b Mov
	var_114_string = "feromicin"; // 0x157c MovS
	var_115_int = 1; // 0x157d MovI
	func_5042(var_113_object, var_114_string, var_115_int); // 0x157e Call
	return 0; // 0x1580 Return
}


func_4985()
{
	CameraSwitchToNormal(); // 0x137a Func
	return 0; // 0x137c Return
}


func_4989(var_35_string)
{
	var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; // 0x137d PushV
	var_40_string = "playing "; // 0x137e PushS
	var_41_int = var_40_string + var_35_string; // 0x137f Add
	Trace(var_41_int); // 0x1380 Func
	lshGetAnimTimes(var_35_string, var_38_float, var_39_float); // 0x1382 Func
	lshPlayAnimation(var_38_float, var_39_float); // 0x1384 Func
	var_42_string = "start: "; // 0x1386 PushS
	var_43_int = var_42_string + var_38_float; // 0x1387 Add
	Trace(var_43_int); // 0x1388 Func
	var_44_string = "end: "; // 0x138a PushS
	var_45_int = var_44_string + var_39_float; // 0x138b Add
	Trace(var_45_int); // 0x138c Func
	return 4; // 0x138e Return
}


func_4480(var_2_object, var_171_string)
{
	var_172_bool = 0; // 0x1181 PushV
	func_5108(var_172_bool); // 0x1182 Call
	var_173_bool = var_172_bool == 0; // 0x1184 Not
	if(var_173_bool == 0) goto Label_4487; // 0x1185 JumpB
	return 0; // 0x1186 Return
	
Label_4487:
	var_174_bool = var_171_string == var_2_object; // 0x1187 Eq
	if(var_174_bool == 0) goto Label_4490; // 0x1188 JumpB
	return 0; // 0x1189 Return
	
Label_4490:
	var_175_string = ""; // 0x118a PushV
	var_175_string = var_171_string; // 0x118b Mov
	func_4989(var_175_string); // 0x118c Call
	var_2_object = var_171_string; // 0x118e TMov
	return 0; // 0x118f Return
}


func_5761(var_288_bool, var_289_object)
{
	var_290_bool = 0; var_291_object = Obj(); // 0x1682 PushV
	var_291_object = var_289_object; // 0x1683 Mov
	func_6016(var_291_object); // 0x1684 Call
	if(var_290_bool == 0) goto Label_5769; // 0x1686 JumpB
	var_288_bool = 1; // 0x1687 MovB
	return 0; // 0x1688 Return
	
Label_5769:
	var_288_bool = 0; // 0x1689 MovB
	return 0; // 0x168a Return
}


func_5505()
{
	var_46_string = "ood3Julia1"; // 0x1582 PushS
	var_47_int = 1; // 0x1583 PushI
	SetVariable(var_46_string, var_47_int); // 0x1584 Func
	return 0; // 0x1586 Return
}


func_6016(var_290_bool)
{
	var_292_int = 0; // 0x1781 PushV
	func_5081(var_292_int); // 0x1782 Call
	var_297_int = 18; // 0x1784 PushI
	var_298_bool = var_292_int >= var_297_int; // 0x1785 GE
	if(var_298_bool == 0) goto Label_6025; // 0x1786 JumpB
	var_290_bool = 1; // 0x1787 MovB
	return 0; // 0x1788 Return
	
Label_6025:
	var_290_bool = 0; // 0x1789 MovB
	return 0; // 0x178a Return
}


func_5511(var_129_object)
{
	var_131_string = "neomicin is given"; // 0x1588 PushS
	Trace(var_131_string); // 0x1589 Func
	var_132_object = Obj(); var_133_string = ""; var_134_int = 0; // 0x158b PushV
	var_132_object = var_129_object; // 0x158c Mov
	var_133_string = "neomicin"; // 0x158d MovS
	var_134_int = 1; // 0x158e MovI
	func_5042(var_132_object, var_133_string, var_134_int); // 0x158f Call
	return 0; // 0x1591 Return
}


func_5771(var_197_bool)
{
	var_199_int = 0; var_200_string = ""; // 0x168c PushV
	var_200_string = "d4q01"; // 0x168d MovS
	func_5024(var_199_int, var_200_string); // 0x168e Call
	var_201_int = 1; // 0x1690 PushI
	var_202_bool = var_199_int == var_201_int; // 0x1691 Eq
	if(var_202_bool == 0) goto Label_5781; // 0x1692 JumpB
	var_197_bool = 1; // 0x1693 MovB
	return 0; // 0x1694 Return
	
Label_5781:
	var_197_bool = 0; // 0x1695 MovB
	return 0; // 0x1696 Return
}


func_6027(var_69_object)
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x178b PushV
	GetDiaryRoot(var_71_object); // 0x178c Func
	var_72_bool = var_71_object == 0; // 0x178e Not
	if(var_72_bool == 0) goto Label_6037; // 0x178f JumpB
	var_73_string = "Can't retrieve diary root"; // 0x1790 PushS
	Trace(var_73_string); // 0x1791 Func
	var_69_object = 0; // 0x1793 MovB
	return 2; // 0x1794 Return
	
Label_6037:
	var_69_object = var_71_object; // 0x1795 Mov
	return 2; // 0x1796 Return
}


func_5007()
{
	var_33_bool = 0; // 0x138f PushV
	func_5108(var_33_bool); // 0x1390 Call
	if(var_33_bool == 0) goto Label_5013; // 0x1392 JumpB
	lshStopSpeech(); // 0x1393 Func
	
Label_5013:
	return 0; // 0x1395 Return
}


func_3984(var_0_object, var_479_int, var_480_object)
{
	var_482_object = Obj(); var_483_bool = 0; var_484_int = 0; var_485_bool = 0; var_486_object = Obj(); var_487_bool = 0; var_488_int = 0; var_489_bool = 0; // 0xf90 PushV
	var_0_object = var_480_object; // 0xf91 TMov
	var_490_bool = 0; var_491_object = Obj(); // 0xf92 PushV
	var_491_object = var_480_object; // 0xf93 Mov
	func_4929(var_491_object); // 0xf94 Call
	var_492_bool = var_490_bool == 0; // 0xf96 Not
	if(var_492_bool == 0) goto Label_3994; // 0xf97 JumpB
	var_479_int = -2; // 0xf98 MovI
	return 8; // 0xf99 Return
	
Label_3994:
	CreateDialog(var_486_object); // 0xf9a Func
	var_493_int = 0; // 0xf9c PushV
	func_5104(var_493_int); // 0xf9d Call
	SetNPCName(var_493_int); // 0xf9f ObjFunc
	var_494_string = ""; // 0xfa1 PushV
	func_5106(var_494_string); // 0xfa2 Call
	SetPhoto(var_494_string); // 0xfa4 ObjFunc
	var_495_int = 0; // 0xfa6 PushV
	func_6136(var_495_int); // 0xfa7 Call
	SetPlayerName(var_495_int); // 0xfa9 ObjFunc
	var_488_int = -1; // 0xfab MovI
	IsOverrideActive(var_487_bool); // 0xfac Func
	var_496_bool = var_487_bool; // 0xfae Push
	if(var_496_bool == 0) goto Label_4018; // 0xfaf JumpB
	var_479_int = -2; // 0xfb0 MovI
	return 8; // 0xfb1 Return
	
Label_4018:
	DoDialog(var_486_object); // 0xfb2 Func
	var_497_object = Obj(); var_498_object = Obj(); // 0xfb4 PushV
	var_497_object = var_480_object; // 0xfb5 Mov
	var_498_object = var_486_object; // 0xfb6 Mov
	TaskCall(11); // 0xfb7 TaskCall
	func_4047(var_499_object, var_500_object, var_501_string, var_502_bool, var_497_object, var_498_object); // 0xfb8 Call
	TaskReturn(); // 0xfb9 TaskReturn
	IsDialogEnd(var_489_bool); // 0xfbb ObjFunc
	
Label_4029:
	var_542_bool = var_489_bool == 0; // 0xfbd Not
	if(var_542_bool == 0) goto Label_4036; // 0xfbe JumpB
	sync(); // 0xfbf Func
	IsDialogEnd(var_489_bool); // 0xfc1 ObjFunc
	goto Label_4029; // 0xfc3 Jump
	
Label_4036:
	var_543_object = Obj(); // 0xfc4 PushV
	var_543_object = var_480_object; // 0xfc5 Mov
	func_4985(); // 0xfc6 Call
	StopDialog(var_486_object); // 0xfc8 Func
	GetReturnValue(var_488_int); // 0xfca ObjFunc
	var_479_int = var_488_int; // 0xfcc Mov
	return 8; // 0xfcd Return
}


func_1681(var_2_object, var_196_string)
{
	var_197_bool = 0; // 0x692 PushV
	func_5108(var_197_bool); // 0x693 Call
	var_198_bool = var_197_bool == 0; // 0x695 Not
	if(var_198_bool == 0) goto Label_1688; // 0x696 JumpB
	return 0; // 0x697 Return
	
Label_1688:
	var_199_bool = var_196_string == var_2_object; // 0x698 Eq
	if(var_199_bool == 0) goto Label_1691; // 0x699 JumpB
	return 0; // 0x69a Return
	
Label_1691:
	var_200_string = ""; // 0x69b PushV
	var_200_string = var_196_string; // 0x69c Mov
	func_4989(var_200_string); // 0x69d Call
	var_2_object = var_196_string; // 0x69f TMov
	return 0; // 0x6a0 Return
}


func_5522(var_135_object)
{
	var_137_string = "monomicin is given"; // 0x1593 PushS
	Trace(var_137_string); // 0x1594 Func
	var_138_object = Obj(); var_139_string = ""; var_140_int = 0; // 0x1596 PushV
	var_138_object = var_135_object; // 0x1597 Mov
	var_139_string = "monomicin"; // 0x1598 MovS
	var_140_int = 1; // 0x1599 MovI
	func_5042(var_138_object, var_139_string, var_140_int); // 0x159a Call
	return 0; // 0x159c Return
}


func_5014(var_70_cvector, var_71_cvector)
{
	var_73_float = 0; var_74_float = 0; // 0x1396 PushV
	var_75_int = var_71_cvector | var_71_cvector; // 0x1397 Or
	var_74_float = sqrt(var_75_int); // 0x1398 Sqrt2
	var_76_float = 0.0; // 0x1399 PushF
	var_77_bool = var_74_float < var_76_float; // 0x139a LT
	if(var_77_bool == 0) goto Label_5022; // 0x139b JumpB
	var_70_cvector = CVector(0.0, 0.0, 0.0); // 0x139c MovV
	return 2; // 0x139d Return
	
Label_5022:
	var_70_cvector = var_71_cvector / var_71_cvector; // 0x139e Div2
	return 2; // 0x139f Return
}


func_5783(var_187_bool)
{
	var_189_int = 0; var_190_string = ""; // 0x1698 PushV
	var_190_string = "ood4Julia1"; // 0x1699 MovS
	func_5024(var_189_int, var_190_string); // 0x169a Call
	var_191_int = 0; // 0x169c PushI
	var_192_bool = var_189_int == var_191_int; // 0x169d Eq
	if(var_192_bool == 0) goto Label_5793; // 0x169e JumpB
	var_187_bool = 1; // 0x169f MovB
	return 0; // 0x16a0 Return
	
Label_5793:
	var_187_bool = 0; // 0x16a1 MovB
	return 0; // 0x16a2 Return
}


func_6040(var_60_bool, var_61_object, var_62_int)
{
	var_63_object = Obj(); var_64_object = Obj(); var_65_int = 0; var_66_object = Obj(); var_67_object = Obj(); var_68_int = 0; // 0x1798 PushV
	var_69_object = Obj(); // 0x1799 PushV
	func_6027(var_69_object); // 0x179a Call
	var_66_object = var_69_object; // 0x179b Mov
	Find(var_62_int, var_67_object); // 0x179d ObjFunc
	var_74_bool = var_67_object == 0; // 0x179f Not
	if(var_74_bool == 0) goto Label_6055; // 0x17a0 JumpB
	var_75_string = "Can't find diary parent with id: "; // 0x17a1 PushS
	var_76_int = var_75_string + var_62_int; // 0x17a2 Add
	Trace(var_76_int); // 0x17a3 Func
	var_60_bool = 0; // 0x17a5 MovB
	return 6; // 0x17a6 Return
	
Label_6055:
	AddChild(var_61_object); // 0x17a7 ObjFunc
	var_77_string = "player_diary"; // 0x17a9 PushS
	var_78_int = 1; // 0x17aa PushI
	SetVariable(var_77_string, var_78_int); // 0x17ab Func
	GetCategory(var_68_int); // 0x17ad ObjFunc
	SetDiarySection(var_68_int); // 0x17af Func
	var_60_bool = 0; // 0x17b1 MovB
	return 6; // 0x17b2 Return
}


func_5533(var_157_bool)
{
	var_159_int = 0; var_160_string = ""; // 0x159e PushV
	var_160_string = "ood1Julia1"; // 0x159f MovS
	func_5024(var_159_int, var_160_string); // 0x15a0 Call
	var_163_int = 0; // 0x15a2 PushI
	var_164_bool = var_159_int == var_163_int; // 0x15a3 Eq
	if(var_164_bool == 0) goto Label_5543; // 0x15a4 JumpB
	var_157_bool = 1; // 0x15a5 MovB
	return 0; // 0x15a6 Return
	
Label_5543:
	var_157_bool = 0; // 0x15a7 MovB
	return 0; // 0x15a8 Return
}


func_416(var_0_object, var_1_object, var_2_object, var_3_object, var_652_object, var_653_object)
{
	var_0_object = var_653_object; // 0x1a1 TMov
	var_1_object = var_652_object; // 0x1a2 TMov
	var_3_object = 0; // 0x1a3 TMovB
	var_658_int = 1; // 0x1a4 PushI
	if(var_658_int == 0) goto Label_516; // 0x1a5 JumpB
	var_659_string = ""; // 0x1a6 PushV
	var_659_string = "Neutral"; // 0x1a7 MovS
	func_546(var_653_object, var_659_string); // 0x1a8 Call
	var_664_int = 3640; // 0x1aa PushI
	SetMessage(var_664_int); // 0x1ab TObjFunc
	ClearReplies(); // 0x1ad TObjFunc
	var_665_bool = 0; // 0x1af PushV
	var_665_bool = 0; // 0x1b0 MovB
	var_666_bool = 0; var_667_object = Obj(); // 0x1b1 PushV
	var_667_object = var_1_object; // 0x1b2 MovT
	func_5867(var_667_object); // 0x1b3 Call
	if(var_666_bool == 0) goto Label_444; // 0x1b5 JumpB
	var_672_bool = 0; var_673_object = Obj(); // 0x1b6 PushV
	var_673_object = var_1_object; // 0x1b7 MovT
	func_5879(var_673_object); // 0x1b8 Call
	if(var_672_bool == 0) goto Label_444; // 0x1ba JumpB
	var_665_bool = 1; // 0x1bb MovB
	
Label_444:
	if(var_665_bool == 0) goto Label_450; // 0x1bc JumpB
	var_678_int = 3641; // 0x1bd PushI
	var_679_int = 3945; // 0x1be PushI
	var_680_int = 3943; // 0x1bf PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0x1c0 TObjFunc
	
Label_450:
	var_681_bool = 0; // 0x1c2 PushV
	var_681_bool = 0; // 0x1c3 MovB
	var_682_bool = 0; var_683_object = Obj(); // 0x1c4 PushV
	var_683_object = var_1_object; // 0x1c5 MovT
	func_5855(var_683_object); // 0x1c6 Call
	if(var_682_bool == 0) goto Label_463; // 0x1c8 JumpB
	var_688_bool = 0; var_689_object = Obj(); // 0x1c9 PushV
	var_689_object = var_1_object; // 0x1ca MovT
	func_5891(var_689_object); // 0x1cb Call
	if(var_688_bool == 0) goto Label_463; // 0x1cd JumpB
	var_681_bool = 1; // 0x1ce MovB
	
Label_463:
	if(var_681_bool == 0) goto Label_469; // 0x1cf JumpB
	var_694_int = 12733; // 0x1d0 PushI
	var_695_int = 11803; // 0x1d1 PushI
	var_696_int = 13927; // 0x1d2 PushI
	AddReply(var_694_int, var_695_int, var_696_int); // 0x1d3 TObjFunc
	
Label_469:
	var_697_bool = 0; // 0x1d5 PushV
	var_697_bool = 0; // 0x1d6 MovB
	var_698_bool = 0; // 0x1d7 PushV
	var_698_bool = 0; // 0x1d8 MovB
	var_699_bool = 0; // 0x1d9 PushV
	var_699_bool = 0; // 0x1da MovB
	var_700_bool = 0; var_701_object = Obj(); // 0x1db PushV
	var_701_object = var_1_object; // 0x1dc MovT
	func_5903(var_701_object); // 0x1dd Call
	if(var_700_bool == 0) goto Label_486; // 0x1df JumpB
	var_706_bool = 0; var_707_object = Obj(); // 0x1e0 PushV
	var_707_object = var_1_object; // 0x1e1 MovT
	func_5915(var_707_object); // 0x1e2 Call
	if(var_706_bool == 0) goto Label_486; // 0x1e4 JumpB
	var_699_bool = 1; // 0x1e5 MovB
	
Label_486:
	if(var_699_bool == 0) goto Label_494; // 0x1e6 JumpB
	var_708_bool = 0; var_709_object = Obj(); // 0x1e7 PushV
	var_709_object = var_1_object; // 0x1e8 MovT
	func_5920(var_709_object); // 0x1e9 Call
	var_714_bool = var_708_bool == 0; // 0x1eb Not
	if(var_714_bool == 0) goto Label_494; // 0x1ec JumpB
	var_698_bool = 1; // 0x1ed MovB
	
Label_494:
	if(var_698_bool == 0) goto Label_502; // 0x1ee JumpB
	var_715_bool = 0; var_716_object = Obj(); // 0x1ef PushV
	var_716_object = var_1_object; // 0x1f0 MovT
	func_5932(var_716_object); // 0x1f1 Call
	var_721_bool = var_715_bool == 0; // 0x1f3 Not
	if(var_721_bool == 0) goto Label_502; // 0x1f4 JumpB
	var_697_bool = 1; // 0x1f5 MovB
	
Label_502:
	if(var_697_bool == 0) goto Label_508; // 0x1f6 JumpB
	var_722_int = 12734; // 0x1f7 PushI
	var_723_int = 11840; // 0x1f8 PushI
	var_724_int = 13928; // 0x1f9 PushI
	AddReply(var_722_int, var_723_int, var_724_int); // 0x1fa TObjFunc
	
Label_508:
	var_725_int = 3642; // 0x1fc PushI
	var_726_int = -1; // 0x1fd PushI
	var_727_int = 3944; // 0x1fe PushI
	AddReply(var_725_int, var_726_int, var_727_int); // 0x1ff TObjFunc
	goto Label_516; // 0x201 Jump
	
Label_516:
	var_728_bool = 0; // 0x204 PushV
	func_5108(var_728_bool); // 0x205 Call
	if(var_728_bool == 0) goto Label_531; // 0x207 JumpB
	
Label_520:
	lshWaitForAnimEnd(); // 0x208 Func
	var_729_object = var_3_object; // 0x20a PushT
	if(var_729_object == 0) goto Label_525; // 0x20b JumpB
	goto Label_530; // 0x20c Jump
	
Label_530:
	goto Label_545; // 0x212 Jump
	
Label_545:
	return 0; // 0x221 Return
	
Label_525:
	var_730_string = ""; // 0x20d PushV
	var_730_string = var_2_object; // 0x20e MovT
	func_4989(var_730_string); // 0x20f Call
	goto Label_520; // 0x211 Jump
	
Label_531:
	var_731_string = "all"; // 0x213 PushS
	var_732_string = "idle"; // 0x214 PushS
	PlayAnimation(var_731_string, var_732_string); // 0x215 Func
	
Label_535:
	WaitForAnimEnd(); // 0x217 Func
	var_733_object = var_3_object; // 0x219 PushT
	if(var_733_object == 0) goto Label_540; // 0x21a JumpB
	goto Label_545; // 0x21b Jump
	
Label_540:
	var_734_string = "all"; // 0x21c PushS
	var_735_string = "idle"; // 0x21d PushS
	PlayAnimation(var_734_string, var_735_string); // 0x21e Func
	goto Label_535; // 0x220 Jump
}


func_5024(var_50_int, var_51_string)
{
	var_52_int = 0; var_53_int = 0; // 0x13a0 PushV
	GetVariable(var_51_string, var_53_int); // 0x13a1 Func
	var_50_int = var_53_int; // 0x13a3 Mov
	return 2; // 0x13a4 Return
}


func_5795(var_203_bool)
{
	var_205_int = 0; var_206_string = ""; // 0x16a4 PushV
	var_206_string = "d4q02JuliaGivesMedcine"; // 0x16a5 MovS
	func_5024(var_205_int, var_206_string); // 0x16a6 Call
	var_207_int = 1; // 0x16a8 PushI
	var_208_bool = var_205_int == var_207_int; // 0x16a9 Eq
	if(var_208_bool == 0) goto Label_5805; // 0x16aa JumpB
	var_203_bool = 1; // 0x16ab MovB
	return 0; // 0x16ac Return
	
Label_5805:
	var_203_bool = 0; // 0x16ad MovB
	return 0; // 0x16ae Return
}


func_5029(var_119_object, var_120_int)
{
	var_121_int = 0; var_122_int = 0; var_123_bool = 0; var_124_int = 0; var_125_int = 0; var_126_bool = 0; // 0x13a5 PushV
	GetItemID(var_124_int); // 0x13a6 ObjFunc
	var_127_string = "Category"; // 0x13a8 PushS
	GetInvItemProperty(var_125_int, var_124_int, var_127_string); // 0x13a9 Func
	AddItem(var_126_bool, var_119_object, var_125_int, var_120_int); // 0x13ab ObjFunc
	var_128_bool = var_126_bool == 0; // 0x13ad Not
	if(var_128_bool == 0) goto Label_5041; // 0x13ae JumpB
	DropItems(var_119_object, var_120_int); // 0x13af ObjFunc
	
Label_5041:
	return 6; // 0x13b1 Return
}


func_5545(var_249_bool)
{
	var_251_int = 0; var_252_string = ""; // 0x15aa PushV
	var_252_string = "ood1Julia2"; // 0x15ab MovS
	func_5024(var_251_int, var_252_string); // 0x15ac Call
	var_253_int = 0; // 0x15ae PushI
	var_254_bool = var_251_int == var_253_int; // 0x15af Eq
	if(var_254_bool == 0) goto Label_5555; // 0x15b0 JumpB
	var_249_bool = 1; // 0x15b1 MovB
	return 0; // 0x15b2 Return
	
Label_5555:
	var_249_bool = 0; // 0x15b3 MovB
	return 0; // 0x15b4 Return
}


func_5807(var_220_bool)
{
	var_222_int = 0; var_223_string = ""; // 0x16b0 PushV
	var_223_string = "d4q02"; // 0x16b1 MovS
	func_5024(var_222_int, var_223_string); // 0x16b2 Call
	var_224_int = 1000; // 0x16b4 PushI
	var_225_bool = var_222_int == var_224_int; // 0x16b5 Eq
	if(var_225_bool == 0) goto Label_5817; // 0x16b6 JumpB
	var_220_bool = 1; // 0x16b7 MovB
	return 0; // 0x16b8 Return
	
Label_5817:
	var_220_bool = 0; // 0x16b9 MovB
	return 0; // 0x16ba Return
}


func_5042(var_113_object, var_114_string, var_115_int)
{
	var_116_object = Obj(); var_117_object = Obj(); // 0x13b2 PushV
	CreateInvItem(var_117_object); // 0x13b3 Func
	SetItemName(var_114_string); // 0x13b5 ObjFunc
	var_118_object = Obj(); var_119_object = Obj(); var_120_int = 0; // 0x13b7 PushV
	var_118_object = var_113_object; // 0x13b8 Mov
	var_119_object = var_117_object; // 0x13b9 Mov
	var_120_int = var_115_int; // 0x13ba Mov
	func_5029(var_119_object, var_120_int); // 0x13bb Call
	return 2; // 0x13bd Return
}


func_180(var_2_object, var_40_string)
{
	var_41_bool = 0; // 0xb5 PushV
	func_5108(var_41_bool); // 0xb6 Call
	var_42_bool = var_41_bool == 0; // 0xb8 Not
	if(var_42_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_43_bool = var_40_string == var_2_object; // 0xbb Eq
	if(var_43_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_44_string = ""; // 0xbe PushV
	var_44_string = var_40_string; // 0xbf Mov
	func_4989(var_44_string); // 0xc0 Call
	var_2_object = var_40_string; // 0xc2 TMov
	return 0; // 0xc3 Return
}


func_5557(var_271_bool)
{
	var_273_int = 0; var_274_string = ""; // 0x15b6 PushV
	var_274_string = "ood1Julia3"; // 0x15b7 MovS
	func_5024(var_273_int, var_274_string); // 0x15b8 Call
	var_275_int = 0; // 0x15ba PushI
	var_276_bool = var_273_int == var_275_int; // 0x15bb Eq
	if(var_276_bool == 0) goto Label_5567; // 0x15bc JumpB
	var_271_bool = 1; // 0x15bd MovB
	return 0; // 0x15be Return
	
Label_5567:
	var_271_bool = 0; // 0x15bf MovB
	return 0; // 0x15c0 Return
}


func_6069(var_166_bool, var_167_int)
{
	var_168_object = Obj(); var_169_object = Obj(); var_170_object = Obj(); var_171_object = Obj(); // 0x17b5 PushV
	var_172_object = Obj(); // 0x17b6 PushV
	func_6027(var_172_object); // 0x17b7 Call
	var_170_object = var_172_object; // 0x17b8 Mov
	Find(var_167_int, var_171_object); // 0x17ba ObjFunc
	var_173_bool = var_171_object == 0; // 0x17bc Not
	if(var_173_bool == 0) goto Label_6080; // 0x17bd JumpB
	var_166_bool = 0; // 0x17be MovB
	return 4; // 0x17bf Return
	
Label_6080:
	Remove(); // 0x17c0 ObjFunc
	var_166_bool = 1; // 0x17c2 MovB
	return 4; // 0x17c3 Return
}


func_5306()
{
	var_167_string = "ood4Julia2"; // 0x14bb PushS
	var_168_int = 1; // 0x14bc PushI
	SetVariable(var_167_string, var_168_int); // 0x14bd Func
	return 0; // 0x14bf Return
}


func_5819(var_214_bool)
{
	var_216_int = 0; var_217_string = ""; // 0x16bc PushV
	var_217_string = "ood4Julia2"; // 0x16bd MovS
	func_5024(var_216_int, var_217_string); // 0x16be Call
	var_218_int = 0; // 0x16c0 PushI
	var_219_bool = var_216_int == var_218_int; // 0x16c1 Eq
	if(var_219_bool == 0) goto Label_5829; // 0x16c2 JumpB
	var_214_bool = 1; // 0x16c3 MovB
	return 0; // 0x16c4 Return
	
Label_5829:
	var_214_bool = 0; // 0x16c5 MovB
	return 0; // 0x16c6 Return
}


func_5055(var_80_bool, var_81_string, var_82_string)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x13bf PushV
	FindActor(var_84_object, var_81_string); // 0x13c0 Func
	var_85_bool = var_84_object == 0; // 0x13c2 NullEq
	if(var_85_bool == 0) goto Label_5062; // 0x13c3 JumpB
	var_80_bool = 0; // 0x13c4 MovB
	return 2; // 0x13c5 Return
	
Label_5062:
	Trigger(var_84_object, var_82_string); // 0x13c6 Func
	var_80_bool = 1; // 0x13c8 MovB
	return 2; // 0x13c9 Return
}


func_5312()
{
	var_609_string = "KnowMistresses"; // 0x14c1 PushS
	var_610_int = 1; // 0x14c2 PushI
	SetVariable(var_609_string, var_610_int); // 0x14c3 Func
	return 0; // 0x14c5 Return
}


func_5569(var_172_bool)
{
	var_174_int = 0; var_175_string = ""; // 0x15c2 PushV
	var_175_string = "d1q01"; // 0x15c3 MovS
	func_5024(var_174_int, var_175_string); // 0x15c4 Call
	var_176_int = 1000; // 0x15c6 PushI
	var_177_bool = var_174_int == var_176_int; // 0x15c7 Eq
	if(var_177_bool == 0) goto Label_5579; // 0x15c8 JumpB
	var_172_bool = 1; // 0x15c9 MovB
	return 0; // 0x15ca Return
	
Label_5579:
	var_172_bool = 0; // 0x15cb MovB
	return 0; // 0x15cc Return
}


func_5318()
{
	var_38_string = "ood6Julia1"; // 0x14c7 PushS
	var_39_int = 1; // 0x14c8 PushI
	SetVariable(var_38_string, var_39_int); // 0x14c9 Func
	return 0; // 0x14cb Return
}


func_5831(var_595_bool)
{
	var_597_int = 0; var_598_string = ""; // 0x16c8 PushV
	var_598_string = "KnowMistresses"; // 0x16c9 MovS
	func_5024(var_597_int, var_598_string); // 0x16ca Call
	var_599_int = 1; // 0x16cc PushI
	var_600_bool = var_597_int == var_599_int; // 0x16cd Eq
	if(var_600_bool == 0) goto Label_5841; // 0x16ce JumpB
	var_595_bool = 1; // 0x16cf MovB
	return 0; // 0x16d0 Return
	
Label_5841:
	var_595_bool = 0; // 0x16d1 MovB
	return 0; // 0x16d2 Return
}


func_3526(var_2_object, var_63_string)
{
	var_64_bool = 0; // 0xdc7 PushV
	func_5108(var_64_bool); // 0xdc8 Call
	var_65_bool = var_64_bool == 0; // 0xdca Not
	if(var_65_bool == 0) goto Label_3533; // 0xdcb JumpB
	return 0; // 0xdcc Return
	
Label_3533:
	var_66_bool = var_63_string == var_2_object; // 0xdcd Eq
	if(var_66_bool == 0) goto Label_3536; // 0xdce JumpB
	return 0; // 0xdcf Return
	
Label_3536:
	var_67_string = ""; // 0xdd0 PushV
	var_67_string = var_63_string; // 0xdd1 Mov
	func_4989(var_67_string); // 0xdd2 Call
	var_2_object = var_63_string; // 0xdd4 TMov
	return 0; // 0xdd5 Return
}


func_6086(var_66_object)
{
	var_67_object = Obj(); var_68_object = Obj(); var_69_object = Obj(); var_70_object = Obj(); // 0x17c6 PushV
	GetMainOutdoorScene(var_69_object); // 0x17c7 Func
	var_71_bool = var_69_object == 0; // 0x17c9 NullEq
	if(var_71_bool == 0) goto Label_6097; // 0x17ca JumpB
	var_72_string = "Can't find main outdoor scene"; // 0x17cb PushS
	Trace(var_72_string); // 0x17cc Func
	var_70_object = 0; // 0x17ce SetNull
	var_66_object = var_70_object; // 0x17cf Mov
	return 4; // 0x17d0 Return
	
Label_6097:
	GetMap(var_70_object); // 0x17d1 ObjFunc
	var_66_object = var_70_object; // 0x17d3 Mov
	return 4; // 0x17d4 Return
}


func_5067(var_77_float)
{
	var_78_float = 0; var_79_float = 0; // 0x13cb PushV
	GetGameTime(var_79_float); // 0x13cc Func
	var_77_float = var_79_float; // 0x13ce Mov
	return 2; // 0x13cf Return
}


func_5324()
{
	var_48_string = "ood6Julia2"; // 0x14cd PushS
	var_49_int = 1; // 0x14ce PushI
	SetVariable(var_48_string, var_49_int); // 0x14cf Func
	return 0; // 0x14d1 Return
}


func_5581(var_165_bool)
{
	var_167_int = 0; var_168_string = ""; // 0x15ce PushV
	var_168_string = "d1q01"; // 0x15cf MovS
	func_5024(var_167_int, var_168_string); // 0x15d0 Call
	var_169_int = 0; // 0x15d2 PushI
	var_170_bool = var_167_int == var_169_int; // 0x15d3 Eq
	if(var_170_bool == 0) goto Label_5591; // 0x15d4 JumpB
	var_165_bool = 1; // 0x15d5 MovB
	return 0; // 0x15d6 Return
	
Label_5591:
	var_165_bool = 0; // 0x15d7 MovB
	return 0; // 0x15d8 Return
}


func_4047(var_0_object, var_1_object, var_2_object, var_3_object, var_497_object, var_498_object)
{
	var_0_object = var_498_object; // 0xfd0 TMov
	var_1_object = var_497_object; // 0xfd1 TMov
	var_3_object = 0; // 0xfd2 TMovB
	var_503_int = 1; // 0xfd3 PushI
	if(var_503_int == 0) goto Label_4105; // 0xfd4 JumpB
	var_504_bool = 0; var_505_object = Obj(); // 0xfd5 PushV
	var_505_object = var_1_object; // 0xfd6 MovT
	func_5980(var_505_object); // 0xfd7 Call
	if(var_504_bool == 0) goto Label_4088; // 0xfd9 JumpB
	var_510_object = Obj(); var_511_object = Obj(); // 0xfda PushV
	var_510_object = var_1_object; // 0xfdb MovT
	var_511_object = var_0_object; // 0xfdc MovT
	func_5505(); // 0xfdd Call
	var_514_string = ""; // 0xfdf PushV
	var_514_string = "Neutral"; // 0xfe0 MovS
	func_4135(var_498_object, var_514_string); // 0xfe1 Call
	var_519_int = 9865; // 0xfe3 PushI
	SetMessage(var_519_int); // 0xfe4 TObjFunc
	ClearReplies(); // 0xfe6 TObjFunc
	var_520_int = 9866; // 0xfe8 PushI
	var_521_int = 10867; // 0xfe9 PushI
	var_522_int = 10866; // 0xfea PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0xfeb TObjFunc
	var_523_int = 9877; // 0xfed PushI
	var_524_int = -1; // 0xfee PushI
	var_525_int = 10880; // 0xfef PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0xff0 TObjFunc
	var_526_int = 9878; // 0xff2 PushI
	var_527_int = 10882; // 0xff3 PushI
	var_528_int = 10881; // 0xff4 PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0xff5 TObjFunc
	goto Label_4105; // 0xff7 Jump
	
Label_4105:
	var_529_bool = 0; // 0x1009 PushV
	func_5108(var_529_bool); // 0x100a Call
	if(var_529_bool == 0) goto Label_4120; // 0x100c JumpB
	
Label_4109:
	lshWaitForAnimEnd(); // 0x100d Func
	var_530_object = var_3_object; // 0x100f PushT
	if(var_530_object == 0) goto Label_4114; // 0x1010 JumpB
	goto Label_4119; // 0x1011 Jump
	
Label_4119:
	goto Label_4134; // 0x1017 Jump
	
Label_4134:
	return 0; // 0x1026 Return
	
Label_4114:
	var_531_string = ""; // 0x1012 PushV
	var_531_string = var_2_object; // 0x1013 MovT
	func_4989(var_531_string); // 0x1014 Call
	goto Label_4109; // 0x1016 Jump
	
Label_4120:
	var_532_string = "all"; // 0x1018 PushS
	var_533_string = "idle"; // 0x1019 PushS
	PlayAnimation(var_532_string, var_533_string); // 0x101a Func
	
Label_4124:
	WaitForAnimEnd(); // 0x101c Func
	var_534_object = var_3_object; // 0x101e PushT
	if(var_534_object == 0) goto Label_4129; // 0x101f JumpB
	goto Label_4134; // 0x1020 Jump
	
Label_4129:
	var_535_string = "all"; // 0x1021 PushS
	var_536_string = "idle"; // 0x1022 PushS
	PlayAnimation(var_535_string, var_536_string); // 0x1023 Func
	goto Label_4124; // 0x1025 Jump
	
Label_4088:
	var_537_string = ""; // 0xff8 PushV
	var_537_string = "Neutral"; // 0xff9 MovS
	func_4135(var_498_object, var_537_string); // 0xffa Call
	var_538_int = 10190; // 0xffc PushI
	SetMessage(var_538_int); // 0xffd TObjFunc
	ClearReplies(); // 0xfff TObjFunc
	var_539_int = 15313; // 0x1001 PushI
	var_540_int = -1; // 0x1002 PushI
	var_541_int = 16551; // 0x1003 PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x1004 TObjFunc
	goto Label_4105; // 0x1006 Jump
}


func_5072(var_146_int)
{
	var_147_float = 0; var_148_float = 0; // 0x13d0 PushV
	GetGameTime(var_148_float); // 0x13d1 Func
	var_149_int = 1; // 0x13d3 PushI
	var_150_int = 0; // 0x13d4 PushV
	var_151_int = 24; // 0x13d5 PushI
	var_150_int = var_148_float / var_148_float; // 0x13d6 Div2
	var_146_int = var_149_int + var_150_int; // 0x13d7 Add2
	return 2; // 0x13d8 Return
}


func_5330(var_52_object)
{
	func_6169(); // 0x14d4 Call
	var_79_string = "julia blood is given"; // 0x14d6 PushS
	Trace(var_79_string); // 0x14d7 Func
	var_80_object = Obj(); var_81_string = ""; var_82_int = 0; // 0x14d9 PushV
	var_80_object = var_52_object; // 0x14da Mov
	var_81_string = "d6q01_julia_blood"; // 0x14db MovS
	var_82_int = 1; // 0x14dc MovI
	func_5042(var_80_object, var_81_string, var_82_int); // 0x14dd Call
	return 0; // 0x14df Return
}


func_5843(var_357_bool)
{
	var_359_int = 0; var_360_string = ""; // 0x16d4 PushV
	var_360_string = "KnowMark"; // 0x16d5 MovS
	func_5024(var_359_int, var_360_string); // 0x16d6 Call
	var_361_int = 1; // 0x16d8 PushI
	var_362_bool = var_359_int == var_361_int; // 0x16d9 Eq
	if(var_362_bool == 0) goto Label_5853; // 0x16da JumpB
	var_357_bool = 1; // 0x16db MovB
	return 0; // 0x16dc Return
	
Label_5853:
	var_357_bool = 0; // 0x16dd MovB
	return 0; // 0x16de Return
}


func_6103(var_86_object, var_87_string, var_88_float)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_object = Obj(); var_93_bool = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_object = Obj(); var_97_bool = 0; // 0x17d7 PushV
	GetMainOutdoorScene(var_96_object); // 0x17d8 Func
	var_98_bool = var_96_object == 0; // 0x17da NullEq
	if(var_98_bool == 0) goto Label_6112; // 0x17db JumpB
	var_99_string = "Can't find main outdoor scene"; // 0x17dc PushS
	Trace(var_99_string); // 0x17dd Func
	return 8; // 0x17df Return
	
Label_6112:
	GetLocator(var_87_string, var_97_bool, var_94_cvector, var_95_cvector); // 0x17e0 ObjFunc
	var_100_bool = var_97_bool == 0; // 0x17e2 Not
	if(var_100_bool == 0) goto Label_6122; // 0x17e3 JumpB
	var_101_string = "Warning: outdoor scene locator "; // 0x17e4 PushS
	var_102_int = var_101_string + var_87_string; // 0x17e5 Add
	var_103_string = " doesnt exist"; // 0x17e6 PushS
	var_104_int = var_102_int + var_103_string; // 0x17e7 Add
	Trace(var_104_int); // 0x17e8 Func
	
Label_6122:
	GetMap(var_86_object); // 0x17ea ObjFunc
	var_105_bool = var_86_object == 0; // 0x17ec NullEq
	if(var_105_bool == 0) goto Label_6130; // 0x17ed JumpB
	var_106_string = "Can't find map"; // 0x17ee PushS
	Trace(var_106_string); // 0x17ef Func
	return 8; // 0x17f1 Return
	
Label_6130:
	var_107_float = GetByIndex(var_94_cvector, 0); // 0x17f2 PushE
	var_108_float = GetByIndex(var_94_cvector, 2); // 0x17f3 PushE
	SetMapParams(var_107_float, var_108_float, var_88_float); // 0x17f4 ObjFunc
	return 8; // 0x17f6 Return
}


func_5593(var_255_bool)
{
	var_257_int = 0; var_258_string = ""; // 0x15da PushV
	var_258_string = "d1q01FirstGeorgVisit"; // 0x15db MovS
	func_5024(var_257_int, var_258_string); // 0x15dc Call
	var_259_int = 1; // 0x15de PushI
	var_260_bool = var_257_int == var_259_int; // 0x15df Eq
	if(var_260_bool == 0) goto Label_5603; // 0x15e0 JumpB
	var_255_bool = 1; // 0x15e1 MovB
	return 0; // 0x15e2 Return
	
Label_5603:
	var_255_bool = 0; // 0x15e3 MovB
	return 0; // 0x15e4 Return
}


func_5081(var_292_int)
{
	var_293_float = 0; var_294_float = 0; // 0x13d9 PushV
	GetGameTime(var_294_float); // 0x13da Func
	var_295_int = 0; // 0x13dc PushV
	var_295_int = var_294_float; // 0x13dd Mov
	var_296_int = 24; // 0x13de PushI
	var_292_int = var_295_int % var_296_int; // 0x13df Mod2
	return 2; // 0x13e0 Return
}


func_4315(var_0_object, var_546_int, var_547_object)
{
	var_549_object = Obj(); var_550_bool = 0; var_551_int = 0; var_552_bool = 0; var_553_object = Obj(); var_554_bool = 0; var_555_int = 0; var_556_bool = 0; // 0x10db PushV
	var_0_object = var_547_object; // 0x10dc TMov
	var_557_bool = 0; var_558_object = Obj(); // 0x10dd PushV
	var_558_object = var_547_object; // 0x10de Mov
	func_4929(var_558_object); // 0x10df Call
	var_559_bool = var_557_bool == 0; // 0x10e1 Not
	if(var_559_bool == 0) goto Label_4325; // 0x10e2 JumpB
	var_546_int = -2; // 0x10e3 MovI
	return 8; // 0x10e4 Return
	
Label_4325:
	CreateDialog(var_553_object); // 0x10e5 Func
	var_560_int = 0; // 0x10e7 PushV
	func_5104(var_560_int); // 0x10e8 Call
	SetNPCName(var_560_int); // 0x10ea ObjFunc
	var_561_string = ""; // 0x10ec PushV
	func_5106(var_561_string); // 0x10ed Call
	SetPhoto(var_561_string); // 0x10ef ObjFunc
	var_562_int = 0; // 0x10f1 PushV
	func_6136(var_562_int); // 0x10f2 Call
	SetPlayerName(var_562_int); // 0x10f4 ObjFunc
	var_555_int = -1; // 0x10f6 MovI
	IsOverrideActive(var_554_bool); // 0x10f7 Func
	var_563_bool = var_554_bool; // 0x10f9 Push
	if(var_563_bool == 0) goto Label_4349; // 0x10fa JumpB
	var_546_int = -2; // 0x10fb MovI
	return 8; // 0x10fc Return
	
Label_4349:
	DoDialog(var_553_object); // 0x10fd Func
	var_564_object = Obj(); var_565_object = Obj(); // 0x10ff PushV
	var_564_object = var_547_object; // 0x1100 Mov
	var_565_object = var_553_object; // 0x1101 Mov
	TaskCall(13); // 0x1102 TaskCall
	func_4378(var_566_object, var_567_object, var_568_string, var_569_bool, var_564_object, var_565_object); // 0x1103 Call
	TaskReturn(); // 0x1104 TaskReturn
	IsDialogEnd(var_556_bool); // 0x1106 ObjFunc
	
Label_4360:
	var_630_bool = var_556_bool == 0; // 0x1108 Not
	if(var_630_bool == 0) goto Label_4367; // 0x1109 JumpB
	sync(); // 0x110a Func
	IsDialogEnd(var_556_bool); // 0x110c ObjFunc
	goto Label_4360; // 0x110e Jump
	
Label_4367:
	var_631_object = Obj(); // 0x110f PushV
	var_631_object = var_547_object; // 0x1110 Mov
	func_4985(); // 0x1111 Call
	StopDialog(var_553_object); // 0x1113 Func
	GetReturnValue(var_555_int); // 0x1115 ObjFunc
	var_546_int = var_555_int; // 0x1117 Mov
	return 8; // 0x1118 Return
}


func_5855(var_231_bool)
{
	var_233_int = 0; var_234_string = ""; // 0x16e0 PushV
	var_234_string = "d6q01"; // 0x16e1 MovS
	func_5024(var_233_int, var_234_string); // 0x16e2 Call
	var_235_int = 1; // 0x16e4 PushI
	var_236_bool = var_233_int == var_235_int; // 0x16e5 Eq
	if(var_236_bool == 0) goto Label_5865; // 0x16e6 JumpB
	var_231_bool = 1; // 0x16e7 MovB
	return 0; // 0x16e8 Return
	
Label_5865:
	var_231_bool = 0; // 0x16e9 MovB
	return 0; // 0x16ea Return
}


func_5344()
{
	var_98_string = "playsound"; // 0x14e1 PushS
	var_99_string = "giveitem"; // 0x14e2 PushS
	TriggerWorld(var_98_string, var_99_string); // 0x14e3 Func
	return 0; // 0x14e5 Return
}


func_5089(var_144_bool, var_145_int)
{
	var_146_int = 0; // 0x13e2 PushV
	func_5072(var_146_int); // 0x13e3 Call
	var_144_bool = var_146_int == var_145_int; // 0x13e5 Eq2
	return 0; // 0x13e6 Return
}


func_5605(var_464_bool)
{
	var_466_int = 0; var_467_string = ""; // 0x15e6 PushV
	var_467_string = "KnowDiamAce"; // 0x15e7 MovS
	func_5024(var_466_int, var_467_string); // 0x15e8 Call
	var_468_int = 1; // 0x15ea PushI
	var_469_bool = var_466_int == var_468_int; // 0x15eb Eq
	if(var_469_bool == 0) goto Label_5615; // 0x15ec JumpB
	var_464_bool = 1; // 0x15ed MovB
	return 0; // 0x15ee Return
	
Label_5615:
	var_464_bool = 0; // 0x15ef MovB
	return 0; // 0x15f0 Return
}


func_5350()
{
	var_116_object = Obj(); var_117_object = Obj(); var_118_object = Obj(); var_119_object = Obj(); // 0x14e6 PushV
	var_120_string = "d6q01JuliaVolonteer"; // 0x14e7 PushS
	var_121_int = 1; // 0x14e8 PushI
	SetVariable(var_120_string, var_121_int); // 0x14e9 Func
	var_122_object = Obj(); // 0x14eb PushV
	func_6086(var_122_object); // 0x14ec Call
	var_118_object = var_122_object; // 0x14ed Mov
	var_129_string = "d6q01AlexandrGotoJulia"; // 0x14ef PushS
	FindMark(var_119_object, var_129_string); // 0x14f0 ObjFunc
	var_130_object = var_119_object; // 0x14f2 Push
	if(var_130_object == 0) goto Label_5366; // 0x14f3 JumpB
	Remove(); // 0x14f4 ObjFunc
	
Label_5366:
	var_131_string = "d6q01AlexandrGotoKaterina"; // 0x14f6 PushS
	FindMark(var_119_object, var_131_string); // 0x14f7 ObjFunc
	var_132_object = var_119_object; // 0x14f9 Push
	if(var_132_object == 0) goto Label_5373; // 0x14fa JumpB
	Remove(); // 0x14fb ObjFunc
	
Label_5373:
	var_133_string = "d6q01AlexandrGotoLara"; // 0x14fd PushS
	FindMark(var_119_object, var_133_string); // 0x14fe ObjFunc
	var_134_object = var_119_object; // 0x1500 Push
	if(var_134_object == 0) goto Label_5380; // 0x1501 JumpB
	Remove(); // 0x1502 ObjFunc
	
Label_5380:
	var_135_string = "d6q01AlexangrGotoJulLaraSelf"; // 0x1504 PushS
	FindMark(var_119_object, var_135_string); // 0x1505 ObjFunc
	var_136_object = var_119_object; // 0x1507 Push
	if(var_136_object == 0) goto Label_5387; // 0x1508 JumpB
	Remove(); // 0x1509 ObjFunc
	
Label_5387:
	var_137_string = "d6q01BigVladGotoAnna"; // 0x150b PushS
	FindMark(var_119_object, var_137_string); // 0x150c ObjFunc
	var_138_object = var_119_object; // 0x150e Push
	if(var_138_object == 0) goto Label_5394; // 0x150f JumpB
	Remove(); // 0x1510 ObjFunc
	
Label_5394:
	var_139_string = "d6q01BigVladGotoAnnaOspinaSelf"; // 0x1512 PushS
	FindMark(var_119_object, var_139_string); // 0x1513 ObjFunc
	var_140_object = var_119_object; // 0x1515 Push
	if(var_140_object == 0) goto Label_5401; // 0x1516 JumpB
	Remove(); // 0x1517 ObjFunc
	
Label_5401:
	var_141_string = "d6q01BigVladGotoOspina"; // 0x1519 PushS
	FindMark(var_119_object, var_141_string); // 0x151a ObjFunc
	var_142_object = var_119_object; // 0x151c Push
	if(var_142_object == 0) goto Label_5408; // 0x151d JumpB
	Remove(); // 0x151e ObjFunc
	
Label_5408:
	var_143_string = "d6q01KaterinaGotoLaska"; // 0x1520 PushS
	FindMark(var_119_object, var_143_string); // 0x1521 ObjFunc
	var_144_object = var_119_object; // 0x1523 Push
	if(var_144_object == 0) goto Label_5415; // 0x1524 JumpB
	Remove(); // 0x1525 ObjFunc
	
Label_5415:
	var_145_string = "d6q01KaterinagotoLaskaSelf"; // 0x1527 PushS
	FindMark(var_119_object, var_145_string); // 0x1528 ObjFunc
	var_146_object = var_119_object; // 0x152a Push
	if(var_146_object == 0) goto Label_5422; // 0x152b JumpB
	Remove(); // 0x152c ObjFunc
	
Label_5422:
	var_147_string = "d6q01KillerIsKlara"; // 0x152e PushS
	FindMark(var_119_object, var_147_string); // 0x152f ObjFunc
	var_148_object = var_119_object; // 0x1531 Push
	if(var_148_object == 0) goto Label_5429; // 0x1532 JumpB
	Remove(); // 0x1533 ObjFunc
	
Label_5429:
	var_149_string = "d6q01LaskaGotoAlbinos"; // 0x1535 PushS
	FindMark(var_119_object, var_149_string); // 0x1536 ObjFunc
	var_150_object = var_119_object; // 0x1538 Push
	if(var_150_object == 0) goto Label_5436; // 0x1539 JumpB
	Remove(); // 0x153a ObjFunc
	
Label_5436:
	var_151_string = "d6q01ViktorGotoAlexandr"; // 0x153c PushS
	FindMark(var_119_object, var_151_string); // 0x153d ObjFunc
	var_152_object = var_119_object; // 0x153f Push
	if(var_152_object == 0) goto Label_5443; // 0x1540 JumpB
	Remove(); // 0x1541 ObjFunc
	
Label_5443:
	var_153_string = "d6q01ViktorGotoAlxBigSelf"; // 0x1543 PushS
	FindMark(var_119_object, var_153_string); // 0x1544 ObjFunc
	var_154_object = var_119_object; // 0x1546 Push
	if(var_154_object == 0) goto Label_5450; // 0x1547 JumpB
	Remove(); // 0x1548 ObjFunc
	
Label_5450:
	var_155_string = "d6q01ViktorGotoBigVlad"; // 0x154a PushS
	FindMark(var_119_object, var_155_string); // 0x154b ObjFunc
	var_156_object = var_119_object; // 0x154d Push
	if(var_156_object == 0) goto Label_5457; // 0x154e JumpB
	Remove(); // 0x154f ObjFunc
	
Label_5457:
	func_6185(); // 0x1552 Call
	var_166_bool = 0; var_167_int = 0; // 0x1554 PushV
	var_167_int = 112; // 0x1555 MovI
	func_6069(var_166_bool, var_167_int); // 0x1556 Call
	var_174_bool = 0; var_175_int = 0; // 0x1558 PushV
	var_175_int = 113; // 0x1559 MovI
	func_6069(var_174_bool, var_175_int); // 0x155a Call
	var_176_bool = 0; var_177_int = 0; // 0x155c PushV
	var_177_int = 114; // 0x155d MovI
	func_6069(var_176_bool, var_177_int); // 0x155e Call
	var_178_bool = 0; var_179_int = 0; // 0x1560 PushV
	var_179_int = 115; // 0x1561 MovI
	func_6069(var_178_bool, var_179_int); // 0x1562 Call
	var_180_bool = 0; var_181_int = 0; // 0x1564 PushV
	var_181_int = 116; // 0x1565 MovI
	func_6069(var_180_bool, var_181_int); // 0x1566 Call
	var_182_bool = 0; var_183_int = 0; // 0x1568 PushV
	var_183_int = 117; // 0x1569 MovI
	func_6069(var_182_bool, var_183_int); // 0x156a Call
	var_184_bool = 0; var_185_string = ""; var_186_string = ""; // 0x156c PushV
	var_185_string = "quest_d6_01"; // 0x156d MovS
	var_186_string = "completed"; // 0x156e MovS
	func_5055(var_184_bool, var_185_string, var_186_string); // 0x156f Call
	return 4; // 0x1571 Return
}


func_5095(var_738_bool)
{
	var_739_bool = 0; var_740_bool = 0; // 0x13e7 PushV
	var_741_string = ""; // 0x13e8 PushV
	var_741_string = "No"; // 0x13e9 MovS
	func_4989(var_741_string); // 0x13ea Call
	lshWaitForAnimEnd(var_740_bool); // 0x13ec Func
	var_738_bool = var_740_bool; // 0x13ee Mov
	return 2; // 0x13ef Return
}


func_5867(var_213_bool)
{
	var_215_int = 0; var_216_string = ""; // 0x16ec PushV
	var_216_string = "d5q01"; // 0x16ed MovS
	func_5024(var_215_int, var_216_string); // 0x16ee Call
	var_219_int = 1000; // 0x16f0 PushI
	var_220_bool = var_215_int == var_219_int; // 0x16f1 Eq
	if(var_220_bool == 0) goto Label_5877; // 0x16f2 JumpB
	var_213_bool = 1; // 0x16f3 MovB
	return 0; // 0x16f4 Return
	
Label_5877:
	var_213_bool = 0; // 0x16f5 MovB
	return 0; // 0x16f6 Return
}


func_5104(var_86_int)
{
	var_86_int = 2862; // 0x13f0 MovI
	return 0; // 0x13f1 Return
}


func_5617(var_80_bool)
{
	var_82_int = 0; var_83_string = ""; // 0x15f2 PushV
	var_83_string = "ood2Julia1"; // 0x15f3 MovS
	func_5024(var_82_int, var_83_string); // 0x15f4 Call
	var_86_int = 0; // 0x15f6 PushI
	var_87_bool = var_82_int == var_86_int; // 0x15f7 Eq
	if(var_87_bool == 0) goto Label_5627; // 0x15f8 JumpB
	var_80_bool = 1; // 0x15f9 MovB
	return 0; // 0x15fa Return
	
Label_5627:
	var_80_bool = 0; // 0x15fb MovB
	return 0; // 0x15fc Return
}


func_5106(var_87_string)
{
	var_87_string = "ui/NPC_Julia.png"; // 0x13f2 MovS
	return 0; // 0x13f3 Return
}


func_5108(var_33_bool)
{
	var_33_bool = 1; // 0x13f4 MovB
	return 0; // 0x13f5 Return
}


func_5110()
{
	var_38_string = "ood1Julia1"; // 0x13f7 PushS
	var_39_int = 1; // 0x13f8 PushI
	SetVariable(var_38_string, var_39_int); // 0x13f9 Func
	return 0; // 0x13fb Return
}


func_5879(var_221_bool)
{
	var_223_int = 0; var_224_string = ""; // 0x16f8 PushV
	var_224_string = "ood6Julia1"; // 0x16f9 MovS
	func_5024(var_223_int, var_224_string); // 0x16fa Call
	var_225_int = 0; // 0x16fc PushI
	var_226_bool = var_223_int == var_225_int; // 0x16fd Eq
	if(var_226_bool == 0) goto Label_5889; // 0x16fe JumpB
	var_221_bool = 1; // 0x16ff MovB
	return 0; // 0x1700 Return
	
Label_5889:
	var_221_bool = 0; // 0x1701 MovB
	return 0; // 0x1702 Return
}


func_6136(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x17f8 PushV
	var_91_string = "player"; // 0x17f9 PushS
	GetVariable(var_91_string, var_90_int); // 0x17fa Func
	var_92_int = 0; // 0x17fc PushI
	var_93_bool = var_90_int == var_92_int; // 0x17fd Eq
	if(var_93_bool == 0) goto Label_6146; // 0x17fe JumpB
	var_88_int = 200001; // 0x17ff MovI
	return 2; // 0x1800 Return
	
Label_6146:
	var_94_int = 1; // 0x1802 PushI
	var_95_bool = var_90_int == var_94_int; // 0x1803 Eq
	if(var_95_bool == 0) goto Label_6151; // 0x1804 JumpB
	var_88_int = 200002; // 0x1805 MovI
	return 2; // 0x1806 Return
	
Label_6151:
	var_88_int = 200003; // 0x1807 MovI
	return 2; // 0x1808 Return
}


func_1274(var_0_object, var_152_int, var_153_object)
{
	var_155_object = Obj(); var_156_bool = 0; var_157_int = 0; var_158_bool = 0; var_159_object = Obj(); var_160_bool = 0; var_161_int = 0; var_162_bool = 0; // 0x4fa PushV
	var_0_object = var_153_object; // 0x4fb TMov
	var_163_bool = 0; var_164_object = Obj(); // 0x4fc PushV
	var_164_object = var_153_object; // 0x4fd Mov
	func_4929(var_164_object); // 0x4fe Call
	var_165_bool = var_163_bool == 0; // 0x500 Not
	if(var_165_bool == 0) goto Label_1284; // 0x501 JumpB
	var_152_int = -2; // 0x502 MovI
	return 8; // 0x503 Return
	
Label_1284:
	CreateDialog(var_159_object); // 0x504 Func
	var_166_int = 0; // 0x506 PushV
	func_5104(var_166_int); // 0x507 Call
	SetNPCName(var_166_int); // 0x509 ObjFunc
	var_167_string = ""; // 0x50b PushV
	func_5106(var_167_string); // 0x50c Call
	SetPhoto(var_167_string); // 0x50e ObjFunc
	var_168_int = 0; // 0x510 PushV
	func_6136(var_168_int); // 0x511 Call
	SetPlayerName(var_168_int); // 0x513 ObjFunc
	var_161_int = -1; // 0x515 MovI
	IsOverrideActive(var_160_bool); // 0x516 Func
	var_169_bool = var_160_bool; // 0x518 Push
	if(var_169_bool == 0) goto Label_1308; // 0x519 JumpB
	var_152_int = -2; // 0x51a MovI
	return 8; // 0x51b Return
	
Label_1308:
	DoDialog(var_159_object); // 0x51c Func
	var_170_object = Obj(); var_171_object = Obj(); // 0x51e PushV
	var_170_object = var_153_object; // 0x51f Mov
	var_171_object = var_159_object; // 0x520 Mov
	TaskCall(7); // 0x521 TaskCall
	func_1337(var_172_object, var_173_object, var_174_string, var_175_bool, var_170_object, var_171_object); // 0x522 Call
	TaskReturn(); // 0x523 TaskReturn
	IsDialogEnd(var_162_bool); // 0x525 ObjFunc
	
Label_1319:
	var_413_bool = var_162_bool == 0; // 0x527 Not
	if(var_413_bool == 0) goto Label_1326; // 0x528 JumpB
	sync(); // 0x529 Func
	IsDialogEnd(var_162_bool); // 0x52b ObjFunc
	goto Label_1319; // 0x52d Jump
	
Label_1326:
	var_414_object = Obj(); // 0x52e PushV
	var_414_object = var_153_object; // 0x52f Mov
	func_4985(); // 0x530 Call
	StopDialog(var_159_object); // 0x532 Func
	GetReturnValue(var_161_int); // 0x534 ObjFunc
	var_152_int = var_161_int; // 0x536 Mov
	return 8; // 0x537 Return
}


func_5116()
{
	var_91_string = "ood1Julia2"; // 0x13fd PushS
	var_92_int = 1; // 0x13fe PushI
	SetVariable(var_91_string, var_92_int); // 0x13ff Func
	return 0; // 0x1401 Return
}


func_5629(var_88_bool)
{
	var_90_int = 0; var_91_string = ""; // 0x15fe PushV
	var_91_string = "d2q03"; // 0x15ff MovS
	func_5024(var_90_int, var_91_string); // 0x1600 Call
	var_92_int = 1; // 0x1602 PushI
	var_93_bool = var_90_int == var_92_int; // 0x1603 Eq
	if(var_93_bool == 0) goto Label_5639; // 0x1604 JumpB
	var_88_bool = 1; // 0x1605 MovB
	return 0; // 0x1606 Return
	
Label_5639:
	var_88_bool = 0; // 0x1607 MovB
	return 0; // 0x1608 Return
}


