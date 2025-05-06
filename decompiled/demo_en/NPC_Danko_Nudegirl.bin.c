task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_int, var_13_int, var_14_bool, var_15_bool, var_16_object, var_17_bool, var_18_bool)
{
	var_19_int = 1; // 0xe0 PushI
	if(var_19_int == 0) goto Label_518; // 0xe1 JumpB
	func_1278(); // 0xe3 NEW_2
	var_21_int = 34719; // 0xe5 PushI
	var_22_bool = var_18_bool == var_21_int; // 0xe6 Eq
	if(var_22_bool == 0) goto Label_242; // 0xe7 JumpB
	var_23_object = Obj(); var_24_object = Obj(); // 0xe8 PushV
	var_23_object = var_1_object; // 0xe9 MovT
	var_24_object = var_0_object; // 0xea MovT
	func_1389(); // 0xeb NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0xed PushV
	var_88_object = var_1_object; // 0xee MovT
	var_89_object = var_0_object; // 0xef MovT
	func_1430(); // 0xf0 NEW_2
	
Label_242:
	var_114_int = 37504; // 0xf2 PushI
	var_115_bool = var_18_bool == var_114_int; // 0xf3 Eq
	if(var_115_bool == 0) goto Label_255; // 0xf4 JumpB
	var_116_object = Obj(); var_117_object = Obj(); // 0xf5 PushV
	var_116_object = var_1_object; // 0xf6 MovT
	var_117_object = var_0_object; // 0xf7 MovT
	func_1389(); // 0xf8 NEW_2
	var_118_object = Obj(); var_119_object = Obj(); // 0xfa PushV
	var_118_object = var_1_object; // 0xfb MovT
	var_119_object = var_0_object; // 0xfc MovT
	func_1430(); // 0xfd NEW_2
	
Label_255:
	var_120_int = 37503; // 0xff PushI
	var_121_bool = var_18_bool == var_120_int; // 0x100 Eq
	if(var_121_bool == 0) goto Label_268; // 0x101 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0x102 PushV
	var_122_object = var_1_object; // 0x103 MovT
	var_123_object = var_0_object; // 0x104 MovT
	func_1389(); // 0x105 NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0x107 PushV
	var_124_object = var_1_object; // 0x108 MovT
	var_125_object = var_0_object; // 0x109 MovT
	func_1430(); // 0x10a NEW_2
	
Label_268:
	var_126_int = 34716; // 0x10c PushI
	var_127_bool = var_17_bool == var_126_int; // 0x10d Eq
	if(var_127_bool == 0) goto Label_360; // 0x10e JumpB
	var_128_bool = 0; var_129_object = Obj(); // 0x10f PushV
	var_129_object = var_1_object; // 0x110 MovT
	func_1446(var_129_object); // 0x111 NEW_2
	if(var_128_bool == 0) goto Label_301; // 0x113 JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x114 PushV
	var_136_object = var_1_object; // 0x115 MovT
	var_137_object = var_0_object; // 0x116 MovT
	func_1383(); // 0x117 NEW_2
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
	func_1458(var_166_object); // 0x131 NEW_2
	if(var_165_bool == 0) goto Label_314; // 0x133 JumpB
	var_171_bool = 0; var_172_object = Obj(); // 0x134 PushV
	var_172_object = var_1_object; // 0x135 MovT
	func_1470(var_172_object); // 0x136 NEW_2
	if(var_171_bool == 0) goto Label_314; // 0x138 JumpB
	var_164_bool = 1; // 0x139 MovB
	
Label_314:
	if(var_164_bool == 0) goto Label_340; // 0x13a JumpB
	var_177_object = Obj(); var_178_object = Obj(); // 0x13b PushV
	var_177_object = var_1_object; // 0x13c MovT
	var_178_object = var_0_object; // 0x13d MovT
	func_1424(); // 0x13e NEW_2
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
	func_1381(var_258_bool); // 0x1fc NEW_2
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
	func_1278(); // 0x2ac NEW_2
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
	func_1381(var_47_bool); // 0x2c7 NEW_2
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
	func_1343(var_21_bool, var_22_int); // 0x2de NEW_2
	if(var_21_bool == 0) goto Label_744; // 0x2e0 JumpB
	var_29_int = 0; var_30_object = Obj(); // 0x2e1 PushV
	var_30_object = var_17_object; // 0x2e2 Mov
	TaskCall(0); // 0x2e3 TaskCall
	func_0(var_31_object, var_29_int, var_30_object); // 0x2e4 NEW_2
	TaskReturn(); // 0x2e5 TaskReturn
	return 0; // 0x2e7 Return
	
Label_744:
	var_202_int = 0; var_203_object = Obj(); // 0x2e8 PushV
	var_203_object = var_17_object; // 0x2e9 Mov
	TaskCall(2); // 0x2ea TaskCall
	func_519(var_204_object, var_202_int, var_203_object); // 0x2eb NEW_2
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
	func_1285(var_24_object); // 0x32d NEW_2
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
	func_1252(var_34_object); // 0x36a NEW_2
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


func_0(var_0_object, var_29_int, var_30_object)
{
	var_32_object = Obj(); var_33_bool = 0; var_34_int = 0; var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x0 PushV
	var_0_object = var_30_object; // 0x1 TMov
	var_40_bool = 0; var_41_object = Obj(); var_42_float = 0; // 0x2 PushV
	var_41_object = var_30_object; // 0x3 Mov
	var_42_float = 70.0; // 0x4 MovF
	func_998(var_41_object, var_42_float); // 0x5 NEW_2
	var_86_bool = var_40_bool == 0; // 0x7 Not
	if(var_86_bool == 0) goto Label_11; // 0x8 JumpB
	var_29_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_36_object); // 0xb Func
	var_87_int = 0; // 0xd PushV
	func_1375(var_87_int); // 0xe NEW_2
	SetNPCName(var_87_int); // 0x10 ObjFunc
	var_88_int = 0; // 0x12 PushV
	func_1373(var_88_int); // 0x13 NEW_2
	SetNPCDescription(var_88_int); // 0x15 ObjFunc
	var_89_string = ""; // 0x17 PushV
	func_1377(var_89_string); // 0x18 NEW_2
	SetPhoto(var_89_string); // 0x1a ObjFunc
	var_90_string = ""; // 0x1c PushV
	func_1379(var_90_string); // 0x1d NEW_2
	SetPhoto2(var_90_string); // 0x1f ObjFunc
	var_91_int = 0; // 0x21 PushV
	func_1599(var_91_int); // 0x22 NEW_2
	SetPlayerName(var_91_int); // 0x24 ObjFunc
	var_38_int = -1; // 0x26 MovI
	IsOverrideActive(var_37_bool); // 0x27 Func
	var_99_bool = var_37_bool; // 0x29 Push
	if(var_99_bool == 0) goto Label_45; // 0x2a JumpB
	var_29_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_36_object); // 0x2d Func
	var_100_object = Obj(); var_101_object = Obj(); // 0x2f PushV
	var_100_object = var_30_object; // 0x30 Mov
	var_101_object = var_36_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_102_object, var_103_object, var_104_string, var_105_bool, var_100_object, var_101_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_39_bool); // 0x36 ObjFunc
	
