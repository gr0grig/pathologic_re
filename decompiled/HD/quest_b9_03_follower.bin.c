task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_int, var_22_int, var_23_bool, var_24_bool, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_object, var_31_bool, var_32_object, var_33_int, var_34_int, var_35_bool, var_36_bool, var_37_float, var_38_int, var_39_object, var_40_bool, var_41_object, var_42_bool, var_43_object)
{
	var_44_int = 1; // 0xd7 PushI
	if(var_44_int == 0) goto Label_406; // 0xd8 JumpB
	func_4451(); // 0xda NEW_2
	var_46_int = 31712; // 0xdc PushI
	var_47_bool = var_43_object == var_46_int; // 0xdd Eq
	if(var_47_bool == 0) goto Label_238; // 0xde JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0xdf PushV
	var_48_object = var_1_object; // 0xe0 MovT
	var_49_object = var_0_object; // 0xe1 MovT
	func_4613(); // 0xe2 NEW_2
	var_51_object = Obj(); var_52_object = Obj(); // 0xe4 PushV
	var_51_object = var_1_object; // 0xe5 MovT
	var_52_object = var_0_object; // 0xe6 MovT
	func_4634(); // 0xe7 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0xe9 PushV
	var_107_object = var_1_object; // 0xea MovT
	var_108_object = var_0_object; // 0xeb MovT
	func_4690(); // 0xec NEW_2
	
Label_238:
	var_133_int = 31714; // 0xee PushI
	var_134_bool = var_43_object == var_133_int; // 0xef Eq
	if(var_134_bool == 0) goto Label_251; // 0xf0 JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0xf1 PushV
	var_135_object = var_1_object; // 0xf2 MovT
	var_136_object = var_0_object; // 0xf3 MovT
	func_4680(); // 0xf4 NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0xf6 PushV
	var_138_object = var_1_object; // 0xf7 MovT
	var_139_object = var_0_object; // 0xf8 MovT
	func_4685(); // 0xf9 NEW_2
	
Label_251:
	var_148_int = 31661; // 0xfb PushI
	var_149_bool = var_43_object == var_148_int; // 0xfc Eq
	if(var_149_bool == 0) goto Label_259; // 0xfd JumpB
	var_150_object = Obj(); var_151_object = Obj(); // 0xfe PushV
	var_150_object = var_1_object; // 0xff MovT
	var_151_object = var_0_object; // 0x100 MovT
	func_4618(); // 0x101 NEW_2
	
Label_259:
	var_153_int = 31663; // 0x103 PushI
	var_154_bool = var_43_object == var_153_int; // 0x104 Eq
	if(var_154_bool == 0) goto Label_267; // 0x105 JumpB
	var_155_object = Obj(); var_156_object = Obj(); // 0x106 PushV
	var_155_object = var_1_object; // 0x107 MovT
	var_156_object = var_0_object; // 0x108 MovT
	func_4613(); // 0x109 NEW_2
	
Label_267:
	var_157_int = 31664; // 0x10b PushI
	var_158_bool = var_43_object == var_157_int; // 0x10c Eq
	if(var_158_bool == 0) goto Label_275; // 0x10d JumpB
	var_159_object = Obj(); var_160_object = Obj(); // 0x10e PushV
	var_159_object = var_1_object; // 0x10f MovT
	var_160_object = var_0_object; // 0x110 MovT
	func_4623(); // 0x111 NEW_2
	
Label_275:
	var_162_int = 31709; // 0x113 PushI
	var_163_bool = var_42_bool == var_162_int; // 0x114 Eq
	if(var_163_bool == 0) goto Label_358; // 0x115 JumpB
	var_164_bool = 0; var_165_object = Obj(); // 0x116 PushV
	var_165_object = var_1_object; // 0x117 MovT
	func_4706(var_165_object); // 0x118 NEW_2
	if(var_164_bool == 0) goto Label_308; // 0x11a JumpB
	var_172_object = Obj(); var_173_object = Obj(); // 0x11b PushV
	var_172_object = var_1_object; // 0x11c MovT
	var_173_object = var_0_object; // 0x11d MovT
	func_4628(); // 0x11e NEW_2
	var_176_string = ""; // 0x120 PushV
	var_176_string = "Neutral"; // 0x121 MovS
	func_192(var_43_object, var_176_string); // 0x122 NEW_2
	var_193_int = 530322; // 0x124 PushI
	SetMessage(var_193_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_194_int = 530323; // 0x129 PushI
	var_195_int = 31711; // 0x12a PushI
	var_196_int = 31710; // 0x12b PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x12c TObjFunc
	var_197_int = 531020; // 0x12e PushI
	var_198_int = 32350; // 0x12f PushI
	var_199_int = 32349; // 0x130 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x131 TObjFunc
	return 0; // 0x133 Return
	
Label_308:
	var_200_bool = 0; var_201_object = Obj(); // 0x134 PushV
	var_201_object = var_1_object; // 0x135 MovT
	func_4718(var_201_object); // 0x136 NEW_2
	if(var_200_bool == 0) goto Label_328; // 0x138 JumpB
	var_206_string = ""; // 0x139 PushV
	var_206_string = "Neutral"; // 0x13a MovS
	func_192(var_43_object, var_206_string); // 0x13b NEW_2
	var_207_int = 530326; // 0x13d PushI
	SetMessage(var_207_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_208_int = 530327; // 0x142 PushI
	var_209_int = -1; // 0x143 PushI
	var_210_int = 31714; // 0x144 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_211_string = ""; // 0x148 PushV
	var_211_string = "Neutral"; // 0x149 MovS
	func_192(var_43_object, var_211_string); // 0x14a NEW_2
	var_212_int = 530270; // 0x14c PushI
	SetMessage(var_212_int); // 0x14d TObjFunc
	ClearReplies(); // 0x14f TObjFunc
	var_213_int = 530271; // 0x151 PushI
	var_214_int = -1; // 0x152 PushI
	var_215_int = 31661; // 0x153 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x154 TObjFunc
	var_216_int = 530273; // 0x156 PushI
	var_217_int = -1; // 0x157 PushI
	var_218_int = 31663; // 0x158 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x159 TObjFunc
	var_219_int = 530274; // 0x15b PushI
	var_220_int = -1; // 0x15c PushI
	var_221_int = 31664; // 0x15d PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x15e TObjFunc
	var_222_int = 530272; // 0x160 PushI
	var_223_int = -1; // 0x161 PushI
	var_224_int = 31662; // 0x162 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x163 TObjFunc
	return 0; // 0x165 Return
	
Label_358:
	var_225_int = 32350; // 0x166 PushI
	var_226_bool = var_42_bool == var_225_int; // 0x167 Eq
	if(var_226_bool == 0) goto Label_376; // 0x168 JumpB
	var_227_string = ""; // 0x169 PushV
	var_227_string = "Neutral"; // 0x16a MovS
	func_192(var_43_object, var_227_string); // 0x16b NEW_2
	var_228_int = 531021; // 0x16d PushI
	SetMessage(var_228_int); // 0x16e TObjFunc
	ClearReplies(); // 0x170 TObjFunc
	var_229_int = 531023; // 0x172 PushI
	var_230_int = 31711; // 0x173 PushI
	var_231_int = 32352; // 0x174 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x175 TObjFunc
	return 0; // 0x177 Return
	
Label_376:
	var_232_int = 31711; // 0x178 PushI
	var_233_bool = var_42_bool == var_232_int; // 0x179 Eq
	if(var_233_bool == 0) goto Label_394; // 0x17a JumpB
	var_234_string = ""; // 0x17b PushV
	var_234_string = "Neutral"; // 0x17c MovS
	func_192(var_43_object, var_234_string); // 0x17d NEW_2
	var_235_int = 530324; // 0x17f PushI
	SetMessage(var_235_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_236_int = 530325; // 0x184 PushI
	var_237_int = -1; // 0x185 PushI
	var_238_int = 31712; // 0x186 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x187 TObjFunc
	return 0; // 0x189 Return
	
Label_394:
	var_3_string = 1; // 0x18a TMovB
	var_239_bool = 0; // 0x18b PushV
	func_4945(var_239_bool); // 0x18c NEW_2
	if(var_239_bool == 0) goto Label_402; // 0x18e JumpB
	lshStopAnimation(); // 0x18f Func
	goto Label_404; // 0x191 Jump
	
Label_404:
	return 0; // 0x194 Return
	
Label_402:
	StopAnimation(); // 0x192 Func
	
Label_406:
	return 0; // 0x196 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x2ac PushV
	var_44_object = var_42_object; // 0x2ad Mov
	func_5139(var_42_object, var_43_bool, var_44_object); // 0x2ae NEW_2
	return 0; // 0x2b0 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x2b2 PushV
	var_44_object = var_42_object; // 0x2b3 Mov
	func_4006(var_43_bool, var_44_object); // 0x2b4 NEW_2
	if(var_43_bool == 0) goto Label_700; // 0x2b6 JumpB
	var_47_bool = 0; var_48_int = 0; // 0x2b7 PushV
	var_48_int = 4; // 0x2b8 MovI
	func_5017(var_47_bool, var_48_int); // 0x2b9 NEW_2
	goto Label_704; // 0x2bb Jump
	
Label_704:
	return 0; // 0x2c0 Return
	
Label_700:
	var_76_object = Obj(); // 0x2bc PushV
	var_76_object = var_42_object; // 0x2bd Mov
	func_5086(var_76_object); // 0x2be NEW_2
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_int, var_23_int, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0; // 0x2c2 PushV
	var_45_bool = 1; // 0x2c3 MovB
	var_46_bool = 0; var_47_object = Obj(); // 0x2c4 PushV
	var_47_object = var_43_bool; // 0x2c5 Mov
	func_4137(var_46_bool, var_47_object); // 0x2c6 NEW_2
	var_80_bool = var_46_bool == 0; // 0x2c8 Not
	if(var_80_bool == 0) goto Label_722; // 0x2c9 JumpB
	var_81_float = 0; var_82_object = Obj(); // 0x2ca PushV
	var_82_object = var_43_bool; // 0x2cb Mov
	func_3998(var_82_object); // 0x2cc NEW_2
	var_89_float = 1000000.0; // 0x2ce PushF
	var_90_bool = var_81_float > var_89_float; // 0x2cf GT
	if(var_90_bool == 0) goto Label_722; // 0x2d0 JumpB
	var_45_bool = 0; // 0x2d1 MovB
	
Label_722:
	if(var_45_bool == 0) goto Label_724; // 0x2d2 JumpB
	return 0; // 0x2d3 Return
	
Label_724:
	var_91_object = Obj(); // 0x2d4 PushV
	var_91_object = var_43_bool; // 0x2d5 Mov
	func_5097(var_91_object); // 0x2d6 NEW_2
	return 0; // 0x2d8 Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	Stop(); // 0x2d9 Func
	StopGroup0(); // 0x2db Func
	var_42_bool = 0; var_43_int = 0; // 0x2dd PushV
	var_43_int = 0; // 0x2de MovI
	func_5017(var_42_bool, var_43_int); // 0x2df NEW_2
	return 0; // 0x2e1 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x2ec PushV
	var_44_object = var_42_object; // 0x2ed Mov
	func_5139(var_42_object, var_43_bool, var_44_object); // 0x2ee NEW_2
	return 0; // 0x2f0 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x2f2 PushV
	var_44_object = var_42_object; // 0x2f3 Mov
	func_4006(var_43_bool, var_44_object); // 0x2f4 NEW_2
	if(var_43_bool == 0) goto Label_764; // 0x2f6 JumpB
	var_47_bool = 0; var_48_int = 0; // 0x2f7 PushV
	var_48_int = 4; // 0x2f8 MovI
	func_5017(var_47_bool, var_48_int); // 0x2f9 NEW_2
	goto Label_768; // 0x2fb Jump
	
Label_768:
	return 0; // 0x300 Return
	
Label_764:
	var_76_object = Obj(); // 0x2fc PushV
	var_76_object = var_42_object; // 0x2fd Mov
	func_5086(var_76_object); // 0x2fe NEW_2
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_int, var_23_int, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0; // 0x302 PushV
	var_45_bool = 1; // 0x303 MovB
	var_46_bool = 0; var_47_object = Obj(); // 0x304 PushV
	var_47_object = var_43_bool; // 0x305 Mov
	func_4137(var_46_bool, var_47_object); // 0x306 NEW_2
	var_80_bool = var_46_bool == 0; // 0x308 Not
	if(var_80_bool == 0) goto Label_786; // 0x309 JumpB
	var_81_float = 0; var_82_object = Obj(); // 0x30a PushV
	var_82_object = var_43_bool; // 0x30b Mov
	func_3998(var_82_object); // 0x30c NEW_2
	var_89_float = 1000000.0; // 0x30e PushF
	var_90_bool = var_81_float > var_89_float; // 0x30f GT
	if(var_90_bool == 0) goto Label_786; // 0x310 JumpB
	var_45_bool = 0; // 0x311 MovB
	
Label_786:
	if(var_45_bool == 0) goto Label_788; // 0x312 JumpB
	return 0; // 0x313 Return
	
Label_788:
	var_91_object = Obj(); // 0x314 PushV
	var_91_object = var_43_bool; // 0x315 Mov
	func_5097(var_91_object); // 0x316 NEW_2
	return 0; // 0x318 Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	Stop(); // 0x319 Func
	StopGroup0(); // 0x31b Func
	var_42_bool = 0; var_43_int = 0; // 0x31d PushV
	var_43_int = 0; // 0x31e MovI
	func_5017(var_42_bool, var_43_int); // 0x31f NEW_2
	return 0; // 0x321 Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_982(var_41_object); // 0x334 NEW_2
	var_43_bool = 0; var_44_int = 0; // 0x336 PushV
	var_44_int = 0; // 0x337 MovI
	func_5017(var_43_bool, var_44_int); // 0x338 NEW_2
	return 0; // 0x33a Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; // 0x3a2 PushV
	var_51_int = 120; // 0x3a3 PushI
	var_52_bool = var_42_object != var_51_int; // 0x3a4 Neq
	if(var_52_bool == 0) goto Label_935; // 0x3a5 JumpB
	return 8; // 0x3a6 Return
	
Label_935:
	var_53_bool = var_0_object == 0; // 0x3a7 NullEq
	if(var_53_bool == 0) goto Label_944; // 0x3a8 JumpB
	Stop(); // 0x3a9 Func
	var_54_int = 1; // 0x3ab PushI
	KillTimer(var_54_int); // 0x3ac Func
	var_2_object = 1; // 0x3ae TMovB
	goto Label_981; // 0x3af Jump
	
Label_981:
	return 8; // 0x3d5 Return
	
Label_944:
	GetDirection(var_47_cvector); // 0x3b0 Func
	var_55_float = 7000.0; // 0x3b2 PushF
	FindDirLength(var_48_float, var_47_cvector, var_55_float); // 0x3b3 Func
	var_56_cvector = CVector(0,0,0); var_57_float = 0; // 0x3b5 PushV
	var_57_float = 1.74533; // 0x3b6 MovF
	func_827(var_56_cvector, var_57_float); // 0x3b7 NEW_2
	var_49_cvector = var_56_cvector; // 0x3b8 Mov
	var_50_float = var_49_cvector | var_49_cvector; // 0x3ba Or2
	var_86_bool = 0; // 0x3bb PushV
	var_86_bool = 0; // 0x3bc MovB
	var_87_float = 2500.0; // 0x3bd PushF
	var_88_bool = var_50_float >= var_87_float; // 0x3be GE
	if(var_88_bool == 0) goto Label_974; // 0x3bf JumpB
	var_89_bool = 0; // 0x3c0 PushV
	var_89_bool = 1; // 0x3c1 MovB
	var_90_float = var_48_float * var_48_float; // 0x3c2 Mult
	var_91_float = 2.25; // 0x3c3 PushF
	var_92_float = var_90_float * var_91_float; // 0x3c4 Mult
	var_93_bool = var_50_float >= var_92_float; // 0x3c5 GE
	if(var_93_bool == 0) goto Label_972; // 0x3c6 JumpB
	var_94_bool = 0; // 0x3c7 PushV
	func_998(var_89_bool, var_94_bool); // 0x3c8 NEW_2
	if(var_94_bool == 0) goto Label_972; // 0x3ca JumpB
	var_89_bool = 0; // 0x3cb MovB
	
Label_972:
	if(var_89_bool == 0) goto Label_974; // 0x3cc JumpB
	var_86_bool = 1; // 0x3cd MovB
	
Label_974:
	if(var_86_bool == 0) goto Label_981; // 0x3ce JumpB
	Stop(); // 0x3cf Func
	var_114_cvector = CVector(0,0,0); // 0x3d1 PushV
	func_3986(var_114_cvector); // 0x3d2 NEW_2
	var_1_object = var_114_cvector + var_49_cvector; // 0x3d4 Add2
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_982(var_42_object); // 0x3df NEW_2
	var_44_object = Obj(); // 0x3e1 PushV
	var_44_object = var_42_object; // 0x3e2 Mov
	func_5183(); // 0x3e3 NEW_2
	return 0; // 0x3e5 Return
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	StopGroup0(); // 0x414 Func
	var_3_string = 1; // 0x416 TMovB
	func_1210(var_41_object); // 0x418 NEW_2
	var_43_bool = 0; var_44_int = 0; // 0x41a PushV
	var_44_int = 0; // 0x41b MovI
	func_5017(var_43_bool, var_44_int); // 0x41c NEW_2
	return 0; // 0x41e Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_float = 0; var_47_cvector = CVector(0,0,0); var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_float = 0; // 0x486 PushV
	var_51_int = 120; // 0x487 PushI
	var_52_bool = var_42_object != var_51_int; // 0x488 Neq
	if(var_52_bool == 0) goto Label_1163; // 0x489 JumpB
	return 8; // 0x48a Return
	
Label_1163:
	var_53_bool = var_0_object == 0; // 0x48b NullEq
	if(var_53_bool == 0) goto Label_1172; // 0x48c JumpB
	Stop(); // 0x48d Func
	var_54_int = 1; // 0x48f PushI
	KillTimer(var_54_int); // 0x490 Func
	var_2_object = 1; // 0x492 TMovB
	goto Label_1209; // 0x493 Jump
	
Label_1209:
	return 8; // 0x4b9 Return
	
Label_1172:
	GetDirection(var_47_cvector); // 0x494 Func
	var_55_float = 7000.0; // 0x496 PushF
	FindDirLength(var_48_float, var_47_cvector, var_55_float); // 0x497 Func
	var_56_cvector = CVector(0,0,0); var_57_float = 0; // 0x499 PushV
	var_57_float = 1.74533; // 0x49a MovF
	func_1055(var_56_cvector, var_57_float); // 0x49b NEW_2
	var_49_cvector = var_56_cvector; // 0x49c Mov
	var_50_float = var_49_cvector | var_49_cvector; // 0x49e Or2
	var_86_bool = 0; // 0x49f PushV
	var_86_bool = 0; // 0x4a0 MovB
	var_87_float = 2500.0; // 0x4a1 PushF
	var_88_bool = var_50_float >= var_87_float; // 0x4a2 GE
	if(var_88_bool == 0) goto Label_1202; // 0x4a3 JumpB
	var_89_bool = 0; // 0x4a4 PushV
	var_89_bool = 1; // 0x4a5 MovB
	var_90_float = var_48_float * var_48_float; // 0x4a6 Mult
	var_91_float = 2.25; // 0x4a7 PushF
	var_92_float = var_90_float * var_91_float; // 0x4a8 Mult
	var_93_bool = var_50_float >= var_92_float; // 0x4a9 GE
	if(var_93_bool == 0) goto Label_1200; // 0x4aa JumpB
	var_94_bool = 0; // 0x4ab PushV
	func_1226(var_89_bool, var_94_bool); // 0x4ac NEW_2
	if(var_94_bool == 0) goto Label_1200; // 0x4ae JumpB
	var_89_bool = 0; // 0x4af MovB
	
Label_1200:
	if(var_89_bool == 0) goto Label_1202; // 0x4b0 JumpB
	var_86_bool = 1; // 0x4b1 MovB
	
Label_1202:
	if(var_86_bool == 0) goto Label_1209; // 0x4b2 JumpB
	Stop(); // 0x4b3 Func
	var_114_cvector = CVector(0,0,0); // 0x4b5 PushV
	func_3986(var_114_cvector); // 0x4b6 NEW_2
	var_1_object = var_114_cvector + var_49_cvector; // 0x4b8 Add2
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_1210(var_42_object); // 0x4c3 NEW_2
	var_44_object = Obj(); // 0x4c5 PushV
	var_44_object = var_42_object; // 0x4c6 Mov
	func_5183(); // 0x4c7 NEW_2
	return 0; // 0x4c9 Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_int, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_int = 0; // 0x4f7 PushI
	var_44_bool = var_42_object == var_43_int; // 0x4f8 Eq
	if(var_44_bool == 0) goto Label_1286; // 0x4f9 JumpB
	var_45_bool = var_3_string == 0; // 0x4fa Not
	if(var_45_bool == 0) goto Label_1284; // 0x4fb JumpB
	func_1470(var_42_object); // 0x4fd NEW_2
	var_47_bool = 0; var_48_int = 0; // 0x4ff PushV
	var_48_int = 1; // 0x500 MovI
	func_5017(var_47_bool, var_48_int); // 0x501 NEW_2
	goto Label_1285; // 0x503 Jump
	
Label_1285:
	return 0; // 0x505 Return
	
Label_1284:
	var_3_string = 0; // 0x504 TMovB
	
Label_1286:
	var_76_int = 0; // 0x506 PushV
	var_76_int = var_42_object; // 0x507 Mov
	func_1418(var_40_object, var_41_bool, var_42_object, var_76_int); // 0x508 NEW_2
	return 0; // 0x50a Return
}


task_7_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x50c PushV
	var_44_object = var_42_object; // 0x50d Mov
	func_4006(var_43_bool, var_44_object); // 0x50e NEW_2
	if(var_43_bool == 0) goto Label_1299; // 0x510 JumpB
	var_3_string = 1; // 0x511 TMovB
	goto Label_1306; // 0x512 Jump
	
Label_1306:
	return 0; // 0x51a Return
	
Label_1299:
	func_1470(var_42_object); // 0x514 NEW_2
	var_48_object = Obj(); // 0x516 PushV
	var_48_object = var_42_object; // 0x517 Mov
	func_5086(var_48_object); // 0x518 NEW_2
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_1470(var_41_object); // 0x51c NEW_2
	var_43_bool = 0; var_44_int = 0; // 0x51e PushV
	var_44_int = 0; // 0x51f MovI
	func_5017(var_43_bool, var_44_int); // 0x520 NEW_2
	return 0; // 0x522 Return
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_1470(var_42_object); // 0x5c7 NEW_2
	var_44_object = Obj(); // 0x5c9 PushV
	var_44_object = var_42_object; // 0x5ca Mov
	func_5183(); // 0x5cb NEW_2
	return 0; // 0x5cd Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_int = 1; // 0x5ec PushI
	var_44_bool = var_42_object == var_43_int; // 0x5ed Eq
	if(var_44_bool == 0) goto Label_1527; // 0x5ee JumpB
	func_1717(var_42_object); // 0x5f0 NEW_2
	var_46_bool = 0; var_47_int = 0; // 0x5f2 PushV
	var_47_int = 1; // 0x5f3 MovI
	func_5017(var_46_bool, var_47_int); // 0x5f4 NEW_2
	return 0; // 0x5f6 Return
	
Label_1527:
	var_75_int = 0; // 0x5f7 PushV
	var_75_int = var_42_object; // 0x5f8 Mov
	func_1665(var_40_object, var_41_bool, var_42_object, var_75_int); // 0x5f9 NEW_2
	return 0; // 0x5fb Return
}


task_8_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x5fd PushV
	var_44_object = var_42_object; // 0x5fe Mov
	func_4006(var_43_bool, var_44_object); // 0x5ff NEW_2
	if(var_43_bool == 0) goto Label_1546; // 0x601 JumpB
	func_1717(var_42_object); // 0x603 NEW_2
	var_48_bool = 0; var_49_int = 0; // 0x605 PushV
	var_49_int = 4; // 0x606 MovI
	func_5017(var_48_bool, var_49_int); // 0x607 NEW_2
	goto Label_1553; // 0x609 Jump
	
Label_1553:
	return 0; // 0x611 Return
	
Label_1546:
	func_1717(var_42_object); // 0x60b NEW_2
	var_77_object = Obj(); // 0x60d PushV
	var_77_object = var_42_object; // 0x60e Mov
	func_5086(var_77_object); // 0x60f NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_1717(var_41_object); // 0x613 NEW_2
	var_43_bool = 0; var_44_int = 0; // 0x615 PushV
	var_44_int = 0; // 0x616 MovI
	func_5017(var_43_bool, var_44_int); // 0x617 NEW_2
	return 0; // 0x619 Return
}


task_8_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_1717(var_42_object); // 0x6be NEW_2
	var_44_object = Obj(); // 0x6c0 PushV
	var_44_object = var_42_object; // 0x6c1 Mov
	func_5183(); // 0x6c2 NEW_2
	return 0; // 0x6c4 Return
}


task_9_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_1886(var_41_bool, var_42_object); // 0x6dd NEW_2
	var_46_bool = 0; var_47_object = Obj(); // 0x6df PushV
	var_47_object = var_42_object; // 0x6e0 Mov
	func_5139(var_42_object, var_46_bool, var_47_object); // 0x6e1 NEW_2
	return 0; // 0x6e3 Return
}


task_9_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x6e5 PushV
	var_44_object = var_42_object; // 0x6e6 Mov
	func_4006(var_43_bool, var_44_object); // 0x6e7 NEW_2
	if(var_43_bool == 0) goto Label_1778; // 0x6e9 JumpB
	func_1886(var_41_bool, var_42_object); // 0x6eb NEW_2
	var_50_bool = 0; var_51_int = 0; // 0x6ed PushV
	var_51_int = 4; // 0x6ee MovI
	func_5017(var_50_bool, var_51_int); // 0x6ef NEW_2
	goto Label_1785; // 0x6f1 Jump
	
Label_1785:
	return 0; // 0x6f9 Return
	
Label_1778:
	func_1886(var_41_bool, var_42_object); // 0x6f3 NEW_2
	var_79_object = Obj(); // 0x6f5 PushV
	var_79_object = var_42_object; // 0x6f6 Mov
	func_5086(var_79_object); // 0x6f7 NEW_2
}


task_9_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0; // 0x6fb PushV
	var_45_bool = 1; // 0x6fc MovB
	var_46_bool = 0; var_47_object = Obj(); // 0x6fd PushV
	var_47_object = var_43_bool; // 0x6fe Mov
	func_4137(var_46_bool, var_47_object); // 0x6ff NEW_2
	var_80_bool = var_46_bool == 0; // 0x701 Not
	if(var_80_bool == 0) goto Label_1803; // 0x702 JumpB
	var_81_float = 0; var_82_object = Obj(); // 0x703 PushV
	var_82_object = var_43_bool; // 0x704 Mov
	func_3998(var_82_object); // 0x705 NEW_2
	var_89_float = 1000000.0; // 0x707 PushF
	var_90_bool = var_81_float > var_89_float; // 0x708 GT
	if(var_90_bool == 0) goto Label_1803; // 0x709 JumpB
	var_45_bool = 0; // 0x70a MovB
	
Label_1803:
	if(var_45_bool == 0) goto Label_1805; // 0x70b JumpB
	return 0; // 0x70c Return
	
Label_1805:
	func_1886(var_43_bool, var_44_object); // 0x70e NEW_2
	var_94_object = Obj(); // 0x710 PushV
	var_94_object = var_43_bool; // 0x711 Mov
	func_5097(var_94_object); // 0x712 NEW_2
	return 0; // 0x714 Return
}


task_9_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_1886(var_40_bool, var_41_object); // 0x716 NEW_2
	var_45_bool = 0; var_46_int = 0; // 0x718 PushV
	var_46_int = 0; // 0x719 MovI
	func_5017(var_45_bool, var_46_int); // 0x71a NEW_2
	return 0; // 0x71c Return
}


task_9_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_int, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_int = 10; // 0x748 PushI
	var_44_bool = var_42_object == var_43_int; // 0x749 Eq
	if(var_44_bool == 0) goto Label_1885; // 0x74a JumpB
	var_45_bool = 0; // 0x74b PushV
	func_1848(var_40_object, var_41_bool, var_42_object, var_45_bool); // 0x74c NEW_2
	if(var_45_bool == 0) goto Label_1879; // 0x74e JumpB
	var_58_bool = var_2_object == 0; // 0x74f Not
	if(var_58_bool == 0) goto Label_1878; // 0x750 JumpB
	var_59_object = Obj(); // 0x751 PushV
	var_59_object = var_4_bool; // 0x752 MovT
	func_4440(var_59_object); // 0x753 NEW_2
	var_2_object = 1; // 0x755 TMovB
	
Label_1878:
	goto Label_1885; // 0x756 Jump
	
Label_1885:
	return 0; // 0x75d Return
	
Label_1879:
	var_66_object = var_2_object; // 0x757 PushT
	if(var_66_object == 0) goto Label_1885; // 0x758 JumpB
	var_67_string = "head"; // 0x759 PushS
	UnlookAsync(var_67_string); // 0x75a Func
	var_2_object = 0; // 0x75c TMovB
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_int, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_int = 2; // 0x7ef PushI
	var_44_bool = var_42_object != var_43_int; // 0x7f0 Neq
	if(var_44_bool == 0) goto Label_2035; // 0x7f1 JumpB
	return 0; // 0x7f2 Return
	
Label_2035:
	var_45_bool = 0; var_46_object = Obj(); // 0x7f3 PushV
	var_47_object = Obj(); // 0x7f4 PushV
	func_4499(var_47_object); // 0x7f5 NEW_2
	var_46_object = var_47_object; // 0x7f6 Mov
	func_5199(var_46_object); // 0x7f8 NEW_2
	var_97_bool = var_45_bool == 0; // 0x7fa Not
	if(var_97_bool == 0) goto Label_2047; // 0x7fb JumpB
	func_2027(); // 0x7fd NEW_2
	
Label_2047:
	return 0; // 0x7ff Return
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_2027(); // 0x802 NEW_2
	var_43_bool = 0; var_44_object = Obj(); // 0x804 PushV
	var_44_object = var_42_object; // 0x805 Mov
	func_5139(var_42_object, var_43_bool, var_44_object); // 0x806 NEW_2
	var_0_object = var_43_bool; // 0x807 TMov
	return 0; // 0x809 Return
}


task_10_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x80b PushV
	var_44_object = var_42_object; // 0x80c Mov
	func_4006(var_43_bool, var_44_object); // 0x80d NEW_2
	if(var_43_bool == 0) goto Label_2073; // 0x80f JumpB
	func_2027(); // 0x811 NEW_2
	var_47_bool = 0; var_48_int = 0; // 0x813 PushV
	var_48_int = 4; // 0x814 MovI
	func_5017(var_47_bool, var_48_int); // 0x815 NEW_2
	var_0_object = 1; // 0x817 TMovB
	goto Label_2081; // 0x818 Jump
	
Label_2081:
	return 0; // 0x821 Return
	
Label_2073:
	func_2027(); // 0x81a NEW_2
	var_0_object = 1; // 0x81c TMovB
	var_76_object = Obj(); // 0x81d PushV
	var_76_object = var_42_object; // 0x81e Mov
	func_5086(var_76_object); // 0x81f NEW_2
}


task_10_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_object, var_26_object, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0; // 0x823 PushV
	var_45_bool = 1; // 0x824 MovB
	var_46_bool = 0; var_47_object = Obj(); // 0x825 PushV
	var_47_object = var_43_bool; // 0x826 Mov
	func_4137(var_46_bool, var_47_object); // 0x827 NEW_2
	var_80_bool = var_46_bool == 0; // 0x829 Not
	if(var_80_bool == 0) goto Label_2099; // 0x82a JumpB
	var_81_float = 0; var_82_object = Obj(); // 0x82b PushV
	var_82_object = var_43_bool; // 0x82c Mov
	func_3998(var_82_object); // 0x82d NEW_2
	var_89_float = 1000000.0; // 0x82f PushF
	var_90_bool = var_81_float > var_89_float; // 0x830 GT
	if(var_90_bool == 0) goto Label_2099; // 0x831 JumpB
	var_45_bool = 0; // 0x832 MovB
	
Label_2099:
	if(var_45_bool == 0) goto Label_2101; // 0x833 JumpB
	return 0; // 0x834 Return
	
Label_2101:
	func_2027(); // 0x836 NEW_2
	var_0_object = 1; // 0x838 TMovB
	var_91_object = Obj(); // 0x839 PushV
	var_91_object = var_43_bool; // 0x83a Mov
	func_5097(var_91_object); // 0x83b NEW_2
	return 0; // 0x83d Return
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_2027(); // 0x83f NEW_2
	var_0_object = 1; // 0x841 TMovB
	var_42_bool = 0; var_43_int = 0; // 0x842 PushV
	var_43_int = 0; // 0x843 MovI
	func_5017(var_42_bool, var_43_int); // 0x844 NEW_2
	return 0; // 0x846 Return
}


task_11_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_2363(var_42_object); // 0x87d NEW_2
	var_44_bool = 0; var_45_object = Obj(); // 0x87f PushV
	var_45_object = var_42_object; // 0x880 Mov
	func_5139(var_42_object, var_44_bool, var_45_object); // 0x881 NEW_2
	return 0; // 0x883 Return
}


task_11_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x885 PushV
	var_44_object = var_42_object; // 0x886 Mov
	func_4006(var_43_bool, var_44_object); // 0x887 NEW_2
	if(var_43_bool == 0) goto Label_2194; // 0x889 JumpB
	func_2363(var_42_object); // 0x88b NEW_2
	var_48_bool = 0; var_49_int = 0; // 0x88d PushV
	var_49_int = 4; // 0x88e MovI
	func_5017(var_48_bool, var_49_int); // 0x88f NEW_2
	goto Label_2201; // 0x891 Jump
	
Label_2201:
	return 0; // 0x899 Return
	
Label_2194:
	func_2363(var_42_object); // 0x893 NEW_2
	var_77_object = Obj(); // 0x895 PushV
	var_77_object = var_42_object; // 0x896 Mov
	func_5086(var_77_object); // 0x897 NEW_2
}


task_11_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_object, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0; // 0x89b PushV
	var_45_bool = 1; // 0x89c MovB
	var_46_bool = 0; var_47_object = Obj(); // 0x89d PushV
	var_47_object = var_43_bool; // 0x89e Mov
	func_4137(var_46_bool, var_47_object); // 0x89f NEW_2
	var_80_bool = var_46_bool == 0; // 0x8a1 Not
	if(var_80_bool == 0) goto Label_2219; // 0x8a2 JumpB
	var_81_float = 0; var_82_object = Obj(); // 0x8a3 PushV
	var_82_object = var_43_bool; // 0x8a4 Mov
	func_3998(var_82_object); // 0x8a5 NEW_2
	var_89_float = 1000000.0; // 0x8a7 PushF
	var_90_bool = var_81_float > var_89_float; // 0x8a8 GT
	if(var_90_bool == 0) goto Label_2219; // 0x8a9 JumpB
	var_45_bool = 0; // 0x8aa MovB
	
Label_2219:
	if(var_45_bool == 0) goto Label_2221; // 0x8ab JumpB
	return 0; // 0x8ac Return
	
Label_2221:
	func_2363(var_44_object); // 0x8ae NEW_2
	var_92_object = Obj(); // 0x8b0 PushV
	var_92_object = var_43_bool; // 0x8b1 Mov
	func_5097(var_92_object); // 0x8b2 NEW_2
	return 0; // 0x8b4 Return
}


