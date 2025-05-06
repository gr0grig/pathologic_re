task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool, var_13_bool, var_14_object, var_15_cvector, var_16_bool, var_17_bool, var_18_object, var_19_cvector, var_20_bool, var_21_int, var_22_int, var_23_bool, var_24_bool, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_object, var_31_bool)
{
	var_32_int = 1; // 0xd7 PushI
	if(var_32_int == 0) goto Label_406; // 0xd8 JumpB
	func_3273(); // 0xda NEW_2
	var_34_int = 31712; // 0xdc PushI
	var_35_bool = var_31_bool == var_34_int; // 0xdd Eq
	if(var_35_bool == 0) goto Label_238; // 0xde JumpB
	var_36_object = Obj(); var_37_object = Obj(); // 0xdf PushV
	var_36_object = var_1_object; // 0xe0 MovT
	var_37_object = var_0_object; // 0xe1 MovT
	func_3391(); // 0xe2 NEW_2
	var_39_object = Obj(); var_40_object = Obj(); // 0xe4 PushV
	var_39_object = var_1_object; // 0xe5 MovT
	var_40_object = var_0_object; // 0xe6 MovT
	func_3412(); // 0xe7 NEW_2
	var_95_object = Obj(); var_96_object = Obj(); // 0xe9 PushV
	var_95_object = var_1_object; // 0xea MovT
	var_96_object = var_0_object; // 0xeb MovT
	func_3468(); // 0xec NEW_2
	
Label_238:
	var_121_int = 31714; // 0xee PushI
	var_122_bool = var_31_bool == var_121_int; // 0xef Eq
	if(var_122_bool == 0) goto Label_251; // 0xf0 JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0xf1 PushV
	var_123_object = var_1_object; // 0xf2 MovT
	var_124_object = var_0_object; // 0xf3 MovT
	func_3458(); // 0xf4 NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0xf6 PushV
	var_126_object = var_1_object; // 0xf7 MovT
	var_127_object = var_0_object; // 0xf8 MovT
	func_3463(); // 0xf9 NEW_2
	
Label_251:
	var_136_int = 31661; // 0xfb PushI
	var_137_bool = var_31_bool == var_136_int; // 0xfc Eq
	if(var_137_bool == 0) goto Label_259; // 0xfd JumpB
	var_138_object = Obj(); var_139_object = Obj(); // 0xfe PushV
	var_138_object = var_1_object; // 0xff MovT
	var_139_object = var_0_object; // 0x100 MovT
	func_3396(); // 0x101 NEW_2
	
Label_259:
	var_141_int = 31663; // 0x103 PushI
	var_142_bool = var_31_bool == var_141_int; // 0x104 Eq
	if(var_142_bool == 0) goto Label_267; // 0x105 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x106 PushV
	var_143_object = var_1_object; // 0x107 MovT
	var_144_object = var_0_object; // 0x108 MovT
	func_3391(); // 0x109 NEW_2
	
Label_267:
	var_145_int = 31664; // 0x10b PushI
	var_146_bool = var_31_bool == var_145_int; // 0x10c Eq
	if(var_146_bool == 0) goto Label_275; // 0x10d JumpB
	var_147_object = Obj(); var_148_object = Obj(); // 0x10e PushV
	var_147_object = var_1_object; // 0x10f MovT
	var_148_object = var_0_object; // 0x110 MovT
	func_3401(); // 0x111 NEW_2
	
Label_275:
	var_150_int = 31709; // 0x113 PushI
	var_151_bool = var_30_object == var_150_int; // 0x114 Eq
	if(var_151_bool == 0) goto Label_358; // 0x115 JumpB
	var_152_bool = 0; var_153_object = Obj(); // 0x116 PushV
	var_153_object = var_1_object; // 0x117 MovT
	func_3484(var_153_object); // 0x118 NEW_2
	if(var_152_bool == 0) goto Label_308; // 0x11a JumpB
	var_160_object = Obj(); var_161_object = Obj(); // 0x11b PushV
	var_160_object = var_1_object; // 0x11c MovT
	var_161_object = var_0_object; // 0x11d MovT
	func_3406(); // 0x11e NEW_2
	var_164_string = ""; // 0x120 PushV
	var_164_string = "Neutral"; // 0x121 MovS
	func_192(var_31_bool, var_164_string); // 0x122 NEW_2
	var_181_int = 530322; // 0x124 PushI
	SetMessage(var_181_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_182_int = 530323; // 0x129 PushI
	var_183_int = 31711; // 0x12a PushI
	var_184_int = 31710; // 0x12b PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x12c TObjFunc
	var_185_int = 531020; // 0x12e PushI
	var_186_int = 32350; // 0x12f PushI
	var_187_int = 32349; // 0x130 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x131 TObjFunc
	return 0; // 0x133 Return
	
Label_308:
	var_188_bool = 0; var_189_object = Obj(); // 0x134 PushV
	var_189_object = var_1_object; // 0x135 MovT
	func_3496(var_189_object); // 0x136 NEW_2
	if(var_188_bool == 0) goto Label_328; // 0x138 JumpB
	var_194_string = ""; // 0x139 PushV
	var_194_string = "Neutral"; // 0x13a MovS
	func_192(var_31_bool, var_194_string); // 0x13b NEW_2
	var_195_int = 530326; // 0x13d PushI
	SetMessage(var_195_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_196_int = 530327; // 0x142 PushI
	var_197_int = -1; // 0x143 PushI
	var_198_int = 31714; // 0x144 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_199_string = ""; // 0x148 PushV
	var_199_string = "Neutral"; // 0x149 MovS
	func_192(var_31_bool, var_199_string); // 0x14a NEW_2
	var_200_int = 530270; // 0x14c PushI
	SetMessage(var_200_int); // 0x14d TObjFunc
	ClearReplies(); // 0x14f TObjFunc
	var_201_int = 530271; // 0x151 PushI
	var_202_int = -1; // 0x152 PushI
	var_203_int = 31661; // 0x153 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x154 TObjFunc
	var_204_int = 530273; // 0x156 PushI
	var_205_int = -1; // 0x157 PushI
	var_206_int = 31663; // 0x158 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x159 TObjFunc
	var_207_int = 530274; // 0x15b PushI
	var_208_int = -1; // 0x15c PushI
	var_209_int = 31664; // 0x15d PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x15e TObjFunc
	var_210_int = 530272; // 0x160 PushI
	var_211_int = -1; // 0x161 PushI
	var_212_int = 31662; // 0x162 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x163 TObjFunc
	return 0; // 0x165 Return
	
Label_358:
	var_213_int = 32350; // 0x166 PushI
	var_214_bool = var_30_object == var_213_int; // 0x167 Eq
	if(var_214_bool == 0) goto Label_376; // 0x168 JumpB
	var_215_string = ""; // 0x169 PushV
	var_215_string = "Neutral"; // 0x16a MovS
	func_192(var_31_bool, var_215_string); // 0x16b NEW_2
	var_216_int = 531021; // 0x16d PushI
	SetMessage(var_216_int); // 0x16e TObjFunc
	ClearReplies(); // 0x170 TObjFunc
	var_217_int = 531023; // 0x172 PushI
	var_218_int = 31711; // 0x173 PushI
	var_219_int = 32352; // 0x174 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x175 TObjFunc
	return 0; // 0x177 Return
	
Label_376:
	var_220_int = 31711; // 0x178 PushI
	var_221_bool = var_30_object == var_220_int; // 0x179 Eq
	if(var_221_bool == 0) goto Label_394; // 0x17a JumpB
	var_222_string = ""; // 0x17b PushV
	var_222_string = "Neutral"; // 0x17c MovS
	func_192(var_31_bool, var_222_string); // 0x17d NEW_2
	var_223_int = 530324; // 0x17f PushI
	SetMessage(var_223_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_224_int = 530325; // 0x184 PushI
	var_225_int = -1; // 0x185 PushI
	var_226_int = 31712; // 0x186 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x187 TObjFunc
	return 0; // 0x189 Return
	
Label_394:
	var_3_string = 1; // 0x18a TMovB
	var_227_bool = 0; // 0x18b PushV
	func_3723(var_227_bool); // 0x18c NEW_2
	if(var_227_bool == 0) goto Label_402; // 0x18e JumpB
	lshStopAnimation(); // 0x18f Func
	goto Label_404; // 0x191 Jump
	
Label_404:
	return 0; // 0x194 Return
	
Label_402:
	StopAnimation(); // 0x192 Func
	
Label_406:
	return 0; // 0x196 Return
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x28f PushV
	var_32_object = var_30_bool; // 0x290 Mov
	func_3901(var_30_bool, var_31_bool, var_32_object); // 0x291 NEW_2
	return 0; // 0x293 Return
}


task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x295 PushV
	var_32_object = var_30_bool; // 0x296 Mov
	func_2914(var_31_bool, var_32_object); // 0x297 NEW_2
	if(var_31_bool == 0) goto Label_671; // 0x299 JumpB
	var_35_bool = 0; var_36_int = 0; // 0x29a PushV
	var_36_int = 4; // 0x29b MovI
	func_3786(var_35_bool, var_36_int); // 0x29c NEW_2
	goto Label_675; // 0x29e Jump
	
Label_675:
	return 0; // 0x2a3 Return
	
Label_671:
	var_61_object = Obj(); // 0x29f PushV
	var_61_object = var_30_bool; // 0x2a0 Mov
	func_3848(var_61_object); // 0x2a1 NEW_2
}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_int, var_23_int, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool)
{
	var_33_bool = 0; // 0x2a5 PushV
	var_33_bool = 1; // 0x2a6 MovB
	var_34_bool = 0; var_35_object = Obj(); // 0x2a7 PushV
	var_35_object = var_31_object; // 0x2a8 Mov
	func_2972(var_34_bool, var_35_object); // 0x2a9 NEW_2
	var_68_bool = var_34_bool == 0; // 0x2ab Not
	if(var_68_bool == 0) goto Label_693; // 0x2ac JumpB
	var_69_float = 0; var_70_object = Obj(); // 0x2ad PushV
	var_70_object = var_31_object; // 0x2ae Mov
	func_2906(var_70_object); // 0x2af NEW_2
	var_77_float = 1000000.0; // 0x2b1 PushF
	var_78_bool = var_69_float > var_77_float; // 0x2b2 GT
	if(var_78_bool == 0) goto Label_693; // 0x2b3 JumpB
	var_33_bool = 0; // 0x2b4 MovB
	
Label_693:
	if(var_33_bool == 0) goto Label_695; // 0x2b5 JumpB
	return 0; // 0x2b6 Return
	
Label_695:
	var_79_object = Obj(); // 0x2b7 PushV
	var_79_object = var_31_object; // 0x2b8 Mov
	func_3859(var_79_object); // 0x2b9 NEW_2
	return 0; // 0x2bb Return
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	Stop(); // 0x2bc Func
	StopGroup0(); // 0x2be Func
	var_30_bool = 0; var_31_int = 0; // 0x2c0 PushV
	var_31_int = 0; // 0x2c1 MovI
	func_3786(var_30_bool, var_31_int); // 0x2c2 NEW_2
	return 0; // 0x2c4 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x2cf PushV
	var_32_object = var_30_bool; // 0x2d0 Mov
	func_3901(var_30_bool, var_31_bool, var_32_object); // 0x2d1 NEW_2
	return 0; // 0x2d3 Return
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x2d5 PushV
	var_32_object = var_30_bool; // 0x2d6 Mov
	func_2914(var_31_bool, var_32_object); // 0x2d7 NEW_2
	if(var_31_bool == 0) goto Label_735; // 0x2d9 JumpB
	var_35_bool = 0; var_36_int = 0; // 0x2da PushV
	var_36_int = 4; // 0x2db MovI
	func_3786(var_35_bool, var_36_int); // 0x2dc NEW_2
	goto Label_739; // 0x2de Jump
	
Label_739:
	return 0; // 0x2e3 Return
	
Label_735:
	var_61_object = Obj(); // 0x2df PushV
	var_61_object = var_30_bool; // 0x2e0 Mov
	func_3848(var_61_object); // 0x2e1 NEW_2
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool, var_14_bool, var_15_object, var_16_cvector, var_17_bool, var_18_bool, var_19_object, var_20_cvector, var_21_bool, var_22_int, var_23_int, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool)
{
	var_33_bool = 0; // 0x2e5 PushV
	var_33_bool = 1; // 0x2e6 MovB
	var_34_bool = 0; var_35_object = Obj(); // 0x2e7 PushV
	var_35_object = var_31_object; // 0x2e8 Mov
	func_2972(var_34_bool, var_35_object); // 0x2e9 NEW_2
	var_68_bool = var_34_bool == 0; // 0x2eb Not
	if(var_68_bool == 0) goto Label_757; // 0x2ec JumpB
	var_69_float = 0; var_70_object = Obj(); // 0x2ed PushV
	var_70_object = var_31_object; // 0x2ee Mov
	func_2906(var_70_object); // 0x2ef NEW_2
	var_77_float = 1000000.0; // 0x2f1 PushF
	var_78_bool = var_69_float > var_77_float; // 0x2f2 GT
	if(var_78_bool == 0) goto Label_757; // 0x2f3 JumpB
	var_33_bool = 0; // 0x2f4 MovB
	
Label_757:
	if(var_33_bool == 0) goto Label_759; // 0x2f5 JumpB
	return 0; // 0x2f6 Return
	
Label_759:
	var_79_object = Obj(); // 0x2f7 PushV
	var_79_object = var_31_object; // 0x2f8 Mov
	func_3859(var_79_object); // 0x2f9 NEW_2
	return 0; // 0x2fb Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	Stop(); // 0x2fc Func
	StopGroup0(); // 0x2fe Func
	var_30_bool = 0; var_31_int = 0; // 0x300 PushV
	var_31_int = 0; // 0x301 MovI
	func_3786(var_30_bool, var_31_int); // 0x302 NEW_2
	return 0; // 0x304 Return
}


task_5_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	func_953(var_29_bool); // 0x317 NEW_2
	var_31_bool = 0; var_32_int = 0; // 0x319 PushV
	var_32_int = 0; // 0x31a MovI
	func_3786(var_31_bool, var_32_int); // 0x31b NEW_2
	return 0; // 0x31d Return
}


task_5_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; // 0x385 PushV
	var_39_int = 120; // 0x386 PushI
	var_40_bool = var_30_bool != var_39_int; // 0x387 Neq
	if(var_40_bool == 0) goto Label_906; // 0x388 JumpB
	return 8; // 0x389 Return
	
Label_906:
	var_41_bool = var_0_object == 0; // 0x38a NullEq
	if(var_41_bool == 0) goto Label_915; // 0x38b JumpB
	Stop(); // 0x38c Func
	var_42_int = 1; // 0x38e PushI
	KillTimer(var_42_int); // 0x38f Func
	var_2_object = 1; // 0x391 TMovB
	goto Label_952; // 0x392 Jump
	
Label_952:
	return 8; // 0x3b8 Return
	
Label_915:
	GetDirection(var_35_cvector); // 0x393 Func
	var_43_float = 7000.0; // 0x395 PushF
	FindDirLength(var_36_float, var_35_cvector, var_43_float); // 0x396 Func
	var_44_cvector = CVector(0,0,0); var_45_float = 0; // 0x398 PushV
	var_45_float = 1.74533; // 0x399 MovF
	func_798(var_44_cvector, var_45_float); // 0x39a NEW_2
	var_37_cvector = var_44_cvector; // 0x39b Mov
	var_38_float = var_37_cvector | var_37_cvector; // 0x39d Or2
	var_74_bool = 0; // 0x39e PushV
	var_74_bool = 0; // 0x39f MovB
	var_75_float = 2500.0; // 0x3a0 PushF
	var_76_bool = var_38_float >= var_75_float; // 0x3a1 GE
	if(var_76_bool == 0) goto Label_945; // 0x3a2 JumpB
	var_77_bool = 0; // 0x3a3 PushV
	var_77_bool = 1; // 0x3a4 MovB
	var_78_float = var_36_float * var_36_float; // 0x3a5 Mult
	var_79_float = 2.25; // 0x3a6 PushF
	var_80_float = var_78_float * var_79_float; // 0x3a7 Mult
	var_81_bool = var_38_float >= var_80_float; // 0x3a8 GE
	if(var_81_bool == 0) goto Label_943; // 0x3a9 JumpB
	var_82_bool = 0; // 0x3aa PushV
	func_969(var_77_bool, var_82_bool); // 0x3ab NEW_2
	if(var_82_bool == 0) goto Label_943; // 0x3ad JumpB
	var_77_bool = 0; // 0x3ae MovB
	
Label_943:
	if(var_77_bool == 0) goto Label_945; // 0x3af JumpB
	var_74_bool = 1; // 0x3b0 MovB
	
Label_945:
	if(var_74_bool == 0) goto Label_952; // 0x3b1 JumpB
	Stop(); // 0x3b2 Func
	var_102_cvector = CVector(0,0,0); // 0x3b4 PushV
	func_2894(var_102_cvector); // 0x3b5 NEW_2
	var_1_object = var_102_cvector + var_37_cvector; // 0x3b7 Add2
}


task_5_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_bool, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	func_953(var_30_bool); // 0x3c2 NEW_2
	var_32_object = Obj(); // 0x3c4 PushV
	var_32_object = var_30_bool; // 0x3c5 Mov
	func_3945(); // 0x3c6 NEW_2
	return 0; // 0x3c8 Return
}


task_6_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	StopGroup0(); // 0x3f7 Func
	var_3_string = 1; // 0x3f9 TMovB
	func_1181(var_29_bool); // 0x3fb NEW_2
	var_31_bool = 0; var_32_int = 0; // 0x3fd PushV
	var_32_int = 0; // 0x3fe MovI
	func_3786(var_31_bool, var_32_int); // 0x3ff NEW_2
	return 0; // 0x401 Return
}


task_6_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_int, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; // 0x469 PushV
	var_39_int = 120; // 0x46a PushI
	var_40_bool = var_30_bool != var_39_int; // 0x46b Neq
	if(var_40_bool == 0) goto Label_1134; // 0x46c JumpB
	return 8; // 0x46d Return
	
Label_1134:
	var_41_bool = var_0_object == 0; // 0x46e NullEq
	if(var_41_bool == 0) goto Label_1143; // 0x46f JumpB
	Stop(); // 0x470 Func
	var_42_int = 1; // 0x472 PushI
	KillTimer(var_42_int); // 0x473 Func
	var_2_object = 1; // 0x475 TMovB
	goto Label_1180; // 0x476 Jump
	
Label_1180:
	return 8; // 0x49c Return
	
Label_1143:
	GetDirection(var_35_cvector); // 0x477 Func
	var_43_float = 7000.0; // 0x479 PushF
	FindDirLength(var_36_float, var_35_cvector, var_43_float); // 0x47a Func
	var_44_cvector = CVector(0,0,0); var_45_float = 0; // 0x47c PushV
	var_45_float = 1.74533; // 0x47d MovF
	func_1026(var_44_cvector, var_45_float); // 0x47e NEW_2
	var_37_cvector = var_44_cvector; // 0x47f Mov
	var_38_float = var_37_cvector | var_37_cvector; // 0x481 Or2
	var_74_bool = 0; // 0x482 PushV
	var_74_bool = 0; // 0x483 MovB
	var_75_float = 2500.0; // 0x484 PushF
	var_76_bool = var_38_float >= var_75_float; // 0x485 GE
	if(var_76_bool == 0) goto Label_1173; // 0x486 JumpB
	var_77_bool = 0; // 0x487 PushV
	var_77_bool = 1; // 0x488 MovB
	var_78_float = var_36_float * var_36_float; // 0x489 Mult
	var_79_float = 2.25; // 0x48a PushF
	var_80_float = var_78_float * var_79_float; // 0x48b Mult
	var_81_bool = var_38_float >= var_80_float; // 0x48c GE
	if(var_81_bool == 0) goto Label_1171; // 0x48d JumpB
	var_82_bool = 0; // 0x48e PushV
	func_1197(var_77_bool, var_82_bool); // 0x48f NEW_2
	if(var_82_bool == 0) goto Label_1171; // 0x491 JumpB
	var_77_bool = 0; // 0x492 MovB
	
Label_1171:
	if(var_77_bool == 0) goto Label_1173; // 0x493 JumpB
	var_74_bool = 1; // 0x494 MovB
	
Label_1173:
	if(var_74_bool == 0) goto Label_1180; // 0x495 JumpB
	Stop(); // 0x496 Func
	var_102_cvector = CVector(0,0,0); // 0x498 PushV
	func_2894(var_102_cvector); // 0x499 NEW_2
	var_1_object = var_102_cvector + var_37_cvector; // 0x49b Add2
}


task_6_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_object, var_14_cvector, var_15_bool, var_16_bool, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	func_1181(var_30_bool); // 0x4a6 NEW_2
	var_32_object = Obj(); // 0x4a8 PushV
	var_32_object = var_30_bool; // 0x4a9 Mov
	func_3945(); // 0x4aa NEW_2
	return 0; // 0x4ac Return
}


task_7_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_int, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_int = 0; // 0x4da PushI
	var_32_bool = var_30_bool == var_31_int; // 0x4db Eq
	if(var_32_bool == 0) goto Label_1257; // 0x4dc JumpB
	var_33_bool = var_3_string == 0; // 0x4dd Not
	if(var_33_bool == 0) goto Label_1255; // 0x4de JumpB
	func_1441(var_30_bool); // 0x4e0 NEW_2
	var_35_bool = 0; var_36_int = 0; // 0x4e2 PushV
	var_36_int = 1; // 0x4e3 MovI
	func_3786(var_35_bool, var_36_int); // 0x4e4 NEW_2
	goto Label_1256; // 0x4e6 Jump
	
Label_1256:
	return 0; // 0x4e8 Return
	
Label_1255:
	var_3_string = 0; // 0x4e7 TMovB
	
Label_1257:
	var_61_int = 0; // 0x4e9 PushV
	var_61_int = var_30_bool; // 0x4ea Mov
	func_1389(var_28_bool, var_29_object, var_30_bool, var_61_int); // 0x4eb NEW_2
	return 0; // 0x4ed Return
}


task_7_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x4ef PushV
	var_32_object = var_30_bool; // 0x4f0 Mov
	func_2914(var_31_bool, var_32_object); // 0x4f1 NEW_2
	if(var_31_bool == 0) goto Label_1270; // 0x4f3 JumpB
	var_3_string = 1; // 0x4f4 TMovB
	goto Label_1277; // 0x4f5 Jump
	
Label_1277:
	return 0; // 0x4fd Return
	
Label_1270:
	func_1441(var_30_bool); // 0x4f7 NEW_2
	var_36_object = Obj(); // 0x4f9 PushV
	var_36_object = var_30_bool; // 0x4fa Mov
	func_3848(var_36_object); // 0x4fb NEW_2
}


task_7_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	func_1441(var_29_bool); // 0x4ff NEW_2
	var_31_bool = 0; var_32_int = 0; // 0x501 PushV
	var_32_int = 0; // 0x502 MovI
	func_3786(var_31_bool, var_32_int); // 0x503 NEW_2
	return 0; // 0x505 Return
}


task_7_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_object, var_18_cvector, var_19_bool, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	func_1441(var_30_bool); // 0x5aa NEW_2
	var_32_object = Obj(); // 0x5ac PushV
	var_32_object = var_30_bool; // 0x5ad Mov
	func_3945(); // 0x5ae NEW_2
	return 0; // 0x5b0 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_int = 1; // 0x5cf PushI
	var_32_bool = var_30_bool == var_31_int; // 0x5d0 Eq
	if(var_32_bool == 0) goto Label_1498; // 0x5d1 JumpB
	func_1688(var_30_bool); // 0x5d3 NEW_2
	var_34_bool = 0; var_35_int = 0; // 0x5d5 PushV
	var_35_int = 1; // 0x5d6 MovI
	func_3786(var_34_bool, var_35_int); // 0x5d7 NEW_2
	return 0; // 0x5d9 Return
	
Label_1498:
	var_60_int = 0; // 0x5da PushV
	var_60_int = var_30_bool; // 0x5db Mov
	func_1636(var_28_bool, var_29_object, var_30_bool, var_60_int); // 0x5dc NEW_2
	return 0; // 0x5de Return
}


task_8_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x5e0 PushV
	var_32_object = var_30_bool; // 0x5e1 Mov
	func_2914(var_31_bool, var_32_object); // 0x5e2 NEW_2
	if(var_31_bool == 0) goto Label_1517; // 0x5e4 JumpB
	func_1688(var_30_bool); // 0x5e6 NEW_2
	var_36_bool = 0; var_37_int = 0; // 0x5e8 PushV
	var_37_int = 4; // 0x5e9 MovI
	func_3786(var_36_bool, var_37_int); // 0x5ea NEW_2
	goto Label_1524; // 0x5ec Jump
	
Label_1524:
	return 0; // 0x5f4 Return
	
Label_1517:
	func_1688(var_30_bool); // 0x5ee NEW_2
	var_62_object = Obj(); // 0x5f0 PushV
	var_62_object = var_30_bool; // 0x5f1 Mov
	func_3848(var_62_object); // 0x5f2 NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	func_1688(var_29_bool); // 0x5f6 NEW_2
	var_31_bool = 0; var_32_int = 0; // 0x5f8 PushV
	var_32_int = 0; // 0x5f9 MovI
	func_3786(var_31_bool, var_32_int); // 0x5fa NEW_2
	return 0; // 0x5fc Return
}


task_8_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_object, var_20_int, var_21_int, var_22_bool, var_23_bool, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	func_1688(var_30_bool); // 0x6a1 NEW_2
	var_32_object = Obj(); // 0x6a3 PushV
	var_32_object = var_30_bool; // 0x6a4 Mov
	func_3945(); // 0x6a5 NEW_2
	return 0; // 0x6a7 Return
}


task_9_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	func_1857(var_29_object, var_30_bool); // 0x6c0 NEW_2
	var_34_bool = 0; var_35_object = Obj(); // 0x6c2 PushV
	var_35_object = var_30_bool; // 0x6c3 Mov
	func_3901(var_30_bool, var_34_bool, var_35_object); // 0x6c4 NEW_2
	return 0; // 0x6c6 Return
}


task_9_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_object, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x6c8 PushV
	var_32_object = var_30_bool; // 0x6c9 Mov
	func_2914(var_31_bool, var_32_object); // 0x6ca NEW_2
	if(var_31_bool == 0) goto Label_1749; // 0x6cc JumpB
	func_1857(var_29_object, var_30_bool); // 0x6ce NEW_2
	var_38_bool = 0; var_39_int = 0; // 0x6d0 PushV
	var_39_int = 4; // 0x6d1 MovI
	func_3786(var_38_bool, var_39_int); // 0x6d2 NEW_2
	goto Label_1756; // 0x6d4 Jump
	
