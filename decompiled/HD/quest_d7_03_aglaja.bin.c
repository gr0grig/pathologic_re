task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc9 PushI
	if(var_9_int == 0) goto Label_521; // 0xca JumpB
	func_1126(); // 0xcc NEW_2
	var_11_int = 34783; // 0xce PushI
	var_12_bool = var_8_bool == var_11_int; // 0xcf Eq
	if(var_12_bool == 0) goto Label_224; // 0xd0 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xd1 PushV
	var_13_object = var_1_object; // 0xd2 MovT
	var_14_object = var_0_object; // 0xd3 MovT
	func_1266(var_14_object); // 0xd4 NEW_2
	var_37_object = Obj(); var_38_object = Obj(); // 0xd6 PushV
	var_37_object = var_1_object; // 0xd7 MovT
	var_38_object = var_0_object; // 0xd8 MovT
	func_1310(var_38_object); // 0xd9 NEW_2
	var_43_object = Obj(); var_44_object = Obj(); // 0xdb PushV
	var_43_object = var_1_object; // 0xdc MovT
	var_44_object = var_0_object; // 0xdd MovT
	func_1256(); // 0xde NEW_2
	
Label_224:
	var_74_int = 34784; // 0xe0 PushI
	var_75_bool = var_8_bool == var_74_int; // 0xe1 Eq
	if(var_75_bool == 0) goto Label_237; // 0xe2 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0xe3 PushV
	var_76_object = var_1_object; // 0xe4 MovT
	var_77_object = var_0_object; // 0xe5 MovT
	func_1256(); // 0xe6 NEW_2
	var_78_object = Obj(); var_79_object = Obj(); // 0xe8 PushV
	var_78_object = var_1_object; // 0xe9 MovT
	var_79_object = var_0_object; // 0xea MovT
	func_1277(var_79_object); // 0xeb NEW_2
	
Label_237:
	var_84_int = 34785; // 0xed PushI
	var_85_bool = var_8_bool == var_84_int; // 0xee Eq
	if(var_85_bool == 0) goto Label_260; // 0xef JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0xf0 PushV
	var_86_object = var_1_object; // 0xf1 MovT
	var_87_object = var_0_object; // 0xf2 MovT
	func_1256(); // 0xf3 NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0xf5 PushV
	var_88_object = var_1_object; // 0xf6 MovT
	var_89_object = var_0_object; // 0xf7 MovT
	func_1288(var_89_object); // 0xf8 NEW_2
	var_94_object = Obj(); var_95_object = Obj(); // 0xfa PushV
	var_94_object = var_1_object; // 0xfb MovT
	var_95_object = var_0_object; // 0xfc MovT
	func_1299(var_95_object); // 0xfd NEW_2
	var_100_object = Obj(); var_101_object = Obj(); // 0xff PushV
	var_100_object = var_1_object; // 0x100 MovT
	var_101_object = var_0_object; // 0x101 MovT
	func_1299(var_101_object); // 0x102 NEW_2
	
Label_260:
	var_102_int = 34786; // 0x104 PushI
	var_103_bool = var_8_bool == var_102_int; // 0x105 Eq
	if(var_103_bool == 0) goto Label_268; // 0x106 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x107 PushV
	var_104_object = var_1_object; // 0x108 MovT
	var_105_object = var_0_object; // 0x109 MovT
	func_1256(); // 0x10a NEW_2
	
Label_268:
	var_106_int = 34782; // 0x10c PushI
	var_107_bool = var_7_cvector == var_106_int; // 0x10d Eq
	if(var_107_bool == 0) goto Label_330; // 0x10e JumpB
	var_108_bool = 0; // 0x10f PushV
	var_108_bool = 0; // 0x110 MovB
	var_109_bool = 0; var_110_object = Obj(); // 0x111 PushV
	var_110_object = var_1_object; // 0x112 MovT
	func_1321(var_110_object); // 0x113 NEW_2
	if(var_109_bool == 0) goto Label_284; // 0x115 JumpB
	var_117_bool = 0; var_118_object = Obj(); // 0x116 PushV
	var_118_object = var_1_object; // 0x117 MovT
	func_1333(var_118_object); // 0x118 NEW_2
	if(var_117_bool == 0) goto Label_284; // 0x11a JumpB
	var_108_bool = 1; // 0x11b MovB
	
