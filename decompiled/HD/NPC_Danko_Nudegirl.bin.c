task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object, var_17_bool, var_18_bool)
{
	var_19_int = 1; // 0xe0 PushI
	if(var_19_int == 0) goto Label_518; // 0xe1 JumpB
	func_1280(); // 0xe3 NEW_2
	var_21_int = 34719; // 0xe5 PushI
	var_22_bool = var_18_bool == var_21_int; // 0xe6 Eq
	if(var_22_bool == 0) goto Label_242; // 0xe7 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0xe8 PushV
	var_23_object = var_1_object; // 0xe9 MovT
	var_24_object = var_0_object; // 0xea MovT
	func_1391(); // 0xeb NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0xed PushV
	var_88_object = var_1_object; // 0xee MovT
	var_89_object = var_0_object; // 0xef MovT
	func_1432(); // 0xf0 NEW_2
	
Label_242:
	var_114_int = 37504; // 0xf2 PushI
	var_115_bool = var_18_bool == var_114_int; // 0xf3 Eq
	if(var_115_bool == 0) goto Label_255; // 0xf4 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0xf5 PushV
	var_116_object = var_1_object; // 0xf6 MovT
	var_117_object = var_0_object; // 0xf7 MovT
	func_1391(); // 0xf8 NEW_2
	var_118_object = Obj(); var_119_object = Obj(); // 0xfa PushV
	var_118_object = var_1_object; // 0xfb MovT
	var_119_object = var_0_object; // 0xfc MovT
	func_1432(); // 0xfd NEW_2
	
Label_255:
	var_120_int = 37503; // 0xff PushI
	var_121_bool = var_18_bool == var_120_int; // 0x100 Eq
	if(var_121_bool == 0) goto Label_268; // 0x101 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x102 PushV
	var_122_object = var_1_object; // 0x103 MovT
	var_123_object = var_0_object; // 0x104 MovT
	func_1391(); // 0x105 NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0x107 PushV
	var_124_object = var_1_object; // 0x108 MovT
	var_125_object = var_0_object; // 0x109 MovT
	func_1432(); // 0x10a NEW_2
	
Label_268:
	var_126_int = 34716; // 0x10c PushI
	var_127_bool = var_17_bool == var_126_int; // 0x10d Eq
	if(var_127_bool == 0) goto Label_360; // 0x10e JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x10f PushV
	var_129_object = var_1_object; // 0x110 MovT
	func_1448(var_129_object); // 0x111 NEW_2
	if(var_128_bool == 0) goto Label_301; // 0x113 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x114 PushV
	var_136_object = var_1_object; // 0x115 MovT
	var_137_object = var_0_object; // 0x116 MovT
	func_1385(); // 0x117 NEW_2
	var_140_string = ""; // 0x119 PushV
	var_140_string = "Neutral"; // 0x11a MovS
	func_201(var_18_bool, var_140_string); // 0x11b NEW_2
	var_157_int = 533196; // 0x11d PushI
	SetMessage(var_157_int); // 0x11e TObjFunc
	ClearReplies(); // 0x120 TObjFunc
	var_158_int = 535791; // 0x122 PushI
	var_159_int = 37488; // 0x123 PushI
	var_160_int = 37477; // 0x124 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x125 TObjFunc
	var_161_int = 535798; // 0x127 PushI
	var_162_int = 37488; // 0x128 PushI
	var_163_int = 37485; // 0x129 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x12a TObjFunc
	return 0; // 0x12c Return
	
Label_301:
	var_164_bool = 0; // 0x12d PushV
	var_164_bool = 0; // 0x12e MovB
	var_165_bool = 0; var_166_object = Obj(); // 0x12f PushV
	var_166_object = var_1_object; // 0x130 MovT
	func_1460(var_166_object); // 0x131 NEW_2
	if(var_165_bool == 0) goto Label_314; // 0x133 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x134 PushV
	var_172_object = var_1_object; // 0x135 MovT
	func_1472(var_172_object); // 0x136 NEW_2
	if(var_171_bool == 0) goto Label_314; // 0x138 JumpB
	var_164_bool = 1; // 0x139 MovB
	
Label_314:
	if(var_164_bool == 0) goto Label_340; // 0x13a JumpB
	var_177_object = Obj(); var_178_object = Obj(); // 0x13b PushV
	var_177_object = var_1_object; // 0x13c MovT
	var_178_object = var_0_object; // 0x13d MovT
	func_1426(); // 0x13e NEW_2
	var_181_string = ""; // 0x140 PushV
	var_181_string = "Neutral"; // 0x141 MovS
	func_201(var_18_bool, var_181_string); // 0x142 NEW_2
	var_182_int = 533221; // 0x144 PushI
	SetMessage(var_182_int); // 0x145 TObjFunc
	ClearReplies(); // 0x147 TObjFunc
	var_183_int = 533222; // 0x149 PushI
	var_184_int = 37473; // 0x14a PushI
	var_185_int = 34742; // 0x14b PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x14c TObjFunc
	var_186_int = 535790; // 0x14e PushI
	var_187_int = -1; // 0x14f PushI
	var_188_int = 37476; // 0x150 PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x151 TObjFunc
	return 0; // 0x153 Return
	
Label_340:
	var_189_string = ""; // 0x154 PushV
	var_189_string = "Neutral"; // 0x155 MovS
	func_201(var_18_bool, var_189_string); // 0x156 NEW_2
	var_190_int = 533200; // 0x158 PushI
	SetMessage(var_190_int); // 0x159 TObjFunc
	ClearReplies(); // 0x15b TObjFunc
	var_191_int = 533201; // 0x15d PushI
	var_192_int = -1; // 0x15e PushI
	var_193_int = 34721; // 0x15f PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x160 TObjFunc
	var_194_int = 535786; // 0x162 PushI
	var_195_int = -1; // 0x163 PushI
	var_196_int = 37472; // 0x164 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x165 TObjFunc
	return 0; // 0x167 Return
	
Label_360:
	var_197_int = 37473; // 0x168 PushI
	var_198_bool = var_17_bool == var_197_int; // 0x169 Eq
	if(var_198_bool == 0) goto Label_383; // 0x16a JumpB
	var_199_string = ""; // 0x16b PushV
	var_199_string = "Neutral"; // 0x16c MovS
	func_201(var_18_bool, var_199_string); // 0x16d NEW_2
	var_200_int = 535787; // 0x16f PushI
	SetMessage(var_200_int); // 0x170 TObjFunc
	ClearReplies(); // 0x172 TObjFunc
	var_201_int = 535788; // 0x174 PushI
	var_202_int = -1; // 0x175 PushI
	var_203_int = 37474; // 0x176 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x177 TObjFunc
	var_204_int = 535789; // 0x179 PushI
	var_205_int = -1; // 0x17a PushI
	var_206_int = 37475; // 0x17b PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x17c TObjFunc
	return 0; // 0x17e Return
	
Label_383:
	var_207_int = 37488; // 0x17f PushI
	var_208_bool = var_17_bool == var_207_int; // 0x180 Eq
	if(var_208_bool == 0) goto Label_401; // 0x181 JumpB
	var_209_string = ""; // 0x182 PushV
	var_209_string = "Neutral"; // 0x183 MovS
	func_201(var_18_bool, var_209_string); // 0x184 NEW_2
	var_210_int = 535799; // 0x186 PushI
	SetMessage(var_210_int); // 0x187 TObjFunc
	ClearReplies(); // 0x189 TObjFunc
	var_211_int = 535800; // 0x18b PushI
	var_212_int = 37491; // 0x18c PushI
	var_213_int = 37490; // 0x18d PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_214_int = 37491; // 0x191 PushI
	var_215_bool = var_17_bool == var_214_int; // 0x192 Eq
	if(var_215_bool == 0) goto Label_424; // 0x193 JumpB
	var_216_string = ""; // 0x194 PushV
	var_216_string = "Neutral"; // 0x195 MovS
	func_201(var_18_bool, var_216_string); // 0x196 NEW_2
	var_217_int = 535801; // 0x198 PushI
	SetMessage(var_217_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_218_int = 535802; // 0x19d PushI
	var_219_int = 37493; // 0x19e PushI
	var_220_int = 37492; // 0x19f PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x1a0 TObjFunc
	var_221_int = 535806; // 0x1a2 PushI
	var_222_int = 37498; // 0x1a3 PushI
	var_223_int = 37497; // 0x1a4 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1a5 TObjFunc
	return 0; // 0x1a7 Return
	
Label_424:
	var_224_int = 37498; // 0x1a8 PushI
	var_225_bool = var_17_bool == var_224_int; // 0x1a9 Eq
	if(var_225_bool == 0) goto Label_442; // 0x1aa JumpB
	var_226_string = ""; // 0x1ab PushV
	var_226_string = "Neutral"; // 0x1ac MovS
	func_201(var_18_bool, var_226_string); // 0x1ad NEW_2
	var_227_int = 535807; // 0x1af PushI
	SetMessage(var_227_int); // 0x1b0 TObjFunc
	ClearReplies(); // 0x1b2 TObjFunc
	var_228_int = 535808; // 0x1b4 PushI
	var_229_int = 37500; // 0x1b5 PushI
	var_230_int = 37499; // 0x1b6 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x1b7 TObjFunc
	return 0; // 0x1b9 Return
	
Label_442:
	var_231_int = 37500; // 0x1ba PushI
	var_232_bool = var_17_bool == var_231_int; // 0x1bb Eq
	if(var_232_bool == 0) goto Label_465; // 0x1bc JumpB
	var_233_string = ""; // 0x1bd PushV
	var_233_string = "Neutral"; // 0x1be MovS
	func_201(var_18_bool, var_233_string); // 0x1bf NEW_2
	var_234_int = 535809; // 0x1c1 PushI
	SetMessage(var_234_int); // 0x1c2 TObjFunc
	ClearReplies(); // 0x1c4 TObjFunc
	var_235_int = 535810; // 0x1c6 PushI
	var_236_int = 37493; // 0x1c7 PushI
	var_237_int = 37501; // 0x1c8 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x1c9 TObjFunc
	var_238_int = 535811; // 0x1cb PushI
	var_239_int = -1; // 0x1cc PushI
	var_240_int = 37503; // 0x1cd PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1ce TObjFunc
	return 0; // 0x1d0 Return
	
Label_465:
	var_241_int = 37493; // 0x1d1 PushI
	var_242_bool = var_17_bool == var_241_int; // 0x1d2 Eq
	if(var_242_bool == 0) goto Label_488; // 0x1d3 JumpB
	var_243_string = ""; // 0x1d4 PushV
	var_243_string = "Neutral"; // 0x1d5 MovS
	func_201(var_18_bool, var_243_string); // 0x1d6 NEW_2
	var_244_int = 535803; // 0x1d8 PushI
	SetMessage(var_244_int); // 0x1d9 TObjFunc
	ClearReplies(); // 0x1db TObjFunc
	var_245_int = 535804; // 0x1dd PushI
	var_246_int = 37495; // 0x1de PushI
	var_247_int = 37494; // 0x1df PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x1e0 TObjFunc
	var_248_int = 535812; // 0x1e2 PushI
	var_249_int = -1; // 0x1e3 PushI
	var_250_int = 37504; // 0x1e4 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x1e5 TObjFunc
	return 0; // 0x1e7 Return
	
Label_488:
	var_251_int = 37495; // 0x1e8 PushI
	var_252_bool = var_17_bool == var_251_int; // 0x1e9 Eq
	if(var_252_bool == 0) goto Label_506; // 0x1ea JumpB
	var_253_string = ""; // 0x1eb PushV
	var_253_string = "Neutral"; // 0x1ec MovS
	func_201(var_18_bool, var_253_string); // 0x1ed NEW_2
	var_254_int = 535805; // 0x1ef PushI
	SetMessage(var_254_int); // 0x1f0 TObjFunc
	ClearReplies(); // 0x1f2 TObjFunc
	var_255_int = 533199; // 0x1f4 PushI
	var_256_int = -1; // 0x1f5 PushI
	var_257_int = 34719; // 0x1f6 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x1f7 TObjFunc
	return 0; // 0x1f9 Return
	
Label_506:
	var_3_string = 1; // 0x1fa TMovB
	var_258_bool = 0; // 0x1fb PushV
	func_1383(var_258_bool); // 0x1fc NEW_2
	if(var_258_bool == 0) goto Label_514; // 0x1fe JumpB
	lshStopAnimation(); // 0x1ff Func
	goto Label_516; // 0x201 Jump
	
Label_516:
	return 0; // 0x204 Return
	
Label_514:
	StopAnimation(); // 0x202 Func
	
Label_518:
	return 0; // 0x206 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object, var_17_bool, var_18_bool)
{
	var_19_int = 1; // 0x2a9 PushI
	if(var_19_int == 0) goto Label_721; // 0x2aa JumpB
	func_1280(); // 0x2ac NEW_2
	var_21_int = 42557; // 0x2ae PushI
	var_22_bool = var_17_bool == var_21_int; // 0x2af Eq
	if(var_22_bool == 0) goto Label_709; // 0x2b0 JumpB
	var_23_string = ""; // 0x2b1 PushV
	var_23_string = "Neutral"; // 0x2b2 MovS
	func_658(var_18_bool, var_23_string); // 0x2b3 NEW_2
	var_40_int = 540548; // 0x2b5 PushI
	SetMessage(var_40_int); // 0x2b6 TObjFunc
	ClearReplies(); // 0x2b8 TObjFunc
	var_41_int = 540549; // 0x2ba PushI
	var_42_int = -1; // 0x2bb PushI
	var_43_int = 42558; // 0x2bc PushI
	AddReply(var_41_int, var_42_int, var_43_int); // 0x2bd TObjFunc
	var_44_int = 540797; // 0x2bf PushI
	var_45_int = -1; // 0x2c0 PushI
	var_46_int = 42846; // 0x2c1 PushI
	AddReply(var_44_int, var_45_int, var_46_int); // 0x2c2 TObjFunc
	return 0; // 0x2c4 Return
	
Label_709:
	var_3_string = 1; // 0x2c5 TMovB
	var_47_bool = 0; // 0x2c6 PushV
	func_1383(var_47_bool); // 0x2c7 NEW_2
	if(var_47_bool == 0) goto Label_717; // 0x2c9 JumpB
	lshStopAnimation(); // 0x2ca Func
	goto Label_719; // 0x2cc Jump
	
Label_719:
	return 0; // 0x2cf Return
	
Label_717:
	StopAnimation(); // 0x2cd Func
	
Label_721:
	return 0; // 0x2d1 Return
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_bool, var_17_object)
{
	func_885(var_16_bool, var_17_object); // 0x2da NEW_2
	var_21_bool = 0; var_22_int = 0; // 0x2dc PushV
	var_22_int = 7; // 0x2dd MovI
	func_1345(var_21_bool, var_22_int); // 0x2de NEW_2
	if(var_21_bool == 0) goto Label_744; // 0x2e0 JumpB
	var_29_int = 0; var_30_object = Obj(); // 0x2e1 PushV
	var_30_object = var_17_object; // 0x2e2 Mov
	TaskCall(0); // 0x2e3 TaskCall
	func_0(var_31_object, var_29_int, var_30_object); // 0x2e4 NEW_2
	TaskReturn(); // 0x2e5 TaskReturn
	return 0; // 0x2e7 Return
	
Label_744:
	var_204_int = 0; var_205_object = Obj(); // 0x2e8 PushV
	var_205_object = var_17_object; // 0x2e9 Mov
	TaskCall(2); // 0x2ea TaskCall
	func_519(var_206_object, var_204_int, var_205_object); // 0x2eb NEW_2
	TaskReturn(); // 0x2ec TaskReturn
	return 0; // 0x2ee Return
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_bool, var_17_string)
{
	var_18_string = "cleanup"; // 0x316 PushS
	var_19_bool = var_17_string == var_18_string; // 0x317 Eq
	if(var_19_bool == 0) goto Label_796; // 0x318 JumpB
	func_769(var_17_string); // 0x31a NEW_2
	
Label_796:
	return 0; // 0x31c Return
}


task_4_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_bool)
{
	var_17_object = var_6_object; // 0x31d PushT
	if(var_17_object == 0) goto Label_802; // 0x31e JumpB
	func_885(var_15_bool, var_16_bool); // 0x320 NEW_2
	
Label_802:
	var_21_bool = 0; // 0x322 PushV
	var_21_bool = 0; // 0x323 MovB
	var_22_object = var_5_object; // 0x324 PushT
	if(var_22_object == 0) goto Label_811; // 0x325 JumpB
	var_23_bool = 0; // 0x326 PushV
	func_818(var_23_bool); // 0x327 NEW_2
	if(var_23_bool == 0) goto Label_811; // 0x329 JumpB
	var_21_bool = 1; // 0x32a MovB
	
Label_811:
	if(var_21_bool == 0) goto Label_817; // 0x32b JumpB
	var_24_object = Obj(); // 0x32c PushV
	func_1287(var_24_object); // 0x32d NEW_2
	RemoveActor(var_24_object); // 0x32f Func
	
Label_817:
	return 0; // 0x331 Return
}


task_4_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_bool, var_17_int)
{
	var_18_int = 10; // 0x35f PushI
	var_19_bool = var_17_int == var_18_int; // 0x360 Eq
	if(var_19_bool == 0) goto Label_884; // 0x361 JumpB
	var_20_bool = 0; // 0x362 PushV
	func_847(var_15_bool, var_16_bool, var_17_int, var_20_bool); // 0x363 NEW_2
	if(var_20_bool == 0) goto Label_878; // 0x365 JumpB
	var_33_bool = var_2_object == 0; // 0x366 Not
	if(var_33_bool == 0) goto Label_877; // 0x367 JumpB
	var_34_object = Obj(); // 0x368 PushV
	var_34_object = var_4_bool; // 0x369 MovT
	func_1254(var_34_object); // 0x36a NEW_2
	var_2_object = 1; // 0x36c TMovB
	
Label_877:
	goto Label_884; // 0x36d Jump
	
Label_884:
	return 0; // 0x374 Return
	
Label_878:
	var_41_object = var_2_object; // 0x36e PushT
	if(var_41_object == 0) goto Label_884; // 0x36f JumpB
	var_42_string = "head"; // 0x370 PushS
	UnlookAsync(var_42_string); // 0x371 Func
	var_2_object = 0; // 0x373 TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_bool)
{
	var_17_float = 0; var_18_float = 0; // 0x2d2 PushV
	var_17_float = 300; // 0x2d3 MovI
	var_18_float = 100; // 0x2d4 MovI
	func_751(var_16_bool, var_17_float, var_18_float); // 0x2d5 NEW_2
	return 0; // 0x2d7 Return
}


func_1280()
{
	var_20_bool = 0; // 0x500 PushV
	func_1383(var_20_bool); // 0x501 NEW_2
	if(var_20_bool == 0) goto Label_1286; // 0x503 JumpB
	lshStopSpeech(); // 0x504 Func
	
Label_1286:
	return 0; // 0x506 Return
}


func_0(var_0_object, var_29_int, var_30_object)
{
	var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x0 PushV
	var_0_object = var_30_object; // 0x1 TMov
	var_40_bool = 0; var_41_object = Obj(); var_42_float = 0; // 0x2 PushV
	var_41_object = var_30_object; // 0x3 Mov
	var_42_float = 70.0; // 0x4 MovF
	func_998(var_41_object, var_42_float); // 0x5 NEW_2
	var_87_bool = var_40_bool == 0; // 0x7 Not
	if(var_87_bool == 0) goto Label_11; // 0x8 JumpB
	var_29_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_36_object); // 0xb Func
	var_88_int = 0; // 0xd PushV
	func_1377(var_88_int); // 0xe NEW_2
	SetNPCName(var_88_int); // 0x10 ObjFunc
	var_89_int = 0; // 0x12 PushV
	func_1375(var_89_int); // 0x13 NEW_2
	SetNPCDescription(var_89_int); // 0x15 ObjFunc
	var_90_string = ""; // 0x17 PushV
	func_1379(var_90_string); // 0x18 NEW_2
	SetPhoto(var_90_string); // 0x1a ObjFunc
	var_91_string = ""; // 0x1c PushV
	func_1381(var_91_string); // 0x1d NEW_2
	SetPhoto2(var_91_string); // 0x1f ObjFunc
	var_92_int = 0; // 0x21 PushV
	func_1601(var_92_int); // 0x22 NEW_2
	SetPlayerName(var_92_int); // 0x24 ObjFunc
	var_38_int = -1; // 0x26 MovI
	IsOverrideActive(var_37_bool); // 0x27 Func
	var_100_bool = var_37_bool; // 0x29 Push
	if(var_100_bool == 0) goto Label_45; // 0x2a JumpB
	var_29_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_36_object); // 0x2d Func
	var_101_object = Obj(); var_102_object = Obj(); // 0x2f PushV
	var_101_object = var_30_object; // 0x30 Mov
	var_102_object = var_36_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_103_object, var_104_object, var_105_string, var_106_bool, var_101_object, var_102_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_39_bool); // 0x36 ObjFunc
	