Label_1756:
	return 0; // 0x6dc Return
	
Label_1749:
	func_1857(var_29_object, var_30_bool); // 0x6d6 NEW_2
	var_64_object = Obj(); // 0x6d8 PushV
	var_64_object = var_30_bool; // 0x6d9 Mov
	func_3848(var_64_object); // 0x6da NEW_2
}


task_9_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_object, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool)
{
	var_33_bool = 0; // 0x6de PushV
	var_33_bool = 1; // 0x6df MovB
	var_34_bool = 0; var_35_object = Obj(); // 0x6e0 PushV
	var_35_object = var_31_object; // 0x6e1 Mov
	func_2972(var_34_bool, var_35_object); // 0x6e2 NEW_2
	var_68_bool = var_34_bool == 0; // 0x6e4 Not
	if(var_68_bool == 0) goto Label_1774; // 0x6e5 JumpB
	var_69_float = 0; var_70_object = Obj(); // 0x6e6 PushV
	var_70_object = var_31_object; // 0x6e7 Mov
	func_2906(var_70_object); // 0x6e8 NEW_2
	var_77_float = 1000000.0; // 0x6ea PushF
	var_78_bool = var_69_float > var_77_float; // 0x6eb GT
	if(var_78_bool == 0) goto Label_1774; // 0x6ec JumpB
	var_33_bool = 0; // 0x6ed MovB
	
Label_1774:
	if(var_33_bool == 0) goto Label_1776; // 0x6ee JumpB
	return 0; // 0x6ef Return
	
Label_1776:
	func_1857(var_31_object, var_32_bool); // 0x6f1 NEW_2
	var_82_object = Obj(); // 0x6f3 PushV
	var_82_object = var_31_object; // 0x6f4 Mov
	func_3859(var_82_object); // 0x6f5 NEW_2
	return 0; // 0x6f7 Return
}


task_9_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	func_1857(var_28_object, var_29_bool); // 0x6f9 NEW_2
	var_33_bool = 0; var_34_int = 0; // 0x6fb PushV
	var_34_int = 0; // 0x6fc MovI
	func_3786(var_33_bool, var_34_int); // 0x6fd NEW_2
	return 0; // 0x6ff Return
}


task_9_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_int, var_25_bool, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_int = 10; // 0x72b PushI
	var_32_bool = var_30_bool == var_31_int; // 0x72c Eq
	if(var_32_bool == 0) goto Label_1856; // 0x72d JumpB
	var_33_bool = 0; // 0x72e PushV
	func_1819(var_28_bool, var_29_object, var_30_bool, var_33_bool); // 0x72f NEW_2
	if(var_33_bool == 0) goto Label_1850; // 0x731 JumpB
	var_46_bool = var_2_object == 0; // 0x732 Not
	if(var_46_bool == 0) goto Label_1849; // 0x733 JumpB
	var_47_object = Obj(); // 0x734 PushV
	var_47_object = var_4_bool; // 0x735 MovT
	func_3262(var_47_object); // 0x736 NEW_2
	var_2_object = 1; // 0x738 TMovB
	
Label_1849:
	goto Label_1856; // 0x739 Jump
	
Label_1856:
	return 0; // 0x740 Return
	
Label_1850:
	var_54_object = var_2_object; // 0x73a PushT
	if(var_54_object == 0) goto Label_1856; // 0x73b JumpB
	var_55_string = "head"; // 0x73c PushS
	UnlookAsync(var_55_string); // 0x73d Func
	var_2_object = 0; // 0x73f TMovB
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_int, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_int = 2; // 0x7d2 PushI
	var_32_bool = var_30_bool != var_31_int; // 0x7d3 Neq
	if(var_32_bool == 0) goto Label_2006; // 0x7d4 JumpB
	return 0; // 0x7d5 Return
	
Label_2006:
	var_33_bool = 0; var_34_object = Obj(); // 0x7d6 PushV
	var_35_object = Obj(); // 0x7d7 PushV
	func_3321(var_35_object); // 0x7d8 NEW_2
	var_34_object = var_35_object; // 0x7d9 Mov
	func_3961(var_34_object); // 0x7db NEW_2
	var_85_bool = var_33_bool == 0; // 0x7dd Not
	if(var_85_bool == 0) goto Label_2018; // 0x7de JumpB
	func_1998(); // 0x7e0 NEW_2
	
Label_2018:
	return 0; // 0x7e2 Return
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	func_1998(); // 0x7e5 NEW_2
	var_31_bool = 0; var_32_object = Obj(); // 0x7e7 PushV
	var_32_object = var_30_bool; // 0x7e8 Mov
	func_3901(var_30_bool, var_31_bool, var_32_object); // 0x7e9 NEW_2
	var_0_object = var_31_bool; // 0x7ea TMov
	return 0; // 0x7ec Return
}


task_10_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_object, var_26_bool, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x7ee PushV
	var_32_object = var_30_bool; // 0x7ef Mov
	func_2914(var_31_bool, var_32_object); // 0x7f0 NEW_2
	if(var_31_bool == 0) goto Label_2044; // 0x7f2 JumpB
	func_1998(); // 0x7f4 NEW_2
	var_35_bool = 0; var_36_int = 0; // 0x7f6 PushV
	var_36_int = 4; // 0x7f7 MovI
	func_3786(var_35_bool, var_36_int); // 0x7f8 NEW_2
	var_0_object = 1; // 0x7fa TMovB
	goto Label_2052; // 0x7fb Jump
	
Label_2052:
	return 0; // 0x804 Return
	
Label_2044:
	func_1998(); // 0x7fd NEW_2
	var_0_object = 1; // 0x7ff TMovB
	var_61_object = Obj(); // 0x800 PushV
	var_61_object = var_30_bool; // 0x801 Mov
	func_3848(var_61_object); // 0x802 NEW_2
}


task_10_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_object, var_26_object, var_27_bool, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool)
{
	var_33_bool = 0; // 0x806 PushV
	var_33_bool = 1; // 0x807 MovB
	var_34_bool = 0; var_35_object = Obj(); // 0x808 PushV
	var_35_object = var_31_object; // 0x809 Mov
	func_2972(var_34_bool, var_35_object); // 0x80a NEW_2
	var_68_bool = var_34_bool == 0; // 0x80c Not
	if(var_68_bool == 0) goto Label_2070; // 0x80d JumpB
	var_69_float = 0; var_70_object = Obj(); // 0x80e PushV
	var_70_object = var_31_object; // 0x80f Mov
	func_2906(var_70_object); // 0x810 NEW_2
	var_77_float = 1000000.0; // 0x812 PushF
	var_78_bool = var_69_float > var_77_float; // 0x813 GT
	if(var_78_bool == 0) goto Label_2070; // 0x814 JumpB
	var_33_bool = 0; // 0x815 MovB
	
Label_2070:
	if(var_33_bool == 0) goto Label_2072; // 0x816 JumpB
	return 0; // 0x817 Return
	
Label_2072:
	func_1998(); // 0x819 NEW_2
	var_0_object = 1; // 0x81b TMovB
	var_79_object = Obj(); // 0x81c PushV
	var_79_object = var_31_object; // 0x81d Mov
	func_3859(var_79_object); // 0x81e NEW_2
	return 0; // 0x820 Return
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	func_1998(); // 0x822 NEW_2
	var_0_object = 1; // 0x824 TMovB
	var_30_bool = 0; var_31_int = 0; // 0x825 PushV
	var_31_int = 0; // 0x826 MovI
	func_3786(var_30_bool, var_31_int); // 0x827 NEW_2
	return 0; // 0x829 Return
}


task_11_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	func_2334(var_30_bool); // 0x860 NEW_2
	var_32_bool = 0; var_33_object = Obj(); // 0x862 PushV
	var_33_object = var_30_bool; // 0x863 Mov
	func_3901(var_30_bool, var_32_bool, var_33_object); // 0x864 NEW_2
	return 0; // 0x866 Return
}


task_11_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x868 PushV
	var_32_object = var_30_bool; // 0x869 Mov
	func_2914(var_31_bool, var_32_object); // 0x86a NEW_2
	if(var_31_bool == 0) goto Label_2165; // 0x86c JumpB
	func_2334(var_30_bool); // 0x86e NEW_2
	var_36_bool = 0; var_37_int = 0; // 0x870 PushV
	var_37_int = 4; // 0x871 MovI
	func_3786(var_36_bool, var_37_int); // 0x872 NEW_2
	goto Label_2172; // 0x874 Jump
	
Label_2172:
	return 0; // 0x87c Return
	
Label_2165:
	func_2334(var_30_bool); // 0x876 NEW_2
	var_62_object = Obj(); // 0x878 PushV
	var_62_object = var_30_bool; // 0x879 Mov
	func_3848(var_62_object); // 0x87a NEW_2
}


task_11_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_object, var_28_bool, var_29_bool, var_30_bool, var_31_object, var_32_bool)
{
	var_33_bool = 0; // 0x87e PushV
	var_33_bool = 1; // 0x87f MovB
	var_34_bool = 0; var_35_object = Obj(); // 0x880 PushV
	var_35_object = var_31_object; // 0x881 Mov
	func_2972(var_34_bool, var_35_object); // 0x882 NEW_2
	var_68_bool = var_34_bool == 0; // 0x884 Not
	if(var_68_bool == 0) goto Label_2190; // 0x885 JumpB
	var_69_float = 0; var_70_object = Obj(); // 0x886 PushV
	var_70_object = var_31_object; // 0x887 Mov
	func_2906(var_70_object); // 0x888 NEW_2
	var_77_float = 1000000.0; // 0x88a PushF
	var_78_bool = var_69_float > var_77_float; // 0x88b GT
	if(var_78_bool == 0) goto Label_2190; // 0x88c JumpB
	var_33_bool = 0; // 0x88d MovB
	
Label_2190:
	if(var_33_bool == 0) goto Label_2192; // 0x88e JumpB
	return 0; // 0x88f Return
	
Label_2192:
	func_2334(var_32_bool); // 0x891 NEW_2
	var_80_object = Obj(); // 0x893 PushV
	var_80_object = var_31_object; // 0x894 Mov
	func_3859(var_80_object); // 0x895 NEW_2
	return 0; // 0x897 Return
}


task_11_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	func_2334(var_29_bool); // 0x899 NEW_2
	var_31_bool = 0; var_32_int = 0; // 0x89b PushV
	var_32_int = 0; // 0x89c MovI
	func_3786(var_31_bool, var_32_int); // 0x89d NEW_2
	return 0; // 0x89f Return
}


task_11_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_int, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	var_31_int = 0; // 0x90a PushI
	var_32_bool = var_30_bool != var_31_int; // 0x90b Neq
	if(var_32_bool == 0) goto Label_2318; // 0x90c JumpB
	return 0; // 0x90d Return
	
Label_2318:
	var_33_bool = 0; // 0x90e PushV
	func_2208(var_33_bool); // 0x90f NEW_2
	var_34_bool = var_33_bool == 0; // 0x911 Not
	if(var_34_bool == 0) goto Label_2324; // 0x912 JumpB
	var_0_object = 1; // 0x913 TMovB
	
Label_2324:
	var_35_int = 0; // 0x914 PushI
	KillTimer(var_35_int); // 0x915 Func
	Stop(); // 0x917 Func
	return 0; // 0x919 Return
}


task_11_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	RequestClearPath(var_30_bool); // 0x91b Func
	return 0; // 0x91d Return
}


task_11_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_object, var_27_bool, var_28_bool, var_29_object, var_30_bool)
{
	func_2334(var_30_bool); // 0x927 NEW_2
	var_32_object = Obj(); // 0x929 PushV
	var_32_object = var_30_bool; // 0x92a Mov
	func_3945(); // 0x92b NEW_2
	return 0; // 0x92d Return
}


task_12_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_object, var_28_bool, var_29_object, var_30_bool)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x938 PushV
	var_32_object = var_30_bool; // 0x939 Mov
	func_2914(var_31_bool, var_32_object); // 0x93a NEW_2
	if(var_31_bool == 0) goto Label_2373; // 0x93c JumpB
	func_2438(); // 0x93e NEW_2
	var_35_bool = 0; var_36_int = 0; // 0x940 PushV
	var_36_int = 4; // 0x941 MovI
	func_3786(var_35_bool, var_36_int); // 0x942 NEW_2
	goto Label_2380; // 0x944 Jump
	
Label_2380:
	return 0; // 0x94c Return
	
Label_2373:
	func_2438(); // 0x946 NEW_2
	var_61_object = Obj(); // 0x948 PushV
	var_61_object = var_30_bool; // 0x949 Mov
	func_3848(var_61_object); // 0x94a NEW_2
}


task_12_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_object, var_28_object, var_29_bool, var_30_bool, var_31_object, var_32_bool)
{
	var_33_bool = 0; // 0x94e PushV
	var_33_bool = 1; // 0x94f MovB
	var_34_bool = 0; var_35_object = Obj(); // 0x950 PushV
	var_35_object = var_31_object; // 0x951 Mov
	func_2972(var_34_bool, var_35_object); // 0x952 NEW_2
	var_68_bool = var_34_bool == 0; // 0x954 Not
	if(var_68_bool == 0) goto Label_2398; // 0x955 JumpB
	var_69_float = 0; var_70_object = Obj(); // 0x956 PushV
	var_70_object = var_31_object; // 0x957 Mov
	func_2906(var_70_object); // 0x958 NEW_2
	var_77_float = 1000000.0; // 0x95a PushF
	var_78_bool = var_69_float > var_77_float; // 0x95b GT
	if(var_78_bool == 0) goto Label_2398; // 0x95c JumpB
	var_33_bool = 0; // 0x95d MovB
	
Label_2398:
	if(var_33_bool == 0) goto Label_2400; // 0x95e JumpB
	return 0; // 0x95f Return
	
Label_2400:
	func_2438(); // 0x961 NEW_2
	var_79_object = Obj(); // 0x963 PushV
	var_79_object = var_31_object; // 0x964 Mov
	func_3859(var_79_object); // 0x965 NEW_2
	return 0; // 0x967 Return
}


task_12_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	func_2438(); // 0x969 NEW_2
	var_0_object = 1; // 0x96b TMovB
	var_30_bool = 0; var_31_int = 0; // 0x96c PushV
	var_31_int = 0; // 0x96d MovI
	func_3786(var_30_bool, var_31_int); // 0x96e NEW_2
	return 0; // 0x970 Return
}


task_13_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object)
{
	func_2667(var_30_object); // 0x9ad NEW_2
	var_32_bool = 0; var_33_object = Obj(); // 0x9af PushV
	var_33_object = var_30_object; // 0x9b0 Mov
	func_3901(var_30_object, var_32_bool, var_33_object); // 0x9b1 NEW_2
	var_2_object = var_32_bool; // 0x9b2 TMov
	return 0; // 0x9b4 Return
}


task_13_event_17(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_object = Obj(); // 0x9b6 PushV
	var_32_object = var_30_object; // 0x9b7 Mov
	func_2914(var_31_bool, var_32_object); // 0x9b8 NEW_2
	if(var_31_bool == 0) goto Label_2499; // 0x9ba JumpB
	func_2667(var_30_object); // 0x9bc NEW_2
	var_36_bool = 0; var_37_int = 0; // 0x9be PushV
	var_37_int = 4; // 0x9bf MovI
	func_3786(var_36_bool, var_37_int); // 0x9c0 NEW_2
	goto Label_2506; // 0x9c2 Jump
	
Label_2506:
	return 0; // 0x9ca Return
	
Label_2499:
	func_2667(var_30_object); // 0x9c4 NEW_2
	var_62_object = Obj(); // 0x9c6 PushV
	var_62_object = var_30_object; // 0x9c7 Mov
	func_3848(var_62_object); // 0x9c8 NEW_2
}


task_13_event_30(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_object, var_32_bool)
{
	var_33_bool = 0; // 0x9cc PushV
	var_33_bool = 1; // 0x9cd MovB
	var_34_bool = 0; var_35_object = Obj(); // 0x9ce PushV
	var_35_object = var_31_object; // 0x9cf Mov
	func_2972(var_34_bool, var_35_object); // 0x9d0 NEW_2
	var_68_bool = var_34_bool == 0; // 0x9d2 Not
	if(var_68_bool == 0) goto Label_2524; // 0x9d3 JumpB
	var_69_float = 0; var_70_object = Obj(); // 0x9d4 PushV
	var_70_object = var_31_object; // 0x9d5 Mov
	func_2906(var_70_object); // 0x9d6 NEW_2
	var_77_float = 1000000.0; // 0x9d8 PushF
	var_78_bool = var_69_float > var_77_float; // 0x9d9 GT
	if(var_78_bool == 0) goto Label_2524; // 0x9da JumpB
	var_33_bool = 0; // 0x9db MovB
	
Label_2524:
	if(var_33_bool == 0) goto Label_2526; // 0x9dc JumpB
	return 0; // 0x9dd Return
	
Label_2526:
	func_2667(var_32_bool); // 0x9df NEW_2
	var_80_object = Obj(); // 0x9e1 PushV
	var_80_object = var_31_object; // 0x9e2 Mov
	func_3859(var_80_object); // 0x9e3 NEW_2
	return 0; // 0x9e5 Return
}


task_13_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	func_2667(var_29_bool); // 0x9e7 NEW_2
	var_2_object = 1; // 0x9e9 TMovB
	var_31_bool = 0; var_32_int = 0; // 0x9ea PushV
	var_32_int = 0; // 0x9eb MovI
	func_3786(var_31_bool, var_32_int); // 0x9ec NEW_2
	return 0; // 0x9ee Return
}


task_13_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_int)
{
	var_31_int = 0; // 0xa56 PushI
	var_32_bool = var_30_int != var_31_int; // 0xa57 Neq
	if(var_32_bool == 0) goto Label_2650; // 0xa58 JumpB
	return 0; // 0xa59 Return
	
Label_2650:
	var_33_bool = 0; var_34_object = Obj(); // 0xa5a PushV
	var_34_object = var_1_object; // 0xa5b MovT
	func_2683(var_33_bool, var_34_object); // 0xa5c NEW_2
	var_69_bool = var_33_bool == 0; // 0xa5e Not
	if(var_69_bool == 0) goto Label_2657; // 0xa5f JumpB
	var_0_object = 1; // 0xa60 TMovB
	
Label_2657:
	var_70_int = 0; // 0xa61 PushI
	KillTimer(var_70_int); // 0xa62 Func
	Stop(); // 0xa64 Func
	return 0; // 0xa66 Return
}


task_13_event_10(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object)
{
	RequestClearPath(var_30_object); // 0xa68 Func
	return 0; // 0xa6a Return
}


task_13_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object)
{
	func_2667(var_30_object); // 0xa74 NEW_2
	var_32_object = Obj(); // 0xa76 PushV
	var_32_object = var_30_object; // 0xa77 Mov
	func_3945(); // 0xa78 NEW_2
	return 0; // 0xa7a Return
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	var_30_object = Obj(); // 0xa8f PushV
	func_3321(var_30_object); // 0xa90 NEW_2
	RemoveActor(var_30_object); // 0xa92 Func
	Hold(); // 0xa94 Func
	return 0; // 0xa96 Return
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object)
{
	var_31_bool = 0; var_32_bool = 0; // 0xaa6 PushV
	IsOverrideActive(var_32_bool); // 0xaa7 Func
	var_33_bool = var_32_bool == 0; // 0xaa9 Not
	if(var_33_bool == 0) goto Label_2735; // 0xaaa JumpB
	var_34_object = Obj(); // 0xaab PushV
	var_34_object = var_30_object; // 0xaac Mov
	func_3661(var_34_object); // 0xaad NEW_2
	
Label_2735:
	return 2; // 0xaaf Return
}


task_14_event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_float, var_33_float)
{
	return 0; // 0xb26 Return
}


task_14_event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_string)
{
	return 0; // 0xb28 Return
}


task_14_event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object)
{
	return 0; // 0xb2a Return
}


task_15_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_string)
{
	var_31_string = "cleanup"; // 0xb3e PushS
	var_32_bool = var_30_string == var_31_string; // 0xb3f Eq
	if(var_32_bool == 0) goto Label_2888; // 0xb40 JumpB
	var_33_object = Obj(); // 0xb41 PushV
	func_3321(var_33_object); // 0xb42 NEW_2
	RemoveActor(var_33_object); // 0xb44 Func
	Hold(); // 0xb46 Func
	
Label_2888:
	return 0; // 0xb48 Return
}


task_15_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	StopGroup0(); // 0xb49 Func
	sync(); // 0xb4b Func
	return 0; // 0xb4d Return
}


event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_string)
{
	var_31_string = "cleanup"; // 0xec3 PushS
	var_32_bool = var_30_string == var_31_string; // 0xec4 Eq
	if(var_32_bool == 0) goto Label_3785; // 0xec5 JumpB
	var_33_bool = GlobalVars[1]; // 0xec6 PushGE
	var_33_bool = 1; // 0xec7 MovB
	GlobalVars[1] = var_33_bool; // 0xec8 PopGE
	
Label_3785:
	return 0; // 0xec9 Return
}


event_22(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_float, var_33_float)
{
	var_34_object = Obj(); var_35_int = 0; var_36_float = 0; // 0xf1f PushV
	var_34_object = var_30_object; // 0xf20 Mov
	var_35_int = var_31_int; // 0xf21 Mov
	var_36_float = var_32_float; // 0xf22 Mov
	func_3059(var_34_object, var_35_int, var_36_float); // 0xf23 NEW_2
	return 0; // 0xf25 Return
}


event_43(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_int, var_32_float, var_33_float, var_34_cvector, var_35_cvector)
{
	var_36_object = Obj(); var_37_int = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); // 0xf27 PushV
	var_36_object = var_30_object; // 0xf28 Mov
	var_37_int = var_31_int; // 0xf29 Mov
	var_38_float = var_32_float; // 0xf2a Mov
	var_39_cvector = var_34_cvector; // 0xf2b Mov
	var_40_cvector = var_35_cvector; // 0xf2c Mov
	func_3127(var_38_float, var_39_cvector, var_40_cvector); // 0xf2d NEW_2
	return 0; // 0xf2f Return
}


event_16(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object, var_31_string)
{
	var_32_float = 0; var_33_float = 0; // 0xf30 PushV
	var_34_string = "health"; // 0xf31 PushS
	var_35_bool = var_31_string == var_34_string; // 0xf32 Eq
	if(var_35_bool == 0) goto Label_3900; // 0xf33 JumpB
	var_36_string = "health"; // 0xf34 PushS
	GetProperty(var_36_string, var_33_float); // 0xf35 Func
	var_37_int = 0; // 0xf37 PushI
	var_38_bool = var_33_float <= var_37_int; // 0xf38 LE
	if(var_38_bool == 0) goto Label_3900; // 0xf39 JumpB
	SignalDeath(var_30_object); // 0xf3a Func
	
Label_3900:
	return 2; // 0xf3c Return
}


