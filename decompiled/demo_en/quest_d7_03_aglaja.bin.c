task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xc9 PushI
	if(var_9_int == 0) goto Label_521; // 0xca JumpB
	func_1124(); // 0xcc NEW_2
	var_11_int = 34783; // 0xce PushI
	var_12_bool = var_8_bool == var_11_int; // 0xcf Eq
	if(var_12_bool == 0) goto Label_224; // 0xd0 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xd1 PushV
	var_13_object = var_1_object; // 0xd2 MovT
	var_14_object = var_0_object; // 0xd3 MovT
	func_1264(var_14_object); // 0xd4 NEW_2
	var_37_object = Obj(); var_38_object = Obj(); // 0xd6 PushV
	var_37_object = var_1_object; // 0xd7 MovT
	var_38_object = var_0_object; // 0xd8 MovT
	func_1308(var_38_object); // 0xd9 NEW_2
	var_43_object = Obj(); var_44_object = Obj(); // 0xdb PushV
	var_43_object = var_1_object; // 0xdc MovT
	var_44_object = var_0_object; // 0xdd MovT
	func_1254(); // 0xde NEW_2
	
Label_224:
	var_74_int = 34784; // 0xe0 PushI
	var_75_bool = var_8_bool == var_74_int; // 0xe1 Eq
	if(var_75_bool == 0) goto Label_237; // 0xe2 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0xe3 PushV
	var_76_object = var_1_object; // 0xe4 MovT
	var_77_object = var_0_object; // 0xe5 MovT
	func_1254(); // 0xe6 NEW_2
	var_78_object = Obj(); var_79_object = Obj(); // 0xe8 PushV
	var_78_object = var_1_object; // 0xe9 MovT
	var_79_object = var_0_object; // 0xea MovT
	func_1275(var_79_object); // 0xeb NEW_2
	
Label_237:
	var_84_int = 34785; // 0xed PushI
	var_85_bool = var_8_bool == var_84_int; // 0xee Eq
	if(var_85_bool == 0) goto Label_260; // 0xef JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0xf0 PushV
	var_86_object = var_1_object; // 0xf1 MovT
	var_87_object = var_0_object; // 0xf2 MovT
	func_1254(); // 0xf3 NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0xf5 PushV
	var_88_object = var_1_object; // 0xf6 MovT
	var_89_object = var_0_object; // 0xf7 MovT
	func_1286(var_89_object); // 0xf8 NEW_2
	var_94_object = Obj(); var_95_object = Obj(); // 0xfa PushV
	var_94_object = var_1_object; // 0xfb MovT
	var_95_object = var_0_object; // 0xfc MovT
	func_1297(var_95_object); // 0xfd NEW_2
	var_100_object = Obj(); var_101_object = Obj(); // 0xff PushV
	var_100_object = var_1_object; // 0x100 MovT
	var_101_object = var_0_object; // 0x101 MovT
	func_1297(var_101_object); // 0x102 NEW_2
	
Label_260:
	var_102_int = 34786; // 0x104 PushI
	var_103_bool = var_8_bool == var_102_int; // 0x105 Eq
	if(var_103_bool == 0) goto Label_268; // 0x106 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x107 PushV
	var_104_object = var_1_object; // 0x108 MovT
	var_105_object = var_0_object; // 0x109 MovT
	func_1254(); // 0x10a NEW_2
	
Label_268:
	var_106_int = 34782; // 0x10c PushI
	var_107_bool = var_7_cvector == var_106_int; // 0x10d Eq
	if(var_107_bool == 0) goto Label_330; // 0x10e JumpB
	var_108_bool = 0; // 0x10f PushV
	var_108_bool = 0; // 0x110 MovB
	var_109_bool = 0; var_110_object = Obj(); // 0x111 PushV
	var_110_object = var_1_object; // 0x112 MovT
	func_1319(var_110_object); // 0x113 NEW_2
	if(var_109_bool == 0) goto Label_284; // 0x115 JumpB
	var_117_bool = 0; var_118_object = Obj(); // 0x116 PushV
	var_118_object = var_1_object; // 0x117 MovT
	func_1331(var_118_object); // 0x118 NEW_2
	if(var_117_bool == 0) goto Label_284; // 0x11a JumpB
	var_108_bool = 1; // 0x11b MovB
	
