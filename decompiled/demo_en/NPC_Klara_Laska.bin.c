task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xdf PushI
	if(var_38_int == 0) goto Label_650; // 0xe0 JumpB
	func_3315(); // 0xe2 NEW_2
	var_40_int = 26672; // 0xe4 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0xe5 Eq
	if(var_41_bool == 0) goto Label_241; // 0xe6 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xe7 PushV
	var_42_object = var_1_object; // 0xe8 MovT
	var_43_object = var_0_object; // 0xe9 MovT
	func_3466(); // 0xea NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0xec PushV
	var_77_object = var_1_object; // 0xed MovT
	var_78_object = var_0_object; // 0xee MovT
	func_3569(); // 0xef NEW_2
	
Label_241:
	var_81_int = 30634; // 0xf1 PushI
	var_82_bool = var_37_cvector == var_81_int; // 0xf2 Eq
	if(var_82_bool == 0) goto Label_254; // 0xf3 JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0xf4 PushV
	var_83_object = var_1_object; // 0xf5 MovT
	var_84_object = var_0_object; // 0xf6 MovT
	func_3466(); // 0xf7 NEW_2
	var_85_object = Obj(); var_86_object = Obj(); // 0xf9 PushV
	var_85_object = var_1_object; // 0xfa MovT
	var_86_object = var_0_object; // 0xfb MovT
	func_3569(); // 0xfc NEW_2
	
Label_254:
	var_87_int = 26678; // 0xfe PushI
	var_88_bool = var_37_cvector == var_87_int; // 0xff Eq
	if(var_88_bool == 0) goto Label_262; // 0x100 JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0x101 PushV
	var_89_object = var_1_object; // 0x102 MovT
	var_90_object = var_0_object; // 0x103 MovT
	func_3487(); // 0x104 NEW_2
	
Label_262:
	var_93_int = 26665; // 0x106 PushI
	var_94_bool = var_36_bool == var_93_int; // 0x107 Eq
	if(var_94_bool == 0) goto Label_346; // 0x108 JumpB
	var_95_string = ""; // 0x109 PushV
	var_95_string = "Neutral"; // 0x10a MovS
	func_200(var_37_cvector, var_95_string); // 0x10b NEW_2
	var_112_int = 525297; // 0x10d PushI
	SetMessage(var_112_int); // 0x10e TObjFunc
	ClearReplies(); // 0x110 TObjFunc
	var_113_bool = 0; // 0x112 PushV
	var_113_bool = 1; // 0x113 MovB
	var_114_bool = 0; // 0x114 PushV
	var_114_bool = 0; // 0x115 MovB
	var_115_bool = 0; var_116_object = Obj(); // 0x116 PushV
	var_116_object = var_1_object; // 0x117 MovT
	func_3641(var_115_bool, var_116_object); // 0x118 NEW_2
	if(var_115_bool == 0) goto Label_289; // 0x11a JumpB
	var_132_bool = 0; var_133_object = Obj(); // 0x11b PushV
	var_133_object = var_1_object; // 0x11c MovT
	func_3617(var_133_object); // 0x11d NEW_2
	if(var_132_bool == 0) goto Label_289; // 0x11f JumpB
	var_114_bool = 1; // 0x120 MovB
	
Label_289:
	if(var_114_bool == 0) goto Label_305; // 0x121 JumpB
	var_140_bool = 0; // 0x122 PushV
	var_140_bool = 0; // 0x123 MovB
	var_141_bool = 0; var_142_object = Obj(); // 0x124 PushV
	var_142_object = var_1_object; // 0x125 MovT
	func_3629(var_142_object); // 0x126 NEW_2
	if(var_141_bool == 0) goto Label_303; // 0x128 JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0x129 PushV
	var_148_object = var_1_object; // 0x12a MovT
	func_3641(var_147_bool, var_148_object); // 0x12b NEW_2
	if(var_147_bool == 0) goto Label_303; // 0x12d JumpB
	var_140_bool = 1; // 0x12e MovB
	
Label_303:
	if(var_140_bool == 0) goto Label_305; // 0x12f JumpB
	var_113_bool = 0; // 0x130 MovB
	
Label_305:
	if(var_113_bool == 0) goto Label_311; // 0x131 JumpB
	var_149_int = 525298; // 0x132 PushI
	var_150_int = 26667; // 0x133 PushI
	var_151_int = 26666; // 0x134 PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x135 TObjFunc
	
Label_311:
	var_152_bool = 0; // 0x137 PushV
	var_152_bool = 0; // 0x138 MovB
	var_153_bool = 0; // 0x139 PushV
	var_153_bool = 0; // 0x13a MovB
	var_154_bool = 0; var_155_object = Obj(); // 0x13b PushV
	var_155_object = var_1_object; // 0x13c MovT
	func_3617(var_155_object); // 0x13d NEW_2
	if(var_154_bool == 0) goto Label_327; // 0x13f JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x140 PushV
	var_157_object = var_1_object; // 0x141 MovT
	func_3641(var_156_bool, var_157_object); // 0x142 NEW_2
	var_158_bool = var_156_bool == 0; // 0x144 Not
	if(var_158_bool == 0) goto Label_327; // 0x145 JumpB
	var_153_bool = 1; // 0x146 MovB
	
Label_327:
	if(var_153_bool == 0) goto Label_334; // 0x147 JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x148 PushV
	var_160_object = var_1_object; // 0x149 MovT
	func_3672(var_160_object); // 0x14a NEW_2
	if(var_159_bool == 0) goto Label_334; // 0x14c JumpB
	var_152_bool = 1; // 0x14d MovB
	
Label_334:
	if(var_152_bool == 0) goto Label_340; // 0x14e JumpB
	var_165_int = 525310; // 0x14f PushI
	var_166_int = 26679; // 0x150 PushI
	var_167_int = 26678; // 0x151 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x152 TObjFunc
	
