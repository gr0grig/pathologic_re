task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xb0 PushI
	if(var_48_int == 0) goto Label_516; // 0xb1 JumpB
	func_4679(); // 0xb3 NEW_2
	var_50_int = 19713; // 0xb5 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xb6 Eq
	if(var_51_bool == 0) goto Label_189; // 0xb7 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xb8 PushV
	var_52_object = var_1_object; // 0xb9 MovT
	var_53_object = var_0_object; // 0xba MovT
	func_4828(); // 0xbb NEW_2
	
Label_189:
	var_56_int = 19715; // 0xbd PushI
	var_57_bool = var_47_cvector == var_56_int; // 0xbe Eq
	if(var_57_bool == 0) goto Label_207; // 0xbf JumpB
	var_58_object = Obj(); var_59_object = Obj(); // 0xc0 PushV
	var_58_object = var_1_object; // 0xc1 MovT
	var_59_object = var_0_object; // 0xc2 MovT
	func_4834(); // 0xc3 NEW_2
	var_90_object = Obj(); var_91_object = Obj(); // 0xc5 PushV
	var_90_object = var_1_object; // 0xc6 MovT
	var_91_object = var_0_object; // 0xc7 MovT
	func_5015(); // 0xc8 NEW_2
	var_115_object = Obj(); var_116_object = Obj(); // 0xca PushV
	var_115_object = var_1_object; // 0xcb MovT
	var_116_object = var_0_object; // 0xcc MovT
	func_5020(); // 0xcd NEW_2
	
Label_207:
	var_141_int = 19963; // 0xcf PushI
	var_142_bool = var_47_cvector == var_141_int; // 0xd0 Eq
	if(var_142_bool == 0) goto Label_225; // 0xd1 JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0xd2 PushV
	var_143_object = var_1_object; // 0xd3 MovT
	var_144_object = var_0_object; // 0xd4 MovT
	func_4834(); // 0xd5 NEW_2
	var_145_object = Obj(); var_146_object = Obj(); // 0xd7 PushV
	var_145_object = var_1_object; // 0xd8 MovT
	var_146_object = var_0_object; // 0xd9 MovT
	func_5015(); // 0xda NEW_2
	var_147_object = Obj(); var_148_object = Obj(); // 0xdc PushV
	var_147_object = var_1_object; // 0xdd MovT
	var_148_object = var_0_object; // 0xde MovT
	func_5020(); // 0xdf NEW_2
	
Label_225:
	var_149_int = 19712; // 0xe1 PushI
	var_150_bool = var_46_bool == var_149_int; // 0xe2 Eq
	if(var_150_bool == 0) goto Label_262; // 0xe3 JumpB
	var_151_string = ""; // 0xe4 PushV
	var_151_string = "Strange"; // 0xe5 MovS
	func_153(var_47_cvector, var_151_string); // 0xe6 NEW_2
	var_168_int = 518620; // 0xe8 PushI
	SetMessage(var_168_int); // 0xe9 TObjFunc
	ClearReplies(); // 0xeb TObjFunc
	var_169_bool = 0; // 0xed PushV
	var_169_bool = 0; // 0xee MovB
	var_170_bool = 0; var_171_object = Obj(); // 0xef PushV
	var_171_object = var_1_object; // 0xf0 MovT
	func_5151(var_171_object); // 0xf1 NEW_2
	if(var_170_bool == 0) goto Label_250; // 0xf3 JumpB
	var_176_bool = 0; var_177_object = Obj(); // 0xf4 PushV
	var_177_object = var_1_object; // 0xf5 MovT
	func_5163(var_177_object); // 0xf6 NEW_2
	if(var_176_bool == 0) goto Label_250; // 0xf8 JumpB
	var_169_bool = 1; // 0xf9 MovB
	
Label_250:
	if(var_169_bool == 0) goto Label_256; // 0xfa JumpB
	var_182_int = 518621; // 0xfb PushI
	var_183_int = 19933; // 0xfc PushI
	var_184_int = 19713; // 0xfd PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xfe TObjFunc
	
Label_256:
	var_185_int = 518624; // 0x100 PushI
	var_186_int = -1; // 0x101 PushI
	var_187_int = 19716; // 0x102 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x103 TObjFunc
	return 0; // 0x105 Return
	
