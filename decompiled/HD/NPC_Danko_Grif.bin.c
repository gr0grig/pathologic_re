task_0_event_11(var_0_bool, var_1_int, var_2_object, var_3_object, var_4_object, var_5_string, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_object, var_58_object, var_59_object, var_60_string, var_61_bool, var_62_object, var_63_object, var_64_object, var_65_string, var_66_bool, var_67_cvector)
{
	lshStopAnimation(); // 0x10 Func
	StopTrade(); // 0x12 Func
	var_0_bool = 1; // 0x14 TMovB
	return 0; // 0x15 Return
}


task_2_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_int, var_7_int, var_8_object, var_9_object, var_10_object, var_11_string, var_12_bool, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xc2 PushI
	if(var_69_int == 0) goto Label_336; // 0xc3 JumpB
	func_5569(); // 0xc5 NEW_2
	var_71_int = 444; // 0xc7 PushI
	var_72_bool = var_67_bool == var_71_int; // 0xc8 Eq
	if(var_72_bool == 0) goto Label_232; // 0xc9 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xca PushV
	var_73_object = var_1_object; // 0xcb MovT
	var_74_object = var_0_bool; // 0xcc MovT
	func_5936(); // 0xcd NEW_2
	var_77_string = ""; // 0xcf PushV
	var_77_string = "Neutral"; // 0xd0 MovS
	func_171(var_68_cvector, var_77_string); // 0xd1 NEW_2
	var_94_int = 500383; // 0xd3 PushI
	SetMessage(var_94_int); // 0xd4 TObjFunc
	ClearReplies(); // 0xd6 TObjFunc
	var_95_int = 500384; // 0xd8 PushI
	var_96_int = 448; // 0xd9 PushI
	var_97_int = 445; // 0xda PushI
	AddReply(var_95_int, var_96_int, var_97_int); // 0xdb TObjFunc
	var_98_int = 500385; // 0xdd PushI
	var_99_int = 449; // 0xde PushI
	var_100_int = 446; // 0xdf PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0xe0 TObjFunc
	var_101_int = 500386; // 0xe2 PushI
	var_102_int = 450; // 0xe3 PushI
	var_103_int = 447; // 0xe4 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0xe5 TObjFunc
	return 0; // 0xe7 Return
	
Label_232:
	var_104_int = 450; // 0xe8 PushI
	var_105_bool = var_67_bool == var_104_int; // 0xe9 Eq
	if(var_105_bool == 0) goto Label_255; // 0xea JumpB
	var_106_string = ""; // 0xeb PushV
	var_106_string = "Neutral"; // 0xec MovS
	func_171(var_68_cvector, var_106_string); // 0xed NEW_2
	var_107_int = 500389; // 0xef PushI
	SetMessage(var_107_int); // 0xf0 TObjFunc
	ClearReplies(); // 0xf2 TObjFunc
	var_108_int = 500395; // 0xf4 PushI
	var_109_int = 454; // 0xf5 PushI
	var_110_int = 459; // 0xf6 PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0xf7 TObjFunc
	var_111_int = 500396; // 0xf9 PushI
	var_112_int = 454; // 0xfa PushI
	var_113_int = 460; // 0xfb PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xfc TObjFunc
	return 0; // 0xfe Return
	
Label_255:
	var_114_int = 449; // 0xff PushI
	var_115_bool = var_67_bool == var_114_int; // 0x100 Eq
	if(var_115_bool == 0) goto Label_278; // 0x101 JumpB
	var_116_string = ""; // 0x102 PushV
	var_116_string = "Neutral"; // 0x103 MovS
	func_171(var_68_cvector, var_116_string); // 0x104 NEW_2
	var_117_int = 500388; // 0x106 PushI
	SetMessage(var_117_int); // 0x107 TObjFunc
	ClearReplies(); // 0x109 TObjFunc
	var_118_int = 500394; // 0x10b PushI
	var_119_int = 454; // 0x10c PushI
	var_120_int = 456; // 0x10d PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x10e TObjFunc
	var_121_int = 500392; // 0x110 PushI
	var_122_int = 454; // 0x111 PushI
	var_123_int = 453; // 0x112 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x113 TObjFunc
	return 0; // 0x115 Return
	
Label_278:
	var_124_int = 448; // 0x116 PushI
	var_125_bool = var_67_bool == var_124_int; // 0x117 Eq
	if(var_125_bool == 0) goto Label_301; // 0x118 JumpB
	var_126_string = ""; // 0x119 PushV
	var_126_string = "Neutral"; // 0x11a MovS
	func_171(var_68_cvector, var_126_string); // 0x11b NEW_2
	var_127_int = 500387; // 0x11d PushI
	SetMessage(var_127_int); // 0x11e TObjFunc
	ClearReplies(); // 0x120 TObjFunc
	var_128_int = 500390; // 0x122 PushI
	var_129_int = 454; // 0x123 PushI
	var_130_int = 451; // 0x124 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0x125 TObjFunc
	var_131_int = 500391; // 0x127 PushI
	var_132_int = 454; // 0x128 PushI
	var_133_int = 452; // 0x129 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x12a TObjFunc
	return 0; // 0x12c Return
	
Label_301:
	var_134_int = 454; // 0x12d PushI
	var_135_bool = var_67_bool == var_134_int; // 0x12e Eq
	if(var_135_bool == 0) goto Label_324; // 0x12f JumpB
	var_136_string = ""; // 0x130 PushV
	var_136_string = "Neutral"; // 0x131 MovS
	func_171(var_68_cvector, var_136_string); // 0x132 NEW_2
	var_137_int = 500393; // 0x134 PushI
	SetMessage(var_137_int); // 0x135 TObjFunc
	ClearReplies(); // 0x137 TObjFunc
	var_138_int = 500397; // 0x139 PushI
	var_139_int = -1; // 0x13a PushI
	var_140_int = 463; // 0x13b PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x13c TObjFunc
	var_141_int = 500398; // 0x13e PushI
	var_142_int = -1; // 0x13f PushI
	var_143_int = 464; // 0x140 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x141 TObjFunc
	return 0; // 0x143 Return
	
Label_324:
	var_3_object = 1; // 0x144 TMovB
	var_144_bool = 0; // 0x145 PushV
	func_5745(var_144_bool); // 0x146 NEW_2
	if(var_144_bool == 0) goto Label_332; // 0x148 JumpB
	lshStopAnimation(); // 0x149 Func
	goto Label_334; // 0x14b Jump
	
Label_334:
	return 0; // 0x14e Return
	
Label_332:
	StopAnimation(); // 0x14c Func
	
Label_336:
	return 0; // 0x150 Return
}


task_4_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_int, var_12_int, var_13_object, var_14_object, var_15_object, var_16_string, var_17_bool, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x21f PushI
	if(var_69_int == 0) goto Label_957; // 0x220 JumpB
	func_5569(); // 0x222 NEW_2
	var_71_int = 7671; // 0x224 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x225 Eq
	if(var_72_bool == 0) goto Label_576; // 0x226 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x227 PushV
	var_73_object = var_1_object; // 0x228 MovT
	var_74_object = var_0_bool; // 0x229 MovT
	func_5820(); // 0x22a NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x22c PushV
	var_77_object = var_1_object; // 0x22d MovT
	var_78_object = var_0_bool; // 0x22e MovT
	func_5838(); // 0x22f NEW_2
	var_104_object = Obj(); var_105_object = Obj(); // 0x231 PushV
	var_104_object = var_1_object; // 0x232 MovT
	var_105_object = var_0_bool; // 0x233 MovT
	func_5763(); // 0x234 NEW_2
	var_108_object = Obj(); var_109_object = Obj(); // 0x236 PushV
	var_108_object = var_1_object; // 0x237 MovT
	var_109_object = var_0_bool; // 0x238 MovT
	func_5769(var_109_object); // 0x239 NEW_2
	var_132_object = Obj(); var_133_object = Obj(); // 0x23b PushV
	var_132_object = var_1_object; // 0x23c MovT
	var_133_object = var_0_bool; // 0x23d MovT
	func_5847(var_133_object); // 0x23e NEW_2
	
Label_576:
	var_143_int = 8069; // 0x240 PushI
	var_144_bool = var_68_cvector == var_143_int; // 0x241 Eq
	if(var_144_bool == 0) goto Label_584; // 0x242 JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0x243 PushV
	var_145_object = var_1_object; // 0x244 MovT
	var_146_object = var_0_bool; // 0x245 MovT
	func_5826(); // 0x246 NEW_2
	
Label_584:
	var_149_int = 8087; // 0x248 PushI
	var_150_bool = var_68_cvector == var_149_int; // 0x249 Eq
	if(var_150_bool == 0) goto Label_592; // 0x24a JumpB
	var_151_object = Obj(); var_152_object = Obj(); // 0x24b PushV
	var_151_object = var_1_object; // 0x24c MovT
	var_152_object = var_0_bool; // 0x24d MovT
	func_5958(); // 0x24e NEW_2
	
Label_592:
	var_155_int = 8054; // 0x250 PushI
	var_156_bool = var_68_cvector == var_155_int; // 0x251 Eq
	if(var_156_bool == 0) goto Label_600; // 0x252 JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x253 PushV
	var_157_object = var_1_object; // 0x254 MovT
	var_158_object = var_0_bool; // 0x255 MovT
	func_5832(); // 0x256 NEW_2
	
Label_600:
	var_161_int = 8055; // 0x258 PushI
	var_162_bool = var_68_cvector == var_161_int; // 0x259 Eq
	if(var_162_bool == 0) goto Label_608; // 0x25a JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0x25b PushV
	var_163_object = var_1_object; // 0x25c MovT
	var_164_object = var_0_bool; // 0x25d MovT
	func_5832(); // 0x25e NEW_2
	
Label_608:
	var_165_int = 8060; // 0x260 PushI
	var_166_bool = var_68_cvector == var_165_int; // 0x261 Eq
	if(var_166_bool == 0) goto Label_616; // 0x262 JumpB
	var_167_object = Obj(); var_168_object = Obj(); // 0x263 PushV
	var_167_object = var_1_object; // 0x264 MovT
	var_168_object = var_0_bool; // 0x265 MovT
	func_5832(); // 0x266 NEW_2
	
Label_616:
	var_169_int = 8061; // 0x268 PushI
	var_170_bool = var_68_cvector == var_169_int; // 0x269 Eq
	if(var_170_bool == 0) goto Label_624; // 0x26a JumpB
	var_171_object = Obj(); var_172_object = Obj(); // 0x26b PushV
	var_171_object = var_1_object; // 0x26c MovT
	var_172_object = var_0_bool; // 0x26d MovT
	func_5832(); // 0x26e NEW_2
	
Label_624:
	var_173_int = 37903; // 0x270 PushI
	var_174_bool = var_68_cvector == var_173_int; // 0x271 Eq
	if(var_174_bool == 0) goto Label_632; // 0x272 JumpB
	var_175_object = Obj(); var_176_object = Obj(); // 0x273 PushV
	var_175_object = var_1_object; // 0x274 MovT
	var_176_object = var_0_bool; // 0x275 MovT
	func_5931(); // 0x276 NEW_2
	
Label_632:
	var_178_int = 7666; // 0x278 PushI
	var_179_bool = var_67_bool == var_178_int; // 0x279 Eq
	if(var_179_bool == 0) goto Label_699; // 0x27a JumpB
	var_180_string = ""; // 0x27b PushV
	var_180_string = "Neutral"; // 0x27c MovS
	func_520(var_68_cvector, var_180_string); // 0x27d NEW_2
	var_197_int = 506959; // 0x27f PushI
	SetMessage(var_197_int); // 0x280 TObjFunc
	ClearReplies(); // 0x282 TObjFunc
	var_198_bool = 0; // 0x284 PushV
	var_198_bool = 0; // 0x285 MovB
	var_199_bool = 0; var_200_object = Obj(); // 0x286 PushV
	var_200_object = var_1_object; // 0x287 MovT
	func_6030(var_200_object); // 0x288 NEW_2
	if(var_199_bool == 0) goto Label_657; // 0x28a JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0x28b PushV
	var_208_object = var_1_object; // 0x28c MovT
	func_6066(var_208_object); // 0x28d NEW_2
	if(var_207_bool == 0) goto Label_657; // 0x28f JumpB
	var_198_bool = 1; // 0x290 MovB
	
Label_657:
	if(var_198_bool == 0) goto Label_663; // 0x291 JumpB
	var_213_int = 507328; // 0x292 PushI
	var_214_int = 8080; // 0x293 PushI
	var_215_int = 8079; // 0x294 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x295 TObjFunc
	
Label_663:
	var_216_bool = 0; var_217_object = Obj(); // 0x297 PushV
	var_217_object = var_1_object; // 0x298 MovT
	func_6042(var_217_object); // 0x299 NEW_2
	if(var_216_bool == 0) goto Label_673; // 0x29b JumpB
	var_222_int = 507319; // 0x29c PushI
	var_223_int = 8070; // 0x29d PushI
	var_224_int = 8069; // 0x29e PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x29f TObjFunc
	
Label_673:
	var_225_bool = 0; var_226_object = Obj(); // 0x2a1 PushV
	var_226_object = var_1_object; // 0x2a2 MovT
	func_6054(var_226_object); // 0x2a3 NEW_2
	if(var_225_bool == 0) goto Label_683; // 0x2a5 JumpB
	var_231_int = 507335; // 0x2a6 PushI
	var_232_int = 8049; // 0x2a7 PushI
	var_233_int = 8087; // 0x2a8 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x2a9 TObjFunc
	
Label_683:
	var_234_int = 536144; // 0x2ab PushI
	var_235_int = -1; // 0x2ac PushI
	var_236_int = 37903; // 0x2ad PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x2ae TObjFunc
	var_237_int = 507530; // 0x2b0 PushI
	var_238_int = -1; // 0x2b1 PushI
	var_239_int = 8312; // 0x2b2 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x2b3 TObjFunc
	var_240_int = 533848; // 0x2b5 PushI
	var_241_int = -1; // 0x2b6 PushI
	var_242_int = 35398; // 0x2b7 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x2b8 TObjFunc
	return 0; // 0x2ba Return
	
Label_699:
	var_243_int = 8049; // 0x2bb PushI
	var_244_bool = var_67_bool == var_243_int; // 0x2bc Eq
	if(var_244_bool == 0) goto Label_722; // 0x2bd JumpB
	var_245_string = ""; // 0x2be PushV
	var_245_string = "Anger"; // 0x2bf MovS
	func_520(var_68_cvector, var_245_string); // 0x2c0 NEW_2
	var_246_int = 507300; // 0x2c2 PushI
	SetMessage(var_246_int); // 0x2c3 TObjFunc
	ClearReplies(); // 0x2c5 TObjFunc
	var_247_int = 507301; // 0x2c7 PushI
	var_248_int = 8051; // 0x2c8 PushI
	var_249_int = 8050; // 0x2c9 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x2ca TObjFunc
	var_250_int = 507313; // 0x2cc PushI
	var_251_int = 8053; // 0x2cd PushI
	var_252_int = 8062; // 0x2ce PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x2cf TObjFunc
	return 0; // 0x2d1 Return
	
Label_722:
	var_253_int = 8051; // 0x2d2 PushI
	var_254_bool = var_67_bool == var_253_int; // 0x2d3 Eq
	if(var_254_bool == 0) goto Label_745; // 0x2d4 JumpB
	var_255_string = ""; // 0x2d5 PushV
	var_255_string = "Smile"; // 0x2d6 MovS
	func_520(var_68_cvector, var_255_string); // 0x2d7 NEW_2
	var_256_int = 507302; // 0x2d9 PushI
	SetMessage(var_256_int); // 0x2da TObjFunc
	ClearReplies(); // 0x2dc TObjFunc
	var_257_int = 507303; // 0x2de PushI
	var_258_int = 8053; // 0x2df PushI
	var_259_int = 8052; // 0x2e0 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x2e1 TObjFunc
	var_260_int = 507307; // 0x2e3 PushI
	var_261_int = 8057; // 0x2e4 PushI
	var_262_int = 8056; // 0x2e5 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x2e6 TObjFunc
	return 0; // 0x2e8 Return
	
Label_745:
	var_263_int = 8057; // 0x2e9 PushI
	var_264_bool = var_67_bool == var_263_int; // 0x2ea Eq
	if(var_264_bool == 0) goto Label_763; // 0x2eb JumpB
	var_265_string = ""; // 0x2ec PushV
	var_265_string = "Smile"; // 0x2ed MovS
	func_520(var_68_cvector, var_265_string); // 0x2ee NEW_2
	var_266_int = 507308; // 0x2f0 PushI
	SetMessage(var_266_int); // 0x2f1 TObjFunc
	ClearReplies(); // 0x2f3 TObjFunc
	var_267_int = 507309; // 0x2f5 PushI
	var_268_int = 8059; // 0x2f6 PushI
	var_269_int = 8058; // 0x2f7 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x2f8 TObjFunc
	return 0; // 0x2fa Return
	
Label_763:
	var_270_int = 8059; // 0x2fb PushI
	var_271_bool = var_67_bool == var_270_int; // 0x2fc Eq
	if(var_271_bool == 0) goto Label_786; // 0x2fd JumpB
	var_272_string = ""; // 0x2fe PushV
	var_272_string = "Neutral"; // 0x2ff MovS
	func_520(var_68_cvector, var_272_string); // 0x300 NEW_2
	var_273_int = 507310; // 0x302 PushI
	SetMessage(var_273_int); // 0x303 TObjFunc
	ClearReplies(); // 0x305 TObjFunc
	var_274_int = 507311; // 0x307 PushI
	var_275_int = -1; // 0x308 PushI
	var_276_int = 8060; // 0x309 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x30a TObjFunc
	var_277_int = 507312; // 0x30c PushI
	var_278_int = -1; // 0x30d PushI
	var_279_int = 8061; // 0x30e PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x30f TObjFunc
	return 0; // 0x311 Return
	
Label_786:
	var_280_int = 8053; // 0x312 PushI
	var_281_bool = var_67_bool == var_280_int; // 0x313 Eq
	if(var_281_bool == 0) goto Label_809; // 0x314 JumpB
	var_282_string = ""; // 0x315 PushV
	var_282_string = "Anger"; // 0x316 MovS
	func_520(var_68_cvector, var_282_string); // 0x317 NEW_2
	var_283_int = 507304; // 0x319 PushI
	SetMessage(var_283_int); // 0x31a TObjFunc
	ClearReplies(); // 0x31c TObjFunc
	var_284_int = 507305; // 0x31e PushI
	var_285_int = -1; // 0x31f PushI
	var_286_int = 8054; // 0x320 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x321 TObjFunc
	var_287_int = 507306; // 0x323 PushI
	var_288_int = -1; // 0x324 PushI
	var_289_int = 8055; // 0x325 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x326 TObjFunc
	return 0; // 0x328 Return
	
Label_809:
	var_290_int = 8070; // 0x329 PushI
	var_291_bool = var_67_bool == var_290_int; // 0x32a Eq
	if(var_291_bool == 0) goto Label_827; // 0x32b JumpB
	var_292_string = ""; // 0x32c PushV
	var_292_string = "Neutral"; // 0x32d MovS
	func_520(var_68_cvector, var_292_string); // 0x32e NEW_2
	var_293_int = 507320; // 0x330 PushI
	SetMessage(var_293_int); // 0x331 TObjFunc
	ClearReplies(); // 0x333 TObjFunc
	var_294_int = 506965; // 0x335 PushI
	var_295_int = 7673; // 0x336 PushI
	var_296_int = 7672; // 0x337 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x338 TObjFunc
	return 0; // 0x33a Return
	
Label_827:
	var_297_int = 7673; // 0x33b PushI
	var_298_bool = var_67_bool == var_297_int; // 0x33c Eq
	if(var_298_bool == 0) goto Label_850; // 0x33d JumpB
	var_299_string = ""; // 0x33e PushV
	var_299_string = "Neutral"; // 0x33f MovS
	func_520(var_68_cvector, var_299_string); // 0x340 NEW_2
	var_300_int = 506966; // 0x342 PushI
	SetMessage(var_300_int); // 0x343 TObjFunc
	ClearReplies(); // 0x345 TObjFunc
	var_301_int = 506967; // 0x347 PushI
	var_302_int = 8088; // 0x348 PushI
	var_303_int = 7674; // 0x349 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x34a TObjFunc
	var_304_int = 507343; // 0x34c PushI
	var_305_int = 8088; // 0x34d PushI
	var_306_int = 8095; // 0x34e PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x34f TObjFunc
	return 0; // 0x351 Return
	
Label_850:
	var_307_int = 8088; // 0x352 PushI
	var_308_bool = var_67_bool == var_307_int; // 0x353 Eq
	if(var_308_bool == 0) goto Label_868; // 0x354 JumpB
	var_309_string = ""; // 0x355 PushV
	var_309_string = "Neutral"; // 0x356 MovS
	func_520(var_68_cvector, var_309_string); // 0x357 NEW_2
	var_310_int = 507336; // 0x359 PushI
	SetMessage(var_310_int); // 0x35a TObjFunc
	ClearReplies(); // 0x35c TObjFunc
	var_311_int = 507337; // 0x35e PushI
	var_312_int = 8090; // 0x35f PushI
	var_313_int = 8089; // 0x360 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x361 TObjFunc
	return 0; // 0x363 Return
	
Label_868:
	var_314_int = 8090; // 0x364 PushI
	var_315_bool = var_67_bool == var_314_int; // 0x365 Eq
	if(var_315_bool == 0) goto Label_891; // 0x366 JumpB
	var_316_string = ""; // 0x367 PushV
	var_316_string = "Neutral"; // 0x368 MovS
	func_520(var_68_cvector, var_316_string); // 0x369 NEW_2
	var_317_int = 507338; // 0x36b PushI
	SetMessage(var_317_int); // 0x36c TObjFunc
	ClearReplies(); // 0x36e TObjFunc
	var_318_int = 507342; // 0x370 PushI
	var_319_int = -1; // 0x371 PushI
	var_320_int = 8094; // 0x372 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x373 TObjFunc
	var_321_int = 507341; // 0x375 PushI
	var_322_int = -1; // 0x376 PushI
	var_323_int = 8093; // 0x377 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x378 TObjFunc
	return 0; // 0x37a Return
	
Label_891:
	var_324_int = 8080; // 0x37b PushI
	var_325_bool = var_67_bool == var_324_int; // 0x37c Eq
	if(var_325_bool == 0) goto Label_909; // 0x37d JumpB
	var_326_string = ""; // 0x37e PushV
	var_326_string = "Sly"; // 0x37f MovS
	func_520(var_68_cvector, var_326_string); // 0x380 NEW_2
	var_327_int = 507329; // 0x382 PushI
	SetMessage(var_327_int); // 0x383 TObjFunc
	ClearReplies(); // 0x385 TObjFunc
	var_328_int = 507330; // 0x387 PushI
	var_329_int = 8082; // 0x388 PushI
	var_330_int = 8081; // 0x389 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x38a TObjFunc
	return 0; // 0x38c Return
	
Label_909:
	var_331_int = 8082; // 0x38d PushI
	var_332_bool = var_67_bool == var_331_int; // 0x38e Eq
	if(var_332_bool == 0) goto Label_927; // 0x38f JumpB
	var_333_string = ""; // 0x390 PushV
	var_333_string = "Sly"; // 0x391 MovS
	func_520(var_68_cvector, var_333_string); // 0x392 NEW_2
	var_334_int = 507331; // 0x394 PushI
	SetMessage(var_334_int); // 0x395 TObjFunc
	ClearReplies(); // 0x397 TObjFunc
	var_335_int = 507332; // 0x399 PushI
	var_336_int = 7670; // 0x39a PushI
	var_337_int = 8083; // 0x39b PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x39c TObjFunc
	return 0; // 0x39e Return
	
Label_927:
	var_338_int = 7670; // 0x39f PushI
	var_339_bool = var_67_bool == var_338_int; // 0x3a0 Eq
	if(var_339_bool == 0) goto Label_945; // 0x3a1 JumpB
	var_340_string = ""; // 0x3a2 PushV
	var_340_string = "Smile"; // 0x3a3 MovS
	func_520(var_68_cvector, var_340_string); // 0x3a4 NEW_2
	var_341_int = 506963; // 0x3a6 PushI
	SetMessage(var_341_int); // 0x3a7 TObjFunc
	ClearReplies(); // 0x3a9 TObjFunc
	var_342_int = 506964; // 0x3ab PushI
	var_343_int = -1; // 0x3ac PushI
	var_344_int = 7671; // 0x3ad PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x3ae TObjFunc
	return 0; // 0x3b0 Return
	
Label_945:
	var_3_object = 1; // 0x3b1 TMovB
	var_345_bool = 0; // 0x3b2 PushV
	func_5745(var_345_bool); // 0x3b3 NEW_2
	if(var_345_bool == 0) goto Label_953; // 0x3b5 JumpB
	lshStopAnimation(); // 0x3b6 Func
	goto Label_955; // 0x3b8 Jump
	
Label_955:
	return 0; // 0x3bb Return
	
Label_953:
	StopAnimation(); // 0x3b9 Func
	
Label_957:
	return 0; // 0x3bd Return
}


task_6_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_int, var_17_int, var_18_object, var_19_object, var_20_object, var_21_string, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x4b2 PushI
	if(var_69_int == 0) goto Label_1786; // 0x4b3 JumpB
	func_5569(); // 0x4b5 NEW_2
	var_71_int = 12126; // 0x4b7 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x4b8 Eq
	if(var_72_bool == 0) goto Label_1220; // 0x4b9 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x4ba PushV
	var_73_object = var_1_object; // 0x4bb MovT
	var_74_object = var_0_bool; // 0x4bc MovT
	func_5868(); // 0x4bd NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x4bf PushV
	var_77_object = var_1_object; // 0x4c0 MovT
	var_78_object = var_0_bool; // 0x4c1 MovT
	func_5874(); // 0x4c2 NEW_2
	
Label_1220:
	var_125_int = 12127; // 0x4c4 PushI
	var_126_bool = var_68_cvector == var_125_int; // 0x4c5 Eq
	if(var_126_bool == 0) goto Label_1233; // 0x4c6 JumpB
	var_127_object = Obj(); var_128_object = Obj(); // 0x4c7 PushV
	var_127_object = var_1_object; // 0x4c8 MovT
	var_128_object = var_0_bool; // 0x4c9 MovT
	func_5868(); // 0x4ca NEW_2
	var_129_object = Obj(); var_130_object = Obj(); // 0x4cc PushV
	var_129_object = var_1_object; // 0x4cd MovT
	var_130_object = var_0_bool; // 0x4ce MovT
	func_5874(); // 0x4cf NEW_2
	
Label_1233:
	var_131_int = 12118; // 0x4d1 PushI
	var_132_bool = var_68_cvector == var_131_int; // 0x4d2 Eq
	if(var_132_bool == 0) goto Label_1246; // 0x4d3 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x4d4 PushV
	var_133_object = var_1_object; // 0x4d5 MovT
	var_134_object = var_0_bool; // 0x4d6 MovT
	func_5868(); // 0x4d7 NEW_2
	var_135_object = Obj(); var_136_object = Obj(); // 0x4d9 PushV
	var_135_object = var_1_object; // 0x4da MovT
	var_136_object = var_0_bool; // 0x4db MovT
	func_5874(); // 0x4dc NEW_2
	
Label_1246:
	var_137_int = 12137; // 0x4de PushI
	var_138_bool = var_68_cvector == var_137_int; // 0x4df Eq
	if(var_138_bool == 0) goto Label_1264; // 0x4e0 JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0x4e1 PushV
	var_139_object = var_1_object; // 0x4e2 MovT
	var_140_object = var_0_bool; // 0x4e3 MovT
	func_5906(); // 0x4e4 NEW_2
	var_143_object = Obj(); var_144_object = Obj(); // 0x4e6 PushV
	var_143_object = var_1_object; // 0x4e7 MovT
	var_144_object = var_0_bool; // 0x4e8 MovT
	func_5747(var_144_object); // 0x4e9 NEW_2
	var_164_object = Obj(); var_165_object = Obj(); // 0x4eb PushV
	var_164_object = var_1_object; // 0x4ec MovT
	var_165_object = var_0_bool; // 0x4ed MovT
	func_5757(); // 0x4ee NEW_2
	
Label_1264:
	var_168_int = 12138; // 0x4f0 PushI
	var_169_bool = var_68_cvector == var_168_int; // 0x4f1 Eq
	if(var_169_bool == 0) goto Label_1282; // 0x4f2 JumpB
	var_170_object = Obj(); var_171_object = Obj(); // 0x4f3 PushV
	var_170_object = var_1_object; // 0x4f4 MovT
	var_171_object = var_0_bool; // 0x4f5 MovT
	func_5906(); // 0x4f6 NEW_2
	var_172_object = Obj(); var_173_object = Obj(); // 0x4f8 PushV
	var_172_object = var_1_object; // 0x4f9 MovT
	var_173_object = var_0_bool; // 0x4fa MovT
	func_5747(var_173_object); // 0x4fb NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x4fd PushV
	var_174_object = var_1_object; // 0x4fe MovT
	var_175_object = var_0_bool; // 0x4ff MovT
	func_5757(); // 0x500 NEW_2
	
Label_1282:
	var_176_int = 12107; // 0x502 PushI
	var_177_bool = var_68_cvector == var_176_int; // 0x503 Eq
	if(var_177_bool == 0) goto Label_1290; // 0x504 JumpB
	var_178_object = Obj(); var_179_object = Obj(); // 0x505 PushV
	var_178_object = var_1_object; // 0x506 MovT
	var_179_object = var_0_bool; // 0x507 MovT
	func_5808(); // 0x508 NEW_2
	
Label_1290:
	var_182_int = 10608; // 0x50a PushI
	var_183_bool = var_68_cvector == var_182_int; // 0x50b Eq
	if(var_183_bool == 0) goto Label_1298; // 0x50c JumpB
	var_184_object = Obj(); var_185_object = Obj(); // 0x50d PushV
	var_184_object = var_1_object; // 0x50e MovT
	var_185_object = var_0_bool; // 0x50f MovT
	func_5814(); // 0x510 NEW_2
	
Label_1298:
	var_188_int = 15333; // 0x512 PushI
	var_189_bool = var_68_cvector == var_188_int; // 0x513 Eq
	if(var_189_bool == 0) goto Label_1306; // 0x514 JumpB
	var_190_object = Obj(); var_191_object = Obj(); // 0x515 PushV
	var_190_object = var_1_object; // 0x516 MovT
	var_191_object = var_0_bool; // 0x517 MovT
	func_5931(); // 0x518 NEW_2
	
Label_1306:
	var_193_int = 12111; // 0x51a PushI
	var_194_bool = var_67_bool == var_193_int; // 0x51b Eq
	if(var_194_bool == 0) goto Label_1411; // 0x51c JumpB
	var_195_bool = 0; // 0x51d PushV
	var_195_bool = 0; // 0x51e MovB
	var_196_bool = 0; var_197_object = Obj(); // 0x51f PushV
	var_197_object = var_1_object; // 0x520 MovT
	func_6090(var_197_object); // 0x521 NEW_2
	if(var_196_bool == 0) goto Label_1322; // 0x523 JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x524 PushV
	var_205_object = var_1_object; // 0x525 MovT
	func_6102(var_205_object); // 0x526 NEW_2
	if(var_204_bool == 0) goto Label_1322; // 0x528 JumpB
	var_195_bool = 1; // 0x529 MovB
	
Label_1322:
	if(var_195_bool == 0) goto Label_1343; // 0x52a JumpB
	var_210_string = ""; // 0x52b PushV
	var_210_string = "Smile"; // 0x52c MovS
	func_1179(var_68_cvector, var_210_string); // 0x52d NEW_2
	var_227_int = 510952; // 0x52f PushI
	SetMessage(var_227_int); // 0x530 TObjFunc
	ClearReplies(); // 0x532 TObjFunc
	var_228_int = 510953; // 0x534 PushI
	var_229_int = 12113; // 0x535 PushI
	var_230_int = 12112; // 0x536 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x537 TObjFunc
	var_231_int = 510960; // 0x539 PushI
	var_232_int = 12113; // 0x53a PushI
	var_233_int = 12119; // 0x53b PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x53c TObjFunc
	return 0; // 0x53e Return
	
Label_1343:
	var_234_string = ""; // 0x53f PushV
	var_234_string = "Neutral"; // 0x540 MovS
	func_1179(var_68_cvector, var_234_string); // 0x541 NEW_2
	var_235_int = 509615; // 0x543 PushI
	SetMessage(var_235_int); // 0x544 TObjFunc
	ClearReplies(); // 0x546 TObjFunc
	var_236_bool = 0; // 0x548 PushV
	var_236_bool = 0; // 0x549 MovB
	var_237_bool = 0; var_238_object = Obj(); // 0x54a PushV
	var_238_object = var_1_object; // 0x54b MovT
	func_6114(var_238_object); // 0x54c NEW_2
	if(var_237_bool == 0) goto Label_1365; // 0x54e JumpB
	var_243_bool = 0; var_244_object = Obj(); // 0x54f PushV
	var_244_object = var_1_object; // 0x550 MovT
	func_6126(var_244_object); // 0x551 NEW_2
	if(var_243_bool == 0) goto Label_1365; // 0x553 JumpB
	var_236_bool = 1; // 0x554 MovB
	
Label_1365:
	if(var_236_bool == 0) goto Label_1371; // 0x555 JumpB
	var_249_int = 510970; // 0x556 PushI
	var_250_int = 12133; // 0x557 PushI
	var_251_int = 12132; // 0x558 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x559 TObjFunc
	
Label_1371:
	var_252_bool = 0; // 0x55b PushV
	var_252_bool = 0; // 0x55c MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x55d PushV
	var_254_object = var_1_object; // 0x55e MovT
	func_6196(var_254_object); // 0x55f NEW_2
	if(var_253_bool == 0) goto Label_1384; // 0x561 JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x562 PushV
	var_260_object = var_1_object; // 0x563 MovT
	func_6006(var_260_object); // 0x564 NEW_2
	if(var_259_bool == 0) goto Label_1384; // 0x566 JumpB
	var_252_bool = 1; // 0x567 MovB
	
Label_1384:
	if(var_252_bool == 0) goto Label_1390; // 0x568 JumpB
	var_265_int = 510948; // 0x569 PushI
	var_266_int = 12108; // 0x56a PushI
	var_267_int = 12107; // 0x56b PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x56c TObjFunc
	
Label_1390:
	var_268_bool = 0; var_269_object = Obj(); // 0x56e PushV
	var_269_object = var_1_object; // 0x56f MovT
	func_6018(var_269_object); // 0x570 NEW_2
	if(var_268_bool == 0) goto Label_1400; // 0x572 JumpB
	var_274_int = 509640; // 0x573 PushI
	var_275_int = 10581; // 0x574 PushI
	var_276_int = 10608; // 0x575 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x576 TObjFunc
	
Label_1400:
	var_277_int = 514119; // 0x578 PushI
	var_278_int = -1; // 0x579 PushI
	var_279_int = 15333; // 0x57a PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x57b TObjFunc
	var_280_int = 509616; // 0x57d PushI
	var_281_int = -1; // 0x57e PushI
	var_282_int = 10580; // 0x57f PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x580 TObjFunc
	return 0; // 0x582 Return
	
Label_1411:
	var_283_int = 10581; // 0x583 PushI
	var_284_bool = var_67_bool == var_283_int; // 0x584 Eq
	if(var_284_bool == 0) goto Label_1429; // 0x585 JumpB
	var_285_string = ""; // 0x586 PushV
	var_285_string = "Fear"; // 0x587 MovS
	func_1179(var_68_cvector, var_285_string); // 0x588 NEW_2
	var_286_int = 509617; // 0x58a PushI
	SetMessage(var_286_int); // 0x58b TObjFunc
	ClearReplies(); // 0x58d TObjFunc
	var_287_int = 509636; // 0x58f PushI
	var_288_int = 10604; // 0x590 PushI
	var_289_int = 10603; // 0x591 PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x592 TObjFunc
	return 0; // 0x594 Return
	
Label_1429:
	var_290_int = 10604; // 0x595 PushI
	var_291_bool = var_67_bool == var_290_int; // 0x596 Eq
	if(var_291_bool == 0) goto Label_1447; // 0x597 JumpB
	var_292_string = ""; // 0x598 PushV
	var_292_string = "Neutral"; // 0x599 MovS
	func_1179(var_68_cvector, var_292_string); // 0x59a NEW_2
	var_293_int = 509637; // 0x59c PushI
	SetMessage(var_293_int); // 0x59d TObjFunc
	ClearReplies(); // 0x59f TObjFunc
	var_294_int = 509638; // 0x5a1 PushI
	var_295_int = -1; // 0x5a2 PushI
	var_296_int = 10605; // 0x5a3 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x5a4 TObjFunc
	return 0; // 0x5a6 Return
	
Label_1447:
	var_297_int = 12108; // 0x5a7 PushI
	var_298_bool = var_67_bool == var_297_int; // 0x5a8 Eq
	if(var_298_bool == 0) goto Label_1470; // 0x5a9 JumpB
	var_299_string = ""; // 0x5aa PushV
	var_299_string = "Neutral"; // 0x5ab MovS
	func_1179(var_68_cvector, var_299_string); // 0x5ac NEW_2
	var_300_int = 510949; // 0x5ae PushI
	SetMessage(var_300_int); // 0x5af TObjFunc
	ClearReplies(); // 0x5b1 TObjFunc
	var_301_int = 510950; // 0x5b3 PushI
	var_302_int = 12110; // 0x5b4 PushI
	var_303_int = 12109; // 0x5b5 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x5b6 TObjFunc
	var_304_int = 510969; // 0x5b8 PushI
	var_305_int = 10583; // 0x5b9 PushI
	var_306_int = 12130; // 0x5ba PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x5bb TObjFunc
	return 0; // 0x5bd Return
	
Label_1470:
	var_307_int = 12110; // 0x5be PushI
	var_308_bool = var_67_bool == var_307_int; // 0x5bf Eq
	if(var_308_bool == 0) goto Label_1498; // 0x5c0 JumpB
	var_309_string = ""; // 0x5c1 PushV
	var_309_string = "Neutral"; // 0x5c2 MovS
	func_1179(var_68_cvector, var_309_string); // 0x5c3 NEW_2
	var_310_int = 510951; // 0x5c5 PushI
	SetMessage(var_310_int); // 0x5c6 TObjFunc
	ClearReplies(); // 0x5c8 TObjFunc
	var_311_int = 509618; // 0x5ca PushI
	var_312_int = 10583; // 0x5cb PushI
	var_313_int = 10582; // 0x5cc PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x5cd TObjFunc
	var_314_int = 510967; // 0x5cf PushI
	var_315_int = -1; // 0x5d0 PushI
	var_316_int = 12128; // 0x5d1 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x5d2 TObjFunc
	var_317_int = 510972; // 0x5d4 PushI
	var_318_int = -1; // 0x5d5 PushI
	var_319_int = 12134; // 0x5d6 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x5d7 TObjFunc
	return 0; // 0x5d9 Return
	
Label_1498:
	var_320_int = 10583; // 0x5da PushI
	var_321_bool = var_67_bool == var_320_int; // 0x5db Eq
	if(var_321_bool == 0) goto Label_1521; // 0x5dc JumpB
	var_322_string = ""; // 0x5dd PushV
	var_322_string = "Sly"; // 0x5de MovS
	func_1179(var_68_cvector, var_322_string); // 0x5df NEW_2
	var_323_int = 509619; // 0x5e1 PushI
	SetMessage(var_323_int); // 0x5e2 TObjFunc
	ClearReplies(); // 0x5e4 TObjFunc
	var_324_int = 509620; // 0x5e6 PushI
	var_325_int = 10585; // 0x5e7 PushI
	var_326_int = 10584; // 0x5e8 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x5e9 TObjFunc
	var_327_int = 509635; // 0x5eb PushI
	var_328_int = 10585; // 0x5ec PushI
	var_329_int = 10601; // 0x5ed PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x5ee TObjFunc
	return 0; // 0x5f0 Return
	
Label_1521:
	var_330_int = 10585; // 0x5f1 PushI
	var_331_bool = var_67_bool == var_330_int; // 0x5f2 Eq
	if(var_331_bool == 0) goto Label_1549; // 0x5f3 JumpB
	var_332_string = ""; // 0x5f4 PushV
	var_332_string = "Sly"; // 0x5f5 MovS
	func_1179(var_68_cvector, var_332_string); // 0x5f6 NEW_2
	var_333_int = 509621; // 0x5f8 PushI
	SetMessage(var_333_int); // 0x5f9 TObjFunc
	ClearReplies(); // 0x5fb TObjFunc
	var_334_int = 509623; // 0x5fd PushI
	var_335_int = 10588; // 0x5fe PushI
	var_336_int = 10587; // 0x5ff PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x600 TObjFunc
	var_337_int = 509634; // 0x602 PushI
	var_338_int = 10595; // 0x603 PushI
	var_339_int = 10599; // 0x604 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x605 TObjFunc
	var_340_int = 509622; // 0x607 PushI
	var_341_int = -1; // 0x608 PushI
	var_342_int = 10586; // 0x609 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x60a TObjFunc
	return 0; // 0x60c Return
	
Label_1549:
	var_343_int = 10588; // 0x60d PushI
	var_344_bool = var_67_bool == var_343_int; // 0x60e Eq
	if(var_344_bool == 0) goto Label_1577; // 0x60f JumpB
	var_345_string = ""; // 0x610 PushV
	var_345_string = "Neutral"; // 0x611 MovS
	func_1179(var_68_cvector, var_345_string); // 0x612 NEW_2
	var_346_int = 509624; // 0x614 PushI
	SetMessage(var_346_int); // 0x615 TObjFunc
	ClearReplies(); // 0x617 TObjFunc
	var_347_int = 509625; // 0x619 PushI
	var_348_int = -1; // 0x61a PushI
	var_349_int = 10589; // 0x61b PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x61c TObjFunc
	var_350_int = 509626; // 0x61e PushI
	var_351_int = 10591; // 0x61f PushI
	var_352_int = 10590; // 0x620 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x621 TObjFunc
	var_353_int = 509630; // 0x623 PushI
	var_354_int = 10595; // 0x624 PushI
	var_355_int = 10594; // 0x625 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x626 TObjFunc
	return 0; // 0x628 Return
	
Label_1577:
	var_356_int = 10595; // 0x629 PushI
	var_357_bool = var_67_bool == var_356_int; // 0x62a Eq
	if(var_357_bool == 0) goto Label_1600; // 0x62b JumpB
	var_358_string = ""; // 0x62c PushV
	var_358_string = "Neutral"; // 0x62d MovS
	func_1179(var_68_cvector, var_358_string); // 0x62e NEW_2
	var_359_int = 509631; // 0x630 PushI
	SetMessage(var_359_int); // 0x631 TObjFunc
	ClearReplies(); // 0x633 TObjFunc
	var_360_int = 509632; // 0x635 PushI
	var_361_int = -1; // 0x636 PushI
	var_362_int = 10596; // 0x637 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x638 TObjFunc
	var_363_int = 509633; // 0x63a PushI
	var_364_int = 10591; // 0x63b PushI
	var_365_int = 10597; // 0x63c PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x63d TObjFunc
	return 0; // 0x63f Return
	
Label_1600:
	var_366_int = 10591; // 0x640 PushI
	var_367_bool = var_67_bool == var_366_int; // 0x641 Eq
	if(var_367_bool == 0) goto Label_1623; // 0x642 JumpB
	var_368_string = ""; // 0x643 PushV
	var_368_string = "Neutral"; // 0x644 MovS
	func_1179(var_68_cvector, var_368_string); // 0x645 NEW_2
	var_369_int = 509627; // 0x647 PushI
	SetMessage(var_369_int); // 0x648 TObjFunc
	ClearReplies(); // 0x64a TObjFunc
	var_370_int = 509628; // 0x64c PushI
	var_371_int = -1; // 0x64d PushI
	var_372_int = 10592; // 0x64e PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x64f TObjFunc
	var_373_int = 509629; // 0x651 PushI
	var_374_int = -1; // 0x652 PushI
	var_375_int = 10593; // 0x653 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x654 TObjFunc
	return 0; // 0x656 Return
	
Label_1623:
	var_376_int = 12133; // 0x657 PushI
	var_377_bool = var_67_bool == var_376_int; // 0x658 Eq
	if(var_377_bool == 0) goto Label_1646; // 0x659 JumpB
	var_378_string = ""; // 0x65a PushV
	var_378_string = "Smile"; // 0x65b MovS
	func_1179(var_68_cvector, var_378_string); // 0x65c NEW_2
	var_379_int = 510971; // 0x65e PushI
	SetMessage(var_379_int); // 0x65f TObjFunc
	ClearReplies(); // 0x661 TObjFunc
	var_380_int = 510973; // 0x663 PushI
	var_381_int = 12136; // 0x664 PushI
	var_382_int = 12135; // 0x665 PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x666 TObjFunc
	var_383_int = 533046; // 0x668 PushI
	var_384_int = 12136; // 0x669 PushI
	var_385_int = 34556; // 0x66a PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x66b TObjFunc
	return 0; // 0x66d Return
	
Label_1646:
	var_386_int = 12136; // 0x66e PushI
	var_387_bool = var_67_bool == var_386_int; // 0x66f Eq
	if(var_387_bool == 0) goto Label_1669; // 0x670 JumpB
	var_388_string = ""; // 0x671 PushV
	var_388_string = "Neutral"; // 0x672 MovS
	func_1179(var_68_cvector, var_388_string); // 0x673 NEW_2
	var_389_int = 510974; // 0x675 PushI
	SetMessage(var_389_int); // 0x676 TObjFunc
	ClearReplies(); // 0x678 TObjFunc
	var_390_int = 510975; // 0x67a PushI
	var_391_int = -1; // 0x67b PushI
	var_392_int = 12137; // 0x67c PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x67d TObjFunc
	var_393_int = 510976; // 0x67f PushI
	var_394_int = -1; // 0x680 PushI
	var_395_int = 12138; // 0x681 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x682 TObjFunc
	return 0; // 0x684 Return
	
Label_1669:
	var_396_int = 12113; // 0x685 PushI
	var_397_bool = var_67_bool == var_396_int; // 0x686 Eq
	if(var_397_bool == 0) goto Label_1692; // 0x687 JumpB
	var_398_string = ""; // 0x688 PushV
	var_398_string = "Smile"; // 0x689 MovS
	func_1179(var_68_cvector, var_398_string); // 0x68a NEW_2
	var_399_int = 510954; // 0x68c PushI
	SetMessage(var_399_int); // 0x68d TObjFunc
	ClearReplies(); // 0x68f TObjFunc
	var_400_int = 510955; // 0x691 PushI
	var_401_int = 12115; // 0x692 PushI
	var_402_int = 12114; // 0x693 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x694 TObjFunc
	var_403_int = 510961; // 0x696 PushI
	var_404_int = 34554; // 0x697 PushI
	var_405_int = 12121; // 0x698 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x699 TObjFunc
	return 0; // 0x69b Return
	
Label_1692:
	var_406_int = 34554; // 0x69c PushI
	var_407_bool = var_67_bool == var_406_int; // 0x69d Eq
	if(var_407_bool == 0) goto Label_1710; // 0x69e JumpB
	var_408_string = ""; // 0x69f PushV
	var_408_string = "Anger"; // 0x6a0 MovS
	func_1179(var_68_cvector, var_408_string); // 0x6a1 NEW_2
	var_409_int = 533044; // 0x6a3 PushI
	SetMessage(var_409_int); // 0x6a4 TObjFunc
	ClearReplies(); // 0x6a6 TObjFunc
	var_410_int = 533045; // 0x6a8 PushI
	var_411_int = 12117; // 0x6a9 PushI
	var_412_int = 34555; // 0x6aa PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x6ab TObjFunc
	return 0; // 0x6ad Return
	
Label_1710:
	var_413_int = 12115; // 0x6ae PushI
	var_414_bool = var_67_bool == var_413_int; // 0x6af Eq
	if(var_414_bool == 0) goto Label_1728; // 0x6b0 JumpB
	var_415_string = ""; // 0x6b1 PushV
	var_415_string = "Anger"; // 0x6b2 MovS
	func_1179(var_68_cvector, var_415_string); // 0x6b3 NEW_2
	var_416_int = 510956; // 0x6b5 PushI
	SetMessage(var_416_int); // 0x6b6 TObjFunc
	ClearReplies(); // 0x6b8 TObjFunc
	var_417_int = 510957; // 0x6ba PushI
	var_418_int = 12117; // 0x6bb PushI
	var_419_int = 12116; // 0x6bc PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x6bd TObjFunc
	return 0; // 0x6bf Return
	
Label_1728:
	var_420_int = 12117; // 0x6c0 PushI
	var_421_bool = var_67_bool == var_420_int; // 0x6c1 Eq
	if(var_421_bool == 0) goto Label_1751; // 0x6c2 JumpB
	var_422_string = ""; // 0x6c3 PushV
	var_422_string = "Smile"; // 0x6c4 MovS
	func_1179(var_68_cvector, var_422_string); // 0x6c5 NEW_2
	var_423_int = 510958; // 0x6c7 PushI
	SetMessage(var_423_int); // 0x6c8 TObjFunc
	ClearReplies(); // 0x6ca TObjFunc
	var_424_int = 510963; // 0x6cc PushI
	var_425_int = 12125; // 0x6cd PushI
	var_426_int = 12124; // 0x6ce PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x6cf TObjFunc
	var_427_int = 510959; // 0x6d1 PushI
	var_428_int = -1; // 0x6d2 PushI
	var_429_int = 12118; // 0x6d3 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x6d4 TObjFunc
	return 0; // 0x6d6 Return
	
Label_1751:
	var_430_int = 12125; // 0x6d7 PushI
	var_431_bool = var_67_bool == var_430_int; // 0x6d8 Eq
	if(var_431_bool == 0) goto Label_1774; // 0x6d9 JumpB
	var_432_string = ""; // 0x6da PushV
	var_432_string = "Neutral"; // 0x6db MovS
	func_1179(var_68_cvector, var_432_string); // 0x6dc NEW_2
	var_433_int = 510964; // 0x6de PushI
	SetMessage(var_433_int); // 0x6df TObjFunc
	ClearReplies(); // 0x6e1 TObjFunc
	var_434_int = 510965; // 0x6e3 PushI
	var_435_int = -1; // 0x6e4 PushI
	var_436_int = 12126; // 0x6e5 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x6e6 TObjFunc
	var_437_int = 510966; // 0x6e8 PushI
	var_438_int = -1; // 0x6e9 PushI
	var_439_int = 12127; // 0x6ea PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x6eb TObjFunc
	return 0; // 0x6ed Return
	
Label_1774:
	var_3_object = 1; // 0x6ee TMovB
	var_440_bool = 0; // 0x6ef PushV
	func_5745(var_440_bool); // 0x6f0 NEW_2
	if(var_440_bool == 0) goto Label_1782; // 0x6f2 JumpB
	lshStopAnimation(); // 0x6f3 Func
	goto Label_1784; // 0x6f5 Jump
	
Label_1784:
	return 0; // 0x6f8 Return
	
Label_1782:
	StopAnimation(); // 0x6f6 Func
	
Label_1786:
	return 0; // 0x6fa Return
}


task_8_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_int, var_22_int, var_23_object, var_24_object, var_25_object, var_26_string, var_27_bool, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x7b1 PushI
	if(var_69_int == 0) goto Label_2109; // 0x7b2 JumpB
	func_5569(); // 0x7b4 NEW_2
	var_71_int = 10847; // 0x7b6 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x7b7 Eq
	if(var_72_bool == 0) goto Label_1982; // 0x7b8 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x7b9 PushV
	var_73_object = var_1_object; // 0x7ba MovT
	var_74_object = var_0_bool; // 0x7bb MovT
	func_5802(); // 0x7bc NEW_2
	
Label_1982:
	var_77_int = 15331; // 0x7be PushI
	var_78_bool = var_68_cvector == var_77_int; // 0x7bf Eq
	if(var_78_bool == 0) goto Label_1990; // 0x7c0 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x7c1 PushV
	var_79_object = var_1_object; // 0x7c2 MovT
	var_80_object = var_0_bool; // 0x7c3 MovT
	func_5931(); // 0x7c4 NEW_2
	
Label_1990:
	var_82_int = 10842; // 0x7c6 PushI
	var_83_bool = var_67_bool == var_82_int; // 0x7c7 Eq
	if(var_83_bool == 0) goto Label_2033; // 0x7c8 JumpB
	var_84_string = ""; // 0x7c9 PushV
	var_84_string = "Neutral"; // 0x7ca MovS
	func_1946(var_68_cvector, var_84_string); // 0x7cb NEW_2
	var_101_int = 509843; // 0x7cd PushI
	SetMessage(var_101_int); // 0x7ce TObjFunc
	ClearReplies(); // 0x7d0 TObjFunc
	var_102_bool = 0; // 0x7d2 PushV
	var_102_bool = 0; // 0x7d3 MovB
	var_103_bool = 0; var_104_object = Obj(); // 0x7d4 PushV
	var_104_object = var_1_object; // 0x7d5 MovT
	func_5994(var_104_object); // 0x7d6 NEW_2
	if(var_103_bool == 0) goto Label_2016; // 0x7d8 JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x7d9 PushV
	var_112_object = var_1_object; // 0x7da MovT
	func_6078(var_112_object); // 0x7db NEW_2
	var_117_bool = var_111_bool == 0; // 0x7dd Not
	if(var_117_bool == 0) goto Label_2016; // 0x7de JumpB
	var_102_bool = 1; // 0x7df MovB
	
Label_2016:
	if(var_102_bool == 0) goto Label_2022; // 0x7e0 JumpB
	var_118_int = 509848; // 0x7e1 PushI
	var_119_int = 10848; // 0x7e2 PushI
	var_120_int = 10847; // 0x7e3 PushI
	AddReply(var_118_int, var_119_int, var_120_int); // 0x7e4 TObjFunc
	
Label_2022:
	var_121_int = 514117; // 0x7e6 PushI
	var_122_int = -1; // 0x7e7 PushI
	var_123_int = 15331; // 0x7e8 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x7e9 TObjFunc
	var_124_int = 514118; // 0x7eb PushI
	var_125_int = -1; // 0x7ec PushI
	var_126_int = 15332; // 0x7ed PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x7ee TObjFunc
	return 0; // 0x7f0 Return
	
Label_2033:
	var_127_int = 10848; // 0x7f1 PushI
	var_128_bool = var_67_bool == var_127_int; // 0x7f2 Eq
	if(var_128_bool == 0) goto Label_2056; // 0x7f3 JumpB
	var_129_string = ""; // 0x7f4 PushV
	var_129_string = "Neutral"; // 0x7f5 MovS
	func_1946(var_68_cvector, var_129_string); // 0x7f6 NEW_2
	var_130_int = 509849; // 0x7f8 PushI
	SetMessage(var_130_int); // 0x7f9 TObjFunc
	ClearReplies(); // 0x7fb TObjFunc
	var_131_int = 509850; // 0x7fd PushI
	var_132_int = 10850; // 0x7fe PushI
	var_133_int = 10849; // 0x7ff PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x800 TObjFunc
	var_134_int = 509856; // 0x802 PushI
	var_135_int = 10852; // 0x803 PushI
	var_136_int = 10855; // 0x804 PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x805 TObjFunc
	return 0; // 0x807 Return
	
Label_2056:
	var_137_int = 10850; // 0x808 PushI
	var_138_bool = var_67_bool == var_137_int; // 0x809 Eq
	if(var_138_bool == 0) goto Label_2074; // 0x80a JumpB
	var_139_string = ""; // 0x80b PushV
	var_139_string = "Neutral"; // 0x80c MovS
	func_1946(var_68_cvector, var_139_string); // 0x80d NEW_2
	var_140_int = 509851; // 0x80f PushI
	SetMessage(var_140_int); // 0x810 TObjFunc
	ClearReplies(); // 0x812 TObjFunc
	var_141_int = 509852; // 0x814 PushI
	var_142_int = 10852; // 0x815 PushI
	var_143_int = 10851; // 0x816 PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x817 TObjFunc
	return 0; // 0x819 Return
	
Label_2074:
	var_144_int = 10852; // 0x81a PushI
	var_145_bool = var_67_bool == var_144_int; // 0x81b Eq
	if(var_145_bool == 0) goto Label_2097; // 0x81c JumpB
	var_146_string = ""; // 0x81d PushV
	var_146_string = "Smile"; // 0x81e MovS
	func_1946(var_68_cvector, var_146_string); // 0x81f NEW_2
	var_147_int = 509853; // 0x821 PushI
	SetMessage(var_147_int); // 0x822 TObjFunc
	ClearReplies(); // 0x824 TObjFunc
	var_148_int = 509854; // 0x826 PushI
	var_149_int = -1; // 0x827 PushI
	var_150_int = 10853; // 0x828 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x829 TObjFunc
	var_151_int = 509855; // 0x82b PushI
	var_152_int = -1; // 0x82c PushI
	var_153_int = 10854; // 0x82d PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x82e TObjFunc
	return 0; // 0x830 Return
	
Label_2097:
	var_3_object = 1; // 0x831 TMovB
	var_154_bool = 0; // 0x832 PushV
	func_5745(var_154_bool); // 0x833 NEW_2
	if(var_154_bool == 0) goto Label_2105; // 0x835 JumpB
	lshStopAnimation(); // 0x836 Func
	goto Label_2107; // 0x838 Jump
	
Label_2107:
	return 0; // 0x83b Return
	
Label_2105:
	StopAnimation(); // 0x839 Func
	
Label_2109:
	return 0; // 0x83d Return
}


task_10_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_int, var_27_int, var_28_object, var_29_object, var_30_object, var_31_string, var_32_bool, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x941 PushI
	if(var_69_int == 0) goto Label_2915; // 0x942 JumpB
	func_5569(); // 0x944 NEW_2
	var_71_int = 12909; // 0x946 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x947 Eq
	if(var_72_bool == 0) goto Label_2382; // 0x948 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x949 PushV
	var_73_object = var_1_object; // 0x94a MovT
	var_74_object = var_0_bool; // 0x94b MovT
	func_5912(); // 0x94c NEW_2
	
Label_2382:
	var_77_int = 12936; // 0x94e PushI
	var_78_bool = var_68_cvector == var_77_int; // 0x94f Eq
	if(var_78_bool == 0) goto Label_2390; // 0x950 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x951 PushV
	var_79_object = var_1_object; // 0x952 MovT
	var_80_object = var_0_bool; // 0x953 MovT
	func_5942(); // 0x954 NEW_2
	
Label_2390:
	var_97_int = 12939; // 0x956 PushI
	var_98_bool = var_68_cvector == var_97_int; // 0x957 Eq
	if(var_98_bool == 0) goto Label_2398; // 0x958 JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x959 PushV
	var_99_object = var_1_object; // 0x95a MovT
	var_100_object = var_0_bool; // 0x95b MovT
	func_5942(); // 0x95c NEW_2
	
Label_2398:
	var_101_int = 16829; // 0x95e PushI
	var_102_bool = var_68_cvector == var_101_int; // 0x95f Eq
	if(var_102_bool == 0) goto Label_2406; // 0x960 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x961 PushV
	var_103_object = var_1_object; // 0x962 MovT
	var_104_object = var_0_bool; // 0x963 MovT
	func_5942(); // 0x964 NEW_2
	
Label_2406:
	var_105_int = 12925; // 0x966 PushI
	var_106_bool = var_68_cvector == var_105_int; // 0x967 Eq
	if(var_106_bool == 0) goto Label_2414; // 0x968 JumpB
	var_107_object = Obj(); var_108_object = Obj(); // 0x969 PushV
	var_107_object = var_1_object; // 0x96a MovT
	var_108_object = var_0_bool; // 0x96b MovT
	func_5942(); // 0x96c NEW_2
	
Label_2414:
	var_109_int = 12944; // 0x96e PushI
	var_110_bool = var_68_cvector == var_109_int; // 0x96f Eq
	if(var_110_bool == 0) goto Label_2427; // 0x970 JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x971 PushV
	var_111_object = var_1_object; // 0x972 MovT
	var_112_object = var_0_bool; // 0x973 MovT
	func_5918(); // 0x974 NEW_2
	var_140_object = Obj(); var_141_object = Obj(); // 0x976 PushV
	var_140_object = var_1_object; // 0x977 MovT
	var_141_object = var_0_bool; // 0x978 MovT
	func_5780(var_141_object); // 0x979 NEW_2
	
Label_2427:
	var_161_int = 15334; // 0x97b PushI
	var_162_bool = var_68_cvector == var_161_int; // 0x97c Eq
	if(var_162_bool == 0) goto Label_2435; // 0x97d JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0x97e PushV
	var_163_object = var_1_object; // 0x97f MovT
	var_164_object = var_0_bool; // 0x980 MovT
	func_5931(); // 0x981 NEW_2
	
Label_2435:
	var_166_int = 12926; // 0x983 PushI
	var_167_bool = var_67_bool == var_166_int; // 0x984 Eq
	if(var_167_bool == 0) goto Label_2555; // 0x985 JumpB
	var_168_bool = 0; // 0x986 PushV
	var_168_bool = 0; // 0x987 MovB
	var_169_bool = 0; var_170_object = Obj(); // 0x988 PushV
	var_170_object = var_1_object; // 0x989 MovT
	func_6184(var_170_object); // 0x98a NEW_2
	if(var_169_bool == 0) goto Label_2451; // 0x98c JumpB
	var_177_bool = 0; var_178_object = Obj(); // 0x98d PushV
	var_178_object = var_1_object; // 0x98e MovT
	func_6208(var_178_object); // 0x98f NEW_2
	if(var_177_bool == 0) goto Label_2451; // 0x991 JumpB
	var_168_bool = 1; // 0x992 MovB
	
Label_2451:
	if(var_168_bool == 0) goto Label_2477; // 0x993 JumpB
	var_183_object = Obj(); var_184_object = Obj(); // 0x994 PushV
	var_183_object = var_1_object; // 0x995 MovT
	var_184_object = var_0_bool; // 0x996 MovT
	func_5964(); // 0x997 NEW_2
	var_187_string = ""; // 0x999 PushV
	var_187_string = "Sly"; // 0x99a MovS
	func_2346(var_68_cvector, var_187_string); // 0x99b NEW_2
	var_204_int = 511720; // 0x99d PushI
	SetMessage(var_204_int); // 0x99e TObjFunc
	ClearReplies(); // 0x9a0 TObjFunc
	var_205_int = 511721; // 0x9a2 PushI
	var_206_int = 12928; // 0x9a3 PushI
	var_207_int = 12927; // 0x9a4 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x9a5 TObjFunc
	var_208_int = 515755; // 0x9a7 PushI
	var_209_int = 12928; // 0x9a8 PushI
	var_210_int = 16821; // 0x9a9 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x9aa TObjFunc
	return 0; // 0x9ac Return
	
Label_2477:
	var_211_string = ""; // 0x9ad PushV
	var_211_string = "Neutral"; // 0x9ae MovS
	func_2346(var_68_cvector, var_211_string); // 0x9af NEW_2
	var_212_int = 511704; // 0x9b1 PushI
	SetMessage(var_212_int); // 0x9b2 TObjFunc
	ClearReplies(); // 0x9b4 TObjFunc
	var_213_bool = 0; // 0x9b6 PushV
	var_213_bool = 0; // 0x9b7 MovB
	var_214_bool = 0; var_215_object = Obj(); // 0x9b8 PushV
	var_215_object = var_1_object; // 0x9b9 MovT
	func_6138(var_215_object); // 0x9ba NEW_2
	if(var_214_bool == 0) goto Label_2499; // 0x9bc JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0x9bd PushV
	var_221_object = var_1_object; // 0x9be MovT
	func_6150(var_221_object); // 0x9bf NEW_2
	if(var_220_bool == 0) goto Label_2499; // 0x9c1 JumpB
	var_213_bool = 1; // 0x9c2 MovB
	
Label_2499:
	if(var_213_bool == 0) goto Label_2505; // 0x9c3 JumpB
	var_226_int = 511705; // 0x9c4 PushI
	var_227_int = 12910; // 0x9c5 PushI
	var_228_int = 12909; // 0x9c6 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x9c7 TObjFunc
	
Label_2505:
	var_229_bool = 0; // 0x9c9 PushV
	var_229_bool = 0; // 0x9ca MovB
	var_230_bool = 0; // 0x9cb PushV
	var_230_bool = 0; // 0x9cc MovB
	var_231_bool = 0; // 0x9cd PushV
	var_231_bool = 0; // 0x9ce MovB
	var_232_bool = 0; var_233_object = Obj(); // 0x9cf PushV
	var_233_object = var_1_object; // 0x9d0 MovT
	func_6138(var_233_object); // 0x9d1 NEW_2
	if(var_232_bool == 0) goto Label_2523; // 0x9d3 JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0x9d4 PushV
	var_235_object = var_1_object; // 0x9d5 MovT
	func_6172(var_235_object); // 0x9d6 NEW_2
	var_240_bool = var_234_bool == 0; // 0x9d8 Not
	if(var_240_bool == 0) goto Label_2523; // 0x9d9 JumpB
	var_231_bool = 1; // 0x9da MovB
	
Label_2523:
	if(var_231_bool == 0) goto Label_2531; // 0x9db JumpB
	var_241_bool = 0; var_242_object = Obj(); // 0x9dc PushV
	var_242_object = var_1_object; // 0x9dd MovT
	func_6150(var_242_object); // 0x9de NEW_2
	var_243_bool = var_241_bool == 0; // 0x9e0 Not
	if(var_243_bool == 0) goto Label_2531; // 0x9e1 JumpB
	var_230_bool = 1; // 0x9e2 MovB
	
Label_2531:
	if(var_230_bool == 0) goto Label_2538; // 0x9e3 JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x9e4 PushV
	var_245_object = var_1_object; // 0x9e5 MovT
	func_6162(var_244_bool, var_245_object); // 0x9e6 NEW_2
	if(var_244_bool == 0) goto Label_2538; // 0x9e8 JumpB
	var_229_bool = 1; // 0x9e9 MovB
	
Label_2538:
	if(var_229_bool == 0) goto Label_2544; // 0x9ea JumpB
	var_253_int = 511734; // 0x9eb PushI
	var_254_int = 16834; // 0x9ec PushI
	var_255_int = 12940; // 0x9ed PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x9ee TObjFunc
	
Label_2544:
	var_256_int = 514120; // 0x9f0 PushI
	var_257_int = -1; // 0x9f1 PushI
	var_258_int = 15334; // 0x9f2 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x9f3 TObjFunc
	var_259_int = 511739; // 0x9f5 PushI
	var_260_int = -1; // 0x9f6 PushI
	var_261_int = 12945; // 0x9f7 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x9f8 TObjFunc
	return 0; // 0x9fa Return
	
Label_2555:
	var_262_int = 16834; // 0x9fb PushI
	var_263_bool = var_67_bool == var_262_int; // 0x9fc Eq
	if(var_263_bool == 0) goto Label_2573; // 0x9fd JumpB
	var_264_string = ""; // 0x9fe PushV
	var_264_string = "Neutral"; // 0x9ff MovS
	func_2346(var_68_cvector, var_264_string); // 0xa00 NEW_2
	var_265_int = 515765; // 0xa02 PushI
	SetMessage(var_265_int); // 0xa03 TObjFunc
	ClearReplies(); // 0xa05 TObjFunc
	var_266_int = 515766; // 0xa07 PushI
	var_267_int = 16836; // 0xa08 PushI
	var_268_int = 16835; // 0xa09 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xa0a TObjFunc
	return 0; // 0xa0c Return
	
Label_2573:
	var_269_int = 16836; // 0xa0d PushI
	var_270_bool = var_67_bool == var_269_int; // 0xa0e Eq
	if(var_270_bool == 0) goto Label_2591; // 0xa0f JumpB
	var_271_string = ""; // 0xa10 PushV
	var_271_string = "Anger"; // 0xa11 MovS
	func_2346(var_68_cvector, var_271_string); // 0xa12 NEW_2
	var_272_int = 515767; // 0xa14 PushI
	SetMessage(var_272_int); // 0xa15 TObjFunc
	ClearReplies(); // 0xa17 TObjFunc
	var_273_int = 515768; // 0xa19 PushI
	var_274_int = 12941; // 0xa1a PushI
	var_275_int = 16837; // 0xa1b PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0xa1c TObjFunc
	return 0; // 0xa1e Return
	
Label_2591:
	var_276_int = 12941; // 0xa1f PushI
	var_277_bool = var_67_bool == var_276_int; // 0xa20 Eq
	if(var_277_bool == 0) goto Label_2609; // 0xa21 JumpB
	var_278_string = ""; // 0xa22 PushV
	var_278_string = "Anger"; // 0xa23 MovS
	func_2346(var_68_cvector, var_278_string); // 0xa24 NEW_2
	var_279_int = 511735; // 0xa26 PushI
	SetMessage(var_279_int); // 0xa27 TObjFunc
	ClearReplies(); // 0xa29 TObjFunc
	var_280_int = 511736; // 0xa2b PushI
	var_281_int = 12943; // 0xa2c PushI
	var_282_int = 12942; // 0xa2d PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0xa2e TObjFunc
	return 0; // 0xa30 Return
	
Label_2609:
	var_283_int = 12943; // 0xa31 PushI
	var_284_bool = var_67_bool == var_283_int; // 0xa32 Eq
	if(var_284_bool == 0) goto Label_2627; // 0xa33 JumpB
	var_285_string = ""; // 0xa34 PushV
	var_285_string = "Neutral"; // 0xa35 MovS
	func_2346(var_68_cvector, var_285_string); // 0xa36 NEW_2
	var_286_int = 511737; // 0xa38 PushI
	SetMessage(var_286_int); // 0xa39 TObjFunc
	ClearReplies(); // 0xa3b TObjFunc
	var_287_int = 511738; // 0xa3d PushI
	var_288_int = -1; // 0xa3e PushI
	var_289_int = 12944; // 0xa3f PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0xa40 TObjFunc
	return 0; // 0xa42 Return
	
Label_2627:
	var_290_int = 12910; // 0xa43 PushI
	var_291_bool = var_67_bool == var_290_int; // 0xa44 Eq
	if(var_291_bool == 0) goto Label_2650; // 0xa45 JumpB
	var_292_string = ""; // 0xa46 PushV
	var_292_string = "Neutral"; // 0xa47 MovS
	func_2346(var_68_cvector, var_292_string); // 0xa48 NEW_2
	var_293_int = 511706; // 0xa4a PushI
	SetMessage(var_293_int); // 0xa4b TObjFunc
	ClearReplies(); // 0xa4d TObjFunc
	var_294_int = 511707; // 0xa4f PushI
	var_295_int = 12913; // 0xa50 PushI
	var_296_int = 12911; // 0xa51 PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0xa52 TObjFunc
	var_297_int = 511708; // 0xa54 PushI
	var_298_int = 12913; // 0xa55 PushI
	var_299_int = 12912; // 0xa56 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0xa57 TObjFunc
	return 0; // 0xa59 Return
	
Label_2650:
	var_300_int = 12913; // 0xa5a PushI
	var_301_bool = var_67_bool == var_300_int; // 0xa5b Eq
	if(var_301_bool == 0) goto Label_2673; // 0xa5c JumpB
	var_302_string = ""; // 0xa5d PushV
	var_302_string = "Smile"; // 0xa5e MovS
	func_2346(var_68_cvector, var_302_string); // 0xa5f NEW_2
	var_303_int = 511709; // 0xa61 PushI
	SetMessage(var_303_int); // 0xa62 TObjFunc
	ClearReplies(); // 0xa64 TObjFunc
	var_304_int = 511710; // 0xa66 PushI
	var_305_int = 12916; // 0xa67 PushI
	var_306_int = 12915; // 0xa68 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0xa69 TObjFunc
	var_307_int = 511713; // 0xa6b PushI
	var_308_int = 12919; // 0xa6c PushI
	var_309_int = 12918; // 0xa6d PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0xa6e TObjFunc
	return 0; // 0xa70 Return
	
Label_2673:
	var_310_int = 12919; // 0xa71 PushI
	var_311_bool = var_67_bool == var_310_int; // 0xa72 Eq
	if(var_311_bool == 0) goto Label_2691; // 0xa73 JumpB
	var_312_string = ""; // 0xa74 PushV
	var_312_string = "Neutral"; // 0xa75 MovS
	func_2346(var_68_cvector, var_312_string); // 0xa76 NEW_2
	var_313_int = 511714; // 0xa78 PushI
	SetMessage(var_313_int); // 0xa79 TObjFunc
	ClearReplies(); // 0xa7b TObjFunc
	var_314_int = 511715; // 0xa7d PushI
	var_315_int = 12916; // 0xa7e PushI
	var_316_int = 12920; // 0xa7f PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0xa80 TObjFunc
	return 0; // 0xa82 Return
	
Label_2691:
	var_317_int = 12916; // 0xa83 PushI
	var_318_bool = var_67_bool == var_317_int; // 0xa84 Eq
	if(var_318_bool == 0) goto Label_2714; // 0xa85 JumpB
	var_319_string = ""; // 0xa86 PushV
	var_319_string = "Neutral"; // 0xa87 MovS
	func_2346(var_68_cvector, var_319_string); // 0xa88 NEW_2
	var_320_int = 511711; // 0xa8a PushI
	SetMessage(var_320_int); // 0xa8b TObjFunc
	ClearReplies(); // 0xa8d TObjFunc
	var_321_int = 511712; // 0xa8f PushI
	var_322_int = 12935; // 0xa90 PushI
	var_323_int = 12917; // 0xa91 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0xa92 TObjFunc
	var_324_int = 511728; // 0xa94 PushI
	var_325_int = 12922; // 0xa95 PushI
	var_326_int = 12934; // 0xa96 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0xa97 TObjFunc
	return 0; // 0xa99 Return
	
Label_2714:
	var_327_int = 12922; // 0xa9a PushI
	var_328_bool = var_67_bool == var_327_int; // 0xa9b Eq
	if(var_328_bool == 0) goto Label_2732; // 0xa9c JumpB
	var_329_string = ""; // 0xa9d PushV
	var_329_string = "Anger"; // 0xa9e MovS
	func_2346(var_68_cvector, var_329_string); // 0xa9f NEW_2
	var_330_int = 511716; // 0xaa1 PushI
	SetMessage(var_330_int); // 0xaa2 TObjFunc
	ClearReplies(); // 0xaa4 TObjFunc
	var_331_int = 511717; // 0xaa6 PushI
	var_332_int = 12924; // 0xaa7 PushI
	var_333_int = 12923; // 0xaa8 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0xaa9 TObjFunc
	return 0; // 0xaab Return
	
Label_2732:
	var_334_int = 12924; // 0xaac PushI
	var_335_bool = var_67_bool == var_334_int; // 0xaad Eq
	if(var_335_bool == 0) goto Label_2760; // 0xaae JumpB
	var_336_string = ""; // 0xaaf PushV
	var_336_string = "Neutral"; // 0xab0 MovS
	func_2346(var_68_cvector, var_336_string); // 0xab1 NEW_2
	var_337_int = 511718; // 0xab3 PushI
	SetMessage(var_337_int); // 0xab4 TObjFunc
	ClearReplies(); // 0xab6 TObjFunc
	var_338_bool = 0; var_339_object = Obj(); // 0xab8 PushV
	var_339_object = var_1_object; // 0xab9 MovT
	func_6162(var_338_bool, var_339_object); // 0xaba NEW_2
	if(var_338_bool == 0) goto Label_2754; // 0xabc JumpB
	var_340_int = 515760; // 0xabd PushI
	var_341_int = 16834; // 0xabe PushI
	var_342_int = 16829; // 0xabf PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xac0 TObjFunc
	
Label_2754:
	var_343_int = 511719; // 0xac2 PushI
	var_344_int = -1; // 0xac3 PushI
	var_345_int = 12925; // 0xac4 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0xac5 TObjFunc
	return 0; // 0xac7 Return
	
Label_2760:
	var_346_int = 12935; // 0xac8 PushI
	var_347_bool = var_67_bool == var_346_int; // 0xac9 Eq
	if(var_347_bool == 0) goto Label_2793; // 0xaca JumpB
	var_348_string = ""; // 0xacb PushV
	var_348_string = "Anger"; // 0xacc MovS
	func_2346(var_68_cvector, var_348_string); // 0xacd NEW_2
	var_349_int = 511729; // 0xacf PushI
	SetMessage(var_349_int); // 0xad0 TObjFunc
	ClearReplies(); // 0xad2 TObjFunc
	var_350_int = 511730; // 0xad4 PushI
	var_351_int = -1; // 0xad5 PushI
	var_352_int = 12936; // 0xad6 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0xad7 TObjFunc
	var_353_int = 511731; // 0xad9 PushI
	var_354_int = 12938; // 0xada PushI
	var_355_int = 12937; // 0xadb PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0xadc TObjFunc
	var_356_bool = 0; var_357_object = Obj(); // 0xade PushV
	var_357_object = var_1_object; // 0xadf MovT
	func_6162(var_356_bool, var_357_object); // 0xae0 NEW_2
	if(var_356_bool == 0) goto Label_2792; // 0xae2 JumpB
	var_358_int = 512485; // 0xae3 PushI
	var_359_int = 16834; // 0xae4 PushI
	var_360_int = 13653; // 0xae5 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0xae6 TObjFunc
	
Label_2792:
	return 0; // 0xae8 Return
	
Label_2793:
	var_361_int = 12938; // 0xae9 PushI
	var_362_bool = var_67_bool == var_361_int; // 0xaea Eq
	if(var_362_bool == 0) goto Label_2811; // 0xaeb JumpB
	var_363_string = ""; // 0xaec PushV
	var_363_string = "Neutral"; // 0xaed MovS
	func_2346(var_68_cvector, var_363_string); // 0xaee NEW_2
	var_364_int = 511732; // 0xaf0 PushI
	SetMessage(var_364_int); // 0xaf1 TObjFunc
	ClearReplies(); // 0xaf3 TObjFunc
	var_365_int = 511733; // 0xaf5 PushI
	var_366_int = -1; // 0xaf6 PushI
	var_367_int = 12939; // 0xaf7 PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0xaf8 TObjFunc
	return 0; // 0xafa Return
	
Label_2811:
	var_368_int = 12928; // 0xafb PushI
	var_369_bool = var_67_bool == var_368_int; // 0xafc Eq
	if(var_369_bool == 0) goto Label_2834; // 0xafd JumpB
	var_370_string = ""; // 0xafe PushV
	var_370_string = "Sly"; // 0xaff MovS
	func_2346(var_68_cvector, var_370_string); // 0xb00 NEW_2
	var_371_int = 511722; // 0xb02 PushI
	SetMessage(var_371_int); // 0xb03 TObjFunc
	ClearReplies(); // 0xb05 TObjFunc
	var_372_int = 511723; // 0xb07 PushI
	var_373_int = 12930; // 0xb08 PushI
	var_374_int = 12929; // 0xb09 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0xb0a TObjFunc
	var_375_int = 515761; // 0xb0c PushI
	var_376_int = -1; // 0xb0d PushI
	var_377_int = 16830; // 0xb0e PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0xb0f TObjFunc
	return 0; // 0xb11 Return
	
Label_2834:
	var_378_int = 12930; // 0xb12 PushI
	var_379_bool = var_67_bool == var_378_int; // 0xb13 Eq
	if(var_379_bool == 0) goto Label_2857; // 0xb14 JumpB
	var_380_string = ""; // 0xb15 PushV
	var_380_string = "Neutral"; // 0xb16 MovS
	func_2346(var_68_cvector, var_380_string); // 0xb17 NEW_2
	var_381_int = 511724; // 0xb19 PushI
	SetMessage(var_381_int); // 0xb1a TObjFunc
	ClearReplies(); // 0xb1c TObjFunc
	var_382_int = 511726; // 0xb1e PushI
	var_383_int = 12933; // 0xb1f PushI
	var_384_int = 12932; // 0xb20 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0xb21 TObjFunc
	var_385_int = 511725; // 0xb23 PushI
	var_386_int = -1; // 0xb24 PushI
	var_387_int = 12931; // 0xb25 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0xb26 TObjFunc
	return 0; // 0xb28 Return
	
Label_2857:
	var_388_int = 12933; // 0xb29 PushI
	var_389_bool = var_67_bool == var_388_int; // 0xb2a Eq
	if(var_389_bool == 0) goto Label_2880; // 0xb2b JumpB
	var_390_string = ""; // 0xb2c PushV
	var_390_string = "Neutral"; // 0xb2d MovS
	func_2346(var_68_cvector, var_390_string); // 0xb2e NEW_2
	var_391_int = 511727; // 0xb30 PushI
	SetMessage(var_391_int); // 0xb31 TObjFunc
	ClearReplies(); // 0xb33 TObjFunc
	var_392_int = 515757; // 0xb35 PushI
	var_393_int = 16826; // 0xb36 PushI
	var_394_int = 16825; // 0xb37 PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0xb38 TObjFunc
	var_395_int = 515763; // 0xb3a PushI
	var_396_int = -1; // 0xb3b PushI
	var_397_int = 16832; // 0xb3c PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xb3d TObjFunc
	return 0; // 0xb3f Return
	
Label_2880:
	var_398_int = 16826; // 0xb40 PushI
	var_399_bool = var_67_bool == var_398_int; // 0xb41 Eq
	if(var_399_bool == 0) goto Label_2903; // 0xb42 JumpB
	var_400_string = ""; // 0xb43 PushV
	var_400_string = "Sly"; // 0xb44 MovS
	func_2346(var_68_cvector, var_400_string); // 0xb45 NEW_2
	var_401_int = 515758; // 0xb47 PushI
	SetMessage(var_401_int); // 0xb48 TObjFunc
	ClearReplies(); // 0xb4a TObjFunc
	var_402_int = 515764; // 0xb4c PushI
	var_403_int = -1; // 0xb4d PushI
	var_404_int = 16833; // 0xb4e PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0xb4f TObjFunc
	var_405_int = 515762; // 0xb51 PushI
	var_406_int = -1; // 0xb52 PushI
	var_407_int = 16831; // 0xb53 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0xb54 TObjFunc
	return 0; // 0xb56 Return
	
Label_2903:
	var_3_object = 1; // 0xb57 TMovB
	var_408_bool = 0; // 0xb58 PushV
	func_5745(var_408_bool); // 0xb59 NEW_2
	if(var_408_bool == 0) goto Label_2911; // 0xb5b JumpB
	lshStopAnimation(); // 0xb5c Func
	goto Label_2913; // 0xb5e Jump
	
Label_2913:
	return 0; // 0xb61 Return
	
Label_2911:
	StopAnimation(); // 0xb5f Func
	
Label_2915:
	return 0; // 0xb63 Return
}


task_12_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_int, var_32_int, var_33_object, var_34_object, var_35_object, var_36_string, var_37_bool, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xc06 PushI
	if(var_69_int == 0) goto Label_3126; // 0xc07 JumpB
	func_5569(); // 0xc09 NEW_2
	var_71_int = 15337; // 0xc0b PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xc0c Eq
	if(var_72_bool == 0) goto Label_3091; // 0xc0d JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xc0e PushV
	var_73_object = var_1_object; // 0xc0f MovT
	var_74_object = var_0_bool; // 0xc10 MovT
	func_5931(); // 0xc11 NEW_2
	
Label_3091:
	var_76_int = 15336; // 0xc13 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xc14 Eq
	if(var_77_bool == 0) goto Label_3114; // 0xc15 JumpB
	var_78_string = ""; // 0xc16 PushV
	var_78_string = "Fear"; // 0xc17 MovS
	func_3055(var_68_cvector, var_78_string); // 0xc18 NEW_2
	var_95_int = 514122; // 0xc1a PushI
	SetMessage(var_95_int); // 0xc1b TObjFunc
	ClearReplies(); // 0xc1d TObjFunc
	var_96_int = 514123; // 0xc1f PushI
	var_97_int = -1; // 0xc20 PushI
	var_98_int = 15337; // 0xc21 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xc22 TObjFunc
	var_99_int = 514124; // 0xc24 PushI
	var_100_int = -1; // 0xc25 PushI
	var_101_int = 15338; // 0xc26 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xc27 TObjFunc
	return 0; // 0xc29 Return
	
Label_3114:
	var_3_object = 1; // 0xc2a TMovB
	var_102_bool = 0; // 0xc2b PushV
	func_5745(var_102_bool); // 0xc2c NEW_2
	if(var_102_bool == 0) goto Label_3122; // 0xc2e JumpB
	lshStopAnimation(); // 0xc2f Func
	goto Label_3124; // 0xc31 Jump
	
Label_3124:
	return 0; // 0xc34 Return
	
Label_3122:
	StopAnimation(); // 0xc32 Func
	
Label_3126:
	return 0; // 0xc36 Return
}


task_14_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_int, var_37_int, var_38_object, var_39_object, var_40_object, var_41_string, var_42_bool, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xcd9 PushI
	if(var_69_int == 0) goto Label_3337; // 0xcda JumpB
	func_5569(); // 0xcdc NEW_2
	var_71_int = 15341; // 0xcde PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xcdf Eq
	if(var_72_bool == 0) goto Label_3302; // 0xce0 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xce1 PushV
	var_73_object = var_1_object; // 0xce2 MovT
	var_74_object = var_0_bool; // 0xce3 MovT
	func_5931(); // 0xce4 NEW_2
	
Label_3302:
	var_76_int = 15340; // 0xce6 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xce7 Eq
	if(var_77_bool == 0) goto Label_3325; // 0xce8 JumpB
	var_78_string = ""; // 0xce9 PushV
	var_78_string = "Smile"; // 0xcea MovS
	func_3266(var_68_cvector, var_78_string); // 0xceb NEW_2
	var_95_int = 514126; // 0xced PushI
	SetMessage(var_95_int); // 0xcee TObjFunc
	ClearReplies(); // 0xcf0 TObjFunc
	var_96_int = 514127; // 0xcf2 PushI
	var_97_int = -1; // 0xcf3 PushI
	var_98_int = 15341; // 0xcf4 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xcf5 TObjFunc
	var_99_int = 514128; // 0xcf7 PushI
	var_100_int = -1; // 0xcf8 PushI
	var_101_int = 15342; // 0xcf9 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xcfa TObjFunc
	return 0; // 0xcfc Return
	
Label_3325:
	var_3_object = 1; // 0xcfd TMovB
	var_102_bool = 0; // 0xcfe PushV
	func_5745(var_102_bool); // 0xcff NEW_2
	if(var_102_bool == 0) goto Label_3333; // 0xd01 JumpB
	lshStopAnimation(); // 0xd02 Func
	goto Label_3335; // 0xd04 Jump
	
Label_3335:
	return 0; // 0xd07 Return
	
Label_3333:
	StopAnimation(); // 0xd05 Func
	
Label_3337:
	return 0; // 0xd09 Return
}


task_16_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_int, var_42_int, var_43_object, var_44_object, var_45_object, var_46_string, var_47_bool, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xdac PushI
	if(var_69_int == 0) goto Label_3548; // 0xdad JumpB
	func_5569(); // 0xdaf NEW_2
	var_71_int = 40647; // 0xdb1 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xdb2 Eq
	if(var_72_bool == 0) goto Label_3513; // 0xdb3 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xdb4 PushV
	var_73_object = var_1_object; // 0xdb5 MovT
	var_74_object = var_0_bool; // 0xdb6 MovT
	func_5931(); // 0xdb7 NEW_2
	
Label_3513:
	var_76_int = 40646; // 0xdb9 PushI
	var_77_bool = var_67_bool == var_76_int; // 0xdba Eq
	if(var_77_bool == 0) goto Label_3536; // 0xdbb JumpB
	var_78_string = ""; // 0xdbc PushV
	var_78_string = "Sly"; // 0xdbd MovS
	func_3477(var_68_cvector, var_78_string); // 0xdbe NEW_2
	var_95_int = 538735; // 0xdc0 PushI
	SetMessage(var_95_int); // 0xdc1 TObjFunc
	ClearReplies(); // 0xdc3 TObjFunc
	var_96_int = 538736; // 0xdc5 PushI
	var_97_int = -1; // 0xdc6 PushI
	var_98_int = 40647; // 0xdc7 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xdc8 TObjFunc
	var_99_int = 538754; // 0xdca PushI
	var_100_int = -1; // 0xdcb PushI
	var_101_int = 40666; // 0xdcc PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xdcd TObjFunc
	return 0; // 0xdcf Return
	
Label_3536:
	var_3_object = 1; // 0xdd0 TMovB
	var_102_bool = 0; // 0xdd1 PushV
	func_5745(var_102_bool); // 0xdd2 NEW_2
	if(var_102_bool == 0) goto Label_3544; // 0xdd4 JumpB
	lshStopAnimation(); // 0xdd5 Func
	goto Label_3546; // 0xdd7 Jump
	
Label_3546:
	return 0; // 0xdda Return
	
Label_3544:
	StopAnimation(); // 0xdd8 Func
	
Label_3548:
	return 0; // 0xddc Return
}


task_18_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_int, var_47_int, var_48_object, var_49_object, var_50_object, var_51_string, var_52_bool, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xe7f PushI
	if(var_69_int == 0) goto Label_3759; // 0xe80 JumpB
	func_5569(); // 0xe82 NEW_2
	var_71_int = 15349; // 0xe84 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xe85 Eq
	if(var_72_bool == 0) goto Label_3724; // 0xe86 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xe87 PushV
	var_73_object = var_1_object; // 0xe88 MovT
	var_74_object = var_0_bool; // 0xe89 MovT
	func_5931(); // 0xe8a NEW_2
	
Label_3724:
	var_76_int = 15348; // 0xe8c PushI
	var_77_bool = var_67_bool == var_76_int; // 0xe8d Eq
	if(var_77_bool == 0) goto Label_3747; // 0xe8e JumpB
	var_78_string = ""; // 0xe8f PushV
	var_78_string = "Anger"; // 0xe90 MovS
	func_3688(var_68_cvector, var_78_string); // 0xe91 NEW_2
	var_95_int = 514134; // 0xe93 PushI
	SetMessage(var_95_int); // 0xe94 TObjFunc
	ClearReplies(); // 0xe96 TObjFunc
	var_96_int = 514135; // 0xe98 PushI
	var_97_int = -1; // 0xe99 PushI
	var_98_int = 15349; // 0xe9a PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xe9b TObjFunc
	var_99_int = 514136; // 0xe9d PushI
	var_100_int = -1; // 0xe9e PushI
	var_101_int = 15350; // 0xe9f PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xea0 TObjFunc
	return 0; // 0xea2 Return
	
Label_3747:
	var_3_object = 1; // 0xea3 TMovB
	var_102_bool = 0; // 0xea4 PushV
	func_5745(var_102_bool); // 0xea5 NEW_2
	if(var_102_bool == 0) goto Label_3755; // 0xea7 JumpB
	lshStopAnimation(); // 0xea8 Func
	goto Label_3757; // 0xeaa Jump
	
Label_3757:
	return 0; // 0xead Return
	
Label_3755:
	StopAnimation(); // 0xeab Func
	
Label_3759:
	return 0; // 0xeaf Return
}


task_20_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_int, var_52_int, var_53_object, var_54_object, var_55_object, var_56_string, var_57_bool, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0xf52 PushI
	if(var_69_int == 0) goto Label_3970; // 0xf53 JumpB
	func_5569(); // 0xf55 NEW_2
	var_71_int = 15353; // 0xf57 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0xf58 Eq
	if(var_72_bool == 0) goto Label_3935; // 0xf59 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0xf5a PushV
	var_73_object = var_1_object; // 0xf5b MovT
	var_74_object = var_0_bool; // 0xf5c MovT
	func_5931(); // 0xf5d NEW_2
	
Label_3935:
	var_76_int = 44045; // 0xf5f PushI
	var_77_bool = var_67_bool == var_76_int; // 0xf60 Eq
	if(var_77_bool == 0) goto Label_3958; // 0xf61 JumpB
	var_78_string = ""; // 0xf62 PushV
	var_78_string = "Sly"; // 0xf63 MovS
	func_3899(var_68_cvector, var_78_string); // 0xf64 NEW_2
	var_95_int = 541830; // 0xf66 PushI
	SetMessage(var_95_int); // 0xf67 TObjFunc
	ClearReplies(); // 0xf69 TObjFunc
	var_96_int = 514139; // 0xf6b PushI
	var_97_int = -1; // 0xf6c PushI
	var_98_int = 15353; // 0xf6d PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xf6e TObjFunc
	var_99_int = 541833; // 0xf70 PushI
	var_100_int = -1; // 0xf71 PushI
	var_101_int = 44048; // 0xf72 PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0xf73 TObjFunc
	return 0; // 0xf75 Return
	
Label_3958:
	var_3_object = 1; // 0xf76 TMovB
	var_102_bool = 0; // 0xf77 PushV
	func_5745(var_102_bool); // 0xf78 NEW_2
	if(var_102_bool == 0) goto Label_3966; // 0xf7a JumpB
	lshStopAnimation(); // 0xf7b Func
	goto Label_3968; // 0xf7d Jump
	
Label_3968:
	return 0; // 0xf80 Return
	
Label_3966:
	StopAnimation(); // 0xf7e Func
	
Label_3970:
	return 0; // 0xf82 Return
}


task_22_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_int, var_57_int, var_58_object, var_59_object, var_60_object, var_61_string, var_62_bool, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x102a PushI
	if(var_69_int == 0) goto Label_4191; // 0x102b JumpB
	func_5569(); // 0x102d NEW_2
	var_71_int = 15401; // 0x102f PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x1030 Eq
	if(var_72_bool == 0) goto Label_4151; // 0x1031 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x1032 PushV
	var_73_object = var_1_object; // 0x1033 MovT
	var_74_object = var_0_bool; // 0x1034 MovT
	func_5931(); // 0x1035 NEW_2
	
Label_4151:
	var_76_int = 15400; // 0x1037 PushI
	var_77_bool = var_67_bool == var_76_int; // 0x1038 Eq
	if(var_77_bool == 0) goto Label_4179; // 0x1039 JumpB
	var_78_string = ""; // 0x103a PushV
	var_78_string = "Fear"; // 0x103b MovS
	func_4115(var_68_cvector, var_78_string); // 0x103c NEW_2
	var_95_int = 514186; // 0x103e PushI
	SetMessage(var_95_int); // 0x103f TObjFunc
	ClearReplies(); // 0x1041 TObjFunc
	var_96_int = 514187; // 0x1043 PushI
	var_97_int = -1; // 0x1044 PushI
	var_98_int = 15401; // 0x1045 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x1046 TObjFunc
	var_99_int = 514188; // 0x1048 PushI
	var_100_int = -1; // 0x1049 PushI
	var_101_int = 15402; // 0x104a PushI
	AddReply(var_99_int, var_100_int, var_101_int); // 0x104b TObjFunc
	var_102_int = 539631; // 0x104d PushI
	var_103_int = -1; // 0x104e PushI
	var_104_int = 41577; // 0x104f PushI
	AddReply(var_102_int, var_103_int, var_104_int); // 0x1050 TObjFunc
	return 0; // 0x1052 Return
	
Label_4179:
	var_3_object = 1; // 0x1053 TMovB
	var_105_bool = 0; // 0x1054 PushV
	func_5745(var_105_bool); // 0x1055 NEW_2
	if(var_105_bool == 0) goto Label_4187; // 0x1057 JumpB
	lshStopAnimation(); // 0x1058 Func
	goto Label_4189; // 0x105a Jump
	
Label_4189:
	return 0; // 0x105d Return
	
Label_4187:
	StopAnimation(); // 0x105b Func
	
Label_4191:
	return 0; // 0x105f Return
}


task_24_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_int, var_62_int, var_63_object, var_64_object, var_65_object, var_66_string, var_67_bool, var_68_cvector)
{
	var_69_int = 1; // 0x111f PushI
	if(var_69_int == 0) goto Label_4676; // 0x1120 JumpB
	func_5569(); // 0x1122 NEW_2
	var_71_int = 35389; // 0x1124 PushI
	var_72_bool = var_68_cvector == var_71_int; // 0x1125 Eq
	if(var_72_bool == 0) goto Label_4396; // 0x1126 JumpB
	var_73_object = Obj(); var_74_object = Obj(); // 0x1127 PushV
	var_73_object = var_1_object; // 0x1128 MovT
	var_74_object = var_0_bool; // 0x1129 MovT
	func_5790(); // 0x112a NEW_2
	
Label_4396:
	var_77_int = 35396; // 0x112c PushI
	var_78_bool = var_68_cvector == var_77_int; // 0x112d Eq
	if(var_78_bool == 0) goto Label_4404; // 0x112e JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0x112f PushV
	var_79_object = var_1_object; // 0x1130 MovT
	var_80_object = var_0_bool; // 0x1131 MovT
	func_5931(); // 0x1132 NEW_2
	
Label_4404:
	var_82_int = 35397; // 0x1134 PushI
	var_83_bool = var_68_cvector == var_82_int; // 0x1135 Eq
	if(var_83_bool == 0) goto Label_4412; // 0x1136 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x1137 PushV
	var_84_object = var_1_object; // 0x1138 MovT
	var_85_object = var_0_bool; // 0x1139 MovT
	func_5931(); // 0x113a NEW_2
	
Label_4412:
	var_86_int = 35528; // 0x113c PushI
	var_87_bool = var_68_cvector == var_86_int; // 0x113d Eq
	if(var_87_bool == 0) goto Label_4420; // 0x113e JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x113f PushV
	var_88_object = var_1_object; // 0x1140 MovT
	var_89_object = var_0_bool; // 0x1141 MovT
	func_5796(); // 0x1142 NEW_2
	
Label_4420:
	var_92_int = 35393; // 0x1144 PushI
	var_93_bool = var_68_cvector == var_92_int; // 0x1145 Eq
	if(var_93_bool == 0) goto Label_4428; // 0x1146 JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x1147 PushV
	var_94_object = var_1_object; // 0x1148 MovT
	var_95_object = var_0_bool; // 0x1149 MovT
	func_5931(); // 0x114a NEW_2
	
Label_4428:
	var_96_int = 35388; // 0x114c PushI
	var_97_bool = var_67_bool == var_96_int; // 0x114d Eq
	if(var_97_bool == 0) goto Label_4480; // 0x114e JumpB
	var_98_string = ""; // 0x114f PushV
	var_98_string = "Neutral"; // 0x1150 MovS
	func_4360(var_68_cvector, var_98_string); // 0x1151 NEW_2
	var_115_int = 533838; // 0x1153 PushI
	SetMessage(var_115_int); // 0x1154 TObjFunc
	ClearReplies(); // 0x1156 TObjFunc
	var_116_bool = 0; var_117_object = Obj(); // 0x1158 PushV
	var_117_object = var_1_object; // 0x1159 MovT
	func_5970(var_117_object); // 0x115a NEW_2
	if(var_116_bool == 0) goto Label_4450; // 0x115c JumpB
	var_124_int = 533839; // 0x115d PushI
	var_125_int = 35390; // 0x115e PushI
	var_126_int = 35389; // 0x115f PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x1160 TObjFunc
	
Label_4450:
	var_127_bool = 0; // 0x1162 PushV
	var_127_bool = 0; // 0x1163 MovB
	var_128_bool = 0; var_129_object = Obj(); // 0x1164 PushV
	var_129_object = var_1_object; // 0x1165 MovT
	func_6220(var_129_object); // 0x1166 NEW_2
	if(var_128_bool == 0) goto Label_4463; // 0x1168 JumpB
	var_144_bool = 0; var_145_object = Obj(); // 0x1169 PushV
	var_145_object = var_1_object; // 0x116a MovT
	func_5982(var_145_object); // 0x116b NEW_2
	if(var_144_bool == 0) goto Label_4463; // 0x116d JumpB
	var_127_bool = 1; // 0x116e MovB
	
Label_4463:
	if(var_127_bool == 0) goto Label_4469; // 0x116f JumpB
	var_150_int = 533960; // 0x1170 PushI
	var_151_int = 35529; // 0x1171 PushI
	var_152_int = 35528; // 0x1172 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x1173 TObjFunc
	
Label_4469:
	var_153_int = 533843; // 0x1175 PushI
	var_154_int = -1; // 0x1176 PushI
	var_155_int = 35393; // 0x1177 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x1178 TObjFunc
	var_156_int = 533844; // 0x117a PushI
	var_157_int = -1; // 0x117b PushI
	var_158_int = 35394; // 0x117c PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x117d TObjFunc
	return 0; // 0x117f Return
	
Label_4480:
	var_159_int = 35529; // 0x1180 PushI
	var_160_bool = var_67_bool == var_159_int; // 0x1181 Eq
	if(var_160_bool == 0) goto Label_4503; // 0x1182 JumpB
	var_161_string = ""; // 0x1183 PushV
	var_161_string = "Sly"; // 0x1184 MovS
	func_4360(var_68_cvector, var_161_string); // 0x1185 NEW_2
	var_162_int = 533961; // 0x1187 PushI
	SetMessage(var_162_int); // 0x1188 TObjFunc
	ClearReplies(); // 0x118a TObjFunc
	var_163_int = 533962; // 0x118c PushI
	var_164_int = 35531; // 0x118d PushI
	var_165_int = 35530; // 0x118e PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x118f TObjFunc
	var_166_int = 533972; // 0x1191 PushI
	var_167_int = 35533; // 0x1192 PushI
	var_168_int = 35542; // 0x1193 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x1194 TObjFunc
	return 0; // 0x1196 Return
	
Label_4503:
	var_169_int = 35531; // 0x1197 PushI
	var_170_bool = var_67_bool == var_169_int; // 0x1198 Eq
	if(var_170_bool == 0) goto Label_4526; // 0x1199 JumpB
	var_171_string = ""; // 0x119a PushV
	var_171_string = "Smile"; // 0x119b MovS
	func_4360(var_68_cvector, var_171_string); // 0x119c NEW_2
	var_172_int = 533963; // 0x119e PushI
	SetMessage(var_172_int); // 0x119f TObjFunc
	ClearReplies(); // 0x11a1 TObjFunc
	var_173_int = 533964; // 0x11a3 PushI
	var_174_int = 35533; // 0x11a4 PushI
	var_175_int = 35532; // 0x11a5 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x11a6 TObjFunc
	var_176_int = 533971; // 0x11a8 PushI
	var_177_int = 35533; // 0x11a9 PushI
	var_178_int = 35540; // 0x11aa PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x11ab TObjFunc
	return 0; // 0x11ad Return
	
Label_4526:
	var_179_int = 35533; // 0x11ae PushI
	var_180_bool = var_67_bool == var_179_int; // 0x11af Eq
	if(var_180_bool == 0) goto Label_4554; // 0x11b0 JumpB
	var_181_string = ""; // 0x11b1 PushV
	var_181_string = "Smile"; // 0x11b2 MovS
	func_4360(var_68_cvector, var_181_string); // 0x11b3 NEW_2
	var_182_int = 533965; // 0x11b5 PushI
	SetMessage(var_182_int); // 0x11b6 TObjFunc
	ClearReplies(); // 0x11b8 TObjFunc
	var_183_int = 533966; // 0x11ba PushI
	var_184_int = 35535; // 0x11bb PushI
	var_185_int = 35534; // 0x11bc PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x11bd TObjFunc
	var_186_int = 533970; // 0x11bf PushI
	var_187_int = 35535; // 0x11c0 PushI
	var_188_int = 35538; // 0x11c1 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x11c2 TObjFunc
	var_189_int = 533973; // 0x11c4 PushI
	var_190_int = 35545; // 0x11c5 PushI
	var_191_int = 35544; // 0x11c6 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x11c7 TObjFunc
	return 0; // 0x11c9 Return
	
Label_4554:
	var_192_int = 35545; // 0x11ca PushI
	var_193_bool = var_67_bool == var_192_int; // 0x11cb Eq
	if(var_193_bool == 0) goto Label_4572; // 0x11cc JumpB
	var_194_string = ""; // 0x11cd PushV
	var_194_string = "Sly"; // 0x11ce MovS
	func_4360(var_68_cvector, var_194_string); // 0x11cf NEW_2
	var_195_int = 533974; // 0x11d1 PushI
	SetMessage(var_195_int); // 0x11d2 TObjFunc
	ClearReplies(); // 0x11d4 TObjFunc
	var_196_int = 533975; // 0x11d6 PushI
	var_197_int = 35547; // 0x11d7 PushI
	var_198_int = 35546; // 0x11d8 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x11d9 TObjFunc
	return 0; // 0x11db Return
	
Label_4572:
	var_199_int = 35547; // 0x11dc PushI
	var_200_bool = var_67_bool == var_199_int; // 0x11dd Eq
	if(var_200_bool == 0) goto Label_4595; // 0x11de JumpB
	var_201_string = ""; // 0x11df PushV
	var_201_string = "Neutral"; // 0x11e0 MovS
	func_4360(var_68_cvector, var_201_string); // 0x11e1 NEW_2
	var_202_int = 533976; // 0x11e3 PushI
	SetMessage(var_202_int); // 0x11e4 TObjFunc
	ClearReplies(); // 0x11e6 TObjFunc
	var_203_int = 533977; // 0x11e8 PushI
	var_204_int = -1; // 0x11e9 PushI
	var_205_int = 35548; // 0x11ea PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x11eb TObjFunc
	var_206_int = 533978; // 0x11ed PushI
	var_207_int = -1; // 0x11ee PushI
	var_208_int = 35549; // 0x11ef PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x11f0 TObjFunc
	return 0; // 0x11f2 Return
	
Label_4595:
	var_209_int = 35535; // 0x11f3 PushI
	var_210_bool = var_67_bool == var_209_int; // 0x11f4 Eq
	if(var_210_bool == 0) goto Label_4618; // 0x11f5 JumpB
	var_211_string = ""; // 0x11f6 PushV
	var_211_string = "Sly"; // 0x11f7 MovS
	func_4360(var_68_cvector, var_211_string); // 0x11f8 NEW_2
	var_212_int = 533967; // 0x11fa PushI
	SetMessage(var_212_int); // 0x11fb TObjFunc
	ClearReplies(); // 0x11fd TObjFunc
	var_213_int = 533968; // 0x11ff PushI
	var_214_int = -1; // 0x1200 PushI
	var_215_int = 35536; // 0x1201 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1202 TObjFunc
	var_216_int = 533969; // 0x1204 PushI
	var_217_int = -1; // 0x1205 PushI
	var_218_int = 35537; // 0x1206 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1207 TObjFunc
	return 0; // 0x1209 Return
	
Label_4618:
	var_219_int = 35390; // 0x120a PushI
	var_220_bool = var_67_bool == var_219_int; // 0x120b Eq
	if(var_220_bool == 0) goto Label_4641; // 0x120c JumpB
	var_221_string = ""; // 0x120d PushV
	var_221_string = "Fear"; // 0x120e MovS
	func_4360(var_68_cvector, var_221_string); // 0x120f NEW_2
	var_222_int = 533840; // 0x1211 PushI
	SetMessage(var_222_int); // 0x1212 TObjFunc
	ClearReplies(); // 0x1214 TObjFunc
	var_223_int = 533842; // 0x1216 PushI
	var_224_int = 35395; // 0x1217 PushI
	var_225_int = 35392; // 0x1218 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1219 TObjFunc
	var_226_int = 533841; // 0x121b PushI
	var_227_int = -1; // 0x121c PushI
	var_228_int = 35391; // 0x121d PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x121e TObjFunc
	return 0; // 0x1220 Return
	
Label_4641:
	var_229_int = 35395; // 0x1221 PushI
	var_230_bool = var_67_bool == var_229_int; // 0x1222 Eq
	if(var_230_bool == 0) goto Label_4664; // 0x1223 JumpB
	var_231_string = ""; // 0x1224 PushV
	var_231_string = "Neutral"; // 0x1225 MovS
	func_4360(var_68_cvector, var_231_string); // 0x1226 NEW_2
	var_232_int = 533845; // 0x1228 PushI
	SetMessage(var_232_int); // 0x1229 TObjFunc
	ClearReplies(); // 0x122b TObjFunc
	var_233_int = 533846; // 0x122d PushI
	var_234_int = -1; // 0x122e PushI
	var_235_int = 35396; // 0x122f PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1230 TObjFunc
	var_236_int = 533847; // 0x1232 PushI
	var_237_int = -1; // 0x1233 PushI
	var_238_int = 35397; // 0x1234 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x1235 TObjFunc
	return 0; // 0x1237 Return
	
Label_4664:
	var_3_object = 1; // 0x1238 TMovB
	var_239_bool = 0; // 0x1239 PushV
	func_5745(var_239_bool); // 0x123a NEW_2
	if(var_239_bool == 0) goto Label_4672; // 0x123c JumpB
	lshStopAnimation(); // 0x123d Func
	goto Label_4674; // 0x123f Jump
	
Label_4674:
	return 0; // 0x1242 Return
	
Label_4672:
	StopAnimation(); // 0x1240 Func
	
Label_4676:
	return 0; // 0x1244 Return
}


task_26_event_11(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_int, var_67_int, var_68_cvector)
{
	var_69_int = 1; // 0x12ec PushI
	if(var_69_int == 0) goto Label_4935; // 0x12ed JumpB
	func_5569(); // 0x12ef NEW_2
	var_71_int = 36971; // 0x12f1 PushI
	var_72_bool = var_67_int == var_71_int; // 0x12f2 Eq
	if(var_72_bool == 0) goto Label_4877; // 0x12f3 JumpB
	var_73_string = ""; // 0x12f4 PushV
	var_73_string = "Neutral"; // 0x12f5 MovS
	func_4821(var_68_cvector, var_73_string); // 0x12f6 NEW_2
	var_90_int = 535294; // 0x12f8 PushI
	SetMessage(var_90_int); // 0x12f9 TObjFunc
	ClearReplies(); // 0x12fb TObjFunc
	var_91_int = 535295; // 0x12fd PushI
	var_92_int = 36973; // 0x12fe PushI
	var_93_int = 36972; // 0x12ff PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x1300 TObjFunc
	var_94_int = 535302; // 0x1302 PushI
	var_95_int = -1; // 0x1303 PushI
	var_96_int = 36980; // 0x1304 PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x1305 TObjFunc
	var_97_int = 535303; // 0x1307 PushI
	var_98_int = -1; // 0x1308 PushI
	var_99_int = 36981; // 0x1309 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x130a TObjFunc
	return 0; // 0x130c Return
	
Label_4877:
	var_100_int = 36973; // 0x130d PushI
	var_101_bool = var_67_int == var_100_int; // 0x130e Eq
	if(var_101_bool == 0) goto Label_4900; // 0x130f JumpB
	var_102_string = ""; // 0x1310 PushV
	var_102_string = "Neutral"; // 0x1311 MovS
	func_4821(var_68_cvector, var_102_string); // 0x1312 NEW_2
	var_103_int = 535296; // 0x1314 PushI
	SetMessage(var_103_int); // 0x1315 TObjFunc
	ClearReplies(); // 0x1317 TObjFunc
	var_104_int = 535297; // 0x1319 PushI
	var_105_int = 36975; // 0x131a PushI
	var_106_int = 36974; // 0x131b PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x131c TObjFunc
	var_107_int = 535301; // 0x131e PushI
	var_108_int = 36975; // 0x131f PushI
	var_109_int = 36978; // 0x1320 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x1321 TObjFunc
	return 0; // 0x1323 Return
	
Label_4900:
	var_110_int = 36975; // 0x1324 PushI
	var_111_bool = var_67_int == var_110_int; // 0x1325 Eq
	if(var_111_bool == 0) goto Label_4923; // 0x1326 JumpB
	var_112_string = ""; // 0x1327 PushV
	var_112_string = "Neutral"; // 0x1328 MovS
	func_4821(var_68_cvector, var_112_string); // 0x1329 NEW_2
	var_113_int = 535298; // 0x132b PushI
	SetMessage(var_113_int); // 0x132c TObjFunc
	ClearReplies(); // 0x132e TObjFunc
	var_114_int = 535299; // 0x1330 PushI
	var_115_int = -1; // 0x1331 PushI
	var_116_int = 36976; // 0x1332 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x1333 TObjFunc
	var_117_int = 535300; // 0x1335 PushI
	var_118_int = -1; // 0x1336 PushI
	var_119_int = 36977; // 0x1337 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x1338 TObjFunc
	return 0; // 0x133a Return
	
Label_4923:
	var_3_object = 1; // 0x133b TMovB
	var_120_bool = 0; // 0x133c PushV
	func_5745(var_120_bool); // 0x133d NEW_2
	if(var_120_bool == 0) goto Label_4931; // 0x133f JumpB
	lshStopAnimation(); // 0x1340 Func
	goto Label_4933; // 0x1342 Jump
	
Label_4933:
	return 0; // 0x1345 Return
	
Label_4931:
	StopAnimation(); // 0x1343 Func
	
Label_4935:
	return 0; // 0x1347 Return
}


task_27_event_7(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_int)
{
	var_68_int = 10; // 0x1398 PushI
	var_69_bool = var_67_int == var_68_int; // 0x1399 Eq
	if(var_69_bool == 0) goto Label_5052; // 0x139a JumpB
	func_5011(); // 0x139c NEW_2
	var_71_bool = 0; // 0x139e PushV
	var_71_bool = 0; // 0x139f MovB
	var_72_bool = 0; // 0x13a0 PushV
	func_5232(var_72_bool); // 0x13a1 NEW_2
	if(var_72_bool == 0) goto Label_5033; // 0x13a3 JumpB
	var_75_bool = 0; // 0x13a4 PushV
	func_4980(var_75_bool); // 0x13a5 NEW_2
	if(var_75_bool == 0) goto Label_5033; // 0x13a7 JumpB
	var_71_bool = 1; // 0x13a8 MovB
	
Label_5033:
	if(var_71_bool == 0) goto Label_5046; // 0x13a9 JumpB
	var_92_bool = 0; // 0x13aa PushV
	func_4960(var_92_bool); // 0x13ab NEW_2
	if(var_92_bool == 0) goto Label_5045; // 0x13ad JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x13ae PushV
	var_113_object = Obj(); // 0x13af PushV
	func_5604(var_113_object); // 0x13b0 NEW_2
	var_112_object = var_113_object; // 0x13b1 Mov
	func_5382(var_112_object); // 0x13b3 NEW_2
	
Label_5045:
	goto Label_5052; // 0x13b5 Jump
	
Label_5052:
	return 0; // 0x13bc Return
	
Label_5046:
	func_4975(var_67_int); // 0x13b7 NEW_2
	func_5002(); // 0x13ba NEW_2
}


task_27_event_6(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	func_5193(); // 0x13be NEW_2
	func_5011(); // 0x13c1 NEW_2
	lshStopSpeech(); // 0x13c3 Func
	lshStopAnimation(); // 0x13c5 Func
	StopAsync(); // 0x13c7 Func
	Hold(); // 0x13c9 Func
	return 0; // 0x13cb Return
}


task_27_event_5(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	StopGroup0(); // 0x13cc Func
	func_5011(); // 0x13cf NEW_2
	var_68_string = ""; // 0x13d1 PushV
	var_68_string = "Neutral"; // 0x13d2 MovS
	func_5523(var_68_string); // 0x13d3 NEW_2
	func_5002(); // 0x13d6 NEW_2
	return 0; // 0x13d8 Return
}


task_27_event_45(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_bool)
{
	var_68_bool = var_67_bool; // 0x13da Push
	if(var_68_bool == 0) goto Label_5088; // 0x13db JumpB
	func_5002(); // 0x13dd NEW_2
	goto Label_5092; // 0x13df Jump
	
Label_5092:
	return 0; // 0x13e4 Return
	
Label_5088:
	var_74_string = ""; // 0x13e0 PushV
	var_74_string = "Neutral"; // 0x13e1 MovS
	func_5523(var_74_string); // 0x13e2 NEW_2
}


task_27_event_0(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object)
{
	var_68_bool = 0; var_69_bool = 0; // 0x13e5 PushV
	IsOverrideActive(var_69_bool); // 0x13e6 Func
	var_70_bool = var_69_bool == 0; // 0x13e8 Not
	if(var_70_bool == 0) goto Label_5121; // 0x13e9 JumpB
	EventDisable(0); // 0x13ea EventDisable
	func_5193(); // 0x13ec NEW_2
	var_71_bool = 0; var_72_object = Obj(); // 0x13ee PushV
	var_72_object = var_67_object; // 0x13ef Mov
	func_5223(var_72_object); // 0x13f0 NEW_2
	EventEnable(0); // 0x13f2 EventEnable
	var_85_object = Obj(); // 0x13f3 PushV
	var_85_object = var_67_object; // 0x13f4 Mov
	func_6578(var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector, var_67_object, var_68_bool, var_69_bool, var_85_object); // 0x13f5 NEW_2
	var_1439_string = ""; // 0x13f7 PushV
	var_1439_string = "Neutral"; // 0x13f8 MovS
	func_5523(var_1439_string); // 0x13f9 NEW_2
	func_5011(); // 0x13fc NEW_2
	func_5002(); // 0x13ff NEW_2
	
Label_5121:
	return 2; // 0x1401 Return
}


main(var_0_bool, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool, var_21_object, var_22_object, var_23_object, var_24_string, var_25_bool, var_26_object, var_27_object, var_28_object, var_29_string, var_30_bool, var_31_object, var_32_object, var_33_object, var_34_string, var_35_bool, var_36_object, var_37_object, var_38_object, var_39_string, var_40_bool, var_41_object, var_42_object, var_43_object, var_44_string, var_45_bool, var_46_object, var_47_object, var_48_object, var_49_string, var_50_bool, var_51_object, var_52_object, var_53_object, var_54_string, var_55_bool, var_56_object, var_57_object, var_58_object, var_59_string, var_60_bool, var_61_object, var_62_object, var_63_object, var_64_string, var_65_bool, var_66_cvector)
{
	var_67_bool = GlobalVars[1]; // 0x1348 PushGE
	var_67_bool = 0; // 0x1349 MovB
	GlobalVars[1] = var_67_bool; // 0x134a PopGE
	var_68_int = GlobalVars[2]; // 0x134b PushGE
	var_68_int = -1; // 0x134c MovI
	GlobalVars[2] = var_68_int; // 0x134d PopGE
	func_4946(var_66_cvector); // 0x134f NEW_2
	return 0; // 0x1351 Return
}


func_0(var_0_bool)
{
	DoTrade(); // 0x1 Func
	var_0_bool = 0; // 0x3 TMovB
	
Label_4:
	var_577_string = ""; // 0x4 PushV
	var_577_string = "Neutral"; // 0x5 MovS
	func_5523(var_577_string); // 0x6 NEW_2
	lshWaitForAnimEnd(); // 0x8 Func
	var_578_bool = var_0_bool; // 0xa PushT
	if(var_578_bool == 0) goto Label_13; // 0xb JumpB
	return 0; // 0xc Return
	
Label_13:
	goto Label_4; // 0xd Jump
}


func_5122()
{
	var_73_int = 0; var_74_int = 0; var_75_bool = 0; var_76_int = 0; var_77_int = 0; var_78_bool = 0; var_79_int = 0; var_80_int = 0; var_81_bool = 0; var_82_int = 0; var_83_int = 0; var_84_bool = 0; // 0x1402 PushV
	WaitForAnimEnd(); // 0x1403 Func
	var_85_bool = 0; // 0x1405 PushV
	func_5232(var_85_bool); // 0x1406 NEW_2
	var_86_bool = var_85_bool == 0; // 0x1408 Not
	if(var_86_bool == 0) goto Label_5131; // 0x1409 JumpB
	return 12; // 0x140a Return
	
Label_5131:
	var_87_int = 0; // 0x140b PushV
	func_5720(var_87_int); // 0x140c NEW_2
	var_79_int = var_87_int; // 0x140d Mov
	var_80_int = 0; // 0x140f MovI
	
Label_5136:
	var_100_bool = 0; // 0x1410 PushV
	var_100_bool = 0; // 0x1411 MovB
	var_101_int = 5; // 0x1412 PushI
	var_102_bool = var_80_int < var_101_int; // 0x1413 LT
	if(var_102_bool == 0) goto Label_5146; // 0x1414 JumpB
	var_103_bool = 0; // 0x1415 PushV
	func_5232(var_103_bool); // 0x1416 NEW_2
	if(var_103_bool == 0) goto Label_5146; // 0x1418 JumpB
	var_100_bool = 1; // 0x1419 MovB
	
Label_5146:
	if(var_100_bool == 0) goto Label_5188; // 0x141a JumpB
	var_104_bool = var_79_int == 0; // 0x141b Not
	if(var_104_bool == 0) goto Label_5156; // 0x141c JumpB
	var_105_int = 3; // 0x141d PushI
	Sleep(var_105_int, var_81_bool); // 0x141e Func
	var_106_bool = var_81_bool == 0; // 0x1420 Not
	if(var_106_bool == 0) goto Label_5155; // 0x1421 JumpB
	goto Label_5188; // 0x1422 Jump
	
Label_5188:
	ResetAAS(); // 0x1444 Func
	return 12; // 0x1446 Return
	
Label_5155:
	goto Label_5177; // 0x1423 Jump
	
Label_5177:
	var_107_bool = 0; // 0x1439 PushV
	func_5191(var_107_bool); // 0x143a NEW_2
	var_108_bool = var_107_bool == 0; // 0x143c Not
	if(var_108_bool == 0) goto Label_5183; // 0x143d JumpB
	goto Label_5188; // 0x143e Jump
	
Label_5183:
	ResetAAS(); // 0x143f Func
	var_109_int = 1; // 0x1441 PushI
	var_80_int = var_80_int + var_109_int; // 0x1442 Add2
	goto Label_5136; // 0x1443 Jump
	
Label_5156:
	irand(var_82_int, var_79_int); // 0x1424 Func
	var_110_int = 5; // 0x1426 PushI
	irand(var_83_int, var_110_int); // 0x1427 Func
	var_111_int = 0; // 0x1429 PushI
	var_112_bool = var_83_int != var_111_int; // 0x142a Neq
	if(var_112_bool == 0) goto Label_5165; // 0x142b JumpB
	var_82_int = 0; // 0x142c MovI
	
Label_5165:
	var_113_string = "all"; // 0x142d PushS
	var_114_string = ""; var_115_int = 0; // 0x142e PushV
	var_115_int = var_82_int; // 0x142f Mov
	func_5713(var_114_string, var_115_int); // 0x1430 NEW_2
	PlayAnimation(var_113_string, var_114_string); // 0x1432 Func
	WaitForAnimEnd(var_84_bool); // 0x1434 Func
	var_116_bool = var_84_bool == 0; // 0x1436 Not
	if(var_116_bool == 0) goto Label_5177; // 0x1437 JumpB
	goto Label_5188; // 0x1438 Jump
}


func_6150(var_963_bool)
{
	var_965_int = 0; var_966_string = ""; // 0x1807 PushV
	var_966_string = "ood5Grif1"; // 0x1808 MovS
	func_5625(var_965_int, var_966_string); // 0x1809 NEW_2
	var_967_int = 0; // 0x180b PushI
	var_968_bool = var_965_int == var_967_int; // 0x180c Eq
	if(var_968_bool == 0) goto Label_6160; // 0x180d JumpB
	var_963_bool = 1; // 0x180e MovB
	return 0; // 0x180f Return
	
Label_6160:
	var_963_bool = 0; // 0x1810 MovB
	return 0; // 0x1811 Return
}


func_520(var_2_object, var_615_string)
{
	var_616_bool = 0; // 0x209 PushV
	func_5745(var_616_bool); // 0x20a NEW_2
	var_617_bool = var_616_bool == 0; // 0x20c Not
	if(var_617_bool == 0) goto Label_527; // 0x20d JumpB
	return 0; // 0x20e Return
	
Label_527:
	var_618_bool = var_615_string == var_2_object; // 0x20f Eq
	if(var_618_bool == 0) goto Label_530; // 0x210 JumpB
	return 0; // 0x211 Return
	
Label_530:
	var_619_string = ""; var_620_bool = 0; // 0x212 PushV
	var_619_string = var_615_string; // 0x213 Mov
	var_621_string = ""; // 0x214 PushS
	var_622_bool = var_615_string == var_621_string; // 0x215 Eq
	if(var_622_bool == 0) goto Label_537; // 0x216 JumpB
	var_620_bool = 0; // 0x217 MovB
	goto Label_538; // 0x218 Jump
	
Label_538:
	func_5539(var_619_string, var_620_bool); // 0x21a NEW_2
	var_2_object = var_615_string; // 0x21c TMov
	return 0; // 0x21d Return
	
Label_537:
	var_620_bool = 1; // 0x219 MovB
}


func_5642(var_143_object, var_144_int)
{
	var_145_int = 0; var_146_int = 0; // 0x160a PushV
	var_147_object = Obj(); var_148_string = ""; var_149_int = 0; // 0x160b PushV
	var_147_object = var_143_object; // 0x160c Mov
	var_148_string = "money"; // 0x160d MovS
	var_149_int = var_144_int; // 0x160e Mov
	func_5206(var_148_string, var_149_int); // 0x160f NEW_2
	var_153_int = 0; // 0x1611 PushI
	var_154_bool = var_144_int > var_153_int; // 0x1612 GT
	if(var_154_bool == 0) goto Label_5660; // 0x1613 JumpB
	var_155_string = "Money"; // 0x1614 PushS
	GetInvItemByName(var_146_int, var_155_string); // 0x1615 Func
	var_156_int = 0; var_157_int = 0; // 0x1617 PushV
	var_156_int = var_146_int; // 0x1618 Mov
	var_157_int = var_144_int; // 0x1619 Mov
	func_5630(var_156_int, var_157_int); // 0x161a NEW_2
	
Label_5660:
	return 2; // 0x161c Return
}


func_1039(var_0_bool, var_1_object, var_2_object, var_3_object, var_784_object, var_785_object)
{
	var_0_bool = var_785_object; // 0x410 TMov
	var_1_object = var_784_object; // 0x411 TMov
	var_3_object = 0; // 0x412 TMovB
	var_790_int = 1; // 0x413 PushI
	if(var_790_int == 0) goto Label_1149; // 0x414 JumpB
	var_791_bool = 0; // 0x415 PushV
	var_791_bool = 0; // 0x416 MovB
	var_792_bool = 0; var_793_object = Obj(); // 0x417 PushV
	var_793_object = var_1_object; // 0x418 MovT
	func_6090(var_793_object); // 0x419 NEW_2
	if(var_792_bool == 0) goto Label_1058; // 0x41b JumpB
	var_798_bool = 0; var_799_object = Obj(); // 0x41c PushV
	var_799_object = var_1_object; // 0x41d MovT
	func_6102(var_799_object); // 0x41e NEW_2
	if(var_798_bool == 0) goto Label_1058; // 0x420 JumpB
	var_791_bool = 1; // 0x421 MovB
	
Label_1058:
	if(var_791_bool == 0) goto Label_1079; // 0x422 JumpB
	var_804_string = ""; // 0x423 PushV
	var_804_string = "Smile"; // 0x424 MovS
	func_1179(var_785_object, var_804_string); // 0x425 NEW_2
	var_812_int = 510952; // 0x427 PushI
	SetMessage(var_812_int); // 0x428 TObjFunc
	ClearReplies(); // 0x42a TObjFunc
	var_813_int = 510953; // 0x42c PushI
	var_814_int = 12113; // 0x42d PushI
	var_815_int = 12112; // 0x42e PushI
	AddReply(var_813_int, var_814_int, var_815_int); // 0x42f TObjFunc
	var_816_int = 510960; // 0x431 PushI
	var_817_int = 12113; // 0x432 PushI
	var_818_int = 12119; // 0x433 PushI
	AddReply(var_816_int, var_817_int, var_818_int); // 0x434 TObjFunc
	goto Label_1149; // 0x436 Jump
	
Label_1149:
	var_819_bool = 0; // 0x47d PushV
	func_5745(var_819_bool); // 0x47e NEW_2
	if(var_819_bool == 0) goto Label_1164; // 0x480 JumpB
	
Label_1153:
	lshWaitForAnimEnd(); // 0x481 Func
	var_820_object = var_3_object; // 0x483 PushT
	if(var_820_object == 0) goto Label_1158; // 0x484 JumpB
	goto Label_1163; // 0x485 Jump
	
Label_1163:
	goto Label_1178; // 0x48b Jump
	
Label_1178:
	return 0; // 0x49a Return
	
Label_1158:
	var_821_string = ""; // 0x486 PushV
	var_821_string = var_2_object; // 0x487 MovT
	func_5523(var_821_string); // 0x488 NEW_2
	goto Label_1153; // 0x48a Jump
	
Label_1164:
	var_822_string = "all"; // 0x48c PushS
	var_823_string = "idle"; // 0x48d PushS
	PlayAnimation(var_822_string, var_823_string); // 0x48e Func
	
Label_1168:
	WaitForAnimEnd(); // 0x490 Func
	var_824_object = var_3_object; // 0x492 PushT
	if(var_824_object == 0) goto Label_1173; // 0x493 JumpB
	goto Label_1178; // 0x494 Jump
	
Label_1173:
	var_825_string = "all"; // 0x495 PushS
	var_826_string = "idle"; // 0x496 PushS
	PlayAnimation(var_825_string, var_826_string); // 0x497 Func
	goto Label_1168; // 0x499 Jump
	
Label_1079:
	var_827_string = ""; // 0x437 PushV
	var_827_string = "Neutral"; // 0x438 MovS
	func_1179(var_785_object, var_827_string); // 0x439 NEW_2
	var_828_int = 509615; // 0x43b PushI
	SetMessage(var_828_int); // 0x43c TObjFunc
	ClearReplies(); // 0x43e TObjFunc
	var_829_bool = 0; // 0x440 PushV
	var_829_bool = 0; // 0x441 MovB
	var_830_bool = 0; var_831_object = Obj(); // 0x442 PushV
	var_831_object = var_1_object; // 0x443 MovT
	func_6114(var_831_object); // 0x444 NEW_2
	if(var_830_bool == 0) goto Label_1101; // 0x446 JumpB
	var_836_bool = 0; var_837_object = Obj(); // 0x447 PushV
	var_837_object = var_1_object; // 0x448 MovT
	func_6126(var_837_object); // 0x449 NEW_2
	if(var_836_bool == 0) goto Label_1101; // 0x44b JumpB
	var_829_bool = 1; // 0x44c MovB
	
Label_1101:
	if(var_829_bool == 0) goto Label_1107; // 0x44d JumpB
	var_842_int = 510970; // 0x44e PushI
	var_843_int = 12133; // 0x44f PushI
	var_844_int = 12132; // 0x450 PushI
	AddReply(var_842_int, var_843_int, var_844_int); // 0x451 TObjFunc
	
Label_1107:
	var_845_bool = 0; // 0x453 PushV
	var_845_bool = 0; // 0x454 MovB
	var_846_bool = 0; var_847_object = Obj(); // 0x455 PushV
	var_847_object = var_1_object; // 0x456 MovT
	func_6196(var_847_object); // 0x457 NEW_2
	if(var_846_bool == 0) goto Label_1120; // 0x459 JumpB
	var_852_bool = 0; var_853_object = Obj(); // 0x45a PushV
	var_853_object = var_1_object; // 0x45b MovT
	func_6006(var_853_object); // 0x45c NEW_2
	if(var_852_bool == 0) goto Label_1120; // 0x45e JumpB
	var_845_bool = 1; // 0x45f MovB
	
Label_1120:
	if(var_845_bool == 0) goto Label_1126; // 0x460 JumpB
	var_858_int = 510948; // 0x461 PushI
	var_859_int = 12108; // 0x462 PushI
	var_860_int = 12107; // 0x463 PushI
	AddReply(var_858_int, var_859_int, var_860_int); // 0x464 TObjFunc
	
Label_1126:
	var_861_bool = 0; var_862_object = Obj(); // 0x466 PushV
	var_862_object = var_1_object; // 0x467 MovT
	func_6018(var_862_object); // 0x468 NEW_2
	if(var_861_bool == 0) goto Label_1136; // 0x46a JumpB
	var_867_int = 509640; // 0x46b PushI
	var_868_int = 10581; // 0x46c PushI
	var_869_int = 10608; // 0x46d PushI
	AddReply(var_867_int, var_868_int, var_869_int); // 0x46e TObjFunc
	
Label_1136:
	var_870_int = 514119; // 0x470 PushI
	var_871_int = -1; // 0x471 PushI
	var_872_int = 15333; // 0x472 PushI
	AddReply(var_870_int, var_871_int, var_872_int); // 0x473 TObjFunc
	var_873_int = 509616; // 0x475 PushI
	var_874_int = -1; // 0x476 PushI
	var_875_int = 10580; // 0x477 PushI
	AddReply(var_873_int, var_874_int, var_875_int); // 0x478 TObjFunc
	goto Label_1149; // 0x47a Jump
}


func_6162(var_987_bool, var_988_object)
{
	var_989_bool = 0; var_990_object = Obj(); // 0x1813 PushV
	var_990_object = var_988_object; // 0x1814 Mov
	func_6254(var_990_object); // 0x1815 NEW_2
	if(var_989_bool == 0) goto Label_6170; // 0x1817 JumpB
	var_987_bool = 1; // 0x1818 MovB
	return 0; // 0x1819 Return
	
Label_6170:
	var_987_bool = 0; // 0x181a MovB
	return 0; // 0x181b Return
}


func_4115(var_2_object, var_1348_string)
{
	var_1349_bool = 0; // 0x1014 PushV
	func_5745(var_1349_bool); // 0x1015 NEW_2
	var_1350_bool = var_1349_bool == 0; // 0x1017 Not
	if(var_1350_bool == 0) goto Label_4122; // 0x1018 JumpB
	return 0; // 0x1019 Return
	
Label_4122:
	var_1351_bool = var_1348_string == var_2_object; // 0x101a Eq
	if(var_1351_bool == 0) goto Label_4125; // 0x101b JumpB
	return 0; // 0x101c Return
	
Label_4125:
	var_1352_string = ""; var_1353_bool = 0; // 0x101d PushV
	var_1352_string = var_1348_string; // 0x101e Mov
	var_1354_string = ""; // 0x101f PushS
	var_1355_bool = var_1348_string == var_1354_string; // 0x1020 Eq
	if(var_1355_bool == 0) goto Label_4132; // 0x1021 JumpB
	var_1353_bool = 0; // 0x1022 MovB
	goto Label_4133; // 0x1023 Jump
	
Label_4133:
	func_5539(var_1352_string, var_1353_bool); // 0x1025 NEW_2
	var_2_object = var_1348_string; // 0x1027 TMov
	return 0; // 0x1028 Return
	
Label_4132:
	var_1353_bool = 1; // 0x1024 MovB
}


func_22(var_0_bool, var_215_int, var_216_object)
{
	var_218_object = Obj(); var_219_bool = 0; var_220_int = 0; var_221_bool = 0; var_222_object = Obj(); var_223_bool = 0; var_224_int = 0; var_225_bool = 0; // 0x16 PushV
	var_0_bool = var_216_object; // 0x17 TMov
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0; // 0x18 PushV
	var_227_object = var_216_object; // 0x19 Mov
	var_228_float = 70.0; // 0x1a MovF
	func_5237(var_227_object, var_228_float); // 0x1b NEW_2
	var_273_bool = var_226_bool == 0; // 0x1d Not
	if(var_273_bool == 0) goto Label_33; // 0x1e JumpB
	var_215_int = -2; // 0x1f MovI
	return 8; // 0x20 Return
	
Label_33:
	CreateDialog(var_222_object); // 0x21 Func
	var_274_int = 0; // 0x23 PushV
	func_5739(var_274_int); // 0x24 NEW_2
	SetNPCName(var_274_int); // 0x26 ObjFunc
	var_275_int = 0; // 0x28 PushV
	func_5737(var_275_int); // 0x29 NEW_2
	SetNPCDescription(var_275_int); // 0x2b ObjFunc
	var_276_string = ""; // 0x2d PushV
	func_5741(var_276_string); // 0x2e NEW_2
	SetPhoto(var_276_string); // 0x30 ObjFunc
	var_277_string = ""; // 0x32 PushV
	func_5743(var_277_string); // 0x33 NEW_2
	SetPhoto2(var_277_string); // 0x35 ObjFunc
	var_278_int = 0; // 0x37 PushV
	func_6536(var_278_int); // 0x38 NEW_2
	SetPlayerName(var_278_int); // 0x3a ObjFunc
	var_224_int = -1; // 0x3c MovI
	IsOverrideActive(var_223_bool); // 0x3d Func
	var_286_bool = var_223_bool; // 0x3f Push
	if(var_286_bool == 0) goto Label_67; // 0x40 JumpB
	var_215_int = -2; // 0x41 MovI
	return 8; // 0x42 Return
	
Label_67:
	DoDialog(var_222_object); // 0x43 Func
	var_287_bool = 0; var_288_object = Obj(); // 0x45 PushV
	var_289_object = Obj(); // 0x46 PushV
	func_5604(var_289_object); // 0x47 NEW_2
	var_288_object = var_289_object; // 0x48 Mov
	func_5324(var_287_bool, var_288_object); // 0x4a NEW_2
	var_377_object = Obj(); var_378_object = Obj(); // 0x4c PushV
	var_377_object = var_216_object; // 0x4d Mov
	var_378_object = var_222_object; // 0x4e Mov
	TaskCall(2); // 0x4f TaskCall
	func_103(var_379_object, var_380_object, var_381_string, var_382_bool, var_377_object, var_378_object); // 0x50 NEW_2
	TaskReturn(); // 0x51 TaskReturn
	IsDialogEnd(var_225_bool); // 0x53 ObjFunc
	
Label_85:
	var_433_bool = var_225_bool == 0; // 0x55 Not
	if(var_433_bool == 0) goto Label_92; // 0x56 JumpB
	sync(); // 0x57 Func
	IsDialogEnd(var_225_bool); // 0x59 ObjFunc
	goto Label_85; // 0x5b Jump
	
Label_92:
	var_434_object = Obj(); // 0x5c PushV
	var_434_object = var_216_object; // 0x5d Mov
	func_5306(); // 0x5e NEW_2
	StopDialog(var_222_object); // 0x60 Func
	GetReturnValue(var_224_int); // 0x62 ObjFunc
	var_215_int = var_224_int; // 0x64 Mov
	return 8; // 0x65 Return
}


func_6172(var_977_bool)
{
	var_979_int = 0; var_980_string = ""; // 0x181d PushV
	var_980_string = "d5q01ThiefsWillHelp"; // 0x181e MovS
	func_5625(var_979_int, var_980_string); // 0x181f NEW_2
	var_981_int = 1; // 0x1821 PushI
	var_982_bool = var_979_int == var_981_int; // 0x1822 Eq
	if(var_982_bool == 0) goto Label_6182; // 0x1823 JumpB
	var_977_bool = 1; // 0x1824 MovB
	return 0; // 0x1825 Return
	
Label_6182:
	var_977_bool = 0; // 0x1826 MovB
	return 0; // 0x1827 Return
}


func_5661(var_117_object, var_118_int)
{
	var_119_int = 0; var_120_int = 0; var_121_bool = 0; var_122_int = 0; var_123_int = 0; var_124_bool = 0; // 0x161d PushV
	GetItemID(var_122_int); // 0x161e ObjFunc
	var_125_string = "Category"; // 0x1620 PushS
	GetInvItemProperty(var_123_int, var_122_int, var_125_string); // 0x1621 Func
	AddItem(var_124_bool, var_117_object, var_123_int, var_118_int); // 0x1623 ObjFunc
	var_126_bool = var_124_bool == 0; // 0x1625 Not
	if(var_126_bool == 0) goto Label_5674; // 0x1626 JumpB
	DropItems(var_117_object, var_118_int); // 0x1627 ObjFunc
	goto Label_5679; // 0x1629 Jump
	
Label_5679:
	return 6; // 0x162f Return
	
Label_5674:
	var_127_int = 0; var_128_int = 0; // 0x162a PushV
	var_127_int = var_122_int; // 0x162b Mov
	var_128_int = var_118_int; // 0x162c Mov
	func_5630(var_127_int, var_128_int); // 0x162d NEW_2
}


func_6184(var_915_bool)
{
	var_917_int = 0; var_918_string = ""; // 0x1829 PushV
	var_918_string = "d5q02"; // 0x182a MovS
	func_5625(var_917_int, var_918_string); // 0x182b NEW_2
	var_919_int = 0; // 0x182d PushI
	var_920_bool = var_917_int == var_919_int; // 0x182e Eq
	if(var_920_bool == 0) goto Label_6194; // 0x182f JumpB
	var_915_bool = 1; // 0x1830 MovB
	return 0; // 0x1831 Return
	
Label_6194:
	var_915_bool = 0; // 0x1832 MovB
	return 0; // 0x1833 Return
}


func_3630(var_0_bool, var_1_object, var_2_object, var_3_object, var_1280_object, var_1281_object)
{
	var_0_bool = var_1281_object; // 0xe2f TMov
	var_1_object = var_1280_object; // 0xe30 TMov
	var_3_object = 0; // 0xe31 TMovB
	var_1286_int = 1; // 0xe32 PushI
	if(var_1286_int == 0) goto Label_3658; // 0xe33 JumpB
	var_1287_string = ""; // 0xe34 PushV
	var_1287_string = "Anger"; // 0xe35 MovS
	func_3688(var_1281_object, var_1287_string); // 0xe36 NEW_2
	var_1295_int = 514134; // 0xe38 PushI
	SetMessage(var_1295_int); // 0xe39 TObjFunc
	ClearReplies(); // 0xe3b TObjFunc
	var_1296_int = 514135; // 0xe3d PushI
	var_1297_int = -1; // 0xe3e PushI
	var_1298_int = 15349; // 0xe3f PushI
	AddReply(var_1296_int, var_1297_int, var_1298_int); // 0xe40 TObjFunc
	var_1299_int = 514136; // 0xe42 PushI
	var_1300_int = -1; // 0xe43 PushI
	var_1301_int = 15350; // 0xe44 PushI
	AddReply(var_1299_int, var_1300_int, var_1301_int); // 0xe45 TObjFunc
	goto Label_3658; // 0xe47 Jump
	
Label_3658:
	var_1302_bool = 0; // 0xe4a PushV
	func_5745(var_1302_bool); // 0xe4b NEW_2
	if(var_1302_bool == 0) goto Label_3673; // 0xe4d JumpB
	
Label_3662:
	lshWaitForAnimEnd(); // 0xe4e Func
	var_1303_object = var_3_object; // 0xe50 PushT
	if(var_1303_object == 0) goto Label_3667; // 0xe51 JumpB
	goto Label_3672; // 0xe52 Jump
	
Label_3672:
	goto Label_3687; // 0xe58 Jump
	
Label_3687:
	return 0; // 0xe67 Return
	
Label_3667:
	var_1304_string = ""; // 0xe53 PushV
	var_1304_string = var_2_object; // 0xe54 MovT
	func_5523(var_1304_string); // 0xe55 NEW_2
	goto Label_3662; // 0xe57 Jump
	
Label_3673:
	var_1305_string = "all"; // 0xe59 PushS
	var_1306_string = "idle"; // 0xe5a PushS
	PlayAnimation(var_1305_string, var_1306_string); // 0xe5b Func
	
Label_3677:
	WaitForAnimEnd(); // 0xe5d Func
	var_1307_object = var_3_object; // 0xe5f PushT
	if(var_1307_object == 0) goto Label_3682; // 0xe60 JumpB
	goto Label_3687; // 0xe61 Jump
	
Label_3682:
	var_1308_string = "all"; // 0xe62 PushS
	var_1309_string = "idle"; // 0xe63 PushS
	PlayAnimation(var_1308_string, var_1309_string); // 0xe64 Func
	goto Label_3677; // 0xe66 Jump
}


func_5680(var_111_object, var_112_string, var_113_int)
{
	var_114_object = Obj(); var_115_object = Obj(); // 0x1630 PushV
	CreateInvItem(var_115_object); // 0x1631 Func
	SetItemName(var_112_string); // 0x1633 ObjFunc
	var_116_object = Obj(); var_117_object = Obj(); var_118_int = 0; // 0x1635 PushV
	var_116_object = var_111_object; // 0x1636 Mov
	var_117_object = var_115_object; // 0x1637 Mov
	var_118_int = var_113_int; // 0x1638 Mov
	func_5661(var_117_object, var_118_int); // 0x1639 NEW_2
	return 2; // 0x163b Return
}


func_6196(var_846_bool)
{
	var_848_int = 0; var_849_string = ""; // 0x1835 PushV
	var_849_string = "d4q03"; // 0x1836 MovS
	func_5625(var_848_int, var_849_string); // 0x1837 NEW_2
	var_850_int = 3; // 0x1839 PushI
	var_851_bool = var_848_int == var_850_int; // 0x183a Eq
	if(var_851_bool == 0) goto Label_6206; // 0x183b JumpB
	var_846_bool = 1; // 0x183c MovB
	return 0; // 0x183d Return
	
Label_6206:
	var_846_bool = 0; // 0x183e MovB
	return 0; // 0x183f Return
}


func_3127(var_0_bool, var_1073_int, var_1074_object)
{
	var_1076_object = Obj(); var_1077_bool = 0; var_1078_int = 0; var_1079_bool = 0; var_1080_object = Obj(); var_1081_bool = 0; var_1082_int = 0; var_1083_bool = 0; // 0xc37 PushV
	var_0_bool = var_1074_object; // 0xc38 TMov
	var_1084_bool = 0; var_1085_object = Obj(); var_1086_float = 0; // 0xc39 PushV
	var_1085_object = var_1074_object; // 0xc3a Mov
	var_1086_float = 70.0; // 0xc3b MovF
	func_5237(var_1085_object, var_1086_float); // 0xc3c NEW_2
	var_1087_bool = var_1084_bool == 0; // 0xc3e Not
	if(var_1087_bool == 0) goto Label_3138; // 0xc3f JumpB
	var_1073_int = -2; // 0xc40 MovI
	return 8; // 0xc41 Return
	
Label_3138:
	CreateDialog(var_1080_object); // 0xc42 Func
	var_1088_int = 0; // 0xc44 PushV
	func_5739(var_1088_int); // 0xc45 NEW_2
	SetNPCName(var_1088_int); // 0xc47 ObjFunc
	var_1089_int = 0; // 0xc49 PushV
	func_5737(var_1089_int); // 0xc4a NEW_2
	SetNPCDescription(var_1089_int); // 0xc4c ObjFunc
	var_1090_string = ""; // 0xc4e PushV
	func_5741(var_1090_string); // 0xc4f NEW_2
	SetPhoto(var_1090_string); // 0xc51 ObjFunc
	var_1091_string = ""; // 0xc53 PushV
	func_5743(var_1091_string); // 0xc54 NEW_2
	SetPhoto2(var_1091_string); // 0xc56 ObjFunc
	var_1092_int = 0; // 0xc58 PushV
	func_6536(var_1092_int); // 0xc59 NEW_2
	SetPlayerName(var_1092_int); // 0xc5b ObjFunc
	var_1082_int = -1; // 0xc5d MovI
	IsOverrideActive(var_1081_bool); // 0xc5e Func
	var_1093_bool = var_1081_bool; // 0xc60 Push
	if(var_1093_bool == 0) goto Label_3172; // 0xc61 JumpB
	var_1073_int = -2; // 0xc62 MovI
	return 8; // 0xc63 Return
	
Label_3172:
	DoDialog(var_1080_object); // 0xc64 Func
	var_1094_bool = 0; var_1095_object = Obj(); // 0xc66 PushV
	var_1096_object = Obj(); // 0xc67 PushV
	func_5604(var_1096_object); // 0xc68 NEW_2
	var_1095_object = var_1096_object; // 0xc69 Mov
	func_5324(var_1094_bool, var_1095_object); // 0xc6b NEW_2
	var_1097_object = Obj(); var_1098_object = Obj(); // 0xc6d PushV
	var_1097_object = var_1074_object; // 0xc6e Mov
	var_1098_object = var_1080_object; // 0xc6f Mov
	TaskCall(14); // 0xc70 TaskCall
	func_3208(var_1099_object, var_1100_object, var_1101_string, var_1102_bool, var_1097_object, var_1098_object); // 0xc71 NEW_2
	TaskReturn(); // 0xc72 TaskReturn
	IsDialogEnd(var_1083_bool); // 0xc74 ObjFunc
	
Label_3190:
	var_1127_bool = var_1083_bool == 0; // 0xc76 Not
	if(var_1127_bool == 0) goto Label_3197; // 0xc77 JumpB
	sync(); // 0xc78 Func
	IsDialogEnd(var_1083_bool); // 0xc7a ObjFunc
	goto Label_3190; // 0xc7c Jump
	
Label_3197:
	var_1128_object = Obj(); // 0xc7d PushV
	var_1128_object = var_1074_object; // 0xc7e Mov
	func_5306(); // 0xc7f NEW_2
	StopDialog(var_1080_object); // 0xc81 Func
	GetReturnValue(var_1082_int); // 0xc83 ObjFunc
	var_1073_int = var_1082_int; // 0xc85 Mov
	return 8; // 0xc86 Return
}


func_5693(var_94_float)
{
	var_95_float = 0; var_96_float = 0; // 0x163d PushV
	GetGameTime(var_96_float); // 0x163e Func
	var_94_float = var_96_float; // 0x1640 Mov
	return 2; // 0x1641 Return
}


func_2110(var_0_bool, var_883_int, var_884_object)
{
	var_886_object = Obj(); var_887_bool = 0; var_888_int = 0; var_889_bool = 0; var_890_object = Obj(); var_891_bool = 0; var_892_int = 0; var_893_bool = 0; // 0x83e PushV
	var_0_bool = var_884_object; // 0x83f TMov
	var_894_bool = 0; var_895_object = Obj(); var_896_float = 0; // 0x840 PushV
	var_895_object = var_884_object; // 0x841 Mov
	var_896_float = 70.0; // 0x842 MovF
	func_5237(var_895_object, var_896_float); // 0x843 NEW_2
	var_897_bool = var_894_bool == 0; // 0x845 Not
	if(var_897_bool == 0) goto Label_2121; // 0x846 JumpB
	var_883_int = -2; // 0x847 MovI
	return 8; // 0x848 Return
	
Label_2121:
	CreateDialog(var_890_object); // 0x849 Func
	var_898_int = 0; // 0x84b PushV
	func_5739(var_898_int); // 0x84c NEW_2
	SetNPCName(var_898_int); // 0x84e ObjFunc
	var_899_int = 0; // 0x850 PushV
	func_5737(var_899_int); // 0x851 NEW_2
	SetNPCDescription(var_899_int); // 0x853 ObjFunc
	var_900_string = ""; // 0x855 PushV
	func_5741(var_900_string); // 0x856 NEW_2
	SetPhoto(var_900_string); // 0x858 ObjFunc
	var_901_string = ""; // 0x85a PushV
	func_5743(var_901_string); // 0x85b NEW_2
	SetPhoto2(var_901_string); // 0x85d ObjFunc
	var_902_int = 0; // 0x85f PushV
	func_6536(var_902_int); // 0x860 NEW_2
	SetPlayerName(var_902_int); // 0x862 ObjFunc
	var_892_int = -1; // 0x864 MovI
	IsOverrideActive(var_891_bool); // 0x865 Func
	var_903_bool = var_891_bool; // 0x867 Push
	if(var_903_bool == 0) goto Label_2155; // 0x868 JumpB
	var_883_int = -2; // 0x869 MovI
	return 8; // 0x86a Return
	
Label_2155:
	DoDialog(var_890_object); // 0x86b Func
	var_904_bool = 0; var_905_object = Obj(); // 0x86d PushV
	var_906_object = Obj(); // 0x86e PushV
	func_5604(var_906_object); // 0x86f NEW_2
	var_905_object = var_906_object; // 0x870 Mov
	func_5324(var_904_bool, var_905_object); // 0x872 NEW_2
	var_907_object = Obj(); var_908_object = Obj(); // 0x874 PushV
	var_907_object = var_884_object; // 0x875 Mov
	var_908_object = var_890_object; // 0x876 Mov
	TaskCall(10); // 0x877 TaskCall
	func_2191(var_909_object, var_910_object, var_911_string, var_912_bool, var_907_object, var_908_object); // 0x878 NEW_2
	TaskReturn(); // 0x879 TaskReturn
	IsDialogEnd(var_893_bool); // 0x87b ObjFunc
	
Label_2173:
	var_1005_bool = var_893_bool == 0; // 0x87d Not
	if(var_1005_bool == 0) goto Label_2180; // 0x87e JumpB
	sync(); // 0x87f Func
	IsDialogEnd(var_893_bool); // 0x881 ObjFunc
	goto Label_2173; // 0x883 Jump
	
Label_2180:
	var_1006_object = Obj(); // 0x884 PushV
	var_1006_object = var_884_object; // 0x885 Mov
	func_5306(); // 0x886 NEW_2
	StopDialog(var_890_object); // 0x888 Func
	GetReturnValue(var_892_int); // 0x88a ObjFunc
	var_883_int = var_892_int; // 0x88c Mov
	return 8; // 0x88d Return
}


func_6208(var_921_bool)
{
	var_923_int = 0; var_924_string = ""; // 0x1841 PushV
	var_924_string = "ood5Grif2"; // 0x1842 MovS
	func_5625(var_923_int, var_924_string); // 0x1843 NEW_2
	var_925_int = 0; // 0x1845 PushI
	var_926_bool = var_923_int == var_925_int; // 0x1846 Eq
	if(var_926_bool == 0) goto Label_6218; // 0x1847 JumpB
	var_921_bool = 1; // 0x1848 MovB
	return 0; // 0x1849 Return
	
Label_6218:
	var_921_bool = 0; // 0x184a MovB
	return 0; // 0x184b Return
}


func_5698(var_87_int)
{
	var_88_float = 0; var_89_float = 0; // 0x1642 PushV
	GetGameTime(var_89_float); // 0x1643 Func
	var_90_int = 1; // 0x1645 PushI
	var_91_int = 0; // 0x1646 PushV
	var_92_int = 24; // 0x1647 PushI
	var_91_int = var_89_float / var_89_float; // 0x1648 Div2
	var_87_int = var_90_int + var_91_int; // 0x1649 Add2
	return 2; // 0x164a Return
}


func_4677(var_0_bool, var_1380_int, var_1381_object)
{
	var_1383_object = Obj(); var_1384_bool = 0; var_1385_int = 0; var_1386_bool = 0; var_1387_object = Obj(); var_1388_bool = 0; var_1389_int = 0; var_1390_bool = 0; // 0x1245 PushV
	var_0_bool = var_1381_object; // 0x1246 TMov
	var_1391_bool = 0; var_1392_object = Obj(); var_1393_float = 0; // 0x1247 PushV
	var_1392_object = var_1381_object; // 0x1248 Mov
	var_1393_float = 70.0; // 0x1249 MovF
	func_5237(var_1392_object, var_1393_float); // 0x124a NEW_2
	var_1394_bool = var_1391_bool == 0; // 0x124c Not
	if(var_1394_bool == 0) goto Label_4688; // 0x124d JumpB
	var_1380_int = -2; // 0x124e MovI
	return 8; // 0x124f Return
	
Label_4688:
	CreateDialog(var_1387_object); // 0x1250 Func
	var_1395_int = 0; // 0x1252 PushV
	func_5739(var_1395_int); // 0x1253 NEW_2
	SetNPCName(var_1395_int); // 0x1255 ObjFunc
	var_1396_int = 0; // 0x1257 PushV
	func_5737(var_1396_int); // 0x1258 NEW_2
	SetNPCDescription(var_1396_int); // 0x125a ObjFunc
	var_1397_string = ""; // 0x125c PushV
	func_5741(var_1397_string); // 0x125d NEW_2
	SetPhoto(var_1397_string); // 0x125f ObjFunc
	var_1398_string = ""; // 0x1261 PushV
	func_5743(var_1398_string); // 0x1262 NEW_2
	SetPhoto2(var_1398_string); // 0x1264 ObjFunc
	var_1399_int = 0; // 0x1266 PushV
	func_6536(var_1399_int); // 0x1267 NEW_2
	SetPlayerName(var_1399_int); // 0x1269 ObjFunc
	var_1389_int = -1; // 0x126b MovI
	IsOverrideActive(var_1388_bool); // 0x126c Func
	var_1400_bool = var_1388_bool; // 0x126e Push
	if(var_1400_bool == 0) goto Label_4722; // 0x126f JumpB
	var_1380_int = -2; // 0x1270 MovI
	return 8; // 0x1271 Return
	
Label_4722:
	DoDialog(var_1387_object); // 0x1272 Func
	var_1401_bool = 0; var_1402_object = Obj(); // 0x1274 PushV
	var_1403_object = Obj(); // 0x1275 PushV
	func_5604(var_1403_object); // 0x1276 NEW_2
	var_1402_object = var_1403_object; // 0x1277 Mov
	func_5324(var_1401_bool, var_1402_object); // 0x1279 NEW_2
	var_1404_object = Obj(); var_1405_object = Obj(); // 0x127b PushV
	var_1404_object = var_1381_object; // 0x127c Mov
	var_1405_object = var_1387_object; // 0x127d Mov
	TaskCall(26); // 0x127e TaskCall
	func_4758(var_1406_object, var_1407_object, var_1408_string, var_1409_bool, var_1404_object, var_1405_object); // 0x127f NEW_2
	TaskReturn(); // 0x1280 TaskReturn
	IsDialogEnd(var_1390_bool); // 0x1282 ObjFunc
	
Label_4740:
	var_1437_bool = var_1390_bool == 0; // 0x1284 Not
	if(var_1437_bool == 0) goto Label_4747; // 0x1285 JumpB
	sync(); // 0x1286 Func
	IsDialogEnd(var_1390_bool); // 0x1288 ObjFunc
	goto Label_4740; // 0x128a Jump
	
Label_4747:
	var_1438_object = Obj(); // 0x128b PushV
	var_1438_object = var_1381_object; // 0x128c Mov
	func_5306(); // 0x128d NEW_2
	StopDialog(var_1387_object); // 0x128f Func
	GetReturnValue(var_1389_int); // 0x1291 ObjFunc
	var_1380_int = var_1389_int; // 0x1293 Mov
	return 8; // 0x1294 Return
}


func_5191(var_107_bool)
{
	var_107_bool = 1; // 0x1447 MovB
	return 0; // 0x1448 Return
}


func_5193()
{
	StopAnimation(); // 0x1449 Func
	StopGroup0(); // 0x144b Func
	return 0; // 0x144d Return
}


func_5707(var_443_bool, var_444_int)
{
	var_445_int = 0; // 0x164c PushV
	func_5698(var_445_int); // 0x164d NEW_2
	var_443_bool = var_445_int == var_444_int; // 0x164f Eq2
	return 0; // 0x1650 Return
}


func_6220(var_499_bool)
{
	var_501_bool = 0; // 0x184d PushV
	var_501_bool = 0; // 0x184e MovB
	var_502_bool = 0; // 0x184f PushV
	var_502_bool = 0; // 0x1850 MovB
	var_503_int = 0; var_504_string = ""; // 0x1851 PushV
	var_504_string = "d1q01"; // 0x1852 MovS
	func_5625(var_503_int, var_504_string); // 0x1853 NEW_2
	var_505_int = 0; // 0x1855 PushI
	var_506_bool = var_503_int != var_505_int; // 0x1856 Neq
	if(var_506_bool == 0) goto Label_6240; // 0x1857 JumpB
	var_507_int = 0; var_508_string = ""; // 0x1858 PushV
	var_508_string = "d1q01"; // 0x1859 MovS
	func_5625(var_507_int, var_508_string); // 0x185a NEW_2
	var_509_int = 1000; // 0x185c PushI
	var_510_bool = var_507_int != var_509_int; // 0x185d Neq
	if(var_510_bool == 0) goto Label_6240; // 0x185e JumpB
	var_502_bool = 1; // 0x185f MovB
	
Label_6240:
	if(var_502_bool == 0) goto Label_6249; // 0x1860 JumpB
	var_511_int = 0; var_512_string = ""; // 0x1861 PushV
	var_512_string = "d1q01"; // 0x1862 MovS
	func_5625(var_511_int, var_512_string); // 0x1863 NEW_2
	var_513_int = -1; // 0x1865 PushI
	var_514_bool = var_511_int != var_513_int; // 0x1866 Neq
	if(var_514_bool == 0) goto Label_6249; // 0x1867 JumpB
	var_501_bool = 1; // 0x1868 MovB
	
Label_6249:
	if(var_501_bool == 0) goto Label_6252; // 0x1869 JumpB
	var_499_bool = 1; // 0x186a MovB
	return 0; // 0x186b Return
	
Label_6252:
	var_499_bool = 0; // 0x186c MovB
	return 0; // 0x186d Return
}


func_5198(var_82_float)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); // 0x144e PushV
	GetPosition(var_87_cvector); // 0x144f Func
	GetPosition(var_88_cvector); // 0x1451 ObjFunc
	var_89_cvector = var_88_cvector - var_87_cvector; // 0x1453 Sub2
	var_82_float = var_89_cvector | var_89_cvector; // 0x1454 Or2
	return 6; // 0x1455 Return
}


func_5713(var_93_string, var_94_int)
{
	var_95_string = ""; var_96_string = ""; // 0x1651 PushV
	var_96_string = "idle"; // 0x1652 MovS
	var_97_int = var_94_int; // 0x1653 Push
	if(var_97_int == 0) goto Label_5718; // 0x1654 JumpB
	var_96_string = var_96_string + var_94_int; // 0x1655 Add2
	
Label_5718:
	var_93_string = var_96_string; // 0x1656 Mov
	return 2; // 0x1657 Return
}


func_5206(var_148_string, var_149_int)
{
	var_150_int = 0; var_151_int = 0; // 0x1456 PushV
	GetProperty(var_148_string, var_151_int); // 0x1457 ObjFunc
	var_152_int = var_151_int + var_149_int; // 0x1459 Add
	SetProperty(var_148_string, var_152_int); // 0x145a ObjFunc
	return 2; // 0x145c Return
}


func_5720(var_87_int)
{
	var_88_int = 0; var_89_bool = 0; var_90_int = 0; var_91_bool = 0; // 0x1658 PushV
	var_90_int = 0; // 0x1659 MovI
	
Label_5722:
	var_92_string = "all"; // 0x165a PushS
	var_93_string = ""; var_94_int = 0; // 0x165b PushV
	var_94_int = var_90_int; // 0x165c Mov
	func_5713(var_93_string, var_94_int); // 0x165d NEW_2
	HasAnimation(var_91_bool, var_92_string, var_93_string); // 0x165f Func
	var_98_bool = var_91_bool == 0; // 0x1661 Not
	if(var_98_bool == 0) goto Label_5732; // 0x1662 JumpB
	goto Label_5735; // 0x1663 Jump
	
Label_5735:
	var_87_int = var_90_int; // 0x1667 Mov
	return 4; // 0x1668 Return
	
Label_5732:
	var_99_int = 1; // 0x1664 PushI
	var_90_int = var_90_int + var_99_int; // 0x1665 Add2
	goto Label_5722; // 0x1666 Jump
}


func_5213(var_75_bool, var_76_cvector)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; // 0x145d PushV
	GetPosition(var_80_cvector); // 0x145e Func
	var_81_cvector = var_76_cvector - var_80_cvector; // 0x1460 Sub2
	var_83_float = GetByIndex(var_81_cvector, 0); // 0x1461 PushE
	var_84_float = GetByIndex(var_81_cvector, 2); // 0x1462 PushE
	Rotate(var_83_float, var_84_float, var_82_bool); // 0x1463 Func
	var_75_bool = var_82_bool; // 0x1465 Mov
	return 6; // 0x1466 Return
}


func_4192(var_0_bool, var_447_int, var_448_object)
{
	var_450_object = Obj(); var_451_bool = 0; var_452_int = 0; var_453_bool = 0; var_454_object = Obj(); var_455_bool = 0; var_456_int = 0; var_457_bool = 0; // 0x1060 PushV
	var_0_bool = var_448_object; // 0x1061 TMov
	var_458_bool = 0; var_459_object = Obj(); var_460_float = 0; // 0x1062 PushV
	var_459_object = var_448_object; // 0x1063 Mov
	var_460_float = 70.0; // 0x1064 MovF
	func_5237(var_459_object, var_460_float); // 0x1065 NEW_2
	var_461_bool = var_458_bool == 0; // 0x1067 Not
	if(var_461_bool == 0) goto Label_4203; // 0x1068 JumpB
	var_447_int = -2; // 0x1069 MovI
	return 8; // 0x106a Return
	
Label_4203:
	CreateDialog(var_454_object); // 0x106b Func
	var_462_int = 0; // 0x106d PushV
	func_5739(var_462_int); // 0x106e NEW_2
	SetNPCName(var_462_int); // 0x1070 ObjFunc
	var_463_int = 0; // 0x1072 PushV
	func_5737(var_463_int); // 0x1073 NEW_2
	SetNPCDescription(var_463_int); // 0x1075 ObjFunc
	var_464_string = ""; // 0x1077 PushV
	func_5741(var_464_string); // 0x1078 NEW_2
	SetPhoto(var_464_string); // 0x107a ObjFunc
	var_465_string = ""; // 0x107c PushV
	func_5743(var_465_string); // 0x107d NEW_2
	SetPhoto2(var_465_string); // 0x107f ObjFunc
	var_466_int = 0; // 0x1081 PushV
	func_6536(var_466_int); // 0x1082 NEW_2
	SetPlayerName(var_466_int); // 0x1084 ObjFunc
	var_456_int = -1; // 0x1086 MovI
	IsOverrideActive(var_455_bool); // 0x1087 Func
	var_467_bool = var_455_bool; // 0x1089 Push
	if(var_467_bool == 0) goto Label_4237; // 0x108a JumpB
	var_447_int = -2; // 0x108b MovI
	return 8; // 0x108c Return
	
Label_4237:
	DoDialog(var_454_object); // 0x108d Func
	var_468_bool = 0; var_469_object = Obj(); // 0x108f PushV
	var_470_object = Obj(); // 0x1090 PushV
	func_5604(var_470_object); // 0x1091 NEW_2
	var_469_object = var_470_object; // 0x1092 Mov
	func_5324(var_468_bool, var_469_object); // 0x1094 NEW_2
	var_471_object = Obj(); var_472_object = Obj(); // 0x1096 PushV
	var_471_object = var_448_object; // 0x1097 Mov
	var_472_object = var_454_object; // 0x1098 Mov
	TaskCall(24); // 0x1099 TaskCall
	func_4273(var_473_object, var_474_object, var_475_string, var_476_bool, var_471_object, var_472_object); // 0x109a NEW_2
	TaskReturn(); // 0x109b TaskReturn
	IsDialogEnd(var_457_bool); // 0x109d ObjFunc
	
Label_4255:
	var_538_bool = var_457_bool == 0; // 0x109f Not
	if(var_538_bool == 0) goto Label_4262; // 0x10a0 JumpB
	sync(); // 0x10a1 Func
	IsDialogEnd(var_457_bool); // 0x10a3 ObjFunc
	goto Label_4255; // 0x10a5 Jump
	
Label_4262:
	var_539_object = Obj(); // 0x10a6 PushV
	var_539_object = var_448_object; // 0x10a7 Mov
	func_5306(); // 0x10a8 NEW_2
	StopDialog(var_454_object); // 0x10aa Func
	GetReturnValue(var_456_int); // 0x10ac ObjFunc
	var_447_int = var_456_int; // 0x10ae Mov
	return 8; // 0x10af Return
}


func_103(var_0_bool, var_1_object, var_2_object, var_3_object, var_377_object, var_378_object)
{
	var_0_bool = var_378_object; // 0x68 TMov
	var_1_object = var_377_object; // 0x69 TMov
	var_3_object = 0; // 0x6a TMovB
	var_383_int = 1; // 0x6b PushI
	if(var_383_int == 0) goto Label_141; // 0x6c JumpB
	var_384_object = Obj(); var_385_object = Obj(); // 0x6d PushV
	var_384_object = var_1_object; // 0x6e MovT
	var_385_object = var_0_bool; // 0x6f MovT
	func_5936(); // 0x70 NEW_2
	var_388_string = ""; // 0x72 PushV
	var_388_string = "Neutral"; // 0x73 MovS
	func_171(var_378_object, var_388_string); // 0x74 NEW_2
	var_405_int = 500383; // 0x76 PushI
	SetMessage(var_405_int); // 0x77 TObjFunc
	ClearReplies(); // 0x79 TObjFunc
	var_406_int = 500384; // 0x7b PushI
	var_407_int = 448; // 0x7c PushI
	var_408_int = 445; // 0x7d PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x7e TObjFunc
	var_409_int = 500385; // 0x80 PushI
	var_410_int = 449; // 0x81 PushI
	var_411_int = 446; // 0x82 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x83 TObjFunc
	var_412_int = 500386; // 0x85 PushI
	var_413_int = 450; // 0x86 PushI
	var_414_int = 447; // 0x87 PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x88 TObjFunc
	goto Label_141; // 0x8a Jump
	
Label_141:
	var_415_bool = 0; // 0x8d PushV
	func_5745(var_415_bool); // 0x8e NEW_2
	if(var_415_bool == 0) goto Label_156; // 0x90 JumpB
	
Label_145:
	lshWaitForAnimEnd(); // 0x91 Func
	var_416_object = var_3_object; // 0x93 PushT
	if(var_416_object == 0) goto Label_150; // 0x94 JumpB
	goto Label_155; // 0x95 Jump
	
Label_155:
	goto Label_170; // 0x9b Jump
	
Label_170:
	return 0; // 0xaa Return
	
Label_150:
	var_417_string = ""; // 0x96 PushV
	var_417_string = var_2_object; // 0x97 MovT
	func_5523(var_417_string); // 0x98 NEW_2
	goto Label_145; // 0x9a Jump
	
Label_156:
	var_428_string = "all"; // 0x9c PushS
	var_429_string = "idle"; // 0x9d PushS
	PlayAnimation(var_428_string, var_429_string); // 0x9e Func
	
Label_160:
	WaitForAnimEnd(); // 0xa0 Func
	var_430_object = var_3_object; // 0xa2 PushT
	if(var_430_object == 0) goto Label_165; // 0xa3 JumpB
	goto Label_170; // 0xa4 Jump
	
Label_165:
	var_431_string = "all"; // 0xa5 PushS
	var_432_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_431_string, var_432_string); // 0xa7 Func
	goto Label_160; // 0xa9 Jump
}


func_3688(var_2_object, var_1287_string)
{
	var_1288_bool = 0; // 0xe69 PushV
	func_5745(var_1288_bool); // 0xe6a NEW_2
	var_1289_bool = var_1288_bool == 0; // 0xe6c Not
	if(var_1289_bool == 0) goto Label_3695; // 0xe6d JumpB
	return 0; // 0xe6e Return
	
Label_3695:
	var_1290_bool = var_1287_string == var_2_object; // 0xe6f Eq
	if(var_1290_bool == 0) goto Label_3698; // 0xe70 JumpB
	return 0; // 0xe71 Return
	
Label_3698:
	var_1291_string = ""; var_1292_bool = 0; // 0xe72 PushV
	var_1291_string = var_1287_string; // 0xe73 Mov
	var_1293_string = ""; // 0xe74 PushS
	var_1294_bool = var_1287_string == var_1293_string; // 0xe75 Eq
	if(var_1294_bool == 0) goto Label_3705; // 0xe76 JumpB
	var_1292_bool = 0; // 0xe77 MovB
	goto Label_3706; // 0xe78 Jump
	
Label_3706:
	func_5539(var_1291_string, var_1292_bool); // 0xe7a NEW_2
	var_2_object = var_1287_string; // 0xe7c TMov
	return 0; // 0xe7d Return
	
Label_3705:
	var_1292_bool = 1; // 0xe79 MovB
}


func_5737(var_275_int)
{
	var_275_int = 515535; // 0x1669 MovI
	return 0; // 0x166a Return
}


func_5223(var_71_bool)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); // 0x1467 PushV
	GetPosition(var_74_cvector); // 0x1468 ObjFunc
	var_75_bool = 0; var_76_cvector = CVector(0,0,0); // 0x146a PushV
	var_76_cvector = var_74_cvector; // 0x146b Mov
	func_5213(var_75_bool, var_76_cvector); // 0x146c NEW_2
	var_71_bool = var_75_bool; // 0x146d Mov
	return 2; // 0x146f Return
}


func_5739(var_274_int)
{
	var_274_int = 502860; // 0x166b MovI
	return 0; // 0x166c Return
}


func_5741(var_276_string)
{
	var_276_string = "ui/NPC_Grif.png"; // 0x166d MovS
	return 0; // 0x166e Return
}


func_6254(var_989_bool)
{
	var_991_float = 0; var_992_float = 0; // 0x186e PushV
	var_993_string = "money"; // 0x186f PushS
	GetProperty(var_993_string, var_992_float); // 0x1870 ObjFunc
	var_994_int = 10000; // 0x1872 PushI
	var_995_bool = var_992_float >= var_994_int; // 0x1873 GE
	if(var_995_bool == 0) goto Label_6263; // 0x1874 JumpB
	var_989_bool = 1; // 0x1875 MovB
	return 2; // 0x1876 Return
	
Label_6263:
	var_989_bool = 0; // 0x1877 MovB
	return 2; // 0x1878 Return
}


func_5743(var_277_string)
{
	var_277_string = "ui/NPC_Grif_b.png"; // 0x166f MovS
	return 0; // 0x1670 Return
}


func_5232(var_69_bool)
{
	var_70_bool = 0; var_71_bool = 0; // 0x1470 PushV
	IsLoaded(var_71_bool); // 0x1471 Func
	var_69_bool = var_71_bool; // 0x1473 Mov
	return 2; // 0x1474 Return
}


func_5745(var_269_bool)
{
	var_269_bool = 1; // 0x1671 MovB
	return 0; // 0x1672 Return
}


func_5747(var_143_object)
{
	var_145_string = "money10000 is given"; // 0x1674 PushS
	Trace(var_145_string); // 0x1675 Func
	var_146_object = Obj(); var_147_int = 0; // 0x1677 PushV
	var_146_object = var_143_object; // 0x1678 Mov
	var_147_int = 10000; // 0x1679 MovI
	func_5642(var_146_object, var_147_int); // 0x167a NEW_2
	return 0; // 0x167c Return
}


func_5237(var_226_bool, var_228_float)
{
	var_229_float = 0; var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_bool = 0; var_237_bool = 0; var_238_float = 0; var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_bool = 0; var_246_bool = 0; // 0x1475 PushV
	GetPosition(var_239_cvector); // 0x1476 ObjFunc
	GetEyesHeight(var_238_float); // 0x1478 ObjFunc
	var_247_float = GetByIndex(var_239_cvector, 1); // 0x147a PushE
	var_247_float = var_247_float + var_238_float; // 0x147b Add2
	SetByIndex(var_239_cvector, 1) = var_247_float; // 0x147c PopE
	GetPosition(var_240_cvector); // 0x147d Func
	GetEyesHeight(var_238_float); // 0x147f Func
	var_248_float = GetByIndex(var_240_cvector, 1); // 0x1481 PushE
	var_248_float = var_248_float + var_238_float; // 0x1482 Add2
	SetByIndex(var_240_cvector, 1) = var_248_float; // 0x1483 PopE
	var_241_cvector = var_239_cvector - var_240_cvector; // 0x1484 Sub2
	var_249_float = GetByIndex(var_241_cvector, 1); // 0x1485 PushE
	var_249_float = 0; // 0x1486 MovI
	SetByIndex(var_241_cvector, 1) = var_249_float; // 0x1487 PopE
	var_250_int = var_241_cvector | var_241_cvector; // 0x1488 Or
	var_251_float = sqrt(var_250_int); // 0x1489 Sqrt
	var_241_cvector = var_241_cvector / var_241_cvector; // 0x148a Div2
	var_242_cvector = -var_241_cvector; // 0x148b Neg2
	var_252_float = var_241_cvector * var_228_float; // 0x148c Mult
	var_253_cvector = CVector(0,0,0); var_254_cvector = CVector(0,0,0); // 0x148d PushV
	var_255_cvector = CVector(0.0, 1.0, 0.0); // 0x148e PushVec
	var_254_cvector = var_242_cvector ^ var_255_cvector; // 0x148f Xor2
	func_5610(var_253_cvector, var_254_cvector); // 0x1490 NEW_2
	var_261_int = 25; // 0x1492 PushI
	var_262_float = var_253_cvector * var_261_int; // 0x1493 Mult
	var_263_int = var_252_float + var_262_float; // 0x1494 Add
	var_264_cvector = CVector(0.0, 10.0, 0.0); // 0x1495 PushVec
	var_243_cvector = var_263_int - var_264_cvector; // 0x1496 Sub2
	var_244_cvector = var_240_cvector + var_243_cvector; // 0x1497 Add2
	IsOverrideActive(var_245_bool); // 0x1498 Func
	var_265_bool = var_245_bool; // 0x149a Push
	if(var_265_bool == 0) goto Label_5278; // 0x149b JumpB
	var_226_bool = 0; // 0x149c MovB
	return 18; // 0x149d Return
	
Label_5278:
	StopWorld(); // 0x149e Func
	var_266_bool = 1; // 0x14a0 PushB
	CameraTransit(var_244_cvector, var_242_cvector, var_266_bool); // 0x14a1 Func
	var_267_float = GetByIndex(var_243_cvector, 0); // 0x14a3 PushE
	var_268_float = GetByIndex(var_243_cvector, 2); // 0x14a4 PushE
	Rotate(var_267_float, var_268_float); // 0x14a5 Func
	var_269_bool = 0; // 0x14a7 PushV
	func_5745(var_269_bool); // 0x14a8 NEW_2
	if(var_269_bool == 0) goto Label_5292; // 0x14aa JumpB
	goto Label_5300; // 0x14ab Jump
	
Label_5300:
	CameraWaitForPlayFinish(); // 0x14b4 Func
	ResumeWorld(); // 0x14b6 Func
	var_226_bool = 1; // 0x14b8 MovB
	return 18; // 0x14b9 Return
	
Label_5292:
	var_270_string = "head"; // 0x14ac PushS
	HasAnimationTrack(var_246_bool, var_270_string); // 0x14ad Func
	var_271_bool = var_246_bool; // 0x14af Push
	if(var_271_bool == 0) goto Label_5300; // 0x14b0 JumpB
	var_272_string = "head"; // 0x14b1 PushS
	LookAsyncCamera(var_272_string); // 0x14b2 Func
}


func_6265()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x1879 PushV
	var_83_int = 132; // 0x187a PushI
	var_84_int = 2; // 0x187b PushI
	var_85_int = 515269; // 0x187c PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x187d Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x187f PushV
	var_87_object = var_82_object; // 0x1880 Mov
	var_88_int = 11; // 0x1881 MovI
	func_6317(var_86_bool, var_87_object, var_88_int); // 0x1882 NEW_2
	return 2; // 0x1884 Return
}


func_5757()
{
	var_166_string = "playsound"; // 0x167e PushS
	var_167_string = "givemoney"; // 0x167f PushS
	TriggerWorld(var_166_string, var_167_string); // 0x1680 Func
	return 0; // 0x1682 Return
}


func_5763()
{
	var_106_string = "playsound"; // 0x1684 PushS
	var_107_string = "giveitem"; // 0x1685 PushS
	TriggerWorld(var_106_string, var_107_string); // 0x1686 Func
	return 0; // 0x1688 Return
}


func_6278()
{
	var_102_object = Obj(); var_103_object = Obj(); // 0x1886 PushV
	var_104_int = 97; // 0x1887 PushI
	var_105_int = 2; // 0x1888 PushI
	var_106_int = 512179; // 0x1889 PushI
	CreateDiaryEntry(var_103_object, var_104_int, var_105_int, var_106_int); // 0x188a Func
	var_107_bool = 0; var_108_object = Obj(); var_109_int = 0; // 0x188c PushV
	var_108_object = var_103_object; // 0x188d Mov
	var_109_int = 22; // 0x188e MovI
	func_6317(var_107_bool, var_108_object, var_109_int); // 0x188f NEW_2
	return 2; // 0x1891 Return
}


func_3208(var_0_bool, var_1_object, var_2_object, var_3_object, var_1097_object, var_1098_object)
{
	var_0_bool = var_1098_object; // 0xc89 TMov
	var_1_object = var_1097_object; // 0xc8a TMov
	var_3_object = 0; // 0xc8b TMovB
	var_1103_int = 1; // 0xc8c PushI
	if(var_1103_int == 0) goto Label_3236; // 0xc8d JumpB
	var_1104_string = ""; // 0xc8e PushV
	var_1104_string = "Smile"; // 0xc8f MovS
	func_3266(var_1098_object, var_1104_string); // 0xc90 NEW_2
	var_1112_int = 514126; // 0xc92 PushI
	SetMessage(var_1112_int); // 0xc93 TObjFunc
	ClearReplies(); // 0xc95 TObjFunc
	var_1113_int = 514127; // 0xc97 PushI
	var_1114_int = -1; // 0xc98 PushI
	var_1115_int = 15341; // 0xc99 PushI
	AddReply(var_1113_int, var_1114_int, var_1115_int); // 0xc9a TObjFunc
	var_1116_int = 514128; // 0xc9c PushI
	var_1117_int = -1; // 0xc9d PushI
	var_1118_int = 15342; // 0xc9e PushI
	AddReply(var_1116_int, var_1117_int, var_1118_int); // 0xc9f TObjFunc
	goto Label_3236; // 0xca1 Jump
	
Label_3236:
	var_1119_bool = 0; // 0xca4 PushV
	func_5745(var_1119_bool); // 0xca5 NEW_2
	if(var_1119_bool == 0) goto Label_3251; // 0xca7 JumpB
	
Label_3240:
	lshWaitForAnimEnd(); // 0xca8 Func
	var_1120_object = var_3_object; // 0xcaa PushT
	if(var_1120_object == 0) goto Label_3245; // 0xcab JumpB
	goto Label_3250; // 0xcac Jump
	
Label_3250:
	goto Label_3265; // 0xcb2 Jump
	
Label_3265:
	return 0; // 0xcc1 Return
	
Label_3245:
	var_1121_string = ""; // 0xcad PushV
	var_1121_string = var_2_object; // 0xcae MovT
	func_5523(var_1121_string); // 0xcaf NEW_2
	goto Label_3240; // 0xcb1 Jump
	
Label_3251:
	var_1122_string = "all"; // 0xcb3 PushS
	var_1123_string = "idle"; // 0xcb4 PushS
	PlayAnimation(var_1122_string, var_1123_string); // 0xcb5 Func
	
Label_3255:
	WaitForAnimEnd(); // 0xcb7 Func
	var_1124_object = var_3_object; // 0xcb9 PushT
	if(var_1124_object == 0) goto Label_3260; // 0xcba JumpB
	goto Label_3265; // 0xcbb Jump
	
Label_3260:
	var_1125_string = "all"; // 0xcbc PushS
	var_1126_string = "idle"; // 0xcbd PushS
	PlayAnimation(var_1125_string, var_1126_string); // 0xcbe Func
	goto Label_3255; // 0xcc0 Jump
}


func_5769(var_108_object)
{
	var_110_string = "revolver ammo15 is given"; // 0x168a PushS
	Trace(var_110_string); // 0x168b Func
	var_111_object = Obj(); var_112_string = ""; var_113_int = 0; // 0x168d PushV
	var_111_object = var_108_object; // 0x168e Mov
	var_112_string = "revolver_ammo"; // 0x168f MovS
	var_113_int = 15; // 0x1690 MovI
	func_5680(var_111_object, var_112_string, var_113_int); // 0x1691 NEW_2
	return 0; // 0x1693 Return
}


func_2191(var_0_bool, var_1_object, var_2_object, var_3_object, var_907_object, var_908_object)
{
	var_0_bool = var_908_object; // 0x890 TMov
	var_1_object = var_907_object; // 0x891 TMov
	var_3_object = 0; // 0x892 TMovB
	var_913_int = 1; // 0x893 PushI
	if(var_913_int == 0) goto Label_2316; // 0x894 JumpB
	var_914_bool = 0; // 0x895 PushV
	var_914_bool = 0; // 0x896 MovB
	var_915_bool = 0; var_916_object = Obj(); // 0x897 PushV
	var_916_object = var_1_object; // 0x898 MovT
	func_6184(var_916_object); // 0x899 NEW_2
	if(var_915_bool == 0) goto Label_2210; // 0x89b JumpB
	var_921_bool = 0; var_922_object = Obj(); // 0x89c PushV
	var_922_object = var_1_object; // 0x89d MovT
	func_6208(var_922_object); // 0x89e NEW_2
	if(var_921_bool == 0) goto Label_2210; // 0x8a0 JumpB
	var_914_bool = 1; // 0x8a1 MovB
	
Label_2210:
	if(var_914_bool == 0) goto Label_2236; // 0x8a2 JumpB
	var_927_object = Obj(); var_928_object = Obj(); // 0x8a3 PushV
	var_927_object = var_1_object; // 0x8a4 MovT
	var_928_object = var_0_bool; // 0x8a5 MovT
	func_5964(); // 0x8a6 NEW_2
	var_931_string = ""; // 0x8a8 PushV
	var_931_string = "Sly"; // 0x8a9 MovS
	func_2346(var_908_object, var_931_string); // 0x8aa NEW_2
	var_939_int = 511720; // 0x8ac PushI
	SetMessage(var_939_int); // 0x8ad TObjFunc
	ClearReplies(); // 0x8af TObjFunc
	var_940_int = 511721; // 0x8b1 PushI
	var_941_int = 12928; // 0x8b2 PushI
	var_942_int = 12927; // 0x8b3 PushI
	AddReply(var_940_int, var_941_int, var_942_int); // 0x8b4 TObjFunc
	var_943_int = 515755; // 0x8b6 PushI
	var_944_int = 12928; // 0x8b7 PushI
	var_945_int = 16821; // 0x8b8 PushI
	AddReply(var_943_int, var_944_int, var_945_int); // 0x8b9 TObjFunc
	goto Label_2316; // 0x8bb Jump
	
Label_2316:
	var_946_bool = 0; // 0x90c PushV
	func_5745(var_946_bool); // 0x90d NEW_2
	if(var_946_bool == 0) goto Label_2331; // 0x90f JumpB
	
Label_2320:
	lshWaitForAnimEnd(); // 0x910 Func
	var_947_object = var_3_object; // 0x912 PushT
	if(var_947_object == 0) goto Label_2325; // 0x913 JumpB
	goto Label_2330; // 0x914 Jump
	
Label_2330:
	goto Label_2345; // 0x91a Jump
	
Label_2345:
	return 0; // 0x929 Return
	
Label_2325:
	var_948_string = ""; // 0x915 PushV
	var_948_string = var_2_object; // 0x916 MovT
	func_5523(var_948_string); // 0x917 NEW_2
	goto Label_2320; // 0x919 Jump
	
Label_2331:
	var_949_string = "all"; // 0x91b PushS
	var_950_string = "idle"; // 0x91c PushS
	PlayAnimation(var_949_string, var_950_string); // 0x91d Func
	
Label_2335:
	WaitForAnimEnd(); // 0x91f Func
	var_951_object = var_3_object; // 0x921 PushT
	if(var_951_object == 0) goto Label_2340; // 0x922 JumpB
	goto Label_2345; // 0x923 Jump
	
Label_2340:
	var_952_string = "all"; // 0x924 PushS
	var_953_string = "idle"; // 0x925 PushS
	PlayAnimation(var_952_string, var_953_string); // 0x926 Func
	goto Label_2335; // 0x928 Jump
	
Label_2236:
	var_954_string = ""; // 0x8bc PushV
	var_954_string = "Neutral"; // 0x8bd MovS
	func_2346(var_908_object, var_954_string); // 0x8be NEW_2
	var_955_int = 511704; // 0x8c0 PushI
	SetMessage(var_955_int); // 0x8c1 TObjFunc
	ClearReplies(); // 0x8c3 TObjFunc
	var_956_bool = 0; // 0x8c5 PushV
	var_956_bool = 0; // 0x8c6 MovB
	var_957_bool = 0; var_958_object = Obj(); // 0x8c7 PushV
	var_958_object = var_1_object; // 0x8c8 MovT
	func_6138(var_958_object); // 0x8c9 NEW_2
	if(var_957_bool == 0) goto Label_2258; // 0x8cb JumpB
	var_963_bool = 0; var_964_object = Obj(); // 0x8cc PushV
	var_964_object = var_1_object; // 0x8cd MovT
	func_6150(var_964_object); // 0x8ce NEW_2
	if(var_963_bool == 0) goto Label_2258; // 0x8d0 JumpB
	var_956_bool = 1; // 0x8d1 MovB
	
Label_2258:
	if(var_956_bool == 0) goto Label_2264; // 0x8d2 JumpB
	var_969_int = 511705; // 0x8d3 PushI
	var_970_int = 12910; // 0x8d4 PushI
	var_971_int = 12909; // 0x8d5 PushI
	AddReply(var_969_int, var_970_int, var_971_int); // 0x8d6 TObjFunc
	
Label_2264:
	var_972_bool = 0; // 0x8d8 PushV
	var_972_bool = 0; // 0x8d9 MovB
	var_973_bool = 0; // 0x8da PushV
	var_973_bool = 0; // 0x8db MovB
	var_974_bool = 0; // 0x8dc PushV
	var_974_bool = 0; // 0x8dd MovB
	var_975_bool = 0; var_976_object = Obj(); // 0x8de PushV
	var_976_object = var_1_object; // 0x8df MovT
	func_6138(var_976_object); // 0x8e0 NEW_2
	if(var_975_bool == 0) goto Label_2282; // 0x8e2 JumpB
	var_977_bool = 0; var_978_object = Obj(); // 0x8e3 PushV
	var_978_object = var_1_object; // 0x8e4 MovT
	func_6172(var_978_object); // 0x8e5 NEW_2
	var_983_bool = var_977_bool == 0; // 0x8e7 Not
	if(var_983_bool == 0) goto Label_2282; // 0x8e8 JumpB
	var_974_bool = 1; // 0x8e9 MovB
	
Label_2282:
	if(var_974_bool == 0) goto Label_2290; // 0x8ea JumpB
	var_984_bool = 0; var_985_object = Obj(); // 0x8eb PushV
	var_985_object = var_1_object; // 0x8ec MovT
	func_6150(var_985_object); // 0x8ed NEW_2
	var_986_bool = var_984_bool == 0; // 0x8ef Not
	if(var_986_bool == 0) goto Label_2290; // 0x8f0 JumpB
	var_973_bool = 1; // 0x8f1 MovB
	
Label_2290:
	if(var_973_bool == 0) goto Label_2297; // 0x8f2 JumpB
	var_987_bool = 0; var_988_object = Obj(); // 0x8f3 PushV
	var_988_object = var_1_object; // 0x8f4 MovT
	func_6162(var_987_bool, var_988_object); // 0x8f5 NEW_2
	if(var_987_bool == 0) goto Label_2297; // 0x8f7 JumpB
	var_972_bool = 1; // 0x8f8 MovB
	
Label_2297:
	if(var_972_bool == 0) goto Label_2303; // 0x8f9 JumpB
	var_996_int = 511734; // 0x8fa PushI
	var_997_int = 16834; // 0x8fb PushI
	var_998_int = 12940; // 0x8fc PushI
	AddReply(var_996_int, var_997_int, var_998_int); // 0x8fd TObjFunc
	
Label_2303:
	var_999_int = 514120; // 0x8ff PushI
	var_1000_int = -1; // 0x900 PushI
	var_1001_int = 15334; // 0x901 PushI
	AddReply(var_999_int, var_1000_int, var_1001_int); // 0x902 TObjFunc
	var_1002_int = 511739; // 0x904 PushI
	var_1003_int = -1; // 0x905 PushI
	var_1004_int = 12945; // 0x906 PushI
	AddReply(var_1002_int, var_1003_int, var_1004_int); // 0x907 TObjFunc
	goto Label_2316; // 0x909 Jump
}


func_6291()
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x1893 PushV
	var_119_int = 145; // 0x1894 PushI
	var_120_int = 1; // 0x1895 PushI
	var_121_int = 515345; // 0x1896 PushI
	CreateDiaryEntry(var_118_object, var_119_int, var_120_int, var_121_int); // 0x1897 Func
	var_122_bool = 0; var_123_object = Obj(); var_124_int = 0; // 0x1899 PushV
	var_123_object = var_118_object; // 0x189a Mov
	var_124_int = 139; // 0x189b MovI
	func_6317(var_122_bool, var_123_object, var_124_int); // 0x189c NEW_2
	return 2; // 0x189e Return
}


func_5780(var_140_object)
{
	var_142_string = "money 10000 removed"; // 0x1695 PushS
	Trace(var_142_string); // 0x1696 Func
	var_143_object = Obj(); var_144_int = 0; // 0x1698 PushV
	var_143_object = var_140_object; // 0x1699 Mov
	var_144_int = -10000; // 0x169a MovI
	func_5642(var_143_object, var_144_int); // 0x169b NEW_2
	return 0; // 0x169d Return
}


func_4758(var_0_bool, var_1_object, var_2_object, var_3_object, var_1404_object, var_1405_object)
{
	var_0_bool = var_1405_object; // 0x1297 TMov
	var_1_object = var_1404_object; // 0x1298 TMov
	var_3_object = 0; // 0x1299 TMovB
	var_1410_int = 1; // 0x129a PushI
	if(var_1410_int == 0) goto Label_4791; // 0x129b JumpB
	var_1411_string = ""; // 0x129c PushV
	var_1411_string = "Neutral"; // 0x129d MovS
	func_4821(var_1405_object, var_1411_string); // 0x129e NEW_2
	var_1419_int = 535294; // 0x12a0 PushI
	SetMessage(var_1419_int); // 0x12a1 TObjFunc
	ClearReplies(); // 0x12a3 TObjFunc
	var_1420_int = 535295; // 0x12a5 PushI
	var_1421_int = 36973; // 0x12a6 PushI
	var_1422_int = 36972; // 0x12a7 PushI
	AddReply(var_1420_int, var_1421_int, var_1422_int); // 0x12a8 TObjFunc
	var_1423_int = 535302; // 0x12aa PushI
	var_1424_int = -1; // 0x12ab PushI
	var_1425_int = 36980; // 0x12ac PushI
	AddReply(var_1423_int, var_1424_int, var_1425_int); // 0x12ad TObjFunc
	var_1426_int = 535303; // 0x12af PushI
	var_1427_int = -1; // 0x12b0 PushI
	var_1428_int = 36981; // 0x12b1 PushI
	AddReply(var_1426_int, var_1427_int, var_1428_int); // 0x12b2 TObjFunc
	goto Label_4791; // 0x12b4 Jump
	
Label_4791:
	var_1429_bool = 0; // 0x12b7 PushV
	func_5745(var_1429_bool); // 0x12b8 NEW_2
	if(var_1429_bool == 0) goto Label_4806; // 0x12ba JumpB
	
Label_4795:
	lshWaitForAnimEnd(); // 0x12bb Func
	var_1430_object = var_3_object; // 0x12bd PushT
	if(var_1430_object == 0) goto Label_4800; // 0x12be JumpB
	goto Label_4805; // 0x12bf Jump
	
Label_4805:
	goto Label_4820; // 0x12c5 Jump
	
Label_4820:
	return 0; // 0x12d4 Return
	
Label_4800:
	var_1431_string = ""; // 0x12c0 PushV
	var_1431_string = var_2_object; // 0x12c1 MovT
	func_5523(var_1431_string); // 0x12c2 NEW_2
	goto Label_4795; // 0x12c4 Jump
	
Label_4806:
	var_1432_string = "all"; // 0x12c6 PushS
	var_1433_string = "idle"; // 0x12c7 PushS
	PlayAnimation(var_1432_string, var_1433_string); // 0x12c8 Func
	
Label_4810:
	WaitForAnimEnd(); // 0x12ca Func
	var_1434_object = var_3_object; // 0x12cc PushT
	if(var_1434_object == 0) goto Label_4815; // 0x12cd JumpB
	goto Label_4820; // 0x12ce Jump
	
Label_4815:
	var_1435_string = "all"; // 0x12cf PushS
	var_1436_string = "idle"; // 0x12d0 PushS
	PlayAnimation(var_1435_string, var_1436_string); // 0x12d1 Func
	goto Label_4810; // 0x12d3 Jump
}


func_1179(var_2_object, var_804_string)
{
	var_805_bool = 0; // 0x49c PushV
	func_5745(var_805_bool); // 0x49d NEW_2
	var_806_bool = var_805_bool == 0; // 0x49f Not
	if(var_806_bool == 0) goto Label_1186; // 0x4a0 JumpB
	return 0; // 0x4a1 Return
	
Label_1186:
	var_807_bool = var_804_string == var_2_object; // 0x4a2 Eq
	if(var_807_bool == 0) goto Label_1189; // 0x4a3 JumpB
	return 0; // 0x4a4 Return
	
Label_1189:
	var_808_string = ""; var_809_bool = 0; // 0x4a5 PushV
	var_808_string = var_804_string; // 0x4a6 Mov
	var_810_string = ""; // 0x4a7 PushS
	var_811_bool = var_804_string == var_810_string; // 0x4a8 Eq
	if(var_811_bool == 0) goto Label_1196; // 0x4a9 JumpB
	var_809_bool = 0; // 0x4aa MovB
	goto Label_1197; // 0x4ab Jump
	
Label_1197:
	func_5539(var_808_string, var_809_bool); // 0x4ad NEW_2
	var_2_object = var_804_string; // 0x4af TMov
	return 0; // 0x4b0 Return
	
Label_1196:
	var_809_bool = 1; // 0x4ac MovB
}


func_5790()
{
	var_75_string = "ood1Grif1"; // 0x169f PushS
	var_76_int = 1; // 0x16a0 PushI
	SetVariable(var_75_string, var_76_int); // 0x16a1 Func
	return 0; // 0x16a3 Return
}


func_6304(var_131_object)
{
	var_132_object = Obj(); var_133_object = Obj(); // 0x18a0 PushV
	GetDiaryRoot(var_133_object); // 0x18a1 Func
	var_134_bool = var_133_object == 0; // 0x18a3 Not
	if(var_134_bool == 0) goto Label_6314; // 0x18a4 JumpB
	var_135_string = "Can't retrieve diary root"; // 0x18a5 PushS
	Trace(var_135_string); // 0x18a6 Func
	var_131_object = 0; // 0x18a8 MovB
	return 2; // 0x18a9 Return
	
Label_6314:
	var_131_object = var_133_object; // 0x18aa Mov
	return 2; // 0x18ab Return
}


func_5796()
{
	var_90_string = "ood1Grif2"; // 0x16a5 PushS
	var_91_int = 1; // 0x16a6 PushI
	SetVariable(var_90_string, var_91_int); // 0x16a7 Func
	return 0; // 0x16a9 Return
}


func_5802()
{
	var_75_string = "ood3Grif1"; // 0x16ab PushS
	var_76_int = 1; // 0x16ac PushI
	SetVariable(var_75_string, var_76_int); // 0x16ad Func
	return 0; // 0x16af Return
}


func_171(var_2_object, var_388_string)
{
	var_389_bool = 0; // 0xac PushV
	func_5745(var_389_bool); // 0xad NEW_2
	var_390_bool = var_389_bool == 0; // 0xaf Not
	if(var_390_bool == 0) goto Label_178; // 0xb0 JumpB
	return 0; // 0xb1 Return
	
Label_178:
	var_391_bool = var_388_string == var_2_object; // 0xb2 Eq
	if(var_391_bool == 0) goto Label_181; // 0xb3 JumpB
	return 0; // 0xb4 Return
	
Label_181:
	var_392_string = ""; var_393_bool = 0; // 0xb5 PushV
	var_392_string = var_388_string; // 0xb6 Mov
	var_394_string = ""; // 0xb7 PushS
	var_395_bool = var_388_string == var_394_string; // 0xb8 Eq
	if(var_395_bool == 0) goto Label_188; // 0xb9 JumpB
	var_393_bool = 0; // 0xba MovB
	goto Label_189; // 0xbb Jump
	
Label_189:
	func_5539(var_392_string, var_393_bool); // 0xbd NEW_2
	var_2_object = var_388_string; // 0xbf TMov
	return 0; // 0xc0 Return
	
Label_188:
	var_393_bool = 1; // 0xbc MovB
}


func_6317(var_122_bool, var_123_object, var_124_int)
{
	var_125_object = Obj(); var_126_object = Obj(); var_127_int = 0; var_128_object = Obj(); var_129_object = Obj(); var_130_int = 0; // 0x18ad PushV
	var_131_object = Obj(); // 0x18ae PushV
	func_6304(var_131_object); // 0x18af NEW_2
	var_128_object = var_131_object; // 0x18b0 Mov
	Find(var_124_int, var_129_object); // 0x18b2 ObjFunc
	var_136_bool = var_129_object == 0; // 0x18b4 Not
	if(var_136_bool == 0) goto Label_6332; // 0x18b5 JumpB
	var_137_string = "Can't find diary parent with id: "; // 0x18b6 PushS
	var_138_int = var_137_string + var_124_int; // 0x18b7 Add
	Trace(var_138_int); // 0x18b8 Func
	var_122_bool = 0; // 0x18ba MovB
	return 6; // 0x18bb Return
	
Label_6332:
	AddChild(var_123_object); // 0x18bc ObjFunc
	var_139_int = 7; // 0x18be PushI
	SendWorldWndMessage(var_139_int); // 0x18bf Func
	GetCategory(var_130_int); // 0x18c1 ObjFunc
	SetDiarySection(var_130_int); // 0x18c3 Func
	var_122_bool = 0; // 0x18c5 MovB
	return 6; // 0x18c6 Return
}


func_5808()
{
	var_180_string = "ood4Grif3"; // 0x16b1 PushS
	var_181_int = 1; // 0x16b2 PushI
	SetVariable(var_180_string, var_181_int); // 0x16b3 Func
	return 0; // 0x16b5 Return
}


func_4273(var_0_bool, var_1_object, var_2_object, var_3_object, var_471_object, var_472_object)
{
	var_0_bool = var_472_object; // 0x10b2 TMov
	var_1_object = var_471_object; // 0x10b3 TMov
	var_3_object = 0; // 0x10b4 TMovB
	var_477_int = 1; // 0x10b5 PushI
	if(var_477_int == 0) goto Label_4330; // 0x10b6 JumpB
	var_478_string = ""; // 0x10b7 PushV
	var_478_string = "Neutral"; // 0x10b8 MovS
	func_4360(var_472_object, var_478_string); // 0x10b9 NEW_2
	var_486_int = 533838; // 0x10bb PushI
	SetMessage(var_486_int); // 0x10bc TObjFunc
	ClearReplies(); // 0x10be TObjFunc
	var_487_bool = 0; var_488_object = Obj(); // 0x10c0 PushV
	var_488_object = var_1_object; // 0x10c1 MovT
	func_5970(var_488_object); // 0x10c2 NEW_2
	if(var_487_bool == 0) goto Label_4298; // 0x10c4 JumpB
	var_495_int = 533839; // 0x10c5 PushI
	var_496_int = 35390; // 0x10c6 PushI
	var_497_int = 35389; // 0x10c7 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x10c8 TObjFunc
	
Label_4298:
	var_498_bool = 0; // 0x10ca PushV
	var_498_bool = 0; // 0x10cb MovB
	var_499_bool = 0; var_500_object = Obj(); // 0x10cc PushV
	var_500_object = var_1_object; // 0x10cd MovT
	func_6220(var_500_object); // 0x10ce NEW_2
	if(var_499_bool == 0) goto Label_4311; // 0x10d0 JumpB
	var_515_bool = 0; var_516_object = Obj(); // 0x10d1 PushV
	var_516_object = var_1_object; // 0x10d2 MovT
	func_5982(var_516_object); // 0x10d3 NEW_2
	if(var_515_bool == 0) goto Label_4311; // 0x10d5 JumpB
	var_498_bool = 1; // 0x10d6 MovB
	
Label_4311:
	if(var_498_bool == 0) goto Label_4317; // 0x10d7 JumpB
	var_521_int = 533960; // 0x10d8 PushI
	var_522_int = 35529; // 0x10d9 PushI
	var_523_int = 35528; // 0x10da PushI
	AddReply(var_521_int, var_522_int, var_523_int); // 0x10db TObjFunc
	
Label_4317:
	var_524_int = 533843; // 0x10dd PushI
	var_525_int = -1; // 0x10de PushI
	var_526_int = 35393; // 0x10df PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0x10e0 TObjFunc
	var_527_int = 533844; // 0x10e2 PushI
	var_528_int = -1; // 0x10e3 PushI
	var_529_int = 35394; // 0x10e4 PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0x10e5 TObjFunc
	goto Label_4330; // 0x10e7 Jump
	
Label_4330:
	var_530_bool = 0; // 0x10ea PushV
	func_5745(var_530_bool); // 0x10eb NEW_2
	if(var_530_bool == 0) goto Label_4345; // 0x10ed JumpB
	
Label_4334:
	lshWaitForAnimEnd(); // 0x10ee Func
	var_531_object = var_3_object; // 0x10f0 PushT
	if(var_531_object == 0) goto Label_4339; // 0x10f1 JumpB
	goto Label_4344; // 0x10f2 Jump
	
Label_4344:
	goto Label_4359; // 0x10f8 Jump
	
Label_4359:
	return 0; // 0x1107 Return
	
Label_4339:
	var_532_string = ""; // 0x10f3 PushV
	var_532_string = var_2_object; // 0x10f4 MovT
	func_5523(var_532_string); // 0x10f5 NEW_2
	goto Label_4334; // 0x10f7 Jump
	
Label_4345:
	var_533_string = "all"; // 0x10f9 PushS
	var_534_string = "idle"; // 0x10fa PushS
	PlayAnimation(var_533_string, var_534_string); // 0x10fb Func
	
Label_4349:
	WaitForAnimEnd(); // 0x10fd Func
	var_535_object = var_3_object; // 0x10ff PushT
	if(var_535_object == 0) goto Label_4354; // 0x1100 JumpB
	goto Label_4359; // 0x1101 Jump
	
Label_4354:
	var_536_string = "all"; // 0x1102 PushS
	var_537_string = "idle"; // 0x1103 PushS
	PlayAnimation(var_536_string, var_537_string); // 0x1104 Func
	goto Label_4349; // 0x1106 Jump
}


func_3760(var_0_bool, var_1195_int, var_1196_object)
{
	var_1198_object = Obj(); var_1199_bool = 0; var_1200_int = 0; var_1201_bool = 0; var_1202_object = Obj(); var_1203_bool = 0; var_1204_int = 0; var_1205_bool = 0; // 0xeb0 PushV
	var_0_bool = var_1196_object; // 0xeb1 TMov
	var_1206_bool = 0; var_1207_object = Obj(); var_1208_float = 0; // 0xeb2 PushV
	var_1207_object = var_1196_object; // 0xeb3 Mov
	var_1208_float = 70.0; // 0xeb4 MovF
	func_5237(var_1207_object, var_1208_float); // 0xeb5 NEW_2
	var_1209_bool = var_1206_bool == 0; // 0xeb7 Not
	if(var_1209_bool == 0) goto Label_3771; // 0xeb8 JumpB
	var_1195_int = -2; // 0xeb9 MovI
	return 8; // 0xeba Return
	
Label_3771:
	CreateDialog(var_1202_object); // 0xebb Func
	var_1210_int = 0; // 0xebd PushV
	func_5739(var_1210_int); // 0xebe NEW_2
	SetNPCName(var_1210_int); // 0xec0 ObjFunc
	var_1211_int = 0; // 0xec2 PushV
	func_5737(var_1211_int); // 0xec3 NEW_2
	SetNPCDescription(var_1211_int); // 0xec5 ObjFunc
	var_1212_string = ""; // 0xec7 PushV
	func_5741(var_1212_string); // 0xec8 NEW_2
	SetPhoto(var_1212_string); // 0xeca ObjFunc
	var_1213_string = ""; // 0xecc PushV
	func_5743(var_1213_string); // 0xecd NEW_2
	SetPhoto2(var_1213_string); // 0xecf ObjFunc
	var_1214_int = 0; // 0xed1 PushV
	func_6536(var_1214_int); // 0xed2 NEW_2
	SetPlayerName(var_1214_int); // 0xed4 ObjFunc
	var_1204_int = -1; // 0xed6 MovI
	IsOverrideActive(var_1203_bool); // 0xed7 Func
	var_1215_bool = var_1203_bool; // 0xed9 Push
	if(var_1215_bool == 0) goto Label_3805; // 0xeda JumpB
	var_1195_int = -2; // 0xedb MovI
	return 8; // 0xedc Return
	
Label_3805:
	DoDialog(var_1202_object); // 0xedd Func
	var_1216_bool = 0; var_1217_object = Obj(); // 0xedf PushV
	var_1218_object = Obj(); // 0xee0 PushV
	func_5604(var_1218_object); // 0xee1 NEW_2
	var_1217_object = var_1218_object; // 0xee2 Mov
	func_5324(var_1216_bool, var_1217_object); // 0xee4 NEW_2
	var_1219_object = Obj(); var_1220_object = Obj(); // 0xee6 PushV
	var_1219_object = var_1196_object; // 0xee7 Mov
	var_1220_object = var_1202_object; // 0xee8 Mov
	TaskCall(20); // 0xee9 TaskCall
	func_3841(var_1221_object, var_1222_object, var_1223_string, var_1224_bool, var_1219_object, var_1220_object); // 0xeea NEW_2
	TaskReturn(); // 0xeeb TaskReturn
	IsDialogEnd(var_1205_bool); // 0xeed ObjFunc
	
Label_3823:
	var_1249_bool = var_1205_bool == 0; // 0xeef Not
	if(var_1249_bool == 0) goto Label_3830; // 0xef0 JumpB
	sync(); // 0xef1 Func
	IsDialogEnd(var_1205_bool); // 0xef3 ObjFunc
	goto Label_3823; // 0xef5 Jump
	
Label_3830:
	var_1250_object = Obj(); // 0xef6 PushV
	var_1250_object = var_1196_object; // 0xef7 Mov
	func_5306(); // 0xef8 NEW_2
	StopDialog(var_1202_object); // 0xefa Func
	GetReturnValue(var_1204_int); // 0xefc ObjFunc
	var_1195_int = var_1204_int; // 0xefe Mov
	return 8; // 0xeff Return
}


func_5814()
{
	var_186_string = "ood4Grif4"; // 0x16b7 PushS
	var_187_int = 1; // 0x16b8 PushI
	SetVariable(var_186_string, var_187_int); // 0x16b9 Func
	return 0; // 0x16bb Return
}


func_5306()
{
	var_435_bool = 0; var_436_bool = 0; // 0x14ba PushV
	var_437_bool = 1; // 0x14bb PushB
	CameraSwitchToNormal(var_437_bool); // 0x14bc Func
	var_438_bool = 0; // 0x14be PushV
	func_5745(var_438_bool); // 0x14bf NEW_2
	if(var_438_bool == 0) goto Label_5315; // 0x14c1 JumpB
	goto Label_5323; // 0x14c2 Jump
	
Label_5323:
	return 2; // 0x14cb Return
	
Label_5315:
	var_439_string = "head"; // 0x14c3 PushS
	HasAnimationTrack(var_436_bool, var_439_string); // 0x14c4 Func
	var_440_bool = var_436_bool; // 0x14c6 Push
	if(var_440_bool == 0) goto Label_5323; // 0x14c7 JumpB
	var_441_string = "head"; // 0x14c8 PushS
	UnlookAsync(var_441_string); // 0x14c9 Func
}


func_5820()
{
	var_75_string = "ood2Grif2"; // 0x16bd PushS
	var_76_int = 1; // 0x16be PushI
	SetVariable(var_75_string, var_76_int); // 0x16bf Func
	return 0; // 0x16c1 Return
}


func_5826()
{
	var_147_string = "ood2Grif3"; // 0x16c3 PushS
	var_148_int = 1; // 0x16c4 PushI
	SetVariable(var_147_string, var_148_int); // 0x16c5 Func
	return 0; // 0x16c7 Return
}


func_3266(var_2_object, var_1104_string)
{
	var_1105_bool = 0; // 0xcc3 PushV
	func_5745(var_1105_bool); // 0xcc4 NEW_2
	var_1106_bool = var_1105_bool == 0; // 0xcc6 Not
	if(var_1106_bool == 0) goto Label_3273; // 0xcc7 JumpB
	return 0; // 0xcc8 Return
	
Label_3273:
	var_1107_bool = var_1104_string == var_2_object; // 0xcc9 Eq
	if(var_1107_bool == 0) goto Label_3276; // 0xcca JumpB
	return 0; // 0xccb Return
	
Label_3276:
	var_1108_string = ""; var_1109_bool = 0; // 0xccc PushV
	var_1108_string = var_1104_string; // 0xccd Mov
	var_1110_string = ""; // 0xcce PushS
	var_1111_bool = var_1104_string == var_1110_string; // 0xccf Eq
	if(var_1111_bool == 0) goto Label_3283; // 0xcd0 JumpB
	var_1109_bool = 0; // 0xcd1 MovB
	goto Label_3284; // 0xcd2 Jump
	
Label_3284:
	func_5539(var_1108_string, var_1109_bool); // 0xcd4 NEW_2
	var_2_object = var_1104_string; // 0xcd6 TMov
	return 0; // 0xcd7 Return
	
Label_3283:
	var_1109_bool = 1; // 0xcd3 MovB
}


func_5832()
{
	var_159_string = "ood2Grif4"; // 0x16c9 PushS
	var_160_int = 1; // 0x16ca PushI
	SetVariable(var_159_string, var_160_int); // 0x16cb Func
	return 0; // 0x16cd Return
}


func_6345(var_83_object)
{
	var_84_object = Obj(); var_85_object = Obj(); var_86_object = Obj(); var_87_object = Obj(); // 0x18c9 PushV
	GetMainOutdoorScene(var_86_object); // 0x18ca Func
	var_88_bool = var_86_object == 0; // 0x18cc NullEq
	if(var_88_bool == 0) goto Label_6356; // 0x18cd JumpB
	var_89_string = "Can't find main outdoor scene"; // 0x18ce PushS
	Trace(var_89_string); // 0x18cf Func
	var_87_object = 0; // 0x18d1 SetNull
	var_83_object = var_87_object; // 0x18d2 Mov
	return 4; // 0x18d3 Return
	
Label_6356:
	GetMap(var_87_object); // 0x18d4 ObjFunc
	var_83_object = var_87_object; // 0x18d6 Mov
	return 4; // 0x18d7 Return
}


func_5324(var_287_bool, var_288_object)
{
	var_292_int = 0; var_293_int = 0; var_294_int = 0; var_295_int = 0; // 0x14cc PushV
	var_296_string = "voice_common"; // 0x14cd PushS
	GetVariable(var_296_string, var_294_int); // 0x14ce Func
	var_297_int = var_294_int; // 0x14d0 Push
	if(var_297_int == 0) goto Label_5362; // 0x14d1 JumpB
	var_298_bool = 0; var_299_object = Obj(); // 0x14d2 PushV
	var_299_object = var_288_object; // 0x14d3 Mov
	func_5382(var_299_object); // 0x14d4 NEW_2
	var_328_bool = var_298_bool == 0; // 0x14d6 Not
	if(var_328_bool == 0) goto Label_5344; // 0x14d7 JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x14d8 PushV
	var_330_object = var_288_object; // 0x14d9 Mov
	func_5419(var_330_object); // 0x14da NEW_2
	var_359_bool = var_329_bool == 0; // 0x14dc Not
	if(var_359_bool == 0) goto Label_5344; // 0x14dd JumpB
	var_287_bool = 0; // 0x14de MovB
	return 4; // 0x14df Return
	
Label_5344:
	var_360_int = 2; // 0x14e0 PushI
	irand(var_295_int, var_360_int); // 0x14e1 Func
	var_361_int = var_295_int; // 0x14e3 Push
	if(var_361_int == 0) goto Label_5357; // 0x14e4 JumpB
	var_362_string = "voice_common"; // 0x14e5 PushS
	var_363_int = 1; // 0x14e6 PushI
	var_364_int = var_294_int + var_363_int; // 0x14e7 Add
	var_365_int = 3; // 0x14e8 PushI
	var_366_int = var_364_int / var_365_int; // 0x14e9 Mod
	SetVariable(var_362_string, var_366_int); // 0x14ea Func
	goto Label_5361; // 0x14ec Jump
	
Label_5361:
	goto Label_5380; // 0x14f1 Jump
	
Label_5380:
	var_287_bool = 1; // 0x1504 MovB
	return 4; // 0x1505 Return
	
Label_5357:
	var_367_string = "voice_common"; // 0x14ed PushS
	var_368_int = 0; // 0x14ee PushI
	SetVariable(var_367_string, var_368_int); // 0x14ef Func
	
Label_5362:
	var_369_bool = 0; var_370_object = Obj(); // 0x14f2 PushV
	var_370_object = var_288_object; // 0x14f3 Mov
	func_5419(var_370_object); // 0x14f4 NEW_2
	var_371_bool = var_369_bool == 0; // 0x14f6 Not
	if(var_371_bool == 0) goto Label_5376; // 0x14f7 JumpB
	var_372_bool = 0; var_373_object = Obj(); // 0x14f8 PushV
	var_373_object = var_288_object; // 0x14f9 Mov
	func_5382(var_373_object); // 0x14fa NEW_2
	var_374_bool = var_372_bool == 0; // 0x14fc Not
	if(var_374_bool == 0) goto Label_5376; // 0x14fd JumpB
	var_287_bool = 0; // 0x14fe MovB
	return 4; // 0x14ff Return
	
Label_5376:
	var_375_string = "voice_common"; // 0x1500 PushS
	var_376_int = 1; // 0x1501 PushI
	SetVariable(var_375_string, var_376_int); // 0x1502 Func
}


func_5838()
{
	var_79_string = "d2q02"; // 0x16cf PushS
	var_80_int = 7; // 0x16d0 PushI
	SetVariable(var_79_string, var_80_int); // 0x16d1 Func
	func_6265(); // 0x16d4 NEW_2
	return 0; // 0x16d6 Return
}


func_4821(var_2_object, var_1411_string)
{
	var_1412_bool = 0; // 0x12d6 PushV
	func_5745(var_1412_bool); // 0x12d7 NEW_2
	var_1413_bool = var_1412_bool == 0; // 0x12d9 Not
	if(var_1413_bool == 0) goto Label_4828; // 0x12da JumpB
	return 0; // 0x12db Return
	
Label_4828:
	var_1414_bool = var_1411_string == var_2_object; // 0x12dc Eq
	if(var_1414_bool == 0) goto Label_4831; // 0x12dd JumpB
	return 0; // 0x12de Return
	
Label_4831:
	var_1415_string = ""; var_1416_bool = 0; // 0x12df PushV
	var_1415_string = var_1411_string; // 0x12e0 Mov
	var_1417_string = ""; // 0x12e1 PushS
	var_1418_bool = var_1411_string == var_1417_string; // 0x12e2 Eq
	if(var_1418_bool == 0) goto Label_4838; // 0x12e3 JumpB
	var_1416_bool = 0; // 0x12e4 MovB
	goto Label_4839; // 0x12e5 Jump
	
Label_4839:
	func_5539(var_1415_string, var_1416_bool); // 0x12e7 NEW_2
	var_2_object = var_1411_string; // 0x12e9 TMov
	return 0; // 0x12ea Return
	
Label_4838:
	var_1416_bool = 1; // 0x12e6 MovB
}


func_5847(var_132_object)
{
	var_134_object = Obj(); var_135_object = Obj(); // 0x16d7 PushV
	var_136_string = "Revolver is given"; // 0x16d8 PushS
	Trace(var_136_string); // 0x16d9 Func
	CreateInvItem(var_135_object); // 0x16db Func
	var_137_string = "Revolver"; // 0x16dd PushS
	SetItemName(var_137_string); // 0x16de ObjFunc
	var_138_string = "durability"; // 0x16e0 PushS
	var_139_int = 30; // 0x16e1 PushI
	SetProperty(var_138_string, var_139_int); // 0x16e2 ObjFunc
	var_140_object = Obj(); var_141_object = Obj(); var_142_int = 0; // 0x16e4 PushV
	var_140_object = var_132_object; // 0x16e5 Mov
	var_141_object = var_135_object; // 0x16e6 Mov
	var_142_int = 1; // 0x16e7 MovI
	func_5661(var_141_object, var_142_int); // 0x16e8 NEW_2
	return 2; // 0x16ea Return
}


func_6362()
{
	var_94_bool = 0; var_95_int = 0; var_96_int = 0; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0; // 0x18da PushV
	var_102_int = 0; // 0x18db PushI
	ClearSubContainer(var_102_int); // 0x18dc Func
	var_103_int = 0; // 0x18de PushV
	func_5698(var_103_int); // 0x18df NEW_2
	var_100_int = var_103_int; // 0x18e0 Mov
	var_104_int = 0; var_105_string = ""; // 0x18e2 PushV
	var_105_string = "Rifle"; // 0x18e3 MovS
	func_6531(var_104_int, var_105_string); // 0x18e4 NEW_2
	var_108_int = 0; // 0x18e6 PushI
	var_109_int = 1; // 0x18e7 PushI
	AddItem(var_98_bool, var_104_int, var_108_int, var_109_int); // 0x18e8 Func
	var_110_int = 0; var_111_string = ""; // 0x18ea PushV
	var_111_string = "Revolver"; // 0x18eb MovS
	func_6531(var_110_int, var_111_string); // 0x18ec NEW_2
	var_112_int = 0; // 0x18ee PushI
	var_113_int = 1; // 0x18ef PushI
	AddItem(var_98_bool, var_110_int, var_112_int, var_113_int); // 0x18f0 Func
	var_114_int = 0; var_115_string = ""; // 0x18f2 PushV
	var_115_string = "Knife"; // 0x18f3 MovS
	func_6531(var_114_int, var_115_string); // 0x18f4 NEW_2
	var_116_int = 0; // 0x18f6 PushI
	var_117_int = 1; // 0x18f7 PushI
	AddItem(var_98_bool, var_114_int, var_116_int, var_117_int); // 0x18f8 Func
	var_118_int = 10; // 0x18fa PushI
	var_119_bool = var_100_int != var_118_int; // 0x18fb Neq
	if(var_119_bool == 0) goto Label_6406; // 0x18fc JumpB
	var_120_int = 0; var_121_string = ""; // 0x18fd PushV
	var_121_string = "tvirin"; // 0x18fe MovS
	func_6531(var_120_int, var_121_string); // 0x18ff NEW_2
	var_122_int = 0; // 0x1901 PushI
	var_123_int = 1; // 0x1902 PushI
	AddItem(var_98_bool, var_120_int, var_122_int, var_123_int); // 0x1903 Func
	goto Label_6414; // 0x1905 Jump
	
Label_6414:
	var_124_int = 0; var_125_string = ""; // 0x190e PushV
	var_125_string = "lockpick"; // 0x190f MovS
	func_6531(var_124_int, var_125_string); // 0x1910 NEW_2
	var_126_int = 0; // 0x1912 PushI
	var_127_int = 3; // 0x1913 PushI
	AddItem(var_98_bool, var_124_int, var_126_int, var_127_int); // 0x1914 Func
	var_128_string = ""; var_129_int = 0; var_130_int = 0; // 0x1916 PushV
	var_128_string = "Scalpel"; // 0x1917 MovS
	var_129_int = 1; // 0x1918 MovI
	var_130_int = 2; // 0x1919 MovI
	func_5576(var_128_string, var_129_int, var_130_int); // 0x191a NEW_2
	var_139_string = ""; var_140_int = 0; var_141_int = 0; var_142_int = 0; var_143_int = 0; // 0x191c PushV
	var_139_string = "revolver_ammo"; // 0x191d MovS
	var_140_int = 1; // 0x191e MovI
	var_141_int = 1; // 0x191f MovI
	var_142_int = 5; // 0x1920 MovI
	var_143_int = 10; // 0x1921 MovI
	func_5587(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int); // 0x1922 NEW_2
	var_156_string = ""; var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; // 0x1924 PushV
	var_156_string = "rifle_ammo"; // 0x1925 MovS
	var_157_int = 1; // 0x1926 MovI
	var_158_int = 1; // 0x1927 MovI
	var_159_int = 5; // 0x1928 MovI
	var_160_int = 20; // 0x1929 MovI
	func_5587(var_156_string, var_157_int, var_158_int, var_159_int, var_160_int); // 0x192a NEW_2
	var_161_int = 100; // 0x192c PushI
	irand(var_99_int, var_161_int); // 0x192d Func
	var_162_int = 0; // 0x192f PushI
	var_163_bool = var_99_int != var_162_int; // 0x1930 Neq
	if(var_163_bool == 0) goto Label_6457; // 0x1931 JumpB
	var_164_int = 0; var_165_string = ""; // 0x1932 PushV
	var_165_string = "kerosene"; // 0x1933 MovS
	func_6531(var_164_int, var_165_string); // 0x1934 NEW_2
	var_166_int = 0; // 0x1936 PushI
	AddItem(var_98_bool, var_164_int, var_166_int, var_99_int); // 0x1937 Func
	
Label_6457:
	var_167_int = 3; // 0x1939 PushI
	var_168_bool = var_100_int >= var_167_int; // 0x193a GE
	if(var_168_bool == 0) goto Label_6476; // 0x193b JumpB
	var_169_int = 0; var_170_string = ""; // 0x193c PushV
	var_170_string = "halfboot_repel"; // 0x193d MovS
	func_6531(var_169_int, var_170_string); // 0x193e NEW_2
	var_171_int = 0; // 0x1940 PushI
	var_172_int = 1; // 0x1941 PushI
	AddItem(var_98_bool, var_169_int, var_171_int, var_172_int); // 0x1942 Func
	var_173_int = 0; var_174_string = ""; // 0x1944 PushV
	var_174_string = "boot_repel"; // 0x1945 MovS
	func_6531(var_173_int, var_174_string); // 0x1946 NEW_2
	var_175_int = 0; // 0x1948 PushI
	var_176_int = 1; // 0x1949 PushI
	AddItem(var_98_bool, var_173_int, var_175_int, var_176_int); // 0x194a Func
	
Label_6476:
	var_177_int = 9; // 0x194c PushI
	var_178_bool = var_100_int >= var_177_int; // 0x194d GE
	if(var_178_bool == 0) goto Label_6503; // 0x194e JumpB
	var_179_int = 0; var_180_string = ""; // 0x194f PushV
	var_180_string = "boot_army"; // 0x1950 MovS
	func_6531(var_179_int, var_180_string); // 0x1951 NEW_2
	var_181_int = 0; // 0x1953 PushI
	var_182_int = 1; // 0x1954 PushI
	AddItem(var_98_bool, var_179_int, var_181_int, var_182_int); // 0x1955 Func
	var_183_int = 0; var_184_string = ""; // 0x1957 PushV
	var_184_string = "balahon"; // 0x1958 MovS
	func_6531(var_183_int, var_184_string); // 0x1959 NEW_2
	var_185_int = 0; // 0x195b PushI
	var_186_int = 1; // 0x195c PushI
	AddItem(var_98_bool, var_183_int, var_185_int, var_186_int); // 0x195d Func
	var_187_int = 0; var_188_string = ""; // 0x195f PushV
	var_188_string = "glove_army"; // 0x1960 MovS
	func_6531(var_187_int, var_188_string); // 0x1961 NEW_2
	var_189_int = 0; // 0x1963 PushI
	var_190_int = 1; // 0x1964 PushI
	AddItem(var_98_bool, var_187_int, var_189_int, var_190_int); // 0x1965 Func
	
Label_6503:
	var_191_int = 0; // 0x1967 PushV
	func_6553(var_191_int); // 0x1968 NEW_2
	var_101_int = var_191_int; // 0x1969 Mov
	var_195_int = 0; // 0x196b PushI
	var_196_bool = var_101_int == var_195_int; // 0x196c Eq
	if(var_196_bool == 0) goto Label_6519; // 0x196d JumpB
	var_197_int = 0; var_198_string = ""; // 0x196e PushV
	var_198_string = "Gun_danko"; // 0x196f MovS
	func_6531(var_197_int, var_198_string); // 0x1970 NEW_2
	var_199_int = 0; // 0x1972 PushI
	var_200_int = 1; // 0x1973 PushI
	AddItem(var_98_bool, var_197_int, var_199_int, var_200_int); // 0x1974 Func
	goto Label_6530; // 0x1976 Jump
	
Label_6530:
	return 8; // 0x1982 Return
	
Label_6519:
	var_201_int = 2; // 0x1977 PushI
	var_202_bool = var_101_int == var_201_int; // 0x1978 Eq
	if(var_202_bool == 0) goto Label_6530; // 0x1979 JumpB
	var_203_int = 0; var_204_string = ""; // 0x197a PushV
	var_204_string = "Gun"; // 0x197b MovS
	func_6531(var_203_int, var_204_string); // 0x197c NEW_2
	var_205_int = 0; // 0x197e PushI
	var_206_int = 1; // 0x197f PushI
	AddItem(var_98_bool, var_203_int, var_205_int, var_206_int); // 0x1980 Func
	
Label_6406:
	var_207_int = 0; var_208_string = ""; // 0x1906 PushV
	var_208_string = "tvirin"; // 0x1907 MovS
	func_6531(var_207_int, var_208_string); // 0x1908 NEW_2
	var_209_int = 0; // 0x190a PushI
	var_210_int = 4; // 0x190b PushI
	AddItem(var_98_bool, var_207_int, var_209_int, var_210_int); // 0x190c Func
}


func_5868()
{
	var_75_string = "ood4Grif1"; // 0x16ed PushS
	var_76_int = 1; // 0x16ee PushI
	SetVariable(var_75_string, var_76_int); // 0x16ef Func
	return 0; // 0x16f1 Return
}


func_5874()
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x16f2 PushV
	var_81_string = "d4q03"; // 0x16f3 PushS
	var_82_int = 2; // 0x16f4 PushI
	SetVariable(var_81_string, var_82_int); // 0x16f5 Func
	var_83_object = Obj(); // 0x16f7 PushV
	func_6345(var_83_object); // 0x16f8 NEW_2
	var_80_object = var_83_object; // 0x16f9 Mov
	var_90_string = "d4q03GrifGotoAlexandr"; // 0x16fb PushS
	var_91_string = "pt_map_alexandr"; // 0x16fc PushS
	var_92_int = 0; // 0x16fd PushI
	var_93_int = 515331; // 0x16fe PushI
	var_94_float = 0; // 0x16ff PushV
	func_5693(var_94_float); // 0x1700 NEW_2
	AddMark(var_90_string, var_91_string, var_92_int, var_93_int, var_94_float); // 0x1702 ObjFunc
	var_97_string = "d4q03GrifGotoAlexandrSelf"; // 0x1704 PushS
	var_98_string = "pt_map_grif"; // 0x1705 PushS
	var_99_int = 0; // 0x1706 PushI
	var_100_int = 515332; // 0x1707 PushI
	var_101_float = 0; // 0x1708 PushV
	func_5693(var_101_float); // 0x1709 NEW_2
	AddMark(var_97_string, var_98_string, var_99_int, var_100_int, var_101_float); // 0x170b ObjFunc
	func_6278(); // 0x170e NEW_2
	return 2; // 0x1710 Return
}


func_1787(var_0_bool, var_682_int, var_683_object)
{
	var_685_object = Obj(); var_686_bool = 0; var_687_int = 0; var_688_bool = 0; var_689_object = Obj(); var_690_bool = 0; var_691_int = 0; var_692_bool = 0; // 0x6fb PushV
	var_0_bool = var_683_object; // 0x6fc TMov
	var_693_bool = 0; var_694_object = Obj(); var_695_float = 0; // 0x6fd PushV
	var_694_object = var_683_object; // 0x6fe Mov
	var_695_float = 70.0; // 0x6ff MovF
	func_5237(var_694_object, var_695_float); // 0x700 NEW_2
	var_696_bool = var_693_bool == 0; // 0x702 Not
	if(var_696_bool == 0) goto Label_1798; // 0x703 JumpB
	var_682_int = -2; // 0x704 MovI
	return 8; // 0x705 Return
	
Label_1798:
	CreateDialog(var_689_object); // 0x706 Func
	var_697_int = 0; // 0x708 PushV
	func_5739(var_697_int); // 0x709 NEW_2
	SetNPCName(var_697_int); // 0x70b ObjFunc
	var_698_int = 0; // 0x70d PushV
	func_5737(var_698_int); // 0x70e NEW_2
	SetNPCDescription(var_698_int); // 0x710 ObjFunc
	var_699_string = ""; // 0x712 PushV
	func_5741(var_699_string); // 0x713 NEW_2
	SetPhoto(var_699_string); // 0x715 ObjFunc
	var_700_string = ""; // 0x717 PushV
	func_5743(var_700_string); // 0x718 NEW_2
	SetPhoto2(var_700_string); // 0x71a ObjFunc
	var_701_int = 0; // 0x71c PushV
	func_6536(var_701_int); // 0x71d NEW_2
	SetPlayerName(var_701_int); // 0x71f ObjFunc
	var_691_int = -1; // 0x721 MovI
	IsOverrideActive(var_690_bool); // 0x722 Func
	var_702_bool = var_690_bool; // 0x724 Push
	if(var_702_bool == 0) goto Label_1832; // 0x725 JumpB
	var_682_int = -2; // 0x726 MovI
	return 8; // 0x727 Return
	
Label_1832:
	DoDialog(var_689_object); // 0x728 Func
	var_703_bool = 0; var_704_object = Obj(); // 0x72a PushV
	var_705_object = Obj(); // 0x72b PushV
	func_5604(var_705_object); // 0x72c NEW_2
	var_704_object = var_705_object; // 0x72d Mov
	func_5324(var_703_bool, var_704_object); // 0x72f NEW_2
	var_706_object = Obj(); var_707_object = Obj(); // 0x731 PushV
	var_706_object = var_683_object; // 0x732 Mov
	var_707_object = var_689_object; // 0x733 Mov
	TaskCall(8); // 0x734 TaskCall
	func_1868(var_708_object, var_709_object, var_710_string, var_711_bool, var_706_object, var_707_object); // 0x735 NEW_2
	TaskReturn(); // 0x736 TaskReturn
	IsDialogEnd(var_692_bool); // 0x738 ObjFunc
	
Label_1850:
	var_753_bool = var_692_bool == 0; // 0x73a Not
	if(var_753_bool == 0) goto Label_1857; // 0x73b JumpB
	sync(); // 0x73c Func
	IsDialogEnd(var_692_bool); // 0x73e ObjFunc
	goto Label_1850; // 0x740 Jump
	
Label_1857:
	var_754_object = Obj(); // 0x741 PushV
	var_754_object = var_683_object; // 0x742 Mov
	func_5306(); // 0x743 NEW_2
	StopDialog(var_689_object); // 0x745 Func
	GetReturnValue(var_691_int); // 0x747 ObjFunc
	var_682_int = var_691_int; // 0x749 Mov
	return 8; // 0x74a Return
}


func_3841(var_0_bool, var_1_object, var_2_object, var_3_object, var_1219_object, var_1220_object)
{
	var_0_bool = var_1220_object; // 0xf02 TMov
	var_1_object = var_1219_object; // 0xf03 TMov
	var_3_object = 0; // 0xf04 TMovB
	var_1225_int = 1; // 0xf05 PushI
	if(var_1225_int == 0) goto Label_3869; // 0xf06 JumpB
	var_1226_string = ""; // 0xf07 PushV
	var_1226_string = "Sly"; // 0xf08 MovS
	func_3899(var_1220_object, var_1226_string); // 0xf09 NEW_2
	var_1234_int = 541830; // 0xf0b PushI
	SetMessage(var_1234_int); // 0xf0c TObjFunc
	ClearReplies(); // 0xf0e TObjFunc
	var_1235_int = 514139; // 0xf10 PushI
	var_1236_int = -1; // 0xf11 PushI
	var_1237_int = 15353; // 0xf12 PushI
	AddReply(var_1235_int, var_1236_int, var_1237_int); // 0xf13 TObjFunc
	var_1238_int = 541833; // 0xf15 PushI
	var_1239_int = -1; // 0xf16 PushI
	var_1240_int = 44048; // 0xf17 PushI
	AddReply(var_1238_int, var_1239_int, var_1240_int); // 0xf18 TObjFunc
	goto Label_3869; // 0xf1a Jump
	
Label_3869:
	var_1241_bool = 0; // 0xf1d PushV
	func_5745(var_1241_bool); // 0xf1e NEW_2
	if(var_1241_bool == 0) goto Label_3884; // 0xf20 JumpB
	
Label_3873:
	lshWaitForAnimEnd(); // 0xf21 Func
	var_1242_object = var_3_object; // 0xf23 PushT
	if(var_1242_object == 0) goto Label_3878; // 0xf24 JumpB
	goto Label_3883; // 0xf25 Jump
	
Label_3883:
	goto Label_3898; // 0xf2b Jump
	
Label_3898:
	return 0; // 0xf3a Return
	
Label_3878:
	var_1243_string = ""; // 0xf26 PushV
	var_1243_string = var_2_object; // 0xf27 MovT
	func_5523(var_1243_string); // 0xf28 NEW_2
	goto Label_3873; // 0xf2a Jump
	
Label_3884:
	var_1244_string = "all"; // 0xf2c PushS
	var_1245_string = "idle"; // 0xf2d PushS
	PlayAnimation(var_1244_string, var_1245_string); // 0xf2e Func
	
Label_3888:
	WaitForAnimEnd(); // 0xf30 Func
	var_1246_object = var_3_object; // 0xf32 PushT
	if(var_1246_object == 0) goto Label_3893; // 0xf33 JumpB
	goto Label_3898; // 0xf34 Jump
	
Label_3893:
	var_1247_string = "all"; // 0xf35 PushS
	var_1248_string = "idle"; // 0xf36 PushS
	PlayAnimation(var_1247_string, var_1248_string); // 0xf37 Func
	goto Label_3888; // 0xf39 Jump
}


func_5382(var_298_bool)
{
	var_300_string = ""; var_301_int = 0; var_302_bool = 0; var_303_int = 0; var_304_string = ""; var_305_string = ""; var_306_int = 0; var_307_bool = 0; var_308_int = 0; var_309_string = ""; // 0x1506 PushV
	var_305_string = "c"; // 0x1507 MovS
	var_306_int = 0; // 0x1508 MovI
	
Label_5385:
	var_310_int = 1; // 0x1509 PushI
	if(var_310_int == 0) goto Label_5398; // 0x150a JumpB
	var_311_int = 1; // 0x150b PushI
	var_312_int = var_306_int + var_311_int; // 0x150c Add
	var_313_int = var_305_string + var_312_int; // 0x150d Add
	HasProperty(var_313_int, var_307_bool); // 0x150e ObjFunc
	var_314_bool = var_307_bool == 0; // 0x1510 Not
	if(var_314_bool == 0) goto Label_5395; // 0x1511 JumpB
	goto Label_5398; // 0x1512 Jump
	
Label_5398:
	var_315_bool = var_306_int == 0; // 0x1516 Not
	if(var_315_bool == 0) goto Label_5402; // 0x1517 JumpB
	var_298_bool = 0; // 0x1518 MovB
	return 10; // 0x1519 Return
	
Label_5402:
	var_308_int = 0; // 0x151a MovI
	var_316_int = 1; // 0x151b PushI
	var_317_bool = var_306_int > var_316_int; // 0x151c GT
	if(var_317_bool == 0) goto Label_5408; // 0x151d JumpB
	irand(var_308_int, var_306_int); // 0x151e Func
	
Label_5408:
	var_318_int = 1; // 0x1520 PushI
	var_319_int = var_308_int + var_318_int; // 0x1521 Add
	var_320_int = var_305_string + var_319_int; // 0x1522 Add
	GetProperty(var_320_int, var_309_string); // 0x1523 ObjFunc
	var_321_bool = 0; var_322_string = ""; // 0x1525 PushV
	var_322_string = var_309_string; // 0x1526 Mov
	func_5554(var_321_bool, var_322_string); // 0x1527 NEW_2
	var_298_bool = var_321_bool; // 0x1528 Mov
	return 10; // 0x152a Return
	
Label_5395:
	var_327_int = 1; // 0x1513 PushI
	var_306_int = var_306_int + var_327_int; // 0x1514 Add2
	goto Label_5385; // 0x1515 Jump
}


func_4360(var_2_object, var_478_string)
{
	var_479_bool = 0; // 0x1109 PushV
	func_5745(var_479_bool); // 0x110a NEW_2
	var_480_bool = var_479_bool == 0; // 0x110c Not
	if(var_480_bool == 0) goto Label_4367; // 0x110d JumpB
	return 0; // 0x110e Return
	
Label_4367:
	var_481_bool = var_478_string == var_2_object; // 0x110f Eq
	if(var_481_bool == 0) goto Label_4370; // 0x1110 JumpB
	return 0; // 0x1111 Return
	
Label_4370:
	var_482_string = ""; var_483_bool = 0; // 0x1112 PushV
	var_482_string = var_478_string; // 0x1113 Mov
	var_484_string = ""; // 0x1114 PushS
	var_485_bool = var_478_string == var_484_string; // 0x1115 Eq
	if(var_485_bool == 0) goto Label_4377; // 0x1116 JumpB
	var_483_bool = 0; // 0x1117 MovB
	goto Label_4378; // 0x1118 Jump
	
Label_4378:
	func_5539(var_482_string, var_483_bool); // 0x111a NEW_2
	var_2_object = var_478_string; // 0x111c TMov
	return 0; // 0x111d Return
	
Label_4377:
	var_483_bool = 1; // 0x1119 MovB
}


func_3338(var_0_bool, var_1134_int, var_1135_object)
{
	var_1137_object = Obj(); var_1138_bool = 0; var_1139_int = 0; var_1140_bool = 0; var_1141_object = Obj(); var_1142_bool = 0; var_1143_int = 0; var_1144_bool = 0; // 0xd0a PushV
	var_0_bool = var_1135_object; // 0xd0b TMov
	var_1145_bool = 0; var_1146_object = Obj(); var_1147_float = 0; // 0xd0c PushV
	var_1146_object = var_1135_object; // 0xd0d Mov
	var_1147_float = 70.0; // 0xd0e MovF
	func_5237(var_1146_object, var_1147_float); // 0xd0f NEW_2
	var_1148_bool = var_1145_bool == 0; // 0xd11 Not
	if(var_1148_bool == 0) goto Label_3349; // 0xd12 JumpB
	var_1134_int = -2; // 0xd13 MovI
	return 8; // 0xd14 Return
	
Label_3349:
	CreateDialog(var_1141_object); // 0xd15 Func
	var_1149_int = 0; // 0xd17 PushV
	func_5739(var_1149_int); // 0xd18 NEW_2
	SetNPCName(var_1149_int); // 0xd1a ObjFunc
	var_1150_int = 0; // 0xd1c PushV
	func_5737(var_1150_int); // 0xd1d NEW_2
	SetNPCDescription(var_1150_int); // 0xd1f ObjFunc
	var_1151_string = ""; // 0xd21 PushV
	func_5741(var_1151_string); // 0xd22 NEW_2
	SetPhoto(var_1151_string); // 0xd24 ObjFunc
	var_1152_string = ""; // 0xd26 PushV
	func_5743(var_1152_string); // 0xd27 NEW_2
	SetPhoto2(var_1152_string); // 0xd29 ObjFunc
	var_1153_int = 0; // 0xd2b PushV
	func_6536(var_1153_int); // 0xd2c NEW_2
	SetPlayerName(var_1153_int); // 0xd2e ObjFunc
	var_1143_int = -1; // 0xd30 MovI
	IsOverrideActive(var_1142_bool); // 0xd31 Func
	var_1154_bool = var_1142_bool; // 0xd33 Push
	if(var_1154_bool == 0) goto Label_3383; // 0xd34 JumpB
	var_1134_int = -2; // 0xd35 MovI
	return 8; // 0xd36 Return
	
Label_3383:
	DoDialog(var_1141_object); // 0xd37 Func
	var_1155_bool = 0; var_1156_object = Obj(); // 0xd39 PushV
	var_1157_object = Obj(); // 0xd3a PushV
	func_5604(var_1157_object); // 0xd3b NEW_2
	var_1156_object = var_1157_object; // 0xd3c Mov
	func_5324(var_1155_bool, var_1156_object); // 0xd3e NEW_2
	var_1158_object = Obj(); var_1159_object = Obj(); // 0xd40 PushV
	var_1158_object = var_1135_object; // 0xd41 Mov
	var_1159_object = var_1141_object; // 0xd42 Mov
	TaskCall(16); // 0xd43 TaskCall
	func_3419(var_1160_object, var_1161_object, var_1162_string, var_1163_bool, var_1158_object, var_1159_object); // 0xd44 NEW_2
	TaskReturn(); // 0xd45 TaskReturn
	IsDialogEnd(var_1144_bool); // 0xd47 ObjFunc
	
Label_3401:
	var_1188_bool = var_1144_bool == 0; // 0xd49 Not
	if(var_1188_bool == 0) goto Label_3408; // 0xd4a JumpB
	sync(); // 0xd4b Func
	IsDialogEnd(var_1144_bool); // 0xd4d ObjFunc
	goto Label_3401; // 0xd4f Jump
	
Label_3408:
	var_1189_object = Obj(); // 0xd50 PushV
	var_1189_object = var_1135_object; // 0xd51 Mov
	func_5306(); // 0xd52 NEW_2
	StopDialog(var_1141_object); // 0xd54 Func
	GetReturnValue(var_1143_int); // 0xd56 ObjFunc
	var_1134_int = var_1143_int; // 0xd58 Mov
	return 8; // 0xd59 Return
}


func_5906()
{
	var_141_string = "ood4Grif2"; // 0x1713 PushS
	var_142_int = 1; // 0x1714 PushI
	SetVariable(var_141_string, var_142_int); // 0x1715 Func
	return 0; // 0x1717 Return
}


func_5912()
{
	var_75_string = "ood5Grif1"; // 0x1719 PushS
	var_76_int = 1; // 0x171a PushI
	SetVariable(var_75_string, var_76_int); // 0x171b Func
	return 0; // 0x171d Return
}


func_5918()
{
	var_113_string = "d5q01ThiefsWillHelp"; // 0x171f PushS
	var_114_int = 1; // 0x1720 PushI
	SetVariable(var_113_string, var_114_int); // 0x1721 Func
	var_115_string = "d5q01PlayCutscene"; // 0x1723 PushS
	var_116_int = 1; // 0x1724 PushI
	SetVariable(var_115_string, var_116_int); // 0x1725 Func
	func_6291(); // 0x1728 NEW_2
	return 0; // 0x172a Return
}


func_2346(var_2_object, var_931_string)
{
	var_932_bool = 0; // 0x92b PushV
	func_5745(var_932_bool); // 0x92c NEW_2
	var_933_bool = var_932_bool == 0; // 0x92e Not
	if(var_933_bool == 0) goto Label_2353; // 0x92f JumpB
	return 0; // 0x930 Return
	
Label_2353:
	var_934_bool = var_931_string == var_2_object; // 0x931 Eq
	if(var_934_bool == 0) goto Label_2356; // 0x932 JumpB
	return 0; // 0x933 Return
	
Label_2356:
	var_935_string = ""; var_936_bool = 0; // 0x934 PushV
	var_935_string = var_931_string; // 0x935 Mov
	var_937_string = ""; // 0x936 PushS
	var_938_bool = var_931_string == var_937_string; // 0x937 Eq
	if(var_938_bool == 0) goto Label_2363; // 0x938 JumpB
	var_936_bool = 0; // 0x939 MovB
	goto Label_2364; // 0x93a Jump
	
Label_2364:
	func_5539(var_935_string, var_936_bool); // 0x93c NEW_2
	var_2_object = var_931_string; // 0x93e TMov
	return 0; // 0x93f Return
	
Label_2363:
	var_936_bool = 1; // 0x93b MovB
}


func_5931()
{
	var_81_int = 1000; // 0x172c PushI
	SetReturnValue(var_81_int); // 0x172d ObjFunc
	return 0; // 0x172f Return
}


func_5419(var_329_bool)
{
	var_331_string = ""; var_332_int = 0; var_333_bool = 0; var_334_int = 0; var_335_string = ""; var_336_string = ""; var_337_int = 0; var_338_bool = 0; var_339_int = 0; var_340_string = ""; // 0x152b PushV
	var_341_string = "d"; // 0x152c PushS
	var_342_int = 0; // 0x152d PushV
	func_5698(var_342_int); // 0x152e NEW_2
	var_343_int = var_341_string + var_342_int; // 0x1530 Add
	var_344_string = "m"; // 0x1531 PushS
	var_336_string = var_343_int + var_344_string; // 0x1532 Add2
	var_337_int = 0; // 0x1533 MovI
	
Label_5428:
	var_345_int = 1; // 0x1534 PushI
	if(var_345_int == 0) goto Label_5441; // 0x1535 JumpB
	var_346_int = 1; // 0x1536 PushI
	var_347_int = var_337_int + var_346_int; // 0x1537 Add
	var_348_int = var_336_string + var_347_int; // 0x1538 Add
	HasProperty(var_348_int, var_338_bool); // 0x1539 ObjFunc
	var_349_bool = var_338_bool == 0; // 0x153b Not
	if(var_349_bool == 0) goto Label_5438; // 0x153c JumpB
	goto Label_5441; // 0x153d Jump
	
Label_5441:
	var_350_bool = var_337_int == 0; // 0x1541 Not
	if(var_350_bool == 0) goto Label_5445; // 0x1542 JumpB
	var_329_bool = 0; // 0x1543 MovB
	return 10; // 0x1544 Return
	
Label_5445:
	var_339_int = 0; // 0x1545 MovI
	var_351_int = 1; // 0x1546 PushI
	var_352_bool = var_337_int > var_351_int; // 0x1547 GT
	if(var_352_bool == 0) goto Label_5451; // 0x1548 JumpB
	irand(var_339_int, var_337_int); // 0x1549 Func
	
Label_5451:
	var_353_int = 1; // 0x154b PushI
	var_354_int = var_339_int + var_353_int; // 0x154c Add
	var_355_int = var_336_string + var_354_int; // 0x154d Add
	GetProperty(var_355_int, var_340_string); // 0x154e ObjFunc
	var_356_bool = 0; var_357_string = ""; // 0x1550 PushV
	var_357_string = var_340_string; // 0x1551 Mov
	func_5554(var_356_bool, var_357_string); // 0x1552 NEW_2
	var_329_bool = var_356_bool; // 0x1553 Mov
	return 10; // 0x1555 Return
	
Label_5438:
	var_358_int = 1; // 0x153e PushI
	var_337_int = var_337_int + var_358_int; // 0x153f Add2
	goto Label_5428; // 0x1540 Jump
}


func_5936()
{
	var_386_string = "KnowGrif"; // 0x1731 PushS
	var_387_int = 1; // 0x1732 PushI
	SetVariable(var_386_string, var_387_int); // 0x1733 Func
	return 0; // 0x1735 Return
}


func_5942()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x1736 PushV
	var_83_object = Obj(); // 0x1737 PushV
	func_6345(var_83_object); // 0x1738 NEW_2
	var_82_object = var_83_object; // 0x1739 Mov
	var_90_string = "d5q01GrifWantsMoney"; // 0x173b PushS
	var_91_string = "pt_map_grif"; // 0x173c PushS
	var_92_int = 1; // 0x173d PushI
	var_93_int = 515350; // 0x173e PushI
	var_94_float = 0; // 0x173f PushV
	func_5693(var_94_float); // 0x1740 NEW_2
	AddMark(var_90_string, var_91_string, var_92_int, var_93_int, var_94_float); // 0x1742 ObjFunc
	return 2; // 0x1744 Return
}


func_3899(var_2_object, var_1226_string)
{
	var_1227_bool = 0; // 0xf3c PushV
	func_5745(var_1227_bool); // 0xf3d NEW_2
	var_1228_bool = var_1227_bool == 0; // 0xf3f Not
	if(var_1228_bool == 0) goto Label_3906; // 0xf40 JumpB
	return 0; // 0xf41 Return
	
Label_3906:
	var_1229_bool = var_1226_string == var_2_object; // 0xf42 Eq
	if(var_1229_bool == 0) goto Label_3909; // 0xf43 JumpB
	return 0; // 0xf44 Return
	
Label_3909:
	var_1230_string = ""; var_1231_bool = 0; // 0xf45 PushV
	var_1230_string = var_1226_string; // 0xf46 Mov
	var_1232_string = ""; // 0xf47 PushS
	var_1233_bool = var_1226_string == var_1232_string; // 0xf48 Eq
	if(var_1233_bool == 0) goto Label_3916; // 0xf49 JumpB
	var_1231_bool = 0; // 0xf4a MovB
	goto Label_3917; // 0xf4b Jump
	
Label_3917:
	func_5539(var_1230_string, var_1231_bool); // 0xf4d NEW_2
	var_2_object = var_1226_string; // 0xf4f TMov
	return 0; // 0xf50 Return
	
Label_3916:
	var_1231_bool = 1; // 0xf4c MovB
}


func_5958()
{
	var_153_string = "d2KnowBigVladIsBad"; // 0x1747 PushS
	var_154_int = 1; // 0x1748 PushI
	SetVariable(var_153_string, var_154_int); // 0x1749 Func
	return 0; // 0x174b Return
}


func_1868(var_0_bool, var_1_object, var_2_object, var_3_object, var_706_object, var_707_object)
{
	var_0_bool = var_707_object; // 0x74d TMov
	var_1_object = var_706_object; // 0x74e TMov
	var_3_object = 0; // 0x74f TMovB
	var_712_int = 1; // 0x750 PushI
	if(var_712_int == 0) goto Label_1916; // 0x751 JumpB
	var_713_string = ""; // 0x752 PushV
	var_713_string = "Neutral"; // 0x753 MovS
	func_1946(var_707_object, var_713_string); // 0x754 NEW_2
	var_721_int = 509843; // 0x756 PushI
	SetMessage(var_721_int); // 0x757 TObjFunc
	ClearReplies(); // 0x759 TObjFunc
	var_722_bool = 0; // 0x75b PushV
	var_722_bool = 0; // 0x75c MovB
	var_723_bool = 0; var_724_object = Obj(); // 0x75d PushV
	var_724_object = var_1_object; // 0x75e MovT
	func_5994(var_724_object); // 0x75f NEW_2
	if(var_723_bool == 0) goto Label_1897; // 0x761 JumpB
	var_729_bool = 0; var_730_object = Obj(); // 0x762 PushV
	var_730_object = var_1_object; // 0x763 MovT
	func_6078(var_730_object); // 0x764 NEW_2
	var_735_bool = var_729_bool == 0; // 0x766 Not
	if(var_735_bool == 0) goto Label_1897; // 0x767 JumpB
	var_722_bool = 1; // 0x768 MovB
	
Label_1897:
	if(var_722_bool == 0) goto Label_1903; // 0x769 JumpB
	var_736_int = 509848; // 0x76a PushI
	var_737_int = 10848; // 0x76b PushI
	var_738_int = 10847; // 0x76c PushI
	AddReply(var_736_int, var_737_int, var_738_int); // 0x76d TObjFunc
	
Label_1903:
	var_739_int = 514117; // 0x76f PushI
	var_740_int = -1; // 0x770 PushI
	var_741_int = 15331; // 0x771 PushI
	AddReply(var_739_int, var_740_int, var_741_int); // 0x772 TObjFunc
	var_742_int = 514118; // 0x774 PushI
	var_743_int = -1; // 0x775 PushI
	var_744_int = 15332; // 0x776 PushI
	AddReply(var_742_int, var_743_int, var_744_int); // 0x777 TObjFunc
	goto Label_1916; // 0x779 Jump
	
Label_1916:
	var_745_bool = 0; // 0x77c PushV
	func_5745(var_745_bool); // 0x77d NEW_2
	if(var_745_bool == 0) goto Label_1931; // 0x77f JumpB
	
Label_1920:
	lshWaitForAnimEnd(); // 0x780 Func
	var_746_object = var_3_object; // 0x782 PushT
	if(var_746_object == 0) goto Label_1925; // 0x783 JumpB
	goto Label_1930; // 0x784 Jump
	
Label_1930:
	goto Label_1945; // 0x78a Jump
	
Label_1945:
	return 0; // 0x799 Return
	
Label_1925:
	var_747_string = ""; // 0x785 PushV
	var_747_string = var_2_object; // 0x786 MovT
	func_5523(var_747_string); // 0x787 NEW_2
	goto Label_1920; // 0x789 Jump
	
Label_1931:
	var_748_string = "all"; // 0x78b PushS
	var_749_string = "idle"; // 0x78c PushS
	PlayAnimation(var_748_string, var_749_string); // 0x78d Func
	
Label_1935:
	WaitForAnimEnd(); // 0x78f Func
	var_750_object = var_3_object; // 0x791 PushT
	if(var_750_object == 0) goto Label_1940; // 0x792 JumpB
	goto Label_1945; // 0x793 Jump
	
Label_1940:
	var_751_string = "all"; // 0x794 PushS
	var_752_string = "idle"; // 0x795 PushS
	PlayAnimation(var_751_string, var_752_string); // 0x796 Func
	goto Label_1935; // 0x798 Jump
}


func_5964()
{
	var_929_string = "ood5Grif2"; // 0x174d PushS
	var_930_int = 1; // 0x174e PushI
	SetVariable(var_929_string, var_930_int); // 0x174f Func
	return 0; // 0x1751 Return
}


func_337(var_0_bool, var_584_int, var_585_object)
{
	var_587_object = Obj(); var_588_bool = 0; var_589_int = 0; var_590_bool = 0; var_591_object = Obj(); var_592_bool = 0; var_593_int = 0; var_594_bool = 0; // 0x151 PushV
	var_0_bool = var_585_object; // 0x152 TMov
	var_595_bool = 0; var_596_object = Obj(); var_597_float = 0; // 0x153 PushV
	var_596_object = var_585_object; // 0x154 Mov
	var_597_float = 70.0; // 0x155 MovF
	func_5237(var_596_object, var_597_float); // 0x156 NEW_2
	var_598_bool = var_595_bool == 0; // 0x158 Not
	if(var_598_bool == 0) goto Label_348; // 0x159 JumpB
	var_584_int = -2; // 0x15a MovI
	return 8; // 0x15b Return
	
Label_348:
	CreateDialog(var_591_object); // 0x15c Func
	var_599_int = 0; // 0x15e PushV
	func_5739(var_599_int); // 0x15f NEW_2
	SetNPCName(var_599_int); // 0x161 ObjFunc
	var_600_int = 0; // 0x163 PushV
	func_5737(var_600_int); // 0x164 NEW_2
	SetNPCDescription(var_600_int); // 0x166 ObjFunc
	var_601_string = ""; // 0x168 PushV
	func_5741(var_601_string); // 0x169 NEW_2
	SetPhoto(var_601_string); // 0x16b ObjFunc
	var_602_string = ""; // 0x16d PushV
	func_5743(var_602_string); // 0x16e NEW_2
	SetPhoto2(var_602_string); // 0x170 ObjFunc
	var_603_int = 0; // 0x172 PushV
	func_6536(var_603_int); // 0x173 NEW_2
	SetPlayerName(var_603_int); // 0x175 ObjFunc
	var_593_int = -1; // 0x177 MovI
	IsOverrideActive(var_592_bool); // 0x178 Func
	var_604_bool = var_592_bool; // 0x17a Push
	if(var_604_bool == 0) goto Label_382; // 0x17b JumpB
	var_584_int = -2; // 0x17c MovI
	return 8; // 0x17d Return
	
Label_382:
	DoDialog(var_591_object); // 0x17e Func
	var_605_bool = 0; var_606_object = Obj(); // 0x180 PushV
	var_607_object = Obj(); // 0x181 PushV
	func_5604(var_607_object); // 0x182 NEW_2
	var_606_object = var_607_object; // 0x183 Mov
	func_5324(var_605_bool, var_606_object); // 0x185 NEW_2
	var_608_object = Obj(); var_609_object = Obj(); // 0x187 PushV
	var_608_object = var_585_object; // 0x188 Mov
	var_609_object = var_591_object; // 0x189 Mov
	TaskCall(4); // 0x18a TaskCall
	func_418(var_610_object, var_611_object, var_612_string, var_613_bool, var_608_object, var_609_object); // 0x18b NEW_2
	TaskReturn(); // 0x18c TaskReturn
	IsDialogEnd(var_594_bool); // 0x18e ObjFunc
	
Label_400:
	var_675_bool = var_594_bool == 0; // 0x190 Not
	if(var_675_bool == 0) goto Label_407; // 0x191 JumpB
	sync(); // 0x192 Func
	IsDialogEnd(var_594_bool); // 0x194 ObjFunc
	goto Label_400; // 0x196 Jump
	
Label_407:
	var_676_object = Obj(); // 0x197 PushV
	var_676_object = var_585_object; // 0x198 Mov
	func_5306(); // 0x199 NEW_2
	StopDialog(var_591_object); // 0x19b Func
	GetReturnValue(var_593_int); // 0x19d ObjFunc
	var_584_int = var_593_int; // 0x19f Mov
	return 8; // 0x1a0 Return
}


func_5970(var_487_bool)
{
	var_489_int = 0; var_490_string = ""; // 0x1753 PushV
	var_490_string = "ood1Grif1"; // 0x1754 MovS
	func_5625(var_489_int, var_490_string); // 0x1755 NEW_2
	var_493_int = 0; // 0x1757 PushI
	var_494_bool = var_489_int == var_493_int; // 0x1758 Eq
	if(var_494_bool == 0) goto Label_5980; // 0x1759 JumpB
	var_487_bool = 1; // 0x175a MovB
	return 0; // 0x175b Return
	
Label_5980:
	var_487_bool = 0; // 0x175c MovB
	return 0; // 0x175d Return
}


func_4946(var_0_bool)
{
	var_69_bool = 0; // 0x1352 PushV
	func_5232(var_69_bool); // 0x1353 NEW_2
	var_72_bool = var_69_bool == 0; // 0x1355 Not
	if(var_72_bool == 0) goto Label_4953; // 0x1356 JumpB
	Hold(); // 0x1357 Func
	
Label_4953:
	GetDirection(var_0_bool); // 0x1359 Func
	
Label_4955:
	func_5122(); // 0x135c NEW_2
	goto Label_4955; // 0x135e Jump
}


func_5462(var_542_bool, var_543_object)
{
	var_544_bool = 0; var_545_object = Obj(); var_546_float = 0; // 0x1557 PushV
	var_545_object = var_543_object; // 0x1558 Mov
	var_546_float = 70; // 0x1559 MovI
	func_5470(var_545_object, var_546_float); // 0x155a NEW_2
	var_542_bool = var_544_bool; // 0x155b Mov
	return 0; // 0x155d Return
}


func_3419(var_0_bool, var_1_object, var_2_object, var_3_object, var_1158_object, var_1159_object)
{
	var_0_bool = var_1159_object; // 0xd5c TMov
	var_1_object = var_1158_object; // 0xd5d TMov
	var_3_object = 0; // 0xd5e TMovB
	var_1164_int = 1; // 0xd5f PushI
	if(var_1164_int == 0) goto Label_3447; // 0xd60 JumpB
	var_1165_string = ""; // 0xd61 PushV
	var_1165_string = "Sly"; // 0xd62 MovS
	func_3477(var_1159_object, var_1165_string); // 0xd63 NEW_2
	var_1173_int = 538735; // 0xd65 PushI
	SetMessage(var_1173_int); // 0xd66 TObjFunc
	ClearReplies(); // 0xd68 TObjFunc
	var_1174_int = 538736; // 0xd6a PushI
	var_1175_int = -1; // 0xd6b PushI
	var_1176_int = 40647; // 0xd6c PushI
	AddReply(var_1174_int, var_1175_int, var_1176_int); // 0xd6d TObjFunc
	var_1177_int = 538754; // 0xd6f PushI
	var_1178_int = -1; // 0xd70 PushI
	var_1179_int = 40666; // 0xd71 PushI
	AddReply(var_1177_int, var_1178_int, var_1179_int); // 0xd72 TObjFunc
	goto Label_3447; // 0xd74 Jump
	
Label_3447:
	var_1180_bool = 0; // 0xd77 PushV
	func_5745(var_1180_bool); // 0xd78 NEW_2
	if(var_1180_bool == 0) goto Label_3462; // 0xd7a JumpB
	
Label_3451:
	lshWaitForAnimEnd(); // 0xd7b Func
	var_1181_object = var_3_object; // 0xd7d PushT
	if(var_1181_object == 0) goto Label_3456; // 0xd7e JumpB
	goto Label_3461; // 0xd7f Jump
	
Label_3461:
	goto Label_3476; // 0xd85 Jump
	
Label_3476:
	return 0; // 0xd94 Return
	
Label_3456:
	var_1182_string = ""; // 0xd80 PushV
	var_1182_string = var_2_object; // 0xd81 MovT
	func_5523(var_1182_string); // 0xd82 NEW_2
	goto Label_3451; // 0xd84 Jump
	
Label_3462:
	var_1183_string = "all"; // 0xd86 PushS
	var_1184_string = "idle"; // 0xd87 PushS
	PlayAnimation(var_1183_string, var_1184_string); // 0xd88 Func
	
Label_3466:
	WaitForAnimEnd(); // 0xd8a Func
	var_1185_object = var_3_object; // 0xd8c PushT
	if(var_1185_object == 0) goto Label_3471; // 0xd8d JumpB
	goto Label_3476; // 0xd8e Jump
	
Label_3471:
	var_1186_string = "all"; // 0xd8f PushS
	var_1187_string = "idle"; // 0xd90 PushS
	PlayAnimation(var_1186_string, var_1187_string); // 0xd91 Func
	goto Label_3466; // 0xd93 Jump
}


func_5982(var_515_bool)
{
	var_517_int = 0; var_518_string = ""; // 0x175f PushV
	var_518_string = "ood1Grif2"; // 0x1760 MovS
	func_5625(var_517_int, var_518_string); // 0x1761 NEW_2
	var_519_int = 0; // 0x1763 PushI
	var_520_bool = var_517_int == var_519_int; // 0x1764 Eq
	if(var_520_bool == 0) goto Label_5992; // 0x1765 JumpB
	var_515_bool = 1; // 0x1766 MovB
	return 0; // 0x1767 Return
	
Label_5992:
	var_515_bool = 0; // 0x1768 MovB
	return 0; // 0x1769 Return
}


func_5470(var_544_bool, var_546_float)
{
	var_547_float = 0; var_548_cvector = CVector(0,0,0); var_549_cvector = CVector(0,0,0); var_550_cvector = CVector(0,0,0); var_551_cvector = CVector(0,0,0); var_552_cvector = CVector(0,0,0); var_553_cvector = CVector(0,0,0); var_554_bool = 0; var_555_float = 0; var_556_cvector = CVector(0,0,0); var_557_cvector = CVector(0,0,0); var_558_cvector = CVector(0,0,0); var_559_cvector = CVector(0,0,0); var_560_cvector = CVector(0,0,0); var_561_cvector = CVector(0,0,0); var_562_bool = 0; // 0x155e PushV
	GetPosition(var_556_cvector); // 0x155f ObjFunc
	GetEyesHeight(var_555_float); // 0x1561 ObjFunc
	var_563_float = GetByIndex(var_556_cvector, 1); // 0x1563 PushE
	var_563_float = var_563_float + var_555_float; // 0x1564 Add2
	SetByIndex(var_556_cvector, 1) = var_563_float; // 0x1565 PopE
	GetPosition(var_557_cvector); // 0x1566 Func
	GetEyesHeight(var_555_float); // 0x1568 Func
	var_564_float = GetByIndex(var_557_cvector, 1); // 0x156a PushE
	var_564_float = var_564_float + var_555_float; // 0x156b Add2
	SetByIndex(var_557_cvector, 1) = var_564_float; // 0x156c PopE
	var_558_cvector = var_556_cvector - var_557_cvector; // 0x156d Sub2
	var_565_float = GetByIndex(var_558_cvector, 1); // 0x156e PushE
	var_565_float = 0; // 0x156f MovI
	SetByIndex(var_558_cvector, 1) = var_565_float; // 0x1570 PopE
	var_566_int = var_558_cvector | var_558_cvector; // 0x1571 Or
	var_567_float = sqrt(var_566_int); // 0x1572 Sqrt
	var_558_cvector = var_558_cvector / var_558_cvector; // 0x1573 Div2
	var_559_cvector = -var_558_cvector; // 0x1574 Neg2
	var_568_float = var_558_cvector * var_546_float; // 0x1575 Mult
	var_569_cvector = CVector(0.0, 10.0, 0.0); // 0x1576 PushVec
	var_560_cvector = var_568_float - var_569_cvector; // 0x1577 Sub2
	var_561_cvector = var_557_cvector + var_560_cvector; // 0x1578 Add2
	IsOverrideActive(var_562_bool); // 0x1579 Func
	var_570_bool = var_562_bool; // 0x157b Push
	if(var_570_bool == 0) goto Label_5503; // 0x157c JumpB
	var_544_bool = 0; // 0x157d MovB
	return 16; // 0x157e Return
	
Label_5503:
	StopWorld(); // 0x157f Func
	var_571_bool = 1; // 0x1581 PushB
	CameraTransit(var_561_cvector, var_559_cvector, var_571_bool); // 0x1582 Func
	var_572_float = GetByIndex(var_560_cvector, 0); // 0x1584 PushE
	var_573_float = GetByIndex(var_560_cvector, 2); // 0x1585 PushE
	Rotate(var_572_float, var_573_float); // 0x1586 Func
	CameraWaitForPlayFinish(); // 0x1588 Func
	ResumeWorld(); // 0x158a Func
	var_544_bool = 1; // 0x158c MovB
	return 16; // 0x158d Return
}


func_4960(var_92_bool)
{
	var_93_object = Obj(); var_94_object = Obj(); // 0x1360 PushV
	var_95_string = "player"; // 0x1361 PushS
	FindActor(var_94_object, var_95_string); // 0x1362 Func
	var_96_bool = var_94_object == 0; // 0x1364 Not
	if(var_96_bool == 0) goto Label_4968; // 0x1365 JumpB
	var_92_bool = 0; // 0x1366 MovB
	return 2; // 0x1367 Return
	
Label_4968:
	var_97_bool = 0; var_98_object = Obj(); // 0x1368 PushV
	var_98_object = var_94_object; // 0x1369 Mov
	func_5223(var_98_object); // 0x136a NEW_2
	var_92_bool = var_97_bool; // 0x136b Mov
	return 2; // 0x136d Return
}


func_2916(var_0_bool, var_1012_int, var_1013_object)
{
	var_1015_object = Obj(); var_1016_bool = 0; var_1017_int = 0; var_1018_bool = 0; var_1019_object = Obj(); var_1020_bool = 0; var_1021_int = 0; var_1022_bool = 0; // 0xb64 PushV
	var_0_bool = var_1013_object; // 0xb65 TMov
	var_1023_bool = 0; var_1024_object = Obj(); var_1025_float = 0; // 0xb66 PushV
	var_1024_object = var_1013_object; // 0xb67 Mov
	var_1025_float = 70.0; // 0xb68 MovF
	func_5237(var_1024_object, var_1025_float); // 0xb69 NEW_2
	var_1026_bool = var_1023_bool == 0; // 0xb6b Not
	if(var_1026_bool == 0) goto Label_2927; // 0xb6c JumpB
	var_1012_int = -2; // 0xb6d MovI
	return 8; // 0xb6e Return
	
Label_2927:
	CreateDialog(var_1019_object); // 0xb6f Func
	var_1027_int = 0; // 0xb71 PushV
	func_5739(var_1027_int); // 0xb72 NEW_2
	SetNPCName(var_1027_int); // 0xb74 ObjFunc
	var_1028_int = 0; // 0xb76 PushV
	func_5737(var_1028_int); // 0xb77 NEW_2
	SetNPCDescription(var_1028_int); // 0xb79 ObjFunc
	var_1029_string = ""; // 0xb7b PushV
	func_5741(var_1029_string); // 0xb7c NEW_2
	SetPhoto(var_1029_string); // 0xb7e ObjFunc
	var_1030_string = ""; // 0xb80 PushV
	func_5743(var_1030_string); // 0xb81 NEW_2
	SetPhoto2(var_1030_string); // 0xb83 ObjFunc
	var_1031_int = 0; // 0xb85 PushV
	func_6536(var_1031_int); // 0xb86 NEW_2
	SetPlayerName(var_1031_int); // 0xb88 ObjFunc
	var_1021_int = -1; // 0xb8a MovI
	IsOverrideActive(var_1020_bool); // 0xb8b Func
	var_1032_bool = var_1020_bool; // 0xb8d Push
	if(var_1032_bool == 0) goto Label_2961; // 0xb8e JumpB
	var_1012_int = -2; // 0xb8f MovI
	return 8; // 0xb90 Return
	
Label_2961:
	DoDialog(var_1019_object); // 0xb91 Func
	var_1033_bool = 0; var_1034_object = Obj(); // 0xb93 PushV
	var_1035_object = Obj(); // 0xb94 PushV
	func_5604(var_1035_object); // 0xb95 NEW_2
	var_1034_object = var_1035_object; // 0xb96 Mov
	func_5324(var_1033_bool, var_1034_object); // 0xb98 NEW_2
	var_1036_object = Obj(); var_1037_object = Obj(); // 0xb9a PushV
	var_1036_object = var_1013_object; // 0xb9b Mov
	var_1037_object = var_1019_object; // 0xb9c Mov
	TaskCall(12); // 0xb9d TaskCall
	func_2997(var_1038_object, var_1039_object, var_1040_string, var_1041_bool, var_1036_object, var_1037_object); // 0xb9e NEW_2
	TaskReturn(); // 0xb9f TaskReturn
	IsDialogEnd(var_1022_bool); // 0xba1 ObjFunc
	
Label_2979:
	var_1066_bool = var_1022_bool == 0; // 0xba3 Not
	if(var_1066_bool == 0) goto Label_2986; // 0xba4 JumpB
	sync(); // 0xba5 Func
	IsDialogEnd(var_1022_bool); // 0xba7 ObjFunc
	goto Label_2979; // 0xba9 Jump
	
Label_2986:
	var_1067_object = Obj(); // 0xbaa PushV
	var_1067_object = var_1013_object; // 0xbab Mov
	func_5306(); // 0xbac NEW_2
	StopDialog(var_1019_object); // 0xbae Func
	GetReturnValue(var_1021_int); // 0xbb0 ObjFunc
	var_1012_int = var_1021_int; // 0xbb2 Mov
	return 8; // 0xbb3 Return
}


func_5994(var_723_bool)
{
	var_725_int = 0; var_726_string = ""; // 0x176b PushV
	var_726_string = "ood3Grif1"; // 0x176c MovS
	func_5625(var_725_int, var_726_string); // 0x176d NEW_2
	var_727_int = 0; // 0x176f PushI
	var_728_bool = var_725_int == var_727_int; // 0x1770 Eq
	if(var_728_bool == 0) goto Label_6004; // 0x1771 JumpB
	var_723_bool = 1; // 0x1772 MovB
	return 0; // 0x1773 Return
	
Label_6004:
	var_723_bool = 0; // 0x1774 MovB
	return 0; // 0x1775 Return
}


func_4975(var_0_bool)
{
	var_144_float = GetByIndex(var_0_bool, 0); // 0x136f PushE
	var_145_float = GetByIndex(var_0_bool, 2); // 0x1370 PushE
	RotateAsync(var_144_float, var_145_float); // 0x1371 Func
	return 0; // 0x1373 Return
}


func_4980(var_75_bool)
{
	var_76_object = Obj(); var_77_bool = 0; var_78_object = Obj(); var_79_bool = 0; // 0x1374 PushV
	var_80_string = "player"; // 0x1375 PushS
	FindActor(var_78_object, var_80_string); // 0x1376 Func
	var_81_bool = var_78_object == 0; // 0x1378 Not
	if(var_81_bool == 0) goto Label_4988; // 0x1379 JumpB
	var_75_bool = 0; // 0x137a MovB
	return 4; // 0x137b Return
	
Label_4988:
	var_82_float = 0; var_83_object = Obj(); // 0x137c PushV
	var_83_object = var_78_object; // 0x137d Mov
	func_5198(var_83_object); // 0x137e NEW_2
	var_90_float = 90000.0; // 0x1380 PushF
	var_91_bool = var_82_float > var_90_float; // 0x1381 GT
	if(var_91_bool == 0) goto Label_4997; // 0x1382 JumpB
	var_75_bool = 0; // 0x1383 MovB
	return 4; // 0x1384 Return
	
Label_4997:
	CanSee(var_79_bool, var_78_object); // 0x1385 Func
	var_75_bool = var_79_bool; // 0x1387 Mov
	return 4; // 0x1388 Return
}


func_6006(var_852_bool)
{
	var_854_int = 0; var_855_string = ""; // 0x1777 PushV
	var_855_string = "ood4Grif3"; // 0x1778 MovS
	func_5625(var_854_int, var_855_string); // 0x1779 NEW_2
	var_856_int = 0; // 0x177b PushI
	var_857_bool = var_854_int == var_856_int; // 0x177c Eq
	if(var_857_bool == 0) goto Label_6016; // 0x177d JumpB
	var_852_bool = 1; // 0x177e MovB
	return 0; // 0x177f Return
	
Label_6016:
	var_852_bool = 0; // 0x1780 MovB
	return 0; // 0x1781 Return
}


func_6018(var_861_bool)
{
	var_863_int = 0; var_864_string = ""; // 0x1783 PushV
	var_864_string = "ood4Grif4"; // 0x1784 MovS
	func_5625(var_863_int, var_864_string); // 0x1785 NEW_2
	var_865_int = 0; // 0x1787 PushI
	var_866_bool = var_863_int == var_865_int; // 0x1788 Eq
	if(var_866_bool == 0) goto Label_6028; // 0x1789 JumpB
	var_861_bool = 1; // 0x178a MovB
	return 0; // 0x178b Return
	
Label_6028:
	var_861_bool = 0; // 0x178c MovB
	return 0; // 0x178d Return
}


func_6531(var_104_int, var_105_string)
{
	var_106_int = 0; var_107_int = 0; // 0x1983 PushV
	GetInvItemByName(var_107_int, var_105_string); // 0x1984 Func
	var_104_int = var_107_int; // 0x1986 Mov
	return 2; // 0x1987 Return
}


func_3971(var_0_bool, var_1317_int, var_1318_object)
{
	var_1320_object = Obj(); var_1321_bool = 0; var_1322_int = 0; var_1323_bool = 0; var_1324_object = Obj(); var_1325_bool = 0; var_1326_int = 0; var_1327_bool = 0; // 0xf83 PushV
	var_0_bool = var_1318_object; // 0xf84 TMov
	var_1328_bool = 0; var_1329_object = Obj(); var_1330_float = 0; // 0xf85 PushV
	var_1329_object = var_1318_object; // 0xf86 Mov
	var_1330_float = 70.0; // 0xf87 MovF
	func_5237(var_1329_object, var_1330_float); // 0xf88 NEW_2
	var_1331_bool = var_1328_bool == 0; // 0xf8a Not
	if(var_1331_bool == 0) goto Label_3982; // 0xf8b JumpB
	var_1317_int = -2; // 0xf8c MovI
	return 8; // 0xf8d Return
	
Label_3982:
	CreateDialog(var_1324_object); // 0xf8e Func
	var_1332_int = 0; // 0xf90 PushV
	func_5739(var_1332_int); // 0xf91 NEW_2
	SetNPCName(var_1332_int); // 0xf93 ObjFunc
	var_1333_int = 0; // 0xf95 PushV
	func_5737(var_1333_int); // 0xf96 NEW_2
	SetNPCDescription(var_1333_int); // 0xf98 ObjFunc
	var_1334_string = ""; // 0xf9a PushV
	func_5741(var_1334_string); // 0xf9b NEW_2
	SetPhoto(var_1334_string); // 0xf9d ObjFunc
	var_1335_string = ""; // 0xf9f PushV
	func_5743(var_1335_string); // 0xfa0 NEW_2
	SetPhoto2(var_1335_string); // 0xfa2 ObjFunc
	var_1336_int = 0; // 0xfa4 PushV
	func_6536(var_1336_int); // 0xfa5 NEW_2
	SetPlayerName(var_1336_int); // 0xfa7 ObjFunc
	var_1326_int = -1; // 0xfa9 MovI
	IsOverrideActive(var_1325_bool); // 0xfaa Func
	var_1337_bool = var_1325_bool; // 0xfac Push
	if(var_1337_bool == 0) goto Label_4016; // 0xfad JumpB
	var_1317_int = -2; // 0xfae MovI
	return 8; // 0xfaf Return
	
Label_4016:
	DoDialog(var_1324_object); // 0xfb0 Func
	var_1338_bool = 0; var_1339_object = Obj(); // 0xfb2 PushV
	var_1340_object = Obj(); // 0xfb3 PushV
	func_5604(var_1340_object); // 0xfb4 NEW_2
	var_1339_object = var_1340_object; // 0xfb5 Mov
	func_5324(var_1338_bool, var_1339_object); // 0xfb7 NEW_2
	var_1341_object = Obj(); var_1342_object = Obj(); // 0xfb9 PushV
	var_1341_object = var_1318_object; // 0xfba Mov
	var_1342_object = var_1324_object; // 0xfbb Mov
	TaskCall(22); // 0xfbc TaskCall
	func_4052(var_1343_object, var_1344_object, var_1345_string, var_1346_bool, var_1341_object, var_1342_object); // 0xfbd NEW_2
	TaskReturn(); // 0xfbe TaskReturn
	IsDialogEnd(var_1327_bool); // 0xfc0 ObjFunc
	
Label_4034:
	var_1374_bool = var_1327_bool == 0; // 0xfc2 Not
	if(var_1374_bool == 0) goto Label_4041; // 0xfc3 JumpB
	sync(); // 0xfc4 Func
	IsDialogEnd(var_1327_bool); // 0xfc6 ObjFunc
	goto Label_4034; // 0xfc8 Jump
	
Label_4041:
	var_1375_object = Obj(); // 0xfc9 PushV
	var_1375_object = var_1318_object; // 0xfca Mov
	func_5306(); // 0xfcb NEW_2
	StopDialog(var_1324_object); // 0xfcd Func
	GetReturnValue(var_1326_int); // 0xfcf ObjFunc
	var_1317_int = var_1326_int; // 0xfd1 Mov
	return 8; // 0xfd2 Return
}


func_6536(var_278_int)
{
	var_279_int = 0; var_280_int = 0; // 0x1988 PushV
	var_281_string = "branch"; // 0x1989 PushS
	GetVariable(var_281_string, var_280_int); // 0x198a Func
	var_282_int = 0; // 0x198c PushI
	var_283_bool = var_280_int == var_282_int; // 0x198d Eq
	if(var_283_bool == 0) goto Label_6546; // 0x198e JumpB
	var_278_int = 1; // 0x198f MovI
	return 2; // 0x1990 Return
	
Label_6546:
	var_284_int = 1; // 0x1992 PushI
	var_285_bool = var_280_int == var_284_int; // 0x1993 Eq
	if(var_285_bool == 0) goto Label_6551; // 0x1994 JumpB
	var_278_int = 2; // 0x1995 MovI
	return 2; // 0x1996 Return
	
Label_6551:
	var_278_int = 3; // 0x1997 MovI
	return 2; // 0x1998 Return
}


func_5002()
{
	var_1441_float = 0; var_1442_float = 0; // 0x138a PushV
	var_1443_int = 8; // 0x138b PushI
	var_1444_int = 16; // 0x138c PushI
	rand(var_1442_float, var_1443_int, var_1444_int); // 0x138d Func
	var_1445_int = 10; // 0x138f PushI
	SetTimer(var_1445_int, var_1442_float); // 0x1390 Func
	return 2; // 0x1392 Return
}


func_6030(var_625_bool)
{
	var_627_int = 0; var_628_string = ""; // 0x178f PushV
	var_628_string = "ood2Grif2"; // 0x1790 MovS
	func_5625(var_627_int, var_628_string); // 0x1791 NEW_2
	var_629_int = 0; // 0x1793 PushI
	var_630_bool = var_627_int == var_629_int; // 0x1794 Eq
	if(var_630_bool == 0) goto Label_6040; // 0x1795 JumpB
	var_625_bool = 1; // 0x1796 MovB
	return 0; // 0x1797 Return
	
Label_6040:
	var_625_bool = 0; // 0x1798 MovB
	return 0; // 0x1799 Return
}


func_5518()
{
	var_580_bool = 1; // 0x158f PushB
	CameraSwitchToNormal(var_580_bool); // 0x1590 Func
	return 0; // 0x1592 Return
}


func_5523(var_417_string)
{
	var_418_bool = 0; var_419_float = 0; var_420_float = 0; var_421_bool = 0; var_422_float = 0; var_423_float = 0; // 0x1593 PushV
	lshHasAnimation(var_421_bool, var_417_string); // 0x1594 Func
	var_424_bool = var_421_bool; // 0x1596 Push
	if(var_424_bool == 0) goto Label_5534; // 0x1597 JumpB
	lshGetAnimTimes(var_417_string, var_422_float, var_423_float); // 0x1598 Func
	var_425_bool = 0; // 0x159a PushB
	lshPlayAnimation(var_422_float, var_423_float, var_425_bool); // 0x159b Func
	goto Label_5538; // 0x159d Jump
	
Label_5538:
	return 6; // 0x15a2 Return
	
Label_5534:
	var_426_string = "Can't find lsh animation : "; // 0x159e PushS
	var_427_int = var_426_string + var_417_string; // 0x159f Add
	Trace(var_427_int); // 0x15a0 Func
}


func_5011()
{
	var_1440_int = 10; // 0x1393 PushI
	KillTimer(var_1440_int); // 0x1394 Func
	return 0; // 0x1396 Return
}


func_3477(var_2_object, var_1165_string)
{
	var_1166_bool = 0; // 0xd96 PushV
	func_5745(var_1166_bool); // 0xd97 NEW_2
	var_1167_bool = var_1166_bool == 0; // 0xd99 Not
	if(var_1167_bool == 0) goto Label_3484; // 0xd9a JumpB
	return 0; // 0xd9b Return
	
Label_3484:
	var_1168_bool = var_1165_string == var_2_object; // 0xd9c Eq
	if(var_1168_bool == 0) goto Label_3487; // 0xd9d JumpB
	return 0; // 0xd9e Return
	
Label_3487:
	var_1169_string = ""; var_1170_bool = 0; // 0xd9f PushV
	var_1169_string = var_1165_string; // 0xda0 Mov
	var_1171_string = ""; // 0xda1 PushS
	var_1172_bool = var_1165_string == var_1171_string; // 0xda2 Eq
	if(var_1172_bool == 0) goto Label_3494; // 0xda3 JumpB
	var_1170_bool = 0; // 0xda4 MovB
	goto Label_3495; // 0xda5 Jump
	
Label_3495:
	func_5539(var_1169_string, var_1170_bool); // 0xda7 NEW_2
	var_2_object = var_1165_string; // 0xda9 TMov
	return 0; // 0xdaa Return
	
Label_3494:
	var_1170_bool = 1; // 0xda6 MovB
}


func_6553(var_191_int)
{
	var_192_int = 0; var_193_int = 0; // 0x1999 PushV
	var_194_string = "branch"; // 0x199a PushS
	GetVariable(var_194_string, var_193_int); // 0x199b Func
	var_191_int = var_193_int; // 0x199d Mov
	return 2; // 0x199e Return
}


func_6042(var_640_bool)
{
	var_642_int = 0; var_643_string = ""; // 0x179b PushV
	var_643_string = "ood2Grif3"; // 0x179c MovS
	func_5625(var_642_int, var_643_string); // 0x179d NEW_2
	var_644_int = 0; // 0x179f PushI
	var_645_bool = var_642_int == var_644_int; // 0x17a0 Eq
	if(var_645_bool == 0) goto Label_6052; // 0x17a1 JumpB
	var_640_bool = 1; // 0x17a2 MovB
	return 0; // 0x17a3 Return
	
Label_6052:
	var_640_bool = 0; // 0x17a4 MovB
	return 0; // 0x17a5 Return
}


func_1946(var_2_object, var_713_string)
{
	var_714_bool = 0; // 0x79b PushV
	func_5745(var_714_bool); // 0x79c NEW_2
	var_715_bool = var_714_bool == 0; // 0x79e Not
	if(var_715_bool == 0) goto Label_1953; // 0x79f JumpB
	return 0; // 0x7a0 Return
	
Label_1953:
	var_716_bool = var_713_string == var_2_object; // 0x7a1 Eq
	if(var_716_bool == 0) goto Label_1956; // 0x7a2 JumpB
	return 0; // 0x7a3 Return
	
Label_1956:
	var_717_string = ""; var_718_bool = 0; // 0x7a4 PushV
	var_717_string = var_713_string; // 0x7a5 Mov
	var_719_string = ""; // 0x7a6 PushS
	var_720_bool = var_713_string == var_719_string; // 0x7a7 Eq
	if(var_720_bool == 0) goto Label_1963; // 0x7a8 JumpB
	var_718_bool = 0; // 0x7a9 MovB
	goto Label_1964; // 0x7aa Jump
	
Label_1964:
	func_5539(var_717_string, var_718_bool); // 0x7ac NEW_2
	var_2_object = var_713_string; // 0x7ae TMov
	return 0; // 0x7af Return
	
Label_1963:
	var_718_bool = 1; // 0x7ab MovB
}


func_6559(var_541_object)
{
	var_542_bool = 0; var_543_object = Obj(); // 0x19a0 PushV
	var_543_object = var_541_object; // 0x19a1 Mov
	func_5462(var_542_bool, var_543_object); // 0x19a2 NEW_2
	var_574_bool = var_542_bool == 0; // 0x19a4 Not
	if(var_574_bool == 0) goto Label_6567; // 0x19a5 JumpB
	return 0; // 0x19a6 Return
	
Label_6567:
	var_575_object = Obj(); // 0x19a7 PushV
	var_575_object = var_541_object; // 0x19a8 Mov
	TaskCall(0); // 0x19a9 TaskCall
	func_0(var_575_object); // 0x19aa NEW_2
	TaskReturn(); // 0x19ab TaskReturn
	var_579_object = Obj(); // 0x19ad PushV
	var_579_object = var_541_object; // 0x19ae Mov
	func_5518(); // 0x19af NEW_2
	return 0; // 0x19b1 Return
}


func_418(var_0_bool, var_1_object, var_2_object, var_3_object, var_608_object, var_609_object)
{
	var_0_bool = var_609_object; // 0x1a3 TMov
	var_1_object = var_608_object; // 0x1a4 TMov
	var_3_object = 0; // 0x1a5 TMovB
	var_614_int = 1; // 0x1a6 PushI
	if(var_614_int == 0) goto Label_490; // 0x1a7 JumpB
	var_615_string = ""; // 0x1a8 PushV
	var_615_string = "Neutral"; // 0x1a9 MovS
	func_520(var_609_object, var_615_string); // 0x1aa NEW_2
	var_623_int = 506959; // 0x1ac PushI
	SetMessage(var_623_int); // 0x1ad TObjFunc
	ClearReplies(); // 0x1af TObjFunc
	var_624_bool = 0; // 0x1b1 PushV
	var_624_bool = 0; // 0x1b2 MovB
	var_625_bool = 0; var_626_object = Obj(); // 0x1b3 PushV
	var_626_object = var_1_object; // 0x1b4 MovT
	func_6030(var_626_object); // 0x1b5 NEW_2
	if(var_625_bool == 0) goto Label_446; // 0x1b7 JumpB
	var_631_bool = 0; var_632_object = Obj(); // 0x1b8 PushV
	var_632_object = var_1_object; // 0x1b9 MovT
	func_6066(var_632_object); // 0x1ba NEW_2
	if(var_631_bool == 0) goto Label_446; // 0x1bc JumpB
	var_624_bool = 1; // 0x1bd MovB
	
Label_446:
	if(var_624_bool == 0) goto Label_452; // 0x1be JumpB
	var_637_int = 507328; // 0x1bf PushI
	var_638_int = 8080; // 0x1c0 PushI
	var_639_int = 8079; // 0x1c1 PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0x1c2 TObjFunc
	
Label_452:
	var_640_bool = 0; var_641_object = Obj(); // 0x1c4 PushV
	var_641_object = var_1_object; // 0x1c5 MovT
	func_6042(var_641_object); // 0x1c6 NEW_2
	if(var_640_bool == 0) goto Label_462; // 0x1c8 JumpB
	var_646_int = 507319; // 0x1c9 PushI
	var_647_int = 8070; // 0x1ca PushI
	var_648_int = 8069; // 0x1cb PushI
	AddReply(var_646_int, var_647_int, var_648_int); // 0x1cc TObjFunc
	
Label_462:
	var_649_bool = 0; var_650_object = Obj(); // 0x1ce PushV
	var_650_object = var_1_object; // 0x1cf MovT
	func_6054(var_650_object); // 0x1d0 NEW_2
	if(var_649_bool == 0) goto Label_472; // 0x1d2 JumpB
	var_655_int = 507335; // 0x1d3 PushI
	var_656_int = 8049; // 0x1d4 PushI
	var_657_int = 8087; // 0x1d5 PushI
	AddReply(var_655_int, var_656_int, var_657_int); // 0x1d6 TObjFunc
	
Label_472:
	var_658_int = 536144; // 0x1d8 PushI
	var_659_int = -1; // 0x1d9 PushI
	var_660_int = 37903; // 0x1da PushI
	AddReply(var_658_int, var_659_int, var_660_int); // 0x1db TObjFunc
	var_661_int = 507530; // 0x1dd PushI
	var_662_int = -1; // 0x1de PushI
	var_663_int = 8312; // 0x1df PushI
	AddReply(var_661_int, var_662_int, var_663_int); // 0x1e0 TObjFunc
	var_664_int = 533848; // 0x1e2 PushI
	var_665_int = -1; // 0x1e3 PushI
	var_666_int = 35398; // 0x1e4 PushI
	AddReply(var_664_int, var_665_int, var_666_int); // 0x1e5 TObjFunc
	goto Label_490; // 0x1e7 Jump
	
Label_490:
	var_667_bool = 0; // 0x1ea PushV
	func_5745(var_667_bool); // 0x1eb NEW_2
	if(var_667_bool == 0) goto Label_505; // 0x1ed JumpB
	
Label_494:
	lshWaitForAnimEnd(); // 0x1ee Func
	var_668_object = var_3_object; // 0x1f0 PushT
	if(var_668_object == 0) goto Label_499; // 0x1f1 JumpB
	goto Label_504; // 0x1f2 Jump
	
Label_504:
	goto Label_519; // 0x1f8 Jump
	
Label_519:
	return 0; // 0x207 Return
	
Label_499:
	var_669_string = ""; // 0x1f3 PushV
	var_669_string = var_2_object; // 0x1f4 MovT
	func_5523(var_669_string); // 0x1f5 NEW_2
	goto Label_494; // 0x1f7 Jump
	
Label_505:
	var_670_string = "all"; // 0x1f9 PushS
	var_671_string = "idle"; // 0x1fa PushS
	PlayAnimation(var_670_string, var_671_string); // 0x1fb Func
	
Label_509:
	WaitForAnimEnd(); // 0x1fd Func
	var_672_object = var_3_object; // 0x1ff PushT
	if(var_672_object == 0) goto Label_514; // 0x200 JumpB
	goto Label_519; // 0x201 Jump
	
Label_514:
	var_673_string = "all"; // 0x202 PushS
	var_674_string = "idle"; // 0x203 PushS
	PlayAnimation(var_673_string, var_674_string); // 0x204 Func
	goto Label_509; // 0x206 Jump
}


func_5539(var_392_string, var_393_bool)
{
	var_396_bool = 0; var_397_float = 0; var_398_float = 0; var_399_bool = 0; var_400_float = 0; var_401_float = 0; // 0x15a3 PushV
	lshHasAnimation(var_399_bool, var_392_string); // 0x15a4 Func
	var_402_bool = var_399_bool; // 0x15a6 Push
	if(var_402_bool == 0) goto Label_5549; // 0x15a7 JumpB
	lshGetAnimTimes(var_392_string, var_400_float, var_401_float); // 0x15a8 Func
	lshPlayAnimation(var_400_float, var_401_float, var_393_bool); // 0x15aa Func
	goto Label_5553; // 0x15ac Jump
	
Label_5553:
	return 6; // 0x15b1 Return
	
Label_5549:
	var_403_string = "Can't find lsh animation : "; // 0x15ad PushS
	var_404_int = var_403_string + var_392_string; // 0x15ae Add
	Trace(var_404_int); // 0x15af Func
}


func_6054(var_649_bool)
{
	var_651_int = 0; var_652_string = ""; // 0x17a7 PushV
	var_652_string = "ood2Grif4"; // 0x17a8 MovS
	func_5625(var_651_int, var_652_string); // 0x17a9 NEW_2
	var_653_int = 0; // 0x17ab PushI
	var_654_bool = var_651_int == var_653_int; // 0x17ac Eq
	if(var_654_bool == 0) goto Label_6064; // 0x17ad JumpB
	var_649_bool = 1; // 0x17ae MovB
	return 0; // 0x17af Return
	
Label_6064:
	var_649_bool = 0; // 0x17b0 MovB
	return 0; // 0x17b1 Return
}


func_6066(var_631_bool)
{
	var_633_int = 0; var_634_string = ""; // 0x17b3 PushV
	var_634_string = "d2q02"; // 0x17b4 MovS
	func_5625(var_633_int, var_634_string); // 0x17b5 NEW_2
	var_635_int = 6; // 0x17b7 PushI
	var_636_bool = var_633_int == var_635_int; // 0x17b8 Eq
	if(var_636_bool == 0) goto Label_6076; // 0x17b9 JumpB
	var_631_bool = 1; // 0x17ba MovB
	return 0; // 0x17bb Return
	
Label_6076:
	var_631_bool = 0; // 0x17bc MovB
	return 0; // 0x17bd Return
}


func_6578(var_85_object, var_449_object, var_586_object, var_684_object, var_762_object, var_885_object, var_1014_object, var_1075_object, var_1136_object, var_1197_object, var_1258_object, var_1319_object)
{
	var_86_int = GlobalVars[2]; // 0x19b3 PushGE
	var_87_int = 0; // 0x19b4 PushV
	func_5698(var_87_int); // 0x19b5 NEW_2
	var_93_bool = var_86_int != var_87_int; // 0x19b7 Neq
	if(var_93_bool == 0) goto Label_6594; // 0x19b8 JumpB
	func_6362(); // 0x19ba NEW_2
	var_211_int = GlobalVars[2]; // 0x19bc PushGE
	var_212_int = 0; // 0x19bd PushV
	func_5698(var_212_int); // 0x19be NEW_2
	var_211_int = var_212_int; // 0x19bf Mov
	GlobalVars[2] = var_211_int; // 0x19c1 PopGE
	
Label_6594:
	var_213_bool = GlobalVars[1]; // 0x19c2 PushGE
	var_214_bool = var_213_bool == 0; // 0x19c3 Not
	if(var_214_bool == 0) goto Label_6606; // 0x19c4 JumpB
	var_215_int = 0; var_216_object = Obj(); // 0x19c5 PushV
	var_216_object = var_85_object; // 0x19c6 Mov
	TaskCall(1); // 0x19c7 TaskCall
	func_22(var_217_object, var_215_int, var_216_object); // 0x19c8 NEW_2
	TaskReturn(); // 0x19c9 TaskReturn
	var_442_bool = GlobalVars[1]; // 0x19cb PushGE
	var_442_bool = 1; // 0x19cc MovB
	GlobalVars[1] = var_442_bool; // 0x19cd PopGE
	
Label_6606:
	var_443_bool = 0; var_444_int = 0; // 0x19ce PushV
	var_444_int = 1; // 0x19cf MovI
	func_5707(var_443_bool, var_444_int); // 0x19d0 NEW_2
	if(var_443_bool == 0) goto Label_6625; // 0x19d2 JumpB
	var_446_int = 1000; // 0x19d3 PushI
	var_447_int = 0; var_448_object = Obj(); // 0x19d4 PushV
	var_448_object = var_85_object; // 0x19d5 Mov
	TaskCall(23); // 0x19d6 TaskCall
	func_4192(var_449_object, var_447_int, var_448_object); // 0x19d7 NEW_2
	TaskReturn(); // 0x19d8 TaskReturn
	var_540_bool = var_446_int == var_449_object; // 0x19da Eq
	if(var_540_bool == 0) goto Label_6624; // 0x19db JumpB
	var_541_object = Obj(); // 0x19dc PushV
	var_541_object = var_85_object; // 0x19dd Mov
	func_6559(var_541_object); // 0x19de NEW_2
	
Label_6624:
	return 0; // 0x19e0 Return
	
Label_6625:
	var_581_bool = 0; var_582_int = 0; // 0x19e1 PushV
	var_582_int = 2; // 0x19e2 MovI
	func_5707(var_581_bool, var_582_int); // 0x19e3 NEW_2
	if(var_581_bool == 0) goto Label_6644; // 0x19e5 JumpB
	var_583_int = 1000; // 0x19e6 PushI
	var_584_int = 0; var_585_object = Obj(); // 0x19e7 PushV
	var_585_object = var_85_object; // 0x19e8 Mov
	TaskCall(3); // 0x19e9 TaskCall
	func_337(var_586_object, var_584_int, var_585_object); // 0x19ea NEW_2
	TaskReturn(); // 0x19eb TaskReturn
	var_677_bool = var_583_int == var_586_object; // 0x19ed Eq
	if(var_677_bool == 0) goto Label_6643; // 0x19ee JumpB
	var_678_object = Obj(); // 0x19ef PushV
	var_678_object = var_85_object; // 0x19f0 Mov
	func_6559(var_678_object); // 0x19f1 NEW_2
	
Label_6643:
	return 0; // 0x19f3 Return
	
Label_6644:
	var_679_bool = 0; var_680_int = 0; // 0x19f4 PushV
	var_680_int = 3; // 0x19f5 MovI
	func_5707(var_679_bool, var_680_int); // 0x19f6 NEW_2
	if(var_679_bool == 0) goto Label_6663; // 0x19f8 JumpB
	var_681_int = 1000; // 0x19f9 PushI
	var_682_int = 0; var_683_object = Obj(); // 0x19fa PushV
	var_683_object = var_85_object; // 0x19fb Mov
	TaskCall(7); // 0x19fc TaskCall
	func_1787(var_684_object, var_682_int, var_683_object); // 0x19fd NEW_2
	TaskReturn(); // 0x19fe TaskReturn
	var_755_bool = var_681_int == var_684_object; // 0x1a00 Eq
	if(var_755_bool == 0) goto Label_6662; // 0x1a01 JumpB
	var_756_object = Obj(); // 0x1a02 PushV
	var_756_object = var_85_object; // 0x1a03 Mov
	func_6559(var_756_object); // 0x1a04 NEW_2
	
Label_6662:
	return 0; // 0x1a06 Return
	
Label_6663:
	var_757_bool = 0; var_758_int = 0; // 0x1a07 PushV
	var_758_int = 4; // 0x1a08 MovI
	func_5707(var_757_bool, var_758_int); // 0x1a09 NEW_2
	if(var_757_bool == 0) goto Label_6682; // 0x1a0b JumpB
	var_759_int = 1000; // 0x1a0c PushI
	var_760_int = 0; var_761_object = Obj(); // 0x1a0d PushV
	var_761_object = var_85_object; // 0x1a0e Mov
	TaskCall(5); // 0x1a0f TaskCall
	func_958(var_762_object, var_760_int, var_761_object); // 0x1a10 NEW_2
	TaskReturn(); // 0x1a11 TaskReturn
	var_878_bool = var_759_int == var_762_object; // 0x1a13 Eq
	if(var_878_bool == 0) goto Label_6681; // 0x1a14 JumpB
	var_879_object = Obj(); // 0x1a15 PushV
	var_879_object = var_85_object; // 0x1a16 Mov
	func_6559(var_879_object); // 0x1a17 NEW_2
	
Label_6681:
	return 0; // 0x1a19 Return
	
Label_6682:
	var_880_bool = 0; var_881_int = 0; // 0x1a1a PushV
	var_881_int = 5; // 0x1a1b MovI
	func_5707(var_880_bool, var_881_int); // 0x1a1c NEW_2
	if(var_880_bool == 0) goto Label_6701; // 0x1a1e JumpB
	var_882_int = 1000; // 0x1a1f PushI
	var_883_int = 0; var_884_object = Obj(); // 0x1a20 PushV
	var_884_object = var_85_object; // 0x1a21 Mov
	TaskCall(9); // 0x1a22 TaskCall
	func_2110(var_885_object, var_883_int, var_884_object); // 0x1a23 NEW_2
	TaskReturn(); // 0x1a24 TaskReturn
	var_1007_bool = var_882_int == var_885_object; // 0x1a26 Eq
	if(var_1007_bool == 0) goto Label_6700; // 0x1a27 JumpB
	var_1008_object = Obj(); // 0x1a28 PushV
	var_1008_object = var_85_object; // 0x1a29 Mov
	func_6559(var_1008_object); // 0x1a2a NEW_2
	
Label_6700:
	return 0; // 0x1a2c Return
	
Label_6701:
	var_1009_bool = 0; var_1010_int = 0; // 0x1a2d PushV
	var_1010_int = 6; // 0x1a2e MovI
	func_5707(var_1009_bool, var_1010_int); // 0x1a2f NEW_2
	if(var_1009_bool == 0) goto Label_6720; // 0x1a31 JumpB
	var_1011_int = 1000; // 0x1a32 PushI
	var_1012_int = 0; var_1013_object = Obj(); // 0x1a33 PushV
	var_1013_object = var_85_object; // 0x1a34 Mov
	TaskCall(11); // 0x1a35 TaskCall
	func_2916(var_1014_object, var_1012_int, var_1013_object); // 0x1a36 NEW_2
	TaskReturn(); // 0x1a37 TaskReturn
	var_1068_bool = var_1011_int == var_1014_object; // 0x1a39 Eq
	if(var_1068_bool == 0) goto Label_6719; // 0x1a3a JumpB
	var_1069_object = Obj(); // 0x1a3b PushV
	var_1069_object = var_85_object; // 0x1a3c Mov
	func_6559(var_1069_object); // 0x1a3d NEW_2
	
Label_6719:
	return 0; // 0x1a3f Return
	
Label_6720:
	var_1070_bool = 0; var_1071_int = 0; // 0x1a40 PushV
	var_1071_int = 7; // 0x1a41 MovI
	func_5707(var_1070_bool, var_1071_int); // 0x1a42 NEW_2
	if(var_1070_bool == 0) goto Label_6739; // 0x1a44 JumpB
	var_1072_int = 1000; // 0x1a45 PushI
	var_1073_int = 0; var_1074_object = Obj(); // 0x1a46 PushV
	var_1074_object = var_85_object; // 0x1a47 Mov
	TaskCall(13); // 0x1a48 TaskCall
	func_3127(var_1075_object, var_1073_int, var_1074_object); // 0x1a49 NEW_2
	TaskReturn(); // 0x1a4a TaskReturn
	var_1129_bool = var_1072_int == var_1075_object; // 0x1a4c Eq
	if(var_1129_bool == 0) goto Label_6738; // 0x1a4d JumpB
	var_1130_object = Obj(); // 0x1a4e PushV
	var_1130_object = var_85_object; // 0x1a4f Mov
	func_6559(var_1130_object); // 0x1a50 NEW_2
	
Label_6738:
	return 0; // 0x1a52 Return
	
Label_6739:
	var_1131_bool = 0; var_1132_int = 0; // 0x1a53 PushV
	var_1132_int = 8; // 0x1a54 MovI
	func_5707(var_1131_bool, var_1132_int); // 0x1a55 NEW_2
	if(var_1131_bool == 0) goto Label_6758; // 0x1a57 JumpB
	var_1133_int = 1000; // 0x1a58 PushI
	var_1134_int = 0; var_1135_object = Obj(); // 0x1a59 PushV
	var_1135_object = var_85_object; // 0x1a5a Mov
	TaskCall(15); // 0x1a5b TaskCall
	func_3338(var_1136_object, var_1134_int, var_1135_object); // 0x1a5c NEW_2
	TaskReturn(); // 0x1a5d TaskReturn
	var_1190_bool = var_1133_int == var_1136_object; // 0x1a5f Eq
	if(var_1190_bool == 0) goto Label_6757; // 0x1a60 JumpB
	var_1191_object = Obj(); // 0x1a61 PushV
	var_1191_object = var_85_object; // 0x1a62 Mov
	func_6559(var_1191_object); // 0x1a63 NEW_2
	
Label_6757:
	return 0; // 0x1a65 Return
	
Label_6758:
	var_1192_bool = 0; var_1193_int = 0; // 0x1a66 PushV
	var_1193_int = 9; // 0x1a67 MovI
	func_5707(var_1192_bool, var_1193_int); // 0x1a68 NEW_2
	if(var_1192_bool == 0) goto Label_6777; // 0x1a6a JumpB
	var_1194_int = 1000; // 0x1a6b PushI
	var_1195_int = 0; var_1196_object = Obj(); // 0x1a6c PushV
	var_1196_object = var_85_object; // 0x1a6d Mov
	TaskCall(19); // 0x1a6e TaskCall
	func_3760(var_1197_object, var_1195_int, var_1196_object); // 0x1a6f NEW_2
	TaskReturn(); // 0x1a70 TaskReturn
	var_1251_bool = var_1194_int == var_1197_object; // 0x1a72 Eq
	if(var_1251_bool == 0) goto Label_6776; // 0x1a73 JumpB
	var_1252_object = Obj(); // 0x1a74 PushV
	var_1252_object = var_85_object; // 0x1a75 Mov
	func_6559(var_1252_object); // 0x1a76 NEW_2
	
Label_6776:
	return 0; // 0x1a78 Return
	
Label_6777:
	var_1253_bool = 0; var_1254_int = 0; // 0x1a79 PushV
	var_1254_int = 10; // 0x1a7a MovI
	func_5707(var_1253_bool, var_1254_int); // 0x1a7b NEW_2
	if(var_1253_bool == 0) goto Label_6796; // 0x1a7d JumpB
	var_1255_int = 1000; // 0x1a7e PushI
	var_1256_int = 0; var_1257_object = Obj(); // 0x1a7f PushV
	var_1257_object = var_85_object; // 0x1a80 Mov
	TaskCall(17); // 0x1a81 TaskCall
	func_3549(var_1258_object, var_1256_int, var_1257_object); // 0x1a82 NEW_2
	TaskReturn(); // 0x1a83 TaskReturn
	var_1312_bool = var_1255_int == var_1258_object; // 0x1a85 Eq
	if(var_1312_bool == 0) goto Label_6795; // 0x1a86 JumpB
	var_1313_object = Obj(); // 0x1a87 PushV
	var_1313_object = var_85_object; // 0x1a88 Mov
	func_6559(var_1313_object); // 0x1a89 NEW_2
	
Label_6795:
	return 0; // 0x1a8b Return
	
Label_6796:
	var_1314_bool = 0; var_1315_int = 0; // 0x1a8c PushV
	var_1315_int = 11; // 0x1a8d MovI
	func_5707(var_1314_bool, var_1315_int); // 0x1a8e NEW_2
	if(var_1314_bool == 0) goto Label_6815; // 0x1a90 JumpB
	var_1316_int = 1000; // 0x1a91 PushI
	var_1317_int = 0; var_1318_object = Obj(); // 0x1a92 PushV
	var_1318_object = var_85_object; // 0x1a93 Mov
	TaskCall(21); // 0x1a94 TaskCall
	func_3971(var_1319_object, var_1317_int, var_1318_object); // 0x1a95 NEW_2
	TaskReturn(); // 0x1a96 TaskReturn
	var_1376_bool = var_1316_int == var_1319_object; // 0x1a98 Eq
	if(var_1376_bool == 0) goto Label_6814; // 0x1a99 JumpB
	var_1377_object = Obj(); // 0x1a9a PushV
	var_1377_object = var_85_object; // 0x1a9b Mov
	func_6559(var_1377_object); // 0x1a9c NEW_2
	
Label_6814:
	return 0; // 0x1a9e Return
	
Label_6815:
	var_1378_bool = 0; var_1379_int = 0; // 0x1a9f PushV
	var_1379_int = 12; // 0x1aa0 MovI
	func_5707(var_1378_bool, var_1379_int); // 0x1aa1 NEW_2
	if(var_1378_bool == 0) goto Label_6827; // 0x1aa3 JumpB
	var_1380_int = 0; var_1381_object = Obj(); // 0x1aa4 PushV
	var_1381_object = var_85_object; // 0x1aa5 Mov
	TaskCall(25); // 0x1aa6 TaskCall
	func_4677(var_1382_object, var_1380_int, var_1381_object); // 0x1aa7 NEW_2
	TaskReturn(); // 0x1aa8 TaskReturn
	return 0; // 0x1aaa Return
	
Label_6827:
	return 0; // 0x1aab Return
}


func_5554(var_321_bool, var_322_string)
{
	var_323_bool = 0; var_324_bool = 0; // 0x15b2 PushV
	var_325_bool = 0; // 0x15b3 PushV
	func_5745(var_325_bool); // 0x15b4 NEW_2
	if(var_325_bool == 0) goto Label_5567; // 0x15b6 JumpB
	lshHasSpeech(var_324_bool, var_322_string); // 0x15b7 Func
	var_326_bool = var_324_bool; // 0x15b9 Push
	if(var_326_bool == 0) goto Label_5567; // 0x15ba JumpB
	lshPlaySpeech(var_322_string); // 0x15bb Func
	var_321_bool = 1; // 0x15bd MovB
	return 2; // 0x15be Return
	
Label_5567:
	var_321_bool = 0; // 0x15bf MovB
	return 2; // 0x15c0 Return
}


func_2997(var_0_bool, var_1_object, var_2_object, var_3_object, var_1036_object, var_1037_object)
{
	var_0_bool = var_1037_object; // 0xbb6 TMov
	var_1_object = var_1036_object; // 0xbb7 TMov
	var_3_object = 0; // 0xbb8 TMovB
	var_1042_int = 1; // 0xbb9 PushI
	if(var_1042_int == 0) goto Label_3025; // 0xbba JumpB
	var_1043_string = ""; // 0xbbb PushV
	var_1043_string = "Fear"; // 0xbbc MovS
	func_3055(var_1037_object, var_1043_string); // 0xbbd NEW_2
	var_1051_int = 514122; // 0xbbf PushI
	SetMessage(var_1051_int); // 0xbc0 TObjFunc
	ClearReplies(); // 0xbc2 TObjFunc
	var_1052_int = 514123; // 0xbc4 PushI
	var_1053_int = -1; // 0xbc5 PushI
	var_1054_int = 15337; // 0xbc6 PushI
	AddReply(var_1052_int, var_1053_int, var_1054_int); // 0xbc7 TObjFunc
	var_1055_int = 514124; // 0xbc9 PushI
	var_1056_int = -1; // 0xbca PushI
	var_1057_int = 15338; // 0xbcb PushI
	AddReply(var_1055_int, var_1056_int, var_1057_int); // 0xbcc TObjFunc
	goto Label_3025; // 0xbce Jump
	
Label_3025:
	var_1058_bool = 0; // 0xbd1 PushV
	func_5745(var_1058_bool); // 0xbd2 NEW_2
	if(var_1058_bool == 0) goto Label_3040; // 0xbd4 JumpB
	
Label_3029:
	lshWaitForAnimEnd(); // 0xbd5 Func
	var_1059_object = var_3_object; // 0xbd7 PushT
	if(var_1059_object == 0) goto Label_3034; // 0xbd8 JumpB
	goto Label_3039; // 0xbd9 Jump
	
Label_3039:
	goto Label_3054; // 0xbdf Jump
	
Label_3054:
	return 0; // 0xbee Return
	
Label_3034:
	var_1060_string = ""; // 0xbda PushV
	var_1060_string = var_2_object; // 0xbdb MovT
	func_5523(var_1060_string); // 0xbdc NEW_2
	goto Label_3029; // 0xbde Jump
	
Label_3040:
	var_1061_string = "all"; // 0xbe0 PushS
	var_1062_string = "idle"; // 0xbe1 PushS
	PlayAnimation(var_1061_string, var_1062_string); // 0xbe2 Func
	
Label_3044:
	WaitForAnimEnd(); // 0xbe4 Func
	var_1063_object = var_3_object; // 0xbe6 PushT
	if(var_1063_object == 0) goto Label_3049; // 0xbe7 JumpB
	goto Label_3054; // 0xbe8 Jump
	
Label_3049:
	var_1064_string = "all"; // 0xbe9 PushS
	var_1065_string = "idle"; // 0xbea PushS
	PlayAnimation(var_1064_string, var_1065_string); // 0xbeb Func
	goto Label_3044; // 0xbed Jump
}


func_6078(var_729_bool)
{
	var_731_int = 0; var_732_string = ""; // 0x17bf PushV
	var_732_string = "d3q01"; // 0x17c0 MovS
	func_5625(var_731_int, var_732_string); // 0x17c1 NEW_2
	var_733_int = 0; // 0x17c3 PushI
	var_734_bool = var_731_int == var_733_int; // 0x17c4 Eq
	if(var_734_bool == 0) goto Label_6088; // 0x17c5 JumpB
	var_729_bool = 1; // 0x17c6 MovB
	return 0; // 0x17c7 Return
	
Label_6088:
	var_729_bool = 0; // 0x17c8 MovB
	return 0; // 0x17c9 Return
}


func_958(var_0_bool, var_760_int, var_761_object)
{
	var_763_object = Obj(); var_764_bool = 0; var_765_int = 0; var_766_bool = 0; var_767_object = Obj(); var_768_bool = 0; var_769_int = 0; var_770_bool = 0; // 0x3be PushV
	var_0_bool = var_761_object; // 0x3bf TMov
	var_771_bool = 0; var_772_object = Obj(); var_773_float = 0; // 0x3c0 PushV
	var_772_object = var_761_object; // 0x3c1 Mov
	var_773_float = 70.0; // 0x3c2 MovF
	func_5237(var_772_object, var_773_float); // 0x3c3 NEW_2
	var_774_bool = var_771_bool == 0; // 0x3c5 Not
	if(var_774_bool == 0) goto Label_969; // 0x3c6 JumpB
	var_760_int = -2; // 0x3c7 MovI
	return 8; // 0x3c8 Return
	
Label_969:
	CreateDialog(var_767_object); // 0x3c9 Func
	var_775_int = 0; // 0x3cb PushV
	func_5739(var_775_int); // 0x3cc NEW_2
	SetNPCName(var_775_int); // 0x3ce ObjFunc
	var_776_int = 0; // 0x3d0 PushV
	func_5737(var_776_int); // 0x3d1 NEW_2
	SetNPCDescription(var_776_int); // 0x3d3 ObjFunc
	var_777_string = ""; // 0x3d5 PushV
	func_5741(var_777_string); // 0x3d6 NEW_2
	SetPhoto(var_777_string); // 0x3d8 ObjFunc
	var_778_string = ""; // 0x3da PushV
	func_5743(var_778_string); // 0x3db NEW_2
	SetPhoto2(var_778_string); // 0x3dd ObjFunc
	var_779_int = 0; // 0x3df PushV
	func_6536(var_779_int); // 0x3e0 NEW_2
	SetPlayerName(var_779_int); // 0x3e2 ObjFunc
	var_769_int = -1; // 0x3e4 MovI
	IsOverrideActive(var_768_bool); // 0x3e5 Func
	var_780_bool = var_768_bool; // 0x3e7 Push
	if(var_780_bool == 0) goto Label_1003; // 0x3e8 JumpB
	var_760_int = -2; // 0x3e9 MovI
	return 8; // 0x3ea Return
	
Label_1003:
	DoDialog(var_767_object); // 0x3eb Func
	var_781_bool = 0; var_782_object = Obj(); // 0x3ed PushV
	var_783_object = Obj(); // 0x3ee PushV
	func_5604(var_783_object); // 0x3ef NEW_2
	var_782_object = var_783_object; // 0x3f0 Mov
	func_5324(var_781_bool, var_782_object); // 0x3f2 NEW_2
	var_784_object = Obj(); var_785_object = Obj(); // 0x3f4 PushV
	var_784_object = var_761_object; // 0x3f5 Mov
	var_785_object = var_767_object; // 0x3f6 Mov
	TaskCall(6); // 0x3f7 TaskCall
	func_1039(var_786_object, var_787_object, var_788_string, var_789_bool, var_784_object, var_785_object); // 0x3f8 NEW_2
	TaskReturn(); // 0x3f9 TaskReturn
	IsDialogEnd(var_770_bool); // 0x3fb ObjFunc
	
Label_1021:
	var_876_bool = var_770_bool == 0; // 0x3fd Not
	if(var_876_bool == 0) goto Label_1028; // 0x3fe JumpB
	sync(); // 0x3ff Func
	IsDialogEnd(var_770_bool); // 0x401 ObjFunc
	goto Label_1021; // 0x403 Jump
	
Label_1028:
	var_877_object = Obj(); // 0x404 PushV
	var_877_object = var_761_object; // 0x405 Mov
	func_5306(); // 0x406 NEW_2
	StopDialog(var_767_object); // 0x408 Func
	GetReturnValue(var_769_int); // 0x40a ObjFunc
	var_760_int = var_769_int; // 0x40c Mov
	return 8; // 0x40d Return
}


func_5569()
{
	var_70_bool = 0; // 0x15c1 PushV
	func_5745(var_70_bool); // 0x15c2 NEW_2
	if(var_70_bool == 0) goto Label_5575; // 0x15c4 JumpB
	lshStopSpeech(); // 0x15c5 Func
	
Label_5575:
	return 0; // 0x15c7 Return
}


func_5576(var_128_string, var_129_int, var_130_int)
{
	var_131_bool = 0; var_132_bool = 0; // 0x15c8 PushV
	var_133_bool = 0; var_134_int = 0; var_135_int = 0; // 0x15c9 PushV
	var_134_int = var_129_int; // 0x15ca Mov
	var_135_int = var_130_int; // 0x15cb Mov
	func_5620(var_133_bool, var_134_int, var_135_int); // 0x15cc NEW_2
	if(var_133_bool == 0) goto Label_5586; // 0x15ce JumpB
	var_138_int = 0; // 0x15cf PushI
	AddItem(var_132_bool, var_128_string, var_138_int); // 0x15d0 Func
	
Label_5586:
	return 2; // 0x15d2 Return
}


func_6090(var_792_bool)
{
	var_794_int = 0; var_795_string = ""; // 0x17cb PushV
	var_795_string = "d4q03"; // 0x17cc MovS
	func_5625(var_794_int, var_795_string); // 0x17cd NEW_2
	var_796_int = 1; // 0x17cf PushI
	var_797_bool = var_794_int == var_796_int; // 0x17d0 Eq
	if(var_797_bool == 0) goto Label_6100; // 0x17d1 JumpB
	var_792_bool = 1; // 0x17d2 MovB
	return 0; // 0x17d3 Return
	
Label_6100:
	var_792_bool = 0; // 0x17d4 MovB
	return 0; // 0x17d5 Return
}


func_5587(var_139_string, var_140_int, var_141_int, var_142_int, var_143_int)
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_bool = 0; // 0x15d3 PushV
	var_148_bool = 0; var_149_int = 0; var_150_int = 0; // 0x15d4 PushV
	var_149_int = var_140_int; // 0x15d5 Mov
	var_150_int = var_141_int; // 0x15d6 Mov
	func_5620(var_148_bool, var_149_int, var_150_int); // 0x15d7 NEW_2
	if(var_148_bool == 0) goto Label_5603; // 0x15d9 JumpB
	var_151_int = var_143_int - var_142_int; // 0x15da Sub
	var_152_int = 1; // 0x15db PushI
	var_153_int = var_151_int + var_152_int; // 0x15dc Add
	irand(var_146_int, var_153_int); // 0x15dd Func
	var_154_int = 0; // 0x15df PushI
	var_155_int = var_146_int + var_142_int; // 0x15e0 Add
	AddItem(var_147_bool, var_139_string, var_154_int, var_155_int); // 0x15e1 Func
	
Label_5603:
	return 4; // 0x15e3 Return
}


func_4052(var_0_bool, var_1_object, var_2_object, var_3_object, var_1341_object, var_1342_object)
{
	var_0_bool = var_1342_object; // 0xfd5 TMov
	var_1_object = var_1341_object; // 0xfd6 TMov
	var_3_object = 0; // 0xfd7 TMovB
	var_1347_int = 1; // 0xfd8 PushI
	if(var_1347_int == 0) goto Label_4085; // 0xfd9 JumpB
	var_1348_string = ""; // 0xfda PushV
	var_1348_string = "Fear"; // 0xfdb MovS
	func_4115(var_1342_object, var_1348_string); // 0xfdc NEW_2
	var_1356_int = 514186; // 0xfde PushI
	SetMessage(var_1356_int); // 0xfdf TObjFunc
	ClearReplies(); // 0xfe1 TObjFunc
	var_1357_int = 514187; // 0xfe3 PushI
	var_1358_int = -1; // 0xfe4 PushI
	var_1359_int = 15401; // 0xfe5 PushI
	AddReply(var_1357_int, var_1358_int, var_1359_int); // 0xfe6 TObjFunc
	var_1360_int = 514188; // 0xfe8 PushI
	var_1361_int = -1; // 0xfe9 PushI
	var_1362_int = 15402; // 0xfea PushI
	AddReply(var_1360_int, var_1361_int, var_1362_int); // 0xfeb TObjFunc
	var_1363_int = 539631; // 0xfed PushI
	var_1364_int = -1; // 0xfee PushI
	var_1365_int = 41577; // 0xfef PushI
	AddReply(var_1363_int, var_1364_int, var_1365_int); // 0xff0 TObjFunc
	goto Label_4085; // 0xff2 Jump
	
Label_4085:
	var_1366_bool = 0; // 0xff5 PushV
	func_5745(var_1366_bool); // 0xff6 NEW_2
	if(var_1366_bool == 0) goto Label_4100; // 0xff8 JumpB
	
Label_4089:
	lshWaitForAnimEnd(); // 0xff9 Func
	var_1367_object = var_3_object; // 0xffb PushT
	if(var_1367_object == 0) goto Label_4094; // 0xffc JumpB
	goto Label_4099; // 0xffd Jump
	
Label_4099:
	goto Label_4114; // 0x1003 Jump
	
Label_4114:
	return 0; // 0x1012 Return
	
Label_4094:
	var_1368_string = ""; // 0xffe PushV
	var_1368_string = var_2_object; // 0xfff MovT
	func_5523(var_1368_string); // 0x1000 NEW_2
	goto Label_4089; // 0x1002 Jump
	
Label_4100:
	var_1369_string = "all"; // 0x1004 PushS
	var_1370_string = "idle"; // 0x1005 PushS
	PlayAnimation(var_1369_string, var_1370_string); // 0x1006 Func
	
Label_4104:
	WaitForAnimEnd(); // 0x1008 Func
	var_1371_object = var_3_object; // 0x100a PushT
	if(var_1371_object == 0) goto Label_4109; // 0x100b JumpB
	goto Label_4114; // 0x100c Jump
	
Label_4109:
	var_1372_string = "all"; // 0x100d PushS
	var_1373_string = "idle"; // 0x100e PushS
	PlayAnimation(var_1372_string, var_1373_string); // 0x100f Func
	goto Label_4104; // 0x1011 Jump
}


func_6102(var_798_bool)
{
	var_800_int = 0; var_801_string = ""; // 0x17d7 PushV
	var_801_string = "ood4Grif1"; // 0x17d8 MovS
	func_5625(var_800_int, var_801_string); // 0x17d9 NEW_2
	var_802_int = 0; // 0x17db PushI
	var_803_bool = var_800_int == var_802_int; // 0x17dc Eq
	if(var_803_bool == 0) goto Label_6112; // 0x17dd JumpB
	var_798_bool = 1; // 0x17de MovB
	return 0; // 0x17df Return
	
Label_6112:
	var_798_bool = 0; // 0x17e0 MovB
	return 0; // 0x17e1 Return
}


func_3549(var_0_bool, var_1256_int, var_1257_object)
{
	var_1259_object = Obj(); var_1260_bool = 0; var_1261_int = 0; var_1262_bool = 0; var_1263_object = Obj(); var_1264_bool = 0; var_1265_int = 0; var_1266_bool = 0; // 0xddd PushV
	var_0_bool = var_1257_object; // 0xdde TMov
	var_1267_bool = 0; var_1268_object = Obj(); var_1269_float = 0; // 0xddf PushV
	var_1268_object = var_1257_object; // 0xde0 Mov
	var_1269_float = 70.0; // 0xde1 MovF
	func_5237(var_1268_object, var_1269_float); // 0xde2 NEW_2
	var_1270_bool = var_1267_bool == 0; // 0xde4 Not
	if(var_1270_bool == 0) goto Label_3560; // 0xde5 JumpB
	var_1256_int = -2; // 0xde6 MovI
	return 8; // 0xde7 Return
	
Label_3560:
	CreateDialog(var_1263_object); // 0xde8 Func
	var_1271_int = 0; // 0xdea PushV
	func_5739(var_1271_int); // 0xdeb NEW_2
	SetNPCName(var_1271_int); // 0xded ObjFunc
	var_1272_int = 0; // 0xdef PushV
	func_5737(var_1272_int); // 0xdf0 NEW_2
	SetNPCDescription(var_1272_int); // 0xdf2 ObjFunc
	var_1273_string = ""; // 0xdf4 PushV
	func_5741(var_1273_string); // 0xdf5 NEW_2
	SetPhoto(var_1273_string); // 0xdf7 ObjFunc
	var_1274_string = ""; // 0xdf9 PushV
	func_5743(var_1274_string); // 0xdfa NEW_2
	SetPhoto2(var_1274_string); // 0xdfc ObjFunc
	var_1275_int = 0; // 0xdfe PushV
	func_6536(var_1275_int); // 0xdff NEW_2
	SetPlayerName(var_1275_int); // 0xe01 ObjFunc
	var_1265_int = -1; // 0xe03 MovI
	IsOverrideActive(var_1264_bool); // 0xe04 Func
	var_1276_bool = var_1264_bool; // 0xe06 Push
	if(var_1276_bool == 0) goto Label_3594; // 0xe07 JumpB
	var_1256_int = -2; // 0xe08 MovI
	return 8; // 0xe09 Return
	
Label_3594:
	DoDialog(var_1263_object); // 0xe0a Func
	var_1277_bool = 0; var_1278_object = Obj(); // 0xe0c PushV
	var_1279_object = Obj(); // 0xe0d PushV
	func_5604(var_1279_object); // 0xe0e NEW_2
	var_1278_object = var_1279_object; // 0xe0f Mov
	func_5324(var_1277_bool, var_1278_object); // 0xe11 NEW_2
	var_1280_object = Obj(); var_1281_object = Obj(); // 0xe13 PushV
	var_1280_object = var_1257_object; // 0xe14 Mov
	var_1281_object = var_1263_object; // 0xe15 Mov
	TaskCall(18); // 0xe16 TaskCall
	func_3630(var_1282_object, var_1283_object, var_1284_string, var_1285_bool, var_1280_object, var_1281_object); // 0xe17 NEW_2
	TaskReturn(); // 0xe18 TaskReturn
	IsDialogEnd(var_1266_bool); // 0xe1a ObjFunc
	
Label_3612:
	var_1310_bool = var_1266_bool == 0; // 0xe1c Not
	if(var_1310_bool == 0) goto Label_3619; // 0xe1d JumpB
	sync(); // 0xe1e Func
	IsDialogEnd(var_1266_bool); // 0xe20 ObjFunc
	goto Label_3612; // 0xe22 Jump
	
Label_3619:
	var_1311_object = Obj(); // 0xe23 PushV
	var_1311_object = var_1257_object; // 0xe24 Mov
	func_5306(); // 0xe25 NEW_2
	StopDialog(var_1263_object); // 0xe27 Func
	GetReturnValue(var_1265_int); // 0xe29 ObjFunc
	var_1256_int = var_1265_int; // 0xe2b Mov
	return 8; // 0xe2c Return
}


func_6114(var_830_bool)
{
	var_832_int = 0; var_833_string = ""; // 0x17e3 PushV
	var_833_string = "ood4Grif2"; // 0x17e4 MovS
	func_5625(var_832_int, var_833_string); // 0x17e5 NEW_2
	var_834_int = 0; // 0x17e7 PushI
	var_835_bool = var_832_int == var_834_int; // 0x17e8 Eq
	if(var_835_bool == 0) goto Label_6124; // 0x17e9 JumpB
	var_830_bool = 1; // 0x17ea MovB
	return 0; // 0x17eb Return
	
Label_6124:
	var_830_bool = 0; // 0x17ec MovB
	return 0; // 0x17ed Return
}


func_5604(var_289_object)
{
	var_290_object = Obj(); var_291_object = Obj(); // 0x15e4 PushV
	self(var_291_object); // 0x15e5 Func
	var_289_object = var_291_object; // 0x15e7 Mov
	return 2; // 0x15e8 Return
}


func_5610(var_253_cvector, var_254_cvector)
{
	var_256_float = 0; var_257_float = 0; // 0x15ea PushV
	var_258_int = var_254_cvector | var_254_cvector; // 0x15eb Or
	var_257_float = sqrt(var_258_int); // 0x15ec Sqrt2
	var_259_float = 0.0; // 0x15ed PushF
	var_260_bool = var_257_float < var_259_float; // 0x15ee LT
	if(var_260_bool == 0) goto Label_5618; // 0x15ef JumpB
	var_253_cvector = CVector(0.0, 0.0, 0.0); // 0x15f0 MovV
	return 2; // 0x15f1 Return
	
Label_5618:
	var_253_cvector = var_254_cvector / var_254_cvector; // 0x15f2 Div2
	return 2; // 0x15f3 Return
}


func_6126(var_836_bool)
{
	var_838_int = 0; var_839_string = ""; // 0x17ef PushV
	var_839_string = "d4q03_alldead"; // 0x17f0 MovS
	func_5625(var_838_int, var_839_string); // 0x17f1 NEW_2
	var_840_int = 1; // 0x17f3 PushI
	var_841_bool = var_838_int == var_840_int; // 0x17f4 Eq
	if(var_841_bool == 0) goto Label_6136; // 0x17f5 JumpB
	var_836_bool = 1; // 0x17f6 MovB
	return 0; // 0x17f7 Return
	
Label_6136:
	var_836_bool = 0; // 0x17f8 MovB
	return 0; // 0x17f9 Return
}


func_3055(var_2_object, var_1043_string)
{
	var_1044_bool = 0; // 0xbf0 PushV
	func_5745(var_1044_bool); // 0xbf1 NEW_2
	var_1045_bool = var_1044_bool == 0; // 0xbf3 Not
	if(var_1045_bool == 0) goto Label_3062; // 0xbf4 JumpB
	return 0; // 0xbf5 Return
	
Label_3062:
	var_1046_bool = var_1043_string == var_2_object; // 0xbf6 Eq
	if(var_1046_bool == 0) goto Label_3065; // 0xbf7 JumpB
	return 0; // 0xbf8 Return
	
Label_3065:
	var_1047_string = ""; var_1048_bool = 0; // 0xbf9 PushV
	var_1047_string = var_1043_string; // 0xbfa Mov
	var_1049_string = ""; // 0xbfb PushS
	var_1050_bool = var_1043_string == var_1049_string; // 0xbfc Eq
	if(var_1050_bool == 0) goto Label_3072; // 0xbfd JumpB
	var_1048_bool = 0; // 0xbfe MovB
	goto Label_3073; // 0xbff Jump
	
Label_3073:
	func_5539(var_1047_string, var_1048_bool); // 0xc01 NEW_2
	var_2_object = var_1043_string; // 0xc03 TMov
	return 0; // 0xc04 Return
	
Label_3072:
	var_1048_bool = 1; // 0xc00 MovB
}


func_5620(var_133_bool, var_134_int, var_135_int)
{
	var_136_int = 0; var_137_int = 0; // 0x15f4 PushV
	irand(var_137_int, var_135_int); // 0x15f5 Func
	var_133_bool = var_137_int < var_134_int; // 0x15f7 LT2
	return 2; // 0x15f8 Return
}


func_5625(var_489_int, var_490_string)
{
	var_491_int = 0; var_492_int = 0; // 0x15f9 PushV
	GetVariable(var_490_string, var_492_int); // 0x15fa Func
	var_489_int = var_492_int; // 0x15fc Mov
	return 2; // 0x15fd Return
}


func_6138(var_957_bool)
{
	var_959_int = 0; var_960_string = ""; // 0x17fb PushV
	var_960_string = "d5q01"; // 0x17fc MovS
	func_5625(var_959_int, var_960_string); // 0x17fd NEW_2
	var_961_int = 6; // 0x17ff PushI
	var_962_bool = var_959_int == var_961_int; // 0x1800 Eq
	if(var_962_bool == 0) goto Label_6148; // 0x1801 JumpB
	var_957_bool = 1; // 0x1802 MovB
	return 0; // 0x1803 Return
	
Label_6148:
	var_957_bool = 0; // 0x1804 MovB
	return 0; // 0x1805 Return
}


func_5630(var_156_int, var_157_int)
{
	var_158_object = Obj(); var_159_object = Obj(); // 0x15fe PushV
	CreateIntVector(var_159_object); // 0x15ff Func
	add(var_156_int); // 0x1601 ObjFunc
	add(var_157_int); // 0x1603 ObjFunc
	var_160_int = 3; // 0x1605 PushI
	SendWorldWndMessage(var_160_int, var_159_object); // 0x1606 Func
	return 2; // 0x1608 Return
}