Label_56:
	var_195_bool = var_39_bool == 0; // 0x38 Not
	if(var_195_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_39_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_196_object = Obj(); // 0x3f PushV
	var_196_object = var_30_object; // 0x40 Mov
	func_1067(); // 0x41 NEW_2
	StopDialog(var_36_object); // 0x43 Func
	GetReturnValue(var_38_int); // 0x45 ObjFunc
	var_29_int = var_38_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_769(var_5_object)
{
	var_5_object = 1; // 0x301 TMovB
	var_20_bool = 0; // 0x302 PushV
	var_20_bool = 0; // 0x303 MovB
	var_21_bool = 0; // 0x304 PushV
	func_993(var_21_bool); // 0x305 NEW_2
	var_24_bool = var_21_bool == 0; // 0x307 Not
	if(var_24_bool == 0) goto Label_782; // 0x308 JumpB
	var_25_bool = 0; // 0x309 PushV
	func_818(var_25_bool); // 0x30a NEW_2
	if(var_25_bool == 0) goto Label_782; // 0x30c JumpB
	var_20_bool = 1; // 0x30d MovB
	
Label_782:
	if(var_20_bool == 0) goto Label_788; // 0x30e JumpB
	var_26_object = Obj(); // 0x30f PushV
	func_1287(var_26_object); // 0x310 NEW_2
	RemoveActor(var_26_object); // 0x312 Func
	
Label_788:
	return 0; // 0x314 Return
}


func_899()
{
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_float = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_bool = 0; // 0x383 PushV
	WaitForAnimEnd(); // 0x384 Func
	var_49_bool = 0; // 0x386 PushV
	func_993(var_49_bool); // 0x387 NEW_2
	var_50_bool = var_49_bool == 0; // 0x389 Not
	if(var_50_bool == 0) goto Label_908; // 0x38a JumpB
	return 14; // 0x38b Return
	
Label_908:
	var_51_int = 0; // 0x38c PushV
	func_1358(var_51_int); // 0x38d NEW_2
	var_42_int = var_51_int; // 0x38e Mov
	var_43_int = 0; // 0x390 MovI
	
Label_913:
	var_64_bool = 0; // 0x391 PushV
	var_64_bool = 0; // 0x392 MovB
	var_65_int = 5; // 0x393 PushI
	var_66_bool = var_43_int < var_65_int; // 0x394 LT
	if(var_66_bool == 0) goto Label_923; // 0x395 JumpB
	var_67_bool = 0; // 0x396 PushV
	func_993(var_67_bool); // 0x397 NEW_2
	if(var_67_bool == 0) goto Label_923; // 0x399 JumpB
	var_64_bool = 1; // 0x39a MovB
	
Label_923:
	if(var_64_bool == 0) goto Label_975; // 0x39b JumpB
	var_68_int = 3; // 0x39c PushI
	irand(var_44_int, var_68_int); // 0x39d Func
	var_69_int = 0; // 0x39f PushI
	var_70_bool = var_44_int == var_69_int; // 0x3a0 Eq
	if(var_70_bool == 0) goto Label_947; // 0x3a1 JumpB
	var_71_int = var_42_int; // 0x3a2 Push
	if(var_71_int == 0) goto Label_946; // 0x3a3 JumpB
	irand(var_45_int, var_42_int); // 0x3a4 Func
	var_72_string = "all"; // 0x3a6 PushS
	var_73_string = ""; var_74_int = 0; // 0x3a7 PushV
	var_74_int = var_45_int; // 0x3a8 Mov
	func_1351(var_73_string, var_74_int); // 0x3a9 NEW_2
	PlayAnimation(var_72_string, var_73_string); // 0x3ab Func
	WaitForAnimEnd(var_46_bool); // 0x3ad Func
	var_75_bool = var_46_bool == 0; // 0x3af Not
	if(var_75_bool == 0) goto Label_946; // 0x3b0 JumpB
	goto Label_975; // 0x3b1 Jump
	
Label_975:
	ResetAAS(); // 0x3cf Func
	return 14; // 0x3d1 Return
	
Label_946:
	goto Label_964; // 0x3b2 Jump
	
Label_964:
	var_76_bool = 0; // 0x3c4 PushV
	func_978(var_76_bool); // 0x3c5 NEW_2
	var_77_bool = var_76_bool == 0; // 0x3c7 Not
	if(var_77_bool == 0) goto Label_970; // 0x3c8 JumpB
	goto Label_975; // 0x3c9 Jump
	
Label_970:
	ResetAAS(); // 0x3ca Func
	var_78_int = 1; // 0x3cc PushI
	var_43_int = var_43_int + var_78_int; // 0x3cd Add2
	goto Label_913; // 0x3ce Jump
	
Label_947:
	var_79_int = 1; // 0x3b3 PushI
	var_80_bool = var_44_int == var_79_int; // 0x3b4 Eq
	if(var_80_bool == 0) goto Label_961; // 0x3b5 JumpB
	var_81_int = 4; // 0x3b6 PushI
	rand(var_47_float, var_81_int); // 0x3b7 Func
	var_82_int = 1; // 0x3b9 PushI
	var_83_int = var_47_float + var_82_int; // 0x3ba Add
	Sleep(var_83_int, var_48_bool); // 0x3bb Func
	var_84_bool = var_48_bool == 0; // 0x3bd Not
	if(var_84_bool == 0) goto Label_960; // 0x3be JumpB
	goto Label_975; // 0x3bf Jump
	
Label_960:
	goto Label_964; // 0x3c0 Jump
	
Label_961:
	var_85_int = var_43_int; // 0x3c1 Push
	if(var_85_int == 0) goto Label_964; // 0x3c2 JumpB
	goto Label_975; // 0x3c3 Jump
}


func_1287(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x507 PushV
	self(var_26_object); // 0x508 Func
	var_24_object = var_26_object; // 0x50a Mov
	return 2; // 0x50b Return
}


func_519(var_0_object, var_204_int, var_205_object)
{
	var_207_object = Obj(); var_208_bool = 0; var_209_int = 0; var_210_bool = 0; var_211_object = Obj(); var_212_bool = 0; var_213_int = 0; var_214_bool = 0; // 0x207 PushV
	var_0_object = var_205_object; // 0x208 TMov
	var_215_bool = 0; var_216_object = Obj(); var_217_float = 0; // 0x209 PushV
	var_216_object = var_205_object; // 0x20a Mov
	var_217_float = 70.0; // 0x20b MovF
	func_998(var_216_object, var_217_float); // 0x20c NEW_2
	var_218_bool = var_215_bool == 0; // 0x20e Not
	if(var_218_bool == 0) goto Label_530; // 0x20f JumpB
	var_204_int = -2; // 0x210 MovI
	return 8; // 0x211 Return
	
Label_530:
	CreateDialog(var_211_object); // 0x212 Func
	var_219_int = 0; // 0x214 PushV
	func_1377(var_219_int); // 0x215 NEW_2
	SetNPCName(var_219_int); // 0x217 ObjFunc
	var_220_int = 0; // 0x219 PushV
	func_1375(var_220_int); // 0x21a NEW_2
	SetNPCDescription(var_220_int); // 0x21c ObjFunc
	var_221_string = ""; // 0x21e PushV
	func_1379(var_221_string); // 0x21f NEW_2
	SetPhoto(var_221_string); // 0x221 ObjFunc
	var_222_string = ""; // 0x223 PushV
	func_1381(var_222_string); // 0x224 NEW_2
	SetPhoto2(var_222_string); // 0x226 ObjFunc
	var_223_int = 0; // 0x228 PushV
	func_1601(var_223_int); // 0x229 NEW_2
	SetPlayerName(var_223_int); // 0x22b ObjFunc
	var_213_int = -1; // 0x22d MovI
	IsOverrideActive(var_212_bool); // 0x22e Func
	var_224_bool = var_212_bool; // 0x230 Push
	if(var_224_bool == 0) goto Label_564; // 0x231 JumpB
	var_204_int = -2; // 0x232 MovI
	return 8; // 0x233 Return
	
Label_564:
	DoDialog(var_211_object); // 0x234 Func
	var_225_bool = 0; var_226_object = Obj(); // 0x236 PushV
	var_227_object = Obj(); // 0x237 PushV
	func_1287(var_227_object); // 0x238 NEW_2
	var_226_object = var_227_object; // 0x239 Mov
	func_1085(var_225_bool, var_226_object); // 0x23b NEW_2
	var_315_object = Obj(); var_316_object = Obj(); // 0x23d PushV
	var_315_object = var_205_object; // 0x23e Mov
	var_316_object = var_211_object; // 0x23f Mov
	TaskCall(3); // 0x240 TaskCall
	func_600(var_317_object, var_318_object, var_319_string, var_320_bool, var_315_object, var_316_object); // 0x241 NEW_2
	TaskReturn(); // 0x242 TaskReturn
	IsDialogEnd(var_214_bool); // 0x244 ObjFunc
	
Label_582:
	var_345_bool = var_214_bool == 0; // 0x246 Not
	if(var_345_bool == 0) goto Label_589; // 0x247 JumpB
	sync(); // 0x248 Func
	IsDialogEnd(var_214_bool); // 0x24a ObjFunc
	goto Label_582; // 0x24c Jump
	
Label_589:
	var_346_object = Obj(); // 0x24d PushV
	var_346_object = var_205_object; // 0x24e Mov
	func_1067(); // 0x24f NEW_2
	StopDialog(var_211_object); // 0x251 Func
	GetReturnValue(var_213_int); // 0x253 ObjFunc
	var_204_int = var_213_int; // 0x255 Mov
	return 8; // 0x256 Return
}


func_1293(var_67_cvector, var_68_cvector)
{
	var_70_float = 0; var_71_float = 0; // 0x50d PushV
	var_72_int = var_68_cvector | var_68_cvector; // 0x50e Or
	var_71_float = sqrt(var_72_int); // 0x50f Sqrt2
	var_73_float = 0.0; // 0x510 PushF
	var_74_bool = var_71_float < var_73_float; // 0x511 LT
	if(var_74_bool == 0) goto Label_1301; // 0x512 JumpB
	var_67_cvector = CVector(0.0, 0.0, 0.0); // 0x513 MovV
	return 2; // 0x514 Return
	
Label_1301:
	var_67_cvector = var_68_cvector / var_68_cvector; // 0x515 Div2
	return 2; // 0x516 Return
}


func_1551(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x60f PushV
	GetMainOutdoorScene(var_32_object); // 0x610 Func
	var_34_bool = var_32_object == 0; // 0x612 NullEq
	if(var_34_bool == 0) goto Label_1562; // 0x613 JumpB
	var_35_string = "Can't find main outdoor scene"; // 0x614 PushS
	Trace(var_35_string); // 0x615 Func
	var_33_object = 0; // 0x617 SetNull
	var_29_object = var_33_object; // 0x618 Mov
	return 4; // 0x619 Return
	
Label_1562:
	GetMap(var_33_object); // 0x61a ObjFunc
	var_29_object = var_33_object; // 0x61c Mov
	return 4; // 0x61d Return
}


func_1426()
{
	var_177_string = "ood7Nudegirl2"; // 0x593 PushS
	var_178_int = 1; // 0x594 PushI
	SetVariable(var_177_string, var_178_int); // 0x595 Func
	return 0; // 0x597 Return
}


func_658(var_2_object, var_322_string)
{
	var_323_bool = 0; // 0x293 PushV
	func_1383(var_323_bool); // 0x294 NEW_2
	var_324_bool = var_323_bool == 0; // 0x296 Not
	if(var_324_bool == 0) goto Label_665; // 0x297 JumpB
	return 0; // 0x298 Return
	
Label_665:
	var_325_bool = var_322_string == var_2_object; // 0x299 Eq
	if(var_325_bool == 0) goto Label_668; // 0x29a JumpB
	return 0; // 0x29b Return
	
Label_668:
	var_326_string = ""; var_327_bool = 0; // 0x29c PushV
	var_326_string = var_322_string; // 0x29d Mov
	var_328_string = ""; // 0x29e PushS
	var_329_bool = var_322_string == var_328_string; // 0x29f Eq
	if(var_329_bool == 0) goto Label_675; // 0x2a0 JumpB
	var_327_bool = 0; // 0x2a1 MovB
	goto Label_676; // 0x2a2 Jump
	
Label_676:
	func_1239(var_326_string, var_327_bool); // 0x2a4 NEW_2
	var_2_object = var_322_string; // 0x2a6 TMov
	return 0; // 0x2a7 Return
	
Label_675:
	var_327_bool = 1; // 0x2a3 MovB
}


func_1303(var_110_int, var_111_string)
{
	var_112_int = 0; var_113_int = 0; // 0x517 PushV
	GetVariable(var_111_string, var_113_int); // 0x518 Func
	var_110_int = var_113_int; // 0x51a Mov
	return 2; // 0x51b Return
}


func_1432()
{
	var_90_object = Obj(); var_91_string = ""; var_92_float = 0; // 0x599 PushV
	var_93_object = Obj(); // 0x59a PushV
	func_1551(var_93_object); // 0x59b NEW_2
	var_90_object = var_93_object; // 0x59c Mov
	var_91_string = "pt_map_andrei"; // 0x59e MovS
	var_92_float = 2; // 0x59f MovI
	func_1568(var_90_object, var_91_string, var_92_float); // 0x5a0 NEW_2
	var_113_object = Obj(); // 0x5a2 PushV
	func_1551(var_113_object); // 0x5a3 NEW_2
	ShowMap(var_113_object); // 0x5a5 ObjFunc
	return 0; // 0x5a7 Return
}


func_1308(var_74_object, var_75_string)
{
	var_76_object = Obj(); var_77_object = Obj(); var_78_object = Obj(); var_79_object = Obj(); // 0x51c PushV
	GetMainOutdoorScene(var_78_object); // 0x51d Func
	var_80_string = ".bin"; // 0x51f PushS
	var_81_int = var_75_string + var_80_string; // 0x520 Add
	AddBlankActor(var_79_object, var_78_object, var_75_string, var_81_int); // 0x521 Func
	var_74_object = var_79_object; // 0x523 Mov
	return 4; // 0x524 Return
}


func_1180(var_267_bool)
{
	var_269_string = ""; var_270_int = 0; var_271_bool = 0; var_272_int = 0; var_273_string = ""; var_274_string = ""; var_275_int = 0; var_276_bool = 0; var_277_int = 0; var_278_string = ""; // 0x49c PushV
	var_279_string = "d"; // 0x49d PushS
	var_280_int = 0; // 0x49e PushV
	func_1336(var_280_int); // 0x49f NEW_2
	var_281_int = var_279_string + var_280_int; // 0x4a1 Add
	var_282_string = "m"; // 0x4a2 PushS
	var_274_string = var_281_int + var_282_string; // 0x4a3 Add2
	var_275_int = 0; // 0x4a4 MovI
	
Label_1189:
	var_283_int = 1; // 0x4a5 PushI
	if(var_283_int == 0) goto Label_1202; // 0x4a6 JumpB
	var_284_int = 1; // 0x4a7 PushI
	var_285_int = var_275_int + var_284_int; // 0x4a8 Add
	var_286_int = var_274_string + var_285_int; // 0x4a9 Add
	HasProperty(var_286_int, var_276_bool); // 0x4aa ObjFunc
	var_287_bool = var_276_bool == 0; // 0x4ac Not
	if(var_287_bool == 0) goto Label_1199; // 0x4ad JumpB
	goto Label_1202; // 0x4ae Jump
	
Label_1202:
	var_288_bool = var_275_int == 0; // 0x4b2 Not
	if(var_288_bool == 0) goto Label_1206; // 0x4b3 JumpB
	var_267_bool = 0; // 0x4b4 MovB
	return 10; // 0x4b5 Return
	
Label_1206:
	var_277_int = 0; // 0x4b6 MovI
	var_289_int = 1; // 0x4b7 PushI
	var_290_bool = var_275_int > var_289_int; // 0x4b8 GT
	if(var_290_bool == 0) goto Label_1212; // 0x4b9 JumpB
	irand(var_277_int, var_275_int); // 0x4ba Func
	
Label_1212:
	var_291_int = 1; // 0x4bc PushI
	var_292_int = var_277_int + var_291_int; // 0x4bd Add
	var_293_int = var_274_string + var_292_int; // 0x4be Add
	GetProperty(var_293_int, var_278_string); // 0x4bf ObjFunc
	var_294_bool = 0; var_295_string = ""; // 0x4c1 PushV
	var_295_string = var_278_string; // 0x4c2 Mov
	func_1265(var_294_bool, var_295_string); // 0x4c3 NEW_2
	var_267_bool = var_294_bool; // 0x4c4 Mov
	return 10; // 0x4c6 Return
	
Label_1199:
	var_296_int = 1; // 0x4af PushI
	var_275_int = var_275_int + var_296_int; // 0x4b0 Add2
	goto Label_1189; // 0x4b1 Jump
}


func_1568(var_90_object, var_91_string, var_92_float)
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_object = Obj(); var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_object = Obj(); var_101_bool = 0; // 0x620 PushV
	GetMainOutdoorScene(var_100_object); // 0x621 Func
	var_102_bool = var_100_object == 0; // 0x623 NullEq
	if(var_102_bool == 0) goto Label_1577; // 0x624 JumpB
	var_103_string = "Can't find main outdoor scene"; // 0x625 PushS
	Trace(var_103_string); // 0x626 Func
	return 8; // 0x628 Return
	
Label_1577:
	GetLocator(var_91_string, var_101_bool, var_98_cvector, var_99_cvector); // 0x629 ObjFunc
	var_104_bool = var_101_bool == 0; // 0x62b Not
	if(var_104_bool == 0) goto Label_1587; // 0x62c JumpB
	var_105_string = "Warning: outdoor scene locator "; // 0x62d PushS
	var_106_int = var_105_string + var_91_string; // 0x62e Add
	var_107_string = " doesnt exist"; // 0x62f PushS
	var_108_int = var_106_int + var_107_string; // 0x630 Add
	Trace(var_108_int); // 0x631 Func
	
Label_1587:
	GetMap(var_90_object); // 0x633 ObjFunc
	var_109_bool = var_90_object == 0; // 0x635 NullEq
	if(var_109_bool == 0) goto Label_1595; // 0x636 JumpB
	var_110_string = "Can't find map"; // 0x637 PushS
	Trace(var_110_string); // 0x638 Func
	return 8; // 0x63a Return
	
Label_1595:
	var_111_float = GetByIndex(var_98_cvector, 0); // 0x63b PushE
	var_112_float = GetByIndex(var_98_cvector, 2); // 0x63c PushE
	SetMapParams(var_111_float, var_112_float, var_92_float); // 0x63d ObjFunc
	return 8; // 0x63f Return
}