Label_262:
	var_188_int = 19933; // 0x106 PushI
	var_189_bool = var_46_bool == var_188_int; // 0x107 Eq
	if(var_189_bool == 0) goto Label_280; // 0x108 JumpB
	var_190_string = ""; // 0x109 PushV
	var_190_string = "Neutral"; // 0x10a MovS
	func_153(var_47_cvector, var_190_string); // 0x10b NEW_2
	var_191_int = 518828; // 0x10d PushI
	SetMessage(var_191_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_192_int = 518829; // 0x112 PushI
	var_193_int = 19935; // 0x113 PushI
	var_194_int = 19934; // 0x114 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x115 TObjFunc
	return 0; // 0x117 Return
	
Label_280:
	var_195_int = 19935; // 0x118 PushI
	var_196_bool = var_46_bool == var_195_int; // 0x119 Eq
	if(var_196_bool == 0) goto Label_303; // 0x11a JumpB
	var_197_string = ""; // 0x11b PushV
	var_197_string = "Fear"; // 0x11c MovS
	func_153(var_47_cvector, var_197_string); // 0x11d NEW_2
	var_198_int = 518830; // 0x11f PushI
	SetMessage(var_198_int); // 0x120 TObjFunc
	ClearReplies(); // 0x122 TObjFunc
	var_199_int = 518831; // 0x124 PushI
	var_200_int = 19937; // 0x125 PushI
	var_201_int = 19936; // 0x126 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x127 TObjFunc
	var_202_int = 518845; // 0x129 PushI
	var_203_int = 19951; // 0x12a PushI
	var_204_int = 19950; // 0x12b PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x12c TObjFunc
	return 0; // 0x12e Return
	
Label_303:
	var_205_int = 19951; // 0x12f PushI
	var_206_bool = var_46_bool == var_205_int; // 0x130 Eq
	if(var_206_bool == 0) goto Label_326; // 0x131 JumpB
	var_207_string = ""; // 0x132 PushV
	var_207_string = "Neutral"; // 0x133 MovS
	func_153(var_47_cvector, var_207_string); // 0x134 NEW_2
	var_208_int = 518846; // 0x136 PushI
	SetMessage(var_208_int); // 0x137 TObjFunc
	ClearReplies(); // 0x139 TObjFunc
	var_209_int = 518847; // 0x13b PushI
	var_210_int = 19937; // 0x13c PushI
	var_211_int = 19952; // 0x13d PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x13e TObjFunc
	var_212_int = 518848; // 0x140 PushI
	var_213_int = 19940; // 0x141 PushI
	var_214_int = 19953; // 0x142 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x143 TObjFunc
	return 0; // 0x145 Return
	
Label_326:
	var_215_int = 19937; // 0x146 PushI
	var_216_bool = var_46_bool == var_215_int; // 0x147 Eq
	if(var_216_bool == 0) goto Label_344; // 0x148 JumpB
	var_217_string = ""; // 0x149 PushV
	var_217_string = "Neutral"; // 0x14a MovS
	func_153(var_47_cvector, var_217_string); // 0x14b NEW_2
	var_218_int = 518832; // 0x14d PushI
	SetMessage(var_218_int); // 0x14e TObjFunc
	ClearReplies(); // 0x150 TObjFunc
	var_219_int = 518834; // 0x152 PushI
	var_220_int = 19940; // 0x153 PushI
	var_221_int = 19939; // 0x154 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x155 TObjFunc
	return 0; // 0x157 Return
	
Label_344:
	var_222_int = 19940; // 0x158 PushI
	var_223_bool = var_46_bool == var_222_int; // 0x159 Eq
	if(var_223_bool == 0) goto Label_367; // 0x15a JumpB
	var_224_string = ""; // 0x15b PushV
	var_224_string = "Neutral"; // 0x15c MovS
	func_153(var_47_cvector, var_224_string); // 0x15d NEW_2
	var_225_int = 518835; // 0x15f PushI
	SetMessage(var_225_int); // 0x160 TObjFunc
	ClearReplies(); // 0x162 TObjFunc
	var_226_int = 518837; // 0x164 PushI
	var_227_int = 19948; // 0x165 PushI
	var_228_int = 19942; // 0x166 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x167 TObjFunc
	var_229_int = 518836; // 0x169 PushI
	var_230_int = 19943; // 0x16a PushI
	var_231_int = 19941; // 0x16b PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x16c TObjFunc
	return 0; // 0x16e Return
	
Label_367:
	var_232_int = 19943; // 0x16f PushI
	var_233_bool = var_46_bool == var_232_int; // 0x170 Eq
	if(var_233_bool == 0) goto Label_390; // 0x171 JumpB
	var_234_string = ""; // 0x172 PushV
	var_234_string = "Neutral"; // 0x173 MovS
	func_153(var_47_cvector, var_234_string); // 0x174 NEW_2
	var_235_int = 518838; // 0x176 PushI
	SetMessage(var_235_int); // 0x177 TObjFunc
	ClearReplies(); // 0x179 TObjFunc
	var_236_int = 518841; // 0x17b PushI
	var_237_int = 19954; // 0x17c PushI
	var_238_int = 19946; // 0x17d PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x17e TObjFunc
	var_239_int = 518839; // 0x180 PushI
	var_240_int = 19945; // 0x181 PushI
	var_241_int = 19944; // 0x182 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x183 TObjFunc
	return 0; // 0x185 Return
	
Label_390:
	var_242_int = 19945; // 0x186 PushI
	var_243_bool = var_46_bool == var_242_int; // 0x187 Eq
	if(var_243_bool == 0) goto Label_408; // 0x188 JumpB
	var_244_string = ""; // 0x189 PushV
	var_244_string = "Grin"; // 0x18a MovS
	func_153(var_47_cvector, var_244_string); // 0x18b NEW_2
	var_245_int = 518840; // 0x18d PushI
	SetMessage(var_245_int); // 0x18e TObjFunc
	ClearReplies(); // 0x190 TObjFunc
	var_246_int = 518842; // 0x192 PushI
	var_247_int = -1; // 0x193 PushI
	var_248_int = 19947; // 0x194 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x195 TObjFunc
	return 0; // 0x197 Return
	
Label_408:
	var_249_int = 19954; // 0x198 PushI
	var_250_bool = var_46_bool == var_249_int; // 0x199 Eq
	if(var_250_bool == 0) goto Label_431; // 0x19a JumpB
	var_251_string = ""; // 0x19b PushV
	var_251_string = "Grin"; // 0x19c MovS
	func_153(var_47_cvector, var_251_string); // 0x19d NEW_2
	var_252_int = 518849; // 0x19f PushI
	SetMessage(var_252_int); // 0x1a0 TObjFunc
	ClearReplies(); // 0x1a2 TObjFunc
	var_253_int = 518850; // 0x1a4 PushI
	var_254_int = 19956; // 0x1a5 PushI
	var_255_int = 19955; // 0x1a6 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x1a7 TObjFunc
	var_256_int = 518852; // 0x1a9 PushI
	var_257_int = 19956; // 0x1aa PushI
	var_258_int = 19957; // 0x1ab PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x1ac TObjFunc
	return 0; // 0x1ae Return
	
Label_431:
	var_259_int = 19956; // 0x1af PushI
	var_260_bool = var_46_bool == var_259_int; // 0x1b0 Eq
	if(var_260_bool == 0) goto Label_449; // 0x1b1 JumpB
	var_261_string = ""; // 0x1b2 PushV
	var_261_string = "Neutral"; // 0x1b3 MovS
	func_153(var_47_cvector, var_261_string); // 0x1b4 NEW_2
	var_262_int = 518851; // 0x1b6 PushI
	SetMessage(var_262_int); // 0x1b7 TObjFunc
	ClearReplies(); // 0x1b9 TObjFunc
	var_263_int = 518853; // 0x1bb PushI
	var_264_int = 19714; // 0x1bc PushI
	var_265_int = 19959; // 0x1bd PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x1be TObjFunc
	return 0; // 0x1c0 Return
	
Label_449:
	var_266_int = 19948; // 0x1c1 PushI
	var_267_bool = var_46_bool == var_266_int; // 0x1c2 Eq
	if(var_267_bool == 0) goto Label_467; // 0x1c3 JumpB
	var_268_string = ""; // 0x1c4 PushV
	var_268_string = "Grimacing"; // 0x1c5 MovS
	func_153(var_47_cvector, var_268_string); // 0x1c6 NEW_2
	var_269_int = 518843; // 0x1c8 PushI
	SetMessage(var_269_int); // 0x1c9 TObjFunc
	ClearReplies(); // 0x1cb TObjFunc
	var_270_int = 518844; // 0x1cd PushI
	var_271_int = 19714; // 0x1ce PushI
	var_272_int = 19949; // 0x1cf PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x1d0 TObjFunc
	return 0; // 0x1d2 Return
	
Label_467:
	var_273_int = 19714; // 0x1d3 PushI
	var_274_bool = var_46_bool == var_273_int; // 0x1d4 Eq
	if(var_274_bool == 0) goto Label_486; // 0x1d5 JumpB
	var_275_int = 518622; // 0x1d6 PushI
	SetMessage(var_275_int); // 0x1d7 TObjFunc
	ClearReplies(); // 0x1d9 TObjFunc
	var_276_int = 518623; // 0x1db PushI
	var_277_int = -1; // 0x1dc PushI
	var_278_int = 19715; // 0x1dd PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x1de TObjFunc
	var_279_int = 518854; // 0x1e0 PushI
	var_280_int = 19962; // 0x1e1 PushI
	var_281_int = 19961; // 0x1e2 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x1e3 TObjFunc
	return 0; // 0x1e5 Return
	
Label_486:
	var_282_int = 19962; // 0x1e6 PushI
	var_283_bool = var_46_bool == var_282_int; // 0x1e7 Eq
	if(var_283_bool == 0) goto Label_504; // 0x1e8 JumpB
	var_284_string = ""; // 0x1e9 PushV
	var_284_string = "Neutral"; // 0x1ea MovS
	func_153(var_47_cvector, var_284_string); // 0x1eb NEW_2
	var_285_int = 518855; // 0x1ed PushI
	SetMessage(var_285_int); // 0x1ee TObjFunc
	ClearReplies(); // 0x1f0 TObjFunc
	var_286_int = 518856; // 0x1f2 PushI
	var_287_int = -1; // 0x1f3 PushI
	var_288_int = 19963; // 0x1f4 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x1f5 TObjFunc
	return 0; // 0x1f7 Return
	
Label_504:
	var_3_string = 1; // 0x1f8 TMovB
	var_289_bool = 0; // 0x1f9 PushV
	func_4826(var_289_bool); // 0x1fa NEW_2
	if(var_289_bool == 0) goto Label_512; // 0x1fc JumpB
	lshStopAnimation(); // 0x1fd Func
	goto Label_514; // 0x1ff Jump
	
Label_514:
	return 0; // 0x202 Return
	
Label_512:
	StopAnimation(); // 0x200 Func
	
Label_516:
	return 0; // 0x204 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x2b6 PushI
	if(var_48_int == 0) goto Label_911; // 0x2b7 JumpB
	func_4679(); // 0x2b9 NEW_2
	var_50_int = 20446; // 0x2bb PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x2bc Eq
	if(var_51_bool == 0) goto Label_712; // 0x2bd JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x2be PushV
	var_52_object = var_1_object; // 0x2bf MovT
	var_53_object = var_0_object; // 0x2c0 MovT
	func_4872(); // 0x2c1 NEW_2
	var_101_object = Obj(); var_102_object = Obj(); // 0x2c3 PushV
	var_101_object = var_1_object; // 0x2c4 MovT
	var_102_object = var_0_object; // 0x2c5 MovT
	func_4900(); // 0x2c6 NEW_2
	
Label_712:
	var_127_int = 20443; // 0x2c8 PushI
	var_128_bool = var_47_cvector == var_127_int; // 0x2c9 Eq
	if(var_128_bool == 0) goto Label_720; // 0x2ca JumpB
	var_129_object = Obj(); var_130_object = Obj(); // 0x2cb PushV
	var_129_object = var_1_object; // 0x2cc MovT
	var_130_object = var_0_object; // 0x2cd MovT
	func_4866(); // 0x2ce NEW_2
	
Label_720:
	var_133_int = 20425; // 0x2d0 PushI
	var_134_bool = var_46_bool == var_133_int; // 0x2d1 Eq
	if(var_134_bool == 0) goto Label_758; // 0x2d2 JumpB
	var_135_string = ""; // 0x2d3 PushV
	var_135_string = "Neutral"; // 0x2d4 MovS
	func_671(var_47_cvector, var_135_string); // 0x2d5 NEW_2
	var_152_int = 519273; // 0x2d7 PushI
	SetMessage(var_152_int); // 0x2d8 TObjFunc
	ClearReplies(); // 0x2da TObjFunc
	var_153_bool = 0; var_154_object = Obj(); // 0x2dc PushV
	var_154_object = var_1_object; // 0x2dd MovT
	func_5187(var_154_object); // 0x2de NEW_2
	if(var_153_bool == 0) goto Label_742; // 0x2e0 JumpB
	var_161_int = 519274; // 0x2e1 PushI
	var_162_int = 20428; // 0x2e2 PushI
	var_163_int = 20426; // 0x2e3 PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x2e4 TObjFunc
	
Label_742:
	var_164_bool = 0; var_165_object = Obj(); // 0x2e6 PushV
	var_165_object = var_1_object; // 0x2e7 MovT
	func_5175(var_165_object); // 0x2e8 NEW_2
	if(var_164_bool == 0) goto Label_752; // 0x2ea JumpB
	var_170_int = 519289; // 0x2eb PushI
	var_171_int = 20444; // 0x2ec PushI
	var_172_int = 20443; // 0x2ed PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x2ee TObjFunc
	
Label_752:
	var_173_int = 519275; // 0x2f0 PushI
	var_174_int = -1; // 0x2f1 PushI
	var_175_int = 20427; // 0x2f2 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x2f3 TObjFunc
	return 0; // 0x2f5 Return
	
Label_758:
	var_176_int = 20444; // 0x2f6 PushI
	var_177_bool = var_46_bool == var_176_int; // 0x2f7 Eq
	if(var_177_bool == 0) goto Label_776; // 0x2f8 JumpB
	var_178_string = ""; // 0x2f9 PushV
	var_178_string = "Neutral"; // 0x2fa MovS
	func_671(var_47_cvector, var_178_string); // 0x2fb NEW_2
	var_179_int = 519290; // 0x2fd PushI
	SetMessage(var_179_int); // 0x2fe TObjFunc
	ClearReplies(); // 0x300 TObjFunc
	var_180_int = 519291; // 0x302 PushI
	var_181_int = -1; // 0x303 PushI
	var_182_int = 20445; // 0x304 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x305 TObjFunc
	return 0; // 0x307 Return
	
Label_776:
	var_183_int = 20428; // 0x308 PushI
	var_184_bool = var_46_bool == var_183_int; // 0x309 Eq
	if(var_184_bool == 0) goto Label_799; // 0x30a JumpB
	var_185_string = ""; // 0x30b PushV
	var_185_string = "Neutral"; // 0x30c MovS
	func_671(var_47_cvector, var_185_string); // 0x30d NEW_2
	var_186_int = 519276; // 0x30f PushI
	SetMessage(var_186_int); // 0x310 TObjFunc
	ClearReplies(); // 0x312 TObjFunc
	var_187_int = 519277; // 0x314 PushI
	var_188_int = 20432; // 0x315 PushI
	var_189_int = 20429; // 0x316 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x317 TObjFunc
	var_190_int = 519278; // 0x319 PushI
	var_191_int = 20431; // 0x31a PushI
	var_192_int = 20430; // 0x31b PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x31c TObjFunc
	return 0; // 0x31e Return
	
Label_799:
	var_193_int = 20431; // 0x31f PushI
	var_194_bool = var_46_bool == var_193_int; // 0x320 Eq
	if(var_194_bool == 0) goto Label_817; // 0x321 JumpB
	var_195_string = ""; // 0x322 PushV
	var_195_string = "Neutral"; // 0x323 MovS
	func_671(var_47_cvector, var_195_string); // 0x324 NEW_2
	var_196_int = 519279; // 0x326 PushI
	SetMessage(var_196_int); // 0x327 TObjFunc
	ClearReplies(); // 0x329 TObjFunc
	var_197_int = 519281; // 0x32b PushI
	var_198_int = 20432; // 0x32c PushI
	var_199_int = 20433; // 0x32d PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x32e TObjFunc
	return 0; // 0x330 Return
	
Label_817:
	var_200_int = 20432; // 0x331 PushI
	var_201_bool = var_46_bool == var_200_int; // 0x332 Eq
	if(var_201_bool == 0) goto Label_840; // 0x333 JumpB
	var_202_string = ""; // 0x334 PushV
	var_202_string = "Neutral"; // 0x335 MovS
	func_671(var_47_cvector, var_202_string); // 0x336 NEW_2
	var_203_int = 519280; // 0x338 PushI
	SetMessage(var_203_int); // 0x339 TObjFunc
	ClearReplies(); // 0x33b TObjFunc
	var_204_int = 519282; // 0x33d PushI
	var_205_int = 20436; // 0x33e PushI
	var_206_int = 20435; // 0x33f PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x340 TObjFunc
	var_207_int = 527864; // 0x342 PushI
	var_208_int = 20439; // 0x343 PushI
	var_209_int = 29209; // 0x344 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x345 TObjFunc
	return 0; // 0x347 Return
	
Label_840:
	var_210_int = 20436; // 0x348 PushI
	var_211_bool = var_46_bool == var_210_int; // 0x349 Eq
	if(var_211_bool == 0) goto Label_863; // 0x34a JumpB
	var_212_string = ""; // 0x34b PushV
	var_212_string = "Neutral"; // 0x34c MovS
	func_671(var_47_cvector, var_212_string); // 0x34d NEW_2
	var_213_int = 519283; // 0x34f PushI
	SetMessage(var_213_int); // 0x350 TObjFunc
	ClearReplies(); // 0x352 TObjFunc
	var_214_int = 519284; // 0x354 PushI
	var_215_int = 20441; // 0x355 PushI
	var_216_int = 20437; // 0x356 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x357 TObjFunc
	var_217_int = 519285; // 0x359 PushI
	var_218_int = 20439; // 0x35a PushI
	var_219_int = 20438; // 0x35b PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x35c TObjFunc
	return 0; // 0x35e Return
	
Label_863:
	var_220_int = 20439; // 0x35f PushI
	var_221_bool = var_46_bool == var_220_int; // 0x360 Eq
	if(var_221_bool == 0) goto Label_881; // 0x361 JumpB
	var_222_string = ""; // 0x362 PushV
	var_222_string = "Neutral"; // 0x363 MovS
	func_671(var_47_cvector, var_222_string); // 0x364 NEW_2
	var_223_int = 519286; // 0x366 PushI
	SetMessage(var_223_int); // 0x367 TObjFunc
	ClearReplies(); // 0x369 TObjFunc
	var_224_int = 519287; // 0x36b PushI
	var_225_int = 20441; // 0x36c PushI
	var_226_int = 20440; // 0x36d PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x36e TObjFunc
	return 0; // 0x370 Return
	
Label_881:
	var_227_int = 20441; // 0x371 PushI
	var_228_bool = var_46_bool == var_227_int; // 0x372 Eq
	if(var_228_bool == 0) goto Label_899; // 0x373 JumpB
	var_229_string = ""; // 0x374 PushV
	var_229_string = "Neutral"; // 0x375 MovS
	func_671(var_47_cvector, var_229_string); // 0x376 NEW_2
	var_230_int = 519288; // 0x378 PushI
	SetMessage(var_230_int); // 0x379 TObjFunc
	ClearReplies(); // 0x37b TObjFunc
	var_231_int = 519292; // 0x37d PushI
	var_232_int = -1; // 0x37e PushI
	var_233_int = 20446; // 0x37f PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x380 TObjFunc
	return 0; // 0x382 Return
	
Label_899:
	var_3_string = 1; // 0x383 TMovB
	var_234_bool = 0; // 0x384 PushV
	func_4826(var_234_bool); // 0x385 NEW_2
	if(var_234_bool == 0) goto Label_907; // 0x387 JumpB
	lshStopAnimation(); // 0x388 Func
	goto Label_909; // 0x38a Jump
	
Label_909:
	return 0; // 0x38d Return
	
Label_907:
	StopAnimation(); // 0x38b Func
	
Label_911:
	return 0; // 0x38f Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x46e PushI
	if(var_48_int == 0) goto Label_1844; // 0x46f JumpB
	func_4679(); // 0x471 NEW_2
	var_50_int = 21486; // 0x473 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x474 Eq
	if(var_51_bool == 0) goto Label_1147; // 0x475 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x476 PushV
	var_52_object = var_1_object; // 0x477 MovT
	var_53_object = var_0_object; // 0x478 MovT
	func_5042(); // 0x479 NEW_2
	
Label_1147:
	var_70_int = 21480; // 0x47b PushI
	var_71_bool = var_47_cvector == var_70_int; // 0x47c Eq
	if(var_71_bool == 0) goto Label_1155; // 0x47d JumpB
	var_72_object = Obj(); var_73_object = Obj(); // 0x47e PushV
	var_72_object = var_1_object; // 0x47f MovT
	var_73_object = var_0_object; // 0x480 MovT
	func_5042(); // 0x481 NEW_2
	
Label_1155:
	var_74_int = 21481; // 0x483 PushI
	var_75_bool = var_47_cvector == var_74_int; // 0x484 Eq
	if(var_75_bool == 0) goto Label_1163; // 0x485 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x486 PushV
	var_76_object = var_1_object; // 0x487 MovT
	var_77_object = var_0_object; // 0x488 MovT
	func_5042(); // 0x489 NEW_2
	
Label_1163:
	var_78_int = 21496; // 0x48b PushI
	var_79_bool = var_47_cvector == var_78_int; // 0x48c Eq
	if(var_79_bool == 0) goto Label_1171; // 0x48d JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x48e PushV
	var_80_object = var_1_object; // 0x48f MovT
	var_81_object = var_0_object; // 0x490 MovT
	func_4916(); // 0x491 NEW_2
	
Label_1171:
	var_84_int = 21512; // 0x493 PushI
	var_85_bool = var_47_cvector == var_84_int; // 0x494 Eq
	if(var_85_bool == 0) goto Label_1179; // 0x495 JumpB
	var_86_object = Obj(); var_87_object = Obj(); // 0x496 PushV
	var_86_object = var_1_object; // 0x497 MovT
	var_87_object = var_0_object; // 0x498 MovT
	func_4922(); // 0x499 NEW_2
	
Label_1179:
	var_90_int = 21518; // 0x49b PushI
	var_91_bool = var_47_cvector == var_90_int; // 0x49c Eq
	if(var_91_bool == 0) goto Label_1187; // 0x49d JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x49e PushV
	var_92_object = var_1_object; // 0x49f MovT
	var_93_object = var_0_object; // 0x4a0 MovT
	func_4940(); // 0x4a1 NEW_2
	
Label_1187:
	var_128_int = 21519; // 0x4a3 PushI
	var_129_bool = var_47_cvector == var_128_int; // 0x4a4 Eq
	if(var_129_bool == 0) goto Label_1195; // 0x4a5 JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0x4a6 PushV
	var_130_object = var_1_object; // 0x4a7 MovT
	var_131_object = var_0_object; // 0x4a8 MovT
	func_4928(); // 0x4a9 NEW_2
	
Label_1195:
	var_134_int = 21522; // 0x4ab PushI
	var_135_bool = var_47_cvector == var_134_int; // 0x4ac Eq
	if(var_135_bool == 0) goto Label_1203; // 0x4ad JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0x4ae PushV
	var_136_object = var_1_object; // 0x4af MovT
	var_137_object = var_0_object; // 0x4b0 MovT
	func_4934(); // 0x4b1 NEW_2
	
Label_1203:
	var_140_int = 21471; // 0x4b3 PushI
	var_141_bool = var_46_bool == var_140_int; // 0x4b4 Eq
	if(var_141_bool == 0) goto Label_1286; // 0x4b5 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x4b6 PushV
	var_143_object = var_1_object; // 0x4b7 MovT
	func_5199(var_143_object); // 0x4b8 NEW_2
	if(var_142_bool == 0) goto Label_1231; // 0x4ba JumpB
	var_148_string = ""; // 0x4bb PushV
	var_148_string = "Neutral"; // 0x4bc MovS
	func_1111(var_47_cvector, var_148_string); // 0x4bd NEW_2
	var_165_int = 520279; // 0x4bf PushI
	SetMessage(var_165_int); // 0x4c0 TObjFunc
	ClearReplies(); // 0x4c2 TObjFunc
	var_166_int = 520280; // 0x4c4 PushI
	var_167_int = 21473; // 0x4c5 PushI
	var_168_int = 21472; // 0x4c6 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x4c7 TObjFunc
	var_169_int = 520299; // 0x4c9 PushI
	var_170_int = 21475; // 0x4ca PushI
	var_171_int = 21493; // 0x4cb PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x4cc TObjFunc
	return 0; // 0x4ce Return
	
Label_1231:
	var_172_string = ""; // 0x4cf PushV
	var_172_string = "Neutral"; // 0x4d0 MovS
	func_1111(var_47_cvector, var_172_string); // 0x4d1 NEW_2
	var_173_int = 520300; // 0x4d3 PushI
	SetMessage(var_173_int); // 0x4d4 TObjFunc
	ClearReplies(); // 0x4d6 TObjFunc
	var_174_bool = 0; var_175_object = Obj(); // 0x4d8 PushV
	var_175_object = var_1_object; // 0x4d9 MovT
	func_5211(var_175_object); // 0x4da NEW_2
	if(var_174_bool == 0) goto Label_1250; // 0x4dc JumpB
	var_180_int = 520301; // 0x4dd PushI
	var_181_int = 21497; // 0x4de PushI
	var_182_int = 21496; // 0x4df PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x4e0 TObjFunc
	
Label_1250:
	var_183_bool = 0; var_184_object = Obj(); // 0x4e2 PushV
	var_184_object = var_1_object; // 0x4e3 MovT
	func_5223(var_184_object); // 0x4e4 NEW_2
	if(var_183_bool == 0) goto Label_1260; // 0x4e6 JumpB
	var_189_int = 520317; // 0x4e7 PushI
	var_190_int = 21513; // 0x4e8 PushI
	var_191_int = 21512; // 0x4e9 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x4ea TObjFunc
	
Label_1260:
	var_192_bool = 0; var_193_object = Obj(); // 0x4ec PushV
	var_193_object = var_1_object; // 0x4ed MovT
	func_5235(var_193_object); // 0x4ee NEW_2
	if(var_192_bool == 0) goto Label_1270; // 0x4f0 JumpB
	var_198_int = 520324; // 0x4f1 PushI
	var_199_int = 21520; // 0x4f2 PushI
	var_200_int = 21519; // 0x4f3 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x4f4 TObjFunc
	
Label_1270:
	var_201_bool = 0; var_202_object = Obj(); // 0x4f6 PushV
	var_202_object = var_1_object; // 0x4f7 MovT
	func_5247(var_202_object); // 0x4f8 NEW_2
	if(var_201_bool == 0) goto Label_1280; // 0x4fa JumpB
	var_207_int = 520327; // 0x4fb PushI
	var_208_int = 21523; // 0x4fc PushI
	var_209_int = 21522; // 0x4fd PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x4fe TObjFunc
	
Label_1280:
	var_210_int = 520330; // 0x500 PushI
	var_211_int = -1; // 0x501 PushI
	var_212_int = 21525; // 0x502 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x503 TObjFunc
	return 0; // 0x505 Return
	
Label_1286:
	var_213_int = 21523; // 0x506 PushI
	var_214_bool = var_46_bool == var_213_int; // 0x507 Eq
	if(var_214_bool == 0) goto Label_1304; // 0x508 JumpB
	var_215_string = ""; // 0x509 PushV
	var_215_string = "Neutral"; // 0x50a MovS
	func_1111(var_47_cvector, var_215_string); // 0x50b NEW_2
	var_216_int = 520328; // 0x50d PushI
	SetMessage(var_216_int); // 0x50e TObjFunc
	ClearReplies(); // 0x510 TObjFunc
	var_217_int = 527820; // 0x512 PushI
	var_218_int = 29160; // 0x513 PushI
	var_219_int = 29159; // 0x514 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x515 TObjFunc
	return 0; // 0x517 Return
	
Label_1304:
	var_220_int = 29160; // 0x518 PushI
	var_221_bool = var_46_bool == var_220_int; // 0x519 Eq
	if(var_221_bool == 0) goto Label_1322; // 0x51a JumpB
	var_222_string = ""; // 0x51b PushV
	var_222_string = "Neutral"; // 0x51c MovS
	func_1111(var_47_cvector, var_222_string); // 0x51d NEW_2
	var_223_int = 527821; // 0x51f PushI
	SetMessage(var_223_int); // 0x520 TObjFunc
	ClearReplies(); // 0x522 TObjFunc
	var_224_int = 527822; // 0x524 PushI
	var_225_int = 29162; // 0x525 PushI
	var_226_int = 29161; // 0x526 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x527 TObjFunc
	return 0; // 0x529 Return
	
Label_1322:
	var_227_int = 29162; // 0x52a PushI
	var_228_bool = var_46_bool == var_227_int; // 0x52b Eq
	if(var_228_bool == 0) goto Label_1340; // 0x52c JumpB
	var_229_string = ""; // 0x52d PushV
	var_229_string = "Neutral"; // 0x52e MovS
	func_1111(var_47_cvector, var_229_string); // 0x52f NEW_2
	var_230_int = 527823; // 0x531 PushI
	SetMessage(var_230_int); // 0x532 TObjFunc
	ClearReplies(); // 0x534 TObjFunc
	var_231_int = 520329; // 0x536 PushI
	var_232_int = -1; // 0x537 PushI
	var_233_int = 21524; // 0x538 PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x539 TObjFunc
	return 0; // 0x53b Return
	
Label_1340:
	var_234_int = 21520; // 0x53c PushI
	var_235_bool = var_46_bool == var_234_int; // 0x53d Eq
	if(var_235_bool == 0) goto Label_1363; // 0x53e JumpB
	var_236_string = ""; // 0x53f PushV
	var_236_string = "Neutral"; // 0x540 MovS
	func_1111(var_47_cvector, var_236_string); // 0x541 NEW_2
	var_237_int = 520325; // 0x543 PushI
	SetMessage(var_237_int); // 0x544 TObjFunc
	ClearReplies(); // 0x546 TObjFunc
	var_238_int = 527824; // 0x548 PushI
	var_239_int = 29164; // 0x549 PushI
	var_240_int = 29163; // 0x54a PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x54b TObjFunc
	var_241_int = 520326; // 0x54d PushI
	var_242_int = -1; // 0x54e PushI
	var_243_int = 21521; // 0x54f PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x550 TObjFunc
	return 0; // 0x552 Return
	
Label_1363:
	var_244_int = 29164; // 0x553 PushI
	var_245_bool = var_46_bool == var_244_int; // 0x554 Eq
	if(var_245_bool == 0) goto Label_1386; // 0x555 JumpB
	var_246_string = ""; // 0x556 PushV
	var_246_string = "Neutral"; // 0x557 MovS
	func_1111(var_47_cvector, var_246_string); // 0x558 NEW_2
	var_247_int = 527825; // 0x55a PushI
	SetMessage(var_247_int); // 0x55b TObjFunc
	ClearReplies(); // 0x55d TObjFunc
	var_248_int = 527826; // 0x55f PushI
	var_249_int = -1; // 0x560 PushI
	var_250_int = 29165; // 0x561 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x562 TObjFunc
	var_251_int = 527827; // 0x564 PushI
	var_252_int = -1; // 0x565 PushI
	var_253_int = 29166; // 0x566 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x567 TObjFunc
	return 0; // 0x569 Return
	
Label_1386:
	var_254_int = 21513; // 0x56a PushI
	var_255_bool = var_46_bool == var_254_int; // 0x56b Eq
	if(var_255_bool == 0) goto Label_1404; // 0x56c JumpB
	var_256_string = ""; // 0x56d PushV
	var_256_string = "Neutral"; // 0x56e MovS
	func_1111(var_47_cvector, var_256_string); // 0x56f NEW_2
	var_257_int = 520318; // 0x571 PushI
	SetMessage(var_257_int); // 0x572 TObjFunc
	ClearReplies(); // 0x574 TObjFunc
	var_258_int = 520319; // 0x576 PushI
	var_259_int = 21515; // 0x577 PushI
	var_260_int = 21514; // 0x578 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x579 TObjFunc
	return 0; // 0x57b Return
	
Label_1404:
	var_261_int = 21515; // 0x57c PushI
	var_262_bool = var_46_bool == var_261_int; // 0x57d Eq
	if(var_262_bool == 0) goto Label_1422; // 0x57e JumpB
	var_263_string = ""; // 0x57f PushV
	var_263_string = "Neutral"; // 0x580 MovS
	func_1111(var_47_cvector, var_263_string); // 0x581 NEW_2
	var_264_int = 520320; // 0x583 PushI
	SetMessage(var_264_int); // 0x584 TObjFunc
	ClearReplies(); // 0x586 TObjFunc
	var_265_int = 527818; // 0x588 PushI
	var_266_int = 29158; // 0x589 PushI
	var_267_int = 29157; // 0x58a PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x58b TObjFunc
	return 0; // 0x58d Return
	
Label_1422:
	var_268_int = 29158; // 0x58e PushI
	var_269_bool = var_46_bool == var_268_int; // 0x58f Eq
	if(var_269_bool == 0) goto Label_1440; // 0x590 JumpB
	var_270_string = ""; // 0x591 PushV
	var_270_string = "Neutral"; // 0x592 MovS
	func_1111(var_47_cvector, var_270_string); // 0x593 NEW_2
	var_271_int = 527819; // 0x595 PushI
	SetMessage(var_271_int); // 0x596 TObjFunc
	ClearReplies(); // 0x598 TObjFunc
	var_272_int = 520321; // 0x59a PushI
	var_273_int = 21517; // 0x59b PushI
	var_274_int = 21516; // 0x59c PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x59d TObjFunc
	return 0; // 0x59f Return
	
Label_1440:
	var_275_int = 21517; // 0x5a0 PushI
	var_276_bool = var_46_bool == var_275_int; // 0x5a1 Eq
	if(var_276_bool == 0) goto Label_1458; // 0x5a2 JumpB
	var_277_string = ""; // 0x5a3 PushV
	var_277_string = "Neutral"; // 0x5a4 MovS
	func_1111(var_47_cvector, var_277_string); // 0x5a5 NEW_2
	var_278_int = 520322; // 0x5a7 PushI
	SetMessage(var_278_int); // 0x5a8 TObjFunc
	ClearReplies(); // 0x5aa TObjFunc
	var_279_int = 520323; // 0x5ac PushI
	var_280_int = -1; // 0x5ad PushI
	var_281_int = 21518; // 0x5ae PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x5af TObjFunc
	return 0; // 0x5b1 Return
	
Label_1458:
	var_282_int = 21497; // 0x5b2 PushI
	var_283_bool = var_46_bool == var_282_int; // 0x5b3 Eq
	if(var_283_bool == 0) goto Label_1481; // 0x5b4 JumpB
	var_284_string = ""; // 0x5b5 PushV
	var_284_string = "Neutral"; // 0x5b6 MovS
	func_1111(var_47_cvector, var_284_string); // 0x5b7 NEW_2
	var_285_int = 520302; // 0x5b9 PushI
	SetMessage(var_285_int); // 0x5ba TObjFunc
	ClearReplies(); // 0x5bc TObjFunc
	var_286_int = 520303; // 0x5be PushI
	var_287_int = 21499; // 0x5bf PushI
	var_288_int = 21498; // 0x5c0 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x5c1 TObjFunc
	var_289_int = 527811; // 0x5c3 PushI
	var_290_int = 29150; // 0x5c4 PushI
	var_291_int = 29149; // 0x5c5 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x5c6 TObjFunc
	return 0; // 0x5c8 Return
	
Label_1481:
	var_292_int = 29150; // 0x5c9 PushI
	var_293_bool = var_46_bool == var_292_int; // 0x5ca Eq
	if(var_293_bool == 0) goto Label_1499; // 0x5cb JumpB
	var_294_string = ""; // 0x5cc PushV
	var_294_string = "Neutral"; // 0x5cd MovS
	func_1111(var_47_cvector, var_294_string); // 0x5ce NEW_2
	var_295_int = 527812; // 0x5d0 PushI
	SetMessage(var_295_int); // 0x5d1 TObjFunc
	ClearReplies(); // 0x5d3 TObjFunc
	var_296_int = 527813; // 0x5d5 PushI
	var_297_int = 29152; // 0x5d6 PushI
	var_298_int = 29151; // 0x5d7 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x5d8 TObjFunc
	return 0; // 0x5da Return
	
Label_1499:
	var_299_int = 29152; // 0x5db PushI
	var_300_bool = var_46_bool == var_299_int; // 0x5dc Eq
	if(var_300_bool == 0) goto Label_1517; // 0x5dd JumpB
	var_301_string = ""; // 0x5de PushV
	var_301_string = "Neutral"; // 0x5df MovS
	func_1111(var_47_cvector, var_301_string); // 0x5e0 NEW_2
	var_302_int = 527814; // 0x5e2 PushI
	SetMessage(var_302_int); // 0x5e3 TObjFunc
	ClearReplies(); // 0x5e5 TObjFunc
	var_303_int = 527815; // 0x5e7 PushI
	var_304_int = 29154; // 0x5e8 PushI
	var_305_int = 29153; // 0x5e9 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x5ea TObjFunc
	return 0; // 0x5ec Return
	
Label_1517:
	var_306_int = 29154; // 0x5ed PushI
	var_307_bool = var_46_bool == var_306_int; // 0x5ee Eq
	if(var_307_bool == 0) goto Label_1535; // 0x5ef JumpB
	var_308_string = ""; // 0x5f0 PushV
	var_308_string = "Neutral"; // 0x5f1 MovS
	func_1111(var_47_cvector, var_308_string); // 0x5f2 NEW_2
	var_309_int = 527816; // 0x5f4 PushI
	SetMessage(var_309_int); // 0x5f5 TObjFunc
	ClearReplies(); // 0x5f7 TObjFunc
	var_310_int = 527817; // 0x5f9 PushI
	var_311_int = 21499; // 0x5fa PushI
	var_312_int = 29155; // 0x5fb PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x5fc TObjFunc
	return 0; // 0x5fe Return
	
Label_1535:
	var_313_int = 21499; // 0x5ff PushI
	var_314_bool = var_46_bool == var_313_int; // 0x600 Eq
	if(var_314_bool == 0) goto Label_1558; // 0x601 JumpB
	var_315_string = ""; // 0x602 PushV
	var_315_string = "Neutral"; // 0x603 MovS
	func_1111(var_47_cvector, var_315_string); // 0x604 NEW_2
	var_316_int = 520304; // 0x606 PushI
	SetMessage(var_316_int); // 0x607 TObjFunc
	ClearReplies(); // 0x609 TObjFunc
	var_317_int = 520305; // 0x60b PushI
	var_318_int = 21501; // 0x60c PushI
	var_319_int = 21500; // 0x60d PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x60e TObjFunc
	var_320_int = 520311; // 0x610 PushI
	var_321_int = 21507; // 0x611 PushI
	var_322_int = 21506; // 0x612 PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0x613 TObjFunc
	return 0; // 0x615 Return
	
Label_1558:
	var_323_int = 21507; // 0x616 PushI
	var_324_bool = var_46_bool == var_323_int; // 0x617 Eq
	if(var_324_bool == 0) goto Label_1576; // 0x618 JumpB
	var_325_string = ""; // 0x619 PushV
	var_325_string = "Neutral"; // 0x61a MovS
	func_1111(var_47_cvector, var_325_string); // 0x61b NEW_2
	var_326_int = 520312; // 0x61d PushI
	SetMessage(var_326_int); // 0x61e TObjFunc
	ClearReplies(); // 0x620 TObjFunc
	var_327_int = 520313; // 0x622 PushI
	var_328_int = 21509; // 0x623 PushI
	var_329_int = 21508; // 0x624 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x625 TObjFunc
	return 0; // 0x627 Return
	
Label_1576:
	var_330_int = 21509; // 0x628 PushI
	var_331_bool = var_46_bool == var_330_int; // 0x629 Eq
	if(var_331_bool == 0) goto Label_1599; // 0x62a JumpB
	var_332_string = ""; // 0x62b PushV
	var_332_string = "Neutral"; // 0x62c MovS
	func_1111(var_47_cvector, var_332_string); // 0x62d NEW_2
	var_333_int = 520314; // 0x62f PushI
	SetMessage(var_333_int); // 0x630 TObjFunc
	ClearReplies(); // 0x632 TObjFunc
	var_334_int = 520315; // 0x634 PushI
	var_335_int = -1; // 0x635 PushI
	var_336_int = 21510; // 0x636 PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x637 TObjFunc
	var_337_int = 520316; // 0x639 PushI
	var_338_int = -1; // 0x63a PushI
	var_339_int = 21511; // 0x63b PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x63c TObjFunc
	return 0; // 0x63e Return
	
Label_1599:
	var_340_int = 21501; // 0x63f PushI
	var_341_bool = var_46_bool == var_340_int; // 0x640 Eq
	if(var_341_bool == 0) goto Label_1622; // 0x641 JumpB
	var_342_string = ""; // 0x642 PushV
	var_342_string = "Neutral"; // 0x643 MovS
	func_1111(var_47_cvector, var_342_string); // 0x644 NEW_2
	var_343_int = 520306; // 0x646 PushI
	SetMessage(var_343_int); // 0x647 TObjFunc
	ClearReplies(); // 0x649 TObjFunc
	var_344_int = 520307; // 0x64b PushI
	var_345_int = -1; // 0x64c PushI
	var_346_int = 21502; // 0x64d PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x64e TObjFunc
	var_347_int = 520308; // 0x650 PushI
	var_348_int = 21504; // 0x651 PushI
	var_349_int = 21503; // 0x652 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x653 TObjFunc
	return 0; // 0x655 Return
	
Label_1622:
	var_350_int = 21504; // 0x656 PushI
	var_351_bool = var_46_bool == var_350_int; // 0x657 Eq
	if(var_351_bool == 0) goto Label_1640; // 0x658 JumpB
	var_352_string = ""; // 0x659 PushV
	var_352_string = "Neutral"; // 0x65a MovS
	func_1111(var_47_cvector, var_352_string); // 0x65b NEW_2
	var_353_int = 520309; // 0x65d PushI
	SetMessage(var_353_int); // 0x65e TObjFunc
	ClearReplies(); // 0x660 TObjFunc
	var_354_int = 520310; // 0x662 PushI
	var_355_int = -1; // 0x663 PushI
	var_356_int = 21505; // 0x664 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x665 TObjFunc
	return 0; // 0x667 Return
	
Label_1640:
	var_357_int = 21473; // 0x668 PushI
	var_358_bool = var_46_bool == var_357_int; // 0x669 Eq
	if(var_358_bool == 0) goto Label_1663; // 0x66a JumpB
	var_359_string = ""; // 0x66b PushV
	var_359_string = "Neutral"; // 0x66c MovS
	func_1111(var_47_cvector, var_359_string); // 0x66d NEW_2
	var_360_int = 520281; // 0x66f PushI
	SetMessage(var_360_int); // 0x670 TObjFunc
	ClearReplies(); // 0x672 TObjFunc
	var_361_int = 520282; // 0x674 PushI
	var_362_int = 21475; // 0x675 PushI
	var_363_int = 21474; // 0x676 PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x677 TObjFunc
	var_364_int = 520294; // 0x679 PushI
	var_365_int = 21488; // 0x67a PushI
	var_366_int = 21487; // 0x67b PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x67c TObjFunc
	return 0; // 0x67e Return
	
Label_1663:
	var_367_int = 21488; // 0x67f PushI
	var_368_bool = var_46_bool == var_367_int; // 0x680 Eq
	if(var_368_bool == 0) goto Label_1686; // 0x681 JumpB
	var_369_string = ""; // 0x682 PushV
	var_369_string = "Neutral"; // 0x683 MovS
	func_1111(var_47_cvector, var_369_string); // 0x684 NEW_2
	var_370_int = 520295; // 0x686 PushI
	SetMessage(var_370_int); // 0x687 TObjFunc
	ClearReplies(); // 0x689 TObjFunc
	var_371_int = 520296; // 0x68b PushI
	var_372_int = 21490; // 0x68c PushI
	var_373_int = 21489; // 0x68d PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x68e TObjFunc
	var_374_int = 527807; // 0x690 PushI
	var_375_int = 21477; // 0x691 PushI
	var_376_int = 29143; // 0x692 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x693 TObjFunc
	return 0; // 0x695 Return
	
Label_1686:
	var_377_int = 21490; // 0x696 PushI
	var_378_bool = var_46_bool == var_377_int; // 0x697 Eq
	if(var_378_bool == 0) goto Label_1704; // 0x698 JumpB
	var_379_string = ""; // 0x699 PushV
	var_379_string = "Neutral"; // 0x69a MovS
	func_1111(var_47_cvector, var_379_string); // 0x69b NEW_2
	var_380_int = 520297; // 0x69d PushI
	SetMessage(var_380_int); // 0x69e TObjFunc
	ClearReplies(); // 0x6a0 TObjFunc
	var_381_int = 527805; // 0x6a2 PushI
	var_382_int = 29142; // 0x6a3 PushI
	var_383_int = 29141; // 0x6a4 PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x6a5 TObjFunc
	return 0; // 0x6a7 Return
	
Label_1704:
	var_384_int = 29142; // 0x6a8 PushI
	var_385_bool = var_46_bool == var_384_int; // 0x6a9 Eq
	if(var_385_bool == 0) goto Label_1722; // 0x6aa JumpB
	var_386_string = ""; // 0x6ab PushV
	var_386_string = "Neutral"; // 0x6ac MovS
	func_1111(var_47_cvector, var_386_string); // 0x6ad NEW_2
	var_387_int = 527806; // 0x6af PushI
	SetMessage(var_387_int); // 0x6b0 TObjFunc
	ClearReplies(); // 0x6b2 TObjFunc
	var_388_int = 520298; // 0x6b4 PushI
	var_389_int = 21477; // 0x6b5 PushI
	var_390_int = 21491; // 0x6b6 PushI
	AddReply(var_388_int, var_389_int, var_390_int); // 0x6b7 TObjFunc
	return 0; // 0x6b9 Return
	
Label_1722:
	var_391_int = 21475; // 0x6ba PushI
	var_392_bool = var_46_bool == var_391_int; // 0x6bb Eq
	if(var_392_bool == 0) goto Label_1745; // 0x6bc JumpB
	var_393_string = ""; // 0x6bd PushV
	var_393_string = "Neutral"; // 0x6be MovS
	func_1111(var_47_cvector, var_393_string); // 0x6bf NEW_2
	var_394_int = 520283; // 0x6c1 PushI
	SetMessage(var_394_int); // 0x6c2 TObjFunc
	ClearReplies(); // 0x6c4 TObjFunc
	var_395_int = 520290; // 0x6c6 PushI
	var_396_int = 21483; // 0x6c7 PushI
	var_397_int = 21482; // 0x6c8 PushI
	AddReply(var_395_int, var_396_int, var_397_int); // 0x6c9 TObjFunc
	var_398_int = 520284; // 0x6cb PushI
	var_399_int = 21477; // 0x6cc PushI
	var_400_int = 21476; // 0x6cd PushI
	AddReply(var_398_int, var_399_int, var_400_int); // 0x6ce TObjFunc
	return 0; // 0x6d0 Return
	
Label_1745:
	var_401_int = 21477; // 0x6d1 PushI
	var_402_bool = var_46_bool == var_401_int; // 0x6d2 Eq
	if(var_402_bool == 0) goto Label_1768; // 0x6d3 JumpB
	var_403_string = ""; // 0x6d4 PushV
	var_403_string = "Neutral"; // 0x6d5 MovS
	func_1111(var_47_cvector, var_403_string); // 0x6d6 NEW_2
	var_404_int = 520285; // 0x6d8 PushI
	SetMessage(var_404_int); // 0x6d9 TObjFunc
	ClearReplies(); // 0x6db TObjFunc
	var_405_int = 520286; // 0x6dd PushI
	var_406_int = 21479; // 0x6de PushI
	var_407_int = 21478; // 0x6df PushI
	AddReply(var_405_int, var_406_int, var_407_int); // 0x6e0 TObjFunc
	var_408_int = 527808; // 0x6e2 PushI
	var_409_int = 29146; // 0x6e3 PushI
	var_410_int = 29145; // 0x6e4 PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0x6e5 TObjFunc
	return 0; // 0x6e7 Return
	
Label_1768:
	var_411_int = 29146; // 0x6e8 PushI
	var_412_bool = var_46_bool == var_411_int; // 0x6e9 Eq
	if(var_412_bool == 0) goto Label_1786; // 0x6ea JumpB
	var_413_string = ""; // 0x6eb PushV
	var_413_string = "Neutral"; // 0x6ec MovS
	func_1111(var_47_cvector, var_413_string); // 0x6ed NEW_2
	var_414_int = 527809; // 0x6ef PushI
	SetMessage(var_414_int); // 0x6f0 TObjFunc
	ClearReplies(); // 0x6f2 TObjFunc
	var_415_int = 527810; // 0x6f4 PushI
	var_416_int = 21479; // 0x6f5 PushI
	var_417_int = 29147; // 0x6f6 PushI
	AddReply(var_415_int, var_416_int, var_417_int); // 0x6f7 TObjFunc
	return 0; // 0x6f9 Return
	
Label_1786:
	var_418_int = 21479; // 0x6fa PushI
	var_419_bool = var_46_bool == var_418_int; // 0x6fb Eq
	if(var_419_bool == 0) goto Label_1809; // 0x6fc JumpB
	var_420_string = ""; // 0x6fd PushV
	var_420_string = "Neutral"; // 0x6fe MovS
	func_1111(var_47_cvector, var_420_string); // 0x6ff NEW_2
	var_421_int = 520287; // 0x701 PushI
	SetMessage(var_421_int); // 0x702 TObjFunc
	ClearReplies(); // 0x704 TObjFunc
	var_422_int = 520288; // 0x706 PushI
	var_423_int = -1; // 0x707 PushI
	var_424_int = 21480; // 0x708 PushI
	AddReply(var_422_int, var_423_int, var_424_int); // 0x709 TObjFunc
	var_425_int = 520289; // 0x70b PushI
	var_426_int = -1; // 0x70c PushI
	var_427_int = 21481; // 0x70d PushI
	AddReply(var_425_int, var_426_int, var_427_int); // 0x70e TObjFunc
	return 0; // 0x710 Return
	
Label_1809:
	var_428_int = 21483; // 0x711 PushI
	var_429_bool = var_46_bool == var_428_int; // 0x712 Eq
	if(var_429_bool == 0) goto Label_1832; // 0x713 JumpB
	var_430_string = ""; // 0x714 PushV
	var_430_string = "Neutral"; // 0x715 MovS
	func_1111(var_47_cvector, var_430_string); // 0x716 NEW_2
	var_431_int = 520291; // 0x718 PushI
	SetMessage(var_431_int); // 0x719 TObjFunc
	ClearReplies(); // 0x71b TObjFunc
	var_432_int = 520292; // 0x71d PushI
	var_433_int = 21477; // 0x71e PushI
	var_434_int = 21484; // 0x71f PushI
	AddReply(var_432_int, var_433_int, var_434_int); // 0x720 TObjFunc
	var_435_int = 520293; // 0x722 PushI
	var_436_int = -1; // 0x723 PushI
	var_437_int = 21486; // 0x724 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x725 TObjFunc
	return 0; // 0x727 Return
	
Label_1832:
	var_3_string = 1; // 0x728 TMovB
	var_438_bool = 0; // 0x729 PushV
	func_4826(var_438_bool); // 0x72a NEW_2
	if(var_438_bool == 0) goto Label_1840; // 0x72c JumpB
	lshStopAnimation(); // 0x72d Func
	goto Label_1842; // 0x72f Jump
	
Label_1842:
	return 0; // 0x732 Return
	
Label_1840:
	StopAnimation(); // 0x730 Func
	
Label_1844:
	return 0; // 0x734 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x7d7 PushI
	if(var_48_int == 0) goto Label_2070; // 0x7d8 JumpB
	func_4679(); // 0x7da NEW_2
	var_50_int = 22017; // 0x7dc PushI
	var_51_bool = var_46_bool == var_50_int; // 0x7dd Eq
	if(var_51_bool == 0) goto Label_2035; // 0x7de JumpB
	var_52_string = ""; // 0x7df PushV
	var_52_string = "Neutral"; // 0x7e0 MovS
	func_1984(var_47_cvector, var_52_string); // 0x7e1 NEW_2
	var_69_int = 520800; // 0x7e3 PushI
	SetMessage(var_69_int); // 0x7e4 TObjFunc
	ClearReplies(); // 0x7e6 TObjFunc
	var_70_int = 520801; // 0x7e8 PushI
	var_71_int = 29131; // 0x7e9 PushI
	var_72_int = 22018; // 0x7ea PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x7eb TObjFunc
	var_73_int = 527799; // 0x7ed PushI
	var_74_int = -1; // 0x7ee PushI
	var_75_int = 29132; // 0x7ef PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x7f0 TObjFunc
	return 0; // 0x7f2 Return
	
Label_2035:
	var_76_int = 29131; // 0x7f3 PushI
	var_77_bool = var_46_bool == var_76_int; // 0x7f4 Eq
	if(var_77_bool == 0) goto Label_2058; // 0x7f5 JumpB
	var_78_string = ""; // 0x7f6 PushV
	var_78_string = "Neutral"; // 0x7f7 MovS
	func_1984(var_47_cvector, var_78_string); // 0x7f8 NEW_2
	var_79_int = 527798; // 0x7fa PushI
	SetMessage(var_79_int); // 0x7fb TObjFunc
	ClearReplies(); // 0x7fd TObjFunc
	var_80_int = 527800; // 0x7ff PushI
	var_81_int = -1; // 0x800 PushI
	var_82_int = 29133; // 0x801 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x802 TObjFunc
	var_83_int = 527801; // 0x804 PushI
	var_84_int = -1; // 0x805 PushI
	var_85_int = 29134; // 0x806 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x807 TObjFunc
	return 0; // 0x809 Return
	
Label_2058:
	var_3_string = 1; // 0x80a TMovB
	var_86_bool = 0; // 0x80b PushV
	func_4826(var_86_bool); // 0x80c NEW_2
	if(var_86_bool == 0) goto Label_2066; // 0x80e JumpB
	lshStopAnimation(); // 0x80f Func
	goto Label_2068; // 0x811 Jump
	
Label_2068:
	return 0; // 0x814 Return
	
Label_2066:
	StopAnimation(); // 0x812 Func
	
Label_2070:
	return 0; // 0x816 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0x8c8 PushI
	if(var_48_int == 0) goto Label_2713; // 0x8c9 JumpB
	func_4679(); // 0x8cb NEW_2
	var_50_int = 22612; // 0x8cd PushI
	var_51_bool = var_47_cvector == var_50_int; // 0x8ce Eq
	if(var_51_bool == 0) goto Label_2271; // 0x8cf JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0x8d0 PushV
	var_52_object = var_1_object; // 0x8d1 MovT
	var_53_object = var_0_object; // 0x8d2 MovT
	func_4985(); // 0x8d3 NEW_2
	var_79_object = Obj(); var_80_object = Obj(); // 0x8d5 PushV
	var_79_object = var_1_object; // 0x8d6 MovT
	var_80_object = var_0_object; // 0x8d7 MovT
	func_5063(var_80_object); // 0x8d8 NEW_2
	var_103_object = Obj(); var_104_object = Obj(); // 0x8da PushV
	var_103_object = var_1_object; // 0x8db MovT
	var_104_object = var_0_object; // 0x8dc MovT
	func_5036(); // 0x8dd NEW_2
	
Label_2271:
	var_107_int = 24978; // 0x8df PushI
	var_108_bool = var_47_cvector == var_107_int; // 0x8e0 Eq
	if(var_108_bool == 0) goto Label_2289; // 0x8e1 JumpB
	var_109_object = Obj(); var_110_object = Obj(); // 0x8e2 PushV
	var_109_object = var_1_object; // 0x8e3 MovT
	var_110_object = var_0_object; // 0x8e4 MovT
	func_4985(); // 0x8e5 NEW_2
	var_111_object = Obj(); var_112_object = Obj(); // 0x8e7 PushV
	var_111_object = var_1_object; // 0x8e8 MovT
	var_112_object = var_0_object; // 0x8e9 MovT
	func_5063(var_112_object); // 0x8ea NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x8ec PushV
	var_113_object = var_1_object; // 0x8ed MovT
	var_114_object = var_0_object; // 0x8ee MovT
	func_5036(); // 0x8ef NEW_2
	
Label_2289:
	var_115_int = 24931; // 0x8f1 PushI
	var_116_bool = var_47_cvector == var_115_int; // 0x8f2 Eq
	if(var_116_bool == 0) goto Label_2297; // 0x8f3 JumpB
	var_117_object = Obj(); var_118_object = Obj(); // 0x8f4 PushV
	var_117_object = var_1_object; // 0x8f5 MovT
	var_118_object = var_0_object; // 0x8f6 MovT
	func_5057(); // 0x8f7 NEW_2
	
Label_2297:
	var_121_int = 22609; // 0x8f9 PushI
	var_122_bool = var_46_bool == var_121_int; // 0x8fa Eq
	if(var_122_bool == 0) goto Label_2335; // 0x8fb JumpB
	var_123_string = ""; // 0x8fc PushV
	var_123_string = "Neutral"; // 0x8fd MovS
	func_2225(var_47_cvector, var_123_string); // 0x8fe NEW_2
	var_140_int = 521431; // 0x900 PushI
	SetMessage(var_140_int); // 0x901 TObjFunc
	ClearReplies(); // 0x903 TObjFunc
	var_141_bool = 0; var_142_object = Obj(); // 0x905 PushV
	var_142_object = var_1_object; // 0x906 MovT
	func_5074(var_142_object); // 0x907 NEW_2
	if(var_141_bool == 0) goto Label_2319; // 0x909 JumpB
	var_149_int = 521432; // 0x90a PushI
	var_150_int = 22611; // 0x90b PushI
	var_151_int = 22610; // 0x90c PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x90d TObjFunc
	
Label_2319:
	var_152_bool = 0; var_153_object = Obj(); // 0x90f PushV
	var_153_object = var_1_object; // 0x910 MovT
	func_5139(var_153_object); // 0x911 NEW_2
	if(var_152_bool == 0) goto Label_2329; // 0x913 JumpB
	var_158_int = 523679; // 0x914 PushI
	var_159_int = 24958; // 0x915 PushI
	var_160_int = 24931; // 0x916 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x917 TObjFunc
	
Label_2329:
	var_161_int = 521435; // 0x919 PushI
	var_162_int = -1; // 0x91a PushI
	var_163_int = 22613; // 0x91b PushI
	AddReply(var_161_int, var_162_int, var_163_int); // 0x91c TObjFunc
	return 0; // 0x91e Return
	
Label_2335:
	var_164_int = 24958; // 0x91f PushI
	var_165_bool = var_46_bool == var_164_int; // 0x920 Eq
	if(var_165_bool == 0) goto Label_2363; // 0x921 JumpB
	var_166_string = ""; // 0x922 PushV
	var_166_string = "Neutral"; // 0x923 MovS
	func_2225(var_47_cvector, var_166_string); // 0x924 NEW_2
	var_167_int = 523703; // 0x926 PushI
	SetMessage(var_167_int); // 0x927 TObjFunc
	ClearReplies(); // 0x929 TObjFunc
	var_168_int = 523704; // 0x92b PushI
	var_169_int = 24960; // 0x92c PushI
	var_170_int = 24959; // 0x92d PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x92e TObjFunc
	var_171_int = 523706; // 0x930 PushI
	var_172_int = -1; // 0x931 PushI
	var_173_int = 24961; // 0x932 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x933 TObjFunc
	var_174_int = 523707; // 0x935 PushI
	var_175_int = -1; // 0x936 PushI
	var_176_int = 24962; // 0x937 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x938 TObjFunc
	return 0; // 0x93a Return
	
Label_2363:
	var_177_int = 24960; // 0x93b PushI
	var_178_bool = var_46_bool == var_177_int; // 0x93c Eq
	if(var_178_bool == 0) goto Label_2381; // 0x93d JumpB
	var_179_string = ""; // 0x93e PushV
	var_179_string = "Neutral"; // 0x93f MovS
	func_2225(var_47_cvector, var_179_string); // 0x940 NEW_2
	var_180_int = 523705; // 0x942 PushI
	SetMessage(var_180_int); // 0x943 TObjFunc
	ClearReplies(); // 0x945 TObjFunc
	var_181_int = 523681; // 0x947 PushI
	var_182_int = 24934; // 0x948 PushI
	var_183_int = 24933; // 0x949 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x94a TObjFunc
	return 0; // 0x94c Return
	
Label_2381:
	var_184_int = 24934; // 0x94d PushI
	var_185_bool = var_46_bool == var_184_int; // 0x94e Eq
	if(var_185_bool == 0) goto Label_2409; // 0x94f JumpB
	var_186_string = ""; // 0x950 PushV
	var_186_string = "Neutral"; // 0x951 MovS
	func_2225(var_47_cvector, var_186_string); // 0x952 NEW_2
	var_187_int = 523682; // 0x954 PushI
	SetMessage(var_187_int); // 0x955 TObjFunc
	ClearReplies(); // 0x957 TObjFunc
	var_188_int = 523683; // 0x959 PushI
	var_189_int = 24936; // 0x95a PushI
	var_190_int = 24935; // 0x95b PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x95c TObjFunc
	var_191_int = 523701; // 0x95e PushI
	var_192_int = 24957; // 0x95f PushI
	var_193_int = 24956; // 0x960 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x961 TObjFunc
	var_194_int = 523708; // 0x963 PushI
	var_195_int = -1; // 0x964 PushI
	var_196_int = 24963; // 0x965 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x966 TObjFunc
	return 0; // 0x968 Return
	
Label_2409:
	var_197_int = 24957; // 0x969 PushI
	var_198_bool = var_46_bool == var_197_int; // 0x96a Eq
	if(var_198_bool == 0) goto Label_2427; // 0x96b JumpB
	var_199_string = ""; // 0x96c PushV
	var_199_string = "Neutral"; // 0x96d MovS
	func_2225(var_47_cvector, var_199_string); // 0x96e NEW_2
	var_200_int = 523702; // 0x970 PushI
	SetMessage(var_200_int); // 0x971 TObjFunc
	ClearReplies(); // 0x973 TObjFunc
	var_201_int = 523709; // 0x975 PushI
	var_202_int = 24965; // 0x976 PushI
	var_203_int = 24964; // 0x977 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x978 TObjFunc
	return 0; // 0x97a Return
	
Label_2427:
	var_204_int = 24965; // 0x97b PushI
	var_205_bool = var_46_bool == var_204_int; // 0x97c Eq
	if(var_205_bool == 0) goto Label_2450; // 0x97d JumpB
	var_206_string = ""; // 0x97e PushV
	var_206_string = "Neutral"; // 0x97f MovS
	func_2225(var_47_cvector, var_206_string); // 0x980 NEW_2
	var_207_int = 523710; // 0x982 PushI
	SetMessage(var_207_int); // 0x983 TObjFunc
	ClearReplies(); // 0x985 TObjFunc
	var_208_int = 523712; // 0x987 PushI
	var_209_int = -1; // 0x988 PushI
	var_210_int = 24967; // 0x989 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x98a TObjFunc
	var_211_int = 523711; // 0x98c PushI
	var_212_int = -1; // 0x98d PushI
	var_213_int = 24966; // 0x98e PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x98f TObjFunc
	return 0; // 0x991 Return
	
Label_2450:
	var_214_int = 24936; // 0x992 PushI
	var_215_bool = var_46_bool == var_214_int; // 0x993 Eq
	if(var_215_bool == 0) goto Label_2468; // 0x994 JumpB
	var_216_string = ""; // 0x995 PushV
	var_216_string = "Neutral"; // 0x996 MovS
	func_2225(var_47_cvector, var_216_string); // 0x997 NEW_2
	var_217_int = 523684; // 0x999 PushI
	SetMessage(var_217_int); // 0x99a TObjFunc
	ClearReplies(); // 0x99c TObjFunc
	var_218_int = 523685; // 0x99e PushI
	var_219_int = 24968; // 0x99f PushI
	var_220_int = 24937; // 0x9a0 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x9a1 TObjFunc
	return 0; // 0x9a3 Return
	
Label_2468:
	var_221_int = 24968; // 0x9a4 PushI
	var_222_bool = var_46_bool == var_221_int; // 0x9a5 Eq
	if(var_222_bool == 0) goto Label_2486; // 0x9a6 JumpB
	var_223_string = ""; // 0x9a7 PushV
	var_223_string = "Neutral"; // 0x9a8 MovS
	func_2225(var_47_cvector, var_223_string); // 0x9a9 NEW_2
	var_224_int = 523713; // 0x9ab PushI
	SetMessage(var_224_int); // 0x9ac TObjFunc
	ClearReplies(); // 0x9ae TObjFunc
	var_225_int = 523714; // 0x9b0 PushI
	var_226_int = -1; // 0x9b1 PushI
	var_227_int = 24969; // 0x9b2 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x9b3 TObjFunc
	return 0; // 0x9b5 Return
	
Label_2486:
	var_228_int = 22611; // 0x9b6 PushI
	var_229_bool = var_46_bool == var_228_int; // 0x9b7 Eq
	if(var_229_bool == 0) goto Label_2509; // 0x9b8 JumpB
	var_230_string = ""; // 0x9b9 PushV
	var_230_string = "Neutral"; // 0x9ba MovS
	func_2225(var_47_cvector, var_230_string); // 0x9bb NEW_2
	var_231_int = 521433; // 0x9bd PushI
	SetMessage(var_231_int); // 0x9be TObjFunc
	ClearReplies(); // 0x9c0 TObjFunc
	var_232_int = 523686; // 0x9c2 PushI
	var_233_int = 24939; // 0x9c3 PushI
	var_234_int = 24938; // 0x9c4 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x9c5 TObjFunc
	var_235_int = 523690; // 0x9c7 PushI
	var_236_int = 24941; // 0x9c8 PushI
	var_237_int = 24942; // 0x9c9 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x9ca TObjFunc
	return 0; // 0x9cc Return
	
Label_2509:
	var_238_int = 24939; // 0x9cd PushI
	var_239_bool = var_46_bool == var_238_int; // 0x9ce Eq
	if(var_239_bool == 0) goto Label_2532; // 0x9cf JumpB
	var_240_string = ""; // 0x9d0 PushV
	var_240_string = "Neutral"; // 0x9d1 MovS
	func_2225(var_47_cvector, var_240_string); // 0x9d2 NEW_2
	var_241_int = 523687; // 0x9d4 PushI
	SetMessage(var_241_int); // 0x9d5 TObjFunc
	ClearReplies(); // 0x9d7 TObjFunc
	var_242_int = 523688; // 0x9d9 PushI
	var_243_int = 24941; // 0x9da PushI
	var_244_int = 24940; // 0x9db PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x9dc TObjFunc
	var_245_int = 523695; // 0x9de PushI
	var_246_int = 24949; // 0x9df PushI
	var_247_int = 24948; // 0x9e0 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x9e1 TObjFunc
	return 0; // 0x9e3 Return
	
Label_2532:
	var_248_int = 24949; // 0x9e4 PushI
	var_249_bool = var_46_bool == var_248_int; // 0x9e5 Eq
	if(var_249_bool == 0) goto Label_2555; // 0x9e6 JumpB
	var_250_string = ""; // 0x9e7 PushV
	var_250_string = "Neutral"; // 0x9e8 MovS
	func_2225(var_47_cvector, var_250_string); // 0x9e9 NEW_2
	var_251_int = 523696; // 0x9eb PushI
	SetMessage(var_251_int); // 0x9ec TObjFunc
	ClearReplies(); // 0x9ee TObjFunc
	var_252_int = 523697; // 0x9f0 PushI
	var_253_int = 24941; // 0x9f1 PushI
	var_254_int = 24950; // 0x9f2 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x9f3 TObjFunc
	var_255_int = 523698; // 0x9f5 PushI
	var_256_int = 24952; // 0x9f6 PushI
	var_257_int = 24951; // 0x9f7 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x9f8 TObjFunc
	return 0; // 0x9fa Return
	
Label_2555:
	var_258_int = 24952; // 0x9fb PushI
	var_259_bool = var_46_bool == var_258_int; // 0x9fc Eq
	if(var_259_bool == 0) goto Label_2573; // 0x9fd JumpB
	var_260_string = ""; // 0x9fe PushV
	var_260_string = "Neutral"; // 0x9ff MovS
	func_2225(var_47_cvector, var_260_string); // 0xa00 NEW_2
	var_261_int = 523699; // 0xa02 PushI
	SetMessage(var_261_int); // 0xa03 TObjFunc
	ClearReplies(); // 0xa05 TObjFunc
	var_262_int = 523700; // 0xa07 PushI
	var_263_int = 24941; // 0xa08 PushI
	var_264_int = 24953; // 0xa09 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0xa0a TObjFunc
	return 0; // 0xa0c Return
	
Label_2573:
	var_265_int = 24941; // 0xa0d PushI
	var_266_bool = var_46_bool == var_265_int; // 0xa0e Eq
	if(var_266_bool == 0) goto Label_2596; // 0xa0f JumpB
	var_267_string = ""; // 0xa10 PushV
	var_267_string = "Neutral"; // 0xa11 MovS
	func_2225(var_47_cvector, var_267_string); // 0xa12 NEW_2
	var_268_int = 523689; // 0xa14 PushI
	SetMessage(var_268_int); // 0xa15 TObjFunc
	ClearReplies(); // 0xa17 TObjFunc
	var_269_int = 523691; // 0xa19 PushI
	var_270_int = 24944; // 0xa1a PushI
	var_271_int = 24943; // 0xa1b PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0xa1c TObjFunc
	var_272_int = 523715; // 0xa1e PushI
	var_273_int = 24971; // 0xa1f PushI
	var_274_int = 24970; // 0xa20 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0xa21 TObjFunc
	return 0; // 0xa23 Return
	
Label_2596:
	var_275_int = 24971; // 0xa24 PushI
	var_276_bool = var_46_bool == var_275_int; // 0xa25 Eq
	if(var_276_bool == 0) goto Label_2619; // 0xa26 JumpB
	var_277_string = ""; // 0xa27 PushV
	var_277_string = "Neutral"; // 0xa28 MovS
	func_2225(var_47_cvector, var_277_string); // 0xa29 NEW_2
	var_278_int = 523716; // 0xa2b PushI
	SetMessage(var_278_int); // 0xa2c TObjFunc
	ClearReplies(); // 0xa2e TObjFunc
	var_279_int = 523718; // 0xa30 PushI
	var_280_int = 24944; // 0xa31 PushI
	var_281_int = 24973; // 0xa32 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0xa33 TObjFunc
	var_282_int = 523719; // 0xa35 PushI
	var_283_int = 24944; // 0xa36 PushI
	var_284_int = 24974; // 0xa37 PushI
	AddReply(var_282_int, var_283_int, var_284_int); // 0xa38 TObjFunc
	return 0; // 0xa3a Return
	
Label_2619:
	var_285_int = 24944; // 0xa3b PushI
	var_286_bool = var_46_bool == var_285_int; // 0xa3c Eq
	if(var_286_bool == 0) goto Label_2642; // 0xa3d JumpB
	var_287_string = ""; // 0xa3e PushV
	var_287_string = "Neutral"; // 0xa3f MovS
	func_2225(var_47_cvector, var_287_string); // 0xa40 NEW_2
	var_288_int = 523692; // 0xa42 PushI
	SetMessage(var_288_int); // 0xa43 TObjFunc
	ClearReplies(); // 0xa45 TObjFunc
	var_289_int = 523693; // 0xa47 PushI
	var_290_int = 24946; // 0xa48 PushI
	var_291_int = 24945; // 0xa49 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0xa4a TObjFunc
	var_292_int = 523717; // 0xa4c PushI
	var_293_int = 24977; // 0xa4d PushI
	var_294_int = 24972; // 0xa4e PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0xa4f TObjFunc
	return 0; // 0xa51 Return
	
Label_2642:
	var_295_int = 24977; // 0xa52 PushI
	var_296_bool = var_46_bool == var_295_int; // 0xa53 Eq
	if(var_296_bool == 0) goto Label_2660; // 0xa54 JumpB
	var_297_string = ""; // 0xa55 PushV
	var_297_string = "Neutral"; // 0xa56 MovS
	func_2225(var_47_cvector, var_297_string); // 0xa57 NEW_2
	var_298_int = 523720; // 0xa59 PushI
	SetMessage(var_298_int); // 0xa5a TObjFunc
	ClearReplies(); // 0xa5c TObjFunc
	var_299_int = 523722; // 0xa5e PushI
	var_300_int = 24980; // 0xa5f PushI
	var_301_int = 24979; // 0xa60 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0xa61 TObjFunc
	return 0; // 0xa63 Return
	
Label_2660:
	var_302_int = 24980; // 0xa64 PushI
	var_303_bool = var_46_bool == var_302_int; // 0xa65 Eq
	if(var_303_bool == 0) goto Label_2678; // 0xa66 JumpB
	var_304_string = ""; // 0xa67 PushV
	var_304_string = "Neutral"; // 0xa68 MovS
	func_2225(var_47_cvector, var_304_string); // 0xa69 NEW_2
	var_305_int = 523723; // 0xa6b PushI
	SetMessage(var_305_int); // 0xa6c TObjFunc
	ClearReplies(); // 0xa6e TObjFunc
	var_306_int = 523724; // 0xa70 PushI
	var_307_int = 24946; // 0xa71 PushI
	var_308_int = 24981; // 0xa72 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0xa73 TObjFunc
	return 0; // 0xa75 Return
	
Label_2678:
	var_309_int = 24946; // 0xa76 PushI
	var_310_bool = var_46_bool == var_309_int; // 0xa77 Eq
	if(var_310_bool == 0) goto Label_2701; // 0xa78 JumpB
	var_311_string = ""; // 0xa79 PushV
	var_311_string = "Neutral"; // 0xa7a MovS
	func_2225(var_47_cvector, var_311_string); // 0xa7b NEW_2
	var_312_int = 523694; // 0xa7d PushI
	SetMessage(var_312_int); // 0xa7e TObjFunc
	ClearReplies(); // 0xa80 TObjFunc
	var_313_int = 521434; // 0xa82 PushI
	var_314_int = -1; // 0xa83 PushI
	var_315_int = 22612; // 0xa84 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0xa85 TObjFunc
	var_316_int = 523721; // 0xa87 PushI
	var_317_int = -1; // 0xa88 PushI
	var_318_int = 24978; // 0xa89 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0xa8a TObjFunc
	return 0; // 0xa8c Return
	
Label_2701:
	var_3_string = 1; // 0xa8d TMovB
	var_319_bool = 0; // 0xa8e PushV
	func_4826(var_319_bool); // 0xa8f NEW_2
	if(var_319_bool == 0) goto Label_2709; // 0xa91 JumpB
	lshStopAnimation(); // 0xa92 Func
	goto Label_2711; // 0xa94 Jump
	
Label_2711:
	return 0; // 0xa97 Return
	
Label_2709:
	StopAnimation(); // 0xa95 Func
	
Label_2713:
	return 0; // 0xa99 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xb5c PushI
	if(var_48_int == 0) goto Label_3083; // 0xb5d JumpB
	func_4679(); // 0xb5f NEW_2
	var_50_int = 23120; // 0xb61 PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xb62 Eq
	if(var_51_bool == 0) goto Label_2921; // 0xb63 JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xb64 PushV
	var_52_object = var_1_object; // 0xb65 MovT
	var_53_object = var_0_object; // 0xb66 MovT
	func_4994(); // 0xb67 NEW_2
	
Label_2921:
	var_56_int = 23119; // 0xb69 PushI
	var_57_bool = var_46_bool == var_56_int; // 0xb6a Eq
	if(var_57_bool == 0) goto Label_2976; // 0xb6b JumpB
	var_58_string = ""; // 0xb6c PushV
	var_58_string = "Neutral"; // 0xb6d MovS
	func_2885(var_47_cvector, var_58_string); // 0xb6e NEW_2
	var_75_int = 521945; // 0xb70 PushI
	SetMessage(var_75_int); // 0xb71 TObjFunc
	ClearReplies(); // 0xb73 TObjFunc
	var_76_bool = 0; // 0xb75 PushV
	var_76_bool = 1; // 0xb76 MovB
	var_77_bool = 0; // 0xb77 PushV
	var_77_bool = 0; // 0xb78 MovB
	var_78_bool = 0; var_79_object = Obj(); // 0xb79 PushV
	var_79_object = var_1_object; // 0xb7a MovT
	func_5098(var_79_object); // 0xb7b NEW_2
	if(var_78_bool == 0) goto Label_2948; // 0xb7d JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0xb7e PushV
	var_87_object = var_1_object; // 0xb7f MovT
	func_5110(var_87_object); // 0xb80 NEW_2
	if(var_86_bool == 0) goto Label_2948; // 0xb82 JumpB
	var_77_bool = 1; // 0xb83 MovB
	
Label_2948:
	if(var_77_bool == 0) goto Label_2964; // 0xb84 JumpB
	var_88_bool = 0; // 0xb85 PushV
	var_88_bool = 0; // 0xb86 MovB
	var_89_bool = 0; var_90_object = Obj(); // 0xb87 PushV
	var_90_object = var_1_object; // 0xb88 MovT
	func_5086(var_90_object); // 0xb89 NEW_2
	if(var_89_bool == 0) goto Label_2962; // 0xb8b JumpB
	var_95_bool = 0; var_96_object = Obj(); // 0xb8c PushV
	var_96_object = var_1_object; // 0xb8d MovT
	func_5110(var_96_object); // 0xb8e NEW_2
	if(var_95_bool == 0) goto Label_2962; // 0xb90 JumpB
	var_88_bool = 1; // 0xb91 MovB
	
Label_2962:
	if(var_88_bool == 0) goto Label_2964; // 0xb92 JumpB
	var_76_bool = 0; // 0xb93 MovB
	
Label_2964:
	if(var_76_bool == 0) goto Label_2970; // 0xb94 JumpB
	var_97_int = 521946; // 0xb95 PushI
	var_98_int = 23122; // 0xb96 PushI
	var_99_int = 23120; // 0xb97 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0xb98 TObjFunc
	
Label_2970:
	var_100_int = 521947; // 0xb9a PushI
	var_101_int = -1; // 0xb9b PushI
	var_102_int = 23121; // 0xb9c PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0xb9d TObjFunc
	return 0; // 0xb9f Return
	
Label_2976:
	var_103_int = 23122; // 0xba0 PushI
	var_104_bool = var_46_bool == var_103_int; // 0xba1 Eq
	if(var_104_bool == 0) goto Label_2994; // 0xba2 JumpB
	var_105_string = ""; // 0xba3 PushV
	var_105_string = "Neutral"; // 0xba4 MovS
	func_2885(var_47_cvector, var_105_string); // 0xba5 NEW_2
	var_106_int = 521948; // 0xba7 PushI
	SetMessage(var_106_int); // 0xba8 TObjFunc
	ClearReplies(); // 0xbaa TObjFunc
	var_107_int = 521949; // 0xbac PushI
	var_108_int = 23730; // 0xbad PushI
	var_109_int = 23123; // 0xbae PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0xbaf TObjFunc
	return 0; // 0xbb1 Return
	
Label_2994:
	var_110_int = 23730; // 0xbb2 PushI
	var_111_bool = var_46_bool == var_110_int; // 0xbb3 Eq
	if(var_111_bool == 0) goto Label_3012; // 0xbb4 JumpB
	var_112_string = ""; // 0xbb5 PushV
	var_112_string = "Neutral"; // 0xbb6 MovS
	func_2885(var_47_cvector, var_112_string); // 0xbb7 NEW_2
	var_113_int = 522551; // 0xbb9 PushI
	SetMessage(var_113_int); // 0xbba TObjFunc
	ClearReplies(); // 0xbbc TObjFunc
	var_114_int = 522552; // 0xbbe PushI
	var_115_int = 23732; // 0xbbf PushI
	var_116_int = 23731; // 0xbc0 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xbc1 TObjFunc
	return 0; // 0xbc3 Return
	
Label_3012:
	var_117_int = 23732; // 0xbc4 PushI
	var_118_bool = var_46_bool == var_117_int; // 0xbc5 Eq
	if(var_118_bool == 0) goto Label_3035; // 0xbc6 JumpB
	var_119_string = ""; // 0xbc7 PushV
	var_119_string = "Neutral"; // 0xbc8 MovS
	func_2885(var_47_cvector, var_119_string); // 0xbc9 NEW_2
	var_120_int = 522553; // 0xbcb PushI
	SetMessage(var_120_int); // 0xbcc TObjFunc
	ClearReplies(); // 0xbce TObjFunc
	var_121_int = 522554; // 0xbd0 PushI
	var_122_int = 23734; // 0xbd1 PushI
	var_123_int = 23733; // 0xbd2 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0xbd3 TObjFunc
	var_124_int = 522556; // 0xbd5 PushI
	var_125_int = -1; // 0xbd6 PushI
	var_126_int = 23735; // 0xbd7 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0xbd8 TObjFunc
	return 0; // 0xbda Return
	
Label_3035:
	var_127_int = 23734; // 0xbdb PushI
	var_128_bool = var_46_bool == var_127_int; // 0xbdc Eq
	if(var_128_bool == 0) goto Label_3053; // 0xbdd JumpB
	var_129_string = ""; // 0xbde PushV
	var_129_string = "Neutral"; // 0xbdf MovS
	func_2885(var_47_cvector, var_129_string); // 0xbe0 NEW_2
	var_130_int = 522555; // 0xbe2 PushI
	SetMessage(var_130_int); // 0xbe3 TObjFunc
	ClearReplies(); // 0xbe5 TObjFunc
	var_131_int = 522557; // 0xbe7 PushI
	var_132_int = 23737; // 0xbe8 PushI
	var_133_int = 23736; // 0xbe9 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0xbea TObjFunc
	return 0; // 0xbec Return
	
Label_3053:
	var_134_int = 23737; // 0xbed PushI
	var_135_bool = var_46_bool == var_134_int; // 0xbee Eq
	if(var_135_bool == 0) goto Label_3071; // 0xbef JumpB
	var_136_string = ""; // 0xbf0 PushV
	var_136_string = "Neutral"; // 0xbf1 MovS
	func_2885(var_47_cvector, var_136_string); // 0xbf2 NEW_2
	var_137_int = 522558; // 0xbf4 PushI
	SetMessage(var_137_int); // 0xbf5 TObjFunc
	ClearReplies(); // 0xbf7 TObjFunc
	var_138_int = 522559; // 0xbf9 PushI
	var_139_int = -1; // 0xbfa PushI
	var_140_int = 23738; // 0xbfb PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0xbfc TObjFunc
	return 0; // 0xbfe Return
	
Label_3071:
	var_3_string = 1; // 0xbff TMovB
	var_141_bool = 0; // 0xc00 PushV
	func_4826(var_141_bool); // 0xc01 NEW_2
	if(var_141_bool == 0) goto Label_3079; // 0xc03 JumpB
	lshStopAnimation(); // 0xc04 Func
	goto Label_3081; // 0xc06 Jump
	
Label_3081:
	return 0; // 0xc09 Return
	
Label_3079:
	StopAnimation(); // 0xc07 Func
	
Label_3083:
	return 0; // 0xc0b Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xcd6 PushI
	if(var_48_int == 0) goto Label_3654; // 0xcd7 JumpB
	func_4679(); // 0xcd9 NEW_2
	var_50_int = 23259; // 0xcdb PushI
	var_51_bool = var_47_cvector == var_50_int; // 0xcdc Eq
	if(var_51_bool == 0) goto Label_3299; // 0xcdd JumpB
	var_52_object = Obj(); var_53_object = Obj(); // 0xcde PushV
	var_52_object = var_1_object; // 0xcdf MovT
	var_53_object = var_0_object; // 0xce0 MovT
	func_5000(); // 0xce1 NEW_2
	
Label_3299:
	var_79_int = 23258; // 0xce3 PushI
	var_80_bool = var_46_bool == var_79_int; // 0xce4 Eq
	if(var_80_bool == 0) goto Label_3362; // 0xce5 JumpB
	var_81_bool = 0; var_82_object = Obj(); // 0xce6 PushV
	var_82_object = var_1_object; // 0xce7 MovT
	func_5127(var_82_object); // 0xce8 NEW_2
	if(var_81_bool == 0) goto Label_3342; // 0xcea JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0xceb PushV
	var_89_object = var_1_object; // 0xcec MovT
	var_90_object = var_0_object; // 0xced MovT
	func_5009(); // 0xcee NEW_2
	var_93_string = ""; // 0xcf0 PushV
	var_93_string = "Neutral"; // 0xcf1 MovS
	func_3263(var_47_cvector, var_93_string); // 0xcf2 NEW_2
	var_110_int = 522089; // 0xcf4 PushI
	SetMessage(var_110_int); // 0xcf5 TObjFunc
	ClearReplies(); // 0xcf7 TObjFunc
	var_111_int = 523647; // 0xcf9 PushI
	var_112_int = 24892; // 0xcfa PushI
	var_113_int = 24891; // 0xcfb PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0xcfc TObjFunc
	var_114_int = 523657; // 0xcfe PushI
	var_115_int = 24892; // 0xcff PushI
	var_116_int = 24901; // 0xd00 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0xd01 TObjFunc
	var_117_bool = 0; var_118_object = Obj(); // 0xd03 PushV
	var_118_object = var_1_object; // 0xd04 MovT
	func_5115(var_118_object); // 0xd05 NEW_2
	if(var_117_bool == 0) goto Label_3341; // 0xd07 JumpB
	var_123_int = 522091; // 0xd08 PushI
	var_124_int = 23261; // 0xd09 PushI
	var_125_int = 23260; // 0xd0a PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0xd0b TObjFunc
	
Label_3341:
	return 0; // 0xd0d Return
	
Label_3342:
	var_126_string = ""; // 0xd0e PushV
	var_126_string = "Neutral"; // 0xd0f MovS
	func_3263(var_47_cvector, var_126_string); // 0xd10 NEW_2
	var_127_int = 522094; // 0xd12 PushI
	SetMessage(var_127_int); // 0xd13 TObjFunc
	ClearReplies(); // 0xd15 TObjFunc
	var_128_int = 523598; // 0xd17 PushI
	var_129_int = 24834; // 0xd18 PushI
	var_130_int = 24833; // 0xd19 PushI
	AddReply(var_128_int, var_129_int, var_130_int); // 0xd1a TObjFunc
	var_131_int = 522095; // 0xd1c PushI
	var_132_int = -1; // 0xd1d PushI
	var_133_int = 23264; // 0xd1e PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0xd1f TObjFunc
	return 0; // 0xd21 Return
	
Label_3362:
	var_134_int = 24834; // 0xd22 PushI
	var_135_bool = var_46_bool == var_134_int; // 0xd23 Eq
	if(var_135_bool == 0) goto Label_3380; // 0xd24 JumpB
	var_136_string = ""; // 0xd25 PushV
	var_136_string = "Neutral"; // 0xd26 MovS
	func_3263(var_47_cvector, var_136_string); // 0xd27 NEW_2
	var_137_int = 523599; // 0xd29 PushI
	SetMessage(var_137_int); // 0xd2a TObjFunc
	ClearReplies(); // 0xd2c TObjFunc
	var_138_int = 523655; // 0xd2e PushI
	var_139_int = 24900; // 0xd2f PushI
	var_140_int = 24899; // 0xd30 PushI
	AddReply(var_138_int, var_139_int, var_140_int); // 0xd31 TObjFunc
	return 0; // 0xd33 Return
	
Label_3380:
	var_141_int = 24900; // 0xd34 PushI
	var_142_bool = var_46_bool == var_141_int; // 0xd35 Eq
	if(var_142_bool == 0) goto Label_3398; // 0xd36 JumpB
	var_143_string = ""; // 0xd37 PushV
	var_143_string = "Neutral"; // 0xd38 MovS
	func_3263(var_47_cvector, var_143_string); // 0xd39 NEW_2
	var_144_int = 523656; // 0xd3b PushI
	SetMessage(var_144_int); // 0xd3c TObjFunc
	ClearReplies(); // 0xd3e TObjFunc
	var_145_int = 534554; // 0xd40 PushI
	var_146_int = -1; // 0xd41 PushI
	var_147_int = 36186; // 0xd42 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0xd43 TObjFunc
	return 0; // 0xd45 Return
	
Label_3398:
	var_148_int = 23261; // 0xd46 PushI
	var_149_bool = var_46_bool == var_148_int; // 0xd47 Eq
	if(var_149_bool == 0) goto Label_3421; // 0xd48 JumpB
	var_150_string = ""; // 0xd49 PushV
	var_150_string = "Neutral"; // 0xd4a MovS
	func_3263(var_47_cvector, var_150_string); // 0xd4b NEW_2
	var_151_int = 522092; // 0xd4d PushI
	SetMessage(var_151_int); // 0xd4e TObjFunc
	ClearReplies(); // 0xd50 TObjFunc
	var_152_int = 523645; // 0xd52 PushI
	var_153_int = 24889; // 0xd53 PushI
	var_154_int = 24888; // 0xd54 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0xd55 TObjFunc
	var_155_int = 523644; // 0xd57 PushI
	var_156_int = 24889; // 0xd58 PushI
	var_157_int = 24887; // 0xd59 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0xd5a TObjFunc
	return 0; // 0xd5c Return
	
Label_3421:
	var_158_int = 24889; // 0xd5d PushI
	var_159_bool = var_46_bool == var_158_int; // 0xd5e Eq
	if(var_159_bool == 0) goto Label_3439; // 0xd5f JumpB
	var_160_string = ""; // 0xd60 PushV
	var_160_string = "Neutral"; // 0xd61 MovS
	func_3263(var_47_cvector, var_160_string); // 0xd62 NEW_2
	var_161_int = 523646; // 0xd64 PushI
	SetMessage(var_161_int); // 0xd65 TObjFunc
	ClearReplies(); // 0xd67 TObjFunc
	var_162_int = 522093; // 0xd69 PushI
	var_163_int = -1; // 0xd6a PushI
	var_164_int = 23262; // 0xd6b PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0xd6c TObjFunc
	return 0; // 0xd6e Return
	
Label_3439:
	var_165_int = 24892; // 0xd6f PushI
	var_166_bool = var_46_bool == var_165_int; // 0xd70 Eq
	if(var_166_bool == 0) goto Label_3462; // 0xd71 JumpB
	var_167_string = ""; // 0xd72 PushV
	var_167_string = "Neutral"; // 0xd73 MovS
	func_3263(var_47_cvector, var_167_string); // 0xd74 NEW_2
	var_168_int = 523648; // 0xd76 PushI
	SetMessage(var_168_int); // 0xd77 TObjFunc
	ClearReplies(); // 0xd79 TObjFunc
	var_169_int = 523649; // 0xd7b PushI
	var_170_int = 24894; // 0xd7c PushI
	var_171_int = 24893; // 0xd7d PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0xd7e TObjFunc
	var_172_int = 523658; // 0xd80 PushI
	var_173_int = 24908; // 0xd81 PushI
	var_174_int = 24903; // 0xd82 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0xd83 TObjFunc
	return 0; // 0xd85 Return
	
Label_3462:
	var_175_int = 24908; // 0xd86 PushI
	var_176_bool = var_46_bool == var_175_int; // 0xd87 Eq
	if(var_176_bool == 0) goto Label_3485; // 0xd88 JumpB
	var_177_string = ""; // 0xd89 PushV
	var_177_string = "Neutral"; // 0xd8a MovS
	func_3263(var_47_cvector, var_177_string); // 0xd8b NEW_2
	var_178_int = 523663; // 0xd8d PushI
	SetMessage(var_178_int); // 0xd8e TObjFunc
	ClearReplies(); // 0xd90 TObjFunc
	var_179_int = 523664; // 0xd92 PushI
	var_180_int = 24905; // 0xd93 PushI
	var_181_int = 24909; // 0xd94 PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0xd95 TObjFunc
	var_182_int = 523665; // 0xd97 PushI
	var_183_int = 24912; // 0xd98 PushI
	var_184_int = 24910; // 0xd99 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0xd9a TObjFunc
	return 0; // 0xd9c Return
	
Label_3485:
	var_185_int = 24912; // 0xd9d PushI
	var_186_bool = var_46_bool == var_185_int; // 0xd9e Eq
	if(var_186_bool == 0) goto Label_3503; // 0xd9f JumpB
	var_187_string = ""; // 0xda0 PushV
	var_187_string = "Neutral"; // 0xda1 MovS
	func_3263(var_47_cvector, var_187_string); // 0xda2 NEW_2
	var_188_int = 523667; // 0xda4 PushI
	SetMessage(var_188_int); // 0xda5 TObjFunc
	ClearReplies(); // 0xda7 TObjFunc
	var_189_int = 523668; // 0xda9 PushI
	var_190_int = 24905; // 0xdaa PushI
	var_191_int = 24913; // 0xdab PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0xdac TObjFunc
	return 0; // 0xdae Return
	
Label_3503:
	var_192_int = 24894; // 0xdaf PushI
	var_193_bool = var_46_bool == var_192_int; // 0xdb0 Eq
	if(var_193_bool == 0) goto Label_3526; // 0xdb1 JumpB
	var_194_string = ""; // 0xdb2 PushV
	var_194_string = "Neutral"; // 0xdb3 MovS
	func_3263(var_47_cvector, var_194_string); // 0xdb4 NEW_2
	var_195_int = 523650; // 0xdb6 PushI
	SetMessage(var_195_int); // 0xdb7 TObjFunc
	ClearReplies(); // 0xdb9 TObjFunc
	var_196_int = 523659; // 0xdbb PushI
	var_197_int = 24905; // 0xdbc PushI
	var_198_int = 24904; // 0xdbd PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0xdbe TObjFunc
	var_199_int = 523666; // 0xdc0 PushI
	var_200_int = 24896; // 0xdc1 PushI
	var_201_int = 24911; // 0xdc2 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0xdc3 TObjFunc
	return 0; // 0xdc5 Return
	
Label_3526:
	var_202_int = 24905; // 0xdc6 PushI
	var_203_bool = var_46_bool == var_202_int; // 0xdc7 Eq
	if(var_203_bool == 0) goto Label_3554; // 0xdc8 JumpB
	var_204_string = ""; // 0xdc9 PushV
	var_204_string = "Neutral"; // 0xdca MovS
	func_3263(var_47_cvector, var_204_string); // 0xdcb NEW_2
	var_205_int = 523660; // 0xdcd PushI
	SetMessage(var_205_int); // 0xdce TObjFunc
	ClearReplies(); // 0xdd0 TObjFunc
	var_206_int = 523661; // 0xdd2 PushI
	var_207_int = 24896; // 0xdd3 PushI
	var_208_int = 24906; // 0xdd4 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0xdd5 TObjFunc
	var_209_int = 523669; // 0xdd7 PushI
	var_210_int = 24896; // 0xdd8 PushI
	var_211_int = 24915; // 0xdd9 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0xdda TObjFunc
	var_212_int = 523651; // 0xddc PushI
	var_213_int = 24918; // 0xddd PushI
	var_214_int = 24895; // 0xdde PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0xddf TObjFunc
	return 0; // 0xde1 Return
	
Label_3554:
	var_215_int = 24918; // 0xde2 PushI
	var_216_bool = var_46_bool == var_215_int; // 0xde3 Eq
	if(var_216_bool == 0) goto Label_3572; // 0xde4 JumpB
	var_217_string = ""; // 0xde5 PushV
	var_217_string = "Neutral"; // 0xde6 MovS
	func_3263(var_47_cvector, var_217_string); // 0xde7 NEW_2
	var_218_int = 523670; // 0xde9 PushI
	SetMessage(var_218_int); // 0xdea TObjFunc
	ClearReplies(); // 0xdec TObjFunc
	var_219_int = 523671; // 0xdee PushI
	var_220_int = 24896; // 0xdef PushI
	var_221_int = 24919; // 0xdf0 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0xdf1 TObjFunc
	return 0; // 0xdf3 Return
	
Label_3572:
	var_222_int = 24896; // 0xdf4 PushI
	var_223_bool = var_46_bool == var_222_int; // 0xdf5 Eq
	if(var_223_bool == 0) goto Label_3595; // 0xdf6 JumpB
	var_224_string = ""; // 0xdf7 PushV
	var_224_string = "Neutral"; // 0xdf8 MovS
	func_3263(var_47_cvector, var_224_string); // 0xdf9 NEW_2
	var_225_int = 523652; // 0xdfb PushI
	SetMessage(var_225_int); // 0xdfc TObjFunc
	ClearReplies(); // 0xdfe TObjFunc
	var_226_int = 523653; // 0xe00 PushI
	var_227_int = 24898; // 0xe01 PushI
	var_228_int = 24897; // 0xe02 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0xe03 TObjFunc
	var_229_int = 523675; // 0xe05 PushI
	var_230_int = 24925; // 0xe06 PushI
	var_231_int = 24924; // 0xe07 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0xe08 TObjFunc
	return 0; // 0xe0a Return
	
Label_3595:
	var_232_int = 24925; // 0xe0b PushI
	var_233_bool = var_46_bool == var_232_int; // 0xe0c Eq
	if(var_233_bool == 0) goto Label_3613; // 0xe0d JumpB
	var_234_string = ""; // 0xe0e PushV
	var_234_string = "Neutral"; // 0xe0f MovS
	func_3263(var_47_cvector, var_234_string); // 0xe10 NEW_2
	var_235_int = 523676; // 0xe12 PushI
	SetMessage(var_235_int); // 0xe13 TObjFunc
	ClearReplies(); // 0xe15 TObjFunc
	var_236_int = 523677; // 0xe17 PushI
	var_237_int = 24898; // 0xe18 PushI
	var_238_int = 24926; // 0xe19 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0xe1a TObjFunc
	return 0; // 0xe1c Return
	
Label_3613:
	var_239_int = 24898; // 0xe1d PushI
	var_240_bool = var_46_bool == var_239_int; // 0xe1e Eq
	if(var_240_bool == 0) goto Label_3642; // 0xe1f JumpB
	var_241_string = ""; // 0xe20 PushV
	var_241_string = "Neutral"; // 0xe21 MovS
	func_3263(var_47_cvector, var_241_string); // 0xe22 NEW_2
	var_242_int = 523654; // 0xe24 PushI
	SetMessage(var_242_int); // 0xe25 TObjFunc
	ClearReplies(); // 0xe27 TObjFunc
	var_243_bool = 0; var_244_object = Obj(); // 0xe29 PushV
	var_244_object = var_1_object; // 0xe2a MovT
	func_5115(var_244_object); // 0xe2b NEW_2
	var_245_bool = var_243_bool == 0; // 0xe2d Not
	if(var_245_bool == 0) goto Label_3636; // 0xe2e JumpB
	var_246_int = 522090; // 0xe2f PushI
	var_247_int = -1; // 0xe30 PushI
	var_248_int = 23259; // 0xe31 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0xe32 TObjFunc
	
Label_3636:
	var_249_int = 523678; // 0xe34 PushI
	var_250_int = -1; // 0xe35 PushI
	var_251_int = 24928; // 0xe36 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0xe37 TObjFunc
	return 0; // 0xe39 Return
	
Label_3642:
	var_3_string = 1; // 0xe3a TMovB
	var_252_bool = 0; // 0xe3b PushV
	func_4826(var_252_bool); // 0xe3c NEW_2
	if(var_252_bool == 0) goto Label_3650; // 0xe3e JumpB
	lshStopAnimation(); // 0xe3f Func
	goto Label_3652; // 0xe41 Jump
	
Label_3652:
	return 0; // 0xe44 Return
	
Label_3650:
	StopAnimation(); // 0xe42 Func
	
Label_3654:
	return 0; // 0xe46 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_cvector)
{
	var_48_int = 1; // 0xeee PushI
	if(var_48_int == 0) goto Label_3913; // 0xeef JumpB
	func_4679(); // 0xef1 NEW_2
	var_50_int = 36971; // 0xef3 PushI
	var_51_bool = var_46_bool == var_50_int; // 0xef4 Eq
	if(var_51_bool == 0) goto Label_3855; // 0xef5 JumpB
	var_52_string = ""; // 0xef6 PushV
	var_52_string = "Neutral"; // 0xef7 MovS
	func_3799(var_47_cvector, var_52_string); // 0xef8 NEW_2
	var_69_int = 535294; // 0xefa PushI
	SetMessage(var_69_int); // 0xefb TObjFunc
	ClearReplies(); // 0xefd TObjFunc
	var_70_int = 535295; // 0xeff PushI
	var_71_int = 36973; // 0xf00 PushI
	var_72_int = 36972; // 0xf01 PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0xf02 TObjFunc
	var_73_int = 535302; // 0xf04 PushI
	var_74_int = -1; // 0xf05 PushI
	var_75_int = 36980; // 0xf06 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xf07 TObjFunc
	var_76_int = 535303; // 0xf09 PushI
	var_77_int = -1; // 0xf0a PushI
	var_78_int = 36981; // 0xf0b PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xf0c TObjFunc
	return 0; // 0xf0e Return
	
Label_3855:
	var_79_int = 36973; // 0xf0f PushI
	var_80_bool = var_46_bool == var_79_int; // 0xf10 Eq
	if(var_80_bool == 0) goto Label_3878; // 0xf11 JumpB
	var_81_string = ""; // 0xf12 PushV
	var_81_string = "Neutral"; // 0xf13 MovS
	func_3799(var_47_cvector, var_81_string); // 0xf14 NEW_2
	var_82_int = 535296; // 0xf16 PushI
	SetMessage(var_82_int); // 0xf17 TObjFunc
	ClearReplies(); // 0xf19 TObjFunc
	var_83_int = 535297; // 0xf1b PushI
	var_84_int = 36975; // 0xf1c PushI
	var_85_int = 36974; // 0xf1d PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xf1e TObjFunc
	var_86_int = 535301; // 0xf20 PushI
	var_87_int = 36975; // 0xf21 PushI
	var_88_int = 36978; // 0xf22 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xf23 TObjFunc
	return 0; // 0xf25 Return
	
Label_3878:
	var_89_int = 36975; // 0xf26 PushI
	var_90_bool = var_46_bool == var_89_int; // 0xf27 Eq
	if(var_90_bool == 0) goto Label_3901; // 0xf28 JumpB
	var_91_string = ""; // 0xf29 PushV
	var_91_string = "Neutral"; // 0xf2a MovS
	func_3799(var_47_cvector, var_91_string); // 0xf2b NEW_2
	var_92_int = 535298; // 0xf2d PushI
	SetMessage(var_92_int); // 0xf2e TObjFunc
	ClearReplies(); // 0xf30 TObjFunc
	var_93_int = 535299; // 0xf32 PushI
	var_94_int = -1; // 0xf33 PushI
	var_95_int = 36976; // 0xf34 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0xf35 TObjFunc
	var_96_int = 535300; // 0xf37 PushI
	var_97_int = -1; // 0xf38 PushI
	var_98_int = 36977; // 0xf39 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0xf3a TObjFunc
	return 0; // 0xf3c Return
	
Label_3901:
	var_3_string = 1; // 0xf3d TMovB
	var_99_bool = 0; // 0xf3e PushV
	func_4826(var_99_bool); // 0xf3f NEW_2
	if(var_99_bool == 0) goto Label_3909; // 0xf41 JumpB
	lshStopAnimation(); // 0xf42 Func
	goto Label_3911; // 0xf44 Jump
	
Label_3911:
	return 0; // 0xf47 Return
	
Label_3909:
	StopAnimation(); // 0xf45 Func
	
Label_3913:
	return 0; // 0xf49 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_cvector)
{
	var_48_int = 1; // 0xfec PushI
	if(var_48_int == 0) goto Label_4116; // 0xfed JumpB
	func_4679(); // 0xfef NEW_2
	var_50_int = 42560; // 0xff1 PushI
	var_51_bool = var_46_int == var_50_int; // 0xff2 Eq
	if(var_51_bool == 0) goto Label_4104; // 0xff3 JumpB
	var_52_string = ""; // 0xff4 PushV
	var_52_string = "Neutral"; // 0xff5 MovS
	func_4053(var_47_cvector, var_52_string); // 0xff6 NEW_2
	var_69_int = 540551; // 0xff8 PushI
	SetMessage(var_69_int); // 0xff9 TObjFunc
	ClearReplies(); // 0xffb TObjFunc
	var_70_int = 540552; // 0xffd PushI
	var_71_int = -1; // 0xffe PushI
	var_72_int = 42561; // 0xfff PushI
	AddReply(var_70_int, var_71_int, var_72_int); // 0x1000 TObjFunc
	var_73_int = 540795; // 0x1002 PushI
	var_74_int = -1; // 0x1003 PushI
	var_75_int = 42844; // 0x1004 PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x1005 TObjFunc
	return 0; // 0x1007 Return
	
Label_4104:
	var_3_string = 1; // 0x1008 TMovB
	var_76_bool = 0; // 0x1009 PushV
	func_4826(var_76_bool); // 0x100a NEW_2
	if(var_76_bool == 0) goto Label_4112; // 0x100c JumpB
	lshStopAnimation(); // 0x100d Func
	goto Label_4114; // 0x100f Jump
	
Label_4114:
	return 0; // 0x1012 Return
	
Label_4112:
	StopAnimation(); // 0x1010 Func
	
Label_4116:
	return 0; // 0x1014 Return
}


task_18_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_int)
{
	var_47_int = 10; // 0x1062 PushI
	var_48_bool = var_46_int == var_47_int; // 0x1063 Eq
	if(var_48_bool == 0) goto Label_4230; // 0x1064 JumpB
	func_4189(); // 0x1066 NEW_2
	var_50_bool = 0; // 0x1068 PushV
	var_50_bool = 0; // 0x1069 MovB
	var_51_bool = 0; // 0x106a PushV
	func_4403(var_51_bool); // 0x106b NEW_2
	if(var_51_bool == 0) goto Label_4211; // 0x106d JumpB
	var_54_bool = 0; // 0x106e PushV
	func_4158(var_54_bool); // 0x106f NEW_2
	if(var_54_bool == 0) goto Label_4211; // 0x1071 JumpB
	var_50_bool = 1; // 0x1072 MovB
	
Label_4211:
	if(var_50_bool == 0) goto Label_4224; // 0x1073 JumpB
	var_71_bool = 0; // 0x1074 PushV
	func_4138(var_71_bool); // 0x1075 NEW_2
	if(var_71_bool == 0) goto Label_4223; // 0x1077 JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x1078 PushV
	var_92_object = Obj(); // 0x1079 PushV
	func_4686(var_92_object); // 0x107a NEW_2
	var_91_object = var_92_object; // 0x107b Mov
	func_4553(var_91_object); // 0x107d NEW_2
	
Label_4223:
	goto Label_4230; // 0x107f Jump
	
Label_4230:
	return 0; // 0x1086 Return
	
Label_4224:
	func_4153(var_46_int); // 0x1081 NEW_2
	func_4180(); // 0x1084 NEW_2
}


task_18_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	func_4371(); // 0x1088 NEW_2
	func_4189(); // 0x108b NEW_2
	lshStopSpeech(); // 0x108d Func
	lshStopAnimation(); // 0x108f Func
	StopAsync(); // 0x1091 Func
	Hold(); // 0x1093 Func
	return 0; // 0x1095 Return
}