Label_340:
	var_168_int = 525305; // 0x154 PushI
	var_169_int = -1; // 0x155 PushI
	var_170_int = 26673; // 0x156 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_171_int = 26679; // 0x15a PushI
	var_172_bool = var_36_bool == var_171_int; // 0x15b Eq
	if(var_172_bool == 0) goto Label_369; // 0x15c JumpB
	var_173_string = ""; // 0x15d PushV
	var_173_string = "Disturbance"; // 0x15e MovS
	func_200(var_37_cvector, var_173_string); // 0x15f NEW_2
	var_174_int = 525311; // 0x161 PushI
	SetMessage(var_174_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_175_int = 525312; // 0x166 PushI
	var_176_int = 42889; // 0x167 PushI
	var_177_int = 26680; // 0x168 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x169 TObjFunc
	var_178_int = 540831; // 0x16b PushI
	var_179_int = -1; // 0x16c PushI
	var_180_int = 42888; // 0x16d PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x16e TObjFunc
	return 0; // 0x170 Return
	
Label_369:
	var_181_int = 42889; // 0x171 PushI
	var_182_bool = var_36_bool == var_181_int; // 0x172 Eq
	if(var_182_bool == 0) goto Label_392; // 0x173 JumpB
	var_183_string = ""; // 0x174 PushV
	var_183_string = "Pain"; // 0x175 MovS
	func_200(var_37_cvector, var_183_string); // 0x176 NEW_2
	var_184_int = 540832; // 0x178 PushI
	SetMessage(var_184_int); // 0x179 TObjFunc
	ClearReplies(); // 0x17b TObjFunc
	var_185_int = 540833; // 0x17d PushI
	var_186_int = -1; // 0x17e PushI
	var_187_int = 42890; // 0x17f PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x180 TObjFunc
	var_188_int = 540834; // 0x182 PushI
	var_189_int = -1; // 0x183 PushI
	var_190_int = 42891; // 0x184 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x185 TObjFunc
	return 0; // 0x187 Return
	
Label_392:
	var_191_int = 26667; // 0x188 PushI
	var_192_bool = var_36_bool == var_191_int; // 0x189 Eq
	if(var_192_bool == 0) goto Label_415; // 0x18a JumpB
	var_193_string = ""; // 0x18b PushV
	var_193_string = "Autizm"; // 0x18c MovS
	func_200(var_37_cvector, var_193_string); // 0x18d NEW_2
	var_194_int = 525299; // 0x18f PushI
	SetMessage(var_194_int); // 0x190 TObjFunc
	ClearReplies(); // 0x192 TObjFunc
	var_195_int = 529180; // 0x194 PushI
	var_196_int = 30631; // 0x195 PushI
	var_197_int = 30630; // 0x196 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x197 TObjFunc
	var_198_int = 540812; // 0x199 PushI
	var_199_int = 30633; // 0x19a PushI
	var_200_int = 42864; // 0x19b PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x19c TObjFunc
	return 0; // 0x19e Return
	
Label_415:
	var_201_int = 30631; // 0x19f PushI
	var_202_bool = var_36_bool == var_201_int; // 0x1a0 Eq
	if(var_202_bool == 0) goto Label_433; // 0x1a1 JumpB
	var_203_string = ""; // 0x1a2 PushV
	var_203_string = "Autizm"; // 0x1a3 MovS
	func_200(var_37_cvector, var_203_string); // 0x1a4 NEW_2
	var_204_int = 529181; // 0x1a6 PushI
	SetMessage(var_204_int); // 0x1a7 TObjFunc
	ClearReplies(); // 0x1a9 TObjFunc
	var_205_int = 529182; // 0x1ab PushI
	var_206_int = 30633; // 0x1ac PushI
	var_207_int = 30632; // 0x1ad PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1ae TObjFunc
	return 0; // 0x1b0 Return
	
Label_433:
	var_208_int = 30633; // 0x1b1 PushI
	var_209_bool = var_36_bool == var_208_int; // 0x1b2 Eq
	if(var_209_bool == 0) goto Label_456; // 0x1b3 JumpB
	var_210_string = ""; // 0x1b4 PushV
	var_210_string = "Welldie"; // 0x1b5 MovS
	func_200(var_37_cvector, var_210_string); // 0x1b6 NEW_2
	var_211_int = 529183; // 0x1b8 PushI
	SetMessage(var_211_int); // 0x1b9 TObjFunc
	ClearReplies(); // 0x1bb TObjFunc
	var_212_int = 525300; // 0x1bd PushI
	var_213_int = 26669; // 0x1be PushI
	var_214_int = 26668; // 0x1bf PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1c0 TObjFunc
	var_215_int = 540813; // 0x1c2 PushI
	var_216_int = 42867; // 0x1c3 PushI
	var_217_int = 42866; // 0x1c4 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x1c5 TObjFunc
	return 0; // 0x1c7 Return
	
Label_456:
	var_218_int = 42867; // 0x1c8 PushI
	var_219_bool = var_36_bool == var_218_int; // 0x1c9 Eq
	if(var_219_bool == 0) goto Label_479; // 0x1ca JumpB
	var_220_string = ""; // 0x1cb PushV
	var_220_string = "Disturbance"; // 0x1cc MovS
	func_200(var_37_cvector, var_220_string); // 0x1cd NEW_2
	var_221_int = 540814; // 0x1cf PushI
	SetMessage(var_221_int); // 0x1d0 TObjFunc
	ClearReplies(); // 0x1d2 TObjFunc
	var_222_int = 540819; // 0x1d4 PushI
	var_223_int = 26669; // 0x1d5 PushI
	var_224_int = 42872; // 0x1d6 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1d7 TObjFunc
	var_225_int = 540820; // 0x1d9 PushI
	var_226_int = 42875; // 0x1da PushI
	var_227_int = 42874; // 0x1db PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x1dc TObjFunc
	return 0; // 0x1de Return
	
Label_479:
	var_228_int = 42875; // 0x1df PushI
	var_229_bool = var_36_bool == var_228_int; // 0x1e0 Eq
	if(var_229_bool == 0) goto Label_497; // 0x1e1 JumpB
	var_230_string = ""; // 0x1e2 PushV
	var_230_string = "Neutral"; // 0x1e3 MovS
	func_200(var_37_cvector, var_230_string); // 0x1e4 NEW_2
	var_231_int = 540821; // 0x1e6 PushI
	SetMessage(var_231_int); // 0x1e7 TObjFunc
	ClearReplies(); // 0x1e9 TObjFunc
	var_232_int = 540822; // 0x1eb PushI
	var_233_int = 42868; // 0x1ec PushI
	var_234_int = 42876; // 0x1ed PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x1ee TObjFunc
	return 0; // 0x1f0 Return
	
Label_497:
	var_235_int = 26669; // 0x1f1 PushI
	var_236_bool = var_36_bool == var_235_int; // 0x1f2 Eq
	if(var_236_bool == 0) goto Label_520; // 0x1f3 JumpB
	var_237_string = ""; // 0x1f4 PushV
	var_237_string = "Welldie"; // 0x1f5 MovS
	func_200(var_37_cvector, var_237_string); // 0x1f6 NEW_2
	var_238_int = 525301; // 0x1f8 PushI
	SetMessage(var_238_int); // 0x1f9 TObjFunc
	ClearReplies(); // 0x1fb TObjFunc
	var_239_int = 525302; // 0x1fd PushI
	var_240_int = 42868; // 0x1fe PushI
	var_241_int = 26670; // 0x1ff PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x200 TObjFunc
	var_242_int = 540826; // 0x202 PushI
	var_243_int = 42882; // 0x203 PushI
	var_244_int = 42881; // 0x204 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x205 TObjFunc
	return 0; // 0x207 Return
	
Label_520:
	var_245_int = 42882; // 0x208 PushI
	var_246_bool = var_36_bool == var_245_int; // 0x209 Eq
	if(var_246_bool == 0) goto Label_538; // 0x20a JumpB
	var_247_string = ""; // 0x20b PushV
	var_247_string = "Welldie"; // 0x20c MovS
	func_200(var_37_cvector, var_247_string); // 0x20d NEW_2
	var_248_int = 540827; // 0x20f PushI
	SetMessage(var_248_int); // 0x210 TObjFunc
	ClearReplies(); // 0x212 TObjFunc
	var_249_int = 540828; // 0x214 PushI
	var_250_int = 42879; // 0x215 PushI
	var_251_int = 42883; // 0x216 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x217 TObjFunc
	return 0; // 0x219 Return
	
Label_538:
	var_252_int = 42868; // 0x21a PushI
	var_253_bool = var_36_bool == var_252_int; // 0x21b Eq
	if(var_253_bool == 0) goto Label_561; // 0x21c JumpB
	var_254_string = ""; // 0x21d PushV
	var_254_string = "Disturbance"; // 0x21e MovS
	func_200(var_37_cvector, var_254_string); // 0x21f NEW_2
	var_255_int = 540815; // 0x221 PushI
	SetMessage(var_255_int); // 0x222 TObjFunc
	ClearReplies(); // 0x224 TObjFunc
	var_256_int = 540816; // 0x226 PushI
	var_257_int = 42870; // 0x227 PushI
	var_258_int = 42869; // 0x228 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x229 TObjFunc
	var_259_int = 540823; // 0x22b PushI
	var_260_int = 42879; // 0x22c PushI
	var_261_int = 42878; // 0x22d PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x22e TObjFunc
	return 0; // 0x230 Return
	
Label_561:
	var_262_int = 42879; // 0x231 PushI
	var_263_bool = var_36_bool == var_262_int; // 0x232 Eq
	if(var_263_bool == 0) goto Label_579; // 0x233 JumpB
	var_264_string = ""; // 0x234 PushV
	var_264_string = "Neutral"; // 0x235 MovS
	func_200(var_37_cvector, var_264_string); // 0x236 NEW_2
	var_265_int = 540824; // 0x238 PushI
	SetMessage(var_265_int); // 0x239 TObjFunc
	ClearReplies(); // 0x23b TObjFunc
	var_266_int = 540825; // 0x23d PushI
	var_267_int = 42870; // 0x23e PushI
	var_268_int = 42880; // 0x23f PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x240 TObjFunc
	return 0; // 0x242 Return
	
Label_579:
	var_269_int = 42870; // 0x243 PushI
	var_270_bool = var_36_bool == var_269_int; // 0x244 Eq
	if(var_270_bool == 0) goto Label_597; // 0x245 JumpB
	var_271_string = ""; // 0x246 PushV
	var_271_string = "Pain"; // 0x247 MovS
	func_200(var_37_cvector, var_271_string); // 0x248 NEW_2
	var_272_int = 540817; // 0x24a PushI
	SetMessage(var_272_int); // 0x24b TObjFunc
	ClearReplies(); // 0x24d TObjFunc
	var_273_int = 540818; // 0x24f PushI
	var_274_int = 26671; // 0x250 PushI
	var_275_int = 42871; // 0x251 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x252 TObjFunc
	return 0; // 0x254 Return
	
Label_597:
	var_276_int = 26671; // 0x255 PushI
	var_277_bool = var_36_bool == var_276_int; // 0x256 Eq
	if(var_277_bool == 0) goto Label_620; // 0x257 JumpB
	var_278_string = ""; // 0x258 PushV
	var_278_string = "Pain"; // 0x259 MovS
	func_200(var_37_cvector, var_278_string); // 0x25a NEW_2
	var_279_int = 525303; // 0x25c PushI
	SetMessage(var_279_int); // 0x25d TObjFunc
	ClearReplies(); // 0x25f TObjFunc
	var_280_int = 525304; // 0x261 PushI
	var_281_int = -1; // 0x262 PushI
	var_282_int = 26672; // 0x263 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x264 TObjFunc
	var_283_int = 540829; // 0x266 PushI
	var_284_int = 42887; // 0x267 PushI
	var_285_int = 42886; // 0x268 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x269 TObjFunc
	return 0; // 0x26b Return
	
Label_620:
	var_286_int = 42887; // 0x26c PushI
	var_287_bool = var_36_bool == var_286_int; // 0x26d Eq
	if(var_287_bool == 0) goto Label_638; // 0x26e JumpB
	var_288_string = ""; // 0x26f PushV
	var_288_string = "Neutral"; // 0x270 MovS
	func_200(var_37_cvector, var_288_string); // 0x271 NEW_2
	var_289_int = 540830; // 0x273 PushI
	SetMessage(var_289_int); // 0x274 TObjFunc
	ClearReplies(); // 0x276 TObjFunc
	var_290_int = 529184; // 0x278 PushI
	var_291_int = -1; // 0x279 PushI
	var_292_int = 30634; // 0x27a PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x27b TObjFunc
	return 0; // 0x27d Return
	
Label_638:
	var_3_string = 1; // 0x27e TMovB
	var_293_bool = 0; // 0x27f PushV
	func_3413(var_293_bool); // 0x280 NEW_2
	if(var_293_bool == 0) goto Label_646; // 0x282 JumpB
	lshStopAnimation(); // 0x283 Func
	goto Label_648; // 0x285 Jump
	
Label_648:
	return 0; // 0x288 Return
	
Label_646:
	StopAnimation(); // 0x286 Func
	
Label_650:
	return 0; // 0x28a Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x32d PushI
	if(var_38_int == 0) goto Label_853; // 0x32e JumpB
	func_3315(); // 0x330 NEW_2
	var_40_int = 26854; // 0x332 PushI
	var_41_bool = var_36_bool == var_40_int; // 0x333 Eq
	if(var_41_bool == 0) goto Label_841; // 0x334 JumpB
	var_42_string = ""; // 0x335 PushV
	var_42_string = "Neutral"; // 0x336 MovS
	func_790(var_37_cvector, var_42_string); // 0x337 NEW_2
	var_59_int = 525498; // 0x339 PushI
	SetMessage(var_59_int); // 0x33a TObjFunc
	ClearReplies(); // 0x33c TObjFunc
	var_60_int = 525499; // 0x33e PushI
	var_61_int = -1; // 0x33f PushI
	var_62_int = 26855; // 0x340 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x341 TObjFunc
	var_63_int = 526256; // 0x343 PushI
	var_64_int = -1; // 0x344 PushI
	var_65_int = 27530; // 0x345 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x346 TObjFunc
	return 0; // 0x348 Return
	
Label_841:
	var_3_string = 1; // 0x349 TMovB
	var_66_bool = 0; // 0x34a PushV
	func_3413(var_66_bool); // 0x34b NEW_2
	if(var_66_bool == 0) goto Label_849; // 0x34d JumpB
	lshStopAnimation(); // 0x34e Func
	goto Label_851; // 0x350 Jump
	
Label_851:
	return 0; // 0x353 Return
	
Label_849:
	StopAnimation(); // 0x351 Func
	
Label_853:
	return 0; // 0x355 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x416 PushI
	if(var_38_int == 0) goto Label_1253; // 0x417 JumpB
	func_3315(); // 0x419 NEW_2
	var_40_int = 27231; // 0x41b PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x41c Eq
	if(var_41_bool == 0) goto Label_1064; // 0x41d JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x41e PushV
	var_42_object = var_1_object; // 0x41f MovT
	var_43_object = var_0_object; // 0x420 MovT
	func_3493(); // 0x421 NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0x423 PushV
	var_99_object = var_1_object; // 0x424 MovT
	var_100_object = var_0_object; // 0x425 MovT
	func_3575(); // 0x426 NEW_2
	
Label_1064:
	var_103_int = 44834; // 0x428 PushI
	var_104_bool = var_37_cvector == var_103_int; // 0x429 Eq
	if(var_104_bool == 0) goto Label_1077; // 0x42a JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x42b PushV
	var_105_object = var_1_object; // 0x42c MovT
	var_106_object = var_0_object; // 0x42d MovT
	func_3493(); // 0x42e NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x430 PushV
	var_107_object = var_1_object; // 0x431 MovT
	var_108_object = var_0_object; // 0x432 MovT
	func_3575(); // 0x433 NEW_2
	
Label_1077:
	var_109_int = 27228; // 0x435 PushI
	var_110_bool = var_36_bool == var_109_int; // 0x436 Eq
	if(var_110_bool == 0) goto Label_1130; // 0x437 JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x438 PushV
	var_112_object = var_1_object; // 0x439 MovT
	func_3684(var_112_object); // 0x43a NEW_2
	if(var_111_bool == 0) goto Label_1110; // 0x43c JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x43d PushV
	var_119_object = var_1_object; // 0x43e MovT
	var_120_object = var_0_object; // 0x43f MovT
	func_3519(); // 0x440 NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0x442 PushV
	var_123_object = var_1_object; // 0x443 MovT
	var_124_object = var_0_object; // 0x444 MovT
	func_3525(); // 0x445 NEW_2
	var_127_string = ""; // 0x447 PushV
	var_127_string = "Autizm"; // 0x448 MovS
	func_1023(var_37_cvector, var_127_string); // 0x449 NEW_2
	var_144_int = 525944; // 0x44b PushI
	SetMessage(var_144_int); // 0x44c TObjFunc
	ClearReplies(); // 0x44e TObjFunc
	var_145_int = 542433; // 0x450 PushI
	var_146_int = 44818; // 0x451 PushI
	var_147_int = 44817; // 0x452 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x453 TObjFunc
	return 0; // 0x455 Return
	
Label_1110:
	var_148_string = ""; // 0x456 PushV
	var_148_string = "Neutral"; // 0x457 MovS
	func_1023(var_37_cvector, var_148_string); // 0x458 NEW_2
	var_149_int = 525948; // 0x45a PushI
	SetMessage(var_149_int); // 0x45b TObjFunc
	ClearReplies(); // 0x45d TObjFunc
	var_150_int = 525949; // 0x45f PushI
	var_151_int = -1; // 0x460 PushI
	var_152_int = 27233; // 0x461 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0x462 TObjFunc
	var_153_int = 529092; // 0x464 PushI
	var_154_int = -1; // 0x465 PushI
	var_155_int = 30537; // 0x466 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x467 TObjFunc
	return 0; // 0x469 Return
	
Label_1130:
	var_156_int = 44824; // 0x46a PushI
	var_157_bool = var_36_bool == var_156_int; // 0x46b Eq
	if(var_157_bool == 0) goto Label_1133; // 0x46c JumpB
	
Label_1133:
	var_158_int = 44818; // 0x46d PushI
	var_159_bool = var_36_bool == var_158_int; // 0x46e Eq
	if(var_159_bool == 0) goto Label_1156; // 0x46f JumpB
	var_160_string = ""; // 0x470 PushV
	var_160_string = "Pain"; // 0x471 MovS
	func_1023(var_37_cvector, var_160_string); // 0x472 NEW_2
	var_161_int = 542434; // 0x474 PushI
	SetMessage(var_161_int); // 0x475 TObjFunc
	ClearReplies(); // 0x477 TObjFunc
	var_162_int = 542435; // 0x479 PushI
	var_163_int = 44820; // 0x47a PushI
	var_164_int = 44819; // 0x47b PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x47c TObjFunc
	var_165_int = 542437; // 0x47e PushI
	var_166_int = 44820; // 0x47f PushI
	var_167_int = 44821; // 0x480 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x481 TObjFunc
	return 0; // 0x483 Return
	
Label_1156:
	var_168_int = 44820; // 0x484 PushI
	var_169_bool = var_36_bool == var_168_int; // 0x485 Eq
	if(var_169_bool == 0) goto Label_1179; // 0x486 JumpB
	var_170_string = ""; // 0x487 PushV
	var_170_string = "Pain"; // 0x488 MovS
	func_1023(var_37_cvector, var_170_string); // 0x489 NEW_2
	var_171_int = 542436; // 0x48b PushI
	SetMessage(var_171_int); // 0x48c TObjFunc
	ClearReplies(); // 0x48e TObjFunc
	var_172_int = 529090; // 0x490 PushI
	var_173_int = 30536; // 0x491 PushI
	var_174_int = 30535; // 0x492 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x493 TObjFunc
	var_175_int = 542441; // 0x495 PushI
	var_176_int = 30536; // 0x496 PushI
	var_177_int = 44826; // 0x497 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x498 TObjFunc
	return 0; // 0x49a Return
	
Label_1179:
	var_178_int = 30536; // 0x49b PushI
	var_179_bool = var_36_bool == var_178_int; // 0x49c Eq
	if(var_179_bool == 0) goto Label_1197; // 0x49d JumpB
	var_180_string = ""; // 0x49e PushV
	var_180_string = "Neutral"; // 0x49f MovS
	func_1023(var_37_cvector, var_180_string); // 0x4a0 NEW_2
	var_181_int = 529091; // 0x4a2 PushI
	SetMessage(var_181_int); // 0x4a3 TObjFunc
	ClearReplies(); // 0x4a5 TObjFunc
	var_182_int = 525945; // 0x4a7 PushI
	var_183_int = 27230; // 0x4a8 PushI
	var_184_int = 27229; // 0x4a9 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x4aa TObjFunc
	return 0; // 0x4ac Return
	
Label_1197:
	var_185_int = 44831; // 0x4ad PushI
	var_186_bool = var_36_bool == var_185_int; // 0x4ae Eq
	if(var_186_bool == 0) goto Label_1200; // 0x4af JumpB
	
Label_1200:
	var_187_int = 27230; // 0x4b0 PushI
	var_188_bool = var_36_bool == var_187_int; // 0x4b1 Eq
	if(var_188_bool == 0) goto Label_1218; // 0x4b2 JumpB
	var_189_string = ""; // 0x4b3 PushV
	var_189_string = "Welldie"; // 0x4b4 MovS
	func_1023(var_37_cvector, var_189_string); // 0x4b5 NEW_2
	var_190_int = 525946; // 0x4b7 PushI
	SetMessage(var_190_int); // 0x4b8 TObjFunc
	ClearReplies(); // 0x4ba TObjFunc
	var_191_int = 529093; // 0x4bc PushI
	var_192_int = 30539; // 0x4bd PushI
	var_193_int = 30538; // 0x4be PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x4bf TObjFunc
	return 0; // 0x4c1 Return
	
Label_1218:
	var_194_int = 30539; // 0x4c2 PushI
	var_195_bool = var_36_bool == var_194_int; // 0x4c3 Eq
	if(var_195_bool == 0) goto Label_1241; // 0x4c4 JumpB
	var_196_string = ""; // 0x4c5 PushV
	var_196_string = "Disturbance"; // 0x4c6 MovS
	func_1023(var_37_cvector, var_196_string); // 0x4c7 NEW_2
	var_197_int = 529094; // 0x4c9 PushI
	SetMessage(var_197_int); // 0x4ca TObjFunc
	ClearReplies(); // 0x4cc TObjFunc
	var_198_int = 525947; // 0x4ce PushI
	var_199_int = -1; // 0x4cf PushI
	var_200_int = 27231; // 0x4d0 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x4d1 TObjFunc
	var_201_int = 542445; // 0x4d3 PushI
	var_202_int = -1; // 0x4d4 PushI
	var_203_int = 44834; // 0x4d5 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x4d6 TObjFunc
	return 0; // 0x4d8 Return
	
Label_1241:
	var_3_string = 1; // 0x4d9 TMovB
	var_204_bool = 0; // 0x4da PushV
	func_3413(var_204_bool); // 0x4db NEW_2
	if(var_204_bool == 0) goto Label_1249; // 0x4dd JumpB
	lshStopAnimation(); // 0x4de Func
	goto Label_1251; // 0x4e0 Jump
	
Label_1251:
	return 0; // 0x4e3 Return
	
Label_1249:
	StopAnimation(); // 0x4e1 Func
	
Label_1253:
	return 0; // 0x4e5 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x5ab PushI
	if(var_38_int == 0) goto Label_1655; // 0x5ac JumpB
	func_3315(); // 0x5ae NEW_2
	var_40_int = 30213; // 0x5b0 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x5b1 Eq
	if(var_41_bool == 0) goto Label_1469; // 0x5b2 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x5b3 PushV
	var_42_object = var_1_object; // 0x5b4 MovT
	var_43_object = var_0_object; // 0x5b5 MovT
	func_3543(); // 0x5b6 NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0x5b8 PushV
	var_99_object = var_1_object; // 0x5b9 MovT
	var_100_object = var_0_object; // 0x5ba MovT
	func_3575(); // 0x5bb NEW_2
	
Label_1469:
	var_103_int = 44908; // 0x5bd PushI
	var_104_bool = var_37_cvector == var_103_int; // 0x5be Eq
	if(var_104_bool == 0) goto Label_1482; // 0x5bf JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x5c0 PushV
	var_105_object = var_1_object; // 0x5c1 MovT
	var_106_object = var_0_object; // 0x5c2 MovT
	func_3543(); // 0x5c3 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x5c5 PushV
	var_107_object = var_1_object; // 0x5c6 MovT
	var_108_object = var_0_object; // 0x5c7 MovT
	func_3575(); // 0x5c8 NEW_2
	
Label_1482:
	var_109_int = 30215; // 0x5ca PushI
	var_110_bool = var_36_bool == var_109_int; // 0x5cb Eq
	if(var_110_bool == 0) goto Label_1540; // 0x5cc JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x5cd PushV
	var_112_object = var_1_object; // 0x5ce MovT
	func_3696(var_112_object); // 0x5cf NEW_2
	if(var_111_bool == 0) goto Label_1520; // 0x5d1 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x5d2 PushV
	var_119_object = var_1_object; // 0x5d3 MovT
	var_120_object = var_0_object; // 0x5d4 MovT
	func_3531(); // 0x5d5 NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0x5d7 PushV
	var_123_object = var_1_object; // 0x5d8 MovT
	var_124_object = var_0_object; // 0x5d9 MovT
	func_3537(); // 0x5da NEW_2
	var_127_string = ""; // 0x5dc PushV
	var_127_string = "Disturbance"; // 0x5dd MovS
	func_1428(var_37_cvector, var_127_string); // 0x5de NEW_2
	var_144_int = 528802; // 0x5e0 PushI
	SetMessage(var_144_int); // 0x5e1 TObjFunc
	ClearReplies(); // 0x5e3 TObjFunc
	var_145_int = 526757; // 0x5e5 PushI
	var_146_int = 30208; // 0x5e6 PushI
	var_147_int = 28034; // 0x5e7 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x5e8 TObjFunc
	var_148_int = 528803; // 0x5ea PushI
	var_149_int = 30208; // 0x5eb PushI
	var_150_int = 30216; // 0x5ec PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x5ed TObjFunc
	return 0; // 0x5ef Return
	
Label_1520:
	var_151_string = ""; // 0x5f0 PushV
	var_151_string = "Neutral"; // 0x5f1 MovS
	func_1428(var_37_cvector, var_151_string); // 0x5f2 NEW_2
	var_152_int = 526758; // 0x5f4 PushI
	SetMessage(var_152_int); // 0x5f5 TObjFunc
	ClearReplies(); // 0x5f7 TObjFunc
	var_153_int = 526759; // 0x5f9 PushI
	var_154_int = -1; // 0x5fa PushI
	var_155_int = 28036; // 0x5fb PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x5fc TObjFunc
	var_156_int = 528801; // 0x5fe PushI
	var_157_int = -1; // 0x5ff PushI
	var_158_int = 30214; // 0x600 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x601 TObjFunc
	return 0; // 0x603 Return
	
Label_1540:
	var_159_int = 30208; // 0x604 PushI
	var_160_bool = var_36_bool == var_159_int; // 0x605 Eq
	if(var_160_bool == 0) goto Label_1558; // 0x606 JumpB
	var_161_string = ""; // 0x607 PushV
	var_161_string = "Disturbance"; // 0x608 MovS
	func_1428(var_37_cvector, var_161_string); // 0x609 NEW_2
	var_162_int = 528795; // 0x60b PushI
	SetMessage(var_162_int); // 0x60c TObjFunc
	ClearReplies(); // 0x60e TObjFunc
	var_163_int = 528796; // 0x610 PushI
	var_164_int = 30210; // 0x611 PushI
	var_165_int = 30209; // 0x612 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x613 TObjFunc
	return 0; // 0x615 Return
	
Label_1558:
	var_166_int = 44899; // 0x616 PushI
	var_167_bool = var_36_bool == var_166_int; // 0x617 Eq
	if(var_167_bool == 0) goto Label_1561; // 0x618 JumpB
	
Label_1561:
	var_168_int = 44902; // 0x619 PushI
	var_169_bool = var_36_bool == var_168_int; // 0x61a Eq
	if(var_169_bool == 0) goto Label_1584; // 0x61b JumpB
	var_170_string = ""; // 0x61c PushV
	var_170_string = "Autizm"; // 0x61d MovS
	func_1428(var_37_cvector, var_170_string); // 0x61e NEW_2
	var_171_int = 542512; // 0x620 PushI
	SetMessage(var_171_int); // 0x621 TObjFunc
	ClearReplies(); // 0x623 TObjFunc
	var_172_int = 542513; // 0x625 PushI
	var_173_int = 30210; // 0x626 PushI
	var_174_int = 44904; // 0x627 PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x628 TObjFunc
	var_175_int = 542514; // 0x62a PushI
	var_176_int = -1; // 0x62b PushI
	var_177_int = 44905; // 0x62c PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x62d TObjFunc
	return 0; // 0x62f Return
	
Label_1584:
	var_178_int = 30210; // 0x630 PushI
	var_179_bool = var_36_bool == var_178_int; // 0x631 Eq
	if(var_179_bool == 0) goto Label_1607; // 0x632 JumpB
	var_180_string = ""; // 0x633 PushV
	var_180_string = "Welldie"; // 0x634 MovS
	func_1428(var_37_cvector, var_180_string); // 0x635 NEW_2
	var_181_int = 528797; // 0x637 PushI
	SetMessage(var_181_int); // 0x638 TObjFunc
	ClearReplies(); // 0x63a TObjFunc
	var_182_int = 528798; // 0x63c PushI
	var_183_int = 30212; // 0x63d PushI
	var_184_int = 30211; // 0x63e PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x63f TObjFunc
	var_185_int = 542515; // 0x641 PushI
	var_186_int = 44907; // 0x642 PushI
	var_187_int = 44906; // 0x643 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x644 TObjFunc
	return 0; // 0x646 Return
	
Label_1607:
	var_188_int = 44907; // 0x647 PushI
	var_189_bool = var_36_bool == var_188_int; // 0x648 Eq
	if(var_189_bool == 0) goto Label_1625; // 0x649 JumpB
	var_190_string = ""; // 0x64a PushV
	var_190_string = "Neutral"; // 0x64b MovS
	func_1428(var_37_cvector, var_190_string); // 0x64c NEW_2
	var_191_int = 542516; // 0x64e PushI
	SetMessage(var_191_int); // 0x64f TObjFunc
	ClearReplies(); // 0x651 TObjFunc
	var_192_int = 542517; // 0x653 PushI
	var_193_int = -1; // 0x654 PushI
	var_194_int = 44908; // 0x655 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x656 TObjFunc
	return 0; // 0x658 Return
	
Label_1625:
	var_195_int = 30212; // 0x659 PushI
	var_196_bool = var_36_bool == var_195_int; // 0x65a Eq
	if(var_196_bool == 0) goto Label_1643; // 0x65b JumpB
	var_197_string = ""; // 0x65c PushV
	var_197_string = "Neutral"; // 0x65d MovS
	func_1428(var_37_cvector, var_197_string); // 0x65e NEW_2
	var_198_int = 528799; // 0x660 PushI
	SetMessage(var_198_int); // 0x661 TObjFunc
	ClearReplies(); // 0x663 TObjFunc
	var_199_int = 528800; // 0x665 PushI
	var_200_int = -1; // 0x666 PushI
	var_201_int = 30213; // 0x667 PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x668 TObjFunc
	return 0; // 0x66a Return
	
Label_1643:
	var_3_string = 1; // 0x66b TMovB
	var_202_bool = 0; // 0x66c PushV
	func_3413(var_202_bool); // 0x66d NEW_2
	if(var_202_bool == 0) goto Label_1651; // 0x66f JumpB
	lshStopAnimation(); // 0x670 Func
	goto Label_1653; // 0x672 Jump
	
Label_1653:
	return 0; // 0x675 Return
	
Label_1651:
	StopAnimation(); // 0x673 Func
	
Label_1655:
	return 0; // 0x677 Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x71f PushI
	if(var_38_int == 0) goto Label_1914; // 0x720 JumpB
	func_3315(); // 0x722 NEW_2
	var_40_int = 36960; // 0x724 PushI
	var_41_bool = var_36_bool == var_40_int; // 0x725 Eq
	if(var_41_bool == 0) goto Label_1856; // 0x726 JumpB
	var_42_string = ""; // 0x727 PushV
	var_42_string = "Neutral"; // 0x728 MovS
	func_1800(var_37_cvector, var_42_string); // 0x729 NEW_2
	var_59_int = 535284; // 0x72b PushI
	SetMessage(var_59_int); // 0x72c TObjFunc
	ClearReplies(); // 0x72e TObjFunc
	var_60_int = 535285; // 0x730 PushI
	var_61_int = 36962; // 0x731 PushI
	var_62_int = 36961; // 0x732 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x733 TObjFunc
	var_63_int = 535292; // 0x735 PushI
	var_64_int = -1; // 0x736 PushI
	var_65_int = 36968; // 0x737 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x738 TObjFunc
	var_66_int = 535293; // 0x73a PushI
	var_67_int = -1; // 0x73b PushI
	var_68_int = 36969; // 0x73c PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0x73d TObjFunc
	return 0; // 0x73f Return
	
Label_1856:
	var_69_int = 36962; // 0x740 PushI
	var_70_bool = var_36_bool == var_69_int; // 0x741 Eq
	if(var_70_bool == 0) goto Label_1879; // 0x742 JumpB
	var_71_string = ""; // 0x743 PushV
	var_71_string = "Neutral"; // 0x744 MovS
	func_1800(var_37_cvector, var_71_string); // 0x745 NEW_2
	var_72_int = 535286; // 0x747 PushI
	SetMessage(var_72_int); // 0x748 TObjFunc
	ClearReplies(); // 0x74a TObjFunc
	var_73_int = 535287; // 0x74c PushI
	var_74_int = 36964; // 0x74d PushI
	var_75_int = 36963; // 0x74e PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0x74f TObjFunc
	var_76_int = 535291; // 0x751 PushI
	var_77_int = -1; // 0x752 PushI
	var_78_int = 36967; // 0x753 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0x754 TObjFunc
	return 0; // 0x756 Return
	
Label_1879:
	var_79_int = 36964; // 0x757 PushI
	var_80_bool = var_36_bool == var_79_int; // 0x758 Eq
	if(var_80_bool == 0) goto Label_1902; // 0x759 JumpB
	var_81_string = ""; // 0x75a PushV
	var_81_string = "Neutral"; // 0x75b MovS
	func_1800(var_37_cvector, var_81_string); // 0x75c NEW_2
	var_82_int = 535288; // 0x75e PushI
	SetMessage(var_82_int); // 0x75f TObjFunc
	ClearReplies(); // 0x761 TObjFunc
	var_83_int = 535289; // 0x763 PushI
	var_84_int = -1; // 0x764 PushI
	var_85_int = 36965; // 0x765 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x766 TObjFunc
	var_86_int = 535290; // 0x768 PushI
	var_87_int = -1; // 0x769 PushI
	var_88_int = 36966; // 0x76a PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x76b TObjFunc
	return 0; // 0x76d Return
	
Label_1902:
	var_3_string = 1; // 0x76e TMovB
	var_89_bool = 0; // 0x76f PushV
	func_3413(var_89_bool); // 0x770 NEW_2
	if(var_89_bool == 0) goto Label_1910; // 0x772 JumpB
	lshStopAnimation(); // 0x773 Func
	goto Label_1912; // 0x775 Jump
	
Label_1912:
	return 0; // 0x778 Return
	
Label_1910:
	StopAnimation(); // 0x776 Func
	
Label_1914:
	return 0; // 0x77a Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x853 PushI
	if(var_38_int == 0) goto Label_2554; // 0x854 JumpB
	func_3315(); // 0x856 NEW_2
	var_40_int = 26020; // 0x858 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x859 Eq
	if(var_41_bool == 0) goto Label_2144; // 0x85a JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x85b PushV
	var_42_object = var_1_object; // 0x85c MovT
	var_43_object = var_0_object; // 0x85d MovT
	func_3437(); // 0x85e NEW_2
	
Label_2144:
	var_46_int = 26022; // 0x860 PushI
	var_47_bool = var_37_cvector == var_46_int; // 0x861 Eq
	if(var_47_bool == 0) goto Label_2157; // 0x862 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x863 PushV
	var_48_object = var_1_object; // 0x864 MovT
	var_49_object = var_0_object; // 0x865 MovT
	func_3443(); // 0x866 NEW_2
	var_91_object = Obj(); var_92_object = Obj(); // 0x868 PushV
	var_91_object = var_1_object; // 0x869 MovT
	var_92_object = var_0_object; // 0x86a MovT
	func_3415(); // 0x86b NEW_2
	
Label_2157:
	var_117_int = 43956; // 0x86d PushI
	var_118_bool = var_37_cvector == var_117_int; // 0x86e Eq
	if(var_118_bool == 0) goto Label_2170; // 0x86f JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x870 PushV
	var_119_object = var_1_object; // 0x871 MovT
	var_120_object = var_0_object; // 0x872 MovT
	func_3415(); // 0x873 NEW_2
	var_121_object = Obj(); var_122_object = Obj(); // 0x875 PushV
	var_121_object = var_1_object; // 0x876 MovT
	var_122_object = var_0_object; // 0x877 MovT
	func_3443(); // 0x878 NEW_2
	
Label_2170:
	var_123_int = 25983; // 0x87a PushI
	var_124_bool = var_36_bool == var_123_int; // 0x87b Eq
	if(var_124_bool == 0) goto Label_2247; // 0x87c JumpB
	var_125_bool = 0; // 0x87d PushV
	var_125_bool = 0; // 0x87e MovB
	var_126_bool = 0; var_127_object = Obj(); // 0x87f PushV
	var_127_object = var_1_object; // 0x880 MovT
	func_3581(var_127_object); // 0x881 NEW_2
	if(var_126_bool == 0) goto Label_2187; // 0x883 JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x884 PushV
	var_135_object = var_1_object; // 0x885 MovT
	func_3593(var_135_object); // 0x886 NEW_2
	var_140_bool = var_134_bool == 0; // 0x888 Not
	if(var_140_bool == 0) goto Label_2187; // 0x889 JumpB
	var_125_bool = 1; // 0x88a MovB
	
Label_2187:
	if(var_125_bool == 0) goto Label_2213; // 0x88b JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0x88c PushV
	var_141_object = var_1_object; // 0x88d MovT
	var_142_object = var_0_object; // 0x88e MovT
	func_3431(); // 0x88f NEW_2
	var_145_string = ""; // 0x891 PushV
	var_145_string = "Autizm"; // 0x892 MovS
	func_2108(var_37_cvector, var_145_string); // 0x893 NEW_2
	var_162_int = 524644; // 0x895 PushI
	SetMessage(var_162_int); // 0x896 TObjFunc
	ClearReplies(); // 0x898 TObjFunc
	var_163_int = 526298; // 0x89a PushI
	var_164_int = 27579; // 0x89b PushI
	var_165_int = 27578; // 0x89c PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x89d TObjFunc
	var_166_int = 526300; // 0x89f PushI
	var_167_int = 27581; // 0x8a0 PushI
	var_168_int = 27580; // 0x8a1 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x8a2 TObjFunc
	return 0; // 0x8a4 Return
	
Label_2213:
	var_169_string = ""; // 0x8a5 PushV
	var_169_string = "Neutral"; // 0x8a6 MovS
	func_2108(var_37_cvector, var_169_string); // 0x8a7 NEW_2
	var_170_int = 524648; // 0x8a9 PushI
	SetMessage(var_170_int); // 0x8aa TObjFunc
	ClearReplies(); // 0x8ac TObjFunc
	var_171_bool = 0; // 0x8ae PushV
	var_171_bool = 0; // 0x8af MovB
	var_172_bool = 0; var_173_object = Obj(); // 0x8b0 PushV
	var_173_object = var_1_object; // 0x8b1 MovT
	func_3593(var_173_object); // 0x8b2 NEW_2
	if(var_172_bool == 0) goto Label_2235; // 0x8b4 JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x8b5 PushV
	var_175_object = var_1_object; // 0x8b6 MovT
	func_3605(var_175_object); // 0x8b7 NEW_2
	if(var_174_bool == 0) goto Label_2235; // 0x8b9 JumpB
	var_171_bool = 1; // 0x8ba MovB
	
Label_2235:
	if(var_171_bool == 0) goto Label_2241; // 0x8bb JumpB
	var_180_int = 524681; // 0x8bc PushI
	var_181_int = 43988; // 0x8bd PushI
	var_182_int = 26020; // 0x8be PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x8bf TObjFunc
	
Label_2241:
	var_183_int = 524649; // 0x8c1 PushI
	var_184_int = -1; // 0x8c2 PushI
	var_185_int = 25988; // 0x8c3 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x8c4 TObjFunc
	return 0; // 0x8c6 Return
	
Label_2247:
	var_186_int = 43988; // 0x8c7 PushI
	var_187_bool = var_36_bool == var_186_int; // 0x8c8 Eq
	if(var_187_bool == 0) goto Label_2265; // 0x8c9 JumpB
	var_188_string = ""; // 0x8ca PushV
	var_188_string = "Welldie"; // 0x8cb MovS
	func_2108(var_37_cvector, var_188_string); // 0x8cc NEW_2
	var_189_int = 541782; // 0x8ce PushI
	SetMessage(var_189_int); // 0x8cf TObjFunc
	ClearReplies(); // 0x8d1 TObjFunc
	var_190_int = 541783; // 0x8d3 PushI
	var_191_int = 26021; // 0x8d4 PushI
	var_192_int = 43989; // 0x8d5 PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x8d6 TObjFunc
	return 0; // 0x8d8 Return
	
Label_2265:
	var_193_int = 43991; // 0x8d9 PushI
	var_194_bool = var_36_bool == var_193_int; // 0x8da Eq
	if(var_194_bool == 0) goto Label_2268; // 0x8db JumpB
	
Label_2268:
	var_195_int = 43994; // 0x8dc PushI
	var_196_bool = var_36_bool == var_195_int; // 0x8dd Eq
	if(var_196_bool == 0) goto Label_2286; // 0x8de JumpB
	var_197_string = ""; // 0x8df PushV
	var_197_string = "Autizm"; // 0x8e0 MovS
	func_2108(var_37_cvector, var_197_string); // 0x8e1 NEW_2
	var_198_int = 541788; // 0x8e3 PushI
	SetMessage(var_198_int); // 0x8e4 TObjFunc
	ClearReplies(); // 0x8e6 TObjFunc
	var_199_int = 541791; // 0x8e8 PushI
	var_200_int = 26021; // 0x8e9 PushI
	var_201_int = 43997; // 0x8ea PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x8eb TObjFunc
	return 0; // 0x8ed Return
	
Label_2286:
	var_202_int = 43995; // 0x8ee PushI
	var_203_bool = var_36_bool == var_202_int; // 0x8ef Eq
	if(var_203_bool == 0) goto Label_2304; // 0x8f0 JumpB
	var_204_string = ""; // 0x8f1 PushV
	var_204_string = "Pain"; // 0x8f2 MovS
	func_2108(var_37_cvector, var_204_string); // 0x8f3 NEW_2
	var_205_int = 541789; // 0x8f5 PushI
	SetMessage(var_205_int); // 0x8f6 TObjFunc
	ClearReplies(); // 0x8f8 TObjFunc
	var_206_int = 541790; // 0x8fa PushI
	var_207_int = 26021; // 0x8fb PushI
	var_208_int = 43996; // 0x8fc PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x8fd TObjFunc
	return 0; // 0x8ff Return
	
Label_2304:
	var_209_int = 26021; // 0x900 PushI
	var_210_bool = var_36_bool == var_209_int; // 0x901 Eq
	if(var_210_bool == 0) goto Label_2327; // 0x902 JumpB
	var_211_string = ""; // 0x903 PushV
	var_211_string = "Disturbance"; // 0x904 MovS
	func_2108(var_37_cvector, var_211_string); // 0x905 NEW_2
	var_212_int = 524682; // 0x907 PushI
	SetMessage(var_212_int); // 0x908 TObjFunc
	ClearReplies(); // 0x90a TObjFunc
	var_213_int = 541792; // 0x90c PushI
	var_214_int = 44001; // 0x90d PushI
	var_215_int = 44000; // 0x90e PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x90f TObjFunc
	var_216_int = 541794; // 0x911 PushI
	var_217_int = 44001; // 0x912 PushI
	var_218_int = 44002; // 0x913 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x914 TObjFunc
	return 0; // 0x916 Return
	
Label_2327:
	var_219_int = 44001; // 0x917 PushI
	var_220_bool = var_36_bool == var_219_int; // 0x918 Eq
	if(var_220_bool == 0) goto Label_2350; // 0x919 JumpB
	var_221_string = ""; // 0x91a PushV
	var_221_string = "Disturbance"; // 0x91b MovS
	func_2108(var_37_cvector, var_221_string); // 0x91c NEW_2
	var_222_int = 541793; // 0x91e PushI
	SetMessage(var_222_int); // 0x91f TObjFunc
	ClearReplies(); // 0x921 TObjFunc
	var_223_int = 526310; // 0x923 PushI
	var_224_int = 27593; // 0x924 PushI
	var_225_int = 27592; // 0x925 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x926 TObjFunc
	var_226_int = 541702; // 0x928 PushI
	var_227_int = 44004; // 0x929 PushI
	var_228_int = 43885; // 0x92a PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x92b TObjFunc
	return 0; // 0x92d Return
	
Label_2350:
	var_229_int = 44004; // 0x92e PushI
	var_230_bool = var_36_bool == var_229_int; // 0x92f Eq
	if(var_230_bool == 0) goto Label_2368; // 0x930 JumpB
	var_231_string = ""; // 0x931 PushV
	var_231_string = "Neutral"; // 0x932 MovS
	func_2108(var_37_cvector, var_231_string); // 0x933 NEW_2
	var_232_int = 541795; // 0x935 PushI
	SetMessage(var_232_int); // 0x936 TObjFunc
	ClearReplies(); // 0x938 TObjFunc
	var_233_int = 541796; // 0x93a PushI
	var_234_int = 27593; // 0x93b PushI
	var_235_int = 44005; // 0x93c PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x93d TObjFunc
	return 0; // 0x93f Return
	
Label_2368:
	var_236_int = 27593; // 0x940 PushI
	var_237_bool = var_36_bool == var_236_int; // 0x941 Eq
	if(var_237_bool == 0) goto Label_2391; // 0x942 JumpB
	var_238_string = ""; // 0x943 PushV
	var_238_string = "Pain"; // 0x944 MovS
	func_2108(var_37_cvector, var_238_string); // 0x945 NEW_2
	var_239_int = 526311; // 0x947 PushI
	SetMessage(var_239_int); // 0x948 TObjFunc
	ClearReplies(); // 0x94a TObjFunc
	var_240_int = 526312; // 0x94c PushI
	var_241_int = 27595; // 0x94d PushI
	var_242_int = 27594; // 0x94e PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x94f TObjFunc
	var_243_int = 541751; // 0x951 PushI
	var_244_int = 43953; // 0x952 PushI
	var_245_int = 43952; // 0x953 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x954 TObjFunc
	return 0; // 0x956 Return
	
Label_2391:
	var_246_int = 43953; // 0x957 PushI
	var_247_bool = var_36_bool == var_246_int; // 0x958 Eq
	if(var_247_bool == 0) goto Label_2409; // 0x959 JumpB
	var_248_string = ""; // 0x95a PushV
	var_248_string = "Neutral"; // 0x95b MovS
	func_2108(var_37_cvector, var_248_string); // 0x95c NEW_2
	var_249_int = 541752; // 0x95e PushI
	SetMessage(var_249_int); // 0x95f TObjFunc
	ClearReplies(); // 0x961 TObjFunc
	var_250_int = 541753; // 0x963 PushI
	var_251_int = 27595; // 0x964 PushI
	var_252_int = 43954; // 0x965 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x966 TObjFunc
	return 0; // 0x968 Return
	
Label_2409:
	var_253_int = 27595; // 0x969 PushI
	var_254_bool = var_36_bool == var_253_int; // 0x96a Eq
	if(var_254_bool == 0) goto Label_2432; // 0x96b JumpB
	var_255_string = ""; // 0x96c PushV
	var_255_string = "Neutral"; // 0x96d MovS
	func_2108(var_37_cvector, var_255_string); // 0x96e NEW_2
	var_256_int = 526313; // 0x970 PushI
	SetMessage(var_256_int); // 0x971 TObjFunc
	ClearReplies(); // 0x973 TObjFunc
	var_257_int = 524683; // 0x975 PushI
	var_258_int = -1; // 0x976 PushI
	var_259_int = 26022; // 0x977 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x978 TObjFunc
	var_260_int = 541754; // 0x97a PushI
	var_261_int = -1; // 0x97b PushI
	var_262_int = 43956; // 0x97c PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x97d TObjFunc
	return 0; // 0x97f Return
	
Label_2432:
	var_263_int = 27581; // 0x980 PushI
	var_264_bool = var_36_bool == var_263_int; // 0x981 Eq
	if(var_264_bool == 0) goto Label_2450; // 0x982 JumpB
	var_265_string = ""; // 0x983 PushV
	var_265_string = "Pain"; // 0x984 MovS
	func_2108(var_37_cvector, var_265_string); // 0x985 NEW_2
	var_266_int = 526301; // 0x987 PushI
	SetMessage(var_266_int); // 0x988 TObjFunc
	ClearReplies(); // 0x98a TObjFunc
	var_267_int = 526302; // 0x98c PushI
	var_268_int = 27579; // 0x98d PushI
	var_269_int = 27582; // 0x98e PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x98f TObjFunc
	return 0; // 0x991 Return
	
Label_2450:
	var_270_int = 27579; // 0x992 PushI
	var_271_bool = var_36_bool == var_270_int; // 0x993 Eq
	if(var_271_bool == 0) goto Label_2473; // 0x994 JumpB
	var_272_string = ""; // 0x995 PushV
	var_272_string = "Autizm"; // 0x996 MovS
	func_2108(var_37_cvector, var_272_string); // 0x997 NEW_2
	var_273_int = 526299; // 0x999 PushI
	SetMessage(var_273_int); // 0x99a TObjFunc
	ClearReplies(); // 0x99c TObjFunc
	var_274_int = 526303; // 0x99e PushI
	var_275_int = 27585; // 0x99f PushI
	var_276_int = 27584; // 0x9a0 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x9a1 TObjFunc
	var_277_int = 541701; // 0x9a3 PushI
	var_278_int = 27585; // 0x9a4 PushI
	var_279_int = 43883; // 0x9a5 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x9a6 TObjFunc
	return 0; // 0x9a8 Return
	
Label_2473:
	var_280_int = 27585; // 0x9a9 PushI
	var_281_bool = var_36_bool == var_280_int; // 0x9aa Eq
	if(var_281_bool == 0) goto Label_2496; // 0x9ab JumpB
	var_282_string = ""; // 0x9ac PushV
	var_282_string = "Disturbance"; // 0x9ad MovS
	func_2108(var_37_cvector, var_282_string); // 0x9ae NEW_2
	var_283_int = 526304; // 0x9b0 PushI
	SetMessage(var_283_int); // 0x9b1 TObjFunc
	ClearReplies(); // 0x9b3 TObjFunc
	var_284_int = 524645; // 0x9b5 PushI
	var_285_int = 25985; // 0x9b6 PushI
	var_286_int = 25984; // 0x9b7 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x9b8 TObjFunc
	var_287_int = 526305; // 0x9ba PushI
	var_288_int = 25985; // 0x9bb PushI
	var_289_int = 27586; // 0x9bc PushI
	AddReply(var_287_int, var_288_int, var_289_int); // 0x9bd TObjFunc
	return 0; // 0x9bf Return
	
Label_2496:
	var_290_int = 25985; // 0x9c0 PushI
	var_291_bool = var_36_bool == var_290_int; // 0x9c1 Eq
	if(var_291_bool == 0) goto Label_2519; // 0x9c2 JumpB
	var_292_string = ""; // 0x9c3 PushV
	var_292_string = "Disturbance"; // 0x9c4 MovS
	func_2108(var_37_cvector, var_292_string); // 0x9c5 NEW_2
	var_293_int = 524646; // 0x9c7 PushI
	SetMessage(var_293_int); // 0x9c8 TObjFunc
	ClearReplies(); // 0x9ca TObjFunc
	var_294_int = 524647; // 0x9cc PushI
	var_295_int = -1; // 0x9cd PushI
	var_296_int = 25986; // 0x9ce PushI
	AddReply(var_294_int, var_295_int, var_296_int); // 0x9cf TObjFunc
	var_297_int = 526306; // 0x9d1 PushI
	var_298_int = 27589; // 0x9d2 PushI
	var_299_int = 27588; // 0x9d3 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x9d4 TObjFunc
	return 0; // 0x9d6 Return
	
Label_2519:
	var_300_int = 27589; // 0x9d7 PushI
	var_301_bool = var_36_bool == var_300_int; // 0x9d8 Eq
	if(var_301_bool == 0) goto Label_2542; // 0x9d9 JumpB
	var_302_string = ""; // 0x9da PushV
	var_302_string = "Neutral"; // 0x9db MovS
	func_2108(var_37_cvector, var_302_string); // 0x9dc NEW_2
	var_303_int = 526307; // 0x9de PushI
	SetMessage(var_303_int); // 0x9df TObjFunc
	ClearReplies(); // 0x9e1 TObjFunc
	var_304_int = 526308; // 0x9e3 PushI
	var_305_int = -1; // 0x9e4 PushI
	var_306_int = 27590; // 0x9e5 PushI
	AddReply(var_304_int, var_305_int, var_306_int); // 0x9e6 TObjFunc
	var_307_int = 526309; // 0x9e8 PushI
	var_308_int = -1; // 0x9e9 PushI
	var_309_int = 27591; // 0x9ea PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x9eb TObjFunc
	return 0; // 0x9ed Return
	
Label_2542:
	var_3_string = 1; // 0x9ee TMovB
	var_310_bool = 0; // 0x9ef PushV
	func_3413(var_310_bool); // 0x9f0 NEW_2
	if(var_310_bool == 0) goto Label_2550; // 0x9f2 JumpB
	lshStopAnimation(); // 0x9f3 Func
	goto Label_2552; // 0x9f5 Jump
	
Label_2552:
	return 0; // 0x9f8 Return
	
Label_2550:
	StopAnimation(); // 0x9f6 Func
	
Label_2554:
	return 0; // 0x9fa Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	var_38_int = 1; // 0xa9d PushI
	if(var_38_int == 0) goto Label_2757; // 0xa9e JumpB
	func_3315(); // 0xaa0 NEW_2
	var_40_int = 42548; // 0xaa2 PushI
	var_41_bool = var_36_int == var_40_int; // 0xaa3 Eq
	if(var_41_bool == 0) goto Label_2745; // 0xaa4 JumpB
	var_42_string = ""; // 0xaa5 PushV
	var_42_string = "Neutral"; // 0xaa6 MovS
	func_2694(var_37_cvector, var_42_string); // 0xaa7 NEW_2
	var_59_int = 540539; // 0xaa9 PushI
	SetMessage(var_59_int); // 0xaaa TObjFunc
	ClearReplies(); // 0xaac TObjFunc
	var_60_int = 540540; // 0xaae PushI
	var_61_int = -1; // 0xaaf PushI
	var_62_int = 42549; // 0xab0 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xab1 TObjFunc
	var_63_int = 540799; // 0xab3 PushI
	var_64_int = -1; // 0xab4 PushI
	var_65_int = 42848; // 0xab5 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xab6 TObjFunc
	return 0; // 0xab8 Return
	
Label_2745:
	var_3_string = 1; // 0xab9 TMovB
	var_66_bool = 0; // 0xaba PushV
	func_3413(var_66_bool); // 0xabb NEW_2
	if(var_66_bool == 0) goto Label_2753; // 0xabd JumpB
	lshStopAnimation(); // 0xabe Func
	goto Label_2755; // 0xac0 Jump
	
Label_2755:
	return 0; // 0xac3 Return
	
Label_2753:
	StopAnimation(); // 0xac1 Func
	
Label_2757:
	return 0; // 0xac5 Return
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_37_int = 10; // 0xb10 PushI
	var_38_bool = var_36_int == var_37_int; // 0xb11 Eq
	if(var_38_bool == 0) goto Label_2868; // 0xb12 JumpB
	func_2827(); // 0xb14 NEW_2
	var_40_bool = 0; // 0xb16 PushV
	var_40_bool = 0; // 0xb17 MovB
	var_41_bool = 0; // 0xb18 PushV
	func_3041(var_41_bool); // 0xb19 NEW_2
	if(var_41_bool == 0) goto Label_2849; // 0xb1b JumpB
	var_44_bool = 0; // 0xb1c PushV
	func_2796(var_44_bool); // 0xb1d NEW_2
	if(var_44_bool == 0) goto Label_2849; // 0xb1f JumpB
	var_40_bool = 1; // 0xb20 MovB
	
Label_2849:
	if(var_40_bool == 0) goto Label_2862; // 0xb21 JumpB
	var_61_bool = 0; // 0xb22 PushV
	func_2776(var_61_bool); // 0xb23 NEW_2
	if(var_61_bool == 0) goto Label_2861; // 0xb25 JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0xb26 PushV
	var_82_object = Obj(); // 0xb27 PushV
	func_3322(var_82_object); // 0xb28 NEW_2
	var_81_object = var_82_object; // 0xb29 Mov
	func_3189(var_81_object); // 0xb2b NEW_2
	
Label_2861:
	goto Label_2868; // 0xb2d Jump
	
Label_2868:
	return 0; // 0xb34 Return
	
Label_2862:
	func_2791(var_36_int); // 0xb2f NEW_2
	func_2818(); // 0xb32 NEW_2
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3009(); // 0xb36 NEW_2
	func_2827(); // 0xb39 NEW_2
	lshStopSpeech(); // 0xb3b Func
	lshStopAnimation(); // 0xb3d Func
	StopAsync(); // 0xb3f Func
	Hold(); // 0xb41 Func
	return 0; // 0xb43 Return
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0(); // 0xb44 Func
	func_2827(); // 0xb47 NEW_2
	var_37_string = ""; // 0xb49 PushV
	var_37_string = "Neutral"; // 0xb4a MovS
	func_3269(var_37_string); // 0xb4b NEW_2
	func_2818(); // 0xb4e NEW_2
	return 0; // 0xb50 Return
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool; // 0xb52 Push
	if(var_37_bool == 0) goto Label_2904; // 0xb53 JumpB
	func_2818(); // 0xb55 NEW_2
	goto Label_2908; // 0xb57 Jump
	
Label_2908:
	return 0; // 0xb5c Return
	
Label_2904:
	var_43_string = ""; // 0xb58 PushV
	var_43_string = "Neutral"; // 0xb59 MovS
	func_3269(var_43_string); // 0xb5a NEW_2
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0; // 0xb5d PushV
	IsOverrideActive(var_38_bool); // 0xb5e Func
	var_39_bool = var_38_bool == 0; // 0xb60 Not
	if(var_39_bool == 0) goto Label_2937; // 0xb61 JumpB
	EventDisable(0); // 0xb62 EventDisable
	func_3009(); // 0xb64 NEW_2
	var_40_bool = 0; var_41_object = Obj(); // 0xb66 PushV
	var_41_object = var_36_object; // 0xb67 Mov
	func_3032(var_41_object); // 0xb68 NEW_2
	EventEnable(0); // 0xb6a EventEnable
	var_54_object = Obj(); // 0xb6b PushV
	var_54_object = var_36_object; // 0xb6c Mov
	func_3894(var_54_object); // 0xb6d NEW_2
	var_762_string = ""; // 0xb6f PushV
	var_762_string = "Neutral"; // 0xb70 MovS
	func_3269(var_762_string); // 0xb71 NEW_2
	func_2827(); // 0xb74 NEW_2
	func_2818(); // 0xb77 NEW_2
	
Label_2937:
	return 2; // 0xb79 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_2762(var_35_cvector); // 0xac7 NEW_2
	return 0; // 0xac9 Return
}