event_41(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool, var_30_object)
{
	func_3508(); // 0xf6b NEW_2
	var_54_bool = 0; var_55_string = ""; var_56_string = ""; // 0xf6d PushV
	var_55_string = "quest_b9_03"; // 0xf6e MovS
	var_56_string = "fail"; // 0xf6f MovS
	func_3350(var_54_bool, var_55_string, var_56_string); // 0xf70 NEW_2
	var_60_object = Obj(); // 0xf72 PushV
	var_60_object = var_30_object; // 0xf73 Mov
	TaskCall(14); // 0xf74 TaskCall
	func_2694(var_60_object); // 0xf75 NEW_2
	TaskReturn(); // 0xf76 TaskReturn
	return 0; // 0xf78 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_bool, var_12_object, var_13_cvector, var_14_bool, var_15_bool, var_16_object, var_17_cvector, var_18_bool, var_19_int, var_20_int, var_21_bool, var_22_bool, var_23_object, var_24_bool, var_25_bool, var_26_bool, var_27_bool, var_28_object, var_29_bool)
{
	var_30_int = GlobalVars[2]; // 0x197 PushGE
	var_30_int = 0; // 0x198 MovI
	GlobalVars[2] = var_30_int; // 0x199 PopGE
	var_31_int = GlobalVars[5]; // 0x19a PushGE
	var_31_int = 1; // 0x19b MovI
	GlobalVars[5] = var_31_int; // 0x19c PopGE
	
Label_413:
	var_32_bool = 1; // 0x19d PushB
	if(var_32_bool == 0) goto Label_640; // 0x19e JumpB
	var_33_int = 0; // 0x19f PushI
	var_34_int = GlobalVars[2]; // 0x1a0 PushGE
	var_35_bool = var_33_int == var_34_int; // 0x1a1 Eq
	if(var_35_bool == 0) goto Label_437; // 0x1a2 JumpB
	TaskCall(15); // 0x1a4 TaskCall
	func_2859(); // 0x1a5 NEW_2
	TaskReturn(); // 0x1a6 TaskReturn
	var_44_bool = 0; var_45_int = 0; // 0x1a8 PushV
	var_46_int = GlobalVars[5]; // 0x1a9 PushGE
	var_45_int = var_46_int; // 0x1aa Mov
	func_3786(var_44_bool, var_45_int); // 0x1ac NEW_2
	var_71_bool = var_44_bool == 0; // 0x1ae Not
	if(var_71_bool == 0) goto Label_436; // 0x1af JumpB
	var_72_bool = 0; var_73_int = 0; // 0x1b0 PushV
	var_73_int = 2; // 0x1b1 MovI
	func_3786(var_72_bool, var_73_int); // 0x1b2 NEW_2
	
Label_436:
	goto Label_637; // 0x1b4 Jump
	
Label_637:
	sync(); // 0x27d Func
	goto Label_413; // 0x27f Jump
	
Label_437:
	var_74_int = 1; // 0x1b5 PushI
	var_75_int = GlobalVars[2]; // 0x1b6 PushGE
	var_76_bool = var_74_int == var_75_int; // 0x1b7 Eq
	if(var_76_bool == 0) goto Label_456; // 0x1b8 JumpB
	TaskCall(3); // 0x1ba TaskCall
	func_641(); // 0x1bb NEW_2
	TaskReturn(); // 0x1bc TaskReturn
	var_95_int = 1; // 0x1be PushI
	var_96_int = GlobalVars[2]; // 0x1bf PushGE
	var_97_bool = var_95_int == var_96_int; // 0x1c0 Eq
	if(var_97_bool == 0) goto Label_455; // 0x1c1 JumpB
	TaskCall(9); // 0x1c3 TaskCall
	func_1720(); // 0x1c4 NEW_2
	TaskReturn(); // 0x1c5 TaskReturn
	
Label_455:
	goto Label_637; // 0x1c7 Jump
	
Label_456:
	var_163_int = 2; // 0x1c8 PushI
	var_164_int = GlobalVars[2]; // 0x1c9 PushGE
	var_165_bool = var_163_int == var_164_int; // 0x1ca Eq
	if(var_165_bool == 0) goto Label_466; // 0x1cb JumpB
	TaskCall(13); // 0x1cd TaskCall
	func_2443(var_168_bool); // 0x1ce NEW_2
	TaskReturn(); // 0x1cf TaskReturn
	goto Label_637; // 0x1d1 Jump
	
Label_466:
	var_263_int = 3; // 0x1d2 PushI
	var_264_int = GlobalVars[2]; // 0x1d3 PushGE
	var_265_bool = var_263_int == var_264_int; // 0x1d4 Eq
	if(var_265_bool == 0) goto Label_485; // 0x1d5 JumpB
	TaskCall(3); // 0x1d7 TaskCall
	func_641(); // 0x1d8 NEW_2
	TaskReturn(); // 0x1d9 TaskReturn
	var_266_int = 3; // 0x1db PushI
	var_267_int = GlobalVars[2]; // 0x1dc PushGE
	var_268_bool = var_266_int == var_267_int; // 0x1dd Eq
	if(var_268_bool == 0) goto Label_484; // 0x1de JumpB
	TaskCall(10); // 0x1e0 TaskCall
	func_1957(var_269_bool); // 0x1e1 NEW_2
	TaskReturn(); // 0x1e2 TaskReturn
	
Label_484:
	goto Label_637; // 0x1e4 Jump
	
Label_485:
	var_296_int = 8; // 0x1e5 PushI
	var_297_int = GlobalVars[2]; // 0x1e6 PushGE
	var_298_bool = var_296_int == var_297_int; // 0x1e7 Eq
	if(var_298_bool == 0) goto Label_495; // 0x1e8 JumpB
	TaskCall(6); // 0x1ea TaskCall
	func_985(); // 0x1eb NEW_2
	TaskReturn(); // 0x1ec TaskReturn
	goto Label_637; // 0x1ee Jump
	
Label_495:
	var_382_int = 4; // 0x1ef PushI
	var_383_int = GlobalVars[2]; // 0x1f0 PushGE
	var_384_bool = var_382_int == var_383_int; // 0x1f1 Eq
	if(var_384_bool == 0) goto Label_505; // 0x1f2 JumpB
	TaskCall(7); // 0x1f4 TaskCall
	func_1213(); // 0x1f5 NEW_2
	TaskReturn(); // 0x1f6 TaskReturn
	goto Label_637; // 0x1f8 Jump
	
Label_505:
	var_462_int = 5; // 0x1f9 PushI
	var_463_int = GlobalVars[2]; // 0x1fa PushGE
	var_464_bool = var_462_int == var_463_int; // 0x1fb Eq
	if(var_464_bool == 0) goto Label_551; // 0x1fc JumpB
	var_465_bool = 0; // 0x1fd PushV
	TaskCall(11); // 0x1fe TaskCall
	func_2090(var_465_bool); // 0x1ff NEW_2
	TaskReturn(); // 0x200 TaskReturn
	var_588_bool = var_466_bool == 0; // 0x202 Not
	if(var_588_bool == 0) goto Label_533; // 0x203 JumpB
	var_589_int = 5; // 0x204 PushI
	var_590_int = GlobalVars[2]; // 0x205 PushGE
	var_591_bool = var_589_int == var_590_int; // 0x206 Eq
	if(var_591_bool == 0) goto Label_533; // 0x207 JumpB
	TaskCall(12); // 0x209 TaskCall
	func_2354(); // 0x20a NEW_2
	TaskReturn(); // 0x20b TaskReturn
	var_603_int = 5; // 0x20d PushI
	var_604_int = GlobalVars[2]; // 0x20e PushGE
	var_605_bool = var_603_int == var_604_int; // 0x20f Eq
	if(var_605_bool == 0) goto Label_533; // 0x210 JumpB
	var_606_bool = 0; var_607_int = 0; // 0x211 PushV
	var_607_int = 1; // 0x212 MovI
	func_3786(var_606_bool, var_607_int); // 0x213 NEW_2
	
Label_533:
	var_608_int = 5; // 0x215 PushI
	var_609_int = GlobalVars[2]; // 0x216 PushGE
	var_610_bool = var_608_int == var_609_int; // 0x217 Eq
	if(var_610_bool == 0) goto Label_550; // 0x218 JumpB
	TaskCall(12); // 0x21a TaskCall
	func_2354(); // 0x21b NEW_2
	TaskReturn(); // 0x21c TaskReturn
	var_612_int = 5; // 0x21e PushI
	var_613_int = GlobalVars[2]; // 0x21f PushGE
	var_614_bool = var_612_int == var_613_int; // 0x220 Eq
	if(var_614_bool == 0) goto Label_550; // 0x221 JumpB
	var_615_bool = 0; var_616_int = 0; // 0x222 PushV
	var_616_int = 2; // 0x223 MovI
	func_3786(var_615_bool, var_616_int); // 0x224 NEW_2
	
Label_550:
	goto Label_637; // 0x226 Jump
	
Label_551:
	var_617_int = 6; // 0x227 PushI
	var_618_int = GlobalVars[2]; // 0x228 PushGE
	var_619_bool = var_617_int == var_618_int; // 0x229 Eq
	if(var_619_bool == 0) goto Label_564; // 0x22a JumpB
	var_620_object = Obj(); // 0x22b PushV
	var_621_object = GlobalVars[3]; // 0x22c PushGE
	var_620_object = var_621_object; // 0x22d Mov
	TaskCall(5); // 0x22f TaskCall
	func_773(var_620_object); // 0x230 NEW_2
	TaskReturn(); // 0x231 TaskReturn
	goto Label_637; // 0x233 Jump
	
Label_564:
	var_692_int = 7; // 0x234 PushI
	var_693_int = GlobalVars[2]; // 0x235 PushGE
	var_694_bool = var_692_int == var_693_int; // 0x236 Eq
	if(var_694_bool == 0) goto Label_634; // 0x237 JumpB
	var_695_object = Obj(); // 0x238 PushV
	var_696_object = GlobalVars[4]; // 0x239 PushGE
	var_695_object = var_696_object; // 0x23a Mov
	TaskCall(8); // 0x23c TaskCall
	func_1473(var_695_object); // 0x23d NEW_2
	TaskReturn(); // 0x23e TaskReturn
	var_765_int = 7; // 0x240 PushI
	var_766_int = GlobalVars[2]; // 0x241 PushGE
	var_767_bool = var_765_int == var_766_int; // 0x242 Eq
	if(var_767_bool == 0) goto Label_633; // 0x243 JumpB
	var_768_bool = 0; // 0x244 PushV
	var_768_bool = 1; // 0x245 MovB
	var_769_bool = 0; var_770_object = Obj(); // 0x246 PushV
	var_771_object = GlobalVars[4]; // 0x247 PushGE
	var_770_object = var_771_object; // 0x248 Mov
	func_2972(var_769_bool, var_770_object); // 0x24a NEW_2
	var_772_bool = var_769_bool == 0; // 0x24c Not
	if(var_772_bool == 0) goto Label_600; // 0x24d JumpB
	var_773_float = 0; var_774_object = Obj(); // 0x24e PushV
	var_775_object = GlobalVars[4]; // 0x24f PushGE
	var_774_object = var_775_object; // 0x250 Mov
	func_2906(var_774_object); // 0x252 NEW_2
	var_782_float = 1000000.0; // 0x254 PushF
	var_783_bool = var_773_float > var_782_float; // 0x255 GT
	if(var_783_bool == 0) goto Label_600; // 0x256 JumpB
	var_768_bool = 0; // 0x257 MovB
	
Label_600:
	if(var_768_bool == 0) goto Label_633; // 0x258 JumpB
	var_784_bool = 0; var_785_object = Obj(); // 0x259 PushV
	var_786_object = GlobalVars[4]; // 0x25a PushGE
	var_785_object = var_786_object; // 0x25b Mov
	func_2972(var_784_bool, var_785_object); // 0x25d NEW_2
	if(var_784_bool == 0) goto Label_633; // 0x25f JumpB
	var_787_object = Obj(); // 0x260 PushV
	var_788_object = GlobalVars[4]; // 0x261 PushGE
	var_787_object = var_788_object; // 0x262 Mov
	TaskCall(4); // 0x264 TaskCall
	func_709(var_787_object); // 0x265 NEW_2
	TaskReturn(); // 0x266 TaskReturn
	var_792_int = 7; // 0x268 PushI
	var_793_int = GlobalVars[2]; // 0x269 PushGE
	var_794_bool = var_792_int == var_793_int; // 0x26a Eq
	if(var_794_bool == 0) goto Label_633; // 0x26b JumpB
	TaskCall(12); // 0x26d TaskCall
	func_2354(); // 0x26e NEW_2
	TaskReturn(); // 0x26f TaskReturn
	var_796_int = 7; // 0x271 PushI
	var_797_int = GlobalVars[2]; // 0x272 PushGE
	var_798_bool = var_796_int == var_797_int; // 0x273 Eq
	if(var_798_bool == 0) goto Label_633; // 0x274 JumpB
	var_799_bool = 0; var_800_int = 0; // 0x275 PushV
	var_800_int = 1; // 0x276 MovI
	func_3786(var_799_bool, var_800_int); // 0x277 NEW_2
	
Label_633:
	goto Label_637; // 0x279 Jump
	
Label_634:
	var_801_string = "Unknown FSM state"; // 0x27a PushS
	Trace(var_801_string); // 0x27b Func
	
Label_640:
	return 0; // 0x280 Return
}


func_0(var_0_object, var_36_int, var_37_object)
{
	var_39_object = Obj(); var_40_bool = 0; var_41_int = 0; var_42_bool = 0; var_43_object = Obj(); var_44_bool = 0; var_45_int = 0; var_46_bool = 0; // 0x0 PushV
	var_0_object = var_37_object; // 0x1 TMov
	var_47_bool = 0; var_48_object = Obj(); var_49_float = 0; // 0x2 PushV
	var_48_object = var_37_object; // 0x3 Mov
	var_49_float = 70.0; // 0x4 MovF
	func_3146(var_48_object, var_49_float); // 0x5 NEW_2
	var_93_bool = var_47_bool == 0; // 0x7 Not
	if(var_93_bool == 0) goto Label_11; // 0x8 JumpB
	var_36_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_43_object); // 0xb Func
	var_94_int = 0; // 0xd PushV
	func_3717(var_94_int); // 0xe NEW_2
	SetNPCName(var_94_int); // 0x10 ObjFunc
	var_95_int = 0; // 0x12 PushV
	func_3715(var_95_int); // 0x13 NEW_2
	SetNPCDescription(var_95_int); // 0x15 ObjFunc
	var_96_string = ""; // 0x17 PushV
	func_3719(var_96_string); // 0x18 NEW_2
	SetPhoto(var_96_string); // 0x1a ObjFunc
	var_97_string = ""; // 0x1c PushV
	func_3721(var_97_string); // 0x1d NEW_2
	SetPhoto2(var_97_string); // 0x1f ObjFunc
	var_98_int = 0; // 0x21 PushV
	func_3638(var_98_int); // 0x22 NEW_2
	SetPlayerName(var_98_int); // 0x24 ObjFunc
	var_45_int = -1; // 0x26 MovI
	IsOverrideActive(var_44_bool); // 0x27 Func
	var_106_bool = var_44_bool; // 0x29 Push
	if(var_106_bool == 0) goto Label_45; // 0x2a JumpB
	var_36_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_43_object); // 0x2d Func
	var_107_object = Obj(); var_108_object = Obj(); // 0x2f PushV
	var_107_object = var_37_object; // 0x30 Mov
	var_108_object = var_43_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_109_object, var_110_object, var_111_string, var_112_bool, var_107_object, var_108_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_46_bool); // 0x36 ObjFunc
	
Label_56:
	var_193_bool = var_46_bool == 0; // 0x38 Not
	if(var_193_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_46_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_194_object = Obj(); // 0x3f PushV
	var_194_object = var_37_object; // 0x40 Mov
	func_3214(); // 0x41 NEW_2
	StopDialog(var_43_object); // 0x43 Func
	GetReturnValue(var_45_int); // 0x45 ObjFunc
	var_36_int = var_45_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1026(var_323_cvector, var_324_float)
{
	var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_float = 0; var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_float = 0; // 0x402 PushV
	GetPosition(var_331_cvector); // 0x403 Func
	GetPosition(var_332_cvector); // 0x405 TObjFunc
	GetDirection(var_333_cvector); // 0x407 Func
	var_337_cvector = CVector(0,0,0); var_338_cvector = CVector(0,0,0); // 0x409 PushV
	var_339_cvector = CVector(0,0,0); var_340_cvector = CVector(0,0,0); // 0x40a PushV
	var_340_cvector = var_331_cvector - var_332_cvector; // 0x40b Sub2
	func_3327(var_339_cvector, var_340_cvector); // 0x40c NEW_2
	var_346_float = 0.75; // 0x40e PushF
	var_347_float = var_333_cvector * var_346_float; // 0x40f Mult
	var_338_cvector = var_339_cvector + var_347_float; // 0x410 Add2
	func_3327(var_337_cvector, var_338_cvector); // 0x411 NEW_2
	var_334_cvector = var_337_cvector; // 0x412 Mov
	var_348_int = 32; // 0x414 PushI
	var_349_float = 7000.0; // 0x415 PushF
	FindLongestDir(var_335_cvector, var_336_float, var_334_cvector, var_324_float, var_348_int, var_349_float); // 0x416 Func
	var_350_int = 100; // 0x418 PushI
	var_336_float = var_336_float - var_350_int; // 0x419 Sub2
	var_351_int = 0; // 0x41a PushI
	var_352_bool = var_336_float < var_351_int; // 0x41b LT
	if(var_352_bool == 0) goto Label_1054; // 0x41c JumpB
	var_336_float = 0; // 0x41d MovI
	
Label_1054:
	var_323_cvector = var_335_cvector * var_336_float; // 0x41e Mult2
	return 12; // 0x41f Return
}


func_3588(var_43_object)
{
	var_44_object = Obj(); var_45_object = Obj(); var_46_object = Obj(); var_47_object = Obj(); // 0xe04 PushV
	GetMainOutdoorScene(var_46_object); // 0xe05 Func
	var_48_bool = var_46_object == 0; // 0xe07 NullEq
	if(var_48_bool == 0) goto Label_3599; // 0xe08 JumpB
	var_49_string = "Can't find main outdoor scene"; // 0xe09 PushS
	Trace(var_49_string); // 0xe0a Func
	var_47_object = 0; // 0xe0c SetNull
	var_43_object = var_47_object; // 0xe0d Mov
	return 4; // 0xe0e Return
	
Label_3599:
	GetMap(var_47_object); // 0xe0f ObjFunc
	var_43_object = var_47_object; // 0xe11 Mov
	return 4; // 0xe12 Return
}


func_3605(var_97_object, var_98_string, var_99_float)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_object = Obj(); var_104_bool = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_object = Obj(); var_108_bool = 0; // 0xe15 PushV
	GetMainOutdoorScene(var_107_object); // 0xe16 Func
	var_109_bool = var_107_object == 0; // 0xe18 NullEq
	if(var_109_bool == 0) goto Label_3614; // 0xe19 JumpB
	var_110_string = "Can't find main outdoor scene"; // 0xe1a PushS
	Trace(var_110_string); // 0xe1b Func
	return 8; // 0xe1d Return
	
Label_3614:
	GetLocator(var_98_string, var_108_bool, var_105_cvector, var_106_cvector); // 0xe1e ObjFunc
	var_111_bool = var_108_bool == 0; // 0xe20 Not
	if(var_111_bool == 0) goto Label_3624; // 0xe21 JumpB
	var_112_string = "Warning: outdoor scene locator "; // 0xe22 PushS
	var_113_int = var_112_string + var_98_string; // 0xe23 Add
	var_114_string = " doesnt exist"; // 0xe24 PushS
	var_115_int = var_113_int + var_114_string; // 0xe25 Add
	Trace(var_115_int); // 0xe26 Func
	
Label_3624:
	GetMap(var_97_object); // 0xe28 ObjFunc
	var_116_bool = var_97_object == 0; // 0xe2a NullEq
	if(var_116_bool == 0) goto Label_3632; // 0xe2b JumpB
	var_117_string = "Can't find map"; // 0xe2c PushS
	Trace(var_117_string); // 0xe2d Func
	return 8; // 0xe2f Return
	
Label_3632:
	var_118_float = GetByIndex(var_105_cvector, 0); // 0xe30 PushE
	var_119_float = GetByIndex(var_105_cvector, 2); // 0xe31 PushE
	SetMapParams(var_118_float, var_119_float, var_99_float); // 0xe32 ObjFunc
	return 8; // 0xe34 Return
}


func_1563(var_0_object, var_1_object, var_2_object, var_702_object)
{
	var_703_cvector = CVector(0,0,0); var_704_float = 0; var_705_bool = 0; var_706_cvector = CVector(0,0,0); var_707_float = 0; var_708_cvector = CVector(0,0,0); var_709_float = 0; var_710_bool = 0; var_711_cvector = CVector(0,0,0); var_712_float = 0; // 0x61b PushV
	var_0_object = var_702_object; // 0x61c TMov
	var_713_cvector = CVector(0,0,0); var_714_float = 0; // 0x61d PushV
	var_714_float = 1.74533; // 0x61e MovF
	func_1533(var_713_cvector, var_714_float); // 0x61f NEW_2
	var_708_cvector = var_713_cvector; // 0x620 Mov
	var_709_float = var_708_cvector | var_708_cvector; // 0x622 Or2
	var_738_float = 2500.0; // 0x623 PushF
	var_739_bool = var_709_float < var_738_float; // 0x624 LT
	if(var_739_bool == 0) goto Label_1592; // 0x625 JumpB
	var_740_cvector = CVector(0,0,0); var_741_float = 0; // 0x626 PushV
	var_741_float = 2.61799; // 0x627 MovF
	func_1533(var_740_cvector, var_741_float); // 0x628 NEW_2
	var_708_cvector = var_740_cvector; // 0x629 Mov
	var_709_float = var_708_cvector | var_708_cvector; // 0x62b Or2
	var_742_float = 2500.0; // 0x62c PushF
	var_743_bool = var_709_float < var_742_float; // 0x62d LT
	if(var_743_bool == 0) goto Label_1592; // 0x62e JumpB
	var_744_string = "Can't retreat, distance: "; // 0x62f PushS
	var_745_float = sqrt(var_709_float); // 0x630 Sqrt
	var_746_int = var_744_string + var_745_float; // 0x631 Add
	Trace(var_746_int); // 0x632 Func
	var_747_float = 0.5; // 0x634 PushF
	Sleep(var_747_float); // 0x635 Func
	return 10; // 0x637 Return
	
Label_1592:
	var_748_float = GetByIndex(var_708_cvector, 0); // 0x638 PushE
	var_749_float = GetByIndex(var_708_cvector, 2); // 0x639 PushE
	Rotate(var_748_float, var_749_float); // 0x63a Func
	var_750_cvector = CVector(0,0,0); // 0x63c PushV
	func_2894(var_750_cvector); // 0x63d NEW_2
	var_1_object = var_750_cvector + var_708_cvector; // 0x63f Add2
	var_751_int = 120; // 0x640 PushI
	var_752_float = 0.5; // 0x641 PushF
	SetTimer(var_751_int, var_752_float); // 0x642 Func
	var_2_object = 0; // 0x644 TMovB
	
Label_1605:
	var_753_int = 1; // 0x645 PushI
	MovePoint(var_753_int, var_753_int, var_710_bool); // 0x646 Func
	var_754_bool = var_710_bool; // 0x648 Push
	if(var_754_bool == 0) goto Label_1633; // 0x649 JumpB
	var_755_bool = var_0_object == 0; // 0x64a NullEq
	if(var_755_bool == 0) goto Label_1614; // 0x64b JumpB
	goto Label_1635; // 0x64c Jump
	
Label_1635:
	return 10; // 0x663 Return
	
Label_1614:
	var_756_cvector = CVector(0,0,0); var_757_float = 0; // 0x64e PushV
	var_757_float = 2.61799; // 0x64f MovF
	func_1533(var_756_cvector, var_757_float); // 0x650 NEW_2
	var_711_cvector = var_756_cvector; // 0x651 Mov
	var_712_float = var_711_cvector | var_711_cvector; // 0x653 Or2
	var_758_float = 2500.0; // 0x654 PushF
	var_759_bool = var_712_float >= var_758_float; // 0x655 GE
	if(var_759_bool == 0) goto Label_1632; // 0x656 JumpB
	var_760_cvector = CVector(0,0,0); // 0x657 PushV
	func_2894(var_760_cvector); // 0x658 NEW_2
	var_1_object = var_760_cvector + var_711_cvector; // 0x65a Add2
	var_761_int = 120; // 0x65b PushI
	var_762_float = 0.5; // 0x65c PushF
	SetTimer(var_761_int, var_762_float); // 0x65d Func
	goto Label_1633; // 0x65f Jump
	
Label_1633:
	var_763_bool = var_2_object == 0; // 0x661 Not
	if(var_763_bool == 0) goto Label_1605; // 0x662 JumpB
	
Label_1632:
	goto Label_1635; // 0x660 Jump
}


func_1056(var_0_object, var_1_object, var_2_object, var_312_object)
{
	var_313_cvector = CVector(0,0,0); var_314_float = 0; var_315_bool = 0; var_316_cvector = CVector(0,0,0); var_317_float = 0; var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_bool = 0; var_321_cvector = CVector(0,0,0); var_322_float = 0; // 0x420 PushV
	var_0_object = var_312_object; // 0x421 TMov
	var_323_cvector = CVector(0,0,0); var_324_float = 0; // 0x422 PushV
	var_324_float = 1.74533; // 0x423 MovF
	func_1026(var_323_cvector, var_324_float); // 0x424 NEW_2
	var_318_cvector = var_323_cvector; // 0x425 Mov
	var_319_float = var_318_cvector | var_318_cvector; // 0x427 Or2
	var_353_float = 2500.0; // 0x428 PushF
	var_354_bool = var_319_float < var_353_float; // 0x429 LT
	if(var_354_bool == 0) goto Label_1085; // 0x42a JumpB
	var_355_cvector = CVector(0,0,0); var_356_float = 0; // 0x42b PushV
	var_356_float = 2.61799; // 0x42c MovF
	func_1026(var_355_cvector, var_356_float); // 0x42d NEW_2
	var_318_cvector = var_355_cvector; // 0x42e Mov
	var_319_float = var_318_cvector | var_318_cvector; // 0x430 Or2
	var_357_float = 2500.0; // 0x431 PushF
	var_358_bool = var_319_float < var_357_float; // 0x432 LT
	if(var_358_bool == 0) goto Label_1085; // 0x433 JumpB
	var_359_string = "Can't retreat, distance: "; // 0x434 PushS
	var_360_float = sqrt(var_319_float); // 0x435 Sqrt
	var_361_int = var_359_string + var_360_float; // 0x436 Add
	Trace(var_361_int); // 0x437 Func
	var_362_float = 0.5; // 0x439 PushF
	Sleep(var_362_float); // 0x43a Func
	return 10; // 0x43c Return
	
Label_1085:
	var_363_float = GetByIndex(var_318_cvector, 0); // 0x43d PushE
	var_364_float = GetByIndex(var_318_cvector, 2); // 0x43e PushE
	Rotate(var_363_float, var_364_float); // 0x43f Func
	var_365_cvector = CVector(0,0,0); // 0x441 PushV
	func_2894(var_365_cvector); // 0x442 NEW_2
	var_1_object = var_365_cvector + var_318_cvector; // 0x444 Add2
	var_368_int = 120; // 0x445 PushI
	var_369_float = 0.5; // 0x446 PushF
	SetTimer(var_368_int, var_369_float); // 0x447 Func
	var_2_object = 0; // 0x449 TMovB
	
Label_1098:
	var_370_int = 1; // 0x44a PushI
	MovePoint(var_370_int, var_370_int, var_320_bool); // 0x44b Func
	var_371_bool = var_320_bool; // 0x44d Push
	if(var_371_bool == 0) goto Label_1126; // 0x44e JumpB
	var_372_bool = var_0_object == 0; // 0x44f NullEq
	if(var_372_bool == 0) goto Label_1107; // 0x450 JumpB
	goto Label_1128; // 0x451 Jump
	
Label_1128:
	return 10; // 0x468 Return
	
Label_1107:
	var_373_cvector = CVector(0,0,0); var_374_float = 0; // 0x453 PushV
	var_374_float = 2.61799; // 0x454 MovF
	func_1026(var_373_cvector, var_374_float); // 0x455 NEW_2
	var_321_cvector = var_373_cvector; // 0x456 Mov
	var_322_float = var_321_cvector | var_321_cvector; // 0x458 Or2
	var_375_float = 2500.0; // 0x459 PushF
	var_376_bool = var_322_float >= var_375_float; // 0x45a GE
	if(var_376_bool == 0) goto Label_1125; // 0x45b JumpB
	var_377_cvector = CVector(0,0,0); // 0x45c PushV
	func_2894(var_377_cvector); // 0x45d NEW_2
	var_1_object = var_377_cvector + var_321_cvector; // 0x45f Add2
	var_378_int = 120; // 0x460 PushI
	var_379_float = 0.5; // 0x461 PushF
	SetTimer(var_378_int, var_379_float); // 0x462 Func
	goto Label_1126; // 0x464 Jump
	
Label_1126:
	var_380_bool = var_2_object == 0; // 0x466 Not
	if(var_380_bool == 0) goto Label_1098; // 0x467 JumpB
	
Label_1125:
	goto Label_1128; // 0x465 Jump
}