func_1319(var_82_bool, var_83_string, var_84_string)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x527 PushV
	FindActor(var_86_object, var_83_string); // 0x528 Func
	var_87_bool = var_86_object == 0; // 0x52a NullEq
	if(var_87_bool == 0) goto Label_1326; // 0x52b JumpB
	var_82_bool = 0; // 0x52c MovB
	return 2; // 0x52d Return
	
Label_1326:
	Trigger(var_86_object, var_84_string); // 0x52e Func
	var_82_bool = 1; // 0x530 MovB
	return 2; // 0x531 Return
}


func_1448(var_108_bool)
{
	var_110_int = 0; var_111_string = ""; // 0x5a9 PushV
	var_111_string = "ood7Nudegirl1"; // 0x5aa MovS
	func_1303(var_110_int, var_111_string); // 0x5ab NEW_2
	var_114_int = 0; // 0x5ad PushI
	var_115_bool = var_110_int == var_114_int; // 0x5ae Eq
	if(var_115_bool == 0) goto Label_1458; // 0x5af JumpB
	var_108_bool = 1; // 0x5b0 MovB
	return 0; // 0x5b1 Return
	
Label_1458:
	var_108_bool = 0; // 0x5b2 MovB
	return 0; // 0x5b3 Return
}


func_1067()
{
	var_197_bool = 0; var_198_bool = 0; // 0x42b PushV
	var_199_bool = 1; // 0x42c PushB
	CameraSwitchToNormal(var_199_bool); // 0x42d Func
	var_200_bool = 0; // 0x42f PushV
	func_1383(var_200_bool); // 0x430 NEW_2
	if(var_200_bool == 0) goto Label_1076; // 0x432 JumpB
	goto Label_1084; // 0x433 Jump
	
Label_1084:
	return 2; // 0x43c Return
	
Label_1076:
	var_201_string = "head"; // 0x434 PushS
	HasAnimationTrack(var_198_bool, var_201_string); // 0x435 Func
	var_202_bool = var_198_bool; // 0x437 Push
	if(var_202_bool == 0) goto Label_1084; // 0x438 JumpB
	var_203_string = "head"; // 0x439 PushS
	UnlookAsync(var_203_string); // 0x43a Func
}