func_0(var_0_object, var_382_int, var_383_object)
{
	var_385_object = Obj(); var_386_bool = 0; var_387_int = 0; var_388_bool = 0; var_389_object = Obj(); var_390_bool = 0; var_391_int = 0; var_392_bool = 0; // 0x0 PushV
	var_0_object = var_383_object; // 0x1 TMov
	var_393_bool = 0; var_394_object = Obj(); var_395_float = 0; // 0x2 PushV
	var_394_object = var_383_object; // 0x3 Mov
	var_395_float = 70.0; // 0x4 MovF
	func_3046(var_394_object, var_395_float); // 0x5 NEW_2
	var_396_bool = var_393_bool == 0; // 0x7 Not
	if(var_396_bool == 0) goto Label_11; // 0x8 JumpB
	var_382_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_389_object); // 0xb Func
	var_397_int = 0; // 0xd PushV
	func_3407(var_397_int); // 0xe NEW_2
	SetNPCName(var_397_int); // 0x10 ObjFunc
	var_398_int = 0; // 0x12 PushV
	func_3405(var_398_int); // 0x13 NEW_2
	SetNPCDescription(var_398_int); // 0x15 ObjFunc
	var_399_string = ""; // 0x17 PushV
	func_3409(var_399_string); // 0x18 NEW_2
	SetPhoto(var_399_string); // 0x1a ObjFunc
	var_400_string = ""; // 0x1c PushV
	func_3411(var_400_string); // 0x1d NEW_2
	SetPhoto2(var_400_string); // 0x1f ObjFunc
	var_401_int = 0; // 0x21 PushV
	func_3877(var_401_int); // 0x22 NEW_2
	SetPlayerName(var_401_int); // 0x24 ObjFunc
	var_391_int = -1; // 0x26 MovI
	IsOverrideActive(var_390_bool); // 0x27 Func
	var_402_bool = var_390_bool; // 0x29 Push
	if(var_402_bool == 0) goto Label_45; // 0x2a JumpB
	var_382_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_389_object); // 0x2d Func
	var_403_bool = 0; var_404_object = Obj(); // 0x2f PushV
	var_405_object = Obj(); // 0x30 PushV
	func_3322(var_405_object); // 0x31 NEW_2
	var_404_object = var_405_object; // 0x32 Mov
	func_3131(var_403_bool, var_404_object); // 0x34 NEW_2
	var_406_object = Obj(); var_407_object = Obj(); // 0x36 PushV
	var_406_object = var_383_object; // 0x37 Mov
	var_407_object = var_389_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_408_object, var_409_object, var_410_string, var_411_bool, var_406_object, var_407_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_392_bool); // 0x3d ObjFunc
	
Label_63:
	var_486_bool = var_392_bool == 0; // 0x3f Not
	if(var_486_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_392_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_487_object = Obj(); // 0x46 PushV
	var_487_object = var_383_object; // 0x47 Mov
	func_3114(); // 0x48 NEW_2
	StopDialog(var_389_object); // 0x4a Func
	GetReturnValue(var_391_int); // 0x4c ObjFunc
	var_382_int = var_391_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3328(var_97_cvector, var_98_cvector)
{
	var_100_float = 0; var_101_float = 0; // 0xd00 PushV
	var_102_int = var_98_cvector | var_98_cvector; // 0xd01 Or
	var_101_float = sqrt(var_102_int); // 0xd02 Sqrt2
	var_103_float = 0.0; // 0xd03 PushF
	var_104_bool = var_101_float < var_103_float; // 0xd04 LT
	if(var_104_bool == 0) goto Label_3336; // 0xd05 JumpB
	var_97_cvector = CVector(0.0, 0.0, 0.0); // 0xd06 MovV
	return 2; // 0xd07 Return
	
Label_3336:
	var_97_cvector = var_98_cvector / var_98_cvector; // 0xd08 Div2
	return 2; // 0xd09 Return
}


func_2818()
{
	var_764_float = 0; var_765_float = 0; // 0xb02 PushV
	var_766_int = 8; // 0xb03 PushI
	var_767_int = 16; // 0xb04 PushI
	rand(var_765_float, var_766_int, var_767_int); // 0xb05 Func
	var_768_int = 10; // 0xb07 PushI
	SetTimer(var_768_int, var_765_float); // 0xb08 Func
	return 2; // 0xb0a Return
}


func_3844(var_93_object, var_94_string, var_95_float)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_object = Obj(); var_100_bool = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_object = Obj(); var_104_bool = 0; // 0xf04 PushV
	GetMainOutdoorScene(var_103_object); // 0xf05 Func
	var_105_bool = var_103_object == 0; // 0xf07 NullEq
	if(var_105_bool == 0) goto Label_3853; // 0xf08 JumpB
	var_106_string = "Can't find main outdoor scene"; // 0xf09 PushS
	Trace(var_106_string); // 0xf0a Func
	return 8; // 0xf0c Return
	
Label_3853:
	GetLocator(var_94_string, var_104_bool, var_101_cvector, var_102_cvector); // 0xf0d ObjFunc
	var_107_bool = var_104_bool == 0; // 0xf0f Not
	if(var_107_bool == 0) goto Label_3863; // 0xf10 JumpB
	var_108_string = "Warning: outdoor scene locator "; // 0xf11 PushS
	var_109_int = var_108_string + var_94_string; // 0xf12 Add
	var_110_string = " doesnt exist"; // 0xf13 PushS
	var_111_int = var_109_int + var_110_string; // 0xf14 Add
	Trace(var_111_int); // 0xf15 Func
	
Label_3863:
	GetMap(var_93_object); // 0xf17 ObjFunc
	var_112_bool = var_93_object == 0; // 0xf19 NullEq
	if(var_112_bool == 0) goto Label_3871; // 0xf1a JumpB
	var_113_string = "Can't find map"; // 0xf1b PushS
	Trace(var_113_string); // 0xf1c Func
	return 8; // 0xf1e Return
	
Label_3871:
	var_114_float = GetByIndex(var_101_cvector, 0); // 0xf1f PushE
	var_115_float = GetByIndex(var_101_cvector, 2); // 0xf20 PushE
	SetMapParams(var_114_float, var_115_float, var_95_float); // 0xf21 ObjFunc
	return 8; // 0xf23 Return
}