func_2090(var_465_bool)
{
	var_467_int = 0; var_468_cvector = CVector(0,0,0); var_469_cvector = CVector(0,0,0); var_470_bool = 0; var_471_object = Obj(); var_472_bool = 0; var_473_int = 0; var_474_cvector = CVector(0,0,0); var_475_cvector = CVector(0,0,0); var_476_bool = 0; var_477_object = Obj(); var_478_bool = 0; // 0x82a PushV
	var_479_int = 0; // 0x82b PushV
	func_3725(var_479_int); // 0x82c NEW_2
	var_473_int = var_479_int; // 0x82d Mov
	var_506_bool = 0; // 0x82f PushV
	var_506_bool = 1; // 0x830 MovB
	var_507_int = -1; // 0x831 PushI
	var_508_bool = var_473_int == var_507_int; // 0x832 Eq
	if(var_508_bool == 0) goto Label_2106; // 0x833 JumpB
	var_509_bool = 0; var_510_int = 0; // 0x834 PushV
	var_510_int = var_473_int; // 0x835 Mov
	func_3754(var_509_bool, var_510_int); // 0x836 NEW_2
	if(var_509_bool == 0) goto Label_2106; // 0x838 JumpB
	var_506_bool = 0; // 0x839 MovB
	
Label_2106:
	if(var_506_bool == 0) goto Label_2113; // 0x83a JumpB
	var_516_bool = 0; var_517_int = 0; // 0x83b PushV
	var_517_int = 1; // 0x83c MovI
	func_3786(var_516_bool, var_517_int); // 0x83d NEW_2
	var_465_bool = 0; // 0x83f MovB
	return 12; // 0x840 Return
	
Label_2113:
	GetScene(var_477_object); // 0x841 Func
	var_518_string = "pt_b9q03_bonfire"; // 0x843 PushS
	var_519_int = var_518_string + var_473_int; // 0x844 Add
	GetLocator(var_519_int, var_476_bool, var_474_cvector, var_475_cvector); // 0x845 ObjFunc
	var_520_float = GetByIndex(var_474_cvector, 1); // 0x847 PushE
	var_521_int = 50; // 0x848 PushI
	var_520_float = var_520_float + var_521_int; // 0x849 Add2
	SetByIndex(var_474_cvector, 1) = var_520_float; // 0x84a PopE
	var_522_bool = 0; var_523_cvector = CVector(0,0,0); var_524_cvector = CVector(0,0,0); var_525_float = 0; var_526_float = 0; var_527_bool = 0; var_528_bool = 0; // 0x84b PushV
	var_523_cvector = var_474_cvector; // 0x84c Mov
	var_524_cvector = var_475_cvector; // 0x84d Mov
	var_525_float = 100; // 0x84e MovI
	var_526_float = 3000; // 0x84f MovI
	var_527_bool = 0; // 0x850 MovB
	var_528_bool = 1; // 0x851 MovB
	func_2210(var_478_bool, var_522_bool, var_523_cvector, var_524_cvector, var_525_float, var_526_float, var_527_bool, var_528_bool); // 0x852 NEW_2
	var_478_bool = var_522_bool; // 0x853 Mov
	var_574_bool = var_478_bool; // 0x855 Push
	if(var_574_bool == 0) goto Label_2139; // 0x856 JumpB
	var_575_int = 0; // 0x857 PushV
	var_575_int = var_473_int; // 0x858 Mov
	func_3762(var_575_int); // 0x859 NEW_2
	
Label_2139:
	var_465_bool = var_478_bool; // 0x85b Mov
	return 12; // 0x85c Return
}


func_3638(var_98_int)
{
	var_99_int = 0; var_100_int = 0; // 0xe36 PushV
	var_101_string = "branch"; // 0xe37 PushS
	GetVariable(var_101_string, var_100_int); // 0xe38 Func
	var_102_int = 0; // 0xe3a PushI
	var_103_bool = var_100_int == var_102_int; // 0xe3b Eq
	if(var_103_bool == 0) goto Label_3648; // 0xe3c JumpB
	var_98_int = 1; // 0xe3d MovI
	return 2; // 0xe3e Return
	
Label_3648:
	var_104_int = 1; // 0xe40 PushI
	var_105_bool = var_100_int == var_104_int; // 0xe41 Eq
	if(var_105_bool == 0) goto Label_3653; // 0xe42 JumpB
	var_98_int = 2; // 0xe43 MovI
	return 2; // 0xe44 Return
	
Label_3653:
	var_98_int = 3; // 0xe45 MovI
	return 2; // 0xe46 Return
}


func_3127(var_36_object, var_39_cvector, var_40_cvector)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_object = Obj(); var_44_object = Obj(); // 0xc37 PushV
	GetScene(var_43_object); // 0xc38 Func
	var_45_string = "scripted"; // 0xc3a PushS
	var_46_string = "blood_dir.xml"; // 0xc3b PushS
	AddActorByType(var_44_object, var_45_string, var_43_object, var_39_cvector, var_40_cvector, var_46_string); // 0xc3c Func
	var_47_object = Obj(); // 0xc3e PushV
	var_47_object = var_36_object; // 0xc3f Mov
	func_3015(var_47_object); // 0xc40 NEW_2
	return 4; // 0xc42 Return
}


func_3141(var_40_bool)
{
	var_41_bool = 0; var_42_bool = 0; // 0xc45 PushV
	IsLoaded(var_42_bool); // 0xc46 Func
	var_40_bool = var_42_bool; // 0xc48 Mov
	return 2; // 0xc49 Return
}


func_3655(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0xe47 PushV
	var_64_string = "branch"; // 0xe48 PushS
	GetVariable(var_64_string, var_63_int); // 0xe49 Func
	var_61_int = var_63_int; // 0xe4b Mov
	return 2; // 0xe4c Return
}


func_3146(var_47_bool, var_49_float)
{
	var_50_float = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_bool = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_bool = 0; // 0xc4a PushV
	GetPosition(var_60_cvector); // 0xc4b ObjFunc
	GetEyesHeight(var_59_float); // 0xc4d ObjFunc
	var_68_float = GetByIndex(var_60_cvector, 1); // 0xc4f PushE
	var_68_float = var_68_float + var_59_float; // 0xc50 Add2
	SetByIndex(var_60_cvector, 1) = var_68_float; // 0xc51 PopE
	GetPosition(var_61_cvector); // 0xc52 Func
	GetEyesHeight(var_59_float); // 0xc54 Func
	var_69_float = GetByIndex(var_61_cvector, 1); // 0xc56 PushE
	var_69_float = var_69_float + var_59_float; // 0xc57 Add2
	SetByIndex(var_61_cvector, 1) = var_69_float; // 0xc58 PopE
	var_62_cvector = var_60_cvector - var_61_cvector; // 0xc59 Sub2
	var_70_float = GetByIndex(var_62_cvector, 1); // 0xc5a PushE
	var_70_float = 0; // 0xc5b MovI
	SetByIndex(var_62_cvector, 1) = var_70_float; // 0xc5c PopE
	var_71_int = var_62_cvector | var_62_cvector; // 0xc5d Or
	var_72_float = sqrt(var_71_int); // 0xc5e Sqrt
	var_62_cvector = var_62_cvector / var_62_cvector; // 0xc5f Div2
	var_63_cvector = -var_62_cvector; // 0xc60 Neg2
	var_73_float = var_62_cvector * var_49_float; // 0xc61 Mult
	var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); // 0xc62 PushV
	var_76_cvector = CVector(0.0, 1.0, 0.0); // 0xc63 PushVec
	var_75_cvector = var_63_cvector ^ var_76_cvector; // 0xc64 Xor2
	func_3327(var_74_cvector, var_75_cvector); // 0xc65 NEW_2
	var_82_int = 25; // 0xc67 PushI
	var_83_float = var_74_cvector * var_82_int; // 0xc68 Mult
	var_84_int = var_73_float + var_83_float; // 0xc69 Add
	var_85_cvector = CVector(0.0, 10.0, 0.0); // 0xc6a PushVec
	var_64_cvector = var_84_int - var_85_cvector; // 0xc6b Sub2
	var_65_cvector = var_61_cvector + var_64_cvector; // 0xc6c Add2
	IsOverrideActive(var_66_bool); // 0xc6d Func
	var_86_bool = var_66_bool; // 0xc6f Push
	if(var_86_bool == 0) goto Label_3187; // 0xc70 JumpB
	var_47_bool = 0; // 0xc71 MovB
	return 18; // 0xc72 Return
	
Label_3187:
	StopWorld(); // 0xc73 Func
	CameraTransit(var_65_cvector, var_63_cvector); // 0xc75 Func
	var_87_float = GetByIndex(var_64_cvector, 0); // 0xc77 PushE
	var_88_float = GetByIndex(var_64_cvector, 2); // 0xc78 PushE
	Rotate(var_87_float, var_88_float); // 0xc79 Func
	var_89_bool = 0; // 0xc7b PushV
	func_3723(var_89_bool); // 0xc7c NEW_2
	if(var_89_bool == 0) goto Label_3200; // 0xc7e JumpB
	goto Label_3208; // 0xc7f Jump
	
Label_3208:
	CameraWaitForPlayFinish(); // 0xc88 Func
	ResumeWorld(); // 0xc8a Func
	var_47_bool = 1; // 0xc8c MovB
	return 18; // 0xc8d Return
	
Label_3200:
	var_90_string = "head"; // 0xc80 PushS
	HasAnimationTrack(var_67_bool, var_90_string); // 0xc81 Func
	var_91_bool = var_67_bool; // 0xc83 Push
	if(var_91_bool == 0) goto Label_3208; // 0xc84 JumpB
	var_92_string = "head"; // 0xc85 PushS
	LookAsyncCamera(var_92_string); // 0xc86 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_107_object, var_108_object)
{
	var_0_object = var_108_object; // 0x4b TMov
	var_1_object = var_107_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_113_int = 1; // 0x4e PushI
	if(var_113_int == 0) goto Label_162; // 0x4f JumpB
	var_114_bool = 0; var_115_object = Obj(); // 0x50 PushV
	var_115_object = var_1_object; // 0x51 MovT
	func_3484(var_115_object); // 0x52 NEW_2
	if(var_114_bool == 0) goto Label_110; // 0x54 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x55 PushV
	var_122_object = var_1_object; // 0x56 MovT
	var_123_object = var_0_object; // 0x57 MovT
	func_3406(); // 0x58 NEW_2
	var_126_string = ""; // 0x5a PushV
	var_126_string = "Neutral"; // 0x5b MovS
	func_192(var_108_object, var_126_string); // 0x5c NEW_2
	var_143_int = 530322; // 0x5e PushI
	SetMessage(var_143_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_144_int = 530323; // 0x63 PushI
	var_145_int = 31711; // 0x64 PushI
	var_146_int = 31710; // 0x65 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x66 TObjFunc
	var_147_int = 531020; // 0x68 PushI
	var_148_int = 32350; // 0x69 PushI
	var_149_int = 32349; // 0x6a PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x6b TObjFunc
	goto Label_162; // 0x6d Jump
	
Label_162:
	var_150_bool = 0; // 0xa2 PushV
	func_3723(var_150_bool); // 0xa3 NEW_2
	if(var_150_bool == 0) goto Label_177; // 0xa5 JumpB
	
Label_166:
	lshWaitForAnimEnd(); // 0xa6 Func
	var_151_string = var_3_string; // 0xa8 PushT
	if(var_151_string == 0) goto Label_171; // 0xa9 JumpB
	goto Label_176; // 0xaa Jump
	
Label_176:
	goto Label_191; // 0xb0 Jump
	
Label_191:
	return 0; // 0xbf Return
	
Label_171:
	var_152_string = ""; // 0xab PushV
	var_152_string = var_2_object; // 0xac MovT
	func_3231(var_152_string); // 0xad NEW_2
	goto Label_166; // 0xaf Jump
	
Label_177:
	var_163_string = "all"; // 0xb1 PushS
	var_164_string = "idle"; // 0xb2 PushS
	PlayAnimation(var_163_string, var_164_string); // 0xb3 Func
	
Label_181:
	WaitForAnimEnd(); // 0xb5 Func
	var_165_string = var_3_string; // 0xb7 PushT
	if(var_165_string == 0) goto Label_186; // 0xb8 JumpB
	goto Label_191; // 0xb9 Jump
	
Label_186:
	var_166_string = "all"; // 0xba PushS
	var_167_string = "idle"; // 0xbb PushS
	PlayAnimation(var_166_string, var_167_string); // 0xbc Func
	goto Label_181; // 0xbe Jump
	
Label_110:
	var_168_bool = 0; var_169_object = Obj(); // 0x6e PushV
	var_169_object = var_1_object; // 0x6f MovT
	func_3496(var_169_object); // 0x70 NEW_2
	if(var_168_bool == 0) goto Label_130; // 0x72 JumpB
	var_174_string = ""; // 0x73 PushV
	var_174_string = "Neutral"; // 0x74 MovS
	func_192(var_108_object, var_174_string); // 0x75 NEW_2
	var_175_int = 530326; // 0x77 PushI
	SetMessage(var_175_int); // 0x78 TObjFunc
	ClearReplies(); // 0x7a TObjFunc
	var_176_int = 530327; // 0x7c PushI
	var_177_int = -1; // 0x7d PushI
	var_178_int = 31714; // 0x7e PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x7f TObjFunc
	goto Label_162; // 0x81 Jump
	
Label_130:
	var_179_string = ""; // 0x82 PushV
	var_179_string = "Neutral"; // 0x83 MovS
	func_192(var_108_object, var_179_string); // 0x84 NEW_2
	var_180_int = 530270; // 0x86 PushI
	SetMessage(var_180_int); // 0x87 TObjFunc
	ClearReplies(); // 0x89 TObjFunc
	var_181_int = 530271; // 0x8b PushI
	var_182_int = -1; // 0x8c PushI
	var_183_int = 31661; // 0x8d PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x8e TObjFunc
	var_184_int = 530273; // 0x90 PushI
	var_185_int = -1; // 0x91 PushI
	var_186_int = 31663; // 0x92 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x93 TObjFunc
	var_187_int = 530274; // 0x95 PushI
	var_188_int = -1; // 0x96 PushI
	var_189_int = 31664; // 0x97 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x98 TObjFunc
	var_190_int = 530272; // 0x9a PushI
	var_191_int = -1; // 0x9b PushI
	var_192_int = 31662; // 0x9c PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x9d TObjFunc
	goto Label_162; // 0x9f Jump
}


func_3661(var_34_object)
{
	var_35_int = 0; // 0xe4e PushV
	func_3655(var_35_int); // 0xe4f NEW_2
	var_39_int = 1; // 0xe51 PushI
	var_40_bool = var_35_int == var_39_int; // 0xe52 Eq
	if(var_40_bool == 0) goto Label_3671; // 0xe53 JumpB
	WorkWithCorpse(var_34_object); // 0xe54 Func
	goto Label_3673; // 0xe56 Jump
	
Label_3673:
	return 0; // 0xe59 Return
	
Label_3671:
	Barter(var_34_object); // 0xe57 Func
}


func_3674(var_67_string)
{
	var_68_object = Obj(); var_69_int = 0; var_70_bool = 0; var_71_object = Obj(); var_72_int = 0; var_73_bool = 0; // 0xe5a PushV
	CreateInvItem(var_71_object); // 0xe5b Func
	SetItemName(var_67_string); // 0xe5d ObjFunc
	var_74_string = "Organ"; // 0xe5f PushS
	var_75_int = 1; // 0xe60 PushI
	SetProperty(var_74_string, var_75_int); // 0xe61 ObjFunc
	GetItemID(var_72_int); // 0xe63 ObjFunc
	var_76_int = 0; // 0xe65 PushI
	var_77_int = 1; // 0xe66 PushI
	AddItem(var_73_bool, var_71_object, var_76_int, var_77_int); // 0xe67 Func
	return 6; // 0xe69 Return
}


func_1636(var_0_object, var_1_object, var_2_object, var_60_int)
{
	var_61_cvector = CVector(0,0,0); var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_cvector = CVector(0,0,0); var_68_float = 0; // 0x664 PushV
	var_69_int = 120; // 0x665 PushI
	var_70_bool = var_60_int != var_69_int; // 0x666 Neq
	if(var_70_bool == 0) goto Label_1641; // 0x667 JumpB
	return 8; // 0x668 Return
	
Label_1641:
	var_71_bool = var_0_object == 0; // 0x669 NullEq
	if(var_71_bool == 0) goto Label_1650; // 0x66a JumpB
	Stop(); // 0x66b Func
	var_72_int = 1; // 0x66d PushI
	KillTimer(var_72_int); // 0x66e Func
	var_2_object = 1; // 0x670 TMovB
	goto Label_1687; // 0x671 Jump
	
Label_1687:
	return 8; // 0x697 Return
	
Label_1650:
	GetDirection(var_65_cvector); // 0x672 Func
	var_73_float = 7000.0; // 0x674 PushF
	FindDirLength(var_66_float, var_65_cvector, var_73_float); // 0x675 Func
	var_74_cvector = CVector(0,0,0); var_75_float = 0; // 0x677 PushV
	var_75_float = 1.74533; // 0x678 MovF
	func_1533(var_74_cvector, var_75_float); // 0x679 NEW_2
	var_67_cvector = var_74_cvector; // 0x67a Mov
	var_68_float = var_67_cvector | var_67_cvector; // 0x67c Or2
	var_104_bool = 0; // 0x67d PushV
	var_104_bool = 0; // 0x67e MovB
	var_105_float = 2500.0; // 0x67f PushF
	var_106_bool = var_68_float >= var_105_float; // 0x680 GE
	if(var_106_bool == 0) goto Label_1680; // 0x681 JumpB
	var_107_bool = 0; // 0x682 PushV
	var_107_bool = 1; // 0x683 MovB
	var_108_float = var_66_float * var_66_float; // 0x684 Mult
	var_109_float = 2.25; // 0x685 PushF
	var_110_float = var_108_float * var_109_float; // 0x686 Mult
	var_111_bool = var_68_float >= var_110_float; // 0x687 GE
	if(var_111_bool == 0) goto Label_1678; // 0x688 JumpB
	var_112_bool = 0; // 0x689 PushV
	func_1704(var_107_bool, var_112_bool); // 0x68a NEW_2
	if(var_112_bool == 0) goto Label_1678; // 0x68c JumpB
	var_107_bool = 0; // 0x68d MovB
	
Label_1678:
	if(var_107_bool == 0) goto Label_1680; // 0x68e JumpB
	var_104_bool = 1; // 0x68f MovB
	
Label_1680:
	if(var_104_bool == 0) goto Label_1687; // 0x690 JumpB
	Stop(); // 0x691 Func
	var_132_cvector = CVector(0,0,0); // 0x693 PushV
	func_2894(var_132_cvector); // 0x694 NEW_2
	var_1_object = var_132_cvector + var_67_cvector; // 0x696 Add2
}


func_2667(var_0_object)
{
	var_0_object = 1; // 0xa6b TMovB
	var_31_int = 0; // 0xa6c PushI
	KillTimer(var_31_int); // 0xa6d Func
	Stop(); // 0xa6f Func
	return 0; // 0xa71 Return
}


func_3691()
{
	var_61_int = 0; // 0xe6b PushV
	func_3655(var_61_int); // 0xe6c NEW_2
	var_65_int = 1; // 0xe6e PushI
	var_66_bool = var_61_int != var_65_int; // 0xe6f Neq
	if(var_66_bool == 0) goto Label_3698; // 0xe70 JumpB
	return 0; // 0xe71 Return
	
Label_3698:
	var_67_string = ""; // 0xe72 PushV
	var_67_string = "liver"; // 0xe73 MovS
	func_3674(var_67_string); // 0xe74 NEW_2
	var_78_string = ""; // 0xe76 PushV
	var_78_string = "kidney"; // 0xe77 MovS
	func_3674(var_78_string); // 0xe78 NEW_2
	var_79_string = ""; // 0xe7a PushV
	var_79_string = "heart"; // 0xe7b MovS
	func_3674(var_79_string); // 0xe7c NEW_2
	var_80_string = ""; // 0xe7e PushV
	var_80_string = "blood"; // 0xe7f MovS
	func_3674(var_80_string); // 0xe80 NEW_2
	return 0; // 0xe82 Return
}


func_2683(var_231_bool, var_232_object)
{
	var_233_bool = 0; var_234_object = Obj(); // 0xa7c PushV
	var_234_object = var_232_object; // 0xa7d Mov
	func_2972(var_233_bool, var_234_object); // 0xa7e NEW_2
	var_231_bool = var_233_bool; // 0xa7f Mov
	return 0; // 0xa81 Return
}


func_641()
{
	var_77_object = Obj(); var_78_object = Obj(); // 0x281 PushV
	var_79_string = "player"; // 0x282 PushS
	FindActor(var_78_object, var_79_string); // 0x283 Func
	var_80_bool = var_78_object == 0; // 0x285 Not
	if(var_80_bool == 0) goto Label_648; // 0x286 JumpB
	return 2; // 0x287 Return
	
Label_648:
	var_81_bool = 0; var_82_object = Obj(); // 0x288 PushV
	var_82_object = var_78_object; // 0x289 Mov
	func_3006(var_82_object); // 0x28a NEW_2
	return 2; // 0x28c Return
}


func_2690(var_249_string)
{
	var_249_string = "walk"; // 0xa82 MovS
	return 0; // 0xa83 Return
}


func_3715(var_95_int)
{
	var_95_int = 515558; // 0xe83 MovI
	return 0; // 0xe84 Return
}


func_2692(var_250_string)
{
	var_250_string = "run"; // 0xa84 MovS
	return 0; // 0xa85 Return
}


func_3717(var_94_int)
{
	var_94_int = 503343; // 0xe85 MovI
	return 0; // 0xe86 Return
}


func_2694(var_60_object)
{
	func_3691(); // 0xa88 NEW_2
	var_81_object = Obj(); // 0xa8a PushV
	var_81_object = var_60_object; // 0xa8b Mov
	func_2711(var_81_object); // 0xa8c NEW_2
	return 0; // 0xa8e Return
}


func_3719(var_96_string)
{
	var_96_string = "ui/NPC_Citizen3.png"; // 0xe87 MovS
	return 0; // 0xe88 Return
}


func_3721(var_97_string)
{
	var_97_string = "ui/NPC_Citizen3_b.png"; // 0xe89 MovS
	return 0; // 0xe8a Return
}


func_3723(var_89_bool)
{
	var_89_bool = 0; // 0xe8b MovB
	return 0; // 0xe8c Return
}


func_3725(var_479_int)
{
	var_480_object = Obj(); var_481_cvector = CVector(0,0,0); var_482_cvector = CVector(0,0,0); var_483_cvector = CVector(0,0,0); var_484_bool = 0; var_485_float = 0; var_486_int = 0; var_487_int = 0; var_488_cvector = CVector(0,0,0); var_489_float = 0; var_490_object = Obj(); var_491_cvector = CVector(0,0,0); var_492_cvector = CVector(0,0,0); var_493_cvector = CVector(0,0,0); var_494_bool = 0; var_495_float = 0; var_496_int = 0; var_497_int = 0; var_498_cvector = CVector(0,0,0); var_499_float = 0; // 0xe8d PushV
	GetScene(var_490_object); // 0xe8e Func
	GetPosition(var_491_cvector); // 0xe90 Func
	var_495_float = 9000000; // 0xe92 MovI
	var_496_int = 1; // 0xe93 MovI
	var_497_int = -1; // 0xe94 MovI
	
Label_3733:
	var_500_bool = 1; // 0xe95 PushB
	if(var_500_bool == 0) goto Label_3751; // 0xe96 JumpB
	var_501_string = "pt_b9q03_bonfire"; // 0xe97 PushS
	var_502_int = var_501_string + var_496_int; // 0xe98 Add
	GetLocator(var_502_int, var_494_bool, var_492_cvector, var_493_cvector); // 0xe99 ObjFunc
	var_503_bool = var_494_bool == 0; // 0xe9b Not
	if(var_503_bool == 0) goto Label_3742; // 0xe9c JumpB
	goto Label_3751; // 0xe9d Jump
	
Label_3751:
	var_479_int = var_497_int; // 0xea7 Mov
	return 20; // 0xea8 Return
	
Label_3742:
	var_498_cvector = var_491_cvector - var_492_cvector; // 0xe9e Sub2
	var_499_float = var_498_cvector | var_498_cvector; // 0xe9f Or2
	var_504_bool = var_499_float < var_495_float; // 0xea0 LT
	if(var_504_bool == 0) goto Label_3748; // 0xea1 JumpB
	var_495_float = var_499_float; // 0xea2 Mov
	var_497_int = var_496_int; // 0xea3 Mov
	
Label_3748:
	var_505_int = 1; // 0xea4 PushI
	var_496_int = var_496_int + var_505_int; // 0xea5 Add2
	goto Label_3733; // 0xea6 Jump
}


func_3214()
{
	var_195_bool = 0; var_196_bool = 0; // 0xc8e PushV
	CameraSwitchToNormal(); // 0xc8f Func
	var_197_bool = 0; // 0xc91 PushV
	func_3723(var_197_bool); // 0xc92 NEW_2
	if(var_197_bool == 0) goto Label_3222; // 0xc94 JumpB
	goto Label_3230; // 0xc95 Jump
	
Label_3230:
	return 2; // 0xc9e Return
	
Label_3222:
	var_198_string = "head"; // 0xc96 PushS
	HasAnimationTrack(var_196_bool, var_198_string); // 0xc97 Func
	var_199_bool = var_196_bool; // 0xc99 Push
	if(var_199_bool == 0) goto Label_3230; // 0xc9a JumpB
	var_200_string = "head"; // 0xc9b PushS
	UnlookAsync(var_200_string); // 0xc9c Func
}


func_2711(var_81_object)
{
	EventDisable(0); // 0xa98 EventDisable
	var_82_object = Obj(); // 0xa99 PushV
	var_82_object = var_81_object; // 0xa9a Mov
	func_2736(var_82_object); // 0xa9b NEW_2
	var_162_int = 50; // 0xa9d PushI
	var_163_int = 40; // 0xa9e PushI
	SetRTEnvelope(var_162_int, var_163_int); // 0xa9f Func
	EventEnable(0); // 0xaa1 EventEnable
	
Label_2722:
	Hold(); // 0xaa2 Func
	goto Label_2722; // 0xaa4 Jump
}


func_1688(var_2_object)
{
	Stop(); // 0x698 Func
	var_31_int = 120; // 0x69a PushI
	KillTimer(var_31_int); // 0x69b Func
	var_2_object = 1; // 0x69d TMovB
	return 0; // 0x69e Return
}


func_1181(var_2_object)
{
	Stop(); // 0x49d Func
	var_31_int = 120; // 0x49f PushI
	KillTimer(var_31_int); // 0x4a0 Func
	var_2_object = 1; // 0x4a2 TMovB
	return 0; // 0x4a3 Return
}


func_3231(var_152_string)
{
	var_153_bool = 0; var_154_float = 0; var_155_float = 0; var_156_bool = 0; var_157_float = 0; var_158_float = 0; // 0xc9f PushV
	lshHasAnimation(var_156_bool, var_152_string); // 0xca0 Func
	var_159_bool = var_156_bool; // 0xca2 Push
	if(var_159_bool == 0) goto Label_3242; // 0xca3 JumpB
	lshGetAnimTimes(var_152_string, var_157_float, var_158_float); // 0xca4 Func
	var_160_bool = 0; // 0xca6 PushB
	lshPlayAnimation(var_157_float, var_158_float, var_160_bool); // 0xca7 Func
	goto Label_3246; // 0xca9 Jump
	
Label_3246:
	return 6; // 0xcae Return
	
Label_3242:
	var_161_string = "Can't find lsh animation : "; // 0xcaa PushS
	var_162_int = var_161_string + var_152_string; // 0xcab Add
	Trace(var_162_int); // 0xcac Func
}


func_2208(var_545_bool)
{
	var_545_bool = 1; // 0x8a0 MovB
	return 0; // 0x8a1 Return
}


func_2210(var_0_object, var_522_bool, var_523_cvector, var_524_cvector, var_525_float, var_526_float, var_527_bool, var_528_bool)
{
	var_529_bool = 0; var_530_bool = 0; var_531_object = Obj(); var_532_cvector = CVector(0,0,0); var_533_cvector = CVector(0,0,0); var_534_cvector = CVector(0,0,0); var_535_float = 0; var_536_object = Obj(); var_537_bool = 0; var_538_bool = 0; var_539_object = Obj(); var_540_cvector = CVector(0,0,0); var_541_cvector = CVector(0,0,0); var_542_cvector = CVector(0,0,0); var_543_float = 0; var_544_object = Obj(); // 0x8a2 PushV
	var_0_object = 0; // 0x8a3 TMovB
	var_538_bool = var_528_bool; // 0x8a4 Mov
	
Label_2213:
	var_545_bool = 0; // 0x8a5 PushV
	func_2208(var_545_bool); // 0x8a6 NEW_2
	var_546_bool = var_545_bool == 0; // 0x8a8 Not
	if(var_546_bool == 0) goto Label_2220; // 0x8a9 JumpB
	var_522_bool = 0; // 0x8aa MovB
	return 16; // 0x8ab Return
	
Label_2220:
	var_540_cvector = var_523_cvector; // 0x8ac Mov
	GetPosition(var_541_cvector); // 0x8ad Func
	var_542_cvector = var_540_cvector - var_541_cvector; // 0x8af Sub2
	var_543_float = var_542_cvector | var_542_cvector; // 0x8b0 Or2
	var_547_bool = 0; // 0x8b1 PushV
	var_547_bool = 0; // 0x8b2 MovB
	var_548_int = 0; // 0x8b3 PushI
	var_549_bool = var_526_float > var_548_int; // 0x8b4 GT
	if(var_549_bool == 0) goto Label_2234; // 0x8b5 JumpB
	var_550_float = var_526_float * var_526_float; // 0x8b6 Mult
	var_551_bool = var_543_float > var_550_float; // 0x8b7 GT
	if(var_551_bool == 0) goto Label_2234; // 0x8b8 JumpB
	var_547_bool = 1; // 0x8b9 MovB
	
Label_2234:
	if(var_547_bool == 0) goto Label_2239; // 0x8ba JumpB
	Stop(); // 0x8bb Func
	var_522_bool = 0; // 0x8bd MovB
	return 16; // 0x8be Return
	
Label_2239:
	var_552_float = var_525_float * var_525_float; // 0x8bf Mult
	var_553_bool = var_543_float > var_552_float; // 0x8c0 GT
	if(var_553_bool == 0) goto Label_2299; // 0x8c1 JumpB
	FindPathTo(var_544_object, var_540_cvector); // 0x8c2 Func
	var_554_bool = var_544_object != 0; // 0x8c4 NullNeq
	if(var_554_bool == 0) goto Label_2248; // 0x8c5 JumpB
	var_539_object = var_544_object; // 0x8c6 Mov
	var_544_object = 0; // 0x8c7 SetNull
	
Label_2248:
	var_555_bool = var_539_object != 0; // 0x8c8 NullNeq
	if(var_555_bool == 0) goto Label_2281; // 0x8c9 JumpB
	var_556_bool = var_538_bool; // 0x8ca Push
	if(var_556_bool == 0) goto Label_2258; // 0x8cb JumpB
	var_538_bool = 0; // 0x8cc MovB
	RotatePath(var_539_object, var_537_bool); // 0x8cd Func
	var_557_bool = var_537_bool == 0; // 0x8cf Not
	if(var_557_bool == 0) goto Label_2258; // 0x8d0 JumpB
	goto Label_2305; // 0x8d1 Jump
	
Label_2305:
	var_558_bool = var_0_object == 0; // 0x901 Not
	if(var_558_bool == 0) goto Label_2311; // 0x902 JumpB
	var_559_float = GetByIndex(var_524_cvector, 0); // 0x903 PushE
	var_560_float = GetByIndex(var_524_cvector, 2); // 0x904 PushE
	RotateAsync(var_559_float, var_560_float); // 0x905 Func
	
Label_2311:
	var_522_bool = !var_0_object; // 0x907 Not2
	return 16; // 0x908 Return
	
Label_2258:
	var_561_int = 0; // 0x8d2 PushI
	var_562_float = 0.3; // 0x8d3 PushF
	SetTimer(var_561_int, var_562_float); // 0x8d4 Func
	var_563_string = ""; // 0x8d6 PushV
	func_2350(var_563_string); // 0x8d7 NEW_2
	var_564_string = ""; // 0x8d9 PushV
	func_2352(var_564_string); // 0x8da NEW_2
	FollowPath(var_539_object, var_527_bool, var_537_bool, var_563_string, var_564_string); // 0x8dc Func
	var_565_bool = var_537_bool == 0; // 0x8de Not
	if(var_565_bool == 0) goto Label_2279; // 0x8df JumpB
	var_566_object = var_0_object; // 0x8e0 PushT
	if(var_566_object == 0) goto Label_2277; // 0x8e1 JumpB
	var_539_object = 0; // 0x8e2 SetNull
	goto Label_2305; // 0x8e3 Jump
	
Label_2277:
	goto Label_2304; // 0x8e5 Jump
	
Label_2304:
	goto Label_2213; // 0x900 Jump
	
Label_2279:
	var_539_object = 0; // 0x8e7 SetNull
	goto Label_2297; // 0x8e8 Jump
	
Label_2297:
	var_544_object = 0; // 0x8f9 SetNull
	goto Label_2303; // 0x8fa Jump
	
Label_2303:
	var_539_object = 0; // 0x8ff SetNull
	
Label_2281:
	var_567_int = 0; // 0x8e9 PushI
	KillTimer(var_567_int); // 0x8ea Func
	var_568_float = 0.5; // 0x8ec PushF
	Sleep(var_568_float, var_537_bool); // 0x8ed Func
	var_569_bool = var_537_bool == 0; // 0x8ef Not
	if(var_569_bool == 0) goto Label_2293; // 0x8f0 JumpB
	var_570_object = var_0_object; // 0x8f1 PushT
	if(var_570_object == 0) goto Label_2293; // 0x8f2 JumpB
	var_539_object = 0; // 0x8f3 SetNull
	goto Label_2305; // 0x8f4 Jump
	
Label_2293:
	var_571_int = 0; // 0x8f5 PushI
	var_572_float = 0.3; // 0x8f6 PushF
	SetTimer(var_571_int, var_572_float); // 0x8f7 Func
	
Label_2299:
	var_573_int = 0; // 0x8fb PushI
	KillTimer(var_573_int); // 0x8fc Func
	goto Label_2305; // 0x8fe Jump
}


func_1704(var_0_object, var_112_bool)
{
	var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x6a8 PushV
	GetDirection(var_115_cvector); // 0x6a9 Func
	var_117_cvector = CVector(0,0,0); var_118_object = Obj(); // 0x6ab PushV
	var_118_object = var_0_object; // 0x6ac MovT
	func_2899(var_118_object); // 0x6ad NEW_2
	var_116_cvector = var_117_cvector; // 0x6ae Mov
	var_123_float = 0; var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); // 0x6b0 PushV
	var_124_cvector = var_115_cvector; // 0x6b1 Mov
	var_125_cvector = var_116_cvector; // 0x6b2 Mov
	func_3337(var_123_float, var_124_cvector, var_125_cvector); // 0x6b3 NEW_2
	var_131_float = -0.34202; // 0x6b5 PushF
	var_112_bool = var_123_float >= var_131_float; // 0x6b6 GE2
	return 4; // 0x6b7 Return
}


