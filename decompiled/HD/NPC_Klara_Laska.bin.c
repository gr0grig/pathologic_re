task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0xd8 PushI
	if(var_38_int == 0) goto Label_664; // 0xd9 JumpB
	func_3412(); // 0xdb NEW_2
	var_40_int = 26020; // 0xdd PushI
	var_41_bool = var_37_cvector == var_40_int; // 0xde Eq
	if(var_41_bool == 0) goto Label_229; // 0xdf JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0xe0 PushV
	var_42_object = var_1_object; // 0xe1 MovT
	var_43_object = var_0_object; // 0xe2 MovT
	func_3534(); // 0xe3 NEW_2
	
Label_229:
	var_46_int = 26022; // 0xe5 PushI
	var_47_bool = var_37_cvector == var_46_int; // 0xe6 Eq
	if(var_47_bool == 0) goto Label_242; // 0xe7 JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0xe8 PushV
	var_48_object = var_1_object; // 0xe9 MovT
	var_49_object = var_0_object; // 0xea MovT
	func_3540(); // 0xeb NEW_2
	var_91_object = Obj(); var_92_object = Obj(); // 0xed PushV
	var_91_object = var_1_object; // 0xee MovT
	var_92_object = var_0_object; // 0xef MovT
	func_3512(); // 0xf0 NEW_2
	
Label_242:
	var_117_int = 43956; // 0xf2 PushI
	var_118_bool = var_37_cvector == var_117_int; // 0xf3 Eq
	if(var_118_bool == 0) goto Label_255; // 0xf4 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0xf5 PushV
	var_119_object = var_1_object; // 0xf6 MovT
	var_120_object = var_0_object; // 0xf7 MovT
	func_3512(); // 0xf8 NEW_2
	var_121_object = Obj(); var_122_object = Obj(); // 0xfa PushV
	var_121_object = var_1_object; // 0xfb MovT
	var_122_object = var_0_object; // 0xfc MovT
	func_3540(); // 0xfd NEW_2
	
Label_255:
	var_123_int = 25983; // 0xff PushI
	var_124_bool = var_36_bool == var_123_int; // 0x100 Eq
	if(var_124_bool == 0) goto Label_332; // 0x101 JumpB
	var_125_bool = 0; // 0x102 PushV
	var_125_bool = 0; // 0x103 MovB
	var_126_bool = 0; var_127_object = Obj(); // 0x104 PushV
	var_127_object = var_1_object; // 0x105 MovT
	func_3678(var_127_object); // 0x106 NEW_2
	if(var_126_bool == 0) goto Label_272; // 0x108 JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x109 PushV
	var_135_object = var_1_object; // 0x10a MovT
	func_3690(var_135_object); // 0x10b NEW_2
	var_140_bool = var_134_bool == 0; // 0x10d Not
	if(var_140_bool == 0) goto Label_272; // 0x10e JumpB
	var_125_bool = 1; // 0x10f MovB
	
Label_272:
	if(var_125_bool == 0) goto Label_298; // 0x110 JumpB
	var_141_object = Obj(); var_142_object = Obj(); // 0x111 PushV
	var_141_object = var_1_object; // 0x112 MovT
	var_142_object = var_0_object; // 0x113 MovT
	func_3528(); // 0x114 NEW_2
	var_145_string = ""; // 0x116 PushV
	var_145_string = "Autizm"; // 0x117 MovS
	func_193(var_37_cvector, var_145_string); // 0x118 NEW_2
	var_162_int = 524644; // 0x11a PushI
	SetMessage(var_162_int); // 0x11b TObjFunc
	ClearReplies(); // 0x11d TObjFunc
	var_163_int = 526298; // 0x11f PushI
	var_164_int = 27579; // 0x120 PushI
	var_165_int = 27578; // 0x121 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x122 TObjFunc
	var_166_int = 526300; // 0x124 PushI
	var_167_int = 27581; // 0x125 PushI
	var_168_int = 27580; // 0x126 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x127 TObjFunc
	return 0; // 0x129 Return
	
Label_298:
	var_169_string = ""; // 0x12a PushV
	var_169_string = "Neutral"; // 0x12b MovS
	func_193(var_37_cvector, var_169_string); // 0x12c NEW_2
	var_170_int = 524648; // 0x12e PushI
	SetMessage(var_170_int); // 0x12f TObjFunc
	ClearReplies(); // 0x131 TObjFunc
	var_171_bool = 0; // 0x133 PushV
	var_171_bool = 0; // 0x134 MovB
	var_172_bool = 0; var_173_object = Obj(); // 0x135 PushV
	var_173_object = var_1_object; // 0x136 MovT
	func_3690(var_173_object); // 0x137 NEW_2
	if(var_172_bool == 0) goto Label_320; // 0x139 JumpB
	var_174_bool = 0; var_175_object = Obj(); // 0x13a PushV
	var_175_object = var_1_object; // 0x13b MovT
	func_3702(var_175_object); // 0x13c NEW_2
	if(var_174_bool == 0) goto Label_320; // 0x13e JumpB
	var_171_bool = 1; // 0x13f MovB
	
Label_320:
	if(var_171_bool == 0) goto Label_326; // 0x140 JumpB
	var_180_int = 524681; // 0x141 PushI
	var_181_int = 43988; // 0x142 PushI
	var_182_int = 26020; // 0x143 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x144 TObjFunc
	
Label_326:
	var_183_int = 524649; // 0x146 PushI
	var_184_int = -1; // 0x147 PushI
	var_185_int = 25988; // 0x148 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x149 TObjFunc
	return 0; // 0x14b Return
	
Label_332:
	var_186_int = 43988; // 0x14c PushI
	var_187_bool = var_36_bool == var_186_int; // 0x14d Eq
	if(var_187_bool == 0) goto Label_355; // 0x14e JumpB
	var_188_string = ""; // 0x14f PushV
	var_188_string = "Welldie"; // 0x150 MovS
	func_193(var_37_cvector, var_188_string); // 0x151 NEW_2
	var_189_int = 541782; // 0x153 PushI
	SetMessage(var_189_int); // 0x154 TObjFunc
	ClearReplies(); // 0x156 TObjFunc
	var_190_int = 541783; // 0x158 PushI
	var_191_int = 26021; // 0x159 PushI
	var_192_int = 43989; // 0x15a PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x15b TObjFunc
	var_193_int = 541784; // 0x15d PushI
	var_194_int = 43991; // 0x15e PushI
	var_195_int = 43990; // 0x15f PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x160 TObjFunc
	return 0; // 0x162 Return
	
