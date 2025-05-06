task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xb1 PushI
	if(var_42_int == 0) goto Label_478; // 0xb2 JumpB
	func_4340(); // 0xb4 NEW_2
	var_44_int = 20759; // 0xb6 PushI
	var_45_bool = var_41_bool == var_44_int; // 0xb7 Eq
	if(var_45_bool == 0) goto Label_205; // 0xb8 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xb9 PushV
	var_46_object = var_1_object; // 0xba MovT
	var_47_object = var_0_object; // 0xbb MovT
	func_4614(); // 0xbc NEW_2
	var_112_object = Obj(); var_113_object = Obj(); // 0xbe PushV
	var_112_object = var_1_object; // 0xbf MovT
	var_113_object = var_0_object; // 0xc0 MovT
	func_4747(); // 0xc1 NEW_2
	var_138_object = Obj(); var_139_object = Obj(); // 0xc3 PushV
	var_138_object = var_1_object; // 0xc4 MovT
	var_139_object = var_0_object; // 0xc5 MovT
	func_4600(); // 0xc6 NEW_2
	var_150_object = Obj(); var_151_object = Obj(); // 0xc8 PushV
	var_150_object = var_1_object; // 0xc9 MovT
	var_151_object = var_0_object; // 0xca MovT
	func_4607(); // 0xcb NEW_2
	
Label_205:
	var_154_int = 20765; // 0xcd PushI
	var_155_bool = var_41_bool == var_154_int; // 0xce Eq
	if(var_155_bool == 0) goto Label_228; // 0xcf JumpB
	var_156_object = Obj(); var_157_object = Obj(); // 0xd0 PushV
	var_156_object = var_1_object; // 0xd1 MovT
	var_157_object = var_0_object; // 0xd2 MovT
	func_4614(); // 0xd3 NEW_2
	var_158_object = Obj(); var_159_object = Obj(); // 0xd5 PushV
	var_158_object = var_1_object; // 0xd6 MovT
	var_159_object = var_0_object; // 0xd7 MovT
	func_4747(); // 0xd8 NEW_2
	var_160_object = Obj(); var_161_object = Obj(); // 0xda PushV
	var_160_object = var_1_object; // 0xdb MovT
	var_161_object = var_0_object; // 0xdc MovT
	func_4600(); // 0xdd NEW_2
	var_162_object = Obj(); var_163_object = Obj(); // 0xdf PushV
	var_162_object = var_1_object; // 0xe0 MovT
	var_163_object = var_0_object; // 0xe1 MovT
	func_4607(); // 0xe2 NEW_2
	
Label_228:
	var_164_int = 19343; // 0xe4 PushI
	var_165_bool = var_40_string == var_164_int; // 0xe5 Eq
	if(var_165_bool == 0) goto Label_266; // 0xe6 JumpB
	var_166_bool = 0; var_167_object = Obj(); // 0xe7 PushV
	var_167_object = var_1_object; // 0xe8 MovT
	func_4963(var_167_object); // 0xe9 NEW_2
	if(var_166_bool == 0) goto Label_251; // 0xeb JumpB
	var_174_string = ""; // 0xec PushV
	var_174_string = "Distrust"; // 0xed MovS
	func_154(var_41_bool, var_174_string); // 0xee NEW_2
	var_191_int = 518234; // 0xf0 PushI
	SetMessage(var_191_int); // 0xf1 TObjFunc
	ClearReplies(); // 0xf3 TObjFunc
	var_192_int = 518235; // 0xf5 PushI
	var_193_int = 20742; // 0xf6 PushI
	var_194_int = 19344; // 0xf7 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0xf8 TObjFunc
	return 0; // 0xfa Return
	
Label_251:
	var_195_string = ""; // 0xfb PushV
	var_195_string = "Neutral"; // 0xfc MovS
	func_154(var_41_bool, var_195_string); // 0xfd NEW_2
	var_196_int = 518236; // 0xff PushI
	SetMessage(var_196_int); // 0x100 TObjFunc
	ClearReplies(); // 0x102 TObjFunc
	var_197_int = 518237; // 0x104 PushI
	var_198_int = -1; // 0x105 PushI
	var_199_int = 19346; // 0x106 PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x107 TObjFunc
	return 0; // 0x109 Return
	
Label_266:
	var_200_int = 20742; // 0x10a PushI
	var_201_bool = var_40_string == var_200_int; // 0x10b Eq
	if(var_201_bool == 0) goto Label_289; // 0x10c JumpB
	var_202_string = ""; // 0x10d PushV
	var_202_string = "Neutral"; // 0x10e MovS
	func_154(var_41_bool, var_202_string); // 0x10f NEW_2
	var_203_int = 519566; // 0x111 PushI
	SetMessage(var_203_int); // 0x112 TObjFunc
	ClearReplies(); // 0x114 TObjFunc
	var_204_int = 519567; // 0x116 PushI
	var_205_int = 20744; // 0x117 PushI
	var_206_int = 20743; // 0x118 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x119 TObjFunc
	var_207_int = 519584; // 0x11b PushI
	var_208_int = 20746; // 0x11c PushI
	var_209_int = 20760; // 0x11d PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x11e TObjFunc
	return 0; // 0x120 Return
	
Label_289:
	var_210_int = 20744; // 0x121 PushI
	var_211_bool = var_40_string == var_210_int; // 0x122 Eq
	if(var_211_bool == 0) goto Label_307; // 0x123 JumpB
	var_212_string = ""; // 0x124 PushV
	var_212_string = "Repentance"; // 0x125 MovS
	func_154(var_41_bool, var_212_string); // 0x126 NEW_2
	var_213_int = 519568; // 0x128 PushI
	SetMessage(var_213_int); // 0x129 TObjFunc
	ClearReplies(); // 0x12b TObjFunc
	var_214_int = 519569; // 0x12d PushI
	var_215_int = 20746; // 0x12e PushI
	var_216_int = 20745; // 0x12f PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x130 TObjFunc
	return 0; // 0x132 Return
	
Label_307:
	var_217_int = 20746; // 0x133 PushI
	var_218_bool = var_40_string == var_217_int; // 0x134 Eq
	if(var_218_bool == 0) goto Label_325; // 0x135 JumpB
	var_219_string = ""; // 0x136 PushV
	var_219_string = "Neutral"; // 0x137 MovS
	func_154(var_41_bool, var_219_string); // 0x138 NEW_2
	var_220_int = 519570; // 0x13a PushI
	SetMessage(var_220_int); // 0x13b TObjFunc
	ClearReplies(); // 0x13d TObjFunc
	var_221_int = 519571; // 0x13f PushI
	var_222_int = 20748; // 0x140 PushI
	var_223_int = 20747; // 0x141 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x142 TObjFunc
	return 0; // 0x144 Return
	
Label_325:
	var_224_int = 20748; // 0x145 PushI
	var_225_bool = var_40_string == var_224_int; // 0x146 Eq
	if(var_225_bool == 0) goto Label_348; // 0x147 JumpB
	var_226_string = ""; // 0x148 PushV
	var_226_string = "Neutral"; // 0x149 MovS
	func_154(var_41_bool, var_226_string); // 0x14a NEW_2
	var_227_int = 519572; // 0x14c PushI
	SetMessage(var_227_int); // 0x14d TObjFunc
	ClearReplies(); // 0x14f TObjFunc
	var_228_int = 519574; // 0x151 PushI
	var_229_int = 20752; // 0x152 PushI
	var_230_int = 20750; // 0x153 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x154 TObjFunc
	var_231_int = 519575; // 0x156 PushI
	var_232_int = 20752; // 0x157 PushI
	var_233_int = 20751; // 0x158 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x159 TObjFunc
	return 0; // 0x15b Return
	
Label_348:
	var_234_int = 20752; // 0x15c PushI
	var_235_bool = var_40_string == var_234_int; // 0x15d Eq
	if(var_235_bool == 0) goto Label_366; // 0x15e JumpB
	var_236_string = ""; // 0x15f PushV
	var_236_string = "Patronage"; // 0x160 MovS
	func_154(var_41_bool, var_236_string); // 0x161 NEW_2
	var_237_int = 519576; // 0x163 PushI
	SetMessage(var_237_int); // 0x164 TObjFunc
	ClearReplies(); // 0x166 TObjFunc
	var_238_int = 519577; // 0x168 PushI
	var_239_int = 20754; // 0x169 PushI
	var_240_int = 20753; // 0x16a PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x16b TObjFunc
	return 0; // 0x16d Return
	
Label_366:
	var_241_int = 20754; // 0x16e PushI
	var_242_bool = var_40_string == var_241_int; // 0x16f Eq
	if(var_242_bool == 0) goto Label_384; // 0x170 JumpB
	var_243_string = ""; // 0x171 PushV
	var_243_string = "Neutral"; // 0x172 MovS
	func_154(var_41_bool, var_243_string); // 0x173 NEW_2
	var_244_int = 519578; // 0x175 PushI
	SetMessage(var_244_int); // 0x176 TObjFunc
	ClearReplies(); // 0x178 TObjFunc
	var_245_int = 519579; // 0x17a PushI
	var_246_int = 20756; // 0x17b PushI
	var_247_int = 20755; // 0x17c PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x17d TObjFunc
	return 0; // 0x17f Return
	
Label_384:
	var_248_int = 20756; // 0x180 PushI
	var_249_bool = var_40_string == var_248_int; // 0x181 Eq
	if(var_249_bool == 0) goto Label_407; // 0x182 JumpB
	var_250_string = ""; // 0x183 PushV
	var_250_string = "Neutral"; // 0x184 MovS
	func_154(var_41_bool, var_250_string); // 0x185 NEW_2
	var_251_int = 519580; // 0x187 PushI
	SetMessage(var_251_int); // 0x188 TObjFunc
	ClearReplies(); // 0x18a TObjFunc
	var_252_int = 527722; // 0x18c PushI
	var_253_int = 29071; // 0x18d PushI
	var_254_int = 29070; // 0x18e PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x18f TObjFunc
	var_255_int = 519587; // 0x191 PushI
	var_256_int = 20758; // 0x192 PushI
	var_257_int = 20766; // 0x193 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x194 TObjFunc
	return 0; // 0x196 Return
	
