task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	StopGroup0(); // 0x3 Func
	return 0; // 0x5 Return
}


task_1_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	TaskCall(0); // 0x1e TaskCall
	func_0(); // 0x1f Call
	TaskReturn(); // 0x20 TaskReturn
	return 0; // 0x22 Return
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	var_21_object = Obj(); // 0x24 PushV
	var_21_object = var_20_bool; // 0x25 Mov
	func_2610(var_21_object); // 0x26 Call
	return 0; // 0x28 Return
}


task_1_event_10(var_0_object, var_1_object, var_2_object, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_string, var_10_bool, var_11_object, var_12_object, var_13_object, var_14_string, var_15_bool, var_16_object, var_17_object, var_18_object, var_19_string, var_20_bool)
{
	var_21_bool = 0; var_22_object = Obj(); // 0x2a PushV
	var_22_object = var_20_bool; // 0x2b Mov
	func_2056(var_22_object); // 0x2c Call
	WaitForAnimEnd(); // 0x2e Func
	return 0; // 0x30 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_int = 1; // 0xc5 PushI
	if(var_22_int == 0) goto Label_334; // 0xc6 JumpB
	func_2151(); // 0xc8 Call
	var_24_int = 526; // 0xca PushI
	var_25_bool = var_20_string == var_24_int; // 0xcb Eq
	if(var_25_bool == 0) goto Label_235; // 0xcc JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0xcd PushV
	var_26_object = var_1_object; // 0xce MovT
	var_27_object = var_0_object; // 0xcf MovT
	func_2310(); // 0xd0 Call
	var_30_string = ""; // 0xd2 PushV
	var_30_string = "Neutral"; // 0xd3 MovS
	func_180(var_21_bool, var_30_string); // 0xd4 Call
	var_45_int = 457; // 0xd6 PushI
	SetMessage(var_45_int); // 0xd7 TObjFunc
	ClearReplies(); // 0xd9 TObjFunc
	var_46_int = 458; // 0xdb PushI
	var_47_int = 530; // 0xdc PushI
	var_48_int = 527; // 0xdd PushI
	AddReply(var_46_int, var_47_int, var_48_int); // 0xde TObjFunc
	var_49_int = 459; // 0xe0 PushI
	var_50_int = 532; // 0xe1 PushI
	var_51_int = 528; // 0xe2 PushI
	AddReply(var_49_int, var_50_int, var_51_int); // 0xe3 TObjFunc
	var_52_int = 460; // 0xe5 PushI
	var_53_int = 530; // 0xe6 PushI
	var_54_int = 529; // 0xe7 PushI
	AddReply(var_52_int, var_53_int, var_54_int); // 0xe8 TObjFunc
	return 0; // 0xea Return
	
Label_235:
	var_55_int = 532; // 0xeb PushI
	var_56_bool = var_20_string == var_55_int; // 0xec Eq
	if(var_56_bool == 0) goto Label_258; // 0xed JumpB
	var_57_string = ""; // 0xee PushV
	var_57_string = "Neutral"; // 0xef MovS
	func_180(var_21_bool, var_57_string); // 0xf0 Call
	var_58_int = 462; // 0xf2 PushI
	SetMessage(var_58_int); // 0xf3 TObjFunc
	ClearReplies(); // 0xf5 TObjFunc
	var_59_int = 466; // 0xf7 PushI
	var_60_int = 538; // 0xf8 PushI
	var_61_int = 536; // 0xf9 PushI
	AddReply(var_59_int, var_60_int, var_61_int); // 0xfa TObjFunc
	var_62_int = 467; // 0xfc PushI
	var_63_int = -1; // 0xfd PushI
	var_64_int = 537; // 0xfe PushI
	AddReply(var_62_int, var_63_int, var_64_int); // 0xff TObjFunc
	return 0; // 0x101 Return
	
Label_258:
	var_65_int = 538; // 0x102 PushI
	var_66_bool = var_20_string == var_65_int; // 0x103 Eq
	if(var_66_bool == 0) goto Label_281; // 0x104 JumpB
	var_67_string = ""; // 0x105 PushV
	var_67_string = "Neutral"; // 0x106 MovS
	func_180(var_21_bool, var_67_string); // 0x107 Call
	var_68_int = 468; // 0x109 PushI
	SetMessage(var_68_int); // 0x10a TObjFunc
	ClearReplies(); // 0x10c TObjFunc
	var_69_int = 470; // 0x10e PushI
	var_70_int = -1; // 0x10f PushI
	var_71_int = 540; // 0x110 PushI
	AddReply(var_69_int, var_70_int, var_71_int); // 0x111 TObjFunc
	var_72_int = 471; // 0x113 PushI
	var_73_int = -1; // 0x114 PushI
	var_74_int = 541; // 0x115 PushI
	AddReply(var_72_int, var_73_int, var_74_int); // 0x116 TObjFunc
	return 0; // 0x118 Return
	
Label_281:
	var_75_int = 530; // 0x119 PushI
	var_76_bool = var_20_string == var_75_int; // 0x11a Eq
	if(var_76_bool == 0) goto Label_304; // 0x11b JumpB
	var_77_string = ""; // 0x11c PushV
	var_77_string = "Neutral"; // 0x11d MovS
	func_180(var_21_bool, var_77_string); // 0x11e Call
	var_78_int = 461; // 0x120 PushI
	SetMessage(var_78_int); // 0x121 TObjFunc
	ClearReplies(); // 0x123 TObjFunc
	var_79_int = 463; // 0x125 PushI
	var_80_int = 535; // 0x126 PushI
	var_81_int = 533; // 0x127 PushI
	AddReply(var_79_int, var_80_int, var_81_int); // 0x128 TObjFunc
	var_82_int = 464; // 0x12a PushI
	var_83_int = -1; // 0x12b PushI
	var_84_int = 534; // 0x12c PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x12d TObjFunc
	return 0; // 0x12f Return
	
Label_304:
	var_85_int = 535; // 0x130 PushI
	var_86_bool = var_20_string == var_85_int; // 0x131 Eq
	if(var_86_bool == 0) goto Label_322; // 0x132 JumpB
	var_87_string = ""; // 0x133 PushV
	var_87_string = "Neutral"; // 0x134 MovS
	func_180(var_21_bool, var_87_string); // 0x135 Call
	var_88_int = 465; // 0x137 PushI
	SetMessage(var_88_int); // 0x138 TObjFunc
	ClearReplies(); // 0x13a TObjFunc
	var_89_int = 6269; // 0x13c PushI
	var_90_int = -1; // 0x13d PushI
	var_91_int = 6939; // 0x13e PushI
	AddReply(var_89_int, var_90_int, var_91_int); // 0x13f TObjFunc
	return 0; // 0x141 Return
	
Label_322:
	var_3_string = 1; // 0x142 TMovB
	var_92_bool = 0; // 0x143 PushV
	func_2206(var_92_bool); // 0x144 Call
	if(var_92_bool == 0) goto Label_330; // 0x146 JumpB
	lshStopAnimation(); // 0x147 Func
	goto Label_332; // 0x149 Jump
	
Label_332:
	return 0; // 0x14c Return
	
Label_330:
	StopAnimation(); // 0x14a Func
	
Label_334:
	return 0; // 0x14e Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_int = 1; // 0x264 PushI
	if(var_22_int == 0) goto Label_1326; // 0x265 JumpB
	func_2151(); // 0x267 Call
	var_24_int = 6780; // 0x269 PushI
	var_25_bool = var_21_bool == var_24_int; // 0x26a Eq
	if(var_25_bool == 0) goto Label_640; // 0x26b JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x26c PushV
	var_26_object = var_1_object; // 0x26d MovT
	var_27_object = var_0_object; // 0x26e MovT
	func_2208(); // 0x26f Call
	var_30_object = Obj(); var_31_object = Obj(); // 0x271 PushV
	var_30_object = var_1_object; // 0x272 MovT
	var_31_object = var_0_object; // 0x273 MovT
	func_2226(); // 0x274 Call
	var_59_object = Obj(); var_60_object = Obj(); // 0x276 PushV
	var_59_object = var_1_object; // 0x277 MovT
	var_60_object = var_0_object; // 0x278 MovT
	func_2235(); // 0x279 Call
	var_77_object = Obj(); var_78_object = Obj(); // 0x27b PushV
	var_77_object = var_1_object; // 0x27c MovT
	var_78_object = var_0_object; // 0x27d MovT
	func_2251(); // 0x27e Call
	
Label_640:
	var_103_int = 6783; // 0x280 PushI
	var_104_bool = var_21_bool == var_103_int; // 0x281 Eq
	if(var_104_bool == 0) goto Label_663; // 0x282 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x283 PushV
	var_105_object = var_1_object; // 0x284 MovT
	var_106_object = var_0_object; // 0x285 MovT
	func_2208(); // 0x286 Call
	var_107_object = Obj(); var_108_object = Obj(); // 0x288 PushV
	var_107_object = var_1_object; // 0x289 MovT
	var_108_object = var_0_object; // 0x28a MovT
	func_2226(); // 0x28b Call
	var_109_object = Obj(); var_110_object = Obj(); // 0x28d PushV
	var_109_object = var_1_object; // 0x28e MovT
	var_110_object = var_0_object; // 0x28f MovT
	func_2235(); // 0x290 Call
	var_111_object = Obj(); var_112_object = Obj(); // 0x292 PushV
	var_111_object = var_1_object; // 0x293 MovT
	var_112_object = var_0_object; // 0x294 MovT
	func_2251(); // 0x295 Call
	
Label_663:
	var_113_int = 6244; // 0x297 PushI
	var_114_bool = var_21_bool == var_113_int; // 0x298 Eq
	if(var_114_bool == 0) goto Label_671; // 0x299 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x29a PushV
	var_115_object = var_1_object; // 0x29b MovT
	var_116_object = var_0_object; // 0x29c MovT
	func_2214(); // 0x29d Call
	
Label_671:
	var_119_int = 6245; // 0x29f PushI
	var_120_bool = var_21_bool == var_119_int; // 0x2a0 Eq
	if(var_120_bool == 0) goto Label_679; // 0x2a1 JumpB
	var_121_object = Obj(); var_122_object = Obj(); // 0x2a2 PushV
	var_121_object = var_1_object; // 0x2a3 MovT
	var_122_object = var_0_object; // 0x2a4 MovT
	func_2214(); // 0x2a5 Call
	
Label_679:
	var_123_int = 6248; // 0x2a7 PushI
	var_124_bool = var_21_bool == var_123_int; // 0x2a8 Eq
	if(var_124_bool == 0) goto Label_687; // 0x2a9 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x2aa PushV
	var_125_object = var_1_object; // 0x2ab MovT
	var_126_object = var_0_object; // 0x2ac MovT
	func_2214(); // 0x2ad Call
	
Label_687:
	var_127_int = 6249; // 0x2af PushI
	var_128_bool = var_21_bool == var_127_int; // 0x2b0 Eq
	if(var_128_bool == 0) goto Label_695; // 0x2b1 JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x2b2 PushV
	var_129_object = var_1_object; // 0x2b3 MovT
	var_130_object = var_0_object; // 0x2b4 MovT
	func_2214(); // 0x2b5 Call
	
Label_695:
	var_131_int = 6233; // 0x2b7 PushI
	var_132_bool = var_21_bool == var_131_int; // 0x2b8 Eq
	if(var_132_bool == 0) goto Label_703; // 0x2b9 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x2ba PushV
	var_133_object = var_1_object; // 0x2bb MovT
	var_134_object = var_0_object; // 0x2bc MovT
	func_2220(); // 0x2bd Call
	
Label_703:
	var_137_int = 6234; // 0x2bf PushI
	var_138_bool = var_21_bool == var_137_int; // 0x2c0 Eq
	if(var_138_bool == 0) goto Label_711; // 0x2c1 JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0x2c2 PushV
	var_139_object = var_1_object; // 0x2c3 MovT
	var_140_object = var_0_object; // 0x2c4 MovT
	func_2220(); // 0x2c5 Call
	
Label_711:
	var_141_int = 6235; // 0x2c7 PushI
	var_142_bool = var_21_bool == var_141_int; // 0x2c8 Eq
	if(var_142_bool == 0) goto Label_719; // 0x2c9 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x2ca PushV
	var_143_object = var_1_object; // 0x2cb MovT
	var_144_object = var_0_object; // 0x2cc MovT
	func_2220(); // 0x2cd Call
	
Label_719:
	var_145_int = 6236; // 0x2cf PushI
	var_146_bool = var_21_bool == var_145_int; // 0x2d0 Eq
	if(var_146_bool == 0) goto Label_727; // 0x2d1 JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x2d2 PushV
	var_147_object = var_1_object; // 0x2d3 MovT
	var_148_object = var_0_object; // 0x2d4 MovT
	func_2220(); // 0x2d5 Call
	
Label_727:
	var_149_int = 6226; // 0x2d7 PushI
	var_150_bool = var_20_string == var_149_int; // 0x2d8 Eq
	if(var_150_bool == 0) goto Label_889; // 0x2d9 JumpB
	var_151_bool = 0; // 0x2da PushV
	var_151_bool = 0; // 0x2db MovB
	var_152_bool = 0; var_153_object = Obj(); // 0x2dc PushV
	var_153_object = var_1_object; // 0x2dd MovT
	func_2316(var_153_object); // 0x2de Call
	if(var_152_bool == 0) goto Label_743; // 0x2e0 JumpB
	var_160_bool = 0; var_161_object = Obj(); // 0x2e1 PushV
	var_161_object = var_1_object; // 0x2e2 MovT
	func_2352(var_161_object); // 0x2e3 Call
	if(var_160_bool == 0) goto Label_743; // 0x2e5 JumpB
	var_151_bool = 1; // 0x2e6 MovB
	
Label_743:
	if(var_151_bool == 0) goto Label_764; // 0x2e7 JumpB
	var_166_string = ""; // 0x2e8 PushV
	var_166_string = "Neutral"; // 0x2e9 MovS
	func_595(var_21_bool, var_166_string); // 0x2ea Call
	var_181_int = 5647; // 0x2ec PushI
	SetMessage(var_181_int); // 0x2ed TObjFunc
	ClearReplies(); // 0x2ef TObjFunc
	var_182_int = 5648; // 0x2f1 PushI
	var_183_int = 6756; // 0x2f2 PushI
	var_184_int = 6227; // 0x2f3 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x2f4 TObjFunc
	var_185_int = 5671; // 0x2f6 PushI
	var_186_int = 6750; // 0x2f7 PushI
	var_187_int = 6252; // 0x2f8 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x2f9 TObjFunc
	return 0; // 0x2fb Return
	
Label_764:
	var_188_bool = 0; // 0x2fc PushV
	var_188_bool = 0; // 0x2fd MovB
	var_189_bool = 0; var_190_object = Obj(); // 0x2fe PushV
	var_190_object = var_1_object; // 0x2ff MovT
	func_2328(var_190_object); // 0x300 Call
	if(var_189_bool == 0) goto Label_778; // 0x302 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x303 PushV
	var_196_object = var_1_object; // 0x304 MovT
	func_2316(var_196_object); // 0x305 Call
	var_197_bool = var_195_bool == 0; // 0x307 Not
	if(var_197_bool == 0) goto Label_778; // 0x308 JumpB
	var_188_bool = 1; // 0x309 MovB
	
Label_778:
	if(var_188_bool == 0) goto Label_799; // 0x30a JumpB
	var_198_string = ""; // 0x30b PushV
	var_198_string = "Neutral"; // 0x30c MovS
	func_595(var_21_bool, var_198_string); // 0x30d Call
	var_199_int = 5659; // 0x30f PushI
	SetMessage(var_199_int); // 0x310 TObjFunc
	ClearReplies(); // 0x312 TObjFunc
	var_200_int = 5660; // 0x314 PushI
	var_201_int = 6241; // 0x315 PushI
	var_202_int = 6240; // 0x316 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x317 TObjFunc
	var_203_int = 5670; // 0x319 PushI
	var_204_int = 6241; // 0x31a PushI
	var_205_int = 6250; // 0x31b PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x31c TObjFunc
	return 0; // 0x31e Return
	
Label_799:
	var_206_bool = 0; var_207_object = Obj(); // 0x31f PushV
	var_207_object = var_1_object; // 0x320 MovT
	func_2340(var_207_object); // 0x321 Call
	if(var_206_bool == 0) goto Label_824; // 0x323 JumpB
	var_212_string = ""; // 0x324 PushV
	var_212_string = "Neutral"; // 0x325 MovS
	func_595(var_21_bool, var_212_string); // 0x326 Call
	var_213_int = 5649; // 0x328 PushI
	SetMessage(var_213_int); // 0x329 TObjFunc
	ClearReplies(); // 0x32b TObjFunc
	var_214_int = 5650; // 0x32d PushI
	var_215_int = 6230; // 0x32e PushI
	var_216_int = 6229; // 0x32f PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x330 TObjFunc
	var_217_int = 5658; // 0x332 PushI
	var_218_int = 6230; // 0x333 PushI
	var_219_int = 6237; // 0x334 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x335 TObjFunc
	return 0; // 0x337 Return
	
Label_824:
	var_220_string = ""; // 0x338 PushV
	var_220_string = "Neutral"; // 0x339 MovS
	func_595(var_21_bool, var_220_string); // 0x33a Call
	var_221_int = 8187; // 0x33c PushI
	SetMessage(var_221_int); // 0x33d TObjFunc
	ClearReplies(); // 0x33f TObjFunc
	var_222_bool = 0; var_223_object = Obj(); // 0x341 PushV
	var_223_object = var_1_object; // 0x342 MovT
	func_2441(var_223_object); // 0x343 Call
	if(var_222_bool == 0) goto Label_843; // 0x345 JumpB
	var_228_int = 8191; // 0x346 PushI
	var_229_int = 9041; // 0x347 PushI
	var_230_int = 9014; // 0x348 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x349 TObjFunc
	
Label_843:
	var_231_bool = 0; var_232_object = Obj(); // 0x34b PushV
	var_232_object = var_1_object; // 0x34c MovT
	func_2453(var_232_object); // 0x34d Call
	if(var_231_bool == 0) goto Label_853; // 0x34f JumpB
	var_237_int = 8192; // 0x350 PushI
	var_238_int = 9040; // 0x351 PushI
	var_239_int = 9015; // 0x352 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x353 TObjFunc
	
Label_853:
	var_240_bool = 0; var_241_object = Obj(); // 0x355 PushV
	var_241_object = var_1_object; // 0x356 MovT
	func_2429(var_241_object); // 0x357 Call
	if(var_240_bool == 0) goto Label_863; // 0x359 JumpB
	var_246_int = 8209; // 0x35a PushI
	var_247_int = 9037; // 0x35b PushI
	var_248_int = 9032; // 0x35c PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x35d TObjFunc
	
Label_863:
	var_249_bool = 0; var_250_object = Obj(); // 0x35f PushV
	var_250_object = var_1_object; // 0x360 MovT
	func_2405(var_250_object); // 0x361 Call
	if(var_249_bool == 0) goto Label_873; // 0x363 JumpB
	var_255_int = 8210; // 0x364 PushI
	var_256_int = 9038; // 0x365 PushI
	var_257_int = 9033; // 0x366 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x367 TObjFunc
	
Label_873:
	var_258_bool = 0; var_259_object = Obj(); // 0x369 PushV
	var_259_object = var_1_object; // 0x36a MovT
	func_2417(var_259_object); // 0x36b Call
	if(var_258_bool == 0) goto Label_883; // 0x36d JumpB
	var_264_int = 8212; // 0x36e PushI
	var_265_int = 9039; // 0x36f PushI
	var_266_int = 9035; // 0x370 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x371 TObjFunc
	
Label_883:
	var_267_int = 8722; // 0x373 PushI
	var_268_int = -1; // 0x374 PushI
	var_269_int = 9559; // 0x375 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x376 TObjFunc
	return 0; // 0x378 Return
	
Label_889:
	var_270_int = 9039; // 0x379 PushI
	var_271_bool = var_20_string == var_270_int; // 0x37a Eq
	if(var_271_bool == 0) goto Label_907; // 0x37b JumpB
	var_272_string = ""; // 0x37c PushV
	var_272_string = "Neutral"; // 0x37d MovS
	func_595(var_21_bool, var_272_string); // 0x37e Call
	var_273_int = 8216; // 0x380 PushI
	SetMessage(var_273_int); // 0x381 TObjFunc
	ClearReplies(); // 0x383 TObjFunc
	var_274_int = 8721; // 0x385 PushI
	var_275_int = -1; // 0x386 PushI
	var_276_int = 9558; // 0x387 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x388 TObjFunc
	return 0; // 0x38a Return
	
Label_907:
	var_277_int = 9038; // 0x38b PushI
	var_278_bool = var_20_string == var_277_int; // 0x38c Eq
	if(var_278_bool == 0) goto Label_925; // 0x38d JumpB
	var_279_string = ""; // 0x38e PushV
	var_279_string = "Neutral"; // 0x38f MovS
	func_595(var_21_bool, var_279_string); // 0x390 Call
	var_280_int = 8215; // 0x392 PushI
	SetMessage(var_280_int); // 0x393 TObjFunc
	ClearReplies(); // 0x395 TObjFunc
	var_281_int = 8720; // 0x397 PushI
	var_282_int = -1; // 0x398 PushI
	var_283_int = 9557; // 0x399 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x39a TObjFunc
	return 0; // 0x39c Return
	
Label_925:
	var_284_int = 9037; // 0x39d PushI
	var_285_bool = var_20_string == var_284_int; // 0x39e Eq
	if(var_285_bool == 0) goto Label_943; // 0x39f JumpB
	var_286_string = ""; // 0x3a0 PushV
	var_286_string = "Neutral"; // 0x3a1 MovS
	func_595(var_21_bool, var_286_string); // 0x3a2 Call
	var_287_int = 8214; // 0x3a4 PushI
	SetMessage(var_287_int); // 0x3a5 TObjFunc
	ClearReplies(); // 0x3a7 TObjFunc
	var_288_int = 8719; // 0x3a9 PushI
	var_289_int = -1; // 0x3aa PushI
	var_290_int = 9556; // 0x3ab PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x3ac TObjFunc
	return 0; // 0x3ae Return
	
Label_943:
	var_291_int = 9040; // 0x3af PushI
	var_292_bool = var_20_string == var_291_int; // 0x3b0 Eq
	if(var_292_bool == 0) goto Label_961; // 0x3b1 JumpB
	var_293_string = ""; // 0x3b2 PushV
	var_293_string = "Neutral"; // 0x3b3 MovS
	func_595(var_21_bool, var_293_string); // 0x3b4 Call
	var_294_int = 8217; // 0x3b6 PushI
	SetMessage(var_294_int); // 0x3b7 TObjFunc
	ClearReplies(); // 0x3b9 TObjFunc
	var_295_int = 8718; // 0x3bb PushI
	var_296_int = -1; // 0x3bc PushI
	var_297_int = 9555; // 0x3bd PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x3be TObjFunc
	return 0; // 0x3c0 Return
	
Label_961:
	var_298_int = 9041; // 0x3c1 PushI
	var_299_bool = var_20_string == var_298_int; // 0x3c2 Eq
	if(var_299_bool == 0) goto Label_979; // 0x3c3 JumpB
	var_300_string = ""; // 0x3c4 PushV
	var_300_string = "Neutral"; // 0x3c5 MovS
	func_595(var_21_bool, var_300_string); // 0x3c6 Call
	var_301_int = 8218; // 0x3c8 PushI
	SetMessage(var_301_int); // 0x3c9 TObjFunc
	ClearReplies(); // 0x3cb TObjFunc
	var_302_int = 8717; // 0x3cd PushI
	var_303_int = -1; // 0x3ce PushI
	var_304_int = 9554; // 0x3cf PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x3d0 TObjFunc
	return 0; // 0x3d2 Return
	
Label_979:
	var_305_int = 6230; // 0x3d3 PushI
	var_306_bool = var_20_string == var_305_int; // 0x3d4 Eq
	if(var_306_bool == 0) goto Label_1002; // 0x3d5 JumpB
	var_307_string = ""; // 0x3d6 PushV
	var_307_string = "Neutral"; // 0x3d7 MovS
	func_595(var_21_bool, var_307_string); // 0x3d8 Call
	var_308_int = 5651; // 0x3da PushI
	SetMessage(var_308_int); // 0x3db TObjFunc
	ClearReplies(); // 0x3dd TObjFunc
	var_309_int = 5652; // 0x3df PushI
	var_310_int = 6232; // 0x3e0 PushI
	var_311_int = 6231; // 0x3e1 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x3e2 TObjFunc
	var_312_int = 5657; // 0x3e4 PushI
	var_313_int = -1; // 0x3e5 PushI
	var_314_int = 6236; // 0x3e6 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x3e7 TObjFunc
	return 0; // 0x3e9 Return
	
Label_1002:
	var_315_int = 6232; // 0x3ea PushI
	var_316_bool = var_20_string == var_315_int; // 0x3eb Eq
	if(var_316_bool == 0) goto Label_1030; // 0x3ec JumpB
	var_317_string = ""; // 0x3ed PushV
	var_317_string = "Neutral"; // 0x3ee MovS
	func_595(var_21_bool, var_317_string); // 0x3ef Call
	var_318_int = 5653; // 0x3f1 PushI
	SetMessage(var_318_int); // 0x3f2 TObjFunc
	ClearReplies(); // 0x3f4 TObjFunc
	var_319_int = 5654; // 0x3f6 PushI
	var_320_int = -1; // 0x3f7 PushI
	var_321_int = 6233; // 0x3f8 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x3f9 TObjFunc
	var_322_int = 5655; // 0x3fb PushI
	var_323_int = -1; // 0x3fc PushI
	var_324_int = 6234; // 0x3fd PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x3fe TObjFunc
	var_325_int = 5656; // 0x400 PushI
	var_326_int = -1; // 0x401 PushI
	var_327_int = 6235; // 0x402 PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x403 TObjFunc
	return 0; // 0x405 Return
	
Label_1030:
	var_328_int = 6241; // 0x406 PushI
	var_329_bool = var_20_string == var_328_int; // 0x407 Eq
	if(var_329_bool == 0) goto Label_1053; // 0x408 JumpB
	var_330_string = ""; // 0x409 PushV
	var_330_string = "Neutral"; // 0x40a MovS
	func_595(var_21_bool, var_330_string); // 0x40b Call
	var_331_int = 5661; // 0x40d PushI
	SetMessage(var_331_int); // 0x40e TObjFunc
	ClearReplies(); // 0x410 TObjFunc
	var_332_int = 5662; // 0x412 PushI
	var_333_int = 6243; // 0x413 PushI
	var_334_int = 6242; // 0x414 PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x415 TObjFunc
	var_335_int = 5666; // 0x417 PushI
	var_336_int = 6247; // 0x418 PushI
	var_337_int = 6246; // 0x419 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x41a TObjFunc
	return 0; // 0x41c Return
	
Label_1053:
	var_338_int = 6247; // 0x41d PushI
	var_339_bool = var_20_string == var_338_int; // 0x41e Eq
	if(var_339_bool == 0) goto Label_1076; // 0x41f JumpB
	var_340_string = ""; // 0x420 PushV
	var_340_string = "Neutral"; // 0x421 MovS
	func_595(var_21_bool, var_340_string); // 0x422 Call
	var_341_int = 5667; // 0x424 PushI
	SetMessage(var_341_int); // 0x425 TObjFunc
	ClearReplies(); // 0x427 TObjFunc
	var_342_int = 5668; // 0x429 PushI
	var_343_int = -1; // 0x42a PushI
	var_344_int = 6248; // 0x42b PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x42c TObjFunc
	var_345_int = 5669; // 0x42e PushI
	var_346_int = -1; // 0x42f PushI
	var_347_int = 6249; // 0x430 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x431 TObjFunc
	return 0; // 0x433 Return
	
Label_1076:
	var_348_int = 6243; // 0x434 PushI
	var_349_bool = var_20_string == var_348_int; // 0x435 Eq
	if(var_349_bool == 0) goto Label_1099; // 0x436 JumpB
	var_350_string = ""; // 0x437 PushV
	var_350_string = "Neutral"; // 0x438 MovS
	func_595(var_21_bool, var_350_string); // 0x439 Call
	var_351_int = 5663; // 0x43b PushI
	SetMessage(var_351_int); // 0x43c TObjFunc
	ClearReplies(); // 0x43e TObjFunc
	var_352_int = 5664; // 0x440 PushI
	var_353_int = -1; // 0x441 PushI
	var_354_int = 6244; // 0x442 PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x443 TObjFunc
	var_355_int = 5665; // 0x445 PushI
	var_356_int = -1; // 0x446 PushI
	var_357_int = 6245; // 0x447 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x448 TObjFunc
	return 0; // 0x44a Return
	
Label_1099:
	var_358_int = 6750; // 0x44b PushI
	var_359_bool = var_20_string == var_358_int; // 0x44c Eq
	if(var_359_bool == 0) goto Label_1122; // 0x44d JumpB
	var_360_string = ""; // 0x44e PushV
	var_360_string = "Neutral"; // 0x44f MovS
	func_595(var_21_bool, var_360_string); // 0x450 Call
	var_361_int = 6112; // 0x452 PushI
	SetMessage(var_361_int); // 0x453 TObjFunc
	ClearReplies(); // 0x455 TObjFunc
	var_362_int = 6113; // 0x457 PushI
	var_363_int = 6753; // 0x458 PushI
	var_364_int = 6751; // 0x459 PushI
	AddReply(var_362_int, var_363_int, var_364_int); // 0x45a TObjFunc
	var_365_int = 6114; // 0x45c PushI
	var_366_int = 6753; // 0x45d PushI
	var_367_int = 6752; // 0x45e PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x45f TObjFunc
	return 0; // 0x461 Return
	
Label_1122:
	var_368_int = 6753; // 0x462 PushI
	var_369_bool = var_20_string == var_368_int; // 0x463 Eq
	if(var_369_bool == 0) goto Label_1145; // 0x464 JumpB
	var_370_string = ""; // 0x465 PushV
	var_370_string = "Neutral"; // 0x466 MovS
	func_595(var_21_bool, var_370_string); // 0x467 Call
	var_371_int = 6115; // 0x469 PushI
	SetMessage(var_371_int); // 0x46a TObjFunc
	ClearReplies(); // 0x46c TObjFunc
	var_372_int = 6116; // 0x46e PushI
	var_373_int = 6768; // 0x46f PushI
	var_374_int = 6755; // 0x470 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x471 TObjFunc
	var_375_int = 6120; // 0x473 PushI
	var_376_int = 6760; // 0x474 PushI
	var_377_int = 6759; // 0x475 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x476 TObjFunc
	return 0; // 0x478 Return
	
Label_1145:
	var_378_int = 6760; // 0x479 PushI
	var_379_bool = var_20_string == var_378_int; // 0x47a Eq
	if(var_379_bool == 0) goto Label_1163; // 0x47b JumpB
	var_380_string = ""; // 0x47c PushV
	var_380_string = "Neutral"; // 0x47d MovS
	func_595(var_21_bool, var_380_string); // 0x47e Call
	var_381_int = 6121; // 0x480 PushI
	SetMessage(var_381_int); // 0x481 TObjFunc
	ClearReplies(); // 0x483 TObjFunc
	var_382_int = 6124; // 0x485 PushI
	var_383_int = 6768; // 0x486 PushI
	var_384_int = 6763; // 0x487 PushI
	AddReply(var_382_int, var_383_int, var_384_int); // 0x488 TObjFunc
	return 0; // 0x48a Return
	
Label_1163:
	var_385_int = 6756; // 0x48b PushI
	var_386_bool = var_20_string == var_385_int; // 0x48c Eq
	if(var_386_bool == 0) goto Label_1186; // 0x48d JumpB
	var_387_string = ""; // 0x48e PushV
	var_387_string = "Neutral"; // 0x48f MovS
	func_595(var_21_bool, var_387_string); // 0x490 Call
	var_388_int = 6117; // 0x492 PushI
	SetMessage(var_388_int); // 0x493 TObjFunc
	ClearReplies(); // 0x495 TObjFunc
	var_389_int = 6118; // 0x497 PushI
	var_390_int = 6764; // 0x498 PushI
	var_391_int = 6757; // 0x499 PushI
	AddReply(var_389_int, var_390_int, var_391_int); // 0x49a TObjFunc
	var_392_int = 6119; // 0x49c PushI
	var_393_int = 6765; // 0x49d PushI
	var_394_int = 6758; // 0x49e PushI
	AddReply(var_392_int, var_393_int, var_394_int); // 0x49f TObjFunc
	return 0; // 0x4a1 Return
	
Label_1186:
	var_395_int = 6765; // 0x4a2 PushI
	var_396_bool = var_20_string == var_395_int; // 0x4a3 Eq
	if(var_396_bool == 0) goto Label_1204; // 0x4a4 JumpB
	var_397_string = ""; // 0x4a5 PushV
	var_397_string = "Neutral"; // 0x4a6 MovS
	func_595(var_21_bool, var_397_string); // 0x4a7 Call
	var_398_int = 6126; // 0x4a9 PushI
	SetMessage(var_398_int); // 0x4aa TObjFunc
	ClearReplies(); // 0x4ac TObjFunc
	var_399_int = 6127; // 0x4ae PushI
	var_400_int = 6768; // 0x4af PushI
	var_401_int = 6766; // 0x4b0 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x4b1 TObjFunc
	return 0; // 0x4b3 Return
	
Label_1204:
	var_402_int = 6764; // 0x4b4 PushI
	var_403_bool = var_20_string == var_402_int; // 0x4b5 Eq
	if(var_403_bool == 0) goto Label_1232; // 0x4b6 JumpB
	var_404_string = ""; // 0x4b7 PushV
	var_404_string = "Neutral"; // 0x4b8 MovS
	func_595(var_21_bool, var_404_string); // 0x4b9 Call
	var_405_int = 6125; // 0x4bb PushI
	SetMessage(var_405_int); // 0x4bc TObjFunc
	ClearReplies(); // 0x4be TObjFunc
	var_406_int = 6128; // 0x4c0 PushI
	var_407_int = 6768; // 0x4c1 PushI
	var_408_int = 6767; // 0x4c2 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x4c3 TObjFunc
	var_409_int = 6132; // 0x4c5 PushI
	var_410_int = 6775; // 0x4c6 PushI
	var_411_int = 6774; // 0x4c7 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x4c8 TObjFunc
	var_412_int = 6135; // 0x4ca PushI
	var_413_int = 6768; // 0x4cb PushI
	var_414_int = 6777; // 0x4cc PushI
	AddReply(var_412_int, var_413_int, var_414_int); // 0x4cd TObjFunc
	return 0; // 0x4cf Return
	
Label_1232:
	var_415_int = 6775; // 0x4d0 PushI
	var_416_bool = var_20_string == var_415_int; // 0x4d1 Eq
	if(var_416_bool == 0) goto Label_1250; // 0x4d2 JumpB
	var_417_string = ""; // 0x4d3 PushV
	var_417_string = "Neutral"; // 0x4d4 MovS
	func_595(var_21_bool, var_417_string); // 0x4d5 Call
	var_418_int = 6133; // 0x4d7 PushI
	SetMessage(var_418_int); // 0x4d8 TObjFunc
	ClearReplies(); // 0x4da TObjFunc
	var_419_int = 6134; // 0x4dc PushI
	var_420_int = 6768; // 0x4dd PushI
	var_421_int = 6776; // 0x4de PushI
	AddReply(var_419_int, var_420_int, var_421_int); // 0x4df TObjFunc
	return 0; // 0x4e1 Return
	
Label_1250:
	var_422_int = 6768; // 0x4e2 PushI
	var_423_bool = var_20_string == var_422_int; // 0x4e3 Eq
	if(var_423_bool == 0) goto Label_1268; // 0x4e4 JumpB
	var_424_string = ""; // 0x4e5 PushV
	var_424_string = "Neutral"; // 0x4e6 MovS
	func_595(var_21_bool, var_424_string); // 0x4e7 Call
	var_425_int = 6129; // 0x4e9 PushI
	SetMessage(var_425_int); // 0x4ea TObjFunc
	ClearReplies(); // 0x4ec TObjFunc
	var_426_int = 6130; // 0x4ee PushI
	var_427_int = 6773; // 0x4ef PushI
	var_428_int = 6772; // 0x4f0 PushI
	AddReply(var_426_int, var_427_int, var_428_int); // 0x4f1 TObjFunc
	return 0; // 0x4f3 Return
	
Label_1268:
	var_429_int = 6773; // 0x4f4 PushI
	var_430_bool = var_20_string == var_429_int; // 0x4f5 Eq
	if(var_430_bool == 0) goto Label_1296; // 0x4f6 JumpB
	var_431_string = ""; // 0x4f7 PushV
	var_431_string = "Neutral"; // 0x4f8 MovS
	func_595(var_21_bool, var_431_string); // 0x4f9 Call
	var_432_int = 6131; // 0x4fb PushI
	SetMessage(var_432_int); // 0x4fc TObjFunc
	ClearReplies(); // 0x4fe TObjFunc
	var_433_bool = 0; var_434_object = Obj(); // 0x500 PushV
	var_434_object = var_1_object; // 0x501 MovT
	func_2417(var_434_object); // 0x502 Call
	if(var_433_bool == 0) goto Label_1290; // 0x504 JumpB
	var_435_int = 6136; // 0x505 PushI
	var_436_int = -1; // 0x506 PushI
	var_437_int = 6780; // 0x507 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x508 TObjFunc
	
Label_1290:
	var_438_int = 6137; // 0x50a PushI
	var_439_int = 6782; // 0x50b PushI
	var_440_int = 6781; // 0x50c PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x50d TObjFunc
	return 0; // 0x50f Return
	
Label_1296:
	var_441_int = 6782; // 0x510 PushI
	var_442_bool = var_20_string == var_441_int; // 0x511 Eq
	if(var_442_bool == 0) goto Label_1314; // 0x512 JumpB
	var_443_string = ""; // 0x513 PushV
	var_443_string = "Neutral"; // 0x514 MovS
	func_595(var_21_bool, var_443_string); // 0x515 Call
	var_444_int = 6138; // 0x517 PushI
	SetMessage(var_444_int); // 0x518 TObjFunc
	ClearReplies(); // 0x51a TObjFunc
	var_445_int = 6139; // 0x51c PushI
	var_446_int = -1; // 0x51d PushI
	var_447_int = 6783; // 0x51e PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x51f TObjFunc
	return 0; // 0x521 Return
	
Label_1314:
	var_3_string = 1; // 0x522 TMovB
	var_448_bool = 0; // 0x523 PushV
	func_2206(var_448_bool); // 0x524 Call
	if(var_448_bool == 0) goto Label_1322; // 0x526 JumpB
	lshStopAnimation(); // 0x527 Func
	goto Label_1324; // 0x529 Jump
	
Label_1324:
	return 0; // 0x52c Return
	
Label_1322:
	StopAnimation(); // 0x52a Func
	
Label_1326:
	return 0; // 0x52e Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool)
{
	var_22_int = 1; // 0x5d6 PushI
	if(var_22_int == 0) goto Label_1745; // 0x5d7 JumpB
	func_2151(); // 0x5d9 Call
	var_24_int = 11390; // 0x5db PushI
	var_25_bool = var_21_bool == var_24_int; // 0x5dc Eq
	if(var_25_bool == 0) goto Label_1517; // 0x5dd JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x5de PushV
	var_26_object = var_1_object; // 0x5df MovT
	var_27_object = var_0_object; // 0x5e0 MovT
	func_2269(); // 0x5e1 Call
	var_69_object = Obj(); var_70_object = Obj(); // 0x5e3 PushV
	var_69_object = var_1_object; // 0x5e4 MovT
	var_70_object = var_0_object; // 0x5e5 MovT
	func_2267(); // 0x5e6 Call
	var_71_object = Obj(); var_72_object = Obj(); // 0x5e8 PushV
	var_71_object = var_1_object; // 0x5e9 MovT
	var_72_object = var_0_object; // 0x5ea MovT
	func_2288(); // 0x5eb Call
	
Label_1517:
	var_97_int = 11393; // 0x5ed PushI
	var_98_bool = var_21_bool == var_97_int; // 0x5ee Eq
	if(var_98_bool == 0) goto Label_1535; // 0x5ef JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x5f0 PushV
	var_99_object = var_1_object; // 0x5f1 MovT
	var_100_object = var_0_object; // 0x5f2 MovT
	func_2267(); // 0x5f3 Call
	var_101_object = Obj(); var_102_object = Obj(); // 0x5f5 PushV
	var_101_object = var_1_object; // 0x5f6 MovT
	var_102_object = var_0_object; // 0x5f7 MovT
	func_2269(); // 0x5f8 Call
	var_103_object = Obj(); var_104_object = Obj(); // 0x5fa PushV
	var_103_object = var_1_object; // 0x5fb MovT
	var_104_object = var_0_object; // 0x5fc MovT
	func_2288(); // 0x5fd Call
	
Label_1535:
	var_105_int = 11026; // 0x5ff PushI
	var_106_bool = var_20_string == var_105_int; // 0x600 Eq
	if(var_106_bool == 0) goto Label_1587; // 0x601 JumpB
	var_107_string = ""; // 0x602 PushV
	var_107_string = "Neutral"; // 0x603 MovS
	func_1477(var_21_bool, var_107_string); // 0x604 Call
	var_122_int = 10004; // 0x606 PushI
	SetMessage(var_122_int); // 0x607 TObjFunc
	ClearReplies(); // 0x609 TObjFunc
	var_123_bool = 0; // 0x60b PushV
	var_123_bool = 0; // 0x60c MovB
	var_124_bool = 0; var_125_object = Obj(); // 0x60d PushV
	var_125_object = var_1_object; // 0x60e MovT
	func_2364(var_125_object); // 0x60f Call
	if(var_124_bool == 0) goto Label_1560; // 0x611 JumpB
	var_132_bool = 0; var_133_object = Obj(); // 0x612 PushV
	var_133_object = var_1_object; // 0x613 MovT
	func_2376(var_133_object); // 0x614 Call
	if(var_132_bool == 0) goto Label_1560; // 0x616 JumpB
	var_123_bool = 1; // 0x617 MovB
	
Label_1560:
	if(var_123_bool == 0) goto Label_1566; // 0x618 JumpB
	var_134_int = 10211; // 0x619 PushI
	var_135_int = 11256; // 0x61a PushI
	var_136_int = 11257; // 0x61b PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x61c TObjFunc
	
Label_1566:
	var_137_int = 10005; // 0x61e PushI
	var_138_int = 11028; // 0x61f PushI
	var_139_int = 11027; // 0x620 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x621 TObjFunc
	var_140_int = 10012; // 0x623 PushI
	var_141_int = 11035; // 0x624 PushI
	var_142_int = 11034; // 0x625 PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x626 TObjFunc
	var_143_int = 10015; // 0x628 PushI
	var_144_int = -1; // 0x629 PushI
	var_145_int = 11037; // 0x62a PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x62b TObjFunc
	var_146_int = 11383; // 0x62d PushI
	var_147_int = -1; // 0x62e PushI
	var_148_int = 12579; // 0x62f PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x630 TObjFunc
	return 0; // 0x632 Return
	
Label_1587:
	var_149_int = 11035; // 0x633 PushI
	var_150_bool = var_20_string == var_149_int; // 0x634 Eq
	if(var_150_bool == 0) goto Label_1605; // 0x635 JumpB
	var_151_string = ""; // 0x636 PushV
	var_151_string = "Neutral"; // 0x637 MovS
	func_1477(var_21_bool, var_151_string); // 0x638 Call
	var_152_int = 10013; // 0x63a PushI
	SetMessage(var_152_int); // 0x63b TObjFunc
	ClearReplies(); // 0x63d TObjFunc
	var_153_int = 10014; // 0x63f PushI
	var_154_int = -1; // 0x640 PushI
	var_155_int = 11036; // 0x641 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x642 TObjFunc
	return 0; // 0x644 Return
	
Label_1605:
	var_156_int = 11028; // 0x645 PushI
	var_157_bool = var_20_string == var_156_int; // 0x646 Eq
	if(var_157_bool == 0) goto Label_1628; // 0x647 JumpB
	var_158_string = ""; // 0x648 PushV
	var_158_string = "Neutral"; // 0x649 MovS
	func_1477(var_21_bool, var_158_string); // 0x64a Call
	var_159_int = 10006; // 0x64c PushI
	SetMessage(var_159_int); // 0x64d TObjFunc
	ClearReplies(); // 0x64f TObjFunc
	var_160_int = 10007; // 0x651 PushI
	var_161_int = 11030; // 0x652 PushI
	var_162_int = 11029; // 0x653 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x654 TObjFunc
	var_163_int = 10011; // 0x656 PushI
	var_164_int = -1; // 0x657 PushI
	var_165_int = 11033; // 0x658 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x659 TObjFunc
	return 0; // 0x65b Return
	
Label_1628:
	var_166_int = 11030; // 0x65c PushI
	var_167_bool = var_20_string == var_166_int; // 0x65d Eq
	if(var_167_bool == 0) goto Label_1651; // 0x65e JumpB
	var_168_string = ""; // 0x65f PushV
	var_168_string = "Neutral"; // 0x660 MovS
	func_1477(var_21_bool, var_168_string); // 0x661 Call
	var_169_int = 10008; // 0x663 PushI
	SetMessage(var_169_int); // 0x664 TObjFunc
	ClearReplies(); // 0x666 TObjFunc
	var_170_int = 10009; // 0x668 PushI
	var_171_int = -1; // 0x669 PushI
	var_172_int = 11031; // 0x66a PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x66b TObjFunc
	var_173_int = 10010; // 0x66d PushI
	var_174_int = -1; // 0x66e PushI
	var_175_int = 11032; // 0x66f PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x670 TObjFunc
	return 0; // 0x672 Return
	
Label_1651:
	var_176_int = 11256; // 0x673 PushI
	var_177_bool = var_20_string == var_176_int; // 0x674 Eq
	if(var_177_bool == 0) goto Label_1669; // 0x675 JumpB
	var_178_string = ""; // 0x676 PushV
	var_178_string = "Neutral"; // 0x677 MovS
	func_1477(var_21_bool, var_178_string); // 0x678 Call
	var_179_int = 10210; // 0x67a PushI
	SetMessage(var_179_int); // 0x67b TObjFunc
	ClearReplies(); // 0x67d TObjFunc
	var_180_int = 10325; // 0x67f PushI
	var_181_int = 11385; // 0x680 PushI
	var_182_int = 11384; // 0x681 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x682 TObjFunc
	return 0; // 0x684 Return
	
Label_1669:
	var_183_int = 11385; // 0x685 PushI
	var_184_bool = var_20_string == var_183_int; // 0x686 Eq
	if(var_184_bool == 0) goto Label_1692; // 0x687 JumpB
	var_185_string = ""; // 0x688 PushV
	var_185_string = "Neutral"; // 0x689 MovS
	func_1477(var_21_bool, var_185_string); // 0x68a Call
	var_186_int = 10326; // 0x68c PushI
	SetMessage(var_186_int); // 0x68d TObjFunc
	ClearReplies(); // 0x68f TObjFunc
	var_187_int = 10327; // 0x691 PushI
	var_188_int = 11388; // 0x692 PushI
	var_189_int = 11386; // 0x693 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x694 TObjFunc
	var_190_int = 10328; // 0x696 PushI
	var_191_int = 11388; // 0x697 PushI
	var_192_int = 11387; // 0x698 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x699 TObjFunc
	return 0; // 0x69b Return
	
Label_1692:
	var_193_int = 11388; // 0x69c PushI
	var_194_bool = var_20_string == var_193_int; // 0x69d Eq
	if(var_194_bool == 0) goto Label_1715; // 0x69e JumpB
	var_195_string = ""; // 0x69f PushV
	var_195_string = "Neutral"; // 0x6a0 MovS
	func_1477(var_21_bool, var_195_string); // 0x6a1 Call
	var_196_int = 10329; // 0x6a3 PushI
	SetMessage(var_196_int); // 0x6a4 TObjFunc
	ClearReplies(); // 0x6a6 TObjFunc
	var_197_int = 10330; // 0x6a8 PushI
	var_198_int = -1; // 0x6a9 PushI
	var_199_int = 11390; // 0x6aa PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x6ab TObjFunc
	var_200_int = 10331; // 0x6ad PushI
	var_201_int = 11392; // 0x6ae PushI
	var_202_int = 11391; // 0x6af PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x6b0 TObjFunc
	return 0; // 0x6b2 Return
	
Label_1715:
	var_203_int = 11392; // 0x6b3 PushI
	var_204_bool = var_20_string == var_203_int; // 0x6b4 Eq
	if(var_204_bool == 0) goto Label_1733; // 0x6b5 JumpB
	var_205_string = ""; // 0x6b6 PushV
	var_205_string = "Neutral"; // 0x6b7 MovS
	func_1477(var_21_bool, var_205_string); // 0x6b8 Call
	var_206_int = 10332; // 0x6ba PushI
	SetMessage(var_206_int); // 0x6bb TObjFunc
	ClearReplies(); // 0x6bd TObjFunc
	var_207_int = 10333; // 0x6bf PushI
	var_208_int = -1; // 0x6c0 PushI
	var_209_int = 11393; // 0x6c1 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x6c2 TObjFunc
	return 0; // 0x6c4 Return
	
Label_1733:
	var_3_string = 1; // 0x6c5 TMovB
	var_210_bool = 0; // 0x6c6 PushV
	func_2206(var_210_bool); // 0x6c7 Call
	if(var_210_bool == 0) goto Label_1741; // 0x6c9 JumpB
	lshStopAnimation(); // 0x6ca Func
	goto Label_1743; // 0x6cc Jump
	
Label_1743:
	return 0; // 0x6cf Return
	
Label_1741:
	StopAnimation(); // 0x6cd Func
	
Label_1745:
	return 0; // 0x6d1 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int)
{
	var_22_int = 1; // 0x76a PushI
	if(var_22_int == 0) goto Label_2055; // 0x76b JumpB
	func_2151(); // 0x76d Call
	var_24_int = 14011; // 0x76f PushI
	var_25_bool = var_21_int == var_24_int; // 0x770 Eq
	if(var_25_bool == 0) goto Label_1911; // 0x771 JumpB
	var_26_object = Obj(); var_27_object = Obj(); // 0x772 PushV
	var_26_object = var_1_object; // 0x773 MovT
	var_27_object = var_0_object; // 0x774 MovT
	func_2304(); // 0x775 Call
	
Label_1911:
	var_30_int = 13999; // 0x777 PushI
	var_31_bool = var_20_int == var_30_int; // 0x778 Eq
	if(var_31_bool == 0) goto Label_1948; // 0x779 JumpB
	var_32_string = ""; // 0x77a PushV
	var_32_string = "Neutral"; // 0x77b MovS
	func_1881(var_21_int, var_32_string); // 0x77c Call
	var_47_int = 12800; // 0x77e PushI
	SetMessage(var_47_int); // 0x77f TObjFunc
	ClearReplies(); // 0x781 TObjFunc
	var_48_bool = 0; // 0x783 PushV
	var_48_bool = 0; // 0x784 MovB
	var_49_bool = 0; var_50_object = Obj(); // 0x785 PushV
	var_50_object = var_1_object; // 0x786 MovT
	func_2381(var_50_object); // 0x787 Call
	if(var_49_bool == 0) goto Label_1936; // 0x789 JumpB
	var_57_bool = 0; var_58_object = Obj(); // 0x78a PushV
	var_58_object = var_1_object; // 0x78b MovT
	func_2393(var_58_object); // 0x78c Call
	if(var_57_bool == 0) goto Label_1936; // 0x78e JumpB
	var_48_bool = 1; // 0x78f MovB
	
Label_1936:
	if(var_48_bool == 0) goto Label_1942; // 0x790 JumpB
	var_63_int = 12801; // 0x791 PushI
	var_64_int = 14001; // 0x792 PushI
	var_65_int = 14000; // 0x793 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x794 TObjFunc
	
Label_1942:
	var_66_int = 12813; // 0x796 PushI
	var_67_int = -1; // 0x797 PushI
	var_68_int = 14013; // 0x798 PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x799 TObjFunc
	return 0; // 0x79b Return
	
Label_1948:
	var_69_int = 14001; // 0x79c PushI
	var_70_bool = var_20_int == var_69_int; // 0x79d Eq
	if(var_70_bool == 0) goto Label_1966; // 0x79e JumpB
	var_71_string = ""; // 0x79f PushV
	var_71_string = "Neutral"; // 0x7a0 MovS
	func_1881(var_21_int, var_71_string); // 0x7a1 Call
	var_72_int = 12802; // 0x7a3 PushI
	SetMessage(var_72_int); // 0x7a4 TObjFunc
	ClearReplies(); // 0x7a6 TObjFunc
	var_73_int = 12803; // 0x7a8 PushI
	var_74_int = 14003; // 0x7a9 PushI
	var_75_int = 14002; // 0x7aa PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x7ab TObjFunc
	return 0; // 0x7ad Return
	
Label_1966:
	var_76_int = 14003; // 0x7ae PushI
	var_77_bool = var_20_int == var_76_int; // 0x7af Eq
	if(var_77_bool == 0) goto Label_1989; // 0x7b0 JumpB
	var_78_string = ""; // 0x7b1 PushV
	var_78_string = "Neutral"; // 0x7b2 MovS
	func_1881(var_21_int, var_78_string); // 0x7b3 Call
	var_79_int = 12804; // 0x7b5 PushI
	SetMessage(var_79_int); // 0x7b6 TObjFunc
	ClearReplies(); // 0x7b8 TObjFunc
	var_80_int = 12805; // 0x7ba PushI
	var_81_int = 14005; // 0x7bb PushI
	var_82_int = 14004; // 0x7bc PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x7bd TObjFunc
	var_83_int = 12808; // 0x7bf PushI
	var_84_int = 14005; // 0x7c0 PushI
	var_85_int = 14007; // 0x7c1 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x7c2 TObjFunc
	return 0; // 0x7c4 Return
	
Label_1989:
	var_86_int = 14005; // 0x7c5 PushI
	var_87_bool = var_20_int == var_86_int; // 0x7c6 Eq
	if(var_87_bool == 0) goto Label_2007; // 0x7c7 JumpB
	var_88_string = ""; // 0x7c8 PushV
	var_88_string = "Neutral"; // 0x7c9 MovS
	func_1881(var_21_int, var_88_string); // 0x7ca Call
	var_89_int = 12806; // 0x7cc PushI
	SetMessage(var_89_int); // 0x7cd TObjFunc
	ClearReplies(); // 0x7cf TObjFunc
	var_90_int = 12807; // 0x7d1 PushI
	var_91_int = 14008; // 0x7d2 PushI
	var_92_int = 14006; // 0x7d3 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x7d4 TObjFunc
	return 0; // 0x7d6 Return
	
Label_2007:
	var_93_int = 14008; // 0x7d7 PushI
	var_94_bool = var_20_int == var_93_int; // 0x7d8 Eq
	if(var_94_bool == 0) goto Label_2025; // 0x7d9 JumpB
	var_95_string = ""; // 0x7da PushV
	var_95_string = "Neutral"; // 0x7db MovS
	func_1881(var_21_int, var_95_string); // 0x7dc Call
	var_96_int = 12809; // 0x7de PushI
	SetMessage(var_96_int); // 0x7df TObjFunc
	ClearReplies(); // 0x7e1 TObjFunc
	var_97_int = 12810; // 0x7e3 PushI
	var_98_int = 14010; // 0x7e4 PushI
	var_99_int = 14009; // 0x7e5 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x7e6 TObjFunc
	return 0; // 0x7e8 Return
	
Label_2025:
	var_100_int = 14010; // 0x7e9 PushI
	var_101_bool = var_20_int == var_100_int; // 0x7ea Eq
	if(var_101_bool == 0) goto Label_2043; // 0x7eb JumpB
	var_102_string = ""; // 0x7ec PushV
	var_102_string = "Neutral"; // 0x7ed MovS
	func_1881(var_21_int, var_102_string); // 0x7ee Call
	var_103_int = 12811; // 0x7f0 PushI
	SetMessage(var_103_int); // 0x7f1 TObjFunc
	ClearReplies(); // 0x7f3 TObjFunc
	var_104_int = 12812; // 0x7f5 PushI
	var_105_int = -1; // 0x7f6 PushI
	var_106_int = 14011; // 0x7f7 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x7f8 TObjFunc
	return 0; // 0x7fa Return
	
Label_2043:
	var_3_string = 1; // 0x7fb TMovB
	var_107_bool = 0; // 0x7fc PushV
	func_2206(var_107_bool); // 0x7fd Call
	if(var_107_bool == 0) goto Label_2051; // 0x7ff JumpB
	lshStopAnimation(); // 0x800 Func
	goto Label_2053; // 0x802 Jump
	
Label_2053:
	return 0; // 0x805 Return
	
Label_2051:
	StopAnimation(); // 0x803 Func
	
Label_2055:
	return 0; // 0x807 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool)
{
	func_2606(); // 0x7 Call
	var_21_bool = 0; // 0x9 PushV
	func_2068(var_21_bool); // 0xa Call
	var_24_bool = var_21_bool == 0; // 0xc Not
	if(var_24_bool == 0) goto Label_19; // 0xd JumpB
	TaskCall(0); // 0xf TaskCall
	func_0(); // 0x10 Call
	TaskReturn(); // 0x11 TaskReturn
	
Label_19:
	var_25_string = ""; // 0x13 PushV
	var_25_string = "Neutral"; // 0x14 MovS
	func_2133(var_25_string); // 0x15 Call
	lshWaitForAnimEnd(); // 0x17 Func
	goto Label_19; // 0x19 Jump
}


func_0()
{
	Hold(); // 0x0 Func
	return 0; // 0x2 Return
}


func_2304()
{
	var_28_string = "ood6Mishka1"; // 0x901 PushS
	var_29_int = 1; // 0x902 PushI
	SetVariable(var_28_string, var_29_int); // 0x903 Func
	return 0; // 0x905 Return
}


func_2178(var_136_int)
{
	var_137_float = 0; var_138_float = 0; // 0x882 PushV
	GetGameTime(var_138_float); // 0x883 Func
	var_139_int = 1; // 0x885 PushI
	var_140_int = 0; // 0x886 PushV
	var_141_int = 24; // 0x887 PushI
	var_140_int = var_138_float / var_138_float; // 0x888 Div2
	var_136_int = var_139_int + var_140_int; // 0x889 Add2
	return 2; // 0x88a Return
}


func_2310()
{
	var_28_string = "KnowMishka"; // 0x907 PushS
	var_29_int = 1; // 0x908 PushI
	SetVariable(var_28_string, var_29_int); // 0x909 Func
	return 0; // 0x90b Return
}


func_2056(var_21_bool)
{
	var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; // 0x808 PushV
	GetPosition(var_27_cvector); // 0x809 ObjFunc
	GetPosition(var_28_cvector); // 0x80b Func
	var_29_cvector = var_27_cvector - var_28_cvector; // 0x80d Sub2
	var_31_float = GetByIndex(var_29_cvector, 0); // 0x80e PushE
	var_32_float = GetByIndex(var_29_cvector, 2); // 0x80f PushE
	Rotate(var_31_float, var_32_float, var_30_bool); // 0x810 Func
	var_21_bool = var_30_bool; // 0x812 Mov
	return 8; // 0x813 Return
}


func_2441(var_222_bool)
{
	var_224_int = 0; var_225_string = ""; // 0x98a PushV
	var_225_string = "KnowMyth"; // 0x98b MovS
	func_2168(var_224_int, var_225_string); // 0x98c Call
	var_226_int = 1; // 0x98e PushI
	var_227_bool = var_224_int == var_226_int; // 0x98f Eq
	if(var_227_bool == 0) goto Label_2451; // 0x990 JumpB
	var_222_bool = 1; // 0x991 MovB
	return 0; // 0x992 Return
	
Label_2451:
	var_222_bool = 0; // 0x993 MovB
	return 0; // 0x994 Return
}


func_2187(var_134_bool, var_135_int)
{
	var_136_int = 0; // 0x88c PushV
	func_2178(var_136_int); // 0x88d Call
	var_134_bool = var_136_int == var_135_int; // 0x88f Eq2
	return 0; // 0x890 Return
}


func_2316(var_152_bool)
{
	var_154_int = 0; var_155_string = ""; // 0x90d PushV
	var_155_string = "ood1Mishka1"; // 0x90e MovS
	func_2168(var_154_int, var_155_string); // 0x90f Call
	var_158_int = 0; // 0x911 PushI
	var_159_bool = var_154_int == var_158_int; // 0x912 Eq
	if(var_159_bool == 0) goto Label_2326; // 0x913 JumpB
	var_152_bool = 1; // 0x914 MovB
	return 0; // 0x915 Return
	
Label_2326:
	var_152_bool = 0; // 0x916 MovB
	return 0; // 0x917 Return
}


func_398(var_0_object, var_1_object, var_2_object, var_3_object, var_160_object, var_161_object)
{
	var_0_object = var_161_object; // 0x18f TMov
	var_1_object = var_160_object; // 0x190 TMov
	var_3_object = 0; // 0x191 TMovB
	var_166_int = 1; // 0x192 PushI
	if(var_166_int == 0) goto Label_565; // 0x193 JumpB
	var_167_bool = 0; // 0x194 PushV
	var_167_bool = 0; // 0x195 MovB
	var_168_bool = 0; var_169_object = Obj(); // 0x196 PushV
	var_169_object = var_1_object; // 0x197 MovT
	func_2316(var_169_object); // 0x198 Call
	if(var_168_bool == 0) goto Label_417; // 0x19a JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0x19b PushV
	var_177_object = var_1_object; // 0x19c MovT
	func_2352(var_177_object); // 0x19d Call
	if(var_176_bool == 0) goto Label_417; // 0x19f JumpB
	var_167_bool = 1; // 0x1a0 MovB
	
Label_417:
	if(var_167_bool == 0) goto Label_438; // 0x1a1 JumpB
	var_182_string = ""; // 0x1a2 PushV
	var_182_string = "Neutral"; // 0x1a3 MovS
	func_595(var_161_object, var_182_string); // 0x1a4 Call
	var_187_int = 5647; // 0x1a6 PushI
	SetMessage(var_187_int); // 0x1a7 TObjFunc
	ClearReplies(); // 0x1a9 TObjFunc
	var_188_int = 5648; // 0x1ab PushI
	var_189_int = 6756; // 0x1ac PushI
	var_190_int = 6227; // 0x1ad PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x1ae TObjFunc
	var_191_int = 5671; // 0x1b0 PushI
	var_192_int = 6750; // 0x1b1 PushI
	var_193_int = 6252; // 0x1b2 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x1b3 TObjFunc
	goto Label_565; // 0x1b5 Jump
	
Label_565:
	var_194_bool = 0; // 0x235 PushV
	func_2206(var_194_bool); // 0x236 Call
	if(var_194_bool == 0) goto Label_580; // 0x238 JumpB
	
Label_569:
	lshWaitForAnimEnd(); // 0x239 Func
	var_195_object = var_3_object; // 0x23b PushT
	if(var_195_object == 0) goto Label_574; // 0x23c JumpB
	goto Label_579; // 0x23d Jump
	
Label_579:
	goto Label_594; // 0x243 Jump
	
Label_594:
	return 0; // 0x252 Return
	
Label_574:
	var_196_string = ""; // 0x23e PushV
	var_196_string = var_2_object; // 0x23f MovT
	func_2133(var_196_string); // 0x240 Call
	goto Label_569; // 0x242 Jump
	
Label_580:
	var_197_string = "all"; // 0x244 PushS
	var_198_string = "idle"; // 0x245 PushS
	PlayAnimation(var_197_string, var_198_string); // 0x246 Func
	
Label_584:
	WaitForAnimEnd(); // 0x248 Func
	var_199_object = var_3_object; // 0x24a PushT
	if(var_199_object == 0) goto Label_589; // 0x24b JumpB
	goto Label_594; // 0x24c Jump
	
Label_589:
	var_200_string = "all"; // 0x24d PushS
	var_201_string = "idle"; // 0x24e PushS
	PlayAnimation(var_200_string, var_201_string); // 0x24f Func
	goto Label_584; // 0x251 Jump
	
Label_438:
	var_202_bool = 0; // 0x1b6 PushV
	var_202_bool = 0; // 0x1b7 MovB
	var_203_bool = 0; var_204_object = Obj(); // 0x1b8 PushV
	var_204_object = var_1_object; // 0x1b9 MovT
	func_2328(var_204_object); // 0x1ba Call
	if(var_203_bool == 0) goto Label_452; // 0x1bc JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x1bd PushV
	var_210_object = var_1_object; // 0x1be MovT
	func_2316(var_210_object); // 0x1bf Call
	var_211_bool = var_209_bool == 0; // 0x1c1 Not
	if(var_211_bool == 0) goto Label_452; // 0x1c2 JumpB
	var_202_bool = 1; // 0x1c3 MovB
	
Label_452:
	if(var_202_bool == 0) goto Label_473; // 0x1c4 JumpB
	var_212_string = ""; // 0x1c5 PushV
	var_212_string = "Neutral"; // 0x1c6 MovS
	func_595(var_161_object, var_212_string); // 0x1c7 Call
	var_213_int = 5659; // 0x1c9 PushI
	SetMessage(var_213_int); // 0x1ca TObjFunc
	ClearReplies(); // 0x1cc TObjFunc
	var_214_int = 5660; // 0x1ce PushI
	var_215_int = 6241; // 0x1cf PushI
	var_216_int = 6240; // 0x1d0 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x1d1 TObjFunc
	var_217_int = 5670; // 0x1d3 PushI
	var_218_int = 6241; // 0x1d4 PushI
	var_219_int = 6250; // 0x1d5 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x1d6 TObjFunc
	goto Label_565; // 0x1d8 Jump
	
Label_473:
	var_220_bool = 0; var_221_object = Obj(); // 0x1d9 PushV
	var_221_object = var_1_object; // 0x1da MovT
	func_2340(var_221_object); // 0x1db Call
	if(var_220_bool == 0) goto Label_498; // 0x1dd JumpB
	var_226_string = ""; // 0x1de PushV
	var_226_string = "Neutral"; // 0x1df MovS
	func_595(var_161_object, var_226_string); // 0x1e0 Call
	var_227_int = 5649; // 0x1e2 PushI
	SetMessage(var_227_int); // 0x1e3 TObjFunc
	ClearReplies(); // 0x1e5 TObjFunc
	var_228_int = 5650; // 0x1e7 PushI
	var_229_int = 6230; // 0x1e8 PushI
	var_230_int = 6229; // 0x1e9 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1ea TObjFunc
	var_231_int = 5658; // 0x1ec PushI
	var_232_int = 6230; // 0x1ed PushI
	var_233_int = 6237; // 0x1ee PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1ef TObjFunc
	goto Label_565; // 0x1f1 Jump
	
Label_498:
	var_234_string = ""; // 0x1f2 PushV
	var_234_string = "Neutral"; // 0x1f3 MovS
	func_595(var_161_object, var_234_string); // 0x1f4 Call
	var_235_int = 8187; // 0x1f6 PushI
	SetMessage(var_235_int); // 0x1f7 TObjFunc
	ClearReplies(); // 0x1f9 TObjFunc
	var_236_bool = 0; var_237_object = Obj(); // 0x1fb PushV
	var_237_object = var_1_object; // 0x1fc MovT
	func_2441(var_237_object); // 0x1fd Call
	if(var_236_bool == 0) goto Label_517; // 0x1ff JumpB
	var_242_int = 8191; // 0x200 PushI
	var_243_int = 9041; // 0x201 PushI
	var_244_int = 9014; // 0x202 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x203 TObjFunc
	
Label_517:
	var_245_bool = 0; var_246_object = Obj(); // 0x205 PushV
	var_246_object = var_1_object; // 0x206 MovT
	func_2453(var_246_object); // 0x207 Call
	if(var_245_bool == 0) goto Label_527; // 0x209 JumpB
	var_251_int = 8192; // 0x20a PushI
	var_252_int = 9040; // 0x20b PushI
	var_253_int = 9015; // 0x20c PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x20d TObjFunc
	
Label_527:
	var_254_bool = 0; var_255_object = Obj(); // 0x20f PushV
	var_255_object = var_1_object; // 0x210 MovT
	func_2429(var_255_object); // 0x211 Call
	if(var_254_bool == 0) goto Label_537; // 0x213 JumpB
	var_260_int = 8209; // 0x214 PushI
	var_261_int = 9037; // 0x215 PushI
	var_262_int = 9032; // 0x216 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x217 TObjFunc
	
Label_537:
	var_263_bool = 0; var_264_object = Obj(); // 0x219 PushV
	var_264_object = var_1_object; // 0x21a MovT
	func_2405(var_264_object); // 0x21b Call
	if(var_263_bool == 0) goto Label_547; // 0x21d JumpB
	var_269_int = 8210; // 0x21e PushI
	var_270_int = 9038; // 0x21f PushI
	var_271_int = 9033; // 0x220 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x221 TObjFunc
	
Label_547:
	var_272_bool = 0; var_273_object = Obj(); // 0x223 PushV
	var_273_object = var_1_object; // 0x224 MovT
	func_2417(var_273_object); // 0x225 Call
	if(var_272_bool == 0) goto Label_557; // 0x227 JumpB
	var_278_int = 8212; // 0x228 PushI
	var_279_int = 9039; // 0x229 PushI
	var_280_int = 9035; // 0x22a PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x22b TObjFunc
	
Label_557:
	var_281_int = 8722; // 0x22d PushI
	var_282_int = -1; // 0x22e PushI
	var_283_int = 9559; // 0x22f PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x230 TObjFunc
	goto Label_565; // 0x232 Jump
}


func_2574()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0xa0e PushV
	var_36_string = "Adding diary entry"; // 0xa0f PushS
	Trace(var_36_string); // 0xa10 Func
	var_37_int = 45; // 0xa12 PushI
	var_38_int = 2; // 0xa13 PushI
	var_39_int = 12127; // 0xa14 PushI
	CreateDiaryEntry(var_35_object, var_37_int, var_38_int, var_39_int); // 0xa15 Func
	var_40_bool = 0; var_41_object = Obj(); var_42_int = 0; // 0xa17 PushV
	var_41_object = var_35_object; // 0xa18 Mov
	var_42_int = 43; // 0xa19 MovI
	func_2478(var_40_bool, var_41_object, var_42_int); // 0xa1a Call
	return 2; // 0xa1c Return
}


func_1809(var_0_object, var_1_object, var_2_object, var_3_object, var_373_object, var_374_object)
{
	var_0_object = var_374_object; // 0x712 TMov
	var_1_object = var_373_object; // 0x713 TMov
	var_3_object = 0; // 0x714 TMovB
	var_379_int = 1; // 0x715 PushI
	if(var_379_int == 0) goto Label_1851; // 0x716 JumpB
	var_380_string = ""; // 0x717 PushV
	var_380_string = "Neutral"; // 0x718 MovS
	func_1881(var_374_object, var_380_string); // 0x719 Call
	var_385_int = 12800; // 0x71b PushI
	SetMessage(var_385_int); // 0x71c TObjFunc
	ClearReplies(); // 0x71e TObjFunc
	var_386_bool = 0; // 0x720 PushV
	var_386_bool = 0; // 0x721 MovB
	var_387_bool = 0; var_388_object = Obj(); // 0x722 PushV
	var_388_object = var_1_object; // 0x723 MovT
	func_2381(var_388_object); // 0x724 Call
	if(var_387_bool == 0) goto Label_1837; // 0x726 JumpB
	var_393_bool = 0; var_394_object = Obj(); // 0x727 PushV
	var_394_object = var_1_object; // 0x728 MovT
	func_2393(var_394_object); // 0x729 Call
	if(var_393_bool == 0) goto Label_1837; // 0x72b JumpB
	var_386_bool = 1; // 0x72c MovB
	
Label_1837:
	if(var_386_bool == 0) goto Label_1843; // 0x72d JumpB
	var_399_int = 12801; // 0x72e PushI
	var_400_int = 14001; // 0x72f PushI
	var_401_int = 14000; // 0x730 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0x731 TObjFunc
	
Label_1843:
	var_402_int = 12813; // 0x733 PushI
	var_403_int = -1; // 0x734 PushI
	var_404_int = 14013; // 0x735 PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x736 TObjFunc
	goto Label_1851; // 0x738 Jump
	
Label_1851:
	var_405_bool = 0; // 0x73b PushV
	func_2206(var_405_bool); // 0x73c Call
	if(var_405_bool == 0) goto Label_1866; // 0x73e JumpB
	
Label_1855:
	lshWaitForAnimEnd(); // 0x73f Func
	var_406_object = var_3_object; // 0x741 PushT
	if(var_406_object == 0) goto Label_1860; // 0x742 JumpB
	goto Label_1865; // 0x743 Jump
	
Label_1865:
	goto Label_1880; // 0x749 Jump
	
Label_1880:
	return 0; // 0x758 Return
	
Label_1860:
	var_407_string = ""; // 0x744 PushV
	var_407_string = var_2_object; // 0x745 MovT
	func_2133(var_407_string); // 0x746 Call
	goto Label_1855; // 0x748 Jump
	
Label_1866:
	var_408_string = "all"; // 0x74a PushS
	var_409_string = "idle"; // 0x74b PushS
	PlayAnimation(var_408_string, var_409_string); // 0x74c Func
	
Label_1870:
	WaitForAnimEnd(); // 0x74e Func
	var_410_object = var_3_object; // 0x750 PushT
	if(var_410_object == 0) goto Label_1875; // 0x751 JumpB
	goto Label_1880; // 0x752 Jump
	
Label_1875:
	var_411_string = "all"; // 0x753 PushS
	var_412_string = "idle"; // 0x754 PushS
	PlayAnimation(var_411_string, var_412_string); // 0x755 Func
	goto Label_1870; // 0x757 Jump
}


func_2193(var_415_bool)
{
	var_416_bool = 0; var_417_bool = 0; // 0x891 PushV
	var_418_string = ""; // 0x892 PushV
	var_418_string = "No"; // 0x893 MovS
	func_2133(var_418_string); // 0x894 Call
	lshWaitForAnimEnd(var_417_bool); // 0x896 Func
	var_415_bool = var_417_bool; // 0x898 Mov
	return 2; // 0x899 Return
}


func_2068(var_21_bool)
{
	var_22_bool = 0; var_23_bool = 0; // 0x814 PushV
	IsLoaded(var_23_bool); // 0x815 Func
	var_21_bool = var_23_bool; // 0x817 Mov
	return 2; // 0x818 Return
}


func_2453(var_231_bool)
{
	var_233_int = 0; var_234_string = ""; // 0x996 PushV
	var_234_string = "KnowPredictions"; // 0x997 MovS
	func_2168(var_233_int, var_234_string); // 0x998 Call
	var_235_int = 1; // 0x99a PushI
	var_236_bool = var_233_int == var_235_int; // 0x99b Eq
	if(var_236_bool == 0) goto Label_2463; // 0x99c JumpB
	var_231_bool = 1; // 0x99d MovB
	return 0; // 0x99e Return
	
Label_2463:
	var_231_bool = 0; // 0x99f MovB
	return 0; // 0x9a0 Return
}


func_2328(var_189_bool)
{
	var_191_int = 0; var_192_string = ""; // 0x919 PushV
	var_192_string = "ood1Mishka2"; // 0x91a MovS
	func_2168(var_191_int, var_192_string); // 0x91b Call
	var_193_int = 0; // 0x91d PushI
	var_194_bool = var_191_int == var_193_int; // 0x91e Eq
	if(var_194_bool == 0) goto Label_2338; // 0x91f JumpB
	var_189_bool = 1; // 0x920 MovB
	return 0; // 0x921 Return
	
Label_2338:
	var_189_bool = 0; // 0x922 MovB
	return 0; // 0x923 Return
}


func_2073(var_35_bool)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; // 0x819 PushV
	GetPosition(var_46_cvector); // 0x81a ObjFunc
	GetEyesHeight(var_45_float); // 0x81c ObjFunc
	var_53_float = GetByIndex(var_46_cvector, 1); // 0x81e PushE
	var_53_float = var_53_float + var_45_float; // 0x81f Add2
	SetByIndex(var_46_cvector, 1) = var_53_float; // 0x820 PopE
	GetPosition(var_47_cvector); // 0x821 Func
	GetEyesHeight(var_45_float); // 0x823 Func
	var_54_float = GetByIndex(var_47_cvector, 1); // 0x825 PushE
	var_54_float = var_54_float + var_45_float; // 0x826 Add2
	SetByIndex(var_47_cvector, 1) = var_54_float; // 0x827 PopE
	var_48_cvector = var_46_cvector - var_47_cvector; // 0x828 Sub2
	var_55_float = GetByIndex(var_48_cvector, 1); // 0x829 PushE
	var_55_float = 0; // 0x82a MovI
	SetByIndex(var_48_cvector, 1) = var_55_float; // 0x82b PopE
	var_56_int = var_48_cvector | var_48_cvector; // 0x82c Or
	var_57_float = sqrt(var_56_int); // 0x82d Sqrt
	var_48_cvector = var_48_cvector / var_48_cvector; // 0x82e Div2
	var_49_cvector = -var_48_cvector; // 0x82f Neg2
	var_58_int = 70; // 0x830 PushI
	var_59_float = var_48_cvector * var_58_int; // 0x831 Mult
	var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); // 0x832 PushV
	var_62_cvector = CVector(0.0, 1.0, 0.0); // 0x833 PushVec
	var_61_cvector = var_49_cvector ^ var_62_cvector; // 0x834 Xor2
	func_2158(var_60_cvector, var_61_cvector); // 0x835 Call
	var_68_int = 25; // 0x837 PushI
	var_69_float = var_60_cvector * var_68_int; // 0x838 Mult
	var_70_int = var_59_float + var_69_float; // 0x839 Add
	var_71_cvector = CVector(0.0, 10.0, 0.0); // 0x83a PushVec
	var_50_cvector = var_70_int - var_71_cvector; // 0x83b Sub2
	var_51_cvector = var_47_cvector + var_50_cvector; // 0x83c Add2
	IsOverrideActive(var_52_bool); // 0x83d Func
	var_72_bool = var_52_bool; // 0x83f Push
	if(var_72_bool == 0) goto Label_2115; // 0x840 JumpB
	var_35_bool = 0; // 0x841 MovB
	return 16; // 0x842 Return
	
Label_2115:
	StopWorld(); // 0x843 Func
	CameraTransit(var_51_cvector, var_49_cvector); // 0x845 Func
	var_73_float = GetByIndex(var_50_cvector, 0); // 0x847 PushE
	var_74_float = GetByIndex(var_50_cvector, 2); // 0x848 PushE
	Rotate(var_73_float, var_74_float); // 0x849 Func
	CameraWaitForPlayFinish(); // 0x84b Func
	ResumeWorld(); // 0x84d Func
	var_35_bool = 1; // 0x84f MovB
	return 16; // 0x850 Return
}