task_18_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	StopGroup0(); // 0x1096 Func
	func_4189(); // 0x1099 NEW_2
	var_47_string = ""; // 0x109b PushV
	var_47_string = "Neutral"; // 0x109c MovS
	func_4633(var_47_string); // 0x109d NEW_2
	func_4180(); // 0x10a0 NEW_2
	return 0; // 0x10a2 Return
}


task_18_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_bool)
{
	var_47_bool = var_46_bool; // 0x10a4 Push
	if(var_47_bool == 0) goto Label_4266; // 0x10a5 JumpB
	func_4180(); // 0x10a7 NEW_2
	goto Label_4270; // 0x10a9 Jump
	
Label_4270:
	return 0; // 0x10ae Return
	
Label_4266:
	var_53_string = ""; // 0x10aa PushV
	var_53_string = "Neutral"; // 0x10ab MovS
	func_4633(var_53_string); // 0x10ac NEW_2
}


task_18_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0; // 0x10af PushV
	IsOverrideActive(var_48_bool); // 0x10b0 Func
	var_49_bool = var_48_bool == 0; // 0x10b2 Not
	if(var_49_bool == 0) goto Label_4299; // 0x10b3 JumpB
	EventDisable(0); // 0x10b4 EventDisable
	func_4371(); // 0x10b6 NEW_2
	var_50_bool = 0; var_51_object = Obj(); // 0x10b8 PushV
	var_51_object = var_46_object; // 0x10b9 Mov
	func_4394(var_51_object); // 0x10ba NEW_2
	EventEnable(0); // 0x10bc EventEnable
	var_64_object = Obj(); // 0x10bd PushV
	var_64_object = var_46_object; // 0x10be Mov
	func_5419(var_64_object); // 0x10bf NEW_2
	var_901_string = ""; // 0x10c1 PushV
	var_901_string = "Neutral"; // 0x10c2 MovS
	func_4633(var_901_string); // 0x10c3 NEW_2
	func_4189(); // 0x10c6 NEW_2
	func_4180(); // 0x10c9 NEW_2
	