Label_407:
	var_258_int = 29071; // 0x197 PushI
	var_259_bool = var_40_string == var_258_int; // 0x198 Eq
	if(var_259_bool == 0) goto Label_425; // 0x199 JumpB
	var_260_string = ""; // 0x19a PushV
	var_260_string = "Neutral"; // 0x19b MovS
	func_154(var_41_bool, var_260_string); // 0x19c NEW_2
	var_261_int = 527723; // 0x19e PushI
	SetMessage(var_261_int); // 0x19f TObjFunc
	ClearReplies(); // 0x1a1 TObjFunc
	var_262_int = 530603; // 0x1a3 PushI
	var_263_int = 31907; // 0x1a4 PushI
	var_264_int = 31906; // 0x1a5 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_265_int = 31907; // 0x1a9 PushI
	var_266_bool = var_40_string == var_265_int; // 0x1aa Eq
	if(var_266_bool == 0) goto Label_443; // 0x1ab JumpB
	var_267_string = ""; // 0x1ac PushV
	var_267_string = "Anger"; // 0x1ad MovS
	func_154(var_41_bool, var_267_string); // 0x1ae NEW_2
	var_268_int = 530604; // 0x1b0 PushI
	SetMessage(var_268_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_269_int = 519581; // 0x1b5 PushI
	var_270_int = 20758; // 0x1b6 PushI
	var_271_int = 20757; // 0x1b7 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_272_int = 20758; // 0x1bb PushI
	var_273_bool = var_40_string == var_272_int; // 0x1bc Eq
	if(var_273_bool == 0) goto Label_466; // 0x1bd JumpB
	var_274_string = ""; // 0x1be PushV
	var_274_string = "Neutral"; // 0x1bf MovS
	func_154(var_41_bool, var_274_string); // 0x1c0 NEW_2
	var_275_int = 519582; // 0x1c2 PushI
	SetMessage(var_275_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_276_int = 519583; // 0x1c7 PushI
	var_277_int = -1; // 0x1c8 PushI
	var_278_int = 20759; // 0x1c9 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x1ca TObjFunc
	var_279_int = 519586; // 0x1cc PushI
	var_280_int = -1; // 0x1cd PushI
	var_281_int = 20765; // 0x1ce PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x1cf TObjFunc
	return 0; // 0x1d1 Return
	
Label_466:
	var_3_string = 1; // 0x1d2 TMovB
	var_282_bool = 0; // 0x1d3 PushV
	func_4487(var_282_bool); // 0x1d4 NEW_2
	if(var_282_bool == 0) goto Label_474; // 0x1d6 JumpB
	lshStopAnimation(); // 0x1d7 Func
	goto Label_476; // 0x1d9 Jump
	
Label_476:
	return 0; // 0x1dc Return
	
Label_474:
	StopAnimation(); // 0x1da Func
	
Label_478:
	return 0; // 0x1de Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x2b3 PushI
	if(var_42_int == 0) goto Label_1295; // 0x2b4 JumpB
	func_4340(); // 0x2b6 NEW_2
	var_44_int = 20378; // 0x2b8 PushI
	var_45_bool = var_41_bool == var_44_int; // 0x2b9 Eq
	if(var_45_bool == 0) goto Label_709; // 0x2ba JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x2bb PushV
	var_46_object = var_1_object; // 0x2bc MovT
	var_47_object = var_0_object; // 0x2bd MovT
	func_4489(); // 0x2be NEW_2
	var_97_object = Obj(); var_98_object = Obj(); // 0x2c0 PushV
	var_97_object = var_1_object; // 0x2c1 MovT
	var_98_object = var_0_object; // 0x2c2 MovT
	func_4731(); // 0x2c3 NEW_2
	
Label_709:
	var_123_int = 20814; // 0x2c5 PushI
	var_124_bool = var_41_bool == var_123_int; // 0x2c6 Eq
	if(var_124_bool == 0) goto Label_722; // 0x2c7 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x2c8 PushV
	var_125_object = var_1_object; // 0x2c9 MovT
	var_126_object = var_0_object; // 0x2ca MovT
	func_4489(); // 0x2cb NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x2cd PushV
	var_127_object = var_1_object; // 0x2ce MovT
	var_128_object = var_0_object; // 0x2cf MovT
	func_4731(); // 0x2d0 NEW_2
	
Label_722:
	var_129_int = 20422; // 0x2d2 PushI
	var_130_bool = var_41_bool == var_129_int; // 0x2d3 Eq
	if(var_130_bool == 0) goto Label_730; // 0x2d4 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x2d5 PushV
	var_131_object = var_1_object; // 0x2d6 MovT
	var_132_object = var_0_object; // 0x2d7 MovT
	func_4521(); // 0x2d8 NEW_2
	
Label_730:
	var_147_int = 20423; // 0x2da PushI
	var_148_bool = var_41_bool == var_147_int; // 0x2db Eq
	if(var_148_bool == 0) goto Label_738; // 0x2dc JumpB
	var_149_object = Obj(); var_150_object = Obj(); // 0x2dd PushV
	var_149_object = var_1_object; // 0x2de MovT
	var_150_object = var_0_object; // 0x2df MovT
	func_4521(); // 0x2e0 NEW_2
	
Label_738:
	var_151_int = 20420; // 0x2e2 PushI
	var_152_bool = var_41_bool == var_151_int; // 0x2e3 Eq
	if(var_152_bool == 0) goto Label_746; // 0x2e4 JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0x2e5 PushV
	var_153_object = var_1_object; // 0x2e6 MovT
	var_154_object = var_0_object; // 0x2e7 MovT
	func_4521(); // 0x2e8 NEW_2
	
Label_746:
	var_155_int = 20409; // 0x2ea PushI
	var_156_bool = var_41_bool == var_155_int; // 0x2eb Eq
	if(var_156_bool == 0) goto Label_754; // 0x2ec JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x2ed PushV
	var_157_object = var_1_object; // 0x2ee MovT
	var_158_object = var_0_object; // 0x2ef MovT
	func_4531(); // 0x2f0 NEW_2
	
Label_754:
	var_170_int = 20357; // 0x2f2 PushI
	var_171_bool = var_40_string == var_170_int; // 0x2f3 Eq
	if(var_171_bool == 0) goto Label_827; // 0x2f4 JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0x2f5 PushV
	var_173_object = var_1_object; // 0x2f6 MovT
	func_4879(var_173_object); // 0x2f7 NEW_2
	if(var_172_bool == 0) goto Label_792; // 0x2f9 JumpB
	var_180_object = Obj(); var_181_object = Obj(); // 0x2fa PushV
	var_180_object = var_1_object; // 0x2fb MovT
	var_181_object = var_0_object; // 0x2fc MovT
	func_4515(); // 0x2fd NEW_2
	var_184_object = Obj(); var_185_object = Obj(); // 0x2ff PushV
	var_184_object = var_1_object; // 0x300 MovT
	var_185_object = var_0_object; // 0x301 MovT
	func_4714(); // 0x302 NEW_2
	var_188_string = ""; // 0x304 PushV
	var_188_string = "Neutral"; // 0x305 MovS
	func_668(var_41_bool, var_188_string); // 0x306 NEW_2
	var_205_int = 519215; // 0x308 PushI
	SetMessage(var_205_int); // 0x309 TObjFunc
	ClearReplies(); // 0x30b TObjFunc
	var_206_int = 519216; // 0x30d PushI
	var_207_int = 29206; // 0x30e PushI
	var_208_int = 20358; // 0x30f PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x310 TObjFunc
	var_209_int = 519240; // 0x312 PushI
	var_210_int = 20385; // 0x313 PushI
	var_211_int = 20384; // 0x314 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x315 TObjFunc
	return 0; // 0x317 Return
	
Label_792:
	var_212_string = ""; // 0x318 PushV
	var_212_string = "Neutral"; // 0x319 MovS
	func_668(var_41_bool, var_212_string); // 0x31a NEW_2
	var_213_int = 519247; // 0x31c PushI
	SetMessage(var_213_int); // 0x31d TObjFunc
	ClearReplies(); // 0x31f TObjFunc
	var_214_bool = 0; var_215_object = Obj(); // 0x321 PushV
	var_215_object = var_1_object; // 0x322 MovT
	func_4891(var_215_object); // 0x323 NEW_2
	if(var_214_bool == 0) goto Label_811; // 0x325 JumpB
	var_220_int = 519628; // 0x326 PushI
	var_221_int = 20811; // 0x327 PushI
	var_222_int = 20810; // 0x328 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x329 TObjFunc
	
Label_811:
	var_223_bool = 0; var_224_object = Obj(); // 0x32b PushV
	var_224_object = var_1_object; // 0x32c MovT
	func_4903(var_224_object); // 0x32d NEW_2
	if(var_223_bool == 0) goto Label_821; // 0x32f JumpB
	var_229_int = 519248; // 0x330 PushI
	var_230_int = 20399; // 0x331 PushI
	var_231_int = 20397; // 0x332 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x333 TObjFunc
	
Label_821:
	var_232_int = 519249; // 0x335 PushI
	var_233_int = -1; // 0x336 PushI
	var_234_int = 20398; // 0x337 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x338 TObjFunc
	return 0; // 0x33a Return
	
Label_827:
	var_235_int = 20399; // 0x33b PushI
	var_236_bool = var_40_string == var_235_int; // 0x33c Eq
	if(var_236_bool == 0) goto Label_850; // 0x33d JumpB
	var_237_string = ""; // 0x33e PushV
	var_237_string = "Anger"; // 0x33f MovS
	func_668(var_41_bool, var_237_string); // 0x340 NEW_2
	var_238_int = 519250; // 0x342 PushI
	SetMessage(var_238_int); // 0x343 TObjFunc
	ClearReplies(); // 0x345 TObjFunc
	var_239_int = 519251; // 0x347 PushI
	var_240_int = 20402; // 0x348 PushI
	var_241_int = 20400; // 0x349 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x34a TObjFunc
	var_242_int = 519252; // 0x34c PushI
	var_243_int = 20402; // 0x34d PushI
	var_244_int = 20401; // 0x34e PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x34f TObjFunc
	return 0; // 0x351 Return
	
Label_850:
	var_245_int = 20402; // 0x352 PushI
	var_246_bool = var_40_string == var_245_int; // 0x353 Eq
	if(var_246_bool == 0) goto Label_873; // 0x354 JumpB
	var_247_string = ""; // 0x355 PushV
	var_247_string = "Neutral"; // 0x356 MovS
	func_668(var_41_bool, var_247_string); // 0x357 NEW_2
	var_248_int = 519253; // 0x359 PushI
	SetMessage(var_248_int); // 0x35a TObjFunc
	ClearReplies(); // 0x35c TObjFunc
	var_249_int = 519254; // 0x35e PushI
	var_250_int = 20405; // 0x35f PushI
	var_251_int = 20404; // 0x360 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x361 TObjFunc
	var_252_int = 519256; // 0x363 PushI
	var_253_int = 20407; // 0x364 PushI
	var_254_int = 20406; // 0x365 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x366 TObjFunc
	return 0; // 0x368 Return
	
Label_873:
	var_255_int = 20407; // 0x369 PushI
	var_256_bool = var_40_string == var_255_int; // 0x36a Eq
	if(var_256_bool == 0) goto Label_896; // 0x36b JumpB
	var_257_string = ""; // 0x36c PushV
	var_257_string = "Neutral"; // 0x36d MovS
	func_668(var_41_bool, var_257_string); // 0x36e NEW_2
	var_258_int = 519257; // 0x370 PushI
	SetMessage(var_258_int); // 0x371 TObjFunc
	ClearReplies(); // 0x373 TObjFunc
	var_259_int = 519258; // 0x375 PushI
	var_260_int = 20413; // 0x376 PushI
	var_261_int = 20408; // 0x377 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x378 TObjFunc
	var_262_int = 519259; // 0x37a PushI
	var_263_int = -1; // 0x37b PushI
	var_264_int = 20409; // 0x37c PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x37d TObjFunc
	return 0; // 0x37f Return
	
Label_896:
	var_265_int = 20405; // 0x380 PushI
	var_266_bool = var_40_string == var_265_int; // 0x381 Eq
	if(var_266_bool == 0) goto Label_919; // 0x382 JumpB
	var_267_string = ""; // 0x383 PushV
	var_267_string = "Neutral"; // 0x384 MovS
	func_668(var_41_bool, var_267_string); // 0x385 NEW_2
	var_268_int = 519255; // 0x387 PushI
	SetMessage(var_268_int); // 0x388 TObjFunc
	ClearReplies(); // 0x38a TObjFunc
	var_269_int = 519260; // 0x38c PushI
	var_270_int = 20413; // 0x38d PushI
	var_271_int = 20410; // 0x38e PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x38f TObjFunc
	var_272_int = 519261; // 0x391 PushI
	var_273_int = 20412; // 0x392 PushI
	var_274_int = 20411; // 0x393 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x394 TObjFunc
	return 0; // 0x396 Return
	
Label_919:
	var_275_int = 20412; // 0x397 PushI
	var_276_bool = var_40_string == var_275_int; // 0x398 Eq
	if(var_276_bool == 0) goto Label_937; // 0x399 JumpB
	var_277_string = ""; // 0x39a PushV
	var_277_string = "Neutral"; // 0x39b MovS
	func_668(var_41_bool, var_277_string); // 0x39c NEW_2
	var_278_int = 519262; // 0x39e PushI
	SetMessage(var_278_int); // 0x39f TObjFunc
	ClearReplies(); // 0x3a1 TObjFunc
	var_279_int = 519264; // 0x3a3 PushI
	var_280_int = 20413; // 0x3a4 PushI
	var_281_int = 20415; // 0x3a5 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x3a6 TObjFunc
	return 0; // 0x3a8 Return
	
Label_937:
	var_282_int = 20413; // 0x3a9 PushI
	var_283_bool = var_40_string == var_282_int; // 0x3aa Eq
	if(var_283_bool == 0) goto Label_955; // 0x3ab JumpB
	var_284_string = ""; // 0x3ac PushV
	var_284_string = "Neutral"; // 0x3ad MovS
	func_668(var_41_bool, var_284_string); // 0x3ae NEW_2
	var_285_int = 519263; // 0x3b0 PushI
	SetMessage(var_285_int); // 0x3b1 TObjFunc
	ClearReplies(); // 0x3b3 TObjFunc
	var_286_int = 519265; // 0x3b5 PushI
	var_287_int = 20418; // 0x3b6 PushI
	var_288_int = 20417; // 0x3b7 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x3b8 TObjFunc
	return 0; // 0x3ba Return
	
Label_955:
	var_289_int = 20418; // 0x3bb PushI
	var_290_bool = var_40_string == var_289_int; // 0x3bc Eq
	if(var_290_bool == 0) goto Label_978; // 0x3bd JumpB
	var_291_string = ""; // 0x3be PushV
	var_291_string = "Neutral"; // 0x3bf MovS
	func_668(var_41_bool, var_291_string); // 0x3c0 NEW_2
	var_292_int = 519266; // 0x3c2 PushI
	SetMessage(var_292_int); // 0x3c3 TObjFunc
	ClearReplies(); // 0x3c5 TObjFunc
	var_293_int = 519267; // 0x3c7 PushI
	var_294_int = 20421; // 0x3c8 PushI
	var_295_int = 20419; // 0x3c9 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x3ca TObjFunc
	var_296_int = 519268; // 0x3cc PushI
	var_297_int = -1; // 0x3cd PushI
	var_298_int = 20420; // 0x3ce PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x3cf TObjFunc
	return 0; // 0x3d1 Return
	
Label_978:
	var_299_int = 20421; // 0x3d2 PushI
	var_300_bool = var_40_string == var_299_int; // 0x3d3 Eq
	if(var_300_bool == 0) goto Label_1001; // 0x3d4 JumpB
	var_301_string = ""; // 0x3d5 PushV
	var_301_string = "Repentance"; // 0x3d6 MovS
	func_668(var_41_bool, var_301_string); // 0x3d7 NEW_2
	var_302_int = 519269; // 0x3d9 PushI
	SetMessage(var_302_int); // 0x3da TObjFunc
	ClearReplies(); // 0x3dc TObjFunc
	var_303_int = 519270; // 0x3de PushI
	var_304_int = -1; // 0x3df PushI
	var_305_int = 20422; // 0x3e0 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x3e1 TObjFunc
	var_306_int = 519271; // 0x3e3 PushI
	var_307_int = -1; // 0x3e4 PushI
	var_308_int = 20423; // 0x3e5 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x3e6 TObjFunc
	return 0; // 0x3e8 Return
	
Label_1001:
	var_309_int = 20811; // 0x3e9 PushI
	var_310_bool = var_40_string == var_309_int; // 0x3ea Eq
	if(var_310_bool == 0) goto Label_1019; // 0x3eb JumpB
	var_311_string = ""; // 0x3ec PushV
	var_311_string = "Neutral"; // 0x3ed MovS
	func_668(var_41_bool, var_311_string); // 0x3ee NEW_2
	var_312_int = 519629; // 0x3f0 PushI
	SetMessage(var_312_int); // 0x3f1 TObjFunc
	ClearReplies(); // 0x3f3 TObjFunc
	var_313_int = 519630; // 0x3f5 PushI
	var_314_int = 20813; // 0x3f6 PushI
	var_315_int = 20812; // 0x3f7 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x3f8 TObjFunc
	return 0; // 0x3fa Return
	
Label_1019:
	var_316_int = 20813; // 0x3fb PushI
	var_317_bool = var_40_string == var_316_int; // 0x3fc Eq
	if(var_317_bool == 0) goto Label_1037; // 0x3fd JumpB
	var_318_string = ""; // 0x3fe PushV
	var_318_string = "Anger"; // 0x3ff MovS
	func_668(var_41_bool, var_318_string); // 0x400 NEW_2
	var_319_int = 519631; // 0x402 PushI
	SetMessage(var_319_int); // 0x403 TObjFunc
	ClearReplies(); // 0x405 TObjFunc
	var_320_int = 519632; // 0x407 PushI
	var_321_int = -1; // 0x408 PushI
	var_322_int = 20814; // 0x409 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x40a TObjFunc
	return 0; // 0x40c Return
	
Label_1037:
	var_323_int = 20385; // 0x40d PushI
	var_324_bool = var_40_string == var_323_int; // 0x40e Eq
	if(var_324_bool == 0) goto Label_1055; // 0x40f JumpB
	var_325_string = ""; // 0x410 PushV
	var_325_string = "Neutral"; // 0x411 MovS
	func_668(var_41_bool, var_325_string); // 0x412 NEW_2
	var_326_int = 519241; // 0x414 PushI
	SetMessage(var_326_int); // 0x415 TObjFunc
	ClearReplies(); // 0x417 TObjFunc
	var_327_int = 519242; // 0x419 PushI
	var_328_int = 20359; // 0x41a PushI
	var_329_int = 20386; // 0x41b PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x41c TObjFunc
	return 0; // 0x41e Return
	
Label_1055:
	var_330_int = 29206; // 0x41f PushI
	var_331_bool = var_40_string == var_330_int; // 0x420 Eq
	if(var_331_bool == 0) goto Label_1073; // 0x421 JumpB
	var_332_string = ""; // 0x422 PushV
	var_332_string = "Neutral"; // 0x423 MovS
	func_668(var_41_bool, var_332_string); // 0x424 NEW_2
	var_333_int = 527862; // 0x426 PushI
	SetMessage(var_333_int); // 0x427 TObjFunc
	ClearReplies(); // 0x429 TObjFunc
	var_334_int = 527863; // 0x42b PushI
	var_335_int = 20359; // 0x42c PushI
	var_336_int = 29207; // 0x42d PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x42e TObjFunc
	return 0; // 0x430 Return
	
Label_1073:
	var_337_int = 20359; // 0x431 PushI
	var_338_bool = var_40_string == var_337_int; // 0x432 Eq
	if(var_338_bool == 0) goto Label_1096; // 0x433 JumpB
	var_339_string = ""; // 0x434 PushV
	var_339_string = "Patronage"; // 0x435 MovS
	func_668(var_41_bool, var_339_string); // 0x436 NEW_2
	var_340_int = 519217; // 0x438 PushI
	SetMessage(var_340_int); // 0x439 TObjFunc
	ClearReplies(); // 0x43b TObjFunc
	var_341_int = 519218; // 0x43d PushI
	var_342_int = 20361; // 0x43e PushI
	var_343_int = 20360; // 0x43f PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x440 TObjFunc
	var_344_int = 519244; // 0x442 PushI
	var_345_int = 20363; // 0x443 PushI
	var_346_int = 20389; // 0x444 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x445 TObjFunc
	return 0; // 0x447 Return
	
Label_1096:
	var_347_int = 20361; // 0x448 PushI
	var_348_bool = var_40_string == var_347_int; // 0x449 Eq
	if(var_348_bool == 0) goto Label_1114; // 0x44a JumpB
	var_349_string = ""; // 0x44b PushV
	var_349_string = "Neutral"; // 0x44c MovS
	func_668(var_41_bool, var_349_string); // 0x44d NEW_2
	var_350_int = 519219; // 0x44f PushI
	SetMessage(var_350_int); // 0x450 TObjFunc
	ClearReplies(); // 0x452 TObjFunc
	var_351_int = 519220; // 0x454 PushI
	var_352_int = 20363; // 0x455 PushI
	var_353_int = 20362; // 0x456 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x457 TObjFunc
	return 0; // 0x459 Return
	
Label_1114:
	var_354_int = 20363; // 0x45a PushI
	var_355_bool = var_40_string == var_354_int; // 0x45b Eq
	if(var_355_bool == 0) goto Label_1137; // 0x45c JumpB
	var_356_string = ""; // 0x45d PushV
	var_356_string = "Neutral"; // 0x45e MovS
	func_668(var_41_bool, var_356_string); // 0x45f NEW_2
	var_357_int = 519221; // 0x461 PushI
	SetMessage(var_357_int); // 0x462 TObjFunc
	ClearReplies(); // 0x464 TObjFunc
	var_358_int = 519222; // 0x466 PushI
	var_359_int = 20365; // 0x467 PushI
	var_360_int = 20364; // 0x468 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x469 TObjFunc
	var_361_int = 519245; // 0x46b PushI
	var_362_int = 20365; // 0x46c PushI
	var_363_int = 20391; // 0x46d PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x46e TObjFunc
	return 0; // 0x470 Return
	
Label_1137:
	var_364_int = 20365; // 0x471 PushI
	var_365_bool = var_40_string == var_364_int; // 0x472 Eq
	if(var_365_bool == 0) goto Label_1160; // 0x473 JumpB
	var_366_string = ""; // 0x474 PushV
	var_366_string = "Neutral"; // 0x475 MovS
	func_668(var_41_bool, var_366_string); // 0x476 NEW_2
	var_367_int = 519223; // 0x478 PushI
	SetMessage(var_367_int); // 0x479 TObjFunc
	ClearReplies(); // 0x47b TObjFunc
	var_368_int = 519224; // 0x47d PushI
	var_369_int = 20367; // 0x47e PushI
	var_370_int = 20366; // 0x47f PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x480 TObjFunc
	var_371_int = 519246; // 0x482 PushI
	var_372_int = 20369; // 0x483 PushI
	var_373_int = 20394; // 0x484 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x485 TObjFunc
	return 0; // 0x487 Return
	
Label_1160:
	var_374_int = 20367; // 0x488 PushI
	var_375_bool = var_40_string == var_374_int; // 0x489 Eq
	if(var_375_bool == 0) goto Label_1178; // 0x48a JumpB
	var_376_string = ""; // 0x48b PushV
	var_376_string = "Anger"; // 0x48c MovS
	func_668(var_41_bool, var_376_string); // 0x48d NEW_2
	var_377_int = 519225; // 0x48f PushI
	SetMessage(var_377_int); // 0x490 TObjFunc
	ClearReplies(); // 0x492 TObjFunc
	var_378_int = 519226; // 0x494 PushI
	var_379_int = 20369; // 0x495 PushI
	var_380_int = 20368; // 0x496 PushI
	AddReply(var_378_int, var_379_int, var_380_int); // 0x497 TObjFunc
	return 0; // 0x499 Return
	
Label_1178:
	var_381_int = 20369; // 0x49a PushI
	var_382_bool = var_40_string == var_381_int; // 0x49b Eq
	if(var_382_bool == 0) goto Label_1201; // 0x49c JumpB
	var_383_string = ""; // 0x49d PushV
	var_383_string = "Neutral"; // 0x49e MovS
	func_668(var_41_bool, var_383_string); // 0x49f NEW_2
	var_384_int = 519227; // 0x4a1 PushI
	SetMessage(var_384_int); // 0x4a2 TObjFunc
	ClearReplies(); // 0x4a4 TObjFunc
	var_385_int = 519228; // 0x4a6 PushI
	var_386_int = 20375; // 0x4a7 PushI
	var_387_int = 20370; // 0x4a8 PushI
	AddReply(var_385_int, var_386_int, var_387_int); // 0x4a9 TObjFunc
	var_388_int = 519229; // 0x4ab PushI
	var_389_int = 20372; // 0x4ac PushI
	var_390_int = 20371; // 0x4ad PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x4ae TObjFunc
	return 0; // 0x4b0 Return
	
Label_1201:
	var_391_int = 20372; // 0x4b1 PushI
	var_392_bool = var_40_string == var_391_int; // 0x4b2 Eq
	if(var_392_bool == 0) goto Label_1224; // 0x4b3 JumpB
	var_393_string = ""; // 0x4b4 PushV
	var_393_string = "Neutral"; // 0x4b5 MovS
	func_668(var_41_bool, var_393_string); // 0x4b6 NEW_2
	var_394_int = 519230; // 0x4b8 PushI
	SetMessage(var_394_int); // 0x4b9 TObjFunc
	ClearReplies(); // 0x4bb TObjFunc
	var_395_int = 519231; // 0x4bd PushI
	var_396_int = 20375; // 0x4be PushI
	var_397_int = 20373; // 0x4bf PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x4c0 TObjFunc
	var_398_int = 519232; // 0x4c2 PushI
	var_399_int = -1; // 0x4c3 PushI
	var_400_int = 20374; // 0x4c4 PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x4c5 TObjFunc
	return 0; // 0x4c7 Return
	
Label_1224:
	var_401_int = 20375; // 0x4c8 PushI
	var_402_bool = var_40_string == var_401_int; // 0x4c9 Eq
	if(var_402_bool == 0) goto Label_1247; // 0x4ca JumpB
	var_403_string = ""; // 0x4cb PushV
	var_403_string = "Neutral"; // 0x4cc MovS
	func_668(var_41_bool, var_403_string); // 0x4cd NEW_2
	var_404_int = 519233; // 0x4cf PushI
	SetMessage(var_404_int); // 0x4d0 TObjFunc
	ClearReplies(); // 0x4d2 TObjFunc
	var_405_int = 519234; // 0x4d4 PushI
	var_406_int = 20377; // 0x4d5 PushI
	var_407_int = 20376; // 0x4d6 PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x4d7 TObjFunc
	var_408_int = 519237; // 0x4d9 PushI
	var_409_int = 20381; // 0x4da PushI
	var_410_int = 20380; // 0x4db PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x4dc TObjFunc
	return 0; // 0x4de Return
	
Label_1247:
	var_411_int = 20381; // 0x4df PushI
	var_412_bool = var_40_string == var_411_int; // 0x4e0 Eq
	if(var_412_bool == 0) goto Label_1265; // 0x4e1 JumpB
	var_413_string = ""; // 0x4e2 PushV
	var_413_string = "Repentance"; // 0x4e3 MovS
	func_668(var_41_bool, var_413_string); // 0x4e4 NEW_2
	var_414_int = 519238; // 0x4e6 PushI
	SetMessage(var_414_int); // 0x4e7 TObjFunc
	ClearReplies(); // 0x4e9 TObjFunc
	var_415_int = 519239; // 0x4eb PushI
	var_416_int = 20377; // 0x4ec PushI
	var_417_int = 20382; // 0x4ed PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x4ee TObjFunc
	return 0; // 0x4f0 Return
	
Label_1265:
	var_418_int = 20377; // 0x4f1 PushI
	var_419_bool = var_40_string == var_418_int; // 0x4f2 Eq
	if(var_419_bool == 0) goto Label_1283; // 0x4f3 JumpB
	var_420_string = ""; // 0x4f4 PushV
	var_420_string = "Neutral"; // 0x4f5 MovS
	func_668(var_41_bool, var_420_string); // 0x4f6 NEW_2
	var_421_int = 519235; // 0x4f8 PushI
	SetMessage(var_421_int); // 0x4f9 TObjFunc
	ClearReplies(); // 0x4fb TObjFunc
	var_422_int = 519236; // 0x4fd PushI
	var_423_int = -1; // 0x4fe PushI
	var_424_int = 20378; // 0x4ff PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x500 TObjFunc
	return 0; // 0x502 Return
	
Label_1283:
	var_3_string = 1; // 0x503 TMovB
	var_425_bool = 0; // 0x504 PushV
	func_4487(var_425_bool); // 0x505 NEW_2
	if(var_425_bool == 0) goto Label_1291; // 0x507 JumpB
	lshStopAnimation(); // 0x508 Func
	goto Label_1293; // 0x50a Jump
	
Label_1293:
	return 0; // 0x50d Return
	
Label_1291:
	StopAnimation(); // 0x50b Func
	
Label_1295:
	return 0; // 0x50f Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x5e9 PushI
	if(var_42_int == 0) goto Label_2138; // 0x5ea JumpB
	func_4340(); // 0x5ec NEW_2
	var_44_int = 20926; // 0x5ee PushI
	var_45_bool = var_41_bool == var_44_int; // 0x5ef Eq
	if(var_45_bool == 0) goto Label_1531; // 0x5f0 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0x5f1 PushV
	var_46_object = var_1_object; // 0x5f2 MovT
	var_47_object = var_0_object; // 0x5f3 MovT
	func_4565(); // 0x5f4 NEW_2
	var_102_object = Obj(); var_103_object = Obj(); // 0x5f6 PushV
	var_102_object = var_1_object; // 0x5f7 MovT
	var_103_object = var_0_object; // 0x5f8 MovT
	func_4779(); // 0x5f9 NEW_2
	
Label_1531:
	var_128_int = 28438; // 0x5fb PushI
	var_129_bool = var_41_bool == var_128_int; // 0x5fc Eq
	if(var_129_bool == 0) goto Label_1544; // 0x5fd JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x5fe PushV
	var_130_object = var_1_object; // 0x5ff MovT
	var_131_object = var_0_object; // 0x600 MovT
	func_4565(); // 0x601 NEW_2
	var_132_object = Obj(); var_133_object = Obj(); // 0x603 PushV
	var_132_object = var_1_object; // 0x604 MovT
	var_133_object = var_0_object; // 0x605 MovT
	func_4779(); // 0x606 NEW_2
	
Label_1544:
	var_134_int = 20953; // 0x608 PushI
	var_135_bool = var_41_bool == var_134_int; // 0x609 Eq
	if(var_135_bool == 0) goto Label_1552; // 0x60a JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x60b PushV
	var_136_object = var_1_object; // 0x60c MovT
	var_137_object = var_0_object; // 0x60d MovT
	func_4547(); // 0x60e NEW_2
	
Label_1552:
	var_140_int = 20957; // 0x610 PushI
	var_141_bool = var_41_bool == var_140_int; // 0x611 Eq
	if(var_141_bool == 0) goto Label_1560; // 0x612 JumpB
	var_142_object = Obj(); var_143_object = Obj(); // 0x613 PushV
	var_142_object = var_1_object; // 0x614 MovT
	var_143_object = var_0_object; // 0x615 MovT
	func_4763(); // 0x616 NEW_2
	
Label_1560:
	var_149_int = 20958; // 0x618 PushI
	var_150_bool = var_41_bool == var_149_int; // 0x619 Eq
	if(var_150_bool == 0) goto Label_1568; // 0x61a JumpB
	var_151_object = Obj(); var_152_object = Obj(); // 0x61b PushV
	var_151_object = var_1_object; // 0x61c MovT
	var_152_object = var_0_object; // 0x61d MovT
	func_4553(); // 0x61e NEW_2
	
Label_1568:
	var_155_int = 20967; // 0x620 PushI
	var_156_bool = var_41_bool == var_155_int; // 0x621 Eq
	if(var_156_bool == 0) goto Label_1576; // 0x622 JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0x623 PushV
	var_157_object = var_1_object; // 0x624 MovT
	var_158_object = var_0_object; // 0x625 MovT
	func_4559(); // 0x626 NEW_2
	
Label_1576:
	var_161_int = 20969; // 0x628 PushI
	var_162_bool = var_41_bool == var_161_int; // 0x629 Eq
	if(var_162_bool == 0) goto Label_1584; // 0x62a JumpB
	var_163_object = Obj(); var_164_object = Obj(); // 0x62b PushV
	var_163_object = var_1_object; // 0x62c MovT
	var_164_object = var_0_object; // 0x62d MovT
	func_4720(var_164_object); // 0x62e NEW_2
	
Label_1584:
	var_187_int = 20906; // 0x630 PushI
	var_188_bool = var_40_string == var_187_int; // 0x631 Eq
	if(var_188_bool == 0) goto Label_1662; // 0x632 JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x633 PushV
	var_190_object = var_1_object; // 0x634 MovT
	func_4915(var_190_object); // 0x635 NEW_2
	if(var_189_bool == 0) goto Label_1617; // 0x637 JumpB
	var_197_object = Obj(); var_198_object = Obj(); // 0x638 PushV
	var_197_object = var_1_object; // 0x639 MovT
	var_198_object = var_0_object; // 0x63a MovT
	func_4541(); // 0x63b NEW_2
	var_201_string = ""; // 0x63d PushV
	var_201_string = "Neutral"; // 0x63e MovS
	func_1490(var_41_bool, var_201_string); // 0x63f NEW_2
	var_218_int = 519752; // 0x641 PushI
	SetMessage(var_218_int); // 0x642 TObjFunc
	ClearReplies(); // 0x644 TObjFunc
	var_219_int = 519753; // 0x646 PushI
	var_220_int = 20908; // 0x647 PushI
	var_221_int = 20907; // 0x648 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x649 TObjFunc
	var_222_int = 519791; // 0x64b PushI
	var_223_int = 20910; // 0x64c PushI
	var_224_int = 20951; // 0x64d PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x64e TObjFunc
	return 0; // 0x650 Return
	
Label_1617:
	var_225_string = ""; // 0x651 PushV
	var_225_string = "Neutral"; // 0x652 MovS
	func_1490(var_41_bool, var_225_string); // 0x653 NEW_2
	var_226_int = 519792; // 0x655 PushI
	SetMessage(var_226_int); // 0x656 TObjFunc
	ClearReplies(); // 0x658 TObjFunc
	var_227_bool = 0; var_228_object = Obj(); // 0x65a PushV
	var_228_object = var_1_object; // 0x65b MovT
	func_4927(var_228_object); // 0x65c NEW_2
	if(var_227_bool == 0) goto Label_1636; // 0x65e JumpB
	var_233_int = 519793; // 0x65f PushI
	var_234_int = 20954; // 0x660 PushI
	var_235_int = 20953; // 0x661 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x662 TObjFunc
	
Label_1636:
	var_236_bool = 0; var_237_object = Obj(); // 0x664 PushV
	var_237_object = var_1_object; // 0x665 MovT
	func_4939(var_237_object); // 0x666 NEW_2
	if(var_236_bool == 0) goto Label_1646; // 0x668 JumpB
	var_242_int = 519798; // 0x669 PushI
	var_243_int = 28439; // 0x66a PushI
	var_244_int = 20958; // 0x66b PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x66c TObjFunc
	
Label_1646:
	var_245_bool = 0; var_246_object = Obj(); // 0x66e PushV
	var_246_object = var_1_object; // 0x66f MovT
	func_4951(var_246_object); // 0x670 NEW_2
	if(var_245_bool == 0) goto Label_1656; // 0x672 JumpB
	var_251_int = 519807; // 0x673 PushI
	var_252_int = 20968; // 0x674 PushI
	var_253_int = 20967; // 0x675 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x676 TObjFunc
	
Label_1656:
	var_254_int = 519810; // 0x678 PushI
	var_255_int = -1; // 0x679 PushI
	var_256_int = 20970; // 0x67a PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x67b TObjFunc
	return 0; // 0x67d Return
	
Label_1662:
	var_257_int = 20968; // 0x67e PushI
	var_258_bool = var_40_string == var_257_int; // 0x67f Eq
	if(var_258_bool == 0) goto Label_1680; // 0x680 JumpB
	var_259_string = ""; // 0x681 PushV
	var_259_string = "Neutral"; // 0x682 MovS
	func_1490(var_41_bool, var_259_string); // 0x683 NEW_2
	var_260_int = 519808; // 0x685 PushI
	SetMessage(var_260_int); // 0x686 TObjFunc
	ClearReplies(); // 0x688 TObjFunc
	var_261_int = 519809; // 0x68a PushI
	var_262_int = -1; // 0x68b PushI
	var_263_int = 20969; // 0x68c PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x68d TObjFunc
	return 0; // 0x68f Return
	
Label_1680:
	var_264_int = 28439; // 0x690 PushI
	var_265_bool = var_40_string == var_264_int; // 0x691 Eq
	if(var_265_bool == 0) goto Label_1698; // 0x692 JumpB
	var_266_string = ""; // 0x693 PushV
	var_266_string = "Neutral"; // 0x694 MovS
	func_1490(var_41_bool, var_266_string); // 0x695 NEW_2
	var_267_int = 527140; // 0x697 PushI
	SetMessage(var_267_int); // 0x698 TObjFunc
	ClearReplies(); // 0x69a TObjFunc
	var_268_int = 527141; // 0x69c PushI
	var_269_int = 28441; // 0x69d PushI
	var_270_int = 28440; // 0x69e PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x69f TObjFunc
	return 0; // 0x6a1 Return
	
Label_1698:
	var_271_int = 28441; // 0x6a2 PushI
	var_272_bool = var_40_string == var_271_int; // 0x6a3 Eq
	if(var_272_bool == 0) goto Label_1721; // 0x6a4 JumpB
	var_273_string = ""; // 0x6a5 PushV
	var_273_string = "Patronage"; // 0x6a6 MovS
	func_1490(var_41_bool, var_273_string); // 0x6a7 NEW_2
	var_274_int = 527142; // 0x6a9 PushI
	SetMessage(var_274_int); // 0x6aa TObjFunc
	ClearReplies(); // 0x6ac TObjFunc
	var_275_int = 519802; // 0x6ae PushI
	var_276_int = 20963; // 0x6af PushI
	var_277_int = 20962; // 0x6b0 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x6b1 TObjFunc
	var_278_int = 519806; // 0x6b3 PushI
	var_279_int = -1; // 0x6b4 PushI
	var_280_int = 20966; // 0x6b5 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x6b6 TObjFunc
	return 0; // 0x6b8 Return
	
Label_1721:
	var_281_int = 20963; // 0x6b9 PushI
	var_282_bool = var_40_string == var_281_int; // 0x6ba Eq
	if(var_282_bool == 0) goto Label_1744; // 0x6bb JumpB
	var_283_string = ""; // 0x6bc PushV
	var_283_string = "Neutral"; // 0x6bd MovS
	func_1490(var_41_bool, var_283_string); // 0x6be NEW_2
	var_284_int = 519803; // 0x6c0 PushI
	SetMessage(var_284_int); // 0x6c1 TObjFunc
	ClearReplies(); // 0x6c3 TObjFunc
	var_285_int = 519804; // 0x6c5 PushI
	var_286_int = -1; // 0x6c6 PushI
	var_287_int = 20964; // 0x6c7 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x6c8 TObjFunc
	var_288_int = 519805; // 0x6ca PushI
	var_289_int = -1; // 0x6cb PushI
	var_290_int = 20965; // 0x6cc PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x6cd TObjFunc
	return 0; // 0x6cf Return
	
Label_1744:
	var_291_int = 20954; // 0x6d0 PushI
	var_292_bool = var_40_string == var_291_int; // 0x6d1 Eq
	if(var_292_bool == 0) goto Label_1762; // 0x6d2 JumpB
	var_293_string = ""; // 0x6d3 PushV
	var_293_string = "Neutral"; // 0x6d4 MovS
	func_1490(var_41_bool, var_293_string); // 0x6d5 NEW_2
	var_294_int = 519794; // 0x6d7 PushI
	SetMessage(var_294_int); // 0x6d8 TObjFunc
	ClearReplies(); // 0x6da TObjFunc
	var_295_int = 519795; // 0x6dc PushI
	var_296_int = 20956; // 0x6dd PushI
	var_297_int = 20955; // 0x6de PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x6df TObjFunc
	return 0; // 0x6e1 Return
	
Label_1762:
	var_298_int = 20956; // 0x6e2 PushI
	var_299_bool = var_40_string == var_298_int; // 0x6e3 Eq
	if(var_299_bool == 0) goto Label_1780; // 0x6e4 JumpB
	var_300_string = ""; // 0x6e5 PushV
	var_300_string = "Neutral"; // 0x6e6 MovS
	func_1490(var_41_bool, var_300_string); // 0x6e7 NEW_2
	var_301_int = 519796; // 0x6e9 PushI
	SetMessage(var_301_int); // 0x6ea TObjFunc
	ClearReplies(); // 0x6ec TObjFunc
	var_302_int = 519797; // 0x6ee PushI
	var_303_int = -1; // 0x6ef PushI
	var_304_int = 20957; // 0x6f0 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x6f1 TObjFunc
	return 0; // 0x6f3 Return
	
Label_1780:
	var_305_int = 20908; // 0x6f4 PushI
	var_306_bool = var_40_string == var_305_int; // 0x6f5 Eq
	if(var_306_bool == 0) goto Label_1803; // 0x6f6 JumpB
	var_307_string = ""; // 0x6f7 PushV
	var_307_string = "Patronage"; // 0x6f8 MovS
	func_1490(var_41_bool, var_307_string); // 0x6f9 NEW_2
	var_308_int = 519754; // 0x6fb PushI
	SetMessage(var_308_int); // 0x6fc TObjFunc
	ClearReplies(); // 0x6fe TObjFunc
	var_309_int = 519755; // 0x700 PushI
	var_310_int = 20910; // 0x701 PushI
	var_311_int = 20909; // 0x702 PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x703 TObjFunc
	var_312_int = 519788; // 0x705 PushI
	var_313_int = 20948; // 0x706 PushI
	var_314_int = 20947; // 0x707 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x708 TObjFunc
	return 0; // 0x70a Return
	
Label_1803:
	var_315_int = 20948; // 0x70b PushI
	var_316_bool = var_40_string == var_315_int; // 0x70c Eq
	if(var_316_bool == 0) goto Label_1821; // 0x70d JumpB
	var_317_string = ""; // 0x70e PushV
	var_317_string = "Anger"; // 0x70f MovS
	func_1490(var_41_bool, var_317_string); // 0x710 NEW_2
	var_318_int = 519789; // 0x712 PushI
	SetMessage(var_318_int); // 0x713 TObjFunc
	ClearReplies(); // 0x715 TObjFunc
	var_319_int = 519790; // 0x717 PushI
	var_320_int = 20910; // 0x718 PushI
	var_321_int = 20949; // 0x719 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x71a TObjFunc
	return 0; // 0x71c Return
	
Label_1821:
	var_322_int = 20910; // 0x71d PushI
	var_323_bool = var_40_string == var_322_int; // 0x71e Eq
	if(var_323_bool == 0) goto Label_1844; // 0x71f JumpB
	var_324_string = ""; // 0x720 PushV
	var_324_string = "Neutral"; // 0x721 MovS
	func_1490(var_41_bool, var_324_string); // 0x722 NEW_2
	var_325_int = 519756; // 0x724 PushI
	SetMessage(var_325_int); // 0x725 TObjFunc
	ClearReplies(); // 0x727 TObjFunc
	var_326_int = 519757; // 0x729 PushI
	var_327_int = 20912; // 0x72a PushI
	var_328_int = 20911; // 0x72b PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x72c TObjFunc
	var_329_int = 519783; // 0x72e PushI
	var_330_int = 20942; // 0x72f PushI
	var_331_int = 20941; // 0x730 PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x731 TObjFunc
	return 0; // 0x733 Return
	
Label_1844:
	var_332_int = 20942; // 0x734 PushI
	var_333_bool = var_40_string == var_332_int; // 0x735 Eq
	if(var_333_bool == 0) goto Label_1862; // 0x736 JumpB
	var_334_string = ""; // 0x737 PushV
	var_334_string = "Neutral"; // 0x738 MovS
	func_1490(var_41_bool, var_334_string); // 0x739 NEW_2
	var_335_int = 519784; // 0x73b PushI
	SetMessage(var_335_int); // 0x73c TObjFunc
	ClearReplies(); // 0x73e TObjFunc
	var_336_int = 519785; // 0x740 PushI
	var_337_int = 20944; // 0x741 PushI
	var_338_int = 20943; // 0x742 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x743 TObjFunc
	return 0; // 0x745 Return
	
Label_1862:
	var_339_int = 20944; // 0x746 PushI
	var_340_bool = var_40_string == var_339_int; // 0x747 Eq
	if(var_340_bool == 0) goto Label_1880; // 0x748 JumpB
	var_341_string = ""; // 0x749 PushV
	var_341_string = "Neutral"; // 0x74a MovS
	func_1490(var_41_bool, var_341_string); // 0x74b NEW_2
	var_342_int = 519786; // 0x74d PushI
	SetMessage(var_342_int); // 0x74e TObjFunc
	ClearReplies(); // 0x750 TObjFunc
	var_343_int = 519787; // 0x752 PushI
	var_344_int = 20912; // 0x753 PushI
	var_345_int = 20945; // 0x754 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x755 TObjFunc
	return 0; // 0x757 Return
	
Label_1880:
	var_346_int = 20912; // 0x758 PushI
	var_347_bool = var_40_string == var_346_int; // 0x759 Eq
	if(var_347_bool == 0) goto Label_1903; // 0x75a JumpB
	var_348_string = ""; // 0x75b PushV
	var_348_string = "Neutral"; // 0x75c MovS
	func_1490(var_41_bool, var_348_string); // 0x75d NEW_2
	var_349_int = 519758; // 0x75f PushI
	SetMessage(var_349_int); // 0x760 TObjFunc
	ClearReplies(); // 0x762 TObjFunc
	var_350_int = 519759; // 0x764 PushI
	var_351_int = 20914; // 0x765 PushI
	var_352_int = 20913; // 0x766 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x767 TObjFunc
	var_353_int = 519782; // 0x769 PushI
	var_354_int = 20920; // 0x76a PushI
	var_355_int = 20939; // 0x76b PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x76c TObjFunc
	return 0; // 0x76e Return
	
Label_1903:
	var_356_int = 20914; // 0x76f PushI
	var_357_bool = var_40_string == var_356_int; // 0x770 Eq
	if(var_357_bool == 0) goto Label_1926; // 0x771 JumpB
	var_358_string = ""; // 0x772 PushV
	var_358_string = "Neutral"; // 0x773 MovS
	func_1490(var_41_bool, var_358_string); // 0x774 NEW_2
	var_359_int = 519760; // 0x776 PushI
	SetMessage(var_359_int); // 0x777 TObjFunc
	ClearReplies(); // 0x779 TObjFunc
	var_360_int = 519761; // 0x77b PushI
	var_361_int = 20916; // 0x77c PushI
	var_362_int = 20915; // 0x77d PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x77e TObjFunc
	var_363_int = 519777; // 0x780 PushI
	var_364_int = 20934; // 0x781 PushI
	var_365_int = 20933; // 0x782 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x783 TObjFunc
	return 0; // 0x785 Return
	
Label_1926:
	var_366_int = 20934; // 0x786 PushI
	var_367_bool = var_40_string == var_366_int; // 0x787 Eq
	if(var_367_bool == 0) goto Label_1944; // 0x788 JumpB
	var_368_string = ""; // 0x789 PushV
	var_368_string = "Patronage"; // 0x78a MovS
	func_1490(var_41_bool, var_368_string); // 0x78b NEW_2
	var_369_int = 519778; // 0x78d PushI
	SetMessage(var_369_int); // 0x78e TObjFunc
	ClearReplies(); // 0x790 TObjFunc
	var_370_int = 519779; // 0x792 PushI
	var_371_int = 20936; // 0x793 PushI
	var_372_int = 20935; // 0x794 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x795 TObjFunc
	return 0; // 0x797 Return
	
Label_1944:
	var_373_int = 20936; // 0x798 PushI
	var_374_bool = var_40_string == var_373_int; // 0x799 Eq
	if(var_374_bool == 0) goto Label_1962; // 0x79a JumpB
	var_375_string = ""; // 0x79b PushV
	var_375_string = "Neutral"; // 0x79c MovS
	func_1490(var_41_bool, var_375_string); // 0x79d NEW_2
	var_376_int = 519780; // 0x79f PushI
	SetMessage(var_376_int); // 0x7a0 TObjFunc
	ClearReplies(); // 0x7a2 TObjFunc
	var_377_int = 519781; // 0x7a4 PushI
	var_378_int = 20916; // 0x7a5 PushI
	var_379_int = 20937; // 0x7a6 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x7a7 TObjFunc
	return 0; // 0x7a9 Return
	
Label_1962:
	var_380_int = 20916; // 0x7aa PushI
	var_381_bool = var_40_string == var_380_int; // 0x7ab Eq
	if(var_381_bool == 0) goto Label_1985; // 0x7ac JumpB
	var_382_string = ""; // 0x7ad PushV
	var_382_string = "Neutral"; // 0x7ae MovS
	func_1490(var_41_bool, var_382_string); // 0x7af NEW_2
	var_383_int = 519762; // 0x7b1 PushI
	SetMessage(var_383_int); // 0x7b2 TObjFunc
	ClearReplies(); // 0x7b4 TObjFunc
	var_384_int = 519763; // 0x7b6 PushI
	var_385_int = 20918; // 0x7b7 PushI
	var_386_int = 20917; // 0x7b8 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x7b9 TObjFunc
	var_387_int = 519773; // 0x7bb PushI
	var_388_int = 20928; // 0x7bc PushI
	var_389_int = 20927; // 0x7bd PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x7be TObjFunc
	return 0; // 0x7c0 Return
	
Label_1985:
	var_390_int = 20928; // 0x7c1 PushI
	var_391_bool = var_40_string == var_390_int; // 0x7c2 Eq
	if(var_391_bool == 0) goto Label_2008; // 0x7c3 JumpB
	var_392_string = ""; // 0x7c4 PushV
	var_392_string = "Patronage"; // 0x7c5 MovS
	func_1490(var_41_bool, var_392_string); // 0x7c6 NEW_2
	var_393_int = 519774; // 0x7c8 PushI
	SetMessage(var_393_int); // 0x7c9 TObjFunc
	ClearReplies(); // 0x7cb TObjFunc
	var_394_int = 519775; // 0x7cd PushI
	var_395_int = 20920; // 0x7ce PushI
	var_396_int = 20929; // 0x7cf PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x7d0 TObjFunc
	var_397_int = 519776; // 0x7d2 PushI
	var_398_int = 20920; // 0x7d3 PushI
	var_399_int = 20931; // 0x7d4 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x7d5 TObjFunc
	return 0; // 0x7d7 Return
	
Label_2008:
	var_400_int = 20918; // 0x7d8 PushI
	var_401_bool = var_40_string == var_400_int; // 0x7d9 Eq
	if(var_401_bool == 0) goto Label_2031; // 0x7da JumpB
	var_402_string = ""; // 0x7db PushV
	var_402_string = "Repentance"; // 0x7dc MovS
	func_1490(var_41_bool, var_402_string); // 0x7dd NEW_2
	var_403_int = 519764; // 0x7df PushI
	SetMessage(var_403_int); // 0x7e0 TObjFunc
	ClearReplies(); // 0x7e2 TObjFunc
	var_404_int = 519765; // 0x7e4 PushI
	var_405_int = 20920; // 0x7e5 PushI
	var_406_int = 20919; // 0x7e6 PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x7e7 TObjFunc
	var_407_int = 527079; // 0x7e9 PushI
	var_408_int = 28377; // 0x7ea PushI
	var_409_int = 28376; // 0x7eb PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x7ec TObjFunc
	return 0; // 0x7ee Return
	
Label_2031:
	var_410_int = 28377; // 0x7ef PushI
	var_411_bool = var_40_string == var_410_int; // 0x7f0 Eq
	if(var_411_bool == 0) goto Label_2049; // 0x7f1 JumpB
	var_412_string = ""; // 0x7f2 PushV
	var_412_string = "Neutral"; // 0x7f3 MovS
	func_1490(var_41_bool, var_412_string); // 0x7f4 NEW_2
	var_413_int = 527080; // 0x7f6 PushI
	SetMessage(var_413_int); // 0x7f7 TObjFunc
	ClearReplies(); // 0x7f9 TObjFunc
	var_414_int = 527081; // 0x7fb PushI
	var_415_int = 20920; // 0x7fc PushI
	var_416_int = 28378; // 0x7fd PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x7fe TObjFunc
	return 0; // 0x800 Return
	
Label_2049:
	var_417_int = 20920; // 0x801 PushI
	var_418_bool = var_40_string == var_417_int; // 0x802 Eq
	if(var_418_bool == 0) goto Label_2067; // 0x803 JumpB
	var_419_string = ""; // 0x804 PushV
	var_419_string = "Neutral"; // 0x805 MovS
	func_1490(var_41_bool, var_419_string); // 0x806 NEW_2
	var_420_int = 519766; // 0x808 PushI
	SetMessage(var_420_int); // 0x809 TObjFunc
	ClearReplies(); // 0x80b TObjFunc
	var_421_int = 519767; // 0x80d PushI
	var_422_int = 20922; // 0x80e PushI
	var_423_int = 20921; // 0x80f PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x810 TObjFunc
	return 0; // 0x812 Return
	
Label_2067:
	var_424_int = 20922; // 0x813 PushI
	var_425_bool = var_40_string == var_424_int; // 0x814 Eq
	if(var_425_bool == 0) goto Label_2085; // 0x815 JumpB
	var_426_string = ""; // 0x816 PushV
	var_426_string = "Neutral"; // 0x817 MovS
	func_1490(var_41_bool, var_426_string); // 0x818 NEW_2
	var_427_int = 519768; // 0x81a PushI
	SetMessage(var_427_int); // 0x81b TObjFunc
	ClearReplies(); // 0x81d TObjFunc
	var_428_int = 519769; // 0x81f PushI
	var_429_int = 20924; // 0x820 PushI
	var_430_int = 20923; // 0x821 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x822 TObjFunc
	return 0; // 0x824 Return
	
Label_2085:
	var_431_int = 20924; // 0x825 PushI
	var_432_bool = var_40_string == var_431_int; // 0x826 Eq
	if(var_432_bool == 0) goto Label_2103; // 0x827 JumpB
	var_433_string = ""; // 0x828 PushV
	var_433_string = "Anger"; // 0x829 MovS
	func_1490(var_41_bool, var_433_string); // 0x82a NEW_2
	var_434_int = 519770; // 0x82c PushI
	SetMessage(var_434_int); // 0x82d TObjFunc
	ClearReplies(); // 0x82f TObjFunc
	var_435_int = 527082; // 0x831 PushI
	var_436_int = 28381; // 0x832 PushI
	var_437_int = 28380; // 0x833 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x834 TObjFunc
	return 0; // 0x836 Return
	
Label_2103:
	var_438_int = 28381; // 0x837 PushI
	var_439_bool = var_40_string == var_438_int; // 0x838 Eq
	if(var_439_bool == 0) goto Label_2126; // 0x839 JumpB
	var_440_string = ""; // 0x83a PushV
	var_440_string = "Neutral"; // 0x83b MovS
	func_1490(var_41_bool, var_440_string); // 0x83c NEW_2
	var_441_int = 527083; // 0x83e PushI
	SetMessage(var_441_int); // 0x83f TObjFunc
	ClearReplies(); // 0x841 TObjFunc
	var_442_int = 519772; // 0x843 PushI
	var_443_int = -1; // 0x844 PushI
	var_444_int = 20926; // 0x845 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x846 TObjFunc
	var_445_int = 527139; // 0x848 PushI
	var_446_int = -1; // 0x849 PushI
	var_447_int = 28438; // 0x84a PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x84b TObjFunc
	return 0; // 0x84d Return
	
Label_2126:
	var_3_string = 1; // 0x84e TMovB
	var_448_bool = 0; // 0x84f PushV
	func_4487(var_448_bool); // 0x850 NEW_2
	if(var_448_bool == 0) goto Label_2134; // 0x852 JumpB
	lshStopAnimation(); // 0x853 Func
	goto Label_2136; // 0x855 Jump
	
Label_2136:
	return 0; // 0x858 Return
	
Label_2134:
	StopAnimation(); // 0x856 Func
	
Label_2138:
	return 0; // 0x85a Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0x8fd PushI
	if(var_42_int == 0) goto Label_2400; // 0x8fe JumpB
	func_4340(); // 0x900 NEW_2
	var_44_int = 21908; // 0x902 PushI
	var_45_bool = var_40_string == var_44_int; // 0x903 Eq
	if(var_45_bool == 0) goto Label_2329; // 0x904 JumpB
	var_46_string = ""; // 0x905 PushV
	var_46_string = "Neutral"; // 0x906 MovS
	func_2278(var_41_bool, var_46_string); // 0x907 NEW_2
	var_63_int = 520698; // 0x909 PushI
	SetMessage(var_63_int); // 0x90a TObjFunc
	ClearReplies(); // 0x90c TObjFunc
	var_64_int = 520699; // 0x90e PushI
	var_65_int = 21910; // 0x90f PushI
	var_66_int = 21909; // 0x910 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0x911 TObjFunc
	var_67_int = 520705; // 0x913 PushI
	var_68_int = 21916; // 0x914 PushI
	var_69_int = 21915; // 0x915 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0x916 TObjFunc
	return 0; // 0x918 Return
	
Label_2329:
	var_70_int = 21916; // 0x919 PushI
	var_71_bool = var_40_string == var_70_int; // 0x91a Eq
	if(var_71_bool == 0) goto Label_2347; // 0x91b JumpB
	var_72_string = ""; // 0x91c PushV
	var_72_string = "Neutral"; // 0x91d MovS
	func_2278(var_41_bool, var_72_string); // 0x91e NEW_2
	var_73_int = 520706; // 0x920 PushI
	SetMessage(var_73_int); // 0x921 TObjFunc
	ClearReplies(); // 0x923 TObjFunc
	var_74_int = 520707; // 0x925 PushI
	var_75_int = 21912; // 0x926 PushI
	var_76_int = 21917; // 0x927 PushI
	AddReply(var_74_int, var_75_int, var_76_int); // 0x928 TObjFunc
	return 0; // 0x92a Return
	
Label_2347:
	var_77_int = 21910; // 0x92b PushI
	var_78_bool = var_40_string == var_77_int; // 0x92c Eq
	if(var_78_bool == 0) goto Label_2365; // 0x92d JumpB
	var_79_string = ""; // 0x92e PushV
	var_79_string = "Neutral"; // 0x92f MovS
	func_2278(var_41_bool, var_79_string); // 0x930 NEW_2
	var_80_int = 520700; // 0x932 PushI
	SetMessage(var_80_int); // 0x933 TObjFunc
	ClearReplies(); // 0x935 TObjFunc
	var_81_int = 520701; // 0x937 PushI
	var_82_int = 21912; // 0x938 PushI
	var_83_int = 21911; // 0x939 PushI
	AddReply(var_81_int, var_82_int, var_83_int); // 0x93a TObjFunc
	return 0; // 0x93c Return
	
Label_2365:
	var_84_int = 21912; // 0x93d PushI
	var_85_bool = var_40_string == var_84_int; // 0x93e Eq
	if(var_85_bool == 0) goto Label_2388; // 0x93f JumpB
	var_86_string = ""; // 0x940 PushV
	var_86_string = "Neutral"; // 0x941 MovS
	func_2278(var_41_bool, var_86_string); // 0x942 NEW_2
	var_87_int = 520702; // 0x944 PushI
	SetMessage(var_87_int); // 0x945 TObjFunc
	ClearReplies(); // 0x947 TObjFunc
	var_88_int = 520703; // 0x949 PushI
	var_89_int = -1; // 0x94a PushI
	var_90_int = 21913; // 0x94b PushI
	AddReply(var_88_int, var_89_int, var_90_int); // 0x94c TObjFunc
	var_91_int = 520704; // 0x94e PushI
	var_92_int = -1; // 0x94f PushI
	var_93_int = 21914; // 0x950 PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x951 TObjFunc
	return 0; // 0x953 Return
	
Label_2388:
	var_3_string = 1; // 0x954 TMovB
	var_94_bool = 0; // 0x955 PushV
	func_4487(var_94_bool); // 0x956 NEW_2
	if(var_94_bool == 0) goto Label_2396; // 0x958 JumpB
	lshStopAnimation(); // 0x959 Func
	goto Label_2398; // 0x95b Jump
	
Label_2398:
	return 0; // 0x95e Return
	
Label_2396:
	StopAnimation(); // 0x95c Func
	
Label_2400:
	return 0; // 0x960 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xa6d PushI
	if(var_42_int == 0) goto Label_3382; // 0xa6e JumpB
	func_4340(); // 0xa70 NEW_2
	var_44_int = 23252; // 0xa72 PushI
	var_45_bool = var_41_bool == var_44_int; // 0xa73 Eq
	if(var_45_bool == 0) goto Label_2682; // 0xa74 JumpB
	var_46_object = Obj(); var_47_object = Obj(); // 0xa75 PushV
	var_46_object = var_1_object; // 0xa76 MovT
	var_47_object = var_0_object; // 0xa77 MovT
	func_4667(); // 0xa78 NEW_2
	
Label_2682:
	var_73_int = 24761; // 0xa7a PushI
	var_74_bool = var_41_bool == var_73_int; // 0xa7b Eq
	if(var_74_bool == 0) goto Label_2690; // 0xa7c JumpB
	var_75_object = Obj(); var_76_object = Obj(); // 0xa7d PushV
	var_75_object = var_1_object; // 0xa7e MovT
	var_76_object = var_0_object; // 0xa7f MovT
	func_4667(); // 0xa80 NEW_2
	
Label_2690:
	var_77_int = 24693; // 0xa82 PushI
	var_78_bool = var_41_bool == var_77_int; // 0xa83 Eq
	if(var_78_bool == 0) goto Label_2698; // 0xa84 JumpB
	var_79_object = Obj(); var_80_object = Obj(); // 0xa85 PushV
	var_79_object = var_1_object; // 0xa86 MovT
	var_80_object = var_0_object; // 0xa87 MovT
	func_4690(); // 0xa88 NEW_2
	
Label_2698:
	var_83_int = 24694; // 0xa8a PushI
	var_84_bool = var_41_bool == var_83_int; // 0xa8b Eq
	if(var_84_bool == 0) goto Label_2706; // 0xa8c JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0xa8d PushV
	var_85_object = var_1_object; // 0xa8e MovT
	var_86_object = var_0_object; // 0xa8f MovT
	func_4696(); // 0xa90 NEW_2
	
Label_2706:
	var_89_int = 24705; // 0xa92 PushI
	var_90_bool = var_41_bool == var_89_int; // 0xa93 Eq
	if(var_90_bool == 0) goto Label_2714; // 0xa94 JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0xa95 PushV
	var_91_object = var_1_object; // 0xa96 MovT
	var_92_object = var_0_object; // 0xa97 MovT
	func_4702(); // 0xa98 NEW_2
	
Label_2714:
	var_95_int = 24714; // 0xa9a PushI
	var_96_bool = var_41_bool == var_95_int; // 0xa9b Eq
	if(var_96_bool == 0) goto Label_2722; // 0xa9c JumpB
	var_97_object = Obj(); var_98_object = Obj(); // 0xa9d PushV
	var_97_object = var_1_object; // 0xa9e MovT
	var_98_object = var_0_object; // 0xa9f MovT
	func_4682(); // 0xaa0 NEW_2
	
Label_2722:
	var_106_int = 24715; // 0xaa2 PushI
	var_107_bool = var_41_bool == var_106_int; // 0xaa3 Eq
	if(var_107_bool == 0) goto Label_2730; // 0xaa4 JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0xaa5 PushV
	var_108_object = var_1_object; // 0xaa6 MovT
	var_109_object = var_0_object; // 0xaa7 MovT
	func_4682(); // 0xaa8 NEW_2
	
Label_2730:
	var_110_int = 24738; // 0xaaa PushI
	var_111_bool = var_41_bool == var_110_int; // 0xaab Eq
	if(var_111_bool == 0) goto Label_2738; // 0xaac JumpB
	var_112_object = Obj(); var_113_object = Obj(); // 0xaad PushV
	var_112_object = var_1_object; // 0xaae MovT
	var_113_object = var_0_object; // 0xaaf MovT
	func_4708(); // 0xab0 NEW_2
	
Label_2738:
	var_116_int = 23251; // 0xab2 PushI
	var_117_bool = var_40_string == var_116_int; // 0xab3 Eq
	if(var_117_bool == 0) goto Label_2867; // 0xab4 JumpB
	var_118_bool = 0; var_119_object = Obj(); // 0xab5 PushV
	var_119_object = var_1_object; // 0xab6 MovT
	func_4807(var_119_object); // 0xab7 NEW_2
	if(var_118_bool == 0) goto Label_2776; // 0xab9 JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0xaba PushV
	var_126_object = var_1_object; // 0xabb MovT
	var_127_object = var_0_object; // 0xabc MovT
	func_4676(); // 0xabd NEW_2
	var_130_string = ""; // 0xabf PushV
	var_130_string = "Neutral"; // 0xac0 MovS
	func_2646(var_41_bool, var_130_string); // 0xac1 NEW_2
	var_147_int = 522082; // 0xac3 PushI
	SetMessage(var_147_int); // 0xac4 TObjFunc
	ClearReplies(); // 0xac6 TObjFunc
	var_148_int = 523463; // 0xac8 PushI
	var_149_int = 24690; // 0xac9 PushI
	var_150_int = 24689; // 0xaca PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0xacb TObjFunc
	var_151_int = 523518; // 0xacd PushI
	var_152_int = 24749; // 0xace PushI
	var_153_int = 24748; // 0xacf PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0xad0 TObjFunc
	var_154_int = 523517; // 0xad2 PushI
	var_155_int = 24750; // 0xad3 PushI
	var_156_int = 24747; // 0xad4 PushI
	AddReply(var_154_int, var_155_int, var_156_int); // 0xad5 TObjFunc
	return 0; // 0xad7 Return
	
Label_2776:
	var_157_string = ""; // 0xad8 PushV
	var_157_string = "Neutral"; // 0xad9 MovS
	func_2646(var_41_bool, var_157_string); // 0xada NEW_2
	var_158_int = 522085; // 0xadc PushI
	SetMessage(var_158_int); // 0xadd TObjFunc
	ClearReplies(); // 0xadf TObjFunc
	var_159_bool = 0; // 0xae1 PushV
	var_159_bool = 0; // 0xae2 MovB
	var_160_bool = 0; var_161_object = Obj(); // 0xae3 PushV
	var_161_object = var_1_object; // 0xae4 MovT
	func_4819(var_161_object); // 0xae5 NEW_2
	if(var_160_bool == 0) goto Label_2798; // 0xae7 JumpB
	var_166_bool = 0; var_167_object = Obj(); // 0xae8 PushV
	var_167_object = var_1_object; // 0xae9 MovT
	func_4831(var_167_object); // 0xaea NEW_2
	if(var_166_bool == 0) goto Label_2798; // 0xaec JumpB
	var_159_bool = 1; // 0xaed MovB
	
Label_2798:
	if(var_159_bool == 0) goto Label_2804; // 0xaee JumpB
	var_172_int = 523467; // 0xaef PushI
	var_173_int = 24695; // 0xaf0 PushI
	var_174_int = 24693; // 0xaf1 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0xaf2 TObjFunc
	
Label_2804:
	var_175_bool = 0; // 0xaf4 PushV
	var_175_bool = 0; // 0xaf5 MovB
	var_176_bool = 0; var_177_object = Obj(); // 0xaf6 PushV
	var_177_object = var_1_object; // 0xaf7 MovT
	func_4819(var_177_object); // 0xaf8 NEW_2
	if(var_176_bool == 0) goto Label_2817; // 0xafa JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0xafb PushV
	var_179_object = var_1_object; // 0xafc MovT
	func_4843(var_179_object); // 0xafd NEW_2
	if(var_178_bool == 0) goto Label_2817; // 0xaff JumpB
	var_175_bool = 1; // 0xb00 MovB
	
Label_2817:
	if(var_175_bool == 0) goto Label_2823; // 0xb01 JumpB
	var_184_int = 523468; // 0xb02 PushI
	var_185_int = 24699; // 0xb03 PushI
	var_186_int = 24694; // 0xb04 PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0xb05 TObjFunc
	
Label_2823:
	var_187_bool = 0; // 0xb07 PushV
	var_187_bool = 0; // 0xb08 MovB
	var_188_bool = 0; var_189_object = Obj(); // 0xb09 PushV
	var_189_object = var_1_object; // 0xb0a MovT
	func_4819(var_189_object); // 0xb0b NEW_2
	if(var_188_bool == 0) goto Label_2836; // 0xb0d JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0xb0e PushV
	var_191_object = var_1_object; // 0xb0f MovT
	func_4855(var_191_object); // 0xb10 NEW_2
	if(var_190_bool == 0) goto Label_2836; // 0xb12 JumpB
	var_187_bool = 1; // 0xb13 MovB
	
Label_2836:
	if(var_187_bool == 0) goto Label_2842; // 0xb14 JumpB
	var_196_int = 523479; // 0xb15 PushI
	var_197_int = 24706; // 0xb16 PushI
	var_198_int = 24705; // 0xb17 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0xb18 TObjFunc
	
Label_2842:
	var_199_bool = 0; // 0xb1a PushV
	var_199_bool = 0; // 0xb1b MovB
	var_200_bool = 0; var_201_object = Obj(); // 0xb1c PushV
	var_201_object = var_1_object; // 0xb1d MovT
	func_4819(var_201_object); // 0xb1e NEW_2
	if(var_200_bool == 0) goto Label_2855; // 0xb20 JumpB
	var_202_bool = 0; var_203_object = Obj(); // 0xb21 PushV
	var_203_object = var_1_object; // 0xb22 MovT
	func_4867(var_203_object); // 0xb23 NEW_2
	if(var_202_bool == 0) goto Label_2855; // 0xb25 JumpB
	var_199_bool = 1; // 0xb26 MovB
	
Label_2855:
	if(var_199_bool == 0) goto Label_2861; // 0xb27 JumpB
	var_208_int = 523508; // 0xb28 PushI
	var_209_int = 24739; // 0xb29 PushI
	var_210_int = 24738; // 0xb2a PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0xb2b TObjFunc
	
Label_2861:
	var_211_int = 522086; // 0xb2d PushI
	var_212_int = -1; // 0xb2e PushI
	var_213_int = 23255; // 0xb2f PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0xb30 TObjFunc
	return 0; // 0xb32 Return
	
Label_2867:
	var_214_int = 24739; // 0xb33 PushI
	var_215_bool = var_40_string == var_214_int; // 0xb34 Eq
	if(var_215_bool == 0) goto Label_2890; // 0xb35 JumpB
	var_216_string = ""; // 0xb36 PushV
	var_216_string = "Neutral"; // 0xb37 MovS
	func_2646(var_41_bool, var_216_string); // 0xb38 NEW_2
	var_217_int = 523509; // 0xb3a PushI
	SetMessage(var_217_int); // 0xb3b TObjFunc
	ClearReplies(); // 0xb3d TObjFunc
	var_218_int = 523510; // 0xb3f PushI
	var_219_int = 24742; // 0xb40 PushI
	var_220_int = 24740; // 0xb41 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0xb42 TObjFunc
	var_221_int = 523511; // 0xb44 PushI
	var_222_int = -1; // 0xb45 PushI
	var_223_int = 24741; // 0xb46 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0xb47 TObjFunc
	return 0; // 0xb49 Return
	
Label_2890:
	var_224_int = 24742; // 0xb4a PushI
	var_225_bool = var_40_string == var_224_int; // 0xb4b Eq
	if(var_225_bool == 0) goto Label_2913; // 0xb4c JumpB
	var_226_string = ""; // 0xb4d PushV
	var_226_string = "Neutral"; // 0xb4e MovS
	func_2646(var_41_bool, var_226_string); // 0xb4f NEW_2
	var_227_int = 523512; // 0xb51 PushI
	SetMessage(var_227_int); // 0xb52 TObjFunc
	ClearReplies(); // 0xb54 TObjFunc
	var_228_int = 523513; // 0xb56 PushI
	var_229_int = -1; // 0xb57 PushI
	var_230_int = 24743; // 0xb58 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0xb59 TObjFunc
	var_231_int = 523514; // 0xb5b PushI
	var_232_int = 24745; // 0xb5c PushI
	var_233_int = 24744; // 0xb5d PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0xb5e TObjFunc
	return 0; // 0xb60 Return
	
Label_2913:
	var_234_int = 24745; // 0xb61 PushI
	var_235_bool = var_40_string == var_234_int; // 0xb62 Eq
	if(var_235_bool == 0) goto Label_2931; // 0xb63 JumpB
	var_236_string = ""; // 0xb64 PushV
	var_236_string = "Neutral"; // 0xb65 MovS
	func_2646(var_41_bool, var_236_string); // 0xb66 NEW_2
	var_237_int = 523515; // 0xb68 PushI
	SetMessage(var_237_int); // 0xb69 TObjFunc
	ClearReplies(); // 0xb6b TObjFunc
	var_238_int = 523516; // 0xb6d PushI
	var_239_int = -1; // 0xb6e PushI
	var_240_int = 24746; // 0xb6f PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0xb70 TObjFunc
	return 0; // 0xb72 Return
	
Label_2931:
	var_241_int = 24706; // 0xb73 PushI
	var_242_bool = var_40_string == var_241_int; // 0xb74 Eq
	if(var_242_bool == 0) goto Label_2954; // 0xb75 JumpB
	var_243_string = ""; // 0xb76 PushV
	var_243_string = "Neutral"; // 0xb77 MovS
	func_2646(var_41_bool, var_243_string); // 0xb78 NEW_2
	var_244_int = 523480; // 0xb7a PushI
	SetMessage(var_244_int); // 0xb7b TObjFunc
	ClearReplies(); // 0xb7d TObjFunc
	var_245_int = 523481; // 0xb7f PushI
	var_246_int = 24709; // 0xb80 PushI
	var_247_int = 24707; // 0xb81 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0xb82 TObjFunc
	var_248_int = 523482; // 0xb84 PushI
	var_249_int = 24709; // 0xb85 PushI
	var_250_int = 24708; // 0xb86 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xb87 TObjFunc
	return 0; // 0xb89 Return
	
Label_2954:
	var_251_int = 24709; // 0xb8a PushI
	var_252_bool = var_40_string == var_251_int; // 0xb8b Eq
	if(var_252_bool == 0) goto Label_2977; // 0xb8c JumpB
	var_253_string = ""; // 0xb8d PushV
	var_253_string = "Neutral"; // 0xb8e MovS
	func_2646(var_41_bool, var_253_string); // 0xb8f NEW_2
	var_254_int = 523483; // 0xb91 PushI
	SetMessage(var_254_int); // 0xb92 TObjFunc
	ClearReplies(); // 0xb94 TObjFunc
	var_255_int = 523484; // 0xb96 PushI
	var_256_int = 24713; // 0xb97 PushI
	var_257_int = 24710; // 0xb98 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xb99 TObjFunc
	var_258_int = 523485; // 0xb9b PushI
	var_259_int = 24713; // 0xb9c PushI
	var_260_int = 24711; // 0xb9d PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0xb9e TObjFunc
	return 0; // 0xba0 Return
	
Label_2977:
	var_261_int = 24713; // 0xba1 PushI
	var_262_bool = var_40_string == var_261_int; // 0xba2 Eq
	if(var_262_bool == 0) goto Label_3000; // 0xba3 JumpB
	var_263_string = ""; // 0xba4 PushV
	var_263_string = "Neutral"; // 0xba5 MovS
	func_2646(var_41_bool, var_263_string); // 0xba6 NEW_2
	var_264_int = 523487; // 0xba8 PushI
	SetMessage(var_264_int); // 0xba9 TObjFunc
	ClearReplies(); // 0xbab TObjFunc
	var_265_int = 523488; // 0xbad PushI
	var_266_int = -1; // 0xbae PushI
	var_267_int = 24714; // 0xbaf PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0xbb0 TObjFunc
	var_268_int = 523489; // 0xbb2 PushI
	var_269_int = -1; // 0xbb3 PushI
	var_270_int = 24715; // 0xbb4 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0xbb5 TObjFunc
	return 0; // 0xbb7 Return
	
Label_3000:
	var_271_int = 24699; // 0xbb8 PushI
	var_272_bool = var_40_string == var_271_int; // 0xbb9 Eq
	if(var_272_bool == 0) goto Label_3018; // 0xbba JumpB
	var_273_string = ""; // 0xbbb PushV
	var_273_string = "Neutral"; // 0xbbc MovS
	func_2646(var_41_bool, var_273_string); // 0xbbd NEW_2
	var_274_int = 523473; // 0xbbf PushI
	SetMessage(var_274_int); // 0xbc0 TObjFunc
	ClearReplies(); // 0xbc2 TObjFunc
	var_275_int = 523474; // 0xbc4 PushI
	var_276_int = 24701; // 0xbc5 PushI
	var_277_int = 24700; // 0xbc6 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0xbc7 TObjFunc
	return 0; // 0xbc9 Return
	
Label_3018:
	var_278_int = 24701; // 0xbca PushI
	var_279_bool = var_40_string == var_278_int; // 0xbcb Eq
	if(var_279_bool == 0) goto Label_3036; // 0xbcc JumpB
	var_280_string = ""; // 0xbcd PushV
	var_280_string = "Patronage"; // 0xbce MovS
	func_2646(var_41_bool, var_280_string); // 0xbcf NEW_2
	var_281_int = 523475; // 0xbd1 PushI
	SetMessage(var_281_int); // 0xbd2 TObjFunc
	ClearReplies(); // 0xbd4 TObjFunc
	var_282_int = 523476; // 0xbd6 PushI
	var_283_int = 24703; // 0xbd7 PushI
	var_284_int = 24702; // 0xbd8 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xbd9 TObjFunc
	return 0; // 0xbdb Return
	
Label_3036:
	var_285_int = 24703; // 0xbdc PushI
	var_286_bool = var_40_string == var_285_int; // 0xbdd Eq
	if(var_286_bool == 0) goto Label_3059; // 0xbde JumpB
	var_287_string = ""; // 0xbdf PushV
	var_287_string = "Neutral"; // 0xbe0 MovS
	func_2646(var_41_bool, var_287_string); // 0xbe1 NEW_2
	var_288_int = 523477; // 0xbe3 PushI
	SetMessage(var_288_int); // 0xbe4 TObjFunc
	ClearReplies(); // 0xbe6 TObjFunc
	var_289_int = 523490; // 0xbe8 PushI
	var_290_int = 24720; // 0xbe9 PushI
	var_291_int = 24718; // 0xbea PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xbeb TObjFunc
	var_292_int = 523491; // 0xbed PushI
	var_293_int = -1; // 0xbee PushI
	var_294_int = 24719; // 0xbef PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xbf0 TObjFunc
	return 0; // 0xbf2 Return
	
Label_3059:
	var_295_int = 24720; // 0xbf3 PushI
	var_296_bool = var_40_string == var_295_int; // 0xbf4 Eq
	if(var_296_bool == 0) goto Label_3077; // 0xbf5 JumpB
	var_297_string = ""; // 0xbf6 PushV
	var_297_string = "Neutral"; // 0xbf7 MovS
	func_2646(var_41_bool, var_297_string); // 0xbf8 NEW_2
	var_298_int = 523492; // 0xbfa PushI
	SetMessage(var_298_int); // 0xbfb TObjFunc
	ClearReplies(); // 0xbfd TObjFunc
	var_299_int = 523493; // 0xbff PushI
	var_300_int = -1; // 0xc00 PushI
	var_301_int = 24721; // 0xc01 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xc02 TObjFunc
	return 0; // 0xc04 Return
	
Label_3077:
	var_302_int = 24695; // 0xc05 PushI
	var_303_bool = var_40_string == var_302_int; // 0xc06 Eq
	if(var_303_bool == 0) goto Label_3095; // 0xc07 JumpB
	var_304_string = ""; // 0xc08 PushV
	var_304_string = "Neutral"; // 0xc09 MovS
	func_2646(var_41_bool, var_304_string); // 0xc0a NEW_2
	var_305_int = 523469; // 0xc0c PushI
	SetMessage(var_305_int); // 0xc0d TObjFunc
	ClearReplies(); // 0xc0f TObjFunc
	var_306_int = 523470; // 0xc11 PushI
	var_307_int = 24697; // 0xc12 PushI
	var_308_int = 24696; // 0xc13 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xc14 TObjFunc
	return 0; // 0xc16 Return
	
Label_3095:
	var_309_int = 24697; // 0xc17 PushI
	var_310_bool = var_40_string == var_309_int; // 0xc18 Eq
	if(var_310_bool == 0) goto Label_3113; // 0xc19 JumpB
	var_311_string = ""; // 0xc1a PushV
	var_311_string = "Repentance"; // 0xc1b MovS
	func_2646(var_41_bool, var_311_string); // 0xc1c NEW_2
	var_312_int = 523471; // 0xc1e PushI
	SetMessage(var_312_int); // 0xc1f TObjFunc
	ClearReplies(); // 0xc21 TObjFunc
	var_313_int = 523472; // 0xc23 PushI
	var_314_int = 24704; // 0xc24 PushI
	var_315_int = 24698; // 0xc25 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xc26 TObjFunc
	return 0; // 0xc28 Return
	
Label_3113:
	var_316_int = 24704; // 0xc29 PushI
	var_317_bool = var_40_string == var_316_int; // 0xc2a Eq
	if(var_317_bool == 0) goto Label_3136; // 0xc2b JumpB
	var_318_string = ""; // 0xc2c PushV
	var_318_string = "Neutral"; // 0xc2d MovS
	func_2646(var_41_bool, var_318_string); // 0xc2e NEW_2
	var_319_int = 523478; // 0xc30 PushI
	SetMessage(var_319_int); // 0xc31 TObjFunc
	ClearReplies(); // 0xc33 TObjFunc
	var_320_int = 523494; // 0xc35 PushI
	var_321_int = 24723; // 0xc36 PushI
	var_322_int = 24722; // 0xc37 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xc38 TObjFunc
	var_323_int = 523501; // 0xc3a PushI
	var_324_int = 24730; // 0xc3b PushI
	var_325_int = 24729; // 0xc3c PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0xc3d TObjFunc
	return 0; // 0xc3f Return
	
Label_3136:
	var_326_int = 24730; // 0xc40 PushI
	var_327_bool = var_40_string == var_326_int; // 0xc41 Eq
	if(var_327_bool == 0) goto Label_3154; // 0xc42 JumpB
	var_328_string = ""; // 0xc43 PushV
	var_328_string = "Neutral"; // 0xc44 MovS
	func_2646(var_41_bool, var_328_string); // 0xc45 NEW_2
	var_329_int = 523502; // 0xc47 PushI
	SetMessage(var_329_int); // 0xc48 TObjFunc
	ClearReplies(); // 0xc4a TObjFunc
	var_330_int = 523503; // 0xc4c PushI
	var_331_int = 24723; // 0xc4d PushI
	var_332_int = 24731; // 0xc4e PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xc4f TObjFunc
	return 0; // 0xc51 Return
	
Label_3154:
	var_333_int = 24723; // 0xc52 PushI
	var_334_bool = var_40_string == var_333_int; // 0xc53 Eq
	if(var_334_bool == 0) goto Label_3177; // 0xc54 JumpB
	var_335_string = ""; // 0xc55 PushV
	var_335_string = "Anger"; // 0xc56 MovS
	func_2646(var_41_bool, var_335_string); // 0xc57 NEW_2
	var_336_int = 523495; // 0xc59 PushI
	SetMessage(var_336_int); // 0xc5a TObjFunc
	ClearReplies(); // 0xc5c TObjFunc
	var_337_int = 523499; // 0xc5e PushI
	var_338_int = 24728; // 0xc5f PushI
	var_339_int = 24727; // 0xc60 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0xc61 TObjFunc
	var_340_int = 523496; // 0xc63 PushI
	var_341_int = 24725; // 0xc64 PushI
	var_342_int = 24724; // 0xc65 PushI
	AddReply(var_340_int, var_341_int, var_342_int); // 0xc66 TObjFunc
	return 0; // 0xc68 Return
	
Label_3177:
	var_343_int = 24725; // 0xc69 PushI
	var_344_bool = var_40_string == var_343_int; // 0xc6a Eq
	if(var_344_bool == 0) goto Label_3195; // 0xc6b JumpB
	var_345_string = ""; // 0xc6c PushV
	var_345_string = "Repentance"; // 0xc6d MovS
	func_2646(var_41_bool, var_345_string); // 0xc6e NEW_2
	var_346_int = 523497; // 0xc70 PushI
	SetMessage(var_346_int); // 0xc71 TObjFunc
	ClearReplies(); // 0xc73 TObjFunc
	var_347_int = 523498; // 0xc75 PushI
	var_348_int = 24728; // 0xc76 PushI
	var_349_int = 24726; // 0xc77 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0xc78 TObjFunc
	return 0; // 0xc7a Return
	
Label_3195:
	var_350_int = 24728; // 0xc7b PushI
	var_351_bool = var_40_string == var_350_int; // 0xc7c Eq
	if(var_351_bool == 0) goto Label_3213; // 0xc7d JumpB
	var_352_string = ""; // 0xc7e PushV
	var_352_string = "Neutral"; // 0xc7f MovS
	func_2646(var_41_bool, var_352_string); // 0xc80 NEW_2
	var_353_int = 523500; // 0xc82 PushI
	SetMessage(var_353_int); // 0xc83 TObjFunc
	ClearReplies(); // 0xc85 TObjFunc
	var_354_int = 523504; // 0xc87 PushI
	var_355_int = 24735; // 0xc88 PushI
	var_356_int = 24734; // 0xc89 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0xc8a TObjFunc
	return 0; // 0xc8c Return
	
Label_3213:
	var_357_int = 24735; // 0xc8d PushI
	var_358_bool = var_40_string == var_357_int; // 0xc8e Eq
	if(var_358_bool == 0) goto Label_3236; // 0xc8f JumpB
	var_359_string = ""; // 0xc90 PushV
	var_359_string = "Neutral"; // 0xc91 MovS
	func_2646(var_41_bool, var_359_string); // 0xc92 NEW_2
	var_360_int = 523505; // 0xc94 PushI
	SetMessage(var_360_int); // 0xc95 TObjFunc
	ClearReplies(); // 0xc97 TObjFunc
	var_361_int = 523506; // 0xc99 PushI
	var_362_int = -1; // 0xc9a PushI
	var_363_int = 24736; // 0xc9b PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0xc9c TObjFunc
	var_364_int = 523507; // 0xc9e PushI
	var_365_int = -1; // 0xc9f PushI
	var_366_int = 24737; // 0xca0 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0xca1 TObjFunc
	return 0; // 0xca3 Return
	
Label_3236:
	var_367_int = 24750; // 0xca4 PushI
	var_368_bool = var_40_string == var_367_int; // 0xca5 Eq
	if(var_368_bool == 0) goto Label_3259; // 0xca6 JumpB
	var_369_string = ""; // 0xca7 PushV
	var_369_string = "Neutral"; // 0xca8 MovS
	func_2646(var_41_bool, var_369_string); // 0xca9 NEW_2
	var_370_int = 523520; // 0xcab PushI
	SetMessage(var_370_int); // 0xcac TObjFunc
	ClearReplies(); // 0xcae TObjFunc
	var_371_int = 523521; // 0xcb0 PushI
	var_372_int = 24752; // 0xcb1 PushI
	var_373_int = 24751; // 0xcb2 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0xcb3 TObjFunc
	var_374_int = 523527; // 0xcb5 PushI
	var_375_int = 24690; // 0xcb6 PushI
	var_376_int = 24759; // 0xcb7 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0xcb8 TObjFunc
	return 0; // 0xcba Return
	
Label_3259:
	var_377_int = 24752; // 0xcbb PushI
	var_378_bool = var_40_string == var_377_int; // 0xcbc Eq
	if(var_378_bool == 0) goto Label_3277; // 0xcbd JumpB
	var_379_string = ""; // 0xcbe PushV
	var_379_string = "Neutral"; // 0xcbf MovS
	func_2646(var_41_bool, var_379_string); // 0xcc0 NEW_2
	var_380_int = 523522; // 0xcc2 PushI
	SetMessage(var_380_int); // 0xcc3 TObjFunc
	ClearReplies(); // 0xcc5 TObjFunc
	var_381_int = 523523; // 0xcc7 PushI
	var_382_int = 24754; // 0xcc8 PushI
	var_383_int = 24753; // 0xcc9 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0xcca TObjFunc
	return 0; // 0xccc Return
	
Label_3277:
	var_384_int = 24754; // 0xccd PushI
	var_385_bool = var_40_string == var_384_int; // 0xcce Eq
	if(var_385_bool == 0) goto Label_3295; // 0xccf JumpB
	var_386_string = ""; // 0xcd0 PushV
	var_386_string = "Neutral"; // 0xcd1 MovS
	func_2646(var_41_bool, var_386_string); // 0xcd2 NEW_2
	var_387_int = 523524; // 0xcd4 PushI
	SetMessage(var_387_int); // 0xcd5 TObjFunc
	ClearReplies(); // 0xcd7 TObjFunc
	var_388_int = 523525; // 0xcd9 PushI
	var_389_int = 24690; // 0xcda PushI
	var_390_int = 24755; // 0xcdb PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0xcdc TObjFunc
	return 0; // 0xcde Return
	
Label_3295:
	var_391_int = 24749; // 0xcdf PushI
	var_392_bool = var_40_string == var_391_int; // 0xce0 Eq
	if(var_392_bool == 0) goto Label_3313; // 0xce1 JumpB
	var_393_string = ""; // 0xce2 PushV
	var_393_string = "Neutral"; // 0xce3 MovS
	func_2646(var_41_bool, var_393_string); // 0xce4 NEW_2
	var_394_int = 523519; // 0xce6 PushI
	SetMessage(var_394_int); // 0xce7 TObjFunc
	ClearReplies(); // 0xce9 TObjFunc
	var_395_int = 523526; // 0xceb PushI
	var_396_int = 24750; // 0xcec PushI
	var_397_int = 24757; // 0xced PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0xcee TObjFunc
	return 0; // 0xcf0 Return
	
Label_3313:
	var_398_int = 24690; // 0xcf1 PushI
	var_399_bool = var_40_string == var_398_int; // 0xcf2 Eq
	if(var_399_bool == 0) goto Label_3347; // 0xcf3 JumpB
	var_400_string = ""; // 0xcf4 PushV
	var_400_string = "Neutral"; // 0xcf5 MovS
	func_2646(var_41_bool, var_400_string); // 0xcf6 NEW_2
	var_401_int = 523464; // 0xcf8 PushI
	SetMessage(var_401_int); // 0xcf9 TObjFunc
	ClearReplies(); // 0xcfb TObjFunc
	var_402_bool = 0; var_403_object = Obj(); // 0xcfd PushV
	var_403_object = var_1_object; // 0xcfe MovT
	func_4795(var_403_object); // 0xcff NEW_2
	var_408_bool = var_402_bool == 0; // 0xd01 Not
	if(var_408_bool == 0) goto Label_3336; // 0xd02 JumpB
	var_409_int = 523465; // 0xd03 PushI
	var_410_int = 24692; // 0xd04 PushI
	var_411_int = 24691; // 0xd05 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0xd06 TObjFunc
	
Label_3336:
	var_412_bool = 0; var_413_object = Obj(); // 0xd08 PushV
	var_413_object = var_1_object; // 0xd09 MovT
	func_4795(var_413_object); // 0xd0a NEW_2
	if(var_412_bool == 0) goto Label_3346; // 0xd0c JumpB
	var_414_int = 522084; // 0xd0d PushI
	var_415_int = -1; // 0xd0e PushI
	var_416_int = 23253; // 0xd0f PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0xd10 TObjFunc
	
Label_3346:
	return 0; // 0xd12 Return
	
Label_3347:
	var_417_int = 24692; // 0xd13 PushI
	var_418_bool = var_40_string == var_417_int; // 0xd14 Eq
	if(var_418_bool == 0) goto Label_3370; // 0xd15 JumpB
	var_419_string = ""; // 0xd16 PushV
	var_419_string = "Repentance"; // 0xd17 MovS
	func_2646(var_41_bool, var_419_string); // 0xd18 NEW_2
	var_420_int = 523466; // 0xd1a PushI
	SetMessage(var_420_int); // 0xd1b TObjFunc
	ClearReplies(); // 0xd1d TObjFunc
	var_421_int = 522083; // 0xd1f PushI
	var_422_int = -1; // 0xd20 PushI
	var_423_int = 23252; // 0xd21 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0xd22 TObjFunc
	var_424_int = 523528; // 0xd24 PushI
	var_425_int = -1; // 0xd25 PushI
	var_426_int = 24761; // 0xd26 PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0xd27 TObjFunc
	return 0; // 0xd29 Return
	
Label_3370:
	var_3_string = 1; // 0xd2a TMovB
	var_427_bool = 0; // 0xd2b PushV
	func_4487(var_427_bool); // 0xd2c NEW_2
	if(var_427_bool == 0) goto Label_3378; // 0xd2e JumpB
	lshStopAnimation(); // 0xd2f Func
	goto Label_3380; // 0xd31 Jump
	
Label_3380:
	return 0; // 0xd34 Return
	
Label_3378:
	StopAnimation(); // 0xd32 Func
	
Label_3382:
	return 0; // 0xd36 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xdd9 PushI
	if(var_42_int == 0) goto Label_3585; // 0xdda JumpB
	func_4340(); // 0xddc NEW_2
	var_44_int = 31281; // 0xdde PushI
	var_45_bool = var_40_string == var_44_int; // 0xddf Eq
	if(var_45_bool == 0) goto Label_3573; // 0xde0 JumpB
	var_46_string = ""; // 0xde1 PushV
	var_46_string = "Neutral"; // 0xde2 MovS
	func_3522(var_41_bool, var_46_string); // 0xde3 NEW_2
	var_63_int = 529898; // 0xde5 PushI
	SetMessage(var_63_int); // 0xde6 TObjFunc
	ClearReplies(); // 0xde8 TObjFunc
	var_64_int = 529899; // 0xdea PushI
	var_65_int = -1; // 0xdeb PushI
	var_66_int = 31282; // 0xdec PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xded TObjFunc
	var_67_int = 529900; // 0xdef PushI
	var_68_int = -1; // 0xdf0 PushI
	var_69_int = 31283; // 0xdf1 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xdf2 TObjFunc
	return 0; // 0xdf4 Return
	
Label_3573:
	var_3_string = 1; // 0xdf5 TMovB
	var_70_bool = 0; // 0xdf6 PushV
	func_4487(var_70_bool); // 0xdf7 NEW_2
	if(var_70_bool == 0) goto Label_3581; // 0xdf9 JumpB
	lshStopAnimation(); // 0xdfa Func
	goto Label_3583; // 0xdfc Jump
	
Label_3583:
	return 0; // 0xdff Return
	
Label_3581:
	StopAnimation(); // 0xdfd Func
	
Label_3585:
	return 0; // 0xe01 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool)
{
	var_42_int = 1; // 0xea4 PushI
	if(var_42_int == 0) goto Label_3788; // 0xea5 JumpB
	func_4340(); // 0xea7 NEW_2
	var_44_int = 31285; // 0xea9 PushI
	var_45_bool = var_40_string == var_44_int; // 0xeaa Eq
	if(var_45_bool == 0) goto Label_3776; // 0xeab JumpB
	var_46_string = ""; // 0xeac PushV
	var_46_string = "Neutral"; // 0xead MovS
	func_3725(var_41_bool, var_46_string); // 0xeae NEW_2
	var_63_int = 529902; // 0xeb0 PushI
	SetMessage(var_63_int); // 0xeb1 TObjFunc
	ClearReplies(); // 0xeb3 TObjFunc
	var_64_int = 529903; // 0xeb5 PushI
	var_65_int = -1; // 0xeb6 PushI
	var_66_int = 31286; // 0xeb7 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xeb8 TObjFunc
	var_67_int = 529904; // 0xeba PushI
	var_68_int = -1; // 0xebb PushI
	var_69_int = 31287; // 0xebc PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xebd TObjFunc
	return 0; // 0xebf Return
	
Label_3776:
	var_3_string = 1; // 0xec0 TMovB
	var_70_bool = 0; // 0xec1 PushV
	func_4487(var_70_bool); // 0xec2 NEW_2
	if(var_70_bool == 0) goto Label_3784; // 0xec4 JumpB
	lshStopAnimation(); // 0xec5 Func
	goto Label_3786; // 0xec7 Jump
	
Label_3786:
	return 0; // 0xeca Return
	
Label_3784:
	StopAnimation(); // 0xec8 Func
	
Label_3788:
	return 0; // 0xecc Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int)
{
	var_42_int = 1; // 0xf6f PushI
	if(var_42_int == 0) goto Label_3991; // 0xf70 JumpB
	func_4340(); // 0xf72 NEW_2
	var_44_int = 42563; // 0xf74 PushI
	var_45_bool = var_40_int == var_44_int; // 0xf75 Eq
	if(var_45_bool == 0) goto Label_3979; // 0xf76 JumpB
	var_46_string = ""; // 0xf77 PushV
	var_46_string = "Neutral"; // 0xf78 MovS
	func_3928(var_41_int, var_46_string); // 0xf79 NEW_2
	var_63_int = 540554; // 0xf7b PushI
	SetMessage(var_63_int); // 0xf7c TObjFunc
	ClearReplies(); // 0xf7e TObjFunc
	var_64_int = 540555; // 0xf80 PushI
	var_65_int = -1; // 0xf81 PushI
	var_66_int = 42564; // 0xf82 PushI
	AddReply(var_64_int, var_65_int, var_66_int); // 0xf83 TObjFunc
	var_67_int = 540794; // 0xf85 PushI
	var_68_int = -1; // 0xf86 PushI
	var_69_int = 42843; // 0xf87 PushI
	AddReply(var_67_int, var_68_int, var_69_int); // 0xf88 TObjFunc
	return 0; // 0xf8a Return
	
Label_3979:
	var_3_string = 1; // 0xf8b TMovB
	var_70_bool = 0; // 0xf8c PushV
	func_4487(var_70_bool); // 0xf8d NEW_2
	if(var_70_bool == 0) goto Label_3987; // 0xf8f JumpB
	lshStopAnimation(); // 0xf90 Func
	goto Label_3989; // 0xf92 Jump
	
Label_3989:
	return 0; // 0xf95 Return
	
Label_3987:
	StopAnimation(); // 0xf93 Func
	
Label_3991:
	return 0; // 0xf97 Return
}


task_16_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	Hold(); // 0xfb0 Func
	return 0; // 0xfb2 Return
}


task_16_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	StopGroup0(); // 0xfb3 Func
	return 0; // 0xfb5 Return
}


task_16_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object)
{
	var_41_bool = 0; var_42_bool = 0; // 0xfb6 PushV
	IsOverrideActive(var_42_bool); // 0xfb7 Func
	var_43_bool = var_42_bool == 0; // 0xfb9 Not
	if(var_43_bool == 0) goto Label_4037; // 0xfba JumpB
	EventDisable(0); // 0xfbb EventDisable
	var_44_bool = 0; var_45_object = Obj(); // 0xfbc PushV
	var_45_object = var_40_object; // 0xfbd Mov
	func_4055(var_45_object); // 0xfbe NEW_2
	EventEnable(0); // 0xfc0 EventEnable
	var_58_object = Obj(); // 0xfc1 PushV
	var_58_object = var_40_object; // 0xfc2 Mov
	func_5200(var_58_object); // 0xfc3 NEW_2
	
Label_4037:
	return 2; // 0xfc5 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool)
{
	var_40_bool = GlobalVars[1]; // 0xf98 PushGE
	var_40_bool = 0; // 0xf99 MovB
	GlobalVars[1] = var_40_bool; // 0xf9a PopGE
	func_3999(); // 0xf9c NEW_2
	return 0; // 0xf9e Return
}


func_0(var_0_object, var_521_int, var_522_object)
{
	var_524_object = Obj(); var_525_bool = 0; var_526_int = 0; var_527_bool = 0; var_528_object = Obj(); var_529_bool = 0; var_530_int = 0; var_531_bool = 0; // 0x0 PushV
	var_0_object = var_522_object; // 0x1 TMov
	var_532_bool = 0; var_533_object = Obj(); var_534_float = 0; // 0x2 PushV
	var_533_object = var_522_object; // 0x3 Mov
	var_534_float = 70.0; // 0x4 MovF
	func_4069(var_533_object, var_534_float); // 0x5 NEW_2
	var_535_bool = var_532_bool == 0; // 0x7 Not
	if(var_535_bool == 0) goto Label_11; // 0x8 JumpB
	var_521_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_528_object); // 0xb Func
	var_536_int = 0; // 0xd PushV
	func_4481(var_536_int); // 0xe NEW_2
	SetNPCName(var_536_int); // 0x10 ObjFunc
	var_537_int = 0; // 0x12 PushV
	func_4479(var_537_int); // 0x13 NEW_2
	SetNPCDescription(var_537_int); // 0x15 ObjFunc
	var_538_string = ""; // 0x17 PushV
	func_4483(var_538_string); // 0x18 NEW_2
	SetPhoto(var_538_string); // 0x1a ObjFunc
	var_539_string = ""; // 0x1c PushV
	func_4485(var_539_string); // 0x1d NEW_2
	SetPhoto2(var_539_string); // 0x1f ObjFunc
	var_540_int = 0; // 0x21 PushV
	func_5183(var_540_int); // 0x22 NEW_2
	SetPlayerName(var_540_int); // 0x24 ObjFunc
	var_530_int = -1; // 0x26 MovI
	IsOverrideActive(var_529_bool); // 0x27 Func
	var_541_bool = var_529_bool; // 0x29 Push
	if(var_541_bool == 0) goto Label_45; // 0x2a JumpB
	var_521_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_528_object); // 0x2d Func
	var_542_bool = 0; var_543_object = Obj(); // 0x2f PushV
	var_544_object = Obj(); // 0x30 PushV
	func_4347(var_544_object); // 0x31 NEW_2
	var_543_object = var_544_object; // 0x32 Mov
	func_4156(var_542_bool, var_543_object); // 0x34 NEW_2
	var_545_object = Obj(); var_546_object = Obj(); // 0x36 PushV
	var_545_object = var_522_object; // 0x37 Mov
	var_546_object = var_528_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_547_object, var_548_object, var_549_string, var_550_bool, var_545_object, var_546_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_531_bool); // 0x3d ObjFunc
	