func_2202(var_76_int)
{
	var_76_int = 2871; // 0x89a MovI
	return 0; // 0x89b Return
}


func_2204(var_77_string)
{
	var_77_string = "ui/NPC_Mishka.png"; // 0x89c MovS
	return 0; // 0x89d Return
}


func_2206(var_23_bool)
{
	var_23_bool = 1; // 0x89e MovB
	return 0; // 0x89f Return
}


func_2590()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0xa1e PushV
	var_46_string = "Adding diary entry"; // 0xa1f PushS
	Trace(var_46_string); // 0xa20 Func
	var_47_int = 136; // 0xa22 PushI
	var_48_int = 2; // 0xa23 PushI
	var_49_int = 15306; // 0xa24 PushI
	CreateDiaryEntry(var_45_object, var_47_int, var_48_int, var_49_int); // 0xa25 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0xa27 PushV
	var_51_object = var_45_object; // 0xa28 Mov
	var_52_int = 26; // 0xa29 MovI
	func_2478(var_50_bool, var_51_object, var_52_int); // 0xa2a Call
	return 2; // 0xa2c Return
}


func_2208()
{
	var_28_string = "ood1Mishka1"; // 0x8a1 PushS
	var_29_int = 1; // 0x8a2 PushI
	SetVariable(var_28_string, var_29_int); // 0x8a3 Func
	return 0; // 0x8a5 Return
}