Label_56:
	var_194_bool = var_39_bool == 0; // 0x38 Not
	if(var_194_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_39_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_195_object = Obj(); // 0x3f PushV
	var_195_object = var_30_object; // 0x40 Mov
	func_1066(); // 0x41 NEW_2
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
	func_1285(var_26_object); // 0x310 NEW_2
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
	func_1356(var_51_int); // 0x38d NEW_2
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
	func_1349(var_73_string, var_74_int); // 0x3a9 NEW_2
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


func_1285(var_24_object)
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x505 PushV
	self(var_26_object); // 0x506 Func
	var_24_object = var_26_object; // 0x508 Mov
	return 2; // 0x509 Return
}


func_519(var_0_object, var_202_int, var_203_object)
{
	var_205_object = Obj(); var_206_bool = 0; var_207_int = 0; var_208_bool = 0; var_209_object = Obj(); var_210_bool = 0; var_211_int = 0; var_212_bool = 0; // 0x207 PushV
	var_0_object = var_203_object; // 0x208 TMov
	var_213_bool = 0; var_214_object = Obj(); var_215_float = 0; // 0x209 PushV
	var_214_object = var_203_object; // 0x20a Mov
	var_215_float = 70.0; // 0x20b MovF
	func_998(var_214_object, var_215_float); // 0x20c NEW_2
	var_216_bool = var_213_bool == 0; // 0x20e Not
	if(var_216_bool == 0) goto Label_530; // 0x20f JumpB
	var_202_int = -2; // 0x210 MovI
	return 8; // 0x211 Return
	
Label_530:
	CreateDialog(var_209_object); // 0x212 Func
	var_217_int = 0; // 0x214 PushV
	func_1375(var_217_int); // 0x215 NEW_2
	SetNPCName(var_217_int); // 0x217 ObjFunc
	var_218_int = 0; // 0x219 PushV
	func_1373(var_218_int); // 0x21a NEW_2
	SetNPCDescription(var_218_int); // 0x21c ObjFunc
	var_219_string = ""; // 0x21e PushV
	func_1377(var_219_string); // 0x21f NEW_2
	SetPhoto(var_219_string); // 0x221 ObjFunc
	var_220_string = ""; // 0x223 PushV
	func_1379(var_220_string); // 0x224 NEW_2
	SetPhoto2(var_220_string); // 0x226 ObjFunc
	var_221_int = 0; // 0x228 PushV
	func_1599(var_221_int); // 0x229 NEW_2
	SetPlayerName(var_221_int); // 0x22b ObjFunc
	var_211_int = -1; // 0x22d MovI
	IsOverrideActive(var_210_bool); // 0x22e Func
	var_222_bool = var_210_bool; // 0x230 Push
	if(var_222_bool == 0) goto Label_564; // 0x231 JumpB
	var_202_int = -2; // 0x232 MovI
	return 8; // 0x233 Return
	
Label_564:
	DoDialog(var_209_object); // 0x234 Func
	var_223_bool = 0; var_224_object = Obj(); // 0x236 PushV
	var_225_object = Obj(); // 0x237 PushV
	func_1285(var_225_object); // 0x238 NEW_2
	var_224_object = var_225_object; // 0x239 Mov
	func_1083(var_223_bool, var_224_object); // 0x23b NEW_2
	var_313_object = Obj(); var_314_object = Obj(); // 0x23d PushV
	var_313_object = var_203_object; // 0x23e Mov
	var_314_object = var_209_object; // 0x23f Mov
	TaskCall(3); // 0x240 TaskCall
	func_600(var_315_object, var_316_object, var_317_string, var_318_bool, var_313_object, var_314_object); // 0x241 NEW_2
	TaskReturn(); // 0x242 TaskReturn
	IsDialogEnd(var_212_bool); // 0x244 ObjFunc
	
Label_582:
	var_343_bool = var_212_bool == 0; // 0x246 Not
	if(var_343_bool == 0) goto Label_589; // 0x247 JumpB
	sync(); // 0x248 Func
	IsDialogEnd(var_212_bool); // 0x24a ObjFunc
	goto Label_582; // 0x24c Jump
	
Label_589:
	var_344_object = Obj(); // 0x24d PushV
	var_344_object = var_203_object; // 0x24e Mov
	func_1066(); // 0x24f NEW_2
	StopDialog(var_209_object); // 0x251 Func
	GetReturnValue(var_211_int); // 0x253 ObjFunc
	var_202_int = var_211_int; // 0x255 Mov
	return 8; // 0x256 Return
}


func_1291(var_67_cvector, var_68_cvector)
{
	var_70_float = 0; var_71_float = 0; // 0x50b PushV
	var_72_int = var_68_cvector | var_68_cvector; // 0x50c Or
	var_71_float = sqrt(var_72_int); // 0x50d Sqrt2
	var_73_float = 0.0; // 0x50e PushF
	var_74_bool = var_71_float < var_73_float; // 0x50f LT
	if(var_74_bool == 0) goto Label_1299; // 0x510 JumpB
	var_67_cvector = CVector(0.0, 0.0, 0.0); // 0x511 MovV
	return 2; // 0x512 Return
	
Label_1299:
	var_67_cvector = var_68_cvector / var_68_cvector; // 0x513 Div2
	return 2; // 0x514 Return
}


func_1549(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj(); // 0x60d PushV
	GetMainOutdoorScene(var_32_object); // 0x60e Func
	var_34_bool = var_32_object == 0; // 0x610 NullEq
	if(var_34_bool == 0) goto Label_1560; // 0x611 JumpB
	var_35_string = "Can't find main outdoor scene"; // 0x612 PushS
	Trace(var_35_string); // 0x613 Func
	var_33_object = 0; // 0x615 SetNull
	var_29_object = var_33_object; // 0x616 Mov
	return 4; // 0x617 Return
	
Label_1560:
	GetMap(var_33_object); // 0x618 ObjFunc
	var_29_object = var_33_object; // 0x61a Mov
	return 4; // 0x61b Return
}


func_1424()
{
	var_176_string = "ood7Nudegirl2"; // 0x591 PushS
	var_177_int = 1; // 0x592 PushI
	SetVariable(var_176_string, var_177_int); // 0x593 Func
	return 0; // 0x595 Return
}