task_11_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_2363(var_41_object); // 0x8b6 NEW_2
	var_43_bool = 0; var_44_int = 0; // 0x8b8 PushV
	var_44_int = 0; // 0x8b9 MovI
	func_5017(var_43_bool, var_44_int); // 0x8ba NEW_2
	return 0; // 0x8bc Return
}


task_11_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_int, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_int = 0; // 0x927 PushI
	var_44_bool = var_42_object != var_43_int; // 0x928 Neq
	if(var_44_bool == 0) goto Label_2347; // 0x929 JumpB
	return 0; // 0x92a Return
	
Label_2347:
	var_45_bool = 0; // 0x92b PushV
	func_2237(var_45_bool); // 0x92c NEW_2
	var_46_bool = var_45_bool == 0; // 0x92e Not
	if(var_46_bool == 0) goto Label_2353; // 0x92f JumpB
	var_0_object = 1; // 0x930 TMovB
	
Label_2353:
	var_47_int = 0; // 0x931 PushI
	KillTimer(var_47_int); // 0x932 Func
	Stop(); // 0x934 Func
	return 0; // 0x936 Return
}


task_11_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	RequestClearPath(var_42_object); // 0x938 Func
	return 0; // 0x93a Return
}


task_11_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_2363(var_42_object); // 0x944 NEW_2
	var_44_object = Obj(); // 0x946 PushV
	var_44_object = var_42_object; // 0x947 Mov
	func_5183(); // 0x948 NEW_2
	return 0; // 0x94a Return
}


task_12_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_object, var_28_bool, var_29_object, var_30_bool, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x955 PushV
	var_44_object = var_42_object; // 0x956 Mov
	func_4006(var_43_bool, var_44_object); // 0x957 NEW_2
	if(var_43_bool == 0) goto Label_2402; // 0x959 JumpB
	func_2467(); // 0x95b NEW_2
	var_47_bool = 0; var_48_int = 0; // 0x95d PushV
	var_48_int = 4; // 0x95e MovI
	func_5017(var_47_bool, var_48_int); // 0x95f NEW_2
	goto Label_2409; // 0x961 Jump
	
Label_2409:
	return 0; // 0x969 Return
	
Label_2402:
	func_2467(); // 0x963 NEW_2
	var_76_object = Obj(); // 0x965 PushV
	var_76_object = var_42_object; // 0x966 Mov
	func_5086(var_76_object); // 0x967 NEW_2
}


task_12_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_object, var_28_object, var_29_bool, var_30_bool, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0; // 0x96b PushV
	var_45_bool = 1; // 0x96c MovB
	var_46_bool = 0; var_47_object = Obj(); // 0x96d PushV
	var_47_object = var_43_bool; // 0x96e Mov
	func_4137(var_46_bool, var_47_object); // 0x96f NEW_2
	var_80_bool = var_46_bool == 0; // 0x971 Not
	if(var_80_bool == 0) goto Label_2427; // 0x972 JumpB
	var_81_float = 0; var_82_object = Obj(); // 0x973 PushV
	var_82_object = var_43_bool; // 0x974 Mov
	func_3998(var_82_object); // 0x975 NEW_2
	var_89_float = 1000000.0; // 0x977 PushF
	var_90_bool = var_81_float > var_89_float; // 0x978 GT
	if(var_90_bool == 0) goto Label_2427; // 0x979 JumpB
	var_45_bool = 0; // 0x97a MovB
	
Label_2427:
	if(var_45_bool == 0) goto Label_2429; // 0x97b JumpB
	return 0; // 0x97c Return
	
Label_2429:
	func_2467(); // 0x97e NEW_2
	var_91_object = Obj(); // 0x980 PushV
	var_91_object = var_43_bool; // 0x981 Mov
	func_5097(var_91_object); // 0x982 NEW_2
	return 0; // 0x984 Return
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_2467(); // 0x986 NEW_2
	var_0_object = 1; // 0x988 TMovB
	var_42_bool = 0; var_43_int = 0; // 0x989 PushV
	var_43_int = 0; // 0x98a MovI
	func_5017(var_42_bool, var_43_int); // 0x98b NEW_2
	return 0; // 0x98d Return
}


task_13_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_2696(var_42_object); // 0x9ca NEW_2
	var_44_bool = 0; var_45_object = Obj(); // 0x9cc PushV
	var_45_object = var_42_object; // 0x9cd Mov
	func_5139(var_42_object, var_44_bool, var_45_object); // 0x9ce NEW_2
	var_2_object = var_44_bool; // 0x9cf TMov
	return 0; // 0x9d1 Return
}


task_13_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj(); // 0x9d3 PushV
	var_44_object = var_42_object; // 0x9d4 Mov
	func_4006(var_43_bool, var_44_object); // 0x9d5 NEW_2
	if(var_43_bool == 0) goto Label_2528; // 0x9d7 JumpB
	func_2696(var_42_object); // 0x9d9 NEW_2
	var_48_bool = 0; var_49_int = 0; // 0x9db PushV
	var_49_int = 4; // 0x9dc MovI
	func_5017(var_48_bool, var_49_int); // 0x9dd NEW_2
	goto Label_2535; // 0x9df Jump
	
Label_2535:
	return 0; // 0x9e7 Return
	
Label_2528:
	func_2696(var_42_object); // 0x9e1 NEW_2
	var_77_object = Obj(); // 0x9e3 PushV
	var_77_object = var_42_object; // 0x9e4 Mov
	func_5086(var_77_object); // 0x9e5 NEW_2
}


task_13_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_bool, var_33_object, var_34_int, var_35_int, var_36_bool, var_37_bool, var_38_float, var_39_int, var_40_object, var_41_bool, var_42_object, var_43_bool, var_44_object)
{
	var_45_bool = 0; // 0x9e9 PushV
	var_45_bool = 1; // 0x9ea MovB
	var_46_bool = 0; var_47_object = Obj(); // 0x9eb PushV
	var_47_object = var_43_bool; // 0x9ec Mov
	func_4137(var_46_bool, var_47_object); // 0x9ed NEW_2
	var_80_bool = var_46_bool == 0; // 0x9ef Not
	if(var_80_bool == 0) goto Label_2553; // 0x9f0 JumpB
	var_81_float = 0; var_82_object = Obj(); // 0x9f1 PushV
	var_82_object = var_43_bool; // 0x9f2 Mov
	func_3998(var_82_object); // 0x9f3 NEW_2
	var_89_float = 1000000.0; // 0x9f5 PushF
	var_90_bool = var_81_float > var_89_float; // 0x9f6 GT
	if(var_90_bool == 0) goto Label_2553; // 0x9f7 JumpB
	var_45_bool = 0; // 0x9f8 MovB
	
Label_2553:
	if(var_45_bool == 0) goto Label_2555; // 0x9f9 JumpB
	return 0; // 0x9fa Return
	
Label_2555:
	func_2696(var_44_object); // 0x9fc NEW_2
	var_92_object = Obj(); // 0x9fe PushV
	var_92_object = var_43_bool; // 0x9ff Mov
	func_5097(var_92_object); // 0xa00 NEW_2
	return 0; // 0xa02 Return
}


task_13_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_2696(var_41_object); // 0xa04 NEW_2
	var_2_object = 1; // 0xa06 TMovB
	var_43_bool = 0; var_44_int = 0; // 0xa07 PushV
	var_44_int = 0; // 0xa08 MovI
	func_5017(var_43_bool, var_44_int); // 0xa09 NEW_2
	return 0; // 0xa0b Return
}


task_13_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_int, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_int = 0; // 0xa73 PushI
	var_44_bool = var_42_object != var_43_int; // 0xa74 Neq
	if(var_44_bool == 0) goto Label_2679; // 0xa75 JumpB
	return 0; // 0xa76 Return
	
Label_2679:
	var_45_bool = 0; var_46_object = Obj(); // 0xa77 PushV
	var_46_object = var_1_object; // 0xa78 MovT
	func_2712(var_45_bool, var_46_object); // 0xa79 NEW_2
	var_81_bool = var_45_bool == 0; // 0xa7b Not
	if(var_81_bool == 0) goto Label_2686; // 0xa7c JumpB
	var_0_object = 1; // 0xa7d TMovB
	
Label_2686:
	var_82_int = 0; // 0xa7e PushI
	KillTimer(var_82_int); // 0xa7f Func
	Stop(); // 0xa81 Func
	return 0; // 0xa83 Return
}


task_13_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	RequestClearPath(var_42_object); // 0xa85 Func
	return 0; // 0xa87 Return
}


task_13_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	func_2696(var_42_object); // 0xa91 NEW_2
	var_44_object = Obj(); // 0xa93 PushV
	var_44_object = var_42_object; // 0xa94 Mov
	func_5183(); // 0xa95 NEW_2
	return 0; // 0xa97 Return
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	var_42_object = Obj(); // 0xaac PushV
	func_4499(var_42_object); // 0xaad NEW_2
	RemoveActor(var_42_object); // 0xaaf Func
	Hold(); // 0xab1 Func
	return 0; // 0xab3 Return
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_bool = 0; var_44_bool = 0; // 0xac3 PushV
	IsOverrideActive(var_44_bool); // 0xac4 Func
	var_45_bool = var_44_bool == 0; // 0xac6 Not
	if(var_45_bool == 0) goto Label_2764; // 0xac7 JumpB
	var_46_object = Obj(); // 0xac8 PushV
	var_46_object = var_42_object; // 0xac9 Mov
	func_4883(var_46_object); // 0xaca NEW_2
	
Label_2764:
	return 2; // 0xacc Return
}


task_14_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_float, var_33_float, var_34_object, var_35_int, var_36_int, var_37_bool, var_38_bool, var_39_float, var_40_int, var_41_object, var_42_bool, var_43_object, var_44_bool, var_45_object)
{
	return 0; // 0xb43 Return
}


task_14_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_string, var_32_object, var_33_int, var_34_int, var_35_bool, var_36_bool, var_37_float, var_38_int, var_39_object, var_40_bool, var_41_object, var_42_bool, var_43_object)
{
	return 0; // 0xb45 Return
}


task_14_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	return 0; // 0xb47 Return
}


task_15_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_string, var_31_object, var_32_int, var_33_int, var_34_bool, var_35_bool, var_36_float, var_37_int, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_string = "cleanup"; // 0xb5b PushS
	var_44_bool = var_42_object == var_43_string; // 0xb5c Eq
	if(var_44_bool == 0) goto Label_2917; // 0xb5d JumpB
	var_45_object = Obj(); // 0xb5e PushV
	func_4499(var_45_object); // 0xb5f NEW_2
	RemoveActor(var_45_object); // 0xb61 Func
	Hold(); // 0xb63 Func
	
Label_2917:
	return 0; // 0xb65 Return
}


task_15_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	StopGroup0(); // 0xb66 Func
	sync(); // 0xb68 Func
	return 0; // 0xb6a Return
}


task_16_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_int, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0xb83 PushV
	var_45_int = 3; // 0xb84 PushI
	var_46_bool = var_42_object == var_45_int; // 0xb85 Eq
	if(var_46_bool == 0) goto Label_2954; // 0xb86 JumpB
	GetMainOutdoorScene(var_44_object); // 0xb87 Func
	var_44_object = 0; // 0xb89 SetNull
	
Label_2954:
	return 2; // 0xb8a Return
}


task_16_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_object, var_39_bool, var_40_object, var_41_bool, var_42_object)
{
	return 0; // 0xb8c Return
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_3215(var_41_object); // 0xb8e NEW_2
	var_42_bool = 0; var_43_int = 0; // 0xb90 PushV
	var_43_int = 0; // 0xb91 MovI
	func_5017(var_42_bool, var_43_int); // 0xb92 NEW_2
	return 0; // 0xb94 Return
}


task_17_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_int)
{
	var_43_object = Obj(); var_44_object = Obj(); // 0xe6f PushV
	var_45_int = 4; // 0xe70 PushI
	var_46_bool = var_42_int == var_45_int; // 0xe71 Eq
	if(var_46_bool == 0) goto Label_3703; // 0xe72 JumpB
	GetMainOutdoorScene(var_44_object); // 0xe73 Func
	var_44_object = 0; // 0xe75 SetNull
	goto Label_3707; // 0xe76 Jump
	
Label_3707:
	return 2; // 0xe7b Return
	
Label_3703:
	var_47_int = 0; // 0xe77 PushV
	var_47_int = var_42_int; // 0xe78 Mov
	func_3765(var_44_object, var_47_int); // 0xe79 NEW_2
}


task_17_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	func_3779(var_41_object); // 0xe7d NEW_2
	var_46_bool = 0; var_47_int = 0; // 0xe7f PushV
	var_47_int = 0; // 0xe80 MovI
	func_5017(var_46_bool, var_47_int); // 0xe81 NEW_2
	return 0; // 0xe83 Return
}


task_17_event_1(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object)
{
	var_43_bool = 0; // 0xed1 PushV
	var_43_bool = 0; // 0xed2 MovB
	var_44_bool = var_1_object == var_42_object; // 0xed3 Eq
	if(var_44_bool == 0) goto Label_3800; // 0xed4 JumpB
	var_45_bool = var_2_object == 0; // 0xed5 Not
	if(var_45_bool == 0) goto Label_3800; // 0xed6 JumpB
	var_43_bool = 1; // 0xed7 MovB
	
Label_3800:
	if(var_43_bool == 0) goto Label_3806; // 0xed8 JumpB
	var_2_object = 1; // 0xed9 TMovB
	var_46_object = Obj(); // 0xeda PushV
	var_46_object = var_42_object; // 0xedb Mov
	func_4440(var_46_object); // 0xedc NEW_2
	
Label_3806:
	return 0; // 0xede Return
}


task_17_event_2(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object)
{
	var_43_bool = 0; // 0xee0 PushV
	var_43_bool = 0; // 0xee1 MovB
	var_44_bool = var_1_object == var_42_object; // 0xee2 Eq
	if(var_44_bool == 0) goto Label_3815; // 0xee3 JumpB
	var_45_object = var_2_object; // 0xee4 PushT
	if(var_45_object == 0) goto Label_3815; // 0xee5 JumpB
	var_43_bool = 1; // 0xee6 MovB
	
Label_3815:
	if(var_43_bool == 0) goto Label_3820; // 0xee7 JumpB
	var_2_object = 0; // 0xee8 TMovB
	var_46_string = "head"; // 0xee9 PushS
	UnlookAsync(var_46_string); // 0xeea Func
	
Label_3820:
	return 0; // 0xeec Return
}


task_17_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object)
{
	RequestClearPath(var_42_object); // 0xf66 Func
	return 0; // 0xf68 Return
}


task_17_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object)
{
	func_3779(var_42_object); // 0xf72 NEW_2
	var_47_object = Obj(); // 0xf74 PushV
	var_47_object = var_42_object; // 0xf75 Mov
	func_5183(); // 0xf76 NEW_2
	return 0; // 0xf78 Return
}