func_2465(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x9a1 PushV
	GetDiaryRoot(var_61_object); // 0x9a2 Func
	var_62_bool = var_61_object == 0; // 0x9a4 Not
	if(var_62_bool == 0) goto Label_2475; // 0x9a5 JumpB
	var_63_string = "Can't retrieve diary root"; // 0x9a6 PushS
	Trace(var_63_string); // 0x9a7 Func
	var_59_object = 0; // 0x9a9 MovB
	return 2; // 0x9aa Return
	
Label_2475:
	var_59_object = var_61_object; // 0x9ab Mov
	return 2; // 0x9ac Return
}


func_2340(var_206_bool)
{
	var_208_int = 0; var_209_string = ""; // 0x925 PushV
	var_209_string = "ood1Mishka3"; // 0x926 MovS
	func_2168(var_208_int, var_209_string); // 0x927 Call
	var_210_int = 0; // 0x929 PushI
	var_211_bool = var_208_int == var_210_int; // 0x92a Eq
	if(var_211_bool == 0) goto Label_2350; // 0x92b JumpB
	var_206_bool = 1; // 0x92c MovB
	return 0; // 0x92d Return
	
Label_2350:
	var_206_bool = 0; // 0x92e MovB
	return 0; // 0x92f Return
}


func_2214()
{
	var_117_string = "ood1Mishka2"; // 0x8a7 PushS
	var_118_int = 1; // 0x8a8 PushI
	SetVariable(var_117_string, var_118_int); // 0x8a9 Func
	return 0; // 0x8ab Return
}