Label_63:
	var_583_bool = var_531_bool == 0; // 0x3f Not
	if(var_583_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_531_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_584_object = Obj(); // 0x46 PushV
	var_584_object = var_522_object; // 0x47 Mov
	func_4138(); // 0x48 NEW_2
	StopDialog(var_528_object); // 0x4a Func
	GetReturnValue(var_530_int); // 0x4c ObjFunc
	var_521_int = var_530_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_4353(var_99_cvector, var_100_cvector)
{
	var_102_float = 0; var_103_float = 0; // 0x1101 PushV
	var_104_int = var_100_cvector | var_100_cvector; // 0x1102 Or
	var_103_float = sqrt(var_104_int); // 0x1103 Sqrt2
	var_105_float = 0.0; // 0x1104 PushF
	var_106_bool = var_103_float < var_105_float; // 0x1105 LT
	if(var_106_bool == 0) goto Label_4361; // 0x1106 JumpB
	var_99_cvector = CVector(0.0, 0.0, 0.0); // 0x1107 MovV
	return 2; // 0x1108 Return
	
Label_4361:
	var_99_cvector = var_100_cvector / var_100_cvector; // 0x1109 Div2
	return 2; // 0x110a Return
}


func_3586(var_0_object, var_360_int, var_361_object)
{
	var_363_object = Obj(); var_364_bool = 0; var_365_int = 0; var_366_bool = 0; var_367_object = Obj(); var_368_bool = 0; var_369_int = 0; var_370_bool = 0; // 0xe02 PushV
	var_0_object = var_361_object; // 0xe03 TMov
	var_371_bool = 0; var_372_object = Obj(); var_373_float = 0; // 0xe04 PushV
	var_372_object = var_361_object; // 0xe05 Mov
	var_373_float = 70.0; // 0xe06 MovF
	func_4069(var_372_object, var_373_float); // 0xe07 NEW_2
	var_374_bool = var_371_bool == 0; // 0xe09 Not
	if(var_374_bool == 0) goto Label_3597; // 0xe0a JumpB
	var_360_int = -2; // 0xe0b MovI
	return 8; // 0xe0c Return
	
Label_3597:
	CreateDialog(var_367_object); // 0xe0d Func
	var_375_int = 0; // 0xe0f PushV
	func_4481(var_375_int); // 0xe10 NEW_2
	SetNPCName(var_375_int); // 0xe12 ObjFunc
	var_376_int = 0; // 0xe14 PushV
	func_4479(var_376_int); // 0xe15 NEW_2
	SetNPCDescription(var_376_int); // 0xe17 ObjFunc
	var_377_string = ""; // 0xe19 PushV
	func_4483(var_377_string); // 0xe1a NEW_2
	SetPhoto(var_377_string); // 0xe1c ObjFunc
	var_378_string = ""; // 0xe1e PushV
	func_4485(var_378_string); // 0xe1f NEW_2
	SetPhoto2(var_378_string); // 0xe21 ObjFunc
	var_379_int = 0; // 0xe23 PushV
	func_5183(var_379_int); // 0xe24 NEW_2
	SetPlayerName(var_379_int); // 0xe26 ObjFunc
	var_369_int = -1; // 0xe28 MovI
	IsOverrideActive(var_368_bool); // 0xe29 Func
	var_380_bool = var_368_bool; // 0xe2b Push
	if(var_380_bool == 0) goto Label_3631; // 0xe2c JumpB
	var_360_int = -2; // 0xe2d MovI
	return 8; // 0xe2e Return
	
Label_3631:
	DoDialog(var_367_object); // 0xe2f Func
	var_381_bool = 0; var_382_object = Obj(); // 0xe31 PushV
	var_383_object = Obj(); // 0xe32 PushV
	func_4347(var_383_object); // 0xe33 NEW_2
	var_382_object = var_383_object; // 0xe34 Mov
	func_4156(var_381_bool, var_382_object); // 0xe36 NEW_2
	var_384_object = Obj(); var_385_object = Obj(); // 0xe38 PushV
	var_384_object = var_361_object; // 0xe39 Mov
	var_385_object = var_367_object; // 0xe3a Mov
	TaskCall(13); // 0xe3b TaskCall
	func_3667(var_386_object, var_387_object, var_388_string, var_389_bool, var_384_object, var_385_object); // 0xe3c NEW_2
	TaskReturn(); // 0xe3d TaskReturn
	IsDialogEnd(var_370_bool); // 0xe3f ObjFunc
	
Label_3649:
	var_414_bool = var_370_bool == 0; // 0xe41 Not
	if(var_414_bool == 0) goto Label_3656; // 0xe42 JumpB
	sync(); // 0xe43 Func
	IsDialogEnd(var_370_bool); // 0xe45 ObjFunc
	goto Label_3649; // 0xe47 Jump
	
Label_3656:
	var_415_object = Obj(); // 0xe48 PushV
	var_415_object = var_361_object; // 0xe49 Mov
	func_4138(); // 0xe4a NEW_2
	StopDialog(var_367_object); // 0xe4c Func
	GetReturnValue(var_369_int); // 0xe4e ObjFunc
	var_360_int = var_369_int; // 0xe50 Mov
	return 8; // 0xe51 Return
}


func_4867(var_794_bool)
{
	var_796_int = 0; var_797_string = ""; // 0x1304 PushV
	var_797_string = "oob11BigVlad5"; // 0x1305 MovS
	func_4363(var_796_int, var_797_string); // 0x1306 NEW_2
	var_798_int = 0; // 0x1308 PushI
	var_799_bool = var_796_int == var_798_int; // 0x1309 Eq
	if(var_799_bool == 0) goto Label_4877; // 0x130a JumpB
	var_794_bool = 1; // 0x130b MovB
	return 0; // 0x130c Return
	
Label_4877:
	var_794_bool = 0; // 0x130d MovB
	return 0; // 0x130e Return
}


func_4614()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x1206 PushV
	var_50_string = "b2q01"; // 0x1207 PushS
	var_51_int = 1; // 0x1208 PushI
	SetVariable(var_50_string, var_51_int); // 0x1209 Func
	var_52_object = Obj(); // 0x120b PushV
	func_5133(var_52_object); // 0x120c NEW_2
	var_49_object = var_52_object; // 0x120d Mov
	var_59_string = "b2q01BigVladGotoAlexandr"; // 0x120f PushS
	var_60_string = "pt_map_alexandr"; // 0x1210 PushS
	var_61_int = 1; // 0x1211 PushI
	var_62_int = 519625; // 0x1212 PushI
	var_63_float = 0; // 0x1213 PushV
	func_4440(var_63_float); // 0x1214 NEW_2
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0x1216 ObjFunc
	var_66_string = "b2q01BigVladGotoKaterina"; // 0x1218 PushS
	var_67_string = "pt_map_katerina"; // 0x1219 PushS
	var_68_int = 1; // 0x121a PushI
	var_69_int = 519626; // 0x121b PushI
	var_70_float = 0; // 0x121c PushV
	func_4440(var_70_float); // 0x121d NEW_2
	AddMark(var_66_string, var_67_string, var_68_int, var_69_int, var_70_float); // 0x121f ObjFunc
	var_71_string = "b2q01BigVladGotoMladVlad"; // 0x1221 PushS
	var_72_string = "pt_map_mladvlad"; // 0x1222 PushS
	var_73_int = 3; // 0x1223 PushI
	var_74_int = 519624; // 0x1224 PushI
	var_75_float = 0; // 0x1225 PushV
	func_4440(var_75_float); // 0x1226 NEW_2
	AddMark(var_71_string, var_72_string, var_73_int, var_74_int, var_75_float); // 0x1228 ObjFunc
	var_76_string = "b2q01BigVladGotoDanko"; // 0x122a PushS
	var_77_string = "pt_map_eva"; // 0x122b PushS
	var_78_int = 3; // 0x122c PushI
	var_79_int = 530806; // 0x122d PushI
	var_80_float = 0; // 0x122e PushV
	func_4440(var_80_float); // 0x122f NEW_2
	AddMark(var_76_string, var_77_string, var_78_int, var_79_int, var_80_float); // 0x1231 ObjFunc
	func_5014(); // 0x1234 NEW_2
	func_5027(); // 0x1237 NEW_2
	return 2; // 0x1239 Return
}