Label_284:
	if(var_108_bool == 0) goto Label_310; // 0x11c JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x11d PushV
	var_123_object = var_1_object; // 0x11e MovT
	var_124_object = var_0_object; // 0x11f MovT
	func_1243(); // 0x120 NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x122 PushV
	var_127_object = var_1_object; // 0x123 MovT
	var_128_object = var_0_object; // 0x124 MovT
	func_1249(); // 0x125 NEW_2
	var_132_string = ""; // 0x127 PushV
	var_132_string = "Isee"; // 0x128 MovS
	func_178(var_8_bool, var_132_string); // 0x129 NEW_2
	var_149_int = 533268; // 0x12b PushI
	SetMessage(var_149_int); // 0x12c TObjFunc
	ClearReplies(); // 0x12e TObjFunc
	var_150_int = 534543; // 0x130 PushI
	var_151_int = 36176; // 0x131 PushI
	var_152_int = 36175; // 0x132 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_153_string = ""; // 0x136 PushV
	var_153_string = "Neutral"; // 0x137 MovS
	func_178(var_8_bool, var_153_string); // 0x138 NEW_2
	var_154_int = 533273; // 0x13a PushI
	SetMessage(var_154_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_155_int = 533274; // 0x13f PushI
	var_156_int = -1; // 0x140 PushI
	var_157_int = 34788; // 0x141 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x142 TObjFunc
	var_158_int = 534553; // 0x144 PushI
	var_159_int = -1; // 0x145 PushI
	var_160_int = 36185; // 0x146 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x147 TObjFunc
	return 0; // 0x149 Return
	
Label_330:
	var_161_int = 36176; // 0x14a PushI
	var_162_bool = var_7_cvector == var_161_int; // 0x14b Eq
	if(var_162_bool == 0) goto Label_348; // 0x14c JumpB
	var_163_string = ""; // 0x14d PushV
	var_163_string = "Isee"; // 0x14e MovS
	func_178(var_8_bool, var_163_string); // 0x14f NEW_2
	var_164_int = 534544; // 0x151 PushI
	SetMessage(var_164_int); // 0x152 TObjFunc
	ClearReplies(); // 0x154 TObjFunc
	var_165_int = 534545; // 0x156 PushI
	var_166_int = 36178; // 0x157 PushI
	var_167_int = 36177; // 0x158 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x159 TObjFunc
	return 0; // 0x15b Return
	
Label_348:
	var_168_int = 36178; // 0x15c PushI
	var_169_bool = var_7_cvector == var_168_int; // 0x15d Eq
	if(var_169_bool == 0) goto Label_371; // 0x15e JumpB
	var_170_string = ""; // 0x15f PushV
	var_170_string = "Isee"; // 0x160 MovS
	func_178(var_8_bool, var_170_string); // 0x161 NEW_2
	var_171_int = 534546; // 0x163 PushI
	SetMessage(var_171_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_172_int = 534547; // 0x168 PushI
	var_173_int = 36180; // 0x169 PushI
	var_174_int = 36179; // 0x16a PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x16b TObjFunc
	var_175_int = 535169; // 0x16d PushI
	var_176_int = 36835; // 0x16e PushI
	var_177_int = 36834; // 0x16f PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x170 TObjFunc
	return 0; // 0x172 Return
	
Label_371:
	var_178_int = 36835; // 0x173 PushI
	var_179_bool = var_7_cvector == var_178_int; // 0x174 Eq
	if(var_179_bool == 0) goto Label_389; // 0x175 JumpB
	var_180_string = ""; // 0x176 PushV
	var_180_string = "Neutral"; // 0x177 MovS
	func_178(var_8_bool, var_180_string); // 0x178 NEW_2
	var_181_int = 535170; // 0x17a PushI
	SetMessage(var_181_int); // 0x17b TObjFunc
	ClearReplies(); // 0x17d TObjFunc
	var_182_int = 535171; // 0x17f PushI
	var_183_int = 36180; // 0x180 PushI
	var_184_int = 36836; // 0x181 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x182 TObjFunc
	return 0; // 0x184 Return
	
Label_389:
	var_185_int = 36180; // 0x185 PushI
	var_186_bool = var_7_cvector == var_185_int; // 0x186 Eq
	if(var_186_bool == 0) goto Label_407; // 0x187 JumpB
	var_187_string = ""; // 0x188 PushV
	var_187_string = "Isee"; // 0x189 MovS
	func_178(var_8_bool, var_187_string); // 0x18a NEW_2
	var_188_int = 534548; // 0x18c PushI
	SetMessage(var_188_int); // 0x18d TObjFunc
	ClearReplies(); // 0x18f TObjFunc
	var_189_int = 534549; // 0x191 PushI
	var_190_int = 36182; // 0x192 PushI
	var_191_int = 36181; // 0x193 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x194 TObjFunc
	return 0; // 0x196 Return
	
Label_407:
	var_192_int = 36182; // 0x197 PushI
	var_193_bool = var_7_cvector == var_192_int; // 0x198 Eq
	if(var_193_bool == 0) goto Label_430; // 0x199 JumpB
	var_194_string = ""; // 0x19a PushV
	var_194_string = "Threat"; // 0x19b MovS
	func_178(var_8_bool, var_194_string); // 0x19c NEW_2
	var_195_int = 534550; // 0x19e PushI
	SetMessage(var_195_int); // 0x19f TObjFunc
	ClearReplies(); // 0x1a1 TObjFunc
	var_196_int = 534551; // 0x1a3 PushI
	var_197_int = 36841; // 0x1a4 PushI
	var_198_int = 36183; // 0x1a5 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x1a6 TObjFunc
	var_199_int = 535172; // 0x1a8 PushI
	var_200_int = 36839; // 0x1a9 PushI
	var_201_int = 36838; // 0x1aa PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x1ab TObjFunc
	return 0; // 0x1ad Return
	
Label_430:
	var_202_int = 36839; // 0x1ae PushI
	var_203_bool = var_7_cvector == var_202_int; // 0x1af Eq
	if(var_203_bool == 0) goto Label_448; // 0x1b0 JumpB
	var_204_string = ""; // 0x1b1 PushV
	var_204_string = "Neutral"; // 0x1b2 MovS
	func_178(var_8_bool, var_204_string); // 0x1b3 NEW_2
	var_205_int = 535173; // 0x1b5 PushI
	SetMessage(var_205_int); // 0x1b6 TObjFunc
	ClearReplies(); // 0x1b8 TObjFunc
	var_206_int = 535174; // 0x1ba PushI
	var_207_int = 36184; // 0x1bb PushI
	var_208_int = 36840; // 0x1bc PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x1bd TObjFunc
	return 0; // 0x1bf Return
	
Label_448:
	var_209_int = 36841; // 0x1c0 PushI
	var_210_bool = var_7_cvector == var_209_int; // 0x1c1 Eq
	if(var_210_bool == 0) goto Label_476; // 0x1c2 JumpB
	var_211_string = ""; // 0x1c3 PushV
	var_211_string = "Threat"; // 0x1c4 MovS
	func_178(var_8_bool, var_211_string); // 0x1c5 NEW_2
	var_212_int = 535175; // 0x1c7 PushI
	SetMessage(var_212_int); // 0x1c8 TObjFunc
	ClearReplies(); // 0x1ca TObjFunc
	var_213_int = 535176; // 0x1cc PushI
	var_214_int = 36184; // 0x1cd PushI
	var_215_int = 36842; // 0x1ce PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x1cf TObjFunc
	var_216_bool = 0; var_217_object = Obj(); // 0x1d1 PushV
	var_217_object = var_1_object; // 0x1d2 MovT
	func_1345(var_217_object); // 0x1d3 NEW_2
	if(var_216_bool == 0) goto Label_475; // 0x1d5 JumpB
	var_222_int = 535177; // 0x1d6 PushI
	var_223_int = -1; // 0x1d7 PushI
	var_224_int = 36843; // 0x1d8 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1d9 TObjFunc
	
Label_475:
	return 0; // 0x1db Return
	
Label_476:
	var_225_int = 36184; // 0x1dc PushI
	var_226_bool = var_7_cvector == var_225_int; // 0x1dd Eq
	if(var_226_bool == 0) goto Label_509; // 0x1de JumpB
	var_227_string = ""; // 0x1df PushV
	var_227_string = "Neutral"; // 0x1e0 MovS
	func_178(var_8_bool, var_227_string); // 0x1e1 NEW_2
	var_228_int = 534552; // 0x1e3 PushI
	SetMessage(var_228_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_229_int = 533269; // 0x1e8 PushI
	var_230_int = -1; // 0x1e9 PushI
	var_231_int = 34783; // 0x1ea PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x1eb TObjFunc
	var_232_int = 533270; // 0x1ed PushI
	var_233_int = -1; // 0x1ee PushI
	var_234_int = 34784; // 0x1ef PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x1f0 TObjFunc
	var_235_int = 533271; // 0x1f2 PushI
	var_236_int = -1; // 0x1f3 PushI
	var_237_int = 34785; // 0x1f4 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x1f5 TObjFunc
	var_238_int = 533272; // 0x1f7 PushI
	var_239_int = -1; // 0x1f8 PushI
	var_240_int = 34786; // 0x1f9 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1fa TObjFunc
	return 0; // 0x1fc Return
	
Label_509:
	var_3_string = 1; // 0x1fd TMovB
	var_241_bool = 0; // 0x1fe PushV
	func_1436(var_241_bool); // 0x1ff NEW_2
	if(var_241_bool == 0) goto Label_517; // 0x201 JumpB
	lshStopAnimation(); // 0x202 Func
	goto Label_519; // 0x204 Jump
	
Label_519:
	return 0; // 0x207 Return
	
Label_517:
	StopAnimation(); // 0x205 Func
	
Label_521:
	return 0; // 0x209 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x216 PushV
	var_10_string = "cleanup"; // 0x217 PushS
	var_11_bool = var_7_string == var_10_string; // 0x218 Eq
	if(var_11_bool == 0) goto Label_549; // 0x219 JumpB
	var_1_object = 1; // 0x21a TMovB
	IsLoaded(var_9_bool); // 0x21b Func
	var_12_bool = var_9_bool == 0; // 0x21d Not
	if(var_12_bool == 0) goto Label_548; // 0x21e JumpB
	var_13_object = Obj(); // 0x21f PushV
	func_1133(var_13_object); // 0x220 NEW_2
	RemoveActor(var_13_object); // 0x222 Func
	
Label_548:
	goto Label_553; // 0x224 Jump
	
Label_553:
	return 2; // 0x229 Return
	
Label_549:
	var_16_string = "restore"; // 0x225 PushS
	var_17_bool = var_7_string == var_16_string; // 0x226 Eq
	if(var_17_bool == 0) goto Label_553; // 0x227 JumpB
	var_1_object = 0; // 0x228 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x22a PushT
	if(var_7_object == 0) goto Label_563; // 0x22b JumpB
	var_8_object = Obj(); // 0x22c PushV
	func_1133(var_8_object); // 0x22d NEW_2
	RemoveActor(var_8_object); // 0x22f Func
	Hold(); // 0x231 Func
	
Label_563:
	func_678(); // 0x234 NEW_2
	return 0; // 0x236 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_693(); // 0x238 NEW_2
	return 0; // 0x23a Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x281 PushI
	var_9_bool = var_7_int == var_8_int; // 0x282 Eq
	if(var_9_bool == 0) goto Label_677; // 0x283 JumpB
	func_636(); // 0x285 NEW_2
	var_11_bool = 0; // 0x287 PushV
	var_11_bool = 0; // 0x288 MovB
	var_12_bool = 0; // 0x289 PushV
	func_850(var_12_bool); // 0x28a NEW_2
	if(var_12_bool == 0) goto Label_658; // 0x28c JumpB
	var_15_bool = 0; // 0x28d PushV
	func_605(var_15_bool); // 0x28e NEW_2
	if(var_15_bool == 0) goto Label_658; // 0x290 JumpB
	var_11_bool = 1; // 0x291 MovB
	
Label_658:
	if(var_11_bool == 0) goto Label_671; // 0x292 JumpB
	var_32_bool = 0; // 0x293 PushV
	func_585(var_32_bool); // 0x294 NEW_2
	if(var_32_bool == 0) goto Label_670; // 0x296 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x297 PushV
	var_53_object = Obj(); // 0x298 PushV
	func_1133(var_53_object); // 0x299 NEW_2
	var_52_object = var_53_object; // 0x29a Mov
	func_1000(var_52_object); // 0x29c NEW_2
	
Label_670:
	goto Label_677; // 0x29e Jump
	
Label_677:
	return 0; // 0x2a5 Return
	
Label_671:
	func_600(var_7_int); // 0x2a0 NEW_2
	func_627(); // 0x2a3 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x2c3 Push
	if(var_8_bool == 0) goto Label_713; // 0x2c4 JumpB
	func_627(); // 0x2c6 NEW_2
	goto Label_717; // 0x2c8 Jump
	
Label_717:
	return 0; // 0x2cd Return
	
Label_713:
	var_14_string = ""; // 0x2c9 PushV
	var_14_string = "Neutral"; // 0x2ca MovS
	func_1080(var_14_string); // 0x2cb NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2ce PushV
	IsOverrideActive(var_9_bool); // 0x2cf Func
	var_10_bool = var_9_bool == 0; // 0x2d1 Not
	if(var_10_bool == 0) goto Label_746; // 0x2d2 JumpB
	EventDisable(0); // 0x2d3 EventDisable
	func_818(); // 0x2d5 NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x2d7 PushV
	var_12_object = var_7_object; // 0x2d8 Mov
	func_841(var_12_object); // 0x2d9 NEW_2
	EventEnable(0); // 0x2db EventEnable
	var_25_object = Obj(); // 0x2dc PushV
	var_25_object = var_7_object; // 0x2dd Mov
	func_522(var_25_object); // 0x2de NEW_2
	var_283_string = ""; // 0x2e0 PushV
	var_283_string = "Neutral"; // 0x2e1 MovS
	func_1080(var_283_string); // 0x2e2 NEW_2
	func_636(); // 0x2e5 NEW_2
	func_627(); // 0x2e8 NEW_2
	
Label_746:
	return 2; // 0x2ea Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_571(var_6_bool); // 0x213 NEW_2
	return 0; // 0x215 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_855(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1430(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1428(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1432(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1434(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1411(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_1133(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_942(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_274_bool = var_36_bool == 0; // 0x3f Not
	if(var_274_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_275_object = Obj(); // 0x46 PushV
	var_275_object = var_27_object; // 0x47 Mov
	func_924(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1154(var_32_int, var_33_int)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x482 PushV
	CreateIntVector(var_35_object); // 0x483 Func
	add(var_32_int); // 0x485 ObjFunc
	add(var_33_int); // 0x487 ObjFunc
	var_36_int = 3; // 0x489 PushI
	SendWorldWndMessage(var_36_int, var_35_object); // 0x48a Func
	return 2; // 0x48c Return
}


func_1411(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x583 PushV
	var_92_string = "branch"; // 0x584 PushS
	GetVariable(var_92_string, var_91_int); // 0x585 Func
	var_93_int = 0; // 0x587 PushI
	var_94_bool = var_91_int == var_93_int; // 0x588 Eq
	if(var_94_bool == 0) goto Label_1421; // 0x589 JumpB
	var_89_int = 1; // 0x58a MovI
	return 2; // 0x58b Return
	
Label_1421:
	var_95_int = 1; // 0x58d PushI
	var_96_bool = var_91_int == var_95_int; // 0x58e Eq
	if(var_96_bool == 0) goto Label_1426; // 0x58f JumpB
	var_89_int = 2; // 0x590 MovI
	return 2; // 0x591 Return
	
Label_1426:
	var_89_int = 3; // 0x592 MovI
	return 2; // 0x593 Return
}


func_1288(var_88_object)
{
	var_90_string = "feromicin is given"; // 0x509 PushS
	Trace(var_90_string); // 0x50a Func
	var_91_object = Obj(); var_92_string = ""; var_93_int = 0; // 0x50c PushV
	var_91_object = var_88_object; // 0x50d Mov
	var_92_string = "feromicin"; // 0x50e MovS
	var_93_int = 1; // 0x50f MovI
	func_1185(var_91_object, var_92_string, var_93_int); // 0x510 NEW_2
	return 0; // 0x512 Return
}


func_522(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x20b PushV
	var_27_object = var_25_object; // 0x20c Mov
	TaskCall(0); // 0x20d TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x20e NEW_2
	TaskReturn(); // 0x20f TaskReturn
	return 0; // 0x211 Return
}


func_1037(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x40d PushV
	var_152_string = "d"; // 0x40e PushS
	var_153_int = 0; // 0x40f PushV
	func_1210(var_153_int); // 0x410 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x412 Add
	var_160_string = "m"; // 0x413 PushS
	var_147_string = var_159_int + var_160_string; // 0x414 Add2
	var_148_int = 0; // 0x415 MovI
	
Label_1046:
	var_161_int = 1; // 0x416 PushI
	if(var_161_int == 0) goto Label_1059; // 0x417 JumpB
	var_162_int = 1; // 0x418 PushI
	var_163_int = var_148_int + var_162_int; // 0x419 Add
	var_164_int = var_147_string + var_163_int; // 0x41a Add
	HasProperty(var_164_int, var_149_bool); // 0x41b ObjFunc
	var_165_bool = var_149_bool == 0; // 0x41d Not
	if(var_165_bool == 0) goto Label_1056; // 0x41e JumpB
	goto Label_1059; // 0x41f Jump
	
Label_1059:
	var_166_bool = var_148_int == 0; // 0x423 Not
	if(var_166_bool == 0) goto Label_1063; // 0x424 JumpB
	var_140_bool = 0; // 0x425 MovB
	return 10; // 0x426 Return
	
Label_1063:
	var_150_int = 0; // 0x427 MovI
	var_167_int = 1; // 0x428 PushI
	var_168_bool = var_148_int > var_167_int; // 0x429 GT
	if(var_168_bool == 0) goto Label_1069; // 0x42a JumpB
	irand(var_150_int, var_148_int); // 0x42b Func
	
Label_1069:
	var_169_int = 1; // 0x42d PushI
	var_170_int = var_150_int + var_169_int; // 0x42e Add
	var_171_int = var_147_string + var_170_int; // 0x42f Add
	GetProperty(var_171_int, var_151_string); // 0x430 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x432 PushV
	var_173_string = var_151_string; // 0x433 Mov
	func_1111(var_172_bool, var_173_string); // 0x434 NEW_2
	var_140_bool = var_172_bool; // 0x435 Mov
	return 10; // 0x437 Return
	
Label_1056:
	var_174_int = 1; // 0x420 PushI
	var_148_int = var_148_int + var_174_int; // 0x421 Add2
	goto Label_1046; // 0x422 Jump
}


func_1166(var_22_object, var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; // 0x48e PushV
	GetItemID(var_27_int); // 0x48f ObjFunc
	var_30_string = "Category"; // 0x491 PushS
	GetInvItemProperty(var_28_int, var_27_int, var_30_string); // 0x492 Func
	AddItem(var_29_bool, var_22_object, var_28_int, var_23_int); // 0x494 ObjFunc
	var_31_bool = var_29_bool == 0; // 0x496 Not
	if(var_31_bool == 0) goto Label_1179; // 0x497 JumpB
	DropItems(var_22_object, var_23_int); // 0x498 ObjFunc
	goto Label_1184; // 0x49a Jump
	
Label_1184:
	return 6; // 0x4a0 Return
	
Label_1179:
	var_32_int = 0; var_33_int = 0; // 0x49b PushV
	var_32_int = var_27_int; // 0x49c Mov
	var_33_int = var_23_int; // 0x49d Mov
	func_1154(var_32_int, var_33_int); // 0x49e NEW_2
}


func_1299(var_94_object)
{
	var_96_string = "neomicin is given"; // 0x514 PushS
	Trace(var_96_string); // 0x515 Func
	var_97_object = Obj(); var_98_string = ""; var_99_int = 0; // 0x517 PushV
	var_97_object = var_94_object; // 0x518 Mov
	var_98_string = "neomicin"; // 0x519 MovS
	var_99_int = 1; // 0x51a MovI
	func_1185(var_97_object, var_98_string, var_99_int); // 0x51b NEW_2
	return 0; // 0x51d Return
}


func_1428(var_86_int)
{
	var_86_int = 515527; // 0x594 MovI
	return 0; // 0x595 Return
}


func_1430(var_85_int)
{
	var_85_int = 513334; // 0x596 MovI
	return 0; // 0x597 Return
}


func_1432(var_87_string)
{
	var_87_string = "ui/NPC_Aglaja.png"; // 0x598 MovS
	return 0; // 0x599 Return
}


func_1277(var_78_object)
{
	var_80_string = "whitevaccine is given"; // 0x4fe PushS
	Trace(var_80_string); // 0x4ff Func
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0; // 0x501 PushV
	var_81_object = var_78_object; // 0x502 Mov
	var_82_string = "white_vaccine"; // 0x503 MovS
	var_83_int = 1; // 0x504 MovI
	func_1185(var_81_object, var_82_string, var_83_int); // 0x505 NEW_2
	return 0; // 0x507 Return
}


func_1434(var_88_string)
{
	var_88_string = "ui/NPC_Aglaja_b.png"; // 0x59a MovS
	return 0; // 0x59b Return
}


func_924()
{
	var_276_bool = 0; var_277_bool = 0; // 0x39c PushV
	var_278_bool = 1; // 0x39d PushB
	CameraSwitchToNormal(var_278_bool); // 0x39e Func
	var_279_bool = 0; // 0x3a0 PushV
	func_1436(var_279_bool); // 0x3a1 NEW_2
	if(var_279_bool == 0) goto Label_933; // 0x3a3 JumpB
	goto Label_941; // 0x3a4 Jump
	
Label_941:
	return 2; // 0x3ad Return
	
Label_933:
	var_280_string = "head"; // 0x3a5 PushS
	HasAnimationTrack(var_277_bool, var_280_string); // 0x3a6 Func
	var_281_bool = var_277_bool; // 0x3a8 Push
	if(var_281_bool == 0) goto Label_941; // 0x3a9 JumpB
	var_282_string = "head"; // 0x3aa PushS
	UnlookAsync(var_282_string); // 0x3ab Func
}


func_1436(var_80_bool)
{
	var_80_bool = 1; // 0x59c MovB
	return 0; // 0x59d Return
}


func_1310(var_37_object)
{
	var_39_string = "samopal ammo5 is given"; // 0x51f PushS
	Trace(var_39_string); // 0x520 Func
	var_40_object = Obj(); var_41_string = ""; var_42_int = 0; // 0x522 PushV
	var_40_object = var_37_object; // 0x523 Mov
	var_41_string = "samopal_ammo"; // 0x524 MovS
	var_42_int = 5; // 0x525 MovI
	func_1185(var_40_object, var_41_string, var_42_int); // 0x526 NEW_2
	return 0; // 0x528 Return
}


func_1185(var_16_object, var_17_string, var_18_int)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x4a1 PushV
	CreateInvItem(var_20_object); // 0x4a2 Func
	SetItemName(var_17_string); // 0x4a4 ObjFunc
	var_21_object = Obj(); var_22_object = Obj(); var_23_int = 0; // 0x4a6 PushV
	var_21_object = var_16_object; // 0x4a7 Mov
	var_22_object = var_20_object; // 0x4a8 Mov
	var_23_int = var_18_int; // 0x4a9 Mov
	func_1166(var_22_object, var_23_int); // 0x4aa NEW_2
	return 2; // 0x4ac Return
}


func_678()
{
	func_818(); // 0x2a7 NEW_2
	func_636(); // 0x2aa NEW_2
	lshStopSpeech(); // 0x2ac Func
	lshStopAnimation(); // 0x2ae Func
	StopAsync(); // 0x2b0 Func
	Hold(); // 0x2b2 Func
	return 0; // 0x2b4 Return
}


func_1321(var_201_bool)
{
	var_203_int = 0; var_204_string = ""; // 0x52a PushV
	var_204_string = "ood7AglajaPetr1"; // 0x52b MovS
	func_1149(var_203_int, var_204_string); // 0x52c NEW_2
	var_207_int = 0; // 0x52e PushI
	var_208_bool = var_203_int == var_207_int; // 0x52f Eq
	if(var_208_bool == 0) goto Label_1331; // 0x530 JumpB
	var_201_bool = 1; // 0x531 MovB
	return 0; // 0x532 Return
	
Label_1331:
	var_201_bool = 0; // 0x533 MovB
	return 0; // 0x534 Return
}


func_942(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x3ae PushV
	var_107_string = "voice_common"; // 0x3af PushS
	GetVariable(var_107_string, var_105_int); // 0x3b0 Func
	var_108_int = var_105_int; // 0x3b2 Push
	if(var_108_int == 0) goto Label_980; // 0x3b3 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x3b4 PushV
	var_110_object = var_99_object; // 0x3b5 Mov
	func_1000(var_110_object); // 0x3b6 NEW_2
	var_139_bool = var_109_bool == 0; // 0x3b8 Not
	if(var_139_bool == 0) goto Label_962; // 0x3b9 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x3ba PushV
	var_141_object = var_99_object; // 0x3bb Mov
	func_1037(var_141_object); // 0x3bc NEW_2
	var_175_bool = var_140_bool == 0; // 0x3be Not
	if(var_175_bool == 0) goto Label_962; // 0x3bf JumpB
	var_98_bool = 0; // 0x3c0 MovB
	return 4; // 0x3c1 Return
	
Label_962:
	var_176_int = 2; // 0x3c2 PushI
	irand(var_106_int, var_176_int); // 0x3c3 Func
	var_177_int = var_106_int; // 0x3c5 Push
	if(var_177_int == 0) goto Label_975; // 0x3c6 JumpB
	var_178_string = "voice_common"; // 0x3c7 PushS
	var_179_int = 1; // 0x3c8 PushI
	var_180_int = var_105_int + var_179_int; // 0x3c9 Add
	var_181_int = 3; // 0x3ca PushI
	var_182_int = var_180_int / var_181_int; // 0x3cb Mod
	SetVariable(var_178_string, var_182_int); // 0x3cc Func
	goto Label_979; // 0x3ce Jump
	
Label_979:
	goto Label_998; // 0x3d3 Jump
	
Label_998:
	var_98_bool = 1; // 0x3e6 MovB
	return 4; // 0x3e7 Return
	
Label_975:
	var_183_string = "voice_common"; // 0x3cf PushS
	var_184_int = 0; // 0x3d0 PushI
	SetVariable(var_183_string, var_184_int); // 0x3d1 Func
	
Label_980:
	var_185_bool = 0; var_186_object = Obj(); // 0x3d4 PushV
	var_186_object = var_99_object; // 0x3d5 Mov
	func_1037(var_186_object); // 0x3d6 NEW_2
	var_187_bool = var_185_bool == 0; // 0x3d8 Not
	if(var_187_bool == 0) goto Label_994; // 0x3d9 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x3da PushV
	var_189_object = var_99_object; // 0x3db Mov
	func_1000(var_189_object); // 0x3dc NEW_2
	var_190_bool = var_188_bool == 0; // 0x3de Not
	if(var_190_bool == 0) goto Label_994; // 0x3df JumpB
	var_98_bool = 0; // 0x3e0 MovB
	return 4; // 0x3e1 Return
	
Label_994:
	var_191_string = "voice_common"; // 0x3e2 PushS
	var_192_int = 1; // 0x3e3 PushI
	SetVariable(var_191_string, var_192_int); // 0x3e4 Func
}


func_1198(var_221_bool, var_222_string, var_223_string)
{
	var_224_object = Obj(); var_225_object = Obj(); // 0x4ae PushV
	FindActor(var_225_object, var_222_string); // 0x4af Func
	var_226_bool = var_225_object == 0; // 0x4b1 NullEq
	if(var_226_bool == 0) goto Label_1205; // 0x4b2 JumpB
	var_221_bool = 0; // 0x4b3 MovB
	return 2; // 0x4b4 Return
	
Label_1205:
	Trigger(var_225_object, var_223_string); // 0x4b5 Func
	var_221_bool = 1; // 0x4b7 MovB
	return 2; // 0x4b8 Return
}


func_816(var_45_bool)
{
	var_45_bool = 1; // 0x330 MovB
	return 0; // 0x331 Return
}


func_178(var_2_object, var_227_string)
{
	var_228_bool = 0; // 0xb3 PushV
	func_1436(var_228_bool); // 0xb4 NEW_2
	var_229_bool = var_228_bool == 0; // 0xb6 Not
	if(var_229_bool == 0) goto Label_185; // 0xb7 JumpB
	return 0; // 0xb8 Return
	
Label_185:
	var_230_bool = var_227_string == var_2_object; // 0xb9 Eq
	if(var_230_bool == 0) goto Label_188; // 0xba JumpB
	return 0; // 0xbb Return
	
Label_188:
	var_231_string = ""; var_232_bool = 0; // 0xbc PushV
	var_231_string = var_227_string; // 0xbd Mov
	var_233_string = ""; // 0xbe PushS
	var_234_bool = var_227_string == var_233_string; // 0xbf Eq
	if(var_234_bool == 0) goto Label_195; // 0xc0 JumpB
	var_232_bool = 0; // 0xc1 MovB
	goto Label_196; // 0xc2 Jump
	
Label_196:
	func_1096(var_231_string, var_232_bool); // 0xc4 NEW_2
	var_2_object = var_227_string; // 0xc6 TMov
	return 0; // 0xc7 Return
	
Label_195:
	var_232_bool = 1; // 0xc3 MovB
}


func_818()
{
	StopAnimation(); // 0x332 Func
	StopGroup0(); // 0x334 Func
	return 0; // 0x336 Return
}


func_1333(var_209_bool)
{
	var_211_int = 0; var_212_string = ""; // 0x536 PushV
	var_212_string = "d7q03"; // 0x537 MovS
	func_1149(var_211_int, var_212_string); // 0x538 NEW_2
	var_213_int = 4; // 0x53a PushI
	var_214_bool = var_211_int == var_213_int; // 0x53b Eq
	if(var_214_bool == 0) goto Label_1343; // 0x53c JumpB
	var_209_bool = 1; // 0x53d MovB
	return 0; // 0x53e Return
	
Label_1343:
	var_209_bool = 0; // 0x53f MovB
	return 0; // 0x540 Return
}


func_693()
{
	StopGroup0(); // 0x2b5 Func
	func_636(); // 0x2b8 NEW_2
	var_8_string = ""; // 0x2ba PushV
	var_8_string = "Neutral"; // 0x2bb MovS
	func_1080(var_8_string); // 0x2bc NEW_2
	func_627(); // 0x2bf NEW_2
	return 0; // 0x2c1 Return
}


func_823(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x337 PushV
	GetPosition(var_27_cvector); // 0x338 Func
	GetPosition(var_28_cvector); // 0x33a ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x33c Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x33d Or2
	return 6; // 0x33e Return
}


func_1080(var_250_string)
{
	var_251_bool = 0; var_252_float = 0; var_253_float = 0; var_254_bool = 0; var_255_float = 0; var_256_float = 0; // 0x438 PushV
	lshHasAnimation(var_254_bool, var_250_string); // 0x439 Func
	var_257_bool = var_254_bool; // 0x43b Push
	if(var_257_bool == 0) goto Label_1091; // 0x43c JumpB
	lshGetAnimTimes(var_250_string, var_255_float, var_256_float); // 0x43d Func
	var_258_bool = 0; // 0x43f PushB
	lshPlayAnimation(var_255_float, var_256_float, var_258_bool); // 0x440 Func
	goto Label_1095; // 0x442 Jump
	
Label_1095:
	return 6; // 0x447 Return
	
Label_1091:
	var_259_string = "Can't find lsh animation : "; // 0x443 PushS
	var_260_int = var_259_string + var_250_string; // 0x444 Add
	Trace(var_260_int); // 0x445 Func
}


func_1210(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x4ba PushV
	GetGameTime(var_155_float); // 0x4bb Func
	var_156_int = 1; // 0x4bd PushI
	var_157_int = 0; // 0x4be PushV
	var_158_int = 24; // 0x4bf PushI
	var_157_int = var_155_float / var_155_float; // 0x4c0 Div2
	var_153_int = var_156_int + var_157_int; // 0x4c1 Add2
	return 2; // 0x4c2 Return
}


func_571(var_0_object)
{
	var_7_bool = 0; // 0x23b PushV
	func_850(var_7_bool); // 0x23c NEW_2
	var_10_bool = var_7_bool == 0; // 0x23e Not
	if(var_10_bool == 0) goto Label_578; // 0x23f JumpB
	Hold(); // 0x240 Func
	
Label_578:
	GetDirection(var_0_object); // 0x242 Func
	
Label_580:
	func_747(); // 0x245 NEW_2
	goto Label_580; // 0x247 Jump
}


func_831(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x33f PushV
	GetPosition(var_20_cvector); // 0x340 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x342 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x343 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x344 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x345 Func
	var_15_bool = var_22_bool; // 0x347 Mov
	return 6; // 0x348 Return
}


func_1345(var_216_bool)
{
	var_218_int = 0; var_219_string = ""; // 0x542 PushV
	var_219_string = "d7q03"; // 0x543 MovS
	func_1149(var_218_int, var_219_string); // 0x544 NEW_2
	var_220_int = 1000; // 0x546 PushI
	var_221_bool = var_218_int == var_220_int; // 0x547 Eq
	if(var_221_bool == 0) goto Label_1355; // 0x548 JumpB
	var_216_bool = 1; // 0x549 MovB
	return 0; // 0x54a Return
	
Label_1355:
	var_216_bool = 0; // 0x54b MovB
	return 0; // 0x54c Return
}


func_1219(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x4c3 PushV
	var_34_string = "idle"; // 0x4c4 MovS
	var_35_int = var_32_int; // 0x4c5 Push
	if(var_35_int == 0) goto Label_1224; // 0x4c6 JumpB
	var_34_string = var_34_string + var_32_int; // 0x4c7 Add2
	
Label_1224:
	var_31_string = var_34_string; // 0x4c8 Mov
	return 2; // 0x4c9 Return
}


func_1096(var_231_string, var_232_bool)
{
	var_235_bool = 0; var_236_float = 0; var_237_float = 0; var_238_bool = 0; var_239_float = 0; var_240_float = 0; // 0x448 PushV
	lshHasAnimation(var_238_bool, var_231_string); // 0x449 Func
	var_241_bool = var_238_bool; // 0x44b Push
	if(var_241_bool == 0) goto Label_1106; // 0x44c JumpB
	lshGetAnimTimes(var_231_string, var_239_float, var_240_float); // 0x44d Func
	lshPlayAnimation(var_239_float, var_240_float, var_232_bool); // 0x44f Func
	goto Label_1110; // 0x451 Jump
	
Label_1110:
	return 6; // 0x456 Return
	
Label_1106:
	var_242_string = "Can't find lsh animation : "; // 0x452 PushS
	var_243_int = var_242_string + var_231_string; // 0x453 Add
	Trace(var_243_int); // 0x454 Func
}


func_841(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x349 PushV
	GetPosition(var_14_cvector); // 0x34a ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x34c PushV
	var_16_cvector = var_14_cvector; // 0x34d Mov
	func_831(var_15_bool, var_16_cvector); // 0x34e NEW_2
	var_11_bool = var_15_bool; // 0x34f Mov
	return 2; // 0x351 Return
}


func_585(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x249 PushV
	var_35_string = "player"; // 0x24a PushS
	FindActor(var_34_object, var_35_string); // 0x24b Func
	var_36_bool = var_34_object == 0; // 0x24d Not
	if(var_36_bool == 0) goto Label_593; // 0x24e JumpB
	var_32_bool = 0; // 0x24f MovB
	return 2; // 0x250 Return
	
Label_593:
	var_37_bool = 0; var_38_object = Obj(); // 0x251 PushV
	var_38_object = var_34_object; // 0x252 Mov
	func_841(var_38_object); // 0x253 NEW_2
	var_32_bool = var_37_bool; // 0x254 Mov
	return 2; // 0x256 Return
}


func_1226(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x4ca PushV
	var_28_int = 0; // 0x4cb MovI
	
Label_1228:
	var_30_string = "all"; // 0x4cc PushS
	var_31_string = ""; var_32_int = 0; // 0x4cd PushV
	var_32_int = var_28_int; // 0x4ce Mov
	func_1219(var_31_string, var_32_int); // 0x4cf NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x4d1 Func
	var_36_bool = var_29_bool == 0; // 0x4d3 Not
	if(var_36_bool == 0) goto Label_1238; // 0x4d4 JumpB
	goto Label_1241; // 0x4d5 Jump
	
Label_1241:
	var_25_int = var_28_int; // 0x4d9 Mov
	return 4; // 0x4da Return
	
Label_1238:
	var_37_int = 1; // 0x4d6 PushI
	var_28_int = var_28_int + var_37_int; // 0x4d7 Add2
	goto Label_1228; // 0x4d8 Jump
}


func_1357()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x54d PushV
	var_47_int = 645; // 0x54e PushI
	var_48_int = 2; // 0x54f PushI
	var_49_int = 533279; // 0x550 PushI
	CreateDiaryEntry(var_46_object, var_47_int, var_48_int, var_49_int); // 0x551 Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0x553 PushV
	var_51_object = var_46_object; // 0x554 Mov
	var_52_int = 641; // 0x555 MovI
	func_1383(var_50_bool, var_51_object, var_52_int); // 0x556 NEW_2
	return 2; // 0x558 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_148; // 0x56 JumpB
	var_200_bool = 0; // 0x57 PushV
	var_200_bool = 0; // 0x58 MovB
	var_201_bool = 0; var_202_object = Obj(); // 0x59 PushV
	var_202_object = var_1_object; // 0x5a MovT
	func_1321(var_202_object); // 0x5b NEW_2
	if(var_201_bool == 0) goto Label_100; // 0x5d JumpB
	var_209_bool = 0; var_210_object = Obj(); // 0x5e PushV
	var_210_object = var_1_object; // 0x5f MovT
	func_1333(var_210_object); // 0x60 NEW_2
	if(var_209_bool == 0) goto Label_100; // 0x62 JumpB
	var_200_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_200_bool == 0) goto Label_126; // 0x64 JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0x65 PushV
	var_215_object = var_1_object; // 0x66 MovT
	var_216_object = var_0_object; // 0x67 MovT
	func_1243(); // 0x68 NEW_2
	var_219_object = Obj(); var_220_object = Obj(); // 0x6a PushV
	var_219_object = var_1_object; // 0x6b MovT
	var_220_object = var_0_object; // 0x6c MovT
	func_1249(); // 0x6d NEW_2
	var_227_string = ""; // 0x6f PushV
	var_227_string = "Isee"; // 0x70 MovS
	func_178(var_194_object, var_227_string); // 0x71 NEW_2
	var_244_int = 533268; // 0x73 PushI
	SetMessage(var_244_int); // 0x74 TObjFunc
	ClearReplies(); // 0x76 TObjFunc
	var_245_int = 534543; // 0x78 PushI
	var_246_int = 36176; // 0x79 PushI
	var_247_int = 36175; // 0x7a PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x7b TObjFunc
	goto Label_148; // 0x7d Jump
	
Label_148:
	var_248_bool = 0; // 0x94 PushV
	func_1436(var_248_bool); // 0x95 NEW_2
	if(var_248_bool == 0) goto Label_163; // 0x97 JumpB
	
Label_152:
	lshWaitForAnimEnd(); // 0x98 Func
	var_249_string = var_3_string; // 0x9a PushT
	if(var_249_string == 0) goto Label_157; // 0x9b JumpB
	goto Label_162; // 0x9c Jump
	
Label_162:
	goto Label_177; // 0xa2 Jump
	
Label_177:
	return 0; // 0xb1 Return
	
Label_157:
	var_250_string = ""; // 0x9d PushV
	var_250_string = var_2_object; // 0x9e MovT
	func_1080(var_250_string); // 0x9f NEW_2
	goto Label_152; // 0xa1 Jump
	
Label_163:
	var_261_string = "all"; // 0xa3 PushS
	var_262_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_261_string, var_262_string); // 0xa5 Func
	
Label_167:
	WaitForAnimEnd(); // 0xa7 Func
	var_263_string = var_3_string; // 0xa9 PushT
	if(var_263_string == 0) goto Label_172; // 0xaa JumpB
	goto Label_177; // 0xab Jump
	
Label_172:
	var_264_string = "all"; // 0xac PushS
	var_265_string = "idle"; // 0xad PushS
	PlayAnimation(var_264_string, var_265_string); // 0xae Func
	goto Label_167; // 0xb0 Jump
	
Label_126:
	var_266_string = ""; // 0x7e PushV
	var_266_string = "Neutral"; // 0x7f MovS
	func_178(var_194_object, var_266_string); // 0x80 NEW_2
	var_267_int = 533273; // 0x82 PushI
	SetMessage(var_267_int); // 0x83 TObjFunc
	ClearReplies(); // 0x85 TObjFunc
	var_268_int = 533274; // 0x87 PushI
	var_269_int = -1; // 0x88 PushI
	var_270_int = 34788; // 0x89 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x8a TObjFunc
	var_271_int = 534553; // 0x8c PushI
	var_272_int = -1; // 0x8d PushI
	var_273_int = 36185; // 0x8e PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x8f TObjFunc
	goto Label_148; // 0x91 Jump
}


