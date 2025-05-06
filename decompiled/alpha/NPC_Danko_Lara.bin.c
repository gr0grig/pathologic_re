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
	func_6730(var_31_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x2a PushV
	var_32_object = var_30_bool; // 0x2b Mov
	func_4894(var_32_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xbb PushI
	if(var_32_int == 0) goto Label_347; // 0xbc JumpB
	func_4989(); // 0xbe Call
	var_34_int = 510; // 0xc0 PushI
	var_35_bool = var_30_string == var_34_int; // 0xc1 Eq
	if(var_35_bool == 0) goto Label_215; // 0xc2 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xc3 PushV
	var_36_object = var_1_object; // 0xc4 MovT
	var_37_object = var_0_object; // 0xc5 MovT
	func_5731(); // 0xc6 Call
	var_40_string = ""; // 0xc8 PushV
	var_40_string = "Neutral"; // 0xc9 MovS
	func_170(var_31_bool, var_40_string); // 0xca Call
	var_55_int = 441; // 0xcc PushI
	SetMessage(var_55_int); // 0xcd TObjFunc
	ClearReplies(); // 0xcf TObjFunc
	var_56_int = 8443; // 0xd1 PushI
	var_57_int = 9267; // 0xd2 PushI
	var_58_int = 9266; // 0xd3 PushI
	AddReply(var_56_int, var_57_int, var_58_int); // 0xd4 TObjFunc
	return 0; // 0xd6 Return
	
Label_215:
	var_59_int = 9267; // 0xd7 PushI
	var_60_bool = var_30_string == var_59_int; // 0xd8 Eq
	if(var_60_bool == 0) goto Label_238; // 0xd9 JumpB
	var_61_string = ""; // 0xda PushV
	var_61_string = "Neutral"; // 0xdb MovS
	func_170(var_31_bool, var_61_string); // 0xdc Call
	var_62_int = 8444; // 0xde PushI
	SetMessage(var_62_int); // 0xdf TObjFunc
	ClearReplies(); // 0xe1 TObjFunc
	var_63_int = 443; // 0xe3 PushI
	var_64_int = 519; // 0xe4 PushI
	var_65_int = 512; // 0xe5 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xe6 TObjFunc
	var_66_int = 442; // 0xe8 PushI
	var_67_int = 513; // 0xe9 PushI
	var_68_int = 511; // 0xea PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xeb TObjFunc
	return 0; // 0xed Return
	
Label_238:
	var_69_int = 513; // 0xee PushI
	var_70_bool = var_30_string == var_69_int; // 0xef Eq
	if(var_70_bool == 0) goto Label_261; // 0xf0 JumpB
	var_71_string = ""; // 0xf1 PushV
	var_71_string = "Neutral"; // 0xf2 MovS
	func_170(var_31_bool, var_71_string); // 0xf3 Call
	var_72_int = 444; // 0xf5 PushI
	SetMessage(var_72_int); // 0xf6 TObjFunc
	ClearReplies(); // 0xf8 TObjFunc
	var_73_int = 445; // 0xfa PushI
	var_74_int = 516; // 0xfb PushI
	var_75_int = 514; // 0xfc PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xfd TObjFunc
	var_76_int = 446; // 0xff PushI
	var_77_int = -1; // 0x100 PushI
	var_78_int = 515; // 0x101 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x102 TObjFunc
	return 0; // 0x104 Return
	
Label_261:
	var_79_int = 516; // 0x105 PushI
	var_80_bool = var_30_string == var_79_int; // 0x106 Eq
	if(var_80_bool == 0) goto Label_284; // 0x107 JumpB
	var_81_string = ""; // 0x108 PushV
	var_81_string = "Neutral"; // 0x109 MovS
	func_170(var_31_bool, var_81_string); // 0x10a Call
	var_82_int = 447; // 0x10c PushI
	SetMessage(var_82_int); // 0x10d TObjFunc
	ClearReplies(); // 0x10f TObjFunc
	var_83_int = 449; // 0x111 PushI
	var_84_int = -1; // 0x112 PushI
	var_85_int = 518; // 0x113 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x114 TObjFunc
	var_86_int = 448; // 0x116 PushI
	var_87_int = -1; // 0x117 PushI
	var_88_int = 517; // 0x118 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_89_int = 519; // 0x11c PushI
	var_90_bool = var_30_string == var_89_int; // 0x11d Eq
	if(var_90_bool == 0) goto Label_307; // 0x11e JumpB
	var_91_string = ""; // 0x11f PushV
	var_91_string = "Neutral"; // 0x120 MovS
	func_170(var_31_bool, var_91_string); // 0x121 Call
	var_92_int = 450; // 0x123 PushI
	SetMessage(var_92_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_93_int = 451; // 0x128 PushI
	var_94_int = 522; // 0x129 PushI
	var_95_int = 520; // 0x12a PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x12b TObjFunc
	var_96_int = 452; // 0x12d PushI
	var_97_int = -1; // 0x12e PushI
	var_98_int = 521; // 0x12f PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_99_int = 522; // 0x133 PushI
	var_100_bool = var_30_string == var_99_int; // 0x134 Eq
	if(var_100_bool == 0) goto Label_335; // 0x135 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0x136 PushV
	var_101_object = var_1_object; // 0x137 MovT
	var_102_object = var_0_object; // 0x138 MovT
	func_5828(); // 0x139 Call
	var_105_string = ""; // 0x13b PushV
	var_105_string = "Neutral"; // 0x13c MovS
	func_170(var_31_bool, var_105_string); // 0x13d Call
	var_106_int = 453; // 0x13f PushI
	SetMessage(var_106_int); // 0x140 TObjFunc
	ClearReplies(); // 0x142 TObjFunc
	var_107_int = 454; // 0x144 PushI
	var_108_int = -1; // 0x145 PushI
	var_109_int = 523; // 0x146 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x147 TObjFunc
	var_110_int = 455; // 0x149 PushI
	var_111_int = -1; // 0x14a PushI
	var_112_int = 524; // 0x14b PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x14c TObjFunc
	return 0; // 0x14e Return
	
Label_335:
	var_3_string = 1; // 0x14f TMovB
	var_113_bool = 0; // 0x150 PushV
	func_5101(var_113_bool); // 0x151 Call
	if(var_113_bool == 0) goto Label_343; // 0x153 JumpB
	lshStopAnimation(); // 0x154 Func
	goto Label_345; // 0x156 Jump
	
Label_345:
	return 0; // 0x159 Return
	
Label_343:
	StopAnimation(); // 0x157 Func
	
Label_347:
	return 0; // 0x15b Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x238 PushI
	if(var_32_int == 0) goto Label_1203; // 0x239 JumpB
	func_4989(); // 0x23b Call
	var_34_int = 13929; // 0x23d PushI
	var_35_bool = var_31_bool == var_34_int; // 0x23e Eq
	if(var_35_bool == 0) goto Label_581; // 0x23f JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x240 PushV
	var_36_object = var_1_object; // 0x241 MovT
	var_37_object = var_0_object; // 0x242 MovT
	func_5545(); // 0x243 Call
	
Label_581:
	var_40_int = 11890; // 0x245 PushI
	var_41_bool = var_31_bool == var_40_int; // 0x246 Eq
	if(var_41_bool == 0) goto Label_594; // 0x247 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x248 PushV
	var_42_object = var_1_object; // 0x249 MovT
	var_43_object = var_0_object; // 0x24a MovT
	func_5551(var_43_object); // 0x24b Call
	var_86_object = Obj(); var_87_object = Obj(); // 0x24d PushV
	var_86_object = var_1_object; // 0x24e MovT
	var_87_object = var_0_object; // 0x24f MovT
	func_5565(); // 0x250 Call
	
Label_594:
	var_90_int = 11891; // 0x252 PushI
	var_91_bool = var_31_bool == var_90_int; // 0x253 Eq
	if(var_91_bool == 0) goto Label_607; // 0x254 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x255 PushV
	var_92_object = var_1_object; // 0x256 MovT
	var_93_object = var_0_object; // 0x257 MovT
	func_5551(var_93_object); // 0x258 Call
	var_94_object = Obj(); var_95_object = Obj(); // 0x25a PushV
	var_94_object = var_1_object; // 0x25b MovT
	var_95_object = var_0_object; // 0x25c MovT
	func_5565(); // 0x25d Call
	
Label_607:
	var_96_int = 13930; // 0x25f PushI
	var_97_bool = var_31_bool == var_96_int; // 0x260 Eq
	if(var_97_bool == 0) goto Label_615; // 0x261 JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0x262 PushV
	var_98_object = var_1_object; // 0x263 MovT
	var_99_object = var_0_object; // 0x264 MovT
	func_5571(); // 0x265 Call
	
Label_615:
	var_102_int = 11915; // 0x267 PushI
	var_103_bool = var_31_bool == var_102_int; // 0x268 Eq
	if(var_103_bool == 0) goto Label_623; // 0x269 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x26a PushV
	var_104_object = var_1_object; // 0x26b MovT
	var_105_object = var_0_object; // 0x26c MovT
	func_5589(); // 0x26d Call
	
Label_623:
	var_180_int = 3969; // 0x26f PushI
	var_181_bool = var_31_bool == var_180_int; // 0x270 Eq
	if(var_181_bool == 0) goto Label_631; // 0x271 JumpB
	var_182_object = Obj(); var_183_object = Obj(); // 0x272 PushV
	var_182_object = var_1_object; // 0x273 MovT
	var_183_object = var_0_object; // 0x274 MovT
	func_5577(); // 0x275 Call
	
Label_631:
	var_186_int = 3968; // 0x277 PushI
	var_187_bool = var_31_bool == var_186_int; // 0x278 Eq
	if(var_187_bool == 0) goto Label_639; // 0x279 JumpB
	var_188_object = Obj(); var_189_object = Obj(); // 0x27a PushV
	var_188_object = var_1_object; // 0x27b MovT
	var_189_object = var_0_object; // 0x27c MovT
	func_5583(); // 0x27d Call
	
Label_639:
	var_192_int = 3967; // 0x27f PushI
	var_193_bool = var_30_string == var_192_int; // 0x280 Eq
	if(var_193_bool == 0) goto Label_744; // 0x281 JumpB
	var_194_string = ""; // 0x282 PushV
	var_194_string = "Neutral"; // 0x283 MovS
	func_551(var_31_bool, var_194_string); // 0x284 Call
	var_209_int = 3662; // 0x286 PushI
	SetMessage(var_209_int); // 0x287 TObjFunc
	ClearReplies(); // 0x289 TObjFunc
	var_210_bool = 0; // 0x28b PushV
	var_210_bool = 0; // 0x28c MovB
	var_211_bool = 0; var_212_object = Obj(); // 0x28d PushV
	var_212_object = var_1_object; // 0x28e MovT
	func_6169(var_212_object); // 0x28f Call
	if(var_211_bool == 0) goto Label_664; // 0x291 JumpB
	var_219_bool = 0; var_220_object = Obj(); // 0x292 PushV
	var_220_object = var_1_object; // 0x293 MovT
	func_6181(var_220_object); // 0x294 Call
	if(var_219_bool == 0) goto Label_664; // 0x296 JumpB
	var_210_bool = 1; // 0x297 MovB
	
Label_664:
	if(var_210_bool == 0) goto Label_670; // 0x298 JumpB
	var_225_int = 12735; // 0x299 PushI
	var_226_int = 11881; // 0x29a PushI
	var_227_int = 13929; // 0x29b PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x29c TObjFunc
	
Label_670:
	var_228_bool = 0; // 0x29e PushV
	var_228_bool = 0; // 0x29f MovB
	var_229_bool = 0; // 0x2a0 PushV
	var_229_bool = 0; // 0x2a1 MovB
	var_230_bool = 0; // 0x2a2 PushV
	var_230_bool = 0; // 0x2a3 MovB
	var_231_bool = 0; var_232_object = Obj(); // 0x2a4 PushV
	var_232_object = var_1_object; // 0x2a5 MovT
	func_6193(var_232_object); // 0x2a6 Call
	if(var_231_bool == 0) goto Label_687; // 0x2a8 JumpB
	var_237_bool = 0; var_238_object = Obj(); // 0x2a9 PushV
	var_238_object = var_1_object; // 0x2aa MovT
	func_6205(var_238_object); // 0x2ab Call
	if(var_237_bool == 0) goto Label_687; // 0x2ad JumpB
	var_230_bool = 1; // 0x2ae MovB
	
Label_687:
	if(var_230_bool == 0) goto Label_695; // 0x2af JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0x2b0 PushV
	var_244_object = var_1_object; // 0x2b1 MovT
	func_6253(var_244_object); // 0x2b2 Call
	var_249_bool = var_243_bool == 0; // 0x2b4 Not
	if(var_249_bool == 0) goto Label_695; // 0x2b5 JumpB
	var_229_bool = 1; // 0x2b6 MovB
	
Label_695:
	if(var_229_bool == 0) goto Label_703; // 0x2b7 JumpB
	var_250_bool = 0; var_251_object = Obj(); // 0x2b8 PushV
	var_251_object = var_1_object; // 0x2b9 MovT
	func_6265(var_251_object); // 0x2ba Call
	var_256_bool = var_250_bool == 0; // 0x2bc Not
	if(var_256_bool == 0) goto Label_703; // 0x2bd JumpB
	var_228_bool = 1; // 0x2be MovB
	
Label_703:
	if(var_228_bool == 0) goto Label_709; // 0x2bf JumpB
	var_257_int = 12736; // 0x2c0 PushI
	var_258_int = 11904; // 0x2c1 PushI
	var_259_int = 13930; // 0x2c2 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x2c3 TObjFunc
	
Label_709:
	var_260_bool = 0; // 0x2c5 PushV
	var_260_bool = 0; // 0x2c6 MovB
	var_261_bool = 0; var_262_object = Obj(); // 0x2c7 PushV
	var_262_object = var_1_object; // 0x2c8 MovT
	func_6217(var_262_object); // 0x2c9 Call
	if(var_261_bool == 0) goto Label_722; // 0x2cb JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x2cc PushV
	var_268_object = var_1_object; // 0x2cd MovT
	func_5993(var_268_object); // 0x2ce Call
	if(var_267_bool == 0) goto Label_722; // 0x2d0 JumpB
	var_260_bool = 1; // 0x2d1 MovB
	
Label_722:
	if(var_260_bool == 0) goto Label_728; // 0x2d2 JumpB
	var_273_int = 3664; // 0x2d3 PushI
	var_274_int = 3970; // 0x2d4 PushI
	var_275_int = 3969; // 0x2d5 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x2d6 TObjFunc
	
Label_728:
	var_276_bool = 0; var_277_object = Obj(); // 0x2d8 PushV
	var_277_object = var_1_object; // 0x2d9 MovT
	func_6241(var_277_object); // 0x2da Call
	if(var_276_bool == 0) goto Label_738; // 0x2dc JumpB
	var_282_int = 3663; // 0x2dd PushI
	var_283_int = 3972; // 0x2de PushI
	var_284_int = 3968; // 0x2df PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0x2e0 TObjFunc
	
Label_738:
	var_285_int = 13019; // 0x2e2 PushI
	var_286_int = -1; // 0x2e3 PushI
	var_287_int = 14225; // 0x2e4 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x2e5 TObjFunc
	return 0; // 0x2e7 Return
	
Label_744:
	var_288_int = 3972; // 0x2e8 PushI
	var_289_bool = var_30_string == var_288_int; // 0x2e9 Eq
	if(var_289_bool == 0) goto Label_772; // 0x2ea JumpB
	var_290_string = ""; // 0x2eb PushV
	var_290_string = "Neutral"; // 0x2ec MovS
	func_551(var_31_bool, var_290_string); // 0x2ed Call
	var_291_int = 3667; // 0x2ef PushI
	SetMessage(var_291_int); // 0x2f0 TObjFunc
	ClearReplies(); // 0x2f2 TObjFunc
	var_292_int = 3668; // 0x2f4 PushI
	var_293_int = 3975; // 0x2f5 PushI
	var_294_int = 3973; // 0x2f6 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x2f7 TObjFunc
	var_295_int = 3669; // 0x2f9 PushI
	var_296_int = 3975; // 0x2fa PushI
	var_297_int = 3974; // 0x2fb PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x2fc TObjFunc
	var_298_int = 3672; // 0x2fe PushI
	var_299_int = 3991; // 0x2ff PushI
	var_300_int = 3978; // 0x300 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x301 TObjFunc
	return 0; // 0x303 Return
	
Label_772:
	var_301_int = 3991; // 0x304 PushI
	var_302_bool = var_30_string == var_301_int; // 0x305 Eq
	if(var_302_bool == 0) goto Label_790; // 0x306 JumpB
	var_303_string = ""; // 0x307 PushV
	var_303_string = "Neutral"; // 0x308 MovS
	func_551(var_31_bool, var_303_string); // 0x309 Call
	var_304_int = 3683; // 0x30b PushI
	SetMessage(var_304_int); // 0x30c TObjFunc
	ClearReplies(); // 0x30e TObjFunc
	var_305_int = 3684; // 0x310 PushI
	var_306_int = 3972; // 0x311 PushI
	var_307_int = 3992; // 0x312 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x313 TObjFunc
	return 0; // 0x315 Return
	
Label_790:
	var_308_int = 3975; // 0x316 PushI
	var_309_bool = var_30_string == var_308_int; // 0x317 Eq
	if(var_309_bool == 0) goto Label_813; // 0x318 JumpB
	var_310_string = ""; // 0x319 PushV
	var_310_string = "Neutral"; // 0x31a MovS
	func_551(var_31_bool, var_310_string); // 0x31b Call
	var_311_int = 3670; // 0x31d PushI
	SetMessage(var_311_int); // 0x31e TObjFunc
	ClearReplies(); // 0x320 TObjFunc
	var_312_int = 3671; // 0x322 PushI
	var_313_int = 3981; // 0x323 PushI
	var_314_int = 3976; // 0x324 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x325 TObjFunc
	var_315_int = 3673; // 0x327 PushI
	var_316_int = -1; // 0x328 PushI
	var_317_int = 3980; // 0x329 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x32a TObjFunc
	return 0; // 0x32c Return
	
Label_813:
	var_318_int = 3981; // 0x32d PushI
	var_319_bool = var_30_string == var_318_int; // 0x32e Eq
	if(var_319_bool == 0) goto Label_836; // 0x32f JumpB
	var_320_string = ""; // 0x330 PushV
	var_320_string = "Neutral"; // 0x331 MovS
	func_551(var_31_bool, var_320_string); // 0x332 Call
	var_321_int = 3674; // 0x334 PushI
	SetMessage(var_321_int); // 0x335 TObjFunc
	ClearReplies(); // 0x337 TObjFunc
	var_322_int = 3675; // 0x339 PushI
	var_323_int = 3984; // 0x33a PushI
	var_324_int = 3982; // 0x33b PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x33c TObjFunc
	var_325_int = 3676; // 0x33e PushI
	var_326_int = 3984; // 0x33f PushI
	var_327_int = 3983; // 0x340 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x341 TObjFunc
	return 0; // 0x343 Return
	
Label_836:
	var_328_int = 3984; // 0x344 PushI
	var_329_bool = var_30_string == var_328_int; // 0x345 Eq
	if(var_329_bool == 0) goto Label_859; // 0x346 JumpB
	var_330_string = ""; // 0x347 PushV
	var_330_string = "Neutral"; // 0x348 MovS
	func_551(var_31_bool, var_330_string); // 0x349 Call
	var_331_int = 3677; // 0x34b PushI
	SetMessage(var_331_int); // 0x34c TObjFunc
	ClearReplies(); // 0x34e TObjFunc
	var_332_int = 3678; // 0x350 PushI
	var_333_int = 3988; // 0x351 PushI
	var_334_int = 3986; // 0x352 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x353 TObjFunc
	var_335_int = 3679; // 0x355 PushI
	var_336_int = 3988; // 0x356 PushI
	var_337_int = 3987; // 0x357 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x358 TObjFunc
	return 0; // 0x35a Return
	
Label_859:
	var_338_int = 3988; // 0x35b PushI
	var_339_bool = var_30_string == var_338_int; // 0x35c Eq
	if(var_339_bool == 0) goto Label_887; // 0x35d JumpB
	var_340_string = ""; // 0x35e PushV
	var_340_string = "Neutral"; // 0x35f MovS
	func_551(var_31_bool, var_340_string); // 0x360 Call
	var_341_int = 3680; // 0x362 PushI
	SetMessage(var_341_int); // 0x363 TObjFunc
	ClearReplies(); // 0x365 TObjFunc
	var_342_int = 3681; // 0x367 PushI
	var_343_int = -1; // 0x368 PushI
	var_344_int = 3989; // 0x369 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x36a TObjFunc
	var_345_int = 3682; // 0x36c PushI
	var_346_int = -1; // 0x36d PushI
	var_347_int = 3990; // 0x36e PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x36f TObjFunc
	var_348_int = 3685; // 0x371 PushI
	var_349_int = -1; // 0x372 PushI
	var_350_int = 3995; // 0x373 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x374 TObjFunc
	return 0; // 0x376 Return
	
Label_887:
	var_351_int = 3970; // 0x377 PushI
	var_352_bool = var_30_string == var_351_int; // 0x378 Eq
	if(var_352_bool == 0) goto Label_905; // 0x379 JumpB
	var_353_string = ""; // 0x37a PushV
	var_353_string = "Neutral"; // 0x37b MovS
	func_551(var_31_bool, var_353_string); // 0x37c Call
	var_354_int = 3665; // 0x37e PushI
	SetMessage(var_354_int); // 0x37f TObjFunc
	ClearReplies(); // 0x381 TObjFunc
	var_355_int = 3666; // 0x383 PushI
	var_356_int = -1; // 0x384 PushI
	var_357_int = 3971; // 0x385 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x386 TObjFunc
	return 0; // 0x388 Return
	
Label_905:
	var_358_int = 11904; // 0x389 PushI
	var_359_bool = var_30_string == var_358_int; // 0x38a Eq
	if(var_359_bool == 0) goto Label_933; // 0x38b JumpB
	var_360_string = ""; // 0x38c PushV
	var_360_string = "Neutral"; // 0x38d MovS
	func_551(var_31_bool, var_360_string); // 0x38e Call
	var_361_int = 10773; // 0x390 PushI
	SetMessage(var_361_int); // 0x391 TObjFunc
	ClearReplies(); // 0x393 TObjFunc
	var_362_int = 10774; // 0x395 PushI
	var_363_int = 11906; // 0x396 PushI
	var_364_int = 11905; // 0x397 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x398 TObjFunc
	var_365_int = 10789; // 0x39a PushI
	var_366_int = 11906; // 0x39b PushI
	var_367_int = 11923; // 0x39c PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x39d TObjFunc
	var_368_int = 10790; // 0x39f PushI
	var_369_int = 11906; // 0x3a0 PushI
	var_370_int = 11925; // 0x3a1 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x3a2 TObjFunc
	return 0; // 0x3a4 Return
	
Label_933:
	var_371_int = 11906; // 0x3a5 PushI
	var_372_bool = var_30_string == var_371_int; // 0x3a6 Eq
	if(var_372_bool == 0) goto Label_956; // 0x3a7 JumpB
	var_373_string = ""; // 0x3a8 PushV
	var_373_string = "Neutral"; // 0x3a9 MovS
	func_551(var_31_bool, var_373_string); // 0x3aa Call
	var_374_int = 10775; // 0x3ac PushI
	SetMessage(var_374_int); // 0x3ad TObjFunc
	ClearReplies(); // 0x3af TObjFunc
	var_375_int = 10776; // 0x3b1 PushI
	var_376_int = 11908; // 0x3b2 PushI
	var_377_int = 11907; // 0x3b3 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x3b4 TObjFunc
	var_378_int = 10788; // 0x3b6 PushI
	var_379_int = 11908; // 0x3b7 PushI
	var_380_int = 11921; // 0x3b8 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x3b9 TObjFunc
	return 0; // 0x3bb Return
	
Label_956:
	var_381_int = 11908; // 0x3bc PushI
	var_382_bool = var_30_string == var_381_int; // 0x3bd Eq
	if(var_382_bool == 0) goto Label_979; // 0x3be JumpB
	var_383_string = ""; // 0x3bf PushV
	var_383_string = "Neutral"; // 0x3c0 MovS
	func_551(var_31_bool, var_383_string); // 0x3c1 Call
	var_384_int = 10777; // 0x3c3 PushI
	SetMessage(var_384_int); // 0x3c4 TObjFunc
	ClearReplies(); // 0x3c6 TObjFunc
	var_385_int = 10778; // 0x3c8 PushI
	var_386_int = 11910; // 0x3c9 PushI
	var_387_int = 11909; // 0x3ca PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x3cb TObjFunc
	var_388_int = 10787; // 0x3cd PushI
	var_389_int = 11910; // 0x3ce PushI
	var_390_int = 11920; // 0x3cf PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x3d0 TObjFunc
	return 0; // 0x3d2 Return
	
Label_979:
	var_391_int = 11910; // 0x3d3 PushI
	var_392_bool = var_30_string == var_391_int; // 0x3d4 Eq
	if(var_392_bool == 0) goto Label_1007; // 0x3d5 JumpB
	var_393_string = ""; // 0x3d6 PushV
	var_393_string = "Neutral"; // 0x3d7 MovS
	func_551(var_31_bool, var_393_string); // 0x3d8 Call
	var_394_int = 10779; // 0x3da PushI
	SetMessage(var_394_int); // 0x3db TObjFunc
	ClearReplies(); // 0x3dd TObjFunc
	var_395_int = 10780; // 0x3df PushI
	var_396_int = 11912; // 0x3e0 PushI
	var_397_int = 11911; // 0x3e1 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x3e2 TObjFunc
	var_398_int = 10785; // 0x3e4 PushI
	var_399_int = 11912; // 0x3e5 PushI
	var_400_int = 11916; // 0x3e6 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x3e7 TObjFunc
	var_401_int = 10786; // 0x3e9 PushI
	var_402_int = 11912; // 0x3ea PushI
	var_403_int = 11918; // 0x3eb PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x3ec TObjFunc
	return 0; // 0x3ee Return
	
Label_1007:
	var_404_int = 11912; // 0x3ef PushI
	var_405_bool = var_30_string == var_404_int; // 0x3f0 Eq
	if(var_405_bool == 0) goto Label_1035; // 0x3f1 JumpB
	var_406_string = ""; // 0x3f2 PushV
	var_406_string = "Neutral"; // 0x3f3 MovS
	func_551(var_31_bool, var_406_string); // 0x3f4 Call
	var_407_int = 10781; // 0x3f6 PushI
	SetMessage(var_407_int); // 0x3f7 TObjFunc
	ClearReplies(); // 0x3f9 TObjFunc
	var_408_int = 10782; // 0x3fb PushI
	var_409_int = -1; // 0x3fc PushI
	var_410_int = 11913; // 0x3fd PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x3fe TObjFunc
	var_411_int = 10783; // 0x400 PushI
	var_412_int = -1; // 0x401 PushI
	var_413_int = 11914; // 0x402 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x403 TObjFunc
	var_414_int = 10784; // 0x405 PushI
	var_415_int = -1; // 0x406 PushI
	var_416_int = 11915; // 0x407 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x408 TObjFunc
	return 0; // 0x40a Return
	
Label_1035:
	var_417_int = 11881; // 0x40b PushI
	var_418_bool = var_30_string == var_417_int; // 0x40c Eq
	if(var_418_bool == 0) goto Label_1063; // 0x40d JumpB
	var_419_string = ""; // 0x40e PushV
	var_419_string = "Neutral"; // 0x40f MovS
	func_551(var_31_bool, var_419_string); // 0x410 Call
	var_420_int = 10753; // 0x412 PushI
	SetMessage(var_420_int); // 0x413 TObjFunc
	ClearReplies(); // 0x415 TObjFunc
	var_421_int = 10754; // 0x417 PushI
	var_422_int = 11883; // 0x418 PushI
	var_423_int = 11882; // 0x419 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x41a TObjFunc
	var_424_int = 10767; // 0x41c PushI
	var_425_int = 11897; // 0x41d PushI
	var_426_int = 11896; // 0x41e PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x41f TObjFunc
	var_427_int = 10769; // 0x421 PushI
	var_428_int = 11899; // 0x422 PushI
	var_429_int = 11898; // 0x423 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x424 TObjFunc
	return 0; // 0x426 Return
	
Label_1063:
	var_430_int = 11899; // 0x427 PushI
	var_431_bool = var_30_string == var_430_int; // 0x428 Eq
	if(var_431_bool == 0) goto Label_1086; // 0x429 JumpB
	var_432_string = ""; // 0x42a PushV
	var_432_string = "Neutral"; // 0x42b MovS
	func_551(var_31_bool, var_432_string); // 0x42c Call
	var_433_int = 10770; // 0x42e PushI
	SetMessage(var_433_int); // 0x42f TObjFunc
	ClearReplies(); // 0x431 TObjFunc
	var_434_int = 10771; // 0x433 PushI
	var_435_int = 11885; // 0x434 PushI
	var_436_int = 11900; // 0x435 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x436 TObjFunc
	var_437_int = 10772; // 0x438 PushI
	var_438_int = 11897; // 0x439 PushI
	var_439_int = 11902; // 0x43a PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x43b TObjFunc
	return 0; // 0x43d Return
	
Label_1086:
	var_440_int = 11897; // 0x43e PushI
	var_441_bool = var_30_string == var_440_int; // 0x43f Eq
	if(var_441_bool == 0) goto Label_1099; // 0x440 JumpB
	var_442_string = ""; // 0x441 PushV
	var_442_string = "Neutral"; // 0x442 MovS
	func_551(var_31_bool, var_442_string); // 0x443 Call
	var_443_int = 10768; // 0x445 PushI
	SetMessage(var_443_int); // 0x446 TObjFunc
	ClearReplies(); // 0x448 TObjFunc
	return 0; // 0x44a Return
	
Label_1099:
	var_444_int = 11883; // 0x44b PushI
	var_445_bool = var_30_string == var_444_int; // 0x44c Eq
	if(var_445_bool == 0) goto Label_1122; // 0x44d JumpB
	var_446_string = ""; // 0x44e PushV
	var_446_string = "Neutral"; // 0x44f MovS
	func_551(var_31_bool, var_446_string); // 0x450 Call
	var_447_int = 10755; // 0x452 PushI
	SetMessage(var_447_int); // 0x453 TObjFunc
	ClearReplies(); // 0x455 TObjFunc
	var_448_int = 10756; // 0x457 PushI
	var_449_int = 11885; // 0x458 PushI
	var_450_int = 11884; // 0x459 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x45a TObjFunc
	var_451_int = 10766; // 0x45c PushI
	var_452_int = -1; // 0x45d PushI
	var_453_int = 11895; // 0x45e PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x45f TObjFunc
	return 0; // 0x461 Return
	
Label_1122:
	var_454_int = 11885; // 0x462 PushI
	var_455_bool = var_30_string == var_454_int; // 0x463 Eq
	if(var_455_bool == 0) goto Label_1145; // 0x464 JumpB
	var_456_string = ""; // 0x465 PushV
	var_456_string = "Neutral"; // 0x466 MovS
	func_551(var_31_bool, var_456_string); // 0x467 Call
	var_457_int = 10757; // 0x469 PushI
	SetMessage(var_457_int); // 0x46a TObjFunc
	ClearReplies(); // 0x46c TObjFunc
	var_458_int = 10758; // 0x46e PushI
	var_459_int = 11887; // 0x46f PushI
	var_460_int = 11886; // 0x470 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x471 TObjFunc
	var_461_int = 10765; // 0x473 PushI
	var_462_int = -1; // 0x474 PushI
	var_463_int = 11894; // 0x475 PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x476 TObjFunc
	return 0; // 0x478 Return
	
Label_1145:
	var_464_int = 11887; // 0x479 PushI
	var_465_bool = var_30_string == var_464_int; // 0x47a Eq
	if(var_465_bool == 0) goto Label_1168; // 0x47b JumpB
	var_466_string = ""; // 0x47c PushV
	var_466_string = "Grief"; // 0x47d MovS
	func_551(var_31_bool, var_466_string); // 0x47e Call
	var_467_int = 10759; // 0x480 PushI
	SetMessage(var_467_int); // 0x481 TObjFunc
	ClearReplies(); // 0x483 TObjFunc
	var_468_int = 10760; // 0x485 PushI
	var_469_int = 11889; // 0x486 PushI
	var_470_int = 11888; // 0x487 PushI
	AddReply(var_468_int, var_469_int, var_470_int); // 0x488 TObjFunc
	var_471_int = 10764; // 0x48a PushI
	var_472_int = 11889; // 0x48b PushI
	var_473_int = 11892; // 0x48c PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x48d TObjFunc
	return 0; // 0x48f Return
	
Label_1168:
	var_474_int = 11889; // 0x490 PushI
	var_475_bool = var_30_string == var_474_int; // 0x491 Eq
	if(var_475_bool == 0) goto Label_1191; // 0x492 JumpB
	var_476_string = ""; // 0x493 PushV
	var_476_string = "Neutral"; // 0x494 MovS
	func_551(var_31_bool, var_476_string); // 0x495 Call
	var_477_int = 10761; // 0x497 PushI
	SetMessage(var_477_int); // 0x498 TObjFunc
	ClearReplies(); // 0x49a TObjFunc
	var_478_int = 10762; // 0x49c PushI
	var_479_int = -1; // 0x49d PushI
	var_480_int = 11890; // 0x49e PushI
	AddReply(var_478_int, var_479_int, var_480_int); // 0x49f TObjFunc
	var_481_int = 10763; // 0x4a1 PushI
	var_482_int = -1; // 0x4a2 PushI
	var_483_int = 11891; // 0x4a3 PushI
	AddReply(var_481_int, var_482_int, var_483_int); // 0x4a4 TObjFunc
	return 0; // 0x4a6 Return
	
Label_1191:
	var_3_string = 1; // 0x4a7 TMovB
	var_484_bool = 0; // 0x4a8 PushV
	func_5101(var_484_bool); // 0x4a9 Call
	if(var_484_bool == 0) goto Label_1199; // 0x4ab JumpB
	lshStopAnimation(); // 0x4ac Func
	goto Label_1201; // 0x4ae Jump
	
Label_1201:
	return 0; // 0x4b1 Return
	
Label_1199:
	StopAnimation(); // 0x4af Func
	
Label_1203:
	return 0; // 0x4b3 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0x642 PushI
	if(var_32_int == 0) goto Label_2484; // 0x643 JumpB
	func_4989(); // 0x645 Call
	var_34_int = 6898; // 0x647 PushI
	var_35_bool = var_31_bool == var_34_int; // 0x648 Eq
	if(var_35_bool == 0) goto Label_1615; // 0x649 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x64a PushV
	var_36_object = var_1_object; // 0x64b MovT
	var_37_object = var_0_object; // 0x64c MovT
	func_5103(); // 0x64d Call
	
Label_1615:
	var_40_int = 6899; // 0x64f PushI
	var_41_bool = var_31_bool == var_40_int; // 0x650 Eq
	if(var_41_bool == 0) goto Label_1623; // 0x651 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x652 PushV
	var_42_object = var_1_object; // 0x653 MovT
	var_43_object = var_0_object; // 0x654 MovT
	func_5103(); // 0x655 Call
	
Label_1623:
	var_44_int = 9508; // 0x657 PushI
	var_45_bool = var_31_bool == var_44_int; // 0x658 Eq
	if(var_45_bool == 0) goto Label_1636; // 0x659 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x65a PushV
	var_46_object = var_1_object; // 0x65b MovT
	var_47_object = var_0_object; // 0x65c MovT
	func_5331(); // 0x65d Call
	var_75_object = Obj(); var_76_object = Obj(); // 0x65f PushV
	var_75_object = var_1_object; // 0x660 MovT
	var_76_object = var_0_object; // 0x661 MovT
	func_5109(); // 0x662 Call
	
Label_1636:
	var_79_int = 8859; // 0x664 PushI
	var_80_bool = var_31_bool == var_79_int; // 0x665 Eq
	if(var_80_bool == 0) goto Label_1644; // 0x666 JumpB
	var_81_object = Obj(); var_82_object = Obj(); // 0x667 PushV
	var_81_object = var_1_object; // 0x668 MovT
	var_82_object = var_0_object; // 0x669 MovT
	func_5115(); // 0x66a Call
	
Label_1644:
	var_85_int = 8862; // 0x66c PushI
	var_86_bool = var_31_bool == var_85_int; // 0x66d Eq
	if(var_86_bool == 0) goto Label_1652; // 0x66e JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0x66f PushV
	var_87_object = var_1_object; // 0x670 MovT
	var_88_object = var_0_object; // 0x671 MovT
	func_5743(); // 0x672 Call
	
Label_1652:
	var_91_int = 8865; // 0x674 PushI
	var_92_bool = var_31_bool == var_91_int; // 0x675 Eq
	if(var_92_bool == 0) goto Label_1660; // 0x676 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0x677 PushV
	var_93_object = var_1_object; // 0x678 MovT
	var_94_object = var_0_object; // 0x679 MovT
	func_5749(); // 0x67a Call
	
Label_1660:
	var_97_int = 8869; // 0x67c PushI
	var_98_bool = var_31_bool == var_97_int; // 0x67d Eq
	if(var_98_bool == 0) goto Label_1668; // 0x67e JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x67f PushV
	var_99_object = var_1_object; // 0x680 MovT
	var_100_object = var_0_object; // 0x681 MovT
	func_5755(); // 0x682 Call
	
Label_1668:
	var_103_int = 8870; // 0x684 PushI
	var_104_bool = var_31_bool == var_103_int; // 0x685 Eq
	if(var_104_bool == 0) goto Label_1676; // 0x686 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x687 PushV
	var_105_object = var_1_object; // 0x688 MovT
	var_106_object = var_0_object; // 0x689 MovT
	func_5761(); // 0x68a Call
	
Label_1676:
	var_109_int = 8874; // 0x68c PushI
	var_110_bool = var_31_bool == var_109_int; // 0x68d Eq
	if(var_110_bool == 0) goto Label_1684; // 0x68e JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x68f PushV
	var_111_object = var_1_object; // 0x690 MovT
	var_112_object = var_0_object; // 0x691 MovT
	func_5767(); // 0x692 Call
	
Label_1684:
	var_115_int = 8875; // 0x694 PushI
	var_116_bool = var_31_bool == var_115_int; // 0x695 Eq
	if(var_116_bool == 0) goto Label_1692; // 0x696 JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0x697 PushV
	var_117_object = var_1_object; // 0x698 MovT
	var_118_object = var_0_object; // 0x699 MovT
	func_5773(); // 0x69a Call
	
Label_1692:
	var_121_int = 5972; // 0x69c PushI
	var_122_bool = var_30_string == var_121_int; // 0x69d Eq
	if(var_122_bool == 0) goto Label_1975; // 0x69e JumpB
	var_123_bool = 0; // 0x69f PushV
	var_123_bool = 0; // 0x6a0 MovB
	var_124_bool = 0; // 0x6a1 PushV
	var_124_bool = 0; // 0x6a2 MovB
	var_125_bool = 0; // 0x6a3 PushV
	var_125_bool = 0; // 0x6a4 MovB
	var_126_bool = 0; // 0x6a5 PushV
	var_126_bool = 0; // 0x6a6 MovB
	var_127_bool = 0; var_128_object = Obj(); // 0x6a7 PushV
	var_128_object = var_1_object; // 0x6a8 MovT
	func_5846(var_128_object); // 0x6a9 Call
	if(var_127_bool == 0) goto Label_1715; // 0x6ab JumpB
	var_135_bool = 0; var_136_object = Obj(); // 0x6ac PushV
	var_136_object = var_1_object; // 0x6ad MovT
	func_5894(var_136_object); // 0x6ae Call
	var_141_bool = var_135_bool == 0; // 0x6b0 Not
	if(var_141_bool == 0) goto Label_1715; // 0x6b1 JumpB
	var_126_bool = 1; // 0x6b2 MovB
	
Label_1715:
	if(var_126_bool == 0) goto Label_1723; // 0x6b3 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x6b4 PushV
	var_143_object = var_1_object; // 0x6b5 MovT
	func_5882(var_143_object); // 0x6b6 Call
	var_148_bool = var_142_bool == 0; // 0x6b8 Not
	if(var_148_bool == 0) goto Label_1723; // 0x6b9 JumpB
	var_125_bool = 1; // 0x6ba MovB
	
Label_1723:
	if(var_125_bool == 0) goto Label_1730; // 0x6bb JumpB
	var_149_bool = 0; var_150_object = Obj(); // 0x6bc PushV
	var_150_object = var_1_object; // 0x6bd MovT
	func_6005(var_150_object); // 0x6be Call
	if(var_149_bool == 0) goto Label_1730; // 0x6c0 JumpB
	var_124_bool = 1; // 0x6c1 MovB
	
Label_1730:
	if(var_124_bool == 0) goto Label_1738; // 0x6c2 JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x6c3 PushV
	var_156_object = var_1_object; // 0x6c4 MovT
	func_5858(var_156_object); // 0x6c5 Call
	var_161_bool = var_155_bool == 0; // 0x6c7 Not
	if(var_161_bool == 0) goto Label_1738; // 0x6c8 JumpB
	var_123_bool = 1; // 0x6c9 MovB
	
Label_1738:
	if(var_123_bool == 0) goto Label_1759; // 0x6ca JumpB
	var_162_string = ""; // 0x6cb PushV
	var_162_string = "Neutral"; // 0x6cc MovS
	func_1585(var_31_bool, var_162_string); // 0x6cd Call
	var_177_int = 5423; // 0x6cf PushI
	SetMessage(var_177_int); // 0x6d0 TObjFunc
	ClearReplies(); // 0x6d2 TObjFunc
	var_178_int = 5447; // 0x6d4 PushI
	var_179_int = 6886; // 0x6d5 PushI
	var_180_int = 6001; // 0x6d6 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x6d7 TObjFunc
	var_181_int = 6231; // 0x6d9 PushI
	var_182_int = 6893; // 0x6da PushI
	var_183_int = 6892; // 0x6db PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x6dc TObjFunc
	return 0; // 0x6de Return
	
Label_1759:
	var_184_bool = 0; // 0x6df PushV
	var_184_bool = 0; // 0x6e0 MovB
	var_185_bool = 0; // 0x6e1 PushV
	var_185_bool = 0; // 0x6e2 MovB
	var_186_bool = 0; // 0x6e3 PushV
	var_186_bool = 0; // 0x6e4 MovB
	var_187_bool = 0; var_188_object = Obj(); // 0x6e5 PushV
	var_188_object = var_1_object; // 0x6e6 MovT
	func_5858(var_188_object); // 0x6e7 Call
	if(var_187_bool == 0) goto Label_1777; // 0x6e9 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x6ea PushV
	var_190_object = var_1_object; // 0x6eb MovT
	func_5894(var_190_object); // 0x6ec Call
	var_191_bool = var_189_bool == 0; // 0x6ee Not
	if(var_191_bool == 0) goto Label_1777; // 0x6ef JumpB
	var_186_bool = 1; // 0x6f0 MovB
	
Label_1777:
	if(var_186_bool == 0) goto Label_1785; // 0x6f1 JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x6f2 PushV
	var_193_object = var_1_object; // 0x6f3 MovT
	func_5882(var_193_object); // 0x6f4 Call
	var_194_bool = var_192_bool == 0; // 0x6f6 Not
	if(var_194_bool == 0) goto Label_1785; // 0x6f7 JumpB
	var_185_bool = 1; // 0x6f8 MovB
	
Label_1785:
	if(var_185_bool == 0) goto Label_1793; // 0x6f9 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x6fa PushV
	var_196_object = var_1_object; // 0x6fb MovT
	func_6005(var_196_object); // 0x6fc Call
	var_197_bool = var_195_bool == 0; // 0x6fe Not
	if(var_197_bool == 0) goto Label_1793; // 0x6ff JumpB
	var_184_bool = 1; // 0x700 MovB
	
Label_1793:
	if(var_184_bool == 0) goto Label_1809; // 0x701 JumpB
	var_198_string = ""; // 0x702 PushV
	var_198_string = "Neutral"; // 0x703 MovS
	func_1585(var_31_bool, var_198_string); // 0x704 Call
	var_199_int = 8666; // 0x706 PushI
	SetMessage(var_199_int); // 0x707 TObjFunc
	ClearReplies(); // 0x709 TObjFunc
	var_200_int = 8667; // 0x70b PushI
	var_201_int = 9493; // 0x70c PushI
	var_202_int = 9492; // 0x70d PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x70e TObjFunc
	return 0; // 0x710 Return
	
Label_1809:
	var_203_string = ""; // 0x711 PushV
	var_203_string = "Neutral"; // 0x712 MovS
	func_1585(var_31_bool, var_203_string); // 0x713 Call
	var_204_int = 8034; // 0x715 PushI
	SetMessage(var_204_int); // 0x716 TObjFunc
	ClearReplies(); // 0x718 TObjFunc
	var_205_bool = 0; // 0x71a PushV
	var_205_bool = 1; // 0x71b MovB
	var_206_bool = 0; // 0x71c PushV
	var_206_bool = 0; // 0x71d MovB
	var_207_bool = 0; var_208_object = Obj(); // 0x71e PushV
	var_208_object = var_1_object; // 0x71f MovT
	func_6017(var_207_bool, var_208_object); // 0x720 Call
	if(var_207_bool == 0) goto Label_1833; // 0x722 JumpB
	var_218_bool = 0; var_219_object = Obj(); // 0x723 PushV
	var_219_object = var_1_object; // 0x724 MovT
	func_5870(var_219_object); // 0x725 Call
	if(var_218_bool == 0) goto Label_1833; // 0x727 JumpB
	var_206_bool = 1; // 0x728 MovB
	
Label_1833:
	if(var_206_bool == 0) goto Label_1849; // 0x729 JumpB
	var_224_bool = 0; // 0x72a PushV
	var_224_bool = 0; // 0x72b MovB
	var_225_bool = 0; var_226_object = Obj(); // 0x72c PushV
	var_226_object = var_1_object; // 0x72d MovT
	func_6075(var_225_bool, var_226_object); // 0x72e Call
	if(var_225_bool == 0) goto Label_1847; // 0x730 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x731 PushV
	var_237_object = var_1_object; // 0x732 MovT
	func_5870(var_237_object); // 0x733 Call
	if(var_236_bool == 0) goto Label_1847; // 0x735 JumpB
	var_224_bool = 1; // 0x736 MovB
	
Label_1847:
	if(var_224_bool == 0) goto Label_1849; // 0x737 JumpB
	var_205_bool = 0; // 0x738 MovB
	
Label_1849:
	if(var_205_bool == 0) goto Label_1855; // 0x739 JumpB
	var_238_int = 8036; // 0x73a PushI
	var_239_int = 5976; // 0x73b PushI
	var_240_int = 8859; // 0x73c PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x73d TObjFunc
	
Label_1855:
	var_241_bool = 0; // 0x73f PushV
	var_241_bool = 0; // 0x740 MovB
	var_242_bool = 0; var_243_object = Obj(); // 0x741 PushV
	var_243_object = var_1_object; // 0x742 MovT
	func_6385(var_243_object); // 0x743 Call
	if(var_242_bool == 0) goto Label_1868; // 0x745 JumpB
	var_248_bool = 0; var_249_object = Obj(); // 0x746 PushV
	var_249_object = var_1_object; // 0x747 MovT
	func_6301(var_249_object); // 0x748 Call
	if(var_248_bool == 0) goto Label_1868; // 0x74a JumpB
	var_241_bool = 1; // 0x74b MovB
	
Label_1868:
	if(var_241_bool == 0) goto Label_1874; // 0x74c JumpB
	var_254_int = 8039; // 0x74d PushI
	var_255_int = 5991; // 0x74e PushI
	var_256_int = 8862; // 0x74f PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x750 TObjFunc
	
Label_1874:
	var_257_bool = 0; // 0x752 PushV
	var_257_bool = 0; // 0x753 MovB
	var_258_bool = 0; var_259_object = Obj(); // 0x754 PushV
	var_259_object = var_1_object; // 0x755 MovT
	func_6277(var_259_object); // 0x756 Call
	if(var_258_bool == 0) goto Label_1887; // 0x758 JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x759 PushV
	var_265_object = var_1_object; // 0x75a MovT
	func_6313(var_265_object); // 0x75b Call
	if(var_264_bool == 0) goto Label_1887; // 0x75d JumpB
	var_257_bool = 1; // 0x75e MovB
	
Label_1887:
	if(var_257_bool == 0) goto Label_1893; // 0x75f JumpB
	var_270_int = 8042; // 0x760 PushI
	var_271_int = 8884; // 0x761 PushI
	var_272_int = 8865; // 0x762 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x763 TObjFunc
	
Label_1893:
	var_273_bool = 0; // 0x765 PushV
	var_273_bool = 0; // 0x766 MovB
	var_274_bool = 0; var_275_object = Obj(); // 0x767 PushV
	var_275_object = var_1_object; // 0x768 MovT
	func_6289(var_275_object); // 0x769 Call
	if(var_274_bool == 0) goto Label_1906; // 0x76b JumpB
	var_280_bool = 0; var_281_object = Obj(); // 0x76c PushV
	var_281_object = var_1_object; // 0x76d MovT
	func_6325(var_281_object); // 0x76e Call
	if(var_280_bool == 0) goto Label_1906; // 0x770 JumpB
	var_273_bool = 1; // 0x771 MovB
	
Label_1906:
	if(var_273_bool == 0) goto Label_1912; // 0x772 JumpB
	var_286_int = 8046; // 0x773 PushI
	var_287_int = 8885; // 0x774 PushI
	var_288_int = 8869; // 0x775 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x776 TObjFunc
	
Label_1912:
	var_289_bool = 0; // 0x778 PushV
	var_289_bool = 0; // 0x779 MovB
	var_290_bool = 0; var_291_object = Obj(); // 0x77a PushV
	var_291_object = var_1_object; // 0x77b MovT
	func_6229(var_291_object); // 0x77c Call
	if(var_290_bool == 0) goto Label_1925; // 0x77e JumpB
	var_296_bool = 0; var_297_object = Obj(); // 0x77f PushV
	var_297_object = var_1_object; // 0x780 MovT
	func_6337(var_297_object); // 0x781 Call
	if(var_296_bool == 0) goto Label_1925; // 0x783 JumpB
	var_289_bool = 1; // 0x784 MovB
	
Label_1925:
	if(var_289_bool == 0) goto Label_1931; // 0x785 JumpB
	var_302_int = 8047; // 0x786 PushI
	var_303_int = 8886; // 0x787 PushI
	var_304_int = 8870; // 0x788 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x789 TObjFunc
	
Label_1931:
	var_305_bool = 0; // 0x78b PushV
	var_305_bool = 0; // 0x78c MovB
	var_306_bool = 0; var_307_object = Obj(); // 0x78d PushV
	var_307_object = var_1_object; // 0x78e MovT
	func_6373(var_307_object); // 0x78f Call
	if(var_306_bool == 0) goto Label_1944; // 0x791 JumpB
	var_312_bool = 0; var_313_object = Obj(); // 0x792 PushV
	var_313_object = var_1_object; // 0x793 MovT
	func_6349(var_313_object); // 0x794 Call
	if(var_312_bool == 0) goto Label_1944; // 0x796 JumpB
	var_305_bool = 1; // 0x797 MovB
	
Label_1944:
	if(var_305_bool == 0) goto Label_1950; // 0x798 JumpB
	var_318_int = 8051; // 0x799 PushI
	var_319_int = 8887; // 0x79a PushI
	var_320_int = 8874; // 0x79b PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x79c TObjFunc
	
Label_1950:
	var_321_bool = 0; // 0x79e PushV
	var_321_bool = 0; // 0x79f MovB
	var_322_bool = 0; var_323_object = Obj(); // 0x7a0 PushV
	var_323_object = var_1_object; // 0x7a1 MovT
	func_6157(var_323_object); // 0x7a2 Call
	if(var_322_bool == 0) goto Label_1963; // 0x7a4 JumpB
	var_328_bool = 0; var_329_object = Obj(); // 0x7a5 PushV
	var_329_object = var_1_object; // 0x7a6 MovT
	func_6361(var_329_object); // 0x7a7 Call
	if(var_328_bool == 0) goto Label_1963; // 0x7a9 JumpB
	var_321_bool = 1; // 0x7aa MovB
	
Label_1963:
	if(var_321_bool == 0) goto Label_1969; // 0x7ab JumpB
	var_334_int = 8052; // 0x7ac PushI
	var_335_int = 8888; // 0x7ad PushI
	var_336_int = 8875; // 0x7ae PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x7af TObjFunc
	
Label_1969:
	var_337_int = 8709; // 0x7b1 PushI
	var_338_int = -1; // 0x7b2 PushI
	var_339_int = 9546; // 0x7b3 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x7b4 TObjFunc
	return 0; // 0x7b6 Return
	
Label_1975:
	var_340_int = 8888; // 0x7b7 PushI
	var_341_bool = var_30_string == var_340_int; // 0x7b8 Eq
	if(var_341_bool == 0) goto Label_1993; // 0x7b9 JumpB
	var_342_string = ""; // 0x7ba PushV
	var_342_string = "Neutral"; // 0x7bb MovS
	func_1585(var_31_bool, var_342_string); // 0x7bc Call
	var_343_int = 8065; // 0x7be PushI
	SetMessage(var_343_int); // 0x7bf TObjFunc
	ClearReplies(); // 0x7c1 TObjFunc
	var_344_int = 8708; // 0x7c3 PushI
	var_345_int = -1; // 0x7c4 PushI
	var_346_int = 9545; // 0x7c5 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x7c6 TObjFunc
	return 0; // 0x7c8 Return
	
Label_1993:
	var_347_int = 8887; // 0x7c9 PushI
	var_348_bool = var_30_string == var_347_int; // 0x7ca Eq
	if(var_348_bool == 0) goto Label_2011; // 0x7cb JumpB
	var_349_string = ""; // 0x7cc PushV
	var_349_string = "Neutral"; // 0x7cd MovS
	func_1585(var_31_bool, var_349_string); // 0x7ce Call
	var_350_int = 8064; // 0x7d0 PushI
	SetMessage(var_350_int); // 0x7d1 TObjFunc
	ClearReplies(); // 0x7d3 TObjFunc
	var_351_int = 8707; // 0x7d5 PushI
	var_352_int = -1; // 0x7d6 PushI
	var_353_int = 9544; // 0x7d7 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x7d8 TObjFunc
	return 0; // 0x7da Return
	
Label_2011:
	var_354_int = 8886; // 0x7db PushI
	var_355_bool = var_30_string == var_354_int; // 0x7dc Eq
	if(var_355_bool == 0) goto Label_2029; // 0x7dd JumpB
	var_356_string = ""; // 0x7de PushV
	var_356_string = "Neutral"; // 0x7df MovS
	func_1585(var_31_bool, var_356_string); // 0x7e0 Call
	var_357_int = 8063; // 0x7e2 PushI
	SetMessage(var_357_int); // 0x7e3 TObjFunc
	ClearReplies(); // 0x7e5 TObjFunc
	var_358_int = 8706; // 0x7e7 PushI
	var_359_int = -1; // 0x7e8 PushI
	var_360_int = 9543; // 0x7e9 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x7ea TObjFunc
	return 0; // 0x7ec Return
	
Label_2029:
	var_361_int = 8885; // 0x7ed PushI
	var_362_bool = var_30_string == var_361_int; // 0x7ee Eq
	if(var_362_bool == 0) goto Label_2047; // 0x7ef JumpB
	var_363_string = ""; // 0x7f0 PushV
	var_363_string = "Neutral"; // 0x7f1 MovS
	func_1585(var_31_bool, var_363_string); // 0x7f2 Call
	var_364_int = 8062; // 0x7f4 PushI
	SetMessage(var_364_int); // 0x7f5 TObjFunc
	ClearReplies(); // 0x7f7 TObjFunc
	var_365_int = 8705; // 0x7f9 PushI
	var_366_int = -1; // 0x7fa PushI
	var_367_int = 9542; // 0x7fb PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x7fc TObjFunc
	return 0; // 0x7fe Return
	
Label_2047:
	var_368_int = 8884; // 0x7ff PushI
	var_369_bool = var_30_string == var_368_int; // 0x800 Eq
	if(var_369_bool == 0) goto Label_2065; // 0x801 JumpB
	var_370_string = ""; // 0x802 PushV
	var_370_string = "Neutral"; // 0x803 MovS
	func_1585(var_31_bool, var_370_string); // 0x804 Call
	var_371_int = 8061; // 0x806 PushI
	SetMessage(var_371_int); // 0x807 TObjFunc
	ClearReplies(); // 0x809 TObjFunc
	var_372_int = 8704; // 0x80b PushI
	var_373_int = -1; // 0x80c PushI
	var_374_int = 9541; // 0x80d PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x80e TObjFunc
	return 0; // 0x810 Return
	
Label_2065:
	var_375_int = 5991; // 0x811 PushI
	var_376_bool = var_30_string == var_375_int; // 0x812 Eq
	if(var_376_bool == 0) goto Label_2093; // 0x813 JumpB
	var_377_object = Obj(); var_378_object = Obj(); // 0x814 PushV
	var_377_object = var_1_object; // 0x815 MovT
	var_378_object = var_0_object; // 0x816 MovT
	func_5737(); // 0x817 Call
	var_381_string = ""; // 0x819 PushV
	var_381_string = "Neutral"; // 0x81a MovS
	func_1585(var_31_bool, var_381_string); // 0x81b Call
	var_382_int = 5438; // 0x81d PushI
	SetMessage(var_382_int); // 0x81e TObjFunc
	ClearReplies(); // 0x820 TObjFunc
	var_383_int = 5439; // 0x822 PushI
	var_384_int = 5993; // 0x823 PushI
	var_385_int = 5992; // 0x824 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x825 TObjFunc
	var_386_int = 5446; // 0x827 PushI
	var_387_int = -1; // 0x828 PushI
	var_388_int = 6000; // 0x829 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x82a TObjFunc
	return 0; // 0x82c Return
	
Label_2093:
	var_389_int = 5993; // 0x82d PushI
	var_390_bool = var_30_string == var_389_int; // 0x82e Eq
	if(var_390_bool == 0) goto Label_2116; // 0x82f JumpB
	var_391_string = ""; // 0x830 PushV
	var_391_string = "Neutral"; // 0x831 MovS
	func_1585(var_31_bool, var_391_string); // 0x832 Call
	var_392_int = 5440; // 0x834 PushI
	SetMessage(var_392_int); // 0x835 TObjFunc
	ClearReplies(); // 0x837 TObjFunc
	var_393_int = 5441; // 0x839 PushI
	var_394_int = 5995; // 0x83a PushI
	var_395_int = 5994; // 0x83b PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x83c TObjFunc
	var_396_int = 5445; // 0x83e PushI
	var_397_int = 5995; // 0x83f PushI
	var_398_int = 5998; // 0x840 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x841 TObjFunc
	return 0; // 0x843 Return
	
Label_2116:
	var_399_int = 5995; // 0x844 PushI
	var_400_bool = var_30_string == var_399_int; // 0x845 Eq
	if(var_400_bool == 0) goto Label_2139; // 0x846 JumpB
	var_401_string = ""; // 0x847 PushV
	var_401_string = "Neutral"; // 0x848 MovS
	func_1585(var_31_bool, var_401_string); // 0x849 Call
	var_402_int = 5442; // 0x84b PushI
	SetMessage(var_402_int); // 0x84c TObjFunc
	ClearReplies(); // 0x84e TObjFunc
	var_403_int = 5443; // 0x850 PushI
	var_404_int = -1; // 0x851 PushI
	var_405_int = 5996; // 0x852 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x853 TObjFunc
	var_406_int = 5444; // 0x855 PushI
	var_407_int = -1; // 0x856 PushI
	var_408_int = 5997; // 0x857 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x858 TObjFunc
	return 0; // 0x85a Return
	
Label_2139:
	var_409_int = 5976; // 0x85b PushI
	var_410_bool = var_30_string == var_409_int; // 0x85c Eq
	if(var_410_bool == 0) goto Label_2172; // 0x85d JumpB
	var_411_bool = 0; var_412_object = Obj(); // 0x85e PushV
	var_412_object = var_1_object; // 0x85f MovT
	func_5870(var_412_object); // 0x860 Call
	if(var_411_bool == 0) goto Label_2172; // 0x862 JumpB
	var_413_string = ""; // 0x863 PushV
	var_413_string = "Neutral"; // 0x864 MovS
	func_1585(var_31_bool, var_413_string); // 0x865 Call
	var_414_int = 5427; // 0x867 PushI
	SetMessage(var_414_int); // 0x868 TObjFunc
	ClearReplies(); // 0x86a TObjFunc
	var_415_int = 5428; // 0x86c PushI
	var_416_int = 5978; // 0x86d PushI
	var_417_int = 5977; // 0x86e PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x86f TObjFunc
	var_418_int = 5436; // 0x871 PushI
	var_419_int = 5978; // 0x872 PushI
	var_420_int = 5987; // 0x873 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x874 TObjFunc
	var_421_int = 5437; // 0x876 PushI
	var_422_int = 5978; // 0x877 PushI
	var_423_int = 5989; // 0x878 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x879 TObjFunc
	return 0; // 0x87b Return
	
Label_2172:
	var_424_int = 5978; // 0x87c PushI
	var_425_bool = var_30_string == var_424_int; // 0x87d Eq
	if(var_425_bool == 0) goto Label_2200; // 0x87e JumpB
	var_426_string = ""; // 0x87f PushV
	var_426_string = "Neutral"; // 0x880 MovS
	func_1585(var_31_bool, var_426_string); // 0x881 Call
	var_427_int = 5429; // 0x883 PushI
	SetMessage(var_427_int); // 0x884 TObjFunc
	ClearReplies(); // 0x886 TObjFunc
	var_428_int = 5430; // 0x888 PushI
	var_429_int = 5980; // 0x889 PushI
	var_430_int = 5979; // 0x88a PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x88b TObjFunc
	var_431_int = 5434; // 0x88d PushI
	var_432_int = 5980; // 0x88e PushI
	var_433_int = 5983; // 0x88f PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x890 TObjFunc
	var_434_int = 5435; // 0x892 PushI
	var_435_int = 5980; // 0x893 PushI
	var_436_int = 5985; // 0x894 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x895 TObjFunc
	return 0; // 0x897 Return
	
Label_2200:
	var_437_int = 5980; // 0x898 PushI
	var_438_bool = var_30_string == var_437_int; // 0x899 Eq
	if(var_438_bool == 0) goto Label_2223; // 0x89a JumpB
	var_439_string = ""; // 0x89b PushV
	var_439_string = "Neutral"; // 0x89c MovS
	func_1585(var_31_bool, var_439_string); // 0x89d Call
	var_440_int = 5431; // 0x89f PushI
	SetMessage(var_440_int); // 0x8a0 TObjFunc
	ClearReplies(); // 0x8a2 TObjFunc
	var_441_int = 5432; // 0x8a4 PushI
	var_442_int = -1; // 0x8a5 PushI
	var_443_int = 5981; // 0x8a6 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x8a7 TObjFunc
	var_444_int = 5433; // 0x8a9 PushI
	var_445_int = -1; // 0x8aa PushI
	var_446_int = 5982; // 0x8ab PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x8ac TObjFunc
	return 0; // 0x8ae Return
	
Label_2223:
	var_447_int = 9493; // 0x8af PushI
	var_448_bool = var_30_string == var_447_int; // 0x8b0 Eq
	if(var_448_bool == 0) goto Label_2241; // 0x8b1 JumpB
	var_449_string = ""; // 0x8b2 PushV
	var_449_string = "Neutral"; // 0x8b3 MovS
	func_1585(var_31_bool, var_449_string); // 0x8b4 Call
	var_450_int = 8668; // 0x8b6 PushI
	SetMessage(var_450_int); // 0x8b7 TObjFunc
	ClearReplies(); // 0x8b9 TObjFunc
	var_451_int = 8669; // 0x8bb PushI
	var_452_int = 9495; // 0x8bc PushI
	var_453_int = 9494; // 0x8bd PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x8be TObjFunc
	return 0; // 0x8c0 Return
	
Label_2241:
	var_454_int = 9495; // 0x8c1 PushI
	var_455_bool = var_30_string == var_454_int; // 0x8c2 Eq
	if(var_455_bool == 0) goto Label_2259; // 0x8c3 JumpB
	var_456_string = ""; // 0x8c4 PushV
	var_456_string = "Neutral"; // 0x8c5 MovS
	func_1585(var_31_bool, var_456_string); // 0x8c6 Call
	var_457_int = 8670; // 0x8c8 PushI
	SetMessage(var_457_int); // 0x8c9 TObjFunc
	ClearReplies(); // 0x8cb TObjFunc
	var_458_int = 8671; // 0x8cd PushI
	var_459_int = 9497; // 0x8ce PushI
	var_460_int = 9496; // 0x8cf PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x8d0 TObjFunc
	return 0; // 0x8d2 Return
	
Label_2259:
	var_461_int = 9497; // 0x8d3 PushI
	var_462_bool = var_30_string == var_461_int; // 0x8d4 Eq
	if(var_462_bool == 0) goto Label_2277; // 0x8d5 JumpB
	var_463_string = ""; // 0x8d6 PushV
	var_463_string = "Neutral"; // 0x8d7 MovS
	func_1585(var_31_bool, var_463_string); // 0x8d8 Call
	var_464_int = 8672; // 0x8da PushI
	SetMessage(var_464_int); // 0x8db TObjFunc
	ClearReplies(); // 0x8dd TObjFunc
	var_465_int = 8673; // 0x8df PushI
	var_466_int = 9499; // 0x8e0 PushI
	var_467_int = 9498; // 0x8e1 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x8e2 TObjFunc
	return 0; // 0x8e4 Return
	
Label_2277:
	var_468_int = 9499; // 0x8e5 PushI
	var_469_bool = var_30_string == var_468_int; // 0x8e6 Eq
	if(var_469_bool == 0) goto Label_2295; // 0x8e7 JumpB
	var_470_string = ""; // 0x8e8 PushV
	var_470_string = "Neutral"; // 0x8e9 MovS
	func_1585(var_31_bool, var_470_string); // 0x8ea Call
	var_471_int = 8674; // 0x8ec PushI
	SetMessage(var_471_int); // 0x8ed TObjFunc
	ClearReplies(); // 0x8ef TObjFunc
	var_472_int = 8675; // 0x8f1 PushI
	var_473_int = 9501; // 0x8f2 PushI
	var_474_int = 9500; // 0x8f3 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x8f4 TObjFunc
	return 0; // 0x8f6 Return
	
Label_2295:
	var_475_int = 9501; // 0x8f7 PushI
	var_476_bool = var_30_string == var_475_int; // 0x8f8 Eq
	if(var_476_bool == 0) goto Label_2313; // 0x8f9 JumpB
	var_477_string = ""; // 0x8fa PushV
	var_477_string = "Neutral"; // 0x8fb MovS
	func_1585(var_31_bool, var_477_string); // 0x8fc Call
	var_478_int = 8676; // 0x8fe PushI
	SetMessage(var_478_int); // 0x8ff TObjFunc
	ClearReplies(); // 0x901 TObjFunc
	var_479_int = 8677; // 0x903 PushI
	var_480_int = 9503; // 0x904 PushI
	var_481_int = 9502; // 0x905 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x906 TObjFunc
	return 0; // 0x908 Return
	
Label_2313:
	var_482_int = 9503; // 0x909 PushI
	var_483_bool = var_30_string == var_482_int; // 0x90a Eq
	if(var_483_bool == 0) goto Label_2331; // 0x90b JumpB
	var_484_string = ""; // 0x90c PushV
	var_484_string = "Neutral"; // 0x90d MovS
	func_1585(var_31_bool, var_484_string); // 0x90e Call
	var_485_int = 8678; // 0x910 PushI
	SetMessage(var_485_int); // 0x911 TObjFunc
	ClearReplies(); // 0x913 TObjFunc
	var_486_int = 8679; // 0x915 PushI
	var_487_int = 9505; // 0x916 PushI
	var_488_int = 9504; // 0x917 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x918 TObjFunc
	return 0; // 0x91a Return
	
Label_2331:
	var_489_int = 9505; // 0x91b PushI
	var_490_bool = var_30_string == var_489_int; // 0x91c Eq
	if(var_490_bool == 0) goto Label_2349; // 0x91d JumpB
	var_491_string = ""; // 0x91e PushV
	var_491_string = "Neutral"; // 0x91f MovS
	func_1585(var_31_bool, var_491_string); // 0x920 Call
	var_492_int = 8680; // 0x922 PushI
	SetMessage(var_492_int); // 0x923 TObjFunc
	ClearReplies(); // 0x925 TObjFunc
	var_493_int = 8681; // 0x927 PushI
	var_494_int = 9507; // 0x928 PushI
	var_495_int = 9506; // 0x929 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x92a TObjFunc
	return 0; // 0x92c Return
	
Label_2349:
	var_496_int = 9507; // 0x92d PushI
	var_497_bool = var_30_string == var_496_int; // 0x92e Eq
	if(var_497_bool == 0) goto Label_2367; // 0x92f JumpB
	var_498_string = ""; // 0x930 PushV
	var_498_string = "Neutral"; // 0x931 MovS
	func_1585(var_31_bool, var_498_string); // 0x932 Call
	var_499_int = 8682; // 0x934 PushI
	SetMessage(var_499_int); // 0x935 TObjFunc
	ClearReplies(); // 0x937 TObjFunc
	var_500_int = 8683; // 0x939 PushI
	var_501_int = -1; // 0x93a PushI
	var_502_int = 9508; // 0x93b PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x93c TObjFunc
	return 0; // 0x93e Return
	
Label_2367:
	var_503_int = 6893; // 0x93f PushI
	var_504_bool = var_30_string == var_503_int; // 0x940 Eq
	if(var_504_bool == 0) goto Label_2385; // 0x941 JumpB
	var_505_string = ""; // 0x942 PushV
	var_505_string = "Neutral"; // 0x943 MovS
	func_1585(var_31_bool, var_505_string); // 0x944 Call
	var_506_int = 6232; // 0x946 PushI
	SetMessage(var_506_int); // 0x947 TObjFunc
	ClearReplies(); // 0x949 TObjFunc
	var_507_int = 6233; // 0x94b PushI
	var_508_int = 6895; // 0x94c PushI
	var_509_int = 6894; // 0x94d PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x94e TObjFunc
	return 0; // 0x950 Return
	
Label_2385:
	var_510_int = 6895; // 0x951 PushI
	var_511_bool = var_30_string == var_510_int; // 0x952 Eq
	if(var_511_bool == 0) goto Label_2403; // 0x953 JumpB
	var_512_string = ""; // 0x954 PushV
	var_512_string = "Neutral"; // 0x955 MovS
	func_1585(var_31_bool, var_512_string); // 0x956 Call
	var_513_int = 6234; // 0x958 PushI
	SetMessage(var_513_int); // 0x959 TObjFunc
	ClearReplies(); // 0x95b TObjFunc
	var_514_int = 6235; // 0x95d PushI
	var_515_int = 6888; // 0x95e PushI
	var_516_int = 6896; // 0x95f PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0x960 TObjFunc
	return 0; // 0x962 Return
	
Label_2403:
	var_517_int = 6886; // 0x963 PushI
	var_518_bool = var_30_string == var_517_int; // 0x964 Eq
	if(var_518_bool == 0) goto Label_2421; // 0x965 JumpB
	var_519_string = ""; // 0x966 PushV
	var_519_string = "Neutral"; // 0x967 MovS
	func_1585(var_31_bool, var_519_string); // 0x968 Call
	var_520_int = 6225; // 0x96a PushI
	SetMessage(var_520_int); // 0x96b TObjFunc
	ClearReplies(); // 0x96d TObjFunc
	var_521_int = 6226; // 0x96f PushI
	var_522_int = 6888; // 0x970 PushI
	var_523_int = 6887; // 0x971 PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x972 TObjFunc
	return 0; // 0x974 Return
	
Label_2421:
	var_524_int = 6888; // 0x975 PushI
	var_525_bool = var_30_string == var_524_int; // 0x976 Eq
	if(var_525_bool == 0) goto Label_2449; // 0x977 JumpB
	var_526_string = ""; // 0x978 PushV
	var_526_string = "Neutral"; // 0x979 MovS
	func_1585(var_31_bool, var_526_string); // 0x97a Call
	var_527_int = 6227; // 0x97c PushI
	SetMessage(var_527_int); // 0x97d TObjFunc
	ClearReplies(); // 0x97f TObjFunc
	var_528_int = 6229; // 0x981 PushI
	var_529_int = 6891; // 0x982 PushI
	var_530_int = 6890; // 0x983 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x984 TObjFunc
	var_531_bool = 0; var_532_object = Obj(); // 0x986 PushV
	var_532_object = var_1_object; // 0x987 MovT
	func_5834(var_532_object); // 0x988 Call
	if(var_531_bool == 0) goto Label_2448; // 0x98a JumpB
	var_537_int = 6228; // 0x98b PushI
	var_538_int = 6891; // 0x98c PushI
	var_539_int = 6889; // 0x98d PushI
	AddReply(var_537_int, var_538_int, var_539_int); // 0x98e TObjFunc
	
Label_2448:
	return 0; // 0x990 Return
	
Label_2449:
	var_540_int = 6891; // 0x991 PushI
	var_541_bool = var_30_string == var_540_int; // 0x992 Eq
	if(var_541_bool == 0) goto Label_2472; // 0x993 JumpB
	var_542_string = ""; // 0x994 PushV
	var_542_string = "Neutral"; // 0x995 MovS
	func_1585(var_31_bool, var_542_string); // 0x996 Call
	var_543_int = 6230; // 0x998 PushI
	SetMessage(var_543_int); // 0x999 TObjFunc
	ClearReplies(); // 0x99b TObjFunc
	var_544_int = 6236; // 0x99d PushI
	var_545_int = -1; // 0x99e PushI
	var_546_int = 6898; // 0x99f PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x9a0 TObjFunc
	var_547_int = 6237; // 0x9a2 PushI
	var_548_int = -1; // 0x9a3 PushI
	var_549_int = 6899; // 0x9a4 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x9a5 TObjFunc
	return 0; // 0x9a7 Return
	
Label_2472:
	var_3_string = 1; // 0x9a8 TMovB
	var_550_bool = 0; // 0x9a9 PushV
	func_5101(var_550_bool); // 0x9aa Call
	if(var_550_bool == 0) goto Label_2480; // 0x9ac JumpB
	lshStopAnimation(); // 0x9ad Func
	goto Label_2482; // 0x9af Jump
	
Label_2482:
	return 0; // 0x9b2 Return
	
Label_2480:
	StopAnimation(); // 0x9b0 Func
	
Label_2484:
	return 0; // 0x9b4 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xad0 PushI
	if(var_32_int == 0) goto Label_3458; // 0xad1 JumpB
	func_4989(); // 0xad3 Call
	var_34_int = 7604; // 0xad5 PushI
	var_35_bool = var_31_bool == var_34_int; // 0xad6 Eq
	if(var_35_bool == 0) goto Label_2786; // 0xad7 JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xad8 PushV
	var_36_object = var_1_object; // 0xad9 MovT
	var_37_object = var_0_object; // 0xada MovT
	func_5127(); // 0xadb Call
	var_40_object = Obj(); var_41_object = Obj(); // 0xadd PushV
	var_40_object = var_1_object; // 0xade MovT
	var_41_object = var_0_object; // 0xadf MovT
	func_5145(); // 0xae0 Call
	
Label_2786:
	var_117_int = 8158; // 0xae2 PushI
	var_118_bool = var_31_bool == var_117_int; // 0xae3 Eq
	if(var_118_bool == 0) goto Label_2799; // 0xae4 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0xae5 PushV
	var_119_object = var_1_object; // 0xae6 MovT
	var_120_object = var_0_object; // 0xae7 MovT
	func_5127(); // 0xae8 Call
	var_121_object = Obj(); var_122_object = Obj(); // 0xaea PushV
	var_121_object = var_1_object; // 0xaeb MovT
	var_122_object = var_0_object; // 0xaec MovT
	func_5145(); // 0xaed Call
	
Label_2799:
	var_123_int = 8155; // 0xaef PushI
	var_124_bool = var_31_bool == var_123_int; // 0xaf0 Eq
	if(var_124_bool == 0) goto Label_2807; // 0xaf1 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0xaf2 PushV
	var_125_object = var_1_object; // 0xaf3 MovT
	var_126_object = var_0_object; // 0xaf4 MovT
	func_5133(); // 0xaf5 Call
	
Label_2807:
	var_129_int = 8161; // 0xaf7 PushI
	var_130_bool = var_31_bool == var_129_int; // 0xaf8 Eq
	if(var_130_bool == 0) goto Label_2825; // 0xaf9 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0xafa PushV
	var_131_object = var_1_object; // 0xafb MovT
	var_132_object = var_0_object; // 0xafc MovT
	func_5133(); // 0xafd Call
	var_133_object = Obj(); var_134_object = Obj(); // 0xaff PushV
	var_133_object = var_1_object; // 0xb00 MovT
	var_134_object = var_0_object; // 0xb01 MovT
	func_5234(); // 0xb02 Call
	var_179_object = Obj(); var_180_object = Obj(); // 0xb04 PushV
	var_179_object = var_1_object; // 0xb05 MovT
	var_180_object = var_0_object; // 0xb06 MovT
	func_5318(); // 0xb07 Call
	
Label_2825:
	var_183_int = 8165; // 0xb09 PushI
	var_184_bool = var_31_bool == var_183_int; // 0xb0a Eq
	if(var_184_bool == 0) goto Label_2848; // 0xb0b JumpB
	var_185_object = Obj(); var_186_object = Obj(); // 0xb0c PushV
	var_185_object = var_1_object; // 0xb0d MovT
	var_186_object = var_0_object; // 0xb0e MovT
	func_5139(); // 0xb0f Call
	var_189_object = Obj(); var_190_object = Obj(); // 0xb11 PushV
	var_189_object = var_1_object; // 0xb12 MovT
	var_190_object = var_0_object; // 0xb13 MovT
	func_5324(); // 0xb14 Call
	var_194_object = Obj(); var_195_object = Obj(); // 0xb16 PushV
	var_194_object = var_1_object; // 0xb17 MovT
	var_195_object = var_0_object; // 0xb18 MovT
	func_5202(); // 0xb19 Call
	var_220_object = Obj(); var_221_object = Obj(); // 0xb1b PushV
	var_220_object = var_1_object; // 0xb1c MovT
	var_221_object = var_0_object; // 0xb1d MovT
	func_5779(); // 0xb1e Call
	
Label_2848:
	var_246_int = 7599; // 0xb20 PushI
	var_247_bool = var_30_string == var_246_int; // 0xb21 Eq
	if(var_247_bool == 0) goto Label_3016; // 0xb22 JumpB
	var_248_bool = 0; // 0xb23 PushV
	var_248_bool = 0; // 0xb24 MovB
	var_249_bool = 0; var_250_object = Obj(); // 0xb25 PushV
	var_250_object = var_1_object; // 0xb26 MovT
	func_5906(var_250_object); // 0xb27 Call
	if(var_249_bool == 0) goto Label_2864; // 0xb29 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0xb2a PushV
	var_258_object = var_1_object; // 0xb2b MovT
	func_5942(var_258_object); // 0xb2c Call
	if(var_257_bool == 0) goto Label_2864; // 0xb2e JumpB
	var_248_bool = 1; // 0xb2f MovB
	
Label_2864:
	if(var_248_bool == 0) goto Label_2885; // 0xb30 JumpB
	var_263_string = ""; // 0xb31 PushV
	var_263_string = "Neutral"; // 0xb32 MovS
	func_2751(var_31_bool, var_263_string); // 0xb33 Call
	var_278_int = 6893; // 0xb35 PushI
	SetMessage(var_278_int); // 0xb36 TObjFunc
	ClearReplies(); // 0xb38 TObjFunc
	var_279_int = 7378; // 0xb3a PushI
	var_280_int = 8140; // 0xb3b PushI
	var_281_int = 8139; // 0xb3c PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xb3d TObjFunc
	var_282_int = 7384; // 0xb3f PushI
	var_283_int = 8140; // 0xb40 PushI
	var_284_int = 8145; // 0xb41 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xb42 TObjFunc
	return 0; // 0xb44 Return
	
Label_2885:
	var_285_string = ""; // 0xb45 PushV
	var_285_string = "Neutral"; // 0xb46 MovS
	func_2751(var_31_bool, var_285_string); // 0xb47 Call
	var_286_int = 7377; // 0xb49 PushI
	SetMessage(var_286_int); // 0xb4a TObjFunc
	ClearReplies(); // 0xb4c TObjFunc
	var_287_bool = 0; // 0xb4e PushV
	var_287_bool = 0; // 0xb4f MovB
	var_288_bool = 0; // 0xb50 PushV
	var_288_bool = 0; // 0xb51 MovB
	var_289_bool = 0; var_290_object = Obj(); // 0xb52 PushV
	var_290_object = var_1_object; // 0xb53 MovT
	func_5918(var_290_object); // 0xb54 Call
	if(var_289_bool == 0) goto Label_2909; // 0xb56 JumpB
	var_295_bool = 0; var_296_object = Obj(); // 0xb57 PushV
	var_296_object = var_1_object; // 0xb58 MovT
	func_5981(var_296_object); // 0xb59 Call
	if(var_295_bool == 0) goto Label_2909; // 0xb5b JumpB
	var_288_bool = 1; // 0xb5c MovB
	
Label_2909:
	if(var_288_bool == 0) goto Label_2916; // 0xb5d JumpB
	var_301_bool = 0; var_302_object = Obj(); // 0xb5e PushV
	var_302_object = var_1_object; // 0xb5f MovT
	func_5959(var_301_bool, var_302_object); // 0xb60 Call
	if(var_301_bool == 0) goto Label_2916; // 0xb62 JumpB
	var_287_bool = 1; // 0xb63 MovB
	
Label_2916:
	if(var_287_bool == 0) goto Label_2922; // 0xb64 JumpB
	var_316_int = 6900; // 0xb65 PushI
	var_317_int = 7607; // 0xb66 PushI
	var_318_int = 7606; // 0xb67 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xb68 TObjFunc
	
Label_2922:
	var_319_bool = 0; // 0xb6a PushV
	var_319_bool = 0; // 0xb6b MovB
	var_320_bool = 0; var_321_object = Obj(); // 0xb6c PushV
	var_321_object = var_1_object; // 0xb6d MovT
	func_5930(var_321_object); // 0xb6e Call
	if(var_320_bool == 0) goto Label_2935; // 0xb70 JumpB
	var_326_bool = 0; var_327_object = Obj(); // 0xb71 PushV
	var_327_object = var_1_object; // 0xb72 MovT
	func_5959(var_326_bool, var_327_object); // 0xb73 Call
	if(var_326_bool == 0) goto Label_2935; // 0xb75 JumpB
	var_319_bool = 1; // 0xb76 MovB
	
Label_2935:
	if(var_319_bool == 0) goto Label_2941; // 0xb77 JumpB
	var_328_int = 6902; // 0xb78 PushI
	var_329_int = 7609; // 0xb79 PushI
	var_330_int = 7608; // 0xb7a PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0xb7b TObjFunc
	
Label_2941:
	var_331_bool = 0; // 0xb7d PushV
	var_331_bool = 0; // 0xb7e MovB
	var_332_bool = 0; var_333_object = Obj(); // 0xb7f PushV
	var_333_object = var_1_object; // 0xb80 MovT
	func_5954(var_333_object); // 0xb81 Call
	if(var_332_bool == 0) goto Label_2954; // 0xb83 JumpB
	var_334_bool = 0; var_335_object = Obj(); // 0xb84 PushV
	var_335_object = var_1_object; // 0xb85 MovT
	func_5969(var_335_object); // 0xb86 Call
	if(var_334_bool == 0) goto Label_2954; // 0xb88 JumpB
	var_331_bool = 1; // 0xb89 MovB
	
Label_2954:
	if(var_331_bool == 0) goto Label_2960; // 0xb8a JumpB
	var_340_int = 6905; // 0xb8b PushI
	var_341_int = 7612; // 0xb8c PushI
	var_342_int = 7611; // 0xb8d PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xb8e TObjFunc
	
Label_2960:
	var_343_bool = 0; var_344_object = Obj(); // 0xb90 PushV
	var_344_object = var_1_object; // 0xb91 MovT
	func_5942(var_344_object); // 0xb92 Call
	if(var_343_bool == 0) goto Label_2970; // 0xb94 JumpB
	var_345_int = 7745; // 0xb95 PushI
	var_346_int = 7601; // 0xb96 PushI
	var_347_int = 8545; // 0xb97 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xb98 TObjFunc
	
Label_2970:
	var_348_int = 7744; // 0xb9a PushI
	var_349_int = -1; // 0xb9b PushI
	var_350_int = 8544; // 0xb9c PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0xb9d TObjFunc
	return 0; // 0xb9f Return
	
Label_3016:
	var_351_int = 10391; // 0xbc8 PushI
	var_352_bool = var_30_string == var_351_int; // 0xbc9 Eq
	if(var_352_bool == 0) goto Label_3044; // 0xbca JumpB
	var_353_string = ""; // 0xbcb PushV
	var_353_string = "Neutral"; // 0xbcc MovS
	func_2751(var_31_bool, var_353_string); // 0xbcd Call
	var_354_int = 9453; // 0xbcf PushI
	SetMessage(var_354_int); // 0xbd0 TObjFunc
	ClearReplies(); // 0xbd2 TObjFunc
	var_355_int = 9454; // 0xbd4 PushI
	var_356_int = 10393; // 0xbd5 PushI
	var_357_int = 10392; // 0xbd6 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0xbd7 TObjFunc
	var_358_int = 9467; // 0xbd9 PushI
	var_359_int = 10408; // 0xbda PushI
	var_360_int = 10407; // 0xbdb PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0xbdc TObjFunc
	var_361_int = 9470; // 0xbde PushI
	var_362_int = -1; // 0xbdf PushI
	var_363_int = 10411; // 0xbe0 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0xbe1 TObjFunc
	return 0; // 0xbe3 Return
	
Label_3044:
	var_364_int = 10408; // 0xbe4 PushI
	var_365_bool = var_30_string == var_364_int; // 0xbe5 Eq
	if(var_365_bool == 0) goto Label_3062; // 0xbe6 JumpB
	var_366_string = ""; // 0xbe7 PushV
	var_366_string = "Neutral"; // 0xbe8 MovS
	func_2751(var_31_bool, var_366_string); // 0xbe9 Call
	var_367_int = 9468; // 0xbeb PushI
	SetMessage(var_367_int); // 0xbec TObjFunc
	ClearReplies(); // 0xbee TObjFunc
	var_368_int = 9469; // 0xbf0 PushI
	var_369_int = 10393; // 0xbf1 PushI
	var_370_int = 10409; // 0xbf2 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0xbf3 TObjFunc
	return 0; // 0xbf5 Return
	
Label_3062:
	var_371_int = 10393; // 0xbf6 PushI
	var_372_bool = var_30_string == var_371_int; // 0xbf7 Eq
	if(var_372_bool == 0) goto Label_3090; // 0xbf8 JumpB
	var_373_string = ""; // 0xbf9 PushV
	var_373_string = "Neutral"; // 0xbfa MovS
	func_2751(var_31_bool, var_373_string); // 0xbfb Call
	var_374_int = 9455; // 0xbfd PushI
	SetMessage(var_374_int); // 0xbfe TObjFunc
	ClearReplies(); // 0xc00 TObjFunc
	var_375_int = 9456; // 0xc02 PushI
	var_376_int = 10395; // 0xc03 PushI
	var_377_int = 10394; // 0xc04 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0xc05 TObjFunc
	var_378_int = 9463; // 0xc07 PushI
	var_379_int = 10403; // 0xc08 PushI
	var_380_int = 10402; // 0xc09 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0xc0a TObjFunc
	var_381_int = 9466; // 0xc0c PushI
	var_382_int = -1; // 0xc0d PushI
	var_383_int = 10406; // 0xc0e PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0xc0f TObjFunc
	return 0; // 0xc11 Return
	
Label_3090:
	var_384_int = 10403; // 0xc12 PushI
	var_385_bool = var_30_string == var_384_int; // 0xc13 Eq
	if(var_385_bool == 0) goto Label_3108; // 0xc14 JumpB
	var_386_string = ""; // 0xc15 PushV
	var_386_string = "Neutral"; // 0xc16 MovS
	func_2751(var_31_bool, var_386_string); // 0xc17 Call
	var_387_int = 9464; // 0xc19 PushI
	SetMessage(var_387_int); // 0xc1a TObjFunc
	ClearReplies(); // 0xc1c TObjFunc
	var_388_int = 9465; // 0xc1e PushI
	var_389_int = 10395; // 0xc1f PushI
	var_390_int = 10404; // 0xc20 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0xc21 TObjFunc
	return 0; // 0xc23 Return
	
Label_3108:
	var_391_int = 10395; // 0xc24 PushI
	var_392_bool = var_30_string == var_391_int; // 0xc25 Eq
	if(var_392_bool == 0) goto Label_3131; // 0xc26 JumpB
	var_393_string = ""; // 0xc27 PushV
	var_393_string = "Neutral"; // 0xc28 MovS
	func_2751(var_31_bool, var_393_string); // 0xc29 Call
	var_394_int = 9457; // 0xc2b PushI
	SetMessage(var_394_int); // 0xc2c TObjFunc
	ClearReplies(); // 0xc2e TObjFunc
	var_395_int = 9458; // 0xc30 PushI
	var_396_int = 10397; // 0xc31 PushI
	var_397_int = 10396; // 0xc32 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xc33 TObjFunc
	var_398_int = 9462; // 0xc35 PushI
	var_399_int = 10397; // 0xc36 PushI
	var_400_int = 10400; // 0xc37 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0xc38 TObjFunc
	return 0; // 0xc3a Return
	
Label_3131:
	var_401_int = 10397; // 0xc3b PushI
	var_402_bool = var_30_string == var_401_int; // 0xc3c Eq
	if(var_402_bool == 0) goto Label_3154; // 0xc3d JumpB
	var_403_string = ""; // 0xc3e PushV
	var_403_string = "Neutral"; // 0xc3f MovS
	func_2751(var_31_bool, var_403_string); // 0xc40 Call
	var_404_int = 9459; // 0xc42 PushI
	SetMessage(var_404_int); // 0xc43 TObjFunc
	ClearReplies(); // 0xc45 TObjFunc
	var_405_int = 9460; // 0xc47 PushI
	var_406_int = -1; // 0xc48 PushI
	var_407_int = 10398; // 0xc49 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0xc4a TObjFunc
	var_408_int = 9461; // 0xc4c PushI
	var_409_int = -1; // 0xc4d PushI
	var_410_int = 10399; // 0xc4e PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xc4f TObjFunc
	return 0; // 0xc51 Return
	
Label_3154:
	var_411_int = 10264; // 0xc52 PushI
	var_412_bool = var_30_string == var_411_int; // 0xc53 Eq
	if(var_412_bool == 0) goto Label_3177; // 0xc54 JumpB
	var_413_string = ""; // 0xc55 PushV
	var_413_string = "Neutral"; // 0xc56 MovS
	func_2751(var_31_bool, var_413_string); // 0xc57 Call
	var_414_int = 9344; // 0xc59 PushI
	SetMessage(var_414_int); // 0xc5a TObjFunc
	ClearReplies(); // 0xc5c TObjFunc
	var_415_int = 9345; // 0xc5e PushI
	var_416_int = 10266; // 0xc5f PushI
	var_417_int = 10265; // 0xc60 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0xc61 TObjFunc
	var_418_int = 9349; // 0xc63 PushI
	var_419_int = 10266; // 0xc64 PushI
	var_420_int = 10269; // 0xc65 PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0xc66 TObjFunc
	return 0; // 0xc68 Return
	
Label_3177:
	var_421_int = 10266; // 0xc69 PushI
	var_422_bool = var_30_string == var_421_int; // 0xc6a Eq
	if(var_422_bool == 0) goto Label_3200; // 0xc6b JumpB
	var_423_string = ""; // 0xc6c PushV
	var_423_string = "Neutral"; // 0xc6d MovS
	func_2751(var_31_bool, var_423_string); // 0xc6e Call
	var_424_int = 9346; // 0xc70 PushI
	SetMessage(var_424_int); // 0xc71 TObjFunc
	ClearReplies(); // 0xc73 TObjFunc
	var_425_int = 9347; // 0xc75 PushI
	var_426_int = -1; // 0xc76 PushI
	var_427_int = 10267; // 0xc77 PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0xc78 TObjFunc
	var_428_int = 9348; // 0xc7a PushI
	var_429_int = -1; // 0xc7b PushI
	var_430_int = 10268; // 0xc7c PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0xc7d TObjFunc
	return 0; // 0xc7f Return
	
Label_3200:
	var_431_int = 7612; // 0xc80 PushI
	var_432_bool = var_30_string == var_431_int; // 0xc81 Eq
	if(var_432_bool == 0) goto Label_3218; // 0xc82 JumpB
	var_433_string = ""; // 0xc83 PushV
	var_433_string = "Neutral"; // 0xc84 MovS
	func_2751(var_31_bool, var_433_string); // 0xc85 Call
	var_434_int = 6906; // 0xc87 PushI
	SetMessage(var_434_int); // 0xc88 TObjFunc
	ClearReplies(); // 0xc8a TObjFunc
	var_435_int = 6907; // 0xc8c PushI
	var_436_int = -1; // 0xc8d PushI
	var_437_int = 7613; // 0xc8e PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0xc8f TObjFunc
	return 0; // 0xc91 Return
	
Label_3218:
	var_438_int = 7609; // 0xc92 PushI
	var_439_bool = var_30_string == var_438_int; // 0xc93 Eq
	if(var_439_bool == 0) goto Label_3241; // 0xc94 JumpB
	var_440_string = ""; // 0xc95 PushV
	var_440_string = "Neutral"; // 0xc96 MovS
	func_2751(var_31_bool, var_440_string); // 0xc97 Call
	var_441_int = 6903; // 0xc99 PushI
	SetMessage(var_441_int); // 0xc9a TObjFunc
	ClearReplies(); // 0xc9c TObjFunc
	var_442_int = 7397; // 0xc9e PushI
	var_443_int = 8163; // 0xc9f PushI
	var_444_int = 8162; // 0xca0 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0xca1 TObjFunc
	var_445_int = 6908; // 0xca3 PushI
	var_446_int = 8163; // 0xca4 PushI
	var_447_int = 7614; // 0xca5 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0xca6 TObjFunc
	return 0; // 0xca8 Return
	
Label_3241:
	var_448_int = 8163; // 0xca9 PushI
	var_449_bool = var_30_string == var_448_int; // 0xcaa Eq
	if(var_449_bool == 0) goto Label_3259; // 0xcab JumpB
	var_450_string = ""; // 0xcac PushV
	var_450_string = "Neutral"; // 0xcad MovS
	func_2751(var_31_bool, var_450_string); // 0xcae Call
	var_451_int = 7398; // 0xcb0 PushI
	SetMessage(var_451_int); // 0xcb1 TObjFunc
	ClearReplies(); // 0xcb3 TObjFunc
	var_452_int = 7399; // 0xcb5 PushI
	var_453_int = -1; // 0xcb6 PushI
	var_454_int = 8165; // 0xcb7 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0xcb8 TObjFunc
	return 0; // 0xcba Return
	
Label_3259:
	var_455_int = 7607; // 0xcbb PushI
	var_456_bool = var_30_string == var_455_int; // 0xcbc Eq
	if(var_456_bool == 0) goto Label_3277; // 0xcbd JumpB
	var_457_string = ""; // 0xcbe PushV
	var_457_string = "Neutral"; // 0xcbf MovS
	func_2751(var_31_bool, var_457_string); // 0xcc0 Call
	var_458_int = 6901; // 0xcc2 PushI
	SetMessage(var_458_int); // 0xcc3 TObjFunc
	ClearReplies(); // 0xcc5 TObjFunc
	var_459_int = 7396; // 0xcc7 PushI
	var_460_int = -1; // 0xcc8 PushI
	var_461_int = 8161; // 0xcc9 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0xcca TObjFunc
	return 0; // 0xccc Return
	
Label_3277:
	var_462_int = 8140; // 0xccd PushI
	var_463_bool = var_30_string == var_462_int; // 0xcce Eq
	if(var_463_bool == 0) goto Label_3300; // 0xccf JumpB
	var_464_string = ""; // 0xcd0 PushV
	var_464_string = "Neutral"; // 0xcd1 MovS
	func_2751(var_31_bool, var_464_string); // 0xcd2 Call
	var_465_int = 7379; // 0xcd4 PushI
	SetMessage(var_465_int); // 0xcd5 TObjFunc
	ClearReplies(); // 0xcd7 TObjFunc
	var_466_int = 7380; // 0xcd9 PushI
	var_467_int = 8142; // 0xcda PushI
	var_468_int = 8141; // 0xcdb PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0xcdc TObjFunc
	var_469_int = 7385; // 0xcde PushI
	var_470_int = 8142; // 0xcdf PushI
	var_471_int = 8147; // 0xce0 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0xce1 TObjFunc
	return 0; // 0xce3 Return
	
Label_3300:
	var_472_int = 8142; // 0xce4 PushI
	var_473_bool = var_30_string == var_472_int; // 0xce5 Eq
	if(var_473_bool == 0) goto Label_3323; // 0xce6 JumpB
	var_474_string = ""; // 0xce7 PushV
	var_474_string = "Neutral"; // 0xce8 MovS
	func_2751(var_31_bool, var_474_string); // 0xce9 Call
	var_475_int = 7381; // 0xceb PushI
	SetMessage(var_475_int); // 0xcec TObjFunc
	ClearReplies(); // 0xcee TObjFunc
	var_476_int = 7382; // 0xcf0 PushI
	var_477_int = 8144; // 0xcf1 PushI
	var_478_int = 8143; // 0xcf2 PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0xcf3 TObjFunc
	var_479_int = 7386; // 0xcf5 PushI
	var_480_int = 8150; // 0xcf6 PushI
	var_481_int = 8149; // 0xcf7 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0xcf8 TObjFunc
	return 0; // 0xcfa Return
	
Label_3323:
	var_482_int = 8150; // 0xcfb PushI
	var_483_bool = var_30_string == var_482_int; // 0xcfc Eq
	if(var_483_bool == 0) goto Label_3341; // 0xcfd JumpB
	var_484_string = ""; // 0xcfe PushV
	var_484_string = "Neutral"; // 0xcff MovS
	func_2751(var_31_bool, var_484_string); // 0xd00 Call
	var_485_int = 7387; // 0xd02 PushI
	SetMessage(var_485_int); // 0xd03 TObjFunc
	ClearReplies(); // 0xd05 TObjFunc
	var_486_int = 7388; // 0xd07 PushI
	var_487_int = 8144; // 0xd08 PushI
	var_488_int = 8151; // 0xd09 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0xd0a TObjFunc
	return 0; // 0xd0c Return
	
Label_3341:
	var_489_int = 8144; // 0xd0d PushI
	var_490_bool = var_30_string == var_489_int; // 0xd0e Eq
	if(var_490_bool == 0) goto Label_3359; // 0xd0f JumpB
	var_491_string = ""; // 0xd10 PushV
	var_491_string = "Neutral"; // 0xd11 MovS
	func_2751(var_31_bool, var_491_string); // 0xd12 Call
	var_492_int = 7383; // 0xd14 PushI
	SetMessage(var_492_int); // 0xd15 TObjFunc
	ClearReplies(); // 0xd17 TObjFunc
	var_493_int = 6894; // 0xd19 PushI
	var_494_int = 8153; // 0xd1a PushI
	var_495_int = 7600; // 0xd1b PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0xd1c TObjFunc
	return 0; // 0xd1e Return
	
Label_3359:
	var_496_int = 8153; // 0xd1f PushI
	var_497_bool = var_30_string == var_496_int; // 0xd20 Eq
	if(var_497_bool == 0) goto Label_3382; // 0xd21 JumpB
	var_498_string = ""; // 0xd22 PushV
	var_498_string = "Neutral"; // 0xd23 MovS
	func_2751(var_31_bool, var_498_string); // 0xd24 Call
	var_499_int = 7389; // 0xd26 PushI
	SetMessage(var_499_int); // 0xd27 TObjFunc
	ClearReplies(); // 0xd29 TObjFunc
	var_500_int = 7390; // 0xd2b PushI
	var_501_int = 7601; // 0xd2c PushI
	var_502_int = 8154; // 0xd2d PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0xd2e TObjFunc
	var_503_int = 7391; // 0xd30 PushI
	var_504_int = -1; // 0xd31 PushI
	var_505_int = 8155; // 0xd32 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0xd33 TObjFunc
	return 0; // 0xd35 Return
	
Label_3382:
	var_506_int = 7601; // 0xd36 PushI
	var_507_bool = var_30_string == var_506_int; // 0xd37 Eq
	if(var_507_bool == 0) goto Label_3405; // 0xd38 JumpB
	var_508_string = ""; // 0xd39 PushV
	var_508_string = "Neutral"; // 0xd3a MovS
	func_2751(var_31_bool, var_508_string); // 0xd3b Call
	var_509_int = 6895; // 0xd3d PushI
	SetMessage(var_509_int); // 0xd3e TObjFunc
	ClearReplies(); // 0xd40 TObjFunc
	var_510_int = 6896; // 0xd42 PushI
	var_511_int = 7603; // 0xd43 PushI
	var_512_int = 7602; // 0xd44 PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0xd45 TObjFunc
	var_513_int = 7392; // 0xd47 PushI
	var_514_int = 8157; // 0xd48 PushI
	var_515_int = 8156; // 0xd49 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0xd4a TObjFunc
	return 0; // 0xd4c Return
	
Label_3405:
	var_516_int = 8157; // 0xd4d PushI
	var_517_bool = var_30_string == var_516_int; // 0xd4e Eq
	if(var_517_bool == 0) goto Label_3423; // 0xd4f JumpB
	var_518_string = ""; // 0xd50 PushV
	var_518_string = "Neutral"; // 0xd51 MovS
	func_2751(var_31_bool, var_518_string); // 0xd52 Call
	var_519_int = 7393; // 0xd54 PushI
	SetMessage(var_519_int); // 0xd55 TObjFunc
	ClearReplies(); // 0xd57 TObjFunc
	var_520_int = 7395; // 0xd59 PushI
	var_521_int = 7603; // 0xd5a PushI
	var_522_int = 8159; // 0xd5b PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0xd5c TObjFunc
	return 0; // 0xd5e Return
	
Label_3423:
	var_523_int = 7603; // 0xd5f PushI
	var_524_bool = var_30_string == var_523_int; // 0xd60 Eq
	if(var_524_bool == 0) goto Label_3446; // 0xd61 JumpB
	var_525_string = ""; // 0xd62 PushV
	var_525_string = "Neutral"; // 0xd63 MovS
	func_2751(var_31_bool, var_525_string); // 0xd64 Call
	var_526_int = 6897; // 0xd66 PushI
	SetMessage(var_526_int); // 0xd67 TObjFunc
	ClearReplies(); // 0xd69 TObjFunc
	var_527_int = 6898; // 0xd6b PushI
	var_528_int = -1; // 0xd6c PushI
	var_529_int = 7604; // 0xd6d PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0xd6e TObjFunc
	var_530_int = 7394; // 0xd70 PushI
	var_531_int = -1; // 0xd71 PushI
	var_532_int = 8158; // 0xd72 PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0xd73 TObjFunc
	return 0; // 0xd75 Return
	
Label_3446:
	var_3_string = 1; // 0xd76 TMovB
	var_533_bool = 0; // 0xd77 PushV
	func_5101(var_533_bool); // 0xd78 Call
	if(var_533_bool == 0) goto Label_3454; // 0xd7a JumpB
	lshStopAnimation(); // 0xd7b Func
	goto Label_3456; // 0xd7d Jump
	
Label_3456:
	return 0; // 0xd80 Return
	
Label_3454:
	StopAnimation(); // 0xd7e Func
	
Label_3458:
	return 0; // 0xd82 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool)
{
	var_32_int = 1; // 0xe68 PushI
	if(var_32_int == 0) goto Label_4483; // 0xe69 JumpB
	func_4989(); // 0xe6b Call
	var_34_int = 12160; // 0xe6d PushI
	var_35_bool = var_31_bool == var_34_int; // 0xe6e Eq
	if(var_35_bool == 0) goto Label_3711; // 0xe6f JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xe70 PushV
	var_36_object = var_1_object; // 0xe71 MovT
	var_37_object = var_0_object; // 0xe72 MovT
	func_5372(); // 0xe73 Call
	var_40_object = Obj(); var_41_object = Obj(); // 0xe75 PushV
	var_40_object = var_1_object; // 0xe76 MovT
	var_41_object = var_0_object; // 0xe77 MovT
	func_5378(); // 0xe78 Call
	var_90_object = Obj(); var_91_object = Obj(); // 0xe7a PushV
	var_90_object = var_1_object; // 0xe7b MovT
	var_91_object = var_0_object; // 0xe7c MovT
	func_5356(); // 0xe7d Call
	
Label_3711:
	var_116_int = 12161; // 0xe7f PushI
	var_117_bool = var_31_bool == var_116_int; // 0xe80 Eq
	if(var_117_bool == 0) goto Label_3729; // 0xe81 JumpB
	var_118_object = Obj(); var_119_object = Obj(); // 0xe82 PushV
	var_118_object = var_1_object; // 0xe83 MovT
	var_119_object = var_0_object; // 0xe84 MovT
	func_5372(); // 0xe85 Call
	var_120_object = Obj(); var_121_object = Obj(); // 0xe87 PushV
	var_120_object = var_1_object; // 0xe88 MovT
	var_121_object = var_0_object; // 0xe89 MovT
	func_5378(); // 0xe8a Call
	var_122_object = Obj(); var_123_object = Obj(); // 0xe8c PushV
	var_122_object = var_1_object; // 0xe8d MovT
	var_123_object = var_0_object; // 0xe8e MovT
	func_5356(); // 0xe8f Call
	
Label_3729:
	var_124_int = 12181; // 0xe91 PushI
	var_125_bool = var_31_bool == var_124_int; // 0xe92 Eq
	if(var_125_bool == 0) goto Label_3742; // 0xe93 JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0xe94 PushV
	var_126_object = var_1_object; // 0xe95 MovT
	var_127_object = var_0_object; // 0xe96 MovT
	func_5410(); // 0xe97 Call
	var_130_object = Obj(); var_131_object = Obj(); // 0xe99 PushV
	var_130_object = var_1_object; // 0xe9a MovT
	var_131_object = var_0_object; // 0xe9b MovT
	func_5416(); // 0xe9c Call
	
Label_3742:
	var_147_int = 12182; // 0xe9e PushI
	var_148_bool = var_31_bool == var_147_int; // 0xe9f Eq
	if(var_148_bool == 0) goto Label_3755; // 0xea0 JumpB
	var_149_object = Obj(); var_150_object = Obj(); // 0xea1 PushV
	var_149_object = var_1_object; // 0xea2 MovT
	var_150_object = var_0_object; // 0xea3 MovT
	func_5410(); // 0xea4 Call
	var_151_object = Obj(); var_152_object = Obj(); // 0xea6 PushV
	var_151_object = var_1_object; // 0xea7 MovT
	var_152_object = var_0_object; // 0xea8 MovT
	func_5416(); // 0xea9 Call
	
Label_3755:
	var_153_int = 12183; // 0xeab PushI
	var_154_bool = var_31_bool == var_153_int; // 0xeac Eq
	if(var_154_bool == 0) goto Label_3773; // 0xead JumpB
	var_155_object = Obj(); var_156_object = Obj(); // 0xeae PushV
	var_155_object = var_1_object; // 0xeaf MovT
	var_156_object = var_0_object; // 0xeb0 MovT
	func_5410(); // 0xeb1 Call
	var_157_object = Obj(); var_158_object = Obj(); // 0xeb3 PushV
	var_157_object = var_1_object; // 0xeb4 MovT
	var_158_object = var_0_object; // 0xeb5 MovT
	func_5416(); // 0xeb6 Call
	var_159_object = Obj(); var_160_object = Obj(); // 0xeb8 PushV
	var_159_object = var_1_object; // 0xeb9 MovT
	var_160_object = var_0_object; // 0xeba MovT
	func_5340(); // 0xebb Call
	
Label_3773:
	var_166_int = 12649; // 0xebd PushI
	var_167_bool = var_31_bool == var_166_int; // 0xebe Eq
	if(var_167_bool == 0) goto Label_3811; // 0xebf JumpB
	var_168_object = Obj(); var_169_object = Obj(); // 0xec0 PushV
	var_168_object = var_1_object; // 0xec1 MovT
	var_169_object = var_0_object; // 0xec2 MovT
	func_5445(); // 0xec3 Call
	var_172_object = Obj(); var_173_object = Obj(); // 0xec5 PushV
	var_172_object = var_1_object; // 0xec6 MovT
	var_173_object = var_0_object; // 0xec7 MovT
	func_5451(); // 0xec8 Call
	var_176_object = Obj(); var_177_object = Obj(); // 0xeca PushV
	var_176_object = var_1_object; // 0xecb MovT
	var_177_object = var_0_object; // 0xecc MovT
	func_5457(); // 0xecd Call
	var_215_object = Obj(); var_216_object = Obj(); // 0xecf PushV
	var_215_object = var_1_object; // 0xed0 MovT
	var_216_object = var_0_object; // 0xed1 MovT
	func_5817(var_216_object); // 0xed2 Call
	var_234_object = Obj(); var_235_object = Obj(); // 0xed4 PushV
	var_234_object = var_1_object; // 0xed5 MovT
	var_235_object = var_0_object; // 0xed6 MovT
	func_5795(var_235_object); // 0xed7 Call
	var_240_object = Obj(); var_241_object = Obj(); // 0xed9 PushV
	var_240_object = var_1_object; // 0xeda MovT
	var_241_object = var_0_object; // 0xedb MovT
	func_5806(var_241_object); // 0xedc Call
	var_246_object = Obj(); var_247_object = Obj(); // 0xede PushV
	var_246_object = var_1_object; // 0xedf MovT
	var_247_object = var_0_object; // 0xee0 MovT
	func_5121(); // 0xee1 Call
	
Label_3811:
	var_250_int = 12650; // 0xee3 PushI
	var_251_bool = var_31_bool == var_250_int; // 0xee4 Eq
	if(var_251_bool == 0) goto Label_3819; // 0xee5 JumpB
	var_252_object = Obj(); var_253_object = Obj(); // 0xee6 PushV
	var_252_object = var_1_object; // 0xee7 MovT
	var_253_object = var_0_object; // 0xee8 MovT
	func_5445(); // 0xee9 Call
	
Label_3819:
	var_254_int = 12684; // 0xeeb PushI
	var_255_bool = var_31_bool == var_254_int; // 0xeec Eq
	if(var_255_bool == 0) goto Label_3852; // 0xeed JumpB
	var_256_object = Obj(); var_257_object = Obj(); // 0xeee PushV
	var_256_object = var_1_object; // 0xeef MovT
	var_257_object = var_0_object; // 0xef0 MovT
	func_5451(); // 0xef1 Call
	var_258_object = Obj(); var_259_object = Obj(); // 0xef3 PushV
	var_258_object = var_1_object; // 0xef4 MovT
	var_259_object = var_0_object; // 0xef5 MovT
	func_5457(); // 0xef6 Call
	var_260_object = Obj(); var_261_object = Obj(); // 0xef8 PushV
	var_260_object = var_1_object; // 0xef9 MovT
	var_261_object = var_0_object; // 0xefa MovT
	func_5795(var_261_object); // 0xefb Call
	var_262_object = Obj(); var_263_object = Obj(); // 0xefd PushV
	var_262_object = var_1_object; // 0xefe MovT
	var_263_object = var_0_object; // 0xeff MovT
	func_5817(var_263_object); // 0xf00 Call
	var_264_object = Obj(); var_265_object = Obj(); // 0xf02 PushV
	var_264_object = var_1_object; // 0xf03 MovT
	var_265_object = var_0_object; // 0xf04 MovT
	func_5806(var_265_object); // 0xf05 Call
	var_266_object = Obj(); var_267_object = Obj(); // 0xf07 PushV
	var_266_object = var_1_object; // 0xf08 MovT
	var_267_object = var_0_object; // 0xf09 MovT
	func_5121(); // 0xf0a Call
	
Label_3852:
	var_268_int = 13074; // 0xf0c PushI
	var_269_bool = var_31_bool == var_268_int; // 0xf0d Eq
	if(var_269_bool == 0) goto Label_3860; // 0xf0e JumpB
	var_270_object = Obj(); var_271_object = Obj(); // 0xf0f PushV
	var_270_object = var_1_object; // 0xf10 MovT
	var_271_object = var_0_object; // 0xf11 MovT
	func_5525(); // 0xf12 Call
	
Label_3860:
	var_274_int = 11193; // 0xf14 PushI
	var_275_bool = var_30_string == var_274_int; // 0xf15 Eq
	if(var_275_bool == 0) goto Label_3974; // 0xf16 JumpB
	var_276_string = ""; // 0xf17 PushV
	var_276_string = "Neutral"; // 0xf18 MovS
	func_3671(var_31_bool, var_276_string); // 0xf19 Call
	var_291_int = 10151; // 0xf1b PushI
	SetMessage(var_291_int); // 0xf1c TObjFunc
	ClearReplies(); // 0xf1e TObjFunc
	var_292_bool = 0; // 0xf20 PushV
	var_292_bool = 0; // 0xf21 MovB
	var_293_bool = 0; var_294_object = Obj(); // 0xf22 PushV
	var_294_object = var_1_object; // 0xf23 MovT
	func_6039(var_294_object); // 0xf24 Call
	if(var_293_bool == 0) goto Label_3885; // 0xf26 JumpB
	var_299_bool = 0; var_300_object = Obj(); // 0xf27 PushV
	var_300_object = var_1_object; // 0xf28 MovT
	func_6027(var_300_object); // 0xf29 Call
	if(var_299_bool == 0) goto Label_3885; // 0xf2b JumpB
	var_292_bool = 1; // 0xf2c MovB
	
Label_3885:
	if(var_292_bool == 0) goto Label_3891; // 0xf2d JumpB
	var_305_int = 10152; // 0xf2e PushI
	var_306_int = 11195; // 0xf2f PushI
	var_307_int = 11194; // 0xf30 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0xf31 TObjFunc
	
Label_3891:
	var_308_bool = 0; // 0xf33 PushV
	var_308_bool = 0; // 0xf34 MovB
	var_309_bool = 0; var_310_object = Obj(); // 0xf35 PushV
	var_310_object = var_1_object; // 0xf36 MovT
	func_6051(var_310_object); // 0xf37 Call
	if(var_309_bool == 0) goto Label_3904; // 0xf39 JumpB
	var_315_bool = 0; var_316_object = Obj(); // 0xf3a PushV
	var_316_object = var_1_object; // 0xf3b MovT
	func_6063(var_316_object); // 0xf3c Call
	if(var_315_bool == 0) goto Label_3904; // 0xf3e JumpB
	var_308_bool = 1; // 0xf3f MovB
	
Label_3904:
	if(var_308_bool == 0) goto Label_3910; // 0xf40 JumpB
	var_321_int = 10995; // 0xf41 PushI
	var_322_int = 12163; // 0xf42 PushI
	var_323_int = 12162; // 0xf43 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0xf44 TObjFunc
	
Label_3910:
	var_324_bool = 0; // 0xf46 PushV
	var_324_bool = 0; // 0xf47 MovB
	var_325_bool = 0; var_326_object = Obj(); // 0xf48 PushV
	var_326_object = var_1_object; // 0xf49 MovT
	func_6097(var_326_object); // 0xf4a Call
	if(var_325_bool == 0) goto Label_3923; // 0xf4c JumpB
	var_331_bool = 0; var_332_object = Obj(); // 0xf4d PushV
	var_332_object = var_1_object; // 0xf4e MovT
	func_6085(var_332_object); // 0xf4f Call
	if(var_331_bool == 0) goto Label_3923; // 0xf51 JumpB
	var_324_bool = 1; // 0xf52 MovB
	
Label_3923:
	if(var_324_bool == 0) goto Label_3929; // 0xf53 JumpB
	var_337_int = 11435; // 0xf54 PushI
	var_338_int = 12638; // 0xf55 PushI
	var_339_int = 12637; // 0xf56 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xf57 TObjFunc
	
Label_3929:
	var_340_bool = 0; // 0xf59 PushV
	var_340_bool = 0; // 0xf5a MovB
	var_341_bool = 0; var_342_object = Obj(); // 0xf5b PushV
	var_342_object = var_1_object; // 0xf5c MovT
	func_6085(var_342_object); // 0xf5d Call
	if(var_341_bool == 0) goto Label_3943; // 0xf5f JumpB
	var_343_bool = 0; var_344_object = Obj(); // 0xf60 PushV
	var_344_object = var_1_object; // 0xf61 MovT
	func_6109(var_344_object); // 0xf62 Call
	var_349_bool = var_343_bool == 0; // 0xf64 Not
	if(var_349_bool == 0) goto Label_3943; // 0xf65 JumpB
	var_340_bool = 1; // 0xf66 MovB
	
Label_3943:
	if(var_340_bool == 0) goto Label_3949; // 0xf67 JumpB
	var_350_int = 11476; // 0xf68 PushI
	var_351_int = 12683; // 0xf69 PushI
	var_352_int = 12682; // 0xf6a PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xf6b TObjFunc
	
Label_3949:
	var_353_bool = 0; // 0xf6d PushV
	var_353_bool = 0; // 0xf6e MovB
	var_354_bool = 0; var_355_object = Obj(); // 0xf6f PushV
	var_355_object = var_1_object; // 0xf70 MovT
	func_6133(var_355_object); // 0xf71 Call
	if(var_354_bool == 0) goto Label_3962; // 0xf73 JumpB
	var_360_bool = 0; var_361_object = Obj(); // 0xf74 PushV
	var_361_object = var_1_object; // 0xf75 MovT
	func_6121(var_361_object); // 0xf76 Call
	if(var_360_bool == 0) goto Label_3962; // 0xf78 JumpB
	var_353_bool = 1; // 0xf79 MovB
	
Label_3962:
	if(var_353_bool == 0) goto Label_3968; // 0xf7a JumpB
	var_366_int = 11859; // 0xf7b PushI
	var_367_int = 13073; // 0xf7c PushI
	var_368_int = 13072; // 0xf7d PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0xf7e TObjFunc
	
Label_3968:
	var_369_int = 11479; // 0xf80 PushI
	var_370_int = -1; // 0xf81 PushI
	var_371_int = 12685; // 0xf82 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xf83 TObjFunc
	return 0; // 0xf85 Return
	
Label_3974:
	var_372_int = 13073; // 0xf86 PushI
	var_373_bool = var_30_string == var_372_int; // 0xf87 Eq
	if(var_373_bool == 0) goto Label_3992; // 0xf88 JumpB
	var_374_string = ""; // 0xf89 PushV
	var_374_string = "Neutral"; // 0xf8a MovS
	func_3671(var_31_bool, var_374_string); // 0xf8b Call
	var_375_int = 11860; // 0xf8d PushI
	SetMessage(var_375_int); // 0xf8e TObjFunc
	ClearReplies(); // 0xf90 TObjFunc
	var_376_int = 11861; // 0xf92 PushI
	var_377_int = -1; // 0xf93 PushI
	var_378_int = 13074; // 0xf94 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0xf95 TObjFunc
	return 0; // 0xf97 Return
	
Label_3992:
	var_379_int = 12683; // 0xf98 PushI
	var_380_bool = var_30_string == var_379_int; // 0xf99 Eq
	if(var_380_bool == 0) goto Label_4010; // 0xf9a JumpB
	var_381_string = ""; // 0xf9b PushV
	var_381_string = "Neutral"; // 0xf9c MovS
	func_3671(var_31_bool, var_381_string); // 0xf9d Call
	var_382_int = 11477; // 0xf9f PushI
	SetMessage(var_382_int); // 0xfa0 TObjFunc
	ClearReplies(); // 0xfa2 TObjFunc
	var_383_int = 11478; // 0xfa4 PushI
	var_384_int = -1; // 0xfa5 PushI
	var_385_int = 12684; // 0xfa6 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0xfa7 TObjFunc
	return 0; // 0xfa9 Return
	
Label_4010:
	var_386_int = 12638; // 0xfaa PushI
	var_387_bool = var_30_string == var_386_int; // 0xfab Eq
	if(var_387_bool == 0) goto Label_4033; // 0xfac JumpB
	var_388_string = ""; // 0xfad PushV
	var_388_string = "Neutral"; // 0xfae MovS
	func_3671(var_31_bool, var_388_string); // 0xfaf Call
	var_389_int = 11436; // 0xfb1 PushI
	SetMessage(var_389_int); // 0xfb2 TObjFunc
	ClearReplies(); // 0xfb4 TObjFunc
	var_390_int = 11437; // 0xfb6 PushI
	var_391_int = 12640; // 0xfb7 PushI
	var_392_int = 12639; // 0xfb8 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0xfb9 TObjFunc
	var_393_int = 11450; // 0xfbb PushI
	var_394_int = 12654; // 0xfbc PushI
	var_395_int = 12653; // 0xfbd PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0xfbe TObjFunc
	return 0; // 0xfc0 Return
	
Label_4033:
	var_396_int = 12654; // 0xfc1 PushI
	var_397_bool = var_30_string == var_396_int; // 0xfc2 Eq
	if(var_397_bool == 0) goto Label_4051; // 0xfc3 JumpB
	var_398_string = ""; // 0xfc4 PushV
	var_398_string = "Neutral"; // 0xfc5 MovS
	func_3671(var_31_bool, var_398_string); // 0xfc6 Call
	var_399_int = 11451; // 0xfc8 PushI
	SetMessage(var_399_int); // 0xfc9 TObjFunc
	ClearReplies(); // 0xfcb TObjFunc
	var_400_int = 11452; // 0xfcd PushI
	var_401_int = 12656; // 0xfce PushI
	var_402_int = 12655; // 0xfcf PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0xfd0 TObjFunc
	return 0; // 0xfd2 Return
	
Label_4051:
	var_403_int = 12656; // 0xfd3 PushI
	var_404_bool = var_30_string == var_403_int; // 0xfd4 Eq
	if(var_404_bool == 0) goto Label_4069; // 0xfd5 JumpB
	var_405_string = ""; // 0xfd6 PushV
	var_405_string = "Neutral"; // 0xfd7 MovS
	func_3671(var_31_bool, var_405_string); // 0xfd8 Call
	var_406_int = 11453; // 0xfda PushI
	SetMessage(var_406_int); // 0xfdb TObjFunc
	ClearReplies(); // 0xfdd TObjFunc
	var_407_int = 11454; // 0xfdf PushI
	var_408_int = 12640; // 0xfe0 PushI
	var_409_int = 12657; // 0xfe1 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0xfe2 TObjFunc
	return 0; // 0xfe4 Return
	
Label_4069:
	var_410_int = 12640; // 0xfe5 PushI
	var_411_bool = var_30_string == var_410_int; // 0xfe6 Eq
	if(var_411_bool == 0) goto Label_4087; // 0xfe7 JumpB
	var_412_string = ""; // 0xfe8 PushV
	var_412_string = "Neutral"; // 0xfe9 MovS
	func_3671(var_31_bool, var_412_string); // 0xfea Call
	var_413_int = 11438; // 0xfec PushI
	SetMessage(var_413_int); // 0xfed TObjFunc
	ClearReplies(); // 0xfef TObjFunc
	var_414_int = 11439; // 0xff1 PushI
	var_415_int = 12642; // 0xff2 PushI
	var_416_int = 12641; // 0xff3 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xff4 TObjFunc
	return 0; // 0xff6 Return
	
Label_4087:
	var_417_int = 12642; // 0xff7 PushI
	var_418_bool = var_30_string == var_417_int; // 0xff8 Eq
	if(var_418_bool == 0) goto Label_4110; // 0xff9 JumpB
	var_419_string = ""; // 0xffa PushV
	var_419_string = "Neutral"; // 0xffb MovS
	func_3671(var_31_bool, var_419_string); // 0xffc Call
	var_420_int = 11440; // 0xffe PushI
	SetMessage(var_420_int); // 0xfff TObjFunc
	ClearReplies(); // 0x1001 TObjFunc
	var_421_int = 11441; // 0x1003 PushI
	var_422_int = 12644; // 0x1004 PushI
	var_423_int = 12643; // 0x1005 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x1006 TObjFunc
	var_424_int = 11449; // 0x1008 PushI
	var_425_int = 12644; // 0x1009 PushI
	var_426_int = 12651; // 0x100a PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x100b TObjFunc
	return 0; // 0x100d Return
	
Label_4110:
	var_427_int = 12644; // 0x100e PushI
	var_428_bool = var_30_string == var_427_int; // 0x100f Eq
	if(var_428_bool == 0) goto Label_4128; // 0x1010 JumpB
	var_429_string = ""; // 0x1011 PushV
	var_429_string = "Neutral"; // 0x1012 MovS
	func_3671(var_31_bool, var_429_string); // 0x1013 Call
	var_430_int = 11442; // 0x1015 PushI
	SetMessage(var_430_int); // 0x1016 TObjFunc
	ClearReplies(); // 0x1018 TObjFunc
	var_431_int = 11443; // 0x101a PushI
	var_432_int = 12646; // 0x101b PushI
	var_433_int = 12645; // 0x101c PushI
	AddReply(var_431_int, var_432_int, var_433_int); // 0x101d TObjFunc
	return 0; // 0x101f Return
	
Label_4128:
	var_434_int = 12646; // 0x1020 PushI
	var_435_bool = var_30_string == var_434_int; // 0x1021 Eq
	if(var_435_bool == 0) goto Label_4146; // 0x1022 JumpB
	var_436_string = ""; // 0x1023 PushV
	var_436_string = "Neutral"; // 0x1024 MovS
	func_3671(var_31_bool, var_436_string); // 0x1025 Call
	var_437_int = 11444; // 0x1027 PushI
	SetMessage(var_437_int); // 0x1028 TObjFunc
	ClearReplies(); // 0x102a TObjFunc
	var_438_int = 11445; // 0x102c PushI
	var_439_int = 12648; // 0x102d PushI
	var_440_int = 12647; // 0x102e PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x102f TObjFunc
	return 0; // 0x1031 Return
	
Label_4146:
	var_441_int = 12648; // 0x1032 PushI
	var_442_bool = var_30_string == var_441_int; // 0x1033 Eq
	if(var_442_bool == 0) goto Label_4169; // 0x1034 JumpB
	var_443_string = ""; // 0x1035 PushV
	var_443_string = "Neutral"; // 0x1036 MovS
	func_3671(var_31_bool, var_443_string); // 0x1037 Call
	var_444_int = 11446; // 0x1039 PushI
	SetMessage(var_444_int); // 0x103a TObjFunc
	ClearReplies(); // 0x103c TObjFunc
	var_445_int = 11447; // 0x103e PushI
	var_446_int = -1; // 0x103f PushI
	var_447_int = 12649; // 0x1040 PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x1041 TObjFunc
	var_448_int = 11448; // 0x1043 PushI
	var_449_int = -1; // 0x1044 PushI
	var_450_int = 12650; // 0x1045 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x1046 TObjFunc
	return 0; // 0x1048 Return
	
Label_4169:
	var_451_int = 12163; // 0x1049 PushI
	var_452_bool = var_30_string == var_451_int; // 0x104a Eq
	if(var_452_bool == 0) goto Label_4187; // 0x104b JumpB
	var_453_string = ""; // 0x104c PushV
	var_453_string = "Neutral"; // 0x104d MovS
	func_3671(var_31_bool, var_453_string); // 0x104e Call
	var_454_int = 10996; // 0x1050 PushI
	SetMessage(var_454_int); // 0x1051 TObjFunc
	ClearReplies(); // 0x1053 TObjFunc
	var_455_int = 10997; // 0x1055 PushI
	var_456_int = 12165; // 0x1056 PushI
	var_457_int = 12164; // 0x1057 PushI
	AddReply(var_455_int, var_456_int, var_457_int); // 0x1058 TObjFunc
	return 0; // 0x105a Return
	
Label_4187:
	var_458_int = 12165; // 0x105b PushI
	var_459_bool = var_30_string == var_458_int; // 0x105c Eq
	if(var_459_bool == 0) goto Label_4210; // 0x105d JumpB
	var_460_string = ""; // 0x105e PushV
	var_460_string = "Neutral"; // 0x105f MovS
	func_3671(var_31_bool, var_460_string); // 0x1060 Call
	var_461_int = 10998; // 0x1062 PushI
	SetMessage(var_461_int); // 0x1063 TObjFunc
	ClearReplies(); // 0x1065 TObjFunc
	var_462_int = 10999; // 0x1067 PushI
	var_463_int = 12167; // 0x1068 PushI
	var_464_int = 12166; // 0x1069 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x106a TObjFunc
	var_465_int = 11001; // 0x106c PushI
	var_466_int = 12170; // 0x106d PushI
	var_467_int = 12168; // 0x106e PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x106f TObjFunc
	return 0; // 0x1071 Return
	
Label_4210:
	var_468_int = 12170; // 0x1072 PushI
	var_469_bool = var_30_string == var_468_int; // 0x1073 Eq
	if(var_469_bool == 0) goto Label_4233; // 0x1074 JumpB
	var_470_string = ""; // 0x1075 PushV
	var_470_string = "Neutral"; // 0x1076 MovS
	func_3671(var_31_bool, var_470_string); // 0x1077 Call
	var_471_int = 11002; // 0x1079 PushI
	SetMessage(var_471_int); // 0x107a TObjFunc
	ClearReplies(); // 0x107c TObjFunc
	var_472_int = 11003; // 0x107e PushI
	var_473_int = 12167; // 0x107f PushI
	var_474_int = 12171; // 0x1080 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x1081 TObjFunc
	var_475_int = 11004; // 0x1083 PushI
	var_476_int = 12167; // 0x1084 PushI
	var_477_int = 12172; // 0x1085 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x1086 TObjFunc
	return 0; // 0x1088 Return
	
Label_4233:
	var_478_int = 12167; // 0x1089 PushI
	var_479_bool = var_30_string == var_478_int; // 0x108a Eq
	if(var_479_bool == 0) goto Label_4256; // 0x108b JumpB
	var_480_string = ""; // 0x108c PushV
	var_480_string = "Neutral"; // 0x108d MovS
	func_3671(var_31_bool, var_480_string); // 0x108e Call
	var_481_int = 11000; // 0x1090 PushI
	SetMessage(var_481_int); // 0x1091 TObjFunc
	ClearReplies(); // 0x1093 TObjFunc
	var_482_int = 11005; // 0x1095 PushI
	var_483_int = 12176; // 0x1096 PushI
	var_484_int = 12175; // 0x1097 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x1098 TObjFunc
	var_485_int = 11008; // 0x109a PushI
	var_486_int = 12176; // 0x109b PushI
	var_487_int = 12178; // 0x109c PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x109d TObjFunc
	return 0; // 0x109f Return
	
Label_4256:
	var_488_int = 12176; // 0x10a0 PushI
	var_489_bool = var_30_string == var_488_int; // 0x10a1 Eq
	if(var_489_bool == 0) goto Label_4279; // 0x10a2 JumpB
	var_490_string = ""; // 0x10a3 PushV
	var_490_string = "Neutral"; // 0x10a4 MovS
	func_3671(var_31_bool, var_490_string); // 0x10a5 Call
	var_491_int = 11006; // 0x10a7 PushI
	SetMessage(var_491_int); // 0x10a8 TObjFunc
	ClearReplies(); // 0x10aa TObjFunc
	var_492_int = 11007; // 0x10ac PushI
	var_493_int = 12180; // 0x10ad PushI
	var_494_int = 12177; // 0x10ae PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x10af TObjFunc
	var_495_int = 11012; // 0x10b1 PushI
	var_496_int = -1; // 0x10b2 PushI
	var_497_int = 12183; // 0x10b3 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x10b4 TObjFunc
	return 0; // 0x10b6 Return
	
Label_4279:
	var_498_int = 12180; // 0x10b7 PushI
	var_499_bool = var_30_string == var_498_int; // 0x10b8 Eq
	if(var_499_bool == 0) goto Label_4302; // 0x10b9 JumpB
	var_500_string = ""; // 0x10ba PushV
	var_500_string = "Neutral"; // 0x10bb MovS
	func_3671(var_31_bool, var_500_string); // 0x10bc Call
	var_501_int = 11009; // 0x10be PushI
	SetMessage(var_501_int); // 0x10bf TObjFunc
	ClearReplies(); // 0x10c1 TObjFunc
	var_502_int = 11010; // 0x10c3 PushI
	var_503_int = -1; // 0x10c4 PushI
	var_504_int = 12181; // 0x10c5 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x10c6 TObjFunc
	var_505_int = 11011; // 0x10c8 PushI
	var_506_int = -1; // 0x10c9 PushI
	var_507_int = 12182; // 0x10ca PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x10cb TObjFunc
	return 0; // 0x10cd Return
	
Label_4302:
	var_508_int = 11195; // 0x10ce PushI
	var_509_bool = var_30_string == var_508_int; // 0x10cf Eq
	if(var_509_bool == 0) goto Label_4325; // 0x10d0 JumpB
	var_510_string = ""; // 0x10d1 PushV
	var_510_string = "Neutral"; // 0x10d2 MovS
	func_3671(var_31_bool, var_510_string); // 0x10d3 Call
	var_511_int = 10153; // 0x10d5 PushI
	SetMessage(var_511_int); // 0x10d6 TObjFunc
	ClearReplies(); // 0x10d8 TObjFunc
	var_512_int = 10977; // 0x10da PushI
	var_513_int = 12140; // 0x10db PushI
	var_514_int = 12139; // 0x10dc PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x10dd TObjFunc
	var_515_int = 10154; // 0x10df PushI
	var_516_int = 11197; // 0x10e0 PushI
	var_517_int = 11196; // 0x10e1 PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x10e2 TObjFunc
	return 0; // 0x10e4 Return
	
Label_4325:
	var_518_int = 11197; // 0x10e5 PushI
	var_519_bool = var_30_string == var_518_int; // 0x10e6 Eq
	if(var_519_bool == 0) goto Label_4348; // 0x10e7 JumpB
	var_520_string = ""; // 0x10e8 PushV
	var_520_string = "Neutral"; // 0x10e9 MovS
	func_3671(var_31_bool, var_520_string); // 0x10ea Call
	var_521_int = 10155; // 0x10ec PushI
	SetMessage(var_521_int); // 0x10ed TObjFunc
	ClearReplies(); // 0x10ef TObjFunc
	var_522_int = 10982; // 0x10f1 PushI
	var_523_int = 12145; // 0x10f2 PushI
	var_524_int = 12144; // 0x10f3 PushI
	AddReply(var_522_int, var_523_int, var_524_int); // 0x10f4 TObjFunc
	var_525_int = 10986; // 0x10f6 PushI
	var_526_int = 12149; // 0x10f7 PushI
	var_527_int = 12148; // 0x10f8 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x10f9 TObjFunc
	return 0; // 0x10fb Return
	
Label_4348:
	var_528_int = 12149; // 0x10fc PushI
	var_529_bool = var_30_string == var_528_int; // 0x10fd Eq
	if(var_529_bool == 0) goto Label_4366; // 0x10fe JumpB
	var_530_string = ""; // 0x10ff PushV
	var_530_string = "Neutral"; // 0x1100 MovS
	func_3671(var_31_bool, var_530_string); // 0x1101 Call
	var_531_int = 10987; // 0x1103 PushI
	SetMessage(var_531_int); // 0x1104 TObjFunc
	ClearReplies(); // 0x1106 TObjFunc
	var_532_int = 10988; // 0x1108 PushI
	var_533_int = 12143; // 0x1109 PushI
	var_534_int = 12150; // 0x110a PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x110b TObjFunc
	return 0; // 0x110d Return
	
Label_4366:
	var_535_int = 12145; // 0x110e PushI
	var_536_bool = var_30_string == var_535_int; // 0x110f Eq
	if(var_536_bool == 0) goto Label_4389; // 0x1110 JumpB
	var_537_string = ""; // 0x1111 PushV
	var_537_string = "Neutral"; // 0x1112 MovS
	func_3671(var_31_bool, var_537_string); // 0x1113 Call
	var_538_int = 10983; // 0x1115 PushI
	SetMessage(var_538_int); // 0x1116 TObjFunc
	ClearReplies(); // 0x1118 TObjFunc
	var_539_int = 10984; // 0x111a PushI
	var_540_int = 12143; // 0x111b PushI
	var_541_int = 12146; // 0x111c PushI
	AddReply(var_539_int, var_540_int, var_541_int); // 0x111d TObjFunc
	var_542_int = 10985; // 0x111f PushI
	var_543_int = 12143; // 0x1120 PushI
	var_544_int = 12147; // 0x1121 PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x1122 TObjFunc
	return 0; // 0x1124 Return
	
Label_4389:
	var_545_int = 12140; // 0x1125 PushI
	var_546_bool = var_30_string == var_545_int; // 0x1126 Eq
	if(var_546_bool == 0) goto Label_4407; // 0x1127 JumpB
	var_547_string = ""; // 0x1128 PushV
	var_547_string = "Neutral"; // 0x1129 MovS
	func_3671(var_31_bool, var_547_string); // 0x112a Call
	var_548_int = 10978; // 0x112c PushI
	SetMessage(var_548_int); // 0x112d TObjFunc
	ClearReplies(); // 0x112f TObjFunc
	var_549_int = 10980; // 0x1131 PushI
	var_550_int = 12143; // 0x1132 PushI
	var_551_int = 12142; // 0x1133 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x1134 TObjFunc
	return 0; // 0x1136 Return
	
Label_4407:
	var_552_int = 12143; // 0x1137 PushI
	var_553_bool = var_30_string == var_552_int; // 0x1138 Eq
	if(var_553_bool == 0) goto Label_4430; // 0x1139 JumpB
	var_554_string = ""; // 0x113a PushV
	var_554_string = "Neutral"; // 0x113b MovS
	func_3671(var_31_bool, var_554_string); // 0x113c Call
	var_555_int = 10981; // 0x113e PushI
	SetMessage(var_555_int); // 0x113f TObjFunc
	ClearReplies(); // 0x1141 TObjFunc
	var_556_int = 10159; // 0x1143 PushI
	var_557_int = 12154; // 0x1144 PushI
	var_558_int = 11201; // 0x1145 PushI
	AddReply(var_556_int, var_557_int, var_558_int); // 0x1146 TObjFunc
	var_559_int = 10990; // 0x1148 PushI
	var_560_int = 12154; // 0x1149 PushI
	var_561_int = 12155; // 0x114a PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x114b TObjFunc
	return 0; // 0x114d Return
	
Label_4430:
	var_562_int = 12154; // 0x114e PushI
	var_563_bool = var_30_string == var_562_int; // 0x114f Eq
	if(var_563_bool == 0) goto Label_4448; // 0x1150 JumpB
	var_564_string = ""; // 0x1151 PushV
	var_564_string = "Neutral"; // 0x1152 MovS
	func_3671(var_31_bool, var_564_string); // 0x1153 Call
	var_565_int = 10989; // 0x1155 PushI
	SetMessage(var_565_int); // 0x1156 TObjFunc
	ClearReplies(); // 0x1158 TObjFunc
	var_566_int = 10992; // 0x115a PushI
	var_567_int = 12157; // 0x115b PushI
	var_568_int = 12158; // 0x115c PushI
	AddReply(var_566_int, var_567_int, var_568_int); // 0x115d TObjFunc
	return 0; // 0x115f Return
	
Label_4448:
	var_569_int = 12157; // 0x1160 PushI
	var_570_bool = var_30_string == var_569_int; // 0x1161 Eq
	if(var_570_bool == 0) goto Label_4471; // 0x1162 JumpB
	var_571_string = ""; // 0x1163 PushV
	var_571_string = "Neutral"; // 0x1164 MovS
	func_3671(var_31_bool, var_571_string); // 0x1165 Call
	var_572_int = 10991; // 0x1167 PushI
	SetMessage(var_572_int); // 0x1168 TObjFunc
	ClearReplies(); // 0x116a TObjFunc
	var_573_int = 10993; // 0x116c PushI
	var_574_int = -1; // 0x116d PushI
	var_575_int = 12160; // 0x116e PushI
	AddReply(var_573_int, var_574_int, var_575_int); // 0x116f TObjFunc
	var_576_int = 10994; // 0x1171 PushI
	var_577_int = -1; // 0x1172 PushI
	var_578_int = 12161; // 0x1173 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x1174 TObjFunc
	return 0; // 0x1176 Return
	
Label_4471:
	var_3_string = 1; // 0x1177 TMovB
	var_579_bool = 0; // 0x1178 PushV
	func_5101(var_579_bool); // 0x1179 Call
	if(var_579_bool == 0) goto Label_4479; // 0x117b JumpB
	lshStopAnimation(); // 0x117c Func
	goto Label_4481; // 0x117e Jump
	
Label_4481:
	return 0; // 0x1181 Return
	
Label_4479:
	StopAnimation(); // 0x117f Func
	
Label_4483:
	return 0; // 0x1183 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int)
{
	var_32_int = 1; // 0x1213 PushI
	if(var_32_int == 0) goto Label_4893; // 0x1214 JumpB
	func_4989(); // 0x1216 Call
	var_34_int = 12878; // 0x1218 PushI
	var_35_bool = var_31_int == var_34_int; // 0x1219 Eq
	if(var_35_bool == 0) goto Label_4640; // 0x121a JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0x121b PushV
	var_36_object = var_1_object; // 0x121c MovT
	var_37_object = var_0_object; // 0x121d MovT
	func_5531(); // 0x121e Call
	
Label_4640:
	var_71_int = 12861; // 0x1220 PushI
	var_72_bool = var_30_int == var_71_int; // 0x1221 Eq
	if(var_72_bool == 0) goto Label_4668; // 0x1222 JumpB
	var_73_string = ""; // 0x1223 PushV
	var_73_string = "Neutral"; // 0x1224 MovS
	func_4610(var_31_int, var_73_string); // 0x1225 Call
	var_88_int = 11662; // 0x1227 PushI
	SetMessage(var_88_int); // 0x1228 TObjFunc
	ClearReplies(); // 0x122a TObjFunc
	var_89_bool = 0; var_90_object = Obj(); // 0x122c PushV
	var_90_object = var_1_object; // 0x122d MovT
	func_6145(var_90_object); // 0x122e Call
	if(var_89_bool == 0) goto Label_4662; // 0x1230 JumpB
	var_97_int = 11663; // 0x1231 PushI
	var_98_int = 12863; // 0x1232 PushI
	var_99_int = 12862; // 0x1233 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x1234 TObjFunc
	
Label_4662:
	var_100_int = 11960; // 0x1236 PushI
	var_101_int = -1; // 0x1237 PushI
	var_102_int = 13174; // 0x1238 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x1239 TObjFunc
	return 0; // 0x123b Return
	
Label_4668:
	var_103_int = 12863; // 0x123c PushI
	var_104_bool = var_30_int == var_103_int; // 0x123d Eq
	if(var_104_bool == 0) goto Label_4691; // 0x123e JumpB
	var_105_string = ""; // 0x123f PushV
	var_105_string = "Neutral"; // 0x1240 MovS
	func_4610(var_31_int, var_105_string); // 0x1241 Call
	var_106_int = 11664; // 0x1243 PushI
	SetMessage(var_106_int); // 0x1244 TObjFunc
	ClearReplies(); // 0x1246 TObjFunc
	var_107_int = 11680; // 0x1248 PushI
	var_108_int = 12867; // 0x1249 PushI
	var_109_int = 12879; // 0x124a PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x124b TObjFunc
	var_110_int = 11665; // 0x124d PushI
	var_111_int = 12865; // 0x124e PushI
	var_112_int = 12864; // 0x124f PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x1250 TObjFunc
	return 0; // 0x1252 Return
	
Label_4691:
	var_113_int = 12865; // 0x1253 PushI
	var_114_bool = var_30_int == var_113_int; // 0x1254 Eq
	if(var_114_bool == 0) goto Label_4709; // 0x1255 JumpB
	var_115_string = ""; // 0x1256 PushV
	var_115_string = "Neutral"; // 0x1257 MovS
	func_4610(var_31_int, var_115_string); // 0x1258 Call
	var_116_int = 11666; // 0x125a PushI
	SetMessage(var_116_int); // 0x125b TObjFunc
	ClearReplies(); // 0x125d TObjFunc
	var_117_int = 11667; // 0x125f PushI
	var_118_int = 12867; // 0x1260 PushI
	var_119_int = 12866; // 0x1261 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x1262 TObjFunc
	return 0; // 0x1264 Return
	
Label_4709:
	var_120_int = 12867; // 0x1265 PushI
	var_121_bool = var_30_int == var_120_int; // 0x1266 Eq
	if(var_121_bool == 0) goto Label_4732; // 0x1267 JumpB
	var_122_string = ""; // 0x1268 PushV
	var_122_string = "Neutral"; // 0x1269 MovS
	func_4610(var_31_int, var_122_string); // 0x126a Call
	var_123_int = 11668; // 0x126c PushI
	SetMessage(var_123_int); // 0x126d TObjFunc
	ClearReplies(); // 0x126f TObjFunc
	var_124_int = 11669; // 0x1271 PushI
	var_125_int = 12869; // 0x1272 PushI
	var_126_int = 12868; // 0x1273 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x1274 TObjFunc
	var_127_int = 11684; // 0x1276 PushI
	var_128_int = 12886; // 0x1277 PushI
	var_129_int = 12885; // 0x1278 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x1279 TObjFunc
	return 0; // 0x127b Return
	
Label_4732:
	var_130_int = 12886; // 0x127c PushI
	var_131_bool = var_30_int == var_130_int; // 0x127d Eq
	if(var_131_bool == 0) goto Label_4750; // 0x127e JumpB
	var_132_string = ""; // 0x127f PushV
	var_132_string = "Neutral"; // 0x1280 MovS
	func_4610(var_31_int, var_132_string); // 0x1281 Call
	var_133_int = 11685; // 0x1283 PushI
	SetMessage(var_133_int); // 0x1284 TObjFunc
	ClearReplies(); // 0x1286 TObjFunc
	var_134_int = 11686; // 0x1288 PushI
	var_135_int = 12888; // 0x1289 PushI
	var_136_int = 12887; // 0x128a PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x128b TObjFunc
	return 0; // 0x128d Return
	
Label_4750:
	var_137_int = 12888; // 0x128e PushI
	var_138_bool = var_30_int == var_137_int; // 0x128f Eq
	if(var_138_bool == 0) goto Label_4768; // 0x1290 JumpB
	var_139_string = ""; // 0x1291 PushV
	var_139_string = "Neutral"; // 0x1292 MovS
	func_4610(var_31_int, var_139_string); // 0x1293 Call
	var_140_int = 11687; // 0x1295 PushI
	SetMessage(var_140_int); // 0x1296 TObjFunc
	ClearReplies(); // 0x1298 TObjFunc
	var_141_int = 11688; // 0x129a PushI
	var_142_int = 12869; // 0x129b PushI
	var_143_int = 12889; // 0x129c PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x129d TObjFunc
	return 0; // 0x129f Return
	
Label_4768:
	var_144_int = 12869; // 0x12a0 PushI
	var_145_bool = var_30_int == var_144_int; // 0x12a1 Eq
	if(var_145_bool == 0) goto Label_4791; // 0x12a2 JumpB
	var_146_string = ""; // 0x12a3 PushV
	var_146_string = "Neutral"; // 0x12a4 MovS
	func_4610(var_31_int, var_146_string); // 0x12a5 Call
	var_147_int = 11670; // 0x12a7 PushI
	SetMessage(var_147_int); // 0x12a8 TObjFunc
	ClearReplies(); // 0x12aa TObjFunc
	var_148_int = 11673; // 0x12ac PushI
	var_149_int = 12873; // 0x12ad PushI
	var_150_int = 12872; // 0x12ae PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x12af TObjFunc
	var_151_int = 11671; // 0x12b1 PushI
	var_152_int = 12871; // 0x12b2 PushI
	var_153_int = 12870; // 0x12b3 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x12b4 TObjFunc
	return 0; // 0x12b6 Return
	
Label_4791:
	var_154_int = 12871; // 0x12b7 PushI
	var_155_bool = var_30_int == var_154_int; // 0x12b8 Eq
	if(var_155_bool == 0) goto Label_4809; // 0x12b9 JumpB
	var_156_string = ""; // 0x12ba PushV
	var_156_string = "Neutral"; // 0x12bb MovS
	func_4610(var_31_int, var_156_string); // 0x12bc Call
	var_157_int = 11672; // 0x12be PushI
	SetMessage(var_157_int); // 0x12bf TObjFunc
	ClearReplies(); // 0x12c1 TObjFunc
	var_158_int = 11681; // 0x12c3 PushI
	var_159_int = 12882; // 0x12c4 PushI
	var_160_int = 12881; // 0x12c5 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x12c6 TObjFunc
	return 0; // 0x12c8 Return
	
Label_4809:
	var_161_int = 12882; // 0x12c9 PushI
	var_162_bool = var_30_int == var_161_int; // 0x12ca Eq
	if(var_162_bool == 0) goto Label_4827; // 0x12cb JumpB
	var_163_string = ""; // 0x12cc PushV
	var_163_string = "Neutral"; // 0x12cd MovS
	func_4610(var_31_int, var_163_string); // 0x12ce Call
	var_164_int = 11682; // 0x12d0 PushI
	SetMessage(var_164_int); // 0x12d1 TObjFunc
	ClearReplies(); // 0x12d3 TObjFunc
	var_165_int = 11683; // 0x12d5 PushI
	var_166_int = 12873; // 0x12d6 PushI
	var_167_int = 12883; // 0x12d7 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x12d8 TObjFunc
	return 0; // 0x12da Return
	
Label_4827:
	var_168_int = 12873; // 0x12db PushI
	var_169_bool = var_30_int == var_168_int; // 0x12dc Eq
	if(var_169_bool == 0) goto Label_4845; // 0x12dd JumpB
	var_170_string = ""; // 0x12de PushV
	var_170_string = "Neutral"; // 0x12df MovS
	func_4610(var_31_int, var_170_string); // 0x12e0 Call
	var_171_int = 11674; // 0x12e2 PushI
	SetMessage(var_171_int); // 0x12e3 TObjFunc
	ClearReplies(); // 0x12e5 TObjFunc
	var_172_int = 11675; // 0x12e7 PushI
	var_173_int = 12875; // 0x12e8 PushI
	var_174_int = 12874; // 0x12e9 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x12ea TObjFunc
	return 0; // 0x12ec Return
	
Label_4845:
	var_175_int = 12875; // 0x12ed PushI
	var_176_bool = var_30_int == var_175_int; // 0x12ee Eq
	if(var_176_bool == 0) goto Label_4863; // 0x12ef JumpB
	var_177_string = ""; // 0x12f0 PushV
	var_177_string = "Neutral"; // 0x12f1 MovS
	func_4610(var_31_int, var_177_string); // 0x12f2 Call
	var_178_int = 11676; // 0x12f4 PushI
	SetMessage(var_178_int); // 0x12f5 TObjFunc
	ClearReplies(); // 0x12f7 TObjFunc
	var_179_int = 11677; // 0x12f9 PushI
	var_180_int = 12877; // 0x12fa PushI
	var_181_int = 12876; // 0x12fb PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x12fc TObjFunc
	return 0; // 0x12fe Return
	
Label_4863:
	var_182_int = 12877; // 0x12ff PushI
	var_183_bool = var_30_int == var_182_int; // 0x1300 Eq
	if(var_183_bool == 0) goto Label_4881; // 0x1301 JumpB
	var_184_string = ""; // 0x1302 PushV
	var_184_string = "Neutral"; // 0x1303 MovS
	func_4610(var_31_int, var_184_string); // 0x1304 Call
	var_185_int = 11678; // 0x1306 PushI
	SetMessage(var_185_int); // 0x1307 TObjFunc
	ClearReplies(); // 0x1309 TObjFunc
	var_186_int = 11679; // 0x130b PushI
	var_187_int = -1; // 0x130c PushI
	var_188_int = 12878; // 0x130d PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x130e TObjFunc
	return 0; // 0x1310 Return
	
Label_4881:
	var_3_string = 1; // 0x1311 TMovB
	var_189_bool = 0; // 0x1312 PushV
	func_5101(var_189_bool); // 0x1313 Call
	if(var_189_bool == 0) goto Label_4889; // 0x1315 JumpB
	lshStopAnimation(); // 0x1316 Func
	goto Label_4891; // 0x1318 Jump
	
Label_4891:
	return 0; // 0x131b Return
	
Label_4889:
	StopAnimation(); // 0x1319 Func
	
Label_4893:
	return 0; // 0x131d Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool)
{
	func_6726(); // 0x7 Call
	var_31_bool = 0; // 0x9 PushV
	func_4906(var_31_bool); // 0xa Call
	var_34_bool = var_31_bool == 0; // 0xc Not
	if(var_34_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_35_string = ""; // 0x13 PushV
	var_35_string = "Neutral"; // 0x14 MovS
	func_4971(var_35_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_5121()
{
	var_248_string = "playsound"; // 0x1402 PushS
	var_249_string = "giveitem"; // 0x1403 PushS
	TriggerWorld(var_248_string, var_249_string); // 0x1404 Func
	return 0; // 0x1406 Return
}


func_4610(var_2_object, var_73_string)
{
	var_74_bool = 0; // 0x1203 PushV
	func_5101(var_74_bool); // 0x1204 Call
	var_75_bool = var_74_bool == 0; // 0x1206 Not
	if(var_75_bool == 0) goto Label_4617; // 0x1207 JumpB
	return 0; // 0x1208 Return
	
Label_4617:
	var_76_bool = var_73_string == var_2_object; // 0x1209 Eq
	if(var_76_bool == 0) goto Label_4620; // 0x120a JumpB
	return 0; // 0x120b Return
	
Label_4620:
	var_77_string = ""; // 0x120c PushV
	var_77_string = var_73_string; // 0x120d Mov
	func_4971(var_77_string); // 0x120e Call
	var_2_object = var_73_string; // 0x1210 TMov
	return 0; // 0x1211 Return
}


func_6145(var_89_bool)
{
	var_91_int = 0; var_92_string = ""; // 0x1802 PushV
	var_92_string = "d5q01"; // 0x1803 MovS
	func_5006(var_91_int, var_92_string); // 0x1804 Call
	var_95_int = 4; // 0x1806 PushI
	var_96_bool = var_91_int == var_95_int; // 0x1807 Eq
	if(var_96_bool == 0) goto Label_6155; // 0x1808 JumpB
	var_89_bool = 1; // 0x1809 MovB
	return 0; // 0x180a Return
	
Label_6155:
	var_89_bool = 0; // 0x180b MovB
	return 0; // 0x180c Return
}


func_6662()
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x1a06 PushV
	var_67_string = "Adding diary entry"; // 0x1a07 PushS
	Trace(var_67_string); // 0x1a08 Func
	var_68_int = 88; // 0x1a0a PushI
	var_69_int = 1; // 0x1a0b PushI
	var_70_int = 12170; // 0x1a0c PushI
	CreateDiaryEntry(var_66_object, var_68_int, var_69_int, var_70_int); // 0x1a0d Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x1a0f PushV
	var_72_object = var_66_object; // 0x1a10 Mov
	var_73_int = 20; // 0x1a11 MovI
	func_6469(var_71_bool, var_72_object, var_73_int); // 0x1a12 Call
	return 2; // 0x1a14 Return
}


func_5127()
{
	var_38_string = "ood2Lara1"; // 0x1408 PushS
	var_39_int = 1; // 0x1409 PushI
	SetVariable(var_38_string, var_39_int); // 0x140a Func
	return 0; // 0x140c Return
}


func_6157(var_322_bool)
{
	var_324_int = 0; var_325_string = ""; // 0x180e PushV
	var_325_string = "KnowMark"; // 0x180f MovS
	func_5006(var_324_int, var_325_string); // 0x1810 Call
	var_326_int = 1; // 0x1812 PushI
	var_327_bool = var_324_int == var_326_int; // 0x1813 Eq
	if(var_327_bool == 0) goto Label_6167; // 0x1814 JumpB
	var_322_bool = 1; // 0x1815 MovB
	return 0; // 0x1816 Return
	
Label_6167:
	var_322_bool = 0; // 0x1817 MovB
	return 0; // 0x1818 Return
}


func_5133()
{
	var_127_string = "ood2Lara2"; // 0x140e PushS
	var_128_int = 1; // 0x140f PushI
	SetVariable(var_127_string, var_128_int); // 0x1410 Func
	return 0; // 0x1412 Return
}


func_5139()
{
	var_187_string = "ood2Lara3"; // 0x1414 PushS
	var_188_int = 1; // 0x1415 PushI
	SetVariable(var_187_string, var_188_int); // 0x1416 Func
	return 0; // 0x1418 Return
}


func_6678()
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x1a16 PushV
	var_42_string = "Adding diary entry"; // 0x1a17 PushS
	Trace(var_42_string); // 0x1a18 Func
	var_43_int = 143; // 0x1a1a PushI
	var_44_int = 1; // 0x1a1b PushI
	var_45_int = 15343; // 0x1a1c PushI
	CreateDiaryEntry(var_41_object, var_43_int, var_44_int, var_45_int); // 0x1a1d Func
	var_46_bool = 0; var_47_object = Obj(); var_48_int = 0; // 0x1a1f PushV
	var_47_object = var_41_object; // 0x1a20 Mov
	var_48_int = 139; // 0x1a21 MovI
	func_6469(var_46_bool, var_47_object, var_48_int); // 0x1a22 Call
	return 2; // 0x1a24 Return
}


func_6169(var_211_bool)
{
	var_213_int = 0; var_214_string = ""; // 0x181a PushV
	var_214_string = "d6q01"; // 0x181b MovS
	func_5006(var_213_int, var_214_string); // 0x181c Call
	var_217_int = 1; // 0x181e PushI
	var_218_bool = var_213_int == var_217_int; // 0x181f Eq
	if(var_218_bool == 0) goto Label_6179; // 0x1820 JumpB
	var_211_bool = 1; // 0x1821 MovB
	return 0; // 0x1822 Return
	
Label_6179:
	var_211_bool = 0; // 0x1823 MovB
	return 0; // 0x1824 Return
}


func_5145()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x1419 PushV
	var_44_string = "d2q03"; // 0x141a PushS
	var_45_int = 1; // 0x141b PushI
	SetVariable(var_44_string, var_45_int); // 0x141c Func
	var_46_object = Obj(); // 0x141e PushV
	func_6515(var_46_object); // 0x141f Call
	var_43_object = var_46_object; // 0x1420 Mov
	var_53_string = "d2q03LaraGotoMoneyFoodSelf"; // 0x1422 PushS
	var_54_string = "pt_map_lara"; // 0x1423 PushS
	var_55_int = 0; // 0x1424 PushI
	var_56_int = 15286; // 0x1425 PushI
	var_57_float = 0; // 0x1426 PushV
	func_5060(var_57_float); // 0x1427 Call
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0x1429 ObjFunc
	var_60_string = "d2q03LaraGotoJulia"; // 0x142b PushS
	var_61_string = "pt_map_julia"; // 0x142c PushS
	var_62_int = 0; // 0x142d PushI
	var_63_int = 15288; // 0x142e PushI
	var_64_float = 0; // 0x142f PushV
	func_5060(var_64_float); // 0x1430 Call
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x1432 ObjFunc
	var_65_string = "d2q03LaraGotoMaria"; // 0x1434 PushS
	var_66_string = "pt_map_maria"; // 0x1435 PushS
	var_67_int = 0; // 0x1436 PushI
	var_68_int = 15289; // 0x1437 PushI
	var_69_float = 0; // 0x1438 PushV
	func_5060(var_69_float); // 0x1439 Call
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x143b ObjFunc
	var_70_string = "d2q03LaraGotoMladVlad"; // 0x143d PushS
	var_71_string = "pt_map_mladvlad"; // 0x143e PushS
	var_72_int = 0; // 0x143f PushI
	var_73_int = 15287; // 0x1440 PushI
	var_74_float = 0; // 0x1441 PushV
	func_5060(var_74_float); // 0x1442 Call
	AddMark(var_70_string, var_71_string, var_72_int, var_73_int, var_74_float); // 0x1444 ObjFunc
	func_6598(); // 0x1447 Call
	func_6614(); // 0x144a Call
	var_109_object = Obj(); var_110_string = ""; // 0x144c PushV
	var_110_string = "quest_d2_03"; // 0x144d MovS
	func_5011(var_109_object, var_110_string); // 0x144e Call
	return 2; // 0x1450 Return
}


func_6181(var_219_bool)
{
	var_221_int = 0; var_222_string = ""; // 0x1826 PushV
	var_222_string = "ood6Lara1"; // 0x1827 MovS
	func_5006(var_221_int, var_222_string); // 0x1828 Call
	var_223_int = 0; // 0x182a PushI
	var_224_bool = var_221_int == var_223_int; // 0x182b Eq
	if(var_224_bool == 0) goto Label_6191; // 0x182c JumpB
	var_219_bool = 1; // 0x182d MovB
	return 0; // 0x182e Return
	
Label_6191:
	var_219_bool = 0; // 0x182f MovB
	return 0; // 0x1830 Return
}


func_6694()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0x1a26 PushV
	var_46_string = "Adding diary entry"; // 0x1a27 PushS
	Trace(var_46_string); // 0x1a28 Func
	var_47_int = 160; // 0x1a2a PushI
	var_48_int = 1; // 0x1a2b PushI
	var_49_int = 15393; // 0x1a2c PushI
	CreateDiaryEntry(var_45_object, var_47_int, var_48_int, var_49_int); // 0x1a2d Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0x1a2f PushV
	var_51_object = var_45_object; // 0x1a30 Mov
	var_52_int = 111; // 0x1a31 MovI
	func_6469(var_50_bool, var_51_object, var_52_int); // 0x1a32 Call
	return 2; // 0x1a34 Return
}


func_551(var_2_object, var_194_string)
{
	var_195_bool = 0; // 0x228 PushV
	func_5101(var_195_bool); // 0x229 Call
	var_196_bool = var_195_bool == 0; // 0x22b Not
	if(var_196_bool == 0) goto Label_558; // 0x22c JumpB
	return 0; // 0x22d Return
	
Label_558:
	var_197_bool = var_194_string == var_2_object; // 0x22e Eq
	if(var_197_bool == 0) goto Label_561; // 0x22f JumpB
	return 0; // 0x230 Return
	
Label_561:
	var_198_string = ""; // 0x231 PushV
	var_198_string = var_194_string; // 0x232 Mov
	func_4971(var_198_string); // 0x233 Call
	var_2_object = var_194_string; // 0x235 TMov
	return 0; // 0x236 Return
}


func_6193(var_231_bool)
{
	var_233_int = 0; var_234_string = ""; // 0x1832 PushV
	var_234_string = "microscope_d6q01_lara_blood"; // 0x1833 MovS
	func_5006(var_233_int, var_234_string); // 0x1834 Call
	var_235_int = 0; // 0x1836 PushI
	var_236_bool = var_233_int != var_235_int; // 0x1837 Neq
	if(var_236_bool == 0) goto Label_6203; // 0x1838 JumpB
	var_231_bool = 1; // 0x1839 MovB
	return 0; // 0x183a Return
	
Label_6203:
	var_231_bool = 0; // 0x183b MovB
	return 0; // 0x183c Return
}


func_1585(var_2_object, var_162_string)
{
	var_163_bool = 0; // 0x632 PushV
	func_5101(var_163_bool); // 0x633 Call
	var_164_bool = var_163_bool == 0; // 0x635 Not
	if(var_164_bool == 0) goto Label_1592; // 0x636 JumpB
	return 0; // 0x637 Return
	
Label_1592:
	var_165_bool = var_162_string == var_2_object; // 0x638 Eq
	if(var_165_bool == 0) goto Label_1595; // 0x639 JumpB
	return 0; // 0x63a Return
	
Label_1595:
	var_166_string = ""; // 0x63b PushV
	var_166_string = var_162_string; // 0x63c Mov
	func_4971(var_166_string); // 0x63d Call
	var_2_object = var_162_string; // 0x63f TMov
	return 0; // 0x640 Return
}


func_49(var_0_object, var_34_int, var_35_object)
{
	var_37_object = Obj(); var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_object = Obj(); var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x31 PushV
	var_0_object = var_35_object; // 0x32 TMov
	var_45_bool = 0; var_46_object = Obj(); // 0x33 PushV
	var_46_object = var_35_object; // 0x34 Mov
	func_4911(var_46_object); // 0x35 Call
	var_85_bool = var_45_bool == 0; // 0x37 Not
	if(var_85_bool == 0) goto Label_59; // 0x38 JumpB
	var_34_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_41_object); // 0x3b Func
	var_86_int = 0; // 0x3d PushV
	func_5097(var_86_int); // 0x3e Call
	SetNPCName(var_86_int); // 0x40 ObjFunc
	var_87_string = ""; // 0x42 PushV
	func_5099(var_87_string); // 0x43 Call
	SetPhoto(var_87_string); // 0x45 ObjFunc
	var_88_int = 0; // 0x47 PushV
	func_6565(var_88_int); // 0x48 Call
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
	var_135_bool = var_44_bool == 0; // 0x5e Not
	if(var_135_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_44_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_136_object = Obj(); // 0x65 PushV
	var_136_object = var_35_object; // 0x66 Mov
	func_4967(); // 0x67 Call
	StopDialog(var_41_object); // 0x69 Func
	GetReturnValue(var_43_int); // 0x6b ObjFunc
	var_34_int = var_43_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_6710()
{
	var_147_object = Obj(); var_148_object = Obj(); // 0x1a36 PushV
	var_149_string = "Adding diary entry"; // 0x1a37 PushS
	Trace(var_149_string); // 0x1a38 Func
	var_150_int = 118; // 0x1a3a PushI
	var_151_int = 1; // 0x1a3b PushI
	var_152_int = 13741; // 0x1a3c PushI
	CreateDiaryEntry(var_148_object, var_150_int, var_151_int, var_152_int); // 0x1a3d Func
	var_153_bool = 0; var_154_object = Obj(); var_155_int = 0; // 0x1a3f PushV
	var_154_object = var_148_object; // 0x1a40 Mov
	var_155_int = 111; // 0x1a41 MovI
	func_6469(var_153_bool, var_154_object, var_155_int); // 0x1a42 Call
	return 2; // 0x1a44 Return
}


func_6205(var_237_bool)
{
	var_239_int = 0; var_240_string = ""; // 0x183e PushV
	var_240_string = "ood6Lara2"; // 0x183f MovS
	func_5006(var_239_int, var_240_string); // 0x1840 Call
	var_241_int = 0; // 0x1842 PushI
	var_242_bool = var_239_int == var_241_int; // 0x1843 Eq
	if(var_242_bool == 0) goto Label_6215; // 0x1844 JumpB
	var_237_bool = 1; // 0x1845 MovB
	return 0; // 0x1846 Return
	
Label_6215:
	var_237_bool = 0; // 0x1847 MovB
	return 0; // 0x1848 Return
}


func_6726()
{
	var_30_bool = GlobalVars[1]; // 0x1a46 PushGE
	var_30_bool = 0; // 0x1a47 MovB
	GlobalVars[1] = var_30_bool; // 0x1a48 PopGE
	return 0; // 0x1a49 Return
}


func_6217(var_261_bool)
{
	var_263_int = 0; var_264_string = ""; // 0x184a PushV
	var_264_string = "ood6Lara3"; // 0x184b MovS
	func_5006(var_263_int, var_264_string); // 0x184c Call
	var_265_int = 0; // 0x184e PushI
	var_266_bool = var_263_int == var_265_int; // 0x184f Eq
	if(var_266_bool == 0) goto Label_6227; // 0x1850 JumpB
	var_261_bool = 1; // 0x1851 MovB
	return 0; // 0x1852 Return
	
Label_6227:
	var_261_bool = 0; // 0x1853 MovB
	return 0; // 0x1854 Return
}


func_6730(var_31_object)
{
	var_32_bool = GlobalVars[1]; // 0x1a4b PushGE
	var_33_bool = var_32_bool == 0; // 0x1a4c Not
	if(var_33_bool == 0) goto Label_6743; // 0x1a4d JumpB
	var_34_int = 0; var_35_object = Obj(); // 0x1a4e PushV
	var_35_object = var_31_object; // 0x1a4f Mov
	TaskCall(2); // 0x1a50 TaskCall
	func_49(var_36_object, var_34_int, var_35_object); // 0x1a51 Call
	TaskReturn(); // 0x1a52 TaskReturn
	var_137_bool = GlobalVars[1]; // 0x1a54 PushGE
	var_137_bool = 1; // 0x1a55 MovB
	GlobalVars[1] = var_137_bool; // 0x1a56 PopGE
	
Label_6743:
	var_138_bool = 0; var_139_int = 0; // 0x1a57 PushV
	var_139_int = 1; // 0x1a58 MovI
	func_5082(var_138_bool, var_139_int); // 0x1a59 Call
	if(var_138_bool == 0) goto Label_6755; // 0x1a5b JumpB
	var_146_int = 0; var_147_object = Obj(); // 0x1a5c PushV
	var_147_object = var_31_object; // 0x1a5d Mov
	TaskCall(6); // 0x1a5e TaskCall
	func_1204(var_148_object, var_146_int, var_147_object); // 0x1a5f Call
	TaskReturn(); // 0x1a60 TaskReturn
	return 0; // 0x1a62 Return
	
Label_6755:
	var_388_bool = 0; var_389_int = 0; // 0x1a63 PushV
	var_389_int = 2; // 0x1a64 MovI
	func_5082(var_388_bool, var_389_int); // 0x1a65 Call
	if(var_388_bool == 0) goto Label_6767; // 0x1a67 JumpB
	var_390_int = 0; var_391_object = Obj(); // 0x1a68 PushV
	var_391_object = var_31_object; // 0x1a69 Mov
	TaskCall(8); // 0x1a6a TaskCall
	func_2485(var_392_object, var_390_int, var_391_object); // 0x1a6b Call
	TaskReturn(); // 0x1a6c TaskReturn
	return 0; // 0x1a6e Return
	
Label_6767:
	var_516_bool = 0; var_517_int = 0; // 0x1a6f PushV
	var_517_int = 4; // 0x1a70 MovI
	func_5082(var_516_bool, var_517_int); // 0x1a71 Call
	if(var_516_bool == 0) goto Label_6779; // 0x1a73 JumpB
	var_518_int = 0; var_519_object = Obj(); // 0x1a74 PushV
	var_519_object = var_31_object; // 0x1a75 Mov
	TaskCall(10); // 0x1a76 TaskCall
	func_3459(var_520_object, var_518_int, var_519_object); // 0x1a77 Call
	TaskReturn(); // 0x1a78 TaskReturn
	return 0; // 0x1a7a Return
	
Label_6779:
	var_639_bool = 0; var_640_int = 0; // 0x1a7b PushV
	var_640_int = 5; // 0x1a7c MovI
	func_5082(var_639_bool, var_640_int); // 0x1a7d Call
	if(var_639_bool == 0) goto Label_6791; // 0x1a7f JumpB
	var_641_int = 0; var_642_object = Obj(); // 0x1a80 PushV
	var_642_object = var_31_object; // 0x1a81 Mov
	TaskCall(12); // 0x1a82 TaskCall
	func_4484(var_643_object, var_641_int, var_642_object); // 0x1a83 Call
	TaskReturn(); // 0x1a84 TaskReturn
	return 0; // 0x1a86 Return
	
Label_6791:
	var_694_bool = 0; var_695_int = 0; // 0x1a87 PushV
	var_695_int = 6; // 0x1a88 MovI
	func_5082(var_694_bool, var_695_int); // 0x1a89 Call
	if(var_694_bool == 0) goto Label_6803; // 0x1a8b JumpB
	var_696_int = 0; var_697_object = Obj(); // 0x1a8c PushV
	var_697_object = var_31_object; // 0x1a8d Mov
	TaskCall(4); // 0x1a8e TaskCall
	func_348(var_698_object, var_696_int, var_697_object); // 0x1a8f Call
	TaskReturn(); // 0x1a90 TaskReturn
	return 0; // 0x1a92 Return
	
Label_6803:
	var_813_bool = 0; // 0x1a93 PushV
	func_5088(var_813_bool); // 0x1a94 Call
	return 0; // 0x1a96 Return
}


func_5202()
{
	var_196_object = Obj(); var_197_object = Obj(); // 0x1452 PushV
	var_198_string = "d2q03"; // 0x1453 PushS
	var_199_int = 2; // 0x1454 PushI
	SetVariable(var_198_string, var_199_int); // 0x1455 Func
	var_200_object = Obj(); // 0x1457 PushV
	func_6515(var_200_object); // 0x1458 Call
	var_197_object = var_200_object; // 0x1459 Mov
	var_201_string = "d2q03LaraGotoSklad"; // 0x145b PushS
	var_202_string = "pt_map_d2q03_shouse"; // 0x145c PushS
	var_203_int = 0; // 0x145d PushI
	var_204_int = 15290; // 0x145e PushI
	var_205_float = 0; // 0x145f PushV
	func_5060(var_205_float); // 0x1460 Call
	AddMark(var_201_string, var_202_string, var_203_int, var_204_int, var_205_float); // 0x1462 ObjFunc
	var_206_string = "d2q03LaraGotoSkladSelf"; // 0x1464 PushS
	var_207_string = "pt_map_lara"; // 0x1465 PushS
	var_208_int = 0; // 0x1466 PushI
	var_209_int = 15291; // 0x1467 PushI
	var_210_float = 0; // 0x1468 PushV
	func_5060(var_210_float); // 0x1469 Call
	AddMark(var_206_string, var_207_string, var_208_int, var_209_int, var_210_float); // 0x146b ObjFunc
	func_6630(); // 0x146e Call
	return 2; // 0x1470 Return
}


func_6229(var_290_bool)
{
	var_292_int = 0; var_293_string = ""; // 0x1856 PushV
	var_293_string = "KnowAlexandr"; // 0x1857 MovS
	func_5006(var_292_int, var_293_string); // 0x1858 Call
	var_294_int = 1; // 0x185a PushI
	var_295_bool = var_292_int == var_294_int; // 0x185b Eq
	if(var_295_bool == 0) goto Label_6239; // 0x185c JumpB
	var_290_bool = 1; // 0x185d MovB
	return 0; // 0x185e Return
	
Label_6239:
	var_290_bool = 0; // 0x185f MovB
	return 0; // 0x1860 Return
}


func_3671(var_2_object, var_276_string)
{
	var_277_bool = 0; // 0xe58 PushV
	func_5101(var_277_bool); // 0xe59 Call
	var_278_bool = var_277_bool == 0; // 0xe5b Not
	if(var_278_bool == 0) goto Label_3678; // 0xe5c JumpB
	return 0; // 0xe5d Return
	
Label_3678:
	var_279_bool = var_276_string == var_2_object; // 0xe5e Eq
	if(var_279_bool == 0) goto Label_3681; // 0xe5f JumpB
	return 0; // 0xe60 Return
	
Label_3681:
	var_280_string = ""; // 0xe61 PushV
	var_280_string = var_276_string; // 0xe62 Mov
	func_4971(var_280_string); // 0xe63 Call
	var_2_object = var_276_string; // 0xe65 TMov
	return 0; // 0xe66 Return
}


func_6241(var_276_bool)
{
	var_278_int = 0; var_279_string = ""; // 0x1862 PushV
	var_279_string = "ood6Lara4"; // 0x1863 MovS
	func_5006(var_278_int, var_279_string); // 0x1864 Call
	var_280_int = 0; // 0x1866 PushI
	var_281_bool = var_278_int == var_280_int; // 0x1867 Eq
	if(var_281_bool == 0) goto Label_6251; // 0x1868 JumpB
	var_276_bool = 1; // 0x1869 MovB
	return 0; // 0x186a Return
	
Label_6251:
	var_276_bool = 0; // 0x186b MovB
	return 0; // 0x186c Return
}


func_5731()
{
	var_38_string = "KnowLara"; // 0x1664 PushS
	var_39_int = 1; // 0x1665 PushI
	SetVariable(var_38_string, var_39_int); // 0x1666 Func
	return 0; // 0x1668 Return
}


func_5737()
{
	var_379_string = "KnowMaria"; // 0x166a PushS
	var_380_int = 1; // 0x166b PushI
	SetVariable(var_379_string, var_380_int); // 0x166c Func
	return 0; // 0x166e Return
}


func_6253(var_243_bool)
{
	var_245_int = 0; var_246_string = ""; // 0x186e PushV
	var_246_string = "d6q01"; // 0x186f MovS
	func_5006(var_245_int, var_246_string); // 0x1870 Call
	var_247_int = 1000; // 0x1872 PushI
	var_248_bool = var_245_int == var_247_int; // 0x1873 Eq
	if(var_248_bool == 0) goto Label_6263; // 0x1874 JumpB
	var_243_bool = 1; // 0x1875 MovB
	return 0; // 0x1876 Return
	
Label_6263:
	var_243_bool = 0; // 0x1877 MovB
	return 0; // 0x1878 Return
}


func_5743()
{
	var_89_string = "ood1Lara4"; // 0x1670 PushS
	var_90_int = 1; // 0x1671 PushI
	SetVariable(var_89_string, var_90_int); // 0x1672 Func
	return 0; // 0x1674 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_97_object, var_98_object)
{
	var_0_object = var_98_object; // 0x71 TMov
	var_1_object = var_97_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_103_int = 1; // 0x74 PushI
	if(var_103_int == 0) goto Label_140; // 0x75 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x76 PushV
	var_104_object = var_1_object; // 0x77 MovT
	var_105_object = var_0_object; // 0x78 MovT
	func_5731(); // 0x79 Call
	var_108_string = ""; // 0x7b PushV
	var_108_string = "Neutral"; // 0x7c MovS
	func_170(var_98_object, var_108_string); // 0x7d Call
	var_123_int = 441; // 0x7f PushI
	SetMessage(var_123_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_124_int = 8443; // 0x84 PushI
	var_125_int = 9267; // 0x85 PushI
	var_126_int = 9266; // 0x86 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x87 TObjFunc
	goto Label_140; // 0x89 Jump
	
Label_140:
	var_127_bool = 0; // 0x8c PushV
	func_5101(var_127_bool); // 0x8d Call
	if(var_127_bool == 0) goto Label_155; // 0x8f JumpB
	
Label_144:
	lshWaitForAnimEnd(); // 0x90 Func
	var_128_object = var_3_object; // 0x92 PushT
	if(var_128_object == 0) goto Label_149; // 0x93 JumpB
	goto Label_154; // 0x94 Jump
	
Label_154:
	goto Label_169; // 0x9a Jump
	
Label_169:
	return 0; // 0xa9 Return
	
Label_149:
	var_129_string = ""; // 0x95 PushV
	var_129_string = var_2_object; // 0x96 MovT
	func_4971(var_129_string); // 0x97 Call
	goto Label_144; // 0x99 Jump
	
Label_155:
	var_130_string = "all"; // 0x9b PushS
	var_131_string = "idle"; // 0x9c PushS
	PlayAnimation(var_130_string, var_131_string); // 0x9d Func
	
Label_159:
	WaitForAnimEnd(); // 0x9f Func
	var_132_object = var_3_object; // 0xa1 PushT
	if(var_132_object == 0) goto Label_164; // 0xa2 JumpB
	goto Label_169; // 0xa3 Jump
	
Label_164:
	var_133_string = "all"; // 0xa4 PushS
	var_134_string = "idle"; // 0xa5 PushS
	PlayAnimation(var_133_string, var_134_string); // 0xa6 Func
	goto Label_159; // 0xa8 Jump
}


func_5234()
{
	var_135_object = Obj(); var_136_object = Obj(); var_137_int = 0; var_138_object = Obj(); var_139_object = Obj(); var_140_int = 0; // 0x1472 PushV
	var_141_object = Obj(); // 0x1473 PushV
	func_6515(var_141_object); // 0x1474 Call
	var_138_object = var_141_object; // 0x1475 Mov
	var_142_string = "d2q03BirdmaskGotoLara"; // 0x1477 PushS
	FindMark(var_139_object, var_142_string); // 0x1478 ObjFunc
	var_143_object = var_139_object; // 0x147a Push
	if(var_143_object == 0) goto Label_5246; // 0x147b JumpB
	Remove(); // 0x147c ObjFunc
	
Label_5246:
	var_144_string = "d2q03BirdmaskGotoLaraSelf"; // 0x147e PushS
	FindMark(var_139_object, var_144_string); // 0x147f ObjFunc
	var_145_object = var_139_object; // 0x1481 Push
	if(var_145_object == 0) goto Label_5253; // 0x1482 JumpB
	Remove(); // 0x1483 ObjFunc
	
Label_5253:
	var_146_string = "d2q03LaraGotoJulia"; // 0x1485 PushS
	FindMark(var_139_object, var_146_string); // 0x1486 ObjFunc
	var_147_object = var_139_object; // 0x1488 Push
	if(var_147_object == 0) goto Label_5260; // 0x1489 JumpB
	Remove(); // 0x148a ObjFunc
	
Label_5260:
	var_148_string = "d2q03LaraGotoMaria"; // 0x148c PushS
	FindMark(var_139_object, var_148_string); // 0x148d ObjFunc
	var_149_object = var_139_object; // 0x148f Push
	if(var_149_object == 0) goto Label_5267; // 0x1490 JumpB
	Remove(); // 0x1491 ObjFunc
	
Label_5267:
	var_150_string = "d2q03LaraGotoMladVlad"; // 0x1493 PushS
	FindMark(var_139_object, var_150_string); // 0x1494 ObjFunc
	var_151_object = var_139_object; // 0x1496 Push
	if(var_151_object == 0) goto Label_5274; // 0x1497 JumpB
	Remove(); // 0x1498 ObjFunc
	
Label_5274:
	var_152_string = "d2q03LaraGotoMoneyFoodSelf"; // 0x149a PushS
	FindMark(var_139_object, var_152_string); // 0x149b ObjFunc
	var_153_object = var_139_object; // 0x149d Push
	if(var_153_object == 0) goto Label_5281; // 0x149e JumpB
	Remove(); // 0x149f ObjFunc
	
Label_5281:
	var_154_string = "d2q03LaraGotoSklad"; // 0x14a1 PushS
	FindMark(var_139_object, var_154_string); // 0x14a2 ObjFunc
	var_155_object = var_139_object; // 0x14a4 Push
	if(var_155_object == 0) goto Label_5288; // 0x14a5 JumpB
	Remove(); // 0x14a6 ObjFunc
	
Label_5288:
	var_156_string = "d2q03LaraGotoSkladSelf"; // 0x14a8 PushS
	FindMark(var_139_object, var_156_string); // 0x14a9 ObjFunc
	var_157_object = var_139_object; // 0x14ab Push
	if(var_157_object == 0) goto Label_5295; // 0x14ac JumpB
	Remove(); // 0x14ad ObjFunc
	
Label_5295:
	func_6646(); // 0x14b0 Call
	var_167_string = "smoked_meat"; // 0x14b2 PushS
	var_168_int = 3; // 0x14b3 PushI
	RemoveItemByType(var_140_int, var_167_string, var_168_int); // 0x14b4 ObjFunc
	var_169_string = "dried_fish"; // 0x14b6 PushS
	var_170_int = 3; // 0x14b7 PushI
	RemoveItemByType(var_140_int, var_169_string, var_170_int); // 0x14b8 ObjFunc
	var_171_string = "bread"; // 0x14ba PushS
	var_172_int = 3; // 0x14bb PushI
	RemoveItemByType(var_140_int, var_171_string, var_172_int); // 0x14bc ObjFunc
	var_173_bool = 0; var_174_string = ""; var_175_string = ""; // 0x14be PushV
	var_174_string = "quest_d2_03"; // 0x14bf MovS
	var_175_string = "completed"; // 0x14c0 MovS
	func_5048(var_173_bool, var_174_string, var_175_string); // 0x14c1 Call
	return 6; // 0x14c3 Return
}


func_5749()
{
	var_95_string = "ood1Lara5"; // 0x1676 PushS
	var_96_int = 1; // 0x1677 PushI
	SetVariable(var_95_string, var_96_int); // 0x1678 Func
	return 0; // 0x167a Return
}


func_6265(var_250_bool)
{
	var_252_int = 0; var_253_string = ""; // 0x187a PushV
	var_253_string = "d6q01"; // 0x187b MovS
	func_5006(var_252_int, var_253_string); // 0x187c Call
	var_254_int = -1; // 0x187e PushI
	var_255_bool = var_252_int == var_254_int; // 0x187f Eq
	if(var_255_bool == 0) goto Label_6275; // 0x1880 JumpB
	var_250_bool = 1; // 0x1881 MovB
	return 0; // 0x1882 Return
	
Label_6275:
	var_250_bool = 0; // 0x1883 MovB
	return 0; // 0x1884 Return
}


func_5755()
{
	var_101_string = "ood1Lara6"; // 0x167c PushS
	var_102_int = 1; // 0x167d PushI
	SetVariable(var_101_string, var_102_int); // 0x167e Func
	return 0; // 0x1680 Return
}


func_5761()
{
	var_107_string = "ood1Lara7"; // 0x1682 PushS
	var_108_int = 1; // 0x1683 PushI
	SetVariable(var_107_string, var_108_int); // 0x1684 Func
	return 0; // 0x1686 Return
}


func_6277(var_258_bool)
{
	var_260_int = 0; var_261_string = ""; // 0x1886 PushV
	var_261_string = "KnowJulia"; // 0x1887 MovS
	func_5006(var_260_int, var_261_string); // 0x1888 Call
	var_262_int = 1; // 0x188a PushI
	var_263_bool = var_260_int == var_262_int; // 0x188b Eq
	if(var_263_bool == 0) goto Label_6287; // 0x188c JumpB
	var_258_bool = 1; // 0x188d MovB
	return 0; // 0x188e Return
	
Label_6287:
	var_258_bool = 0; // 0x188f MovB
	return 0; // 0x1890 Return
}


func_5767()
{
	var_113_string = "ood1Lara8"; // 0x1688 PushS
	var_114_int = 1; // 0x1689 PushI
	SetVariable(var_113_string, var_114_int); // 0x168a Func
	return 0; // 0x168c Return
}


func_5773()
{
	var_119_string = "ood1Lara9"; // 0x168e PushS
	var_120_int = 1; // 0x168f PushI
	SetVariable(var_119_string, var_120_int); // 0x1690 Func
	return 0; // 0x1692 Return
}


func_6289(var_274_bool)
{
	var_276_int = 0; var_277_string = ""; // 0x1892 PushV
	var_277_string = "KnowKaterina"; // 0x1893 MovS
	func_5006(var_276_int, var_277_string); // 0x1894 Call
	var_278_int = 1; // 0x1896 PushI
	var_279_bool = var_276_int == var_278_int; // 0x1897 Eq
	if(var_279_bool == 0) goto Label_6299; // 0x1898 JumpB
	var_274_bool = 1; // 0x1899 MovB
	return 0; // 0x189a Return
	
Label_6299:
	var_274_bool = 0; // 0x189b MovB
	return 0; // 0x189c Return
}


func_5779()
{
	var_222_object = Obj(); var_223_string = ""; var_224_float = 0; // 0x1694 PushV
	var_225_object = Obj(); // 0x1695 PushV
	func_6515(var_225_object); // 0x1696 Call
	var_222_object = var_225_object; // 0x1697 Mov
	var_223_string = "pt_map_d2q03_shouse"; // 0x1699 MovS
	var_224_float = 2; // 0x169a MovI
	func_6532(var_222_object, var_223_string, var_224_float); // 0x169b Call
	var_245_object = Obj(); // 0x169d PushV
	func_6515(var_245_object); // 0x169e Call
	ShowMap(var_245_object); // 0x16a0 ObjFunc
	return 0; // 0x16a2 Return
}


func_6301(var_248_bool)
{
	var_250_int = 0; var_251_string = ""; // 0x189e PushV
	var_251_string = "ood1Lara4"; // 0x189f MovS
	func_5006(var_250_int, var_251_string); // 0x18a0 Call
	var_252_int = 0; // 0x18a2 PushI
	var_253_bool = var_250_int == var_252_int; // 0x18a3 Eq
	if(var_253_bool == 0) goto Label_6311; // 0x18a4 JumpB
	var_248_bool = 1; // 0x18a5 MovB
	return 0; // 0x18a6 Return
	
Label_6311:
	var_248_bool = 0; // 0x18a7 MovB
	return 0; // 0x18a8 Return
}


func_5795(var_234_object)
{
	var_236_string = "morfin is given"; // 0x16a4 PushS
	Trace(var_236_string); // 0x16a5 Func
	var_237_object = Obj(); var_238_string = ""; var_239_int = 0; // 0x16a7 PushV
	var_237_object = var_234_object; // 0x16a8 Mov
	var_238_string = "morfin"; // 0x16a9 MovS
	var_239_int = 1; // 0x16aa MovI
	func_5035(var_237_object, var_238_string, var_239_int); // 0x16ab Call
	return 0; // 0x16ad Return
}


func_6313(var_264_bool)
{
	var_266_int = 0; var_267_string = ""; // 0x18aa PushV
	var_267_string = "ood1Lara5"; // 0x18ab MovS
	func_5006(var_266_int, var_267_string); // 0x18ac Call
	var_268_int = 0; // 0x18ae PushI
	var_269_bool = var_266_int == var_268_int; // 0x18af Eq
	if(var_269_bool == 0) goto Label_6323; // 0x18b0 JumpB
	var_264_bool = 1; // 0x18b1 MovB
	return 0; // 0x18b2 Return
	
Label_6323:
	var_264_bool = 0; // 0x18b3 MovB
	return 0; // 0x18b4 Return
}


func_170(var_2_object, var_40_string)
{
	var_41_bool = 0; // 0xab PushV
	func_5101(var_41_bool); // 0xac Call
	var_42_bool = var_41_bool == 0; // 0xae Not
	if(var_42_bool == 0) goto Label_177; // 0xaf JumpB
	return 0; // 0xb0 Return
	
Label_177:
	var_43_bool = var_40_string == var_2_object; // 0xb1 Eq
	if(var_43_bool == 0) goto Label_180; // 0xb2 JumpB
	return 0; // 0xb3 Return
	
Label_180:
	var_44_string = ""; // 0xb4 PushV
	var_44_string = var_40_string; // 0xb5 Mov
	func_4971(var_44_string); // 0xb6 Call
	var_2_object = var_40_string; // 0xb8 TMov
	return 0; // 0xb9 Return
}


func_5806(var_240_object)
{
	var_242_string = "etorfin is given"; // 0x16af PushS
	Trace(var_242_string); // 0x16b0 Func
	var_243_object = Obj(); var_244_string = ""; var_245_int = 0; // 0x16b2 PushV
	var_243_object = var_240_object; // 0x16b3 Mov
	var_244_string = "etorfin"; // 0x16b4 MovS
	var_245_int = 1; // 0x16b5 MovI
	func_5035(var_243_object, var_244_string, var_245_int); // 0x16b6 Call
	return 0; // 0x16b8 Return
}


func_1204(var_0_object, var_146_int, var_147_object)
{
	var_149_object = Obj(); var_150_bool = 0; var_151_int = 0; var_152_bool = 0; var_153_object = Obj(); var_154_bool = 0; var_155_int = 0; var_156_bool = 0; // 0x4b4 PushV
	var_0_object = var_147_object; // 0x4b5 TMov
	var_157_bool = 0; var_158_object = Obj(); // 0x4b6 PushV
	var_158_object = var_147_object; // 0x4b7 Mov
	func_4911(var_158_object); // 0x4b8 Call
	var_159_bool = var_157_bool == 0; // 0x4ba Not
	if(var_159_bool == 0) goto Label_1214; // 0x4bb JumpB
	var_146_int = -2; // 0x4bc MovI
	return 8; // 0x4bd Return
	
Label_1214:
	CreateDialog(var_153_object); // 0x4be Func
	var_160_int = 0; // 0x4c0 PushV
	func_5097(var_160_int); // 0x4c1 Call
	SetNPCName(var_160_int); // 0x4c3 ObjFunc
	var_161_string = ""; // 0x4c5 PushV
	func_5099(var_161_string); // 0x4c6 Call
	SetPhoto(var_161_string); // 0x4c8 ObjFunc
	var_162_int = 0; // 0x4ca PushV
	func_6565(var_162_int); // 0x4cb Call
	SetPlayerName(var_162_int); // 0x4cd ObjFunc
	var_155_int = -1; // 0x4cf MovI
	IsOverrideActive(var_154_bool); // 0x4d0 Func
	var_163_bool = var_154_bool; // 0x4d2 Push
	if(var_163_bool == 0) goto Label_1238; // 0x4d3 JumpB
	var_146_int = -2; // 0x4d4 MovI
	return 8; // 0x4d5 Return
	
Label_1238:
	DoDialog(var_153_object); // 0x4d6 Func
	var_164_object = Obj(); var_165_object = Obj(); // 0x4d8 PushV
	var_164_object = var_147_object; // 0x4d9 Mov
	var_165_object = var_153_object; // 0x4da Mov
	TaskCall(7); // 0x4db TaskCall
	func_1267(var_166_object, var_167_object, var_168_string, var_169_bool, var_164_object, var_165_object); // 0x4dc Call
	TaskReturn(); // 0x4dd TaskReturn
	IsDialogEnd(var_156_bool); // 0x4df ObjFunc
	
Label_1249:
	var_386_bool = var_156_bool == 0; // 0x4e1 Not
	if(var_386_bool == 0) goto Label_1256; // 0x4e2 JumpB
	sync(); // 0x4e3 Func
	IsDialogEnd(var_156_bool); // 0x4e5 ObjFunc
	goto Label_1249; // 0x4e7 Jump
	
Label_1256:
	var_387_object = Obj(); // 0x4e8 PushV
	var_387_object = var_147_object; // 0x4e9 Mov
	func_4967(); // 0x4ea Call
	StopDialog(var_153_object); // 0x4ec Func
	GetReturnValue(var_155_int); // 0x4ee ObjFunc
	var_146_int = var_155_int; // 0x4f0 Mov
	return 8; // 0x4f1 Return
}


func_6325(var_280_bool)
{
	var_282_int = 0; var_283_string = ""; // 0x18b6 PushV
	var_283_string = "ood1Lara6"; // 0x18b7 MovS
	func_5006(var_282_int, var_283_string); // 0x18b8 Call
	var_284_int = 0; // 0x18ba PushI
	var_285_bool = var_282_int == var_284_int; // 0x18bb Eq
	if(var_285_bool == 0) goto Label_6335; // 0x18bc JumpB
	var_280_bool = 1; // 0x18bd MovB
	return 0; // 0x18be Return
	
Label_6335:
	var_280_bool = 0; // 0x18bf MovB
	return 0; // 0x18c0 Return
}


func_5817(var_215_object)
{
	var_217_string = "novocaine is given"; // 0x16ba PushS
	Trace(var_217_string); // 0x16bb Func
	var_218_object = Obj(); var_219_string = ""; var_220_int = 0; // 0x16bd PushV
	var_218_object = var_215_object; // 0x16be Mov
	var_219_string = "novocaine"; // 0x16bf MovS
	var_220_int = 1; // 0x16c0 MovI
	func_5035(var_218_object, var_219_string, var_220_int); // 0x16c1 Call
	return 0; // 0x16c3 Return
}


func_2751(var_2_object, var_263_string)
{
	var_264_bool = 0; // 0xac0 PushV
	func_5101(var_264_bool); // 0xac1 Call
	var_265_bool = var_264_bool == 0; // 0xac3 Not
	if(var_265_bool == 0) goto Label_2758; // 0xac4 JumpB
	return 0; // 0xac5 Return
	
Label_2758:
	var_266_bool = var_263_string == var_2_object; // 0xac6 Eq
	if(var_266_bool == 0) goto Label_2761; // 0xac7 JumpB
	return 0; // 0xac8 Return
	
Label_2761:
	var_267_string = ""; // 0xac9 PushV
	var_267_string = var_263_string; // 0xaca Mov
	func_4971(var_267_string); // 0xacb Call
	var_2_object = var_263_string; // 0xacd TMov
	return 0; // 0xace Return
}


func_6337(var_296_bool)
{
	var_298_int = 0; var_299_string = ""; // 0x18c2 PushV
	var_299_string = "ood1Lara7"; // 0x18c3 MovS
	func_5006(var_298_int, var_299_string); // 0x18c4 Call
	var_300_int = 0; // 0x18c6 PushI
	var_301_bool = var_298_int == var_300_int; // 0x18c7 Eq
	if(var_301_bool == 0) goto Label_6347; // 0x18c8 JumpB
	var_296_bool = 1; // 0x18c9 MovB
	return 0; // 0x18ca Return
	
Label_6347:
	var_296_bool = 0; // 0x18cb MovB
	return 0; // 0x18cc Return
}


func_5828()
{
	var_103_string = "KnowPredictions"; // 0x16c5 PushS
	var_104_int = 1; // 0x16c6 PushI
	SetVariable(var_103_string, var_104_int); // 0x16c7 Func
	return 0; // 0x16c9 Return
}


func_5318()
{
	var_181_string = "playsound"; // 0x14c7 PushS
	var_182_string = "giveitem"; // 0x14c8 PushS
	TriggerWorld(var_181_string, var_182_string); // 0x14c9 Func
	return 0; // 0x14cb Return
}


func_5834(var_531_bool)
{
	var_533_int = 0; var_534_string = ""; // 0x16cb PushV
	var_534_string = "KnowWarehouses"; // 0x16cc MovS
	func_5006(var_533_int, var_534_string); // 0x16cd Call
	var_535_int = 1; // 0x16cf PushI
	var_536_bool = var_533_int == var_535_int; // 0x16d0 Eq
	if(var_536_bool == 0) goto Label_5844; // 0x16d1 JumpB
	var_531_bool = 1; // 0x16d2 MovB
	return 0; // 0x16d3 Return
	
Label_5844:
	var_531_bool = 0; // 0x16d4 MovB
	return 0; // 0x16d5 Return
}


func_5324()
{
	var_191_bool = 0; var_192_string = ""; var_193_string = ""; // 0x14cd PushV
	var_192_string = "quest_d2_03"; // 0x14ce MovS
	var_193_string = "birdmask"; // 0x14cf MovS
	func_5048(var_191_bool, var_192_string, var_193_string); // 0x14d0 Call
	return 0; // 0x14d2 Return
}


func_6349(var_312_bool)
{
	var_314_int = 0; var_315_string = ""; // 0x18ce PushV
	var_315_string = "ood1Lara8"; // 0x18cf MovS
	func_5006(var_314_int, var_315_string); // 0x18d0 Call
	var_316_int = 0; // 0x18d2 PushI
	var_317_bool = var_314_int == var_316_int; // 0x18d3 Eq
	if(var_317_bool == 0) goto Label_6359; // 0x18d4 JumpB
	var_312_bool = 1; // 0x18d5 MovB
	return 0; // 0x18d6 Return
	
Label_6359:
	var_312_bool = 0; // 0x18d7 MovB
	return 0; // 0x18d8 Return
}


func_5331()
{
	var_48_string = "d1q01KnowEpidemic"; // 0x14d4 PushS
	var_49_int = 1; // 0x14d5 PushI
	SetVariable(var_48_string, var_49_int); // 0x14d6 Func
	func_6582(); // 0x14d9 Call
	return 0; // 0x14db Return
}


func_5846(var_127_bool)
{
	var_129_int = 0; var_130_string = ""; // 0x16d7 PushV
	var_130_string = "ood1Lara1"; // 0x16d8 MovS
	func_5006(var_129_int, var_130_string); // 0x16d9 Call
	var_133_int = 0; // 0x16db PushI
	var_134_bool = var_129_int == var_133_int; // 0x16dc Eq
	if(var_134_bool == 0) goto Label_5856; // 0x16dd JumpB
	var_127_bool = 1; // 0x16de MovB
	return 0; // 0x16df Return
	
Label_5856:
	var_127_bool = 0; // 0x16e0 MovB
	return 0; // 0x16e1 Return
}


func_6361(var_328_bool)
{
	var_330_int = 0; var_331_string = ""; // 0x18da PushV
	var_331_string = "ood1Lara9"; // 0x18db MovS
	func_5006(var_330_int, var_331_string); // 0x18dc Call
	var_332_int = 0; // 0x18de PushI
	var_333_bool = var_330_int == var_332_int; // 0x18df Eq
	if(var_333_bool == 0) goto Label_6371; // 0x18e0 JumpB
	var_328_bool = 1; // 0x18e1 MovB
	return 0; // 0x18e2 Return
	
Label_6371:
	var_328_bool = 0; // 0x18e3 MovB
	return 0; // 0x18e4 Return
}


func_5340()
{
	var_161_object = Obj(); var_162_string = ""; var_163_float = 0; // 0x14dd PushV
	var_164_object = Obj(); // 0x14de PushV
	func_6515(var_164_object); // 0x14df Call
	var_161_object = var_164_object; // 0x14e0 Mov
	var_162_string = "pt_map_ospina"; // 0x14e2 MovS
	var_163_float = 2; // 0x14e3 MovI
	func_6532(var_161_object, var_162_string, var_163_float); // 0x14e4 Call
	var_165_object = Obj(); // 0x14e6 PushV
	func_6515(var_165_object); // 0x14e7 Call
	ShowMap(var_165_object); // 0x14e9 ObjFunc
	return 0; // 0x14eb Return
}


func_5858(var_155_bool)
{
	var_157_int = 0; var_158_string = ""; // 0x16e3 PushV
	var_158_string = "ood1Lara2"; // 0x16e4 MovS
	func_5006(var_157_int, var_158_string); // 0x16e5 Call
	var_159_int = 0; // 0x16e7 PushI
	var_160_bool = var_157_int == var_159_int; // 0x16e8 Eq
	if(var_160_bool == 0) goto Label_5868; // 0x16e9 JumpB
	var_155_bool = 1; // 0x16ea MovB
	return 0; // 0x16eb Return
	
Label_5868:
	var_155_bool = 0; // 0x16ec MovB
	return 0; // 0x16ed Return
}


func_6373(var_306_bool)
{
	var_308_int = 0; var_309_string = ""; // 0x18e6 PushV
	var_309_string = "KnowMladVlad"; // 0x18e7 MovS
	func_5006(var_308_int, var_309_string); // 0x18e8 Call
	var_310_int = 1; // 0x18ea PushI
	var_311_bool = var_308_int == var_310_int; // 0x18eb Eq
	if(var_311_bool == 0) goto Label_6383; // 0x18ec JumpB
	var_306_bool = 1; // 0x18ed MovB
	return 0; // 0x18ee Return
	
Label_6383:
	var_306_bool = 0; // 0x18ef MovB
	return 0; // 0x18f0 Return
}


func_5356()
{
	var_92_object = Obj(); var_93_string = ""; var_94_float = 0; // 0x14ed PushV
	var_95_object = Obj(); // 0x14ee PushV
	func_6515(var_95_object); // 0x14ef Call
	var_92_object = var_95_object; // 0x14f0 Mov
	var_93_string = "pt_map_mladvlad"; // 0x14f2 MovS
	var_94_float = 2; // 0x14f3 MovI
	func_6532(var_92_object, var_93_string, var_94_float); // 0x14f4 Call
	var_115_object = Obj(); // 0x14f6 PushV
	func_6515(var_115_object); // 0x14f7 Call
	ShowMap(var_115_object); // 0x14f9 ObjFunc
	return 0; // 0x14fb Return
}


func_5870(var_218_bool)
{
	var_220_int = 0; var_221_string = ""; // 0x16ef PushV
	var_221_string = "ood1Lara3"; // 0x16f0 MovS
	func_5006(var_220_int, var_221_string); // 0x16f1 Call
	var_222_int = 0; // 0x16f3 PushI
	var_223_bool = var_220_int == var_222_int; // 0x16f4 Eq
	if(var_223_bool == 0) goto Label_5880; // 0x16f5 JumpB
	var_218_bool = 1; // 0x16f6 MovB
	return 0; // 0x16f7 Return
	
Label_5880:
	var_218_bool = 0; // 0x16f8 MovB
	return 0; // 0x16f9 Return
}


func_6385(var_242_bool)
{
	var_244_int = 0; var_245_string = ""; // 0x18f2 PushV
	var_245_string = "KnowPredictions"; // 0x18f3 MovS
	func_5006(var_244_int, var_245_string); // 0x18f4 Call
	var_246_int = 1; // 0x18f6 PushI
	var_247_bool = var_244_int == var_246_int; // 0x18f7 Eq
	if(var_247_bool == 0) goto Label_6395; // 0x18f8 JumpB
	var_242_bool = 1; // 0x18f9 MovB
	return 0; // 0x18fa Return
	
Label_6395:
	var_242_bool = 0; // 0x18fb MovB
	return 0; // 0x18fc Return
}


func_1267(var_0_object, var_1_object, var_2_object, var_3_object, var_164_object, var_165_object)
{
	var_0_object = var_165_object; // 0x4f4 TMov
	var_1_object = var_164_object; // 0x4f5 TMov
	var_3_object = 0; // 0x4f6 TMovB
	var_170_int = 1; // 0x4f7 PushI
	if(var_170_int == 0) goto Label_1555; // 0x4f8 JumpB
	var_171_bool = 0; // 0x4f9 PushV
	var_171_bool = 0; // 0x4fa MovB
	var_172_bool = 0; // 0x4fb PushV
	var_172_bool = 0; // 0x4fc MovB
	var_173_bool = 0; // 0x4fd PushV
	var_173_bool = 0; // 0x4fe MovB
	var_174_bool = 0; // 0x4ff PushV
	var_174_bool = 0; // 0x500 MovB
	var_175_bool = 0; var_176_object = Obj(); // 0x501 PushV
	var_176_object = var_1_object; // 0x502 MovT
	func_5846(var_176_object); // 0x503 Call
	if(var_175_bool == 0) goto Label_1293; // 0x505 JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x506 PushV
	var_184_object = var_1_object; // 0x507 MovT
	func_5894(var_184_object); // 0x508 Call
	var_189_bool = var_183_bool == 0; // 0x50a Not
	if(var_189_bool == 0) goto Label_1293; // 0x50b JumpB
	var_174_bool = 1; // 0x50c MovB
	
Label_1293:
	if(var_174_bool == 0) goto Label_1301; // 0x50d JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x50e PushV
	var_191_object = var_1_object; // 0x50f MovT
	func_5882(var_191_object); // 0x510 Call
	var_196_bool = var_190_bool == 0; // 0x512 Not
	if(var_196_bool == 0) goto Label_1301; // 0x513 JumpB
	var_173_bool = 1; // 0x514 MovB
	
Label_1301:
	if(var_173_bool == 0) goto Label_1308; // 0x515 JumpB
	var_197_bool = 0; var_198_object = Obj(); // 0x516 PushV
	var_198_object = var_1_object; // 0x517 MovT
	func_6005(var_198_object); // 0x518 Call
	if(var_197_bool == 0) goto Label_1308; // 0x51a JumpB
	var_172_bool = 1; // 0x51b MovB
	
Label_1308:
	if(var_172_bool == 0) goto Label_1316; // 0x51c JumpB
	var_203_bool = 0; var_204_object = Obj(); // 0x51d PushV
	var_204_object = var_1_object; // 0x51e MovT
	func_5858(var_204_object); // 0x51f Call
	var_209_bool = var_203_bool == 0; // 0x521 Not
	if(var_209_bool == 0) goto Label_1316; // 0x522 JumpB
	var_171_bool = 1; // 0x523 MovB
	
Label_1316:
	if(var_171_bool == 0) goto Label_1337; // 0x524 JumpB
	var_210_string = ""; // 0x525 PushV
	var_210_string = "Neutral"; // 0x526 MovS
	func_1585(var_165_object, var_210_string); // 0x527 Call
	var_215_int = 5423; // 0x529 PushI
	SetMessage(var_215_int); // 0x52a TObjFunc
	ClearReplies(); // 0x52c TObjFunc
	var_216_int = 5447; // 0x52e PushI
	var_217_int = 6886; // 0x52f PushI
	var_218_int = 6001; // 0x530 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x531 TObjFunc
	var_219_int = 6231; // 0x533 PushI
	var_220_int = 6893; // 0x534 PushI
	var_221_int = 6892; // 0x535 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x536 TObjFunc
	goto Label_1555; // 0x538 Jump
	
Label_1555:
	var_222_bool = 0; // 0x613 PushV
	func_5101(var_222_bool); // 0x614 Call
	if(var_222_bool == 0) goto Label_1570; // 0x616 JumpB
	
Label_1559:
	lshWaitForAnimEnd(); // 0x617 Func
	var_223_object = var_3_object; // 0x619 PushT
	if(var_223_object == 0) goto Label_1564; // 0x61a JumpB
	goto Label_1569; // 0x61b Jump
	
Label_1569:
	goto Label_1584; // 0x621 Jump
	
Label_1584:
	return 0; // 0x630 Return
	
Label_1564:
	var_224_string = ""; // 0x61c PushV
	var_224_string = var_2_object; // 0x61d MovT
	func_4971(var_224_string); // 0x61e Call
	goto Label_1559; // 0x620 Jump
	
Label_1570:
	var_225_string = "all"; // 0x622 PushS
	var_226_string = "idle"; // 0x623 PushS
	PlayAnimation(var_225_string, var_226_string); // 0x624 Func
	
Label_1574:
	WaitForAnimEnd(); // 0x626 Func
	var_227_object = var_3_object; // 0x628 PushT
	if(var_227_object == 0) goto Label_1579; // 0x629 JumpB
	goto Label_1584; // 0x62a Jump
	
Label_1579:
	var_228_string = "all"; // 0x62b PushS
	var_229_string = "idle"; // 0x62c PushS
	PlayAnimation(var_228_string, var_229_string); // 0x62d Func
	goto Label_1574; // 0x62f Jump
	
Label_1337:
	var_230_bool = 0; // 0x539 PushV
	var_230_bool = 0; // 0x53a MovB
	var_231_bool = 0; // 0x53b PushV
	var_231_bool = 0; // 0x53c MovB
	var_232_bool = 0; // 0x53d PushV
	var_232_bool = 0; // 0x53e MovB
	var_233_bool = 0; var_234_object = Obj(); // 0x53f PushV
	var_234_object = var_1_object; // 0x540 MovT
	func_5858(var_234_object); // 0x541 Call
	if(var_233_bool == 0) goto Label_1355; // 0x543 JumpB
	var_235_bool = 0; var_236_object = Obj(); // 0x544 PushV
	var_236_object = var_1_object; // 0x545 MovT
	func_5894(var_236_object); // 0x546 Call
	var_237_bool = var_235_bool == 0; // 0x548 Not
	if(var_237_bool == 0) goto Label_1355; // 0x549 JumpB
	var_232_bool = 1; // 0x54a MovB
	
Label_1355:
	if(var_232_bool == 0) goto Label_1363; // 0x54b JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0x54c PushV
	var_239_object = var_1_object; // 0x54d MovT
	func_5882(var_239_object); // 0x54e Call
	var_240_bool = var_238_bool == 0; // 0x550 Not
	if(var_240_bool == 0) goto Label_1363; // 0x551 JumpB
	var_231_bool = 1; // 0x552 MovB
	
Label_1363:
	if(var_231_bool == 0) goto Label_1371; // 0x553 JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0x554 PushV
	var_242_object = var_1_object; // 0x555 MovT
	func_6005(var_242_object); // 0x556 Call
	var_243_bool = var_241_bool == 0; // 0x558 Not
	if(var_243_bool == 0) goto Label_1371; // 0x559 JumpB
	var_230_bool = 1; // 0x55a MovB
	
Label_1371:
	if(var_230_bool == 0) goto Label_1387; // 0x55b JumpB
	var_244_string = ""; // 0x55c PushV
	var_244_string = "Neutral"; // 0x55d MovS
	func_1585(var_165_object, var_244_string); // 0x55e Call
	var_245_int = 8666; // 0x560 PushI
	SetMessage(var_245_int); // 0x561 TObjFunc
	ClearReplies(); // 0x563 TObjFunc
	var_246_int = 8667; // 0x565 PushI
	var_247_int = 9493; // 0x566 PushI
	var_248_int = 9492; // 0x567 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x568 TObjFunc
	goto Label_1555; // 0x56a Jump
	
Label_1387:
	var_249_string = ""; // 0x56b PushV
	var_249_string = "Neutral"; // 0x56c MovS
	func_1585(var_165_object, var_249_string); // 0x56d Call
	var_250_int = 8034; // 0x56f PushI
	SetMessage(var_250_int); // 0x570 TObjFunc
	ClearReplies(); // 0x572 TObjFunc
	var_251_bool = 0; // 0x574 PushV
	var_251_bool = 1; // 0x575 MovB
	var_252_bool = 0; // 0x576 PushV
	var_252_bool = 0; // 0x577 MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x578 PushV
	var_254_object = var_1_object; // 0x579 MovT
	func_6017(var_253_bool, var_254_object); // 0x57a Call
	if(var_253_bool == 0) goto Label_1411; // 0x57c JumpB
	var_264_bool = 0; var_265_object = Obj(); // 0x57d PushV
	var_265_object = var_1_object; // 0x57e MovT
	func_5870(var_265_object); // 0x57f Call
	if(var_264_bool == 0) goto Label_1411; // 0x581 JumpB
	var_252_bool = 1; // 0x582 MovB
	
Label_1411:
	if(var_252_bool == 0) goto Label_1427; // 0x583 JumpB
	var_270_bool = 0; // 0x584 PushV
	var_270_bool = 0; // 0x585 MovB
	var_271_bool = 0; var_272_object = Obj(); // 0x586 PushV
	var_272_object = var_1_object; // 0x587 MovT
	func_6075(var_271_bool, var_272_object); // 0x588 Call
	if(var_271_bool == 0) goto Label_1425; // 0x58a JumpB
	var_282_bool = 0; var_283_object = Obj(); // 0x58b PushV
	var_283_object = var_1_object; // 0x58c MovT
	func_5870(var_283_object); // 0x58d Call
	if(var_282_bool == 0) goto Label_1425; // 0x58f JumpB
	var_270_bool = 1; // 0x590 MovB
	
Label_1425:
	if(var_270_bool == 0) goto Label_1427; // 0x591 JumpB
	var_251_bool = 0; // 0x592 MovB
	
Label_1427:
	if(var_251_bool == 0) goto Label_1433; // 0x593 JumpB
	var_284_int = 8036; // 0x594 PushI
	var_285_int = 5976; // 0x595 PushI
	var_286_int = 8859; // 0x596 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x597 TObjFunc
	
Label_1433:
	var_287_bool = 0; // 0x599 PushV
	var_287_bool = 0; // 0x59a MovB
	var_288_bool = 0; var_289_object = Obj(); // 0x59b PushV
	var_289_object = var_1_object; // 0x59c MovT
	func_6385(var_289_object); // 0x59d Call
	if(var_288_bool == 0) goto Label_1446; // 0x59f JumpB
	var_294_bool = 0; var_295_object = Obj(); // 0x5a0 PushV
	var_295_object = var_1_object; // 0x5a1 MovT
	func_6301(var_295_object); // 0x5a2 Call
	if(var_294_bool == 0) goto Label_1446; // 0x5a4 JumpB
	var_287_bool = 1; // 0x5a5 MovB
	
Label_1446:
	if(var_287_bool == 0) goto Label_1452; // 0x5a6 JumpB
	var_300_int = 8039; // 0x5a7 PushI
	var_301_int = 5991; // 0x5a8 PushI
	var_302_int = 8862; // 0x5a9 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x5aa TObjFunc
	
Label_1452:
	var_303_bool = 0; // 0x5ac PushV
	var_303_bool = 0; // 0x5ad MovB
	var_304_bool = 0; var_305_object = Obj(); // 0x5ae PushV
	var_305_object = var_1_object; // 0x5af MovT
	func_6277(var_305_object); // 0x5b0 Call
	if(var_304_bool == 0) goto Label_1465; // 0x5b2 JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0x5b3 PushV
	var_311_object = var_1_object; // 0x5b4 MovT
	func_6313(var_311_object); // 0x5b5 Call
	if(var_310_bool == 0) goto Label_1465; // 0x5b7 JumpB
	var_303_bool = 1; // 0x5b8 MovB
	
Label_1465:
	if(var_303_bool == 0) goto Label_1471; // 0x5b9 JumpB
	var_316_int = 8042; // 0x5ba PushI
	var_317_int = 8884; // 0x5bb PushI
	var_318_int = 8865; // 0x5bc PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x5bd TObjFunc
	
Label_1471:
	var_319_bool = 0; // 0x5bf PushV
	var_319_bool = 0; // 0x5c0 MovB
	var_320_bool = 0; var_321_object = Obj(); // 0x5c1 PushV
	var_321_object = var_1_object; // 0x5c2 MovT
	func_6289(var_321_object); // 0x5c3 Call
	if(var_320_bool == 0) goto Label_1484; // 0x5c5 JumpB
	var_326_bool = 0; var_327_object = Obj(); // 0x5c6 PushV
	var_327_object = var_1_object; // 0x5c7 MovT
	func_6325(var_327_object); // 0x5c8 Call
	if(var_326_bool == 0) goto Label_1484; // 0x5ca JumpB
	var_319_bool = 1; // 0x5cb MovB
	
Label_1484:
	if(var_319_bool == 0) goto Label_1490; // 0x5cc JumpB
	var_332_int = 8046; // 0x5cd PushI
	var_333_int = 8885; // 0x5ce PushI
	var_334_int = 8869; // 0x5cf PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x5d0 TObjFunc
	
Label_1490:
	var_335_bool = 0; // 0x5d2 PushV
	var_335_bool = 0; // 0x5d3 MovB
	var_336_bool = 0; var_337_object = Obj(); // 0x5d4 PushV
	var_337_object = var_1_object; // 0x5d5 MovT
	func_6229(var_337_object); // 0x5d6 Call
	if(var_336_bool == 0) goto Label_1503; // 0x5d8 JumpB
	var_342_bool = 0; var_343_object = Obj(); // 0x5d9 PushV
	var_343_object = var_1_object; // 0x5da MovT
	func_6337(var_343_object); // 0x5db Call
	if(var_342_bool == 0) goto Label_1503; // 0x5dd JumpB
	var_335_bool = 1; // 0x5de MovB
	
Label_1503:
	if(var_335_bool == 0) goto Label_1509; // 0x5df JumpB
	var_348_int = 8047; // 0x5e0 PushI
	var_349_int = 8886; // 0x5e1 PushI
	var_350_int = 8870; // 0x5e2 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x5e3 TObjFunc
	
Label_1509:
	var_351_bool = 0; // 0x5e5 PushV
	var_351_bool = 0; // 0x5e6 MovB
	var_352_bool = 0; var_353_object = Obj(); // 0x5e7 PushV
	var_353_object = var_1_object; // 0x5e8 MovT
	func_6373(var_353_object); // 0x5e9 Call
	if(var_352_bool == 0) goto Label_1522; // 0x5eb JumpB
	var_358_bool = 0; var_359_object = Obj(); // 0x5ec PushV
	var_359_object = var_1_object; // 0x5ed MovT
	func_6349(var_359_object); // 0x5ee Call
	if(var_358_bool == 0) goto Label_1522; // 0x5f0 JumpB
	var_351_bool = 1; // 0x5f1 MovB
	
Label_1522:
	if(var_351_bool == 0) goto Label_1528; // 0x5f2 JumpB
	var_364_int = 8051; // 0x5f3 PushI
	var_365_int = 8887; // 0x5f4 PushI
	var_366_int = 8874; // 0x5f5 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x5f6 TObjFunc
	
Label_1528:
	var_367_bool = 0; // 0x5f8 PushV
	var_367_bool = 0; // 0x5f9 MovB
	var_368_bool = 0; var_369_object = Obj(); // 0x5fa PushV
	var_369_object = var_1_object; // 0x5fb MovT
	func_6157(var_369_object); // 0x5fc Call
	if(var_368_bool == 0) goto Label_1541; // 0x5fe JumpB
	var_374_bool = 0; var_375_object = Obj(); // 0x5ff PushV
	var_375_object = var_1_object; // 0x600 MovT
	func_6361(var_375_object); // 0x601 Call
	if(var_374_bool == 0) goto Label_1541; // 0x603 JumpB
	var_367_bool = 1; // 0x604 MovB
	
Label_1541:
	if(var_367_bool == 0) goto Label_1547; // 0x605 JumpB
	var_380_int = 8052; // 0x606 PushI
	var_381_int = 8888; // 0x607 PushI
	var_382_int = 8875; // 0x608 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x609 TObjFunc
	
Label_1547:
	var_383_int = 8709; // 0x60b PushI
	var_384_int = -1; // 0x60c PushI
	var_385_int = 9546; // 0x60d PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x60e TObjFunc
	goto Label_1555; // 0x610 Jump
}


func_5882(var_142_bool)
{
	var_144_int = 0; var_145_string = ""; // 0x16fb PushV
	var_145_string = "d1q01"; // 0x16fc MovS
	func_5006(var_144_int, var_145_string); // 0x16fd Call
	var_146_int = 1000; // 0x16ff PushI
	var_147_bool = var_144_int == var_146_int; // 0x1700 Eq
	if(var_147_bool == 0) goto Label_5892; // 0x1701 JumpB
	var_142_bool = 1; // 0x1702 MovB
	return 0; // 0x1703 Return
	
Label_5892:
	var_142_bool = 0; // 0x1704 MovB
	return 0; // 0x1705 Return
}


func_5372()
{
	var_38_string = "ood4Lara1"; // 0x14fd PushS
	var_39_int = 1; // 0x14fe PushI
	SetVariable(var_38_string, var_39_int); // 0x14ff Func
	return 0; // 0x1501 Return
}


func_6397(var_303_bool)
{
	var_305_int = 0; var_306_int = 0; // 0x18fd PushV
	var_307_string = "smoked_meat"; // 0x18fe PushS
	GetItemCountOfType(var_306_int, var_307_string); // 0x18ff ObjFunc
	var_308_int = 3; // 0x1901 PushI
	var_309_bool = var_306_int < var_308_int; // 0x1902 LT
	if(var_309_bool == 0) goto Label_6406; // 0x1903 JumpB
	var_303_bool = 0; // 0x1904 MovB
	return 2; // 0x1905 Return
	
Label_6406:
	var_310_string = "dried_fish"; // 0x1906 PushS
	GetItemCountOfType(var_306_int, var_310_string); // 0x1907 ObjFunc
	var_311_int = 3; // 0x1909 PushI
	var_312_bool = var_306_int < var_311_int; // 0x190a LT
	if(var_312_bool == 0) goto Label_6414; // 0x190b JumpB
	var_303_bool = 0; // 0x190c MovB
	return 2; // 0x190d Return
	
Label_6414:
	var_313_string = "bread"; // 0x190e PushS
	GetItemCountOfType(var_306_int, var_313_string); // 0x190f ObjFunc
	var_314_int = 3; // 0x1911 PushI
	var_315_bool = var_306_int < var_314_int; // 0x1912 LT
	if(var_315_bool == 0) goto Label_6422; // 0x1913 JumpB
	var_303_bool = 0; // 0x1914 MovB
	return 2; // 0x1915 Return
	
Label_6422:
	var_303_bool = 1; // 0x1916 MovB
	return 2; // 0x1917 Return
}


func_5378()
{
	var_42_object = Obj(); var_43_object = Obj(); // 0x1502 PushV
	var_44_string = "d4q01"; // 0x1503 PushS
	var_45_int = 2; // 0x1504 PushI
	SetVariable(var_44_string, var_45_int); // 0x1505 Func
	var_46_object = Obj(); // 0x1507 PushV
	func_6515(var_46_object); // 0x1508 Call
	var_43_object = var_46_object; // 0x1509 Mov
	var_53_string = "d4q01LaraGotoMladVlad"; // 0x150b PushS
	var_54_string = "pt_map_mladvlad"; // 0x150c PushS
	var_55_int = 1; // 0x150d PushI
	var_56_int = 11483; // 0x150e PushI
	var_57_float = 0; // 0x150f PushV
	func_5060(var_57_float); // 0x1510 Call
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0x1512 ObjFunc
	var_60_string = "d4q01LaraGotoMladVladSelf"; // 0x1514 PushS
	var_61_string = "pt_map_lara"; // 0x1515 PushS
	var_62_int = 1; // 0x1516 PushI
	var_63_int = 15321; // 0x1517 PushI
	var_64_float = 0; // 0x1518 PushV
	func_5060(var_64_float); // 0x1519 Call
	AddMark(var_60_string, var_61_string, var_62_int, var_63_int, var_64_float); // 0x151b ObjFunc
	func_6662(); // 0x151e Call
	return 2; // 0x1520 Return
}


func_5894(var_135_bool)
{
	var_137_int = 0; var_138_string = ""; // 0x1707 PushV
	var_138_string = "d1q01"; // 0x1708 MovS
	func_5006(var_137_int, var_138_string); // 0x1709 Call
	var_139_int = 0; // 0x170b PushI
	var_140_bool = var_137_int == var_139_int; // 0x170c Eq
	if(var_140_bool == 0) goto Label_5904; // 0x170d JumpB
	var_135_bool = 1; // 0x170e MovB
	return 0; // 0x170f Return
	
Label_5904:
	var_135_bool = 0; // 0x1710 MovB
	return 0; // 0x1711 Return
}


func_5906(var_249_bool)
{
	var_251_int = 0; var_252_string = ""; // 0x1713 PushV
	var_252_string = "ood2Lara1"; // 0x1714 MovS
	func_5006(var_251_int, var_252_string); // 0x1715 Call
	var_255_int = 0; // 0x1717 PushI
	var_256_bool = var_251_int == var_255_int; // 0x1718 Eq
	if(var_256_bool == 0) goto Label_5916; // 0x1719 JumpB
	var_249_bool = 1; // 0x171a MovB
	return 0; // 0x171b Return
	
Label_5916:
	var_249_bool = 0; // 0x171c MovB
	return 0; // 0x171d Return
}


func_6424(var_209_bool)
{
	var_211_int = 0; // 0x1919 PushV
	func_5074(var_211_int); // 0x191a Call
	var_216_int = 18; // 0x191c PushI
	var_217_bool = var_211_int >= var_216_int; // 0x191d GE
	if(var_217_bool == 0) goto Label_6433; // 0x191e JumpB
	var_209_bool = 1; // 0x191f MovB
	return 0; // 0x1920 Return
	
Label_6433:
	var_209_bool = 0; // 0x1921 MovB
	return 0; // 0x1922 Return
}


func_4894(var_31_bool)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; // 0x131e PushV
	GetPosition(var_37_cvector); // 0x131f ObjFunc
	GetPosition(var_38_cvector); // 0x1321 Func
	var_39_cvector = var_37_cvector - var_38_cvector; // 0x1323 Sub2
	var_41_float = GetByIndex(var_39_cvector, 0); // 0x1324 PushE
	var_42_float = GetByIndex(var_39_cvector, 2); // 0x1325 PushE
	Rotate(var_41_float, var_42_float, var_40_bool); // 0x1326 Func
	var_31_bool = var_40_bool; // 0x1328 Mov
	return 8; // 0x1329 Return
}


func_5918(var_289_bool)
{
	var_291_int = 0; var_292_string = ""; // 0x171f PushV
	var_292_string = "ood2Lara2"; // 0x1720 MovS
	func_5006(var_291_int, var_292_string); // 0x1721 Call
	var_293_int = 0; // 0x1723 PushI
	var_294_bool = var_291_int == var_293_int; // 0x1724 Eq
	if(var_294_bool == 0) goto Label_5928; // 0x1725 JumpB
	var_289_bool = 1; // 0x1726 MovB
	return 0; // 0x1727 Return
	
Label_5928:
	var_289_bool = 0; // 0x1728 MovB
	return 0; // 0x1729 Return
}


func_5410()
{
	var_128_string = "ood4Lara2"; // 0x1523 PushS
	var_129_int = 1; // 0x1524 PushI
	SetVariable(var_128_string, var_129_int); // 0x1525 Func
	return 0; // 0x1527 Return
}


func_6435(var_227_bool)
{
	var_229_bool = 0; // 0x1924 PushV
	var_229_bool = 0; // 0x1925 MovB
	var_230_int = 0; // 0x1926 PushV
	func_5074(var_230_int); // 0x1927 Call
	var_231_int = 12; // 0x1929 PushI
	var_232_bool = var_230_int >= var_231_int; // 0x192a GE
	if(var_232_bool == 0) goto Label_6451; // 0x192b JumpB
	var_233_int = 0; // 0x192c PushV
	func_5074(var_233_int); // 0x192d Call
	var_234_int = 18; // 0x192f PushI
	var_235_bool = var_233_int < var_234_int; // 0x1930 LT
	if(var_235_bool == 0) goto Label_6451; // 0x1931 JumpB
	var_229_bool = 1; // 0x1932 MovB
	
Label_6451:
	if(var_229_bool == 0) goto Label_6454; // 0x1933 JumpB
	var_227_bool = 1; // 0x1934 MovB
	return 0; // 0x1935 Return
	
Label_6454:
	var_227_bool = 0; // 0x1936 MovB
	return 0; // 0x1937 Return
}


func_5416()
{
	var_132_object = Obj(); var_133_object = Obj(); // 0x1528 PushV
	var_134_string = "d4q01_subquest"; // 0x1529 PushS
	var_135_int = 3; // 0x152a PushI
	SetVariable(var_134_string, var_135_int); // 0x152b Func
	var_136_object = Obj(); // 0x152d PushV
	func_6515(var_136_object); // 0x152e Call
	var_133_object = var_136_object; // 0x152f Mov
	var_137_string = "d4q01LaraGotoOspina"; // 0x1531 PushS
	var_138_string = "pt_map_ospina"; // 0x1532 PushS
	var_139_int = 0; // 0x1533 PushI
	var_140_int = 11506; // 0x1534 PushI
	var_141_float = 0; // 0x1535 PushV
	func_5060(var_141_float); // 0x1536 Call
	AddMark(var_137_string, var_138_string, var_139_int, var_140_int, var_141_float); // 0x1538 ObjFunc
	var_142_string = "d4q01LaraGotoOspinaSelf"; // 0x153a PushS
	var_143_string = "pt_map_lara"; // 0x153b PushS
	var_144_int = 1; // 0x153c PushI
	var_145_int = 15324; // 0x153d PushI
	var_146_float = 0; // 0x153e PushV
	func_5060(var_146_float); // 0x153f Call
	AddMark(var_142_string, var_143_string, var_144_int, var_145_int, var_146_float); // 0x1541 ObjFunc
	return 2; // 0x1543 Return
}


func_4906(var_31_bool)
{
	var_32_bool = 0; var_33_bool = 0; // 0x132a PushV
	IsLoaded(var_33_bool); // 0x132b Func
	var_31_bool = var_33_bool; // 0x132d Mov
	return 2; // 0x132e Return
}


func_5930(var_320_bool)
{
	var_322_int = 0; var_323_string = ""; // 0x172b PushV
	var_323_string = "ood2Lara3"; // 0x172c MovS
	func_5006(var_322_int, var_323_string); // 0x172d Call
	var_324_int = 0; // 0x172f PushI
	var_325_bool = var_322_int == var_324_int; // 0x1730 Eq
	if(var_325_bool == 0) goto Label_5940; // 0x1731 JumpB
	var_320_bool = 1; // 0x1732 MovB
	return 0; // 0x1733 Return
	
Label_5940:
	var_320_bool = 0; // 0x1734 MovB
	return 0; // 0x1735 Return
}


func_4911(var_45_bool)
{
	var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_bool = 0; // 0x132f PushV
	GetPosition(var_56_cvector); // 0x1330 ObjFunc
	GetEyesHeight(var_55_float); // 0x1332 ObjFunc
	var_63_float = GetByIndex(var_56_cvector, 1); // 0x1334 PushE
	var_63_float = var_63_float + var_55_float; // 0x1335 Add2
	SetByIndex(var_56_cvector, 1) = var_63_float; // 0x1336 PopE
	GetPosition(var_57_cvector); // 0x1337 Func
	GetEyesHeight(var_55_float); // 0x1339 Func
	var_64_float = GetByIndex(var_57_cvector, 1); // 0x133b PushE
	var_64_float = var_64_float + var_55_float; // 0x133c Add2
	SetByIndex(var_57_cvector, 1) = var_64_float; // 0x133d PopE
	var_58_cvector = var_56_cvector - var_57_cvector; // 0x133e Sub2
	var_65_float = GetByIndex(var_58_cvector, 1); // 0x133f PushE
	var_65_float = 0; // 0x1340 MovI
	SetByIndex(var_58_cvector, 1) = var_65_float; // 0x1341 PopE
	var_66_int = var_58_cvector | var_58_cvector; // 0x1342 Or
	var_67_float = sqrt(var_66_int); // 0x1343 Sqrt
	var_58_cvector = var_58_cvector / var_58_cvector; // 0x1344 Div2
	var_59_cvector = -var_58_cvector; // 0x1345 Neg2
	var_68_int = 70; // 0x1346 PushI
	var_69_float = var_58_cvector * var_68_int; // 0x1347 Mult
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); // 0x1348 PushV
	var_72_cvector = CVector(0.0, 1.0, 0.0); // 0x1349 PushVec
	var_71_cvector = var_59_cvector ^ var_72_cvector; // 0x134a Xor2
	func_4996(var_70_cvector, var_71_cvector); // 0x134b Call
	var_78_int = 25; // 0x134d PushI
	var_79_float = var_70_cvector * var_78_int; // 0x134e Mult
	var_80_int = var_69_float + var_79_float; // 0x134f Add
	var_81_cvector = CVector(0.0, 10.0, 0.0); // 0x1350 PushVec
	var_60_cvector = var_80_int - var_81_cvector; // 0x1351 Sub2
	var_61_cvector = var_57_cvector + var_60_cvector; // 0x1352 Add2
	IsOverrideActive(var_62_bool); // 0x1353 Func
	var_82_bool = var_62_bool; // 0x1355 Push
	if(var_82_bool == 0) goto Label_4953; // 0x1356 JumpB
	var_45_bool = 0; // 0x1357 MovB
	return 16; // 0x1358 Return
	
Label_4953:
	StopWorld(); // 0x1359 Func
	CameraTransit(var_61_cvector, var_59_cvector); // 0x135b Func
	var_83_float = GetByIndex(var_60_cvector, 0); // 0x135d PushE
	var_84_float = GetByIndex(var_60_cvector, 2); // 0x135e PushE
	Rotate(var_83_float, var_84_float); // 0x135f Func
	CameraWaitForPlayFinish(); // 0x1361 Func
	ResumeWorld(); // 0x1363 Func
	var_45_bool = 1; // 0x1365 MovB
	return 16; // 0x1366 Return
}


func_5942(var_257_bool)
{
	var_259_int = 0; var_260_string = ""; // 0x1737 PushV
	var_260_string = "d2q03"; // 0x1738 MovS
	func_5006(var_259_int, var_260_string); // 0x1739 Call
	var_261_int = 0; // 0x173b PushI
	var_262_bool = var_259_int == var_261_int; // 0x173c Eq
	if(var_262_bool == 0) goto Label_5952; // 0x173d JumpB
	var_257_bool = 1; // 0x173e MovB
	return 0; // 0x173f Return
	
Label_5952:
	var_257_bool = 0; // 0x1740 MovB
	return 0; // 0x1741 Return
}


func_6456(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x1938 PushV
	GetDiaryRoot(var_57_object); // 0x1939 Func
	var_58_bool = var_57_object == 0; // 0x193b Not
	if(var_58_bool == 0) goto Label_6466; // 0x193c JumpB
	var_59_string = "Can't retrieve diary root"; // 0x193d PushS
	Trace(var_59_string); // 0x193e Func
	var_55_object = 0; // 0x1940 MovB
	return 2; // 0x1941 Return
	
Label_6466:
	var_55_object = var_57_object; // 0x1942 Mov
	return 2; // 0x1943 Return
}


func_5954(var_332_bool)
{
	var_332_bool = 1; // 0x1743 MovB
	return 0; // 0x1744 Return
}


func_5445()
{
	var_170_string = "ood4Lara3"; // 0x1546 PushS
	var_171_int = 1; // 0x1547 PushI
	SetVariable(var_170_string, var_171_int); // 0x1548 Func
	return 0; // 0x154a Return
}


func_6469(var_46_bool, var_47_object, var_48_int)
{
	var_49_object = Obj(); var_50_object = Obj(); var_51_int = 0; var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; // 0x1945 PushV
	var_55_object = Obj(); // 0x1946 PushV
	func_6456(var_55_object); // 0x1947 Call
	var_52_object = var_55_object; // 0x1948 Mov
	Find(var_48_int, var_53_object); // 0x194a ObjFunc
	var_60_bool = var_53_object == 0; // 0x194c Not
	if(var_60_bool == 0) goto Label_6484; // 0x194d JumpB
	var_61_string = "Can't find diary parent with id: "; // 0x194e PushS
	var_62_int = var_61_string + var_48_int; // 0x194f Add
	Trace(var_62_int); // 0x1950 Func
	var_46_bool = 0; // 0x1952 MovB
	return 6; // 0x1953 Return
	
Label_6484:
	AddChild(var_47_object); // 0x1954 ObjFunc
	var_63_string = "player_diary"; // 0x1956 PushS
	var_64_int = 1; // 0x1957 PushI
	SetVariable(var_63_string, var_64_int); // 0x1958 Func
	GetCategory(var_54_int); // 0x195a ObjFunc
	SetDiarySection(var_54_int); // 0x195c Func
	var_46_bool = 0; // 0x195e MovB
	return 6; // 0x195f Return
}


func_5959(var_301_bool, var_302_object)
{
	var_303_bool = 0; var_304_object = Obj(); // 0x1748 PushV
	var_304_object = var_302_object; // 0x1749 Mov
	func_6397(var_304_object); // 0x174a Call
	if(var_303_bool == 0) goto Label_5967; // 0x174c JumpB
	var_301_bool = 1; // 0x174d MovB
	return 0; // 0x174e Return
	
Label_5967:
	var_301_bool = 0; // 0x174f MovB
	return 0; // 0x1750 Return
}


func_5451()
{
	var_174_string = "d4q02LaraGivesMedcine"; // 0x154c PushS
	var_175_int = 1; // 0x154d PushI
	SetVariable(var_174_string, var_175_int); // 0x154e Func
	return 0; // 0x1550 Return
}


func_5969(var_334_bool)
{
	var_336_int = 0; var_337_string = ""; // 0x1752 PushV
	var_337_string = "d2q03"; // 0x1753 MovS
	func_5006(var_336_int, var_337_string); // 0x1754 Call
	var_338_int = 1; // 0x1756 PushI
	var_339_bool = var_336_int == var_338_int; // 0x1757 Eq
	if(var_339_bool == 0) goto Label_5979; // 0x1758 JumpB
	var_334_bool = 1; // 0x1759 MovB
	return 0; // 0x175a Return
	
Label_5979:
	var_334_bool = 0; // 0x175b MovB
	return 0; // 0x175c Return
}


func_5457()
{
	var_178_object = Obj(); var_179_object = Obj(); // 0x1551 PushV
	var_180_bool = 0; // 0x1552 PushV
	var_180_bool = 0; // 0x1553 MovB
	var_181_bool = 0; // 0x1554 PushV
	var_181_bool = 0; // 0x1555 MovB
	var_182_int = 0; var_183_string = ""; // 0x1556 PushV
	var_183_string = "d4q02AnnaGivesMedcine"; // 0x1557 MovS
	func_5006(var_182_int, var_183_string); // 0x1558 Call
	var_186_int = 1; // 0x155a PushI
	var_187_bool = var_182_int == var_186_int; // 0x155b Eq
	if(var_187_bool == 0) goto Label_5477; // 0x155c JumpB
	var_188_int = 0; var_189_string = ""; // 0x155d PushV
	var_189_string = "d4q02JuliaGivesMedcine"; // 0x155e MovS
	func_5006(var_188_int, var_189_string); // 0x155f Call
	var_190_int = 1; // 0x1561 PushI
	var_191_bool = var_188_int == var_190_int; // 0x1562 Eq
	if(var_191_bool == 0) goto Label_5477; // 0x1563 JumpB
	var_181_bool = 1; // 0x1564 MovB
	
Label_5477:
	if(var_181_bool == 0) goto Label_5486; // 0x1565 JumpB
	var_192_int = 0; var_193_string = ""; // 0x1566 PushV
	var_193_string = "d4q02LaraGivesMedcine"; // 0x1567 MovS
	func_5006(var_192_int, var_193_string); // 0x1568 Call
	var_194_int = 1; // 0x156a PushI
	var_195_bool = var_192_int == var_194_int; // 0x156b Eq
	if(var_195_bool == 0) goto Label_5486; // 0x156c JumpB
	var_180_bool = 1; // 0x156d MovB
	
Label_5486:
	if(var_180_bool == 0) goto Label_5524; // 0x156e JumpB
	var_196_string = "d4q02"; // 0x156f PushS
	var_197_int = 2; // 0x1570 PushI
	SetVariable(var_196_string, var_197_int); // 0x1571 Func
	var_198_object = Obj(); // 0x1573 PushV
	func_6515(var_198_object); // 0x1574 Call
	var_179_object = var_198_object; // 0x1575 Mov
	var_199_string = "d4q02BirdmaskNearHome"; // 0x1577 PushS
	var_200_string = "pt_d4q02_birdmask"; // 0x1578 PushS
	var_201_int = 0; // 0x1579 PushI
	var_202_int = 11842; // 0x157a PushI
	var_203_float = 0; // 0x157b PushV
	func_5060(var_203_float); // 0x157c Call
	AddMark(var_199_string, var_200_string, var_201_int, var_202_int, var_203_float); // 0x157e ObjFunc
	var_204_bool = 0; var_205_string = ""; var_206_string = ""; // 0x1580 PushV
	var_205_string = "quest_d4_02"; // 0x1581 MovS
	var_206_string = "birdmask"; // 0x1582 MovS
	func_5048(var_204_bool, var_205_string, var_206_string); // 0x1583 Call
	var_210_object = Obj(); var_211_string = ""; var_212_float = 0; // 0x1585 PushV
	var_213_object = Obj(); // 0x1586 PushV
	func_6515(var_213_object); // 0x1587 Call
	var_210_object = var_213_object; // 0x1588 Mov
	var_211_string = "pt_d4q02_birdmask"; // 0x158a MovS
	var_212_float = 2; // 0x158b MovI
	func_6532(var_210_object, var_211_string, var_212_float); // 0x158c Call
	var_214_object = Obj(); // 0x158e PushV
	func_6515(var_214_object); // 0x158f Call
	ShowMap(var_214_object); // 0x1591 ObjFunc
	var_179_object = 0; // 0x1593 SetNull
	
Label_5524:
	return 2; // 0x1594 Return
}


func_348(var_0_object, var_696_int, var_697_object)
{
	var_699_object = Obj(); var_700_bool = 0; var_701_int = 0; var_702_bool = 0; var_703_object = Obj(); var_704_bool = 0; var_705_int = 0; var_706_bool = 0; // 0x15c PushV
	var_0_object = var_697_object; // 0x15d TMov
	var_707_bool = 0; var_708_object = Obj(); // 0x15e PushV
	var_708_object = var_697_object; // 0x15f Mov
	func_4911(var_708_object); // 0x160 Call
	var_709_bool = var_707_bool == 0; // 0x162 Not
	if(var_709_bool == 0) goto Label_358; // 0x163 JumpB
	var_696_int = -2; // 0x164 MovI
	return 8; // 0x165 Return
	
Label_358:
	CreateDialog(var_703_object); // 0x166 Func
	var_710_int = 0; // 0x168 PushV
	func_5097(var_710_int); // 0x169 Call
	SetNPCName(var_710_int); // 0x16b ObjFunc
	var_711_string = ""; // 0x16d PushV
	func_5099(var_711_string); // 0x16e Call
	SetPhoto(var_711_string); // 0x170 ObjFunc
	var_712_int = 0; // 0x172 PushV
	func_6565(var_712_int); // 0x173 Call
	SetPlayerName(var_712_int); // 0x175 ObjFunc
	var_705_int = -1; // 0x177 MovI
	IsOverrideActive(var_704_bool); // 0x178 Func
	var_713_bool = var_704_bool; // 0x17a Push
	if(var_713_bool == 0) goto Label_382; // 0x17b JumpB
	var_696_int = -2; // 0x17c MovI
	return 8; // 0x17d Return
	
Label_382:
	DoDialog(var_703_object); // 0x17e Func
	var_714_object = Obj(); var_715_object = Obj(); // 0x180 PushV
	var_714_object = var_697_object; // 0x181 Mov
	var_715_object = var_703_object; // 0x182 Mov
	TaskCall(5); // 0x183 TaskCall
	func_411(var_716_object, var_717_object, var_718_string, var_719_bool, var_714_object, var_715_object); // 0x184 Call
	TaskReturn(); // 0x185 TaskReturn
	IsDialogEnd(var_706_bool); // 0x187 ObjFunc
	
Label_393:
	var_811_bool = var_706_bool == 0; // 0x189 Not
	if(var_811_bool == 0) goto Label_400; // 0x18a JumpB
	sync(); // 0x18b Func
	IsDialogEnd(var_706_bool); // 0x18d ObjFunc
	goto Label_393; // 0x18f Jump
	
Label_400:
	var_812_object = Obj(); // 0x190 PushV
	var_812_object = var_697_object; // 0x191 Mov
	func_4967(); // 0x192 Call
	StopDialog(var_703_object); // 0x194 Func
	GetReturnValue(var_705_int); // 0x196 ObjFunc
	var_696_int = var_705_int; // 0x198 Mov
	return 8; // 0x199 Return
}


func_5981(var_295_bool)
{
	var_297_int = 0; var_298_string = ""; // 0x175e PushV
	var_298_string = "d2q03"; // 0x175f MovS
	func_5006(var_297_int, var_298_string); // 0x1760 Call
	var_299_int = 3; // 0x1762 PushI
	var_300_bool = var_297_int == var_299_int; // 0x1763 Eq
	if(var_300_bool == 0) goto Label_5991; // 0x1764 JumpB
	var_295_bool = 1; // 0x1765 MovB
	return 0; // 0x1766 Return
	
Label_5991:
	var_295_bool = 0; // 0x1767 MovB
	return 0; // 0x1768 Return
}


func_6498(var_156_bool, var_157_int)
{
	var_158_object = Obj(); var_159_object = Obj(); var_160_object = Obj(); var_161_object = Obj(); // 0x1962 PushV
	var_162_object = Obj(); // 0x1963 PushV
	func_6456(var_162_object); // 0x1964 Call
	var_160_object = var_162_object; // 0x1965 Mov
	Find(var_157_int, var_161_object); // 0x1967 ObjFunc
	var_163_bool = var_161_object == 0; // 0x1969 Not
	if(var_163_bool == 0) goto Label_6509; // 0x196a JumpB
	var_156_bool = 0; // 0x196b MovB
	return 4; // 0x196c Return
	
Label_6509:
	Remove(); // 0x196d ObjFunc
	var_156_bool = 1; // 0x196f MovB
	return 4; // 0x1970 Return
}


func_4967()
{
	CameraSwitchToNormal(); // 0x1368 Func
	return 0; // 0x136a Return
}


func_5993(var_267_bool)
{
	var_269_int = 0; var_270_string = ""; // 0x176a PushV
	var_270_string = "d2q03"; // 0x176b MovS
	func_5006(var_269_int, var_270_string); // 0x176c Call
	var_271_int = 1000; // 0x176e PushI
	var_272_bool = var_269_int == var_271_int; // 0x176f Eq
	if(var_272_bool == 0) goto Label_6003; // 0x1770 JumpB
	var_267_bool = 1; // 0x1771 MovB
	return 0; // 0x1772 Return
	
Label_6003:
	var_267_bool = 0; // 0x1773 MovB
	return 0; // 0x1774 Return
}


func_4971(var_35_string)
{
	var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0; // 0x136b PushV
	var_40_string = "playing "; // 0x136c PushS
	var_41_int = var_40_string + var_35_string; // 0x136d Add
	Trace(var_41_int); // 0x136e Func
	lshGetAnimTimes(var_35_string, var_38_float, var_39_float); // 0x1370 Func
	lshPlayAnimation(var_38_float, var_39_float); // 0x1372 Func
	var_42_string = "start: "; // 0x1374 PushS
	var_43_int = var_42_string + var_38_float; // 0x1375 Add
	Trace(var_43_int); // 0x1376 Func
	var_44_string = "end: "; // 0x1378 PushS
	var_45_int = var_44_string + var_39_float; // 0x1379 Add
	Trace(var_45_int); // 0x137a Func
	return 4; // 0x137c Return
}


func_6515(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); // 0x1973 PushV
	GetMainOutdoorScene(var_49_object); // 0x1974 Func
	var_51_bool = var_49_object == 0; // 0x1976 NullEq
	if(var_51_bool == 0) goto Label_6526; // 0x1977 JumpB
	var_52_string = "Can't find main outdoor scene"; // 0x1978 PushS
	Trace(var_52_string); // 0x1979 Func
	var_50_object = 0; // 0x197b SetNull
	var_46_object = var_50_object; // 0x197c Mov
	return 4; // 0x197d Return
	
Label_6526:
	GetMap(var_50_object); // 0x197e ObjFunc
	var_46_object = var_50_object; // 0x1980 Mov
	return 4; // 0x1981 Return
}


func_6005(var_149_bool)
{
	var_151_int = 0; var_152_string = ""; // 0x1776 PushV
	var_152_string = "d1q01KnowEpidemic"; // 0x1777 MovS
	func_5006(var_151_int, var_152_string); // 0x1778 Call
	var_153_int = 1; // 0x177a PushI
	var_154_bool = var_151_int == var_153_int; // 0x177b Eq
	if(var_154_bool == 0) goto Label_6015; // 0x177c JumpB
	var_149_bool = 1; // 0x177d MovB
	return 0; // 0x177e Return
	
Label_6015:
	var_149_bool = 0; // 0x177f MovB
	return 0; // 0x1780 Return
}


func_4989()
{
	var_33_bool = 0; // 0x137d PushV
	func_5101(var_33_bool); // 0x137e Call
	if(var_33_bool == 0) goto Label_4995; // 0x1380 JumpB
	lshStopSpeech(); // 0x1381 Func
	
Label_4995:
	return 0; // 0x1383 Return
}


func_6017(var_207_bool, var_208_object)
{
	var_209_bool = 0; var_210_object = Obj(); // 0x1782 PushV
	var_210_object = var_208_object; // 0x1783 Mov
	func_6424(var_210_object); // 0x1784 Call
	if(var_209_bool == 0) goto Label_6025; // 0x1786 JumpB
	var_207_bool = 1; // 0x1787 MovB
	return 0; // 0x1788 Return
	
Label_6025:
	var_207_bool = 0; // 0x1789 MovB
	return 0; // 0x178a Return
}


func_3459(var_0_object, var_518_int, var_519_object)
{
	var_521_object = Obj(); var_522_bool = 0; var_523_int = 0; var_524_bool = 0; var_525_object = Obj(); var_526_bool = 0; var_527_int = 0; var_528_bool = 0; // 0xd83 PushV
	var_0_object = var_519_object; // 0xd84 TMov
	var_529_bool = 0; var_530_object = Obj(); // 0xd85 PushV
	var_530_object = var_519_object; // 0xd86 Mov
	func_4911(var_530_object); // 0xd87 Call
	var_531_bool = var_529_bool == 0; // 0xd89 Not
	if(var_531_bool == 0) goto Label_3469; // 0xd8a JumpB
	var_518_int = -2; // 0xd8b MovI
	return 8; // 0xd8c Return
	
Label_3469:
	CreateDialog(var_525_object); // 0xd8d Func
	var_532_int = 0; // 0xd8f PushV
	func_5097(var_532_int); // 0xd90 Call
	SetNPCName(var_532_int); // 0xd92 ObjFunc
	var_533_string = ""; // 0xd94 PushV
	func_5099(var_533_string); // 0xd95 Call
	SetPhoto(var_533_string); // 0xd97 ObjFunc
	var_534_int = 0; // 0xd99 PushV
	func_6565(var_534_int); // 0xd9a Call
	SetPlayerName(var_534_int); // 0xd9c ObjFunc
	var_527_int = -1; // 0xd9e MovI
	IsOverrideActive(var_526_bool); // 0xd9f Func
	var_535_bool = var_526_bool; // 0xda1 Push
	if(var_535_bool == 0) goto Label_3493; // 0xda2 JumpB
	var_518_int = -2; // 0xda3 MovI
	return 8; // 0xda4 Return
	
Label_3493:
	DoDialog(var_525_object); // 0xda5 Func
	var_536_object = Obj(); var_537_object = Obj(); // 0xda7 PushV
	var_536_object = var_519_object; // 0xda8 Mov
	var_537_object = var_525_object; // 0xda9 Mov
	TaskCall(11); // 0xdaa TaskCall
	func_3522(var_538_object, var_539_object, var_540_string, var_541_bool, var_536_object, var_537_object); // 0xdab Call
	TaskReturn(); // 0xdac TaskReturn
	IsDialogEnd(var_528_bool); // 0xdae ObjFunc
	
Label_3504:
	var_637_bool = var_528_bool == 0; // 0xdb0 Not
	if(var_637_bool == 0) goto Label_3511; // 0xdb1 JumpB
	sync(); // 0xdb2 Func
	IsDialogEnd(var_528_bool); // 0xdb4 ObjFunc
	goto Label_3504; // 0xdb6 Jump
	
Label_3511:
	var_638_object = Obj(); // 0xdb7 PushV
	var_638_object = var_519_object; // 0xdb8 Mov
	func_4967(); // 0xdb9 Call
	StopDialog(var_525_object); // 0xdbb Func
	GetReturnValue(var_527_int); // 0xdbd ObjFunc
	var_518_int = var_527_int; // 0xdbf Mov
	return 8; // 0xdc0 Return
}


func_4996(var_70_cvector, var_71_cvector)
{
	var_73_float = 0; var_74_float = 0; // 0x1384 PushV
	var_75_int = var_71_cvector | var_71_cvector; // 0x1385 Or
	var_74_float = sqrt(var_75_int); // 0x1386 Sqrt2
	var_76_float = 0.0; // 0x1387 PushF
	var_77_bool = var_74_float < var_76_float; // 0x1388 LT
	if(var_77_bool == 0) goto Label_5004; // 0x1389 JumpB
	var_70_cvector = CVector(0.0, 0.0, 0.0); // 0x138a MovV
	return 2; // 0x138b Return
	
Label_5004:
	var_70_cvector = var_71_cvector / var_71_cvector; // 0x138c Div2
	return 2; // 0x138d Return
}


func_6532(var_92_object, var_93_string, var_94_float)
{
	var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_object = Obj(); var_99_bool = 0; var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_object = Obj(); var_103_bool = 0; // 0x1984 PushV
	GetMainOutdoorScene(var_102_object); // 0x1985 Func
	var_104_bool = var_102_object == 0; // 0x1987 NullEq
	if(var_104_bool == 0) goto Label_6541; // 0x1988 JumpB
	var_105_string = "Can't find main outdoor scene"; // 0x1989 PushS
	Trace(var_105_string); // 0x198a Func
	return 8; // 0x198c Return
	
Label_6541:
	GetLocator(var_93_string, var_103_bool, var_100_cvector, var_101_cvector); // 0x198d ObjFunc
	var_106_bool = var_103_bool == 0; // 0x198f Not
	if(var_106_bool == 0) goto Label_6551; // 0x1990 JumpB
	var_107_string = "Warning: outdoor scene locator "; // 0x1991 PushS
	var_108_int = var_107_string + var_93_string; // 0x1992 Add
	var_109_string = " doesnt exist"; // 0x1993 PushS
	var_110_int = var_108_int + var_109_string; // 0x1994 Add
	Trace(var_110_int); // 0x1995 Func
	
Label_6551:
	GetMap(var_92_object); // 0x1997 ObjFunc
	var_111_bool = var_92_object == 0; // 0x1999 NullEq
	if(var_111_bool == 0) goto Label_6559; // 0x199a JumpB
	var_112_string = "Can't find map"; // 0x199b PushS
	Trace(var_112_string); // 0x199c Func
	return 8; // 0x199e Return
	
Label_6559:
	var_113_float = GetByIndex(var_100_cvector, 0); // 0x199f PushE
	var_114_float = GetByIndex(var_100_cvector, 2); // 0x19a0 PushE
	SetMapParams(var_113_float, var_114_float, var_94_float); // 0x19a1 ObjFunc
	return 8; // 0x19a3 Return
}


func_4484(var_0_object, var_641_int, var_642_object)
{
	var_644_object = Obj(); var_645_bool = 0; var_646_int = 0; var_647_bool = 0; var_648_object = Obj(); var_649_bool = 0; var_650_int = 0; var_651_bool = 0; // 0x1184 PushV
	var_0_object = var_642_object; // 0x1185 TMov
	var_652_bool = 0; var_653_object = Obj(); // 0x1186 PushV
	var_653_object = var_642_object; // 0x1187 Mov
	func_4911(var_653_object); // 0x1188 Call
	var_654_bool = var_652_bool == 0; // 0x118a Not
	if(var_654_bool == 0) goto Label_4494; // 0x118b JumpB
	var_641_int = -2; // 0x118c MovI
	return 8; // 0x118d Return
	
Label_4494:
	CreateDialog(var_648_object); // 0x118e Func
	var_655_int = 0; // 0x1190 PushV
	func_5097(var_655_int); // 0x1191 Call
	SetNPCName(var_655_int); // 0x1193 ObjFunc
	var_656_string = ""; // 0x1195 PushV
	func_5099(var_656_string); // 0x1196 Call
	SetPhoto(var_656_string); // 0x1198 ObjFunc
	var_657_int = 0; // 0x119a PushV
	func_6565(var_657_int); // 0x119b Call
	SetPlayerName(var_657_int); // 0x119d ObjFunc
	var_650_int = -1; // 0x119f MovI
	IsOverrideActive(var_649_bool); // 0x11a0 Func
	var_658_bool = var_649_bool; // 0x11a2 Push
	if(var_658_bool == 0) goto Label_4518; // 0x11a3 JumpB
	var_641_int = -2; // 0x11a4 MovI
	return 8; // 0x11a5 Return
	
Label_4518:
	DoDialog(var_648_object); // 0x11a6 Func
	var_659_object = Obj(); var_660_object = Obj(); // 0x11a8 PushV
	var_659_object = var_642_object; // 0x11a9 Mov
	var_660_object = var_648_object; // 0x11aa Mov
	TaskCall(13); // 0x11ab TaskCall
	func_4547(var_661_object, var_662_object, var_663_string, var_664_bool, var_659_object, var_660_object); // 0x11ac Call
	TaskReturn(); // 0x11ad TaskReturn
	IsDialogEnd(var_651_bool); // 0x11af ObjFunc
	
Label_4529:
	var_692_bool = var_651_bool == 0; // 0x11b1 Not
	if(var_692_bool == 0) goto Label_4536; // 0x11b2 JumpB
	sync(); // 0x11b3 Func
	IsDialogEnd(var_651_bool); // 0x11b5 ObjFunc
	goto Label_4529; // 0x11b7 Jump
	
Label_4536:
	var_693_object = Obj(); // 0x11b8 PushV
	var_693_object = var_642_object; // 0x11b9 Mov
	func_4967(); // 0x11ba Call
	StopDialog(var_648_object); // 0x11bc Func
	GetReturnValue(var_650_int); // 0x11be ObjFunc
	var_641_int = var_650_int; // 0x11c0 Mov
	return 8; // 0x11c1 Return
}


func_6027(var_299_bool)
{
	var_301_int = 0; var_302_string = ""; // 0x178c PushV
	var_302_string = "d4q01"; // 0x178d MovS
	func_5006(var_301_int, var_302_string); // 0x178e Call
	var_303_int = 1; // 0x1790 PushI
	var_304_bool = var_301_int == var_303_int; // 0x1791 Eq
	if(var_304_bool == 0) goto Label_6037; // 0x1792 JumpB
	var_299_bool = 1; // 0x1793 MovB
	return 0; // 0x1794 Return
	
Label_6037:
	var_299_bool = 0; // 0x1795 MovB
	return 0; // 0x1796 Return
}


func_5006(var_91_int, var_92_string)
{
	var_93_int = 0; var_94_int = 0; // 0x138e PushV
	GetVariable(var_92_string, var_94_int); // 0x138f Func
	var_91_int = var_94_int; // 0x1391 Mov
	return 2; // 0x1392 Return
}


func_5011(var_109_object, var_110_string)
{
	var_111_object = Obj(); var_112_object = Obj(); var_113_object = Obj(); var_114_object = Obj(); // 0x1393 PushV
	GetMainOutdoorScene(var_113_object); // 0x1394 Func
	var_115_string = ".bin"; // 0x1396 PushS
	var_116_int = var_110_string + var_115_string; // 0x1397 Add
	AddBlankActor(var_114_object, var_113_object, var_110_string, var_116_int); // 0x1398 Func
	var_109_object = var_114_object; // 0x139a Mov
	return 4; // 0x139b Return
}


func_5525()
{
	var_272_string = "ood4Lara4"; // 0x1596 PushS
	var_273_int = 1; // 0x1597 PushI
	SetVariable(var_272_string, var_273_int); // 0x1598 Func
	return 0; // 0x159a Return
}


func_6039(var_293_bool)
{
	var_295_int = 0; var_296_string = ""; // 0x1798 PushV
	var_296_string = "ood4Lara1"; // 0x1799 MovS
	func_5006(var_295_int, var_296_string); // 0x179a Call
	var_297_int = 0; // 0x179c PushI
	var_298_bool = var_295_int == var_297_int; // 0x179d Eq
	if(var_298_bool == 0) goto Label_6049; // 0x179e JumpB
	var_293_bool = 1; // 0x179f MovB
	return 0; // 0x17a0 Return
	
Label_6049:
	var_293_bool = 0; // 0x17a1 MovB
	return 0; // 0x17a2 Return
}


func_411(var_0_object, var_1_object, var_2_object, var_3_object, var_714_object, var_715_object)
{
	var_0_object = var_715_object; // 0x19c TMov
	var_1_object = var_714_object; // 0x19d TMov
	var_3_object = 0; // 0x19e TMovB
	var_720_int = 1; // 0x19f PushI
	if(var_720_int == 0) goto Label_521; // 0x1a0 JumpB
	var_721_string = ""; // 0x1a1 PushV
	var_721_string = "Neutral"; // 0x1a2 MovS
	func_551(var_715_object, var_721_string); // 0x1a3 Call
	var_726_int = 3662; // 0x1a5 PushI
	SetMessage(var_726_int); // 0x1a6 TObjFunc
	ClearReplies(); // 0x1a8 TObjFunc
	var_727_bool = 0; // 0x1aa PushV
	var_727_bool = 0; // 0x1ab MovB
	var_728_bool = 0; var_729_object = Obj(); // 0x1ac PushV
	var_729_object = var_1_object; // 0x1ad MovT
	func_6169(var_729_object); // 0x1ae Call
	if(var_728_bool == 0) goto Label_439; // 0x1b0 JumpB
	var_734_bool = 0; var_735_object = Obj(); // 0x1b1 PushV
	var_735_object = var_1_object; // 0x1b2 MovT
	func_6181(var_735_object); // 0x1b3 Call
	if(var_734_bool == 0) goto Label_439; // 0x1b5 JumpB
	var_727_bool = 1; // 0x1b6 MovB
	
Label_439:
	if(var_727_bool == 0) goto Label_445; // 0x1b7 JumpB
	var_740_int = 12735; // 0x1b8 PushI
	var_741_int = 11881; // 0x1b9 PushI
	var_742_int = 13929; // 0x1ba PushI
	AddReply(var_740_int, var_741_int, var_742_int); // 0x1bb TObjFunc
	
Label_445:
	var_743_bool = 0; // 0x1bd PushV
	var_743_bool = 0; // 0x1be MovB
	var_744_bool = 0; // 0x1bf PushV
	var_744_bool = 0; // 0x1c0 MovB
	var_745_bool = 0; // 0x1c1 PushV
	var_745_bool = 0; // 0x1c2 MovB
	var_746_bool = 0; var_747_object = Obj(); // 0x1c3 PushV
	var_747_object = var_1_object; // 0x1c4 MovT
	func_6193(var_747_object); // 0x1c5 Call
	if(var_746_bool == 0) goto Label_462; // 0x1c7 JumpB
	var_752_bool = 0; var_753_object = Obj(); // 0x1c8 PushV
	var_753_object = var_1_object; // 0x1c9 MovT
	func_6205(var_753_object); // 0x1ca Call
	if(var_752_bool == 0) goto Label_462; // 0x1cc JumpB
	var_745_bool = 1; // 0x1cd MovB
	
Label_462:
	if(var_745_bool == 0) goto Label_470; // 0x1ce JumpB
	var_758_bool = 0; var_759_object = Obj(); // 0x1cf PushV
	var_759_object = var_1_object; // 0x1d0 MovT
	func_6253(var_759_object); // 0x1d1 Call
	var_764_bool = var_758_bool == 0; // 0x1d3 Not
	if(var_764_bool == 0) goto Label_470; // 0x1d4 JumpB
	var_744_bool = 1; // 0x1d5 MovB
	
Label_470:
	if(var_744_bool == 0) goto Label_478; // 0x1d6 JumpB
	var_765_bool = 0; var_766_object = Obj(); // 0x1d7 PushV
	var_766_object = var_1_object; // 0x1d8 MovT
	func_6265(var_766_object); // 0x1d9 Call
	var_771_bool = var_765_bool == 0; // 0x1db Not
	if(var_771_bool == 0) goto Label_478; // 0x1dc JumpB
	var_743_bool = 1; // 0x1dd MovB
	
Label_478:
	if(var_743_bool == 0) goto Label_484; // 0x1de JumpB
	var_772_int = 12736; // 0x1df PushI
	var_773_int = 11904; // 0x1e0 PushI
	var_774_int = 13930; // 0x1e1 PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0x1e2 TObjFunc
	
Label_484:
	var_775_bool = 0; // 0x1e4 PushV
	var_775_bool = 0; // 0x1e5 MovB
	var_776_bool = 0; var_777_object = Obj(); // 0x1e6 PushV
	var_777_object = var_1_object; // 0x1e7 MovT
	func_6217(var_777_object); // 0x1e8 Call
	if(var_776_bool == 0) goto Label_497; // 0x1ea JumpB
	var_782_bool = 0; var_783_object = Obj(); // 0x1eb PushV
	var_783_object = var_1_object; // 0x1ec MovT
	func_5993(var_783_object); // 0x1ed Call
	if(var_782_bool == 0) goto Label_497; // 0x1ef JumpB
	var_775_bool = 1; // 0x1f0 MovB
	
Label_497:
	if(var_775_bool == 0) goto Label_503; // 0x1f1 JumpB
	var_788_int = 3664; // 0x1f2 PushI
	var_789_int = 3970; // 0x1f3 PushI
	var_790_int = 3969; // 0x1f4 PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0x1f5 TObjFunc
	
Label_503:
	var_791_bool = 0; var_792_object = Obj(); // 0x1f7 PushV
	var_792_object = var_1_object; // 0x1f8 MovT
	func_6241(var_792_object); // 0x1f9 Call
	if(var_791_bool == 0) goto Label_513; // 0x1fb JumpB
	var_797_int = 3663; // 0x1fc PushI
	var_798_int = 3972; // 0x1fd PushI
	var_799_int = 3968; // 0x1fe PushI
	AddReply(var_797_int, var_798_int, var_799_int); // 0x1ff TObjFunc
	
Label_513:
	var_800_int = 13019; // 0x201 PushI
	var_801_int = -1; // 0x202 PushI
	var_802_int = 14225; // 0x203 PushI
	AddReply(var_800_int, var_801_int, var_802_int); // 0x204 TObjFunc
	goto Label_521; // 0x206 Jump
	
Label_521:
	var_803_bool = 0; // 0x209 PushV
	func_5101(var_803_bool); // 0x20a Call
	if(var_803_bool == 0) goto Label_536; // 0x20c JumpB
	
Label_525:
	lshWaitForAnimEnd(); // 0x20d Func
	var_804_object = var_3_object; // 0x20f PushT
	if(var_804_object == 0) goto Label_530; // 0x210 JumpB
	goto Label_535; // 0x211 Jump
	
Label_535:
	goto Label_550; // 0x217 Jump
	
Label_550:
	return 0; // 0x226 Return
	
Label_530:
	var_805_string = ""; // 0x212 PushV
	var_805_string = var_2_object; // 0x213 MovT
	func_4971(var_805_string); // 0x214 Call
	goto Label_525; // 0x216 Jump
	
Label_536:
	var_806_string = "all"; // 0x218 PushS
	var_807_string = "idle"; // 0x219 PushS
	PlayAnimation(var_806_string, var_807_string); // 0x21a Func
	
Label_540:
	WaitForAnimEnd(); // 0x21c Func
	var_808_object = var_3_object; // 0x21e PushT
	if(var_808_object == 0) goto Label_545; // 0x21f JumpB
	goto Label_550; // 0x220 Jump
	
Label_545:
	var_809_string = "all"; // 0x221 PushS
	var_810_string = "idle"; // 0x222 PushS
	PlayAnimation(var_809_string, var_810_string); // 0x223 Func
	goto Label_540; // 0x225 Jump
}


func_5531()
{
	var_38_string = "d5q01"; // 0x159c PushS
	var_39_int = 5; // 0x159d PushI
	SetVariable(var_38_string, var_39_int); // 0x159e Func
	func_6678(); // 0x15a1 Call
	var_65_bool = 0; var_66_string = ""; var_67_string = ""; // 0x15a3 PushV
	var_66_string = "quest_d5_01"; // 0x15a4 MovS
	var_67_string = "factory"; // 0x15a5 MovS
	func_5048(var_65_bool, var_66_string, var_67_string); // 0x15a6 Call
	return 0; // 0x15a8 Return
}


func_5022(var_224_object, var_225_int)
{
	var_226_int = 0; var_227_int = 0; var_228_bool = 0; var_229_int = 0; var_230_int = 0; var_231_bool = 0; // 0x139e PushV
	GetItemID(var_229_int); // 0x139f ObjFunc
	var_232_string = "Category"; // 0x13a1 PushS
	GetInvItemProperty(var_230_int, var_229_int, var_232_string); // 0x13a2 Func
	AddItem(var_231_bool, var_224_object, var_230_int, var_225_int); // 0x13a4 ObjFunc
	var_233_bool = var_231_bool == 0; // 0x13a6 Not
	if(var_233_bool == 0) goto Label_5034; // 0x13a7 JumpB
	DropItems(var_224_object, var_225_int); // 0x13a8 ObjFunc
	
Label_5034:
	return 6; // 0x13aa Return
}


func_6051(var_309_bool)
{
	var_311_int = 0; var_312_string = ""; // 0x17a4 PushV
	var_312_string = "ood4Lara2"; // 0x17a5 MovS
	func_5006(var_311_int, var_312_string); // 0x17a6 Call
	var_313_int = 0; // 0x17a8 PushI
	var_314_bool = var_311_int == var_313_int; // 0x17a9 Eq
	if(var_314_bool == 0) goto Label_6061; // 0x17aa JumpB
	var_309_bool = 1; // 0x17ab MovB
	return 0; // 0x17ac Return
	
Label_6061:
	var_309_bool = 0; // 0x17ad MovB
	return 0; // 0x17ae Return
}


func_6565(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x19a5 PushV
	var_91_string = "player"; // 0x19a6 PushS
	GetVariable(var_91_string, var_90_int); // 0x19a7 Func
	var_92_int = 0; // 0x19a9 PushI
	var_93_bool = var_90_int == var_92_int; // 0x19aa Eq
	if(var_93_bool == 0) goto Label_6575; // 0x19ab JumpB
	var_88_int = 200001; // 0x19ac MovI
	return 2; // 0x19ad Return
	
Label_6575:
	var_94_int = 1; // 0x19af PushI
	var_95_bool = var_90_int == var_94_int; // 0x19b0 Eq
	if(var_95_bool == 0) goto Label_6580; // 0x19b1 JumpB
	var_88_int = 200002; // 0x19b2 MovI
	return 2; // 0x19b3 Return
	
Label_6580:
	var_88_int = 200003; // 0x19b4 MovI
	return 2; // 0x19b5 Return
}


func_5545()
{
	var_38_string = "ood6Lara1"; // 0x15aa PushS
	var_39_int = 1; // 0x15ab PushI
	SetVariable(var_38_string, var_39_int); // 0x15ac Func
	return 0; // 0x15ae Return
}


func_5035(var_218_object, var_219_string, var_220_int)
{
	var_221_object = Obj(); var_222_object = Obj(); // 0x13ab PushV
	CreateInvItem(var_222_object); // 0x13ac Func
	SetItemName(var_219_string); // 0x13ae ObjFunc
	var_223_object = Obj(); var_224_object = Obj(); var_225_int = 0; // 0x13b0 PushV
	var_223_object = var_218_object; // 0x13b1 Mov
	var_224_object = var_222_object; // 0x13b2 Mov
	var_225_int = var_220_int; // 0x13b3 Mov
	func_5022(var_224_object, var_225_int); // 0x13b4 Call
	return 2; // 0x13b6 Return
}


func_5551(var_42_object)
{
	func_6694(); // 0x15b1 Call
	var_69_string = "lara blood is given"; // 0x15b3 PushS
	Trace(var_69_string); // 0x15b4 Func
	var_70_object = Obj(); var_71_string = ""; var_72_int = 0; // 0x15b6 PushV
	var_70_object = var_42_object; // 0x15b7 Mov
	var_71_string = "d6q01_lara_blood"; // 0x15b8 MovS
	var_72_int = 1; // 0x15b9 MovI
	func_5035(var_70_object, var_71_string, var_72_int); // 0x15ba Call
	return 0; // 0x15bc Return
}


func_6063(var_315_bool)
{
	var_317_int = 0; var_318_string = ""; // 0x17b0 PushV
	var_318_string = "d4q01_subquest"; // 0x17b1 MovS
	func_5006(var_317_int, var_318_string); // 0x17b2 Call
	var_319_int = 2; // 0x17b4 PushI
	var_320_bool = var_317_int == var_319_int; // 0x17b5 Eq
	if(var_320_bool == 0) goto Label_6073; // 0x17b6 JumpB
	var_315_bool = 1; // 0x17b7 MovB
	return 0; // 0x17b8 Return
	
Label_6073:
	var_315_bool = 0; // 0x17b9 MovB
	return 0; // 0x17ba Return
}


func_2485(var_0_object, var_390_int, var_391_object)
{
	var_393_object = Obj(); var_394_bool = 0; var_395_int = 0; var_396_bool = 0; var_397_object = Obj(); var_398_bool = 0; var_399_int = 0; var_400_bool = 0; // 0x9b5 PushV
	var_0_object = var_391_object; // 0x9b6 TMov
	var_401_bool = 0; var_402_object = Obj(); // 0x9b7 PushV
	var_402_object = var_391_object; // 0x9b8 Mov
	func_4911(var_402_object); // 0x9b9 Call
	var_403_bool = var_401_bool == 0; // 0x9bb Not
	if(var_403_bool == 0) goto Label_2495; // 0x9bc JumpB
	var_390_int = -2; // 0x9bd MovI
	return 8; // 0x9be Return
	
Label_2495:
	CreateDialog(var_397_object); // 0x9bf Func
	var_404_int = 0; // 0x9c1 PushV
	func_5097(var_404_int); // 0x9c2 Call
	SetNPCName(var_404_int); // 0x9c4 ObjFunc
	var_405_string = ""; // 0x9c6 PushV
	func_5099(var_405_string); // 0x9c7 Call
	SetPhoto(var_405_string); // 0x9c9 ObjFunc
	var_406_int = 0; // 0x9cb PushV
	func_6565(var_406_int); // 0x9cc Call
	SetPlayerName(var_406_int); // 0x9ce ObjFunc
	var_399_int = -1; // 0x9d0 MovI
	IsOverrideActive(var_398_bool); // 0x9d1 Func
	var_407_bool = var_398_bool; // 0x9d3 Push
	if(var_407_bool == 0) goto Label_2519; // 0x9d4 JumpB
	var_390_int = -2; // 0x9d5 MovI
	return 8; // 0x9d6 Return
	
Label_2519:
	DoDialog(var_397_object); // 0x9d7 Func
	var_408_object = Obj(); var_409_object = Obj(); // 0x9d9 PushV
	var_408_object = var_391_object; // 0x9da Mov
	var_409_object = var_397_object; // 0x9db Mov
	TaskCall(9); // 0x9dc TaskCall
	func_2548(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object); // 0x9dd Call
	TaskReturn(); // 0x9de TaskReturn
	IsDialogEnd(var_400_bool); // 0x9e0 ObjFunc
	
Label_2530:
	var_514_bool = var_400_bool == 0; // 0x9e2 Not
	if(var_514_bool == 0) goto Label_2537; // 0x9e3 JumpB
	sync(); // 0x9e4 Func
	IsDialogEnd(var_400_bool); // 0x9e6 ObjFunc
	goto Label_2530; // 0x9e8 Jump
	
Label_2537:
	var_515_object = Obj(); // 0x9e9 PushV
	var_515_object = var_391_object; // 0x9ea Mov
	func_4967(); // 0x9eb Call
	StopDialog(var_397_object); // 0x9ed Func
	GetReturnValue(var_399_int); // 0x9ef ObjFunc
	var_390_int = var_399_int; // 0x9f1 Mov
	return 8; // 0x9f2 Return
}


func_6582()
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x19b6 PushV
	var_52_string = "Adding diary entry"; // 0x19b7 PushS
	Trace(var_52_string); // 0x19b8 Func
	var_53_int = 33; // 0x19ba PushI
	var_54_int = 1; // 0x19bb PushI
	var_55_int = 12115; // 0x19bc PushI
	CreateDiaryEntry(var_51_object, var_53_int, var_54_int, var_55_int); // 0x19bd Func
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0; // 0x19bf PushV
	var_57_object = var_51_object; // 0x19c0 Mov
	var_58_int = 2; // 0x19c1 MovI
	func_6469(var_56_bool, var_57_object, var_58_int); // 0x19c2 Call
	return 2; // 0x19c4 Return
}


func_5048(var_65_bool, var_66_string, var_67_string)
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x13b8 PushV
	FindActor(var_69_object, var_66_string); // 0x13b9 Func
	var_70_bool = var_69_object == 0; // 0x13bb NullEq
	if(var_70_bool == 0) goto Label_5055; // 0x13bc JumpB
	var_65_bool = 0; // 0x13bd MovB
	return 2; // 0x13be Return
	
Label_5055:
	Trigger(var_69_object, var_67_string); // 0x13bf Func
	var_65_bool = 1; // 0x13c1 MovB
	return 2; // 0x13c2 Return
}


func_6075(var_225_bool, var_226_object)
{
	var_227_bool = 0; var_228_object = Obj(); // 0x17bc PushV
	var_228_object = var_226_object; // 0x17bd Mov
	func_6435(var_228_object); // 0x17be Call
	if(var_227_bool == 0) goto Label_6083; // 0x17c0 JumpB
	var_225_bool = 1; // 0x17c1 MovB
	return 0; // 0x17c2 Return
	
Label_6083:
	var_225_bool = 0; // 0x17c3 MovB
	return 0; // 0x17c4 Return
}


func_5565()
{
	var_88_string = "playsound"; // 0x15be PushS
	var_89_string = "giveitem"; // 0x15bf PushS
	TriggerWorld(var_88_string, var_89_string); // 0x15c0 Func
	return 0; // 0x15c2 Return
}


func_3522(var_0_object, var_1_object, var_2_object, var_3_object, var_536_object, var_537_object)
{
	var_0_object = var_537_object; // 0xdc3 TMov
	var_1_object = var_536_object; // 0xdc4 TMov
	var_3_object = 0; // 0xdc5 TMovB
	var_542_int = 1; // 0xdc6 PushI
	if(var_542_int == 0) goto Label_3641; // 0xdc7 JumpB
	var_543_string = ""; // 0xdc8 PushV
	var_543_string = "Neutral"; // 0xdc9 MovS
	func_3671(var_537_object, var_543_string); // 0xdca Call
	var_548_int = 10151; // 0xdcc PushI
	SetMessage(var_548_int); // 0xdcd TObjFunc
	ClearReplies(); // 0xdcf TObjFunc
	var_549_bool = 0; // 0xdd1 PushV
	var_549_bool = 0; // 0xdd2 MovB
	var_550_bool = 0; var_551_object = Obj(); // 0xdd3 PushV
	var_551_object = var_1_object; // 0xdd4 MovT
	func_6039(var_551_object); // 0xdd5 Call
	if(var_550_bool == 0) goto Label_3550; // 0xdd7 JumpB
	var_556_bool = 0; var_557_object = Obj(); // 0xdd8 PushV
	var_557_object = var_1_object; // 0xdd9 MovT
	func_6027(var_557_object); // 0xdda Call
	if(var_556_bool == 0) goto Label_3550; // 0xddc JumpB
	var_549_bool = 1; // 0xddd MovB
	
Label_3550:
	if(var_549_bool == 0) goto Label_3556; // 0xdde JumpB
	var_562_int = 10152; // 0xddf PushI
	var_563_int = 11195; // 0xde0 PushI
	var_564_int = 11194; // 0xde1 PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0xde2 TObjFunc
	
Label_3556:
	var_565_bool = 0; // 0xde4 PushV
	var_565_bool = 0; // 0xde5 MovB
	var_566_bool = 0; var_567_object = Obj(); // 0xde6 PushV
	var_567_object = var_1_object; // 0xde7 MovT
	func_6051(var_567_object); // 0xde8 Call
	if(var_566_bool == 0) goto Label_3569; // 0xdea JumpB
	var_572_bool = 0; var_573_object = Obj(); // 0xdeb PushV
	var_573_object = var_1_object; // 0xdec MovT
	func_6063(var_573_object); // 0xded Call
	if(var_572_bool == 0) goto Label_3569; // 0xdef JumpB
	var_565_bool = 1; // 0xdf0 MovB
	
Label_3569:
	if(var_565_bool == 0) goto Label_3575; // 0xdf1 JumpB
	var_578_int = 10995; // 0xdf2 PushI
	var_579_int = 12163; // 0xdf3 PushI
	var_580_int = 12162; // 0xdf4 PushI
	AddReply(var_578_int, var_579_int, var_580_int); // 0xdf5 TObjFunc
	
Label_3575:
	var_581_bool = 0; // 0xdf7 PushV
	var_581_bool = 0; // 0xdf8 MovB
	var_582_bool = 0; var_583_object = Obj(); // 0xdf9 PushV
	var_583_object = var_1_object; // 0xdfa MovT
	func_6097(var_583_object); // 0xdfb Call
	if(var_582_bool == 0) goto Label_3588; // 0xdfd JumpB
	var_588_bool = 0; var_589_object = Obj(); // 0xdfe PushV
	var_589_object = var_1_object; // 0xdff MovT
	func_6085(var_589_object); // 0xe00 Call
	if(var_588_bool == 0) goto Label_3588; // 0xe02 JumpB
	var_581_bool = 1; // 0xe03 MovB
	
Label_3588:
	if(var_581_bool == 0) goto Label_3594; // 0xe04 JumpB
	var_594_int = 11435; // 0xe05 PushI
	var_595_int = 12638; // 0xe06 PushI
	var_596_int = 12637; // 0xe07 PushI
	AddReply(var_594_int, var_595_int, var_596_int); // 0xe08 TObjFunc
	
Label_3594:
	var_597_bool = 0; // 0xe0a PushV
	var_597_bool = 0; // 0xe0b MovB
	var_598_bool = 0; var_599_object = Obj(); // 0xe0c PushV
	var_599_object = var_1_object; // 0xe0d MovT
	func_6085(var_599_object); // 0xe0e Call
	if(var_598_bool == 0) goto Label_3608; // 0xe10 JumpB
	var_600_bool = 0; var_601_object = Obj(); // 0xe11 PushV
	var_601_object = var_1_object; // 0xe12 MovT
	func_6109(var_601_object); // 0xe13 Call
	var_606_bool = var_600_bool == 0; // 0xe15 Not
	if(var_606_bool == 0) goto Label_3608; // 0xe16 JumpB
	var_597_bool = 1; // 0xe17 MovB
	
Label_3608:
	if(var_597_bool == 0) goto Label_3614; // 0xe18 JumpB
	var_607_int = 11476; // 0xe19 PushI
	var_608_int = 12683; // 0xe1a PushI
	var_609_int = 12682; // 0xe1b PushI
	AddReply(var_607_int, var_608_int, var_609_int); // 0xe1c TObjFunc
	
Label_3614:
	var_610_bool = 0; // 0xe1e PushV
	var_610_bool = 0; // 0xe1f MovB
	var_611_bool = 0; var_612_object = Obj(); // 0xe20 PushV
	var_612_object = var_1_object; // 0xe21 MovT
	func_6133(var_612_object); // 0xe22 Call
	if(var_611_bool == 0) goto Label_3627; // 0xe24 JumpB
	var_617_bool = 0; var_618_object = Obj(); // 0xe25 PushV
	var_618_object = var_1_object; // 0xe26 MovT
	func_6121(var_618_object); // 0xe27 Call
	if(var_617_bool == 0) goto Label_3627; // 0xe29 JumpB
	var_610_bool = 1; // 0xe2a MovB
	
Label_3627:
	if(var_610_bool == 0) goto Label_3633; // 0xe2b JumpB
	var_623_int = 11859; // 0xe2c PushI
	var_624_int = 13073; // 0xe2d PushI
	var_625_int = 13072; // 0xe2e PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0xe2f TObjFunc
	
Label_3633:
	var_626_int = 11479; // 0xe31 PushI
	var_627_int = -1; // 0xe32 PushI
	var_628_int = 12685; // 0xe33 PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0xe34 TObjFunc
	goto Label_3641; // 0xe36 Jump
	
Label_3641:
	var_629_bool = 0; // 0xe39 PushV
	func_5101(var_629_bool); // 0xe3a Call
	if(var_629_bool == 0) goto Label_3656; // 0xe3c JumpB
	
Label_3645:
	lshWaitForAnimEnd(); // 0xe3d Func
	var_630_object = var_3_object; // 0xe3f PushT
	if(var_630_object == 0) goto Label_3650; // 0xe40 JumpB
	goto Label_3655; // 0xe41 Jump
	
Label_3655:
	goto Label_3670; // 0xe47 Jump
	
Label_3670:
	return 0; // 0xe56 Return
	
Label_3650:
	var_631_string = ""; // 0xe42 PushV
	var_631_string = var_2_object; // 0xe43 MovT
	func_4971(var_631_string); // 0xe44 Call
	goto Label_3645; // 0xe46 Jump
	
Label_3656:
	var_632_string = "all"; // 0xe48 PushS
	var_633_string = "idle"; // 0xe49 PushS
	PlayAnimation(var_632_string, var_633_string); // 0xe4a Func
	
Label_3660:
	WaitForAnimEnd(); // 0xe4c Func
	var_634_object = var_3_object; // 0xe4e PushT
	if(var_634_object == 0) goto Label_3665; // 0xe4f JumpB
	goto Label_3670; // 0xe50 Jump
	
Label_3665:
	var_635_string = "all"; // 0xe51 PushS
	var_636_string = "idle"; // 0xe52 PushS
	PlayAnimation(var_635_string, var_636_string); // 0xe53 Func
	goto Label_3660; // 0xe55 Jump
}


func_5571()
{
	var_100_string = "ood6Lara2"; // 0x15c4 PushS
	var_101_int = 1; // 0x15c5 PushI
	SetVariable(var_100_string, var_101_int); // 0x15c6 Func
	return 0; // 0x15c8 Return
}


func_4547(var_0_object, var_1_object, var_2_object, var_3_object, var_659_object, var_660_object)
{
	var_0_object = var_660_object; // 0x11c4 TMov
	var_1_object = var_659_object; // 0x11c5 TMov
	var_3_object = 0; // 0x11c6 TMovB
	var_665_int = 1; // 0x11c7 PushI
	if(var_665_int == 0) goto Label_4580; // 0x11c8 JumpB
	var_666_string = ""; // 0x11c9 PushV
	var_666_string = "Neutral"; // 0x11ca MovS
	func_4610(var_660_object, var_666_string); // 0x11cb Call
	var_671_int = 11662; // 0x11cd PushI
	SetMessage(var_671_int); // 0x11ce TObjFunc
	ClearReplies(); // 0x11d0 TObjFunc
	var_672_bool = 0; var_673_object = Obj(); // 0x11d2 PushV
	var_673_object = var_1_object; // 0x11d3 MovT
	func_6145(var_673_object); // 0x11d4 Call
	if(var_672_bool == 0) goto Label_4572; // 0x11d6 JumpB
	var_678_int = 11663; // 0x11d7 PushI
	var_679_int = 12863; // 0x11d8 PushI
	var_680_int = 12862; // 0x11d9 PushI
	AddReply(var_678_int, var_679_int, var_680_int); // 0x11da TObjFunc
	
Label_4572:
	var_681_int = 11960; // 0x11dc PushI
	var_682_int = -1; // 0x11dd PushI
	var_683_int = 13174; // 0x11de PushI
	AddReply(var_681_int, var_682_int, var_683_int); // 0x11df TObjFunc
	goto Label_4580; // 0x11e1 Jump
	
Label_4580:
	var_684_bool = 0; // 0x11e4 PushV
	func_5101(var_684_bool); // 0x11e5 Call
	if(var_684_bool == 0) goto Label_4595; // 0x11e7 JumpB
	
Label_4584:
	lshWaitForAnimEnd(); // 0x11e8 Func
	var_685_object = var_3_object; // 0x11ea PushT
	if(var_685_object == 0) goto Label_4589; // 0x11eb JumpB
	goto Label_4594; // 0x11ec Jump
	
Label_4594:
	goto Label_4609; // 0x11f2 Jump
	
Label_4609:
	return 0; // 0x1201 Return
	
Label_4589:
	var_686_string = ""; // 0x11ed PushV
	var_686_string = var_2_object; // 0x11ee MovT
	func_4971(var_686_string); // 0x11ef Call
	goto Label_4584; // 0x11f1 Jump
	
Label_4595:
	var_687_string = "all"; // 0x11f3 PushS
	var_688_string = "idle"; // 0x11f4 PushS
	PlayAnimation(var_687_string, var_688_string); // 0x11f5 Func
	
Label_4599:
	WaitForAnimEnd(); // 0x11f7 Func
	var_689_object = var_3_object; // 0x11f9 PushT
	if(var_689_object == 0) goto Label_4604; // 0x11fa JumpB
	goto Label_4609; // 0x11fb Jump
	
Label_4604:
	var_690_string = "all"; // 0x11fc PushS
	var_691_string = "idle"; // 0x11fd PushS
	PlayAnimation(var_690_string, var_691_string); // 0x11fe Func
	goto Label_4599; // 0x1200 Jump
}


func_6085(var_331_bool)
{
	var_333_int = 0; var_334_string = ""; // 0x17c6 PushV
	var_334_string = "d4q02"; // 0x17c7 MovS
	func_5006(var_333_int, var_334_string); // 0x17c8 Call
	var_335_int = 1; // 0x17ca PushI
	var_336_bool = var_333_int == var_335_int; // 0x17cb Eq
	if(var_336_bool == 0) goto Label_6095; // 0x17cc JumpB
	var_331_bool = 1; // 0x17cd MovB
	return 0; // 0x17ce Return
	
Label_6095:
	var_331_bool = 0; // 0x17cf MovB
	return 0; // 0x17d0 Return
}


func_5060(var_57_float)
{
	var_58_float = 0; var_59_float = 0; // 0x13c4 PushV
	GetGameTime(var_59_float); // 0x13c5 Func
	var_57_float = var_59_float; // 0x13c7 Mov
	return 2; // 0x13c8 Return
}


func_6598()
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x19c6 PushV
	var_77_string = "Adding diary entry"; // 0x19c7 PushS
	Trace(var_77_string); // 0x19c8 Func
	var_78_int = 12; // 0x19ca PushI
	var_79_int = 2; // 0x19cb PushI
	var_80_int = 3096; // 0x19cc PushI
	CreateDiaryEntry(var_76_object, var_78_int, var_79_int, var_80_int); // 0x19cd Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0x19cf PushV
	var_82_object = var_76_object; // 0x19d0 Mov
	var_83_int = -1; // 0x19d1 MovI
	func_6469(var_81_bool, var_82_object, var_83_int); // 0x19d2 Call
	return 2; // 0x19d4 Return
}


func_5577()
{
	var_184_string = "ood6Lara3"; // 0x15ca PushS
	var_185_int = 1; // 0x15cb PushI
	SetVariable(var_184_string, var_185_int); // 0x15cc Func
	return 0; // 0x15ce Return
}


func_5065(var_140_int)
{
	var_141_float = 0; var_142_float = 0; // 0x13c9 PushV
	GetGameTime(var_142_float); // 0x13ca Func
	var_143_int = 1; // 0x13cc PushI
	var_144_int = 0; // 0x13cd PushV
	var_145_int = 24; // 0x13ce PushI
	var_144_int = var_142_float / var_142_float; // 0x13cf Div2
	var_140_int = var_143_int + var_144_int; // 0x13d0 Add2
	return 2; // 0x13d1 Return
}


func_5583()
{
	var_190_string = "ood6Lara4"; // 0x15d0 PushS
	var_191_int = 1; // 0x15d1 PushI
	SetVariable(var_190_string, var_191_int); // 0x15d2 Func
	return 0; // 0x15d4 Return
}


func_6097(var_325_bool)
{
	var_327_int = 0; var_328_string = ""; // 0x17d2 PushV
	var_328_string = "ood4Lara3"; // 0x17d3 MovS
	func_5006(var_327_int, var_328_string); // 0x17d4 Call
	var_329_int = 0; // 0x17d6 PushI
	var_330_bool = var_327_int == var_329_int; // 0x17d7 Eq
	if(var_330_bool == 0) goto Label_6107; // 0x17d8 JumpB
	var_325_bool = 1; // 0x17d9 MovB
	return 0; // 0x17da Return
	
Label_6107:
	var_325_bool = 0; // 0x17db MovB
	return 0; // 0x17dc Return
}


func_5074(var_211_int)
{
	var_212_float = 0; var_213_float = 0; // 0x13d2 PushV
	GetGameTime(var_213_float); // 0x13d3 Func
	var_214_int = 0; // 0x13d5 PushV
	var_214_int = var_213_float; // 0x13d6 Mov
	var_215_int = 24; // 0x13d7 PushI
	var_211_int = var_214_int % var_215_int; // 0x13d8 Mod2
	return 2; // 0x13d9 Return
}


func_5589()
{
	var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj(); var_109_object = Obj(); // 0x15d5 PushV
	var_110_string = "d6q01LaraVolonteer"; // 0x15d6 PushS
	var_111_int = 1; // 0x15d7 PushI
	SetVariable(var_110_string, var_111_int); // 0x15d8 Func
	var_112_object = Obj(); // 0x15da PushV
	func_6515(var_112_object); // 0x15db Call
	var_108_object = var_112_object; // 0x15dc Mov
	var_119_string = "d6q01AlexandrGotoJulia"; // 0x15de PushS
	FindMark(var_109_object, var_119_string); // 0x15df ObjFunc
	var_120_object = var_109_object; // 0x15e1 Push
	if(var_120_object == 0) goto Label_5605; // 0x15e2 JumpB
	Remove(); // 0x15e3 ObjFunc
	
Label_5605:
	var_121_string = "d6q01AlexandrGotoKaterina"; // 0x15e5 PushS
	FindMark(var_109_object, var_121_string); // 0x15e6 ObjFunc
	var_122_object = var_109_object; // 0x15e8 Push
	if(var_122_object == 0) goto Label_5612; // 0x15e9 JumpB
	Remove(); // 0x15ea ObjFunc
	
Label_5612:
	var_123_string = "d6q01AlexandrGotoLara"; // 0x15ec PushS
	FindMark(var_109_object, var_123_string); // 0x15ed ObjFunc
	var_124_object = var_109_object; // 0x15ef Push
	if(var_124_object == 0) goto Label_5619; // 0x15f0 JumpB
	Remove(); // 0x15f1 ObjFunc
	
Label_5619:
	var_125_string = "d6q01AlexangrGotoJulLaraSelf"; // 0x15f3 PushS
	FindMark(var_109_object, var_125_string); // 0x15f4 ObjFunc
	var_126_object = var_109_object; // 0x15f6 Push
	if(var_126_object == 0) goto Label_5626; // 0x15f7 JumpB
	Remove(); // 0x15f8 ObjFunc
	
Label_5626:
	var_127_string = "d6q01BigVladGotoAnna"; // 0x15fa PushS
	FindMark(var_109_object, var_127_string); // 0x15fb ObjFunc
	var_128_object = var_109_object; // 0x15fd Push
	if(var_128_object == 0) goto Label_5633; // 0x15fe JumpB
	Remove(); // 0x15ff ObjFunc
	
Label_5633:
	var_129_string = "d6q01BigVladGotoAnnaOspinaSelf"; // 0x1601 PushS
	FindMark(var_109_object, var_129_string); // 0x1602 ObjFunc
	var_130_object = var_109_object; // 0x1604 Push
	if(var_130_object == 0) goto Label_5640; // 0x1605 JumpB
	Remove(); // 0x1606 ObjFunc
	
Label_5640:
	var_131_string = "d6q01BigVladGotoOspina"; // 0x1608 PushS
	FindMark(var_109_object, var_131_string); // 0x1609 ObjFunc
	var_132_object = var_109_object; // 0x160b Push
	if(var_132_object == 0) goto Label_5647; // 0x160c JumpB
	Remove(); // 0x160d ObjFunc
	
Label_5647:
	var_133_string = "d6q01KaterinaGotoLaska"; // 0x160f PushS
	FindMark(var_109_object, var_133_string); // 0x1610 ObjFunc
	var_134_object = var_109_object; // 0x1612 Push
	if(var_134_object == 0) goto Label_5654; // 0x1613 JumpB
	Remove(); // 0x1614 ObjFunc
	
Label_5654:
	var_135_string = "d6q01KaterinagotoLaskaSelf"; // 0x1616 PushS
	FindMark(var_109_object, var_135_string); // 0x1617 ObjFunc
	var_136_object = var_109_object; // 0x1619 Push
	if(var_136_object == 0) goto Label_5661; // 0x161a JumpB
	Remove(); // 0x161b ObjFunc
	
Label_5661:
	var_137_string = "d6q01KillerIsKlara"; // 0x161d PushS
	FindMark(var_109_object, var_137_string); // 0x161e ObjFunc
	var_138_object = var_109_object; // 0x1620 Push
	if(var_138_object == 0) goto Label_5668; // 0x1621 JumpB
	Remove(); // 0x1622 ObjFunc
	
Label_5668:
	var_139_string = "d6q01LaskaGotoAlbinos"; // 0x1624 PushS
	FindMark(var_109_object, var_139_string); // 0x1625 ObjFunc
	var_140_object = var_109_object; // 0x1627 Push
	if(var_140_object == 0) goto Label_5675; // 0x1628 JumpB
	Remove(); // 0x1629 ObjFunc
	
Label_5675:
	var_141_string = "d6q01ViktorGotoAlexandr"; // 0x162b PushS
	FindMark(var_109_object, var_141_string); // 0x162c ObjFunc
	var_142_object = var_109_object; // 0x162e Push
	if(var_142_object == 0) goto Label_5682; // 0x162f JumpB
	Remove(); // 0x1630 ObjFunc
	
Label_5682:
	var_143_string = "d6q01ViktorGotoAlxBigSelf"; // 0x1632 PushS
	FindMark(var_109_object, var_143_string); // 0x1633 ObjFunc
	var_144_object = var_109_object; // 0x1635 Push
	if(var_144_object == 0) goto Label_5689; // 0x1636 JumpB
	Remove(); // 0x1637 ObjFunc
	
Label_5689:
	var_145_string = "d6q01ViktorGotoBigVlad"; // 0x1639 PushS
	FindMark(var_109_object, var_145_string); // 0x163a ObjFunc
	var_146_object = var_109_object; // 0x163c Push
	if(var_146_object == 0) goto Label_5696; // 0x163d JumpB
	Remove(); // 0x163e ObjFunc
	
Label_5696:
	func_6710(); // 0x1641 Call
	var_156_bool = 0; var_157_int = 0; // 0x1643 PushV
	var_157_int = 112; // 0x1644 MovI
	func_6498(var_156_bool, var_157_int); // 0x1645 Call
	var_164_bool = 0; var_165_int = 0; // 0x1647 PushV
	var_165_int = 113; // 0x1648 MovI
	func_6498(var_164_bool, var_165_int); // 0x1649 Call
	var_166_bool = 0; var_167_int = 0; // 0x164b PushV
	var_167_int = 114; // 0x164c MovI
	func_6498(var_166_bool, var_167_int); // 0x164d Call
	var_168_bool = 0; var_169_int = 0; // 0x164f PushV
	var_169_int = 115; // 0x1650 MovI
	func_6498(var_168_bool, var_169_int); // 0x1651 Call
	var_170_bool = 0; var_171_int = 0; // 0x1653 PushV
	var_171_int = 116; // 0x1654 MovI
	func_6498(var_170_bool, var_171_int); // 0x1655 Call
	var_172_bool = 0; var_173_int = 0; // 0x1657 PushV
	var_173_int = 117; // 0x1658 MovI
	func_6498(var_172_bool, var_173_int); // 0x1659 Call
	var_174_bool = 0; var_175_string = ""; var_176_string = ""; // 0x165b PushV
	var_175_string = "quest_d6_01"; // 0x165c MovS
	var_176_string = "completed"; // 0x165d MovS
	func_5048(var_174_bool, var_175_string, var_176_string); // 0x165e Call
	return 4; // 0x1660 Return
}


func_6614()
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x19d6 PushV
	var_102_string = "Adding diary entry"; // 0x19d7 PushS
	Trace(var_102_string); // 0x19d8 Func
	var_103_int = 63; // 0x19da PushI
	var_104_int = 2; // 0x19db PushI
	var_105_int = 12145; // 0x19dc PushI
	CreateDiaryEntry(var_101_object, var_103_int, var_104_int, var_105_int); // 0x19dd Func
	var_106_bool = 0; var_107_object = Obj(); var_108_int = 0; // 0x19df PushV
	var_107_object = var_101_object; // 0x19e0 Mov
	var_108_int = 12; // 0x19e1 MovI
	func_6469(var_106_bool, var_107_object, var_108_int); // 0x19e2 Call
	return 2; // 0x19e4 Return
}


func_5082(var_138_bool, var_139_int)
{
	var_140_int = 0; // 0x13db PushV
	func_5065(var_140_int); // 0x13dc Call
	var_138_bool = var_140_int == var_139_int; // 0x13de Eq2
	return 0; // 0x13df Return
}


func_6109(var_343_bool)
{
	var_345_int = 0; var_346_string = ""; // 0x17de PushV
	var_346_string = "d4q02LaraGivesMedcine"; // 0x17df MovS
	func_5006(var_345_int, var_346_string); // 0x17e0 Call
	var_347_int = 1; // 0x17e2 PushI
	var_348_bool = var_345_int == var_347_int; // 0x17e3 Eq
	if(var_348_bool == 0) goto Label_6119; // 0x17e4 JumpB
	var_343_bool = 1; // 0x17e5 MovB
	return 0; // 0x17e6 Return
	
Label_6119:
	var_343_bool = 0; // 0x17e7 MovB
	return 0; // 0x17e8 Return
}


func_5088(var_813_bool)
{
	var_814_bool = 0; var_815_bool = 0; // 0x13e0 PushV
	var_816_string = ""; // 0x13e1 PushV
	var_816_string = "No"; // 0x13e2 MovS
	func_4971(var_816_string); // 0x13e3 Call
	lshWaitForAnimEnd(var_815_bool); // 0x13e5 Func
	var_813_bool = var_815_bool; // 0x13e7 Mov
	return 2; // 0x13e8 Return
}


func_6630()
{
	var_211_object = Obj(); var_212_object = Obj(); // 0x19e6 PushV
	var_213_string = "Adding diary entry"; // 0x19e7 PushS
	Trace(var_213_string); // 0x19e8 Func
	var_214_int = 65; // 0x19ea PushI
	var_215_int = 2; // 0x19eb PushI
	var_216_int = 12147; // 0x19ec PushI
	CreateDiaryEntry(var_212_object, var_214_int, var_215_int, var_216_int); // 0x19ed Func
	var_217_bool = 0; var_218_object = Obj(); var_219_int = 0; // 0x19ef PushV
	var_218_object = var_212_object; // 0x19f0 Mov
	var_219_int = 12; // 0x19f1 MovI
	func_6469(var_217_bool, var_218_object, var_219_int); // 0x19f2 Call
	return 2; // 0x19f4 Return
}


func_5097(var_86_int)
{
	var_86_int = 2866; // 0x13e9 MovI
	return 0; // 0x13ea Return
}


func_6121(var_360_bool)
{
	var_362_int = 0; var_363_string = ""; // 0x17ea PushV
	var_363_string = "d4q02"; // 0x17eb MovS
	func_5006(var_362_int, var_363_string); // 0x17ec Call
	var_364_int = 1000; // 0x17ee PushI
	var_365_bool = var_362_int == var_364_int; // 0x17ef Eq
	if(var_365_bool == 0) goto Label_6131; // 0x17f0 JumpB
	var_360_bool = 1; // 0x17f1 MovB
	return 0; // 0x17f2 Return
	
Label_6131:
	var_360_bool = 0; // 0x17f3 MovB
	return 0; // 0x17f4 Return
}


func_5099(var_87_string)
{
	var_87_string = "ui/NPC_Lara.png"; // 0x13eb MovS
	return 0; // 0x13ec Return
}


func_5101(var_33_bool)
{
	var_33_bool = 1; // 0x13ed MovB
	return 0; // 0x13ee Return
}


func_5103()
{
	var_38_string = "ood1Lara1"; // 0x13f0 PushS
	var_39_int = 1; // 0x13f1 PushI
	SetVariable(var_38_string, var_39_int); // 0x13f2 Func
	return 0; // 0x13f4 Return
}


func_2548(var_0_object, var_1_object, var_2_object, var_3_object, var_408_object, var_409_object)
{
	var_0_object = var_409_object; // 0x9f5 TMov
	var_1_object = var_408_object; // 0x9f6 TMov
	var_3_object = 0; // 0x9f7 TMovB
	var_414_int = 1; // 0x9f8 PushI
	if(var_414_int == 0) goto Label_2721; // 0x9f9 JumpB
	var_415_bool = 0; // 0x9fa PushV
	var_415_bool = 0; // 0x9fb MovB
	var_416_bool = 0; var_417_object = Obj(); // 0x9fc PushV
	var_417_object = var_1_object; // 0x9fd MovT
	func_5906(var_417_object); // 0x9fe Call
	if(var_416_bool == 0) goto Label_2567; // 0xa00 JumpB
	var_422_bool = 0; var_423_object = Obj(); // 0xa01 PushV
	var_423_object = var_1_object; // 0xa02 MovT
	func_5942(var_423_object); // 0xa03 Call
	if(var_422_bool == 0) goto Label_2567; // 0xa05 JumpB
	var_415_bool = 1; // 0xa06 MovB
	
Label_2567:
	if(var_415_bool == 0) goto Label_2588; // 0xa07 JumpB
	var_428_string = ""; // 0xa08 PushV
	var_428_string = "Neutral"; // 0xa09 MovS
	func_2751(var_409_object, var_428_string); // 0xa0a Call
	var_433_int = 6893; // 0xa0c PushI
	SetMessage(var_433_int); // 0xa0d TObjFunc
	ClearReplies(); // 0xa0f TObjFunc
	var_434_int = 7378; // 0xa11 PushI
	var_435_int = 8140; // 0xa12 PushI
	var_436_int = 8139; // 0xa13 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0xa14 TObjFunc
	var_437_int = 7384; // 0xa16 PushI
	var_438_int = 8140; // 0xa17 PushI
	var_439_int = 8145; // 0xa18 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0xa19 TObjFunc
	goto Label_2721; // 0xa1b Jump
	
Label_2721:
	var_440_bool = 0; // 0xaa1 PushV
	func_5101(var_440_bool); // 0xaa2 Call
	if(var_440_bool == 0) goto Label_2736; // 0xaa4 JumpB
	
Label_2725:
	lshWaitForAnimEnd(); // 0xaa5 Func
	var_441_object = var_3_object; // 0xaa7 PushT
	if(var_441_object == 0) goto Label_2730; // 0xaa8 JumpB
	goto Label_2735; // 0xaa9 Jump
	
Label_2735:
	goto Label_2750; // 0xaaf Jump
	
Label_2750:
	return 0; // 0xabe Return
	
Label_2730:
	var_442_string = ""; // 0xaaa PushV
	var_442_string = var_2_object; // 0xaab MovT
	func_4971(var_442_string); // 0xaac Call
	goto Label_2725; // 0xaae Jump
	
Label_2736:
	var_443_string = "all"; // 0xab0 PushS
	var_444_string = "idle"; // 0xab1 PushS
	PlayAnimation(var_443_string, var_444_string); // 0xab2 Func
	
Label_2740:
	WaitForAnimEnd(); // 0xab4 Func
	var_445_object = var_3_object; // 0xab6 PushT
	if(var_445_object == 0) goto Label_2745; // 0xab7 JumpB
	goto Label_2750; // 0xab8 Jump
	
Label_2745:
	var_446_string = "all"; // 0xab9 PushS
	var_447_string = "idle"; // 0xaba PushS
	PlayAnimation(var_446_string, var_447_string); // 0xabb Func
	goto Label_2740; // 0xabd Jump
	
Label_2588:
	var_448_string = ""; // 0xa1c PushV
	var_448_string = "Neutral"; // 0xa1d MovS
	func_2751(var_409_object, var_448_string); // 0xa1e Call
	var_449_int = 7377; // 0xa20 PushI
	SetMessage(var_449_int); // 0xa21 TObjFunc
	ClearReplies(); // 0xa23 TObjFunc
	var_450_bool = 0; // 0xa25 PushV
	var_450_bool = 0; // 0xa26 MovB
	var_451_bool = 0; // 0xa27 PushV
	var_451_bool = 0; // 0xa28 MovB
	var_452_bool = 0; var_453_object = Obj(); // 0xa29 PushV
	var_453_object = var_1_object; // 0xa2a MovT
	func_5918(var_453_object); // 0xa2b Call
	if(var_452_bool == 0) goto Label_2612; // 0xa2d JumpB
	var_458_bool = 0; var_459_object = Obj(); // 0xa2e PushV
	var_459_object = var_1_object; // 0xa2f MovT
	func_5981(var_459_object); // 0xa30 Call
	if(var_458_bool == 0) goto Label_2612; // 0xa32 JumpB
	var_451_bool = 1; // 0xa33 MovB
	
Label_2612:
	if(var_451_bool == 0) goto Label_2619; // 0xa34 JumpB
	var_464_bool = 0; var_465_object = Obj(); // 0xa35 PushV
	var_465_object = var_1_object; // 0xa36 MovT
	func_5959(var_464_bool, var_465_object); // 0xa37 Call
	if(var_464_bool == 0) goto Label_2619; // 0xa39 JumpB
	var_450_bool = 1; // 0xa3a MovB
	
Label_2619:
	if(var_450_bool == 0) goto Label_2625; // 0xa3b JumpB
	var_479_int = 6900; // 0xa3c PushI
	var_480_int = 7607; // 0xa3d PushI
	var_481_int = 7606; // 0xa3e PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0xa3f TObjFunc
	
Label_2625:
	var_482_bool = 0; // 0xa41 PushV
	var_482_bool = 0; // 0xa42 MovB
	var_483_bool = 0; var_484_object = Obj(); // 0xa43 PushV
	var_484_object = var_1_object; // 0xa44 MovT
	func_5930(var_484_object); // 0xa45 Call
	if(var_483_bool == 0) goto Label_2638; // 0xa47 JumpB
	var_489_bool = 0; var_490_object = Obj(); // 0xa48 PushV
	var_490_object = var_1_object; // 0xa49 MovT
	func_5959(var_489_bool, var_490_object); // 0xa4a Call
	if(var_489_bool == 0) goto Label_2638; // 0xa4c JumpB
	var_482_bool = 1; // 0xa4d MovB
	
Label_2638:
	if(var_482_bool == 0) goto Label_2644; // 0xa4e JumpB
	var_491_int = 6902; // 0xa4f PushI
	var_492_int = 7609; // 0xa50 PushI
	var_493_int = 7608; // 0xa51 PushI
	AddReply(var_491_int, var_492_int, var_493_int); // 0xa52 TObjFunc
	
Label_2644:
	var_494_bool = 0; // 0xa54 PushV
	var_494_bool = 0; // 0xa55 MovB
	var_495_bool = 0; var_496_object = Obj(); // 0xa56 PushV
	var_496_object = var_1_object; // 0xa57 MovT
	func_5954(var_496_object); // 0xa58 Call
	if(var_495_bool == 0) goto Label_2657; // 0xa5a JumpB
	var_497_bool = 0; var_498_object = Obj(); // 0xa5b PushV
	var_498_object = var_1_object; // 0xa5c MovT
	func_5969(var_498_object); // 0xa5d Call
	if(var_497_bool == 0) goto Label_2657; // 0xa5f JumpB
	var_494_bool = 1; // 0xa60 MovB
	
Label_2657:
	if(var_494_bool == 0) goto Label_2663; // 0xa61 JumpB
	var_503_int = 6905; // 0xa62 PushI
	var_504_int = 7612; // 0xa63 PushI
	var_505_int = 7611; // 0xa64 PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0xa65 TObjFunc
	
Label_2663:
	var_506_bool = 0; var_507_object = Obj(); // 0xa67 PushV
	var_507_object = var_1_object; // 0xa68 MovT
	func_5942(var_507_object); // 0xa69 Call
	if(var_506_bool == 0) goto Label_2673; // 0xa6b JumpB
	var_508_int = 7745; // 0xa6c PushI
	var_509_int = 7601; // 0xa6d PushI
	var_510_int = 8545; // 0xa6e PushI
	AddReply(var_508_int, var_509_int, var_510_int); // 0xa6f TObjFunc
	
Label_2673:
	var_511_int = 7744; // 0xa71 PushI
	var_512_int = -1; // 0xa72 PushI
	var_513_int = 8544; // 0xa73 PushI
	AddReply(var_511_int, var_512_int, var_513_int); // 0xa74 TObjFunc
	goto Label_2721; // 0xa76 Jump
}


func_5109()
{
	var_77_string = "ood1Lara2"; // 0x13f6 PushS
	var_78_int = 1; // 0x13f7 PushI
	SetVariable(var_77_string, var_78_int); // 0x13f8 Func
	return 0; // 0x13fa Return
}


func_6133(var_354_bool)
{
	var_356_int = 0; var_357_string = ""; // 0x17f6 PushV
	var_357_string = "ood4Lara4"; // 0x17f7 MovS
	func_5006(var_356_int, var_357_string); // 0x17f8 Call
	var_358_int = 0; // 0x17fa PushI
	var_359_bool = var_356_int == var_358_int; // 0x17fb Eq
	if(var_359_bool == 0) goto Label_6143; // 0x17fc JumpB
	var_354_bool = 1; // 0x17fd MovB
	return 0; // 0x17fe Return
	
Label_6143:
	var_354_bool = 0; // 0x17ff MovB
	return 0; // 0x1800 Return
}


func_6646()
{
	var_158_object = Obj(); var_159_object = Obj(); // 0x19f6 PushV
	var_160_string = "Adding diary entry"; // 0x19f7 PushS
	Trace(var_160_string); // 0x19f8 Func
	var_161_int = 66; // 0x19fa PushI
	var_162_int = 2; // 0x19fb PushI
	var_163_int = 12148; // 0x19fc PushI
	CreateDiaryEntry(var_159_object, var_161_int, var_162_int, var_163_int); // 0x19fd Func
	var_164_bool = 0; var_165_object = Obj(); var_166_int = 0; // 0x19ff PushV
	var_165_object = var_159_object; // 0x1a00 Mov
	var_166_int = 12; // 0x1a01 MovI
	func_6469(var_164_bool, var_165_object, var_166_int); // 0x1a02 Call
	return 2; // 0x1a04 Return
}


func_5115()
{
	var_83_string = "ood1Lara3"; // 0x13fc PushS
	var_84_int = 1; // 0x13fd PushI
	SetVariable(var_83_string, var_84_int); // 0x13fe Func
	return 0; // 0x1400 Return
}