func_4363(var_452_int, var_453_string)
{
	var_454_int = 0; var_455_int = 0; // 0x110b PushV
	GetVariable(var_453_string, var_455_int); // 0x110c Func
	var_452_int = var_455_int; // 0x110e Mov
	return 2; // 0x110f Return
}


func_5133(var_52_object)
{
	var_53_object = Obj(); var_54_object = Obj(); var_55_object = Obj(); var_56_object = Obj(); // 0x140d PushV
	GetMainOutdoorScene(var_55_object); // 0x140e Func
	var_57_bool = var_55_object == 0; // 0x1410 NullEq
	if(var_57_bool == 0) goto Label_5144; // 0x1411 JumpB
	var_58_string = "Can't find main outdoor scene"; // 0x1412 PushS
	Trace(var_58_string); // 0x1413 Func
	var_56_object = 0; // 0x1415 SetNull
	var_52_object = var_56_object; // 0x1416 Mov
	return 4; // 0x1417 Return
	
Label_5144:
	GetMap(var_56_object); // 0x1418 ObjFunc
	var_52_object = var_56_object; // 0x141a Mov
	return 4; // 0x141b Return
}


func_4879(var_618_bool)
{
	var_620_int = 0; var_621_string = ""; // 0x1310 PushV
	var_621_string = "oob3BigVlad1"; // 0x1311 MovS
	func_4363(var_620_int, var_621_string); // 0x1312 NEW_2
	var_622_int = 0; // 0x1314 PushI
	var_623_bool = var_620_int == var_622_int; // 0x1315 Eq
	if(var_623_bool == 0) goto Label_4889; // 0x1316 JumpB
	var_618_bool = 1; // 0x1317 MovB
	return 0; // 0x1318 Return
	
Label_4889:
	var_618_bool = 0; // 0x1319 MovB
	return 0; // 0x131a Return
}


func_4368(var_140_string, var_141_bool)
{
	var_142_object = Obj(); var_143_object = Obj(); // 0x1110 PushV
	FindActor(var_143_object, var_140_string); // 0x1111 Func
	var_144_bool = var_143_object == 0; // 0x1113 Not
	if(var_144_bool == 0) goto Label_4380; // 0x1114 JumpB
	var_145_string = "Door "; // 0x1115 PushS
	var_146_int = var_145_string + var_140_string; // 0x1116 Add
	var_147_string = " not found"; // 0x1117 PushS
	var_148_int = var_146_int + var_147_string; // 0x1118 Add
	Trace(var_148_int); // 0x1119 Func
	goto Label_4383; // 0x111b Jump
	
Label_4383:
	return 2; // 0x111f Return
	
Label_4380:
	var_149_string = "locked"; // 0x111c PushS
	SetProperty(var_149_string, var_141_bool); // 0x111d ObjFunc
}