event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_string)
{
	var_43_string = "cleanup"; // 0x1392 PushS
	var_44_bool = var_42_string == var_43_string; // 0x1393 Eq
	if(var_44_bool == 0) goto Label_5016; // 0x1394 JumpB
	var_45_bool = GlobalVars[1]; // 0x1395 PushGE
	var_45_bool = 1; // 0x1396 MovB
	GlobalVars[1] = var_45_bool; // 0x1397 PopGE
	
Label_5016:
	return 0; // 0x1398 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object, var_43_int, var_44_float, var_45_float)
{
	var_46_object = Obj(); var_47_int = 0; var_48_float = 0; // 0x13f5 PushV
	var_46_object = var_42_object; // 0x13f6 Mov
	var_47_int = var_43_int; // 0x13f7 Mov
	var_48_float = var_44_float; // 0x13f8 Mov
	func_4224(var_46_object, var_47_int, var_48_float); // 0x13f9 NEW_2
	return 0; // 0x13fb Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object, var_43_int, var_44_float, var_45_float, var_46_cvector, var_47_cvector)
{
	var_48_object = Obj(); var_49_int = 0; var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); // 0x13fd PushV
	var_48_object = var_42_object; // 0x13fe Mov
	var_49_int = var_43_int; // 0x13ff Mov
	var_50_float = var_44_float; // 0x1400 Mov
	var_51_cvector = var_46_cvector; // 0x1401 Mov
	var_52_cvector = var_47_cvector; // 0x1402 Mov
	func_4292(var_50_float, var_51_cvector, var_52_cvector); // 0x1403 NEW_2
	return 0; // 0x1405 Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object, var_43_string)
{
	var_44_float = 0; var_45_float = 0; // 0x1406 PushV
	var_46_string = "health"; // 0x1407 PushS
	var_47_bool = var_43_string == var_46_string; // 0x1408 Eq
	if(var_47_bool == 0) goto Label_5138; // 0x1409 JumpB
	var_48_string = "health"; // 0x140a PushS
	GetProperty(var_48_string, var_45_float); // 0x140b Func
	var_49_int = 0; // 0x140d PushI
	var_50_bool = var_45_float <= var_49_int; // 0x140e LE
	if(var_50_bool == 0) goto Label_5138; // 0x140f JumpB
	SignalDeath(var_42_object); // 0x1410 Func
	
Label_5138:
	return 2; // 0x1412 Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object, var_42_object)
{
	func_4730(); // 0x1441 NEW_2
	var_66_bool = 0; var_67_string = ""; var_68_string = ""; // 0x1443 PushV
	var_67_string = "quest_b9_03"; // 0x1444 MovS
	var_68_string = "fail"; // 0x1445 MovS
	func_4563(var_66_bool, var_67_string, var_68_string); // 0x1446 NEW_2
	var_72_object = Obj(); // 0x1448 PushV
	var_72_object = var_42_object; // 0x1449 Mov
	TaskCall(14); // 0x144a TaskCall
	func_2723(var_72_object); // 0x144b NEW_2
	TaskReturn(); // 0x144c TaskReturn
	return 0; // 0x144e Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_int, var_33_bool, var_34_bool, var_35_float, var_36_int, var_37_object, var_38_bool, var_39_object, var_40_bool, var_41_object)
{
	var_42_int = GlobalVars[2]; // 0x197 PushGE
	var_42_int = 0; // 0x198 MovI
	GlobalVars[2] = var_42_int; // 0x199 PopGE
	var_43_int = GlobalVars[6]; // 0x19a PushGE
	var_43_int = 1; // 0x19b MovI
	GlobalVars[6] = var_43_int; // 0x19c PopGE
	var_44_string = "noaccess"; // 0x19d PushS
	var_45_int = 0; // 0x19e PushI
	SetProperty(var_44_string, var_45_int); // 0x19f Func
	
Label_417:
	var_46_bool = 1; // 0x1a1 PushB
	if(var_46_bool == 0) goto Label_669; // 0x1a2 JumpB
	var_47_int = 0; // 0x1a3 PushI
	var_48_int = GlobalVars[2]; // 0x1a4 PushGE
	var_49_bool = var_47_int == var_48_int; // 0x1a5 Eq
	if(var_49_bool == 0) goto Label_441; // 0x1a6 JumpB
	TaskCall(15); // 0x1a8 TaskCall
	func_2888(); // 0x1a9 NEW_2
	TaskReturn(); // 0x1aa TaskReturn
	var_58_bool = 0; var_59_int = 0; // 0x1ac PushV
	var_60_int = GlobalVars[6]; // 0x1ad PushGE
	var_59_int = var_60_int; // 0x1ae Mov
	func_5017(var_58_bool, var_59_int); // 0x1b0 NEW_2
	var_88_bool = var_58_bool == 0; // 0x1b2 Not
	if(var_88_bool == 0) goto Label_440; // 0x1b3 JumpB
	var_89_bool = 0; var_90_int = 0; // 0x1b4 PushV
	var_90_int = 2; // 0x1b5 MovI
	func_5017(var_89_bool, var_90_int); // 0x1b6 NEW_2
	
Label_440:
	goto Label_666; // 0x1b8 Jump
	
Label_666:
	sync(); // 0x29a Func
	goto Label_417; // 0x29c Jump
	
Label_441:
	var_91_int = 1; // 0x1b9 PushI
	var_92_int = GlobalVars[2]; // 0x1ba PushGE
	var_93_bool = var_91_int == var_92_int; // 0x1bb Eq
	if(var_93_bool == 0) goto Label_460; // 0x1bc JumpB
	TaskCall(3); // 0x1be TaskCall
	func_670(); // 0x1bf NEW_2
	TaskReturn(); // 0x1c0 TaskReturn
	var_112_int = 1; // 0x1c2 PushI
	var_113_int = GlobalVars[2]; // 0x1c3 PushGE
	var_114_bool = var_112_int == var_113_int; // 0x1c4 Eq
	if(var_114_bool == 0) goto Label_459; // 0x1c5 JumpB
	TaskCall(9); // 0x1c7 TaskCall
	func_1749(); // 0x1c8 NEW_2
	TaskReturn(); // 0x1c9 TaskReturn
	
Label_459:
	goto Label_666; // 0x1cb Jump
	
Label_460:
	var_180_int = 2; // 0x1cc PushI
	var_181_int = GlobalVars[2]; // 0x1cd PushGE
	var_182_bool = var_180_int == var_181_int; // 0x1ce Eq
	if(var_182_bool == 0) goto Label_470; // 0x1cf JumpB
	TaskCall(13); // 0x1d1 TaskCall
	func_2472(var_185_bool); // 0x1d2 NEW_2
	TaskReturn(); // 0x1d3 TaskReturn
	goto Label_666; // 0x1d5 Jump
	
Label_470:
	var_280_int = 3; // 0x1d6 PushI
	var_281_int = GlobalVars[2]; // 0x1d7 PushGE
	var_282_bool = var_280_int == var_281_int; // 0x1d8 Eq
	if(var_282_bool == 0) goto Label_489; // 0x1d9 JumpB
	TaskCall(3); // 0x1db TaskCall
	func_670(); // 0x1dc NEW_2
	TaskReturn(); // 0x1dd TaskReturn
	var_283_int = 3; // 0x1df PushI
	var_284_int = GlobalVars[2]; // 0x1e0 PushGE
	var_285_bool = var_283_int == var_284_int; // 0x1e1 Eq
	if(var_285_bool == 0) goto Label_488; // 0x1e2 JumpB
	TaskCall(10); // 0x1e4 TaskCall
	func_1986(var_286_bool); // 0x1e5 NEW_2
	TaskReturn(); // 0x1e6 TaskReturn
	
Label_488:
	goto Label_666; // 0x1e8 Jump
	
Label_489:
	var_313_int = 8; // 0x1e9 PushI
	var_314_int = GlobalVars[2]; // 0x1ea PushGE
	var_315_bool = var_313_int == var_314_int; // 0x1eb Eq
	if(var_315_bool == 0) goto Label_499; // 0x1ec JumpB
	TaskCall(6); // 0x1ee TaskCall
	func_1014(); // 0x1ef NEW_2
	TaskReturn(); // 0x1f0 TaskReturn
	goto Label_666; // 0x1f2 Jump
	
Label_499:
	var_399_int = 4; // 0x1f3 PushI
	var_400_int = GlobalVars[2]; // 0x1f4 PushGE
	var_401_bool = var_399_int == var_400_int; // 0x1f5 Eq
	if(var_401_bool == 0) goto Label_509; // 0x1f6 JumpB
	TaskCall(7); // 0x1f8 TaskCall
	func_1242(); // 0x1f9 NEW_2
	TaskReturn(); // 0x1fa TaskReturn
	goto Label_666; // 0x1fc Jump
	
Label_509:
	var_479_int = 5; // 0x1fd PushI
	var_480_int = GlobalVars[2]; // 0x1fe PushGE
	var_481_bool = var_479_int == var_480_int; // 0x1ff Eq
	if(var_481_bool == 0) goto Label_555; // 0x200 JumpB
	var_482_bool = 0; // 0x201 PushV
	TaskCall(11); // 0x202 TaskCall
	func_2119(var_482_bool); // 0x203 NEW_2
	TaskReturn(); // 0x204 TaskReturn
	var_609_bool = var_483_bool == 0; // 0x206 Not
	if(var_609_bool == 0) goto Label_537; // 0x207 JumpB
	var_610_int = 5; // 0x208 PushI
	var_611_int = GlobalVars[2]; // 0x209 PushGE
	var_612_bool = var_610_int == var_611_int; // 0x20a Eq
	if(var_612_bool == 0) goto Label_537; // 0x20b JumpB
	TaskCall(12); // 0x20d TaskCall
	func_2383(); // 0x20e NEW_2
	TaskReturn(); // 0x20f TaskReturn
	var_624_int = 5; // 0x211 PushI
	var_625_int = GlobalVars[2]; // 0x212 PushGE
	var_626_bool = var_624_int == var_625_int; // 0x213 Eq
	if(var_626_bool == 0) goto Label_537; // 0x214 JumpB
	var_627_bool = 0; var_628_int = 0; // 0x215 PushV
	var_628_int = 1; // 0x216 MovI
	func_5017(var_627_bool, var_628_int); // 0x217 NEW_2
	
Label_537:
	var_629_int = 5; // 0x219 PushI
	var_630_int = GlobalVars[2]; // 0x21a PushGE
	var_631_bool = var_629_int == var_630_int; // 0x21b Eq
	if(var_631_bool == 0) goto Label_554; // 0x21c JumpB
	TaskCall(12); // 0x21e TaskCall
	func_2383(); // 0x21f NEW_2
	TaskReturn(); // 0x220 TaskReturn
	var_633_int = 5; // 0x222 PushI
	var_634_int = GlobalVars[2]; // 0x223 PushGE
	var_635_bool = var_633_int == var_634_int; // 0x224 Eq
	if(var_635_bool == 0) goto Label_554; // 0x225 JumpB
	var_636_bool = 0; var_637_int = 0; // 0x226 PushV
	var_637_int = 2; // 0x227 MovI
	func_5017(var_636_bool, var_637_int); // 0x228 NEW_2
	
Label_554:
	goto Label_666; // 0x22a Jump
	
Label_555:
	var_638_int = 6; // 0x22b PushI
	var_639_int = GlobalVars[2]; // 0x22c PushGE
	var_640_bool = var_638_int == var_639_int; // 0x22d Eq
	if(var_640_bool == 0) goto Label_568; // 0x22e JumpB
	var_641_object = Obj(); // 0x22f PushV
	var_642_object = GlobalVars[3]; // 0x230 PushGE
	var_641_object = var_642_object; // 0x231 Mov
	TaskCall(5); // 0x233 TaskCall
	func_802(var_641_object); // 0x234 NEW_2
	TaskReturn(); // 0x235 TaskReturn
	goto Label_666; // 0x237 Jump
	
Label_568:
	var_713_int = 9; // 0x238 PushI
	var_714_int = GlobalVars[2]; // 0x239 PushGE
	var_715_bool = var_713_int == var_714_int; // 0x23a Eq
	if(var_715_bool == 0) goto Label_593; // 0x23b JumpB
	var_716_object = Obj(); // 0x23c PushV
	var_717_object = GlobalVars[5]; // 0x23d PushGE
	var_716_object = var_717_object; // 0x23e Mov
	TaskCall(16); // 0x240 TaskCall
	func_2923(var_725_object, var_716_object); // 0x241 NEW_2
	TaskReturn(); // 0x242 TaskReturn
	var_1210_bool = 0; var_1211_object = Obj(); // 0x244 PushV
	var_1212_object = GlobalVars[5]; // 0x245 PushGE
	var_1211_object = var_1212_object; // 0x246 Mov
	func_4137(var_1210_bool, var_1211_object); // 0x248 NEW_2
	var_1213_bool = var_1210_bool == 0; // 0x24a Not
	if(var_1213_bool == 0) goto Label_592; // 0x24b JumpB
	var_1214_bool = 0; var_1215_int = 0; // 0x24c PushV
	var_1215_int = 1; // 0x24d MovI
	func_5017(var_1214_bool, var_1215_int); // 0x24e NEW_2
	
Label_592:
	goto Label_666; // 0x250 Jump
	
Label_593:
	var_1216_int = 7; // 0x251 PushI
	var_1217_int = GlobalVars[2]; // 0x252 PushGE
	var_1218_bool = var_1216_int == var_1217_int; // 0x253 Eq
	if(var_1218_bool == 0) goto Label_663; // 0x254 JumpB
	var_1219_object = Obj(); // 0x255 PushV
	var_1220_object = GlobalVars[4]; // 0x256 PushGE
	var_1219_object = var_1220_object; // 0x257 Mov
	TaskCall(8); // 0x259 TaskCall
	func_1502(var_1219_object); // 0x25a NEW_2
	TaskReturn(); // 0x25b TaskReturn
	var_1289_int = 7; // 0x25d PushI
	var_1290_int = GlobalVars[2]; // 0x25e PushGE
	var_1291_bool = var_1289_int == var_1290_int; // 0x25f Eq
	if(var_1291_bool == 0) goto Label_662; // 0x260 JumpB
	var_1292_bool = 0; // 0x261 PushV
	var_1292_bool = 1; // 0x262 MovB
	var_1293_bool = 0; var_1294_object = Obj(); // 0x263 PushV
	var_1295_object = GlobalVars[4]; // 0x264 PushGE
	var_1294_object = var_1295_object; // 0x265 Mov
	func_4137(var_1293_bool, var_1294_object); // 0x267 NEW_2
	var_1296_bool = var_1293_bool == 0; // 0x269 Not
	if(var_1296_bool == 0) goto Label_629; // 0x26a JumpB
	var_1297_float = 0; var_1298_object = Obj(); // 0x26b PushV
	var_1299_object = GlobalVars[4]; // 0x26c PushGE
	var_1298_object = var_1299_object; // 0x26d Mov
	func_3998(var_1298_object); // 0x26f NEW_2
	var_1306_float = 1000000.0; // 0x271 PushF
	var_1307_bool = var_1297_float > var_1306_float; // 0x272 GT
	if(var_1307_bool == 0) goto Label_629; // 0x273 JumpB
	var_1292_bool = 0; // 0x274 MovB
	
Label_629:
	if(var_1292_bool == 0) goto Label_662; // 0x275 JumpB
	var_1308_bool = 0; var_1309_object = Obj(); // 0x276 PushV
	var_1310_object = GlobalVars[4]; // 0x277 PushGE
	var_1309_object = var_1310_object; // 0x278 Mov
	func_4137(var_1308_bool, var_1309_object); // 0x27a NEW_2
	if(var_1308_bool == 0) goto Label_662; // 0x27c JumpB
	var_1311_object = Obj(); // 0x27d PushV
	var_1312_object = GlobalVars[4]; // 0x27e PushGE
	var_1311_object = var_1312_object; // 0x27f Mov
	TaskCall(4); // 0x281 TaskCall
	func_738(var_1311_object); // 0x282 NEW_2
	TaskReturn(); // 0x283 TaskReturn
	var_1316_int = 7; // 0x285 PushI
	var_1317_int = GlobalVars[2]; // 0x286 PushGE
	var_1318_bool = var_1316_int == var_1317_int; // 0x287 Eq
	if(var_1318_bool == 0) goto Label_662; // 0x288 JumpB
	TaskCall(12); // 0x28a TaskCall
	func_2383(); // 0x28b NEW_2
	TaskReturn(); // 0x28c TaskReturn
	var_1320_int = 7; // 0x28e PushI
	var_1321_int = GlobalVars[2]; // 0x28f PushGE
	var_1322_bool = var_1320_int == var_1321_int; // 0x290 Eq
	if(var_1322_bool == 0) goto Label_662; // 0x291 JumpB
	var_1323_bool = 0; var_1324_int = 0; // 0x292 PushV
	var_1324_int = 1; // 0x293 MovI
	func_5017(var_1323_bool, var_1324_int); // 0x294 NEW_2
	
Label_662:
	goto Label_666; // 0x296 Jump
	
Label_663:
	var_1325_string = "Unknown FSM state"; // 0x297 PushS
	Trace(var_1325_string); // 0x298 Func
	
Label_669:
	return 0; // 0x29d Return
}


func_4096(var_204_bool)
{
	var_206_bool = 0; var_207_bool = 0; // 0x1000 PushV
	IsDead(var_207_bool); // 0x1001 ObjFunc
	var_204_bool = var_207_bool; // 0x1003 Mov
	return 2; // 0x1004 Return
}


func_0(var_0_object, var_48_int, var_49_object)
{
	var_51_object = Obj(); var_52_bool = 0; var_53_int = 0; var_54_bool = 0; var_55_object = Obj(); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; // 0x0 PushV
	var_0_object = var_49_object; // 0x1 TMov
	var_59_bool = 0; var_60_object = Obj(); var_61_float = 0; // 0x2 PushV
	var_60_object = var_49_object; // 0x3 Mov
	var_61_float = 70.0; // 0x4 MovF
	func_4322(var_60_object, var_61_float); // 0x5 NEW_2
	var_106_bool = var_59_bool == 0; // 0x7 Not
	if(var_106_bool == 0) goto Label_11; // 0x8 JumpB
	var_48_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_55_object); // 0xb Func
	var_107_int = 0; // 0xd PushV
	func_4939(var_107_int); // 0xe NEW_2
	SetNPCName(var_107_int); // 0x10 ObjFunc
	var_108_int = 0; // 0x12 PushV
	func_4937(var_108_int); // 0x13 NEW_2
	SetNPCDescription(var_108_int); // 0x15 ObjFunc
	var_109_string = ""; // 0x17 PushV
	func_4941(var_109_string); // 0x18 NEW_2
	SetPhoto(var_109_string); // 0x1a ObjFunc
	var_110_string = ""; // 0x1c PushV
	func_4943(var_110_string); // 0x1d NEW_2
	SetPhoto2(var_110_string); // 0x1f ObjFunc
	var_111_int = 0; // 0x21 PushV
	func_4860(var_111_int); // 0x22 NEW_2
	SetPlayerName(var_111_int); // 0x24 ObjFunc
	var_57_int = -1; // 0x26 MovI
	IsOverrideActive(var_56_bool); // 0x27 Func
	var_119_bool = var_56_bool; // 0x29 Push
	if(var_119_bool == 0) goto Label_45; // 0x2a JumpB
	var_48_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_55_object); // 0x2d Func
	var_120_object = Obj(); var_121_object = Obj(); // 0x2f PushV
	var_120_object = var_49_object; // 0x30 Mov
	var_121_object = var_55_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_122_object, var_123_object, var_124_string, var_125_bool, var_120_object, var_121_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_58_bool); // 0x36 ObjFunc
	
Label_56:
	var_206_bool = var_58_bool == 0; // 0x38 Not
	if(var_206_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_58_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_207_object = Obj(); // 0x3f PushV
	var_207_object = var_49_object; // 0x40 Mov
	func_4391(); // 0x41 NEW_2
	StopDialog(var_55_object); // 0x43 Func
	GetReturnValue(var_57_int); // 0x45 ObjFunc
	var_48_int = var_57_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_4613()
{
	var_50_int = 2; // 0x1206 PushI
	SetReturnValue(var_50_int); // 0x1207 ObjFunc
	return 0; // 0x1209 Return
}


func_4101(var_193_bool, var_194_object)
{
	var_195_object = Obj(); var_196_object = Obj(); var_197_object = Obj(); var_198_object = Obj(); // 0x1005 PushV
	var_199_bool = var_194_object == 0; // 0x1006 NullEq
	if(var_199_bool == 0) goto Label_4106; // 0x1007 JumpB
	var_193_bool = 0; // 0x1008 MovB
	return 4; // 0x1009 Return
	
Label_4106:
	var_200_bool = 0; // 0x100a PushV
	var_200_bool = 0; // 0x100b MovB
	var_201_string = "IsDead"; // 0x100c PushS
	var_202_int = 1; // 0x100d PushI
	var_203_bool = IsFuncExist(var_194_object, var_201_string, var_202_int); // 0x100e FuncExist
	if(var_203_bool == 0) goto Label_4118; // 0x100f JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x1010 PushV
	var_205_object = var_194_object; // 0x1011 Mov
	func_4096(var_205_object); // 0x1012 NEW_2
	if(var_204_bool == 0) goto Label_4118; // 0x1014 JumpB
	var_200_bool = 1; // 0x1015 MovB
	
Label_4118:
	if(var_200_bool == 0) goto Label_4121; // 0x1016 JumpB
	var_193_bool = 0; // 0x1017 MovB
	return 4; // 0x1018 Return
	
Label_4121:
	GetScene(var_197_object); // 0x1019 Func
	var_208_bool = var_197_object == 0; // 0x101b NullEq
	if(var_208_bool == 0) goto Label_4127; // 0x101c JumpB
	var_193_bool = 0; // 0x101d MovB
	return 4; // 0x101e Return
	
Label_4127:
	GetScene(var_198_object); // 0x101f ObjFunc
	var_209_bool = var_197_object != var_198_object; // 0x1021 Neq
	if(var_209_bool == 0) goto Label_4133; // 0x1022 JumpB
	var_193_bool = 0; // 0x1023 MovB
	return 4; // 0x1024 Return
	
Label_4133:
	var_193_bool = 1; // 0x1025 MovB
	return 4; // 0x1026 Return
}


func_4618()
{
	var_152_int = 1; // 0x120b PushI
	SetReturnValue(var_152_int); // 0x120c ObjFunc
	return 0; // 0x120e Return
}


func_2572(var_0_object, var_1_object, var_226_bool, var_227_object, var_228_float, var_229_float, var_230_bool, var_231_bool)
{
	var_232_bool = 0; var_233_bool = 0; var_234_object = Obj(); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_float = 0; var_239_object = Obj(); var_240_bool = 0; var_241_bool = 0; var_242_object = Obj(); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_float = 0; var_247_object = Obj(); // 0xa0c PushV
	var_0_object = 0; // 0xa0d TMovB
	var_1_object = var_227_object; // 0xa0e TMov
	var_241_bool = var_231_bool; // 0xa0f Mov
	
Label_2576:
	var_248_bool = 0; var_249_object = Obj(); // 0xa10 PushV
	var_249_object = var_227_object; // 0xa11 Mov
	func_2712(var_248_bool, var_249_object); // 0xa12 NEW_2
	var_252_bool = var_248_bool == 0; // 0xa14 Not
	if(var_252_bool == 0) goto Label_2584; // 0xa15 JumpB
	var_226_bool = 0; // 0xa16 MovB
	return 16; // 0xa17 Return
	
Label_2584:
	GetPosition(var_243_cvector); // 0xa18 ObjFunc
	GetPosition(var_244_cvector); // 0xa1a Func
	var_245_cvector = var_243_cvector - var_244_cvector; // 0xa1c Sub2
	var_246_float = var_245_cvector | var_245_cvector; // 0xa1d Or2
	var_253_bool = 0; // 0xa1e PushV
	var_253_bool = 0; // 0xa1f MovB
	var_254_int = 0; // 0xa20 PushI
	var_255_bool = var_229_float > var_254_int; // 0xa21 GT
	if(var_255_bool == 0) goto Label_2599; // 0xa22 JumpB
	var_256_float = var_229_float * var_229_float; // 0xa23 Mult
	var_257_bool = var_246_float > var_256_float; // 0xa24 GT
	if(var_257_bool == 0) goto Label_2599; // 0xa25 JumpB
	var_253_bool = 1; // 0xa26 MovB
	
Label_2599:
	if(var_253_bool == 0) goto Label_2604; // 0xa27 JumpB
	Stop(); // 0xa28 Func
	var_226_bool = 0; // 0xa2a MovB
	return 16; // 0xa2b Return
	
Label_2604:
	var_258_float = var_228_float * var_228_float; // 0xa2c Mult
	var_259_bool = var_246_float > var_258_float; // 0xa2d GT
	if(var_259_bool == 0) goto Label_2666; // 0xa2e JumpB
	GetPFPosition(var_243_cvector); // 0xa2f ObjFunc
	FindPathTo(var_247_object, var_243_cvector); // 0xa31 Func
	var_260_bool = var_247_object != 0; // 0xa33 NullNeq
	if(var_260_bool == 0) goto Label_2615; // 0xa34 JumpB
	var_242_object = var_247_object; // 0xa35 Mov
	var_247_object = 0; // 0xa36 SetNull
	
Label_2615:
	var_261_bool = var_242_object != 0; // 0xa37 NullNeq
	if(var_261_bool == 0) goto Label_2648; // 0xa38 JumpB
	var_262_bool = var_241_bool; // 0xa39 Push
	if(var_262_bool == 0) goto Label_2625; // 0xa3a JumpB
	var_241_bool = 0; // 0xa3b MovB
	RotatePath(var_242_object, var_240_bool); // 0xa3c Func
	var_263_bool = var_240_bool == 0; // 0xa3e Not
	if(var_263_bool == 0) goto Label_2625; // 0xa3f JumpB
	goto Label_2672; // 0xa40 Jump
	
Label_2672:
	var_226_bool = !var_0_object; // 0xa70 Not2
	return 16; // 0xa71 Return
	
Label_2625:
	var_264_int = 0; // 0xa41 PushI
	var_265_float = 0.3; // 0xa42 PushF
	SetTimer(var_264_int, var_265_float); // 0xa43 Func
	var_266_string = ""; // 0xa45 PushV
	func_2719(var_266_string); // 0xa46 NEW_2
	var_267_string = ""; // 0xa48 PushV
	func_2721(var_267_string); // 0xa49 NEW_2
	FollowPath(var_242_object, var_230_bool, var_240_bool, var_266_string, var_267_string); // 0xa4b Func
	var_268_bool = var_240_bool == 0; // 0xa4d Not
	if(var_268_bool == 0) goto Label_2646; // 0xa4e JumpB
	var_269_object = var_0_object; // 0xa4f PushT
	if(var_269_object == 0) goto Label_2644; // 0xa50 JumpB
	var_242_object = 0; // 0xa51 SetNull
	goto Label_2672; // 0xa52 Jump
	
Label_2644:
	goto Label_2671; // 0xa54 Jump
	
Label_2671:
	goto Label_2576; // 0xa6f Jump
	
Label_2646:
	var_242_object = 0; // 0xa56 SetNull
	goto Label_2664; // 0xa57 Jump
	
Label_2664:
	var_247_object = 0; // 0xa68 SetNull
	goto Label_2670; // 0xa69 Jump
	
Label_2670:
	var_242_object = 0; // 0xa6e SetNull
	
Label_2648:
	var_270_int = 0; // 0xa58 PushI
	KillTimer(var_270_int); // 0xa59 Func
	var_271_float = 0.5; // 0xa5b PushF
	Sleep(var_271_float, var_240_bool); // 0xa5c Func
	var_272_bool = var_240_bool == 0; // 0xa5e Not
	if(var_272_bool == 0) goto Label_2660; // 0xa5f JumpB
	var_273_object = var_0_object; // 0xa60 PushT
	if(var_273_object == 0) goto Label_2660; // 0xa61 JumpB
	var_242_object = 0; // 0xa62 SetNull
	goto Label_2672; // 0xa63 Jump
	
Label_2660:
	var_274_int = 0; // 0xa64 PushI
	var_275_float = 0.3; // 0xa65 PushF
	SetTimer(var_274_int, var_275_float); // 0xa66 Func
	
Label_2666:
	var_276_int = 0; // 0xa6a PushI
	KillTimer(var_276_int); // 0xa6b Func
	goto Label_2672; // 0xa6d Jump
}


func_4623()
{
	var_161_int = 3; // 0x1210 PushI
	SetReturnValue(var_161_int); // 0x1211 ObjFunc
	return 0; // 0x1213 Return
}


func_5139(var_44_bool, var_45_object, var_50_object)
{
	var_46_int = 0; var_47_int = 0; // 0x1413 PushV
	var_48_int = 0; var_49_object = Obj(); // 0x1414 PushV
	var_49_object = var_45_object; // 0x1415 Mov
	TaskCall(0); // 0x1416 TaskCall
	func_0(var_50_object, var_48_int, var_49_object); // 0x1417 NEW_2
	TaskReturn(); // 0x1418 TaskReturn
	var_47_int = var_50_object; // 0x1419 Mov
	var_215_int = 2; // 0x141b PushI
	var_216_bool = var_47_int == var_215_int; // 0x141c Eq
	if(var_216_bool == 0) goto Label_5155; // 0x141d JumpB
	var_217_bool = 0; var_218_int = 0; // 0x141e PushV
	var_218_int = 2; // 0x141f MovI
	func_5017(var_217_bool, var_218_int); // 0x1420 NEW_2
	goto Label_5181; // 0x1422 Jump
	
Label_5181:
	var_44_bool = 1; // 0x143d MovB
	return 2; // 0x143e Return
	
Label_5155:
	var_246_int = 1; // 0x1423 PushI
	var_247_bool = var_47_int == var_246_int; // 0x1424 Eq
	if(var_247_bool == 0) goto Label_5163; // 0x1425 JumpB
	var_248_bool = 0; var_249_int = 0; // 0x1426 PushV
	var_249_int = 1; // 0x1427 MovI
	func_5017(var_248_bool, var_249_int); // 0x1428 NEW_2
	goto Label_5181; // 0x142a Jump
	
Label_5163:
	var_250_int = 3; // 0x142b PushI
	var_251_bool = var_47_int == var_250_int; // 0x142c Eq
	if(var_251_bool == 0) goto Label_5171; // 0x142d JumpB
	var_252_bool = 0; var_253_int = 0; // 0x142e PushV
	var_253_int = 5; // 0x142f MovI
	func_5017(var_252_bool, var_253_int); // 0x1430 NEW_2
	goto Label_5181; // 0x1432 Jump
	
Label_5171:
	var_254_int = 4; // 0x1433 PushI
	var_255_bool = var_47_int == var_254_int; // 0x1434 Eq
	if(var_255_bool == 0) goto Label_5179; // 0x1435 JumpB
	var_256_bool = 0; var_257_int = 0; // 0x1436 PushV
	var_257_int = 8; // 0x1437 MovI
	func_5017(var_256_bool, var_257_int); // 0x1438 NEW_2
	goto Label_5181; // 0x143a Jump
	
Label_5179:
	var_44_bool = 0; // 0x143b MovB
	return 2; // 0x143c Return
}


func_4628()
{
	var_137_string = "oob9BoyFollower1"; // 0x1215 PushS
	var_138_int = 1; // 0x1216 PushI
	SetVariable(var_137_string, var_138_int); // 0x1217 Func
	return 0; // 0x1219 Return
}


func_4634()
{
	var_53_object = Obj(); var_54_object = Obj(); // 0x121a PushV
	var_55_object = Obj(); // 0x121b PushV
	func_4810(var_55_object); // 0x121c NEW_2
	var_54_object = var_55_object; // 0x121d Mov
	var_62_string = "b9q03Bonfire1"; // 0x121f PushS
	var_63_string = "pt_bonfire1"; // 0x1220 PushS
	var_64_int = 0; // 0x1221 PushI
	var_65_int = 531507; // 0x1222 PushI
	var_66_float = 0; // 0x1223 PushV
	func_4575(var_66_float); // 0x1224 NEW_2
	AddMark(var_62_string, var_63_string, var_64_int, var_65_int, var_66_float); // 0x1226 ObjFunc
	var_69_string = "b9q03Bonfire2"; // 0x1228 PushS
	var_70_string = "pt_bonfire2"; // 0x1229 PushS
	var_71_int = 0; // 0x122a PushI
	var_72_int = 531508; // 0x122b PushI
	var_73_float = 0; // 0x122c PushV
	func_4575(var_73_float); // 0x122d NEW_2
	AddMark(var_69_string, var_70_string, var_71_int, var_72_int, var_73_float); // 0x122f ObjFunc
	var_74_string = "b9q03Bonfire3"; // 0x1231 PushS
	var_75_string = "pt_bonfire3"; // 0x1232 PushS
	var_76_int = 0; // 0x1233 PushI
	var_77_int = 531509; // 0x1234 PushI
	var_78_float = 0; // 0x1235 PushV
	func_4575(var_78_float); // 0x1236 NEW_2
	AddMark(var_74_string, var_75_string, var_76_int, var_77_int, var_78_float); // 0x1238 ObjFunc
	var_79_string = "b9q03Bonfire4"; // 0x123a PushS
	var_80_string = "pt_bonfire4"; // 0x123b PushS
	var_81_int = 0; // 0x123c PushI
	var_82_int = 531510; // 0x123d PushI
	var_83_float = 0; // 0x123e PushV
	func_4575(var_83_float); // 0x123f NEW_2
	AddMark(var_79_string, var_80_string, var_81_int, var_82_int, var_83_float); // 0x1241 ObjFunc
	func_4743(); // 0x1244 NEW_2
	return 2; // 0x1246 Return
}


func_1562(var_1237_cvector, var_1238_float)
{
	var_1239_cvector = CVector(0,0,0); var_1240_cvector = CVector(0,0,0); var_1241_cvector = CVector(0,0,0); var_1242_cvector = CVector(0,0,0); var_1243_cvector = CVector(0,0,0); var_1244_float = 0; var_1245_cvector = CVector(0,0,0); var_1246_cvector = CVector(0,0,0); var_1247_cvector = CVector(0,0,0); var_1248_cvector = CVector(0,0,0); var_1249_cvector = CVector(0,0,0); var_1250_float = 0; // 0x61a PushV
	GetPosition(var_1245_cvector); // 0x61b Func
	GetPosition(var_1246_cvector); // 0x61d TObjFunc
	GetDirection(var_1247_cvector); // 0x61f Func
	var_1251_cvector = CVector(0,0,0); var_1252_cvector = CVector(0,0,0); // 0x621 PushV
	var_1253_cvector = CVector(0,0,0); var_1254_cvector = CVector(0,0,0); // 0x622 PushV
	var_1254_cvector = var_1245_cvector - var_1246_cvector; // 0x623 Sub2
	func_4505(var_1253_cvector, var_1254_cvector); // 0x624 NEW_2
	var_1255_float = 0.75; // 0x626 PushF
	var_1256_float = var_1247_cvector * var_1255_float; // 0x627 Mult
	var_1252_cvector = var_1253_cvector + var_1256_float; // 0x628 Add2
	func_4505(var_1251_cvector, var_1252_cvector); // 0x629 NEW_2
	var_1248_cvector = var_1251_cvector; // 0x62a Mov
	var_1257_int = 32; // 0x62c PushI
	var_1258_float = 7000.0; // 0x62d PushF
	FindLongestDir(var_1249_cvector, var_1250_float, var_1248_cvector, var_1238_float, var_1257_int, var_1258_float); // 0x62e Func
	var_1259_int = 100; // 0x630 PushI
	var_1250_float = var_1250_float - var_1259_int; // 0x631 Sub2
	var_1260_int = 0; // 0x632 PushI
	var_1261_bool = var_1250_float < var_1260_int; // 0x633 LT
	if(var_1261_bool == 0) goto Label_1590; // 0x634 JumpB
	var_1250_float = 0; // 0x635 MovI
	
Label_1590:
	var_1237_cvector = var_1249_cvector * var_1250_float; // 0x636 Mult2
	return 12; // 0x637 Return
}


func_3614(var_0_object, var_929_bool)
{
	var_930_bool = 0; var_931_bool = 0; // 0xe1e PushV
	var_932_string = "IsAttacking"; // 0xe1f PushS
	var_933_int = 1; // 0xe20 PushI
	var_934_bool = IsFuncExist(var_0_object, var_932_string, var_933_int); // 0xe21 FuncExist
	if(var_934_bool == 0) goto Label_3623; // 0xe22 JumpB
	IsAttacking(var_931_bool); // 0xe23 TObjFunc
	var_929_bool = var_931_bool; // 0xe25 Mov
	return 2; // 0xe26 Return
	
Label_3623:
	var_929_bool = 0; // 0xe27 MovB
	return 2; // 0xe28 Return
}


func_1055(var_340_cvector, var_341_float)
{
	var_342_cvector = CVector(0,0,0); var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_cvector = CVector(0,0,0); var_346_cvector = CVector(0,0,0); var_347_float = 0; var_348_cvector = CVector(0,0,0); var_349_cvector = CVector(0,0,0); var_350_cvector = CVector(0,0,0); var_351_cvector = CVector(0,0,0); var_352_cvector = CVector(0,0,0); var_353_float = 0; // 0x41f PushV
	GetPosition(var_348_cvector); // 0x420 Func
	GetPosition(var_349_cvector); // 0x422 TObjFunc
	GetDirection(var_350_cvector); // 0x424 Func
	var_354_cvector = CVector(0,0,0); var_355_cvector = CVector(0,0,0); // 0x426 PushV
	var_356_cvector = CVector(0,0,0); var_357_cvector = CVector(0,0,0); // 0x427 PushV
	var_357_cvector = var_348_cvector - var_349_cvector; // 0x428 Sub2
	func_4505(var_356_cvector, var_357_cvector); // 0x429 NEW_2
	var_363_float = 0.75; // 0x42b PushF
	var_364_float = var_350_cvector * var_363_float; // 0x42c Mult
	var_355_cvector = var_356_cvector + var_364_float; // 0x42d Add2
	func_4505(var_354_cvector, var_355_cvector); // 0x42e NEW_2
	var_351_cvector = var_354_cvector; // 0x42f Mov
	var_365_int = 32; // 0x431 PushI
	var_366_float = 7000.0; // 0x432 PushF
	FindLongestDir(var_352_cvector, var_353_float, var_351_cvector, var_341_float, var_365_int, var_366_float); // 0x433 Func
	var_367_int = 100; // 0x435 PushI
	var_353_float = var_353_float - var_367_int; // 0x436 Sub2
	var_368_int = 0; // 0x437 PushI
	var_369_bool = var_353_float < var_368_int; // 0x438 LT
	if(var_369_bool == 0) goto Label_1083; // 0x439 JumpB
	var_353_float = 0; // 0x43a MovI
	
Label_1083:
	var_340_cvector = var_352_cvector * var_353_float; // 0x43b Mult2
	return 12; // 0x43c Return
}


func_4137(var_189_bool, var_190_object)
{
	var_191_int = 0; var_192_int = 0; // 0x1029 PushV
	var_193_bool = 0; var_194_object = Obj(); // 0x102a PushV
	var_194_object = var_190_object; // 0x102b Mov
	func_4101(var_193_bool, var_194_object); // 0x102c NEW_2
	var_210_bool = var_193_bool == 0; // 0x102e Not
	if(var_210_bool == 0) goto Label_4146; // 0x102f JumpB
	var_189_bool = 0; // 0x1030 MovB
	return 2; // 0x1031 Return
	
Label_4146:
	var_211_bool = 0; var_212_object = Obj(); var_213_string = ""; // 0x1032 PushV
	var_212_object = var_190_object; // 0x1033 Mov
	var_213_string = "noaccess"; // 0x1034 MovS
	func_4011(var_211_bool, var_212_object, var_213_string); // 0x1035 NEW_2
	var_220_bool = var_211_bool == 0; // 0x1037 Not
	if(var_220_bool == 0) goto Label_4155; // 0x1038 JumpB
	var_189_bool = 1; // 0x1039 MovB
	return 2; // 0x103a Return
	
Label_4155:
	var_221_string = "noaccess"; // 0x103b PushS
	GetProperty(var_221_string, var_192_int); // 0x103c ObjFunc
	var_222_int = 0; // 0x103e PushI
	var_189_bool = var_192_int == var_222_int; // 0x103f Eq2
	return 2; // 0x1040 Return
}


func_3625(var_2_object, var_6_cvector)
{
	var_1046_float = 0; var_1047_int = 0; var_1048_float = 0; var_1049_int = 0; // 0xe29 PushV
	var_1050_bool = var_2_object == 0; // 0xe2a Not
	if(var_1050_bool == 0) goto Label_3629; // 0xe2b JumpB
	return 4; // 0xe2c Return
	
Label_3629:
	var_1051_cvector = var_6_cvector; // 0xe2d PushT
	if(var_1051_cvector == 0) goto Label_3637; // 0xe2e JumpB
	var_1052_int = -1; // 0xe2f PushI
	var_6_cvector = var_6_cvector + var_1052_int; // 0xe30 Add2
	var_1053_int = 0; // 0xe31 PushI
	var_1054_bool = var_6_cvector > var_1053_int; // 0xe32 GT
	if(var_1054_bool == 0) goto Label_3637; // 0xe33 JumpB
	return 4; // 0xe34 Return
	
Label_3637:
	rand(var_1048_float); // 0xe35 Func
	var_1055_float = 0; // 0xe37 PushV
	func_3673(var_1055_float); // 0xe38 NEW_2
	var_1056_bool = var_1048_float < var_1055_float; // 0xe3a LT
	if(var_1056_bool == 0) goto Label_3656; // 0xe3b JumpB
	irand(var_1049_int, var_1048_float); // 0xe3c Func
	var_1057_int = 1; // 0xe3e PushI
	var_1049_int = var_1049_int + var_1057_int; // 0xe3f Add2
	var_1058_string = "attack"; // 0xe40 PushS
	var_1059_int = var_1058_string + var_1049_int; // 0xe41 Add
	Speak(var_1059_int); // 0xe42 Func
	var_1060_int = 0; // 0xe44 PushV
	func_3671(var_1060_int); // 0xe45 NEW_2
	var_6_cvector = var_1060_int; // 0xe46 TMov
	
Label_3656:
	return 4; // 0xe48 Return
}


func_1592(var_0_object, var_1_object, var_2_object, var_1226_object)
{
	var_1227_cvector = CVector(0,0,0); var_1228_float = 0; var_1229_bool = 0; var_1230_cvector = CVector(0,0,0); var_1231_float = 0; var_1232_cvector = CVector(0,0,0); var_1233_float = 0; var_1234_bool = 0; var_1235_cvector = CVector(0,0,0); var_1236_float = 0; // 0x638 PushV
	var_0_object = var_1226_object; // 0x639 TMov
	var_1237_cvector = CVector(0,0,0); var_1238_float = 0; // 0x63a PushV
	var_1238_float = 1.74533; // 0x63b MovF
	func_1562(var_1237_cvector, var_1238_float); // 0x63c NEW_2
	var_1232_cvector = var_1237_cvector; // 0x63d Mov
	var_1233_float = var_1232_cvector | var_1232_cvector; // 0x63f Or2
	var_1262_float = 2500.0; // 0x640 PushF
	var_1263_bool = var_1233_float < var_1262_float; // 0x641 LT
	if(var_1263_bool == 0) goto Label_1621; // 0x642 JumpB
	var_1264_cvector = CVector(0,0,0); var_1265_float = 0; // 0x643 PushV
	var_1265_float = 2.61799; // 0x644 MovF
	func_1562(var_1264_cvector, var_1265_float); // 0x645 NEW_2
	var_1232_cvector = var_1264_cvector; // 0x646 Mov
	var_1233_float = var_1232_cvector | var_1232_cvector; // 0x648 Or2
	var_1266_float = 2500.0; // 0x649 PushF
	var_1267_bool = var_1233_float < var_1266_float; // 0x64a LT
	if(var_1267_bool == 0) goto Label_1621; // 0x64b JumpB
	var_1268_string = "Can't retreat, distance: "; // 0x64c PushS
	var_1269_float = sqrt(var_1233_float); // 0x64d Sqrt
	var_1270_int = var_1268_string + var_1269_float; // 0x64e Add
	Trace(var_1270_int); // 0x64f Func
	var_1271_float = 0.5; // 0x651 PushF
	Sleep(var_1271_float); // 0x652 Func
	return 10; // 0x654 Return
	
Label_1621:
	var_1272_float = GetByIndex(var_1232_cvector, 0); // 0x655 PushE
	var_1273_float = GetByIndex(var_1232_cvector, 2); // 0x656 PushE
	Rotate(var_1272_float, var_1273_float); // 0x657 Func
	var_1274_cvector = CVector(0,0,0); // 0x659 PushV
	func_3986(var_1274_cvector); // 0x65a NEW_2
	var_1_object = var_1274_cvector + var_1232_cvector; // 0x65c Add2
	var_1275_int = 120; // 0x65d PushI
	var_1276_float = 0.5; // 0x65e PushF
	SetTimer(var_1275_int, var_1276_float); // 0x65f Func
	var_2_object = 0; // 0x661 TMovB
	
Label_1634:
	var_1277_int = 1; // 0x662 PushI
	MovePoint(var_1277_int, var_1277_int, var_1234_bool); // 0x663 Func
	var_1278_bool = var_1234_bool; // 0x665 Push
	if(var_1278_bool == 0) goto Label_1662; // 0x666 JumpB
	var_1279_bool = var_0_object == 0; // 0x667 NullEq
	if(var_1279_bool == 0) goto Label_1643; // 0x668 JumpB
	goto Label_1664; // 0x669 Jump
	
Label_1664:
	return 10; // 0x680 Return
	
Label_1643:
	var_1280_cvector = CVector(0,0,0); var_1281_float = 0; // 0x66b PushV
	var_1281_float = 2.61799; // 0x66c MovF
	func_1562(var_1280_cvector, var_1281_float); // 0x66d NEW_2
	var_1235_cvector = var_1280_cvector; // 0x66e Mov
	var_1236_float = var_1235_cvector | var_1235_cvector; // 0x670 Or2
	var_1282_float = 2500.0; // 0x671 PushF
	var_1283_bool = var_1236_float >= var_1282_float; // 0x672 GE
	if(var_1283_bool == 0) goto Label_1661; // 0x673 JumpB
	var_1284_cvector = CVector(0,0,0); // 0x674 PushV
	func_3986(var_1284_cvector); // 0x675 NEW_2
	var_1_object = var_1284_cvector + var_1235_cvector; // 0x677 Add2
	var_1285_int = 120; // 0x678 PushI
	var_1286_float = 0.5; // 0x679 PushF
	SetTimer(var_1285_int, var_1286_float); // 0x67a Func
	goto Label_1662; // 0x67c Jump
	
Label_1662:
	var_1287_bool = var_2_object == 0; // 0x67e Not
	if(var_1287_bool == 0) goto Label_1634; // 0x67f JumpB
	
Label_1661:
	goto Label_1664; // 0x67d Jump
}


func_1085(var_0_object, var_1_object, var_2_object, var_329_object)
{
	var_330_cvector = CVector(0,0,0); var_331_float = 0; var_332_bool = 0; var_333_cvector = CVector(0,0,0); var_334_float = 0; var_335_cvector = CVector(0,0,0); var_336_float = 0; var_337_bool = 0; var_338_cvector = CVector(0,0,0); var_339_float = 0; // 0x43d PushV
	var_0_object = var_329_object; // 0x43e TMov
	var_340_cvector = CVector(0,0,0); var_341_float = 0; // 0x43f PushV
	var_341_float = 1.74533; // 0x440 MovF
	func_1055(var_340_cvector, var_341_float); // 0x441 NEW_2
	var_335_cvector = var_340_cvector; // 0x442 Mov
	var_336_float = var_335_cvector | var_335_cvector; // 0x444 Or2
	var_370_float = 2500.0; // 0x445 PushF
	var_371_bool = var_336_float < var_370_float; // 0x446 LT
	if(var_371_bool == 0) goto Label_1114; // 0x447 JumpB
	var_372_cvector = CVector(0,0,0); var_373_float = 0; // 0x448 PushV
	var_373_float = 2.61799; // 0x449 MovF
	func_1055(var_372_cvector, var_373_float); // 0x44a NEW_2
	var_335_cvector = var_372_cvector; // 0x44b Mov
	var_336_float = var_335_cvector | var_335_cvector; // 0x44d Or2
	var_374_float = 2500.0; // 0x44e PushF
	var_375_bool = var_336_float < var_374_float; // 0x44f LT
	if(var_375_bool == 0) goto Label_1114; // 0x450 JumpB
	var_376_string = "Can't retreat, distance: "; // 0x451 PushS
	var_377_float = sqrt(var_336_float); // 0x452 Sqrt
	var_378_int = var_376_string + var_377_float; // 0x453 Add
	Trace(var_378_int); // 0x454 Func
	var_379_float = 0.5; // 0x456 PushF
	Sleep(var_379_float); // 0x457 Func
	return 10; // 0x459 Return
	
Label_1114:
	var_380_float = GetByIndex(var_335_cvector, 0); // 0x45a PushE
	var_381_float = GetByIndex(var_335_cvector, 2); // 0x45b PushE
	Rotate(var_380_float, var_381_float); // 0x45c Func
	var_382_cvector = CVector(0,0,0); // 0x45e PushV
	func_3986(var_382_cvector); // 0x45f NEW_2
	var_1_object = var_382_cvector + var_335_cvector; // 0x461 Add2
	var_385_int = 120; // 0x462 PushI
	var_386_float = 0.5; // 0x463 PushF
	SetTimer(var_385_int, var_386_float); // 0x464 Func
	var_2_object = 0; // 0x466 TMovB
	
Label_1127:
	var_387_int = 1; // 0x467 PushI
	MovePoint(var_387_int, var_387_int, var_337_bool); // 0x468 Func
	var_388_bool = var_337_bool; // 0x46a Push
	if(var_388_bool == 0) goto Label_1155; // 0x46b JumpB
	var_389_bool = var_0_object == 0; // 0x46c NullEq
	if(var_389_bool == 0) goto Label_1136; // 0x46d JumpB
	goto Label_1157; // 0x46e Jump
	
Label_1157:
	return 10; // 0x485 Return
	
Label_1136:
	var_390_cvector = CVector(0,0,0); var_391_float = 0; // 0x470 PushV
	var_391_float = 2.61799; // 0x471 MovF
	func_1055(var_390_cvector, var_391_float); // 0x472 NEW_2
	var_338_cvector = var_390_cvector; // 0x473 Mov
	var_339_float = var_338_cvector | var_338_cvector; // 0x475 Or2
	var_392_float = 2500.0; // 0x476 PushF
	var_393_bool = var_339_float >= var_392_float; // 0x477 GE
	if(var_393_bool == 0) goto Label_1154; // 0x478 JumpB
	var_394_cvector = CVector(0,0,0); // 0x479 PushV
	func_3986(var_394_cvector); // 0x47a NEW_2
	var_1_object = var_394_cvector + var_338_cvector; // 0x47c Add2
	var_395_int = 120; // 0x47d PushI
	var_396_float = 0.5; // 0x47e PushF
	SetTimer(var_395_int, var_396_float); // 0x47f Func
	goto Label_1155; // 0x481 Jump
	
Label_1155:
	var_397_bool = var_2_object == 0; // 0x483 Not
	if(var_397_bool == 0) goto Label_1127; // 0x484 JumpB
	
Label_1154:
	goto Label_1157; // 0x482 Jump
}


func_4161(var_102_bool, var_103_cvector)
{
	var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_bool = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_bool = 0; // 0x1041 PushV
	GetPosition(var_107_cvector); // 0x1042 Func
	var_108_cvector = var_103_cvector - var_107_cvector; // 0x1044 Sub2
	var_110_float = GetByIndex(var_108_cvector, 0); // 0x1045 PushE
	var_111_float = GetByIndex(var_108_cvector, 2); // 0x1046 PushE
	Rotate(var_110_float, var_111_float, var_109_bool); // 0x1047 Func
	var_102_bool = var_109_bool; // 0x1049 Mov
	return 6; // 0x104a Return
}


func_2119(var_482_bool)
{
	var_484_int = 0; var_485_cvector = CVector(0,0,0); var_486_cvector = CVector(0,0,0); var_487_bool = 0; var_488_object = Obj(); var_489_bool = 0; var_490_int = 0; var_491_cvector = CVector(0,0,0); var_492_cvector = CVector(0,0,0); var_493_bool = 0; var_494_object = Obj(); var_495_bool = 0; // 0x847 PushV
	var_496_int = 0; // 0x848 PushV
	func_4947(var_496_int); // 0x849 NEW_2
	var_490_int = var_496_int; // 0x84a Mov
	var_523_bool = 0; // 0x84c PushV
	var_523_bool = 1; // 0x84d MovB
	var_524_int = -1; // 0x84e PushI
	var_525_bool = var_490_int == var_524_int; // 0x84f Eq
	if(var_525_bool == 0) goto Label_2135; // 0x850 JumpB
	var_526_bool = 0; var_527_int = 0; // 0x851 PushV
	var_527_int = var_490_int; // 0x852 Mov
	func_4976(var_526_bool, var_527_int); // 0x853 NEW_2
	if(var_526_bool == 0) goto Label_2135; // 0x855 JumpB
	var_523_bool = 0; // 0x856 MovB
	
Label_2135:
	if(var_523_bool == 0) goto Label_2142; // 0x857 JumpB
	var_533_bool = 0; var_534_int = 0; // 0x858 PushV
	var_534_int = 1; // 0x859 MovI
	func_5017(var_533_bool, var_534_int); // 0x85a NEW_2
	var_482_bool = 0; // 0x85c MovB
	return 12; // 0x85d Return
	
Label_2142:
	GetScene(var_494_object); // 0x85e Func
	var_535_string = "pt_b9q03_bonfire"; // 0x860 PushS
	var_536_int = var_535_string + var_490_int; // 0x861 Add
	GetLocator(var_536_int, var_493_bool, var_491_cvector, var_492_cvector); // 0x862 ObjFunc
	var_537_float = GetByIndex(var_491_cvector, 1); // 0x864 PushE
	var_538_int = 50; // 0x865 PushI
	var_537_float = var_537_float + var_538_int; // 0x866 Add2
	SetByIndex(var_491_cvector, 1) = var_537_float; // 0x867 PopE
	var_539_bool = 0; var_540_cvector = CVector(0,0,0); var_541_cvector = CVector(0,0,0); var_542_float = 0; var_543_float = 0; var_544_bool = 0; var_545_bool = 0; // 0x868 PushV
	var_540_cvector = var_491_cvector; // 0x869 Mov
	var_541_cvector = var_492_cvector; // 0x86a Mov
	var_542_float = 100; // 0x86b MovI
	var_543_float = 3000; // 0x86c MovI
	var_544_bool = 0; // 0x86d MovB
	var_545_bool = 1; // 0x86e MovB
	func_2239(var_495_bool, var_539_bool, var_540_cvector, var_541_cvector, var_542_float, var_543_float, var_544_bool, var_545_bool); // 0x86f NEW_2
	var_495_bool = var_539_bool; // 0x870 Mov
	var_591_bool = var_495_bool; // 0x872 Push
	if(var_591_bool == 0) goto Label_2168; // 0x873 JumpB
	var_592_int = 0; // 0x874 PushV
	var_592_int = var_490_int; // 0x875 Mov
	func_4984(var_592_int); // 0x876 NEW_2
	
Label_2168:
	var_482_bool = var_495_bool; // 0x878 Mov
	return 12; // 0x879 Return
}


func_4680()
{
	var_137_int = 4; // 0x1249 PushI
	SetReturnValue(var_137_int); // 0x124a ObjFunc
	return 0; // 0x124c Return
}


func_3657(var_0_object)
{
	var_791_object = Obj(); // 0xe49 PushV
	var_791_object = var_0_object; // 0xe4a MovT
	func_4580(var_791_object); // 0xe4b NEW_2
	return 0; // 0xe4d Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_120_object, var_121_object)
{
	var_0_object = var_121_object; // 0x4b TMov
	var_1_object = var_120_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_126_int = 1; // 0x4e PushI
	if(var_126_int == 0) goto Label_162; // 0x4f JumpB
	var_127_bool = 0; var_128_object = Obj(); // 0x50 PushV
	var_128_object = var_1_object; // 0x51 MovT
	func_4706(var_128_object); // 0x52 NEW_2
	if(var_127_bool == 0) goto Label_110; // 0x54 JumpB
	var_135_object = Obj(); var_136_object = Obj(); // 0x55 PushV
	var_135_object = var_1_object; // 0x56 MovT
	var_136_object = var_0_object; // 0x57 MovT
	func_4628(); // 0x58 NEW_2
	var_139_string = ""; // 0x5a PushV
	var_139_string = "Neutral"; // 0x5b MovS
	func_192(var_121_object, var_139_string); // 0x5c NEW_2
	var_156_int = 530322; // 0x5e PushI
	SetMessage(var_156_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_157_int = 530323; // 0x63 PushI
	var_158_int = 31711; // 0x64 PushI
	var_159_int = 31710; // 0x65 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x66 TObjFunc
	var_160_int = 531020; // 0x68 PushI
	var_161_int = 32350; // 0x69 PushI
	var_162_int = 32349; // 0x6a PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x6b TObjFunc
	goto Label_162; // 0x6d Jump
	
Label_162:
	var_163_bool = 0; // 0xa2 PushV
	func_4945(var_163_bool); // 0xa3 NEW_2
	if(var_163_bool == 0) goto Label_177; // 0xa5 JumpB
	
Label_166:
	lshWaitForAnimEnd(); // 0xa6 Func
	var_164_string = var_3_string; // 0xa8 PushT
	if(var_164_string == 0) goto Label_171; // 0xa9 JumpB
	goto Label_176; // 0xaa Jump
	
Label_176:
	goto Label_191; // 0xb0 Jump
	
Label_191:
	return 0; // 0xbf Return
	
Label_171:
	var_165_string = ""; // 0xab PushV
	var_165_string = var_2_object; // 0xac MovT
	func_4409(var_165_string); // 0xad NEW_2
	goto Label_166; // 0xaf Jump
	
Label_177:
	var_176_string = "all"; // 0xb1 PushS
	var_177_string = "idle"; // 0xb2 PushS
	PlayAnimation(var_176_string, var_177_string); // 0xb3 Func
	
Label_181:
	WaitForAnimEnd(); // 0xb5 Func
	var_178_string = var_3_string; // 0xb7 PushT
	if(var_178_string == 0) goto Label_186; // 0xb8 JumpB
	goto Label_191; // 0xb9 Jump
	
Label_186:
	var_179_string = "all"; // 0xba PushS
	var_180_string = "idle"; // 0xbb PushS
	PlayAnimation(var_179_string, var_180_string); // 0xbc Func
	goto Label_181; // 0xbe Jump
	
Label_110:
	var_181_bool = 0; var_182_object = Obj(); // 0x6e PushV
	var_182_object = var_1_object; // 0x6f MovT
	func_4718(var_182_object); // 0x70 NEW_2
	if(var_181_bool == 0) goto Label_130; // 0x72 JumpB
	var_187_string = ""; // 0x73 PushV
	var_187_string = "Neutral"; // 0x74 MovS
	func_192(var_121_object, var_187_string); // 0x75 NEW_2
	var_188_int = 530326; // 0x77 PushI
	SetMessage(var_188_int); // 0x78 TObjFunc
	ClearReplies(); // 0x7a TObjFunc
	var_189_int = 530327; // 0x7c PushI
	var_190_int = -1; // 0x7d PushI
	var_191_int = 31714; // 0x7e PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x7f TObjFunc
	goto Label_162; // 0x81 Jump
	
Label_130:
	var_192_string = ""; // 0x82 PushV
	var_192_string = "Neutral"; // 0x83 MovS
	func_192(var_121_object, var_192_string); // 0x84 NEW_2
	var_193_int = 530270; // 0x86 PushI
	SetMessage(var_193_int); // 0x87 TObjFunc
	ClearReplies(); // 0x89 TObjFunc
	var_194_int = 530271; // 0x8b PushI
	var_195_int = -1; // 0x8c PushI
	var_196_int = 31661; // 0x8d PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x8e TObjFunc
	var_197_int = 530273; // 0x90 PushI
	var_198_int = -1; // 0x91 PushI
	var_199_int = 31663; // 0x92 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x93 TObjFunc
	var_200_int = 530274; // 0x95 PushI
	var_201_int = -1; // 0x96 PushI
	var_202_int = 31664; // 0x97 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x98 TObjFunc
	var_203_int = 530272; // 0x9a PushI
	var_204_int = -1; // 0x9b PushI
	var_205_int = 31662; // 0x9c PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x9d TObjFunc
	goto Label_162; // 0x9f Jump
}


func_4171(var_98_bool)
{
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); // 0x104b PushV
	GetPosition(var_101_cvector); // 0x104c ObjFunc
	var_102_bool = 0; var_103_cvector = CVector(0,0,0); // 0x104e PushV
	var_103_cvector = var_101_cvector; // 0x104f Mov
	func_4161(var_102_bool, var_103_cvector); // 0x1050 NEW_2
	var_98_bool = var_102_bool; // 0x1051 Mov
	return 2; // 0x1053 Return
}


func_4685()
{
	func_4756(); // 0x124f NEW_2
	return 0; // 0x1251 Return
}


func_3662()
{
	var_935_string = ""; // 0xe4e PushV
	var_935_string = "attack_stay"; // 0xe4f MovS
	func_4458(var_935_string); // 0xe50 NEW_2
	return 0; // 0xe52 Return
}


func_5199(var_45_bool)
{
	var_50_object = Obj(); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_float = 0; var_55_object = Obj(); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_float = 0; // 0x144f PushV
	var_60_string = "player"; // 0x1450 PushS
	FindActor(var_55_object, var_60_string); // 0x1451 Func
	var_61_bool = 0; var_62_object = Obj(); // 0x1453 PushV
	var_62_object = var_55_object; // 0x1454 Mov
	func_4137(var_61_bool, var_62_object); // 0x1455 NEW_2
	var_95_bool = var_61_bool == 0; // 0x1457 Not
	if(var_95_bool == 0) goto Label_5211; // 0x1458 JumpB
	var_45_bool = 0; // 0x1459 MovB
	return 10; // 0x145a Return
	
Label_5211:
	GetPosition(var_56_cvector); // 0x145b ObjFunc
	GetPosition(var_57_cvector); // 0x145d ObjFunc
	var_58_cvector = var_56_cvector - var_57_cvector; // 0x145f Sub2
	var_59_float = var_58_cvector | var_58_cvector; // 0x1460 Or2
	var_96_float = 75625.0; // 0x1461 PushF
	var_45_bool = var_59_float < var_96_float; // 0x1462 LT2
	return 10; // 0x1463 Return
}


func_4690()
{
	var_109_object = Obj(); var_110_string = ""; var_111_float = 0; // 0x1253 PushV
	var_112_object = Obj(); // 0x1254 PushV
	func_4810(var_112_object); // 0x1255 NEW_2
	var_109_object = var_112_object; // 0x1256 Mov
	var_110_string = "pt_bonfire1"; // 0x1258 MovS
	var_111_float = 2; // 0x1259 MovI
	func_4827(var_109_object, var_110_string, var_111_float); // 0x125a NEW_2
	var_132_object = Obj(); // 0x125c PushV
	func_4810(var_132_object); // 0x125d NEW_2
	ShowMap(var_132_object); // 0x125f ObjFunc
	return 0; // 0x1261 Return
}


func_3667()
{
	return 0; // 0xe54 Return
}


func_4180(var_59_object)
{
	var_60_bool = 0; var_61_int = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_string = ""; var_67_bool = 0; var_68_int = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_string = ""; // 0x1054 PushV
	var_74_bool = var_59_object == 0; // 0x1055 NullEq
	if(var_74_bool == 0) goto Label_4184; // 0x1056 JumpB
	return 14; // 0x1057 Return
	
Label_4184:
	IsDead(var_67_bool); // 0x1058 Func
	var_75_bool = var_67_bool; // 0x105a Push
	if(var_75_bool == 0) goto Label_4189; // 0x105b JumpB
	return 14; // 0x105c Return
	
Label_4189:
	GetSecondaryAnimationType(var_68_int); // 0x105d Func
	var_76_int = 0; // 0x105f PushI
	var_77_bool = var_68_int < var_76_int; // 0x1060 LT
	if(var_77_bool == 0) goto Label_4195; // 0x1061 JumpB
	return 14; // 0x1062 Return
	
Label_4195:
	GetPosition(var_69_cvector); // 0x1063 ObjFunc
	GetPosition(var_70_cvector); // 0x1065 Func
	GetDirection(var_71_cvector); // 0x1067 Func
	var_72_cvector = var_70_cvector - var_69_cvector; // 0x1069 Sub2
	var_78_float = GetByIndex(var_72_cvector, 0); // 0x106a PushE
	var_79_float = GetByIndex(var_71_cvector, 0); // 0x106b PushE
	var_80_float = var_78_float * var_79_float; // 0x106c Mult
	var_81_float = GetByIndex(var_72_cvector, 2); // 0x106d PushE
	var_82_float = GetByIndex(var_71_cvector, 2); // 0x106e PushE
	var_83_float = var_81_float * var_82_float; // 0x106f Mult
	var_84_int = var_80_float + var_83_float; // 0x1070 Add
	var_85_int = 0; // 0x1071 PushI
	var_86_bool = var_84_int >= var_85_int; // 0x1072 GE
	if(var_86_bool == 0) goto Label_4214; // 0x1073 JumpB
	var_73_string = "fhit"; // 0x1074 MovS
	goto Label_4215; // 0x1075 Jump
	
Label_4215:
	var_87_string = "hit_react"; // 0x1077 PushS
	var_88_string = "1"; // 0x1078 PushS
	var_89_int = var_73_string + var_88_string; // 0x1079 Add
	var_90_string = "2"; // 0x107a PushS
	var_91_int = var_73_string + var_90_string; // 0x107b Add
	var_92_int = -10; // 0x107c PushI
	FadeSecondaryAnimation(var_87_string, var_89_int, var_91_int, var_92_int); // 0x107d Func
	return 14; // 0x107f Return
	
Label_4214:
	var_73_string = "bhit"; // 0x1076 MovS
}


func_3669(var_1172_bool)
{
	var_1172_bool = 1; // 0xe55 MovB
	return 0; // 0xe56 Return
}


func_3671(var_1060_int)
{
	var_1060_int = 1; // 0xe57 MovI
	return 0; // 0xe58 Return
}


func_3673(var_1055_float)
{
	var_1055_float = 0.5; // 0xe59 MovF
	return 0; // 0xe5a Return
}


func_3675(var_3_string, var_798_bool, var_799_object, var_800_float, var_801_float, var_802_bool, var_803_bool)
{
	var_808_bool = 0; var_809_bool = 0; // 0xe5b PushV
	var_3_string = var_799_object; // 0xe5c TMov
	var_810_int = 4; // 0xe5d PushI
	var_811_int = 2; // 0xe5e PushI
	SetTimer(var_810_int, var_811_int); // 0xe5f Func
	var_812_bool = 0; var_813_object = Obj(); var_814_float = 0; var_815_float = 0; var_816_bool = 0; var_817_bool = 0; // 0xe61 PushV
	var_813_object = var_799_object; // 0xe62 Mov
	var_814_float = var_800_float; // 0xe63 Mov
	var_815_float = var_801_float; // 0xe64 Mov
	var_816_bool = var_802_bool; // 0xe65 Mov
	var_817_bool = var_803_bool; // 0xe66 Mov
	func_3716(var_809_bool, var_812_bool, var_813_object, var_814_float, var_815_float, var_816_bool, var_817_bool); // 0xe67 NEW_2
	var_809_bool = var_812_bool; // 0xe68 Mov
	var_886_int = 4; // 0xe6a PushI
	KillTimer(var_886_int); // 0xe6b Func
	var_798_bool = var_809_bool; // 0xe6d Mov
	return 2; // 0xe6e Return
}


func_4706(var_127_bool)
{
	var_129_int = 0; var_130_string = ""; // 0x1263 PushV
	var_130_string = "oob9BoyFollower1"; // 0x1264 MovS
	func_4541(var_129_int, var_130_string); // 0x1265 NEW_2
	var_133_int = 0; // 0x1267 PushI
	var_134_bool = var_129_int == var_133_int; // 0x1268 Eq
	if(var_134_bool == 0) goto Label_4716; // 0x1269 JumpB
	var_127_bool = 1; // 0x126a MovB
	return 0; // 0x126b Return
	
Label_4716:
	var_127_bool = 0; // 0x126c MovB
	return 0; // 0x126d Return
}


func_4718(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x126f PushV
	var_184_string = "b9q03BonefiresCount"; // 0x1270 MovS
	func_4541(var_183_int, var_184_string); // 0x1271 NEW_2
	var_185_int = 4; // 0x1273 PushI
	var_186_bool = var_183_int == var_185_int; // 0x1274 Eq
	if(var_186_bool == 0) goto Label_4728; // 0x1275 JumpB
	var_181_bool = 1; // 0x1276 MovB
	return 0; // 0x1277 Return
	
Label_4728:
	var_181_bool = 0; // 0x1278 MovB
	return 0; // 0x1279 Return
}


func_4730()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x127a PushV
	var_45_int = 543; // 0x127b PushI
	var_46_int = 2; // 0x127c PushI
	var_47_int = 530355; // 0x127d PushI
	CreateDiaryEntry(var_44_object, var_45_int, var_46_int, var_47_int); // 0x127e Func
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0; // 0x1280 PushV
	var_49_object = var_44_object; // 0x1281 Mov
	var_50_int = 532; // 0x1282 MovI
	func_4782(var_48_bool, var_49_object, var_50_int); // 0x1283 NEW_2
	return 2; // 0x1285 Return
}


func_4224(var_46_object, var_47_int, var_48_float)
{
	var_49_cvector = CVector(0,0,0); var_50_object = Obj(); var_51_int = 0; var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_int = 0; var_56_int = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_object = Obj(); var_60_int = 0; var_61_bool = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_int = 0; var_65_int = 0; var_66_cvector = CVector(0,0,0); // 0x1080 PushV
	var_67_bool = 0; // 0x1081 PushV
	var_67_bool = 0; // 0x1082 MovB
	var_68_bool = 0; // 0x1083 PushV
	var_68_bool = 0; // 0x1084 MovB
	var_69_object = var_46_object; // 0x1085 Push
	if(var_69_object == 0) goto Label_4235; // 0x1086 JumpB
	var_70_int = 4; // 0x1087 PushI
	var_71_bool = var_47_int != var_70_int; // 0x1088 Neq
	if(var_71_bool == 0) goto Label_4235; // 0x1089 JumpB
	var_68_bool = 1; // 0x108a MovB
	
Label_4235:
	if(var_68_bool == 0) goto Label_4240; // 0x108b JumpB
	var_72_int = 5; // 0x108c PushI
	var_73_bool = var_47_int != var_72_int; // 0x108d Neq
	if(var_73_bool == 0) goto Label_4240; // 0x108e JumpB
	var_67_bool = 1; // 0x108f MovB
	
Label_4240:
	if(var_67_bool == 0) goto Label_4287; // 0x1090 JumpB
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0x1091 PushV
	var_76_cvector = CVector(0,0,0); var_77_object = Obj(); // 0x1092 PushV
	var_77_object = var_46_object; // 0x1093 Mov
	func_3991(var_77_object); // 0x1094 NEW_2
	var_75_cvector = var_76_cvector; // 0x1095 Mov
	func_4505(var_74_cvector, var_75_cvector); // 0x1097 NEW_2
	var_58_cvector = var_74_cvector; // 0x1098 Mov
	CreateVectorVector(var_59_object); // 0x109a Func
	var_60_int = 1; // 0x109c MovI
	
Label_4253:
	var_87_string = "hit"; // 0x109d PushS
	var_88_int = var_87_string + var_60_int; // 0x109e Add
	GetGeometryLocator(var_88_int, var_61_bool, var_62_cvector, var_63_cvector); // 0x109f Func
	var_89_bool = var_61_bool == 0; // 0x10a1 Not
	if(var_89_bool == 0) goto Label_4260; // 0x10a2 JumpB
	goto Label_4269; // 0x10a3 Jump
	
Label_4269:
	size(var_64_int); // 0x10ad ObjFunc
	var_90_int = var_64_int; // 0x10af Push
	if(var_90_int == 0) goto Label_4286; // 0x10b0 JumpB
	irand(var_65_int, var_64_int); // 0x10b1 Func
	get(var_66_cvector, var_65_int); // 0x10b3 ObjFunc
	var_91_object = Obj(); var_92_int = 0; var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); // 0x10b5 PushV
	var_91_object = var_46_object; // 0x10b6 Mov
	var_92_int = var_47_int; // 0x10b7 Mov
	var_93_float = var_48_float; // 0x10b8 Mov
	var_94_cvector = var_66_cvector; // 0x10b9 Mov
	var_95_cvector = -var_58_cvector; // 0x10ba Neg2
	func_4292(var_93_float, var_94_cvector, var_95_cvector); // 0x10bb NEW_2
	return 18; // 0x10bd Return
	
Label_4286:
	var_59_object = 0; // 0x10be SetNull
	
Label_4287:
	var_136_object = Obj(); // 0x10bf PushV
	var_136_object = var_46_object; // 0x10c0 Mov
	func_4180(var_136_object); // 0x10c1 NEW_2
	return 18; // 0x10c3 Return
	
Label_4260:
	var_137_int = var_63_cvector | var_58_cvector; // 0x10a4 Or
	var_138_float = 0.70711; // 0x10a5 PushF
	var_139_bool = var_137_int >= var_138_float; // 0x10a6 GE
	if(var_139_bool == 0) goto Label_4266; // 0x10a7 JumpB
	add(var_62_cvector); // 0x10a8 ObjFunc
	
Label_4266:
	var_140_int = 1; // 0x10aa PushI
	var_60_int = var_60_int + var_140_int; // 0x10ab Add2
	goto Label_4253; // 0x10ac Jump
}


func_1665(var_0_object, var_1_object, var_2_object, var_75_int)
{
	var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_float = 0; // 0x681 PushV
	var_84_int = 120; // 0x682 PushI
	var_85_bool = var_75_int != var_84_int; // 0x683 Neq
	if(var_85_bool == 0) goto Label_1670; // 0x684 JumpB
	return 8; // 0x685 Return
	
Label_1670:
	var_86_bool = var_0_object == 0; // 0x686 NullEq
	if(var_86_bool == 0) goto Label_1679; // 0x687 JumpB
	Stop(); // 0x688 Func
	var_87_int = 1; // 0x68a PushI
	KillTimer(var_87_int); // 0x68b Func
	var_2_object = 1; // 0x68d TMovB
	goto Label_1716; // 0x68e Jump
	
Label_1716:
	return 8; // 0x6b4 Return
	
Label_1679:
	GetDirection(var_80_cvector); // 0x68f Func
	var_88_float = 7000.0; // 0x691 PushF
	FindDirLength(var_81_float, var_80_cvector, var_88_float); // 0x692 Func
	var_89_cvector = CVector(0,0,0); var_90_float = 0; // 0x694 PushV
	var_90_float = 1.74533; // 0x695 MovF
	func_1562(var_89_cvector, var_90_float); // 0x696 NEW_2
	var_82_cvector = var_89_cvector; // 0x697 Mov
	var_83_float = var_82_cvector | var_82_cvector; // 0x699 Or2
	var_119_bool = 0; // 0x69a PushV
	var_119_bool = 0; // 0x69b MovB
	var_120_float = 2500.0; // 0x69c PushF
	var_121_bool = var_83_float >= var_120_float; // 0x69d GE
	if(var_121_bool == 0) goto Label_1709; // 0x69e JumpB
	var_122_bool = 0; // 0x69f PushV
	var_122_bool = 1; // 0x6a0 MovB
	var_123_float = var_81_float * var_81_float; // 0x6a1 Mult
	var_124_float = 2.25; // 0x6a2 PushF
	var_125_float = var_123_float * var_124_float; // 0x6a3 Mult
	var_126_bool = var_83_float >= var_125_float; // 0x6a4 GE
	if(var_126_bool == 0) goto Label_1707; // 0x6a5 JumpB
	var_127_bool = 0; // 0x6a6 PushV
	func_1733(var_122_bool, var_127_bool); // 0x6a7 NEW_2
	if(var_127_bool == 0) goto Label_1707; // 0x6a9 JumpB
	var_122_bool = 0; // 0x6aa MovB
	
Label_1707:
	if(var_122_bool == 0) goto Label_1709; // 0x6ab JumpB
	var_119_bool = 1; // 0x6ac MovB
	
Label_1709:
	if(var_119_bool == 0) goto Label_1716; // 0x6ad JumpB
	Stop(); // 0x6ae Func
	var_147_cvector = CVector(0,0,0); // 0x6b0 PushV
	func_3986(var_147_cvector); // 0x6b1 NEW_2
	var_1_object = var_147_cvector + var_82_cvector; // 0x6b3 Add2
}


func_3716(var_2_object, var_812_bool, var_813_object, var_814_float, var_815_float, var_816_bool, var_817_bool)
{
	var_818_bool = 0; var_819_bool = 0; var_820_bool = 0; var_821_bool = 0; // 0xe84 PushV
	var_822_object = Obj(); // 0xe85 PushV
	var_822_object = var_813_object; // 0xe86 Mov
	func_4580(var_822_object); // 0xe87 NEW_2
	var_823_int = 1; // 0xe89 PushI
	var_824_int = 5; // 0xe8a PushI
	SetTimer(var_823_int, var_824_int); // 0xe8b Func
	CanSee(var_820_bool, var_813_object); // 0xe8d Func
	var_825_bool = var_820_bool; // 0xe8f Push
	if(var_825_bool == 0) goto Label_3735; // 0xe90 JumpB
	var_2_object = 1; // 0xe91 TMovB
	var_826_object = Obj(); // 0xe92 PushV
	var_826_object = var_813_object; // 0xe93 Mov
	func_4440(var_826_object); // 0xe94 NEW_2
	goto Label_3736; // 0xe96 Jump
	
Label_3736:
	var_827_bool = 0; var_828_object = Obj(); // 0xe98 PushV
	var_828_object = var_813_object; // 0xe99 Mov
	func_4006(var_827_bool, var_828_object); // 0xe9a NEW_2
	if(var_827_bool == 0) goto Label_3746; // 0xe9c JumpB
	var_831_object = Obj(); // 0xe9d PushV
	func_4499(var_831_object); // 0xe9e NEW_2
	SendPlayerEnemy(var_813_object, var_831_object); // 0xea0 Func
	
Label_3746:
	var_832_bool = 0; var_833_object = Obj(); var_834_float = 0; var_835_float = 0; var_836_bool = 0; var_837_bool = 0; // 0xea2 PushV
	var_833_object = var_813_object; // 0xea3 Mov
	var_834_float = var_814_float; // 0xea4 Mov
	var_835_float = var_815_float; // 0xea5 Mov
	var_836_bool = var_816_bool; // 0xea6 Mov
	var_837_bool = var_817_bool; // 0xea7 Mov
	func_3821(var_820_bool, var_821_bool, var_832_bool, var_833_object, var_834_float, var_835_float, var_836_bool, var_837_bool); // 0xea8 NEW_2
	var_821_bool = var_832_bool; // 0xea9 Mov
	var_883_object = var_2_object; // 0xeab PushT
	if(var_883_object == 0) goto Label_3760; // 0xeac JumpB
	var_884_string = "head"; // 0xead PushS
	UnlookAsync(var_884_string); // 0xeae Func
	
Label_3760:
	var_885_int = 1; // 0xeb0 PushI
	KillTimer(var_885_int); // 0xeb1 Func
	var_812_bool = var_821_bool; // 0xeb3 Mov
	return 4; // 0xeb4 Return
	
Label_3735:
	var_2_object = 0; // 0xe97 TMovB
}


func_4743()
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x1287 PushV
	var_86_int = 534; // 0x1288 PushI
	var_87_int = 2; // 0x1289 PushI
	var_88_int = 530346; // 0x128a PushI
	CreateDiaryEntry(var_85_object, var_86_int, var_87_int, var_88_int); // 0x128b Func
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0; // 0x128d PushV
	var_90_object = var_85_object; // 0x128e Mov
	var_91_int = 532; // 0x128f MovI
	func_4782(var_89_bool, var_90_object, var_91_int); // 0x1290 NEW_2
	return 2; // 0x1292 Return
}


func_2696(var_0_object)
{
	var_0_object = 1; // 0xa88 TMovB
	var_43_int = 0; // 0xa89 PushI
	KillTimer(var_43_int); // 0xa8a Func
	Stop(); // 0xa8c Func
	return 0; // 0xa8e Return
}


func_3215(var_4_bool)
{
	Stop(); // 0xc8f Func
	StopAnimation(); // 0xc91 Func
	StopGroup0(); // 0xc93 Func
	var_4_bool = 1; // 0xc95 TMovB
	return 0; // 0xc96 Return
}


func_4756()
{
	var_140_object = Obj(); var_141_object = Obj(); // 0x1294 PushV
	var_142_int = 535; // 0x1295 PushI
	var_143_int = 2; // 0x1296 PushI
	var_144_int = 530347; // 0x1297 PushI
	CreateDiaryEntry(var_141_object, var_142_int, var_143_int, var_144_int); // 0x1298 Func
	var_145_bool = 0; var_146_object = Obj(); var_147_int = 0; // 0x129a PushV
	var_146_object = var_141_object; // 0x129b Mov
	var_147_int = 532; // 0x129c MovI
	func_4782(var_145_bool, var_146_object, var_147_int); // 0x129d NEW_2
	return 2; // 0x129f Return
}


func_3223(var_1_object, var_2_object, var_5_object)
{
	var_753_bool = 0; var_754_bool = 0; var_755_cvector = CVector(0,0,0); var_756_bool = 0; var_757_bool = 0; var_758_cvector = CVector(0,0,0); // 0xc97 PushV
	var_1_object = 0; // 0xc98 TMovI
	
Label_3225:
	var_759_string = "all"; // 0xc99 PushS
	var_760_string = "attack_begin"; // 0xc9a PushS
	var_761_int = 1; // 0xc9b PushI
	var_762_int = var_1_object + var_761_int; // 0xc9c Add
	var_763_int = var_760_string + var_762_int; // 0xc9d Add
	HasAnimation(var_756_bool, var_759_string, var_763_int); // 0xc9e Func
	var_764_bool = var_756_bool == 0; // 0xca0 Not
	if(var_764_bool == 0) goto Label_3235; // 0xca1 JumpB
	goto Label_3238; // 0xca2 Jump
	
Label_3238:
	var_2_object = 0; // 0xca6 TMovI
	
Label_3239:
	var_765_string = "attack"; // 0xca7 PushS
	var_766_int = 1; // 0xca8 PushI
	var_767_int = var_2_object + var_766_int; // 0xca9 Add
	var_768_int = var_765_string + var_767_int; // 0xcaa Add
	IsExisting3DSound(var_757_bool, var_768_int); // 0xcab Func
	var_769_bool = var_757_bool == 0; // 0xcad Not
	if(var_769_bool == 0) goto Label_3248; // 0xcae JumpB
	goto Label_3251; // 0xcaf Jump
	
Label_3251:
	var_770_string = "all"; // 0xcb3 PushS
	var_771_string = "bjump"; // 0xcb4 PushS
	GetAnimationOffset(var_758_cvector, var_770_string, var_771_string); // 0xcb5 Func
	var_772_float = GetByIndex(var_758_cvector, 2); // 0xcb7 PushE
	var_5_object = -var_772_float; // 0xcb8 Neg2
	return 6; // 0xcb9 Return
	
Label_3248:
	var_773_int = 1; // 0xcb0 PushI
	var_2_object = var_2_object + var_773_int; // 0xcb1 Add2
	goto Label_3239; // 0xcb2 Jump
	
Label_3235:
	var_774_int = 1; // 0xca3 PushI
	var_1_object = var_1_object + var_774_int; // 0xca4 Add2
	goto Label_3225; // 0xca5 Jump
}


func_2712(var_248_bool, var_249_object)
{
	var_250_bool = 0; var_251_object = Obj(); // 0xa99 PushV
	var_251_object = var_249_object; // 0xa9a Mov
	func_4137(var_250_bool, var_251_object); // 0xa9b NEW_2
	var_248_bool = var_250_bool; // 0xa9c Mov
	return 0; // 0xa9e Return
}


func_670()
{
	var_94_object = Obj(); var_95_object = Obj(); // 0x29e PushV
	var_96_string = "player"; // 0x29f PushS
	FindActor(var_95_object, var_96_string); // 0x2a0 Func
	var_97_bool = var_95_object == 0; // 0x2a2 Not
	if(var_97_bool == 0) goto Label_677; // 0x2a3 JumpB
	return 2; // 0x2a4 Return
	
Label_677:
	var_98_bool = 0; var_99_object = Obj(); // 0x2a5 PushV
	var_99_object = var_95_object; // 0x2a6 Mov
	func_4171(var_99_object); // 0x2a7 NEW_2
	return 2; // 0x2a9 Return
}


func_2719(var_266_string)
{
	var_266_string = "walk"; // 0xa9f MovS
	return 0; // 0xaa0 Return
}


func_2721(var_267_string)
{
	var_267_string = "run"; // 0xaa1 MovS
	return 0; // 0xaa2 Return
}


func_4769(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x12a1 PushV
	GetDiaryRoot(var_59_object); // 0x12a2 Func
	var_60_bool = var_59_object == 0; // 0x12a4 Not
	if(var_60_bool == 0) goto Label_4779; // 0x12a5 JumpB
	var_61_string = "Can't retrieve diary root"; // 0x12a6 PushS
	Trace(var_61_string); // 0x12a7 Func
	var_57_object = 0; // 0x12a9 MovB
	return 2; // 0x12aa Return
	
Label_4779:
	var_57_object = var_59_object; // 0x12ab Mov
	return 2; // 0x12ac Return
}


func_2723(var_72_object)
{
	func_4913(); // 0xaa5 NEW_2
	var_93_object = Obj(); // 0xaa7 PushV
	var_93_object = var_72_object; // 0xaa8 Mov
	func_2740(var_93_object); // 0xaa9 NEW_2
	return 0; // 0xaab Return
}


func_4782(var_48_bool, var_49_object, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; // 0x12ae PushV
	var_57_object = Obj(); // 0x12af PushV
	func_4769(var_57_object); // 0x12b0 NEW_2
	var_54_object = var_57_object; // 0x12b1 Mov
	Find(var_50_int, var_55_object); // 0x12b3 ObjFunc
	var_62_bool = var_55_object == 0; // 0x12b5 Not
	if(var_62_bool == 0) goto Label_4797; // 0x12b6 JumpB
	var_63_string = "Can't find diary parent with id: "; // 0x12b7 PushS
	var_64_int = var_63_string + var_50_int; // 0x12b8 Add
	Trace(var_64_int); // 0x12b9 Func
	var_48_bool = 0; // 0x12bb MovB
	return 6; // 0x12bc Return
	
Label_4797:
	AddChild(var_49_object); // 0x12bd ObjFunc
	var_65_int = 7; // 0x12bf PushI
	SendWorldWndMessage(var_65_int); // 0x12c0 Func
	GetCategory(var_56_int); // 0x12c2 ObjFunc
	SetDiarySection(var_56_int); // 0x12c4 Func
	var_48_bool = 0; // 0x12c6 MovB
	return 6; // 0x12c7 Return
}


func_2740(var_93_object)
{
	EventDisable(0); // 0xab5 EventDisable
	var_94_object = Obj(); // 0xab6 PushV
	var_94_object = var_93_object; // 0xab7 Mov
	func_2765(var_94_object); // 0xab8 NEW_2
	var_174_int = 50; // 0xaba PushI
	var_175_int = 40; // 0xabb PushI
	SetRTEnvelope(var_174_int, var_175_int); // 0xabc Func
	EventEnable(0); // 0xabe EventEnable
	
Label_2751:
	Hold(); // 0xabf Func
	goto Label_2751; // 0xac1 Jump
}


func_1717(var_2_object)
{
	Stop(); // 0x6b5 Func
	var_43_int = 120; // 0x6b7 PushI
	KillTimer(var_43_int); // 0x6b8 Func
	var_2_object = 1; // 0x6ba TMovB
	return 0; // 0x6bb Return
}


func_3765(var_1_object, var_47_int)
{
	var_48_int = 1; // 0xeb6 PushI
	var_49_bool = var_47_int == var_48_int; // 0xeb7 Eq
	if(var_49_bool == 0) goto Label_3774; // 0xeb8 JumpB
	var_50_object = Obj(); // 0xeb9 PushV
	var_50_object = var_1_object; // 0xeba MovT
	func_4580(var_50_object); // 0xebb NEW_2
	goto Label_3778; // 0xebd Jump
	
Label_3778:
	return 0; // 0xec2 Return
	
Label_3774:
	var_55_int = 0; // 0xebe PushV
	var_55_int = var_47_int; // 0xebf Mov
	func_3923(var_44_object, var_47_int, var_55_int); // 0xec0 NEW_2
}


func_1210(var_2_object)
{
	Stop(); // 0x4ba Func
	var_43_int = 120; // 0x4bc PushI
	KillTimer(var_43_int); // 0x4bd Func
	var_2_object = 1; // 0x4bf TMovB
	return 0; // 0x4c0 Return
}


func_3258(var_0_object, var_1066_float, var_1067_int)
{
	var_1068_object = Obj(); var_1069_float = 0; var_1070_float = 0; var_1071_object = Obj(); var_1072_float = 0; var_1073_float = 0; // 0xcba PushV
	var_1074_float = 0.9; // 0xcbb PushF
	var_1075_float = var_1066_float * var_1074_float; // 0xcbc Mult
	GetVictim(var_1075_float, var_1071_object); // 0xcbd Func
	ReportAttack(var_0_object); // 0xcbf Func
	var_1076_bool = var_1071_object == var_0_object; // 0xcc1 Eq
	if(var_1076_bool == 0) goto Label_3295; // 0xcc2 JumpB
	var_1077_float = 0; var_1078_object = Obj(); var_1079_int = 0; // 0xcc3 PushV
	var_1078_object = var_1071_object; // 0xcc4 Mov
	var_1079_int = var_1067_int; // 0xcc5 Mov
	func_2939(var_1079_int); // 0xcc6 NEW_2
	var_1072_float = var_1077_float; // 0xcc7 Mov
	var_1080_float = 0; var_1081_object = Obj(); var_1082_float = 0; var_1083_int = 0; // 0xcc9 PushV
	var_1081_object = var_1071_object; // 0xcca Mov
	var_1082_float = var_1072_float; // 0xccb Mov
	var_1084_int = 0; var_1085_object = Obj(); var_1086_int = 0; // 0xccc PushV
	var_1085_object = var_1071_object; // 0xccd Mov
	var_1086_int = var_1067_int; // 0xcce Mov
	func_2942(var_1086_int); // 0xccf NEW_2
	var_1083_int = var_1084_int; // 0xcd0 Mov
	func_4023(var_1080_float, var_1081_object, var_1082_float, var_1083_int); // 0xcd2 NEW_2
	var_1073_float = var_1080_float; // 0xcd3 Mov
	var_1145_int = 0; // 0xcd5 PushV
	func_2945(var_1145_int); // 0xcd6 NEW_2
	ReportHit(var_0_object, var_1145_int, var_1073_float, var_1072_float); // 0xcd8 Func
	var_1146_object = Obj(); var_1147_float = 0; // 0xcda PushV
	var_1146_object = var_1071_object; // 0xcdb Mov
	var_1147_float = var_1073_float; // 0xcdc Mov
	func_3667(); // 0xcdd NEW_2
	
Label_3295:
	return 6; // 0xcdf Return
}


func_2237(var_562_bool)
{
	var_562_bool = 1; // 0x8bd MovB
	return 0; // 0x8be Return
}


func_2239(var_0_object, var_539_bool, var_540_cvector, var_541_cvector, var_542_float, var_543_float, var_544_bool, var_545_bool)
{
	var_546_bool = 0; var_547_bool = 0; var_548_object = Obj(); var_549_cvector = CVector(0,0,0); var_550_cvector = CVector(0,0,0); var_551_cvector = CVector(0,0,0); var_552_float = 0; var_553_object = Obj(); var_554_bool = 0; var_555_bool = 0; var_556_object = Obj(); var_557_cvector = CVector(0,0,0); var_558_cvector = CVector(0,0,0); var_559_cvector = CVector(0,0,0); var_560_float = 0; var_561_object = Obj(); // 0x8bf PushV
	var_0_object = 0; // 0x8c0 TMovB
	var_555_bool = var_545_bool; // 0x8c1 Mov
	
Label_2242:
	var_562_bool = 0; // 0x8c2 PushV
	func_2237(var_562_bool); // 0x8c3 NEW_2
	var_563_bool = var_562_bool == 0; // 0x8c5 Not
	if(var_563_bool == 0) goto Label_2249; // 0x8c6 JumpB
	var_539_bool = 0; // 0x8c7 MovB
	return 16; // 0x8c8 Return
	
Label_2249:
	var_557_cvector = var_540_cvector; // 0x8c9 Mov
	GetPosition(var_558_cvector); // 0x8ca Func
	var_559_cvector = var_557_cvector - var_558_cvector; // 0x8cc Sub2
	var_560_float = var_559_cvector | var_559_cvector; // 0x8cd Or2
	var_564_bool = 0; // 0x8ce PushV
	var_564_bool = 0; // 0x8cf MovB
	var_565_int = 0; // 0x8d0 PushI
	var_566_bool = var_543_float > var_565_int; // 0x8d1 GT
	if(var_566_bool == 0) goto Label_2263; // 0x8d2 JumpB
	var_567_float = var_543_float * var_543_float; // 0x8d3 Mult
	var_568_bool = var_560_float > var_567_float; // 0x8d4 GT
	if(var_568_bool == 0) goto Label_2263; // 0x8d5 JumpB
	var_564_bool = 1; // 0x8d6 MovB
	
Label_2263:
	if(var_564_bool == 0) goto Label_2268; // 0x8d7 JumpB
	Stop(); // 0x8d8 Func
	var_539_bool = 0; // 0x8da MovB
	return 16; // 0x8db Return
	
Label_2268:
	var_569_float = var_542_float * var_542_float; // 0x8dc Mult
	var_570_bool = var_560_float > var_569_float; // 0x8dd GT
	if(var_570_bool == 0) goto Label_2328; // 0x8de JumpB
	FindPathTo(var_561_object, var_557_cvector); // 0x8df Func
	var_571_bool = var_561_object != 0; // 0x8e1 NullNeq
	if(var_571_bool == 0) goto Label_2277; // 0x8e2 JumpB
	var_556_object = var_561_object; // 0x8e3 Mov
	var_561_object = 0; // 0x8e4 SetNull
	
Label_2277:
	var_572_bool = var_556_object != 0; // 0x8e5 NullNeq
	if(var_572_bool == 0) goto Label_2310; // 0x8e6 JumpB
	var_573_bool = var_555_bool; // 0x8e7 Push
	if(var_573_bool == 0) goto Label_2287; // 0x8e8 JumpB
	var_555_bool = 0; // 0x8e9 MovB
	RotatePath(var_556_object, var_554_bool); // 0x8ea Func
	var_574_bool = var_554_bool == 0; // 0x8ec Not
	if(var_574_bool == 0) goto Label_2287; // 0x8ed JumpB
	goto Label_2334; // 0x8ee Jump
	
Label_2334:
	var_575_bool = var_0_object == 0; // 0x91e Not
	if(var_575_bool == 0) goto Label_2340; // 0x91f JumpB
	var_576_float = GetByIndex(var_541_cvector, 0); // 0x920 PushE
	var_577_float = GetByIndex(var_541_cvector, 2); // 0x921 PushE
	RotateAsync(var_576_float, var_577_float); // 0x922 Func
	
Label_2340:
	var_539_bool = !var_0_object; // 0x924 Not2
	return 16; // 0x925 Return
	
Label_2287:
	var_578_int = 0; // 0x8ef PushI
	var_579_float = 0.3; // 0x8f0 PushF
	SetTimer(var_578_int, var_579_float); // 0x8f1 Func
	var_580_string = ""; // 0x8f3 PushV
	func_2379(var_580_string); // 0x8f4 NEW_2
	var_581_string = ""; // 0x8f6 PushV
	func_2381(var_581_string); // 0x8f7 NEW_2
	FollowPath(var_556_object, var_544_bool, var_554_bool, var_580_string, var_581_string); // 0x8f9 Func
	var_582_bool = var_554_bool == 0; // 0x8fb Not
	if(var_582_bool == 0) goto Label_2308; // 0x8fc JumpB
	var_583_object = var_0_object; // 0x8fd PushT
	if(var_583_object == 0) goto Label_2306; // 0x8fe JumpB
	var_556_object = 0; // 0x8ff SetNull
	goto Label_2334; // 0x900 Jump
	
Label_2306:
	goto Label_2333; // 0x902 Jump
	
Label_2333:
	goto Label_2242; // 0x91d Jump
	
Label_2308:
	var_556_object = 0; // 0x904 SetNull
	goto Label_2326; // 0x905 Jump
	
Label_2326:
	var_561_object = 0; // 0x916 SetNull
	goto Label_2332; // 0x917 Jump
	
Label_2332:
	var_556_object = 0; // 0x91c SetNull
	
Label_2310:
	var_584_int = 0; // 0x906 PushI
	KillTimer(var_584_int); // 0x907 Func
	var_585_float = 0.5; // 0x909 PushF
	Sleep(var_585_float, var_554_bool); // 0x90a Func
	var_586_bool = var_554_bool == 0; // 0x90c Not
	if(var_586_bool == 0) goto Label_2322; // 0x90d JumpB
	var_587_object = var_0_object; // 0x90e PushT
	if(var_587_object == 0) goto Label_2322; // 0x90f JumpB
	var_556_object = 0; // 0x910 SetNull
	goto Label_2334; // 0x911 Jump
	
Label_2322:
	var_588_int = 0; // 0x912 PushI
	var_589_float = 0.3; // 0x913 PushF
	SetTimer(var_588_int, var_589_float); // 0x914 Func
	
Label_2328:
	var_590_int = 0; // 0x918 PushI
	KillTimer(var_590_int); // 0x919 Func
	goto Label_2334; // 0x91b Jump
}


func_192(var_2_object, var_139_string)
{
	var_140_bool = 0; // 0xc1 PushV
	func_4945(var_140_bool); // 0xc2 NEW_2
	var_141_bool = var_140_bool == 0; // 0xc4 Not
	if(var_141_bool == 0) goto Label_199; // 0xc5 JumpB
	return 0; // 0xc6 Return
	
Label_199:
	var_142_bool = var_139_string == var_2_object; // 0xc7 Eq
	if(var_142_bool == 0) goto Label_202; // 0xc8 JumpB
	return 0; // 0xc9 Return
	
Label_202:
	var_143_string = ""; var_144_bool = 0; // 0xca PushV
	var_143_string = var_139_string; // 0xcb Mov
	var_145_string = ""; // 0xcc PushS
	var_146_bool = var_139_string == var_145_string; // 0xcd Eq
	if(var_146_bool == 0) goto Label_209; // 0xce JumpB
	var_144_bool = 0; // 0xcf MovB
	goto Label_210; // 0xd0 Jump
	
Label_210:
	func_4425(var_143_string, var_144_bool); // 0xd2 NEW_2
	var_2_object = var_139_string; // 0xd4 TMov
	return 0; // 0xd5 Return
	
Label_209:
	var_144_bool = 1; // 0xd1 MovB
}


func_3779(var_2_object)
{
	var_43_int = 1; // 0xec3 PushI
	KillTimer(var_43_int); // 0xec4 Func
	var_44_object = var_2_object; // 0xec6 PushT
	if(var_44_object == 0) goto Label_3788; // 0xec7 JumpB
	var_2_object = 0; // 0xec8 TMovB
	var_45_string = "head"; // 0xec9 PushS
	UnlookAsync(var_45_string); // 0xeca Func
	
Label_3788:
	func_3945(var_42_object); // 0xecd NEW_2
	return 0; // 0xecf Return
}


func_4292(var_48_object, var_51_cvector, var_52_cvector)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); // 0x10c4 PushV
	GetScene(var_55_object); // 0x10c5 Func
	var_57_string = "scripted"; // 0x10c7 PushS
	var_58_string = "blood_dir.xml"; // 0x10c8 PushS
	AddActorByType(var_56_object, var_57_string, var_55_object, var_51_cvector, var_52_cvector, var_58_string); // 0x10c9 Func
	var_59_object = Obj(); // 0x10cb PushV
	var_59_object = var_48_object; // 0x10cc Mov
	func_4180(var_59_object); // 0x10cd NEW_2
	return 4; // 0x10cf Return
}