func_658(var_2_object, var_320_string)
{
	var_321_bool = 0; // 0x293 PushV
	func_1381(var_321_bool); // 0x294 NEW_2
	var_322_bool = var_321_bool == 0; // 0x296 Not
	if(var_322_bool == 0) goto Label_665; // 0x297 JumpB
	return 0; // 0x298 Return
	
Label_665:
	var_323_bool = var_320_string == var_2_object; // 0x299 Eq
	if(var_323_bool == 0) goto Label_668; // 0x29a JumpB
	return 0; // 0x29b Return
	
Label_668:
	var_324_string = ""; var_325_bool = 0; // 0x29c PushV
	var_324_string = var_320_string; // 0x29d Mov
	var_326_string = ""; // 0x29e PushS
	var_327_bool = var_320_string == var_326_string; // 0x29f Eq
	if(var_327_bool == 0) goto Label_675; // 0x2a0 JumpB
	var_325_bool = 0; // 0x2a1 MovB
	goto Label_676; // 0x2a2 Jump
	
Label_676:
	func_1237(var_324_string, var_325_bool); // 0x2a4 NEW_2
	var_2_object = var_320_string; // 0x2a6 TMov
	return 0; // 0x2a7 Return
	
Label_675:
	var_325_bool = 1; // 0x2a3 MovB
}


func_1301(var_109_int, var_110_string)
{
	var_111_int = 0; var_112_int = 0; // 0x515 PushV
	GetVariable(var_110_string, var_112_int); // 0x516 Func
	var_109_int = var_112_int; // 0x518 Mov
	return 2; // 0x519 Return
}


func_1430()
{
	var_90_object = Obj(); var_91_string = ""; var_92_float = 0; // 0x597 PushV
	var_93_object = Obj(); // 0x598 PushV
	func_1549(var_93_object); // 0x599 NEW_2
	var_90_object = var_93_object; // 0x59a Mov
	var_91_string = "pt_map_andrei"; // 0x59c MovS
	var_92_float = 2; // 0x59d MovI
	func_1566(var_90_object, var_91_string, var_92_float); // 0x59e NEW_2
	var_113_object = Obj(); // 0x5a0 PushV
	func_1549(var_113_object); // 0x5a1 NEW_2
	ShowMap(var_113_object); // 0x5a3 ObjFunc
	return 0; // 0x5a5 Return
}


func_1306(var_74_object, var_75_string)
{
	var_76_object = Obj(); var_77_object = Obj(); var_78_object = Obj(); var_79_object = Obj(); // 0x51a PushV
	GetMainOutdoorScene(var_78_object); // 0x51b Func
	var_80_string = ".bin"; // 0x51d PushS
	var_81_int = var_75_string + var_80_string; // 0x51e Add
	AddBlankActor(var_79_object, var_78_object, var_75_string, var_81_int); // 0x51f Func
	var_74_object = var_79_object; // 0x521 Mov
	return 4; // 0x522 Return
}


func_1178(var_265_bool)
{
	var_267_string = ""; var_268_int = 0; var_269_bool = 0; var_270_int = 0; var_271_string = ""; var_272_string = ""; var_273_int = 0; var_274_bool = 0; var_275_int = 0; var_276_string = ""; // 0x49a PushV
	var_277_string = "d"; // 0x49b PushS
	var_278_int = 0; // 0x49c PushV
	func_1334(var_278_int); // 0x49d NEW_2
	var_279_int = var_277_string + var_278_int; // 0x49f Add
	var_280_string = "m"; // 0x4a0 PushS
	var_272_string = var_279_int + var_280_string; // 0x4a1 Add2
	var_273_int = 0; // 0x4a2 MovI
	
Label_1187:
	var_281_int = 1; // 0x4a3 PushI
	if(var_281_int == 0) goto Label_1200; // 0x4a4 JumpB
	var_282_int = 1; // 0x4a5 PushI
	var_283_int = var_273_int + var_282_int; // 0x4a6 Add
	var_284_int = var_272_string + var_283_int; // 0x4a7 Add
	HasProperty(var_284_int, var_274_bool); // 0x4a8 ObjFunc
	var_285_bool = var_274_bool == 0; // 0x4aa Not
	if(var_285_bool == 0) goto Label_1197; // 0x4ab JumpB
	goto Label_1200; // 0x4ac Jump
	
Label_1200:
	var_286_bool = var_273_int == 0; // 0x4b0 Not
	if(var_286_bool == 0) goto Label_1204; // 0x4b1 JumpB
	var_265_bool = 0; // 0x4b2 MovB
	return 10; // 0x4b3 Return
	
Label_1204:
	var_275_int = 0; // 0x4b4 MovI
	var_287_int = 1; // 0x4b5 PushI
	var_288_bool = var_273_int > var_287_int; // 0x4b6 GT
	if(var_288_bool == 0) goto Label_1210; // 0x4b7 JumpB
	irand(var_275_int, var_273_int); // 0x4b8 Func
	
Label_1210:
	var_289_int = 1; // 0x4ba PushI
	var_290_int = var_275_int + var_289_int; // 0x4bb Add
	var_291_int = var_272_string + var_290_int; // 0x4bc Add
	GetProperty(var_291_int, var_276_string); // 0x4bd ObjFunc
	var_292_bool = 0; var_293_string = ""; // 0x4bf PushV
	var_293_string = var_276_string; // 0x4c0 Mov
	func_1263(var_292_bool, var_293_string); // 0x4c1 NEW_2
	var_265_bool = var_292_bool; // 0x4c2 Mov
	return 10; // 0x4c4 Return
	
Label_1197:
	var_294_int = 1; // 0x4ad PushI
	var_273_int = var_273_int + var_294_int; // 0x4ae Add2
	goto Label_1187; // 0x4af Jump
}


func_1566(var_90_object, var_91_string, var_92_float)
{
	var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_object = Obj(); var_97_bool = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_object = Obj(); var_101_bool = 0; // 0x61e PushV
	GetMainOutdoorScene(var_100_object); // 0x61f Func
	var_102_bool = var_100_object == 0; // 0x621 NullEq
	if(var_102_bool == 0) goto Label_1575; // 0x622 JumpB
	var_103_string = "Can't find main outdoor scene"; // 0x623 PushS
	Trace(var_103_string); // 0x624 Func
	return 8; // 0x626 Return
	
Label_1575:
	GetLocator(var_91_string, var_101_bool, var_98_cvector, var_99_cvector); // 0x627 ObjFunc
	var_104_bool = var_101_bool == 0; // 0x629 Not
	if(var_104_bool == 0) goto Label_1585; // 0x62a JumpB
	var_105_string = "Warning: outdoor scene locator "; // 0x62b PushS
	var_106_int = var_105_string + var_91_string; // 0x62c Add
	var_107_string = " doesnt exist"; // 0x62d PushS
	var_108_int = var_106_int + var_107_string; // 0x62e Add
	Trace(var_108_int); // 0x62f Func
	
Label_1585:
	GetMap(var_90_object); // 0x631 ObjFunc
	var_109_bool = var_90_object == 0; // 0x633 NullEq
	if(var_109_bool == 0) goto Label_1593; // 0x634 JumpB
	var_110_string = "Can't find map"; // 0x635 PushS
	Trace(var_110_string); // 0x636 Func
	return 8; // 0x638 Return
	
Label_1593:
	var_111_float = GetByIndex(var_98_cvector, 0); // 0x639 PushE
	var_112_float = GetByIndex(var_98_cvector, 2); // 0x63a PushE
	SetMapParams(var_111_float, var_112_float, var_92_float); // 0x63b ObjFunc
	return 8; // 0x63d Return
}