func_1800(var_2_object, var_678_string)
{
	var_679_bool = 0; // 0x709 PushV
	func_3413(var_679_bool); // 0x70a NEW_2
	var_680_bool = var_679_bool == 0; // 0x70c Not
	if(var_680_bool == 0) goto Label_1807; // 0x70d JumpB
	return 0; // 0x70e Return
	
Label_1807:
	var_681_bool = var_678_string == var_2_object; // 0x70f Eq
	if(var_681_bool == 0) goto Label_1810; // 0x710 JumpB
	return 0; // 0x711 Return
	
Label_1810:
	var_682_string = ""; var_683_bool = 0; // 0x712 PushV
	var_682_string = var_678_string; // 0x713 Mov
	var_684_string = ""; // 0x714 PushS
	var_685_bool = var_678_string == var_684_string; // 0x715 Eq
	if(var_685_bool == 0) goto Label_1817; // 0x716 JumpB
	var_683_bool = 0; // 0x717 MovB
	goto Label_1818; // 0x718 Jump
	
Label_1818:
	func_3285(var_682_string, var_683_bool); // 0x71a NEW_2
	var_2_object = var_678_string; // 0x71c TMov
	return 0; // 0x71d Return
	
Label_1817:
	var_683_bool = 1; // 0x719 MovB
}


func_3593(var_327_bool)
{
	var_329_int = 0; var_330_string = ""; // 0xe0a PushV
	var_330_string = "k1q01"; // 0xe0b MovS
	func_3338(var_329_int, var_330_string); // 0xe0c NEW_2
	var_331_int = 4; // 0xe0e PushI
	var_332_bool = var_329_int == var_331_int; // 0xe0f Eq
	if(var_332_bool == 0) goto Label_3603; // 0xe10 JumpB
	var_327_bool = 1; // 0xe11 MovB
	return 0; // 0xe12 Return
	
Label_3603:
	var_327_bool = 0; // 0xe13 MovB
	return 0; // 0xe14 Return
}


func_3338(var_321_int, var_322_string)
{
	var_323_int = 0; var_324_int = 0; // 0xd0a PushV
	GetVariable(var_322_string, var_324_int); // 0xd0b Func
	var_321_int = var_324_int; // 0xd0d Mov
	return 2; // 0xd0e Return
}


func_2827()
{
	var_763_int = 10; // 0xb0b PushI
	KillTimer(var_763_int); // 0xb0c Func
	return 0; // 0xb0e Return
}


func_3343(var_91_object, var_92_string)
{
	var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); // 0xd0f PushV
	GetMainOutdoorScene(var_95_object); // 0xd10 Func
	var_97_string = ".bin"; // 0xd12 PushS
	var_98_int = var_92_string + var_97_string; // 0xd13 Add
	AddBlankActor(var_96_object, var_95_object, var_92_string, var_98_int); // 0xd14 Func
	var_91_object = var_96_object; // 0xd16 Mov
	return 4; // 0xd17 Return
}


func_3605(var_366_bool)
{
	var_368_int = 0; var_369_string = ""; // 0xe16 PushV
	var_369_string = "ook1Laska2"; // 0xe17 MovS
	func_3338(var_368_int, var_369_string); // 0xe18 NEW_2
	var_370_int = 0; // 0xe1a PushI
	var_371_bool = var_368_int == var_370_int; // 0xe1b Eq
	if(var_371_bool == 0) goto Label_3615; // 0xe1c JumpB
	var_366_bool = 1; // 0xe1d MovB
	return 0; // 0xe1e Return
	
Label_3615:
	var_366_bool = 0; // 0xe1f MovB
	return 0; // 0xe20 Return
}


func_790(var_2_object, var_232_string)
{
	var_233_bool = 0; // 0x317 PushV
	func_3413(var_233_bool); // 0x318 NEW_2
	var_234_bool = var_233_bool == 0; // 0x31a Not
	if(var_234_bool == 0) goto Label_797; // 0x31b JumpB
	return 0; // 0x31c Return
	
Label_797:
	var_235_bool = var_232_string == var_2_object; // 0x31d Eq
	if(var_235_bool == 0) goto Label_800; // 0x31e JumpB
	return 0; // 0x31f Return
	
Label_800:
	var_236_string = ""; var_237_bool = 0; // 0x320 PushV
	var_236_string = var_232_string; // 0x321 Mov
	var_238_string = ""; // 0x322 PushS
	var_239_bool = var_232_string == var_238_string; // 0x323 Eq
	if(var_239_bool == 0) goto Label_807; // 0x324 JumpB
	var_237_bool = 0; // 0x325 MovB
	goto Label_808; // 0x326 Jump
	
Label_808:
	func_3285(var_236_string, var_237_bool); // 0x328 NEW_2
	var_2_object = var_232_string; // 0x32a TMov
	return 0; // 0x32b Return
	
Label_807:
	var_237_bool = 1; // 0x327 MovB
}


func_3354(var_428_bool, var_430_string)
{
	var_431_int = 0; var_432_bool = 0; var_433_int = 0; var_434_bool = 0; // 0xd1a PushV
	GetInvItemByName(var_433_int, var_430_string); // 0xd1b Func
	HasItem(var_433_int, var_434_bool); // 0xd1d ObjFunc
	var_428_bool = var_434_bool; // 0xd1f Mov
	return 4; // 0xd20 Return
}


func_3617(var_441_bool)
{
	var_443_int = 0; var_444_string = ""; // 0xe22 PushV
	var_444_string = "k2q02"; // 0xe23 MovS
	func_3338(var_443_int, var_444_string); // 0xe24 NEW_2
	var_445_int = 1; // 0xe26 PushI
	var_446_bool = var_443_int == var_445_int; // 0xe27 Eq
	if(var_446_bool == 0) goto Label_3627; // 0xe28 JumpB
	var_441_bool = 1; // 0xe29 MovB
	return 0; // 0xe2a Return
	
Label_3627:
	var_441_bool = 0; // 0xe2b MovB
	return 0; // 0xe2c Return
}


func_3361(var_65_float)
{
	var_66_float = 0; var_67_float = 0; // 0xd21 PushV
	GetGameTime(var_67_float); // 0xd22 Func
	var_65_float = var_67_float; // 0xd24 Mov
	return 2; // 0xd25 Return
}


func_3877(var_121_int)
{
	var_122_int = 0; var_123_int = 0; // 0xf25 PushV
	var_124_string = "branch"; // 0xf26 PushS
	GetVariable(var_124_string, var_123_int); // 0xf27 Func
	var_125_int = 0; // 0xf29 PushI
	var_126_bool = var_123_int == var_125_int; // 0xf2a Eq
	if(var_126_bool == 0) goto Label_3887; // 0xf2b JumpB
	var_121_int = 1; // 0xf2c MovI
	return 2; // 0xf2d Return
	
Label_3887:
	var_127_int = 1; // 0xf2f PushI
	var_128_bool = var_123_int == var_127_int; // 0xf30 Eq
	if(var_128_bool == 0) goto Label_3892; // 0xf31 JumpB
	var_121_int = 2; // 0xf32 MovI
	return 2; // 0xf33 Return
	
Label_3892:
	var_121_int = 3; // 0xf34 MovI
	return 2; // 0xf35 Return
}


func_3366(var_185_int)
{
	var_186_float = 0; var_187_float = 0; // 0xd26 PushV
	GetGameTime(var_187_float); // 0xd27 Func
	var_188_int = 1; // 0xd29 PushI
	var_189_int = 0; // 0xd2a PushV
	var_190_int = 24; // 0xd2b PushI
	var_189_int = var_187_float / var_187_float; // 0xd2c Div2
	var_185_int = var_188_int + var_189_int; // 0xd2d Add2
	return 2; // 0xd2e Return
}


func_3114()
{
	var_276_bool = 0; var_277_bool = 0; // 0xc2a PushV
	CameraSwitchToNormal(); // 0xc2b Func
	var_278_bool = 0; // 0xc2d PushV
	func_3413(var_278_bool); // 0xc2e NEW_2
	if(var_278_bool == 0) goto Label_3122; // 0xc30 JumpB
	goto Label_3130; // 0xc31 Jump
	
Label_3130:
	return 2; // 0xc3a Return
	
Label_3122:
	var_279_string = "head"; // 0xc32 PushS
	HasAnimationTrack(var_277_bool, var_279_string); // 0xc33 Func
	var_280_bool = var_277_bool; // 0xc35 Push
	if(var_280_bool == 0) goto Label_3130; // 0xc36 JumpB
	var_281_string = "head"; // 0xc37 PushS
	UnlookAsync(var_281_string); // 0xc38 Func
}


func_3629(var_448_bool)
{
	var_450_int = 0; var_451_string = ""; // 0xe2e PushV
	var_451_string = "k2q02"; // 0xe2f MovS
	func_3338(var_450_int, var_451_string); // 0xe30 NEW_2
	var_452_int = 2; // 0xe32 PushI
	var_453_bool = var_450_int == var_452_int; // 0xe33 Eq
	if(var_453_bool == 0) goto Label_3639; // 0xe34 JumpB
	var_448_bool = 1; // 0xe35 MovB
	return 0; // 0xe36 Return
	
Label_3639:
	var_448_bool = 0; // 0xe37 MovB
	return 0; // 0xe38 Return
}


func_3375(var_284_bool, var_285_int)
{
	var_286_int = 0; // 0xd30 PushV
	func_3366(var_286_int); // 0xd31 NEW_2
	var_284_bool = var_286_int == var_285_int; // 0xd33 Eq2
	return 0; // 0xd34 Return
}


func_3381(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = ""; // 0xd35 PushV
	var_63_string = "idle"; // 0xd36 MovS
	var_64_int = var_61_int; // 0xd37 Push
	if(var_64_int == 0) goto Label_3386; // 0xd38 JumpB
	var_63_string = var_63_string + var_61_int; // 0xd39 Add2
	
Label_3386:
	var_60_string = var_63_string; // 0xd3a Mov
	return 2; // 0xd3b Return
}


func_3894(var_54_object)
{
	var_55_int = 0; var_56_int = 0; // 0xf36 PushV
	var_57_string = "mt_laska"; // 0xf37 PushS
	GetVariable(var_57_string, var_56_int); // 0xf38 Func
	var_58_bool = var_56_int == 0; // 0xf3a Not
	if(var_58_bool == 0) goto Label_3910; // 0xf3b JumpB
	var_59_int = 0; var_60_object = Obj(); // 0xf3c PushV
	var_60_object = var_54_object; // 0xf3d Mov
	TaskCall(2); // 0xf3e TaskCall
	func_651(var_61_object, var_59_int, var_60_object); // 0xf3f NEW_2
	TaskReturn(); // 0xf40 TaskReturn
	var_282_string = "mt_laska"; // 0xf42 PushS
	var_283_int = 1; // 0xf43 PushI
	SetVariable(var_282_string, var_283_int); // 0xf44 Func
	
Label_3910:
	var_284_bool = 0; var_285_int = 0; // 0xf46 PushV
	var_285_int = 1; // 0xf47 MovI
	func_3375(var_284_bool, var_285_int); // 0xf48 NEW_2
	if(var_284_bool == 0) goto Label_3922; // 0xf4a JumpB
	var_287_int = 0; var_288_object = Obj(); // 0xf4b PushV
	var_288_object = var_54_object; // 0xf4c Mov
	TaskCall(10); // 0xf4d TaskCall
	func_1915(var_289_object, var_287_int, var_288_object); // 0xf4e NEW_2
	TaskReturn(); // 0xf4f TaskReturn
	return 2; // 0xf51 Return
	
Label_3922:
	var_380_bool = 0; var_381_int = 0; // 0xf52 PushV
	var_381_int = 2; // 0xf53 MovI
	func_3375(var_380_bool, var_381_int); // 0xf54 NEW_2
	if(var_380_bool == 0) goto Label_3934; // 0xf56 JumpB
	var_382_int = 0; var_383_object = Obj(); // 0xf57 PushV
	var_383_object = var_54_object; // 0xf58 Mov
	TaskCall(0); // 0xf59 TaskCall
	func_0(var_384_object, var_382_int, var_383_object); // 0xf5a NEW_2
	TaskReturn(); // 0xf5b TaskReturn
	return 2; // 0xf5d Return
	
Label_3934:
	var_488_bool = 0; var_489_int = 0; // 0xf5e PushV
	var_489_int = 5; // 0xf5f MovI
	func_3375(var_488_bool, var_489_int); // 0xf60 NEW_2
	if(var_488_bool == 0) goto Label_3946; // 0xf62 JumpB
	var_490_int = 0; var_491_object = Obj(); // 0xf63 PushV
	var_491_object = var_54_object; // 0xf64 Mov
	TaskCall(4); // 0xf65 TaskCall
	func_854(var_492_object, var_490_int, var_491_object); // 0xf66 NEW_2
	TaskReturn(); // 0xf67 TaskReturn
	return 2; // 0xf69 Return
	
Label_3946:
	var_565_bool = 0; var_566_int = 0; // 0xf6a PushV
	var_566_int = 6; // 0xf6b MovI
	func_3375(var_565_bool, var_566_int); // 0xf6c NEW_2
	if(var_565_bool == 0) goto Label_3958; // 0xf6e JumpB
	var_567_int = 0; var_568_object = Obj(); // 0xf6f PushV
	var_568_object = var_54_object; // 0xf70 Mov
	TaskCall(6); // 0xf71 TaskCall
	func_1254(var_569_object, var_567_int, var_568_object); // 0xf72 NEW_2
	TaskReturn(); // 0xf73 TaskReturn
	return 2; // 0xf75 Return
	
Label_3958:
	var_645_bool = 0; var_646_int = 0; // 0xf76 PushV
	var_646_int = 12; // 0xf77 MovI
	func_3375(var_645_bool, var_646_int); // 0xf78 NEW_2
	if(var_645_bool == 0) goto Label_3970; // 0xf7a JumpB
	var_647_int = 0; var_648_object = Obj(); // 0xf7b PushV
	var_648_object = var_54_object; // 0xf7c Mov
	TaskCall(8); // 0xf7d TaskCall
	func_1656(var_649_object, var_647_int, var_648_object); // 0xf7e NEW_2
	TaskReturn(); // 0xf7f TaskReturn
	return 2; // 0xf81 Return
	
Label_3970:
	var_706_int = 0; var_707_object = Obj(); // 0xf82 PushV
	var_707_object = var_54_object; // 0xf83 Mov
	TaskCall(12); // 0xf84 TaskCall
	func_2555(var_708_object, var_706_int, var_707_object); // 0xf85 NEW_2
	TaskReturn(); // 0xf86 TaskReturn
	return 2; // 0xf88 Return
}


func_1335(var_0_object, var_1_object, var_2_object, var_3_string, var_591_object, var_592_object)
{
	var_0_object = var_592_object; // 0x538 TMov
	var_1_object = var_591_object; // 0x539 TMov
	var_3_string = 0; // 0x53a TMovB
	var_597_int = 1; // 0x53b PushI
	if(var_597_int == 0) goto Label_1398; // 0x53c JumpB
	var_598_bool = 0; var_599_object = Obj(); // 0x53d PushV
	var_599_object = var_1_object; // 0x53e MovT
	func_3696(var_599_object); // 0x53f NEW_2
	if(var_598_bool == 0) goto Label_1376; // 0x541 JumpB
	var_604_object = Obj(); var_605_object = Obj(); // 0x542 PushV
	var_604_object = var_1_object; // 0x543 MovT
	var_605_object = var_0_object; // 0x544 MovT
	func_3531(); // 0x545 NEW_2
	var_608_object = Obj(); var_609_object = Obj(); // 0x547 PushV
	var_608_object = var_1_object; // 0x548 MovT
	var_609_object = var_0_object; // 0x549 MovT
	func_3537(); // 0x54a NEW_2
	var_612_string = ""; // 0x54c PushV
	var_612_string = "Disturbance"; // 0x54d MovS
	func_1428(var_592_object, var_612_string); // 0x54e NEW_2
	var_620_int = 528802; // 0x550 PushI
	SetMessage(var_620_int); // 0x551 TObjFunc
	ClearReplies(); // 0x553 TObjFunc
	var_621_int = 526757; // 0x555 PushI
	var_622_int = 30208; // 0x556 PushI
	var_623_int = 28034; // 0x557 PushI
	AddReply(var_621_int, var_622_int, var_623_int); // 0x558 TObjFunc
	var_624_int = 528803; // 0x55a PushI
	var_625_int = 30208; // 0x55b PushI
	var_626_int = 30216; // 0x55c PushI
	AddReply(var_624_int, var_625_int, var_626_int); // 0x55d TObjFunc
	goto Label_1398; // 0x55f Jump
	
Label_1398:
	var_627_bool = 0; // 0x576 PushV
	func_3413(var_627_bool); // 0x577 NEW_2
	if(var_627_bool == 0) goto Label_1413; // 0x579 JumpB
	
Label_1402:
	lshWaitForAnimEnd(); // 0x57a Func
	var_628_string = var_3_string; // 0x57c PushT
	if(var_628_string == 0) goto Label_1407; // 0x57d JumpB
	goto Label_1412; // 0x57e Jump
	
Label_1412:
	goto Label_1427; // 0x584 Jump
	
Label_1427:
	return 0; // 0x593 Return
	
Label_1407:
	var_629_string = ""; // 0x57f PushV
	var_629_string = var_2_object; // 0x580 MovT
	func_3269(var_629_string); // 0x581 NEW_2
	goto Label_1402; // 0x583 Jump
	
Label_1413:
	var_630_string = "all"; // 0x585 PushS
	var_631_string = "idle"; // 0x586 PushS
	PlayAnimation(var_630_string, var_631_string); // 0x587 Func
	
Label_1417:
	WaitForAnimEnd(); // 0x589 Func
	var_632_string = var_3_string; // 0x58b PushT
	if(var_632_string == 0) goto Label_1422; // 0x58c JumpB
	goto Label_1427; // 0x58d Jump
	
Label_1422:
	var_633_string = "all"; // 0x58e PushS
	var_634_string = "idle"; // 0x58f PushS
	PlayAnimation(var_633_string, var_634_string); // 0x590 Func
	goto Label_1417; // 0x592 Jump
	
Label_1376:
	var_635_string = ""; // 0x560 PushV
	var_635_string = "Neutral"; // 0x561 MovS
	func_1428(var_592_object, var_635_string); // 0x562 NEW_2
	var_636_int = 526758; // 0x564 PushI
	SetMessage(var_636_int); // 0x565 TObjFunc
	ClearReplies(); // 0x567 TObjFunc
	var_637_int = 526759; // 0x569 PushI
	var_638_int = -1; // 0x56a PushI
	var_639_int = 28036; // 0x56b PushI
	AddReply(var_637_int, var_638_int, var_639_int); // 0x56c TObjFunc
	var_640_int = 528801; // 0x56e PushI
	var_641_int = -1; // 0x56f PushI
	var_642_int = 30214; // 0x570 PushI
	AddReply(var_640_int, var_641_int, var_642_int); // 0x571 TObjFunc
	goto Label_1398; // 0x573 Jump
}


func_3641(var_424_bool, var_425_object)
{
	var_426_bool = 0; // 0xe3a PushV
	var_426_bool = 0; // 0xe3b MovB
	var_427_bool = 0; // 0xe3c PushV
	var_427_bool = 0; // 0xe3d MovB
	var_428_bool = 0; var_429_object = Obj(); var_430_string = ""; // 0xe3e PushV
	var_429_object = var_425_object; // 0xe3f Mov
	var_430_string = "flower"; // 0xe40 MovS
	func_3354(var_429_object, var_430_string); // 0xe41 NEW_2
	if(var_428_bool == 0) goto Label_3659; // 0xe43 JumpB
	var_435_bool = 0; var_436_object = Obj(); var_437_string = ""; // 0xe44 PushV
	var_436_object = var_425_object; // 0xe45 Mov
	var_437_string = "milk"; // 0xe46 MovS
	func_3354(var_436_object, var_437_string); // 0xe47 NEW_2
	if(var_435_bool == 0) goto Label_3659; // 0xe49 JumpB
	var_427_bool = 1; // 0xe4a MovB
	
Label_3659:
	if(var_427_bool == 0) goto Label_3667; // 0xe4b JumpB
	var_438_bool = 0; var_439_object = Obj(); var_440_string = ""; // 0xe4c PushV
	var_439_object = var_425_object; // 0xe4d Mov
	var_440_string = "bread"; // 0xe4e MovS
	func_3354(var_439_object, var_440_string); // 0xe4f NEW_2
	if(var_438_bool == 0) goto Label_3667; // 0xe51 JumpB
	var_426_bool = 1; // 0xe52 MovB
	
Label_3667:
	if(var_426_bool == 0) goto Label_3670; // 0xe53 JumpB
	var_424_bool = 1; // 0xe54 MovB
	return 0; // 0xe55 Return
	
Label_3670:
	var_424_bool = 0; // 0xe56 MovB
	return 0; // 0xe57 Return
}