func_3754(var_509_bool, var_510_int)
{
	var_511_int = 0; var_512_int = 0; // 0xeaa PushV
	var_513_string = "b9q03Bonfire"; // 0xeab PushS
	var_514_int = var_513_string + var_510_int; // 0xeac Add
	GetVariable(var_514_int, var_512_int); // 0xead Func
	var_515_int = 0; // 0xeaf PushI
	var_509_bool = var_512_int != var_515_int; // 0xeb0 Neq2
	return 2; // 0xeb1 Return
}


func_1197(var_0_object, var_82_bool)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x4ad PushV
	GetDirection(var_85_cvector); // 0x4ae Func
	var_87_cvector = CVector(0,0,0); var_88_object = Obj(); // 0x4b0 PushV
	var_88_object = var_0_object; // 0x4b1 MovT
	func_2899(var_88_object); // 0x4b2 NEW_2
	var_86_cvector = var_87_cvector; // 0x4b3 Mov
	var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); // 0x4b5 PushV
	var_94_cvector = var_85_cvector; // 0x4b6 Mov
	var_95_cvector = var_86_cvector; // 0x4b7 Mov
	func_3337(var_93_float, var_94_cvector, var_95_cvector); // 0x4b8 NEW_2
	var_101_float = -0.34202; // 0x4ba PushF
	var_82_bool = var_93_float >= var_101_float; // 0x4bb GE2
	return 4; // 0x4bc Return
}


func_3247(var_130_string, var_131_bool)
{
	var_134_bool = 0; var_135_float = 0; var_136_float = 0; var_137_bool = 0; var_138_float = 0; var_139_float = 0; // 0xcaf PushV
	lshHasAnimation(var_137_bool, var_130_string); // 0xcb0 Func
	var_140_bool = var_137_bool; // 0xcb2 Push
	if(var_140_bool == 0) goto Label_3257; // 0xcb3 JumpB
	lshGetAnimTimes(var_130_string, var_138_float, var_139_float); // 0xcb4 Func
	lshPlayAnimation(var_138_float, var_139_float, var_131_bool); // 0xcb6 Func
	goto Label_3261; // 0xcb8 Jump
	
Label_3261:
	return 6; // 0xcbd Return
	
Label_3257:
	var_141_string = "Can't find lsh animation : "; // 0xcb9 PushS
	var_142_int = var_141_string + var_130_string; // 0xcba Add
	Trace(var_142_int); // 0xcbb Func
}


func_2736(var_82_object)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_string = ""; var_88_object = Obj(); var_89_bool = 0; var_90_bool = 0; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_string = ""; var_98_object = Obj(); var_99_bool = 0; var_100_bool = 0; var_101_float = 0; var_102_cvector = CVector(0,0,0); // 0xab0 PushV
	var_103_bool = var_82_object == 0; // 0xab1 NullEq
	if(var_103_bool == 0) goto Label_2744; // 0xab2 JumpB
	var_104_string = ""; // 0xab3 PushV
	var_104_string = "fdie"; // 0xab4 MovS
	func_2827(var_104_string); // 0xab5 NEW_2
	goto Label_2826; // 0xab7 Jump
	
Label_2826:
	return 20; // 0xb0a Return
	
Label_2744:
	GetPosition(var_93_cvector); // 0xab8 ObjFunc
	GetPosition(var_94_cvector); // 0xaba Func
	GetDirection(var_95_cvector); // 0xabc Func
	var_96_cvector = var_94_cvector - var_93_cvector; // 0xabe Sub2
	var_136_float = GetByIndex(var_96_cvector, 0); // 0xabf PushE
	var_137_float = GetByIndex(var_95_cvector, 0); // 0xac0 PushE
	var_138_float = var_136_float * var_137_float; // 0xac1 Mult
	var_139_float = GetByIndex(var_96_cvector, 2); // 0xac2 PushE
	var_140_float = GetByIndex(var_95_cvector, 2); // 0xac3 PushE
	var_141_float = var_139_float * var_140_float; // 0xac4 Mult
	var_142_int = var_138_float + var_141_float; // 0xac5 Add
	var_143_int = 0; // 0xac6 PushI
	var_144_bool = var_142_int >= var_143_int; // 0xac7 GE
	if(var_144_bool == 0) goto Label_2763; // 0xac8 JumpB
	var_97_string = "fdie"; // 0xac9 MovS
	goto Label_2764; // 0xaca Jump
	
Label_2764:
	RemoveRTEnvelope(); // 0xacc Func
	SetDeathState(); // 0xace Func
	Stop(); // 0xad0 Func
	StopAsync(); // 0xad2 Func
	var_98_object = var_82_object; // 0xad4 Mov
	var_145_string = "GetScriptProperty"; // 0xad5 PushS
	var_146_int = 2; // 0xad6 PushI
	var_147_bool = IsFuncExist(var_82_object, var_145_string, var_146_int); // 0xad7 FuncExist
	if(var_147_bool == 0) goto Label_2788; // 0xad8 JumpB
	var_148_string = "Owner"; // 0xad9 PushS
	HasScriptProperty(var_99_bool, var_148_string); // 0xada ObjFunc
	var_149_bool = var_99_bool; // 0xadc Push
	if(var_149_bool == 0) goto Label_2788; // 0xadd JumpB
	var_150_string = "Owner"; // 0xade PushS
	GetScriptProperty(var_98_object, var_150_string); // 0xadf ObjFunc
	var_151_bool = var_98_object == 0; // 0xae1 NullEq
	if(var_151_bool == 0) goto Label_2788; // 0xae2 JumpB
	var_98_object = var_82_object; // 0xae3 Mov
	
Label_2788:
	var_152_string = "@GetEyesHeight"; // 0xae4 PushS
	var_153_int = 1; // 0xae5 PushI
	var_154_bool = IsFuncExist(var_98_object, var_152_string, var_153_int); // 0xae6 FuncExist
	if(var_154_bool == 0) goto Label_2803; // 0xae7 JumpB
	GetEyesHeight(var_101_float); // 0xae8 ObjFunc
	var_102_cvector = CVector(0.0, 0.0, 0.0); // 0xaea MovV
	var_155_float = GetByIndex(var_102_cvector, 1); // 0xaeb PushE
	var_155_float = var_101_float; // 0xaec Mov
	SetByIndex(var_102_cvector, 1) = var_155_float; // 0xaed PopE
	var_156_string = "head"; // 0xaee PushS
	LookAsync(var_82_object, var_156_string, var_102_cvector); // 0xaef Func
	var_100_bool = 1; // 0xaf1 MovB
	goto Label_2804; // 0xaf2 Jump
	
Label_2804:
	var_157_string = ""; // 0xaf4 PushV
	var_157_string = var_97_string; // 0xaf5 Mov
	func_3280(var_157_string); // 0xaf6 NEW_2
	var_158_string = "all"; // 0xaf8 PushS
	PlayAnimation(var_158_string, var_97_string); // 0xaf9 Func
	WaitForAnimEnd(); // 0xafb Func
	var_159_bool = var_100_bool; // 0xafd Push
	if(var_159_bool == 0) goto Label_2820; // 0xafe JumpB
	StopAsync(); // 0xaff Func
	var_160_string = "head"; // 0xb01 PushS
	UnlookAsync(var_160_string); // 0xb02 Func
	
Label_2820:
	var_161_string = "all"; // 0xb04 PushS
	LockAnimationEnd(var_161_string, var_97_string); // 0xb05 Func
	RemoveEnvelope(); // 0xb07 Func
	var_98_object = 0; // 0xb09 SetNull
	
Label_2803:
	var_100_bool = 0; // 0xaf3 MovB
	
Label_2763:
	var_97_string = "bdie"; // 0xacb MovS
}


func_3762(var_575_int)
{
	var_576_string = ""; var_577_string = ""; // 0xeb2 PushV
	var_577_string = var_575_int; // 0xeb3 Mov
	var_578_string = "enable_bonfire"; // 0xeb4 PushS
	TriggerWorld(var_578_string, var_577_string); // 0xeb5 Func
	var_579_bool = 0; var_580_string = ""; var_581_string = ""; // 0xeb7 PushV
	var_580_string = "quest_b9_03"; // 0xeb8 MovS
	var_581_string = "bonfire_burn"; // 0xeb9 MovS
	func_3350(var_579_bool, var_580_string, var_581_string); // 0xeba NEW_2
	var_585_string = "b9q03Bonfire"; // 0xebc PushS
	var_586_int = var_585_string + var_575_int; // 0xebd Add
	var_587_int = 1; // 0xebe PushI
	SetVariable(var_586_int, var_587_int); // 0xebf Func
	return 2; // 0xec1 Return
}


func_1720()
{
	var_103_float = 0; var_104_float = 0; // 0x6b8 PushV
	var_103_float = 300; // 0x6b9 MovI
	var_104_float = 100; // 0x6ba MovI
	func_1792(var_98_int, var_99_int, var_100_bool, var_101_bool, var_102_object, var_103_float, var_104_float); // 0x6bb NEW_2
	return 0; // 0x6bd Return
}


func_1213()
{
	var_389_object = Obj(); var_390_object = Obj(); // 0x4bd PushV
	var_391_string = "player"; // 0x4be PushS
	FindActor(var_390_object, var_391_string); // 0x4bf Func
	var_392_bool = 0; var_393_object = Obj(); // 0x4c1 PushV
	var_393_object = var_390_object; // 0x4c2 Mov
	func_2972(var_392_bool, var_393_object); // 0x4c3 NEW_2
	var_394_bool = var_392_bool == 0; // 0x4c5 Not
	if(var_394_bool == 0) goto Label_1228; // 0x4c6 JumpB
	var_395_bool = 0; var_396_int = 0; // 0x4c7 PushV
	var_396_int = 1; // 0x4c8 MovI
	func_3786(var_395_bool, var_396_int); // 0x4c9 NEW_2
	return 2; // 0x4cb Return
	
Label_1228:
	var_397_int = 0; // 0x4cc PushI
	var_398_int = 5; // 0x4cd PushI
	SetTimer(var_397_int, var_398_int); // 0x4ce Func
	var_399_object = Obj(); // 0x4d0 PushV
	var_399_object = var_390_object; // 0x4d1 Mov
	func_1316(var_388_bool, var_389_object, var_390_object, var_399_object); // 0x4d2 NEW_2
	var_461_int = 0; // 0x4d4 PushI
	KillTimer(var_461_int); // 0x4d5 Func
	return 2; // 0x4d7 Return
}


func_3262(var_280_object)
{
	var_281_float = 0; var_282_cvector = CVector(0,0,0); var_283_float = 0; var_284_cvector = CVector(0,0,0); // 0xcbe PushV
	GetEyesHeight(var_283_float); // 0xcbf ObjFunc
	var_284_cvector = CVector(0.0, 0.0, 0.0); // 0xcc1 MovV
	var_285_float = GetByIndex(var_284_cvector, 1); // 0xcc2 PushE
	var_285_float = var_283_float; // 0xcc3 Mov
	SetByIndex(var_284_cvector, 1) = var_285_float; // 0xcc4 PopE
	var_286_string = "head"; // 0xcc5 PushS
	LookAsync(var_280_object, var_286_string, var_284_cvector); // 0xcc6 Func
	return 4; // 0xcc8 Return
}


func_192(var_2_object, var_126_string)
{
	var_127_bool = 0; // 0xc1 PushV
	func_3723(var_127_bool); // 0xc2 NEW_2
	var_128_bool = var_127_bool == 0; // 0xc4 Not
	if(var_128_bool == 0) goto Label_199; // 0xc5 JumpB
	return 0; // 0xc6 Return
	
Label_199:
	var_129_bool = var_126_string == var_2_object; // 0xc7 Eq
	if(var_129_bool == 0) goto Label_202; // 0xc8 JumpB
	return 0; // 0xc9 Return
	
Label_202:
	var_130_string = ""; var_131_bool = 0; // 0xca PushV
	var_130_string = var_126_string; // 0xcb Mov
	var_132_string = ""; // 0xcc PushS
	var_133_bool = var_126_string == var_132_string; // 0xcd Eq
	if(var_133_bool == 0) goto Label_209; // 0xce JumpB
	var_131_bool = 0; // 0xcf MovB
	goto Label_210; // 0xd0 Jump
	
Label_210:
	func_3247(var_130_string, var_131_bool); // 0xd2 NEW_2
	var_2_object = var_126_string; // 0xd4 TMov
	return 0; // 0xd5 Return
	
Label_209:
	var_131_bool = 1; // 0xd1 MovB
}


func_709(var_787_object)
{
	var_789_bool = var_787_object == 0; // 0x2c6 Not
	if(var_789_bool == 0) goto Label_713; // 0x2c7 JumpB
	return 0; // 0x2c8 Return
	
Label_713:
	var_790_bool = 0; var_791_object = Obj(); // 0x2c9 PushV
	var_791_object = var_787_object; // 0x2ca Mov
	func_3006(var_791_object); // 0x2cb NEW_2
	return 0; // 0x2cd Return
}


func_3273()
{
	var_33_bool = 0; // 0xcc9 PushV
	func_3723(var_33_bool); // 0xcca NEW_2
	if(var_33_bool == 0) goto Label_3279; // 0xccc JumpB
	lshStopSpeech(); // 0xccd Func
	
Label_3279:
	return 0; // 0xccf Return
}


func_3786(var_44_bool, var_45_int)
{
	var_47_int = 1; // 0xecb PushI
	var_48_bool = var_45_int == var_47_int; // 0xecc Eq
	if(var_48_bool == 0) goto Label_3794; // 0xecd JumpB
	var_49_string = "changing state to c_iStateWaitForCommand"; // 0xece PushS
	Trace(var_49_string); // 0xecf Func
	goto Label_3843; // 0xed1 Jump
	
Label_3843:
	var_50_int = GlobalVars[2]; // 0xf03 PushGE
	var_50_int = var_45_int; // 0xf04 Mov
	GlobalVars[2] = var_50_int; // 0xf05 PopGE
	var_44_bool = 1; // 0xf06 MovB
	return 0; // 0xf07 Return
	
Label_3794:
	var_51_int = 2; // 0xed2 PushI
	var_52_bool = var_45_int == var_51_int; // 0xed3 Eq
	if(var_52_bool == 0) goto Label_3801; // 0xed4 JumpB
	var_53_string = "changing state to c_iStateFollow"; // 0xed5 PushS
	Trace(var_53_string); // 0xed6 Func
	goto Label_3843; // 0xed8 Jump
	
Label_3801:
	var_54_int = 3; // 0xed9 PushI
	var_55_bool = var_45_int == var_54_int; // 0xeda Eq
	if(var_55_bool == 0) goto Label_3808; // 0xedb JumpB
	var_56_string = "changing state to c_iStateIdleAndFollow"; // 0xedc PushS
	Trace(var_56_string); // 0xedd Func
	goto Label_3843; // 0xedf Jump
	
Label_3808:
	var_57_int = 4; // 0xee0 PushI
	var_58_bool = var_45_int == var_57_int; // 0xee1 Eq
	if(var_58_bool == 0) goto Label_3815; // 0xee2 JumpB
	var_59_string = "changing state to c_iStateRetreatPlayer"; // 0xee3 PushS
	Trace(var_59_string); // 0xee4 Func
	goto Label_3843; // 0xee6 Jump
	
Label_3815:
	var_60_int = 5; // 0xee7 PushI
	var_61_bool = var_45_int == var_60_int; // 0xee8 Eq
	if(var_61_bool == 0) goto Label_3822; // 0xee9 JumpB
	var_62_string = "changing state to c_iStateBurn"; // 0xeea PushS
	Trace(var_62_string); // 0xeeb Func
	goto Label_3843; // 0xeed Jump
	
Label_3822:
	var_63_int = 0; // 0xeee PushI
	var_64_bool = var_45_int == var_63_int; // 0xeef Eq
	if(var_64_bool == 0) goto Label_3834; // 0xef0 JumpB
	var_65_int = GlobalVars[5]; // 0xef1 PushGE
	var_66_int = GlobalVars[2]; // 0xef2 PushGE
	var_65_int = var_66_int; // 0xef3 Mov
	GlobalVars[5] = var_65_int; // 0xef5 PopGE
	var_67_string = "changing state to c_iStateWaitForLoad"; // 0xef6 PushS
	Trace(var_67_string); // 0xef7 Func
	goto Label_3843; // 0xef9 Jump
	
Label_3834:
	var_68_int = 8; // 0xefa PushI
	var_69_bool = var_45_int == var_68_int; // 0xefb Eq
	if(var_69_bool == 0) goto Label_3841; // 0xefc JumpB
	var_70_string = "changing state to c_iStateGoAway"; // 0xefd PushS
	Trace(var_70_string); // 0xefe Func
	goto Label_3843; // 0xf00 Jump
	
Label_3841:
	var_44_bool = 0; // 0xf01 MovB
	return 0; // 0xf02 Return
}


func_3280(var_105_string)
{
	var_106_bool = 0; var_107_int = 0; var_108_bool = 0; var_109_int = 0; var_110_bool = 0; var_111_float = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_bool = 0; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_bool = 0; var_119_float = 0; var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); // 0xcd0 PushV
	IsExisting3DSound(var_114_bool, var_105_string); // 0xcd1 Func
	var_122_bool = var_114_bool == 0; // 0xcd3 Not
	if(var_122_bool == 0) goto Label_3305; // 0xcd4 JumpB
	var_115_int = 0; // 0xcd5 MovI
	
Label_3286:
	var_123_int = 1; // 0xcd6 PushI
	var_124_int = var_115_int + var_123_int; // 0xcd7 Add
	var_125_int = var_105_string + var_124_int; // 0xcd8 Add
	IsExisting3DSound(var_116_bool, var_125_int); // 0xcd9 Func
	var_126_bool = var_116_bool == 0; // 0xcdb Not
	if(var_126_bool == 0) goto Label_3294; // 0xcdc JumpB
	goto Label_3297; // 0xcdd Jump
	
Label_3297:
	var_127_bool = var_115_int == 0; // 0xce1 Not
	if(var_127_bool == 0) goto Label_3300; // 0xce2 JumpB
	return 16; // 0xce3 Return
	
Label_3300:
	irand(var_117_int, var_115_int); // 0xce4 Func
	var_128_int = 1; // 0xce6 PushI
	var_129_int = var_117_int + var_128_int; // 0xce7 Add
	var_105_string = var_105_string + var_129_int; // 0xce8 Add2
	