Label_355:
	var_196_int = 43991; // 0x163 PushI
	var_197_bool = var_36_bool == var_196_int; // 0x164 Eq
	if(var_197_bool == 0) goto Label_378; // 0x165 JumpB
	var_198_string = ""; // 0x166 PushV
	var_198_string = "Autizm"; // 0x167 MovS
	func_193(var_37_cvector, var_198_string); // 0x168 NEW_2
	var_199_int = 541785; // 0x16a PushI
	SetMessage(var_199_int); // 0x16b TObjFunc
	ClearReplies(); // 0x16d TObjFunc
	var_200_int = 541786; // 0x16f PushI
	var_201_int = 43995; // 0x170 PushI
	var_202_int = 43992; // 0x171 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x172 TObjFunc
	var_203_int = 541787; // 0x174 PushI
	var_204_int = 43994; // 0x175 PushI
	var_205_int = 43993; // 0x176 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_206_int = 43994; // 0x17a PushI
	var_207_bool = var_36_bool == var_206_int; // 0x17b Eq
	if(var_207_bool == 0) goto Label_396; // 0x17c JumpB
	var_208_string = ""; // 0x17d PushV
	var_208_string = "Autizm"; // 0x17e MovS
	func_193(var_37_cvector, var_208_string); // 0x17f NEW_2
	var_209_int = 541788; // 0x181 PushI
	SetMessage(var_209_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_210_int = 541791; // 0x186 PushI
	var_211_int = 26021; // 0x187 PushI
	var_212_int = 43997; // 0x188 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x189 TObjFunc
	return 0; // 0x18b Return
	
Label_396:
	var_213_int = 43995; // 0x18c PushI
	var_214_bool = var_36_bool == var_213_int; // 0x18d Eq
	if(var_214_bool == 0) goto Label_414; // 0x18e JumpB
	var_215_string = ""; // 0x18f PushV
	var_215_string = "Pain"; // 0x190 MovS
	func_193(var_37_cvector, var_215_string); // 0x191 NEW_2
	var_216_int = 541789; // 0x193 PushI
	SetMessage(var_216_int); // 0x194 TObjFunc
	ClearReplies(); // 0x196 TObjFunc
	var_217_int = 541790; // 0x198 PushI
	var_218_int = 26021; // 0x199 PushI
	var_219_int = 43996; // 0x19a PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x19b TObjFunc
	return 0; // 0x19d Return
	
Label_414:
	var_220_int = 26021; // 0x19e PushI
	var_221_bool = var_36_bool == var_220_int; // 0x19f Eq
	if(var_221_bool == 0) goto Label_437; // 0x1a0 JumpB
	var_222_string = ""; // 0x1a1 PushV
	var_222_string = "Disturbance"; // 0x1a2 MovS
	func_193(var_37_cvector, var_222_string); // 0x1a3 NEW_2
	var_223_int = 524682; // 0x1a5 PushI
	SetMessage(var_223_int); // 0x1a6 TObjFunc
	ClearReplies(); // 0x1a8 TObjFunc
	var_224_int = 541792; // 0x1aa PushI
	var_225_int = 44001; // 0x1ab PushI
	var_226_int = 44000; // 0x1ac PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x1ad TObjFunc
	var_227_int = 541794; // 0x1af PushI
	var_228_int = 44001; // 0x1b0 PushI
	var_229_int = 44002; // 0x1b1 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1b2 TObjFunc
	return 0; // 0x1b4 Return
	
Label_437:
	var_230_int = 44001; // 0x1b5 PushI
	var_231_bool = var_36_bool == var_230_int; // 0x1b6 Eq
	if(var_231_bool == 0) goto Label_460; // 0x1b7 JumpB
	var_232_string = ""; // 0x1b8 PushV
	var_232_string = "Disturbance"; // 0x1b9 MovS
	func_193(var_37_cvector, var_232_string); // 0x1ba NEW_2
	var_233_int = 541793; // 0x1bc PushI
	SetMessage(var_233_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_234_int = 526310; // 0x1c1 PushI
	var_235_int = 27593; // 0x1c2 PushI
	var_236_int = 27592; // 0x1c3 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x1c4 TObjFunc
	var_237_int = 541702; // 0x1c6 PushI
	var_238_int = 44004; // 0x1c7 PushI
	var_239_int = 43885; // 0x1c8 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x1c9 TObjFunc
	return 0; // 0x1cb Return
	
Label_460:
	var_240_int = 44004; // 0x1cc PushI
	var_241_bool = var_36_bool == var_240_int; // 0x1cd Eq
	if(var_241_bool == 0) goto Label_478; // 0x1ce JumpB
	var_242_string = ""; // 0x1cf PushV
	var_242_string = "Neutral"; // 0x1d0 MovS
	func_193(var_37_cvector, var_242_string); // 0x1d1 NEW_2
	var_243_int = 541795; // 0x1d3 PushI
	SetMessage(var_243_int); // 0x1d4 TObjFunc
	ClearReplies(); // 0x1d6 TObjFunc
	var_244_int = 541796; // 0x1d8 PushI
	var_245_int = 27593; // 0x1d9 PushI
	var_246_int = 44005; // 0x1da PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x1db TObjFunc
	return 0; // 0x1dd Return
	
Label_478:
	var_247_int = 27593; // 0x1de PushI
	var_248_bool = var_36_bool == var_247_int; // 0x1df Eq
	if(var_248_bool == 0) goto Label_501; // 0x1e0 JumpB
	var_249_string = ""; // 0x1e1 PushV
	var_249_string = "Pain"; // 0x1e2 MovS
	func_193(var_37_cvector, var_249_string); // 0x1e3 NEW_2
	var_250_int = 526311; // 0x1e5 PushI
	SetMessage(var_250_int); // 0x1e6 TObjFunc
	ClearReplies(); // 0x1e8 TObjFunc
	var_251_int = 526312; // 0x1ea PushI
	var_252_int = 27595; // 0x1eb PushI
	var_253_int = 27594; // 0x1ec PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x1ed TObjFunc
	var_254_int = 541751; // 0x1ef PushI
	var_255_int = 43953; // 0x1f0 PushI
	var_256_int = 43952; // 0x1f1 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x1f2 TObjFunc
	return 0; // 0x1f4 Return
	
Label_501:
	var_257_int = 43953; // 0x1f5 PushI
	var_258_bool = var_36_bool == var_257_int; // 0x1f6 Eq
	if(var_258_bool == 0) goto Label_519; // 0x1f7 JumpB
	var_259_string = ""; // 0x1f8 PushV
	var_259_string = "Neutral"; // 0x1f9 MovS
	func_193(var_37_cvector, var_259_string); // 0x1fa NEW_2
	var_260_int = 541752; // 0x1fc PushI
	SetMessage(var_260_int); // 0x1fd TObjFunc
	ClearReplies(); // 0x1ff TObjFunc
	var_261_int = 541753; // 0x201 PushI
	var_262_int = 27595; // 0x202 PushI
	var_263_int = 43954; // 0x203 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x204 TObjFunc
	return 0; // 0x206 Return
	
Label_519:
	var_264_int = 27595; // 0x207 PushI
	var_265_bool = var_36_bool == var_264_int; // 0x208 Eq
	if(var_265_bool == 0) goto Label_542; // 0x209 JumpB
	var_266_string = ""; // 0x20a PushV
	var_266_string = "Neutral"; // 0x20b MovS
	func_193(var_37_cvector, var_266_string); // 0x20c NEW_2
	var_267_int = 526313; // 0x20e PushI
	SetMessage(var_267_int); // 0x20f TObjFunc
	ClearReplies(); // 0x211 TObjFunc
	var_268_int = 524683; // 0x213 PushI
	var_269_int = -1; // 0x214 PushI
	var_270_int = 26022; // 0x215 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x216 TObjFunc
	var_271_int = 541754; // 0x218 PushI
	var_272_int = -1; // 0x219 PushI
	var_273_int = 43956; // 0x21a PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x21b TObjFunc
	return 0; // 0x21d Return
	
Label_542:
	var_274_int = 27581; // 0x21e PushI
	var_275_bool = var_36_bool == var_274_int; // 0x21f Eq
	if(var_275_bool == 0) goto Label_560; // 0x220 JumpB
	var_276_string = ""; // 0x221 PushV
	var_276_string = "Pain"; // 0x222 MovS
	func_193(var_37_cvector, var_276_string); // 0x223 NEW_2
	var_277_int = 526301; // 0x225 PushI
	SetMessage(var_277_int); // 0x226 TObjFunc
	ClearReplies(); // 0x228 TObjFunc
	var_278_int = 526302; // 0x22a PushI
	var_279_int = 27579; // 0x22b PushI
	var_280_int = 27582; // 0x22c PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x22d TObjFunc
	return 0; // 0x22f Return
	
Label_560:
	var_281_int = 27579; // 0x230 PushI
	var_282_bool = var_36_bool == var_281_int; // 0x231 Eq
	if(var_282_bool == 0) goto Label_583; // 0x232 JumpB
	var_283_string = ""; // 0x233 PushV
	var_283_string = "Autizm"; // 0x234 MovS
	func_193(var_37_cvector, var_283_string); // 0x235 NEW_2
	var_284_int = 526299; // 0x237 PushI
	SetMessage(var_284_int); // 0x238 TObjFunc
	ClearReplies(); // 0x23a TObjFunc
	var_285_int = 526303; // 0x23c PushI
	var_286_int = 27585; // 0x23d PushI
	var_287_int = 27584; // 0x23e PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x23f TObjFunc
	var_288_int = 541701; // 0x241 PushI
	var_289_int = 27585; // 0x242 PushI
	var_290_int = 43883; // 0x243 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x244 TObjFunc
	return 0; // 0x246 Return
	
Label_583:
	var_291_int = 27585; // 0x247 PushI
	var_292_bool = var_36_bool == var_291_int; // 0x248 Eq
	if(var_292_bool == 0) goto Label_606; // 0x249 JumpB
	var_293_string = ""; // 0x24a PushV
	var_293_string = "Disturbance"; // 0x24b MovS
	func_193(var_37_cvector, var_293_string); // 0x24c NEW_2
	var_294_int = 526304; // 0x24e PushI
	SetMessage(var_294_int); // 0x24f TObjFunc
	ClearReplies(); // 0x251 TObjFunc
	var_295_int = 524645; // 0x253 PushI
	var_296_int = 25985; // 0x254 PushI
	var_297_int = 25984; // 0x255 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x256 TObjFunc
	var_298_int = 526305; // 0x258 PushI
	var_299_int = 25985; // 0x259 PushI
	var_300_int = 27586; // 0x25a PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x25b TObjFunc
	return 0; // 0x25d Return
	
Label_606:
	var_301_int = 25985; // 0x25e PushI
	var_302_bool = var_36_bool == var_301_int; // 0x25f Eq
	if(var_302_bool == 0) goto Label_629; // 0x260 JumpB
	var_303_string = ""; // 0x261 PushV
	var_303_string = "Disturbance"; // 0x262 MovS
	func_193(var_37_cvector, var_303_string); // 0x263 NEW_2
	var_304_int = 524646; // 0x265 PushI
	SetMessage(var_304_int); // 0x266 TObjFunc
	ClearReplies(); // 0x268 TObjFunc
	var_305_int = 524647; // 0x26a PushI
	var_306_int = -1; // 0x26b PushI
	var_307_int = 25986; // 0x26c PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x26d TObjFunc
	var_308_int = 526306; // 0x26f PushI
	var_309_int = 27589; // 0x270 PushI
	var_310_int = 27588; // 0x271 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x272 TObjFunc
	return 0; // 0x274 Return
	
Label_629:
	var_311_int = 27589; // 0x275 PushI
	var_312_bool = var_36_bool == var_311_int; // 0x276 Eq
	if(var_312_bool == 0) goto Label_652; // 0x277 JumpB
	var_313_string = ""; // 0x278 PushV
	var_313_string = "Neutral"; // 0x279 MovS
	func_193(var_37_cvector, var_313_string); // 0x27a NEW_2
	var_314_int = 526307; // 0x27c PushI
	SetMessage(var_314_int); // 0x27d TObjFunc
	ClearReplies(); // 0x27f TObjFunc
	var_315_int = 526308; // 0x281 PushI
	var_316_int = -1; // 0x282 PushI
	var_317_int = 27590; // 0x283 PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x284 TObjFunc
	var_318_int = 526309; // 0x286 PushI
	var_319_int = -1; // 0x287 PushI
	var_320_int = 27591; // 0x288 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x289 TObjFunc
	return 0; // 0x28b Return
	
Label_652:
	var_3_string = 1; // 0x28c TMovB
	var_321_bool = 0; // 0x28d PushV
	func_3510(var_321_bool); // 0x28e NEW_2
	if(var_321_bool == 0) goto Label_660; // 0x290 JumpB
	lshStopAnimation(); // 0x291 Func
	goto Label_662; // 0x293 Jump
	
Label_662:
	return 0; // 0x296 Return
	
Label_660:
	StopAnimation(); // 0x294 Func
	
Label_664:
	return 0; // 0x298 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x378 PushI
	if(var_38_int == 0) goto Label_1315; // 0x379 JumpB
	func_3412(); // 0x37b NEW_2
	var_40_int = 26672; // 0x37d PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x37e Eq
	if(var_41_bool == 0) goto Label_906; // 0x37f JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x380 PushV
	var_42_object = var_1_object; // 0x381 MovT
	var_43_object = var_0_object; // 0x382 MovT
	func_3563(); // 0x383 NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0x385 PushV
	var_77_object = var_1_object; // 0x386 MovT
	var_78_object = var_0_object; // 0x387 MovT
	func_3666(); // 0x388 NEW_2
	
Label_906:
	var_81_int = 30634; // 0x38a PushI
	var_82_bool = var_37_cvector == var_81_int; // 0x38b Eq
	if(var_82_bool == 0) goto Label_919; // 0x38c JumpB
	var_83_object = Obj(); var_84_object = Obj(); // 0x38d PushV
	var_83_object = var_1_object; // 0x38e MovT
	var_84_object = var_0_object; // 0x38f MovT
	func_3563(); // 0x390 NEW_2
	var_85_object = Obj(); var_86_object = Obj(); // 0x392 PushV
	var_85_object = var_1_object; // 0x393 MovT
	var_86_object = var_0_object; // 0x394 MovT
	func_3666(); // 0x395 NEW_2
	
Label_919:
	var_87_int = 26678; // 0x397 PushI
	var_88_bool = var_37_cvector == var_87_int; // 0x398 Eq
	if(var_88_bool == 0) goto Label_927; // 0x399 JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0x39a PushV
	var_89_object = var_1_object; // 0x39b MovT
	var_90_object = var_0_object; // 0x39c MovT
	func_3584(); // 0x39d NEW_2
	
Label_927:
	var_93_int = 26665; // 0x39f PushI
	var_94_bool = var_36_bool == var_93_int; // 0x3a0 Eq
	if(var_94_bool == 0) goto Label_1011; // 0x3a1 JumpB
	var_95_string = ""; // 0x3a2 PushV
	var_95_string = "Neutral"; // 0x3a3 MovS
	func_865(var_37_cvector, var_95_string); // 0x3a4 NEW_2
	var_112_int = 525297; // 0x3a6 PushI
	SetMessage(var_112_int); // 0x3a7 TObjFunc
	ClearReplies(); // 0x3a9 TObjFunc
	var_113_bool = 0; // 0x3ab PushV
	var_113_bool = 1; // 0x3ac MovB
	var_114_bool = 0; // 0x3ad PushV
	var_114_bool = 0; // 0x3ae MovB
	var_115_bool = 0; var_116_object = Obj(); // 0x3af PushV
	var_116_object = var_1_object; // 0x3b0 MovT
	func_3738(var_115_bool, var_116_object); // 0x3b1 NEW_2
	if(var_115_bool == 0) goto Label_954; // 0x3b3 JumpB
	var_132_bool = 0; var_133_object = Obj(); // 0x3b4 PushV
	var_133_object = var_1_object; // 0x3b5 MovT
	func_3714(var_133_object); // 0x3b6 NEW_2
	if(var_132_bool == 0) goto Label_954; // 0x3b8 JumpB
	var_114_bool = 1; // 0x3b9 MovB
	
Label_954:
	if(var_114_bool == 0) goto Label_970; // 0x3ba JumpB
	var_140_bool = 0; // 0x3bb PushV
	var_140_bool = 0; // 0x3bc MovB
	var_141_bool = 0; var_142_object = Obj(); // 0x3bd PushV
	var_142_object = var_1_object; // 0x3be MovT
	func_3726(var_142_object); // 0x3bf NEW_2
	if(var_141_bool == 0) goto Label_968; // 0x3c1 JumpB
	var_147_bool = 0; var_148_object = Obj(); // 0x3c2 PushV
	var_148_object = var_1_object; // 0x3c3 MovT
	func_3738(var_147_bool, var_148_object); // 0x3c4 NEW_2
	if(var_147_bool == 0) goto Label_968; // 0x3c6 JumpB
	var_140_bool = 1; // 0x3c7 MovB
	
Label_968:
	if(var_140_bool == 0) goto Label_970; // 0x3c8 JumpB
	var_113_bool = 0; // 0x3c9 MovB
	
Label_970:
	if(var_113_bool == 0) goto Label_976; // 0x3ca JumpB
	var_149_int = 525298; // 0x3cb PushI
	var_150_int = 26667; // 0x3cc PushI
	var_151_int = 26666; // 0x3cd PushI
	AddReply(var_149_int, var_150_int, var_151_int); // 0x3ce TObjFunc
	
Label_976:
	var_152_bool = 0; // 0x3d0 PushV
	var_152_bool = 0; // 0x3d1 MovB
	var_153_bool = 0; // 0x3d2 PushV
	var_153_bool = 0; // 0x3d3 MovB
	var_154_bool = 0; var_155_object = Obj(); // 0x3d4 PushV
	var_155_object = var_1_object; // 0x3d5 MovT
	func_3714(var_155_object); // 0x3d6 NEW_2
	if(var_154_bool == 0) goto Label_992; // 0x3d8 JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x3d9 PushV
	var_157_object = var_1_object; // 0x3da MovT
	func_3738(var_156_bool, var_157_object); // 0x3db NEW_2
	var_158_bool = var_156_bool == 0; // 0x3dd Not
	if(var_158_bool == 0) goto Label_992; // 0x3de JumpB
	var_153_bool = 1; // 0x3df MovB
	
Label_992:
	if(var_153_bool == 0) goto Label_999; // 0x3e0 JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x3e1 PushV
	var_160_object = var_1_object; // 0x3e2 MovT
	func_3769(var_160_object); // 0x3e3 NEW_2
	if(var_159_bool == 0) goto Label_999; // 0x3e5 JumpB
	var_152_bool = 1; // 0x3e6 MovB
	
Label_999:
	if(var_152_bool == 0) goto Label_1005; // 0x3e7 JumpB
	var_165_int = 525310; // 0x3e8 PushI
	var_166_int = 26679; // 0x3e9 PushI
	var_167_int = 26678; // 0x3ea PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x3eb TObjFunc
	
Label_1005:
	var_168_int = 525305; // 0x3ed PushI
	var_169_int = -1; // 0x3ee PushI
	var_170_int = 26673; // 0x3ef PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x3f0 TObjFunc
	return 0; // 0x3f2 Return
	
Label_1011:
	var_171_int = 26679; // 0x3f3 PushI
	var_172_bool = var_36_bool == var_171_int; // 0x3f4 Eq
	if(var_172_bool == 0) goto Label_1034; // 0x3f5 JumpB
	var_173_string = ""; // 0x3f6 PushV
	var_173_string = "Disturbance"; // 0x3f7 MovS
	func_865(var_37_cvector, var_173_string); // 0x3f8 NEW_2
	var_174_int = 525311; // 0x3fa PushI
	SetMessage(var_174_int); // 0x3fb TObjFunc
	ClearReplies(); // 0x3fd TObjFunc
	var_175_int = 525312; // 0x3ff PushI
	var_176_int = 42889; // 0x400 PushI
	var_177_int = 26680; // 0x401 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x402 TObjFunc
	var_178_int = 540831; // 0x404 PushI
	var_179_int = -1; // 0x405 PushI
	var_180_int = 42888; // 0x406 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x407 TObjFunc
	return 0; // 0x409 Return
	
Label_1034:
	var_181_int = 42889; // 0x40a PushI
	var_182_bool = var_36_bool == var_181_int; // 0x40b Eq
	if(var_182_bool == 0) goto Label_1057; // 0x40c JumpB
	var_183_string = ""; // 0x40d PushV
	var_183_string = "Pain"; // 0x40e MovS
	func_865(var_37_cvector, var_183_string); // 0x40f NEW_2
	var_184_int = 540832; // 0x411 PushI
	SetMessage(var_184_int); // 0x412 TObjFunc
	ClearReplies(); // 0x414 TObjFunc
	var_185_int = 540833; // 0x416 PushI
	var_186_int = -1; // 0x417 PushI
	var_187_int = 42890; // 0x418 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x419 TObjFunc
	var_188_int = 540834; // 0x41b PushI
	var_189_int = -1; // 0x41c PushI
	var_190_int = 42891; // 0x41d PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x41e TObjFunc
	return 0; // 0x420 Return
	
Label_1057:
	var_191_int = 26667; // 0x421 PushI
	var_192_bool = var_36_bool == var_191_int; // 0x422 Eq
	if(var_192_bool == 0) goto Label_1080; // 0x423 JumpB
	var_193_string = ""; // 0x424 PushV
	var_193_string = "Autizm"; // 0x425 MovS
	func_865(var_37_cvector, var_193_string); // 0x426 NEW_2
	var_194_int = 525299; // 0x428 PushI
	SetMessage(var_194_int); // 0x429 TObjFunc
	ClearReplies(); // 0x42b TObjFunc
	var_195_int = 529180; // 0x42d PushI
	var_196_int = 30631; // 0x42e PushI
	var_197_int = 30630; // 0x42f PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x430 TObjFunc
	var_198_int = 540812; // 0x432 PushI
	var_199_int = 30633; // 0x433 PushI
	var_200_int = 42864; // 0x434 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x435 TObjFunc
	return 0; // 0x437 Return
	
Label_1080:
	var_201_int = 30631; // 0x438 PushI
	var_202_bool = var_36_bool == var_201_int; // 0x439 Eq
	if(var_202_bool == 0) goto Label_1098; // 0x43a JumpB
	var_203_string = ""; // 0x43b PushV
	var_203_string = "Autizm"; // 0x43c MovS
	func_865(var_37_cvector, var_203_string); // 0x43d NEW_2
	var_204_int = 529181; // 0x43f PushI
	SetMessage(var_204_int); // 0x440 TObjFunc
	ClearReplies(); // 0x442 TObjFunc
	var_205_int = 529182; // 0x444 PushI
	var_206_int = 30633; // 0x445 PushI
	var_207_int = 30632; // 0x446 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x447 TObjFunc
	return 0; // 0x449 Return
	
Label_1098:
	var_208_int = 30633; // 0x44a PushI
	var_209_bool = var_36_bool == var_208_int; // 0x44b Eq
	if(var_209_bool == 0) goto Label_1121; // 0x44c JumpB
	var_210_string = ""; // 0x44d PushV
	var_210_string = "Welldie"; // 0x44e MovS
	func_865(var_37_cvector, var_210_string); // 0x44f NEW_2
	var_211_int = 529183; // 0x451 PushI
	SetMessage(var_211_int); // 0x452 TObjFunc
	ClearReplies(); // 0x454 TObjFunc
	var_212_int = 525300; // 0x456 PushI
	var_213_int = 26669; // 0x457 PushI
	var_214_int = 26668; // 0x458 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x459 TObjFunc
	var_215_int = 540813; // 0x45b PushI
	var_216_int = 42867; // 0x45c PushI
	var_217_int = 42866; // 0x45d PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x45e TObjFunc
	return 0; // 0x460 Return
	
Label_1121:
	var_218_int = 42867; // 0x461 PushI
	var_219_bool = var_36_bool == var_218_int; // 0x462 Eq
	if(var_219_bool == 0) goto Label_1144; // 0x463 JumpB
	var_220_string = ""; // 0x464 PushV
	var_220_string = "Disturbance"; // 0x465 MovS
	func_865(var_37_cvector, var_220_string); // 0x466 NEW_2
	var_221_int = 540814; // 0x468 PushI
	SetMessage(var_221_int); // 0x469 TObjFunc
	ClearReplies(); // 0x46b TObjFunc
	var_222_int = 540819; // 0x46d PushI
	var_223_int = 26669; // 0x46e PushI
	var_224_int = 42872; // 0x46f PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x470 TObjFunc
	var_225_int = 540820; // 0x472 PushI
	var_226_int = 42875; // 0x473 PushI
	var_227_int = 42874; // 0x474 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x475 TObjFunc
	return 0; // 0x477 Return
	
Label_1144:
	var_228_int = 42875; // 0x478 PushI
	var_229_bool = var_36_bool == var_228_int; // 0x479 Eq
	if(var_229_bool == 0) goto Label_1162; // 0x47a JumpB
	var_230_string = ""; // 0x47b PushV
	var_230_string = "Neutral"; // 0x47c MovS
	func_865(var_37_cvector, var_230_string); // 0x47d NEW_2
	var_231_int = 540821; // 0x47f PushI
	SetMessage(var_231_int); // 0x480 TObjFunc
	ClearReplies(); // 0x482 TObjFunc
	var_232_int = 540822; // 0x484 PushI
	var_233_int = 42868; // 0x485 PushI
	var_234_int = 42876; // 0x486 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x487 TObjFunc
	return 0; // 0x489 Return
	
Label_1162:
	var_235_int = 26669; // 0x48a PushI
	var_236_bool = var_36_bool == var_235_int; // 0x48b Eq
	if(var_236_bool == 0) goto Label_1185; // 0x48c JumpB
	var_237_string = ""; // 0x48d PushV
	var_237_string = "Welldie"; // 0x48e MovS
	func_865(var_37_cvector, var_237_string); // 0x48f NEW_2
	var_238_int = 525301; // 0x491 PushI
	SetMessage(var_238_int); // 0x492 TObjFunc
	ClearReplies(); // 0x494 TObjFunc
	var_239_int = 525302; // 0x496 PushI
	var_240_int = 42868; // 0x497 PushI
	var_241_int = 26670; // 0x498 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x499 TObjFunc
	var_242_int = 540826; // 0x49b PushI
	var_243_int = 42882; // 0x49c PushI
	var_244_int = 42881; // 0x49d PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x49e TObjFunc
	return 0; // 0x4a0 Return
	
Label_1185:
	var_245_int = 42882; // 0x4a1 PushI
	var_246_bool = var_36_bool == var_245_int; // 0x4a2 Eq
	if(var_246_bool == 0) goto Label_1203; // 0x4a3 JumpB
	var_247_string = ""; // 0x4a4 PushV
	var_247_string = "Welldie"; // 0x4a5 MovS
	func_865(var_37_cvector, var_247_string); // 0x4a6 NEW_2
	var_248_int = 540827; // 0x4a8 PushI
	SetMessage(var_248_int); // 0x4a9 TObjFunc
	ClearReplies(); // 0x4ab TObjFunc
	var_249_int = 540828; // 0x4ad PushI
	var_250_int = 42879; // 0x4ae PushI
	var_251_int = 42883; // 0x4af PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x4b0 TObjFunc
	return 0; // 0x4b2 Return
	
Label_1203:
	var_252_int = 42868; // 0x4b3 PushI
	var_253_bool = var_36_bool == var_252_int; // 0x4b4 Eq
	if(var_253_bool == 0) goto Label_1226; // 0x4b5 JumpB
	var_254_string = ""; // 0x4b6 PushV
	var_254_string = "Disturbance"; // 0x4b7 MovS
	func_865(var_37_cvector, var_254_string); // 0x4b8 NEW_2
	var_255_int = 540815; // 0x4ba PushI
	SetMessage(var_255_int); // 0x4bb TObjFunc
	ClearReplies(); // 0x4bd TObjFunc
	var_256_int = 540816; // 0x4bf PushI
	var_257_int = 42870; // 0x4c0 PushI
	var_258_int = 42869; // 0x4c1 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x4c2 TObjFunc
	var_259_int = 540823; // 0x4c4 PushI
	var_260_int = 42879; // 0x4c5 PushI
	var_261_int = 42878; // 0x4c6 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x4c7 TObjFunc
	return 0; // 0x4c9 Return
	
Label_1226:
	var_262_int = 42879; // 0x4ca PushI
	var_263_bool = var_36_bool == var_262_int; // 0x4cb Eq
	if(var_263_bool == 0) goto Label_1244; // 0x4cc JumpB
	var_264_string = ""; // 0x4cd PushV
	var_264_string = "Neutral"; // 0x4ce MovS
	func_865(var_37_cvector, var_264_string); // 0x4cf NEW_2
	var_265_int = 540824; // 0x4d1 PushI
	SetMessage(var_265_int); // 0x4d2 TObjFunc
	ClearReplies(); // 0x4d4 TObjFunc
	var_266_int = 540825; // 0x4d6 PushI
	var_267_int = 42870; // 0x4d7 PushI
	var_268_int = 42880; // 0x4d8 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x4d9 TObjFunc
	return 0; // 0x4db Return
	
Label_1244:
	var_269_int = 42870; // 0x4dc PushI
	var_270_bool = var_36_bool == var_269_int; // 0x4dd Eq
	if(var_270_bool == 0) goto Label_1262; // 0x4de JumpB
	var_271_string = ""; // 0x4df PushV
	var_271_string = "Pain"; // 0x4e0 MovS
	func_865(var_37_cvector, var_271_string); // 0x4e1 NEW_2
	var_272_int = 540817; // 0x4e3 PushI
	SetMessage(var_272_int); // 0x4e4 TObjFunc
	ClearReplies(); // 0x4e6 TObjFunc
	var_273_int = 540818; // 0x4e8 PushI
	var_274_int = 26671; // 0x4e9 PushI
	var_275_int = 42871; // 0x4ea PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x4eb TObjFunc
	return 0; // 0x4ed Return
	
Label_1262:
	var_276_int = 26671; // 0x4ee PushI
	var_277_bool = var_36_bool == var_276_int; // 0x4ef Eq
	if(var_277_bool == 0) goto Label_1285; // 0x4f0 JumpB
	var_278_string = ""; // 0x4f1 PushV
	var_278_string = "Pain"; // 0x4f2 MovS
	func_865(var_37_cvector, var_278_string); // 0x4f3 NEW_2
	var_279_int = 525303; // 0x4f5 PushI
	SetMessage(var_279_int); // 0x4f6 TObjFunc
	ClearReplies(); // 0x4f8 TObjFunc
	var_280_int = 525304; // 0x4fa PushI
	var_281_int = -1; // 0x4fb PushI
	var_282_int = 26672; // 0x4fc PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x4fd TObjFunc
	var_283_int = 540829; // 0x4ff PushI
	var_284_int = 42887; // 0x500 PushI
	var_285_int = 42886; // 0x501 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x502 TObjFunc
	return 0; // 0x504 Return
	
Label_1285:
	var_286_int = 42887; // 0x505 PushI
	var_287_bool = var_36_bool == var_286_int; // 0x506 Eq
	if(var_287_bool == 0) goto Label_1303; // 0x507 JumpB
	var_288_string = ""; // 0x508 PushV
	var_288_string = "Neutral"; // 0x509 MovS
	func_865(var_37_cvector, var_288_string); // 0x50a NEW_2
	var_289_int = 540830; // 0x50c PushI
	SetMessage(var_289_int); // 0x50d TObjFunc
	ClearReplies(); // 0x50f TObjFunc
	var_290_int = 529184; // 0x511 PushI
	var_291_int = -1; // 0x512 PushI
	var_292_int = 30634; // 0x513 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x514 TObjFunc
	return 0; // 0x516 Return
	
Label_1303:
	var_3_string = 1; // 0x517 TMovB
	var_293_bool = 0; // 0x518 PushV
	func_3510(var_293_bool); // 0x519 NEW_2
	if(var_293_bool == 0) goto Label_1311; // 0x51b JumpB
	lshStopAnimation(); // 0x51c Func
	goto Label_1313; // 0x51e Jump
	
Label_1313:
	return 0; // 0x521 Return
	
Label_1311:
	StopAnimation(); // 0x51f Func
	
Label_1315:
	return 0; // 0x523 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x5c6 PushI
	if(var_38_int == 0) goto Label_1518; // 0x5c7 JumpB
	func_3412(); // 0x5c9 NEW_2
	var_40_int = 26854; // 0x5cb PushI
	var_41_bool = var_36_bool == var_40_int; // 0x5cc Eq
	if(var_41_bool == 0) goto Label_1506; // 0x5cd JumpB
	var_42_string = ""; // 0x5ce PushV
	var_42_string = "Neutral"; // 0x5cf MovS
	func_1455(var_37_cvector, var_42_string); // 0x5d0 NEW_2
	var_59_int = 525498; // 0x5d2 PushI
	SetMessage(var_59_int); // 0x5d3 TObjFunc
	ClearReplies(); // 0x5d5 TObjFunc
	var_60_int = 525499; // 0x5d7 PushI
	var_61_int = -1; // 0x5d8 PushI
	var_62_int = 26855; // 0x5d9 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0x5da TObjFunc
	var_63_int = 526256; // 0x5dc PushI
	var_64_int = -1; // 0x5dd PushI
	var_65_int = 27530; // 0x5de PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0x5df TObjFunc
	return 0; // 0x5e1 Return
	
Label_1506:
	var_3_string = 1; // 0x5e2 TMovB
	var_66_bool = 0; // 0x5e3 PushV
	func_3510(var_66_bool); // 0x5e4 NEW_2
	if(var_66_bool == 0) goto Label_1514; // 0x5e6 JumpB
	lshStopAnimation(); // 0x5e7 Func
	goto Label_1516; // 0x5e9 Jump
	
Label_1516:
	return 0; // 0x5ec Return
	
Label_1514:
	StopAnimation(); // 0x5ea Func
	
Label_1518:
	return 0; // 0x5ee Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x6b4 PushI
	if(var_38_int == 0) goto Label_1963; // 0x6b5 JumpB
	func_3412(); // 0x6b7 NEW_2
	var_40_int = 27231; // 0x6b9 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x6ba Eq
	if(var_41_bool == 0) goto Label_1734; // 0x6bb JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x6bc PushV
	var_42_object = var_1_object; // 0x6bd MovT
	var_43_object = var_0_object; // 0x6be MovT
	func_3590(); // 0x6bf NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0x6c1 PushV
	var_99_object = var_1_object; // 0x6c2 MovT
	var_100_object = var_0_object; // 0x6c3 MovT
	func_3672(); // 0x6c4 NEW_2
	
Label_1734:
	var_103_int = 44834; // 0x6c6 PushI
	var_104_bool = var_37_cvector == var_103_int; // 0x6c7 Eq
	if(var_104_bool == 0) goto Label_1747; // 0x6c8 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x6c9 PushV
	var_105_object = var_1_object; // 0x6ca MovT
	var_106_object = var_0_object; // 0x6cb MovT
	func_3590(); // 0x6cc NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x6ce PushV
	var_107_object = var_1_object; // 0x6cf MovT
	var_108_object = var_0_object; // 0x6d0 MovT
	func_3672(); // 0x6d1 NEW_2
	
Label_1747:
	var_109_int = 27228; // 0x6d3 PushI
	var_110_bool = var_36_bool == var_109_int; // 0x6d4 Eq
	if(var_110_bool == 0) goto Label_1805; // 0x6d5 JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x6d6 PushV
	var_112_object = var_1_object; // 0x6d7 MovT
	func_3781(var_112_object); // 0x6d8 NEW_2
	if(var_111_bool == 0) goto Label_1785; // 0x6da JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x6db PushV
	var_119_object = var_1_object; // 0x6dc MovT
	var_120_object = var_0_object; // 0x6dd MovT
	func_3616(); // 0x6de NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0x6e0 PushV
	var_123_object = var_1_object; // 0x6e1 MovT
	var_124_object = var_0_object; // 0x6e2 MovT
	func_3622(); // 0x6e3 NEW_2
	var_127_string = ""; // 0x6e5 PushV
	var_127_string = "Autizm"; // 0x6e6 MovS
	func_1693(var_37_cvector, var_127_string); // 0x6e7 NEW_2
	var_144_int = 525944; // 0x6e9 PushI
	SetMessage(var_144_int); // 0x6ea TObjFunc
	ClearReplies(); // 0x6ec TObjFunc
	var_145_int = 542433; // 0x6ee PushI
	var_146_int = 44818; // 0x6ef PushI
	var_147_int = 44817; // 0x6f0 PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x6f1 TObjFunc
	var_148_int = 542438; // 0x6f3 PushI
	var_149_int = 44824; // 0x6f4 PushI
	var_150_int = 44822; // 0x6f5 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x6f6 TObjFunc
	return 0; // 0x6f8 Return
	
Label_1785:
	var_151_string = ""; // 0x6f9 PushV
	var_151_string = "Neutral"; // 0x6fa MovS
	func_1693(var_37_cvector, var_151_string); // 0x6fb NEW_2
	var_152_int = 525948; // 0x6fd PushI
	SetMessage(var_152_int); // 0x6fe TObjFunc
	ClearReplies(); // 0x700 TObjFunc
	var_153_int = 525949; // 0x702 PushI
	var_154_int = -1; // 0x703 PushI
	var_155_int = 27233; // 0x704 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x705 TObjFunc
	var_156_int = 529092; // 0x707 PushI
	var_157_int = -1; // 0x708 PushI
	var_158_int = 30537; // 0x709 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x70a TObjFunc
	return 0; // 0x70c Return
	
Label_1805:
	var_159_int = 44824; // 0x70d PushI
	var_160_bool = var_36_bool == var_159_int; // 0x70e Eq
	if(var_160_bool == 0) goto Label_1823; // 0x70f JumpB
	var_161_string = ""; // 0x710 PushV
	var_161_string = "Disturbance"; // 0x711 MovS
	func_1693(var_37_cvector, var_161_string); // 0x712 NEW_2
	var_162_int = 542439; // 0x714 PushI
	SetMessage(var_162_int); // 0x715 TObjFunc
	ClearReplies(); // 0x717 TObjFunc
	var_163_int = 542440; // 0x719 PushI
	var_164_int = 44818; // 0x71a PushI
	var_165_int = 44825; // 0x71b PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x71c TObjFunc
	return 0; // 0x71e Return
	
Label_1823:
	var_166_int = 44818; // 0x71f PushI
	var_167_bool = var_36_bool == var_166_int; // 0x720 Eq
	if(var_167_bool == 0) goto Label_1846; // 0x721 JumpB
	var_168_string = ""; // 0x722 PushV
	var_168_string = "Pain"; // 0x723 MovS
	func_1693(var_37_cvector, var_168_string); // 0x724 NEW_2
	var_169_int = 542434; // 0x726 PushI
	SetMessage(var_169_int); // 0x727 TObjFunc
	ClearReplies(); // 0x729 TObjFunc
	var_170_int = 542435; // 0x72b PushI
	var_171_int = 44820; // 0x72c PushI
	var_172_int = 44819; // 0x72d PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x72e TObjFunc
	var_173_int = 542437; // 0x730 PushI
	var_174_int = 44820; // 0x731 PushI
	var_175_int = 44821; // 0x732 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x733 TObjFunc
	return 0; // 0x735 Return
	
Label_1846:
	var_176_int = 44820; // 0x736 PushI
	var_177_bool = var_36_bool == var_176_int; // 0x737 Eq
	if(var_177_bool == 0) goto Label_1869; // 0x738 JumpB
	var_178_string = ""; // 0x739 PushV
	var_178_string = "Pain"; // 0x73a MovS
	func_1693(var_37_cvector, var_178_string); // 0x73b NEW_2
	var_179_int = 542436; // 0x73d PushI
	SetMessage(var_179_int); // 0x73e TObjFunc
	ClearReplies(); // 0x740 TObjFunc
	var_180_int = 529090; // 0x742 PushI
	var_181_int = 30536; // 0x743 PushI
	var_182_int = 30535; // 0x744 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x745 TObjFunc
	var_183_int = 542441; // 0x747 PushI
	var_184_int = 30536; // 0x748 PushI
	var_185_int = 44826; // 0x749 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x74a TObjFunc
	return 0; // 0x74c Return
	
Label_1869:
	var_186_int = 30536; // 0x74d PushI
	var_187_bool = var_36_bool == var_186_int; // 0x74e Eq
	if(var_187_bool == 0) goto Label_1892; // 0x74f JumpB
	var_188_string = ""; // 0x750 PushV
	var_188_string = "Neutral"; // 0x751 MovS
	func_1693(var_37_cvector, var_188_string); // 0x752 NEW_2
	var_189_int = 529091; // 0x754 PushI
	SetMessage(var_189_int); // 0x755 TObjFunc
	ClearReplies(); // 0x757 TObjFunc
	var_190_int = 525945; // 0x759 PushI
	var_191_int = 27230; // 0x75a PushI
	var_192_int = 27229; // 0x75b PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x75c TObjFunc
	var_193_int = 542442; // 0x75e PushI
	var_194_int = 44831; // 0x75f PushI
	var_195_int = 44830; // 0x760 PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x761 TObjFunc
	return 0; // 0x763 Return
	
Label_1892:
	var_196_int = 44831; // 0x764 PushI
	var_197_bool = var_36_bool == var_196_int; // 0x765 Eq
	if(var_197_bool == 0) goto Label_1910; // 0x766 JumpB
	var_198_string = ""; // 0x767 PushV
	var_198_string = "Disturbance"; // 0x768 MovS
	func_1693(var_37_cvector, var_198_string); // 0x769 NEW_2
	var_199_int = 542443; // 0x76b PushI
	SetMessage(var_199_int); // 0x76c TObjFunc
	ClearReplies(); // 0x76e TObjFunc
	var_200_int = 542444; // 0x770 PushI
	var_201_int = 27230; // 0x771 PushI
	var_202_int = 44832; // 0x772 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x773 TObjFunc
	return 0; // 0x775 Return
	
Label_1910:
	var_203_int = 27230; // 0x776 PushI
	var_204_bool = var_36_bool == var_203_int; // 0x777 Eq
	if(var_204_bool == 0) goto Label_1928; // 0x778 JumpB
	var_205_string = ""; // 0x779 PushV
	var_205_string = "Welldie"; // 0x77a MovS
	func_1693(var_37_cvector, var_205_string); // 0x77b NEW_2
	var_206_int = 525946; // 0x77d PushI
	SetMessage(var_206_int); // 0x77e TObjFunc
	ClearReplies(); // 0x780 TObjFunc
	var_207_int = 529093; // 0x782 PushI
	var_208_int = 30539; // 0x783 PushI
	var_209_int = 30538; // 0x784 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x785 TObjFunc
	return 0; // 0x787 Return
	
Label_1928:
	var_210_int = 30539; // 0x788 PushI
	var_211_bool = var_36_bool == var_210_int; // 0x789 Eq
	if(var_211_bool == 0) goto Label_1951; // 0x78a JumpB
	var_212_string = ""; // 0x78b PushV
	var_212_string = "Disturbance"; // 0x78c MovS
	func_1693(var_37_cvector, var_212_string); // 0x78d NEW_2
	var_213_int = 529094; // 0x78f PushI
	SetMessage(var_213_int); // 0x790 TObjFunc
	ClearReplies(); // 0x792 TObjFunc
	var_214_int = 525947; // 0x794 PushI
	var_215_int = -1; // 0x795 PushI
	var_216_int = 27231; // 0x796 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x797 TObjFunc
	var_217_int = 542445; // 0x799 PushI
	var_218_int = -1; // 0x79a PushI
	var_219_int = 44834; // 0x79b PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x79c TObjFunc
	return 0; // 0x79e Return
	
Label_1951:
	var_3_string = 1; // 0x79f TMovB
	var_220_bool = 0; // 0x7a0 PushV
	func_3510(var_220_bool); // 0x7a1 NEW_2
	if(var_220_bool == 0) goto Label_1959; // 0x7a3 JumpB
	lshStopAnimation(); // 0x7a4 Func
	goto Label_1961; // 0x7a6 Jump
	
Label_1961:
	return 0; // 0x7a9 Return
	
Label_1959:
	StopAnimation(); // 0x7a7 Func
	
Label_1963:
	return 0; // 0x7ab Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x871 PushI
	if(var_38_int == 0) goto Label_2390; // 0x872 JumpB
	func_3412(); // 0x874 NEW_2
	var_40_int = 30213; // 0x876 PushI
	var_41_bool = var_37_cvector == var_40_int; // 0x877 Eq
	if(var_41_bool == 0) goto Label_2179; // 0x878 JumpB
	var_42_object = Obj(); var_43_object = Obj(); // 0x879 PushV
	var_42_object = var_1_object; // 0x87a MovT
	var_43_object = var_0_object; // 0x87b MovT
	func_3640(); // 0x87c NEW_2
	var_99_object = Obj(); var_100_object = Obj(); // 0x87e PushV
	var_99_object = var_1_object; // 0x87f MovT
	var_100_object = var_0_object; // 0x880 MovT
	func_3672(); // 0x881 NEW_2
	
Label_2179:
	var_103_int = 44908; // 0x883 PushI
	var_104_bool = var_37_cvector == var_103_int; // 0x884 Eq
	if(var_104_bool == 0) goto Label_2192; // 0x885 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x886 PushV
	var_105_object = var_1_object; // 0x887 MovT
	var_106_object = var_0_object; // 0x888 MovT
	func_3640(); // 0x889 NEW_2
	var_107_object = Obj(); var_108_object = Obj(); // 0x88b PushV
	var_107_object = var_1_object; // 0x88c MovT
	var_108_object = var_0_object; // 0x88d MovT
	func_3672(); // 0x88e NEW_2
	
Label_2192:
	var_109_int = 30215; // 0x890 PushI
	var_110_bool = var_36_bool == var_109_int; // 0x891 Eq
	if(var_110_bool == 0) goto Label_2250; // 0x892 JumpB
	var_111_bool = 0; var_112_object = Obj(); // 0x893 PushV
	var_112_object = var_1_object; // 0x894 MovT
	func_3793(var_112_object); // 0x895 NEW_2
	if(var_111_bool == 0) goto Label_2230; // 0x897 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x898 PushV
	var_119_object = var_1_object; // 0x899 MovT
	var_120_object = var_0_object; // 0x89a MovT
	func_3628(); // 0x89b NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0x89d PushV
	var_123_object = var_1_object; // 0x89e MovT
	var_124_object = var_0_object; // 0x89f MovT
	func_3634(); // 0x8a0 NEW_2
	var_127_string = ""; // 0x8a2 PushV
	var_127_string = "Disturbance"; // 0x8a3 MovS
	func_2138(var_37_cvector, var_127_string); // 0x8a4 NEW_2
	var_144_int = 528802; // 0x8a6 PushI
	SetMessage(var_144_int); // 0x8a7 TObjFunc
	ClearReplies(); // 0x8a9 TObjFunc
	var_145_int = 526757; // 0x8ab PushI
	var_146_int = 30208; // 0x8ac PushI
	var_147_int = 28034; // 0x8ad PushI
	AddReply(var_145_int, var_146_int, var_147_int); // 0x8ae TObjFunc
	var_148_int = 528803; // 0x8b0 PushI
	var_149_int = 30208; // 0x8b1 PushI
	var_150_int = 30216; // 0x8b2 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x8b3 TObjFunc
	return 0; // 0x8b5 Return
	
Label_2230:
	var_151_string = ""; // 0x8b6 PushV
	var_151_string = "Neutral"; // 0x8b7 MovS
	func_2138(var_37_cvector, var_151_string); // 0x8b8 NEW_2
	var_152_int = 526758; // 0x8ba PushI
	SetMessage(var_152_int); // 0x8bb TObjFunc
	ClearReplies(); // 0x8bd TObjFunc
	var_153_int = 526759; // 0x8bf PushI
	var_154_int = -1; // 0x8c0 PushI
	var_155_int = 28036; // 0x8c1 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x8c2 TObjFunc
	var_156_int = 528801; // 0x8c4 PushI
	var_157_int = -1; // 0x8c5 PushI
	var_158_int = 30214; // 0x8c6 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x8c7 TObjFunc
	return 0; // 0x8c9 Return
	
Label_2250:
	var_159_int = 30208; // 0x8ca PushI
	var_160_bool = var_36_bool == var_159_int; // 0x8cb Eq
	if(var_160_bool == 0) goto Label_2273; // 0x8cc JumpB
	var_161_string = ""; // 0x8cd PushV
	var_161_string = "Disturbance"; // 0x8ce MovS
	func_2138(var_37_cvector, var_161_string); // 0x8cf NEW_2
	var_162_int = 528795; // 0x8d1 PushI
	SetMessage(var_162_int); // 0x8d2 TObjFunc
	ClearReplies(); // 0x8d4 TObjFunc
	var_163_int = 528796; // 0x8d6 PushI
	var_164_int = 30210; // 0x8d7 PushI
	var_165_int = 30209; // 0x8d8 PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x8d9 TObjFunc
	var_166_int = 542079; // 0x8db PushI
	var_167_int = 44899; // 0x8dc PushI
	var_168_int = 44372; // 0x8dd PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x8de TObjFunc
	return 0; // 0x8e0 Return
	
Label_2273:
	var_169_int = 44899; // 0x8e1 PushI
	var_170_bool = var_36_bool == var_169_int; // 0x8e2 Eq
	if(var_170_bool == 0) goto Label_2296; // 0x8e3 JumpB
	var_171_string = ""; // 0x8e4 PushV
	var_171_string = "Pain"; // 0x8e5 MovS
	func_2138(var_37_cvector, var_171_string); // 0x8e6 NEW_2
	var_172_int = 542509; // 0x8e8 PushI
	SetMessage(var_172_int); // 0x8e9 TObjFunc
	ClearReplies(); // 0x8eb TObjFunc
	var_173_int = 542510; // 0x8ed PushI
	var_174_int = 44902; // 0x8ee PushI
	var_175_int = 44900; // 0x8ef PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x8f0 TObjFunc
	var_176_int = 542511; // 0x8f2 PushI
	var_177_int = 44902; // 0x8f3 PushI
	var_178_int = 44901; // 0x8f4 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x8f5 TObjFunc
	return 0; // 0x8f7 Return
	
Label_2296:
	var_179_int = 44902; // 0x8f8 PushI
	var_180_bool = var_36_bool == var_179_int; // 0x8f9 Eq
	if(var_180_bool == 0) goto Label_2319; // 0x8fa JumpB
	var_181_string = ""; // 0x8fb PushV
	var_181_string = "Autizm"; // 0x8fc MovS
	func_2138(var_37_cvector, var_181_string); // 0x8fd NEW_2
	var_182_int = 542512; // 0x8ff PushI
	SetMessage(var_182_int); // 0x900 TObjFunc
	ClearReplies(); // 0x902 TObjFunc
	var_183_int = 542513; // 0x904 PushI
	var_184_int = 30210; // 0x905 PushI
	var_185_int = 44904; // 0x906 PushI
	AddReply(var_183_int, var_184_int, var_185_int); // 0x907 TObjFunc
	var_186_int = 542514; // 0x909 PushI
	var_187_int = -1; // 0x90a PushI
	var_188_int = 44905; // 0x90b PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x90c TObjFunc
	return 0; // 0x90e Return
	
Label_2319:
	var_189_int = 30210; // 0x90f PushI
	var_190_bool = var_36_bool == var_189_int; // 0x910 Eq
	if(var_190_bool == 0) goto Label_2342; // 0x911 JumpB
	var_191_string = ""; // 0x912 PushV
	var_191_string = "Welldie"; // 0x913 MovS
	func_2138(var_37_cvector, var_191_string); // 0x914 NEW_2
	var_192_int = 528797; // 0x916 PushI
	SetMessage(var_192_int); // 0x917 TObjFunc
	ClearReplies(); // 0x919 TObjFunc
	var_193_int = 528798; // 0x91b PushI
	var_194_int = 30212; // 0x91c PushI
	var_195_int = 30211; // 0x91d PushI
	AddReply(var_193_int, var_194_int, var_195_int); // 0x91e TObjFunc
	var_196_int = 542515; // 0x920 PushI
	var_197_int = 44907; // 0x921 PushI
	var_198_int = 44906; // 0x922 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x923 TObjFunc
	return 0; // 0x925 Return
	
Label_2342:
	var_199_int = 44907; // 0x926 PushI
	var_200_bool = var_36_bool == var_199_int; // 0x927 Eq
	if(var_200_bool == 0) goto Label_2360; // 0x928 JumpB
	var_201_string = ""; // 0x929 PushV
	var_201_string = "Neutral"; // 0x92a MovS
	func_2138(var_37_cvector, var_201_string); // 0x92b NEW_2
	var_202_int = 542516; // 0x92d PushI
	SetMessage(var_202_int); // 0x92e TObjFunc
	ClearReplies(); // 0x930 TObjFunc
	var_203_int = 542517; // 0x932 PushI
	var_204_int = -1; // 0x933 PushI
	var_205_int = 44908; // 0x934 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x935 TObjFunc
	return 0; // 0x937 Return
	
Label_2360:
	var_206_int = 30212; // 0x938 PushI
	var_207_bool = var_36_bool == var_206_int; // 0x939 Eq
	if(var_207_bool == 0) goto Label_2378; // 0x93a JumpB
	var_208_string = ""; // 0x93b PushV
	var_208_string = "Neutral"; // 0x93c MovS
	func_2138(var_37_cvector, var_208_string); // 0x93d NEW_2
	var_209_int = 528799; // 0x93f PushI
	SetMessage(var_209_int); // 0x940 TObjFunc
	ClearReplies(); // 0x942 TObjFunc
	var_210_int = 528800; // 0x944 PushI
	var_211_int = -1; // 0x945 PushI
	var_212_int = 30213; // 0x946 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x947 TObjFunc
	return 0; // 0x949 Return
	
Label_2378:
	var_3_string = 1; // 0x94a TMovB
	var_213_bool = 0; // 0x94b PushV
	func_3510(var_213_bool); // 0x94c NEW_2
	if(var_213_bool == 0) goto Label_2386; // 0x94e JumpB
	lshStopAnimation(); // 0x94f Func
	goto Label_2388; // 0x951 Jump
	
Label_2388:
	return 0; // 0x954 Return
	
Label_2386:
	StopAnimation(); // 0x952 Func
	
Label_2390:
	return 0; // 0x956 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_cvector)
{
	var_38_int = 1; // 0x9fe PushI
	if(var_38_int == 0) goto Label_2649; // 0x9ff JumpB
	func_3412(); // 0xa01 NEW_2
	var_40_int = 36960; // 0xa03 PushI
	var_41_bool = var_36_bool == var_40_int; // 0xa04 Eq
	if(var_41_bool == 0) goto Label_2591; // 0xa05 JumpB
	var_42_string = ""; // 0xa06 PushV
	var_42_string = "Neutral"; // 0xa07 MovS
	func_2535(var_37_cvector, var_42_string); // 0xa08 NEW_2
	var_59_int = 535284; // 0xa0a PushI
	SetMessage(var_59_int); // 0xa0b TObjFunc
	ClearReplies(); // 0xa0d TObjFunc
	var_60_int = 535285; // 0xa0f PushI
	var_61_int = 36962; // 0xa10 PushI
	var_62_int = 36961; // 0xa11 PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xa12 TObjFunc
	var_63_int = 535292; // 0xa14 PushI
	var_64_int = -1; // 0xa15 PushI
	var_65_int = 36968; // 0xa16 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xa17 TObjFunc
	var_66_int = 535293; // 0xa19 PushI
	var_67_int = -1; // 0xa1a PushI
	var_68_int = 36969; // 0xa1b PushI
	AddReply(var_66_int, var_67_int, var_68_int); // 0xa1c TObjFunc
	return 0; // 0xa1e Return
	
Label_2591:
	var_69_int = 36962; // 0xa1f PushI
	var_70_bool = var_36_bool == var_69_int; // 0xa20 Eq
	if(var_70_bool == 0) goto Label_2614; // 0xa21 JumpB
	var_71_string = ""; // 0xa22 PushV
	var_71_string = "Neutral"; // 0xa23 MovS
	func_2535(var_37_cvector, var_71_string); // 0xa24 NEW_2
	var_72_int = 535286; // 0xa26 PushI
	SetMessage(var_72_int); // 0xa27 TObjFunc
	ClearReplies(); // 0xa29 TObjFunc
	var_73_int = 535287; // 0xa2b PushI
	var_74_int = 36964; // 0xa2c PushI
	var_75_int = 36963; // 0xa2d PushI
	AddReply(var_73_int, var_74_int, var_75_int); // 0xa2e TObjFunc
	var_76_int = 535291; // 0xa30 PushI
	var_77_int = -1; // 0xa31 PushI
	var_78_int = 36967; // 0xa32 PushI
	AddReply(var_76_int, var_77_int, var_78_int); // 0xa33 TObjFunc
	return 0; // 0xa35 Return
	
Label_2614:
	var_79_int = 36964; // 0xa36 PushI
	var_80_bool = var_36_bool == var_79_int; // 0xa37 Eq
	if(var_80_bool == 0) goto Label_2637; // 0xa38 JumpB
	var_81_string = ""; // 0xa39 PushV
	var_81_string = "Neutral"; // 0xa3a MovS
	func_2535(var_37_cvector, var_81_string); // 0xa3b NEW_2
	var_82_int = 535288; // 0xa3d PushI
	SetMessage(var_82_int); // 0xa3e TObjFunc
	ClearReplies(); // 0xa40 TObjFunc
	var_83_int = 535289; // 0xa42 PushI
	var_84_int = -1; // 0xa43 PushI
	var_85_int = 36965; // 0xa44 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0xa45 TObjFunc
	var_86_int = 535290; // 0xa47 PushI
	var_87_int = -1; // 0xa48 PushI
	var_88_int = 36966; // 0xa49 PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0xa4a TObjFunc
	return 0; // 0xa4c Return
	
Label_2637:
	var_3_string = 1; // 0xa4d TMovB
	var_89_bool = 0; // 0xa4e PushV
	func_3510(var_89_bool); // 0xa4f NEW_2
	if(var_89_bool == 0) goto Label_2645; // 0xa51 JumpB
	lshStopAnimation(); // 0xa52 Func
	goto Label_2647; // 0xa54 Jump
	
Label_2647:
	return 0; // 0xa57 Return
	
Label_2645:
	StopAnimation(); // 0xa55 Func
	
Label_2649:
	return 0; // 0xa59 Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_cvector)
{
	var_38_int = 1; // 0xafc PushI
	if(var_38_int == 0) goto Label_2852; // 0xafd JumpB
	func_3412(); // 0xaff NEW_2
	var_40_int = 42548; // 0xb01 PushI
	var_41_bool = var_36_int == var_40_int; // 0xb02 Eq
	if(var_41_bool == 0) goto Label_2840; // 0xb03 JumpB
	var_42_string = ""; // 0xb04 PushV
	var_42_string = "Neutral"; // 0xb05 MovS
	func_2789(var_37_cvector, var_42_string); // 0xb06 NEW_2
	var_59_int = 540539; // 0xb08 PushI
	SetMessage(var_59_int); // 0xb09 TObjFunc
	ClearReplies(); // 0xb0b TObjFunc
	var_60_int = 540540; // 0xb0d PushI
	var_61_int = -1; // 0xb0e PushI
	var_62_int = 42549; // 0xb0f PushI
	AddReply(var_60_int, var_61_int, var_62_int); // 0xb10 TObjFunc
	var_63_int = 540799; // 0xb12 PushI
	var_64_int = -1; // 0xb13 PushI
	var_65_int = 42848; // 0xb14 PushI
	AddReply(var_63_int, var_64_int, var_65_int); // 0xb15 TObjFunc
	return 0; // 0xb17 Return
	
Label_2840:
	var_3_string = 1; // 0xb18 TMovB
	var_66_bool = 0; // 0xb19 PushV
	func_3510(var_66_bool); // 0xb1a NEW_2
	if(var_66_bool == 0) goto Label_2848; // 0xb1c JumpB
	lshStopAnimation(); // 0xb1d Func
	goto Label_2850; // 0xb1f Jump
	
Label_2850:
	return 0; // 0xb22 Return
	
Label_2848:
	StopAnimation(); // 0xb20 Func
	
Label_2852:
	return 0; // 0xb24 Return
}


task_14_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_int)
{
	var_37_int = 10; // 0xb6f PushI
	var_38_bool = var_36_int == var_37_int; // 0xb70 Eq
	if(var_38_bool == 0) goto Label_2963; // 0xb71 JumpB
	func_2922(); // 0xb73 NEW_2
	var_40_bool = 0; // 0xb75 PushV
	var_40_bool = 0; // 0xb76 MovB
	var_41_bool = 0; // 0xb77 PushV
	func_3136(var_41_bool); // 0xb78 NEW_2
	if(var_41_bool == 0) goto Label_2944; // 0xb7a JumpB
	var_44_bool = 0; // 0xb7b PushV
	func_2891(var_44_bool); // 0xb7c NEW_2
	if(var_44_bool == 0) goto Label_2944; // 0xb7e JumpB
	var_40_bool = 1; // 0xb7f MovB
	
Label_2944:
	if(var_40_bool == 0) goto Label_2957; // 0xb80 JumpB
	var_61_bool = 0; // 0xb81 PushV
	func_2871(var_61_bool); // 0xb82 NEW_2
	if(var_61_bool == 0) goto Label_2956; // 0xb84 JumpB
	var_80_bool = 0; var_81_object = Obj(); // 0xb85 PushV
	var_82_object = Obj(); // 0xb86 PushV
	func_3419(var_82_object); // 0xb87 NEW_2
	var_81_object = var_82_object; // 0xb88 Mov
	func_3286(var_81_object); // 0xb8a NEW_2
	
Label_2956:
	goto Label_2963; // 0xb8c Jump
	
Label_2963:
	return 0; // 0xb93 Return
	
Label_2957:
	func_2886(var_36_int); // 0xb8e NEW_2
	func_2913(); // 0xb91 NEW_2
}


task_14_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_3104(); // 0xb95 NEW_2
	func_2922(); // 0xb98 NEW_2
	lshStopSpeech(); // 0xb9a Func
	lshStopAnimation(); // 0xb9c Func
	StopAsync(); // 0xb9e Func
	Hold(); // 0xba0 Func
	return 0; // 0xba2 Return
}


task_14_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	StopGroup0(); // 0xba3 Func
	func_2922(); // 0xba6 NEW_2
	var_37_string = ""; // 0xba8 PushV
	var_37_string = "Neutral"; // 0xba9 MovS
	func_3366(var_37_string); // 0xbaa NEW_2
	func_2913(); // 0xbad NEW_2
	return 0; // 0xbaf Return
}