func_818(var_23_bool)
{
	var_23_bool = 1; // 0x332 MovB
	return 0; // 0x333 Return
}


func_1331(var_40_float)
{
	var_41_float = 0; var_42_float = 0; // 0x533 PushV
	GetGameTime(var_42_float); // 0x534 Func
	var_40_float = var_42_float; // 0x536 Mov
	return 2; // 0x537 Return
}


func_1460(var_163_bool)
{
	var_165_int = 0; var_166_string = ""; // 0x5b5 PushV
	var_166_string = "d7q04"; // 0x5b6 MovS
	func_1303(var_165_int, var_166_string); // 0x5b7 NEW_2
	var_167_int = 1000; // 0x5b9 PushI
	var_168_bool = var_165_int == var_167_int; // 0x5ba Eq
	if(var_168_bool == 0) goto Label_1470; // 0x5bb JumpB
	var_163_bool = 1; // 0x5bc MovB
	return 0; // 0x5bd Return
	
Label_1470:
	var_163_bool = 0; // 0x5be MovB
	return 0; // 0x5bf Return
}


func_820(var_0_object, var_1_object, var_2_object, var_3_string, var_22_bool, var_26_float, var_27_float)
{
	var_28_bool = 0; // 0x335 PushV
	func_993(var_28_bool); // 0x336 NEW_2
	var_31_bool = var_28_bool == 0; // 0x338 Not
	if(var_31_bool == 0) goto Label_827; // 0x339 JumpB
	return 0; // 0x33a Return
	
Label_827:
	var_32_string = "player"; // 0x33b PushS
	FindActor(var_22_bool, var_32_string); // 0x33c Func
	var_2_object = 0; // 0x33e TMovB
	var_3_string = 0; // 0x33f TMovB
	var_0_object = var_26_float; // 0x340 TMov
	var_1_object = var_27_float; // 0x341 TMov
	var_33_int = 10; // 0x342 PushI
	var_34_float = 1.0; // 0x343 PushF
	SetTimer(var_33_int, var_34_float); // 0x344 Func
	func_899(); // 0x347 NEW_2
	var_86_bool = var_3_string == 0; // 0x349 Not
	if(var_86_bool == 0) goto Label_846; // 0x34a JumpB
	var_87_int = 10; // 0x34b PushI
	KillTimer(var_87_int); // 0x34c Func
	
Label_846:
	return 0; // 0x34e Return
}