func_850(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x352 PushV
	IsLoaded(var_9_bool); // 0x353 Func
	var_7_bool = var_9_bool; // 0x355 Mov
	return 2; // 0x356 Return
}


func_855(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x357 PushV
	GetPosition(var_50_cvector); // 0x358 ObjFunc
	GetEyesHeight(var_49_float); // 0x35a ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x35c PushE
	var_58_float = var_58_float + var_49_float; // 0x35d Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x35e PopE
	GetPosition(var_51_cvector); // 0x35f Func
	GetEyesHeight(var_49_float); // 0x361 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x363 PushE
	var_59_float = var_59_float + var_49_float; // 0x364 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x365 PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x366 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x367 PushE
	var_60_float = 0; // 0x368 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x369 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x36a Or
	var_62_float = sqrt(var_61_int); // 0x36b Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x36c Div2
	var_53_cvector = -var_52_cvector; // 0x36d Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x36e Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x36f PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x370 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x371 Xor2
	func_1139(var_64_cvector, var_65_cvector); // 0x372 NEW_2
	var_72_int = 25; // 0x374 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x375 Mult
	var_74_int = var_63_float + var_73_float; // 0x376 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x377 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x378 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x379 Add2
	IsOverrideActive(var_56_bool); // 0x37a Func
	var_76_bool = var_56_bool; // 0x37c Push
	if(var_76_bool == 0) goto Label_896; // 0x37d JumpB
	var_37_bool = 0; // 0x37e MovB
	return 18; // 0x37f Return
	
Label_896:
	StopWorld(); // 0x380 Func
	var_77_bool = 1; // 0x382 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x383 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x385 PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x386 PushE
	Rotate(var_78_float, var_79_float); // 0x387 Func
	var_80_bool = 0; // 0x389 PushV
	func_1436(var_80_bool); // 0x38a NEW_2
	if(var_80_bool == 0) goto Label_910; // 0x38c JumpB
	goto Label_918; // 0x38d Jump
	
Label_918:
	CameraWaitForPlayFinish(); // 0x396 Func
	ResumeWorld(); // 0x398 Func
	var_37_bool = 1; // 0x39a MovB
	return 18; // 0x39b Return
	
Label_910:
	var_81_string = "head"; // 0x38e PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x38f Func
	var_82_bool = var_57_bool; // 0x391 Push
	if(var_82_bool == 0) goto Label_918; // 0x392 JumpB
	var_83_string = "head"; // 0x393 PushS
	LookAsyncCamera(var_83_string); // 0x394 Func
}