task_14_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_bool)
{
	var_37_bool = var_36_bool; // 0xbb1 Push
	if(var_37_bool == 0) goto Label_2999; // 0xbb2 JumpB
	func_2913(); // 0xbb4 NEW_2
	goto Label_3003; // 0xbb6 Jump
	
Label_3003:
	return 0; // 0xbbb Return
	
Label_2999:
	var_43_string = ""; // 0xbb7 PushV
	var_43_string = "Neutral"; // 0xbb8 MovS
	func_3366(var_43_string); // 0xbb9 NEW_2
}


task_14_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0; // 0xbbc PushV
	IsOverrideActive(var_38_bool); // 0xbbd Func
	var_39_bool = var_38_bool == 0; // 0xbbf Not
	if(var_39_bool == 0) goto Label_3032; // 0xbc0 JumpB
	EventDisable(0); // 0xbc1 EventDisable
	func_3104(); // 0xbc3 NEW_2
	var_40_bool = 0; var_41_object = Obj(); // 0xbc5 PushV
	var_41_object = var_36_object; // 0xbc6 Mov
	func_3127(var_41_object); // 0xbc7 NEW_2
	EventEnable(0); // 0xbc9 EventEnable
	var_54_object = Obj(); // 0xbca PushV
	var_54_object = var_36_object; // 0xbcb Mov
	func_3991(var_54_object); // 0xbcc NEW_2
	var_767_string = ""; // 0xbce PushV
	var_767_string = "Neutral"; // 0xbcf MovS
	func_3366(var_767_string); // 0xbd0 NEW_2
	func_2922(); // 0xbd3 NEW_2
	func_2913(); // 0xbd6 NEW_2
	
Label_3032:
	return 2; // 0xbd8 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_cvector)
{
	func_2857(var_35_cvector); // 0xb26 NEW_2
	return 0; // 0xb28 Return
}


func_3584()
{
	var_91_string = "ook2Laska1"; // 0xe01 PushS
	var_92_int = 1; // 0xe02 PushI
	SetVariable(var_91_string, var_92_int); // 0xe03 Func
	return 0; // 0xe05 Return
}


func_0(var_0_object, var_289_int, var_290_object)
{
	var_292_object = Obj(); var_293_bool = 0; var_294_int = 0; var_295_bool = 0; var_296_object = Obj(); var_297_bool = 0; var_298_int = 0; var_299_bool = 0; // 0x0 PushV
	var_0_object = var_290_object; // 0x1 TMov
	var_300_bool = 0; var_301_object = Obj(); var_302_float = 0; // 0x2 PushV
	var_301_object = var_290_object; // 0x3 Mov
	var_302_float = 70.0; // 0x4 MovF
	func_3141(var_301_object, var_302_float); // 0x5 NEW_2
	var_303_bool = var_300_bool == 0; // 0x7 Not
	if(var_303_bool == 0) goto Label_11; // 0x8 JumpB
	var_289_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_296_object); // 0xb Func
	var_304_int = 0; // 0xd PushV
	func_3504(var_304_int); // 0xe NEW_2
	SetNPCName(var_304_int); // 0x10 ObjFunc
	var_305_int = 0; // 0x12 PushV
	func_3502(var_305_int); // 0x13 NEW_2
	SetNPCDescription(var_305_int); // 0x15 ObjFunc
	var_306_string = ""; // 0x17 PushV
	func_3506(var_306_string); // 0x18 NEW_2
	SetPhoto(var_306_string); // 0x1a ObjFunc
	var_307_string = ""; // 0x1c PushV
	func_3508(var_307_string); // 0x1d NEW_2
	SetPhoto2(var_307_string); // 0x1f ObjFunc
	var_308_int = 0; // 0x21 PushV
	func_3974(var_308_int); // 0x22 NEW_2
	SetPlayerName(var_308_int); // 0x24 ObjFunc
	var_298_int = -1; // 0x26 MovI
	IsOverrideActive(var_297_bool); // 0x27 Func
	var_309_bool = var_297_bool; // 0x29 Push
	if(var_309_bool == 0) goto Label_45; // 0x2a JumpB
	var_289_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_296_object); // 0x2d Func
	var_310_bool = 0; var_311_object = Obj(); // 0x2f PushV
	var_312_object = Obj(); // 0x30 PushV
	func_3419(var_312_object); // 0x31 NEW_2
	var_311_object = var_312_object; // 0x32 Mov
	func_3228(var_310_bool, var_311_object); // 0x34 NEW_2
	var_313_object = Obj(); var_314_object = Obj(); // 0x36 PushV
	var_313_object = var_290_object; // 0x37 Mov
	var_314_object = var_296_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_315_object, var_316_object, var_317_string, var_318_bool, var_313_object, var_314_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_299_bool); // 0x3d ObjFunc
	