func_1317(var_82_bool, var_83_string, var_84_string)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x525 PushV
	FindActor(var_86_object, var_83_string); // 0x526 Func
	var_87_bool = var_86_object == 0; // 0x528 NullEq
	if(var_87_bool == 0) goto Label_1324; // 0x529 JumpB
	var_82_bool = 0; // 0x52a MovB
	return 2; // 0x52b Return
	
Label_1324:
	Trigger(var_86_object, var_84_string); // 0x52c Func
	var_82_bool = 1; // 0x52e MovB
	return 2; // 0x52f Return
}


func_1446(var_107_bool)
{
	var_109_int = 0; var_110_string = ""; // 0x5a7 PushV
	var_110_string = "ood7Nudegirl1"; // 0x5a8 MovS
	func_1301(var_109_int, var_110_string); // 0x5a9 NEW_2
	var_113_int = 0; // 0x5ab PushI
	var_114_bool = var_109_int == var_113_int; // 0x5ac Eq
	if(var_114_bool == 0) goto Label_1456; // 0x5ad JumpB
	var_107_bool = 1; // 0x5ae MovB
	return 0; // 0x5af Return
	
Label_1456:
	var_107_bool = 0; // 0x5b0 MovB
	return 0; // 0x5b1 Return
}


func_1066()
{
	var_196_bool = 0; var_197_bool = 0; // 0x42a PushV
	CameraSwitchToNormal(); // 0x42b Func
	var_198_bool = 0; // 0x42d PushV
	func_1381(var_198_bool); // 0x42e NEW_2
	if(var_198_bool == 0) goto Label_1074; // 0x430 JumpB
	goto Label_1082; // 0x431 Jump
	
Label_1082:
	return 2; // 0x43a Return
	
Label_1074:
	var_199_string = "head"; // 0x432 PushS
	HasAnimationTrack(var_197_bool, var_199_string); // 0x433 Func
	var_200_bool = var_197_bool; // 0x435 Push
	if(var_200_bool == 0) goto Label_1082; // 0x436 JumpB
	var_201_string = "head"; // 0x437 PushS
	UnlookAsync(var_201_string); // 0x438 Func
}


func_1329(var_40_float)
{
	var_41_float = 0; var_42_float = 0; // 0x531 PushV
	GetGameTime(var_42_float); // 0x532 Func
	var_40_float = var_42_float; // 0x534 Mov
	return 2; // 0x535 Return
}


func_1458(var_162_bool)
{
	var_164_int = 0; var_165_string = ""; // 0x5b3 PushV
	var_165_string = "d7q04"; // 0x5b4 MovS
	func_1301(var_164_int, var_165_string); // 0x5b5 NEW_2
	var_166_int = 1000; // 0x5b7 PushI
	var_167_bool = var_164_int == var_166_int; // 0x5b8 Eq
	if(var_167_bool == 0) goto Label_1468; // 0x5b9 JumpB
	var_162_bool = 1; // 0x5ba MovB
	return 0; // 0x5bb Return
	
Label_1468:
	var_162_bool = 0; // 0x5bc MovB
	return 0; // 0x5bd Return
}