Label_4299:
	return 2; // 0x10cb Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_cvector)
{
	var_46_bool = GlobalVars[1]; // 0x1015 PushGE
	var_46_bool = 0; // 0x1016 MovB
	GlobalVars[1] = var_46_bool; // 0x1017 PopGE
	func_4124(var_45_cvector); // 0x1019 NEW_2
	return 0; // 0x101b Return
}


func_0(var_0_object, var_476_int, var_477_object)
{
	var_479_object = Obj(); var_480_bool = 0; var_481_int = 0; var_482_bool = 0; var_483_object = Obj(); var_484_bool = 0; var_485_int = 0; var_486_bool = 0; // 0x0 PushV
	var_0_object = var_477_object; // 0x1 TMov
	var_487_bool = 0; var_488_object = Obj(); var_489_float = 0; // 0x2 PushV
	var_488_object = var_477_object; // 0x3 Mov
	var_489_float = 70.0; // 0x4 MovF
	func_4408(var_488_object, var_489_float); // 0x5 NEW_2
	var_490_bool = var_487_bool == 0; // 0x7 Not
	if(var_490_bool == 0) goto Label_11; // 0x8 JumpB
	var_476_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_483_object); // 0xb Func
	var_491_int = 0; // 0xd PushV
	func_4820(var_491_int); // 0xe NEW_2
	SetNPCName(var_491_int); // 0x10 ObjFunc
	var_492_int = 0; // 0x12 PushV
	func_4818(var_492_int); // 0x13 NEW_2
	SetNPCDescription(var_492_int); // 0x15 ObjFunc
	var_493_string = ""; // 0x17 PushV
	func_4822(var_493_string); // 0x18 NEW_2
	SetPhoto(var_493_string); // 0x1a ObjFunc
	var_494_string = ""; // 0x1c PushV
	func_4824(var_494_string); // 0x1d NEW_2
	SetPhoto2(var_494_string); // 0x1f ObjFunc
	var_495_int = 0; // 0x21 PushV
	func_5402(var_495_int); // 0x22 NEW_2
	SetPlayerName(var_495_int); // 0x24 ObjFunc
	var_485_int = -1; // 0x26 MovI
	IsOverrideActive(var_484_bool); // 0x27 Func
	var_496_bool = var_484_bool; // 0x29 Push
	if(var_496_bool == 0) goto Label_45; // 0x2a JumpB
	var_476_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_483_object); // 0x2d Func
	var_497_bool = 0; var_498_object = Obj(); // 0x2f PushV
	var_499_object = Obj(); // 0x30 PushV
	func_4686(var_499_object); // 0x31 NEW_2
	var_498_object = var_499_object; // 0x32 Mov
	func_4495(var_497_bool, var_498_object); // 0x34 NEW_2
	var_500_object = Obj(); var_501_object = Obj(); // 0x36 PushV
	var_500_object = var_477_object; // 0x37 Mov
	var_501_object = var_483_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_502_object, var_503_object, var_504_string, var_505_bool, var_500_object, var_501_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_486_bool); // 0x3d ObjFunc
	
Label_63:
	var_543_bool = var_486_bool == 0; // 0x3f Not
	if(var_543_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_486_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_544_object = Obj(); // 0x46 PushV
	var_544_object = var_477_object; // 0x47 Mov
	func_4477(); // 0x48 NEW_2
	StopDialog(var_483_object); // 0x4a Func
	GetReturnValue(var_485_int); // 0x4c ObjFunc
	var_476_int = var_485_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_4866()
{
	var_131_string = "oob3Ospina1"; // 0x1303 PushS
	var_132_int = 1; // 0x1304 PushI
	SetVariable(var_131_string, var_132_int); // 0x1305 Func
	return 0; // 0x1307 Return
}


func_517(var_0_object, var_403_int, var_404_object)
{
	var_406_object = Obj(); var_407_bool = 0; var_408_int = 0; var_409_bool = 0; var_410_object = Obj(); var_411_bool = 0; var_412_int = 0; var_413_bool = 0; // 0x205 PushV
	var_0_object = var_404_object; // 0x206 TMov
	var_414_bool = 0; var_415_object = Obj(); var_416_float = 0; // 0x207 PushV
	var_415_object = var_404_object; // 0x208 Mov
	var_416_float = 70.0; // 0x209 MovF
	func_4408(var_415_object, var_416_float); // 0x20a NEW_2
	var_417_bool = var_414_bool == 0; // 0x20c Not
	if(var_417_bool == 0) goto Label_528; // 0x20d JumpB
	var_403_int = -2; // 0x20e MovI
	return 8; // 0x20f Return
	
Label_528:
	CreateDialog(var_410_object); // 0x210 Func
	var_418_int = 0; // 0x212 PushV
	func_4820(var_418_int); // 0x213 NEW_2
	SetNPCName(var_418_int); // 0x215 ObjFunc
	var_419_int = 0; // 0x217 PushV
	func_4818(var_419_int); // 0x218 NEW_2
	SetNPCDescription(var_419_int); // 0x21a ObjFunc
	var_420_string = ""; // 0x21c PushV
	func_4822(var_420_string); // 0x21d NEW_2
	SetPhoto(var_420_string); // 0x21f ObjFunc
	var_421_string = ""; // 0x221 PushV
	func_4824(var_421_string); // 0x222 NEW_2
	SetPhoto2(var_421_string); // 0x224 ObjFunc
	var_422_int = 0; // 0x226 PushV
	func_5402(var_422_int); // 0x227 NEW_2
	SetPlayerName(var_422_int); // 0x229 ObjFunc
	var_412_int = -1; // 0x22b MovI
	IsOverrideActive(var_411_bool); // 0x22c Func
	var_423_bool = var_411_bool; // 0x22e Push
	if(var_423_bool == 0) goto Label_562; // 0x22f JumpB
	var_403_int = -2; // 0x230 MovI
	return 8; // 0x231 Return
	
Label_562:
	DoDialog(var_410_object); // 0x232 Func
	var_424_bool = 0; var_425_object = Obj(); // 0x234 PushV
	var_426_object = Obj(); // 0x235 PushV
	func_4686(var_426_object); // 0x236 NEW_2
	var_425_object = var_426_object; // 0x237 Mov
	func_4495(var_424_bool, var_425_object); // 0x239 NEW_2
	var_427_object = Obj(); var_428_object = Obj(); // 0x23b PushV
	var_427_object = var_404_object; // 0x23c Mov
	var_428_object = var_410_object; // 0x23d Mov
	TaskCall(3); // 0x23e TaskCall
	func_598(var_429_object, var_430_object, var_431_string, var_432_bool, var_427_object, var_428_object); // 0x23f NEW_2
	TaskReturn(); // 0x240 TaskReturn
	IsDialogEnd(var_413_bool); // 0x242 ObjFunc
	
Label_580:
	var_472_bool = var_413_bool == 0; // 0x244 Not
	if(var_472_bool == 0) goto Label_587; // 0x245 JumpB
	sync(); // 0x246 Func
	IsDialogEnd(var_413_bool); // 0x248 ObjFunc
	goto Label_580; // 0x24a Jump
	
Label_587:
	var_473_object = Obj(); // 0x24b PushV
	var_473_object = var_404_object; // 0x24c Mov
	func_4477(); // 0x24d NEW_2
	StopDialog(var_410_object); // 0x24f Func
	GetReturnValue(var_412_int); // 0x251 ObjFunc
	var_403_int = var_412_int; // 0x253 Mov
	return 8; // 0x254 Return
}


func_5127(var_728_bool)
{
	var_730_int = 0; var_731_string = ""; // 0x1408 PushV
	var_731_string = "oob11Ospina1"; // 0x1409 MovS
	func_4702(var_730_int, var_731_string); // 0x140a NEW_2
	var_732_int = 0; // 0x140c PushI
	var_733_bool = var_730_int == var_732_int; // 0x140d Eq
	if(var_733_bool == 0) goto Label_5137; // 0x140e JumpB
	var_728_bool = 1; // 0x140f MovB
	return 0; // 0x1410 Return
	
Label_5137:
	var_728_bool = 0; // 0x1411 MovB
	return 0; // 0x1412 Return
}


func_4872()
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x1308 PushV
	var_56_string = "b3q01"; // 0x1309 PushS
	var_57_int = 2; // 0x130a PushI
	SetVariable(var_56_string, var_57_int); // 0x130b Func
	var_58_object = Obj(); // 0x130d PushV
	func_5352(var_58_object); // 0x130e NEW_2
	var_55_object = var_58_object; // 0x130f Mov
	var_65_string = "b3q01OspinaGotoButcher"; // 0x1311 PushS
	var_66_string = "pt_gmap_house5_24"; // 0x1312 PushS
	var_67_int = 1; // 0x1313 PushI
	var_68_int = 519635; // 0x1314 PushI
	var_69_float = 0; // 0x1315 PushV
	func_4774(var_69_float); // 0x1316 NEW_2
	AddMark(var_65_string, var_66_string, var_67_int, var_68_int, var_69_float); // 0x1318 ObjFunc
	func_5272(); // 0x131b NEW_2
	var_95_bool = 0; var_96_string = ""; var_97_string = ""; // 0x131d PushV
	var_96_string = "quest_b3_01"; // 0x131e MovS
	var_97_string = "place_butcher"; // 0x131f MovS
	func_4762(var_95_bool, var_96_string, var_97_string); // 0x1320 NEW_2
	return 2; // 0x1322 Return
}


func_3084(var_0_object, var_697_int, var_698_object)
{
	var_700_object = Obj(); var_701_bool = 0; var_702_int = 0; var_703_bool = 0; var_704_object = Obj(); var_705_bool = 0; var_706_int = 0; var_707_bool = 0; // 0xc0c PushV
	var_0_object = var_698_object; // 0xc0d TMov
	var_708_bool = 0; var_709_object = Obj(); var_710_float = 0; // 0xc0e PushV
	var_709_object = var_698_object; // 0xc0f Mov
	var_710_float = 70.0; // 0xc10 MovF
	func_4408(var_709_object, var_710_float); // 0xc11 NEW_2
	var_711_bool = var_708_bool == 0; // 0xc13 Not
	if(var_711_bool == 0) goto Label_3095; // 0xc14 JumpB
	var_697_int = -2; // 0xc15 MovI
	return 8; // 0xc16 Return
	
Label_3095:
	CreateDialog(var_704_object); // 0xc17 Func
	var_712_int = 0; // 0xc19 PushV
	func_4820(var_712_int); // 0xc1a NEW_2
	SetNPCName(var_712_int); // 0xc1c ObjFunc
	var_713_int = 0; // 0xc1e PushV
	func_4818(var_713_int); // 0xc1f NEW_2
	SetNPCDescription(var_713_int); // 0xc21 ObjFunc
	var_714_string = ""; // 0xc23 PushV
	func_4822(var_714_string); // 0xc24 NEW_2
	SetPhoto(var_714_string); // 0xc26 ObjFunc
	var_715_string = ""; // 0xc28 PushV
	func_4824(var_715_string); // 0xc29 NEW_2
	SetPhoto2(var_715_string); // 0xc2b ObjFunc
	var_716_int = 0; // 0xc2d PushV
	func_5402(var_716_int); // 0xc2e NEW_2
	SetPlayerName(var_716_int); // 0xc30 ObjFunc
	var_706_int = -1; // 0xc32 MovI
	IsOverrideActive(var_705_bool); // 0xc33 Func
	var_717_bool = var_705_bool; // 0xc35 Push
	if(var_717_bool == 0) goto Label_3129; // 0xc36 JumpB
	var_697_int = -2; // 0xc37 MovI
	return 8; // 0xc38 Return
	
Label_3129:
	DoDialog(var_704_object); // 0xc39 Func
	var_718_bool = 0; var_719_object = Obj(); // 0xc3b PushV
	var_720_object = Obj(); // 0xc3c PushV
	func_4686(var_720_object); // 0xc3d NEW_2
	var_719_object = var_720_object; // 0xc3e Mov
	func_4495(var_718_bool, var_719_object); // 0xc40 NEW_2
	var_721_object = Obj(); var_722_object = Obj(); // 0xc42 PushV
	var_721_object = var_698_object; // 0xc43 Mov
	var_722_object = var_704_object; // 0xc44 Mov
	TaskCall(13); // 0xc45 TaskCall
	func_3165(var_723_object, var_724_object, var_725_string, var_726_bool, var_721_object, var_722_object); // 0xc46 NEW_2
	TaskReturn(); // 0xc47 TaskReturn
	IsDialogEnd(var_707_bool); // 0xc49 ObjFunc
	
Label_3147:
	var_778_bool = var_707_bool == 0; // 0xc4b Not
	if(var_778_bool == 0) goto Label_3154; // 0xc4c JumpB
	sync(); // 0xc4d Func
	IsDialogEnd(var_707_bool); // 0xc4f ObjFunc
	goto Label_3147; // 0xc51 Jump
	
Label_3154:
	var_779_object = Obj(); // 0xc52 PushV
	var_779_object = var_698_object; // 0xc53 Mov
	func_4477(); // 0xc54 NEW_2
	StopDialog(var_704_object); // 0xc56 Func
	GetReturnValue(var_706_int); // 0xc58 ObjFunc
	var_697_int = var_706_int; // 0xc5a Mov
	return 8; // 0xc5b Return
}


func_4369(var_85_bool)
{
	var_85_bool = 1; // 0x1111 MovB
	return 0; // 0x1112 Return
}


func_5139(var_596_bool)
{
	var_598_int = 0; var_599_string = ""; // 0x1414 PushV
	var_599_string = "oob8Ospina1"; // 0x1415 MovS
	func_4702(var_598_int, var_599_string); // 0x1416 NEW_2
	var_600_int = 0; // 0x1418 PushI
	var_601_bool = var_598_int == var_600_int; // 0x1419 Eq
	if(var_601_bool == 0) goto Label_5149; // 0x141a JumpB
	var_596_bool = 1; // 0x141b MovB
	return 0; // 0x141c Return
	
Label_5149:
	var_596_bool = 0; // 0x141d MovB
	return 0; // 0x141e Return
}


func_4371()
{
	StopAnimation(); // 0x1113 Func
	StopGroup0(); // 0x1115 Func
	return 0; // 0x1117 Return
}


func_2071(var_0_object, var_547_int, var_548_object)
{
	var_550_object = Obj(); var_551_bool = 0; var_552_int = 0; var_553_bool = 0; var_554_object = Obj(); var_555_bool = 0; var_556_int = 0; var_557_bool = 0; // 0x817 PushV
	var_0_object = var_548_object; // 0x818 TMov
	var_558_bool = 0; var_559_object = Obj(); var_560_float = 0; // 0x819 PushV
	var_559_object = var_548_object; // 0x81a Mov
	var_560_float = 70.0; // 0x81b MovF
	func_4408(var_559_object, var_560_float); // 0x81c NEW_2
	var_561_bool = var_558_bool == 0; // 0x81e Not
	if(var_561_bool == 0) goto Label_2082; // 0x81f JumpB
	var_547_int = -2; // 0x820 MovI
	return 8; // 0x821 Return
	
Label_2082:
	CreateDialog(var_554_object); // 0x822 Func
	var_562_int = 0; // 0x824 PushV
	func_4820(var_562_int); // 0x825 NEW_2
	SetNPCName(var_562_int); // 0x827 ObjFunc
	var_563_int = 0; // 0x829 PushV
	func_4818(var_563_int); // 0x82a NEW_2
	SetNPCDescription(var_563_int); // 0x82c ObjFunc
	var_564_string = ""; // 0x82e PushV
	func_4822(var_564_string); // 0x82f NEW_2
	SetPhoto(var_564_string); // 0x831 ObjFunc
	var_565_string = ""; // 0x833 PushV
	func_4824(var_565_string); // 0x834 NEW_2
	SetPhoto2(var_565_string); // 0x836 ObjFunc
	var_566_int = 0; // 0x838 PushV
	func_5402(var_566_int); // 0x839 NEW_2
	SetPlayerName(var_566_int); // 0x83b ObjFunc
	var_556_int = -1; // 0x83d MovI
	IsOverrideActive(var_555_bool); // 0x83e Func
	var_567_bool = var_555_bool; // 0x840 Push
	if(var_567_bool == 0) goto Label_2116; // 0x841 JumpB
	var_547_int = -2; // 0x842 MovI
	return 8; // 0x843 Return
	
Label_2116:
	DoDialog(var_554_object); // 0x844 Func
	var_568_bool = 0; var_569_object = Obj(); // 0x846 PushV
	var_570_object = Obj(); // 0x847 PushV
	func_4686(var_570_object); // 0x848 NEW_2
	var_569_object = var_570_object; // 0x849 Mov
	func_4495(var_568_bool, var_569_object); // 0x84b NEW_2
	var_571_object = Obj(); var_572_object = Obj(); // 0x84d PushV
	var_571_object = var_548_object; // 0x84e Mov
	var_572_object = var_554_object; // 0x84f Mov
	TaskCall(9); // 0x850 TaskCall
	func_2152(var_573_object, var_574_object, var_575_string, var_576_bool, var_571_object, var_572_object); // 0x851 NEW_2
	TaskReturn(); // 0x852 TaskReturn
	IsDialogEnd(var_557_bool); // 0x854 ObjFunc
	
Label_2134:
	var_616_bool = var_557_bool == 0; // 0x856 Not
	if(var_616_bool == 0) goto Label_2141; // 0x857 JumpB
	sync(); // 0x858 Func
	IsDialogEnd(var_557_bool); // 0x85a ObjFunc
	goto Label_2134; // 0x85c Jump
	
Label_2141:
	var_617_object = Obj(); // 0x85d PushV
	var_617_object = var_548_object; // 0x85e Mov
	func_4477(); // 0x85f NEW_2
	StopDialog(var_554_object); // 0x861 Func
	GetReturnValue(var_556_int); // 0x863 ObjFunc
	var_547_int = var_556_int; // 0x865 Mov
	return 8; // 0x866 Return
}