Label_63:
	var_380_bool = var_299_bool == 0; // 0x3f Not
	if(var_380_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_299_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_381_object = Obj(); // 0x46 PushV
	var_381_object = var_290_object; // 0x47 Mov
	func_3210(); // 0x48 NEW_2
	StopDialog(var_296_object); // 0x4a Func
	GetReturnValue(var_298_int); // 0x4c ObjFunc
	var_289_int = var_298_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3844()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0xf04 PushV
	var_85_int = 406; // 0xf05 PushI
	var_86_int = 2; // 0xf06 PushI
	var_87_int = 526024; // 0xf07 PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0xf08 Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0xf0a PushV
	var_89_object = var_84_object; // 0xf0b Mov
	var_90_int = 405; // 0xf0c MovI
	func_3896(var_88_bool, var_89_object, var_90_int); // 0xf0d NEW_2
	return 2; // 0xf0f Return
}


func_3590()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0xe06 PushV
	var_46_object = Obj(); // 0xe07 PushV
	func_3924(var_46_object); // 0xe08 NEW_2
	var_45_object = var_46_object; // 0xe09 Mov
	var_53_string = "k5q03LaskaGotoAlbinos"; // 0xe0b PushS
	var_54_string = "pt_k5q03_albinos_path12"; // 0xe0c PushS
	var_55_int = 0; // 0xe0d PushI
	var_56_int = 526026; // 0xe0e PushI
	var_57_float = 0; // 0xe0f PushV
	func_3458(var_57_float); // 0xe10 NEW_2
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0xe12 ObjFunc
	func_3831(); // 0xe15 NEW_2
	func_3844(); // 0xe18 NEW_2
	var_91_object = Obj(); var_92_string = ""; // 0xe1a PushV
	var_92_string = "quest_k5_03"; // 0xe1b MovS
	func_3440(var_91_object, var_92_string); // 0xe1c NEW_2
	return 2; // 0xe1e Return
}


func_3857()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0xf11 PushV
	var_62_int = 748; // 0xf12 PushI
	var_63_int = 2; // 0xf13 PushI
	var_64_int = 539627; // 0xf14 PushI
	CreateDiaryEntry(var_61_object, var_62_int, var_63_int, var_64_int); // 0xf15 Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0xf17 PushV
	var_66_object = var_61_object; // 0xf18 Mov
	var_67_int = -1; // 0xf19 MovI
	func_3896(var_65_bool, var_66_object, var_67_int); // 0xf1a NEW_2
	return 2; // 0xf1c Return
}


func_3102(var_74_bool)
{
	var_74_bool = 1; // 0xc1e MovB
	return 0; // 0xc1f Return
}


func_3870()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0xf1e PushV
	var_85_int = 749; // 0xf1f PushI
	var_86_int = 2; // 0xf20 PushI
	var_87_int = 539628; // 0xf21 PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0xf22 Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0xf24 PushV
	var_89_object = var_84_object; // 0xf25 Mov
	var_90_int = 748; // 0xf26 MovI
	func_3896(var_88_bool, var_89_object, var_90_int); // 0xf27 NEW_2
	return 2; // 0xf29 Return
}


func_3616()
{
	var_531_string = "ook5Laska1"; // 0xe21 PushS
	var_532_int = 1; // 0xe22 PushI
	SetVariable(var_531_string, var_532_int); // 0xe23 Func
	return 0; // 0xe25 Return
}


func_3104()
{
	StopAnimation(); // 0xc20 Func
	StopGroup0(); // 0xc22 Func
	return 0; // 0xc24 Return
}


func_1316(var_0_object, var_59_int, var_60_object)
{
	var_62_object = Obj(); var_63_bool = 0; var_64_int = 0; var_65_bool = 0; var_66_object = Obj(); var_67_bool = 0; var_68_int = 0; var_69_bool = 0; // 0x524 PushV
	var_0_object = var_60_object; // 0x525 TMov
	var_70_bool = 0; var_71_object = Obj(); var_72_float = 0; // 0x526 PushV
	var_71_object = var_60_object; // 0x527 Mov
	var_72_float = 70.0; // 0x528 MovF
	func_3141(var_71_object, var_72_float); // 0x529 NEW_2
	var_117_bool = var_70_bool == 0; // 0x52b Not
	if(var_117_bool == 0) goto Label_1327; // 0x52c JumpB
	var_59_int = -2; // 0x52d MovI
	return 8; // 0x52e Return
	
Label_1327:
	CreateDialog(var_66_object); // 0x52f Func
	var_118_int = 0; // 0x531 PushV
	func_3504(var_118_int); // 0x532 NEW_2
	SetNPCName(var_118_int); // 0x534 ObjFunc
	var_119_int = 0; // 0x536 PushV
	func_3502(var_119_int); // 0x537 NEW_2
	SetNPCDescription(var_119_int); // 0x539 ObjFunc
	var_120_string = ""; // 0x53b PushV
	func_3506(var_120_string); // 0x53c NEW_2
	SetPhoto(var_120_string); // 0x53e ObjFunc
	var_121_string = ""; // 0x540 PushV
	func_3508(var_121_string); // 0x541 NEW_2
	SetPhoto2(var_121_string); // 0x543 ObjFunc
	var_122_int = 0; // 0x545 PushV
	func_3974(var_122_int); // 0x546 NEW_2
	SetPlayerName(var_122_int); // 0x548 ObjFunc
	var_68_int = -1; // 0x54a MovI
	IsOverrideActive(var_67_bool); // 0x54b Func
	var_130_bool = var_67_bool; // 0x54d Push
	if(var_130_bool == 0) goto Label_1361; // 0x54e JumpB
	var_59_int = -2; // 0x54f MovI
	return 8; // 0x550 Return
	
Label_1361:
	DoDialog(var_66_object); // 0x551 Func
	var_131_bool = 0; var_132_object = Obj(); // 0x553 PushV
	var_133_object = Obj(); // 0x554 PushV
	func_3419(var_133_object); // 0x555 NEW_2
	var_132_object = var_133_object; // 0x556 Mov
	func_3228(var_131_bool, var_132_object); // 0x558 NEW_2
	var_226_object = Obj(); var_227_object = Obj(); // 0x55a PushV
	var_226_object = var_60_object; // 0x55b Mov
	var_227_object = var_66_object; // 0x55c Mov
	TaskCall(5); // 0x55d TaskCall
	func_1397(var_228_object, var_229_object, var_230_string, var_231_bool, var_226_object, var_227_object); // 0x55e NEW_2
	TaskReturn(); // 0x55f TaskReturn
	IsDialogEnd(var_69_bool); // 0x561 ObjFunc
	
Label_1379:
	var_275_bool = var_69_bool == 0; // 0x563 Not
	if(var_275_bool == 0) goto Label_1386; // 0x564 JumpB
	sync(); // 0x565 Func
	IsDialogEnd(var_69_bool); // 0x567 ObjFunc
	goto Label_1379; // 0x569 Jump
	
Label_1386:
	var_276_object = Obj(); // 0x56a PushV
	var_276_object = var_60_object; // 0x56b Mov
	func_3210(); // 0x56c NEW_2
	StopDialog(var_66_object); // 0x56e Func
	GetReturnValue(var_68_int); // 0x570 ObjFunc
	var_59_int = var_68_int; // 0x572 Mov
	return 8; // 0x573 Return
}


func_3109(var_51_float)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); // 0xc25 PushV
	GetPosition(var_56_cvector); // 0xc26 Func
	GetPosition(var_57_cvector); // 0xc28 ObjFunc
	var_58_cvector = var_57_cvector - var_56_cvector; // 0xc2a Sub2
	var_51_float = var_58_cvector | var_58_cvector; // 0xc2b Or2
	return 6; // 0xc2c Return
}


func_3622()
{
	var_535_string = "k5LaskaVisit"; // 0xe27 PushS
	var_536_int = 1; // 0xe28 PushI
	SetVariable(var_535_string, var_536_int); // 0xe29 Func
	return 0; // 0xe2b Return
}


func_3366(var_259_string)
{
	var_260_bool = 0; var_261_float = 0; var_262_float = 0; var_263_bool = 0; var_264_float = 0; var_265_float = 0; // 0xd26 PushV
	lshHasAnimation(var_263_bool, var_259_string); // 0xd27 Func
	var_266_bool = var_263_bool; // 0xd29 Push
	if(var_266_bool == 0) goto Label_3377; // 0xd2a JumpB
	lshGetAnimTimes(var_259_string, var_264_float, var_265_float); // 0xd2b Func
	var_267_bool = 0; // 0xd2d PushB
	lshPlayAnimation(var_264_float, var_265_float, var_267_bool); // 0xd2e Func
	goto Label_3381; // 0xd30 Jump
	
Label_3381:
	return 6; // 0xd35 Return
	
Label_3377:
	var_268_string = "Can't find lsh animation : "; // 0xd31 PushS
	var_269_int = var_268_string + var_259_string; // 0xd32 Add
	Trace(var_269_int); // 0xd33 Func
}


func_2857(var_0_object)
{
	var_36_bool = 0; // 0xb29 PushV
	func_3136(var_36_bool); // 0xb2a NEW_2
	var_39_bool = var_36_bool == 0; // 0xb2c Not
	if(var_39_bool == 0) goto Label_2864; // 0xb2d JumpB
	Hold(); // 0xb2e Func
	
Label_2864:
	GetDirection(var_0_object); // 0xb30 Func
	
Label_2866:
	func_3033(); // 0xb33 NEW_2
	goto Label_2866; // 0xb35 Jump
}


func_3883(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj(); // 0xf2b PushV
	GetDiaryRoot(var_76_object); // 0xf2c Func
	var_77_bool = var_76_object == 0; // 0xf2e Not
	if(var_77_bool == 0) goto Label_3893; // 0xf2f JumpB
	var_78_string = "Can't retrieve diary root"; // 0xf30 PushS
	Trace(var_78_string); // 0xf31 Func
	var_74_object = 0; // 0xf33 MovB
	return 2; // 0xf34 Return
	
Label_3893:
	var_74_object = var_76_object; // 0xf35 Mov
	return 2; // 0xf36 Return
}


func_3628()
{
	var_611_string = "k6LaskaVisit"; // 0xe2d PushS
	var_612_int = 1; // 0xe2e PushI
	SetVariable(var_611_string, var_612_int); // 0xe2f Func
	return 0; // 0xe31 Return
}


func_3117(var_44_bool, var_45_cvector)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; // 0xc2d PushV
	GetPosition(var_49_cvector); // 0xc2e Func
	var_50_cvector = var_45_cvector - var_49_cvector; // 0xc30 Sub2
	var_52_float = GetByIndex(var_50_cvector, 0); // 0xc31 PushE
	var_53_float = GetByIndex(var_50_cvector, 2); // 0xc32 PushE
	Rotate(var_52_float, var_53_float, var_51_bool); // 0xc33 Func
	var_44_bool = var_51_bool; // 0xc35 Mov
	return 6; // 0xc36 Return
}


func_3634()
{
	var_615_string = "ook6Laska1"; // 0xe33 PushS
	var_616_int = 1; // 0xe34 PushI
	SetVariable(var_615_string, var_616_int); // 0xe35 Func
	return 0; // 0xe37 Return
}


func_3382(var_237_string, var_238_bool)
{
	var_241_bool = 0; var_242_float = 0; var_243_float = 0; var_244_bool = 0; var_245_float = 0; var_246_float = 0; // 0xd36 PushV
	lshHasAnimation(var_244_bool, var_237_string); // 0xd37 Func
	var_247_bool = var_244_bool; // 0xd39 Push
	if(var_247_bool == 0) goto Label_3392; // 0xd3a JumpB
	lshGetAnimTimes(var_237_string, var_245_float, var_246_float); // 0xd3b Func
	lshPlayAnimation(var_245_float, var_246_float, var_238_bool); // 0xd3d Func
	goto Label_3396; // 0xd3f Jump
	
Label_3396:
	return 6; // 0xd44 Return
	
Label_3392:
	var_248_string = "Can't find lsh animation : "; // 0xd40 PushS
	var_249_int = var_248_string + var_237_string; // 0xd41 Add
	Trace(var_249_int); // 0xd42 Func
}


func_3127(var_40_bool)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0xc37 PushV
	GetPosition(var_43_cvector); // 0xc38 ObjFunc
	var_44_bool = 0; var_45_cvector = CVector(0,0,0); // 0xc3a PushV
	var_45_cvector = var_43_cvector; // 0xc3b Mov
	func_3117(var_44_bool, var_45_cvector); // 0xc3c NEW_2
	var_40_bool = var_44_bool; // 0xc3d Mov
	return 2; // 0xc3f Return
}


func_3640()
{
	var_44_object = Obj(); var_45_object = Obj(); // 0xe38 PushV
	var_46_object = Obj(); // 0xe39 PushV
	func_3924(var_46_object); // 0xe3a NEW_2
	var_45_object = var_46_object; // 0xe3b Mov
	var_53_string = "k6q03LaskaGotoAlbinos"; // 0xe3d PushS
	var_54_string = "pt_k6q03_albinos_path9"; // 0xe3e PushS
	var_55_int = 0; // 0xe3f PushI
	var_56_int = 511153; // 0xe40 PushI
	var_57_float = 0; // 0xe41 PushV
	func_3458(var_57_float); // 0xe42 NEW_2
	AddMark(var_53_string, var_54_string, var_55_int, var_56_int, var_57_float); // 0xe44 ObjFunc
	func_3857(); // 0xe47 NEW_2
	func_3870(); // 0xe4a NEW_2
	var_91_object = Obj(); var_92_string = ""; // 0xe4c PushV
	var_92_string = "quest_k6_03"; // 0xe4d MovS
	func_3440(var_91_object, var_92_string); // 0xe4e NEW_2
	return 2; // 0xe50 Return
}


func_2871(var_61_bool)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0xb37 PushV
	var_64_string = "player"; // 0xb38 PushS
	FindActor(var_63_object, var_64_string); // 0xb39 Func
	var_65_bool = var_63_object == 0; // 0xb3b Not
	if(var_65_bool == 0) goto Label_2879; // 0xb3c JumpB
	var_61_bool = 0; // 0xb3d MovB
	return 2; // 0xb3e Return
	
Label_2879:
	var_66_bool = 0; var_67_object = Obj(); // 0xb3f PushV
	var_67_object = var_63_object; // 0xb40 Mov
	func_3127(var_67_object); // 0xb41 NEW_2
	var_61_bool = var_66_bool; // 0xb42 Mov
	return 2; // 0xb44 Return
}


func_3896(var_65_bool, var_66_object, var_67_int)
{
	var_68_object = Obj(); var_69_object = Obj(); var_70_int = 0; var_71_object = Obj(); var_72_object = Obj(); var_73_int = 0; // 0xf38 PushV
	var_74_object = Obj(); // 0xf39 PushV
	func_3883(var_74_object); // 0xf3a NEW_2
	var_71_object = var_74_object; // 0xf3b Mov
	Find(var_67_int, var_72_object); // 0xf3d ObjFunc
	var_79_bool = var_72_object == 0; // 0xf3f Not
	if(var_79_bool == 0) goto Label_3911; // 0xf40 JumpB
	var_80_string = "Can't find diary parent with id: "; // 0xf41 PushS
	var_81_int = var_80_string + var_67_int; // 0xf42 Add
	Trace(var_81_int); // 0xf43 Func
	var_65_bool = 0; // 0xf45 MovB
	return 6; // 0xf46 Return
	
Label_3911:
	AddChild(var_66_object); // 0xf47 ObjFunc
	var_82_int = 7; // 0xf49 PushI
	SendWorldWndMessage(var_82_int); // 0xf4a Func
	GetCategory(var_73_int); // 0xf4c ObjFunc
	SetDiarySection(var_73_int); // 0xf4e Func
	var_65_bool = 0; // 0xf50 MovB
	return 6; // 0xf51 Return
}


func_1600(var_0_object, var_1_object, var_2_object, var_3_string, var_516_object, var_517_object)
{
	var_0_object = var_517_object; // 0x641 TMov
	var_1_object = var_516_object; // 0x642 TMov
	var_3_string = 0; // 0x643 TMovB
	var_522_int = 1; // 0x644 PushI
	if(var_522_int == 0) goto Label_1663; // 0x645 JumpB
	var_523_bool = 0; var_524_object = Obj(); // 0x646 PushV
	var_524_object = var_1_object; // 0x647 MovT
	func_3781(var_524_object); // 0x648 NEW_2
	if(var_523_bool == 0) goto Label_1641; // 0x64a JumpB
	var_529_object = Obj(); var_530_object = Obj(); // 0x64b PushV
	var_529_object = var_1_object; // 0x64c MovT
	var_530_object = var_0_object; // 0x64d MovT
	func_3616(); // 0x64e NEW_2
	var_533_object = Obj(); var_534_object = Obj(); // 0x650 PushV
	var_533_object = var_1_object; // 0x651 MovT
	var_534_object = var_0_object; // 0x652 MovT
	func_3622(); // 0x653 NEW_2
	var_537_string = ""; // 0x655 PushV
	var_537_string = "Autizm"; // 0x656 MovS
	func_1693(var_517_object, var_537_string); // 0x657 NEW_2
	var_545_int = 525944; // 0x659 PushI
	SetMessage(var_545_int); // 0x65a TObjFunc
	ClearReplies(); // 0x65c TObjFunc
	var_546_int = 542433; // 0x65e PushI
	var_547_int = 44818; // 0x65f PushI
	var_548_int = 44817; // 0x660 PushI
	AddReply(var_546_int, var_547_int, var_548_int); // 0x661 TObjFunc
	var_549_int = 542438; // 0x663 PushI
	var_550_int = 44824; // 0x664 PushI
	var_551_int = 44822; // 0x665 PushI
	AddReply(var_549_int, var_550_int, var_551_int); // 0x666 TObjFunc
	goto Label_1663; // 0x668 Jump
	
Label_1663:
	var_552_bool = 0; // 0x67f PushV
	func_3510(var_552_bool); // 0x680 NEW_2
	if(var_552_bool == 0) goto Label_1678; // 0x682 JumpB
	
Label_1667:
	lshWaitForAnimEnd(); // 0x683 Func
	var_553_string = var_3_string; // 0x685 PushT
	if(var_553_string == 0) goto Label_1672; // 0x686 JumpB
	goto Label_1677; // 0x687 Jump
	
Label_1677:
	goto Label_1692; // 0x68d Jump
	
Label_1692:
	return 0; // 0x69c Return
	
Label_1672:
	var_554_string = ""; // 0x688 PushV
	var_554_string = var_2_object; // 0x689 MovT
	func_3366(var_554_string); // 0x68a NEW_2
	goto Label_1667; // 0x68c Jump
	
Label_1678:
	var_555_string = "all"; // 0x68e PushS
	var_556_string = "idle"; // 0x68f PushS
	PlayAnimation(var_555_string, var_556_string); // 0x690 Func
	
Label_1682:
	WaitForAnimEnd(); // 0x692 Func
	var_557_string = var_3_string; // 0x694 PushT
	if(var_557_string == 0) goto Label_1687; // 0x695 JumpB
	goto Label_1692; // 0x696 Jump
	
Label_1687:
	var_558_string = "all"; // 0x697 PushS
	var_559_string = "idle"; // 0x698 PushS
	PlayAnimation(var_558_string, var_559_string); // 0x699 Func
	goto Label_1682; // 0x69b Jump
	
Label_1641:
	var_560_string = ""; // 0x669 PushV
	var_560_string = "Neutral"; // 0x66a MovS
	func_1693(var_517_object, var_560_string); // 0x66b NEW_2
	var_561_int = 525948; // 0x66d PushI
	SetMessage(var_561_int); // 0x66e TObjFunc
	ClearReplies(); // 0x670 TObjFunc
	var_562_int = 525949; // 0x672 PushI
	var_563_int = -1; // 0x673 PushI
	var_564_int = 27233; // 0x674 PushI
	AddReply(var_562_int, var_563_int, var_564_int); // 0x675 TObjFunc
	var_565_int = 529092; // 0x677 PushI
	var_566_int = -1; // 0x678 PushI
	var_567_int = 30537; // 0x679 PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0x67a TObjFunc
	goto Label_1663; // 0x67c Jump
}


func_3136(var_36_bool)
{
	var_37_bool = 0; var_38_bool = 0; // 0xc40 PushV
	IsLoaded(var_38_bool); // 0xc41 Func
	var_36_bool = var_38_bool; // 0xc43 Mov
	return 2; // 0xc44 Return
}


func_3141(var_70_bool, var_72_float)
{
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_bool = 0; var_81_bool = 0; var_82_float = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0; var_90_bool = 0; // 0xc45 PushV
	GetPosition(var_83_cvector); // 0xc46 ObjFunc
	GetEyesHeight(var_82_float); // 0xc48 ObjFunc
	var_91_float = GetByIndex(var_83_cvector, 1); // 0xc4a PushE
	var_91_float = var_91_float + var_82_float; // 0xc4b Add2
	SetByIndex(var_83_cvector, 1) = var_91_float; // 0xc4c PopE
	GetPosition(var_84_cvector); // 0xc4d Func
	GetEyesHeight(var_82_float); // 0xc4f Func
	var_92_float = GetByIndex(var_84_cvector, 1); // 0xc51 PushE
	var_92_float = var_92_float + var_82_float; // 0xc52 Add2
	SetByIndex(var_84_cvector, 1) = var_92_float; // 0xc53 PopE
	var_85_cvector = var_83_cvector - var_84_cvector; // 0xc54 Sub2
	var_93_float = GetByIndex(var_85_cvector, 1); // 0xc55 PushE
	var_93_float = 0; // 0xc56 MovI
	SetByIndex(var_85_cvector, 1) = var_93_float; // 0xc57 PopE
	var_94_int = var_85_cvector | var_85_cvector; // 0xc58 Or
	var_95_float = sqrt(var_94_int); // 0xc59 Sqrt
	var_85_cvector = var_85_cvector / var_85_cvector; // 0xc5a Div2
	var_86_cvector = -var_85_cvector; // 0xc5b Neg2
	var_96_float = var_85_cvector * var_72_float; // 0xc5c Mult
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); // 0xc5d PushV
	var_99_cvector = CVector(0.0, 1.0, 0.0); // 0xc5e PushVec
	var_98_cvector = var_86_cvector ^ var_99_cvector; // 0xc5f Xor2
	func_3425(var_97_cvector, var_98_cvector); // 0xc60 NEW_2
	var_105_int = 25; // 0xc62 PushI
	var_106_float = var_97_cvector * var_105_int; // 0xc63 Mult
	var_107_int = var_96_float + var_106_float; // 0xc64 Add
	var_108_cvector = CVector(0.0, 10.0, 0.0); // 0xc65 PushVec
	var_87_cvector = var_107_int - var_108_cvector; // 0xc66 Sub2
	var_88_cvector = var_84_cvector + var_87_cvector; // 0xc67 Add2
	IsOverrideActive(var_89_bool); // 0xc68 Func
	var_109_bool = var_89_bool; // 0xc6a Push
	if(var_109_bool == 0) goto Label_3182; // 0xc6b JumpB
	var_70_bool = 0; // 0xc6c MovB
	return 18; // 0xc6d Return
	