func_1336(var_23_int)
{
	var_24_float = 0; var_25_float = 0; // 0x538 PushV
	GetGameTime(var_25_float); // 0x539 Func
	var_26_int = 1; // 0x53b PushI
	var_27_int = 0; // 0x53c PushV
	var_28_int = 24; // 0x53d PushI
	var_27_int = var_25_float / var_25_float; // 0x53e Div2
	var_23_int = var_26_int + var_27_int; // 0x53f Add2
	return 2; // 0x540 Return
}


func_1085(var_225_bool, var_226_object)
{
	var_230_int = 0; var_231_int = 0; var_232_int = 0; var_233_int = 0; // 0x43d PushV
	var_234_string = "voice_common"; // 0x43e PushS
	GetVariable(var_234_string, var_232_int); // 0x43f Func
	var_235_int = var_232_int; // 0x441 Push
	if(var_235_int == 0) goto Label_1123; // 0x442 JumpB
	var_236_bool = 0; var_237_object = Obj(); // 0x443 PushV
	var_237_object = var_226_object; // 0x444 Mov
	func_1143(var_237_object); // 0x445 NEW_2
	var_266_bool = var_236_bool == 0; // 0x447 Not
	if(var_266_bool == 0) goto Label_1105; // 0x448 JumpB
	var_267_bool = 0; var_268_object = Obj(); // 0x449 PushV
	var_268_object = var_226_object; // 0x44a Mov
	func_1180(var_268_object); // 0x44b NEW_2
	var_297_bool = var_267_bool == 0; // 0x44d Not
	if(var_297_bool == 0) goto Label_1105; // 0x44e JumpB
	var_225_bool = 0; // 0x44f MovB
	return 4; // 0x450 Return
	
Label_1105:
	var_298_int = 2; // 0x451 PushI
	irand(var_233_int, var_298_int); // 0x452 Func
	var_299_int = var_233_int; // 0x454 Push
	if(var_299_int == 0) goto Label_1118; // 0x455 JumpB
	var_300_string = "voice_common"; // 0x456 PushS
	var_301_int = 1; // 0x457 PushI
	var_302_int = var_232_int + var_301_int; // 0x458 Add
	var_303_int = 3; // 0x459 PushI
	var_304_int = var_302_int / var_303_int; // 0x45a Mod
	SetVariable(var_300_string, var_304_int); // 0x45b Func
	goto Label_1122; // 0x45d Jump
	
Label_1122:
	goto Label_1141; // 0x462 Jump
	
Label_1141:
	var_225_bool = 1; // 0x475 MovB
	return 4; // 0x476 Return
	
Label_1118:
	var_305_string = "voice_common"; // 0x45e PushS
	var_306_int = 0; // 0x45f PushI
	SetVariable(var_305_string, var_306_int); // 0x460 Func
	
Label_1123:
	var_307_bool = 0; var_308_object = Obj(); // 0x463 PushV
	var_308_object = var_226_object; // 0x464 Mov
	func_1180(var_308_object); // 0x465 NEW_2
	var_309_bool = var_307_bool == 0; // 0x467 Not
	if(var_309_bool == 0) goto Label_1137; // 0x468 JumpB
	var_310_bool = 0; var_311_object = Obj(); // 0x469 PushV
	var_311_object = var_226_object; // 0x46a Mov
	func_1143(var_311_object); // 0x46b NEW_2
	var_312_bool = var_310_bool == 0; // 0x46d Not
	if(var_312_bool == 0) goto Label_1137; // 0x46e JumpB
	var_225_bool = 0; // 0x46f MovB
	return 4; // 0x470 Return
	
Label_1137:
	var_313_string = "voice_common"; // 0x471 PushS
	var_314_int = 1; // 0x472 PushI
	SetVariable(var_313_string, var_314_int); // 0x473 Func
}


func_1472(var_169_bool)
{
	var_171_int = 0; var_172_string = ""; // 0x5c1 PushV
	var_172_string = "ood7Nudegirl2"; // 0x5c2 MovS
	func_1303(var_171_int, var_172_string); // 0x5c3 NEW_2
	var_173_int = 0; // 0x5c5 PushI
	var_174_bool = var_171_int == var_173_int; // 0x5c6 Eq
	if(var_174_bool == 0) goto Label_1482; // 0x5c7 JumpB
	var_169_bool = 1; // 0x5c8 MovB
	return 0; // 0x5c9 Return
	
Label_1482:
	var_169_bool = 0; // 0x5ca MovB
	return 0; // 0x5cb Return
}


func_1601(var_92_int)
{
	var_93_int = 0; var_94_int = 0; // 0x641 PushV
	var_95_string = "branch"; // 0x642 PushS
	GetVariable(var_95_string, var_94_int); // 0x643 Func
	var_96_int = 0; // 0x645 PushI
	var_97_bool = var_94_int == var_96_int; // 0x646 Eq
	if(var_97_bool == 0) goto Label_1611; // 0x647 JumpB
	var_92_int = 1; // 0x648 MovI
	return 2; // 0x649 Return
	
Label_1611:
	var_98_int = 1; // 0x64b PushI
	var_99_bool = var_94_int == var_98_int; // 0x64c Eq
	if(var_99_bool == 0) goto Label_1616; // 0x64d JumpB
	var_92_int = 2; // 0x64e MovI
	return 2; // 0x64f Return
	
Label_1616:
	var_92_int = 3; // 0x650 MovI
	return 2; // 0x651 Return
}