func_4376(var_61_float)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); // 0x1118 PushV
	GetPosition(var_66_cvector); // 0x1119 Func
	GetPosition(var_67_cvector); // 0x111b ObjFunc
	var_68_cvector = var_67_cvector - var_66_cvector; // 0x111d Sub2
	var_61_float = var_68_cvector | var_68_cvector; // 0x111e Or2
	return 6; // 0x111f Return
}


func_4633(var_267_string)
{
	var_268_bool = 0; var_269_float = 0; var_270_float = 0; var_271_bool = 0; var_272_float = 0; var_273_float = 0; // 0x1219 PushV
	lshHasAnimation(var_271_bool, var_267_string); // 0x121a Func
	var_274_bool = var_271_bool; // 0x121c Push
	if(var_274_bool == 0) goto Label_4644; // 0x121d JumpB
	lshGetAnimTimes(var_267_string, var_272_float, var_273_float); // 0x121e Func
	var_275_bool = 0; // 0x1220 PushB
	lshPlayAnimation(var_272_float, var_273_float, var_275_bool); // 0x1221 Func
	goto Label_4648; // 0x1223 Jump
	
Label_4648:
	return 6; // 0x1228 Return
	
Label_4644:
	var_276_string = "Can't find lsh animation : "; // 0x1224 PushS
	var_277_int = var_276_string + var_267_string; // 0x1225 Add
	Trace(var_277_int); // 0x1226 Func
}


func_5402(var_130_int)
{
	var_131_int = 0; var_132_int = 0; // 0x151a PushV
	var_133_string = "branch"; // 0x151b PushS
	GetVariable(var_133_string, var_132_int); // 0x151c Func
	var_134_int = 0; // 0x151e PushI
	var_135_bool = var_132_int == var_134_int; // 0x151f Eq
	if(var_135_bool == 0) goto Label_5412; // 0x1520 JumpB
	var_130_int = 1; // 0x1521 MovI
	return 2; // 0x1522 Return
	
Label_5412:
	var_136_int = 1; // 0x1524 PushI
	var_137_bool = var_132_int == var_136_int; // 0x1525 Eq
	if(var_137_bool == 0) goto Label_5417; // 0x1526 JumpB
	var_130_int = 2; // 0x1527 MovI
	return 2; // 0x1528 Return
	
Label_5417:
	var_130_int = 3; // 0x1529 MovI
	return 2; // 0x152a Return
}


func_4124(var_0_object)
{
	var_47_bool = 0; // 0x101c PushV
	func_4403(var_47_bool); // 0x101d NEW_2
	var_50_bool = var_47_bool == 0; // 0x101f Not
	if(var_50_bool == 0) goto Label_4131; // 0x1020 JumpB
	Hold(); // 0x1021 Func
	
Label_4131:
	GetDirection(var_0_object); // 0x1023 Func
	
Label_4133:
	func_4300(); // 0x1026 NEW_2
	goto Label_4133; // 0x1028 Jump
}


func_5151(var_517_bool)
{
	var_519_int = 0; var_520_string = ""; // 0x1420 PushV
	var_520_string = "b5q01"; // 0x1421 MovS
	func_4702(var_519_int, var_520_string); // 0x1422 NEW_2
	var_521_int = 1; // 0x1424 PushI
	var_522_bool = var_519_int == var_521_int; // 0x1425 Eq
	if(var_522_bool == 0) goto Label_5161; // 0x1426 JumpB
	var_517_bool = 1; // 0x1427 MovB
	return 0; // 0x1428 Return
	
Label_5161:
	var_517_bool = 0; // 0x1429 MovB
	return 0; // 0x142a Return
}


func_4384(var_54_bool, var_55_cvector)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_bool = 0; // 0x1120 PushV
	GetPosition(var_59_cvector); // 0x1121 Func
	var_60_cvector = var_55_cvector - var_59_cvector; // 0x1123 Sub2
	var_62_float = GetByIndex(var_60_cvector, 0); // 0x1124 PushE
	var_63_float = GetByIndex(var_60_cvector, 2); // 0x1125 PushE
	Rotate(var_62_float, var_63_float, var_61_bool); // 0x1126 Func
	var_54_bool = var_61_bool; // 0x1128 Mov
	return 6; // 0x1129 Return
}


func_4900()
{
	var_103_object = Obj(); var_104_string = ""; var_105_float = 0; // 0x1325 PushV
	var_106_object = Obj(); // 0x1326 PushV
	func_5352(var_106_object); // 0x1327 NEW_2
	var_103_object = var_106_object; // 0x1328 Mov
	var_104_string = "pt_gmap_house5_24"; // 0x132a MovS
	var_105_float = 2; // 0x132b MovI
	func_5369(var_103_object, var_104_string, var_105_float); // 0x132c NEW_2
	var_126_object = Obj(); // 0x132e PushV
	func_5352(var_126_object); // 0x132f NEW_2
	ShowMap(var_126_object); // 0x1331 ObjFunc
	return 0; // 0x1333 Return
}


func_4649(var_245_string, var_246_bool)
{
	var_249_bool = 0; var_250_float = 0; var_251_float = 0; var_252_bool = 0; var_253_float = 0; var_254_float = 0; // 0x1229 PushV
	lshHasAnimation(var_252_bool, var_245_string); // 0x122a Func
	var_255_bool = var_252_bool; // 0x122c Push
	if(var_255_bool == 0) goto Label_4659; // 0x122d JumpB
	lshGetAnimTimes(var_245_string, var_253_float, var_254_float); // 0x122e Func
	lshPlayAnimation(var_253_float, var_254_float, var_246_bool); // 0x1230 Func
	goto Label_4663; // 0x1232 Jump
	
Label_4663:
	return 6; // 0x1237 Return
	
Label_4659:
	var_256_string = "Can't find lsh animation : "; // 0x1233 PushS
	var_257_int = var_256_string + var_245_string; // 0x1234 Add
	Trace(var_257_int); // 0x1235 Func
}


func_4138(var_71_bool)
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x102a PushV
	var_74_string = "player"; // 0x102b PushS
	FindActor(var_73_object, var_74_string); // 0x102c Func
	var_75_bool = var_73_object == 0; // 0x102e Not
	if(var_75_bool == 0) goto Label_4146; // 0x102f JumpB
	var_71_bool = 0; // 0x1030 MovB
	return 2; // 0x1031 Return
	
Label_4146:
	var_76_bool = 0; var_77_object = Obj(); // 0x1032 PushV
	var_77_object = var_73_object; // 0x1033 Mov
	func_4394(var_77_object); // 0x1034 NEW_2
	var_71_bool = var_76_bool; // 0x1035 Mov
	return 2; // 0x1037 Return
}


func_5163(var_523_bool)
{
	var_525_int = 0; var_526_string = ""; // 0x142c PushV
	var_526_string = "oob5Ospina1"; // 0x142d MovS
	func_4702(var_525_int, var_526_string); // 0x142e NEW_2
	var_527_int = 0; // 0x1430 PushI
	var_528_bool = var_525_int == var_527_int; // 0x1431 Eq
	if(var_528_bool == 0) goto Label_5173; // 0x1432 JumpB
	var_523_bool = 1; // 0x1433 MovB
	return 0; // 0x1434 Return
	
Label_5173:
	var_523_bool = 0; // 0x1435 MovB
	return 0; // 0x1436 Return
}


func_4394(var_50_bool)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x112a PushV
	GetPosition(var_53_cvector); // 0x112b ObjFunc
	var_54_bool = 0; var_55_cvector = CVector(0,0,0); // 0x112d PushV
	var_55_cvector = var_53_cvector; // 0x112e Mov
	func_4384(var_54_bool, var_55_cvector); // 0x112f NEW_2
	var_50_bool = var_54_bool; // 0x1130 Mov
	return 2; // 0x1132 Return
}


func_5419(var_64_object)
{
	var_65_bool = GlobalVars[1]; // 0x152c PushGE
	var_66_bool = var_65_bool == 0; // 0x152d Not
	if(var_66_bool == 0) goto Label_5432; // 0x152e JumpB
	var_67_int = 0; var_68_object = Obj(); // 0x152f PushV
	var_68_object = var_64_object; // 0x1530 Mov
	TaskCall(6); // 0x1531 TaskCall
	func_1845(var_69_object, var_67_int, var_68_object); // 0x1532 NEW_2
	TaskReturn(); // 0x1533 TaskReturn
	var_292_bool = GlobalVars[1]; // 0x1535 PushGE
	var_292_bool = 1; // 0x1536 MovB
	GlobalVars[1] = var_292_bool; // 0x1537 PopGE
	
Label_5432:
	var_293_bool = 0; var_294_int = 0; // 0x1538 PushV
	var_294_int = 2; // 0x1539 MovI
	func_4788(var_293_bool, var_294_int); // 0x153a NEW_2
	if(var_293_bool == 0) goto Label_5444; // 0x153c JumpB
	var_296_int = 0; var_297_object = Obj(); // 0x153d PushV
	var_297_object = var_64_object; // 0x153e Mov
	TaskCall(4); // 0x153f TaskCall
	func_912(var_298_object, var_296_int, var_297_object); // 0x1540 NEW_2
	TaskReturn(); // 0x1541 TaskReturn
	return 0; // 0x1543 Return
	
Label_5444:
	var_401_bool = 0; var_402_int = 0; // 0x1544 PushV
	var_402_int = 3; // 0x1545 MovI
	func_4788(var_401_bool, var_402_int); // 0x1546 NEW_2
	if(var_401_bool == 0) goto Label_5456; // 0x1548 JumpB
	var_403_int = 0; var_404_object = Obj(); // 0x1549 PushV
	var_404_object = var_64_object; // 0x154a Mov
	TaskCall(2); // 0x154b TaskCall
	func_517(var_405_object, var_403_int, var_404_object); // 0x154c NEW_2
	TaskReturn(); // 0x154d TaskReturn
	return 0; // 0x154f Return
	
Label_5456:
	var_474_bool = 0; var_475_int = 0; // 0x1550 PushV
	var_475_int = 5; // 0x1551 MovI
	func_4788(var_474_bool, var_475_int); // 0x1552 NEW_2
	if(var_474_bool == 0) goto Label_5468; // 0x1554 JumpB
	var_476_int = 0; var_477_object = Obj(); // 0x1555 PushV
	var_477_object = var_64_object; // 0x1556 Mov
	TaskCall(0); // 0x1557 TaskCall
	func_0(var_478_object, var_476_int, var_477_object); // 0x1558 NEW_2
	TaskReturn(); // 0x1559 TaskReturn
	return 0; // 0x155b Return
	
Label_5468:
	var_545_bool = 0; var_546_int = 0; // 0x155c PushV
	var_546_int = 8; // 0x155d MovI
	func_4788(var_545_bool, var_546_int); // 0x155e NEW_2
	if(var_545_bool == 0) goto Label_5480; // 0x1560 JumpB
	var_547_int = 0; var_548_object = Obj(); // 0x1561 PushV
	var_548_object = var_64_object; // 0x1562 Mov
	TaskCall(8); // 0x1563 TaskCall
	func_2071(var_549_object, var_547_int, var_548_object); // 0x1564 NEW_2
	TaskReturn(); // 0x1565 TaskReturn
	return 0; // 0x1567 Return
	
Label_5480:
	var_618_bool = 0; var_619_int = 0; // 0x1568 PushV
	var_619_int = 10; // 0x1569 MovI
	func_4788(var_618_bool, var_619_int); // 0x156a NEW_2
	if(var_618_bool == 0) goto Label_5492; // 0x156c JumpB
	var_620_int = 0; var_621_object = Obj(); // 0x156d PushV
	var_621_object = var_64_object; // 0x156e Mov
	TaskCall(10); // 0x156f TaskCall
	func_2714(var_622_object, var_620_int, var_621_object); // 0x1570 NEW_2
	TaskReturn(); // 0x1571 TaskReturn
	return 0; // 0x1573 Return
	
Label_5492:
	var_695_bool = 0; var_696_int = 0; // 0x1574 PushV
	var_696_int = 11; // 0x1575 MovI
	func_4788(var_695_bool, var_696_int); // 0x1576 NEW_2
	if(var_695_bool == 0) goto Label_5504; // 0x1578 JumpB
	var_697_int = 0; var_698_object = Obj(); // 0x1579 PushV
	var_698_object = var_64_object; // 0x157a Mov
	TaskCall(12); // 0x157b TaskCall
	func_3084(var_699_object, var_697_int, var_698_object); // 0x157c NEW_2
	TaskReturn(); // 0x157d TaskReturn
	return 0; // 0x157f Return
	
Label_5504:
	var_780_bool = 0; // 0x1580 PushV
	var_780_bool = 0; // 0x1581 MovB
	var_781_bool = 0; var_782_int = 0; // 0x1582 PushV
	var_782_int = 12; // 0x1583 MovI
	func_4788(var_781_bool, var_782_int); // 0x1584 NEW_2
	if(var_781_bool == 0) goto Label_5515; // 0x1586 JumpB
	var_783_bool = GlobalVars[2]; // 0x1587 PushGE
	var_784_bool = var_783_bool == 0; // 0x1588 Not
	if(var_784_bool == 0) goto Label_5515; // 0x1589 JumpB
	var_780_bool = 1; // 0x158a MovB
	
Label_5515:
	if(var_780_bool == 0) goto Label_5526; // 0x158b JumpB
	var_785_int = 0; var_786_object = Obj(); // 0x158c PushV
	var_786_object = var_64_object; // 0x158d Mov
	TaskCall(14); // 0x158e TaskCall
	func_3655(var_787_object, var_785_int, var_786_object); // 0x158f NEW_2
	TaskReturn(); // 0x1590 TaskReturn
	var_844_bool = GlobalVars[2]; // 0x1592 PushGE
	var_844_bool = 1; // 0x1593 MovB
	GlobalVars[2] = var_844_bool; // 0x1594 PopGE
	return 0; // 0x1595 Return
	
Label_5526:
	var_845_int = 0; var_846_object = Obj(); // 0x1596 PushV
	var_846_object = var_64_object; // 0x1597 Mov
	TaskCall(16); // 0x1598 TaskCall
	func_3914(var_847_object, var_845_int, var_846_object); // 0x1599 NEW_2
	TaskReturn(); // 0x159a TaskReturn
	return 0; // 0x159c Return
}


func_4403(var_47_bool)
{
	var_48_bool = 0; var_49_bool = 0; // 0x1133 PushV
	IsLoaded(var_49_bool); // 0x1134 Func
	var_47_bool = var_49_bool; // 0x1136 Mov
	return 2; // 0x1137 Return
}


func_4916()
{
	var_82_string = "oob2Ospina1"; // 0x1335 PushS
	var_83_int = 1; // 0x1336 PushI
	SetVariable(var_82_string, var_83_int); // 0x1337 Func
	return 0; // 0x1339 Return
}


func_1845(var_0_object, var_67_int, var_68_object)
{
	var_70_object = Obj(); var_71_bool = 0; var_72_int = 0; var_73_bool = 0; var_74_object = Obj(); var_75_bool = 0; var_76_int = 0; var_77_bool = 0; // 0x735 PushV
	var_0_object = var_68_object; // 0x736 TMov
	var_78_bool = 0; var_79_object = Obj(); var_80_float = 0; // 0x737 PushV
	var_79_object = var_68_object; // 0x738 Mov
	var_80_float = 70.0; // 0x739 MovF
	func_4408(var_79_object, var_80_float); // 0x73a NEW_2
	var_125_bool = var_78_bool == 0; // 0x73c Not
	if(var_125_bool == 0) goto Label_1856; // 0x73d JumpB
	var_67_int = -2; // 0x73e MovI
	return 8; // 0x73f Return
	
Label_1856:
	CreateDialog(var_74_object); // 0x740 Func
	var_126_int = 0; // 0x742 PushV
	func_4820(var_126_int); // 0x743 NEW_2
	SetNPCName(var_126_int); // 0x745 ObjFunc
	var_127_int = 0; // 0x747 PushV
	func_4818(var_127_int); // 0x748 NEW_2
	SetNPCDescription(var_127_int); // 0x74a ObjFunc
	var_128_string = ""; // 0x74c PushV
	func_4822(var_128_string); // 0x74d NEW_2
	SetPhoto(var_128_string); // 0x74f ObjFunc
	var_129_string = ""; // 0x751 PushV
	func_4824(var_129_string); // 0x752 NEW_2
	SetPhoto2(var_129_string); // 0x754 ObjFunc
	var_130_int = 0; // 0x756 PushV
	func_5402(var_130_int); // 0x757 NEW_2
	SetPlayerName(var_130_int); // 0x759 ObjFunc
	var_76_int = -1; // 0x75b MovI
	IsOverrideActive(var_75_bool); // 0x75c Func
	var_138_bool = var_75_bool; // 0x75e Push
	if(var_138_bool == 0) goto Label_1890; // 0x75f JumpB
	var_67_int = -2; // 0x760 MovI
	return 8; // 0x761 Return
	
Label_1890:
	DoDialog(var_74_object); // 0x762 Func
	var_139_bool = 0; var_140_object = Obj(); // 0x764 PushV
	var_141_object = Obj(); // 0x765 PushV
	func_4686(var_141_object); // 0x766 NEW_2
	var_140_object = var_141_object; // 0x767 Mov
	func_4495(var_139_bool, var_140_object); // 0x769 NEW_2
	var_234_object = Obj(); var_235_object = Obj(); // 0x76b PushV
	var_234_object = var_68_object; // 0x76c Mov
	var_235_object = var_74_object; // 0x76d Mov
	TaskCall(7); // 0x76e TaskCall
	func_1926(var_236_object, var_237_object, var_238_string, var_239_bool, var_234_object, var_235_object); // 0x76f NEW_2
	TaskReturn(); // 0x770 TaskReturn
	IsDialogEnd(var_77_bool); // 0x772 ObjFunc
	
Label_1908:
	var_283_bool = var_77_bool == 0; // 0x774 Not
	if(var_283_bool == 0) goto Label_1915; // 0x775 JumpB
	sync(); // 0x776 Func
	IsDialogEnd(var_77_bool); // 0x778 ObjFunc
	goto Label_1908; // 0x77a Jump
	
Label_1915:
	var_284_object = Obj(); // 0x77b PushV
	var_284_object = var_68_object; // 0x77c Mov
	func_4477(); // 0x77d NEW_2
	StopDialog(var_74_object); // 0x77f Func
	GetReturnValue(var_76_int); // 0x781 ObjFunc
	var_67_int = var_76_int; // 0x783 Mov
	return 8; // 0x784 Return
}


func_5175(var_452_bool)
{
	var_454_int = 0; var_455_string = ""; // 0x1438 PushV
	var_455_string = "oob3Ospina1"; // 0x1439 MovS
	func_4702(var_454_int, var_455_string); // 0x143a NEW_2
	var_456_int = 0; // 0x143c PushI
	var_457_bool = var_454_int == var_456_int; // 0x143d Eq
	if(var_457_bool == 0) goto Label_5185; // 0x143e JumpB
	var_452_bool = 1; // 0x143f MovB
	return 0; // 0x1440 Return
	
Label_5185:
	var_452_bool = 0; // 0x1441 MovB
	return 0; // 0x1442 Return
}


func_4664(var_173_bool, var_174_string)
{
	var_175_bool = 0; var_176_bool = 0; // 0x1238 PushV
	var_177_bool = 0; // 0x1239 PushV
	func_4826(var_177_bool); // 0x123a NEW_2
	if(var_177_bool == 0) goto Label_4677; // 0x123c JumpB
	lshHasSpeech(var_176_bool, var_174_string); // 0x123d Func
	var_178_bool = var_176_bool; // 0x123f Push
	if(var_178_bool == 0) goto Label_4677; // 0x1240 JumpB
	lshPlaySpeech(var_174_string); // 0x1241 Func
	var_173_bool = 1; // 0x1243 MovB
	return 2; // 0x1244 Return
	
Label_4677:
	var_173_bool = 0; // 0x1245 MovB
	return 2; // 0x1246 Return
}


func_4153(var_0_object)
{
	var_123_float = GetByIndex(var_0_object, 0); // 0x1039 PushE
	var_124_float = GetByIndex(var_0_object, 2); // 0x103a PushE
	RotateAsync(var_123_float, var_124_float); // 0x103b Func
	return 0; // 0x103d Return
}


func_4408(var_78_bool, var_80_float)
{
	var_81_float = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0; // 0x1138 PushV
	GetPosition(var_91_cvector); // 0x1139 ObjFunc
	GetEyesHeight(var_90_float); // 0x113b ObjFunc
	var_99_float = GetByIndex(var_91_cvector, 1); // 0x113d PushE
	var_99_float = var_99_float + var_90_float; // 0x113e Add2
	SetByIndex(var_91_cvector, 1) = var_99_float; // 0x113f PopE
	GetPosition(var_92_cvector); // 0x1140 Func
	GetEyesHeight(var_90_float); // 0x1142 Func
	var_100_float = GetByIndex(var_92_cvector, 1); // 0x1144 PushE
	var_100_float = var_100_float + var_90_float; // 0x1145 Add2
	SetByIndex(var_92_cvector, 1) = var_100_float; // 0x1146 PopE
	var_93_cvector = var_91_cvector - var_92_cvector; // 0x1147 Sub2
	var_101_float = GetByIndex(var_93_cvector, 1); // 0x1148 PushE
	var_101_float = 0; // 0x1149 MovI
	SetByIndex(var_93_cvector, 1) = var_101_float; // 0x114a PopE
	var_102_int = var_93_cvector | var_93_cvector; // 0x114b Or
	var_103_float = sqrt(var_102_int); // 0x114c Sqrt
	var_93_cvector = var_93_cvector / var_93_cvector; // 0x114d Div2
	var_94_cvector = -var_93_cvector; // 0x114e Neg2
	var_104_float = var_93_cvector * var_80_float; // 0x114f Mult
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); // 0x1150 PushV
	var_107_cvector = CVector(0.0, 1.0, 0.0); // 0x1151 PushVec
	var_106_cvector = var_94_cvector ^ var_107_cvector; // 0x1152 Xor2
	func_4692(var_105_cvector, var_106_cvector); // 0x1153 NEW_2
	var_113_int = 25; // 0x1155 PushI
	var_114_float = var_105_cvector * var_113_int; // 0x1156 Mult
	var_115_int = var_104_float + var_114_float; // 0x1157 Add
	var_116_cvector = CVector(0.0, 10.0, 0.0); // 0x1158 PushVec
	var_95_cvector = var_115_int - var_116_cvector; // 0x1159 Sub2
	var_96_cvector = var_92_cvector + var_95_cvector; // 0x115a Add2
	IsOverrideActive(var_97_bool); // 0x115b Func
	var_117_bool = var_97_bool; // 0x115d Push
	if(var_117_bool == 0) goto Label_4449; // 0x115e JumpB
	var_78_bool = 0; // 0x115f MovB
	return 18; // 0x1160 Return
	
Label_4449:
	StopWorld(); // 0x1161 Func
	var_118_bool = 1; // 0x1163 PushB
	CameraTransit(var_96_cvector, var_94_cvector, var_118_bool); // 0x1164 Func
	var_119_float = GetByIndex(var_95_cvector, 0); // 0x1166 PushE
	var_120_float = GetByIndex(var_95_cvector, 2); // 0x1167 PushE
	Rotate(var_119_float, var_120_float); // 0x1168 Func
	var_121_bool = 0; // 0x116a PushV
	func_4826(var_121_bool); // 0x116b NEW_2
	if(var_121_bool == 0) goto Label_4463; // 0x116d JumpB
	goto Label_4471; // 0x116e Jump
	
Label_4471:
	CameraWaitForPlayFinish(); // 0x1177 Func
	ResumeWorld(); // 0x1179 Func
	var_78_bool = 1; // 0x117b MovB
	return 18; // 0x117c Return
	
Label_4463:
	var_122_string = "head"; // 0x116f PushS
	HasAnimationTrack(var_98_bool, var_122_string); // 0x1170 Func
	var_123_bool = var_98_bool; // 0x1172 Push
	if(var_123_bool == 0) goto Label_4471; // 0x1173 JumpB
	var_124_string = "head"; // 0x1174 PushS
	LookAsyncCamera(var_124_string); // 0x1175 Func
}


func_4922()
{
	var_88_string = "oob2Ospina2"; // 0x133b PushS
	var_89_int = 1; // 0x133c PushI
	SetVariable(var_88_string, var_89_int); // 0x133d Func
	return 0; // 0x133f Return
}


func_4158(var_54_bool)
{
	var_55_object = Obj(); var_56_bool = 0; var_57_object = Obj(); var_58_bool = 0; // 0x103e PushV
	var_59_string = "player"; // 0x103f PushS
	FindActor(var_57_object, var_59_string); // 0x1040 Func
	var_60_bool = var_57_object == 0; // 0x1042 Not
	if(var_60_bool == 0) goto Label_4166; // 0x1043 JumpB
	var_54_bool = 0; // 0x1044 MovB
	return 4; // 0x1045 Return
	
Label_4166:
	var_61_float = 0; var_62_object = Obj(); // 0x1046 PushV
	var_62_object = var_57_object; // 0x1047 Mov
	func_4376(var_62_object); // 0x1048 NEW_2
	var_69_float = 90000.0; // 0x104a PushF
	var_70_bool = var_61_float > var_69_float; // 0x104b GT
	if(var_70_bool == 0) goto Label_4175; // 0x104c JumpB
	var_54_bool = 0; // 0x104d MovB
	return 4; // 0x104e Return
	
Label_4175:
	CanSee(var_58_bool, var_57_object); // 0x104f Func
	var_54_bool = var_58_bool; // 0x1051 Mov
	return 4; // 0x1052 Return
}


func_4928()
{
	var_132_string = "oob2Ospina3"; // 0x1341 PushS
	var_133_int = 1; // 0x1342 PushI
	SetVariable(var_132_string, var_133_int); // 0x1343 Func
	return 0; // 0x1345 Return
}


func_5187(var_443_bool)
{
	var_445_int = 0; var_446_string = ""; // 0x1444 PushV
	var_446_string = "b3q01"; // 0x1445 MovS
	func_4702(var_445_int, var_446_string); // 0x1446 NEW_2
	var_447_int = 1; // 0x1448 PushI
	var_448_bool = var_445_int == var_447_int; // 0x1449 Eq
	if(var_448_bool == 0) goto Label_5197; // 0x144a JumpB
	var_443_bool = 1; // 0x144b MovB
	return 0; // 0x144c Return
	
Label_5197:
	var_443_bool = 0; // 0x144d MovB
	return 0; // 0x144e Return
}


func_2885(var_2_object, var_651_string)
{
	var_652_bool = 0; // 0xb46 PushV
	func_4826(var_652_bool); // 0xb47 NEW_2
	var_653_bool = var_652_bool == 0; // 0xb49 Not
	if(var_653_bool == 0) goto Label_2892; // 0xb4a JumpB
	return 0; // 0xb4b Return
	
Label_2892:
	var_654_bool = var_651_string == var_2_object; // 0xb4c Eq
	if(var_654_bool == 0) goto Label_2895; // 0xb4d JumpB
	return 0; // 0xb4e Return
	
Label_2895:
	var_655_string = ""; var_656_bool = 0; // 0xb4f PushV
	var_655_string = var_651_string; // 0xb50 Mov
	var_657_string = ""; // 0xb51 PushS
	var_658_bool = var_651_string == var_657_string; // 0xb52 Eq
	if(var_658_bool == 0) goto Label_2902; // 0xb53 JumpB
	var_656_bool = 0; // 0xb54 MovB
	goto Label_2903; // 0xb55 Jump
	
Label_2903:
	func_4649(var_655_string, var_656_bool); // 0xb57 NEW_2
	var_2_object = var_651_string; // 0xb59 TMov
	return 0; // 0xb5a Return
	
Label_2902:
	var_656_bool = 1; // 0xb56 MovB
}


func_4934()
{
	var_138_string = "oob2Ospina4"; // 0x1347 PushS
	var_139_int = 1; // 0x1348 PushI
	SetVariable(var_138_string, var_139_int); // 0x1349 Func
	return 0; // 0x134b Return
}


func_4679()
{
	var_49_bool = 0; // 0x1247 PushV
	func_4826(var_49_bool); // 0x1248 NEW_2
	if(var_49_bool == 0) goto Label_4685; // 0x124a JumpB
	lshStopSpeech(); // 0x124b Func
	
Label_4685:
	return 0; // 0x124d Return
}


func_3655(var_0_object, var_785_int, var_786_object)
{
	var_788_object = Obj(); var_789_bool = 0; var_790_int = 0; var_791_bool = 0; var_792_object = Obj(); var_793_bool = 0; var_794_int = 0; var_795_bool = 0; // 0xe47 PushV
	var_0_object = var_786_object; // 0xe48 TMov
	var_796_bool = 0; var_797_object = Obj(); var_798_float = 0; // 0xe49 PushV
	var_797_object = var_786_object; // 0xe4a Mov
	var_798_float = 70.0; // 0xe4b MovF
	func_4408(var_797_object, var_798_float); // 0xe4c NEW_2
	var_799_bool = var_796_bool == 0; // 0xe4e Not
	if(var_799_bool == 0) goto Label_3666; // 0xe4f JumpB
	var_785_int = -2; // 0xe50 MovI
	return 8; // 0xe51 Return
	
Label_3666:
	CreateDialog(var_792_object); // 0xe52 Func
	var_800_int = 0; // 0xe54 PushV
	func_4820(var_800_int); // 0xe55 NEW_2
	SetNPCName(var_800_int); // 0xe57 ObjFunc
	var_801_int = 0; // 0xe59 PushV
	func_4818(var_801_int); // 0xe5a NEW_2
	SetNPCDescription(var_801_int); // 0xe5c ObjFunc
	var_802_string = ""; // 0xe5e PushV
	func_4822(var_802_string); // 0xe5f NEW_2
	SetPhoto(var_802_string); // 0xe61 ObjFunc
	var_803_string = ""; // 0xe63 PushV
	func_4824(var_803_string); // 0xe64 NEW_2
	SetPhoto2(var_803_string); // 0xe66 ObjFunc
	var_804_int = 0; // 0xe68 PushV
	func_5402(var_804_int); // 0xe69 NEW_2
	SetPlayerName(var_804_int); // 0xe6b ObjFunc
	var_794_int = -1; // 0xe6d MovI
	IsOverrideActive(var_793_bool); // 0xe6e Func
	var_805_bool = var_793_bool; // 0xe70 Push
	if(var_805_bool == 0) goto Label_3700; // 0xe71 JumpB
	var_785_int = -2; // 0xe72 MovI
	return 8; // 0xe73 Return
	
Label_3700:
	DoDialog(var_792_object); // 0xe74 Func
	var_806_bool = 0; var_807_object = Obj(); // 0xe76 PushV
	var_808_object = Obj(); // 0xe77 PushV
	func_4686(var_808_object); // 0xe78 NEW_2
	var_807_object = var_808_object; // 0xe79 Mov
	func_4495(var_806_bool, var_807_object); // 0xe7b NEW_2
	var_809_object = Obj(); var_810_object = Obj(); // 0xe7d PushV
	var_809_object = var_786_object; // 0xe7e Mov
	var_810_object = var_792_object; // 0xe7f Mov
	TaskCall(15); // 0xe80 TaskCall
	func_3736(var_811_object, var_812_object, var_813_string, var_814_bool, var_809_object, var_810_object); // 0xe81 NEW_2
	TaskReturn(); // 0xe82 TaskReturn
	IsDialogEnd(var_795_bool); // 0xe84 ObjFunc
	
Label_3718:
	var_842_bool = var_795_bool == 0; // 0xe86 Not
	if(var_842_bool == 0) goto Label_3725; // 0xe87 JumpB
	sync(); // 0xe88 Func
	IsDialogEnd(var_795_bool); // 0xe8a ObjFunc
	goto Label_3718; // 0xe8c Jump
	
Label_3725:
	var_843_object = Obj(); // 0xe8d PushV
	var_843_object = var_786_object; // 0xe8e Mov
	func_4477(); // 0xe8f NEW_2
	StopDialog(var_792_object); // 0xe91 Func
	GetReturnValue(var_794_int); // 0xe93 ObjFunc
	var_785_int = var_794_int; // 0xe95 Mov
	return 8; // 0xe96 Return
}