func_2220()
{
	var_135_string = "ood1Mishka3"; // 0x8ad PushS
	var_136_int = 1; // 0x8ae PushI
	SetVariable(var_135_string, var_136_int); // 0x8af Func
	return 0; // 0x8b1 Return
}


func_2606()
{
	var_20_bool = GlobalVars[1]; // 0xa2e PushGE
	var_20_bool = 0; // 0xa2f MovB
	GlobalVars[1] = var_20_bool; // 0xa30 PopGE
	return 0; // 0xa31 Return
}


func_2478(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0x9ae PushV
	var_59_object = Obj(); // 0x9af PushV
	func_2465(var_59_object); // 0x9b0 Call
	var_56_object = var_59_object; // 0x9b1 Mov
	Find(var_52_int, var_57_object); // 0x9b3 ObjFunc
	var_64_bool = var_57_object == 0; // 0x9b5 Not
	if(var_64_bool == 0) goto Label_2493; // 0x9b6 JumpB
	var_65_string = "Can't find diary parent with id: "; // 0x9b7 PushS
	var_66_int = var_65_string + var_52_int; // 0x9b8 Add
	Trace(var_66_int); // 0x9b9 Func
	var_50_bool = 0; // 0x9bb MovB
	return 6; // 0x9bc Return
	
Label_2493:
	AddChild(var_51_object); // 0x9bd ObjFunc
	var_67_string = "player_diary"; // 0x9bf PushS
	var_68_int = 1; // 0x9c0 PushI
	SetVariable(var_67_string, var_68_int); // 0x9c1 Func
	GetCategory(var_58_int); // 0x9c3 ObjFunc
	SetDiarySection(var_58_int); // 0x9c5 Func
	var_50_bool = 0; // 0x9c7 MovB
	return 6; // 0x9c8 Return
}