Label_3305:
	Is3DSoundLoaded(var_118_bool, var_105_string); // 0xce9 Func
	var_130_bool = var_118_bool; // 0xceb Push
	if(var_130_bool == 0) goto Label_3320; // 0xcec JumpB
	GetEyesHeight(var_119_float); // 0xced Func
	GetDirection(var_120_cvector); // 0xcef Func
	var_131_int = 50; // 0xcf1 PushI
	var_121_cvector = var_120_cvector * var_131_int; // 0xcf2 Mult2
	var_132_float = GetByIndex(var_121_cvector, 1); // 0xcf3 PushE
	var_132_float = var_132_float + var_119_float; // 0xcf4 Add2
	SetByIndex(var_121_cvector, 1) = var_132_float; // 0xcf5 PopE
	PlayGlobalSound(var_105_string, var_121_cvector); // 0xcf6 Func
	
Label_3320:
	return 16; // 0xcf8 Return
	
Label_3294:
	var_133_int = 1; // 0xcde PushI
	var_115_int = var_115_int + var_133_int; // 0xcdf Add2
	goto Label_3286; // 0xce0 Jump
}


func_3321(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0xcf9 PushV
	self(var_39_object); // 0xcfa Func
	var_37_object = var_39_object; // 0xcfc Mov
	return 2; // 0xcfd Return
}


func_3327(var_339_cvector, var_340_cvector)
{
	var_341_float = 0; var_342_float = 0; // 0xcff PushV
	var_343_int = var_340_cvector | var_340_cvector; // 0xd00 Or
	var_342_float = sqrt(var_343_int); // 0xd01 Sqrt2
	var_344_float = 0.0; // 0xd02 PushF
	var_345_bool = var_342_float < var_344_float; // 0xd03 LT
	if(var_345_bool == 0) goto Label_3335; // 0xd04 JumpB
	var_339_cvector = CVector(0.0, 0.0, 0.0); // 0xd05 MovV
	return 2; // 0xd06 Return
	
Label_3335:
	var_339_cvector = var_340_cvector / var_340_cvector; // 0xd07 Div2
	return 2; // 0xd08 Return
}


func_1792(var_0_object, var_1_object, var_2_object, var_3_string, var_102_object, var_103_float, var_104_float)
{
	var_105_bool = 0; // 0x701 PushV
	func_3141(var_105_bool); // 0x702 NEW_2
	var_106_bool = var_105_bool == 0; // 0x704 Not
	if(var_106_bool == 0) goto Label_1799; // 0x705 JumpB
	return 0; // 0x706 Return
	
Label_1799:
	var_107_string = "player"; // 0x707 PushS
	FindActor(var_102_object, var_107_string); // 0x708 Func
	var_2_object = 0; // 0x70a TMovB
	var_3_string = 0; // 0x70b TMovB
	var_0_object = var_103_float; // 0x70c TMov
	var_1_object = var_104_float; // 0x70d TMov
	var_108_int = 10; // 0x70e PushI
	var_109_float = 1.0; // 0x70f PushF
	SetTimer(var_108_int, var_109_float); // 0x710 Func
	func_1871(); // 0x713 NEW_2
	var_161_bool = var_3_string == 0; // 0x715 Not
	if(var_161_bool == 0) goto Label_1818; // 0x716 JumpB
	var_162_int = 10; // 0x717 PushI
	KillTimer(var_162_int); // 0x718 Func
	
Label_1818:
	return 0; // 0x71a Return
}


func_773(var_620_object)
{
	var_625_bool = 0; var_626_object = Obj(); // 0x306 PushV
	var_626_object = var_620_object; // 0x307 Mov
	func_2972(var_625_bool, var_626_object); // 0x308 NEW_2
	var_627_bool = var_625_bool == 0; // 0x30a Not
	if(var_627_bool == 0) goto Label_785; // 0x30b JumpB
	var_628_bool = 0; var_629_int = 0; // 0x30c PushV
	var_629_int = 1; // 0x30d MovI
	func_3786(var_628_bool, var_629_int); // 0x30e NEW_2
	return 0; // 0x310 Return
	
Label_785:
	var_630_object = Obj(); // 0x311 PushV
	var_630_object = var_620_object; // 0x312 Mov
	func_828(var_623_cvector, var_624_bool, var_620_object, var_630_object); // 0x313 NEW_2
	return 0; // 0x315 Return
}


func_1286(var_410_cvector, var_411_float)
{
	var_412_cvector = CVector(0,0,0); var_413_cvector = CVector(0,0,0); var_414_cvector = CVector(0,0,0); var_415_cvector = CVector(0,0,0); var_416_cvector = CVector(0,0,0); var_417_float = 0; var_418_cvector = CVector(0,0,0); var_419_cvector = CVector(0,0,0); var_420_cvector = CVector(0,0,0); var_421_cvector = CVector(0,0,0); var_422_cvector = CVector(0,0,0); var_423_float = 0; // 0x506 PushV
	GetPosition(var_418_cvector); // 0x507 Func
	GetPosition(var_419_cvector); // 0x509 TObjFunc
	GetDirection(var_420_cvector); // 0x50b Func
	var_424_cvector = CVector(0,0,0); var_425_cvector = CVector(0,0,0); // 0x50d PushV
	var_426_cvector = CVector(0,0,0); var_427_cvector = CVector(0,0,0); // 0x50e PushV
	var_427_cvector = var_418_cvector - var_419_cvector; // 0x50f Sub2
	func_3327(var_426_cvector, var_427_cvector); // 0x510 NEW_2
	var_428_float = 0.75; // 0x512 PushF
	var_429_float = var_420_cvector * var_428_float; // 0x513 Mult
	var_425_cvector = var_426_cvector + var_429_float; // 0x514 Add2
	func_3327(var_424_cvector, var_425_cvector); // 0x515 NEW_2
	var_421_cvector = var_424_cvector; // 0x516 Mov
	var_430_int = 32; // 0x518 PushI
	var_431_float = 7000.0; // 0x519 PushF
	FindLongestDir(var_422_cvector, var_423_float, var_421_cvector, var_411_float, var_430_int, var_431_float); // 0x51a Func
	var_432_int = 100; // 0x51c PushI
	var_423_float = var_423_float - var_432_int; // 0x51d Sub2
	var_433_int = 0; // 0x51e PushI
	var_434_bool = var_423_float < var_433_int; // 0x51f LT
	if(var_434_bool == 0) goto Label_1314; // 0x520 JumpB
	var_423_float = 0; // 0x521 MovI
	
Label_1314:
	var_410_cvector = var_422_cvector * var_423_float; // 0x522 Mult2
	return 12; // 0x523 Return
}


func_3848(var_62_object)
{
	var_63_string = "changing state to c_iStateRetreat"; // 0xf09 PushS
	Trace(var_63_string); // 0xf0a Func
	var_64_int = GlobalVars[2]; // 0xf0c PushGE
	var_64_int = 6; // 0xf0d MovI
	GlobalVars[2] = var_64_int; // 0xf0e PopGE
	var_65_object = GlobalVars[3]; // 0xf0f PushGE
	var_65_object = var_62_object; // 0xf10 Mov
	GlobalVars[3] = var_65_object; // 0xf11 PopGE
	return 0; // 0xf12 Return
}


func_3337(var_123_float, var_124_cvector, var_125_cvector)
{
	var_126_int = var_124_cvector | var_125_cvector; // 0xd0a Or
	var_127_int = var_124_cvector | var_124_cvector; // 0xd0b Or
	var_128_int = var_125_cvector | var_125_cvector; // 0xd0c Or
	var_129_float = var_127_int * var_128_int; // 0xd0d Mult
	var_130_float = sqrt(var_129_float); // 0xd0e Sqrt
	var_123_float = var_126_int / var_126_int; // 0xd0f Div2
	return 0; // 0xd10 Return
}


func_2827(var_104_string)
{
	RemoveRTEnvelope(); // 0xb0c Func
	SetDeathState(); // 0xb0e Func
	Stop(); // 0xb10 Func
	StopAsync(); // 0xb12 Func
	StopSecondaryAnimation(); // 0xb14 Func
	var_105_string = ""; // 0xb16 PushV
	var_105_string = var_104_string; // 0xb17 Mov
	func_3280(var_105_string); // 0xb18 NEW_2
	var_134_string = "all"; // 0xb1a PushS
	PlayAnimation(var_134_string, var_104_string); // 0xb1b Func
	WaitForAnimEnd(); // 0xb1d Func
	var_135_string = "all"; // 0xb1f PushS
	LockAnimationEnd(var_135_string, var_104_string); // 0xb20 Func
	RemoveEnvelope(); // 0xb22 Func
	return 0; // 0xb24 Return
}


func_3345(var_116_int, var_117_string)
{
	var_118_int = 0; var_119_int = 0; // 0xd11 PushV
	GetVariable(var_117_string, var_119_int); // 0xd12 Func
	var_116_int = var_119_int; // 0xd14 Mov
	return 2; // 0xd15 Return
}


func_3859(var_80_object)
{
	var_81_string = "changing state to c_iStateRetreatPDamage"; // 0xf14 PushS
	Trace(var_81_string); // 0xf15 Func
	var_82_int = GlobalVars[2]; // 0xf17 PushGE
	var_82_int = 7; // 0xf18 MovI
	GlobalVars[2] = var_82_int; // 0xf19 PopGE
	var_83_object = GlobalVars[4]; // 0xf1a PushGE
	var_83_object = var_80_object; // 0xf1b Mov
	GlobalVars[4] = var_83_object; // 0xf1c PopGE
	return 0; // 0xf1d Return
}


func_3350(var_579_bool, var_580_string, var_581_string)
{
	var_582_object = Obj(); var_583_object = Obj(); // 0xd16 PushV
	FindActor(var_583_object, var_580_string); // 0xd17 Func
	var_584_bool = var_583_object == 0; // 0xd19 NullEq
	if(var_584_bool == 0) goto Label_3357; // 0xd1a JumpB
	var_579_bool = 0; // 0xd1b MovB
	return 2; // 0xd1c Return
	
Label_3357:
	Trigger(var_583_object, var_581_string); // 0xd1d Func
	var_579_bool = 1; // 0xd1f MovB
	return 2; // 0xd20 Return
}


func_1819(var_0_object, var_1_object, var_4_bool, var_33_bool)
{
	var_34_float = 0; var_35_float = 0; // 0x71b PushV
	var_36_bool = var_4_bool == 0; // 0x71c NullEq
	if(var_36_bool == 0) goto Label_1824; // 0x71d JumpB
	var_33_bool = 0; // 0x71e MovB
	return 2; // 0x71f Return
	
Label_1824:
	var_37_float = 0; var_38_object = Obj(); // 0x720 PushV
	var_38_object = var_4_bool; // 0x721 MovT
	func_2906(var_38_object); // 0x722 NEW_2
	var_35_float = sqrt(var_37_float); // 0x724 Sqrt2
	var_45_object = var_2_object; // 0x725 PushT
	if(var_45_object == 0) goto Label_1832; // 0x726 JumpB
	var_35_float = var_35_float - var_1_object; // 0x727 Sub2
	
Label_1832:
	var_33_bool = var_35_float < var_0_object; // 0x728 LT2
	return 2; // 0x729 Return
}


func_798(var_641_cvector, var_642_float)
{
	var_643_cvector = CVector(0,0,0); var_644_cvector = CVector(0,0,0); var_645_cvector = CVector(0,0,0); var_646_cvector = CVector(0,0,0); var_647_cvector = CVector(0,0,0); var_648_float = 0; var_649_cvector = CVector(0,0,0); var_650_cvector = CVector(0,0,0); var_651_cvector = CVector(0,0,0); var_652_cvector = CVector(0,0,0); var_653_cvector = CVector(0,0,0); var_654_float = 0; // 0x31e PushV
	GetPosition(var_649_cvector); // 0x31f Func
	GetPosition(var_650_cvector); // 0x321 TObjFunc
	GetDirection(var_651_cvector); // 0x323 Func
	var_655_cvector = CVector(0,0,0); var_656_cvector = CVector(0,0,0); // 0x325 PushV
	var_657_cvector = CVector(0,0,0); var_658_cvector = CVector(0,0,0); // 0x326 PushV
	var_658_cvector = var_649_cvector - var_650_cvector; // 0x327 Sub2
	func_3327(var_657_cvector, var_658_cvector); // 0x328 NEW_2
	var_659_float = 0.75; // 0x32a PushF
	var_660_float = var_651_cvector * var_659_float; // 0x32b Mult
	var_656_cvector = var_657_cvector + var_660_float; // 0x32c Add2
	func_3327(var_655_cvector, var_656_cvector); // 0x32d NEW_2
	var_652_cvector = var_655_cvector; // 0x32e Mov
	var_661_int = 32; // 0x330 PushI
	var_662_float = 7000.0; // 0x331 PushF
	FindLongestDir(var_653_cvector, var_654_float, var_652_cvector, var_642_float, var_661_int, var_662_float); // 0x332 Func
	var_663_int = 100; // 0x334 PushI
	var_654_float = var_654_float - var_663_int; // 0x335 Sub2
	var_664_int = 0; // 0x336 PushI
	var_665_bool = var_654_float < var_664_int; // 0x337 LT
	if(var_665_bool == 0) goto Label_826; // 0x338 JumpB
	var_654_float = 0; // 0x339 MovI
	
Label_826:
	var_641_cvector = var_653_cvector * var_654_float; // 0x33a Mult2
	return 12; // 0x33b Return
}


func_2334(var_0_object)
{
	var_0_object = 1; // 0x91e TMovB
	var_31_int = 0; // 0x91f PushI
	KillTimer(var_31_int); // 0x920 Func
	Stop(); // 0x922 Func
	return 0; // 0x924 Return
}


func_3362(var_54_float)
{
	var_55_float = 0; var_56_float = 0; // 0xd22 PushV
	GetGameTime(var_56_float); // 0xd23 Func
	var_54_float = var_56_float; // 0xd25 Mov
	return 2; // 0xd26 Return
}


func_1316(var_0_object, var_1_object, var_2_object, var_399_object)
{
	var_400_cvector = CVector(0,0,0); var_401_float = 0; var_402_bool = 0; var_403_cvector = CVector(0,0,0); var_404_float = 0; var_405_cvector = CVector(0,0,0); var_406_float = 0; var_407_bool = 0; var_408_cvector = CVector(0,0,0); var_409_float = 0; // 0x524 PushV
	var_0_object = var_399_object; // 0x525 TMov
	var_410_cvector = CVector(0,0,0); var_411_float = 0; // 0x526 PushV
	var_411_float = 1.74533; // 0x527 MovF
	func_1286(var_410_cvector, var_411_float); // 0x528 NEW_2
	var_405_cvector = var_410_cvector; // 0x529 Mov
	var_406_float = var_405_cvector | var_405_cvector; // 0x52b Or2
	var_435_float = 2500.0; // 0x52c PushF
	var_436_bool = var_406_float < var_435_float; // 0x52d LT
	if(var_436_bool == 0) goto Label_1345; // 0x52e JumpB
	var_437_cvector = CVector(0,0,0); var_438_float = 0; // 0x52f PushV
	var_438_float = 2.61799; // 0x530 MovF
	func_1286(var_437_cvector, var_438_float); // 0x531 NEW_2
	var_405_cvector = var_437_cvector; // 0x532 Mov
	var_406_float = var_405_cvector | var_405_cvector; // 0x534 Or2
	var_439_float = 2500.0; // 0x535 PushF
	var_440_bool = var_406_float < var_439_float; // 0x536 LT
	if(var_440_bool == 0) goto Label_1345; // 0x537 JumpB
	var_441_string = "Can't retreat, distance: "; // 0x538 PushS
	var_442_float = sqrt(var_406_float); // 0x539 Sqrt
	var_443_int = var_441_string + var_442_float; // 0x53a Add
	Trace(var_443_int); // 0x53b Func
	var_444_float = 0.5; // 0x53d PushF
	Sleep(var_444_float); // 0x53e Func
	return 10; // 0x540 Return
	
Label_1345:
	var_445_float = GetByIndex(var_405_cvector, 0); // 0x541 PushE
	var_446_float = GetByIndex(var_405_cvector, 2); // 0x542 PushE
	Rotate(var_445_float, var_446_float); // 0x543 Func
	var_447_cvector = CVector(0,0,0); // 0x545 PushV
	func_2894(var_447_cvector); // 0x546 NEW_2
	var_1_object = var_447_cvector + var_405_cvector; // 0x548 Add2
	var_448_int = 120; // 0x549 PushI
	var_449_float = 0.5; // 0x54a PushF
	SetTimer(var_448_int, var_449_float); // 0x54b Func
	var_2_object = 0; // 0x54d TMovB
	
Label_1358:
	var_450_int = 1; // 0x54e PushI
	MovePoint(var_450_int, var_450_int, var_407_bool); // 0x54f Func
	var_451_bool = var_407_bool; // 0x551 Push
	if(var_451_bool == 0) goto Label_1386; // 0x552 JumpB
	var_452_bool = var_0_object == 0; // 0x553 NullEq
	if(var_452_bool == 0) goto Label_1367; // 0x554 JumpB
	goto Label_1388; // 0x555 Jump
	
Label_1388:
	return 10; // 0x56c Return
	
Label_1367:
	var_453_cvector = CVector(0,0,0); var_454_float = 0; // 0x557 PushV
	var_454_float = 2.61799; // 0x558 MovF
	func_1286(var_453_cvector, var_454_float); // 0x559 NEW_2
	var_408_cvector = var_453_cvector; // 0x55a Mov
	var_409_float = var_408_cvector | var_408_cvector; // 0x55c Or2
	var_455_float = 2500.0; // 0x55d PushF
	var_456_bool = var_409_float >= var_455_float; // 0x55e GE
	if(var_456_bool == 0) goto Label_1385; // 0x55f JumpB
	var_457_cvector = CVector(0,0,0); // 0x560 PushV
	func_2894(var_457_cvector); // 0x561 NEW_2
	var_1_object = var_457_cvector + var_408_cvector; // 0x563 Add2
	var_458_int = 120; // 0x564 PushI
	var_459_float = 0.5; // 0x565 PushF
	SetTimer(var_458_int, var_459_float); // 0x566 Func
	goto Label_1386; // 0x568 Jump
	
Label_1386:
	var_460_bool = var_2_object == 0; // 0x56a Not
	if(var_460_bool == 0) goto Label_1358; // 0x56b JumpB
	
Label_1385:
	goto Label_1388; // 0x569 Jump
}


func_3367(var_132_string, var_133_int)
{
	var_134_string = ""; var_135_string = ""; // 0xd27 PushV
	var_135_string = "idle"; // 0xd28 MovS
	var_136_int = var_133_int; // 0xd29 Push
	if(var_136_int == 0) goto Label_3372; // 0xd2a JumpB
	var_135_string = var_135_string + var_133_int; // 0xd2b Add2
	
Label_3372:
	var_132_string = var_135_string; // 0xd2c Mov
	return 2; // 0xd2d Return
}


func_2859()
{
	var_36_bool = GlobalVars[1]; // 0xb2b PushGE
	if(var_36_bool == 0) goto Label_2868; // 0xb2c JumpB
	var_37_object = Obj(); // 0xb2d PushV
	func_3321(var_37_object); // 0xb2e NEW_2
	RemoveActor(var_37_object); // 0xb30 Func
	Hold(); // 0xb32 Func
	
Label_2868:
	var_40_bool = 0; // 0xb34 PushV
	func_3141(var_40_bool); // 0xb35 NEW_2
	var_43_bool = var_40_bool == 0; // 0xb37 Not
	if(var_43_bool == 0) goto Label_2876; // 0xb38 JumpB
	Hold(); // 0xb39 Func
	goto Label_2868; // 0xb3b Jump
	
Label_2876:
	return 0; // 0xb3c Return
}


func_3374(var_126_int)
{
	var_127_int = 0; var_128_bool = 0; var_129_int = 0; var_130_bool = 0; // 0xd2e PushV
	var_129_int = 0; // 0xd2f MovI
	
Label_3376:
	var_131_string = "all"; // 0xd30 PushS
	var_132_string = ""; var_133_int = 0; // 0xd31 PushV
	var_133_int = var_129_int; // 0xd32 Mov
	func_3367(var_132_string, var_133_int); // 0xd33 NEW_2
	HasAnimation(var_130_bool, var_131_string, var_132_string); // 0xd35 Func
	var_137_bool = var_130_bool == 0; // 0xd37 Not
	if(var_137_bool == 0) goto Label_3386; // 0xd38 JumpB
	goto Label_3389; // 0xd39 Jump
	
Label_3389:
	var_126_int = var_129_int; // 0xd3d Mov
	return 4; // 0xd3e Return
	
Label_3386:
	var_138_int = 1; // 0xd3a PushI
	var_129_int = var_129_int + var_138_int; // 0xd3b Add2
	goto Label_3376; // 0xd3c Jump
}


func_2350(var_563_string)
{
	var_563_string = "walk"; // 0x92e MovS
	return 0; // 0x92f Return
}


func_2352(var_564_string)
{
	var_564_string = "run"; // 0x930 MovS
	return 0; // 0x931 Return
}


func_2354()
{
	var_593_string = ""; // 0x932 PushV
	var_593_string = "hunt"; // 0x933 MovS
	func_2417(var_593_string); // 0x934 NEW_2
	return 0; // 0x936 Return
}


func_828(var_0_object, var_1_object, var_2_object, var_630_object)
{
	var_631_cvector = CVector(0,0,0); var_632_float = 0; var_633_bool = 0; var_634_cvector = CVector(0,0,0); var_635_float = 0; var_636_cvector = CVector(0,0,0); var_637_float = 0; var_638_bool = 0; var_639_cvector = CVector(0,0,0); var_640_float = 0; // 0x33c PushV
	var_0_object = var_630_object; // 0x33d TMov
	var_641_cvector = CVector(0,0,0); var_642_float = 0; // 0x33e PushV
	var_642_float = 1.74533; // 0x33f MovF
	func_798(var_641_cvector, var_642_float); // 0x340 NEW_2
	var_636_cvector = var_641_cvector; // 0x341 Mov
	var_637_float = var_636_cvector | var_636_cvector; // 0x343 Or2
	var_666_float = 2500.0; // 0x344 PushF
	var_667_bool = var_637_float < var_666_float; // 0x345 LT
	if(var_667_bool == 0) goto Label_857; // 0x346 JumpB
	var_668_cvector = CVector(0,0,0); var_669_float = 0; // 0x347 PushV
	var_669_float = 2.61799; // 0x348 MovF
	func_798(var_668_cvector, var_669_float); // 0x349 NEW_2
	var_636_cvector = var_668_cvector; // 0x34a Mov
	var_637_float = var_636_cvector | var_636_cvector; // 0x34c Or2
	var_670_float = 2500.0; // 0x34d PushF
	var_671_bool = var_637_float < var_670_float; // 0x34e LT
	if(var_671_bool == 0) goto Label_857; // 0x34f JumpB
	var_672_string = "Can't retreat, distance: "; // 0x350 PushS
	var_673_float = sqrt(var_637_float); // 0x351 Sqrt
	var_674_int = var_672_string + var_673_float; // 0x352 Add
	Trace(var_674_int); // 0x353 Func
	var_675_float = 0.5; // 0x355 PushF
	Sleep(var_675_float); // 0x356 Func
	return 10; // 0x358 Return
	
Label_857:
	var_676_float = GetByIndex(var_636_cvector, 0); // 0x359 PushE
	var_677_float = GetByIndex(var_636_cvector, 2); // 0x35a PushE
	Rotate(var_676_float, var_677_float); // 0x35b Func
	var_678_cvector = CVector(0,0,0); // 0x35d PushV
	func_2894(var_678_cvector); // 0x35e NEW_2
	var_1_object = var_678_cvector + var_636_cvector; // 0x360 Add2
	var_679_int = 120; // 0x361 PushI
	var_680_float = 0.5; // 0x362 PushF
	SetTimer(var_679_int, var_680_float); // 0x363 Func
	var_2_object = 0; // 0x365 TMovB
	
Label_870:
	var_681_int = 1; // 0x366 PushI
	MovePoint(var_681_int, var_681_int, var_638_bool); // 0x367 Func
	var_682_bool = var_638_bool; // 0x369 Push
	if(var_682_bool == 0) goto Label_898; // 0x36a JumpB
	var_683_bool = var_0_object == 0; // 0x36b NullEq
	if(var_683_bool == 0) goto Label_879; // 0x36c JumpB
	goto Label_900; // 0x36d Jump
	
Label_900:
	return 10; // 0x384 Return
	
Label_879:
	var_684_cvector = CVector(0,0,0); var_685_float = 0; // 0x36f PushV
	var_685_float = 2.61799; // 0x370 MovF
	func_798(var_684_cvector, var_685_float); // 0x371 NEW_2
	var_639_cvector = var_684_cvector; // 0x372 Mov
	var_640_float = var_639_cvector | var_639_cvector; // 0x374 Or2
	var_686_float = 2500.0; // 0x375 PushF
	var_687_bool = var_640_float >= var_686_float; // 0x376 GE
	if(var_687_bool == 0) goto Label_897; // 0x377 JumpB
	var_688_cvector = CVector(0,0,0); // 0x378 PushV
	func_2894(var_688_cvector); // 0x379 NEW_2
	var_1_object = var_688_cvector + var_639_cvector; // 0x37b Add2
	var_689_int = 120; // 0x37c PushI
	var_690_float = 0.5; // 0x37d PushF
	SetTimer(var_689_int, var_690_float); // 0x37e Func
	goto Label_898; // 0x380 Jump
	
Label_898:
	var_691_bool = var_2_object == 0; // 0x382 Not
	if(var_691_bool == 0) goto Label_870; // 0x383 JumpB
	
Label_897:
	goto Label_900; // 0x381 Jump
}