func_818(var_23_bool)
{
	var_23_bool = 1; // 0x332 MovB
	return 0; // 0x333 Return
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


func_1334(var_23_int)
{
	var_24_float = 0; var_25_float = 0; // 0x536 PushV
	GetGameTime(var_25_float); // 0x537 Func
	var_26_int = 1; // 0x539 PushI
	var_27_int = 0; // 0x53a PushV
	var_28_int = 24; // 0x53b PushI
	var_27_int = var_25_float / var_25_float; // 0x53c Div2
	var_23_int = var_26_int + var_27_int; // 0x53d Add2
	return 2; // 0x53e Return
}


func_1083(var_223_bool, var_224_object)
{
	var_228_int = 0; var_229_int = 0; var_230_int = 0; var_231_int = 0; // 0x43b PushV
	var_232_string = "voice_common"; // 0x43c PushS
	GetVariable(var_232_string, var_230_int); // 0x43d Func
	var_233_int = var_230_int; // 0x43f Push
	if(var_233_int == 0) goto Label_1121; // 0x440 JumpB
	var_234_bool = 0; var_235_object = Obj(); // 0x441 PushV
	var_235_object = var_224_object; // 0x442 Mov
	func_1141(var_235_object); // 0x443 NEW_2
	var_264_bool = var_234_bool == 0; // 0x445 Not
	if(var_264_bool == 0) goto Label_1103; // 0x446 JumpB
	var_265_bool = 0; var_266_object = Obj(); // 0x447 PushV
	var_266_object = var_224_object; // 0x448 Mov
	func_1178(var_266_object); // 0x449 NEW_2
	var_295_bool = var_265_bool == 0; // 0x44b Not
	if(var_295_bool == 0) goto Label_1103; // 0x44c JumpB
	var_223_bool = 0; // 0x44d MovB
	return 4; // 0x44e Return
	
Label_1103:
	var_296_int = 2; // 0x44f PushI
	irand(var_231_int, var_296_int); // 0x450 Func
	var_297_int = var_231_int; // 0x452 Push
	if(var_297_int == 0) goto Label_1116; // 0x453 JumpB
	var_298_string = "voice_common"; // 0x454 PushS
	var_299_int = 1; // 0x455 PushI
	var_300_int = var_230_int + var_299_int; // 0x456 Add
	var_301_int = 3; // 0x457 PushI
	var_302_int = var_300_int / var_301_int; // 0x458 Mod
	SetVariable(var_298_string, var_302_int); // 0x459 Func
	goto Label_1120; // 0x45b Jump
	
Label_1120:
	goto Label_1139; // 0x460 Jump
	
Label_1139:
	var_223_bool = 1; // 0x473 MovB
	return 4; // 0x474 Return
	
Label_1116:
	var_303_string = "voice_common"; // 0x45c PushS
	var_304_int = 0; // 0x45d PushI
	SetVariable(var_303_string, var_304_int); // 0x45e Func
	
Label_1121:
	var_305_bool = 0; var_306_object = Obj(); // 0x461 PushV
	var_306_object = var_224_object; // 0x462 Mov
	func_1178(var_306_object); // 0x463 NEW_2
	var_307_bool = var_305_bool == 0; // 0x465 Not
	if(var_307_bool == 0) goto Label_1135; // 0x466 JumpB
	var_308_bool = 0; var_309_object = Obj(); // 0x467 PushV
	var_309_object = var_224_object; // 0x468 Mov
	func_1141(var_309_object); // 0x469 NEW_2
	var_310_bool = var_308_bool == 0; // 0x46b Not
	if(var_310_bool == 0) goto Label_1135; // 0x46c JumpB
	var_223_bool = 0; // 0x46d MovB
	return 4; // 0x46e Return
	
Label_1135:
	var_311_string = "voice_common"; // 0x46f PushS
	var_312_int = 1; // 0x470 PushI
	SetVariable(var_311_string, var_312_int); // 0x471 Func
}


func_1470(var_168_bool)
{
	var_170_int = 0; var_171_string = ""; // 0x5bf PushV
	var_171_string = "ood7Nudegirl2"; // 0x5c0 MovS
	func_1301(var_170_int, var_171_string); // 0x5c1 NEW_2
	var_172_int = 0; // 0x5c3 PushI
	var_173_bool = var_170_int == var_172_int; // 0x5c4 Eq
	if(var_173_bool == 0) goto Label_1480; // 0x5c5 JumpB
	var_168_bool = 1; // 0x5c6 MovB
	return 0; // 0x5c7 Return
	
Label_1480:
	var_168_bool = 0; // 0x5c8 MovB
	return 0; // 0x5c9 Return
}


func_1599(var_91_int)
{
	var_92_int = 0; var_93_int = 0; // 0x63f PushV
	var_94_string = "branch"; // 0x640 PushS
	GetVariable(var_94_string, var_93_int); // 0x641 Func
	var_95_int = 0; // 0x643 PushI
	var_96_bool = var_93_int == var_95_int; // 0x644 Eq
	if(var_96_bool == 0) goto Label_1609; // 0x645 JumpB
	var_91_int = 1; // 0x646 MovI
	return 2; // 0x647 Return
	
Label_1609:
	var_97_int = 1; // 0x649 PushI
	var_98_bool = var_93_int == var_97_int; // 0x64a Eq
	if(var_98_bool == 0) goto Label_1614; // 0x64b JumpB
	var_91_int = 2; // 0x64c MovI
	return 2; // 0x64d Return
	
Label_1614:
	var_91_int = 3; // 0x64e MovI
	return 2; // 0x64f Return
}


func_1343(var_21_bool, var_22_int)
{
	var_23_int = 0; // 0x540 PushV
	func_1334(var_23_int); // 0x541 NEW_2
	var_21_bool = var_23_int == var_22_int; // 0x543 Eq2
	return 0; // 0x544 Return
}


func_1221(var_145_string)
{
	var_146_bool = 0; var_147_float = 0; var_148_float = 0; var_149_bool = 0; var_150_float = 0; var_151_float = 0; // 0x4c5 PushV
	lshHasAnimation(var_149_bool, var_145_string); // 0x4c6 Func
	var_152_bool = var_149_bool; // 0x4c8 Push
	if(var_152_bool == 0) goto Label_1232; // 0x4c9 JumpB
	lshGetAnimTimes(var_145_string, var_150_float, var_151_float); // 0x4ca Func
	var_153_bool = 0; // 0x4cc PushB
	lshPlayAnimation(var_150_float, var_151_float, var_153_bool); // 0x4cd Func
	goto Label_1236; // 0x4cf Jump
	
Label_1236:
	return 6; // 0x4d4 Return
	
Label_1232:
	var_154_string = "Can't find lsh animation : "; // 0x4d0 PushS
	var_155_int = var_154_string + var_145_string; // 0x4d1 Add
	Trace(var_155_int); // 0x4d2 Func
}


func_1349(var_57_string, var_58_int)
{
	var_59_string = ""; var_60_string = ""; // 0x545 PushV
	var_60_string = "idle"; // 0x546 MovS
	var_61_int = var_58_int; // 0x547 Push
	if(var_61_int == 0) goto Label_1354; // 0x548 JumpB
	var_60_string = var_60_string + var_58_int; // 0x549 Add2
	
Label_1354:
	var_57_string = var_60_string; // 0x54a Mov
	return 2; // 0x54b Return
}


func_201(var_2_object, var_119_string)
{
	var_120_bool = 0; // 0xca PushV
	func_1381(var_120_bool); // 0xcb NEW_2
	var_121_bool = var_120_bool == 0; // 0xcd Not
	if(var_121_bool == 0) goto Label_208; // 0xce JumpB
	return 0; // 0xcf Return
	
Label_208:
	var_122_bool = var_119_string == var_2_object; // 0xd0 Eq
	if(var_122_bool == 0) goto Label_211; // 0xd1 JumpB
	return 0; // 0xd2 Return
	
Label_211:
	var_123_string = ""; var_124_bool = 0; // 0xd3 PushV
	var_123_string = var_119_string; // 0xd4 Mov
	var_125_string = ""; // 0xd5 PushS
	var_126_bool = var_119_string == var_125_string; // 0xd6 Eq
	if(var_126_bool == 0) goto Label_218; // 0xd7 JumpB
	var_124_bool = 0; // 0xd8 MovB
	goto Label_219; // 0xd9 Jump
	
Label_219:
	func_1237(var_123_string, var_124_bool); // 0xdb NEW_2
	var_2_object = var_119_string; // 0xdd TMov
	return 0; // 0xde Return
	
Label_218:
	var_124_bool = 1; // 0xda MovB
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_100_object, var_101_object)
{
	var_0_object = var_101_object; // 0x4b TMov
	var_1_object = var_100_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_106_int = 1; // 0x4e PushI
	if(var_106_int == 0) goto Label_171; // 0x4f JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x50 PushV
	var_108_object = var_1_object; // 0x51 MovT
	func_1446(var_108_object); // 0x52 NEW_2
	if(var_107_bool == 0) goto Label_110; // 0x54 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x55 PushV
	var_115_object = var_1_object; // 0x56 MovT
	var_116_object = var_0_object; // 0x57 MovT
	func_1383(); // 0x58 NEW_2
	var_119_string = ""; // 0x5a PushV
	var_119_string = "Neutral"; // 0x5b MovS
	func_201(var_101_object, var_119_string); // 0x5c NEW_2
	var_136_int = 533196; // 0x5e PushI
	SetMessage(var_136_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_137_int = 535791; // 0x63 PushI
	var_138_int = 37488; // 0x64 PushI
	var_139_int = 37477; // 0x65 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0x66 TObjFunc
	var_140_int = 535798; // 0x68 PushI
	var_141_int = 37488; // 0x69 PushI
	var_142_int = 37485; // 0x6a PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0x6b TObjFunc
	goto Label_171; // 0x6d Jump
	
Label_171:
	var_143_bool = 0; // 0xab PushV
	func_1381(var_143_bool); // 0xac NEW_2
	if(var_143_bool == 0) goto Label_186; // 0xae JumpB
	
Label_175:
	lshWaitForAnimEnd(); // 0xaf Func
	var_144_string = var_3_string; // 0xb1 PushT
	if(var_144_string == 0) goto Label_180; // 0xb2 JumpB
	goto Label_185; // 0xb3 Jump
	
Label_185:
	goto Label_200; // 0xb9 Jump
	
Label_200:
	return 0; // 0xc8 Return
	
Label_180:
	var_145_string = ""; // 0xb4 PushV
	var_145_string = var_2_object; // 0xb5 MovT
	func_1221(var_145_string); // 0xb6 NEW_2
	goto Label_175; // 0xb8 Jump
	
Label_186:
	var_156_string = "all"; // 0xba PushS
	var_157_string = "idle"; // 0xbb PushS
	PlayAnimation(var_156_string, var_157_string); // 0xbc Func
	
Label_190:
	WaitForAnimEnd(); // 0xbe Func
	var_158_string = var_3_string; // 0xc0 PushT
	if(var_158_string == 0) goto Label_195; // 0xc1 JumpB
	goto Label_200; // 0xc2 Jump
	
Label_195:
	var_159_string = "all"; // 0xc3 PushS
	var_160_string = "idle"; // 0xc4 PushS
	PlayAnimation(var_159_string, var_160_string); // 0xc5 Func
	goto Label_190; // 0xc7 Jump
	
Label_110:
	var_161_bool = 0; // 0x6e PushV
	var_161_bool = 0; // 0x6f MovB
	var_162_bool = 0; var_163_object = Obj(); // 0x70 PushV
	var_163_object = var_1_object; // 0x71 MovT
	func_1458(var_163_object); // 0x72 NEW_2
	if(var_162_bool == 0) goto Label_123; // 0x74 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x75 PushV
	var_169_object = var_1_object; // 0x76 MovT
	func_1470(var_169_object); // 0x77 NEW_2
	if(var_168_bool == 0) goto Label_123; // 0x79 JumpB
	var_161_bool = 1; // 0x7a MovB
	
Label_123:
	if(var_161_bool == 0) goto Label_149; // 0x7b JumpB
	var_174_object = Obj(); var_175_object = Obj(); // 0x7c PushV
	var_174_object = var_1_object; // 0x7d MovT
	var_175_object = var_0_object; // 0x7e MovT
	func_1424(); // 0x7f NEW_2
	var_178_string = ""; // 0x81 PushV
	var_178_string = "Neutral"; // 0x82 MovS
	func_201(var_101_object, var_178_string); // 0x83 NEW_2
	var_179_int = 533221; // 0x85 PushI
	SetMessage(var_179_int); // 0x86 TObjFunc
	ClearReplies(); // 0x88 TObjFunc
	var_180_int = 533222; // 0x8a PushI
	var_181_int = 37473; // 0x8b PushI
	var_182_int = 34742; // 0x8c PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x8d TObjFunc
	var_183_int = 535790; // 0x8f PushI
	var_184_int = -1; // 0x90 PushI
	var_185_int = 37476; // 0x91 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x92 TObjFunc
	goto Label_171; // 0x94 Jump
	
Label_149:
	var_186_string = ""; // 0x95 PushV
	var_186_string = "Neutral"; // 0x96 MovS
	func_201(var_101_object, var_186_string); // 0x97 NEW_2
	var_187_int = 533200; // 0x99 PushI
	SetMessage(var_187_int); // 0x9a TObjFunc
	ClearReplies(); // 0x9c TObjFunc
	var_188_int = 533201; // 0x9e PushI
	var_189_int = -1; // 0x9f PushI
	var_190_int = 34721; // 0xa0 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0xa1 TObjFunc
	var_191_int = 535786; // 0xa3 PushI
	var_192_int = -1; // 0xa4 PushI
	var_193_int = 37472; // 0xa5 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0xa6 TObjFunc
	goto Label_171; // 0xa8 Jump
}


func_1482()
{
	var_43_object = Obj(); var_44_object = Obj(); // 0x5ca PushV
	var_45_int = 637; // 0x5cb PushI
	var_46_int = 2; // 0x5cc PushI
	var_47_int = 533223; // 0x5cd PushI
	CreateDiaryEntry(var_44_object, var_45_int, var_46_int, var_47_int); // 0x5ce Func
	var_48_bool = 0; var_49_object = Obj(); var_50_int = 0; // 0x5d0 PushV
	var_49_object = var_44_object; // 0x5d1 Mov
	var_50_int = -1; // 0x5d2 MovI
	func_1521(var_48_bool, var_49_object, var_50_int); // 0x5d3 NEW_2
	return 2; // 0x5d5 Return
}


func_1356(var_51_int)
{
	var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0; // 0x54c PushV
	var_54_int = 0; // 0x54d MovI
	
Label_1358:
	var_56_string = "all"; // 0x54e PushS
	var_57_string = ""; var_58_int = 0; // 0x54f PushV
	var_58_int = var_54_int; // 0x550 Mov
	func_1349(var_57_string, var_58_int); // 0x551 NEW_2
	HasAnimation(var_55_bool, var_56_string, var_57_string); // 0x553 Func
	var_62_bool = var_55_bool == 0; // 0x555 Not
	if(var_62_bool == 0) goto Label_1368; // 0x556 JumpB
	goto Label_1371; // 0x557 Jump
	
Label_1371:
	var_51_int = var_54_int; // 0x55b Mov
	return 4; // 0x55c Return
	
Label_1368:
	var_63_int = 1; // 0x558 PushI
	var_54_int = var_54_int + var_63_int; // 0x559 Add2
	goto Label_1358; // 0x55a Jump
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


func_1237(var_123_string, var_124_bool)
{
	var_127_bool = 0; var_128_float = 0; var_129_float = 0; var_130_bool = 0; var_131_float = 0; var_132_float = 0; // 0x4d5 PushV
	lshHasAnimation(var_130_bool, var_123_string); // 0x4d6 Func
	var_133_bool = var_130_bool; // 0x4d8 Push
	if(var_133_bool == 0) goto Label_1247; // 0x4d9 JumpB
	lshGetAnimTimes(var_123_string, var_131_float, var_132_float); // 0x4da Func
	lshPlayAnimation(var_131_float, var_132_float, var_124_bool); // 0x4dc Func
	goto Label_1251; // 0x4de Jump
	
Label_1251:
	return 6; // 0x4e3 Return
	
Label_1247:
	var_134_string = "Can't find lsh animation : "; // 0x4df PushS
	var_135_int = var_134_string + var_123_string; // 0x4e0 Add
	Trace(var_135_int); // 0x4e1 Func
}


func_1495()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x5d7 PushV
	var_68_int = 638; // 0x5d8 PushI
	var_69_int = 2; // 0x5d9 PushI
	var_70_int = 533224; // 0x5da PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x5db Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x5dd PushV
	var_72_object = var_67_object; // 0x5de Mov
	var_73_int = 637; // 0x5df MovI
	func_1521(var_71_bool, var_72_object, var_73_int); // 0x5e0 NEW_2
	return 2; // 0x5e2 Return
}


func_600(var_0_object, var_1_object, var_2_object, var_3_string, var_313_object, var_314_object)
{
	var_0_object = var_314_object; // 0x259 TMov
	var_1_object = var_313_object; // 0x25a TMov
	var_3_string = 0; // 0x25b TMovB
	var_319_int = 1; // 0x25c PushI
	if(var_319_int == 0) goto Label_628; // 0x25d JumpB
	var_320_string = ""; // 0x25e PushV
	var_320_string = "Neutral"; // 0x25f MovS
	func_658(var_314_object, var_320_string); // 0x260 NEW_2
	var_328_int = 540548; // 0x262 PushI
	SetMessage(var_328_int); // 0x263 TObjFunc
	ClearReplies(); // 0x265 TObjFunc
	var_329_int = 540549; // 0x267 PushI
	var_330_int = -1; // 0x268 PushI
	var_331_int = 42558; // 0x269 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x26a TObjFunc
	var_332_int = 540797; // 0x26c PushI
	var_333_int = -1; // 0x26d PushI
	var_334_int = 42846; // 0x26e PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x26f TObjFunc
	goto Label_628; // 0x271 Jump
	
Label_628:
	var_335_bool = 0; // 0x274 PushV
	func_1381(var_335_bool); // 0x275 NEW_2
	if(var_335_bool == 0) goto Label_643; // 0x277 JumpB
	
Label_632:
	lshWaitForAnimEnd(); // 0x278 Func
	var_336_string = var_3_string; // 0x27a PushT
	if(var_336_string == 0) goto Label_637; // 0x27b JumpB
	goto Label_642; // 0x27c Jump
	
Label_642:
	goto Label_657; // 0x282 Jump
	
Label_657:
	return 0; // 0x291 Return
	
Label_637:
	var_337_string = ""; // 0x27d PushV
	var_337_string = var_2_object; // 0x27e MovT
	func_1221(var_337_string); // 0x27f NEW_2
	goto Label_632; // 0x281 Jump
	
Label_643:
	var_338_string = "all"; // 0x283 PushS
	var_339_string = "idle"; // 0x284 PushS
	PlayAnimation(var_338_string, var_339_string); // 0x285 Func
	
Label_647:
	WaitForAnimEnd(); // 0x287 Func
	var_340_string = var_3_string; // 0x289 PushT
	if(var_340_string == 0) goto Label_652; // 0x28a JumpB
	goto Label_657; // 0x28b Jump
	
Label_652:
	var_341_string = "all"; // 0x28c PushS
	var_342_string = "idle"; // 0x28d PushS
	PlayAnimation(var_341_string, var_342_string); // 0x28e Func
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


func_1373(var_88_int)
{
	var_88_int = 533305; // 0x55d MovI
	return 0; // 0x55e Return
}


func_1375(var_87_int)
{
	var_87_int = 533304; // 0x55f MovI
	return 0; // 0x560 Return
}


func_1377(var_89_string)
{
	var_89_string = "ui/NPC_Citizen1.png"; // 0x561 MovS
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
	var_90_string = "ui/NPC_Citizen1_b.png"; // 0x563 MovS
	return 0; // 0x564 Return
}


func_1252(var_34_object)
{
	var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_cvector = CVector(0,0,0); // 0x4e4 PushV
	GetEyesHeight(var_37_float); // 0x4e5 ObjFunc
	var_38_cvector = CVector(0.0, 0.0, 0.0); // 0x4e7 MovV
	var_39_float = GetByIndex(var_38_cvector, 1); // 0x4e8 PushE
	var_39_float = var_37_float; // 0x4e9 Mov
	SetByIndex(var_38_cvector, 1) = var_39_float; // 0x4ea PopE
	var_40_string = "head"; // 0x4eb PushS
	LookAsync(var_34_object, var_40_string, var_38_cvector); // 0x4ec Func
	return 4; // 0x4ee Return
}


func_1381(var_82_bool)
{
	var_82_bool = 0; // 0x565 MovB
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
	func_1291(var_67_cvector, var_68_cvector); // 0x401 NEW_2
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
	CameraTransit(var_58_cvector, var_56_cvector); // 0x411 Func
	var_80_float = GetByIndex(var_57_cvector, 0); // 0x413 PushE
	var_81_float = GetByIndex(var_57_cvector, 2); // 0x414 PushE
	Rotate(var_80_float, var_81_float); // 0x415 Func
	var_82_bool = 0; // 0x417 PushV
	func_1381(var_82_bool); // 0x418 NEW_2
	if(var_82_bool == 0) goto Label_1052; // 0x41a JumpB
	goto Label_1060; // 0x41b Jump
	
Label_1060:
	CameraWaitForPlayFinish(); // 0x424 Func
	ResumeWorld(); // 0x426 Func
	var_40_bool = 1; // 0x428 MovB
	return 18; // 0x429 Return
	
Label_1052:
	var_83_string = "head"; // 0x41c PushS
	HasAnimationTrack(var_60_bool, var_83_string); // 0x41d Func
	var_84_bool = var_60_bool; // 0x41f Push
	if(var_84_bool == 0) goto Label_1060; // 0x420 JumpB
	var_85_string = "head"; // 0x421 PushS
	LookAsyncCamera(var_85_string); // 0x422 Func
}


func_1383()
{
	var_117_string = "ood7Nudegirl1"; // 0x568 PushS
	var_118_int = 1; // 0x569 PushI
	SetVariable(var_117_string, var_118_int); // 0x56a Func
	return 0; // 0x56c Return
}


func_1508(var_57_object)
{
	var_58_object = Obj(); var_59_object = Obj(); // 0x5e4 PushV
	GetDiaryRoot(var_59_object); // 0x5e5 Func
	var_60_bool = var_59_object == 0; // 0x5e7 Not
	if(var_60_bool == 0) goto Label_1518; // 0x5e8 JumpB
	var_61_string = "Can't retrieve diary root"; // 0x5e9 PushS
	Trace(var_61_string); // 0x5ea Func
	var_57_object = 0; // 0x5ec MovB
	return 2; // 0x5ed Return
	
Label_1518:
	var_57_object = var_59_object; // 0x5ee Mov
	return 2; // 0x5ef Return
}


func_1389()
{
	var_25_object = Obj(); var_26_object = Obj(); // 0x56d PushV
	var_27_string = "d7q04"; // 0x56e PushS
	var_28_int = 1; // 0x56f PushI
	SetVariable(var_27_string, var_28_int); // 0x570 Func
	var_29_object = Obj(); // 0x572 PushV
	func_1549(var_29_object); // 0x573 NEW_2
	var_26_object = var_29_object; // 0x574 Mov
	var_36_string = "d7q04NudeGotoAndrei"; // 0x576 PushS
	var_37_string = "pt_map_andrei"; // 0x577 PushS
	var_38_int = 0; // 0x578 PushI
	var_39_int = 515352; // 0x579 PushI
	var_40_float = 0; // 0x57a PushV
	func_1329(var_40_float); // 0x57b NEW_2
	AddMark(var_36_string, var_37_string, var_38_int, var_39_int, var_40_float); // 0x57d ObjFunc
	func_1482(); // 0x580 NEW_2
	func_1495(); // 0x583 NEW_2
	var_74_object = Obj(); var_75_string = ""; // 0x585 PushV
	var_75_string = "quest_d7_04"; // 0x586 MovS
	func_1306(var_74_object, var_75_string); // 0x587 NEW_2
	var_82_bool = 0; var_83_string = ""; var_84_string = ""; // 0x589 PushV
	var_83_string = "quest_d7_04"; // 0x58a MovS
	var_84_string = "init_kabak"; // 0x58b MovS
	func_1317(var_82_bool, var_83_string, var_84_string); // 0x58c NEW_2
	return 2; // 0x58e Return
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


func_1263(var_257_bool, var_258_string)
{
	var_259_bool = 0; var_260_bool = 0; // 0x4ef PushV
	var_261_bool = 0; // 0x4f0 PushV
	func_1381(var_261_bool); // 0x4f1 NEW_2
	if(var_261_bool == 0) goto Label_1276; // 0x4f3 JumpB
	lshHasSpeech(var_260_bool, var_258_string); // 0x4f4 Func
	var_262_bool = var_260_bool; // 0x4f6 Push
	if(var_262_bool == 0) goto Label_1276; // 0x4f7 JumpB
	lshPlaySpeech(var_258_string); // 0x4f8 Func
	var_257_bool = 1; // 0x4fa MovB
	return 2; // 0x4fb Return
	
Label_1276:
	var_257_bool = 0; // 0x4fc MovB
	return 2; // 0x4fd Return
}


func_1521(var_48_bool, var_49_object, var_50_int)
{
	var_51_object = Obj(); var_52_object = Obj(); var_53_int = 0; var_54_object = Obj(); var_55_object = Obj(); var_56_int = 0; // 0x5f1 PushV
	var_57_object = Obj(); // 0x5f2 PushV
	func_1508(var_57_object); // 0x5f3 NEW_2
	var_54_object = var_57_object; // 0x5f4 Mov
	Find(var_50_int, var_55_object); // 0x5f6 ObjFunc
	var_62_bool = var_55_object == 0; // 0x5f8 Not
	if(var_62_bool == 0) goto Label_1536; // 0x5f9 JumpB
	var_63_string = "Can't find diary parent with id: "; // 0x5fa PushS
	var_64_int = var_63_string + var_50_int; // 0x5fb Add
	Trace(var_64_int); // 0x5fc Func
	var_48_bool = 0; // 0x5fe MovB
	return 6; // 0x5ff Return
	
Label_1536:
	AddChild(var_49_object); // 0x600 ObjFunc
	var_65_int = 7; // 0x602 PushI
	SendWorldWndMessage(var_65_int); // 0x603 Func
	GetCategory(var_56_int); // 0x605 ObjFunc
	SetDiarySection(var_56_int); // 0x607 Func
	var_48_bool = 0; // 0x609 MovB
	return 6; // 0x60a Return
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


func_1141(var_234_bool)
{
	var_236_string = ""; var_237_int = 0; var_238_bool = 0; var_239_int = 0; var_240_string = ""; var_241_string = ""; var_242_int = 0; var_243_bool = 0; var_244_int = 0; var_245_string = ""; // 0x475 PushV
	var_241_string = "c"; // 0x476 MovS
	var_242_int = 0; // 0x477 MovI
	
Label_1144:
	var_246_int = 1; // 0x478 PushI
	if(var_246_int == 0) goto Label_1157; // 0x479 JumpB
	var_247_int = 1; // 0x47a PushI
	var_248_int = var_242_int + var_247_int; // 0x47b Add
	var_249_int = var_241_string + var_248_int; // 0x47c Add
	HasProperty(var_249_int, var_243_bool); // 0x47d ObjFunc
	var_250_bool = var_243_bool == 0; // 0x47f Not
	if(var_250_bool == 0) goto Label_1154; // 0x480 JumpB
	goto Label_1157; // 0x481 Jump
	
Label_1157:
	var_251_bool = var_242_int == 0; // 0x485 Not
	if(var_251_bool == 0) goto Label_1161; // 0x486 JumpB
	var_234_bool = 0; // 0x487 MovB
	return 10; // 0x488 Return
	
Label_1161:
	var_244_int = 0; // 0x489 MovI
	var_252_int = 1; // 0x48a PushI
	var_253_bool = var_242_int > var_252_int; // 0x48b GT
	if(var_253_bool == 0) goto Label_1167; // 0x48c JumpB
	irand(var_244_int, var_242_int); // 0x48d Func
	
Label_1167:
	var_254_int = 1; // 0x48f PushI
	var_255_int = var_244_int + var_254_int; // 0x490 Add
	var_256_int = var_241_string + var_255_int; // 0x491 Add
	GetProperty(var_256_int, var_245_string); // 0x492 ObjFunc
	var_257_bool = 0; var_258_string = ""; // 0x494 PushV
	var_258_string = var_245_string; // 0x495 Mov
	func_1263(var_257_bool, var_258_string); // 0x496 NEW_2
	var_234_bool = var_257_bool; // 0x497 Mov
	return 10; // 0x499 Return
	
Label_1154:
	var_263_int = 1; // 0x482 PushI
	var_242_int = var_242_int + var_263_int; // 0x483 Add2
	goto Label_1144; // 0x484 Jump
}


func_1278()
{
	var_20_bool = 0; // 0x4fe PushV
	func_1381(var_20_bool); // 0x4ff NEW_2
	if(var_20_bool == 0) goto Label_1284; // 0x501 JumpB
	lshStopSpeech(); // 0x502 Func
	
Label_1284:
	return 0; // 0x504 Return
}