func_1296(var_0_object, var_419_int, var_420_object)
{
	var_422_object = Obj(); var_423_bool = 0; var_424_int = 0; var_425_bool = 0; var_426_object = Obj(); var_427_bool = 0; var_428_int = 0; var_429_bool = 0; // 0x510 PushV
	var_0_object = var_420_object; // 0x511 TMov
	var_430_bool = 0; var_431_object = Obj(); var_432_float = 0; // 0x512 PushV
	var_431_object = var_420_object; // 0x513 Mov
	var_432_float = 70.0; // 0x514 MovF
	func_4069(var_431_object, var_432_float); // 0x515 NEW_2
	var_433_bool = var_430_bool == 0; // 0x517 Not
	if(var_433_bool == 0) goto Label_1307; // 0x518 JumpB
	var_419_int = -2; // 0x519 MovI
	return 8; // 0x51a Return
	
Label_1307:
	CreateDialog(var_426_object); // 0x51b Func
	var_434_int = 0; // 0x51d PushV
	func_4481(var_434_int); // 0x51e NEW_2
	SetNPCName(var_434_int); // 0x520 ObjFunc
	var_435_int = 0; // 0x522 PushV
	func_4479(var_435_int); // 0x523 NEW_2
	SetNPCDescription(var_435_int); // 0x525 ObjFunc
	var_436_string = ""; // 0x527 PushV
	func_4483(var_436_string); // 0x528 NEW_2
	SetPhoto(var_436_string); // 0x52a ObjFunc
	var_437_string = ""; // 0x52c PushV
	func_4485(var_437_string); // 0x52d NEW_2
	SetPhoto2(var_437_string); // 0x52f ObjFunc
	var_438_int = 0; // 0x531 PushV
	func_5183(var_438_int); // 0x532 NEW_2
	SetPlayerName(var_438_int); // 0x534 ObjFunc
	var_428_int = -1; // 0x536 MovI
	IsOverrideActive(var_427_bool); // 0x537 Func
	var_439_bool = var_427_bool; // 0x539 Push
	if(var_439_bool == 0) goto Label_1341; // 0x53a JumpB
	var_419_int = -2; // 0x53b MovI
	return 8; // 0x53c Return
	
Label_1341:
	DoDialog(var_426_object); // 0x53d Func
	var_440_bool = 0; var_441_object = Obj(); // 0x53f PushV
	var_442_object = Obj(); // 0x540 PushV
	func_4347(var_442_object); // 0x541 NEW_2
	var_441_object = var_442_object; // 0x542 Mov
	func_4156(var_440_bool, var_441_object); // 0x544 NEW_2
	var_443_object = Obj(); var_444_object = Obj(); // 0x546 PushV
	var_443_object = var_420_object; // 0x547 Mov
	var_444_object = var_426_object; // 0x548 Mov
	TaskCall(5); // 0x549 TaskCall
	func_1377(var_445_object, var_446_object, var_447_string, var_448_bool, var_443_object, var_444_object); // 0x54a NEW_2
	TaskReturn(); // 0x54b TaskReturn
	IsDialogEnd(var_429_bool); // 0x54d ObjFunc
	
Label_1359:
	var_517_bool = var_429_bool == 0; // 0x54f Not
	if(var_517_bool == 0) goto Label_1366; // 0x550 JumpB
	sync(); // 0x551 Func
	IsDialogEnd(var_429_bool); // 0x553 ObjFunc
	goto Label_1359; // 0x555 Jump
	
Label_1366:
	var_518_object = Obj(); // 0x556 PushV
	var_518_object = var_420_object; // 0x557 Mov
	func_4138(); // 0x558 NEW_2
	StopDialog(var_426_object); // 0x55a Func
	GetReturnValue(var_428_int); // 0x55c ObjFunc
	var_419_int = var_428_int; // 0x55e Mov
	return 8; // 0x55f Return
}


func_4891(var_657_bool)
{
	var_659_int = 0; var_660_string = ""; // 0x131c PushV
	var_660_string = "b3q01"; // 0x131d MovS
	func_4363(var_659_int, var_660_string); // 0x131e NEW_2
	var_661_int = 0; // 0x1320 PushI
	var_662_bool = var_659_int == var_661_int; // 0x1321 Eq
	if(var_662_bool == 0) goto Label_4901; // 0x1322 JumpB
	var_657_bool = 1; // 0x1323 MovB
	return 0; // 0x1324 Return
	
Label_4901:
	var_657_bool = 0; // 0x1325 MovB
	return 0; // 0x1326 Return
}


func_5150(var_104_object, var_105_string, var_106_float)
{
	var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0); var_110_object = Obj(); var_111_bool = 0; var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_object = Obj(); var_115_bool = 0; // 0x141e PushV
	GetMainOutdoorScene(var_114_object); // 0x141f Func
	var_116_bool = var_114_object == 0; // 0x1421 NullEq
	if(var_116_bool == 0) goto Label_5159; // 0x1422 JumpB
	var_117_string = "Can't find main outdoor scene"; // 0x1423 PushS
	Trace(var_117_string); // 0x1424 Func
	return 8; // 0x1426 Return
	
Label_5159:
	GetLocator(var_105_string, var_115_bool, var_112_cvector, var_113_cvector); // 0x1427 ObjFunc
	var_118_bool = var_115_bool == 0; // 0x1429 Not
	if(var_118_bool == 0) goto Label_5169; // 0x142a JumpB
	var_119_string = "Warning: outdoor scene locator "; // 0x142b PushS
	var_120_int = var_119_string + var_105_string; // 0x142c Add
	var_121_string = " doesnt exist"; // 0x142d PushS
	var_122_int = var_120_int + var_121_string; // 0x142e Add
	Trace(var_122_int); // 0x142f Func
	
Label_5169:
	GetMap(var_104_object); // 0x1431 ObjFunc
	var_123_bool = var_104_object == 0; // 0x1433 NullEq
	if(var_123_bool == 0) goto Label_5177; // 0x1434 JumpB
	var_124_string = "Can't find map"; // 0x1435 PushS
	Trace(var_124_string); // 0x1436 Func
	return 8; // 0x1438 Return
	
Label_5177:
	var_125_float = GetByIndex(var_112_cvector, 0); // 0x1439 PushE
	var_126_float = GetByIndex(var_112_cvector, 2); // 0x143a PushE
	SetMapParams(var_125_float, var_126_float, var_106_float); // 0x143b ObjFunc
	return 8; // 0x143d Return
}


func_3870(var_0_object, var_1_object, var_2_object, var_3_string, var_832_object, var_833_object)
{
	var_0_object = var_833_object; // 0xf1f TMov
	var_1_object = var_832_object; // 0xf20 TMov
	var_3_string = 0; // 0xf21 TMovB
	var_838_int = 1; // 0xf22 PushI
	if(var_838_int == 0) goto Label_3898; // 0xf23 JumpB
	var_839_string = ""; // 0xf24 PushV
	var_839_string = "Neutral"; // 0xf25 MovS
	func_3928(var_833_object, var_839_string); // 0xf26 NEW_2
	var_847_int = 540554; // 0xf28 PushI
	SetMessage(var_847_int); // 0xf29 TObjFunc
	ClearReplies(); // 0xf2b TObjFunc
	var_848_int = 540555; // 0xf2d PushI
	var_849_int = -1; // 0xf2e PushI
	var_850_int = 42564; // 0xf2f PushI
	AddReply(var_848_int, var_849_int, var_850_int); // 0xf30 TObjFunc
	var_851_int = 540794; // 0xf32 PushI
	var_852_int = -1; // 0xf33 PushI
	var_853_int = 42843; // 0xf34 PushI
	AddReply(var_851_int, var_852_int, var_853_int); // 0xf35 TObjFunc
	goto Label_3898; // 0xf37 Jump
	
Label_3898:
	var_854_bool = 0; // 0xf3a PushV
	func_4487(var_854_bool); // 0xf3b NEW_2
	if(var_854_bool == 0) goto Label_3913; // 0xf3d JumpB
	
Label_3902:
	lshWaitForAnimEnd(); // 0xf3e Func
	var_855_string = var_3_string; // 0xf40 PushT
	if(var_855_string == 0) goto Label_3907; // 0xf41 JumpB
	goto Label_3912; // 0xf42 Jump
	
Label_3912:
	goto Label_3927; // 0xf48 Jump
	
Label_3927:
	return 0; // 0xf57 Return
	
Label_3907:
	var_856_string = ""; // 0xf43 PushV
	var_856_string = var_2_object; // 0xf44 MovT
	func_4294(var_856_string); // 0xf45 NEW_2
	goto Label_3902; // 0xf47 Jump
	
Label_3913:
	var_857_string = "all"; // 0xf49 PushS
	var_858_string = "idle"; // 0xf4a PushS
	PlayAnimation(var_857_string, var_858_string); // 0xf4b Func
	
Label_3917:
	WaitForAnimEnd(); // 0xf4d Func
	var_859_string = var_3_string; // 0xf4f PushT
	if(var_859_string == 0) goto Label_3922; // 0xf50 JumpB
	goto Label_3927; // 0xf51 Jump
	
Label_3922:
	var_860_string = "all"; // 0xf52 PushS
	var_861_string = "idle"; // 0xf53 PushS
	PlayAnimation(var_860_string, var_861_string); // 0xf54 Func
	goto Label_3917; // 0xf56 Jump
}


func_4385(var_182_int, var_183_int)
{
	var_184_object = Obj(); var_185_object = Obj(); // 0x1121 PushV
	CreateIntVector(var_185_object); // 0x1122 Func
	add(var_182_int); // 0x1124 ObjFunc
	add(var_183_int); // 0x1126 ObjFunc
	var_186_int = 3; // 0x1128 PushI
	SendWorldWndMessage(var_186_int, var_185_object); // 0x1129 Func
	return 2; // 0x112b Return
}


func_4903(var_666_bool)
{
	var_668_int = 0; var_669_string = ""; // 0x1328 PushV
	var_669_string = "b3q01"; // 0x1329 MovS
	func_4363(var_668_int, var_669_string); // 0x132a NEW_2
	var_670_int = 3; // 0x132c PushI
	var_671_bool = var_668_int == var_670_int; // 0x132d Eq
	if(var_671_bool == 0) goto Label_4913; // 0x132e JumpB
	var_666_bool = 1; // 0x132f MovB
	return 0; // 0x1330 Return
	
Label_4913:
	var_666_bool = 0; // 0x1331 MovB
	return 0; // 0x1332 Return
}


func_4138()
{
	var_279_bool = 0; var_280_bool = 0; // 0x102a PushV
	var_281_bool = 1; // 0x102b PushB
	CameraSwitchToNormal(var_281_bool); // 0x102c Func
	var_282_bool = 0; // 0x102e PushV
	func_4487(var_282_bool); // 0x102f NEW_2
	if(var_282_bool == 0) goto Label_4147; // 0x1031 JumpB
	goto Label_4155; // 0x1032 Jump
	
Label_4155:
	return 2; // 0x103b Return
	
Label_4147:
	var_283_string = "head"; // 0x1033 PushS
	HasAnimationTrack(var_280_bool, var_283_string); // 0x1034 Func
	var_284_bool = var_280_bool; // 0x1036 Push
	if(var_284_bool == 0) goto Label_4155; // 0x1037 JumpB
	var_285_string = "head"; // 0x1038 PushS
	UnlookAsync(var_285_string); // 0x1039 Func
}


func_4397(var_168_object, var_169_int)
{
	var_171_int = 0; var_172_int = 0; // 0x112d PushV
	var_173_object = Obj(); var_174_string = ""; var_175_int = 0; // 0x112e PushV
	var_173_object = var_168_object; // 0x112f Mov
	var_174_string = "money"; // 0x1130 MovS
	var_175_int = var_169_int; // 0x1131 Mov
	func_4038(var_174_string, var_175_int); // 0x1132 NEW_2
	var_179_int = 0; // 0x1134 PushI
	var_180_bool = var_169_int > var_179_int; // 0x1135 GT
	if(var_180_bool == 0) goto Label_4415; // 0x1136 JumpB
	var_181_string = "Money"; // 0x1137 PushS
	GetInvItemByName(var_172_int, var_181_string); // 0x1138 Func
	var_182_int = 0; var_183_int = 0; // 0x113a PushV
	var_182_int = var_172_int; // 0x113b Mov
	var_183_int = var_169_int; // 0x113c Mov
	func_4385(var_182_int, var_183_int); // 0x113d NEW_2
	
Label_4415:
	return 2; // 0x113f Return
}


func_560(var_0_object, var_1_object, var_2_object, var_3_string, var_611_object, var_612_object)
{
	var_0_object = var_612_object; // 0x231 TMov
	var_1_object = var_611_object; // 0x232 TMov
	var_3_string = 0; // 0x233 TMovB
	var_617_int = 1; // 0x234 PushI
	if(var_617_int == 0) goto Label_638; // 0x235 JumpB
	var_618_bool = 0; var_619_object = Obj(); // 0x236 PushV
	var_619_object = var_1_object; // 0x237 MovT
	func_4879(var_619_object); // 0x238 NEW_2
	if(var_618_bool == 0) goto Label_601; // 0x23a JumpB
	var_624_object = Obj(); var_625_object = Obj(); // 0x23b PushV
	var_624_object = var_1_object; // 0x23c MovT
	var_625_object = var_0_object; // 0x23d MovT
	func_4515(); // 0x23e NEW_2
	var_628_object = Obj(); var_629_object = Obj(); // 0x240 PushV
	var_628_object = var_1_object; // 0x241 MovT
	var_629_object = var_0_object; // 0x242 MovT
	func_4714(); // 0x243 NEW_2
	var_632_string = ""; // 0x245 PushV
	var_632_string = "Neutral"; // 0x246 MovS
	func_668(var_612_object, var_632_string); // 0x247 NEW_2
	var_640_int = 519215; // 0x249 PushI
	SetMessage(var_640_int); // 0x24a TObjFunc
	ClearReplies(); // 0x24c TObjFunc
	var_641_int = 519216; // 0x24e PushI
	var_642_int = 29206; // 0x24f PushI
	var_643_int = 20358; // 0x250 PushI
	AddReply(var_641_int, var_642_int, var_643_int); // 0x251 TObjFunc
	var_644_int = 519240; // 0x253 PushI
	var_645_int = 20385; // 0x254 PushI
	var_646_int = 20384; // 0x255 PushI
	AddReply(var_644_int, var_645_int, var_646_int); // 0x256 TObjFunc
	goto Label_638; // 0x258 Jump
	
Label_638:
	var_647_bool = 0; // 0x27e PushV
	func_4487(var_647_bool); // 0x27f NEW_2
	if(var_647_bool == 0) goto Label_653; // 0x281 JumpB
	
Label_642:
	lshWaitForAnimEnd(); // 0x282 Func
	var_648_string = var_3_string; // 0x284 PushT
	if(var_648_string == 0) goto Label_647; // 0x285 JumpB
	goto Label_652; // 0x286 Jump
	
Label_652:
	goto Label_667; // 0x28c Jump
	
Label_667:
	return 0; // 0x29b Return
	
Label_647:
	var_649_string = ""; // 0x287 PushV
	var_649_string = var_2_object; // 0x288 MovT
	func_4294(var_649_string); // 0x289 NEW_2
	goto Label_642; // 0x28b Jump
	
Label_653:
	var_650_string = "all"; // 0x28d PushS
	var_651_string = "idle"; // 0x28e PushS
	PlayAnimation(var_650_string, var_651_string); // 0x28f Func
	
Label_657:
	WaitForAnimEnd(); // 0x291 Func
	var_652_string = var_3_string; // 0x293 PushT
	if(var_652_string == 0) goto Label_662; // 0x294 JumpB
	goto Label_667; // 0x295 Jump
	
Label_662:
	var_653_string = "all"; // 0x296 PushS
	var_654_string = "idle"; // 0x297 PushS
	PlayAnimation(var_653_string, var_654_string); // 0x298 Func
	goto Label_657; // 0x29a Jump
	
Label_601:
	var_655_string = ""; // 0x259 PushV
	var_655_string = "Neutral"; // 0x25a MovS
	func_668(var_612_object, var_655_string); // 0x25b NEW_2
	var_656_int = 519247; // 0x25d PushI
	SetMessage(var_656_int); // 0x25e TObjFunc
	ClearReplies(); // 0x260 TObjFunc
	var_657_bool = 0; var_658_object = Obj(); // 0x262 PushV
	var_658_object = var_1_object; // 0x263 MovT
	func_4891(var_658_object); // 0x264 NEW_2
	if(var_657_bool == 0) goto Label_620; // 0x266 JumpB
	var_663_int = 519628; // 0x267 PushI
	var_664_int = 20811; // 0x268 PushI
	var_665_int = 20810; // 0x269 PushI
	AddReply(var_663_int, var_664_int, var_665_int); // 0x26a TObjFunc
	
Label_620:
	var_666_bool = 0; var_667_object = Obj(); // 0x26c PushV
	var_667_object = var_1_object; // 0x26d MovT
	func_4903(var_667_object); // 0x26e NEW_2
	if(var_666_bool == 0) goto Label_630; // 0x270 JumpB
	var_672_int = 519248; // 0x271 PushI
	var_673_int = 20399; // 0x272 PushI
	var_674_int = 20397; // 0x273 PushI
	AddReply(var_672_int, var_673_int, var_674_int); // 0x274 TObjFunc
	
Label_630:
	var_675_int = 519249; // 0x276 PushI
	var_676_int = -1; // 0x277 PushI
	var_677_int = 20398; // 0x278 PushI
	AddReply(var_675_int, var_676_int, var_677_int); // 0x279 TObjFunc
	goto Label_638; // 0x27b Jump
}


func_4915(var_450_bool)
{
	var_452_int = 0; var_453_string = ""; // 0x1334 PushV
	var_453_string = "oob1BigVlad1"; // 0x1335 MovS
	func_4363(var_452_int, var_453_string); // 0x1336 NEW_2
	var_456_int = 0; // 0x1338 PushI
	var_457_bool = var_452_int == var_456_int; // 0x1339 Eq
	if(var_457_bool == 0) goto Label_4925; // 0x133a JumpB
	var_450_bool = 1; // 0x133b MovB
	return 0; // 0x133c Return
	
Label_4925:
	var_450_bool = 0; // 0x133d MovB
	return 0; // 0x133e Return
}


func_3383(var_0_object, var_302_int, var_303_object)
{
	var_305_object = Obj(); var_306_bool = 0; var_307_int = 0; var_308_bool = 0; var_309_object = Obj(); var_310_bool = 0; var_311_int = 0; var_312_bool = 0; // 0xd37 PushV
	var_0_object = var_303_object; // 0xd38 TMov
	var_313_bool = 0; var_314_object = Obj(); var_315_float = 0; // 0xd39 PushV
	var_314_object = var_303_object; // 0xd3a Mov
	var_315_float = 70.0; // 0xd3b MovF
	func_4069(var_314_object, var_315_float); // 0xd3c NEW_2
	var_316_bool = var_313_bool == 0; // 0xd3e Not
	if(var_316_bool == 0) goto Label_3394; // 0xd3f JumpB
	var_302_int = -2; // 0xd40 MovI
	return 8; // 0xd41 Return
	
Label_3394:
	CreateDialog(var_309_object); // 0xd42 Func
	var_317_int = 0; // 0xd44 PushV
	func_4481(var_317_int); // 0xd45 NEW_2
	SetNPCName(var_317_int); // 0xd47 ObjFunc
	var_318_int = 0; // 0xd49 PushV
	func_4479(var_318_int); // 0xd4a NEW_2
	SetNPCDescription(var_318_int); // 0xd4c ObjFunc
	var_319_string = ""; // 0xd4e PushV
	func_4483(var_319_string); // 0xd4f NEW_2
	SetPhoto(var_319_string); // 0xd51 ObjFunc
	var_320_string = ""; // 0xd53 PushV
	func_4485(var_320_string); // 0xd54 NEW_2
	SetPhoto2(var_320_string); // 0xd56 ObjFunc
	var_321_int = 0; // 0xd58 PushV
	func_5183(var_321_int); // 0xd59 NEW_2
	SetPlayerName(var_321_int); // 0xd5b ObjFunc
	var_311_int = -1; // 0xd5d MovI
	IsOverrideActive(var_310_bool); // 0xd5e Func
	var_322_bool = var_310_bool; // 0xd60 Push
	if(var_322_bool == 0) goto Label_3428; // 0xd61 JumpB
	var_302_int = -2; // 0xd62 MovI
	return 8; // 0xd63 Return
	
Label_3428:
	DoDialog(var_309_object); // 0xd64 Func
	var_323_bool = 0; var_324_object = Obj(); // 0xd66 PushV
	var_325_object = Obj(); // 0xd67 PushV
	func_4347(var_325_object); // 0xd68 NEW_2
	var_324_object = var_325_object; // 0xd69 Mov
	func_4156(var_323_bool, var_324_object); // 0xd6b NEW_2
	var_326_object = Obj(); var_327_object = Obj(); // 0xd6d PushV
	var_326_object = var_303_object; // 0xd6e Mov
	var_327_object = var_309_object; // 0xd6f Mov
	TaskCall(11); // 0xd70 TaskCall
	func_3464(var_328_object, var_329_object, var_330_string, var_331_bool, var_326_object, var_327_object); // 0xd71 NEW_2
	TaskReturn(); // 0xd72 TaskReturn
	IsDialogEnd(var_312_bool); // 0xd74 ObjFunc
	
Label_3446:
	var_356_bool = var_312_bool == 0; // 0xd76 Not
	if(var_356_bool == 0) goto Label_3453; // 0xd77 JumpB
	sync(); // 0xd78 Func
	IsDialogEnd(var_312_bool); // 0xd7a ObjFunc
	goto Label_3446; // 0xd7c Jump
	
Label_3453:
	var_357_object = Obj(); // 0xd7d PushV
	var_357_object = var_303_object; // 0xd7e Mov
	func_4138(); // 0xd7f NEW_2
	StopDialog(var_309_object); // 0xd81 Func
	GetReturnValue(var_311_int); // 0xd83 ObjFunc
	var_302_int = var_311_int; // 0xd85 Mov
	return 8; // 0xd86 Return
}


func_4667()
{
	var_48_string = "b11q01KnowWhoKilled"; // 0x123c PushS
	var_49_int = 1; // 0x123d PushI
	SetVariable(var_48_string, var_49_int); // 0x123e Func
	func_4975(); // 0x1241 NEW_2
	return 0; // 0x1243 Return
}


func_4156(var_133_bool, var_134_object)
{
	var_138_int = 0; var_139_int = 0; var_140_int = 0; var_141_int = 0; // 0x103c PushV
	var_142_string = "voice_common"; // 0x103d PushS
	GetVariable(var_142_string, var_140_int); // 0x103e Func
	var_143_int = var_140_int; // 0x1040 Push
	if(var_143_int == 0) goto Label_4194; // 0x1041 JumpB
	var_144_bool = 0; var_145_object = Obj(); // 0x1042 PushV
	var_145_object = var_134_object; // 0x1043 Mov
	func_4214(var_145_object); // 0x1044 NEW_2
	var_174_bool = var_144_bool == 0; // 0x1046 Not
	if(var_174_bool == 0) goto Label_4176; // 0x1047 JumpB
	var_175_bool = 0; var_176_object = Obj(); // 0x1048 PushV
	var_176_object = var_134_object; // 0x1049 Mov
	func_4251(var_176_object); // 0x104a NEW_2
	var_210_bool = var_175_bool == 0; // 0x104c Not
	if(var_210_bool == 0) goto Label_4176; // 0x104d JumpB
	var_133_bool = 0; // 0x104e MovB
	return 4; // 0x104f Return
	
Label_4176:
	var_211_int = 2; // 0x1050 PushI
	irand(var_141_int, var_211_int); // 0x1051 Func
	var_212_int = var_141_int; // 0x1053 Push
	if(var_212_int == 0) goto Label_4189; // 0x1054 JumpB
	var_213_string = "voice_common"; // 0x1055 PushS
	var_214_int = 1; // 0x1056 PushI
	var_215_int = var_140_int + var_214_int; // 0x1057 Add
	var_216_int = 3; // 0x1058 PushI
	var_217_int = var_215_int / var_216_int; // 0x1059 Mod
	SetVariable(var_213_string, var_217_int); // 0x105a Func
	goto Label_4193; // 0x105c Jump
	
Label_4193:
	goto Label_4212; // 0x1061 Jump
	
Label_4212:
	var_133_bool = 1; // 0x1074 MovB
	return 4; // 0x1075 Return
	
Label_4189:
	var_218_string = "voice_common"; // 0x105d PushS
	var_219_int = 0; // 0x105e PushI
	SetVariable(var_218_string, var_219_int); // 0x105f Func
	
Label_4194:
	var_220_bool = 0; var_221_object = Obj(); // 0x1062 PushV
	var_221_object = var_134_object; // 0x1063 Mov
	func_4251(var_221_object); // 0x1064 NEW_2
	var_222_bool = var_220_bool == 0; // 0x1066 Not
	if(var_222_bool == 0) goto Label_4208; // 0x1067 JumpB
	var_223_bool = 0; var_224_object = Obj(); // 0x1068 PushV
	var_224_object = var_134_object; // 0x1069 Mov
	func_4214(var_224_object); // 0x106a NEW_2
	var_225_bool = var_223_bool == 0; // 0x106c Not
	if(var_225_bool == 0) goto Label_4208; // 0x106d JumpB
	var_133_bool = 0; // 0x106e MovB
	return 4; // 0x106f Return
	
Label_4208:
	var_226_string = "voice_common"; // 0x1070 PushS
	var_227_int = 1; // 0x1071 PushI
	SetVariable(var_226_string, var_227_int); // 0x1072 Func
}


func_5183(var_124_int)
{
	var_125_int = 0; var_126_int = 0; // 0x143f PushV
	var_127_string = "branch"; // 0x1440 PushS
	GetVariable(var_127_string, var_126_int); // 0x1441 Func
	var_128_int = 0; // 0x1443 PushI
	var_129_bool = var_126_int == var_128_int; // 0x1444 Eq
	if(var_129_bool == 0) goto Label_5193; // 0x1445 JumpB
	var_124_int = 1; // 0x1446 MovI
	return 2; // 0x1447 Return
	
Label_5193:
	var_130_int = 1; // 0x1449 PushI
	var_131_bool = var_126_int == var_130_int; // 0x144a Eq
	if(var_131_bool == 0) goto Label_5198; // 0x144b JumpB
	var_124_int = 2; // 0x144c MovI
	return 2; // 0x144d Return
	
Label_5198:
	var_124_int = 3; // 0x144e MovI
	return 2; // 0x144f Return
}


func_4927(var_487_bool)
{
	var_489_int = 0; var_490_string = ""; // 0x1340 PushV
	var_490_string = "oob1BigVlad2"; // 0x1341 MovS
	func_4363(var_489_int, var_490_string); // 0x1342 NEW_2
	var_491_int = 0; // 0x1344 PushI
	var_492_bool = var_489_int == var_491_int; // 0x1345 Eq
	if(var_492_bool == 0) goto Label_4937; // 0x1346 JumpB
	var_487_bool = 1; // 0x1347 MovB
	return 0; // 0x1348 Return
	
Label_4937:
	var_487_bool = 0; // 0x1349 MovB
	return 0; // 0x134a Return
}


func_4416(var_141_bool, var_142_string, var_143_string)
{
	var_144_object = Obj(); var_145_object = Obj(); // 0x1140 PushV
	FindActor(var_145_object, var_142_string); // 0x1141 Func
	var_146_bool = var_145_object == 0; // 0x1143 NullEq
	if(var_146_bool == 0) goto Label_4423; // 0x1144 JumpB
	var_141_bool = 0; // 0x1145 MovB
	return 2; // 0x1146 Return
	
Label_4423:
	Trigger(var_145_object, var_143_string); // 0x1147 Func
	var_141_bool = 1; // 0x1149 MovB
	return 2; // 0x114a Return
}


func_4676()
{
	var_721_string = "oob11BigVlad1"; // 0x1245 PushS
	var_722_int = 1; // 0x1246 PushI
	SetVariable(var_721_string, var_722_int); // 0x1247 Func
	return 0; // 0x1249 Return
}


func_4682()
{
	var_99_bool = 0; var_100_string = ""; var_101_string = ""; var_102_string = ""; // 0x124b PushV
	var_100_string = "volonteers_burah"; // 0x124c MovS
	var_101_string = "kill"; // 0x124d MovS
	var_102_string = "bigvlad"; // 0x124e MovS
	func_4428(var_99_bool, var_100_string, var_101_string, var_102_string); // 0x124f NEW_2
	return 0; // 0x1251 Return
}


func_4939(var_496_bool)
{
	var_498_int = 0; var_499_string = ""; // 0x134c PushV
	var_499_string = "oob1BigVlad3"; // 0x134d MovS
	func_4363(var_498_int, var_499_string); // 0x134e NEW_2
	var_500_int = 0; // 0x1350 PushI
	var_501_bool = var_498_int == var_500_int; // 0x1351 Eq
	if(var_501_bool == 0) goto Label_4949; // 0x1352 JumpB
	var_496_bool = 1; // 0x1353 MovB
	return 0; // 0x1354 Return
	
Label_4949:
	var_496_bool = 0; // 0x1355 MovB
	return 0; // 0x1356 Return
}


func_4428(var_99_bool, var_100_string, var_101_string, var_102_string)
{
	var_103_object = Obj(); var_104_object = Obj(); // 0x114c PushV
	FindActor(var_104_object, var_100_string); // 0x114d Func
	var_105_bool = var_104_object == 0; // 0x114f NullEq
	if(var_105_bool == 0) goto Label_4435; // 0x1150 JumpB
	var_99_bool = 0; // 0x1151 MovB
	return 2; // 0x1152 Return
	
Label_4435:
	Trigger(var_104_object, var_101_string, var_102_string); // 0x1153 Func
	var_99_bool = 1; // 0x1155 MovB
	return 2; // 0x1156 Return
}