func_1345(var_21_bool, var_22_int)
{
	var_23_int = 0; // 0x542 PushV
	func_1336(var_23_int); // 0x543 NEW_2
	var_21_bool = var_23_int == var_22_int; // 0x545 Eq2
	return 0; // 0x546 Return
}


func_1223(var_146_string)
{
	var_147_bool = 0; var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_float = 0; var_152_float = 0; // 0x4c7 PushV
	lshHasAnimation(var_150_bool, var_146_string); // 0x4c8 Func
	var_153_bool = var_150_bool; // 0x4ca Push
	if(var_153_bool == 0) goto Label_1234; // 0x4cb JumpB
	lshGetAnimTimes(var_146_string, var_151_float, var_152_float); // 0x4cc Func
	var_154_bool = 0; // 0x4ce PushB
	lshPlayAnimation(var_151_float, var_152_float, var_154_bool); // 0x4cf Func
	goto Label_1238; // 0x4d1 Jump
	
Label_1238:
	return 6; // 0x4d6 Return
	
Label_1234:
	var_155_string = "Can't find lsh animation : "; // 0x4d2 PushS
	var_156_int = var_155_string + var_146_string; // 0x4d3 Add
	Trace(var_156_int); // 0x4d4 Func
}


func_1351(var_57_string, var_58_int)
{
	var_59_string = ""; var_60_string = ""; // 0x547 PushV
	var_60_string = "idle"; // 0x548 MovS
	var_61_int = var_58_int; // 0x549 Push
	if(var_61_int == 0) goto Label_1356; // 0x54a JumpB
	var_60_string = var_60_string + var_58_int; // 0x54b Add2
	
Label_1356:
	var_57_string = var_60_string; // 0x54c Mov
	return 2; // 0x54d Return
}


func_201(var_2_object, var_120_string)
{
	var_121_bool = 0; // 0xca PushV
	func_1383(var_121_bool); // 0xcb NEW_2
	var_122_bool = var_121_bool == 0; // 0xcd Not
	if(var_122_bool == 0) goto Label_208; // 0xce JumpB
	return 0; // 0xcf Return
	
Label_208:
	var_123_bool = var_120_string == var_2_object; // 0xd0 Eq
	if(var_123_bool == 0) goto Label_211; // 0xd1 JumpB
	return 0; // 0xd2 Return
	
Label_211:
	var_124_string = ""; var_125_bool = 0; // 0xd3 PushV
	var_124_string = var_120_string; // 0xd4 Mov
	var_126_string = ""; // 0xd5 PushS
	var_127_bool = var_120_string == var_126_string; // 0xd6 Eq
	if(var_127_bool == 0) goto Label_218; // 0xd7 JumpB
	var_125_bool = 0; // 0xd8 MovB
	goto Label_219; // 0xd9 Jump
	
Label_219:
	func_1239(var_124_string, var_125_bool); // 0xdb NEW_2
	var_2_object = var_120_string; // 0xdd TMov
	return 0; // 0xde Return
	
Label_218:
	var_125_bool = 1; // 0xda MovB
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_101_object, var_102_object)
{
	var_0_object = var_102_object; // 0x4b TMov
	var_1_object = var_101_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_107_int = 1; // 0x4e PushI
	if(var_107_int == 0) goto Label_171; // 0x4f JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x50 PushV
	var_109_object = var_1_object; // 0x51 MovT
	func_1448(var_109_object); // 0x52 NEW_2
	if(var_108_bool == 0) goto Label_110; // 0x54 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0x55 PushV
	var_116_object = var_1_object; // 0x56 MovT
	var_117_object = var_0_object; // 0x57 MovT
	func_1385(); // 0x58 NEW_2
	var_120_string = ""; // 0x5a PushV
	var_120_string = "Neutral"; // 0x5b MovS
	func_201(var_102_object, var_120_string); // 0x5c NEW_2
	var_137_int = 533196; // 0x5e PushI
	SetMessage(var_137_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_138_int = 535791; // 0x63 PushI
	var_139_int = 37488; // 0x64 PushI
	var_140_int = 37477; // 0x65 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0x66 TObjFunc
	var_141_int = 535798; // 0x68 PushI
	var_142_int = 37488; // 0x69 PushI
	var_143_int = 37485; // 0x6a PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x6b TObjFunc
	goto Label_171; // 0x6d Jump
	
Label_171:
	var_144_bool = 0; // 0xab PushV
	func_1383(var_144_bool); // 0xac NEW_2
	if(var_144_bool == 0) goto Label_186; // 0xae JumpB
	
Label_175:
	lshWaitForAnimEnd(); // 0xaf Func
	var_145_string = var_3_string; // 0xb1 PushT
	if(var_145_string == 0) goto Label_180; // 0xb2 JumpB
	goto Label_185; // 0xb3 Jump
	
Label_185:
	goto Label_200; // 0xb9 Jump
	
Label_200:
	return 0; // 0xc8 Return
	
Label_180:
	var_146_string = ""; // 0xb4 PushV
	var_146_string = var_2_object; // 0xb5 MovT
	func_1223(var_146_string); // 0xb6 NEW_2
	goto Label_175; // 0xb8 Jump
	
Label_186:
	var_157_string = "all"; // 0xba PushS
	var_158_string = "idle"; // 0xbb PushS
	PlayAnimation(var_157_string, var_158_string); // 0xbc Func
	
Label_190:
	WaitForAnimEnd(); // 0xbe Func
	var_159_string = var_3_string; // 0xc0 PushT
	if(var_159_string == 0) goto Label_195; // 0xc1 JumpB
	goto Label_200; // 0xc2 Jump
	
Label_195:
	var_160_string = "all"; // 0xc3 PushS
	var_161_string = "idle"; // 0xc4 PushS
	PlayAnimation(var_160_string, var_161_string); // 0xc5 Func
	goto Label_190; // 0xc7 Jump
	
Label_110:
	var_162_bool = 0; // 0x6e PushV
	var_162_bool = 0; // 0x6f MovB
	var_163_bool = 0; var_164_object = Obj(); // 0x70 PushV
	var_164_object = var_1_object; // 0x71 MovT
	func_1460(var_164_object); // 0x72 NEW_2
	if(var_163_bool == 0) goto Label_123; // 0x74 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x75 PushV
	var_170_object = var_1_object; // 0x76 MovT
	func_1472(var_170_object); // 0x77 NEW_2
	if(var_169_bool == 0) goto Label_123; // 0x79 JumpB
	var_162_bool = 1; // 0x7a MovB
	
Label_123:
	if(var_162_bool == 0) goto Label_149; // 0x7b JumpB
	var_175_object = Obj(); var_176_object = Obj(); // 0x7c PushV
	var_175_object = var_1_object; // 0x7d MovT
	var_176_object = var_0_object; // 0x7e MovT
	func_1426(); // 0x7f NEW_2
	var_179_string = ""; // 0x81 PushV
	var_179_string = "Neutral"; // 0x82 MovS
	func_201(var_102_object, var_179_string); // 0x83 NEW_2
	var_180_int = 533221; // 0x85 PushI
	SetMessage(var_180_int); // 0x86 TObjFunc
	ClearReplies(); // 0x88 TObjFunc
	var_181_int = 533222; // 0x8a PushI
	var_182_int = 37473; // 0x8b PushI
	var_183_int = 34742; // 0x8c PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x8d TObjFunc
	var_184_int = 535790; // 0x8f PushI
	var_185_int = -1; // 0x90 PushI
	var_186_int = 37476; // 0x91 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x92 TObjFunc
	goto Label_171; // 0x94 Jump
	
Label_149:
	var_187_string = ""; // 0x95 PushV
	var_187_string = "Neutral"; // 0x96 MovS
	func_201(var_102_object, var_187_string); // 0x97 NEW_2
	var_188_int = 533200; // 0x99 PushI
	SetMessage(var_188_int); // 0x9a TObjFunc
	ClearReplies(); // 0x9c TObjFunc
	var_189_int = 533201; // 0x9e PushI
	var_190_int = -1; // 0x9f PushI
	var_191_int = 34721; // 0xa0 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xa1 TObjFunc
	var_192_int = 535786; // 0xa3 PushI
	var_193_int = -1; // 0xa4 PushI
	var_194_int = 37472; // 0xa5 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xa6 TObjFunc
	goto Label_171; // 0xa8 Jump
}


func_1484()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x5cc PushV
	var_45_int = 637; // 0x5cd PushI
	var_46_int = 2; // 0x5ce PushI
	var_47_int = 533223; // 0x5cf PushI
	CreateDiaryEntry(var_44_object, var_45_int, var_46_int, var_47_int); // 0x5d0 Func
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0; // 0x5d2 PushV
	var_49_object = var_44_object; // 0x5d3 Mov
	var_50_int = -1; // 0x5d4 MovI
	func_1523(var_48_bool, var_49_object, var_50_int); // 0x5d5 NEW_2
	return 2; // 0x5d7 Return
}


func_1358(var_51_int)
{
	var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0; // 0x54e PushV
	var_54_int = 0; // 0x54f MovI
	
Label_1360:
	var_56_string = "all"; // 0x550 PushS
	var_57_string = ""; var_58_int = 0; // 0x551 PushV
	var_58_int = var_54_int; // 0x552 Mov
	func_1351(var_57_string, var_58_int); // 0x553 NEW_2
	HasAnimation(var_55_bool, var_56_string, var_57_string); // 0x555 Func
	var_62_bool = var_55_bool == 0; // 0x557 Not
	if(var_62_bool == 0) goto Label_1370; // 0x558 JumpB
	goto Label_1373; // 0x559 Jump
	
Label_1373:
	var_51_int = var_54_int; // 0x55d Mov
	return 4; // 0x55e Return
	
Label_1370:
	var_63_int = 1; // 0x55a PushI
	var_54_int = var_54_int + var_63_int; // 0x55b Add2
	goto Label_1360; // 0x55c Jump
}