func_3914(var_0_object, var_845_int, var_846_object)
{
	var_848_object = Obj(); var_849_bool = 0; var_850_int = 0; var_851_bool = 0; var_852_object = Obj(); var_853_bool = 0; var_854_int = 0; var_855_bool = 0; // 0xf4a PushV
	var_0_object = var_846_object; // 0xf4b TMov
	var_856_bool = 0; var_857_object = Obj(); var_858_float = 0; // 0xf4c PushV
	var_857_object = var_846_object; // 0xf4d Mov
	var_858_float = 70.0; // 0xf4e MovF
	func_4408(var_857_object, var_858_float); // 0xf4f NEW_2
	var_859_bool = var_856_bool == 0; // 0xf51 Not
	if(var_859_bool == 0) goto Label_3925; // 0xf52 JumpB
	var_845_int = -2; // 0xf53 MovI
	return 8; // 0xf54 Return
	
Label_3925:
	CreateDialog(var_852_object); // 0xf55 Func
	var_860_int = 0; // 0xf57 PushV
	func_4820(var_860_int); // 0xf58 NEW_2
	SetNPCName(var_860_int); // 0xf5a ObjFunc
	var_861_int = 0; // 0xf5c PushV
	func_4818(var_861_int); // 0xf5d NEW_2
	SetNPCDescription(var_861_int); // 0xf5f ObjFunc
	var_862_string = ""; // 0xf61 PushV
	func_4822(var_862_string); // 0xf62 NEW_2
	SetPhoto(var_862_string); // 0xf64 ObjFunc
	var_863_string = ""; // 0xf66 PushV
	func_4824(var_863_string); // 0xf67 NEW_2
	SetPhoto2(var_863_string); // 0xf69 ObjFunc
	var_864_int = 0; // 0xf6b PushV
	func_5402(var_864_int); // 0xf6c NEW_2
	SetPlayerName(var_864_int); // 0xf6e ObjFunc
	var_854_int = -1; // 0xf70 MovI
	IsOverrideActive(var_853_bool); // 0xf71 Func
	var_865_bool = var_853_bool; // 0xf73 Push
	if(var_865_bool == 0) goto Label_3959; // 0xf74 JumpB
	var_845_int = -2; // 0xf75 MovI
	return 8; // 0xf76 Return
	
Label_3959:
	DoDialog(var_852_object); // 0xf77 Func
	var_866_bool = 0; var_867_object = Obj(); // 0xf79 PushV
	var_868_object = Obj(); // 0xf7a PushV
	func_4686(var_868_object); // 0xf7b NEW_2
	var_867_object = var_868_object; // 0xf7c Mov
	func_4495(var_866_bool, var_867_object); // 0xf7e NEW_2
	var_869_object = Obj(); var_870_object = Obj(); // 0xf80 PushV
	var_869_object = var_846_object; // 0xf81 Mov
	var_870_object = var_852_object; // 0xf82 Mov
	TaskCall(17); // 0xf83 TaskCall
	func_3995(var_871_object, var_872_object, var_873_string, var_874_bool, var_869_object, var_870_object); // 0xf84 NEW_2
	TaskReturn(); // 0xf85 TaskReturn
	IsDialogEnd(var_855_bool); // 0xf87 ObjFunc
	
Label_3977:
	var_899_bool = var_855_bool == 0; // 0xf89 Not
	if(var_899_bool == 0) goto Label_3984; // 0xf8a JumpB
	sync(); // 0xf8b Func
	IsDialogEnd(var_855_bool); // 0xf8d ObjFunc
	goto Label_3977; // 0xf8f Jump
	
Label_3984:
	var_900_object = Obj(); // 0xf90 PushV
	var_900_object = var_846_object; // 0xf91 Mov
	func_4477(); // 0xf92 NEW_2
	StopDialog(var_852_object); // 0xf94 Func
	GetReturnValue(var_854_int); // 0xf96 ObjFunc
	var_845_int = var_854_int; // 0xf98 Mov
	return 8; // 0xf99 Return
}


func_4940()
{
	var_94_object = Obj(); var_95_object = Obj(); // 0x134c PushV
	var_96_int = 0; var_97_string = ""; // 0x134d PushV
	var_97_string = "b2TravnikMark"; // 0x134e MovS
	func_4702(var_96_int, var_97_string); // 0x134f NEW_2
	var_100_int = 0; // 0x1351 PushI
	var_101_bool = var_96_int == var_100_int; // 0x1352 Eq
	if(var_101_bool == 0) goto Label_4984; // 0x1353 JumpB
	var_102_string = "b2TravnikMark"; // 0x1354 PushS
	var_103_int = 1; // 0x1355 PushI
	SetVariable(var_102_string, var_103_int); // 0x1356 Func
	var_104_object = Obj(); // 0x1358 PushV
	func_5352(var_104_object); // 0x1359 NEW_2
	var_95_object = var_104_object; // 0x135a Mov
	var_111_string = "b2Travnik1"; // 0x135c PushS
	var_112_string = "pt_map_gatherer1"; // 0x135d PushS
	var_113_int = 3; // 0x135e PushI
	var_114_int = 520463; // 0x135f PushI
	var_115_float = 0; // 0x1360 PushV
	func_4774(var_115_float); // 0x1361 NEW_2
	AddMark(var_111_string, var_112_string, var_113_int, var_114_int, var_115_float); // 0x1363 ObjFunc
	var_118_string = "b2Travnik2"; // 0x1365 PushS
	var_119_string = "pt_map_gatherer2"; // 0x1366 PushS
	var_120_int = 3; // 0x1367 PushI
	var_121_int = 520464; // 0x1368 PushI
	var_122_float = 0; // 0x1369 PushV
	func_4774(var_122_float); // 0x136a NEW_2
	AddMark(var_118_string, var_119_string, var_120_int, var_121_int, var_122_float); // 0x136c ObjFunc
	var_123_string = "b2Travnik3"; // 0x136e PushS
	var_124_string = "pt_map_gatherer3"; // 0x136f PushS
	var_125_int = 3; // 0x1370 PushI
	var_126_int = 520465; // 0x1371 PushI
	var_127_float = 0; // 0x1372 PushV
	func_4774(var_127_float); // 0x1373 NEW_2
	AddMark(var_123_string, var_124_string, var_125_int, var_126_int, var_127_float); // 0x1375 ObjFunc
	var_95_object = 0; // 0x1377 SetNull
	
Label_4984:
	return 2; // 0x1378 Return
}


func_4686(var_141_object)
{
	var_142_object = Obj(); var_143_object = Obj(); // 0x124e PushV
	self(var_143_object); // 0x124f Func
	var_141_object = var_143_object; // 0x1251 Mov
	return 2; // 0x1252 Return
}


func_5199(var_327_bool)
{
	var_329_int = 0; var_330_string = ""; // 0x1450 PushV
	var_330_string = "b2q01"; // 0x1451 MovS
	func_4702(var_329_int, var_330_string); // 0x1452 NEW_2
	var_333_int = 2; // 0x1454 PushI
	var_334_bool = var_329_int == var_333_int; // 0x1455 Eq
	if(var_334_bool == 0) goto Label_5209; // 0x1456 JumpB
	var_327_bool = 1; // 0x1457 MovB
	return 0; // 0x1458 Return
	
Label_5209:
	var_327_bool = 0; // 0x1459 MovB
	return 0; // 0x145a Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_500_object, var_501_object)
{
	var_0_object = var_501_object; // 0x52 TMov
	var_1_object = var_500_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_506_int = 1; // 0x55 PushI
	if(var_506_int == 0) goto Label_123; // 0x56 JumpB
	var_507_string = ""; // 0x57 PushV
	var_507_string = "Strange"; // 0x58 MovS
	func_153(var_501_object, var_507_string); // 0x59 NEW_2
	var_515_int = 518620; // 0x5b PushI
	SetMessage(var_515_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_516_bool = 0; // 0x60 PushV
	var_516_bool = 0; // 0x61 MovB
	var_517_bool = 0; var_518_object = Obj(); // 0x62 PushV
	var_518_object = var_1_object; // 0x63 MovT
	func_5151(var_518_object); // 0x64 NEW_2
	if(var_517_bool == 0) goto Label_109; // 0x66 JumpB
	var_523_bool = 0; var_524_object = Obj(); // 0x67 PushV
	var_524_object = var_1_object; // 0x68 MovT
	func_5163(var_524_object); // 0x69 NEW_2
	if(var_523_bool == 0) goto Label_109; // 0x6b JumpB
	var_516_bool = 1; // 0x6c MovB
	
Label_109:
	if(var_516_bool == 0) goto Label_115; // 0x6d JumpB
	var_529_int = 518621; // 0x6e PushI
	var_530_int = 19933; // 0x6f PushI
	var_531_int = 19713; // 0x70 PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x71 TObjFunc
	
Label_115:
	var_532_int = 518624; // 0x73 PushI
	var_533_int = -1; // 0x74 PushI
	var_534_int = 19716; // 0x75 PushI
	AddReply(var_532_int, var_533_int, var_534_int); // 0x76 TObjFunc
	goto Label_123; // 0x78 Jump
	
Label_123:
	var_535_bool = 0; // 0x7b PushV
	func_4826(var_535_bool); // 0x7c NEW_2
	if(var_535_bool == 0) goto Label_138; // 0x7e JumpB
	
Label_127:
	lshWaitForAnimEnd(); // 0x7f Func
	var_536_string = var_3_string; // 0x81 PushT
	if(var_536_string == 0) goto Label_132; // 0x82 JumpB
	goto Label_137; // 0x83 Jump
	
Label_137:
	goto Label_152; // 0x89 Jump
	
Label_152:
	return 0; // 0x98 Return
	
Label_132:
	var_537_string = ""; // 0x84 PushV
	var_537_string = var_2_object; // 0x85 MovT
	func_4633(var_537_string); // 0x86 NEW_2
	goto Label_127; // 0x88 Jump
	
Label_138:
	var_538_string = "all"; // 0x8a PushS
	var_539_string = "idle"; // 0x8b PushS
	PlayAnimation(var_538_string, var_539_string); // 0x8c Func
	
Label_142:
	WaitForAnimEnd(); // 0x8e Func
	var_540_string = var_3_string; // 0x90 PushT
	if(var_540_string == 0) goto Label_147; // 0x91 JumpB
	goto Label_152; // 0x92 Jump
	
Label_147:
	var_541_string = "all"; // 0x93 PushS
	var_542_string = "idle"; // 0x94 PushS
	PlayAnimation(var_541_string, var_542_string); // 0x95 Func
	goto Label_142; // 0x97 Jump
}


func_4180()
{
	var_903_float = 0; var_904_float = 0; // 0x1054 PushV
	var_905_int = 8; // 0x1055 PushI
	var_906_int = 16; // 0x1056 PushI
	rand(var_904_float, var_905_int, var_906_int); // 0x1057 Func
	var_907_int = 10; // 0x1059 PushI
	SetTimer(var_907_int, var_904_float); // 0x105a Func
	return 2; // 0x105c Return
}


func_4692(var_105_cvector, var_106_cvector)
{
	var_108_float = 0; var_109_float = 0; // 0x1254 PushV
	var_110_int = var_106_cvector | var_106_cvector; // 0x1255 Or
	var_109_float = sqrt(var_110_int); // 0x1256 Sqrt2
	var_111_float = 0.0; // 0x1257 PushF
	var_112_bool = var_109_float < var_111_float; // 0x1258 LT
	if(var_112_bool == 0) goto Label_4700; // 0x1259 JumpB
	var_105_cvector = CVector(0.0, 0.0, 0.0); // 0x125a MovV
	return 2; // 0x125b Return
	
Label_4700:
	var_105_cvector = var_106_cvector / var_106_cvector; // 0x125c Div2
	return 2; // 0x125d Return
}


func_598(var_0_object, var_1_object, var_2_object, var_3_string, var_427_object, var_428_object)
{
	var_0_object = var_428_object; // 0x257 TMov
	var_1_object = var_427_object; // 0x258 TMov
	var_3_string = 0; // 0x259 TMovB
	var_433_int = 1; // 0x25a PushI
	if(var_433_int == 0) goto Label_641; // 0x25b JumpB
	var_434_string = ""; // 0x25c PushV
	var_434_string = "Neutral"; // 0x25d MovS
	func_671(var_428_object, var_434_string); // 0x25e NEW_2
	var_442_int = 519273; // 0x260 PushI
	SetMessage(var_442_int); // 0x261 TObjFunc
	ClearReplies(); // 0x263 TObjFunc
	var_443_bool = 0; var_444_object = Obj(); // 0x265 PushV
	var_444_object = var_1_object; // 0x266 MovT
	func_5187(var_444_object); // 0x267 NEW_2
	if(var_443_bool == 0) goto Label_623; // 0x269 JumpB
	var_449_int = 519274; // 0x26a PushI
	var_450_int = 20428; // 0x26b PushI
	var_451_int = 20426; // 0x26c PushI
	AddReply(var_449_int, var_450_int, var_451_int); // 0x26d TObjFunc
	
Label_623:
	var_452_bool = 0; var_453_object = Obj(); // 0x26f PushV
	var_453_object = var_1_object; // 0x270 MovT
	func_5175(var_453_object); // 0x271 NEW_2
	if(var_452_bool == 0) goto Label_633; // 0x273 JumpB
	var_458_int = 519289; // 0x274 PushI
	var_459_int = 20444; // 0x275 PushI
	var_460_int = 20443; // 0x276 PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x277 TObjFunc
	
Label_633:
	var_461_int = 519275; // 0x279 PushI
	var_462_int = -1; // 0x27a PushI
	var_463_int = 20427; // 0x27b PushI
	AddReply(var_461_int, var_462_int, var_463_int); // 0x27c TObjFunc
	goto Label_641; // 0x27e Jump
	
Label_641:
	var_464_bool = 0; // 0x281 PushV
	func_4826(var_464_bool); // 0x282 NEW_2
	if(var_464_bool == 0) goto Label_656; // 0x284 JumpB
	
Label_645:
	lshWaitForAnimEnd(); // 0x285 Func
	var_465_string = var_3_string; // 0x287 PushT
	if(var_465_string == 0) goto Label_650; // 0x288 JumpB
	goto Label_655; // 0x289 Jump
	
Label_655:
	goto Label_670; // 0x28f Jump
	
Label_670:
	return 0; // 0x29e Return
	
Label_650:
	var_466_string = ""; // 0x28a PushV
	var_466_string = var_2_object; // 0x28b MovT
	func_4633(var_466_string); // 0x28c NEW_2
	goto Label_645; // 0x28e Jump
	
Label_656:
	var_467_string = "all"; // 0x290 PushS
	var_468_string = "idle"; // 0x291 PushS
	PlayAnimation(var_467_string, var_468_string); // 0x292 Func
	
Label_660:
	WaitForAnimEnd(); // 0x294 Func
	var_469_string = var_3_string; // 0x296 PushT
	if(var_469_string == 0) goto Label_665; // 0x297 JumpB
	goto Label_670; // 0x298 Jump
	
Label_665:
	var_470_string = "all"; // 0x299 PushS
	var_471_string = "idle"; // 0x29a PushS
	PlayAnimation(var_470_string, var_471_string); // 0x29b Func
	goto Label_660; // 0x29d Jump
}


func_1111(var_2_object, var_335_string)
{
	var_336_bool = 0; // 0x458 PushV
	func_4826(var_336_bool); // 0x459 NEW_2
	var_337_bool = var_336_bool == 0; // 0x45b Not
	if(var_337_bool == 0) goto Label_1118; // 0x45c JumpB
	return 0; // 0x45d Return
	
Label_1118:
	var_338_bool = var_335_string == var_2_object; // 0x45e Eq
	if(var_338_bool == 0) goto Label_1121; // 0x45f JumpB
	return 0; // 0x460 Return
	
Label_1121:
	var_339_string = ""; var_340_bool = 0; // 0x461 PushV
	var_339_string = var_335_string; // 0x462 Mov
	var_341_string = ""; // 0x463 PushS
	var_342_bool = var_335_string == var_341_string; // 0x464 Eq
	if(var_342_bool == 0) goto Label_1128; // 0x465 JumpB
	var_340_bool = 0; // 0x466 MovB
	goto Label_1129; // 0x467 Jump
	
Label_1129:
	func_4649(var_339_string, var_340_bool); // 0x469 NEW_2
	var_2_object = var_335_string; // 0x46b TMov
	return 0; // 0x46c Return
	
Label_1128:
	var_340_bool = 1; // 0x468 MovB
}


func_5211(var_360_bool)
{
	var_362_int = 0; var_363_string = ""; // 0x145c PushV
	var_363_string = "oob2Ospina1"; // 0x145d MovS
	func_4702(var_362_int, var_363_string); // 0x145e NEW_2
	var_364_int = 0; // 0x1460 PushI
	var_365_bool = var_362_int == var_364_int; // 0x1461 Eq
	if(var_365_bool == 0) goto Label_5221; // 0x1462 JumpB
	var_360_bool = 1; // 0x1463 MovB
	return 0; // 0x1464 Return
	
Label_5221:
	var_360_bool = 0; // 0x1465 MovB
	return 0; // 0x1466 Return
}


func_3165(var_0_object, var_1_object, var_2_object, var_3_string, var_721_object, var_722_object)
{
	var_0_object = var_722_object; // 0xc5e TMov
	var_1_object = var_721_object; // 0xc5f TMov
	var_3_string = 0; // 0xc60 TMovB
	var_727_int = 1; // 0xc61 PushI
	if(var_727_int == 0) goto Label_3233; // 0xc62 JumpB
	var_728_bool = 0; var_729_object = Obj(); // 0xc63 PushV
	var_729_object = var_1_object; // 0xc64 MovT
	func_5127(var_729_object); // 0xc65 NEW_2
	if(var_728_bool == 0) goto Label_3211; // 0xc67 JumpB
	var_734_object = Obj(); var_735_object = Obj(); // 0xc68 PushV
	var_734_object = var_1_object; // 0xc69 MovT
	var_735_object = var_0_object; // 0xc6a MovT
	func_5009(); // 0xc6b NEW_2
	var_738_string = ""; // 0xc6d PushV
	var_738_string = "Neutral"; // 0xc6e MovS
	func_3263(var_722_object, var_738_string); // 0xc6f NEW_2
	var_746_int = 522089; // 0xc71 PushI
	SetMessage(var_746_int); // 0xc72 TObjFunc
	ClearReplies(); // 0xc74 TObjFunc
	var_747_int = 523647; // 0xc76 PushI
	var_748_int = 24892; // 0xc77 PushI
	var_749_int = 24891; // 0xc78 PushI
	AddReply(var_747_int, var_748_int, var_749_int); // 0xc79 TObjFunc
	var_750_int = 523657; // 0xc7b PushI
	var_751_int = 24892; // 0xc7c PushI
	var_752_int = 24901; // 0xc7d PushI
	AddReply(var_750_int, var_751_int, var_752_int); // 0xc7e TObjFunc
	var_753_bool = 0; var_754_object = Obj(); // 0xc80 PushV
	var_754_object = var_1_object; // 0xc81 MovT
	func_5115(var_754_object); // 0xc82 NEW_2
	if(var_753_bool == 0) goto Label_3210; // 0xc84 JumpB
	var_759_int = 522091; // 0xc85 PushI
	var_760_int = 23261; // 0xc86 PushI
	var_761_int = 23260; // 0xc87 PushI
	AddReply(var_759_int, var_760_int, var_761_int); // 0xc88 TObjFunc
	
Label_3210:
	goto Label_3233; // 0xc8a Jump
	
Label_3233:
	var_762_bool = 0; // 0xca1 PushV
	func_4826(var_762_bool); // 0xca2 NEW_2
	if(var_762_bool == 0) goto Label_3248; // 0xca4 JumpB
	
Label_3237:
	lshWaitForAnimEnd(); // 0xca5 Func
	var_763_string = var_3_string; // 0xca7 PushT
	if(var_763_string == 0) goto Label_3242; // 0xca8 JumpB
	goto Label_3247; // 0xca9 Jump
	
Label_3247:
	goto Label_3262; // 0xcaf Jump
	
Label_3262:
	return 0; // 0xcbe Return
	
Label_3242:
	var_764_string = ""; // 0xcaa PushV
	var_764_string = var_2_object; // 0xcab MovT
	func_4633(var_764_string); // 0xcac NEW_2
	goto Label_3237; // 0xcae Jump
	
Label_3248:
	var_765_string = "all"; // 0xcb0 PushS
	var_766_string = "idle"; // 0xcb1 PushS
	PlayAnimation(var_765_string, var_766_string); // 0xcb2 Func
	
Label_3252:
	WaitForAnimEnd(); // 0xcb4 Func
	var_767_string = var_3_string; // 0xcb6 PushT
	if(var_767_string == 0) goto Label_3257; // 0xcb7 JumpB
	goto Label_3262; // 0xcb8 Jump
	
Label_3257:
	var_768_string = "all"; // 0xcb9 PushS
	var_769_string = "idle"; // 0xcba PushS
	PlayAnimation(var_768_string, var_769_string); // 0xcbb Func
	goto Label_3252; // 0xcbd Jump
	
Label_3211:
	var_770_string = ""; // 0xc8b PushV
	var_770_string = "Neutral"; // 0xc8c MovS
	func_3263(var_722_object, var_770_string); // 0xc8d NEW_2
	var_771_int = 522094; // 0xc8f PushI
	SetMessage(var_771_int); // 0xc90 TObjFunc
	ClearReplies(); // 0xc92 TObjFunc
	var_772_int = 523598; // 0xc94 PushI
	var_773_int = 24834; // 0xc95 PushI
	var_774_int = 24833; // 0xc96 PushI
	AddReply(var_772_int, var_773_int, var_774_int); // 0xc97 TObjFunc
	var_775_int = 522095; // 0xc99 PushI
	var_776_int = -1; // 0xc9a PushI
	var_777_int = 23264; // 0xc9b PushI
	AddReply(var_775_int, var_776_int, var_777_int); // 0xc9c TObjFunc
	goto Label_3233; // 0xc9e Jump
}


func_4189()
{
	var_902_int = 10; // 0x105d PushI
	KillTimer(var_902_int); // 0x105e Func
	return 0; // 0x1060 Return
}


func_4702(var_329_int, var_330_string)
{
	var_331_int = 0; var_332_int = 0; // 0x125e PushV
	GetVariable(var_330_string, var_332_int); // 0x125f Func
	var_329_int = var_332_int; // 0x1261 Mov
	return 2; // 0x1262 Return
}


func_4707(var_62_object, var_63_string)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_object = Obj(); var_67_object = Obj(); // 0x1263 PushV
	GetMainOutdoorScene(var_66_object); // 0x1264 Func
	var_68_string = ".bin"; // 0x1266 PushS
	var_69_int = var_63_string + var_68_string; // 0x1267 Add
	AddBlankActor(var_67_object, var_66_object, var_63_string, var_69_int); // 0x1268 Func
	var_62_object = var_67_object; // 0x126a Mov
	return 4; // 0x126b Return
}


func_5223(var_369_bool)
{
	var_371_int = 0; var_372_string = ""; // 0x1468 PushV
	var_372_string = "oob2Ospina2"; // 0x1469 MovS
	func_4702(var_371_int, var_372_string); // 0x146a NEW_2
	var_373_int = 0; // 0x146c PushI
	var_374_bool = var_371_int == var_373_int; // 0x146d Eq
	if(var_374_bool == 0) goto Label_5233; // 0x146e JumpB
	var_369_bool = 1; // 0x146f MovB
	return 0; // 0x1470 Return
	
Label_5233:
	var_369_bool = 0; // 0x1471 MovB
	return 0; // 0x1472 Return
}


func_2152(var_0_object, var_1_object, var_2_object, var_3_string, var_571_object, var_572_object)
{
	var_0_object = var_572_object; // 0x869 TMov
	var_1_object = var_571_object; // 0x86a TMov
	var_3_string = 0; // 0x86b TMovB
	var_577_int = 1; // 0x86c PushI
	if(var_577_int == 0) goto Label_2195; // 0x86d JumpB
	var_578_string = ""; // 0x86e PushV
	var_578_string = "Neutral"; // 0x86f MovS
	func_2225(var_572_object, var_578_string); // 0x870 NEW_2
	var_586_int = 521431; // 0x872 PushI
	SetMessage(var_586_int); // 0x873 TObjFunc
	ClearReplies(); // 0x875 TObjFunc
	var_587_bool = 0; var_588_object = Obj(); // 0x877 PushV
	var_588_object = var_1_object; // 0x878 MovT
	func_5074(var_588_object); // 0x879 NEW_2
	if(var_587_bool == 0) goto Label_2177; // 0x87b JumpB
	var_593_int = 521432; // 0x87c PushI
	var_594_int = 22611; // 0x87d PushI
	var_595_int = 22610; // 0x87e PushI
	AddReply(var_593_int, var_594_int, var_595_int); // 0x87f TObjFunc
	
Label_2177:
	var_596_bool = 0; var_597_object = Obj(); // 0x881 PushV
	var_597_object = var_1_object; // 0x882 MovT
	func_5139(var_597_object); // 0x883 NEW_2
	if(var_596_bool == 0) goto Label_2187; // 0x885 JumpB
	var_602_int = 523679; // 0x886 PushI
	var_603_int = 24958; // 0x887 PushI
	var_604_int = 24931; // 0x888 PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0x889 TObjFunc
	
Label_2187:
	var_605_int = 521435; // 0x88b PushI
	var_606_int = -1; // 0x88c PushI
	var_607_int = 22613; // 0x88d PushI
	AddReply(var_605_int, var_606_int, var_607_int); // 0x88e TObjFunc
	goto Label_2195; // 0x890 Jump
	
Label_2195:
	var_608_bool = 0; // 0x893 PushV
	func_4826(var_608_bool); // 0x894 NEW_2
	if(var_608_bool == 0) goto Label_2210; // 0x896 JumpB
	
Label_2199:
	lshWaitForAnimEnd(); // 0x897 Func
	var_609_string = var_3_string; // 0x899 PushT
	if(var_609_string == 0) goto Label_2204; // 0x89a JumpB
	goto Label_2209; // 0x89b Jump
	
Label_2209:
	goto Label_2224; // 0x8a1 Jump
	
Label_2224:
	return 0; // 0x8b0 Return
	
Label_2204:
	var_610_string = ""; // 0x89c PushV
	var_610_string = var_2_object; // 0x89d MovT
	func_4633(var_610_string); // 0x89e NEW_2
	goto Label_2199; // 0x8a0 Jump
	
Label_2210:
	var_611_string = "all"; // 0x8a2 PushS
	var_612_string = "idle"; // 0x8a3 PushS
	PlayAnimation(var_611_string, var_612_string); // 0x8a4 Func
	
Label_2214:
	WaitForAnimEnd(); // 0x8a6 Func
	var_613_string = var_3_string; // 0x8a8 PushT
	if(var_613_string == 0) goto Label_2219; // 0x8a9 JumpB
	goto Label_2224; // 0x8aa Jump
	
Label_2219:
	var_614_string = "all"; // 0x8ab PushS
	var_615_string = "idle"; // 0x8ac PushS
	PlayAnimation(var_614_string, var_615_string); // 0x8ad Func
	goto Label_2214; // 0x8af Jump
}


func_4718(var_98_int, var_99_int)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x126e PushV
	CreateIntVector(var_101_object); // 0x126f Func
	add(var_98_int); // 0x1271 ObjFunc
	add(var_99_int); // 0x1273 ObjFunc
	var_102_int = 3; // 0x1275 PushI
	SendWorldWndMessage(var_102_int, var_101_object); // 0x1276 Func
	return 2; // 0x1278 Return
}


func_5235(var_378_bool)
{
	var_380_int = 0; var_381_string = ""; // 0x1474 PushV
	var_381_string = "oob2Ospina3"; // 0x1475 MovS
	func_4702(var_380_int, var_381_string); // 0x1476 NEW_2
	var_382_int = 0; // 0x1478 PushI
	var_383_bool = var_380_int == var_382_int; // 0x1479 Eq
	if(var_383_bool == 0) goto Label_5245; // 0x147a JumpB
	var_378_bool = 1; // 0x147b MovB
	return 0; // 0x147c Return
	
Label_5245:
	var_378_bool = 0; // 0x147d MovB
	return 0; // 0x147e Return
}


func_4985()
{
	var_54_string = "b8q01"; // 0x137a PushS
	var_55_int = 6; // 0x137b PushI
	SetVariable(var_54_string, var_55_int); // 0x137c Func
	func_5298(); // 0x137f NEW_2
	return 0; // 0x1381 Return
}


func_4730(var_88_object, var_89_int)
{
	var_90_int = 0; var_91_int = 0; var_92_bool = 0; var_93_int = 0; var_94_int = 0; var_95_bool = 0; // 0x127a PushV
	GetItemID(var_93_int); // 0x127b ObjFunc
	var_96_string = "Category"; // 0x127d PushS
	GetInvItemProperty(var_94_int, var_93_int, var_96_string); // 0x127e Func
	AddItem(var_95_bool, var_88_object, var_94_int, var_89_int); // 0x1280 ObjFunc
	var_97_bool = var_95_bool == 0; // 0x1282 Not
	if(var_97_bool == 0) goto Label_4743; // 0x1283 JumpB
	DropItems(var_88_object, var_89_int); // 0x1284 ObjFunc
	goto Label_4748; // 0x1286 Jump
	
Label_4748:
	return 6; // 0x128c Return
	
Label_4743:
	var_98_int = 0; var_99_int = 0; // 0x1287 PushV
	var_98_int = var_93_int; // 0x1288 Mov
	var_99_int = var_89_int; // 0x1289 Mov
	func_4718(var_98_int, var_99_int); // 0x128a NEW_2
}


func_4477()
{
	var_285_bool = 0; var_286_bool = 0; // 0x117d PushV
	var_287_bool = 1; // 0x117e PushB
	CameraSwitchToNormal(var_287_bool); // 0x117f Func
	var_288_bool = 0; // 0x1181 PushV
	func_4826(var_288_bool); // 0x1182 NEW_2
	if(var_288_bool == 0) goto Label_4486; // 0x1184 JumpB
	goto Label_4494; // 0x1185 Jump
	
Label_4494:
	return 2; // 0x118e Return
	
Label_4486:
	var_289_string = "head"; // 0x1186 PushS
	HasAnimationTrack(var_286_bool, var_289_string); // 0x1187 Func
	var_290_bool = var_286_bool; // 0x1189 Push
	if(var_290_bool == 0) goto Label_4494; // 0x118a JumpB
	var_291_string = "head"; // 0x118b PushS
	UnlookAsync(var_291_string); // 0x118c Func
}


func_5247(var_387_bool)
{
	var_389_int = 0; var_390_string = ""; // 0x1480 PushV
	var_390_string = "oob2Ospina4"; // 0x1481 MovS
	func_4702(var_389_int, var_390_string); // 0x1482 NEW_2
	var_391_int = 0; // 0x1484 PushI
	var_392_bool = var_389_int == var_391_int; // 0x1485 Eq
	if(var_392_bool == 0) goto Label_5257; // 0x1486 JumpB
	var_387_bool = 1; // 0x1487 MovB
	return 0; // 0x1488 Return
	
Label_5257:
	var_387_bool = 0; // 0x1489 MovB
	return 0; // 0x148a Return
}


func_4994()
{
	var_54_string = "oob10Ospina1"; // 0x1383 PushS
	var_55_int = 1; // 0x1384 PushI
	SetVariable(var_54_string, var_55_int); // 0x1385 Func
	return 0; // 0x1387 Return
}


func_1926(var_0_object, var_1_object, var_2_object, var_3_string, var_234_object, var_235_object)
{
	var_0_object = var_235_object; // 0x787 TMov
	var_1_object = var_234_object; // 0x788 TMov
	var_3_string = 0; // 0x789 TMovB
	var_240_int = 1; // 0x78a PushI
	if(var_240_int == 0) goto Label_1954; // 0x78b JumpB
	var_241_string = ""; // 0x78c PushV
	var_241_string = "Neutral"; // 0x78d MovS
	func_1984(var_235_object, var_241_string); // 0x78e NEW_2
	var_258_int = 520800; // 0x790 PushI
	SetMessage(var_258_int); // 0x791 TObjFunc
	ClearReplies(); // 0x793 TObjFunc
	var_259_int = 520801; // 0x795 PushI
	var_260_int = 29131; // 0x796 PushI
	var_261_int = 22018; // 0x797 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x798 TObjFunc
	var_262_int = 527799; // 0x79a PushI
	var_263_int = -1; // 0x79b PushI
	var_264_int = 29132; // 0x79c PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x79d TObjFunc
	goto Label_1954; // 0x79f Jump
	
Label_1954:
	var_265_bool = 0; // 0x7a2 PushV
	func_4826(var_265_bool); // 0x7a3 NEW_2
	if(var_265_bool == 0) goto Label_1969; // 0x7a5 JumpB
	
Label_1958:
	lshWaitForAnimEnd(); // 0x7a6 Func
	var_266_string = var_3_string; // 0x7a8 PushT
	if(var_266_string == 0) goto Label_1963; // 0x7a9 JumpB
	goto Label_1968; // 0x7aa Jump
	
Label_1968:
	goto Label_1983; // 0x7b0 Jump
	
Label_1983:
	return 0; // 0x7bf Return
	
Label_1963:
	var_267_string = ""; // 0x7ab PushV
	var_267_string = var_2_object; // 0x7ac MovT
	func_4633(var_267_string); // 0x7ad NEW_2
	goto Label_1958; // 0x7af Jump
	
Label_1969:
	var_278_string = "all"; // 0x7b1 PushS
	var_279_string = "idle"; // 0x7b2 PushS
	PlayAnimation(var_278_string, var_279_string); // 0x7b3 Func
	
Label_1973:
	WaitForAnimEnd(); // 0x7b5 Func
	var_280_string = var_3_string; // 0x7b7 PushT
	if(var_280_string == 0) goto Label_1978; // 0x7b8 JumpB
	goto Label_1983; // 0x7b9 Jump
	
Label_1978:
	var_281_string = "all"; // 0x7ba PushS
	var_282_string = "idle"; // 0x7bb PushS
	PlayAnimation(var_281_string, var_282_string); // 0x7bc Func
	goto Label_1973; // 0x7be Jump
}