func_3131(var_130_bool, var_131_object)
{
	var_135_int = 0; var_136_int = 0; var_137_int = 0; var_138_int = 0; // 0xc3b PushV
	var_139_string = "voice_common"; // 0xc3c PushS
	GetVariable(var_139_string, var_137_int); // 0xc3d Func
	var_140_int = var_137_int; // 0xc3f Push
	if(var_140_int == 0) goto Label_3169; // 0xc40 JumpB
	var_141_bool = 0; var_142_object = Obj(); // 0xc41 PushV
	var_142_object = var_131_object; // 0xc42 Mov
	func_3189(var_142_object); // 0xc43 NEW_2
	var_171_bool = var_141_bool == 0; // 0xc45 Not
	if(var_171_bool == 0) goto Label_3151; // 0xc46 JumpB
	var_172_bool = 0; var_173_object = Obj(); // 0xc47 PushV
	var_173_object = var_131_object; // 0xc48 Mov
	func_3226(var_173_object); // 0xc49 NEW_2
	var_207_bool = var_172_bool == 0; // 0xc4b Not
	if(var_207_bool == 0) goto Label_3151; // 0xc4c JumpB
	var_130_bool = 0; // 0xc4d MovB
	return 4; // 0xc4e Return
	
Label_3151:
	var_208_int = 2; // 0xc4f PushI
	irand(var_138_int, var_208_int); // 0xc50 Func
	var_209_int = var_138_int; // 0xc52 Push
	if(var_209_int == 0) goto Label_3164; // 0xc53 JumpB
	var_210_string = "voice_common"; // 0xc54 PushS
	var_211_int = 1; // 0xc55 PushI
	var_212_int = var_137_int + var_211_int; // 0xc56 Add
	var_213_int = 3; // 0xc57 PushI
	var_214_int = var_212_int / var_213_int; // 0xc58 Mod
	SetVariable(var_210_string, var_214_int); // 0xc59 Func
	goto Label_3168; // 0xc5b Jump
	
Label_3168:
	goto Label_3187; // 0xc60 Jump
	
Label_3187:
	var_130_bool = 1; // 0xc73 MovB
	return 4; // 0xc74 Return
	
Label_3164:
	var_215_string = "voice_common"; // 0xc5c PushS
	var_216_int = 0; // 0xc5d PushI
	SetVariable(var_215_string, var_216_int); // 0xc5e Func
	
Label_3169:
	var_217_bool = 0; var_218_object = Obj(); // 0xc61 PushV
	var_218_object = var_131_object; // 0xc62 Mov
	func_3226(var_218_object); // 0xc63 NEW_2
	var_219_bool = var_217_bool == 0; // 0xc65 Not
	if(var_219_bool == 0) goto Label_3183; // 0xc66 JumpB
	var_220_bool = 0; var_221_object = Obj(); // 0xc67 PushV
	var_221_object = var_131_object; // 0xc68 Mov
	func_3189(var_221_object); // 0xc69 NEW_2
	var_222_bool = var_220_bool == 0; // 0xc6b Not
	if(var_222_bool == 0) goto Label_3183; // 0xc6c JumpB
	var_130_bool = 0; // 0xc6d MovB
	return 4; // 0xc6e Return
	
Label_3183:
	var_223_string = "voice_common"; // 0xc6f PushS
	var_224_int = 1; // 0xc70 PushI
	SetVariable(var_223_string, var_224_int); // 0xc71 Func
}


func_2108(var_2_object, var_338_string)
{
	var_339_bool = 0; // 0x83d PushV
	func_3413(var_339_bool); // 0x83e NEW_2
	var_340_bool = var_339_bool == 0; // 0x840 Not
	if(var_340_bool == 0) goto Label_2115; // 0x841 JumpB
	return 0; // 0x842 Return
	
Label_2115:
	var_341_bool = var_338_string == var_2_object; // 0x843 Eq
	if(var_341_bool == 0) goto Label_2118; // 0x844 JumpB
	return 0; // 0x845 Return
	
Label_2118:
	var_342_string = ""; var_343_bool = 0; // 0x846 PushV
	var_342_string = var_338_string; // 0x847 Mov
	var_344_string = ""; // 0x848 PushS
	var_345_bool = var_338_string == var_344_string; // 0x849 Eq
	if(var_345_bool == 0) goto Label_2125; // 0x84a JumpB
	var_343_bool = 0; // 0x84b MovB
	goto Label_2126; // 0x84c Jump
	
Label_2126:
	func_3285(var_342_string, var_343_bool); // 0x84e NEW_2
	var_2_object = var_338_string; // 0x850 TMov
	return 0; // 0x851 Return
	
Label_2125:
	var_343_bool = 1; // 0x84d MovB
}


func_3388(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; // 0xd3c PushV
	var_57_int = 0; // 0xd3d MovI
	
Label_3390:
	var_59_string = "all"; // 0xd3e PushS
	var_60_string = ""; var_61_int = 0; // 0xd3f PushV
	var_61_int = var_57_int; // 0xd40 Mov
	func_3381(var_60_string, var_61_int); // 0xd41 NEW_2
	HasAnimation(var_58_bool, var_59_string, var_60_string); // 0xd43 Func
	var_65_bool = var_58_bool == 0; // 0xd45 Not
	if(var_65_bool == 0) goto Label_3400; // 0xd46 JumpB
	goto Label_3403; // 0xd47 Jump
	
Label_3403:
	var_54_int = var_57_int; // 0xd4b Mov
	return 4; // 0xd4c Return
	
Label_3400:
	var_66_int = 1; // 0xd48 PushI
	var_57_int = var_57_int + var_66_int; // 0xd49 Add2
	goto Label_3390; // 0xd4a Jump
}


func_2636(var_0_object, var_1_object, var_2_object, var_3_string, var_730_object, var_731_object)
{
	var_0_object = var_731_object; // 0xa4d TMov
	var_1_object = var_730_object; // 0xa4e TMov
	var_3_string = 0; // 0xa4f TMovB
	var_736_int = 1; // 0xa50 PushI
	if(var_736_int == 0) goto Label_2664; // 0xa51 JumpB
	var_737_string = ""; // 0xa52 PushV
	var_737_string = "Neutral"; // 0xa53 MovS
	func_2694(var_731_object, var_737_string); // 0xa54 NEW_2
	var_745_int = 540539; // 0xa56 PushI
	SetMessage(var_745_int); // 0xa57 TObjFunc
	ClearReplies(); // 0xa59 TObjFunc
	var_746_int = 540540; // 0xa5b PushI
	var_747_int = -1; // 0xa5c PushI
	var_748_int = 42549; // 0xa5d PushI
	AddReply(var_746_int, var_747_int, var_748_int); // 0xa5e TObjFunc
	var_749_int = 540799; // 0xa60 PushI
	var_750_int = -1; // 0xa61 PushI
	var_751_int = 42848; // 0xa62 PushI
	AddReply(var_749_int, var_750_int, var_751_int); // 0xa63 TObjFunc
	goto Label_2664; // 0xa65 Jump
	
Label_2664:
	var_752_bool = 0; // 0xa68 PushV
	func_3413(var_752_bool); // 0xa69 NEW_2
	if(var_752_bool == 0) goto Label_2679; // 0xa6b JumpB
	
Label_2668:
	lshWaitForAnimEnd(); // 0xa6c Func
	var_753_string = var_3_string; // 0xa6e PushT
	if(var_753_string == 0) goto Label_2673; // 0xa6f JumpB
	goto Label_2678; // 0xa70 Jump
	
Label_2678:
	goto Label_2693; // 0xa76 Jump
	
Label_2693:
	return 0; // 0xa85 Return
	
Label_2673:
	var_754_string = ""; // 0xa71 PushV
	var_754_string = var_2_object; // 0xa72 MovT
	func_3269(var_754_string); // 0xa73 NEW_2
	goto Label_2668; // 0xa75 Jump
	
Label_2679:
	var_755_string = "all"; // 0xa77 PushS
	var_756_string = "idle"; // 0xa78 PushS
	PlayAnimation(var_755_string, var_756_string); // 0xa79 Func
	
Label_2683:
	WaitForAnimEnd(); // 0xa7b Func
	var_757_string = var_3_string; // 0xa7d PushT
	if(var_757_string == 0) goto Label_2688; // 0xa7e JumpB
	goto Label_2693; // 0xa7f Jump
	
Label_2688:
	var_758_string = "all"; // 0xa80 PushS
	var_759_string = "idle"; // 0xa81 PushS
	PlayAnimation(var_758_string, var_759_string); // 0xa82 Func
	goto Label_2683; // 0xa84 Jump
}


func_3405(var_118_int)
{
	var_118_int = 515542; // 0xd4d MovI
	return 0; // 0xd4e Return
}


func_3407(var_117_int)
{
	var_117_int = 502867; // 0xd4f MovI
	return 0; // 0xd50 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_406_object, var_407_object)
{
	var_0_object = var_407_object; // 0x52 TMov
	var_1_object = var_406_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_412_int = 1; // 0x55 PushI
	if(var_412_int == 0) goto Label_170; // 0x56 JumpB
	var_413_string = ""; // 0x57 PushV
	var_413_string = "Neutral"; // 0x58 MovS
	func_200(var_407_object, var_413_string); // 0x59 NEW_2
	var_421_int = 525297; // 0x5b PushI
	SetMessage(var_421_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_422_bool = 0; // 0x60 PushV
	var_422_bool = 1; // 0x61 MovB
	var_423_bool = 0; // 0x62 PushV
	var_423_bool = 0; // 0x63 MovB
	var_424_bool = 0; var_425_object = Obj(); // 0x64 PushV
	var_425_object = var_1_object; // 0x65 MovT
	func_3641(var_424_bool, var_425_object); // 0x66 NEW_2
	if(var_424_bool == 0) goto Label_111; // 0x68 JumpB
	var_441_bool = 0; var_442_object = Obj(); // 0x69 PushV
	var_442_object = var_1_object; // 0x6a MovT
	func_3617(var_442_object); // 0x6b NEW_2
	if(var_441_bool == 0) goto Label_111; // 0x6d JumpB
	var_423_bool = 1; // 0x6e MovB
	
Label_111:
	if(var_423_bool == 0) goto Label_127; // 0x6f JumpB
	var_447_bool = 0; // 0x70 PushV
	var_447_bool = 0; // 0x71 MovB
	var_448_bool = 0; var_449_object = Obj(); // 0x72 PushV
	var_449_object = var_1_object; // 0x73 MovT
	func_3629(var_449_object); // 0x74 NEW_2
	if(var_448_bool == 0) goto Label_125; // 0x76 JumpB
	var_454_bool = 0; var_455_object = Obj(); // 0x77 PushV
	var_455_object = var_1_object; // 0x78 MovT
	func_3641(var_454_bool, var_455_object); // 0x79 NEW_2
	if(var_454_bool == 0) goto Label_125; // 0x7b JumpB
	var_447_bool = 1; // 0x7c MovB
	
Label_125:
	if(var_447_bool == 0) goto Label_127; // 0x7d JumpB
	var_422_bool = 0; // 0x7e MovB
	
Label_127:
	if(var_422_bool == 0) goto Label_133; // 0x7f JumpB
	var_456_int = 525298; // 0x80 PushI
	var_457_int = 26667; // 0x81 PushI
	var_458_int = 26666; // 0x82 PushI
	AddReply(var_456_int, var_457_int, var_458_int); // 0x83 TObjFunc
	
Label_133:
	var_459_bool = 0; // 0x85 PushV
	var_459_bool = 0; // 0x86 MovB
	var_460_bool = 0; // 0x87 PushV
	var_460_bool = 0; // 0x88 MovB
	var_461_bool = 0; var_462_object = Obj(); // 0x89 PushV
	var_462_object = var_1_object; // 0x8a MovT
	func_3617(var_462_object); // 0x8b NEW_2
	if(var_461_bool == 0) goto Label_149; // 0x8d JumpB
	var_463_bool = 0; var_464_object = Obj(); // 0x8e PushV
	var_464_object = var_1_object; // 0x8f MovT
	func_3641(var_463_bool, var_464_object); // 0x90 NEW_2
	var_465_bool = var_463_bool == 0; // 0x92 Not
	if(var_465_bool == 0) goto Label_149; // 0x93 JumpB
	var_460_bool = 1; // 0x94 MovB
	
Label_149:
	if(var_460_bool == 0) goto Label_156; // 0x95 JumpB
	var_466_bool = 0; var_467_object = Obj(); // 0x96 PushV
	var_467_object = var_1_object; // 0x97 MovT
	func_3672(var_467_object); // 0x98 NEW_2
	if(var_466_bool == 0) goto Label_156; // 0x9a JumpB
	var_459_bool = 1; // 0x9b MovB
	
Label_156:
	if(var_459_bool == 0) goto Label_162; // 0x9c JumpB
	var_472_int = 525310; // 0x9d PushI
	var_473_int = 26679; // 0x9e PushI
	var_474_int = 26678; // 0x9f PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0xa0 TObjFunc
	
Label_162:
	var_475_int = 525305; // 0xa2 PushI
	var_476_int = -1; // 0xa3 PushI
	var_477_int = 26673; // 0xa4 PushI
	AddReply(var_475_int, var_476_int, var_477_int); // 0xa5 TObjFunc
	goto Label_170; // 0xa7 Jump
	
Label_170:
	var_478_bool = 0; // 0xaa PushV
	func_3413(var_478_bool); // 0xab NEW_2
	if(var_478_bool == 0) goto Label_185; // 0xad JumpB
	
Label_174:
	lshWaitForAnimEnd(); // 0xae Func
	var_479_string = var_3_string; // 0xb0 PushT
	if(var_479_string == 0) goto Label_179; // 0xb1 JumpB
	goto Label_184; // 0xb2 Jump
	
Label_184:
	goto Label_199; // 0xb8 Jump
	
Label_199:
	return 0; // 0xc7 Return
	
Label_179:
	var_480_string = ""; // 0xb3 PushV
	var_480_string = var_2_object; // 0xb4 MovT
	func_3269(var_480_string); // 0xb5 NEW_2
	goto Label_174; // 0xb7 Jump
	
Label_185:
	var_481_string = "all"; // 0xb9 PushS
	var_482_string = "idle"; // 0xba PushS
	PlayAnimation(var_481_string, var_482_string); // 0xbb Func
	
Label_189:
	WaitForAnimEnd(); // 0xbd Func
	var_483_string = var_3_string; // 0xbf PushT
	if(var_483_string == 0) goto Label_194; // 0xc0 JumpB
	goto Label_199; // 0xc1 Jump
	
Label_194:
	var_484_string = "all"; // 0xc2 PushS
	var_485_string = "idle"; // 0xc3 PushS
	PlayAnimation(var_484_string, var_485_string); // 0xc4 Func
	goto Label_189; // 0xc6 Jump
}


func_3409(var_119_string)
{
	var_119_string = "ui/NPC_Laska.png"; // 0xd51 MovS
	return 0; // 0xd52 Return
}


func_3411(var_120_string)
{
	var_120_string = "ui/NPC_Laska_b.png"; // 0xd53 MovS
	return 0; // 0xd54 Return
}


func_3413(var_112_bool)
{
	var_112_bool = 1; // 0xd55 MovB
	return 0; // 0xd56 Return
}


func_854(var_0_object, var_490_int, var_491_object)
{
	var_493_object = Obj(); var_494_bool = 0; var_495_int = 0; var_496_bool = 0; var_497_object = Obj(); var_498_bool = 0; var_499_int = 0; var_500_bool = 0; // 0x356 PushV
	var_0_object = var_491_object; // 0x357 TMov
	var_501_bool = 0; var_502_object = Obj(); var_503_float = 0; // 0x358 PushV
	var_502_object = var_491_object; // 0x359 Mov
	var_503_float = 70.0; // 0x35a MovF
	func_3046(var_502_object, var_503_float); // 0x35b NEW_2
	var_504_bool = var_501_bool == 0; // 0x35d Not
	if(var_504_bool == 0) goto Label_865; // 0x35e JumpB
	var_490_int = -2; // 0x35f MovI
	return 8; // 0x360 Return
	
Label_865:
	CreateDialog(var_497_object); // 0x361 Func
	var_505_int = 0; // 0x363 PushV
	func_3407(var_505_int); // 0x364 NEW_2
	SetNPCName(var_505_int); // 0x366 ObjFunc
	var_506_int = 0; // 0x368 PushV
	func_3405(var_506_int); // 0x369 NEW_2
	SetNPCDescription(var_506_int); // 0x36b ObjFunc
	var_507_string = ""; // 0x36d PushV
	func_3409(var_507_string); // 0x36e NEW_2
	SetPhoto(var_507_string); // 0x370 ObjFunc
	var_508_string = ""; // 0x372 PushV
	func_3411(var_508_string); // 0x373 NEW_2
	SetPhoto2(var_508_string); // 0x375 ObjFunc
	var_509_int = 0; // 0x377 PushV
	func_3877(var_509_int); // 0x378 NEW_2
	SetPlayerName(var_509_int); // 0x37a ObjFunc
	var_499_int = -1; // 0x37c MovI
	IsOverrideActive(var_498_bool); // 0x37d Func
	var_510_bool = var_498_bool; // 0x37f Push
	if(var_510_bool == 0) goto Label_899; // 0x380 JumpB
	var_490_int = -2; // 0x381 MovI
	return 8; // 0x382 Return
	
Label_899:
	DoDialog(var_497_object); // 0x383 Func
	var_511_bool = 0; var_512_object = Obj(); // 0x385 PushV
	var_513_object = Obj(); // 0x386 PushV
	func_3322(var_513_object); // 0x387 NEW_2
	var_512_object = var_513_object; // 0x388 Mov
	func_3131(var_511_bool, var_512_object); // 0x38a NEW_2
	var_514_object = Obj(); var_515_object = Obj(); // 0x38c PushV
	var_514_object = var_491_object; // 0x38d Mov
	var_515_object = var_497_object; // 0x38e Mov
	TaskCall(5); // 0x38f TaskCall
	func_935(var_516_object, var_517_object, var_518_string, var_519_bool, var_514_object, var_515_object); // 0x390 NEW_2
	TaskReturn(); // 0x391 TaskReturn
	IsDialogEnd(var_500_bool); // 0x393 ObjFunc
	
Label_917:
	var_563_bool = var_500_bool == 0; // 0x395 Not
	if(var_563_bool == 0) goto Label_924; // 0x396 JumpB
	sync(); // 0x397 Func
	IsDialogEnd(var_500_bool); // 0x399 ObjFunc
	goto Label_917; // 0x39b Jump
	
Label_924:
	var_564_object = Obj(); // 0x39c PushV
	var_564_object = var_491_object; // 0x39d Mov
	func_3114(); // 0x39e NEW_2
	StopDialog(var_497_object); // 0x3a0 Func
	GetReturnValue(var_499_int); // 0x3a2 ObjFunc
	var_490_int = var_499_int; // 0x3a4 Mov
	return 8; // 0x3a5 Return
}


func_3415()
{
	var_93_object = Obj(); var_94_string = ""; var_95_float = 0; // 0xd58 PushV
	var_96_object = Obj(); // 0xd59 PushV
	func_3827(var_96_object); // 0xd5a NEW_2
	var_93_object = var_96_object; // 0xd5b Mov
	var_94_string = "pt_map_burah_home"; // 0xd5d MovS
	var_95_float = 2; // 0xd5e MovI
	func_3844(var_93_object, var_94_string, var_95_float); // 0xd5f NEW_2
	var_116_object = Obj(); // 0xd61 PushV
	func_3827(var_116_object); // 0xd62 NEW_2
	ShowMap(var_116_object); // 0xd64 ObjFunc
	return 0; // 0xd66 Return
}


func_3672(var_466_bool)
{
	var_468_int = 0; var_469_string = ""; // 0xe59 PushV
	var_469_string = "ook2Laska1"; // 0xe5a MovS
	func_3338(var_468_int, var_469_string); // 0xe5b NEW_2
	var_470_int = 0; // 0xe5d PushI
	var_471_bool = var_468_int == var_470_int; // 0xe5e Eq
	if(var_471_bool == 0) goto Label_3682; // 0xe5f JumpB
	var_466_bool = 1; // 0xe60 MovB
	return 0; // 0xe61 Return
	
Label_3682:
	var_466_bool = 0; // 0xe62 MovB
	return 0; // 0xe63 Return
}


func_3684(var_521_bool)
{
	var_523_int = 0; var_524_string = ""; // 0xe65 PushV
	var_524_string = "ook5Laska1"; // 0xe66 MovS
	func_3338(var_523_int, var_524_string); // 0xe67 NEW_2
	var_525_int = 0; // 0xe69 PushI
	var_526_bool = var_523_int == var_525_int; // 0xe6a Eq
	if(var_526_bool == 0) goto Label_3694; // 0xe6b JumpB
	var_521_bool = 1; // 0xe6c MovB
	return 0; // 0xe6d Return
	
Label_3694:
	var_521_bool = 0; // 0xe6e MovB
	return 0; // 0xe6f Return
}


func_3431()
{
	var_336_string = "ook1Laska1"; // 0xd68 PushS
	var_337_int = 1; // 0xd69 PushI
	SetVariable(var_336_string, var_337_int); // 0xd6a Func
	return 0; // 0xd6c Return
}


func_3437()
{
	var_44_string = "ook1Laska2"; // 0xd6e PushS
	var_45_int = 1; // 0xd6f PushI
	SetVariable(var_44_string, var_45_int); // 0xd70 Func
	return 0; // 0xd72 Return
}


func_3696(var_598_bool)
{
	var_600_int = 0; var_601_string = ""; // 0xe71 PushV
	var_601_string = "ook6Laska1"; // 0xe72 MovS
	func_3338(var_600_int, var_601_string); // 0xe73 NEW_2
	var_602_int = 0; // 0xe75 PushI
	var_603_bool = var_600_int == var_602_int; // 0xe76 Eq
	if(var_603_bool == 0) goto Label_3706; // 0xe77 JumpB
	var_598_bool = 1; // 0xe78 MovB
	return 0; // 0xe79 Return
	
Label_3706:
	var_598_bool = 0; // 0xe7a MovB
	return 0; // 0xe7b Return
}


func_3443()
{
	var_50_object = Obj(); var_51_object = Obj(); // 0xd73 PushV
	var_52_string = "k1q01LaskaGotoBurah"; // 0xd74 PushS
	var_53_int = 1; // 0xd75 PushI
	SetVariable(var_52_string, var_53_int); // 0xd76 Func
	var_54_object = Obj(); // 0xd78 PushV
	func_3827(var_54_object); // 0xd79 NEW_2
	var_51_object = var_54_object; // 0xd7a Mov
	var_61_string = "k1q01LaskaGotoBurah"; // 0xd7c PushS
	var_62_string = "pt_map_burah_home"; // 0xd7d PushS
	var_63_int = 1; // 0xd7e PushI
	var_64_int = 524731; // 0xd7f PushI
	var_65_float = 0; // 0xd80 PushV
	func_3361(var_65_float); // 0xd81 NEW_2
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0xd83 ObjFunc
	func_3708(); // 0xd86 NEW_2
	return 2; // 0xd88 Return
}


func_3189(var_141_bool)
{
	var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; var_148_string = ""; var_149_int = 0; var_150_bool = 0; var_151_int = 0; var_152_string = ""; // 0xc75 PushV
	var_148_string = "c"; // 0xc76 MovS
	var_149_int = 0; // 0xc77 MovI
	
Label_3192:
	var_153_int = 1; // 0xc78 PushI
	if(var_153_int == 0) goto Label_3205; // 0xc79 JumpB
	var_154_int = 1; // 0xc7a PushI
	var_155_int = var_149_int + var_154_int; // 0xc7b Add
	var_156_int = var_148_string + var_155_int; // 0xc7c Add
	HasProperty(var_156_int, var_150_bool); // 0xc7d ObjFunc
	var_157_bool = var_150_bool == 0; // 0xc7f Not
	if(var_157_bool == 0) goto Label_3202; // 0xc80 JumpB
	goto Label_3205; // 0xc81 Jump
	
Label_3205:
	var_158_bool = var_149_int == 0; // 0xc85 Not
	if(var_158_bool == 0) goto Label_3209; // 0xc86 JumpB
	var_141_bool = 0; // 0xc87 MovB
	return 10; // 0xc88 Return
	
Label_3209:
	var_151_int = 0; // 0xc89 MovI
	var_159_int = 1; // 0xc8a PushI
	var_160_bool = var_149_int > var_159_int; // 0xc8b GT
	if(var_160_bool == 0) goto Label_3215; // 0xc8c JumpB
	irand(var_151_int, var_149_int); // 0xc8d Func
	
Label_3215:
	var_161_int = 1; // 0xc8f PushI
	var_162_int = var_151_int + var_161_int; // 0xc90 Add
	var_163_int = var_148_string + var_162_int; // 0xc91 Add
	GetProperty(var_163_int, var_152_string); // 0xc92 ObjFunc
	var_164_bool = 0; var_165_string = ""; // 0xc94 PushV
	var_165_string = var_152_string; // 0xc95 Mov
	func_3300(var_164_bool, var_165_string); // 0xc96 NEW_2
	var_141_bool = var_164_bool; // 0xc97 Mov
	return 10; // 0xc99 Return
	
Label_3202:
	var_170_int = 1; // 0xc82 PushI
	var_149_int = var_149_int + var_170_int; // 0xc83 Add2
	goto Label_3192; // 0xc84 Jump
}


func_1656(var_0_object, var_647_int, var_648_object)
{
	var_650_object = Obj(); var_651_bool = 0; var_652_int = 0; var_653_bool = 0; var_654_object = Obj(); var_655_bool = 0; var_656_int = 0; var_657_bool = 0; // 0x678 PushV
	var_0_object = var_648_object; // 0x679 TMov
	var_658_bool = 0; var_659_object = Obj(); var_660_float = 0; // 0x67a PushV
	var_659_object = var_648_object; // 0x67b Mov
	var_660_float = 70.0; // 0x67c MovF
	func_3046(var_659_object, var_660_float); // 0x67d NEW_2
	var_661_bool = var_658_bool == 0; // 0x67f Not
	if(var_661_bool == 0) goto Label_1667; // 0x680 JumpB
	var_647_int = -2; // 0x681 MovI
	return 8; // 0x682 Return
	
Label_1667:
	CreateDialog(var_654_object); // 0x683 Func
	var_662_int = 0; // 0x685 PushV
	func_3407(var_662_int); // 0x686 NEW_2
	SetNPCName(var_662_int); // 0x688 ObjFunc
	var_663_int = 0; // 0x68a PushV
	func_3405(var_663_int); // 0x68b NEW_2
	SetNPCDescription(var_663_int); // 0x68d ObjFunc
	var_664_string = ""; // 0x68f PushV
	func_3409(var_664_string); // 0x690 NEW_2
	SetPhoto(var_664_string); // 0x692 ObjFunc
	var_665_string = ""; // 0x694 PushV
	func_3411(var_665_string); // 0x695 NEW_2
	SetPhoto2(var_665_string); // 0x697 ObjFunc
	var_666_int = 0; // 0x699 PushV
	func_3877(var_666_int); // 0x69a NEW_2
	SetPlayerName(var_666_int); // 0x69c ObjFunc
	var_656_int = -1; // 0x69e MovI
	IsOverrideActive(var_655_bool); // 0x69f Func
	var_667_bool = var_655_bool; // 0x6a1 Push
	if(var_667_bool == 0) goto Label_1701; // 0x6a2 JumpB
	var_647_int = -2; // 0x6a3 MovI
	return 8; // 0x6a4 Return
	
Label_1701:
	DoDialog(var_654_object); // 0x6a5 Func
	var_668_bool = 0; var_669_object = Obj(); // 0x6a7 PushV
	var_670_object = Obj(); // 0x6a8 PushV
	func_3322(var_670_object); // 0x6a9 NEW_2
	var_669_object = var_670_object; // 0x6aa Mov
	func_3131(var_668_bool, var_669_object); // 0x6ac NEW_2
	var_671_object = Obj(); var_672_object = Obj(); // 0x6ae PushV
	var_671_object = var_648_object; // 0x6af Mov
	var_672_object = var_654_object; // 0x6b0 Mov
	TaskCall(9); // 0x6b1 TaskCall
	func_1737(var_673_object, var_674_object, var_675_string, var_676_bool, var_671_object, var_672_object); // 0x6b2 NEW_2
	TaskReturn(); // 0x6b3 TaskReturn
	IsDialogEnd(var_657_bool); // 0x6b5 ObjFunc
	
Label_1719:
	var_704_bool = var_657_bool == 0; // 0x6b7 Not
	if(var_704_bool == 0) goto Label_1726; // 0x6b8 JumpB
	sync(); // 0x6b9 Func
	IsDialogEnd(var_657_bool); // 0x6bb ObjFunc
	goto Label_1719; // 0x6bd Jump
	
Label_1726:
	var_705_object = Obj(); // 0x6be PushV
	var_705_object = var_648_object; // 0x6bf Mov
	func_3114(); // 0x6c0 NEW_2
	StopDialog(var_654_object); // 0x6c2 Func
	GetReturnValue(var_656_int); // 0x6c4 ObjFunc
	var_647_int = var_656_int; // 0x6c6 Mov
	return 8; // 0x6c7 Return
}


func_2938()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0xb7a PushV
	WaitForAnimEnd(); // 0xb7b Func
	var_52_bool = 0; // 0xb7d PushV
	func_3041(var_52_bool); // 0xb7e NEW_2
	var_53_bool = var_52_bool == 0; // 0xb80 Not
	if(var_53_bool == 0) goto Label_2947; // 0xb81 JumpB
	return 12; // 0xb82 Return
	
Label_2947:
	var_54_int = 0; // 0xb83 PushV
	func_3388(var_54_int); // 0xb84 NEW_2
	var_46_int = var_54_int; // 0xb85 Mov
	var_47_int = 0; // 0xb87 MovI
	
Label_2952:
	var_67_bool = 0; // 0xb88 PushV
	var_67_bool = 0; // 0xb89 MovB
	var_68_int = 5; // 0xb8a PushI
	var_69_bool = var_47_int < var_68_int; // 0xb8b LT
	if(var_69_bool == 0) goto Label_2962; // 0xb8c JumpB
	var_70_bool = 0; // 0xb8d PushV
	func_3041(var_70_bool); // 0xb8e NEW_2
	if(var_70_bool == 0) goto Label_2962; // 0xb90 JumpB
	var_67_bool = 1; // 0xb91 MovB
	
Label_2962:
	if(var_67_bool == 0) goto Label_3004; // 0xb92 JumpB
	var_71_bool = var_46_int == 0; // 0xb93 Not
	if(var_71_bool == 0) goto Label_2972; // 0xb94 JumpB
	var_72_int = 3; // 0xb95 PushI
	Sleep(var_72_int, var_48_bool); // 0xb96 Func
	var_73_bool = var_48_bool == 0; // 0xb98 Not
	if(var_73_bool == 0) goto Label_2971; // 0xb99 JumpB
	goto Label_3004; // 0xb9a Jump
	
Label_3004:
	ResetAAS(); // 0xbbc Func
	return 12; // 0xbbe Return
	
Label_2971:
	goto Label_2993; // 0xb9b Jump
	
Label_2993:
	var_74_bool = 0; // 0xbb1 PushV
	func_3007(var_74_bool); // 0xbb2 NEW_2
	var_75_bool = var_74_bool == 0; // 0xbb4 Not
	if(var_75_bool == 0) goto Label_2999; // 0xbb5 JumpB
	goto Label_3004; // 0xbb6 Jump
	
Label_2999:
	ResetAAS(); // 0xbb7 Func
	var_76_int = 1; // 0xbb9 PushI
	var_47_int = var_47_int + var_76_int; // 0xbba Add2
	goto Label_2952; // 0xbbb Jump
	
Label_2972:
	irand(var_49_int, var_46_int); // 0xb9c Func
	var_77_int = 5; // 0xb9e PushI
	irand(var_50_int, var_77_int); // 0xb9f Func
	var_78_int = 0; // 0xba1 PushI
	var_79_bool = var_50_int != var_78_int; // 0xba2 Neq
	if(var_79_bool == 0) goto Label_2981; // 0xba3 JumpB
	var_49_int = 0; // 0xba4 MovI
	
Label_2981:
	var_80_string = "all"; // 0xba5 PushS
	var_81_string = ""; var_82_int = 0; // 0xba6 PushV
	var_82_int = var_49_int; // 0xba7 Mov
	func_3381(var_81_string, var_82_int); // 0xba8 NEW_2
	PlayAnimation(var_80_string, var_81_string); // 0xbaa Func
	WaitForAnimEnd(var_51_bool); // 0xbac Func
	var_83_bool = var_51_bool == 0; // 0xbae Not
	if(var_83_bool == 0) goto Label_2993; // 0xbaf JumpB
	goto Label_3004; // 0xbb0 Jump
}


func_1915(var_0_object, var_287_int, var_288_object)
{
	var_290_object = Obj(); var_291_bool = 0; var_292_int = 0; var_293_bool = 0; var_294_object = Obj(); var_295_bool = 0; var_296_int = 0; var_297_bool = 0; // 0x77b PushV
	var_0_object = var_288_object; // 0x77c TMov
	var_298_bool = 0; var_299_object = Obj(); var_300_float = 0; // 0x77d PushV
	var_299_object = var_288_object; // 0x77e Mov
	var_300_float = 70.0; // 0x77f MovF
	func_3046(var_299_object, var_300_float); // 0x780 NEW_2
	var_301_bool = var_298_bool == 0; // 0x782 Not
	if(var_301_bool == 0) goto Label_1926; // 0x783 JumpB
	var_287_int = -2; // 0x784 MovI
	return 8; // 0x785 Return
	
Label_1926:
	CreateDialog(var_294_object); // 0x786 Func
	var_302_int = 0; // 0x788 PushV
	func_3407(var_302_int); // 0x789 NEW_2
	SetNPCName(var_302_int); // 0x78b ObjFunc
	var_303_int = 0; // 0x78d PushV
	func_3405(var_303_int); // 0x78e NEW_2
	SetNPCDescription(var_303_int); // 0x790 ObjFunc
	var_304_string = ""; // 0x792 PushV
	func_3409(var_304_string); // 0x793 NEW_2
	SetPhoto(var_304_string); // 0x795 ObjFunc
	var_305_string = ""; // 0x797 PushV
	func_3411(var_305_string); // 0x798 NEW_2
	SetPhoto2(var_305_string); // 0x79a ObjFunc
	var_306_int = 0; // 0x79c PushV
	func_3877(var_306_int); // 0x79d NEW_2
	SetPlayerName(var_306_int); // 0x79f ObjFunc
	var_296_int = -1; // 0x7a1 MovI
	IsOverrideActive(var_295_bool); // 0x7a2 Func
	var_307_bool = var_295_bool; // 0x7a4 Push
	if(var_307_bool == 0) goto Label_1960; // 0x7a5 JumpB
	var_287_int = -2; // 0x7a6 MovI
	return 8; // 0x7a7 Return
	
Label_1960:
	DoDialog(var_294_object); // 0x7a8 Func
	var_308_bool = 0; var_309_object = Obj(); // 0x7aa PushV
	var_310_object = Obj(); // 0x7ab PushV
	func_3322(var_310_object); // 0x7ac NEW_2
	var_309_object = var_310_object; // 0x7ad Mov
	func_3131(var_308_bool, var_309_object); // 0x7af NEW_2
	var_311_object = Obj(); var_312_object = Obj(); // 0x7b1 PushV
	var_311_object = var_288_object; // 0x7b2 Mov
	var_312_object = var_294_object; // 0x7b3 Mov
	TaskCall(11); // 0x7b4 TaskCall
	func_1996(var_313_object, var_314_object, var_315_string, var_316_bool, var_311_object, var_312_object); // 0x7b5 NEW_2
	TaskReturn(); // 0x7b6 TaskReturn
	IsDialogEnd(var_297_bool); // 0x7b8 ObjFunc
	
Label_1978:
	var_378_bool = var_297_bool == 0; // 0x7ba Not
	if(var_378_bool == 0) goto Label_1985; // 0x7bb JumpB
	sync(); // 0x7bc Func
	IsDialogEnd(var_297_bool); // 0x7be ObjFunc
	goto Label_1978; // 0x7c0 Jump
	
Label_1985:
	var_379_object = Obj(); // 0x7c1 PushV
	var_379_object = var_288_object; // 0x7c2 Mov
	func_3114(); // 0x7c3 NEW_2
	StopDialog(var_294_object); // 0x7c5 Func
	GetReturnValue(var_296_int); // 0x7c7 ObjFunc
	var_287_int = var_296_int; // 0x7c9 Mov
	return 8; // 0x7ca Return
}


func_3708()
{
	var_68_object = Obj(); var_69_object = Obj(); // 0xe7c PushV
	var_70_int = 776; // 0xe7d PushI
	var_71_int = 1; // 0xe7e PushI
	var_72_int = 541530; // 0xe7f PushI
	CreateDiaryEntry(var_69_object, var_70_int, var_71_int, var_72_int); // 0xe80 Func
	var_73_bool = 0; var_74_object = Obj(); var_75_int = 0; // 0xe82 PushV
	var_74_object = var_69_object; // 0xe83 Mov
	var_75_int = 318; // 0xe84 MovI
	func_3799(var_73_bool, var_74_object, var_75_int); // 0xe85 NEW_2
	return 2; // 0xe87 Return
}


func_2694(var_2_object, var_737_string)
{
	var_738_bool = 0; // 0xa87 PushV
	func_3413(var_738_bool); // 0xa88 NEW_2
	var_739_bool = var_738_bool == 0; // 0xa8a Not
	if(var_739_bool == 0) goto Label_2701; // 0xa8b JumpB
	return 0; // 0xa8c Return
	
Label_2701:
	var_740_bool = var_737_string == var_2_object; // 0xa8d Eq
	if(var_740_bool == 0) goto Label_2704; // 0xa8e JumpB
	return 0; // 0xa8f Return
	
Label_2704:
	var_741_string = ""; var_742_bool = 0; // 0xa90 PushV
	var_741_string = var_737_string; // 0xa91 Mov
	var_743_string = ""; // 0xa92 PushS
	var_744_bool = var_737_string == var_743_string; // 0xa93 Eq
	if(var_744_bool == 0) goto Label_2711; // 0xa94 JumpB
	var_742_bool = 0; // 0xa95 MovB
	goto Label_2712; // 0xa96 Jump
	
Label_2712:
	func_3285(var_741_string, var_742_bool); // 0xa98 NEW_2
	var_2_object = var_737_string; // 0xa9a TMov
	return 0; // 0xa9b Return
	
Label_2711:
	var_742_bool = 1; // 0xa97 MovB
}


func_3721()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0xe89 PushV
	var_50_int = 473; // 0xe8a PushI
	var_51_int = 2; // 0xe8b PushI
	var_52_int = 527789; // 0xe8c PushI
	CreateDiaryEntry(var_49_object, var_50_int, var_51_int, var_52_int); // 0xe8d Func
	var_53_bool = 0; var_54_object = Obj(); var_55_int = 0; // 0xe8f PushV
	var_54_object = var_49_object; // 0xe90 Mov
	var_55_int = 470; // 0xe91 MovI
	func_3799(var_53_bool, var_54_object, var_55_int); // 0xe92 NEW_2
	return 2; // 0xe94 Return
}