func_1733(var_0_object, var_127_bool)
{
	var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); // 0x6c5 PushV
	GetDirection(var_130_cvector); // 0x6c6 Func
	var_132_cvector = CVector(0,0,0); var_133_object = Obj(); // 0x6c8 PushV
	var_133_object = var_0_object; // 0x6c9 MovT
	func_3991(var_133_object); // 0x6ca NEW_2
	var_131_cvector = var_132_cvector; // 0x6cb Mov
	var_138_float = 0; var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); // 0x6cd PushV
	var_139_cvector = var_130_cvector; // 0x6ce Mov
	var_140_cvector = var_131_cvector; // 0x6cf Mov
	func_4533(var_138_float, var_139_cvector, var_140_cvector); // 0x6d0 NEW_2
	var_146_float = -0.34202; // 0x6d2 PushF
	var_127_bool = var_138_float >= var_146_float; // 0x6d3 GE2
	return 4; // 0x6d4 Return
}


func_1226(var_0_object, var_94_bool)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0x4ca PushV
	GetDirection(var_97_cvector); // 0x4cb Func
	var_99_cvector = CVector(0,0,0); var_100_object = Obj(); // 0x4cd PushV
	var_100_object = var_0_object; // 0x4ce MovT
	func_3991(var_100_object); // 0x4cf NEW_2
	var_98_cvector = var_99_cvector; // 0x4d0 Mov
	var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); // 0x4d2 PushV
	var_106_cvector = var_97_cvector; // 0x4d3 Mov
	var_107_cvector = var_98_cvector; // 0x4d4 Mov
	func_4533(var_105_float, var_106_cvector, var_107_cvector); // 0x4d5 NEW_2
	var_113_float = -0.34202; // 0x4d7 PushF
	var_94_bool = var_105_float >= var_113_float; // 0x4d8 GE2
	return 4; // 0x4d9 Return
}