func_847(var_0_object, var_1_object, var_4_bool, var_20_bool)
{
	var_21_float = 0; var_22_float = 0; // 0x34f PushV
	var_23_bool = var_4_bool == 0; // 0x350 NullEq
	if(var_23_bool == 0) goto Label_852; // 0x351 JumpB
	var_20_bool = 0; // 0x352 MovB
	return 2; // 0x353 Return
	
Label_852:
	var_24_float = 0; var_25_object = Obj(); // 0x354 PushV
	var_25_object = var_4_bool; // 0x355 MovT
	func_985(var_25_object); // 0x356 NEW_2
	var_22_float = sqrt(var_24_float); // 0x358 Sqrt2
	var_32_object = var_2_object; // 0x359 PushT
	if(var_32_object == 0) goto Label_860; // 0x35a JumpB
	var_22_float = var_22_float - var_1_object; // 0x35b Sub2
	
Label_860:
	var_20_bool = var_22_float < var_0_object; // 0x35c LT2
	return 2; // 0x35d Return
}


func_978(var_76_bool)
{
	var_76_bool = 1; // 0x3d2 MovB
	return 0; // 0x3d3 Return
}


func_980()
{
	StopAnimation(); // 0x3d4 Func
	StopGroup0(); // 0x3d6 Func
	return 0; // 0x3d8 Return
}


func_1239(var_124_string, var_125_bool)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0; // 0x4d7 PushV
	lshHasAnimation(var_131_bool, var_124_string); // 0x4d8 Func
	var_134_bool = var_131_bool; // 0x4da Push
	if(var_134_bool == 0) goto Label_1249; // 0x4db JumpB
	lshGetAnimTimes(var_124_string, var_132_float, var_133_float); // 0x4dc Func
	lshPlayAnimation(var_132_float, var_133_float, var_125_bool); // 0x4de Func
	goto Label_1253; // 0x4e0 Jump
	
Label_1253:
	return 6; // 0x4e5 Return
	
Label_1249:
	var_135_string = "Can't find lsh animation : "; // 0x4e1 PushS
	var_136_int = var_135_string + var_124_string; // 0x4e2 Add
	Trace(var_136_int); // 0x4e3 Func
}


func_600(var_0_object, var_1_object, var_2_object, var_3_string, var_315_object, var_316_object)
{
	var_0_object = var_316_object; // 0x259 TMov
	var_1_object = var_315_object; // 0x25a TMov
	var_3_string = 0; // 0x25b TMovB
	var_321_int = 1; // 0x25c PushI
	if(var_321_int == 0) goto Label_628; // 0x25d JumpB
	var_322_string = ""; // 0x25e PushV
	var_322_string = "Neutral"; // 0x25f MovS
	func_658(var_316_object, var_322_string); // 0x260 NEW_2
	var_330_int = 540548; // 0x262 PushI
	SetMessage(var_330_int); // 0x263 TObjFunc
	ClearReplies(); // 0x265 TObjFunc
	var_331_int = 540549; // 0x267 PushI
	var_332_int = -1; // 0x268 PushI
	var_333_int = 42558; // 0x269 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x26a TObjFunc
	var_334_int = 540797; // 0x26c PushI
	var_335_int = -1; // 0x26d PushI
	var_336_int = 42846; // 0x26e PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x26f TObjFunc
	goto Label_628; // 0x271 Jump
	
Label_628:
	var_337_bool = 0; // 0x274 PushV
	func_1383(var_337_bool); // 0x275 NEW_2
	if(var_337_bool == 0) goto Label_643; // 0x277 JumpB
	
Label_632:
	lshWaitForAnimEnd(); // 0x278 Func
	var_338_string = var_3_string; // 0x27a PushT
	if(var_338_string == 0) goto Label_637; // 0x27b JumpB
	goto Label_642; // 0x27c Jump
	
Label_642:
	goto Label_657; // 0x282 Jump
	
Label_657:
	return 0; // 0x291 Return
	
Label_637:
	var_339_string = ""; // 0x27d PushV
	var_339_string = var_2_object; // 0x27e MovT
	func_1223(var_339_string); // 0x27f NEW_2
	goto Label_632; // 0x281 Jump
	
Label_643:
	var_340_string = "all"; // 0x283 PushS
	var_341_string = "idle"; // 0x284 PushS
	PlayAnimation(var_340_string, var_341_string); // 0x285 Func
	
Label_647:
	WaitForAnimEnd(); // 0x287 Func
	var_342_string = var_3_string; // 0x289 PushT
	if(var_342_string == 0) goto Label_652; // 0x28a JumpB
	goto Label_657; // 0x28b Jump
	
Label_652:
	var_343_string = "all"; // 0x28c PushS
	var_344_string = "idle"; // 0x28d PushS
	PlayAnimation(var_343_string, var_344_string); // 0x28e Func
	goto Label_647; // 0x290 Jump
}


func_985(var_24_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); // 0x3d9 PushV
	GetPosition(var_29_cvector); // 0x3da Func
	GetPosition(var_30_cvector); // 0x3dc ObjFunc
	var_31_cvector = var_30_cvector - var_29_cvector; // 0x3de Sub2
	var_24_float = var_31_cvector | var_31_cvector; // 0x3df Or2
	return 6; // 0x3e0 Return
}


func_1497()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x5d9 PushV
	var_68_int = 638; // 0x5da PushI
	var_69_int = 2; // 0x5db PushI
	var_70_int = 533224; // 0x5dc PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x5dd Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x5df PushV
	var_72_object = var_67_object; // 0x5e0 Mov
	var_73_int = 637; // 0x5e1 MovI
	func_1523(var_71_bool, var_72_object, var_73_int); // 0x5e2 NEW_2
	return 2; // 0x5e4 Return
}


func_1375(var_89_int)
{
	var_89_int = 533305; // 0x55f MovI
	return 0; // 0x560 Return
}


func_1377(var_88_int)
{
	var_88_int = 533304; // 0x561 MovI
	return 0; // 0x562 Return
}


func_993(var_28_bool)
{
	var_29_bool = 0; var_30_bool = 0; // 0x3e1 PushV
	IsLoaded(var_30_bool); // 0x3e2 Func
	var_28_bool = var_30_bool; // 0x3e4 Mov
	return 2; // 0x3e5 Return
}


func_1379(var_90_string)
{
	var_90_string = "ui/NPC_Citizen1.png"; // 0x563 MovS
	return 0; // 0x564 Return
}


func_1381(var_91_string)
{
	var_91_string = "ui/NPC_Citizen1_b.png"; // 0x565 MovS
	return 0; // 0x566 Return
}


func_998(var_40_bool, var_42_float)
{
	var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_bool = 0; var_60_bool = 0; // 0x3e6 PushV
	GetPosition(var_53_cvector); // 0x3e7 ObjFunc
	GetEyesHeight(var_52_float); // 0x3e9 ObjFunc
	var_61_float = GetByIndex(var_53_cvector, 1); // 0x3eb PushE
	var_61_float = var_61_float + var_52_float; // 0x3ec Add2
	SetByIndex(var_53_cvector, 1) = var_61_float; // 0x3ed PopE
	GetPosition(var_54_cvector); // 0x3ee Func
	GetEyesHeight(var_52_float); // 0x3f0 Func
	var_62_float = GetByIndex(var_54_cvector, 1); // 0x3f2 PushE
	var_62_float = var_62_float + var_52_float; // 0x3f3 Add2
	SetByIndex(var_54_cvector, 1) = var_62_float; // 0x3f4 PopE
	var_55_cvector = var_53_cvector - var_54_cvector; // 0x3f5 Sub2
	var_63_float = GetByIndex(var_55_cvector, 1); // 0x3f6 PushE
	var_63_float = 0; // 0x3f7 MovI
	SetByIndex(var_55_cvector, 1) = var_63_float; // 0x3f8 PopE
	var_64_int = var_55_cvector | var_55_cvector; // 0x3f9 Or
	var_65_float = sqrt(var_64_int); // 0x3fa Sqrt
	var_55_cvector = var_55_cvector / var_55_cvector; // 0x3fb Div2
	var_56_cvector = -var_55_cvector; // 0x3fc Neg2
	var_66_float = var_55_cvector * var_42_float; // 0x3fd Mult
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x3fe PushV
	var_69_cvector = CVector(0.0, 1.0, 0.0); // 0x3ff PushVec
	var_68_cvector = var_56_cvector ^ var_69_cvector; // 0x400 Xor2
	func_1293(var_67_cvector, var_68_cvector); // 0x401 NEW_2
	var_75_int = 25; // 0x403 PushI
	var_76_float = var_67_cvector * var_75_int; // 0x404 Mult
	var_77_int = var_66_float + var_76_float; // 0x405 Add
	var_78_cvector = CVector(0.0, 10.0, 0.0); // 0x406 PushVec
	var_57_cvector = var_77_int - var_78_cvector; // 0x407 Sub2
	var_58_cvector = var_54_cvector + var_57_cvector; // 0x408 Add2
	IsOverrideActive(var_59_bool); // 0x409 Func
	var_79_bool = var_59_bool; // 0x40b Push
	if(var_79_bool == 0) goto Label_1039; // 0x40c JumpB
	var_40_bool = 0; // 0x40d MovB
	return 18; // 0x40e Return
	
Label_1039:
	StopWorld(); // 0x40f Func
	var_80_bool = 1; // 0x411 PushB
	CameraTransit(var_58_cvector, var_56_cvector, var_80_bool); // 0x412 Func
	var_81_float = GetByIndex(var_57_cvector, 0); // 0x414 PushE
	var_82_float = GetByIndex(var_57_cvector, 2); // 0x415 PushE
	Rotate(var_81_float, var_82_float); // 0x416 Func
	var_83_bool = 0; // 0x418 PushV
	func_1383(var_83_bool); // 0x419 NEW_2
	if(var_83_bool == 0) goto Label_1053; // 0x41b JumpB
	goto Label_1061; // 0x41c Jump
	
Label_1061:
	CameraWaitForPlayFinish(); // 0x425 Func
	ResumeWorld(); // 0x427 Func
	var_40_bool = 1; // 0x429 MovB
	return 18; // 0x42a Return
	
Label_1053:
	var_84_string = "head"; // 0x41d PushS
	HasAnimationTrack(var_60_bool, var_84_string); // 0x41e Func
	var_85_bool = var_60_bool; // 0x420 Push
	if(var_85_bool == 0) goto Label_1061; // 0x421 JumpB
	var_86_string = "head"; // 0x422 PushS
	LookAsyncCamera(var_86_string); // 0x423 Func
}