func_600(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x258 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x259 PushE
	RotateAsync(var_84_float, var_85_float); // 0x25a Func
	return 0; // 0x25c Return
}


func_1111(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x457 PushV
	var_136_bool = 0; // 0x458 PushV
	func_1436(var_136_bool); // 0x459 NEW_2
	if(var_136_bool == 0) goto Label_1124; // 0x45b JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x45c Func
	var_137_bool = var_135_bool; // 0x45e Push
	if(var_137_bool == 0) goto Label_1124; // 0x45f JumpB
	lshPlaySpeech(var_133_string); // 0x460 Func
	var_132_bool = 1; // 0x462 MovB
	return 2; // 0x463 Return
	
Label_1124:
	var_132_bool = 0; // 0x464 MovB
	return 2; // 0x465 Return
}


func_1370(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x55a PushV
	GetDiaryRoot(var_61_object); // 0x55b Func
	var_62_bool = var_61_object == 0; // 0x55d Not
	if(var_62_bool == 0) goto Label_1380; // 0x55e JumpB
	var_63_string = "Can't retrieve diary root"; // 0x55f PushS
	Trace(var_63_string); // 0x560 Func
	var_59_object = 0; // 0x562 MovB
	return 2; // 0x563 Return
	
Label_1380:
	var_59_object = var_61_object; // 0x564 Mov
	return 2; // 0x565 Return
}