func_4810(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj(); // 0x12ca PushV
	GetMainOutdoorScene(var_58_object); // 0x12cb Func
	var_60_bool = var_58_object == 0; // 0x12cd NullEq
	if(var_60_bool == 0) goto Label_4821; // 0x12ce JumpB
	var_61_string = "Can't find main outdoor scene"; // 0x12cf PushS
	Trace(var_61_string); // 0x12d0 Func
	var_59_object = 0; // 0x12d2 SetNull
	var_55_object = var_59_object; // 0x12d3 Mov
	return 4; // 0x12d4 Return
	
Label_4821:
	GetMap(var_59_object); // 0x12d5 ObjFunc
	var_55_object = var_59_object; // 0x12d7 Mov
	return 4; // 0x12d8 Return
}


func_2765(var_94_object)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_string = ""; var_100_object = Obj(); var_101_bool = 0; var_102_bool = 0; var_103_float = 0; var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_string = ""; var_110_object = Obj(); var_111_bool = 0; var_112_bool = 0; var_113_float = 0; var_114_cvector = CVector(0,0,0); // 0xacd PushV
	var_115_bool = var_94_object == 0; // 0xace NullEq
	if(var_115_bool == 0) goto Label_2773; // 0xacf JumpB
	var_116_string = ""; // 0xad0 PushV
	var_116_string = "fdie"; // 0xad1 MovS
	func_2856(var_116_string); // 0xad2 NEW_2
	goto Label_2855; // 0xad4 Jump
	
Label_2855:
	return 20; // 0xb27 Return
	
Label_2773:
	GetPosition(var_105_cvector); // 0xad5 ObjFunc
	GetPosition(var_106_cvector); // 0xad7 Func
	GetDirection(var_107_cvector); // 0xad9 Func
	var_108_cvector = var_106_cvector - var_105_cvector; // 0xadb Sub2
	var_148_float = GetByIndex(var_108_cvector, 0); // 0xadc PushE
	var_149_float = GetByIndex(var_107_cvector, 0); // 0xadd PushE
	var_150_float = var_148_float * var_149_float; // 0xade Mult
	var_151_float = GetByIndex(var_108_cvector, 2); // 0xadf PushE
	var_152_float = GetByIndex(var_107_cvector, 2); // 0xae0 PushE
	var_153_float = var_151_float * var_152_float; // 0xae1 Mult
	var_154_int = var_150_float + var_153_float; // 0xae2 Add
	var_155_int = 0; // 0xae3 PushI
	var_156_bool = var_154_int >= var_155_int; // 0xae4 GE
	if(var_156_bool == 0) goto Label_2792; // 0xae5 JumpB
	var_109_string = "fdie"; // 0xae6 MovS
	goto Label_2793; // 0xae7 Jump
	
Label_2793:
	RemoveRTEnvelope(); // 0xae9 Func
	SetDeathState(); // 0xaeb Func
	Stop(); // 0xaed Func
	StopAsync(); // 0xaef Func
	var_110_object = var_94_object; // 0xaf1 Mov
	var_157_string = "GetScriptProperty"; // 0xaf2 PushS
	var_158_int = 2; // 0xaf3 PushI
	var_159_bool = IsFuncExist(var_94_object, var_157_string, var_158_int); // 0xaf4 FuncExist
	if(var_159_bool == 0) goto Label_2817; // 0xaf5 JumpB
	var_160_string = "Owner"; // 0xaf6 PushS
	HasScriptProperty(var_111_bool, var_160_string); // 0xaf7 ObjFunc
	var_161_bool = var_111_bool; // 0xaf9 Push
	if(var_161_bool == 0) goto Label_2817; // 0xafa JumpB
	var_162_string = "Owner"; // 0xafb PushS
	GetScriptProperty(var_110_object, var_162_string); // 0xafc ObjFunc
	var_163_bool = var_110_object == 0; // 0xafe NullEq
	if(var_163_bool == 0) goto Label_2817; // 0xaff JumpB
	var_110_object = var_94_object; // 0xb00 Mov
	
Label_2817:
	var_164_string = "@GetEyesHeight"; // 0xb01 PushS
	var_165_int = 1; // 0xb02 PushI
	var_166_bool = IsFuncExist(var_110_object, var_164_string, var_165_int); // 0xb03 FuncExist
	if(var_166_bool == 0) goto Label_2832; // 0xb04 JumpB
	GetEyesHeight(var_113_float); // 0xb05 ObjFunc
	var_114_cvector = CVector(0.0, 0.0, 0.0); // 0xb07 MovV
	var_167_float = GetByIndex(var_114_cvector, 1); // 0xb08 PushE
	var_167_float = var_113_float; // 0xb09 Mov
	SetByIndex(var_114_cvector, 1) = var_167_float; // 0xb0a PopE
	var_168_string = "head"; // 0xb0b PushS
	LookAsync(var_94_object, var_168_string, var_114_cvector); // 0xb0c Func
	var_112_bool = 1; // 0xb0e MovB
	goto Label_2833; // 0xb0f Jump
	
Label_2833:
	var_169_string = ""; // 0xb11 PushV
	var_169_string = var_109_string; // 0xb12 Mov
	func_4458(var_169_string); // 0xb13 NEW_2
	var_170_string = "all"; // 0xb15 PushS
	PlayAnimation(var_170_string, var_109_string); // 0xb16 Func
	WaitForAnimEnd(); // 0xb18 Func
	var_171_bool = var_112_bool; // 0xb1a Push
	if(var_171_bool == 0) goto Label_2849; // 0xb1b JumpB
	StopAsync(); // 0xb1c Func
	var_172_string = "head"; // 0xb1e PushS
	UnlookAsync(var_172_string); // 0xb1f Func
	
Label_2849:
	var_173_string = "all"; // 0xb21 PushS
	LockAnimationEnd(var_173_string, var_109_string); // 0xb22 Func
	RemoveEnvelope(); // 0xb24 Func
	var_110_object = 0; // 0xb26 SetNull
	
Label_2832:
	var_112_bool = 0; // 0xb10 MovB
	
Label_2792:
	var_109_string = "bdie"; // 0xae8 MovS
}


func_4306()
{
	var_911_cvector = CVector(0,0,0); var_912_cvector = CVector(0,0,0); var_913_cvector = CVector(0,0,0); var_914_cvector = CVector(0,0,0); var_915_cvector = CVector(0,0,0); var_916_cvector = CVector(0,0,0); // 0x10d2 PushV
	GetPosition(var_914_cvector); // 0x10d3 ObjFunc
	GetPosition(var_915_cvector); // 0x10d5 Func
	var_916_cvector = var_914_cvector - var_915_cvector; // 0x10d7 Sub2
	var_917_float = GetByIndex(var_916_cvector, 0); // 0x10d8 PushE
	var_918_float = GetByIndex(var_916_cvector, 2); // 0x10d9 PushE
	RotateAsync(var_917_float, var_918_float); // 0x10da Func
	return 6; // 0x10dc Return
}


func_1749()
{
	var_120_float = 0; var_121_float = 0; // 0x6d5 PushV
	var_120_float = 300; // 0x6d6 MovI
	var_121_float = 100; // 0x6d7 MovI
	func_1821(var_115_int, var_116_int, var_117_bool, var_118_bool, var_119_object, var_120_float, var_121_float); // 0x6d8 NEW_2
	return 0; // 0x6da Return
}


func_1242()
{
	var_406_object = Obj(); var_407_object = Obj(); // 0x4da PushV
	var_408_string = "player"; // 0x4db PushS
	FindActor(var_407_object, var_408_string); // 0x4dc Func
	var_409_bool = 0; var_410_object = Obj(); // 0x4de PushV
	var_410_object = var_407_object; // 0x4df Mov
	func_4137(var_409_bool, var_410_object); // 0x4e0 NEW_2
	var_411_bool = var_409_bool == 0; // 0x4e2 Not
	if(var_411_bool == 0) goto Label_1257; // 0x4e3 JumpB
	var_412_bool = 0; var_413_int = 0; // 0x4e4 PushV
	var_413_int = 1; // 0x4e5 MovI
	func_5017(var_412_bool, var_413_int); // 0x4e6 NEW_2
	return 2; // 0x4e8 Return
	
Label_1257:
	var_414_int = 0; // 0x4e9 PushI
	var_415_int = 5; // 0x4ea PushI
	SetTimer(var_414_int, var_415_int); // 0x4eb Func
	var_416_object = Obj(); // 0x4ed PushV
	var_416_object = var_407_object; // 0x4ee Mov
	func_1345(var_405_bool, var_406_object, var_407_object, var_416_object); // 0x4ef NEW_2
	var_478_int = 0; // 0x4f1 PushI
	KillTimer(var_478_int); // 0x4f2 Func
	return 2; // 0x4f4 Return
}


func_4827(var_109_object, var_110_string, var_111_float)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_object = Obj(); var_116_bool = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_object = Obj(); var_120_bool = 0; // 0x12db PushV
	GetMainOutdoorScene(var_119_object); // 0x12dc Func
	var_121_bool = var_119_object == 0; // 0x12de NullEq
	if(var_121_bool == 0) goto Label_4836; // 0x12df JumpB
	var_122_string = "Can't find main outdoor scene"; // 0x12e0 PushS
	Trace(var_122_string); // 0x12e1 Func
	return 8; // 0x12e3 Return
	
Label_4836:
	GetLocator(var_110_string, var_120_bool, var_117_cvector, var_118_cvector); // 0x12e4 ObjFunc
	var_123_bool = var_120_bool == 0; // 0x12e6 Not
	if(var_123_bool == 0) goto Label_4846; // 0x12e7 JumpB
	var_124_string = "Warning: outdoor scene locator "; // 0x12e8 PushS
	var_125_int = var_124_string + var_110_string; // 0x12e9 Add
	var_126_string = " doesnt exist"; // 0x12ea PushS
	var_127_int = var_125_int + var_126_string; // 0x12eb Add
	Trace(var_127_int); // 0x12ec Func
	
Label_4846:
	GetMap(var_109_object); // 0x12ee ObjFunc
	var_128_bool = var_109_object == 0; // 0x12f0 NullEq
	if(var_128_bool == 0) goto Label_4854; // 0x12f1 JumpB
	var_129_string = "Can't find map"; // 0x12f2 PushS
	Trace(var_129_string); // 0x12f3 Func
	return 8; // 0x12f5 Return
	
Label_4854:
	var_130_float = GetByIndex(var_117_cvector, 0); // 0x12f6 PushE
	var_131_float = GetByIndex(var_117_cvector, 2); // 0x12f7 PushE
	SetMapParams(var_130_float, var_131_float, var_111_float); // 0x12f8 ObjFunc
	return 8; // 0x12fa Return
}


func_4317(var_54_bool)
{
	var_55_bool = 0; var_56_bool = 0; // 0x10dd PushV
	IsLoaded(var_56_bool); // 0x10de Func
	var_54_bool = var_56_bool; // 0x10e0 Mov
	return 2; // 0x10e1 Return
}


func_3297(var_0_object, var_1031_bool, var_1032_float)
{
	var_1033_int = 0; var_1034_bool = 0; var_1035_int = 0; var_1036_string = ""; var_1037_int = 0; var_1038_bool = 0; var_1039_int = 0; var_1040_string = ""; // 0xce1 PushV
	func_3657(var_1040_string); // 0xce3 NEW_2
	irand(var_1037_int, var_1040_string); // 0xce5 Func
	var_1041_int = 1; // 0xce7 PushI
	var_1037_int = var_1037_int + var_1041_int; // 0xce8 Add2
	Face(var_0_object); // 0xce9 Func
	var_1042_bool = 1; // 0xceb PushB
	SetAttackState(var_1042_bool); // 0xcec Func
	var_1043_string = "all"; // 0xcee PushS
	var_1044_string = "attack_begin"; // 0xcef PushS
	var_1045_int = var_1044_string + var_1037_int; // 0xcf0 Add
	PlayAnimation(var_1043_string, var_1045_int); // 0xcf1 Func
	WaitForAnimEnd(); // 0xcf3 Func
	func_3625(var_1039_int, var_1040_string); // 0xcf6 NEW_2
	var_1061_bool = 0; // 0xcf8 PushV
	var_1061_bool = 1; // 0xcf9 MovB
	var_1062_bool = 0; var_1063_object = Obj(); // 0xcfa PushV
	var_1063_object = var_0_object; // 0xcfb MovT
	func_4137(var_1062_bool, var_1063_object); // 0xcfc NEW_2
	var_1064_bool = var_1062_bool == 0; // 0xcfe Not
	if(var_1064_bool == 0) goto Label_3331; // 0xcff JumpB
	var_1065_bool = var_4_bool; // 0xd00 PushT
	if(var_1065_bool == 0) goto Label_3331; // 0xd01 JumpB
	var_1061_bool = 0; // 0xd02 MovB
	
Label_3331:
	if(var_1061_bool == 0) goto Label_3336; // 0xd03 JumpB
	StopAsync(); // 0xd04 Func
	var_1031_bool = 0; // 0xd06 MovB
	return 8; // 0xd07 Return
	
Label_3336:
	var_1066_float = 0; var_1067_int = 0; // 0xd08 PushV
	var_1066_float = var_1032_float; // 0xd09 Mov
	var_1067_int = var_1037_int; // 0xd0a Mov
	func_3258(var_1040_string, var_1066_float, var_1067_int); // 0xd0b NEW_2
	var_1148_string = "all"; // 0xd0d PushS
	var_1149_string = "attack_middle"; // 0xd0e PushS
	var_1150_int = var_1149_string + var_1037_int; // 0xd0f Add
	HasAnimation(var_1038_bool, var_1148_string, var_1150_int); // 0xd10 Func
	var_1151_bool = var_1038_bool; // 0xd12 Push
	if(var_1151_bool == 0) goto Label_3423; // 0xd13 JumpB
	var_1152_string = "all"; // 0xd14 PushS
	var_1153_string = "attack_middle"; // 0xd15 PushS
	var_1154_int = var_1153_string + var_1037_int; // 0xd16 Add
	PlayAnimation(var_1152_string, var_1154_int); // 0xd17 Func
	WaitForAnimEnd(); // 0xd19 Func
	func_3657(var_1040_string); // 0xd1c NEW_2
	var_1155_bool = 0; // 0xd1e PushV
	var_1155_bool = 1; // 0xd1f MovB
	var_1156_bool = 0; var_1157_object = Obj(); // 0xd20 PushV
	var_1157_object = var_0_object; // 0xd21 MovT
	func_4137(var_1156_bool, var_1157_object); // 0xd22 NEW_2
	var_1158_bool = var_1156_bool == 0; // 0xd24 Not
	if(var_1158_bool == 0) goto Label_3369; // 0xd25 JumpB
	var_1159_bool = var_4_bool; // 0xd26 PushT
	if(var_1159_bool == 0) goto Label_3369; // 0xd27 JumpB
	var_1155_bool = 0; // 0xd28 MovB
	
Label_3369:
	if(var_1155_bool == 0) goto Label_3374; // 0xd29 JumpB
	StopAsync(); // 0xd2a Func
	var_1031_bool = 0; // 0xd2c MovB
	return 8; // 0xd2d Return
	
Label_3374:
	var_1160_float = 0; var_1161_int = 0; // 0xd2e PushV
	var_1160_float = var_1032_float; // 0xd2f Mov
	var_1161_int = var_1037_int; // 0xd30 Mov
	func_3258(var_1040_string, var_1160_float, var_1161_int); // 0xd31 NEW_2
	var_1039_int = 1; // 0xd33 MovI
	
Label_3380:
	var_1162_string = "attack_middle"; // 0xd34 PushS
	var_1163_int = var_1162_string + var_1037_int; // 0xd35 Add
	var_1164_string = "_"; // 0xd36 PushS
	var_1165_int = var_1163_int + var_1164_string; // 0xd37 Add
	var_1040_string = var_1165_int + var_1039_int; // 0xd38 Add2
	var_1166_string = "all"; // 0xd39 PushS
	HasAnimation(var_1038_bool, var_1166_string, var_1040_string); // 0xd3a Func
	var_1167_bool = var_1038_bool == 0; // 0xd3c Not
	if(var_1167_bool == 0) goto Label_3391; // 0xd3d JumpB
	goto Label_3423; // 0xd3e Jump
	
Label_3423:
	var_1168_bool = 0; // 0xd5f PushB
	SetAttackState(var_1168_bool); // 0xd60 Func
	var_1169_string = "all"; // 0xd62 PushS
	var_1170_string = "attack_end"; // 0xd63 PushS
	var_1171_int = var_1170_string + var_1037_int; // 0xd64 Add
	PlayAnimation(var_1169_string, var_1171_int); // 0xd65 Func
	var_1172_bool = 0; // 0xd67 PushV
	func_3669(var_1172_bool); // 0xd68 NEW_2
	if(var_1172_bool == 0) goto Label_3441; // 0xd6a JumpB
	var_1173_bool = 0; var_1174_float = 0; // 0xd6b PushV
	var_1174_float = 0.75; // 0xd6c MovF
	func_3443(var_1173_bool, var_1174_float); // 0xd6d NEW_2
	StopAsync(); // 0xd6f Func
	
Label_3441:
	var_1031_bool = 1; // 0xd71 MovB
	return 8; // 0xd72 Return
	
Label_3391:
	var_1182_string = "all"; // 0xd3f PushS
	PlayAnimation(var_1182_string, var_1040_string); // 0xd40 Func
	WaitForAnimEnd(); // 0xd42 Func
	func_3657(var_1040_string); // 0xd45 NEW_2
	var_1183_bool = 0; // 0xd47 PushV
	var_1183_bool = 1; // 0xd48 MovB
	var_1184_bool = 0; var_1185_object = Obj(); // 0xd49 PushV
	var_1185_object = var_0_object; // 0xd4a MovT
	func_4137(var_1184_bool, var_1185_object); // 0xd4b NEW_2
	var_1186_bool = var_1184_bool == 0; // 0xd4d Not
	if(var_1186_bool == 0) goto Label_3410; // 0xd4e JumpB
	var_1187_bool = var_4_bool; // 0xd4f PushT
	if(var_1187_bool == 0) goto Label_3410; // 0xd50 JumpB
	var_1183_bool = 0; // 0xd51 MovB
	
Label_3410:
	if(var_1183_bool == 0) goto Label_3415; // 0xd52 JumpB
	StopAsync(); // 0xd53 Func
	var_1031_bool = 0; // 0xd55 MovB
	return 8; // 0xd56 Return
	
Label_3415:
	var_1188_float = 0; var_1189_int = 0; // 0xd57 PushV
	var_1188_float = var_1032_float; // 0xd58 Mov
	var_1189_int = var_1037_int; // 0xd59 Mov
	func_3258(var_1040_string, var_1188_float, var_1189_int); // 0xd5a NEW_2
	var_1190_int = 1; // 0xd5c PushI
	var_1039_int = var_1039_int + var_1190_int; // 0xd5d Add2
	goto Label_3380; // 0xd5e Jump
}


func_4322(var_59_bool, var_61_float)
{
	var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0; var_70_bool = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_bool = 0; // 0x10e2 PushV
	GetPosition(var_72_cvector); // 0x10e3 ObjFunc
	GetEyesHeight(var_71_float); // 0x10e5 ObjFunc
	var_80_float = GetByIndex(var_72_cvector, 1); // 0x10e7 PushE
	var_80_float = var_80_float + var_71_float; // 0x10e8 Add2
	SetByIndex(var_72_cvector, 1) = var_80_float; // 0x10e9 PopE
	GetPosition(var_73_cvector); // 0x10ea Func
	GetEyesHeight(var_71_float); // 0x10ec Func
	var_81_float = GetByIndex(var_73_cvector, 1); // 0x10ee PushE
	var_81_float = var_81_float + var_71_float; // 0x10ef Add2
	SetByIndex(var_73_cvector, 1) = var_81_float; // 0x10f0 PopE
	var_74_cvector = var_72_cvector - var_73_cvector; // 0x10f1 Sub2
	var_82_float = GetByIndex(var_74_cvector, 1); // 0x10f2 PushE
	var_82_float = 0; // 0x10f3 MovI
	SetByIndex(var_74_cvector, 1) = var_82_float; // 0x10f4 PopE
	var_83_int = var_74_cvector | var_74_cvector; // 0x10f5 Or
	var_84_float = sqrt(var_83_int); // 0x10f6 Sqrt
	var_74_cvector = var_74_cvector / var_74_cvector; // 0x10f7 Div2
	var_75_cvector = -var_74_cvector; // 0x10f8 Neg2
	var_85_float = var_74_cvector * var_61_float; // 0x10f9 Mult
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); // 0x10fa PushV
	var_88_cvector = CVector(0.0, 1.0, 0.0); // 0x10fb PushVec
	var_87_cvector = var_75_cvector ^ var_88_cvector; // 0x10fc Xor2
	func_4505(var_86_cvector, var_87_cvector); // 0x10fd NEW_2
	var_94_int = 25; // 0x10ff PushI
	var_95_float = var_86_cvector * var_94_int; // 0x1100 Mult
	var_96_int = var_85_float + var_95_float; // 0x1101 Add
	var_97_cvector = CVector(0.0, 10.0, 0.0); // 0x1102 PushVec
	var_76_cvector = var_96_int - var_97_cvector; // 0x1103 Sub2
	var_77_cvector = var_73_cvector + var_76_cvector; // 0x1104 Add2
	IsOverrideActive(var_78_bool); // 0x1105 Func
	var_98_bool = var_78_bool; // 0x1107 Push
	if(var_98_bool == 0) goto Label_4363; // 0x1108 JumpB
	var_59_bool = 0; // 0x1109 MovB
	return 18; // 0x110a Return
	
Label_4363:
	StopWorld(); // 0x110b Func
	var_99_bool = 1; // 0x110d PushB
	CameraTransit(var_77_cvector, var_75_cvector, var_99_bool); // 0x110e Func
	var_100_float = GetByIndex(var_76_cvector, 0); // 0x1110 PushE
	var_101_float = GetByIndex(var_76_cvector, 2); // 0x1111 PushE
	Rotate(var_100_float, var_101_float); // 0x1112 Func
	var_102_bool = 0; // 0x1114 PushV
	func_4945(var_102_bool); // 0x1115 NEW_2
	if(var_102_bool == 0) goto Label_4377; // 0x1117 JumpB
	goto Label_4385; // 0x1118 Jump
	
Label_4385:
	CameraWaitForPlayFinish(); // 0x1121 Func
	ResumeWorld(); // 0x1123 Func
	var_59_bool = 1; // 0x1125 MovB
	return 18; // 0x1126 Return
	
Label_4377:
	var_103_string = "head"; // 0x1119 PushS
	HasAnimationTrack(var_79_bool, var_103_string); // 0x111a Func
	var_104_bool = var_79_bool; // 0x111c Push
	if(var_104_bool == 0) goto Label_4385; // 0x111d JumpB
	var_105_string = "head"; // 0x111e PushS
	LookAsyncCamera(var_105_string); // 0x111f Func
}


func_738(var_1311_object)
{
	var_1313_bool = var_1311_object == 0; // 0x2e3 Not
	if(var_1313_bool == 0) goto Label_742; // 0x2e4 JumpB
	return 0; // 0x2e5 Return
	
Label_742:
	var_1314_bool = 0; var_1315_object = Obj(); // 0x2e6 PushV
	var_1315_object = var_1311_object; // 0x2e7 Mov
	func_4171(var_1315_object); // 0x2e8 NEW_2
	return 0; // 0x2ea Return
}