func_5000()
{
	var_54_string = "b11q01KnowWhoKilled"; // 0x1389 PushS
	var_55_int = 1; // 0x138a PushI
	SetVariable(var_54_string, var_55_int); // 0x138b Func
	func_5259(); // 0x138e NEW_2
	return 0; // 0x1390 Return
}


func_5259()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x148b PushV
	var_58_int = 315; // 0x148c PushI
	var_59_int = 1; // 0x148d PushI
	var_60_int = 522057; // 0x148e PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x148f Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x1491 PushV
	var_62_object = var_57_object; // 0x1492 Mov
	var_63_int = 313; // 0x1493 MovI
	func_5324(var_61_bool, var_62_object, var_63_int); // 0x1494 NEW_2
	return 2; // 0x1496 Return
}


func_4749(var_82_object, var_83_string, var_84_int)
{
	var_85_object = Obj(); var_86_object = Obj(); // 0x128d PushV
	CreateInvItem(var_86_object); // 0x128e Func
	SetItemName(var_83_string); // 0x1290 ObjFunc
	var_87_object = Obj(); var_88_object = Obj(); var_89_int = 0; // 0x1292 PushV
	var_87_object = var_82_object; // 0x1293 Mov
	var_88_object = var_86_object; // 0x1294 Mov
	var_89_int = var_84_int; // 0x1295 Mov
	func_4730(var_88_object, var_89_int); // 0x1296 NEW_2
	return 2; // 0x1298 Return
}


func_4495(var_139_bool, var_140_object)
{
	var_144_int = 0; var_145_int = 0; var_146_int = 0; var_147_int = 0; // 0x118f PushV
	var_148_string = "voice_common"; // 0x1190 PushS
	GetVariable(var_148_string, var_146_int); // 0x1191 Func
	var_149_int = var_146_int; // 0x1193 Push
	if(var_149_int == 0) goto Label_4533; // 0x1194 JumpB
	var_150_bool = 0; var_151_object = Obj(); // 0x1195 PushV
	var_151_object = var_140_object; // 0x1196 Mov
	func_4553(var_151_object); // 0x1197 NEW_2
	var_180_bool = var_150_bool == 0; // 0x1199 Not
	if(var_180_bool == 0) goto Label_4515; // 0x119a JumpB
	var_181_bool = 0; var_182_object = Obj(); // 0x119b PushV
	var_182_object = var_140_object; // 0x119c Mov
	func_4590(var_182_object); // 0x119d NEW_2
	var_216_bool = var_181_bool == 0; // 0x119f Not
	if(var_216_bool == 0) goto Label_4515; // 0x11a0 JumpB
	var_139_bool = 0; // 0x11a1 MovB
	return 4; // 0x11a2 Return
	
Label_4515:
	var_217_int = 2; // 0x11a3 PushI
	irand(var_147_int, var_217_int); // 0x11a4 Func
	var_218_int = var_147_int; // 0x11a6 Push
	if(var_218_int == 0) goto Label_4528; // 0x11a7 JumpB
	var_219_string = "voice_common"; // 0x11a8 PushS
	var_220_int = 1; // 0x11a9 PushI
	var_221_int = var_146_int + var_220_int; // 0x11aa Add
	var_222_int = 3; // 0x11ab PushI
	var_223_int = var_221_int / var_222_int; // 0x11ac Mod
	SetVariable(var_219_string, var_223_int); // 0x11ad Func
	goto Label_4532; // 0x11af Jump
	
Label_4532:
	goto Label_4551; // 0x11b4 Jump
	
Label_4551:
	var_139_bool = 1; // 0x11c7 MovB
	return 4; // 0x11c8 Return
	
Label_4528:
	var_224_string = "voice_common"; // 0x11b0 PushS
	var_225_int = 0; // 0x11b1 PushI
	SetVariable(var_224_string, var_225_int); // 0x11b2 Func
	
Label_4533:
	var_226_bool = 0; var_227_object = Obj(); // 0x11b5 PushV
	var_227_object = var_140_object; // 0x11b6 Mov
	func_4590(var_227_object); // 0x11b7 NEW_2
	var_228_bool = var_226_bool == 0; // 0x11b9 Not
	if(var_228_bool == 0) goto Label_4547; // 0x11ba JumpB
	var_229_bool = 0; var_230_object = Obj(); // 0x11bb PushV
	var_230_object = var_140_object; // 0x11bc Mov
	func_4553(var_230_object); // 0x11bd NEW_2
	var_231_bool = var_229_bool == 0; // 0x11bf Not
	if(var_231_bool == 0) goto Label_4547; // 0x11c0 JumpB
	var_139_bool = 0; // 0x11c1 MovB
	return 4; // 0x11c2 Return
	
Label_4547:
	var_232_string = "voice_common"; // 0x11c3 PushS
	var_233_int = 1; // 0x11c4 PushI
	SetVariable(var_232_string, var_233_int); // 0x11c5 Func
}


func_912(var_0_object, var_296_int, var_297_object)
{
	var_299_object = Obj(); var_300_bool = 0; var_301_int = 0; var_302_bool = 0; var_303_object = Obj(); var_304_bool = 0; var_305_int = 0; var_306_bool = 0; // 0x390 PushV
	var_0_object = var_297_object; // 0x391 TMov
	var_307_bool = 0; var_308_object = Obj(); var_309_float = 0; // 0x392 PushV
	var_308_object = var_297_object; // 0x393 Mov
	var_309_float = 70.0; // 0x394 MovF
	func_4408(var_308_object, var_309_float); // 0x395 NEW_2
	var_310_bool = var_307_bool == 0; // 0x397 Not
	if(var_310_bool == 0) goto Label_923; // 0x398 JumpB
	var_296_int = -2; // 0x399 MovI
	return 8; // 0x39a Return
	
Label_923:
	CreateDialog(var_303_object); // 0x39b Func
	var_311_int = 0; // 0x39d PushV
	func_4820(var_311_int); // 0x39e NEW_2
	SetNPCName(var_311_int); // 0x3a0 ObjFunc
	var_312_int = 0; // 0x3a2 PushV
	func_4818(var_312_int); // 0x3a3 NEW_2
	SetNPCDescription(var_312_int); // 0x3a5 ObjFunc
	var_313_string = ""; // 0x3a7 PushV
	func_4822(var_313_string); // 0x3a8 NEW_2
	SetPhoto(var_313_string); // 0x3aa ObjFunc
	var_314_string = ""; // 0x3ac PushV
	func_4824(var_314_string); // 0x3ad NEW_2
	SetPhoto2(var_314_string); // 0x3af ObjFunc
	var_315_int = 0; // 0x3b1 PushV
	func_5402(var_315_int); // 0x3b2 NEW_2
	SetPlayerName(var_315_int); // 0x3b4 ObjFunc
	var_305_int = -1; // 0x3b6 MovI
	IsOverrideActive(var_304_bool); // 0x3b7 Func
	var_316_bool = var_304_bool; // 0x3b9 Push
	if(var_316_bool == 0) goto Label_957; // 0x3ba JumpB
	var_296_int = -2; // 0x3bb MovI
	return 8; // 0x3bc Return
	
Label_957:
	DoDialog(var_303_object); // 0x3bd Func
	var_317_bool = 0; var_318_object = Obj(); // 0x3bf PushV
	var_319_object = Obj(); // 0x3c0 PushV
	func_4686(var_319_object); // 0x3c1 NEW_2
	var_318_object = var_319_object; // 0x3c2 Mov
	func_4495(var_317_bool, var_318_object); // 0x3c4 NEW_2
	var_320_object = Obj(); var_321_object = Obj(); // 0x3c6 PushV
	var_320_object = var_297_object; // 0x3c7 Mov
	var_321_object = var_303_object; // 0x3c8 Mov
	TaskCall(5); // 0x3c9 TaskCall
	func_993(var_322_object, var_323_object, var_324_string, var_325_bool, var_320_object, var_321_object); // 0x3ca NEW_2
	TaskReturn(); // 0x3cb TaskReturn
	IsDialogEnd(var_306_bool); // 0x3cd ObjFunc
	
Label_975:
	var_399_bool = var_306_bool == 0; // 0x3cf Not
	if(var_399_bool == 0) goto Label_982; // 0x3d0 JumpB
	sync(); // 0x3d1 Func
	IsDialogEnd(var_306_bool); // 0x3d3 ObjFunc
	goto Label_975; // 0x3d5 Jump
	
Label_982:
	var_400_object = Obj(); // 0x3d6 PushV
	var_400_object = var_297_object; // 0x3d7 Mov
	func_4477(); // 0x3d8 NEW_2
	StopDialog(var_303_object); // 0x3da Func
	GetReturnValue(var_305_int); // 0x3dc ObjFunc
	var_296_int = var_305_int; // 0x3de Mov
	return 8; // 0x3df Return
}


func_5009()
{
	var_736_string = "oob11Ospina1"; // 0x1392 PushS
	var_737_int = 1; // 0x1393 PushI
	SetVariable(var_736_string, var_737_int); // 0x1394 Func
	return 0; // 0x1396 Return
}


func_5015()
{
	func_5285(); // 0x1399 NEW_2
	return 0; // 0x139b Return
}


func_3736(var_0_object, var_1_object, var_2_object, var_3_string, var_809_object, var_810_object)
{
	var_0_object = var_810_object; // 0xe99 TMov
	var_1_object = var_809_object; // 0xe9a TMov
	var_3_string = 0; // 0xe9b TMovB
	var_815_int = 1; // 0xe9c PushI
	if(var_815_int == 0) goto Label_3769; // 0xe9d JumpB
	var_816_string = ""; // 0xe9e PushV
	var_816_string = "Neutral"; // 0xe9f MovS
	func_3799(var_810_object, var_816_string); // 0xea0 NEW_2
	var_824_int = 535294; // 0xea2 PushI
	SetMessage(var_824_int); // 0xea3 TObjFunc
	ClearReplies(); // 0xea5 TObjFunc
	var_825_int = 535295; // 0xea7 PushI
	var_826_int = 36973; // 0xea8 PushI
	var_827_int = 36972; // 0xea9 PushI
	AddReply(var_825_int, var_826_int, var_827_int); // 0xeaa TObjFunc
	var_828_int = 535302; // 0xeac PushI
	var_829_int = -1; // 0xead PushI
	var_830_int = 36980; // 0xeae PushI
	AddReply(var_828_int, var_829_int, var_830_int); // 0xeaf TObjFunc
	var_831_int = 535303; // 0xeb1 PushI
	var_832_int = -1; // 0xeb2 PushI
	var_833_int = 36981; // 0xeb3 PushI
	AddReply(var_831_int, var_832_int, var_833_int); // 0xeb4 TObjFunc
	goto Label_3769; // 0xeb6 Jump
	
Label_3769:
	var_834_bool = 0; // 0xeb9 PushV
	func_4826(var_834_bool); // 0xeba NEW_2
	if(var_834_bool == 0) goto Label_3784; // 0xebc JumpB
	
Label_3773:
	lshWaitForAnimEnd(); // 0xebd Func
	var_835_string = var_3_string; // 0xebf PushT
	if(var_835_string == 0) goto Label_3778; // 0xec0 JumpB
	goto Label_3783; // 0xec1 Jump
	
Label_3783:
	goto Label_3798; // 0xec7 Jump
	
Label_3798:
	return 0; // 0xed6 Return
	
Label_3778:
	var_836_string = ""; // 0xec2 PushV
	var_836_string = var_2_object; // 0xec3 MovT
	func_4633(var_836_string); // 0xec4 NEW_2
	goto Label_3773; // 0xec6 Jump
	
Label_3784:
	var_837_string = "all"; // 0xec8 PushS
	var_838_string = "idle"; // 0xec9 PushS
	PlayAnimation(var_837_string, var_838_string); // 0xeca Func
	
Label_3788:
	WaitForAnimEnd(); // 0xecc Func
	var_839_string = var_3_string; // 0xece PushT
	if(var_839_string == 0) goto Label_3793; // 0xecf JumpB
	goto Label_3798; // 0xed0 Jump
	
Label_3793:
	var_840_string = "all"; // 0xed1 PushS
	var_841_string = "idle"; // 0xed2 PushS
	PlayAnimation(var_840_string, var_841_string); // 0xed3 Func
	goto Label_3788; // 0xed5 Jump
}


func_153(var_2_object, var_507_string)
{
	var_508_bool = 0; // 0x9a PushV
	func_4826(var_508_bool); // 0x9b NEW_2
	var_509_bool = var_508_bool == 0; // 0x9d Not
	if(var_509_bool == 0) goto Label_160; // 0x9e JumpB
	return 0; // 0x9f Return
	
Label_160:
	var_510_bool = var_507_string == var_2_object; // 0xa0 Eq
	if(var_510_bool == 0) goto Label_163; // 0xa1 JumpB
	return 0; // 0xa2 Return
	
Label_163:
	var_511_string = ""; var_512_bool = 0; // 0xa3 PushV
	var_511_string = var_507_string; // 0xa4 Mov
	var_513_string = ""; // 0xa5 PushS
	var_514_bool = var_507_string == var_513_string; // 0xa6 Eq
	if(var_514_bool == 0) goto Label_170; // 0xa7 JumpB
	var_512_bool = 0; // 0xa8 MovB
	goto Label_171; // 0xa9 Jump
	
Label_171:
	func_4649(var_511_string, var_512_bool); // 0xab NEW_2
	var_2_object = var_507_string; // 0xad TMov
	return 0; // 0xae Return
	
Label_170:
	var_512_bool = 1; // 0xaa MovB
}


func_4762(var_56_bool, var_57_string, var_58_string)
{
	var_59_object = Obj(); var_60_object = Obj(); // 0x129a PushV
	FindActor(var_60_object, var_57_string); // 0x129b Func
	var_61_bool = var_60_object == 0; // 0x129d NullEq
	if(var_61_bool == 0) goto Label_4769; // 0x129e JumpB
	var_56_bool = 0; // 0x129f MovB
	return 2; // 0x12a0 Return
	
Label_4769:
	Trigger(var_60_object, var_58_string); // 0x12a1 Func
	var_56_bool = 1; // 0x12a3 MovB
	return 2; // 0x12a4 Return
}


func_5272()
{
	var_72_object = Obj(); var_73_object = Obj(); // 0x1498 PushV
	var_74_int = 223; // 0x1499 PushI
	var_75_int = 1; // 0x149a PushI
	var_76_int = 519636; // 0x149b PushI
	CreateDiaryEntry(var_73_object, var_74_int, var_75_int, var_76_int); // 0x149c Func
	var_77_bool = 0; var_78_object = Obj(); var_79_int = 0; // 0x149e PushV
	var_78_object = var_73_object; // 0x149f Mov
	var_79_int = 221; // 0x14a0 MovI
	func_5324(var_77_bool, var_78_object, var_79_int); // 0x14a1 NEW_2
	return 2; // 0x14a3 Return
}


func_2714(var_0_object, var_620_int, var_621_object)
{
	var_623_object = Obj(); var_624_bool = 0; var_625_int = 0; var_626_bool = 0; var_627_object = Obj(); var_628_bool = 0; var_629_int = 0; var_630_bool = 0; // 0xa9a PushV
	var_0_object = var_621_object; // 0xa9b TMov
	var_631_bool = 0; var_632_object = Obj(); var_633_float = 0; // 0xa9c PushV
	var_632_object = var_621_object; // 0xa9d Mov
	var_633_float = 70.0; // 0xa9e MovF
	func_4408(var_632_object, var_633_float); // 0xa9f NEW_2
	var_634_bool = var_631_bool == 0; // 0xaa1 Not
	if(var_634_bool == 0) goto Label_2725; // 0xaa2 JumpB
	var_620_int = -2; // 0xaa3 MovI
	return 8; // 0xaa4 Return
	
Label_2725:
	CreateDialog(var_627_object); // 0xaa5 Func
	var_635_int = 0; // 0xaa7 PushV
	func_4820(var_635_int); // 0xaa8 NEW_2
	SetNPCName(var_635_int); // 0xaaa ObjFunc
	var_636_int = 0; // 0xaac PushV
	func_4818(var_636_int); // 0xaad NEW_2
	SetNPCDescription(var_636_int); // 0xaaf ObjFunc
	var_637_string = ""; // 0xab1 PushV
	func_4822(var_637_string); // 0xab2 NEW_2
	SetPhoto(var_637_string); // 0xab4 ObjFunc
	var_638_string = ""; // 0xab6 PushV
	func_4824(var_638_string); // 0xab7 NEW_2
	SetPhoto2(var_638_string); // 0xab9 ObjFunc
	var_639_int = 0; // 0xabb PushV
	func_5402(var_639_int); // 0xabc NEW_2
	SetPlayerName(var_639_int); // 0xabe ObjFunc
	var_629_int = -1; // 0xac0 MovI
	IsOverrideActive(var_628_bool); // 0xac1 Func
	var_640_bool = var_628_bool; // 0xac3 Push
	if(var_640_bool == 0) goto Label_2759; // 0xac4 JumpB
	var_620_int = -2; // 0xac5 MovI
	return 8; // 0xac6 Return
	
Label_2759:
	DoDialog(var_627_object); // 0xac7 Func
	var_641_bool = 0; var_642_object = Obj(); // 0xac9 PushV
	var_643_object = Obj(); // 0xaca PushV
	func_4686(var_643_object); // 0xacb NEW_2
	var_642_object = var_643_object; // 0xacc Mov
	func_4495(var_641_bool, var_642_object); // 0xace NEW_2
	var_644_object = Obj(); var_645_object = Obj(); // 0xad0 PushV
	var_644_object = var_621_object; // 0xad1 Mov
	var_645_object = var_627_object; // 0xad2 Mov
	TaskCall(11); // 0xad3 TaskCall
	func_2795(var_646_object, var_647_object, var_648_string, var_649_bool, var_644_object, var_645_object); // 0xad4 NEW_2
	TaskReturn(); // 0xad5 TaskReturn
	IsDialogEnd(var_630_bool); // 0xad7 ObjFunc
	
Label_2777:
	var_693_bool = var_630_bool == 0; // 0xad9 Not
	if(var_693_bool == 0) goto Label_2784; // 0xada JumpB
	sync(); // 0xadb Func
	IsDialogEnd(var_630_bool); // 0xadd ObjFunc
	goto Label_2777; // 0xadf Jump
	
Label_2784:
	var_694_object = Obj(); // 0xae0 PushV
	var_694_object = var_621_object; // 0xae1 Mov
	func_4477(); // 0xae2 NEW_2
	StopDialog(var_627_object); // 0xae4 Func
	GetReturnValue(var_629_int); // 0xae6 ObjFunc
	var_620_int = var_629_int; // 0xae8 Mov
	return 8; // 0xae9 Return
}


func_3995(var_0_object, var_1_object, var_2_object, var_3_string, var_869_object, var_870_object)
{
	var_0_object = var_870_object; // 0xf9c TMov
	var_1_object = var_869_object; // 0xf9d TMov
	var_3_string = 0; // 0xf9e TMovB
	var_875_int = 1; // 0xf9f PushI
	if(var_875_int == 0) goto Label_4023; // 0xfa0 JumpB
	var_876_string = ""; // 0xfa1 PushV
	var_876_string = "Neutral"; // 0xfa2 MovS
	func_4053(var_870_object, var_876_string); // 0xfa3 NEW_2
	var_884_int = 540551; // 0xfa5 PushI
	SetMessage(var_884_int); // 0xfa6 TObjFunc
	ClearReplies(); // 0xfa8 TObjFunc
	var_885_int = 540552; // 0xfaa PushI
	var_886_int = -1; // 0xfab PushI
	var_887_int = 42561; // 0xfac PushI
	AddReply(var_885_int, var_886_int, var_887_int); // 0xfad TObjFunc
	var_888_int = 540795; // 0xfaf PushI
	var_889_int = -1; // 0xfb0 PushI
	var_890_int = 42844; // 0xfb1 PushI
	AddReply(var_888_int, var_889_int, var_890_int); // 0xfb2 TObjFunc
	goto Label_4023; // 0xfb4 Jump
	
Label_4023:
	var_891_bool = 0; // 0xfb7 PushV
	func_4826(var_891_bool); // 0xfb8 NEW_2
	if(var_891_bool == 0) goto Label_4038; // 0xfba JumpB
	
Label_4027:
	lshWaitForAnimEnd(); // 0xfbb Func
	var_892_string = var_3_string; // 0xfbd PushT
	if(var_892_string == 0) goto Label_4032; // 0xfbe JumpB
	goto Label_4037; // 0xfbf Jump
	
Label_4037:
	goto Label_4052; // 0xfc5 Jump
	
Label_4052:
	return 0; // 0xfd4 Return
	
Label_4032:
	var_893_string = ""; // 0xfc0 PushV
	var_893_string = var_2_object; // 0xfc1 MovT
	func_4633(var_893_string); // 0xfc2 NEW_2
	goto Label_4027; // 0xfc4 Jump
	
Label_4038:
	var_894_string = "all"; // 0xfc6 PushS
	var_895_string = "idle"; // 0xfc7 PushS
	PlayAnimation(var_894_string, var_895_string); // 0xfc8 Func
	
Label_4042:
	WaitForAnimEnd(); // 0xfca Func
	var_896_string = var_3_string; // 0xfcc PushT
	if(var_896_string == 0) goto Label_4047; // 0xfcd JumpB
	goto Label_4052; // 0xfce Jump
	
Label_4047:
	var_897_string = "all"; // 0xfcf PushS
	var_898_string = "idle"; // 0xfd0 PushS
	PlayAnimation(var_897_string, var_898_string); // 0xfd1 Func
	goto Label_4042; // 0xfd3 Jump
}


func_5020()
{
	var_117_object = Obj(); var_118_string = ""; var_119_float = 0; // 0x139d PushV
	var_120_object = Obj(); // 0x139e PushV
	func_5352(var_120_object); // 0x139f NEW_2
	var_117_object = var_120_object; // 0x13a0 Mov
	var_118_string = "pt_gatherer3"; // 0x13a2 MovS
	var_119_float = 2; // 0x13a3 MovI
	func_5369(var_117_object, var_118_string, var_119_float); // 0x13a4 NEW_2
	var_140_object = Obj(); // 0x13a6 PushV
	func_5352(var_140_object); // 0x13a7 NEW_2
	ShowMap(var_140_object); // 0x13a9 ObjFunc
	return 0; // 0x13ab Return
}


func_671(var_2_object, var_434_string)
{
	var_435_bool = 0; // 0x2a0 PushV
	func_4826(var_435_bool); // 0x2a1 NEW_2
	var_436_bool = var_435_bool == 0; // 0x2a3 Not
	if(var_436_bool == 0) goto Label_678; // 0x2a4 JumpB
	return 0; // 0x2a5 Return
	
Label_678:
	var_437_bool = var_434_string == var_2_object; // 0x2a6 Eq
	if(var_437_bool == 0) goto Label_681; // 0x2a7 JumpB
	return 0; // 0x2a8 Return
	
Label_681:
	var_438_string = ""; var_439_bool = 0; // 0x2a9 PushV
	var_438_string = var_434_string; // 0x2aa Mov
	var_440_string = ""; // 0x2ab PushS
	var_441_bool = var_434_string == var_440_string; // 0x2ac Eq
	if(var_441_bool == 0) goto Label_688; // 0x2ad JumpB
	var_439_bool = 0; // 0x2ae MovB
	goto Label_689; // 0x2af Jump
	
Label_689:
	func_4649(var_438_string, var_439_bool); // 0x2b1 NEW_2
	var_2_object = var_434_string; // 0x2b3 TMov
	return 0; // 0x2b4 Return
	
Label_688:
	var_439_bool = 1; // 0x2b0 MovB
}


func_5285()
{
	var_92_object = Obj(); var_93_object = Obj(); // 0x14a5 PushV
	var_94_int = 240; // 0x14a6 PushI
	var_95_int = 1; // 0x14a7 PushI
	var_96_int = 519745; // 0x14a8 PushI
	CreateDiaryEntry(var_93_object, var_94_int, var_95_int, var_96_int); // 0x14a9 Func
	var_97_bool = 0; var_98_object = Obj(); var_99_int = 0; // 0x14ab PushV
	var_98_object = var_93_object; // 0x14ac Mov
	var_99_int = 238; // 0x14ad MovI
	func_5324(var_97_bool, var_98_object, var_99_int); // 0x14ae NEW_2
	return 2; // 0x14b0 Return
}


func_4774(var_115_float)
{
	var_116_float = 0; var_117_float = 0; // 0x12a6 PushV
	GetGameTime(var_117_float); // 0x12a7 Func
	var_115_float = var_117_float; // 0x12a9 Mov
	return 2; // 0x12aa Return
}


func_4779(var_194_int)
{
	var_195_float = 0; var_196_float = 0; // 0x12ab PushV
	GetGameTime(var_196_float); // 0x12ac Func
	var_197_int = 1; // 0x12ae PushI
	var_198_int = 0; // 0x12af PushV
	var_199_int = 24; // 0x12b0 PushI
	var_198_int = var_196_float / var_196_float; // 0x12b1 Div2
	var_194_int = var_197_int + var_198_int; // 0x12b2 Add2
	return 2; // 0x12b3 Return
}


func_5036()
{
	var_105_string = "playsound"; // 0x13ad PushS
	var_106_string = "giveitem"; // 0x13ae PushS
	TriggerWorld(var_105_string, var_106_string); // 0x13af Func
	return 0; // 0x13b1 Return
}


func_2225(var_2_object, var_578_string)
{
	var_579_bool = 0; // 0x8b2 PushV
	func_4826(var_579_bool); // 0x8b3 NEW_2
	var_580_bool = var_579_bool == 0; // 0x8b5 Not
	if(var_580_bool == 0) goto Label_2232; // 0x8b6 JumpB
	return 0; // 0x8b7 Return
	
Label_2232:
	var_581_bool = var_578_string == var_2_object; // 0x8b8 Eq
	if(var_581_bool == 0) goto Label_2235; // 0x8b9 JumpB
	return 0; // 0x8ba Return
	
Label_2235:
	var_582_string = ""; var_583_bool = 0; // 0x8bb PushV
	var_582_string = var_578_string; // 0x8bc Mov
	var_584_string = ""; // 0x8bd PushS
	var_585_bool = var_578_string == var_584_string; // 0x8be Eq
	if(var_585_bool == 0) goto Label_2242; // 0x8bf JumpB
	var_583_bool = 0; // 0x8c0 MovB
	goto Label_2243; // 0x8c1 Jump
	
Label_2243:
	func_4649(var_582_string, var_583_bool); // 0x8c3 NEW_2
	var_2_object = var_578_string; // 0x8c5 TMov
	return 0; // 0x8c6 Return
	
Label_2242:
	var_583_bool = 1; // 0x8c2 MovB
}


func_5298()
{
	var_56_object = Obj(); var_57_object = Obj(); // 0x14b2 PushV
	var_58_int = 290; // 0x14b3 PushI
	var_59_int = 1; // 0x14b4 PushI
	var_60_int = 521461; // 0x14b5 PushI
	CreateDiaryEntry(var_57_object, var_58_int, var_59_int, var_60_int); // 0x14b6 Func
	var_61_bool = 0; var_62_object = Obj(); var_63_int = 0; // 0x14b8 PushV
	var_62_object = var_57_object; // 0x14b9 Mov
	var_63_int = 284; // 0x14ba MovI
	func_5324(var_61_bool, var_62_object, var_63_int); // 0x14bb NEW_2
	return 2; // 0x14bd Return
}


func_5042()
{
	var_54_string = "b2q01"; // 0x13b3 PushS
	var_55_int = 3; // 0x13b4 PushI
	SetVariable(var_54_string, var_55_int); // 0x13b5 Func
	var_56_bool = 0; var_57_string = ""; var_58_string = ""; // 0x13b7 PushV
	var_57_string = "quest_b2_01"; // 0x13b8 MovS
	var_58_string = "place_box"; // 0x13b9 MovS
	func_4762(var_56_bool, var_57_string, var_58_string); // 0x13ba NEW_2
	var_62_object = Obj(); var_63_string = ""; // 0x13bc PushV
	var_63_string = "quest_b2_02"; // 0x13bd MovS
	func_4707(var_62_object, var_63_string); // 0x13be NEW_2
	return 0; // 0x13c0 Return
}


func_4788(var_293_bool, var_294_int)
{
	var_295_int = 0; // 0x12b5 PushV
	func_4779(var_295_int); // 0x12b6 NEW_2
	var_293_bool = var_295_int == var_294_int; // 0x12b8 Eq2
	return 0; // 0x12b9 Return
}


func_4794(var_71_string, var_72_int)
{
	var_73_string = ""; var_74_string = ""; // 0x12ba PushV
	var_74_string = "idle"; // 0x12bb MovS
	var_75_int = var_72_int; // 0x12bc Push
	if(var_75_int == 0) goto Label_4799; // 0x12bd JumpB
	var_74_string = var_74_string + var_72_int; // 0x12be Add2
	
Label_4799:
	var_71_string = var_74_string; // 0x12bf Mov
	return 2; // 0x12c0 Return
}


func_3263(var_2_object, var_738_string)
{
	var_739_bool = 0; // 0xcc0 PushV
	func_4826(var_739_bool); // 0xcc1 NEW_2
	var_740_bool = var_739_bool == 0; // 0xcc3 Not
	if(var_740_bool == 0) goto Label_3270; // 0xcc4 JumpB
	return 0; // 0xcc5 Return
	
Label_3270:
	var_741_bool = var_738_string == var_2_object; // 0xcc6 Eq
	if(var_741_bool == 0) goto Label_3273; // 0xcc7 JumpB
	return 0; // 0xcc8 Return
	
Label_3273:
	var_742_string = ""; var_743_bool = 0; // 0xcc9 PushV
	var_742_string = var_738_string; // 0xcca Mov
	var_744_string = ""; // 0xccb PushS
	var_745_bool = var_738_string == var_744_string; // 0xccc Eq
	if(var_745_bool == 0) goto Label_3280; // 0xccd JumpB
	var_743_bool = 0; // 0xcce MovB
	goto Label_3281; // 0xccf Jump
	
Label_3281:
	func_4649(var_742_string, var_743_bool); // 0xcd1 NEW_2
	var_2_object = var_738_string; // 0xcd3 TMov
	return 0; // 0xcd4 Return
	
Label_3280:
	var_743_bool = 1; // 0xcd0 MovB
}


func_5311(var_70_object)
{
	var_71_object = Obj(); var_72_object = Obj(); // 0x14bf PushV
	GetDiaryRoot(var_72_object); // 0x14c0 Func
	var_73_bool = var_72_object == 0; // 0x14c2 Not
	if(var_73_bool == 0) goto Label_5321; // 0x14c3 JumpB
	var_74_string = "Can't retrieve diary root"; // 0x14c4 PushS
	Trace(var_74_string); // 0x14c5 Func
	var_70_object = 0; // 0x14c7 MovB
	return 2; // 0x14c8 Return
	
Label_5321:
	var_70_object = var_72_object; // 0x14c9 Mov
	return 2; // 0x14ca Return
}


func_4801(var_65_int)
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x12c1 PushV
	var_68_int = 0; // 0x12c2 MovI
	
Label_4803:
	var_70_string = "all"; // 0x12c3 PushS
	var_71_string = ""; var_72_int = 0; // 0x12c4 PushV
	var_72_int = var_68_int; // 0x12c5 Mov
	func_4794(var_71_string, var_72_int); // 0x12c6 NEW_2
	HasAnimation(var_69_bool, var_70_string, var_71_string); // 0x12c8 Func
	var_76_bool = var_69_bool == 0; // 0x12ca Not
	if(var_76_bool == 0) goto Label_4813; // 0x12cb JumpB
	goto Label_4816; // 0x12cc Jump
	
Label_4816:
	var_65_int = var_68_int; // 0x12d0 Mov
	return 4; // 0x12d1 Return
	
Label_4813:
	var_77_int = 1; // 0x12cd PushI
	var_68_int = var_68_int + var_77_int; // 0x12ce Add2
	goto Label_4803; // 0x12cf Jump
}