Label_284:
	if(var_108_bool == 0) goto Label_310; // 0x11c JumpB
	var_123_object = Obj(); var_124_object = Obj(); // 0x11d PushV
	var_123_object = var_1_object; // 0x11e MovT
	var_124_object = var_0_object; // 0x11f MovT
	func_1241(); // 0x120 NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x122 PushV
	var_127_object = var_1_object; // 0x123 MovT
	var_128_object = var_0_object; // 0x124 MovT
	func_1247(); // 0x125 NEW_2
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
	func_1343(var_217_object); // 0x1d3 NEW_2
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
	func_1434(var_241_bool); // 0x1ff NEW_2
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
	func_1131(var_13_object); // 0x220 NEW_2
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
	func_1131(var_8_object); // 0x22d NEW_2
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
	func_1131(var_53_object); // 0x299 NEW_2
	var_52_object = var_53_object; // 0x29a Mov
	func_998(var_52_object); // 0x29c NEW_2
	
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
	func_1078(var_14_string); // 0x2cb NEW_2
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
	var_281_string = ""; // 0x2e0 PushV
	var_281_string = "Neutral"; // 0x2e1 MovS
	func_1078(var_281_string); // 0x2e2 NEW_2
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
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1428(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1426(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1430(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1432(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1409(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1131(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_940(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_273_bool = var_36_bool == 0; // 0x3f Not
	if(var_273_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_274_object = Obj(); // 0x46 PushV
	var_274_object = var_27_object; // 0x47 Mov
	func_923(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1409(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x581 PushV
	var_91_string = "branch"; // 0x582 PushS
	GetVariable(var_91_string, var_90_int); // 0x583 Func
	var_92_int = 0; // 0x585 PushI
	var_93_bool = var_90_int == var_92_int; // 0x586 Eq
	if(var_93_bool == 0) goto Label_1419; // 0x587 JumpB
	var_88_int = 1; // 0x588 MovI
	return 2; // 0x589 Return
	
Label_1419:
	var_94_int = 1; // 0x58b PushI
	var_95_bool = var_90_int == var_94_int; // 0x58c Eq
	if(var_95_bool == 0) goto Label_1424; // 0x58d JumpB
	var_88_int = 2; // 0x58e MovI
	return 2; // 0x58f Return
	
Label_1424:
	var_88_int = 3; // 0x590 MovI
	return 2; // 0x591 Return
}


func_1152(var_32_int, var_33_int)
{
	var_34_object = Obj(); var_35_object = Obj(); // 0x480 PushV
	CreateIntVector(var_35_object); // 0x481 Func
	add(var_32_int); // 0x483 ObjFunc
	add(var_33_int); // 0x485 ObjFunc
	var_36_int = 3; // 0x487 PushI
	SendWorldWndMessage(var_36_int, var_35_object); // 0x488 Func
	return 2; // 0x48a Return
}


func_1286(var_88_object)
{
	var_90_string = "feromicin is given"; // 0x507 PushS
	Trace(var_90_string); // 0x508 Func
	var_91_object = Obj(); var_92_string = ""; var_93_int = 0; // 0x50a PushV
	var_91_object = var_88_object; // 0x50b Mov
	var_92_string = "feromicin"; // 0x50c MovS
	var_93_int = 1; // 0x50d MovI
	func_1183(var_91_object, var_92_string, var_93_int); // 0x50e NEW_2
	return 0; // 0x510 Return
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


func_1035(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x40b PushV
	var_151_string = "d"; // 0x40c PushS
	var_152_int = 0; // 0x40d PushV
	func_1208(var_152_int); // 0x40e NEW_2
	var_158_int = var_151_string + var_152_int; // 0x410 Add
	var_159_string = "m"; // 0x411 PushS
	var_146_string = var_158_int + var_159_string; // 0x412 Add2
	var_147_int = 0; // 0x413 MovI
	
Label_1044:
	var_160_int = 1; // 0x414 PushI
	if(var_160_int == 0) goto Label_1057; // 0x415 JumpB
	var_161_int = 1; // 0x416 PushI
	var_162_int = var_147_int + var_161_int; // 0x417 Add
	var_163_int = var_146_string + var_162_int; // 0x418 Add
	HasProperty(var_163_int, var_148_bool); // 0x419 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x41b Not
	if(var_164_bool == 0) goto Label_1054; // 0x41c JumpB
	goto Label_1057; // 0x41d Jump
	
Label_1057:
	var_165_bool = var_147_int == 0; // 0x421 Not
	if(var_165_bool == 0) goto Label_1061; // 0x422 JumpB
	var_139_bool = 0; // 0x423 MovB
	return 10; // 0x424 Return
	
Label_1061:
	var_149_int = 0; // 0x425 MovI
	var_166_int = 1; // 0x426 PushI
	var_167_bool = var_147_int > var_166_int; // 0x427 GT
	if(var_167_bool == 0) goto Label_1067; // 0x428 JumpB
	irand(var_149_int, var_147_int); // 0x429 Func
	
Label_1067:
	var_168_int = 1; // 0x42b PushI
	var_169_int = var_149_int + var_168_int; // 0x42c Add
	var_170_int = var_146_string + var_169_int; // 0x42d Add
	GetProperty(var_170_int, var_150_string); // 0x42e ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x430 PushV
	var_172_string = var_150_string; // 0x431 Mov
	func_1109(var_171_bool, var_172_string); // 0x432 NEW_2
	var_139_bool = var_171_bool; // 0x433 Mov
	return 10; // 0x435 Return
	
Label_1054:
	var_173_int = 1; // 0x41e PushI
	var_147_int = var_147_int + var_173_int; // 0x41f Add2
	goto Label_1044; // 0x420 Jump
}


func_1164(var_22_object, var_23_int)
{
	var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0; // 0x48c PushV
	GetItemID(var_27_int); // 0x48d ObjFunc
	var_30_string = "Category"; // 0x48f PushS
	GetInvItemProperty(var_28_int, var_27_int, var_30_string); // 0x490 Func
	AddItem(var_29_bool, var_22_object, var_28_int, var_23_int); // 0x492 ObjFunc
	var_31_bool = var_29_bool == 0; // 0x494 Not
	if(var_31_bool == 0) goto Label_1177; // 0x495 JumpB
	DropItems(var_22_object, var_23_int); // 0x496 ObjFunc
	goto Label_1182; // 0x498 Jump
	
Label_1182:
	return 6; // 0x49e Return
	
Label_1177:
	var_32_int = 0; var_33_int = 0; // 0x499 PushV
	var_32_int = var_27_int; // 0x49a Mov
	var_33_int = var_23_int; // 0x49b Mov
	func_1152(var_32_int, var_33_int); // 0x49c NEW_2
}


func_1275(var_78_object)
{
	var_80_string = "whitevaccine is given"; // 0x4fc PushS
	Trace(var_80_string); // 0x4fd Func
	var_81_object = Obj(); var_82_string = ""; var_83_int = 0; // 0x4ff PushV
	var_81_object = var_78_object; // 0x500 Mov
	var_82_string = "white_vaccine"; // 0x501 MovS
	var_83_int = 1; // 0x502 MovI
	func_1183(var_81_object, var_82_string, var_83_int); // 0x503 NEW_2
	return 0; // 0x505 Return
}


func_1297(var_94_object)
{
	var_96_string = "neomicin is given"; // 0x512 PushS
	Trace(var_96_string); // 0x513 Func
	var_97_object = Obj(); var_98_string = ""; var_99_int = 0; // 0x515 PushV
	var_97_object = var_94_object; // 0x516 Mov
	var_98_string = "neomicin"; // 0x517 MovS
	var_99_int = 1; // 0x518 MovI
	func_1183(var_97_object, var_98_string, var_99_int); // 0x519 NEW_2
	return 0; // 0x51b Return
}


func_1426(var_85_int)
{
	var_85_int = 515527; // 0x592 MovI
	return 0; // 0x593 Return
}


func_1428(var_84_int)
{
	var_84_int = 513334; // 0x594 MovI
	return 0; // 0x595 Return
}


func_1430(var_86_string)
{
	var_86_string = "ui/NPC_Aglaja.png"; // 0x596 MovS
	return 0; // 0x597 Return
}


func_1432(var_87_string)
{
	var_87_string = "ui/NPC_Aglaja_b.png"; // 0x598 MovS
	return 0; // 0x599 Return
}


func_1434(var_79_bool)
{
	var_79_bool = 1; // 0x59a MovB
	return 0; // 0x59b Return
}


func_923()
{
	var_275_bool = 0; var_276_bool = 0; // 0x39b PushV
	CameraSwitchToNormal(); // 0x39c Func
	var_277_bool = 0; // 0x39e PushV
	func_1434(var_277_bool); // 0x39f NEW_2
	if(var_277_bool == 0) goto Label_931; // 0x3a1 JumpB
	goto Label_939; // 0x3a2 Jump
	
Label_939:
	return 2; // 0x3ab Return
	
Label_931:
	var_278_string = "head"; // 0x3a3 PushS
	HasAnimationTrack(var_276_bool, var_278_string); // 0x3a4 Func
	var_279_bool = var_276_bool; // 0x3a6 Push
	if(var_279_bool == 0) goto Label_939; // 0x3a7 JumpB
	var_280_string = "head"; // 0x3a8 PushS
	UnlookAsync(var_280_string); // 0x3a9 Func
}


func_1308(var_37_object)
{
	var_39_string = "samopal ammo5 is given"; // 0x51d PushS
	Trace(var_39_string); // 0x51e Func
	var_40_object = Obj(); var_41_string = ""; var_42_int = 0; // 0x520 PushV
	var_40_object = var_37_object; // 0x521 Mov
	var_41_string = "samopal_ammo"; // 0x522 MovS
	var_42_int = 5; // 0x523 MovI
	func_1183(var_40_object, var_41_string, var_42_int); // 0x524 NEW_2
	return 0; // 0x526 Return
}


func_1183(var_16_object, var_17_string, var_18_int)
{
	var_19_object = Obj(); var_20_object = Obj(); // 0x49f PushV
	CreateInvItem(var_20_object); // 0x4a0 Func
	SetItemName(var_17_string); // 0x4a2 ObjFunc
	var_21_object = Obj(); var_22_object = Obj(); var_23_int = 0; // 0x4a4 PushV
	var_21_object = var_16_object; // 0x4a5 Mov
	var_22_object = var_20_object; // 0x4a6 Mov
	var_23_int = var_18_int; // 0x4a7 Mov
	func_1164(var_22_object, var_23_int); // 0x4a8 NEW_2
	return 2; // 0x4aa Return
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


func_1319(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x528 PushV
	var_203_string = "ood7AglajaPetr1"; // 0x529 MovS
	func_1147(var_202_int, var_203_string); // 0x52a NEW_2
	var_206_int = 0; // 0x52c PushI
	var_207_bool = var_202_int == var_206_int; // 0x52d Eq
	if(var_207_bool == 0) goto Label_1329; // 0x52e JumpB
	var_200_bool = 1; // 0x52f MovB
	return 0; // 0x530 Return
	
Label_1329:
	var_200_bool = 0; // 0x531 MovB
	return 0; // 0x532 Return
}


func_940(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x3ac PushV
	var_106_string = "voice_common"; // 0x3ad PushS
	GetVariable(var_106_string, var_104_int); // 0x3ae Func
	var_107_int = var_104_int; // 0x3b0 Push
	if(var_107_int == 0) goto Label_978; // 0x3b1 JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x3b2 PushV
	var_109_object = var_98_object; // 0x3b3 Mov
	func_998(var_109_object); // 0x3b4 NEW_2
	var_138_bool = var_108_bool == 0; // 0x3b6 Not
	if(var_138_bool == 0) goto Label_960; // 0x3b7 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x3b8 PushV
	var_140_object = var_98_object; // 0x3b9 Mov
	func_1035(var_140_object); // 0x3ba NEW_2
	var_174_bool = var_139_bool == 0; // 0x3bc Not
	if(var_174_bool == 0) goto Label_960; // 0x3bd JumpB
	var_97_bool = 0; // 0x3be MovB
	return 4; // 0x3bf Return
	
Label_960:
	var_175_int = 2; // 0x3c0 PushI
	irand(var_105_int, var_175_int); // 0x3c1 Func
	var_176_int = var_105_int; // 0x3c3 Push
	if(var_176_int == 0) goto Label_973; // 0x3c4 JumpB
	var_177_string = "voice_common"; // 0x3c5 PushS
	var_178_int = 1; // 0x3c6 PushI
	var_179_int = var_104_int + var_178_int; // 0x3c7 Add
	var_180_int = 3; // 0x3c8 PushI
	var_181_int = var_179_int / var_180_int; // 0x3c9 Mod
	SetVariable(var_177_string, var_181_int); // 0x3ca Func
	goto Label_977; // 0x3cc Jump
	
Label_977:
	goto Label_996; // 0x3d1 Jump
	
Label_996:
	var_97_bool = 1; // 0x3e4 MovB
	return 4; // 0x3e5 Return
	
Label_973:
	var_182_string = "voice_common"; // 0x3cd PushS
	var_183_int = 0; // 0x3ce PushI
	SetVariable(var_182_string, var_183_int); // 0x3cf Func
	
Label_978:
	var_184_bool = 0; var_185_object = Obj(); // 0x3d2 PushV
	var_185_object = var_98_object; // 0x3d3 Mov
	func_1035(var_185_object); // 0x3d4 NEW_2
	var_186_bool = var_184_bool == 0; // 0x3d6 Not
	if(var_186_bool == 0) goto Label_992; // 0x3d7 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x3d8 PushV
	var_188_object = var_98_object; // 0x3d9 Mov
	func_998(var_188_object); // 0x3da NEW_2
	var_189_bool = var_187_bool == 0; // 0x3dc Not
	if(var_189_bool == 0) goto Label_992; // 0x3dd JumpB
	var_97_bool = 0; // 0x3de MovB
	return 4; // 0x3df Return
	
Label_992:
	var_190_string = "voice_common"; // 0x3e0 PushS
	var_191_int = 1; // 0x3e1 PushI
	SetVariable(var_190_string, var_191_int); // 0x3e2 Func
}


func_1196(var_220_bool, var_221_string, var_222_string)
{
	var_223_object = Obj(); var_224_object = Obj(); // 0x4ac PushV
	FindActor(var_224_object, var_221_string); // 0x4ad Func
	var_225_bool = var_224_object == 0; // 0x4af NullEq
	if(var_225_bool == 0) goto Label_1203; // 0x4b0 JumpB
	var_220_bool = 0; // 0x4b1 MovB
	return 2; // 0x4b2 Return
	
Label_1203:
	Trigger(var_224_object, var_222_string); // 0x4b3 Func
	var_220_bool = 1; // 0x4b5 MovB
	return 2; // 0x4b6 Return
}


func_816(var_45_bool)
{
	var_45_bool = 1; // 0x330 MovB
	return 0; // 0x331 Return
}


func_178(var_2_object, var_226_string)
{
	var_227_bool = 0; // 0xb3 PushV
	func_1434(var_227_bool); // 0xb4 NEW_2
	var_228_bool = var_227_bool == 0; // 0xb6 Not
	if(var_228_bool == 0) goto Label_185; // 0xb7 JumpB
	return 0; // 0xb8 Return
	
Label_185:
	var_229_bool = var_226_string == var_2_object; // 0xb9 Eq
	if(var_229_bool == 0) goto Label_188; // 0xba JumpB
	return 0; // 0xbb Return
	
Label_188:
	var_230_string = ""; var_231_bool = 0; // 0xbc PushV
	var_230_string = var_226_string; // 0xbd Mov
	var_232_string = ""; // 0xbe PushS
	var_233_bool = var_226_string == var_232_string; // 0xbf Eq
	if(var_233_bool == 0) goto Label_195; // 0xc0 JumpB
	var_231_bool = 0; // 0xc1 MovB
	goto Label_196; // 0xc2 Jump
	
Label_196:
	func_1094(var_230_string, var_231_bool); // 0xc4 NEW_2
	var_2_object = var_226_string; // 0xc6 TMov
	return 0; // 0xc7 Return
	
Label_195:
	var_231_bool = 1; // 0xc3 MovB
}


func_1331(var_208_bool)
{
	var_210_int = 0; var_211_string = ""; // 0x534 PushV
	var_211_string = "d7q03"; // 0x535 MovS
	func_1147(var_210_int, var_211_string); // 0x536 NEW_2
	var_212_int = 4; // 0x538 PushI
	var_213_bool = var_210_int == var_212_int; // 0x539 Eq
	if(var_213_bool == 0) goto Label_1341; // 0x53a JumpB
	var_208_bool = 1; // 0x53b MovB
	return 0; // 0x53c Return
	
Label_1341:
	var_208_bool = 0; // 0x53d MovB
	return 0; // 0x53e Return
}


func_818()
{
	StopAnimation(); // 0x332 Func
	StopGroup0(); // 0x334 Func
	return 0; // 0x336 Return
}


func_693()
{
	StopGroup0(); // 0x2b5 Func
	func_636(); // 0x2b8 NEW_2
	var_8_string = ""; // 0x2ba PushV
	var_8_string = "Neutral"; // 0x2bb MovS
	func_1078(var_8_string); // 0x2bc NEW_2
	func_627(); // 0x2bf NEW_2
	return 0; // 0x2c1 Return
}


func_1078(var_249_string)
{
	var_250_bool = 0; var_251_float = 0; var_252_float = 0; var_253_bool = 0; var_254_float = 0; var_255_float = 0; // 0x436 PushV
	lshHasAnimation(var_253_bool, var_249_string); // 0x437 Func
	var_256_bool = var_253_bool; // 0x439 Push
	if(var_256_bool == 0) goto Label_1089; // 0x43a JumpB
	lshGetAnimTimes(var_249_string, var_254_float, var_255_float); // 0x43b Func
	var_257_bool = 0; // 0x43d PushB
	lshPlayAnimation(var_254_float, var_255_float, var_257_bool); // 0x43e Func
	goto Label_1093; // 0x440 Jump
	
Label_1093:
	return 6; // 0x445 Return
	
Label_1089:
	var_258_string = "Can't find lsh animation : "; // 0x441 PushS
	var_259_int = var_258_string + var_249_string; // 0x442 Add
	Trace(var_259_int); // 0x443 Func
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


func_1208(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x4b8 PushV
	GetGameTime(var_154_float); // 0x4b9 Func
	var_155_int = 1; // 0x4bb PushI
	var_156_int = 0; // 0x4bc PushV
	var_157_int = 24; // 0x4bd PushI
	var_156_int = var_154_float / var_154_float; // 0x4be Div2
	var_152_int = var_155_int + var_156_int; // 0x4bf Add2
	return 2; // 0x4c0 Return
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


func_1343(var_216_bool)
{
	var_218_int = 0; var_219_string = ""; // 0x540 PushV
	var_219_string = "d7q03"; // 0x541 MovS
	func_1147(var_218_int, var_219_string); // 0x542 NEW_2
	var_220_int = 1000; // 0x544 PushI
	var_221_bool = var_218_int == var_220_int; // 0x545 Eq
	if(var_221_bool == 0) goto Label_1353; // 0x546 JumpB
	var_216_bool = 1; // 0x547 MovB
	return 0; // 0x548 Return
	
Label_1353:
	var_216_bool = 0; // 0x549 MovB
	return 0; // 0x54a Return
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


func_1217(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x4c1 PushV
	var_34_string = "idle"; // 0x4c2 MovS
	var_35_int = var_32_int; // 0x4c3 Push
	if(var_35_int == 0) goto Label_1222; // 0x4c4 JumpB
	var_34_string = var_34_string + var_32_int; // 0x4c5 Add2
	
Label_1222:
	var_31_string = var_34_string; // 0x4c6 Mov
	return 2; // 0x4c7 Return
}


func_1094(var_230_string, var_231_bool)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0; // 0x446 PushV
	lshHasAnimation(var_237_bool, var_230_string); // 0x447 Func
	var_240_bool = var_237_bool; // 0x449 Push
	if(var_240_bool == 0) goto Label_1104; // 0x44a JumpB
	lshGetAnimTimes(var_230_string, var_238_float, var_239_float); // 0x44b Func
	lshPlayAnimation(var_238_float, var_239_float, var_231_bool); // 0x44d Func
	goto Label_1108; // 0x44f Jump
	
Label_1108:
	return 6; // 0x454 Return
	
Label_1104:
	var_241_string = "Can't find lsh animation : "; // 0x450 PushS
	var_242_int = var_241_string + var_230_string; // 0x451 Add
	Trace(var_242_int); // 0x452 Func
}


func_1224(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x4c8 PushV
	var_28_int = 0; // 0x4c9 MovI
	
Label_1226:
	var_30_string = "all"; // 0x4ca PushS
	var_31_string = ""; var_32_int = 0; // 0x4cb PushV
	var_32_int = var_28_int; // 0x4cc Mov
	func_1217(var_31_string, var_32_int); // 0x4cd NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x4cf Func
	var_36_bool = var_29_bool == 0; // 0x4d1 Not
	if(var_36_bool == 0) goto Label_1236; // 0x4d2 JumpB
	goto Label_1239; // 0x4d3 Jump
	
Label_1239:
	var_25_int = var_28_int; // 0x4d7 Mov
	return 4; // 0x4d8 Return
	
Label_1236:
	var_37_int = 1; // 0x4d4 PushI
	var_28_int = var_28_int + var_37_int; // 0x4d5 Add2
	goto Label_1226; // 0x4d6 Jump
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


func_1355()
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x54b PushV
	var_47_int = 645; // 0x54c PushI
	var_48_int = 2; // 0x54d PushI
	var_49_int = 533279; // 0x54e PushI
	CreateDiaryEntry(var_46_object, var_47_int, var_48_int, var_49_int); // 0x54f Func
	var_50_bool = 0; var_51_object = Obj(); var_52_int = 0; // 0x551 PushV
	var_51_object = var_46_object; // 0x552 Mov
	var_52_int = 641; // 0x553 MovI
	func_1381(var_50_bool, var_51_object, var_52_int); // 0x554 NEW_2
	return 2; // 0x556 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_148; // 0x56 JumpB
	var_199_bool = 0; // 0x57 PushV
	var_199_bool = 0; // 0x58 MovB
	var_200_bool = 0; var_201_object = Obj(); // 0x59 PushV
	var_201_object = var_1_object; // 0x5a MovT
	func_1319(var_201_object); // 0x5b NEW_2
	if(var_200_bool == 0) goto Label_100; // 0x5d JumpB
	var_208_bool = 0; var_209_object = Obj(); // 0x5e PushV
	var_209_object = var_1_object; // 0x5f MovT
	func_1331(var_209_object); // 0x60 NEW_2
	if(var_208_bool == 0) goto Label_100; // 0x62 JumpB
	var_199_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_199_bool == 0) goto Label_126; // 0x64 JumpB
	var_214_object = Obj(); var_215_object = Obj(); // 0x65 PushV
	var_214_object = var_1_object; // 0x66 MovT
	var_215_object = var_0_object; // 0x67 MovT
	func_1241(); // 0x68 NEW_2
	var_218_object = Obj(); var_219_object = Obj(); // 0x6a PushV
	var_218_object = var_1_object; // 0x6b MovT
	var_219_object = var_0_object; // 0x6c MovT
	func_1247(); // 0x6d NEW_2
	var_226_string = ""; // 0x6f PushV
	var_226_string = "Isee"; // 0x70 MovS
	func_178(var_193_object, var_226_string); // 0x71 NEW_2
	var_243_int = 533268; // 0x73 PushI
	SetMessage(var_243_int); // 0x74 TObjFunc
	ClearReplies(); // 0x76 TObjFunc
	var_244_int = 534543; // 0x78 PushI
	var_245_int = 36176; // 0x79 PushI
	var_246_int = 36175; // 0x7a PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x7b TObjFunc
	goto Label_148; // 0x7d Jump
	
Label_148:
	var_247_bool = 0; // 0x94 PushV
	func_1434(var_247_bool); // 0x95 NEW_2
	if(var_247_bool == 0) goto Label_163; // 0x97 JumpB
	
Label_152:
	lshWaitForAnimEnd(); // 0x98 Func
	var_248_string = var_3_string; // 0x9a PushT
	if(var_248_string == 0) goto Label_157; // 0x9b JumpB
	goto Label_162; // 0x9c Jump
	
Label_162:
	goto Label_177; // 0xa2 Jump
	
Label_177:
	return 0; // 0xb1 Return
	
Label_157:
	var_249_string = ""; // 0x9d PushV
	var_249_string = var_2_object; // 0x9e MovT
	func_1078(var_249_string); // 0x9f NEW_2
	goto Label_152; // 0xa1 Jump
	
Label_163:
	var_260_string = "all"; // 0xa3 PushS
	var_261_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_260_string, var_261_string); // 0xa5 Func
	
Label_167:
	WaitForAnimEnd(); // 0xa7 Func
	var_262_string = var_3_string; // 0xa9 PushT
	if(var_262_string == 0) goto Label_172; // 0xaa JumpB
	goto Label_177; // 0xab Jump
	
Label_172:
	var_263_string = "all"; // 0xac PushS
	var_264_string = "idle"; // 0xad PushS
	PlayAnimation(var_263_string, var_264_string); // 0xae Func
	goto Label_167; // 0xb0 Jump
	
Label_126:
	var_265_string = ""; // 0x7e PushV
	var_265_string = "Neutral"; // 0x7f MovS
	func_178(var_193_object, var_265_string); // 0x80 NEW_2
	var_266_int = 533273; // 0x82 PushI
	SetMessage(var_266_int); // 0x83 TObjFunc
	ClearReplies(); // 0x85 TObjFunc
	var_267_int = 533274; // 0x87 PushI
	var_268_int = -1; // 0x88 PushI
	var_269_int = 34788; // 0x89 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x8a TObjFunc
	var_270_int = 534553; // 0x8c PushI
	var_271_int = -1; // 0x8d PushI
	var_272_int = 36185; // 0x8e PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x8f TObjFunc
	goto Label_148; // 0x91 Jump
}


func_850(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x352 PushV
	IsLoaded(var_9_bool); // 0x353 Func
	var_7_bool = var_9_bool; // 0x355 Mov
	return 2; // 0x356 Return
}


func_1109(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x455 PushV
	var_135_bool = 0; // 0x456 PushV
	func_1434(var_135_bool); // 0x457 NEW_2
	if(var_135_bool == 0) goto Label_1122; // 0x459 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x45a Func
	var_136_bool = var_134_bool; // 0x45c Push
	if(var_136_bool == 0) goto Label_1122; // 0x45d JumpB
	lshPlaySpeech(var_132_string); // 0x45e Func
	var_131_bool = 1; // 0x460 MovB
	return 2; // 0x461 Return
	
Label_1122:
	var_131_bool = 0; // 0x462 MovB
	return 2; // 0x463 Return
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
	func_1137(var_64_cvector, var_65_cvector); // 0x372 NEW_2
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
	CameraTransit(var_55_cvector, var_53_cvector); // 0x382 Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x384 PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x385 PushE
	Rotate(var_77_float, var_78_float); // 0x386 Func
	var_79_bool = 0; // 0x388 PushV
	func_1434(var_79_bool); // 0x389 NEW_2
	if(var_79_bool == 0) goto Label_909; // 0x38b JumpB
	goto Label_917; // 0x38c Jump
	
Label_917:
	CameraWaitForPlayFinish(); // 0x395 Func
	ResumeWorld(); // 0x397 Func
	var_37_bool = 1; // 0x399 MovB
	return 18; // 0x39a Return
	
Label_909:
	var_80_string = "head"; // 0x38d PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x38e Func
	var_81_bool = var_57_bool; // 0x390 Push
	if(var_81_bool == 0) goto Label_917; // 0x391 JumpB
	var_82_string = "head"; // 0x392 PushS
	LookAsyncCamera(var_82_string); // 0x393 Func
}


func_600(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x258 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x259 PushE
	RotateAsync(var_84_float, var_85_float); // 0x25a Func
	return 0; // 0x25c Return
}


func_1241()
{
	var_216_string = "ood7AglajaPetr1"; // 0x4da PushS
	var_217_int = 1; // 0x4db PushI
	SetVariable(var_216_string, var_217_int); // 0x4dc Func
	return 0; // 0x4de Return
}


func_1368(var_59_object)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x558 PushV
	GetDiaryRoot(var_61_object); // 0x559 Func
	var_62_bool = var_61_object == 0; // 0x55b Not
	if(var_62_bool == 0) goto Label_1378; // 0x55c JumpB
	var_63_string = "Can't retrieve diary root"; // 0x55d PushS
	Trace(var_63_string); // 0x55e Func
	var_59_object = 0; // 0x560 MovB
	return 2; // 0x561 Return
	
Label_1378:
	var_59_object = var_61_object; // 0x562 Mov
	return 2; // 0x563 Return
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


func_1247()
{
	var_220_bool = 0; var_221_string = ""; var_222_string = ""; // 0x4e0 PushV
	var_221_string = "quest_d7_03"; // 0x4e1 MovS
	var_222_string = "remove_maria"; // 0x4e2 MovS
	func_1196(var_220_bool, var_221_string, var_222_string); // 0x4e3 NEW_2
	return 0; // 0x4e5 Return
}


func_1124()
{
	var_10_bool = 0; // 0x464 PushV
	func_1434(var_10_bool); // 0x465 NEW_2
	if(var_10_bool == 0) goto Label_1130; // 0x467 JumpB
	lshStopSpeech(); // 0x468 Func
	
Label_1130:
	return 0; // 0x46a Return
}


func_1381(var_50_bool, var_51_object, var_52_int)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_int = 0; var_56_object = Obj(); var_57_object = Obj(); var_58_int = 0; // 0x565 PushV
	var_59_object = Obj(); // 0x566 PushV
	func_1368(var_59_object); // 0x567 NEW_2
	var_56_object = var_59_object; // 0x568 Mov
	Find(var_52_int, var_57_object); // 0x56a ObjFunc
	var_64_bool = var_57_object == 0; // 0x56c Not
	if(var_64_bool == 0) goto Label_1396; // 0x56d JumpB
	var_65_string = "Can't find diary parent with id: "; // 0x56e PushS
	var_66_int = var_65_string + var_52_int; // 0x56f Add
	Trace(var_66_int); // 0x570 Func
	var_50_bool = 0; // 0x572 MovB
	return 6; // 0x573 Return
	
Label_1396:
	AddChild(var_51_object); // 0x574 ObjFunc
	var_67_int = 7; // 0x576 PushI
	SendWorldWndMessage(var_67_int); // 0x577 Func
	GetCategory(var_58_int); // 0x579 ObjFunc
	SetDiarySection(var_58_int); // 0x57b Func
	var_50_bool = 0; // 0x57d MovB
	return 6; // 0x57e Return
}


func_1254()
{
	func_1355(); // 0x4e8 NEW_2
	var_68_bool = 0; var_69_string = ""; var_70_string = ""; // 0x4ea PushV
	var_69_string = "quest_d7_03"; // 0x4eb MovS
	var_70_string = "completed"; // 0x4ec MovS
	func_1196(var_68_bool, var_69_string, var_70_string); // 0x4ed NEW_2
	return 0; // 0x4ef Return
}


func_998(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x3e6 PushV
	var_115_string = "c"; // 0x3e7 MovS
	var_116_int = 0; // 0x3e8 MovI
	
Label_1001:
	var_120_int = 1; // 0x3e9 PushI
	if(var_120_int == 0) goto Label_1014; // 0x3ea JumpB
	var_121_int = 1; // 0x3eb PushI
	var_122_int = var_116_int + var_121_int; // 0x3ec Add
	var_123_int = var_115_string + var_122_int; // 0x3ed Add
	HasProperty(var_123_int, var_117_bool); // 0x3ee ObjFunc
	var_124_bool = var_117_bool == 0; // 0x3f0 Not
	if(var_124_bool == 0) goto Label_1011; // 0x3f1 JumpB
	goto Label_1014; // 0x3f2 Jump
	
Label_1014:
	var_125_bool = var_116_int == 0; // 0x3f6 Not
	if(var_125_bool == 0) goto Label_1018; // 0x3f7 JumpB
	var_108_bool = 0; // 0x3f8 MovB
	return 10; // 0x3f9 Return
	
Label_1018:
	var_118_int = 0; // 0x3fa MovI
	var_126_int = 1; // 0x3fb PushI
	var_127_bool = var_116_int > var_126_int; // 0x3fc GT
	if(var_127_bool == 0) goto Label_1024; // 0x3fd JumpB
	irand(var_118_int, var_116_int); // 0x3fe Func
	
Label_1024:
	var_128_int = 1; // 0x400 PushI
	var_129_int = var_118_int + var_128_int; // 0x401 Add
	var_130_int = var_115_string + var_129_int; // 0x402 Add
	GetProperty(var_130_int, var_119_string); // 0x403 ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x405 PushV
	var_132_string = var_119_string; // 0x406 Mov
	func_1109(var_131_bool, var_132_string); // 0x407 NEW_2
	var_108_bool = var_131_bool; // 0x408 Mov
	return 10; // 0x40a Return
	
Label_1011:
	var_137_int = 1; // 0x3f3 PushI
	var_116_int = var_116_int + var_137_int; // 0x3f4 Add2
	goto Label_1001; // 0x3f5 Jump
}


func_1131(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x46b PushV
	self(var_101_object); // 0x46c Func
	var_99_object = var_101_object; // 0x46e Mov
	return 2; // 0x46f Return
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
	func_1224(var_25_int); // 0x2f5 NEW_2
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
	func_1217(var_52_string, var_53_int); // 0x319 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x31b Func
	WaitForAnimEnd(var_22_bool); // 0x31d Func
	var_54_bool = var_22_bool == 0; // 0x31f Not
	if(var_54_bool == 0) goto Label_802; // 0x320 JumpB
	goto Label_813; // 0x321 Jump
}


func_1264(var_13_object)
{
	var_15_string = "samopal is given"; // 0x4f1 PushS
	Trace(var_15_string); // 0x4f2 Func
	var_16_object = Obj(); var_17_string = ""; var_18_int = 0; // 0x4f4 PushV
	var_16_object = var_13_object; // 0x4f5 Mov
	var_17_string = "Samopal"; // 0x4f6 MovS
	var_18_int = 1; // 0x4f7 MovI
	func_1183(var_16_object, var_17_string, var_18_int); // 0x4f8 NEW_2
	return 0; // 0x4fa Return
}


func_1137(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x471 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x472 Or
	var_68_float = sqrt(var_69_int); // 0x473 Sqrt2
	var_70_float = 0.0; // 0x474 PushF
	var_71_bool = var_68_float < var_70_float; // 0x475 LT
	if(var_71_bool == 0) goto Label_1145; // 0x476 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x477 MovV
	return 2; // 0x478 Return
	
Label_1145:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x479 Div2
	return 2; // 0x47a Return
}


func_627()
{
	var_283_float = 0; var_284_float = 0; // 0x273 PushV
	var_285_int = 8; // 0x274 PushI
	var_286_int = 16; // 0x275 PushI
	rand(var_284_float, var_285_int, var_286_int); // 0x276 Func
	var_287_int = 10; // 0x278 PushI
	SetTimer(var_287_int, var_284_float); // 0x279 Func
	return 2; // 0x27b Return
}


func_1147(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x47b PushV
	GetVariable(var_203_string, var_205_int); // 0x47c Func
	var_202_int = var_205_int; // 0x47e Mov
	return 2; // 0x47f Return
}


func_636()
{
	var_282_int = 10; // 0x27c PushI
	KillTimer(var_282_int); // 0x27d Func
	return 0; // 0x27f Return
}