func_1243()
{
	var_217_string = "ood7AglajaPetr1"; // 0x4dc PushS
	var_218_int = 1; // 0x4dd PushI
	SetVariable(var_217_string, var_218_int); // 0x4de Func
	return 0; // 0x4e0 Return
}


func_605(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x25d PushV
	var_20_string = "player"; // 0x25e PushS
	FindActor(var_18_object, var_20_string); // 0x25f Func
	var_21_bool = var_18_object == 0; // 0x261 Not
	if(var_21_bool == 0) goto Label_613; // 0x262 JumpB
	var_15_bool = 0; // 0x263 MovB
	return 4; // 0x264 Return
	
Label_613:
	var_22_float = 0; var_23_object = Obj(); // 0x265 PushV
	var_23_object = var_18_object; // 0x266 Mov
	func_823(var_23_object); // 0x267 NEW_2
	var_30_float = 90000.0; // 0x269 PushF
	var_31_bool = var_22_float > var_30_float; // 0x26a GT
	if(var_31_bool == 0) goto Label_622; // 0x26b JumpB
	var_15_bool = 0; // 0x26c MovB
	return 4; // 0x26d Return
	
Label_622:
	CanSee(var_19_bool, var_18_object); // 0x26e Func
	var_15_bool = var_19_bool; // 0x270 Mov
	return 4; // 0x271 Return
}