Label_3182:
	StopWorld(); // 0xc6e Func
	var_110_bool = 1; // 0xc70 PushB
	CameraTransit(var_88_cvector, var_86_cvector, var_110_bool); // 0xc71 Func
	var_111_float = GetByIndex(var_87_cvector, 0); // 0xc73 PushE
	var_112_float = GetByIndex(var_87_cvector, 2); // 0xc74 PushE
	Rotate(var_111_float, var_112_float); // 0xc75 Func
	var_113_bool = 0; // 0xc77 PushV
	func_3510(var_113_bool); // 0xc78 NEW_2
	if(var_113_bool == 0) goto Label_3196; // 0xc7a JumpB
	goto Label_3204; // 0xc7b Jump
	
Label_3204:
	CameraWaitForPlayFinish(); // 0xc84 Func
	ResumeWorld(); // 0xc86 Func
	var_70_bool = 1; // 0xc88 MovB
	return 18; // 0xc89 Return
	
Label_3196:
	var_114_string = "head"; // 0xc7c PushS
	HasAnimationTrack(var_90_bool, var_114_string); // 0xc7d Func
	var_115_bool = var_90_bool; // 0xc7f Push
	if(var_115_bool == 0) goto Label_3204; // 0xc80 JumpB
	var_116_string = "head"; // 0xc81 PushS
	LookAsyncCamera(var_116_string); // 0xc82 Func
}


func_3397(var_165_bool, var_166_string)
{
	var_167_bool = 0; var_168_bool = 0; // 0xd45 PushV
	var_169_bool = 0; // 0xd46 PushV
	func_3510(var_169_bool); // 0xd47 NEW_2
	if(var_169_bool == 0) goto Label_3410; // 0xd49 JumpB
	lshHasSpeech(var_168_bool, var_166_string); // 0xd4a Func
	var_170_bool = var_168_bool; // 0xd4c Push
	if(var_170_bool == 0) goto Label_3410; // 0xd4d JumpB
	lshPlaySpeech(var_166_string); // 0xd4e Func
	var_165_bool = 1; // 0xd50 MovB
	return 2; // 0xd51 Return
	
Label_3410:
	var_165_bool = 0; // 0xd52 MovB
	return 2; // 0xd53 Return
}


func_2886(var_0_object)
{
	var_113_float = GetByIndex(var_0_object, 0); // 0xb46 PushE
	var_114_float = GetByIndex(var_0_object, 2); // 0xb47 PushE
	RotateAsync(var_113_float, var_114_float); // 0xb48 Func
	return 0; // 0xb4a Return
}


func_2891(var_44_bool)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_object = Obj(); var_48_bool = 0; // 0xb4b PushV
	var_49_string = "player"; // 0xb4c PushS
	FindActor(var_47_object, var_49_string); // 0xb4d Func
	var_50_bool = var_47_object == 0; // 0xb4f Not
	if(var_50_bool == 0) goto Label_2899; // 0xb50 JumpB
	var_44_bool = 0; // 0xb51 MovB
	return 4; // 0xb52 Return
	
Label_2899:
	var_51_float = 0; var_52_object = Obj(); // 0xb53 PushV
	var_52_object = var_47_object; // 0xb54 Mov
	func_3109(var_52_object); // 0xb55 NEW_2
	var_59_float = 90000.0; // 0xb57 PushF
	var_60_bool = var_51_float > var_59_float; // 0xb58 GT
	if(var_60_bool == 0) goto Label_2908; // 0xb59 JumpB
	var_44_bool = 0; // 0xb5a MovB
	return 4; // 0xb5b Return
	
Label_2908:
	CanSee(var_48_bool, var_47_object); // 0xb5c Func
	var_44_bool = var_48_bool; // 0xb5e Mov
	return 4; // 0xb5f Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_313_object, var_314_object)
{
	var_0_object = var_314_object; // 0x52 TMov
	var_1_object = var_313_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_319_int = 1; // 0x55 PushI
	if(var_319_int == 0) goto Label_163; // 0x56 JumpB
	var_320_bool = 0; // 0x57 PushV
	var_320_bool = 0; // 0x58 MovB
	var_321_bool = 0; var_322_object = Obj(); // 0x59 PushV
	var_322_object = var_1_object; // 0x5a MovT
	func_3678(var_322_object); // 0x5b NEW_2
	if(var_321_bool == 0) goto Label_101; // 0x5d JumpB
	var_329_bool = 0; var_330_object = Obj(); // 0x5e PushV
	var_330_object = var_1_object; // 0x5f MovT
	func_3690(var_330_object); // 0x60 NEW_2
	var_335_bool = var_329_bool == 0; // 0x62 Not
	if(var_335_bool == 0) goto Label_101; // 0x63 JumpB
	var_320_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_320_bool == 0) goto Label_127; // 0x65 JumpB
	var_336_object = Obj(); var_337_object = Obj(); // 0x66 PushV
	var_336_object = var_1_object; // 0x67 MovT
	var_337_object = var_0_object; // 0x68 MovT
	func_3528(); // 0x69 NEW_2
	var_340_string = ""; // 0x6b PushV
	var_340_string = "Autizm"; // 0x6c MovS
	func_193(var_314_object, var_340_string); // 0x6d NEW_2
	var_348_int = 524644; // 0x6f PushI
	SetMessage(var_348_int); // 0x70 TObjFunc
	ClearReplies(); // 0x72 TObjFunc
	var_349_int = 526298; // 0x74 PushI
	var_350_int = 27579; // 0x75 PushI
	var_351_int = 27578; // 0x76 PushI
	AddReply(var_349_int, var_350_int, var_351_int); // 0x77 TObjFunc
	var_352_int = 526300; // 0x79 PushI
	var_353_int = 27581; // 0x7a PushI
	var_354_int = 27580; // 0x7b PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x7c TObjFunc
	goto Label_163; // 0x7e Jump
	
Label_163:
	var_355_bool = 0; // 0xa3 PushV
	func_3510(var_355_bool); // 0xa4 NEW_2
	if(var_355_bool == 0) goto Label_178; // 0xa6 JumpB
	
Label_167:
	lshWaitForAnimEnd(); // 0xa7 Func
	var_356_string = var_3_string; // 0xa9 PushT
	if(var_356_string == 0) goto Label_172; // 0xaa JumpB
	goto Label_177; // 0xab Jump
	
Label_177:
	goto Label_192; // 0xb1 Jump
	
Label_192:
	return 0; // 0xc0 Return
	
Label_172:
	var_357_string = ""; // 0xac PushV
	var_357_string = var_2_object; // 0xad MovT
	func_3366(var_357_string); // 0xae NEW_2
	goto Label_167; // 0xb0 Jump
	
Label_178:
	var_358_string = "all"; // 0xb2 PushS
	var_359_string = "idle"; // 0xb3 PushS
	PlayAnimation(var_358_string, var_359_string); // 0xb4 Func
	
Label_182:
	WaitForAnimEnd(); // 0xb6 Func
	var_360_string = var_3_string; // 0xb8 PushT
	if(var_360_string == 0) goto Label_187; // 0xb9 JumpB
	goto Label_192; // 0xba Jump
	
Label_187:
	var_361_string = "all"; // 0xbb PushS
	var_362_string = "idle"; // 0xbc PushS
	PlayAnimation(var_361_string, var_362_string); // 0xbd Func
	goto Label_182; // 0xbf Jump
	
Label_127:
	var_363_string = ""; // 0x7f PushV
	var_363_string = "Neutral"; // 0x80 MovS
	func_193(var_314_object, var_363_string); // 0x81 NEW_2
	var_364_int = 524648; // 0x83 PushI
	SetMessage(var_364_int); // 0x84 TObjFunc
	ClearReplies(); // 0x86 TObjFunc
	var_365_bool = 0; // 0x88 PushV
	var_365_bool = 0; // 0x89 MovB
	var_366_bool = 0; var_367_object = Obj(); // 0x8a PushV
	var_367_object = var_1_object; // 0x8b MovT
	func_3690(var_367_object); // 0x8c NEW_2
	if(var_366_bool == 0) goto Label_149; // 0x8e JumpB
	var_368_bool = 0; var_369_object = Obj(); // 0x8f PushV
	var_369_object = var_1_object; // 0x90 MovT
	func_3702(var_369_object); // 0x91 NEW_2
	if(var_368_bool == 0) goto Label_149; // 0x93 JumpB
	var_365_bool = 1; // 0x94 MovB
	
Label_149:
	if(var_365_bool == 0) goto Label_155; // 0x95 JumpB
	var_374_int = 524681; // 0x96 PushI
	var_375_int = 43988; // 0x97 PushI
	var_376_int = 26020; // 0x98 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x99 TObjFunc
	
Label_155:
	var_377_int = 524649; // 0x9b PushI
	var_378_int = -1; // 0x9c PushI
	var_379_int = 25988; // 0x9d PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x9e TObjFunc
	goto Label_163; // 0xa0 Jump
}


func_3666()
{
	var_79_string = "playsound"; // 0xe53 PushS
	var_80_string = "giveitem"; // 0xe54 PushS
	TriggerWorld(var_79_string, var_80_string); // 0xe55 Func
	return 0; // 0xe57 Return
}


func_3412()
{
	var_39_bool = 0; // 0xd54 PushV
	func_3510(var_39_bool); // 0xd55 NEW_2
	if(var_39_bool == 0) goto Label_3418; // 0xd57 JumpB
	lshStopSpeech(); // 0xd58 Func
	
Label_3418:
	return 0; // 0xd5a Return
}


func_3924(var_46_object)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_object = Obj(); var_50_object = Obj(); // 0xf54 PushV
	GetMainOutdoorScene(var_49_object); // 0xf55 Func
	var_51_bool = var_49_object == 0; // 0xf57 NullEq
	if(var_51_bool == 0) goto Label_3935; // 0xf58 JumpB
	var_52_string = "Can't find main outdoor scene"; // 0xf59 PushS
	Trace(var_52_string); // 0xf5a Func
	var_50_object = 0; // 0xf5c SetNull
	var_46_object = var_50_object; // 0xf5d Mov
	return 4; // 0xf5e Return
	
Label_3935:
	GetMap(var_50_object); // 0xf5f ObjFunc
	var_46_object = var_50_object; // 0xf61 Mov
	return 4; // 0xf62 Return
}


func_2391(var_0_object, var_652_int, var_653_object)
{
	var_655_object = Obj(); var_656_bool = 0; var_657_int = 0; var_658_bool = 0; var_659_object = Obj(); var_660_bool = 0; var_661_int = 0; var_662_bool = 0; // 0x957 PushV
	var_0_object = var_653_object; // 0x958 TMov
	var_663_bool = 0; var_664_object = Obj(); var_665_float = 0; // 0x959 PushV
	var_664_object = var_653_object; // 0x95a Mov
	var_665_float = 70.0; // 0x95b MovF
	func_3141(var_664_object, var_665_float); // 0x95c NEW_2
	var_666_bool = var_663_bool == 0; // 0x95e Not
	if(var_666_bool == 0) goto Label_2402; // 0x95f JumpB
	var_652_int = -2; // 0x960 MovI
	return 8; // 0x961 Return
	
Label_2402:
	CreateDialog(var_659_object); // 0x962 Func
	var_667_int = 0; // 0x964 PushV
	func_3504(var_667_int); // 0x965 NEW_2
	SetNPCName(var_667_int); // 0x967 ObjFunc
	var_668_int = 0; // 0x969 PushV
	func_3502(var_668_int); // 0x96a NEW_2
	SetNPCDescription(var_668_int); // 0x96c ObjFunc
	var_669_string = ""; // 0x96e PushV
	func_3506(var_669_string); // 0x96f NEW_2
	SetPhoto(var_669_string); // 0x971 ObjFunc
	var_670_string = ""; // 0x973 PushV
	func_3508(var_670_string); // 0x974 NEW_2
	SetPhoto2(var_670_string); // 0x976 ObjFunc
	var_671_int = 0; // 0x978 PushV
	func_3974(var_671_int); // 0x979 NEW_2
	SetPlayerName(var_671_int); // 0x97b ObjFunc
	var_661_int = -1; // 0x97d MovI
	IsOverrideActive(var_660_bool); // 0x97e Func
	var_672_bool = var_660_bool; // 0x980 Push
	if(var_672_bool == 0) goto Label_2436; // 0x981 JumpB
	var_652_int = -2; // 0x982 MovI
	return 8; // 0x983 Return
	
Label_2436:
	DoDialog(var_659_object); // 0x984 Func
	var_673_bool = 0; var_674_object = Obj(); // 0x986 PushV
	var_675_object = Obj(); // 0x987 PushV
	func_3419(var_675_object); // 0x988 NEW_2
	var_674_object = var_675_object; // 0x989 Mov
	func_3228(var_673_bool, var_674_object); // 0x98b NEW_2
	var_676_object = Obj(); var_677_object = Obj(); // 0x98d PushV
	var_676_object = var_653_object; // 0x98e Mov
	var_677_object = var_659_object; // 0x98f Mov
	TaskCall(11); // 0x990 TaskCall
	func_2472(var_678_object, var_679_object, var_680_string, var_681_bool, var_676_object, var_677_object); // 0x991 NEW_2
	TaskReturn(); // 0x992 TaskReturn
	IsDialogEnd(var_662_bool); // 0x994 ObjFunc
	
Label_2454:
	var_709_bool = var_662_bool == 0; // 0x996 Not
	if(var_709_bool == 0) goto Label_2461; // 0x997 JumpB
	sync(); // 0x998 Func
	IsDialogEnd(var_662_bool); // 0x99a ObjFunc
	goto Label_2454; // 0x99c Jump
	
Label_2461:
	var_710_object = Obj(); // 0x99d PushV
	var_710_object = var_653_object; // 0x99e Mov
	func_3210(); // 0x99f NEW_2
	StopDialog(var_659_object); // 0x9a1 Func
	GetReturnValue(var_661_int); // 0x9a3 ObjFunc
	var_652_int = var_661_int; // 0x9a5 Mov
	return 8; // 0x9a6 Return
}


func_3672()
{
	var_101_string = "playsound"; // 0xe59 PushS
	var_102_string = "mapmark"; // 0xe5a PushS
	TriggerWorld(var_101_string, var_102_string); // 0xe5b Func
	return 0; // 0xe5d Return
}


func_2138(var_2_object, var_617_string)
{
	var_618_bool = 0; // 0x85b PushV
	func_3510(var_618_bool); // 0x85c NEW_2
	var_619_bool = var_618_bool == 0; // 0x85e Not
	if(var_619_bool == 0) goto Label_2145; // 0x85f JumpB
	return 0; // 0x860 Return
	
Label_2145:
	var_620_bool = var_617_string == var_2_object; // 0x861 Eq
	if(var_620_bool == 0) goto Label_2148; // 0x862 JumpB
	return 0; // 0x863 Return
	
Label_2148:
	var_621_string = ""; var_622_bool = 0; // 0x864 PushV
	var_621_string = var_617_string; // 0x865 Mov
	var_623_string = ""; // 0x866 PushS
	var_624_bool = var_617_string == var_623_string; // 0x867 Eq
	if(var_624_bool == 0) goto Label_2155; // 0x868 JumpB
	var_622_bool = 0; // 0x869 MovB
	goto Label_2156; // 0x86a Jump
	
Label_2156:
	func_3382(var_621_string, var_622_bool); // 0x86c NEW_2
	var_2_object = var_617_string; // 0x86e TMov
	return 0; // 0x86f Return
	
Label_2155:
	var_622_bool = 1; // 0x86b MovB
}


func_2650(var_0_object, var_711_int, var_712_object)
{
	var_714_object = Obj(); var_715_bool = 0; var_716_int = 0; var_717_bool = 0; var_718_object = Obj(); var_719_bool = 0; var_720_int = 0; var_721_bool = 0; // 0xa5a PushV
	var_0_object = var_712_object; // 0xa5b TMov
	var_722_bool = 0; var_723_object = Obj(); var_724_float = 0; // 0xa5c PushV
	var_723_object = var_712_object; // 0xa5d Mov
	var_724_float = 70.0; // 0xa5e MovF
	func_3141(var_723_object, var_724_float); // 0xa5f NEW_2
	var_725_bool = var_722_bool == 0; // 0xa61 Not
	if(var_725_bool == 0) goto Label_2661; // 0xa62 JumpB
	var_711_int = -2; // 0xa63 MovI
	return 8; // 0xa64 Return
	
Label_2661:
	CreateDialog(var_718_object); // 0xa65 Func
	var_726_int = 0; // 0xa67 PushV
	func_3504(var_726_int); // 0xa68 NEW_2
	SetNPCName(var_726_int); // 0xa6a ObjFunc
	var_727_int = 0; // 0xa6c PushV
	func_3502(var_727_int); // 0xa6d NEW_2
	SetNPCDescription(var_727_int); // 0xa6f ObjFunc
	var_728_string = ""; // 0xa71 PushV
	func_3506(var_728_string); // 0xa72 NEW_2
	SetPhoto(var_728_string); // 0xa74 ObjFunc
	var_729_string = ""; // 0xa76 PushV
	func_3508(var_729_string); // 0xa77 NEW_2
	SetPhoto2(var_729_string); // 0xa79 ObjFunc
	var_730_int = 0; // 0xa7b PushV
	func_3974(var_730_int); // 0xa7c NEW_2
	SetPlayerName(var_730_int); // 0xa7e ObjFunc
	var_720_int = -1; // 0xa80 MovI
	IsOverrideActive(var_719_bool); // 0xa81 Func
	var_731_bool = var_719_bool; // 0xa83 Push
	if(var_731_bool == 0) goto Label_2695; // 0xa84 JumpB
	var_711_int = -2; // 0xa85 MovI
	return 8; // 0xa86 Return
	
Label_2695:
	DoDialog(var_718_object); // 0xa87 Func
	var_732_bool = 0; var_733_object = Obj(); // 0xa89 PushV
	var_734_object = Obj(); // 0xa8a PushV
	func_3419(var_734_object); // 0xa8b NEW_2
	var_733_object = var_734_object; // 0xa8c Mov
	func_3228(var_732_bool, var_733_object); // 0xa8e NEW_2
	var_735_object = Obj(); var_736_object = Obj(); // 0xa90 PushV
	var_735_object = var_712_object; // 0xa91 Mov
	var_736_object = var_718_object; // 0xa92 Mov
	TaskCall(13); // 0xa93 TaskCall
	func_2731(var_737_object, var_738_object, var_739_string, var_740_bool, var_735_object, var_736_object); // 0xa94 NEW_2
	TaskReturn(); // 0xa95 TaskReturn
	IsDialogEnd(var_721_bool); // 0xa97 ObjFunc
	
Label_2713:
	var_765_bool = var_721_bool == 0; // 0xa99 Not
	if(var_765_bool == 0) goto Label_2720; // 0xa9a JumpB
	sync(); // 0xa9b Func
	IsDialogEnd(var_721_bool); // 0xa9d ObjFunc
	goto Label_2713; // 0xa9f Jump
	
Label_2720:
	var_766_object = Obj(); // 0xaa0 PushV
	var_766_object = var_712_object; // 0xaa1 Mov
	func_3210(); // 0xaa2 NEW_2
	StopDialog(var_718_object); // 0xaa4 Func
	GetReturnValue(var_720_int); // 0xaa6 ObjFunc
	var_711_int = var_720_int; // 0xaa8 Mov
	return 8; // 0xaa9 Return
}


func_3419(var_133_object)
{
	var_134_object = Obj(); var_135_object = Obj(); // 0xd5b PushV
	self(var_135_object); // 0xd5c Func
	var_133_object = var_135_object; // 0xd5e Mov
	return 2; // 0xd5f Return
}


func_3678(var_321_bool)
{
	var_323_int = 0; var_324_string = ""; // 0xe5f PushV
	var_324_string = "ook1Laska1"; // 0xe60 MovS
	func_3435(var_323_int, var_324_string); // 0xe61 NEW_2
	var_327_int = 0; // 0xe63 PushI
	var_328_bool = var_323_int == var_327_int; // 0xe64 Eq
	if(var_328_bool == 0) goto Label_3688; // 0xe65 JumpB
	var_321_bool = 1; // 0xe66 MovB
	return 0; // 0xe67 Return
	
Label_3688:
	var_321_bool = 0; // 0xe68 MovB
	return 0; // 0xe69 Return
}


func_865(var_2_object, var_415_string)
{
	var_416_bool = 0; // 0x362 PushV
	func_3510(var_416_bool); // 0x363 NEW_2
	var_417_bool = var_416_bool == 0; // 0x365 Not
	if(var_417_bool == 0) goto Label_872; // 0x366 JumpB
	return 0; // 0x367 Return
	
Label_872:
	var_418_bool = var_415_string == var_2_object; // 0x368 Eq
	if(var_418_bool == 0) goto Label_875; // 0x369 JumpB
	return 0; // 0x36a Return
	
Label_875:
	var_419_string = ""; var_420_bool = 0; // 0x36b PushV
	var_419_string = var_415_string; // 0x36c Mov
	var_421_string = ""; // 0x36d PushS
	var_422_bool = var_415_string == var_421_string; // 0x36e Eq
	if(var_422_bool == 0) goto Label_882; // 0x36f JumpB
	var_420_bool = 0; // 0x370 MovB
	goto Label_883; // 0x371 Jump
	
Label_883:
	func_3382(var_419_string, var_420_bool); // 0x373 NEW_2
	var_2_object = var_415_string; // 0x375 TMov
	return 0; // 0x376 Return
	
Label_882:
	var_420_bool = 1; // 0x372 MovB
}


func_2913()
{
	var_769_float = 0; var_770_float = 0; // 0xb61 PushV
	var_771_int = 8; // 0xb62 PushI
	var_772_int = 16; // 0xb63 PushI
	rand(var_770_float, var_771_int, var_772_int); // 0xb64 Func
	var_773_int = 10; // 0xb66 PushI
	SetTimer(var_773_int, var_770_float); // 0xb67 Func
	return 2; // 0xb69 Return
}


func_3425(var_97_cvector, var_98_cvector)
{
	var_100_float = 0; var_101_float = 0; // 0xd61 PushV
	var_102_int = var_98_cvector | var_98_cvector; // 0xd62 Or
	var_101_float = sqrt(var_102_int); // 0xd63 Sqrt2
	var_103_float = 0.0; // 0xd64 PushF
	var_104_bool = var_101_float < var_103_float; // 0xd65 LT
	if(var_104_bool == 0) goto Label_3433; // 0xd66 JumpB
	var_97_cvector = CVector(0.0, 0.0, 0.0); // 0xd67 MovV
	return 2; // 0xd68 Return
	
Label_3433:
	var_97_cvector = var_98_cvector / var_98_cvector; // 0xd69 Div2
	return 2; // 0xd6a Return
}


func_3941(var_93_object, var_94_string, var_95_float)
{
	var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_object = Obj(); var_100_bool = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_object = Obj(); var_104_bool = 0; // 0xf65 PushV
	GetMainOutdoorScene(var_103_object); // 0xf66 Func
	var_105_bool = var_103_object == 0; // 0xf68 NullEq
	if(var_105_bool == 0) goto Label_3950; // 0xf69 JumpB
	var_106_string = "Can't find main outdoor scene"; // 0xf6a PushS
	Trace(var_106_string); // 0xf6b Func
	return 8; // 0xf6d Return
	
Label_3950:
	GetLocator(var_94_string, var_104_bool, var_101_cvector, var_102_cvector); // 0xf6e ObjFunc
	var_107_bool = var_104_bool == 0; // 0xf70 Not
	if(var_107_bool == 0) goto Label_3960; // 0xf71 JumpB
	var_108_string = "Warning: outdoor scene locator "; // 0xf72 PushS
	var_109_int = var_108_string + var_94_string; // 0xf73 Add
	var_110_string = " doesnt exist"; // 0xf74 PushS
	var_111_int = var_109_int + var_110_string; // 0xf75 Add
	Trace(var_111_int); // 0xf76 Func
	
Label_3960:
	GetMap(var_93_object); // 0xf78 ObjFunc
	var_112_bool = var_93_object == 0; // 0xf7a NullEq
	if(var_112_bool == 0) goto Label_3968; // 0xf7b JumpB
	var_113_string = "Can't find map"; // 0xf7c PushS
	Trace(var_113_string); // 0xf7d Func
	return 8; // 0xf7f Return
	
Label_3968:
	var_114_float = GetByIndex(var_101_cvector, 0); // 0xf80 PushE
	var_115_float = GetByIndex(var_101_cvector, 2); // 0xf81 PushE
	SetMapParams(var_114_float, var_115_float, var_95_float); // 0xf82 ObjFunc
	return 8; // 0xf84 Return
}