func_5200(var_58_object)
{
	var_59_bool = GlobalVars[1]; // 0x1451 PushGE
	var_60_bool = var_59_bool == 0; // 0x1452 Not
	if(var_60_bool == 0) goto Label_5213; // 0x1453 JumpB
	var_61_int = 0; var_62_object = Obj(); // 0x1454 PushV
	var_62_object = var_58_object; // 0x1455 Mov
	TaskCall(6); // 0x1456 TaskCall
	func_2139(var_63_object, var_61_int, var_62_object); // 0x1457 NEW_2
	TaskReturn(); // 0x1458 TaskReturn
	var_286_bool = GlobalVars[1]; // 0x145a PushGE
	var_286_bool = 1; // 0x145b MovB
	GlobalVars[1] = var_286_bool; // 0x145c PopGE
	
Label_5213:
	var_287_bool = 0; var_288_int = 0; // 0x145d PushV
	var_288_int = 2; // 0x145e MovI
	func_4460(var_287_bool, var_288_int); // 0x145f NEW_2
	if(var_287_bool == 0) goto Label_5225; // 0x1461 JumpB
	var_302_int = 0; var_303_object = Obj(); // 0x1462 PushV
	var_303_object = var_58_object; // 0x1463 Mov
	TaskCall(10); // 0x1464 TaskCall
	func_3383(var_304_object, var_302_int, var_303_object); // 0x1465 NEW_2
	TaskReturn(); // 0x1466 TaskReturn
	return 0; // 0x1468 Return
	
Label_5225:
	var_358_bool = 0; var_359_int = 0; // 0x1469 PushV
	var_359_int = 3; // 0x146a MovI
	func_4460(var_358_bool, var_359_int); // 0x146b NEW_2
	if(var_358_bool == 0) goto Label_5237; // 0x146d JumpB
	var_360_int = 0; var_361_object = Obj(); // 0x146e PushV
	var_361_object = var_58_object; // 0x146f Mov
	TaskCall(12); // 0x1470 TaskCall
	func_3586(var_362_object, var_360_int, var_361_object); // 0x1471 NEW_2
	TaskReturn(); // 0x1472 TaskReturn
	return 0; // 0x1474 Return
	
Label_5237:
	var_416_bool = 0; var_417_int = 0; // 0x1475 PushV
	var_417_int = 1; // 0x1476 MovI
	func_4454(var_416_bool, var_417_int); // 0x1477 NEW_2
	if(var_416_bool == 0) goto Label_5249; // 0x1479 JumpB
	var_419_int = 0; var_420_object = Obj(); // 0x147a PushV
	var_420_object = var_58_object; // 0x147b Mov
	TaskCall(4); // 0x147c TaskCall
	func_1296(var_421_object, var_419_int, var_420_object); // 0x147d NEW_2
	TaskReturn(); // 0x147e TaskReturn
	return 0; // 0x1480 Return
	
Label_5249:
	var_519_bool = 0; var_520_int = 0; // 0x1481 PushV
	var_520_int = 2; // 0x1482 MovI
	func_4454(var_519_bool, var_520_int); // 0x1483 NEW_2
	if(var_519_bool == 0) goto Label_5261; // 0x1485 JumpB
	var_521_int = 0; var_522_object = Obj(); // 0x1486 PushV
	var_522_object = var_58_object; // 0x1487 Mov
	TaskCall(0); // 0x1488 TaskCall
	func_0(var_523_object, var_521_int, var_522_object); // 0x1489 NEW_2
	TaskReturn(); // 0x148a TaskReturn
	return 0; // 0x148c Return
	
Label_5261:
	var_585_bool = 0; var_586_int = 0; // 0x148d PushV
	var_586_int = 3; // 0x148e MovI
	func_4454(var_585_bool, var_586_int); // 0x148f NEW_2
	if(var_585_bool == 0) goto Label_5273; // 0x1491 JumpB
	var_587_int = 0; var_588_object = Obj(); // 0x1492 PushV
	var_588_object = var_58_object; // 0x1493 Mov
	TaskCall(2); // 0x1494 TaskCall
	func_479(var_589_object, var_587_int, var_588_object); // 0x1495 NEW_2
	TaskReturn(); // 0x1496 TaskReturn
	return 0; // 0x1498 Return
	
Label_5273:
	var_680_bool = 0; var_681_int = 0; // 0x1499 PushV
	var_681_int = 11; // 0x149a MovI
	func_4454(var_680_bool, var_681_int); // 0x149b NEW_2
	if(var_680_bool == 0) goto Label_5285; // 0x149d JumpB
	var_682_int = 0; var_683_object = Obj(); // 0x149e PushV
	var_683_object = var_58_object; // 0x149f Mov
	TaskCall(8); // 0x14a0 TaskCall
	func_2401(var_684_object, var_682_int, var_683_object); // 0x14a1 NEW_2
	TaskReturn(); // 0x14a2 TaskReturn
	return 0; // 0x14a4 Return
	
Label_5285:
	var_808_int = 0; var_809_object = Obj(); // 0x14a5 PushV
	var_809_object = var_58_object; // 0x14a6 Mov
	TaskCall(14); // 0x14a7 TaskCall
	func_3789(var_810_object, var_808_int, var_809_object); // 0x14a8 NEW_2
	TaskReturn(); // 0x14a9 TaskReturn
	return 0; // 0x14ab Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_545_object, var_546_object)
{
	var_0_object = var_546_object; // 0x52 TMov
	var_1_object = var_545_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_551_int = 1; // 0x55 PushI
	if(var_551_int == 0) goto Label_124; // 0x56 JumpB
	var_552_bool = 0; var_553_object = Obj(); // 0x57 PushV
	var_553_object = var_1_object; // 0x58 MovT
	func_4963(var_553_object); // 0x59 NEW_2
	if(var_552_bool == 0) goto Label_107; // 0x5b JumpB
	var_558_string = ""; // 0x5c PushV
	var_558_string = "Distrust"; // 0x5d MovS
	func_154(var_546_object, var_558_string); // 0x5e NEW_2
	var_566_int = 518234; // 0x60 PushI
	SetMessage(var_566_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_567_int = 518235; // 0x65 PushI
	var_568_int = 20742; // 0x66 PushI
	var_569_int = 19344; // 0x67 PushI
	AddReply(var_567_int, var_568_int, var_569_int); // 0x68 TObjFunc
	goto Label_124; // 0x6a Jump
	
Label_124:
	var_570_bool = 0; // 0x7c PushV
	func_4487(var_570_bool); // 0x7d NEW_2
	if(var_570_bool == 0) goto Label_139; // 0x7f JumpB
	
Label_128:
	lshWaitForAnimEnd(); // 0x80 Func
	var_571_string = var_3_string; // 0x82 PushT
	if(var_571_string == 0) goto Label_133; // 0x83 JumpB
	goto Label_138; // 0x84 Jump
	
Label_138:
	goto Label_153; // 0x8a Jump
	
Label_153:
	return 0; // 0x99 Return
	
Label_133:
	var_572_string = ""; // 0x85 PushV
	var_572_string = var_2_object; // 0x86 MovT
	func_4294(var_572_string); // 0x87 NEW_2
	goto Label_128; // 0x89 Jump
	
Label_139:
	var_573_string = "all"; // 0x8b PushS
	var_574_string = "idle"; // 0x8c PushS
	PlayAnimation(var_573_string, var_574_string); // 0x8d Func
	
Label_143:
	WaitForAnimEnd(); // 0x8f Func
	var_575_string = var_3_string; // 0x91 PushT
	if(var_575_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_148:
	var_576_string = "all"; // 0x94 PushS
	var_577_string = "idle"; // 0x95 PushS
	PlayAnimation(var_576_string, var_577_string); // 0x96 Func
	goto Label_143; // 0x98 Jump
	
Label_107:
	var_578_string = ""; // 0x6b PushV
	var_578_string = "Neutral"; // 0x6c MovS
	func_154(var_546_object, var_578_string); // 0x6d NEW_2
	var_579_int = 518236; // 0x6f PushI
	SetMessage(var_579_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_580_int = 518237; // 0x74 PushI
	var_581_int = -1; // 0x75 PushI
	var_582_int = 19346; // 0x76 PushI
	AddReply(var_580_int, var_581_int, var_582_int); // 0x77 TObjFunc
	goto Label_124; // 0x79 Jump
}


func_4690()
{
	var_81_string = "oob11BigVlad2"; // 0x1253 PushS
	var_82_int = 1; // 0x1254 PushI
	SetVariable(var_81_string, var_82_int); // 0x1255 Func
	return 0; // 0x1257 Return
}


func_3667(var_0_object, var_1_object, var_2_object, var_3_string, var_384_object, var_385_object)
{
	var_0_object = var_385_object; // 0xe54 TMov
	var_1_object = var_384_object; // 0xe55 TMov
	var_3_string = 0; // 0xe56 TMovB
	var_390_int = 1; // 0xe57 PushI
	if(var_390_int == 0) goto Label_3695; // 0xe58 JumpB
	var_391_string = ""; // 0xe59 PushV
	var_391_string = "Neutral"; // 0xe5a MovS
	func_3725(var_385_object, var_391_string); // 0xe5b NEW_2
	var_399_int = 529902; // 0xe5d PushI
	SetMessage(var_399_int); // 0xe5e TObjFunc
	ClearReplies(); // 0xe60 TObjFunc
	var_400_int = 529903; // 0xe62 PushI
	var_401_int = -1; // 0xe63 PushI
	var_402_int = 31286; // 0xe64 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0xe65 TObjFunc
	var_403_int = 529904; // 0xe67 PushI
	var_404_int = -1; // 0xe68 PushI
	var_405_int = 31287; // 0xe69 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0xe6a TObjFunc
	goto Label_3695; // 0xe6c Jump
	
Label_3695:
	var_406_bool = 0; // 0xe6f PushV
	func_4487(var_406_bool); // 0xe70 NEW_2
	if(var_406_bool == 0) goto Label_3710; // 0xe72 JumpB
	
Label_3699:
	lshWaitForAnimEnd(); // 0xe73 Func
	var_407_string = var_3_string; // 0xe75 PushT
	if(var_407_string == 0) goto Label_3704; // 0xe76 JumpB
	goto Label_3709; // 0xe77 Jump
	
Label_3709:
	goto Label_3724; // 0xe7d Jump
	
Label_3724:
	return 0; // 0xe8c Return
	
Label_3704:
	var_408_string = ""; // 0xe78 PushV
	var_408_string = var_2_object; // 0xe79 MovT
	func_4294(var_408_string); // 0xe7a NEW_2
	goto Label_3699; // 0xe7c Jump
	
Label_3710:
	var_409_string = "all"; // 0xe7e PushS
	var_410_string = "idle"; // 0xe7f PushS
	PlayAnimation(var_409_string, var_410_string); // 0xe80 Func
	
Label_3714:
	WaitForAnimEnd(); // 0xe82 Func
	var_411_string = var_3_string; // 0xe84 PushT
	if(var_411_string == 0) goto Label_3719; // 0xe85 JumpB
	goto Label_3724; // 0xe86 Jump
	
Label_3719:
	var_412_string = "all"; // 0xe87 PushS
	var_413_string = "idle"; // 0xe88 PushS
	PlayAnimation(var_412_string, var_413_string); // 0xe89 Func
	goto Label_3714; // 0xe8b Jump
}


func_2646(var_2_object, var_723_string)
{
	var_724_bool = 0; // 0xa57 PushV
	func_4487(var_724_bool); // 0xa58 NEW_2
	var_725_bool = var_724_bool == 0; // 0xa5a Not
	if(var_725_bool == 0) goto Label_2653; // 0xa5b JumpB
	return 0; // 0xa5c Return
	
Label_2653:
	var_726_bool = var_723_string == var_2_object; // 0xa5d Eq
	if(var_726_bool == 0) goto Label_2656; // 0xa5e JumpB
	return 0; // 0xa5f Return
	
Label_2656:
	var_727_string = ""; var_728_bool = 0; // 0xa60 PushV
	var_727_string = var_723_string; // 0xa61 Mov
	var_729_string = ""; // 0xa62 PushS
	var_730_bool = var_723_string == var_729_string; // 0xa63 Eq
	if(var_730_bool == 0) goto Label_2663; // 0xa64 JumpB
	var_728_bool = 0; // 0xa65 MovB
	goto Label_2664; // 0xa66 Jump
	
Label_2664:
	func_4310(var_727_string, var_728_bool); // 0xa68 NEW_2
	var_2_object = var_723_string; // 0xa6a TMov
	return 0; // 0xa6b Return
	
Label_2663:
	var_728_bool = 1; // 0xa67 MovB
}


func_4951(var_505_bool)
{
	var_507_int = 0; var_508_string = ""; // 0x1358 PushV
	var_508_string = "oob1BigVlad4"; // 0x1359 MovS
	func_4363(var_507_int, var_508_string); // 0x135a NEW_2
	var_509_int = 0; // 0x135c PushI
	var_510_bool = var_507_int == var_509_int; // 0x135d Eq
	if(var_510_bool == 0) goto Label_4961; // 0x135e JumpB
	var_505_bool = 1; // 0x135f MovB
	return 0; // 0x1360 Return
	
Label_4961:
	var_505_bool = 0; // 0x1361 MovB
	return 0; // 0x1362 Return
}


func_4696()
{
	var_87_string = "oob11BigVlad3"; // 0x1259 PushS
	var_88_int = 1; // 0x125a PushI
	SetVariable(var_87_string, var_88_int); // 0x125b Func
	return 0; // 0x125d Return
}


func_3928(var_2_object, var_839_string)
{
	var_840_bool = 0; // 0xf59 PushV
	func_4487(var_840_bool); // 0xf5a NEW_2
	var_841_bool = var_840_bool == 0; // 0xf5c Not
	if(var_841_bool == 0) goto Label_3935; // 0xf5d JumpB
	return 0; // 0xf5e Return
	
Label_3935:
	var_842_bool = var_839_string == var_2_object; // 0xf5f Eq
	if(var_842_bool == 0) goto Label_3938; // 0xf60 JumpB
	return 0; // 0xf61 Return
	
Label_3938:
	var_843_string = ""; var_844_bool = 0; // 0xf62 PushV
	var_843_string = var_839_string; // 0xf63 Mov
	var_845_string = ""; // 0xf64 PushS
	var_846_bool = var_839_string == var_845_string; // 0xf65 Eq
	if(var_846_bool == 0) goto Label_3945; // 0xf66 JumpB
	var_844_bool = 0; // 0xf67 MovB
	goto Label_3946; // 0xf68 Jump
	
Label_3946:
	func_4310(var_843_string, var_844_bool); // 0xf6a NEW_2
	var_2_object = var_839_string; // 0xf6c TMov
	return 0; // 0xf6d Return
	
Label_3945:
	var_844_bool = 1; // 0xf69 MovB
}


func_4440(var_63_float)
{
	var_64_float = 0; var_65_float = 0; // 0x1158 PushV
	GetGameTime(var_65_float); // 0x1159 Func
	var_63_float = var_65_float; // 0x115b Mov
	return 2; // 0x115c Return
}


func_2139(var_0_object, var_61_int, var_62_object)
{
	var_64_object = Obj(); var_65_bool = 0; var_66_int = 0; var_67_bool = 0; var_68_object = Obj(); var_69_bool = 0; var_70_int = 0; var_71_bool = 0; // 0x85b PushV
	var_0_object = var_62_object; // 0x85c TMov
	var_72_bool = 0; var_73_object = Obj(); var_74_float = 0; // 0x85d PushV
	var_73_object = var_62_object; // 0x85e Mov
	var_74_float = 70.0; // 0x85f MovF
	func_4069(var_73_object, var_74_float); // 0x860 NEW_2
	var_119_bool = var_72_bool == 0; // 0x862 Not
	if(var_119_bool == 0) goto Label_2150; // 0x863 JumpB
	var_61_int = -2; // 0x864 MovI
	return 8; // 0x865 Return
	
Label_2150:
	CreateDialog(var_68_object); // 0x866 Func
	var_120_int = 0; // 0x868 PushV
	func_4481(var_120_int); // 0x869 NEW_2
	SetNPCName(var_120_int); // 0x86b ObjFunc
	var_121_int = 0; // 0x86d PushV
	func_4479(var_121_int); // 0x86e NEW_2
	SetNPCDescription(var_121_int); // 0x870 ObjFunc
	var_122_string = ""; // 0x872 PushV
	func_4483(var_122_string); // 0x873 NEW_2
	SetPhoto(var_122_string); // 0x875 ObjFunc
	var_123_string = ""; // 0x877 PushV
	func_4485(var_123_string); // 0x878 NEW_2
	SetPhoto2(var_123_string); // 0x87a ObjFunc
	var_124_int = 0; // 0x87c PushV
	func_5183(var_124_int); // 0x87d NEW_2
	SetPlayerName(var_124_int); // 0x87f ObjFunc
	var_70_int = -1; // 0x881 MovI
	IsOverrideActive(var_69_bool); // 0x882 Func
	var_132_bool = var_69_bool; // 0x884 Push
	if(var_132_bool == 0) goto Label_2184; // 0x885 JumpB
	var_61_int = -2; // 0x886 MovI
	return 8; // 0x887 Return
	
Label_2184:
	DoDialog(var_68_object); // 0x888 Func
	var_133_bool = 0; var_134_object = Obj(); // 0x88a PushV
	var_135_object = Obj(); // 0x88b PushV
	func_4347(var_135_object); // 0x88c NEW_2
	var_134_object = var_135_object; // 0x88d Mov
	func_4156(var_133_bool, var_134_object); // 0x88f NEW_2
	var_228_object = Obj(); var_229_object = Obj(); // 0x891 PushV
	var_228_object = var_62_object; // 0x892 Mov
	var_229_object = var_68_object; // 0x893 Mov
	TaskCall(7); // 0x894 TaskCall
	func_2220(var_230_object, var_231_object, var_232_string, var_233_bool, var_228_object, var_229_object); // 0x895 NEW_2
	TaskReturn(); // 0x896 TaskReturn
	IsDialogEnd(var_71_bool); // 0x898 ObjFunc
	
Label_2202:
	var_277_bool = var_71_bool == 0; // 0x89a Not
	if(var_277_bool == 0) goto Label_2209; // 0x89b JumpB
	sync(); // 0x89c Func
	IsDialogEnd(var_71_bool); // 0x89e ObjFunc
	goto Label_2202; // 0x8a0 Jump
	
Label_2209:
	var_278_object = Obj(); // 0x8a1 PushV
	var_278_object = var_62_object; // 0x8a2 Mov
	func_4138(); // 0x8a3 NEW_2
	StopDialog(var_68_object); // 0x8a5 Func
	GetReturnValue(var_70_int); // 0x8a7 ObjFunc
	var_61_int = var_70_int; // 0x8a9 Mov
	return 8; // 0x8aa Return
}


func_4445(var_188_int)
{
	var_189_float = 0; var_190_float = 0; // 0x115d PushV
	GetGameTime(var_190_float); // 0x115e Func
	var_191_int = 1; // 0x1160 PushI
	var_192_int = 0; // 0x1161 PushV
	var_193_int = 24; // 0x1162 PushI
	var_192_int = var_190_float / var_190_float; // 0x1163 Div2
	var_188_int = var_191_int + var_192_int; // 0x1164 Add2
	return 2; // 0x1165 Return
}


func_4702()
{
	var_93_string = "oob11BigVlad4"; // 0x125f PushS
	var_94_int = 1; // 0x1260 PushI
	SetVariable(var_93_string, var_94_int); // 0x1261 Func
	return 0; // 0x1263 Return
}


func_1377(var_0_object, var_1_object, var_2_object, var_3_string, var_443_object, var_444_object)
{
	var_0_object = var_444_object; // 0x562 TMov
	var_1_object = var_443_object; // 0x563 TMov
	var_3_string = 0; // 0x564 TMovB
	var_449_int = 1; // 0x565 PushI
	if(var_449_int == 0) goto Label_1460; // 0x566 JumpB
	var_450_bool = 0; var_451_object = Obj(); // 0x567 PushV
	var_451_object = var_1_object; // 0x568 MovT
	func_4915(var_451_object); // 0x569 NEW_2
	if(var_450_bool == 0) goto Label_1413; // 0x56b JumpB
	var_458_object = Obj(); var_459_object = Obj(); // 0x56c PushV
	var_458_object = var_1_object; // 0x56d MovT
	var_459_object = var_0_object; // 0x56e MovT
	func_4541(); // 0x56f NEW_2
	var_462_string = ""; // 0x571 PushV
	var_462_string = "Neutral"; // 0x572 MovS
	func_1490(var_444_object, var_462_string); // 0x573 NEW_2
	var_470_int = 519752; // 0x575 PushI
	SetMessage(var_470_int); // 0x576 TObjFunc
	ClearReplies(); // 0x578 TObjFunc
	var_471_int = 519753; // 0x57a PushI
	var_472_int = 20908; // 0x57b PushI
	var_473_int = 20907; // 0x57c PushI
	AddReply(var_471_int, var_472_int, var_473_int); // 0x57d TObjFunc
	var_474_int = 519791; // 0x57f PushI
	var_475_int = 20910; // 0x580 PushI
	var_476_int = 20951; // 0x581 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x582 TObjFunc
	goto Label_1460; // 0x584 Jump
	
Label_1460:
	var_477_bool = 0; // 0x5b4 PushV
	func_4487(var_477_bool); // 0x5b5 NEW_2
	if(var_477_bool == 0) goto Label_1475; // 0x5b7 JumpB
	
Label_1464:
	lshWaitForAnimEnd(); // 0x5b8 Func
	var_478_string = var_3_string; // 0x5ba PushT
	if(var_478_string == 0) goto Label_1469; // 0x5bb JumpB
	goto Label_1474; // 0x5bc Jump
	
Label_1474:
	goto Label_1489; // 0x5c2 Jump
	
Label_1489:
	return 0; // 0x5d1 Return
	
Label_1469:
	var_479_string = ""; // 0x5bd PushV
	var_479_string = var_2_object; // 0x5be MovT
	func_4294(var_479_string); // 0x5bf NEW_2
	goto Label_1464; // 0x5c1 Jump
	
Label_1475:
	var_480_string = "all"; // 0x5c3 PushS
	var_481_string = "idle"; // 0x5c4 PushS
	PlayAnimation(var_480_string, var_481_string); // 0x5c5 Func
	
Label_1479:
	WaitForAnimEnd(); // 0x5c7 Func
	var_482_string = var_3_string; // 0x5c9 PushT
	if(var_482_string == 0) goto Label_1484; // 0x5ca JumpB
	goto Label_1489; // 0x5cb Jump
	
Label_1484:
	var_483_string = "all"; // 0x5cc PushS
	var_484_string = "idle"; // 0x5cd PushS
	PlayAnimation(var_483_string, var_484_string); // 0x5ce Func
	goto Label_1479; // 0x5d0 Jump
	
Label_1413:
	var_485_string = ""; // 0x585 PushV
	var_485_string = "Neutral"; // 0x586 MovS
	func_1490(var_444_object, var_485_string); // 0x587 NEW_2
	var_486_int = 519792; // 0x589 PushI
	SetMessage(var_486_int); // 0x58a TObjFunc
	ClearReplies(); // 0x58c TObjFunc
	var_487_bool = 0; var_488_object = Obj(); // 0x58e PushV
	var_488_object = var_1_object; // 0x58f MovT
	func_4927(var_488_object); // 0x590 NEW_2
	if(var_487_bool == 0) goto Label_1432; // 0x592 JumpB
	var_493_int = 519793; // 0x593 PushI
	var_494_int = 20954; // 0x594 PushI
	var_495_int = 20953; // 0x595 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x596 TObjFunc
	
Label_1432:
	var_496_bool = 0; var_497_object = Obj(); // 0x598 PushV
	var_497_object = var_1_object; // 0x599 MovT
	func_4939(var_497_object); // 0x59a NEW_2
	if(var_496_bool == 0) goto Label_1442; // 0x59c JumpB
	var_502_int = 519798; // 0x59d PushI
	var_503_int = 28439; // 0x59e PushI
	var_504_int = 20958; // 0x59f PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x5a0 TObjFunc
	
Label_1442:
	var_505_bool = 0; var_506_object = Obj(); // 0x5a2 PushV
	var_506_object = var_1_object; // 0x5a3 MovT
	func_4951(var_506_object); // 0x5a4 NEW_2
	if(var_505_bool == 0) goto Label_1452; // 0x5a6 JumpB
	var_511_int = 519807; // 0x5a7 PushI
	var_512_int = 20968; // 0x5a8 PushI
	var_513_int = 20967; // 0x5a9 PushI
	AddReply(var_511_int, var_512_int, var_513_int); // 0x5aa TObjFunc
	
Label_1452:
	var_514_int = 519810; // 0x5ac PushI
	var_515_int = -1; // 0x5ad PushI
	var_516_int = 20970; // 0x5ae PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0x5af TObjFunc
	goto Label_1460; // 0x5b1 Jump
}


func_2401(var_0_object, var_682_int, var_683_object)
{
	var_685_object = Obj(); var_686_bool = 0; var_687_int = 0; var_688_bool = 0; var_689_object = Obj(); var_690_bool = 0; var_691_int = 0; var_692_bool = 0; // 0x961 PushV
	var_0_object = var_683_object; // 0x962 TMov
	var_693_bool = 0; var_694_object = Obj(); var_695_float = 0; // 0x963 PushV
	var_694_object = var_683_object; // 0x964 Mov
	var_695_float = 70.0; // 0x965 MovF
	func_4069(var_694_object, var_695_float); // 0x966 NEW_2
	var_696_bool = var_693_bool == 0; // 0x968 Not
	if(var_696_bool == 0) goto Label_2412; // 0x969 JumpB
	var_682_int = -2; // 0x96a MovI
	return 8; // 0x96b Return
	
Label_2412:
	CreateDialog(var_689_object); // 0x96c Func
	var_697_int = 0; // 0x96e PushV
	func_4481(var_697_int); // 0x96f NEW_2
	SetNPCName(var_697_int); // 0x971 ObjFunc
	var_698_int = 0; // 0x973 PushV
	func_4479(var_698_int); // 0x974 NEW_2
	SetNPCDescription(var_698_int); // 0x976 ObjFunc
	var_699_string = ""; // 0x978 PushV
	func_4483(var_699_string); // 0x979 NEW_2
	SetPhoto(var_699_string); // 0x97b ObjFunc
	var_700_string = ""; // 0x97d PushV
	func_4485(var_700_string); // 0x97e NEW_2
	SetPhoto2(var_700_string); // 0x980 ObjFunc
	var_701_int = 0; // 0x982 PushV
	func_5183(var_701_int); // 0x983 NEW_2
	SetPlayerName(var_701_int); // 0x985 ObjFunc
	var_691_int = -1; // 0x987 MovI
	IsOverrideActive(var_690_bool); // 0x988 Func
	var_702_bool = var_690_bool; // 0x98a Push
	if(var_702_bool == 0) goto Label_2446; // 0x98b JumpB
	var_682_int = -2; // 0x98c MovI
	return 8; // 0x98d Return
	
Label_2446:
	DoDialog(var_689_object); // 0x98e Func
	var_703_bool = 0; var_704_object = Obj(); // 0x990 PushV
	var_705_object = Obj(); // 0x991 PushV
	func_4347(var_705_object); // 0x992 NEW_2
	var_704_object = var_705_object; // 0x993 Mov
	func_4156(var_703_bool, var_704_object); // 0x995 NEW_2
	var_706_object = Obj(); var_707_object = Obj(); // 0x997 PushV
	var_706_object = var_683_object; // 0x998 Mov
	var_707_object = var_689_object; // 0x999 Mov
	TaskCall(9); // 0x99a TaskCall
	func_2482(var_708_object, var_709_object, var_710_string, var_711_bool, var_706_object, var_707_object); // 0x99b NEW_2
	TaskReturn(); // 0x99c TaskReturn
	IsDialogEnd(var_692_bool); // 0x99e ObjFunc
	
Label_2464:
	var_806_bool = var_692_bool == 0; // 0x9a0 Not
	if(var_806_bool == 0) goto Label_2471; // 0x9a1 JumpB
	sync(); // 0x9a2 Func
	IsDialogEnd(var_692_bool); // 0x9a4 ObjFunc
	goto Label_2464; // 0x9a6 Jump
	
Label_2471:
	var_807_object = Obj(); // 0x9a7 PushV
	var_807_object = var_683_object; // 0x9a8 Mov
	func_4138(); // 0x9a9 NEW_2
	StopDialog(var_689_object); // 0x9ab Func
	GetReturnValue(var_691_int); // 0x9ad ObjFunc
	var_682_int = var_691_int; // 0x9af Mov
	return 8; // 0x9b0 Return
}


func_4963(var_552_bool)
{
	var_554_int = 0; var_555_string = ""; // 0x1364 PushV
	var_555_string = "b2q01"; // 0x1365 MovS
	func_4363(var_554_int, var_555_string); // 0x1366 NEW_2
	var_556_int = 0; // 0x1368 PushI
	var_557_bool = var_554_int == var_556_int; // 0x1369 Eq
	if(var_557_bool == 0) goto Label_4973; // 0x136a JumpB
	var_552_bool = 1; // 0x136b MovB
	return 0; // 0x136c Return
	
Label_4973:
	var_552_bool = 0; // 0x136d MovB
	return 0; // 0x136e Return
}


func_4708()
{
	var_114_string = "oob11BigVlad5"; // 0x1265 PushS
	var_115_int = 1; // 0x1266 PushI
	SetVariable(var_114_string, var_115_int); // 0x1267 Func
	return 0; // 0x1269 Return
}


func_4454(var_416_bool, var_417_int)
{
	var_418_int = 0; // 0x1167 PushV
	func_4445(var_418_int); // 0x1168 NEW_2
	var_416_bool = var_418_int == var_417_int; // 0x116a Eq2
	return 0; // 0x116b Return
}


func_4714()
{
	var_630_string = "b3BigVladVisit"; // 0x126b PushS
	var_631_int = 1; // 0x126c PushI
	SetVariable(var_630_string, var_631_int); // 0x126d Func
	return 0; // 0x126f Return
}


func_4460(var_287_bool, var_288_int)
{
	var_289_float = 0; var_290_int = 0; var_291_int = 0; var_292_float = 0; var_293_int = 0; var_294_int = 0; // 0x116c PushV
	GetGameTime(var_292_float); // 0x116d Func
	var_295_int = 1; // 0x116f PushI
	var_296_int = 0; // 0x1170 PushV
	var_297_int = 24; // 0x1171 PushI
	var_296_int = var_292_float / var_292_float; // 0x1172 Div2
	var_293_int = var_295_int + var_296_int; // 0x1173 Add2
	var_298_bool = var_293_int != var_288_int; // 0x1174 Neq
	if(var_298_bool == 0) goto Label_4472; // 0x1175 JumpB
	var_287_bool = 0; // 0x1176 MovB
	return 6; // 0x1177 Return
	
Label_4472:
	var_299_int = 0; // 0x1178 PushV
	var_299_int = var_292_float; // 0x1179 Mov
	var_300_int = 24; // 0x117a PushI
	var_294_int = var_299_int % var_300_int; // 0x117b Mod2
	var_301_int = 7; // 0x117c PushI
	var_287_bool = var_294_int < var_301_int; // 0x117d LT2
	return 6; // 0x117e Return
}


func_4975()
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x136f PushV
	var_52_int = 315; // 0x1370 PushI
	var_53_int = 1; // 0x1371 PushI
	var_54_int = 522057; // 0x1372 PushI
	CreateDiaryEntry(var_51_object, var_52_int, var_53_int, var_54_int); // 0x1373 Func
	var_55_bool = 0; var_56_object = Obj(); var_57_int = 0; // 0x1375 PushV
	var_56_object = var_51_object; // 0x1376 Mov
	var_57_int = 313; // 0x1377 MovI
	func_5105(var_55_bool, var_56_object, var_57_int); // 0x1378 NEW_2
	return 2; // 0x137a Return
}


func_4720(var_163_object)
{
	var_165_int = 0; var_166_int = 0; // 0x1270 PushV
	var_167_int = 30; // 0x1271 PushI
	irand(var_166_int, var_167_int); // 0x1272 Func
	var_168_object = Obj(); var_169_int = 0; // 0x1274 PushV
	var_168_object = var_163_object; // 0x1275 Mov
	var_170_int = 20; // 0x1276 PushI
	var_169_int = var_166_int + var_170_int; // 0x1277 Add2
	func_4397(var_168_object, var_169_int); // 0x1278 NEW_2
	return 2; // 0x127a Return
}


func_4214(var_144_bool)
{
	var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; var_151_string = ""; var_152_int = 0; var_153_bool = 0; var_154_int = 0; var_155_string = ""; // 0x1076 PushV
	var_151_string = "c"; // 0x1077 MovS
	var_152_int = 0; // 0x1078 MovI
	
Label_4217:
	var_156_int = 1; // 0x1079 PushI
	if(var_156_int == 0) goto Label_4230; // 0x107a JumpB
	var_157_int = 1; // 0x107b PushI
	var_158_int = var_152_int + var_157_int; // 0x107c Add
	var_159_int = var_151_string + var_158_int; // 0x107d Add
	HasProperty(var_159_int, var_153_bool); // 0x107e ObjFunc
	var_160_bool = var_153_bool == 0; // 0x1080 Not
	if(var_160_bool == 0) goto Label_4227; // 0x1081 JumpB
	goto Label_4230; // 0x1082 Jump
	
Label_4230:
	var_161_bool = var_152_int == 0; // 0x1086 Not
	if(var_161_bool == 0) goto Label_4234; // 0x1087 JumpB
	var_144_bool = 0; // 0x1088 MovB
	return 10; // 0x1089 Return
	
Label_4234:
	var_154_int = 0; // 0x108a MovI
	var_162_int = 1; // 0x108b PushI
	var_163_bool = var_152_int > var_162_int; // 0x108c GT
	if(var_163_bool == 0) goto Label_4240; // 0x108d JumpB
	irand(var_154_int, var_152_int); // 0x108e Func
	
Label_4240:
	var_164_int = 1; // 0x1090 PushI
	var_165_int = var_154_int + var_164_int; // 0x1091 Add
	var_166_int = var_151_string + var_165_int; // 0x1092 Add
	GetProperty(var_166_int, var_155_string); // 0x1093 ObjFunc
	var_167_bool = 0; var_168_string = ""; // 0x1095 PushV
	var_168_string = var_155_string; // 0x1096 Mov
	func_4325(var_167_bool, var_168_string); // 0x1097 NEW_2
	var_144_bool = var_167_bool; // 0x1098 Mov
	return 10; // 0x109a Return
	
Label_4227:
	var_173_int = 1; // 0x1083 PushI
	var_152_int = var_152_int + var_173_int; // 0x1084 Add2
	goto Label_4217; // 0x1085 Jump
}


func_4731()
{
	var_99_object = Obj(); var_100_string = ""; var_101_float = 0; // 0x127c PushV
	var_102_object = Obj(); // 0x127d PushV
	func_5133(var_102_object); // 0x127e NEW_2
	var_99_object = var_102_object; // 0x127f Mov
	var_100_string = "pt_map_ospina"; // 0x1281 MovS
	var_101_float = 2; // 0x1282 MovI
	func_5150(var_99_object, var_100_string, var_101_float); // 0x1283 NEW_2
	var_122_object = Obj(); // 0x1285 PushV
	func_5133(var_122_object); // 0x1286 NEW_2
	ShowMap(var_122_object); // 0x1288 ObjFunc
	return 0; // 0x128a Return
}


func_4988()
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x137c PushV
	var_73_int = 242; // 0x137d PushI
	var_74_int = 1; // 0x137e PushI
	var_75_int = 520039; // 0x137f PushI
	CreateDiaryEntry(var_72_object, var_73_int, var_74_int, var_75_int); // 0x1380 Func
	var_76_bool = 0; var_77_object = Obj(); var_78_int = 0; // 0x1382 PushV
	var_77_object = var_72_object; // 0x1383 Mov
	var_78_int = -1; // 0x1384 MovI
	func_5105(var_76_bool, var_77_object, var_78_int); // 0x1385 NEW_2
	return 2; // 0x1387 Return
}


func_4479(var_121_int)
{
	var_121_int = 515531; // 0x117f MovI
	return 0; // 0x1180 Return
}


func_4481(var_120_int)
{
	var_120_int = 502857; // 0x1181 MovI
	return 0; // 0x1182 Return
}


func_4483(var_122_string)
{
	var_122_string = "ui/NPC_BigVlad.png"; // 0x1183 MovS
	return 0; // 0x1184 Return
}


func_4485(var_123_string)
{
	var_123_string = "ui/NPC_BigVlad_b.png"; // 0x1185 MovS
	return 0; // 0x1186 Return
}


func_4487(var_115_bool)
{
	var_115_bool = 1; // 0x1187 MovB
	return 0; // 0x1188 Return
}


func_3464(var_0_object, var_1_object, var_2_object, var_3_string, var_326_object, var_327_object)
{
	var_0_object = var_327_object; // 0xd89 TMov
	var_1_object = var_326_object; // 0xd8a TMov
	var_3_string = 0; // 0xd8b TMovB
	var_332_int = 1; // 0xd8c PushI
	if(var_332_int == 0) goto Label_3492; // 0xd8d JumpB
	var_333_string = ""; // 0xd8e PushV
	var_333_string = "Neutral"; // 0xd8f MovS
	func_3522(var_327_object, var_333_string); // 0xd90 NEW_2
	var_341_int = 529898; // 0xd92 PushI
	SetMessage(var_341_int); // 0xd93 TObjFunc
	ClearReplies(); // 0xd95 TObjFunc
	var_342_int = 529899; // 0xd97 PushI
	var_343_int = -1; // 0xd98 PushI
	var_344_int = 31282; // 0xd99 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0xd9a TObjFunc
	var_345_int = 529900; // 0xd9c PushI
	var_346_int = -1; // 0xd9d PushI
	var_347_int = 31283; // 0xd9e PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xd9f TObjFunc
	goto Label_3492; // 0xda1 Jump
	
Label_3492:
	var_348_bool = 0; // 0xda4 PushV
	func_4487(var_348_bool); // 0xda5 NEW_2
	if(var_348_bool == 0) goto Label_3507; // 0xda7 JumpB
	
Label_3496:
	lshWaitForAnimEnd(); // 0xda8 Func
	var_349_string = var_3_string; // 0xdaa PushT
	if(var_349_string == 0) goto Label_3501; // 0xdab JumpB
	goto Label_3506; // 0xdac Jump
	
Label_3506:
	goto Label_3521; // 0xdb2 Jump
	
Label_3521:
	return 0; // 0xdc1 Return
	
Label_3501:
	var_350_string = ""; // 0xdad PushV
	var_350_string = var_2_object; // 0xdae MovT
	func_4294(var_350_string); // 0xdaf NEW_2
	goto Label_3496; // 0xdb1 Jump
	
Label_3507:
	var_351_string = "all"; // 0xdb3 PushS
	var_352_string = "idle"; // 0xdb4 PushS
	PlayAnimation(var_351_string, var_352_string); // 0xdb5 Func
	
Label_3511:
	WaitForAnimEnd(); // 0xdb7 Func
	var_353_string = var_3_string; // 0xdb9 PushT
	if(var_353_string == 0) goto Label_3516; // 0xdba JumpB
	goto Label_3521; // 0xdbb Jump
	
Label_3516:
	var_354_string = "all"; // 0xdbc PushS
	var_355_string = "idle"; // 0xdbd PushS
	PlayAnimation(var_354_string, var_355_string); // 0xdbe Func
	goto Label_3511; // 0xdc0 Jump
}


func_4489()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x1189 PushV
	var_50_string = "b3q01"; // 0x118a PushS
	var_51_int = 1; // 0x118b PushI
	SetVariable(var_50_string, var_51_int); // 0x118c Func
	var_52_object = Obj(); // 0x118e PushV
	func_5133(var_52_object); // 0x118f NEW_2
	var_49_object = var_52_object; // 0x1190 Mov
	var_59_string = "b3q01BigVladGotoOspina"; // 0x1192 PushS
	var_60_string = "pt_map_ospina"; // 0x1193 PushS
	var_61_int = 1; // 0x1194 PushI
	var_62_int = 519627; // 0x1195 PushI
	var_63_float = 0; // 0x1196 PushV
	func_4440(var_63_float); // 0x1197 NEW_2
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0x1199 ObjFunc
	func_5040(); // 0x119c NEW_2
	func_5053(); // 0x119f NEW_2
	return 2; // 0x11a1 Return
}


func_5001()
{
	var_94_object = Obj(); var_95_object = Obj(); // 0x1389 PushV
	var_96_int = 243; // 0x138a PushI
	var_97_int = 1; // 0x138b PushI
	var_98_int = 520040; // 0x138c PushI
	CreateDiaryEntry(var_95_object, var_96_int, var_97_int, var_98_int); // 0x138d Func
	var_99_bool = 0; var_100_object = Obj(); var_101_int = 0; // 0x138f PushV
	var_100_object = var_95_object; // 0x1390 Mov
	var_101_int = 242; // 0x1391 MovI
	func_5105(var_99_bool, var_100_object, var_101_int); // 0x1392 NEW_2
	return 2; // 0x1394 Return
}


func_4747()
{
	var_114_object = Obj(); var_115_string = ""; var_116_float = 0; // 0x128c PushV
	var_117_object = Obj(); // 0x128d PushV
	func_5133(var_117_object); // 0x128e NEW_2
	var_114_object = var_117_object; // 0x128f Mov
	var_115_string = "pt_map_alexandr"; // 0x1291 MovS
	var_116_float = 2; // 0x1292 MovI
	func_5150(var_114_object, var_115_string, var_116_float); // 0x1293 NEW_2
	var_137_object = Obj(); // 0x1295 PushV
	func_5133(var_137_object); // 0x1296 NEW_2
	ShowMap(var_137_object); // 0x1298 ObjFunc
	return 0; // 0x129a Return
}


func_3725(var_2_object, var_391_string)
{
	var_392_bool = 0; // 0xe8e PushV
	func_4487(var_392_bool); // 0xe8f NEW_2
	var_393_bool = var_392_bool == 0; // 0xe91 Not
	if(var_393_bool == 0) goto Label_3732; // 0xe92 JumpB
	return 0; // 0xe93 Return
	
Label_3732:
	var_394_bool = var_391_string == var_2_object; // 0xe94 Eq
	if(var_394_bool == 0) goto Label_3735; // 0xe95 JumpB
	return 0; // 0xe96 Return
	
Label_3735:
	var_395_string = ""; var_396_bool = 0; // 0xe97 PushV
	var_395_string = var_391_string; // 0xe98 Mov
	var_397_string = ""; // 0xe99 PushS
	var_398_bool = var_391_string == var_397_string; // 0xe9a Eq
	if(var_398_bool == 0) goto Label_3742; // 0xe9b JumpB
	var_396_bool = 0; // 0xe9c MovB
	goto Label_3743; // 0xe9d Jump
	
Label_3743:
	func_4310(var_395_string, var_396_bool); // 0xe9f NEW_2
	var_2_object = var_391_string; // 0xea1 TMov
	return 0; // 0xea2 Return
	
Label_3742:
	var_396_bool = 1; // 0xe9e MovB
}


func_5014()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x1396 PushV
	var_83_int = 245; // 0x1397 PushI
	var_84_int = 1; // 0x1398 PushI
	var_85_int = 520466; // 0x1399 PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x139a Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x139c PushV
	var_87_object = var_82_object; // 0x139d Mov
	var_88_int = -1; // 0x139e MovI
	func_5105(var_86_bool, var_87_object, var_88_int); // 0x139f NEW_2
	return 2; // 0x13a1 Return
}