func_1249()
{
	var_221_bool = 0; var_222_string = ""; var_223_string = ""; // 0x4e2 PushV
	var_222_string = "quest_d7_03"; // 0x4e3 MovS
	var_223_string = "remove_maria"; // 0x4e4 MovS
	func_1198(var_221_bool, var_222_string, var_223_string); // 0x4e5 NEW_2
	return 0; // 0x4e7 Return
}


func_1126()
{
	var_10_bool = 0; // 0x466 PushV
	func_1436(var_10_bool); // 0x467 NEW_2
	if(var_10_bool == 0) goto Label_1132; // 0x469 JumpB
	lshStopSpeech(); // 0x46a Func
	
Label_1132:
	return 0; // 0x46c Return
}


func_1383(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0x567 PushV
	var_59_object = Obj(); // 0x568 PushV
	func_1370(var_59_object); // 0x569 NEW_2
	var_56_object = var_59_object; // 0x56a Mov
	Find(var_52_int, var_57_object); // 0x56c ObjFunc
	var_64_bool = var_57_object == 0; // 0x56e Not
	if(var_64_bool == 0) goto Label_1398; // 0x56f JumpB
	var_65_string = "Can't find diary parent with id: "; // 0x570 PushS
	var_66_int = var_65_string + var_52_int; // 0x571 Add
	Trace(var_66_int); // 0x572 Func
	var_50_bool = 0; // 0x574 MovB
	return 6; // 0x575 Return
	
Label_1398:
	AddChild(var_51_object); // 0x576 ObjFunc
	var_67_int = 7; // 0x578 PushI
	SendWorldWndMessage(var_67_int); // 0x579 Func
	GetCategory(var_58_int); // 0x57b ObjFunc
	SetDiarySection(var_58_int); // 0x57d Func
	var_50_bool = 0; // 0x57f MovB
	return 6; // 0x580 Return
}