func_2352(var_160_bool)
{
	var_162_int = 0; var_163_string = ""; // 0x931 PushV
	var_163_string = "d1q04"; // 0x932 MovS
	func_2168(var_162_int, var_163_string); // 0x933 Call
	var_164_int = 1; // 0x935 PushI
	var_165_bool = var_162_int == var_164_int; // 0x936 Eq
	if(var_165_bool == 0) goto Label_2362; // 0x937 JumpB
	var_160_bool = 1; // 0x938 MovB
	return 0; // 0x939 Return
	
Label_2362:
	var_160_bool = 0; // 0x93a MovB
	return 0; // 0x93b Return
}


func_49(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x31 PushV
	var_0_object = var_25_object; // 0x32 TMov
	var_35_bool = 0; var_36_object = Obj(); // 0x33 PushV
	var_36_object = var_25_object; // 0x34 Mov
	func_2073(var_36_object); // 0x35 Call
	var_75_bool = var_35_bool == 0; // 0x37 Not
	if(var_75_bool == 0) goto Label_59; // 0x38 JumpB
	var_24_int = -2; // 0x39 MovI
	return 8; // 0x3a Return
	
Label_59:
	CreateDialog(var_31_object); // 0x3b Func
	var_76_int = 0; // 0x3d PushV
	func_2202(var_76_int); // 0x3e Call
	SetNPCName(var_76_int); // 0x40 ObjFunc
	var_77_string = ""; // 0x42 PushV
	func_2204(var_77_string); // 0x43 Call
	SetPhoto(var_77_string); // 0x45 ObjFunc
	var_78_int = 0; // 0x47 PushV
	func_2557(var_78_int); // 0x48 Call
	SetPlayerName(var_78_int); // 0x4a ObjFunc
	var_33_int = -1; // 0x4c MovI
	IsOverrideActive(var_32_bool); // 0x4d Func
	var_86_bool = var_32_bool; // 0x4f Push
	if(var_86_bool == 0) goto Label_83; // 0x50 JumpB
	var_24_int = -2; // 0x51 MovI
	return 8; // 0x52 Return
	
Label_83:
	DoDialog(var_31_object); // 0x53 Func
	var_87_object = Obj(); var_88_object = Obj(); // 0x55 PushV
	var_87_object = var_25_object; // 0x56 Mov
	var_88_object = var_31_object; // 0x57 Mov
	TaskCall(3); // 0x58 TaskCall
	func_112(var_89_object, var_90_object, var_91_string, var_92_bool, var_87_object, var_88_object); // 0x59 Call
	TaskReturn(); // 0x5a TaskReturn
	IsDialogEnd(var_34_bool); // 0x5c ObjFunc
	
Label_94:
	var_131_bool = var_34_bool == 0; // 0x5e Not
	if(var_131_bool == 0) goto Label_101; // 0x5f JumpB
	sync(); // 0x60 Func
	IsDialogEnd(var_34_bool); // 0x62 ObjFunc
	goto Label_94; // 0x64 Jump
	
Label_101:
	var_132_object = Obj(); // 0x65 PushV
	var_132_object = var_25_object; // 0x66 Mov
	func_2129(); // 0x67 Call
	StopDialog(var_31_object); // 0x69 Func
	GetReturnValue(var_33_int); // 0x6b ObjFunc
	var_24_int = var_33_int; // 0x6d Mov
	return 8; // 0x6e Return
}