func_1984(var_2_object, var_241_string)
{
	var_242_bool = 0; // 0x7c1 PushV
	func_4826(var_242_bool); // 0x7c2 NEW_2
	var_243_bool = var_242_bool == 0; // 0x7c4 Not
	if(var_243_bool == 0) goto Label_1991; // 0x7c5 JumpB
	return 0; // 0x7c6 Return
	
Label_1991:
	var_244_bool = var_241_string == var_2_object; // 0x7c7 Eq
	if(var_244_bool == 0) goto Label_1994; // 0x7c8 JumpB
	return 0; // 0x7c9 Return
	
Label_1994:
	var_245_string = ""; var_246_bool = 0; // 0x7ca PushV
	var_245_string = var_241_string; // 0x7cb Mov
	var_247_string = ""; // 0x7cc PushS
	var_248_bool = var_241_string == var_247_string; // 0x7cd Eq
	if(var_248_bool == 0) goto Label_2001; // 0x7ce JumpB
	var_246_bool = 0; // 0x7cf MovB
	goto Label_2002; // 0x7d0 Jump
	
Label_2002:
	func_4649(var_245_string, var_246_bool); // 0x7d2 NEW_2
	var_2_object = var_241_string; // 0x7d4 TMov
	return 0; // 0x7d5 Return
	
Label_2001:
	var_246_bool = 1; // 0x7d1 MovB
}


func_5057()
{
	var_119_string = "oob8Ospina1"; // 0x13c2 PushS
	var_120_int = 1; // 0x13c3 PushI
	SetVariable(var_119_string, var_120_int); // 0x13c4 Func
	return 0; // 0x13c6 Return
}


func_5063(var_79_object)
{
	var_81_string = "b8q01_bone is given"; // 0x13c8 PushS
	Trace(var_81_string); // 0x13c9 Func
	var_82_object = Obj(); var_83_string = ""; var_84_int = 0; // 0x13cb PushV
	var_82_object = var_79_object; // 0x13cc Mov
	var_83_string = "b8q01_bone"; // 0x13cd MovS
	var_84_int = 1; // 0x13ce MovI
	func_4749(var_82_object, var_83_string, var_84_int); // 0x13cf NEW_2
	return 0; // 0x13d1 Return
}


func_4553(var_150_bool)
{
	var_152_string = ""; var_153_int = 0; var_154_bool = 0; var_155_int = 0; var_156_string = ""; var_157_string = ""; var_158_int = 0; var_159_bool = 0; var_160_int = 0; var_161_string = ""; // 0x11c9 PushV
	var_157_string = "c"; // 0x11ca MovS
	var_158_int = 0; // 0x11cb MovI
	
Label_4556:
	var_162_int = 1; // 0x11cc PushI
	if(var_162_int == 0) goto Label_4569; // 0x11cd JumpB
	var_163_int = 1; // 0x11ce PushI
	var_164_int = var_158_int + var_163_int; // 0x11cf Add
	var_165_int = var_157_string + var_164_int; // 0x11d0 Add
	HasProperty(var_165_int, var_159_bool); // 0x11d1 ObjFunc
	var_166_bool = var_159_bool == 0; // 0x11d3 Not
	if(var_166_bool == 0) goto Label_4566; // 0x11d4 JumpB
	goto Label_4569; // 0x11d5 Jump
	
Label_4569:
	var_167_bool = var_158_int == 0; // 0x11d9 Not
	if(var_167_bool == 0) goto Label_4573; // 0x11da JumpB
	var_150_bool = 0; // 0x11db MovB
	return 10; // 0x11dc Return
	
Label_4573:
	var_160_int = 0; // 0x11dd MovI
	var_168_int = 1; // 0x11de PushI
	var_169_bool = var_158_int > var_168_int; // 0x11df GT
	if(var_169_bool == 0) goto Label_4579; // 0x11e0 JumpB
	irand(var_160_int, var_158_int); // 0x11e1 Func
	
Label_4579:
	var_170_int = 1; // 0x11e3 PushI
	var_171_int = var_160_int + var_170_int; // 0x11e4 Add
	var_172_int = var_157_string + var_171_int; // 0x11e5 Add
	GetProperty(var_172_int, var_161_string); // 0x11e6 ObjFunc
	var_173_bool = 0; var_174_string = ""; // 0x11e8 PushV
	var_174_string = var_161_string; // 0x11e9 Mov
	func_4664(var_173_bool, var_174_string); // 0x11ea NEW_2
	var_150_bool = var_173_bool; // 0x11eb Mov
	return 10; // 0x11ed Return
	
Label_4566:
	var_179_int = 1; // 0x11d6 PushI
	var_158_int = var_158_int + var_179_int; // 0x11d7 Add2
	goto Label_4556; // 0x11d8 Jump
}


func_4300()
{
	var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_int = 0; var_62_bool = 0; // 0x10cc PushV
	WaitForAnimEnd(); // 0x10cd Func
	var_63_bool = 0; // 0x10cf PushV
	func_4403(var_63_bool); // 0x10d0 NEW_2
	var_64_bool = var_63_bool == 0; // 0x10d2 Not
	if(var_64_bool == 0) goto Label_4309; // 0x10d3 JumpB
	return 12; // 0x10d4 Return
	
Label_4309:
	var_65_int = 0; // 0x10d5 PushV
	func_4801(var_65_int); // 0x10d6 NEW_2
	var_57_int = var_65_int; // 0x10d7 Mov
	var_58_int = 0; // 0x10d9 MovI
	
Label_4314:
	var_78_bool = 0; // 0x10da PushV
	var_78_bool = 0; // 0x10db MovB
	var_79_int = 5; // 0x10dc PushI
	var_80_bool = var_58_int < var_79_int; // 0x10dd LT
	if(var_80_bool == 0) goto Label_4324; // 0x10de JumpB
	var_81_bool = 0; // 0x10df PushV
	func_4403(var_81_bool); // 0x10e0 NEW_2
	if(var_81_bool == 0) goto Label_4324; // 0x10e2 JumpB
	var_78_bool = 1; // 0x10e3 MovB
	
Label_4324:
	if(var_78_bool == 0) goto Label_4366; // 0x10e4 JumpB
	var_82_bool = var_57_int == 0; // 0x10e5 Not
	if(var_82_bool == 0) goto Label_4334; // 0x10e6 JumpB
	var_83_int = 3; // 0x10e7 PushI
	Sleep(var_83_int, var_59_bool); // 0x10e8 Func
	var_84_bool = var_59_bool == 0; // 0x10ea Not
	if(var_84_bool == 0) goto Label_4333; // 0x10eb JumpB
	goto Label_4366; // 0x10ec Jump
	
Label_4366:
	ResetAAS(); // 0x110e Func
	return 12; // 0x1110 Return
	
Label_4333:
	goto Label_4355; // 0x10ed Jump
	
Label_4355:
	var_85_bool = 0; // 0x1103 PushV
	func_4369(var_85_bool); // 0x1104 NEW_2
	var_86_bool = var_85_bool == 0; // 0x1106 Not
	if(var_86_bool == 0) goto Label_4361; // 0x1107 JumpB
	goto Label_4366; // 0x1108 Jump
	
Label_4361:
	ResetAAS(); // 0x1109 Func
	var_87_int = 1; // 0x110b PushI
	var_58_int = var_58_int + var_87_int; // 0x110c Add2
	goto Label_4314; // 0x110d Jump
	
Label_4334:
	irand(var_60_int, var_57_int); // 0x10ee Func
	var_88_int = 5; // 0x10f0 PushI
	irand(var_61_int, var_88_int); // 0x10f1 Func
	var_89_int = 0; // 0x10f3 PushI
	var_90_bool = var_61_int != var_89_int; // 0x10f4 Neq
	if(var_90_bool == 0) goto Label_4343; // 0x10f5 JumpB
	var_60_int = 0; // 0x10f6 MovI
	
Label_4343:
	var_91_string = "all"; // 0x10f7 PushS
	var_92_string = ""; var_93_int = 0; // 0x10f8 PushV
	var_93_int = var_60_int; // 0x10f9 Mov
	func_4794(var_92_string, var_93_int); // 0x10fa NEW_2
	PlayAnimation(var_91_string, var_92_string); // 0x10fc Func
	WaitForAnimEnd(var_62_bool); // 0x10fe Func
	var_94_bool = var_62_bool == 0; // 0x1100 Not
	if(var_94_bool == 0) goto Label_4355; // 0x1101 JumpB
	goto Label_4366; // 0x1102 Jump
}


func_5324(var_61_bool, var_62_object, var_63_int)
{
	var_64_object = Obj(); var_65_object = Obj(); var_66_int = 0; var_67_object = Obj(); var_68_object = Obj(); var_69_int = 0; // 0x14cc PushV
	var_70_object = Obj(); // 0x14cd PushV
	func_5311(var_70_object); // 0x14ce NEW_2
	var_67_object = var_70_object; // 0x14cf Mov
	Find(var_63_int, var_68_object); // 0x14d1 ObjFunc
	var_75_bool = var_68_object == 0; // 0x14d3 Not
	if(var_75_bool == 0) goto Label_5339; // 0x14d4 JumpB
	var_76_string = "Can't find diary parent with id: "; // 0x14d5 PushS
	var_77_int = var_76_string + var_63_int; // 0x14d6 Add
	Trace(var_77_int); // 0x14d7 Func
	var_61_bool = 0; // 0x14d9 MovB
	return 6; // 0x14da Return
	
Label_5339:
	AddChild(var_62_object); // 0x14db ObjFunc
	var_78_int = 7; // 0x14dd PushI
	SendWorldWndMessage(var_78_int); // 0x14de Func
	GetCategory(var_69_int); // 0x14e0 ObjFunc
	SetDiarySection(var_69_int); // 0x14e2 Func
	var_61_bool = 0; // 0x14e4 MovB
	return 6; // 0x14e5 Return
}


func_4818(var_127_int)
{
	var_127_int = 515549; // 0x12d2 MovI
	return 0; // 0x12d3 Return
}


func_5074(var_587_bool)
{
	var_589_int = 0; var_590_string = ""; // 0x13d3 PushV
	var_590_string = "b8q01"; // 0x13d4 MovS
	func_4702(var_589_int, var_590_string); // 0x13d5 NEW_2
	var_591_int = 5; // 0x13d7 PushI
	var_592_bool = var_589_int == var_591_int; // 0x13d8 Eq
	if(var_592_bool == 0) goto Label_5084; // 0x13d9 JumpB
	var_587_bool = 1; // 0x13da MovB
	return 0; // 0x13db Return
	
Label_5084:
	var_587_bool = 0; // 0x13dc MovB
	return 0; // 0x13dd Return
}


func_4820(var_126_int)
{
	var_126_int = 502874; // 0x12d4 MovI
	return 0; // 0x12d5 Return
}


func_4053(var_2_object, var_876_string)
{
	var_877_bool = 0; // 0xfd6 PushV
	func_4826(var_877_bool); // 0xfd7 NEW_2
	var_878_bool = var_877_bool == 0; // 0xfd9 Not
	if(var_878_bool == 0) goto Label_4060; // 0xfda JumpB
	return 0; // 0xfdb Return
	
Label_4060:
	var_879_bool = var_876_string == var_2_object; // 0xfdc Eq
	if(var_879_bool == 0) goto Label_4063; // 0xfdd JumpB
	return 0; // 0xfde Return
	
Label_4063:
	var_880_string = ""; var_881_bool = 0; // 0xfdf PushV
	var_880_string = var_876_string; // 0xfe0 Mov
	var_882_string = ""; // 0xfe1 PushS
	var_883_bool = var_876_string == var_882_string; // 0xfe2 Eq
	if(var_883_bool == 0) goto Label_4070; // 0xfe3 JumpB
	var_881_bool = 0; // 0xfe4 MovB
	goto Label_4071; // 0xfe5 Jump
	
Label_4071:
	func_4649(var_880_string, var_881_bool); // 0xfe7 NEW_2
	var_2_object = var_876_string; // 0xfe9 TMov
	return 0; // 0xfea Return
	
Label_4070:
	var_881_bool = 1; // 0xfe6 MovB
}


func_4822(var_128_string)
{
	var_128_string = "ui/NPC_Ospina.png"; // 0x12d6 MovS
	return 0; // 0x12d7 Return
}


func_3799(var_2_object, var_816_string)
{
	var_817_bool = 0; // 0xed8 PushV
	func_4826(var_817_bool); // 0xed9 NEW_2
	var_818_bool = var_817_bool == 0; // 0xedb Not
	if(var_818_bool == 0) goto Label_3806; // 0xedc JumpB
	return 0; // 0xedd Return
	
Label_3806:
	var_819_bool = var_816_string == var_2_object; // 0xede Eq
	if(var_819_bool == 0) goto Label_3809; // 0xedf JumpB
	return 0; // 0xee0 Return
	
Label_3809:
	var_820_string = ""; var_821_bool = 0; // 0xee1 PushV
	var_820_string = var_816_string; // 0xee2 Mov
	var_822_string = ""; // 0xee3 PushS
	var_823_bool = var_816_string == var_822_string; // 0xee4 Eq
	if(var_823_bool == 0) goto Label_3816; // 0xee5 JumpB
	var_821_bool = 0; // 0xee6 MovB
	goto Label_3817; // 0xee7 Jump
	
Label_3817:
	func_4649(var_820_string, var_821_bool); // 0xee9 NEW_2
	var_2_object = var_816_string; // 0xeeb TMov
	return 0; // 0xeec Return
	
Label_3816:
	var_821_bool = 1; // 0xee8 MovB
}


func_4824(var_129_string)
{
	var_129_string = "ui/NPC_Ospina_b.png"; // 0x12d8 MovS
	return 0; // 0x12d9 Return
}


func_4826(var_121_bool)
{
	var_121_bool = 1; // 0x12da MovB
	return 0; // 0x12db Return
}


func_4828()
{
	var_54_string = "oob5Ospina1"; // 0x12dd PushS
	var_55_int = 1; // 0x12de PushI
	SetVariable(var_54_string, var_55_int); // 0x12df Func
	return 0; // 0x12e1 Return
}


func_5086(var_671_bool)
{
	var_673_int = 0; var_674_string = ""; // 0x13df PushV
	var_674_string = "b10q01"; // 0x13e0 MovS
	func_4702(var_673_int, var_674_string); // 0x13e1 NEW_2
	var_675_int = 4; // 0x13e3 PushI
	var_676_bool = var_673_int == var_675_int; // 0x13e4 Eq
	if(var_676_bool == 0) goto Label_5096; // 0x13e5 JumpB
	var_671_bool = 1; // 0x13e6 MovB
	return 0; // 0x13e7 Return
	
Label_5096:
	var_671_bool = 0; // 0x13e8 MovB
	return 0; // 0x13e9 Return
}


func_993(var_0_object, var_1_object, var_2_object, var_3_string, var_320_object, var_321_object)
{
	var_0_object = var_321_object; // 0x3e2 TMov
	var_1_object = var_320_object; // 0x3e3 TMov
	var_3_string = 0; // 0x3e4 TMovB
	var_326_int = 1; // 0x3e5 PushI
	if(var_326_int == 0) goto Label_1081; // 0x3e6 JumpB
	var_327_bool = 0; var_328_object = Obj(); // 0x3e7 PushV
	var_328_object = var_1_object; // 0x3e8 MovT
	func_5199(var_328_object); // 0x3e9 NEW_2
	if(var_327_bool == 0) goto Label_1024; // 0x3eb JumpB
	var_335_string = ""; // 0x3ec PushV
	var_335_string = "Neutral"; // 0x3ed MovS
	func_1111(var_321_object, var_335_string); // 0x3ee NEW_2
	var_343_int = 520279; // 0x3f0 PushI
	SetMessage(var_343_int); // 0x3f1 TObjFunc
	ClearReplies(); // 0x3f3 TObjFunc
	var_344_int = 520280; // 0x3f5 PushI
	var_345_int = 21473; // 0x3f6 PushI
	var_346_int = 21472; // 0x3f7 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x3f8 TObjFunc
	var_347_int = 520299; // 0x3fa PushI
	var_348_int = 21475; // 0x3fb PushI
	var_349_int = 21493; // 0x3fc PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x3fd TObjFunc
	goto Label_1081; // 0x3ff Jump
	
Label_1081:
	var_350_bool = 0; // 0x439 PushV
	func_4826(var_350_bool); // 0x43a NEW_2
	if(var_350_bool == 0) goto Label_1096; // 0x43c JumpB
	
Label_1085:
	lshWaitForAnimEnd(); // 0x43d Func
	var_351_string = var_3_string; // 0x43f PushT
	if(var_351_string == 0) goto Label_1090; // 0x440 JumpB
	goto Label_1095; // 0x441 Jump
	
Label_1095:
	goto Label_1110; // 0x447 Jump
	
Label_1110:
	return 0; // 0x456 Return
	
Label_1090:
	var_352_string = ""; // 0x442 PushV
	var_352_string = var_2_object; // 0x443 MovT
	func_4633(var_352_string); // 0x444 NEW_2
	goto Label_1085; // 0x446 Jump
	
Label_1096:
	var_353_string = "all"; // 0x448 PushS
	var_354_string = "idle"; // 0x449 PushS
	PlayAnimation(var_353_string, var_354_string); // 0x44a Func
	
Label_1100:
	WaitForAnimEnd(); // 0x44c Func
	var_355_string = var_3_string; // 0x44e PushT
	if(var_355_string == 0) goto Label_1105; // 0x44f JumpB
	goto Label_1110; // 0x450 Jump
	
Label_1105:
	var_356_string = "all"; // 0x451 PushS
	var_357_string = "idle"; // 0x452 PushS
	PlayAnimation(var_356_string, var_357_string); // 0x453 Func
	goto Label_1100; // 0x455 Jump
	
Label_1024:
	var_358_string = ""; // 0x400 PushV
	var_358_string = "Neutral"; // 0x401 MovS
	func_1111(var_321_object, var_358_string); // 0x402 NEW_2
	var_359_int = 520300; // 0x404 PushI
	SetMessage(var_359_int); // 0x405 TObjFunc
	ClearReplies(); // 0x407 TObjFunc
	var_360_bool = 0; var_361_object = Obj(); // 0x409 PushV
	var_361_object = var_1_object; // 0x40a MovT
	func_5211(var_361_object); // 0x40b NEW_2
	if(var_360_bool == 0) goto Label_1043; // 0x40d JumpB
	var_366_int = 520301; // 0x40e PushI
	var_367_int = 21497; // 0x40f PushI
	var_368_int = 21496; // 0x410 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x411 TObjFunc
	
Label_1043:
	var_369_bool = 0; var_370_object = Obj(); // 0x413 PushV
	var_370_object = var_1_object; // 0x414 MovT
	func_5223(var_370_object); // 0x415 NEW_2
	if(var_369_bool == 0) goto Label_1053; // 0x417 JumpB
	var_375_int = 520317; // 0x418 PushI
	var_376_int = 21513; // 0x419 PushI
	var_377_int = 21512; // 0x41a PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x41b TObjFunc
	
Label_1053:
	var_378_bool = 0; var_379_object = Obj(); // 0x41d PushV
	var_379_object = var_1_object; // 0x41e MovT
	func_5235(var_379_object); // 0x41f NEW_2
	if(var_378_bool == 0) goto Label_1063; // 0x421 JumpB
	var_384_int = 520324; // 0x422 PushI
	var_385_int = 21520; // 0x423 PushI
	var_386_int = 21519; // 0x424 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x425 TObjFunc
	
Label_1063:
	var_387_bool = 0; var_388_object = Obj(); // 0x427 PushV
	var_388_object = var_1_object; // 0x428 MovT
	func_5247(var_388_object); // 0x429 NEW_2
	if(var_387_bool == 0) goto Label_1073; // 0x42b JumpB
	var_393_int = 520327; // 0x42c PushI
	var_394_int = 21523; // 0x42d PushI
	var_395_int = 21522; // 0x42e PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x42f TObjFunc
	
Label_1073:
	var_396_int = 520330; // 0x431 PushI
	var_397_int = -1; // 0x432 PushI
	var_398_int = 21525; // 0x433 PushI
	AddReply(var_396_int, var_397_int, var_398_int); // 0x434 TObjFunc
	goto Label_1081; // 0x436 Jump
}


func_4834()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x12e2 PushV
	var_62_int = 0; var_63_string = ""; // 0x12e3 PushV
	var_63_string = "b5q01PlaceButchers"; // 0x12e4 MovS
	func_4702(var_62_int, var_63_string); // 0x12e5 NEW_2
	var_66_int = 0; // 0x12e7 PushI
	var_67_bool = var_62_int == var_66_int; // 0x12e8 Eq
	if(var_67_bool == 0) goto Label_4865; // 0x12e9 JumpB
	var_68_string = "b5q01PlaceButchers"; // 0x12ea PushS
	var_69_int = 1; // 0x12eb PushI
	SetVariable(var_68_string, var_69_int); // 0x12ec Func
	var_70_object = Obj(); // 0x12ee PushV
	func_5352(var_70_object); // 0x12ef NEW_2
	var_61_object = var_70_object; // 0x12f0 Mov
	var_77_string = "b5q01GathererWife"; // 0x12f2 PushS
	var_78_string = "pt_gatherer3"; // 0x12f3 PushS
	var_79_int = 1; // 0x12f4 PushI
	var_80_int = 530181; // 0x12f5 PushI
	var_81_float = 0; // 0x12f6 PushV
	func_4774(var_81_float); // 0x12f7 NEW_2
	AddMark(var_77_string, var_78_string, var_79_int, var_80_int, var_81_float); // 0x12f9 ObjFunc
	var_84_bool = 0; var_85_string = ""; var_86_string = ""; // 0x12fb PushV
	var_85_string = "quest_b5_01"; // 0x12fc MovS
	var_86_string = "place_butchers"; // 0x12fd MovS
	func_4762(var_84_bool, var_85_string, var_86_string); // 0x12fe NEW_2
	var_61_object = 0; // 0x1300 SetNull
	
Label_4865:
	return 2; // 0x1301 Return
}


func_5352(var_104_object)
{
	var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj(); var_108_object = Obj(); // 0x14e8 PushV
	GetMainOutdoorScene(var_107_object); // 0x14e9 Func
	var_109_bool = var_107_object == 0; // 0x14eb NullEq
	if(var_109_bool == 0) goto Label_5363; // 0x14ec JumpB
	var_110_string = "Can't find main outdoor scene"; // 0x14ed PushS
	Trace(var_110_string); // 0x14ee Func
	var_108_object = 0; // 0x14f0 SetNull
	var_104_object = var_108_object; // 0x14f1 Mov
	return 4; // 0x14f2 Return
	
Label_5363:
	GetMap(var_108_object); // 0x14f3 ObjFunc
	var_104_object = var_108_object; // 0x14f5 Mov
	return 4; // 0x14f6 Return
}


func_5098(var_662_bool)
{
	var_664_int = 0; var_665_string = ""; // 0x13eb PushV
	var_665_string = "b10q01"; // 0x13ec MovS
	func_4702(var_664_int, var_665_string); // 0x13ed NEW_2
	var_666_int = 1000; // 0x13ef PushI
	var_667_bool = var_664_int == var_666_int; // 0x13f0 Eq
	if(var_667_bool == 0) goto Label_5108; // 0x13f1 JumpB
	var_662_bool = 1; // 0x13f2 MovB
	return 0; // 0x13f3 Return
	
Label_5108:
	var_662_bool = 0; // 0x13f4 MovB
	return 0; // 0x13f5 Return
}


func_2795(var_0_object, var_1_object, var_2_object, var_3_string, var_644_object, var_645_object)
{
	var_0_object = var_645_object; // 0xaec TMov
	var_1_object = var_644_object; // 0xaed TMov
	var_3_string = 0; // 0xaee TMovB
	var_650_int = 1; // 0xaef PushI
	if(var_650_int == 0) goto Label_2855; // 0xaf0 JumpB
	var_651_string = ""; // 0xaf1 PushV
	var_651_string = "Neutral"; // 0xaf2 MovS
	func_2885(var_645_object, var_651_string); // 0xaf3 NEW_2
	var_659_int = 521945; // 0xaf5 PushI
	SetMessage(var_659_int); // 0xaf6 TObjFunc
	ClearReplies(); // 0xaf8 TObjFunc
	var_660_bool = 0; // 0xafa PushV
	var_660_bool = 1; // 0xafb MovB
	var_661_bool = 0; // 0xafc PushV
	var_661_bool = 0; // 0xafd MovB
	var_662_bool = 0; var_663_object = Obj(); // 0xafe PushV
	var_663_object = var_1_object; // 0xaff MovT
	func_5098(var_663_object); // 0xb00 NEW_2
	if(var_662_bool == 0) goto Label_2825; // 0xb02 JumpB
	var_668_bool = 0; var_669_object = Obj(); // 0xb03 PushV
	var_669_object = var_1_object; // 0xb04 MovT
	func_5110(var_669_object); // 0xb05 NEW_2
	if(var_668_bool == 0) goto Label_2825; // 0xb07 JumpB
	var_661_bool = 1; // 0xb08 MovB
	
Label_2825:
	if(var_661_bool == 0) goto Label_2841; // 0xb09 JumpB
	var_670_bool = 0; // 0xb0a PushV
	var_670_bool = 0; // 0xb0b MovB
	var_671_bool = 0; var_672_object = Obj(); // 0xb0c PushV
	var_672_object = var_1_object; // 0xb0d MovT
	func_5086(var_672_object); // 0xb0e NEW_2
	if(var_671_bool == 0) goto Label_2839; // 0xb10 JumpB
	var_677_bool = 0; var_678_object = Obj(); // 0xb11 PushV
	var_678_object = var_1_object; // 0xb12 MovT
	func_5110(var_678_object); // 0xb13 NEW_2
	if(var_677_bool == 0) goto Label_2839; // 0xb15 JumpB
	var_670_bool = 1; // 0xb16 MovB
	
Label_2839:
	if(var_670_bool == 0) goto Label_2841; // 0xb17 JumpB
	var_660_bool = 0; // 0xb18 MovB
	
Label_2841:
	if(var_660_bool == 0) goto Label_2847; // 0xb19 JumpB
	var_679_int = 521946; // 0xb1a PushI
	var_680_int = 23122; // 0xb1b PushI
	var_681_int = 23120; // 0xb1c PushI
	AddReply(var_679_int, var_680_int, var_681_int); // 0xb1d TObjFunc
	
Label_2847:
	var_682_int = 521947; // 0xb1f PushI
	var_683_int = -1; // 0xb20 PushI
	var_684_int = 23121; // 0xb21 PushI
	AddReply(var_682_int, var_683_int, var_684_int); // 0xb22 TObjFunc
	goto Label_2855; // 0xb24 Jump
	
Label_2855:
	var_685_bool = 0; // 0xb27 PushV
	func_4826(var_685_bool); // 0xb28 NEW_2
	if(var_685_bool == 0) goto Label_2870; // 0xb2a JumpB
	
Label_2859:
	lshWaitForAnimEnd(); // 0xb2b Func
	var_686_string = var_3_string; // 0xb2d PushT
	if(var_686_string == 0) goto Label_2864; // 0xb2e JumpB
	goto Label_2869; // 0xb2f Jump
	
Label_2869:
	goto Label_2884; // 0xb35 Jump
	
Label_2884:
	return 0; // 0xb44 Return
	
Label_2864:
	var_687_string = ""; // 0xb30 PushV
	var_687_string = var_2_object; // 0xb31 MovT
	func_4633(var_687_string); // 0xb32 NEW_2
	goto Label_2859; // 0xb34 Jump
	
Label_2870:
	var_688_string = "all"; // 0xb36 PushS
	var_689_string = "idle"; // 0xb37 PushS
	PlayAnimation(var_688_string, var_689_string); // 0xb38 Func
	
Label_2874:
	WaitForAnimEnd(); // 0xb3a Func
	var_690_string = var_3_string; // 0xb3c PushT
	if(var_690_string == 0) goto Label_2879; // 0xb3d JumpB
	goto Label_2884; // 0xb3e Jump
	
Label_2879:
	var_691_string = "all"; // 0xb3f PushS
	var_692_string = "idle"; // 0xb40 PushS
	PlayAnimation(var_691_string, var_692_string); // 0xb41 Func
	goto Label_2874; // 0xb43 Jump
}


func_4590(var_181_bool)
{
	var_183_string = ""; var_184_int = 0; var_185_bool = 0; var_186_int = 0; var_187_string = ""; var_188_string = ""; var_189_int = 0; var_190_bool = 0; var_191_int = 0; var_192_string = ""; // 0x11ee PushV
	var_193_string = "d"; // 0x11ef PushS
	var_194_int = 0; // 0x11f0 PushV
	func_4779(var_194_int); // 0x11f1 NEW_2
	var_200_int = var_193_string + var_194_int; // 0x11f3 Add
	var_201_string = "m"; // 0x11f4 PushS
	var_188_string = var_200_int + var_201_string; // 0x11f5 Add2
	var_189_int = 0; // 0x11f6 MovI
	
Label_4599:
	var_202_int = 1; // 0x11f7 PushI
	if(var_202_int == 0) goto Label_4612; // 0x11f8 JumpB
	var_203_int = 1; // 0x11f9 PushI
	var_204_int = var_189_int + var_203_int; // 0x11fa Add
	var_205_int = var_188_string + var_204_int; // 0x11fb Add
	HasProperty(var_205_int, var_190_bool); // 0x11fc ObjFunc
	var_206_bool = var_190_bool == 0; // 0x11fe Not
	if(var_206_bool == 0) goto Label_4609; // 0x11ff JumpB
	goto Label_4612; // 0x1200 Jump
	
Label_4612:
	var_207_bool = var_189_int == 0; // 0x1204 Not
	if(var_207_bool == 0) goto Label_4616; // 0x1205 JumpB
	var_181_bool = 0; // 0x1206 MovB
	return 10; // 0x1207 Return
	
Label_4616:
	var_191_int = 0; // 0x1208 MovI
	var_208_int = 1; // 0x1209 PushI
	var_209_bool = var_189_int > var_208_int; // 0x120a GT
	if(var_209_bool == 0) goto Label_4622; // 0x120b JumpB
	irand(var_191_int, var_189_int); // 0x120c Func
	
Label_4622:
	var_210_int = 1; // 0x120e PushI
	var_211_int = var_191_int + var_210_int; // 0x120f Add
	var_212_int = var_188_string + var_211_int; // 0x1210 Add
	GetProperty(var_212_int, var_192_string); // 0x1211 ObjFunc
	var_213_bool = 0; var_214_string = ""; // 0x1213 PushV
	var_214_string = var_192_string; // 0x1214 Mov
	func_4664(var_213_bool, var_214_string); // 0x1215 NEW_2
	var_181_bool = var_213_bool; // 0x1216 Mov
	return 10; // 0x1218 Return
	
Label_4609:
	var_215_int = 1; // 0x1201 PushI
	var_189_int = var_189_int + var_215_int; // 0x1202 Add2
	goto Label_4599; // 0x1203 Jump
}


func_5110(var_668_bool)
{
	var_668_bool = 1; // 0x13f7 MovB
	return 0; // 0x13f8 Return
}


func_5369(var_103_object, var_104_string, var_105_float)
{
	var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_object = Obj(); var_110_bool = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_object = Obj(); var_114_bool = 0; // 0x14f9 PushV
	GetMainOutdoorScene(var_113_object); // 0x14fa Func
	var_115_bool = var_113_object == 0; // 0x14fc NullEq
	if(var_115_bool == 0) goto Label_5378; // 0x14fd JumpB
	var_116_string = "Can't find main outdoor scene"; // 0x14fe PushS
	Trace(var_116_string); // 0x14ff Func
	return 8; // 0x1501 Return
	
Label_5378:
	GetLocator(var_104_string, var_114_bool, var_111_cvector, var_112_cvector); // 0x1502 ObjFunc
	var_117_bool = var_114_bool == 0; // 0x1504 Not
	if(var_117_bool == 0) goto Label_5388; // 0x1505 JumpB
	var_118_string = "Warning: outdoor scene locator "; // 0x1506 PushS
	var_119_int = var_118_string + var_104_string; // 0x1507 Add
	var_120_string = " doesnt exist"; // 0x1508 PushS
	var_121_int = var_119_int + var_120_string; // 0x1509 Add
	Trace(var_121_int); // 0x150a Func
	
Label_5388:
	GetMap(var_103_object); // 0x150c ObjFunc
	var_122_bool = var_103_object == 0; // 0x150e NullEq
	if(var_122_bool == 0) goto Label_5396; // 0x150f JumpB
	var_123_string = "Can't find map"; // 0x1510 PushS
	Trace(var_123_string); // 0x1511 Func
	return 8; // 0x1513 Return
	
Label_5396:
	var_124_float = GetByIndex(var_111_cvector, 0); // 0x1514 PushE
	var_125_float = GetByIndex(var_111_cvector, 2); // 0x1515 PushE
	SetMapParams(var_124_float, var_125_float, var_105_float); // 0x1516 ObjFunc
	return 8; // 0x1518 Return
}


func_5115(var_753_bool)
{
	var_755_int = 0; var_756_string = ""; // 0x13fc PushV
	var_756_string = "b11q01"; // 0x13fd MovS
	func_4702(var_755_int, var_756_string); // 0x13fe NEW_2
	var_757_int = 1000; // 0x1400 PushI
	var_758_bool = var_755_int == var_757_int; // 0x1401 Eq
	if(var_758_bool == 0) goto Label_5125; // 0x1402 JumpB
	var_753_bool = 1; // 0x1403 MovB
	return 0; // 0x1404 Return
	
Label_5125:
	var_753_bool = 0; // 0x1405 MovB
	return 0; // 0x1406 Return
}