func_1256()
{
	func_1357(); // 0x4ea NEW_2
	var_68_bool = 0; var_69_string = ""; var_70_string = ""; // 0x4ec PushV
	var_69_string = "quest_d7_03"; // 0x4ed MovS
	var_70_string = "completed"; // 0x4ee MovS
	func_1198(var_68_bool, var_69_string, var_70_string); // 0x4ef NEW_2
	return 0; // 0x4f1 Return
}


func_1000(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x3e8 PushV
	var_116_string = "c"; // 0x3e9 MovS
	var_117_int = 0; // 0x3ea MovI
	
Label_1003:
	var_121_int = 1; // 0x3eb PushI
	if(var_121_int == 0) goto Label_1016; // 0x3ec JumpB
	var_122_int = 1; // 0x3ed PushI
	var_123_int = var_117_int + var_122_int; // 0x3ee Add
	var_124_int = var_116_string + var_123_int; // 0x3ef Add
	HasProperty(var_124_int, var_118_bool); // 0x3f0 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x3f2 Not
	if(var_125_bool == 0) goto Label_1013; // 0x3f3 JumpB
	goto Label_1016; // 0x3f4 Jump
	
Label_1016:
	var_126_bool = var_117_int == 0; // 0x3f8 Not
	if(var_126_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_109_bool = 0; // 0x3fa MovB
	return 10; // 0x3fb Return
	
Label_1020:
	var_119_int = 0; // 0x3fc MovI
	var_127_int = 1; // 0x3fd PushI
	var_128_bool = var_117_int > var_127_int; // 0x3fe GT
	if(var_128_bool == 0) goto Label_1026; // 0x3ff JumpB
	irand(var_119_int, var_117_int); // 0x400 Func
	
Label_1026:
	var_129_int = 1; // 0x402 PushI
	var_130_int = var_119_int + var_129_int; // 0x403 Add
	var_131_int = var_116_string + var_130_int; // 0x404 Add
	GetProperty(var_131_int, var_120_string); // 0x405 ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x407 PushV
	var_133_string = var_120_string; // 0x408 Mov
	func_1111(var_132_bool, var_133_string); // 0x409 NEW_2
	var_109_bool = var_132_bool; // 0x40a Mov
	return 10; // 0x40c Return
	
Label_1013:
	var_138_int = 1; // 0x3f5 PushI
	var_117_int = var_117_int + var_138_int; // 0x3f6 Add2
	goto Label_1003; // 0x3f7 Jump
}


func_747()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x2eb PushV
	WaitForAnimEnd(); // 0x2ec Func
	var_23_bool = 0; // 0x2ee PushV
	func_850(var_23_bool); // 0x2ef NEW_2
	var_24_bool = var_23_bool == 0; // 0x2f1 Not
	if(var_24_bool == 0) goto Label_756; // 0x2f2 JumpB
	return 12; // 0x2f3 Return
	
Label_756:
	var_25_int = 0; // 0x2f4 PushV
	func_1226(var_25_int); // 0x2f5 NEW_2
	var_17_int = var_25_int; // 0x2f6 Mov
	var_18_int = 0; // 0x2f8 MovI
	
Label_761:
	var_38_bool = 0; // 0x2f9 PushV
	var_38_bool = 0; // 0x2fa MovB
	var_39_int = 5; // 0x2fb PushI
	var_40_bool = var_18_int < var_39_int; // 0x2fc LT
	if(var_40_bool == 0) goto Label_771; // 0x2fd JumpB
	var_41_bool = 0; // 0x2fe PushV
	func_850(var_41_bool); // 0x2ff NEW_2
	if(var_41_bool == 0) goto Label_771; // 0x301 JumpB
	var_38_bool = 1; // 0x302 MovB
	
Label_771:
	if(var_38_bool == 0) goto Label_813; // 0x303 JumpB
	var_42_bool = var_17_int == 0; // 0x304 Not
	if(var_42_bool == 0) goto Label_781; // 0x305 JumpB
	var_43_int = 3; // 0x306 PushI
	Sleep(var_43_int, var_19_bool); // 0x307 Func
	var_44_bool = var_19_bool == 0; // 0x309 Not
	if(var_44_bool == 0) goto Label_780; // 0x30a JumpB
	goto Label_813; // 0x30b Jump
	
Label_813:
	ResetAAS(); // 0x32d Func
	return 12; // 0x32f Return
	
Label_780:
	goto Label_802; // 0x30c Jump
	
Label_802:
	var_45_bool = 0; // 0x322 PushV
	func_816(var_45_bool); // 0x323 NEW_2
	var_46_bool = var_45_bool == 0; // 0x325 Not
	if(var_46_bool == 0) goto Label_808; // 0x326 JumpB
	goto Label_813; // 0x327 Jump
	
Label_808:
	ResetAAS(); // 0x328 Func
	var_47_int = 1; // 0x32a PushI
	var_18_int = var_18_int + var_47_int; // 0x32b Add2
	goto Label_761; // 0x32c Jump
	
Label_781:
	irand(var_20_int, var_17_int); // 0x30d Func
	var_48_int = 5; // 0x30f PushI
	irand(var_21_int, var_48_int); // 0x310 Func
	var_49_int = 0; // 0x312 PushI
	var_50_bool = var_21_int != var_49_int; // 0x313 Neq
	if(var_50_bool == 0) goto Label_790; // 0x314 JumpB
	var_20_int = 0; // 0x315 MovI
	
Label_790:
	var_51_string = "all"; // 0x316 PushS
	var_52_string = ""; var_53_int = 0; // 0x317 PushV
	var_53_int = var_20_int; // 0x318 Mov
	func_1219(var_52_string, var_53_int); // 0x319 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x31b Func
	WaitForAnimEnd(var_22_bool); // 0x31d Func
	var_54_bool = var_22_bool == 0; // 0x31f Not
	if(var_54_bool == 0) goto Label_802; // 0x320 JumpB
	goto Label_813; // 0x321 Jump
}