func_3690(var_329_bool)
{
	var_331_int = 0; var_332_string = ""; // 0xe6b PushV
	var_332_string = "k1q01"; // 0xe6c MovS
	func_3435(var_331_int, var_332_string); // 0xe6d NEW_2
	var_333_int = 4; // 0xe6f PushI
	var_334_bool = var_331_int == var_333_int; // 0xe70 Eq
	if(var_334_bool == 0) goto Label_3700; // 0xe71 JumpB
	var_329_bool = 1; // 0xe72 MovB
	return 0; // 0xe73 Return
	
Label_3700:
	var_329_bool = 0; // 0xe74 MovB
	return 0; // 0xe75 Return
}


func_2922()
{
	var_768_int = 10; // 0xb6a PushI
	KillTimer(var_768_int); // 0xb6b Func
	return 0; // 0xb6d Return
}


func_3435(var_323_int, var_324_string)
{
	var_325_int = 0; var_326_int = 0; // 0xd6b PushV
	GetVariable(var_324_string, var_326_int); // 0xd6c Func
	var_323_int = var_326_int; // 0xd6e Mov
	return 2; // 0xd6f Return
}


func_3440(var_91_object, var_92_string)
{
	var_93_object = Obj(); var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); // 0xd70 PushV
	GetMainOutdoorScene(var_95_object); // 0xd71 Func
	var_97_string = ".bin"; // 0xd73 PushS
	var_98_int = var_92_string + var_97_string; // 0xd74 Add
	AddBlankActor(var_96_object, var_95_object, var_92_string, var_98_int); // 0xd75 Func
	var_91_object = var_96_object; // 0xd77 Mov
	return 4; // 0xd78 Return
}


func_1397(var_0_object, var_1_object, var_2_object, var_3_string, var_226_object, var_227_object)
{
	var_0_object = var_227_object; // 0x576 TMov
	var_1_object = var_226_object; // 0x577 TMov
	var_3_string = 0; // 0x578 TMovB
	var_232_int = 1; // 0x579 PushI
	if(var_232_int == 0) goto Label_1425; // 0x57a JumpB
	var_233_string = ""; // 0x57b PushV
	var_233_string = "Neutral"; // 0x57c MovS
	func_1455(var_227_object, var_233_string); // 0x57d NEW_2
	var_250_int = 525498; // 0x57f PushI
	SetMessage(var_250_int); // 0x580 TObjFunc
	ClearReplies(); // 0x582 TObjFunc
	var_251_int = 525499; // 0x584 PushI
	var_252_int = -1; // 0x585 PushI
	var_253_int = 26855; // 0x586 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x587 TObjFunc
	var_254_int = 526256; // 0x589 PushI
	var_255_int = -1; // 0x58a PushI
	var_256_int = 27530; // 0x58b PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x58c TObjFunc
	goto Label_1425; // 0x58e Jump
	
Label_1425:
	var_257_bool = 0; // 0x591 PushV
	func_3510(var_257_bool); // 0x592 NEW_2
	if(var_257_bool == 0) goto Label_1440; // 0x594 JumpB
	
Label_1429:
	lshWaitForAnimEnd(); // 0x595 Func
	var_258_string = var_3_string; // 0x597 PushT
	if(var_258_string == 0) goto Label_1434; // 0x598 JumpB
	goto Label_1439; // 0x599 Jump
	
Label_1439:
	goto Label_1454; // 0x59f Jump
	
Label_1454:
	return 0; // 0x5ae Return
	
Label_1434:
	var_259_string = ""; // 0x59a PushV
	var_259_string = var_2_object; // 0x59b MovT
	func_3366(var_259_string); // 0x59c NEW_2
	goto Label_1429; // 0x59e Jump
	
Label_1440:
	var_270_string = "all"; // 0x5a0 PushS
	var_271_string = "idle"; // 0x5a1 PushS
	PlayAnimation(var_270_string, var_271_string); // 0x5a2 Func
	
Label_1444:
	WaitForAnimEnd(); // 0x5a4 Func
	var_272_string = var_3_string; // 0x5a6 PushT
	if(var_272_string == 0) goto Label_1449; // 0x5a7 JumpB
	goto Label_1454; // 0x5a8 Jump
	
Label_1449:
	var_273_string = "all"; // 0x5a9 PushS
	var_274_string = "idle"; // 0x5aa PushS
	PlayAnimation(var_273_string, var_274_string); // 0x5ab Func
	goto Label_1444; // 0x5ad Jump
}


func_3702(var_368_bool)
{
	var_370_int = 0; var_371_string = ""; // 0xe77 PushV
	var_371_string = "ook1Laska2"; // 0xe78 MovS
	func_3435(var_370_int, var_371_string); // 0xe79 NEW_2
	var_372_int = 0; // 0xe7b PushI
	var_373_bool = var_370_int == var_372_int; // 0xe7c Eq
	if(var_373_bool == 0) goto Label_3712; // 0xe7d JumpB
	var_368_bool = 1; // 0xe7e MovB
	return 0; // 0xe7f Return
	
Label_3712:
	var_368_bool = 0; // 0xe80 MovB
	return 0; // 0xe81 Return
}


func_3451(var_430_bool, var_432_string)
{
	var_433_int = 0; var_434_bool = 0; var_435_int = 0; var_436_bool = 0; // 0xd7b PushV
	GetInvItemByName(var_435_int, var_432_string); // 0xd7c Func
	HasItem(var_435_int, var_436_bool); // 0xd7e ObjFunc
	var_430_bool = var_436_bool; // 0xd80 Mov
	return 4; // 0xd81 Return
}


func_3714(var_443_bool)
{
	var_445_int = 0; var_446_string = ""; // 0xe83 PushV
	var_446_string = "k2q02"; // 0xe84 MovS
	func_3435(var_445_int, var_446_string); // 0xe85 NEW_2
	var_447_int = 1; // 0xe87 PushI
	var_448_bool = var_445_int == var_447_int; // 0xe88 Eq
	if(var_448_bool == 0) goto Label_3724; // 0xe89 JumpB
	var_443_bool = 1; // 0xe8a MovB
	return 0; // 0xe8b Return
	
Label_3724:
	var_443_bool = 0; // 0xe8c MovB
	return 0; // 0xe8d Return
}


func_3458(var_57_float)
{
	var_58_float = 0; var_59_float = 0; // 0xd82 PushV
	GetGameTime(var_59_float); // 0xd83 Func
	var_57_float = var_59_float; // 0xd85 Mov
	return 2; // 0xd86 Return
}


func_3974(var_122_int)
{
	var_123_int = 0; var_124_int = 0; // 0xf86 PushV
	var_125_string = "branch"; // 0xf87 PushS
	GetVariable(var_125_string, var_124_int); // 0xf88 Func
	var_126_int = 0; // 0xf8a PushI
	var_127_bool = var_124_int == var_126_int; // 0xf8b Eq
	if(var_127_bool == 0) goto Label_3984; // 0xf8c JumpB
	var_122_int = 1; // 0xf8d MovI
	return 2; // 0xf8e Return
	
Label_3984:
	var_128_int = 1; // 0xf90 PushI
	var_129_bool = var_124_int == var_128_int; // 0xf91 Eq
	if(var_129_bool == 0) goto Label_3989; // 0xf92 JumpB
	var_122_int = 2; // 0xf93 MovI
	return 2; // 0xf94 Return
	
Label_3989:
	var_122_int = 3; // 0xf95 MovI
	return 2; // 0xf96 Return
}


func_3463(var_186_int)
{
	var_187_float = 0; var_188_float = 0; // 0xd87 PushV
	GetGameTime(var_188_float); // 0xd88 Func
	var_189_int = 1; // 0xd8a PushI
	var_190_int = 0; // 0xd8b PushV
	var_191_int = 24; // 0xd8c PushI
	var_190_int = var_188_float / var_188_float; // 0xd8d Div2
	var_186_int = var_189_int + var_190_int; // 0xd8e Add2
	return 2; // 0xd8f Return
}


func_3210()
{
	var_277_bool = 0; var_278_bool = 0; // 0xc8a PushV
	var_279_bool = 1; // 0xc8b PushB
	CameraSwitchToNormal(var_279_bool); // 0xc8c Func
	var_280_bool = 0; // 0xc8e PushV
	func_3510(var_280_bool); // 0xc8f NEW_2
	if(var_280_bool == 0) goto Label_3219; // 0xc91 JumpB
	goto Label_3227; // 0xc92 Jump
	
Label_3227:
	return 2; // 0xc9b Return
	
Label_3219:
	var_281_string = "head"; // 0xc93 PushS
	HasAnimationTrack(var_278_bool, var_281_string); // 0xc94 Func
	var_282_bool = var_278_bool; // 0xc96 Push
	if(var_282_bool == 0) goto Label_3227; // 0xc97 JumpB
	var_283_string = "head"; // 0xc98 PushS
	UnlookAsync(var_283_string); // 0xc99 Func
}


func_3726(var_450_bool)
{
	var_452_int = 0; var_453_string = ""; // 0xe8f PushV
	var_453_string = "k2q02"; // 0xe90 MovS
	func_3435(var_452_int, var_453_string); // 0xe91 NEW_2
	var_454_int = 2; // 0xe93 PushI
	var_455_bool = var_452_int == var_454_int; // 0xe94 Eq
	if(var_455_bool == 0) goto Label_3736; // 0xe95 JumpB
	var_450_bool = 1; // 0xe96 MovB
	return 0; // 0xe97 Return
	
Label_3736:
	var_450_bool = 0; // 0xe98 MovB
	return 0; // 0xe99 Return
}


func_3472(var_286_bool, var_287_int)
{
	var_288_int = 0; // 0xd91 PushV
	func_3463(var_288_int); // 0xd92 NEW_2
	var_286_bool = var_288_int == var_287_int; // 0xd94 Eq2
	return 0; // 0xd95 Return
}


func_3478(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = ""; // 0xd96 PushV
	var_63_string = "idle"; // 0xd97 MovS
	var_64_int = var_61_int; // 0xd98 Push
	if(var_64_int == 0) goto Label_3483; // 0xd99 JumpB
	var_63_string = var_63_string + var_61_int; // 0xd9a Add2
	
Label_3483:
	var_60_string = var_63_string; // 0xd9b Mov
	return 2; // 0xd9c Return
}


func_3991(var_54_object)
{
	var_55_int = 0; var_56_int = 0; // 0xf97 PushV
	var_57_string = "mt_laska"; // 0xf98 PushS
	GetVariable(var_57_string, var_56_int); // 0xf99 Func
	var_58_bool = var_56_int == 0; // 0xf9b Not
	if(var_58_bool == 0) goto Label_4007; // 0xf9c JumpB
	var_59_int = 0; var_60_object = Obj(); // 0xf9d PushV
	var_60_object = var_54_object; // 0xf9e Mov
	TaskCall(4); // 0xf9f TaskCall
	func_1316(var_61_object, var_59_int, var_60_object); // 0xfa0 NEW_2
	TaskReturn(); // 0xfa1 TaskReturn
	var_284_string = "mt_laska"; // 0xfa3 PushS
	var_285_int = 1; // 0xfa4 PushI
	SetVariable(var_284_string, var_285_int); // 0xfa5 Func
	
Label_4007:
	var_286_bool = 0; var_287_int = 0; // 0xfa7 PushV
	var_287_int = 1; // 0xfa8 MovI
	func_3472(var_286_bool, var_287_int); // 0xfa9 NEW_2
	if(var_286_bool == 0) goto Label_4019; // 0xfab JumpB
	var_289_int = 0; var_290_object = Obj(); // 0xfac PushV
	var_290_object = var_54_object; // 0xfad Mov
	TaskCall(0); // 0xfae TaskCall
	func_0(var_291_object, var_289_int, var_290_object); // 0xfaf NEW_2
	TaskReturn(); // 0xfb0 TaskReturn
	return 2; // 0xfb2 Return
	
Label_4019:
	var_382_bool = 0; var_383_int = 0; // 0xfb3 PushV
	var_383_int = 2; // 0xfb4 MovI
	func_3472(var_382_bool, var_383_int); // 0xfb5 NEW_2
	if(var_382_bool == 0) goto Label_4031; // 0xfb7 JumpB
	var_384_int = 0; var_385_object = Obj(); // 0xfb8 PushV
	var_385_object = var_54_object; // 0xfb9 Mov
	TaskCall(2); // 0xfba TaskCall
	func_665(var_386_object, var_384_int, var_385_object); // 0xfbb NEW_2
	TaskReturn(); // 0xfbc TaskReturn
	return 2; // 0xfbe Return
	
Label_4031:
	var_490_bool = 0; var_491_int = 0; // 0xfbf PushV
	var_491_int = 5; // 0xfc0 MovI
	func_3472(var_490_bool, var_491_int); // 0xfc1 NEW_2
	if(var_490_bool == 0) goto Label_4043; // 0xfc3 JumpB
	var_492_int = 0; var_493_object = Obj(); // 0xfc4 PushV
	var_493_object = var_54_object; // 0xfc5 Mov
	TaskCall(6); // 0xfc6 TaskCall
	func_1519(var_494_object, var_492_int, var_493_object); // 0xfc7 NEW_2
	TaskReturn(); // 0xfc8 TaskReturn
	return 2; // 0xfca Return
	
Label_4043:
	var_570_bool = 0; var_571_int = 0; // 0xfcb PushV
	var_571_int = 6; // 0xfcc MovI
	func_3472(var_570_bool, var_571_int); // 0xfcd NEW_2
	if(var_570_bool == 0) goto Label_4055; // 0xfcf JumpB
	var_572_int = 0; var_573_object = Obj(); // 0xfd0 PushV
	var_573_object = var_54_object; // 0xfd1 Mov
	TaskCall(8); // 0xfd2 TaskCall
	func_1964(var_574_object, var_572_int, var_573_object); // 0xfd3 NEW_2
	TaskReturn(); // 0xfd4 TaskReturn
	return 2; // 0xfd6 Return
	
Label_4055:
	var_650_bool = 0; var_651_int = 0; // 0xfd7 PushV
	var_651_int = 12; // 0xfd8 MovI
	func_3472(var_650_bool, var_651_int); // 0xfd9 NEW_2
	if(var_650_bool == 0) goto Label_4067; // 0xfdb JumpB
	var_652_int = 0; var_653_object = Obj(); // 0xfdc PushV
	var_653_object = var_54_object; // 0xfdd Mov
	TaskCall(10); // 0xfde TaskCall
	func_2391(var_654_object, var_652_int, var_653_object); // 0xfdf NEW_2
	TaskReturn(); // 0xfe0 TaskReturn
	return 2; // 0xfe2 Return
	
Label_4067:
	var_711_int = 0; var_712_object = Obj(); // 0xfe3 PushV
	var_712_object = var_54_object; // 0xfe4 Mov
	TaskCall(12); // 0xfe5 TaskCall
	func_2650(var_713_object, var_711_int, var_712_object); // 0xfe6 NEW_2
	TaskReturn(); // 0xfe7 TaskReturn
	return 2; // 0xfe9 Return
}


func_665(var_0_object, var_384_int, var_385_object)
{
	var_387_object = Obj(); var_388_bool = 0; var_389_int = 0; var_390_bool = 0; var_391_object = Obj(); var_392_bool = 0; var_393_int = 0; var_394_bool = 0; // 0x299 PushV
	var_0_object = var_385_object; // 0x29a TMov
	var_395_bool = 0; var_396_object = Obj(); var_397_float = 0; // 0x29b PushV
	var_396_object = var_385_object; // 0x29c Mov
	var_397_float = 70.0; // 0x29d MovF
	func_3141(var_396_object, var_397_float); // 0x29e NEW_2
	var_398_bool = var_395_bool == 0; // 0x2a0 Not
	if(var_398_bool == 0) goto Label_676; // 0x2a1 JumpB
	var_384_int = -2; // 0x2a2 MovI
	return 8; // 0x2a3 Return
	
Label_676:
	CreateDialog(var_391_object); // 0x2a4 Func
	var_399_int = 0; // 0x2a6 PushV
	func_3504(var_399_int); // 0x2a7 NEW_2
	SetNPCName(var_399_int); // 0x2a9 ObjFunc
	var_400_int = 0; // 0x2ab PushV
	func_3502(var_400_int); // 0x2ac NEW_2
	SetNPCDescription(var_400_int); // 0x2ae ObjFunc
	var_401_string = ""; // 0x2b0 PushV
	func_3506(var_401_string); // 0x2b1 NEW_2
	SetPhoto(var_401_string); // 0x2b3 ObjFunc
	var_402_string = ""; // 0x2b5 PushV
	func_3508(var_402_string); // 0x2b6 NEW_2
	SetPhoto2(var_402_string); // 0x2b8 ObjFunc
	var_403_int = 0; // 0x2ba PushV
	func_3974(var_403_int); // 0x2bb NEW_2
	SetPlayerName(var_403_int); // 0x2bd ObjFunc
	var_393_int = -1; // 0x2bf MovI
	IsOverrideActive(var_392_bool); // 0x2c0 Func
	var_404_bool = var_392_bool; // 0x2c2 Push
	if(var_404_bool == 0) goto Label_710; // 0x2c3 JumpB
	var_384_int = -2; // 0x2c4 MovI
	return 8; // 0x2c5 Return
	
Label_710:
	DoDialog(var_391_object); // 0x2c6 Func
	var_405_bool = 0; var_406_object = Obj(); // 0x2c8 PushV
	var_407_object = Obj(); // 0x2c9 PushV
	func_3419(var_407_object); // 0x2ca NEW_2
	var_406_object = var_407_object; // 0x2cb Mov
	func_3228(var_405_bool, var_406_object); // 0x2cd NEW_2
	var_408_object = Obj(); var_409_object = Obj(); // 0x2cf PushV
	var_408_object = var_385_object; // 0x2d0 Mov
	var_409_object = var_391_object; // 0x2d1 Mov
	TaskCall(3); // 0x2d2 TaskCall
	func_746(var_410_object, var_411_object, var_412_string, var_413_bool, var_408_object, var_409_object); // 0x2d3 NEW_2
	TaskReturn(); // 0x2d4 TaskReturn
	IsDialogEnd(var_394_bool); // 0x2d6 ObjFunc
	
Label_728:
	var_488_bool = var_394_bool == 0; // 0x2d8 Not
	if(var_488_bool == 0) goto Label_735; // 0x2d9 JumpB
	sync(); // 0x2da Func
	IsDialogEnd(var_394_bool); // 0x2dc ObjFunc
	goto Label_728; // 0x2de Jump
	
Label_735:
	var_489_object = Obj(); // 0x2df PushV
	var_489_object = var_385_object; // 0x2e0 Mov
	func_3210(); // 0x2e1 NEW_2
	StopDialog(var_391_object); // 0x2e3 Func
	GetReturnValue(var_393_int); // 0x2e5 ObjFunc
	var_384_int = var_393_int; // 0x2e7 Mov
	return 8; // 0x2e8 Return
}


func_3738(var_426_bool, var_427_object)
{
	var_428_bool = 0; // 0xe9b PushV
	var_428_bool = 0; // 0xe9c MovB
	var_429_bool = 0; // 0xe9d PushV
	var_429_bool = 0; // 0xe9e MovB
	var_430_bool = 0; var_431_object = Obj(); var_432_string = ""; // 0xe9f PushV
	var_431_object = var_427_object; // 0xea0 Mov
	var_432_string = "flower"; // 0xea1 MovS
	func_3451(var_431_object, var_432_string); // 0xea2 NEW_2
	if(var_430_bool == 0) goto Label_3756; // 0xea4 JumpB
	var_437_bool = 0; var_438_object = Obj(); var_439_string = ""; // 0xea5 PushV
	var_438_object = var_427_object; // 0xea6 Mov
	var_439_string = "milk"; // 0xea7 MovS
	func_3451(var_438_object, var_439_string); // 0xea8 NEW_2
	if(var_437_bool == 0) goto Label_3756; // 0xeaa JumpB
	var_429_bool = 1; // 0xeab MovB
	
Label_3756:
	if(var_429_bool == 0) goto Label_3764; // 0xeac JumpB
	var_440_bool = 0; var_441_object = Obj(); var_442_string = ""; // 0xead PushV
	var_441_object = var_427_object; // 0xeae Mov
	var_442_string = "bread"; // 0xeaf MovS
	func_3451(var_441_object, var_442_string); // 0xeb0 NEW_2
	if(var_440_bool == 0) goto Label_3764; // 0xeb2 JumpB
	var_428_bool = 1; // 0xeb3 MovB
	
Label_3764:
	if(var_428_bool == 0) goto Label_3767; // 0xeb4 JumpB
	var_426_bool = 1; // 0xeb5 MovB
	return 0; // 0xeb6 Return
	
Label_3767:
	var_426_bool = 0; // 0xeb7 MovB
	return 0; // 0xeb8 Return
}


func_3228(var_131_bool, var_132_object)
{
	var_136_int = 0; var_137_int = 0; var_138_int = 0; var_139_int = 0; // 0xc9c PushV
	var_140_string = "voice_common"; // 0xc9d PushS
	GetVariable(var_140_string, var_138_int); // 0xc9e Func
	var_141_int = var_138_int; // 0xca0 Push
	if(var_141_int == 0) goto Label_3266; // 0xca1 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0xca2 PushV
	var_143_object = var_132_object; // 0xca3 Mov
	func_3286(var_143_object); // 0xca4 NEW_2
	var_172_bool = var_142_bool == 0; // 0xca6 Not
	if(var_172_bool == 0) goto Label_3248; // 0xca7 JumpB
	var_173_bool = 0; var_174_object = Obj(); // 0xca8 PushV
	var_174_object = var_132_object; // 0xca9 Mov
	func_3323(var_174_object); // 0xcaa NEW_2
	var_208_bool = var_173_bool == 0; // 0xcac Not
	if(var_208_bool == 0) goto Label_3248; // 0xcad JumpB
	var_131_bool = 0; // 0xcae MovB
	return 4; // 0xcaf Return
	
Label_3248:
	var_209_int = 2; // 0xcb0 PushI
	irand(var_139_int, var_209_int); // 0xcb1 Func
	var_210_int = var_139_int; // 0xcb3 Push
	if(var_210_int == 0) goto Label_3261; // 0xcb4 JumpB
	var_211_string = "voice_common"; // 0xcb5 PushS
	var_212_int = 1; // 0xcb6 PushI
	var_213_int = var_138_int + var_212_int; // 0xcb7 Add
	var_214_int = 3; // 0xcb8 PushI
	var_215_int = var_213_int / var_214_int; // 0xcb9 Mod
	SetVariable(var_211_string, var_215_int); // 0xcba Func
	goto Label_3265; // 0xcbc Jump
	
Label_3265:
	goto Label_3284; // 0xcc1 Jump
	
Label_3284:
	var_131_bool = 1; // 0xcd4 MovB
	return 4; // 0xcd5 Return
	
Label_3261:
	var_216_string = "voice_common"; // 0xcbd PushS
	var_217_int = 0; // 0xcbe PushI
	SetVariable(var_216_string, var_217_int); // 0xcbf Func
	
Label_3266:
	var_218_bool = 0; var_219_object = Obj(); // 0xcc2 PushV
	var_219_object = var_132_object; // 0xcc3 Mov
	func_3323(var_219_object); // 0xcc4 NEW_2
	var_220_bool = var_218_bool == 0; // 0xcc6 Not
	if(var_220_bool == 0) goto Label_3280; // 0xcc7 JumpB
	var_221_bool = 0; var_222_object = Obj(); // 0xcc8 PushV
	var_222_object = var_132_object; // 0xcc9 Mov
	func_3286(var_222_object); // 0xcca NEW_2
	var_223_bool = var_221_bool == 0; // 0xccc Not
	if(var_223_bool == 0) goto Label_3280; // 0xccd JumpB
	var_131_bool = 0; // 0xcce MovB
	return 4; // 0xccf Return
	
Label_3280:
	var_224_string = "voice_common"; // 0xcd0 PushS
	var_225_int = 1; // 0xcd1 PushI
	SetVariable(var_224_string, var_225_int); // 0xcd2 Func
}


