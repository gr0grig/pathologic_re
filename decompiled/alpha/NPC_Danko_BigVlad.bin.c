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
	func_9738(var_41_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool)
{
	var_41_bool = 0; var_42_object = Obj(); // 0x2a PushV
	var_42_object = var_40_bool; // 0x2b Mov
	func_7780(var_42_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xc5 PushI
	if(var_42_int == 0) goto Label_321; // 0xc6 JumpB
	func_7875(); // 0xc8 Call
	var_44_int = 467; // 0xca PushI
	var_45_bool = var_40_string == var_44_int; // 0xcb Eq
	if(var_45_bool == 0) goto Label_235; // 0xcc JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xcd PushV
	var_46_object = var_1_object; // 0xce MovT
	var_47_object = var_0_object; // 0xcf MovT
	func_8513(); // 0xd0 Call
	var_50_string = ""; // 0xd2 PushV
	var_50_string = "Neutral"; // 0xd3 MovS
	func_180(var_41_bool, var_50_string); // 0xd4 Call
	var_65_int = 401; // 0xd6 PushI
	SetMessage(var_65_int); // 0xd7 TObjFunc
	ClearReplies(); // 0xd9 TObjFunc
	var_66_int = 402; // 0xdb PushI
	var_67_int = 471; // 0xdc PushI
	var_68_int = 468; // 0xdd PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xde TObjFunc
	var_69_int = 403; // 0xe0 PushI
	var_70_int = 472; // 0xe1 PushI
	var_71_int = 469; // 0xe2 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0xe3 TObjFunc
	var_72_int = 404; // 0xe5 PushI
	var_73_int = -1; // 0xe6 PushI
	var_74_int = 470; // 0xe7 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_75_int = 472; // 0xeb PushI
	var_76_bool = var_40_string == var_75_int; // 0xec Eq
	if(var_76_bool == 0) goto Label_258; // 0xed JumpB
	var_77_string = ""; // 0xee PushV
	var_77_string = "Neutral"; // 0xef MovS
	func_180(var_41_bool, var_77_string); // 0xf0 Call
	var_78_int = 406; // 0xf2 PushI
	SetMessage(var_78_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_79_int = 413; // 0xf7 PushI
	var_80_int = 475; // 0xf8 PushI
	var_81_int = 480; // 0xf9 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0xfa TObjFunc
	var_82_int = 414; // 0xfc PushI
	var_83_int = -1; // 0xfd PushI
	var_84_int = 481; // 0xfe PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0xff TObjFunc
	return 0; // 0x101 Return
	
Label_258:
	var_85_int = 471; // 0x102 PushI
	var_86_bool = var_40_string == var_85_int; // 0x103 Eq
	if(var_86_bool == 0) goto Label_281; // 0x104 JumpB
	var_87_string = ""; // 0x105 PushV
	var_87_string = "Neutral"; // 0x106 MovS
	func_180(var_41_bool, var_87_string); // 0x107 Call
	var_88_int = 405; // 0x109 PushI
	SetMessage(var_88_int); // 0x10a TObjFunc
	ClearReplies(); // 0x10c TObjFunc
	var_89_int = 407; // 0x10e PushI
	var_90_int = 475; // 0x10f PushI
	var_91_int = 473; // 0x110 PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x111 TObjFunc
	var_92_int = 408; // 0x113 PushI
	var_93_int = 475; // 0x114 PushI
	var_94_int = 474; // 0x115 PushI
	AddReply(var_92_int, var_93_int, var_94_int); // 0x116 TObjFunc
	return 0; // 0x118 Return
	
Label_281:
	var_95_int = 475; // 0x119 PushI
	var_96_bool = var_40_string == var_95_int; // 0x11a Eq
	if(var_96_bool == 0) goto Label_309; // 0x11b JumpB
	var_97_string = ""; // 0x11c PushV
	var_97_string = "Neutral"; // 0x11d MovS
	func_180(var_41_bool, var_97_string); // 0x11e Call
	var_98_int = 409; // 0x120 PushI
	SetMessage(var_98_int); // 0x121 TObjFunc
	ClearReplies(); // 0x123 TObjFunc
	var_99_int = 410; // 0x125 PushI
	var_100_int = -1; // 0x126 PushI
	var_101_int = 477; // 0x127 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x128 TObjFunc
	var_102_int = 411; // 0x12a PushI
	var_103_int = -1; // 0x12b PushI
	var_104_int = 478; // 0x12c PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x12d TObjFunc
	var_105_int = 412; // 0x12f PushI
	var_106_int = -1; // 0x130 PushI
	var_107_int = 479; // 0x131 PushI
	AddReply(var_105_int, var_106_int, var_107_int); // 0x132 TObjFunc
	return 0; // 0x134 Return
	
Label_309:
	var_3_string = 1; // 0x135 TMovB
	var_108_bool = 0; // 0x136 PushV
	func_7949(var_108_bool); // 0x137 Call
	if(var_108_bool == 0) goto Label_317; // 0x139 JumpB
	lshStopAnimation(); // 0x13a Func
	goto Label_319; // 0x13c Jump
	
Label_319:
	return 0; // 0x13f Return
	
Label_317:
	StopAnimation(); // 0x13d Func
	
Label_321:
	return 0; // 0x141 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x238 PushI
	if(var_42_int == 0) goto Label_1112; // 0x239 JumpB
	func_7875(); // 0x23b Call
	var_44_int = 13245; // 0x23d PushI
	var_45_bool = var_41_bool == var_44_int; // 0x23e Eq
	if(var_45_bool == 0) goto Label_581; // 0x23f JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x240 PushV
	var_46_object = var_1_object; // 0x241 MovT
	var_47_object = var_0_object; // 0x242 MovT
	func_8507(); // 0x243 Call
	
Label_581:
	var_50_int = 13253; // 0x245 PushI
	var_51_bool = var_41_bool == var_50_int; // 0x246 Eq
	if(var_51_bool == 0) goto Label_589; // 0x247 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x248 PushV
	var_52_object = var_1_object; // 0x249 MovT
	var_53_object = var_0_object; // 0x24a MovT
	func_8549(); // 0x24b Call
	
Label_589:
	var_105_int = 13885; // 0x24d PushI
	var_106_bool = var_41_bool == var_105_int; // 0x24e Eq
	if(var_106_bool == 0) goto Label_597; // 0x24f JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x250 PushV
	var_107_object = var_1_object; // 0x251 MovT
	var_108_object = var_0_object; // 0x252 MovT
	func_8549(); // 0x253 Call
	
Label_597:
	var_109_int = 13673; // 0x255 PushI
	var_110_bool = var_41_bool == var_109_int; // 0x256 Eq
	if(var_110_bool == 0) goto Label_605; // 0x257 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x258 PushV
	var_111_object = var_1_object; // 0x259 MovT
	var_112_object = var_0_object; // 0x25a MovT
	func_8501(); // 0x25b Call
	
Label_605:
	var_115_int = 13683; // 0x25d PushI
	var_116_bool = var_41_bool == var_115_int; // 0x25e Eq
	if(var_116_bool == 0) goto Label_613; // 0x25f JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0x260 PushV
	var_117_object = var_1_object; // 0x261 MovT
	var_118_object = var_0_object; // 0x262 MovT
	func_8720(); // 0x263 Call
	
Label_613:
	var_127_int = 11787; // 0x265 PushI
	var_128_bool = var_40_string == var_127_int; // 0x266 Eq
	if(var_128_bool == 0) goto Label_744; // 0x267 JumpB
	var_129_bool = 0; // 0x268 PushV
	var_129_bool = 0; // 0x269 MovB
	var_130_bool = 0; var_131_object = Obj(); // 0x26a PushV
	var_131_object = var_1_object; // 0x26b MovT
	func_9290(var_131_object); // 0x26c Call
	var_138_bool = var_130_bool == 0; // 0x26e Not
	if(var_138_bool == 0) goto Label_630; // 0x26f JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x270 PushV
	var_140_object = var_1_object; // 0x271 MovT
	func_9386(var_140_object); // 0x272 Call
	if(var_139_bool == 0) goto Label_630; // 0x274 JumpB
	var_129_bool = 1; // 0x275 MovB
	
Label_630:
	if(var_129_bool == 0) goto Label_656; // 0x276 JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0x277 PushV
	var_145_object = var_1_object; // 0x278 MovT
	var_146_object = var_0_object; // 0x279 MovT
	func_8543(); // 0x27a Call
	var_149_object = Obj(); var_150_object = Obj(); // 0x27c PushV
	var_149_object = var_1_object; // 0x27d MovT
	var_150_object = var_0_object; // 0x27e MovT
	func_8736(); // 0x27f Call
	var_153_string = ""; // 0x281 PushV
	var_153_string = "Neutral"; // 0x282 MovS
	func_551(var_41_bool, var_153_string); // 0x283 Call
	var_168_int = 10676; // 0x285 PushI
	SetMessage(var_168_int); // 0x286 TObjFunc
	ClearReplies(); // 0x288 TObjFunc
	var_169_int = 10688; // 0x28a PushI
	var_170_int = 11789; // 0x28b PushI
	var_171_int = 11801; // 0x28c PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x28d TObjFunc
	return 0; // 0x28f Return
	
Label_656:
	var_172_bool = 0; var_173_object = Obj(); // 0x290 PushV
	var_173_object = var_1_object; // 0x291 MovT
	func_9434(var_173_object); // 0x292 Call
	if(var_172_bool == 0) goto Label_744; // 0x294 JumpB
	var_178_string = ""; // 0x295 PushV
	var_178_string = "Neutral"; // 0x296 MovS
	func_551(var_41_bool, var_178_string); // 0x297 Call
	var_179_int = 12502; // 0x299 PushI
	SetMessage(var_179_int); // 0x29a TObjFunc
	ClearReplies(); // 0x29c TObjFunc
	var_180_bool = 0; // 0x29e PushV
	var_180_bool = 0; // 0x29f MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x2a0 PushV
	var_182_object = var_1_object; // 0x2a1 MovT
	func_9290(var_182_object); // 0x2a2 Call
	if(var_181_bool == 0) goto Label_683; // 0x2a4 JumpB
	var_183_bool = 0; var_184_object = Obj(); // 0x2a5 PushV
	var_184_object = var_1_object; // 0x2a6 MovT
	func_9302(var_184_object); // 0x2a7 Call
	if(var_183_bool == 0) goto Label_683; // 0x2a9 JumpB
	var_180_bool = 1; // 0x2aa MovB
	
Label_683:
	if(var_180_bool == 0) goto Label_689; // 0x2ab JumpB
	var_189_int = 12027; // 0x2ac PushI
	var_190_int = 13248; // 0x2ad PushI
	var_191_int = 13245; // 0x2ae PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x2af TObjFunc
	
Label_689:
	var_192_bool = 0; // 0x2b1 PushV
	var_192_bool = 0; // 0x2b2 MovB
	var_193_bool = 0; // 0x2b3 PushV
	var_193_bool = 0; // 0x2b4 MovB
	var_194_bool = 0; // 0x2b5 PushV
	var_194_bool = 0; // 0x2b6 MovB
	var_195_bool = 0; // 0x2b7 PushV
	var_195_bool = 0; // 0x2b8 MovB
	var_196_bool = 0; var_197_object = Obj(); // 0x2b9 PushV
	var_197_object = var_1_object; // 0x2ba MovT
	func_9254(var_197_object); // 0x2bb Call
	if(var_196_bool == 0) goto Label_708; // 0x2bd JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0x2be PushV
	var_203_object = var_1_object; // 0x2bf MovT
	func_9266(var_203_object); // 0x2c0 Call
	if(var_202_bool == 0) goto Label_708; // 0x2c2 JumpB
	var_195_bool = 1; // 0x2c3 MovB
	
Label_708:
	if(var_195_bool == 0) goto Label_716; // 0x2c4 JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x2c5 PushV
	var_209_object = var_1_object; // 0x2c6 MovT
	func_9230(var_209_object); // 0x2c7 Call
	var_214_bool = var_208_bool == 0; // 0x2c9 Not
	if(var_214_bool == 0) goto Label_716; // 0x2ca JumpB
	var_194_bool = 1; // 0x2cb MovB
	
Label_716:
	if(var_194_bool == 0) goto Label_724; // 0x2cc JumpB
	var_215_bool = 0; var_216_object = Obj(); // 0x2cd PushV
	var_216_object = var_1_object; // 0x2ce MovT
	func_9242(var_216_object); // 0x2cf Call
	var_221_bool = var_215_bool == 0; // 0x2d1 Not
	if(var_221_bool == 0) goto Label_724; // 0x2d2 JumpB
	var_193_bool = 1; // 0x2d3 MovB
	
Label_724:
	if(var_193_bool == 0) goto Label_732; // 0x2d4 JumpB
	var_222_bool = 0; var_223_object = Obj(); // 0x2d5 PushV
	var_223_object = var_1_object; // 0x2d6 MovT
	func_9278(var_223_object); // 0x2d7 Call
	var_228_bool = var_222_bool == 0; // 0x2d9 Not
	if(var_228_bool == 0) goto Label_732; // 0x2da JumpB
	var_192_bool = 1; // 0x2db MovB
	
Label_732:
	if(var_192_bool == 0) goto Label_738; // 0x2dc JumpB
	var_229_int = 12503; // 0x2dd PushI
	var_230_int = 13674; // 0x2de PushI
	var_231_int = 13673; // 0x2df PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x2e0 TObjFunc
	
Label_738:
	var_232_int = 12514; // 0x2e2 PushI
	var_233_int = -1; // 0x2e3 PushI
	var_234_int = 13684; // 0x2e4 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x2e5 TObjFunc
	return 0; // 0x2e7 Return
	
Label_744:
	var_235_int = 13674; // 0x2e8 PushI
	var_236_bool = var_40_string == var_235_int; // 0x2e9 Eq
	if(var_236_bool == 0) goto Label_762; // 0x2ea JumpB
	var_237_string = ""; // 0x2eb PushV
	var_237_string = "Neutral"; // 0x2ec MovS
	func_551(var_41_bool, var_237_string); // 0x2ed Call
	var_238_int = 12504; // 0x2ef PushI
	SetMessage(var_238_int); // 0x2f0 TObjFunc
	ClearReplies(); // 0x2f2 TObjFunc
	var_239_int = 12505; // 0x2f4 PushI
	var_240_int = 13676; // 0x2f5 PushI
	var_241_int = 13675; // 0x2f6 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x2f7 TObjFunc
	return 0; // 0x2f9 Return
	
Label_762:
	var_242_int = 13676; // 0x2fa PushI
	var_243_bool = var_40_string == var_242_int; // 0x2fb Eq
	if(var_243_bool == 0) goto Label_780; // 0x2fc JumpB
	var_244_string = ""; // 0x2fd PushV
	var_244_string = "Neutral"; // 0x2fe MovS
	func_551(var_41_bool, var_244_string); // 0x2ff Call
	var_245_int = 12506; // 0x301 PushI
	SetMessage(var_245_int); // 0x302 TObjFunc
	ClearReplies(); // 0x304 TObjFunc
	var_246_int = 12507; // 0x306 PushI
	var_247_int = 13678; // 0x307 PushI
	var_248_int = 13677; // 0x308 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x309 TObjFunc
	return 0; // 0x30b Return
	
Label_780:
	var_249_int = 13678; // 0x30c PushI
	var_250_bool = var_40_string == var_249_int; // 0x30d Eq
	if(var_250_bool == 0) goto Label_798; // 0x30e JumpB
	var_251_string = ""; // 0x30f PushV
	var_251_string = "Neutral"; // 0x310 MovS
	func_551(var_41_bool, var_251_string); // 0x311 Call
	var_252_int = 12508; // 0x313 PushI
	SetMessage(var_252_int); // 0x314 TObjFunc
	ClearReplies(); // 0x316 TObjFunc
	var_253_int = 12509; // 0x318 PushI
	var_254_int = 13680; // 0x319 PushI
	var_255_int = 13679; // 0x31a PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x31b TObjFunc
	return 0; // 0x31d Return
	
Label_798:
	var_256_int = 13680; // 0x31e PushI
	var_257_bool = var_40_string == var_256_int; // 0x31f Eq
	if(var_257_bool == 0) goto Label_816; // 0x320 JumpB
	var_258_string = ""; // 0x321 PushV
	var_258_string = "Neutral"; // 0x322 MovS
	func_551(var_41_bool, var_258_string); // 0x323 Call
	var_259_int = 12510; // 0x325 PushI
	SetMessage(var_259_int); // 0x326 TObjFunc
	ClearReplies(); // 0x328 TObjFunc
	var_260_int = 12511; // 0x32a PushI
	var_261_int = 13682; // 0x32b PushI
	var_262_int = 13681; // 0x32c PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x32d TObjFunc
	return 0; // 0x32f Return
	
Label_816:
	var_263_int = 13682; // 0x330 PushI
	var_264_bool = var_40_string == var_263_int; // 0x331 Eq
	if(var_264_bool == 0) goto Label_834; // 0x332 JumpB
	var_265_string = ""; // 0x333 PushV
	var_265_string = "Neutral"; // 0x334 MovS
	func_551(var_41_bool, var_265_string); // 0x335 Call
	var_266_int = 12512; // 0x337 PushI
	SetMessage(var_266_int); // 0x338 TObjFunc
	ClearReplies(); // 0x33a TObjFunc
	var_267_int = 12513; // 0x33c PushI
	var_268_int = -1; // 0x33d PushI
	var_269_int = 13683; // 0x33e PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x33f TObjFunc
	return 0; // 0x341 Return
	
Label_834:
	var_270_int = 13248; // 0x342 PushI
	var_271_bool = var_40_string == var_270_int; // 0x343 Eq
	if(var_271_bool == 0) goto Label_857; // 0x344 JumpB
	var_272_string = ""; // 0x345 PushV
	var_272_string = "Neutral"; // 0x346 MovS
	func_551(var_41_bool, var_272_string); // 0x347 Call
	var_273_int = 12030; // 0x349 PushI
	SetMessage(var_273_int); // 0x34a TObjFunc
	ClearReplies(); // 0x34c TObjFunc
	var_274_int = 12031; // 0x34e PushI
	var_275_int = 13250; // 0x34f PushI
	var_276_int = 13249; // 0x350 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x351 TObjFunc
	var_277_int = 12692; // 0x353 PushI
	var_278_int = 3597; // 0x354 PushI
	var_279_int = 13882; // 0x355 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x356 TObjFunc
	return 0; // 0x358 Return
	
Label_857:
	var_280_int = 3597; // 0x359 PushI
	var_281_bool = var_40_string == var_280_int; // 0x35a Eq
	if(var_281_bool == 0) goto Label_880; // 0x35b JumpB
	var_282_string = ""; // 0x35c PushV
	var_282_string = "Neutral"; // 0x35d MovS
	func_551(var_41_bool, var_282_string); // 0x35e Call
	var_283_int = 3321; // 0x360 PushI
	SetMessage(var_283_int); // 0x361 TObjFunc
	ClearReplies(); // 0x363 TObjFunc
	var_284_int = 3322; // 0x365 PushI
	var_285_int = 3599; // 0x366 PushI
	var_286_int = 3598; // 0x367 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x368 TObjFunc
	var_287_int = 3535; // 0x36a PushI
	var_288_int = 3817; // 0x36b PushI
	var_289_int = 3816; // 0x36c PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x36d TObjFunc
	return 0; // 0x36f Return
	
Label_880:
	var_290_int = 3817; // 0x370 PushI
	var_291_bool = var_40_string == var_290_int; // 0x371 Eq
	if(var_291_bool == 0) goto Label_903; // 0x372 JumpB
	var_292_string = ""; // 0x373 PushV
	var_292_string = "Neutral"; // 0x374 MovS
	func_551(var_41_bool, var_292_string); // 0x375 Call
	var_293_int = 3536; // 0x377 PushI
	SetMessage(var_293_int); // 0x378 TObjFunc
	ClearReplies(); // 0x37a TObjFunc
	var_294_int = 3537; // 0x37c PushI
	var_295_int = 3604; // 0x37d PushI
	var_296_int = 3818; // 0x37e PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x37f TObjFunc
	var_297_int = 3538; // 0x381 PushI
	var_298_int = 3599; // 0x382 PushI
	var_299_int = 3819; // 0x383 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x384 TObjFunc
	return 0; // 0x386 Return
	
Label_903:
	var_300_int = 3599; // 0x387 PushI
	var_301_bool = var_40_string == var_300_int; // 0x388 Eq
	if(var_301_bool == 0) goto Label_926; // 0x389 JumpB
	var_302_string = ""; // 0x38a PushV
	var_302_string = "Neutral"; // 0x38b MovS
	func_551(var_41_bool, var_302_string); // 0x38c Call
	var_303_int = 3323; // 0x38e PushI
	SetMessage(var_303_int); // 0x38f TObjFunc
	ClearReplies(); // 0x391 TObjFunc
	var_304_int = 3324; // 0x393 PushI
	var_305_int = 3604; // 0x394 PushI
	var_306_int = 3600; // 0x395 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x396 TObjFunc
	var_307_int = 3325; // 0x398 PushI
	var_308_int = 3604; // 0x399 PushI
	var_309_int = 3601; // 0x39a PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x39b TObjFunc
	return 0; // 0x39d Return
	
Label_926:
	var_310_int = 3604; // 0x39e PushI
	var_311_bool = var_40_string == var_310_int; // 0x39f Eq
	if(var_311_bool == 0) goto Label_944; // 0x3a0 JumpB
	var_312_string = ""; // 0x3a1 PushV
	var_312_string = "Neutral"; // 0x3a2 MovS
	func_551(var_41_bool, var_312_string); // 0x3a3 Call
	var_313_int = 3327; // 0x3a5 PushI
	SetMessage(var_313_int); // 0x3a6 TObjFunc
	ClearReplies(); // 0x3a8 TObjFunc
	var_314_int = 3330; // 0x3aa PushI
	var_315_int = 3815; // 0x3ab PushI
	var_316_int = 3607; // 0x3ac PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x3ad TObjFunc
	return 0; // 0x3af Return
	
Label_944:
	var_317_int = 13250; // 0x3b0 PushI
	var_318_bool = var_40_string == var_317_int; // 0x3b1 Eq
	if(var_318_bool == 0) goto Label_967; // 0x3b2 JumpB
	var_319_string = ""; // 0x3b3 PushV
	var_319_string = "Neutral"; // 0x3b4 MovS
	func_551(var_41_bool, var_319_string); // 0x3b5 Call
	var_320_int = 12032; // 0x3b7 PushI
	SetMessage(var_320_int); // 0x3b8 TObjFunc
	ClearReplies(); // 0x3ba TObjFunc
	var_321_int = 12033; // 0x3bc PushI
	var_322_int = 13252; // 0x3bd PushI
	var_323_int = 13251; // 0x3be PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x3bf TObjFunc
	var_324_int = 3539; // 0x3c1 PushI
	var_325_int = 3823; // 0x3c2 PushI
	var_326_int = 3822; // 0x3c3 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x3c4 TObjFunc
	return 0; // 0x3c6 Return
	
Label_967:
	var_327_int = 3823; // 0x3c7 PushI
	var_328_bool = var_40_string == var_327_int; // 0x3c8 Eq
	if(var_328_bool == 0) goto Label_990; // 0x3c9 JumpB
	var_329_string = ""; // 0x3ca PushV
	var_329_string = "Neutral"; // 0x3cb MovS
	func_551(var_41_bool, var_329_string); // 0x3cc Call
	var_330_int = 3540; // 0x3ce PushI
	SetMessage(var_330_int); // 0x3cf TObjFunc
	ClearReplies(); // 0x3d1 TObjFunc
	var_331_int = 3541; // 0x3d3 PushI
	var_332_int = 13252; // 0x3d4 PushI
	var_333_int = 3824; // 0x3d5 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x3d6 TObjFunc
	var_334_int = 3533; // 0x3d8 PushI
	var_335_int = 3815; // 0x3d9 PushI
	var_336_int = 3814; // 0x3da PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x3db TObjFunc
	return 0; // 0x3dd Return
	
Label_990:
	var_337_int = 3815; // 0x3de PushI
	var_338_bool = var_40_string == var_337_int; // 0x3df Eq
	if(var_338_bool == 0) goto Label_1008; // 0x3e0 JumpB
	var_339_string = ""; // 0x3e1 PushV
	var_339_string = "Neutral"; // 0x3e2 MovS
	func_551(var_41_bool, var_339_string); // 0x3e3 Call
	var_340_int = 3534; // 0x3e5 PushI
	SetMessage(var_340_int); // 0x3e6 TObjFunc
	ClearReplies(); // 0x3e8 TObjFunc
	var_341_int = 12694; // 0x3ea PushI
	var_342_int = -1; // 0x3eb PushI
	var_343_int = 13885; // 0x3ec PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x3ed TObjFunc
	return 0; // 0x3ef Return
	
Label_1008:
	var_344_int = 13252; // 0x3f0 PushI
	var_345_bool = var_40_string == var_344_int; // 0x3f1 Eq
	if(var_345_bool == 0) goto Label_1026; // 0x3f2 JumpB
	var_346_string = ""; // 0x3f3 PushV
	var_346_string = "Neutral"; // 0x3f4 MovS
	func_551(var_41_bool, var_346_string); // 0x3f5 Call
	var_347_int = 12034; // 0x3f7 PushI
	SetMessage(var_347_int); // 0x3f8 TObjFunc
	ClearReplies(); // 0x3fa TObjFunc
	var_348_int = 12035; // 0x3fc PushI
	var_349_int = -1; // 0x3fd PushI
	var_350_int = 13253; // 0x3fe PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x3ff TObjFunc
	return 0; // 0x401 Return
	
Label_1026:
	var_351_int = 11789; // 0x402 PushI
	var_352_bool = var_40_string == var_351_int; // 0x403 Eq
	if(var_352_bool == 0) goto Label_1049; // 0x404 JumpB
	var_353_string = ""; // 0x405 PushV
	var_353_string = "Neutral"; // 0x406 MovS
	func_551(var_41_bool, var_353_string); // 0x407 Call
	var_354_int = 10678; // 0x409 PushI
	SetMessage(var_354_int); // 0x40a TObjFunc
	ClearReplies(); // 0x40c TObjFunc
	var_355_int = 10679; // 0x40e PushI
	var_356_int = 11791; // 0x40f PushI
	var_357_int = 11790; // 0x410 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x411 TObjFunc
	var_358_int = 10687; // 0x413 PushI
	var_359_int = -1; // 0x414 PushI
	var_360_int = 11800; // 0x415 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x416 TObjFunc
	return 0; // 0x418 Return
	
Label_1049:
	var_361_int = 11791; // 0x419 PushI
	var_362_bool = var_40_string == var_361_int; // 0x41a Eq
	if(var_362_bool == 0) goto Label_1077; // 0x41b JumpB
	var_363_string = ""; // 0x41c PushV
	var_363_string = "Neutral"; // 0x41d MovS
	func_551(var_41_bool, var_363_string); // 0x41e Call
	var_364_int = 10680; // 0x420 PushI
	SetMessage(var_364_int); // 0x421 TObjFunc
	ClearReplies(); // 0x423 TObjFunc
	var_365_int = 10681; // 0x425 PushI
	var_366_int = 11793; // 0x426 PushI
	var_367_int = 11792; // 0x427 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x428 TObjFunc
	var_368_int = 10685; // 0x42a PushI
	var_369_int = 11793; // 0x42b PushI
	var_370_int = 11796; // 0x42c PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x42d TObjFunc
	var_371_int = 10686; // 0x42f PushI
	var_372_int = 11793; // 0x430 PushI
	var_373_int = 11798; // 0x431 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x432 TObjFunc
	return 0; // 0x434 Return
	
Label_1077:
	var_374_int = 11793; // 0x435 PushI
	var_375_bool = var_40_string == var_374_int; // 0x436 Eq
	if(var_375_bool == 0) goto Label_1100; // 0x437 JumpB
	var_376_string = ""; // 0x438 PushV
	var_376_string = "Neutral"; // 0x439 MovS
	func_551(var_41_bool, var_376_string); // 0x43a Call
	var_377_int = 10682; // 0x43c PushI
	SetMessage(var_377_int); // 0x43d TObjFunc
	ClearReplies(); // 0x43f TObjFunc
	var_378_int = 10683; // 0x441 PushI
	var_379_int = -1; // 0x442 PushI
	var_380_int = 11794; // 0x443 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x444 TObjFunc
	var_381_int = 10684; // 0x446 PushI
	var_382_int = -1; // 0x447 PushI
	var_383_int = 11795; // 0x448 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x449 TObjFunc
	return 0; // 0x44b Return
	
Label_1100:
	var_3_string = 1; // 0x44c TMovB
	var_384_bool = 0; // 0x44d PushV
	func_7949(var_384_bool); // 0x44e Call
	if(var_384_bool == 0) goto Label_1108; // 0x450 JumpB
	lshStopAnimation(); // 0x451 Func
	goto Label_1110; // 0x453 Jump
	
Label_1110:
	return 0; // 0x456 Return
	
Label_1108:
	StopAnimation(); // 0x454 Func
	
Label_1112:
	return 0; // 0x458 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x5a9 PushI
	if(var_42_int == 0) goto Label_2718; // 0x5aa JumpB
	func_7875(); // 0x5ac Call
	var_44_int = 6488; // 0x5ae PushI
	var_45_bool = var_41_bool == var_44_int; // 0x5af Eq
	if(var_45_bool == 0) goto Label_1472; // 0x5b0 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x5b1 PushV
	var_46_object = var_1_object; // 0x5b2 MovT
	var_47_object = var_0_object; // 0x5b3 MovT
	func_8748(); // 0x5b4 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0x5b6 PushV
	var_50_object = var_1_object; // 0x5b7 MovT
	var_51_object = var_0_object; // 0x5b8 MovT
	func_8033(); // 0x5b9 Call
	var_73_object = Obj(); var_74_object = Obj(); // 0x5bb PushV
	var_73_object = var_1_object; // 0x5bc MovT
	var_74_object = var_0_object; // 0x5bd MovT
	func_8058(); // 0x5be Call
	
Label_1472:
	var_77_int = 6485; // 0x5c0 PushI
	var_78_bool = var_41_bool == var_77_int; // 0x5c1 Eq
	if(var_78_bool == 0) goto Label_1490; // 0x5c2 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x5c3 PushV
	var_79_object = var_1_object; // 0x5c4 MovT
	var_80_object = var_0_object; // 0x5c5 MovT
	func_8748(); // 0x5c6 Call
	var_81_object = Obj(); var_82_object = Obj(); // 0x5c8 PushV
	var_81_object = var_1_object; // 0x5c9 MovT
	var_82_object = var_0_object; // 0x5ca MovT
	func_8033(); // 0x5cb Call
	var_83_object = Obj(); var_84_object = Obj(); // 0x5cd PushV
	var_83_object = var_1_object; // 0x5ce MovT
	var_84_object = var_0_object; // 0x5cf MovT
	func_8058(); // 0x5d0 Call
	
Label_1490:
	var_85_int = 6484; // 0x5d2 PushI
	var_86_bool = var_41_bool == var_85_int; // 0x5d3 Eq
	if(var_86_bool == 0) goto Label_1508; // 0x5d4 JumpB
	var_87_object = Obj(); var_88_object = Obj(); // 0x5d5 PushV
	var_87_object = var_1_object; // 0x5d6 MovT
	var_88_object = var_0_object; // 0x5d7 MovT
	func_8748(); // 0x5d8 Call
	var_89_object = Obj(); var_90_object = Obj(); // 0x5da PushV
	var_89_object = var_1_object; // 0x5db MovT
	var_90_object = var_0_object; // 0x5dc MovT
	func_8033(); // 0x5dd Call
	var_91_object = Obj(); var_92_object = Obj(); // 0x5df PushV
	var_91_object = var_1_object; // 0x5e0 MovT
	var_92_object = var_0_object; // 0x5e1 MovT
	func_8058(); // 0x5e2 Call
	
Label_1508:
	var_93_int = 6474; // 0x5e4 PushI
	var_94_bool = var_41_bool == var_93_int; // 0x5e5 Eq
	if(var_94_bool == 0) goto Label_1526; // 0x5e6 JumpB
	var_95_object = Obj(); var_96_object = Obj(); // 0x5e7 PushV
	var_95_object = var_1_object; // 0x5e8 MovT
	var_96_object = var_0_object; // 0x5e9 MovT
	func_8748(); // 0x5ea Call
	var_97_object = Obj(); var_98_object = Obj(); // 0x5ec PushV
	var_97_object = var_1_object; // 0x5ed MovT
	var_98_object = var_0_object; // 0x5ee MovT
	func_8033(); // 0x5ef Call
	var_99_object = Obj(); var_100_object = Obj(); // 0x5f1 PushV
	var_99_object = var_1_object; // 0x5f2 MovT
	var_100_object = var_0_object; // 0x5f3 MovT
	func_8058(); // 0x5f4 Call
	
Label_1526:
	var_101_int = 6481; // 0x5f6 PushI
	var_102_bool = var_41_bool == var_101_int; // 0x5f7 Eq
	if(var_102_bool == 0) goto Label_1544; // 0x5f8 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x5f9 PushV
	var_103_object = var_1_object; // 0x5fa MovT
	var_104_object = var_0_object; // 0x5fb MovT
	func_8748(); // 0x5fc Call
	var_105_object = Obj(); var_106_object = Obj(); // 0x5fe PushV
	var_105_object = var_1_object; // 0x5ff MovT
	var_106_object = var_0_object; // 0x600 MovT
	func_8033(); // 0x601 Call
	var_107_object = Obj(); var_108_object = Obj(); // 0x603 PushV
	var_107_object = var_1_object; // 0x604 MovT
	var_108_object = var_0_object; // 0x605 MovT
	func_8058(); // 0x606 Call
	
Label_1544:
	var_109_int = 6471; // 0x608 PushI
	var_110_bool = var_41_bool == var_109_int; // 0x609 Eq
	if(var_110_bool == 0) goto Label_1562; // 0x60a JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x60b PushV
	var_111_object = var_1_object; // 0x60c MovT
	var_112_object = var_0_object; // 0x60d MovT
	func_8748(); // 0x60e Call
	var_113_object = Obj(); var_114_object = Obj(); // 0x610 PushV
	var_113_object = var_1_object; // 0x611 MovT
	var_114_object = var_0_object; // 0x612 MovT
	func_8033(); // 0x613 Call
	var_115_object = Obj(); var_116_object = Obj(); // 0x615 PushV
	var_115_object = var_1_object; // 0x616 MovT
	var_116_object = var_0_object; // 0x617 MovT
	func_8058(); // 0x618 Call
	
Label_1562:
	var_117_int = 5793; // 0x61a PushI
	var_118_bool = var_41_bool == var_117_int; // 0x61b Eq
	if(var_118_bool == 0) goto Label_1570; // 0x61c JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x61d PushV
	var_119_object = var_1_object; // 0x61e MovT
	var_120_object = var_0_object; // 0x61f MovT
	func_8754(); // 0x620 Call
	
Label_1570:
	var_123_int = 5794; // 0x622 PushI
	var_124_bool = var_41_bool == var_123_int; // 0x623 Eq
	if(var_124_bool == 0) goto Label_1578; // 0x624 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x625 PushV
	var_125_object = var_1_object; // 0x626 MovT
	var_126_object = var_0_object; // 0x627 MovT
	func_8754(); // 0x628 Call
	
Label_1578:
	var_127_int = 5799; // 0x62a PushI
	var_128_bool = var_41_bool == var_127_int; // 0x62b Eq
	if(var_128_bool == 0) goto Label_1586; // 0x62c JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x62d PushV
	var_129_object = var_1_object; // 0x62e MovT
	var_130_object = var_0_object; // 0x62f MovT
	func_8754(); // 0x630 Call
	
Label_1586:
	var_131_int = 5796; // 0x632 PushI
	var_132_bool = var_41_bool == var_131_int; // 0x633 Eq
	if(var_132_bool == 0) goto Label_1594; // 0x634 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x635 PushV
	var_133_object = var_1_object; // 0x636 MovT
	var_134_object = var_0_object; // 0x637 MovT
	func_8754(); // 0x638 Call
	
Label_1594:
	var_135_int = 5785; // 0x63a PushI
	var_136_bool = var_41_bool == var_135_int; // 0x63b Eq
	if(var_136_bool == 0) goto Label_1602; // 0x63c JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x63d PushV
	var_137_object = var_1_object; // 0x63e MovT
	var_138_object = var_0_object; // 0x63f MovT
	func_8760(); // 0x640 Call
	
Label_1602:
	var_141_int = 5782; // 0x642 PushI
	var_142_bool = var_41_bool == var_141_int; // 0x643 Eq
	if(var_142_bool == 0) goto Label_1610; // 0x644 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x645 PushV
	var_143_object = var_1_object; // 0x646 MovT
	var_144_object = var_0_object; // 0x647 MovT
	func_8760(); // 0x648 Call
	
Label_1610:
	var_145_int = 8364; // 0x64a PushI
	var_146_bool = var_41_bool == var_145_int; // 0x64b Eq
	if(var_146_bool == 0) goto Label_1618; // 0x64c JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x64d PushV
	var_147_object = var_1_object; // 0x64e MovT
	var_148_object = var_0_object; // 0x64f MovT
	func_7997(); // 0x650 Call
	
Label_1618:
	var_151_int = 8365; // 0x652 PushI
	var_152_bool = var_41_bool == var_151_int; // 0x653 Eq
	if(var_152_bool == 0) goto Label_1626; // 0x654 JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0x655 PushV
	var_153_object = var_1_object; // 0x656 MovT
	var_154_object = var_0_object; // 0x657 MovT
	func_7997(); // 0x658 Call
	
Label_1626:
	var_155_int = 8375; // 0x65a PushI
	var_156_bool = var_41_bool == var_155_int; // 0x65b Eq
	if(var_156_bool == 0) goto Label_1634; // 0x65c JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x65d PushV
	var_157_object = var_1_object; // 0x65e MovT
	var_158_object = var_0_object; // 0x65f MovT
	func_8003(); // 0x660 Call
	
Label_1634:
	var_161_int = 8390; // 0x662 PushI
	var_162_bool = var_41_bool == var_161_int; // 0x663 Eq
	if(var_162_bool == 0) goto Label_1642; // 0x664 JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0x665 PushV
	var_163_object = var_1_object; // 0x666 MovT
	var_164_object = var_0_object; // 0x667 MovT
	func_8009(); // 0x668 Call
	
Label_1642:
	var_167_int = 8391; // 0x66a PushI
	var_168_bool = var_41_bool == var_167_int; // 0x66b Eq
	if(var_168_bool == 0) goto Label_1650; // 0x66c JumpB
	var_169_object = Obj(); var_170_object = Obj(); // 0x66d PushV
	var_169_object = var_1_object; // 0x66e MovT
	var_170_object = var_0_object; // 0x66f MovT
	func_8009(); // 0x670 Call
	
Label_1650:
	var_171_int = 8400; // 0x672 PushI
	var_172_bool = var_41_bool == var_171_int; // 0x673 Eq
	if(var_172_bool == 0) goto Label_1658; // 0x674 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0x675 PushV
	var_173_object = var_1_object; // 0x676 MovT
	var_174_object = var_0_object; // 0x677 MovT
	func_8015(); // 0x678 Call
	
Label_1658:
	var_177_int = 8411; // 0x67a PushI
	var_178_bool = var_41_bool == var_177_int; // 0x67b Eq
	if(var_178_bool == 0) goto Label_1666; // 0x67c JumpB
	var_179_object = Obj(); var_180_object = Obj(); // 0x67d PushV
	var_179_object = var_1_object; // 0x67e MovT
	var_180_object = var_0_object; // 0x67f MovT
	func_8015(); // 0x680 Call
	
Label_1666:
	var_181_int = 8415; // 0x682 PushI
	var_182_bool = var_41_bool == var_181_int; // 0x683 Eq
	if(var_182_bool == 0) goto Label_1674; // 0x684 JumpB
	var_183_object = Obj(); var_184_object = Obj(); // 0x685 PushV
	var_183_object = var_1_object; // 0x686 MovT
	var_184_object = var_0_object; // 0x687 MovT
	func_8021(); // 0x688 Call
	
Label_1674:
	var_187_int = 8406; // 0x68a PushI
	var_188_bool = var_41_bool == var_187_int; // 0x68b Eq
	if(var_188_bool == 0) goto Label_1682; // 0x68c JumpB
	var_189_object = Obj(); var_190_object = Obj(); // 0x68d PushV
	var_189_object = var_1_object; // 0x68e MovT
	var_190_object = var_0_object; // 0x68f MovT
	func_8021(); // 0x690 Call
	
Label_1682:
	var_191_int = 8409; // 0x692 PushI
	var_192_bool = var_41_bool == var_191_int; // 0x693 Eq
	if(var_192_bool == 0) goto Label_1690; // 0x694 JumpB
	var_193_object = Obj(); var_194_object = Obj(); // 0x695 PushV
	var_193_object = var_1_object; // 0x696 MovT
	var_194_object = var_0_object; // 0x697 MovT
	func_8027(); // 0x698 Call
	
Label_1690:
	var_197_int = 5773; // 0x69a PushI
	var_198_bool = var_40_string == var_197_int; // 0x69b Eq
	if(var_198_bool == 0) goto Label_1911; // 0x69c JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x69d PushV
	var_200_object = var_1_object; // 0x69e MovT
	func_9458(var_200_object); // 0x69f Call
	if(var_199_bool == 0) goto Label_1723; // 0x6a1 JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x6a2 PushV
	var_207_object = var_1_object; // 0x6a3 MovT
	var_208_object = var_0_object; // 0x6a4 MovT
	func_8742(); // 0x6a5 Call
	var_211_string = ""; // 0x6a7 PushV
	var_211_string = "Neutral"; // 0x6a8 MovS
	func_1432(var_41_bool, var_211_string); // 0x6a9 Call
	var_226_int = 5238; // 0x6ab PushI
	SetMessage(var_226_int); // 0x6ac TObjFunc
	ClearReplies(); // 0x6ae TObjFunc
	var_227_int = 5240; // 0x6b0 PushI
	var_228_int = 6468; // 0x6b1 PushI
	var_229_int = 5775; // 0x6b2 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x6b3 TObjFunc
	var_230_int = 5239; // 0x6b5 PushI
	var_231_int = 6465; // 0x6b6 PushI
	var_232_int = 5774; // 0x6b7 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x6b8 TObjFunc
	return 0; // 0x6ba Return
	
Label_1723:
	var_233_bool = 0; // 0x6bb PushV
	var_233_bool = 0; // 0x6bc MovB
	var_234_bool = 0; var_235_object = Obj(); // 0x6bd PushV
	var_235_object = var_1_object; // 0x6be MovT
	func_9470(var_235_object); // 0x6bf Call
	if(var_234_bool == 0) goto Label_1737; // 0x6c1 JumpB
	var_240_bool = 0; var_241_object = Obj(); // 0x6c2 PushV
	var_241_object = var_1_object; // 0x6c3 MovT
	func_8766(var_241_object); // 0x6c4 Call
	var_246_bool = var_240_bool == 0; // 0x6c6 Not
	if(var_246_bool == 0) goto Label_1737; // 0x6c7 JumpB
	var_233_bool = 1; // 0x6c8 MovB
	
Label_1737:
	if(var_233_bool == 0) goto Label_1763; // 0x6c9 JumpB
	var_247_string = ""; // 0x6ca PushV
	var_247_string = "Neutral"; // 0x6cb MovS
	func_1432(var_41_bool, var_247_string); // 0x6cc Call
	var_248_int = 5253; // 0x6ce PushI
	SetMessage(var_248_int); // 0x6cf TObjFunc
	ClearReplies(); // 0x6d1 TObjFunc
	var_249_int = 5254; // 0x6d3 PushI
	var_250_int = 5792; // 0x6d4 PushI
	var_251_int = 5791; // 0x6d5 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x6d6 TObjFunc
	var_252_int = 5260; // 0x6d8 PushI
	var_253_int = 5798; // 0x6d9 PushI
	var_254_int = 5797; // 0x6da PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x6db TObjFunc
	var_255_int = 5259; // 0x6dd PushI
	var_256_int = -1; // 0x6de PushI
	var_257_int = 5796; // 0x6df PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x6e0 TObjFunc
	return 0; // 0x6e2 Return
	
Label_1763:
	var_258_string = ""; // 0x6e3 PushV
	var_258_string = "Neutral"; // 0x6e4 MovS
	func_1432(var_41_bool, var_258_string); // 0x6e5 Call
	var_259_int = 7539; // 0x6e7 PushI
	SetMessage(var_259_int); // 0x6e8 TObjFunc
	ClearReplies(); // 0x6ea TObjFunc
	var_260_bool = 0; // 0x6ec PushV
	var_260_bool = 0; // 0x6ed MovB
	var_261_bool = 0; var_262_object = Obj(); // 0x6ee PushV
	var_262_object = var_1_object; // 0x6ef MovT
	func_9482(var_262_object); // 0x6f0 Call
	if(var_261_bool == 0) goto Label_1785; // 0x6f2 JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x6f3 PushV
	var_268_object = var_1_object; // 0x6f4 MovT
	func_8766(var_268_object); // 0x6f5 Call
	if(var_267_bool == 0) goto Label_1785; // 0x6f7 JumpB
	var_260_bool = 1; // 0x6f8 MovB
	
Label_1785:
	if(var_260_bool == 0) goto Label_1791; // 0x6f9 JumpB
	var_269_int = 7540; // 0x6fa PushI
	var_270_int = 5777; // 0x6fb PushI
	var_271_int = 8322; // 0x6fc PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x6fd TObjFunc
	
Label_1791:
	var_272_bool = 0; // 0x6ff PushV
	var_272_bool = 0; // 0x700 MovB
	var_273_bool = 0; var_274_object = Obj(); // 0x701 PushV
	var_274_object = var_1_object; // 0x702 MovT
	func_9398(var_274_object); // 0x703 Call
	if(var_273_bool == 0) goto Label_1804; // 0x705 JumpB
	var_279_bool = 0; var_280_object = Obj(); // 0x706 PushV
	var_280_object = var_1_object; // 0x707 MovT
	func_8872(var_280_object); // 0x708 Call
	if(var_279_bool == 0) goto Label_1804; // 0x70a JumpB
	var_272_bool = 1; // 0x70b MovB
	
Label_1804:
	if(var_272_bool == 0) goto Label_1810; // 0x70c JumpB
	var_285_int = 7548; // 0x70d PushI
	var_286_int = 8354; // 0x70e PushI
	var_287_int = 8330; // 0x70f PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x710 TObjFunc
	
Label_1810:
	var_288_bool = 0; // 0x712 PushV
	var_288_bool = 0; // 0x713 MovB
	var_289_bool = 0; var_290_object = Obj(); // 0x714 PushV
	var_290_object = var_1_object; // 0x715 MovT
	func_9374(var_290_object); // 0x716 Call
	if(var_289_bool == 0) goto Label_1823; // 0x718 JumpB
	var_295_bool = 0; var_296_object = Obj(); // 0x719 PushV
	var_296_object = var_1_object; // 0x71a MovT
	func_8884(var_296_object); // 0x71b Call
	if(var_295_bool == 0) goto Label_1823; // 0x71d JumpB
	var_288_bool = 1; // 0x71e MovB
	
Label_1823:
	if(var_288_bool == 0) goto Label_1829; // 0x71f JumpB
	var_301_int = 7552; // 0x720 PushI
	var_302_int = 8349; // 0x721 PushI
	var_303_int = 8334; // 0x722 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x723 TObjFunc
	
Label_1829:
	var_304_bool = 0; // 0x725 PushV
	var_304_bool = 0; // 0x726 MovB
	var_305_bool = 0; var_306_object = Obj(); // 0x727 PushV
	var_306_object = var_1_object; // 0x728 MovT
	func_9410(var_306_object); // 0x729 Call
	if(var_305_bool == 0) goto Label_1842; // 0x72b JumpB
	var_311_bool = 0; var_312_object = Obj(); // 0x72c PushV
	var_312_object = var_1_object; // 0x72d MovT
	func_8896(var_312_object); // 0x72e Call
	if(var_311_bool == 0) goto Label_1842; // 0x730 JumpB
	var_304_bool = 1; // 0x731 MovB
	
Label_1842:
	if(var_304_bool == 0) goto Label_1848; // 0x732 JumpB
	var_317_int = 7553; // 0x733 PushI
	var_318_int = 8350; // 0x734 PushI
	var_319_int = 8335; // 0x735 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x736 TObjFunc
	
Label_1848:
	var_320_bool = 0; // 0x738 PushV
	var_320_bool = 0; // 0x739 MovB
	var_321_bool = 0; var_322_object = Obj(); // 0x73a PushV
	var_322_object = var_1_object; // 0x73b MovT
	func_9422(var_322_object); // 0x73c Call
	if(var_321_bool == 0) goto Label_1861; // 0x73e JumpB
	var_327_bool = 0; var_328_object = Obj(); // 0x73f PushV
	var_328_object = var_1_object; // 0x740 MovT
	func_8908(var_328_object); // 0x741 Call
	if(var_327_bool == 0) goto Label_1861; // 0x743 JumpB
	var_320_bool = 1; // 0x744 MovB
	
Label_1861:
	if(var_320_bool == 0) goto Label_1867; // 0x745 JumpB
	var_333_int = 7556; // 0x746 PushI
	var_334_int = 8351; // 0x747 PushI
	var_335_int = 8338; // 0x748 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x749 TObjFunc
	
Label_1867:
	var_336_bool = 0; // 0x74b PushV
	var_336_bool = 0; // 0x74c MovB
	var_337_bool = 0; var_338_object = Obj(); // 0x74d PushV
	var_338_object = var_1_object; // 0x74e MovT
	func_9004(var_338_object); // 0x74f Call
	if(var_337_bool == 0) goto Label_1880; // 0x751 JumpB
	var_343_bool = 0; var_344_object = Obj(); // 0x752 PushV
	var_344_object = var_1_object; // 0x753 MovT
	func_8920(var_344_object); // 0x754 Call
	if(var_343_bool == 0) goto Label_1880; // 0x756 JumpB
	var_336_bool = 1; // 0x757 MovB
	
Label_1880:
	if(var_336_bool == 0) goto Label_1886; // 0x758 JumpB
	var_349_int = 7560; // 0x759 PushI
	var_350_int = 8352; // 0x75a PushI
	var_351_int = 8342; // 0x75b PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x75c TObjFunc
	
Label_1886:
	var_352_bool = 0; // 0x75e PushV
	var_352_bool = 0; // 0x75f MovB
	var_353_bool = 0; var_354_object = Obj(); // 0x760 PushV
	var_354_object = var_1_object; // 0x761 MovT
	func_9446(var_354_object); // 0x762 Call
	if(var_353_bool == 0) goto Label_1899; // 0x764 JumpB
	var_359_bool = 0; var_360_object = Obj(); // 0x765 PushV
	var_360_object = var_1_object; // 0x766 MovT
	func_8932(var_360_object); // 0x767 Call
	if(var_359_bool == 0) goto Label_1899; // 0x769 JumpB
	var_352_bool = 1; // 0x76a MovB
	
Label_1899:
	if(var_352_bool == 0) goto Label_1905; // 0x76b JumpB
	var_365_int = 7561; // 0x76c PushI
	var_366_int = 8353; // 0x76d PushI
	var_367_int = 8343; // 0x76e PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x76f TObjFunc
	
Label_1905:
	var_368_int = 7590; // 0x771 PushI
	var_369_int = -1; // 0x772 PushI
	var_370_int = 8376; // 0x773 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x774 TObjFunc
	return 0; // 0x776 Return
	
Label_1911:
	var_371_int = 8353; // 0x777 PushI
	var_372_bool = var_40_string == var_371_int; // 0x778 Eq
	if(var_372_bool == 0) goto Label_1929; // 0x779 JumpB
	var_373_string = ""; // 0x77a PushV
	var_373_string = "Neutral"; // 0x77b MovS
	func_1432(var_41_bool, var_373_string); // 0x77c Call
	var_374_int = 7571; // 0x77e PushI
	SetMessage(var_374_int); // 0x77f TObjFunc
	ClearReplies(); // 0x781 TObjFunc
	var_375_int = 7618; // 0x783 PushI
	var_376_int = 8408; // 0x784 PushI
	var_377_int = 8407; // 0x785 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x786 TObjFunc
	return 0; // 0x788 Return
	
Label_1929:
	var_378_int = 8408; // 0x789 PushI
	var_379_bool = var_40_string == var_378_int; // 0x78a Eq
	if(var_379_bool == 0) goto Label_1947; // 0x78b JumpB
	var_380_string = ""; // 0x78c PushV
	var_380_string = "Neutral"; // 0x78d MovS
	func_1432(var_41_bool, var_380_string); // 0x78e Call
	var_381_int = 7619; // 0x790 PushI
	SetMessage(var_381_int); // 0x791 TObjFunc
	ClearReplies(); // 0x793 TObjFunc
	var_382_int = 7620; // 0x795 PushI
	var_383_int = -1; // 0x796 PushI
	var_384_int = 8409; // 0x797 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x798 TObjFunc
	return 0; // 0x79a Return
	
Label_1947:
	var_385_int = 8352; // 0x79b PushI
	var_386_bool = var_40_string == var_385_int; // 0x79c Eq
	if(var_386_bool == 0) goto Label_1965; // 0x79d JumpB
	var_387_string = ""; // 0x79e PushV
	var_387_string = "Neutral"; // 0x79f MovS
	func_1432(var_41_bool, var_387_string); // 0x7a0 Call
	var_388_int = 7570; // 0x7a2 PushI
	SetMessage(var_388_int); // 0x7a3 TObjFunc
	ClearReplies(); // 0x7a5 TObjFunc
	var_389_int = 7612; // 0x7a7 PushI
	var_390_int = 8402; // 0x7a8 PushI
	var_391_int = 8401; // 0x7a9 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x7aa TObjFunc
	return 0; // 0x7ac Return
	
Label_1965:
	var_392_int = 8402; // 0x7ad PushI
	var_393_bool = var_40_string == var_392_int; // 0x7ae Eq
	if(var_393_bool == 0) goto Label_1983; // 0x7af JumpB
	var_394_string = ""; // 0x7b0 PushV
	var_394_string = "Neutral"; // 0x7b1 MovS
	func_1432(var_41_bool, var_394_string); // 0x7b2 Call
	var_395_int = 7613; // 0x7b4 PushI
	SetMessage(var_395_int); // 0x7b5 TObjFunc
	ClearReplies(); // 0x7b7 TObjFunc
	var_396_int = 7614; // 0x7b9 PushI
	var_397_int = 8404; // 0x7ba PushI
	var_398_int = 8403; // 0x7bb PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x7bc TObjFunc
	return 0; // 0x7be Return
	
Label_1983:
	var_399_int = 8404; // 0x7bf PushI
	var_400_bool = var_40_string == var_399_int; // 0x7c0 Eq
	if(var_400_bool == 0) goto Label_2017; // 0x7c1 JumpB
	var_401_string = ""; // 0x7c2 PushV
	var_401_string = "Neutral"; // 0x7c3 MovS
	func_1432(var_41_bool, var_401_string); // 0x7c4 Call
	var_402_int = 7615; // 0x7c6 PushI
	SetMessage(var_402_int); // 0x7c7 TObjFunc
	ClearReplies(); // 0x7c9 TObjFunc
	var_403_bool = 0; var_404_object = Obj(); // 0x7cb PushV
	var_404_object = var_1_object; // 0x7cc MovT
	func_8944(var_404_object); // 0x7cd Call
	var_409_bool = var_403_bool == 0; // 0x7cf Not
	if(var_409_bool == 0) goto Label_2006; // 0x7d0 JumpB
	var_410_int = 7616; // 0x7d1 PushI
	var_411_int = 8412; // 0x7d2 PushI
	var_412_int = 8405; // 0x7d3 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x7d4 TObjFunc
	
Label_2006:
	var_413_bool = 0; var_414_object = Obj(); // 0x7d6 PushV
	var_414_object = var_1_object; // 0x7d7 MovT
	func_8944(var_414_object); // 0x7d8 Call
	if(var_413_bool == 0) goto Label_2016; // 0x7da JumpB
	var_415_int = 7617; // 0x7db PushI
	var_416_int = -1; // 0x7dc PushI
	var_417_int = 8406; // 0x7dd PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x7de TObjFunc
	
Label_2016:
	return 0; // 0x7e0 Return
	
Label_2017:
	var_418_int = 8412; // 0x7e1 PushI
	var_419_bool = var_40_string == var_418_int; // 0x7e2 Eq
	if(var_419_bool == 0) goto Label_2035; // 0x7e3 JumpB
	var_420_string = ""; // 0x7e4 PushV
	var_420_string = "Neutral"; // 0x7e5 MovS
	func_1432(var_41_bool, var_420_string); // 0x7e6 Call
	var_421_int = 7623; // 0x7e8 PushI
	SetMessage(var_421_int); // 0x7e9 TObjFunc
	ClearReplies(); // 0x7eb TObjFunc
	var_422_int = 7624; // 0x7ed PushI
	var_423_int = 8414; // 0x7ee PushI
	var_424_int = 8413; // 0x7ef PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x7f0 TObjFunc
	return 0; // 0x7f2 Return
	
Label_2035:
	var_425_int = 8414; // 0x7f3 PushI
	var_426_bool = var_40_string == var_425_int; // 0x7f4 Eq
	if(var_426_bool == 0) goto Label_2053; // 0x7f5 JumpB
	var_427_string = ""; // 0x7f6 PushV
	var_427_string = "Neutral"; // 0x7f7 MovS
	func_1432(var_41_bool, var_427_string); // 0x7f8 Call
	var_428_int = 7625; // 0x7fa PushI
	SetMessage(var_428_int); // 0x7fb TObjFunc
	ClearReplies(); // 0x7fd TObjFunc
	var_429_int = 7626; // 0x7ff PushI
	var_430_int = -1; // 0x800 PushI
	var_431_int = 8415; // 0x801 PushI
	AddReply(var_429_int, var_430_int, var_431_int); // 0x802 TObjFunc
	return 0; // 0x804 Return
	
Label_2053:
	var_432_int = 8351; // 0x805 PushI
	var_433_bool = var_40_string == var_432_int; // 0x806 Eq
	if(var_433_bool == 0) goto Label_2076; // 0x807 JumpB
	var_434_string = ""; // 0x808 PushV
	var_434_string = "Neutral"; // 0x809 MovS
	func_1432(var_41_bool, var_434_string); // 0x80a Call
	var_435_int = 7569; // 0x80c PushI
	SetMessage(var_435_int); // 0x80d TObjFunc
	ClearReplies(); // 0x80f TObjFunc
	var_436_int = 7604; // 0x811 PushI
	var_437_int = 8396; // 0x812 PushI
	var_438_int = 8392; // 0x813 PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x814 TObjFunc
	var_439_int = 7605; // 0x816 PushI
	var_440_int = 8394; // 0x817 PushI
	var_441_int = 8393; // 0x818 PushI
	AddReply(var_439_int, var_440_int, var_441_int); // 0x819 TObjFunc
	return 0; // 0x81b Return
	
Label_2076:
	var_442_int = 8394; // 0x81c PushI
	var_443_bool = var_40_string == var_442_int; // 0x81d Eq
	if(var_443_bool == 0) goto Label_2094; // 0x81e JumpB
	var_444_string = ""; // 0x81f PushV
	var_444_string = "Neutral"; // 0x820 MovS
	func_1432(var_41_bool, var_444_string); // 0x821 Call
	var_445_int = 7606; // 0x823 PushI
	SetMessage(var_445_int); // 0x824 TObjFunc
	ClearReplies(); // 0x826 TObjFunc
	var_446_int = 7607; // 0x828 PushI
	var_447_int = 8396; // 0x829 PushI
	var_448_int = 8395; // 0x82a PushI
	AddReply(var_446_int, var_447_int, var_448_int); // 0x82b TObjFunc
	return 0; // 0x82d Return
	
Label_2094:
	var_449_int = 8396; // 0x82e PushI
	var_450_bool = var_40_string == var_449_int; // 0x82f Eq
	if(var_450_bool == 0) goto Label_2112; // 0x830 JumpB
	var_451_string = ""; // 0x831 PushV
	var_451_string = "Neutral"; // 0x832 MovS
	func_1432(var_41_bool, var_451_string); // 0x833 Call
	var_452_int = 7608; // 0x835 PushI
	SetMessage(var_452_int); // 0x836 TObjFunc
	ClearReplies(); // 0x838 TObjFunc
	var_453_int = 7609; // 0x83a PushI
	var_454_int = 8398; // 0x83b PushI
	var_455_int = 8397; // 0x83c PushI
	AddReply(var_453_int, var_454_int, var_455_int); // 0x83d TObjFunc
	return 0; // 0x83f Return
	
Label_2112:
	var_456_int = 8398; // 0x840 PushI
	var_457_bool = var_40_string == var_456_int; // 0x841 Eq
	if(var_457_bool == 0) goto Label_2135; // 0x842 JumpB
	var_458_string = ""; // 0x843 PushV
	var_458_string = "Neutral"; // 0x844 MovS
	func_1432(var_41_bool, var_458_string); // 0x845 Call
	var_459_int = 7610; // 0x847 PushI
	SetMessage(var_459_int); // 0x848 TObjFunc
	ClearReplies(); // 0x84a TObjFunc
	var_460_int = 7611; // 0x84c PushI
	var_461_int = -1; // 0x84d PushI
	var_462_int = 8400; // 0x84e PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x84f TObjFunc
	var_463_int = 7622; // 0x851 PushI
	var_464_int = -1; // 0x852 PushI
	var_465_int = 8411; // 0x853 PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x854 TObjFunc
	return 0; // 0x856 Return
	
Label_2135:
	var_466_int = 8350; // 0x857 PushI
	var_467_bool = var_40_string == var_466_int; // 0x858 Eq
	if(var_467_bool == 0) goto Label_2158; // 0x859 JumpB
	var_468_string = ""; // 0x85a PushV
	var_468_string = "Neutral"; // 0x85b MovS
	func_1432(var_41_bool, var_468_string); // 0x85c Call
	var_469_int = 7568; // 0x85e PushI
	SetMessage(var_469_int); // 0x85f TObjFunc
	ClearReplies(); // 0x861 TObjFunc
	var_470_int = 7591; // 0x863 PushI
	var_471_int = 8378; // 0x864 PushI
	var_472_int = 8377; // 0x865 PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x866 TObjFunc
	var_473_int = 7598; // 0x868 PushI
	var_474_int = 8386; // 0x869 PushI
	var_475_int = 8385; // 0x86a PushI
	AddReply(var_473_int, var_474_int, var_475_int); // 0x86b TObjFunc
	return 0; // 0x86d Return
	
Label_2158:
	var_476_int = 8386; // 0x86e PushI
	var_477_bool = var_40_string == var_476_int; // 0x86f Eq
	if(var_477_bool == 0) goto Label_2176; // 0x870 JumpB
	var_478_string = ""; // 0x871 PushV
	var_478_string = "Neutral"; // 0x872 MovS
	func_1432(var_41_bool, var_478_string); // 0x873 Call
	var_479_int = 7599; // 0x875 PushI
	SetMessage(var_479_int); // 0x876 TObjFunc
	ClearReplies(); // 0x878 TObjFunc
	var_480_int = 7600; // 0x87a PushI
	var_481_int = 8388; // 0x87b PushI
	var_482_int = 8387; // 0x87c PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x87d TObjFunc
	return 0; // 0x87f Return
	
Label_2176:
	var_483_int = 8388; // 0x880 PushI
	var_484_bool = var_40_string == var_483_int; // 0x881 Eq
	if(var_484_bool == 0) goto Label_2194; // 0x882 JumpB
	var_485_string = ""; // 0x883 PushV
	var_485_string = "Neutral"; // 0x884 MovS
	func_1432(var_41_bool, var_485_string); // 0x885 Call
	var_486_int = 7601; // 0x887 PushI
	SetMessage(var_486_int); // 0x888 TObjFunc
	ClearReplies(); // 0x88a TObjFunc
	var_487_int = 7603; // 0x88c PushI
	var_488_int = -1; // 0x88d PushI
	var_489_int = 8391; // 0x88e PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x88f TObjFunc
	return 0; // 0x891 Return
	
Label_2194:
	var_490_int = 8378; // 0x892 PushI
	var_491_bool = var_40_string == var_490_int; // 0x893 Eq
	if(var_491_bool == 0) goto Label_2217; // 0x894 JumpB
	var_492_string = ""; // 0x895 PushV
	var_492_string = "Neutral"; // 0x896 MovS
	func_1432(var_41_bool, var_492_string); // 0x897 Call
	var_493_int = 7592; // 0x899 PushI
	SetMessage(var_493_int); // 0x89a TObjFunc
	ClearReplies(); // 0x89c TObjFunc
	var_494_int = 7593; // 0x89e PushI
	var_495_int = 8381; // 0x89f PushI
	var_496_int = 8379; // 0x8a0 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0x8a1 TObjFunc
	var_497_int = 7594; // 0x8a3 PushI
	var_498_int = 8381; // 0x8a4 PushI
	var_499_int = 8380; // 0x8a5 PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0x8a6 TObjFunc
	return 0; // 0x8a8 Return
	
Label_2217:
	var_500_int = 8381; // 0x8a9 PushI
	var_501_bool = var_40_string == var_500_int; // 0x8aa Eq
	if(var_501_bool == 0) goto Label_2235; // 0x8ab JumpB
	var_502_string = ""; // 0x8ac PushV
	var_502_string = "Neutral"; // 0x8ad MovS
	func_1432(var_41_bool, var_502_string); // 0x8ae Call
	var_503_int = 7595; // 0x8b0 PushI
	SetMessage(var_503_int); // 0x8b1 TObjFunc
	ClearReplies(); // 0x8b3 TObjFunc
	var_504_int = 7596; // 0x8b5 PushI
	var_505_int = 8383; // 0x8b6 PushI
	var_506_int = 8382; // 0x8b7 PushI
	AddReply(var_504_int, var_505_int, var_506_int); // 0x8b8 TObjFunc
	return 0; // 0x8ba Return
	
Label_2235:
	var_507_int = 8383; // 0x8bb PushI
	var_508_bool = var_40_string == var_507_int; // 0x8bc Eq
	if(var_508_bool == 0) goto Label_2253; // 0x8bd JumpB
	var_509_string = ""; // 0x8be PushV
	var_509_string = "Neutral"; // 0x8bf MovS
	func_1432(var_41_bool, var_509_string); // 0x8c0 Call
	var_510_int = 7597; // 0x8c2 PushI
	SetMessage(var_510_int); // 0x8c3 TObjFunc
	ClearReplies(); // 0x8c5 TObjFunc
	var_511_int = 7602; // 0x8c7 PushI
	var_512_int = -1; // 0x8c8 PushI
	var_513_int = 8390; // 0x8c9 PushI
	AddReply(var_511_int, var_512_int, var_513_int); // 0x8ca TObjFunc
	return 0; // 0x8cc Return
	
Label_2253:
	var_514_int = 8349; // 0x8cd PushI
	var_515_bool = var_40_string == var_514_int; // 0x8ce Eq
	if(var_515_bool == 0) goto Label_2271; // 0x8cf JumpB
	var_516_string = ""; // 0x8d0 PushV
	var_516_string = "Neutral"; // 0x8d1 MovS
	func_1432(var_41_bool, var_516_string); // 0x8d2 Call
	var_517_int = 7567; // 0x8d4 PushI
	SetMessage(var_517_int); // 0x8d5 TObjFunc
	ClearReplies(); // 0x8d7 TObjFunc
	var_518_int = 7582; // 0x8d9 PushI
	var_519_int = 8367; // 0x8da PushI
	var_520_int = 8366; // 0x8db PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0x8dc TObjFunc
	return 0; // 0x8de Return
	
Label_2271:
	var_521_int = 8367; // 0x8df PushI
	var_522_bool = var_40_string == var_521_int; // 0x8e0 Eq
	if(var_522_bool == 0) goto Label_2294; // 0x8e1 JumpB
	var_523_string = ""; // 0x8e2 PushV
	var_523_string = "Neutral"; // 0x8e3 MovS
	func_1432(var_41_bool, var_523_string); // 0x8e4 Call
	var_524_int = 7583; // 0x8e6 PushI
	SetMessage(var_524_int); // 0x8e7 TObjFunc
	ClearReplies(); // 0x8e9 TObjFunc
	var_525_int = 7584; // 0x8eb PushI
	var_526_int = 8370; // 0x8ec PushI
	var_527_int = 8368; // 0x8ed PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x8ee TObjFunc
	var_528_int = 7585; // 0x8f0 PushI
	var_529_int = 8370; // 0x8f1 PushI
	var_530_int = 8369; // 0x8f2 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x8f3 TObjFunc
	return 0; // 0x8f5 Return
	
Label_2294:
	var_531_int = 8370; // 0x8f6 PushI
	var_532_bool = var_40_string == var_531_int; // 0x8f7 Eq
	if(var_532_bool == 0) goto Label_2312; // 0x8f8 JumpB
	var_533_string = ""; // 0x8f9 PushV
	var_533_string = "Neutral"; // 0x8fa MovS
	func_1432(var_41_bool, var_533_string); // 0x8fb Call
	var_534_int = 7586; // 0x8fd PushI
	SetMessage(var_534_int); // 0x8fe TObjFunc
	ClearReplies(); // 0x900 TObjFunc
	var_535_int = 7587; // 0x902 PushI
	var_536_int = 8374; // 0x903 PushI
	var_537_int = 8373; // 0x904 PushI
	AddReply(var_535_int, var_536_int, var_537_int); // 0x905 TObjFunc
	return 0; // 0x907 Return
	
Label_2312:
	var_538_int = 8374; // 0x908 PushI
	var_539_bool = var_40_string == var_538_int; // 0x909 Eq
	if(var_539_bool == 0) goto Label_2330; // 0x90a JumpB
	var_540_string = ""; // 0x90b PushV
	var_540_string = "Neutral"; // 0x90c MovS
	func_1432(var_41_bool, var_540_string); // 0x90d Call
	var_541_int = 7588; // 0x90f PushI
	SetMessage(var_541_int); // 0x910 TObjFunc
	ClearReplies(); // 0x912 TObjFunc
	var_542_int = 7589; // 0x914 PushI
	var_543_int = -1; // 0x915 PushI
	var_544_int = 8375; // 0x916 PushI
	AddReply(var_542_int, var_543_int, var_544_int); // 0x917 TObjFunc
	return 0; // 0x919 Return
	
Label_2330:
	var_545_int = 8354; // 0x91a PushI
	var_546_bool = var_40_string == var_545_int; // 0x91b Eq
	if(var_546_bool == 0) goto Label_2353; // 0x91c JumpB
	var_547_string = ""; // 0x91d PushV
	var_547_string = "Neutral"; // 0x91e MovS
	func_1432(var_41_bool, var_547_string); // 0x91f Call
	var_548_int = 7572; // 0x921 PushI
	SetMessage(var_548_int); // 0x922 TObjFunc
	ClearReplies(); // 0x924 TObjFunc
	var_549_int = 7573; // 0x926 PushI
	var_550_int = 8348; // 0x927 PushI
	var_551_int = 8355; // 0x928 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x929 TObjFunc
	var_552_int = 7574; // 0x92b PushI
	var_553_int = 8348; // 0x92c PushI
	var_554_int = 8356; // 0x92d PushI
	AddReply(var_552_int, var_553_int, var_554_int); // 0x92e TObjFunc
	return 0; // 0x930 Return
	
Label_2353:
	var_555_int = 8348; // 0x931 PushI
	var_556_bool = var_40_string == var_555_int; // 0x932 Eq
	if(var_556_bool == 0) goto Label_2376; // 0x933 JumpB
	var_557_string = ""; // 0x934 PushV
	var_557_string = "Neutral"; // 0x935 MovS
	func_1432(var_41_bool, var_557_string); // 0x936 Call
	var_558_int = 7566; // 0x938 PushI
	SetMessage(var_558_int); // 0x939 TObjFunc
	ClearReplies(); // 0x93b TObjFunc
	var_559_int = 7575; // 0x93d PushI
	var_560_int = 8359; // 0x93e PushI
	var_561_int = 8358; // 0x93f PushI
	AddReply(var_559_int, var_560_int, var_561_int); // 0x940 TObjFunc
	var_562_int = 7577; // 0x942 PushI
	var_563_int = 8359; // 0x943 PushI
	var_564_int = 8360; // 0x944 PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x945 TObjFunc
	return 0; // 0x947 Return
	
Label_2376:
	var_565_int = 8359; // 0x948 PushI
	var_566_bool = var_40_string == var_565_int; // 0x949 Eq
	if(var_566_bool == 0) goto Label_2394; // 0x94a JumpB
	var_567_string = ""; // 0x94b PushV
	var_567_string = "Neutral"; // 0x94c MovS
	func_1432(var_41_bool, var_567_string); // 0x94d Call
	var_568_int = 7576; // 0x94f PushI
	SetMessage(var_568_int); // 0x950 TObjFunc
	ClearReplies(); // 0x952 TObjFunc
	var_569_int = 7578; // 0x954 PushI
	var_570_int = 8363; // 0x955 PushI
	var_571_int = 8362; // 0x956 PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x957 TObjFunc
	return 0; // 0x959 Return
	
Label_2394:
	var_572_int = 8363; // 0x95a PushI
	var_573_bool = var_40_string == var_572_int; // 0x95b Eq
	if(var_573_bool == 0) goto Label_2417; // 0x95c JumpB
	var_574_string = ""; // 0x95d PushV
	var_574_string = "Neutral"; // 0x95e MovS
	func_1432(var_41_bool, var_574_string); // 0x95f Call
	var_575_int = 7579; // 0x961 PushI
	SetMessage(var_575_int); // 0x962 TObjFunc
	ClearReplies(); // 0x964 TObjFunc
	var_576_int = 7580; // 0x966 PushI
	var_577_int = -1; // 0x967 PushI
	var_578_int = 8364; // 0x968 PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x969 TObjFunc
	var_579_int = 7581; // 0x96b PushI
	var_580_int = -1; // 0x96c PushI
	var_581_int = 8365; // 0x96d PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x96e TObjFunc
	return 0; // 0x970 Return
	
Label_2417:
	var_582_int = 5777; // 0x971 PushI
	var_583_bool = var_40_string == var_582_int; // 0x972 Eq
	if(var_583_bool == 0) goto Label_2440; // 0x973 JumpB
	var_584_string = ""; // 0x974 PushV
	var_584_string = "Neutral"; // 0x975 MovS
	func_1432(var_41_bool, var_584_string); // 0x976 Call
	var_585_int = 5242; // 0x978 PushI
	SetMessage(var_585_int); // 0x979 TObjFunc
	ClearReplies(); // 0x97b TObjFunc
	var_586_int = 5243; // 0x97d PushI
	var_587_int = 5779; // 0x97e PushI
	var_588_int = 5778; // 0x97f PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x980 TObjFunc
	var_589_int = 5252; // 0x982 PushI
	var_590_int = 5779; // 0x983 PushI
	var_591_int = 5788; // 0x984 PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x985 TObjFunc
	return 0; // 0x987 Return
	
Label_2440:
	var_592_int = 5779; // 0x988 PushI
	var_593_bool = var_40_string == var_592_int; // 0x989 Eq
	if(var_593_bool == 0) goto Label_2463; // 0x98a JumpB
	var_594_string = ""; // 0x98b PushV
	var_594_string = "Neutral"; // 0x98c MovS
	func_1432(var_41_bool, var_594_string); // 0x98d Call
	var_595_int = 5244; // 0x98f PushI
	SetMessage(var_595_int); // 0x990 TObjFunc
	ClearReplies(); // 0x992 TObjFunc
	var_596_int = 5245; // 0x994 PushI
	var_597_int = 5781; // 0x995 PushI
	var_598_int = 5780; // 0x996 PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0x997 TObjFunc
	var_599_int = 5251; // 0x999 PushI
	var_600_int = 5781; // 0x99a PushI
	var_601_int = 5786; // 0x99b PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0x99c TObjFunc
	return 0; // 0x99e Return
	
Label_2463:
	var_602_int = 5781; // 0x99f PushI
	var_603_bool = var_40_string == var_602_int; // 0x9a0 Eq
	if(var_603_bool == 0) goto Label_2486; // 0x9a1 JumpB
	var_604_string = ""; // 0x9a2 PushV
	var_604_string = "Neutral"; // 0x9a3 MovS
	func_1432(var_41_bool, var_604_string); // 0x9a4 Call
	var_605_int = 5246; // 0x9a6 PushI
	SetMessage(var_605_int); // 0x9a7 TObjFunc
	ClearReplies(); // 0x9a9 TObjFunc
	var_606_int = 5248; // 0x9ab PushI
	var_607_int = 5784; // 0x9ac PushI
	var_608_int = 5783; // 0x9ad PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0x9ae TObjFunc
	var_609_int = 5247; // 0x9b0 PushI
	var_610_int = -1; // 0x9b1 PushI
	var_611_int = 5782; // 0x9b2 PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0x9b3 TObjFunc
	return 0; // 0x9b5 Return
	
Label_2486:
	var_612_int = 5784; // 0x9b6 PushI
	var_613_bool = var_40_string == var_612_int; // 0x9b7 Eq
	if(var_613_bool == 0) goto Label_2504; // 0x9b8 JumpB
	var_614_string = ""; // 0x9b9 PushV
	var_614_string = "Neutral"; // 0x9ba MovS
	func_1432(var_41_bool, var_614_string); // 0x9bb Call
	var_615_int = 5249; // 0x9bd PushI
	SetMessage(var_615_int); // 0x9be TObjFunc
	ClearReplies(); // 0x9c0 TObjFunc
	var_616_int = 5250; // 0x9c2 PushI
	var_617_int = -1; // 0x9c3 PushI
	var_618_int = 5785; // 0x9c4 PushI
	AddReply(var_616_int, var_617_int, var_618_int); // 0x9c5 TObjFunc
	return 0; // 0x9c7 Return
	
Label_2504:
	var_619_int = 5798; // 0x9c8 PushI
	var_620_bool = var_40_string == var_619_int; // 0x9c9 Eq
	if(var_620_bool == 0) goto Label_2522; // 0x9ca JumpB
	var_621_string = ""; // 0x9cb PushV
	var_621_string = "Neutral"; // 0x9cc MovS
	func_1432(var_41_bool, var_621_string); // 0x9cd Call
	var_622_int = 5261; // 0x9cf PushI
	SetMessage(var_622_int); // 0x9d0 TObjFunc
	ClearReplies(); // 0x9d2 TObjFunc
	var_623_int = 5262; // 0x9d4 PushI
	var_624_int = -1; // 0x9d5 PushI
	var_625_int = 5799; // 0x9d6 PushI
	AddReply(var_623_int, var_624_int, var_625_int); // 0x9d7 TObjFunc
	return 0; // 0x9d9 Return
	
Label_2522:
	var_626_int = 5792; // 0x9da PushI
	var_627_bool = var_40_string == var_626_int; // 0x9db Eq
	if(var_627_bool == 0) goto Label_2545; // 0x9dc JumpB
	var_628_string = ""; // 0x9dd PushV
	var_628_string = "Neutral"; // 0x9de MovS
	func_1432(var_41_bool, var_628_string); // 0x9df Call
	var_629_int = 5255; // 0x9e1 PushI
	SetMessage(var_629_int); // 0x9e2 TObjFunc
	ClearReplies(); // 0x9e4 TObjFunc
	var_630_int = 5256; // 0x9e6 PushI
	var_631_int = -1; // 0x9e7 PushI
	var_632_int = 5793; // 0x9e8 PushI
	AddReply(var_630_int, var_631_int, var_632_int); // 0x9e9 TObjFunc
	var_633_int = 5257; // 0x9eb PushI
	var_634_int = -1; // 0x9ec PushI
	var_635_int = 5794; // 0x9ed PushI
	AddReply(var_633_int, var_634_int, var_635_int); // 0x9ee TObjFunc
	return 0; // 0x9f0 Return
	
Label_2545:
	var_636_int = 6465; // 0x9f1 PushI
	var_637_bool = var_40_string == var_636_int; // 0x9f2 Eq
	if(var_637_bool == 0) goto Label_2568; // 0x9f3 JumpB
	var_638_string = ""; // 0x9f4 PushV
	var_638_string = "Neutral"; // 0x9f5 MovS
	func_1432(var_41_bool, var_638_string); // 0x9f6 Call
	var_639_int = 5873; // 0x9f8 PushI
	SetMessage(var_639_int); // 0x9f9 TObjFunc
	ClearReplies(); // 0x9fb TObjFunc
	var_640_int = 5874; // 0x9fd PushI
	var_641_int = 6469; // 0x9fe PushI
	var_642_int = 6466; // 0x9ff PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0xa00 TObjFunc
	var_643_int = 5875; // 0xa02 PushI
	var_644_int = 6469; // 0xa03 PushI
	var_645_int = 6467; // 0xa04 PushI
	AddReply(var_643_int, var_644_int, var_645_int); // 0xa05 TObjFunc
	return 0; // 0xa07 Return
	
Label_2568:
	var_646_int = 6469; // 0xa08 PushI
	var_647_bool = var_40_string == var_646_int; // 0xa09 Eq
	if(var_647_bool == 0) goto Label_2591; // 0xa0a JumpB
	var_648_string = ""; // 0xa0b PushV
	var_648_string = "Neutral"; // 0xa0c MovS
	func_1432(var_41_bool, var_648_string); // 0xa0d Call
	var_649_int = 5877; // 0xa0f PushI
	SetMessage(var_649_int); // 0xa10 TObjFunc
	ClearReplies(); // 0xa12 TObjFunc
	var_650_int = 5880; // 0xa14 PushI
	var_651_int = 6473; // 0xa15 PushI
	var_652_int = 6472; // 0xa16 PushI
	AddReply(var_650_int, var_651_int, var_652_int); // 0xa17 TObjFunc
	var_653_int = 5879; // 0xa19 PushI
	var_654_int = -1; // 0xa1a PushI
	var_655_int = 6471; // 0xa1b PushI
	AddReply(var_653_int, var_654_int, var_655_int); // 0xa1c TObjFunc
	return 0; // 0xa1e Return
	
Label_2591:
	var_656_int = 6473; // 0xa1f PushI
	var_657_bool = var_40_string == var_656_int; // 0xa20 Eq
	if(var_657_bool == 0) goto Label_2614; // 0xa21 JumpB
	var_658_string = ""; // 0xa22 PushV
	var_658_string = "Neutral"; // 0xa23 MovS
	func_1432(var_41_bool, var_658_string); // 0xa24 Call
	var_659_int = 5881; // 0xa26 PushI
	SetMessage(var_659_int); // 0xa27 TObjFunc
	ClearReplies(); // 0xa29 TObjFunc
	var_660_int = 5882; // 0xa2b PushI
	var_661_int = -1; // 0xa2c PushI
	var_662_int = 6474; // 0xa2d PushI
	AddReply(var_660_int, var_661_int, var_662_int); // 0xa2e TObjFunc
	var_663_int = 5887; // 0xa30 PushI
	var_664_int = -1; // 0xa31 PushI
	var_665_int = 6481; // 0xa32 PushI
	AddReply(var_663_int, var_664_int, var_665_int); // 0xa33 TObjFunc
	return 0; // 0xa35 Return
	
Label_2614:
	var_666_int = 6468; // 0xa36 PushI
	var_667_bool = var_40_string == var_666_int; // 0xa37 Eq
	if(var_667_bool == 0) goto Label_2637; // 0xa38 JumpB
	var_668_string = ""; // 0xa39 PushV
	var_668_string = "Neutral"; // 0xa3a MovS
	func_1432(var_41_bool, var_668_string); // 0xa3b Call
	var_669_int = 5876; // 0xa3d PushI
	SetMessage(var_669_int); // 0xa3e TObjFunc
	ClearReplies(); // 0xa40 TObjFunc
	var_670_int = 5883; // 0xa42 PushI
	var_671_int = 6477; // 0xa43 PushI
	var_672_int = 6476; // 0xa44 PushI
	AddReply(var_670_int, var_671_int, var_672_int); // 0xa45 TObjFunc
	var_673_int = 5888; // 0xa47 PushI
	var_674_int = 6483; // 0xa48 PushI
	var_675_int = 6482; // 0xa49 PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0xa4a TObjFunc
	return 0; // 0xa4c Return
	
Label_2637:
	var_676_int = 6483; // 0xa4d PushI
	var_677_bool = var_40_string == var_676_int; // 0xa4e Eq
	if(var_677_bool == 0) goto Label_2660; // 0xa4f JumpB
	var_678_string = ""; // 0xa50 PushV
	var_678_string = "Neutral"; // 0xa51 MovS
	func_1432(var_41_bool, var_678_string); // 0xa52 Call
	var_679_int = 5889; // 0xa54 PushI
	SetMessage(var_679_int); // 0xa55 TObjFunc
	ClearReplies(); // 0xa57 TObjFunc
	var_680_int = 5891; // 0xa59 PushI
	var_681_int = -1; // 0xa5a PushI
	var_682_int = 6485; // 0xa5b PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0xa5c TObjFunc
	var_683_int = 5890; // 0xa5e PushI
	var_684_int = -1; // 0xa5f PushI
	var_685_int = 6484; // 0xa60 PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0xa61 TObjFunc
	return 0; // 0xa63 Return
	
Label_2660:
	var_686_int = 6477; // 0xa64 PushI
	var_687_bool = var_40_string == var_686_int; // 0xa65 Eq
	if(var_687_bool == 0) goto Label_2683; // 0xa66 JumpB
	var_688_string = ""; // 0xa67 PushV
	var_688_string = "Neutral"; // 0xa68 MovS
	func_1432(var_41_bool, var_688_string); // 0xa69 Call
	var_689_int = 5884; // 0xa6b PushI
	SetMessage(var_689_int); // 0xa6c TObjFunc
	ClearReplies(); // 0xa6e TObjFunc
	var_690_int = 5885; // 0xa70 PushI
	var_691_int = 6469; // 0xa71 PushI
	var_692_int = 6478; // 0xa72 PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0xa73 TObjFunc
	var_693_int = 5892; // 0xa75 PushI
	var_694_int = 6487; // 0xa76 PushI
	var_695_int = 6486; // 0xa77 PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0xa78 TObjFunc
	return 0; // 0xa7a Return
	
Label_2683:
	var_696_int = 6487; // 0xa7b PushI
	var_697_bool = var_40_string == var_696_int; // 0xa7c Eq
	if(var_697_bool == 0) goto Label_2706; // 0xa7d JumpB
	var_698_string = ""; // 0xa7e PushV
	var_698_string = "Neutral"; // 0xa7f MovS
	func_1432(var_41_bool, var_698_string); // 0xa80 Call
	var_699_int = 5893; // 0xa82 PushI
	SetMessage(var_699_int); // 0xa83 TObjFunc
	ClearReplies(); // 0xa85 TObjFunc
	var_700_int = 5894; // 0xa87 PushI
	var_701_int = -1; // 0xa88 PushI
	var_702_int = 6488; // 0xa89 PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0xa8a TObjFunc
	var_703_int = 5895; // 0xa8c PushI
	var_704_int = 6469; // 0xa8d PushI
	var_705_int = 6489; // 0xa8e PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0xa8f TObjFunc
	return 0; // 0xa91 Return
	
Label_2706:
	var_3_string = 1; // 0xa92 TMovB
	var_706_bool = 0; // 0xa93 PushV
	func_7949(var_706_bool); // 0xa94 Call
	if(var_706_bool == 0) goto Label_2714; // 0xa96 JumpB
	lshStopAnimation(); // 0xa97 Func
	goto Label_2716; // 0xa99 Jump
	
Label_2716:
	return 0; // 0xa9c Return
	
Label_2714:
	StopAnimation(); // 0xa9a Func
	
Label_2718:
	return 0; // 0xa9e Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xb8a PushI
	if(var_42_int == 0) goto Label_3609; // 0xb8b JumpB
	func_7875(); // 0xb8d Call
	var_44_int = 7496; // 0xb8f PushI
	var_45_bool = var_41_bool == var_44_int; // 0xb90 Eq
	if(var_45_bool == 0) goto Label_2967; // 0xb91 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xb92 PushV
	var_46_object = var_1_object; // 0xb93 MovT
	var_47_object = var_0_object; // 0xb94 MovT
	func_7967(); // 0xb95 Call
	
Label_2967:
	var_50_int = 7497; // 0xb97 PushI
	var_51_bool = var_41_bool == var_50_int; // 0xb98 Eq
	if(var_51_bool == 0) goto Label_2975; // 0xb99 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xb9a PushV
	var_52_object = var_1_object; // 0xb9b MovT
	var_53_object = var_0_object; // 0xb9c MovT
	func_7967(); // 0xb9d Call
	
Label_2975:
	var_54_int = 7828; // 0xb9f PushI
	var_55_bool = var_41_bool == var_54_int; // 0xba0 Eq
	if(var_55_bool == 0) goto Label_2983; // 0xba1 JumpB
	var_56_object = Obj(); var_57_object = Obj(); // 0xba2 PushV
	var_56_object = var_1_object; // 0xba3 MovT
	var_57_object = var_0_object; // 0xba4 MovT
	func_7967(); // 0xba5 Call
	
Label_2983:
	var_58_int = 7831; // 0xba7 PushI
	var_59_bool = var_41_bool == var_58_int; // 0xba8 Eq
	if(var_59_bool == 0) goto Label_2991; // 0xba9 JumpB
	var_60_object = Obj(); var_61_object = Obj(); // 0xbaa PushV
	var_60_object = var_1_object; // 0xbab MovT
	var_61_object = var_0_object; // 0xbac MovT
	func_7967(); // 0xbad Call
	
Label_2991:
	var_62_int = 7460; // 0xbaf PushI
	var_63_bool = var_41_bool == var_62_int; // 0xbb0 Eq
	if(var_63_bool == 0) goto Label_3004; // 0xbb1 JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0xbb2 PushV
	var_64_object = var_1_object; // 0xbb3 MovT
	var_65_object = var_0_object; // 0xbb4 MovT
	func_7973(); // 0xbb5 Call
	var_68_object = Obj(); var_69_object = Obj(); // 0xbb7 PushV
	var_68_object = var_1_object; // 0xbb8 MovT
	var_69_object = var_0_object; // 0xbb9 MovT
	func_7991(); // 0xbba Call
	
Label_3004:
	var_72_int = 7461; // 0xbbc PushI
	var_73_bool = var_41_bool == var_72_int; // 0xbbd Eq
	if(var_73_bool == 0) goto Label_3017; // 0xbbe JumpB
	var_74_object = Obj(); var_75_object = Obj(); // 0xbbf PushV
	var_74_object = var_1_object; // 0xbc0 MovT
	var_75_object = var_0_object; // 0xbc1 MovT
	func_7973(); // 0xbc2 Call
	var_76_object = Obj(); var_77_object = Obj(); // 0xbc4 PushV
	var_76_object = var_1_object; // 0xbc5 MovT
	var_77_object = var_0_object; // 0xbc6 MovT
	func_7991(); // 0xbc7 Call
	
Label_3017:
	var_78_int = 7465; // 0xbc9 PushI
	var_79_bool = var_41_bool == var_78_int; // 0xbca Eq
	if(var_79_bool == 0) goto Label_3030; // 0xbcb JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0xbcc PushV
	var_80_object = var_1_object; // 0xbcd MovT
	var_81_object = var_0_object; // 0xbce MovT
	func_7973(); // 0xbcf Call
	var_82_object = Obj(); var_83_object = Obj(); // 0xbd1 PushV
	var_82_object = var_1_object; // 0xbd2 MovT
	var_83_object = var_0_object; // 0xbd3 MovT
	func_7991(); // 0xbd4 Call
	
Label_3030:
	var_84_int = 7466; // 0xbd6 PushI
	var_85_bool = var_41_bool == var_84_int; // 0xbd7 Eq
	if(var_85_bool == 0) goto Label_3043; // 0xbd8 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0xbd9 PushV
	var_86_object = var_1_object; // 0xbda MovT
	var_87_object = var_0_object; // 0xbdb MovT
	func_7973(); // 0xbdc Call
	var_88_object = Obj(); var_89_object = Obj(); // 0xbde PushV
	var_88_object = var_1_object; // 0xbdf MovT
	var_89_object = var_0_object; // 0xbe0 MovT
	func_7991(); // 0xbe1 Call
	
Label_3043:
	var_90_int = 7814; // 0xbe3 PushI
	var_91_bool = var_41_bool == var_90_int; // 0xbe4 Eq
	if(var_91_bool == 0) goto Label_3051; // 0xbe5 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0xbe6 PushV
	var_92_object = var_1_object; // 0xbe7 MovT
	var_93_object = var_0_object; // 0xbe8 MovT
	func_7979(); // 0xbe9 Call
	
Label_3051:
	var_96_int = 7815; // 0xbeb PushI
	var_97_bool = var_41_bool == var_96_int; // 0xbec Eq
	if(var_97_bool == 0) goto Label_3059; // 0xbed JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0xbee PushV
	var_98_object = var_1_object; // 0xbef MovT
	var_99_object = var_0_object; // 0xbf0 MovT
	func_7979(); // 0xbf1 Call
	
Label_3059:
	var_100_int = 7477; // 0xbf3 PushI
	var_101_bool = var_41_bool == var_100_int; // 0xbf4 Eq
	if(var_101_bool == 0) goto Label_3067; // 0xbf5 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0xbf6 PushV
	var_102_object = var_1_object; // 0xbf7 MovT
	var_103_object = var_0_object; // 0xbf8 MovT
	func_7985(); // 0xbf9 Call
	
Label_3067:
	var_106_int = 7478; // 0xbfb PushI
	var_107_bool = var_41_bool == var_106_int; // 0xbfc Eq
	if(var_107_bool == 0) goto Label_3075; // 0xbfd JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0xbfe PushV
	var_108_object = var_1_object; // 0xbff MovT
	var_109_object = var_0_object; // 0xc00 MovT
	func_7985(); // 0xc01 Call
	
Label_3075:
	var_110_int = 7474; // 0xc03 PushI
	var_111_bool = var_41_bool == var_110_int; // 0xc04 Eq
	if(var_111_bool == 0) goto Label_3083; // 0xc05 JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0xc06 PushV
	var_112_object = var_1_object; // 0xc07 MovT
	var_113_object = var_0_object; // 0xc08 MovT
	func_7985(); // 0xc09 Call
	
Label_3083:
	var_114_int = 7479; // 0xc0b PushI
	var_115_bool = var_41_bool == var_114_int; // 0xc0c Eq
	if(var_115_bool == 0) goto Label_3091; // 0xc0d JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0xc0e PushV
	var_116_object = var_1_object; // 0xc0f MovT
	var_117_object = var_0_object; // 0xc10 MovT
	func_7985(); // 0xc11 Call
	
Label_3091:
	var_118_int = 7489; // 0xc13 PushI
	var_119_bool = var_40_string == var_118_int; // 0xc14 Eq
	if(var_119_bool == 0) goto Label_3211; // 0xc15 JumpB
	var_120_bool = 0; // 0xc16 PushV
	var_120_bool = 0; // 0xc17 MovB
	var_121_bool = 0; var_122_object = Obj(); // 0xc18 PushV
	var_122_object = var_1_object; // 0xc19 MovT
	func_8790(var_122_object); // 0xc1a Call
	if(var_121_bool == 0) goto Label_3107; // 0xc1c JumpB
	var_129_bool = 0; var_130_object = Obj(); // 0xc1d PushV
	var_130_object = var_1_object; // 0xc1e MovT
	func_8848(var_130_object); // 0xc1f Call
	if(var_129_bool == 0) goto Label_3107; // 0xc21 JumpB
	var_120_bool = 1; // 0xc22 MovB
	
Label_3107:
	if(var_120_bool == 0) goto Label_3133; // 0xc23 JumpB
	var_135_string = ""; // 0xc24 PushV
	var_135_string = "Neutral"; // 0xc25 MovS
	func_2937(var_41_bool, var_135_string); // 0xc26 Call
	var_150_int = 6797; // 0xc28 PushI
	SetMessage(var_150_int); // 0xc29 TObjFunc
	ClearReplies(); // 0xc2b TObjFunc
	var_151_int = 6798; // 0xc2d PushI
	var_152_int = 7491; // 0xc2e PushI
	var_153_int = 7490; // 0xc2f PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0xc30 TObjFunc
	var_154_int = 6809; // 0xc32 PushI
	var_155_int = 7491; // 0xc33 PushI
	var_156_int = 7503; // 0xc34 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0xc35 TObjFunc
	var_157_int = 6810; // 0xc37 PushI
	var_158_int = 7493; // 0xc38 PushI
	var_159_int = 7505; // 0xc39 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0xc3a TObjFunc
	return 0; // 0xc3c Return
	
Label_3133:
	var_160_bool = 0; // 0xc3d PushV
	var_160_bool = 0; // 0xc3e MovB
	var_161_bool = 0; var_162_object = Obj(); // 0xc3f PushV
	var_162_object = var_1_object; // 0xc40 MovT
	func_8802(var_162_object); // 0xc41 Call
	if(var_161_bool == 0) goto Label_3146; // 0xc43 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0xc44 PushV
	var_168_object = var_1_object; // 0xc45 MovT
	func_8860(var_168_object); // 0xc46 Call
	if(var_167_bool == 0) goto Label_3146; // 0xc48 JumpB
	var_160_bool = 1; // 0xc49 MovB
	
Label_3146:
	if(var_160_bool == 0) goto Label_3167; // 0xc4a JumpB
	var_173_string = ""; // 0xc4b PushV
	var_173_string = "Neutral"; // 0xc4c MovS
	func_2937(var_41_bool, var_173_string); // 0xc4d Call
	var_174_int = 6765; // 0xc4f PushI
	SetMessage(var_174_int); // 0xc50 TObjFunc
	ClearReplies(); // 0xc52 TObjFunc
	var_175_int = 6777; // 0xc54 PushI
	var_176_int = 7457; // 0xc55 PushI
	var_177_int = 7467; // 0xc56 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0xc57 TObjFunc
	var_178_int = 6766; // 0xc59 PushI
	var_179_int = 7459; // 0xc5a PushI
	var_180_int = 7456; // 0xc5b PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0xc5c TObjFunc
	return 0; // 0xc5e Return
	
Label_3167:
	var_181_string = ""; // 0xc5f PushV
	var_181_string = "Neutral"; // 0xc60 MovS
	func_2937(var_41_bool, var_181_string); // 0xc61 Call
	var_182_int = 6794; // 0xc63 PushI
	SetMessage(var_182_int); // 0xc64 TObjFunc
	ClearReplies(); // 0xc66 TObjFunc
	var_183_bool = 0; // 0xc68 PushV
	var_183_bool = 0; // 0xc69 MovB
	var_184_bool = 0; var_185_object = Obj(); // 0xc6a PushV
	var_185_object = var_1_object; // 0xc6b MovT
	func_8814(var_185_object); // 0xc6c Call
	if(var_184_bool == 0) goto Label_3189; // 0xc6e JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0xc6f PushV
	var_191_object = var_1_object; // 0xc70 MovT
	func_8848(var_191_object); // 0xc71 Call
	if(var_190_bool == 0) goto Label_3189; // 0xc73 JumpB
	var_183_bool = 1; // 0xc74 MovB
	
Label_3189:
	if(var_183_bool == 0) goto Label_3195; // 0xc75 JumpB
	var_192_int = 7084; // 0xc76 PushI
	var_193_int = 7809; // 0xc77 PushI
	var_194_int = 7807; // 0xc78 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xc79 TObjFunc
	
Label_3195:
	var_195_bool = 0; var_196_object = Obj(); // 0xc7b PushV
	var_196_object = var_1_object; // 0xc7c MovT
	func_8826(var_196_object); // 0xc7d Call
	if(var_195_bool == 0) goto Label_3205; // 0xc7f JumpB
	var_201_int = 6795; // 0xc80 PushI
	var_202_int = 7469; // 0xc81 PushI
	var_203_int = 7487; // 0xc82 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xc83 TObjFunc
	
Label_3205:
	var_204_int = 7535; // 0xc85 PushI
	var_205_int = -1; // 0xc86 PushI
	var_206_int = 8317; // 0xc87 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0xc88 TObjFunc
	return 0; // 0xc8a Return
	
Label_3211:
	var_207_int = 7469; // 0xc8b PushI
	var_208_bool = var_40_string == var_207_int; // 0xc8c Eq
	if(var_208_bool == 0) goto Label_3234; // 0xc8d JumpB
	var_209_string = ""; // 0xc8e PushV
	var_209_string = "Neutral"; // 0xc8f MovS
	func_2937(var_41_bool, var_209_string); // 0xc90 Call
	var_210_int = 6778; // 0xc92 PushI
	SetMessage(var_210_int); // 0xc93 TObjFunc
	ClearReplies(); // 0xc95 TObjFunc
	var_211_int = 6779; // 0xc97 PushI
	var_212_int = 7471; // 0xc98 PushI
	var_213_int = 7470; // 0xc99 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xc9a TObjFunc
	var_214_int = 6793; // 0xc9c PushI
	var_215_int = 7476; // 0xc9d PushI
	var_216_int = 7485; // 0xc9e PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0xc9f TObjFunc
	return 0; // 0xca1 Return
	
Label_3234:
	var_217_int = 7471; // 0xca2 PushI
	var_218_bool = var_40_string == var_217_int; // 0xca3 Eq
	if(var_218_bool == 0) goto Label_3257; // 0xca4 JumpB
	var_219_string = ""; // 0xca5 PushV
	var_219_string = "Neutral"; // 0xca6 MovS
	func_2937(var_41_bool, var_219_string); // 0xca7 Call
	var_220_int = 6780; // 0xca9 PushI
	SetMessage(var_220_int); // 0xcaa TObjFunc
	ClearReplies(); // 0xcac TObjFunc
	var_221_int = 6781; // 0xcae PushI
	var_222_int = 7473; // 0xcaf PushI
	var_223_int = 7472; // 0xcb0 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xcb1 TObjFunc
	var_224_int = 6788; // 0xcb3 PushI
	var_225_int = -1; // 0xcb4 PushI
	var_226_int = 7479; // 0xcb5 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0xcb6 TObjFunc
	return 0; // 0xcb8 Return
	
Label_3257:
	var_227_int = 7473; // 0xcb9 PushI
	var_228_bool = var_40_string == var_227_int; // 0xcba Eq
	if(var_228_bool == 0) goto Label_3280; // 0xcbb JumpB
	var_229_string = ""; // 0xcbc PushV
	var_229_string = "Neutral"; // 0xcbd MovS
	func_2937(var_41_bool, var_229_string); // 0xcbe Call
	var_230_int = 6782; // 0xcc0 PushI
	SetMessage(var_230_int); // 0xcc1 TObjFunc
	ClearReplies(); // 0xcc3 TObjFunc
	var_231_int = 6784; // 0xcc5 PushI
	var_232_int = 7476; // 0xcc6 PushI
	var_233_int = 7475; // 0xcc7 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xcc8 TObjFunc
	var_234_int = 6783; // 0xcca PushI
	var_235_int = -1; // 0xccb PushI
	var_236_int = 7474; // 0xccc PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0xccd TObjFunc
	return 0; // 0xccf Return
	
Label_3280:
	var_237_int = 7476; // 0xcd0 PushI
	var_238_bool = var_40_string == var_237_int; // 0xcd1 Eq
	if(var_238_bool == 0) goto Label_3303; // 0xcd2 JumpB
	var_239_string = ""; // 0xcd3 PushV
	var_239_string = "Neutral"; // 0xcd4 MovS
	func_2937(var_41_bool, var_239_string); // 0xcd5 Call
	var_240_int = 6785; // 0xcd7 PushI
	SetMessage(var_240_int); // 0xcd8 TObjFunc
	ClearReplies(); // 0xcda TObjFunc
	var_241_int = 6786; // 0xcdc PushI
	var_242_int = -1; // 0xcdd PushI
	var_243_int = 7477; // 0xcde PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0xcdf TObjFunc
	var_244_int = 6787; // 0xce1 PushI
	var_245_int = -1; // 0xce2 PushI
	var_246_int = 7478; // 0xce3 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0xce4 TObjFunc
	return 0; // 0xce6 Return
	
Label_3303:
	var_247_int = 7809; // 0xce7 PushI
	var_248_bool = var_40_string == var_247_int; // 0xce8 Eq
	if(var_248_bool == 0) goto Label_3326; // 0xce9 JumpB
	var_249_string = ""; // 0xcea PushV
	var_249_string = "Neutral"; // 0xceb MovS
	func_2937(var_41_bool, var_249_string); // 0xcec Call
	var_250_int = 7085; // 0xcee PushI
	SetMessage(var_250_int); // 0xcef TObjFunc
	ClearReplies(); // 0xcf1 TObjFunc
	var_251_int = 7086; // 0xcf3 PushI
	var_252_int = 7811; // 0xcf4 PushI
	var_253_int = 7810; // 0xcf5 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0xcf6 TObjFunc
	var_254_int = 7096; // 0xcf8 PushI
	var_255_int = 7813; // 0xcf9 PushI
	var_256_int = 7822; // 0xcfa PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0xcfb TObjFunc
	return 0; // 0xcfd Return
	
Label_3326:
	var_257_int = 7811; // 0xcfe PushI
	var_258_bool = var_40_string == var_257_int; // 0xcff Eq
	if(var_258_bool == 0) goto Label_3354; // 0xd00 JumpB
	var_259_string = ""; // 0xd01 PushV
	var_259_string = "Neutral"; // 0xd02 MovS
	func_2937(var_41_bool, var_259_string); // 0xd03 Call
	var_260_int = 7087; // 0xd05 PushI
	SetMessage(var_260_int); // 0xd06 TObjFunc
	ClearReplies(); // 0xd08 TObjFunc
	var_261_int = 7088; // 0xd0a PushI
	var_262_int = 7813; // 0xd0b PushI
	var_263_int = 7812; // 0xd0c PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0xd0d TObjFunc
	var_264_int = 7092; // 0xd0f PushI
	var_265_int = 7813; // 0xd10 PushI
	var_266_int = 7816; // 0xd11 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0xd12 TObjFunc
	var_267_int = 7093; // 0xd14 PushI
	var_268_int = 7819; // 0xd15 PushI
	var_269_int = 7818; // 0xd16 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0xd17 TObjFunc
	return 0; // 0xd19 Return
	
Label_3354:
	var_270_int = 7819; // 0xd1a PushI
	var_271_bool = var_40_string == var_270_int; // 0xd1b Eq
	if(var_271_bool == 0) goto Label_3372; // 0xd1c JumpB
	var_272_string = ""; // 0xd1d PushV
	var_272_string = "Neutral"; // 0xd1e MovS
	func_2937(var_41_bool, var_272_string); // 0xd1f Call
	var_273_int = 7094; // 0xd21 PushI
	SetMessage(var_273_int); // 0xd22 TObjFunc
	ClearReplies(); // 0xd24 TObjFunc
	var_274_int = 7095; // 0xd26 PushI
	var_275_int = 7813; // 0xd27 PushI
	var_276_int = 7820; // 0xd28 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0xd29 TObjFunc
	return 0; // 0xd2b Return
	
Label_3372:
	var_277_int = 7813; // 0xd2c PushI
	var_278_bool = var_40_string == var_277_int; // 0xd2d Eq
	if(var_278_bool == 0) goto Label_3395; // 0xd2e JumpB
	var_279_string = ""; // 0xd2f PushV
	var_279_string = "Neutral"; // 0xd30 MovS
	func_2937(var_41_bool, var_279_string); // 0xd31 Call
	var_280_int = 7089; // 0xd33 PushI
	SetMessage(var_280_int); // 0xd34 TObjFunc
	ClearReplies(); // 0xd36 TObjFunc
	var_281_int = 7090; // 0xd38 PushI
	var_282_int = -1; // 0xd39 PushI
	var_283_int = 7814; // 0xd3a PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0xd3b TObjFunc
	var_284_int = 7091; // 0xd3d PushI
	var_285_int = -1; // 0xd3e PushI
	var_286_int = 7815; // 0xd3f PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0xd40 TObjFunc
	return 0; // 0xd42 Return
	
Label_3395:
	var_287_int = 7457; // 0xd43 PushI
	var_288_bool = var_40_string == var_287_int; // 0xd44 Eq
	if(var_288_bool == 0) goto Label_3418; // 0xd45 JumpB
	var_289_string = ""; // 0xd46 PushV
	var_289_string = "Neutral"; // 0xd47 MovS
	func_2937(var_41_bool, var_289_string); // 0xd48 Call
	var_290_int = 6767; // 0xd4a PushI
	SetMessage(var_290_int); // 0xd4b TObjFunc
	ClearReplies(); // 0xd4d TObjFunc
	var_291_int = 6768; // 0xd4f PushI
	var_292_int = 7459; // 0xd50 PushI
	var_293_int = 7458; // 0xd51 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0xd52 TObjFunc
	var_294_int = 6773; // 0xd54 PushI
	var_295_int = 7464; // 0xd55 PushI
	var_296_int = 7463; // 0xd56 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0xd57 TObjFunc
	return 0; // 0xd59 Return
	
Label_3418:
	var_297_int = 7464; // 0xd5a PushI
	var_298_bool = var_40_string == var_297_int; // 0xd5b Eq
	if(var_298_bool == 0) goto Label_3441; // 0xd5c JumpB
	var_299_string = ""; // 0xd5d PushV
	var_299_string = "Neutral"; // 0xd5e MovS
	func_2937(var_41_bool, var_299_string); // 0xd5f Call
	var_300_int = 6774; // 0xd61 PushI
	SetMessage(var_300_int); // 0xd62 TObjFunc
	ClearReplies(); // 0xd64 TObjFunc
	var_301_int = 6775; // 0xd66 PushI
	var_302_int = -1; // 0xd67 PushI
	var_303_int = 7465; // 0xd68 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0xd69 TObjFunc
	var_304_int = 6776; // 0xd6b PushI
	var_305_int = -1; // 0xd6c PushI
	var_306_int = 7466; // 0xd6d PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0xd6e TObjFunc
	return 0; // 0xd70 Return
	
Label_3441:
	var_307_int = 7459; // 0xd71 PushI
	var_308_bool = var_40_string == var_307_int; // 0xd72 Eq
	if(var_308_bool == 0) goto Label_3464; // 0xd73 JumpB
	var_309_string = ""; // 0xd74 PushV
	var_309_string = "Neutral"; // 0xd75 MovS
	func_2937(var_41_bool, var_309_string); // 0xd76 Call
	var_310_int = 6769; // 0xd78 PushI
	SetMessage(var_310_int); // 0xd79 TObjFunc
	ClearReplies(); // 0xd7b TObjFunc
	var_311_int = 6770; // 0xd7d PushI
	var_312_int = -1; // 0xd7e PushI
	var_313_int = 7460; // 0xd7f PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0xd80 TObjFunc
	var_314_int = 6771; // 0xd82 PushI
	var_315_int = -1; // 0xd83 PushI
	var_316_int = 7461; // 0xd84 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xd85 TObjFunc
	return 0; // 0xd87 Return
	
Label_3464:
	var_317_int = 7491; // 0xd88 PushI
	var_318_bool = var_40_string == var_317_int; // 0xd89 Eq
	if(var_318_bool == 0) goto Label_3487; // 0xd8a JumpB
	var_319_string = ""; // 0xd8b PushV
	var_319_string = "Neutral"; // 0xd8c MovS
	func_2937(var_41_bool, var_319_string); // 0xd8d Call
	var_320_int = 6799; // 0xd8f PushI
	SetMessage(var_320_int); // 0xd90 TObjFunc
	ClearReplies(); // 0xd92 TObjFunc
	var_321_int = 6800; // 0xd94 PushI
	var_322_int = 7493; // 0xd95 PushI
	var_323_int = 7492; // 0xd96 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0xd97 TObjFunc
	var_324_int = 6807; // 0xd99 PushI
	var_325_int = 7493; // 0xd9a PushI
	var_326_int = 7500; // 0xd9b PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0xd9c TObjFunc
	return 0; // 0xd9e Return
	
Label_3487:
	var_327_int = 7493; // 0xd9f PushI
	var_328_bool = var_40_string == var_327_int; // 0xda0 Eq
	if(var_328_bool == 0) goto Label_3510; // 0xda1 JumpB
	var_329_string = ""; // 0xda2 PushV
	var_329_string = "Neutral"; // 0xda3 MovS
	func_2937(var_41_bool, var_329_string); // 0xda4 Call
	var_330_int = 6801; // 0xda6 PushI
	SetMessage(var_330_int); // 0xda7 TObjFunc
	ClearReplies(); // 0xda9 TObjFunc
	var_331_int = 6802; // 0xdab PushI
	var_332_int = 7495; // 0xdac PushI
	var_333_int = 7494; // 0xdad PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0xdae TObjFunc
	var_334_int = 6806; // 0xdb0 PushI
	var_335_int = 7495; // 0xdb1 PushI
	var_336_int = 7498; // 0xdb2 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0xdb3 TObjFunc
	return 0; // 0xdb5 Return
	
Label_3510:
	var_337_int = 7495; // 0xdb6 PushI
	var_338_bool = var_40_string == var_337_int; // 0xdb7 Eq
	if(var_338_bool == 0) goto Label_3538; // 0xdb8 JumpB
	var_339_string = ""; // 0xdb9 PushV
	var_339_string = "Neutral"; // 0xdba MovS
	func_2937(var_41_bool, var_339_string); // 0xdbb Call
	var_340_int = 6803; // 0xdbd PushI
	SetMessage(var_340_int); // 0xdbe TObjFunc
	ClearReplies(); // 0xdc0 TObjFunc
	var_341_int = 6804; // 0xdc2 PushI
	var_342_int = -1; // 0xdc3 PushI
	var_343_int = 7496; // 0xdc4 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0xdc5 TObjFunc
	var_344_int = 6805; // 0xdc7 PushI
	var_345_int = -1; // 0xdc8 PushI
	var_346_int = 7497; // 0xdc9 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0xdca TObjFunc
	var_347_int = 7097; // 0xdcc PushI
	var_348_int = 7825; // 0xdcd PushI
	var_349_int = 7824; // 0xdce PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xdcf TObjFunc
	return 0; // 0xdd1 Return
	
Label_3538:
	var_350_int = 7825; // 0xdd2 PushI
	var_351_bool = var_40_string == var_350_int; // 0xdd3 Eq
	if(var_351_bool == 0) goto Label_3556; // 0xdd4 JumpB
	var_352_string = ""; // 0xdd5 PushV
	var_352_string = "Neutral"; // 0xdd6 MovS
	func_2937(var_41_bool, var_352_string); // 0xdd7 Call
	var_353_int = 7098; // 0xdd9 PushI
	SetMessage(var_353_int); // 0xdda TObjFunc
	ClearReplies(); // 0xddc TObjFunc
	var_354_int = 7099; // 0xdde PushI
	var_355_int = 7827; // 0xddf PushI
	var_356_int = 7826; // 0xde0 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xde1 TObjFunc
	return 0; // 0xde3 Return
	
Label_3556:
	var_357_int = 7827; // 0xde4 PushI
	var_358_bool = var_40_string == var_357_int; // 0xde5 Eq
	if(var_358_bool == 0) goto Label_3579; // 0xde6 JumpB
	var_359_string = ""; // 0xde7 PushV
	var_359_string = "Neutral"; // 0xde8 MovS
	func_2937(var_41_bool, var_359_string); // 0xde9 Call
	var_360_int = 7100; // 0xdeb PushI
	SetMessage(var_360_int); // 0xdec TObjFunc
	ClearReplies(); // 0xdee TObjFunc
	var_361_int = 7101; // 0xdf0 PushI
	var_362_int = -1; // 0xdf1 PushI
	var_363_int = 7828; // 0xdf2 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0xdf3 TObjFunc
	var_364_int = 7102; // 0xdf5 PushI
	var_365_int = 7830; // 0xdf6 PushI
	var_366_int = 7829; // 0xdf7 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0xdf8 TObjFunc
	return 0; // 0xdfa Return
	
Label_3579:
	var_367_int = 7830; // 0xdfb PushI
	var_368_bool = var_40_string == var_367_int; // 0xdfc Eq
	if(var_368_bool == 0) goto Label_3597; // 0xdfd JumpB
	var_369_string = ""; // 0xdfe PushV
	var_369_string = "Neutral"; // 0xdff MovS
	func_2937(var_41_bool, var_369_string); // 0xe00 Call
	var_370_int = 7103; // 0xe02 PushI
	SetMessage(var_370_int); // 0xe03 TObjFunc
	ClearReplies(); // 0xe05 TObjFunc
	var_371_int = 7104; // 0xe07 PushI
	var_372_int = -1; // 0xe08 PushI
	var_373_int = 7831; // 0xe09 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0xe0a TObjFunc
	return 0; // 0xe0c Return
	
Label_3597:
	var_3_string = 1; // 0xe0d TMovB
	var_374_bool = 0; // 0xe0e PushV
	func_7949(var_374_bool); // 0xe0f Call
	if(var_374_bool == 0) goto Label_3605; // 0xe11 JumpB
	lshStopAnimation(); // 0xe12 Func
	goto Label_3607; // 0xe14 Jump
	
Label_3607:
	return 0; // 0xe17 Return
	
Label_3605:
	StopAnimation(); // 0xe15 Func
	
Label_3609:
	return 0; // 0xe19 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xf17 PushI
	if(var_42_int == 0) goto Label_5359; // 0xf18 JumpB
	func_7875(); // 0xf1a Call
	var_44_int = 9874; // 0xf1c PushI
	var_45_bool = var_41_bool == var_44_int; // 0xf1d Eq
	if(var_45_bool == 0) goto Label_3886; // 0xf1e JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xf1f PushV
	var_46_object = var_1_object; // 0xf20 MovT
	var_47_object = var_0_object; // 0xf21 MovT
	func_8064(); // 0xf22 Call
	var_50_object = Obj(); var_51_object = Obj(); // 0xf24 PushV
	var_50_object = var_1_object; // 0xf25 MovT
	var_51_object = var_0_object; // 0xf26 MovT
	func_8070(); // 0xf27 Call
	var_100_object = Obj(); var_101_object = Obj(); // 0xf29 PushV
	var_100_object = var_1_object; // 0xf2a MovT
	var_101_object = var_0_object; // 0xf2b MovT
	func_7951(); // 0xf2c Call
	
Label_3886:
	var_126_int = 9875; // 0xf2e PushI
	var_127_bool = var_41_bool == var_126_int; // 0xf2f Eq
	if(var_127_bool == 0) goto Label_3904; // 0xf30 JumpB
	var_128_object = Obj(); var_129_object = Obj(); // 0xf31 PushV
	var_128_object = var_1_object; // 0xf32 MovT
	var_129_object = var_0_object; // 0xf33 MovT
	func_8064(); // 0xf34 Call
	var_130_object = Obj(); var_131_object = Obj(); // 0xf36 PushV
	var_130_object = var_1_object; // 0xf37 MovT
	var_131_object = var_0_object; // 0xf38 MovT
	func_8070(); // 0xf39 Call
	var_132_object = Obj(); var_133_object = Obj(); // 0xf3b PushV
	var_132_object = var_1_object; // 0xf3c MovT
	var_133_object = var_0_object; // 0xf3d MovT
	func_7951(); // 0xf3e Call
	
Label_3904:
	var_134_int = 12339; // 0xf40 PushI
	var_135_bool = var_41_bool == var_134_int; // 0xf41 Eq
	if(var_135_bool == 0) goto Label_3912; // 0xf42 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0xf43 PushV
	var_136_object = var_1_object; // 0xf44 MovT
	var_137_object = var_0_object; // 0xf45 MovT
	func_8064(); // 0xf46 Call
	
Label_3912:
	var_138_int = 9878; // 0xf48 PushI
	var_139_bool = var_41_bool == var_138_int; // 0xf49 Eq
	if(var_139_bool == 0) goto Label_3930; // 0xf4a JumpB
	var_140_object = Obj(); var_141_object = Obj(); // 0xf4b PushV
	var_140_object = var_1_object; // 0xf4c MovT
	var_141_object = var_0_object; // 0xf4d MovT
	func_8102(); // 0xf4e Call
	var_144_object = Obj(); var_145_object = Obj(); // 0xf50 PushV
	var_144_object = var_1_object; // 0xf51 MovT
	var_145_object = var_0_object; // 0xf52 MovT
	func_8070(); // 0xf53 Call
	var_146_object = Obj(); var_147_object = Obj(); // 0xf55 PushV
	var_146_object = var_1_object; // 0xf56 MovT
	var_147_object = var_0_object; // 0xf57 MovT
	func_7951(); // 0xf58 Call
	
Label_3930:
	var_148_int = 9891; // 0xf5a PushI
	var_149_bool = var_41_bool == var_148_int; // 0xf5b Eq
	if(var_149_bool == 0) goto Label_3943; // 0xf5c JumpB
	var_150_object = Obj(); var_151_object = Obj(); // 0xf5d PushV
	var_150_object = var_1_object; // 0xf5e MovT
	var_151_object = var_0_object; // 0xf5f MovT
	func_8108(); // 0xf60 Call
	var_154_object = Obj(); var_155_object = Obj(); // 0xf62 PushV
	var_154_object = var_1_object; // 0xf63 MovT
	var_155_object = var_0_object; // 0xf64 MovT
	func_8114(); // 0xf65 Call
	
Label_3943:
	var_171_int = 11436; // 0xf67 PushI
	var_172_bool = var_41_bool == var_171_int; // 0xf68 Eq
	if(var_172_bool == 0) goto Label_3961; // 0xf69 JumpB
	var_173_object = Obj(); var_174_object = Obj(); // 0xf6a PushV
	var_173_object = var_1_object; // 0xf6b MovT
	var_174_object = var_0_object; // 0xf6c MovT
	func_8159(); // 0xf6d Call
	var_177_object = Obj(); var_178_object = Obj(); // 0xf6f PushV
	var_177_object = var_1_object; // 0xf70 MovT
	var_178_object = var_0_object; // 0xf71 MovT
	func_8165(); // 0xf72 Call
	var_189_object = Obj(); var_190_object = Obj(); // 0xf74 PushV
	var_189_object = var_1_object; // 0xf75 MovT
	var_190_object = var_0_object; // 0xf76 MovT
	func_8185(); // 0xf77 Call
	
Label_3961:
	var_196_int = 11437; // 0xf79 PushI
	var_197_bool = var_41_bool == var_196_int; // 0xf7a Eq
	if(var_197_bool == 0) goto Label_3979; // 0xf7b JumpB
	var_198_object = Obj(); var_199_object = Obj(); // 0xf7c PushV
	var_198_object = var_1_object; // 0xf7d MovT
	var_199_object = var_0_object; // 0xf7e MovT
	func_8159(); // 0xf7f Call
	var_200_object = Obj(); var_201_object = Obj(); // 0xf81 PushV
	var_200_object = var_1_object; // 0xf82 MovT
	var_201_object = var_0_object; // 0xf83 MovT
	func_8165(); // 0xf84 Call
	var_202_object = Obj(); var_203_object = Obj(); // 0xf86 PushV
	var_202_object = var_1_object; // 0xf87 MovT
	var_203_object = var_0_object; // 0xf88 MovT
	func_8185(); // 0xf89 Call
	
Label_3979:
	var_204_int = 11447; // 0xf8b PushI
	var_205_bool = var_41_bool == var_204_int; // 0xf8c Eq
	if(var_205_bool == 0) goto Label_3987; // 0xf8d JumpB
	var_206_object = Obj(); var_207_object = Obj(); // 0xf8e PushV
	var_206_object = var_1_object; // 0xf8f MovT
	var_207_object = var_0_object; // 0xf90 MovT
	func_8201(); // 0xf91 Call
	
Label_3987:
	var_210_int = 11448; // 0xf93 PushI
	var_211_bool = var_41_bool == var_210_int; // 0xf94 Eq
	if(var_211_bool == 0) goto Label_3995; // 0xf95 JumpB
	var_212_object = Obj(); var_213_object = Obj(); // 0xf96 PushV
	var_212_object = var_1_object; // 0xf97 MovT
	var_213_object = var_0_object; // 0xf98 MovT
	func_8201(); // 0xf99 Call
	
Label_3995:
	var_214_int = 9791; // 0xf9b PushI
	var_215_bool = var_40_string == var_214_int; // 0xf9c Eq
	if(var_215_bool == 0) goto Label_4133; // 0xf9d JumpB
	var_216_string = ""; // 0xf9e PushV
	var_216_string = "Neutral"; // 0xf9f MovS
	func_3846(var_41_bool, var_216_string); // 0xfa0 Call
	var_231_int = 8926; // 0xfa2 PushI
	SetMessage(var_231_int); // 0xfa3 TObjFunc
	ClearReplies(); // 0xfa5 TObjFunc
	var_232_bool = 0; // 0xfa7 PushV
	var_232_bool = 0; // 0xfa8 MovB
	var_233_bool = 0; var_234_object = Obj(); // 0xfa9 PushV
	var_234_object = var_1_object; // 0xfaa MovT
	func_8956(var_234_object); // 0xfab Call
	if(var_233_bool == 0) goto Label_4020; // 0xfad JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0xfae PushV
	var_242_object = var_1_object; // 0xfaf MovT
	func_8968(var_242_object); // 0xfb0 Call
	if(var_241_bool == 0) goto Label_4020; // 0xfb2 JumpB
	var_232_bool = 1; // 0xfb3 MovB
	
Label_4020:
	if(var_232_bool == 0) goto Label_4026; // 0xfb4 JumpB
	var_247_int = 8977; // 0xfb5 PushI
	var_248_int = 9847; // 0xfb6 PushI
	var_249_int = 9846; // 0xfb7 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0xfb8 TObjFunc
	
Label_4026:
	var_250_bool = 0; // 0xfba PushV
	var_250_bool = 0; // 0xfbb MovB
	var_251_bool = 0; // 0xfbc PushV
	var_251_bool = 0; // 0xfbd MovB
	var_252_bool = 0; var_253_object = Obj(); // 0xfbe PushV
	var_253_object = var_1_object; // 0xfbf MovT
	func_8992(var_253_object); // 0xfc0 Call
	if(var_252_bool == 0) goto Label_4041; // 0xfc2 JumpB
	var_258_bool = 0; var_259_object = Obj(); // 0xfc3 PushV
	var_259_object = var_1_object; // 0xfc4 MovT
	func_8956(var_259_object); // 0xfc5 Call
	if(var_258_bool == 0) goto Label_4041; // 0xfc7 JumpB
	var_251_bool = 1; // 0xfc8 MovB
	
Label_4041:
	if(var_251_bool == 0) goto Label_4049; // 0xfc9 JumpB
	var_260_bool = 0; var_261_object = Obj(); // 0xfca PushV
	var_261_object = var_1_object; // 0xfcb MovT
	func_8968(var_261_object); // 0xfcc Call
	var_262_bool = var_260_bool == 0; // 0xfce Not
	if(var_262_bool == 0) goto Label_4049; // 0xfcf JumpB
	var_250_bool = 1; // 0xfd0 MovB
	
Label_4049:
	if(var_250_bool == 0) goto Label_4055; // 0xfd1 JumpB
	var_263_int = 9005; // 0xfd2 PushI
	var_264_int = 9877; // 0xfd3 PushI
	var_265_int = 9876; // 0xfd4 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0xfd5 TObjFunc
	
Label_4055:
	var_266_bool = 0; // 0xfd7 PushV
	var_266_bool = 0; // 0xfd8 MovB
	var_267_bool = 0; var_268_object = Obj(); // 0xfd9 PushV
	var_268_object = var_1_object; // 0xfda MovT
	func_9028(var_268_object); // 0xfdb Call
	if(var_267_bool == 0) goto Label_4068; // 0xfdd JumpB
	var_273_bool = 0; var_274_object = Obj(); // 0xfde PushV
	var_274_object = var_1_object; // 0xfdf MovT
	func_9016(var_274_object); // 0xfe0 Call
	if(var_273_bool == 0) goto Label_4068; // 0xfe2 JumpB
	var_266_bool = 1; // 0xfe3 MovB
	
Label_4068:
	if(var_266_bool == 0) goto Label_4074; // 0xfe4 JumpB
	var_279_int = 9008; // 0xfe5 PushI
	var_280_int = 9880; // 0xfe6 PushI
	var_281_int = 9879; // 0xfe7 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xfe8 TObjFunc
	
Label_4074:
	var_282_bool = 0; // 0xfea PushV
	var_282_bool = 0; // 0xfeb MovB
	var_283_bool = 0; var_284_object = Obj(); // 0xfec PushV
	var_284_object = var_1_object; // 0xfed MovT
	func_9040(var_284_object); // 0xfee Call
	if(var_283_bool == 0) goto Label_4087; // 0xff0 JumpB
	var_289_bool = 0; var_290_object = Obj(); // 0xff1 PushV
	var_290_object = var_1_object; // 0xff2 MovT
	func_9052(var_290_object); // 0xff3 Call
	if(var_289_bool == 0) goto Label_4087; // 0xff5 JumpB
	var_282_bool = 1; // 0xff6 MovB
	
Label_4087:
	if(var_282_bool == 0) goto Label_4093; // 0xff7 JumpB
	var_295_int = 10218; // 0xff8 PushI
	var_296_int = 11265; // 0xff9 PushI
	var_297_int = 11264; // 0xffa PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0xffb TObjFunc
	
Label_4093:
	var_298_bool = 0; // 0xffd PushV
	var_298_bool = 0; // 0xffe MovB
	var_299_bool = 0; var_300_object = Obj(); // 0xfff PushV
	var_300_object = var_1_object; // 0x1000 MovT
	func_9076(var_300_object); // 0x1001 Call
	if(var_299_bool == 0) goto Label_4106; // 0x1003 JumpB
	var_305_bool = 0; var_306_object = Obj(); // 0x1004 PushV
	var_306_object = var_1_object; // 0x1005 MovT
	func_9064(var_306_object); // 0x1006 Call
	if(var_305_bool == 0) goto Label_4106; // 0x1008 JumpB
	var_298_bool = 1; // 0x1009 MovB
	
Label_4106:
	if(var_298_bool == 0) goto Label_4112; // 0x100a JumpB
	var_311_int = 10373; // 0x100b PushI
	var_312_int = 11439; // 0x100c PushI
	var_313_int = 11438; // 0x100d PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x100e TObjFunc
	
Label_4112:
	var_314_int = 8975; // 0x1010 PushI
	var_315_int = 9792; // 0x1011 PushI
	var_316_int = 9844; // 0x1012 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x1013 TObjFunc
	var_317_int = 8976; // 0x1015 PushI
	var_318_int = 9815; // 0x1016 PushI
	var_319_int = 9845; // 0x1017 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x1018 TObjFunc
	var_320_int = 9020; // 0x101a PushI
	var_321_int = 9890; // 0x101b PushI
	var_322_int = 9892; // 0x101c PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x101d TObjFunc
	var_323_int = 11139; // 0x101f PushI
	var_324_int = -1; // 0x1020 PushI
	var_325_int = 12328; // 0x1021 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x1022 TObjFunc
	return 0; // 0x1024 Return
	
Label_4133:
	var_326_int = 9815; // 0x1025 PushI
	var_327_bool = var_40_string == var_326_int; // 0x1026 Eq
	if(var_327_bool == 0) goto Label_4166; // 0x1027 JumpB
	var_328_string = ""; // 0x1028 PushV
	var_328_string = "Neutral"; // 0x1029 MovS
	func_3846(var_41_bool, var_328_string); // 0x102a Call
	var_329_int = 8949; // 0x102c PushI
	SetMessage(var_329_int); // 0x102d TObjFunc
	ClearReplies(); // 0x102f TObjFunc
	var_330_int = 8950; // 0x1031 PushI
	var_331_int = 9817; // 0x1032 PushI
	var_332_int = 9816; // 0x1033 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x1034 TObjFunc
	var_333_int = 8963; // 0x1036 PushI
	var_334_int = 9832; // 0x1037 PushI
	var_335_int = 9829; // 0x1038 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x1039 TObjFunc
	var_336_int = 8964; // 0x103b PushI
	var_337_int = 9832; // 0x103c PushI
	var_338_int = 9831; // 0x103d PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x103e TObjFunc
	var_339_int = 8972; // 0x1040 PushI
	var_340_int = 9841; // 0x1041 PushI
	var_341_int = 9840; // 0x1042 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x1043 TObjFunc
	return 0; // 0x1045 Return
	
Label_4166:
	var_342_int = 9841; // 0x1046 PushI
	var_343_bool = var_40_string == var_342_int; // 0x1047 Eq
	if(var_343_bool == 0) goto Label_4184; // 0x1048 JumpB
	var_344_string = ""; // 0x1049 PushV
	var_344_string = "Neutral"; // 0x104a MovS
	func_3846(var_41_bool, var_344_string); // 0x104b Call
	var_345_int = 8973; // 0x104d PushI
	SetMessage(var_345_int); // 0x104e TObjFunc
	ClearReplies(); // 0x1050 TObjFunc
	var_346_int = 8974; // 0x1052 PushI
	var_347_int = 9817; // 0x1053 PushI
	var_348_int = 9842; // 0x1054 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x1055 TObjFunc
	return 0; // 0x1057 Return
	
Label_4184:
	var_349_int = 9832; // 0x1058 PushI
	var_350_bool = var_40_string == var_349_int; // 0x1059 Eq
	if(var_350_bool == 0) goto Label_4207; // 0x105a JumpB
	var_351_string = ""; // 0x105b PushV
	var_351_string = "Neutral"; // 0x105c MovS
	func_3846(var_41_bool, var_351_string); // 0x105d Call
	var_352_int = 8965; // 0x105f PushI
	SetMessage(var_352_int); // 0x1060 TObjFunc
	ClearReplies(); // 0x1062 TObjFunc
	var_353_int = 8966; // 0x1064 PushI
	var_354_int = 9834; // 0x1065 PushI
	var_355_int = 9833; // 0x1066 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x1067 TObjFunc
	var_356_int = 8971; // 0x1069 PushI
	var_357_int = 9834; // 0x106a PushI
	var_358_int = 9838; // 0x106b PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x106c TObjFunc
	return 0; // 0x106e Return
	
Label_4207:
	var_359_int = 9834; // 0x106f PushI
	var_360_bool = var_40_string == var_359_int; // 0x1070 Eq
	if(var_360_bool == 0) goto Label_4230; // 0x1071 JumpB
	var_361_string = ""; // 0x1072 PushV
	var_361_string = "Rage"; // 0x1073 MovS
	func_3846(var_41_bool, var_361_string); // 0x1074 Call
	var_362_int = 8967; // 0x1076 PushI
	SetMessage(var_362_int); // 0x1077 TObjFunc
	ClearReplies(); // 0x1079 TObjFunc
	var_363_int = 8968; // 0x107b PushI
	var_364_int = 9836; // 0x107c PushI
	var_365_int = 9835; // 0x107d PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x107e TObjFunc
	var_366_int = 8970; // 0x1080 PushI
	var_367_int = -1; // 0x1081 PushI
	var_368_int = 9837; // 0x1082 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x1083 TObjFunc
	return 0; // 0x1085 Return
	
Label_4230:
	var_369_int = 9836; // 0x1086 PushI
	var_370_bool = var_40_string == var_369_int; // 0x1087 Eq
	if(var_370_bool == 0) goto Label_4243; // 0x1088 JumpB
	var_371_string = ""; // 0x1089 PushV
	var_371_string = "Neutral"; // 0x108a MovS
	func_3846(var_41_bool, var_371_string); // 0x108b Call
	var_372_int = 8969; // 0x108d PushI
	SetMessage(var_372_int); // 0x108e TObjFunc
	ClearReplies(); // 0x1090 TObjFunc
	return 0; // 0x1092 Return
	
Label_4243:
	var_373_int = 9817; // 0x1093 PushI
	var_374_bool = var_40_string == var_373_int; // 0x1094 Eq
	if(var_374_bool == 0) goto Label_4271; // 0x1095 JumpB
	var_375_string = ""; // 0x1096 PushV
	var_375_string = "Neutral"; // 0x1097 MovS
	func_3846(var_41_bool, var_375_string); // 0x1098 Call
	var_376_int = 8951; // 0x109a PushI
	SetMessage(var_376_int); // 0x109b TObjFunc
	ClearReplies(); // 0x109d TObjFunc
	var_377_int = 8952; // 0x109f PushI
	var_378_int = -1; // 0x10a0 PushI
	var_379_int = 9818; // 0x10a1 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x10a2 TObjFunc
	var_380_int = 8953; // 0x10a4 PushI
	var_381_int = -1; // 0x10a5 PushI
	var_382_int = 9819; // 0x10a6 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x10a7 TObjFunc
	var_383_int = 8954; // 0x10a9 PushI
	var_384_int = 9821; // 0x10aa PushI
	var_385_int = 9820; // 0x10ab PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x10ac TObjFunc
	return 0; // 0x10ae Return
	
Label_4271:
	var_386_int = 9821; // 0x10af PushI
	var_387_bool = var_40_string == var_386_int; // 0x10b0 Eq
	if(var_387_bool == 0) goto Label_4294; // 0x10b1 JumpB
	var_388_string = ""; // 0x10b2 PushV
	var_388_string = "Neutral"; // 0x10b3 MovS
	func_3846(var_41_bool, var_388_string); // 0x10b4 Call
	var_389_int = 8955; // 0x10b6 PushI
	SetMessage(var_389_int); // 0x10b7 TObjFunc
	ClearReplies(); // 0x10b9 TObjFunc
	var_390_int = 8956; // 0x10bb PushI
	var_391_int = -1; // 0x10bc PushI
	var_392_int = 9822; // 0x10bd PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x10be TObjFunc
	var_393_int = 8957; // 0x10c0 PushI
	var_394_int = 9824; // 0x10c1 PushI
	var_395_int = 9823; // 0x10c2 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x10c3 TObjFunc
	return 0; // 0x10c5 Return
	
Label_4294:
	var_396_int = 9824; // 0x10c6 PushI
	var_397_bool = var_40_string == var_396_int; // 0x10c7 Eq
	if(var_397_bool == 0) goto Label_4317; // 0x10c8 JumpB
	var_398_string = ""; // 0x10c9 PushV
	var_398_string = "Neutral"; // 0x10ca MovS
	func_3846(var_41_bool, var_398_string); // 0x10cb Call
	var_399_int = 8958; // 0x10cd PushI
	SetMessage(var_399_int); // 0x10ce TObjFunc
	ClearReplies(); // 0x10d0 TObjFunc
	var_400_int = 8959; // 0x10d2 PushI
	var_401_int = 9826; // 0x10d3 PushI
	var_402_int = 9825; // 0x10d4 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x10d5 TObjFunc
	var_403_int = 8962; // 0x10d7 PushI
	var_404_int = -1; // 0x10d8 PushI
	var_405_int = 9828; // 0x10d9 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x10da TObjFunc
	return 0; // 0x10dc Return
	
Label_4317:
	var_406_int = 9826; // 0x10dd PushI
	var_407_bool = var_40_string == var_406_int; // 0x10de Eq
	if(var_407_bool == 0) goto Label_4335; // 0x10df JumpB
	var_408_string = ""; // 0x10e0 PushV
	var_408_string = "Neutral"; // 0x10e1 MovS
	func_3846(var_41_bool, var_408_string); // 0x10e2 Call
	var_409_int = 8960; // 0x10e4 PushI
	SetMessage(var_409_int); // 0x10e5 TObjFunc
	ClearReplies(); // 0x10e7 TObjFunc
	var_410_int = 8961; // 0x10e9 PushI
	var_411_int = -1; // 0x10ea PushI
	var_412_int = 9827; // 0x10eb PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x10ec TObjFunc
	return 0; // 0x10ee Return
	
Label_4335:
	var_413_int = 9792; // 0x10ef PushI
	var_414_bool = var_40_string == var_413_int; // 0x10f0 Eq
	if(var_414_bool == 0) goto Label_4383; // 0x10f1 JumpB
	var_415_string = ""; // 0x10f2 PushV
	var_415_string = "Neutral"; // 0x10f3 MovS
	func_3846(var_41_bool, var_415_string); // 0x10f4 Call
	var_416_int = 8927; // 0x10f6 PushI
	SetMessage(var_416_int); // 0x10f7 TObjFunc
	ClearReplies(); // 0x10f9 TObjFunc
	var_417_int = 8928; // 0x10fb PushI
	var_418_int = 9794; // 0x10fc PushI
	var_419_int = 9793; // 0x10fd PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x10fe TObjFunc
	var_420_int = 8941; // 0x1100 PushI
	var_421_int = 9808; // 0x1101 PushI
	var_422_int = 9807; // 0x1102 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x1103 TObjFunc
	return 0; // 0x1105 Return
	
Label_4383:
	var_423_int = 11142; // 0x111f PushI
	var_424_bool = var_40_string == var_423_int; // 0x1120 Eq
	if(var_424_bool == 0) goto Label_4406; // 0x1121 JumpB
	var_425_string = ""; // 0x1122 PushV
	var_425_string = "Neutral"; // 0x1123 MovS
	func_3846(var_41_bool, var_425_string); // 0x1124 Call
	var_426_int = 10108; // 0x1126 PushI
	SetMessage(var_426_int); // 0x1127 TObjFunc
	ClearReplies(); // 0x1129 TObjFunc
	var_427_int = 10109; // 0x112b PushI
	var_428_int = 11117; // 0x112c PushI
	var_429_int = 11143; // 0x112d PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x112e TObjFunc
	var_430_int = 10110; // 0x1130 PushI
	var_431_int = 11117; // 0x1131 PushI
	var_432_int = 11145; // 0x1132 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x1133 TObjFunc
	return 0; // 0x1135 Return
	
Label_4406:
	var_433_int = 11117; // 0x1136 PushI
	var_434_bool = var_40_string == var_433_int; // 0x1137 Eq
	if(var_434_bool == 0) goto Label_4429; // 0x1138 JumpB
	var_435_string = ""; // 0x1139 PushV
	var_435_string = "Neutral"; // 0x113a MovS
	func_3846(var_41_bool, var_435_string); // 0x113b Call
	var_436_int = 10087; // 0x113d PushI
	SetMessage(var_436_int); // 0x113e TObjFunc
	ClearReplies(); // 0x1140 TObjFunc
	var_437_int = 10088; // 0x1142 PushI
	var_438_int = 11119; // 0x1143 PushI
	var_439_int = 11118; // 0x1144 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x1145 TObjFunc
	var_440_int = 10105; // 0x1147 PushI
	var_441_int = 11121; // 0x1148 PushI
	var_442_int = 11137; // 0x1149 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x114a TObjFunc
	return 0; // 0x114c Return
	
Label_4429:
	var_443_int = 11119; // 0x114d PushI
	var_444_bool = var_40_string == var_443_int; // 0x114e Eq
	if(var_444_bool == 0) goto Label_4452; // 0x114f JumpB
	var_445_string = ""; // 0x1150 PushV
	var_445_string = "Neutral"; // 0x1151 MovS
	func_3846(var_41_bool, var_445_string); // 0x1152 Call
	var_446_int = 10089; // 0x1154 PushI
	SetMessage(var_446_int); // 0x1155 TObjFunc
	ClearReplies(); // 0x1157 TObjFunc
	var_447_int = 10090; // 0x1159 PushI
	var_448_int = 11121; // 0x115a PushI
	var_449_int = 11120; // 0x115b PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x115c TObjFunc
	var_450_int = 10101; // 0x115e PushI
	var_451_int = 11132; // 0x115f PushI
	var_452_int = 11131; // 0x1160 PushI
	AddReply(var_450_int, var_451_int, var_452_int); // 0x1161 TObjFunc
	return 0; // 0x1163 Return
	
Label_4452:
	var_453_int = 11132; // 0x1164 PushI
	var_454_bool = var_40_string == var_453_int; // 0x1165 Eq
	if(var_454_bool == 0) goto Label_4475; // 0x1166 JumpB
	var_455_string = ""; // 0x1167 PushV
	var_455_string = "Neutral"; // 0x1168 MovS
	func_3846(var_41_bool, var_455_string); // 0x1169 Call
	var_456_int = 10102; // 0x116b PushI
	SetMessage(var_456_int); // 0x116c TObjFunc
	ClearReplies(); // 0x116e TObjFunc
	var_457_int = 10103; // 0x1170 PushI
	var_458_int = 11121; // 0x1171 PushI
	var_459_int = 11133; // 0x1172 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x1173 TObjFunc
	var_460_int = 10104; // 0x1175 PushI
	var_461_int = 11121; // 0x1176 PushI
	var_462_int = 11135; // 0x1177 PushI
	AddReply(var_460_int, var_461_int, var_462_int); // 0x1178 TObjFunc
	return 0; // 0x117a Return
	
Label_4475:
	var_463_int = 11121; // 0x117b PushI
	var_464_bool = var_40_string == var_463_int; // 0x117c Eq
	if(var_464_bool == 0) goto Label_4498; // 0x117d JumpB
	var_465_string = ""; // 0x117e PushV
	var_465_string = "Neutral"; // 0x117f MovS
	func_3846(var_41_bool, var_465_string); // 0x1180 Call
	var_466_int = 10091; // 0x1182 PushI
	SetMessage(var_466_int); // 0x1183 TObjFunc
	ClearReplies(); // 0x1185 TObjFunc
	var_467_int = 10092; // 0x1187 PushI
	var_468_int = 11123; // 0x1188 PushI
	var_469_int = 11122; // 0x1189 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0x118a TObjFunc
	var_470_int = 10097; // 0x118c PushI
	var_471_int = 11128; // 0x118d PushI
	var_472_int = 11127; // 0x118e PushI
	AddReply(var_470_int, var_471_int, var_472_int); // 0x118f TObjFunc
	return 0; // 0x1191 Return
	
Label_4498:
	var_473_int = 11128; // 0x1192 PushI
	var_474_bool = var_40_string == var_473_int; // 0x1193 Eq
	if(var_474_bool == 0) goto Label_4521; // 0x1194 JumpB
	var_475_string = ""; // 0x1195 PushV
	var_475_string = "Neutral"; // 0x1196 MovS
	func_3846(var_41_bool, var_475_string); // 0x1197 Call
	var_476_int = 10098; // 0x1199 PushI
	SetMessage(var_476_int); // 0x119a TObjFunc
	ClearReplies(); // 0x119c TObjFunc
	var_477_int = 10099; // 0x119e PushI
	var_478_int = -1; // 0x119f PushI
	var_479_int = 11129; // 0x11a0 PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x11a1 TObjFunc
	var_480_int = 10100; // 0x11a3 PushI
	var_481_int = -1; // 0x11a4 PushI
	var_482_int = 11130; // 0x11a5 PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x11a6 TObjFunc
	return 0; // 0x11a8 Return
	
Label_4521:
	var_483_int = 11123; // 0x11a9 PushI
	var_484_bool = var_40_string == var_483_int; // 0x11aa Eq
	if(var_484_bool == 0) goto Label_4549; // 0x11ab JumpB
	var_485_string = ""; // 0x11ac PushV
	var_485_string = "Neutral"; // 0x11ad MovS
	func_3846(var_41_bool, var_485_string); // 0x11ae Call
	var_486_int = 10093; // 0x11b0 PushI
	SetMessage(var_486_int); // 0x11b1 TObjFunc
	ClearReplies(); // 0x11b3 TObjFunc
	var_487_int = 10094; // 0x11b5 PushI
	var_488_int = -1; // 0x11b6 PushI
	var_489_int = 11124; // 0x11b7 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0x11b8 TObjFunc
	var_490_int = 10095; // 0x11ba PushI
	var_491_int = -1; // 0x11bb PushI
	var_492_int = 11125; // 0x11bc PushI
	AddReply(var_490_int, var_491_int, var_492_int); // 0x11bd TObjFunc
	var_493_int = 10096; // 0x11bf PushI
	var_494_int = -1; // 0x11c0 PushI
	var_495_int = 11126; // 0x11c1 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x11c2 TObjFunc
	return 0; // 0x11c4 Return
	
Label_4549:
	var_496_int = 9808; // 0x11c5 PushI
	var_497_bool = var_40_string == var_496_int; // 0x11c6 Eq
	if(var_497_bool == 0) goto Label_4567; // 0x11c7 JumpB
	var_498_string = ""; // 0x11c8 PushV
	var_498_string = "Neutral"; // 0x11c9 MovS
	func_3846(var_41_bool, var_498_string); // 0x11ca Call
	var_499_int = 8942; // 0x11cc PushI
	SetMessage(var_499_int); // 0x11cd TObjFunc
	ClearReplies(); // 0x11cf TObjFunc
	var_500_int = 8943; // 0x11d1 PushI
	var_501_int = 9810; // 0x11d2 PushI
	var_502_int = 9809; // 0x11d3 PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x11d4 TObjFunc
	return 0; // 0x11d6 Return
	
Label_4567:
	var_503_int = 9810; // 0x11d7 PushI
	var_504_bool = var_40_string == var_503_int; // 0x11d8 Eq
	if(var_504_bool == 0) goto Label_4590; // 0x11d9 JumpB
	var_505_string = ""; // 0x11da PushV
	var_505_string = "Neutral"; // 0x11db MovS
	func_3846(var_41_bool, var_505_string); // 0x11dc Call
	var_506_int = 8944; // 0x11de PushI
	SetMessage(var_506_int); // 0x11df TObjFunc
	ClearReplies(); // 0x11e1 TObjFunc
	var_507_int = 8945; // 0x11e3 PushI
	var_508_int = -1; // 0x11e4 PushI
	var_509_int = 9811; // 0x11e5 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0x11e6 TObjFunc
	var_510_int = 8946; // 0x11e8 PushI
	var_511_int = 9813; // 0x11e9 PushI
	var_512_int = 9812; // 0x11ea PushI
	AddReply(var_510_int, var_511_int, var_512_int); // 0x11eb TObjFunc
	return 0; // 0x11ed Return
	
Label_4590:
	var_513_int = 9813; // 0x11ee PushI
	var_514_bool = var_40_string == var_513_int; // 0x11ef Eq
	if(var_514_bool == 0) goto Label_4608; // 0x11f0 JumpB
	var_515_string = ""; // 0x11f1 PushV
	var_515_string = "Neutral"; // 0x11f2 MovS
	func_3846(var_41_bool, var_515_string); // 0x11f3 Call
	var_516_int = 8947; // 0x11f5 PushI
	SetMessage(var_516_int); // 0x11f6 TObjFunc
	ClearReplies(); // 0x11f8 TObjFunc
	var_517_int = 8948; // 0x11fa PushI
	var_518_int = -1; // 0x11fb PushI
	var_519_int = 9814; // 0x11fc PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0x11fd TObjFunc
	return 0; // 0x11ff Return
	
Label_4608:
	var_520_int = 9794; // 0x1200 PushI
	var_521_bool = var_40_string == var_520_int; // 0x1201 Eq
	if(var_521_bool == 0) goto Label_4631; // 0x1202 JumpB
	var_522_string = ""; // 0x1203 PushV
	var_522_string = "Neutral"; // 0x1204 MovS
	func_3846(var_41_bool, var_522_string); // 0x1205 Call
	var_523_int = 8929; // 0x1207 PushI
	SetMessage(var_523_int); // 0x1208 TObjFunc
	ClearReplies(); // 0x120a TObjFunc
	var_524_int = 8930; // 0x120c PushI
	var_525_int = 9796; // 0x120d PushI
	var_526_int = 9795; // 0x120e PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0x120f TObjFunc
	var_527_int = 8938; // 0x1211 PushI
	var_528_int = 9804; // 0x1212 PushI
	var_529_int = 9803; // 0x1213 PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x1214 TObjFunc
	return 0; // 0x1216 Return
	
Label_4631:
	var_530_int = 9804; // 0x1217 PushI
	var_531_bool = var_40_string == var_530_int; // 0x1218 Eq
	if(var_531_bool == 0) goto Label_4649; // 0x1219 JumpB
	var_532_string = ""; // 0x121a PushV
	var_532_string = "Neutral"; // 0x121b MovS
	func_3846(var_41_bool, var_532_string); // 0x121c Call
	var_533_int = 8939; // 0x121e PushI
	SetMessage(var_533_int); // 0x121f TObjFunc
	ClearReplies(); // 0x1221 TObjFunc
	var_534_int = 8940; // 0x1223 PushI
	var_535_int = 9796; // 0x1224 PushI
	var_536_int = 9805; // 0x1225 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0x1226 TObjFunc
	return 0; // 0x1228 Return
	
Label_4649:
	var_537_int = 9796; // 0x1229 PushI
	var_538_bool = var_40_string == var_537_int; // 0x122a Eq
	if(var_538_bool == 0) goto Label_4677; // 0x122b JumpB
	var_539_string = ""; // 0x122c PushV
	var_539_string = "Neutral"; // 0x122d MovS
	func_3846(var_41_bool, var_539_string); // 0x122e Call
	var_540_int = 8931; // 0x1230 PushI
	SetMessage(var_540_int); // 0x1231 TObjFunc
	ClearReplies(); // 0x1233 TObjFunc
	var_541_int = 8932; // 0x1235 PushI
	var_542_int = -1; // 0x1236 PushI
	var_543_int = 9797; // 0x1237 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0x1238 TObjFunc
	var_544_int = 8933; // 0x123a PushI
	var_545_int = -1; // 0x123b PushI
	var_546_int = 9798; // 0x123c PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x123d TObjFunc
	var_547_int = 8934; // 0x123f PushI
	var_548_int = 9800; // 0x1240 PushI
	var_549_int = 9799; // 0x1241 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0x1242 TObjFunc
	return 0; // 0x1244 Return
	
Label_4677:
	var_550_int = 9800; // 0x1245 PushI
	var_551_bool = var_40_string == var_550_int; // 0x1246 Eq
	if(var_551_bool == 0) goto Label_4700; // 0x1247 JumpB
	var_552_string = ""; // 0x1248 PushV
	var_552_string = "Neutral"; // 0x1249 MovS
	func_3846(var_41_bool, var_552_string); // 0x124a Call
	var_553_int = 8935; // 0x124c PushI
	SetMessage(var_553_int); // 0x124d TObjFunc
	ClearReplies(); // 0x124f TObjFunc
	var_554_int = 8936; // 0x1251 PushI
	var_555_int = -1; // 0x1252 PushI
	var_556_int = 9801; // 0x1253 PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0x1254 TObjFunc
	var_557_int = 8937; // 0x1256 PushI
	var_558_int = -1; // 0x1257 PushI
	var_559_int = 9802; // 0x1258 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x1259 TObjFunc
	return 0; // 0x125b Return
	
Label_4700:
	var_560_int = 11439; // 0x125c PushI
	var_561_bool = var_40_string == var_560_int; // 0x125d Eq
	if(var_561_bool == 0) goto Label_4723; // 0x125e JumpB
	var_562_string = ""; // 0x125f PushV
	var_562_string = "Neutral"; // 0x1260 MovS
	func_3846(var_41_bool, var_562_string); // 0x1261 Call
	var_563_int = 10374; // 0x1263 PushI
	SetMessage(var_563_int); // 0x1264 TObjFunc
	ClearReplies(); // 0x1266 TObjFunc
	var_564_int = 10375; // 0x1268 PushI
	var_565_int = 11442; // 0x1269 PushI
	var_566_int = 11440; // 0x126a PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0x126b TObjFunc
	var_567_int = 10376; // 0x126d PushI
	var_568_int = -1; // 0x126e PushI
	var_569_int = 11441; // 0x126f PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0x1270 TObjFunc
	return 0; // 0x1272 Return
	
Label_4723:
	var_570_int = 11442; // 0x1273 PushI
	var_571_bool = var_40_string == var_570_int; // 0x1274 Eq
	if(var_571_bool == 0) goto Label_4746; // 0x1275 JumpB
	var_572_string = ""; // 0x1276 PushV
	var_572_string = "Neutral"; // 0x1277 MovS
	func_3846(var_41_bool, var_572_string); // 0x1278 Call
	var_573_int = 10377; // 0x127a PushI
	SetMessage(var_573_int); // 0x127b TObjFunc
	ClearReplies(); // 0x127d TObjFunc
	var_574_int = 10378; // 0x127f PushI
	var_575_int = 11446; // 0x1280 PushI
	var_576_int = 11443; // 0x1281 PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0x1282 TObjFunc
	var_577_int = 10379; // 0x1284 PushI
	var_578_int = 11445; // 0x1285 PushI
	var_579_int = 11444; // 0x1286 PushI
	AddReply(var_577_int, var_578_int, var_579_int); // 0x1287 TObjFunc
	return 0; // 0x1289 Return
	
Label_4746:
	var_580_int = 11445; // 0x128a PushI
	var_581_bool = var_40_string == var_580_int; // 0x128b Eq
	if(var_581_bool == 0) goto Label_4764; // 0x128c JumpB
	var_582_string = ""; // 0x128d PushV
	var_582_string = "Neutral"; // 0x128e MovS
	func_3846(var_41_bool, var_582_string); // 0x128f Call
	var_583_int = 10380; // 0x1291 PushI
	SetMessage(var_583_int); // 0x1292 TObjFunc
	ClearReplies(); // 0x1294 TObjFunc
	var_584_int = 10383; // 0x1296 PushI
	var_585_int = -1; // 0x1297 PushI
	var_586_int = 11448; // 0x1298 PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0x1299 TObjFunc
	return 0; // 0x129b Return
	
Label_4764:
	var_587_int = 11446; // 0x129c PushI
	var_588_bool = var_40_string == var_587_int; // 0x129d Eq
	if(var_588_bool == 0) goto Label_4782; // 0x129e JumpB
	var_589_string = ""; // 0x129f PushV
	var_589_string = "Neutral"; // 0x12a0 MovS
	func_3846(var_41_bool, var_589_string); // 0x12a1 Call
	var_590_int = 10381; // 0x12a3 PushI
	SetMessage(var_590_int); // 0x12a4 TObjFunc
	ClearReplies(); // 0x12a6 TObjFunc
	var_591_int = 10382; // 0x12a8 PushI
	var_592_int = -1; // 0x12a9 PushI
	var_593_int = 11447; // 0x12aa PushI
	AddReply(var_591_int, var_592_int, var_593_int); // 0x12ab TObjFunc
	return 0; // 0x12ad Return
	
Label_4782:
	var_594_int = 11265; // 0x12ae PushI
	var_595_bool = var_40_string == var_594_int; // 0x12af Eq
	if(var_595_bool == 0) goto Label_4810; // 0x12b0 JumpB
	var_596_string = ""; // 0x12b1 PushV
	var_596_string = "Neutral"; // 0x12b2 MovS
	func_3846(var_41_bool, var_596_string); // 0x12b3 Call
	var_597_int = 10219; // 0x12b5 PushI
	SetMessage(var_597_int); // 0x12b6 TObjFunc
	ClearReplies(); // 0x12b8 TObjFunc
	var_598_int = 10361; // 0x12ba PushI
	var_599_int = 11410; // 0x12bb PushI
	var_600_int = 11423; // 0x12bc PushI
	AddReply(var_598_int, var_599_int, var_600_int); // 0x12bd TObjFunc
	var_601_int = 10347; // 0x12bf PushI
	var_602_int = 11410; // 0x12c0 PushI
	var_603_int = 11408; // 0x12c1 PushI
	AddReply(var_601_int, var_602_int, var_603_int); // 0x12c2 TObjFunc
	var_604_int = 10348; // 0x12c4 PushI
	var_605_int = 11410; // 0x12c5 PushI
	var_606_int = 11409; // 0x12c6 PushI
	AddReply(var_604_int, var_605_int, var_606_int); // 0x12c7 TObjFunc
	return 0; // 0x12c9 Return
	
Label_4810:
	var_607_int = 11410; // 0x12ca PushI
	var_608_bool = var_40_string == var_607_int; // 0x12cb Eq
	if(var_608_bool == 0) goto Label_4833; // 0x12cc JumpB
	var_609_string = ""; // 0x12cd PushV
	var_609_string = "Neutral"; // 0x12ce MovS
	func_3846(var_41_bool, var_609_string); // 0x12cf Call
	var_610_int = 10349; // 0x12d1 PushI
	SetMessage(var_610_int); // 0x12d2 TObjFunc
	ClearReplies(); // 0x12d4 TObjFunc
	var_611_int = 10350; // 0x12d6 PushI
	var_612_int = 11413; // 0x12d7 PushI
	var_613_int = 11412; // 0x12d8 PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0x12d9 TObjFunc
	var_614_int = 10362; // 0x12db PushI
	var_615_int = 11426; // 0x12dc PushI
	var_616_int = 11425; // 0x12dd PushI
	AddReply(var_614_int, var_615_int, var_616_int); // 0x12de TObjFunc
	return 0; // 0x12e0 Return
	
Label_4833:
	var_617_int = 11426; // 0x12e1 PushI
	var_618_bool = var_40_string == var_617_int; // 0x12e2 Eq
	if(var_618_bool == 0) goto Label_4851; // 0x12e3 JumpB
	var_619_string = ""; // 0x12e4 PushV
	var_619_string = "Neutral"; // 0x12e5 MovS
	func_3846(var_41_bool, var_619_string); // 0x12e6 Call
	var_620_int = 10363; // 0x12e8 PushI
	SetMessage(var_620_int); // 0x12e9 TObjFunc
	ClearReplies(); // 0x12eb TObjFunc
	var_621_int = 10364; // 0x12ed PushI
	var_622_int = 11428; // 0x12ee PushI
	var_623_int = 11427; // 0x12ef PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x12f0 TObjFunc
	return 0; // 0x12f2 Return
	
Label_4851:
	var_624_int = 11428; // 0x12f3 PushI
	var_625_bool = var_40_string == var_624_int; // 0x12f4 Eq
	if(var_625_bool == 0) goto Label_4869; // 0x12f5 JumpB
	var_626_string = ""; // 0x12f6 PushV
	var_626_string = "Neutral"; // 0x12f7 MovS
	func_3846(var_41_bool, var_626_string); // 0x12f8 Call
	var_627_int = 10365; // 0x12fa PushI
	SetMessage(var_627_int); // 0x12fb TObjFunc
	ClearReplies(); // 0x12fd TObjFunc
	var_628_int = 10366; // 0x12ff PushI
	var_629_int = 11415; // 0x1300 PushI
	var_630_int = 11429; // 0x1301 PushI
	AddReply(var_628_int, var_629_int, var_630_int); // 0x1302 TObjFunc
	return 0; // 0x1304 Return
	
Label_4869:
	var_631_int = 11413; // 0x1305 PushI
	var_632_bool = var_40_string == var_631_int; // 0x1306 Eq
	if(var_632_bool == 0) goto Label_4887; // 0x1307 JumpB
	var_633_string = ""; // 0x1308 PushV
	var_633_string = "Neutral"; // 0x1309 MovS
	func_3846(var_41_bool, var_633_string); // 0x130a Call
	var_634_int = 10351; // 0x130c PushI
	SetMessage(var_634_int); // 0x130d TObjFunc
	ClearReplies(); // 0x130f TObjFunc
	var_635_int = 10352; // 0x1311 PushI
	var_636_int = 11415; // 0x1312 PushI
	var_637_int = 11414; // 0x1313 PushI
	AddReply(var_635_int, var_636_int, var_637_int); // 0x1314 TObjFunc
	return 0; // 0x1316 Return
	
Label_4887:
	var_638_int = 11415; // 0x1317 PushI
	var_639_bool = var_40_string == var_638_int; // 0x1318 Eq
	if(var_639_bool == 0) goto Label_4905; // 0x1319 JumpB
	var_640_string = ""; // 0x131a PushV
	var_640_string = "Neutral"; // 0x131b MovS
	func_3846(var_41_bool, var_640_string); // 0x131c Call
	var_641_int = 10353; // 0x131e PushI
	SetMessage(var_641_int); // 0x131f TObjFunc
	ClearReplies(); // 0x1321 TObjFunc
	var_642_int = 10354; // 0x1323 PushI
	var_643_int = 11417; // 0x1324 PushI
	var_644_int = 11416; // 0x1325 PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x1326 TObjFunc
	return 0; // 0x1328 Return
	
Label_4905:
	var_645_int = 11417; // 0x1329 PushI
	var_646_bool = var_40_string == var_645_int; // 0x132a Eq
	if(var_646_bool == 0) goto Label_4923; // 0x132b JumpB
	var_647_string = ""; // 0x132c PushV
	var_647_string = "Neutral"; // 0x132d MovS
	func_3846(var_41_bool, var_647_string); // 0x132e Call
	var_648_int = 10355; // 0x1330 PushI
	SetMessage(var_648_int); // 0x1331 TObjFunc
	ClearReplies(); // 0x1333 TObjFunc
	var_649_int = 10356; // 0x1335 PushI
	var_650_int = 11419; // 0x1336 PushI
	var_651_int = 11418; // 0x1337 PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x1338 TObjFunc
	return 0; // 0x133a Return
	
Label_4923:
	var_652_int = 11419; // 0x133b PushI
	var_653_bool = var_40_string == var_652_int; // 0x133c Eq
	if(var_653_bool == 0) goto Label_4946; // 0x133d JumpB
	var_654_string = ""; // 0x133e PushV
	var_654_string = "Neutral"; // 0x133f MovS
	func_3846(var_41_bool, var_654_string); // 0x1340 Call
	var_655_int = 10357; // 0x1342 PushI
	SetMessage(var_655_int); // 0x1343 TObjFunc
	ClearReplies(); // 0x1345 TObjFunc
	var_656_int = 10358; // 0x1347 PushI
	var_657_int = 11421; // 0x1348 PushI
	var_658_int = 11420; // 0x1349 PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0x134a TObjFunc
	var_659_int = 10367; // 0x134c PushI
	var_660_int = 11432; // 0x134d PushI
	var_661_int = 11431; // 0x134e PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x134f TObjFunc
	return 0; // 0x1351 Return
	
Label_4946:
	var_662_int = 11432; // 0x1352 PushI
	var_663_bool = var_40_string == var_662_int; // 0x1353 Eq
	if(var_663_bool == 0) goto Label_4964; // 0x1354 JumpB
	var_664_string = ""; // 0x1355 PushV
	var_664_string = "Neutral"; // 0x1356 MovS
	func_3846(var_41_bool, var_664_string); // 0x1357 Call
	var_665_int = 10368; // 0x1359 PushI
	SetMessage(var_665_int); // 0x135a TObjFunc
	ClearReplies(); // 0x135c TObjFunc
	var_666_int = 10369; // 0x135e PushI
	var_667_int = 11434; // 0x135f PushI
	var_668_int = 11433; // 0x1360 PushI
	AddReply(var_666_int, var_667_int, var_668_int); // 0x1361 TObjFunc
	return 0; // 0x1363 Return
	
Label_4964:
	var_669_int = 11421; // 0x1364 PushI
	var_670_bool = var_40_string == var_669_int; // 0x1365 Eq
	if(var_670_bool == 0) goto Label_4982; // 0x1366 JumpB
	var_671_string = ""; // 0x1367 PushV
	var_671_string = "Neutral"; // 0x1368 MovS
	func_3846(var_41_bool, var_671_string); // 0x1369 Call
	var_672_int = 10359; // 0x136b PushI
	SetMessage(var_672_int); // 0x136c TObjFunc
	ClearReplies(); // 0x136e TObjFunc
	var_673_int = 10360; // 0x1370 PushI
	var_674_int = 11434; // 0x1371 PushI
	var_675_int = 11422; // 0x1372 PushI
	AddReply(var_673_int, var_674_int, var_675_int); // 0x1373 TObjFunc
	return 0; // 0x1375 Return
	
Label_4982:
	var_676_int = 11434; // 0x1376 PushI
	var_677_bool = var_40_string == var_676_int; // 0x1377 Eq
	if(var_677_bool == 0) goto Label_5005; // 0x1378 JumpB
	var_678_string = ""; // 0x1379 PushV
	var_678_string = "Neutral"; // 0x137a MovS
	func_3846(var_41_bool, var_678_string); // 0x137b Call
	var_679_int = 10370; // 0x137d PushI
	SetMessage(var_679_int); // 0x137e TObjFunc
	ClearReplies(); // 0x1380 TObjFunc
	var_680_int = 10371; // 0x1382 PushI
	var_681_int = -1; // 0x1383 PushI
	var_682_int = 11436; // 0x1384 PushI
	AddReply(var_680_int, var_681_int, var_682_int); // 0x1385 TObjFunc
	var_683_int = 10372; // 0x1387 PushI
	var_684_int = -1; // 0x1388 PushI
	var_685_int = 11437; // 0x1389 PushI
	AddReply(var_683_int, var_684_int, var_685_int); // 0x138a TObjFunc
	return 0; // 0x138c Return
	
Label_5005:
	var_686_int = 9880; // 0x138d PushI
	var_687_bool = var_40_string == var_686_int; // 0x138e Eq
	if(var_687_bool == 0) goto Label_5023; // 0x138f JumpB
	var_688_string = ""; // 0x1390 PushV
	var_688_string = "Neutral"; // 0x1391 MovS
	func_3846(var_41_bool, var_688_string); // 0x1392 Call
	var_689_int = 9009; // 0x1394 PushI
	SetMessage(var_689_int); // 0x1395 TObjFunc
	ClearReplies(); // 0x1397 TObjFunc
	var_690_int = 9014; // 0x1399 PushI
	var_691_int = 9887; // 0x139a PushI
	var_692_int = 9886; // 0x139b PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0x139c TObjFunc
	return 0; // 0x139e Return
	
Label_5023:
	var_693_int = 9887; // 0x139f PushI
	var_694_bool = var_40_string == var_693_int; // 0x13a0 Eq
	if(var_694_bool == 0) goto Label_5051; // 0x13a1 JumpB
	var_695_string = ""; // 0x13a2 PushV
	var_695_string = "Neutral"; // 0x13a3 MovS
	func_3846(var_41_bool, var_695_string); // 0x13a4 Call
	var_696_int = 9015; // 0x13a6 PushI
	SetMessage(var_696_int); // 0x13a7 TObjFunc
	ClearReplies(); // 0x13a9 TObjFunc
	var_697_int = 9016; // 0x13ab PushI
	var_698_int = 9890; // 0x13ac PushI
	var_699_int = 9888; // 0x13ad PushI
	AddReply(var_697_int, var_698_int, var_699_int); // 0x13ae TObjFunc
	var_700_int = 9017; // 0x13b0 PushI
	var_701_int = 9890; // 0x13b1 PushI
	var_702_int = 9889; // 0x13b2 PushI
	AddReply(var_700_int, var_701_int, var_702_int); // 0x13b3 TObjFunc
	var_703_int = 9022; // 0x13b5 PushI
	var_704_int = 9890; // 0x13b6 PushI
	var_705_int = 9894; // 0x13b7 PushI
	AddReply(var_703_int, var_704_int, var_705_int); // 0x13b8 TObjFunc
	return 0; // 0x13ba Return
	
Label_5051:
	var_706_int = 9890; // 0x13bb PushI
	var_707_bool = var_40_string == var_706_int; // 0x13bc Eq
	if(var_707_bool == 0) goto Label_5069; // 0x13bd JumpB
	var_708_string = ""; // 0x13be PushV
	var_708_string = "Neutral"; // 0x13bf MovS
	func_3846(var_41_bool, var_708_string); // 0x13c0 Call
	var_709_int = 9018; // 0x13c2 PushI
	SetMessage(var_709_int); // 0x13c3 TObjFunc
	ClearReplies(); // 0x13c5 TObjFunc
	var_710_int = 9019; // 0x13c7 PushI
	var_711_int = -1; // 0x13c8 PushI
	var_712_int = 9891; // 0x13c9 PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x13ca TObjFunc
	return 0; // 0x13cc Return
	
Label_5069:
	var_713_int = 9877; // 0x13cd PushI
	var_714_bool = var_40_string == var_713_int; // 0x13ce Eq
	if(var_714_bool == 0) goto Label_5101; // 0x13cf JumpB
	var_715_string = ""; // 0x13d0 PushV
	var_715_string = "Neutral"; // 0x13d1 MovS
	func_3846(var_41_bool, var_715_string); // 0x13d2 Call
	var_716_int = 9006; // 0x13d4 PushI
	SetMessage(var_716_int); // 0x13d5 TObjFunc
	ClearReplies(); // 0x13d7 TObjFunc
	var_717_bool = 0; // 0x13d9 PushV
	var_717_bool = 1; // 0x13da MovB
	var_718_bool = 0; var_719_object = Obj(); // 0x13db PushV
	var_719_object = var_1_object; // 0x13dc MovT
	func_8980(var_719_object); // 0x13dd Call
	if(var_718_bool == 0) goto Label_5094; // 0x13df JumpB
	var_724_bool = 0; var_725_object = Obj(); // 0x13e0 PushV
	var_725_object = var_1_object; // 0x13e1 MovT
	func_8992(var_725_object); // 0x13e2 Call
	if(var_724_bool == 0) goto Label_5094; // 0x13e4 JumpB
	var_717_bool = 0; // 0x13e5 MovB
	
Label_5094:
	if(var_717_bool == 0) goto Label_5100; // 0x13e6 JumpB
	var_726_int = 9007; // 0x13e7 PushI
	var_727_int = -1; // 0x13e8 PushI
	var_728_int = 9878; // 0x13e9 PushI
	AddReply(var_726_int, var_727_int, var_728_int); // 0x13ea TObjFunc
	
Label_5100:
	return 0; // 0x13ec Return
	
Label_5101:
	var_729_int = 9847; // 0x13ed PushI
	var_730_bool = var_40_string == var_729_int; // 0x13ee Eq
	if(var_730_bool == 0) goto Label_5124; // 0x13ef JumpB
	var_731_string = ""; // 0x13f0 PushV
	var_731_string = "Neutral"; // 0x13f1 MovS
	func_3846(var_41_bool, var_731_string); // 0x13f2 Call
	var_732_int = 8978; // 0x13f4 PushI
	SetMessage(var_732_int); // 0x13f5 TObjFunc
	ClearReplies(); // 0x13f7 TObjFunc
	var_733_int = 8979; // 0x13f9 PushI
	var_734_int = 9852; // 0x13fa PushI
	var_735_int = 9848; // 0x13fb PushI
	AddReply(var_733_int, var_734_int, var_735_int); // 0x13fc TObjFunc
	var_736_int = 8980; // 0x13fe PushI
	var_737_int = 9850; // 0x13ff PushI
	var_738_int = 9849; // 0x1400 PushI
	AddReply(var_736_int, var_737_int, var_738_int); // 0x1401 TObjFunc
	return 0; // 0x1403 Return
	
Label_5124:
	var_739_int = 9850; // 0x1404 PushI
	var_740_bool = var_40_string == var_739_int; // 0x1405 Eq
	if(var_740_bool == 0) goto Label_5142; // 0x1406 JumpB
	var_741_string = ""; // 0x1407 PushV
	var_741_string = "Neutral"; // 0x1408 MovS
	func_3846(var_41_bool, var_741_string); // 0x1409 Call
	var_742_int = 8981; // 0x140b PushI
	SetMessage(var_742_int); // 0x140c TObjFunc
	ClearReplies(); // 0x140e TObjFunc
	var_743_int = 8982; // 0x1410 PushI
	var_744_int = -1; // 0x1411 PushI
	var_745_int = 9851; // 0x1412 PushI
	AddReply(var_743_int, var_744_int, var_745_int); // 0x1413 TObjFunc
	return 0; // 0x1415 Return
	
Label_5142:
	var_746_int = 9852; // 0x1416 PushI
	var_747_bool = var_40_string == var_746_int; // 0x1417 Eq
	if(var_747_bool == 0) goto Label_5165; // 0x1418 JumpB
	var_748_string = ""; // 0x1419 PushV
	var_748_string = "Neutral"; // 0x141a MovS
	func_3846(var_41_bool, var_748_string); // 0x141b Call
	var_749_int = 8983; // 0x141d PushI
	SetMessage(var_749_int); // 0x141e TObjFunc
	ClearReplies(); // 0x1420 TObjFunc
	var_750_int = 8984; // 0x1422 PushI
	var_751_int = 9854; // 0x1423 PushI
	var_752_int = 9853; // 0x1424 PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0x1425 TObjFunc
	var_753_int = 8987; // 0x1427 PushI
	var_754_int = 9857; // 0x1428 PushI
	var_755_int = 9856; // 0x1429 PushI
	AddReply(var_753_int, var_754_int, var_755_int); // 0x142a TObjFunc
	return 0; // 0x142c Return
	
Label_5165:
	var_756_int = 9857; // 0x142d PushI
	var_757_bool = var_40_string == var_756_int; // 0x142e Eq
	if(var_757_bool == 0) goto Label_5183; // 0x142f JumpB
	var_758_string = ""; // 0x1430 PushV
	var_758_string = "Neutral"; // 0x1431 MovS
	func_3846(var_41_bool, var_758_string); // 0x1432 Call
	var_759_int = 8988; // 0x1434 PushI
	SetMessage(var_759_int); // 0x1435 TObjFunc
	ClearReplies(); // 0x1437 TObjFunc
	var_760_int = 8989; // 0x1439 PushI
	var_761_int = 9860; // 0x143a PushI
	var_762_int = 9858; // 0x143b PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0x143c TObjFunc
	return 0; // 0x143e Return
	
Label_5183:
	var_763_int = 9860; // 0x143f PushI
	var_764_bool = var_40_string == var_763_int; // 0x1440 Eq
	if(var_764_bool == 0) goto Label_5206; // 0x1441 JumpB
	var_765_string = ""; // 0x1442 PushV
	var_765_string = "Neutral"; // 0x1443 MovS
	func_3846(var_41_bool, var_765_string); // 0x1444 Call
	var_766_int = 8991; // 0x1446 PushI
	SetMessage(var_766_int); // 0x1447 TObjFunc
	ClearReplies(); // 0x1449 TObjFunc
	var_767_int = 8992; // 0x144b PushI
	var_768_int = 9863; // 0x144c PushI
	var_769_int = 9861; // 0x144d PushI
	AddReply(var_767_int, var_768_int, var_769_int); // 0x144e TObjFunc
	var_770_int = 8993; // 0x1450 PushI
	var_771_int = 9865; // 0x1451 PushI
	var_772_int = 9862; // 0x1452 PushI
	AddReply(var_770_int, var_771_int, var_772_int); // 0x1453 TObjFunc
	return 0; // 0x1455 Return
	
Label_5206:
	var_773_int = 9865; // 0x1456 PushI
	var_774_bool = var_40_string == var_773_int; // 0x1457 Eq
	if(var_774_bool == 0) goto Label_5224; // 0x1458 JumpB
	var_775_string = ""; // 0x1459 PushV
	var_775_string = "Neutral"; // 0x145a MovS
	func_3846(var_41_bool, var_775_string); // 0x145b Call
	var_776_int = 8996; // 0x145d PushI
	SetMessage(var_776_int); // 0x145e TObjFunc
	ClearReplies(); // 0x1460 TObjFunc
	var_777_int = 8997; // 0x1462 PushI
	var_778_int = 9859; // 0x1463 PushI
	var_779_int = 9866; // 0x1464 PushI
	AddReply(var_777_int, var_778_int, var_779_int); // 0x1465 TObjFunc
	return 0; // 0x1467 Return
	
Label_5224:
	var_780_int = 9863; // 0x1468 PushI
	var_781_bool = var_40_string == var_780_int; // 0x1469 Eq
	if(var_781_bool == 0) goto Label_5242; // 0x146a JumpB
	var_782_string = ""; // 0x146b PushV
	var_782_string = "Neutral"; // 0x146c MovS
	func_3846(var_41_bool, var_782_string); // 0x146d Call
	var_783_int = 8994; // 0x146f PushI
	SetMessage(var_783_int); // 0x1470 TObjFunc
	ClearReplies(); // 0x1472 TObjFunc
	var_784_int = 8995; // 0x1474 PushI
	var_785_int = 9859; // 0x1475 PushI
	var_786_int = 9864; // 0x1476 PushI
	AddReply(var_784_int, var_785_int, var_786_int); // 0x1477 TObjFunc
	return 0; // 0x1479 Return
	
Label_5242:
	var_787_int = 9854; // 0x147a PushI
	var_788_bool = var_40_string == var_787_int; // 0x147b Eq
	if(var_788_bool == 0) goto Label_5260; // 0x147c JumpB
	var_789_string = ""; // 0x147d PushV
	var_789_string = "Neutral"; // 0x147e MovS
	func_3846(var_41_bool, var_789_string); // 0x147f Call
	var_790_int = 8985; // 0x1481 PushI
	SetMessage(var_790_int); // 0x1482 TObjFunc
	ClearReplies(); // 0x1484 TObjFunc
	var_791_int = 8986; // 0x1486 PushI
	var_792_int = 9859; // 0x1487 PushI
	var_793_int = 9855; // 0x1488 PushI
	AddReply(var_791_int, var_792_int, var_793_int); // 0x1489 TObjFunc
	return 0; // 0x148b Return
	
Label_5260:
	var_794_int = 9859; // 0x148c PushI
	var_795_bool = var_40_string == var_794_int; // 0x148d Eq
	if(var_795_bool == 0) goto Label_5278; // 0x148e JumpB
	var_796_string = ""; // 0x148f PushV
	var_796_string = "Neutral"; // 0x1490 MovS
	func_3846(var_41_bool, var_796_string); // 0x1491 Call
	var_797_int = 8990; // 0x1493 PushI
	SetMessage(var_797_int); // 0x1494 TObjFunc
	ClearReplies(); // 0x1496 TObjFunc
	var_798_int = 8998; // 0x1498 PushI
	var_799_int = 9870; // 0x1499 PushI
	var_800_int = 9869; // 0x149a PushI
	AddReply(var_798_int, var_799_int, var_800_int); // 0x149b TObjFunc
	return 0; // 0x149d Return
	
Label_5278:
	var_801_int = 9870; // 0x149e PushI
	var_802_bool = var_40_string == var_801_int; // 0x149f Eq
	if(var_802_bool == 0) goto Label_5306; // 0x14a0 JumpB
	var_803_string = ""; // 0x14a1 PushV
	var_803_string = "Neutral"; // 0x14a2 MovS
	func_3846(var_41_bool, var_803_string); // 0x14a3 Call
	var_804_int = 8999; // 0x14a5 PushI
	SetMessage(var_804_int); // 0x14a6 TObjFunc
	ClearReplies(); // 0x14a8 TObjFunc
	var_805_int = 9000; // 0x14aa PushI
	var_806_int = 9873; // 0x14ab PushI
	var_807_int = 9871; // 0x14ac PushI
	AddReply(var_805_int, var_806_int, var_807_int); // 0x14ad TObjFunc
	var_808_int = 9011; // 0x14af PushI
	var_809_int = 9883; // 0x14b0 PushI
	var_810_int = 9882; // 0x14b1 PushI
	AddReply(var_808_int, var_809_int, var_810_int); // 0x14b2 TObjFunc
	var_811_int = 11150; // 0x14b4 PushI
	var_812_int = -1; // 0x14b5 PushI
	var_813_int = 12339; // 0x14b6 PushI
	AddReply(var_811_int, var_812_int, var_813_int); // 0x14b7 TObjFunc
	return 0; // 0x14b9 Return
	
Label_5306:
	var_814_int = 9883; // 0x14ba PushI
	var_815_bool = var_40_string == var_814_int; // 0x14bb Eq
	if(var_815_bool == 0) goto Label_5324; // 0x14bc JumpB
	var_816_string = ""; // 0x14bd PushV
	var_816_string = "Neutral"; // 0x14be MovS
	func_3846(var_41_bool, var_816_string); // 0x14bf Call
	var_817_int = 9012; // 0x14c1 PushI
	SetMessage(var_817_int); // 0x14c2 TObjFunc
	ClearReplies(); // 0x14c4 TObjFunc
	var_818_int = 9013; // 0x14c6 PushI
	var_819_int = 9873; // 0x14c7 PushI
	var_820_int = 9884; // 0x14c8 PushI
	AddReply(var_818_int, var_819_int, var_820_int); // 0x14c9 TObjFunc
	return 0; // 0x14cb Return
	
Label_5324:
	var_821_int = 9873; // 0x14cc PushI
	var_822_bool = var_40_string == var_821_int; // 0x14cd Eq
	if(var_822_bool == 0) goto Label_5347; // 0x14ce JumpB
	var_823_string = ""; // 0x14cf PushV
	var_823_string = "Neutral"; // 0x14d0 MovS
	func_3846(var_41_bool, var_823_string); // 0x14d1 Call
	var_824_int = 9002; // 0x14d3 PushI
	SetMessage(var_824_int); // 0x14d4 TObjFunc
	ClearReplies(); // 0x14d6 TObjFunc
	var_825_int = 9003; // 0x14d8 PushI
	var_826_int = -1; // 0x14d9 PushI
	var_827_int = 9874; // 0x14da PushI
	AddReply(var_825_int, var_826_int, var_827_int); // 0x14db TObjFunc
	var_828_int = 9004; // 0x14dd PushI
	var_829_int = -1; // 0x14de PushI
	var_830_int = 9875; // 0x14df PushI
	AddReply(var_828_int, var_829_int, var_830_int); // 0x14e0 TObjFunc
	return 0; // 0x14e2 Return
	
Label_5347:
	var_3_string = 1; // 0x14e3 TMovB
	var_831_bool = 0; // 0x14e4 PushV
	func_7949(var_831_bool); // 0x14e5 Call
	if(var_831_bool == 0) goto Label_5355; // 0x14e7 JumpB
	lshStopAnimation(); // 0x14e8 Func
	goto Label_5357; // 0x14ea Jump
	
Label_5357:
	return 0; // 0x14ed Return
	
Label_5355:
	StopAnimation(); // 0x14eb Func
	
Label_5359:
	return 0; // 0x14ef Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x15d1 PushI
	if(var_42_int == 0) goto Label_6770; // 0x15d2 JumpB
	func_7875(); // 0x15d4 Call
	var_44_int = 12081; // 0x15d6 PushI
	var_45_bool = var_41_bool == var_44_int; // 0x15d7 Eq
	if(var_45_bool == 0) goto Label_5608; // 0x15d8 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x15d9 PushV
	var_46_object = var_1_object; // 0x15da MovT
	var_47_object = var_0_object; // 0x15db MovT
	func_8207(); // 0x15dc Call
	var_110_object = Obj(); var_111_object = Obj(); // 0x15de PushV
	var_110_object = var_1_object; // 0x15df MovT
	var_111_object = var_0_object; // 0x15e0 MovT
	func_8251(); // 0x15e1 Call
	var_114_object = Obj(); var_115_object = Obj(); // 0x15e3 PushV
	var_114_object = var_1_object; // 0x15e4 MovT
	var_115_object = var_0_object; // 0x15e5 MovT
	func_8257(); // 0x15e6 Call
	
Label_5608:
	var_140_int = 12082; // 0x15e8 PushI
	var_141_bool = var_41_bool == var_140_int; // 0x15e9 Eq
	if(var_141_bool == 0) goto Label_5626; // 0x15ea JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x15eb PushV
	var_142_object = var_1_object; // 0x15ec MovT
	var_143_object = var_0_object; // 0x15ed MovT
	func_8207(); // 0x15ee Call
	var_144_object = Obj(); var_145_object = Obj(); // 0x15f0 PushV
	var_144_object = var_1_object; // 0x15f1 MovT
	var_145_object = var_0_object; // 0x15f2 MovT
	func_8251(); // 0x15f3 Call
	var_146_object = Obj(); var_147_object = Obj(); // 0x15f5 PushV
	var_146_object = var_1_object; // 0x15f6 MovT
	var_147_object = var_0_object; // 0x15f7 MovT
	func_8257(); // 0x15f8 Call
	
Label_5626:
	var_148_int = 12079; // 0x15fa PushI
	var_149_bool = var_41_bool == var_148_int; // 0x15fb Eq
	if(var_149_bool == 0) goto Label_5644; // 0x15fc JumpB
	var_150_object = Obj(); var_151_object = Obj(); // 0x15fd PushV
	var_150_object = var_1_object; // 0x15fe MovT
	var_151_object = var_0_object; // 0x15ff MovT
	func_8207(); // 0x1600 Call
	var_152_object = Obj(); var_153_object = Obj(); // 0x1602 PushV
	var_152_object = var_1_object; // 0x1603 MovT
	var_153_object = var_0_object; // 0x1604 MovT
	func_8251(); // 0x1605 Call
	var_154_object = Obj(); var_155_object = Obj(); // 0x1607 PushV
	var_154_object = var_1_object; // 0x1608 MovT
	var_155_object = var_0_object; // 0x1609 MovT
	func_8257(); // 0x160a Call
	
Label_5644:
	var_156_int = 11191; // 0x160c PushI
	var_157_bool = var_41_bool == var_156_int; // 0x160d Eq
	if(var_157_bool == 0) goto Label_5662; // 0x160e JumpB
	var_158_object = Obj(); var_159_object = Obj(); // 0x160f PushV
	var_158_object = var_1_object; // 0x1610 MovT
	var_159_object = var_0_object; // 0x1611 MovT
	func_8207(); // 0x1612 Call
	var_160_object = Obj(); var_161_object = Obj(); // 0x1614 PushV
	var_160_object = var_1_object; // 0x1615 MovT
	var_161_object = var_0_object; // 0x1616 MovT
	func_8251(); // 0x1617 Call
	var_162_object = Obj(); var_163_object = Obj(); // 0x1619 PushV
	var_162_object = var_1_object; // 0x161a MovT
	var_163_object = var_0_object; // 0x161b MovT
	func_8257(); // 0x161c Call
	
Label_5662:
	var_164_int = 12096; // 0x161e PushI
	var_165_bool = var_41_bool == var_164_int; // 0x161f Eq
	if(var_165_bool == 0) goto Label_5675; // 0x1620 JumpB
	var_166_object = Obj(); var_167_object = Obj(); // 0x1621 PushV
	var_166_object = var_1_object; // 0x1622 MovT
	var_167_object = var_0_object; // 0x1623 MovT
	func_8273(); // 0x1624 Call
	var_170_object = Obj(); var_171_object = Obj(); // 0x1626 PushV
	var_170_object = var_1_object; // 0x1627 MovT
	var_171_object = var_0_object; // 0x1628 MovT
	func_8279(); // 0x1629 Call
	
Label_5675:
	var_210_int = 12097; // 0x162b PushI
	var_211_bool = var_41_bool == var_210_int; // 0x162c Eq
	if(var_211_bool == 0) goto Label_5688; // 0x162d JumpB
	var_212_object = Obj(); var_213_object = Obj(); // 0x162e PushV
	var_212_object = var_1_object; // 0x162f MovT
	var_213_object = var_0_object; // 0x1630 MovT
	func_8273(); // 0x1631 Call
	var_214_object = Obj(); var_215_object = Obj(); // 0x1633 PushV
	var_214_object = var_1_object; // 0x1634 MovT
	var_215_object = var_0_object; // 0x1635 MovT
	func_8586(); // 0x1636 Call
	
Label_5688:
	var_265_int = 12105; // 0x1638 PushI
	var_266_bool = var_41_bool == var_265_int; // 0x1639 Eq
	if(var_266_bool == 0) goto Label_5701; // 0x163a JumpB
	var_267_object = Obj(); var_268_object = Obj(); // 0x163b PushV
	var_267_object = var_1_object; // 0x163c MovT
	var_268_object = var_0_object; // 0x163d MovT
	func_8330(); // 0x163e Call
	var_271_object = Obj(); var_272_object = Obj(); // 0x1640 PushV
	var_271_object = var_1_object; // 0x1641 MovT
	var_272_object = var_0_object; // 0x1642 MovT
	func_8336(); // 0x1643 Call
	
Label_5701:
	var_328_int = 10563; // 0x1645 PushI
	var_329_bool = var_41_bool == var_328_int; // 0x1646 Eq
	if(var_329_bool == 0) goto Label_5714; // 0x1647 JumpB
	var_330_object = Obj(); var_331_object = Obj(); // 0x1648 PushV
	var_330_object = var_1_object; // 0x1649 MovT
	var_331_object = var_0_object; // 0x164a MovT
	func_8330(); // 0x164b Call
	var_332_object = Obj(); var_333_object = Obj(); // 0x164d PushV
	var_332_object = var_1_object; // 0x164e MovT
	var_333_object = var_0_object; // 0x164f MovT
	func_8336(); // 0x1650 Call
	
Label_5714:
	var_334_int = 12103; // 0x1652 PushI
	var_335_bool = var_41_bool == var_334_int; // 0x1653 Eq
	if(var_335_bool == 0) goto Label_5727; // 0x1654 JumpB
	var_336_object = Obj(); var_337_object = Obj(); // 0x1655 PushV
	var_336_object = var_1_object; // 0x1656 MovT
	var_337_object = var_0_object; // 0x1657 MovT
	func_8330(); // 0x1658 Call
	var_338_object = Obj(); var_339_object = Obj(); // 0x165a PushV
	var_338_object = var_1_object; // 0x165b MovT
	var_339_object = var_0_object; // 0x165c MovT
	func_8336(); // 0x165d Call
	
Label_5727:
	var_340_int = 10572; // 0x165f PushI
	var_341_bool = var_41_bool == var_340_int; // 0x1660 Eq
	if(var_341_bool == 0) goto Label_5740; // 0x1661 JumpB
	var_342_object = Obj(); var_343_object = Obj(); // 0x1662 PushV
	var_342_object = var_1_object; // 0x1663 MovT
	var_343_object = var_0_object; // 0x1664 MovT
	func_8330(); // 0x1665 Call
	var_344_object = Obj(); var_345_object = Obj(); // 0x1667 PushV
	var_344_object = var_1_object; // 0x1668 MovT
	var_345_object = var_0_object; // 0x1669 MovT
	func_8336(); // 0x166a Call
	
Label_5740:
	var_346_int = 10573; // 0x166c PushI
	var_347_bool = var_41_bool == var_346_int; // 0x166d Eq
	if(var_347_bool == 0) goto Label_5753; // 0x166e JumpB
	var_348_object = Obj(); var_349_object = Obj(); // 0x166f PushV
	var_348_object = var_1_object; // 0x1670 MovT
	var_349_object = var_0_object; // 0x1671 MovT
	func_8330(); // 0x1672 Call
	var_350_object = Obj(); var_351_object = Obj(); // 0x1674 PushV
	var_350_object = var_1_object; // 0x1675 MovT
	var_351_object = var_0_object; // 0x1676 MovT
	func_8336(); // 0x1677 Call
	
Label_5753:
	var_352_int = 11951; // 0x1679 PushI
	var_353_bool = var_40_string == var_352_int; // 0x167a Eq
	if(var_353_bool == 0) goto Label_5863; // 0x167b JumpB
	var_354_bool = 0; // 0x167c PushV
	var_354_bool = 0; // 0x167d MovB
	var_355_bool = 0; var_356_object = Obj(); // 0x167e PushV
	var_356_object = var_1_object; // 0x167f MovT
	func_9088(var_356_object); // 0x1680 Call
	if(var_355_bool == 0) goto Label_5769; // 0x1682 JumpB
	var_363_bool = 0; var_364_object = Obj(); // 0x1683 PushV
	var_364_object = var_1_object; // 0x1684 MovT
	func_9100(var_364_object); // 0x1685 Call
	if(var_363_bool == 0) goto Label_5769; // 0x1687 JumpB
	var_354_bool = 1; // 0x1688 MovB
	
Label_5769:
	if(var_354_bool == 0) goto Label_5790; // 0x1689 JumpB
	var_369_object = Obj(); var_370_object = Obj(); // 0x168a PushV
	var_369_object = var_1_object; // 0x168b MovT
	var_370_object = var_0_object; // 0x168c MovT
	func_8714(); // 0x168d Call
	var_373_string = ""; // 0x168f PushV
	var_373_string = "Neutral"; // 0x1690 MovS
	func_5568(var_41_bool, var_373_string); // 0x1691 Call
	var_388_int = 10811; // 0x1693 PushI
	SetMessage(var_388_int); // 0x1694 TObjFunc
	ClearReplies(); // 0x1696 TObjFunc
	var_389_int = 10812; // 0x1698 PushI
	var_390_int = 11147; // 0x1699 PushI
	var_391_int = 11952; // 0x169a PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x169b TObjFunc
	return 0; // 0x169d Return
	
Label_5790:
	var_392_string = ""; // 0x169e PushV
	var_392_string = "Neutral"; // 0x169f MovS
	func_5568(var_41_bool, var_392_string); // 0x16a0 Call
	var_393_int = 10836; // 0x16a2 PushI
	SetMessage(var_393_int); // 0x16a3 TObjFunc
	ClearReplies(); // 0x16a5 TObjFunc
	var_394_bool = 0; // 0x16a7 PushV
	var_394_bool = 0; // 0x16a8 MovB
	var_395_bool = 0; var_396_object = Obj(); // 0x16a9 PushV
	var_396_object = var_1_object; // 0x16aa MovT
	func_9112(var_396_object); // 0x16ab Call
	if(var_395_bool == 0) goto Label_5812; // 0x16ad JumpB
	var_401_bool = 0; var_402_object = Obj(); // 0x16ae PushV
	var_402_object = var_1_object; // 0x16af MovT
	func_9124(var_402_object); // 0x16b0 Call
	if(var_401_bool == 0) goto Label_5812; // 0x16b2 JumpB
	var_394_bool = 1; // 0x16b3 MovB
	
Label_5812:
	if(var_394_bool == 0) goto Label_5818; // 0x16b4 JumpB
	var_407_int = 10839; // 0x16b5 PushI
	var_408_int = 11148; // 0x16b6 PushI
	var_409_int = 11983; // 0x16b7 PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x16b8 TObjFunc
	
Label_5818:
	var_410_bool = 0; var_411_object = Obj(); // 0x16ba PushV
	var_411_object = var_1_object; // 0x16bb MovT
	func_8838(var_410_bool, var_411_object); // 0x16bc Call
	if(var_410_bool == 0) goto Label_5828; // 0x16be JumpB
	var_414_int = 10838; // 0x16bf PushI
	var_415_int = 10519; // 0x16c0 PushI
	var_416_int = 11982; // 0x16c1 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x16c2 TObjFunc
	
Label_5828:
	var_417_bool = 0; var_418_object = Obj(); // 0x16c4 PushV
	var_418_object = var_1_object; // 0x16c5 MovT
	func_9136(var_417_bool, var_418_object); // 0x16c6 Call
	if(var_417_bool == 0) goto Label_5838; // 0x16c8 JumpB
	var_436_int = 11508; // 0x16c9 PushI
	var_437_int = 12709; // 0x16ca PushI
	var_438_int = 12708; // 0x16cb PushI
	AddReply(var_436_int, var_437_int, var_438_int); // 0x16cc TObjFunc
	
Label_5838:
	var_439_bool = 0; // 0x16ce PushV
	var_439_bool = 0; // 0x16cf MovB
	var_440_bool = 0; var_441_object = Obj(); // 0x16d0 PushV
	var_441_object = var_1_object; // 0x16d1 MovT
	func_9166(var_440_bool, var_441_object); // 0x16d2 Call
	if(var_440_bool == 0) goto Label_5851; // 0x16d4 JumpB
	var_453_bool = 0; var_454_object = Obj(); // 0x16d5 PushV
	var_454_object = var_1_object; // 0x16d6 MovT
	func_9194(var_454_object); // 0x16d7 Call
	if(var_453_bool == 0) goto Label_5851; // 0x16d9 JumpB
	var_439_bool = 1; // 0x16da MovB
	
Label_5851:
	if(var_439_bool == 0) goto Label_5857; // 0x16db JumpB
	var_459_int = 10837; // 0x16dc PushI
	var_460_int = 10553; // 0x16dd PushI
	var_461_int = 11981; // 0x16de PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x16df TObjFunc
	
Label_5857:
	var_462_int = 11480; // 0x16e1 PushI
	var_463_int = -1; // 0x16e2 PushI
	var_464_int = 12686; // 0x16e3 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x16e4 TObjFunc
	return 0; // 0x16e6 Return
	
Label_5863:
	var_465_int = 10553; // 0x16e7 PushI
	var_466_bool = var_40_string == var_465_int; // 0x16e8 Eq
	if(var_466_bool == 0) goto Label_5891; // 0x16e9 JumpB
	var_467_string = ""; // 0x16ea PushV
	var_467_string = "Neutral"; // 0x16eb MovS
	func_5568(var_41_bool, var_467_string); // 0x16ec Call
	var_468_int = 9594; // 0x16ee PushI
	SetMessage(var_468_int); // 0x16ef TObjFunc
	ClearReplies(); // 0x16f1 TObjFunc
	var_469_int = 9595; // 0x16f3 PushI
	var_470_int = 10555; // 0x16f4 PushI
	var_471_int = 10554; // 0x16f5 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x16f6 TObjFunc
	var_472_int = 9612; // 0x16f8 PushI
	var_473_int = 10555; // 0x16f9 PushI
	var_474_int = 10574; // 0x16fa PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x16fb TObjFunc
	var_475_int = 9613; // 0x16fd PushI
	var_476_int = 10555; // 0x16fe PushI
	var_477_int = 10576; // 0x16ff PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0x1700 TObjFunc
	return 0; // 0x1702 Return
	
Label_5891:
	var_478_int = 10555; // 0x1703 PushI
	var_479_bool = var_40_string == var_478_int; // 0x1704 Eq
	if(var_479_bool == 0) goto Label_5914; // 0x1705 JumpB
	var_480_string = ""; // 0x1706 PushV
	var_480_string = "Neutral"; // 0x1707 MovS
	func_5568(var_41_bool, var_480_string); // 0x1708 Call
	var_481_int = 9596; // 0x170a PushI
	SetMessage(var_481_int); // 0x170b TObjFunc
	ClearReplies(); // 0x170d TObjFunc
	var_482_int = 9597; // 0x170f PushI
	var_483_int = 10557; // 0x1710 PushI
	var_484_int = 10556; // 0x1711 PushI
	AddReply(var_482_int, var_483_int, var_484_int); // 0x1712 TObjFunc
	var_485_int = 9608; // 0x1714 PushI
	var_486_int = 10571; // 0x1715 PushI
	var_487_int = 10570; // 0x1716 PushI
	AddReply(var_485_int, var_486_int, var_487_int); // 0x1717 TObjFunc
	return 0; // 0x1719 Return
	
Label_5914:
	var_488_int = 10571; // 0x171a PushI
	var_489_bool = var_40_string == var_488_int; // 0x171b Eq
	if(var_489_bool == 0) goto Label_5937; // 0x171c JumpB
	var_490_string = ""; // 0x171d PushV
	var_490_string = "Neutral"; // 0x171e MovS
	func_5568(var_41_bool, var_490_string); // 0x171f Call
	var_491_int = 9609; // 0x1721 PushI
	SetMessage(var_491_int); // 0x1722 TObjFunc
	ClearReplies(); // 0x1724 TObjFunc
	var_492_int = 9610; // 0x1726 PushI
	var_493_int = -1; // 0x1727 PushI
	var_494_int = 10572; // 0x1728 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x1729 TObjFunc
	var_495_int = 9611; // 0x172b PushI
	var_496_int = -1; // 0x172c PushI
	var_497_int = 10573; // 0x172d PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x172e TObjFunc
	return 0; // 0x1730 Return
	
Label_5937:
	var_498_int = 10557; // 0x1731 PushI
	var_499_bool = var_40_string == var_498_int; // 0x1732 Eq
	if(var_499_bool == 0) goto Label_5960; // 0x1733 JumpB
	var_500_string = ""; // 0x1734 PushV
	var_500_string = "Neutral"; // 0x1735 MovS
	func_5568(var_41_bool, var_500_string); // 0x1736 Call
	var_501_int = 9598; // 0x1738 PushI
	SetMessage(var_501_int); // 0x1739 TObjFunc
	ClearReplies(); // 0x173b TObjFunc
	var_502_int = 9599; // 0x173d PushI
	var_503_int = 10559; // 0x173e PushI
	var_504_int = 10558; // 0x173f PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x1740 TObjFunc
	var_505_int = 9607; // 0x1742 PushI
	var_506_int = 10559; // 0x1743 PushI
	var_507_int = 10568; // 0x1744 PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x1745 TObjFunc
	return 0; // 0x1747 Return
	
Label_5960:
	var_508_int = 10559; // 0x1748 PushI
	var_509_bool = var_40_string == var_508_int; // 0x1749 Eq
	if(var_509_bool == 0) goto Label_5988; // 0x174a JumpB
	var_510_string = ""; // 0x174b PushV
	var_510_string = "Neutral"; // 0x174c MovS
	func_5568(var_41_bool, var_510_string); // 0x174d Call
	var_511_int = 9600; // 0x174f PushI
	SetMessage(var_511_int); // 0x1750 TObjFunc
	ClearReplies(); // 0x1752 TObjFunc
	var_512_int = 9601; // 0x1754 PushI
	var_513_int = 10561; // 0x1755 PushI
	var_514_int = 10560; // 0x1756 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x1757 TObjFunc
	var_515_int = 9605; // 0x1759 PushI
	var_516_int = 10561; // 0x175a PushI
	var_517_int = 10564; // 0x175b PushI
	AddReply(var_515_int, var_516_int, var_517_int); // 0x175c TObjFunc
	var_518_int = 9606; // 0x175e PushI
	var_519_int = 10561; // 0x175f PushI
	var_520_int = 10566; // 0x1760 PushI
	AddReply(var_518_int, var_519_int, var_520_int); // 0x1761 TObjFunc
	return 0; // 0x1763 Return
	
Label_5988:
	var_521_int = 10561; // 0x1764 PushI
	var_522_bool = var_40_string == var_521_int; // 0x1765 Eq
	if(var_522_bool == 0) goto Label_6016; // 0x1766 JumpB
	var_523_string = ""; // 0x1767 PushV
	var_523_string = "Neutral"; // 0x1768 MovS
	func_5568(var_41_bool, var_523_string); // 0x1769 Call
	var_524_int = 9602; // 0x176b PushI
	SetMessage(var_524_int); // 0x176c TObjFunc
	ClearReplies(); // 0x176e TObjFunc
	var_525_int = 9603; // 0x1770 PushI
	var_526_int = 12104; // 0x1771 PushI
	var_527_int = 10562; // 0x1772 PushI
	AddReply(var_525_int, var_526_int, var_527_int); // 0x1773 TObjFunc
	var_528_int = 9604; // 0x1775 PushI
	var_529_int = -1; // 0x1776 PushI
	var_530_int = 10563; // 0x1777 PushI
	AddReply(var_528_int, var_529_int, var_530_int); // 0x1778 TObjFunc
	var_531_int = 10944; // 0x177a PushI
	var_532_int = -1; // 0x177b PushI
	var_533_int = 12103; // 0x177c PushI
	AddReply(var_531_int, var_532_int, var_533_int); // 0x177d TObjFunc
	return 0; // 0x177f Return
	
Label_6016:
	var_534_int = 12104; // 0x1780 PushI
	var_535_bool = var_40_string == var_534_int; // 0x1781 Eq
	if(var_535_bool == 0) goto Label_6034; // 0x1782 JumpB
	var_536_string = ""; // 0x1783 PushV
	var_536_string = "Neutral"; // 0x1784 MovS
	func_5568(var_41_bool, var_536_string); // 0x1785 Call
	var_537_int = 10945; // 0x1787 PushI
	SetMessage(var_537_int); // 0x1788 TObjFunc
	ClearReplies(); // 0x178a TObjFunc
	var_538_int = 10946; // 0x178c PushI
	var_539_int = -1; // 0x178d PushI
	var_540_int = 12105; // 0x178e PushI
	AddReply(var_538_int, var_539_int, var_540_int); // 0x178f TObjFunc
	return 0; // 0x1791 Return
	
Label_6034:
	var_541_int = 12709; // 0x1792 PushI
	var_542_bool = var_40_string == var_541_int; // 0x1793 Eq
	if(var_542_bool == 0) goto Label_6057; // 0x1794 JumpB
	var_543_string = ""; // 0x1795 PushV
	var_543_string = "Neutral"; // 0x1796 MovS
	func_5568(var_41_bool, var_543_string); // 0x1797 Call
	var_544_int = 11509; // 0x1799 PushI
	SetMessage(var_544_int); // 0x179a TObjFunc
	ClearReplies(); // 0x179c TObjFunc
	var_545_int = 11510; // 0x179e PushI
	var_546_int = 12711; // 0x179f PushI
	var_547_int = 12710; // 0x17a0 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0x17a1 TObjFunc
	var_548_int = 11512; // 0x17a3 PushI
	var_549_int = 12713; // 0x17a4 PushI
	var_550_int = 12712; // 0x17a5 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0x17a6 TObjFunc
	return 0; // 0x17a8 Return
	
Label_6057:
	var_551_int = 12713; // 0x17a9 PushI
	var_552_bool = var_40_string == var_551_int; // 0x17aa Eq
	if(var_552_bool == 0) goto Label_6075; // 0x17ab JumpB
	var_553_string = ""; // 0x17ac PushV
	var_553_string = "Neutral"; // 0x17ad MovS
	func_5568(var_41_bool, var_553_string); // 0x17ae Call
	var_554_int = 11513; // 0x17b0 PushI
	SetMessage(var_554_int); // 0x17b1 TObjFunc
	ClearReplies(); // 0x17b3 TObjFunc
	var_555_int = 11514; // 0x17b5 PushI
	var_556_int = 12715; // 0x17b6 PushI
	var_557_int = 12714; // 0x17b7 PushI
	AddReply(var_555_int, var_556_int, var_557_int); // 0x17b8 TObjFunc
	return 0; // 0x17ba Return
	
Label_6075:
	var_558_int = 12715; // 0x17bb PushI
	var_559_bool = var_40_string == var_558_int; // 0x17bc Eq
	if(var_559_bool == 0) goto Label_6093; // 0x17bd JumpB
	var_560_string = ""; // 0x17be PushV
	var_560_string = "Neutral"; // 0x17bf MovS
	func_5568(var_41_bool, var_560_string); // 0x17c0 Call
	var_561_int = 11515; // 0x17c2 PushI
	SetMessage(var_561_int); // 0x17c3 TObjFunc
	ClearReplies(); // 0x17c5 TObjFunc
	var_562_int = 11516; // 0x17c7 PushI
	var_563_int = -1; // 0x17c8 PushI
	var_564_int = 12716; // 0x17c9 PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x17ca TObjFunc
	return 0; // 0x17cc Return
	
Label_6093:
	var_565_int = 12711; // 0x17cd PushI
	var_566_bool = var_40_string == var_565_int; // 0x17ce Eq
	if(var_566_bool == 0) goto Label_6111; // 0x17cf JumpB
	var_567_string = ""; // 0x17d0 PushV
	var_567_string = "Neutral"; // 0x17d1 MovS
	func_5568(var_41_bool, var_567_string); // 0x17d2 Call
	var_568_int = 11511; // 0x17d4 PushI
	SetMessage(var_568_int); // 0x17d5 TObjFunc
	ClearReplies(); // 0x17d7 TObjFunc
	var_569_int = 11517; // 0x17d9 PushI
	var_570_int = 12718; // 0x17da PushI
	var_571_int = 12717; // 0x17db PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0x17dc TObjFunc
	return 0; // 0x17de Return
	
Label_6111:
	var_572_int = 12718; // 0x17df PushI
	var_573_bool = var_40_string == var_572_int; // 0x17e0 Eq
	if(var_573_bool == 0) goto Label_6129; // 0x17e1 JumpB
	var_574_string = ""; // 0x17e2 PushV
	var_574_string = "Neutral"; // 0x17e3 MovS
	func_5568(var_41_bool, var_574_string); // 0x17e4 Call
	var_575_int = 11518; // 0x17e6 PushI
	SetMessage(var_575_int); // 0x17e7 TObjFunc
	ClearReplies(); // 0x17e9 TObjFunc
	var_576_int = 11519; // 0x17eb PushI
	var_577_int = -1; // 0x17ec PushI
	var_578_int = 12719; // 0x17ed PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x17ee TObjFunc
	return 0; // 0x17f0 Return
	
Label_6129:
	var_579_int = 10519; // 0x17f1 PushI
	var_580_bool = var_40_string == var_579_int; // 0x17f2 Eq
	if(var_580_bool == 0) goto Label_6157; // 0x17f3 JumpB
	var_581_string = ""; // 0x17f4 PushV
	var_581_string = "Neutral"; // 0x17f5 MovS
	func_5568(var_41_bool, var_581_string); // 0x17f6 Call
	var_582_int = 9567; // 0x17f8 PushI
	SetMessage(var_582_int); // 0x17f9 TObjFunc
	ClearReplies(); // 0x17fb TObjFunc
	var_583_int = 9568; // 0x17fd PushI
	var_584_int = 10521; // 0x17fe PushI
	var_585_int = 10520; // 0x17ff PushI
	AddReply(var_583_int, var_584_int, var_585_int); // 0x1800 TObjFunc
	var_586_int = 9589; // 0x1802 PushI
	var_587_int = 10521; // 0x1803 PushI
	var_588_int = 10545; // 0x1804 PushI
	AddReply(var_586_int, var_587_int, var_588_int); // 0x1805 TObjFunc
	var_589_int = 9590; // 0x1807 PushI
	var_590_int = 10548; // 0x1808 PushI
	var_591_int = 10547; // 0x1809 PushI
	AddReply(var_589_int, var_590_int, var_591_int); // 0x180a TObjFunc
	return 0; // 0x180c Return
	
Label_6157:
	var_592_int = 10548; // 0x180d PushI
	var_593_bool = var_40_string == var_592_int; // 0x180e Eq
	if(var_593_bool == 0) goto Label_6180; // 0x180f JumpB
	var_594_string = ""; // 0x1810 PushV
	var_594_string = "Neutral"; // 0x1811 MovS
	func_5568(var_41_bool, var_594_string); // 0x1812 Call
	var_595_int = 9591; // 0x1814 PushI
	SetMessage(var_595_int); // 0x1815 TObjFunc
	ClearReplies(); // 0x1817 TObjFunc
	var_596_int = 9592; // 0x1819 PushI
	var_597_int = 10521; // 0x181a PushI
	var_598_int = 10549; // 0x181b PushI
	AddReply(var_596_int, var_597_int, var_598_int); // 0x181c TObjFunc
	var_599_int = 9593; // 0x181e PushI
	var_600_int = 10521; // 0x181f PushI
	var_601_int = 10551; // 0x1820 PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0x1821 TObjFunc
	return 0; // 0x1823 Return
	
Label_6180:
	var_602_int = 10521; // 0x1824 PushI
	var_603_bool = var_40_string == var_602_int; // 0x1825 Eq
	if(var_603_bool == 0) goto Label_6208; // 0x1826 JumpB
	var_604_string = ""; // 0x1827 PushV
	var_604_string = "Neutral"; // 0x1828 MovS
	func_5568(var_41_bool, var_604_string); // 0x1829 Call
	var_605_int = 9569; // 0x182b PushI
	SetMessage(var_605_int); // 0x182c TObjFunc
	ClearReplies(); // 0x182e TObjFunc
	var_606_int = 9572; // 0x1830 PushI
	var_607_int = 10525; // 0x1831 PushI
	var_608_int = 10524; // 0x1832 PushI
	AddReply(var_606_int, var_607_int, var_608_int); // 0x1833 TObjFunc
	var_609_int = 9570; // 0x1835 PushI
	var_610_int = -1; // 0x1836 PushI
	var_611_int = 10522; // 0x1837 PushI
	AddReply(var_609_int, var_610_int, var_611_int); // 0x1838 TObjFunc
	var_612_int = 9571; // 0x183a PushI
	var_613_int = -1; // 0x183b PushI
	var_614_int = 10523; // 0x183c PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0x183d TObjFunc
	return 0; // 0x183f Return
	
Label_6208:
	var_615_int = 10525; // 0x1840 PushI
	var_616_bool = var_40_string == var_615_int; // 0x1841 Eq
	if(var_616_bool == 0) goto Label_6231; // 0x1842 JumpB
	var_617_string = ""; // 0x1843 PushV
	var_617_string = "Neutral"; // 0x1844 MovS
	func_5568(var_41_bool, var_617_string); // 0x1845 Call
	var_618_int = 9573; // 0x1847 PushI
	SetMessage(var_618_int); // 0x1848 TObjFunc
	ClearReplies(); // 0x184a TObjFunc
	var_619_int = 9574; // 0x184c PushI
	var_620_int = 10527; // 0x184d PushI
	var_621_int = 10526; // 0x184e PushI
	AddReply(var_619_int, var_620_int, var_621_int); // 0x184f TObjFunc
	var_622_int = 9585; // 0x1851 PushI
	var_623_int = 10540; // 0x1852 PushI
	var_624_int = 10539; // 0x1853 PushI
	AddReply(var_622_int, var_623_int, var_624_int); // 0x1854 TObjFunc
	return 0; // 0x1856 Return
	
Label_6231:
	var_625_int = 10540; // 0x1857 PushI
	var_626_bool = var_40_string == var_625_int; // 0x1858 Eq
	if(var_626_bool == 0) goto Label_6254; // 0x1859 JumpB
	var_627_string = ""; // 0x185a PushV
	var_627_string = "Neutral"; // 0x185b MovS
	func_5568(var_41_bool, var_627_string); // 0x185c Call
	var_628_int = 9586; // 0x185e PushI
	SetMessage(var_628_int); // 0x185f TObjFunc
	ClearReplies(); // 0x1861 TObjFunc
	var_629_int = 9587; // 0x1863 PushI
	var_630_int = 10527; // 0x1864 PushI
	var_631_int = 10541; // 0x1865 PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0x1866 TObjFunc
	var_632_int = 9588; // 0x1868 PushI
	var_633_int = 10527; // 0x1869 PushI
	var_634_int = 10543; // 0x186a PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0x186b TObjFunc
	return 0; // 0x186d Return
	
Label_6254:
	var_635_int = 10527; // 0x186e PushI
	var_636_bool = var_40_string == var_635_int; // 0x186f Eq
	if(var_636_bool == 0) goto Label_6272; // 0x1870 JumpB
	var_637_string = ""; // 0x1871 PushV
	var_637_string = "Neutral"; // 0x1872 MovS
	func_5568(var_41_bool, var_637_string); // 0x1873 Call
	var_638_int = 9575; // 0x1875 PushI
	SetMessage(var_638_int); // 0x1876 TObjFunc
	ClearReplies(); // 0x1878 TObjFunc
	var_639_int = 9577; // 0x187a PushI
	var_640_int = 10530; // 0x187b PushI
	var_641_int = 10529; // 0x187c PushI
	AddReply(var_639_int, var_640_int, var_641_int); // 0x187d TObjFunc
	return 0; // 0x187f Return
	
Label_6272:
	var_642_int = 10530; // 0x1880 PushI
	var_643_bool = var_40_string == var_642_int; // 0x1881 Eq
	if(var_643_bool == 0) goto Label_6300; // 0x1882 JumpB
	var_644_string = ""; // 0x1883 PushV
	var_644_string = "Neutral"; // 0x1884 MovS
	func_5568(var_41_bool, var_644_string); // 0x1885 Call
	var_645_int = 9578; // 0x1887 PushI
	SetMessage(var_645_int); // 0x1888 TObjFunc
	ClearReplies(); // 0x188a TObjFunc
	var_646_int = 9579; // 0x188c PushI
	var_647_int = 10532; // 0x188d PushI
	var_648_int = 10531; // 0x188e PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x188f TObjFunc
	var_649_int = 9583; // 0x1891 PushI
	var_650_int = 10532; // 0x1892 PushI
	var_651_int = 10535; // 0x1893 PushI
	AddReply(var_649_int, var_650_int, var_651_int); // 0x1894 TObjFunc
	var_652_int = 9584; // 0x1896 PushI
	var_653_int = 10532; // 0x1897 PushI
	var_654_int = 10537; // 0x1898 PushI
	AddReply(var_652_int, var_653_int, var_654_int); // 0x1899 TObjFunc
	return 0; // 0x189b Return
	
Label_6300:
	var_655_int = 10532; // 0x189c PushI
	var_656_bool = var_40_string == var_655_int; // 0x189d Eq
	if(var_656_bool == 0) goto Label_6323; // 0x189e JumpB
	var_657_string = ""; // 0x189f PushV
	var_657_string = "Neutral"; // 0x18a0 MovS
	func_5568(var_41_bool, var_657_string); // 0x18a1 Call
	var_658_int = 9580; // 0x18a3 PushI
	SetMessage(var_658_int); // 0x18a4 TObjFunc
	ClearReplies(); // 0x18a6 TObjFunc
	var_659_int = 9581; // 0x18a8 PushI
	var_660_int = -1; // 0x18a9 PushI
	var_661_int = 10533; // 0x18aa PushI
	AddReply(var_659_int, var_660_int, var_661_int); // 0x18ab TObjFunc
	var_662_int = 9582; // 0x18ad PushI
	var_663_int = -1; // 0x18ae PushI
	var_664_int = 10534; // 0x18af PushI
	AddReply(var_662_int, var_663_int, var_664_int); // 0x18b0 TObjFunc
	return 0; // 0x18b2 Return
	
Label_6323:
	var_665_int = 11148; // 0x18b3 PushI
	var_666_bool = var_40_string == var_665_int; // 0x18b4 Eq
	if(var_666_bool == 0) goto Label_6341; // 0x18b5 JumpB
	var_667_string = ""; // 0x18b6 PushV
	var_667_string = "Neutral"; // 0x18b7 MovS
	func_5568(var_41_bool, var_667_string); // 0x18b8 Call
	var_668_int = 10112; // 0x18ba PushI
	SetMessage(var_668_int); // 0x18bb TObjFunc
	ClearReplies(); // 0x18bd TObjFunc
	var_669_int = 10115; // 0x18bf PushI
	var_670_int = 11154; // 0x18c0 PushI
	var_671_int = 11151; // 0x18c1 PushI
	AddReply(var_669_int, var_670_int, var_671_int); // 0x18c2 TObjFunc
	return 0; // 0x18c4 Return
	
Label_6341:
	var_672_int = 11154; // 0x18c5 PushI
	var_673_bool = var_40_string == var_672_int; // 0x18c6 Eq
	if(var_673_bool == 0) goto Label_6369; // 0x18c7 JumpB
	var_674_string = ""; // 0x18c8 PushV
	var_674_string = "Neutral"; // 0x18c9 MovS
	func_5568(var_41_bool, var_674_string); // 0x18ca Call
	var_675_int = 10118; // 0x18cc PushI
	SetMessage(var_675_int); // 0x18cd TObjFunc
	ClearReplies(); // 0x18cf TObjFunc
	var_676_int = 10119; // 0x18d1 PushI
	var_677_int = 11156; // 0x18d2 PushI
	var_678_int = 11155; // 0x18d3 PushI
	AddReply(var_676_int, var_677_int, var_678_int); // 0x18d4 TObjFunc
	var_679_int = 10933; // 0x18d6 PushI
	var_680_int = 12088; // 0x18d7 PushI
	var_681_int = 12087; // 0x18d8 PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0x18d9 TObjFunc
	var_682_int = 10124; // 0x18db PushI
	var_683_int = 11161; // 0x18dc PushI
	var_684_int = 11160; // 0x18dd PushI
	AddReply(var_682_int, var_683_int, var_684_int); // 0x18de TObjFunc
	return 0; // 0x18e0 Return
	
Label_6369:
	var_685_int = 11161; // 0x18e1 PushI
	var_686_bool = var_40_string == var_685_int; // 0x18e2 Eq
	if(var_686_bool == 0) goto Label_6392; // 0x18e3 JumpB
	var_687_string = ""; // 0x18e4 PushV
	var_687_string = "Neutral"; // 0x18e5 MovS
	func_5568(var_41_bool, var_687_string); // 0x18e6 Call
	var_688_int = 10125; // 0x18e8 PushI
	SetMessage(var_688_int); // 0x18e9 TObjFunc
	ClearReplies(); // 0x18eb TObjFunc
	var_689_int = 10126; // 0x18ed PushI
	var_690_int = 11984; // 0x18ee PushI
	var_691_int = 11162; // 0x18ef PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0x18f0 TObjFunc
	var_692_int = 10127; // 0x18f2 PushI
	var_693_int = 11984; // 0x18f3 PushI
	var_694_int = 11163; // 0x18f4 PushI
	AddReply(var_692_int, var_693_int, var_694_int); // 0x18f5 TObjFunc
	return 0; // 0x18f7 Return
	
Label_6392:
	var_695_int = 12088; // 0x18f8 PushI
	var_696_bool = var_40_string == var_695_int; // 0x18f9 Eq
	if(var_696_bool == 0) goto Label_6410; // 0x18fa JumpB
	var_697_string = ""; // 0x18fb PushV
	var_697_string = "Neutral"; // 0x18fc MovS
	func_5568(var_41_bool, var_697_string); // 0x18fd Call
	var_698_int = 10934; // 0x18ff PushI
	SetMessage(var_698_int); // 0x1900 TObjFunc
	ClearReplies(); // 0x1902 TObjFunc
	var_699_int = 10935; // 0x1904 PushI
	var_700_int = 12090; // 0x1905 PushI
	var_701_int = 12089; // 0x1906 PushI
	AddReply(var_699_int, var_700_int, var_701_int); // 0x1907 TObjFunc
	return 0; // 0x1909 Return
	
Label_6410:
	var_702_int = 12090; // 0x190a PushI
	var_703_bool = var_40_string == var_702_int; // 0x190b Eq
	if(var_703_bool == 0) goto Label_6433; // 0x190c JumpB
	var_704_string = ""; // 0x190d PushV
	var_704_string = "Neutral"; // 0x190e MovS
	func_5568(var_41_bool, var_704_string); // 0x190f Call
	var_705_int = 10936; // 0x1911 PushI
	SetMessage(var_705_int); // 0x1912 TObjFunc
	ClearReplies(); // 0x1914 TObjFunc
	var_706_int = 10939; // 0x1916 PushI
	var_707_int = 11156; // 0x1917 PushI
	var_708_int = 12093; // 0x1918 PushI
	AddReply(var_706_int, var_707_int, var_708_int); // 0x1919 TObjFunc
	var_709_int = 10937; // 0x191b PushI
	var_710_int = 12092; // 0x191c PushI
	var_711_int = 12091; // 0x191d PushI
	AddReply(var_709_int, var_710_int, var_711_int); // 0x191e TObjFunc
	return 0; // 0x1920 Return
	
Label_6433:
	var_712_int = 12092; // 0x1921 PushI
	var_713_bool = var_40_string == var_712_int; // 0x1922 Eq
	if(var_713_bool == 0) goto Label_6451; // 0x1923 JumpB
	var_714_string = ""; // 0x1924 PushV
	var_714_string = "Neutral"; // 0x1925 MovS
	func_5568(var_41_bool, var_714_string); // 0x1926 Call
	var_715_int = 10938; // 0x1928 PushI
	SetMessage(var_715_int); // 0x1929 TObjFunc
	ClearReplies(); // 0x192b TObjFunc
	var_716_int = 10943; // 0x192d PushI
	var_717_int = 11156; // 0x192e PushI
	var_718_int = 12101; // 0x192f PushI
	AddReply(var_716_int, var_717_int, var_718_int); // 0x1930 TObjFunc
	return 0; // 0x1932 Return
	
Label_6451:
	var_719_int = 11156; // 0x1933 PushI
	var_720_bool = var_40_string == var_719_int; // 0x1934 Eq
	if(var_720_bool == 0) goto Label_6474; // 0x1935 JumpB
	var_721_string = ""; // 0x1936 PushV
	var_721_string = "Neutral"; // 0x1937 MovS
	func_5568(var_41_bool, var_721_string); // 0x1938 Call
	var_722_int = 10120; // 0x193a PushI
	SetMessage(var_722_int); // 0x193b TObjFunc
	ClearReplies(); // 0x193d TObjFunc
	var_723_int = 10121; // 0x193f PushI
	var_724_int = 11984; // 0x1940 PushI
	var_725_int = 11157; // 0x1941 PushI
	AddReply(var_723_int, var_724_int, var_725_int); // 0x1942 TObjFunc
	var_726_int = 10123; // 0x1944 PushI
	var_727_int = 12094; // 0x1945 PushI
	var_728_int = 11159; // 0x1946 PushI
	AddReply(var_726_int, var_727_int, var_728_int); // 0x1947 TObjFunc
	return 0; // 0x1949 Return
	
Label_6474:
	var_729_int = 12094; // 0x194a PushI
	var_730_bool = var_40_string == var_729_int; // 0x194b Eq
	if(var_730_bool == 0) goto Label_6492; // 0x194c JumpB
	var_731_string = ""; // 0x194d PushV
	var_731_string = "Neutral"; // 0x194e MovS
	func_5568(var_41_bool, var_731_string); // 0x194f Call
	var_732_int = 10940; // 0x1951 PushI
	SetMessage(var_732_int); // 0x1952 TObjFunc
	ClearReplies(); // 0x1954 TObjFunc
	var_733_int = 10122; // 0x1956 PushI
	var_734_int = 11984; // 0x1957 PushI
	var_735_int = 11158; // 0x1958 PushI
	AddReply(var_733_int, var_734_int, var_735_int); // 0x1959 TObjFunc
	return 0; // 0x195b Return
	
Label_6492:
	var_736_int = 11984; // 0x195c PushI
	var_737_bool = var_40_string == var_736_int; // 0x195d Eq
	if(var_737_bool == 0) goto Label_6515; // 0x195e JumpB
	var_738_string = ""; // 0x195f PushV
	var_738_string = "Neutral"; // 0x1960 MovS
	func_5568(var_41_bool, var_738_string); // 0x1961 Call
	var_739_int = 10840; // 0x1963 PushI
	SetMessage(var_739_int); // 0x1964 TObjFunc
	ClearReplies(); // 0x1966 TObjFunc
	var_740_int = 10941; // 0x1968 PushI
	var_741_int = -1; // 0x1969 PushI
	var_742_int = 12096; // 0x196a PushI
	AddReply(var_740_int, var_741_int, var_742_int); // 0x196b TObjFunc
	var_743_int = 10942; // 0x196d PushI
	var_744_int = -1; // 0x196e PushI
	var_745_int = 12097; // 0x196f PushI
	AddReply(var_743_int, var_744_int, var_745_int); // 0x1970 TObjFunc
	return 0; // 0x1972 Return
	
Label_6515:
	var_746_int = 11147; // 0x1973 PushI
	var_747_bool = var_40_string == var_746_int; // 0x1974 Eq
	if(var_747_bool == 0) goto Label_6538; // 0x1975 JumpB
	var_748_string = ""; // 0x1976 PushV
	var_748_string = "Neutral"; // 0x1977 MovS
	func_5568(var_41_bool, var_748_string); // 0x1978 Call
	var_749_int = 10111; // 0x197a PushI
	SetMessage(var_749_int); // 0x197b TObjFunc
	ClearReplies(); // 0x197d TObjFunc
	var_750_int = 10138; // 0x197f PushI
	var_751_int = 11181; // 0x1980 PushI
	var_752_int = 11180; // 0x1981 PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0x1982 TObjFunc
	var_753_int = 10140; // 0x1984 PushI
	var_754_int = 11183; // 0x1985 PushI
	var_755_int = 11182; // 0x1986 PushI
	AddReply(var_753_int, var_754_int, var_755_int); // 0x1987 TObjFunc
	return 0; // 0x1989 Return
	
Label_6538:
	var_756_int = 11183; // 0x198a PushI
	var_757_bool = var_40_string == var_756_int; // 0x198b Eq
	if(var_757_bool == 0) goto Label_6561; // 0x198c JumpB
	var_758_string = ""; // 0x198d PushV
	var_758_string = "Neutral"; // 0x198e MovS
	func_5568(var_41_bool, var_758_string); // 0x198f Call
	var_759_int = 10141; // 0x1991 PushI
	SetMessage(var_759_int); // 0x1992 TObjFunc
	ClearReplies(); // 0x1994 TObjFunc
	var_760_int = 10142; // 0x1996 PushI
	var_761_int = 11186; // 0x1997 PushI
	var_762_int = 11184; // 0x1998 PushI
	AddReply(var_760_int, var_761_int, var_762_int); // 0x1999 TObjFunc
	var_763_int = 10143; // 0x199b PushI
	var_764_int = 12070; // 0x199c PushI
	var_765_int = 11185; // 0x199d PushI
	AddReply(var_763_int, var_764_int, var_765_int); // 0x199e TObjFunc
	return 0; // 0x19a0 Return
	
Label_6561:
	var_766_int = 12070; // 0x19a1 PushI
	var_767_bool = var_40_string == var_766_int; // 0x19a2 Eq
	if(var_767_bool == 0) goto Label_6584; // 0x19a3 JumpB
	var_768_string = ""; // 0x19a4 PushV
	var_768_string = "Neutral"; // 0x19a5 MovS
	func_5568(var_41_bool, var_768_string); // 0x19a6 Call
	var_769_int = 10921; // 0x19a8 PushI
	SetMessage(var_769_int); // 0x19a9 TObjFunc
	ClearReplies(); // 0x19ab TObjFunc
	var_770_int = 10922; // 0x19ad PushI
	var_771_int = 11181; // 0x19ae PushI
	var_772_int = 12071; // 0x19af PushI
	AddReply(var_770_int, var_771_int, var_772_int); // 0x19b0 TObjFunc
	var_773_int = 10923; // 0x19b2 PushI
	var_774_int = 12073; // 0x19b3 PushI
	var_775_int = 12072; // 0x19b4 PushI
	AddReply(var_773_int, var_774_int, var_775_int); // 0x19b5 TObjFunc
	return 0; // 0x19b7 Return
	
Label_6584:
	var_776_int = 12073; // 0x19b8 PushI
	var_777_bool = var_40_string == var_776_int; // 0x19b9 Eq
	if(var_777_bool == 0) goto Label_6602; // 0x19ba JumpB
	var_778_string = ""; // 0x19bb PushV
	var_778_string = "Neutral"; // 0x19bc MovS
	func_5568(var_41_bool, var_778_string); // 0x19bd Call
	var_779_int = 10924; // 0x19bf PushI
	SetMessage(var_779_int); // 0x19c0 TObjFunc
	ClearReplies(); // 0x19c2 TObjFunc
	var_780_int = 10925; // 0x19c4 PushI
	var_781_int = 11181; // 0x19c5 PushI
	var_782_int = 12074; // 0x19c6 PushI
	AddReply(var_780_int, var_781_int, var_782_int); // 0x19c7 TObjFunc
	return 0; // 0x19c9 Return
	
Label_6602:
	var_783_int = 11186; // 0x19ca PushI
	var_784_bool = var_40_string == var_783_int; // 0x19cb Eq
	if(var_784_bool == 0) goto Label_6625; // 0x19cc JumpB
	var_785_string = ""; // 0x19cd PushV
	var_785_string = "Neutral"; // 0x19ce MovS
	func_5568(var_41_bool, var_785_string); // 0x19cf Call
	var_786_int = 10144; // 0x19d1 PushI
	SetMessage(var_786_int); // 0x19d2 TObjFunc
	ClearReplies(); // 0x19d4 TObjFunc
	var_787_int = 10919; // 0x19d6 PushI
	var_788_int = 11175; // 0x19d7 PushI
	var_789_int = 12068; // 0x19d8 PushI
	AddReply(var_787_int, var_788_int, var_789_int); // 0x19d9 TObjFunc
	var_790_int = 10920; // 0x19db PushI
	var_791_int = -1; // 0x19dc PushI
	var_792_int = 12069; // 0x19dd PushI
	AddReply(var_790_int, var_791_int, var_792_int); // 0x19de TObjFunc
	return 0; // 0x19e0 Return
	
Label_6625:
	var_793_int = 11181; // 0x19e1 PushI
	var_794_bool = var_40_string == var_793_int; // 0x19e2 Eq
	if(var_794_bool == 0) goto Label_6648; // 0x19e3 JumpB
	var_795_string = ""; // 0x19e4 PushV
	var_795_string = "Neutral"; // 0x19e5 MovS
	func_5568(var_41_bool, var_795_string); // 0x19e6 Call
	var_796_int = 10139; // 0x19e8 PushI
	SetMessage(var_796_int); // 0x19e9 TObjFunc
	ClearReplies(); // 0x19eb TObjFunc
	var_797_int = 10145; // 0x19ed PushI
	var_798_int = 11188; // 0x19ee PushI
	var_799_int = 11187; // 0x19ef PushI
	AddReply(var_797_int, var_798_int, var_799_int); // 0x19f0 TObjFunc
	var_800_int = 10134; // 0x19f2 PushI
	var_801_int = 11175; // 0x19f3 PushI
	var_802_int = 11174; // 0x19f4 PushI
	AddReply(var_800_int, var_801_int, var_802_int); // 0x19f5 TObjFunc
	return 0; // 0x19f7 Return
	
Label_6648:
	var_803_int = 11175; // 0x19f8 PushI
	var_804_bool = var_40_string == var_803_int; // 0x19f9 Eq
	if(var_804_bool == 0) goto Label_6671; // 0x19fa JumpB
	var_805_string = ""; // 0x19fb PushV
	var_805_string = "Neutral"; // 0x19fc MovS
	func_5568(var_41_bool, var_805_string); // 0x19fd Call
	var_806_int = 10135; // 0x19ff PushI
	SetMessage(var_806_int); // 0x1a00 TObjFunc
	ClearReplies(); // 0x1a02 TObjFunc
	var_807_int = 10136; // 0x1a04 PushI
	var_808_int = 12083; // 0x1a05 PushI
	var_809_int = 11176; // 0x1a06 PushI
	AddReply(var_807_int, var_808_int, var_809_int); // 0x1a07 TObjFunc
	var_810_int = 10137; // 0x1a09 PushI
	var_811_int = 12083; // 0x1a0a PushI
	var_812_int = 11178; // 0x1a0b PushI
	AddReply(var_810_int, var_811_int, var_812_int); // 0x1a0c TObjFunc
	return 0; // 0x1a0e Return
	
Label_6671:
	var_813_int = 12083; // 0x1a0f PushI
	var_814_bool = var_40_string == var_813_int; // 0x1a10 Eq
	if(var_814_bool == 0) goto Label_6689; // 0x1a11 JumpB
	var_815_string = ""; // 0x1a12 PushV
	var_815_string = "Neutral"; // 0x1a13 MovS
	func_5568(var_41_bool, var_815_string); // 0x1a14 Call
	var_816_int = 10931; // 0x1a16 PushI
	SetMessage(var_816_int); // 0x1a17 TObjFunc
	ClearReplies(); // 0x1a19 TObjFunc
	var_817_int = 10932; // 0x1a1b PushI
	var_818_int = 11188; // 0x1a1c PushI
	var_819_int = 12085; // 0x1a1d PushI
	AddReply(var_817_int, var_818_int, var_819_int); // 0x1a1e TObjFunc
	return 0; // 0x1a20 Return
	
Label_6689:
	var_820_int = 11188; // 0x1a21 PushI
	var_821_bool = var_40_string == var_820_int; // 0x1a22 Eq
	if(var_821_bool == 0) goto Label_6712; // 0x1a23 JumpB
	var_822_string = ""; // 0x1a24 PushV
	var_822_string = "Neutral"; // 0x1a25 MovS
	func_5568(var_41_bool, var_822_string); // 0x1a26 Call
	var_823_int = 10146; // 0x1a28 PushI
	SetMessage(var_823_int); // 0x1a29 TObjFunc
	ClearReplies(); // 0x1a2b TObjFunc
	var_824_int = 10147; // 0x1a2d PushI
	var_825_int = 11190; // 0x1a2e PushI
	var_826_int = 11189; // 0x1a2f PushI
	AddReply(var_824_int, var_825_int, var_826_int); // 0x1a30 TObjFunc
	var_827_int = 10149; // 0x1a32 PushI
	var_828_int = -1; // 0x1a33 PushI
	var_829_int = 11191; // 0x1a34 PushI
	AddReply(var_827_int, var_828_int, var_829_int); // 0x1a35 TObjFunc
	return 0; // 0x1a37 Return
	
Label_6712:
	var_830_int = 11190; // 0x1a38 PushI
	var_831_bool = var_40_string == var_830_int; // 0x1a39 Eq
	if(var_831_bool == 0) goto Label_6735; // 0x1a3a JumpB
	var_832_string = ""; // 0x1a3b PushV
	var_832_string = "Neutral"; // 0x1a3c MovS
	func_5568(var_41_bool, var_832_string); // 0x1a3d Call
	var_833_int = 10148; // 0x1a3f PushI
	SetMessage(var_833_int); // 0x1a40 TObjFunc
	ClearReplies(); // 0x1a42 TObjFunc
	var_834_int = 10926; // 0x1a44 PushI
	var_835_int = 12080; // 0x1a45 PushI
	var_836_int = 12078; // 0x1a46 PushI
	AddReply(var_834_int, var_835_int, var_836_int); // 0x1a47 TObjFunc
	var_837_int = 10927; // 0x1a49 PushI
	var_838_int = -1; // 0x1a4a PushI
	var_839_int = 12079; // 0x1a4b PushI
	AddReply(var_837_int, var_838_int, var_839_int); // 0x1a4c TObjFunc
	return 0; // 0x1a4e Return
	
Label_6735:
	var_840_int = 12080; // 0x1a4f PushI
	var_841_bool = var_40_string == var_840_int; // 0x1a50 Eq
	if(var_841_bool == 0) goto Label_6758; // 0x1a51 JumpB
	var_842_string = ""; // 0x1a52 PushV
	var_842_string = "Neutral"; // 0x1a53 MovS
	func_5568(var_41_bool, var_842_string); // 0x1a54 Call
	var_843_int = 10928; // 0x1a56 PushI
	SetMessage(var_843_int); // 0x1a57 TObjFunc
	ClearReplies(); // 0x1a59 TObjFunc
	var_844_int = 10929; // 0x1a5b PushI
	var_845_int = -1; // 0x1a5c PushI
	var_846_int = 12081; // 0x1a5d PushI
	AddReply(var_844_int, var_845_int, var_846_int); // 0x1a5e TObjFunc
	var_847_int = 10930; // 0x1a60 PushI
	var_848_int = -1; // 0x1a61 PushI
	var_849_int = 12082; // 0x1a62 PushI
	AddReply(var_847_int, var_848_int, var_849_int); // 0x1a63 TObjFunc
	return 0; // 0x1a65 Return
	
Label_6758:
	var_3_string = 1; // 0x1a66 TMovB
	var_850_bool = 0; // 0x1a67 PushV
	func_7949(var_850_bool); // 0x1a68 Call
	if(var_850_bool == 0) goto Label_6766; // 0x1a6a JumpB
	lshStopAnimation(); // 0x1a6b Func
	goto Label_6768; // 0x1a6d Jump
	
Label_6768:
	return 0; // 0x1a70 Return
	
Label_6766:
	StopAnimation(); // 0x1a6e Func
	
Label_6770:
	return 0; // 0x1a72 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x1b0c PushI
	if(var_42_int == 0) goto Label_7249; // 0x1b0d JumpB
	func_7875(); // 0x1b0f Call
	var_44_int = 12763; // 0x1b11 PushI
	var_45_bool = var_41_bool == var_44_int; // 0x1b12 Eq
	if(var_45_bool == 0) goto Label_6942; // 0x1b13 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x1b14 PushV
	var_46_object = var_1_object; // 0x1b15 MovT
	var_47_object = var_0_object; // 0x1b16 MovT
	func_8472(); // 0x1b17 Call
	var_91_object = Obj(); var_92_object = Obj(); // 0x1b19 PushV
	var_91_object = var_1_object; // 0x1b1a MovT
	var_92_object = var_0_object; // 0x1b1b MovT
	func_8143(); // 0x1b1c Call
	
Label_6942:
	var_117_int = 12778; // 0x1b1e PushI
	var_118_bool = var_41_bool == var_117_int; // 0x1b1f Eq
	if(var_118_bool == 0) goto Label_6950; // 0x1b20 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x1b21 PushV
	var_119_object = var_1_object; // 0x1b22 MovT
	var_120_object = var_0_object; // 0x1b23 MovT
	func_8495(); // 0x1b24 Call
	
Label_6950:
	var_123_int = 12752; // 0x1b26 PushI
	var_124_bool = var_40_string == var_123_int; // 0x1b27 Eq
	if(var_124_bool == 0) goto Label_6988; // 0x1b28 JumpB
	var_125_string = ""; // 0x1b29 PushV
	var_125_string = "Neutral"; // 0x1b2a MovS
	func_6907(var_41_bool, var_125_string); // 0x1b2b Call
	var_140_int = 11558; // 0x1b2d PushI
	SetMessage(var_140_int); // 0x1b2e TObjFunc
	ClearReplies(); // 0x1b30 TObjFunc
	var_141_bool = 0; var_142_object = Obj(); // 0x1b32 PushV
	var_142_object = var_1_object; // 0x1b33 MovT
	func_9206(var_142_object); // 0x1b34 Call
	if(var_141_bool == 0) goto Label_6972; // 0x1b36 JumpB
	var_149_int = 11559; // 0x1b37 PushI
	var_150_int = 12754; // 0x1b38 PushI
	var_151_int = 12753; // 0x1b39 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x1b3a TObjFunc
	
Label_6972:
	var_152_bool = 0; var_153_object = Obj(); // 0x1b3c PushV
	var_153_object = var_1_object; // 0x1b3d MovT
	func_9218(var_153_object); // 0x1b3e Call
	if(var_152_bool == 0) goto Label_6982; // 0x1b40 JumpB
	var_158_int = 11570; // 0x1b41 PushI
	var_159_int = 12765; // 0x1b42 PushI
	var_160_int = 12764; // 0x1b43 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x1b44 TObjFunc
	
Label_6982:
	var_161_int = 11589; // 0x1b46 PushI
	var_162_int = -1; // 0x1b47 PushI
	var_163_int = 12784; // 0x1b48 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x1b49 TObjFunc
	return 0; // 0x1b4b Return
	
Label_6988:
	var_164_int = 12765; // 0x1b4c PushI
	var_165_bool = var_40_string == var_164_int; // 0x1b4d Eq
	if(var_165_bool == 0) goto Label_7016; // 0x1b4e JumpB
	var_166_string = ""; // 0x1b4f PushV
	var_166_string = "Neutral"; // 0x1b50 MovS
	func_6907(var_41_bool, var_166_string); // 0x1b51 Call
	var_167_int = 11571; // 0x1b53 PushI
	SetMessage(var_167_int); // 0x1b54 TObjFunc
	ClearReplies(); // 0x1b56 TObjFunc
	var_168_int = 11572; // 0x1b58 PushI
	var_169_int = 12767; // 0x1b59 PushI
	var_170_int = 12766; // 0x1b5a PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x1b5b TObjFunc
	var_171_bool = 0; var_172_object = Obj(); // 0x1b5d PushV
	var_172_object = var_1_object; // 0x1b5e MovT
	func_8778(var_172_object); // 0x1b5f Call
	if(var_171_bool == 0) goto Label_7015; // 0x1b61 JumpB
	var_177_int = 11585; // 0x1b62 PushI
	var_178_int = -1; // 0x1b63 PushI
	var_179_int = 12779; // 0x1b64 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x1b65 TObjFunc
	
Label_7015:
	return 0; // 0x1b67 Return
	
Label_7016:
	var_180_int = 12767; // 0x1b68 PushI
	var_181_bool = var_40_string == var_180_int; // 0x1b69 Eq
	if(var_181_bool == 0) goto Label_7034; // 0x1b6a JumpB
	var_182_string = ""; // 0x1b6b PushV
	var_182_string = "Neutral"; // 0x1b6c MovS
	func_6907(var_41_bool, var_182_string); // 0x1b6d Call
	var_183_int = 11573; // 0x1b6f PushI
	SetMessage(var_183_int); // 0x1b70 TObjFunc
	ClearReplies(); // 0x1b72 TObjFunc
	var_184_int = 11574; // 0x1b74 PushI
	var_185_int = 12769; // 0x1b75 PushI
	var_186_int = 12768; // 0x1b76 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x1b77 TObjFunc
	return 0; // 0x1b79 Return
	
Label_7034:
	var_187_int = 12769; // 0x1b7a PushI
	var_188_bool = var_40_string == var_187_int; // 0x1b7b Eq
	if(var_188_bool == 0) goto Label_7052; // 0x1b7c JumpB
	var_189_string = ""; // 0x1b7d PushV
	var_189_string = "Neutral"; // 0x1b7e MovS
	func_6907(var_41_bool, var_189_string); // 0x1b7f Call
	var_190_int = 11575; // 0x1b81 PushI
	SetMessage(var_190_int); // 0x1b82 TObjFunc
	ClearReplies(); // 0x1b84 TObjFunc
	var_191_int = 11576; // 0x1b86 PushI
	var_192_int = 12771; // 0x1b87 PushI
	var_193_int = 12770; // 0x1b88 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x1b89 TObjFunc
	return 0; // 0x1b8b Return
	
Label_7052:
	var_194_int = 12771; // 0x1b8c PushI
	var_195_bool = var_40_string == var_194_int; // 0x1b8d Eq
	if(var_195_bool == 0) goto Label_7075; // 0x1b8e JumpB
	var_196_string = ""; // 0x1b8f PushV
	var_196_string = "Neutral"; // 0x1b90 MovS
	func_6907(var_41_bool, var_196_string); // 0x1b91 Call
	var_197_int = 11577; // 0x1b93 PushI
	SetMessage(var_197_int); // 0x1b94 TObjFunc
	ClearReplies(); // 0x1b96 TObjFunc
	var_198_int = 11578; // 0x1b98 PushI
	var_199_int = 12773; // 0x1b99 PushI
	var_200_int = 12772; // 0x1b9a PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x1b9b TObjFunc
	var_201_int = 11586; // 0x1b9d PushI
	var_202_int = 12781; // 0x1b9e PushI
	var_203_int = 12780; // 0x1b9f PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x1ba0 TObjFunc
	return 0; // 0x1ba2 Return
	
Label_7075:
	var_204_int = 12781; // 0x1ba3 PushI
	var_205_bool = var_40_string == var_204_int; // 0x1ba4 Eq
	if(var_205_bool == 0) goto Label_7093; // 0x1ba5 JumpB
	var_206_string = ""; // 0x1ba6 PushV
	var_206_string = "Neutral"; // 0x1ba7 MovS
	func_6907(var_41_bool, var_206_string); // 0x1ba8 Call
	var_207_int = 11587; // 0x1baa PushI
	SetMessage(var_207_int); // 0x1bab TObjFunc
	ClearReplies(); // 0x1bad TObjFunc
	var_208_int = 11588; // 0x1baf PushI
	var_209_int = 12773; // 0x1bb0 PushI
	var_210_int = 12782; // 0x1bb1 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1bb2 TObjFunc
	return 0; // 0x1bb4 Return
	
Label_7093:
	var_211_int = 12773; // 0x1bb5 PushI
	var_212_bool = var_40_string == var_211_int; // 0x1bb6 Eq
	if(var_212_bool == 0) goto Label_7111; // 0x1bb7 JumpB
	var_213_string = ""; // 0x1bb8 PushV
	var_213_string = "Neutral"; // 0x1bb9 MovS
	func_6907(var_41_bool, var_213_string); // 0x1bba Call
	var_214_int = 11579; // 0x1bbc PushI
	SetMessage(var_214_int); // 0x1bbd TObjFunc
	ClearReplies(); // 0x1bbf TObjFunc
	var_215_int = 11580; // 0x1bc1 PushI
	var_216_int = 12775; // 0x1bc2 PushI
	var_217_int = 12774; // 0x1bc3 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x1bc4 TObjFunc
	return 0; // 0x1bc6 Return
	
Label_7111:
	var_218_int = 12775; // 0x1bc7 PushI
	var_219_bool = var_40_string == var_218_int; // 0x1bc8 Eq
	if(var_219_bool == 0) goto Label_7129; // 0x1bc9 JumpB
	var_220_string = ""; // 0x1bca PushV
	var_220_string = "Neutral"; // 0x1bcb MovS
	func_6907(var_41_bool, var_220_string); // 0x1bcc Call
	var_221_int = 11581; // 0x1bce PushI
	SetMessage(var_221_int); // 0x1bcf TObjFunc
	ClearReplies(); // 0x1bd1 TObjFunc
	var_222_int = 11582; // 0x1bd3 PushI
	var_223_int = 12777; // 0x1bd4 PushI
	var_224_int = 12776; // 0x1bd5 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1bd6 TObjFunc
	return 0; // 0x1bd8 Return
	
Label_7129:
	var_225_int = 12777; // 0x1bd9 PushI
	var_226_bool = var_40_string == var_225_int; // 0x1bda Eq
	if(var_226_bool == 0) goto Label_7147; // 0x1bdb JumpB
	var_227_string = ""; // 0x1bdc PushV
	var_227_string = "Neutral"; // 0x1bdd MovS
	func_6907(var_41_bool, var_227_string); // 0x1bde Call
	var_228_int = 11583; // 0x1be0 PushI
	SetMessage(var_228_int); // 0x1be1 TObjFunc
	ClearReplies(); // 0x1be3 TObjFunc
	var_229_int = 11584; // 0x1be5 PushI
	var_230_int = -1; // 0x1be6 PushI
	var_231_int = 12778; // 0x1be7 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x1be8 TObjFunc
	return 0; // 0x1bea Return
	
Label_7147:
	var_232_int = 12754; // 0x1beb PushI
	var_233_bool = var_40_string == var_232_int; // 0x1bec Eq
	if(var_233_bool == 0) goto Label_7165; // 0x1bed JumpB
	var_234_string = ""; // 0x1bee PushV
	var_234_string = "Neutral"; // 0x1bef MovS
	func_6907(var_41_bool, var_234_string); // 0x1bf0 Call
	var_235_int = 11560; // 0x1bf2 PushI
	SetMessage(var_235_int); // 0x1bf3 TObjFunc
	ClearReplies(); // 0x1bf5 TObjFunc
	var_236_int = 11561; // 0x1bf7 PushI
	var_237_int = 12756; // 0x1bf8 PushI
	var_238_int = 12755; // 0x1bf9 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x1bfa TObjFunc
	return 0; // 0x1bfc Return
	
Label_7165:
	var_239_int = 12756; // 0x1bfd PushI
	var_240_bool = var_40_string == var_239_int; // 0x1bfe Eq
	if(var_240_bool == 0) goto Label_7183; // 0x1bff JumpB
	var_241_string = ""; // 0x1c00 PushV
	var_241_string = "Neutral"; // 0x1c01 MovS
	func_6907(var_41_bool, var_241_string); // 0x1c02 Call
	var_242_int = 11562; // 0x1c04 PushI
	SetMessage(var_242_int); // 0x1c05 TObjFunc
	ClearReplies(); // 0x1c07 TObjFunc
	var_243_int = 11563; // 0x1c09 PushI
	var_244_int = 12758; // 0x1c0a PushI
	var_245_int = 12757; // 0x1c0b PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x1c0c TObjFunc
	return 0; // 0x1c0e Return
	
Label_7183:
	var_246_int = 12758; // 0x1c0f PushI
	var_247_bool = var_40_string == var_246_int; // 0x1c10 Eq
	if(var_247_bool == 0) goto Label_7201; // 0x1c11 JumpB
	var_248_string = ""; // 0x1c12 PushV
	var_248_string = "Neutral"; // 0x1c13 MovS
	func_6907(var_41_bool, var_248_string); // 0x1c14 Call
	var_249_int = 11564; // 0x1c16 PushI
	SetMessage(var_249_int); // 0x1c17 TObjFunc
	ClearReplies(); // 0x1c19 TObjFunc
	var_250_int = 11565; // 0x1c1b PushI
	var_251_int = 12760; // 0x1c1c PushI
	var_252_int = 12759; // 0x1c1d PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x1c1e TObjFunc
	return 0; // 0x1c20 Return
	
Label_7201:
	var_253_int = 12760; // 0x1c21 PushI
	var_254_bool = var_40_string == var_253_int; // 0x1c22 Eq
	if(var_254_bool == 0) goto Label_7219; // 0x1c23 JumpB
	var_255_string = ""; // 0x1c24 PushV
	var_255_string = "Neutral"; // 0x1c25 MovS
	func_6907(var_41_bool, var_255_string); // 0x1c26 Call
	var_256_int = 11566; // 0x1c28 PushI
	SetMessage(var_256_int); // 0x1c29 TObjFunc
	ClearReplies(); // 0x1c2b TObjFunc
	var_257_int = 11567; // 0x1c2d PushI
	var_258_int = 12762; // 0x1c2e PushI
	var_259_int = 12761; // 0x1c2f PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x1c30 TObjFunc
	return 0; // 0x1c32 Return
	
Label_7219:
	var_260_int = 12762; // 0x1c33 PushI
	var_261_bool = var_40_string == var_260_int; // 0x1c34 Eq
	if(var_261_bool == 0) goto Label_7237; // 0x1c35 JumpB
	var_262_string = ""; // 0x1c36 PushV
	var_262_string = "Neutral"; // 0x1c37 MovS
	func_6907(var_41_bool, var_262_string); // 0x1c38 Call
	var_263_int = 11568; // 0x1c3a PushI
	SetMessage(var_263_int); // 0x1c3b TObjFunc
	ClearReplies(); // 0x1c3d TObjFunc
	var_264_int = 11569; // 0x1c3f PushI
	var_265_int = -1; // 0x1c40 PushI
	var_266_int = 12763; // 0x1c41 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x1c42 TObjFunc
	return 0; // 0x1c44 Return
	
Label_7237:
	var_3_string = 1; // 0x1c45 TMovB
	var_267_bool = 0; // 0x1c46 PushV
	func_7949(var_267_bool); // 0x1c47 Call
	if(var_267_bool == 0) goto Label_7245; // 0x1c49 JumpB
	lshStopAnimation(); // 0x1c4a Func
	goto Label_7247; // 0x1c4c Jump
	
Label_7247:
	return 0; // 0x1c4f Return
	
Label_7245:
	StopAnimation(); // 0x1c4d Func
	
Label_7249:
	return 0; // 0x1c51 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int)
{
	var_42_int = 1; // 0x1d1a PushI
	if(var_42_int == 0) goto Label_7779; // 0x1d1b JumpB
	func_7875(); // 0x1d1d Call
	var_44_int = 14919; // 0x1d1f PushI
	var_45_bool = var_41_int == var_44_int; // 0x1d20 Eq
	if(var_45_bool == 0) goto Label_7463; // 0x1d21 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x1d22 PushV
	var_46_object = var_1_object; // 0x1d23 MovT
	var_47_object = var_0_object; // 0x1d24 MovT
	func_8525(); // 0x1d25 Call
	
Label_7463:
	var_50_int = 14927; // 0x1d27 PushI
	var_51_bool = var_41_int == var_50_int; // 0x1d28 Eq
	if(var_51_bool == 0) goto Label_7471; // 0x1d29 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x1d2a PushV
	var_52_object = var_1_object; // 0x1d2b MovT
	var_53_object = var_0_object; // 0x1d2c MovT
	func_8531(); // 0x1d2d Call
	
Label_7471:
	var_56_int = 14931; // 0x1d2f PushI
	var_57_bool = var_41_int == var_56_int; // 0x1d30 Eq
	if(var_57_bool == 0) goto Label_7479; // 0x1d31 JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0x1d32 PushV
	var_58_object = var_1_object; // 0x1d33 MovT
	var_59_object = var_0_object; // 0x1d34 MovT
	func_8519(); // 0x1d35 Call
	
Label_7479:
	var_62_int = 14943; // 0x1d37 PushI
	var_63_bool = var_41_int == var_62_int; // 0x1d38 Eq
	if(var_63_bool == 0) goto Label_7487; // 0x1d39 JumpB
	var_64_object = Obj(); var_65_object = Obj(); // 0x1d3a PushV
	var_64_object = var_1_object; // 0x1d3b MovT
	var_65_object = var_0_object; // 0x1d3c MovT
	func_8537(); // 0x1d3d Call
	
Label_7487:
	var_68_int = 14918; // 0x1d3f PushI
	var_69_bool = var_40_int == var_68_int; // 0x1d40 Eq
	if(var_69_bool == 0) goto Label_7572; // 0x1d41 JumpB
	var_70_string = ""; // 0x1d42 PushV
	var_70_string = "Neutral"; // 0x1d43 MovS
	func_7433(var_41_int, var_70_string); // 0x1d44 Call
	var_85_int = 13660; // 0x1d46 PushI
	SetMessage(var_85_int); // 0x1d47 TObjFunc
	ClearReplies(); // 0x1d49 TObjFunc
	var_86_bool = 0; // 0x1d4b PushV
	var_86_bool = 0; // 0x1d4c MovB
	var_87_bool = 0; var_88_object = Obj(); // 0x1d4d PushV
	var_88_object = var_1_object; // 0x1d4e MovT
	func_9338(var_88_object); // 0x1d4f Call
	if(var_87_bool == 0) goto Label_7512; // 0x1d51 JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0x1d52 PushV
	var_96_object = var_1_object; // 0x1d53 MovT
	func_9314(var_96_object); // 0x1d54 Call
	if(var_95_bool == 0) goto Label_7512; // 0x1d56 JumpB
	var_86_bool = 1; // 0x1d57 MovB
	
Label_7512:
	if(var_86_bool == 0) goto Label_7518; // 0x1d58 JumpB
	var_101_int = 13661; // 0x1d59 PushI
	var_102_int = 14920; // 0x1d5a PushI
	var_103_int = 14919; // 0x1d5b PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x1d5c TObjFunc
	
Label_7518:
	var_104_bool = 0; // 0x1d5e PushV
	var_104_bool = 0; // 0x1d5f MovB
	var_105_bool = 0; // 0x1d60 PushV
	var_105_bool = 0; // 0x1d61 MovB
	var_106_bool = 0; var_107_object = Obj(); // 0x1d62 PushV
	var_107_object = var_1_object; // 0x1d63 MovT
	func_9314(var_107_object); // 0x1d64 Call
	var_108_bool = var_106_bool == 0; // 0x1d66 Not
	if(var_108_bool == 0) goto Label_7534; // 0x1d67 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x1d68 PushV
	var_110_object = var_1_object; // 0x1d69 MovT
	func_9350(var_110_object); // 0x1d6a Call
	if(var_109_bool == 0) goto Label_7534; // 0x1d6c JumpB
	var_105_bool = 1; // 0x1d6d MovB
	
Label_7534:
	if(var_105_bool == 0) goto Label_7541; // 0x1d6e JumpB
	var_115_bool = 0; var_116_object = Obj(); // 0x1d6f PushV
	var_116_object = var_1_object; // 0x1d70 MovT
	func_9326(var_116_object); // 0x1d71 Call
	if(var_115_bool == 0) goto Label_7541; // 0x1d73 JumpB
	var_104_bool = 1; // 0x1d74 MovB
	
Label_7541:
	if(var_104_bool == 0) goto Label_7547; // 0x1d75 JumpB
	var_121_int = 13669; // 0x1d76 PushI
	var_122_int = 14928; // 0x1d77 PushI
	var_123_int = 14927; // 0x1d78 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x1d79 TObjFunc
	
Label_7547:
	var_124_bool = 0; // 0x1d7b PushV
	var_124_bool = 0; // 0x1d7c MovB
	var_125_bool = 0; var_126_object = Obj(); // 0x1d7d PushV
	var_126_object = var_1_object; // 0x1d7e MovT
	func_9326(var_126_object); // 0x1d7f Call
	if(var_125_bool == 0) goto Label_7560; // 0x1d81 JumpB
	var_127_bool = 0; var_128_object = Obj(); // 0x1d82 PushV
	var_128_object = var_1_object; // 0x1d83 MovT
	func_9362(var_128_object); // 0x1d84 Call
	if(var_127_bool == 0) goto Label_7560; // 0x1d86 JumpB
	var_124_bool = 1; // 0x1d87 MovB
	
Label_7560:
	if(var_124_bool == 0) goto Label_7566; // 0x1d88 JumpB
	var_133_int = 13683; // 0x1d89 PushI
	var_134_int = 14944; // 0x1d8a PushI
	var_135_int = 14943; // 0x1d8b PushI
	AddReply(var_133_int, var_134_int, var_135_int); // 0x1d8c TObjFunc
	
Label_7566:
	var_136_int = 13674; // 0x1d8e PushI
	var_137_int = -1; // 0x1d8f PushI
	var_138_int = 14932; // 0x1d90 PushI
	AddReply(var_136_int, var_137_int, var_138_int); // 0x1d91 TObjFunc
	return 0; // 0x1d93 Return
	
Label_7572:
	var_139_int = 14944; // 0x1d94 PushI
	var_140_bool = var_40_int == var_139_int; // 0x1d95 Eq
	if(var_140_bool == 0) goto Label_7590; // 0x1d96 JumpB
	var_141_string = ""; // 0x1d97 PushV
	var_141_string = "Neutral"; // 0x1d98 MovS
	func_7433(var_41_int, var_141_string); // 0x1d99 Call
	var_142_int = 13684; // 0x1d9b PushI
	SetMessage(var_142_int); // 0x1d9c TObjFunc
	ClearReplies(); // 0x1d9e TObjFunc
	var_143_int = 13685; // 0x1da0 PushI
	var_144_int = 14946; // 0x1da1 PushI
	var_145_int = 14945; // 0x1da2 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x1da3 TObjFunc
	return 0; // 0x1da5 Return
	
Label_7590:
	var_146_int = 14946; // 0x1da6 PushI
	var_147_bool = var_40_int == var_146_int; // 0x1da7 Eq
	if(var_147_bool == 0) goto Label_7608; // 0x1da8 JumpB
	var_148_string = ""; // 0x1da9 PushV
	var_148_string = "Neutral"; // 0x1daa MovS
	func_7433(var_41_int, var_148_string); // 0x1dab Call
	var_149_int = 13686; // 0x1dad PushI
	SetMessage(var_149_int); // 0x1dae TObjFunc
	ClearReplies(); // 0x1db0 TObjFunc
	var_150_int = 13687; // 0x1db2 PushI
	var_151_int = -1; // 0x1db3 PushI
	var_152_int = 14947; // 0x1db4 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x1db5 TObjFunc
	return 0; // 0x1db7 Return
	
Label_7608:
	var_153_int = 14928; // 0x1db8 PushI
	var_154_bool = var_40_int == var_153_int; // 0x1db9 Eq
	if(var_154_bool == 0) goto Label_7631; // 0x1dba JumpB
	var_155_string = ""; // 0x1dbb PushV
	var_155_string = "Neutral"; // 0x1dbc MovS
	func_7433(var_41_int, var_155_string); // 0x1dbd Call
	var_156_int = 13670; // 0x1dbf PushI
	SetMessage(var_156_int); // 0x1dc0 TObjFunc
	ClearReplies(); // 0x1dc2 TObjFunc
	var_157_int = 13671; // 0x1dc4 PushI
	var_158_int = 14930; // 0x1dc5 PushI
	var_159_int = 14929; // 0x1dc6 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x1dc7 TObjFunc
	var_160_int = 13675; // 0x1dc9 PushI
	var_161_int = 14930; // 0x1dca PushI
	var_162_int = 14933; // 0x1dcb PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x1dcc TObjFunc
	return 0; // 0x1dce Return
	
Label_7631:
	var_163_int = 14930; // 0x1dcf PushI
	var_164_bool = var_40_int == var_163_int; // 0x1dd0 Eq
	if(var_164_bool == 0) goto Label_7649; // 0x1dd1 JumpB
	var_165_string = ""; // 0x1dd2 PushV
	var_165_string = "Neutral"; // 0x1dd3 MovS
	func_7433(var_41_int, var_165_string); // 0x1dd4 Call
	var_166_int = 13672; // 0x1dd6 PushI
	SetMessage(var_166_int); // 0x1dd7 TObjFunc
	ClearReplies(); // 0x1dd9 TObjFunc
	var_167_int = 13673; // 0x1ddb PushI
	var_168_int = -1; // 0x1ddc PushI
	var_169_int = 14931; // 0x1ddd PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x1dde TObjFunc
	return 0; // 0x1de0 Return
	
Label_7649:
	var_170_int = 14920; // 0x1de1 PushI
	var_171_bool = var_40_int == var_170_int; // 0x1de2 Eq
	if(var_171_bool == 0) goto Label_7672; // 0x1de3 JumpB
	var_172_string = ""; // 0x1de4 PushV
	var_172_string = "Neutral"; // 0x1de5 MovS
	func_7433(var_41_int, var_172_string); // 0x1de6 Call
	var_173_int = 13662; // 0x1de8 PushI
	SetMessage(var_173_int); // 0x1de9 TObjFunc
	ClearReplies(); // 0x1deb TObjFunc
	var_174_int = 13663; // 0x1ded PushI
	var_175_int = 14922; // 0x1dee PushI
	var_176_int = 14921; // 0x1def PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x1df0 TObjFunc
	var_177_int = 13677; // 0x1df2 PushI
	var_178_int = 14937; // 0x1df3 PushI
	var_179_int = 14936; // 0x1df4 PushI
	AddReply(var_177_int, var_178_int, var_179_int); // 0x1df5 TObjFunc
	return 0; // 0x1df7 Return
	
Label_7672:
	var_180_int = 14937; // 0x1df8 PushI
	var_181_bool = var_40_int == var_180_int; // 0x1df9 Eq
	if(var_181_bool == 0) goto Label_7695; // 0x1dfa JumpB
	var_182_string = ""; // 0x1dfb PushV
	var_182_string = "Neutral"; // 0x1dfc MovS
	func_7433(var_41_int, var_182_string); // 0x1dfd Call
	var_183_int = 13678; // 0x1dff PushI
	SetMessage(var_183_int); // 0x1e00 TObjFunc
	ClearReplies(); // 0x1e02 TObjFunc
	var_184_int = 13679; // 0x1e04 PushI
	var_185_int = 14924; // 0x1e05 PushI
	var_186_int = 14938; // 0x1e06 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x1e07 TObjFunc
	var_187_int = 13680; // 0x1e09 PushI
	var_188_int = -1; // 0x1e0a PushI
	var_189_int = 14940; // 0x1e0b PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x1e0c TObjFunc
	return 0; // 0x1e0e Return
	
Label_7695:
	var_190_int = 14922; // 0x1e0f PushI
	var_191_bool = var_40_int == var_190_int; // 0x1e10 Eq
	if(var_191_bool == 0) goto Label_7713; // 0x1e11 JumpB
	var_192_string = ""; // 0x1e12 PushV
	var_192_string = "Neutral"; // 0x1e13 MovS
	func_7433(var_41_int, var_192_string); // 0x1e14 Call
	var_193_int = 13664; // 0x1e16 PushI
	SetMessage(var_193_int); // 0x1e17 TObjFunc
	ClearReplies(); // 0x1e19 TObjFunc
	var_194_int = 13665; // 0x1e1b PushI
	var_195_int = 14924; // 0x1e1c PushI
	var_196_int = 14923; // 0x1e1d PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x1e1e TObjFunc
	return 0; // 0x1e20 Return
	
Label_7713:
	var_197_int = 14924; // 0x1e21 PushI
	var_198_bool = var_40_int == var_197_int; // 0x1e22 Eq
	if(var_198_bool == 0) goto Label_7731; // 0x1e23 JumpB
	var_199_string = ""; // 0x1e24 PushV
	var_199_string = "Neutral"; // 0x1e25 MovS
	func_7433(var_41_int, var_199_string); // 0x1e26 Call
	var_200_int = 13666; // 0x1e28 PushI
	SetMessage(var_200_int); // 0x1e29 TObjFunc
	ClearReplies(); // 0x1e2b TObjFunc
	var_201_int = 13667; // 0x1e2d PushI
	var_202_int = 14926; // 0x1e2e PushI
	var_203_int = 14925; // 0x1e2f PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x1e30 TObjFunc
	return 0; // 0x1e32 Return
	
Label_7731:
	var_204_int = 14926; // 0x1e33 PushI
	var_205_bool = var_40_int == var_204_int; // 0x1e34 Eq
	if(var_205_bool == 0) goto Label_7749; // 0x1e35 JumpB
	var_206_string = ""; // 0x1e36 PushV
	var_206_string = "Neutral"; // 0x1e37 MovS
	func_7433(var_41_int, var_206_string); // 0x1e38 Call
	var_207_int = 13668; // 0x1e3a PushI
	SetMessage(var_207_int); // 0x1e3b TObjFunc
	ClearReplies(); // 0x1e3d TObjFunc
	var_208_int = 13676; // 0x1e3f PushI
	var_209_int = 14941; // 0x1e40 PushI
	var_210_int = 14935; // 0x1e41 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1e42 TObjFunc
	return 0; // 0x1e44 Return
	
Label_7749:
	var_211_int = 14941; // 0x1e45 PushI
	var_212_bool = var_40_int == var_211_int; // 0x1e46 Eq
	if(var_212_bool == 0) goto Label_7767; // 0x1e47 JumpB
	var_213_string = ""; // 0x1e48 PushV
	var_213_string = "Neutral"; // 0x1e49 MovS
	func_7433(var_41_int, var_213_string); // 0x1e4a Call
	var_214_int = 13681; // 0x1e4c PushI
	SetMessage(var_214_int); // 0x1e4d TObjFunc
	ClearReplies(); // 0x1e4f TObjFunc
	var_215_int = 13682; // 0x1e51 PushI
	var_216_int = -1; // 0x1e52 PushI
	var_217_int = 14942; // 0x1e53 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x1e54 TObjFunc
	return 0; // 0x1e56 Return
	
Label_7767:
	var_3_string = 1; // 0x1e57 TMovB
	var_218_bool = 0; // 0x1e58 PushV
	func_7949(var_218_bool); // 0x1e59 Call
	if(var_218_bool == 0) goto Label_7775; // 0x1e5b JumpB
	lshStopAnimation(); // 0x1e5c Func
	goto Label_7777; // 0x1e5e Jump
	
Label_7777:
	return 0; // 0x1e61 Return
	
Label_7775:
	StopAnimation(); // 0x1e5f Func
	
Label_7779:
	return 0; // 0x1e63 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	func_9734(); // 0x7 Call
	var_41_bool = 0; // 0x9 PushV
	func_7792(var_41_bool); // 0xa Call
	var_44_bool = var_41_bool == 0; // 0xc Not
	if(var_44_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_45_string = ""; // 0x13 PushV
	var_45_string = "Neutral"; // 0x14 MovS
	func_7857(var_45_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_9218(var_152_bool)
{
	var_154_int = 0; var_155_string = ""; // 0x2403 PushV
	var_155_string = "ood5BigVlad1"; // 0x2404 MovS
	func_7892(var_154_int, var_155_string); // 0x2405 Call
	var_156_int = 0; // 0x2407 PushI
	var_157_bool = var_154_int == var_156_int; // 0x2408 Eq
	if(var_157_bool == 0) goto Label_9228; // 0x2409 JumpB
	var_152_bool = 1; // 0x240a MovB
	return 0; // 0x240b Return
	
Label_9228:
	var_152_bool = 0; // 0x240c MovB
	return 0; // 0x240d Return
}


func_9734()
{
	var_40_bool = GlobalVars[1]; // 0x2606 PushGE
	var_40_bool = 0; // 0x2607 MovB
	GlobalVars[1] = var_40_bool; // 0x2608 PopGE
	return 0; // 0x2609 Return
}


func_8201()
{
	var_208_string = "ood3BigVlad5"; // 0x200a PushS
	var_209_int = 1; // 0x200b PushI
	SetVariable(var_208_string, var_209_int); // 0x200c Func
	return 0; // 0x200e Return
}


func_9738(var_41_object)
{
	var_42_bool = GlobalVars[1]; // 0x260b PushGE
	var_43_bool = var_42_bool == 0; // 0x260c Not
	if(var_43_bool == 0) goto Label_9751; // 0x260d JumpB
	var_44_int = 0; var_45_object = Obj(); // 0x260e PushV
	var_45_object = var_41_object; // 0x260f Mov
	TaskCall(2); // 0x2610 TaskCall
	func_49(var_46_object, var_44_int, var_45_object); // 0x2611 Call
	TaskReturn(); // 0x2612 TaskReturn
	var_153_bool = GlobalVars[1]; // 0x2614 PushGE
	var_153_bool = 1; // 0x2615 MovB
	GlobalVars[1] = var_153_bool; // 0x2616 PopGE
	
Label_9751:
	var_154_bool = 0; var_155_int = 0; // 0x2617 PushV
	var_155_int = 1; // 0x2618 MovI
	func_7930(var_154_bool, var_155_int); // 0x2619 Call
	if(var_154_bool == 0) goto Label_9763; // 0x261b JumpB
	var_162_int = 0; var_163_object = Obj(); // 0x261c PushV
	var_163_object = var_41_object; // 0x261d Mov
	TaskCall(6); // 0x261e TaskCall
	func_1113(var_164_object, var_162_int, var_163_object); // 0x261f Call
	TaskReturn(); // 0x2620 TaskReturn
	return 0; // 0x2622 Return
	
Label_9763:
	var_359_bool = 0; var_360_int = 0; // 0x2623 PushV
	var_360_int = 2; // 0x2624 MovI
	func_7930(var_359_bool, var_360_int); // 0x2625 Call
	if(var_359_bool == 0) goto Label_9775; // 0x2627 JumpB
	var_361_int = 0; var_362_object = Obj(); // 0x2628 PushV
	var_362_object = var_41_object; // 0x2629 Mov
	TaskCall(8); // 0x262a TaskCall
	func_2719(var_363_object, var_361_int, var_362_object); // 0x262b Call
	TaskReturn(); // 0x262c TaskReturn
	return 0; // 0x262e Return
	
Label_9775:
	var_471_bool = 0; var_472_int = 0; // 0x262f PushV
	var_472_int = 3; // 0x2630 MovI
	func_7930(var_471_bool, var_472_int); // 0x2631 Call
	if(var_471_bool == 0) goto Label_9787; // 0x2633 JumpB
	var_473_int = 0; var_474_object = Obj(); // 0x2634 PushV
	var_474_object = var_41_object; // 0x2635 Mov
	TaskCall(10); // 0x2636 TaskCall
	func_3610(var_475_object, var_473_int, var_474_object); // 0x2637 Call
	TaskReturn(); // 0x2638 TaskReturn
	return 0; // 0x263a Return
	
Label_9787:
	var_606_bool = 0; var_607_int = 0; // 0x263b PushV
	var_607_int = 4; // 0x263c MovI
	func_7930(var_606_bool, var_607_int); // 0x263d Call
	if(var_606_bool == 0) goto Label_9799; // 0x263f JumpB
	var_608_int = 0; var_609_object = Obj(); // 0x2640 PushV
	var_609_object = var_41_object; // 0x2641 Mov
	TaskCall(12); // 0x2642 TaskCall
	func_5360(var_610_object, var_608_int, var_609_object); // 0x2643 Call
	TaskReturn(); // 0x2644 TaskReturn
	return 0; // 0x2646 Return
	
Label_9799:
	var_742_bool = 0; var_743_int = 0; // 0x2647 PushV
	var_743_int = 5; // 0x2648 MovI
	func_7930(var_742_bool, var_743_int); // 0x2649 Call
	if(var_742_bool == 0) goto Label_9811; // 0x264b JumpB
	var_744_int = 0; var_745_object = Obj(); // 0x264c PushV
	var_745_object = var_41_object; // 0x264d Mov
	TaskCall(14); // 0x264e TaskCall
	func_6771(var_746_object, var_744_int, var_745_object); // 0x264f Call
	TaskReturn(); // 0x2650 TaskReturn
	return 0; // 0x2652 Return
	
Label_9811:
	var_806_bool = 0; var_807_int = 0; // 0x2653 PushV
	var_807_int = 6; // 0x2654 MovI
	func_7930(var_806_bool, var_807_int); // 0x2655 Call
	if(var_806_bool == 0) goto Label_9823; // 0x2657 JumpB
	var_808_int = 0; var_809_object = Obj(); // 0x2658 PushV
	var_809_object = var_41_object; // 0x2659 Mov
	TaskCall(4); // 0x265a TaskCall
	func_322(var_810_object, var_808_int, var_809_object); // 0x265b Call
	TaskReturn(); // 0x265c TaskReturn
	return 0; // 0x265e Return
	
Label_9823:
	var_937_bool = 0; var_938_int = 0; // 0x265f PushV
	var_938_int = 8; // 0x2660 MovI
	func_7930(var_937_bool, var_938_int); // 0x2661 Call
	if(var_937_bool == 0) goto Label_9835; // 0x2663 JumpB
	var_939_int = 0; var_940_object = Obj(); // 0x2664 PushV
	var_940_object = var_41_object; // 0x2665 Mov
	TaskCall(16); // 0x2666 TaskCall
	func_7250(var_941_object, var_939_int, var_940_object); // 0x2667 Call
	TaskReturn(); // 0x2668 TaskReturn
	return 0; // 0x266a Return
	
Label_9835:
	var_1031_bool = 0; // 0x266b PushV
	func_7936(var_1031_bool); // 0x266c Call
	return 0; // 0x266e Return
}


func_8714()
{
	var_371_string = "d4BigVladVisit"; // 0x220b PushS
	var_372_int = 1; // 0x220c PushI
	SetVariable(var_371_string, var_372_int); // 0x220d Func
	return 0; // 0x220f Return
}


func_9230(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x240f PushV
	var_211_string = "d6q02"; // 0x2410 MovS
	func_7892(var_210_int, var_211_string); // 0x2411 Call
	var_212_int = 1000; // 0x2413 PushI
	var_213_bool = var_210_int == var_212_int; // 0x2414 Eq
	if(var_213_bool == 0) goto Label_9240; // 0x2415 JumpB
	var_208_bool = 1; // 0x2416 MovB
	return 0; // 0x2417 Return
	
Label_9240:
	var_208_bool = 0; // 0x2418 MovB
	return 0; // 0x2419 Return
}


func_8207()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x200f PushV
	var_50_string = "d4q01"; // 0x2010 PushS
	var_51_int = 1; // 0x2011 PushI
	SetVariable(var_50_string, var_51_int); // 0x2012 Func
	var_52_object = Obj(); // 0x2014 PushV
	func_9539(var_52_object); // 0x2015 Call
	var_49_object = var_52_object; // 0x2016 Mov
	var_59_string = "d4q01BigVladGotoLara"; // 0x2018 PushS
	var_60_string = "pt_map_lara"; // 0x2019 PushS
	var_61_int = 1; // 0x201a PushI
	var_62_int = 11481; // 0x201b PushI
	var_63_float = 0; // 0x201c PushV
	func_7916(var_63_float); // 0x201d Call
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0x201f ObjFunc
	var_66_string = "d4q01BigVladGotoSklad"; // 0x2021 PushS
	var_67_string = "pt_map_warehouse_gangster"; // 0x2022 PushS
	var_68_int = 1; // 0x2023 PushI
	var_69_int = 11482; // 0x2024 PushI
	var_70_float = 0; // 0x2025 PushV
	func_7916(var_70_float); // 0x2026 Call
	AddMark(var_66_string, var_67_string, var_68_int, var_69_int, var_70_float); // 0x2028 ObjFunc
	var_71_string = "d4q01BigVladGotoLaraSelf"; // 0x202a PushS
	var_72_string = "pt_map_bigvlad"; // 0x202b PushS
	var_73_int = 1; // 0x202c PushI
	var_74_int = 15320; // 0x202d PushI
	var_75_float = 0; // 0x202e PushV
	func_7916(var_75_float); // 0x202f Call
	AddMark(var_71_string, var_72_string, var_73_int, var_74_int, var_75_float); // 0x2031 ObjFunc
	func_9622(); // 0x2034 Call
	func_9638(); // 0x2037 Call
	return 2; // 0x2039 Return
}


func_8720()
{
	var_119_object = Obj(); var_120_object = Obj(); // 0x2210 PushV
	var_121_object = Obj(); // 0x2211 PushV
	func_9539(var_121_object); // 0x2212 Call
	var_120_object = var_121_object; // 0x2213 Mov
	var_122_string = "d6q02BigVlad"; // 0x2215 PushS
	var_123_string = "pt_map_bigvlad"; // 0x2216 PushS
	var_124_int = 0; // 0x2217 PushI
	var_125_int = 15380; // 0x2218 PushI
	var_126_float = 0; // 0x2219 PushV
	func_7916(var_126_float); // 0x221a Call
	AddMark(var_122_string, var_123_string, var_124_int, var_125_int, var_126_float); // 0x221c ObjFunc
	return 2; // 0x221e Return
}


func_3610(var_0_object, var_473_int, var_474_object)
{
	var_476_object = Obj(); var_477_bool = 0; var_478_int = 0; var_479_bool = 0; var_480_object = Obj(); var_481_bool = 0; var_482_int = 0; var_483_bool = 0; // 0xe1a PushV
	var_0_object = var_474_object; // 0xe1b TMov
	var_484_bool = 0; var_485_object = Obj(); // 0xe1c PushV
	var_485_object = var_474_object; // 0xe1d Mov
	func_7797(var_485_object); // 0xe1e Call
	var_486_bool = var_484_bool == 0; // 0xe20 Not
	if(var_486_bool == 0) goto Label_3620; // 0xe21 JumpB
	var_473_int = -2; // 0xe22 MovI
	return 8; // 0xe23 Return
	
Label_3620:
	CreateDialog(var_480_object); // 0xe24 Func
	var_487_int = 0; // 0xe26 PushV
	func_7945(var_487_int); // 0xe27 Call
	SetNPCName(var_487_int); // 0xe29 ObjFunc
	var_488_string = ""; // 0xe2b PushV
	func_7947(var_488_string); // 0xe2c Call
	SetPhoto(var_488_string); // 0xe2e ObjFunc
	var_489_int = 0; // 0xe30 PushV
	func_9589(var_489_int); // 0xe31 Call
	SetPlayerName(var_489_int); // 0xe33 ObjFunc
	var_482_int = -1; // 0xe35 MovI
	IsOverrideActive(var_481_bool); // 0xe36 Func
	var_490_bool = var_481_bool; // 0xe38 Push
	if(var_490_bool == 0) goto Label_3644; // 0xe39 JumpB
	var_473_int = -2; // 0xe3a MovI
	return 8; // 0xe3b Return
	
Label_3644:
	DoDialog(var_480_object); // 0xe3c Func
	var_491_object = Obj(); var_492_object = Obj(); // 0xe3e PushV
	var_491_object = var_474_object; // 0xe3f Mov
	var_492_object = var_480_object; // 0xe40 Mov
	TaskCall(11); // 0xe41 TaskCall
	func_3673(var_493_object, var_494_object, var_495_string, var_496_bool, var_491_object, var_492_object); // 0xe42 Call
	TaskReturn(); // 0xe43 TaskReturn
	IsDialogEnd(var_483_bool); // 0xe45 ObjFunc
	
Label_3655:
	var_604_bool = var_483_bool == 0; // 0xe47 Not
	if(var_604_bool == 0) goto Label_3662; // 0xe48 JumpB
	sync(); // 0xe49 Func
	IsDialogEnd(var_483_bool); // 0xe4b ObjFunc
	goto Label_3655; // 0xe4d Jump
	
Label_3662:
	var_605_object = Obj(); // 0xe4e PushV
	var_605_object = var_474_object; // 0xe4f Mov
	func_7853(); // 0xe50 Call
	StopDialog(var_480_object); // 0xe52 Func
	GetReturnValue(var_482_int); // 0xe54 ObjFunc
	var_473_int = var_482_int; // 0xe56 Mov
	return 8; // 0xe57 Return
}


func_9242(var_215_bool)
{
	var_217_int = 0; var_218_string = ""; // 0x241b PushV
	var_218_string = "d6q02"; // 0x241c MovS
	func_7892(var_217_int, var_218_string); // 0x241d Call
	var_219_int = -1; // 0x241f PushI
	var_220_bool = var_217_int == var_219_int; // 0x2420 Eq
	if(var_220_bool == 0) goto Label_9252; // 0x2421 JumpB
	var_215_bool = 1; // 0x2422 MovB
	return 0; // 0x2423 Return
	
Label_9252:
	var_215_bool = 0; // 0x2424 MovB
	return 0; // 0x2425 Return
}


func_8736()
{
	var_151_string = "d6BigVladVisit"; // 0x2221 PushS
	var_152_int = 1; // 0x2222 PushI
	SetVariable(var_151_string, var_152_int); // 0x2223 Func
	return 0; // 0x2225 Return
}


func_9254(var_196_bool)
{
	var_198_int = 0; var_199_string = ""; // 0x2427 PushV
	var_199_string = "ood6BigVlad1"; // 0x2428 MovS
	func_7892(var_198_int, var_199_string); // 0x2429 Call
	var_200_int = 0; // 0x242b PushI
	var_201_bool = var_198_int == var_200_int; // 0x242c Eq
	if(var_201_bool == 0) goto Label_9264; // 0x242d JumpB
	var_196_bool = 1; // 0x242e MovB
	return 0; // 0x242f Return
	
Label_9264:
	var_196_bool = 0; // 0x2430 MovB
	return 0; // 0x2431 Return
}


func_551(var_2_object, var_153_string)
{
	var_154_bool = 0; // 0x228 PushV
	func_7949(var_154_bool); // 0x229 Call
	var_155_bool = var_154_bool == 0; // 0x22b Not
	if(var_155_bool == 0) goto Label_558; // 0x22c JumpB
	return 0; // 0x22d Return
	
Label_558:
	var_156_bool = var_153_string == var_2_object; // 0x22e Eq
	if(var_156_bool == 0) goto Label_561; // 0x22f JumpB
	return 0; // 0x230 Return
	
Label_561:
	var_157_string = ""; // 0x231 PushV
	var_157_string = var_153_string; // 0x232 Mov
	func_7857(var_157_string); // 0x233 Call
	var_2_object = var_153_string; // 0x235 TMov
	return 0; // 0x236 Return
}


func_8742()
{
	var_209_string = "KnowTermitnik"; // 0x2227 PushS
	var_210_int = 1; // 0x2228 PushI
	SetVariable(var_209_string, var_210_int); // 0x2229 Func
	return 0; // 0x222b Return
}


func_8748()
{
	var_48_string = "ood1BigVlad1"; // 0x222d PushS
	var_49_int = 1; // 0x222e PushI
	SetVariable(var_48_string, var_49_int); // 0x222f Func
	return 0; // 0x2231 Return
}


func_49(var_0_object, var_44_int, var_45_object)
{
	var_47_object = Obj(); var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; // 0x31 PushV
	var_0_object = var_45_object; // 0x32 TMov
	var_55_bool = 0; var_56_object = Obj(); // 0x33 PushV
	var_56_object = var_45_object; // 0x34 Mov
	func_7797(var_56_object); // 0x35 Call
	var_95_bool = var_55_bool == 0; // 0x37 Not
	if(var_95_bool == 0) goto Label_59; // 0x38 JumpB
	var_44_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_51_object); // 0x3b Func
	var_96_int = 0; // 0x3d PushV
	func_7945(var_96_int); // 0x3e Call
	SetNPCName(var_96_int); // 0x40 ObjFunc
	var_97_string = ""; // 0x42 PushV
	func_7947(var_97_string); // 0x43 Call
	SetPhoto(var_97_string); // 0x45 ObjFunc
	var_98_int = 0; // 0x47 PushV
	func_9589(var_98_int); // 0x48 Call
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
	func_7853(); // 0x67 Call
	StopDialog(var_51_object); // 0x69 Func
	GetReturnValue(var_53_int); // 0x6b ObjFunc
	var_44_int = var_53_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_9266(var_202_bool)
{
	var_204_int = 0; var_205_string = ""; // 0x2433 PushV
	var_205_string = "d6q02KnowAboutAttack"; // 0x2434 MovS
	func_7892(var_204_int, var_205_string); // 0x2435 Call
	var_206_int = 1; // 0x2437 PushI
	var_207_bool = var_204_int == var_206_int; // 0x2438 Eq
	if(var_207_bool == 0) goto Label_9276; // 0x2439 JumpB
	var_202_bool = 1; // 0x243a MovB
	return 0; // 0x243b Return
	
Label_9276:
	var_202_bool = 0; // 0x243c MovB
	return 0; // 0x243d Return
}


func_8754()
{
	var_121_string = "ood1BigVlad2"; // 0x2233 PushS
	var_122_int = 1; // 0x2234 PushI
	SetVariable(var_121_string, var_122_int); // 0x2235 Func
	return 0; // 0x2237 Return
}


func_8760()
{
	var_139_string = "ood1BigVlad3"; // 0x2239 PushS
	var_140_int = 1; // 0x223a PushI
	SetVariable(var_139_string, var_140_int); // 0x223b Func
	return 0; // 0x223d Return
}


func_8251()
{
	var_112_string = "ood4BigVlad1"; // 0x203c PushS
	var_113_int = 1; // 0x203d PushI
	SetVariable(var_112_string, var_113_int); // 0x203e Func
	return 0; // 0x2040 Return
}


func_9278(var_222_bool)
{
	var_224_int = 0; var_225_string = ""; // 0x243f PushV
	var_225_string = "d6q02Trigger"; // 0x2440 MovS
	func_7892(var_224_int, var_225_string); // 0x2441 Call
	var_226_int = 0; // 0x2443 PushI
	var_227_bool = var_224_int != var_226_int; // 0x2444 Neq
	if(var_227_bool == 0) goto Label_9288; // 0x2445 JumpB
	var_222_bool = 1; // 0x2446 MovB
	return 0; // 0x2447 Return
	
Label_9288:
	var_222_bool = 0; // 0x2448 MovB
	return 0; // 0x2449 Return
}


func_8766(var_240_bool)
{
	var_242_int = 0; var_243_string = ""; // 0x223f PushV
	var_243_string = "d1q01FirstGeorgVisit"; // 0x2240 MovS
	func_7892(var_242_int, var_243_string); // 0x2241 Call
	var_244_int = 1; // 0x2243 PushI
	var_245_bool = var_242_int == var_244_int; // 0x2244 Eq
	if(var_245_bool == 0) goto Label_8776; // 0x2245 JumpB
	var_240_bool = 1; // 0x2246 MovB
	return 0; // 0x2247 Return
	
Label_8776:
	var_240_bool = 0; // 0x2248 MovB
	return 0; // 0x2249 Return
}


func_8257()
{
	var_116_object = Obj(); var_117_string = ""; var_118_float = 0; // 0x2042 PushV
	var_119_object = Obj(); // 0x2043 PushV
	func_9539(var_119_object); // 0x2044 Call
	var_116_object = var_119_object; // 0x2045 Mov
	var_117_string = "pt_map_lara"; // 0x2047 MovS
	var_118_float = 2; // 0x2048 MovI
	func_9556(var_116_object, var_117_string, var_118_float); // 0x2049 Call
	var_139_object = Obj(); // 0x204b PushV
	func_9539(var_139_object); // 0x204c Call
	ShowMap(var_139_object); // 0x204e ObjFunc
	return 0; // 0x2050 Return
}


func_9290(var_130_bool)
{
	var_132_int = 0; var_133_string = ""; // 0x244b PushV
	var_133_string = "d6q01"; // 0x244c MovS
	func_7892(var_132_int, var_133_string); // 0x244d Call
	var_136_int = 1; // 0x244f PushI
	var_137_bool = var_132_int == var_136_int; // 0x2450 Eq
	if(var_137_bool == 0) goto Label_9300; // 0x2451 JumpB
	var_130_bool = 1; // 0x2452 MovB
	return 0; // 0x2453 Return
	
Label_9300:
	var_130_bool = 0; // 0x2454 MovB
	return 0; // 0x2455 Return
}


func_8778(var_171_bool)
{
	var_173_int = 0; var_174_string = ""; // 0x224b PushV
	var_174_string = "KnowMat"; // 0x224c MovS
	func_7892(var_173_int, var_174_string); // 0x224d Call
	var_175_int = 1; // 0x224f PushI
	var_176_bool = var_173_int == var_175_int; // 0x2250 Eq
	if(var_176_bool == 0) goto Label_8788; // 0x2251 JumpB
	var_171_bool = 1; // 0x2252 MovB
	return 0; // 0x2253 Return
	
Label_8788:
	var_171_bool = 0; // 0x2254 MovB
	return 0; // 0x2255 Return
}


func_8273()
{
	var_168_string = "ood4BigVlad2"; // 0x2052 PushS
	var_169_int = 1; // 0x2053 PushI
	SetVariable(var_168_string, var_169_int); // 0x2054 Func
	return 0; // 0x2056 Return
}


func_7250(var_0_object, var_939_int, var_940_object)
{
	var_942_object = Obj(); var_943_bool = 0; var_944_int = 0; var_945_bool = 0; var_946_object = Obj(); var_947_bool = 0; var_948_int = 0; var_949_bool = 0; // 0x1c52 PushV
	var_0_object = var_940_object; // 0x1c53 TMov
	var_950_bool = 0; var_951_object = Obj(); // 0x1c54 PushV
	var_951_object = var_940_object; // 0x1c55 Mov
	func_7797(var_951_object); // 0x1c56 Call
	var_952_bool = var_950_bool == 0; // 0x1c58 Not
	if(var_952_bool == 0) goto Label_7260; // 0x1c59 JumpB
	var_939_int = -2; // 0x1c5a MovI
	return 8; // 0x1c5b Return
	
Label_7260:
	CreateDialog(var_946_object); // 0x1c5c Func
	var_953_int = 0; // 0x1c5e PushV
	func_7945(var_953_int); // 0x1c5f Call
	SetNPCName(var_953_int); // 0x1c61 ObjFunc
	var_954_string = ""; // 0x1c63 PushV
	func_7947(var_954_string); // 0x1c64 Call
	SetPhoto(var_954_string); // 0x1c66 ObjFunc
	var_955_int = 0; // 0x1c68 PushV
	func_9589(var_955_int); // 0x1c69 Call
	SetPlayerName(var_955_int); // 0x1c6b ObjFunc
	var_948_int = -1; // 0x1c6d MovI
	IsOverrideActive(var_947_bool); // 0x1c6e Func
	var_956_bool = var_947_bool; // 0x1c70 Push
	if(var_956_bool == 0) goto Label_7284; // 0x1c71 JumpB
	var_939_int = -2; // 0x1c72 MovI
	return 8; // 0x1c73 Return
	
Label_7284:
	DoDialog(var_946_object); // 0x1c74 Func
	var_957_object = Obj(); var_958_object = Obj(); // 0x1c76 PushV
	var_957_object = var_940_object; // 0x1c77 Mov
	var_958_object = var_946_object; // 0x1c78 Mov
	TaskCall(17); // 0x1c79 TaskCall
	func_7313(var_959_object, var_960_object, var_961_string, var_962_bool, var_957_object, var_958_object); // 0x1c7a Call
	TaskReturn(); // 0x1c7b TaskReturn
	IsDialogEnd(var_949_bool); // 0x1c7d ObjFunc
	
Label_7295:
	var_1029_bool = var_949_bool == 0; // 0x1c7f Not
	if(var_1029_bool == 0) goto Label_7302; // 0x1c80 JumpB
	sync(); // 0x1c81 Func
	IsDialogEnd(var_949_bool); // 0x1c83 ObjFunc
	goto Label_7295; // 0x1c85 Jump
	
Label_7302:
	var_1030_object = Obj(); // 0x1c86 PushV
	var_1030_object = var_940_object; // 0x1c87 Mov
	func_7853(); // 0x1c88 Call
	StopDialog(var_946_object); // 0x1c8a Func
	GetReturnValue(var_948_int); // 0x1c8c ObjFunc
	var_939_int = var_948_int; // 0x1c8e Mov
	return 8; // 0x1c8f Return
}


func_9302(var_183_bool)
{
	var_185_int = 0; var_186_string = ""; // 0x2457 PushV
	var_186_string = "ood6BigVlad2"; // 0x2458 MovS
	func_7892(var_185_int, var_186_string); // 0x2459 Call
	var_187_int = 0; // 0x245b PushI
	var_188_bool = var_185_int == var_187_int; // 0x245c Eq
	if(var_188_bool == 0) goto Label_9312; // 0x245d JumpB
	var_183_bool = 1; // 0x245e MovB
	return 0; // 0x245f Return
	
Label_9312:
	var_183_bool = 0; // 0x2460 MovB
	return 0; // 0x2461 Return
}


func_8790(var_121_bool)
{
	var_123_int = 0; var_124_string = ""; // 0x2257 PushV
	var_124_string = "ood2BigVlad1"; // 0x2258 MovS
	func_7892(var_123_int, var_124_string); // 0x2259 Call
	var_127_int = 0; // 0x225b PushI
	var_128_bool = var_123_int == var_127_int; // 0x225c Eq
	if(var_128_bool == 0) goto Label_8800; // 0x225d JumpB
	var_121_bool = 1; // 0x225e MovB
	return 0; // 0x225f Return
	
Label_8800:
	var_121_bool = 0; // 0x2260 MovB
	return 0; // 0x2261 Return
}


func_8279()
{
	var_172_object = Obj(); var_173_object = Obj(); // 0x2057 PushV
	var_174_string = "d4q01"; // 0x2058 PushS
	var_175_int = 4; // 0x2059 PushI
	SetVariable(var_174_string, var_175_int); // 0x205a Func
	var_176_object = Obj(); // 0x205c PushV
	func_9539(var_176_object); // 0x205d Call
	var_173_object = var_176_object; // 0x205e Mov
	var_177_string = "d4q01BigVladGotoSobor"; // 0x2060 PushS
	var_178_string = "pt_map_sobor"; // 0x2061 PushS
	var_179_int = 1; // 0x2062 PushI
	var_180_int = 15325; // 0x2063 PushI
	var_181_float = 0; // 0x2064 PushV
	func_7916(var_181_float); // 0x2065 Call
	AddMark(var_177_string, var_178_string, var_179_int, var_180_int, var_181_float); // 0x2067 ObjFunc
	var_182_string = "d4q01BigVladGotoSoborAndTheaterSelf"; // 0x2069 PushS
	var_183_string = "pt_map_bigvlad"; // 0x206a PushS
	var_184_int = 1; // 0x206b PushI
	var_185_int = 15327; // 0x206c PushI
	var_186_float = 0; // 0x206d PushV
	func_7916(var_186_float); // 0x206e Call
	AddMark(var_182_string, var_183_string, var_184_int, var_185_int, var_186_float); // 0x2070 ObjFunc
	var_187_string = "d4q01BigVladGotoTheater"; // 0x2072 PushS
	var_188_string = "pt_map_theater"; // 0x2073 PushS
	var_189_int = 1; // 0x2074 PushI
	var_190_int = 15326; // 0x2075 PushI
	var_191_float = 0; // 0x2076 PushV
	func_7916(var_191_float); // 0x2077 Call
	AddMark(var_187_string, var_188_string, var_189_int, var_190_int, var_191_float); // 0x2079 ObjFunc
	func_9654(); // 0x207c Call
	var_201_bool = 0; var_202_string = ""; var_203_string = ""; // 0x207e PushV
	var_202_string = "quest_d4_01"; // 0x207f MovS
	var_203_string = "pers"; // 0x2080 MovS
	func_7904(var_201_bool, var_202_string, var_203_string); // 0x2081 Call
	var_207_bool = 0; var_208_string = ""; var_209_string = ""; // 0x2083 PushV
	var_208_string = "quest_d4_01"; // 0x2084 MovS
	var_209_string = "key_actors"; // 0x2085 MovS
	func_7904(var_207_bool, var_208_string, var_209_string); // 0x2086 Call
	return 2; // 0x2088 Return
}


func_3673(var_0_object, var_1_object, var_2_object, var_3_object, var_491_object, var_492_object)
{
	var_0_object = var_492_object; // 0xe5a TMov
	var_1_object = var_491_object; // 0xe5b TMov
	var_3_object = 0; // 0xe5c TMovB
	var_497_int = 1; // 0xe5d PushI
	if(var_497_int == 0) goto Label_3816; // 0xe5e JumpB
	var_498_string = ""; // 0xe5f PushV
	var_498_string = "Neutral"; // 0xe60 MovS
	func_3846(var_492_object, var_498_string); // 0xe61 Call
	var_503_int = 8926; // 0xe63 PushI
	SetMessage(var_503_int); // 0xe64 TObjFunc
	ClearReplies(); // 0xe66 TObjFunc
	var_504_bool = 0; // 0xe68 PushV
	var_504_bool = 0; // 0xe69 MovB
	var_505_bool = 0; var_506_object = Obj(); // 0xe6a PushV
	var_506_object = var_1_object; // 0xe6b MovT
	func_8956(var_506_object); // 0xe6c Call
	if(var_505_bool == 0) goto Label_3701; // 0xe6e JumpB
	var_511_bool = 0; var_512_object = Obj(); // 0xe6f PushV
	var_512_object = var_1_object; // 0xe70 MovT
	func_8968(var_512_object); // 0xe71 Call
	if(var_511_bool == 0) goto Label_3701; // 0xe73 JumpB
	var_504_bool = 1; // 0xe74 MovB
	
Label_3701:
	if(var_504_bool == 0) goto Label_3707; // 0xe75 JumpB
	var_517_int = 8977; // 0xe76 PushI
	var_518_int = 9847; // 0xe77 PushI
	var_519_int = 9846; // 0xe78 PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0xe79 TObjFunc
	
Label_3707:
	var_520_bool = 0; // 0xe7b PushV
	var_520_bool = 0; // 0xe7c MovB
	var_521_bool = 0; // 0xe7d PushV
	var_521_bool = 0; // 0xe7e MovB
	var_522_bool = 0; var_523_object = Obj(); // 0xe7f PushV
	var_523_object = var_1_object; // 0xe80 MovT
	func_8992(var_523_object); // 0xe81 Call
	if(var_522_bool == 0) goto Label_3722; // 0xe83 JumpB
	var_528_bool = 0; var_529_object = Obj(); // 0xe84 PushV
	var_529_object = var_1_object; // 0xe85 MovT
	func_8956(var_529_object); // 0xe86 Call
	if(var_528_bool == 0) goto Label_3722; // 0xe88 JumpB
	var_521_bool = 1; // 0xe89 MovB
	
Label_3722:
	if(var_521_bool == 0) goto Label_3730; // 0xe8a JumpB
	var_530_bool = 0; var_531_object = Obj(); // 0xe8b PushV
	var_531_object = var_1_object; // 0xe8c MovT
	func_8968(var_531_object); // 0xe8d Call
	var_532_bool = var_530_bool == 0; // 0xe8f Not
	if(var_532_bool == 0) goto Label_3730; // 0xe90 JumpB
	var_520_bool = 1; // 0xe91 MovB
	
Label_3730:
	if(var_520_bool == 0) goto Label_3736; // 0xe92 JumpB
	var_533_int = 9005; // 0xe93 PushI
	var_534_int = 9877; // 0xe94 PushI
	var_535_int = 9876; // 0xe95 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0xe96 TObjFunc
	
Label_3736:
	var_536_bool = 0; // 0xe98 PushV
	var_536_bool = 0; // 0xe99 MovB
	var_537_bool = 0; var_538_object = Obj(); // 0xe9a PushV
	var_538_object = var_1_object; // 0xe9b MovT
	func_9028(var_538_object); // 0xe9c Call
	if(var_537_bool == 0) goto Label_3749; // 0xe9e JumpB
	var_543_bool = 0; var_544_object = Obj(); // 0xe9f PushV
	var_544_object = var_1_object; // 0xea0 MovT
	func_9016(var_544_object); // 0xea1 Call
	if(var_543_bool == 0) goto Label_3749; // 0xea3 JumpB
	var_536_bool = 1; // 0xea4 MovB
	
Label_3749:
	if(var_536_bool == 0) goto Label_3755; // 0xea5 JumpB
	var_549_int = 9008; // 0xea6 PushI
	var_550_int = 9880; // 0xea7 PushI
	var_551_int = 9879; // 0xea8 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0xea9 TObjFunc
	
Label_3755:
	var_552_bool = 0; // 0xeab PushV
	var_552_bool = 0; // 0xeac MovB
	var_553_bool = 0; var_554_object = Obj(); // 0xead PushV
	var_554_object = var_1_object; // 0xeae MovT
	func_9040(var_554_object); // 0xeaf Call
	if(var_553_bool == 0) goto Label_3768; // 0xeb1 JumpB
	var_559_bool = 0; var_560_object = Obj(); // 0xeb2 PushV
	var_560_object = var_1_object; // 0xeb3 MovT
	func_9052(var_560_object); // 0xeb4 Call
	if(var_559_bool == 0) goto Label_3768; // 0xeb6 JumpB
	var_552_bool = 1; // 0xeb7 MovB
	
Label_3768:
	if(var_552_bool == 0) goto Label_3774; // 0xeb8 JumpB
	var_565_int = 10218; // 0xeb9 PushI
	var_566_int = 11265; // 0xeba PushI
	var_567_int = 11264; // 0xebb PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0xebc TObjFunc
	
Label_3774:
	var_568_bool = 0; // 0xebe PushV
	var_568_bool = 0; // 0xebf MovB
	var_569_bool = 0; var_570_object = Obj(); // 0xec0 PushV
	var_570_object = var_1_object; // 0xec1 MovT
	func_9076(var_570_object); // 0xec2 Call
	if(var_569_bool == 0) goto Label_3787; // 0xec4 JumpB
	var_575_bool = 0; var_576_object = Obj(); // 0xec5 PushV
	var_576_object = var_1_object; // 0xec6 MovT
	func_9064(var_576_object); // 0xec7 Call
	if(var_575_bool == 0) goto Label_3787; // 0xec9 JumpB
	var_568_bool = 1; // 0xeca MovB
	
Label_3787:
	if(var_568_bool == 0) goto Label_3793; // 0xecb JumpB
	var_581_int = 10373; // 0xecc PushI
	var_582_int = 11439; // 0xecd PushI
	var_583_int = 11438; // 0xece PushI
	AddReply(var_581_int, var_582_int, var_583_int); // 0xecf TObjFunc
	
Label_3793:
	var_584_int = 8975; // 0xed1 PushI
	var_585_int = 9792; // 0xed2 PushI
	var_586_int = 9844; // 0xed3 PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0xed4 TObjFunc
	var_587_int = 8976; // 0xed6 PushI
	var_588_int = 9815; // 0xed7 PushI
	var_589_int = 9845; // 0xed8 PushI
	AddReply(var_587_int, var_588_int, var_589_int); // 0xed9 TObjFunc
	var_590_int = 9020; // 0xedb PushI
	var_591_int = 9890; // 0xedc PushI
	var_592_int = 9892; // 0xedd PushI
	AddReply(var_590_int, var_591_int, var_592_int); // 0xede TObjFunc
	var_593_int = 11139; // 0xee0 PushI
	var_594_int = -1; // 0xee1 PushI
	var_595_int = 12328; // 0xee2 PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0xee3 TObjFunc
	goto Label_3816; // 0xee5 Jump
	
Label_3816:
	var_596_bool = 0; // 0xee8 PushV
	func_7949(var_596_bool); // 0xee9 Call
	if(var_596_bool == 0) goto Label_3831; // 0xeeb JumpB
	
Label_3820:
	lshWaitForAnimEnd(); // 0xeec Func
	var_597_object = var_3_object; // 0xeee PushT
	if(var_597_object == 0) goto Label_3825; // 0xeef JumpB
	goto Label_3830; // 0xef0 Jump
	
Label_3830:
	goto Label_3845; // 0xef6 Jump
	
Label_3845:
	return 0; // 0xf05 Return
	
Label_3825:
	var_598_string = ""; // 0xef1 PushV
	var_598_string = var_2_object; // 0xef2 MovT
	func_7857(var_598_string); // 0xef3 Call
	goto Label_3820; // 0xef5 Jump
	
Label_3831:
	var_599_string = "all"; // 0xef7 PushS
	var_600_string = "idle"; // 0xef8 PushS
	PlayAnimation(var_599_string, var_600_string); // 0xef9 Func
	
Label_3835:
	WaitForAnimEnd(); // 0xefb Func
	var_601_object = var_3_object; // 0xefd PushT
	if(var_601_object == 0) goto Label_3840; // 0xefe JumpB
	goto Label_3845; // 0xeff Jump
	
Label_3840:
	var_602_string = "all"; // 0xf00 PushS
	var_603_string = "idle"; // 0xf01 PushS
	PlayAnimation(var_602_string, var_603_string); // 0xf02 Func
	goto Label_3835; // 0xf04 Jump
}


func_1113(var_0_object, var_162_int, var_163_object)
{
	var_165_object = Obj(); var_166_bool = 0; var_167_int = 0; var_168_bool = 0; var_169_object = Obj(); var_170_bool = 0; var_171_int = 0; var_172_bool = 0; // 0x459 PushV
	var_0_object = var_163_object; // 0x45a TMov
	var_173_bool = 0; var_174_object = Obj(); // 0x45b PushV
	var_174_object = var_163_object; // 0x45c Mov
	func_7797(var_174_object); // 0x45d Call
	var_175_bool = var_173_bool == 0; // 0x45f Not
	if(var_175_bool == 0) goto Label_1123; // 0x460 JumpB
	var_162_int = -2; // 0x461 MovI
	return 8; // 0x462 Return
	
Label_1123:
	CreateDialog(var_169_object); // 0x463 Func
	var_176_int = 0; // 0x465 PushV
	func_7945(var_176_int); // 0x466 Call
	SetNPCName(var_176_int); // 0x468 ObjFunc
	var_177_string = ""; // 0x46a PushV
	func_7947(var_177_string); // 0x46b Call
	SetPhoto(var_177_string); // 0x46d ObjFunc
	var_178_int = 0; // 0x46f PushV
	func_9589(var_178_int); // 0x470 Call
	SetPlayerName(var_178_int); // 0x472 ObjFunc
	var_171_int = -1; // 0x474 MovI
	IsOverrideActive(var_170_bool); // 0x475 Func
	var_179_bool = var_170_bool; // 0x477 Push
	if(var_179_bool == 0) goto Label_1147; // 0x478 JumpB
	var_162_int = -2; // 0x479 MovI
	return 8; // 0x47a Return
	
Label_1147:
	DoDialog(var_169_object); // 0x47b Func
	var_180_object = Obj(); var_181_object = Obj(); // 0x47d PushV
	var_180_object = var_163_object; // 0x47e Mov
	var_181_object = var_169_object; // 0x47f Mov
	TaskCall(7); // 0x480 TaskCall
	func_1176(var_182_object, var_183_object, var_184_string, var_185_bool, var_180_object, var_181_object); // 0x481 Call
	TaskReturn(); // 0x482 TaskReturn
	IsDialogEnd(var_172_bool); // 0x484 ObjFunc
	
Label_1158:
	var_357_bool = var_172_bool == 0; // 0x486 Not
	if(var_357_bool == 0) goto Label_1165; // 0x487 JumpB
	sync(); // 0x488 Func
	IsDialogEnd(var_172_bool); // 0x48a ObjFunc
	goto Label_1158; // 0x48c Jump
	
Label_1165:
	var_358_object = Obj(); // 0x48d PushV
	var_358_object = var_163_object; // 0x48e Mov
	func_7853(); // 0x48f Call
	StopDialog(var_169_object); // 0x491 Func
	GetReturnValue(var_171_int); // 0x493 ObjFunc
	var_162_int = var_171_int; // 0x495 Mov
	return 8; // 0x496 Return
}


func_8802(var_161_bool)
{
	var_163_int = 0; var_164_string = ""; // 0x2263 PushV
	var_164_string = "ood2BigVlad2"; // 0x2264 MovS
	func_7892(var_163_int, var_164_string); // 0x2265 Call
	var_165_int = 0; // 0x2267 PushI
	var_166_bool = var_163_int == var_165_int; // 0x2268 Eq
	if(var_166_bool == 0) goto Label_8812; // 0x2269 JumpB
	var_161_bool = 1; // 0x226a MovB
	return 0; // 0x226b Return
	
Label_8812:
	var_161_bool = 0; // 0x226c MovB
	return 0; // 0x226d Return
}


func_9314(var_95_bool)
{
	var_97_int = 0; var_98_string = ""; // 0x2463 PushV
	var_98_string = "d8q01MladVladIsBad"; // 0x2464 MovS
	func_7892(var_97_int, var_98_string); // 0x2465 Call
	var_99_int = 1; // 0x2467 PushI
	var_100_bool = var_97_int == var_99_int; // 0x2468 Eq
	if(var_100_bool == 0) goto Label_9324; // 0x2469 JumpB
	var_95_bool = 1; // 0x246a MovB
	return 0; // 0x246b Return
	
Label_9324:
	var_95_bool = 0; // 0x246c MovB
	return 0; // 0x246d Return
}


func_7780(var_41_bool)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; // 0x1e64 PushV
	GetPosition(var_47_cvector); // 0x1e65 ObjFunc
	GetPosition(var_48_cvector); // 0x1e67 Func
	var_49_cvector = var_47_cvector - var_48_cvector; // 0x1e69 Sub2
	var_51_float = GetByIndex(var_49_cvector, 0); // 0x1e6a PushE
	var_52_float = GetByIndex(var_49_cvector, 2); // 0x1e6b PushE
	Rotate(var_51_float, var_52_float, var_50_bool); // 0x1e6c Func
	var_41_bool = var_50_bool; // 0x1e6e Mov
	return 8; // 0x1e6f Return
}


func_8814(var_184_bool)
{
	var_186_int = 0; var_187_string = ""; // 0x226f PushV
	var_187_string = "ood2BigVlad3"; // 0x2270 MovS
	func_7892(var_186_int, var_187_string); // 0x2271 Call
	var_188_int = 0; // 0x2273 PushI
	var_189_bool = var_186_int == var_188_int; // 0x2274 Eq
	if(var_189_bool == 0) goto Label_8824; // 0x2275 JumpB
	var_184_bool = 1; // 0x2276 MovB
	return 0; // 0x2277 Return
	
Label_8824:
	var_184_bool = 0; // 0x2278 MovB
	return 0; // 0x2279 Return
}


func_9326(var_115_bool)
{
	var_117_int = 0; var_118_string = ""; // 0x246f PushV
	var_118_string = "d8q01BringBadBoy"; // 0x2470 MovS
	func_7892(var_117_int, var_118_string); // 0x2471 Call
	var_119_int = 1; // 0x2473 PushI
	var_120_bool = var_117_int == var_119_int; // 0x2474 Eq
	if(var_120_bool == 0) goto Label_9336; // 0x2475 JumpB
	var_115_bool = 1; // 0x2476 MovB
	return 0; // 0x2477 Return
	
Label_9336:
	var_115_bool = 0; // 0x2478 MovB
	return 0; // 0x2479 Return
}


func_7792(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0x1e70 PushV
	IsLoaded(var_43_bool); // 0x1e71 Func
	var_41_bool = var_43_bool; // 0x1e73 Mov
	return 2; // 0x1e74 Return
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
	func_8513(); // 0x79 Call
	var_118_string = ""; // 0x7b PushV
	var_118_string = "Neutral"; // 0x7c MovS
	func_180(var_108_object, var_118_string); // 0x7d Call
	var_133_int = 401; // 0x7f PushI
	SetMessage(var_133_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_134_int = 402; // 0x84 PushI
	var_135_int = 471; // 0x85 PushI
	var_136_int = 468; // 0x86 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x87 TObjFunc
	var_137_int = 403; // 0x89 PushI
	var_138_int = 472; // 0x8a PushI
	var_139_int = 469; // 0x8b PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x8c TObjFunc
	var_140_int = 404; // 0x8e PushI
	var_141_int = -1; // 0x8f PushI
	var_142_int = 470; // 0x90 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
	
Label_150:
	var_143_bool = 0; // 0x96 PushV
	func_7949(var_143_bool); // 0x97 Call
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
	func_7857(var_145_string); // 0xa1 Call
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


func_6771(var_0_object, var_744_int, var_745_object)
{
	var_747_object = Obj(); var_748_bool = 0; var_749_int = 0; var_750_bool = 0; var_751_object = Obj(); var_752_bool = 0; var_753_int = 0; var_754_bool = 0; // 0x1a73 PushV
	var_0_object = var_745_object; // 0x1a74 TMov
	var_755_bool = 0; var_756_object = Obj(); // 0x1a75 PushV
	var_756_object = var_745_object; // 0x1a76 Mov
	func_7797(var_756_object); // 0x1a77 Call
	var_757_bool = var_755_bool == 0; // 0x1a79 Not
	if(var_757_bool == 0) goto Label_6781; // 0x1a7a JumpB
	var_744_int = -2; // 0x1a7b MovI
	return 8; // 0x1a7c Return
	
Label_6781:
	CreateDialog(var_751_object); // 0x1a7d Func
	var_758_int = 0; // 0x1a7f PushV
	func_7945(var_758_int); // 0x1a80 Call
	SetNPCName(var_758_int); // 0x1a82 ObjFunc
	var_759_string = ""; // 0x1a84 PushV
	func_7947(var_759_string); // 0x1a85 Call
	SetPhoto(var_759_string); // 0x1a87 ObjFunc
	var_760_int = 0; // 0x1a89 PushV
	func_9589(var_760_int); // 0x1a8a Call
	SetPlayerName(var_760_int); // 0x1a8c ObjFunc
	var_753_int = -1; // 0x1a8e MovI
	IsOverrideActive(var_752_bool); // 0x1a8f Func
	var_761_bool = var_752_bool; // 0x1a91 Push
	if(var_761_bool == 0) goto Label_6805; // 0x1a92 JumpB
	var_744_int = -2; // 0x1a93 MovI
	return 8; // 0x1a94 Return
	
Label_6805:
	DoDialog(var_751_object); // 0x1a95 Func
	var_762_object = Obj(); var_763_object = Obj(); // 0x1a97 PushV
	var_762_object = var_745_object; // 0x1a98 Mov
	var_763_object = var_751_object; // 0x1a99 Mov
	TaskCall(15); // 0x1a9a TaskCall
	func_6834(var_764_object, var_765_object, var_766_string, var_767_bool, var_762_object, var_763_object); // 0x1a9b Call
	TaskReturn(); // 0x1a9c TaskReturn
	IsDialogEnd(var_754_bool); // 0x1a9e ObjFunc
	
Label_6816:
	var_804_bool = var_754_bool == 0; // 0x1aa0 Not
	if(var_804_bool == 0) goto Label_6823; // 0x1aa1 JumpB
	sync(); // 0x1aa2 Func
	IsDialogEnd(var_754_bool); // 0x1aa4 ObjFunc
	goto Label_6816; // 0x1aa6 Jump
	
Label_6823:
	var_805_object = Obj(); // 0x1aa7 PushV
	var_805_object = var_745_object; // 0x1aa8 Mov
	func_7853(); // 0x1aa9 Call
	StopDialog(var_751_object); // 0x1aab Func
	GetReturnValue(var_753_int); // 0x1aad ObjFunc
	var_744_int = var_753_int; // 0x1aaf Mov
	return 8; // 0x1ab0 Return
}


func_7797(var_55_bool)
{
	var_57_float = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; // 0x1e75 PushV
	GetPosition(var_66_cvector); // 0x1e76 ObjFunc
	GetEyesHeight(var_65_float); // 0x1e78 ObjFunc
	var_73_float = GetByIndex(var_66_cvector, 1); // 0x1e7a PushE
	var_73_float = var_73_float + var_65_float; // 0x1e7b Add2
	SetByIndex(var_66_cvector, 1) = var_73_float; // 0x1e7c PopE
	GetPosition(var_67_cvector); // 0x1e7d Func
	GetEyesHeight(var_65_float); // 0x1e7f Func
	var_74_float = GetByIndex(var_67_cvector, 1); // 0x1e81 PushE
	var_74_float = var_74_float + var_65_float; // 0x1e82 Add2
	SetByIndex(var_67_cvector, 1) = var_74_float; // 0x1e83 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x1e84 Sub2
	var_75_float = GetByIndex(var_68_cvector, 1); // 0x1e85 PushE
	var_75_float = 0; // 0x1e86 MovI
	SetByIndex(var_68_cvector, 1) = var_75_float; // 0x1e87 PopE
	var_76_int = var_68_cvector | var_68_cvector; // 0x1e88 Or
	var_77_float = sqrt(var_76_int); // 0x1e89 Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x1e8a Div2
	var_69_cvector = -var_68_cvector; // 0x1e8b Neg2
	var_78_int = 70; // 0x1e8c PushI
	var_79_float = var_68_cvector * var_78_int; // 0x1e8d Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x1e8e PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x1e8f PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x1e90 Xor2
	func_7882(var_80_cvector, var_81_cvector); // 0x1e91 Call
	var_88_int = 25; // 0x1e93 PushI
	var_89_float = var_80_cvector * var_88_int; // 0x1e94 Mult
	var_90_int = var_79_float + var_89_float; // 0x1e95 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x1e96 PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x1e97 Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x1e98 Add2
	IsOverrideActive(var_72_bool); // 0x1e99 Func
	var_92_bool = var_72_bool; // 0x1e9b Push
	if(var_92_bool == 0) goto Label_7839; // 0x1e9c JumpB
	var_55_bool = 0; // 0x1e9d MovB
	return 16; // 0x1e9e Return
	
Label_7839:
	StopWorld(); // 0x1e9f Func
	CameraTransit(var_71_cvector, var_69_cvector); // 0x1ea1 Func
	var_93_float = GetByIndex(var_70_cvector, 0); // 0x1ea3 PushE
	var_94_float = GetByIndex(var_70_cvector, 2); // 0x1ea4 PushE
	Rotate(var_93_float, var_94_float); // 0x1ea5 Func
	CameraWaitForPlayFinish(); // 0x1ea7 Func
	ResumeWorld(); // 0x1ea9 Func
	var_55_bool = 1; // 0x1eab MovB
	return 16; // 0x1eac Return
}


func_9338(var_87_bool)
{
	var_89_int = 0; var_90_string = ""; // 0x247b PushV
	var_90_string = "ood8BigVlad1"; // 0x247c MovS
	func_7892(var_89_int, var_90_string); // 0x247d Call
	var_93_int = 0; // 0x247f PushI
	var_94_bool = var_89_int == var_93_int; // 0x2480 Eq
	if(var_94_bool == 0) goto Label_9348; // 0x2481 JumpB
	var_87_bool = 1; // 0x2482 MovB
	return 0; // 0x2483 Return
	
Label_9348:
	var_87_bool = 0; // 0x2484 MovB
	return 0; // 0x2485 Return
}


func_8826(var_195_bool)
{
	var_197_int = 0; var_198_string = ""; // 0x227b PushV
	var_198_string = "ood2BigVlad4"; // 0x227c MovS
	func_7892(var_197_int, var_198_string); // 0x227d Call
	var_199_int = 0; // 0x227f PushI
	var_200_bool = var_197_int == var_199_int; // 0x2280 Eq
	if(var_200_bool == 0) goto Label_8836; // 0x2281 JumpB
	var_195_bool = 1; // 0x2282 MovB
	return 0; // 0x2283 Return
	
Label_8836:
	var_195_bool = 0; // 0x2284 MovB
	return 0; // 0x2285 Return
}


func_8838(var_410_bool, var_411_object)
{
	var_412_bool = 0; var_413_object = Obj(); // 0x2287 PushV
	var_413_object = var_411_object; // 0x2288 Mov
	func_9494(var_413_object); // 0x2289 Call
	if(var_412_bool == 0) goto Label_8846; // 0x228b JumpB
	var_410_bool = 1; // 0x228c MovB
	return 0; // 0x228d Return
	
Label_8846:
	var_410_bool = 0; // 0x228e MovB
	return 0; // 0x228f Return
}


func_9350(var_109_bool)
{
	var_111_int = 0; var_112_string = ""; // 0x2487 PushV
	var_112_string = "ood8BigVlad2"; // 0x2488 MovS
	func_7892(var_111_int, var_112_string); // 0x2489 Call
	var_113_int = 0; // 0x248b PushI
	var_114_bool = var_111_int == var_113_int; // 0x248c Eq
	if(var_114_bool == 0) goto Label_9360; // 0x248d JumpB
	var_109_bool = 1; // 0x248e MovB
	return 0; // 0x248f Return
	
Label_9360:
	var_109_bool = 0; // 0x2490 MovB
	return 0; // 0x2491 Return
}


func_8330()
{
	var_269_string = "ood4BigVlad3"; // 0x208b PushS
	var_270_int = 1; // 0x208c PushI
	SetVariable(var_269_string, var_270_int); // 0x208d Func
	return 0; // 0x208f Return
}


func_8848(var_129_bool)
{
	var_131_int = 0; var_132_string = ""; // 0x2291 PushV
	var_132_string = "d2q01"; // 0x2292 MovS
	func_7892(var_131_int, var_132_string); // 0x2293 Call
	var_133_int = 0; // 0x2295 PushI
	var_134_bool = var_131_int == var_133_int; // 0x2296 Eq
	if(var_134_bool == 0) goto Label_8858; // 0x2297 JumpB
	var_129_bool = 1; // 0x2298 MovB
	return 0; // 0x2299 Return
	
Label_8858:
	var_129_bool = 0; // 0x229a MovB
	return 0; // 0x229b Return
}


func_8336()
{
	var_273_object = Obj(); var_274_object = Obj(); var_275_int = 0; var_276_object = Obj(); var_277_object = Obj(); var_278_int = 0; // 0x2090 PushV
	var_279_object = Obj(); // 0x2091 PushV
	func_9539(var_279_object); // 0x2092 Call
	var_276_object = var_279_object; // 0x2093 Mov
	var_280_string = "d4q01BigVladGotoLara"; // 0x2095 PushS
	FindMark(var_277_object, var_280_string); // 0x2096 ObjFunc
	var_281_object = var_277_object; // 0x2098 Push
	if(var_281_object == 0) goto Label_8348; // 0x2099 JumpB
	Remove(); // 0x209a ObjFunc
	
Label_8348:
	var_282_string = "d4q01BigVladGotoLaraSelf"; // 0x209c PushS
	FindMark(var_277_object, var_282_string); // 0x209d ObjFunc
	var_283_object = var_277_object; // 0x209f Push
	if(var_283_object == 0) goto Label_8355; // 0x20a0 JumpB
	Remove(); // 0x20a1 ObjFunc
	
Label_8355:
	var_284_string = "d4q01BigVladGotoSklad"; // 0x20a3 PushS
	FindMark(var_277_object, var_284_string); // 0x20a4 ObjFunc
	var_285_object = var_277_object; // 0x20a6 Push
	if(var_285_object == 0) goto Label_8362; // 0x20a7 JumpB
	Remove(); // 0x20a8 ObjFunc
	
Label_8362:
	var_286_string = "d4q01BigVladGotoSobor"; // 0x20aa PushS
	FindMark(var_277_object, var_286_string); // 0x20ab ObjFunc
	var_287_object = var_277_object; // 0x20ad Push
	if(var_287_object == 0) goto Label_8369; // 0x20ae JumpB
	Remove(); // 0x20af ObjFunc
	
Label_8369:
	var_288_string = "d4q01BigVladGotoSoborAndTheaterSelf"; // 0x20b1 PushS
	FindMark(var_277_object, var_288_string); // 0x20b2 ObjFunc
	var_289_object = var_277_object; // 0x20b4 Push
	if(var_289_object == 0) goto Label_8376; // 0x20b5 JumpB
	Remove(); // 0x20b6 ObjFunc
	
Label_8376:
	var_290_string = "d4q01BigVladGotoTheater"; // 0x20b8 PushS
	FindMark(var_277_object, var_290_string); // 0x20b9 ObjFunc
	var_291_object = var_277_object; // 0x20bb Push
	if(var_291_object == 0) goto Label_8383; // 0x20bc JumpB
	Remove(); // 0x20bd ObjFunc
	
Label_8383:
	var_292_string = "d4q01LaraGotoMladVlad"; // 0x20bf PushS
	FindMark(var_277_object, var_292_string); // 0x20c0 ObjFunc
	var_293_object = var_277_object; // 0x20c2 Push
	if(var_293_object == 0) goto Label_8390; // 0x20c3 JumpB
	Remove(); // 0x20c4 ObjFunc
	
Label_8390:
	var_294_string = "d4q01LaraGotoMladVladSelf"; // 0x20c6 PushS
	FindMark(var_277_object, var_294_string); // 0x20c7 ObjFunc
	var_295_object = var_277_object; // 0x20c9 Push
	if(var_295_object == 0) goto Label_8397; // 0x20ca JumpB
	Remove(); // 0x20cb ObjFunc
	
Label_8397:
	var_296_string = "d4q01LaraGotoOspina"; // 0x20cd PushS
	FindMark(var_277_object, var_296_string); // 0x20ce ObjFunc
	var_297_object = var_277_object; // 0x20d0 Push
	if(var_297_object == 0) goto Label_8404; // 0x20d1 JumpB
	Remove(); // 0x20d2 ObjFunc
	
Label_8404:
	var_298_string = "d4q01LaraGotoOspinaSelf"; // 0x20d4 PushS
	FindMark(var_277_object, var_298_string); // 0x20d5 ObjFunc
	var_299_object = var_277_object; // 0x20d7 Push
	if(var_299_object == 0) goto Label_8411; // 0x20d8 JumpB
	Remove(); // 0x20d9 ObjFunc
	
Label_8411:
	var_300_string = "d4q01MladVladGotoBigVlad"; // 0x20db PushS
	FindMark(var_277_object, var_300_string); // 0x20dc ObjFunc
	var_301_object = var_277_object; // 0x20de Push
	if(var_301_object == 0) goto Label_8418; // 0x20df JumpB
	Remove(); // 0x20e0 ObjFunc
	
Label_8418:
	var_302_string = "d4q01MladVladGotoBigVladSelf"; // 0x20e2 PushS
	FindMark(var_277_object, var_302_string); // 0x20e3 ObjFunc
	var_303_object = var_277_object; // 0x20e5 Push
	if(var_303_object == 0) goto Label_8425; // 0x20e6 JumpB
	Remove(); // 0x20e7 ObjFunc
	
Label_8425:
	var_304_string = "d4q01MladVladGotoOspina"; // 0x20e9 PushS
	FindMark(var_277_object, var_304_string); // 0x20ea ObjFunc
	var_305_object = var_277_object; // 0x20ec Push
	if(var_305_object == 0) goto Label_8432; // 0x20ed JumpB
	Remove(); // 0x20ee ObjFunc
	
Label_8432:
	var_306_string = "d4q01OspinaGotoLara"; // 0x20f0 PushS
	FindMark(var_277_object, var_306_string); // 0x20f1 ObjFunc
	var_307_object = var_277_object; // 0x20f3 Push
	if(var_307_object == 0) goto Label_8439; // 0x20f4 JumpB
	Remove(); // 0x20f5 ObjFunc
	
Label_8439:
	var_308_string = "d4q01WastedMale"; // 0x20f7 PushS
	FindMark(var_277_object, var_308_string); // 0x20f8 ObjFunc
	var_309_object = var_277_object; // 0x20fa Push
	if(var_309_object == 0) goto Label_8446; // 0x20fb JumpB
	Remove(); // 0x20fc ObjFunc
	
Label_8446:
	var_310_string = "d4q01Whitemask"; // 0x20fe PushS
	FindMark(var_277_object, var_310_string); // 0x20ff ObjFunc
	var_311_object = var_277_object; // 0x2101 Push
	if(var_311_object == 0) goto Label_8453; // 0x2102 JumpB
	Remove(); // 0x2103 ObjFunc
	
Label_8453:
	func_9670(); // 0x2106 Call
	var_321_bool = 0; var_322_string = ""; var_323_string = ""; // 0x2108 PushV
	var_322_string = "quest_d4_01"; // 0x2109 MovS
	var_323_string = "completed"; // 0x210a MovS
	func_7904(var_321_bool, var_322_string, var_323_string); // 0x210b Call
	var_324_string = "d4q01_sobor_key"; // 0x210d PushS
	var_325_int = 1; // 0x210e PushI
	RemoveItemByType(var_278_int, var_324_string, var_325_int); // 0x210f ObjFunc
	var_326_string = "d4q01_theater_key"; // 0x2111 PushS
	var_327_int = 1; // 0x2112 PushI
	RemoveItemByType(var_278_int, var_326_string, var_327_int); // 0x2113 ObjFunc
	return 6; // 0x2115 Return
}


func_7313(var_0_object, var_1_object, var_2_object, var_3_object, var_957_object, var_958_object)
{
	var_0_object = var_958_object; // 0x1c92 TMov
	var_1_object = var_957_object; // 0x1c93 TMov
	var_3_object = 0; // 0x1c94 TMovB
	var_963_int = 1; // 0x1c95 PushI
	if(var_963_int == 0) goto Label_7403; // 0x1c96 JumpB
	var_964_string = ""; // 0x1c97 PushV
	var_964_string = "Neutral"; // 0x1c98 MovS
	func_7433(var_958_object, var_964_string); // 0x1c99 Call
	var_969_int = 13660; // 0x1c9b PushI
	SetMessage(var_969_int); // 0x1c9c TObjFunc
	ClearReplies(); // 0x1c9e TObjFunc
	var_970_bool = 0; // 0x1ca0 PushV
	var_970_bool = 0; // 0x1ca1 MovB
	var_971_bool = 0; var_972_object = Obj(); // 0x1ca2 PushV
	var_972_object = var_1_object; // 0x1ca3 MovT
	func_9338(var_972_object); // 0x1ca4 Call
	if(var_971_bool == 0) goto Label_7341; // 0x1ca6 JumpB
	var_977_bool = 0; var_978_object = Obj(); // 0x1ca7 PushV
	var_978_object = var_1_object; // 0x1ca8 MovT
	func_9314(var_978_object); // 0x1ca9 Call
	if(var_977_bool == 0) goto Label_7341; // 0x1cab JumpB
	var_970_bool = 1; // 0x1cac MovB
	
Label_7341:
	if(var_970_bool == 0) goto Label_7347; // 0x1cad JumpB
	var_983_int = 13661; // 0x1cae PushI
	var_984_int = 14920; // 0x1caf PushI
	var_985_int = 14919; // 0x1cb0 PushI
	AddReply(var_983_int, var_984_int, var_985_int); // 0x1cb1 TObjFunc
	
Label_7347:
	var_986_bool = 0; // 0x1cb3 PushV
	var_986_bool = 0; // 0x1cb4 MovB
	var_987_bool = 0; // 0x1cb5 PushV
	var_987_bool = 0; // 0x1cb6 MovB
	var_988_bool = 0; var_989_object = Obj(); // 0x1cb7 PushV
	var_989_object = var_1_object; // 0x1cb8 MovT
	func_9314(var_989_object); // 0x1cb9 Call
	var_990_bool = var_988_bool == 0; // 0x1cbb Not
	if(var_990_bool == 0) goto Label_7363; // 0x1cbc JumpB
	var_991_bool = 0; var_992_object = Obj(); // 0x1cbd PushV
	var_992_object = var_1_object; // 0x1cbe MovT
	func_9350(var_992_object); // 0x1cbf Call
	if(var_991_bool == 0) goto Label_7363; // 0x1cc1 JumpB
	var_987_bool = 1; // 0x1cc2 MovB
	
Label_7363:
	if(var_987_bool == 0) goto Label_7370; // 0x1cc3 JumpB
	var_997_bool = 0; var_998_object = Obj(); // 0x1cc4 PushV
	var_998_object = var_1_object; // 0x1cc5 MovT
	func_9326(var_998_object); // 0x1cc6 Call
	if(var_997_bool == 0) goto Label_7370; // 0x1cc8 JumpB
	var_986_bool = 1; // 0x1cc9 MovB
	
Label_7370:
	if(var_986_bool == 0) goto Label_7376; // 0x1cca JumpB
	var_1003_int = 13669; // 0x1ccb PushI
	var_1004_int = 14928; // 0x1ccc PushI
	var_1005_int = 14927; // 0x1ccd PushI
	AddReply(var_1003_int, var_1004_int, var_1005_int); // 0x1cce TObjFunc
	
Label_7376:
	var_1006_bool = 0; // 0x1cd0 PushV
	var_1006_bool = 0; // 0x1cd1 MovB
	var_1007_bool = 0; var_1008_object = Obj(); // 0x1cd2 PushV
	var_1008_object = var_1_object; // 0x1cd3 MovT
	func_9326(var_1008_object); // 0x1cd4 Call
	if(var_1007_bool == 0) goto Label_7389; // 0x1cd6 JumpB
	var_1009_bool = 0; var_1010_object = Obj(); // 0x1cd7 PushV
	var_1010_object = var_1_object; // 0x1cd8 MovT
	func_9362(var_1010_object); // 0x1cd9 Call
	if(var_1009_bool == 0) goto Label_7389; // 0x1cdb JumpB
	var_1006_bool = 1; // 0x1cdc MovB
	
Label_7389:
	if(var_1006_bool == 0) goto Label_7395; // 0x1cdd JumpB
	var_1015_int = 13683; // 0x1cde PushI
	var_1016_int = 14944; // 0x1cdf PushI
	var_1017_int = 14943; // 0x1ce0 PushI
	AddReply(var_1015_int, var_1016_int, var_1017_int); // 0x1ce1 TObjFunc
	
Label_7395:
	var_1018_int = 13674; // 0x1ce3 PushI
	var_1019_int = -1; // 0x1ce4 PushI
	var_1020_int = 14932; // 0x1ce5 PushI
	AddReply(var_1018_int, var_1019_int, var_1020_int); // 0x1ce6 TObjFunc
	goto Label_7403; // 0x1ce8 Jump
	
Label_7403:
	var_1021_bool = 0; // 0x1ceb PushV
	func_7949(var_1021_bool); // 0x1cec Call
	if(var_1021_bool == 0) goto Label_7418; // 0x1cee JumpB
	
Label_7407:
	lshWaitForAnimEnd(); // 0x1cef Func
	var_1022_object = var_3_object; // 0x1cf1 PushT
	if(var_1022_object == 0) goto Label_7412; // 0x1cf2 JumpB
	goto Label_7417; // 0x1cf3 Jump
	
Label_7417:
	goto Label_7432; // 0x1cf9 Jump
	
Label_7432:
	return 0; // 0x1d08 Return
	
Label_7412:
	var_1023_string = ""; // 0x1cf4 PushV
	var_1023_string = var_2_object; // 0x1cf5 MovT
	func_7857(var_1023_string); // 0x1cf6 Call
	goto Label_7407; // 0x1cf8 Jump
	
Label_7418:
	var_1024_string = "all"; // 0x1cfa PushS
	var_1025_string = "idle"; // 0x1cfb PushS
	PlayAnimation(var_1024_string, var_1025_string); // 0x1cfc Func
	
Label_7422:
	WaitForAnimEnd(); // 0x1cfe Func
	var_1026_object = var_3_object; // 0x1d00 PushT
	if(var_1026_object == 0) goto Label_7427; // 0x1d01 JumpB
	goto Label_7432; // 0x1d02 Jump
	
Label_7427:
	var_1027_string = "all"; // 0x1d03 PushS
	var_1028_string = "idle"; // 0x1d04 PushS
	PlayAnimation(var_1027_string, var_1028_string); // 0x1d05 Func
	goto Label_7422; // 0x1d07 Jump
}


func_9362(var_127_bool)
{
	var_129_int = 0; var_130_string = ""; // 0x2493 PushV
	var_130_string = "ood8BigVlad3"; // 0x2494 MovS
	func_7892(var_129_int, var_130_string); // 0x2495 Call
	var_131_int = 0; // 0x2497 PushI
	var_132_bool = var_129_int == var_131_int; // 0x2498 Eq
	if(var_132_bool == 0) goto Label_9372; // 0x2499 JumpB
	var_127_bool = 1; // 0x249a MovB
	return 0; // 0x249b Return
	
Label_9372:
	var_127_bool = 0; // 0x249c MovB
	return 0; // 0x249d Return
}


func_1176(var_0_object, var_1_object, var_2_object, var_3_object, var_180_object, var_181_object)
{
	var_0_object = var_181_object; // 0x499 TMov
	var_1_object = var_180_object; // 0x49a TMov
	var_3_object = 0; // 0x49b TMovB
	var_186_int = 1; // 0x49c PushI
	if(var_186_int == 0) goto Label_1402; // 0x49d JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x49e PushV
	var_188_object = var_1_object; // 0x49f MovT
	func_9458(var_188_object); // 0x4a0 Call
	if(var_187_bool == 0) goto Label_1212; // 0x4a2 JumpB
	var_195_object = Obj(); var_196_object = Obj(); // 0x4a3 PushV
	var_195_object = var_1_object; // 0x4a4 MovT
	var_196_object = var_0_object; // 0x4a5 MovT
	func_8742(); // 0x4a6 Call
	var_199_string = ""; // 0x4a8 PushV
	var_199_string = "Neutral"; // 0x4a9 MovS
	func_1432(var_181_object, var_199_string); // 0x4aa Call
	var_204_int = 5238; // 0x4ac PushI
	SetMessage(var_204_int); // 0x4ad TObjFunc
	ClearReplies(); // 0x4af TObjFunc
	var_205_int = 5240; // 0x4b1 PushI
	var_206_int = 6468; // 0x4b2 PushI
	var_207_int = 5775; // 0x4b3 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x4b4 TObjFunc
	var_208_int = 5239; // 0x4b6 PushI
	var_209_int = 6465; // 0x4b7 PushI
	var_210_int = 5774; // 0x4b8 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x4b9 TObjFunc
	goto Label_1402; // 0x4bb Jump
	
Label_1402:
	var_211_bool = 0; // 0x57a PushV
	func_7949(var_211_bool); // 0x57b Call
	if(var_211_bool == 0) goto Label_1417; // 0x57d JumpB
	
Label_1406:
	lshWaitForAnimEnd(); // 0x57e Func
	var_212_object = var_3_object; // 0x580 PushT
	if(var_212_object == 0) goto Label_1411; // 0x581 JumpB
	goto Label_1416; // 0x582 Jump
	
Label_1416:
	goto Label_1431; // 0x588 Jump
	
Label_1431:
	return 0; // 0x597 Return
	
Label_1411:
	var_213_string = ""; // 0x583 PushV
	var_213_string = var_2_object; // 0x584 MovT
	func_7857(var_213_string); // 0x585 Call
	goto Label_1406; // 0x587 Jump
	
Label_1417:
	var_214_string = "all"; // 0x589 PushS
	var_215_string = "idle"; // 0x58a PushS
	PlayAnimation(var_214_string, var_215_string); // 0x58b Func
	
Label_1421:
	WaitForAnimEnd(); // 0x58d Func
	var_216_object = var_3_object; // 0x58f PushT
	if(var_216_object == 0) goto Label_1426; // 0x590 JumpB
	goto Label_1431; // 0x591 Jump
	
Label_1426:
	var_217_string = "all"; // 0x592 PushS
	var_218_string = "idle"; // 0x593 PushS
	PlayAnimation(var_217_string, var_218_string); // 0x594 Func
	goto Label_1421; // 0x596 Jump
	
Label_1212:
	var_219_bool = 0; // 0x4bc PushV
	var_219_bool = 0; // 0x4bd MovB
	var_220_bool = 0; var_221_object = Obj(); // 0x4be PushV
	var_221_object = var_1_object; // 0x4bf MovT
	func_9470(var_221_object); // 0x4c0 Call
	if(var_220_bool == 0) goto Label_1226; // 0x4c2 JumpB
	var_226_bool = 0; var_227_object = Obj(); // 0x4c3 PushV
	var_227_object = var_1_object; // 0x4c4 MovT
	func_8766(var_227_object); // 0x4c5 Call
	var_232_bool = var_226_bool == 0; // 0x4c7 Not
	if(var_232_bool == 0) goto Label_1226; // 0x4c8 JumpB
	var_219_bool = 1; // 0x4c9 MovB
	
Label_1226:
	if(var_219_bool == 0) goto Label_1252; // 0x4ca JumpB
	var_233_string = ""; // 0x4cb PushV
	var_233_string = "Neutral"; // 0x4cc MovS
	func_1432(var_181_object, var_233_string); // 0x4cd Call
	var_234_int = 5253; // 0x4cf PushI
	SetMessage(var_234_int); // 0x4d0 TObjFunc
	ClearReplies(); // 0x4d2 TObjFunc
	var_235_int = 5254; // 0x4d4 PushI
	var_236_int = 5792; // 0x4d5 PushI
	var_237_int = 5791; // 0x4d6 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x4d7 TObjFunc
	var_238_int = 5260; // 0x4d9 PushI
	var_239_int = 5798; // 0x4da PushI
	var_240_int = 5797; // 0x4db PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x4dc TObjFunc
	var_241_int = 5259; // 0x4de PushI
	var_242_int = -1; // 0x4df PushI
	var_243_int = 5796; // 0x4e0 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x4e1 TObjFunc
	goto Label_1402; // 0x4e3 Jump
	
Label_1252:
	var_244_string = ""; // 0x4e4 PushV
	var_244_string = "Neutral"; // 0x4e5 MovS
	func_1432(var_181_object, var_244_string); // 0x4e6 Call
	var_245_int = 7539; // 0x4e8 PushI
	SetMessage(var_245_int); // 0x4e9 TObjFunc
	ClearReplies(); // 0x4eb TObjFunc
	var_246_bool = 0; // 0x4ed PushV
	var_246_bool = 0; // 0x4ee MovB
	var_247_bool = 0; var_248_object = Obj(); // 0x4ef PushV
	var_248_object = var_1_object; // 0x4f0 MovT
	func_9482(var_248_object); // 0x4f1 Call
	if(var_247_bool == 0) goto Label_1274; // 0x4f3 JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0x4f4 PushV
	var_254_object = var_1_object; // 0x4f5 MovT
	func_8766(var_254_object); // 0x4f6 Call
	if(var_253_bool == 0) goto Label_1274; // 0x4f8 JumpB
	var_246_bool = 1; // 0x4f9 MovB
	
Label_1274:
	if(var_246_bool == 0) goto Label_1280; // 0x4fa JumpB
	var_255_int = 7540; // 0x4fb PushI
	var_256_int = 5777; // 0x4fc PushI
	var_257_int = 8322; // 0x4fd PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x4fe TObjFunc
	
Label_1280:
	var_258_bool = 0; // 0x500 PushV
	var_258_bool = 0; // 0x501 MovB
	var_259_bool = 0; var_260_object = Obj(); // 0x502 PushV
	var_260_object = var_1_object; // 0x503 MovT
	func_9398(var_260_object); // 0x504 Call
	if(var_259_bool == 0) goto Label_1293; // 0x506 JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x507 PushV
	var_266_object = var_1_object; // 0x508 MovT
	func_8872(var_266_object); // 0x509 Call
	if(var_265_bool == 0) goto Label_1293; // 0x50b JumpB
	var_258_bool = 1; // 0x50c MovB
	
Label_1293:
	if(var_258_bool == 0) goto Label_1299; // 0x50d JumpB
	var_271_int = 7548; // 0x50e PushI
	var_272_int = 8354; // 0x50f PushI
	var_273_int = 8330; // 0x510 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x511 TObjFunc
	
Label_1299:
	var_274_bool = 0; // 0x513 PushV
	var_274_bool = 0; // 0x514 MovB
	var_275_bool = 0; var_276_object = Obj(); // 0x515 PushV
	var_276_object = var_1_object; // 0x516 MovT
	func_9374(var_276_object); // 0x517 Call
	if(var_275_bool == 0) goto Label_1312; // 0x519 JumpB
	var_281_bool = 0; var_282_object = Obj(); // 0x51a PushV
	var_282_object = var_1_object; // 0x51b MovT
	func_8884(var_282_object); // 0x51c Call
	if(var_281_bool == 0) goto Label_1312; // 0x51e JumpB
	var_274_bool = 1; // 0x51f MovB
	
Label_1312:
	if(var_274_bool == 0) goto Label_1318; // 0x520 JumpB
	var_287_int = 7552; // 0x521 PushI
	var_288_int = 8349; // 0x522 PushI
	var_289_int = 8334; // 0x523 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x524 TObjFunc
	
Label_1318:
	var_290_bool = 0; // 0x526 PushV
	var_290_bool = 0; // 0x527 MovB
	var_291_bool = 0; var_292_object = Obj(); // 0x528 PushV
	var_292_object = var_1_object; // 0x529 MovT
	func_9410(var_292_object); // 0x52a Call
	if(var_291_bool == 0) goto Label_1331; // 0x52c JumpB
	var_297_bool = 0; var_298_object = Obj(); // 0x52d PushV
	var_298_object = var_1_object; // 0x52e MovT
	func_8896(var_298_object); // 0x52f Call
	if(var_297_bool == 0) goto Label_1331; // 0x531 JumpB
	var_290_bool = 1; // 0x532 MovB
	
Label_1331:
	if(var_290_bool == 0) goto Label_1337; // 0x533 JumpB
	var_303_int = 7553; // 0x534 PushI
	var_304_int = 8350; // 0x535 PushI
	var_305_int = 8335; // 0x536 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x537 TObjFunc
	
Label_1337:
	var_306_bool = 0; // 0x539 PushV
	var_306_bool = 0; // 0x53a MovB
	var_307_bool = 0; var_308_object = Obj(); // 0x53b PushV
	var_308_object = var_1_object; // 0x53c MovT
	func_9422(var_308_object); // 0x53d Call
	if(var_307_bool == 0) goto Label_1350; // 0x53f JumpB
	var_313_bool = 0; var_314_object = Obj(); // 0x540 PushV
	var_314_object = var_1_object; // 0x541 MovT
	func_8908(var_314_object); // 0x542 Call
	if(var_313_bool == 0) goto Label_1350; // 0x544 JumpB
	var_306_bool = 1; // 0x545 MovB
	
Label_1350:
	if(var_306_bool == 0) goto Label_1356; // 0x546 JumpB
	var_319_int = 7556; // 0x547 PushI
	var_320_int = 8351; // 0x548 PushI
	var_321_int = 8338; // 0x549 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x54a TObjFunc
	
Label_1356:
	var_322_bool = 0; // 0x54c PushV
	var_322_bool = 0; // 0x54d MovB
	var_323_bool = 0; var_324_object = Obj(); // 0x54e PushV
	var_324_object = var_1_object; // 0x54f MovT
	func_9004(var_324_object); // 0x550 Call
	if(var_323_bool == 0) goto Label_1369; // 0x552 JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x553 PushV
	var_330_object = var_1_object; // 0x554 MovT
	func_8920(var_330_object); // 0x555 Call
	if(var_329_bool == 0) goto Label_1369; // 0x557 JumpB
	var_322_bool = 1; // 0x558 MovB
	
Label_1369:
	if(var_322_bool == 0) goto Label_1375; // 0x559 JumpB
	var_335_int = 7560; // 0x55a PushI
	var_336_int = 8352; // 0x55b PushI
	var_337_int = 8342; // 0x55c PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x55d TObjFunc
	
Label_1375:
	var_338_bool = 0; // 0x55f PushV
	var_338_bool = 0; // 0x560 MovB
	var_339_bool = 0; var_340_object = Obj(); // 0x561 PushV
	var_340_object = var_1_object; // 0x562 MovT
	func_9446(var_340_object); // 0x563 Call
	if(var_339_bool == 0) goto Label_1388; // 0x565 JumpB
	var_345_bool = 0; var_346_object = Obj(); // 0x566 PushV
	var_346_object = var_1_object; // 0x567 MovT
	func_8932(var_346_object); // 0x568 Call
	if(var_345_bool == 0) goto Label_1388; // 0x56a JumpB
	var_338_bool = 1; // 0x56b MovB
	
Label_1388:
	if(var_338_bool == 0) goto Label_1394; // 0x56c JumpB
	var_351_int = 7561; // 0x56d PushI
	var_352_int = 8353; // 0x56e PushI
	var_353_int = 8343; // 0x56f PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x570 TObjFunc
	
Label_1394:
	var_354_int = 7590; // 0x572 PushI
	var_355_int = -1; // 0x573 PushI
	var_356_int = 8376; // 0x574 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x575 TObjFunc
	goto Label_1402; // 0x577 Jump
}


func_8860(var_167_bool)
{
	var_169_int = 0; var_170_string = ""; // 0x229d PushV
	var_170_string = "d2q01"; // 0x229e MovS
	func_7892(var_169_int, var_170_string); // 0x229f Call
	var_171_int = 6; // 0x22a1 PushI
	var_172_bool = var_169_int == var_171_int; // 0x22a2 Eq
	if(var_172_bool == 0) goto Label_8870; // 0x22a3 JumpB
	var_167_bool = 1; // 0x22a4 MovB
	return 0; // 0x22a5 Return
	
Label_8870:
	var_167_bool = 0; // 0x22a6 MovB
	return 0; // 0x22a7 Return
}


func_9374(var_289_bool)
{
	var_291_int = 0; var_292_string = ""; // 0x249f PushV
	var_292_string = "KnowAlexandr"; // 0x24a0 MovS
	func_7892(var_291_int, var_292_string); // 0x24a1 Call
	var_293_int = 1; // 0x24a3 PushI
	var_294_bool = var_291_int == var_293_int; // 0x24a4 Eq
	if(var_294_bool == 0) goto Label_9384; // 0x24a5 JumpB
	var_289_bool = 1; // 0x24a6 MovB
	return 0; // 0x24a7 Return
	
Label_9384:
	var_289_bool = 0; // 0x24a8 MovB
	return 0; // 0x24a9 Return
}


func_2719(var_0_object, var_361_int, var_362_object)
{
	var_364_object = Obj(); var_365_bool = 0; var_366_int = 0; var_367_bool = 0; var_368_object = Obj(); var_369_bool = 0; var_370_int = 0; var_371_bool = 0; // 0xa9f PushV
	var_0_object = var_362_object; // 0xaa0 TMov
	var_372_bool = 0; var_373_object = Obj(); // 0xaa1 PushV
	var_373_object = var_362_object; // 0xaa2 Mov
	func_7797(var_373_object); // 0xaa3 Call
	var_374_bool = var_372_bool == 0; // 0xaa5 Not
	if(var_374_bool == 0) goto Label_2729; // 0xaa6 JumpB
	var_361_int = -2; // 0xaa7 MovI
	return 8; // 0xaa8 Return
	
Label_2729:
	CreateDialog(var_368_object); // 0xaa9 Func
	var_375_int = 0; // 0xaab PushV
	func_7945(var_375_int); // 0xaac Call
	SetNPCName(var_375_int); // 0xaae ObjFunc
	var_376_string = ""; // 0xab0 PushV
	func_7947(var_376_string); // 0xab1 Call
	SetPhoto(var_376_string); // 0xab3 ObjFunc
	var_377_int = 0; // 0xab5 PushV
	func_9589(var_377_int); // 0xab6 Call
	SetPlayerName(var_377_int); // 0xab8 ObjFunc
	var_370_int = -1; // 0xaba MovI
	IsOverrideActive(var_369_bool); // 0xabb Func
	var_378_bool = var_369_bool; // 0xabd Push
	if(var_378_bool == 0) goto Label_2753; // 0xabe JumpB
	var_361_int = -2; // 0xabf MovI
	return 8; // 0xac0 Return
	
Label_2753:
	DoDialog(var_368_object); // 0xac1 Func
	var_379_object = Obj(); var_380_object = Obj(); // 0xac3 PushV
	var_379_object = var_362_object; // 0xac4 Mov
	var_380_object = var_368_object; // 0xac5 Mov
	TaskCall(9); // 0xac6 TaskCall
	func_2782(var_381_object, var_382_object, var_383_string, var_384_bool, var_379_object, var_380_object); // 0xac7 Call
	TaskReturn(); // 0xac8 TaskReturn
	IsDialogEnd(var_371_bool); // 0xaca ObjFunc
	
Label_2764:
	var_469_bool = var_371_bool == 0; // 0xacc Not
	if(var_469_bool == 0) goto Label_2771; // 0xacd JumpB
	sync(); // 0xace Func
	IsDialogEnd(var_371_bool); // 0xad0 ObjFunc
	goto Label_2764; // 0xad2 Jump
	
Label_2771:
	var_470_object = Obj(); // 0xad3 PushV
	var_470_object = var_362_object; // 0xad4 Mov
	func_7853(); // 0xad5 Call
	StopDialog(var_368_object); // 0xad7 Func
	GetReturnValue(var_370_int); // 0xad9 ObjFunc
	var_361_int = var_370_int; // 0xadb Mov
	return 8; // 0xadc Return
}


func_8872(var_279_bool)
{
	var_281_int = 0; var_282_string = ""; // 0x22a9 PushV
	var_282_string = "ood1BigVlad4"; // 0x22aa MovS
	func_7892(var_281_int, var_282_string); // 0x22ab Call
	var_283_int = 0; // 0x22ad PushI
	var_284_bool = var_281_int == var_283_int; // 0x22ae Eq
	if(var_284_bool == 0) goto Label_8882; // 0x22af JumpB
	var_279_bool = 1; // 0x22b0 MovB
	return 0; // 0x22b1 Return
	
Label_8882:
	var_279_bool = 0; // 0x22b2 MovB
	return 0; // 0x22b3 Return
}


func_9386(var_139_bool)
{
	var_141_int = 0; var_142_string = ""; // 0x24ab PushV
	var_142_string = "ood6BigVlad3"; // 0x24ac MovS
	func_7892(var_141_int, var_142_string); // 0x24ad Call
	var_143_int = 0; // 0x24af PushI
	var_144_bool = var_141_int == var_143_int; // 0x24b0 Eq
	if(var_144_bool == 0) goto Label_9396; // 0x24b1 JumpB
	var_139_bool = 1; // 0x24b2 MovB
	return 0; // 0x24b3 Return
	
Label_9396:
	var_139_bool = 0; // 0x24b4 MovB
	return 0; // 0x24b5 Return
}


func_7853()
{
	CameraSwitchToNormal(); // 0x1eae Func
	return 0; // 0x1eb0 Return
}


func_7857(var_45_string)
{
	var_46_float = 0; var_47_float = 0; var_48_float = 0; var_49_float = 0; // 0x1eb1 PushV
	var_50_string = "playing "; // 0x1eb2 PushS
	var_51_int = var_50_string + var_45_string; // 0x1eb3 Add
	Trace(var_51_int); // 0x1eb4 Func
	lshGetAnimTimes(var_45_string, var_48_float, var_49_float); // 0x1eb6 Func
	lshPlayAnimation(var_48_float, var_49_float); // 0x1eb8 Func
	var_52_string = "start: "; // 0x1eba PushS
	var_53_int = var_52_string + var_48_float; // 0x1ebb Add
	Trace(var_53_int); // 0x1ebc Func
	var_54_string = "end: "; // 0x1ebe PushS
	var_55_int = var_54_string + var_49_float; // 0x1ebf Add
	Trace(var_55_int); // 0x1ec0 Func
	return 4; // 0x1ec2 Return
}


func_6834(var_0_object, var_1_object, var_2_object, var_3_object, var_762_object, var_763_object)
{
	var_0_object = var_763_object; // 0x1ab3 TMov
	var_1_object = var_762_object; // 0x1ab4 TMov
	var_3_object = 0; // 0x1ab5 TMovB
	var_768_int = 1; // 0x1ab6 PushI
	if(var_768_int == 0) goto Label_6877; // 0x1ab7 JumpB
	var_769_string = ""; // 0x1ab8 PushV
	var_769_string = "Neutral"; // 0x1ab9 MovS
	func_6907(var_763_object, var_769_string); // 0x1aba Call
	var_774_int = 11558; // 0x1abc PushI
	SetMessage(var_774_int); // 0x1abd TObjFunc
	ClearReplies(); // 0x1abf TObjFunc
	var_775_bool = 0; var_776_object = Obj(); // 0x1ac1 PushV
	var_776_object = var_1_object; // 0x1ac2 MovT
	func_9206(var_776_object); // 0x1ac3 Call
	if(var_775_bool == 0) goto Label_6859; // 0x1ac5 JumpB
	var_781_int = 11559; // 0x1ac6 PushI
	var_782_int = 12754; // 0x1ac7 PushI
	var_783_int = 12753; // 0x1ac8 PushI
	AddReply(var_781_int, var_782_int, var_783_int); // 0x1ac9 TObjFunc
	
Label_6859:
	var_784_bool = 0; var_785_object = Obj(); // 0x1acb PushV
	var_785_object = var_1_object; // 0x1acc MovT
	func_9218(var_785_object); // 0x1acd Call
	if(var_784_bool == 0) goto Label_6869; // 0x1acf JumpB
	var_790_int = 11570; // 0x1ad0 PushI
	var_791_int = 12765; // 0x1ad1 PushI
	var_792_int = 12764; // 0x1ad2 PushI
	AddReply(var_790_int, var_791_int, var_792_int); // 0x1ad3 TObjFunc
	
Label_6869:
	var_793_int = 11589; // 0x1ad5 PushI
	var_794_int = -1; // 0x1ad6 PushI
	var_795_int = 12784; // 0x1ad7 PushI
	AddReply(var_793_int, var_794_int, var_795_int); // 0x1ad8 TObjFunc
	goto Label_6877; // 0x1ada Jump
	
Label_6877:
	var_796_bool = 0; // 0x1add PushV
	func_7949(var_796_bool); // 0x1ade Call
	if(var_796_bool == 0) goto Label_6892; // 0x1ae0 JumpB
	
Label_6881:
	lshWaitForAnimEnd(); // 0x1ae1 Func
	var_797_object = var_3_object; // 0x1ae3 PushT
	if(var_797_object == 0) goto Label_6886; // 0x1ae4 JumpB
	goto Label_6891; // 0x1ae5 Jump
	
Label_6891:
	goto Label_6906; // 0x1aeb Jump
	
Label_6906:
	return 0; // 0x1afa Return
	
Label_6886:
	var_798_string = ""; // 0x1ae6 PushV
	var_798_string = var_2_object; // 0x1ae7 MovT
	func_7857(var_798_string); // 0x1ae8 Call
	goto Label_6881; // 0x1aea Jump
	
Label_6892:
	var_799_string = "all"; // 0x1aec PushS
	var_800_string = "idle"; // 0x1aed PushS
	PlayAnimation(var_799_string, var_800_string); // 0x1aee Func
	
Label_6896:
	WaitForAnimEnd(); // 0x1af0 Func
	var_801_object = var_3_object; // 0x1af2 PushT
	if(var_801_object == 0) goto Label_6901; // 0x1af3 JumpB
	goto Label_6906; // 0x1af4 Jump
	
Label_6901:
	var_802_string = "all"; // 0x1af5 PushS
	var_803_string = "idle"; // 0x1af6 PushS
	PlayAnimation(var_802_string, var_803_string); // 0x1af7 Func
	goto Label_6896; // 0x1af9 Jump
}


func_180(var_2_object, var_50_string)
{
	var_51_bool = 0; // 0xb5 PushV
	func_7949(var_51_bool); // 0xb6 Call
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
	func_7857(var_54_string); // 0xc0 Call
	var_2_object = var_50_string; // 0xc2 TMov
	return 0; // 0xc3 Return
}


func_8884(var_295_bool)
{
	var_297_int = 0; var_298_string = ""; // 0x22b5 PushV
	var_298_string = "ood1BigVlad5"; // 0x22b6 MovS
	func_7892(var_297_int, var_298_string); // 0x22b7 Call
	var_299_int = 0; // 0x22b9 PushI
	var_300_bool = var_297_int == var_299_int; // 0x22ba Eq
	if(var_300_bool == 0) goto Label_8894; // 0x22bb JumpB
	var_295_bool = 1; // 0x22bc MovB
	return 0; // 0x22bd Return
	
Label_8894:
	var_295_bool = 0; // 0x22be MovB
	return 0; // 0x22bf Return
}


func_9398(var_273_bool)
{
	var_275_int = 0; var_276_string = ""; // 0x24b7 PushV
	var_276_string = "KnowAnna"; // 0x24b8 MovS
	func_7892(var_275_int, var_276_string); // 0x24b9 Call
	var_277_int = 1; // 0x24bb PushI
	var_278_bool = var_275_int == var_277_int; // 0x24bc Eq
	if(var_278_bool == 0) goto Label_9408; // 0x24bd JumpB
	var_273_bool = 1; // 0x24be MovB
	return 0; // 0x24bf Return
	
Label_9408:
	var_273_bool = 0; // 0x24c0 MovB
	return 0; // 0x24c1 Return
}


func_8896(var_311_bool)
{
	var_313_int = 0; var_314_string = ""; // 0x22c1 PushV
	var_314_string = "ood1BigVlad6"; // 0x22c2 MovS
	func_7892(var_313_int, var_314_string); // 0x22c3 Call
	var_315_int = 0; // 0x22c5 PushI
	var_316_bool = var_313_int == var_315_int; // 0x22c6 Eq
	if(var_316_bool == 0) goto Label_8906; // 0x22c7 JumpB
	var_311_bool = 1; // 0x22c8 MovB
	return 0; // 0x22c9 Return
	
Label_8906:
	var_311_bool = 0; // 0x22ca MovB
	return 0; // 0x22cb Return
}


func_9410(var_305_bool)
{
	var_307_int = 0; var_308_string = ""; // 0x24c3 PushV
	var_308_string = "KnowGeorg"; // 0x24c4 MovS
	func_7892(var_307_int, var_308_string); // 0x24c5 Call
	var_309_int = 1; // 0x24c7 PushI
	var_310_bool = var_307_int == var_309_int; // 0x24c8 Eq
	if(var_310_bool == 0) goto Label_9420; // 0x24c9 JumpB
	var_305_bool = 1; // 0x24ca MovB
	return 0; // 0x24cb Return
	
Label_9420:
	var_305_bool = 0; // 0x24cc MovB
	return 0; // 0x24cd Return
}


func_7875()
{
	var_43_bool = 0; // 0x1ec3 PushV
	func_7949(var_43_bool); // 0x1ec4 Call
	if(var_43_bool == 0) goto Label_7881; // 0x1ec6 JumpB
	lshStopSpeech(); // 0x1ec7 Func
	
Label_7881:
	return 0; // 0x1ec9 Return
}


func_7882(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x1eca PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x1ecb Or
	var_84_float = sqrt(var_85_int); // 0x1ecc Sqrt2
	var_86_float = 0.0; // 0x1ecd PushF
	var_87_bool = var_84_float < var_86_float; // 0x1ece LT
	if(var_87_bool == 0) goto Label_7890; // 0x1ecf JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x1ed0 MovV
	return 2; // 0x1ed1 Return
	
Label_7890:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x1ed2 Div2
	return 2; // 0x1ed3 Return
}


func_8908(var_327_bool)
{
	var_329_int = 0; var_330_string = ""; // 0x22cd PushV
	var_330_string = "ood1BigVlad7"; // 0x22ce MovS
	func_7892(var_329_int, var_330_string); // 0x22cf Call
	var_331_int = 0; // 0x22d1 PushI
	var_332_bool = var_329_int == var_331_int; // 0x22d2 Eq
	if(var_332_bool == 0) goto Label_8918; // 0x22d3 JumpB
	var_327_bool = 1; // 0x22d4 MovB
	return 0; // 0x22d5 Return
	
Label_8918:
	var_327_bool = 0; // 0x22d6 MovB
	return 0; // 0x22d7 Return
}


func_9422(var_321_bool)
{
	var_323_int = 0; var_324_string = ""; // 0x24cf PushV
	var_324_string = "KnowMladVlad"; // 0x24d0 MovS
	func_7892(var_323_int, var_324_string); // 0x24d1 Call
	var_325_int = 1; // 0x24d3 PushI
	var_326_bool = var_323_int == var_325_int; // 0x24d4 Eq
	if(var_326_bool == 0) goto Label_9432; // 0x24d5 JumpB
	var_321_bool = 1; // 0x24d6 MovB
	return 0; // 0x24d7 Return
	
Label_9432:
	var_321_bool = 0; // 0x24d8 MovB
	return 0; // 0x24d9 Return
}


func_7892(var_89_int, var_90_string)
{
	var_91_int = 0; var_92_int = 0; // 0x1ed4 PushV
	GetVariable(var_90_string, var_92_int); // 0x1ed5 Func
	var_89_int = var_92_int; // 0x1ed7 Mov
	return 2; // 0x1ed8 Return
}


func_8920(var_343_bool)
{
	var_345_int = 0; var_346_string = ""; // 0x22d9 PushV
	var_346_string = "ood1BigVlad8"; // 0x22da MovS
	func_7892(var_345_int, var_346_string); // 0x22db Call
	var_347_int = 0; // 0x22dd PushI
	var_348_bool = var_345_int == var_347_int; // 0x22de Eq
	if(var_348_bool == 0) goto Label_8930; // 0x22df JumpB
	var_343_bool = 1; // 0x22e0 MovB
	return 0; // 0x22e1 Return
	
Label_8930:
	var_343_bool = 0; // 0x22e2 MovB
	return 0; // 0x22e3 Return
}


func_7897(var_420_bool, var_422_string)
{
	var_423_int = 0; var_424_bool = 0; var_425_int = 0; var_426_bool = 0; // 0x1ed9 PushV
	GetInvItemByName(var_425_int, var_422_string); // 0x1eda Func
	HasItem(var_425_int, var_426_bool); // 0x1edc ObjFunc
	var_420_bool = var_426_bool; // 0x1ede Mov
	return 4; // 0x1edf Return
}


func_9434(var_172_bool)
{
	var_174_int = 0; var_175_string = ""; // 0x24db PushV
	var_175_string = "d6BigVladVisit"; // 0x24dc MovS
	func_7892(var_174_int, var_175_string); // 0x24dd Call
	var_176_int = 1; // 0x24df PushI
	var_177_bool = var_174_int == var_176_int; // 0x24e0 Eq
	if(var_177_bool == 0) goto Label_9444; // 0x24e1 JumpB
	var_172_bool = 1; // 0x24e2 MovB
	return 0; // 0x24e3 Return
	
Label_9444:
	var_172_bool = 0; // 0x24e4 MovB
	return 0; // 0x24e5 Return
}


func_2782(var_0_object, var_1_object, var_2_object, var_3_object, var_379_object, var_380_object)
{
	var_0_object = var_380_object; // 0xadf TMov
	var_1_object = var_379_object; // 0xae0 TMov
	var_3_object = 0; // 0xae1 TMovB
	var_385_int = 1; // 0xae2 PushI
	if(var_385_int == 0) goto Label_2907; // 0xae3 JumpB
	var_386_bool = 0; // 0xae4 PushV
	var_386_bool = 0; // 0xae5 MovB
	var_387_bool = 0; var_388_object = Obj(); // 0xae6 PushV
	var_388_object = var_1_object; // 0xae7 MovT
	func_8790(var_388_object); // 0xae8 Call
	if(var_387_bool == 0) goto Label_2801; // 0xaea JumpB
	var_393_bool = 0; var_394_object = Obj(); // 0xaeb PushV
	var_394_object = var_1_object; // 0xaec MovT
	func_8848(var_394_object); // 0xaed Call
	if(var_393_bool == 0) goto Label_2801; // 0xaef JumpB
	var_386_bool = 1; // 0xaf0 MovB
	
Label_2801:
	if(var_386_bool == 0) goto Label_2827; // 0xaf1 JumpB
	var_399_string = ""; // 0xaf2 PushV
	var_399_string = "Neutral"; // 0xaf3 MovS
	func_2937(var_380_object, var_399_string); // 0xaf4 Call
	var_404_int = 6797; // 0xaf6 PushI
	SetMessage(var_404_int); // 0xaf7 TObjFunc
	ClearReplies(); // 0xaf9 TObjFunc
	var_405_int = 6798; // 0xafb PushI
	var_406_int = 7491; // 0xafc PushI
	var_407_int = 7490; // 0xafd PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0xafe TObjFunc
	var_408_int = 6809; // 0xb00 PushI
	var_409_int = 7491; // 0xb01 PushI
	var_410_int = 7503; // 0xb02 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xb03 TObjFunc
	var_411_int = 6810; // 0xb05 PushI
	var_412_int = 7493; // 0xb06 PushI
	var_413_int = 7505; // 0xb07 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xb08 TObjFunc
	goto Label_2907; // 0xb0a Jump
	
Label_2907:
	var_414_bool = 0; // 0xb5b PushV
	func_7949(var_414_bool); // 0xb5c Call
	if(var_414_bool == 0) goto Label_2922; // 0xb5e JumpB
	
Label_2911:
	lshWaitForAnimEnd(); // 0xb5f Func
	var_415_object = var_3_object; // 0xb61 PushT
	if(var_415_object == 0) goto Label_2916; // 0xb62 JumpB
	goto Label_2921; // 0xb63 Jump
	
Label_2921:
	goto Label_2936; // 0xb69 Jump
	
Label_2936:
	return 0; // 0xb78 Return
	
Label_2916:
	var_416_string = ""; // 0xb64 PushV
	var_416_string = var_2_object; // 0xb65 MovT
	func_7857(var_416_string); // 0xb66 Call
	goto Label_2911; // 0xb68 Jump
	
Label_2922:
	var_417_string = "all"; // 0xb6a PushS
	var_418_string = "idle"; // 0xb6b PushS
	PlayAnimation(var_417_string, var_418_string); // 0xb6c Func
	
Label_2926:
	WaitForAnimEnd(); // 0xb6e Func
	var_419_object = var_3_object; // 0xb70 PushT
	if(var_419_object == 0) goto Label_2931; // 0xb71 JumpB
	goto Label_2936; // 0xb72 Jump
	
Label_2931:
	var_420_string = "all"; // 0xb73 PushS
	var_421_string = "idle"; // 0xb74 PushS
	PlayAnimation(var_420_string, var_421_string); // 0xb75 Func
	goto Label_2926; // 0xb77 Jump
	
Label_2827:
	var_422_bool = 0; // 0xb0b PushV
	var_422_bool = 0; // 0xb0c MovB
	var_423_bool = 0; var_424_object = Obj(); // 0xb0d PushV
	var_424_object = var_1_object; // 0xb0e MovT
	func_8802(var_424_object); // 0xb0f Call
	if(var_423_bool == 0) goto Label_2840; // 0xb11 JumpB
	var_429_bool = 0; var_430_object = Obj(); // 0xb12 PushV
	var_430_object = var_1_object; // 0xb13 MovT
	func_8860(var_430_object); // 0xb14 Call
	if(var_429_bool == 0) goto Label_2840; // 0xb16 JumpB
	var_422_bool = 1; // 0xb17 MovB
	
Label_2840:
	if(var_422_bool == 0) goto Label_2861; // 0xb18 JumpB
	var_435_string = ""; // 0xb19 PushV
	var_435_string = "Neutral"; // 0xb1a MovS
	func_2937(var_380_object, var_435_string); // 0xb1b Call
	var_436_int = 6765; // 0xb1d PushI
	SetMessage(var_436_int); // 0xb1e TObjFunc
	ClearReplies(); // 0xb20 TObjFunc
	var_437_int = 6777; // 0xb22 PushI
	var_438_int = 7457; // 0xb23 PushI
	var_439_int = 7467; // 0xb24 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0xb25 TObjFunc
	var_440_int = 6766; // 0xb27 PushI
	var_441_int = 7459; // 0xb28 PushI
	var_442_int = 7456; // 0xb29 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0xb2a TObjFunc
	goto Label_2907; // 0xb2c Jump
	
Label_2861:
	var_443_string = ""; // 0xb2d PushV
	var_443_string = "Neutral"; // 0xb2e MovS
	func_2937(var_380_object, var_443_string); // 0xb2f Call
	var_444_int = 6794; // 0xb31 PushI
	SetMessage(var_444_int); // 0xb32 TObjFunc
	ClearReplies(); // 0xb34 TObjFunc
	var_445_bool = 0; // 0xb36 PushV
	var_445_bool = 0; // 0xb37 MovB
	var_446_bool = 0; var_447_object = Obj(); // 0xb38 PushV
	var_447_object = var_1_object; // 0xb39 MovT
	func_8814(var_447_object); // 0xb3a Call
	if(var_446_bool == 0) goto Label_2883; // 0xb3c JumpB
	var_452_bool = 0; var_453_object = Obj(); // 0xb3d PushV
	var_453_object = var_1_object; // 0xb3e MovT
	func_8848(var_453_object); // 0xb3f Call
	if(var_452_bool == 0) goto Label_2883; // 0xb41 JumpB
	var_445_bool = 1; // 0xb42 MovB
	
Label_2883:
	if(var_445_bool == 0) goto Label_2889; // 0xb43 JumpB
	var_454_int = 7084; // 0xb44 PushI
	var_455_int = 7809; // 0xb45 PushI
	var_456_int = 7807; // 0xb46 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0xb47 TObjFunc
	
Label_2889:
	var_457_bool = 0; var_458_object = Obj(); // 0xb49 PushV
	var_458_object = var_1_object; // 0xb4a MovT
	func_8826(var_458_object); // 0xb4b Call
	if(var_457_bool == 0) goto Label_2899; // 0xb4d JumpB
	var_463_int = 6795; // 0xb4e PushI
	var_464_int = 7469; // 0xb4f PushI
	var_465_int = 7487; // 0xb50 PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0xb51 TObjFunc
	
Label_2899:
	var_466_int = 7535; // 0xb53 PushI
	var_467_int = -1; // 0xb54 PushI
	var_468_int = 8317; // 0xb55 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0xb56 TObjFunc
	goto Label_2907; // 0xb58 Jump
}


func_7904(var_201_bool, var_202_string, var_203_string)
{
	var_204_object = Obj(); var_205_object = Obj(); // 0x1ee0 PushV
	FindActor(var_205_object, var_202_string); // 0x1ee1 Func
	var_206_bool = var_205_object == 0; // 0x1ee3 NullEq
	if(var_206_bool == 0) goto Label_7911; // 0x1ee4 JumpB
	var_201_bool = 0; // 0x1ee5 MovB
	return 2; // 0x1ee6 Return
	
Label_7911:
	Trigger(var_205_object, var_203_string); // 0x1ee7 Func
	var_201_bool = 1; // 0x1ee9 MovB
	return 2; // 0x1eea Return
}


func_8932(var_359_bool)
{
	var_361_int = 0; var_362_string = ""; // 0x22e5 PushV
	var_362_string = "ood1BigVlad9"; // 0x22e6 MovS
	func_7892(var_361_int, var_362_string); // 0x22e7 Call
	var_363_int = 0; // 0x22e9 PushI
	var_364_bool = var_361_int == var_363_int; // 0x22ea Eq
	if(var_364_bool == 0) goto Label_8942; // 0x22eb JumpB
	var_359_bool = 1; // 0x22ec MovB
	return 0; // 0x22ed Return
	
Label_8942:
	var_359_bool = 0; // 0x22ee MovB
	return 0; // 0x22ef Return
}


func_9446(var_353_bool)
{
	var_355_int = 0; var_356_string = ""; // 0x24e7 PushV
	var_356_string = "KnowKapella"; // 0x24e8 MovS
	func_7892(var_355_int, var_356_string); // 0x24e9 Call
	var_357_int = 1; // 0x24eb PushI
	var_358_bool = var_355_int == var_357_int; // 0x24ec Eq
	if(var_358_bool == 0) goto Label_9456; // 0x24ed JumpB
	var_353_bool = 1; // 0x24ee MovB
	return 0; // 0x24ef Return
	
Label_9456:
	var_353_bool = 0; // 0x24f0 MovB
	return 0; // 0x24f1 Return
}


func_7916(var_63_float)
{
	var_64_float = 0; var_65_float = 0; // 0x1eec PushV
	GetGameTime(var_65_float); // 0x1eed Func
	var_63_float = var_65_float; // 0x1eef Mov
	return 2; // 0x1ef0 Return
}


func_8944(var_403_bool)
{
	var_405_int = 0; var_406_string = ""; // 0x22f1 PushV
	var_406_string = "KnowBurahDead"; // 0x22f2 MovS
	func_7892(var_405_int, var_406_string); // 0x22f3 Call
	var_407_int = 1; // 0x22f5 PushI
	var_408_bool = var_405_int == var_407_int; // 0x22f6 Eq
	if(var_408_bool == 0) goto Label_8954; // 0x22f7 JumpB
	var_403_bool = 1; // 0x22f8 MovB
	return 0; // 0x22f9 Return
	
Label_8954:
	var_403_bool = 0; // 0x22fa MovB
	return 0; // 0x22fb Return
}


func_7921(var_156_int)
{
	var_157_float = 0; var_158_float = 0; // 0x1ef1 PushV
	GetGameTime(var_158_float); // 0x1ef2 Func
	var_159_int = 1; // 0x1ef4 PushI
	var_160_int = 0; // 0x1ef5 PushV
	var_161_int = 24; // 0x1ef6 PushI
	var_160_int = var_158_float / var_158_float; // 0x1ef7 Div2
	var_156_int = var_159_int + var_160_int; // 0x1ef8 Add2
	return 2; // 0x1ef9 Return
}


func_9458(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x24f3 PushV
	var_202_string = "ood1BigVlad1"; // 0x24f4 MovS
	func_7892(var_201_int, var_202_string); // 0x24f5 Call
	var_205_int = 0; // 0x24f7 PushI
	var_206_bool = var_201_int == var_205_int; // 0x24f8 Eq
	if(var_206_bool == 0) goto Label_9468; // 0x24f9 JumpB
	var_199_bool = 1; // 0x24fa MovB
	return 0; // 0x24fb Return
	
Label_9468:
	var_199_bool = 0; // 0x24fc MovB
	return 0; // 0x24fd Return
}


func_5360(var_0_object, var_608_int, var_609_object)
{
	var_611_object = Obj(); var_612_bool = 0; var_613_int = 0; var_614_bool = 0; var_615_object = Obj(); var_616_bool = 0; var_617_int = 0; var_618_bool = 0; // 0x14f0 PushV
	var_0_object = var_609_object; // 0x14f1 TMov
	var_619_bool = 0; var_620_object = Obj(); // 0x14f2 PushV
	var_620_object = var_609_object; // 0x14f3 Mov
	func_7797(var_620_object); // 0x14f4 Call
	var_621_bool = var_619_bool == 0; // 0x14f6 Not
	if(var_621_bool == 0) goto Label_5370; // 0x14f7 JumpB
	var_608_int = -2; // 0x14f8 MovI
	return 8; // 0x14f9 Return
	
Label_5370:
	CreateDialog(var_615_object); // 0x14fa Func
	var_622_int = 0; // 0x14fc PushV
	func_7945(var_622_int); // 0x14fd Call
	SetNPCName(var_622_int); // 0x14ff ObjFunc
	var_623_string = ""; // 0x1501 PushV
	func_7947(var_623_string); // 0x1502 Call
	SetPhoto(var_623_string); // 0x1504 ObjFunc
	var_624_int = 0; // 0x1506 PushV
	func_9589(var_624_int); // 0x1507 Call
	SetPlayerName(var_624_int); // 0x1509 ObjFunc
	var_617_int = -1; // 0x150b MovI
	IsOverrideActive(var_616_bool); // 0x150c Func
	var_625_bool = var_616_bool; // 0x150e Push
	if(var_625_bool == 0) goto Label_5394; // 0x150f JumpB
	var_608_int = -2; // 0x1510 MovI
	return 8; // 0x1511 Return
	
Label_5394:
	DoDialog(var_615_object); // 0x1512 Func
	var_626_object = Obj(); var_627_object = Obj(); // 0x1514 PushV
	var_626_object = var_609_object; // 0x1515 Mov
	var_627_object = var_615_object; // 0x1516 Mov
	TaskCall(13); // 0x1517 TaskCall
	func_5423(var_628_object, var_629_object, var_630_string, var_631_bool, var_626_object, var_627_object); // 0x1518 Call
	TaskReturn(); // 0x1519 TaskReturn
	IsDialogEnd(var_618_bool); // 0x151b ObjFunc
	
Label_5405:
	var_740_bool = var_618_bool == 0; // 0x151d Not
	if(var_740_bool == 0) goto Label_5412; // 0x151e JumpB
	sync(); // 0x151f Func
	IsDialogEnd(var_618_bool); // 0x1521 ObjFunc
	goto Label_5405; // 0x1523 Jump
	
Label_5412:
	var_741_object = Obj(); // 0x1524 PushV
	var_741_object = var_609_object; // 0x1525 Mov
	func_7853(); // 0x1526 Call
	StopDialog(var_615_object); // 0x1528 Func
	GetReturnValue(var_617_int); // 0x152a ObjFunc
	var_608_int = var_617_int; // 0x152c Mov
	return 8; // 0x152d Return
}


func_7930(var_154_bool, var_155_int)
{
	var_156_int = 0; // 0x1efb PushV
	func_7921(var_156_int); // 0x1efc Call
	var_154_bool = var_156_int == var_155_int; // 0x1efe Eq2
	return 0; // 0x1eff Return
}


func_6907(var_2_object, var_125_string)
{
	var_126_bool = 0; // 0x1afc PushV
	func_7949(var_126_bool); // 0x1afd Call
	var_127_bool = var_126_bool == 0; // 0x1aff Not
	if(var_127_bool == 0) goto Label_6914; // 0x1b00 JumpB
	return 0; // 0x1b01 Return
	
Label_6914:
	var_128_bool = var_125_string == var_2_object; // 0x1b02 Eq
	if(var_128_bool == 0) goto Label_6917; // 0x1b03 JumpB
	return 0; // 0x1b04 Return
	
Label_6917:
	var_129_string = ""; // 0x1b05 PushV
	var_129_string = var_125_string; // 0x1b06 Mov
	func_7857(var_129_string); // 0x1b07 Call
	var_2_object = var_125_string; // 0x1b09 TMov
	return 0; // 0x1b0a Return
}


func_8956(var_233_bool)
{
	var_235_int = 0; var_236_string = ""; // 0x22fd PushV
	var_236_string = "d3q01"; // 0x22fe MovS
	func_7892(var_235_int, var_236_string); // 0x22ff Call
	var_239_int = 3; // 0x2301 PushI
	var_240_bool = var_235_int == var_239_int; // 0x2302 Eq
	if(var_240_bool == 0) goto Label_8966; // 0x2303 JumpB
	var_233_bool = 1; // 0x2304 MovB
	return 0; // 0x2305 Return
	
Label_8966:
	var_233_bool = 0; // 0x2306 MovB
	return 0; // 0x2307 Return
}


func_9470(var_234_bool)
{
	var_236_int = 0; var_237_string = ""; // 0x24ff PushV
	var_237_string = "ood1BigVlad2"; // 0x2500 MovS
	func_7892(var_236_int, var_237_string); // 0x2501 Call
	var_238_int = 0; // 0x2503 PushI
	var_239_bool = var_236_int == var_238_int; // 0x2504 Eq
	if(var_239_bool == 0) goto Label_9480; // 0x2505 JumpB
	var_234_bool = 1; // 0x2506 MovB
	return 0; // 0x2507 Return
	
Label_9480:
	var_234_bool = 0; // 0x2508 MovB
	return 0; // 0x2509 Return
}


func_7936(var_1031_bool)
{
	var_1032_bool = 0; var_1033_bool = 0; // 0x1f00 PushV
	var_1034_string = ""; // 0x1f01 PushV
	var_1034_string = "No"; // 0x1f02 MovS
	func_7857(var_1034_string); // 0x1f03 Call
	lshWaitForAnimEnd(var_1033_bool); // 0x1f05 Func
	var_1031_bool = var_1033_bool; // 0x1f07 Mov
	return 2; // 0x1f08 Return
}


func_3846(var_2_object, var_216_string)
{
	var_217_bool = 0; // 0xf07 PushV
	func_7949(var_217_bool); // 0xf08 Call
	var_218_bool = var_217_bool == 0; // 0xf0a Not
	if(var_218_bool == 0) goto Label_3853; // 0xf0b JumpB
	return 0; // 0xf0c Return
	
Label_3853:
	var_219_bool = var_216_string == var_2_object; // 0xf0d Eq
	if(var_219_bool == 0) goto Label_3856; // 0xf0e JumpB
	return 0; // 0xf0f Return
	
Label_3856:
	var_220_string = ""; // 0xf10 PushV
	var_220_string = var_216_string; // 0xf11 Mov
	func_7857(var_220_string); // 0xf12 Call
	var_2_object = var_216_string; // 0xf14 TMov
	return 0; // 0xf15 Return
}


func_8968(var_241_bool)
{
	var_243_int = 0; var_244_string = ""; // 0x2309 PushV
	var_244_string = "ood3BigVlad1"; // 0x230a MovS
	func_7892(var_243_int, var_244_string); // 0x230b Call
	var_245_int = 0; // 0x230d PushI
	var_246_bool = var_243_int == var_245_int; // 0x230e Eq
	if(var_246_bool == 0) goto Label_8978; // 0x230f JumpB
	var_241_bool = 1; // 0x2310 MovB
	return 0; // 0x2311 Return
	
Label_8978:
	var_241_bool = 0; // 0x2312 MovB
	return 0; // 0x2313 Return
}


func_7945(var_96_int)
{
	var_96_int = 2857; // 0x1f09 MovI
	return 0; // 0x1f0a Return
}


func_9482(var_261_bool)
{
	var_263_int = 0; var_264_string = ""; // 0x250b PushV
	var_264_string = "ood1BigVlad3"; // 0x250c MovS
	func_7892(var_263_int, var_264_string); // 0x250d Call
	var_265_int = 0; // 0x250f PushI
	var_266_bool = var_263_int == var_265_int; // 0x2510 Eq
	if(var_266_bool == 0) goto Label_9492; // 0x2511 JumpB
	var_261_bool = 1; // 0x2512 MovB
	return 0; // 0x2513 Return
	
Label_9492:
	var_261_bool = 0; // 0x2514 MovB
	return 0; // 0x2515 Return
}


func_7947(var_97_string)
{
	var_97_string = "ui/NPC_BigVlad.png"; // 0x1f0b MovS
	return 0; // 0x1f0c Return
}


func_7433(var_2_object, var_70_string)
{
	var_71_bool = 0; // 0x1d0a PushV
	func_7949(var_71_bool); // 0x1d0b Call
	var_72_bool = var_71_bool == 0; // 0x1d0d Not
	if(var_72_bool == 0) goto Label_7440; // 0x1d0e JumpB
	return 0; // 0x1d0f Return
	
Label_7440:
	var_73_bool = var_70_string == var_2_object; // 0x1d10 Eq
	if(var_73_bool == 0) goto Label_7443; // 0x1d11 JumpB
	return 0; // 0x1d12 Return
	
Label_7443:
	var_74_string = ""; // 0x1d13 PushV
	var_74_string = var_70_string; // 0x1d14 Mov
	func_7857(var_74_string); // 0x1d15 Call
	var_2_object = var_70_string; // 0x1d17 TMov
	return 0; // 0x1d18 Return
}


func_7949(var_43_bool)
{
	var_43_bool = 1; // 0x1f0d MovB
	return 0; // 0x1f0e Return
}


func_7951()
{
	var_102_object = Obj(); var_103_string = ""; var_104_float = 0; // 0x1f10 PushV
	var_105_object = Obj(); // 0x1f11 PushV
	func_9539(var_105_object); // 0x1f12 Call
	var_102_object = var_105_object; // 0x1f13 Mov
	var_103_string = "pt_map_georg"; // 0x1f15 MovS
	var_104_float = 2; // 0x1f16 MovI
	func_9556(var_102_object, var_103_string, var_104_float); // 0x1f17 Call
	var_125_object = Obj(); // 0x1f19 PushV
	func_9539(var_125_object); // 0x1f1a Call
	ShowMap(var_125_object); // 0x1f1c ObjFunc
	return 0; // 0x1f1e Return
}


func_8980(var_718_bool)
{
	var_720_int = 0; var_721_string = ""; // 0x2315 PushV
	var_721_string = "d3q01"; // 0x2316 MovS
	func_7892(var_720_int, var_721_string); // 0x2317 Call
	var_722_int = 4; // 0x2319 PushI
	var_723_bool = var_720_int == var_722_int; // 0x231a Eq
	if(var_723_bool == 0) goto Label_8990; // 0x231b JumpB
	var_718_bool = 1; // 0x231c MovB
	return 0; // 0x231d Return
	
Label_8990:
	var_718_bool = 0; // 0x231e MovB
	return 0; // 0x231f Return
}


func_9494(var_412_bool)
{
	var_412_bool = 0; // 0x2517 MovB
	return 0; // 0x2518 Return
}


func_8472()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x2118 PushV
	var_50_string = "d5q01"; // 0x2119 PushS
	var_51_int = 2; // 0x211a PushI
	SetVariable(var_50_string, var_51_int); // 0x211b Func
	var_52_object = Obj(); // 0x211d PushV
	func_9539(var_52_object); // 0x211e Call
	var_49_object = var_52_object; // 0x211f Mov
	var_59_string = "d5q01BigVladGotoAlexandr"; // 0x2121 PushS
	var_60_string = "pt_map_alexandr"; // 0x2122 PushS
	var_61_int = 1; // 0x2123 PushI
	var_62_int = 11957; // 0x2124 PushI
	var_63_float = 0; // 0x2125 PushV
	func_7916(var_63_float); // 0x2126 Call
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0x2128 ObjFunc
	func_9702(); // 0x212b Call
	return 2; // 0x212d Return
}


func_9497(var_81_object)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x2519 PushV
	GetDiaryRoot(var_83_object); // 0x251a Func
	var_84_bool = var_83_object == 0; // 0x251c Not
	if(var_84_bool == 0) goto Label_9507; // 0x251d JumpB
	var_85_string = "Can't retrieve diary root"; // 0x251e PushS
	Trace(var_85_string); // 0x251f Func
	var_81_object = 0; // 0x2521 MovB
	return 2; // 0x2522 Return
	
Label_9507:
	var_81_object = var_83_object; // 0x2523 Mov
	return 2; // 0x2524 Return
}


func_7967()
{
	var_48_string = "ood2BigVlad1"; // 0x1f20 PushS
	var_49_int = 1; // 0x1f21 PushI
	SetVariable(var_48_string, var_49_int); // 0x1f22 Func
	return 0; // 0x1f24 Return
}


func_8992(var_252_bool)
{
	var_254_int = 0; var_255_string = ""; // 0x2321 PushV
	var_255_string = "ood3BigVlad2"; // 0x2322 MovS
	func_7892(var_254_int, var_255_string); // 0x2323 Call
	var_256_int = 0; // 0x2325 PushI
	var_257_bool = var_254_int == var_256_int; // 0x2326 Eq
	if(var_257_bool == 0) goto Label_9002; // 0x2327 JumpB
	var_252_bool = 1; // 0x2328 MovB
	return 0; // 0x2329 Return
	
Label_9002:
	var_252_bool = 0; // 0x232a MovB
	return 0; // 0x232b Return
}


func_7973()
{
	var_66_string = "ood2BigVlad2"; // 0x1f26 PushS
	var_67_int = 1; // 0x1f27 PushI
	SetVariable(var_66_string, var_67_int); // 0x1f28 Func
	return 0; // 0x1f2a Return
}


func_9510(var_72_bool, var_73_object, var_74_int)
{
	var_75_object = Obj(); var_76_object = Obj(); var_77_int = 0; var_78_object = Obj(); var_79_object = Obj(); var_80_int = 0; // 0x2526 PushV
	var_81_object = Obj(); // 0x2527 PushV
	func_9497(var_81_object); // 0x2528 Call
	var_78_object = var_81_object; // 0x2529 Mov
	Find(var_74_int, var_79_object); // 0x252b ObjFunc
	var_86_bool = var_79_object == 0; // 0x252d Not
	if(var_86_bool == 0) goto Label_9525; // 0x252e JumpB
	var_87_string = "Can't find diary parent with id: "; // 0x252f PushS
	var_88_int = var_87_string + var_74_int; // 0x2530 Add
	Trace(var_88_int); // 0x2531 Func
	var_72_bool = 0; // 0x2533 MovB
	return 6; // 0x2534 Return
	
Label_9525:
	AddChild(var_73_object); // 0x2535 ObjFunc
	var_89_string = "player_diary"; // 0x2537 PushS
	var_90_int = 1; // 0x2538 PushI
	SetVariable(var_89_string, var_90_int); // 0x2539 Func
	GetCategory(var_80_int); // 0x253b ObjFunc
	SetDiarySection(var_80_int); // 0x253d Func
	var_72_bool = 0; // 0x253f MovB
	return 6; // 0x2540 Return
}


func_7979()
{
	var_94_string = "ood2BigVlad3"; // 0x1f2c PushS
	var_95_int = 1; // 0x1f2d PushI
	SetVariable(var_94_string, var_95_int); // 0x1f2e Func
	return 0; // 0x1f30 Return
}


func_9004(var_337_bool)
{
	var_339_int = 0; var_340_string = ""; // 0x232d PushV
	var_340_string = "KnowRubin"; // 0x232e MovS
	func_7892(var_339_int, var_340_string); // 0x232f Call
	var_341_int = 1; // 0x2331 PushI
	var_342_bool = var_339_int == var_341_int; // 0x2332 Eq
	if(var_342_bool == 0) goto Label_9014; // 0x2333 JumpB
	var_337_bool = 1; // 0x2334 MovB
	return 0; // 0x2335 Return
	
Label_9014:
	var_337_bool = 0; // 0x2336 MovB
	return 0; // 0x2337 Return
}


func_5423(var_0_object, var_1_object, var_2_object, var_3_object, var_626_object, var_627_object)
{
	var_0_object = var_627_object; // 0x1530 TMov
	var_1_object = var_626_object; // 0x1531 TMov
	var_3_object = 0; // 0x1532 TMovB
	var_632_int = 1; // 0x1533 PushI
	if(var_632_int == 0) goto Label_5538; // 0x1534 JumpB
	var_633_bool = 0; // 0x1535 PushV
	var_633_bool = 0; // 0x1536 MovB
	var_634_bool = 0; var_635_object = Obj(); // 0x1537 PushV
	var_635_object = var_1_object; // 0x1538 MovT
	func_9088(var_635_object); // 0x1539 Call
	if(var_634_bool == 0) goto Label_5442; // 0x153b JumpB
	var_640_bool = 0; var_641_object = Obj(); // 0x153c PushV
	var_641_object = var_1_object; // 0x153d MovT
	func_9100(var_641_object); // 0x153e Call
	if(var_640_bool == 0) goto Label_5442; // 0x1540 JumpB
	var_633_bool = 1; // 0x1541 MovB
	
Label_5442:
	if(var_633_bool == 0) goto Label_5463; // 0x1542 JumpB
	var_646_object = Obj(); var_647_object = Obj(); // 0x1543 PushV
	var_646_object = var_1_object; // 0x1544 MovT
	var_647_object = var_0_object; // 0x1545 MovT
	func_8714(); // 0x1546 Call
	var_650_string = ""; // 0x1548 PushV
	var_650_string = "Neutral"; // 0x1549 MovS
	func_5568(var_627_object, var_650_string); // 0x154a Call
	var_655_int = 10811; // 0x154c PushI
	SetMessage(var_655_int); // 0x154d TObjFunc
	ClearReplies(); // 0x154f TObjFunc
	var_656_int = 10812; // 0x1551 PushI
	var_657_int = 11147; // 0x1552 PushI
	var_658_int = 11952; // 0x1553 PushI
	AddReply(var_656_int, var_657_int, var_658_int); // 0x1554 TObjFunc
	goto Label_5538; // 0x1556 Jump
	
Label_5538:
	var_659_bool = 0; // 0x15a2 PushV
	func_7949(var_659_bool); // 0x15a3 Call
	if(var_659_bool == 0) goto Label_5553; // 0x15a5 JumpB
	
Label_5542:
	lshWaitForAnimEnd(); // 0x15a6 Func
	var_660_object = var_3_object; // 0x15a8 PushT
	if(var_660_object == 0) goto Label_5547; // 0x15a9 JumpB
	goto Label_5552; // 0x15aa Jump
	
Label_5552:
	goto Label_5567; // 0x15b0 Jump
	
Label_5567:
	return 0; // 0x15bf Return
	
Label_5547:
	var_661_string = ""; // 0x15ab PushV
	var_661_string = var_2_object; // 0x15ac MovT
	func_7857(var_661_string); // 0x15ad Call
	goto Label_5542; // 0x15af Jump
	
Label_5553:
	var_662_string = "all"; // 0x15b1 PushS
	var_663_string = "idle"; // 0x15b2 PushS
	PlayAnimation(var_662_string, var_663_string); // 0x15b3 Func
	
Label_5557:
	WaitForAnimEnd(); // 0x15b5 Func
	var_664_object = var_3_object; // 0x15b7 PushT
	if(var_664_object == 0) goto Label_5562; // 0x15b8 JumpB
	goto Label_5567; // 0x15b9 Jump
	
Label_5562:
	var_665_string = "all"; // 0x15ba PushS
	var_666_string = "idle"; // 0x15bb PushS
	PlayAnimation(var_665_string, var_666_string); // 0x15bc Func
	goto Label_5557; // 0x15be Jump
	
Label_5463:
	var_667_string = ""; // 0x1557 PushV
	var_667_string = "Neutral"; // 0x1558 MovS
	func_5568(var_627_object, var_667_string); // 0x1559 Call
	var_668_int = 10836; // 0x155b PushI
	SetMessage(var_668_int); // 0x155c TObjFunc
	ClearReplies(); // 0x155e TObjFunc
	var_669_bool = 0; // 0x1560 PushV
	var_669_bool = 0; // 0x1561 MovB
	var_670_bool = 0; var_671_object = Obj(); // 0x1562 PushV
	var_671_object = var_1_object; // 0x1563 MovT
	func_9112(var_671_object); // 0x1564 Call
	if(var_670_bool == 0) goto Label_5485; // 0x1566 JumpB
	var_676_bool = 0; var_677_object = Obj(); // 0x1567 PushV
	var_677_object = var_1_object; // 0x1568 MovT
	func_9124(var_677_object); // 0x1569 Call
	if(var_676_bool == 0) goto Label_5485; // 0x156b JumpB
	var_669_bool = 1; // 0x156c MovB
	
Label_5485:
	if(var_669_bool == 0) goto Label_5491; // 0x156d JumpB
	var_682_int = 10839; // 0x156e PushI
	var_683_int = 11148; // 0x156f PushI
	var_684_int = 11983; // 0x1570 PushI
	AddReply(var_682_int, var_683_int, var_684_int); // 0x1571 TObjFunc
	
Label_5491:
	var_685_bool = 0; var_686_object = Obj(); // 0x1573 PushV
	var_686_object = var_1_object; // 0x1574 MovT
	func_8838(var_685_bool, var_686_object); // 0x1575 Call
	if(var_685_bool == 0) goto Label_5501; // 0x1577 JumpB
	var_689_int = 10838; // 0x1578 PushI
	var_690_int = 10519; // 0x1579 PushI
	var_691_int = 11982; // 0x157a PushI
	AddReply(var_689_int, var_690_int, var_691_int); // 0x157b TObjFunc
	
Label_5501:
	var_692_bool = 0; var_693_object = Obj(); // 0x157d PushV
	var_693_object = var_1_object; // 0x157e MovT
	func_9136(var_692_bool, var_693_object); // 0x157f Call
	if(var_692_bool == 0) goto Label_5511; // 0x1581 JumpB
	var_711_int = 11508; // 0x1582 PushI
	var_712_int = 12709; // 0x1583 PushI
	var_713_int = 12708; // 0x1584 PushI
	AddReply(var_711_int, var_712_int, var_713_int); // 0x1585 TObjFunc
	
Label_5511:
	var_714_bool = 0; // 0x1587 PushV
	var_714_bool = 0; // 0x1588 MovB
	var_715_bool = 0; var_716_object = Obj(); // 0x1589 PushV
	var_716_object = var_1_object; // 0x158a MovT
	func_9166(var_715_bool, var_716_object); // 0x158b Call
	if(var_715_bool == 0) goto Label_5524; // 0x158d JumpB
	var_728_bool = 0; var_729_object = Obj(); // 0x158e PushV
	var_729_object = var_1_object; // 0x158f MovT
	func_9194(var_729_object); // 0x1590 Call
	if(var_728_bool == 0) goto Label_5524; // 0x1592 JumpB
	var_714_bool = 1; // 0x1593 MovB
	
Label_5524:
	if(var_714_bool == 0) goto Label_5530; // 0x1594 JumpB
	var_734_int = 10837; // 0x1595 PushI
	var_735_int = 10553; // 0x1596 PushI
	var_736_int = 11981; // 0x1597 PushI
	AddReply(var_734_int, var_735_int, var_736_int); // 0x1598 TObjFunc
	
Label_5530:
	var_737_int = 11480; // 0x159a PushI
	var_738_int = -1; // 0x159b PushI
	var_739_int = 12686; // 0x159c PushI
	AddReply(var_737_int, var_738_int, var_739_int); // 0x159d TObjFunc
	goto Label_5538; // 0x159f Jump
}


func_8495()
{
	var_121_string = "ood5BigVlad1"; // 0x2130 PushS
	var_122_int = 1; // 0x2131 PushI
	SetVariable(var_121_string, var_122_int); // 0x2132 Func
	return 0; // 0x2134 Return
}


func_7985()
{
	var_104_string = "ood2BigVlad4"; // 0x1f32 PushS
	var_105_int = 1; // 0x1f33 PushI
	SetVariable(var_104_string, var_105_int); // 0x1f34 Func
	return 0; // 0x1f36 Return
}


func_8501()
{
	var_113_string = "ood6BigVlad1"; // 0x2136 PushS
	var_114_int = 1; // 0x2137 PushI
	SetVariable(var_113_string, var_114_int); // 0x2138 Func
	return 0; // 0x213a Return
}


func_7991()
{
	var_70_string = "d2q01BigVladVisit"; // 0x1f38 PushS
	var_71_int = 1; // 0x1f39 PushI
	SetVariable(var_70_string, var_71_int); // 0x1f3a Func
	return 0; // 0x1f3c Return
}


func_9016(var_273_bool)
{
	var_275_int = 0; var_276_string = ""; // 0x2339 PushV
	var_276_string = "d3q01"; // 0x233a MovS
	func_7892(var_275_int, var_276_string); // 0x233b Call
	var_277_int = 5; // 0x233d PushI
	var_278_bool = var_275_int == var_277_int; // 0x233e Eq
	if(var_278_bool == 0) goto Label_9026; // 0x233f JumpB
	var_273_bool = 1; // 0x2340 MovB
	return 0; // 0x2341 Return
	
Label_9026:
	var_273_bool = 0; // 0x2342 MovB
	return 0; // 0x2343 Return
}


func_8507()
{
	var_48_string = "ood6BigVlad2"; // 0x213c PushS
	var_49_int = 1; // 0x213d PushI
	SetVariable(var_48_string, var_49_int); // 0x213e Func
	return 0; // 0x2140 Return
}


func_7997()
{
	var_149_string = "ood1BigVlad4"; // 0x1f3e PushS
	var_150_int = 1; // 0x1f3f PushI
	SetVariable(var_149_string, var_150_int); // 0x1f40 Func
	return 0; // 0x1f42 Return
}


func_8513()
{
	var_48_string = "KnowBigVlad"; // 0x2142 PushS
	var_49_int = 1; // 0x2143 PushI
	SetVariable(var_48_string, var_49_int); // 0x2144 Func
	return 0; // 0x2146 Return
}


func_322(var_0_object, var_808_int, var_809_object)
{
	var_811_object = Obj(); var_812_bool = 0; var_813_int = 0; var_814_bool = 0; var_815_object = Obj(); var_816_bool = 0; var_817_int = 0; var_818_bool = 0; // 0x142 PushV
	var_0_object = var_809_object; // 0x143 TMov
	var_819_bool = 0; var_820_object = Obj(); // 0x144 PushV
	var_820_object = var_809_object; // 0x145 Mov
	func_7797(var_820_object); // 0x146 Call
	var_821_bool = var_819_bool == 0; // 0x148 Not
	if(var_821_bool == 0) goto Label_332; // 0x149 JumpB
	var_808_int = -2; // 0x14a MovI
	return 8; // 0x14b Return
	
Label_332:
	CreateDialog(var_815_object); // 0x14c Func
	var_822_int = 0; // 0x14e PushV
	func_7945(var_822_int); // 0x14f Call
	SetNPCName(var_822_int); // 0x151 ObjFunc
	var_823_string = ""; // 0x153 PushV
	func_7947(var_823_string); // 0x154 Call
	SetPhoto(var_823_string); // 0x156 ObjFunc
	var_824_int = 0; // 0x158 PushV
	func_9589(var_824_int); // 0x159 Call
	SetPlayerName(var_824_int); // 0x15b ObjFunc
	var_817_int = -1; // 0x15d MovI
	IsOverrideActive(var_816_bool); // 0x15e Func
	var_825_bool = var_816_bool; // 0x160 Push
	if(var_825_bool == 0) goto Label_356; // 0x161 JumpB
	var_808_int = -2; // 0x162 MovI
	return 8; // 0x163 Return
	
Label_356:
	DoDialog(var_815_object); // 0x164 Func
	var_826_object = Obj(); var_827_object = Obj(); // 0x166 PushV
	var_826_object = var_809_object; // 0x167 Mov
	var_827_object = var_815_object; // 0x168 Mov
	TaskCall(5); // 0x169 TaskCall
	func_385(var_828_object, var_829_object, var_830_string, var_831_bool, var_826_object, var_827_object); // 0x16a Call
	TaskReturn(); // 0x16b TaskReturn
	IsDialogEnd(var_818_bool); // 0x16d ObjFunc
	
Label_367:
	var_935_bool = var_818_bool == 0; // 0x16f Not
	if(var_935_bool == 0) goto Label_374; // 0x170 JumpB
	sync(); // 0x171 Func
	IsDialogEnd(var_818_bool); // 0x173 ObjFunc
	goto Label_367; // 0x175 Jump
	
Label_374:
	var_936_object = Obj(); // 0x176 PushV
	var_936_object = var_809_object; // 0x177 Mov
	func_7853(); // 0x178 Call
	StopDialog(var_815_object); // 0x17a Func
	GetReturnValue(var_817_int); // 0x17c ObjFunc
	var_808_int = var_817_int; // 0x17e Mov
	return 8; // 0x17f Return
}


func_8003()
{
	var_159_string = "ood1BigVlad5"; // 0x1f44 PushS
	var_160_int = 1; // 0x1f45 PushI
	SetVariable(var_159_string, var_160_int); // 0x1f46 Func
	return 0; // 0x1f48 Return
}


func_9028(var_267_bool)
{
	var_269_int = 0; var_270_string = ""; // 0x2345 PushV
	var_270_string = "ood3BigVlad3"; // 0x2346 MovS
	func_7892(var_269_int, var_270_string); // 0x2347 Call
	var_271_int = 0; // 0x2349 PushI
	var_272_bool = var_269_int == var_271_int; // 0x234a Eq
	if(var_272_bool == 0) goto Label_9038; // 0x234b JumpB
	var_267_bool = 1; // 0x234c MovB
	return 0; // 0x234d Return
	
Label_9038:
	var_267_bool = 0; // 0x234e MovB
	return 0; // 0x234f Return
}


func_9539(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); // 0x2543 PushV
	GetMainOutdoorScene(var_55_object); // 0x2544 Func
	var_57_bool = var_55_object == 0; // 0x2546 NullEq
	if(var_57_bool == 0) goto Label_9550; // 0x2547 JumpB
	var_58_string = "Can't find main outdoor scene"; // 0x2548 PushS
	Trace(var_58_string); // 0x2549 Func
	var_56_object = 0; // 0x254b SetNull
	var_52_object = var_56_object; // 0x254c Mov
	return 4; // 0x254d Return
	
Label_9550:
	GetMap(var_56_object); // 0x254e ObjFunc
	var_52_object = var_56_object; // 0x2550 Mov
	return 4; // 0x2551 Return
}


func_8519()
{
	var_60_string = "d8q01BigVladIsVictim"; // 0x2148 PushS
	var_61_int = 1; // 0x2149 PushI
	SetVariable(var_60_string, var_61_int); // 0x214a Func
	return 0; // 0x214c Return
}


func_8009()
{
	var_165_string = "ood1BigVlad6"; // 0x1f4a PushS
	var_166_int = 1; // 0x1f4b PushI
	SetVariable(var_165_string, var_166_int); // 0x1f4c Func
	return 0; // 0x1f4e Return
}


func_8525()
{
	var_48_string = "ood8BigVlad1"; // 0x214e PushS
	var_49_int = 1; // 0x214f PushI
	SetVariable(var_48_string, var_49_int); // 0x2150 Func
	return 0; // 0x2152 Return
}


func_8015()
{
	var_175_string = "ood1BigVlad7"; // 0x1f50 PushS
	var_176_int = 1; // 0x1f51 PushI
	SetVariable(var_175_string, var_176_int); // 0x1f52 Func
	return 0; // 0x1f54 Return
}


func_9040(var_283_bool)
{
	var_285_int = 0; var_286_string = ""; // 0x2351 PushV
	var_286_string = "d3q02"; // 0x2352 MovS
	func_7892(var_285_int, var_286_string); // 0x2353 Call
	var_287_int = 2; // 0x2355 PushI
	var_288_bool = var_285_int == var_287_int; // 0x2356 Eq
	if(var_288_bool == 0) goto Label_9050; // 0x2357 JumpB
	var_283_bool = 1; // 0x2358 MovB
	return 0; // 0x2359 Return
	
Label_9050:
	var_283_bool = 0; // 0x235a MovB
	return 0; // 0x235b Return
}


func_8531()
{
	var_54_string = "ood8BigVlad2"; // 0x2154 PushS
	var_55_int = 1; // 0x2155 PushI
	SetVariable(var_54_string, var_55_int); // 0x2156 Func
	return 0; // 0x2158 Return
}


func_9556(var_93_object, var_94_string, var_95_float)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_object = Obj(); var_100_bool = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_object = Obj(); var_104_bool = 0; // 0x2554 PushV
	GetMainOutdoorScene(var_103_object); // 0x2555 Func
	var_105_bool = var_103_object == 0; // 0x2557 NullEq
	if(var_105_bool == 0) goto Label_9565; // 0x2558 JumpB
	var_106_string = "Can't find main outdoor scene"; // 0x2559 PushS
	Trace(var_106_string); // 0x255a Func
	return 8; // 0x255c Return
	
Label_9565:
	GetLocator(var_94_string, var_104_bool, var_101_cvector, var_102_cvector); // 0x255d ObjFunc
	var_107_bool = var_104_bool == 0; // 0x255f Not
	if(var_107_bool == 0) goto Label_9575; // 0x2560 JumpB
	var_108_string = "Warning: outdoor scene locator "; // 0x2561 PushS
	var_109_int = var_108_string + var_94_string; // 0x2562 Add
	var_110_string = " doesnt exist"; // 0x2563 PushS
	var_111_int = var_109_int + var_110_string; // 0x2564 Add
	Trace(var_111_int); // 0x2565 Func
	
Label_9575:
	GetMap(var_93_object); // 0x2567 ObjFunc
	var_112_bool = var_93_object == 0; // 0x2569 NullEq
	if(var_112_bool == 0) goto Label_9583; // 0x256a JumpB
	var_113_string = "Can't find map"; // 0x256b PushS
	Trace(var_113_string); // 0x256c Func
	return 8; // 0x256e Return
	
Label_9583:
	var_114_float = GetByIndex(var_101_cvector, 0); // 0x256f PushE
	var_115_float = GetByIndex(var_101_cvector, 2); // 0x2570 PushE
	SetMapParams(var_114_float, var_115_float, var_95_float); // 0x2571 ObjFunc
	return 8; // 0x2573 Return
}


func_8021()
{
	var_185_string = "ood1BigVlad8"; // 0x1f56 PushS
	var_186_int = 1; // 0x1f57 PushI
	SetVariable(var_185_string, var_186_int); // 0x1f58 Func
	return 0; // 0x1f5a Return
}


func_8537()
{
	var_66_string = "ood8BigVlad3"; // 0x215a PushS
	var_67_int = 1; // 0x215b PushI
	SetVariable(var_66_string, var_67_int); // 0x215c Func
	return 0; // 0x215e Return
}


func_8027()
{
	var_195_string = "ood1BigVlad9"; // 0x1f5c PushS
	var_196_int = 1; // 0x1f5d PushI
	SetVariable(var_195_string, var_196_int); // 0x1f5e Func
	return 0; // 0x1f60 Return
}


func_9052(var_289_bool)
{
	var_291_int = 0; var_292_string = ""; // 0x235d PushV
	var_292_string = "ood3BigVlad4"; // 0x235e MovS
	func_7892(var_291_int, var_292_string); // 0x235f Call
	var_293_int = 0; // 0x2361 PushI
	var_294_bool = var_291_int == var_293_int; // 0x2362 Eq
	if(var_294_bool == 0) goto Label_9062; // 0x2363 JumpB
	var_289_bool = 1; // 0x2364 MovB
	return 0; // 0x2365 Return
	
Label_9062:
	var_289_bool = 0; // 0x2366 MovB
	return 0; // 0x2367 Return
}


func_8543()
{
	var_147_string = "ood6BigVlad3"; // 0x2160 PushS
	var_148_int = 1; // 0x2161 PushI
	SetVariable(var_147_string, var_148_int); // 0x2162 Func
	return 0; // 0x2164 Return
}


func_8033()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x1f61 PushV
	var_54_object = Obj(); // 0x1f62 PushV
	func_9539(var_54_object); // 0x1f63 Call
	var_53_object = var_54_object; // 0x1f64 Mov
	var_61_string = "d1BigVladAboutKapella"; // 0x1f66 PushS
	var_62_string = "pt_map_kapella"; // 0x1f67 PushS
	var_63_int = 3; // 0x1f68 PushI
	var_64_int = 8638; // 0x1f69 PushI
	var_65_float = 0; // 0x1f6a PushV
	func_7916(var_65_float); // 0x1f6b Call
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0x1f6d ObjFunc
	var_68_string = "d1BigVladAboutMladVlad"; // 0x1f6f PushS
	var_69_string = "pt_map_mladvlad"; // 0x1f70 PushS
	var_70_int = 3; // 0x1f71 PushI
	var_71_int = 8689; // 0x1f72 PushI
	var_72_float = 0; // 0x1f73 PushV
	func_7916(var_72_float); // 0x1f74 Call
	AddMark(var_68_string, var_69_string, var_70_int, var_71_int, var_72_float); // 0x1f76 ObjFunc
	return 2; // 0x1f78 Return
}


func_8549()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x2165 PushV
	var_56_object = Obj(); // 0x2166 PushV
	func_9539(var_56_object); // 0x2167 Call
	var_55_object = var_56_object; // 0x2168 Mov
	var_63_string = "d6q01BigVladGotoAnna"; // 0x216a PushS
	var_64_string = "pt_map_anna"; // 0x216b PushS
	var_65_int = 1; // 0x216c PushI
	var_66_int = 15390; // 0x216d PushI
	var_67_float = 0; // 0x216e PushV
	func_7916(var_67_float); // 0x216f Call
	AddMark(var_63_string, var_64_string, var_65_int, var_66_int, var_67_float); // 0x2171 ObjFunc
	var_70_string = "d6q01BigVladGotoOspina"; // 0x2173 PushS
	var_71_string = "pt_map_ospina"; // 0x2174 PushS
	var_72_int = 1; // 0x2175 PushI
	var_73_int = 15389; // 0x2176 PushI
	var_74_float = 0; // 0x2177 PushV
	func_7916(var_74_float); // 0x2178 Call
	AddMark(var_70_string, var_71_string, var_72_int, var_73_int, var_74_float); // 0x217a ObjFunc
	var_75_string = "d6q01BigVladGotoAnnaOspinaSelf"; // 0x217c PushS
	var_76_string = "pt_map_bigvlad"; // 0x217d PushS
	var_77_int = 1; // 0x217e PushI
	var_78_int = 15391; // 0x217f PushI
	var_79_float = 0; // 0x2180 PushV
	func_7916(var_79_float); // 0x2181 Call
	AddMark(var_75_string, var_76_string, var_77_int, var_78_int, var_79_float); // 0x2183 ObjFunc
	func_9718(); // 0x2186 Call
	return 2; // 0x2188 Return
}


func_9064(var_305_bool)
{
	var_307_int = 0; var_308_string = ""; // 0x2369 PushV
	var_308_string = "d3q02"; // 0x236a MovS
	func_7892(var_307_int, var_308_string); // 0x236b Call
	var_309_int = 6; // 0x236d PushI
	var_310_bool = var_307_int == var_309_int; // 0x236e Eq
	if(var_310_bool == 0) goto Label_9074; // 0x236f JumpB
	var_305_bool = 1; // 0x2370 MovB
	return 0; // 0x2371 Return
	
Label_9074:
	var_305_bool = 0; // 0x2372 MovB
	return 0; // 0x2373 Return
}


func_9076(var_299_bool)
{
	var_301_int = 0; var_302_string = ""; // 0x2375 PushV
	var_302_string = "ood3BigVlad5"; // 0x2376 MovS
	func_7892(var_301_int, var_302_string); // 0x2377 Call
	var_303_int = 0; // 0x2379 PushI
	var_304_bool = var_301_int == var_303_int; // 0x237a Eq
	if(var_304_bool == 0) goto Label_9086; // 0x237b JumpB
	var_299_bool = 1; // 0x237c MovB
	return 0; // 0x237d Return
	
Label_9086:
	var_299_bool = 0; // 0x237e MovB
	return 0; // 0x237f Return
}


func_9589(var_98_int)
{
	var_99_int = 0; var_100_int = 0; // 0x2575 PushV
	var_101_string = "player"; // 0x2576 PushS
	GetVariable(var_101_string, var_100_int); // 0x2577 Func
	var_102_int = 0; // 0x2579 PushI
	var_103_bool = var_100_int == var_102_int; // 0x257a Eq
	if(var_103_bool == 0) goto Label_9599; // 0x257b JumpB
	var_98_int = 200001; // 0x257c MovI
	return 2; // 0x257d Return
	
Label_9599:
	var_104_int = 1; // 0x257f PushI
	var_105_bool = var_100_int == var_104_int; // 0x2580 Eq
	if(var_105_bool == 0) goto Label_9604; // 0x2581 JumpB
	var_98_int = 200002; // 0x2582 MovI
	return 2; // 0x2583 Return
	
Label_9604:
	var_98_int = 200003; // 0x2584 MovI
	return 2; // 0x2585 Return
}


func_2937(var_2_object, var_135_string)
{
	var_136_bool = 0; // 0xb7a PushV
	func_7949(var_136_bool); // 0xb7b Call
	var_137_bool = var_136_bool == 0; // 0xb7d Not
	if(var_137_bool == 0) goto Label_2944; // 0xb7e JumpB
	return 0; // 0xb7f Return
	
Label_2944:
	var_138_bool = var_135_string == var_2_object; // 0xb80 Eq
	if(var_138_bool == 0) goto Label_2947; // 0xb81 JumpB
	return 0; // 0xb82 Return
	
Label_2947:
	var_139_string = ""; // 0xb83 PushV
	var_139_string = var_135_string; // 0xb84 Mov
	func_7857(var_139_string); // 0xb85 Call
	var_2_object = var_135_string; // 0xb87 TMov
	return 0; // 0xb88 Return
}


func_8058()
{
	var_75_string = "playsound"; // 0x1f7b PushS
	var_76_string = "mapmark"; // 0x1f7c PushS
	TriggerWorld(var_75_string, var_76_string); // 0x1f7d Func
	return 0; // 0x1f7f Return
}


func_8064()
{
	var_48_string = "ood3BigVlad1"; // 0x1f81 PushS
	var_49_int = 1; // 0x1f82 PushI
	SetVariable(var_48_string, var_49_int); // 0x1f83 Func
	return 0; // 0x1f85 Return
}


func_385(var_0_object, var_1_object, var_2_object, var_3_object, var_826_object, var_827_object)
{
	var_0_object = var_827_object; // 0x182 TMov
	var_1_object = var_826_object; // 0x183 TMov
	var_3_object = 0; // 0x184 TMovB
	var_832_int = 1; // 0x185 PushI
	if(var_832_int == 0) goto Label_521; // 0x186 JumpB
	var_833_bool = 0; // 0x187 PushV
	var_833_bool = 0; // 0x188 MovB
	var_834_bool = 0; var_835_object = Obj(); // 0x189 PushV
	var_835_object = var_1_object; // 0x18a MovT
	func_9290(var_835_object); // 0x18b Call
	var_840_bool = var_834_bool == 0; // 0x18d Not
	if(var_840_bool == 0) goto Label_405; // 0x18e JumpB
	var_841_bool = 0; var_842_object = Obj(); // 0x18f PushV
	var_842_object = var_1_object; // 0x190 MovT
	func_9386(var_842_object); // 0x191 Call
	if(var_841_bool == 0) goto Label_405; // 0x193 JumpB
	var_833_bool = 1; // 0x194 MovB
	
Label_405:
	if(var_833_bool == 0) goto Label_431; // 0x195 JumpB
	var_847_object = Obj(); var_848_object = Obj(); // 0x196 PushV
	var_847_object = var_1_object; // 0x197 MovT
	var_848_object = var_0_object; // 0x198 MovT
	func_8543(); // 0x199 Call
	var_851_object = Obj(); var_852_object = Obj(); // 0x19b PushV
	var_851_object = var_1_object; // 0x19c MovT
	var_852_object = var_0_object; // 0x19d MovT
	func_8736(); // 0x19e Call
	var_855_string = ""; // 0x1a0 PushV
	var_855_string = "Neutral"; // 0x1a1 MovS
	func_551(var_827_object, var_855_string); // 0x1a2 Call
	var_860_int = 10676; // 0x1a4 PushI
	SetMessage(var_860_int); // 0x1a5 TObjFunc
	ClearReplies(); // 0x1a7 TObjFunc
	var_861_int = 10688; // 0x1a9 PushI
	var_862_int = 11789; // 0x1aa PushI
	var_863_int = 11801; // 0x1ab PushI
	AddReply(var_861_int, var_862_int, var_863_int); // 0x1ac TObjFunc
	goto Label_521; // 0x1ae Jump
	
Label_521:
	var_864_bool = 0; // 0x209 PushV
	func_7949(var_864_bool); // 0x20a Call
	if(var_864_bool == 0) goto Label_536; // 0x20c JumpB
	
Label_525:
	lshWaitForAnimEnd(); // 0x20d Func
	var_865_object = var_3_object; // 0x20f PushT
	if(var_865_object == 0) goto Label_530; // 0x210 JumpB
	goto Label_535; // 0x211 Jump
	
Label_535:
	goto Label_550; // 0x217 Jump
	
Label_550:
	return 0; // 0x226 Return
	
Label_530:
	var_866_string = ""; // 0x212 PushV
	var_866_string = var_2_object; // 0x213 MovT
	func_7857(var_866_string); // 0x214 Call
	goto Label_525; // 0x216 Jump
	
Label_536:
	var_867_string = "all"; // 0x218 PushS
	var_868_string = "idle"; // 0x219 PushS
	PlayAnimation(var_867_string, var_868_string); // 0x21a Func
	
Label_540:
	WaitForAnimEnd(); // 0x21c Func
	var_869_object = var_3_object; // 0x21e PushT
	if(var_869_object == 0) goto Label_545; // 0x21f JumpB
	goto Label_550; // 0x220 Jump
	
Label_545:
	var_870_string = "all"; // 0x221 PushS
	var_871_string = "idle"; // 0x222 PushS
	PlayAnimation(var_870_string, var_871_string); // 0x223 Func
	goto Label_540; // 0x225 Jump
	
Label_431:
	var_872_bool = 0; var_873_object = Obj(); // 0x1af PushV
	var_873_object = var_1_object; // 0x1b0 MovT
	func_9434(var_873_object); // 0x1b1 Call
	if(var_872_bool == 0) goto Label_519; // 0x1b3 JumpB
	var_878_string = ""; // 0x1b4 PushV
	var_878_string = "Neutral"; // 0x1b5 MovS
	func_551(var_827_object, var_878_string); // 0x1b6 Call
	var_879_int = 12502; // 0x1b8 PushI
	SetMessage(var_879_int); // 0x1b9 TObjFunc
	ClearReplies(); // 0x1bb TObjFunc
	var_880_bool = 0; // 0x1bd PushV
	var_880_bool = 0; // 0x1be MovB
	var_881_bool = 0; var_882_object = Obj(); // 0x1bf PushV
	var_882_object = var_1_object; // 0x1c0 MovT
	func_9290(var_882_object); // 0x1c1 Call
	if(var_881_bool == 0) goto Label_458; // 0x1c3 JumpB
	var_883_bool = 0; var_884_object = Obj(); // 0x1c4 PushV
	var_884_object = var_1_object; // 0x1c5 MovT
	func_9302(var_884_object); // 0x1c6 Call
	if(var_883_bool == 0) goto Label_458; // 0x1c8 JumpB
	var_880_bool = 1; // 0x1c9 MovB
	
Label_458:
	if(var_880_bool == 0) goto Label_464; // 0x1ca JumpB
	var_889_int = 12027; // 0x1cb PushI
	var_890_int = 13248; // 0x1cc PushI
	var_891_int = 13245; // 0x1cd PushI
	AddReply(var_889_int, var_890_int, var_891_int); // 0x1ce TObjFunc
	
Label_464:
	var_892_bool = 0; // 0x1d0 PushV
	var_892_bool = 0; // 0x1d1 MovB
	var_893_bool = 0; // 0x1d2 PushV
	var_893_bool = 0; // 0x1d3 MovB
	var_894_bool = 0; // 0x1d4 PushV
	var_894_bool = 0; // 0x1d5 MovB
	var_895_bool = 0; // 0x1d6 PushV
	var_895_bool = 0; // 0x1d7 MovB
	var_896_bool = 0; var_897_object = Obj(); // 0x1d8 PushV
	var_897_object = var_1_object; // 0x1d9 MovT
	func_9254(var_897_object); // 0x1da Call
	if(var_896_bool == 0) goto Label_483; // 0x1dc JumpB
	var_902_bool = 0; var_903_object = Obj(); // 0x1dd PushV
	var_903_object = var_1_object; // 0x1de MovT
	func_9266(var_903_object); // 0x1df Call
	if(var_902_bool == 0) goto Label_483; // 0x1e1 JumpB
	var_895_bool = 1; // 0x1e2 MovB
	
Label_483:
	if(var_895_bool == 0) goto Label_491; // 0x1e3 JumpB
	var_908_bool = 0; var_909_object = Obj(); // 0x1e4 PushV
	var_909_object = var_1_object; // 0x1e5 MovT
	func_9230(var_909_object); // 0x1e6 Call
	var_914_bool = var_908_bool == 0; // 0x1e8 Not
	if(var_914_bool == 0) goto Label_491; // 0x1e9 JumpB
	var_894_bool = 1; // 0x1ea MovB
	
Label_491:
	if(var_894_bool == 0) goto Label_499; // 0x1eb JumpB
	var_915_bool = 0; var_916_object = Obj(); // 0x1ec PushV
	var_916_object = var_1_object; // 0x1ed MovT
	func_9242(var_916_object); // 0x1ee Call
	var_921_bool = var_915_bool == 0; // 0x1f0 Not
	if(var_921_bool == 0) goto Label_499; // 0x1f1 JumpB
	var_893_bool = 1; // 0x1f2 MovB
	
Label_499:
	if(var_893_bool == 0) goto Label_507; // 0x1f3 JumpB
	var_922_bool = 0; var_923_object = Obj(); // 0x1f4 PushV
	var_923_object = var_1_object; // 0x1f5 MovT
	func_9278(var_923_object); // 0x1f6 Call
	var_928_bool = var_922_bool == 0; // 0x1f8 Not
	if(var_928_bool == 0) goto Label_507; // 0x1f9 JumpB
	var_892_bool = 1; // 0x1fa MovB
	
Label_507:
	if(var_892_bool == 0) goto Label_513; // 0x1fb JumpB
	var_929_int = 12503; // 0x1fc PushI
	var_930_int = 13674; // 0x1fd PushI
	var_931_int = 13673; // 0x1fe PushI
	AddReply(var_929_int, var_930_int, var_931_int); // 0x1ff TObjFunc
	
Label_513:
	var_932_int = 12514; // 0x201 PushI
	var_933_int = -1; // 0x202 PushI
	var_934_int = 13684; // 0x203 PushI
	AddReply(var_932_int, var_933_int, var_934_int); // 0x204 TObjFunc
	goto Label_521; // 0x206 Jump
	
Label_519:
	return 0; // 0x207 Return
}


func_9088(var_355_bool)
{
	var_357_int = 0; var_358_string = ""; // 0x2381 PushV
	var_358_string = "d4q01"; // 0x2382 MovS
	func_7892(var_357_int, var_358_string); // 0x2383 Call
	var_361_int = 0; // 0x2385 PushI
	var_362_bool = var_357_int == var_361_int; // 0x2386 Eq
	if(var_362_bool == 0) goto Label_9098; // 0x2387 JumpB
	var_355_bool = 1; // 0x2388 MovB
	return 0; // 0x2389 Return
	
Label_9098:
	var_355_bool = 0; // 0x238a MovB
	return 0; // 0x238b Return
}


func_8070()
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x1f86 PushV
	var_54_string = "d3q01"; // 0x1f87 PushS
	var_55_int = 4; // 0x1f88 PushI
	SetVariable(var_54_string, var_55_int); // 0x1f89 Func
	var_56_object = Obj(); // 0x1f8b PushV
	func_9539(var_56_object); // 0x1f8c Call
	var_53_object = var_56_object; // 0x1f8d Mov
	var_63_string = "d3q01BigVladGotoGeorg"; // 0x1f8f PushS
	var_64_string = "pt_map_georg"; // 0x1f90 PushS
	var_65_int = 1; // 0x1f91 PushI
	var_66_int = 11153; // 0x1f92 PushI
	var_67_float = 0; // 0x1f93 PushV
	func_7916(var_67_float); // 0x1f94 Call
	AddMark(var_63_string, var_64_string, var_65_int, var_66_int, var_67_float); // 0x1f96 ObjFunc
	var_70_string = "d3q01BigVladGotoGeorgSelf"; // 0x1f98 PushS
	var_71_string = "pt_map_bigvlad"; // 0x1f99 PushS
	var_72_int = 1; // 0x1f9a PushI
	var_73_int = 15297; // 0x1f9b PushI
	var_74_float = 0; // 0x1f9c PushV
	func_7916(var_74_float); // 0x1f9d Call
	AddMark(var_70_string, var_71_string, var_72_int, var_73_int, var_74_float); // 0x1f9f ObjFunc
	func_9606(); // 0x1fa2 Call
	return 2; // 0x1fa4 Return
}


func_9606()
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x2586 PushV
	var_77_string = "Adding diary entry"; // 0x2587 PushS
	Trace(var_77_string); // 0x2588 Func
	var_78_int = 135; // 0x258a PushI
	var_79_int = 1; // 0x258b PushI
	var_80_int = 15298; // 0x258c PushI
	CreateDiaryEntry(var_76_object, var_78_int, var_79_int, var_80_int); // 0x258d Func
	var_81_bool = 0; var_82_object = Obj(); var_83_int = 0; // 0x258f PushV
	var_82_object = var_76_object; // 0x2590 Mov
	var_83_int = 25; // 0x2591 MovI
	func_9510(var_81_bool, var_82_object, var_83_int); // 0x2592 Call
	return 2; // 0x2594 Return
}


func_8586()
{
	var_216_object = Obj(); var_217_object = Obj(); var_218_object = Obj(); var_219_object = Obj(); // 0x218a PushV
	var_220_object = Obj(); // 0x218b PushV
	func_9539(var_220_object); // 0x218c Call
	var_218_object = var_220_object; // 0x218d Mov
	var_221_string = "d4q01BigVladGotoLara"; // 0x218f PushS
	FindMark(var_219_object, var_221_string); // 0x2190 ObjFunc
	var_222_object = var_219_object; // 0x2192 Push
	if(var_222_object == 0) goto Label_8598; // 0x2193 JumpB
	Remove(); // 0x2194 ObjFunc
	
Label_8598:
	var_223_string = "d4q01BigVladGotoLaraSelf"; // 0x2196 PushS
	FindMark(var_219_object, var_223_string); // 0x2197 ObjFunc
	var_224_object = var_219_object; // 0x2199 Push
	if(var_224_object == 0) goto Label_8605; // 0x219a JumpB
	Remove(); // 0x219b ObjFunc
	
Label_8605:
	var_225_string = "d4q01BigVladGotoSklad"; // 0x219d PushS
	FindMark(var_219_object, var_225_string); // 0x219e ObjFunc
	var_226_object = var_219_object; // 0x21a0 Push
	if(var_226_object == 0) goto Label_8612; // 0x21a1 JumpB
	Remove(); // 0x21a2 ObjFunc
	
Label_8612:
	var_227_string = "d4q01BigVladGotoSobor"; // 0x21a4 PushS
	FindMark(var_219_object, var_227_string); // 0x21a5 ObjFunc
	var_228_object = var_219_object; // 0x21a7 Push
	if(var_228_object == 0) goto Label_8619; // 0x21a8 JumpB
	Remove(); // 0x21a9 ObjFunc
	
Label_8619:
	var_229_string = "d4q01BigVladGotoSoborAndTheaterSelf"; // 0x21ab PushS
	FindMark(var_219_object, var_229_string); // 0x21ac ObjFunc
	var_230_object = var_219_object; // 0x21ae Push
	if(var_230_object == 0) goto Label_8626; // 0x21af JumpB
	Remove(); // 0x21b0 ObjFunc
	
Label_8626:
	var_231_string = "d4q01BigVladGotoTheater"; // 0x21b2 PushS
	FindMark(var_219_object, var_231_string); // 0x21b3 ObjFunc
	var_232_object = var_219_object; // 0x21b5 Push
	if(var_232_object == 0) goto Label_8633; // 0x21b6 JumpB
	Remove(); // 0x21b7 ObjFunc
	
Label_8633:
	var_233_string = "d4q01LaraGotoMladVlad"; // 0x21b9 PushS
	FindMark(var_219_object, var_233_string); // 0x21ba ObjFunc
	var_234_object = var_219_object; // 0x21bc Push
	if(var_234_object == 0) goto Label_8640; // 0x21bd JumpB
	Remove(); // 0x21be ObjFunc
	
Label_8640:
	var_235_string = "d4q01LaraGotoMladVladSelf"; // 0x21c0 PushS
	FindMark(var_219_object, var_235_string); // 0x21c1 ObjFunc
	var_236_object = var_219_object; // 0x21c3 Push
	if(var_236_object == 0) goto Label_8647; // 0x21c4 JumpB
	Remove(); // 0x21c5 ObjFunc
	
Label_8647:
	var_237_string = "d4q01LaraGotoOspina"; // 0x21c7 PushS
	FindMark(var_219_object, var_237_string); // 0x21c8 ObjFunc
	var_238_object = var_219_object; // 0x21ca Push
	if(var_238_object == 0) goto Label_8654; // 0x21cb JumpB
	Remove(); // 0x21cc ObjFunc
	
Label_8654:
	var_239_string = "d4q01LaraGotoOspinaSelf"; // 0x21ce PushS
	FindMark(var_219_object, var_239_string); // 0x21cf ObjFunc
	var_240_object = var_219_object; // 0x21d1 Push
	if(var_240_object == 0) goto Label_8661; // 0x21d2 JumpB
	Remove(); // 0x21d3 ObjFunc
	
Label_8661:
	var_241_string = "d4q01MladVladGotoBigVlad"; // 0x21d5 PushS
	FindMark(var_219_object, var_241_string); // 0x21d6 ObjFunc
	var_242_object = var_219_object; // 0x21d8 Push
	if(var_242_object == 0) goto Label_8668; // 0x21d9 JumpB
	Remove(); // 0x21da ObjFunc
	
Label_8668:
	var_243_string = "d4q01MladVladGotoBigVladSelf"; // 0x21dc PushS
	FindMark(var_219_object, var_243_string); // 0x21dd ObjFunc
	var_244_object = var_219_object; // 0x21df Push
	if(var_244_object == 0) goto Label_8675; // 0x21e0 JumpB
	Remove(); // 0x21e1 ObjFunc
	
Label_8675:
	var_245_string = "d4q01MladVladGotoOspina"; // 0x21e3 PushS
	FindMark(var_219_object, var_245_string); // 0x21e4 ObjFunc
	var_246_object = var_219_object; // 0x21e6 Push
	if(var_246_object == 0) goto Label_8682; // 0x21e7 JumpB
	Remove(); // 0x21e8 ObjFunc
	
Label_8682:
	var_247_string = "d4q01OspinaGotoLara"; // 0x21ea PushS
	FindMark(var_219_object, var_247_string); // 0x21eb ObjFunc
	var_248_object = var_219_object; // 0x21ed Push
	if(var_248_object == 0) goto Label_8689; // 0x21ee JumpB
	Remove(); // 0x21ef ObjFunc
	
Label_8689:
	var_249_string = "d4q01WastedMale"; // 0x21f1 PushS
	FindMark(var_219_object, var_249_string); // 0x21f2 ObjFunc
	var_250_object = var_219_object; // 0x21f4 Push
	if(var_250_object == 0) goto Label_8696; // 0x21f5 JumpB
	Remove(); // 0x21f6 ObjFunc
	
Label_8696:
	var_251_string = "d4q01Whitemask"; // 0x21f8 PushS
	FindMark(var_219_object, var_251_string); // 0x21f9 ObjFunc
	var_252_object = var_219_object; // 0x21fb Push
	if(var_252_object == 0) goto Label_8703; // 0x21fc JumpB
	Remove(); // 0x21fd ObjFunc
	
Label_8703:
	func_9686(); // 0x2200 Call
	var_262_bool = 0; var_263_string = ""; var_264_string = ""; // 0x2202 PushV
	var_263_string = "quest_d4_01"; // 0x2203 MovS
	var_264_string = "failed"; // 0x2204 MovS
	func_7904(var_262_bool, var_263_string, var_264_string); // 0x2205 Call
	return 4; // 0x2207 Return
}


func_9100(var_363_bool)
{
	var_365_int = 0; var_366_string = ""; // 0x238d PushV
	var_366_string = "ood4BigVlad1"; // 0x238e MovS
	func_7892(var_365_int, var_366_string); // 0x238f Call
	var_367_int = 0; // 0x2391 PushI
	var_368_bool = var_365_int == var_367_int; // 0x2392 Eq
	if(var_368_bool == 0) goto Label_9110; // 0x2393 JumpB
	var_363_bool = 1; // 0x2394 MovB
	return 0; // 0x2395 Return
	
Label_9110:
	var_363_bool = 0; // 0x2396 MovB
	return 0; // 0x2397 Return
}


func_9622()
{
	var_76_object = Obj(); var_77_object = Obj(); // 0x2596 PushV
	var_78_string = "Adding diary entry"; // 0x2597 PushS
	Trace(var_78_string); // 0x2598 Func
	var_79_int = 20; // 0x259a PushI
	var_80_int = 1; // 0x259b PushI
	var_81_int = 3360; // 0x259c PushI
	CreateDiaryEntry(var_77_object, var_79_int, var_80_int, var_81_int); // 0x259d Func
	var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; // 0x259f PushV
	var_83_object = var_77_object; // 0x25a0 Mov
	var_84_int = -1; // 0x25a1 MovI
	func_9510(var_82_bool, var_83_object, var_84_int); // 0x25a2 Call
	return 2; // 0x25a4 Return
}


func_1432(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0x599 PushV
	func_7949(var_212_bool); // 0x59a Call
	var_213_bool = var_212_bool == 0; // 0x59c Not
	if(var_213_bool == 0) goto Label_1439; // 0x59d JumpB
	return 0; // 0x59e Return
	
Label_1439:
	var_214_bool = var_211_string == var_2_object; // 0x59f Eq
	if(var_214_bool == 0) goto Label_1442; // 0x5a0 JumpB
	return 0; // 0x5a1 Return
	
Label_1442:
	var_215_string = ""; // 0x5a2 PushV
	var_215_string = var_211_string; // 0x5a3 Mov
	func_7857(var_215_string); // 0x5a4 Call
	var_2_object = var_211_string; // 0x5a6 TMov
	return 0; // 0x5a7 Return
}


func_9112(var_395_bool)
{
	var_397_int = 0; var_398_string = ""; // 0x2399 PushV
	var_398_string = "d4q01"; // 0x239a MovS
	func_7892(var_397_int, var_398_string); // 0x239b Call
	var_399_int = 3; // 0x239d PushI
	var_400_bool = var_397_int == var_399_int; // 0x239e Eq
	if(var_400_bool == 0) goto Label_9122; // 0x239f JumpB
	var_395_bool = 1; // 0x23a0 MovB
	return 0; // 0x23a1 Return
	
Label_9122:
	var_395_bool = 0; // 0x23a2 MovB
	return 0; // 0x23a3 Return
}


func_9124(var_401_bool)
{
	var_403_int = 0; var_404_string = ""; // 0x23a5 PushV
	var_404_string = "ood4BigVlad2"; // 0x23a6 MovS
	func_7892(var_403_int, var_404_string); // 0x23a7 Call
	var_405_int = 0; // 0x23a9 PushI
	var_406_bool = var_403_int == var_405_int; // 0x23aa Eq
	if(var_406_bool == 0) goto Label_9134; // 0x23ab JumpB
	var_401_bool = 1; // 0x23ac MovB
	return 0; // 0x23ad Return
	
Label_9134:
	var_401_bool = 0; // 0x23ae MovB
	return 0; // 0x23af Return
}


func_8102()
{
	var_142_string = "ood3BigVlad2"; // 0x1fa7 PushS
	var_143_int = 1; // 0x1fa8 PushI
	SetVariable(var_142_string, var_143_int); // 0x1fa9 Func
	return 0; // 0x1fab Return
}


func_9638()
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x25a6 PushV
	var_103_string = "Adding diary entry"; // 0x25a7 PushS
	Trace(var_103_string); // 0x25a8 Func
	var_104_int = 87; // 0x25aa PushI
	var_105_int = 1; // 0x25ab PushI
	var_106_int = 12169; // 0x25ac PushI
	CreateDiaryEntry(var_102_object, var_104_int, var_105_int, var_106_int); // 0x25ad Func
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0; // 0x25af PushV
	var_108_object = var_102_object; // 0x25b0 Mov
	var_109_int = 20; // 0x25b1 MovI
	func_9510(var_107_bool, var_108_object, var_109_int); // 0x25b2 Call
	return 2; // 0x25b4 Return
}


func_8108()
{
	var_152_string = "ood3BigVlad3"; // 0x1fad PushS
	var_153_int = 1; // 0x1fae PushI
	SetVariable(var_152_string, var_153_int); // 0x1faf Func
	return 0; // 0x1fb1 Return
}


func_9136(var_417_bool, var_418_object)
{
	var_419_bool = 0; // 0x23b1 PushV
	var_419_bool = 1; // 0x23b2 MovB
	var_420_bool = 0; var_421_object = Obj(); var_422_string = ""; // 0x23b3 PushV
	var_421_object = var_418_object; // 0x23b4 Mov
	var_422_string = "d4q01_sobor_key"; // 0x23b5 MovS
	func_7897(var_421_object, var_422_string); // 0x23b6 Call
	var_427_bool = var_420_bool == 0; // 0x23b8 Not
	if(var_427_bool == 0) goto Label_9154; // 0x23b9 JumpB
	var_428_bool = 0; var_429_object = Obj(); var_430_string = ""; // 0x23ba PushV
	var_429_object = var_418_object; // 0x23bb Mov
	var_430_string = "d4q01_theater_key"; // 0x23bc MovS
	func_7897(var_429_object, var_430_string); // 0x23bd Call
	var_431_bool = var_428_bool == 0; // 0x23bf Not
	if(var_431_bool == 0) goto Label_9154; // 0x23c0 JumpB
	var_419_bool = 0; // 0x23c1 MovB
	
Label_9154:
	if(var_419_bool == 0) goto Label_9164; // 0x23c2 JumpB
	var_432_int = 0; var_433_string = ""; // 0x23c3 PushV
	var_433_string = "d4q01"; // 0x23c4 MovS
	func_7892(var_432_int, var_433_string); // 0x23c5 Call
	var_434_int = 4; // 0x23c7 PushI
	var_435_bool = var_432_int == var_434_int; // 0x23c8 Eq
	if(var_435_bool == 0) goto Label_9164; // 0x23c9 JumpB
	var_417_bool = 1; // 0x23ca MovB
	return 0; // 0x23cb Return
	
Label_9164:
	var_417_bool = 0; // 0x23cc MovB
	return 0; // 0x23cd Return
}


func_8114()
{
	var_156_object = Obj(); var_157_object = Obj(); // 0x1fb2 PushV
	var_158_string = "d3q01"; // 0x1fb3 PushS
	var_159_int = 6; // 0x1fb4 PushI
	SetVariable(var_158_string, var_159_int); // 0x1fb5 Func
	var_160_object = Obj(); // 0x1fb7 PushV
	func_9539(var_160_object); // 0x1fb8 Call
	var_157_object = var_160_object; // 0x1fb9 Mov
	var_161_string = "d3q01BigVladAgreedSelf"; // 0x1fbb PushS
	var_162_string = "pt_map_bigvlad"; // 0x1fbc PushS
	var_163_int = 1; // 0x1fbd PushI
	var_164_int = 11155; // 0x1fbe PushI
	var_165_float = 0; // 0x1fbf PushV
	func_7916(var_165_float); // 0x1fc0 Call
	AddMark(var_161_string, var_162_string, var_163_int, var_164_int, var_165_float); // 0x1fc2 ObjFunc
	var_166_string = "d3q01BigVladAgreed"; // 0x1fc4 PushS
	var_167_string = "pt_map_ospina"; // 0x1fc5 PushS
	var_168_int = 1; // 0x1fc6 PushI
	var_169_int = 15300; // 0x1fc7 PushI
	var_170_float = 0; // 0x1fc8 PushV
	func_7916(var_170_float); // 0x1fc9 Call
	AddMark(var_166_string, var_167_string, var_168_int, var_169_int, var_170_float); // 0x1fcb ObjFunc
	return 2; // 0x1fcd Return
}


func_9654()
{
	var_192_object = Obj(); var_193_object = Obj(); // 0x25b6 PushV
	var_194_string = "Adding diary entry"; // 0x25b7 PushS
	Trace(var_194_string); // 0x25b8 Func
	var_195_int = 89; // 0x25ba PushI
	var_196_int = 1; // 0x25bb PushI
	var_197_int = 12171; // 0x25bc PushI
	CreateDiaryEntry(var_193_object, var_195_int, var_196_int, var_197_int); // 0x25bd Func
	var_198_bool = 0; var_199_object = Obj(); var_200_int = 0; // 0x25bf PushV
	var_199_object = var_193_object; // 0x25c0 Mov
	var_200_int = 20; // 0x25c1 MovI
	func_9510(var_198_bool, var_199_object, var_200_int); // 0x25c2 Call
	return 2; // 0x25c4 Return
}


func_5568(var_2_object, var_373_string)
{
	var_374_bool = 0; // 0x15c1 PushV
	func_7949(var_374_bool); // 0x15c2 Call
	var_375_bool = var_374_bool == 0; // 0x15c4 Not
	if(var_375_bool == 0) goto Label_5575; // 0x15c5 JumpB
	return 0; // 0x15c6 Return
	
Label_5575:
	var_376_bool = var_373_string == var_2_object; // 0x15c7 Eq
	if(var_376_bool == 0) goto Label_5578; // 0x15c8 JumpB
	return 0; // 0x15c9 Return
	
Label_5578:
	var_377_string = ""; // 0x15ca PushV
	var_377_string = var_373_string; // 0x15cb Mov
	func_7857(var_377_string); // 0x15cc Call
	var_2_object = var_373_string; // 0x15ce TMov
	return 0; // 0x15cf Return
}


func_9670()
{
	var_312_object = Obj(); var_313_object = Obj(); // 0x25c6 PushV
	var_314_string = "Adding diary entry"; // 0x25c7 PushS
	Trace(var_314_string); // 0x25c8 Func
	var_315_int = 90; // 0x25ca PushI
	var_316_int = 1; // 0x25cb PushI
	var_317_int = 12172; // 0x25cc PushI
	CreateDiaryEntry(var_313_object, var_315_int, var_316_int, var_317_int); // 0x25cd Func
	var_318_bool = 0; var_319_object = Obj(); var_320_int = 0; // 0x25cf PushV
	var_319_object = var_313_object; // 0x25d0 Mov
	var_320_int = 20; // 0x25d1 MovI
	func_9510(var_318_bool, var_319_object, var_320_int); // 0x25d2 Call
	return 2; // 0x25d4 Return
}


func_9166(var_440_bool, var_441_object)
{
	var_442_bool = 0; // 0x23cf PushV
	var_442_bool = 0; // 0x23d0 MovB
	var_443_bool = 0; var_444_object = Obj(); var_445_string = ""; // 0x23d1 PushV
	var_444_object = var_441_object; // 0x23d2 Mov
	var_445_string = "d4q01_sobor_key"; // 0x23d3 MovS
	func_7897(var_444_object, var_445_string); // 0x23d4 Call
	if(var_443_bool == 0) goto Label_9182; // 0x23d6 JumpB
	var_446_bool = 0; var_447_object = Obj(); var_448_string = ""; // 0x23d7 PushV
	var_447_object = var_441_object; // 0x23d8 Mov
	var_448_string = "d4q01_theater_key"; // 0x23d9 MovS
	func_7897(var_447_object, var_448_string); // 0x23da Call
	if(var_446_bool == 0) goto Label_9182; // 0x23dc JumpB
	var_442_bool = 1; // 0x23dd MovB
	
Label_9182:
	if(var_442_bool == 0) goto Label_9192; // 0x23de JumpB
	var_449_int = 0; var_450_string = ""; // 0x23df PushV
	var_450_string = "d4q01"; // 0x23e0 MovS
	func_7892(var_449_int, var_450_string); // 0x23e1 Call
	var_451_int = 4; // 0x23e3 PushI
	var_452_bool = var_449_int == var_451_int; // 0x23e4 Eq
	if(var_452_bool == 0) goto Label_9192; // 0x23e5 JumpB
	var_440_bool = 1; // 0x23e6 MovB
	return 0; // 0x23e7 Return
	
Label_9192:
	var_440_bool = 0; // 0x23e8 MovB
	return 0; // 0x23e9 Return
}


func_8143()
{
	var_93_object = Obj(); var_94_string = ""; var_95_float = 0; // 0x1fd0 PushV
	var_96_object = Obj(); // 0x1fd1 PushV
	func_9539(var_96_object); // 0x1fd2 Call
	var_93_object = var_96_object; // 0x1fd3 Mov
	var_94_string = "pt_map_alexandr"; // 0x1fd5 MovS
	var_95_float = 2; // 0x1fd6 MovI
	func_9556(var_93_object, var_94_string, var_95_float); // 0x1fd7 Call
	var_116_object = Obj(); // 0x1fd9 PushV
	func_9539(var_116_object); // 0x1fda Call
	ShowMap(var_116_object); // 0x1fdc ObjFunc
	return 0; // 0x1fde Return
}


func_9686()
{
	var_253_object = Obj(); var_254_object = Obj(); // 0x25d6 PushV
	var_255_string = "Adding diary entry"; // 0x25d7 PushS
	Trace(var_255_string); // 0x25d8 Func
	var_256_int = 91; // 0x25da PushI
	var_257_int = 1; // 0x25db PushI
	var_258_int = 12173; // 0x25dc PushI
	CreateDiaryEntry(var_254_object, var_256_int, var_257_int, var_258_int); // 0x25dd Func
	var_259_bool = 0; var_260_object = Obj(); var_261_int = 0; // 0x25df PushV
	var_260_object = var_254_object; // 0x25e0 Mov
	var_261_int = 20; // 0x25e1 MovI
	func_9510(var_259_bool, var_260_object, var_261_int); // 0x25e2 Call
	return 2; // 0x25e4 Return
}


func_8159()
{
	var_175_string = "ood3BigVlad4"; // 0x1fe0 PushS
	var_176_int = 1; // 0x1fe1 PushI
	SetVariable(var_175_string, var_176_int); // 0x1fe2 Func
	return 0; // 0x1fe4 Return
}


func_8165()
{
	var_179_object = Obj(); var_180_object = Obj(); // 0x1fe5 PushV
	var_181_string = "d3q02"; // 0x1fe6 PushS
	var_182_int = 3; // 0x1fe7 PushI
	SetVariable(var_181_string, var_182_int); // 0x1fe8 Func
	var_183_object = Obj(); // 0x1fea PushV
	func_9539(var_183_object); // 0x1feb Call
	var_180_object = var_183_object; // 0x1fec Mov
	var_184_string = "d3q02BigVladGotoHan"; // 0x1fee PushS
	var_185_string = "pt_map_han"; // 0x1fef PushS
	var_186_int = 0; // 0x1ff0 PushI
	var_187_int = 11385; // 0x1ff1 PushI
	var_188_float = 0; // 0x1ff2 PushV
	func_7916(var_188_float); // 0x1ff3 Call
	AddMark(var_184_string, var_185_string, var_186_int, var_187_int, var_188_float); // 0x1ff5 ObjFunc
	return 2; // 0x1ff7 Return
}


func_9702()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x25e6 PushV
	var_68_string = "Adding diary entry"; // 0x25e7 PushS
	Trace(var_68_string); // 0x25e8 Func
	var_69_int = 141; // 0x25ea PushI
	var_70_int = 1; // 0x25eb PushI
	var_71_int = 15341; // 0x25ec PushI
	CreateDiaryEntry(var_67_object, var_69_int, var_70_int, var_71_int); // 0x25ed Func
	var_72_bool = 0; var_73_object = Obj(); var_74_int = 0; // 0x25ef PushV
	var_73_object = var_67_object; // 0x25f0 Mov
	var_74_int = 139; // 0x25f1 MovI
	func_9510(var_72_bool, var_73_object, var_74_int); // 0x25f2 Call
	return 2; // 0x25f4 Return
}


func_9194(var_453_bool)
{
	var_455_int = 0; var_456_string = ""; // 0x23eb PushV
	var_456_string = "ood4BigVlad3"; // 0x23ec MovS
	func_7892(var_455_int, var_456_string); // 0x23ed Call
	var_457_int = 0; // 0x23ef PushI
	var_458_bool = var_455_int == var_457_int; // 0x23f0 Eq
	if(var_458_bool == 0) goto Label_9204; // 0x23f1 JumpB
	var_453_bool = 1; // 0x23f2 MovB
	return 0; // 0x23f3 Return
	
Label_9204:
	var_453_bool = 0; // 0x23f4 MovB
	return 0; // 0x23f5 Return
}


func_9206(var_141_bool)
{
	var_143_int = 0; var_144_string = ""; // 0x23f7 PushV
	var_144_string = "d5q01"; // 0x23f8 MovS
	func_7892(var_143_int, var_144_string); // 0x23f9 Call
	var_147_int = 1; // 0x23fb PushI
	var_148_bool = var_143_int == var_147_int; // 0x23fc Eq
	if(var_148_bool == 0) goto Label_9216; // 0x23fd JumpB
	var_141_bool = 1; // 0x23fe MovB
	return 0; // 0x23ff Return
	
Label_9216:
	var_141_bool = 0; // 0x2400 MovB
	return 0; // 0x2401 Return
}


func_9718()
{
	var_80_object = Obj(); var_81_object = Obj(); // 0x25f6 PushV
	var_82_string = "Adding diary entry"; // 0x25f7 PushS
	Trace(var_82_string); // 0x25f8 Func
	var_83_int = 115; // 0x25fa PushI
	var_84_int = 1; // 0x25fb PushI
	var_85_int = 13738; // 0x25fc PushI
	CreateDiaryEntry(var_81_object, var_83_int, var_84_int, var_85_int); // 0x25fd Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x25ff PushV
	var_87_object = var_81_object; // 0x2600 Mov
	var_88_int = 111; // 0x2601 MovI
	func_9510(var_86_bool, var_87_object, var_88_int); // 0x2602 Call
	return 2; // 0x2604 Return
}


func_8185()
{
	var_191_object = Obj(); var_192_string = ""; var_193_float = 0; // 0x1ffa PushV
	var_194_object = Obj(); // 0x1ffb PushV
	func_9539(var_194_object); // 0x1ffc Call
	var_191_object = var_194_object; // 0x1ffd Mov
	var_192_string = "pt_map_han"; // 0x1fff MovS
	var_193_float = 2; // 0x2000 MovI
	func_9556(var_191_object, var_192_string, var_193_float); // 0x2001 Call
	var_195_object = Obj(); // 0x2003 PushV
	func_9539(var_195_object); // 0x2004 Call
	ShowMap(var_195_object); // 0x2006 ObjFunc
	return 0; // 0x2008 Return
}