func_1383(var_83_bool)
{
	var_83_bool = 0; // 0x567 MovB
	return 0; // 0x568 Return
}


func_1254(var_34_object)
{
	var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); // 0x4e6 PushV
	GetEyesHeight(var_37_float); // 0x4e7 ObjFunc
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x4e9 MovV
	var_39_float = GetByIndex(var_38_cvector, 1); // 0x4ea PushE
	var_39_float = var_37_float; // 0x4eb Mov
	SetByIndex(var_38_cvector, 1) = var_39_float; // 0x4ec PopE
	var_40_string = "head"; // 0x4ed PushS
	LookAsync(var_34_object, var_40_string, var_38_cvector); // 0x4ee Func
	return 4; // 0x4f0 Return
}


func_1385()
{
	var_118_string = "ood7Nudegirl1"; // 0x56a PushS
	var_119_int = 1; // 0x56b PushI
	SetVariable(var_118_string, var_119_int); // 0x56c Func
	return 0; // 0x56e Return
}


func_1510(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x5e6 PushV
	GetDiaryRoot(var_59_object); // 0x5e7 Func
	var_60_bool = var_59_object == 0; // 0x5e9 Not
	if(var_60_bool == 0) goto Label_1520; // 0x5ea JumpB
	var_61_string = "Can't retrieve diary root"; // 0x5eb PushS
	Trace(var_61_string); // 0x5ec Func
	var_57_object = 0; // 0x5ee MovB
	return 2; // 0x5ef Return
	
Label_1520:
	var_57_object = var_59_object; // 0x5f0 Mov
	return 2; // 0x5f1 Return
}


func_1391()
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x56f PushV
	var_27_string = "d7q04"; // 0x570 PushS
	var_28_int = 1; // 0x571 PushI
	SetVariable(var_27_string, var_28_int); // 0x572 Func
	var_29_object = Obj(); // 0x574 PushV
	func_1551(var_29_object); // 0x575 NEW_2
	var_26_object = var_29_object; // 0x576 Mov
	var_36_string = "d7q04NudeGotoAndrei"; // 0x578 PushS
	var_37_string = "pt_map_andrei"; // 0x579 PushS
	var_38_int = 0; // 0x57a PushI
	var_39_int = 515352; // 0x57b PushI
	var_40_float = 0; // 0x57c PushV
	func_1331(var_40_float); // 0x57d NEW_2
	AddMark(var_36_string, var_37_string, var_38_int, var_39_int, var_40_float); // 0x57f ObjFunc
	func_1484(); // 0x582 NEW_2
	func_1497(); // 0x585 NEW_2
	var_74_object = Obj(); var_75_string = ""; // 0x587 PushV
	var_75_string = "quest_d7_04"; // 0x588 MovS
	func_1308(var_74_object, var_75_string); // 0x589 NEW_2
	var_82_bool = 0; var_83_string = ""; var_84_string = ""; // 0x58b PushV
	var_83_string = "quest_d7_04"; // 0x58c MovS
	var_84_string = "init_kabak"; // 0x58d MovS
	func_1319(var_82_bool, var_83_string, var_84_string); // 0x58e NEW_2
	return 2; // 0x590 Return
}


func_751(var_6_object, var_17_float, var_18_float)
{
	var_19_float = 0; var_20_bool = 0; var_21_float = 0; var_22_bool = 0; // 0x2ef PushV
	var_6_object = 0; // 0x2f0 TMovB
	
Label_753:
	var_23_int = 3; // 0x2f1 PushI
	rand(var_21_float, var_23_int); // 0x2f2 Func
	var_24_int = 3; // 0x2f4 PushI
	var_25_int = var_21_float + var_24_int; // 0x2f5 Add
	Sleep(var_25_int, var_22_bool); // 0x2f6 Func
	var_6_object = 1; // 0x2f8 TMovB
	var_26_float = 0; var_27_float = 0; // 0x2f9 PushV
	var_26_float = var_17_float; // 0x2fa Mov
	var_27_float = var_18_float; // 0x2fb Mov
	func_820(var_18_float, var_19_float, var_20_bool, var_21_float, var_22_bool, var_26_float, var_27_float); // 0x2fc NEW_2
	var_6_object = 0; // 0x2fe TMovB
	goto Label_753; // 0x2ff Jump
}


func_1265(var_259_bool, var_260_string)
{
	var_261_bool = 0; var_262_bool = 0; // 0x4f1 PushV
	var_263_bool = 0; // 0x4f2 PushV
	func_1383(var_263_bool); // 0x4f3 NEW_2
	if(var_263_bool == 0) goto Label_1278; // 0x4f5 JumpB
	lshHasSpeech(var_262_bool, var_260_string); // 0x4f6 Func
	var_264_bool = var_262_bool; // 0x4f8 Push
	if(var_264_bool == 0) goto Label_1278; // 0x4f9 JumpB
	lshPlaySpeech(var_260_string); // 0x4fa Func
	var_259_bool = 1; // 0x4fc MovB
	return 2; // 0x4fd Return
	
Label_1278:
	var_259_bool = 0; // 0x4fe MovB
	return 2; // 0x4ff Return
}


func_1523(var_48_bool, var_49_object, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; // 0x5f3 PushV
	var_57_object = Obj(); // 0x5f4 PushV
	func_1510(var_57_object); // 0x5f5 NEW_2
	var_54_object = var_57_object; // 0x5f6 Mov
	Find(var_50_int, var_55_object); // 0x5f8 ObjFunc
	var_62_bool = var_55_object == 0; // 0x5fa Not
	if(var_62_bool == 0) goto Label_1538; // 0x5fb JumpB
	var_63_string = "Can't find diary parent with id: "; // 0x5fc PushS
	var_64_int = var_63_string + var_50_int; // 0x5fd Add
	Trace(var_64_int); // 0x5fe Func
	var_48_bool = 0; // 0x600 MovB
	return 6; // 0x601 Return
	
Label_1538:
	AddChild(var_49_object); // 0x602 ObjFunc
	var_65_int = 7; // 0x604 PushI
	SendWorldWndMessage(var_65_int); // 0x605 Func
	GetCategory(var_56_int); // 0x607 ObjFunc
	SetDiarySection(var_56_int); // 0x609 Func
	var_48_bool = 0; // 0x60b MovB
	return 6; // 0x60c Return
}


func_885(var_2_object, var_3_string)
{
	func_980(); // 0x376 NEW_2
	var_18_int = 10; // 0x378 PushI
	KillTimer(var_18_int); // 0x379 Func
	var_19_object = var_2_object; // 0x37b PushT
	if(var_19_object == 0) goto Label_897; // 0x37c JumpB
	var_20_string = "head"; // 0x37d PushS
	UnlookAsync(var_20_string); // 0x37e Func
	var_2_object = 0; // 0x380 TMovB
	
Label_897:
	var_3_string = 1; // 0x381 TMovB
	return 0; // 0x382 Return
}


func_1143(var_236_bool)
{
	var_238_string = ""; var_239_int = 0; var_240_bool = 0; var_241_int = 0; var_242_string = ""; var_243_string = ""; var_244_int = 0; var_245_bool = 0; var_246_int = 0; var_247_string = ""; // 0x477 PushV
	var_243_string = "c"; // 0x478 MovS
	var_244_int = 0; // 0x479 MovI
	
Label_1146:
	var_248_int = 1; // 0x47a PushI
	if(var_248_int == 0) goto Label_1159; // 0x47b JumpB
	var_249_int = 1; // 0x47c PushI
	var_250_int = var_244_int + var_249_int; // 0x47d Add
	var_251_int = var_243_string + var_250_int; // 0x47e Add
	HasProperty(var_251_int, var_245_bool); // 0x47f ObjFunc
	var_252_bool = var_245_bool == 0; // 0x481 Not
	if(var_252_bool == 0) goto Label_1156; // 0x482 JumpB
	goto Label_1159; // 0x483 Jump
	
Label_1159:
	var_253_bool = var_244_int == 0; // 0x487 Not
	if(var_253_bool == 0) goto Label_1163; // 0x488 JumpB
	var_236_bool = 0; // 0x489 MovB
	return 10; // 0x48a Return
	
Label_1163:
	var_246_int = 0; // 0x48b MovI
	var_254_int = 1; // 0x48c PushI
	var_255_bool = var_244_int > var_254_int; // 0x48d GT
	if(var_255_bool == 0) goto Label_1169; // 0x48e JumpB
	irand(var_246_int, var_244_int); // 0x48f Func
	
Label_1169:
	var_256_int = 1; // 0x491 PushI
	var_257_int = var_246_int + var_256_int; // 0x492 Add
	var_258_int = var_243_string + var_257_int; // 0x493 Add
	GetProperty(var_258_int, var_247_string); // 0x494 ObjFunc
	var_259_bool = 0; var_260_string = ""; // 0x496 PushV
	var_260_string = var_247_string; // 0x497 Mov
	func_1265(var_259_bool, var_260_string); // 0x498 NEW_2
	var_236_bool = var_259_bool; // 0x499 Mov
	return 10; // 0x49b Return
	
Label_1156:
	var_265_int = 1; // 0x484 PushI
	var_244_int = var_244_int + var_265_int; // 0x485 Add2
	goto Label_1146; // 0x486 Jump
}