func_1693(var_2_object, var_537_string)
{
	var_538_bool = 0; // 0x69e PushV
	func_3510(var_538_bool); // 0x69f NEW_2
	var_539_bool = var_538_bool == 0; // 0x6a1 Not
	if(var_539_bool == 0) goto Label_1700; // 0x6a2 JumpB
	return 0; // 0x6a3 Return
	
Label_1700:
	var_540_bool = var_537_string == var_2_object; // 0x6a4 Eq
	if(var_540_bool == 0) goto Label_1703; // 0x6a5 JumpB
	return 0; // 0x6a6 Return
	
Label_1703:
	var_541_string = ""; var_542_bool = 0; // 0x6a7 PushV
	var_541_string = var_537_string; // 0x6a8 Mov
	var_543_string = ""; // 0x6a9 PushS
	var_544_bool = var_537_string == var_543_string; // 0x6aa Eq
	if(var_544_bool == 0) goto Label_1710; // 0x6ab JumpB
	var_542_bool = 0; // 0x6ac MovB
	goto Label_1711; // 0x6ad Jump
	
Label_1711:
	func_3382(var_541_string, var_542_bool); // 0x6af NEW_2
	var_2_object = var_537_string; // 0x6b1 TMov
	return 0; // 0x6b2 Return
	
Label_1710:
	var_542_bool = 1; // 0x6ae MovB
}


func_3485(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0; // 0xd9d PushV
	var_57_int = 0; // 0xd9e MovI
	
Label_3487:
	var_59_string = "all"; // 0xd9f PushS
	var_60_string = ""; var_61_int = 0; // 0xda0 PushV
	var_61_int = var_57_int; // 0xda1 Mov
	func_3478(var_60_string, var_61_int); // 0xda2 NEW_2
	HasAnimation(var_58_bool, var_59_string, var_60_string); // 0xda4 Func
	var_65_bool = var_58_bool == 0; // 0xda6 Not
	if(var_65_bool == 0) goto Label_3497; // 0xda7 JumpB
	goto Label_3500; // 0xda8 Jump
	
Label_3500:
	var_54_int = var_57_int; // 0xdac Mov
	return 4; // 0xdad Return
	
Label_3497:
	var_66_int = 1; // 0xda9 PushI
	var_57_int = var_57_int + var_66_int; // 0xdaa Add2
	goto Label_3487; // 0xdab Jump
}


func_2472(var_0_object, var_1_object, var_2_object, var_3_string, var_676_object, var_677_object)
{
	var_0_object = var_677_object; // 0x9a9 TMov
	var_1_object = var_676_object; // 0x9aa TMov
	var_3_string = 0; // 0x9ab TMovB
	var_682_int = 1; // 0x9ac PushI
	if(var_682_int == 0) goto Label_2505; // 0x9ad JumpB
	var_683_string = ""; // 0x9ae PushV
	var_683_string = "Neutral"; // 0x9af MovS
	func_2535(var_677_object, var_683_string); // 0x9b0 NEW_2
	var_691_int = 535284; // 0x9b2 PushI
	SetMessage(var_691_int); // 0x9b3 TObjFunc
	ClearReplies(); // 0x9b5 TObjFunc
	var_692_int = 535285; // 0x9b7 PushI
	var_693_int = 36962; // 0x9b8 PushI
	var_694_int = 36961; // 0x9b9 PushI
	AddReply(var_692_int, var_693_int, var_694_int); // 0x9ba TObjFunc
	var_695_int = 535292; // 0x9bc PushI
	var_696_int = -1; // 0x9bd PushI
	var_697_int = 36968; // 0x9be PushI
	AddReply(var_695_int, var_696_int, var_697_int); // 0x9bf TObjFunc
	var_698_int = 535293; // 0x9c1 PushI
	var_699_int = -1; // 0x9c2 PushI
	var_700_int = 36969; // 0x9c3 PushI
	AddReply(var_698_int, var_699_int, var_700_int); // 0x9c4 TObjFunc
	goto Label_2505; // 0x9c6 Jump
	
Label_2505:
	var_701_bool = 0; // 0x9c9 PushV
	func_3510(var_701_bool); // 0x9ca NEW_2
	if(var_701_bool == 0) goto Label_2520; // 0x9cc JumpB
	
Label_2509:
	lshWaitForAnimEnd(); // 0x9cd Func
	var_702_string = var_3_string; // 0x9cf PushT
	if(var_702_string == 0) goto Label_2514; // 0x9d0 JumpB
	goto Label_2519; // 0x9d1 Jump
	
Label_2519:
	goto Label_2534; // 0x9d7 Jump
	
Label_2534:
	return 0; // 0x9e6 Return
	
Label_2514:
	var_703_string = ""; // 0x9d2 PushV
	var_703_string = var_2_object; // 0x9d3 MovT
	func_3366(var_703_string); // 0x9d4 NEW_2
	goto Label_2509; // 0x9d6 Jump
	
Label_2520:
	var_704_string = "all"; // 0x9d8 PushS
	var_705_string = "idle"; // 0x9d9 PushS
	PlayAnimation(var_704_string, var_705_string); // 0x9da Func
	
Label_2524:
	WaitForAnimEnd(); // 0x9dc Func
	var_706_string = var_3_string; // 0x9de PushT
	if(var_706_string == 0) goto Label_2529; // 0x9df JumpB
	goto Label_2534; // 0x9e0 Jump
	
Label_2529:
	var_707_string = "all"; // 0x9e1 PushS
	var_708_string = "idle"; // 0x9e2 PushS
	PlayAnimation(var_707_string, var_708_string); // 0x9e3 Func
	goto Label_2524; // 0x9e5 Jump
}


func_2731(var_0_object, var_1_object, var_2_object, var_3_string, var_735_object, var_736_object)
{
	var_0_object = var_736_object; // 0xaac TMov
	var_1_object = var_735_object; // 0xaad TMov
	var_3_string = 0; // 0xaae TMovB
	var_741_int = 1; // 0xaaf PushI
	if(var_741_int == 0) goto Label_2759; // 0xab0 JumpB
	var_742_string = ""; // 0xab1 PushV
	var_742_string = "Neutral"; // 0xab2 MovS
	func_2789(var_736_object, var_742_string); // 0xab3 NEW_2
	var_750_int = 540539; // 0xab5 PushI
	SetMessage(var_750_int); // 0xab6 TObjFunc
	ClearReplies(); // 0xab8 TObjFunc
	var_751_int = 540540; // 0xaba PushI
	var_752_int = -1; // 0xabb PushI
	var_753_int = 42549; // 0xabc PushI
	AddReply(var_751_int, var_752_int, var_753_int); // 0xabd TObjFunc
	var_754_int = 540799; // 0xabf PushI
	var_755_int = -1; // 0xac0 PushI
	var_756_int = 42848; // 0xac1 PushI
	AddReply(var_754_int, var_755_int, var_756_int); // 0xac2 TObjFunc
	goto Label_2759; // 0xac4 Jump
	
Label_2759:
	var_757_bool = 0; // 0xac7 PushV
	func_3510(var_757_bool); // 0xac8 NEW_2
	if(var_757_bool == 0) goto Label_2774; // 0xaca JumpB
	
Label_2763:
	lshWaitForAnimEnd(); // 0xacb Func
	var_758_string = var_3_string; // 0xacd PushT
	if(var_758_string == 0) goto Label_2768; // 0xace JumpB
	goto Label_2773; // 0xacf Jump
	
Label_2773:
	goto Label_2788; // 0xad5 Jump
	
Label_2788:
	return 0; // 0xae4 Return
	
Label_2768:
	var_759_string = ""; // 0xad0 PushV
	var_759_string = var_2_object; // 0xad1 MovT
	func_3366(var_759_string); // 0xad2 NEW_2
	goto Label_2763; // 0xad4 Jump
	
Label_2774:
	var_760_string = "all"; // 0xad6 PushS
	var_761_string = "idle"; // 0xad7 PushS
	PlayAnimation(var_760_string, var_761_string); // 0xad8 Func
	
Label_2778:
	WaitForAnimEnd(); // 0xada Func
	var_762_string = var_3_string; // 0xadc PushT
	if(var_762_string == 0) goto Label_2783; // 0xadd JumpB
	goto Label_2788; // 0xade Jump
	
Label_2783:
	var_763_string = "all"; // 0xadf PushS
	var_764_string = "idle"; // 0xae0 PushS
	PlayAnimation(var_763_string, var_764_string); // 0xae1 Func
	goto Label_2778; // 0xae3 Jump
}


func_1964(var_0_object, var_572_int, var_573_object)
{
	var_575_object = Obj(); var_576_bool = 0; var_577_int = 0; var_578_bool = 0; var_579_object = Obj(); var_580_bool = 0; var_581_int = 0; var_582_bool = 0; // 0x7ac PushV
	var_0_object = var_573_object; // 0x7ad TMov
	var_583_bool = 0; var_584_object = Obj(); var_585_float = 0; // 0x7ae PushV
	var_584_object = var_573_object; // 0x7af Mov
	var_585_float = 70.0; // 0x7b0 MovF
	func_3141(var_584_object, var_585_float); // 0x7b1 NEW_2
	var_586_bool = var_583_bool == 0; // 0x7b3 Not
	if(var_586_bool == 0) goto Label_1975; // 0x7b4 JumpB
	var_572_int = -2; // 0x7b5 MovI
	return 8; // 0x7b6 Return
	
Label_1975:
	CreateDialog(var_579_object); // 0x7b7 Func
	var_587_int = 0; // 0x7b9 PushV
	func_3504(var_587_int); // 0x7ba NEW_2
	SetNPCName(var_587_int); // 0x7bc ObjFunc
	var_588_int = 0; // 0x7be PushV
	func_3502(var_588_int); // 0x7bf NEW_2
	SetNPCDescription(var_588_int); // 0x7c1 ObjFunc
	var_589_string = ""; // 0x7c3 PushV
	func_3506(var_589_string); // 0x7c4 NEW_2
	SetPhoto(var_589_string); // 0x7c6 ObjFunc
	var_590_string = ""; // 0x7c8 PushV
	func_3508(var_590_string); // 0x7c9 NEW_2
	SetPhoto2(var_590_string); // 0x7cb ObjFunc
	var_591_int = 0; // 0x7cd PushV
	func_3974(var_591_int); // 0x7ce NEW_2
	SetPlayerName(var_591_int); // 0x7d0 ObjFunc
	var_581_int = -1; // 0x7d2 MovI
	IsOverrideActive(var_580_bool); // 0x7d3 Func
	var_592_bool = var_580_bool; // 0x7d5 Push
	if(var_592_bool == 0) goto Label_2009; // 0x7d6 JumpB
	var_572_int = -2; // 0x7d7 MovI
	return 8; // 0x7d8 Return
	
Label_2009:
	DoDialog(var_579_object); // 0x7d9 Func
	var_593_bool = 0; var_594_object = Obj(); // 0x7db PushV
	var_595_object = Obj(); // 0x7dc PushV
	func_3419(var_595_object); // 0x7dd NEW_2
	var_594_object = var_595_object; // 0x7de Mov
	func_3228(var_593_bool, var_594_object); // 0x7e0 NEW_2
	var_596_object = Obj(); var_597_object = Obj(); // 0x7e2 PushV
	var_596_object = var_573_object; // 0x7e3 Mov
	var_597_object = var_579_object; // 0x7e4 Mov
	TaskCall(9); // 0x7e5 TaskCall
	func_2045(var_598_object, var_599_object, var_600_string, var_601_bool, var_596_object, var_597_object); // 0x7e6 NEW_2
	TaskReturn(); // 0x7e7 TaskReturn
	IsDialogEnd(var_582_bool); // 0x7e9 ObjFunc
	
Label_2027:
	var_648_bool = var_582_bool == 0; // 0x7eb Not
	if(var_648_bool == 0) goto Label_2034; // 0x7ec JumpB
	sync(); // 0x7ed Func
	IsDialogEnd(var_582_bool); // 0x7ef ObjFunc
	goto Label_2027; // 0x7f1 Jump
	
Label_2034:
	var_649_object = Obj(); // 0x7f2 PushV
	var_649_object = var_573_object; // 0x7f3 Mov
	func_3210(); // 0x7f4 NEW_2
	StopDialog(var_579_object); // 0x7f6 Func
	GetReturnValue(var_581_int); // 0x7f8 ObjFunc
	var_572_int = var_581_int; // 0x7fa Mov
	return 8; // 0x7fb Return
}


func_3502(var_119_int)
{
	var_119_int = 515542; // 0xdae MovI
	return 0; // 0xdaf Return
}


func_1455(var_2_object, var_233_string)
{
	var_234_bool = 0; // 0x5b0 PushV
	func_3510(var_234_bool); // 0x5b1 NEW_2
	var_235_bool = var_234_bool == 0; // 0x5b3 Not
	if(var_235_bool == 0) goto Label_1462; // 0x5b4 JumpB
	return 0; // 0x5b5 Return
	
Label_1462:
	var_236_bool = var_233_string == var_2_object; // 0x5b6 Eq
	if(var_236_bool == 0) goto Label_1465; // 0x5b7 JumpB
	return 0; // 0x5b8 Return
	
Label_1465:
	var_237_string = ""; var_238_bool = 0; // 0x5b9 PushV
	var_237_string = var_233_string; // 0x5ba Mov
	var_239_string = ""; // 0x5bb PushS
	var_240_bool = var_233_string == var_239_string; // 0x5bc Eq
	if(var_240_bool == 0) goto Label_1472; // 0x5bd JumpB
	var_238_bool = 0; // 0x5be MovB
	goto Label_1473; // 0x5bf Jump
	
Label_1473:
	func_3382(var_237_string, var_238_bool); // 0x5c1 NEW_2
	var_2_object = var_233_string; // 0x5c3 TMov
	return 0; // 0x5c4 Return
	
Label_1472:
	var_238_bool = 1; // 0x5c0 MovB
}


func_3504(var_118_int)
{
	var_118_int = 502867; // 0xdb0 MovI
	return 0; // 0xdb1 Return
}


func_3506(var_120_string)
{
	var_120_string = "ui/NPC_Laska.png"; // 0xdb2 MovS
	return 0; // 0xdb3 Return
}


func_3508(var_121_string)
{
	var_121_string = "ui/NPC_Laska_b.png"; // 0xdb4 MovS
	return 0; // 0xdb5 Return
}


func_3510(var_113_bool)
{
	var_113_bool = 1; // 0xdb6 MovB
	return 0; // 0xdb7 Return
}


func_3512()
{
	var_93_object = Obj(); var_94_string = ""; var_95_float = 0; // 0xdb9 PushV
	var_96_object = Obj(); // 0xdba PushV
	func_3924(var_96_object); // 0xdbb NEW_2
	var_93_object = var_96_object; // 0xdbc Mov
	var_94_string = "pt_map_burah_home"; // 0xdbe MovS
	var_95_float = 2; // 0xdbf MovI
	func_3941(var_93_object, var_94_string, var_95_float); // 0xdc0 NEW_2
	var_116_object = Obj(); // 0xdc2 PushV
	func_3924(var_116_object); // 0xdc3 NEW_2
	ShowMap(var_116_object); // 0xdc5 ObjFunc
	return 0; // 0xdc7 Return
}


func_3769(var_468_bool)
{
	var_470_int = 0; var_471_string = ""; // 0xeba PushV
	var_471_string = "ook2Laska1"; // 0xebb MovS
	func_3435(var_470_int, var_471_string); // 0xebc NEW_2
	var_472_int = 0; // 0xebe PushI
	var_473_bool = var_470_int == var_472_int; // 0xebf Eq
	if(var_473_bool == 0) goto Label_3779; // 0xec0 JumpB
	var_468_bool = 1; // 0xec1 MovB
	return 0; // 0xec2 Return
	
Label_3779:
	var_468_bool = 0; // 0xec3 MovB
	return 0; // 0xec4 Return
}


func_193(var_2_object, var_340_string)
{
	var_341_bool = 0; // 0xc2 PushV
	func_3510(var_341_bool); // 0xc3 NEW_2
	var_342_bool = var_341_bool == 0; // 0xc5 Not
	if(var_342_bool == 0) goto Label_200; // 0xc6 JumpB
	return 0; // 0xc7 Return
	
Label_200:
	var_343_bool = var_340_string == var_2_object; // 0xc8 Eq
	if(var_343_bool == 0) goto Label_203; // 0xc9 JumpB
	return 0; // 0xca Return
	
Label_203:
	var_344_string = ""; var_345_bool = 0; // 0xcb PushV
	var_344_string = var_340_string; // 0xcc Mov
	var_346_string = ""; // 0xcd PushS
	var_347_bool = var_340_string == var_346_string; // 0xce Eq
	if(var_347_bool == 0) goto Label_210; // 0xcf JumpB
	var_345_bool = 0; // 0xd0 MovB
	goto Label_211; // 0xd1 Jump
	
Label_211:
	func_3382(var_344_string, var_345_bool); // 0xd3 NEW_2
	var_2_object = var_340_string; // 0xd5 TMov
	return 0; // 0xd6 Return
	
Label_210:
	var_345_bool = 1; // 0xd2 MovB
}


func_3781(var_523_bool)
{
	var_525_int = 0; var_526_string = ""; // 0xec6 PushV
	var_526_string = "ook5Laska1"; // 0xec7 MovS
	func_3435(var_525_int, var_526_string); // 0xec8 NEW_2
	var_527_int = 0; // 0xeca PushI
	var_528_bool = var_525_int == var_527_int; // 0xecb Eq
	if(var_528_bool == 0) goto Label_3791; // 0xecc JumpB
	var_523_bool = 1; // 0xecd MovB
	return 0; // 0xece Return
	
Label_3791:
	var_523_bool = 0; // 0xecf MovB
	return 0; // 0xed0 Return
}


func_3528()
{
	var_338_string = "ook1Laska1"; // 0xdc9 PushS
	var_339_int = 1; // 0xdca PushI
	SetVariable(var_338_string, var_339_int); // 0xdcb Func
	return 0; // 0xdcd Return
}


func_3534()
{
	var_44_string = "ook1Laska2"; // 0xdcf PushS
	var_45_int = 1; // 0xdd0 PushI
	SetVariable(var_44_string, var_45_int); // 0xdd1 Func
	return 0; // 0xdd3 Return
}


func_3793(var_603_bool)
{
	var_605_int = 0; var_606_string = ""; // 0xed2 PushV
	var_606_string = "ook6Laska1"; // 0xed3 MovS
	func_3435(var_605_int, var_606_string); // 0xed4 NEW_2
	var_607_int = 0; // 0xed6 PushI
	var_608_bool = var_605_int == var_607_int; // 0xed7 Eq
	if(var_608_bool == 0) goto Label_3803; // 0xed8 JumpB
	var_603_bool = 1; // 0xed9 MovB
	return 0; // 0xeda Return
	
Label_3803:
	var_603_bool = 0; // 0xedb MovB
	return 0; // 0xedc Return
}


func_3540()
{
	var_50_object = Obj(); var_51_object = Obj(); // 0xdd4 PushV
	var_52_string = "k1q01LaskaGotoBurah"; // 0xdd5 PushS
	var_53_int = 1; // 0xdd6 PushI
	SetVariable(var_52_string, var_53_int); // 0xdd7 Func
	var_54_object = Obj(); // 0xdd9 PushV
	func_3924(var_54_object); // 0xdda NEW_2
	var_51_object = var_54_object; // 0xddb Mov
	var_61_string = "k1q01LaskaGotoBurah"; // 0xddd PushS
	var_62_string = "pt_map_burah_home"; // 0xdde PushS
	var_63_int = 1; // 0xddf PushI
	var_64_int = 524731; // 0xde0 PushI
	var_65_float = 0; // 0xde1 PushV
	func_3458(var_65_float); // 0xde2 NEW_2
	AddMark(var_61_string, var_62_string, var_63_int, var_64_int, var_65_float); // 0xde4 ObjFunc
	func_3805(); // 0xde7 NEW_2
	return 2; // 0xde9 Return
}


func_3286(var_142_bool)
{
	var_144_string = ""; var_145_int = 0; var_146_bool = 0; var_147_int = 0; var_148_string = ""; var_149_string = ""; var_150_int = 0; var_151_bool = 0; var_152_int = 0; var_153_string = ""; // 0xcd6 PushV
	var_149_string = "c"; // 0xcd7 MovS
	var_150_int = 0; // 0xcd8 MovI
	
Label_3289:
	var_154_int = 1; // 0xcd9 PushI
	if(var_154_int == 0) goto Label_3302; // 0xcda JumpB
	var_155_int = 1; // 0xcdb PushI
	var_156_int = var_150_int + var_155_int; // 0xcdc Add
	var_157_int = var_149_string + var_156_int; // 0xcdd Add
	HasProperty(var_157_int, var_151_bool); // 0xcde ObjFunc
	var_158_bool = var_151_bool == 0; // 0xce0 Not
	if(var_158_bool == 0) goto Label_3299; // 0xce1 JumpB
	goto Label_3302; // 0xce2 Jump
	
Label_3302:
	var_159_bool = var_150_int == 0; // 0xce6 Not
	if(var_159_bool == 0) goto Label_3306; // 0xce7 JumpB
	var_142_bool = 0; // 0xce8 MovB
	return 10; // 0xce9 Return
	
Label_3306:
	var_152_int = 0; // 0xcea MovI
	var_160_int = 1; // 0xceb PushI
	var_161_bool = var_150_int > var_160_int; // 0xcec GT
	if(var_161_bool == 0) goto Label_3312; // 0xced JumpB
	irand(var_152_int, var_150_int); // 0xcee Func
	
Label_3312:
	var_162_int = 1; // 0xcf0 PushI
	var_163_int = var_152_int + var_162_int; // 0xcf1 Add
	var_164_int = var_149_string + var_163_int; // 0xcf2 Add
	GetProperty(var_164_int, var_153_string); // 0xcf3 ObjFunc
	var_165_bool = 0; var_166_string = ""; // 0xcf5 PushV
	var_166_string = var_153_string; // 0xcf6 Mov
	func_3397(var_165_bool, var_166_string); // 0xcf7 NEW_2
	var_142_bool = var_165_bool; // 0xcf8 Mov
	return 10; // 0xcfa Return
	
Label_3299:
	var_171_int = 1; // 0xce3 PushI
	var_150_int = var_150_int + var_171_int; // 0xce4 Add2
	goto Label_3289; // 0xce5 Jump
}


func_3033()
{
	var_40_int = 0; var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; // 0xbd9 PushV
	WaitForAnimEnd(); // 0xbda Func
	var_52_bool = 0; // 0xbdc PushV
	func_3136(var_52_bool); // 0xbdd NEW_2
	var_53_bool = var_52_bool == 0; // 0xbdf Not
	if(var_53_bool == 0) goto Label_3042; // 0xbe0 JumpB
	return 12; // 0xbe1 Return
	
Label_3042:
	var_54_int = 0; // 0xbe2 PushV
	func_3485(var_54_int); // 0xbe3 NEW_2
	var_46_int = var_54_int; // 0xbe4 Mov
	var_47_int = 0; // 0xbe6 MovI
	
Label_3047:
	var_67_bool = 0; // 0xbe7 PushV
	var_67_bool = 0; // 0xbe8 MovB
	var_68_int = 5; // 0xbe9 PushI
	var_69_bool = var_47_int < var_68_int; // 0xbea LT
	if(var_69_bool == 0) goto Label_3057; // 0xbeb JumpB
	var_70_bool = 0; // 0xbec PushV
	func_3136(var_70_bool); // 0xbed NEW_2
	if(var_70_bool == 0) goto Label_3057; // 0xbef JumpB
	var_67_bool = 1; // 0xbf0 MovB
	
Label_3057:
	if(var_67_bool == 0) goto Label_3099; // 0xbf1 JumpB
	var_71_bool = var_46_int == 0; // 0xbf2 Not
	if(var_71_bool == 0) goto Label_3067; // 0xbf3 JumpB
	var_72_int = 3; // 0xbf4 PushI
	Sleep(var_72_int, var_48_bool); // 0xbf5 Func
	var_73_bool = var_48_bool == 0; // 0xbf7 Not
	if(var_73_bool == 0) goto Label_3066; // 0xbf8 JumpB
	goto Label_3099; // 0xbf9 Jump
	
Label_3099:
	ResetAAS(); // 0xc1b Func
	return 12; // 0xc1d Return
	
Label_3066:
	goto Label_3088; // 0xbfa Jump
	
Label_3088:
	var_74_bool = 0; // 0xc10 PushV
	func_3102(var_74_bool); // 0xc11 NEW_2
	var_75_bool = var_74_bool == 0; // 0xc13 Not
	if(var_75_bool == 0) goto Label_3094; // 0xc14 JumpB
	goto Label_3099; // 0xc15 Jump
	
Label_3094:
	ResetAAS(); // 0xc16 Func
	var_76_int = 1; // 0xc18 PushI
	var_47_int = var_47_int + var_76_int; // 0xc19 Add2
	goto Label_3047; // 0xc1a Jump
	
Label_3067:
	irand(var_49_int, var_46_int); // 0xbfb Func
	var_77_int = 5; // 0xbfd PushI
	irand(var_50_int, var_77_int); // 0xbfe Func
	var_78_int = 0; // 0xc00 PushI
	var_79_bool = var_50_int != var_78_int; // 0xc01 Neq
	if(var_79_bool == 0) goto Label_3076; // 0xc02 JumpB
	var_49_int = 0; // 0xc03 MovI
	
Label_3076:
	var_80_string = "all"; // 0xc04 PushS
	var_81_string = ""; var_82_int = 0; // 0xc05 PushV
	var_82_int = var_49_int; // 0xc06 Mov
	func_3478(var_81_string, var_82_int); // 0xc07 NEW_2
	PlayAnimation(var_80_string, var_81_string); // 0xc09 Func
	WaitForAnimEnd(var_51_bool); // 0xc0b Func
	var_83_bool = var_51_bool == 0; // 0xc0d Not
	if(var_83_bool == 0) goto Label_3088; // 0xc0e JumpB
	goto Label_3099; // 0xc0f Jump
}