func_2610(var_21_object)
{
	var_22_bool = GlobalVars[1]; // 0xa33 PushGE
	var_23_bool = var_22_bool == 0; // 0xa34 Not
	if(var_23_bool == 0) goto Label_2623; // 0xa35 JumpB
	var_24_int = 0; var_25_object = Obj(); // 0xa36 PushV
	var_25_object = var_21_object; // 0xa37 Mov
	TaskCall(2); // 0xa38 TaskCall
	func_49(var_26_object, var_24_int, var_25_object); // 0xa39 Call
	TaskReturn(); // 0xa3a TaskReturn
	var_133_bool = GlobalVars[1]; // 0xa3c PushGE
	var_133_bool = 1; // 0xa3d MovB
	GlobalVars[1] = var_133_bool; // 0xa3e PopGE
	
Label_2623:
	var_134_bool = 0; var_135_int = 0; // 0xa3f PushV
	var_135_int = 1; // 0xa40 MovI
	func_2187(var_134_bool, var_135_int); // 0xa41 Call
	if(var_134_bool == 0) goto Label_2635; // 0xa43 JumpB
	var_142_int = 0; var_143_object = Obj(); // 0xa44 PushV
	var_143_object = var_21_object; // 0xa45 Mov
	TaskCall(4); // 0xa46 TaskCall
	func_335(var_144_object, var_142_int, var_143_object); // 0xa47 Call
	TaskReturn(); // 0xa48 TaskReturn
	return 0; // 0xa4a Return
	
Label_2635:
	var_286_bool = 0; var_287_int = 0; // 0xa4b PushV
	var_287_int = 3; // 0xa4c MovI
	func_2187(var_286_bool, var_287_int); // 0xa4d Call
	if(var_286_bool == 0) goto Label_2647; // 0xa4f JumpB
	var_288_int = 0; var_289_object = Obj(); // 0xa50 PushV
	var_289_object = var_21_object; // 0xa51 Mov
	TaskCall(6); // 0xa52 TaskCall
	func_1327(var_290_object, var_288_int, var_289_object); // 0xa53 Call
	TaskReturn(); // 0xa54 TaskReturn
	return 0; // 0xa56 Return
	
Label_2647:
	var_353_bool = 0; var_354_int = 0; // 0xa57 PushV
	var_354_int = 6; // 0xa58 MovI
	func_2187(var_353_bool, var_354_int); // 0xa59 Call
	if(var_353_bool == 0) goto Label_2659; // 0xa5b JumpB
	var_355_int = 0; var_356_object = Obj(); // 0xa5c PushV
	var_356_object = var_21_object; // 0xa5d Mov
	TaskCall(8); // 0xa5e TaskCall
	func_1746(var_357_object, var_355_int, var_356_object); // 0xa5f Call
	TaskReturn(); // 0xa60 TaskReturn
	return 0; // 0xa62 Return
	
Label_2659:
	var_415_bool = 0; // 0xa63 PushV
	func_2193(var_415_bool); // 0xa64 Call
	return 0; // 0xa66 Return
}


func_2226()
{
	var_32_string = "d1q04"; // 0x8b3 PushS
	var_33_int = 2; // 0x8b4 PushI
	SetVariable(var_32_string, var_33_int); // 0x8b5 Func
	func_2574(); // 0x8b8 Call
	return 0; // 0x8ba Return
}


func_180(var_2_object, var_30_string)
{
	var_31_bool = 0; // 0xb5 PushV
	func_2206(var_31_bool); // 0xb6 Call
	var_32_bool = var_31_bool == 0; // 0xb8 Not
	if(var_32_bool == 0) goto Label_187; // 0xb9 JumpB
	return 0; // 0xba Return
	
Label_187:
	var_33_bool = var_30_string == var_2_object; // 0xbb Eq
	if(var_33_bool == 0) goto Label_190; // 0xbc JumpB
	return 0; // 0xbd Return
	
Label_190:
	var_34_string = ""; // 0xbe PushV
	var_34_string = var_30_string; // 0xbf Mov
	func_2133(var_34_string); // 0xc0 Call
	var_2_object = var_30_string; // 0xc2 TMov
	return 0; // 0xc3 Return
}