func_154(var_2_object, var_558_string)
{
	var_559_bool = 0; // 0x9b PushV
	func_4487(var_559_bool); // 0x9c NEW_2
	var_560_bool = var_559_bool == 0; // 0x9e Not
	if(var_560_bool == 0) goto Label_161; // 0x9f JumpB
	return 0; // 0xa0 Return
	
Label_161:
	var_561_bool = var_558_string == var_2_object; // 0xa1 Eq
	if(var_561_bool == 0) goto Label_164; // 0xa2 JumpB
	return 0; // 0xa3 Return
	
Label_164:
	var_562_string = ""; var_563_bool = 0; // 0xa4 PushV
	var_562_string = var_558_string; // 0xa5 Mov
	var_564_string = ""; // 0xa6 PushS
	var_565_bool = var_558_string == var_564_string; // 0xa7 Eq
	if(var_565_bool == 0) goto Label_171; // 0xa8 JumpB
	var_563_bool = 0; // 0xa9 MovB
	goto Label_172; // 0xaa Jump
	
Label_172:
	func_4310(var_562_string, var_563_bool); // 0xac NEW_2
	var_2_object = var_558_string; // 0xae TMov
	return 0; // 0xaf Return
	
Label_171:
	var_563_bool = 1; // 0xab MovB
}


func_4763()
{
	var_144_object = Obj(); var_145_string = ""; var_146_float = 0; // 0x129c PushV
	var_147_object = Obj(); // 0x129d PushV
	func_5133(var_147_object); // 0x129e NEW_2
	var_144_object = var_147_object; // 0x129f Mov
	var_145_string = "pt_map_mladvlad"; // 0x12a1 MovS
	var_146_float = 2; // 0x12a2 MovI
	func_5150(var_144_object, var_145_string, var_146_float); // 0x12a3 NEW_2
	var_148_object = Obj(); // 0x12a5 PushV
	func_5133(var_148_object); // 0x12a6 NEW_2
	ShowMap(var_148_object); // 0x12a8 ObjFunc
	return 0; // 0x12aa Return
}


func_668(var_2_object, var_632_string)
{
	var_633_bool = 0; // 0x29d PushV
	func_4487(var_633_bool); // 0x29e NEW_2
	var_634_bool = var_633_bool == 0; // 0x2a0 Not
	if(var_634_bool == 0) goto Label_675; // 0x2a1 JumpB
	return 0; // 0x2a2 Return
	
Label_675:
	var_635_bool = var_632_string == var_2_object; // 0x2a3 Eq
	if(var_635_bool == 0) goto Label_678; // 0x2a4 JumpB
	return 0; // 0x2a5 Return
	
Label_678:
	var_636_string = ""; var_637_bool = 0; // 0x2a6 PushV
	var_636_string = var_632_string; // 0x2a7 Mov
	var_638_string = ""; // 0x2a8 PushS
	var_639_bool = var_632_string == var_638_string; // 0x2a9 Eq
	if(var_639_bool == 0) goto Label_685; // 0x2aa JumpB
	var_637_bool = 0; // 0x2ab MovB
	goto Label_686; // 0x2ac Jump
	
Label_686:
	func_4310(var_636_string, var_637_bool); // 0x2ae NEW_2
	var_2_object = var_632_string; // 0x2b0 TMov
	return 0; // 0x2b1 Return
	
Label_685:
	var_637_bool = 1; // 0x2ad MovB
}


func_4251(var_175_bool)
{
	var_177_string = ""; var_178_int = 0; var_179_bool = 0; var_180_int = 0; var_181_string = ""; var_182_string = ""; var_183_int = 0; var_184_bool = 0; var_185_int = 0; var_186_string = ""; // 0x109b PushV
	var_187_string = "d"; // 0x109c PushS
	var_188_int = 0; // 0x109d PushV
	func_4445(var_188_int); // 0x109e NEW_2
	var_194_int = var_187_string + var_188_int; // 0x10a0 Add
	var_195_string = "m"; // 0x10a1 PushS
	var_182_string = var_194_int + var_195_string; // 0x10a2 Add2
	var_183_int = 0; // 0x10a3 MovI
	
Label_4260:
	var_196_int = 1; // 0x10a4 PushI
	if(var_196_int == 0) goto Label_4273; // 0x10a5 JumpB
	var_197_int = 1; // 0x10a6 PushI
	var_198_int = var_183_int + var_197_int; // 0x10a7 Add
	var_199_int = var_182_string + var_198_int; // 0x10a8 Add
	HasProperty(var_199_int, var_184_bool); // 0x10a9 ObjFunc
	var_200_bool = var_184_bool == 0; // 0x10ab Not
	if(var_200_bool == 0) goto Label_4270; // 0x10ac JumpB
	goto Label_4273; // 0x10ad Jump
	
Label_4273:
	var_201_bool = var_183_int == 0; // 0x10b1 Not
	if(var_201_bool == 0) goto Label_4277; // 0x10b2 JumpB
	var_175_bool = 0; // 0x10b3 MovB
	return 10; // 0x10b4 Return
	
Label_4277:
	var_185_int = 0; // 0x10b5 MovI
	var_202_int = 1; // 0x10b6 PushI
	var_203_bool = var_183_int > var_202_int; // 0x10b7 GT
	if(var_203_bool == 0) goto Label_4283; // 0x10b8 JumpB
	irand(var_185_int, var_183_int); // 0x10b9 Func
	
Label_4283:
	var_204_int = 1; // 0x10bb PushI
	var_205_int = var_185_int + var_204_int; // 0x10bc Add
	var_206_int = var_182_string + var_205_int; // 0x10bd Add
	GetProperty(var_206_int, var_186_string); // 0x10be ObjFunc
	var_207_bool = 0; var_208_string = ""; // 0x10c0 PushV
	var_208_string = var_186_string; // 0x10c1 Mov
	func_4325(var_207_bool, var_208_string); // 0x10c2 NEW_2
	var_175_bool = var_207_bool; // 0x10c3 Mov
	return 10; // 0x10c5 Return
	
Label_4270:
	var_209_int = 1; // 0x10ae PushI
	var_183_int = var_183_int + var_209_int; // 0x10af Add2
	goto Label_4260; // 0x10b0 Jump
}


func_3999()
{
	var_41_bool = 0; // 0xf9f PushV
	func_4064(var_41_bool); // 0xfa0 NEW_2
	var_44_bool = var_41_bool == 0; // 0xfa2 Not
	if(var_44_bool == 0) goto Label_4006; // 0xfa3 JumpB
	Hold(); // 0xfa4 Func
	
Label_4006:
	var_45_string = ""; // 0xfa6 PushV
	var_45_string = "Neutral"; // 0xfa7 MovS
	func_4294(var_45_string); // 0xfa8 NEW_2
	lshWaitForAnimEnd(); // 0xfaa Func
	goto Label_4006; // 0xfac Jump
}


func_4515()
{
	var_626_string = "oob3BigVlad1"; // 0x11a4 PushS
	var_627_int = 1; // 0x11a5 PushI
	SetVariable(var_626_string, var_627_int); // 0x11a6 Func
	return 0; // 0x11a8 Return
}


func_5027()
{
	var_104_object = Obj(); var_105_object = Obj(); // 0x13a3 PushV
	var_106_int = 246; // 0x13a4 PushI
	var_107_int = 1; // 0x13a5 PushI
	var_108_int = 520467; // 0x13a6 PushI
	CreateDiaryEntry(var_105_object, var_106_int, var_107_int, var_108_int); // 0x13a7 Func
	var_109_bool = 0; var_110_object = Obj(); var_111_int = 0; // 0x13a9 PushV
	var_110_object = var_105_object; // 0x13aa Mov
	var_111_int = 245; // 0x13ab MovI
	func_5105(var_109_bool, var_110_object, var_111_int); // 0x13ac NEW_2
	return 2; // 0x13ae Return
}


func_4521()
{
	func_5066(); // 0x11ab NEW_2
	var_141_bool = 0; var_142_string = ""; var_143_string = ""; // 0x11ad PushV
	var_142_string = "quest_b3_01"; // 0x11ae MovS
	var_143_string = "completed"; // 0x11af MovS
	func_4416(var_141_bool, var_142_string, var_143_string); // 0x11b0 NEW_2
	return 0; // 0x11b2 Return
}


func_4779()
{
	var_104_object = Obj(); var_105_string = ""; var_106_float = 0; // 0x12ac PushV
	var_107_object = Obj(); // 0x12ad PushV
	func_5133(var_107_object); // 0x12ae NEW_2
	var_104_object = var_107_object; // 0x12af Mov
	var_105_string = "pt_map_kapella"; // 0x12b1 MovS
	var_106_float = 2; // 0x12b2 MovI
	func_5150(var_104_object, var_105_string, var_106_float); // 0x12b3 NEW_2
	var_127_object = Obj(); // 0x12b5 PushV
	func_5133(var_127_object); // 0x12b6 NEW_2
	ShowMap(var_127_object); // 0x12b8 ObjFunc
	return 0; // 0x12ba Return
}


func_2220(var_0_object, var_1_object, var_2_object, var_3_string, var_228_object, var_229_object)
{
	var_0_object = var_229_object; // 0x8ad TMov
	var_1_object = var_228_object; // 0x8ae TMov
	var_3_string = 0; // 0x8af TMovB
	var_234_int = 1; // 0x8b0 PushI
	if(var_234_int == 0) goto Label_2248; // 0x8b1 JumpB
	var_235_string = ""; // 0x8b2 PushV
	var_235_string = "Neutral"; // 0x8b3 MovS
	func_2278(var_229_object, var_235_string); // 0x8b4 NEW_2
	var_252_int = 520698; // 0x8b6 PushI
	SetMessage(var_252_int); // 0x8b7 TObjFunc
	ClearReplies(); // 0x8b9 TObjFunc
	var_253_int = 520699; // 0x8bb PushI
	var_254_int = 21910; // 0x8bc PushI
	var_255_int = 21909; // 0x8bd PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x8be TObjFunc
	var_256_int = 520705; // 0x8c0 PushI
	var_257_int = 21916; // 0x8c1 PushI
	var_258_int = 21915; // 0x8c2 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x8c3 TObjFunc
	goto Label_2248; // 0x8c5 Jump
	
Label_2248:
	var_259_bool = 0; // 0x8c8 PushV
	func_4487(var_259_bool); // 0x8c9 NEW_2
	if(var_259_bool == 0) goto Label_2263; // 0x8cb JumpB
	
Label_2252:
	lshWaitForAnimEnd(); // 0x8cc Func
	var_260_string = var_3_string; // 0x8ce PushT
	if(var_260_string == 0) goto Label_2257; // 0x8cf JumpB
	goto Label_2262; // 0x8d0 Jump
	
Label_2262:
	goto Label_2277; // 0x8d6 Jump
	
Label_2277:
	return 0; // 0x8e5 Return
	
Label_2257:
	var_261_string = ""; // 0x8d1 PushV
	var_261_string = var_2_object; // 0x8d2 MovT
	func_4294(var_261_string); // 0x8d3 NEW_2
	goto Label_2252; // 0x8d5 Jump
	
Label_2263:
	var_272_string = "all"; // 0x8d7 PushS
	var_273_string = "idle"; // 0x8d8 PushS
	PlayAnimation(var_272_string, var_273_string); // 0x8d9 Func
	
Label_2267:
	WaitForAnimEnd(); // 0x8db Func
	var_274_string = var_3_string; // 0x8dd PushT
	if(var_274_string == 0) goto Label_2272; // 0x8de JumpB
	goto Label_2277; // 0x8df Jump
	
Label_2272:
	var_275_string = "all"; // 0x8e0 PushS
	var_276_string = "idle"; // 0x8e1 PushS
	PlayAnimation(var_275_string, var_276_string); // 0x8e2 Func
	goto Label_2267; // 0x8e4 Jump
}


func_5040()
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x13b0 PushV
	var_68_int = 221; // 0x13b1 PushI
	var_69_int = 1; // 0x13b2 PushI
	var_70_int = 519633; // 0x13b3 PushI
	CreateDiaryEntry(var_67_object, var_68_int, var_69_int, var_70_int); // 0x13b4 Func
	var_71_bool = 0; var_72_object = Obj(); var_73_int = 0; // 0x13b6 PushV
	var_72_object = var_67_object; // 0x13b7 Mov
	var_73_int = -1; // 0x13b8 MovI
	func_5105(var_71_bool, var_72_object, var_73_int); // 0x13b9 NEW_2
	return 2; // 0x13bb Return
}


func_2482(var_0_object, var_1_object, var_2_object, var_3_string, var_706_object, var_707_object)
{
	var_0_object = var_707_object; // 0x9b3 TMov
	var_1_object = var_706_object; // 0x9b4 TMov
	var_3_string = 0; // 0x9b5 TMovB
	var_712_int = 1; // 0x9b6 PushI
	if(var_712_int == 0) goto Label_2616; // 0x9b7 JumpB
	var_713_bool = 0; var_714_object = Obj(); // 0x9b8 PushV
	var_714_object = var_1_object; // 0x9b9 MovT
	func_4807(var_714_object); // 0x9ba NEW_2
	if(var_713_bool == 0) goto Label_2523; // 0x9bc JumpB
	var_719_object = Obj(); var_720_object = Obj(); // 0x9bd PushV
	var_719_object = var_1_object; // 0x9be MovT
	var_720_object = var_0_object; // 0x9bf MovT
	func_4676(); // 0x9c0 NEW_2
	var_723_string = ""; // 0x9c2 PushV
	var_723_string = "Neutral"; // 0x9c3 MovS
	func_2646(var_707_object, var_723_string); // 0x9c4 NEW_2
	var_731_int = 522082; // 0x9c6 PushI
	SetMessage(var_731_int); // 0x9c7 TObjFunc
	ClearReplies(); // 0x9c9 TObjFunc
	var_732_int = 523463; // 0x9cb PushI
	var_733_int = 24690; // 0x9cc PushI
	var_734_int = 24689; // 0x9cd PushI
	AddReply(var_732_int, var_733_int, var_734_int); // 0x9ce TObjFunc
	var_735_int = 523518; // 0x9d0 PushI
	var_736_int = 24749; // 0x9d1 PushI
	var_737_int = 24748; // 0x9d2 PushI
	AddReply(var_735_int, var_736_int, var_737_int); // 0x9d3 TObjFunc
	var_738_int = 523517; // 0x9d5 PushI
	var_739_int = 24750; // 0x9d6 PushI
	var_740_int = 24747; // 0x9d7 PushI
	AddReply(var_738_int, var_739_int, var_740_int); // 0x9d8 TObjFunc
	goto Label_2616; // 0x9da Jump
	
Label_2616:
	var_741_bool = 0; // 0xa38 PushV
	func_4487(var_741_bool); // 0xa39 NEW_2
	if(var_741_bool == 0) goto Label_2631; // 0xa3b JumpB
	
Label_2620:
	lshWaitForAnimEnd(); // 0xa3c Func
	var_742_string = var_3_string; // 0xa3e PushT
	if(var_742_string == 0) goto Label_2625; // 0xa3f JumpB
	goto Label_2630; // 0xa40 Jump
	
Label_2630:
	goto Label_2645; // 0xa46 Jump
	
Label_2645:
	return 0; // 0xa55 Return
	
Label_2625:
	var_743_string = ""; // 0xa41 PushV
	var_743_string = var_2_object; // 0xa42 MovT
	func_4294(var_743_string); // 0xa43 NEW_2
	goto Label_2620; // 0xa45 Jump
	
Label_2631:
	var_744_string = "all"; // 0xa47 PushS
	var_745_string = "idle"; // 0xa48 PushS
	PlayAnimation(var_744_string, var_745_string); // 0xa49 Func
	
Label_2635:
	WaitForAnimEnd(); // 0xa4b Func
	var_746_string = var_3_string; // 0xa4d PushT
	if(var_746_string == 0) goto Label_2640; // 0xa4e JumpB
	goto Label_2645; // 0xa4f Jump
	
Label_2640:
	var_747_string = "all"; // 0xa50 PushS
	var_748_string = "idle"; // 0xa51 PushS
	PlayAnimation(var_747_string, var_748_string); // 0xa52 Func
	goto Label_2635; // 0xa54 Jump
	
Label_2523:
	var_749_string = ""; // 0x9db PushV
	var_749_string = "Neutral"; // 0x9dc MovS
	func_2646(var_707_object, var_749_string); // 0x9dd NEW_2
	var_750_int = 522085; // 0x9df PushI
	SetMessage(var_750_int); // 0x9e0 TObjFunc
	ClearReplies(); // 0x9e2 TObjFunc
	var_751_bool = 0; // 0x9e4 PushV
	var_751_bool = 0; // 0x9e5 MovB
	var_752_bool = 0; var_753_object = Obj(); // 0x9e6 PushV
	var_753_object = var_1_object; // 0x9e7 MovT
	func_4819(var_753_object); // 0x9e8 NEW_2
	if(var_752_bool == 0) goto Label_2545; // 0x9ea JumpB
	var_758_bool = 0; var_759_object = Obj(); // 0x9eb PushV
	var_759_object = var_1_object; // 0x9ec MovT
	func_4831(var_759_object); // 0x9ed NEW_2
	if(var_758_bool == 0) goto Label_2545; // 0x9ef JumpB
	var_751_bool = 1; // 0x9f0 MovB
	
Label_2545:
	if(var_751_bool == 0) goto Label_2551; // 0x9f1 JumpB
	var_764_int = 523467; // 0x9f2 PushI
	var_765_int = 24695; // 0x9f3 PushI
	var_766_int = 24693; // 0x9f4 PushI
	AddReply(var_764_int, var_765_int, var_766_int); // 0x9f5 TObjFunc
	
Label_2551:
	var_767_bool = 0; // 0x9f7 PushV
	var_767_bool = 0; // 0x9f8 MovB
	var_768_bool = 0; var_769_object = Obj(); // 0x9f9 PushV
	var_769_object = var_1_object; // 0x9fa MovT
	func_4819(var_769_object); // 0x9fb NEW_2
	if(var_768_bool == 0) goto Label_2564; // 0x9fd JumpB
	var_770_bool = 0; var_771_object = Obj(); // 0x9fe PushV
	var_771_object = var_1_object; // 0x9ff MovT
	func_4843(var_771_object); // 0xa00 NEW_2
	if(var_770_bool == 0) goto Label_2564; // 0xa02 JumpB
	var_767_bool = 1; // 0xa03 MovB
	
Label_2564:
	if(var_767_bool == 0) goto Label_2570; // 0xa04 JumpB
	var_776_int = 523468; // 0xa05 PushI
	var_777_int = 24699; // 0xa06 PushI
	var_778_int = 24694; // 0xa07 PushI
	AddReply(var_776_int, var_777_int, var_778_int); // 0xa08 TObjFunc
	
Label_2570:
	var_779_bool = 0; // 0xa0a PushV
	var_779_bool = 0; // 0xa0b MovB
	var_780_bool = 0; var_781_object = Obj(); // 0xa0c PushV
	var_781_object = var_1_object; // 0xa0d MovT
	func_4819(var_781_object); // 0xa0e NEW_2
	if(var_780_bool == 0) goto Label_2583; // 0xa10 JumpB
	var_782_bool = 0; var_783_object = Obj(); // 0xa11 PushV
	var_783_object = var_1_object; // 0xa12 MovT
	func_4855(var_783_object); // 0xa13 NEW_2
	if(var_782_bool == 0) goto Label_2583; // 0xa15 JumpB
	var_779_bool = 1; // 0xa16 MovB
	
Label_2583:
	if(var_779_bool == 0) goto Label_2589; // 0xa17 JumpB
	var_788_int = 523479; // 0xa18 PushI
	var_789_int = 24706; // 0xa19 PushI
	var_790_int = 24705; // 0xa1a PushI
	AddReply(var_788_int, var_789_int, var_790_int); // 0xa1b TObjFunc
	
Label_2589:
	var_791_bool = 0; // 0xa1d PushV
	var_791_bool = 0; // 0xa1e MovB
	var_792_bool = 0; var_793_object = Obj(); // 0xa1f PushV
	var_793_object = var_1_object; // 0xa20 MovT
	func_4819(var_793_object); // 0xa21 NEW_2
	if(var_792_bool == 0) goto Label_2602; // 0xa23 JumpB
	var_794_bool = 0; var_795_object = Obj(); // 0xa24 PushV
	var_795_object = var_1_object; // 0xa25 MovT
	func_4867(var_795_object); // 0xa26 NEW_2
	if(var_794_bool == 0) goto Label_2602; // 0xa28 JumpB
	var_791_bool = 1; // 0xa29 MovB
	
Label_2602:
	if(var_791_bool == 0) goto Label_2608; // 0xa2a JumpB
	var_800_int = 523508; // 0xa2b PushI
	var_801_int = 24739; // 0xa2c PushI
	var_802_int = 24738; // 0xa2d PushI
	AddReply(var_800_int, var_801_int, var_802_int); // 0xa2e TObjFunc
	
Label_2608:
	var_803_int = 522086; // 0xa30 PushI
	var_804_int = -1; // 0xa31 PushI
	var_805_int = 23255; // 0xa32 PushI
	AddReply(var_803_int, var_804_int, var_805_int); // 0xa33 TObjFunc
	goto Label_2616; // 0xa35 Jump
}


func_4531()
{
	func_5079(); // 0x11b5 NEW_2
	var_167_bool = 0; var_168_string = ""; var_169_string = ""; // 0x11b7 PushV
	var_168_string = "quest_b3_01"; // 0x11b8 MovS
	var_169_string = "completed"; // 0x11b9 MovS
	func_4416(var_167_bool, var_168_string, var_169_string); // 0x11ba NEW_2
	return 0; // 0x11bc Return
}


func_4795(var_402_bool)
{
	var_404_int = 0; var_405_string = ""; // 0x12bc PushV
	var_405_string = "b11q01"; // 0x12bd MovS
	func_4363(var_404_int, var_405_string); // 0x12be NEW_2
	var_406_int = 1000; // 0x12c0 PushI
	var_407_bool = var_404_int == var_406_int; // 0x12c1 Eq
	if(var_407_bool == 0) goto Label_4805; // 0x12c2 JumpB
	var_402_bool = 1; // 0x12c3 MovB
	return 0; // 0x12c4 Return
	
Label_4805:
	var_402_bool = 0; // 0x12c5 MovB
	return 0; // 0x12c6 Return
}