func_3466()
{
	var_44_int = 0; var_45_int = 0; // 0xd8a PushV
	var_46_string = "k2q02"; // 0xd8b PushS
	var_47_int = 3; // 0xd8c PushI
	SetVariable(var_46_string, var_47_int); // 0xd8d Func
	func_3721(); // 0xd90 NEW_2
	var_71_string = "milk"; // 0xd92 PushS
	var_72_int = 1; // 0xd93 PushI
	RemoveItemByType(var_45_int, var_71_string, var_72_int); // 0xd94 ObjFunc
	var_73_string = "bread"; // 0xd96 PushS
	var_74_int = 1; // 0xd97 PushI
	RemoveItemByType(var_45_int, var_73_string, var_74_int); // 0xd98 ObjFunc
	var_75_string = "flower"; // 0xd9a PushS
	var_76_int = 1; // 0xd9b PushI
	RemoveItemByType(var_45_int, var_75_string, var_76_int); // 0xd9c ObjFunc
	return 2; // 0xd9e Return
}


func_651(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x28b PushV
	var_0_object = var_60_object; // 0x28c TMov
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0; // 0x28d PushV
	var_71_object = var_60_object; // 0x28e Mov
	var_72_float = 70.0; // 0x28f MovF
	func_3046(var_71_object, var_72_float); // 0x290 NEW_2
	var_116_bool = var_70_bool == 0; // 0x292 Not
	if(var_116_bool == 0) goto Label_662; // 0x293 JumpB
	var_59_int = -2; // 0x294 MovI
	return 8; // 0x295 Return
	
Label_662:
	CreateDialog(var_66_object); // 0x296 Func
	var_117_int = 0; // 0x298 PushV
	func_3407(var_117_int); // 0x299 NEW_2
	SetNPCName(var_117_int); // 0x29b ObjFunc
	var_118_int = 0; // 0x29d PushV
	func_3405(var_118_int); // 0x29e NEW_2
	SetNPCDescription(var_118_int); // 0x2a0 ObjFunc
	var_119_string = ""; // 0x2a2 PushV
	func_3409(var_119_string); // 0x2a3 NEW_2
	SetPhoto(var_119_string); // 0x2a5 ObjFunc
	var_120_string = ""; // 0x2a7 PushV
	func_3411(var_120_string); // 0x2a8 NEW_2
	SetPhoto2(var_120_string); // 0x2aa ObjFunc
	var_121_int = 0; // 0x2ac PushV
	func_3877(var_121_int); // 0x2ad NEW_2
	SetPlayerName(var_121_int); // 0x2af ObjFunc
	var_68_int = -1; // 0x2b1 MovI
	IsOverrideActive(var_67_bool); // 0x2b2 Func
	var_129_bool = var_67_bool; // 0x2b4 Push
	if(var_129_bool == 0) goto Label_696; // 0x2b5 JumpB
	var_59_int = -2; // 0x2b6 MovI
	return 8; // 0x2b7 Return
	
Label_696:
	DoDialog(var_66_object); // 0x2b8 Func
	var_130_bool = 0; var_131_object = Obj(); // 0x2ba PushV
	var_132_object = Obj(); // 0x2bb PushV
	func_3322(var_132_object); // 0x2bc NEW_2
	var_131_object = var_132_object; // 0x2bd Mov
	func_3131(var_130_bool, var_131_object); // 0x2bf NEW_2
	var_225_object = Obj(); var_226_object = Obj(); // 0x2c1 PushV
	var_225_object = var_60_object; // 0x2c2 Mov
	var_226_object = var_66_object; // 0x2c3 Mov
	TaskCall(3); // 0x2c4 TaskCall
	func_732(var_227_object, var_228_object, var_229_string, var_230_bool, var_225_object, var_226_object); // 0x2c5 NEW_2
	TaskReturn(); // 0x2c6 TaskReturn
	IsDialogEnd(var_69_bool); // 0x2c8 ObjFunc
	
Label_714:
	var_274_bool = var_69_bool == 0; // 0x2ca Not
	if(var_274_bool == 0) goto Label_721; // 0x2cb JumpB
	sync(); // 0x2cc Func
	IsDialogEnd(var_69_bool); // 0x2ce ObjFunc
	goto Label_714; // 0x2d0 Jump
	
Label_721:
	var_275_object = Obj(); // 0x2d1 PushV
	var_275_object = var_60_object; // 0x2d2 Mov
	func_3114(); // 0x2d3 NEW_2
	StopDialog(var_66_object); // 0x2d5 Func
	GetReturnValue(var_68_int); // 0x2d7 ObjFunc
	var_59_int = var_68_int; // 0x2d9 Mov
	return 8; // 0x2da Return
}


func_1428(var_2_object, var_612_string)
{
	var_613_bool = 0; // 0x595 PushV
	func_3413(var_613_bool); // 0x596 NEW_2
	var_614_bool = var_613_bool == 0; // 0x598 Not
	if(var_614_bool == 0) goto Label_1435; // 0x599 JumpB
	return 0; // 0x59a Return
	
Label_1435:
	var_615_bool = var_612_string == var_2_object; // 0x59b Eq
	if(var_615_bool == 0) goto Label_1438; // 0x59c JumpB
	return 0; // 0x59d Return
	
Label_1438:
	var_616_string = ""; var_617_bool = 0; // 0x59e PushV
	var_616_string = var_612_string; // 0x59f Mov
	var_618_string = ""; // 0x5a0 PushS
	var_619_bool = var_612_string == var_618_string; // 0x5a1 Eq
	if(var_619_bool == 0) goto Label_1445; // 0x5a2 JumpB
	var_617_bool = 0; // 0x5a3 MovB
	goto Label_1446; // 0x5a4 Jump
	
Label_1446:
	func_3285(var_616_string, var_617_bool); // 0x5a6 NEW_2
	var_2_object = var_612_string; // 0x5a8 TMov
	return 0; // 0x5a9 Return
	
Label_1445:
	var_617_bool = 1; // 0x5a5 MovB
}


func_3734()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0xe96 PushV
	var_62_int = 405; // 0xe97 PushI
	var_63_int = 2; // 0xe98 PushI
	var_64_int = 526023; // 0xe99 PushI
	CreateDiaryEntry(var_61_object, var_62_int, var_63_int, var_64_int); // 0xe9a Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0xe9c PushV
	var_66_object = var_61_object; // 0xe9d Mov
	var_67_int = -1; // 0xe9e MovI
	func_3799(var_65_bool, var_66_object, var_67_int); // 0xe9f NEW_2
	return 2; // 0xea1 Return
}


func_3226(var_172_bool)
{
	var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; var_179_string = ""; var_180_int = 0; var_181_bool = 0; var_182_int = 0; var_183_string = ""; // 0xc9a PushV
	var_184_string = "d"; // 0xc9b PushS
	var_185_int = 0; // 0xc9c PushV
	func_3366(var_185_int); // 0xc9d NEW_2
	var_191_int = var_184_string + var_185_int; // 0xc9f Add
	var_192_string = "m"; // 0xca0 PushS
	var_179_string = var_191_int + var_192_string; // 0xca1 Add2
	var_180_int = 0; // 0xca2 MovI
	
Label_3235:
	var_193_int = 1; // 0xca3 PushI
	if(var_193_int == 0) goto Label_3248; // 0xca4 JumpB
	var_194_int = 1; // 0xca5 PushI
	var_195_int = var_180_int + var_194_int; // 0xca6 Add
	var_196_int = var_179_string + var_195_int; // 0xca7 Add
	HasProperty(var_196_int, var_181_bool); // 0xca8 ObjFunc
	var_197_bool = var_181_bool == 0; // 0xcaa Not
	if(var_197_bool == 0) goto Label_3245; // 0xcab JumpB
	goto Label_3248; // 0xcac Jump
	
Label_3248:
	var_198_bool = var_180_int == 0; // 0xcb0 Not
	if(var_198_bool == 0) goto Label_3252; // 0xcb1 JumpB
	var_172_bool = 0; // 0xcb2 MovB
	return 10; // 0xcb3 Return
	
Label_3252:
	var_182_int = 0; // 0xcb4 MovI
	var_199_int = 1; // 0xcb5 PushI
	var_200_bool = var_180_int > var_199_int; // 0xcb6 GT
	if(var_200_bool == 0) goto Label_3258; // 0xcb7 JumpB
	irand(var_182_int, var_180_int); // 0xcb8 Func
	
Label_3258:
	var_201_int = 1; // 0xcba PushI
	var_202_int = var_182_int + var_201_int; // 0xcbb Add
	var_203_int = var_179_string + var_202_int; // 0xcbc Add
	GetProperty(var_203_int, var_183_string); // 0xcbd ObjFunc
	var_204_bool = 0; var_205_string = ""; // 0xcbf PushV
	var_205_string = var_183_string; // 0xcc0 Mov
	func_3300(var_204_bool, var_205_string); // 0xcc1 NEW_2
	var_172_bool = var_204_bool; // 0xcc2 Mov
	return 10; // 0xcc4 Return
	
Label_3245:
	var_206_int = 1; // 0xcad PushI
	var_180_int = var_180_int + var_206_int; // 0xcae Add2
	goto Label_3235; // 0xcaf Jump
}