func_1327(var_0_object, var_288_int, var_289_object)
{
	var_291_object = Obj(); var_292_bool = 0; var_293_int = 0; var_294_bool = 0; var_295_object = Obj(); var_296_bool = 0; var_297_int = 0; var_298_bool = 0; // 0x52f PushV
	var_0_object = var_289_object; // 0x530 TMov
	var_299_bool = 0; var_300_object = Obj(); // 0x531 PushV
	var_300_object = var_289_object; // 0x532 Mov
	func_2073(var_300_object); // 0x533 Call
	var_301_bool = var_299_bool == 0; // 0x535 Not
	if(var_301_bool == 0) goto Label_1337; // 0x536 JumpB
	var_288_int = -2; // 0x537 MovI
	return 8; // 0x538 Return
	
Label_1337:
	CreateDialog(var_295_object); // 0x539 Func
	var_302_int = 0; // 0x53b PushV
	func_2202(var_302_int); // 0x53c Call
	SetNPCName(var_302_int); // 0x53e ObjFunc
	var_303_string = ""; // 0x540 PushV
	func_2204(var_303_string); // 0x541 Call
	SetPhoto(var_303_string); // 0x543 ObjFunc
	var_304_int = 0; // 0x545 PushV
	func_2557(var_304_int); // 0x546 Call
	SetPlayerName(var_304_int); // 0x548 ObjFunc
	var_297_int = -1; // 0x54a MovI
	IsOverrideActive(var_296_bool); // 0x54b Func
	var_305_bool = var_296_bool; // 0x54d Push
	if(var_305_bool == 0) goto Label_1361; // 0x54e JumpB
	var_288_int = -2; // 0x54f MovI
	return 8; // 0x550 Return
	
Label_1361:
	DoDialog(var_295_object); // 0x551 Func
	var_306_object = Obj(); var_307_object = Obj(); // 0x553 PushV
	var_306_object = var_289_object; // 0x554 Mov
	var_307_object = var_295_object; // 0x555 Mov
	TaskCall(7); // 0x556 TaskCall
	func_1390(var_308_object, var_309_object, var_310_string, var_311_bool, var_306_object, var_307_object); // 0x557 Call
	TaskReturn(); // 0x558 TaskReturn
	IsDialogEnd(var_298_bool); // 0x55a ObjFunc
	
Label_1372:
	var_351_bool = var_298_bool == 0; // 0x55c Not
	if(var_351_bool == 0) goto Label_1379; // 0x55d JumpB
	sync(); // 0x55e Func
	IsDialogEnd(var_298_bool); // 0x560 ObjFunc
	goto Label_1372; // 0x562 Jump
	
Label_1379:
	var_352_object = Obj(); // 0x563 PushV
	var_352_object = var_289_object; // 0x564 Mov
	func_2129(); // 0x565 Call
	StopDialog(var_295_object); // 0x567 Func
	GetReturnValue(var_297_int); // 0x569 ObjFunc
	var_288_int = var_297_int; // 0x56b Mov
	return 8; // 0x56c Return
}


func_2235()
{
	var_61_object = Obj(); var_62_object = Obj(); // 0x8bb PushV
	var_63_object = Obj(); // 0x8bc PushV
	func_2507(var_63_object); // 0x8bd Call
	var_62_object = var_63_object; // 0x8be Mov
	var_70_string = "d1q04MishkaGotoSpi4ka"; // 0x8c0 PushS
	var_71_string = "pt_map_spi4ka"; // 0x8c1 PushS
	var_72_int = 0; // 0x8c2 PushI
	var_73_int = 8644; // 0x8c3 PushI
	var_74_float = 0; // 0x8c4 PushV
	func_2173(var_74_float); // 0x8c5 Call
	AddMark(var_70_string, var_71_string, var_72_int, var_73_int, var_74_float); // 0x8c7 ObjFunc
	return 2; // 0x8c9 Return
}


func_2364(var_124_bool)
{
	var_126_int = 0; var_127_string = ""; // 0x93d PushV
	var_127_string = "d3q02"; // 0x93e MovS
	func_2168(var_126_int, var_127_string); // 0x93f Call
	var_130_int = 1; // 0x941 PushI
	var_131_bool = var_126_int == var_130_int; // 0x942 Eq
	if(var_131_bool == 0) goto Label_2374; // 0x943 JumpB
	var_124_bool = 1; // 0x944 MovB
	return 0; // 0x945 Return
	
Label_2374:
	var_124_bool = 0; // 0x946 MovB
	return 0; // 0x947 Return
}


func_2429(var_240_bool)
{
	var_242_int = 0; var_243_string = ""; // 0x97e PushV
	var_243_string = "KnowKapella"; // 0x97f MovS
	func_2168(var_242_int, var_243_string); // 0x980 Call
	var_244_int = 1; // 0x982 PushI
	var_245_bool = var_242_int == var_244_int; // 0x983 Eq
	if(var_245_bool == 0) goto Label_2439; // 0x984 JumpB
	var_240_bool = 1; // 0x985 MovB
	return 0; // 0x986 Return
	
Label_2439:
	var_240_bool = 0; // 0x987 MovB
	return 0; // 0x988 Return
}


func_2557(var_78_int)
{
	var_79_int = 0; var_80_int = 0; // 0x9fd PushV
	var_81_string = "player"; // 0x9fe PushS
	GetVariable(var_81_string, var_80_int); // 0x9ff Func
	var_82_int = 0; // 0xa01 PushI
	var_83_bool = var_80_int == var_82_int; // 0xa02 Eq
	if(var_83_bool == 0) goto Label_2567; // 0xa03 JumpB
	var_78_int = 200001; // 0xa04 MovI
	return 2; // 0xa05 Return
	
Label_2567:
	var_84_int = 1; // 0xa07 PushI
	var_85_bool = var_80_int == var_84_int; // 0xa08 Eq
	if(var_85_bool == 0) goto Label_2572; // 0xa09 JumpB
	var_78_int = 200002; // 0xa0a MovI
	return 2; // 0xa0b Return
	
Label_2572:
	var_78_int = 200003; // 0xa0c MovI
	return 2; // 0xa0d Return
}


func_1477(var_2_object, var_107_string)
{
	var_108_bool = 0; // 0x5c6 PushV
	func_2206(var_108_bool); // 0x5c7 Call
	var_109_bool = var_108_bool == 0; // 0x5c9 Not
	if(var_109_bool == 0) goto Label_1484; // 0x5ca JumpB
	return 0; // 0x5cb Return
	
Label_1484:
	var_110_bool = var_107_string == var_2_object; // 0x5cc Eq
	if(var_110_bool == 0) goto Label_1487; // 0x5cd JumpB
	return 0; // 0x5ce Return
	
Label_1487:
	var_111_string = ""; // 0x5cf PushV
	var_111_string = var_107_string; // 0x5d0 Mov
	func_2133(var_111_string); // 0x5d1 Call
	var_2_object = var_107_string; // 0x5d3 TMov
	return 0; // 0x5d4 Return
}


func_2376(var_132_bool)
{
	var_132_bool = 1; // 0x949 MovB
	return 0; // 0x94a Return
}


func_2251()
{
	var_79_object = Obj(); var_80_string = ""; var_81_float = 0; // 0x8cc PushV
	var_82_object = Obj(); // 0x8cd PushV
	func_2507(var_82_object); // 0x8ce Call
	var_79_object = var_82_object; // 0x8cf Mov
	var_80_string = "pt_map_spi4ka"; // 0x8d1 MovS
	var_81_float = 2; // 0x8d2 MovI
	func_2524(var_79_object, var_80_string, var_81_float); // 0x8d3 Call
	var_102_object = Obj(); // 0x8d5 PushV
	func_2507(var_102_object); // 0x8d6 Call
	ShowMap(var_102_object); // 0x8d8 ObjFunc
	return 0; // 0x8da Return
}


func_2507(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); var_34_object = Obj(); // 0x9cb PushV
	GetMainOutdoorScene(var_33_object); // 0x9cc Func
	var_35_bool = var_33_object == 0; // 0x9ce NullEq
	if(var_35_bool == 0) goto Label_2518; // 0x9cf JumpB
	var_36_string = "Can't find main outdoor scene"; // 0x9d0 PushS
	Trace(var_36_string); // 0x9d1 Func
	var_34_object = 0; // 0x9d3 SetNull
	var_30_object = var_34_object; // 0x9d4 Mov
	return 4; // 0x9d5 Return
	
Label_2518:
	GetMap(var_34_object); // 0x9d6 ObjFunc
	var_30_object = var_34_object; // 0x9d8 Mov
	return 4; // 0x9d9 Return
}


func_2381(var_49_bool)
{
	var_51_int = 0; var_52_string = ""; // 0x94e PushV
	var_52_string = "d6q01"; // 0x94f MovS
	func_2168(var_51_int, var_52_string); // 0x950 Call
	var_55_int = 4; // 0x952 PushI
	var_56_bool = var_51_int == var_55_int; // 0x953 Eq
	if(var_56_bool == 0) goto Label_2391; // 0x954 JumpB
	var_49_bool = 1; // 0x955 MovB
	return 0; // 0x956 Return
	
Label_2391:
	var_49_bool = 0; // 0x957 MovB
	return 0; // 0x958 Return
}


func_335(var_0_object, var_142_int, var_143_object)
{
	var_145_object = Obj(); var_146_bool = 0; var_147_int = 0; var_148_bool = 0; var_149_object = Obj(); var_150_bool = 0; var_151_int = 0; var_152_bool = 0; // 0x14f PushV
	var_0_object = var_143_object; // 0x150 TMov
	var_153_bool = 0; var_154_object = Obj(); // 0x151 PushV
	var_154_object = var_143_object; // 0x152 Mov
	func_2073(var_154_object); // 0x153 Call
	var_155_bool = var_153_bool == 0; // 0x155 Not
	if(var_155_bool == 0) goto Label_345; // 0x156 JumpB
	var_142_int = -2; // 0x157 MovI
	return 8; // 0x158 Return
	
Label_345:
	CreateDialog(var_149_object); // 0x159 Func
	var_156_int = 0; // 0x15b PushV
	func_2202(var_156_int); // 0x15c Call
	SetNPCName(var_156_int); // 0x15e ObjFunc
	var_157_string = ""; // 0x160 PushV
	func_2204(var_157_string); // 0x161 Call
	SetPhoto(var_157_string); // 0x163 ObjFunc
	var_158_int = 0; // 0x165 PushV
	func_2557(var_158_int); // 0x166 Call
	SetPlayerName(var_158_int); // 0x168 ObjFunc
	var_151_int = -1; // 0x16a MovI
	IsOverrideActive(var_150_bool); // 0x16b Func
	var_159_bool = var_150_bool; // 0x16d Push
	if(var_159_bool == 0) goto Label_369; // 0x16e JumpB
	var_142_int = -2; // 0x16f MovI
	return 8; // 0x170 Return
	
Label_369:
	DoDialog(var_149_object); // 0x171 Func
	var_160_object = Obj(); var_161_object = Obj(); // 0x173 PushV
	var_160_object = var_143_object; // 0x174 Mov
	var_161_object = var_149_object; // 0x175 Mov
	TaskCall(5); // 0x176 TaskCall
	func_398(var_162_object, var_163_object, var_164_string, var_165_bool, var_160_object, var_161_object); // 0x177 Call
	TaskReturn(); // 0x178 TaskReturn
	IsDialogEnd(var_152_bool); // 0x17a ObjFunc
	
Label_380:
	var_284_bool = var_152_bool == 0; // 0x17c Not
	if(var_284_bool == 0) goto Label_387; // 0x17d JumpB
	sync(); // 0x17e Func
	IsDialogEnd(var_152_bool); // 0x180 ObjFunc
	goto Label_380; // 0x182 Jump
	
Label_387:
	var_285_object = Obj(); // 0x183 PushV
	var_285_object = var_143_object; // 0x184 Mov
	func_2129(); // 0x185 Call
	StopDialog(var_149_object); // 0x187 Func
	GetReturnValue(var_151_int); // 0x189 ObjFunc
	var_142_int = var_151_int; // 0x18b Mov
	return 8; // 0x18c Return
}


func_2129()
{
	CameraSwitchToNormal(); // 0x852 Func
	return 0; // 0x854 Return
}


func_1746(var_0_object, var_355_int, var_356_object)
{
	var_358_object = Obj(); var_359_bool = 0; var_360_int = 0; var_361_bool = 0; var_362_object = Obj(); var_363_bool = 0; var_364_int = 0; var_365_bool = 0; // 0x6d2 PushV
	var_0_object = var_356_object; // 0x6d3 TMov
	var_366_bool = 0; var_367_object = Obj(); // 0x6d4 PushV
	var_367_object = var_356_object; // 0x6d5 Mov
	func_2073(var_367_object); // 0x6d6 Call
	var_368_bool = var_366_bool == 0; // 0x6d8 Not
	if(var_368_bool == 0) goto Label_1756; // 0x6d9 JumpB
	var_355_int = -2; // 0x6da MovI
	return 8; // 0x6db Return
	
Label_1756:
	CreateDialog(var_362_object); // 0x6dc Func
	var_369_int = 0; // 0x6de PushV
	func_2202(var_369_int); // 0x6df Call
	SetNPCName(var_369_int); // 0x6e1 ObjFunc
	var_370_string = ""; // 0x6e3 PushV
	func_2204(var_370_string); // 0x6e4 Call
	SetPhoto(var_370_string); // 0x6e6 ObjFunc
	var_371_int = 0; // 0x6e8 PushV
	func_2557(var_371_int); // 0x6e9 Call
	SetPlayerName(var_371_int); // 0x6eb ObjFunc
	var_364_int = -1; // 0x6ed MovI
	IsOverrideActive(var_363_bool); // 0x6ee Func
	var_372_bool = var_363_bool; // 0x6f0 Push
	if(var_372_bool == 0) goto Label_1780; // 0x6f1 JumpB
	var_355_int = -2; // 0x6f2 MovI
	return 8; // 0x6f3 Return
	
Label_1780:
	DoDialog(var_362_object); // 0x6f4 Func
	var_373_object = Obj(); var_374_object = Obj(); // 0x6f6 PushV
	var_373_object = var_356_object; // 0x6f7 Mov
	var_374_object = var_362_object; // 0x6f8 Mov
	TaskCall(9); // 0x6f9 TaskCall
	func_1809(var_375_object, var_376_object, var_377_string, var_378_bool, var_373_object, var_374_object); // 0x6fa Call
	TaskReturn(); // 0x6fb TaskReturn
	IsDialogEnd(var_365_bool); // 0x6fd ObjFunc
	
Label_1791:
	var_413_bool = var_365_bool == 0; // 0x6ff Not
	if(var_413_bool == 0) goto Label_1798; // 0x700 JumpB
	sync(); // 0x701 Func
	IsDialogEnd(var_365_bool); // 0x703 ObjFunc
	goto Label_1791; // 0x705 Jump
	
Label_1798:
	var_414_object = Obj(); // 0x706 PushV
	var_414_object = var_356_object; // 0x707 Mov
	func_2129(); // 0x708 Call
	StopDialog(var_362_object); // 0x70a Func
	GetReturnValue(var_364_int); // 0x70c ObjFunc
	var_355_int = var_364_int; // 0x70e Mov
	return 8; // 0x70f Return
}


func_595(var_2_object, var_166_string)
{
	var_167_bool = 0; // 0x254 PushV
	func_2206(var_167_bool); // 0x255 Call
	var_168_bool = var_167_bool == 0; // 0x257 Not
	if(var_168_bool == 0) goto Label_602; // 0x258 JumpB
	return 0; // 0x259 Return
	
Label_602:
	var_169_bool = var_166_string == var_2_object; // 0x25a Eq
	if(var_169_bool == 0) goto Label_605; // 0x25b JumpB
	return 0; // 0x25c Return
	
Label_605:
	var_170_string = ""; // 0x25d PushV
	var_170_string = var_166_string; // 0x25e Mov
	func_2133(var_170_string); // 0x25f Call
	var_2_object = var_166_string; // 0x261 TMov
	return 0; // 0x262 Return
}