func_3821(var_0_object, var_1_object, var_832_bool, var_833_object, var_834_float, var_835_float, var_836_bool, var_837_bool)
{
	var_838_bool = 0; var_839_bool = 0; var_840_object = Obj(); var_841_cvector = CVector(0,0,0); var_842_cvector = CVector(0,0,0); var_843_cvector = CVector(0,0,0); var_844_float = 0; var_845_object = Obj(); var_846_bool = 0; var_847_bool = 0; var_848_object = Obj(); var_849_cvector = CVector(0,0,0); var_850_cvector = CVector(0,0,0); var_851_cvector = CVector(0,0,0); var_852_float = 0; var_853_object = Obj(); // 0xeed PushV
	var_0_object = 0; // 0xeee TMovB
	var_1_object = var_833_object; // 0xeef TMov
	var_847_bool = var_837_bool; // 0xef0 Mov
	
Label_3825:
	var_854_bool = 0; var_855_object = Obj(); // 0xef1 PushV
	var_855_object = var_833_object; // 0xef2 Mov
	func_3961(var_854_bool, var_855_object); // 0xef3 NEW_2
	var_858_bool = var_854_bool == 0; // 0xef5 Not
	if(var_858_bool == 0) goto Label_3833; // 0xef6 JumpB
	var_832_bool = 0; // 0xef7 MovB
	return 16; // 0xef8 Return
	
Label_3833:
	GetPosition(var_849_cvector); // 0xef9 ObjFunc
	GetPosition(var_850_cvector); // 0xefb Func
	var_851_cvector = var_849_cvector - var_850_cvector; // 0xefd Sub2
	var_852_float = var_851_cvector | var_851_cvector; // 0xefe Or2
	var_859_bool = 0; // 0xeff PushV
	var_859_bool = 0; // 0xf00 MovB
	var_860_int = 0; // 0xf01 PushI
	var_861_bool = var_835_float > var_860_int; // 0xf02 GT
	if(var_861_bool == 0) goto Label_3848; // 0xf03 JumpB
	var_862_float = var_835_float * var_835_float; // 0xf04 Mult
	var_863_bool = var_852_float > var_862_float; // 0xf05 GT
	if(var_863_bool == 0) goto Label_3848; // 0xf06 JumpB
	var_859_bool = 1; // 0xf07 MovB
	
Label_3848:
	if(var_859_bool == 0) goto Label_3853; // 0xf08 JumpB
	Stop(); // 0xf09 Func
	var_832_bool = 0; // 0xf0b MovB
	return 16; // 0xf0c Return
	
Label_3853:
	var_864_float = var_834_float * var_834_float; // 0xf0d Mult
	var_865_bool = var_852_float > var_864_float; // 0xf0e GT
	if(var_865_bool == 0) goto Label_3915; // 0xf0f JumpB
	GetPFPosition(var_849_cvector); // 0xf10 ObjFunc
	FindPathTo(var_853_object, var_849_cvector); // 0xf12 Func
	var_866_bool = var_853_object != 0; // 0xf14 NullNeq
	if(var_866_bool == 0) goto Label_3864; // 0xf15 JumpB
	var_848_object = var_853_object; // 0xf16 Mov
	var_853_object = 0; // 0xf17 SetNull
	
Label_3864:
	var_867_bool = var_848_object != 0; // 0xf18 NullNeq
	if(var_867_bool == 0) goto Label_3897; // 0xf19 JumpB
	var_868_bool = var_847_bool; // 0xf1a Push
	if(var_868_bool == 0) goto Label_3874; // 0xf1b JumpB
	var_847_bool = 0; // 0xf1c MovB
	RotatePath(var_848_object, var_846_bool); // 0xf1d Func
	var_869_bool = var_846_bool == 0; // 0xf1f Not
	if(var_869_bool == 0) goto Label_3874; // 0xf20 JumpB
	goto Label_3921; // 0xf21 Jump
	
Label_3921:
	var_832_bool = !var_0_object; // 0xf51 Not2
	return 16; // 0xf52 Return
	
Label_3874:
	var_870_int = 0; // 0xf22 PushI
	var_871_float = 0.3; // 0xf23 PushF
	SetTimer(var_870_int, var_871_float); // 0xf24 Func
	var_872_string = ""; // 0xf26 PushV
	func_3968(var_872_string); // 0xf27 NEW_2
	var_873_string = ""; // 0xf29 PushV
	func_3970(var_873_string); // 0xf2a NEW_2
	FollowPath(var_848_object, var_836_bool, var_846_bool, var_872_string, var_873_string); // 0xf2c Func
	var_874_bool = var_846_bool == 0; // 0xf2e Not
	if(var_874_bool == 0) goto Label_3895; // 0xf2f JumpB
	var_875_object = var_0_object; // 0xf30 PushT
	if(var_875_object == 0) goto Label_3893; // 0xf31 JumpB
	var_848_object = 0; // 0xf32 SetNull
	goto Label_3921; // 0xf33 Jump
	
Label_3893:
	goto Label_3920; // 0xf35 Jump
	
Label_3920:
	goto Label_3825; // 0xf50 Jump
	
Label_3895:
	var_848_object = 0; // 0xf37 SetNull
	goto Label_3913; // 0xf38 Jump
	
Label_3913:
	var_853_object = 0; // 0xf49 SetNull
	goto Label_3919; // 0xf4a Jump
	
Label_3919:
	var_848_object = 0; // 0xf4f SetNull
	
Label_3897:
	var_876_int = 0; // 0xf39 PushI
	KillTimer(var_876_int); // 0xf3a Func
	var_877_float = 0.5; // 0xf3c PushF
	Sleep(var_877_float, var_846_bool); // 0xf3d Func
	var_878_bool = var_846_bool == 0; // 0xf3f Not
	if(var_878_bool == 0) goto Label_3909; // 0xf40 JumpB
	var_879_object = var_0_object; // 0xf41 PushT
	if(var_879_object == 0) goto Label_3909; // 0xf42 JumpB
	var_848_object = 0; // 0xf43 SetNull
	goto Label_3921; // 0xf44 Jump
	
Label_3909:
	var_880_int = 0; // 0xf45 PushI
	var_881_float = 0.3; // 0xf46 PushF
	SetTimer(var_880_int, var_881_float); // 0xf47 Func
	
Label_3915:
	var_882_int = 0; // 0xf4b PushI
	KillTimer(var_882_int); // 0xf4c Func
	goto Label_3921; // 0xf4e Jump
}


func_4860(var_111_int)
{
	var_112_int = 0; var_113_int = 0; // 0x12fc PushV
	var_114_string = "branch"; // 0x12fd PushS
	GetVariable(var_114_string, var_113_int); // 0x12fe Func
	var_115_int = 0; // 0x1300 PushI
	var_116_bool = var_113_int == var_115_int; // 0x1301 Eq
	if(var_116_bool == 0) goto Label_4870; // 0x1302 JumpB
	var_111_int = 1; // 0x1303 MovI
	return 2; // 0x1304 Return
	
Label_4870:
	var_117_int = 1; // 0x1306 PushI
	var_118_bool = var_113_int == var_117_int; // 0x1307 Eq
	if(var_118_bool == 0) goto Label_4875; // 0x1308 JumpB
	var_111_int = 2; // 0x1309 MovI
	return 2; // 0x130a Return
	
Label_4875:
	var_111_int = 3; // 0x130b MovI
	return 2; // 0x130c Return
}


func_4877(var_73_int)
{
	var_74_int = 0; var_75_int = 0; // 0x130d PushV
	var_76_string = "branch"; // 0x130e PushS
	GetVariable(var_76_string, var_75_int); // 0x130f Func
	var_73_int = var_75_int; // 0x1311 Mov
	return 2; // 0x1312 Return
}


func_4883(var_46_object)
{
	var_47_int = 0; // 0x1314 PushV
	func_4877(var_47_int); // 0x1315 NEW_2
	var_51_int = 1; // 0x1317 PushI
	var_52_bool = var_47_int == var_51_int; // 0x1318 Eq
	if(var_52_bool == 0) goto Label_4893; // 0x1319 JumpB
	WorkWithCorpse(var_46_object); // 0x131a Func
	goto Label_4895; // 0x131c Jump
	
Label_4895:
	return 0; // 0x131f Return
	
Label_4893:
	Barter(var_46_object); // 0x131d Func
}


func_1821(var_0_object, var_1_object, var_2_object, var_3_string, var_119_object, var_120_float, var_121_float)
{
	var_122_bool = 0; // 0x71e PushV
	func_4317(var_122_bool); // 0x71f NEW_2
	var_123_bool = var_122_bool == 0; // 0x721 Not
	if(var_123_bool == 0) goto Label_1828; // 0x722 JumpB
	return 0; // 0x723 Return
	
Label_1828:
	var_124_string = "player"; // 0x724 PushS
	FindActor(var_119_object, var_124_string); // 0x725 Func
	var_2_object = 0; // 0x727 TMovB
	var_3_string = 0; // 0x728 TMovB
	var_0_object = var_120_float; // 0x729 TMov
	var_1_object = var_121_float; // 0x72a TMov
	var_125_int = 10; // 0x72b PushI
	var_126_float = 1.0; // 0x72c PushF
	SetTimer(var_125_int, var_126_float); // 0x72d Func
	func_1900(); // 0x730 NEW_2
	var_178_bool = var_3_string == 0; // 0x732 Not
	if(var_178_bool == 0) goto Label_1847; // 0x733 JumpB
	var_179_int = 10; // 0x734 PushI
	KillTimer(var_179_int); // 0x735 Func
	
Label_1847:
	return 0; // 0x737 Return
}


func_4896(var_79_string)
{
	var_80_object = Obj(); var_81_int = 0; var_82_bool = 0; var_83_object = Obj(); var_84_int = 0; var_85_bool = 0; // 0x1320 PushV
	CreateInvItem(var_83_object); // 0x1321 Func
	SetItemName(var_79_string); // 0x1323 ObjFunc
	var_86_string = "Organ"; // 0x1325 PushS
	var_87_int = 1; // 0x1326 PushI
	SetProperty(var_86_string, var_87_int); // 0x1327 ObjFunc
	GetItemID(var_84_int); // 0x1329 ObjFunc
	var_88_int = 0; // 0x132b PushI
	var_89_int = 1; // 0x132c PushI
	AddItem(var_85_bool, var_83_object, var_88_int, var_89_int); // 0x132d Func
	return 6; // 0x132f Return
}


func_802(var_641_object)
{
	var_646_bool = 0; var_647_object = Obj(); // 0x323 PushV
	var_647_object = var_641_object; // 0x324 Mov
	func_4137(var_646_bool, var_647_object); // 0x325 NEW_2
	var_648_bool = var_646_bool == 0; // 0x327 Not
	if(var_648_bool == 0) goto Label_814; // 0x328 JumpB
	var_649_bool = 0; var_650_int = 0; // 0x329 PushV
	var_650_int = 1; // 0x32a MovI
	func_5017(var_649_bool, var_650_int); // 0x32b NEW_2
	return 0; // 0x32d Return
	
Label_814:
	var_651_object = Obj(); // 0x32e PushV
	var_651_object = var_641_object; // 0x32f Mov
	func_857(var_644_cvector, var_645_bool, var_641_object, var_651_object); // 0x330 NEW_2
	return 0; // 0x332 Return
}


func_1315(var_427_cvector, var_428_float)
{
	var_429_cvector = CVector(0,0,0); var_430_cvector = CVector(0,0,0); var_431_cvector = CVector(0,0,0); var_432_cvector = CVector(0,0,0); var_433_cvector = CVector(0,0,0); var_434_float = 0; var_435_cvector = CVector(0,0,0); var_436_cvector = CVector(0,0,0); var_437_cvector = CVector(0,0,0); var_438_cvector = CVector(0,0,0); var_439_cvector = CVector(0,0,0); var_440_float = 0; // 0x523 PushV
	GetPosition(var_435_cvector); // 0x524 Func
	GetPosition(var_436_cvector); // 0x526 TObjFunc
	GetDirection(var_437_cvector); // 0x528 Func
	var_441_cvector = CVector(0,0,0); var_442_cvector = CVector(0,0,0); // 0x52a PushV
	var_443_cvector = CVector(0,0,0); var_444_cvector = CVector(0,0,0); // 0x52b PushV
	var_444_cvector = var_435_cvector - var_436_cvector; // 0x52c Sub2
	func_4505(var_443_cvector, var_444_cvector); // 0x52d NEW_2
	var_445_float = 0.75; // 0x52f PushF
	var_446_float = var_437_cvector * var_445_float; // 0x530 Mult
	var_442_cvector = var_443_cvector + var_446_float; // 0x531 Add2
	func_4505(var_441_cvector, var_442_cvector); // 0x532 NEW_2
	var_438_cvector = var_441_cvector; // 0x533 Mov
	var_447_int = 32; // 0x535 PushI
	var_448_float = 7000.0; // 0x536 PushF
	FindLongestDir(var_439_cvector, var_440_float, var_438_cvector, var_428_float, var_447_int, var_448_float); // 0x537 Func
	var_449_int = 100; // 0x539 PushI
	var_440_float = var_440_float - var_449_int; // 0x53a Sub2
	var_450_int = 0; // 0x53b PushI
	var_451_bool = var_440_float < var_450_int; // 0x53c LT
	if(var_451_bool == 0) goto Label_1343; // 0x53d JumpB
	var_440_float = 0; // 0x53e MovI
	
Label_1343:
	var_427_cvector = var_439_cvector * var_440_float; // 0x53f Mult2
	return 12; // 0x540 Return
}


func_4391()
{
	var_208_bool = 0; var_209_bool = 0; // 0x1127 PushV
	var_210_bool = 1; // 0x1128 PushB
	CameraSwitchToNormal(var_210_bool); // 0x1129 Func
	var_211_bool = 0; // 0x112b PushV
	func_4945(var_211_bool); // 0x112c NEW_2
	if(var_211_bool == 0) goto Label_4400; // 0x112e JumpB
	goto Label_4408; // 0x112f Jump
	
Label_4408:
	return 2; // 0x1138 Return
	
Label_4400:
	var_212_string = "head"; // 0x1130 PushS
	HasAnimationTrack(var_209_bool, var_212_string); // 0x1131 Func
	var_213_bool = var_209_bool; // 0x1133 Push
	if(var_213_bool == 0) goto Label_4408; // 0x1134 JumpB
	var_214_string = "head"; // 0x1135 PushS
	UnlookAsync(var_214_string); // 0x1136 Func
}


func_2856(var_116_string)
{
	RemoveRTEnvelope(); // 0xb29 Func
	SetDeathState(); // 0xb2b Func
	Stop(); // 0xb2d Func
	StopAsync(); // 0xb2f Func
	StopSecondaryAnimation(); // 0xb31 Func
	var_117_string = ""; // 0xb33 PushV
	var_117_string = var_116_string; // 0xb34 Mov
	func_4458(var_117_string); // 0xb35 NEW_2
	var_146_string = "all"; // 0xb37 PushS
	PlayAnimation(var_146_string, var_116_string); // 0xb38 Func
	WaitForAnimEnd(); // 0xb3a Func
	var_147_string = "all"; // 0xb3c PushS
	LockAnimationEnd(var_147_string, var_116_string); // 0xb3d Func
	RemoveEnvelope(); // 0xb3f Func
	return 0; // 0xb41 Return
}


func_4913()
{
	var_73_int = 0; // 0x1331 PushV
	func_4877(var_73_int); // 0x1332 NEW_2
	var_77_int = 1; // 0x1334 PushI
	var_78_bool = var_73_int != var_77_int; // 0x1335 Neq
	if(var_78_bool == 0) goto Label_4920; // 0x1336 JumpB
	return 0; // 0x1337 Return
	
Label_4920:
	var_79_string = ""; // 0x1338 PushV
	var_79_string = "liver"; // 0x1339 MovS
	func_4896(var_79_string); // 0x133a NEW_2
	var_90_string = ""; // 0x133c PushV
	var_90_string = "kidney"; // 0x133d MovS
	func_4896(var_90_string); // 0x133e NEW_2
	var_91_string = ""; // 0x1340 PushV
	var_91_string = "heart"; // 0x1341 MovS
	func_4896(var_91_string); // 0x1342 NEW_2
	var_92_string = ""; // 0x1344 PushV
	var_92_string = "blood"; // 0x1345 MovS
	func_4896(var_92_string); // 0x1346 NEW_2
	return 0; // 0x1348 Return
}


func_1848(var_0_object, var_1_object, var_4_bool, var_45_bool)
{
	var_46_float = 0; var_47_float = 0; // 0x738 PushV
	var_48_bool = var_4_bool == 0; // 0x739 NullEq
	if(var_48_bool == 0) goto Label_1853; // 0x73a JumpB
	var_45_bool = 0; // 0x73b MovB
	return 2; // 0x73c Return
	
Label_1853:
	var_49_float = 0; var_50_object = Obj(); // 0x73d PushV
	var_50_object = var_4_bool; // 0x73e MovT
	func_3998(var_50_object); // 0x73f NEW_2
	var_47_float = sqrt(var_49_float); // 0x741 Sqrt2
	var_57_object = var_2_object; // 0x742 PushT
	if(var_57_object == 0) goto Label_1861; // 0x743 JumpB
	var_47_float = var_47_float - var_1_object; // 0x744 Sub2
	
Label_1861:
	var_45_bool = var_47_float < var_0_object; // 0x745 LT2
	return 2; // 0x746 Return
}


func_4409(var_165_string)
{
	var_166_bool = 0; var_167_float = 0; var_168_float = 0; var_169_bool = 0; var_170_float = 0; var_171_float = 0; // 0x1139 PushV
	lshHasAnimation(var_169_bool, var_165_string); // 0x113a Func
	var_172_bool = var_169_bool; // 0x113c Push
	if(var_172_bool == 0) goto Label_4420; // 0x113d JumpB
	lshGetAnimTimes(var_165_string, var_170_float, var_171_float); // 0x113e Func
	var_173_bool = 0; // 0x1140 PushB
	lshPlayAnimation(var_170_float, var_171_float, var_173_bool); // 0x1141 Func
	goto Label_4424; // 0x1143 Jump
	
Label_4424:
	return 6; // 0x1148 Return
	
Label_4420:
	var_174_string = "Can't find lsh animation : "; // 0x1144 PushS
	var_175_int = var_174_string + var_165_string; // 0x1145 Add
	Trace(var_175_int); // 0x1146 Func
}


func_827(var_662_cvector, var_663_float)
{
	var_664_cvector = CVector(0,0,0); var_665_cvector = CVector(0,0,0); var_666_cvector = CVector(0,0,0); var_667_cvector = CVector(0,0,0); var_668_cvector = CVector(0,0,0); var_669_float = 0; var_670_cvector = CVector(0,0,0); var_671_cvector = CVector(0,0,0); var_672_cvector = CVector(0,0,0); var_673_cvector = CVector(0,0,0); var_674_cvector = CVector(0,0,0); var_675_float = 0; // 0x33b PushV
	GetPosition(var_670_cvector); // 0x33c Func
	GetPosition(var_671_cvector); // 0x33e TObjFunc
	GetDirection(var_672_cvector); // 0x340 Func
	var_676_cvector = CVector(0,0,0); var_677_cvector = CVector(0,0,0); // 0x342 PushV
	var_678_cvector = CVector(0,0,0); var_679_cvector = CVector(0,0,0); // 0x343 PushV
	var_679_cvector = var_670_cvector - var_671_cvector; // 0x344 Sub2
	func_4505(var_678_cvector, var_679_cvector); // 0x345 NEW_2
	var_680_float = 0.75; // 0x347 PushF
	var_681_float = var_672_cvector * var_680_float; // 0x348 Mult
	var_677_cvector = var_678_cvector + var_681_float; // 0x349 Add2
	func_4505(var_676_cvector, var_677_cvector); // 0x34a NEW_2
	var_673_cvector = var_676_cvector; // 0x34b Mov
	var_682_int = 32; // 0x34d PushI
	var_683_float = 7000.0; // 0x34e PushF
	FindLongestDir(var_674_cvector, var_675_float, var_673_cvector, var_663_float, var_682_int, var_683_float); // 0x34f Func
	var_684_int = 100; // 0x351 PushI
	var_675_float = var_675_float - var_684_int; // 0x352 Sub2
	var_685_int = 0; // 0x353 PushI
	var_686_bool = var_675_float < var_685_int; // 0x354 LT
	if(var_686_bool == 0) goto Label_855; // 0x355 JumpB
	var_675_float = 0; // 0x356 MovI
	
Label_855:
	var_662_cvector = var_674_cvector * var_675_float; // 0x357 Mult2
	return 12; // 0x358 Return
}


func_2363(var_0_object)
{
	var_0_object = 1; // 0x93b TMovB
	var_43_int = 0; // 0x93c PushI
	KillTimer(var_43_int); // 0x93d Func
	Stop(); // 0x93f Func
	return 0; // 0x941 Return
}


func_1345(var_0_object, var_1_object, var_2_object, var_416_object)
{
	var_417_cvector = CVector(0,0,0); var_418_float = 0; var_419_bool = 0; var_420_cvector = CVector(0,0,0); var_421_float = 0; var_422_cvector = CVector(0,0,0); var_423_float = 0; var_424_bool = 0; var_425_cvector = CVector(0,0,0); var_426_float = 0; // 0x541 PushV
	var_0_object = var_416_object; // 0x542 TMov
	var_427_cvector = CVector(0,0,0); var_428_float = 0; // 0x543 PushV
	var_428_float = 1.74533; // 0x544 MovF
	func_1315(var_427_cvector, var_428_float); // 0x545 NEW_2
	var_422_cvector = var_427_cvector; // 0x546 Mov
	var_423_float = var_422_cvector | var_422_cvector; // 0x548 Or2
	var_452_float = 2500.0; // 0x549 PushF
	var_453_bool = var_423_float < var_452_float; // 0x54a LT
	if(var_453_bool == 0) goto Label_1374; // 0x54b JumpB
	var_454_cvector = CVector(0,0,0); var_455_float = 0; // 0x54c PushV
	var_455_float = 2.61799; // 0x54d MovF
	func_1315(var_454_cvector, var_455_float); // 0x54e NEW_2
	var_422_cvector = var_454_cvector; // 0x54f Mov
	var_423_float = var_422_cvector | var_422_cvector; // 0x551 Or2
	var_456_float = 2500.0; // 0x552 PushF
	var_457_bool = var_423_float < var_456_float; // 0x553 LT
	if(var_457_bool == 0) goto Label_1374; // 0x554 JumpB
	var_458_string = "Can't retreat, distance: "; // 0x555 PushS
	var_459_float = sqrt(var_423_float); // 0x556 Sqrt
	var_460_int = var_458_string + var_459_float; // 0x557 Add
	Trace(var_460_int); // 0x558 Func
	var_461_float = 0.5; // 0x55a PushF
	Sleep(var_461_float); // 0x55b Func
	return 10; // 0x55d Return
	
Label_1374:
	var_462_float = GetByIndex(var_422_cvector, 0); // 0x55e PushE
	var_463_float = GetByIndex(var_422_cvector, 2); // 0x55f PushE
	Rotate(var_462_float, var_463_float); // 0x560 Func
	var_464_cvector = CVector(0,0,0); // 0x562 PushV
	func_3986(var_464_cvector); // 0x563 NEW_2
	var_1_object = var_464_cvector + var_422_cvector; // 0x565 Add2
	var_465_int = 120; // 0x566 PushI
	var_466_float = 0.5; // 0x567 PushF
	SetTimer(var_465_int, var_466_float); // 0x568 Func
	var_2_object = 0; // 0x56a TMovB
	
Label_1387:
	var_467_int = 1; // 0x56b PushI
	MovePoint(var_467_int, var_467_int, var_424_bool); // 0x56c Func
	var_468_bool = var_424_bool; // 0x56e Push
	if(var_468_bool == 0) goto Label_1415; // 0x56f JumpB
	var_469_bool = var_0_object == 0; // 0x570 NullEq
	if(var_469_bool == 0) goto Label_1396; // 0x571 JumpB
	goto Label_1417; // 0x572 Jump
	
Label_1417:
	return 10; // 0x589 Return
	
Label_1396:
	var_470_cvector = CVector(0,0,0); var_471_float = 0; // 0x574 PushV
	var_471_float = 2.61799; // 0x575 MovF
	func_1315(var_470_cvector, var_471_float); // 0x576 NEW_2
	var_425_cvector = var_470_cvector; // 0x577 Mov
	var_426_float = var_425_cvector | var_425_cvector; // 0x579 Or2
	var_472_float = 2500.0; // 0x57a PushF
	var_473_bool = var_426_float >= var_472_float; // 0x57b GE
	if(var_473_bool == 0) goto Label_1414; // 0x57c JumpB
	var_474_cvector = CVector(0,0,0); // 0x57d PushV
	func_3986(var_474_cvector); // 0x57e NEW_2
	var_1_object = var_474_cvector + var_425_cvector; // 0x580 Add2
	var_475_int = 120; // 0x581 PushI
	var_476_float = 0.5; // 0x582 PushF
	SetTimer(var_475_int, var_476_float); // 0x583 Func
	goto Label_1415; // 0x585 Jump
	
Label_1415:
	var_477_bool = var_2_object == 0; // 0x587 Not
	if(var_477_bool == 0) goto Label_1387; // 0x588 JumpB
	
Label_1414:
	goto Label_1417; // 0x586 Jump
}


func_2888()
{
	var_50_bool = GlobalVars[1]; // 0xb48 PushGE
	if(var_50_bool == 0) goto Label_2897; // 0xb49 JumpB
	var_51_object = Obj(); // 0xb4a PushV
	func_4499(var_51_object); // 0xb4b NEW_2
	RemoveActor(var_51_object); // 0xb4d Func
	Hold(); // 0xb4f Func
	
Label_2897:
	var_54_bool = 0; // 0xb51 PushV
	func_4317(var_54_bool); // 0xb52 NEW_2
	var_57_bool = var_54_bool == 0; // 0xb54 Not
	if(var_57_bool == 0) goto Label_2905; // 0xb55 JumpB
	Hold(); // 0xb56 Func
	goto Label_2897; // 0xb58 Jump
	
Label_2905:
	return 0; // 0xb59 Return
}


func_4937(var_108_int)
{
	var_108_int = 515558; // 0x1349 MovI
	return 0; // 0x134a Return
}


func_4425(var_143_string, var_144_bool)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0; // 0x1149 PushV
	lshHasAnimation(var_150_bool, var_143_string); // 0x114a Func
	var_153_bool = var_150_bool; // 0x114c Push
	if(var_153_bool == 0) goto Label_4435; // 0x114d JumpB
	lshGetAnimTimes(var_143_string, var_151_float, var_152_float); // 0x114e Func
	lshPlayAnimation(var_151_float, var_152_float, var_144_bool); // 0x1150 Func
	goto Label_4439; // 0x1152 Jump
	
Label_4439:
	return 6; // 0x1157 Return
	
Label_4435:
	var_154_string = "Can't find lsh animation : "; // 0x1153 PushS
	var_155_int = var_154_string + var_143_string; // 0x1154 Add
	Trace(var_155_int); // 0x1155 Func
}


func_4939(var_107_int)
{
	var_107_int = 503343; // 0x134b MovI
	return 0; // 0x134c Return
}


func_2379(var_580_string)
{
	var_580_string = "walk"; // 0x94b MovS
	return 0; // 0x94c Return
}


func_4941(var_109_string)
{
	var_109_string = "ui/NPC_Citizen3.png"; // 0x134d MovS
	return 0; // 0x134e Return
}


func_2381(var_581_string)
{
	var_581_string = "run"; // 0x94d MovS
	return 0; // 0x94e Return
}


func_4943(var_110_string)
{
	var_110_string = "ui/NPC_Citizen3_b.png"; // 0x134f MovS
	return 0; // 0x1350 Return
}


func_2383()
{
	var_614_string = ""; // 0x94f PushV
	var_614_string = "hunt"; // 0x950 MovS
	func_2446(var_614_string); // 0x951 NEW_2
	return 0; // 0x953 Return
}


func_4945(var_102_bool)
{
	var_102_bool = 0; // 0x1351 MovB
	return 0; // 0x1352 Return
}


func_4947(var_496_int)
{
	var_497_object = Obj(); var_498_cvector = CVector(0,0,0); var_499_cvector = CVector(0,0,0); var_500_cvector = CVector(0,0,0); var_501_bool = 0; var_502_float = 0; var_503_int = 0; var_504_int = 0; var_505_cvector = CVector(0,0,0); var_506_float = 0; var_507_object = Obj(); var_508_cvector = CVector(0,0,0); var_509_cvector = CVector(0,0,0); var_510_cvector = CVector(0,0,0); var_511_bool = 0; var_512_float = 0; var_513_int = 0; var_514_int = 0; var_515_cvector = CVector(0,0,0); var_516_float = 0; // 0x1353 PushV
	GetScene(var_507_object); // 0x1354 Func
	GetPosition(var_508_cvector); // 0x1356 Func
	var_512_float = 9000000; // 0x1358 MovI
	var_513_int = 1; // 0x1359 MovI
	var_514_int = -1; // 0x135a MovI
	
Label_4955:
	var_517_bool = 1; // 0x135b PushB
	if(var_517_bool == 0) goto Label_4973; // 0x135c JumpB
	var_518_string = "pt_b9q03_bonfire"; // 0x135d PushS
	var_519_int = var_518_string + var_513_int; // 0x135e Add
	GetLocator(var_519_int, var_511_bool, var_509_cvector, var_510_cvector); // 0x135f ObjFunc
	var_520_bool = var_511_bool == 0; // 0x1361 Not
	if(var_520_bool == 0) goto Label_4964; // 0x1362 JumpB
	goto Label_4973; // 0x1363 Jump
	
Label_4973:
	var_496_int = var_514_int; // 0x136d Mov
	return 20; // 0x136e Return
	
Label_4964:
	var_515_cvector = var_508_cvector - var_509_cvector; // 0x1364 Sub2
	var_516_float = var_515_cvector | var_515_cvector; // 0x1365 Or2
	var_521_bool = var_516_float < var_512_float; // 0x1366 LT
	if(var_521_bool == 0) goto Label_4970; // 0x1367 JumpB
	var_512_float = var_516_float; // 0x1368 Mov
	var_514_int = var_513_int; // 0x1369 Mov
	
Label_4970:
	var_522_int = 1; // 0x136a PushI
	var_513_int = var_513_int + var_522_int; // 0x136b Add2
	goto Label_4955; // 0x136c Jump
}


func_3923(var_0_object, var_1_object, var_55_int)
{
	var_56_int = 0; // 0xf54 PushI
	var_57_bool = var_55_int != var_56_int; // 0xf55 Neq
	if(var_57_bool == 0) goto Label_3928; // 0xf56 JumpB
	return 0; // 0xf57 Return
	
Label_3928:
	var_58_bool = 0; var_59_object = Obj(); // 0xf58 PushV
	var_59_object = var_1_object; // 0xf59 MovT
	func_3961(var_58_bool, var_59_object); // 0xf5a NEW_2
	var_94_bool = var_58_bool == 0; // 0xf5c Not
	if(var_94_bool == 0) goto Label_3935; // 0xf5d JumpB
	var_0_object = 1; // 0xf5e TMovB
	
Label_3935:
	var_95_int = 0; // 0xf5f PushI
	KillTimer(var_95_int); // 0xf60 Func
	Stop(); // 0xf62 Func
	return 0; // 0xf64 Return
}


func_4440(var_297_object)
{
	var_298_float = 0; var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_cvector = CVector(0,0,0); // 0x1158 PushV
	GetEyesHeight(var_300_float); // 0x1159 ObjFunc
	var_301_cvector = CVector(0.0, 0.0, 0.0); // 0x115b MovV
	var_302_float = GetByIndex(var_301_cvector, 1); // 0x115c PushE
	var_302_float = var_300_float; // 0x115d Mov
	SetByIndex(var_301_cvector, 1) = var_302_float; // 0x115e PopE
	var_303_string = "head"; // 0x115f PushS
	LookAsync(var_297_object, var_303_string, var_301_cvector); // 0x1160 Func
	return 4; // 0x1162 Return
}


func_857(var_0_object, var_1_object, var_2_object, var_651_object)
{
	var_652_cvector = CVector(0,0,0); var_653_float = 0; var_654_bool = 0; var_655_cvector = CVector(0,0,0); var_656_float = 0; var_657_cvector = CVector(0,0,0); var_658_float = 0; var_659_bool = 0; var_660_cvector = CVector(0,0,0); var_661_float = 0; // 0x359 PushV
	var_0_object = var_651_object; // 0x35a TMov
	var_662_cvector = CVector(0,0,0); var_663_float = 0; // 0x35b PushV
	var_663_float = 1.74533; // 0x35c MovF
	func_827(var_662_cvector, var_663_float); // 0x35d NEW_2
	var_657_cvector = var_662_cvector; // 0x35e Mov
	var_658_float = var_657_cvector | var_657_cvector; // 0x360 Or2
	var_687_float = 2500.0; // 0x361 PushF
	var_688_bool = var_658_float < var_687_float; // 0x362 LT
	if(var_688_bool == 0) goto Label_886; // 0x363 JumpB
	var_689_cvector = CVector(0,0,0); var_690_float = 0; // 0x364 PushV
	var_690_float = 2.61799; // 0x365 MovF
	func_827(var_689_cvector, var_690_float); // 0x366 NEW_2
	var_657_cvector = var_689_cvector; // 0x367 Mov
	var_658_float = var_657_cvector | var_657_cvector; // 0x369 Or2
	var_691_float = 2500.0; // 0x36a PushF
	var_692_bool = var_658_float < var_691_float; // 0x36b LT
	if(var_692_bool == 0) goto Label_886; // 0x36c JumpB
	var_693_string = "Can't retreat, distance: "; // 0x36d PushS
	var_694_float = sqrt(var_658_float); // 0x36e Sqrt
	var_695_int = var_693_string + var_694_float; // 0x36f Add
	Trace(var_695_int); // 0x370 Func
	var_696_float = 0.5; // 0x372 PushF
	Sleep(var_696_float); // 0x373 Func
	return 10; // 0x375 Return
	
Label_886:
	var_697_float = GetByIndex(var_657_cvector, 0); // 0x376 PushE
	var_698_float = GetByIndex(var_657_cvector, 2); // 0x377 PushE
	Rotate(var_697_float, var_698_float); // 0x378 Func
	var_699_cvector = CVector(0,0,0); // 0x37a PushV
	func_3986(var_699_cvector); // 0x37b NEW_2
	var_1_object = var_699_cvector + var_657_cvector; // 0x37d Add2
	var_700_int = 120; // 0x37e PushI
	var_701_float = 0.5; // 0x37f PushF
	SetTimer(var_700_int, var_701_float); // 0x380 Func
	var_2_object = 0; // 0x382 TMovB
	
Label_899:
	var_702_int = 1; // 0x383 PushI
	MovePoint(var_702_int, var_702_int, var_659_bool); // 0x384 Func
	var_703_bool = var_659_bool; // 0x386 Push
	if(var_703_bool == 0) goto Label_927; // 0x387 JumpB
	var_704_bool = var_0_object == 0; // 0x388 NullEq
	if(var_704_bool == 0) goto Label_908; // 0x389 JumpB
	goto Label_929; // 0x38a Jump
	
Label_929:
	return 10; // 0x3a1 Return
	
Label_908:
	var_705_cvector = CVector(0,0,0); var_706_float = 0; // 0x38c PushV
	var_706_float = 2.61799; // 0x38d MovF
	func_827(var_705_cvector, var_706_float); // 0x38e NEW_2
	var_660_cvector = var_705_cvector; // 0x38f Mov
	var_661_float = var_660_cvector | var_660_cvector; // 0x391 Or2
	var_707_float = 2500.0; // 0x392 PushF
	var_708_bool = var_661_float >= var_707_float; // 0x393 GE
	if(var_708_bool == 0) goto Label_926; // 0x394 JumpB
	var_709_cvector = CVector(0,0,0); // 0x395 PushV
	func_3986(var_709_cvector); // 0x396 NEW_2
	var_1_object = var_709_cvector + var_660_cvector; // 0x398 Add2
	var_710_int = 120; // 0x399 PushI
	var_711_float = 0.5; // 0x39a PushF
	SetTimer(var_710_int, var_711_float); // 0x39b Func
	goto Label_927; // 0x39d Jump
	
Label_927:
	var_712_bool = var_2_object == 0; // 0x39f Not
	if(var_712_bool == 0) goto Label_899; // 0x3a0 JumpB
	
Label_926:
	goto Label_929; // 0x39e Jump
}


func_1886(var_2_object, var_3_string)
{
	func_1981(); // 0x75f NEW_2
	var_42_int = 10; // 0x761 PushI
	KillTimer(var_42_int); // 0x762 Func
	var_43_object = var_2_object; // 0x764 PushT
	if(var_43_object == 0) goto Label_1898; // 0x765 JumpB
	var_44_string = "head"; // 0x766 PushS
	UnlookAsync(var_44_string); // 0x767 Func
	var_2_object = 0; // 0x769 TMovB
	
Label_1898:
	var_3_string = 1; // 0x76a TMovB
	return 0; // 0x76b Return
}