func_3487()
{
	var_91_string = "ook2Laska1"; // 0xda0 PushS
	var_92_int = 1; // 0xda1 PushI
	SetVariable(var_91_string, var_92_int); // 0xda2 Func
	return 0; // 0xda4 Return
}


func_3747()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0xea3 PushV
	var_85_int = 406; // 0xea4 PushI
	var_86_int = 2; // 0xea5 PushI
	var_87_int = 526024; // 0xea6 PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0xea7 Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0xea9 PushV
	var_89_object = var_84_object; // 0xeaa Mov
	var_90_int = 405; // 0xeab MovI
	func_3799(var_88_bool, var_89_object, var_90_int); // 0xeac NEW_2
	return 2; // 0xeae Return
}


func_3493()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0xda5 PushV
	var_46_object = Obj(); // 0xda6 PushV
	func_3827(var_46_object); // 0xda7 NEW_2
	var_45_object = var_46_object; // 0xda8 Mov
	var_53_string = "k5q03LaskaGotoAlbinos"; // 0xdaa PushS
	var_54_string = "pt_k5q03_albinos_path12"; // 0xdab PushS
	var_55_int = 0; // 0xdac PushI
	var_56_int = 526026; // 0xdad PushI
	var_57_float = 0; // 0xdae PushV
	func_3361(var_57_float); // 0xdaf NEW_2
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0xdb1 ObjFunc
	func_3734(); // 0xdb4 NEW_2
	func_3747(); // 0xdb7 NEW_2
	var_91_object = Obj(); var_92_string = ""; // 0xdb9 PushV
	var_92_string = "quest_k5_03"; // 0xdba MovS
	func_3343(var_91_object, var_92_string); // 0xdbb NEW_2
	return 2; // 0xdbd Return
}


func_935(var_0_object, var_1_object, var_2_object, var_3_string, var_514_object, var_515_object)
{
	var_0_object = var_515_object; // 0x3a8 TMov
	var_1_object = var_514_object; // 0x3a9 TMov
	var_3_string = 0; // 0x3aa TMovB
	var_520_int = 1; // 0x3ab PushI
	if(var_520_int == 0) goto Label_993; // 0x3ac JumpB
	var_521_bool = 0; var_522_object = Obj(); // 0x3ad PushV
	var_522_object = var_1_object; // 0x3ae MovT
	func_3684(var_522_object); // 0x3af NEW_2
	if(var_521_bool == 0) goto Label_971; // 0x3b1 JumpB
	var_527_object = Obj(); var_528_object = Obj(); // 0x3b2 PushV
	var_527_object = var_1_object; // 0x3b3 MovT
	var_528_object = var_0_object; // 0x3b4 MovT
	func_3519(); // 0x3b5 NEW_2
	var_531_object = Obj(); var_532_object = Obj(); // 0x3b7 PushV
	var_531_object = var_1_object; // 0x3b8 MovT
	var_532_object = var_0_object; // 0x3b9 MovT
	func_3525(); // 0x3ba NEW_2
	var_535_string = ""; // 0x3bc PushV
	var_535_string = "Autizm"; // 0x3bd MovS
	func_1023(var_515_object, var_535_string); // 0x3be NEW_2
	var_543_int = 525944; // 0x3c0 PushI
	SetMessage(var_543_int); // 0x3c1 TObjFunc
	ClearReplies(); // 0x3c3 TObjFunc
	var_544_int = 542433; // 0x3c5 PushI
	var_545_int = 44818; // 0x3c6 PushI
	var_546_int = 44817; // 0x3c7 PushI
	AddReply(var_544_int, var_545_int, var_546_int); // 0x3c8 TObjFunc
	goto Label_993; // 0x3ca Jump
	
Label_993:
	var_547_bool = 0; // 0x3e1 PushV
	func_3413(var_547_bool); // 0x3e2 NEW_2
	if(var_547_bool == 0) goto Label_1008; // 0x3e4 JumpB
	
Label_997:
	lshWaitForAnimEnd(); // 0x3e5 Func
	var_548_string = var_3_string; // 0x3e7 PushT
	if(var_548_string == 0) goto Label_1002; // 0x3e8 JumpB
	goto Label_1007; // 0x3e9 Jump
	
Label_1007:
	goto Label_1022; // 0x3ef Jump
	
Label_1022:
	return 0; // 0x3fe Return
	
Label_1002:
	var_549_string = ""; // 0x3ea PushV
	var_549_string = var_2_object; // 0x3eb MovT
	func_3269(var_549_string); // 0x3ec NEW_2
	goto Label_997; // 0x3ee Jump
	
Label_1008:
	var_550_string = "all"; // 0x3f0 PushS
	var_551_string = "idle"; // 0x3f1 PushS
	PlayAnimation(var_550_string, var_551_string); // 0x3f2 Func
	
Label_1012:
	WaitForAnimEnd(); // 0x3f4 Func
	var_552_string = var_3_string; // 0x3f6 PushT
	if(var_552_string == 0) goto Label_1017; // 0x3f7 JumpB
	goto Label_1022; // 0x3f8 Jump
	
Label_1017:
	var_553_string = "all"; // 0x3f9 PushS
	var_554_string = "idle"; // 0x3fa PushS
	PlayAnimation(var_553_string, var_554_string); // 0x3fb Func
	goto Label_1012; // 0x3fd Jump
	
Label_971:
	var_555_string = ""; // 0x3cb PushV
	var_555_string = "Neutral"; // 0x3cc MovS
	func_1023(var_515_object, var_555_string); // 0x3cd NEW_2
	var_556_int = 525948; // 0x3cf PushI
	SetMessage(var_556_int); // 0x3d0 TObjFunc
	ClearReplies(); // 0x3d2 TObjFunc
	var_557_int = 525949; // 0x3d4 PushI
	var_558_int = -1; // 0x3d5 PushI
	var_559_int = 27233; // 0x3d6 PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0x3d7 TObjFunc
	var_560_int = 529092; // 0x3d9 PushI
	var_561_int = -1; // 0x3da PushI
	var_562_int = 30537; // 0x3db PushI
	AddReply(var_560_int, var_561_int, var_562_int); // 0x3dc TObjFunc
	goto Label_993; // 0x3de Jump
}


func_3760()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0xeb0 PushV
	var_62_int = 748; // 0xeb1 PushI
	var_63_int = 2; // 0xeb2 PushI
	var_64_int = 539627; // 0xeb3 PushI
	CreateDiaryEntry(var_61_object, var_62_int, var_63_int, var_64_int); // 0xeb4 Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0xeb6 PushV
	var_66_object = var_61_object; // 0xeb7 Mov
	var_67_int = -1; // 0xeb8 MovI
	func_3799(var_65_bool, var_66_object, var_67_int); // 0xeb9 NEW_2
	return 2; // 0xebb Return
}


func_3773()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0xebd PushV
	var_85_int = 749; // 0xebe PushI
	var_86_int = 2; // 0xebf PushI
	var_87_int = 539628; // 0xec0 PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0xec1 Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0xec3 PushV
	var_89_object = var_84_object; // 0xec4 Mov
	var_90_int = 748; // 0xec5 MovI
	func_3799(var_88_bool, var_89_object, var_90_int); // 0xec6 NEW_2
	return 2; // 0xec8 Return
}


func_3519()
{
	var_529_string = "ook5Laska1"; // 0xdc0 PushS
	var_530_int = 1; // 0xdc1 PushI
	SetVariable(var_529_string, var_530_int); // 0xdc2 Func
	return 0; // 0xdc4 Return
}


func_3007(var_74_bool)
{
	var_74_bool = 1; // 0xbbf MovB
	return 0; // 0xbc0 Return
}


func_3009()
{
	StopAnimation(); // 0xbc1 Func
	StopGroup0(); // 0xbc3 Func
	return 0; // 0xbc5 Return
}


func_3269(var_258_string)
{
	var_259_bool = 0; var_260_float = 0; var_261_float = 0; var_262_bool = 0; var_263_float = 0; var_264_float = 0; // 0xcc5 PushV
	lshHasAnimation(var_262_bool, var_258_string); // 0xcc6 Func
	var_265_bool = var_262_bool; // 0xcc8 Push
	if(var_265_bool == 0) goto Label_3280; // 0xcc9 JumpB
	lshGetAnimTimes(var_258_string, var_263_float, var_264_float); // 0xcca Func
	var_266_bool = 0; // 0xccc PushB
	lshPlayAnimation(var_263_float, var_264_float, var_266_bool); // 0xccd Func
	goto Label_3284; // 0xccf Jump
	
Label_3284:
	return 6; // 0xcd4 Return
	
Label_3280:
	var_267_string = "Can't find lsh animation : "; // 0xcd0 PushS
	var_268_int = var_267_string + var_258_string; // 0xcd1 Add
	Trace(var_268_int); // 0xcd2 Func
}


func_3525()
{
	var_533_string = "k5LaskaVisit"; // 0xdc6 PushS
	var_534_int = 1; // 0xdc7 PushI
	SetVariable(var_533_string, var_534_int); // 0xdc8 Func
	return 0; // 0xdca Return
}


func_3014(var_51_float)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xbc6 PushV
	GetPosition(var_56_cvector); // 0xbc7 Func
	GetPosition(var_57_cvector); // 0xbc9 ObjFunc
	var_58_cvector = var_57_cvector - var_56_cvector; // 0xbcb Sub2
	var_51_float = var_58_cvector | var_58_cvector; // 0xbcc Or2
	return 6; // 0xbcd Return
}


func_200(var_2_object, var_413_string)
{
	var_414_bool = 0; // 0xc9 PushV
	func_3413(var_414_bool); // 0xca NEW_2
	var_415_bool = var_414_bool == 0; // 0xcc Not
	if(var_415_bool == 0) goto Label_207; // 0xcd JumpB
	return 0; // 0xce Return
	
Label_207:
	var_416_bool = var_413_string == var_2_object; // 0xcf Eq
	if(var_416_bool == 0) goto Label_210; // 0xd0 JumpB
	return 0; // 0xd1 Return
	
Label_210:
	var_417_string = ""; var_418_bool = 0; // 0xd2 PushV
	var_417_string = var_413_string; // 0xd3 Mov
	var_419_string = ""; // 0xd4 PushS
	var_420_bool = var_413_string == var_419_string; // 0xd5 Eq
	if(var_420_bool == 0) goto Label_217; // 0xd6 JumpB
	var_418_bool = 0; // 0xd7 MovB
	goto Label_218; // 0xd8 Jump
	
Label_218:
	func_3285(var_417_string, var_418_bool); // 0xda NEW_2
	var_2_object = var_413_string; // 0xdc TMov
	return 0; // 0xdd Return
	
Label_217:
	var_418_bool = 1; // 0xd9 MovB
}


func_1737(var_0_object, var_1_object, var_2_object, var_3_string, var_671_object, var_672_object)
{
	var_0_object = var_672_object; // 0x6ca TMov
	var_1_object = var_671_object; // 0x6cb TMov
	var_3_string = 0; // 0x6cc TMovB
	var_677_int = 1; // 0x6cd PushI
	if(var_677_int == 0) goto Label_1770; // 0x6ce JumpB
	var_678_string = ""; // 0x6cf PushV
	var_678_string = "Neutral"; // 0x6d0 MovS
	func_1800(var_672_object, var_678_string); // 0x6d1 NEW_2
	var_686_int = 535284; // 0x6d3 PushI
	SetMessage(var_686_int); // 0x6d4 TObjFunc
	ClearReplies(); // 0x6d6 TObjFunc
	var_687_int = 535285; // 0x6d8 PushI
	var_688_int = 36962; // 0x6d9 PushI
	var_689_int = 36961; // 0x6da PushI
	AddReply(var_687_int, var_688_int, var_689_int); // 0x6db TObjFunc
	var_690_int = 535292; // 0x6dd PushI
	var_691_int = -1; // 0x6de PushI
	var_692_int = 36968; // 0x6df PushI
	AddReply(var_690_int, var_691_int, var_692_int); // 0x6e0 TObjFunc
	var_693_int = 535293; // 0x6e2 PushI
	var_694_int = -1; // 0x6e3 PushI
	var_695_int = 36969; // 0x6e4 PushI
	AddReply(var_693_int, var_694_int, var_695_int); // 0x6e5 TObjFunc
	goto Label_1770; // 0x6e7 Jump
	
Label_1770:
	var_696_bool = 0; // 0x6ea PushV
	func_3413(var_696_bool); // 0x6eb NEW_2
	if(var_696_bool == 0) goto Label_1785; // 0x6ed JumpB
	
Label_1774:
	lshWaitForAnimEnd(); // 0x6ee Func
	var_697_string = var_3_string; // 0x6f0 PushT
	if(var_697_string == 0) goto Label_1779; // 0x6f1 JumpB
	goto Label_1784; // 0x6f2 Jump
	
Label_1784:
	goto Label_1799; // 0x6f8 Jump
	
Label_1799:
	return 0; // 0x707 Return
	
Label_1779:
	var_698_string = ""; // 0x6f3 PushV
	var_698_string = var_2_object; // 0x6f4 MovT
	func_3269(var_698_string); // 0x6f5 NEW_2
	goto Label_1774; // 0x6f7 Jump
	
Label_1785:
	var_699_string = "all"; // 0x6f9 PushS
	var_700_string = "idle"; // 0x6fa PushS
	PlayAnimation(var_699_string, var_700_string); // 0x6fb Func
	
Label_1789:
	WaitForAnimEnd(); // 0x6fd Func
	var_701_string = var_3_string; // 0x6ff PushT
	if(var_701_string == 0) goto Label_1794; // 0x700 JumpB
	goto Label_1799; // 0x701 Jump
	
Label_1794:
	var_702_string = "all"; // 0x702 PushS
	var_703_string = "idle"; // 0x703 PushS
	PlayAnimation(var_702_string, var_703_string); // 0x704 Func
	goto Label_1789; // 0x706 Jump
}


func_2762(var_0_object)
{
	var_36_bool = 0; // 0xaca PushV
	func_3041(var_36_bool); // 0xacb NEW_2
	var_39_bool = var_36_bool == 0; // 0xacd Not
	if(var_39_bool == 0) goto Label_2769; // 0xace JumpB
	Hold(); // 0xacf Func
	
Label_2769:
	GetDirection(var_0_object); // 0xad1 Func
	
Label_2771:
	func_2938(); // 0xad4 NEW_2
	goto Label_2771; // 0xad6 Jump
}


func_3786(var_82_object)
{
	var_83_object = Obj(); var_84_object = Obj(); // 0xeca PushV
	GetDiaryRoot(var_84_object); // 0xecb Func
	var_85_bool = var_84_object == 0; // 0xecd Not
	if(var_85_bool == 0) goto Label_3796; // 0xece JumpB
	var_86_string = "Can't retrieve diary root"; // 0xecf PushS
	Trace(var_86_string); // 0xed0 Func
	var_82_object = 0; // 0xed2 MovB
	return 2; // 0xed3 Return
	
Label_3796:
	var_82_object = var_84_object; // 0xed4 Mov
	return 2; // 0xed5 Return
}


func_3531()
{
	var_606_string = "k6LaskaVisit"; // 0xdcc PushS
	var_607_int = 1; // 0xdcd PushI
	SetVariable(var_606_string, var_607_int); // 0xdce Func
	return 0; // 0xdd0 Return
}


func_1996(var_0_object, var_1_object, var_2_object, var_3_string, var_311_object, var_312_object)
{
	var_0_object = var_312_object; // 0x7cd TMov
	var_1_object = var_311_object; // 0x7ce TMov
	var_3_string = 0; // 0x7cf TMovB
	var_317_int = 1; // 0x7d0 PushI
	if(var_317_int == 0) goto Label_2078; // 0x7d1 JumpB
	var_318_bool = 0; // 0x7d2 PushV
	var_318_bool = 0; // 0x7d3 MovB
	var_319_bool = 0; var_320_object = Obj(); // 0x7d4 PushV
	var_320_object = var_1_object; // 0x7d5 MovT
	func_3581(var_320_object); // 0x7d6 NEW_2
	if(var_319_bool == 0) goto Label_2016; // 0x7d8 JumpB
	var_327_bool = 0; var_328_object = Obj(); // 0x7d9 PushV
	var_328_object = var_1_object; // 0x7da MovT
	func_3593(var_328_object); // 0x7db NEW_2
	var_333_bool = var_327_bool == 0; // 0x7dd Not
	if(var_333_bool == 0) goto Label_2016; // 0x7de JumpB
	var_318_bool = 1; // 0x7df MovB
	
Label_2016:
	if(var_318_bool == 0) goto Label_2042; // 0x7e0 JumpB
	var_334_object = Obj(); var_335_object = Obj(); // 0x7e1 PushV
	var_334_object = var_1_object; // 0x7e2 MovT
	var_335_object = var_0_object; // 0x7e3 MovT
	func_3431(); // 0x7e4 NEW_2
	var_338_string = ""; // 0x7e6 PushV
	var_338_string = "Autizm"; // 0x7e7 MovS
	func_2108(var_312_object, var_338_string); // 0x7e8 NEW_2
	var_346_int = 524644; // 0x7ea PushI
	SetMessage(var_346_int); // 0x7eb TObjFunc
	ClearReplies(); // 0x7ed TObjFunc
	var_347_int = 526298; // 0x7ef PushI
	var_348_int = 27579; // 0x7f0 PushI
	var_349_int = 27578; // 0x7f1 PushI
	AddReply(var_347_int, var_348_int, var_349_int); // 0x7f2 TObjFunc
	var_350_int = 526300; // 0x7f4 PushI
	var_351_int = 27581; // 0x7f5 PushI
	var_352_int = 27580; // 0x7f6 PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x7f7 TObjFunc
	goto Label_2078; // 0x7f9 Jump
	
Label_2078:
	var_353_bool = 0; // 0x81e PushV
	func_3413(var_353_bool); // 0x81f NEW_2
	if(var_353_bool == 0) goto Label_2093; // 0x821 JumpB
	
Label_2082:
	lshWaitForAnimEnd(); // 0x822 Func
	var_354_string = var_3_string; // 0x824 PushT
	if(var_354_string == 0) goto Label_2087; // 0x825 JumpB
	goto Label_2092; // 0x826 Jump
	
Label_2092:
	goto Label_2107; // 0x82c Jump
	
Label_2107:
	return 0; // 0x83b Return
	
Label_2087:
	var_355_string = ""; // 0x827 PushV
	var_355_string = var_2_object; // 0x828 MovT
	func_3269(var_355_string); // 0x829 NEW_2
	goto Label_2082; // 0x82b Jump
	
Label_2093:
	var_356_string = "all"; // 0x82d PushS
	var_357_string = "idle"; // 0x82e PushS
	PlayAnimation(var_356_string, var_357_string); // 0x82f Func
	
Label_2097:
	WaitForAnimEnd(); // 0x831 Func
	var_358_string = var_3_string; // 0x833 PushT
	if(var_358_string == 0) goto Label_2102; // 0x834 JumpB
	goto Label_2107; // 0x835 Jump
	
Label_2102:
	var_359_string = "all"; // 0x836 PushS
	var_360_string = "idle"; // 0x837 PushS
	PlayAnimation(var_359_string, var_360_string); // 0x838 Func
	goto Label_2097; // 0x83a Jump
	
Label_2042:
	var_361_string = ""; // 0x7fa PushV
	var_361_string = "Neutral"; // 0x7fb MovS
	func_2108(var_312_object, var_361_string); // 0x7fc NEW_2
	var_362_int = 524648; // 0x7fe PushI
	SetMessage(var_362_int); // 0x7ff TObjFunc
	ClearReplies(); // 0x801 TObjFunc
	var_363_bool = 0; // 0x803 PushV
	var_363_bool = 0; // 0x804 MovB
	var_364_bool = 0; var_365_object = Obj(); // 0x805 PushV
	var_365_object = var_1_object; // 0x806 MovT
	func_3593(var_365_object); // 0x807 NEW_2
	if(var_364_bool == 0) goto Label_2064; // 0x809 JumpB
	var_366_bool = 0; var_367_object = Obj(); // 0x80a PushV
	var_367_object = var_1_object; // 0x80b MovT
	func_3605(var_367_object); // 0x80c NEW_2
	if(var_366_bool == 0) goto Label_2064; // 0x80e JumpB
	var_363_bool = 1; // 0x80f MovB
	
Label_2064:
	if(var_363_bool == 0) goto Label_2070; // 0x810 JumpB
	var_372_int = 524681; // 0x811 PushI
	var_373_int = 43988; // 0x812 PushI
	var_374_int = 26020; // 0x813 PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x814 TObjFunc
	
Label_2070:
	var_375_int = 524649; // 0x816 PushI
	var_376_int = -1; // 0x817 PushI
	var_377_int = 25988; // 0x818 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x819 TObjFunc
	goto Label_2078; // 0x81b Jump
}


func_3022(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; // 0xbce PushV
	GetPosition(var_49_cvector); // 0xbcf Func
	var_50_cvector = var_45_cvector - var_49_cvector; // 0xbd1 Sub2
	var_52_float = GetByIndex(var_50_cvector, 0); // 0xbd2 PushE
	var_53_float = GetByIndex(var_50_cvector, 2); // 0xbd3 PushE
	Rotate(var_52_float, var_53_float, var_51_bool); // 0xbd4 Func
	var_44_bool = var_51_bool; // 0xbd6 Mov
	return 6; // 0xbd7 Return
}


func_3537()
{
	var_610_string = "ook6Laska1"; // 0xdd2 PushS
	var_611_int = 1; // 0xdd3 PushI
	SetVariable(var_610_string, var_611_int); // 0xdd4 Func
	return 0; // 0xdd6 Return
}


func_3285(var_236_string, var_237_bool)
{
	var_240_bool = 0; var_241_float = 0; var_242_float = 0; var_243_bool = 0; var_244_float = 0; var_245_float = 0; // 0xcd5 PushV
	lshHasAnimation(var_243_bool, var_236_string); // 0xcd6 Func
	var_246_bool = var_243_bool; // 0xcd8 Push
	if(var_246_bool == 0) goto Label_3295; // 0xcd9 JumpB
	lshGetAnimTimes(var_236_string, var_244_float, var_245_float); // 0xcda Func
	lshPlayAnimation(var_244_float, var_245_float, var_237_bool); // 0xcdc Func
	goto Label_3299; // 0xcde Jump
	
Label_3299:
	return 6; // 0xce3 Return
	
Label_3295:
	var_247_string = "Can't find lsh animation : "; // 0xcdf PushS
	var_248_int = var_247_string + var_236_string; // 0xce0 Add
	Trace(var_248_int); // 0xce1 Func
}