func_3901(var_32_bool, var_33_object, var_38_object)
{
	var_34_int = 0; var_35_int = 0; // 0xf3d PushV
	var_36_int = 0; var_37_object = Obj(); // 0xf3e PushV
	var_37_object = var_33_object; // 0xf3f Mov
	TaskCall(0); // 0xf40 TaskCall
	func_0(var_38_object, var_36_int, var_37_object); // 0xf41 NEW_2
	TaskReturn(); // 0xf42 TaskReturn
	var_35_int = var_38_object; // 0xf43 Mov
	var_201_int = 2; // 0xf45 PushI
	var_202_bool = var_35_int == var_201_int; // 0xf46 Eq
	if(var_202_bool == 0) goto Label_3917; // 0xf47 JumpB
	var_203_bool = 0; var_204_int = 0; // 0xf48 PushV
	var_204_int = 2; // 0xf49 MovI
	func_3786(var_203_bool, var_204_int); // 0xf4a NEW_2
	goto Label_3943; // 0xf4c Jump
	
Label_3943:
	var_32_bool = 1; // 0xf67 MovB
	return 2; // 0xf68 Return
	
Label_3917:
	var_229_int = 1; // 0xf4d PushI
	var_230_bool = var_35_int == var_229_int; // 0xf4e Eq
	if(var_230_bool == 0) goto Label_3925; // 0xf4f JumpB
	var_231_bool = 0; var_232_int = 0; // 0xf50 PushV
	var_232_int = 1; // 0xf51 MovI
	func_3786(var_231_bool, var_232_int); // 0xf52 NEW_2
	goto Label_3943; // 0xf54 Jump
	
Label_3925:
	var_233_int = 3; // 0xf55 PushI
	var_234_bool = var_35_int == var_233_int; // 0xf56 Eq
	if(var_234_bool == 0) goto Label_3933; // 0xf57 JumpB
	var_235_bool = 0; var_236_int = 0; // 0xf58 PushV
	var_236_int = 5; // 0xf59 MovI
	func_3786(var_235_bool, var_236_int); // 0xf5a NEW_2
	goto Label_3943; // 0xf5c Jump
	
Label_3933:
	var_237_int = 4; // 0xf5d PushI
	var_238_bool = var_35_int == var_237_int; // 0xf5e Eq
	if(var_238_bool == 0) goto Label_3941; // 0xf5f JumpB
	var_239_bool = 0; var_240_int = 0; // 0xf60 PushV
	var_240_int = 8; // 0xf61 MovI
	func_3786(var_239_bool, var_240_int); // 0xf62 NEW_2
	goto Label_3943; // 0xf64 Jump
	
Label_3941:
	var_32_bool = 0; // 0xf65 MovB
	return 2; // 0xf66 Return
}


func_3391()
{
	var_38_int = 2; // 0xd40 PushI
	SetReturnValue(var_38_int); // 0xd41 ObjFunc
	return 0; // 0xd43 Return
}


func_1857(var_2_object, var_3_string)
{
	func_1952(); // 0x742 NEW_2
	var_30_int = 10; // 0x744 PushI
	KillTimer(var_30_int); // 0x745 Func
	var_31_object = var_2_object; // 0x747 PushT
	if(var_31_object == 0) goto Label_1869; // 0x748 JumpB
	var_32_string = "head"; // 0x749 PushS
	UnlookAsync(var_32_string); // 0x74a Func
	var_2_object = 0; // 0x74c TMovB
	
Label_1869:
	var_3_string = 1; // 0x74d TMovB
	return 0; // 0x74e Return
}


func_3396()
{
	var_140_int = 1; // 0xd45 PushI
	SetReturnValue(var_140_int); // 0xd46 ObjFunc
	return 0; // 0xd48 Return
}


func_3401()
{
	var_149_int = 3; // 0xd4a PushI
	SetReturnValue(var_149_int); // 0xd4b ObjFunc
	return 0; // 0xd4d Return
}


func_3406()
{
	var_124_string = "oob9BoyFollower1"; // 0xd4f PushS
	var_125_int = 1; // 0xd50 PushI
	SetVariable(var_124_string, var_125_int); // 0xd51 Func
	return 0; // 0xd53 Return
}


func_2894(var_365_cvector)
{
	var_366_cvector = CVector(0,0,0); var_367_cvector = CVector(0,0,0); // 0xb4e PushV
	GetPosition(var_367_cvector); // 0xb4f Func
	var_365_cvector = var_367_cvector; // 0xb51 Mov
	return 2; // 0xb52 Return
}


func_1871()
{
	var_110_int = 0; var_111_int = 0; var_112_int = 0; var_113_int = 0; var_114_bool = 0; var_115_float = 0; var_116_bool = 0; var_117_int = 0; var_118_int = 0; var_119_int = 0; var_120_int = 0; var_121_bool = 0; var_122_float = 0; var_123_bool = 0; // 0x74f PushV
	WaitForAnimEnd(); // 0x750 Func
	var_124_bool = 0; // 0x752 PushV
	func_3141(var_124_bool); // 0x753 NEW_2
	var_125_bool = var_124_bool == 0; // 0x755 Not
	if(var_125_bool == 0) goto Label_1880; // 0x756 JumpB
	return 14; // 0x757 Return
	
Label_1880:
	var_126_int = 0; // 0x758 PushV
	func_3374(var_126_int); // 0x759 NEW_2
	var_117_int = var_126_int; // 0x75a Mov
	var_118_int = 0; // 0x75c MovI
	
Label_1885:
	var_139_bool = 0; // 0x75d PushV
	var_139_bool = 0; // 0x75e MovB
	var_140_int = 5; // 0x75f PushI
	var_141_bool = var_118_int < var_140_int; // 0x760 LT
	if(var_141_bool == 0) goto Label_1895; // 0x761 JumpB
	var_142_bool = 0; // 0x762 PushV
	func_3141(var_142_bool); // 0x763 NEW_2
	if(var_142_bool == 0) goto Label_1895; // 0x765 JumpB
	var_139_bool = 1; // 0x766 MovB
	
Label_1895:
	if(var_139_bool == 0) goto Label_1947; // 0x767 JumpB
	var_143_int = 3; // 0x768 PushI
	irand(var_119_int, var_143_int); // 0x769 Func
	var_144_int = 0; // 0x76b PushI
	var_145_bool = var_119_int == var_144_int; // 0x76c Eq
	if(var_145_bool == 0) goto Label_1919; // 0x76d JumpB
	var_146_int = var_117_int; // 0x76e Push
	if(var_146_int == 0) goto Label_1918; // 0x76f JumpB
	irand(var_120_int, var_117_int); // 0x770 Func
	var_147_string = "all"; // 0x772 PushS
	var_148_string = ""; var_149_int = 0; // 0x773 PushV
	var_149_int = var_120_int; // 0x774 Mov
	func_3367(var_148_string, var_149_int); // 0x775 NEW_2
	PlayAnimation(var_147_string, var_148_string); // 0x777 Func
	WaitForAnimEnd(var_121_bool); // 0x779 Func
	var_150_bool = var_121_bool == 0; // 0x77b Not
	if(var_150_bool == 0) goto Label_1918; // 0x77c JumpB
	goto Label_1947; // 0x77d Jump
	
Label_1947:
	ResetAAS(); // 0x79b Func
	return 14; // 0x79d Return
	
Label_1918:
	goto Label_1936; // 0x77e Jump
	
Label_1936:
	var_151_bool = 0; // 0x790 PushV
	func_1950(var_151_bool); // 0x791 NEW_2
	var_152_bool = var_151_bool == 0; // 0x793 Not
	if(var_152_bool == 0) goto Label_1942; // 0x794 JumpB
	goto Label_1947; // 0x795 Jump
	
Label_1942:
	ResetAAS(); // 0x796 Func
	var_153_int = 1; // 0x798 PushI
	var_118_int = var_118_int + var_153_int; // 0x799 Add2
	goto Label_1885; // 0x79a Jump
	
Label_1919:
	var_154_int = 1; // 0x77f PushI
	var_155_bool = var_119_int == var_154_int; // 0x780 Eq
	if(var_155_bool == 0) goto Label_1933; // 0x781 JumpB
	var_156_int = 4; // 0x782 PushI
	rand(var_122_float, var_156_int); // 0x783 Func
	var_157_int = 1; // 0x785 PushI
	var_158_int = var_122_float + var_157_int; // 0x786 Add
	Sleep(var_158_int, var_123_bool); // 0x787 Func
	var_159_bool = var_123_bool == 0; // 0x789 Not
	if(var_159_bool == 0) goto Label_1932; // 0x78a JumpB
	goto Label_1947; // 0x78b Jump
	
Label_1932:
	goto Label_1936; // 0x78c Jump
	
Label_1933:
	var_160_int = var_118_int; // 0x78d Push
	if(var_160_int == 0) goto Label_1936; // 0x78e JumpB
	goto Label_1947; // 0x78f Jump
}


func_2899(var_64_cvector)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); // 0xb53 PushV
	GetPosition(var_68_cvector); // 0xb54 Func
	GetPosition(var_69_cvector); // 0xb56 ObjFunc
	var_64_cvector = var_69_cvector - var_68_cvector; // 0xb58 Sub2
	return 4; // 0xb59 Return
}


func_3412()
{
	var_41_object = Obj(); var_42_object = Obj(); // 0xd54 PushV
	var_43_object = Obj(); // 0xd55 PushV
	func_3588(var_43_object); // 0xd56 NEW_2
	var_42_object = var_43_object; // 0xd57 Mov
	var_50_string = "b9q03Bonfire1"; // 0xd59 PushS
	var_51_string = "pt_bonfire1"; // 0xd5a PushS
	var_52_int = 0; // 0xd5b PushI
	var_53_int = 531507; // 0xd5c PushI
	var_54_float = 0; // 0xd5d PushV
	func_3362(var_54_float); // 0xd5e NEW_2
	AddMark(var_50_string, var_51_string, var_52_int, var_53_int, var_54_float); // 0xd60 ObjFunc
	var_57_string = "b9q03Bonfire2"; // 0xd62 PushS
	var_58_string = "pt_bonfire2"; // 0xd63 PushS
	var_59_int = 0; // 0xd64 PushI
	var_60_int = 531508; // 0xd65 PushI
	var_61_float = 0; // 0xd66 PushV
	func_3362(var_61_float); // 0xd67 NEW_2
	AddMark(var_57_string, var_58_string, var_59_int, var_60_int, var_61_float); // 0xd69 ObjFunc
	var_62_string = "b9q03Bonfire3"; // 0xd6b PushS
	var_63_string = "pt_bonfire3"; // 0xd6c PushS
	var_64_int = 0; // 0xd6d PushI
	var_65_int = 531509; // 0xd6e PushI
	var_66_float = 0; // 0xd6f PushV
	func_3362(var_66_float); // 0xd70 NEW_2
	AddMark(var_62_string, var_63_string, var_64_int, var_65_int, var_66_float); // 0xd72 ObjFunc
	var_67_string = "b9q03Bonfire4"; // 0xd74 PushS
	var_68_string = "pt_bonfire4"; // 0xd75 PushS
	var_69_int = 0; // 0xd76 PushI
	var_70_int = 531510; // 0xd77 PushI
	var_71_float = 0; // 0xd78 PushV
	func_3362(var_71_float); // 0xd79 NEW_2
	AddMark(var_67_string, var_68_string, var_69_int, var_70_int, var_71_float); // 0xd7b ObjFunc
	func_3521(); // 0xd7e NEW_2
	return 2; // 0xd80 Return
}


func_2906(var_773_float)
{
	var_776_cvector = CVector(0,0,0); var_777_cvector = CVector(0,0,0); var_778_cvector = CVector(0,0,0); var_779_cvector = CVector(0,0,0); var_780_cvector = CVector(0,0,0); var_781_cvector = CVector(0,0,0); // 0xb5a PushV
	GetPosition(var_779_cvector); // 0xb5b Func
	GetPosition(var_780_cvector); // 0xb5d ObjFunc
	var_781_cvector = var_780_cvector - var_779_cvector; // 0xb5f Sub2
	var_773_float = var_781_cvector | var_781_cvector; // 0xb60 Or2
	return 6; // 0xb61 Return
}


func_2914(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0; // 0xb62 PushV
	IsPlayerActor(var_32_object, var_34_bool); // 0xb63 Func
	var_31_bool = var_34_bool; // 0xb65 Mov
	return 2; // 0xb66 Return
}


func_2919(var_194_bool, var_195_object, var_196_string)
{
	var_197_bool = 0; var_198_bool = 0; // 0xb67 PushV
	var_199_string = "HasProperty"; // 0xb68 PushS
	var_200_int = 2; // 0xb69 PushI
	var_201_bool = IsFuncExist(var_195_object, var_199_string, var_200_int); // 0xb6a FuncExist
	var_202_bool = var_201_bool == 0; // 0xb6b Not
	if(var_202_bool == 0) goto Label_2927; // 0xb6c JumpB
	var_194_bool = 0; // 0xb6d MovB
	return 2; // 0xb6e Return
	
Label_2927:
	HasProperty(var_196_string, var_198_bool); // 0xb6f ObjFunc
	var_194_bool = var_198_bool; // 0xb71 Mov
	return 2; // 0xb72 Return
}


func_1389(var_0_object, var_1_object, var_2_object, var_61_int)
{
	var_62_cvector = CVector(0,0,0); var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_float = 0; // 0x56d PushV
	var_70_int = 120; // 0x56e PushI
	var_71_bool = var_61_int != var_70_int; // 0x56f Neq
	if(var_71_bool == 0) goto Label_1394; // 0x570 JumpB
	return 8; // 0x571 Return
	
Label_1394:
	var_72_bool = var_0_object == 0; // 0x572 NullEq
	if(var_72_bool == 0) goto Label_1403; // 0x573 JumpB
	Stop(); // 0x574 Func
	var_73_int = 1; // 0x576 PushI
	KillTimer(var_73_int); // 0x577 Func
	var_2_object = 1; // 0x579 TMovB
	goto Label_1440; // 0x57a Jump
	
Label_1440:
	return 8; // 0x5a0 Return
	
Label_1403:
	GetDirection(var_66_cvector); // 0x57b Func
	var_74_float = 7000.0; // 0x57d PushF
	FindDirLength(var_67_float, var_66_cvector, var_74_float); // 0x57e Func
	var_75_cvector = CVector(0,0,0); var_76_float = 0; // 0x580 PushV
	var_76_float = 1.74533; // 0x581 MovF
	func_1286(var_75_cvector, var_76_float); // 0x582 NEW_2
	var_68_cvector = var_75_cvector; // 0x583 Mov
	var_69_float = var_68_cvector | var_68_cvector; // 0x585 Or2
	var_105_bool = 0; // 0x586 PushV
	var_105_bool = 0; // 0x587 MovB
	var_106_float = 2500.0; // 0x588 PushF
	var_107_bool = var_69_float >= var_106_float; // 0x589 GE
	if(var_107_bool == 0) goto Label_1433; // 0x58a JumpB
	var_108_bool = 0; // 0x58b PushV
	var_108_bool = 1; // 0x58c MovB
	var_109_float = var_67_float * var_67_float; // 0x58d Mult
	var_110_float = 2.25; // 0x58e PushF
	var_111_float = var_109_float * var_110_float; // 0x58f Mult
	var_112_bool = var_69_float >= var_111_float; // 0x590 GE
	if(var_112_bool == 0) goto Label_1431; // 0x591 JumpB
	var_113_bool = 0; // 0x592 PushV
	func_1457(var_108_bool, var_113_bool); // 0x593 NEW_2
	if(var_113_bool == 0) goto Label_1431; // 0x595 JumpB
	var_108_bool = 0; // 0x596 MovB
	
Label_1431:
	if(var_108_bool == 0) goto Label_1433; // 0x597 JumpB
	var_105_bool = 1; // 0x598 MovB
	
Label_1433:
	if(var_105_bool == 0) goto Label_1440; // 0x599 JumpB
	Stop(); // 0x59a Func
	var_133_cvector = CVector(0,0,0); // 0x59c PushV
	func_2894(var_133_cvector); // 0x59d NEW_2
	var_1_object = var_133_cvector + var_68_cvector; // 0x59f Add2
}


func_2417(var_593_string)
{
	var_594_bool = 0; var_595_bool = 0; var_596_bool = 0; var_597_bool = 0; // 0x971 PushV
	WaitForAnimEnd(); // 0x972 Func
	var_598_bool = 0; // 0x974 PushV
	func_3141(var_598_bool); // 0x975 NEW_2
	var_599_bool = var_598_bool == 0; // 0x977 Not
	if(var_599_bool == 0) goto Label_2426; // 0x978 JumpB
	return 4; // 0x979 Return
	
Label_2426:
	var_600_string = "all"; // 0x97a PushS
	HasAnimation(var_596_bool, var_600_string, var_593_string); // 0x97b Func
	var_601_bool = var_596_bool == 0; // 0x97d Not
	if(var_601_bool == 0) goto Label_2432; // 0x97e JumpB
	return 4; // 0x97f Return
	
Label_2432:
	var_602_string = "all"; // 0x980 PushS
	PlayAnimation(var_602_string, var_593_string); // 0x981 Func
	WaitForAnimEnd(var_597_bool); // 0x983 Func
	return 4; // 0x985 Return
}


func_2931(var_187_bool)
{
	var_189_bool = 0; var_190_bool = 0; // 0xb73 PushV
	IsDead(var_190_bool); // 0xb74 ObjFunc
	var_187_bool = var_190_bool; // 0xb76 Mov
	return 2; // 0xb77 Return
}


func_2936(var_176_bool, var_177_object)
{
	var_178_object = Obj(); var_179_object = Obj(); var_180_object = Obj(); var_181_object = Obj(); // 0xb78 PushV
	var_182_bool = var_177_object == 0; // 0xb79 NullEq
	if(var_182_bool == 0) goto Label_2941; // 0xb7a JumpB
	var_176_bool = 0; // 0xb7b MovB
	return 4; // 0xb7c Return
	
Label_2941:
	var_183_bool = 0; // 0xb7d PushV
	var_183_bool = 0; // 0xb7e MovB
	var_184_string = "IsDead"; // 0xb7f PushS
	var_185_int = 1; // 0xb80 PushI
	var_186_bool = IsFuncExist(var_177_object, var_184_string, var_185_int); // 0xb81 FuncExist
	if(var_186_bool == 0) goto Label_2953; // 0xb82 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0xb83 PushV
	var_188_object = var_177_object; // 0xb84 Mov
	func_2931(var_188_object); // 0xb85 NEW_2
	if(var_187_bool == 0) goto Label_2953; // 0xb87 JumpB
	var_183_bool = 1; // 0xb88 MovB
	
Label_2953:
	if(var_183_bool == 0) goto Label_2956; // 0xb89 JumpB
	var_176_bool = 0; // 0xb8a MovB
	return 4; // 0xb8b Return
	
Label_2956:
	GetScene(var_180_object); // 0xb8c Func
	var_191_bool = var_180_object == 0; // 0xb8e NullEq
	if(var_191_bool == 0) goto Label_2962; // 0xb8f JumpB
	var_176_bool = 0; // 0xb90 MovB
	return 4; // 0xb91 Return
	
Label_2962:
	GetScene(var_181_object); // 0xb92 ObjFunc
	var_192_bool = var_180_object != var_181_object; // 0xb94 Neq
	if(var_192_bool == 0) goto Label_2968; // 0xb95 JumpB
	var_176_bool = 0; // 0xb96 MovB
	return 4; // 0xb97 Return
	
Label_2968:
	var_176_bool = 1; // 0xb98 MovB
	return 4; // 0xb99 Return
}


func_3961(var_33_bool)
{
	var_38_object = Obj(); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_float = 0; var_43_object = Obj(); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_float = 0; // 0xf79 PushV
	var_48_string = "player"; // 0xf7a PushS
	FindActor(var_43_object, var_48_string); // 0xf7b Func
	var_49_bool = 0; var_50_object = Obj(); // 0xf7d PushV
	var_50_object = var_43_object; // 0xf7e Mov
	func_2972(var_49_bool, var_50_object); // 0xf7f NEW_2
	var_83_bool = var_49_bool == 0; // 0xf81 Not
	if(var_83_bool == 0) goto Label_3973; // 0xf82 JumpB
	var_33_bool = 0; // 0xf83 MovB
	return 10; // 0xf84 Return
	
Label_3973:
	GetPosition(var_44_cvector); // 0xf85 ObjFunc
	GetPosition(var_45_cvector); // 0xf87 ObjFunc
	var_46_cvector = var_44_cvector - var_45_cvector; // 0xf89 Sub2
	var_47_float = var_46_cvector | var_46_cvector; // 0xf8a Or2
	var_84_float = 75625.0; // 0xf8b PushF
	var_33_bool = var_47_float < var_84_float; // 0xf8c LT2
	return 10; // 0xf8d Return
}


func_3458()
{
	var_125_int = 4; // 0xd83 PushI
	SetReturnValue(var_125_int); // 0xd84 ObjFunc
	return 0; // 0xd86 Return
}


func_2438()
{
	StopAnimation(); // 0x986 Func
	StopGroup0(); // 0x988 Func
	return 0; // 0x98a Return
}


func_3463()
{
	func_3534(); // 0xd89 NEW_2
	return 0; // 0xd8b Return
}


func_2443(var_2_object)
{
	var_169_object = Obj(); var_170_object = Obj(); // 0x98b PushV
	var_171_string = "player"; // 0x98c PushS
	FindActor(var_170_object, var_171_string); // 0x98d Func
	var_172_bool = 0; var_173_object = Obj(); // 0x98f PushV
	var_173_object = var_170_object; // 0x990 Mov
	func_2972(var_172_bool, var_173_object); // 0x991 NEW_2
	var_206_bool = var_172_bool == 0; // 0x993 Not
	if(var_206_bool == 0) goto Label_2458; // 0x994 JumpB
	var_207_bool = 0; var_208_int = 0; // 0x995 PushV
	var_208_int = 1; // 0x996 MovI
	func_3786(var_207_bool, var_208_int); // 0x997 NEW_2
	return 2; // 0x999 Return
	
Label_2458:
	var_209_bool = 0; var_210_object = Obj(); var_211_float = 0; var_212_float = 0; var_213_bool = 0; var_214_bool = 0; // 0x99a PushV
	var_210_object = var_170_object; // 0x99b Mov
	var_211_float = 250.0; // 0x99c MovF
	var_212_float = 6000; // 0x99d MovI
	var_213_bool = 1; // 0x99e MovB
	var_214_bool = 1; // 0x99f MovB
	func_2543(var_169_object, var_170_object, var_209_bool, var_210_object, var_211_float, var_212_float, var_213_bool, var_214_bool); // 0x9a0 NEW_2
	if(var_209_bool == 0) goto Label_2473; // 0x9a2 JumpB
	var_260_bool = var_2_object == 0; // 0x9a3 Not
	if(var_260_bool == 0) goto Label_2473; // 0x9a4 JumpB
	var_261_bool = 0; var_262_int = 0; // 0x9a5 PushV
	var_262_int = 3; // 0x9a6 MovI
	func_3786(var_261_bool, var_262_int); // 0x9a7 NEW_2
	
Label_2473:
	return 2; // 0x9a9 Return
}


func_3468()
{
	var_97_object = Obj(); var_98_string = ""; var_99_float = 0; // 0xd8d PushV
	var_100_object = Obj(); // 0xd8e PushV
	func_3588(var_100_object); // 0xd8f NEW_2
	var_97_object = var_100_object; // 0xd90 Mov
	var_98_string = "pt_bonfire1"; // 0xd92 MovS
	var_99_float = 2; // 0xd93 MovI
	func_3605(var_97_object, var_98_string, var_99_float); // 0xd94 NEW_2
	var_120_object = Obj(); // 0xd96 PushV
	func_3588(var_120_object); // 0xd97 NEW_2
	ShowMap(var_120_object); // 0xd99 ObjFunc
	return 0; // 0xd9b Return
}


func_3484(var_114_bool)
{
	var_116_int = 0; var_117_string = ""; // 0xd9d PushV
	var_117_string = "oob9BoyFollower1"; // 0xd9e MovS
	func_3345(var_116_int, var_117_string); // 0xd9f NEW_2
	var_120_int = 0; // 0xda1 PushI
	var_121_bool = var_116_int == var_120_int; // 0xda2 Eq
	if(var_121_bool == 0) goto Label_3494; // 0xda3 JumpB
	var_114_bool = 1; // 0xda4 MovB
	return 0; // 0xda5 Return
	
Label_3494:
	var_114_bool = 0; // 0xda6 MovB
	return 0; // 0xda7 Return
}


func_2972(var_172_bool, var_173_object)
{
	var_174_int = 0; var_175_int = 0; // 0xb9c PushV
	var_176_bool = 0; var_177_object = Obj(); // 0xb9d PushV
	var_177_object = var_173_object; // 0xb9e Mov
	func_2936(var_176_bool, var_177_object); // 0xb9f NEW_2
	var_193_bool = var_176_bool == 0; // 0xba1 Not
	if(var_193_bool == 0) goto Label_2981; // 0xba2 JumpB
	var_172_bool = 0; // 0xba3 MovB
	return 2; // 0xba4 Return
	
Label_2981:
	var_194_bool = 0; var_195_object = Obj(); var_196_string = ""; // 0xba5 PushV
	var_195_object = var_173_object; // 0xba6 Mov
	var_196_string = "noaccess"; // 0xba7 MovS
	func_2919(var_194_bool, var_195_object, var_196_string); // 0xba8 NEW_2
	var_203_bool = var_194_bool == 0; // 0xbaa Not
	if(var_203_bool == 0) goto Label_2990; // 0xbab JumpB
	var_172_bool = 1; // 0xbac MovB
	return 2; // 0xbad Return
	
Label_2990:
	var_204_string = "noaccess"; // 0xbae PushS
	GetProperty(var_204_string, var_175_int); // 0xbaf ObjFunc
	var_205_int = 0; // 0xbb1 PushI
	var_172_bool = var_175_int == var_205_int; // 0xbb2 Eq2
	return 2; // 0xbb3 Return
}


func_1950(var_151_bool)
{
	var_151_bool = 1; // 0x79e MovB
	return 0; // 0x79f Return
}


func_1952()
{
	StopAnimation(); // 0x7a0 Func
	StopGroup0(); // 0x7a2 Func
	return 0; // 0x7a4 Return
}


func_1441(var_2_object)
{
	Stop(); // 0x5a1 Func
	var_31_int = 120; // 0x5a3 PushI
	KillTimer(var_31_int); // 0x5a4 Func
	var_2_object = 1; // 0x5a6 TMovB
	return 0; // 0x5a7 Return
}


func_1957(var_0_object)
{
	var_270_object = Obj(); var_271_float = 0; var_272_object = Obj(); var_273_float = 0; // 0x7a5 PushV
	var_274_int = 2; // 0x7a6 PushI
	var_275_int = 1; // 0x7a7 PushI
	SetTimer(var_274_int, var_275_int); // 0x7a8 Func
	var_276_string = "player"; // 0x7aa PushS
	FindActor(var_272_object, var_276_string); // 0x7ab Func
	var_277_int = 4; // 0x7ad PushI
	rand(var_273_float, var_277_int); // 0x7ae Func
	var_278_int = 1; // 0x7b0 PushI
	var_279_bool = var_273_float > var_278_int; // 0x7b1 GT
	if(var_279_bool == 0) goto Label_1983; // 0x7b2 JumpB
	var_280_object = Obj(); // 0x7b3 PushV
	var_280_object = var_272_object; // 0x7b4 Mov
	func_3262(var_280_object); // 0x7b5 NEW_2
	var_287_int = 2; // 0x7b7 PushI
	var_288_int = var_273_float + var_287_int; // 0x7b8 Add
	Sleep(var_288_int); // 0x7b9 Func
	var_289_string = "head"; // 0x7bb PushS
	UnlookAsync(var_289_string); // 0x7bc Func
	goto Label_1987; // 0x7be Jump
	
Label_1987:
	var_290_bool = var_0_object == 0; // 0x7c3 Not
	if(var_290_bool == 0) goto Label_1993; // 0x7c4 JumpB
	var_291_bool = 0; var_292_int = 0; // 0x7c5 PushV
	var_292_int = 2; // 0x7c6 MovI
	func_3786(var_291_bool, var_292_int); // 0x7c7 NEW_2
	
Label_1993:
	var_293_int = 2; // 0x7c9 PushI
	KillTimer(var_293_int); // 0x7ca Func
	return 4; // 0x7cc Return
	
Label_1983:
	var_294_int = 2; // 0x7bf PushI
	var_295_int = var_273_float + var_294_int; // 0x7c0 Add
	Sleep(var_295_int); // 0x7c1 Func
}