func_4451()
{
	var_45_bool = 0; // 0x1163 PushV
	func_4945(var_45_bool); // 0x1164 NEW_2
	if(var_45_bool == 0) goto Label_4457; // 0x1166 JumpB
	lshStopSpeech(); // 0x1167 Func
	
Label_4457:
	return 0; // 0x1169 Return
}


func_3945(var_0_object)
{
	var_0_object = 1; // 0xf69 TMovB
	var_46_int = 0; // 0xf6a PushI
	KillTimer(var_46_int); // 0xf6b Func
	Stop(); // 0xf6d Func
	return 0; // 0xf6f Return
}


func_4458(var_935_string)
{
	var_936_bool = 0; var_937_int = 0; var_938_bool = 0; var_939_int = 0; var_940_bool = 0; var_941_float = 0; var_942_cvector = CVector(0,0,0); var_943_cvector = CVector(0,0,0); var_944_bool = 0; var_945_int = 0; var_946_bool = 0; var_947_int = 0; var_948_bool = 0; var_949_float = 0; var_950_cvector = CVector(0,0,0); var_951_cvector = CVector(0,0,0); // 0x116a PushV
	IsExisting3DSound(var_944_bool, var_935_string); // 0x116b Func
	var_952_bool = var_944_bool == 0; // 0x116d Not
	if(var_952_bool == 0) goto Label_4483; // 0x116e JumpB
	var_945_int = 0; // 0x116f MovI
	
Label_4464:
	var_953_int = 1; // 0x1170 PushI
	var_954_int = var_945_int + var_953_int; // 0x1171 Add
	var_955_int = var_935_string + var_954_int; // 0x1172 Add
	IsExisting3DSound(var_946_bool, var_955_int); // 0x1173 Func
	var_956_bool = var_946_bool == 0; // 0x1175 Not
	if(var_956_bool == 0) goto Label_4472; // 0x1176 JumpB
	goto Label_4475; // 0x1177 Jump
	
Label_4475:
	var_957_bool = var_945_int == 0; // 0x117b Not
	if(var_957_bool == 0) goto Label_4478; // 0x117c JumpB
	return 16; // 0x117d Return
	
Label_4478:
	irand(var_947_int, var_945_int); // 0x117e Func
	var_958_int = 1; // 0x1180 PushI
	var_959_int = var_947_int + var_958_int; // 0x1181 Add
	var_935_string = var_935_string + var_959_int; // 0x1182 Add2
	
Label_4483:
	Is3DSoundLoaded(var_948_bool, var_935_string); // 0x1183 Func
	var_960_bool = var_948_bool; // 0x1185 Push
	if(var_960_bool == 0) goto Label_4498; // 0x1186 JumpB
	GetEyesHeight(var_949_float); // 0x1187 Func
	GetDirection(var_950_cvector); // 0x1189 Func
	var_961_int = 50; // 0x118b PushI
	var_951_cvector = var_950_cvector * var_961_int; // 0x118c Mult2
	var_962_float = GetByIndex(var_951_cvector, 1); // 0x118d PushE
	var_962_float = var_962_float + var_949_float; // 0x118e Add2
	SetByIndex(var_951_cvector, 1) = var_962_float; // 0x118f PopE
	PlayGlobalSound(var_935_string, var_951_cvector); // 0x1190 Func
	
Label_4498:
	return 16; // 0x1192 Return
	
Label_4472:
	var_963_int = 1; // 0x1178 PushI
	var_945_int = var_945_int + var_963_int; // 0x1179 Add2
	goto Label_4464; // 0x117a Jump
}


func_2923(var_7_bool, var_716_object)
{
	var_7_bool = var_716_object; // 0xb6c TMov
	var_726_int = 3; // 0xb6d PushI
	var_727_int = 1; // 0xb6e PushI
	SetTimer(var_726_int, var_727_int); // 0xb6f Func
	var_728_object = Obj(); var_729_bool = 0; var_730_float = 0; // 0xb71 PushV
	var_728_object = var_716_object; // 0xb72 Mov
	var_729_bool = 0; // 0xb73 MovB
	var_730_float = 150.0; // 0xb74 MovF
	func_2965(var_721_bool, var_722_bool, var_723_float, var_724_int, var_725_object, var_716_object, var_728_object, var_729_bool, var_730_float); // 0xb75 NEW_2
	var_1209_int = 3; // 0xb77 PushI
	KillTimer(var_1209_int); // 0xb78 Func
	return 0; // 0xb7a Return
}


func_1900()
{
	var_127_int = 0; var_128_int = 0; var_129_int = 0; var_130_int = 0; var_131_bool = 0; var_132_float = 0; var_133_bool = 0; var_134_int = 0; var_135_int = 0; var_136_int = 0; var_137_int = 0; var_138_bool = 0; var_139_float = 0; var_140_bool = 0; // 0x76c PushV
	WaitForAnimEnd(); // 0x76d Func
	var_141_bool = 0; // 0x76f PushV
	func_4317(var_141_bool); // 0x770 NEW_2
	var_142_bool = var_141_bool == 0; // 0x772 Not
	if(var_142_bool == 0) goto Label_1909; // 0x773 JumpB
	return 14; // 0x774 Return
	
Label_1909:
	var_143_int = 0; // 0x775 PushV
	func_4596(var_143_int); // 0x776 NEW_2
	var_134_int = var_143_int; // 0x777 Mov
	var_135_int = 0; // 0x779 MovI
	
Label_1914:
	var_156_bool = 0; // 0x77a PushV
	var_156_bool = 0; // 0x77b MovB
	var_157_int = 5; // 0x77c PushI
	var_158_bool = var_135_int < var_157_int; // 0x77d LT
	if(var_158_bool == 0) goto Label_1924; // 0x77e JumpB
	var_159_bool = 0; // 0x77f PushV
	func_4317(var_159_bool); // 0x780 NEW_2
	if(var_159_bool == 0) goto Label_1924; // 0x782 JumpB
	var_156_bool = 1; // 0x783 MovB
	
Label_1924:
	if(var_156_bool == 0) goto Label_1976; // 0x784 JumpB
	var_160_int = 3; // 0x785 PushI
	irand(var_136_int, var_160_int); // 0x786 Func
	var_161_int = 0; // 0x788 PushI
	var_162_bool = var_136_int == var_161_int; // 0x789 Eq
	if(var_162_bool == 0) goto Label_1948; // 0x78a JumpB
	var_163_int = var_134_int; // 0x78b Push
	if(var_163_int == 0) goto Label_1947; // 0x78c JumpB
	irand(var_137_int, var_134_int); // 0x78d Func
	var_164_string = "all"; // 0x78f PushS
	var_165_string = ""; var_166_int = 0; // 0x790 PushV
	var_166_int = var_137_int; // 0x791 Mov
	func_4589(var_165_string, var_166_int); // 0x792 NEW_2
	PlayAnimation(var_164_string, var_165_string); // 0x794 Func
	WaitForAnimEnd(var_138_bool); // 0x796 Func
	var_167_bool = var_138_bool == 0; // 0x798 Not
	if(var_167_bool == 0) goto Label_1947; // 0x799 JumpB
	goto Label_1976; // 0x79a Jump
	
Label_1976:
	ResetAAS(); // 0x7b8 Func
	return 14; // 0x7ba Return
	
Label_1947:
	goto Label_1965; // 0x79b Jump
	
Label_1965:
	var_168_bool = 0; // 0x7ad PushV
	func_1979(var_168_bool); // 0x7ae NEW_2
	var_169_bool = var_168_bool == 0; // 0x7b0 Not
	if(var_169_bool == 0) goto Label_1971; // 0x7b1 JumpB
	goto Label_1976; // 0x7b2 Jump
	
Label_1971:
	ResetAAS(); // 0x7b3 Func
	var_170_int = 1; // 0x7b5 PushI
	var_135_int = var_135_int + var_170_int; // 0x7b6 Add2
	goto Label_1914; // 0x7b7 Jump
	
Label_1948:
	var_171_int = 1; // 0x79c PushI
	var_172_bool = var_136_int == var_171_int; // 0x79d Eq
	if(var_172_bool == 0) goto Label_1962; // 0x79e JumpB
	var_173_int = 4; // 0x79f PushI
	rand(var_139_float, var_173_int); // 0x7a0 Func
	var_174_int = 1; // 0x7a2 PushI
	var_175_int = var_139_float + var_174_int; // 0x7a3 Add
	Sleep(var_175_int, var_140_bool); // 0x7a4 Func
	var_176_bool = var_140_bool == 0; // 0x7a6 Not
	if(var_176_bool == 0) goto Label_1961; // 0x7a7 JumpB
	goto Label_1976; // 0x7a8 Jump
	
Label_1961:
	goto Label_1965; // 0x7a9 Jump
	
Label_1962:
	var_177_int = var_135_int; // 0x7aa Push
	if(var_177_int == 0) goto Label_1965; // 0x7ab JumpB
	goto Label_1976; // 0x7ac Jump
}


func_4976(var_526_bool, var_527_int)
{
	var_528_int = 0; var_529_int = 0; // 0x1370 PushV
	var_530_string = "b9q03Bonfire"; // 0x1371 PushS
	var_531_int = var_530_string + var_527_int; // 0x1372 Add
	GetVariable(var_531_int, var_529_int); // 0x1373 Func
	var_532_int = 0; // 0x1375 PushI
	var_526_bool = var_529_int != var_532_int; // 0x1376 Neq2
	return 2; // 0x1377 Return
}


func_3443(var_1173_bool, var_1174_float)
{
	var_1175_float = 0; var_1176_bool = 0; var_1177_float = 0; var_1178_bool = 0; // 0xd73 PushV
	rand(var_1177_float); // 0xd74 Func
	var_1179_bool = var_1177_float < var_1174_float; // 0xd76 LT
	if(var_1179_bool == 0) goto Label_3463; // 0xd77 JumpB
	
Label_3448:
	IsAnimationPlaying(var_1178_bool); // 0xd78 Func
	var_1180_bool = var_1178_bool == 0; // 0xd7a Not
	if(var_1180_bool == 0) goto Label_3453; // 0xd7b JumpB
	goto Label_3462; // 0xd7c Jump
	
Label_3462:
	goto Label_3468; // 0xd86 Jump
	
Label_3468:
	var_1173_bool = 0; // 0xd8c MovB
	return 4; // 0xd8d Return
	
Label_3453:
	var_1181_bool = 0; // 0xd7d PushV
	func_3553(var_1181_bool); // 0xd7e NEW_2
	if(var_1181_bool == 0) goto Label_3459; // 0xd80 JumpB
	var_1173_bool = 1; // 0xd81 MovB
	return 4; // 0xd82 Return
	
Label_3459:
	sync(); // 0xd83 Func
	goto Label_3448; // 0xd85 Jump
	
Label_3463:
	WaitForAnimEnd(); // 0xd87 Func
	func_3657(var_1178_bool); // 0xd8a NEW_2
}


func_4984(var_592_int)
{
	var_593_string = ""; var_594_object = Obj(); var_595_string = ""; var_596_object = Obj(); // 0x1378 PushV
	var_595_string = var_592_int; // 0x1379 Mov
	var_597_string = "enable_bonfire"; // 0x137a PushS
	TriggerWorld(var_597_string, var_595_string); // 0x137b Func
	var_598_bool = 0; var_599_string = ""; var_600_string = ""; // 0x137d PushV
	var_599_string = "quest_b9_03"; // 0x137e MovS
	var_600_string = "bonfire_burn"; // 0x137f MovS
	func_4563(var_598_bool, var_599_string, var_600_string); // 0x1380 NEW_2
	var_604_string = "b9q03Bonfire"; // 0x1382 PushS
	var_605_int = var_604_string + var_592_int; // 0x1383 Add
	var_606_int = 1; // 0x1384 PushI
	SetVariable(var_605_int, var_606_int); // 0x1385 Func
	GetScene(var_596_object); // 0x1387 Func
	var_607_string = "b9q03BonfireBurnedByFollower"; // 0x1389 PushS
	var_608_object = Obj(); // 0x138a PushV
	func_4499(var_608_object); // 0x138b NEW_2
	BroadcastMessage(var_607_string, var_608_object, var_596_object); // 0x138d Func
	return 4; // 0x138f Return
}


func_3961(var_854_bool, var_855_object)
{
	var_856_bool = 0; var_857_object = Obj(); // 0xf7a PushV
	var_857_object = var_855_object; // 0xf7b Mov
	func_4137(var_856_bool, var_857_object); // 0xf7c NEW_2
	var_854_bool = var_856_bool; // 0xf7d Mov
	return 0; // 0xf7f Return
}


func_2939(var_1077_float)
{
	var_1077_float = 0.1; // 0xb7c MovF
	return 0; // 0xb7d Return
}


func_2942(var_1084_int)
{
	var_1084_int = 0; // 0xb7f MovI
	return 0; // 0xb80 Return
}


func_3968(var_872_string)
{
	var_872_string = "walk"; // 0xf80 MovS
	return 0; // 0xf81 Return
}


func_2945(var_1145_int)
{
	var_1145_int = 0; // 0xb81 MovI
	return 0; // 0xb82 Return
}


func_3970(var_873_string)
{
	var_873_string = "run"; // 0xf82 MovS
	return 0; // 0xf83 Return
}


func_3972(var_1108_string, var_1109_int)
{
	var_1110_int = 2; // 0xf85 PushI
	var_1111_bool = var_1109_int == var_1110_int; // 0xf86 Eq
	if(var_1111_bool == 0) goto Label_3979; // 0xf87 JumpB
	var_1108_string = "fire"; // 0xf88 MovS
	return 0; // 0xf89 Return
	
Label_3979:
	var_1112_int = 1; // 0xf8b PushI
	var_1113_bool = var_1109_int == var_1112_int; // 0xf8c Eq
	if(var_1113_bool == 0) goto Label_3984; // 0xf8d JumpB
	var_1108_string = "bullet"; // 0xf8e MovS
	return 0; // 0xf8f Return
	
Label_3984:
	var_1108_string = "phys"; // 0xf90 MovS
	return 0; // 0xf91 Return
}


func_1418(var_0_object, var_1_object, var_2_object, var_76_int)
{
	var_77_cvector = CVector(0,0,0); var_78_float = 0; var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_float = 0; // 0x58a PushV
	var_85_int = 120; // 0x58b PushI
	var_86_bool = var_76_int != var_85_int; // 0x58c Neq
	if(var_86_bool == 0) goto Label_1423; // 0x58d JumpB
	return 8; // 0x58e Return
	
Label_1423:
	var_87_bool = var_0_object == 0; // 0x58f NullEq
	if(var_87_bool == 0) goto Label_1432; // 0x590 JumpB
	Stop(); // 0x591 Func
	var_88_int = 1; // 0x593 PushI
	KillTimer(var_88_int); // 0x594 Func
	var_2_object = 1; // 0x596 TMovB
	goto Label_1469; // 0x597 Jump
	
Label_1469:
	return 8; // 0x5bd Return
	
Label_1432:
	GetDirection(var_81_cvector); // 0x598 Func
	var_89_float = 7000.0; // 0x59a PushF
	FindDirLength(var_82_float, var_81_cvector, var_89_float); // 0x59b Func
	var_90_cvector = CVector(0,0,0); var_91_float = 0; // 0x59d PushV
	var_91_float = 1.74533; // 0x59e MovF
	func_1315(var_90_cvector, var_91_float); // 0x59f NEW_2
	var_83_cvector = var_90_cvector; // 0x5a0 Mov
	var_84_float = var_83_cvector | var_83_cvector; // 0x5a2 Or2
	var_120_bool = 0; // 0x5a3 PushV
	var_120_bool = 0; // 0x5a4 MovB
	var_121_float = 2500.0; // 0x5a5 PushF
	var_122_bool = var_84_float >= var_121_float; // 0x5a6 GE
	if(var_122_bool == 0) goto Label_1462; // 0x5a7 JumpB
	var_123_bool = 0; // 0x5a8 PushV
	var_123_bool = 1; // 0x5a9 MovB
	var_124_float = var_82_float * var_82_float; // 0x5aa Mult
	var_125_float = 2.25; // 0x5ab PushF
	var_126_float = var_124_float * var_125_float; // 0x5ac Mult
	var_127_bool = var_84_float >= var_126_float; // 0x5ad GE
	if(var_127_bool == 0) goto Label_1460; // 0x5ae JumpB
	var_128_bool = 0; // 0x5af PushV
	func_1486(var_123_bool, var_128_bool); // 0x5b0 NEW_2
	if(var_128_bool == 0) goto Label_1460; // 0x5b2 JumpB
	var_123_bool = 0; // 0x5b3 MovB
	
Label_1460:
	if(var_123_bool == 0) goto Label_1462; // 0x5b4 JumpB
	var_120_bool = 1; // 0x5b5 MovB
	
Label_1462:
	if(var_120_bool == 0) goto Label_1469; // 0x5b6 JumpB
	Stop(); // 0x5b7 Func
	var_148_cvector = CVector(0,0,0); // 0x5b9 PushV
	func_3986(var_148_cvector); // 0x5ba NEW_2
	var_1_object = var_148_cvector + var_83_cvector; // 0x5bc Add2
}


func_2446(var_614_string)
{
	var_615_bool = 0; var_616_bool = 0; var_617_bool = 0; var_618_bool = 0; // 0x98e PushV
	WaitForAnimEnd(); // 0x98f Func
	var_619_bool = 0; // 0x991 PushV
	func_4317(var_619_bool); // 0x992 NEW_2
	var_620_bool = var_619_bool == 0; // 0x994 Not
	if(var_620_bool == 0) goto Label_2455; // 0x995 JumpB
	return 4; // 0x996 Return
	
Label_2455:
	var_621_string = "all"; // 0x997 PushS
	HasAnimation(var_617_bool, var_621_string, var_614_string); // 0x998 Func
	var_622_bool = var_617_bool == 0; // 0x99a Not
	if(var_622_bool == 0) goto Label_2461; // 0x99b JumpB
	return 4; // 0x99c Return
	
Label_2461:
	var_623_string = "all"; // 0x99d PushS
	PlayAnimation(var_623_string, var_614_string); // 0x99e Func
	WaitForAnimEnd(var_618_bool); // 0x9a0 Func
	return 4; // 0x9a2 Return
}


func_3470(var_0_object, var_966_bool, var_967_float)
{
	var_968_bool = 0; var_969_cvector = CVector(0,0,0); var_970_cvector = CVector(0,0,0); var_971_cvector = CVector(0,0,0); var_972_float = 0; var_973_bool = 0; var_974_cvector = CVector(0,0,0); var_975_cvector = CVector(0,0,0); var_976_cvector = CVector(0,0,0); var_977_float = 0; // 0xd8e PushV
	
Label_3471:
	IsAnimationPlaying(var_973_bool); // 0xd8f Func
	var_978_bool = var_973_bool == 0; // 0xd91 Not
	if(var_978_bool == 0) goto Label_3476; // 0xd92 JumpB
	goto Label_3514; // 0xd93 Jump
	
Label_3514:
	func_3657(var_977_float); // 0xdbb NEW_2
	var_966_bool = 0; // 0xdbd MovB
	return 10; // 0xdbe Return
	
Label_3476:
	var_979_bool = 0; // 0xd94 PushV
	func_3553(var_979_bool); // 0xd95 NEW_2
	if(var_979_bool == 0) goto Label_3482; // 0xd97 JumpB
	var_966_bool = 1; // 0xd98 MovB
	return 10; // 0xd99 Return
	
Label_3482:
	var_1024_bool = 0; // 0xd9a PushV
	var_1024_bool = 1; // 0xd9b MovB
	var_1025_bool = 0; var_1026_object = Obj(); // 0xd9c PushV
	var_1026_object = var_0_object; // 0xd9d MovT
	func_4137(var_1025_bool, var_1026_object); // 0xd9e NEW_2
	var_1027_bool = var_1025_bool == 0; // 0xda0 Not
	if(var_1027_bool == 0) goto Label_3493; // 0xda1 JumpB
	var_1028_bool = var_4_bool; // 0xda2 PushT
	if(var_1028_bool == 0) goto Label_3493; // 0xda3 JumpB
	var_1024_bool = 0; // 0xda4 MovB
	
Label_3493:
	if(var_1024_bool == 0) goto Label_3496; // 0xda5 JumpB
	var_966_bool = 0; // 0xda6 MovB
	return 10; // 0xda7 Return
	
Label_3496:
	GetPFPosition(var_974_cvector); // 0xda8 TObjFunc
	GetPFPosition(var_975_cvector); // 0xdaa Func
	var_976_cvector = var_974_cvector - var_975_cvector; // 0xdac Sub2
	var_977_float = var_976_cvector | var_976_cvector; // 0xdad Or2
	var_1029_float = var_967_float * var_967_float; // 0xdae Mult
	var_1030_bool = var_977_float < var_1029_float; // 0xdaf LT
	if(var_1030_bool == 0) goto Label_3511; // 0xdb0 JumpB
	var_1031_bool = 0; var_1032_float = 0; // 0xdb1 PushV
	var_1032_float = var_967_float; // 0xdb2 Mov
	func_3297(var_977_float, var_1031_bool, var_1032_float); // 0xdb3 NEW_2
	var_966_bool = 1; // 0xdb5 MovB
	return 10; // 0xdb6 Return
	
Label_3511:
	sync(); // 0xdb7 Func
	goto Label_3471; // 0xdb9 Jump
}


func_3986(var_382_cvector)
{
	var_383_cvector = CVector(0,0,0); var_384_cvector = CVector(0,0,0); // 0xf92 PushV
	GetPosition(var_384_cvector); // 0xf93 Func
	var_382_cvector = var_384_cvector; // 0xf95 Mov
	return 2; // 0xf96 Return
}


func_4499(var_51_object)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0x1193 PushV
	self(var_53_object); // 0x1194 Func
	var_51_object = var_53_object; // 0x1196 Mov
	return 2; // 0x1197 Return
}


func_2965(var_0_object, var_3_string, var_4_bool, var_6_cvector, var_728_object, var_729_bool, var_730_float, var_804_bool, var_904_bool)
{
	var_731_float = 0; var_732_cvector = CVector(0,0,0); var_733_cvector = CVector(0,0,0); var_734_bool = 0; var_735_bool = 0; var_736_float = 0; var_737_cvector = CVector(0,0,0); var_738_float = 0; var_739_cvector = CVector(0,0,0); var_740_bool = 0; var_741_float = 0; var_742_float = 0; var_743_cvector = CVector(0,0,0); var_744_cvector = CVector(0,0,0); var_745_bool = 0; var_746_bool = 0; var_747_float = 0; var_748_cvector = CVector(0,0,0); var_749_float = 0; var_750_cvector = CVector(0,0,0); var_751_bool = 0; var_752_float = 0; // 0xb95 PushV
	func_3223(var_750_cvector, var_751_bool, var_752_float); // 0xb97 NEW_2
	var_6_cvector = 0; // 0xb99 TMovI
	var_775_string = "@GetAttackDistance"; // 0xb9a PushS
	var_776_int = 1; // 0xb9b PushI
	var_777_bool = IsFuncExist(var_728_object, var_775_string, var_776_int); // 0xb9c FuncExist
	if(var_777_bool == 0) goto Label_2979; // 0xb9d JumpB
	GetAttackDistance(var_742_float); // 0xb9e ObjFunc
	var_778_int = 50; // 0xba0 PushI
	var_742_float = var_742_float + var_778_int; // 0xba1 Add2
	goto Label_2980; // 0xba2 Jump
	
Label_2980:
	var_779_int = 150; // 0xba4 PushI
	var_780_bool = var_742_float >= var_779_int; // 0xba5 GE
	if(var_780_bool == 0) goto Label_2984; // 0xba6 JumpB
	var_742_float = 150; // 0xba7 MovI
	
Label_2984:
	var_3_string = 0; // 0xba8 TMovB
	var_0_object = var_728_object; // 0xba9 TMov
	IsPlayerActor(var_0_object, var_745_bool); // 0xbaa Func
	var_781_bool = var_745_bool; // 0xbac Push
	if(var_781_bool == 0) goto Label_2993; // 0xbad JumpB
	var_782_string = "attack"; // 0xbae PushS
	PlayGlobalMusic(var_782_string); // 0xbaf Func
	
Label_2993:
	var_783_bool = var_729_bool; // 0xbb1 Push
	if(var_783_bool == 0) goto Label_2997; // 0xbb2 JumpB
	var_746_bool = 0; // 0xbb3 MovB
	goto Label_2998; // 0xbb4 Jump
	
Label_2998:
	var_784_float = 300.0; // 0xbb6 PushF
	var_747_float = var_784_float + var_742_float; // 0xbb7 Add2
	
Label_3000:
	var_785_bool = 0; // 0xbb8 PushV
	var_785_bool = 0; // 0xbb9 MovB
	var_786_bool = 0; // 0xbba PushV
	var_786_bool = 0; // 0xbbb MovB
	var_787_bool = 0; var_788_object = Obj(); // 0xbbc PushV
	var_788_object = var_0_object; // 0xbbd MovT
	func_4137(var_787_bool, var_788_object); // 0xbbe NEW_2
	if(var_787_bool == 0) goto Label_3012; // 0xbc0 JumpB
	var_789_bool = var_3_string == 0; // 0xbc1 Not
	if(var_789_bool == 0) goto Label_3012; // 0xbc2 JumpB
	var_786_bool = 1; // 0xbc3 MovB
	
Label_3012:
	if(var_786_bool == 0) goto Label_3016; // 0xbc4 JumpB
	var_790_bool = var_4_bool == 0; // 0xbc5 Not
	if(var_790_bool == 0) goto Label_3016; // 0xbc6 JumpB
	var_785_bool = 1; // 0xbc7 MovB
	
Label_3016:
	if(var_785_bool == 0) goto Label_3192; // 0xbc8 JumpB
	func_3657(var_752_float); // 0xbca NEW_2
	GetPFPosition(var_743_cvector); // 0xbcc TObjFunc
	GetPFPosition(var_744_cvector); // 0xbce Func
	var_748_cvector = var_743_cvector - var_744_cvector; // 0xbd0 Sub2
	var_749_float = var_748_cvector | var_748_cvector; // 0xbd1 Or2
	var_796_float = var_747_float * var_747_float; // 0xbd2 Mult
	var_797_bool = var_749_float >= var_796_float; // 0xbd3 GE
	if(var_797_bool == 0) goto Label_3045; // 0xbd4 JumpB
	var_798_bool = 0; var_799_object = Obj(); var_800_float = 0; var_801_float = 0; var_802_bool = 0; var_803_bool = 0; // 0xbd5 PushV
	var_799_object = var_0_object; // 0xbd6 MovT
	var_800_float = var_742_float; // 0xbd7 Mov
	var_801_float = 1000.0; // 0xbd8 MovF
	var_802_bool = 1; // 0xbd9 MovB
	var_803_bool = 0; // 0xbda MovB
	TaskCall(17); // 0xbdb TaskCall
	func_3675(var_807_object, var_798_bool, var_799_object, var_800_float, var_801_float, var_802_bool, var_803_bool); // 0xbdc NEW_2
	TaskReturn(); // 0xbdd TaskReturn
	var_887_bool = var_804_bool == 0; // 0xbdf Not
	if(var_887_bool == 0) goto Label_3043; // 0xbe0 JumpB
	var_3_string = 1; // 0xbe1 TMovB
	goto Label_3192; // 0xbe2 Jump
	
Label_3192:
	WaitForAnimEnd(); // 0xc78 Func
	var_888_bool = 0; // 0xc7a PushV
	var_888_bool = 1; // 0xc7b MovB
	var_889_string = var_3_string; // 0xc7c PushT
	if(var_889_string == 0) goto Label_3201; // 0xc7d JumpB
	var_890_bool = var_4_bool; // 0xc7e PushT
	if(var_890_bool == 0) goto Label_3201; // 0xc7f JumpB
	var_888_bool = 0; // 0xc80 MovB
	
Label_3201:
	if(var_888_bool == 0) goto Label_3203; // 0xc81 JumpB
	return 22; // 0xc82 Return
	
Label_3203:
	var_891_string = "all"; // 0xc83 PushS
	var_892_string = "attack_off"; // 0xc84 PushS
	PlayAnimation(var_891_string, var_892_string); // 0xc85 Func
	WaitForAnimEnd(); // 0xc87 Func
	var_893_bool = var_745_bool; // 0xc89 Push
	if(var_893_bool == 0) goto Label_3214; // 0xc8a JumpB
	var_894_float = 2.0; // 0xc8b PushF
	Sleep(var_894_float); // 0xc8c Func
	
Label_3214:
	return 22; // 0xc8e Return
	
Label_3043:
	var_746_bool = 0; // 0xbe3 MovB
	goto Label_3191; // 0xbe4 Jump
	
Label_3191:
	goto Label_3000; // 0xc77 Jump
	
Label_3045:
	var_895_float = var_730_float * var_730_float; // 0xbe5 Mult
	var_896_bool = var_749_float >= var_895_float; // 0xbe6 GE
	if(var_896_bool == 0) goto Label_3183; // 0xbe7 JumpB
	GetPFPosition(var_750_cvector); // 0xbe8 TObjFunc
	CanReachByPF(var_751_bool, var_750_cvector); // 0xbea Func
	var_897_bool = var_751_bool == 0; // 0xbec Not
	if(var_897_bool == 0) goto Label_3070; // 0xbed JumpB
	var_898_bool = 0; var_899_object = Obj(); var_900_float = 0; var_901_float = 0; var_902_bool = 0; var_903_bool = 0; // 0xbee PushV
	var_899_object = var_0_object; // 0xbef MovT
	var_900_float = var_742_float; // 0xbf0 Mov
	var_901_float = 1000.0; // 0xbf1 MovF
	var_902_bool = 1; // 0xbf2 MovB
	var_903_bool = 0; // 0xbf3 MovB
	TaskCall(17); // 0xbf4 TaskCall
	func_3675(var_907_object, var_898_bool, var_899_object, var_900_float, var_901_float, var_902_bool, var_903_bool); // 0xbf5 NEW_2
	TaskReturn(); // 0xbf6 TaskReturn
	var_908_bool = var_904_bool == 0; // 0xbf8 Not
	if(var_908_bool == 0) goto Label_3068; // 0xbf9 JumpB
	var_3_string = 1; // 0xbfa TMovB
	goto Label_3192; // 0xbfb Jump
	
Label_3068:
	var_746_bool = 0; // 0xbfc MovB
	goto Label_3000; // 0xbfd Jump
	
Label_3070:
	var_909_bool = var_746_bool == 0; // 0xbfe Not
	if(var_909_bool == 0) goto Label_3101; // 0xbff JumpB
	var_910_object = Obj(); // 0xc00 PushV
	var_910_object = var_0_object; // 0xc01 MovT
	func_4306(); // 0xc02 NEW_2
	var_919_string = "all"; // 0xc04 PushS
	var_920_string = "attack_on"; // 0xc05 PushS
	PlayAnimation(var_919_string, var_920_string); // 0xc06 Func
	WaitForAnimEnd(); // 0xc08 Func
	func_3657(var_752_float); // 0xc0b NEW_2
	StopAsync(); // 0xc0d Func
	var_746_bool = 1; // 0xc0f MovB
	var_921_bool = 0; // 0xc10 PushV
	var_921_bool = 1; // 0xc11 MovB
	var_922_bool = 0; var_923_object = Obj(); // 0xc12 PushV
	var_923_object = var_0_object; // 0xc13 MovT
	func_4137(var_922_bool, var_923_object); // 0xc14 NEW_2
	var_924_bool = var_922_bool == 0; // 0xc16 Not
	if(var_924_bool == 0) goto Label_3099; // 0xc17 JumpB
	var_925_bool = var_4_bool; // 0xc18 PushT
	if(var_925_bool == 0) goto Label_3099; // 0xc19 JumpB
	var_921_bool = 0; // 0xc1a MovB
	
Label_3099:
	if(var_921_bool == 0) goto Label_3101; // 0xc1b JumpB
	goto Label_3192; // 0xc1c Jump
	
Label_3101:
	rand(var_752_float); // 0xc1d Func
	var_926_bool = 0; // 0xc1f PushV
	var_926_bool = 1; // 0xc20 MovB
	var_927_float = 0.6; // 0xc21 PushF
	var_928_bool = var_752_float < var_927_float; // 0xc22 LT
	if(var_928_bool == 0) goto Label_3113; // 0xc23 JumpB
	var_929_bool = 0; // 0xc24 PushV
	func_3614(var_926_bool, var_929_bool); // 0xc25 NEW_2
	if(var_929_bool == 0) goto Label_3113; // 0xc27 JumpB
	var_926_bool = 0; // 0xc28 MovB
	
Label_3113:
	if(var_926_bool == 0) goto Label_3130; // 0xc29 JumpB
	Face(var_0_object); // 0xc2a Func
	func_3662(); // 0xc2d NEW_2
	var_964_string = "all"; // 0xc2f PushS
	var_965_string = "attack_stay"; // 0xc30 PushS
	PlayAnimation(var_964_string, var_965_string); // 0xc31 Func
	var_966_bool = 0; var_967_float = 0; // 0xc33 PushV
	var_967_float = var_730_float; // 0xc34 Mov
	func_3470(var_752_float, var_966_bool, var_967_float); // 0xc35 NEW_2
	StopAsync(); // 0xc37 Func
	goto Label_3182; // 0xc39 Jump
	
Label_3182:
	goto Label_3191; // 0xc6e Jump
	
Label_3130:
	Face(var_0_object); // 0xc3a Func
	var_1191_string = "all"; // 0xc3c PushS
	var_1192_string = "fjump"; // 0xc3d PushS
	PlayAnimation(var_1191_string, var_1192_string); // 0xc3e Func
	WaitForAnimEnd(); // 0xc40 Func
	func_3657(var_752_float); // 0xc43 NEW_2
	var_1193_cvector = CVector(0.0, 0.0, 0.0); // 0xc45 PushVec
	SetSpeed(var_1193_cvector); // 0xc46 Func
	Stop(); // 0xc48 Func
	StopAsync(); // 0xc4a Func
	var_1194_bool = 0; // 0xc4c PushV
	func_3614(var_752_float, var_1194_bool); // 0xc4d NEW_2
	var_1195_bool = var_1194_bool == 0; // 0xc4f Not
	if(var_1195_bool == 0) goto Label_3182; // 0xc50 JumpB
	var_1196_bool = 0; // 0xc51 PushV
	var_1196_bool = 1; // 0xc52 MovB
	var_1197_bool = 0; var_1198_object = Obj(); // 0xc53 PushV
	var_1198_object = var_0_object; // 0xc54 MovT
	func_4137(var_1197_bool, var_1198_object); // 0xc55 NEW_2
	var_1199_bool = var_1197_bool == 0; // 0xc57 Not
	if(var_1199_bool == 0) goto Label_3164; // 0xc58 JumpB
	var_1200_bool = var_4_bool; // 0xc59 PushT
	if(var_1200_bool == 0) goto Label_3164; // 0xc5a JumpB
	var_1196_bool = 0; // 0xc5b MovB
	
Label_3164:
	if(var_1196_bool == 0) goto Label_3166; // 0xc5c JumpB
	goto Label_3192; // 0xc5d Jump
	
Label_3166:
	GetPFPosition(var_743_cvector); // 0xc5e TObjFunc
	GetPFPosition(var_744_cvector); // 0xc60 Func
	var_748_cvector = var_743_cvector - var_744_cvector; // 0xc62 Sub2
	var_749_float = var_748_cvector | var_748_cvector; // 0xc63 Or2
	var_1201_float = var_730_float * var_730_float; // 0xc64 Mult
	var_1202_bool = var_749_float < var_1201_float; // 0xc65 LT
	if(var_1202_bool == 0) goto Label_3182; // 0xc66 JumpB
	var_1203_bool = 0; var_1204_float = 0; // 0xc67 PushV
	var_1204_float = var_730_float; // 0xc68 Mov
	func_3297(var_752_float, var_1203_bool, var_1204_float); // 0xc69 NEW_2
	var_1205_bool = var_1203_bool == 0; // 0xc6b Not
	if(var_1205_bool == 0) goto Label_3182; // 0xc6c JumpB
	goto Label_3192; // 0xc6d Jump
	
Label_3183:
	var_1206_bool = 0; var_1207_float = 0; // 0xc6f PushV
	var_1207_float = var_730_float; // 0xc70 Mov
	func_3297(var_752_float, var_1206_bool, var_1207_float); // 0xc71 NEW_2
	var_1208_bool = var_1206_bool == 0; // 0xc73 Not
	if(var_1208_bool == 0) goto Label_3190; // 0xc74 JumpB
	goto Label_3192; // 0xc75 Jump
	
Label_3190:
	var_746_bool = 1; // 0xc76 MovB
	
Label_2997:
	var_746_bool = 1; // 0xbb5 MovB
	
Label_2979:
	var_742_float = var_730_float; // 0xba3 Mov
}