func_3799(var_73_bool, var_74_object, var_75_int)
{
	var_76_object = Obj(); var_77_object = Obj(); var_78_int = 0; var_79_object = Obj(); var_80_object = Obj(); var_81_int = 0; // 0xed7 PushV
	var_82_object = Obj(); // 0xed8 PushV
	func_3786(var_82_object); // 0xed9 NEW_2
	var_79_object = var_82_object; // 0xeda Mov
	Find(var_75_int, var_80_object); // 0xedc ObjFunc
	var_87_bool = var_80_object == 0; // 0xede Not
	if(var_87_bool == 0) goto Label_3814; // 0xedf JumpB
	var_88_string = "Can't find diary parent with id: "; // 0xee0 PushS
	var_89_int = var_88_string + var_75_int; // 0xee1 Add
	Trace(var_89_int); // 0xee2 Func
	var_73_bool = 0; // 0xee4 MovB
	return 6; // 0xee5 Return
	
Label_3814:
	AddChild(var_74_object); // 0xee6 ObjFunc
	var_90_int = 7; // 0xee8 PushI
	SendWorldWndMessage(var_90_int); // 0xee9 Func
	GetCategory(var_81_int); // 0xeeb ObjFunc
	SetDiarySection(var_81_int); // 0xeed Func
	var_73_bool = 0; // 0xeef MovB
	return 6; // 0xef0 Return
}


func_2776(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0xad8 PushV
	var_64_string = "player"; // 0xad9 PushS
	FindActor(var_63_object, var_64_string); // 0xada Func
	var_65_bool = var_63_object == 0; // 0xadc Not
	if(var_65_bool == 0) goto Label_2784; // 0xadd JumpB
	var_61_bool = 0; // 0xade MovB
	return 2; // 0xadf Return
	
Label_2784:
	var_66_bool = 0; var_67_object = Obj(); // 0xae0 PushV
	var_67_object = var_63_object; // 0xae1 Mov
	func_3032(var_67_object); // 0xae2 NEW_2
	var_61_bool = var_66_bool; // 0xae3 Mov
	return 2; // 0xae5 Return
}


func_3543()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0xdd7 PushV
	var_46_object = Obj(); // 0xdd8 PushV
	func_3827(var_46_object); // 0xdd9 NEW_2
	var_45_object = var_46_object; // 0xdda Mov
	var_53_string = "k6q03LaskaGotoAlbinos"; // 0xddc PushS
	var_54_string = "pt_k6q03_albinos_path9"; // 0xddd PushS
	var_55_int = 0; // 0xdde PushI
	var_56_int = 511153; // 0xddf PushI
	var_57_float = 0; // 0xde0 PushV
	func_3361(var_57_float); // 0xde1 NEW_2
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0xde3 ObjFunc
	func_3760(); // 0xde6 NEW_2
	func_3773(); // 0xde9 NEW_2
	var_91_object = Obj(); var_92_string = ""; // 0xdeb PushV
	var_92_string = "quest_k6_03"; // 0xdec MovS
	func_3343(var_91_object, var_92_string); // 0xded NEW_2
	return 2; // 0xdef Return
}


func_3032(var_40_bool)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0xbd8 PushV
	GetPosition(var_43_cvector); // 0xbd9 ObjFunc
	var_44_bool = 0; var_45_cvector = CVector(0,0,0); // 0xbdb PushV
	var_45_cvector = var_43_cvector; // 0xbdc Mov
	func_3022(var_44_bool, var_45_cvector); // 0xbdd NEW_2
	var_40_bool = var_44_bool; // 0xbde Mov
	return 2; // 0xbe0 Return
}


func_732(var_0_object, var_1_object, var_2_object, var_3_string, var_225_object, var_226_object)
{
	var_0_object = var_226_object; // 0x2dd TMov
	var_1_object = var_225_object; // 0x2de TMov
	var_3_string = 0; // 0x2df TMovB
	var_231_int = 1; // 0x2e0 PushI
	if(var_231_int == 0) goto Label_760; // 0x2e1 JumpB
	var_232_string = ""; // 0x2e2 PushV
	var_232_string = "Neutral"; // 0x2e3 MovS
	func_790(var_226_object, var_232_string); // 0x2e4 NEW_2
	var_249_int = 525498; // 0x2e6 PushI
	SetMessage(var_249_int); // 0x2e7 TObjFunc
	ClearReplies(); // 0x2e9 TObjFunc
	var_250_int = 525499; // 0x2eb PushI
	var_251_int = -1; // 0x2ec PushI
	var_252_int = 26855; // 0x2ed PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x2ee TObjFunc
	var_253_int = 526256; // 0x2f0 PushI
	var_254_int = -1; // 0x2f1 PushI
	var_255_int = 27530; // 0x2f2 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x2f3 TObjFunc
	goto Label_760; // 0x2f5 Jump
	
Label_760:
	var_256_bool = 0; // 0x2f8 PushV
	func_3413(var_256_bool); // 0x2f9 NEW_2
	if(var_256_bool == 0) goto Label_775; // 0x2fb JumpB
	
Label_764:
	lshWaitForAnimEnd(); // 0x2fc Func
	var_257_string = var_3_string; // 0x2fe PushT
	if(var_257_string == 0) goto Label_769; // 0x2ff JumpB
	goto Label_774; // 0x300 Jump
	
Label_774:
	goto Label_789; // 0x306 Jump
	
Label_789:
	return 0; // 0x315 Return
	
Label_769:
	var_258_string = ""; // 0x301 PushV
	var_258_string = var_2_object; // 0x302 MovT
	func_3269(var_258_string); // 0x303 NEW_2
	goto Label_764; // 0x305 Jump
	
Label_775:
	var_269_string = "all"; // 0x307 PushS
	var_270_string = "idle"; // 0x308 PushS
	PlayAnimation(var_269_string, var_270_string); // 0x309 Func
	
Label_779:
	WaitForAnimEnd(); // 0x30b Func
	var_271_string = var_3_string; // 0x30d PushT
	if(var_271_string == 0) goto Label_784; // 0x30e JumpB
	goto Label_789; // 0x30f Jump
	
Label_784:
	var_272_string = "all"; // 0x310 PushS
	var_273_string = "idle"; // 0x311 PushS
	PlayAnimation(var_272_string, var_273_string); // 0x312 Func
	goto Label_779; // 0x314 Jump
}


func_3041(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0xbe1 PushV
	IsLoaded(var_38_bool); // 0xbe2 Func
	var_36_bool = var_38_bool; // 0xbe4 Mov
	return 2; // 0xbe5 Return
}


func_3300(var_164_bool, var_165_string)
{
	var_166_bool = 0; var_167_bool = 0; // 0xce4 PushV
	var_168_bool = 0; // 0xce5 PushV
	func_3413(var_168_bool); // 0xce6 NEW_2
	if(var_168_bool == 0) goto Label_3313; // 0xce8 JumpB
	lshHasSpeech(var_167_bool, var_165_string); // 0xce9 Func
	var_169_bool = var_167_bool; // 0xceb Push
	if(var_169_bool == 0) goto Label_3313; // 0xcec JumpB
	lshPlaySpeech(var_165_string); // 0xced Func
	var_164_bool = 1; // 0xcef MovB
	return 2; // 0xcf0 Return
	
Label_3313:
	var_164_bool = 0; // 0xcf1 MovB
	return 2; // 0xcf2 Return
}


func_1254(var_0_object, var_567_int, var_568_object)
{
	var_570_object = Obj(); var_571_bool = 0; var_572_int = 0; var_573_bool = 0; var_574_object = Obj(); var_575_bool = 0; var_576_int = 0; var_577_bool = 0; // 0x4e6 PushV
	var_0_object = var_568_object; // 0x4e7 TMov
	var_578_bool = 0; var_579_object = Obj(); var_580_float = 0; // 0x4e8 PushV
	var_579_object = var_568_object; // 0x4e9 Mov
	var_580_float = 70.0; // 0x4ea MovF
	func_3046(var_579_object, var_580_float); // 0x4eb NEW_2
	var_581_bool = var_578_bool == 0; // 0x4ed Not
	if(var_581_bool == 0) goto Label_1265; // 0x4ee JumpB
	var_567_int = -2; // 0x4ef MovI
	return 8; // 0x4f0 Return
	
Label_1265:
	CreateDialog(var_574_object); // 0x4f1 Func
	var_582_int = 0; // 0x4f3 PushV
	func_3407(var_582_int); // 0x4f4 NEW_2
	SetNPCName(var_582_int); // 0x4f6 ObjFunc
	var_583_int = 0; // 0x4f8 PushV
	func_3405(var_583_int); // 0x4f9 NEW_2
	SetNPCDescription(var_583_int); // 0x4fb ObjFunc
	var_584_string = ""; // 0x4fd PushV
	func_3409(var_584_string); // 0x4fe NEW_2
	SetPhoto(var_584_string); // 0x500 ObjFunc
	var_585_string = ""; // 0x502 PushV
	func_3411(var_585_string); // 0x503 NEW_2
	SetPhoto2(var_585_string); // 0x505 ObjFunc
	var_586_int = 0; // 0x507 PushV
	func_3877(var_586_int); // 0x508 NEW_2
	SetPlayerName(var_586_int); // 0x50a ObjFunc
	var_576_int = -1; // 0x50c MovI
	IsOverrideActive(var_575_bool); // 0x50d Func
	var_587_bool = var_575_bool; // 0x50f Push
	if(var_587_bool == 0) goto Label_1299; // 0x510 JumpB
	var_567_int = -2; // 0x511 MovI
	return 8; // 0x512 Return
	
Label_1299:
	DoDialog(var_574_object); // 0x513 Func
	var_588_bool = 0; var_589_object = Obj(); // 0x515 PushV
	var_590_object = Obj(); // 0x516 PushV
	func_3322(var_590_object); // 0x517 NEW_2
	var_589_object = var_590_object; // 0x518 Mov
	func_3131(var_588_bool, var_589_object); // 0x51a NEW_2
	var_591_object = Obj(); var_592_object = Obj(); // 0x51c PushV
	var_591_object = var_568_object; // 0x51d Mov
	var_592_object = var_574_object; // 0x51e Mov
	TaskCall(7); // 0x51f TaskCall
	func_1335(var_593_object, var_594_object, var_595_string, var_596_bool, var_591_object, var_592_object); // 0x520 NEW_2
	TaskReturn(); // 0x521 TaskReturn
	IsDialogEnd(var_577_bool); // 0x523 ObjFunc
	
Label_1317:
	var_643_bool = var_577_bool == 0; // 0x525 Not
	if(var_643_bool == 0) goto Label_1324; // 0x526 JumpB
	sync(); // 0x527 Func
	IsDialogEnd(var_577_bool); // 0x529 ObjFunc
	goto Label_1317; // 0x52b Jump
	
Label_1324:
	var_644_object = Obj(); // 0x52c PushV
	var_644_object = var_568_object; // 0x52d Mov
	func_3114(); // 0x52e NEW_2
	StopDialog(var_574_object); // 0x530 Func
	GetReturnValue(var_576_int); // 0x532 ObjFunc
	var_567_int = var_576_int; // 0x534 Mov
	return 8; // 0x535 Return
}


func_2791(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0); // 0xae7 PushE
	var_114_float = GetByIndex(var_0_object, 2); // 0xae8 PushE
	RotateAsync(var_113_float, var_114_float); // 0xae9 Func
	return 0; // 0xaeb Return
}


func_3046(var_70_bool, var_72_float)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0; // 0xbe6 PushV
	GetPosition(var_83_cvector); // 0xbe7 ObjFunc
	GetEyesHeight(var_82_float); // 0xbe9 ObjFunc
	var_91_float = GetByIndex(var_83_cvector, 1); // 0xbeb PushE
	var_91_float = var_91_float + var_82_float; // 0xbec Add2
	SetByIndex(var_83_cvector, 1) = var_91_float; // 0xbed PopE
	GetPosition(var_84_cvector); // 0xbee Func
	GetEyesHeight(var_82_float); // 0xbf0 Func
	var_92_float = GetByIndex(var_84_cvector, 1); // 0xbf2 PushE
	var_92_float = var_92_float + var_82_float; // 0xbf3 Add2
	SetByIndex(var_84_cvector, 1) = var_92_float; // 0xbf4 PopE
	var_85_cvector = var_83_cvector - var_84_cvector; // 0xbf5 Sub2
	var_93_float = GetByIndex(var_85_cvector, 1); // 0xbf6 PushE
	var_93_float = 0; // 0xbf7 MovI
	SetByIndex(var_85_cvector, 1) = var_93_float; // 0xbf8 PopE
	var_94_int = var_85_cvector | var_85_cvector; // 0xbf9 Or
	var_95_float = sqrt(var_94_int); // 0xbfa Sqrt
	var_85_cvector = var_85_cvector / var_85_cvector; // 0xbfb Div2
	var_86_cvector = -var_85_cvector; // 0xbfc Neg2
	var_96_float = var_85_cvector * var_72_float; // 0xbfd Mult
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0xbfe PushV
	var_99_cvector = CVector(0.0, 1.0, 0.0); // 0xbff PushVec
	var_98_cvector = var_86_cvector ^ var_99_cvector; // 0xc00 Xor2
	func_3328(var_97_cvector, var_98_cvector); // 0xc01 NEW_2
	var_105_int = 25; // 0xc03 PushI
	var_106_float = var_97_cvector * var_105_int; // 0xc04 Mult
	var_107_int = var_96_float + var_106_float; // 0xc05 Add
	var_108_cvector = CVector(0.0, 10.0, 0.0); // 0xc06 PushVec
	var_87_cvector = var_107_int - var_108_cvector; // 0xc07 Sub2
	var_88_cvector = var_84_cvector + var_87_cvector; // 0xc08 Add2
	IsOverrideActive(var_89_bool); // 0xc09 Func
	var_109_bool = var_89_bool; // 0xc0b Push
	if(var_109_bool == 0) goto Label_3087; // 0xc0c JumpB
	var_70_bool = 0; // 0xc0d MovB
	return 18; // 0xc0e Return
	
Label_3087:
	StopWorld(); // 0xc0f Func
	CameraTransit(var_88_cvector, var_86_cvector); // 0xc11 Func
	var_110_float = GetByIndex(var_87_cvector, 0); // 0xc13 PushE
	var_111_float = GetByIndex(var_87_cvector, 2); // 0xc14 PushE
	Rotate(var_110_float, var_111_float); // 0xc15 Func
	var_112_bool = 0; // 0xc17 PushV
	func_3413(var_112_bool); // 0xc18 NEW_2
	if(var_112_bool == 0) goto Label_3100; // 0xc1a JumpB
	goto Label_3108; // 0xc1b Jump
	
Label_3108:
	CameraWaitForPlayFinish(); // 0xc24 Func
	ResumeWorld(); // 0xc26 Func
	var_70_bool = 1; // 0xc28 MovB
	return 18; // 0xc29 Return
	
Label_3100:
	var_113_string = "head"; // 0xc1c PushS
	HasAnimationTrack(var_90_bool, var_113_string); // 0xc1d Func
	var_114_bool = var_90_bool; // 0xc1f Push
	if(var_114_bool == 0) goto Label_3108; // 0xc20 JumpB
	var_115_string = "head"; // 0xc21 PushS
	LookAsyncCamera(var_115_string); // 0xc22 Func
}


func_2796(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0; // 0xaec PushV
	var_49_string = "player"; // 0xaed PushS
	FindActor(var_47_object, var_49_string); // 0xaee Func
	var_50_bool = var_47_object == 0; // 0xaf0 Not
	if(var_50_bool == 0) goto Label_2804; // 0xaf1 JumpB
	var_44_bool = 0; // 0xaf2 MovB
	return 4; // 0xaf3 Return
	
Label_2804:
	var_51_float = 0; var_52_object = Obj(); // 0xaf4 PushV
	var_52_object = var_47_object; // 0xaf5 Mov
	func_3014(var_52_object); // 0xaf6 NEW_2
	var_59_float = 90000.0; // 0xaf8 PushF
	var_60_bool = var_51_float > var_59_float; // 0xaf9 GT
	if(var_60_bool == 0) goto Label_2813; // 0xafa JumpB
	var_44_bool = 0; // 0xafb MovB
	return 4; // 0xafc Return
	
Label_2813:
	CanSee(var_48_bool, var_47_object); // 0xafd Func
	var_44_bool = var_48_bool; // 0xaff Mov
	return 4; // 0xb00 Return
}


func_3569()
{
	var_79_string = "playsound"; // 0xdf2 PushS
	var_80_string = "giveitem"; // 0xdf3 PushS
	TriggerWorld(var_79_string, var_80_string); // 0xdf4 Func
	return 0; // 0xdf6 Return
}


func_3315()
{
	var_39_bool = 0; // 0xcf3 PushV
	func_3413(var_39_bool); // 0xcf4 NEW_2
	if(var_39_bool == 0) goto Label_3321; // 0xcf6 JumpB
	lshStopSpeech(); // 0xcf7 Func
	
Label_3321:
	return 0; // 0xcf9 Return
}


func_3827(var_54_object)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); // 0xef3 PushV
	GetMainOutdoorScene(var_57_object); // 0xef4 Func
	var_59_bool = var_57_object == 0; // 0xef6 NullEq
	if(var_59_bool == 0) goto Label_3838; // 0xef7 JumpB
	var_60_string = "Can't find main outdoor scene"; // 0xef8 PushS
	Trace(var_60_string); // 0xef9 Func
	var_58_object = 0; // 0xefb SetNull
	var_54_object = var_58_object; // 0xefc Mov
	return 4; // 0xefd Return
	
Label_3838:
	GetMap(var_58_object); // 0xefe ObjFunc
	var_54_object = var_58_object; // 0xf00 Mov
	return 4; // 0xf01 Return
}


func_3575()
{
	var_101_string = "playsound"; // 0xdf8 PushS
	var_102_string = "mapmark"; // 0xdf9 PushS
	TriggerWorld(var_101_string, var_102_string); // 0xdfa Func
	return 0; // 0xdfc Return
}


func_3322(var_132_object)
{
	var_133_object = Obj(); var_134_object = Obj(); // 0xcfa PushV
	self(var_134_object); // 0xcfb Func
	var_132_object = var_134_object; // 0xcfd Mov
	return 2; // 0xcfe Return
}


func_2555(var_0_object, var_706_int, var_707_object)
{
	var_709_object = Obj(); var_710_bool = 0; var_711_int = 0; var_712_bool = 0; var_713_object = Obj(); var_714_bool = 0; var_715_int = 0; var_716_bool = 0; // 0x9fb PushV
	var_0_object = var_707_object; // 0x9fc TMov
	var_717_bool = 0; var_718_object = Obj(); var_719_float = 0; // 0x9fd PushV
	var_718_object = var_707_object; // 0x9fe Mov
	var_719_float = 70.0; // 0x9ff MovF
	func_3046(var_718_object, var_719_float); // 0xa00 NEW_2
	var_720_bool = var_717_bool == 0; // 0xa02 Not
	if(var_720_bool == 0) goto Label_2566; // 0xa03 JumpB
	var_706_int = -2; // 0xa04 MovI
	return 8; // 0xa05 Return
	
Label_2566:
	CreateDialog(var_713_object); // 0xa06 Func
	var_721_int = 0; // 0xa08 PushV
	func_3407(var_721_int); // 0xa09 NEW_2
	SetNPCName(var_721_int); // 0xa0b ObjFunc
	var_722_int = 0; // 0xa0d PushV
	func_3405(var_722_int); // 0xa0e NEW_2
	SetNPCDescription(var_722_int); // 0xa10 ObjFunc
	var_723_string = ""; // 0xa12 PushV
	func_3409(var_723_string); // 0xa13 NEW_2
	SetPhoto(var_723_string); // 0xa15 ObjFunc
	var_724_string = ""; // 0xa17 PushV
	func_3411(var_724_string); // 0xa18 NEW_2
	SetPhoto2(var_724_string); // 0xa1a ObjFunc
	var_725_int = 0; // 0xa1c PushV
	func_3877(var_725_int); // 0xa1d NEW_2
	SetPlayerName(var_725_int); // 0xa1f ObjFunc
	var_715_int = -1; // 0xa21 MovI
	IsOverrideActive(var_714_bool); // 0xa22 Func
	var_726_bool = var_714_bool; // 0xa24 Push
	if(var_726_bool == 0) goto Label_2600; // 0xa25 JumpB
	var_706_int = -2; // 0xa26 MovI
	return 8; // 0xa27 Return
	
Label_2600:
	DoDialog(var_713_object); // 0xa28 Func
	var_727_bool = 0; var_728_object = Obj(); // 0xa2a PushV
	var_729_object = Obj(); // 0xa2b PushV
	func_3322(var_729_object); // 0xa2c NEW_2
	var_728_object = var_729_object; // 0xa2d Mov
	func_3131(var_727_bool, var_728_object); // 0xa2f NEW_2
	var_730_object = Obj(); var_731_object = Obj(); // 0xa31 PushV
	var_730_object = var_707_object; // 0xa32 Mov
	var_731_object = var_713_object; // 0xa33 Mov
	TaskCall(13); // 0xa34 TaskCall
	func_2636(var_732_object, var_733_object, var_734_string, var_735_bool, var_730_object, var_731_object); // 0xa35 NEW_2
	TaskReturn(); // 0xa36 TaskReturn
	IsDialogEnd(var_716_bool); // 0xa38 ObjFunc
	
Label_2618:
	var_760_bool = var_716_bool == 0; // 0xa3a Not
	if(var_760_bool == 0) goto Label_2625; // 0xa3b JumpB
	sync(); // 0xa3c Func
	IsDialogEnd(var_716_bool); // 0xa3e ObjFunc
	goto Label_2618; // 0xa40 Jump
	
Label_2625:
	var_761_object = Obj(); // 0xa41 PushV
	var_761_object = var_707_object; // 0xa42 Mov
	func_3114(); // 0xa43 NEW_2
	StopDialog(var_713_object); // 0xa45 Func
	GetReturnValue(var_715_int); // 0xa47 ObjFunc
	var_706_int = var_715_int; // 0xa49 Mov
	return 8; // 0xa4a Return
}


func_3581(var_319_bool)
{
	var_321_int = 0; var_322_string = ""; // 0xdfe PushV
	var_322_string = "ook1Laska1"; // 0xdff MovS
	func_3338(var_321_int, var_322_string); // 0xe00 NEW_2
	var_325_int = 0; // 0xe02 PushI
	var_326_bool = var_321_int == var_325_int; // 0xe03 Eq
	if(var_326_bool == 0) goto Label_3591; // 0xe04 JumpB
	var_319_bool = 1; // 0xe05 MovB
	return 0; // 0xe06 Return
	
Label_3591:
	var_319_bool = 0; // 0xe07 MovB
	return 0; // 0xe08 Return
}


func_1023(var_2_object, var_535_string)
{
	var_536_bool = 0; // 0x400 PushV
	func_3413(var_536_bool); // 0x401 NEW_2
	var_537_bool = var_536_bool == 0; // 0x403 Not
	if(var_537_bool == 0) goto Label_1030; // 0x404 JumpB
	return 0; // 0x405 Return
	
Label_1030:
	var_538_bool = var_535_string == var_2_object; // 0x406 Eq
	if(var_538_bool == 0) goto Label_1033; // 0x407 JumpB
	return 0; // 0x408 Return
	
Label_1033:
	var_539_string = ""; var_540_bool = 0; // 0x409 PushV
	var_539_string = var_535_string; // 0x40a Mov
	var_541_string = ""; // 0x40b PushS
	var_542_bool = var_535_string == var_541_string; // 0x40c Eq
	if(var_542_bool == 0) goto Label_1040; // 0x40d JumpB
	var_540_bool = 0; // 0x40e MovB
	goto Label_1041; // 0x40f Jump
	
Label_1041:
	func_3285(var_539_string, var_540_bool); // 0x411 NEW_2
	var_2_object = var_535_string; // 0x413 TMov
	return 0; // 0x414 Return
	
Label_1040:
	var_540_bool = 1; // 0x410 MovB
}