func_1133(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x46d PushV
	self(var_102_object); // 0x46e Func
	var_100_object = var_102_object; // 0x470 Mov
	return 2; // 0x471 Return
}


func_1266(var_13_object)
{
	var_15_string = "samopal is given"; // 0x4f3 PushS
	Trace(var_15_string); // 0x4f4 Func
	var_16_object = Obj(); var_17_string = ""; var_18_int = 0; // 0x4f6 PushV
	var_16_object = var_13_object; // 0x4f7 Mov
	var_17_string = "Samopal"; // 0x4f8 MovS
	var_18_int = 1; // 0x4f9 MovI
	func_1185(var_16_object, var_17_string, var_18_int); // 0x4fa NEW_2
	return 0; // 0x4fc Return
}


func_627()
{
	var_285_float = 0; var_286_float = 0; // 0x273 PushV
	var_287_int = 8; // 0x274 PushI
	var_288_int = 16; // 0x275 PushI
	rand(var_286_float, var_287_int, var_288_int); // 0x276 Func
	var_289_int = 10; // 0x278 PushI
	SetTimer(var_289_int, var_286_float); // 0x279 Func
	return 2; // 0x27b Return
}


func_1139(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x473 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x474 Or
	var_68_float = sqrt(var_69_int); // 0x475 Sqrt2
	var_70_float = 0.0; // 0x476 PushF
	var_71_bool = var_68_float < var_70_float; // 0x477 LT
	if(var_71_bool == 0) goto Label_1147; // 0x478 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x479 MovV
	return 2; // 0x47a Return
	
Label_1147:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x47b Div2
	return 2; // 0x47c Return
}


func_636()
{
	var_284_int = 10; // 0x27c PushI
	KillTimer(var_284_int); // 0x27d Func
	return 0; // 0x27f Return
}


func_1149(var_203_int, var_204_string)
{
	var_205_int = 0; var_206_int = 0; // 0x47d PushV
	GetVariable(var_204_string, var_206_int); // 0x47e Func
	var_203_int = var_206_int; // 0x480 Mov
	return 2; // 0x481 Return
}