func_3805()
{
	var_68_object = Obj(); var_69_object = Obj(); // 0xedd PushV
	var_70_int = 776; // 0xede PushI
	var_71_int = 1; // 0xedf PushI
	var_72_int = 541530; // 0xee0 PushI
	CreateDiaryEntry(var_69_object, var_70_int, var_71_int, var_72_int); // 0xee1 Func
	var_73_bool = 0; var_74_object = Obj(); var_75_int = 0; // 0xee3 PushV
	var_74_object = var_69_object; // 0xee4 Mov
	var_75_int = 318; // 0xee5 MovI
	func_3896(var_73_bool, var_74_object, var_75_int); // 0xee6 NEW_2
	return 2; // 0xee8 Return
}


func_2789(var_2_object, var_742_string)
{
	var_743_bool = 0; // 0xae6 PushV
	func_3510(var_743_bool); // 0xae7 NEW_2
	var_744_bool = var_743_bool == 0; // 0xae9 Not
	if(var_744_bool == 0) goto Label_2796; // 0xaea JumpB
	return 0; // 0xaeb Return
	
Label_2796:
	var_745_bool = var_742_string == var_2_object; // 0xaec Eq
	if(var_745_bool == 0) goto Label_2799; // 0xaed JumpB
	return 0; // 0xaee Return
	
Label_2799:
	var_746_string = ""; var_747_bool = 0; // 0xaef PushV
	var_746_string = var_742_string; // 0xaf0 Mov
	var_748_string = ""; // 0xaf1 PushS
	var_749_bool = var_742_string == var_748_string; // 0xaf2 Eq
	if(var_749_bool == 0) goto Label_2806; // 0xaf3 JumpB
	var_747_bool = 0; // 0xaf4 MovB
	goto Label_2807; // 0xaf5 Jump
	
Label_2807:
	func_3382(var_746_string, var_747_bool); // 0xaf7 NEW_2
	var_2_object = var_742_string; // 0xaf9 TMov
	return 0; // 0xafa Return
	
Label_2806:
	var_747_bool = 1; // 0xaf6 MovB
}


func_2535(var_2_object, var_683_string)
{
	var_684_bool = 0; // 0x9e8 PushV
	func_3510(var_684_bool); // 0x9e9 NEW_2
	var_685_bool = var_684_bool == 0; // 0x9eb Not
	if(var_685_bool == 0) goto Label_2542; // 0x9ec JumpB
	return 0; // 0x9ed Return
	
Label_2542:
	var_686_bool = var_683_string == var_2_object; // 0x9ee Eq
	if(var_686_bool == 0) goto Label_2545; // 0x9ef JumpB
	return 0; // 0x9f0 Return
	
Label_2545:
	var_687_string = ""; var_688_bool = 0; // 0x9f1 PushV
	var_687_string = var_683_string; // 0x9f2 Mov
	var_689_string = ""; // 0x9f3 PushS
	var_690_bool = var_683_string == var_689_string; // 0x9f4 Eq
	if(var_690_bool == 0) goto Label_2552; // 0x9f5 JumpB
	var_688_bool = 0; // 0x9f6 MovB
	goto Label_2553; // 0x9f7 Jump
	
Label_2553:
	func_3382(var_687_string, var_688_bool); // 0x9f9 NEW_2
	var_2_object = var_683_string; // 0x9fb TMov
	return 0; // 0x9fc Return
	
Label_2552:
	var_688_bool = 1; // 0x9f8 MovB
}


func_746(var_0_object, var_1_object, var_2_object, var_3_string, var_408_object, var_409_object)
{
	var_0_object = var_409_object; // 0x2eb TMov
	var_1_object = var_408_object; // 0x2ec TMov
	var_3_string = 0; // 0x2ed TMovB
	var_414_int = 1; // 0x2ee PushI
	if(var_414_int == 0) goto Label_835; // 0x2ef JumpB
	var_415_string = ""; // 0x2f0 PushV
	var_415_string = "Neutral"; // 0x2f1 MovS
	func_865(var_409_object, var_415_string); // 0x2f2 NEW_2
	var_423_int = 525297; // 0x2f4 PushI
	SetMessage(var_423_int); // 0x2f5 TObjFunc
	ClearReplies(); // 0x2f7 TObjFunc
	var_424_bool = 0; // 0x2f9 PushV
	var_424_bool = 1; // 0x2fa MovB
	var_425_bool = 0; // 0x2fb PushV
	var_425_bool = 0; // 0x2fc MovB
	var_426_bool = 0; var_427_object = Obj(); // 0x2fd PushV
	var_427_object = var_1_object; // 0x2fe MovT
	func_3738(var_426_bool, var_427_object); // 0x2ff NEW_2
	if(var_426_bool == 0) goto Label_776; // 0x301 JumpB
	var_443_bool = 0; var_444_object = Obj(); // 0x302 PushV
	var_444_object = var_1_object; // 0x303 MovT
	func_3714(var_444_object); // 0x304 NEW_2
	if(var_443_bool == 0) goto Label_776; // 0x306 JumpB
	var_425_bool = 1; // 0x307 MovB
	
Label_776:
	if(var_425_bool == 0) goto Label_792; // 0x308 JumpB
	var_449_bool = 0; // 0x309 PushV
	var_449_bool = 0; // 0x30a MovB
	var_450_bool = 0; var_451_object = Obj(); // 0x30b PushV
	var_451_object = var_1_object; // 0x30c MovT
	func_3726(var_451_object); // 0x30d NEW_2
	if(var_450_bool == 0) goto Label_790; // 0x30f JumpB
	var_456_bool = 0; var_457_object = Obj(); // 0x310 PushV
	var_457_object = var_1_object; // 0x311 MovT
	func_3738(var_456_bool, var_457_object); // 0x312 NEW_2
	if(var_456_bool == 0) goto Label_790; // 0x314 JumpB
	var_449_bool = 1; // 0x315 MovB
	
Label_790:
	if(var_449_bool == 0) goto Label_792; // 0x316 JumpB
	var_424_bool = 0; // 0x317 MovB
	
Label_792:
	if(var_424_bool == 0) goto Label_798; // 0x318 JumpB
	var_458_int = 525298; // 0x319 PushI
	var_459_int = 26667; // 0x31a PushI
	var_460_int = 26666; // 0x31b PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x31c TObjFunc
	
Label_798:
	var_461_bool = 0; // 0x31e PushV
	var_461_bool = 0; // 0x31f MovB
	var_462_bool = 0; // 0x320 PushV
	var_462_bool = 0; // 0x321 MovB
	var_463_bool = 0; var_464_object = Obj(); // 0x322 PushV
	var_464_object = var_1_object; // 0x323 MovT
	func_3714(var_464_object); // 0x324 NEW_2
	if(var_463_bool == 0) goto Label_814; // 0x326 JumpB
	var_465_bool = 0; var_466_object = Obj(); // 0x327 PushV
	var_466_object = var_1_object; // 0x328 MovT
	func_3738(var_465_bool, var_466_object); // 0x329 NEW_2
	var_467_bool = var_465_bool == 0; // 0x32b Not
	if(var_467_bool == 0) goto Label_814; // 0x32c JumpB
	var_462_bool = 1; // 0x32d MovB
	
Label_814:
	if(var_462_bool == 0) goto Label_821; // 0x32e JumpB
	var_468_bool = 0; var_469_object = Obj(); // 0x32f PushV
	var_469_object = var_1_object; // 0x330 MovT
	func_3769(var_469_object); // 0x331 NEW_2
	if(var_468_bool == 0) goto Label_821; // 0x333 JumpB
	var_461_bool = 1; // 0x334 MovB
	
Label_821:
	if(var_461_bool == 0) goto Label_827; // 0x335 JumpB
	var_474_int = 525310; // 0x336 PushI
	var_475_int = 26679; // 0x337 PushI
	var_476_int = 26678; // 0x338 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0x339 TObjFunc
	
Label_827:
	var_477_int = 525305; // 0x33b PushI
	var_478_int = -1; // 0x33c PushI
	var_479_int = 26673; // 0x33d PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0x33e TObjFunc
	goto Label_835; // 0x340 Jump
	
Label_835:
	var_480_bool = 0; // 0x343 PushV
	func_3510(var_480_bool); // 0x344 NEW_2
	if(var_480_bool == 0) goto Label_850; // 0x346 JumpB
	
Label_839:
	lshWaitForAnimEnd(); // 0x347 Func
	var_481_string = var_3_string; // 0x349 PushT
	if(var_481_string == 0) goto Label_844; // 0x34a JumpB
	goto Label_849; // 0x34b Jump
	
Label_849:
	goto Label_864; // 0x351 Jump
	
Label_864:
	return 0; // 0x360 Return
	
Label_844:
	var_482_string = ""; // 0x34c PushV
	var_482_string = var_2_object; // 0x34d MovT
	func_3366(var_482_string); // 0x34e NEW_2
	goto Label_839; // 0x350 Jump
	
Label_850:
	var_483_string = "all"; // 0x352 PushS
	var_484_string = "idle"; // 0x353 PushS
	PlayAnimation(var_483_string, var_484_string); // 0x354 Func
	
Label_854:
	WaitForAnimEnd(); // 0x356 Func
	var_485_string = var_3_string; // 0x358 PushT
	if(var_485_string == 0) goto Label_859; // 0x359 JumpB
	goto Label_864; // 0x35a Jump
	
Label_859:
	var_486_string = "all"; // 0x35b PushS
	var_487_string = "idle"; // 0x35c PushS
	PlayAnimation(var_486_string, var_487_string); // 0x35d Func
	goto Label_854; // 0x35f Jump
}


func_3818()
{
	var_48_object = Obj(); var_49_object = Obj(); // 0xeea PushV
	var_50_int = 473; // 0xeeb PushI
	var_51_int = 2; // 0xeec PushI
	var_52_int = 527789; // 0xeed PushI
	CreateDiaryEntry(var_49_object, var_50_int, var_51_int, var_52_int); // 0xeee Func
	var_53_bool = 0; var_54_object = Obj(); var_55_int = 0; // 0xef0 PushV
	var_54_object = var_49_object; // 0xef1 Mov
	var_55_int = 470; // 0xef2 MovI
	func_3896(var_53_bool, var_54_object, var_55_int); // 0xef3 NEW_2
	return 2; // 0xef5 Return
}


func_3563()
{
	var_44_int = 0; var_45_int = 0; // 0xdeb PushV
	var_46_string = "k2q02"; // 0xdec PushS
	var_47_int = 3; // 0xded PushI
	SetVariable(var_46_string, var_47_int); // 0xdee Func
	func_3818(); // 0xdf1 NEW_2
	var_71_string = "milk"; // 0xdf3 PushS
	var_72_int = 1; // 0xdf4 PushI
	RemoveItemByType(var_45_int, var_71_string, var_72_int); // 0xdf5 ObjFunc
	var_73_string = "bread"; // 0xdf7 PushS
	var_74_int = 1; // 0xdf8 PushI
	RemoveItemByType(var_45_int, var_73_string, var_74_int); // 0xdf9 ObjFunc
	var_75_string = "flower"; // 0xdfb PushS
	var_76_int = 1; // 0xdfc PushI
	RemoveItemByType(var_45_int, var_75_string, var_76_int); // 0xdfd ObjFunc
	return 2; // 0xdff Return
}


func_1519(var_0_object, var_492_int, var_493_object)
{
	var_495_object = Obj(); var_496_bool = 0; var_497_int = 0; var_498_bool = 0; var_499_object = Obj(); var_500_bool = 0; var_501_int = 0; var_502_bool = 0; // 0x5ef PushV
	var_0_object = var_493_object; // 0x5f0 TMov
	var_503_bool = 0; var_504_object = Obj(); var_505_float = 0; // 0x5f1 PushV
	var_504_object = var_493_object; // 0x5f2 Mov
	var_505_float = 70.0; // 0x5f3 MovF
	func_3141(var_504_object, var_505_float); // 0x5f4 NEW_2
	var_506_bool = var_503_bool == 0; // 0x5f6 Not
	if(var_506_bool == 0) goto Label_1530; // 0x5f7 JumpB
	var_492_int = -2; // 0x5f8 MovI
	return 8; // 0x5f9 Return
	
Label_1530:
	CreateDialog(var_499_object); // 0x5fa Func
	var_507_int = 0; // 0x5fc PushV
	func_3504(var_507_int); // 0x5fd NEW_2
	SetNPCName(var_507_int); // 0x5ff ObjFunc
	var_508_int = 0; // 0x601 PushV
	func_3502(var_508_int); // 0x602 NEW_2
	SetNPCDescription(var_508_int); // 0x604 ObjFunc
	var_509_string = ""; // 0x606 PushV
	func_3506(var_509_string); // 0x607 NEW_2
	SetPhoto(var_509_string); // 0x609 ObjFunc
	var_510_string = ""; // 0x60b PushV
	func_3508(var_510_string); // 0x60c NEW_2
	SetPhoto2(var_510_string); // 0x60e ObjFunc
	var_511_int = 0; // 0x610 PushV
	func_3974(var_511_int); // 0x611 NEW_2
	SetPlayerName(var_511_int); // 0x613 ObjFunc
	var_501_int = -1; // 0x615 MovI
	IsOverrideActive(var_500_bool); // 0x616 Func
	var_512_bool = var_500_bool; // 0x618 Push
	if(var_512_bool == 0) goto Label_1564; // 0x619 JumpB
	var_492_int = -2; // 0x61a MovI
	return 8; // 0x61b Return
	
Label_1564:
	DoDialog(var_499_object); // 0x61c Func
	var_513_bool = 0; var_514_object = Obj(); // 0x61e PushV
	var_515_object = Obj(); // 0x61f PushV
	func_3419(var_515_object); // 0x620 NEW_2
	var_514_object = var_515_object; // 0x621 Mov
	func_3228(var_513_bool, var_514_object); // 0x623 NEW_2
	var_516_object = Obj(); var_517_object = Obj(); // 0x625 PushV
	var_516_object = var_493_object; // 0x626 Mov
	var_517_object = var_499_object; // 0x627 Mov
	TaskCall(7); // 0x628 TaskCall
	func_1600(var_518_object, var_519_object, var_520_string, var_521_bool, var_516_object, var_517_object); // 0x629 NEW_2
	TaskReturn(); // 0x62a TaskReturn
	IsDialogEnd(var_502_bool); // 0x62c ObjFunc
	
Label_1582:
	var_568_bool = var_502_bool == 0; // 0x62e Not
	if(var_568_bool == 0) goto Label_1589; // 0x62f JumpB
	sync(); // 0x630 Func
	IsDialogEnd(var_502_bool); // 0x632 ObjFunc
	goto Label_1582; // 0x634 Jump
	
Label_1589:
	var_569_object = Obj(); // 0x635 PushV
	var_569_object = var_493_object; // 0x636 Mov
	func_3210(); // 0x637 NEW_2
	StopDialog(var_499_object); // 0x639 Func
	GetReturnValue(var_501_int); // 0x63b ObjFunc
	var_492_int = var_501_int; // 0x63d Mov
	return 8; // 0x63e Return
}


func_3831()
{
	var_60_object = Obj(); var_61_object = Obj(); // 0xef7 PushV
	var_62_int = 405; // 0xef8 PushI
	var_63_int = 2; // 0xef9 PushI
	var_64_int = 526023; // 0xefa PushI
	CreateDiaryEntry(var_61_object, var_62_int, var_63_int, var_64_int); // 0xefb Func
	var_65_bool = 0; var_66_object = Obj(); var_67_int = 0; // 0xefd PushV
	var_66_object = var_61_object; // 0xefe Mov
	var_67_int = -1; // 0xeff MovI
	func_3896(var_65_bool, var_66_object, var_67_int); // 0xf00 NEW_2
	return 2; // 0xf02 Return
}


func_3323(var_173_bool)
{
	var_175_string = ""; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_string = ""; var_180_string = ""; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_string = ""; // 0xcfb PushV
	var_185_string = "d"; // 0xcfc PushS
	var_186_int = 0; // 0xcfd PushV
	func_3463(var_186_int); // 0xcfe NEW_2
	var_192_int = var_185_string + var_186_int; // 0xd00 Add
	var_193_string = "m"; // 0xd01 PushS
	var_180_string = var_192_int + var_193_string; // 0xd02 Add2
	var_181_int = 0; // 0xd03 MovI
	
Label_3332:
	var_194_int = 1; // 0xd04 PushI
	if(var_194_int == 0) goto Label_3345; // 0xd05 JumpB
	var_195_int = 1; // 0xd06 PushI
	var_196_int = var_181_int + var_195_int; // 0xd07 Add
	var_197_int = var_180_string + var_196_int; // 0xd08 Add
	HasProperty(var_197_int, var_182_bool); // 0xd09 ObjFunc
	var_198_bool = var_182_bool == 0; // 0xd0b Not
	if(var_198_bool == 0) goto Label_3342; // 0xd0c JumpB
	goto Label_3345; // 0xd0d Jump
	
Label_3345:
	var_199_bool = var_181_int == 0; // 0xd11 Not
	if(var_199_bool == 0) goto Label_3349; // 0xd12 JumpB
	var_173_bool = 0; // 0xd13 MovB
	return 10; // 0xd14 Return
	
Label_3349:
	var_183_int = 0; // 0xd15 MovI
	var_200_int = 1; // 0xd16 PushI
	var_201_bool = var_181_int > var_200_int; // 0xd17 GT
	if(var_201_bool == 0) goto Label_3355; // 0xd18 JumpB
	irand(var_183_int, var_181_int); // 0xd19 Func
	
Label_3355:
	var_202_int = 1; // 0xd1b PushI
	var_203_int = var_183_int + var_202_int; // 0xd1c Add
	var_204_int = var_180_string + var_203_int; // 0xd1d Add
	GetProperty(var_204_int, var_184_string); // 0xd1e ObjFunc
	var_205_bool = 0; var_206_string = ""; // 0xd20 PushV
	var_206_string = var_184_string; // 0xd21 Mov
	func_3397(var_205_bool, var_206_string); // 0xd22 NEW_2
	var_173_bool = var_205_bool; // 0xd23 Mov
	return 10; // 0xd25 Return
	
Label_3342:
	var_207_int = 1; // 0xd0e PushI
	var_181_int = var_181_int + var_207_int; // 0xd0f Add2
	goto Label_3332; // 0xd10 Jump
}


func_2045(var_0_object, var_1_object, var_2_object, var_3_string, var_596_object, var_597_object)
{
	var_0_object = var_597_object; // 0x7fe TMov
	var_1_object = var_596_object; // 0x7ff TMov
	var_3_string = 0; // 0x800 TMovB
	var_602_int = 1; // 0x801 PushI
	if(var_602_int == 0) goto Label_2108; // 0x802 JumpB
	var_603_bool = 0; var_604_object = Obj(); // 0x803 PushV
	var_604_object = var_1_object; // 0x804 MovT
	func_3793(var_604_object); // 0x805 NEW_2
	if(var_603_bool == 0) goto Label_2086; // 0x807 JumpB
	var_609_object = Obj(); var_610_object = Obj(); // 0x808 PushV
	var_609_object = var_1_object; // 0x809 MovT
	var_610_object = var_0_object; // 0x80a MovT
	func_3628(); // 0x80b NEW_2
	var_613_object = Obj(); var_614_object = Obj(); // 0x80d PushV
	var_613_object = var_1_object; // 0x80e MovT
	var_614_object = var_0_object; // 0x80f MovT
	func_3634(); // 0x810 NEW_2
	var_617_string = ""; // 0x812 PushV
	var_617_string = "Disturbance"; // 0x813 MovS
	func_2138(var_597_object, var_617_string); // 0x814 NEW_2
	var_625_int = 528802; // 0x816 PushI
	SetMessage(var_625_int); // 0x817 TObjFunc
	ClearReplies(); // 0x819 TObjFunc
	var_626_int = 526757; // 0x81b PushI
	var_627_int = 30208; // 0x81c PushI
	var_628_int = 28034; // 0x81d PushI
	AddReply(var_626_int, var_627_int, var_628_int); // 0x81e TObjFunc
	var_629_int = 528803; // 0x820 PushI
	var_630_int = 30208; // 0x821 PushI
	var_631_int = 30216; // 0x822 PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0x823 TObjFunc
	goto Label_2108; // 0x825 Jump
	
Label_2108:
	var_632_bool = 0; // 0x83c PushV
	func_3510(var_632_bool); // 0x83d NEW_2
	if(var_632_bool == 0) goto Label_2123; // 0x83f JumpB
	
Label_2112:
	lshWaitForAnimEnd(); // 0x840 Func
	var_633_string = var_3_string; // 0x842 PushT
	if(var_633_string == 0) goto Label_2117; // 0x843 JumpB
	goto Label_2122; // 0x844 Jump
	
Label_2122:
	goto Label_2137; // 0x84a Jump
	
Label_2137:
	return 0; // 0x859 Return
	
Label_2117:
	var_634_string = ""; // 0x845 PushV
	var_634_string = var_2_object; // 0x846 MovT
	func_3366(var_634_string); // 0x847 NEW_2
	goto Label_2112; // 0x849 Jump
	
Label_2123:
	var_635_string = "all"; // 0x84b PushS
	var_636_string = "idle"; // 0x84c PushS
	PlayAnimation(var_635_string, var_636_string); // 0x84d Func
	
Label_2127:
	WaitForAnimEnd(); // 0x84f Func
	var_637_string = var_3_string; // 0x851 PushT
	if(var_637_string == 0) goto Label_2132; // 0x852 JumpB
	goto Label_2137; // 0x853 Jump
	
Label_2132:
	var_638_string = "all"; // 0x854 PushS
	var_639_string = "idle"; // 0x855 PushS
	PlayAnimation(var_638_string, var_639_string); // 0x856 Func
	goto Label_2127; // 0x858 Jump
	
Label_2086:
	var_640_string = ""; // 0x826 PushV
	var_640_string = "Neutral"; // 0x827 MovS
	func_2138(var_597_object, var_640_string); // 0x828 NEW_2
	var_641_int = 526758; // 0x82a PushI
	SetMessage(var_641_int); // 0x82b TObjFunc
	ClearReplies(); // 0x82d TObjFunc
	var_642_int = 526759; // 0x82f PushI
	var_643_int = -1; // 0x830 PushI
	var_644_int = 28036; // 0x831 PushI
	AddReply(var_642_int, var_643_int, var_644_int); // 0x832 TObjFunc
	var_645_int = 528801; // 0x834 PushI
	var_646_int = -1; // 0x835 PushI
	var_647_int = 30214; // 0x836 PushI
	AddReply(var_645_int, var_646_int, var_647_int); // 0x837 TObjFunc
	goto Label_2108; // 0x839 Jump
}