func_2133(var_25_string)
{
	var_26_float = 0; var_27_float = 0; var_28_float = 0; var_29_float = 0; // 0x855 PushV
	var_30_string = "playing "; // 0x856 PushS
	var_31_int = var_30_string + var_25_string; // 0x857 Add
	Trace(var_31_int); // 0x858 Func
	lshGetAnimTimes(var_25_string, var_28_float, var_29_float); // 0x85a Func
	lshPlayAnimation(var_28_float, var_29_float); // 0x85c Func
	var_32_string = "start: "; // 0x85e PushS
	var_33_int = var_32_string + var_28_float; // 0x85f Add
	Trace(var_33_int); // 0x860 Func
	var_34_string = "end: "; // 0x862 PushS
	var_35_int = var_34_string + var_29_float; // 0x863 Add
	Trace(var_35_int); // 0x864 Func
	return 4; // 0x866 Return
}


func_1881(var_2_object, var_32_string)
{
	var_33_bool = 0; // 0x75a PushV
	func_2206(var_33_bool); // 0x75b Call
	var_34_bool = var_33_bool == 0; // 0x75d Not
	if(var_34_bool == 0) goto Label_1888; // 0x75e JumpB
	return 0; // 0x75f Return
	
Label_1888:
	var_35_bool = var_32_string == var_2_object; // 0x760 Eq
	if(var_35_bool == 0) goto Label_1891; // 0x761 JumpB
	return 0; // 0x762 Return
	
Label_1891:
	var_36_string = ""; // 0x763 PushV
	var_36_string = var_32_string; // 0x764 Mov
	func_2133(var_36_string); // 0x765 Call
	var_2_object = var_32_string; // 0x767 TMov
	return 0; // 0x768 Return
}


func_2393(var_57_bool)
{
	var_59_int = 0; var_60_string = ""; // 0x95a PushV
	var_60_string = "ood6Mishka1"; // 0x95b MovS
	func_2168(var_59_int, var_60_string); // 0x95c Call
	var_61_int = 0; // 0x95e PushI
	var_62_bool = var_59_int == var_61_int; // 0x95f Eq
	if(var_62_bool == 0) goto Label_2403; // 0x960 JumpB
	var_57_bool = 1; // 0x961 MovB
	return 0; // 0x962 Return
	
Label_2403:
	var_57_bool = 0; // 0x963 MovB
	return 0; // 0x964 Return
}


func_2267()
{
	return 0; // 0x8dc Return
}


func_2524(var_73_object, var_74_string, var_75_float)
{
	var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_object = Obj(); var_80_bool = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_bool = 0; // 0x9dc PushV
	GetMainOutdoorScene(var_83_object); // 0x9dd Func
	var_85_bool = var_83_object == 0; // 0x9df NullEq
	if(var_85_bool == 0) goto Label_2533; // 0x9e0 JumpB
	var_86_string = "Can't find main outdoor scene"; // 0x9e1 PushS
	Trace(var_86_string); // 0x9e2 Func
	return 8; // 0x9e4 Return
	
Label_2533:
	GetLocator(var_74_string, var_84_bool, var_81_cvector, var_82_cvector); // 0x9e5 ObjFunc
	var_87_bool = var_84_bool == 0; // 0x9e7 Not
	if(var_87_bool == 0) goto Label_2543; // 0x9e8 JumpB
	var_88_string = "Warning: outdoor scene locator "; // 0x9e9 PushS
	var_89_int = var_88_string + var_74_string; // 0x9ea Add
	var_90_string = " doesnt exist"; // 0x9eb PushS
	var_91_int = var_89_int + var_90_string; // 0x9ec Add
	Trace(var_91_int); // 0x9ed Func
	
Label_2543:
	GetMap(var_73_object); // 0x9ef ObjFunc
	var_92_bool = var_73_object == 0; // 0x9f1 NullEq
	if(var_92_bool == 0) goto Label_2551; // 0x9f2 JumpB
	var_93_string = "Can't find map"; // 0x9f3 PushS
	Trace(var_93_string); // 0x9f4 Func
	return 8; // 0x9f6 Return
	
Label_2551:
	var_94_float = GetByIndex(var_81_cvector, 0); // 0x9f7 PushE
	var_95_float = GetByIndex(var_81_cvector, 2); // 0x9f8 PushE
	SetMapParams(var_94_float, var_95_float, var_75_float); // 0x9f9 ObjFunc
	return 8; // 0x9fb Return
}


func_2269()
{
	var_28_object = Obj(); var_29_object = Obj(); // 0x8dd PushV
	var_30_object = Obj(); // 0x8de PushV
	func_2507(var_30_object); // 0x8df Call
	var_29_object = var_30_object; // 0x8e0 Mov
	var_37_string = "d3q02MishkaGotoMladVlad"; // 0x8e2 PushS
	var_38_string = "pt_map_maldvlad"; // 0x8e3 PushS
	var_39_int = 0; // 0x8e4 PushI
	var_40_int = 11381; // 0x8e5 PushI
	var_41_float = 0; // 0x8e6 PushV
	func_2173(var_41_float); // 0x8e7 Call
	AddMark(var_37_string, var_38_string, var_39_int, var_40_int, var_41_float); // 0x8e9 ObjFunc
	func_2590(); // 0x8ec Call
	return 2; // 0x8ee Return
}


func_2405(var_249_bool)
{
	var_251_int = 0; var_252_string = ""; // 0x966 PushV
	var_252_string = "KnowLaska"; // 0x967 MovS
	func_2168(var_251_int, var_252_string); // 0x968 Call
	var_253_int = 1; // 0x96a PushI
	var_254_bool = var_251_int == var_253_int; // 0x96b Eq
	if(var_254_bool == 0) goto Label_2415; // 0x96c JumpB
	var_249_bool = 1; // 0x96d MovB
	return 0; // 0x96e Return
	
Label_2415:
	var_249_bool = 0; // 0x96f MovB
	return 0; // 0x970 Return
}


func_2151()
{
	var_23_bool = 0; // 0x867 PushV
	func_2206(var_23_bool); // 0x868 Call
	if(var_23_bool == 0) goto Label_2157; // 0x86a JumpB
	lshStopSpeech(); // 0x86b Func
	
Label_2157:
	return 0; // 0x86d Return
}


func_1390(var_0_object, var_1_object, var_2_object, var_3_object, var_306_object, var_307_object)
{
	var_0_object = var_307_object; // 0x56f TMov
	var_1_object = var_306_object; // 0x570 TMov
	var_3_object = 0; // 0x571 TMovB
	var_312_int = 1; // 0x572 PushI
	if(var_312_int == 0) goto Label_1447; // 0x573 JumpB
	var_313_string = ""; // 0x574 PushV
	var_313_string = "Neutral"; // 0x575 MovS
	func_1477(var_307_object, var_313_string); // 0x576 Call
	var_318_int = 10004; // 0x578 PushI
	SetMessage(var_318_int); // 0x579 TObjFunc
	ClearReplies(); // 0x57b TObjFunc
	var_319_bool = 0; // 0x57d PushV
	var_319_bool = 0; // 0x57e MovB
	var_320_bool = 0; var_321_object = Obj(); // 0x57f PushV
	var_321_object = var_1_object; // 0x580 MovT
	func_2364(var_321_object); // 0x581 Call
	if(var_320_bool == 0) goto Label_1418; // 0x583 JumpB
	var_326_bool = 0; var_327_object = Obj(); // 0x584 PushV
	var_327_object = var_1_object; // 0x585 MovT
	func_2376(var_327_object); // 0x586 Call
	if(var_326_bool == 0) goto Label_1418; // 0x588 JumpB
	var_319_bool = 1; // 0x589 MovB
	
Label_1418:
	if(var_319_bool == 0) goto Label_1424; // 0x58a JumpB
	var_328_int = 10211; // 0x58b PushI
	var_329_int = 11256; // 0x58c PushI
	var_330_int = 11257; // 0x58d PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x58e TObjFunc
	
Label_1424:
	var_331_int = 10005; // 0x590 PushI
	var_332_int = 11028; // 0x591 PushI
	var_333_int = 11027; // 0x592 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x593 TObjFunc
	var_334_int = 10012; // 0x595 PushI
	var_335_int = 11035; // 0x596 PushI
	var_336_int = 11034; // 0x597 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x598 TObjFunc
	var_337_int = 10015; // 0x59a PushI
	var_338_int = -1; // 0x59b PushI
	var_339_int = 11037; // 0x59c PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x59d TObjFunc
	var_340_int = 11383; // 0x59f PushI
	var_341_int = -1; // 0x5a0 PushI
	var_342_int = 12579; // 0x5a1 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0x5a2 TObjFunc
	goto Label_1447; // 0x5a4 Jump
	
Label_1447:
	var_343_bool = 0; // 0x5a7 PushV
	func_2206(var_343_bool); // 0x5a8 Call
	if(var_343_bool == 0) goto Label_1462; // 0x5aa JumpB
	
Label_1451:
	lshWaitForAnimEnd(); // 0x5ab Func
	var_344_object = var_3_object; // 0x5ad PushT
	if(var_344_object == 0) goto Label_1456; // 0x5ae JumpB
	goto Label_1461; // 0x5af Jump
	
Label_1461:
	goto Label_1476; // 0x5b5 Jump
	
Label_1476:
	return 0; // 0x5c4 Return
	
Label_1456:
	var_345_string = ""; // 0x5b0 PushV
	var_345_string = var_2_object; // 0x5b1 MovT
	func_2133(var_345_string); // 0x5b2 Call
	goto Label_1451; // 0x5b4 Jump
	
Label_1462:
	var_346_string = "all"; // 0x5b6 PushS
	var_347_string = "idle"; // 0x5b7 PushS
	PlayAnimation(var_346_string, var_347_string); // 0x5b8 Func
	
Label_1466:
	WaitForAnimEnd(); // 0x5ba Func
	var_348_object = var_3_object; // 0x5bc PushT
	if(var_348_object == 0) goto Label_1471; // 0x5bd JumpB
	goto Label_1476; // 0x5be Jump
	
Label_1471:
	var_349_string = "all"; // 0x5bf PushS
	var_350_string = "idle"; // 0x5c0 PushS
	PlayAnimation(var_349_string, var_350_string); // 0x5c1 Func
	goto Label_1466; // 0x5c3 Jump
}


func_2158(var_60_cvector, var_61_cvector)
{
	var_63_float = 0; var_64_float = 0; // 0x86e PushV
	var_65_int = var_61_cvector | var_61_cvector; // 0x86f Or
	var_64_float = sqrt(var_65_int); // 0x870 Sqrt2
	var_66_float = 0.0; // 0x871 PushF
	var_67_bool = var_64_float < var_66_float; // 0x872 LT
	if(var_67_bool == 0) goto Label_2166; // 0x873 JumpB
	var_60_cvector = CVector(0.0, 0.0, 0.0); // 0x874 MovV
	return 2; // 0x875 Return
	
Label_2166:
	var_60_cvector = var_61_cvector / var_61_cvector; // 0x876 Div2
	return 2; // 0x877 Return
}


func_112(var_0_object, var_1_object, var_2_object, var_3_object, var_87_object, var_88_object)
{
	var_0_object = var_88_object; // 0x71 TMov
	var_1_object = var_87_object; // 0x72 TMov
	var_3_object = 0; // 0x73 TMovB
	var_93_int = 1; // 0x74 PushI
	if(var_93_int == 0) goto Label_150; // 0x75 JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x76 PushV
	var_94_object = var_1_object; // 0x77 MovT
	var_95_object = var_0_object; // 0x78 MovT
	func_2310(); // 0x79 Call
	var_98_string = ""; // 0x7b PushV
	var_98_string = "Neutral"; // 0x7c MovS
	func_180(var_88_object, var_98_string); // 0x7d Call
	var_113_int = 457; // 0x7f PushI
	SetMessage(var_113_int); // 0x80 TObjFunc
	ClearReplies(); // 0x82 TObjFunc
	var_114_int = 458; // 0x84 PushI
	var_115_int = 530; // 0x85 PushI
	var_116_int = 527; // 0x86 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x87 TObjFunc
	var_117_int = 459; // 0x89 PushI
	var_118_int = 532; // 0x8a PushI
	var_119_int = 528; // 0x8b PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x8c TObjFunc
	var_120_int = 460; // 0x8e PushI
	var_121_int = 530; // 0x8f PushI
	var_122_int = 529; // 0x90 PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x91 TObjFunc
	goto Label_150; // 0x93 Jump
	
Label_150:
	var_123_bool = 0; // 0x96 PushV
	func_2206(var_123_bool); // 0x97 Call
	if(var_123_bool == 0) goto Label_165; // 0x99 JumpB
	
Label_154:
	lshWaitForAnimEnd(); // 0x9a Func
	var_124_object = var_3_object; // 0x9c PushT
	if(var_124_object == 0) goto Label_159; // 0x9d JumpB
	goto Label_164; // 0x9e Jump
	
Label_164:
	goto Label_179; // 0xa4 Jump
	
Label_179:
	return 0; // 0xb3 Return
	
Label_159:
	var_125_string = ""; // 0x9f PushV
	var_125_string = var_2_object; // 0xa0 MovT
	func_2133(var_125_string); // 0xa1 Call
	goto Label_154; // 0xa3 Jump
	
Label_165:
	var_126_string = "all"; // 0xa5 PushS
	var_127_string = "idle"; // 0xa6 PushS
	PlayAnimation(var_126_string, var_127_string); // 0xa7 Func
	
Label_169:
	WaitForAnimEnd(); // 0xa9 Func
	var_128_object = var_3_object; // 0xab PushT
	if(var_128_object == 0) goto Label_174; // 0xac JumpB
	goto Label_179; // 0xad Jump
	
Label_174:
	var_129_string = "all"; // 0xae PushS
	var_130_string = "idle"; // 0xaf PushS
	PlayAnimation(var_129_string, var_130_string); // 0xb0 Func
	goto Label_169; // 0xb2 Jump
}


func_2417(var_258_bool)
{
	var_260_int = 0; var_261_string = ""; // 0x972 PushV
	var_261_string = "KnowSpi4ka"; // 0x973 MovS
	func_2168(var_260_int, var_261_string); // 0x974 Call
	var_262_int = 1; // 0x976 PushI
	var_263_bool = var_260_int == var_262_int; // 0x977 Eq
	if(var_263_bool == 0) goto Label_2427; // 0x978 JumpB
	var_258_bool = 1; // 0x979 MovB
	return 0; // 0x97a Return
	
Label_2427:
	var_258_bool = 0; // 0x97b MovB
	return 0; // 0x97c Return
}


func_2288()
{
	var_73_object = Obj(); var_74_string = ""; var_75_float = 0; // 0x8f1 PushV
	var_76_object = Obj(); // 0x8f2 PushV
	func_2507(var_76_object); // 0x8f3 Call
	var_73_object = var_76_object; // 0x8f4 Mov
	var_74_string = "pt_map_mladvlad"; // 0x8f6 MovS
	var_75_float = 2; // 0x8f7 MovI
	func_2524(var_73_object, var_74_string, var_75_float); // 0x8f8 Call
	var_96_object = Obj(); // 0x8fa PushV
	func_2507(var_96_object); // 0x8fb Call
	ShowMap(var_96_object); // 0x8fd ObjFunc
	return 0; // 0x8ff Return
}


func_2168(var_51_int, var_52_string)
{
	var_53_int = 0; var_54_int = 0; // 0x878 PushV
	GetVariable(var_52_string, var_54_int); // 0x879 Func
	var_51_int = var_54_int; // 0x87b Mov
	return 2; // 0x87c Return
}


func_2173(var_41_float)
{
	var_42_float = 0; var_43_float = 0; // 0x87d PushV
	GetGameTime(var_43_float); // 0x87e Func
	var_41_float = var_43_float; // 0x880 Mov
	return 2; // 0x881 Return
}