func_3496(var_168_bool)
{
	var_170_int = 0; var_171_string = ""; // 0xda9 PushV
	var_171_string = "b9q03BonefiresCount"; // 0xdaa MovS
	func_3345(var_170_int, var_171_string); // 0xdab NEW_2
	var_172_int = 4; // 0xdad PushI
	var_173_bool = var_170_int == var_172_int; // 0xdae Eq
	if(var_173_bool == 0) goto Label_3506; // 0xdaf JumpB
	var_168_bool = 1; // 0xdb0 MovB
	return 0; // 0xdb1 Return
	
Label_3506:
	var_168_bool = 0; // 0xdb2 MovB
	return 0; // 0xdb3 Return
}


func_1457(var_0_object, var_113_bool)
{
	var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); // 0x5b1 PushV
	GetDirection(var_116_cvector); // 0x5b2 Func
	var_118_cvector = CVector(0,0,0); var_119_object = Obj(); // 0x5b4 PushV
	var_119_object = var_0_object; // 0x5b5 MovT
	func_2899(var_119_object); // 0x5b6 NEW_2
	var_117_cvector = var_118_cvector; // 0x5b7 Mov
	var_124_float = 0; var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0); // 0x5b9 PushV
	var_125_cvector = var_116_cvector; // 0x5ba Mov
	var_126_cvector = var_117_cvector; // 0x5bb Mov
	func_3337(var_124_float, var_125_cvector, var_126_cvector); // 0x5bc NEW_2
	var_132_float = -0.34202; // 0x5be PushF
	var_113_bool = var_124_float >= var_132_float; // 0x5bf GE2
	return 4; // 0x5c0 Return
}


func_2996(var_85_bool, var_86_cvector)
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; // 0xbb4 PushV
	GetPosition(var_90_cvector); // 0xbb5 Func
	var_91_cvector = var_86_cvector - var_90_cvector; // 0xbb7 Sub2
	var_93_float = GetByIndex(var_91_cvector, 0); // 0xbb8 PushE
	var_94_float = GetByIndex(var_91_cvector, 2); // 0xbb9 PushE
	Rotate(var_93_float, var_94_float, var_92_bool); // 0xbba Func
	var_85_bool = var_92_bool; // 0xbbc Mov
	return 6; // 0xbbd Return
}


func_3508()
{
	var_31_object = Obj(); var_32_object = Obj(); // 0xdb4 PushV
	var_33_int = 543; // 0xdb5 PushI
	var_34_int = 2; // 0xdb6 PushI
	var_35_int = 530355; // 0xdb7 PushI
	CreateDiaryEntry(var_32_object, var_33_int, var_34_int, var_35_int); // 0xdb8 Func
	var_36_bool = 0; var_37_object = Obj(); var_38_int = 0; // 0xdba PushV
	var_37_object = var_32_object; // 0xdbb Mov
	var_38_int = 532; // 0xdbc MovI
	func_3560(var_36_bool, var_37_object, var_38_int); // 0xdbd NEW_2
	return 2; // 0xdbf Return
}


func_953(var_2_object)
{
	Stop(); // 0x3b9 Func
	var_31_int = 120; // 0x3bb PushI
	KillTimer(var_31_int); // 0x3bc Func
	var_2_object = 1; // 0x3be TMovB
	return 0; // 0x3bf Return
}


func_3006(var_81_bool)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); // 0xbbe PushV
	GetPosition(var_84_cvector); // 0xbbf ObjFunc
	var_85_bool = 0; var_86_cvector = CVector(0,0,0); // 0xbc1 PushV
	var_86_cvector = var_84_cvector; // 0xbc2 Mov
	func_2996(var_85_bool, var_86_cvector); // 0xbc3 NEW_2
	var_81_bool = var_85_bool; // 0xbc4 Mov
	return 2; // 0xbc6 Return
}


func_1473(var_695_object)
{
	var_700_int = 1; // 0x5c2 PushI
	var_701_int = 3; // 0x5c3 PushI
	SetTimer(var_700_int, var_701_int); // 0x5c4 Func
	var_702_object = Obj(); // 0x5c6 PushV
	var_702_object = var_695_object; // 0x5c7 Mov
	func_1563(var_698_cvector, var_699_bool, var_695_object, var_702_object); // 0x5c8 NEW_2
	var_764_int = 1; // 0x5ca PushI
	KillTimer(var_764_int); // 0x5cb Func
	return 0; // 0x5cd Return
}


func_3521()
{
	var_72_object = Obj(); var_73_object = Obj(); // 0xdc1 PushV
	var_74_int = 534; // 0xdc2 PushI
	var_75_int = 2; // 0xdc3 PushI
	var_76_int = 530346; // 0xdc4 PushI
	CreateDiaryEntry(var_73_object, var_74_int, var_75_int, var_76_int); // 0xdc5 Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0xdc7 PushV
	var_78_object = var_73_object; // 0xdc8 Mov
	var_79_int = 532; // 0xdc9 MovI
	func_3560(var_77_bool, var_78_object, var_79_int); // 0xdca NEW_2
	return 2; // 0xdcc Return
}


func_3015(var_47_object)
{
	var_48_bool = 0; var_49_int = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_string = ""; var_55_bool = 0; var_56_int = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_string = ""; // 0xbc7 PushV
	var_62_bool = var_47_object == 0; // 0xbc8 NullEq
	if(var_62_bool == 0) goto Label_3019; // 0xbc9 JumpB
	return 14; // 0xbca Return
	
Label_3019:
	IsDead(var_55_bool); // 0xbcb Func
	var_63_bool = var_55_bool; // 0xbcd Push
	if(var_63_bool == 0) goto Label_3024; // 0xbce JumpB
	return 14; // 0xbcf Return
	
Label_3024:
	GetSecondaryAnimationType(var_56_int); // 0xbd0 Func
	var_64_int = 0; // 0xbd2 PushI
	var_65_bool = var_56_int < var_64_int; // 0xbd3 LT
	if(var_65_bool == 0) goto Label_3030; // 0xbd4 JumpB
	return 14; // 0xbd5 Return
	
Label_3030:
	GetPosition(var_57_cvector); // 0xbd6 ObjFunc
	GetPosition(var_58_cvector); // 0xbd8 Func
	GetDirection(var_59_cvector); // 0xbda Func
	var_60_cvector = var_58_cvector - var_57_cvector; // 0xbdc Sub2
	var_66_float = GetByIndex(var_60_cvector, 0); // 0xbdd PushE
	var_67_float = GetByIndex(var_59_cvector, 0); // 0xbde PushE
	var_68_float = var_66_float * var_67_float; // 0xbdf Mult
	var_69_float = GetByIndex(var_60_cvector, 2); // 0xbe0 PushE
	var_70_float = GetByIndex(var_59_cvector, 2); // 0xbe1 PushE
	var_71_float = var_69_float * var_70_float; // 0xbe2 Mult
	var_72_int = var_68_float + var_71_float; // 0xbe3 Add
	var_73_int = 0; // 0xbe4 PushI
	var_74_bool = var_72_int >= var_73_int; // 0xbe5 GE
	if(var_74_bool == 0) goto Label_3049; // 0xbe6 JumpB
	var_61_string = "fhit"; // 0xbe7 MovS
	goto Label_3050; // 0xbe8 Jump
	
Label_3050:
	var_75_string = "hit_react"; // 0xbea PushS
	var_76_string = "1"; // 0xbeb PushS
	var_77_int = var_61_string + var_76_string; // 0xbec Add
	var_78_string = "2"; // 0xbed PushS
	var_79_int = var_61_string + var_78_string; // 0xbee Add
	var_80_int = -10; // 0xbef PushI
	FadeSecondaryAnimation(var_75_string, var_77_int, var_79_int, var_80_int); // 0xbf0 Func
	return 14; // 0xbf2 Return
	
Label_3049:
	var_61_string = "bhit"; // 0xbe9 MovS
}


func_969(var_0_object, var_82_bool)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); // 0x3c9 PushV
	GetDirection(var_85_cvector); // 0x3ca Func
	var_87_cvector = CVector(0,0,0); var_88_object = Obj(); // 0x3cc PushV
	var_88_object = var_0_object; // 0x3cd MovT
	func_2899(var_88_object); // 0x3ce NEW_2
	var_86_cvector = var_87_cvector; // 0x3cf Mov
	var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); // 0x3d1 PushV
	var_94_cvector = var_85_cvector; // 0x3d2 Mov
	var_95_cvector = var_86_cvector; // 0x3d3 Mov
	func_3337(var_93_float, var_94_cvector, var_95_cvector); // 0x3d4 NEW_2
	var_101_float = -0.34202; // 0x3d6 PushF
	var_82_bool = var_93_float >= var_101_float; // 0x3d7 GE2
	return 4; // 0x3d8 Return
}


func_1998()
{
	StopGroup0(); // 0x7ce Func
	return 0; // 0x7d0 Return
}


func_3534()
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xdce PushV
	var_130_int = 535; // 0xdcf PushI
	var_131_int = 2; // 0xdd0 PushI
	var_132_int = 530347; // 0xdd1 PushI
	CreateDiaryEntry(var_129_object, var_130_int, var_131_int, var_132_int); // 0xdd2 Func
	var_133_bool = 0; var_134_object = Obj(); var_135_int = 0; // 0xdd4 PushV
	var_134_object = var_129_object; // 0xdd5 Mov
	var_135_int = 532; // 0xdd6 MovI
	func_3560(var_133_bool, var_134_object, var_135_int); // 0xdd7 NEW_2
	return 2; // 0xdd9 Return
}


func_985()
{
	var_303_object = Obj(); var_304_object = Obj(); // 0x3d9 PushV
	
Label_986:
	var_305_bool = 1; // 0x3da PushB
	if(var_305_bool == 0) goto Label_1014; // 0x3db JumpB
	var_306_string = "player"; // 0x3dc PushS
	FindActor(var_304_object, var_306_string); // 0x3dd Func
	var_307_bool = 0; var_308_object = Obj(); // 0x3df PushV
	var_308_object = var_304_object; // 0x3e0 Mov
	func_2972(var_307_bool, var_308_object); // 0x3e1 NEW_2
	var_309_bool = var_307_bool == 0; // 0x3e3 Not
	if(var_309_bool == 0) goto Label_1005; // 0x3e4 JumpB
	var_310_int = 3; // 0x3e5 PushI
	Sleep(var_310_int); // 0x3e6 Func
	var_311_string = var_3_string; // 0x3e8 PushT
	if(var_311_string == 0) goto Label_1004; // 0x3e9 JumpB
	goto Label_1014; // 0x3ea Jump
	
Label_1014:
	return 2; // 0x3f6 Return
	
Label_1004:
	goto Label_986; // 0x3ec Jump
	
Label_1005:
	var_312_object = Obj(); // 0x3ed PushV
	var_312_object = var_304_object; // 0x3ee Mov
	func_1056(var_302_bool, var_303_object, var_304_object, var_312_object); // 0x3ef NEW_2
	var_381_string = var_3_string; // 0x3f1 PushT
	if(var_381_string == 0) goto Label_1012; // 0x3f2 JumpB
	goto Label_1014; // 0x3f3 Jump
	
Label_1012:
	var_304_object = 0; // 0x3f4 SetNull
	goto Label_986; // 0x3f5 Jump
}


func_3547(var_45_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0xddb PushV
	GetDiaryRoot(var_47_object); // 0xddc Func
	var_48_bool = var_47_object == 0; // 0xdde Not
	if(var_48_bool == 0) goto Label_3557; // 0xddf JumpB
	var_49_string = "Can't retrieve diary root"; // 0xde0 PushS
	Trace(var_49_string); // 0xde1 Func
	var_45_object = 0; // 0xde3 MovB
	return 2; // 0xde4 Return
	
Label_3557:
	var_45_object = var_47_object; // 0xde5 Mov
	return 2; // 0xde6 Return
}


func_3560(var_36_bool, var_37_object, var_38_int)
{
	var_39_object = Obj(); var_40_object = Obj(); var_41_int = 0; var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; // 0xde8 PushV
	var_45_object = Obj(); // 0xde9 PushV
	func_3547(var_45_object); // 0xdea NEW_2
	var_42_object = var_45_object; // 0xdeb Mov
	Find(var_38_int, var_43_object); // 0xded ObjFunc
	var_50_bool = var_43_object == 0; // 0xdef Not
	if(var_50_bool == 0) goto Label_3575; // 0xdf0 JumpB
	var_51_string = "Can't find diary parent with id: "; // 0xdf1 PushS
	var_52_int = var_51_string + var_38_int; // 0xdf2 Add
	Trace(var_52_int); // 0xdf3 Func
	var_36_bool = 0; // 0xdf5 MovB
	return 6; // 0xdf6 Return
	
Label_3575:
	AddChild(var_37_object); // 0xdf7 ObjFunc
	var_53_int = 7; // 0xdf9 PushI
	SendWorldWndMessage(var_53_int); // 0xdfa Func
	GetCategory(var_44_int); // 0xdfc ObjFunc
	SetDiarySection(var_44_int); // 0xdfe Func
	var_36_bool = 0; // 0xe00 MovB
	return 6; // 0xe01 Return
}


func_2543(var_0_object, var_1_object, var_209_bool, var_210_object, var_211_float, var_212_float, var_213_bool, var_214_bool)
{
	var_215_bool = 0; var_216_bool = 0; var_217_object = Obj(); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_float = 0; var_222_object = Obj(); var_223_bool = 0; var_224_bool = 0; var_225_object = Obj(); var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_float = 0; var_230_object = Obj(); // 0x9ef PushV
	var_0_object = 0; // 0x9f0 TMovB
	var_1_object = var_210_object; // 0x9f1 TMov
	var_224_bool = var_214_bool; // 0x9f2 Mov
	
Label_2547:
	var_231_bool = 0; var_232_object = Obj(); // 0x9f3 PushV
	var_232_object = var_210_object; // 0x9f4 Mov
	func_2683(var_231_bool, var_232_object); // 0x9f5 NEW_2
	var_235_bool = var_231_bool == 0; // 0x9f7 Not
	if(var_235_bool == 0) goto Label_2555; // 0x9f8 JumpB
	var_209_bool = 0; // 0x9f9 MovB
	return 16; // 0x9fa Return
	
Label_2555:
	GetPosition(var_226_cvector); // 0x9fb ObjFunc
	GetPosition(var_227_cvector); // 0x9fd Func
	var_228_cvector = var_226_cvector - var_227_cvector; // 0x9ff Sub2
	var_229_float = var_228_cvector | var_228_cvector; // 0xa00 Or2
	var_236_bool = 0; // 0xa01 PushV
	var_236_bool = 0; // 0xa02 MovB
	var_237_int = 0; // 0xa03 PushI
	var_238_bool = var_212_float > var_237_int; // 0xa04 GT
	if(var_238_bool == 0) goto Label_2570; // 0xa05 JumpB
	var_239_float = var_212_float * var_212_float; // 0xa06 Mult
	var_240_bool = var_229_float > var_239_float; // 0xa07 GT
	if(var_240_bool == 0) goto Label_2570; // 0xa08 JumpB
	var_236_bool = 1; // 0xa09 MovB
	
Label_2570:
	if(var_236_bool == 0) goto Label_2575; // 0xa0a JumpB
	Stop(); // 0xa0b Func
	var_209_bool = 0; // 0xa0d MovB
	return 16; // 0xa0e Return
	
Label_2575:
	var_241_float = var_211_float * var_211_float; // 0xa0f Mult
	var_242_bool = var_229_float > var_241_float; // 0xa10 GT
	if(var_242_bool == 0) goto Label_2637; // 0xa11 JumpB
	GetPFPosition(var_226_cvector); // 0xa12 ObjFunc
	FindPathTo(var_230_object, var_226_cvector); // 0xa14 Func
	var_243_bool = var_230_object != 0; // 0xa16 NullNeq
	if(var_243_bool == 0) goto Label_2586; // 0xa17 JumpB
	var_225_object = var_230_object; // 0xa18 Mov
	var_230_object = 0; // 0xa19 SetNull
	
Label_2586:
	var_244_bool = var_225_object != 0; // 0xa1a NullNeq
	if(var_244_bool == 0) goto Label_2619; // 0xa1b JumpB
	var_245_bool = var_224_bool; // 0xa1c Push
	if(var_245_bool == 0) goto Label_2596; // 0xa1d JumpB
	var_224_bool = 0; // 0xa1e MovB
	RotatePath(var_225_object, var_223_bool); // 0xa1f Func
	var_246_bool = var_223_bool == 0; // 0xa21 Not
	if(var_246_bool == 0) goto Label_2596; // 0xa22 JumpB
	goto Label_2643; // 0xa23 Jump
	
Label_2643:
	var_209_bool = !var_0_object; // 0xa53 Not2
	return 16; // 0xa54 Return
	
Label_2596:
	var_247_int = 0; // 0xa24 PushI
	var_248_float = 0.3; // 0xa25 PushF
	SetTimer(var_247_int, var_248_float); // 0xa26 Func
	var_249_string = ""; // 0xa28 PushV
	func_2690(var_249_string); // 0xa29 NEW_2
	var_250_string = ""; // 0xa2b PushV
	func_2692(var_250_string); // 0xa2c NEW_2
	FollowPath(var_225_object, var_213_bool, var_223_bool, var_249_string, var_250_string); // 0xa2e Func
	var_251_bool = var_223_bool == 0; // 0xa30 Not
	if(var_251_bool == 0) goto Label_2617; // 0xa31 JumpB
	var_252_object = var_0_object; // 0xa32 PushT
	if(var_252_object == 0) goto Label_2615; // 0xa33 JumpB
	var_225_object = 0; // 0xa34 SetNull
	goto Label_2643; // 0xa35 Jump
	
Label_2615:
	goto Label_2642; // 0xa37 Jump
	
Label_2642:
	goto Label_2547; // 0xa52 Jump
	
Label_2617:
	var_225_object = 0; // 0xa39 SetNull
	goto Label_2635; // 0xa3a Jump
	
Label_2635:
	var_230_object = 0; // 0xa4b SetNull
	goto Label_2641; // 0xa4c Jump
	
Label_2641:
	var_225_object = 0; // 0xa51 SetNull
	
Label_2619:
	var_253_int = 0; // 0xa3b PushI
	KillTimer(var_253_int); // 0xa3c Func
	var_254_float = 0.5; // 0xa3e PushF
	Sleep(var_254_float, var_223_bool); // 0xa3f Func
	var_255_bool = var_223_bool == 0; // 0xa41 Not
	if(var_255_bool == 0) goto Label_2631; // 0xa42 JumpB
	var_256_object = var_0_object; // 0xa43 PushT
	if(var_256_object == 0) goto Label_2631; // 0xa44 JumpB
	var_225_object = 0; // 0xa45 SetNull
	goto Label_2643; // 0xa46 Jump
	
Label_2631:
	var_257_int = 0; // 0xa47 PushI
	var_258_float = 0.3; // 0xa48 PushF
	SetTimer(var_257_int, var_258_float); // 0xa49 Func
	
Label_2637:
	var_259_int = 0; // 0xa4d PushI
	KillTimer(var_259_int); // 0xa4e Func
	goto Label_2643; // 0xa50 Jump
}


func_3059(var_34_object, var_35_int, var_36_float)
{
	var_37_cvector = CVector(0,0,0); var_38_object = Obj(); var_39_int = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_int = 0; var_44_int = 0; var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_object = Obj(); var_48_int = 0; var_49_bool = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_int = 0; var_53_int = 0; var_54_cvector = CVector(0,0,0); // 0xbf3 PushV
	var_55_bool = 0; // 0xbf4 PushV
	var_55_bool = 0; // 0xbf5 MovB
	var_56_bool = 0; // 0xbf6 PushV
	var_56_bool = 0; // 0xbf7 MovB
	var_57_object = var_34_object; // 0xbf8 Push
	if(var_57_object == 0) goto Label_3070; // 0xbf9 JumpB
	var_58_int = 4; // 0xbfa PushI
	var_59_bool = var_35_int != var_58_int; // 0xbfb Neq
	if(var_59_bool == 0) goto Label_3070; // 0xbfc JumpB
	var_56_bool = 1; // 0xbfd MovB
	
Label_3070:
	if(var_56_bool == 0) goto Label_3075; // 0xbfe JumpB
	var_60_int = 5; // 0xbff PushI
	var_61_bool = var_35_int != var_60_int; // 0xc00 Neq
	if(var_61_bool == 0) goto Label_3075; // 0xc01 JumpB
	var_55_bool = 1; // 0xc02 MovB
	
Label_3075:
	if(var_55_bool == 0) goto Label_3122; // 0xc03 JumpB
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0xc04 PushV
	var_64_cvector = CVector(0,0,0); var_65_object = Obj(); // 0xc05 PushV
	var_65_object = var_34_object; // 0xc06 Mov
	func_2899(var_65_object); // 0xc07 NEW_2
	var_63_cvector = var_64_cvector; // 0xc08 Mov
	func_3327(var_62_cvector, var_63_cvector); // 0xc0a NEW_2
	var_46_cvector = var_62_cvector; // 0xc0b Mov
	CreateVectorVector(var_47_object); // 0xc0d Func
	var_48_int = 1; // 0xc0f MovI
	
Label_3088:
	var_75_string = "hit"; // 0xc10 PushS
	var_76_int = var_75_string + var_48_int; // 0xc11 Add
	GetGeometryLocator(var_76_int, var_49_bool, var_50_cvector, var_51_cvector); // 0xc12 Func
	var_77_bool = var_49_bool == 0; // 0xc14 Not
	if(var_77_bool == 0) goto Label_3095; // 0xc15 JumpB
	goto Label_3104; // 0xc16 Jump
	
Label_3104:
	size(var_52_int); // 0xc20 ObjFunc
	var_78_int = var_52_int; // 0xc22 Push
	if(var_78_int == 0) goto Label_3121; // 0xc23 JumpB
	irand(var_53_int, var_52_int); // 0xc24 Func
	get(var_54_cvector, var_53_int); // 0xc26 ObjFunc
	var_79_object = Obj(); var_80_int = 0; var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); // 0xc28 PushV
	var_79_object = var_34_object; // 0xc29 Mov
	var_80_int = var_35_int; // 0xc2a Mov
	var_81_float = var_36_float; // 0xc2b Mov
	var_82_cvector = var_54_cvector; // 0xc2c Mov
	var_83_cvector = -var_46_cvector; // 0xc2d Neg2
	func_3127(var_81_float, var_82_cvector, var_83_cvector); // 0xc2e NEW_2
	return 18; // 0xc30 Return
	
Label_3121:
	var_47_object = 0; // 0xc31 SetNull
	
Label_3122:
	var_124_object = Obj(); // 0xc32 PushV
	var_124_object = var_34_object; // 0xc33 Mov
	func_3015(var_124_object); // 0xc34 NEW_2
	return 18; // 0xc36 Return
	
Label_3095:
	var_125_int = var_51_cvector | var_46_cvector; // 0xc17 Or
	var_126_float = 0.70711; // 0xc18 PushF
	var_127_bool = var_125_int >= var_126_float; // 0xc19 GE
	if(var_127_bool == 0) goto Label_3101; // 0xc1a JumpB
	add(var_50_cvector); // 0xc1b ObjFunc
	
Label_3101:
	var_128_int = 1; // 0xc1d PushI
	var_48_int = var_48_int + var_128_int; // 0xc1e Add2
	goto Label_3088; // 0xc1f Jump
}


func_1533(var_713_cvector, var_714_float)
{
	var_715_cvector = CVector(0,0,0); var_716_cvector = CVector(0,0,0); var_717_cvector = CVector(0,0,0); var_718_cvector = CVector(0,0,0); var_719_cvector = CVector(0,0,0); var_720_float = 0; var_721_cvector = CVector(0,0,0); var_722_cvector = CVector(0,0,0); var_723_cvector = CVector(0,0,0); var_724_cvector = CVector(0,0,0); var_725_cvector = CVector(0,0,0); var_726_float = 0; // 0x5fd PushV
	GetPosition(var_721_cvector); // 0x5fe Func
	GetPosition(var_722_cvector); // 0x600 TObjFunc
	GetDirection(var_723_cvector); // 0x602 Func
	var_727_cvector = CVector(0,0,0); var_728_cvector = CVector(0,0,0); // 0x604 PushV
	var_729_cvector = CVector(0,0,0); var_730_cvector = CVector(0,0,0); // 0x605 PushV
	var_730_cvector = var_721_cvector - var_722_cvector; // 0x606 Sub2
	func_3327(var_729_cvector, var_730_cvector); // 0x607 NEW_2
	var_731_float = 0.75; // 0x609 PushF
	var_732_float = var_723_cvector * var_731_float; // 0x60a Mult
	var_728_cvector = var_729_cvector + var_732_float; // 0x60b Add2
	func_3327(var_727_cvector, var_728_cvector); // 0x60c NEW_2
	var_724_cvector = var_727_cvector; // 0x60d Mov
	var_733_int = 32; // 0x60f PushI
	var_734_float = 7000.0; // 0x610 PushF
	FindLongestDir(var_725_cvector, var_726_float, var_724_cvector, var_714_float, var_733_int, var_734_float); // 0x611 Func
	var_735_int = 100; // 0x613 PushI
	var_726_float = var_726_float - var_735_int; // 0x614 Sub2
	var_736_int = 0; // 0x615 PushI
	var_737_bool = var_726_float < var_736_int; // 0x616 LT
	if(var_737_bool == 0) goto Label_1561; // 0x617 JumpB
	var_726_float = 0; // 0x618 MovI
	
Label_1561:
	var_713_cvector = var_725_cvector * var_726_float; // 0x619 Mult2
	return 12; // 0x61a Return
}