func_4541()
{
	var_460_string = "oob1BigVlad1"; // 0x11be PushS
	var_461_int = 1; // 0x11bf PushI
	SetVariable(var_460_string, var_461_int); // 0x11c0 Func
	return 0; // 0x11c2 Return
}


func_5053()
{
	var_89_object = Obj(); var_90_object = Obj(); // 0x13bd PushV
	var_91_int = 222; // 0x13be PushI
	var_92_int = 1; // 0x13bf PushI
	var_93_int = 519634; // 0x13c0 PushI
	CreateDiaryEntry(var_90_object, var_91_int, var_92_int, var_93_int); // 0x13c1 Func
	var_94_bool = 0; var_95_object = Obj(); var_96_int = 0; // 0x13c3 PushV
	var_95_object = var_90_object; // 0x13c4 Mov
	var_96_int = 221; // 0x13c5 MovI
	func_5105(var_94_bool, var_95_object, var_96_int); // 0x13c6 NEW_2
	return 2; // 0x13c8 Return
}


func_3522(var_2_object, var_333_string)
{
	var_334_bool = 0; // 0xdc3 PushV
	func_4487(var_334_bool); // 0xdc4 NEW_2
	var_335_bool = var_334_bool == 0; // 0xdc6 Not
	if(var_335_bool == 0) goto Label_3529; // 0xdc7 JumpB
	return 0; // 0xdc8 Return
	
Label_3529:
	var_336_bool = var_333_string == var_2_object; // 0xdc9 Eq
	if(var_336_bool == 0) goto Label_3532; // 0xdca JumpB
	return 0; // 0xdcb Return
	
Label_3532:
	var_337_string = ""; var_338_bool = 0; // 0xdcc PushV
	var_337_string = var_333_string; // 0xdcd Mov
	var_339_string = ""; // 0xdce PushS
	var_340_bool = var_333_string == var_339_string; // 0xdcf Eq
	if(var_340_bool == 0) goto Label_3539; // 0xdd0 JumpB
	var_338_bool = 0; // 0xdd1 MovB
	goto Label_3540; // 0xdd2 Jump
	
Label_3540:
	func_4310(var_337_string, var_338_bool); // 0xdd4 NEW_2
	var_2_object = var_333_string; // 0xdd6 TMov
	return 0; // 0xdd7 Return
	
Label_3539:
	var_338_bool = 1; // 0xdd3 MovB
}


func_4547()
{
	var_138_string = "oob1BigVlad2"; // 0x11c4 PushS
	var_139_int = 1; // 0x11c5 PushI
	SetVariable(var_138_string, var_139_int); // 0x11c6 Func
	return 0; // 0x11c8 Return
}


func_4294(var_45_string)
{
	var_46_bool = 0; var_47_float = 0; var_48_float = 0; var_49_bool = 0; var_50_float = 0; var_51_float = 0; // 0x10c6 PushV
	lshHasAnimation(var_49_bool, var_45_string); // 0x10c7 Func
	var_52_bool = var_49_bool; // 0x10c9 Push
	if(var_52_bool == 0) goto Label_4305; // 0x10ca JumpB
	lshGetAnimTimes(var_45_string, var_50_float, var_51_float); // 0x10cb Func
	var_53_bool = 0; // 0x10cd PushB
	lshPlayAnimation(var_50_float, var_51_float, var_53_bool); // 0x10ce Func
	goto Label_4309; // 0x10d0 Jump
	
Label_4309:
	return 6; // 0x10d5 Return
	
Label_4305:
	var_54_string = "Can't find lsh animation : "; // 0x10d1 PushS
	var_55_int = var_54_string + var_45_string; // 0x10d2 Add
	Trace(var_55_int); // 0x10d3 Func
}


func_4807(var_713_bool)
{
	var_715_int = 0; var_716_string = ""; // 0x12c8 PushV
	var_716_string = "oob11BigVlad1"; // 0x12c9 MovS
	func_4363(var_715_int, var_716_string); // 0x12ca NEW_2
	var_717_int = 0; // 0x12cc PushI
	var_718_bool = var_715_int == var_717_int; // 0x12cd Eq
	if(var_718_bool == 0) goto Label_4817; // 0x12ce JumpB
	var_713_bool = 1; // 0x12cf MovB
	return 0; // 0x12d0 Return
	
Label_4817:
	var_713_bool = 0; // 0x12d1 MovB
	return 0; // 0x12d2 Return
}


func_4038(var_174_string, var_175_int)
{
	var_176_int = 0; var_177_int = 0; // 0xfc6 PushV
	GetProperty(var_174_string, var_177_int); // 0xfc7 ObjFunc
	var_178_int = var_177_int + var_175_int; // 0xfc9 Add
	SetProperty(var_174_string, var_178_int); // 0xfca ObjFunc
	return 2; // 0xfcc Return
}


func_4553()
{
	var_153_string = "oob1BigVlad3"; // 0x11ca PushS
	var_154_int = 1; // 0x11cb PushI
	SetVariable(var_153_string, var_154_int); // 0x11cc Func
	return 0; // 0x11ce Return
}


func_5066()
{
	var_133_object = Obj(); var_134_object = Obj(); // 0x13ca PushV
	var_135_int = 225; // 0x13cb PushI
	var_136_int = 1; // 0x13cc PushI
	var_137_int = 519650; // 0x13cd PushI
	CreateDiaryEntry(var_134_object, var_135_int, var_136_int, var_137_int); // 0x13ce Func
	var_138_bool = 0; var_139_object = Obj(); var_140_int = 0; // 0x13d0 PushV
	var_139_object = var_134_object; // 0x13d1 Mov
	var_140_int = 221; // 0x13d2 MovI
	func_5105(var_138_bool, var_139_object, var_140_int); // 0x13d3 NEW_2
	return 2; // 0x13d5 Return
}


func_3789(var_0_object, var_808_int, var_809_object)
{
	var_811_object = Obj(); var_812_bool = 0; var_813_int = 0; var_814_bool = 0; var_815_object = Obj(); var_816_bool = 0; var_817_int = 0; var_818_bool = 0; // 0xecd PushV
	var_0_object = var_809_object; // 0xece TMov
	var_819_bool = 0; var_820_object = Obj(); var_821_float = 0; // 0xecf PushV
	var_820_object = var_809_object; // 0xed0 Mov
	var_821_float = 70.0; // 0xed1 MovF
	func_4069(var_820_object, var_821_float); // 0xed2 NEW_2
	var_822_bool = var_819_bool == 0; // 0xed4 Not
	if(var_822_bool == 0) goto Label_3800; // 0xed5 JumpB
	var_808_int = -2; // 0xed6 MovI
	return 8; // 0xed7 Return
	
Label_3800:
	CreateDialog(var_815_object); // 0xed8 Func
	var_823_int = 0; // 0xeda PushV
	func_4481(var_823_int); // 0xedb NEW_2
	SetNPCName(var_823_int); // 0xedd ObjFunc
	var_824_int = 0; // 0xedf PushV
	func_4479(var_824_int); // 0xee0 NEW_2
	SetNPCDescription(var_824_int); // 0xee2 ObjFunc
	var_825_string = ""; // 0xee4 PushV
	func_4483(var_825_string); // 0xee5 NEW_2
	SetPhoto(var_825_string); // 0xee7 ObjFunc
	var_826_string = ""; // 0xee9 PushV
	func_4485(var_826_string); // 0xeea NEW_2
	SetPhoto2(var_826_string); // 0xeec ObjFunc
	var_827_int = 0; // 0xeee PushV
	func_5183(var_827_int); // 0xeef NEW_2
	SetPlayerName(var_827_int); // 0xef1 ObjFunc
	var_817_int = -1; // 0xef3 MovI
	IsOverrideActive(var_816_bool); // 0xef4 Func
	var_828_bool = var_816_bool; // 0xef6 Push
	if(var_828_bool == 0) goto Label_3834; // 0xef7 JumpB
	var_808_int = -2; // 0xef8 MovI
	return 8; // 0xef9 Return
	
Label_3834:
	DoDialog(var_815_object); // 0xefa Func
	var_829_bool = 0; var_830_object = Obj(); // 0xefc PushV
	var_831_object = Obj(); // 0xefd PushV
	func_4347(var_831_object); // 0xefe NEW_2
	var_830_object = var_831_object; // 0xeff Mov
	func_4156(var_829_bool, var_830_object); // 0xf01 NEW_2
	var_832_object = Obj(); var_833_object = Obj(); // 0xf03 PushV
	var_832_object = var_809_object; // 0xf04 Mov
	var_833_object = var_815_object; // 0xf05 Mov
	TaskCall(15); // 0xf06 TaskCall
	func_3870(var_834_object, var_835_object, var_836_string, var_837_bool, var_832_object, var_833_object); // 0xf07 NEW_2
	TaskReturn(); // 0xf08 TaskReturn
	IsDialogEnd(var_818_bool); // 0xf0a ObjFunc
	
Label_3852:
	var_862_bool = var_818_bool == 0; // 0xf0c Not
	if(var_862_bool == 0) goto Label_3859; // 0xf0d JumpB
	sync(); // 0xf0e Func
	IsDialogEnd(var_818_bool); // 0xf10 ObjFunc
	goto Label_3852; // 0xf12 Jump
	
Label_3859:
	var_863_object = Obj(); // 0xf13 PushV
	var_863_object = var_809_object; // 0xf14 Mov
	func_4138(); // 0xf15 NEW_2
	StopDialog(var_815_object); // 0xf17 Func
	GetReturnValue(var_817_int); // 0xf19 ObjFunc
	var_808_int = var_817_int; // 0xf1b Mov
	return 8; // 0xf1c Return
}


func_4045(var_48_bool, var_49_cvector)
{
	var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_bool = 0; // 0xfcd PushV
	GetPosition(var_53_cvector); // 0xfce Func
	var_54_cvector = var_49_cvector - var_53_cvector; // 0xfd0 Sub2
	var_56_float = GetByIndex(var_54_cvector, 0); // 0xfd1 PushE
	var_57_float = GetByIndex(var_54_cvector, 2); // 0xfd2 PushE
	Rotate(var_56_float, var_57_float, var_55_bool); // 0xfd3 Func
	var_48_bool = var_55_bool; // 0xfd5 Mov
	return 6; // 0xfd6 Return
}


func_4559()
{
	var_159_string = "oob1BigVlad4"; // 0x11d0 PushS
	var_160_int = 1; // 0x11d1 PushI
	SetVariable(var_159_string, var_160_int); // 0x11d2 Func
	return 0; // 0x11d4 Return
}


func_1490(var_2_object, var_462_string)
{
	var_463_bool = 0; // 0x5d3 PushV
	func_4487(var_463_bool); // 0x5d4 NEW_2
	var_464_bool = var_463_bool == 0; // 0x5d6 Not
	if(var_464_bool == 0) goto Label_1497; // 0x5d7 JumpB
	return 0; // 0x5d8 Return
	
Label_1497:
	var_465_bool = var_462_string == var_2_object; // 0x5d9 Eq
	if(var_465_bool == 0) goto Label_1500; // 0x5da JumpB
	return 0; // 0x5db Return
	
Label_1500:
	var_466_string = ""; var_467_bool = 0; // 0x5dc PushV
	var_466_string = var_462_string; // 0x5dd Mov
	var_468_string = ""; // 0x5de PushS
	var_469_bool = var_462_string == var_468_string; // 0x5df Eq
	if(var_469_bool == 0) goto Label_1507; // 0x5e0 JumpB
	var_467_bool = 0; // 0x5e1 MovB
	goto Label_1508; // 0x5e2 Jump
	
Label_1508:
	func_4310(var_466_string, var_467_bool); // 0x5e4 NEW_2
	var_2_object = var_462_string; // 0x5e6 TMov
	return 0; // 0x5e7 Return
	
Label_1507:
	var_467_bool = 1; // 0x5e3 MovB
}


func_4819(var_752_bool)
{
	var_754_int = 0; var_755_string = ""; // 0x12d4 PushV
	var_755_string = "b11KnowBigVladKill"; // 0x12d5 MovS
	func_4363(var_754_int, var_755_string); // 0x12d6 NEW_2
	var_756_int = 0; // 0x12d8 PushI
	var_757_bool = var_754_int != var_756_int; // 0x12d9 Neq
	if(var_757_bool == 0) goto Label_4829; // 0x12da JumpB
	var_752_bool = 1; // 0x12db MovB
	return 0; // 0x12dc Return
	
Label_4829:
	var_752_bool = 0; // 0x12dd MovB
	return 0; // 0x12de Return
}


func_4565()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x11d5 PushV
	var_50_string = "b1q01"; // 0x11d6 PushS
	var_51_int = 1; // 0x11d7 PushI
	SetVariable(var_50_string, var_51_int); // 0x11d8 Func
	var_52_object = Obj(); // 0x11da PushV
	func_5133(var_52_object); // 0x11db NEW_2
	var_49_object = var_52_object; // 0x11dc Mov
	var_59_string = "b1q01BigVladGotoKapella"; // 0x11de PushS
	var_60_string = "pt_map_kapella"; // 0x11df PushS
	var_61_int = 3; // 0x11e0 PushI
	var_62_int = 518128; // 0x11e1 PushI
	var_63_float = 0; // 0x11e2 PushV
	func_4440(var_63_float); // 0x11e3 NEW_2
	AddMark(var_59_string, var_60_string, var_61_int, var_62_int, var_63_float); // 0x11e5 ObjFunc
	var_66_string = "b1q01BigVladGotoMladVlad"; // 0x11e7 PushS
	var_67_string = "pt_map_mladvlad"; // 0x11e8 PushS
	var_68_int = 3; // 0x11e9 PushI
	var_69_int = 520041; // 0x11ea PushI
	var_70_float = 0; // 0x11eb PushV
	func_4440(var_70_float); // 0x11ec NEW_2
	AddMark(var_66_string, var_67_string, var_68_int, var_69_int, var_70_float); // 0x11ee ObjFunc
	func_4988(); // 0x11f1 NEW_2
	func_5001(); // 0x11f4 NEW_2
	return 2; // 0x11f6 Return
}


func_4310(var_239_string, var_240_bool)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0; // 0x10d6 PushV
	lshHasAnimation(var_246_bool, var_239_string); // 0x10d7 Func
	var_249_bool = var_246_bool; // 0x10d9 Push
	if(var_249_bool == 0) goto Label_4320; // 0x10da JumpB
	lshGetAnimTimes(var_239_string, var_247_float, var_248_float); // 0x10db Func
	lshPlayAnimation(var_247_float, var_248_float, var_240_bool); // 0x10dd Func
	goto Label_4324; // 0x10df Jump
	
Label_4324:
	return 6; // 0x10e4 Return
	
Label_4320:
	var_250_string = "Can't find lsh animation : "; // 0x10e0 PushS
	var_251_int = var_250_string + var_239_string; // 0x10e1 Add
	Trace(var_251_int); // 0x10e2 Func
}


func_4055(var_44_bool)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); // 0xfd7 PushV
	GetPosition(var_47_cvector); // 0xfd8 ObjFunc
	var_48_bool = 0; var_49_cvector = CVector(0,0,0); // 0xfda PushV
	var_49_cvector = var_47_cvector; // 0xfdb Mov
	func_4045(var_48_bool, var_49_cvector); // 0xfdc NEW_2
	var_44_bool = var_48_bool; // 0xfdd Mov
	return 2; // 0xfdf Return
}


func_5079()
{
	var_159_object = Obj(); var_160_object = Obj(); // 0x13d7 PushV
	var_161_int = 226; // 0x13d8 PushI
	var_162_int = 1; // 0x13d9 PushI
	var_163_int = 519651; // 0x13da PushI
	CreateDiaryEntry(var_160_object, var_161_int, var_162_int, var_163_int); // 0x13db Func
	var_164_bool = 0; var_165_object = Obj(); var_166_int = 0; // 0x13dd PushV
	var_165_object = var_160_object; // 0x13de Mov
	var_166_int = 221; // 0x13df MovI
	func_5105(var_164_bool, var_165_object, var_166_int); // 0x13e0 NEW_2
	return 2; // 0x13e2 Return
}


func_4831(var_758_bool)
{
	var_760_int = 0; var_761_string = ""; // 0x12e0 PushV
	var_761_string = "oob11BigVlad2"; // 0x12e1 MovS
	func_4363(var_760_int, var_761_string); // 0x12e2 NEW_2
	var_762_int = 0; // 0x12e4 PushI
	var_763_bool = var_760_int == var_762_int; // 0x12e5 Eq
	if(var_763_bool == 0) goto Label_4841; // 0x12e6 JumpB
	var_758_bool = 1; // 0x12e7 MovB
	return 0; // 0x12e8 Return
	
Label_4841:
	var_758_bool = 0; // 0x12e9 MovB
	return 0; // 0x12ea Return
}


func_479(var_0_object, var_587_int, var_588_object)
{
	var_590_object = Obj(); var_591_bool = 0; var_592_int = 0; var_593_bool = 0; var_594_object = Obj(); var_595_bool = 0; var_596_int = 0; var_597_bool = 0; // 0x1df PushV
	var_0_object = var_588_object; // 0x1e0 TMov
	var_598_bool = 0; var_599_object = Obj(); var_600_float = 0; // 0x1e1 PushV
	var_599_object = var_588_object; // 0x1e2 Mov
	var_600_float = 70.0; // 0x1e3 MovF
	func_4069(var_599_object, var_600_float); // 0x1e4 NEW_2
	var_601_bool = var_598_bool == 0; // 0x1e6 Not
	if(var_601_bool == 0) goto Label_490; // 0x1e7 JumpB
	var_587_int = -2; // 0x1e8 MovI
	return 8; // 0x1e9 Return
	
Label_490:
	CreateDialog(var_594_object); // 0x1ea Func
	var_602_int = 0; // 0x1ec PushV
	func_4481(var_602_int); // 0x1ed NEW_2
	SetNPCName(var_602_int); // 0x1ef ObjFunc
	var_603_int = 0; // 0x1f1 PushV
	func_4479(var_603_int); // 0x1f2 NEW_2
	SetNPCDescription(var_603_int); // 0x1f4 ObjFunc
	var_604_string = ""; // 0x1f6 PushV
	func_4483(var_604_string); // 0x1f7 NEW_2
	SetPhoto(var_604_string); // 0x1f9 ObjFunc
	var_605_string = ""; // 0x1fb PushV
	func_4485(var_605_string); // 0x1fc NEW_2
	SetPhoto2(var_605_string); // 0x1fe ObjFunc
	var_606_int = 0; // 0x200 PushV
	func_5183(var_606_int); // 0x201 NEW_2
	SetPlayerName(var_606_int); // 0x203 ObjFunc
	var_596_int = -1; // 0x205 MovI
	IsOverrideActive(var_595_bool); // 0x206 Func
	var_607_bool = var_595_bool; // 0x208 Push
	if(var_607_bool == 0) goto Label_524; // 0x209 JumpB
	var_587_int = -2; // 0x20a MovI
	return 8; // 0x20b Return
	
Label_524:
	DoDialog(var_594_object); // 0x20c Func
	var_608_bool = 0; var_609_object = Obj(); // 0x20e PushV
	var_610_object = Obj(); // 0x20f PushV
	func_4347(var_610_object); // 0x210 NEW_2
	var_609_object = var_610_object; // 0x211 Mov
	func_4156(var_608_bool, var_609_object); // 0x213 NEW_2
	var_611_object = Obj(); var_612_object = Obj(); // 0x215 PushV
	var_611_object = var_588_object; // 0x216 Mov
	var_612_object = var_594_object; // 0x217 Mov
	TaskCall(3); // 0x218 TaskCall
	func_560(var_613_object, var_614_object, var_615_string, var_616_bool, var_611_object, var_612_object); // 0x219 NEW_2
	TaskReturn(); // 0x21a TaskReturn
	IsDialogEnd(var_597_bool); // 0x21c ObjFunc
	
Label_542:
	var_678_bool = var_597_bool == 0; // 0x21e Not
	if(var_678_bool == 0) goto Label_549; // 0x21f JumpB
	sync(); // 0x220 Func
	IsDialogEnd(var_597_bool); // 0x222 ObjFunc
	goto Label_542; // 0x224 Jump
	
Label_549:
	var_679_object = Obj(); // 0x225 PushV
	var_679_object = var_588_object; // 0x226 Mov
	func_4138(); // 0x227 NEW_2
	StopDialog(var_594_object); // 0x229 Func
	GetReturnValue(var_596_int); // 0x22b ObjFunc
	var_587_int = var_596_int; // 0x22d Mov
	return 8; // 0x22e Return
}


func_4064(var_41_bool)
{
	var_42_bool = 0; var_43_bool = 0; // 0xfe0 PushV
	IsLoaded(var_43_bool); // 0xfe1 Func
	var_41_bool = var_43_bool; // 0xfe3 Mov
	return 2; // 0xfe4 Return
}


func_5092(var_64_object)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x13e4 PushV
	GetDiaryRoot(var_66_object); // 0x13e5 Func
	var_67_bool = var_66_object == 0; // 0x13e7 Not
	if(var_67_bool == 0) goto Label_5102; // 0x13e8 JumpB
	var_68_string = "Can't retrieve diary root"; // 0x13e9 PushS
	Trace(var_68_string); // 0x13ea Func
	var_64_object = 0; // 0x13ec MovB
	return 2; // 0x13ed Return
	
Label_5102:
	var_64_object = var_66_object; // 0x13ee Mov
	return 2; // 0x13ef Return
}


func_4325(var_167_bool, var_168_string)
{
	var_169_bool = 0; var_170_bool = 0; // 0x10e5 PushV
	var_171_bool = 0; // 0x10e6 PushV
	func_4487(var_171_bool); // 0x10e7 NEW_2
	if(var_171_bool == 0) goto Label_4338; // 0x10e9 JumpB
	lshHasSpeech(var_170_bool, var_168_string); // 0x10ea Func
	var_172_bool = var_170_bool; // 0x10ec Push
	if(var_172_bool == 0) goto Label_4338; // 0x10ed JumpB
	lshPlaySpeech(var_168_string); // 0x10ee Func
	var_167_bool = 1; // 0x10f0 MovB
	return 2; // 0x10f1 Return
	
Label_4338:
	var_167_bool = 0; // 0x10f2 MovB
	return 2; // 0x10f3 Return
}


func_2278(var_2_object, var_235_string)
{
	var_236_bool = 0; // 0x8e7 PushV
	func_4487(var_236_bool); // 0x8e8 NEW_2
	var_237_bool = var_236_bool == 0; // 0x8ea Not
	if(var_237_bool == 0) goto Label_2285; // 0x8eb JumpB
	return 0; // 0x8ec Return
	
Label_2285:
	var_238_bool = var_235_string == var_2_object; // 0x8ed Eq
	if(var_238_bool == 0) goto Label_2288; // 0x8ee JumpB
	return 0; // 0x8ef Return
	
Label_2288:
	var_239_string = ""; var_240_bool = 0; // 0x8f0 PushV
	var_239_string = var_235_string; // 0x8f1 Mov
	var_241_string = ""; // 0x8f2 PushS
	var_242_bool = var_235_string == var_241_string; // 0x8f3 Eq
	if(var_242_bool == 0) goto Label_2295; // 0x8f4 JumpB
	var_240_bool = 0; // 0x8f5 MovB
	goto Label_2296; // 0x8f6 Jump
	
Label_2296:
	func_4310(var_239_string, var_240_bool); // 0x8f8 NEW_2
	var_2_object = var_235_string; // 0x8fa TMov
	return 0; // 0x8fb Return
	
Label_2295:
	var_240_bool = 1; // 0x8f7 MovB
}


func_4069(var_72_bool, var_74_float)
{
	var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_bool = 0; var_83_bool = 0; var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_bool = 0; var_92_bool = 0; // 0xfe5 PushV
	GetPosition(var_85_cvector); // 0xfe6 ObjFunc
	GetEyesHeight(var_84_float); // 0xfe8 ObjFunc
	var_93_float = GetByIndex(var_85_cvector, 1); // 0xfea PushE
	var_93_float = var_93_float + var_84_float; // 0xfeb Add2
	SetByIndex(var_85_cvector, 1) = var_93_float; // 0xfec PopE
	GetPosition(var_86_cvector); // 0xfed Func
	GetEyesHeight(var_84_float); // 0xfef Func
	var_94_float = GetByIndex(var_86_cvector, 1); // 0xff1 PushE
	var_94_float = var_94_float + var_84_float; // 0xff2 Add2
	SetByIndex(var_86_cvector, 1) = var_94_float; // 0xff3 PopE
	var_87_cvector = var_85_cvector - var_86_cvector; // 0xff4 Sub2
	var_95_float = GetByIndex(var_87_cvector, 1); // 0xff5 PushE
	var_95_float = 0; // 0xff6 MovI
	SetByIndex(var_87_cvector, 1) = var_95_float; // 0xff7 PopE
	var_96_int = var_87_cvector | var_87_cvector; // 0xff8 Or
	var_97_float = sqrt(var_96_int); // 0xff9 Sqrt
	var_87_cvector = var_87_cvector / var_87_cvector; // 0xffa Div2
	var_88_cvector = -var_87_cvector; // 0xffb Neg2
	var_98_float = var_87_cvector * var_74_float; // 0xffc Mult
	var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); // 0xffd PushV
	var_101_cvector = CVector(0.0, 1.0, 0.0); // 0xffe PushVec
	var_100_cvector = var_88_cvector ^ var_101_cvector; // 0xfff Xor2
	func_4353(var_99_cvector, var_100_cvector); // 0x1000 NEW_2
	var_107_int = 25; // 0x1002 PushI
	var_108_float = var_99_cvector * var_107_int; // 0x1003 Mult
	var_109_int = var_98_float + var_108_float; // 0x1004 Add
	var_110_cvector = CVector(0.0, 10.0, 0.0); // 0x1005 PushVec
	var_89_cvector = var_109_int - var_110_cvector; // 0x1006 Sub2
	var_90_cvector = var_86_cvector + var_89_cvector; // 0x1007 Add2
	IsOverrideActive(var_91_bool); // 0x1008 Func
	var_111_bool = var_91_bool; // 0x100a Push
	if(var_111_bool == 0) goto Label_4110; // 0x100b JumpB
	var_72_bool = 0; // 0x100c MovB
	return 18; // 0x100d Return
	
Label_4110:
	StopWorld(); // 0x100e Func
	var_112_bool = 1; // 0x1010 PushB
	CameraTransit(var_90_cvector, var_88_cvector, var_112_bool); // 0x1011 Func
	var_113_float = GetByIndex(var_89_cvector, 0); // 0x1013 PushE
	var_114_float = GetByIndex(var_89_cvector, 2); // 0x1014 PushE
	Rotate(var_113_float, var_114_float); // 0x1015 Func
	var_115_bool = 0; // 0x1017 PushV
	func_4487(var_115_bool); // 0x1018 NEW_2
	if(var_115_bool == 0) goto Label_4124; // 0x101a JumpB
	goto Label_4132; // 0x101b Jump
	
Label_4132:
	CameraWaitForPlayFinish(); // 0x1024 Func
	ResumeWorld(); // 0x1026 Func
	var_72_bool = 1; // 0x1028 MovB
	return 18; // 0x1029 Return
	
Label_4124:
	var_116_string = "head"; // 0x101c PushS
	HasAnimationTrack(var_92_bool, var_116_string); // 0x101d Func
	var_117_bool = var_92_bool; // 0x101f Push
	if(var_117_bool == 0) goto Label_4132; // 0x1020 JumpB
	var_118_string = "head"; // 0x1021 PushS
	LookAsyncCamera(var_118_string); // 0x1022 Func
}


func_4843(var_770_bool)
{
	var_772_int = 0; var_773_string = ""; // 0x12ec PushV
	var_773_string = "oob11BigVlad3"; // 0x12ed MovS
	func_4363(var_772_int, var_773_string); // 0x12ee NEW_2
	var_774_int = 0; // 0x12f0 PushI
	var_775_bool = var_772_int == var_774_int; // 0x12f1 Eq
	if(var_775_bool == 0) goto Label_4853; // 0x12f2 JumpB
	var_770_bool = 1; // 0x12f3 MovB
	return 0; // 0x12f4 Return
	
Label_4853:
	var_770_bool = 0; // 0x12f5 MovB
	return 0; // 0x12f6 Return
}


func_5105(var_55_bool, var_56_object, var_57_int)
{
	var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0; var_61_object = Obj(); var_62_object = Obj(); var_63_int = 0; // 0x13f1 PushV
	var_64_object = Obj(); // 0x13f2 PushV
	func_5092(var_64_object); // 0x13f3 NEW_2
	var_61_object = var_64_object; // 0x13f4 Mov
	Find(var_57_int, var_62_object); // 0x13f6 ObjFunc
	var_69_bool = var_62_object == 0; // 0x13f8 Not
	if(var_69_bool == 0) goto Label_5120; // 0x13f9 JumpB
	var_70_string = "Can't find diary parent with id: "; // 0x13fa PushS
	var_71_int = var_70_string + var_57_int; // 0x13fb Add
	Trace(var_71_int); // 0x13fc Func
	var_55_bool = 0; // 0x13fe MovB
	return 6; // 0x13ff Return
	
Label_5120:
	AddChild(var_56_object); // 0x1400 ObjFunc
	var_72_int = 7; // 0x1402 PushI
	SendWorldWndMessage(var_72_int); // 0x1403 Func
	GetCategory(var_63_int); // 0x1405 ObjFunc
	SetDiarySection(var_63_int); // 0x1407 Func
	var_55_bool = 0; // 0x1409 MovB
	return 6; // 0x140a Return
}


func_4340()
{
	var_43_bool = 0; // 0x10f4 PushV
	func_4487(var_43_bool); // 0x10f5 NEW_2
	if(var_43_bool == 0) goto Label_4346; // 0x10f7 JumpB
	lshStopSpeech(); // 0x10f8 Func
	
Label_4346:
	return 0; // 0x10fa Return
}


func_4855(var_782_bool)
{
	var_784_int = 0; var_785_string = ""; // 0x12f8 PushV
	var_785_string = "oob11BigVlad4"; // 0x12f9 MovS
	func_4363(var_784_int, var_785_string); // 0x12fa NEW_2
	var_786_int = 0; // 0x12fc PushI
	var_787_bool = var_784_int == var_786_int; // 0x12fd Eq
	if(var_787_bool == 0) goto Label_4865; // 0x12fe JumpB
	var_782_bool = 1; // 0x12ff MovB
	return 0; // 0x1300 Return
	
Label_4865:
	var_782_bool = 0; // 0x1301 MovB
	return 0; // 0x1302 Return
}


func_4600()
{
	var_140_string = ""; var_141_bool = 0; // 0x11f9 PushV
	var_140_string = "cot_alexandr@door1"; // 0x11fa MovS
	var_141_bool = 0; // 0x11fb MovB
	func_4368(var_140_string, var_141_bool); // 0x11fc NEW_2
	return 0; // 0x11fe Return
}


func_4347(var_135_object)
{
	var_136_object = Obj(); var_137_object = Obj(); // 0x10fb PushV
	self(var_137_object); // 0x10fc Func
	var_135_object = var_137_object; // 0x10fe Mov
	return 2; // 0x10ff Return
}


func_4607()
{
	var_152_string = ""; var_153_bool = 0; // 0x1200 PushV
	var_152_string = "cot_katerina@door1"; // 0x1201 MovS
	var_153_bool = 0; // 0x1202 MovB
	func_4368(var_152_string, var_153_bool); // 0x1203 NEW_2
	return 0; // 0x1205 Return
}