func_3991(var_1011_cvector)
{
	var_1013_cvector = CVector(0,0,0); var_1014_cvector = CVector(0,0,0); var_1015_cvector = CVector(0,0,0); var_1016_cvector = CVector(0,0,0); // 0xf97 PushV
	GetPosition(var_1015_cvector); // 0xf98 Func
	GetPosition(var_1016_cvector); // 0xf9a ObjFunc
	var_1011_cvector = var_1016_cvector - var_1015_cvector; // 0xf9c Sub2
	return 4; // 0xf9d Return
}


func_5017(var_58_bool, var_59_int)
{
	var_61_int = 1; // 0x139a PushI
	var_62_bool = var_59_int == var_61_int; // 0x139b Eq
	if(var_62_bool == 0) goto Label_5025; // 0x139c JumpB
	var_63_string = "changing state to c_iStateWaitForCommand"; // 0x139d PushS
	Trace(var_63_string); // 0x139e Func
	goto Label_5081; // 0x13a0 Jump
	
Label_5081:
	var_64_int = GlobalVars[2]; // 0x13d9 PushGE
	var_64_int = var_59_int; // 0x13da Mov
	GlobalVars[2] = var_64_int; // 0x13db PopGE
	var_58_bool = 1; // 0x13dc MovB
	return 0; // 0x13dd Return
	
Label_5025:
	var_65_int = 2; // 0x13a1 PushI
	var_66_bool = var_59_int == var_65_int; // 0x13a2 Eq
	if(var_66_bool == 0) goto Label_5032; // 0x13a3 JumpB
	var_67_string = "changing state to c_iStateFollow"; // 0x13a4 PushS
	Trace(var_67_string); // 0x13a5 Func
	goto Label_5081; // 0x13a7 Jump
	
Label_5032:
	var_68_int = 3; // 0x13a8 PushI
	var_69_bool = var_59_int == var_68_int; // 0x13a9 Eq
	if(var_69_bool == 0) goto Label_5039; // 0x13aa JumpB
	var_70_string = "changing state to c_iStateIdleAndFollow"; // 0x13ab PushS
	Trace(var_70_string); // 0x13ac Func
	goto Label_5081; // 0x13ae Jump
	
Label_5039:
	var_71_int = 4; // 0x13af PushI
	var_72_bool = var_59_int == var_71_int; // 0x13b0 Eq
	if(var_72_bool == 0) goto Label_5046; // 0x13b1 JumpB
	var_73_string = "changing state to c_iStateRetreatPlayer"; // 0x13b2 PushS
	Trace(var_73_string); // 0x13b3 Func
	goto Label_5081; // 0x13b5 Jump
	
Label_5046:
	var_74_int = 5; // 0x13b6 PushI
	var_75_bool = var_59_int == var_74_int; // 0x13b7 Eq
	if(var_75_bool == 0) goto Label_5053; // 0x13b8 JumpB
	var_76_string = "changing state to c_iStateBurn"; // 0x13b9 PushS
	Trace(var_76_string); // 0x13ba Func
	goto Label_5081; // 0x13bc Jump
	
Label_5053:
	var_77_int = 0; // 0x13bd PushI
	var_78_bool = var_59_int == var_77_int; // 0x13be Eq
	if(var_78_bool == 0) goto Label_5065; // 0x13bf JumpB
	var_79_int = GlobalVars[6]; // 0x13c0 PushGE
	var_80_int = GlobalVars[2]; // 0x13c1 PushGE
	var_79_int = var_80_int; // 0x13c2 Mov
	GlobalVars[6] = var_79_int; // 0x13c4 PopGE
	var_81_string = "changing state to c_iStateWaitForLoad"; // 0x13c5 PushS
	Trace(var_81_string); // 0x13c6 Func
	goto Label_5081; // 0x13c8 Jump
	
Label_5065:
	var_82_int = 8; // 0x13c9 PushI
	var_83_bool = var_59_int == var_82_int; // 0x13ca Eq
	if(var_83_bool == 0) goto Label_5072; // 0x13cb JumpB
	var_84_string = "changing state to c_iStateGoAway"; // 0x13cc PushS
	Trace(var_84_string); // 0x13cd Func
	goto Label_5081; // 0x13cf Jump
	
Label_5072:
	var_85_int = 9; // 0x13d0 PushI
	var_86_bool = var_59_int == var_85_int; // 0x13d1 Eq
	if(var_86_bool == 0) goto Label_5079; // 0x13d2 JumpB
	var_87_string = "changing state to c_iStateAttack"; // 0x13d3 PushS
	Trace(var_87_string); // 0x13d4 Func
	goto Label_5081; // 0x13d6 Jump
	
Label_5079:
	var_58_bool = 0; // 0x13d7 MovB
	return 0; // 0x13d8 Return
}


func_4505(var_356_cvector, var_357_cvector)
{
	var_358_float = 0; var_359_float = 0; // 0x1199 PushV
	var_360_int = var_357_cvector | var_357_cvector; // 0x119a Or
	var_359_float = sqrt(var_360_int); // 0x119b Sqrt2
	var_361_float = 0.0; // 0x119c PushF
	var_362_bool = var_359_float < var_361_float; // 0x119d LT
	if(var_362_bool == 0) goto Label_4513; // 0x119e JumpB
	var_356_cvector = CVector(0.0, 0.0, 0.0); // 0x119f MovV
	return 2; // 0x11a0 Return
	
Label_4513:
	var_356_cvector = var_357_cvector / var_357_cvector; // 0x11a1 Div2
	return 2; // 0x11a2 Return
}


func_3998(var_1297_float)
{
	var_1300_cvector = CVector(0,0,0); var_1301_cvector = CVector(0,0,0); var_1302_cvector = CVector(0,0,0); var_1303_cvector = CVector(0,0,0); var_1304_cvector = CVector(0,0,0); var_1305_cvector = CVector(0,0,0); // 0xf9e PushV
	GetPosition(var_1303_cvector); // 0xf9f Func
	GetPosition(var_1304_cvector); // 0xfa1 ObjFunc
	var_1305_cvector = var_1304_cvector - var_1303_cvector; // 0xfa3 Sub2
	var_1297_float = var_1305_cvector | var_1305_cvector; // 0xfa4 Or2
	return 6; // 0xfa5 Return
}


func_2467()
{
	StopAnimation(); // 0x9a3 Func
	StopGroup0(); // 0x9a5 Func
	return 0; // 0x9a7 Return
}


func_4515(var_1118_float, var_1119_float, var_1120_float)
{
	var_1123_bool = var_1119_float < var_1120_float; // 0x11a4 LT
	if(var_1123_bool == 0) goto Label_4520; // 0x11a5 JumpB
	var_1118_float = var_1119_float; // 0x11a6 Mov
	goto Label_4521; // 0x11a7 Jump
	
Label_4521:
	return 0; // 0x11a9 Return
	
Label_4520:
	var_1118_float = var_1120_float; // 0x11a8 Mov
}


func_4006(var_827_bool, var_828_object)
{
	var_829_bool = 0; var_830_bool = 0; // 0xfa6 PushV
	IsPlayerActor(var_828_object, var_830_bool); // 0xfa7 Func
	var_827_bool = var_830_bool; // 0xfa9 Mov
	return 2; // 0xfaa Return
}


func_2472(var_2_object)
{
	var_186_object = Obj(); var_187_object = Obj(); // 0x9a8 PushV
	var_188_string = "player"; // 0x9a9 PushS
	FindActor(var_187_object, var_188_string); // 0x9aa Func
	var_189_bool = 0; var_190_object = Obj(); // 0x9ac PushV
	var_190_object = var_187_object; // 0x9ad Mov
	func_4137(var_189_bool, var_190_object); // 0x9ae NEW_2
	var_223_bool = var_189_bool == 0; // 0x9b0 Not
	if(var_223_bool == 0) goto Label_2487; // 0x9b1 JumpB
	var_224_bool = 0; var_225_int = 0; // 0x9b2 PushV
	var_225_int = 1; // 0x9b3 MovI
	func_5017(var_224_bool, var_225_int); // 0x9b4 NEW_2
	return 2; // 0x9b6 Return
	
Label_2487:
	var_226_bool = 0; var_227_object = Obj(); var_228_float = 0; var_229_float = 0; var_230_bool = 0; var_231_bool = 0; // 0x9b7 PushV
	var_227_object = var_187_object; // 0x9b8 Mov
	var_228_float = 250.0; // 0x9b9 MovF
	var_229_float = 6000; // 0x9ba MovI
	var_230_bool = 1; // 0x9bb MovB
	var_231_bool = 1; // 0x9bc MovB
	func_2572(var_186_object, var_187_object, var_226_bool, var_227_object, var_228_float, var_229_float, var_230_bool, var_231_bool); // 0x9bd NEW_2
	if(var_226_bool == 0) goto Label_2502; // 0x9bf JumpB
	var_277_bool = var_2_object == 0; // 0x9c0 Not
	if(var_277_bool == 0) goto Label_2502; // 0x9c1 JumpB
	var_278_bool = 0; var_279_int = 0; // 0x9c2 PushV
	var_279_int = 3; // 0x9c3 MovI
	func_5017(var_278_bool, var_279_int); // 0x9c4 NEW_2
	
Label_2502:
	return 2; // 0x9c6 Return
}


func_4522(var_1128_float, var_1129_float, var_1130_float, var_1131_float)
{
	var_1132_bool = var_1129_float < var_1130_float; // 0x11ab LT
	if(var_1132_bool == 0) goto Label_4527; // 0x11ac JumpB
	var_1128_float = var_1130_float; // 0x11ad Mov
	return 0; // 0x11ae Return
	
Label_4527:
	var_1133_bool = var_1129_float > var_1131_float; // 0x11af GT
	if(var_1133_bool == 0) goto Label_4531; // 0x11b0 JumpB
	var_1128_float = var_1131_float; // 0x11b1 Mov
	return 0; // 0x11b2 Return
	
Label_4531:
	var_1128_float = var_1129_float; // 0x11b3 Mov
	return 0; // 0x11b4 Return
}


func_4011(var_211_bool, var_212_object, var_213_string)
{
	var_214_bool = 0; var_215_bool = 0; // 0xfab PushV
	var_216_string = "HasProperty"; // 0xfac PushS
	var_217_int = 2; // 0xfad PushI
	var_218_bool = IsFuncExist(var_212_object, var_216_string, var_217_int); // 0xfae FuncExist
	var_219_bool = var_218_bool == 0; // 0xfaf Not
	if(var_219_bool == 0) goto Label_4019; // 0xfb0 JumpB
	var_211_bool = 0; // 0xfb1 MovB
	return 2; // 0xfb2 Return
	
Label_4019:
	HasProperty(var_213_string, var_215_bool); // 0xfb3 ObjFunc
	var_211_bool = var_215_bool; // 0xfb5 Mov
	return 2; // 0xfb6 Return
}


func_4533(var_138_float, var_139_cvector, var_140_cvector)
{
	var_141_int = var_139_cvector | var_140_cvector; // 0x11b6 Or
	var_142_int = var_139_cvector | var_139_cvector; // 0x11b7 Or
	var_143_int = var_140_cvector | var_140_cvector; // 0x11b8 Or
	var_144_float = var_142_int * var_143_int; // 0x11b9 Mult
	var_145_float = sqrt(var_144_float); // 0x11ba Sqrt
	var_138_float = var_141_int / var_141_int; // 0x11bb Div2
	return 0; // 0x11bc Return
}


func_4023(var_1080_float, var_1081_object, var_1082_float, var_1083_int)
{
	var_1087_int = 0; var_1088_string = ""; var_1089_int = 0; var_1090_float = 0; var_1091_float = 0; var_1092_float = 0; var_1093_int = 0; var_1094_string = ""; var_1095_int = 0; var_1096_float = 0; var_1097_float = 0; var_1098_float = 0; // 0xfb7 PushV
	var_1099_bool = 0; var_1100_object = Obj(); var_1101_string = ""; // 0xfb8 PushV
	var_1100_object = var_1081_object; // 0xfb9 Mov
	var_1101_string = "health"; // 0xfba MovS
	func_4011(var_1099_bool, var_1100_object, var_1101_string); // 0xfbb NEW_2
	var_1102_bool = var_1099_bool == 0; // 0xfbd Not
	if(var_1102_bool == 0) goto Label_4033; // 0xfbe JumpB
	var_1080_float = 0.0; // 0xfbf MovF
	return 12; // 0xfc0 Return
	
Label_4033:
	var_1103_bool = 0; var_1104_object = Obj(); var_1105_string = ""; // 0xfc1 PushV
	var_1104_object = var_1081_object; // 0xfc2 Mov
	var_1105_string = "armor"; // 0xfc3 MovS
	func_4011(var_1103_bool, var_1104_object, var_1105_string); // 0xfc4 NEW_2
	var_1106_bool = var_1103_bool == 0; // 0xfc6 Not
	if(var_1106_bool == 0) goto Label_4042; // 0xfc7 JumpB
	var_1093_int = 0; // 0xfc8 MovI
	goto Label_4045; // 0xfc9 Jump
	
Label_4045:
	var_1107_string = "armor_"; // 0xfcd PushS
	var_1108_string = ""; var_1109_int = 0; // 0xfce PushV
	var_1109_int = var_1083_int; // 0xfcf Mov
	func_3972(var_1108_string, var_1109_int); // 0xfd0 NEW_2
	var_1094_string = var_1107_string + var_1108_string; // 0xfd2 Add2
	var_1114_bool = 0; var_1115_object = Obj(); var_1116_string = ""; // 0xfd3 PushV
	var_1115_object = var_1081_object; // 0xfd4 Mov
	var_1116_string = var_1094_string; // 0xfd5 Mov
	func_4011(var_1114_bool, var_1115_object, var_1116_string); // 0xfd6 NEW_2
	var_1117_bool = var_1114_bool == 0; // 0xfd8 Not
	if(var_1117_bool == 0) goto Label_4060; // 0xfd9 JumpB
	var_1095_int = 0; // 0xfda MovI
	goto Label_4062; // 0xfdb Jump
	
Label_4062:
	var_1118_float = 0; var_1119_float = 0; var_1120_float = 0; // 0xfde PushV
	var_1121_int = var_1093_int + var_1095_int; // 0xfdf Add
	var_1122_float = 100.0; // 0xfe0 PushF
	var_1119_float = var_1121_int / var_1121_int; // 0xfe1 Div2
	var_1120_float = 1; // 0xfe2 MovI
	func_4515(var_1118_float, var_1119_float, var_1120_float); // 0xfe3 NEW_2
	var_1096_float = var_1118_float; // 0xfe4 Mov
	var_1124_string = "health"; // 0xfe6 PushS
	GetProperty(var_1124_string, var_1097_float); // 0xfe7 ObjFunc
	var_1125_int = 1; // 0xfe9 PushI
	var_1126_int = var_1125_int - var_1096_float; // 0xfea Sub
	var_1098_float = var_1082_float * var_1126_int; // 0xfeb Mult2
	var_1127_string = "health"; // 0xfec PushS
	var_1128_float = 0; var_1129_float = 0; var_1130_float = 0; var_1131_float = 0; // 0xfed PushV
	var_1129_float = var_1097_float - var_1098_float; // 0xfee Sub2
	var_1130_float = 0; // 0xfef MovI
	var_1131_float = 1; // 0xff0 MovI
	func_4522(var_1128_float, var_1129_float, var_1130_float, var_1131_float); // 0xff1 NEW_2
	SetProperty(var_1127_string, var_1128_float); // 0xff3 ObjFunc
	var_1134_bool = 0; var_1135_object = Obj(); // 0xff5 PushV
	var_1135_object = var_1081_object; // 0xff6 Mov
	func_4006(var_1134_bool, var_1135_object); // 0xff7 NEW_2
	if(var_1134_bool == 0) goto Label_4094; // 0xff9 JumpB
	var_1136_float = 0; // 0xffa PushV
	var_1136_float = -var_1098_float; // 0xffb Neg2
	func_4546(var_1136_float); // 0xffc NEW_2
	
Label_4094:
	var_1080_float = var_1098_float; // 0xffe Mov
	return 12; // 0xfff Return
	
Label_4060:
	GetProperty(var_1094_string, var_1095_int); // 0xfdc ObjFunc
	
Label_4042:
	var_1144_string = "armor"; // 0xfca PushS
	GetProperty(var_1144_string, var_1093_int); // 0xfcb ObjFunc
}


func_1979(var_168_bool)
{
	var_168_bool = 1; // 0x7bb MovB
	return 0; // 0x7bc Return
}


func_1981()
{
	StopAnimation(); // 0x7bd Func
	StopGroup0(); // 0x7bf Func
	return 0; // 0x7c1 Return
}


func_1470(var_2_object)
{
	Stop(); // 0x5be Func
	var_43_int = 120; // 0x5c0 PushI
	KillTimer(var_43_int); // 0x5c1 Func
	var_2_object = 1; // 0x5c3 TMovB
	return 0; // 0x5c4 Return
}


func_3519(var_0_object, var_981_bool)
{
	var_982_cvector = CVector(0,0,0); var_983_cvector = CVector(0,0,0); var_984_cvector = CVector(0,0,0); var_985_float = 0; var_986_float = 0; var_987_cvector = CVector(0,0,0); var_988_cvector = CVector(0,0,0); var_989_cvector = CVector(0,0,0); var_990_float = 0; var_991_float = 0; // 0xdbf PushV
	var_992_bool = 0; // 0xdc0 PushV
	var_992_bool = 1; // 0xdc1 MovB
	var_993_bool = 0; var_994_object = Obj(); // 0xdc2 PushV
	var_994_object = var_0_object; // 0xdc3 MovT
	func_4137(var_993_bool, var_994_object); // 0xdc4 NEW_2
	var_995_bool = var_993_bool == 0; // 0xdc6 Not
	if(var_995_bool == 0) goto Label_3531; // 0xdc7 JumpB
	var_996_bool = var_4_bool; // 0xdc8 PushT
	if(var_996_bool == 0) goto Label_3531; // 0xdc9 JumpB
	var_992_bool = 0; // 0xdca MovB
	
Label_3531:
	if(var_992_bool == 0) goto Label_3534; // 0xdcb JumpB
	var_981_bool = 0; // 0xdcc MovB
	return 10; // 0xdcd Return
	
Label_3534:
	var_997_bool = 0; // 0xdce PushV
	func_3614(var_991_float, var_997_bool); // 0xdcf NEW_2
	if(var_997_bool == 0) goto Label_3551; // 0xdd1 JumpB
	GetPFPosition(var_987_cvector); // 0xdd2 TObjFunc
	GetPFPosition(var_988_cvector); // 0xdd4 Func
	var_989_cvector = var_987_cvector - var_988_cvector; // 0xdd6 Sub2
	var_990_float = var_989_cvector | var_989_cvector; // 0xdd7 Or2
	GetAttackDistance(var_991_float); // 0xdd8 TObjFunc
	var_998_int = 50; // 0xdda PushI
	var_991_float = var_991_float + var_998_int; // 0xddb Add2
	var_999_float = var_991_float * var_991_float; // 0xddc Mult
	var_981_bool = var_990_float <= var_999_float; // 0xddd LE2
	return 10; // 0xdde Return
	
Label_3551:
	var_981_bool = 0; // 0xddf MovB
	return 10; // 0xde0 Return
}


func_4541(var_129_int, var_130_string)
{
	var_131_int = 0; var_132_int = 0; // 0x11bd PushV
	GetVariable(var_130_string, var_132_int); // 0x11be Func
	var_129_int = var_132_int; // 0x11c0 Mov
	return 2; // 0x11c1 Return
}


func_1986(var_0_object)
{
	var_287_object = Obj(); var_288_float = 0; var_289_object = Obj(); var_290_float = 0; // 0x7c2 PushV
	var_291_int = 2; // 0x7c3 PushI
	var_292_int = 1; // 0x7c4 PushI
	SetTimer(var_291_int, var_292_int); // 0x7c5 Func
	var_293_string = "player"; // 0x7c7 PushS
	FindActor(var_289_object, var_293_string); // 0x7c8 Func
	var_294_int = 4; // 0x7ca PushI
	rand(var_290_float, var_294_int); // 0x7cb Func
	var_295_int = 1; // 0x7cd PushI
	var_296_bool = var_290_float > var_295_int; // 0x7ce GT
	if(var_296_bool == 0) goto Label_2012; // 0x7cf JumpB
	var_297_object = Obj(); // 0x7d0 PushV
	var_297_object = var_289_object; // 0x7d1 Mov
	func_4440(var_297_object); // 0x7d2 NEW_2
	var_304_int = 2; // 0x7d4 PushI
	var_305_int = var_290_float + var_304_int; // 0x7d5 Add
	Sleep(var_305_int); // 0x7d6 Func
	var_306_string = "head"; // 0x7d8 PushS
	UnlookAsync(var_306_string); // 0x7d9 Func
	goto Label_2016; // 0x7db Jump
	
Label_2016:
	var_307_bool = var_0_object == 0; // 0x7e0 Not
	if(var_307_bool == 0) goto Label_2022; // 0x7e1 JumpB
	var_308_bool = 0; var_309_int = 0; // 0x7e2 PushV
	var_309_int = 2; // 0x7e3 MovI
	func_5017(var_308_bool, var_309_int); // 0x7e4 NEW_2
	
Label_2022:
	var_310_int = 2; // 0x7e6 PushI
	KillTimer(var_310_int); // 0x7e7 Func
	return 4; // 0x7e9 Return
	
Label_2012:
	var_311_int = 2; // 0x7dc PushI
	var_312_int = var_290_float + var_311_int; // 0x7dd Add
	Sleep(var_312_int); // 0x7de Func
}


func_4546(var_1136_float)
{
	var_1137_object = Obj(); var_1138_object = Obj(); // 0x11c2 PushV
	CreateFloatVector(var_1138_object); // 0x11c3 Func
	add(var_1136_float); // 0x11c5 ObjFunc
	var_1139_int = 0; // 0x11c7 PushI
	var_1140_bool = var_1136_float < var_1139_int; // 0x11c8 LT
	if(var_1140_bool == 0) goto Label_4558; // 0x11c9 JumpB
	var_1141_float = 0.7; // 0x11ca PushF
	var_1142_int = 500; // 0x11cb PushI
	RumblePlay(var_1141_float, var_1142_int); // 0x11cc Func
	
Label_4558:
	var_1143_int = 15; // 0x11ce PushI
	SendWorldWndMessage(var_1143_int, var_1138_object); // 0x11cf Func
	return 2; // 0x11d1 Return
}


func_1486(var_0_object, var_128_bool)
{
	var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_cvector = CVector(0,0,0); // 0x5ce PushV
	GetDirection(var_131_cvector); // 0x5cf Func
	var_133_cvector = CVector(0,0,0); var_134_object = Obj(); // 0x5d1 PushV
	var_134_object = var_0_object; // 0x5d2 MovT
	func_3991(var_134_object); // 0x5d3 NEW_2
	var_132_cvector = var_133_cvector; // 0x5d4 Mov
	var_139_float = 0; var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); // 0x5d6 PushV
	var_140_cvector = var_131_cvector; // 0x5d7 Mov
	var_141_cvector = var_132_cvector; // 0x5d8 Mov
	func_4533(var_139_float, var_140_cvector, var_141_cvector); // 0x5d9 NEW_2
	var_147_float = -0.34202; // 0x5db PushF
	var_128_bool = var_139_float >= var_147_float; // 0x5dc GE2
	return 4; // 0x5dd Return
}


func_4563(var_598_bool, var_599_string, var_600_string)
{
	var_601_object = Obj(); var_602_object = Obj(); // 0x11d3 PushV
	FindActor(var_602_object, var_599_string); // 0x11d4 Func
	var_603_bool = var_602_object == 0; // 0x11d6 NullEq
	if(var_603_bool == 0) goto Label_4570; // 0x11d7 JumpB
	var_598_bool = 0; // 0x11d8 MovB
	return 2; // 0x11d9 Return
	
Label_4570:
	Trigger(var_602_object, var_600_string); // 0x11da Func
	var_598_bool = 1; // 0x11dc MovB
	return 2; // 0x11dd Return
}


func_982(var_2_object)
{
	Stop(); // 0x3d6 Func
	var_43_int = 120; // 0x3d8 PushI
	KillTimer(var_43_int); // 0x3d9 Func
	var_2_object = 1; // 0x3db TMovB
	return 0; // 0x3dc Return
}


func_1502(var_1219_object)
{
	var_1224_int = 1; // 0x5df PushI
	var_1225_int = 3; // 0x5e0 PushI
	SetTimer(var_1224_int, var_1225_int); // 0x5e1 Func
	var_1226_object = Obj(); // 0x5e3 PushV
	var_1226_object = var_1219_object; // 0x5e4 Mov
	func_1592(var_1222_cvector, var_1223_bool, var_1219_object, var_1226_object); // 0x5e5 NEW_2
	var_1288_int = 1; // 0x5e7 PushI
	KillTimer(var_1288_int); // 0x5e8 Func
	return 0; // 0x5ea Return
}


func_5086(var_77_object)
{
	var_78_string = "changing state to c_iStateAttack"; // 0x13df PushS
	Trace(var_78_string); // 0x13e0 Func
	var_79_int = GlobalVars[2]; // 0x13e2 PushGE
	var_79_int = 9; // 0x13e3 MovI
	GlobalVars[2] = var_79_int; // 0x13e4 PopGE
	var_80_object = GlobalVars[5]; // 0x13e5 PushGE
	var_80_object = var_77_object; // 0x13e6 Mov
	GlobalVars[5] = var_80_object; // 0x13e7 PopGE
	return 0; // 0x13e8 Return
}


func_4575(var_66_float)
{
	var_67_float = 0; var_68_float = 0; // 0x11df PushV
	GetGameTime(var_68_float); // 0x11e0 Func
	var_66_float = var_68_float; // 0x11e2 Mov
	return 2; // 0x11e3 Return
}


func_3553(var_979_bool)
{
	var_980_bool = 0; // 0xde1 PushV
	var_980_bool = 0; // 0xde2 MovB
	var_981_bool = 0; // 0xde3 PushV
	func_3519(var_980_bool, var_981_bool); // 0xde4 NEW_2
	if(var_981_bool == 0) goto Label_3564; // 0xde6 JumpB
	var_1000_bool = 0; // 0xde7 PushV
	func_3569(var_979_bool, var_980_bool, var_1000_bool); // 0xde8 NEW_2
	if(var_1000_bool == 0) goto Label_3564; // 0xdea JumpB
	var_980_bool = 1; // 0xdeb MovB
	
Label_3564:
	if(var_980_bool == 0) goto Label_3567; // 0xdec JumpB
	var_979_bool = 1; // 0xded MovB
	return 0; // 0xdee Return
	
Label_3567:
	var_979_bool = 0; // 0xdef MovB
	return 0; // 0xdf0 Return
}


func_4580(var_791_object)
{
	var_792_bool = 0; var_793_bool = 0; // 0x11e4 PushV
	IsPlayerActor(var_791_object, var_793_bool); // 0x11e5 Func
	var_794_bool = var_793_bool; // 0x11e7 Push
	if(var_794_bool == 0) goto Label_4588; // 0x11e8 JumpB
	var_795_string = "attack"; // 0x11e9 PushS
	PlayGlobalMusic(var_795_string); // 0x11ea Func
	
Label_4588:
	return 2; // 0x11ec Return
}


func_998(var_0_object, var_94_bool)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0x3e6 PushV
	GetDirection(var_97_cvector); // 0x3e7 Func
	var_99_cvector = CVector(0,0,0); var_100_object = Obj(); // 0x3e9 PushV
	var_100_object = var_0_object; // 0x3ea MovT
	func_3991(var_100_object); // 0x3eb NEW_2
	var_98_cvector = var_99_cvector; // 0x3ec Mov
	var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); // 0x3ee PushV
	var_106_cvector = var_97_cvector; // 0x3ef Mov
	var_107_cvector = var_98_cvector; // 0x3f0 Mov
	func_4533(var_105_float, var_106_cvector, var_107_cvector); // 0x3f1 NEW_2
	var_113_float = -0.34202; // 0x3f3 PushF
	var_94_bool = var_105_float >= var_113_float; // 0x3f4 GE2
	return 4; // 0x3f5 Return
}


func_5097(var_92_object)
{
	var_93_string = "changing state to c_iStateRetreatPDamage"; // 0x13ea PushS
	Trace(var_93_string); // 0x13eb Func
	var_94_int = GlobalVars[2]; // 0x13ed PushGE
	var_94_int = 7; // 0x13ee MovI
	GlobalVars[2] = var_94_int; // 0x13ef PopGE
	var_95_object = GlobalVars[4]; // 0x13f0 PushGE
	var_95_object = var_92_object; // 0x13f1 Mov
	GlobalVars[4] = var_95_object; // 0x13f2 PopGE
	return 0; // 0x13f3 Return
}


func_2027()
{
	StopGroup0(); // 0x7eb Func
	return 0; // 0x7ed Return
}


func_4589(var_149_string, var_150_int)
{
	var_151_string = ""; var_152_string = ""; // 0x11ed PushV
	var_152_string = "idle"; // 0x11ee MovS
	var_153_int = var_150_int; // 0x11ef Push
	if(var_153_int == 0) goto Label_4594; // 0x11f0 JumpB
	var_152_string = var_152_string + var_150_int; // 0x11f1 Add2
	
Label_4594:
	var_149_string = var_152_string; // 0x11f2 Mov
	return 2; // 0x11f3 Return
}


func_3569(var_0_object, var_5_object, var_1000_bool)
{
	var_1001_object = Obj(); var_1002_bool = 0; var_1003_float = 0; var_1004_cvector = CVector(0,0,0); var_1005_cvector = CVector(0,0,0); var_1006_object = Obj(); var_1007_bool = 0; var_1008_float = 0; var_1009_cvector = CVector(0,0,0); var_1010_cvector = CVector(0,0,0); // 0xdf1 PushV
	GetScene(var_1006_object); // 0xdf2 Func
	var_1007_bool = 0; // 0xdf4 MovB
	
Label_3573:
	var_1011_cvector = CVector(0,0,0); var_1012_object = Obj(); // 0xdf5 PushV
	var_1012_object = var_0_object; // 0xdf6 MovT
	func_3991(var_1012_object); // 0xdf7 NEW_2
	var_1017_int = -var_1011_cvector; // 0xdf9 Neg
	FindDirLength(var_1008_float, var_1017_int, var_1007_bool); // 0xdfa Func
	var_1018_bool = var_1008_float < var_5_object; // 0xdfc LT
	if(var_1018_bool == 0) goto Label_3583; // 0xdfd JumpB
	goto Label_3611; // 0xdfe Jump
	
Label_3611:
	var_1000_bool = var_1007_bool; // 0xe1b Mov
	return 10; // 0xe1c Return
	
Label_3583:
	Face(var_0_object); // 0xdff Func
	var_1019_string = "all"; // 0xe01 PushS
	var_1020_string = "bjump"; // 0xe02 PushS
	PlayAnimation(var_1019_string, var_1020_string); // 0xe03 Func
	GetPFPosition(var_1009_cvector); // 0xe05 TObjFunc
	GetPFPosition(var_1010_cvector); // 0xe07 Func
	WaitForAnimEnd(); // 0xe09 Func
	func_3657(var_1010_cvector); // 0xe0c NEW_2
	StopAsync(); // 0xe0e Func
	var_1021_cvector = CVector(0.0, 0.0, 0.0); // 0xe10 PushVec
	SetSpeed(var_1021_cvector); // 0xe11 Func
	var_1007_bool = 1; // 0xe13 MovB
	var_1022_bool = 0; // 0xe14 PushV
	func_3519(var_1010_cvector, var_1022_bool); // 0xe15 NEW_2
	var_1023_bool = var_1022_bool == 0; // 0xe17 Not
	if(var_1023_bool == 0) goto Label_3610; // 0xe18 JumpB
	goto Label_3611; // 0xe19 Jump
	
Label_3610:
	goto Label_3573; // 0xe1a Jump
}


func_4596(var_143_int)
{
	var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_bool = 0; // 0x11f4 PushV
	var_146_int = 0; // 0x11f5 MovI
	
Label_4598:
	var_148_string = "all"; // 0x11f6 PushS
	var_149_string = ""; var_150_int = 0; // 0x11f7 PushV
	var_150_int = var_146_int; // 0x11f8 Mov
	func_4589(var_149_string, var_150_int); // 0x11f9 NEW_2
	HasAnimation(var_147_bool, var_148_string, var_149_string); // 0x11fb Func
	var_154_bool = var_147_bool == 0; // 0x11fd Not
	if(var_154_bool == 0) goto Label_4608; // 0x11fe JumpB
	goto Label_4611; // 0x11ff Jump
	
Label_4611:
	var_143_int = var_146_int; // 0x1203 Mov
	return 4; // 0x1204 Return
	
Label_4608:
	var_155_int = 1; // 0x1200 PushI
	var_146_int = var_146_int + var_155_int; // 0x1201 Add2
	goto Label_4598; // 0x1202 Jump
}


func_1014()
{
	var_320_object = Obj(); var_321_object = Obj(); // 0x3f6 PushV
	
Label_1015:
	var_322_bool = 1; // 0x3f7 PushB
	if(var_322_bool == 0) goto Label_1043; // 0x3f8 JumpB
	var_323_string = "player"; // 0x3f9 PushS
	FindActor(var_321_object, var_323_string); // 0x3fa Func
	var_324_bool = 0; var_325_object = Obj(); // 0x3fc PushV
	var_325_object = var_321_object; // 0x3fd Mov
	func_4137(var_324_bool, var_325_object); // 0x3fe NEW_2
	var_326_bool = var_324_bool == 0; // 0x400 Not
	if(var_326_bool == 0) goto Label_1034; // 0x401 JumpB
	var_327_int = 3; // 0x402 PushI
	Sleep(var_327_int); // 0x403 Func
	var_328_string = var_3_string; // 0x405 PushT
	if(var_328_string == 0) goto Label_1033; // 0x406 JumpB
	goto Label_1043; // 0x407 Jump
	
Label_1043:
	return 2; // 0x413 Return
	
Label_1033:
	goto Label_1015; // 0x409 Jump
	
Label_1034:
	var_329_object = Obj(); // 0x40a PushV
	var_329_object = var_321_object; // 0x40b Mov
	func_1085(var_319_bool, var_320_object, var_321_object, var_329_object); // 0x40c NEW_2
	var_398_string = var_3_string; // 0x40e PushT
	if(var_398_string == 0) goto Label_1041; // 0x40f JumpB
	goto Label_1043; // 0x410 Jump
	
Label_1041:
	var_321_object = 0; // 0x411 SetNull
	goto Label_1015; // 0x412 Jump
}


