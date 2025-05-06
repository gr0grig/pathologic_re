task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xc0 PushI
	if(var_58_int == 0) goto Label_870; // 0xc1 JumpB
	func_7468(); // 0xc3 NEW_2
	var_60_int = 33071; // 0xc5 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xc6 Eq
	if(var_61_bool == 0) goto Label_210; // 0xc7 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xc8 PushV
	var_62_object = var_1_object; // 0xc9 MovT
	var_63_object = var_0_object; // 0xca MovT
	func_8187(); // 0xcb NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0xcd PushV
	var_105_object = var_1_object; // 0xce MovT
	var_106_object = var_0_object; // 0xcf MovT
	func_7905(); // 0xd0 NEW_2
	
Label_210:
	var_131_int = 34431; // 0xd2 PushI
	var_132_bool = var_57_cvector == var_131_int; // 0xd3 Eq
	if(var_132_bool == 0) goto Label_223; // 0xd4 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0xd5 PushV
	var_133_object = var_1_object; // 0xd6 MovT
	var_134_object = var_0_object; // 0xd7 MovT
	func_8187(); // 0xd8 NEW_2
	var_135_object = Obj(); var_136_object = Obj(); // 0xda PushV
	var_135_object = var_1_object; // 0xdb MovT
	var_136_object = var_0_object; // 0xdc MovT
	func_7905(); // 0xdd NEW_2
	
Label_223:
	var_137_int = 33073; // 0xdf PushI
	var_138_bool = var_57_cvector == var_137_int; // 0xe0 Eq
	if(var_138_bool == 0) goto Label_231; // 0xe1 JumpB
	var_139_object = Obj(); var_140_object = Obj(); // 0xe2 PushV
	var_139_object = var_1_object; // 0xe3 MovT
	var_140_object = var_0_object; // 0xe4 MovT
	func_7739(); // 0xe5 NEW_2
	
Label_231:
	var_143_int = 33068; // 0xe7 PushI
	var_144_bool = var_56_bool == var_143_int; // 0xe8 Eq
	if(var_144_bool == 0) goto Label_284; // 0xe9 JumpB
	var_145_string = ""; // 0xea PushV
	var_145_string = "Neutral"; // 0xeb MovS
	func_169(var_57_cvector, var_145_string); // 0xec NEW_2
	var_162_int = 531684; // 0xee PushI
	SetMessage(var_162_int); // 0xef TObjFunc
	ClearReplies(); // 0xf1 TObjFunc
	var_163_bool = 0; var_164_object = Obj(); // 0xf3 PushV
	var_164_object = var_1_object; // 0xf4 MovT
	func_8612(var_164_object); // 0xf5 NEW_2
	if(var_163_bool == 0) goto Label_253; // 0xf7 JumpB
	var_171_int = 531685; // 0xf8 PushI
	var_172_int = 34364; // 0xf9 PushI
	var_173_int = 33069; // 0xfa PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0xfb TObjFunc
	
Label_253:
	var_174_bool = 0; // 0xfd PushV
	var_174_bool = 0; // 0xfe MovB
	var_175_bool = 0; var_176_object = Obj(); // 0xff PushV
	var_176_object = var_1_object; // 0x100 MovT
	func_8343(var_176_object); // 0x101 NEW_2
	var_181_bool = var_175_bool == 0; // 0x103 Not
	if(var_181_bool == 0) goto Label_267; // 0x104 JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x105 PushV
	var_183_object = var_1_object; // 0x106 MovT
	func_8355(var_183_object); // 0x107 NEW_2
	if(var_182_bool == 0) goto Label_267; // 0x109 JumpB
	var_174_bool = 1; // 0x10a MovB
	
Label_267:
	if(var_174_bool == 0) goto Label_273; // 0x10b JumpB
	var_188_int = 531689; // 0x10c PushI
	var_189_int = 34386; // 0x10d PushI
	var_190_int = 33073; // 0x10e PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x10f TObjFunc
	
Label_273:
	var_191_int = 531688; // 0x111 PushI
	var_192_int = -1; // 0x112 PushI
	var_193_int = 33072; // 0x113 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x114 TObjFunc
	var_194_int = 532874; // 0x116 PushI
	var_195_int = -1; // 0x117 PushI
	var_196_int = 34363; // 0x118 PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x119 TObjFunc
	return 0; // 0x11b Return
	
Label_284:
	var_197_int = 34411; // 0x11c PushI
	var_198_bool = var_56_bool == var_197_int; // 0x11d Eq
	if(var_198_bool == 0) goto Label_287; // 0x11e JumpB
	
Label_287:
	var_199_int = 34415; // 0x11f PushI
	var_200_bool = var_56_bool == var_199_int; // 0x120 Eq
	if(var_200_bool == 0) goto Label_310; // 0x121 JumpB
	var_201_string = ""; // 0x122 PushV
	var_201_string = "Neutral"; // 0x123 MovS
	func_169(var_57_cvector, var_201_string); // 0x124 NEW_2
	var_202_int = 532928; // 0x126 PushI
	SetMessage(var_202_int); // 0x127 TObjFunc
	ClearReplies(); // 0x129 TObjFunc
	var_203_int = 532929; // 0x12b PushI
	var_204_int = 34417; // 0x12c PushI
	var_205_int = 34416; // 0x12d PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x12e TObjFunc
	var_206_int = 533147; // 0x130 PushI
	var_207_int = 34665; // 0x131 PushI
	var_208_int = 34664; // 0x132 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_209_int = 34665; // 0x136 PushI
	var_210_bool = var_56_bool == var_209_int; // 0x137 Eq
	if(var_210_bool == 0) goto Label_333; // 0x138 JumpB
	var_211_string = ""; // 0x139 PushV
	var_211_string = "Neutral"; // 0x13a MovS
	func_169(var_57_cvector, var_211_string); // 0x13b NEW_2
	var_212_int = 533148; // 0x13d PushI
	SetMessage(var_212_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_213_int = 533149; // 0x142 PushI
	var_214_int = 34668; // 0x143 PushI
	var_215_int = 34666; // 0x144 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x145 TObjFunc
	var_216_int = 533150; // 0x147 PushI
	var_217_int = 34999; // 0x148 PushI
	var_218_int = 34667; // 0x149 PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x14a TObjFunc
	return 0; // 0x14c Return
	
Label_333:
	var_219_int = 34668; // 0x14d PushI
	var_220_bool = var_56_bool == var_219_int; // 0x14e Eq
	if(var_220_bool == 0) goto Label_356; // 0x14f JumpB
	var_221_string = ""; // 0x150 PushV
	var_221_string = "Neutral"; // 0x151 MovS
	func_169(var_57_cvector, var_221_string); // 0x152 NEW_2
	var_222_int = 533151; // 0x154 PushI
	SetMessage(var_222_int); // 0x155 TObjFunc
	ClearReplies(); // 0x157 TObjFunc
	var_223_int = 533152; // 0x159 PushI
	var_224_int = 34999; // 0x15a PushI
	var_225_int = 34669; // 0x15b PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x15c TObjFunc
	var_226_int = 533153; // 0x15e PushI
	var_227_int = 34999; // 0x15f PushI
	var_228_int = 34670; // 0x160 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x161 TObjFunc
	return 0; // 0x163 Return
	
Label_356:
	var_229_int = 34417; // 0x164 PushI
	var_230_bool = var_56_bool == var_229_int; // 0x165 Eq
	if(var_230_bool == 0) goto Label_379; // 0x166 JumpB
	var_231_string = ""; // 0x167 PushV
	var_231_string = "Grief"; // 0x168 MovS
	func_169(var_57_cvector, var_231_string); // 0x169 NEW_2
	var_232_int = 532930; // 0x16b PushI
	SetMessage(var_232_int); // 0x16c TObjFunc
	ClearReplies(); // 0x16e TObjFunc
	var_233_int = 533475; // 0x170 PushI
	var_234_int = 34999; // 0x171 PushI
	var_235_int = 34998; // 0x172 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x173 TObjFunc
	var_236_int = 532931; // 0x175 PushI
	var_237_int = 34419; // 0x176 PushI
	var_238_int = 34418; // 0x177 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x178 TObjFunc
	return 0; // 0x17a Return
	
Label_379:
	var_239_int = 34419; // 0x17b PushI
	var_240_bool = var_56_bool == var_239_int; // 0x17c Eq
	if(var_240_bool == 0) goto Label_402; // 0x17d JumpB
	var_241_string = ""; // 0x17e PushV
	var_241_string = "Neutral"; // 0x17f MovS
	func_169(var_57_cvector, var_241_string); // 0x180 NEW_2
	var_242_int = 532932; // 0x182 PushI
	SetMessage(var_242_int); // 0x183 TObjFunc
	ClearReplies(); // 0x185 TObjFunc
	var_243_int = 532933; // 0x187 PushI
	var_244_int = -1; // 0x188 PushI
	var_245_int = 34420; // 0x189 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x18a TObjFunc
	var_246_int = 533146; // 0x18c PushI
	var_247_int = -1; // 0x18d PushI
	var_248_int = 34663; // 0x18e PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_249_int = 34999; // 0x192 PushI
	var_250_bool = var_56_bool == var_249_int; // 0x193 Eq
	if(var_250_bool == 0) goto Label_425; // 0x194 JumpB
	var_251_string = ""; // 0x195 PushV
	var_251_string = "Neutral"; // 0x196 MovS
	func_169(var_57_cvector, var_251_string); // 0x197 NEW_2
	var_252_int = 533476; // 0x199 PushI
	SetMessage(var_252_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_253_int = 533478; // 0x19e PushI
	var_254_int = 35005; // 0x19f PushI
	var_255_int = 35004; // 0x1a0 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x1a1 TObjFunc
	var_256_int = 533477; // 0x1a3 PushI
	var_257_int = -1; // 0x1a4 PushI
	var_258_int = 35000; // 0x1a5 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_259_int = 35005; // 0x1a9 PushI
	var_260_bool = var_56_bool == var_259_int; // 0x1aa Eq
	if(var_260_bool == 0) goto Label_443; // 0x1ab JumpB
	var_261_string = ""; // 0x1ac PushV
	var_261_string = "Neutral"; // 0x1ad MovS
	func_169(var_57_cvector, var_261_string); // 0x1ae NEW_2
	var_262_int = 533479; // 0x1b0 PushI
	SetMessage(var_262_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_263_int = 533480; // 0x1b5 PushI
	var_264_int = 35007; // 0x1b6 PushI
	var_265_int = 35006; // 0x1b7 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_266_int = 35007; // 0x1bb PushI
	var_267_bool = var_56_bool == var_266_int; // 0x1bc Eq
	if(var_267_bool == 0) goto Label_466; // 0x1bd JumpB
	var_268_string = ""; // 0x1be PushV
	var_268_string = "Neutral"; // 0x1bf MovS
	func_169(var_57_cvector, var_268_string); // 0x1c0 NEW_2
	var_269_int = 533481; // 0x1c2 PushI
	SetMessage(var_269_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_270_int = 533482; // 0x1c7 PushI
	var_271_int = -1; // 0x1c8 PushI
	var_272_int = 35008; // 0x1c9 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x1ca TObjFunc
	var_273_int = 533483; // 0x1cc PushI
	var_274_int = -1; // 0x1cd PushI
	var_275_int = 35009; // 0x1ce PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x1cf TObjFunc
	return 0; // 0x1d1 Return
	
Label_466:
	var_276_int = 34386; // 0x1d2 PushI
	var_277_bool = var_56_bool == var_276_int; // 0x1d3 Eq
	if(var_277_bool == 0) goto Label_484; // 0x1d4 JumpB
	var_278_string = ""; // 0x1d5 PushV
	var_278_string = "Neutral"; // 0x1d6 MovS
	func_169(var_57_cvector, var_278_string); // 0x1d7 NEW_2
	var_279_int = 532902; // 0x1d9 PushI
	SetMessage(var_279_int); // 0x1da TObjFunc
	ClearReplies(); // 0x1dc TObjFunc
	var_280_int = 532903; // 0x1de PushI
	var_281_int = 33074; // 0x1df PushI
	var_282_int = 34387; // 0x1e0 PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x1e1 TObjFunc
	return 0; // 0x1e3 Return
	
Label_484:
	var_283_int = 34389; // 0x1e4 PushI
	var_284_bool = var_56_bool == var_283_int; // 0x1e5 Eq
	if(var_284_bool == 0) goto Label_487; // 0x1e6 JumpB
	
Label_487:
	var_285_int = 33074; // 0x1e7 PushI
	var_286_bool = var_56_bool == var_285_int; // 0x1e8 Eq
	if(var_286_bool == 0) goto Label_505; // 0x1e9 JumpB
	var_287_string = ""; // 0x1ea PushV
	var_287_string = "Neutral"; // 0x1eb MovS
	func_169(var_57_cvector, var_287_string); // 0x1ec NEW_2
	var_288_int = 531690; // 0x1ee PushI
	SetMessage(var_288_int); // 0x1ef TObjFunc
	ClearReplies(); // 0x1f1 TObjFunc
	var_289_int = 531691; // 0x1f3 PushI
	var_290_int = 34392; // 0x1f4 PushI
	var_291_int = 33075; // 0x1f5 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x1f6 TObjFunc
	return 0; // 0x1f8 Return
	
Label_505:
	var_292_int = 34392; // 0x1f9 PushI
	var_293_bool = var_56_bool == var_292_int; // 0x1fa Eq
	if(var_293_bool == 0) goto Label_528; // 0x1fb JumpB
	var_294_string = ""; // 0x1fc PushV
	var_294_string = "Neutral"; // 0x1fd MovS
	func_169(var_57_cvector, var_294_string); // 0x1fe NEW_2
	var_295_int = 532908; // 0x200 PushI
	SetMessage(var_295_int); // 0x201 TObjFunc
	ClearReplies(); // 0x203 TObjFunc
	var_296_int = 532909; // 0x205 PushI
	var_297_int = 34395; // 0x206 PushI
	var_298_int = 34394; // 0x207 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x208 TObjFunc
	var_299_int = 532911; // 0x20a PushI
	var_300_int = 34397; // 0x20b PushI
	var_301_int = 34396; // 0x20c PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x20d TObjFunc
	return 0; // 0x20f Return
	
Label_528:
	var_302_int = 34397; // 0x210 PushI
	var_303_bool = var_56_bool == var_302_int; // 0x211 Eq
	if(var_303_bool == 0) goto Label_546; // 0x212 JumpB
	var_304_string = ""; // 0x213 PushV
	var_304_string = "Neutral"; // 0x214 MovS
	func_169(var_57_cvector, var_304_string); // 0x215 NEW_2
	var_305_int = 532912; // 0x217 PushI
	SetMessage(var_305_int); // 0x218 TObjFunc
	ClearReplies(); // 0x21a TObjFunc
	var_306_int = 532913; // 0x21c PushI
	var_307_int = 34399; // 0x21d PushI
	var_308_int = 34398; // 0x21e PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x21f TObjFunc
	return 0; // 0x221 Return
	
Label_546:
	var_309_int = 34399; // 0x222 PushI
	var_310_bool = var_56_bool == var_309_int; // 0x223 Eq
	if(var_310_bool == 0) goto Label_569; // 0x224 JumpB
	var_311_string = ""; // 0x225 PushV
	var_311_string = "Neutral"; // 0x226 MovS
	func_169(var_57_cvector, var_311_string); // 0x227 NEW_2
	var_312_int = 532914; // 0x229 PushI
	SetMessage(var_312_int); // 0x22a TObjFunc
	ClearReplies(); // 0x22c TObjFunc
	var_313_int = 532915; // 0x22e PushI
	var_314_int = 34395; // 0x22f PushI
	var_315_int = 34400; // 0x230 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x231 TObjFunc
	var_316_int = 532916; // 0x233 PushI
	var_317_int = -1; // 0x234 PushI
	var_318_int = 34402; // 0x235 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x236 TObjFunc
	return 0; // 0x238 Return
	
Label_569:
	var_319_int = 34395; // 0x239 PushI
	var_320_bool = var_56_bool == var_319_int; // 0x23a Eq
	if(var_320_bool == 0) goto Label_592; // 0x23b JumpB
	var_321_string = ""; // 0x23c PushV
	var_321_string = "Neutral"; // 0x23d MovS
	func_169(var_57_cvector, var_321_string); // 0x23e NEW_2
	var_322_int = 532910; // 0x240 PushI
	SetMessage(var_322_int); // 0x241 TObjFunc
	ClearReplies(); // 0x243 TObjFunc
	var_323_int = 532917; // 0x245 PushI
	var_324_int = -1; // 0x246 PushI
	var_325_int = 34403; // 0x247 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x248 TObjFunc
	var_326_int = 532918; // 0x24a PushI
	var_327_int = -1; // 0x24b PushI
	var_328_int = 34404; // 0x24c PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x24d TObjFunc
	return 0; // 0x24f Return
	
Label_592:
	var_329_int = 34364; // 0x250 PushI
	var_330_bool = var_56_bool == var_329_int; // 0x251 Eq
	if(var_330_bool == 0) goto Label_615; // 0x252 JumpB
	var_331_string = ""; // 0x253 PushV
	var_331_string = "Grief"; // 0x254 MovS
	func_169(var_57_cvector, var_331_string); // 0x255 NEW_2
	var_332_int = 532875; // 0x257 PushI
	SetMessage(var_332_int); // 0x258 TObjFunc
	ClearReplies(); // 0x25a TObjFunc
	var_333_int = 532876; // 0x25c PushI
	var_334_int = 34366; // 0x25d PushI
	var_335_int = 34365; // 0x25e PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x25f TObjFunc
	var_336_int = 532919; // 0x261 PushI
	var_337_int = 34406; // 0x262 PushI
	var_338_int = 34405; // 0x263 PushI
	AddReply(var_336_int, var_337_int, var_338_int); // 0x264 TObjFunc
	return 0; // 0x266 Return
	
Label_615:
	var_339_int = 34406; // 0x267 PushI
	var_340_bool = var_56_bool == var_339_int; // 0x268 Eq
	if(var_340_bool == 0) goto Label_638; // 0x269 JumpB
	var_341_string = ""; // 0x26a PushV
	var_341_string = "Neutral"; // 0x26b MovS
	func_169(var_57_cvector, var_341_string); // 0x26c NEW_2
	var_342_int = 532920; // 0x26e PushI
	SetMessage(var_342_int); // 0x26f TObjFunc
	ClearReplies(); // 0x271 TObjFunc
	var_343_int = 532921; // 0x273 PushI
	var_344_int = 34366; // 0x274 PushI
	var_345_int = 34407; // 0x275 PushI
	AddReply(var_343_int, var_344_int, var_345_int); // 0x276 TObjFunc
	var_346_int = 532922; // 0x278 PushI
	var_347_int = -1; // 0x279 PushI
	var_348_int = 34409; // 0x27a PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x27b TObjFunc
	return 0; // 0x27d Return
	
Label_638:
	var_349_int = 34366; // 0x27e PushI
	var_350_bool = var_56_bool == var_349_int; // 0x27f Eq
	if(var_350_bool == 0) goto Label_661; // 0x280 JumpB
	var_351_string = ""; // 0x281 PushV
	var_351_string = "Neutral"; // 0x282 MovS
	func_169(var_57_cvector, var_351_string); // 0x283 NEW_2
	var_352_int = 532877; // 0x285 PushI
	SetMessage(var_352_int); // 0x286 TObjFunc
	ClearReplies(); // 0x288 TObjFunc
	var_353_int = 532878; // 0x28a PushI
	var_354_int = 34368; // 0x28b PushI
	var_355_int = 34367; // 0x28c PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x28d TObjFunc
	var_356_int = 532934; // 0x28f PushI
	var_357_int = 34424; // 0x290 PushI
	var_358_int = 34421; // 0x291 PushI
	AddReply(var_356_int, var_357_int, var_358_int); // 0x292 TObjFunc
	return 0; // 0x294 Return
	
Label_661:
	var_359_int = 34424; // 0x295 PushI
	var_360_bool = var_56_bool == var_359_int; // 0x296 Eq
	if(var_360_bool == 0) goto Label_679; // 0x297 JumpB
	var_361_string = ""; // 0x298 PushV
	var_361_string = "Neutral"; // 0x299 MovS
	func_169(var_57_cvector, var_361_string); // 0x29a NEW_2
	var_362_int = 532936; // 0x29c PushI
	SetMessage(var_362_int); // 0x29d TObjFunc
	ClearReplies(); // 0x29f TObjFunc
	var_363_int = 532937; // 0x2a1 PushI
	var_364_int = 34426; // 0x2a2 PushI
	var_365_int = 34425; // 0x2a3 PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x2a4 TObjFunc
	return 0; // 0x2a6 Return
	
Label_679:
	var_366_int = 34426; // 0x2a7 PushI
	var_367_bool = var_56_bool == var_366_int; // 0x2a8 Eq
	if(var_367_bool == 0) goto Label_697; // 0x2a9 JumpB
	var_368_string = ""; // 0x2aa PushV
	var_368_string = "Neutral"; // 0x2ab MovS
	func_169(var_57_cvector, var_368_string); // 0x2ac NEW_2
	var_369_int = 532938; // 0x2ae PushI
	SetMessage(var_369_int); // 0x2af TObjFunc
	ClearReplies(); // 0x2b1 TObjFunc
	var_370_int = 532939; // 0x2b3 PushI
	var_371_int = 34368; // 0x2b4 PushI
	var_372_int = 34427; // 0x2b5 PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x2b6 TObjFunc
	return 0; // 0x2b8 Return
	
Label_697:
	var_373_int = 34368; // 0x2b9 PushI
	var_374_bool = var_56_bool == var_373_int; // 0x2ba Eq
	if(var_374_bool == 0) goto Label_720; // 0x2bb JumpB
	var_375_string = ""; // 0x2bc PushV
	var_375_string = "Neutral"; // 0x2bd MovS
	func_169(var_57_cvector, var_375_string); // 0x2be NEW_2
	var_376_int = 532879; // 0x2c0 PushI
	SetMessage(var_376_int); // 0x2c1 TObjFunc
	ClearReplies(); // 0x2c3 TObjFunc
	var_377_int = 532880; // 0x2c5 PushI
	var_378_int = 34370; // 0x2c6 PushI
	var_379_int = 34369; // 0x2c7 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x2c8 TObjFunc
	var_380_int = 532935; // 0x2ca PushI
	var_381_int = 34370; // 0x2cb PushI
	var_382_int = 34422; // 0x2cc PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x2cd TObjFunc
	return 0; // 0x2cf Return
	
Label_720:
	var_383_int = 34370; // 0x2d0 PushI
	var_384_bool = var_56_bool == var_383_int; // 0x2d1 Eq
	if(var_384_bool == 0) goto Label_743; // 0x2d2 JumpB
	var_385_string = ""; // 0x2d3 PushV
	var_385_string = "Gratitude"; // 0x2d4 MovS
	func_169(var_57_cvector, var_385_string); // 0x2d5 NEW_2
	var_386_int = 532881; // 0x2d7 PushI
	SetMessage(var_386_int); // 0x2d8 TObjFunc
	ClearReplies(); // 0x2da TObjFunc
	var_387_int = 532882; // 0x2dc PushI
	var_388_int = 34373; // 0x2dd PushI
	var_389_int = 34371; // 0x2de PushI
	AddReply(var_387_int, var_388_int, var_389_int); // 0x2df TObjFunc
	var_390_int = 532883; // 0x2e1 PushI
	var_391_int = 33070; // 0x2e2 PushI
	var_392_int = 34372; // 0x2e3 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x2e4 TObjFunc
	return 0; // 0x2e6 Return
	
Label_743:
	var_393_int = 34373; // 0x2e7 PushI
	var_394_bool = var_56_bool == var_393_int; // 0x2e8 Eq
	if(var_394_bool == 0) goto Label_766; // 0x2e9 JumpB
	var_395_string = ""; // 0x2ea PushV
	var_395_string = "Neutral"; // 0x2eb MovS
	func_169(var_57_cvector, var_395_string); // 0x2ec NEW_2
	var_396_int = 532884; // 0x2ee PushI
	SetMessage(var_396_int); // 0x2ef TObjFunc
	ClearReplies(); // 0x2f1 TObjFunc
	var_397_int = 532885; // 0x2f3 PushI
	var_398_int = 33070; // 0x2f4 PushI
	var_399_int = 34374; // 0x2f5 PushI
	AddReply(var_397_int, var_398_int, var_399_int); // 0x2f6 TObjFunc
	var_400_int = 532886; // 0x2f8 PushI
	var_401_int = 34377; // 0x2f9 PushI
	var_402_int = 34375; // 0x2fa PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x2fb TObjFunc
	return 0; // 0x2fd Return
	
Label_766:
	var_403_int = 34377; // 0x2fe PushI
	var_404_bool = var_56_bool == var_403_int; // 0x2ff Eq
	if(var_404_bool == 0) goto Label_789; // 0x300 JumpB
	var_405_string = ""; // 0x301 PushV
	var_405_string = "Neutral"; // 0x302 MovS
	func_169(var_57_cvector, var_405_string); // 0x303 NEW_2
	var_406_int = 532887; // 0x305 PushI
	SetMessage(var_406_int); // 0x306 TObjFunc
	ClearReplies(); // 0x308 TObjFunc
	var_407_int = 532888; // 0x30a PushI
	var_408_int = 34380; // 0x30b PushI
	var_409_int = 34378; // 0x30c PushI
	AddReply(var_407_int, var_408_int, var_409_int); // 0x30d TObjFunc
	var_410_int = 532889; // 0x30f PushI
	var_411_int = -1; // 0x310 PushI
	var_412_int = 34379; // 0x311 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x312 TObjFunc
	return 0; // 0x314 Return
	
Label_789:
	var_413_int = 34380; // 0x315 PushI
	var_414_bool = var_56_bool == var_413_int; // 0x316 Eq
	if(var_414_bool == 0) goto Label_812; // 0x317 JumpB
	var_415_string = ""; // 0x318 PushV
	var_415_string = "Neutral"; // 0x319 MovS
	func_169(var_57_cvector, var_415_string); // 0x31a NEW_2
	var_416_int = 532890; // 0x31c PushI
	SetMessage(var_416_int); // 0x31d TObjFunc
	ClearReplies(); // 0x31f TObjFunc
	var_417_int = 532891; // 0x321 PushI
	var_418_int = 33070; // 0x322 PushI
	var_419_int = 34381; // 0x323 PushI
	AddReply(var_417_int, var_418_int, var_419_int); // 0x324 TObjFunc
	var_420_int = 532892; // 0x326 PushI
	var_421_int = -1; // 0x327 PushI
	var_422_int = 34382; // 0x328 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x329 TObjFunc
	return 0; // 0x32b Return
	
Label_812:
	var_423_int = 33070; // 0x32c PushI
	var_424_bool = var_56_bool == var_423_int; // 0x32d Eq
	if(var_424_bool == 0) goto Label_835; // 0x32e JumpB
	var_425_string = ""; // 0x32f PushV
	var_425_string = "Neutral"; // 0x330 MovS
	func_169(var_57_cvector, var_425_string); // 0x331 NEW_2
	var_426_int = 531686; // 0x333 PushI
	SetMessage(var_426_int); // 0x334 TObjFunc
	ClearReplies(); // 0x336 TObjFunc
	var_427_int = 532940; // 0x338 PushI
	var_428_int = 34430; // 0x339 PushI
	var_429_int = 34429; // 0x33a PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x33b TObjFunc
	var_430_int = 532942; // 0x33d PushI
	var_431_int = -1; // 0x33e PushI
	var_432_int = 34431; // 0x33f PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x340 TObjFunc
	return 0; // 0x342 Return
	
Label_835:
	var_433_int = 34430; // 0x343 PushI
	var_434_bool = var_56_bool == var_433_int; // 0x344 Eq
	if(var_434_bool == 0) goto Label_858; // 0x345 JumpB
	var_435_string = ""; // 0x346 PushV
	var_435_string = "Gratitude"; // 0x347 MovS
	func_169(var_57_cvector, var_435_string); // 0x348 NEW_2
	var_436_int = 532941; // 0x34a PushI
	SetMessage(var_436_int); // 0x34b TObjFunc
	ClearReplies(); // 0x34d TObjFunc
	var_437_int = 531687; // 0x34f PushI
	var_438_int = -1; // 0x350 PushI
	var_439_int = 33071; // 0x351 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x352 TObjFunc
	var_440_int = 532943; // 0x354 PushI
	var_441_int = -1; // 0x355 PushI
	var_442_int = 34432; // 0x356 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x357 TObjFunc
	return 0; // 0x359 Return
	
Label_858:
	var_3_string = 1; // 0x35a TMovB
	var_443_bool = 0; // 0x35b PushV
	func_7709(var_443_bool); // 0x35c NEW_2
	if(var_443_bool == 0) goto Label_866; // 0x35e JumpB
	lshStopAnimation(); // 0x35f Func
	goto Label_868; // 0x361 Jump
	
Label_868:
	return 0; // 0x364 Return
	
Label_866:
	StopAnimation(); // 0x362 Func
	
Label_870:
	return 0; // 0x366 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x402 PushI
	if(var_58_int == 0) goto Label_1066; // 0x403 JumpB
	func_7468(); // 0x405 NEW_2
	var_60_int = 34230; // 0x407 PushI
	var_61_bool = var_56_bool == var_60_int; // 0x408 Eq
	if(var_61_bool == 0) goto Label_1054; // 0x409 JumpB
	var_62_string = ""; // 0x40a PushV
	var_62_string = "Neutral"; // 0x40b MovS
	func_1003(var_57_cvector, var_62_string); // 0x40c NEW_2
	var_79_int = 532759; // 0x40e PushI
	SetMessage(var_79_int); // 0x40f TObjFunc
	ClearReplies(); // 0x411 TObjFunc
	var_80_int = 532760; // 0x413 PushI
	var_81_int = -1; // 0x414 PushI
	var_82_int = 34231; // 0x415 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x416 TObjFunc
	var_83_int = 533664; // 0x418 PushI
	var_84_int = -1; // 0x419 PushI
	var_85_int = 35196; // 0x41a PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x41b TObjFunc
	return 0; // 0x41d Return
	
Label_1054:
	var_3_string = 1; // 0x41e TMovB
	var_86_bool = 0; // 0x41f PushV
	func_7709(var_86_bool); // 0x420 NEW_2
	if(var_86_bool == 0) goto Label_1062; // 0x422 JumpB
	lshStopAnimation(); // 0x423 Func
	goto Label_1064; // 0x425 Jump
	
Label_1064:
	return 0; // 0x428 Return
	
Label_1062:
	StopAnimation(); // 0x426 Func
	
Label_1066:
	return 0; // 0x42a Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x4d2 PushI
	if(var_58_int == 0) goto Label_1325; // 0x4d3 JumpB
	func_7468(); // 0x4d5 NEW_2
	var_60_int = 36971; // 0x4d7 PushI
	var_61_bool = var_56_bool == var_60_int; // 0x4d8 Eq
	if(var_61_bool == 0) goto Label_1267; // 0x4d9 JumpB
	var_62_string = ""; // 0x4da PushV
	var_62_string = "Neutral"; // 0x4db MovS
	func_1211(var_57_cvector, var_62_string); // 0x4dc NEW_2
	var_79_int = 535294; // 0x4de PushI
	SetMessage(var_79_int); // 0x4df TObjFunc
	ClearReplies(); // 0x4e1 TObjFunc
	var_80_int = 535295; // 0x4e3 PushI
	var_81_int = 36973; // 0x4e4 PushI
	var_82_int = 36972; // 0x4e5 PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x4e6 TObjFunc
	var_83_int = 535302; // 0x4e8 PushI
	var_84_int = -1; // 0x4e9 PushI
	var_85_int = 36980; // 0x4ea PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x4eb TObjFunc
	var_86_int = 535303; // 0x4ed PushI
	var_87_int = -1; // 0x4ee PushI
	var_88_int = 36981; // 0x4ef PushI
	AddReply(var_86_int, var_87_int, var_88_int); // 0x4f0 TObjFunc
	return 0; // 0x4f2 Return
	
Label_1267:
	var_89_int = 36973; // 0x4f3 PushI
	var_90_bool = var_56_bool == var_89_int; // 0x4f4 Eq
	if(var_90_bool == 0) goto Label_1290; // 0x4f5 JumpB
	var_91_string = ""; // 0x4f6 PushV
	var_91_string = "Neutral"; // 0x4f7 MovS
	func_1211(var_57_cvector, var_91_string); // 0x4f8 NEW_2
	var_92_int = 535296; // 0x4fa PushI
	SetMessage(var_92_int); // 0x4fb TObjFunc
	ClearReplies(); // 0x4fd TObjFunc
	var_93_int = 535297; // 0x4ff PushI
	var_94_int = 36975; // 0x500 PushI
	var_95_int = 36974; // 0x501 PushI
	AddReply(var_93_int, var_94_int, var_95_int); // 0x502 TObjFunc
	var_96_int = 535301; // 0x504 PushI
	var_97_int = 36975; // 0x505 PushI
	var_98_int = 36978; // 0x506 PushI
	AddReply(var_96_int, var_97_int, var_98_int); // 0x507 TObjFunc
	return 0; // 0x509 Return
	
Label_1290:
	var_99_int = 36975; // 0x50a PushI
	var_100_bool = var_56_bool == var_99_int; // 0x50b Eq
	if(var_100_bool == 0) goto Label_1313; // 0x50c JumpB
	var_101_string = ""; // 0x50d PushV
	var_101_string = "Neutral"; // 0x50e MovS
	func_1211(var_57_cvector, var_101_string); // 0x50f NEW_2
	var_102_int = 535298; // 0x511 PushI
	SetMessage(var_102_int); // 0x512 TObjFunc
	ClearReplies(); // 0x514 TObjFunc
	var_103_int = 535299; // 0x516 PushI
	var_104_int = -1; // 0x517 PushI
	var_105_int = 36976; // 0x518 PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x519 TObjFunc
	var_106_int = 535300; // 0x51b PushI
	var_107_int = -1; // 0x51c PushI
	var_108_int = 36977; // 0x51d PushI
	AddReply(var_106_int, var_107_int, var_108_int); // 0x51e TObjFunc
	return 0; // 0x520 Return
	
Label_1313:
	var_3_string = 1; // 0x521 TMovB
	var_109_bool = 0; // 0x522 PushV
	func_7709(var_109_bool); // 0x523 NEW_2
	if(var_109_bool == 0) goto Label_1321; // 0x525 JumpB
	lshStopAnimation(); // 0x526 Func
	goto Label_1323; // 0x528 Jump
	
Label_1323:
	return 0; // 0x52b Return
	
Label_1321:
	StopAnimation(); // 0x529 Func
	
Label_1325:
	return 0; // 0x52d Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x5d0 PushI
	if(var_58_int == 0) goto Label_1579; // 0x5d1 JumpB
	func_7468(); // 0x5d3 NEW_2
	var_60_int = 336; // 0x5d5 PushI
	var_61_bool = var_56_bool == var_60_int; // 0x5d6 Eq
	if(var_61_bool == 0) goto Label_1516; // 0x5d7 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x5d8 PushV
	var_62_object = var_1_object; // 0x5d9 MovT
	var_63_object = var_0_object; // 0x5da MovT
	func_8275(); // 0x5db NEW_2
	var_66_string = ""; // 0x5dd PushV
	var_66_string = "Neutral"; // 0x5de MovS
	func_1465(var_57_cvector, var_66_string); // 0x5df NEW_2
	var_83_int = 500287; // 0x5e1 PushI
	SetMessage(var_83_int); // 0x5e2 TObjFunc
	ClearReplies(); // 0x5e4 TObjFunc
	var_84_int = 532871; // 0x5e6 PushI
	var_85_int = 34360; // 0x5e7 PushI
	var_86_int = 34359; // 0x5e8 PushI
	AddReply(var_84_int, var_85_int, var_86_int); // 0x5e9 TObjFunc
	return 0; // 0x5eb Return
	
Label_1516:
	var_87_int = 34360; // 0x5ec PushI
	var_88_bool = var_56_bool == var_87_int; // 0x5ed Eq
	if(var_88_bool == 0) goto Label_1544; // 0x5ee JumpB
	var_89_string = ""; // 0x5ef PushV
	var_89_string = "Neutral"; // 0x5f0 MovS
	func_1465(var_57_cvector, var_89_string); // 0x5f1 NEW_2
	var_90_int = 532872; // 0x5f3 PushI
	SetMessage(var_90_int); // 0x5f4 TObjFunc
	ClearReplies(); // 0x5f6 TObjFunc
	var_91_int = 500288; // 0x5f8 PushI
	var_92_int = 340; // 0x5f9 PushI
	var_93_int = 337; // 0x5fa PushI
	AddReply(var_91_int, var_92_int, var_93_int); // 0x5fb TObjFunc
	var_94_int = 500290; // 0x5fd PushI
	var_95_int = 340; // 0x5fe PushI
	var_96_int = 339; // 0x5ff PushI
	AddReply(var_94_int, var_95_int, var_96_int); // 0x600 TObjFunc
	var_97_int = 500289; // 0x602 PushI
	var_98_int = -1; // 0x603 PushI
	var_99_int = 338; // 0x604 PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x605 TObjFunc
	return 0; // 0x607 Return
	
Label_1544:
	var_100_int = 340; // 0x608 PushI
	var_101_bool = var_56_bool == var_100_int; // 0x609 Eq
	if(var_101_bool == 0) goto Label_1567; // 0x60a JumpB
	var_102_string = ""; // 0x60b PushV
	var_102_string = "Neutral"; // 0x60c MovS
	func_1465(var_57_cvector, var_102_string); // 0x60d NEW_2
	var_103_int = 500291; // 0x60f PushI
	SetMessage(var_103_int); // 0x610 TObjFunc
	ClearReplies(); // 0x612 TObjFunc
	var_104_int = 500292; // 0x614 PushI
	var_105_int = -1; // 0x615 PushI
	var_106_int = 341; // 0x616 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x617 TObjFunc
	var_107_int = 500293; // 0x619 PushI
	var_108_int = -1; // 0x61a PushI
	var_109_int = 342; // 0x61b PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x61c TObjFunc
	return 0; // 0x61e Return
	
Label_1567:
	var_3_string = 1; // 0x61f TMovB
	var_110_bool = 0; // 0x620 PushV
	func_7709(var_110_bool); // 0x621 NEW_2
	if(var_110_bool == 0) goto Label_1575; // 0x623 JumpB
	lshStopAnimation(); // 0x624 Func
	goto Label_1577; // 0x626 Jump
	
Label_1577:
	return 0; // 0x629 Return
	
Label_1575:
	StopAnimation(); // 0x627 Func
	
Label_1579:
	return 0; // 0x62b Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_object, var_28_object, var_29_object, var_30_string, var_31_bool, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x742 PushI
	if(var_58_int == 0) goto Label_2744; // 0x743 JumpB
	func_7468(); // 0x745 NEW_2
	var_60_int = 13846; // 0x747 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x748 Eq
	if(var_61_bool == 0) goto Label_1876; // 0x749 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x74a PushV
	var_62_object = var_1_object; // 0x74b MovT
	var_63_object = var_0_object; // 0x74c MovT
	func_8281(); // 0x74d NEW_2
	var_113_object = Obj(); var_114_object = Obj(); // 0x74f PushV
	var_113_object = var_1_object; // 0x750 MovT
	var_114_object = var_0_object; // 0x751 MovT
	func_7921(); // 0x752 NEW_2
	
Label_1876:
	var_117_int = 13851; // 0x754 PushI
	var_118_bool = var_57_cvector == var_117_int; // 0x755 Eq
	if(var_118_bool == 0) goto Label_1889; // 0x756 JumpB
	var_119_object = Obj(); var_120_object = Obj(); // 0x757 PushV
	var_119_object = var_1_object; // 0x758 MovT
	var_120_object = var_0_object; // 0x759 MovT
	func_8281(); // 0x75a NEW_2
	var_121_object = Obj(); var_122_object = Obj(); // 0x75c PushV
	var_121_object = var_1_object; // 0x75d MovT
	var_122_object = var_0_object; // 0x75e MovT
	func_7921(); // 0x75f NEW_2
	
Label_1889:
	var_123_int = 13891; // 0x761 PushI
	var_124_bool = var_57_cvector == var_123_int; // 0x762 Eq
	if(var_124_bool == 0) goto Label_1902; // 0x763 JumpB
	var_125_object = Obj(); var_126_object = Obj(); // 0x764 PushV
	var_125_object = var_1_object; // 0x765 MovT
	var_126_object = var_0_object; // 0x766 MovT
	func_8281(); // 0x767 NEW_2
	var_127_object = Obj(); var_128_object = Obj(); // 0x769 PushV
	var_127_object = var_1_object; // 0x76a MovT
	var_128_object = var_0_object; // 0x76b MovT
	func_7921(); // 0x76c NEW_2
	
Label_1902:
	var_129_int = 13904; // 0x76e PushI
	var_130_bool = var_57_cvector == var_129_int; // 0x76f Eq
	if(var_130_bool == 0) goto Label_1915; // 0x770 JumpB
	var_131_object = Obj(); var_132_object = Obj(); // 0x771 PushV
	var_131_object = var_1_object; // 0x772 MovT
	var_132_object = var_0_object; // 0x773 MovT
	func_8281(); // 0x774 NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0x776 PushV
	var_133_object = var_1_object; // 0x777 MovT
	var_134_object = var_0_object; // 0x778 MovT
	func_7921(); // 0x779 NEW_2
	
Label_1915:
	var_135_int = 13905; // 0x77b PushI
	var_136_bool = var_57_cvector == var_135_int; // 0x77c Eq
	if(var_136_bool == 0) goto Label_1928; // 0x77d JumpB
	var_137_object = Obj(); var_138_object = Obj(); // 0x77e PushV
	var_137_object = var_1_object; // 0x77f MovT
	var_138_object = var_0_object; // 0x780 MovT
	func_8281(); // 0x781 NEW_2
	var_139_object = Obj(); var_140_object = Obj(); // 0x783 PushV
	var_139_object = var_1_object; // 0x784 MovT
	var_140_object = var_0_object; // 0x785 MovT
	func_7921(); // 0x786 NEW_2
	
Label_1928:
	var_141_int = 13829; // 0x788 PushI
	var_142_bool = var_57_cvector == var_141_int; // 0x789 Eq
	if(var_142_bool == 0) goto Label_1936; // 0x78a JumpB
	var_143_object = Obj(); var_144_object = Obj(); // 0x78b PushV
	var_143_object = var_1_object; // 0x78c MovT
	var_144_object = var_0_object; // 0x78d MovT
	func_8235(); // 0x78e NEW_2
	
Label_1936:
	var_147_int = 13840; // 0x790 PushI
	var_148_bool = var_57_cvector == var_147_int; // 0x791 Eq
	if(var_148_bool == 0) goto Label_1944; // 0x792 JumpB
	var_149_object = Obj(); var_150_object = Obj(); // 0x793 PushV
	var_149_object = var_1_object; // 0x794 MovT
	var_150_object = var_0_object; // 0x795 MovT
	func_8241(); // 0x796 NEW_2
	
Label_1944:
	var_153_int = 13195; // 0x798 PushI
	var_154_bool = var_57_cvector == var_153_int; // 0x799 Eq
	if(var_154_bool == 0) goto Label_1952; // 0x79a JumpB
	var_155_object = Obj(); var_156_object = Obj(); // 0x79b PushV
	var_155_object = var_1_object; // 0x79c MovT
	var_156_object = var_0_object; // 0x79d MovT
	func_8247(); // 0x79e NEW_2
	
Label_1952:
	var_159_int = 11744; // 0x7a0 PushI
	var_160_bool = var_57_cvector == var_159_int; // 0x7a1 Eq
	if(var_160_bool == 0) goto Label_1965; // 0x7a2 JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0x7a3 PushV
	var_161_object = var_1_object; // 0x7a4 MovT
	var_162_object = var_0_object; // 0x7a5 MovT
	func_8253(); // 0x7a6 NEW_2
	var_171_object = Obj(); var_172_object = Obj(); // 0x7a8 PushV
	var_171_object = var_1_object; // 0x7a9 MovT
	var_172_object = var_0_object; // 0x7aa MovT
	func_7711(); // 0x7ab NEW_2
	
Label_1965:
	var_197_int = 11745; // 0x7ad PushI
	var_198_bool = var_57_cvector == var_197_int; // 0x7ae Eq
	if(var_198_bool == 0) goto Label_1978; // 0x7af JumpB
	var_199_object = Obj(); var_200_object = Obj(); // 0x7b0 PushV
	var_199_object = var_1_object; // 0x7b1 MovT
	var_200_object = var_0_object; // 0x7b2 MovT
	func_8253(); // 0x7b3 NEW_2
	var_201_object = Obj(); var_202_object = Obj(); // 0x7b5 PushV
	var_201_object = var_1_object; // 0x7b6 MovT
	var_202_object = var_0_object; // 0x7b7 MovT
	func_7711(); // 0x7b8 NEW_2
	
Label_1978:
	var_203_int = 11756; // 0x7ba PushI
	var_204_bool = var_57_cvector == var_203_int; // 0x7bb Eq
	if(var_204_bool == 0) goto Label_1991; // 0x7bc JumpB
	var_205_object = Obj(); var_206_object = Obj(); // 0x7bd PushV
	var_205_object = var_1_object; // 0x7be MovT
	var_206_object = var_0_object; // 0x7bf MovT
	func_8253(); // 0x7c0 NEW_2
	var_207_object = Obj(); var_208_object = Obj(); // 0x7c2 PushV
	var_207_object = var_1_object; // 0x7c3 MovT
	var_208_object = var_0_object; // 0x7c4 MovT
	func_7711(); // 0x7c5 NEW_2
	
Label_1991:
	var_209_int = 11759; // 0x7c7 PushI
	var_210_bool = var_57_cvector == var_209_int; // 0x7c8 Eq
	if(var_210_bool == 0) goto Label_2004; // 0x7c9 JumpB
	var_211_object = Obj(); var_212_object = Obj(); // 0x7ca PushV
	var_211_object = var_1_object; // 0x7cb MovT
	var_212_object = var_0_object; // 0x7cc MovT
	func_8253(); // 0x7cd NEW_2
	var_213_object = Obj(); var_214_object = Obj(); // 0x7cf PushV
	var_213_object = var_1_object; // 0x7d0 MovT
	var_214_object = var_0_object; // 0x7d1 MovT
	func_7711(); // 0x7d2 NEW_2
	
Label_2004:
	var_215_int = 11760; // 0x7d4 PushI
	var_216_bool = var_57_cvector == var_215_int; // 0x7d5 Eq
	if(var_216_bool == 0) goto Label_2017; // 0x7d6 JumpB
	var_217_object = Obj(); var_218_object = Obj(); // 0x7d7 PushV
	var_217_object = var_1_object; // 0x7d8 MovT
	var_218_object = var_0_object; // 0x7d9 MovT
	func_8253(); // 0x7da NEW_2
	var_219_object = Obj(); var_220_object = Obj(); // 0x7dc PushV
	var_219_object = var_1_object; // 0x7dd MovT
	var_220_object = var_0_object; // 0x7de MovT
	func_7711(); // 0x7df NEW_2
	
Label_2017:
	var_221_int = 13830; // 0x7e1 PushI
	var_222_bool = var_56_bool == var_221_int; // 0x7e2 Eq
	if(var_222_bool == 0) goto Label_2156; // 0x7e3 JumpB
	var_223_bool = 0; // 0x7e4 PushV
	var_223_bool = 0; // 0x7e5 MovB
	var_224_bool = 0; var_225_object = Obj(); // 0x7e6 PushV
	var_225_object = var_1_object; // 0x7e7 MovT
	func_8684(var_225_object); // 0x7e8 NEW_2
	if(var_224_bool == 0) goto Label_2033; // 0x7ea JumpB
	var_232_bool = 0; var_233_object = Obj(); // 0x7eb PushV
	var_233_object = var_1_object; // 0x7ec MovT
	func_8696(var_233_object); // 0x7ed NEW_2
	if(var_232_bool == 0) goto Label_2033; // 0x7ef JumpB
	var_223_bool = 1; // 0x7f0 MovB
	
Label_2033:
	if(var_223_bool == 0) goto Label_2059; // 0x7f1 JumpB
	var_238_object = Obj(); var_239_object = Obj(); // 0x7f2 PushV
	var_238_object = var_1_object; // 0x7f3 MovT
	var_239_object = var_0_object; // 0x7f4 MovT
	func_8229(); // 0x7f5 NEW_2
	var_242_string = ""; // 0x7f7 PushV
	var_242_string = "Neutral"; // 0x7f8 MovS
	func_1835(var_57_cvector, var_242_string); // 0x7f9 NEW_2
	var_259_int = 512650; // 0x7fb PushI
	SetMessage(var_259_int); // 0x7fc TObjFunc
	ClearReplies(); // 0x7fe TObjFunc
	var_260_int = 510633; // 0x800 PushI
	var_261_int = 13839; // 0x801 PushI
	var_262_int = 11732; // 0x802 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x803 TObjFunc
	var_263_int = 510665; // 0x805 PushI
	var_264_int = 11772; // 0x806 PushI
	var_265_int = 11771; // 0x807 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x808 TObjFunc
	return 0; // 0x80a Return
	
Label_2059:
	var_266_string = ""; // 0x80b PushV
	var_266_string = "Neutral"; // 0x80c MovS
	func_1835(var_57_cvector, var_266_string); // 0x80d NEW_2
	var_267_int = 511979; // 0x80f PushI
	SetMessage(var_267_int); // 0x810 TObjFunc
	ClearReplies(); // 0x812 TObjFunc
	var_268_bool = 0; // 0x814 PushV
	var_268_bool = 0; // 0x815 MovB
	var_269_bool = 0; // 0x816 PushV
	var_269_bool = 0; // 0x817 MovB
	var_270_bool = 0; var_271_object = Obj(); // 0x818 PushV
	var_271_object = var_1_object; // 0x819 MovT
	func_8708(var_271_object); // 0x81a NEW_2
	if(var_270_bool == 0) goto Label_2083; // 0x81c JumpB
	var_276_bool = 0; var_277_object = Obj(); // 0x81d PushV
	var_277_object = var_1_object; // 0x81e MovT
	func_8624(var_277_object); // 0x81f NEW_2
	if(var_276_bool == 0) goto Label_2083; // 0x821 JumpB
	var_269_bool = 1; // 0x822 MovB
	
Label_2083:
	if(var_269_bool == 0) goto Label_2091; // 0x823 JumpB
	var_282_bool = 0; var_283_object = Obj(); // 0x824 PushV
	var_283_object = var_1_object; // 0x825 MovT
	func_8780(var_283_object); // 0x826 NEW_2
	var_288_bool = var_282_bool == 0; // 0x828 Not
	if(var_288_bool == 0) goto Label_2091; // 0x829 JumpB
	var_268_bool = 1; // 0x82a MovB
	
Label_2091:
	if(var_268_bool == 0) goto Label_2097; // 0x82b JumpB
	var_289_int = 512649; // 0x82c PushI
	var_290_int = 13832; // 0x82d PushI
	var_291_int = 13829; // 0x82e PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x82f TObjFunc
	
Label_2097:
	var_292_bool = 0; // 0x831 PushV
	var_292_bool = 0; // 0x832 MovB
	var_293_bool = 0; // 0x833 PushV
	var_293_bool = 0; // 0x834 MovB
	var_294_bool = 0; var_295_object = Obj(); // 0x835 PushV
	var_295_object = var_1_object; // 0x836 MovT
	func_8720(var_295_object); // 0x837 NEW_2
	if(var_294_bool == 0) goto Label_2112; // 0x839 JumpB
	var_300_bool = 0; var_301_object = Obj(); // 0x83a PushV
	var_301_object = var_1_object; // 0x83b MovT
	func_8624(var_301_object); // 0x83c NEW_2
	if(var_300_bool == 0) goto Label_2112; // 0x83e JumpB
	var_293_bool = 1; // 0x83f MovB
	
Label_2112:
	if(var_293_bool == 0) goto Label_2120; // 0x840 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x841 PushV
	var_303_object = var_1_object; // 0x842 MovT
	func_8792(var_303_object); // 0x843 NEW_2
	var_308_bool = var_302_bool == 0; // 0x845 Not
	if(var_308_bool == 0) goto Label_2120; // 0x846 JumpB
	var_292_bool = 1; // 0x847 MovB
	
Label_2120:
	if(var_292_bool == 0) goto Label_2126; // 0x848 JumpB
	var_309_int = 512660; // 0x849 PushI
	var_310_int = 13832; // 0x84a PushI
	var_311_int = 13840; // 0x84b PushI
	AddReply(var_309_int, var_310_int, var_311_int); // 0x84c TObjFunc
	
Label_2126:
	var_312_bool = 0; // 0x84e PushV
	var_312_bool = 0; // 0x84f MovB
	var_313_bool = 0; var_314_object = Obj(); // 0x850 PushV
	var_314_object = var_1_object; // 0x851 MovT
	func_8732(var_314_object); // 0x852 NEW_2
	if(var_313_bool == 0) goto Label_2139; // 0x854 JumpB
	var_319_bool = 0; var_320_object = Obj(); // 0x855 PushV
	var_320_object = var_1_object; // 0x856 MovT
	func_8744(var_320_object); // 0x857 NEW_2
	if(var_319_bool == 0) goto Label_2139; // 0x859 JumpB
	var_312_bool = 1; // 0x85a MovB
	
Label_2139:
	if(var_312_bool == 0) goto Label_2145; // 0x85b JumpB
	var_325_int = 511980; // 0x85c PushI
	var_326_int = 13196; // 0x85d PushI
	var_327_int = 13195; // 0x85e PushI
	AddReply(var_325_int, var_326_int, var_327_int); // 0x85f TObjFunc
	
Label_2145:
	var_328_int = 513018; // 0x861 PushI
	var_329_int = -1; // 0x862 PushI
	var_330_int = 14224; // 0x863 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x864 TObjFunc
	var_331_int = 542996; // 0x866 PushI
	var_332_int = -1; // 0x867 PushI
	var_333_int = 45444; // 0x868 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x869 TObjFunc
	return 0; // 0x86b Return
	
Label_2156:
	var_334_int = 13196; // 0x86c PushI
	var_335_bool = var_56_bool == var_334_int; // 0x86d Eq
	if(var_335_bool == 0) goto Label_2179; // 0x86e JumpB
	var_336_string = ""; // 0x86f PushV
	var_336_string = "Neutral"; // 0x870 MovS
	func_1835(var_57_cvector, var_336_string); // 0x871 NEW_2
	var_337_int = 511981; // 0x873 PushI
	SetMessage(var_337_int); // 0x874 TObjFunc
	ClearReplies(); // 0x876 TObjFunc
	var_338_int = 511982; // 0x878 PushI
	var_339_int = 13198; // 0x879 PushI
	var_340_int = 13197; // 0x87a PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x87b TObjFunc
	var_341_int = 512658; // 0x87d PushI
	var_342_int = 11733; // 0x87e PushI
	var_343_int = 13838; // 0x87f PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x880 TObjFunc
	return 0; // 0x882 Return
	
Label_2179:
	var_344_int = 11733; // 0x883 PushI
	var_345_bool = var_56_bool == var_344_int; // 0x884 Eq
	if(var_345_bool == 0) goto Label_2207; // 0x885 JumpB
	var_346_string = ""; // 0x886 PushV
	var_346_string = "Neutral"; // 0x887 MovS
	func_1835(var_57_cvector, var_346_string); // 0x888 NEW_2
	var_347_int = 510634; // 0x88a PushI
	SetMessage(var_347_int); // 0x88b TObjFunc
	ClearReplies(); // 0x88d TObjFunc
	var_348_int = 510635; // 0x88f PushI
	var_349_int = 11735; // 0x890 PushI
	var_350_int = 11734; // 0x891 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x892 TObjFunc
	var_351_int = 510660; // 0x894 PushI
	var_352_int = 11766; // 0x895 PushI
	var_353_int = 11763; // 0x896 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x897 TObjFunc
	var_354_int = 510661; // 0x899 PushI
	var_355_int = 11766; // 0x89a PushI
	var_356_int = 11765; // 0x89b PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x89c TObjFunc
	return 0; // 0x89e Return
	
Label_2207:
	var_357_int = 11766; // 0x89f PushI
	var_358_bool = var_56_bool == var_357_int; // 0x8a0 Eq
	if(var_358_bool == 0) goto Label_2230; // 0x8a1 JumpB
	var_359_string = ""; // 0x8a2 PushV
	var_359_string = "Gratitude"; // 0x8a3 MovS
	func_1835(var_57_cvector, var_359_string); // 0x8a4 NEW_2
	var_360_int = 510662; // 0x8a6 PushI
	SetMessage(var_360_int); // 0x8a7 TObjFunc
	ClearReplies(); // 0x8a9 TObjFunc
	var_361_int = 510663; // 0x8ab PushI
	var_362_int = 11735; // 0x8ac PushI
	var_363_int = 11767; // 0x8ad PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x8ae TObjFunc
	var_364_int = 510664; // 0x8b0 PushI
	var_365_int = 11735; // 0x8b1 PushI
	var_366_int = 11769; // 0x8b2 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x8b3 TObjFunc
	return 0; // 0x8b5 Return
	
Label_2230:
	var_367_int = 11735; // 0x8b6 PushI
	var_368_bool = var_56_bool == var_367_int; // 0x8b7 Eq
	if(var_368_bool == 0) goto Label_2253; // 0x8b8 JumpB
	var_369_string = ""; // 0x8b9 PushV
	var_369_string = "Neutral"; // 0x8ba MovS
	func_1835(var_57_cvector, var_369_string); // 0x8bb NEW_2
	var_370_int = 510636; // 0x8bd PushI
	SetMessage(var_370_int); // 0x8be TObjFunc
	ClearReplies(); // 0x8c0 TObjFunc
	var_371_int = 510637; // 0x8c2 PushI
	var_372_int = 11737; // 0x8c3 PushI
	var_373_int = 11736; // 0x8c4 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x8c5 TObjFunc
	var_374_int = 510647; // 0x8c7 PushI
	var_375_int = 11749; // 0x8c8 PushI
	var_376_int = 11748; // 0x8c9 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x8ca TObjFunc
	return 0; // 0x8cc Return
	
Label_2253:
	var_377_int = 11749; // 0x8cd PushI
	var_378_bool = var_56_bool == var_377_int; // 0x8ce Eq
	if(var_378_bool == 0) goto Label_2276; // 0x8cf JumpB
	var_379_string = ""; // 0x8d0 PushV
	var_379_string = "Neutral"; // 0x8d1 MovS
	func_1835(var_57_cvector, var_379_string); // 0x8d2 NEW_2
	var_380_int = 510648; // 0x8d4 PushI
	SetMessage(var_380_int); // 0x8d5 TObjFunc
	ClearReplies(); // 0x8d7 TObjFunc
	var_381_int = 510649; // 0x8d9 PushI
	var_382_int = 11737; // 0x8da PushI
	var_383_int = 11750; // 0x8db PushI
	AddReply(var_381_int, var_382_int, var_383_int); // 0x8dc TObjFunc
	var_384_int = 510650; // 0x8de PushI
	var_385_int = 11753; // 0x8df PushI
	var_386_int = 11752; // 0x8e0 PushI
	AddReply(var_384_int, var_385_int, var_386_int); // 0x8e1 TObjFunc
	return 0; // 0x8e3 Return
	
Label_2276:
	var_387_int = 11753; // 0x8e4 PushI
	var_388_bool = var_56_bool == var_387_int; // 0x8e5 Eq
	if(var_388_bool == 0) goto Label_2299; // 0x8e6 JumpB
	var_389_string = ""; // 0x8e7 PushV
	var_389_string = "Neutral"; // 0x8e8 MovS
	func_1835(var_57_cvector, var_389_string); // 0x8e9 NEW_2
	var_390_int = 510651; // 0x8eb PushI
	SetMessage(var_390_int); // 0x8ec TObjFunc
	ClearReplies(); // 0x8ee TObjFunc
	var_391_int = 510652; // 0x8f0 PushI
	var_392_int = 11755; // 0x8f1 PushI
	var_393_int = 11754; // 0x8f2 PushI
	AddReply(var_391_int, var_392_int, var_393_int); // 0x8f3 TObjFunc
	var_394_int = 510659; // 0x8f5 PushI
	var_395_int = 11755; // 0x8f6 PushI
	var_396_int = 11761; // 0x8f7 PushI
	AddReply(var_394_int, var_395_int, var_396_int); // 0x8f8 TObjFunc
	return 0; // 0x8fa Return
	
Label_2299:
	var_397_int = 11755; // 0x8fb PushI
	var_398_bool = var_56_bool == var_397_int; // 0x8fc Eq
	if(var_398_bool == 0) goto Label_2322; // 0x8fd JumpB
	var_399_string = ""; // 0x8fe PushV
	var_399_string = "Neutral"; // 0x8ff MovS
	func_1835(var_57_cvector, var_399_string); // 0x900 NEW_2
	var_400_int = 510653; // 0x902 PushI
	SetMessage(var_400_int); // 0x903 TObjFunc
	ClearReplies(); // 0x905 TObjFunc
	var_401_int = 510654; // 0x907 PushI
	var_402_int = -1; // 0x908 PushI
	var_403_int = 11756; // 0x909 PushI
	AddReply(var_401_int, var_402_int, var_403_int); // 0x90a TObjFunc
	var_404_int = 510655; // 0x90c PushI
	var_405_int = 11758; // 0x90d PushI
	var_406_int = 11757; // 0x90e PushI
	AddReply(var_404_int, var_405_int, var_406_int); // 0x90f TObjFunc
	return 0; // 0x911 Return
	
Label_2322:
	var_407_int = 11758; // 0x912 PushI
	var_408_bool = var_56_bool == var_407_int; // 0x913 Eq
	if(var_408_bool == 0) goto Label_2345; // 0x914 JumpB
	var_409_string = ""; // 0x915 PushV
	var_409_string = "Neutral"; // 0x916 MovS
	func_1835(var_57_cvector, var_409_string); // 0x917 NEW_2
	var_410_int = 510656; // 0x919 PushI
	SetMessage(var_410_int); // 0x91a TObjFunc
	ClearReplies(); // 0x91c TObjFunc
	var_411_int = 510657; // 0x91e PushI
	var_412_int = -1; // 0x91f PushI
	var_413_int = 11759; // 0x920 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0x921 TObjFunc
	var_414_int = 510658; // 0x923 PushI
	var_415_int = -1; // 0x924 PushI
	var_416_int = 11760; // 0x925 PushI
	AddReply(var_414_int, var_415_int, var_416_int); // 0x926 TObjFunc
	return 0; // 0x928 Return
	
Label_2345:
	var_417_int = 11737; // 0x929 PushI
	var_418_bool = var_56_bool == var_417_int; // 0x92a Eq
	if(var_418_bool == 0) goto Label_2373; // 0x92b JumpB
	var_419_string = ""; // 0x92c PushV
	var_419_string = "Strict"; // 0x92d MovS
	func_1835(var_57_cvector, var_419_string); // 0x92e NEW_2
	var_420_int = 510638; // 0x930 PushI
	SetMessage(var_420_int); // 0x931 TObjFunc
	ClearReplies(); // 0x933 TObjFunc
	var_421_int = 510642; // 0x935 PushI
	var_422_int = 11743; // 0x936 PushI
	var_423_int = 11742; // 0x937 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x938 TObjFunc
	var_424_int = 510639; // 0x93a PushI
	var_425_int = 11739; // 0x93b PushI
	var_426_int = 11738; // 0x93c PushI
	AddReply(var_424_int, var_425_int, var_426_int); // 0x93d TObjFunc
	var_427_int = 510646; // 0x93f PushI
	var_428_int = 11739; // 0x940 PushI
	var_429_int = 11746; // 0x941 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x942 TObjFunc
	return 0; // 0x944 Return
	
Label_2373:
	var_430_int = 11739; // 0x945 PushI
	var_431_bool = var_56_bool == var_430_int; // 0x946 Eq
	if(var_431_bool == 0) goto Label_2391; // 0x947 JumpB
	var_432_string = ""; // 0x948 PushV
	var_432_string = "Neutral"; // 0x949 MovS
	func_1835(var_57_cvector, var_432_string); // 0x94a NEW_2
	var_433_int = 510640; // 0x94c PushI
	SetMessage(var_433_int); // 0x94d TObjFunc
	ClearReplies(); // 0x94f TObjFunc
	var_434_int = 510641; // 0x951 PushI
	var_435_int = 11755; // 0x952 PushI
	var_436_int = 11740; // 0x953 PushI
	AddReply(var_434_int, var_435_int, var_436_int); // 0x954 TObjFunc
	return 0; // 0x956 Return
	
Label_2391:
	var_437_int = 11743; // 0x957 PushI
	var_438_bool = var_56_bool == var_437_int; // 0x958 Eq
	if(var_438_bool == 0) goto Label_2414; // 0x959 JumpB
	var_439_string = ""; // 0x95a PushV
	var_439_string = "Neutral"; // 0x95b MovS
	func_1835(var_57_cvector, var_439_string); // 0x95c NEW_2
	var_440_int = 510643; // 0x95e PushI
	SetMessage(var_440_int); // 0x95f TObjFunc
	ClearReplies(); // 0x961 TObjFunc
	var_441_int = 510644; // 0x963 PushI
	var_442_int = -1; // 0x964 PushI
	var_443_int = 11744; // 0x965 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x966 TObjFunc
	var_444_int = 510645; // 0x968 PushI
	var_445_int = -1; // 0x969 PushI
	var_446_int = 11745; // 0x96a PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x96b TObjFunc
	return 0; // 0x96d Return
	
Label_2414:
	var_447_int = 13198; // 0x96e PushI
	var_448_bool = var_56_bool == var_447_int; // 0x96f Eq
	if(var_448_bool == 0) goto Label_2432; // 0x970 JumpB
	var_449_string = ""; // 0x971 PushV
	var_449_string = "Strict"; // 0x972 MovS
	func_1835(var_57_cvector, var_449_string); // 0x973 NEW_2
	var_450_int = 511983; // 0x975 PushI
	SetMessage(var_450_int); // 0x976 TObjFunc
	ClearReplies(); // 0x978 TObjFunc
	var_451_int = 511984; // 0x97a PushI
	var_452_int = 13200; // 0x97b PushI
	var_453_int = 13199; // 0x97c PushI
	AddReply(var_451_int, var_452_int, var_453_int); // 0x97d TObjFunc
	return 0; // 0x97f Return
	
Label_2432:
	var_454_int = 13200; // 0x980 PushI
	var_455_bool = var_56_bool == var_454_int; // 0x981 Eq
	if(var_455_bool == 0) goto Label_2450; // 0x982 JumpB
	var_456_string = ""; // 0x983 PushV
	var_456_string = "Neutral"; // 0x984 MovS
	func_1835(var_57_cvector, var_456_string); // 0x985 NEW_2
	var_457_int = 511985; // 0x987 PushI
	SetMessage(var_457_int); // 0x988 TObjFunc
	ClearReplies(); // 0x98a TObjFunc
	var_458_int = 511986; // 0x98c PushI
	var_459_int = 11735; // 0x98d PushI
	var_460_int = 13201; // 0x98e PushI
	AddReply(var_458_int, var_459_int, var_460_int); // 0x98f TObjFunc
	return 0; // 0x991 Return
	
Label_2450:
	var_461_int = 13832; // 0x992 PushI
	var_462_bool = var_56_bool == var_461_int; // 0x993 Eq
	if(var_462_bool == 0) goto Label_2468; // 0x994 JumpB
	var_463_string = ""; // 0x995 PushV
	var_463_string = "Neutral"; // 0x996 MovS
	func_1835(var_57_cvector, var_463_string); // 0x997 NEW_2
	var_464_int = 512652; // 0x999 PushI
	SetMessage(var_464_int); // 0x99a TObjFunc
	ClearReplies(); // 0x99c TObjFunc
	var_465_int = 512653; // 0x99e PushI
	var_466_int = 13834; // 0x99f PushI
	var_467_int = 13833; // 0x9a0 PushI
	AddReply(var_465_int, var_466_int, var_467_int); // 0x9a1 TObjFunc
	return 0; // 0x9a3 Return
	
Label_2468:
	var_468_int = 13834; // 0x9a4 PushI
	var_469_bool = var_56_bool == var_468_int; // 0x9a5 Eq
	if(var_469_bool == 0) goto Label_2486; // 0x9a6 JumpB
	var_470_string = ""; // 0x9a7 PushV
	var_470_string = "Neutral"; // 0x9a8 MovS
	func_1835(var_57_cvector, var_470_string); // 0x9a9 NEW_2
	var_471_int = 512654; // 0x9ab PushI
	SetMessage(var_471_int); // 0x9ac TObjFunc
	ClearReplies(); // 0x9ae TObjFunc
	var_472_int = 512655; // 0x9b0 PushI
	var_473_int = -1; // 0x9b1 PushI
	var_474_int = 13835; // 0x9b2 PushI
	AddReply(var_472_int, var_473_int, var_474_int); // 0x9b3 TObjFunc
	return 0; // 0x9b5 Return
	
Label_2486:
	var_475_int = 11772; // 0x9b6 PushI
	var_476_bool = var_56_bool == var_475_int; // 0x9b7 Eq
	if(var_476_bool == 0) goto Label_2504; // 0x9b8 JumpB
	var_477_string = ""; // 0x9b9 PushV
	var_477_string = "Neutral"; // 0x9ba MovS
	func_1835(var_57_cvector, var_477_string); // 0x9bb NEW_2
	var_478_int = 510666; // 0x9bd PushI
	SetMessage(var_478_int); // 0x9be TObjFunc
	ClearReplies(); // 0x9c0 TObjFunc
	var_479_int = 510668; // 0x9c2 PushI
	var_480_int = 11776; // 0x9c3 PushI
	var_481_int = 11775; // 0x9c4 PushI
	AddReply(var_479_int, var_480_int, var_481_int); // 0x9c5 TObjFunc
	return 0; // 0x9c7 Return
	
Label_2504:
	var_482_int = 11776; // 0x9c8 PushI
	var_483_bool = var_56_bool == var_482_int; // 0x9c9 Eq
	if(var_483_bool == 0) goto Label_2522; // 0x9ca JumpB
	var_484_string = ""; // 0x9cb PushV
	var_484_string = "Grief"; // 0x9cc MovS
	func_1835(var_57_cvector, var_484_string); // 0x9cd NEW_2
	var_485_int = 510669; // 0x9cf PushI
	SetMessage(var_485_int); // 0x9d0 TObjFunc
	ClearReplies(); // 0x9d2 TObjFunc
	var_486_int = 510670; // 0x9d4 PushI
	var_487_int = 13839; // 0x9d5 PushI
	var_488_int = 11777; // 0x9d6 PushI
	AddReply(var_486_int, var_487_int, var_488_int); // 0x9d7 TObjFunc
	return 0; // 0x9d9 Return
	
Label_2522:
	var_489_int = 13839; // 0x9da PushI
	var_490_bool = var_56_bool == var_489_int; // 0x9db Eq
	if(var_490_bool == 0) goto Label_2540; // 0x9dc JumpB
	var_491_string = ""; // 0x9dd PushV
	var_491_string = "Grief"; // 0x9de MovS
	func_1835(var_57_cvector, var_491_string); // 0x9df NEW_2
	var_492_int = 512659; // 0x9e1 PushI
	SetMessage(var_492_int); // 0x9e2 TObjFunc
	ClearReplies(); // 0x9e4 TObjFunc
	var_493_int = 512648; // 0x9e6 PushI
	var_494_int = 13831; // 0x9e7 PushI
	var_495_int = 13828; // 0x9e8 PushI
	AddReply(var_493_int, var_494_int, var_495_int); // 0x9e9 TObjFunc
	return 0; // 0x9eb Return
	
Label_2540:
	var_496_int = 13831; // 0x9ec PushI
	var_497_bool = var_56_bool == var_496_int; // 0x9ed Eq
	if(var_497_bool == 0) goto Label_2568; // 0x9ee JumpB
	var_498_string = ""; // 0x9ef PushV
	var_498_string = "Neutral"; // 0x9f0 MovS
	func_1835(var_57_cvector, var_498_string); // 0x9f1 NEW_2
	var_499_int = 512651; // 0x9f3 PushI
	SetMessage(var_499_int); // 0x9f4 TObjFunc
	ClearReplies(); // 0x9f6 TObjFunc
	var_500_int = 512656; // 0x9f8 PushI
	var_501_int = 13837; // 0x9f9 PushI
	var_502_int = 13836; // 0x9fa PushI
	AddReply(var_500_int, var_501_int, var_502_int); // 0x9fb TObjFunc
	var_503_int = 512695; // 0x9fd PushI
	var_504_int = 13887; // 0x9fe PushI
	var_505_int = 13886; // 0x9ff PushI
	AddReply(var_503_int, var_504_int, var_505_int); // 0xa00 TObjFunc
	var_506_int = 512701; // 0xa02 PushI
	var_507_int = 13897; // 0xa03 PushI
	var_508_int = 13892; // 0xa04 PushI
	AddReply(var_506_int, var_507_int, var_508_int); // 0xa05 TObjFunc
	return 0; // 0xa07 Return
	
Label_2568:
	var_509_int = 13897; // 0xa08 PushI
	var_510_bool = var_56_bool == var_509_int; // 0xa09 Eq
	if(var_510_bool == 0) goto Label_2586; // 0xa0a JumpB
	var_511_string = ""; // 0xa0b PushV
	var_511_string = "Neutral"; // 0xa0c MovS
	func_1835(var_57_cvector, var_511_string); // 0xa0d NEW_2
	var_512_int = 512706; // 0xa0f PushI
	SetMessage(var_512_int); // 0xa10 TObjFunc
	ClearReplies(); // 0xa12 TObjFunc
	var_513_int = 512707; // 0xa14 PushI
	var_514_int = 13899; // 0xa15 PushI
	var_515_int = 13898; // 0xa16 PushI
	AddReply(var_513_int, var_514_int, var_515_int); // 0xa17 TObjFunc
	return 0; // 0xa19 Return
	
Label_2586:
	var_516_int = 13899; // 0xa1a PushI
	var_517_bool = var_56_bool == var_516_int; // 0xa1b Eq
	if(var_517_bool == 0) goto Label_2609; // 0xa1c JumpB
	var_518_string = ""; // 0xa1d PushV
	var_518_string = "Neutral"; // 0xa1e MovS
	func_1835(var_57_cvector, var_518_string); // 0xa1f NEW_2
	var_519_int = 512708; // 0xa21 PushI
	SetMessage(var_519_int); // 0xa22 TObjFunc
	ClearReplies(); // 0xa24 TObjFunc
	var_520_int = 512709; // 0xa26 PushI
	var_521_int = 13901; // 0xa27 PushI
	var_522_int = 13900; // 0xa28 PushI
	AddReply(var_520_int, var_521_int, var_522_int); // 0xa29 TObjFunc
	var_523_int = 512715; // 0xa2b PushI
	var_524_int = 13901; // 0xa2c PushI
	var_525_int = 13906; // 0xa2d PushI
	AddReply(var_523_int, var_524_int, var_525_int); // 0xa2e TObjFunc
	return 0; // 0xa30 Return
	
Label_2609:
	var_526_int = 13901; // 0xa31 PushI
	var_527_bool = var_56_bool == var_526_int; // 0xa32 Eq
	if(var_527_bool == 0) goto Label_2632; // 0xa33 JumpB
	var_528_string = ""; // 0xa34 PushV
	var_528_string = "Neutral"; // 0xa35 MovS
	func_1835(var_57_cvector, var_528_string); // 0xa36 NEW_2
	var_529_int = 512710; // 0xa38 PushI
	SetMessage(var_529_int); // 0xa39 TObjFunc
	ClearReplies(); // 0xa3b TObjFunc
	var_530_int = 512711; // 0xa3d PushI
	var_531_int = 13903; // 0xa3e PushI
	var_532_int = 13902; // 0xa3f PushI
	AddReply(var_530_int, var_531_int, var_532_int); // 0xa40 TObjFunc
	var_533_int = 512714; // 0xa42 PushI
	var_534_int = -1; // 0xa43 PushI
	var_535_int = 13905; // 0xa44 PushI
	AddReply(var_533_int, var_534_int, var_535_int); // 0xa45 TObjFunc
	return 0; // 0xa47 Return
	
Label_2632:
	var_536_int = 13903; // 0xa48 PushI
	var_537_bool = var_56_bool == var_536_int; // 0xa49 Eq
	if(var_537_bool == 0) goto Label_2650; // 0xa4a JumpB
	var_538_string = ""; // 0xa4b PushV
	var_538_string = "Neutral"; // 0xa4c MovS
	func_1835(var_57_cvector, var_538_string); // 0xa4d NEW_2
	var_539_int = 512712; // 0xa4f PushI
	SetMessage(var_539_int); // 0xa50 TObjFunc
	ClearReplies(); // 0xa52 TObjFunc
	var_540_int = 512713; // 0xa54 PushI
	var_541_int = -1; // 0xa55 PushI
	var_542_int = 13904; // 0xa56 PushI
	AddReply(var_540_int, var_541_int, var_542_int); // 0xa57 TObjFunc
	return 0; // 0xa59 Return
	
Label_2650:
	var_543_int = 13887; // 0xa5a PushI
	var_544_bool = var_56_bool == var_543_int; // 0xa5b Eq
	if(var_544_bool == 0) goto Label_2668; // 0xa5c JumpB
	var_545_string = ""; // 0xa5d PushV
	var_545_string = "Neutral"; // 0xa5e MovS
	func_1835(var_57_cvector, var_545_string); // 0xa5f NEW_2
	var_546_int = 512696; // 0xa61 PushI
	SetMessage(var_546_int); // 0xa62 TObjFunc
	ClearReplies(); // 0xa64 TObjFunc
	var_547_int = 512700; // 0xa66 PushI
	var_548_int = -1; // 0xa67 PushI
	var_549_int = 13891; // 0xa68 PushI
	AddReply(var_547_int, var_548_int, var_549_int); // 0xa69 TObjFunc
	return 0; // 0xa6b Return
	
Label_2668:
	var_550_int = 13837; // 0xa6c PushI
	var_551_bool = var_56_bool == var_550_int; // 0xa6d Eq
	if(var_551_bool == 0) goto Label_2691; // 0xa6e JumpB
	var_552_string = ""; // 0xa6f PushV
	var_552_string = "Neutral"; // 0xa70 MovS
	func_1835(var_57_cvector, var_552_string); // 0xa71 NEW_2
	var_553_int = 512657; // 0xa73 PushI
	SetMessage(var_553_int); // 0xa74 TObjFunc
	ClearReplies(); // 0xa76 TObjFunc
	var_554_int = 512661; // 0xa78 PushI
	var_555_int = 13843; // 0xa79 PushI
	var_556_int = 13842; // 0xa7a PushI
	AddReply(var_554_int, var_555_int, var_556_int); // 0xa7b TObjFunc
	var_557_int = 512667; // 0xa7d PushI
	var_558_int = 13843; // 0xa7e PushI
	var_559_int = 13849; // 0xa7f PushI
	AddReply(var_557_int, var_558_int, var_559_int); // 0xa80 TObjFunc
	return 0; // 0xa82 Return
	
Label_2691:
	var_560_int = 13843; // 0xa83 PushI
	var_561_bool = var_56_bool == var_560_int; // 0xa84 Eq
	if(var_561_bool == 0) goto Label_2709; // 0xa85 JumpB
	var_562_string = ""; // 0xa86 PushV
	var_562_string = "Strict"; // 0xa87 MovS
	func_1835(var_57_cvector, var_562_string); // 0xa88 NEW_2
	var_563_int = 512662; // 0xa8a PushI
	SetMessage(var_563_int); // 0xa8b TObjFunc
	ClearReplies(); // 0xa8d TObjFunc
	var_564_int = 512663; // 0xa8f PushI
	var_565_int = 13845; // 0xa90 PushI
	var_566_int = 13844; // 0xa91 PushI
	AddReply(var_564_int, var_565_int, var_566_int); // 0xa92 TObjFunc
	return 0; // 0xa94 Return
	
Label_2709:
	var_567_int = 13845; // 0xa95 PushI
	var_568_bool = var_56_bool == var_567_int; // 0xa96 Eq
	if(var_568_bool == 0) goto Label_2732; // 0xa97 JumpB
	var_569_string = ""; // 0xa98 PushV
	var_569_string = "Neutral"; // 0xa99 MovS
	func_1835(var_57_cvector, var_569_string); // 0xa9a NEW_2
	var_570_int = 512664; // 0xa9c PushI
	SetMessage(var_570_int); // 0xa9d TObjFunc
	ClearReplies(); // 0xa9f TObjFunc
	var_571_int = 512665; // 0xaa1 PushI
	var_572_int = -1; // 0xaa2 PushI
	var_573_int = 13846; // 0xaa3 PushI
	AddReply(var_571_int, var_572_int, var_573_int); // 0xaa4 TObjFunc
	var_574_int = 512668; // 0xaa6 PushI
	var_575_int = -1; // 0xaa7 PushI
	var_576_int = 13851; // 0xaa8 PushI
	AddReply(var_574_int, var_575_int, var_576_int); // 0xaa9 TObjFunc
	return 0; // 0xaab Return
	
Label_2732:
	var_3_string = 1; // 0xaac TMovB
	var_577_bool = 0; // 0xaad PushV
	func_7709(var_577_bool); // 0xaae NEW_2
	if(var_577_bool == 0) goto Label_2740; // 0xab0 JumpB
	lshStopAnimation(); // 0xab1 Func
	goto Label_2742; // 0xab3 Jump
	
Label_2742:
	return 0; // 0xab6 Return
	
Label_2740:
	StopAnimation(); // 0xab4 Func
	
Label_2744:
	return 0; // 0xab8 Return
}


task_11_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_int, var_31_int, var_32_object, var_33_object, var_34_object, var_35_string, var_36_bool, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0xbff PushI
	if(var_58_int == 0) goto Label_3946; // 0xc00 JumpB
	func_7468(); // 0xc02 NEW_2
	var_60_int = 7775; // 0xc04 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0xc05 Eq
	if(var_61_bool == 0) goto Label_3094; // 0xc06 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0xc07 PushV
	var_62_object = var_1_object; // 0xc08 MovT
	var_63_object = var_0_object; // 0xc09 MovT
	func_7772(); // 0xc0a NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0xc0c PushV
	var_66_object = var_1_object; // 0xc0d MovT
	var_67_object = var_0_object; // 0xc0e MovT
	func_7811(); // 0xc0f NEW_2
	var_117_object = Obj(); var_118_object = Obj(); // 0xc11 PushV
	var_117_object = var_1_object; // 0xc12 MovT
	var_118_object = var_0_object; // 0xc13 MovT
	func_7889(); // 0xc14 NEW_2
	
Label_3094:
	var_143_int = 7779; // 0xc16 PushI
	var_144_bool = var_57_cvector == var_143_int; // 0xc17 Eq
	if(var_144_bool == 0) goto Label_3112; // 0xc18 JumpB
	var_145_object = Obj(); var_146_object = Obj(); // 0xc19 PushV
	var_145_object = var_1_object; // 0xc1a MovT
	var_146_object = var_0_object; // 0xc1b MovT
	func_7772(); // 0xc1c NEW_2
	var_147_object = Obj(); var_148_object = Obj(); // 0xc1e PushV
	var_147_object = var_1_object; // 0xc1f MovT
	var_148_object = var_0_object; // 0xc20 MovT
	func_7811(); // 0xc21 NEW_2
	var_149_object = Obj(); var_150_object = Obj(); // 0xc23 PushV
	var_149_object = var_1_object; // 0xc24 MovT
	var_150_object = var_0_object; // 0xc25 MovT
	func_7889(); // 0xc26 NEW_2
	
Label_3112:
	var_151_int = 7780; // 0xc28 PushI
	var_152_bool = var_57_cvector == var_151_int; // 0xc29 Eq
	if(var_152_bool == 0) goto Label_3120; // 0xc2a JumpB
	var_153_object = Obj(); var_154_object = Obj(); // 0xc2b PushV
	var_153_object = var_1_object; // 0xc2c MovT
	var_154_object = var_0_object; // 0xc2d MovT
	func_7772(); // 0xc2e NEW_2
	
Label_3120:
	var_155_int = 7783; // 0xc30 PushI
	var_156_bool = var_57_cvector == var_155_int; // 0xc31 Eq
	if(var_156_bool == 0) goto Label_3128; // 0xc32 JumpB
	var_157_object = Obj(); var_158_object = Obj(); // 0xc33 PushV
	var_157_object = var_1_object; // 0xc34 MovT
	var_158_object = var_0_object; // 0xc35 MovT
	func_7772(); // 0xc36 NEW_2
	
Label_3128:
	var_159_int = 7790; // 0xc38 PushI
	var_160_bool = var_57_cvector == var_159_int; // 0xc39 Eq
	if(var_160_bool == 0) goto Label_3146; // 0xc3a JumpB
	var_161_object = Obj(); var_162_object = Obj(); // 0xc3b PushV
	var_161_object = var_1_object; // 0xc3c MovT
	var_162_object = var_0_object; // 0xc3d MovT
	func_7837(); // 0xc3e NEW_2
	var_177_object = Obj(); var_178_object = Obj(); // 0xc40 PushV
	var_177_object = var_1_object; // 0xc41 MovT
	var_178_object = var_0_object; // 0xc42 MovT
	func_7733(); // 0xc43 NEW_2
	var_181_object = Obj(); var_182_object = Obj(); // 0xc45 PushV
	var_181_object = var_1_object; // 0xc46 MovT
	var_182_object = var_0_object; // 0xc47 MovT
	func_7790(var_182_object); // 0xc48 NEW_2
	
Label_3146:
	var_205_int = 7791; // 0xc4a PushI
	var_206_bool = var_57_cvector == var_205_int; // 0xc4b Eq
	if(var_206_bool == 0) goto Label_3164; // 0xc4c JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0xc4d PushV
	var_207_object = var_1_object; // 0xc4e MovT
	var_208_object = var_0_object; // 0xc4f MovT
	func_7837(); // 0xc50 NEW_2
	var_209_object = Obj(); var_210_object = Obj(); // 0xc52 PushV
	var_209_object = var_1_object; // 0xc53 MovT
	var_210_object = var_0_object; // 0xc54 MovT
	func_7733(); // 0xc55 NEW_2
	var_211_object = Obj(); var_212_object = Obj(); // 0xc57 PushV
	var_211_object = var_1_object; // 0xc58 MovT
	var_212_object = var_0_object; // 0xc59 MovT
	func_7790(var_212_object); // 0xc5a NEW_2
	
Label_3164:
	var_213_int = 7436; // 0xc5c PushI
	var_214_bool = var_57_cvector == var_213_int; // 0xc5d Eq
	if(var_214_bool == 0) goto Label_3172; // 0xc5e JumpB
	var_215_object = Obj(); var_216_object = Obj(); // 0xc5f PushV
	var_215_object = var_1_object; // 0xc60 MovT
	var_216_object = var_0_object; // 0xc61 MovT
	func_7837(); // 0xc62 NEW_2
	
Label_3172:
	var_217_int = 7284; // 0xc64 PushI
	var_218_bool = var_57_cvector == var_217_int; // 0xc65 Eq
	if(var_218_bool == 0) goto Label_3185; // 0xc66 JumpB
	var_219_object = Obj(); var_220_object = Obj(); // 0xc67 PushV
	var_219_object = var_1_object; // 0xc68 MovT
	var_220_object = var_0_object; // 0xc69 MovT
	func_8000(); // 0xc6a NEW_2
	var_225_object = Obj(); var_226_object = Obj(); // 0xc6c PushV
	var_225_object = var_1_object; // 0xc6d MovT
	var_226_object = var_0_object; // 0xc6e MovT
	func_7784(); // 0xc6f NEW_2
	
Label_3185:
	var_229_int = 7795; // 0xc71 PushI
	var_230_bool = var_57_cvector == var_229_int; // 0xc72 Eq
	if(var_230_bool == 0) goto Label_3198; // 0xc73 JumpB
	var_231_object = Obj(); var_232_object = Obj(); // 0xc74 PushV
	var_231_object = var_1_object; // 0xc75 MovT
	var_232_object = var_0_object; // 0xc76 MovT
	func_7847(); // 0xc77 NEW_2
	var_256_object = Obj(); var_257_object = Obj(); // 0xc79 PushV
	var_256_object = var_1_object; // 0xc7a MovT
	var_257_object = var_0_object; // 0xc7b MovT
	func_7984(); // 0xc7c NEW_2
	
Label_3198:
	var_263_int = 7798; // 0xc7e PushI
	var_264_bool = var_57_cvector == var_263_int; // 0xc7f Eq
	if(var_264_bool == 0) goto Label_3211; // 0xc80 JumpB
	var_265_object = Obj(); var_266_object = Obj(); // 0xc81 PushV
	var_265_object = var_1_object; // 0xc82 MovT
	var_266_object = var_0_object; // 0xc83 MovT
	func_7847(); // 0xc84 NEW_2
	var_267_object = Obj(); var_268_object = Obj(); // 0xc86 PushV
	var_267_object = var_1_object; // 0xc87 MovT
	var_268_object = var_0_object; // 0xc88 MovT
	func_7984(); // 0xc89 NEW_2
	
Label_3211:
	var_269_int = 7799; // 0xc8b PushI
	var_270_bool = var_57_cvector == var_269_int; // 0xc8c Eq
	if(var_270_bool == 0) goto Label_3224; // 0xc8d JumpB
	var_271_object = Obj(); var_272_object = Obj(); // 0xc8e PushV
	var_271_object = var_1_object; // 0xc8f MovT
	var_272_object = var_0_object; // 0xc90 MovT
	func_7847(); // 0xc91 NEW_2
	var_273_object = Obj(); var_274_object = Obj(); // 0xc93 PushV
	var_273_object = var_1_object; // 0xc94 MovT
	var_274_object = var_0_object; // 0xc95 MovT
	func_7984(); // 0xc96 NEW_2
	
Label_3224:
	var_275_int = 7794; // 0xc98 PushI
	var_276_bool = var_57_cvector == var_275_int; // 0xc99 Eq
	if(var_276_bool == 0) goto Label_3232; // 0xc9a JumpB
	var_277_object = Obj(); var_278_object = Obj(); // 0xc9b PushV
	var_277_object = var_1_object; // 0xc9c MovT
	var_278_object = var_0_object; // 0xc9d MovT
	func_7784(); // 0xc9e NEW_2
	
Label_3232:
	var_279_int = 7801; // 0xca0 PushI
	var_280_bool = var_57_cvector == var_279_int; // 0xca1 Eq
	if(var_280_bool == 0) goto Label_3245; // 0xca2 JumpB
	var_281_object = Obj(); var_282_object = Obj(); // 0xca3 PushV
	var_281_object = var_1_object; // 0xca4 MovT
	var_282_object = var_0_object; // 0xca5 MovT
	func_7811(); // 0xca6 NEW_2
	var_283_object = Obj(); var_284_object = Obj(); // 0xca8 PushV
	var_283_object = var_1_object; // 0xca9 MovT
	var_284_object = var_0_object; // 0xcaa MovT
	func_7889(); // 0xcab NEW_2
	
Label_3245:
	var_285_int = 7279; // 0xcad PushI
	var_286_bool = var_56_bool == var_285_int; // 0xcae Eq
	if(var_286_bool == 0) goto Label_3432; // 0xcaf JumpB
	var_287_bool = 0; var_288_object = Obj(); // 0xcb0 PushV
	var_288_object = var_1_object; // 0xcb1 MovT
	func_8367(var_288_object); // 0xcb2 NEW_2
	if(var_287_bool == 0) goto Label_3278; // 0xcb4 JumpB
	var_295_object = Obj(); var_296_object = Obj(); // 0xcb5 PushV
	var_295_object = var_1_object; // 0xcb6 MovT
	var_296_object = var_0_object; // 0xcb7 MovT
	func_8318(); // 0xcb8 NEW_2
	var_299_string = ""; // 0xcba PushV
	var_299_string = "Neutral"; // 0xcbb MovS
	func_3048(var_57_cvector, var_299_string); // 0xcbc NEW_2
	var_316_int = 506610; // 0xcbe PushI
	SetMessage(var_316_int); // 0xcbf TObjFunc
	ClearReplies(); // 0xcc1 TObjFunc
	var_317_int = 506611; // 0xcc3 PushI
	var_318_int = 7748; // 0xcc4 PushI
	var_319_int = 7280; // 0xcc5 PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0xcc6 TObjFunc
	var_320_int = 507066; // 0xcc8 PushI
	var_321_int = 7748; // 0xcc9 PushI
	var_322_int = 7784; // 0xcca PushI
	AddReply(var_320_int, var_321_int, var_322_int); // 0xccb TObjFunc
	return 0; // 0xccd Return
	
Label_3278:
	var_323_bool = 0; // 0xcce PushV
	var_323_bool = 0; // 0xccf MovB
	var_324_bool = 0; // 0xcd0 PushV
	var_324_bool = 0; // 0xcd1 MovB
	var_325_bool = 0; var_326_object = Obj(); // 0xcd2 PushV
	var_326_object = var_1_object; // 0xcd3 MovT
	func_8379(var_326_object); // 0xcd4 NEW_2
	if(var_325_bool == 0) goto Label_3293; // 0xcd6 JumpB
	var_331_bool = 0; var_332_object = Obj(); // 0xcd7 PushV
	var_332_object = var_1_object; // 0xcd8 MovT
	func_8427(var_332_object); // 0xcd9 NEW_2
	if(var_331_bool == 0) goto Label_3293; // 0xcdb JumpB
	var_324_bool = 1; // 0xcdc MovB
	
Label_3293:
	if(var_324_bool == 0) goto Label_3300; // 0xcdd JumpB
	var_333_bool = 0; var_334_object = Obj(); // 0xcde PushV
	var_334_object = var_1_object; // 0xcdf MovT
	func_8432(var_334_object); // 0xce0 NEW_2
	if(var_333_bool == 0) goto Label_3300; // 0xce2 JumpB
	var_323_bool = 1; // 0xce3 MovB
	
Label_3300:
	if(var_323_bool == 0) goto Label_3331; // 0xce4 JumpB
	var_339_object = Obj(); var_340_object = Obj(); // 0xce5 PushV
	var_339_object = var_1_object; // 0xce6 MovT
	var_340_object = var_0_object; // 0xce7 MovT
	func_7778(); // 0xce8 NEW_2
	var_343_string = ""; // 0xcea PushV
	var_343_string = "Neutral"; // 0xceb MovS
	func_3048(var_57_cvector, var_343_string); // 0xcec NEW_2
	var_344_int = 506731; // 0xcee PushI
	SetMessage(var_344_int); // 0xcef TObjFunc
	ClearReplies(); // 0xcf1 TObjFunc
	var_345_int = 506732; // 0xcf3 PushI
	var_346_int = 7420; // 0xcf4 PushI
	var_347_int = 7419; // 0xcf5 PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0xcf6 TObjFunc
	var_348_int = 506742; // 0xcf8 PushI
	var_349_int = 7420; // 0xcf9 PushI
	var_350_int = 7430; // 0xcfa PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0xcfb TObjFunc
	var_351_int = 506743; // 0xcfd PushI
	var_352_int = 7433; // 0xcfe PushI
	var_353_int = 7432; // 0xcff PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0xd00 TObjFunc
	return 0; // 0xd02 Return
	
Label_3331:
	var_354_string = ""; // 0xd03 PushV
	var_354_string = "Neutral"; // 0xd04 MovS
	func_3048(var_57_cvector, var_354_string); // 0xd05 NEW_2
	var_355_int = 506614; // 0xd07 PushI
	SetMessage(var_355_int); // 0xd08 TObjFunc
	ClearReplies(); // 0xd0a TObjFunc
	var_356_bool = 0; // 0xd0c PushV
	var_356_bool = 0; // 0xd0d MovB
	var_357_bool = 0; var_358_object = Obj(); // 0xd0e PushV
	var_358_object = var_1_object; // 0xd0f MovT
	func_8391(var_358_object); // 0xd10 NEW_2
	if(var_357_bool == 0) goto Label_3353; // 0xd12 JumpB
	var_363_bool = 0; var_364_object = Obj(); // 0xd13 PushV
	var_364_object = var_1_object; // 0xd14 MovT
	func_8415(var_364_object); // 0xd15 NEW_2
	if(var_363_bool == 0) goto Label_3353; // 0xd17 JumpB
	var_356_bool = 1; // 0xd18 MovB
	
Label_3353:
	if(var_356_bool == 0) goto Label_3359; // 0xd19 JumpB
	var_369_int = 506615; // 0xd1a PushI
	var_370_int = 7282; // 0xd1b PushI
	var_371_int = 7284; // 0xd1c PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0xd1d TObjFunc
	
Label_3359:
	var_372_bool = 0; // 0xd1f PushV
	var_372_bool = 1; // 0xd20 MovB
	var_373_bool = 0; // 0xd21 PushV
	var_373_bool = 0; // 0xd22 MovB
	var_374_bool = 0; // 0xd23 PushV
	var_374_bool = 0; // 0xd24 MovB
	var_375_bool = 0; var_376_object = Obj(); // 0xd25 PushV
	var_376_object = var_1_object; // 0xd26 MovT
	func_8456(var_376_object); // 0xd27 NEW_2
	if(var_375_bool == 0) goto Label_3376; // 0xd29 JumpB
	var_381_bool = 0; var_382_object = Obj(); // 0xd2a PushV
	var_382_object = var_1_object; // 0xd2b MovT
	func_8391(var_382_object); // 0xd2c NEW_2
	if(var_381_bool == 0) goto Label_3376; // 0xd2e JumpB
	var_374_bool = 1; // 0xd2f MovB
	
Label_3376:
	if(var_374_bool == 0) goto Label_3384; // 0xd30 JumpB
	var_383_bool = 0; var_384_object = Obj(); // 0xd31 PushV
	var_384_object = var_1_object; // 0xd32 MovT
	func_8415(var_384_object); // 0xd33 NEW_2
	var_385_bool = var_383_bool == 0; // 0xd35 Not
	if(var_385_bool == 0) goto Label_3384; // 0xd36 JumpB
	var_373_bool = 1; // 0xd37 MovB
	
Label_3384:
	if(var_373_bool == 0) goto Label_3410; // 0xd38 JumpB
	var_386_bool = 0; // 0xd39 PushV
	var_386_bool = 0; // 0xd3a MovB
	var_387_bool = 0; // 0xd3b PushV
	var_387_bool = 0; // 0xd3c MovB
	var_388_bool = 0; var_389_object = Obj(); // 0xd3d PushV
	var_389_object = var_1_object; // 0xd3e MovT
	func_8444(var_389_object); // 0xd3f NEW_2
	if(var_388_bool == 0) goto Label_3400; // 0xd41 JumpB
	var_394_bool = 0; var_395_object = Obj(); // 0xd42 PushV
	var_395_object = var_1_object; // 0xd43 MovT
	func_8391(var_395_object); // 0xd44 NEW_2
	if(var_394_bool == 0) goto Label_3400; // 0xd46 JumpB
	var_387_bool = 1; // 0xd47 MovB
	
Label_3400:
	if(var_387_bool == 0) goto Label_3408; // 0xd48 JumpB
	var_396_bool = 0; var_397_object = Obj(); // 0xd49 PushV
	var_397_object = var_1_object; // 0xd4a MovT
	func_8415(var_397_object); // 0xd4b NEW_2
	var_398_bool = var_396_bool == 0; // 0xd4d Not
	if(var_398_bool == 0) goto Label_3408; // 0xd4e JumpB
	var_386_bool = 1; // 0xd4f MovB
	
Label_3408:
	if(var_386_bool == 0) goto Label_3410; // 0xd50 JumpB
	var_372_bool = 0; // 0xd51 MovB
	
Label_3410:
	if(var_372_bool == 0) goto Label_3416; // 0xd52 JumpB
	var_399_int = 507071; // 0xd53 PushI
	var_400_int = 7282; // 0xd54 PushI
	var_401_int = 7794; // 0xd55 PushI
	AddReply(var_399_int, var_400_int, var_401_int); // 0xd56 TObjFunc
	
Label_3416:
	var_402_bool = 0; var_403_object = Obj(); // 0xd58 PushV
	var_403_object = var_1_object; // 0xd59 MovT
	func_8403(var_403_object); // 0xd5a NEW_2
	if(var_402_bool == 0) goto Label_3426; // 0xd5c JumpB
	var_408_int = 506618; // 0xd5d PushI
	var_409_int = 7800; // 0xd5e PushI
	var_410_int = 7287; // 0xd5f PushI
	AddReply(var_408_int, var_409_int, var_410_int); // 0xd60 TObjFunc
	
Label_3426:
	var_411_int = 507532; // 0xd62 PushI
	var_412_int = -1; // 0xd63 PushI
	var_413_int = 8314; // 0xd64 PushI
	AddReply(var_411_int, var_412_int, var_413_int); // 0xd65 TObjFunc
	return 0; // 0xd67 Return
	
Label_3432:
	var_414_int = 7405; // 0xd68 PushI
	var_415_bool = var_56_bool == var_414_int; // 0xd69 Eq
	if(var_415_bool == 0) goto Label_3435; // 0xd6a JumpB
	
Label_3435:
	var_416_int = 7407; // 0xd6b PushI
	var_417_bool = var_56_bool == var_416_int; // 0xd6c Eq
	if(var_417_bool == 0) goto Label_3458; // 0xd6d JumpB
	var_418_string = ""; // 0xd6e PushV
	var_418_string = "Grief"; // 0xd6f MovS
	func_3048(var_57_cvector, var_418_string); // 0xd70 NEW_2
	var_419_int = 506720; // 0xd72 PushI
	SetMessage(var_419_int); // 0xd73 TObjFunc
	ClearReplies(); // 0xd75 TObjFunc
	var_420_int = 506721; // 0xd77 PushI
	var_421_int = 7409; // 0xd78 PushI
	var_422_int = 7408; // 0xd79 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0xd7a TObjFunc
	var_423_int = 506725; // 0xd7c PushI
	var_424_int = 7413; // 0xd7d PushI
	var_425_int = 7412; // 0xd7e PushI
	AddReply(var_423_int, var_424_int, var_425_int); // 0xd7f TObjFunc
	return 0; // 0xd81 Return
	
Label_3458:
	var_426_int = 7413; // 0xd82 PushI
	var_427_bool = var_56_bool == var_426_int; // 0xd83 Eq
	if(var_427_bool == 0) goto Label_3476; // 0xd84 JumpB
	var_428_string = ""; // 0xd85 PushV
	var_428_string = "Neutral"; // 0xd86 MovS
	func_3048(var_57_cvector, var_428_string); // 0xd87 NEW_2
	var_429_int = 506726; // 0xd89 PushI
	SetMessage(var_429_int); // 0xd8a TObjFunc
	ClearReplies(); // 0xd8c TObjFunc
	var_430_int = 506727; // 0xd8e PushI
	var_431_int = -1; // 0xd8f PushI
	var_432_int = 7414; // 0xd90 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0xd91 TObjFunc
	return 0; // 0xd93 Return
	
Label_3476:
	var_433_int = 7409; // 0xd94 PushI
	var_434_bool = var_56_bool == var_433_int; // 0xd95 Eq
	if(var_434_bool == 0) goto Label_3499; // 0xd96 JumpB
	var_435_string = ""; // 0xd97 PushV
	var_435_string = "Neutral"; // 0xd98 MovS
	func_3048(var_57_cvector, var_435_string); // 0xd99 NEW_2
	var_436_int = 506722; // 0xd9b PushI
	SetMessage(var_436_int); // 0xd9c TObjFunc
	ClearReplies(); // 0xd9e TObjFunc
	var_437_int = 506723; // 0xda0 PushI
	var_438_int = -1; // 0xda1 PushI
	var_439_int = 7410; // 0xda2 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0xda3 TObjFunc
	var_440_int = 506724; // 0xda5 PushI
	var_441_int = -1; // 0xda6 PushI
	var_442_int = 7411; // 0xda7 PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0xda8 TObjFunc
	return 0; // 0xdaa Return
	
Label_3499:
	var_443_int = 7800; // 0xdab PushI
	var_444_bool = var_56_bool == var_443_int; // 0xdac Eq
	if(var_444_bool == 0) goto Label_3517; // 0xdad JumpB
	var_445_string = ""; // 0xdae PushV
	var_445_string = "Neutral"; // 0xdaf MovS
	func_3048(var_57_cvector, var_445_string); // 0xdb0 NEW_2
	var_446_int = 507077; // 0xdb2 PushI
	SetMessage(var_446_int); // 0xdb3 TObjFunc
	ClearReplies(); // 0xdb5 TObjFunc
	var_447_int = 507078; // 0xdb7 PushI
	var_448_int = -1; // 0xdb8 PushI
	var_449_int = 7801; // 0xdb9 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0xdba TObjFunc
	return 0; // 0xdbc Return
	
Label_3517:
	var_450_int = 7282; // 0xdbd PushI
	var_451_bool = var_56_bool == var_450_int; // 0xdbe Eq
	if(var_451_bool == 0) goto Label_3540; // 0xdbf JumpB
	var_452_string = ""; // 0xdc0 PushV
	var_452_string = "Neutral"; // 0xdc1 MovS
	func_3048(var_57_cvector, var_452_string); // 0xdc2 NEW_2
	var_453_int = 506613; // 0xdc4 PushI
	SetMessage(var_453_int); // 0xdc5 TObjFunc
	ClearReplies(); // 0xdc7 TObjFunc
	var_454_int = 507072; // 0xdc9 PushI
	var_455_int = -1; // 0xdca PushI
	var_456_int = 7795; // 0xdcb PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0xdcc TObjFunc
	var_457_int = 507073; // 0xdce PushI
	var_458_int = 7797; // 0xdcf PushI
	var_459_int = 7796; // 0xdd0 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0xdd1 TObjFunc
	return 0; // 0xdd3 Return
	
Label_3540:
	var_460_int = 7797; // 0xdd4 PushI
	var_461_bool = var_56_bool == var_460_int; // 0xdd5 Eq
	if(var_461_bool == 0) goto Label_3563; // 0xdd6 JumpB
	var_462_string = ""; // 0xdd7 PushV
	var_462_string = "Neutral"; // 0xdd8 MovS
	func_3048(var_57_cvector, var_462_string); // 0xdd9 NEW_2
	var_463_int = 507074; // 0xddb PushI
	SetMessage(var_463_int); // 0xddc TObjFunc
	ClearReplies(); // 0xdde TObjFunc
	var_464_int = 507075; // 0xde0 PushI
	var_465_int = -1; // 0xde1 PushI
	var_466_int = 7798; // 0xde2 PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0xde3 TObjFunc
	var_467_int = 507076; // 0xde5 PushI
	var_468_int = -1; // 0xde6 PushI
	var_469_int = 7799; // 0xde7 PushI
	AddReply(var_467_int, var_468_int, var_469_int); // 0xde8 TObjFunc
	return 0; // 0xdea Return
	
Label_3563:
	var_470_int = 7433; // 0xdeb PushI
	var_471_bool = var_56_bool == var_470_int; // 0xdec Eq
	if(var_471_bool == 0) goto Label_3586; // 0xded JumpB
	var_472_string = ""; // 0xdee PushV
	var_472_string = "Grief"; // 0xdef MovS
	func_3048(var_57_cvector, var_472_string); // 0xdf0 NEW_2
	var_473_int = 506744; // 0xdf2 PushI
	SetMessage(var_473_int); // 0xdf3 TObjFunc
	ClearReplies(); // 0xdf5 TObjFunc
	var_474_int = 506745; // 0xdf7 PushI
	var_475_int = 7420; // 0xdf8 PushI
	var_476_int = 7434; // 0xdf9 PushI
	AddReply(var_474_int, var_475_int, var_476_int); // 0xdfa TObjFunc
	var_477_int = 506746; // 0xdfc PushI
	var_478_int = -1; // 0xdfd PushI
	var_479_int = 7436; // 0xdfe PushI
	AddReply(var_477_int, var_478_int, var_479_int); // 0xdff TObjFunc
	return 0; // 0xe01 Return
	
Label_3586:
	var_480_int = 7420; // 0xe02 PushI
	var_481_bool = var_56_bool == var_480_int; // 0xe03 Eq
	if(var_481_bool == 0) goto Label_3609; // 0xe04 JumpB
	var_482_string = ""; // 0xe05 PushV
	var_482_string = "Neutral"; // 0xe06 MovS
	func_3048(var_57_cvector, var_482_string); // 0xe07 NEW_2
	var_483_int = 506733; // 0xe09 PushI
	SetMessage(var_483_int); // 0xe0a TObjFunc
	ClearReplies(); // 0xe0c TObjFunc
	var_484_int = 506734; // 0xe0e PushI
	var_485_int = 7422; // 0xe0f PushI
	var_486_int = 7421; // 0xe10 PushI
	AddReply(var_484_int, var_485_int, var_486_int); // 0xe11 TObjFunc
	var_487_int = 506741; // 0xe13 PushI
	var_488_int = 7422; // 0xe14 PushI
	var_489_int = 7428; // 0xe15 PushI
	AddReply(var_487_int, var_488_int, var_489_int); // 0xe16 TObjFunc
	return 0; // 0xe18 Return
	
Label_3609:
	var_490_int = 7422; // 0xe19 PushI
	var_491_bool = var_56_bool == var_490_int; // 0xe1a Eq
	if(var_491_bool == 0) goto Label_3632; // 0xe1b JumpB
	var_492_string = ""; // 0xe1c PushV
	var_492_string = "Strict"; // 0xe1d MovS
	func_3048(var_57_cvector, var_492_string); // 0xe1e NEW_2
	var_493_int = 506735; // 0xe20 PushI
	SetMessage(var_493_int); // 0xe21 TObjFunc
	ClearReplies(); // 0xe23 TObjFunc
	var_494_int = 506737; // 0xe25 PushI
	var_495_int = 7425; // 0xe26 PushI
	var_496_int = 7424; // 0xe27 PushI
	AddReply(var_494_int, var_495_int, var_496_int); // 0xe28 TObjFunc
	var_497_int = 506736; // 0xe2a PushI
	var_498_int = 7789; // 0xe2b PushI
	var_499_int = 7423; // 0xe2c PushI
	AddReply(var_497_int, var_498_int, var_499_int); // 0xe2d TObjFunc
	return 0; // 0xe2f Return
	
Label_3632:
	var_500_int = 7425; // 0xe30 PushI
	var_501_bool = var_56_bool == var_500_int; // 0xe31 Eq
	if(var_501_bool == 0) goto Label_3655; // 0xe32 JumpB
	var_502_string = ""; // 0xe33 PushV
	var_502_string = "Neutral"; // 0xe34 MovS
	func_3048(var_57_cvector, var_502_string); // 0xe35 NEW_2
	var_503_int = 506738; // 0xe37 PushI
	SetMessage(var_503_int); // 0xe38 TObjFunc
	ClearReplies(); // 0xe3a TObjFunc
	var_504_int = 506739; // 0xe3c PushI
	var_505_int = 7789; // 0xe3d PushI
	var_506_int = 7426; // 0xe3e PushI
	AddReply(var_504_int, var_505_int, var_506_int); // 0xe3f TObjFunc
	var_507_int = 506740; // 0xe41 PushI
	var_508_int = 7789; // 0xe42 PushI
	var_509_int = 7427; // 0xe43 PushI
	AddReply(var_507_int, var_508_int, var_509_int); // 0xe44 TObjFunc
	return 0; // 0xe46 Return
	
Label_3655:
	var_510_int = 7789; // 0xe47 PushI
	var_511_bool = var_56_bool == var_510_int; // 0xe48 Eq
	if(var_511_bool == 0) goto Label_3678; // 0xe49 JumpB
	var_512_string = ""; // 0xe4a PushV
	var_512_string = "Neutral"; // 0xe4b MovS
	func_3048(var_57_cvector, var_512_string); // 0xe4c NEW_2
	var_513_int = 507068; // 0xe4e PushI
	SetMessage(var_513_int); // 0xe4f TObjFunc
	ClearReplies(); // 0xe51 TObjFunc
	var_514_int = 507069; // 0xe53 PushI
	var_515_int = -1; // 0xe54 PushI
	var_516_int = 7790; // 0xe55 PushI
	AddReply(var_514_int, var_515_int, var_516_int); // 0xe56 TObjFunc
	var_517_int = 507070; // 0xe58 PushI
	var_518_int = -1; // 0xe59 PushI
	var_519_int = 7791; // 0xe5a PushI
	AddReply(var_517_int, var_518_int, var_519_int); // 0xe5b TObjFunc
	return 0; // 0xe5d Return
	
Label_3678:
	var_520_int = 7748; // 0xe5e PushI
	var_521_bool = var_56_bool == var_520_int; // 0xe5f Eq
	if(var_521_bool == 0) goto Label_3701; // 0xe60 JumpB
	var_522_string = ""; // 0xe61 PushV
	var_522_string = "Grief"; // 0xe62 MovS
	func_3048(var_57_cvector, var_522_string); // 0xe63 NEW_2
	var_523_int = 507034; // 0xe65 PushI
	SetMessage(var_523_int); // 0xe66 TObjFunc
	ClearReplies(); // 0xe68 TObjFunc
	var_524_int = 507035; // 0xe6a PushI
	var_525_int = 7750; // 0xe6b PushI
	var_526_int = 7749; // 0xe6c PushI
	AddReply(var_524_int, var_525_int, var_526_int); // 0xe6d TObjFunc
	var_527_int = 507051; // 0xe6f PushI
	var_528_int = 7766; // 0xe70 PushI
	var_529_int = 7765; // 0xe71 PushI
	AddReply(var_527_int, var_528_int, var_529_int); // 0xe72 TObjFunc
	return 0; // 0xe74 Return
	
Label_3701:
	var_530_int = 7766; // 0xe75 PushI
	var_531_bool = var_56_bool == var_530_int; // 0xe76 Eq
	if(var_531_bool == 0) goto Label_3719; // 0xe77 JumpB
	var_532_string = ""; // 0xe78 PushV
	var_532_string = "Neutral"; // 0xe79 MovS
	func_3048(var_57_cvector, var_532_string); // 0xe7a NEW_2
	var_533_int = 507052; // 0xe7c PushI
	SetMessage(var_533_int); // 0xe7d TObjFunc
	ClearReplies(); // 0xe7f TObjFunc
	var_534_int = 507053; // 0xe81 PushI
	var_535_int = 7750; // 0xe82 PushI
	var_536_int = 7767; // 0xe83 PushI
	AddReply(var_534_int, var_535_int, var_536_int); // 0xe84 TObjFunc
	return 0; // 0xe86 Return
	
Label_3719:
	var_537_int = 7750; // 0xe87 PushI
	var_538_bool = var_56_bool == var_537_int; // 0xe88 Eq
	if(var_538_bool == 0) goto Label_3737; // 0xe89 JumpB
	var_539_string = ""; // 0xe8a PushV
	var_539_string = "Neutral"; // 0xe8b MovS
	func_3048(var_57_cvector, var_539_string); // 0xe8c NEW_2
	var_540_int = 507036; // 0xe8e PushI
	SetMessage(var_540_int); // 0xe8f TObjFunc
	ClearReplies(); // 0xe91 TObjFunc
	var_541_int = 507037; // 0xe93 PushI
	var_542_int = 7752; // 0xe94 PushI
	var_543_int = 7751; // 0xe95 PushI
	AddReply(var_541_int, var_542_int, var_543_int); // 0xe96 TObjFunc
	return 0; // 0xe98 Return
	
Label_3737:
	var_544_int = 7752; // 0xe99 PushI
	var_545_bool = var_56_bool == var_544_int; // 0xe9a Eq
	if(var_545_bool == 0) goto Label_3760; // 0xe9b JumpB
	var_546_string = ""; // 0xe9c PushV
	var_546_string = "Neutral"; // 0xe9d MovS
	func_3048(var_57_cvector, var_546_string); // 0xe9e NEW_2
	var_547_int = 507038; // 0xea0 PushI
	SetMessage(var_547_int); // 0xea1 TObjFunc
	ClearReplies(); // 0xea3 TObjFunc
	var_548_int = 507039; // 0xea5 PushI
	var_549_int = 7754; // 0xea6 PushI
	var_550_int = 7753; // 0xea7 PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0xea8 TObjFunc
	var_551_int = 507048; // 0xeaa PushI
	var_552_int = 7763; // 0xeab PushI
	var_553_int = 7762; // 0xeac PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0xead TObjFunc
	return 0; // 0xeaf Return
	
Label_3760:
	var_554_int = 7763; // 0xeb0 PushI
	var_555_bool = var_56_bool == var_554_int; // 0xeb1 Eq
	if(var_555_bool == 0) goto Label_3778; // 0xeb2 JumpB
	var_556_string = ""; // 0xeb3 PushV
	var_556_string = "Neutral"; // 0xeb4 MovS
	func_3048(var_57_cvector, var_556_string); // 0xeb5 NEW_2
	var_557_int = 507049; // 0xeb7 PushI
	SetMessage(var_557_int); // 0xeb8 TObjFunc
	ClearReplies(); // 0xeba TObjFunc
	var_558_int = 507054; // 0xebc PushI
	var_559_int = 7759; // 0xebd PushI
	var_560_int = 7770; // 0xebe PushI
	AddReply(var_558_int, var_559_int, var_560_int); // 0xebf TObjFunc
	return 0; // 0xec1 Return
	
Label_3778:
	var_561_int = 7754; // 0xec2 PushI
	var_562_bool = var_56_bool == var_561_int; // 0xec3 Eq
	if(var_562_bool == 0) goto Label_3801; // 0xec4 JumpB
	var_563_string = ""; // 0xec5 PushV
	var_563_string = "Strict"; // 0xec6 MovS
	func_3048(var_57_cvector, var_563_string); // 0xec7 NEW_2
	var_564_int = 507040; // 0xec9 PushI
	SetMessage(var_564_int); // 0xeca TObjFunc
	ClearReplies(); // 0xecc TObjFunc
	var_565_int = 507043; // 0xece PushI
	var_566_int = 7759; // 0xecf PushI
	var_567_int = 7757; // 0xed0 PushI
	AddReply(var_565_int, var_566_int, var_567_int); // 0xed1 TObjFunc
	var_568_int = 507041; // 0xed3 PushI
	var_569_int = 7756; // 0xed4 PushI
	var_570_int = 7755; // 0xed5 PushI
	AddReply(var_568_int, var_569_int, var_570_int); // 0xed6 TObjFunc
	return 0; // 0xed8 Return
	
Label_3801:
	var_571_int = 7756; // 0xed9 PushI
	var_572_bool = var_56_bool == var_571_int; // 0xeda Eq
	if(var_572_bool == 0) goto Label_3819; // 0xedb JumpB
	var_573_string = ""; // 0xedc PushV
	var_573_string = "Neutral"; // 0xedd MovS
	func_3048(var_57_cvector, var_573_string); // 0xede NEW_2
	var_574_int = 507042; // 0xee0 PushI
	SetMessage(var_574_int); // 0xee1 TObjFunc
	ClearReplies(); // 0xee3 TObjFunc
	var_575_int = 507044; // 0xee5 PushI
	var_576_int = 7759; // 0xee6 PushI
	var_577_int = 7758; // 0xee7 PushI
	AddReply(var_575_int, var_576_int, var_577_int); // 0xee8 TObjFunc
	return 0; // 0xeea Return
	
Label_3819:
	var_578_int = 7759; // 0xeeb PushI
	var_579_bool = var_56_bool == var_578_int; // 0xeec Eq
	if(var_579_bool == 0) goto Label_3847; // 0xeed JumpB
	var_580_string = ""; // 0xeee PushV
	var_580_string = "Neutral"; // 0xeef MovS
	func_3048(var_57_cvector, var_580_string); // 0xef0 NEW_2
	var_581_int = 507045; // 0xef2 PushI
	SetMessage(var_581_int); // 0xef3 TObjFunc
	ClearReplies(); // 0xef5 TObjFunc
	var_582_int = 507046; // 0xef7 PushI
	var_583_int = 7761; // 0xef8 PushI
	var_584_int = 7760; // 0xef9 PushI
	AddReply(var_582_int, var_583_int, var_584_int); // 0xefa TObjFunc
	var_585_int = 507067; // 0xefc PushI
	var_586_int = 7761; // 0xefd PushI
	var_587_int = 7787; // 0xefe PushI
	AddReply(var_585_int, var_586_int, var_587_int); // 0xeff TObjFunc
	var_588_int = 507055; // 0xf01 PushI
	var_589_int = 7773; // 0xf02 PushI
	var_590_int = 7772; // 0xf03 PushI
	AddReply(var_588_int, var_589_int, var_590_int); // 0xf04 TObjFunc
	return 0; // 0xf06 Return
	
Label_3847:
	var_591_int = 7773; // 0xf07 PushI
	var_592_bool = var_56_bool == var_591_int; // 0xf08 Eq
	if(var_592_bool == 0) goto Label_3865; // 0xf09 JumpB
	var_593_string = ""; // 0xf0a PushV
	var_593_string = "Grief"; // 0xf0b MovS
	func_3048(var_57_cvector, var_593_string); // 0xf0c NEW_2
	var_594_int = 507056; // 0xf0e PushI
	SetMessage(var_594_int); // 0xf0f TObjFunc
	ClearReplies(); // 0xf11 TObjFunc
	var_595_int = 507057; // 0xf13 PushI
	var_596_int = 7761; // 0xf14 PushI
	var_597_int = 7774; // 0xf15 PushI
	AddReply(var_595_int, var_596_int, var_597_int); // 0xf16 TObjFunc
	return 0; // 0xf18 Return
	
Label_3865:
	var_598_int = 7761; // 0xf19 PushI
	var_599_bool = var_56_bool == var_598_int; // 0xf1a Eq
	if(var_599_bool == 0) goto Label_3888; // 0xf1b JumpB
	var_600_string = ""; // 0xf1c PushV
	var_600_string = "Neutral"; // 0xf1d MovS
	func_3048(var_57_cvector, var_600_string); // 0xf1e NEW_2
	var_601_int = 507047; // 0xf20 PushI
	SetMessage(var_601_int); // 0xf21 TObjFunc
	ClearReplies(); // 0xf23 TObjFunc
	var_602_int = 507058; // 0xf25 PushI
	var_603_int = -1; // 0xf26 PushI
	var_604_int = 7775; // 0xf27 PushI
	AddReply(var_602_int, var_603_int, var_604_int); // 0xf28 TObjFunc
	var_605_int = 507059; // 0xf2a PushI
	var_606_int = 7778; // 0xf2b PushI
	var_607_int = 7777; // 0xf2c PushI
	AddReply(var_605_int, var_606_int, var_607_int); // 0xf2d TObjFunc
	return 0; // 0xf2f Return
	
Label_3888:
	var_608_int = 7778; // 0xf30 PushI
	var_609_bool = var_56_bool == var_608_int; // 0xf31 Eq
	if(var_609_bool == 0) goto Label_3916; // 0xf32 JumpB
	var_610_string = ""; // 0xf33 PushV
	var_610_string = "Neutral"; // 0xf34 MovS
	func_3048(var_57_cvector, var_610_string); // 0xf35 NEW_2
	var_611_int = 507060; // 0xf37 PushI
	SetMessage(var_611_int); // 0xf38 TObjFunc
	ClearReplies(); // 0xf3a TObjFunc
	var_612_int = 507061; // 0xf3c PushI
	var_613_int = -1; // 0xf3d PushI
	var_614_int = 7779; // 0xf3e PushI
	AddReply(var_612_int, var_613_int, var_614_int); // 0xf3f TObjFunc
	var_615_int = 507062; // 0xf41 PushI
	var_616_int = -1; // 0xf42 PushI
	var_617_int = 7780; // 0xf43 PushI
	AddReply(var_615_int, var_616_int, var_617_int); // 0xf44 TObjFunc
	var_618_int = 507063; // 0xf46 PushI
	var_619_int = 7782; // 0xf47 PushI
	var_620_int = 7781; // 0xf48 PushI
	AddReply(var_618_int, var_619_int, var_620_int); // 0xf49 TObjFunc
	return 0; // 0xf4b Return
	
Label_3916:
	var_621_int = 7782; // 0xf4c PushI
	var_622_bool = var_56_bool == var_621_int; // 0xf4d Eq
	if(var_622_bool == 0) goto Label_3934; // 0xf4e JumpB
	var_623_string = ""; // 0xf4f PushV
	var_623_string = "Neutral"; // 0xf50 MovS
	func_3048(var_57_cvector, var_623_string); // 0xf51 NEW_2
	var_624_int = 507064; // 0xf53 PushI
	SetMessage(var_624_int); // 0xf54 TObjFunc
	ClearReplies(); // 0xf56 TObjFunc
	var_625_int = 507065; // 0xf58 PushI
	var_626_int = -1; // 0xf59 PushI
	var_627_int = 7783; // 0xf5a PushI
	AddReply(var_625_int, var_626_int, var_627_int); // 0xf5b TObjFunc
	return 0; // 0xf5d Return
	
Label_3934:
	var_3_string = 1; // 0xf5e TMovB
	var_628_bool = 0; // 0xf5f PushV
	func_7709(var_628_bool); // 0xf60 NEW_2
	if(var_628_bool == 0) goto Label_3942; // 0xf62 JumpB
	lshStopAnimation(); // 0xf63 Func
	goto Label_3944; // 0xf65 Jump
	
Label_3944:
	return 0; // 0xf68 Return
	
Label_3942:
	StopAnimation(); // 0xf66 Func
	
Label_3946:
	return 0; // 0xf6a Return
}


task_13_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_int, var_36_int, var_37_object, var_38_object, var_39_object, var_40_string, var_41_bool, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x104c PushI
	if(var_58_int == 0) goto Label_4741; // 0x104d JumpB
	func_7468(); // 0x104f NEW_2
	var_60_int = 9978; // 0x1051 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x1052 Eq
	if(var_61_bool == 0) goto Label_4185; // 0x1053 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x1054 PushV
	var_62_object = var_1_object; // 0x1055 MovT
	var_63_object = var_0_object; // 0x1056 MovT
	func_7767(); // 0x1057 NEW_2
	
Label_4185:
	var_87_int = 9979; // 0x1059 PushI
	var_88_bool = var_57_cvector == var_87_int; // 0x105a Eq
	if(var_88_bool == 0) goto Label_4193; // 0x105b JumpB
	var_89_object = Obj(); var_90_object = Obj(); // 0x105c PushV
	var_89_object = var_1_object; // 0x105d MovT
	var_90_object = var_0_object; // 0x105e MovT
	func_7767(); // 0x105f NEW_2
	
Label_4193:
	var_91_int = 9975; // 0x1061 PushI
	var_92_bool = var_57_cvector == var_91_int; // 0x1062 Eq
	if(var_92_bool == 0) goto Label_4201; // 0x1063 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0x1064 PushV
	var_93_object = var_1_object; // 0x1065 MovT
	var_94_object = var_0_object; // 0x1066 MovT
	func_7767(); // 0x1067 NEW_2
	
Label_4201:
	var_95_int = 9692; // 0x1069 PushI
	var_96_bool = var_57_cvector == var_95_int; // 0x106a Eq
	if(var_96_bool == 0) goto Label_4209; // 0x106b JumpB
	var_97_object = Obj(); var_98_object = Obj(); // 0x106c PushV
	var_97_object = var_1_object; // 0x106d MovT
	var_98_object = var_0_object; // 0x106e MovT
	func_7943(); // 0x106f NEW_2
	
Label_4209:
	var_101_int = 9724; // 0x1071 PushI
	var_102_bool = var_57_cvector == var_101_int; // 0x1072 Eq
	if(var_102_bool == 0) goto Label_4232; // 0x1073 JumpB
	var_103_object = Obj(); var_104_object = Obj(); // 0x1074 PushV
	var_103_object = var_1_object; // 0x1075 MovT
	var_104_object = var_0_object; // 0x1076 MovT
	func_7943(); // 0x1077 NEW_2
	var_105_object = Obj(); var_106_object = Obj(); // 0x1079 PushV
	var_105_object = var_1_object; // 0x107a MovT
	var_106_object = var_0_object; // 0x107b MovT
	func_7961(); // 0x107c NEW_2
	var_133_object = Obj(); var_134_object = Obj(); // 0x107e PushV
	var_133_object = var_1_object; // 0x107f MovT
	var_134_object = var_0_object; // 0x1080 MovT
	func_7949(); // 0x1081 NEW_2
	var_137_object = Obj(); var_138_object = Obj(); // 0x1083 PushV
	var_137_object = var_1_object; // 0x1084 MovT
	var_138_object = var_0_object; // 0x1085 MovT
	func_7927(); // 0x1086 NEW_2
	
Label_4232:
	var_163_int = 9712; // 0x1088 PushI
	var_164_bool = var_57_cvector == var_163_int; // 0x1089 Eq
	if(var_164_bool == 0) goto Label_4240; // 0x108a JumpB
	var_165_object = Obj(); var_166_object = Obj(); // 0x108b PushV
	var_165_object = var_1_object; // 0x108c MovT
	var_166_object = var_0_object; // 0x108d MovT
	func_7949(); // 0x108e NEW_2
	
Label_4240:
	var_167_int = 9964; // 0x1090 PushI
	var_168_bool = var_56_bool == var_167_int; // 0x1091 Eq
	if(var_168_bool == 0) goto Label_4326; // 0x1092 JumpB
	var_169_bool = 0; // 0x1093 PushV
	var_169_bool = 0; // 0x1094 MovB
	var_170_bool = 0; var_171_object = Obj(); // 0x1095 PushV
	var_171_object = var_1_object; // 0x1096 MovT
	func_8504(var_171_object); // 0x1097 NEW_2
	if(var_170_bool == 0) goto Label_4256; // 0x1099 JumpB
	var_178_bool = 0; var_179_object = Obj(); // 0x109a PushV
	var_179_object = var_1_object; // 0x109b MovT
	func_8492(var_179_object); // 0x109c NEW_2
	if(var_178_bool == 0) goto Label_4256; // 0x109e JumpB
	var_169_bool = 1; // 0x109f MovB
	
Label_4256:
	if(var_169_bool == 0) goto Label_4277; // 0x10a0 JumpB
	var_184_object = Obj(); var_185_object = Obj(); // 0x10a1 PushV
	var_184_object = var_1_object; // 0x10a2 MovT
	var_185_object = var_0_object; // 0x10a3 MovT
	func_7955(); // 0x10a4 NEW_2
	var_188_string = ""; // 0x10a6 PushV
	var_188_string = "Neutral"; // 0x10a7 MovS
	func_4149(var_57_cvector, var_188_string); // 0x10a8 NEW_2
	var_205_int = 509086; // 0x10aa PushI
	SetMessage(var_205_int); // 0x10ab TObjFunc
	ClearReplies(); // 0x10ad TObjFunc
	var_206_int = 509087; // 0x10af PushI
	var_207_int = 9969; // 0x10b0 PushI
	var_208_int = 9965; // 0x10b1 PushI
	AddReply(var_206_int, var_207_int, var_208_int); // 0x10b2 TObjFunc
	return 0; // 0x10b4 Return
	
Label_4277:
	var_209_string = ""; // 0x10b5 PushV
	var_209_string = "Neutral"; // 0x10b6 MovS
	func_4149(var_57_cvector, var_209_string); // 0x10b7 NEW_2
	var_210_int = 508854; // 0x10b9 PushI
	SetMessage(var_210_int); // 0x10ba TObjFunc
	ClearReplies(); // 0x10bc TObjFunc
	var_211_bool = 0; // 0x10be PushV
	var_211_bool = 0; // 0x10bf MovB
	var_212_bool = 0; var_213_object = Obj(); // 0x10c0 PushV
	var_213_object = var_1_object; // 0x10c1 MovT
	func_8468(var_213_object); // 0x10c2 NEW_2
	if(var_212_bool == 0) goto Label_4299; // 0x10c4 JumpB
	var_218_bool = 0; var_219_object = Obj(); // 0x10c5 PushV
	var_219_object = var_1_object; // 0x10c6 MovT
	func_8516(var_219_object); // 0x10c7 NEW_2
	if(var_218_bool == 0) goto Label_4299; // 0x10c9 JumpB
	var_211_bool = 1; // 0x10ca MovB
	
Label_4299:
	if(var_211_bool == 0) goto Label_4305; // 0x10cb JumpB
	var_224_int = 508840; // 0x10cc PushI
	var_225_int = 9693; // 0x10cd PushI
	var_226_int = 9692; // 0x10ce PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x10cf TObjFunc
	
Label_4305:
	var_227_bool = 0; var_228_object = Obj(); // 0x10d1 PushV
	var_228_object = var_1_object; // 0x10d2 MovT
	func_8480(var_228_object); // 0x10d3 NEW_2
	if(var_227_bool == 0) goto Label_4315; // 0x10d5 JumpB
	var_233_int = 508856; // 0x10d6 PushI
	var_234_int = 9691; // 0x10d7 PushI
	var_235_int = 9712; // 0x10d8 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x10d9 TObjFunc
	
Label_4315:
	var_236_int = 511133; // 0x10db PushI
	var_237_int = -1; // 0x10dc PushI
	var_238_int = 12322; // 0x10dd PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x10de TObjFunc
	var_239_int = 534068; // 0x10e0 PushI
	var_240_int = -1; // 0x10e1 PushI
	var_241_int = 35658; // 0x10e2 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x10e3 TObjFunc
	return 0; // 0x10e5 Return
	
Label_4326:
	var_242_int = 13175; // 0x10e6 PushI
	var_243_bool = var_56_bool == var_242_int; // 0x10e7 Eq
	if(var_243_bool == 0) goto Label_4329; // 0x10e8 JumpB
	
Label_4329:
	var_244_int = 35751; // 0x10e9 PushI
	var_245_bool = var_56_bool == var_244_int; // 0x10ea Eq
	if(var_245_bool == 0) goto Label_4352; // 0x10eb JumpB
	var_246_string = ""; // 0x10ec PushV
	var_246_string = "Gratitude"; // 0x10ed MovS
	func_4149(var_57_cvector, var_246_string); // 0x10ee NEW_2
	var_247_int = 534171; // 0x10f0 PushI
	SetMessage(var_247_int); // 0x10f1 TObjFunc
	ClearReplies(); // 0x10f3 TObjFunc
	var_248_int = 534172; // 0x10f5 PushI
	var_249_int = 13177; // 0x10f6 PushI
	var_250_int = 35752; // 0x10f7 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x10f8 TObjFunc
	var_251_int = 534173; // 0x10fa PushI
	var_252_int = 13177; // 0x10fb PushI
	var_253_int = 35753; // 0x10fc PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x10fd TObjFunc
	return 0; // 0x10ff Return
	
Label_4352:
	var_254_int = 13177; // 0x1100 PushI
	var_255_bool = var_56_bool == var_254_int; // 0x1101 Eq
	if(var_255_bool == 0) goto Label_4375; // 0x1102 JumpB
	var_256_string = ""; // 0x1103 PushV
	var_256_string = "Neutral"; // 0x1104 MovS
	func_4149(var_57_cvector, var_256_string); // 0x1105 NEW_2
	var_257_int = 511966; // 0x1107 PushI
	SetMessage(var_257_int); // 0x1108 TObjFunc
	ClearReplies(); // 0x110a TObjFunc
	var_258_int = 511967; // 0x110c PushI
	var_259_int = 13179; // 0x110d PushI
	var_260_int = 13178; // 0x110e PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x110f TObjFunc
	var_261_int = 511975; // 0x1111 PushI
	var_262_int = 13179; // 0x1112 PushI
	var_263_int = 13187; // 0x1113 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x1114 TObjFunc
	return 0; // 0x1116 Return
	
Label_4375:
	var_264_int = 13179; // 0x1117 PushI
	var_265_bool = var_56_bool == var_264_int; // 0x1118 Eq
	if(var_265_bool == 0) goto Label_4398; // 0x1119 JumpB
	var_266_string = ""; // 0x111a PushV
	var_266_string = "Neutral"; // 0x111b MovS
	func_4149(var_57_cvector, var_266_string); // 0x111c NEW_2
	var_267_int = 511968; // 0x111e PushI
	SetMessage(var_267_int); // 0x111f TObjFunc
	ClearReplies(); // 0x1121 TObjFunc
	var_268_int = 511969; // 0x1123 PushI
	var_269_int = 13181; // 0x1124 PushI
	var_270_int = 13180; // 0x1125 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x1126 TObjFunc
	var_271_int = 511974; // 0x1128 PushI
	var_272_int = 13181; // 0x1129 PushI
	var_273_int = 13185; // 0x112a PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x112b TObjFunc
	return 0; // 0x112d Return
	
Label_4398:
	var_274_int = 13181; // 0x112e PushI
	var_275_bool = var_56_bool == var_274_int; // 0x112f Eq
	if(var_275_bool == 0) goto Label_4426; // 0x1130 JumpB
	var_276_string = ""; // 0x1131 PushV
	var_276_string = "Neutral"; // 0x1132 MovS
	func_4149(var_57_cvector, var_276_string); // 0x1133 NEW_2
	var_277_int = 511970; // 0x1135 PushI
	SetMessage(var_277_int); // 0x1136 TObjFunc
	ClearReplies(); // 0x1138 TObjFunc
	var_278_int = 511971; // 0x113a PushI
	var_279_int = -1; // 0x113b PushI
	var_280_int = 13182; // 0x113c PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x113d TObjFunc
	var_281_int = 511972; // 0x113f PushI
	var_282_int = -1; // 0x1140 PushI
	var_283_int = 13183; // 0x1141 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x1142 TObjFunc
	var_284_int = 511973; // 0x1144 PushI
	var_285_int = -1; // 0x1145 PushI
	var_286_int = 13184; // 0x1146 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x1147 TObjFunc
	return 0; // 0x1149 Return
	
Label_4426:
	var_287_int = 9691; // 0x114a PushI
	var_288_bool = var_56_bool == var_287_int; // 0x114b Eq
	if(var_288_bool == 0) goto Label_4444; // 0x114c JumpB
	var_289_string = ""; // 0x114d PushV
	var_289_string = "Neutral"; // 0x114e MovS
	func_4149(var_57_cvector, var_289_string); // 0x114f NEW_2
	var_290_int = 508839; // 0x1151 PushI
	SetMessage(var_290_int); // 0x1152 TObjFunc
	ClearReplies(); // 0x1154 TObjFunc
	var_291_int = 508857; // 0x1156 PushI
	var_292_int = 9714; // 0x1157 PushI
	var_293_int = 9713; // 0x1158 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x1159 TObjFunc
	return 0; // 0x115b Return
	
Label_4444:
	var_294_int = 9714; // 0x115c PushI
	var_295_bool = var_56_bool == var_294_int; // 0x115d Eq
	if(var_295_bool == 0) goto Label_4462; // 0x115e JumpB
	var_296_string = ""; // 0x115f PushV
	var_296_string = "Neutral"; // 0x1160 MovS
	func_4149(var_57_cvector, var_296_string); // 0x1161 NEW_2
	var_297_int = 508858; // 0x1163 PushI
	SetMessage(var_297_int); // 0x1164 TObjFunc
	ClearReplies(); // 0x1166 TObjFunc
	var_298_int = 508859; // 0x1168 PushI
	var_299_int = -1; // 0x1169 PushI
	var_300_int = 9715; // 0x116a PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x116b TObjFunc
	return 0; // 0x116d Return
	
Label_4462:
	var_301_int = 9687; // 0x116e PushI
	var_302_bool = var_56_bool == var_301_int; // 0x116f Eq
	if(var_302_bool == 0) goto Label_4465; // 0x1170 JumpB
	
Label_4465:
	var_303_int = 9689; // 0x1171 PushI
	var_304_bool = var_56_bool == var_303_int; // 0x1172 Eq
	if(var_304_bool == 0) goto Label_4483; // 0x1173 JumpB
	var_305_string = ""; // 0x1174 PushV
	var_305_string = "Neutral"; // 0x1175 MovS
	func_4149(var_57_cvector, var_305_string); // 0x1176 NEW_2
	var_306_int = 508837; // 0x1178 PushI
	SetMessage(var_306_int); // 0x1179 TObjFunc
	ClearReplies(); // 0x117b TObjFunc
	var_307_int = 508849; // 0x117d PushI
	var_308_int = 9703; // 0x117e PushI
	var_309_int = 9702; // 0x117f PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x1180 TObjFunc
	return 0; // 0x1182 Return
	
Label_4483:
	var_310_int = 9703; // 0x1183 PushI
	var_311_bool = var_56_bool == var_310_int; // 0x1184 Eq
	if(var_311_bool == 0) goto Label_4501; // 0x1185 JumpB
	var_312_string = ""; // 0x1186 PushV
	var_312_string = "Strict"; // 0x1187 MovS
	func_4149(var_57_cvector, var_312_string); // 0x1188 NEW_2
	var_313_int = 508850; // 0x118a PushI
	SetMessage(var_313_int); // 0x118b TObjFunc
	ClearReplies(); // 0x118d TObjFunc
	var_314_int = 508851; // 0x118f PushI
	var_315_int = -1; // 0x1190 PushI
	var_316_int = 9704; // 0x1191 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x1192 TObjFunc
	return 0; // 0x1194 Return
	
Label_4501:
	var_317_int = 9693; // 0x1195 PushI
	var_318_bool = var_56_bool == var_317_int; // 0x1196 Eq
	if(var_318_bool == 0) goto Label_4529; // 0x1197 JumpB
	var_319_string = ""; // 0x1198 PushV
	var_319_string = "Neutral"; // 0x1199 MovS
	func_4149(var_57_cvector, var_319_string); // 0x119a NEW_2
	var_320_int = 508841; // 0x119c PushI
	SetMessage(var_320_int); // 0x119d TObjFunc
	ClearReplies(); // 0x119f TObjFunc
	var_321_int = 508842; // 0x11a1 PushI
	var_322_int = 9695; // 0x11a2 PushI
	var_323_int = 9694; // 0x11a3 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x11a4 TObjFunc
	var_324_int = 508846; // 0x11a6 PushI
	var_325_int = 9699; // 0x11a7 PushI
	var_326_int = 9698; // 0x11a8 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x11a9 TObjFunc
	var_327_int = 508861; // 0x11ab PushI
	var_328_int = 9719; // 0x11ac PushI
	var_329_int = 9718; // 0x11ad PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x11ae TObjFunc
	return 0; // 0x11b0 Return
	
Label_4529:
	var_330_int = 9719; // 0x11b1 PushI
	var_331_bool = var_56_bool == var_330_int; // 0x11b2 Eq
	if(var_331_bool == 0) goto Label_4552; // 0x11b3 JumpB
	var_332_string = ""; // 0x11b4 PushV
	var_332_string = "Strict"; // 0x11b5 MovS
	func_4149(var_57_cvector, var_332_string); // 0x11b6 NEW_2
	var_333_int = 508862; // 0x11b8 PushI
	SetMessage(var_333_int); // 0x11b9 TObjFunc
	ClearReplies(); // 0x11bb TObjFunc
	var_334_int = 508863; // 0x11bd PushI
	var_335_int = 9716; // 0x11be PushI
	var_336_int = 9720; // 0x11bf PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x11c0 TObjFunc
	var_337_int = 508867; // 0x11c2 PushI
	var_338_int = 9695; // 0x11c3 PushI
	var_339_int = 9725; // 0x11c4 PushI
	AddReply(var_337_int, var_338_int, var_339_int); // 0x11c5 TObjFunc
	return 0; // 0x11c7 Return
	
Label_4552:
	var_340_int = 9699; // 0x11c8 PushI
	var_341_bool = var_56_bool == var_340_int; // 0x11c9 Eq
	if(var_341_bool == 0) goto Label_4570; // 0x11ca JumpB
	var_342_string = ""; // 0x11cb PushV
	var_342_string = "Neutral"; // 0x11cc MovS
	func_4149(var_57_cvector, var_342_string); // 0x11cd NEW_2
	var_343_int = 508847; // 0x11cf PushI
	SetMessage(var_343_int); // 0x11d0 TObjFunc
	ClearReplies(); // 0x11d2 TObjFunc
	var_344_int = 508848; // 0x11d4 PushI
	var_345_int = 9695; // 0x11d5 PushI
	var_346_int = 9700; // 0x11d6 PushI
	AddReply(var_344_int, var_345_int, var_346_int); // 0x11d7 TObjFunc
	return 0; // 0x11d9 Return
	
Label_4570:
	var_347_int = 9695; // 0x11da PushI
	var_348_bool = var_56_bool == var_347_int; // 0x11db Eq
	if(var_348_bool == 0) goto Label_4593; // 0x11dc JumpB
	var_349_string = ""; // 0x11dd PushV
	var_349_string = "Grief"; // 0x11de MovS
	func_4149(var_57_cvector, var_349_string); // 0x11df NEW_2
	var_350_int = 508843; // 0x11e1 PushI
	SetMessage(var_350_int); // 0x11e2 TObjFunc
	ClearReplies(); // 0x11e4 TObjFunc
	var_351_int = 508844; // 0x11e6 PushI
	var_352_int = 9716; // 0x11e7 PushI
	var_353_int = 9696; // 0x11e8 PushI
	AddReply(var_351_int, var_352_int, var_353_int); // 0x11e9 TObjFunc
	var_354_int = 508845; // 0x11eb PushI
	var_355_int = 9716; // 0x11ec PushI
	var_356_int = 9697; // 0x11ed PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x11ee TObjFunc
	return 0; // 0x11f0 Return
	
Label_4593:
	var_357_int = 9716; // 0x11f1 PushI
	var_358_bool = var_56_bool == var_357_int; // 0x11f2 Eq
	if(var_358_bool == 0) goto Label_4616; // 0x11f3 JumpB
	var_359_string = ""; // 0x11f4 PushV
	var_359_string = "Neutral"; // 0x11f5 MovS
	func_4149(var_57_cvector, var_359_string); // 0x11f6 NEW_2
	var_360_int = 508860; // 0x11f8 PushI
	SetMessage(var_360_int); // 0x11f9 TObjFunc
	ClearReplies(); // 0x11fb TObjFunc
	var_361_int = 508864; // 0x11fd PushI
	var_362_int = 9723; // 0x11fe PushI
	var_363_int = 9722; // 0x11ff PushI
	AddReply(var_361_int, var_362_int, var_363_int); // 0x1200 TObjFunc
	var_364_int = 534069; // 0x1202 PushI
	var_365_int = 9723; // 0x1203 PushI
	var_366_int = 35659; // 0x1204 PushI
	AddReply(var_364_int, var_365_int, var_366_int); // 0x1205 TObjFunc
	return 0; // 0x1207 Return
	
Label_4616:
	var_367_int = 9723; // 0x1208 PushI
	var_368_bool = var_56_bool == var_367_int; // 0x1209 Eq
	if(var_368_bool == 0) goto Label_4634; // 0x120a JumpB
	var_369_string = ""; // 0x120b PushV
	var_369_string = "Neutral"; // 0x120c MovS
	func_4149(var_57_cvector, var_369_string); // 0x120d NEW_2
	var_370_int = 508865; // 0x120f PushI
	SetMessage(var_370_int); // 0x1210 TObjFunc
	ClearReplies(); // 0x1212 TObjFunc
	var_371_int = 508866; // 0x1214 PushI
	var_372_int = -1; // 0x1215 PushI
	var_373_int = 9724; // 0x1216 PushI
	AddReply(var_371_int, var_372_int, var_373_int); // 0x1217 TObjFunc
	return 0; // 0x1219 Return
	
Label_4634:
	var_374_int = 9967; // 0x121a PushI
	var_375_bool = var_56_bool == var_374_int; // 0x121b Eq
	if(var_375_bool == 0) goto Label_4637; // 0x121c JumpB
	
Label_4637:
	var_376_int = 9969; // 0x121d PushI
	var_377_bool = var_56_bool == var_376_int; // 0x121e Eq
	if(var_377_bool == 0) goto Label_4660; // 0x121f JumpB
	var_378_string = ""; // 0x1220 PushV
	var_378_string = "Neutral"; // 0x1221 MovS
	func_4149(var_57_cvector, var_378_string); // 0x1222 NEW_2
	var_379_int = 509091; // 0x1224 PushI
	SetMessage(var_379_int); // 0x1225 TObjFunc
	ClearReplies(); // 0x1227 TObjFunc
	var_380_int = 509092; // 0x1229 PushI
	var_381_int = 9971; // 0x122a PushI
	var_382_int = 9970; // 0x122b PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x122c TObjFunc
	var_383_int = 534066; // 0x122e PushI
	var_384_int = 9974; // 0x122f PushI
	var_385_int = 35654; // 0x1230 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x1231 TObjFunc
	return 0; // 0x1233 Return
	
Label_4660:
	var_386_int = 9971; // 0x1234 PushI
	var_387_bool = var_56_bool == var_386_int; // 0x1235 Eq
	if(var_387_bool == 0) goto Label_4683; // 0x1236 JumpB
	var_388_string = ""; // 0x1237 PushV
	var_388_string = "Neutral"; // 0x1238 MovS
	func_4149(var_57_cvector, var_388_string); // 0x1239 NEW_2
	var_389_int = 509093; // 0x123b PushI
	SetMessage(var_389_int); // 0x123c TObjFunc
	ClearReplies(); // 0x123e TObjFunc
	var_390_int = 509094; // 0x1240 PushI
	var_391_int = 9974; // 0x1241 PushI
	var_392_int = 9973; // 0x1242 PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x1243 TObjFunc
	var_393_int = 534067; // 0x1245 PushI
	var_394_int = 9977; // 0x1246 PushI
	var_395_int = 35656; // 0x1247 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x1248 TObjFunc
	return 0; // 0x124a Return
	
Label_4683:
	var_396_int = 9974; // 0x124b PushI
	var_397_bool = var_56_bool == var_396_int; // 0x124c Eq
	if(var_397_bool == 0) goto Label_4706; // 0x124d JumpB
	var_398_string = ""; // 0x124e PushV
	var_398_string = "Neutral"; // 0x124f MovS
	func_4149(var_57_cvector, var_398_string); // 0x1250 NEW_2
	var_399_int = 509095; // 0x1252 PushI
	SetMessage(var_399_int); // 0x1253 TObjFunc
	ClearReplies(); // 0x1255 TObjFunc
	var_400_int = 509097; // 0x1257 PushI
	var_401_int = 9977; // 0x1258 PushI
	var_402_int = 9976; // 0x1259 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x125a TObjFunc
	var_403_int = 509096; // 0x125c PushI
	var_404_int = -1; // 0x125d PushI
	var_405_int = 9975; // 0x125e PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x125f TObjFunc
	return 0; // 0x1261 Return
	
Label_4706:
	var_406_int = 9977; // 0x1262 PushI
	var_407_bool = var_56_bool == var_406_int; // 0x1263 Eq
	if(var_407_bool == 0) goto Label_4729; // 0x1264 JumpB
	var_408_string = ""; // 0x1265 PushV
	var_408_string = "Neutral"; // 0x1266 MovS
	func_4149(var_57_cvector, var_408_string); // 0x1267 NEW_2
	var_409_int = 509098; // 0x1269 PushI
	SetMessage(var_409_int); // 0x126a TObjFunc
	ClearReplies(); // 0x126c TObjFunc
	var_410_int = 509099; // 0x126e PushI
	var_411_int = -1; // 0x126f PushI
	var_412_int = 9978; // 0x1270 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x1271 TObjFunc
	var_413_int = 509100; // 0x1273 PushI
	var_414_int = -1; // 0x1274 PushI
	var_415_int = 9979; // 0x1275 PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x1276 TObjFunc
	return 0; // 0x1278 Return
	
Label_4729:
	var_3_string = 1; // 0x1279 TMovB
	var_416_bool = 0; // 0x127a PushV
	func_7709(var_416_bool); // 0x127b NEW_2
	if(var_416_bool == 0) goto Label_4737; // 0x127d JumpB
	lshStopAnimation(); // 0x127e Func
	goto Label_4739; // 0x1280 Jump
	
Label_4739:
	return 0; // 0x1283 Return
	
Label_4737:
	StopAnimation(); // 0x1281 Func
	
Label_4741:
	return 0; // 0x1285 Return
}


task_15_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_int, var_41_int, var_42_object, var_43_object, var_44_object, var_45_string, var_46_bool, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x1371 PushI
	if(var_58_int == 0) goto Label_5481; // 0x1372 JumpB
	func_7468(); // 0x1374 NEW_2
	var_60_int = 12370; // 0x1376 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x1377 Eq
	if(var_61_bool == 0) goto Label_5005; // 0x1378 JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x1379 PushV
	var_62_object = var_1_object; // 0x137a MovT
	var_63_object = var_0_object; // 0x137b MovT
	func_8006(); // 0x137c NEW_2
	var_66_object = Obj(); var_67_object = Obj(); // 0x137e PushV
	var_66_object = var_1_object; // 0x137f MovT
	var_67_object = var_0_object; // 0x1380 MovT
	func_8012(); // 0x1381 NEW_2
	var_123_object = Obj(); var_124_object = Obj(); // 0x1383 PushV
	var_123_object = var_1_object; // 0x1384 MovT
	var_124_object = var_0_object; // 0x1385 MovT
	func_8150(var_124_object); // 0x1386 NEW_2
	var_147_object = Obj(); var_148_object = Obj(); // 0x1388 PushV
	var_147_object = var_1_object; // 0x1389 MovT
	var_148_object = var_0_object; // 0x138a MovT
	func_8038(); // 0x138b NEW_2
	
Label_5005:
	var_173_int = 12371; // 0x138d PushI
	var_174_bool = var_57_cvector == var_173_int; // 0x138e Eq
	if(var_174_bool == 0) goto Label_5013; // 0x138f JumpB
	var_175_object = Obj(); var_176_object = Obj(); // 0x1390 PushV
	var_175_object = var_1_object; // 0x1391 MovT
	var_176_object = var_0_object; // 0x1392 MovT
	func_8006(); // 0x1393 NEW_2
	
Label_5013:
	var_177_int = 12695; // 0x1395 PushI
	var_178_bool = var_57_cvector == var_177_int; // 0x1396 Eq
	if(var_178_bool == 0) goto Label_5036; // 0x1397 JumpB
	var_179_object = Obj(); var_180_object = Obj(); // 0x1398 PushV
	var_179_object = var_1_object; // 0x1399 MovT
	var_180_object = var_0_object; // 0x139a MovT
	func_8012(); // 0x139b NEW_2
	var_181_object = Obj(); var_182_object = Obj(); // 0x139d PushV
	var_181_object = var_1_object; // 0x139e MovT
	var_182_object = var_0_object; // 0x139f MovT
	func_8150(var_182_object); // 0x13a0 NEW_2
	var_183_object = Obj(); var_184_object = Obj(); // 0x13a2 PushV
	var_183_object = var_1_object; // 0x13a3 MovT
	var_184_object = var_0_object; // 0x13a4 MovT
	func_7733(); // 0x13a5 NEW_2
	var_187_object = Obj(); var_188_object = Obj(); // 0x13a7 PushV
	var_187_object = var_1_object; // 0x13a8 MovT
	var_188_object = var_0_object; // 0x13a9 MovT
	func_8038(); // 0x13aa NEW_2
	
Label_5036:
	var_189_int = 12376; // 0x13ac PushI
	var_190_bool = var_57_cvector == var_189_int; // 0x13ad Eq
	if(var_190_bool == 0) goto Label_5054; // 0x13ae JumpB
	var_191_object = Obj(); var_192_object = Obj(); // 0x13af PushV
	var_191_object = var_1_object; // 0x13b0 MovT
	var_192_object = var_0_object; // 0x13b1 MovT
	func_8054(); // 0x13b2 NEW_2
	var_195_object = Obj(); var_196_object = Obj(); // 0x13b4 PushV
	var_195_object = var_1_object; // 0x13b5 MovT
	var_196_object = var_0_object; // 0x13b6 MovT
	func_8060(); // 0x13b7 NEW_2
	var_215_object = Obj(); var_216_object = Obj(); // 0x13b9 PushV
	var_215_object = var_1_object; // 0x13ba MovT
	var_216_object = var_0_object; // 0x13bb MovT
	func_7751(); // 0x13bc NEW_2
	
Label_5054:
	var_222_int = 12377; // 0x13be PushI
	var_223_bool = var_57_cvector == var_222_int; // 0x13bf Eq
	if(var_223_bool == 0) goto Label_5072; // 0x13c0 JumpB
	var_224_object = Obj(); var_225_object = Obj(); // 0x13c1 PushV
	var_224_object = var_1_object; // 0x13c2 MovT
	var_225_object = var_0_object; // 0x13c3 MovT
	func_8054(); // 0x13c4 NEW_2
	var_226_object = Obj(); var_227_object = Obj(); // 0x13c6 PushV
	var_226_object = var_1_object; // 0x13c7 MovT
	var_227_object = var_0_object; // 0x13c8 MovT
	func_8060(); // 0x13c9 NEW_2
	var_228_object = Obj(); var_229_object = Obj(); // 0x13cb PushV
	var_228_object = var_1_object; // 0x13cc MovT
	var_229_object = var_0_object; // 0x13cd MovT
	func_8134(); // 0x13ce NEW_2
	
Label_5072:
	var_235_int = 12696; // 0x13d0 PushI
	var_236_bool = var_57_cvector == var_235_int; // 0x13d1 Eq
	if(var_236_bool == 0) goto Label_5080; // 0x13d2 JumpB
	var_237_object = Obj(); var_238_object = Obj(); // 0x13d3 PushV
	var_237_object = var_1_object; // 0x13d4 MovT
	var_238_object = var_0_object; // 0x13d5 MovT
	func_8161(); // 0x13d6 NEW_2
	
Label_5080:
	var_241_int = 12702; // 0x13d8 PushI
	var_242_bool = var_57_cvector == var_241_int; // 0x13d9 Eq
	if(var_242_bool == 0) goto Label_5098; // 0x13da JumpB
	var_243_object = Obj(); var_244_object = Obj(); // 0x13db PushV
	var_243_object = var_1_object; // 0x13dc MovT
	var_244_object = var_0_object; // 0x13dd MovT
	func_7879(var_244_object); // 0x13de NEW_2
	var_261_object = Obj(); var_262_object = Obj(); // 0x13e0 PushV
	var_261_object = var_1_object; // 0x13e1 MovT
	var_262_object = var_0_object; // 0x13e2 MovT
	func_7727(); // 0x13e3 NEW_2
	var_265_object = Obj(); var_266_object = Obj(); // 0x13e5 PushV
	var_265_object = var_1_object; // 0x13e6 MovT
	var_266_object = var_0_object; // 0x13e7 MovT
	func_8083(); // 0x13e8 NEW_2
	
Label_5098:
	var_296_int = 12703; // 0x13ea PushI
	var_297_bool = var_57_cvector == var_296_int; // 0x13eb Eq
	if(var_297_bool == 0) goto Label_5111; // 0x13ec JumpB
	var_298_object = Obj(); var_299_object = Obj(); // 0x13ed PushV
	var_298_object = var_1_object; // 0x13ee MovT
	var_299_object = var_0_object; // 0x13ef MovT
	func_8083(); // 0x13f0 NEW_2
	var_300_object = Obj(); var_301_object = Obj(); // 0x13f2 PushV
	var_300_object = var_1_object; // 0x13f3 MovT
	var_301_object = var_0_object; // 0x13f4 MovT
	func_8222(var_301_object); // 0x13f5 NEW_2
	
Label_5111:
	var_340_int = 12359; // 0x13f7 PushI
	var_341_bool = var_56_bool == var_340_int; // 0x13f8 Eq
	if(var_341_bool == 0) goto Label_5207; // 0x13f9 JumpB
	var_342_bool = 0; var_343_object = Obj(); // 0x13fa PushV
	var_343_object = var_1_object; // 0x13fb MovT
	func_8528(var_343_object); // 0x13fc NEW_2
	if(var_342_bool == 0) goto Label_5144; // 0x13fe JumpB
	var_350_object = Obj(); var_351_object = Obj(); // 0x13ff PushV
	var_350_object = var_1_object; // 0x1400 MovT
	var_351_object = var_0_object; // 0x1401 MovT
	func_7745(); // 0x1402 NEW_2
	var_354_string = ""; // 0x1404 PushV
	var_354_string = "Neutral"; // 0x1405 MovS
	func_4954(var_57_cvector, var_354_string); // 0x1406 NEW_2
	var_371_int = 511175; // 0x1408 PushI
	SetMessage(var_371_int); // 0x1409 TObjFunc
	ClearReplies(); // 0x140b TObjFunc
	var_372_int = 511176; // 0x140d PushI
	var_373_int = 12361; // 0x140e PushI
	var_374_int = 12360; // 0x140f PushI
	AddReply(var_372_int, var_373_int, var_374_int); // 0x1410 TObjFunc
	var_375_int = 511178; // 0x1412 PushI
	var_376_int = 12366; // 0x1413 PushI
	var_377_int = 12362; // 0x1414 PushI
	AddReply(var_375_int, var_376_int, var_377_int); // 0x1415 TObjFunc
	return 0; // 0x1417 Return
	
Label_5144:
	var_378_string = ""; // 0x1418 PushV
	var_378_string = "Neutral"; // 0x1419 MovS
	func_4954(var_57_cvector, var_378_string); // 0x141a NEW_2
	var_379_int = 511164; // 0x141c PushI
	SetMessage(var_379_int); // 0x141d TObjFunc
	ClearReplies(); // 0x141f TObjFunc
	var_380_bool = 0; var_381_object = Obj(); // 0x1421 PushV
	var_381_object = var_1_object; // 0x1422 MovT
	func_8540(var_381_object); // 0x1423 NEW_2
	if(var_380_bool == 0) goto Label_5163; // 0x1425 JumpB
	var_386_int = 511489; // 0x1426 PushI
	var_387_int = 12692; // 0x1427 PushI
	var_388_int = 12691; // 0x1428 PushI
	AddReply(var_386_int, var_387_int, var_388_int); // 0x1429 TObjFunc
	
Label_5163:
	var_389_bool = 0; // 0x142b PushV
	var_389_bool = 0; // 0x142c MovB
	var_390_bool = 0; var_391_object = Obj(); // 0x142d PushV
	var_391_object = var_1_object; // 0x142e MovT
	func_8552(var_391_object); // 0x142f NEW_2
	if(var_390_bool == 0) goto Label_5176; // 0x1431 JumpB
	var_396_bool = 0; var_397_object = Obj(); // 0x1432 PushV
	var_397_object = var_1_object; // 0x1433 MovT
	func_8564(var_397_object); // 0x1434 NEW_2
	if(var_396_bool == 0) goto Label_5176; // 0x1436 JumpB
	var_389_bool = 1; // 0x1437 MovB
	
Label_5176:
	if(var_389_bool == 0) goto Label_5182; // 0x1438 JumpB
	var_402_int = 511187; // 0x1439 PushI
	var_403_int = 12373; // 0x143a PushI
	var_404_int = 12372; // 0x143b PushI
	AddReply(var_402_int, var_403_int, var_404_int); // 0x143c TObjFunc
	
Label_5182:
	var_405_bool = 0; // 0x143e PushV
	var_405_bool = 0; // 0x143f MovB
	var_406_bool = 0; var_407_object = Obj(); // 0x1440 PushV
	var_407_object = var_1_object; // 0x1441 MovT
	func_8576(var_407_object); // 0x1442 NEW_2
	if(var_406_bool == 0) goto Label_5195; // 0x1444 JumpB
	var_412_bool = 0; var_413_object = Obj(); // 0x1445 PushV
	var_413_object = var_1_object; // 0x1446 MovT
	func_8588(var_413_object); // 0x1447 NEW_2
	if(var_412_bool == 0) goto Label_5195; // 0x1449 JumpB
	var_405_bool = 1; // 0x144a MovB
	
Label_5195:
	if(var_405_bool == 0) goto Label_5201; // 0x144b JumpB
	var_418_int = 511495; // 0x144c PushI
	var_419_int = 12697; // 0x144d PushI
	var_420_int = 12696; // 0x144e PushI
	AddReply(var_418_int, var_419_int, var_420_int); // 0x144f TObjFunc
	
Label_5201:
	var_421_int = 511174; // 0x1451 PushI
	var_422_int = -1; // 0x1452 PushI
	var_423_int = 12358; // 0x1453 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x1454 TObjFunc
	return 0; // 0x1456 Return
	
Label_5207:
	var_424_int = 12697; // 0x1457 PushI
	var_425_bool = var_56_bool == var_424_int; // 0x1458 Eq
	if(var_425_bool == 0) goto Label_5225; // 0x1459 JumpB
	var_426_string = ""; // 0x145a PushV
	var_426_string = "Neutral"; // 0x145b MovS
	func_4954(var_57_cvector, var_426_string); // 0x145c NEW_2
	var_427_int = 511496; // 0x145e PushI
	SetMessage(var_427_int); // 0x145f TObjFunc
	ClearReplies(); // 0x1461 TObjFunc
	var_428_int = 511497; // 0x1463 PushI
	var_429_int = 12699; // 0x1464 PushI
	var_430_int = 12698; // 0x1465 PushI
	AddReply(var_428_int, var_429_int, var_430_int); // 0x1466 TObjFunc
	return 0; // 0x1468 Return
	
Label_5225:
	var_431_int = 12699; // 0x1469 PushI
	var_432_bool = var_56_bool == var_431_int; // 0x146a Eq
	if(var_432_bool == 0) goto Label_5243; // 0x146b JumpB
	var_433_string = ""; // 0x146c PushV
	var_433_string = "Neutral"; // 0x146d MovS
	func_4954(var_57_cvector, var_433_string); // 0x146e NEW_2
	var_434_int = 511498; // 0x1470 PushI
	SetMessage(var_434_int); // 0x1471 TObjFunc
	ClearReplies(); // 0x1473 TObjFunc
	var_435_int = 511499; // 0x1475 PushI
	var_436_int = 12701; // 0x1476 PushI
	var_437_int = 12700; // 0x1477 PushI
	AddReply(var_435_int, var_436_int, var_437_int); // 0x1478 TObjFunc
	return 0; // 0x147a Return
	
Label_5243:
	var_438_int = 12701; // 0x147b PushI
	var_439_bool = var_56_bool == var_438_int; // 0x147c Eq
	if(var_439_bool == 0) goto Label_5266; // 0x147d JumpB
	var_440_string = ""; // 0x147e PushV
	var_440_string = "Strict"; // 0x147f MovS
	func_4954(var_57_cvector, var_440_string); // 0x1480 NEW_2
	var_441_int = 511500; // 0x1482 PushI
	SetMessage(var_441_int); // 0x1483 TObjFunc
	ClearReplies(); // 0x1485 TObjFunc
	var_442_int = 511501; // 0x1487 PushI
	var_443_int = -1; // 0x1488 PushI
	var_444_int = 12702; // 0x1489 PushI
	AddReply(var_442_int, var_443_int, var_444_int); // 0x148a TObjFunc
	var_445_int = 511502; // 0x148c PushI
	var_446_int = -1; // 0x148d PushI
	var_447_int = 12703; // 0x148e PushI
	AddReply(var_445_int, var_446_int, var_447_int); // 0x148f TObjFunc
	return 0; // 0x1491 Return
	
Label_5266:
	var_448_int = 12373; // 0x1492 PushI
	var_449_bool = var_56_bool == var_448_int; // 0x1493 Eq
	if(var_449_bool == 0) goto Label_5284; // 0x1494 JumpB
	var_450_string = ""; // 0x1495 PushV
	var_450_string = "Neutral"; // 0x1496 MovS
	func_4954(var_57_cvector, var_450_string); // 0x1497 NEW_2
	var_451_int = 511188; // 0x1499 PushI
	SetMessage(var_451_int); // 0x149a TObjFunc
	ClearReplies(); // 0x149c TObjFunc
	var_452_int = 511189; // 0x149e PushI
	var_453_int = 12375; // 0x149f PushI
	var_454_int = 12374; // 0x14a0 PushI
	AddReply(var_452_int, var_453_int, var_454_int); // 0x14a1 TObjFunc
	return 0; // 0x14a3 Return
	
Label_5284:
	var_455_int = 12375; // 0x14a4 PushI
	var_456_bool = var_56_bool == var_455_int; // 0x14a5 Eq
	if(var_456_bool == 0) goto Label_5307; // 0x14a6 JumpB
	var_457_string = ""; // 0x14a7 PushV
	var_457_string = "Neutral"; // 0x14a8 MovS
	func_4954(var_57_cvector, var_457_string); // 0x14a9 NEW_2
	var_458_int = 511190; // 0x14ab PushI
	SetMessage(var_458_int); // 0x14ac TObjFunc
	ClearReplies(); // 0x14ae TObjFunc
	var_459_int = 511191; // 0x14b0 PushI
	var_460_int = -1; // 0x14b1 PushI
	var_461_int = 12376; // 0x14b2 PushI
	AddReply(var_459_int, var_460_int, var_461_int); // 0x14b3 TObjFunc
	var_462_int = 511192; // 0x14b5 PushI
	var_463_int = -1; // 0x14b6 PushI
	var_464_int = 12377; // 0x14b7 PushI
	AddReply(var_462_int, var_463_int, var_464_int); // 0x14b8 TObjFunc
	return 0; // 0x14ba Return
	
Label_5307:
	var_465_int = 12692; // 0x14bb PushI
	var_466_bool = var_56_bool == var_465_int; // 0x14bc Eq
	if(var_466_bool == 0) goto Label_5325; // 0x14bd JumpB
	var_467_string = ""; // 0x14be PushV
	var_467_string = "Neutral"; // 0x14bf MovS
	func_4954(var_57_cvector, var_467_string); // 0x14c0 NEW_2
	var_468_int = 511490; // 0x14c2 PushI
	SetMessage(var_468_int); // 0x14c3 TObjFunc
	ClearReplies(); // 0x14c5 TObjFunc
	var_469_int = 511491; // 0x14c7 PushI
	var_470_int = 12694; // 0x14c8 PushI
	var_471_int = 12693; // 0x14c9 PushI
	AddReply(var_469_int, var_470_int, var_471_int); // 0x14ca TObjFunc
	return 0; // 0x14cc Return
	
Label_5325:
	var_472_int = 12694; // 0x14cd PushI
	var_473_bool = var_56_bool == var_472_int; // 0x14ce Eq
	if(var_473_bool == 0) goto Label_5343; // 0x14cf JumpB
	var_474_string = ""; // 0x14d0 PushV
	var_474_string = "Neutral"; // 0x14d1 MovS
	func_4954(var_57_cvector, var_474_string); // 0x14d2 NEW_2
	var_475_int = 511492; // 0x14d4 PushI
	SetMessage(var_475_int); // 0x14d5 TObjFunc
	ClearReplies(); // 0x14d7 TObjFunc
	var_476_int = 511493; // 0x14d9 PushI
	var_477_int = -1; // 0x14da PushI
	var_478_int = 12695; // 0x14db PushI
	AddReply(var_476_int, var_477_int, var_478_int); // 0x14dc TObjFunc
	return 0; // 0x14de Return
	
Label_5343:
	var_479_int = 12361; // 0x14df PushI
	var_480_bool = var_56_bool == var_479_int; // 0x14e0 Eq
	if(var_480_bool == 0) goto Label_5361; // 0x14e1 JumpB
	var_481_string = ""; // 0x14e2 PushV
	var_481_string = "Strict"; // 0x14e3 MovS
	func_4954(var_57_cvector, var_481_string); // 0x14e4 NEW_2
	var_482_int = 511177; // 0x14e6 PushI
	SetMessage(var_482_int); // 0x14e7 TObjFunc
	ClearReplies(); // 0x14e9 TObjFunc
	var_483_int = 511180; // 0x14eb PushI
	var_484_int = 12363; // 0x14ec PushI
	var_485_int = 12364; // 0x14ed PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x14ee TObjFunc
	return 0; // 0x14f0 Return
	
Label_5361:
	var_486_int = 12379; // 0x14f1 PushI
	var_487_bool = var_56_bool == var_486_int; // 0x14f2 Eq
	if(var_487_bool == 0) goto Label_5364; // 0x14f3 JumpB
	
Label_5364:
	var_488_int = 12385; // 0x14f4 PushI
	var_489_bool = var_56_bool == var_488_int; // 0x14f5 Eq
	if(var_489_bool == 0) goto Label_5387; // 0x14f6 JumpB
	var_490_string = ""; // 0x14f7 PushV
	var_490_string = "Neutral"; // 0x14f8 MovS
	func_4954(var_57_cvector, var_490_string); // 0x14f9 NEW_2
	var_491_int = 511199; // 0x14fb PushI
	SetMessage(var_491_int); // 0x14fc TObjFunc
	ClearReplies(); // 0x14fe TObjFunc
	var_492_int = 511200; // 0x1500 PushI
	var_493_int = 12366; // 0x1501 PushI
	var_494_int = 12386; // 0x1502 PushI
	AddReply(var_492_int, var_493_int, var_494_int); // 0x1503 TObjFunc
	var_495_int = 511201; // 0x1505 PushI
	var_496_int = 12363; // 0x1506 PushI
	var_497_int = 12388; // 0x1507 PushI
	AddReply(var_495_int, var_496_int, var_497_int); // 0x1508 TObjFunc
	return 0; // 0x150a Return
	
Label_5387:
	var_498_int = 12363; // 0x150b PushI
	var_499_bool = var_56_bool == var_498_int; // 0x150c Eq
	if(var_499_bool == 0) goto Label_5410; // 0x150d JumpB
	var_500_string = ""; // 0x150e PushV
	var_500_string = "Neutral"; // 0x150f MovS
	func_4954(var_57_cvector, var_500_string); // 0x1510 NEW_2
	var_501_int = 511179; // 0x1512 PushI
	SetMessage(var_501_int); // 0x1513 TObjFunc
	ClearReplies(); // 0x1515 TObjFunc
	var_502_int = 511181; // 0x1517 PushI
	var_503_int = 12366; // 0x1518 PushI
	var_504_int = 12365; // 0x1519 PushI
	AddReply(var_502_int, var_503_int, var_504_int); // 0x151a TObjFunc
	var_505_int = 511196; // 0x151c PushI
	var_506_int = 12383; // 0x151d PushI
	var_507_int = 12382; // 0x151e PushI
	AddReply(var_505_int, var_506_int, var_507_int); // 0x151f TObjFunc
	return 0; // 0x1521 Return
	
Label_5410:
	var_508_int = 12383; // 0x1522 PushI
	var_509_bool = var_56_bool == var_508_int; // 0x1523 Eq
	if(var_509_bool == 0) goto Label_5428; // 0x1524 JumpB
	var_510_string = ""; // 0x1525 PushV
	var_510_string = "Neutral"; // 0x1526 MovS
	func_4954(var_57_cvector, var_510_string); // 0x1527 NEW_2
	var_511_int = 511197; // 0x1529 PushI
	SetMessage(var_511_int); // 0x152a TObjFunc
	ClearReplies(); // 0x152c TObjFunc
	var_512_int = 538806; // 0x152e PushI
	var_513_int = 40725; // 0x152f PushI
	var_514_int = 40724; // 0x1530 PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0x1531 TObjFunc
	return 0; // 0x1533 Return
	
Label_5428:
	var_515_int = 40725; // 0x1534 PushI
	var_516_bool = var_56_bool == var_515_int; // 0x1535 Eq
	if(var_516_bool == 0) goto Label_5446; // 0x1536 JumpB
	var_517_string = ""; // 0x1537 PushV
	var_517_string = "Neutral"; // 0x1538 MovS
	func_4954(var_57_cvector, var_517_string); // 0x1539 NEW_2
	var_518_int = 538807; // 0x153b PushI
	SetMessage(var_518_int); // 0x153c TObjFunc
	ClearReplies(); // 0x153e TObjFunc
	var_519_int = 511486; // 0x1540 PushI
	var_520_int = 12366; // 0x1541 PushI
	var_521_int = 12688; // 0x1542 PushI
	AddReply(var_519_int, var_520_int, var_521_int); // 0x1543 TObjFunc
	return 0; // 0x1545 Return
	
Label_5446:
	var_522_int = 12366; // 0x1546 PushI
	var_523_bool = var_56_bool == var_522_int; // 0x1547 Eq
	if(var_523_bool == 0) goto Label_5469; // 0x1548 JumpB
	var_524_string = ""; // 0x1549 PushV
	var_524_string = "Neutral"; // 0x154a MovS
	func_4954(var_57_cvector, var_524_string); // 0x154b NEW_2
	var_525_int = 511182; // 0x154d PushI
	SetMessage(var_525_int); // 0x154e TObjFunc
	ClearReplies(); // 0x1550 TObjFunc
	var_526_int = 511185; // 0x1552 PushI
	var_527_int = -1; // 0x1553 PushI
	var_528_int = 12370; // 0x1554 PushI
	AddReply(var_526_int, var_527_int, var_528_int); // 0x1555 TObjFunc
	var_529_int = 511186; // 0x1557 PushI
	var_530_int = -1; // 0x1558 PushI
	var_531_int = 12371; // 0x1559 PushI
	AddReply(var_529_int, var_530_int, var_531_int); // 0x155a TObjFunc
	return 0; // 0x155c Return
	
Label_5469:
	var_3_string = 1; // 0x155d TMovB
	var_532_bool = 0; // 0x155e PushV
	func_7709(var_532_bool); // 0x155f NEW_2
	if(var_532_bool == 0) goto Label_5477; // 0x1561 JumpB
	lshStopAnimation(); // 0x1562 Func
	goto Label_5479; // 0x1564 Jump
	
Label_5479:
	return 0; // 0x1567 Return
	
Label_5477:
	StopAnimation(); // 0x1565 Func
	
Label_5481:
	return 0; // 0x1569 Return
}


task_17_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_int, var_46_int, var_47_object, var_48_object, var_49_object, var_50_string, var_51_bool, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x1637 PushI
	if(var_58_int == 0) goto Label_6210; // 0x1638 JumpB
	func_7468(); // 0x163a NEW_2
	var_60_int = 12808; // 0x163c PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x163d Eq
	if(var_61_bool == 0) goto Label_5705; // 0x163e JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x163f PushV
	var_62_object = var_1_object; // 0x1640 MovT
	var_63_object = var_0_object; // 0x1641 MovT
	func_8167(); // 0x1642 NEW_2
	var_82_object = Obj(); var_83_object = Obj(); // 0x1644 PushV
	var_82_object = var_1_object; // 0x1645 MovT
	var_83_object = var_0_object; // 0x1646 MovT
	func_7921(); // 0x1647 NEW_2
	
Label_5705:
	var_86_int = 12802; // 0x1649 PushI
	var_87_bool = var_57_cvector == var_86_int; // 0x164a Eq
	if(var_87_bool == 0) goto Label_5718; // 0x164b JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x164c PushV
	var_88_object = var_1_object; // 0x164d MovT
	var_89_object = var_0_object; // 0x164e MovT
	func_8167(); // 0x164f NEW_2
	var_90_object = Obj(); var_91_object = Obj(); // 0x1651 PushV
	var_90_object = var_1_object; // 0x1652 MovT
	var_91_object = var_0_object; // 0x1653 MovT
	func_7921(); // 0x1654 NEW_2
	
Label_5718:
	var_92_int = 12820; // 0x1656 PushI
	var_93_bool = var_57_cvector == var_92_int; // 0x1657 Eq
	if(var_93_bool == 0) goto Label_5726; // 0x1658 JumpB
	var_94_object = Obj(); var_95_object = Obj(); // 0x1659 PushV
	var_94_object = var_1_object; // 0x165a MovT
	var_95_object = var_0_object; // 0x165b MovT
	func_8210(); // 0x165c NEW_2
	
Label_5726:
	var_98_int = 12819; // 0x165e PushI
	var_99_bool = var_57_cvector == var_98_int; // 0x165f Eq
	if(var_99_bool == 0) goto Label_5734; // 0x1660 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x1661 PushV
	var_100_object = var_1_object; // 0x1662 MovT
	var_101_object = var_0_object; // 0x1663 MovT
	func_8210(); // 0x1664 NEW_2
	
Label_5734:
	var_102_int = 12821; // 0x1666 PushI
	var_103_bool = var_57_cvector == var_102_int; // 0x1667 Eq
	if(var_103_bool == 0) goto Label_5742; // 0x1668 JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x1669 PushV
	var_104_object = var_1_object; // 0x166a MovT
	var_105_object = var_0_object; // 0x166b MovT
	func_8210(); // 0x166c NEW_2
	
Label_5742:
	var_106_int = 12832; // 0x166e PushI
	var_107_bool = var_57_cvector == var_106_int; // 0x166f Eq
	if(var_107_bool == 0) goto Label_5750; // 0x1670 JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x1671 PushV
	var_108_object = var_1_object; // 0x1672 MovT
	var_109_object = var_0_object; // 0x1673 MovT
	func_8216(); // 0x1674 NEW_2
	
Label_5750:
	var_112_int = 12833; // 0x1676 PushI
	var_113_bool = var_57_cvector == var_112_int; // 0x1677 Eq
	if(var_113_bool == 0) goto Label_5758; // 0x1678 JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x1679 PushV
	var_114_object = var_1_object; // 0x167a MovT
	var_115_object = var_0_object; // 0x167b MovT
	func_8216(); // 0x167c NEW_2
	
Label_5758:
	var_116_int = 12786; // 0x167e PushI
	var_117_bool = var_56_bool == var_116_int; // 0x167f Eq
	if(var_117_bool == 0) goto Label_5824; // 0x1680 JumpB
	var_118_string = ""; // 0x1681 PushV
	var_118_string = "Neutral"; // 0x1682 MovS
	func_5664(var_57_cvector, var_118_string); // 0x1683 NEW_2
	var_135_int = 511591; // 0x1685 PushI
	SetMessage(var_135_int); // 0x1686 TObjFunc
	ClearReplies(); // 0x1688 TObjFunc
	var_136_bool = 0; var_137_object = Obj(); // 0x168a PushV
	var_137_object = var_1_object; // 0x168b MovT
	func_8600(var_137_object); // 0x168c NEW_2
	if(var_136_bool == 0) goto Label_5780; // 0x168e JumpB
	var_144_int = 511592; // 0x168f PushI
	var_145_int = 12788; // 0x1690 PushI
	var_146_int = 12787; // 0x1691 PushI
	AddReply(var_144_int, var_145_int, var_146_int); // 0x1692 TObjFunc
	
Label_5780:
	var_147_bool = 0; // 0x1694 PushV
	var_147_bool = 0; // 0x1695 MovB
	var_148_bool = 0; var_149_object = Obj(); // 0x1696 PushV
	var_149_object = var_1_object; // 0x1697 MovT
	func_8636(var_149_object); // 0x1698 NEW_2
	if(var_148_bool == 0) goto Label_5793; // 0x169a JumpB
	var_154_bool = 0; var_155_object = Obj(); // 0x169b PushV
	var_155_object = var_1_object; // 0x169c MovT
	func_8660(var_155_object); // 0x169d NEW_2
	if(var_154_bool == 0) goto Label_5793; // 0x169f JumpB
	var_147_bool = 1; // 0x16a0 MovB
	
Label_5793:
	if(var_147_bool == 0) goto Label_5799; // 0x16a1 JumpB
	var_160_int = 511611; // 0x16a2 PushI
	var_161_int = 12810; // 0x16a3 PushI
	var_162_int = 12809; // 0x16a4 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x16a5 TObjFunc
	
Label_5799:
	var_163_bool = 0; // 0x16a7 PushV
	var_163_bool = 0; // 0x16a8 MovB
	var_164_bool = 0; var_165_object = Obj(); // 0x16a9 PushV
	var_165_object = var_1_object; // 0x16aa MovT
	func_8648(var_165_object); // 0x16ab NEW_2
	if(var_164_bool == 0) goto Label_5812; // 0x16ad JumpB
	var_170_bool = 0; var_171_object = Obj(); // 0x16ae PushV
	var_171_object = var_1_object; // 0x16af MovT
	func_8672(var_171_object); // 0x16b0 NEW_2
	if(var_170_bool == 0) goto Label_5812; // 0x16b2 JumpB
	var_163_bool = 1; // 0x16b3 MovB
	
Label_5812:
	if(var_163_bool == 0) goto Label_5818; // 0x16b4 JumpB
	var_176_int = 511624; // 0x16b5 PushI
	var_177_int = 12823; // 0x16b6 PushI
	var_178_int = 12822; // 0x16b7 PushI
	AddReply(var_176_int, var_177_int, var_178_int); // 0x16b8 TObjFunc
	
Label_5818:
	var_179_int = 511635; // 0x16ba PushI
	var_180_int = -1; // 0x16bb PushI
	var_181_int = 12834; // 0x16bc PushI
	AddReply(var_179_int, var_180_int, var_181_int); // 0x16bd TObjFunc
	return 0; // 0x16bf Return
	
Label_5824:
	var_182_int = 12823; // 0x16c0 PushI
	var_183_bool = var_56_bool == var_182_int; // 0x16c1 Eq
	if(var_183_bool == 0) goto Label_5847; // 0x16c2 JumpB
	var_184_string = ""; // 0x16c3 PushV
	var_184_string = "Grief"; // 0x16c4 MovS
	func_5664(var_57_cvector, var_184_string); // 0x16c5 NEW_2
	var_185_int = 511625; // 0x16c7 PushI
	SetMessage(var_185_int); // 0x16c8 TObjFunc
	ClearReplies(); // 0x16ca TObjFunc
	var_186_int = 511626; // 0x16cc PushI
	var_187_int = 12825; // 0x16cd PushI
	var_188_int = 12824; // 0x16ce PushI
	AddReply(var_186_int, var_187_int, var_188_int); // 0x16cf TObjFunc
	var_189_int = 511628; // 0x16d1 PushI
	var_190_int = 12827; // 0x16d2 PushI
	var_191_int = 12826; // 0x16d3 PushI
	AddReply(var_189_int, var_190_int, var_191_int); // 0x16d4 TObjFunc
	return 0; // 0x16d6 Return
	
Label_5847:
	var_192_int = 12827; // 0x16d7 PushI
	var_193_bool = var_56_bool == var_192_int; // 0x16d8 Eq
	if(var_193_bool == 0) goto Label_5865; // 0x16d9 JumpB
	var_194_string = ""; // 0x16da PushV
	var_194_string = "Neutral"; // 0x16db MovS
	func_5664(var_57_cvector, var_194_string); // 0x16dc NEW_2
	var_195_int = 511629; // 0x16de PushI
	SetMessage(var_195_int); // 0x16df TObjFunc
	ClearReplies(); // 0x16e1 TObjFunc
	var_196_int = 511631; // 0x16e3 PushI
	var_197_int = 12830; // 0x16e4 PushI
	var_198_int = 12829; // 0x16e5 PushI
	AddReply(var_196_int, var_197_int, var_198_int); // 0x16e6 TObjFunc
	return 0; // 0x16e8 Return
	
Label_5865:
	var_199_int = 12825; // 0x16e9 PushI
	var_200_bool = var_56_bool == var_199_int; // 0x16ea Eq
	if(var_200_bool == 0) goto Label_5883; // 0x16eb JumpB
	var_201_string = ""; // 0x16ec PushV
	var_201_string = "Neutral"; // 0x16ed MovS
	func_5664(var_57_cvector, var_201_string); // 0x16ee NEW_2
	var_202_int = 511627; // 0x16f0 PushI
	SetMessage(var_202_int); // 0x16f1 TObjFunc
	ClearReplies(); // 0x16f3 TObjFunc
	var_203_int = 511630; // 0x16f5 PushI
	var_204_int = 12830; // 0x16f6 PushI
	var_205_int = 12828; // 0x16f7 PushI
	AddReply(var_203_int, var_204_int, var_205_int); // 0x16f8 TObjFunc
	return 0; // 0x16fa Return
	
Label_5883:
	var_206_int = 12830; // 0x16fb PushI
	var_207_bool = var_56_bool == var_206_int; // 0x16fc Eq
	if(var_207_bool == 0) goto Label_5906; // 0x16fd JumpB
	var_208_string = ""; // 0x16fe PushV
	var_208_string = "Neutral"; // 0x16ff MovS
	func_5664(var_57_cvector, var_208_string); // 0x1700 NEW_2
	var_209_int = 511632; // 0x1702 PushI
	SetMessage(var_209_int); // 0x1703 TObjFunc
	ClearReplies(); // 0x1705 TObjFunc
	var_210_int = 511633; // 0x1707 PushI
	var_211_int = -1; // 0x1708 PushI
	var_212_int = 12832; // 0x1709 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x170a TObjFunc
	var_213_int = 511634; // 0x170c PushI
	var_214_int = -1; // 0x170d PushI
	var_215_int = 12833; // 0x170e PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x170f TObjFunc
	return 0; // 0x1711 Return
	
Label_5906:
	var_216_int = 12810; // 0x1712 PushI
	var_217_bool = var_56_bool == var_216_int; // 0x1713 Eq
	if(var_217_bool == 0) goto Label_5929; // 0x1714 JumpB
	var_218_string = ""; // 0x1715 PushV
	var_218_string = "Neutral"; // 0x1716 MovS
	func_5664(var_57_cvector, var_218_string); // 0x1717 NEW_2
	var_219_int = 511612; // 0x1719 PushI
	SetMessage(var_219_int); // 0x171a TObjFunc
	ClearReplies(); // 0x171c TObjFunc
	var_220_int = 511613; // 0x171e PushI
	var_221_int = 12812; // 0x171f PushI
	var_222_int = 12811; // 0x1720 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1721 TObjFunc
	var_223_int = 511623; // 0x1723 PushI
	var_224_int = -1; // 0x1724 PushI
	var_225_int = 12821; // 0x1725 PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1726 TObjFunc
	return 0; // 0x1728 Return
	
Label_5929:
	var_226_int = 12812; // 0x1729 PushI
	var_227_bool = var_56_bool == var_226_int; // 0x172a Eq
	if(var_227_bool == 0) goto Label_5952; // 0x172b JumpB
	var_228_string = ""; // 0x172c PushV
	var_228_string = "Neutral"; // 0x172d MovS
	func_5664(var_57_cvector, var_228_string); // 0x172e NEW_2
	var_229_int = 511614; // 0x1730 PushI
	SetMessage(var_229_int); // 0x1731 TObjFunc
	ClearReplies(); // 0x1733 TObjFunc
	var_230_int = 515657; // 0x1735 PushI
	var_231_int = 16695; // 0x1736 PushI
	var_232_int = 16694; // 0x1737 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1738 TObjFunc
	var_233_int = 515659; // 0x173a PushI
	var_234_int = 16695; // 0x173b PushI
	var_235_int = 16696; // 0x173c PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x173d TObjFunc
	return 0; // 0x173f Return
	
Label_5952:
	var_236_int = 16695; // 0x1740 PushI
	var_237_bool = var_56_bool == var_236_int; // 0x1741 Eq
	if(var_237_bool == 0) goto Label_5975; // 0x1742 JumpB
	var_238_string = ""; // 0x1743 PushV
	var_238_string = "Neutral"; // 0x1744 MovS
	func_5664(var_57_cvector, var_238_string); // 0x1745 NEW_2
	var_239_int = 515658; // 0x1747 PushI
	SetMessage(var_239_int); // 0x1748 TObjFunc
	ClearReplies(); // 0x174a TObjFunc
	var_240_int = 511615; // 0x174c PushI
	var_241_int = 12814; // 0x174d PushI
	var_242_int = 12813; // 0x174e PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x174f TObjFunc
	var_243_int = 515660; // 0x1751 PushI
	var_244_int = 12816; // 0x1752 PushI
	var_245_int = 16698; // 0x1753 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x1754 TObjFunc
	return 0; // 0x1756 Return
	
Label_5975:
	var_246_int = 12814; // 0x1757 PushI
	var_247_bool = var_56_bool == var_246_int; // 0x1758 Eq
	if(var_247_bool == 0) goto Label_5998; // 0x1759 JumpB
	var_248_string = ""; // 0x175a PushV
	var_248_string = "Neutral"; // 0x175b MovS
	func_5664(var_57_cvector, var_248_string); // 0x175c NEW_2
	var_249_int = 511616; // 0x175e PushI
	SetMessage(var_249_int); // 0x175f TObjFunc
	ClearReplies(); // 0x1761 TObjFunc
	var_250_int = 511617; // 0x1763 PushI
	var_251_int = 12816; // 0x1764 PushI
	var_252_int = 12815; // 0x1765 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x1766 TObjFunc
	var_253_int = 515661; // 0x1768 PushI
	var_254_int = 16701; // 0x1769 PushI
	var_255_int = 16700; // 0x176a PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x176b TObjFunc
	return 0; // 0x176d Return
	
Label_5998:
	var_256_int = 16701; // 0x176e PushI
	var_257_bool = var_56_bool == var_256_int; // 0x176f Eq
	if(var_257_bool == 0) goto Label_6016; // 0x1770 JumpB
	var_258_string = ""; // 0x1771 PushV
	var_258_string = "Neutral"; // 0x1772 MovS
	func_5664(var_57_cvector, var_258_string); // 0x1773 NEW_2
	var_259_int = 515662; // 0x1775 PushI
	SetMessage(var_259_int); // 0x1776 TObjFunc
	ClearReplies(); // 0x1778 TObjFunc
	var_260_int = 511621; // 0x177a PushI
	var_261_int = -1; // 0x177b PushI
	var_262_int = 12819; // 0x177c PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x177d TObjFunc
	return 0; // 0x177f Return
	
Label_6016:
	var_263_int = 12816; // 0x1780 PushI
	var_264_bool = var_56_bool == var_263_int; // 0x1781 Eq
	if(var_264_bool == 0) goto Label_6034; // 0x1782 JumpB
	var_265_string = ""; // 0x1783 PushV
	var_265_string = "Neutral"; // 0x1784 MovS
	func_5664(var_57_cvector, var_265_string); // 0x1785 NEW_2
	var_266_int = 511618; // 0x1787 PushI
	SetMessage(var_266_int); // 0x1788 TObjFunc
	ClearReplies(); // 0x178a TObjFunc
	var_267_int = 511619; // 0x178c PushI
	var_268_int = 12818; // 0x178d PushI
	var_269_int = 12817; // 0x178e PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x178f TObjFunc
	return 0; // 0x1791 Return
	
Label_6034:
	var_270_int = 12818; // 0x1792 PushI
	var_271_bool = var_56_bool == var_270_int; // 0x1793 Eq
	if(var_271_bool == 0) goto Label_6052; // 0x1794 JumpB
	var_272_string = ""; // 0x1795 PushV
	var_272_string = "Neutral"; // 0x1796 MovS
	func_5664(var_57_cvector, var_272_string); // 0x1797 NEW_2
	var_273_int = 511620; // 0x1799 PushI
	SetMessage(var_273_int); // 0x179a TObjFunc
	ClearReplies(); // 0x179c TObjFunc
	var_274_int = 511622; // 0x179e PushI
	var_275_int = -1; // 0x179f PushI
	var_276_int = 12820; // 0x17a0 PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x17a1 TObjFunc
	return 0; // 0x17a3 Return
	
Label_6052:
	var_277_int = 12788; // 0x17a4 PushI
	var_278_bool = var_56_bool == var_277_int; // 0x17a5 Eq
	if(var_278_bool == 0) goto Label_6075; // 0x17a6 JumpB
	var_279_string = ""; // 0x17a7 PushV
	var_279_string = "Neutral"; // 0x17a8 MovS
	func_5664(var_57_cvector, var_279_string); // 0x17a9 NEW_2
	var_280_int = 511593; // 0x17ab PushI
	SetMessage(var_280_int); // 0x17ac TObjFunc
	ClearReplies(); // 0x17ae TObjFunc
	var_281_int = 511594; // 0x17b0 PushI
	var_282_int = 12790; // 0x17b1 PushI
	var_283_int = 12789; // 0x17b2 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x17b3 TObjFunc
	var_284_int = 511599; // 0x17b5 PushI
	var_285_int = 12795; // 0x17b6 PushI
	var_286_int = 12794; // 0x17b7 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x17b8 TObjFunc
	return 0; // 0x17ba Return
	
Label_6075:
	var_287_int = 12795; // 0x17bb PushI
	var_288_bool = var_56_bool == var_287_int; // 0x17bc Eq
	if(var_288_bool == 0) goto Label_6093; // 0x17bd JumpB
	var_289_string = ""; // 0x17be PushV
	var_289_string = "Neutral"; // 0x17bf MovS
	func_5664(var_57_cvector, var_289_string); // 0x17c0 NEW_2
	var_290_int = 511600; // 0x17c2 PushI
	SetMessage(var_290_int); // 0x17c3 TObjFunc
	ClearReplies(); // 0x17c5 TObjFunc
	var_291_int = 511601; // 0x17c7 PushI
	var_292_int = 12790; // 0x17c8 PushI
	var_293_int = 12796; // 0x17c9 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x17ca TObjFunc
	return 0; // 0x17cc Return
	
Label_6093:
	var_294_int = 12790; // 0x17cd PushI
	var_295_bool = var_56_bool == var_294_int; // 0x17ce Eq
	if(var_295_bool == 0) goto Label_6116; // 0x17cf JumpB
	var_296_string = ""; // 0x17d0 PushV
	var_296_string = "Strict"; // 0x17d1 MovS
	func_5664(var_57_cvector, var_296_string); // 0x17d2 NEW_2
	var_297_int = 511595; // 0x17d4 PushI
	SetMessage(var_297_int); // 0x17d5 TObjFunc
	ClearReplies(); // 0x17d7 TObjFunc
	var_298_int = 511596; // 0x17d9 PushI
	var_299_int = 12792; // 0x17da PushI
	var_300_int = 12791; // 0x17db PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x17dc TObjFunc
	var_301_int = 511602; // 0x17de PushI
	var_302_int = 12799; // 0x17df PushI
	var_303_int = 12798; // 0x17e0 PushI
	AddReply(var_301_int, var_302_int, var_303_int); // 0x17e1 TObjFunc
	return 0; // 0x17e3 Return
	
Label_6116:
	var_304_int = 12799; // 0x17e4 PushI
	var_305_bool = var_56_bool == var_304_int; // 0x17e5 Eq
	if(var_305_bool == 0) goto Label_6139; // 0x17e6 JumpB
	var_306_string = ""; // 0x17e7 PushV
	var_306_string = "Neutral"; // 0x17e8 MovS
	func_5664(var_57_cvector, var_306_string); // 0x17e9 NEW_2
	var_307_int = 511603; // 0x17eb PushI
	SetMessage(var_307_int); // 0x17ec TObjFunc
	ClearReplies(); // 0x17ee TObjFunc
	var_308_int = 511604; // 0x17f0 PushI
	var_309_int = 12792; // 0x17f1 PushI
	var_310_int = 12800; // 0x17f2 PushI
	AddReply(var_308_int, var_309_int, var_310_int); // 0x17f3 TObjFunc
	var_311_int = 515656; // 0x17f5 PushI
	var_312_int = 12805; // 0x17f6 PushI
	var_313_int = 16692; // 0x17f7 PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0x17f8 TObjFunc
	return 0; // 0x17fa Return
	
Label_6139:
	var_314_int = 12792; // 0x17fb PushI
	var_315_bool = var_56_bool == var_314_int; // 0x17fc Eq
	if(var_315_bool == 0) goto Label_6162; // 0x17fd JumpB
	var_316_string = ""; // 0x17fe PushV
	var_316_string = "Neutral"; // 0x17ff MovS
	func_5664(var_57_cvector, var_316_string); // 0x1800 NEW_2
	var_317_int = 511597; // 0x1802 PushI
	SetMessage(var_317_int); // 0x1803 TObjFunc
	ClearReplies(); // 0x1805 TObjFunc
	var_318_int = 511598; // 0x1807 PushI
	var_319_int = 12803; // 0x1808 PushI
	var_320_int = 12793; // 0x1809 PushI
	AddReply(var_318_int, var_319_int, var_320_int); // 0x180a TObjFunc
	var_321_int = 511605; // 0x180c PushI
	var_322_int = -1; // 0x180d PushI
	var_323_int = 12802; // 0x180e PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x180f TObjFunc
	return 0; // 0x1811 Return
	
Label_6162:
	var_324_int = 12803; // 0x1812 PushI
	var_325_bool = var_56_bool == var_324_int; // 0x1813 Eq
	if(var_325_bool == 0) goto Label_6180; // 0x1814 JumpB
	var_326_string = ""; // 0x1815 PushV
	var_326_string = "Neutral"; // 0x1816 MovS
	func_5664(var_57_cvector, var_326_string); // 0x1817 NEW_2
	var_327_int = 511606; // 0x1819 PushI
	SetMessage(var_327_int); // 0x181a TObjFunc
	ClearReplies(); // 0x181c TObjFunc
	var_328_int = 511607; // 0x181e PushI
	var_329_int = 12805; // 0x181f PushI
	var_330_int = 12804; // 0x1820 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x1821 TObjFunc
	return 0; // 0x1823 Return
	
Label_6180:
	var_331_int = 12805; // 0x1824 PushI
	var_332_bool = var_56_bool == var_331_int; // 0x1825 Eq
	if(var_332_bool == 0) goto Label_6198; // 0x1826 JumpB
	var_333_string = ""; // 0x1827 PushV
	var_333_string = "Neutral"; // 0x1828 MovS
	func_5664(var_57_cvector, var_333_string); // 0x1829 NEW_2
	var_334_int = 511608; // 0x182b PushI
	SetMessage(var_334_int); // 0x182c TObjFunc
	ClearReplies(); // 0x182e TObjFunc
	var_335_int = 511610; // 0x1830 PushI
	var_336_int = -1; // 0x1831 PushI
	var_337_int = 12808; // 0x1832 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x1833 TObjFunc
	return 0; // 0x1835 Return
	
Label_6198:
	var_3_string = 1; // 0x1836 TMovB
	var_338_bool = 0; // 0x1837 PushV
	func_7709(var_338_bool); // 0x1838 NEW_2
	if(var_338_bool == 0) goto Label_6206; // 0x183a JumpB
	lshStopAnimation(); // 0x183b Func
	goto Label_6208; // 0x183d Jump
	
Label_6208:
	return 0; // 0x1840 Return
	
Label_6206:
	StopAnimation(); // 0x183e Func
	
Label_6210:
	return 0; // 0x1842 Return
}


task_19_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_int, var_51_int, var_52_object, var_53_object, var_54_object, var_55_string, var_56_bool, var_57_cvector)
{
	var_58_int = 1; // 0x18f3 PushI
	if(var_58_int == 0) goto Label_6663; // 0x18f4 JumpB
	func_7468(); // 0x18f6 NEW_2
	var_60_int = 14572; // 0x18f8 PushI
	var_61_bool = var_57_cvector == var_60_int; // 0x18f9 Eq
	if(var_61_bool == 0) goto Label_6400; // 0x18fa JumpB
	var_62_object = Obj(); var_63_object = Obj(); // 0x18fb PushV
	var_62_object = var_1_object; // 0x18fc MovT
	var_63_object = var_0_object; // 0x18fd MovT
	func_8269(); // 0x18fe NEW_2
	
Label_6400:
	var_66_int = 14578; // 0x1900 PushI
	var_67_bool = var_57_cvector == var_66_int; // 0x1901 Eq
	if(var_67_bool == 0) goto Label_6408; // 0x1902 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0x1903 PushV
	var_68_object = var_1_object; // 0x1904 MovT
	var_69_object = var_0_object; // 0x1905 MovT
	func_8324(); // 0x1906 NEW_2
	
Label_6408:
	var_109_int = 14583; // 0x1908 PushI
	var_110_bool = var_57_cvector == var_109_int; // 0x1909 Eq
	if(var_110_bool == 0) goto Label_6416; // 0x190a JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0x190b PushV
	var_111_object = var_1_object; // 0x190c MovT
	var_112_object = var_0_object; // 0x190d MovT
	func_8324(); // 0x190e NEW_2
	
Label_6416:
	var_113_int = 36864; // 0x1910 PushI
	var_114_bool = var_57_cvector == var_113_int; // 0x1911 Eq
	if(var_114_bool == 0) goto Label_6424; // 0x1912 JumpB
	var_115_object = Obj(); var_116_object = Obj(); // 0x1913 PushV
	var_115_object = var_1_object; // 0x1914 MovT
	var_116_object = var_0_object; // 0x1915 MovT
	func_8324(); // 0x1916 NEW_2
	
Label_6424:
	var_117_int = 13358; // 0x1918 PushI
	var_118_bool = var_56_bool == var_117_int; // 0x1919 Eq
	if(var_118_bool == 0) goto Label_6461; // 0x191a JumpB
	var_119_string = ""; // 0x191b PushV
	var_119_string = "Neutral"; // 0x191c MovS
	func_6364(var_57_cvector, var_119_string); // 0x191d NEW_2
	var_136_int = 512203; // 0x191f PushI
	SetMessage(var_136_int); // 0x1920 TObjFunc
	ClearReplies(); // 0x1922 TObjFunc
	var_137_bool = 0; // 0x1924 PushV
	var_137_bool = 0; // 0x1925 MovB
	var_138_bool = 0; var_139_object = Obj(); // 0x1926 PushV
	var_139_object = var_1_object; // 0x1927 MovT
	func_8756(var_139_object); // 0x1928 NEW_2
	if(var_138_bool == 0) goto Label_6449; // 0x192a JumpB
	var_146_bool = 0; var_147_object = Obj(); // 0x192b PushV
	var_147_object = var_1_object; // 0x192c MovT
	func_8768(var_147_object); // 0x192d NEW_2
	if(var_146_bool == 0) goto Label_6449; // 0x192f JumpB
	var_137_bool = 1; // 0x1930 MovB
	
Label_6449:
	if(var_137_bool == 0) goto Label_6455; // 0x1931 JumpB
	var_152_int = 513340; // 0x1932 PushI
	var_153_int = 14573; // 0x1933 PushI
	var_154_int = 14572; // 0x1934 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x1935 TObjFunc
	
Label_6455:
	var_155_int = 512204; // 0x1937 PushI
	var_156_int = -1; // 0x1938 PushI
	var_157_int = 13359; // 0x1939 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x193a TObjFunc
	return 0; // 0x193c Return
	
Label_6461:
	var_158_int = 14573; // 0x193d PushI
	var_159_bool = var_56_bool == var_158_int; // 0x193e Eq
	if(var_159_bool == 0) goto Label_6479; // 0x193f JumpB
	var_160_string = ""; // 0x1940 PushV
	var_160_string = "Neutral"; // 0x1941 MovS
	func_6364(var_57_cvector, var_160_string); // 0x1942 NEW_2
	var_161_int = 513341; // 0x1944 PushI
	SetMessage(var_161_int); // 0x1945 TObjFunc
	ClearReplies(); // 0x1947 TObjFunc
	var_162_int = 513342; // 0x1949 PushI
	var_163_int = 14575; // 0x194a PushI
	var_164_int = 14574; // 0x194b PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0x194c TObjFunc
	return 0; // 0x194e Return
	
Label_6479:
	var_165_int = 36846; // 0x194f PushI
	var_166_bool = var_56_bool == var_165_int; // 0x1950 Eq
	if(var_166_bool == 0) goto Label_6482; // 0x1951 JumpB
	
Label_6482:
	var_167_int = 36850; // 0x1952 PushI
	var_168_bool = var_56_bool == var_167_int; // 0x1953 Eq
	if(var_168_bool == 0) goto Label_6500; // 0x1954 JumpB
	var_169_string = ""; // 0x1955 PushV
	var_169_string = "Strict"; // 0x1956 MovS
	func_6364(var_57_cvector, var_169_string); // 0x1957 NEW_2
	var_170_int = 535183; // 0x1959 PushI
	SetMessage(var_170_int); // 0x195a TObjFunc
	ClearReplies(); // 0x195c TObjFunc
	var_171_int = 535184; // 0x195e PushI
	var_172_int = 36848; // 0x195f PushI
	var_173_int = 36851; // 0x1960 PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x1961 TObjFunc
	return 0; // 0x1963 Return
	
Label_6500:
	var_174_int = 36848; // 0x1964 PushI
	var_175_bool = var_56_bool == var_174_int; // 0x1965 Eq
	if(var_175_bool == 0) goto Label_6523; // 0x1966 JumpB
	var_176_string = ""; // 0x1967 PushV
	var_176_string = "Neutral"; // 0x1968 MovS
	func_6364(var_57_cvector, var_176_string); // 0x1969 NEW_2
	var_177_int = 535181; // 0x196b PushI
	SetMessage(var_177_int); // 0x196c TObjFunc
	ClearReplies(); // 0x196e TObjFunc
	var_178_int = 535186; // 0x1970 PushI
	var_179_int = 36855; // 0x1971 PushI
	var_180_int = 36854; // 0x1972 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x1973 TObjFunc
	var_181_int = 535185; // 0x1975 PushI
	var_182_int = -1; // 0x1976 PushI
	var_183_int = 36853; // 0x1977 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x1978 TObjFunc
	return 0; // 0x197a Return
	
Label_6523:
	var_184_int = 36855; // 0x197b PushI
	var_185_bool = var_56_bool == var_184_int; // 0x197c Eq
	if(var_185_bool == 0) goto Label_6541; // 0x197d JumpB
	var_186_string = ""; // 0x197e PushV
	var_186_string = "Neutral"; // 0x197f MovS
	func_6364(var_57_cvector, var_186_string); // 0x1980 NEW_2
	var_187_int = 535187; // 0x1982 PushI
	SetMessage(var_187_int); // 0x1983 TObjFunc
	ClearReplies(); // 0x1985 TObjFunc
	var_188_int = 535188; // 0x1987 PushI
	var_189_int = 14575; // 0x1988 PushI
	var_190_int = 36856; // 0x1989 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x198a TObjFunc
	return 0; // 0x198c Return
	
Label_6541:
	var_191_int = 14575; // 0x198d PushI
	var_192_bool = var_56_bool == var_191_int; // 0x198e Eq
	if(var_192_bool == 0) goto Label_6564; // 0x198f JumpB
	var_193_string = ""; // 0x1990 PushV
	var_193_string = "Strict"; // 0x1991 MovS
	func_6364(var_57_cvector, var_193_string); // 0x1992 NEW_2
	var_194_int = 513343; // 0x1994 PushI
	SetMessage(var_194_int); // 0x1995 TObjFunc
	ClearReplies(); // 0x1997 TObjFunc
	var_195_int = 513344; // 0x1999 PushI
	var_196_int = 14577; // 0x199a PushI
	var_197_int = 14576; // 0x199b PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x199c TObjFunc
	var_198_int = 535189; // 0x199e PushI
	var_199_int = 36860; // 0x199f PushI
	var_200_int = 36858; // 0x19a0 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x19a1 TObjFunc
	return 0; // 0x19a3 Return
	
Label_6564:
	var_201_int = 36860; // 0x19a4 PushI
	var_202_bool = var_56_bool == var_201_int; // 0x19a5 Eq
	if(var_202_bool == 0) goto Label_6587; // 0x19a6 JumpB
	var_203_string = ""; // 0x19a7 PushV
	var_203_string = "Neutral"; // 0x19a8 MovS
	func_6364(var_57_cvector, var_203_string); // 0x19a9 NEW_2
	var_204_int = 535190; // 0x19ab PushI
	SetMessage(var_204_int); // 0x19ac TObjFunc
	ClearReplies(); // 0x19ae TObjFunc
	var_205_int = 535191; // 0x19b0 PushI
	var_206_int = 14580; // 0x19b1 PushI
	var_207_int = 36861; // 0x19b2 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x19b3 TObjFunc
	var_208_int = 535192; // 0x19b5 PushI
	var_209_int = -1; // 0x19b6 PushI
	var_210_int = 36862; // 0x19b7 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x19b8 TObjFunc
	return 0; // 0x19ba Return
	
Label_6587:
	var_211_int = 14577; // 0x19bb PushI
	var_212_bool = var_56_bool == var_211_int; // 0x19bc Eq
	if(var_212_bool == 0) goto Label_6610; // 0x19bd JumpB
	var_213_string = ""; // 0x19be PushV
	var_213_string = "Strict"; // 0x19bf MovS
	func_6364(var_57_cvector, var_213_string); // 0x19c0 NEW_2
	var_214_int = 513345; // 0x19c2 PushI
	SetMessage(var_214_int); // 0x19c3 TObjFunc
	ClearReplies(); // 0x19c5 TObjFunc
	var_215_int = 513346; // 0x19c7 PushI
	var_216_int = -1; // 0x19c8 PushI
	var_217_int = 14578; // 0x19c9 PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x19ca TObjFunc
	var_218_int = 513347; // 0x19cc PushI
	var_219_int = 14580; // 0x19cd PushI
	var_220_int = 14579; // 0x19ce PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x19cf TObjFunc
	return 0; // 0x19d1 Return
	
Label_6610:
	var_221_int = 14580; // 0x19d2 PushI
	var_222_bool = var_56_bool == var_221_int; // 0x19d3 Eq
	if(var_222_bool == 0) goto Label_6633; // 0x19d4 JumpB
	var_223_string = ""; // 0x19d5 PushV
	var_223_string = "Strict"; // 0x19d6 MovS
	func_6364(var_57_cvector, var_223_string); // 0x19d7 NEW_2
	var_224_int = 513348; // 0x19d9 PushI
	SetMessage(var_224_int); // 0x19da TObjFunc
	ClearReplies(); // 0x19dc TObjFunc
	var_225_int = 513349; // 0x19de PushI
	var_226_int = 14582; // 0x19df PushI
	var_227_int = 14581; // 0x19e0 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x19e1 TObjFunc
	var_228_int = 535193; // 0x19e3 PushI
	var_229_int = -1; // 0x19e4 PushI
	var_230_int = 36864; // 0x19e5 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x19e6 TObjFunc
	return 0; // 0x19e8 Return
	
Label_6633:
	var_231_int = 14582; // 0x19e9 PushI
	var_232_bool = var_56_bool == var_231_int; // 0x19ea Eq
	if(var_232_bool == 0) goto Label_6651; // 0x19eb JumpB
	var_233_string = ""; // 0x19ec PushV
	var_233_string = "Neutral"; // 0x19ed MovS
	func_6364(var_57_cvector, var_233_string); // 0x19ee NEW_2
	var_234_int = 513350; // 0x19f0 PushI
	SetMessage(var_234_int); // 0x19f1 TObjFunc
	ClearReplies(); // 0x19f3 TObjFunc
	var_235_int = 513351; // 0x19f5 PushI
	var_236_int = -1; // 0x19f6 PushI
	var_237_int = 14583; // 0x19f7 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x19f8 TObjFunc
	return 0; // 0x19fa Return
	
Label_6651:
	var_3_string = 1; // 0x19fb TMovB
	var_238_bool = 0; // 0x19fc PushV
	func_7709(var_238_bool); // 0x19fd NEW_2
	if(var_238_bool == 0) goto Label_6659; // 0x19ff JumpB
	lshStopAnimation(); // 0x1a00 Func
	goto Label_6661; // 0x1a02 Jump
	
Label_6661:
	return 0; // 0x1a05 Return
	
Label_6659:
	StopAnimation(); // 0x1a03 Func
	
Label_6663:
	return 0; // 0x1a07 Return
}


task_21_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_int, var_56_int, var_57_cvector)
{
	var_58_int = 1; // 0x1aaa PushI
	if(var_58_int == 0) goto Label_6866; // 0x1aab JumpB
	func_7468(); // 0x1aad NEW_2
	var_60_int = 42551; // 0x1aaf PushI
	var_61_bool = var_56_int == var_60_int; // 0x1ab0 Eq
	if(var_61_bool == 0) goto Label_6854; // 0x1ab1 JumpB
	var_62_string = ""; // 0x1ab2 PushV
	var_62_string = "Neutral"; // 0x1ab3 MovS
	func_6803(var_57_cvector, var_62_string); // 0x1ab4 NEW_2
	var_79_int = 540542; // 0x1ab6 PushI
	SetMessage(var_79_int); // 0x1ab7 TObjFunc
	ClearReplies(); // 0x1ab9 TObjFunc
	var_80_int = 540543; // 0x1abb PushI
	var_81_int = -1; // 0x1abc PushI
	var_82_int = 42552; // 0x1abd PushI
	AddReply(var_80_int, var_81_int, var_82_int); // 0x1abe TObjFunc
	var_83_int = 540796; // 0x1ac0 PushI
	var_84_int = -1; // 0x1ac1 PushI
	var_85_int = 42845; // 0x1ac2 PushI
	AddReply(var_83_int, var_84_int, var_85_int); // 0x1ac3 TObjFunc
	return 0; // 0x1ac5 Return
	
Label_6854:
	var_3_string = 1; // 0x1ac6 TMovB
	var_86_bool = 0; // 0x1ac7 PushV
	func_7709(var_86_bool); // 0x1ac8 NEW_2
	if(var_86_bool == 0) goto Label_6862; // 0x1aca JumpB
	lshStopAnimation(); // 0x1acb Func
	goto Label_6864; // 0x1acd Jump
	
Label_6864:
	return 0; // 0x1ad0 Return
	
Label_6862:
	StopAnimation(); // 0x1ace Func
	
Label_6866:
	return 0; // 0x1ad2 Return
}


task_22_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_int)
{
	var_57_int = 10; // 0x1b20 PushI
	var_58_bool = var_56_int == var_57_int; // 0x1b21 Eq
	if(var_58_bool == 0) goto Label_6980; // 0x1b22 JumpB
	func_6939(); // 0x1b24 NEW_2
	var_60_bool = 0; // 0x1b26 PushV
	var_60_bool = 0; // 0x1b27 MovB
	var_61_bool = 0; // 0x1b28 PushV
	func_7194(var_61_bool); // 0x1b29 NEW_2
	if(var_61_bool == 0) goto Label_6961; // 0x1b2b JumpB
	var_64_bool = 0; // 0x1b2c PushV
	func_6908(var_64_bool); // 0x1b2d NEW_2
	if(var_64_bool == 0) goto Label_6961; // 0x1b2f JumpB
	var_60_bool = 1; // 0x1b30 MovB
	
Label_6961:
	if(var_60_bool == 0) goto Label_6974; // 0x1b31 JumpB
	var_81_bool = 0; // 0x1b32 PushV
	func_6888(var_81_bool); // 0x1b33 NEW_2
	if(var_81_bool == 0) goto Label_6973; // 0x1b35 JumpB
	var_100_bool = 0; var_101_object = Obj(); // 0x1b36 PushV
	var_102_object = Obj(); // 0x1b37 PushV
	func_7475(var_102_object); // 0x1b38 NEW_2
	var_101_object = var_102_object; // 0x1b39 Mov
	func_7342(var_101_object); // 0x1b3b NEW_2
	
Label_6973:
	goto Label_6980; // 0x1b3d Jump
	
Label_6980:
	return 0; // 0x1b44 Return
	
Label_6974:
	func_6903(var_56_int); // 0x1b3f NEW_2
	func_6930(); // 0x1b42 NEW_2
}


task_22_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	func_7121(); // 0x1b46 NEW_2
	func_6939(); // 0x1b49 NEW_2
	lshStopSpeech(); // 0x1b4b Func
	lshStopAnimation(); // 0x1b4d Func
	StopAsync(); // 0x1b4f Func
	Hold(); // 0x1b51 Func
	return 0; // 0x1b53 Return
}


task_22_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	StopGroup0(); // 0x1b54 Func
	func_6939(); // 0x1b57 NEW_2
	var_57_string = ""; // 0x1b59 PushV
	var_57_string = "Neutral"; // 0x1b5a MovS
	func_7422(var_57_string); // 0x1b5b NEW_2
	func_6930(); // 0x1b5e NEW_2
	return 0; // 0x1b60 Return
}


task_22_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_bool)
{
	var_57_bool = var_56_bool; // 0x1b62 Push
	if(var_57_bool == 0) goto Label_7016; // 0x1b63 JumpB
	func_6930(); // 0x1b65 NEW_2
	goto Label_7020; // 0x1b67 Jump
	
Label_7020:
	return 0; // 0x1b6c Return
	
Label_7016:
	var_63_string = ""; // 0x1b68 PushV
	var_63_string = "Neutral"; // 0x1b69 MovS
	func_7422(var_63_string); // 0x1b6a NEW_2
}


task_22_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector, var_56_object)
{
	var_57_bool = 0; var_58_bool = 0; // 0x1b6d PushV
	IsOverrideActive(var_58_bool); // 0x1b6e Func
	var_59_bool = var_58_bool == 0; // 0x1b70 Not
	if(var_59_bool == 0) goto Label_7049; // 0x1b71 JumpB
	EventDisable(0); // 0x1b72 EventDisable
	func_7121(); // 0x1b74 NEW_2
	var_60_bool = 0; var_61_object = Obj(); // 0x1b76 PushV
	var_61_object = var_56_object; // 0x1b77 Mov
	func_7185(var_61_object); // 0x1b78 NEW_2
	EventEnable(0); // 0x1b7a EventEnable
	var_74_object = Obj(); // 0x1b7b PushV
	var_74_object = var_56_object; // 0x1b7c Mov
	func_9081(var_74_object); // 0x1b7d NEW_2
	var_1262_string = ""; // 0x1b7f PushV
	var_1262_string = "Neutral"; // 0x1b80 MovS
	func_7422(var_1262_string); // 0x1b81 NEW_2
	func_6939(); // 0x1b84 NEW_2
	func_6930(); // 0x1b87 NEW_2
	
Label_7049:
	return 2; // 0x1b89 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_object, var_26_object, var_27_object, var_28_string, var_29_bool, var_30_object, var_31_object, var_32_object, var_33_string, var_34_bool, var_35_object, var_36_object, var_37_object, var_38_string, var_39_bool, var_40_object, var_41_object, var_42_object, var_43_string, var_44_bool, var_45_object, var_46_object, var_47_object, var_48_string, var_49_bool, var_50_object, var_51_object, var_52_object, var_53_string, var_54_bool, var_55_cvector)
{
	var_56_bool = GlobalVars[1]; // 0x1ad3 PushGE
	var_56_bool = 0; // 0x1ad4 MovB
	GlobalVars[1] = var_56_bool; // 0x1ad5 PopGE
	func_6874(var_55_cvector); // 0x1ad7 NEW_2
	return 0; // 0x1ad9 Return
}


func_7168(var_251_string, var_252_int)
{
	var_253_int = 0; var_254_int = 0; // 0x1c00 PushV
	GetProperty(var_251_string, var_254_int); // 0x1c01 ObjFunc
	var_255_int = var_254_int + var_252_int; // 0x1c03 Add
	SetProperty(var_251_string, var_255_int); // 0x1c04 ObjFunc
	return 2; // 0x1c06 Return
}


func_0(var_0_object, var_373_int, var_374_object)
{
	var_376_object = Obj(); var_377_bool = 0; var_378_int = 0; var_379_bool = 0; var_380_object = Obj(); var_381_bool = 0; var_382_int = 0; var_383_bool = 0; // 0x0 PushV
	var_0_object = var_374_object; // 0x1 TMov
	var_384_bool = 0; var_385_object = Obj(); var_386_float = 0; // 0x2 PushV
	var_385_object = var_374_object; // 0x3 Mov
	var_386_float = 70.0; // 0x4 MovF
	func_7199(var_385_object, var_386_float); // 0x5 NEW_2
	var_387_bool = var_384_bool == 0; // 0x7 Not
	if(var_387_bool == 0) goto Label_11; // 0x8 JumpB
	var_373_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_380_object); // 0xb Func
	var_388_int = 0; // 0xd PushV
	func_7703(var_388_int); // 0xe NEW_2
	SetNPCName(var_388_int); // 0x10 ObjFunc
	var_389_int = 0; // 0x12 PushV
	func_7701(var_389_int); // 0x13 NEW_2
	SetNPCDescription(var_389_int); // 0x15 ObjFunc
	var_390_string = ""; // 0x17 PushV
	func_7705(var_390_string); // 0x18 NEW_2
	SetPhoto(var_390_string); // 0x1a ObjFunc
	var_391_string = ""; // 0x1c PushV
	func_7707(var_391_string); // 0x1d NEW_2
	SetPhoto2(var_391_string); // 0x1f ObjFunc
	var_392_int = 0; // 0x21 PushV
	func_9064(var_392_int); // 0x22 NEW_2
	SetPlayerName(var_392_int); // 0x24 ObjFunc
	var_382_int = -1; // 0x26 MovI
	IsOverrideActive(var_381_bool); // 0x27 Func
	var_393_bool = var_381_bool; // 0x29 Push
	if(var_393_bool == 0) goto Label_45; // 0x2a JumpB
	var_373_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_380_object); // 0x2d Func
	var_394_bool = 0; var_395_object = Obj(); // 0x2f PushV
	var_396_object = Obj(); // 0x30 PushV
	func_7475(var_396_object); // 0x31 NEW_2
	var_395_object = var_396_object; // 0x32 Mov
	func_7284(var_394_bool, var_395_object); // 0x34 NEW_2
	var_397_object = Obj(); var_398_object = Obj(); // 0x36 PushV
	var_397_object = var_374_object; // 0x37 Mov
	var_398_object = var_380_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_399_object, var_400_object, var_401_string, var_402_bool, var_397_object, var_398_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_383_bool); // 0x3d ObjFunc
	
Label_63:
	var_455_bool = var_383_bool == 0; // 0x3f Not
	if(var_455_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_383_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_456_object = Obj(); // 0x46 PushV
	var_456_object = var_374_object; // 0x47 Mov
	func_7267(); // 0x48 NEW_2
	StopDialog(var_380_object); // 0x4a Func
	GetReturnValue(var_382_int); // 0x4c ObjFunc
	var_373_int = var_382_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_8708(var_1008_bool)
{
	var_1010_int = 0; var_1011_string = ""; // 0x2205 PushV
	var_1011_string = "ood6Alexandr2"; // 0x2206 MovS
	func_7502(var_1010_int, var_1011_string); // 0x2207 NEW_2
	var_1012_int = 0; // 0x2209 PushI
	var_1013_bool = var_1010_int == var_1012_int; // 0x220a Eq
	if(var_1013_bool == 0) goto Label_8718; // 0x220b JumpB
	var_1008_bool = 1; // 0x220c MovB
	return 0; // 0x220d Return
	
Label_8718:
	var_1008_bool = 0; // 0x220e MovB
	return 0; // 0x220f Return
}


func_7684(var_75_int)
{
	var_76_int = 0; var_77_bool = 0; var_78_int = 0; var_79_bool = 0; // 0x1e04 PushV
	var_78_int = 0; // 0x1e05 MovI
	
Label_7686:
	var_80_string = "all"; // 0x1e06 PushS
	var_81_string = ""; var_82_int = 0; // 0x1e07 PushV
	var_82_int = var_78_int; // 0x1e08 Mov
	func_7677(var_81_string, var_82_int); // 0x1e09 NEW_2
	HasAnimation(var_79_bool, var_80_string, var_81_string); // 0x1e0b Func
	var_86_bool = var_79_bool == 0; // 0x1e0d Not
	if(var_86_bool == 0) goto Label_7696; // 0x1e0e JumpB
	goto Label_7699; // 0x1e0f Jump
	
Label_7699:
	var_75_int = var_78_int; // 0x1e13 Mov
	return 4; // 0x1e14 Return
	
Label_7696:
	var_87_int = 1; // 0x1e10 PushI
	var_78_int = var_78_int + var_87_int; // 0x1e11 Add2
	goto Label_7686; // 0x1e12 Jump
}


func_7175(var_64_bool, var_65_cvector)
{
	var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_bool = 0; // 0x1c07 PushV
	GetPosition(var_69_cvector); // 0x1c08 Func
	var_70_cvector = var_65_cvector - var_69_cvector; // 0x1c0a Sub2
	var_72_float = GetByIndex(var_70_cvector, 0); // 0x1c0b PushE
	var_73_float = GetByIndex(var_70_cvector, 2); // 0x1c0c PushE
	Rotate(var_72_float, var_73_float, var_71_bool); // 0x1c0d Func
	var_64_bool = var_71_bool; // 0x1c0f Mov
	return 6; // 0x1c10 Return
}


func_6664(var_0_object, var_1206_int, var_1207_object)
{
	var_1209_object = Obj(); var_1210_bool = 0; var_1211_int = 0; var_1212_bool = 0; var_1213_object = Obj(); var_1214_bool = 0; var_1215_int = 0; var_1216_bool = 0; // 0x1a08 PushV
	var_0_object = var_1207_object; // 0x1a09 TMov
	var_1217_bool = 0; var_1218_object = Obj(); var_1219_float = 0; // 0x1a0a PushV
	var_1218_object = var_1207_object; // 0x1a0b Mov
	var_1219_float = 70.0; // 0x1a0c MovF
	func_7199(var_1218_object, var_1219_float); // 0x1a0d NEW_2
	var_1220_bool = var_1217_bool == 0; // 0x1a0f Not
	if(var_1220_bool == 0) goto Label_6675; // 0x1a10 JumpB
	var_1206_int = -2; // 0x1a11 MovI
	return 8; // 0x1a12 Return
	
Label_6675:
	CreateDialog(var_1213_object); // 0x1a13 Func
	var_1221_int = 0; // 0x1a15 PushV
	func_7703(var_1221_int); // 0x1a16 NEW_2
	SetNPCName(var_1221_int); // 0x1a18 ObjFunc
	var_1222_int = 0; // 0x1a1a PushV
	func_7701(var_1222_int); // 0x1a1b NEW_2
	SetNPCDescription(var_1222_int); // 0x1a1d ObjFunc
	var_1223_string = ""; // 0x1a1f PushV
	func_7705(var_1223_string); // 0x1a20 NEW_2
	SetPhoto(var_1223_string); // 0x1a22 ObjFunc
	var_1224_string = ""; // 0x1a24 PushV
	func_7707(var_1224_string); // 0x1a25 NEW_2
	SetPhoto2(var_1224_string); // 0x1a27 ObjFunc
	var_1225_int = 0; // 0x1a29 PushV
	func_9064(var_1225_int); // 0x1a2a NEW_2
	SetPlayerName(var_1225_int); // 0x1a2c ObjFunc
	var_1215_int = -1; // 0x1a2e MovI
	IsOverrideActive(var_1214_bool); // 0x1a2f Func
	var_1226_bool = var_1214_bool; // 0x1a31 Push
	if(var_1226_bool == 0) goto Label_6709; // 0x1a32 JumpB
	var_1206_int = -2; // 0x1a33 MovI
	return 8; // 0x1a34 Return
	
Label_6709:
	DoDialog(var_1213_object); // 0x1a35 Func
	var_1227_bool = 0; var_1228_object = Obj(); // 0x1a37 PushV
	var_1229_object = Obj(); // 0x1a38 PushV
	func_7475(var_1229_object); // 0x1a39 NEW_2
	var_1228_object = var_1229_object; // 0x1a3a Mov
	func_7284(var_1227_bool, var_1228_object); // 0x1a3c NEW_2
	var_1230_object = Obj(); var_1231_object = Obj(); // 0x1a3e PushV
	var_1230_object = var_1207_object; // 0x1a3f Mov
	var_1231_object = var_1213_object; // 0x1a40 Mov
	TaskCall(21); // 0x1a41 TaskCall
	func_6745(var_1232_object, var_1233_object, var_1234_string, var_1235_bool, var_1230_object, var_1231_object); // 0x1a42 NEW_2
	TaskReturn(); // 0x1a43 TaskReturn
	IsDialogEnd(var_1216_bool); // 0x1a45 ObjFunc
	
Label_6727:
	var_1260_bool = var_1216_bool == 0; // 0x1a47 Not
	if(var_1260_bool == 0) goto Label_6734; // 0x1a48 JumpB
	sync(); // 0x1a49 Func
	IsDialogEnd(var_1216_bool); // 0x1a4b ObjFunc
	goto Label_6727; // 0x1a4d Jump
	
Label_6734:
	var_1261_object = Obj(); // 0x1a4e PushV
	var_1261_object = var_1207_object; // 0x1a4f Mov
	func_7267(); // 0x1a50 NEW_2
	StopDialog(var_1213_object); // 0x1a52 Func
	GetReturnValue(var_1215_int); // 0x1a54 ObjFunc
	var_1206_int = var_1215_int; // 0x1a56 Mov
	return 8; // 0x1a57 Return
}


func_8720(var_1032_bool)
{
	var_1034_int = 0; var_1035_string = ""; // 0x2211 PushV
	var_1035_string = "ood6Alexandr3"; // 0x2212 MovS
	func_7502(var_1034_int, var_1035_string); // 0x2213 NEW_2
	var_1036_int = 0; // 0x2215 PushI
	var_1037_bool = var_1034_int == var_1036_int; // 0x2216 Eq
	if(var_1037_bool == 0) goto Label_8730; // 0x2217 JumpB
	var_1032_bool = 1; // 0x2218 MovB
	return 0; // 0x2219 Return
	
Label_8730:
	var_1032_bool = 0; // 0x221a MovB
	return 0; // 0x221b Return
}


func_7185(var_60_bool)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x1c11 PushV
	GetPosition(var_63_cvector); // 0x1c12 ObjFunc
	var_64_bool = 0; var_65_cvector = CVector(0,0,0); // 0x1c14 PushV
	var_65_cvector = var_63_cvector; // 0x1c15 Mov
	func_7175(var_64_bool, var_65_cvector); // 0x1c16 NEW_2
	var_60_bool = var_64_bool; // 0x1c17 Mov
	return 2; // 0x1c19 Return
}


func_8210()
{
	var_96_string = "ood5Alexandr1"; // 0x2013 PushS
	var_97_int = 1; // 0x2014 PushI
	SetVariable(var_96_string, var_97_int); // 0x2015 Func
	return 0; // 0x2017 Return
}


func_7701(var_136_int)
{
	var_136_int = 515528; // 0x1e15 MovI
	return 0; // 0x1e16 Return
}


func_7703(var_135_int)
{
	var_135_int = 502854; // 0x1e17 MovI
	return 0; // 0x1e18 Return
}


func_8216()
{
	var_110_string = "ood5Alexandr2"; // 0x2019 PushS
	var_111_int = 1; // 0x201a PushI
	SetVariable(var_110_string, var_111_int); // 0x201b Func
	return 0; // 0x201d Return
}


func_7705(var_137_string)
{
	var_137_string = "ui/NPC_Alexandr.png"; // 0x1e19 MovS
	return 0; // 0x1e1a Return
}


func_7194(var_57_bool)
{
	var_58_bool = 0; var_59_bool = 0; // 0x1c1a PushV
	IsLoaded(var_59_bool); // 0x1c1b Func
	var_57_bool = var_59_bool; // 0x1c1d Mov
	return 2; // 0x1c1e Return
}


func_7707(var_138_string)
{
	var_138_string = "ui/NPC_Alexandr_b.png"; // 0x1e1b MovS
	return 0; // 0x1e1c Return
}


func_8732(var_1051_bool)
{
	var_1053_int = 0; var_1054_string = ""; // 0x221d PushV
	var_1054_string = "d6q01KnowKillerIsKlara"; // 0x221e MovS
	func_7502(var_1053_int, var_1054_string); // 0x221f NEW_2
	var_1055_int = 1; // 0x2221 PushI
	var_1056_bool = var_1053_int == var_1055_int; // 0x2222 Eq
	if(var_1056_bool == 0) goto Label_8742; // 0x2223 JumpB
	var_1051_bool = 1; // 0x2224 MovB
	return 0; // 0x2225 Return
	
Label_8742:
	var_1051_bool = 0; // 0x2226 MovB
	return 0; // 0x2227 Return
}


func_7709(var_130_bool)
{
	var_130_bool = 1; // 0x1e1d MovB
	return 0; // 0x1e1e Return
}


func_8222(var_300_object)
{
	var_302_bool = 0; var_303_object = Obj(); var_304_float = 0; // 0x201f PushV
	var_303_object = var_300_object; // 0x2020 Mov
	var_304_float = 0.1; // 0x2021 MovF
	func_7581(var_302_bool, var_303_object, var_304_float); // 0x2022 NEW_2
	return 0; // 0x2024 Return
}


func_7199(var_88_bool, var_90_float)
{
	var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_bool = 0; var_108_bool = 0; // 0x1c1f PushV
	GetPosition(var_101_cvector); // 0x1c20 ObjFunc
	GetEyesHeight(var_100_float); // 0x1c22 ObjFunc
	var_109_float = GetByIndex(var_101_cvector, 1); // 0x1c24 PushE
	var_109_float = var_109_float + var_100_float; // 0x1c25 Add2
	SetByIndex(var_101_cvector, 1) = var_109_float; // 0x1c26 PopE
	GetPosition(var_102_cvector); // 0x1c27 Func
	GetEyesHeight(var_100_float); // 0x1c29 Func
	var_110_float = GetByIndex(var_102_cvector, 1); // 0x1c2b PushE
	var_110_float = var_110_float + var_100_float; // 0x1c2c Add2
	SetByIndex(var_102_cvector, 1) = var_110_float; // 0x1c2d PopE
	var_103_cvector = var_101_cvector - var_102_cvector; // 0x1c2e Sub2
	var_111_float = GetByIndex(var_103_cvector, 1); // 0x1c2f PushE
	var_111_float = 0; // 0x1c30 MovI
	SetByIndex(var_103_cvector, 1) = var_111_float; // 0x1c31 PopE
	var_112_int = var_103_cvector | var_103_cvector; // 0x1c32 Or
	var_113_float = sqrt(var_112_int); // 0x1c33 Sqrt
	var_103_cvector = var_103_cvector / var_103_cvector; // 0x1c34 Div2
	var_104_cvector = -var_103_cvector; // 0x1c35 Neg2
	var_114_float = var_103_cvector * var_90_float; // 0x1c36 Mult
	var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); // 0x1c37 PushV
	var_117_cvector = CVector(0.0, 1.0, 0.0); // 0x1c38 PushVec
	var_116_cvector = var_104_cvector ^ var_117_cvector; // 0x1c39 Xor2
	func_7481(var_115_cvector, var_116_cvector); // 0x1c3a NEW_2
	var_123_int = 25; // 0x1c3c PushI
	var_124_float = var_115_cvector * var_123_int; // 0x1c3d Mult
	var_125_int = var_114_float + var_124_float; // 0x1c3e Add
	var_126_cvector = CVector(0.0, 10.0, 0.0); // 0x1c3f PushVec
	var_105_cvector = var_125_int - var_126_cvector; // 0x1c40 Sub2
	var_106_cvector = var_102_cvector + var_105_cvector; // 0x1c41 Add2
	IsOverrideActive(var_107_bool); // 0x1c42 Func
	var_127_bool = var_107_bool; // 0x1c44 Push
	if(var_127_bool == 0) goto Label_7240; // 0x1c45 JumpB
	var_88_bool = 0; // 0x1c46 MovB
	return 18; // 0x1c47 Return
	
Label_7240:
	StopWorld(); // 0x1c48 Func
	CameraTransit(var_106_cvector, var_104_cvector); // 0x1c4a Func
	var_128_float = GetByIndex(var_105_cvector, 0); // 0x1c4c PushE
	var_129_float = GetByIndex(var_105_cvector, 2); // 0x1c4d PushE
	Rotate(var_128_float, var_129_float); // 0x1c4e Func
	var_130_bool = 0; // 0x1c50 PushV
	func_7709(var_130_bool); // 0x1c51 NEW_2
	if(var_130_bool == 0) goto Label_7253; // 0x1c53 JumpB
	goto Label_7261; // 0x1c54 Jump
	
Label_7261:
	CameraWaitForPlayFinish(); // 0x1c5d Func
	ResumeWorld(); // 0x1c5f Func
	var_88_bool = 1; // 0x1c61 MovB
	return 18; // 0x1c62 Return
	
Label_7253:
	var_131_string = "head"; // 0x1c55 PushS
	HasAnimationTrack(var_108_bool, var_131_string); // 0x1c56 Func
	var_132_bool = var_108_bool; // 0x1c58 Push
	if(var_132_bool == 0) goto Label_7261; // 0x1c59 JumpB
	var_133_string = "head"; // 0x1c5a PushS
	LookAsyncCamera(var_133_string); // 0x1c5b Func
}


func_7711()
{
	var_173_object = Obj(); var_174_string = ""; var_175_float = 0; // 0x1e20 PushV
	var_176_object = Obj(); // 0x1e21 PushV
	func_9014(var_176_object); // 0x1e22 NEW_2
	var_173_object = var_176_object; // 0x1e23 Mov
	var_174_string = "pt_map_katerina"; // 0x1e25 MovS
	var_175_float = 2; // 0x1e26 MovI
	func_9031(var_173_object, var_174_string, var_175_float); // 0x1e27 NEW_2
	var_196_object = Obj(); // 0x1e29 PushV
	func_9014(var_196_object); // 0x1e2a NEW_2
	ShowMap(var_196_object); // 0x1e2c ObjFunc
	return 0; // 0x1e2e Return
}


func_5664(var_2_object, var_868_string)
{
	var_869_bool = 0; // 0x1621 PushV
	func_7709(var_869_bool); // 0x1622 NEW_2
	var_870_bool = var_869_bool == 0; // 0x1624 Not
	if(var_870_bool == 0) goto Label_5671; // 0x1625 JumpB
	return 0; // 0x1626 Return
	
Label_5671:
	var_871_bool = var_868_string == var_2_object; // 0x1627 Eq
	if(var_871_bool == 0) goto Label_5674; // 0x1628 JumpB
	return 0; // 0x1629 Return
	
Label_5674:
	var_872_string = ""; var_873_bool = 0; // 0x162a PushV
	var_872_string = var_868_string; // 0x162b Mov
	var_874_string = ""; // 0x162c PushS
	var_875_bool = var_868_string == var_874_string; // 0x162d Eq
	if(var_875_bool == 0) goto Label_5681; // 0x162e JumpB
	var_873_bool = 0; // 0x162f MovB
	goto Label_5682; // 0x1630 Jump
	
Label_5682:
	func_7438(var_872_string, var_873_bool); // 0x1632 NEW_2
	var_2_object = var_868_string; // 0x1634 TMov
	return 0; // 0x1635 Return
	
Label_5681:
	var_873_bool = 1; // 0x1631 MovB
}


func_8229()
{
	var_979_string = "ood6Alexandr1"; // 0x2026 PushS
	var_980_int = 1; // 0x2027 PushI
	SetVariable(var_979_string, var_980_int); // 0x2028 Func
	return 0; // 0x202a Return
}


func_8744(var_1057_bool)
{
	var_1059_int = 0; var_1060_string = ""; // 0x2229 PushV
	var_1060_string = "ood6Alexandr4"; // 0x222a MovS
	func_7502(var_1059_int, var_1060_string); // 0x222b NEW_2
	var_1061_int = 0; // 0x222d PushI
	var_1062_bool = var_1059_int == var_1061_int; // 0x222e Eq
	if(var_1062_bool == 0) goto Label_8754; // 0x222f JumpB
	var_1057_bool = 1; // 0x2230 MovB
	return 0; // 0x2231 Return
	
Label_8754:
	var_1057_bool = 0; // 0x2232 MovB
	return 0; // 0x2233 Return
}


func_8235()
{
	var_145_string = "ood6Alexandr2"; // 0x202c PushS
	var_146_int = 1; // 0x202d PushI
	SetVariable(var_145_string, var_146_int); // 0x202e Func
	return 0; // 0x2030 Return
}


func_1580(var_0_object, var_933_int, var_934_object)
{
	var_936_object = Obj(); var_937_bool = 0; var_938_int = 0; var_939_bool = 0; var_940_object = Obj(); var_941_bool = 0; var_942_int = 0; var_943_bool = 0; // 0x62c PushV
	var_0_object = var_934_object; // 0x62d TMov
	var_944_bool = 0; var_945_object = Obj(); var_946_float = 0; // 0x62e PushV
	var_945_object = var_934_object; // 0x62f Mov
	var_946_float = 70.0; // 0x630 MovF
	func_7199(var_945_object, var_946_float); // 0x631 NEW_2
	var_947_bool = var_944_bool == 0; // 0x633 Not
	if(var_947_bool == 0) goto Label_1591; // 0x634 JumpB
	var_933_int = -2; // 0x635 MovI
	return 8; // 0x636 Return
	
Label_1591:
	CreateDialog(var_940_object); // 0x637 Func
	var_948_int = 0; // 0x639 PushV
	func_7703(var_948_int); // 0x63a NEW_2
	SetNPCName(var_948_int); // 0x63c ObjFunc
	var_949_int = 0; // 0x63e PushV
	func_7701(var_949_int); // 0x63f NEW_2
	SetNPCDescription(var_949_int); // 0x641 ObjFunc
	var_950_string = ""; // 0x643 PushV
	func_7705(var_950_string); // 0x644 NEW_2
	SetPhoto(var_950_string); // 0x646 ObjFunc
	var_951_string = ""; // 0x648 PushV
	func_7707(var_951_string); // 0x649 NEW_2
	SetPhoto2(var_951_string); // 0x64b ObjFunc
	var_952_int = 0; // 0x64d PushV
	func_9064(var_952_int); // 0x64e NEW_2
	SetPlayerName(var_952_int); // 0x650 ObjFunc
	var_942_int = -1; // 0x652 MovI
	IsOverrideActive(var_941_bool); // 0x653 Func
	var_953_bool = var_941_bool; // 0x655 Push
	if(var_953_bool == 0) goto Label_1625; // 0x656 JumpB
	var_933_int = -2; // 0x657 MovI
	return 8; // 0x658 Return
	
Label_1625:
	DoDialog(var_940_object); // 0x659 Func
	var_954_bool = 0; var_955_object = Obj(); // 0x65b PushV
	var_956_object = Obj(); // 0x65c PushV
	func_7475(var_956_object); // 0x65d NEW_2
	var_955_object = var_956_object; // 0x65e Mov
	func_7284(var_954_bool, var_955_object); // 0x660 NEW_2
	var_957_object = Obj(); var_958_object = Obj(); // 0x662 PushV
	var_957_object = var_934_object; // 0x663 Mov
	var_958_object = var_940_object; // 0x664 Mov
	TaskCall(9); // 0x665 TaskCall
	func_1661(var_959_object, var_960_object, var_961_string, var_962_bool, var_957_object, var_958_object); // 0x666 NEW_2
	TaskReturn(); // 0x667 TaskReturn
	IsDialogEnd(var_943_bool); // 0x669 ObjFunc
	
Label_1643:
	var_1072_bool = var_943_bool == 0; // 0x66b Not
	if(var_1072_bool == 0) goto Label_1650; // 0x66c JumpB
	sync(); // 0x66d Func
	IsDialogEnd(var_943_bool); // 0x66f ObjFunc
	goto Label_1643; // 0x671 Jump
	
Label_1650:
	var_1073_object = Obj(); // 0x672 PushV
	var_1073_object = var_934_object; // 0x673 Mov
	func_7267(); // 0x674 NEW_2
	StopDialog(var_940_object); // 0x676 Func
	GetReturnValue(var_942_int); // 0x678 ObjFunc
	var_933_int = var_942_int; // 0x67a Mov
	return 8; // 0x67b Return
}


func_1067(var_0_object, var_1147_int, var_1148_object)
{
	var_1150_object = Obj(); var_1151_bool = 0; var_1152_int = 0; var_1153_bool = 0; var_1154_object = Obj(); var_1155_bool = 0; var_1156_int = 0; var_1157_bool = 0; // 0x42b PushV
	var_0_object = var_1148_object; // 0x42c TMov
	var_1158_bool = 0; var_1159_object = Obj(); var_1160_float = 0; // 0x42d PushV
	var_1159_object = var_1148_object; // 0x42e Mov
	var_1160_float = 70.0; // 0x42f MovF
	func_7199(var_1159_object, var_1160_float); // 0x430 NEW_2
	var_1161_bool = var_1158_bool == 0; // 0x432 Not
	if(var_1161_bool == 0) goto Label_1078; // 0x433 JumpB
	var_1147_int = -2; // 0x434 MovI
	return 8; // 0x435 Return
	
Label_1078:
	CreateDialog(var_1154_object); // 0x436 Func
	var_1162_int = 0; // 0x438 PushV
	func_7703(var_1162_int); // 0x439 NEW_2
	SetNPCName(var_1162_int); // 0x43b ObjFunc
	var_1163_int = 0; // 0x43d PushV
	func_7701(var_1163_int); // 0x43e NEW_2
	SetNPCDescription(var_1163_int); // 0x440 ObjFunc
	var_1164_string = ""; // 0x442 PushV
	func_7705(var_1164_string); // 0x443 NEW_2
	SetPhoto(var_1164_string); // 0x445 ObjFunc
	var_1165_string = ""; // 0x447 PushV
	func_7707(var_1165_string); // 0x448 NEW_2
	SetPhoto2(var_1165_string); // 0x44a ObjFunc
	var_1166_int = 0; // 0x44c PushV
	func_9064(var_1166_int); // 0x44d NEW_2
	SetPlayerName(var_1166_int); // 0x44f ObjFunc
	var_1156_int = -1; // 0x451 MovI
	IsOverrideActive(var_1155_bool); // 0x452 Func
	var_1167_bool = var_1155_bool; // 0x454 Push
	if(var_1167_bool == 0) goto Label_1112; // 0x455 JumpB
	var_1147_int = -2; // 0x456 MovI
	return 8; // 0x457 Return
	
Label_1112:
	DoDialog(var_1154_object); // 0x458 Func
	var_1168_bool = 0; var_1169_object = Obj(); // 0x45a PushV
	var_1170_object = Obj(); // 0x45b PushV
	func_7475(var_1170_object); // 0x45c NEW_2
	var_1169_object = var_1170_object; // 0x45d Mov
	func_7284(var_1168_bool, var_1169_object); // 0x45f NEW_2
	var_1171_object = Obj(); var_1172_object = Obj(); // 0x461 PushV
	var_1171_object = var_1148_object; // 0x462 Mov
	var_1172_object = var_1154_object; // 0x463 Mov
	TaskCall(5); // 0x464 TaskCall
	func_1148(var_1173_object, var_1174_object, var_1175_string, var_1176_bool, var_1171_object, var_1172_object); // 0x465 NEW_2
	TaskReturn(); // 0x466 TaskReturn
	IsDialogEnd(var_1157_bool); // 0x468 ObjFunc
	
Label_1130:
	var_1204_bool = var_1157_bool == 0; // 0x46a Not
	if(var_1204_bool == 0) goto Label_1137; // 0x46b JumpB
	sync(); // 0x46c Func
	IsDialogEnd(var_1157_bool); // 0x46e ObjFunc
	goto Label_1130; // 0x470 Jump
	
Label_1137:
	var_1205_object = Obj(); // 0x471 PushV
	var_1205_object = var_1148_object; // 0x472 Mov
	func_7267(); // 0x473 NEW_2
	StopDialog(var_1154_object); // 0x475 Func
	GetReturnValue(var_1156_int); // 0x477 ObjFunc
	var_1147_int = var_1156_int; // 0x479 Mov
	return 8; // 0x47a Return
}


func_7727()
{
	var_263_string = "playsound"; // 0x1e30 PushS
	var_264_string = "givemoney"; // 0x1e31 PushS
	TriggerWorld(var_263_string, var_264_string); // 0x1e32 Func
	return 0; // 0x1e34 Return
}


func_8241()
{
	var_151_string = "ood6Alexandr3"; // 0x2032 PushS
	var_152_int = 1; // 0x2033 PushI
	SetVariable(var_151_string, var_152_int); // 0x2034 Func
	return 0; // 0x2036 Return
}


func_8756(var_1117_bool)
{
	var_1119_int = 0; var_1120_string = ""; // 0x2235 PushV
	var_1120_string = "d7q02"; // 0x2236 MovS
	func_7502(var_1119_int, var_1120_string); // 0x2237 NEW_2
	var_1121_int = 1; // 0x2239 PushI
	var_1122_bool = var_1119_int == var_1121_int; // 0x223a Eq
	if(var_1122_bool == 0) goto Label_8766; // 0x223b JumpB
	var_1117_bool = 1; // 0x223c MovB
	return 0; // 0x223d Return
	
Label_8766:
	var_1117_bool = 0; // 0x223e MovB
	return 0; // 0x223f Return
}


func_7733()
{
	var_185_string = "playsound"; // 0x1e36 PushS
	var_186_string = "giveitem"; // 0x1e37 PushS
	TriggerWorld(var_185_string, var_186_string); // 0x1e38 Func
	return 0; // 0x1e3a Return
}


func_4149(var_2_object, var_666_string)
{
	var_667_bool = 0; // 0x1036 PushV
	func_7709(var_667_bool); // 0x1037 NEW_2
	var_668_bool = var_667_bool == 0; // 0x1039 Not
	if(var_668_bool == 0) goto Label_4156; // 0x103a JumpB
	return 0; // 0x103b Return
	
Label_4156:
	var_669_bool = var_666_string == var_2_object; // 0x103c Eq
	if(var_669_bool == 0) goto Label_4159; // 0x103d JumpB
	return 0; // 0x103e Return
	
Label_4159:
	var_670_string = ""; var_671_bool = 0; // 0x103f PushV
	var_670_string = var_666_string; // 0x1040 Mov
	var_672_string = ""; // 0x1041 PushS
	var_673_bool = var_666_string == var_672_string; // 0x1042 Eq
	if(var_673_bool == 0) goto Label_4166; // 0x1043 JumpB
	var_671_bool = 0; // 0x1044 MovB
	goto Label_4167; // 0x1045 Jump
	
Label_4167:
	func_7438(var_670_string, var_671_bool); // 0x1047 NEW_2
	var_2_object = var_666_string; // 0x1049 TMov
	return 0; // 0x104a Return
	
Label_4166:
	var_671_bool = 1; // 0x1046 MovB
}


func_8247()
{
	var_157_string = "ood6Alexandr4"; // 0x2038 PushS
	var_158_int = 1; // 0x2039 PushI
	SetVariable(var_157_string, var_158_int); // 0x203a Func
	return 0; // 0x203c Return
}


func_7739()
{
	var_141_string = "ood1Alexandr1"; // 0x1e3c PushS
	var_142_int = 1; // 0x1e3d PushI
	SetVariable(var_141_string, var_142_int); // 0x1e3e Func
	return 0; // 0x1e40 Return
}


func_8253()
{
	var_163_object = Obj(); var_164_object = Obj(); // 0x203d PushV
	var_165_object = Obj(); // 0x203e PushV
	func_9014(var_165_object); // 0x203f NEW_2
	var_164_object = var_165_object; // 0x2040 Mov
	var_166_string = "d6q01AlexandrGotoKaterina"; // 0x2042 PushS
	var_167_string = "pt_map_katerina"; // 0x2043 PushS
	var_168_int = 1; // 0x2044 PushI
	var_169_int = 515397; // 0x2045 PushI
	var_170_float = 0; // 0x2046 PushV
	func_7638(var_170_float); // 0x2047 NEW_2
	AddMark(var_166_string, var_167_string, var_168_int, var_169_int, var_170_float); // 0x2049 ObjFunc
	return 2; // 0x204b Return
}


func_8768(var_1123_bool)
{
	var_1125_int = 0; var_1126_string = ""; // 0x2241 PushV
	var_1126_string = "ood7Alexandr1"; // 0x2242 MovS
	func_7502(var_1125_int, var_1126_string); // 0x2243 NEW_2
	var_1127_int = 0; // 0x2245 PushI
	var_1128_bool = var_1125_int == var_1127_int; // 0x2246 Eq
	if(var_1128_bool == 0) goto Label_8778; // 0x2247 JumpB
	var_1123_bool = 1; // 0x2248 MovB
	return 0; // 0x2249 Return
	
Label_8778:
	var_1123_bool = 0; // 0x224a MovB
	return 0; // 0x224b Return
}


func_7745()
{
	var_762_string = "d4AlexandrVisit"; // 0x1e42 PushS
	var_763_int = 1; // 0x1e43 PushI
	SetVariable(var_762_string, var_763_int); // 0x1e44 Func
	return 0; // 0x1e46 Return
}


func_6211(var_0_object, var_1076_int, var_1077_object)
{
	var_1079_object = Obj(); var_1080_bool = 0; var_1081_int = 0; var_1082_bool = 0; var_1083_object = Obj(); var_1084_bool = 0; var_1085_int = 0; var_1086_bool = 0; // 0x1843 PushV
	var_0_object = var_1077_object; // 0x1844 TMov
	var_1087_bool = 0; var_1088_object = Obj(); var_1089_float = 0; // 0x1845 PushV
	var_1088_object = var_1077_object; // 0x1846 Mov
	var_1089_float = 70.0; // 0x1847 MovF
	func_7199(var_1088_object, var_1089_float); // 0x1848 NEW_2
	var_1090_bool = var_1087_bool == 0; // 0x184a Not
	if(var_1090_bool == 0) goto Label_6222; // 0x184b JumpB
	var_1076_int = -2; // 0x184c MovI
	return 8; // 0x184d Return
	
Label_6222:
	CreateDialog(var_1083_object); // 0x184e Func
	var_1091_int = 0; // 0x1850 PushV
	func_7703(var_1091_int); // 0x1851 NEW_2
	SetNPCName(var_1091_int); // 0x1853 ObjFunc
	var_1092_int = 0; // 0x1855 PushV
	func_7701(var_1092_int); // 0x1856 NEW_2
	SetNPCDescription(var_1092_int); // 0x1858 ObjFunc
	var_1093_string = ""; // 0x185a PushV
	func_7705(var_1093_string); // 0x185b NEW_2
	SetPhoto(var_1093_string); // 0x185d ObjFunc
	var_1094_string = ""; // 0x185f PushV
	func_7707(var_1094_string); // 0x1860 NEW_2
	SetPhoto2(var_1094_string); // 0x1862 ObjFunc
	var_1095_int = 0; // 0x1864 PushV
	func_9064(var_1095_int); // 0x1865 NEW_2
	SetPlayerName(var_1095_int); // 0x1867 ObjFunc
	var_1085_int = -1; // 0x1869 MovI
	IsOverrideActive(var_1084_bool); // 0x186a Func
	var_1096_bool = var_1084_bool; // 0x186c Push
	if(var_1096_bool == 0) goto Label_6256; // 0x186d JumpB
	var_1076_int = -2; // 0x186e MovI
	return 8; // 0x186f Return
	
Label_6256:
	DoDialog(var_1083_object); // 0x1870 Func
	var_1097_bool = 0; var_1098_object = Obj(); // 0x1872 PushV
	var_1099_object = Obj(); // 0x1873 PushV
	func_7475(var_1099_object); // 0x1874 NEW_2
	var_1098_object = var_1099_object; // 0x1875 Mov
	func_7284(var_1097_bool, var_1098_object); // 0x1877 NEW_2
	var_1100_object = Obj(); var_1101_object = Obj(); // 0x1879 PushV
	var_1100_object = var_1077_object; // 0x187a Mov
	var_1101_object = var_1083_object; // 0x187b Mov
	TaskCall(19); // 0x187c TaskCall
	func_6292(var_1102_object, var_1103_object, var_1104_string, var_1105_bool, var_1100_object, var_1101_object); // 0x187d NEW_2
	TaskReturn(); // 0x187e TaskReturn
	IsDialogEnd(var_1086_bool); // 0x1880 ObjFunc
	
Label_6274:
	var_1143_bool = var_1086_bool == 0; // 0x1882 Not
	if(var_1143_bool == 0) goto Label_6281; // 0x1883 JumpB
	sync(); // 0x1884 Func
	IsDialogEnd(var_1086_bool); // 0x1886 ObjFunc
	goto Label_6274; // 0x1888 Jump
	
Label_6281:
	var_1144_object = Obj(); // 0x1889 PushV
	var_1144_object = var_1077_object; // 0x188a Mov
	func_7267(); // 0x188b NEW_2
	StopDialog(var_1083_object); // 0x188d Func
	GetReturnValue(var_1085_int); // 0x188f ObjFunc
	var_1076_int = var_1085_int; // 0x1891 Mov
	return 8; // 0x1892 Return
}


func_7751()
{
	var_217_object = Obj(); var_218_string = ""; var_219_float = 0; // 0x1e48 PushV
	var_220_object = Obj(); // 0x1e49 PushV
	func_9014(var_220_object); // 0x1e4a NEW_2
	var_217_object = var_220_object; // 0x1e4b Mov
	var_218_string = "pt_d4q03_volnica"; // 0x1e4d MovS
	var_219_float = 2; // 0x1e4e MovI
	func_9031(var_217_object, var_218_string, var_219_float); // 0x1e4f NEW_2
	var_221_object = Obj(); // 0x1e51 PushV
	func_9014(var_221_object); // 0x1e52 NEW_2
	ShowMap(var_221_object); // 0x1e54 ObjFunc
	return 0; // 0x1e56 Return
}


func_8780(var_1020_bool)
{
	var_1022_int = 0; var_1023_string = ""; // 0x224d PushV
	var_1023_string = "microscope_d6q01_lara_blood"; // 0x224e MovS
	func_7502(var_1022_int, var_1023_string); // 0x224f NEW_2
	var_1024_int = 0; // 0x2251 PushI
	var_1025_bool = var_1022_int != var_1024_int; // 0x2252 Neq
	if(var_1025_bool == 0) goto Label_8790; // 0x2253 JumpB
	var_1020_bool = 1; // 0x2254 MovB
	return 0; // 0x2255 Return
	
Label_8790:
	var_1020_bool = 0; // 0x2256 MovB
	return 0; // 0x2257 Return
}


func_8269()
{
	var_64_string = "ood7Alexandr1"; // 0x204e PushS
	var_65_int = 1; // 0x204f PushI
	SetVariable(var_64_string, var_65_int); // 0x2050 Func
	return 0; // 0x2052 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_397_object, var_398_object)
{
	var_0_object = var_398_object; // 0x52 TMov
	var_1_object = var_397_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_403_int = 1; // 0x55 PushI
	if(var_403_int == 0) goto Label_139; // 0x56 JumpB
	var_404_string = ""; // 0x57 PushV
	var_404_string = "Neutral"; // 0x58 MovS
	func_169(var_398_object, var_404_string); // 0x59 NEW_2
	var_412_int = 531684; // 0x5b PushI
	SetMessage(var_412_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_413_bool = 0; var_414_object = Obj(); // 0x60 PushV
	var_414_object = var_1_object; // 0x61 MovT
	func_8612(var_414_object); // 0x62 NEW_2
	if(var_413_bool == 0) goto Label_106; // 0x64 JumpB
	var_421_int = 531685; // 0x65 PushI
	var_422_int = 34364; // 0x66 PushI
	var_423_int = 33069; // 0x67 PushI
	AddReply(var_421_int, var_422_int, var_423_int); // 0x68 TObjFunc
	
Label_106:
	var_424_bool = 0; // 0x6a PushV
	var_424_bool = 0; // 0x6b MovB
	var_425_bool = 0; var_426_object = Obj(); // 0x6c PushV
	var_426_object = var_1_object; // 0x6d MovT
	func_8343(var_426_object); // 0x6e NEW_2
	var_431_bool = var_425_bool == 0; // 0x70 Not
	if(var_431_bool == 0) goto Label_120; // 0x71 JumpB
	var_432_bool = 0; var_433_object = Obj(); // 0x72 PushV
	var_433_object = var_1_object; // 0x73 MovT
	func_8355(var_433_object); // 0x74 NEW_2
	if(var_432_bool == 0) goto Label_120; // 0x76 JumpB
	var_424_bool = 1; // 0x77 MovB
	
Label_120:
	if(var_424_bool == 0) goto Label_126; // 0x78 JumpB
	var_438_int = 531689; // 0x79 PushI
	var_439_int = 34386; // 0x7a PushI
	var_440_int = 33073; // 0x7b PushI
	AddReply(var_438_int, var_439_int, var_440_int); // 0x7c TObjFunc
	
Label_126:
	var_441_int = 531688; // 0x7e PushI
	var_442_int = -1; // 0x7f PushI
	var_443_int = 33072; // 0x80 PushI
	AddReply(var_441_int, var_442_int, var_443_int); // 0x81 TObjFunc
	var_444_int = 532874; // 0x83 PushI
	var_445_int = -1; // 0x84 PushI
	var_446_int = 34363; // 0x85 PushI
	AddReply(var_444_int, var_445_int, var_446_int); // 0x86 TObjFunc
	goto Label_139; // 0x88 Jump
	
Label_139:
	var_447_bool = 0; // 0x8b PushV
	func_7709(var_447_bool); // 0x8c NEW_2
	if(var_447_bool == 0) goto Label_154; // 0x8e JumpB
	
Label_143:
	lshWaitForAnimEnd(); // 0x8f Func
	var_448_string = var_3_string; // 0x91 PushT
	if(var_448_string == 0) goto Label_148; // 0x92 JumpB
	goto Label_153; // 0x93 Jump
	
Label_153:
	goto Label_168; // 0x99 Jump
	
Label_168:
	return 0; // 0xa8 Return
	
Label_148:
	var_449_string = ""; // 0x94 PushV
	var_449_string = var_2_object; // 0x95 MovT
	func_7422(var_449_string); // 0x96 NEW_2
	goto Label_143; // 0x98 Jump
	
Label_154:
	var_450_string = "all"; // 0x9a PushS
	var_451_string = "idle"; // 0x9b PushS
	PlayAnimation(var_450_string, var_451_string); // 0x9c Func
	
Label_158:
	WaitForAnimEnd(); // 0x9e Func
	var_452_string = var_3_string; // 0xa0 PushT
	if(var_452_string == 0) goto Label_163; // 0xa1 JumpB
	goto Label_168; // 0xa2 Jump
	
Label_163:
	var_453_string = "all"; // 0xa3 PushS
	var_454_string = "idle"; // 0xa4 PushS
	PlayAnimation(var_453_string, var_454_string); // 0xa5 Func
	goto Label_158; // 0xa7 Jump
}


func_8275()
{
	var_252_string = "KnowAlexandr"; // 0x2054 PushS
	var_253_int = 1; // 0x2055 PushI
	SetVariable(var_252_string, var_253_int); // 0x2056 Func
	return 0; // 0x2058 Return
}


func_7767()
{
	func_8869(); // 0x1e59 NEW_2
	return 0; // 0x1e5b Return
}


func_8792(var_1040_bool)
{
	var_1042_int = 0; var_1043_string = ""; // 0x2259 PushV
	var_1043_string = "microscope_d6q01_julia_blood"; // 0x225a MovS
	func_7502(var_1042_int, var_1043_string); // 0x225b NEW_2
	var_1044_int = 0; // 0x225d PushI
	var_1045_bool = var_1042_int != var_1044_int; // 0x225e Neq
	if(var_1045_bool == 0) goto Label_8802; // 0x225f JumpB
	var_1040_bool = 1; // 0x2260 MovB
	return 0; // 0x2261 Return
	
Label_8802:
	var_1040_bool = 0; // 0x2262 MovB
	return 0; // 0x2263 Return
}


func_8281()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x2059 PushV
	var_66_object = Obj(); // 0x205a PushV
	func_9014(var_66_object); // 0x205b NEW_2
	var_65_object = var_66_object; // 0x205c Mov
	var_73_string = "d6q01AlexandrGotoJulia"; // 0x205e PushS
	var_74_string = "pt_map_julia"; // 0x205f PushS
	var_75_int = 1; // 0x2060 PushI
	var_76_int = 515387; // 0x2061 PushI
	var_77_float = 0; // 0x2062 PushV
	func_7638(var_77_float); // 0x2063 NEW_2
	AddMark(var_73_string, var_74_string, var_75_int, var_76_int, var_77_float); // 0x2065 ObjFunc
	var_80_string = "d6q01AlexandrGotoLara"; // 0x2067 PushS
	var_81_string = "pt_map_lara"; // 0x2068 PushS
	var_82_int = 1; // 0x2069 PushI
	var_83_int = 515386; // 0x206a PushI
	var_84_float = 0; // 0x206b PushV
	func_7638(var_84_float); // 0x206c NEW_2
	AddMark(var_80_string, var_81_string, var_82_int, var_83_int, var_84_float); // 0x206e ObjFunc
	var_85_string = "d6q01AlexangrGotoJulLaraSelf"; // 0x2070 PushS
	var_86_string = "pt_map_alexandr"; // 0x2071 PushS
	var_87_int = 1; // 0x2072 PushI
	var_88_int = 515388; // 0x2073 PushI
	var_89_float = 0; // 0x2074 PushV
	func_7638(var_89_float); // 0x2075 NEW_2
	AddMark(var_85_string, var_86_string, var_87_int, var_88_int, var_89_float); // 0x2077 ObjFunc
	func_8947(); // 0x207a NEW_2
	return 2; // 0x207c Return
}


func_6745(var_0_object, var_1_object, var_2_object, var_3_string, var_1230_object, var_1231_object)
{
	var_0_object = var_1231_object; // 0x1a5a TMov
	var_1_object = var_1230_object; // 0x1a5b TMov
	var_3_string = 0; // 0x1a5c TMovB
	var_1236_int = 1; // 0x1a5d PushI
	if(var_1236_int == 0) goto Label_6773; // 0x1a5e JumpB
	var_1237_string = ""; // 0x1a5f PushV
	var_1237_string = "Neutral"; // 0x1a60 MovS
	func_6803(var_1231_object, var_1237_string); // 0x1a61 NEW_2
	var_1245_int = 540542; // 0x1a63 PushI
	SetMessage(var_1245_int); // 0x1a64 TObjFunc
	ClearReplies(); // 0x1a66 TObjFunc
	var_1246_int = 540543; // 0x1a68 PushI
	var_1247_int = -1; // 0x1a69 PushI
	var_1248_int = 42552; // 0x1a6a PushI
	AddReply(var_1246_int, var_1247_int, var_1248_int); // 0x1a6b TObjFunc
	var_1249_int = 540796; // 0x1a6d PushI
	var_1250_int = -1; // 0x1a6e PushI
	var_1251_int = 42845; // 0x1a6f PushI
	AddReply(var_1249_int, var_1250_int, var_1251_int); // 0x1a70 TObjFunc
	goto Label_6773; // 0x1a72 Jump
	
Label_6773:
	var_1252_bool = 0; // 0x1a75 PushV
	func_7709(var_1252_bool); // 0x1a76 NEW_2
	if(var_1252_bool == 0) goto Label_6788; // 0x1a78 JumpB
	
Label_6777:
	lshWaitForAnimEnd(); // 0x1a79 Func
	var_1253_string = var_3_string; // 0x1a7b PushT
	if(var_1253_string == 0) goto Label_6782; // 0x1a7c JumpB
	goto Label_6787; // 0x1a7d Jump
	
Label_6787:
	goto Label_6802; // 0x1a83 Jump
	
Label_6802:
	return 0; // 0x1a92 Return
	
Label_6782:
	var_1254_string = ""; // 0x1a7e PushV
	var_1254_string = var_2_object; // 0x1a7f MovT
	func_7422(var_1254_string); // 0x1a80 NEW_2
	goto Label_6777; // 0x1a82 Jump
	
Label_6788:
	var_1255_string = "all"; // 0x1a84 PushS
	var_1256_string = "idle"; // 0x1a85 PushS
	PlayAnimation(var_1255_string, var_1256_string); // 0x1a86 Func
	
Label_6792:
	WaitForAnimEnd(); // 0x1a88 Func
	var_1257_string = var_3_string; // 0x1a8a PushT
	if(var_1257_string == 0) goto Label_6797; // 0x1a8b JumpB
	goto Label_6802; // 0x1a8c Jump
	
Label_6797:
	var_1258_string = "all"; // 0x1a8d PushS
	var_1259_string = "idle"; // 0x1a8e PushS
	PlayAnimation(var_1258_string, var_1259_string); // 0x1a8f Func
	goto Label_6792; // 0x1a91 Jump
}


func_7772()
{
	var_64_string = "ood2Alexandr1"; // 0x1e5d PushS
	var_65_int = 1; // 0x1e5e PushI
	SetVariable(var_64_string, var_65_int); // 0x1e5f Func
	return 0; // 0x1e61 Return
}


func_7778()
{
	var_541_string = "ood2Alexandr2"; // 0x1e63 PushS
	var_542_int = 1; // 0x1e64 PushI
	SetVariable(var_541_string, var_542_int); // 0x1e65 Func
	return 0; // 0x1e67 Return
}


func_7267()
{
	var_295_bool = 0; var_296_bool = 0; // 0x1c63 PushV
	CameraSwitchToNormal(); // 0x1c64 Func
	var_297_bool = 0; // 0x1c66 PushV
	func_7709(var_297_bool); // 0x1c67 NEW_2
	if(var_297_bool == 0) goto Label_7275; // 0x1c69 JumpB
	goto Label_7283; // 0x1c6a Jump
	
Label_7283:
	return 2; // 0x1c73 Return
	
Label_7275:
	var_298_string = "head"; // 0x1c6b PushS
	HasAnimationTrack(var_296_bool, var_298_string); // 0x1c6c Func
	var_299_bool = var_296_bool; // 0x1c6e Push
	if(var_299_bool == 0) goto Label_7283; // 0x1c6f JumpB
	var_300_string = "head"; // 0x1c70 PushS
	UnlookAsync(var_300_string); // 0x1c71 Func
}


func_8804()
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x2264 PushV
	var_84_int = 34; // 0x2265 PushI
	var_85_int = 1; // 0x2266 PushI
	var_86_int = 512116; // 0x2267 PushI
	CreateDiaryEntry(var_83_object, var_84_int, var_85_int, var_86_int); // 0x2268 Func
	var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; // 0x226a PushV
	var_88_object = var_83_object; // 0x226b Mov
	var_89_int = 2; // 0x226c MovI
	func_8986(var_87_bool, var_88_object, var_89_int); // 0x226d NEW_2
	return 2; // 0x226f Return
}


func_7784()
{
	var_227_string = "ood2Alexandr3"; // 0x1e69 PushS
	var_228_int = 1; // 0x1e6a PushI
	SetVariable(var_227_string, var_228_int); // 0x1e6b Func
	return 0; // 0x1e6d Return
}


func_7790(var_181_object)
{
	var_183_object = Obj(); var_184_object = Obj(); // 0x1e6e PushV
	var_185_string = "Revolver is given"; // 0x1e6f PushS
	Trace(var_185_string); // 0x1e70 Func
	CreateInvItem(var_184_object); // 0x1e72 Func
	var_186_string = "Revolver"; // 0x1e74 PushS
	SetItemName(var_186_string); // 0x1e75 ObjFunc
	var_187_string = "durability"; // 0x1e77 PushS
	var_188_int = 30; // 0x1e78 PushI
	SetProperty(var_187_string, var_188_int); // 0x1e79 ObjFunc
	var_189_object = Obj(); var_190_object = Obj(); var_191_int = 0; // 0x1e7b PushV
	var_189_object = var_181_object; // 0x1e7c Mov
	var_190_object = var_184_object; // 0x1e7d Mov
	var_191_int = 1; // 0x1e7e MovI
	func_7549(var_190_object, var_191_int); // 0x1e7f NEW_2
	return 2; // 0x1e81 Return
}


func_8817()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x2271 PushV
	var_88_int = 10; // 0x2272 PushI
	var_89_int = 1; // 0x2273 PushI
	var_90_int = 503081; // 0x2274 PushI
	CreateDiaryEntry(var_87_object, var_88_int, var_89_int, var_90_int); // 0x2275 Func
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0; // 0x2277 PushV
	var_92_object = var_87_object; // 0x2278 Mov
	var_93_int = -1; // 0x2279 MovI
	func_8986(var_91_bool, var_92_object, var_93_int); // 0x227a NEW_2
	return 2; // 0x227c Return
}


func_7284(var_148_bool, var_149_object)
{
	var_153_int = 0; var_154_int = 0; var_155_int = 0; var_156_int = 0; // 0x1c74 PushV
	var_157_string = "voice_common"; // 0x1c75 PushS
	GetVariable(var_157_string, var_155_int); // 0x1c76 Func
	var_158_int = var_155_int; // 0x1c78 Push
	if(var_158_int == 0) goto Label_7322; // 0x1c79 JumpB
	var_159_bool = 0; var_160_object = Obj(); // 0x1c7a PushV
	var_160_object = var_149_object; // 0x1c7b Mov
	func_7342(var_160_object); // 0x1c7c NEW_2
	var_189_bool = var_159_bool == 0; // 0x1c7e Not
	if(var_189_bool == 0) goto Label_7304; // 0x1c7f JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x1c80 PushV
	var_191_object = var_149_object; // 0x1c81 Mov
	func_7379(var_191_object); // 0x1c82 NEW_2
	var_225_bool = var_190_bool == 0; // 0x1c84 Not
	if(var_225_bool == 0) goto Label_7304; // 0x1c85 JumpB
	var_148_bool = 0; // 0x1c86 MovB
	return 4; // 0x1c87 Return
	
Label_7304:
	var_226_int = 2; // 0x1c88 PushI
	irand(var_156_int, var_226_int); // 0x1c89 Func
	var_227_int = var_156_int; // 0x1c8b Push
	if(var_227_int == 0) goto Label_7317; // 0x1c8c JumpB
	var_228_string = "voice_common"; // 0x1c8d PushS
	var_229_int = 1; // 0x1c8e PushI
	var_230_int = var_155_int + var_229_int; // 0x1c8f Add
	var_231_int = 3; // 0x1c90 PushI
	var_232_int = var_230_int / var_231_int; // 0x1c91 Mod
	SetVariable(var_228_string, var_232_int); // 0x1c92 Func
	goto Label_7321; // 0x1c94 Jump
	
Label_7321:
	goto Label_7340; // 0x1c99 Jump
	
Label_7340:
	var_148_bool = 1; // 0x1cac MovB
	return 4; // 0x1cad Return
	
Label_7317:
	var_233_string = "voice_common"; // 0x1c95 PushS
	var_234_int = 0; // 0x1c96 PushI
	SetVariable(var_233_string, var_234_int); // 0x1c97 Func
	
Label_7322:
	var_235_bool = 0; var_236_object = Obj(); // 0x1c9a PushV
	var_236_object = var_149_object; // 0x1c9b Mov
	func_7379(var_236_object); // 0x1c9c NEW_2
	var_237_bool = var_235_bool == 0; // 0x1c9e Not
	if(var_237_bool == 0) goto Label_7336; // 0x1c9f JumpB
	var_238_bool = 0; var_239_object = Obj(); // 0x1ca0 PushV
	var_239_object = var_149_object; // 0x1ca1 Mov
	func_7342(var_239_object); // 0x1ca2 NEW_2
	var_240_bool = var_238_bool == 0; // 0x1ca4 Not
	if(var_240_bool == 0) goto Label_7336; // 0x1ca5 JumpB
	var_148_bool = 0; // 0x1ca6 MovB
	return 4; // 0x1ca7 Return
	
Label_7336:
	var_241_string = "voice_common"; // 0x1ca8 PushS
	var_242_int = 1; // 0x1ca9 PushI
	SetVariable(var_241_string, var_242_int); // 0x1caa Func
}


func_1148(var_0_object, var_1_object, var_2_object, var_3_string, var_1171_object, var_1172_object)
{
	var_0_object = var_1172_object; // 0x47d TMov
	var_1_object = var_1171_object; // 0x47e TMov
	var_3_string = 0; // 0x47f TMovB
	var_1177_int = 1; // 0x480 PushI
	if(var_1177_int == 0) goto Label_1181; // 0x481 JumpB
	var_1178_string = ""; // 0x482 PushV
	var_1178_string = "Neutral"; // 0x483 MovS
	func_1211(var_1172_object, var_1178_string); // 0x484 NEW_2
	var_1186_int = 535294; // 0x486 PushI
	SetMessage(var_1186_int); // 0x487 TObjFunc
	ClearReplies(); // 0x489 TObjFunc
	var_1187_int = 535295; // 0x48b PushI
	var_1188_int = 36973; // 0x48c PushI
	var_1189_int = 36972; // 0x48d PushI
	AddReply(var_1187_int, var_1188_int, var_1189_int); // 0x48e TObjFunc
	var_1190_int = 535302; // 0x490 PushI
	var_1191_int = -1; // 0x491 PushI
	var_1192_int = 36980; // 0x492 PushI
	AddReply(var_1190_int, var_1191_int, var_1192_int); // 0x493 TObjFunc
	var_1193_int = 535303; // 0x495 PushI
	var_1194_int = -1; // 0x496 PushI
	var_1195_int = 36981; // 0x497 PushI
	AddReply(var_1193_int, var_1194_int, var_1195_int); // 0x498 TObjFunc
	goto Label_1181; // 0x49a Jump
	
Label_1181:
	var_1196_bool = 0; // 0x49d PushV
	func_7709(var_1196_bool); // 0x49e NEW_2
	if(var_1196_bool == 0) goto Label_1196; // 0x4a0 JumpB
	
Label_1185:
	lshWaitForAnimEnd(); // 0x4a1 Func
	var_1197_string = var_3_string; // 0x4a3 PushT
	if(var_1197_string == 0) goto Label_1190; // 0x4a4 JumpB
	goto Label_1195; // 0x4a5 Jump
	
Label_1195:
	goto Label_1210; // 0x4ab Jump
	
Label_1210:
	return 0; // 0x4ba Return
	
Label_1190:
	var_1198_string = ""; // 0x4a6 PushV
	var_1198_string = var_2_object; // 0x4a7 MovT
	func_7422(var_1198_string); // 0x4a8 NEW_2
	goto Label_1185; // 0x4aa Jump
	
Label_1196:
	var_1199_string = "all"; // 0x4ac PushS
	var_1200_string = "idle"; // 0x4ad PushS
	PlayAnimation(var_1199_string, var_1200_string); // 0x4ae Func
	
Label_1200:
	WaitForAnimEnd(); // 0x4b0 Func
	var_1201_string = var_3_string; // 0x4b2 PushT
	if(var_1201_string == 0) goto Label_1205; // 0x4b3 JumpB
	goto Label_1210; // 0x4b4 Jump
	
Label_1205:
	var_1202_string = "all"; // 0x4b5 PushS
	var_1203_string = "idle"; // 0x4b6 PushS
	PlayAnimation(var_1202_string, var_1203_string); // 0x4b7 Func
	goto Label_1200; // 0x4b9 Jump
}


func_1661(var_0_object, var_1_object, var_2_object, var_3_string, var_957_object, var_958_object)
{
	var_0_object = var_958_object; // 0x67e TMov
	var_1_object = var_957_object; // 0x67f TMov
	var_3_string = 0; // 0x680 TMovB
	var_963_int = 1; // 0x681 PushI
	if(var_963_int == 0) goto Label_1805; // 0x682 JumpB
	var_964_bool = 0; // 0x683 PushV
	var_964_bool = 0; // 0x684 MovB
	var_965_bool = 0; var_966_object = Obj(); // 0x685 PushV
	var_966_object = var_1_object; // 0x686 MovT
	func_8684(var_966_object); // 0x687 NEW_2
	if(var_965_bool == 0) goto Label_1680; // 0x689 JumpB
	var_971_bool = 0; var_972_object = Obj(); // 0x68a PushV
	var_972_object = var_1_object; // 0x68b MovT
	func_8696(var_972_object); // 0x68c NEW_2
	if(var_971_bool == 0) goto Label_1680; // 0x68e JumpB
	var_964_bool = 1; // 0x68f MovB
	
Label_1680:
	if(var_964_bool == 0) goto Label_1706; // 0x690 JumpB
	var_977_object = Obj(); var_978_object = Obj(); // 0x691 PushV
	var_977_object = var_1_object; // 0x692 MovT
	var_978_object = var_0_object; // 0x693 MovT
	func_8229(); // 0x694 NEW_2
	var_981_string = ""; // 0x696 PushV
	var_981_string = "Neutral"; // 0x697 MovS
	func_1835(var_958_object, var_981_string); // 0x698 NEW_2
	var_989_int = 512650; // 0x69a PushI
	SetMessage(var_989_int); // 0x69b TObjFunc
	ClearReplies(); // 0x69d TObjFunc
	var_990_int = 510633; // 0x69f PushI
	var_991_int = 13839; // 0x6a0 PushI
	var_992_int = 11732; // 0x6a1 PushI
	AddReply(var_990_int, var_991_int, var_992_int); // 0x6a2 TObjFunc
	var_993_int = 510665; // 0x6a4 PushI
	var_994_int = 11772; // 0x6a5 PushI
	var_995_int = 11771; // 0x6a6 PushI
	AddReply(var_993_int, var_994_int, var_995_int); // 0x6a7 TObjFunc
	goto Label_1805; // 0x6a9 Jump
	
Label_1805:
	var_996_bool = 0; // 0x70d PushV
	func_7709(var_996_bool); // 0x70e NEW_2
	if(var_996_bool == 0) goto Label_1820; // 0x710 JumpB
	
Label_1809:
	lshWaitForAnimEnd(); // 0x711 Func
	var_997_string = var_3_string; // 0x713 PushT
	if(var_997_string == 0) goto Label_1814; // 0x714 JumpB
	goto Label_1819; // 0x715 Jump
	
Label_1819:
	goto Label_1834; // 0x71b Jump
	
Label_1834:
	return 0; // 0x72a Return
	
Label_1814:
	var_998_string = ""; // 0x716 PushV
	var_998_string = var_2_object; // 0x717 MovT
	func_7422(var_998_string); // 0x718 NEW_2
	goto Label_1809; // 0x71a Jump
	
Label_1820:
	var_999_string = "all"; // 0x71c PushS
	var_1000_string = "idle"; // 0x71d PushS
	PlayAnimation(var_999_string, var_1000_string); // 0x71e Func
	
Label_1824:
	WaitForAnimEnd(); // 0x720 Func
	var_1001_string = var_3_string; // 0x722 PushT
	if(var_1001_string == 0) goto Label_1829; // 0x723 JumpB
	goto Label_1834; // 0x724 Jump
	
Label_1829:
	var_1002_string = "all"; // 0x725 PushS
	var_1003_string = "idle"; // 0x726 PushS
	PlayAnimation(var_1002_string, var_1003_string); // 0x727 Func
	goto Label_1824; // 0x729 Jump
	
Label_1706:
	var_1004_string = ""; // 0x6aa PushV
	var_1004_string = "Neutral"; // 0x6ab MovS
	func_1835(var_958_object, var_1004_string); // 0x6ac NEW_2
	var_1005_int = 511979; // 0x6ae PushI
	SetMessage(var_1005_int); // 0x6af TObjFunc
	ClearReplies(); // 0x6b1 TObjFunc
	var_1006_bool = 0; // 0x6b3 PushV
	var_1006_bool = 0; // 0x6b4 MovB
	var_1007_bool = 0; // 0x6b5 PushV
	var_1007_bool = 0; // 0x6b6 MovB
	var_1008_bool = 0; var_1009_object = Obj(); // 0x6b7 PushV
	var_1009_object = var_1_object; // 0x6b8 MovT
	func_8708(var_1009_object); // 0x6b9 NEW_2
	if(var_1008_bool == 0) goto Label_1730; // 0x6bb JumpB
	var_1014_bool = 0; var_1015_object = Obj(); // 0x6bc PushV
	var_1015_object = var_1_object; // 0x6bd MovT
	func_8624(var_1015_object); // 0x6be NEW_2
	if(var_1014_bool == 0) goto Label_1730; // 0x6c0 JumpB
	var_1007_bool = 1; // 0x6c1 MovB
	
Label_1730:
	if(var_1007_bool == 0) goto Label_1738; // 0x6c2 JumpB
	var_1020_bool = 0; var_1021_object = Obj(); // 0x6c3 PushV
	var_1021_object = var_1_object; // 0x6c4 MovT
	func_8780(var_1021_object); // 0x6c5 NEW_2
	var_1026_bool = var_1020_bool == 0; // 0x6c7 Not
	if(var_1026_bool == 0) goto Label_1738; // 0x6c8 JumpB
	var_1006_bool = 1; // 0x6c9 MovB
	
Label_1738:
	if(var_1006_bool == 0) goto Label_1744; // 0x6ca JumpB
	var_1027_int = 512649; // 0x6cb PushI
	var_1028_int = 13832; // 0x6cc PushI
	var_1029_int = 13829; // 0x6cd PushI
	AddReply(var_1027_int, var_1028_int, var_1029_int); // 0x6ce TObjFunc
	
Label_1744:
	var_1030_bool = 0; // 0x6d0 PushV
	var_1030_bool = 0; // 0x6d1 MovB
	var_1031_bool = 0; // 0x6d2 PushV
	var_1031_bool = 0; // 0x6d3 MovB
	var_1032_bool = 0; var_1033_object = Obj(); // 0x6d4 PushV
	var_1033_object = var_1_object; // 0x6d5 MovT
	func_8720(var_1033_object); // 0x6d6 NEW_2
	if(var_1032_bool == 0) goto Label_1759; // 0x6d8 JumpB
	var_1038_bool = 0; var_1039_object = Obj(); // 0x6d9 PushV
	var_1039_object = var_1_object; // 0x6da MovT
	func_8624(var_1039_object); // 0x6db NEW_2
	if(var_1038_bool == 0) goto Label_1759; // 0x6dd JumpB
	var_1031_bool = 1; // 0x6de MovB
	
Label_1759:
	if(var_1031_bool == 0) goto Label_1767; // 0x6df JumpB
	var_1040_bool = 0; var_1041_object = Obj(); // 0x6e0 PushV
	var_1041_object = var_1_object; // 0x6e1 MovT
	func_8792(var_1041_object); // 0x6e2 NEW_2
	var_1046_bool = var_1040_bool == 0; // 0x6e4 Not
	if(var_1046_bool == 0) goto Label_1767; // 0x6e5 JumpB
	var_1030_bool = 1; // 0x6e6 MovB
	
Label_1767:
	if(var_1030_bool == 0) goto Label_1773; // 0x6e7 JumpB
	var_1047_int = 512660; // 0x6e8 PushI
	var_1048_int = 13832; // 0x6e9 PushI
	var_1049_int = 13840; // 0x6ea PushI
	AddReply(var_1047_int, var_1048_int, var_1049_int); // 0x6eb TObjFunc
	
Label_1773:
	var_1050_bool = 0; // 0x6ed PushV
	var_1050_bool = 0; // 0x6ee MovB
	var_1051_bool = 0; var_1052_object = Obj(); // 0x6ef PushV
	var_1052_object = var_1_object; // 0x6f0 MovT
	func_8732(var_1052_object); // 0x6f1 NEW_2
	if(var_1051_bool == 0) goto Label_1786; // 0x6f3 JumpB
	var_1057_bool = 0; var_1058_object = Obj(); // 0x6f4 PushV
	var_1058_object = var_1_object; // 0x6f5 MovT
	func_8744(var_1058_object); // 0x6f6 NEW_2
	if(var_1057_bool == 0) goto Label_1786; // 0x6f8 JumpB
	var_1050_bool = 1; // 0x6f9 MovB
	
Label_1786:
	if(var_1050_bool == 0) goto Label_1792; // 0x6fa JumpB
	var_1063_int = 511980; // 0x6fb PushI
	var_1064_int = 13196; // 0x6fc PushI
	var_1065_int = 13195; // 0x6fd PushI
	AddReply(var_1063_int, var_1064_int, var_1065_int); // 0x6fe TObjFunc
	
Label_1792:
	var_1066_int = 513018; // 0x700 PushI
	var_1067_int = -1; // 0x701 PushI
	var_1068_int = 14224; // 0x702 PushI
	AddReply(var_1066_int, var_1067_int, var_1068_int); // 0x703 TObjFunc
	var_1069_int = 542996; // 0x705 PushI
	var_1070_int = -1; // 0x706 PushI
	var_1071_int = 45444; // 0x707 PushI
	AddReply(var_1069_int, var_1070_int, var_1071_int); // 0x708 TObjFunc
	goto Label_1805; // 0x70a Jump
}


func_8830()
{
	var_109_object = Obj(); var_110_object = Obj(); // 0x227e PushV
	var_111_int = 50; // 0x227f PushI
	var_112_int = 1; // 0x2280 PushI
	var_113_int = 512132; // 0x2281 PushI
	CreateDiaryEntry(var_110_object, var_111_int, var_112_int, var_113_int); // 0x2282 Func
	var_114_bool = 0; var_115_object = Obj(); var_116_int = 0; // 0x2284 PushV
	var_115_object = var_110_object; // 0x2285 Mov
	var_116_int = 10; // 0x2286 MovI
	func_8986(var_114_bool, var_115_object, var_116_int); // 0x2287 NEW_2
	return 2; // 0x2289 Return
}


func_8318()
{
	var_498_string = "d2TalkToAlexandr"; // 0x207f PushS
	var_499_int = 1; // 0x2080 PushI
	SetVariable(var_498_string, var_499_int); // 0x2081 Func
	return 0; // 0x2083 Return
}


func_7811()
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x1e83 PushV
	var_70_string = "d2q01"; // 0x1e84 PushS
	var_71_int = 1; // 0x1e85 PushI
	SetVariable(var_70_string, var_71_int); // 0x1e86 Func
	var_72_object = Obj(); // 0x1e88 PushV
	func_9014(var_72_object); // 0x1e89 NEW_2
	var_69_object = var_72_object; // 0x1e8a Mov
	var_79_string = "d2q01AlexandrGotoAnna"; // 0x1e8c PushS
	var_80_string = "pt_map_anna"; // 0x1e8d PushS
	var_81_int = 1; // 0x1e8e PushI
	var_82_int = 511387; // 0x1e8f PushI
	var_83_float = 0; // 0x1e90 PushV
	func_7638(var_83_float); // 0x1e91 NEW_2
	AddMark(var_79_string, var_80_string, var_81_int, var_82_int, var_83_float); // 0x1e93 ObjFunc
	func_8817(); // 0x1e96 NEW_2
	func_8830(); // 0x1e99 NEW_2
	return 2; // 0x1e9b Return
}


func_8324()
{
	var_70_object = Obj(); var_71_object = Obj(); // 0x2084 PushV
	var_72_object = Obj(); // 0x2085 PushV
	func_9014(var_72_object); // 0x2086 NEW_2
	var_71_object = var_72_object; // 0x2087 Mov
	var_79_string = "d7q02AlexandrGotoPetr"; // 0x2089 PushS
	var_80_string = "pt_map_petr"; // 0x208a PushS
	var_81_int = 0; // 0x208b PushI
	var_82_int = 515429; // 0x208c PushI
	var_83_float = 0; // 0x208d PushV
	func_7638(var_83_float); // 0x208e NEW_2
	AddMark(var_79_string, var_80_string, var_81_int, var_82_int, var_83_float); // 0x2090 ObjFunc
	func_8960(); // 0x2093 NEW_2
	return 2; // 0x2095 Return
}


func_4742(var_0_object, var_723_int, var_724_object)
{
	var_726_object = Obj(); var_727_bool = 0; var_728_int = 0; var_729_bool = 0; var_730_object = Obj(); var_731_bool = 0; var_732_int = 0; var_733_bool = 0; // 0x1286 PushV
	var_0_object = var_724_object; // 0x1287 TMov
	var_734_bool = 0; var_735_object = Obj(); var_736_float = 0; // 0x1288 PushV
	var_735_object = var_724_object; // 0x1289 Mov
	var_736_float = 70.0; // 0x128a MovF
	func_7199(var_735_object, var_736_float); // 0x128b NEW_2
	var_737_bool = var_734_bool == 0; // 0x128d Not
	if(var_737_bool == 0) goto Label_4753; // 0x128e JumpB
	var_723_int = -2; // 0x128f MovI
	return 8; // 0x1290 Return
	
Label_4753:
	CreateDialog(var_730_object); // 0x1291 Func
	var_738_int = 0; // 0x1293 PushV
	func_7703(var_738_int); // 0x1294 NEW_2
	SetNPCName(var_738_int); // 0x1296 ObjFunc
	var_739_int = 0; // 0x1298 PushV
	func_7701(var_739_int); // 0x1299 NEW_2
	SetNPCDescription(var_739_int); // 0x129b ObjFunc
	var_740_string = ""; // 0x129d PushV
	func_7705(var_740_string); // 0x129e NEW_2
	SetPhoto(var_740_string); // 0x12a0 ObjFunc
	var_741_string = ""; // 0x12a2 PushV
	func_7707(var_741_string); // 0x12a3 NEW_2
	SetPhoto2(var_741_string); // 0x12a5 ObjFunc
	var_742_int = 0; // 0x12a7 PushV
	func_9064(var_742_int); // 0x12a8 NEW_2
	SetPlayerName(var_742_int); // 0x12aa ObjFunc
	var_732_int = -1; // 0x12ac MovI
	IsOverrideActive(var_731_bool); // 0x12ad Func
	var_743_bool = var_731_bool; // 0x12af Push
	if(var_743_bool == 0) goto Label_4787; // 0x12b0 JumpB
	var_723_int = -2; // 0x12b1 MovI
	return 8; // 0x12b2 Return
	
Label_4787:
	DoDialog(var_730_object); // 0x12b3 Func
	var_744_bool = 0; var_745_object = Obj(); // 0x12b5 PushV
	var_746_object = Obj(); // 0x12b6 PushV
	func_7475(var_746_object); // 0x12b7 NEW_2
	var_745_object = var_746_object; // 0x12b8 Mov
	func_7284(var_744_bool, var_745_object); // 0x12ba NEW_2
	var_747_object = Obj(); var_748_object = Obj(); // 0x12bc PushV
	var_747_object = var_724_object; // 0x12bd Mov
	var_748_object = var_730_object; // 0x12be Mov
	TaskCall(15); // 0x12bf TaskCall
	func_4823(var_749_object, var_750_object, var_751_string, var_752_bool, var_747_object, var_748_object); // 0x12c0 NEW_2
	TaskReturn(); // 0x12c1 TaskReturn
	IsDialogEnd(var_733_bool); // 0x12c3 ObjFunc
	
Label_4805:
	var_833_bool = var_733_bool == 0; // 0x12c5 Not
	if(var_833_bool == 0) goto Label_4812; // 0x12c6 JumpB
	sync(); // 0x12c7 Func
	IsDialogEnd(var_733_bool); // 0x12c9 ObjFunc
	goto Label_4805; // 0x12cb Jump
	
Label_4812:
	var_834_object = Obj(); // 0x12cc PushV
	var_834_object = var_724_object; // 0x12cd Mov
	func_7267(); // 0x12ce NEW_2
	StopDialog(var_730_object); // 0x12d0 Func
	GetReturnValue(var_732_int); // 0x12d2 ObjFunc
	var_723_int = var_732_int; // 0x12d4 Mov
	return 8; // 0x12d5 Return
}


func_8843()
{
	var_248_object = Obj(); var_249_object = Obj(); // 0x228b PushV
	var_250_int = 55; // 0x228c PushI
	var_251_int = 1; // 0x228d PushI
	var_252_int = 512137; // 0x228e PushI
	CreateDiaryEntry(var_249_object, var_250_int, var_251_int, var_252_int); // 0x228f Func
	var_253_bool = 0; var_254_object = Obj(); var_255_int = 0; // 0x2291 PushV
	var_254_object = var_249_object; // 0x2292 Mov
	var_255_int = 10; // 0x2293 MovI
	func_8986(var_253_bool, var_254_object, var_255_int); // 0x2294 NEW_2
	return 2; // 0x2296 Return
}


func_6803(var_2_object, var_1237_string)
{
	var_1238_bool = 0; // 0x1a94 PushV
	func_7709(var_1238_bool); // 0x1a95 NEW_2
	var_1239_bool = var_1238_bool == 0; // 0x1a97 Not
	if(var_1239_bool == 0) goto Label_6810; // 0x1a98 JumpB
	return 0; // 0x1a99 Return
	
Label_6810:
	var_1240_bool = var_1237_string == var_2_object; // 0x1a9a Eq
	if(var_1240_bool == 0) goto Label_6813; // 0x1a9b JumpB
	return 0; // 0x1a9c Return
	
Label_6813:
	var_1241_string = ""; var_1242_bool = 0; // 0x1a9d PushV
	var_1241_string = var_1237_string; // 0x1a9e Mov
	var_1243_string = ""; // 0x1a9f PushS
	var_1244_bool = var_1237_string == var_1243_string; // 0x1aa0 Eq
	if(var_1244_bool == 0) goto Label_6820; // 0x1aa1 JumpB
	var_1242_bool = 0; // 0x1aa2 MovB
	goto Label_6821; // 0x1aa3 Jump
	
Label_6821:
	func_7438(var_1241_string, var_1242_bool); // 0x1aa5 NEW_2
	var_2_object = var_1237_string; // 0x1aa7 TMov
	return 0; // 0x1aa8 Return
	
Label_6820:
	var_1242_bool = 1; // 0x1aa4 MovB
}


func_6292(var_0_object, var_1_object, var_2_object, var_3_string, var_1100_object, var_1101_object)
{
	var_0_object = var_1101_object; // 0x1895 TMov
	var_1_object = var_1100_object; // 0x1896 TMov
	var_3_string = 0; // 0x1897 TMovB
	var_1106_int = 1; // 0x1898 PushI
	if(var_1106_int == 0) goto Label_6334; // 0x1899 JumpB
	var_1107_string = ""; // 0x189a PushV
	var_1107_string = "Neutral"; // 0x189b MovS
	func_6364(var_1101_object, var_1107_string); // 0x189c NEW_2
	var_1115_int = 512203; // 0x189e PushI
	SetMessage(var_1115_int); // 0x189f TObjFunc
	ClearReplies(); // 0x18a1 TObjFunc
	var_1116_bool = 0; // 0x18a3 PushV
	var_1116_bool = 0; // 0x18a4 MovB
	var_1117_bool = 0; var_1118_object = Obj(); // 0x18a5 PushV
	var_1118_object = var_1_object; // 0x18a6 MovT
	func_8756(var_1118_object); // 0x18a7 NEW_2
	if(var_1117_bool == 0) goto Label_6320; // 0x18a9 JumpB
	var_1123_bool = 0; var_1124_object = Obj(); // 0x18aa PushV
	var_1124_object = var_1_object; // 0x18ab MovT
	func_8768(var_1124_object); // 0x18ac NEW_2
	if(var_1123_bool == 0) goto Label_6320; // 0x18ae JumpB
	var_1116_bool = 1; // 0x18af MovB
	
Label_6320:
	if(var_1116_bool == 0) goto Label_6326; // 0x18b0 JumpB
	var_1129_int = 513340; // 0x18b1 PushI
	var_1130_int = 14573; // 0x18b2 PushI
	var_1131_int = 14572; // 0x18b3 PushI
	AddReply(var_1129_int, var_1130_int, var_1131_int); // 0x18b4 TObjFunc
	
Label_6326:
	var_1132_int = 512204; // 0x18b6 PushI
	var_1133_int = -1; // 0x18b7 PushI
	var_1134_int = 13359; // 0x18b8 PushI
	AddReply(var_1132_int, var_1133_int, var_1134_int); // 0x18b9 TObjFunc
	goto Label_6334; // 0x18bb Jump
	
Label_6334:
	var_1135_bool = 0; // 0x18be PushV
	func_7709(var_1135_bool); // 0x18bf NEW_2
	if(var_1135_bool == 0) goto Label_6349; // 0x18c1 JumpB
	
Label_6338:
	lshWaitForAnimEnd(); // 0x18c2 Func
	var_1136_string = var_3_string; // 0x18c4 PushT
	if(var_1136_string == 0) goto Label_6343; // 0x18c5 JumpB
	goto Label_6348; // 0x18c6 Jump
	
Label_6348:
	goto Label_6363; // 0x18cc Jump
	
Label_6363:
	return 0; // 0x18db Return
	
Label_6343:
	var_1137_string = ""; // 0x18c7 PushV
	var_1137_string = var_2_object; // 0x18c8 MovT
	func_7422(var_1137_string); // 0x18c9 NEW_2
	goto Label_6338; // 0x18cb Jump
	
Label_6349:
	var_1138_string = "all"; // 0x18cd PushS
	var_1139_string = "idle"; // 0x18ce PushS
	PlayAnimation(var_1138_string, var_1139_string); // 0x18cf Func
	
Label_6353:
	WaitForAnimEnd(); // 0x18d1 Func
	var_1140_string = var_3_string; // 0x18d3 PushT
	if(var_1140_string == 0) goto Label_6358; // 0x18d4 JumpB
	goto Label_6363; // 0x18d5 Jump
	
Label_6358:
	var_1141_string = "all"; // 0x18d6 PushS
	var_1142_string = "idle"; // 0x18d7 PushS
	PlayAnimation(var_1141_string, var_1142_string); // 0x18d8 Func
	goto Label_6353; // 0x18da Jump
}


func_8343(var_425_bool)
{
	var_427_int = 0; var_428_string = ""; // 0x2098 PushV
	var_428_string = "cutscene_burn_d1"; // 0x2099 MovS
	func_7502(var_427_int, var_428_string); // 0x209a NEW_2
	var_429_int = 0; // 0x209c PushI
	var_430_bool = var_427_int != var_429_int; // 0x209d Neq
	if(var_430_bool == 0) goto Label_8353; // 0x209e JumpB
	var_425_bool = 1; // 0x209f MovB
	return 0; // 0x20a0 Return
	
Label_8353:
	var_425_bool = 0; // 0x20a1 MovB
	return 0; // 0x20a2 Return
}


func_8856()
{
	var_163_object = Obj(); var_164_object = Obj(); // 0x2298 PushV
	var_165_int = 56; // 0x2299 PushI
	var_166_int = 1; // 0x229a PushI
	var_167_int = 512138; // 0x229b PushI
	CreateDiaryEntry(var_164_object, var_165_int, var_166_int, var_167_int); // 0x229c Func
	var_168_bool = 0; var_169_object = Obj(); var_170_int = 0; // 0x229e PushV
	var_169_object = var_164_object; // 0x229f Mov
	var_170_int = 10; // 0x22a0 MovI
	func_8986(var_168_bool, var_169_object, var_170_int); // 0x22a1 NEW_2
	return 2; // 0x22a3 Return
}


func_7837()
{
	func_8856(); // 0x1e9f NEW_2
	var_171_bool = 0; var_172_string = ""; var_173_string = ""; // 0x1ea1 PushV
	var_172_string = "quest_d2_01"; // 0x1ea2 MovS
	var_173_string = "completed"; // 0x1ea3 MovS
	func_7626(var_171_bool, var_172_string, var_173_string); // 0x1ea4 NEW_2
	return 0; // 0x1ea6 Return
}


func_8355(var_432_bool)
{
	var_434_int = 0; var_435_string = ""; // 0x20a4 PushV
	var_435_string = "ood1Alexandr1"; // 0x20a5 MovS
	func_7502(var_434_int, var_435_string); // 0x20a6 NEW_2
	var_436_int = 0; // 0x20a8 PushI
	var_437_bool = var_434_int == var_436_int; // 0x20a9 Eq
	if(var_437_bool == 0) goto Label_8365; // 0x20aa JumpB
	var_432_bool = 1; // 0x20ab MovB
	return 0; // 0x20ac Return
	
Label_8365:
	var_432_bool = 0; // 0x20ad MovB
	return 0; // 0x20ae Return
}


func_8869()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x22a5 PushV
	var_66_int = 73; // 0x22a6 PushI
	var_67_int = 1; // 0x22a7 PushI
	var_68_int = 512155; // 0x22a8 PushI
	CreateDiaryEntry(var_65_object, var_66_int, var_67_int, var_68_int); // 0x22a9 Func
	var_69_bool = 0; var_70_object = Obj(); var_71_int = 0; // 0x22ab PushV
	var_70_object = var_65_object; // 0x22ac Mov
	var_71_int = 25; // 0x22ad MovI
	func_8986(var_69_bool, var_70_object, var_71_int); // 0x22ae NEW_2
	return 2; // 0x22b0 Return
}


func_7847()
{
	var_233_object = Obj(); var_234_object = Obj(); // 0x1ea7 PushV
	var_235_string = "d2q01"; // 0x1ea8 PushS
	var_236_int = 6; // 0x1ea9 PushI
	SetVariable(var_235_string, var_236_int); // 0x1eaa Func
	var_237_object = Obj(); // 0x1eac PushV
	func_9014(var_237_object); // 0x1ead NEW_2
	var_234_object = var_237_object; // 0x1eae Mov
	var_238_string = "d2q01AlexandrGotoBigVlad"; // 0x1eb0 PushS
	var_239_string = "pt_map_bigvlad"; // 0x1eb1 PushS
	var_240_int = 1; // 0x1eb2 PushI
	var_241_int = 511390; // 0x1eb3 PushI
	var_242_float = 0; // 0x1eb4 PushV
	func_7638(var_242_float); // 0x1eb5 NEW_2
	AddMark(var_238_string, var_239_string, var_240_int, var_241_int, var_242_float); // 0x1eb7 ObjFunc
	var_243_string = "d2q01AlexandrGotoGeorg"; // 0x1eb9 PushS
	var_244_string = "pt_map_georg"; // 0x1eba PushS
	var_245_int = 1; // 0x1ebb PushI
	var_246_int = 511391; // 0x1ebc PushI
	var_247_float = 0; // 0x1ebd PushV
	func_7638(var_247_float); // 0x1ebe NEW_2
	AddMark(var_243_string, var_244_string, var_245_int, var_246_int, var_247_float); // 0x1ec0 ObjFunc
	func_8843(); // 0x1ec3 NEW_2
	return 2; // 0x1ec5 Return
}


func_169(var_2_object, var_404_string)
{
	var_405_bool = 0; // 0xaa PushV
	func_7709(var_405_bool); // 0xab NEW_2
	var_406_bool = var_405_bool == 0; // 0xad Not
	if(var_406_bool == 0) goto Label_176; // 0xae JumpB
	return 0; // 0xaf Return
	
Label_176:
	var_407_bool = var_404_string == var_2_object; // 0xb0 Eq
	if(var_407_bool == 0) goto Label_179; // 0xb1 JumpB
	return 0; // 0xb2 Return
	
Label_179:
	var_408_string = ""; var_409_bool = 0; // 0xb3 PushV
	var_408_string = var_404_string; // 0xb4 Mov
	var_410_string = ""; // 0xb5 PushS
	var_411_bool = var_404_string == var_410_string; // 0xb6 Eq
	if(var_411_bool == 0) goto Label_186; // 0xb7 JumpB
	var_409_bool = 0; // 0xb8 MovB
	goto Label_187; // 0xb9 Jump
	
Label_187:
	func_7438(var_408_string, var_409_bool); // 0xbb NEW_2
	var_2_object = var_404_string; // 0xbd TMov
	return 0; // 0xbe Return
	
Label_186:
	var_409_bool = 1; // 0xba MovB
}


func_7342(var_159_bool)
{
	var_161_string = ""; var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_string = ""; var_166_string = ""; var_167_int = 0; var_168_bool = 0; var_169_int = 0; var_170_string = ""; // 0x1cae PushV
	var_166_string = "c"; // 0x1caf MovS
	var_167_int = 0; // 0x1cb0 MovI
	
Label_7345:
	var_171_int = 1; // 0x1cb1 PushI
	if(var_171_int == 0) goto Label_7358; // 0x1cb2 JumpB
	var_172_int = 1; // 0x1cb3 PushI
	var_173_int = var_167_int + var_172_int; // 0x1cb4 Add
	var_174_int = var_166_string + var_173_int; // 0x1cb5 Add
	HasProperty(var_174_int, var_168_bool); // 0x1cb6 ObjFunc
	var_175_bool = var_168_bool == 0; // 0x1cb8 Not
	if(var_175_bool == 0) goto Label_7355; // 0x1cb9 JumpB
	goto Label_7358; // 0x1cba Jump
	
Label_7358:
	var_176_bool = var_167_int == 0; // 0x1cbe Not
	if(var_176_bool == 0) goto Label_7362; // 0x1cbf JumpB
	var_159_bool = 0; // 0x1cc0 MovB
	return 10; // 0x1cc1 Return
	
Label_7362:
	var_169_int = 0; // 0x1cc2 MovI
	var_177_int = 1; // 0x1cc3 PushI
	var_178_bool = var_167_int > var_177_int; // 0x1cc4 GT
	if(var_178_bool == 0) goto Label_7368; // 0x1cc5 JumpB
	irand(var_169_int, var_167_int); // 0x1cc6 Func
	
Label_7368:
	var_179_int = 1; // 0x1cc8 PushI
	var_180_int = var_169_int + var_179_int; // 0x1cc9 Add
	var_181_int = var_166_string + var_180_int; // 0x1cca Add
	GetProperty(var_181_int, var_170_string); // 0x1ccb ObjFunc
	var_182_bool = 0; var_183_string = ""; // 0x1ccd PushV
	var_183_string = var_170_string; // 0x1cce Mov
	func_7453(var_182_bool, var_183_string); // 0x1ccf NEW_2
	var_159_bool = var_182_bool; // 0x1cd0 Mov
	return 10; // 0x1cd2 Return
	
Label_7355:
	var_188_int = 1; // 0x1cbb PushI
	var_167_int = var_167_int + var_188_int; // 0x1cbc Add2
	goto Label_7345; // 0x1cbd Jump
}


func_8367(var_490_bool)
{
	var_492_int = 0; var_493_string = ""; // 0x20b0 PushV
	var_493_string = "ood2Alexandr1"; // 0x20b1 MovS
	func_7502(var_492_int, var_493_string); // 0x20b2 NEW_2
	var_494_int = 0; // 0x20b4 PushI
	var_495_bool = var_492_int == var_494_int; // 0x20b5 Eq
	if(var_495_bool == 0) goto Label_8377; // 0x20b6 JumpB
	var_490_bool = 1; // 0x20b7 MovB
	return 0; // 0x20b8 Return
	
Label_8377:
	var_490_bool = 0; // 0x20b9 MovB
	return 0; // 0x20ba Return
}


func_8882()
{
	var_125_object = Obj(); var_126_object = Obj(); // 0x22b2 PushV
	var_127_int = 69; // 0x22b3 PushI
	var_128_int = 1; // 0x22b4 PushI
	var_129_int = 512151; // 0x22b5 PushI
	CreateDiaryEntry(var_126_object, var_127_int, var_128_int, var_129_int); // 0x22b6 Func
	var_130_bool = 0; var_131_object = Obj(); var_132_int = 0; // 0x22b8 PushV
	var_131_object = var_126_object; // 0x22b9 Mov
	var_132_int = 25; // 0x22ba MovI
	func_8986(var_130_bool, var_131_object, var_132_int); // 0x22bb NEW_2
	return 2; // 0x22bd Return
}


func_2745(var_0_object, var_459_int, var_460_object)
{
	var_462_object = Obj(); var_463_bool = 0; var_464_int = 0; var_465_bool = 0; var_466_object = Obj(); var_467_bool = 0; var_468_int = 0; var_469_bool = 0; // 0xab9 PushV
	var_0_object = var_460_object; // 0xaba TMov
	var_470_bool = 0; var_471_object = Obj(); var_472_float = 0; // 0xabb PushV
	var_471_object = var_460_object; // 0xabc Mov
	var_472_float = 70.0; // 0xabd MovF
	func_7199(var_471_object, var_472_float); // 0xabe NEW_2
	var_473_bool = var_470_bool == 0; // 0xac0 Not
	if(var_473_bool == 0) goto Label_2756; // 0xac1 JumpB
	var_459_int = -2; // 0xac2 MovI
	return 8; // 0xac3 Return
	
Label_2756:
	CreateDialog(var_466_object); // 0xac4 Func
	var_474_int = 0; // 0xac6 PushV
	func_7703(var_474_int); // 0xac7 NEW_2
	SetNPCName(var_474_int); // 0xac9 ObjFunc
	var_475_int = 0; // 0xacb PushV
	func_7701(var_475_int); // 0xacc NEW_2
	SetNPCDescription(var_475_int); // 0xace ObjFunc
	var_476_string = ""; // 0xad0 PushV
	func_7705(var_476_string); // 0xad1 NEW_2
	SetPhoto(var_476_string); // 0xad3 ObjFunc
	var_477_string = ""; // 0xad5 PushV
	func_7707(var_477_string); // 0xad6 NEW_2
	SetPhoto2(var_477_string); // 0xad8 ObjFunc
	var_478_int = 0; // 0xada PushV
	func_9064(var_478_int); // 0xadb NEW_2
	SetPlayerName(var_478_int); // 0xadd ObjFunc
	var_468_int = -1; // 0xadf MovI
	IsOverrideActive(var_467_bool); // 0xae0 Func
	var_479_bool = var_467_bool; // 0xae2 Push
	if(var_479_bool == 0) goto Label_2790; // 0xae3 JumpB
	var_459_int = -2; // 0xae4 MovI
	return 8; // 0xae5 Return
	
Label_2790:
	DoDialog(var_466_object); // 0xae6 Func
	var_480_bool = 0; var_481_object = Obj(); // 0xae8 PushV
	var_482_object = Obj(); // 0xae9 PushV
	func_7475(var_482_object); // 0xaea NEW_2
	var_481_object = var_482_object; // 0xaeb Mov
	func_7284(var_480_bool, var_481_object); // 0xaed NEW_2
	var_483_object = Obj(); var_484_object = Obj(); // 0xaef PushV
	var_483_object = var_460_object; // 0xaf0 Mov
	var_484_object = var_466_object; // 0xaf1 Mov
	TaskCall(11); // 0xaf2 TaskCall
	func_2826(var_485_object, var_486_object, var_487_string, var_488_bool, var_483_object, var_484_object); // 0xaf3 NEW_2
	TaskReturn(); // 0xaf4 TaskReturn
	IsDialogEnd(var_469_bool); // 0xaf6 ObjFunc
	
Label_2808:
	var_614_bool = var_469_bool == 0; // 0xaf8 Not
	if(var_614_bool == 0) goto Label_2815; // 0xaf9 JumpB
	sync(); // 0xafa Func
	IsDialogEnd(var_469_bool); // 0xafc ObjFunc
	goto Label_2808; // 0xafe Jump
	
Label_2815:
	var_615_object = Obj(); // 0xaff PushV
	var_615_object = var_460_object; // 0xb00 Mov
	func_7267(); // 0xb01 NEW_2
	StopDialog(var_466_object); // 0xb03 Func
	GetReturnValue(var_468_int); // 0xb05 ObjFunc
	var_459_int = var_468_int; // 0xb07 Mov
	return 8; // 0xb08 Return
}


func_1211(var_2_object, var_1178_string)
{
	var_1179_bool = 0; // 0x4bc PushV
	func_7709(var_1179_bool); // 0x4bd NEW_2
	var_1180_bool = var_1179_bool == 0; // 0x4bf Not
	if(var_1180_bool == 0) goto Label_1218; // 0x4c0 JumpB
	return 0; // 0x4c1 Return
	
Label_1218:
	var_1181_bool = var_1178_string == var_2_object; // 0x4c2 Eq
	if(var_1181_bool == 0) goto Label_1221; // 0x4c3 JumpB
	return 0; // 0x4c4 Return
	
Label_1221:
	var_1182_string = ""; var_1183_bool = 0; // 0x4c5 PushV
	var_1182_string = var_1178_string; // 0x4c6 Mov
	var_1184_string = ""; // 0x4c7 PushS
	var_1185_bool = var_1178_string == var_1184_string; // 0x4c8 Eq
	if(var_1185_bool == 0) goto Label_1228; // 0x4c9 JumpB
	var_1183_bool = 0; // 0x4ca MovB
	goto Label_1229; // 0x4cb Jump
	
Label_1229:
	func_7438(var_1182_string, var_1183_bool); // 0x4cd NEW_2
	var_2_object = var_1178_string; // 0x4cf TMov
	return 0; // 0x4d0 Return
	
Label_1228:
	var_1183_bool = 1; // 0x4cc MovB
}


func_8379(var_525_bool)
{
	var_527_int = 0; var_528_string = ""; // 0x20bc PushV
	var_528_string = "ood2Alexandr2"; // 0x20bd MovS
	func_7502(var_527_int, var_528_string); // 0x20be NEW_2
	var_529_int = 0; // 0x20c0 PushI
	var_530_bool = var_527_int == var_529_int; // 0x20c1 Eq
	if(var_530_bool == 0) goto Label_8389; // 0x20c2 JumpB
	var_525_bool = 1; // 0x20c3 MovB
	return 0; // 0x20c4 Return
	
Label_8389:
	var_525_bool = 0; // 0x20c5 MovB
	return 0; // 0x20c6 Return
}


func_8895()
{
	var_84_object = Obj(); var_85_object = Obj(); // 0x22bf PushV
	var_86_int = 22; // 0x22c0 PushI
	var_87_int = 2; // 0x22c1 PushI
	var_88_int = 503362; // 0x22c2 PushI
	CreateDiaryEntry(var_85_object, var_86_int, var_87_int, var_88_int); // 0x22c3 Func
	var_89_bool = 0; var_90_object = Obj(); var_91_int = 0; // 0x22c5 PushV
	var_90_object = var_85_object; // 0x22c6 Mov
	var_91_int = -1; // 0x22c7 MovI
	func_8986(var_89_bool, var_90_object, var_91_int); // 0x22c8 NEW_2
	return 2; // 0x22ca Return
}


func_8391(var_557_bool)
{
	var_559_int = 0; var_560_string = ""; // 0x20c8 PushV
	var_560_string = "ood2Alexandr3"; // 0x20c9 MovS
	func_7502(var_559_int, var_560_string); // 0x20ca NEW_2
	var_561_int = 0; // 0x20cc PushI
	var_562_bool = var_559_int == var_561_int; // 0x20cd Eq
	if(var_562_bool == 0) goto Label_8401; // 0x20ce JumpB
	var_557_bool = 1; // 0x20cf MovB
	return 0; // 0x20d0 Return
	
Label_8401:
	var_557_bool = 0; // 0x20d1 MovB
	return 0; // 0x20d2 Return
}


func_7879(var_243_object)
{
	var_245_string = "money 5000 is given"; // 0x1ec8 PushS
	Trace(var_245_string); // 0x1ec9 Func
	var_246_object = Obj(); var_247_int = 0; // 0x1ecb PushV
	var_246_object = var_243_object; // 0x1ecc Mov
	var_247_int = 5000; // 0x1ecd MovI
	func_7530(var_246_object, var_247_int); // 0x1ece NEW_2
	return 0; // 0x1ed0 Return
}


func_8908()
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x22cc PushV
	var_109_int = 96; // 0x22cd PushI
	var_110_int = 2; // 0x22ce PushI
	var_111_int = 512178; // 0x22cf PushI
	CreateDiaryEntry(var_108_object, var_109_int, var_110_int, var_111_int); // 0x22d0 Func
	var_112_bool = 0; var_113_object = Obj(); var_114_int = 0; // 0x22d2 PushV
	var_113_object = var_108_object; // 0x22d3 Mov
	var_114_int = 22; // 0x22d4 MovI
	func_8986(var_112_bool, var_113_object, var_114_int); // 0x22d5 NEW_2
	return 2; // 0x22d7 Return
}


func_7889()
{
	var_119_object = Obj(); var_120_string = ""; var_121_float = 0; // 0x1ed2 PushV
	var_122_object = Obj(); // 0x1ed3 PushV
	func_9014(var_122_object); // 0x1ed4 NEW_2
	var_119_object = var_122_object; // 0x1ed5 Mov
	var_120_string = "pt_map_anna"; // 0x1ed7 MovS
	var_121_float = 2; // 0x1ed8 MovI
	func_9031(var_119_object, var_120_string, var_121_float); // 0x1ed9 NEW_2
	var_142_object = Obj(); // 0x1edb PushV
	func_9014(var_142_object); // 0x1edc NEW_2
	ShowMap(var_142_object); // 0x1ede ObjFunc
	return 0; // 0x1ee0 Return
}


func_8403(var_602_bool)
{
	var_604_int = 0; var_605_string = ""; // 0x20d4 PushV
	var_605_string = "d2q01"; // 0x20d5 MovS
	func_7502(var_604_int, var_605_string); // 0x20d6 NEW_2
	var_606_int = 0; // 0x20d8 PushI
	var_607_bool = var_604_int == var_606_int; // 0x20d9 Eq
	if(var_607_bool == 0) goto Label_8413; // 0x20da JumpB
	var_602_bool = 1; // 0x20db MovB
	return 0; // 0x20dc Return
	
Label_8413:
	var_602_bool = 0; // 0x20dd MovB
	return 0; // 0x20de Return
}


func_7379(var_190_bool)
{
	var_192_string = ""; var_193_int = 0; var_194_bool = 0; var_195_int = 0; var_196_string = ""; var_197_string = ""; var_198_int = 0; var_199_bool = 0; var_200_int = 0; var_201_string = ""; // 0x1cd3 PushV
	var_202_string = "d"; // 0x1cd4 PushS
	var_203_int = 0; // 0x1cd5 PushV
	func_7643(var_203_int); // 0x1cd6 NEW_2
	var_209_int = var_202_string + var_203_int; // 0x1cd8 Add
	var_210_string = "m"; // 0x1cd9 PushS
	var_197_string = var_209_int + var_210_string; // 0x1cda Add2
	var_198_int = 0; // 0x1cdb MovI
	
Label_7388:
	var_211_int = 1; // 0x1cdc PushI
	if(var_211_int == 0) goto Label_7401; // 0x1cdd JumpB
	var_212_int = 1; // 0x1cde PushI
	var_213_int = var_198_int + var_212_int; // 0x1cdf Add
	var_214_int = var_197_string + var_213_int; // 0x1ce0 Add
	HasProperty(var_214_int, var_199_bool); // 0x1ce1 ObjFunc
	var_215_bool = var_199_bool == 0; // 0x1ce3 Not
	if(var_215_bool == 0) goto Label_7398; // 0x1ce4 JumpB
	goto Label_7401; // 0x1ce5 Jump
	
Label_7401:
	var_216_bool = var_198_int == 0; // 0x1ce9 Not
	if(var_216_bool == 0) goto Label_7405; // 0x1cea JumpB
	var_190_bool = 0; // 0x1ceb MovB
	return 10; // 0x1cec Return
	
Label_7405:
	var_200_int = 0; // 0x1ced MovI
	var_217_int = 1; // 0x1cee PushI
	var_218_bool = var_198_int > var_217_int; // 0x1cef GT
	if(var_218_bool == 0) goto Label_7411; // 0x1cf0 JumpB
	irand(var_200_int, var_198_int); // 0x1cf1 Func
	
Label_7411:
	var_219_int = 1; // 0x1cf3 PushI
	var_220_int = var_200_int + var_219_int; // 0x1cf4 Add
	var_221_int = var_197_string + var_220_int; // 0x1cf5 Add
	GetProperty(var_221_int, var_201_string); // 0x1cf6 ObjFunc
	var_222_bool = 0; var_223_string = ""; // 0x1cf8 PushV
	var_223_string = var_201_string; // 0x1cf9 Mov
	func_7453(var_222_bool, var_223_string); // 0x1cfa NEW_2
	var_190_bool = var_222_bool; // 0x1cfb Mov
	return 10; // 0x1cfd Return
	
Label_7398:
	var_224_int = 1; // 0x1ce6 PushI
	var_198_int = var_198_int + var_224_int; // 0x1ce7 Add2
	goto Label_7388; // 0x1ce8 Jump
}


func_4823(var_0_object, var_1_object, var_2_object, var_3_string, var_747_object, var_748_object)
{
	var_0_object = var_748_object; // 0x12d8 TMov
	var_1_object = var_747_object; // 0x12d9 TMov
	var_3_string = 0; // 0x12da TMovB
	var_753_int = 1; // 0x12db PushI
	if(var_753_int == 0) goto Label_4924; // 0x12dc JumpB
	var_754_bool = 0; var_755_object = Obj(); // 0x12dd PushV
	var_755_object = var_1_object; // 0x12de MovT
	func_8528(var_755_object); // 0x12df NEW_2
	if(var_754_bool == 0) goto Label_4859; // 0x12e1 JumpB
	var_760_object = Obj(); var_761_object = Obj(); // 0x12e2 PushV
	var_760_object = var_1_object; // 0x12e3 MovT
	var_761_object = var_0_object; // 0x12e4 MovT
	func_7745(); // 0x12e5 NEW_2
	var_764_string = ""; // 0x12e7 PushV
	var_764_string = "Neutral"; // 0x12e8 MovS
	func_4954(var_748_object, var_764_string); // 0x12e9 NEW_2
	var_772_int = 511175; // 0x12eb PushI
	SetMessage(var_772_int); // 0x12ec TObjFunc
	ClearReplies(); // 0x12ee TObjFunc
	var_773_int = 511176; // 0x12f0 PushI
	var_774_int = 12361; // 0x12f1 PushI
	var_775_int = 12360; // 0x12f2 PushI
	AddReply(var_773_int, var_774_int, var_775_int); // 0x12f3 TObjFunc
	var_776_int = 511178; // 0x12f5 PushI
	var_777_int = 12366; // 0x12f6 PushI
	var_778_int = 12362; // 0x12f7 PushI
	AddReply(var_776_int, var_777_int, var_778_int); // 0x12f8 TObjFunc
	goto Label_4924; // 0x12fa Jump
	
Label_4924:
	var_779_bool = 0; // 0x133c PushV
	func_7709(var_779_bool); // 0x133d NEW_2
	if(var_779_bool == 0) goto Label_4939; // 0x133f JumpB
	
Label_4928:
	lshWaitForAnimEnd(); // 0x1340 Func
	var_780_string = var_3_string; // 0x1342 PushT
	if(var_780_string == 0) goto Label_4933; // 0x1343 JumpB
	goto Label_4938; // 0x1344 Jump
	
Label_4938:
	goto Label_4953; // 0x134a Jump
	
Label_4953:
	return 0; // 0x1359 Return
	
Label_4933:
	var_781_string = ""; // 0x1345 PushV
	var_781_string = var_2_object; // 0x1346 MovT
	func_7422(var_781_string); // 0x1347 NEW_2
	goto Label_4928; // 0x1349 Jump
	
Label_4939:
	var_782_string = "all"; // 0x134b PushS
	var_783_string = "idle"; // 0x134c PushS
	PlayAnimation(var_782_string, var_783_string); // 0x134d Func
	
Label_4943:
	WaitForAnimEnd(); // 0x134f Func
	var_784_string = var_3_string; // 0x1351 PushT
	if(var_784_string == 0) goto Label_4948; // 0x1352 JumpB
	goto Label_4953; // 0x1353 Jump
	
Label_4948:
	var_785_string = "all"; // 0x1354 PushS
	var_786_string = "idle"; // 0x1355 PushS
	PlayAnimation(var_785_string, var_786_string); // 0x1356 Func
	goto Label_4943; // 0x1358 Jump
	
Label_4859:
	var_787_string = ""; // 0x12fb PushV
	var_787_string = "Neutral"; // 0x12fc MovS
	func_4954(var_748_object, var_787_string); // 0x12fd NEW_2
	var_788_int = 511164; // 0x12ff PushI
	SetMessage(var_788_int); // 0x1300 TObjFunc
	ClearReplies(); // 0x1302 TObjFunc
	var_789_bool = 0; var_790_object = Obj(); // 0x1304 PushV
	var_790_object = var_1_object; // 0x1305 MovT
	func_8540(var_790_object); // 0x1306 NEW_2
	if(var_789_bool == 0) goto Label_4878; // 0x1308 JumpB
	var_795_int = 511489; // 0x1309 PushI
	var_796_int = 12692; // 0x130a PushI
	var_797_int = 12691; // 0x130b PushI
	AddReply(var_795_int, var_796_int, var_797_int); // 0x130c TObjFunc
	
Label_4878:
	var_798_bool = 0; // 0x130e PushV
	var_798_bool = 0; // 0x130f MovB
	var_799_bool = 0; var_800_object = Obj(); // 0x1310 PushV
	var_800_object = var_1_object; // 0x1311 MovT
	func_8552(var_800_object); // 0x1312 NEW_2
	if(var_799_bool == 0) goto Label_4891; // 0x1314 JumpB
	var_805_bool = 0; var_806_object = Obj(); // 0x1315 PushV
	var_806_object = var_1_object; // 0x1316 MovT
	func_8564(var_806_object); // 0x1317 NEW_2
	if(var_805_bool == 0) goto Label_4891; // 0x1319 JumpB
	var_798_bool = 1; // 0x131a MovB
	
Label_4891:
	if(var_798_bool == 0) goto Label_4897; // 0x131b JumpB
	var_811_int = 511187; // 0x131c PushI
	var_812_int = 12373; // 0x131d PushI
	var_813_int = 12372; // 0x131e PushI
	AddReply(var_811_int, var_812_int, var_813_int); // 0x131f TObjFunc
	
Label_4897:
	var_814_bool = 0; // 0x1321 PushV
	var_814_bool = 0; // 0x1322 MovB
	var_815_bool = 0; var_816_object = Obj(); // 0x1323 PushV
	var_816_object = var_1_object; // 0x1324 MovT
	func_8576(var_816_object); // 0x1325 NEW_2
	if(var_815_bool == 0) goto Label_4910; // 0x1327 JumpB
	var_821_bool = 0; var_822_object = Obj(); // 0x1328 PushV
	var_822_object = var_1_object; // 0x1329 MovT
	func_8588(var_822_object); // 0x132a NEW_2
	if(var_821_bool == 0) goto Label_4910; // 0x132c JumpB
	var_814_bool = 1; // 0x132d MovB
	
Label_4910:
	if(var_814_bool == 0) goto Label_4916; // 0x132e JumpB
	var_827_int = 511495; // 0x132f PushI
	var_828_int = 12697; // 0x1330 PushI
	var_829_int = 12696; // 0x1331 PushI
	AddReply(var_827_int, var_828_int, var_829_int); // 0x1332 TObjFunc
	
Label_4916:
	var_830_int = 511174; // 0x1334 PushI
	var_831_int = -1; // 0x1335 PushI
	var_832_int = 12358; // 0x1336 PushI
	AddReply(var_830_int, var_831_int, var_832_int); // 0x1337 TObjFunc
	goto Label_4924; // 0x1339 Jump
}


func_8921()
{
	var_207_object = Obj(); var_208_object = Obj(); // 0x22d9 PushV
	var_209_int = 98; // 0x22da PushI
	var_210_int = 2; // 0x22db PushI
	var_211_int = 512180; // 0x22dc PushI
	CreateDiaryEntry(var_208_object, var_209_int, var_210_int, var_211_int); // 0x22dd Func
	var_212_bool = 0; var_213_object = Obj(); var_214_int = 0; // 0x22df PushV
	var_213_object = var_208_object; // 0x22e0 Mov
	var_214_int = 22; // 0x22e1 MovI
	func_8986(var_212_bool, var_213_object, var_214_int); // 0x22e2 NEW_2
	return 2; // 0x22e4 Return
}


func_6874(var_0_object)
{
	var_57_bool = 0; // 0x1ada PushV
	func_7194(var_57_bool); // 0x1adb NEW_2
	var_60_bool = var_57_bool == 0; // 0x1add Not
	if(var_60_bool == 0) goto Label_6881; // 0x1ade JumpB
	Hold(); // 0x1adf Func
	
Label_6881:
	GetDirection(var_0_object); // 0x1ae1 Func
	
Label_6883:
	func_7050(); // 0x1ae4 NEW_2
	goto Label_6883; // 0x1ae6 Jump
}


func_6364(var_2_object, var_1107_string)
{
	var_1108_bool = 0; // 0x18dd PushV
	func_7709(var_1108_bool); // 0x18de NEW_2
	var_1109_bool = var_1108_bool == 0; // 0x18e0 Not
	if(var_1109_bool == 0) goto Label_6371; // 0x18e1 JumpB
	return 0; // 0x18e2 Return
	
Label_6371:
	var_1110_bool = var_1107_string == var_2_object; // 0x18e3 Eq
	if(var_1110_bool == 0) goto Label_6374; // 0x18e4 JumpB
	return 0; // 0x18e5 Return
	
Label_6374:
	var_1111_string = ""; var_1112_bool = 0; // 0x18e6 PushV
	var_1111_string = var_1107_string; // 0x18e7 Mov
	var_1113_string = ""; // 0x18e8 PushS
	var_1114_bool = var_1107_string == var_1113_string; // 0x18e9 Eq
	if(var_1114_bool == 0) goto Label_6381; // 0x18ea JumpB
	var_1112_bool = 0; // 0x18eb MovB
	goto Label_6382; // 0x18ec Jump
	
Label_6382:
	func_7438(var_1111_string, var_1112_bool); // 0x18ee NEW_2
	var_2_object = var_1107_string; // 0x18f0 TMov
	return 0; // 0x18f1 Return
	
Label_6381:
	var_1112_bool = 1; // 0x18ed MovB
}


func_8415(var_563_bool)
{
	var_565_int = 0; var_566_string = ""; // 0x20e0 PushV
	var_566_string = "d2q01"; // 0x20e1 MovS
	func_7502(var_565_int, var_566_string); // 0x20e2 NEW_2
	var_567_int = 5; // 0x20e4 PushI
	var_568_bool = var_565_int == var_567_int; // 0x20e5 Eq
	if(var_568_bool == 0) goto Label_8425; // 0x20e6 JumpB
	var_563_bool = 1; // 0x20e7 MovB
	return 0; // 0x20e8 Return
	
Label_8425:
	var_563_bool = 0; // 0x20e9 MovB
	return 0; // 0x20ea Return
}


func_7905()
{
	var_107_object = Obj(); var_108_string = ""; var_109_float = 0; // 0x1ee2 PushV
	var_110_object = Obj(); // 0x1ee3 PushV
	func_9014(var_110_object); // 0x1ee4 NEW_2
	var_107_object = var_110_object; // 0x1ee5 Mov
	var_108_string = "pt_map_julia"; // 0x1ee7 MovS
	var_109_float = 2; // 0x1ee8 MovI
	func_9031(var_107_object, var_108_string, var_109_float); // 0x1ee9 NEW_2
	var_130_object = Obj(); // 0x1eeb PushV
	func_9014(var_130_object); // 0x1eec NEW_2
	ShowMap(var_130_object); // 0x1eee ObjFunc
	return 0; // 0x1ef0 Return
}


func_8934()
{
	var_282_object = Obj(); var_283_object = Obj(); // 0x22e6 PushV
	var_284_int = 100; // 0x22e7 PushI
	var_285_int = 2; // 0x22e8 PushI
	var_286_int = 512182; // 0x22e9 PushI
	CreateDiaryEntry(var_283_object, var_284_int, var_285_int, var_286_int); // 0x22ea Func
	var_287_bool = 0; var_288_object = Obj(); var_289_int = 0; // 0x22ec PushV
	var_288_object = var_283_object; // 0x22ed Mov
	var_289_int = 22; // 0x22ee MovI
	func_8986(var_287_bool, var_288_object, var_289_int); // 0x22ef NEW_2
	return 2; // 0x22f1 Return
}


func_6888(var_81_bool)
{
	var_82_object = Obj(); var_83_object = Obj(); // 0x1ae8 PushV
	var_84_string = "player"; // 0x1ae9 PushS
	FindActor(var_83_object, var_84_string); // 0x1aea Func
	var_85_bool = var_83_object == 0; // 0x1aec Not
	if(var_85_bool == 0) goto Label_6896; // 0x1aed JumpB
	var_81_bool = 0; // 0x1aee MovB
	return 2; // 0x1aef Return
	
Label_6896:
	var_86_bool = 0; var_87_object = Obj(); // 0x1af0 PushV
	var_87_object = var_83_object; // 0x1af1 Mov
	func_7185(var_87_object); // 0x1af2 NEW_2
	var_81_bool = var_86_bool; // 0x1af3 Mov
	return 2; // 0x1af5 Return
}


func_8427(var_531_bool)
{
	var_531_bool = 1; // 0x20ec MovB
	return 0; // 0x20ed Return
}


func_8432(var_533_bool)
{
	var_535_int = 0; var_536_string = ""; // 0x20f1 PushV
	var_536_string = "d2q01BigVladVisit"; // 0x20f2 MovS
	func_7502(var_535_int, var_536_string); // 0x20f3 NEW_2
	var_537_int = 1; // 0x20f5 PushI
	var_538_bool = var_535_int == var_537_int; // 0x20f6 Eq
	if(var_538_bool == 0) goto Label_8442; // 0x20f7 JumpB
	var_533_bool = 1; // 0x20f8 MovB
	return 0; // 0x20f9 Return
	
Label_8442:
	var_533_bool = 0; // 0x20fa MovB
	return 0; // 0x20fb Return
}


func_7921()
{
	var_84_string = "playsound"; // 0x1ef2 PushS
	var_85_string = "mapmark"; // 0x1ef3 PushS
	TriggerWorld(var_84_string, var_85_string); // 0x1ef4 Func
	return 0; // 0x1ef6 Return
}


func_8947()
{
	var_90_object = Obj(); var_91_object = Obj(); // 0x22f3 PushV
	var_92_int = 114; // 0x22f4 PushI
	var_93_int = 1; // 0x22f5 PushI
	var_94_int = 513737; // 0x22f6 PushI
	CreateDiaryEntry(var_91_object, var_92_int, var_93_int, var_94_int); // 0x22f7 Func
	var_95_bool = 0; var_96_object = Obj(); var_97_int = 0; // 0x22f9 PushV
	var_96_object = var_91_object; // 0x22fa Mov
	var_97_int = 111; // 0x22fb MovI
	func_8986(var_95_bool, var_96_object, var_97_int); // 0x22fc NEW_2
	return 2; // 0x22fe Return
}


func_7927()
{
	var_139_object = Obj(); var_140_string = ""; var_141_float = 0; // 0x1ef8 PushV
	var_142_object = Obj(); // 0x1ef9 PushV
	func_9014(var_142_object); // 0x1efa NEW_2
	var_139_object = var_142_object; // 0x1efb Mov
	var_140_string = "pt_map_ospina"; // 0x1efd MovS
	var_141_float = 2; // 0x1efe MovI
	func_9031(var_139_object, var_140_string, var_141_float); // 0x1eff NEW_2
	var_162_object = Obj(); // 0x1f01 PushV
	func_9014(var_162_object); // 0x1f02 NEW_2
	ShowMap(var_162_object); // 0x1f04 ObjFunc
	return 0; // 0x1f06 Return
}


func_6903(var_0_object)
{
	var_133_float = GetByIndex(var_0_object, 0); // 0x1af7 PushE
	var_134_float = GetByIndex(var_0_object, 2); // 0x1af8 PushE
	RotateAsync(var_133_float, var_134_float); // 0x1af9 Func
	return 0; // 0x1afb Return
}


func_8444(var_588_bool)
{
	var_590_int = 0; var_591_string = ""; // 0x20fd PushV
	var_591_string = "d2q03"; // 0x20fe MovS
	func_7502(var_590_int, var_591_string); // 0x20ff NEW_2
	var_592_int = 3; // 0x2101 PushI
	var_593_bool = var_590_int == var_592_int; // 0x2102 Eq
	if(var_593_bool == 0) goto Label_8454; // 0x2103 JumpB
	var_588_bool = 1; // 0x2104 MovB
	return 0; // 0x2105 Return
	
Label_8454:
	var_588_bool = 0; // 0x2106 MovB
	return 0; // 0x2107 Return
}


func_6908(var_64_bool)
{
	var_65_object = Obj(); var_66_bool = 0; var_67_object = Obj(); var_68_bool = 0; // 0x1afc PushV
	var_69_string = "player"; // 0x1afd PushS
	FindActor(var_67_object, var_69_string); // 0x1afe Func
	var_70_bool = var_67_object == 0; // 0x1b00 Not
	if(var_70_bool == 0) goto Label_6916; // 0x1b01 JumpB
	var_64_bool = 0; // 0x1b02 MovB
	return 4; // 0x1b03 Return
	
Label_6916:
	var_71_float = 0; var_72_object = Obj(); // 0x1b04 PushV
	var_72_object = var_67_object; // 0x1b05 Mov
	func_7126(var_72_object); // 0x1b06 NEW_2
	var_79_float = 90000.0; // 0x1b08 PushF
	var_80_bool = var_71_float > var_79_float; // 0x1b09 GT
	if(var_80_bool == 0) goto Label_6925; // 0x1b0a JumpB
	var_64_bool = 0; // 0x1b0b MovB
	return 4; // 0x1b0c Return
	
Label_6925:
	CanSee(var_68_bool, var_67_object); // 0x1b0d Func
	var_64_bool = var_68_bool; // 0x1b0f Mov
	return 4; // 0x1b10 Return
}


func_7422(var_277_string)
{
	var_278_bool = 0; var_279_float = 0; var_280_float = 0; var_281_bool = 0; var_282_float = 0; var_283_float = 0; // 0x1cfe PushV
	lshHasAnimation(var_281_bool, var_277_string); // 0x1cff Func
	var_284_bool = var_281_bool; // 0x1d01 Push
	if(var_284_bool == 0) goto Label_7433; // 0x1d02 JumpB
	lshGetAnimTimes(var_277_string, var_282_float, var_283_float); // 0x1d03 Func
	var_285_bool = 0; // 0x1d05 PushB
	lshPlayAnimation(var_282_float, var_283_float, var_285_bool); // 0x1d06 Func
	goto Label_7437; // 0x1d08 Jump
	
Label_7437:
	return 6; // 0x1d0d Return
	
Label_7433:
	var_286_string = "Can't find lsh animation : "; // 0x1d09 PushS
	var_287_int = var_286_string + var_277_string; // 0x1d0a Add
	Trace(var_287_int); // 0x1d0b Func
}


func_8960()
{
	var_86_object = Obj(); var_87_object = Obj(); // 0x2300 PushV
	var_88_int = 172; // 0x2301 PushI
	var_89_int = 2; // 0x2302 PushI
	var_90_int = 515424; // 0x2303 PushI
	CreateDiaryEntry(var_87_object, var_88_int, var_89_int, var_90_int); // 0x2304 Func
	var_91_bool = 0; var_92_object = Obj(); var_93_int = 0; // 0x2306 PushV
	var_92_object = var_87_object; // 0x2307 Mov
	var_93_int = 170; // 0x2308 MovI
	func_8986(var_91_bool, var_92_object, var_93_int); // 0x2309 NEW_2
	return 2; // 0x230b Return
}


func_7943()
{
	var_99_string = "ood3Alexandr2"; // 0x1f08 PushS
	var_100_int = 1; // 0x1f09 PushI
	SetVariable(var_99_string, var_100_int); // 0x1f0a Func
	return 0; // 0x1f0c Return
}


func_8456(var_575_bool)
{
	var_577_int = 0; var_578_string = ""; // 0x2109 PushV
	var_578_string = "d2q03"; // 0x210a MovS
	func_7502(var_577_int, var_578_string); // 0x210b NEW_2
	var_579_int = 1000; // 0x210d PushI
	var_580_bool = var_577_int == var_579_int; // 0x210e Eq
	if(var_580_bool == 0) goto Label_8466; // 0x210f JumpB
	var_575_bool = 1; // 0x2110 MovB
	return 0; // 0x2111 Return
	
Label_8466:
	var_575_bool = 0; // 0x2112 MovB
	return 0; // 0x2113 Return
}


func_2826(var_0_object, var_1_object, var_2_object, var_3_string, var_483_object, var_484_object)
{
	var_0_object = var_484_object; // 0xb0b TMov
	var_1_object = var_483_object; // 0xb0c TMov
	var_3_string = 0; // 0xb0d TMovB
	var_489_int = 1; // 0xb0e PushI
	if(var_489_int == 0) goto Label_3018; // 0xb0f JumpB
	var_490_bool = 0; var_491_object = Obj(); // 0xb10 PushV
	var_491_object = var_1_object; // 0xb11 MovT
	func_8367(var_491_object); // 0xb12 NEW_2
	if(var_490_bool == 0) goto Label_2862; // 0xb14 JumpB
	var_496_object = Obj(); var_497_object = Obj(); // 0xb15 PushV
	var_496_object = var_1_object; // 0xb16 MovT
	var_497_object = var_0_object; // 0xb17 MovT
	func_8318(); // 0xb18 NEW_2
	var_500_string = ""; // 0xb1a PushV
	var_500_string = "Neutral"; // 0xb1b MovS
	func_3048(var_484_object, var_500_string); // 0xb1c NEW_2
	var_508_int = 506610; // 0xb1e PushI
	SetMessage(var_508_int); // 0xb1f TObjFunc
	ClearReplies(); // 0xb21 TObjFunc
	var_509_int = 506611; // 0xb23 PushI
	var_510_int = 7748; // 0xb24 PushI
	var_511_int = 7280; // 0xb25 PushI
	AddReply(var_509_int, var_510_int, var_511_int); // 0xb26 TObjFunc
	var_512_int = 507066; // 0xb28 PushI
	var_513_int = 7748; // 0xb29 PushI
	var_514_int = 7784; // 0xb2a PushI
	AddReply(var_512_int, var_513_int, var_514_int); // 0xb2b TObjFunc
	goto Label_3018; // 0xb2d Jump
	
Label_3018:
	var_515_bool = 0; // 0xbca PushV
	func_7709(var_515_bool); // 0xbcb NEW_2
	if(var_515_bool == 0) goto Label_3033; // 0xbcd JumpB
	
Label_3022:
	lshWaitForAnimEnd(); // 0xbce Func
	var_516_string = var_3_string; // 0xbd0 PushT
	if(var_516_string == 0) goto Label_3027; // 0xbd1 JumpB
	goto Label_3032; // 0xbd2 Jump
	
Label_3032:
	goto Label_3047; // 0xbd8 Jump
	
Label_3047:
	return 0; // 0xbe7 Return
	
Label_3027:
	var_517_string = ""; // 0xbd3 PushV
	var_517_string = var_2_object; // 0xbd4 MovT
	func_7422(var_517_string); // 0xbd5 NEW_2
	goto Label_3022; // 0xbd7 Jump
	
Label_3033:
	var_518_string = "all"; // 0xbd9 PushS
	var_519_string = "idle"; // 0xbda PushS
	PlayAnimation(var_518_string, var_519_string); // 0xbdb Func
	
Label_3037:
	WaitForAnimEnd(); // 0xbdd Func
	var_520_string = var_3_string; // 0xbdf PushT
	if(var_520_string == 0) goto Label_3042; // 0xbe0 JumpB
	goto Label_3047; // 0xbe1 Jump
	
Label_3042:
	var_521_string = "all"; // 0xbe2 PushS
	var_522_string = "idle"; // 0xbe3 PushS
	PlayAnimation(var_521_string, var_522_string); // 0xbe4 Func
	goto Label_3037; // 0xbe6 Jump
	
Label_2862:
	var_523_bool = 0; // 0xb2e PushV
	var_523_bool = 0; // 0xb2f MovB
	var_524_bool = 0; // 0xb30 PushV
	var_524_bool = 0; // 0xb31 MovB
	var_525_bool = 0; var_526_object = Obj(); // 0xb32 PushV
	var_526_object = var_1_object; // 0xb33 MovT
	func_8379(var_526_object); // 0xb34 NEW_2
	if(var_525_bool == 0) goto Label_2877; // 0xb36 JumpB
	var_531_bool = 0; var_532_object = Obj(); // 0xb37 PushV
	var_532_object = var_1_object; // 0xb38 MovT
	func_8427(var_532_object); // 0xb39 NEW_2
	if(var_531_bool == 0) goto Label_2877; // 0xb3b JumpB
	var_524_bool = 1; // 0xb3c MovB
	
Label_2877:
	if(var_524_bool == 0) goto Label_2884; // 0xb3d JumpB
	var_533_bool = 0; var_534_object = Obj(); // 0xb3e PushV
	var_534_object = var_1_object; // 0xb3f MovT
	func_8432(var_534_object); // 0xb40 NEW_2
	if(var_533_bool == 0) goto Label_2884; // 0xb42 JumpB
	var_523_bool = 1; // 0xb43 MovB
	
Label_2884:
	if(var_523_bool == 0) goto Label_2915; // 0xb44 JumpB
	var_539_object = Obj(); var_540_object = Obj(); // 0xb45 PushV
	var_539_object = var_1_object; // 0xb46 MovT
	var_540_object = var_0_object; // 0xb47 MovT
	func_7778(); // 0xb48 NEW_2
	var_543_string = ""; // 0xb4a PushV
	var_543_string = "Neutral"; // 0xb4b MovS
	func_3048(var_484_object, var_543_string); // 0xb4c NEW_2
	var_544_int = 506731; // 0xb4e PushI
	SetMessage(var_544_int); // 0xb4f TObjFunc
	ClearReplies(); // 0xb51 TObjFunc
	var_545_int = 506732; // 0xb53 PushI
	var_546_int = 7420; // 0xb54 PushI
	var_547_int = 7419; // 0xb55 PushI
	AddReply(var_545_int, var_546_int, var_547_int); // 0xb56 TObjFunc
	var_548_int = 506742; // 0xb58 PushI
	var_549_int = 7420; // 0xb59 PushI
	var_550_int = 7430; // 0xb5a PushI
	AddReply(var_548_int, var_549_int, var_550_int); // 0xb5b TObjFunc
	var_551_int = 506743; // 0xb5d PushI
	var_552_int = 7433; // 0xb5e PushI
	var_553_int = 7432; // 0xb5f PushI
	AddReply(var_551_int, var_552_int, var_553_int); // 0xb60 TObjFunc
	goto Label_3018; // 0xb62 Jump
	
Label_2915:
	var_554_string = ""; // 0xb63 PushV
	var_554_string = "Neutral"; // 0xb64 MovS
	func_3048(var_484_object, var_554_string); // 0xb65 NEW_2
	var_555_int = 506614; // 0xb67 PushI
	SetMessage(var_555_int); // 0xb68 TObjFunc
	ClearReplies(); // 0xb6a TObjFunc
	var_556_bool = 0; // 0xb6c PushV
	var_556_bool = 0; // 0xb6d MovB
	var_557_bool = 0; var_558_object = Obj(); // 0xb6e PushV
	var_558_object = var_1_object; // 0xb6f MovT
	func_8391(var_558_object); // 0xb70 NEW_2
	if(var_557_bool == 0) goto Label_2937; // 0xb72 JumpB
	var_563_bool = 0; var_564_object = Obj(); // 0xb73 PushV
	var_564_object = var_1_object; // 0xb74 MovT
	func_8415(var_564_object); // 0xb75 NEW_2
	if(var_563_bool == 0) goto Label_2937; // 0xb77 JumpB
	var_556_bool = 1; // 0xb78 MovB
	
Label_2937:
	if(var_556_bool == 0) goto Label_2943; // 0xb79 JumpB
	var_569_int = 506615; // 0xb7a PushI
	var_570_int = 7282; // 0xb7b PushI
	var_571_int = 7284; // 0xb7c PushI
	AddReply(var_569_int, var_570_int, var_571_int); // 0xb7d TObjFunc
	
Label_2943:
	var_572_bool = 0; // 0xb7f PushV
	var_572_bool = 1; // 0xb80 MovB
	var_573_bool = 0; // 0xb81 PushV
	var_573_bool = 0; // 0xb82 MovB
	var_574_bool = 0; // 0xb83 PushV
	var_574_bool = 0; // 0xb84 MovB
	var_575_bool = 0; var_576_object = Obj(); // 0xb85 PushV
	var_576_object = var_1_object; // 0xb86 MovT
	func_8456(var_576_object); // 0xb87 NEW_2
	if(var_575_bool == 0) goto Label_2960; // 0xb89 JumpB
	var_581_bool = 0; var_582_object = Obj(); // 0xb8a PushV
	var_582_object = var_1_object; // 0xb8b MovT
	func_8391(var_582_object); // 0xb8c NEW_2
	if(var_581_bool == 0) goto Label_2960; // 0xb8e JumpB
	var_574_bool = 1; // 0xb8f MovB
	
Label_2960:
	if(var_574_bool == 0) goto Label_2968; // 0xb90 JumpB
	var_583_bool = 0; var_584_object = Obj(); // 0xb91 PushV
	var_584_object = var_1_object; // 0xb92 MovT
	func_8415(var_584_object); // 0xb93 NEW_2
	var_585_bool = var_583_bool == 0; // 0xb95 Not
	if(var_585_bool == 0) goto Label_2968; // 0xb96 JumpB
	var_573_bool = 1; // 0xb97 MovB
	
Label_2968:
	if(var_573_bool == 0) goto Label_2994; // 0xb98 JumpB
	var_586_bool = 0; // 0xb99 PushV
	var_586_bool = 0; // 0xb9a MovB
	var_587_bool = 0; // 0xb9b PushV
	var_587_bool = 0; // 0xb9c MovB
	var_588_bool = 0; var_589_object = Obj(); // 0xb9d PushV
	var_589_object = var_1_object; // 0xb9e MovT
	func_8444(var_589_object); // 0xb9f NEW_2
	if(var_588_bool == 0) goto Label_2984; // 0xba1 JumpB
	var_594_bool = 0; var_595_object = Obj(); // 0xba2 PushV
	var_595_object = var_1_object; // 0xba3 MovT
	func_8391(var_595_object); // 0xba4 NEW_2
	if(var_594_bool == 0) goto Label_2984; // 0xba6 JumpB
	var_587_bool = 1; // 0xba7 MovB
	
Label_2984:
	if(var_587_bool == 0) goto Label_2992; // 0xba8 JumpB
	var_596_bool = 0; var_597_object = Obj(); // 0xba9 PushV
	var_597_object = var_1_object; // 0xbaa MovT
	func_8415(var_597_object); // 0xbab NEW_2
	var_598_bool = var_596_bool == 0; // 0xbad Not
	if(var_598_bool == 0) goto Label_2992; // 0xbae JumpB
	var_586_bool = 1; // 0xbaf MovB
	
Label_2992:
	if(var_586_bool == 0) goto Label_2994; // 0xbb0 JumpB
	var_572_bool = 0; // 0xbb1 MovB
	
Label_2994:
	if(var_572_bool == 0) goto Label_3000; // 0xbb2 JumpB
	var_599_int = 507071; // 0xbb3 PushI
	var_600_int = 7282; // 0xbb4 PushI
	var_601_int = 7794; // 0xbb5 PushI
	AddReply(var_599_int, var_600_int, var_601_int); // 0xbb6 TObjFunc
	
Label_3000:
	var_602_bool = 0; var_603_object = Obj(); // 0xbb8 PushV
	var_603_object = var_1_object; // 0xbb9 MovT
	func_8403(var_603_object); // 0xbba NEW_2
	if(var_602_bool == 0) goto Label_3010; // 0xbbc JumpB
	var_608_int = 506618; // 0xbbd PushI
	var_609_int = 7800; // 0xbbe PushI
	var_610_int = 7287; // 0xbbf PushI
	AddReply(var_608_int, var_609_int, var_610_int); // 0xbc0 TObjFunc
	
Label_3010:
	var_611_int = 507532; // 0xbc2 PushI
	var_612_int = -1; // 0xbc3 PushI
	var_613_int = 8314; // 0xbc4 PushI
	AddReply(var_611_int, var_612_int, var_613_int); // 0xbc5 TObjFunc
	goto Label_3018; // 0xbc7 Jump
}


func_7949()
{
	var_135_string = "ood3Alexandr3"; // 0x1f0e PushS
	var_136_int = 1; // 0x1f0f PushI
	SetVariable(var_135_string, var_136_int); // 0x1f10 Func
	return 0; // 0x1f12 Return
}


func_7438(var_258_string, var_259_bool)
{
	var_262_bool = 0; var_263_float = 0; var_264_float = 0; var_265_bool = 0; var_266_float = 0; var_267_float = 0; // 0x1d0e PushV
	lshHasAnimation(var_265_bool, var_258_string); // 0x1d0f Func
	var_268_bool = var_265_bool; // 0x1d11 Push
	if(var_268_bool == 0) goto Label_7448; // 0x1d12 JumpB
	lshGetAnimTimes(var_258_string, var_266_float, var_267_float); // 0x1d13 Func
	lshPlayAnimation(var_266_float, var_267_float, var_259_bool); // 0x1d15 Func
	goto Label_7452; // 0x1d17 Jump
	
Label_7452:
	return 6; // 0x1d1c Return
	
Label_7448:
	var_269_string = "Can't find lsh animation : "; // 0x1d18 PushS
	var_270_int = var_269_string + var_258_string; // 0x1d19 Add
	Trace(var_270_int); // 0x1d1a Func
}


func_8973(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x230d PushV
	GetDiaryRoot(var_102_object); // 0x230e Func
	var_103_bool = var_102_object == 0; // 0x2310 Not
	if(var_103_bool == 0) goto Label_8983; // 0x2311 JumpB
	var_104_string = "Can't retrieve diary root"; // 0x2312 PushS
	Trace(var_104_string); // 0x2313 Func
	var_100_object = 0; // 0x2315 MovB
	return 2; // 0x2316 Return
	
Label_8983:
	var_100_object = var_102_object; // 0x2317 Mov
	return 2; // 0x2318 Return
}


func_6930()
{
	var_1264_float = 0; var_1265_float = 0; // 0x1b12 PushV
	var_1266_int = 8; // 0x1b13 PushI
	var_1267_int = 16; // 0x1b14 PushI
	rand(var_1265_float, var_1266_int, var_1267_int); // 0x1b15 Func
	var_1268_int = 10; // 0x1b17 PushI
	SetTimer(var_1268_int, var_1265_float); // 0x1b18 Func
	return 2; // 0x1b1a Return
}


func_7955()
{
	var_664_string = "ood3Alexandr4"; // 0x1f14 PushS
	var_665_int = 1; // 0x1f15 PushI
	SetVariable(var_664_string, var_665_int); // 0x1f16 Func
	return 0; // 0x1f18 Return
}


func_8468(var_689_bool)
{
	var_691_int = 0; var_692_string = ""; // 0x2115 PushV
	var_692_string = "ood3Alexandr2"; // 0x2116 MovS
	func_7502(var_691_int, var_692_string); // 0x2117 NEW_2
	var_693_int = 0; // 0x2119 PushI
	var_694_bool = var_691_int == var_693_int; // 0x211a Eq
	if(var_694_bool == 0) goto Label_8478; // 0x211b JumpB
	var_689_bool = 1; // 0x211c MovB
	return 0; // 0x211d Return
	
Label_8478:
	var_689_bool = 0; // 0x211e MovB
	return 0; // 0x211f Return
}


func_7961()
{
	var_107_object = Obj(); var_108_object = Obj(); // 0x1f19 PushV
	var_109_string = "d3q01"; // 0x1f1a PushS
	var_110_int = 2; // 0x1f1b PushI
	SetVariable(var_109_string, var_110_int); // 0x1f1c Func
	var_111_object = Obj(); // 0x1f1e PushV
	func_9014(var_111_object); // 0x1f1f NEW_2
	var_108_object = var_111_object; // 0x1f20 Mov
	var_118_string = "d3q01AlexandrGotoOspina"; // 0x1f22 PushS
	var_119_string = "pt_map_ospina"; // 0x1f23 PushS
	var_120_int = 1; // 0x1f24 PushI
	var_121_int = 511148; // 0x1f25 PushI
	var_122_float = 0; // 0x1f26 PushV
	func_7638(var_122_float); // 0x1f27 NEW_2
	AddMark(var_118_string, var_119_string, var_120_int, var_121_int, var_122_float); // 0x1f29 ObjFunc
	func_8882(); // 0x1f2c NEW_2
	return 2; // 0x1f2e Return
}


func_8986(var_91_bool, var_92_object, var_93_int)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_int = 0; var_97_object = Obj(); var_98_object = Obj(); var_99_int = 0; // 0x231a PushV
	var_100_object = Obj(); // 0x231b PushV
	func_8973(var_100_object); // 0x231c NEW_2
	var_97_object = var_100_object; // 0x231d Mov
	Find(var_93_int, var_98_object); // 0x231f ObjFunc
	var_105_bool = var_98_object == 0; // 0x2321 Not
	if(var_105_bool == 0) goto Label_9001; // 0x2322 JumpB
	var_106_string = "Can't find diary parent with id: "; // 0x2323 PushS
	var_107_int = var_106_string + var_93_int; // 0x2324 Add
	Trace(var_107_int); // 0x2325 Func
	var_91_bool = 0; // 0x2327 MovB
	return 6; // 0x2328 Return
	
Label_9001:
	AddChild(var_92_object); // 0x2329 ObjFunc
	var_108_int = 7; // 0x232b PushI
	SendWorldWndMessage(var_108_int); // 0x232c Func
	GetCategory(var_99_int); // 0x232e ObjFunc
	SetDiarySection(var_99_int); // 0x2330 Func
	var_91_bool = 0; // 0x2332 MovB
	return 6; // 0x2333 Return
}


func_6939()
{
	var_1263_int = 10; // 0x1b1b PushI
	KillTimer(var_1263_int); // 0x1b1c Func
	return 0; // 0x1b1e Return
}


func_7453(var_182_bool, var_183_string)
{
	var_184_bool = 0; var_185_bool = 0; // 0x1d1d PushV
	var_186_bool = 0; // 0x1d1e PushV
	func_7709(var_186_bool); // 0x1d1f NEW_2
	if(var_186_bool == 0) goto Label_7466; // 0x1d21 JumpB
	lshHasSpeech(var_185_bool, var_183_string); // 0x1d22 Func
	var_187_bool = var_185_bool; // 0x1d24 Push
	if(var_187_bool == 0) goto Label_7466; // 0x1d25 JumpB
	lshPlaySpeech(var_183_string); // 0x1d26 Func
	var_182_bool = 1; // 0x1d28 MovB
	return 2; // 0x1d29 Return
	
Label_7466:
	var_182_bool = 0; // 0x1d2a MovB
	return 2; // 0x1d2b Return
}


func_8480(var_704_bool)
{
	var_706_int = 0; var_707_string = ""; // 0x2121 PushV
	var_707_string = "ood3Alexandr3"; // 0x2122 MovS
	func_7502(var_706_int, var_707_string); // 0x2123 NEW_2
	var_708_int = 0; // 0x2125 PushI
	var_709_bool = var_706_int == var_708_int; // 0x2126 Eq
	if(var_709_bool == 0) goto Label_8490; // 0x2127 JumpB
	var_704_bool = 1; // 0x2128 MovB
	return 0; // 0x2129 Return
	
Label_8490:
	var_704_bool = 0; // 0x212a MovB
	return 0; // 0x212b Return
}


func_1835(var_2_object, var_981_string)
{
	var_982_bool = 0; // 0x72c PushV
	func_7709(var_982_bool); // 0x72d NEW_2
	var_983_bool = var_982_bool == 0; // 0x72f Not
	if(var_983_bool == 0) goto Label_1842; // 0x730 JumpB
	return 0; // 0x731 Return
	
Label_1842:
	var_984_bool = var_981_string == var_2_object; // 0x732 Eq
	if(var_984_bool == 0) goto Label_1845; // 0x733 JumpB
	return 0; // 0x734 Return
	
Label_1845:
	var_985_string = ""; var_986_bool = 0; // 0x735 PushV
	var_985_string = var_981_string; // 0x736 Mov
	var_987_string = ""; // 0x737 PushS
	var_988_bool = var_981_string == var_987_string; // 0x738 Eq
	if(var_988_bool == 0) goto Label_1852; // 0x739 JumpB
	var_986_bool = 0; // 0x73a MovB
	goto Label_1853; // 0x73b Jump
	
Label_1853:
	func_7438(var_985_string, var_986_bool); // 0x73d NEW_2
	var_2_object = var_981_string; // 0x73f TMov
	return 0; // 0x740 Return
	
Label_1852:
	var_986_bool = 1; // 0x73c MovB
}


func_7468()
{
	var_59_bool = 0; // 0x1d2c PushV
	func_7709(var_59_bool); // 0x1d2d NEW_2
	if(var_59_bool == 0) goto Label_7474; // 0x1d2f JumpB
	lshStopSpeech(); // 0x1d30 Func
	
Label_7474:
	return 0; // 0x1d32 Return
}


func_8492(var_656_bool)
{
	var_658_int = 0; var_659_string = ""; // 0x212d PushV
	var_659_string = "ood3Alexandr4"; // 0x212e MovS
	func_7502(var_658_int, var_659_string); // 0x212f NEW_2
	var_660_int = 0; // 0x2131 PushI
	var_661_bool = var_658_int == var_660_int; // 0x2132 Eq
	if(var_661_bool == 0) goto Label_8502; // 0x2133 JumpB
	var_656_bool = 1; // 0x2134 MovB
	return 0; // 0x2135 Return
	
Label_8502:
	var_656_bool = 0; // 0x2136 MovB
	return 0; // 0x2137 Return
}


func_1326(var_0_object, var_77_int, var_78_object)
{
	var_80_object = Obj(); var_81_bool = 0; var_82_int = 0; var_83_bool = 0; var_84_object = Obj(); var_85_bool = 0; var_86_int = 0; var_87_bool = 0; // 0x52e PushV
	var_0_object = var_78_object; // 0x52f TMov
	var_88_bool = 0; var_89_object = Obj(); var_90_float = 0; // 0x530 PushV
	var_89_object = var_78_object; // 0x531 Mov
	var_90_float = 70.0; // 0x532 MovF
	func_7199(var_89_object, var_90_float); // 0x533 NEW_2
	var_134_bool = var_88_bool == 0; // 0x535 Not
	if(var_134_bool == 0) goto Label_1337; // 0x536 JumpB
	var_77_int = -2; // 0x537 MovI
	return 8; // 0x538 Return
	
Label_1337:
	CreateDialog(var_84_object); // 0x539 Func
	var_135_int = 0; // 0x53b PushV
	func_7703(var_135_int); // 0x53c NEW_2
	SetNPCName(var_135_int); // 0x53e ObjFunc
	var_136_int = 0; // 0x540 PushV
	func_7701(var_136_int); // 0x541 NEW_2
	SetNPCDescription(var_136_int); // 0x543 ObjFunc
	var_137_string = ""; // 0x545 PushV
	func_7705(var_137_string); // 0x546 NEW_2
	SetPhoto(var_137_string); // 0x548 ObjFunc
	var_138_string = ""; // 0x54a PushV
	func_7707(var_138_string); // 0x54b NEW_2
	SetPhoto2(var_138_string); // 0x54d ObjFunc
	var_139_int = 0; // 0x54f PushV
	func_9064(var_139_int); // 0x550 NEW_2
	SetPlayerName(var_139_int); // 0x552 ObjFunc
	var_86_int = -1; // 0x554 MovI
	IsOverrideActive(var_85_bool); // 0x555 Func
	var_147_bool = var_85_bool; // 0x557 Push
	if(var_147_bool == 0) goto Label_1371; // 0x558 JumpB
	var_77_int = -2; // 0x559 MovI
	return 8; // 0x55a Return
	
Label_1371:
	DoDialog(var_84_object); // 0x55b Func
	var_148_bool = 0; var_149_object = Obj(); // 0x55d PushV
	var_150_object = Obj(); // 0x55e PushV
	func_7475(var_150_object); // 0x55f NEW_2
	var_149_object = var_150_object; // 0x560 Mov
	func_7284(var_148_bool, var_149_object); // 0x562 NEW_2
	var_243_object = Obj(); var_244_object = Obj(); // 0x564 PushV
	var_243_object = var_78_object; // 0x565 Mov
	var_244_object = var_84_object; // 0x566 Mov
	TaskCall(7); // 0x567 TaskCall
	func_1407(var_245_object, var_246_object, var_247_string, var_248_bool, var_243_object, var_244_object); // 0x568 NEW_2
	TaskReturn(); // 0x569 TaskReturn
	IsDialogEnd(var_87_bool); // 0x56b ObjFunc
	
Label_1389:
	var_293_bool = var_87_bool == 0; // 0x56d Not
	if(var_293_bool == 0) goto Label_1396; // 0x56e JumpB
	sync(); // 0x56f Func
	IsDialogEnd(var_87_bool); // 0x571 ObjFunc
	goto Label_1389; // 0x573 Jump
	
Label_1396:
	var_294_object = Obj(); // 0x574 PushV
	var_294_object = var_78_object; // 0x575 Mov
	func_7267(); // 0x576 NEW_2
	StopDialog(var_84_object); // 0x578 Func
	GetReturnValue(var_86_int); // 0x57a ObjFunc
	var_77_int = var_86_int; // 0x57c Mov
	return 8; // 0x57d Return
}


func_7984()
{
	var_258_object = Obj(); var_259_string = ""; var_260_float = 0; // 0x1f31 PushV
	var_261_object = Obj(); // 0x1f32 PushV
	func_9014(var_261_object); // 0x1f33 NEW_2
	var_258_object = var_261_object; // 0x1f34 Mov
	var_259_string = "pt_map_bigvlad"; // 0x1f36 MovS
	var_260_float = 2; // 0x1f37 MovI
	func_9031(var_258_object, var_259_string, var_260_float); // 0x1f38 NEW_2
	var_262_object = Obj(); // 0x1f3a PushV
	func_9014(var_262_object); // 0x1f3b NEW_2
	ShowMap(var_262_object); // 0x1f3d ObjFunc
	return 0; // 0x1f3f Return
}


func_7475(var_150_object)
{
	var_151_object = Obj(); var_152_object = Obj(); // 0x1d33 PushV
	self(var_152_object); // 0x1d34 Func
	var_150_object = var_152_object; // 0x1d36 Mov
	return 2; // 0x1d37 Return
}


func_9014(var_72_object)
{
	var_73_object = Obj(); var_74_object = Obj(); var_75_object = Obj(); var_76_object = Obj(); // 0x2336 PushV
	GetMainOutdoorScene(var_75_object); // 0x2337 Func
	var_77_bool = var_75_object == 0; // 0x2339 NullEq
	if(var_77_bool == 0) goto Label_9025; // 0x233a JumpB
	var_78_string = "Can't find main outdoor scene"; // 0x233b PushS
	Trace(var_78_string); // 0x233c Func
	var_76_object = 0; // 0x233e SetNull
	var_72_object = var_76_object; // 0x233f Mov
	return 4; // 0x2340 Return
	
Label_9025:
	GetMap(var_76_object); // 0x2341 ObjFunc
	var_72_object = var_76_object; // 0x2343 Mov
	return 4; // 0x2344 Return
}


func_8504(var_650_bool)
{
	var_652_int = 0; var_653_string = ""; // 0x2139 PushV
	var_653_string = "d3q01"; // 0x213a MovS
	func_7502(var_652_int, var_653_string); // 0x213b NEW_2
	var_654_int = 8; // 0x213d PushI
	var_655_bool = var_652_int == var_654_int; // 0x213e Eq
	if(var_655_bool == 0) goto Label_8514; // 0x213f JumpB
	var_650_bool = 1; // 0x2140 MovB
	return 0; // 0x2141 Return
	
Label_8514:
	var_650_bool = 0; // 0x2142 MovB
	return 0; // 0x2143 Return
}


func_7481(var_115_cvector, var_116_cvector)
{
	var_118_float = 0; var_119_float = 0; // 0x1d39 PushV
	var_120_int = var_116_cvector | var_116_cvector; // 0x1d3a Or
	var_119_float = sqrt(var_120_int); // 0x1d3b Sqrt2
	var_121_float = 0.0; // 0x1d3c PushF
	var_122_bool = var_119_float < var_121_float; // 0x1d3d LT
	if(var_122_bool == 0) goto Label_7489; // 0x1d3e JumpB
	var_115_cvector = CVector(0.0, 0.0, 0.0); // 0x1d3f MovV
	return 2; // 0x1d40 Return
	
Label_7489:
	var_115_cvector = var_116_cvector / var_116_cvector; // 0x1d41 Div2
	return 2; // 0x1d42 Return
}


func_8000()
{
	var_221_int = 0; var_222_int = 0; // 0x1f40 PushV
	var_223_string = "d2q01_key"; // 0x1f41 PushS
	var_224_int = 1; // 0x1f42 PushI
	RemoveItemByType(var_222_int, var_223_string, var_224_int); // 0x1f43 ObjFunc
	return 2; // 0x1f45 Return
}


func_7491(var_331_float, var_332_float, var_333_float, var_334_float)
{
	var_335_bool = var_332_float < var_333_float; // 0x1d44 LT
	if(var_335_bool == 0) goto Label_7496; // 0x1d45 JumpB
	var_331_float = var_333_float; // 0x1d46 Mov
	return 0; // 0x1d47 Return
	
Label_7496:
	var_336_bool = var_332_float > var_334_float; // 0x1d48 GT
	if(var_336_bool == 0) goto Label_7500; // 0x1d49 JumpB
	var_331_float = var_334_float; // 0x1d4a Mov
	return 0; // 0x1d4b Return
	
Label_7500:
	var_331_float = var_332_float; // 0x1d4c Mov
	return 0; // 0x1d4d Return
}


func_8516(var_695_bool)
{
	var_697_int = 0; var_698_string = ""; // 0x2145 PushV
	var_698_string = "d3q01"; // 0x2146 MovS
	func_7502(var_697_int, var_698_string); // 0x2147 NEW_2
	var_699_int = 1; // 0x2149 PushI
	var_700_bool = var_697_int == var_699_int; // 0x214a Eq
	if(var_700_bool == 0) goto Label_8526; // 0x214b JumpB
	var_695_bool = 1; // 0x214c MovB
	return 0; // 0x214d Return
	
Label_8526:
	var_695_bool = 0; // 0x214e MovB
	return 0; // 0x214f Return
}


func_8006()
{
	var_64_string = "ood4Alexandr1"; // 0x1f47 PushS
	var_65_int = 1; // 0x1f48 PushI
	SetVariable(var_64_string, var_65_int); // 0x1f49 Func
	return 0; // 0x1f4b Return
}


func_9031(var_149_object, var_150_string, var_151_float)
{
	var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_object = Obj(); var_156_bool = 0; var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_object = Obj(); var_160_bool = 0; // 0x2347 PushV
	GetMainOutdoorScene(var_159_object); // 0x2348 Func
	var_161_bool = var_159_object == 0; // 0x234a NullEq
	if(var_161_bool == 0) goto Label_9040; // 0x234b JumpB
	var_162_string = "Can't find main outdoor scene"; // 0x234c PushS
	Trace(var_162_string); // 0x234d Func
	return 8; // 0x234f Return
	
Label_9040:
	GetLocator(var_150_string, var_160_bool, var_157_cvector, var_158_cvector); // 0x2350 ObjFunc
	var_163_bool = var_160_bool == 0; // 0x2352 Not
	if(var_163_bool == 0) goto Label_9050; // 0x2353 JumpB
	var_164_string = "Warning: outdoor scene locator "; // 0x2354 PushS
	var_165_int = var_164_string + var_150_string; // 0x2355 Add
	var_166_string = " doesnt exist"; // 0x2356 PushS
	var_167_int = var_165_int + var_166_string; // 0x2357 Add
	Trace(var_167_int); // 0x2358 Func
	
Label_9050:
	GetMap(var_149_object); // 0x235a ObjFunc
	var_168_bool = var_149_object == 0; // 0x235c NullEq
	if(var_168_bool == 0) goto Label_9058; // 0x235d JumpB
	var_169_string = "Can't find map"; // 0x235e PushS
	Trace(var_169_string); // 0x235f Func
	return 8; // 0x2361 Return
	
Label_9058:
	var_170_float = GetByIndex(var_157_cvector, 0); // 0x2362 PushE
	var_171_float = GetByIndex(var_157_cvector, 2); // 0x2363 PushE
	SetMapParams(var_170_float, var_171_float, var_151_float); // 0x2364 ObjFunc
	return 8; // 0x2366 Return
}


func_8012()
{
	var_68_object = Obj(); var_69_object = Obj(); // 0x1f4c PushV
	var_70_object = Obj(); // 0x1f4d PushV
	func_9014(var_70_object); // 0x1f4e NEW_2
	var_69_object = var_70_object; // 0x1f4f Mov
	var_77_string = "d4q03AlexandrGotoGrif"; // 0x1f51 PushS
	var_78_string = "pt_map_grif"; // 0x1f52 PushS
	var_79_int = 0; // 0x1f53 PushI
	var_80_int = 511487; // 0x1f54 PushI
	var_81_float = 0; // 0x1f55 PushV
	func_7638(var_81_float); // 0x1f56 NEW_2
	AddMark(var_77_string, var_78_string, var_79_int, var_80_int, var_81_float); // 0x1f58 ObjFunc
	func_8895(); // 0x1f5b NEW_2
	func_8908(); // 0x1f5e NEW_2
	var_115_object = Obj(); var_116_string = ""; // 0x1f60 PushV
	var_116_string = "quest_d4_03"; // 0x1f61 MovS
	func_7507(var_115_object, var_116_string); // 0x1f62 NEW_2
	return 2; // 0x1f64 Return
}


func_7502(var_415_int, var_416_string)
{
	var_417_int = 0; var_418_int = 0; // 0x1d4e PushV
	GetVariable(var_416_string, var_418_int); // 0x1d4f Func
	var_415_int = var_418_int; // 0x1d51 Mov
	return 2; // 0x1d52 Return
}


func_8528(var_754_bool)
{
	var_756_int = 0; var_757_string = ""; // 0x2151 PushV
	var_757_string = "ood4Alexandr1"; // 0x2152 MovS
	func_7502(var_756_int, var_757_string); // 0x2153 NEW_2
	var_758_int = 0; // 0x2155 PushI
	var_759_bool = var_756_int == var_758_int; // 0x2156 Eq
	if(var_759_bool == 0) goto Label_8538; // 0x2157 JumpB
	var_754_bool = 1; // 0x2158 MovB
	return 0; // 0x2159 Return
	
Label_8538:
	var_754_bool = 0; // 0x215a MovB
	return 0; // 0x215b Return
}


func_7507(var_115_object, var_116_string)
{
	var_117_object = Obj(); var_118_object = Obj(); var_119_object = Obj(); var_120_object = Obj(); // 0x1d53 PushV
	GetMainOutdoorScene(var_119_object); // 0x1d54 Func
	var_121_string = ".xml"; // 0x1d56 PushS
	var_122_int = var_116_string + var_121_string; // 0x1d57 Add
	AddBlankActorFromXml(var_120_object, var_119_object, var_116_string, var_122_int); // 0x1d58 Func
	var_115_object = var_120_object; // 0x1d5a Mov
	return 4; // 0x1d5b Return
}


func_4954(var_2_object, var_764_string)
{
	var_765_bool = 0; // 0x135b PushV
	func_7709(var_765_bool); // 0x135c NEW_2
	var_766_bool = var_765_bool == 0; // 0x135e Not
	if(var_766_bool == 0) goto Label_4961; // 0x135f JumpB
	return 0; // 0x1360 Return
	
Label_4961:
	var_767_bool = var_764_string == var_2_object; // 0x1361 Eq
	if(var_767_bool == 0) goto Label_4964; // 0x1362 JumpB
	return 0; // 0x1363 Return
	
Label_4964:
	var_768_string = ""; var_769_bool = 0; // 0x1364 PushV
	var_768_string = var_764_string; // 0x1365 Mov
	var_770_string = ""; // 0x1366 PushS
	var_771_bool = var_764_string == var_770_string; // 0x1367 Eq
	if(var_771_bool == 0) goto Label_4971; // 0x1368 JumpB
	var_769_bool = 0; // 0x1369 MovB
	goto Label_4972; // 0x136a Jump
	
Label_4972:
	func_7438(var_768_string, var_769_bool); // 0x136c NEW_2
	var_2_object = var_764_string; // 0x136e TMov
	return 0; // 0x136f Return
	
Label_4971:
	var_769_bool = 1; // 0x136b MovB
}


func_8540(var_789_bool)
{
	var_791_int = 0; var_792_string = ""; // 0x215d PushV
	var_792_string = "d4q03"; // 0x215e MovS
	func_7502(var_791_int, var_792_string); // 0x215f NEW_2
	var_793_int = 0; // 0x2161 PushI
	var_794_bool = var_791_int == var_793_int; // 0x2162 Eq
	if(var_794_bool == 0) goto Label_8550; // 0x2163 JumpB
	var_789_bool = 1; // 0x2164 MovB
	return 0; // 0x2165 Return
	
Label_8550:
	var_789_bool = 0; // 0x2166 MovB
	return 0; // 0x2167 Return
}


func_7518(var_142_int, var_143_int)
{
	var_144_object = Obj(); var_145_object = Obj(); // 0x1d5e PushV
	CreateIntVector(var_145_object); // 0x1d5f Func
	add(var_142_int); // 0x1d61 ObjFunc
	add(var_143_int); // 0x1d63 ObjFunc
	var_146_int = 3; // 0x1d65 PushI
	SendWorldWndMessage(var_146_int, var_145_object); // 0x1d66 Func
	return 2; // 0x1d68 Return
}


func_8038()
{
	var_149_object = Obj(); var_150_string = ""; var_151_float = 0; // 0x1f67 PushV
	var_152_object = Obj(); // 0x1f68 PushV
	func_9014(var_152_object); // 0x1f69 NEW_2
	var_149_object = var_152_object; // 0x1f6a Mov
	var_150_string = "pt_map_grif"; // 0x1f6c MovS
	var_151_float = 2; // 0x1f6d MovI
	func_9031(var_149_object, var_150_string, var_151_float); // 0x1f6e NEW_2
	var_172_object = Obj(); // 0x1f70 PushV
	func_9014(var_172_object); // 0x1f71 NEW_2
	ShowMap(var_172_object); // 0x1f73 ObjFunc
	return 0; // 0x1f75 Return
}


func_871(var_0_object, var_317_int, var_318_object)
{
	var_320_object = Obj(); var_321_bool = 0; var_322_int = 0; var_323_bool = 0; var_324_object = Obj(); var_325_bool = 0; var_326_int = 0; var_327_bool = 0; // 0x367 PushV
	var_0_object = var_318_object; // 0x368 TMov
	var_328_bool = 0; var_329_object = Obj(); var_330_float = 0; // 0x369 PushV
	var_329_object = var_318_object; // 0x36a Mov
	var_330_float = 70.0; // 0x36b MovF
	func_7199(var_329_object, var_330_float); // 0x36c NEW_2
	var_331_bool = var_328_bool == 0; // 0x36e Not
	if(var_331_bool == 0) goto Label_882; // 0x36f JumpB
	var_317_int = -2; // 0x370 MovI
	return 8; // 0x371 Return
	
Label_882:
	CreateDialog(var_324_object); // 0x372 Func
	var_332_int = 0; // 0x374 PushV
	func_7703(var_332_int); // 0x375 NEW_2
	SetNPCName(var_332_int); // 0x377 ObjFunc
	var_333_int = 0; // 0x379 PushV
	func_7701(var_333_int); // 0x37a NEW_2
	SetNPCDescription(var_333_int); // 0x37c ObjFunc
	var_334_string = ""; // 0x37e PushV
	func_7705(var_334_string); // 0x37f NEW_2
	SetPhoto(var_334_string); // 0x381 ObjFunc
	var_335_string = ""; // 0x383 PushV
	func_7707(var_335_string); // 0x384 NEW_2
	SetPhoto2(var_335_string); // 0x386 ObjFunc
	var_336_int = 0; // 0x388 PushV
	func_9064(var_336_int); // 0x389 NEW_2
	SetPlayerName(var_336_int); // 0x38b ObjFunc
	var_326_int = -1; // 0x38d MovI
	IsOverrideActive(var_325_bool); // 0x38e Func
	var_337_bool = var_325_bool; // 0x390 Push
	if(var_337_bool == 0) goto Label_916; // 0x391 JumpB
	var_317_int = -2; // 0x392 MovI
	return 8; // 0x393 Return
	
Label_916:
	DoDialog(var_324_object); // 0x394 Func
	var_338_object = Obj(); var_339_object = Obj(); // 0x396 PushV
	var_338_object = var_318_object; // 0x397 Mov
	var_339_object = var_324_object; // 0x398 Mov
	TaskCall(3); // 0x399 TaskCall
	func_945(var_340_object, var_341_object, var_342_string, var_343_bool, var_338_object, var_339_object); // 0x39a NEW_2
	TaskReturn(); // 0x39b TaskReturn
	IsDialogEnd(var_327_bool); // 0x39d ObjFunc
	
Label_927:
	var_368_bool = var_327_bool == 0; // 0x39f Not
	if(var_368_bool == 0) goto Label_934; // 0x3a0 JumpB
	sync(); // 0x3a1 Func
	IsDialogEnd(var_327_bool); // 0x3a3 ObjFunc
	goto Label_927; // 0x3a5 Jump
	
Label_934:
	var_369_object = Obj(); // 0x3a6 PushV
	var_369_object = var_318_object; // 0x3a7 Mov
	func_7267(); // 0x3a8 NEW_2
	StopDialog(var_324_object); // 0x3aa Func
	GetReturnValue(var_326_int); // 0x3ac ObjFunc
	var_317_int = var_326_int; // 0x3ae Mov
	return 8; // 0x3af Return
}


func_9064(var_139_int)
{
	var_140_int = 0; var_141_int = 0; // 0x2368 PushV
	var_142_string = "branch"; // 0x2369 PushS
	GetVariable(var_142_string, var_141_int); // 0x236a Func
	var_143_int = 0; // 0x236c PushI
	var_144_bool = var_141_int == var_143_int; // 0x236d Eq
	if(var_144_bool == 0) goto Label_9074; // 0x236e JumpB
	var_139_int = 1; // 0x236f MovI
	return 2; // 0x2370 Return
	
Label_9074:
	var_145_int = 1; // 0x2372 PushI
	var_146_bool = var_141_int == var_145_int; // 0x2373 Eq
	if(var_146_bool == 0) goto Label_9079; // 0x2374 JumpB
	var_139_int = 2; // 0x2375 MovI
	return 2; // 0x2376 Return
	
Label_9079:
	var_139_int = 3; // 0x2377 MovI
	return 2; // 0x2378 Return
}


func_8552(var_799_bool)
{
	var_801_int = 0; var_802_string = ""; // 0x2169 PushV
	var_802_string = "ood4Alexandr2"; // 0x216a MovS
	func_7502(var_801_int, var_802_string); // 0x216b NEW_2
	var_803_int = 0; // 0x216d PushI
	var_804_bool = var_801_int == var_803_int; // 0x216e Eq
	if(var_804_bool == 0) goto Label_8562; // 0x216f JumpB
	var_799_bool = 1; // 0x2170 MovB
	return 0; // 0x2171 Return
	
Label_8562:
	var_799_bool = 0; // 0x2172 MovB
	return 0; // 0x2173 Return
}


func_7530(var_246_object, var_247_int)
{
	var_248_int = 0; var_249_int = 0; // 0x1d6a PushV
	var_250_object = Obj(); var_251_string = ""; var_252_int = 0; // 0x1d6b PushV
	var_250_object = var_246_object; // 0x1d6c Mov
	var_251_string = "money"; // 0x1d6d MovS
	var_252_int = var_247_int; // 0x1d6e Mov
	func_7168(var_251_string, var_252_int); // 0x1d6f NEW_2
	var_256_int = 0; // 0x1d71 PushI
	var_257_bool = var_247_int > var_256_int; // 0x1d72 GT
	if(var_257_bool == 0) goto Label_7548; // 0x1d73 JumpB
	var_258_string = "Money"; // 0x1d74 PushS
	GetInvItemByName(var_249_int, var_258_string); // 0x1d75 Func
	var_259_int = 0; var_260_int = 0; // 0x1d77 PushV
	var_259_int = var_249_int; // 0x1d78 Mov
	var_260_int = var_247_int; // 0x1d79 Mov
	func_7518(var_259_int, var_260_int); // 0x1d7a NEW_2
	
Label_7548:
	return 2; // 0x1d7c Return
}


func_3947(var_0_object, var_618_int, var_619_object)
{
	var_621_object = Obj(); var_622_bool = 0; var_623_int = 0; var_624_bool = 0; var_625_object = Obj(); var_626_bool = 0; var_627_int = 0; var_628_bool = 0; // 0xf6b PushV
	var_0_object = var_619_object; // 0xf6c TMov
	var_629_bool = 0; var_630_object = Obj(); var_631_float = 0; // 0xf6d PushV
	var_630_object = var_619_object; // 0xf6e Mov
	var_631_float = 70.0; // 0xf6f MovF
	func_7199(var_630_object, var_631_float); // 0xf70 NEW_2
	var_632_bool = var_629_bool == 0; // 0xf72 Not
	if(var_632_bool == 0) goto Label_3958; // 0xf73 JumpB
	var_618_int = -2; // 0xf74 MovI
	return 8; // 0xf75 Return
	
Label_3958:
	CreateDialog(var_625_object); // 0xf76 Func
	var_633_int = 0; // 0xf78 PushV
	func_7703(var_633_int); // 0xf79 NEW_2
	SetNPCName(var_633_int); // 0xf7b ObjFunc
	var_634_int = 0; // 0xf7d PushV
	func_7701(var_634_int); // 0xf7e NEW_2
	SetNPCDescription(var_634_int); // 0xf80 ObjFunc
	var_635_string = ""; // 0xf82 PushV
	func_7705(var_635_string); // 0xf83 NEW_2
	SetPhoto(var_635_string); // 0xf85 ObjFunc
	var_636_string = ""; // 0xf87 PushV
	func_7707(var_636_string); // 0xf88 NEW_2
	SetPhoto2(var_636_string); // 0xf8a ObjFunc
	var_637_int = 0; // 0xf8c PushV
	func_9064(var_637_int); // 0xf8d NEW_2
	SetPlayerName(var_637_int); // 0xf8f ObjFunc
	var_627_int = -1; // 0xf91 MovI
	IsOverrideActive(var_626_bool); // 0xf92 Func
	var_638_bool = var_626_bool; // 0xf94 Push
	if(var_638_bool == 0) goto Label_3992; // 0xf95 JumpB
	var_618_int = -2; // 0xf96 MovI
	return 8; // 0xf97 Return
	
Label_3992:
	DoDialog(var_625_object); // 0xf98 Func
	var_639_bool = 0; var_640_object = Obj(); // 0xf9a PushV
	var_641_object = Obj(); // 0xf9b PushV
	func_7475(var_641_object); // 0xf9c NEW_2
	var_640_object = var_641_object; // 0xf9d Mov
	func_7284(var_639_bool, var_640_object); // 0xf9f NEW_2
	var_642_object = Obj(); var_643_object = Obj(); // 0xfa1 PushV
	var_642_object = var_619_object; // 0xfa2 Mov
	var_643_object = var_625_object; // 0xfa3 Mov
	TaskCall(13); // 0xfa4 TaskCall
	func_4028(var_644_object, var_645_object, var_646_string, var_647_bool, var_642_object, var_643_object); // 0xfa5 NEW_2
	TaskReturn(); // 0xfa6 TaskReturn
	IsDialogEnd(var_628_bool); // 0xfa8 ObjFunc
	
Label_4010:
	var_719_bool = var_628_bool == 0; // 0xfaa Not
	if(var_719_bool == 0) goto Label_4017; // 0xfab JumpB
	sync(); // 0xfac Func
	IsDialogEnd(var_628_bool); // 0xfae ObjFunc
	goto Label_4010; // 0xfb0 Jump
	
Label_4017:
	var_720_object = Obj(); // 0xfb1 PushV
	var_720_object = var_619_object; // 0xfb2 Mov
	func_7267(); // 0xfb3 NEW_2
	StopDialog(var_625_object); // 0xfb5 Func
	GetReturnValue(var_627_int); // 0xfb7 ObjFunc
	var_618_int = var_627_int; // 0xfb9 Mov
	return 8; // 0xfba Return
}


func_5482(var_0_object, var_837_int, var_838_object)
{
	var_840_object = Obj(); var_841_bool = 0; var_842_int = 0; var_843_bool = 0; var_844_object = Obj(); var_845_bool = 0; var_846_int = 0; var_847_bool = 0; // 0x156a PushV
	var_0_object = var_838_object; // 0x156b TMov
	var_848_bool = 0; var_849_object = Obj(); var_850_float = 0; // 0x156c PushV
	var_849_object = var_838_object; // 0x156d Mov
	var_850_float = 70.0; // 0x156e MovF
	func_7199(var_849_object, var_850_float); // 0x156f NEW_2
	var_851_bool = var_848_bool == 0; // 0x1571 Not
	if(var_851_bool == 0) goto Label_5493; // 0x1572 JumpB
	var_837_int = -2; // 0x1573 MovI
	return 8; // 0x1574 Return
	
Label_5493:
	CreateDialog(var_844_object); // 0x1575 Func
	var_852_int = 0; // 0x1577 PushV
	func_7703(var_852_int); // 0x1578 NEW_2
	SetNPCName(var_852_int); // 0x157a ObjFunc
	var_853_int = 0; // 0x157c PushV
	func_7701(var_853_int); // 0x157d NEW_2
	SetNPCDescription(var_853_int); // 0x157f ObjFunc
	var_854_string = ""; // 0x1581 PushV
	func_7705(var_854_string); // 0x1582 NEW_2
	SetPhoto(var_854_string); // 0x1584 ObjFunc
	var_855_string = ""; // 0x1586 PushV
	func_7707(var_855_string); // 0x1587 NEW_2
	SetPhoto2(var_855_string); // 0x1589 ObjFunc
	var_856_int = 0; // 0x158b PushV
	func_9064(var_856_int); // 0x158c NEW_2
	SetPlayerName(var_856_int); // 0x158e ObjFunc
	var_846_int = -1; // 0x1590 MovI
	IsOverrideActive(var_845_bool); // 0x1591 Func
	var_857_bool = var_845_bool; // 0x1593 Push
	if(var_857_bool == 0) goto Label_5527; // 0x1594 JumpB
	var_837_int = -2; // 0x1595 MovI
	return 8; // 0x1596 Return
	
Label_5527:
	DoDialog(var_844_object); // 0x1597 Func
	var_858_bool = 0; var_859_object = Obj(); // 0x1599 PushV
	var_860_object = Obj(); // 0x159a PushV
	func_7475(var_860_object); // 0x159b NEW_2
	var_859_object = var_860_object; // 0x159c Mov
	func_7284(var_858_bool, var_859_object); // 0x159e NEW_2
	var_861_object = Obj(); var_862_object = Obj(); // 0x15a0 PushV
	var_861_object = var_838_object; // 0x15a1 Mov
	var_862_object = var_844_object; // 0x15a2 Mov
	TaskCall(17); // 0x15a3 TaskCall
	func_5563(var_863_object, var_864_object, var_865_string, var_866_bool, var_861_object, var_862_object); // 0x15a4 NEW_2
	TaskReturn(); // 0x15a5 TaskReturn
	IsDialogEnd(var_847_bool); // 0x15a7 ObjFunc
	
Label_5545:
	var_929_bool = var_847_bool == 0; // 0x15a9 Not
	if(var_929_bool == 0) goto Label_5552; // 0x15aa JumpB
	sync(); // 0x15ab Func
	IsDialogEnd(var_847_bool); // 0x15ad ObjFunc
	goto Label_5545; // 0x15af Jump
	
Label_5552:
	var_930_object = Obj(); // 0x15b0 PushV
	var_930_object = var_838_object; // 0x15b1 Mov
	func_7267(); // 0x15b2 NEW_2
	StopDialog(var_844_object); // 0x15b4 Func
	GetReturnValue(var_846_int); // 0x15b6 ObjFunc
	var_837_int = var_846_int; // 0x15b8 Mov
	return 8; // 0x15b9 Return
}


func_8564(var_805_bool)
{
	var_807_int = 0; var_808_string = ""; // 0x2175 PushV
	var_808_string = "d4q03"; // 0x2176 MovS
	func_7502(var_807_int, var_808_string); // 0x2177 NEW_2
	var_809_int = 2; // 0x2179 PushI
	var_810_bool = var_807_int == var_809_int; // 0x217a Eq
	if(var_810_bool == 0) goto Label_8574; // 0x217b JumpB
	var_805_bool = 1; // 0x217c MovB
	return 0; // 0x217d Return
	
Label_8574:
	var_805_bool = 0; // 0x217e MovB
	return 0; // 0x217f Return
}


func_8054()
{
	var_193_string = "ood4Alexandr2"; // 0x1f77 PushS
	var_194_int = 1; // 0x1f78 PushI
	SetVariable(var_193_string, var_194_int); // 0x1f79 Func
	return 0; // 0x1f7b Return
}


func_9081(var_74_object)
{
	var_75_bool = GlobalVars[1]; // 0x237a PushGE
	var_76_bool = var_75_bool == 0; // 0x237b Not
	if(var_76_bool == 0) goto Label_9094; // 0x237c JumpB
	var_77_int = 0; var_78_object = Obj(); // 0x237d PushV
	var_78_object = var_74_object; // 0x237e Mov
	TaskCall(6); // 0x237f TaskCall
	func_1326(var_79_object, var_77_int, var_78_object); // 0x2380 NEW_2
	TaskReturn(); // 0x2381 TaskReturn
	var_301_bool = GlobalVars[1]; // 0x2383 PushGE
	var_301_bool = 1; // 0x2384 MovB
	GlobalVars[1] = var_301_bool; // 0x2385 PopGE
	
Label_9094:
	var_302_bool = 0; var_303_int = 0; // 0x2386 PushV
	var_303_int = 2; // 0x2387 MovI
	func_7658(var_302_bool, var_303_int); // 0x2388 NEW_2
	if(var_302_bool == 0) goto Label_9106; // 0x238a JumpB
	var_317_int = 0; var_318_object = Obj(); // 0x238b PushV
	var_318_object = var_74_object; // 0x238c Mov
	TaskCall(2); // 0x238d TaskCall
	func_871(var_319_object, var_317_int, var_318_object); // 0x238e NEW_2
	TaskReturn(); // 0x238f TaskReturn
	return 0; // 0x2391 Return
	
Label_9106:
	var_370_bool = 0; var_371_int = 0; // 0x2392 PushV
	var_371_int = 1; // 0x2393 MovI
	func_7652(var_370_bool, var_371_int); // 0x2394 NEW_2
	if(var_370_bool == 0) goto Label_9118; // 0x2396 JumpB
	var_373_int = 0; var_374_object = Obj(); // 0x2397 PushV
	var_374_object = var_74_object; // 0x2398 Mov
	TaskCall(0); // 0x2399 TaskCall
	func_0(var_375_object, var_373_int, var_374_object); // 0x239a NEW_2
	TaskReturn(); // 0x239b TaskReturn
	return 0; // 0x239d Return
	
Label_9118:
	var_457_bool = 0; var_458_int = 0; // 0x239e PushV
	var_458_int = 2; // 0x239f MovI
	func_7652(var_457_bool, var_458_int); // 0x23a0 NEW_2
	if(var_457_bool == 0) goto Label_9130; // 0x23a2 JumpB
	var_459_int = 0; var_460_object = Obj(); // 0x23a3 PushV
	var_460_object = var_74_object; // 0x23a4 Mov
	TaskCall(10); // 0x23a5 TaskCall
	func_2745(var_461_object, var_459_int, var_460_object); // 0x23a6 NEW_2
	TaskReturn(); // 0x23a7 TaskReturn
	return 0; // 0x23a9 Return
	
Label_9130:
	var_616_bool = 0; var_617_int = 0; // 0x23aa PushV
	var_617_int = 3; // 0x23ab MovI
	func_7652(var_616_bool, var_617_int); // 0x23ac NEW_2
	if(var_616_bool == 0) goto Label_9142; // 0x23ae JumpB
	var_618_int = 0; var_619_object = Obj(); // 0x23af PushV
	var_619_object = var_74_object; // 0x23b0 Mov
	TaskCall(12); // 0x23b1 TaskCall
	func_3947(var_620_object, var_618_int, var_619_object); // 0x23b2 NEW_2
	TaskReturn(); // 0x23b3 TaskReturn
	return 0; // 0x23b5 Return
	
Label_9142:
	var_721_bool = 0; var_722_int = 0; // 0x23b6 PushV
	var_722_int = 4; // 0x23b7 MovI
	func_7652(var_721_bool, var_722_int); // 0x23b8 NEW_2
	if(var_721_bool == 0) goto Label_9154; // 0x23ba JumpB
	var_723_int = 0; var_724_object = Obj(); // 0x23bb PushV
	var_724_object = var_74_object; // 0x23bc Mov
	TaskCall(14); // 0x23bd TaskCall
	func_4742(var_725_object, var_723_int, var_724_object); // 0x23be NEW_2
	TaskReturn(); // 0x23bf TaskReturn
	return 0; // 0x23c1 Return
	
Label_9154:
	var_835_bool = 0; var_836_int = 0; // 0x23c2 PushV
	var_836_int = 5; // 0x23c3 MovI
	func_7652(var_835_bool, var_836_int); // 0x23c4 NEW_2
	if(var_835_bool == 0) goto Label_9166; // 0x23c6 JumpB
	var_837_int = 0; var_838_object = Obj(); // 0x23c7 PushV
	var_838_object = var_74_object; // 0x23c8 Mov
	TaskCall(16); // 0x23c9 TaskCall
	func_5482(var_839_object, var_837_int, var_838_object); // 0x23ca NEW_2
	TaskReturn(); // 0x23cb TaskReturn
	return 0; // 0x23cd Return
	
Label_9166:
	var_931_bool = 0; var_932_int = 0; // 0x23ce PushV
	var_932_int = 6; // 0x23cf MovI
	func_7652(var_931_bool, var_932_int); // 0x23d0 NEW_2
	if(var_931_bool == 0) goto Label_9178; // 0x23d2 JumpB
	var_933_int = 0; var_934_object = Obj(); // 0x23d3 PushV
	var_934_object = var_74_object; // 0x23d4 Mov
	TaskCall(8); // 0x23d5 TaskCall
	func_1580(var_935_object, var_933_int, var_934_object); // 0x23d6 NEW_2
	TaskReturn(); // 0x23d7 TaskReturn
	return 0; // 0x23d9 Return
	
Label_9178:
	var_1074_bool = 0; var_1075_int = 0; // 0x23da PushV
	var_1075_int = 7; // 0x23db MovI
	func_7652(var_1074_bool, var_1075_int); // 0x23dc NEW_2
	if(var_1074_bool == 0) goto Label_9190; // 0x23de JumpB
	var_1076_int = 0; var_1077_object = Obj(); // 0x23df PushV
	var_1077_object = var_74_object; // 0x23e0 Mov
	TaskCall(18); // 0x23e1 TaskCall
	func_6211(var_1078_object, var_1076_int, var_1077_object); // 0x23e2 NEW_2
	TaskReturn(); // 0x23e3 TaskReturn
	return 0; // 0x23e5 Return
	
Label_9190:
	var_1145_bool = 0; var_1146_int = 0; // 0x23e6 PushV
	var_1146_int = 12; // 0x23e7 MovI
	func_7652(var_1145_bool, var_1146_int); // 0x23e8 NEW_2
	if(var_1145_bool == 0) goto Label_9202; // 0x23ea JumpB
	var_1147_int = 0; var_1148_object = Obj(); // 0x23eb PushV
	var_1148_object = var_74_object; // 0x23ec Mov
	TaskCall(4); // 0x23ed TaskCall
	func_1067(var_1149_object, var_1147_int, var_1148_object); // 0x23ee NEW_2
	TaskReturn(); // 0x23ef TaskReturn
	return 0; // 0x23f1 Return
	
Label_9202:
	var_1206_int = 0; var_1207_object = Obj(); // 0x23f2 PushV
	var_1207_object = var_74_object; // 0x23f3 Mov
	TaskCall(20); // 0x23f4 TaskCall
	func_6664(var_1208_object, var_1206_int, var_1207_object); // 0x23f5 NEW_2
	TaskReturn(); // 0x23f6 TaskReturn
	return 0; // 0x23f8 Return
}


func_8060()
{
	var_197_object = Obj(); var_198_object = Obj(); // 0x1f7c PushV
	var_199_string = "d4q03"; // 0x1f7d PushS
	var_200_int = 3; // 0x1f7e PushI
	SetVariable(var_199_string, var_200_int); // 0x1f7f Func
	var_201_object = Obj(); // 0x1f81 PushV
	func_9014(var_201_object); // 0x1f82 NEW_2
	var_198_object = var_201_object; // 0x1f83 Mov
	var_202_string = "d4q03AlexandrAboutVolnica"; // 0x1f85 PushS
	var_203_string = "pt_d4q03_volnica"; // 0x1f86 PushS
	var_204_int = 0; // 0x1f87 PushI
	var_205_int = 511494; // 0x1f88 PushI
	var_206_float = 0; // 0x1f89 PushV
	func_7638(var_206_float); // 0x1f8a NEW_2
	AddMark(var_202_string, var_203_string, var_204_int, var_205_int, var_206_float); // 0x1f8c ObjFunc
	func_8921(); // 0x1f8f NEW_2
	return 2; // 0x1f91 Return
}


func_7549(var_132_object, var_133_int)
{
	var_134_int = 0; var_135_int = 0; var_136_bool = 0; var_137_int = 0; var_138_int = 0; var_139_bool = 0; // 0x1d7d PushV
	GetItemID(var_137_int); // 0x1d7e ObjFunc
	var_140_string = "Category"; // 0x1d80 PushS
	GetInvItemProperty(var_138_int, var_137_int, var_140_string); // 0x1d81 Func
	AddItem(var_139_bool, var_132_object, var_138_int, var_133_int); // 0x1d83 ObjFunc
	var_141_bool = var_139_bool == 0; // 0x1d85 Not
	if(var_141_bool == 0) goto Label_7562; // 0x1d86 JumpB
	DropItems(var_132_object, var_133_int); // 0x1d87 ObjFunc
	goto Label_7567; // 0x1d89 Jump
	
Label_7567:
	return 6; // 0x1d8f Return
	
Label_7562:
	var_142_int = 0; var_143_int = 0; // 0x1d8a PushV
	var_142_int = var_137_int; // 0x1d8b Mov
	var_143_int = var_133_int; // 0x1d8c Mov
	func_7518(var_142_int, var_143_int); // 0x1d8d NEW_2
}


func_1407(var_0_object, var_1_object, var_2_object, var_3_string, var_243_object, var_244_object)
{
	var_0_object = var_244_object; // 0x580 TMov
	var_1_object = var_243_object; // 0x581 TMov
	var_3_string = 0; // 0x582 TMovB
	var_249_int = 1; // 0x583 PushI
	if(var_249_int == 0) goto Label_1435; // 0x584 JumpB
	var_250_object = Obj(); var_251_object = Obj(); // 0x585 PushV
	var_250_object = var_1_object; // 0x586 MovT
	var_251_object = var_0_object; // 0x587 MovT
	func_8275(); // 0x588 NEW_2
	var_254_string = ""; // 0x58a PushV
	var_254_string = "Neutral"; // 0x58b MovS
	func_1465(var_244_object, var_254_string); // 0x58c NEW_2
	var_271_int = 500287; // 0x58e PushI
	SetMessage(var_271_int); // 0x58f TObjFunc
	ClearReplies(); // 0x591 TObjFunc
	var_272_int = 532871; // 0x593 PushI
	var_273_int = 34360; // 0x594 PushI
	var_274_int = 34359; // 0x595 PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x596 TObjFunc
	goto Label_1435; // 0x598 Jump
	
Label_1435:
	var_275_bool = 0; // 0x59b PushV
	func_7709(var_275_bool); // 0x59c NEW_2
	if(var_275_bool == 0) goto Label_1450; // 0x59e JumpB
	
Label_1439:
	lshWaitForAnimEnd(); // 0x59f Func
	var_276_string = var_3_string; // 0x5a1 PushT
	if(var_276_string == 0) goto Label_1444; // 0x5a2 JumpB
	goto Label_1449; // 0x5a3 Jump
	
Label_1449:
	goto Label_1464; // 0x5a9 Jump
	
Label_1464:
	return 0; // 0x5b8 Return
	
Label_1444:
	var_277_string = ""; // 0x5a4 PushV
	var_277_string = var_2_object; // 0x5a5 MovT
	func_7422(var_277_string); // 0x5a6 NEW_2
	goto Label_1439; // 0x5a8 Jump
	
Label_1450:
	var_288_string = "all"; // 0x5aa PushS
	var_289_string = "idle"; // 0x5ab PushS
	PlayAnimation(var_288_string, var_289_string); // 0x5ac Func
	
Label_1454:
	WaitForAnimEnd(); // 0x5ae Func
	var_290_string = var_3_string; // 0x5b0 PushT
	if(var_290_string == 0) goto Label_1459; // 0x5b1 JumpB
	goto Label_1464; // 0x5b2 Jump
	
Label_1459:
	var_291_string = "all"; // 0x5b3 PushS
	var_292_string = "idle"; // 0x5b4 PushS
	PlayAnimation(var_291_string, var_292_string); // 0x5b5 Func
	goto Label_1454; // 0x5b7 Jump
}


func_8576(var_815_bool)
{
	var_817_int = 0; var_818_string = ""; // 0x2181 PushV
	var_818_string = "d4q03_alldead"; // 0x2182 MovS
	func_7502(var_817_int, var_818_string); // 0x2183 NEW_2
	var_819_int = 1; // 0x2185 PushI
	var_820_bool = var_817_int == var_819_int; // 0x2186 Eq
	if(var_820_bool == 0) goto Label_8586; // 0x2187 JumpB
	var_815_bool = 1; // 0x2188 MovB
	return 0; // 0x2189 Return
	
Label_8586:
	var_815_bool = 0; // 0x218a MovB
	return 0; // 0x218b Return
}


func_7050()
{
	var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_bool = 0; var_67_int = 0; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_int = 0; var_72_bool = 0; // 0x1b8a PushV
	WaitForAnimEnd(); // 0x1b8b Func
	var_73_bool = 0; // 0x1b8d PushV
	func_7194(var_73_bool); // 0x1b8e NEW_2
	var_74_bool = var_73_bool == 0; // 0x1b90 Not
	if(var_74_bool == 0) goto Label_7059; // 0x1b91 JumpB
	return 12; // 0x1b92 Return
	
Label_7059:
	var_75_int = 0; // 0x1b93 PushV
	func_7684(var_75_int); // 0x1b94 NEW_2
	var_67_int = var_75_int; // 0x1b95 Mov
	var_68_int = 0; // 0x1b97 MovI
	
Label_7064:
	var_88_bool = 0; // 0x1b98 PushV
	var_88_bool = 0; // 0x1b99 MovB
	var_89_int = 5; // 0x1b9a PushI
	var_90_bool = var_68_int < var_89_int; // 0x1b9b LT
	if(var_90_bool == 0) goto Label_7074; // 0x1b9c JumpB
	var_91_bool = 0; // 0x1b9d PushV
	func_7194(var_91_bool); // 0x1b9e NEW_2
	if(var_91_bool == 0) goto Label_7074; // 0x1ba0 JumpB
	var_88_bool = 1; // 0x1ba1 MovB
	
Label_7074:
	if(var_88_bool == 0) goto Label_7116; // 0x1ba2 JumpB
	var_92_bool = var_67_int == 0; // 0x1ba3 Not
	if(var_92_bool == 0) goto Label_7084; // 0x1ba4 JumpB
	var_93_int = 3; // 0x1ba5 PushI
	Sleep(var_93_int, var_69_bool); // 0x1ba6 Func
	var_94_bool = var_69_bool == 0; // 0x1ba8 Not
	if(var_94_bool == 0) goto Label_7083; // 0x1ba9 JumpB
	goto Label_7116; // 0x1baa Jump
	
Label_7116:
	ResetAAS(); // 0x1bcc Func
	return 12; // 0x1bce Return
	
Label_7083:
	goto Label_7105; // 0x1bab Jump
	
Label_7105:
	var_95_bool = 0; // 0x1bc1 PushV
	func_7119(var_95_bool); // 0x1bc2 NEW_2
	var_96_bool = var_95_bool == 0; // 0x1bc4 Not
	if(var_96_bool == 0) goto Label_7111; // 0x1bc5 JumpB
	goto Label_7116; // 0x1bc6 Jump
	
Label_7111:
	ResetAAS(); // 0x1bc7 Func
	var_97_int = 1; // 0x1bc9 PushI
	var_68_int = var_68_int + var_97_int; // 0x1bca Add2
	goto Label_7064; // 0x1bcb Jump
	
Label_7084:
	irand(var_70_int, var_67_int); // 0x1bac Func
	var_98_int = 5; // 0x1bae PushI
	irand(var_71_int, var_98_int); // 0x1baf Func
	var_99_int = 0; // 0x1bb1 PushI
	var_100_bool = var_71_int != var_99_int; // 0x1bb2 Neq
	if(var_100_bool == 0) goto Label_7093; // 0x1bb3 JumpB
	var_70_int = 0; // 0x1bb4 MovI
	
Label_7093:
	var_101_string = "all"; // 0x1bb5 PushS
	var_102_string = ""; var_103_int = 0; // 0x1bb6 PushV
	var_103_int = var_70_int; // 0x1bb7 Mov
	func_7677(var_102_string, var_103_int); // 0x1bb8 NEW_2
	PlayAnimation(var_101_string, var_102_string); // 0x1bba Func
	WaitForAnimEnd(var_72_bool); // 0x1bbc Func
	var_104_bool = var_72_bool == 0; // 0x1bbe Not
	if(var_104_bool == 0) goto Label_7105; // 0x1bbf JumpB
	goto Label_7116; // 0x1bc0 Jump
}


func_8588(var_821_bool)
{
	var_823_int = 0; var_824_string = ""; // 0x218d PushV
	var_824_string = "ood4Alexandr3"; // 0x218e MovS
	func_7502(var_823_int, var_824_string); // 0x218f NEW_2
	var_825_int = 0; // 0x2191 PushI
	var_826_bool = var_823_int == var_825_int; // 0x2192 Eq
	if(var_826_bool == 0) goto Label_8598; // 0x2193 JumpB
	var_821_bool = 1; // 0x2194 MovB
	return 0; // 0x2195 Return
	
Label_8598:
	var_821_bool = 0; // 0x2196 MovB
	return 0; // 0x2197 Return
}


func_7568(var_126_object, var_127_string, var_128_int)
{
	var_129_object = Obj(); var_130_object = Obj(); // 0x1d90 PushV
	CreateInvItem(var_130_object); // 0x1d91 Func
	SetItemName(var_127_string); // 0x1d93 ObjFunc
	var_131_object = Obj(); var_132_object = Obj(); var_133_int = 0; // 0x1d95 PushV
	var_131_object = var_126_object; // 0x1d96 Mov
	var_132_object = var_130_object; // 0x1d97 Mov
	var_133_int = var_128_int; // 0x1d98 Mov
	func_7549(var_132_object, var_133_int); // 0x1d99 NEW_2
	return 2; // 0x1d9b Return
}


func_8083()
{
	var_267_object = Obj(); var_268_object = Obj(); var_269_object = Obj(); var_270_object = Obj(); // 0x1f93 PushV
	var_271_object = Obj(); // 0x1f94 PushV
	func_9014(var_271_object); // 0x1f95 NEW_2
	var_269_object = var_271_object; // 0x1f96 Mov
	var_272_string = "d4q03AlexandrAboutVolnica"; // 0x1f98 PushS
	FindMark(var_270_object, var_272_string); // 0x1f99 ObjFunc
	var_273_object = var_270_object; // 0x1f9b Push
	if(var_273_object == 0) goto Label_8095; // 0x1f9c JumpB
	Remove(); // 0x1f9d ObjFunc
	
Label_8095:
	var_274_string = "d4q03AlexandrGotoGrif"; // 0x1f9f PushS
	FindMark(var_270_object, var_274_string); // 0x1fa0 ObjFunc
	var_275_object = var_270_object; // 0x1fa2 Push
	if(var_275_object == 0) goto Label_8102; // 0x1fa3 JumpB
	Remove(); // 0x1fa4 ObjFunc
	
Label_8102:
	var_276_string = "d4q03AlexandrGotoGrifSelf"; // 0x1fa6 PushS
	FindMark(var_270_object, var_276_string); // 0x1fa7 ObjFunc
	var_277_object = var_270_object; // 0x1fa9 Push
	if(var_277_object == 0) goto Label_8109; // 0x1faa JumpB
	Remove(); // 0x1fab ObjFunc
	
Label_8109:
	var_278_string = "d4q03GrifGotoAlexandr"; // 0x1fad PushS
	FindMark(var_270_object, var_278_string); // 0x1fae ObjFunc
	var_279_object = var_270_object; // 0x1fb0 Push
	if(var_279_object == 0) goto Label_8116; // 0x1fb1 JumpB
	Remove(); // 0x1fb2 ObjFunc
	
Label_8116:
	var_280_string = "d4q03GrifGotoAlexandrSelf"; // 0x1fb4 PushS
	FindMark(var_270_object, var_280_string); // 0x1fb5 ObjFunc
	var_281_object = var_270_object; // 0x1fb7 Push
	if(var_281_object == 0) goto Label_8123; // 0x1fb8 JumpB
	Remove(); // 0x1fb9 ObjFunc
	
Label_8123:
	func_8934(); // 0x1fbc NEW_2
	var_290_bool = 0; var_291_string = ""; var_292_string = ""; // 0x1fbe PushV
	var_291_string = "quest_d4_03"; // 0x1fbf MovS
	var_292_string = "completed"; // 0x1fc0 MovS
	func_7626(var_290_bool, var_291_string, var_292_string); // 0x1fc1 NEW_2
	return 4; // 0x1fc3 Return
}


func_8600(var_877_bool)
{
	var_879_int = 0; var_880_string = ""; // 0x2199 PushV
	var_880_string = "d5q01"; // 0x219a MovS
	func_7502(var_879_int, var_880_string); // 0x219b NEW_2
	var_881_int = 2; // 0x219d PushI
	var_882_bool = var_879_int == var_881_int; // 0x219e Eq
	if(var_882_bool == 0) goto Label_8610; // 0x219f JumpB
	var_877_bool = 1; // 0x21a0 MovB
	return 0; // 0x21a1 Return
	
Label_8610:
	var_877_bool = 0; // 0x21a2 MovB
	return 0; // 0x21a3 Return
}


func_7581(var_302_bool, var_303_object, var_304_float)
{
	var_305_bool = var_303_object == 0; // 0x1d9e Not
	if(var_305_bool == 0) goto Label_7586; // 0x1d9f JumpB
	var_302_bool = 0; // 0x1da0 MovB
	return 0; // 0x1da1 Return
	
Label_7586:
	var_306_int = 0; // 0x1da2 PushI
	var_307_bool = var_304_float > var_306_int; // 0x1da3 GT
	if(var_307_bool == 0) goto Label_7593; // 0x1da4 JumpB
	var_308_int = 8; // 0x1da5 PushI
	SendWorldWndMessage(var_308_int); // 0x1da6 Func
	goto Label_7602; // 0x1da8 Jump
	
Label_7602:
	var_309_float = 0; // 0x1db2 PushV
	var_309_float = var_304_float; // 0x1db3 Mov
	func_7616(var_309_float); // 0x1db4 NEW_2
	var_313_bool = 0; var_314_object = Obj(); var_315_string = ""; var_316_float = 0; var_317_float = 0; var_318_float = 0; // 0x1db6 PushV
	var_314_object = var_303_object; // 0x1db7 Mov
	var_315_string = "reputation"; // 0x1db8 MovS
	var_316_float = var_304_float; // 0x1db9 Mov
	var_317_float = 0; // 0x1dba MovI
	var_318_float = 1; // 0x1dbb MovI
	func_7146(var_313_bool, var_314_object, var_315_string, var_316_float, var_317_float, var_318_float); // 0x1dbc NEW_2
	var_302_bool = 1; // 0x1dbe MovB
	return 0; // 0x1dbf Return
	
Label_7593:
	var_337_int = 0; // 0x1da9 PushI
	var_338_bool = var_304_float < var_337_int; // 0x1daa LT
	if(var_338_bool == 0) goto Label_7600; // 0x1dab JumpB
	var_339_int = 9; // 0x1dac PushI
	SendWorldWndMessage(var_339_int); // 0x1dad Func
	goto Label_7602; // 0x1daf Jump
	
Label_7600:
	var_302_bool = 0; // 0x1db0 MovB
	return 0; // 0x1db1 Return
}


func_8612(var_413_bool)
{
	var_415_int = 0; var_416_string = ""; // 0x21a5 PushV
	var_416_string = "d1q01"; // 0x21a6 MovS
	func_7502(var_415_int, var_416_string); // 0x21a7 NEW_2
	var_419_int = 3; // 0x21a9 PushI
	var_420_bool = var_415_int == var_419_int; // 0x21aa Eq
	if(var_420_bool == 0) goto Label_8622; // 0x21ab JumpB
	var_413_bool = 1; // 0x21ac MovB
	return 0; // 0x21ad Return
	
Label_8622:
	var_413_bool = 0; // 0x21ae MovB
	return 0; // 0x21af Return
}


func_8624(var_1014_bool)
{
	var_1016_int = 0; var_1017_string = ""; // 0x21b1 PushV
	var_1017_string = "d6q02"; // 0x21b2 MovS
	func_7502(var_1016_int, var_1017_string); // 0x21b3 NEW_2
	var_1018_int = 1; // 0x21b5 PushI
	var_1019_bool = var_1016_int == var_1018_int; // 0x21b6 Eq
	if(var_1019_bool == 0) goto Label_8634; // 0x21b7 JumpB
	var_1014_bool = 1; // 0x21b8 MovB
	return 0; // 0x21b9 Return
	
Label_8634:
	var_1014_bool = 0; // 0x21ba MovB
	return 0; // 0x21bb Return
}


func_945(var_0_object, var_1_object, var_2_object, var_3_string, var_338_object, var_339_object)
{
	var_0_object = var_339_object; // 0x3b2 TMov
	var_1_object = var_338_object; // 0x3b3 TMov
	var_3_string = 0; // 0x3b4 TMovB
	var_344_int = 1; // 0x3b5 PushI
	if(var_344_int == 0) goto Label_973; // 0x3b6 JumpB
	var_345_string = ""; // 0x3b7 PushV
	var_345_string = "Neutral"; // 0x3b8 MovS
	func_1003(var_339_object, var_345_string); // 0x3b9 NEW_2
	var_353_int = 532759; // 0x3bb PushI
	SetMessage(var_353_int); // 0x3bc TObjFunc
	ClearReplies(); // 0x3be TObjFunc
	var_354_int = 532760; // 0x3c0 PushI
	var_355_int = -1; // 0x3c1 PushI
	var_356_int = 34231; // 0x3c2 PushI
	AddReply(var_354_int, var_355_int, var_356_int); // 0x3c3 TObjFunc
	var_357_int = 533664; // 0x3c5 PushI
	var_358_int = -1; // 0x3c6 PushI
	var_359_int = 35196; // 0x3c7 PushI
	AddReply(var_357_int, var_358_int, var_359_int); // 0x3c8 TObjFunc
	goto Label_973; // 0x3ca Jump
	
Label_973:
	var_360_bool = 0; // 0x3cd PushV
	func_7709(var_360_bool); // 0x3ce NEW_2
	if(var_360_bool == 0) goto Label_988; // 0x3d0 JumpB
	
Label_977:
	lshWaitForAnimEnd(); // 0x3d1 Func
	var_361_string = var_3_string; // 0x3d3 PushT
	if(var_361_string == 0) goto Label_982; // 0x3d4 JumpB
	goto Label_987; // 0x3d5 Jump
	
Label_987:
	goto Label_1002; // 0x3db Jump
	
Label_1002:
	return 0; // 0x3ea Return
	
Label_982:
	var_362_string = ""; // 0x3d6 PushV
	var_362_string = var_2_object; // 0x3d7 MovT
	func_7422(var_362_string); // 0x3d8 NEW_2
	goto Label_977; // 0x3da Jump
	
Label_988:
	var_363_string = "all"; // 0x3dc PushS
	var_364_string = "idle"; // 0x3dd PushS
	PlayAnimation(var_363_string, var_364_string); // 0x3de Func
	
Label_992:
	WaitForAnimEnd(); // 0x3e0 Func
	var_365_string = var_3_string; // 0x3e2 PushT
	if(var_365_string == 0) goto Label_997; // 0x3e3 JumpB
	goto Label_1002; // 0x3e4 Jump
	
Label_997:
	var_366_string = "all"; // 0x3e5 PushS
	var_367_string = "idle"; // 0x3e6 PushS
	PlayAnimation(var_366_string, var_367_string); // 0x3e7 Func
	goto Label_992; // 0x3e9 Jump
}


func_1465(var_2_object, var_254_string)
{
	var_255_bool = 0; // 0x5ba PushV
	func_7709(var_255_bool); // 0x5bb NEW_2
	var_256_bool = var_255_bool == 0; // 0x5bd Not
	if(var_256_bool == 0) goto Label_1472; // 0x5be JumpB
	return 0; // 0x5bf Return
	
Label_1472:
	var_257_bool = var_254_string == var_2_object; // 0x5c0 Eq
	if(var_257_bool == 0) goto Label_1475; // 0x5c1 JumpB
	return 0; // 0x5c2 Return
	
Label_1475:
	var_258_string = ""; var_259_bool = 0; // 0x5c3 PushV
	var_258_string = var_254_string; // 0x5c4 Mov
	var_260_string = ""; // 0x5c5 PushS
	var_261_bool = var_254_string == var_260_string; // 0x5c6 Eq
	if(var_261_bool == 0) goto Label_1482; // 0x5c7 JumpB
	var_259_bool = 0; // 0x5c8 MovB
	goto Label_1483; // 0x5c9 Jump
	
Label_1483:
	func_7438(var_258_string, var_259_bool); // 0x5cb NEW_2
	var_2_object = var_254_string; // 0x5cd TMov
	return 0; // 0x5ce Return
	
Label_1482:
	var_259_bool = 1; // 0x5ca MovB
}


func_5563(var_0_object, var_1_object, var_2_object, var_3_string, var_861_object, var_862_object)
{
	var_0_object = var_862_object; // 0x15bc TMov
	var_1_object = var_861_object; // 0x15bd TMov
	var_3_string = 0; // 0x15be TMovB
	var_867_int = 1; // 0x15bf PushI
	if(var_867_int == 0) goto Label_5634; // 0x15c0 JumpB
	var_868_string = ""; // 0x15c1 PushV
	var_868_string = "Neutral"; // 0x15c2 MovS
	func_5664(var_862_object, var_868_string); // 0x15c3 NEW_2
	var_876_int = 511591; // 0x15c5 PushI
	SetMessage(var_876_int); // 0x15c6 TObjFunc
	ClearReplies(); // 0x15c8 TObjFunc
	var_877_bool = 0; var_878_object = Obj(); // 0x15ca PushV
	var_878_object = var_1_object; // 0x15cb MovT
	func_8600(var_878_object); // 0x15cc NEW_2
	if(var_877_bool == 0) goto Label_5588; // 0x15ce JumpB
	var_883_int = 511592; // 0x15cf PushI
	var_884_int = 12788; // 0x15d0 PushI
	var_885_int = 12787; // 0x15d1 PushI
	AddReply(var_883_int, var_884_int, var_885_int); // 0x15d2 TObjFunc
	
Label_5588:
	var_886_bool = 0; // 0x15d4 PushV
	var_886_bool = 0; // 0x15d5 MovB
	var_887_bool = 0; var_888_object = Obj(); // 0x15d6 PushV
	var_888_object = var_1_object; // 0x15d7 MovT
	func_8636(var_888_object); // 0x15d8 NEW_2
	if(var_887_bool == 0) goto Label_5601; // 0x15da JumpB
	var_893_bool = 0; var_894_object = Obj(); // 0x15db PushV
	var_894_object = var_1_object; // 0x15dc MovT
	func_8660(var_894_object); // 0x15dd NEW_2
	if(var_893_bool == 0) goto Label_5601; // 0x15df JumpB
	var_886_bool = 1; // 0x15e0 MovB
	
Label_5601:
	if(var_886_bool == 0) goto Label_5607; // 0x15e1 JumpB
	var_899_int = 511611; // 0x15e2 PushI
	var_900_int = 12810; // 0x15e3 PushI
	var_901_int = 12809; // 0x15e4 PushI
	AddReply(var_899_int, var_900_int, var_901_int); // 0x15e5 TObjFunc
	
Label_5607:
	var_902_bool = 0; // 0x15e7 PushV
	var_902_bool = 0; // 0x15e8 MovB
	var_903_bool = 0; var_904_object = Obj(); // 0x15e9 PushV
	var_904_object = var_1_object; // 0x15ea MovT
	func_8648(var_904_object); // 0x15eb NEW_2
	if(var_903_bool == 0) goto Label_5620; // 0x15ed JumpB
	var_909_bool = 0; var_910_object = Obj(); // 0x15ee PushV
	var_910_object = var_1_object; // 0x15ef MovT
	func_8672(var_910_object); // 0x15f0 NEW_2
	if(var_909_bool == 0) goto Label_5620; // 0x15f2 JumpB
	var_902_bool = 1; // 0x15f3 MovB
	
Label_5620:
	if(var_902_bool == 0) goto Label_5626; // 0x15f4 JumpB
	var_915_int = 511624; // 0x15f5 PushI
	var_916_int = 12823; // 0x15f6 PushI
	var_917_int = 12822; // 0x15f7 PushI
	AddReply(var_915_int, var_916_int, var_917_int); // 0x15f8 TObjFunc
	
Label_5626:
	var_918_int = 511635; // 0x15fa PushI
	var_919_int = -1; // 0x15fb PushI
	var_920_int = 12834; // 0x15fc PushI
	AddReply(var_918_int, var_919_int, var_920_int); // 0x15fd TObjFunc
	goto Label_5634; // 0x15ff Jump
	
Label_5634:
	var_921_bool = 0; // 0x1602 PushV
	func_7709(var_921_bool); // 0x1603 NEW_2
	if(var_921_bool == 0) goto Label_5649; // 0x1605 JumpB
	
Label_5638:
	lshWaitForAnimEnd(); // 0x1606 Func
	var_922_string = var_3_string; // 0x1608 PushT
	if(var_922_string == 0) goto Label_5643; // 0x1609 JumpB
	goto Label_5648; // 0x160a Jump
	
Label_5648:
	goto Label_5663; // 0x1610 Jump
	
Label_5663:
	return 0; // 0x161f Return
	
Label_5643:
	var_923_string = ""; // 0x160b PushV
	var_923_string = var_2_object; // 0x160c MovT
	func_7422(var_923_string); // 0x160d NEW_2
	goto Label_5638; // 0x160f Jump
	
Label_5649:
	var_924_string = "all"; // 0x1611 PushS
	var_925_string = "idle"; // 0x1612 PushS
	PlayAnimation(var_924_string, var_925_string); // 0x1613 Func
	
Label_5653:
	WaitForAnimEnd(); // 0x1615 Func
	var_926_string = var_3_string; // 0x1617 PushT
	if(var_926_string == 0) goto Label_5658; // 0x1618 JumpB
	goto Label_5663; // 0x1619 Jump
	
Label_5658:
	var_927_string = "all"; // 0x161a PushS
	var_928_string = "idle"; // 0x161b PushS
	PlayAnimation(var_927_string, var_928_string); // 0x161c Func
	goto Label_5653; // 0x161e Jump
}


func_4028(var_0_object, var_1_object, var_2_object, var_3_string, var_642_object, var_643_object)
{
	var_0_object = var_643_object; // 0xfbd TMov
	var_1_object = var_642_object; // 0xfbe TMov
	var_3_string = 0; // 0xfbf TMovB
	var_648_int = 1; // 0xfc0 PushI
	if(var_648_int == 0) goto Label_4119; // 0xfc1 JumpB
	var_649_bool = 0; // 0xfc2 PushV
	var_649_bool = 0; // 0xfc3 MovB
	var_650_bool = 0; var_651_object = Obj(); // 0xfc4 PushV
	var_651_object = var_1_object; // 0xfc5 MovT
	func_8504(var_651_object); // 0xfc6 NEW_2
	if(var_650_bool == 0) goto Label_4047; // 0xfc8 JumpB
	var_656_bool = 0; var_657_object = Obj(); // 0xfc9 PushV
	var_657_object = var_1_object; // 0xfca MovT
	func_8492(var_657_object); // 0xfcb NEW_2
	if(var_656_bool == 0) goto Label_4047; // 0xfcd JumpB
	var_649_bool = 1; // 0xfce MovB
	
Label_4047:
	if(var_649_bool == 0) goto Label_4068; // 0xfcf JumpB
	var_662_object = Obj(); var_663_object = Obj(); // 0xfd0 PushV
	var_662_object = var_1_object; // 0xfd1 MovT
	var_663_object = var_0_object; // 0xfd2 MovT
	func_7955(); // 0xfd3 NEW_2
	var_666_string = ""; // 0xfd5 PushV
	var_666_string = "Neutral"; // 0xfd6 MovS
	func_4149(var_643_object, var_666_string); // 0xfd7 NEW_2
	var_674_int = 509086; // 0xfd9 PushI
	SetMessage(var_674_int); // 0xfda TObjFunc
	ClearReplies(); // 0xfdc TObjFunc
	var_675_int = 509087; // 0xfde PushI
	var_676_int = 9969; // 0xfdf PushI
	var_677_int = 9965; // 0xfe0 PushI
	AddReply(var_675_int, var_676_int, var_677_int); // 0xfe1 TObjFunc
	goto Label_4119; // 0xfe3 Jump
	
Label_4119:
	var_678_bool = 0; // 0x1017 PushV
	func_7709(var_678_bool); // 0x1018 NEW_2
	if(var_678_bool == 0) goto Label_4134; // 0x101a JumpB
	
Label_4123:
	lshWaitForAnimEnd(); // 0x101b Func
	var_679_string = var_3_string; // 0x101d PushT
	if(var_679_string == 0) goto Label_4128; // 0x101e JumpB
	goto Label_4133; // 0x101f Jump
	
Label_4133:
	goto Label_4148; // 0x1025 Jump
	
Label_4148:
	return 0; // 0x1034 Return
	
Label_4128:
	var_680_string = ""; // 0x1020 PushV
	var_680_string = var_2_object; // 0x1021 MovT
	func_7422(var_680_string); // 0x1022 NEW_2
	goto Label_4123; // 0x1024 Jump
	
Label_4134:
	var_681_string = "all"; // 0x1026 PushS
	var_682_string = "idle"; // 0x1027 PushS
	PlayAnimation(var_681_string, var_682_string); // 0x1028 Func
	
Label_4138:
	WaitForAnimEnd(); // 0x102a Func
	var_683_string = var_3_string; // 0x102c PushT
	if(var_683_string == 0) goto Label_4143; // 0x102d JumpB
	goto Label_4148; // 0x102e Jump
	
Label_4143:
	var_684_string = "all"; // 0x102f PushS
	var_685_string = "idle"; // 0x1030 PushS
	PlayAnimation(var_684_string, var_685_string); // 0x1031 Func
	goto Label_4138; // 0x1033 Jump
	
Label_4068:
	var_686_string = ""; // 0xfe4 PushV
	var_686_string = "Neutral"; // 0xfe5 MovS
	func_4149(var_643_object, var_686_string); // 0xfe6 NEW_2
	var_687_int = 508854; // 0xfe8 PushI
	SetMessage(var_687_int); // 0xfe9 TObjFunc
	ClearReplies(); // 0xfeb TObjFunc
	var_688_bool = 0; // 0xfed PushV
	var_688_bool = 0; // 0xfee MovB
	var_689_bool = 0; var_690_object = Obj(); // 0xfef PushV
	var_690_object = var_1_object; // 0xff0 MovT
	func_8468(var_690_object); // 0xff1 NEW_2
	if(var_689_bool == 0) goto Label_4090; // 0xff3 JumpB
	var_695_bool = 0; var_696_object = Obj(); // 0xff4 PushV
	var_696_object = var_1_object; // 0xff5 MovT
	func_8516(var_696_object); // 0xff6 NEW_2
	if(var_695_bool == 0) goto Label_4090; // 0xff8 JumpB
	var_688_bool = 1; // 0xff9 MovB
	
Label_4090:
	if(var_688_bool == 0) goto Label_4096; // 0xffa JumpB
	var_701_int = 508840; // 0xffb PushI
	var_702_int = 9693; // 0xffc PushI
	var_703_int = 9692; // 0xffd PushI
	AddReply(var_701_int, var_702_int, var_703_int); // 0xffe TObjFunc
	
Label_4096:
	var_704_bool = 0; var_705_object = Obj(); // 0x1000 PushV
	var_705_object = var_1_object; // 0x1001 MovT
	func_8480(var_705_object); // 0x1002 NEW_2
	if(var_704_bool == 0) goto Label_4106; // 0x1004 JumpB
	var_710_int = 508856; // 0x1005 PushI
	var_711_int = 9691; // 0x1006 PushI
	var_712_int = 9712; // 0x1007 PushI
	AddReply(var_710_int, var_711_int, var_712_int); // 0x1008 TObjFunc
	
Label_4106:
	var_713_int = 511133; // 0x100a PushI
	var_714_int = -1; // 0x100b PushI
	var_715_int = 12322; // 0x100c PushI
	AddReply(var_713_int, var_714_int, var_715_int); // 0x100d TObjFunc
	var_716_int = 534068; // 0x100f PushI
	var_717_int = -1; // 0x1010 PushI
	var_718_int = 35658; // 0x1011 PushI
	AddReply(var_716_int, var_717_int, var_718_int); // 0x1012 TObjFunc
	goto Label_4119; // 0x1014 Jump
}


func_8636(var_887_bool)
{
	var_889_int = 0; var_890_string = ""; // 0x21bd PushV
	var_890_string = "ood5Alexandr1"; // 0x21be MovS
	func_7502(var_889_int, var_890_string); // 0x21bf NEW_2
	var_891_int = 0; // 0x21c1 PushI
	var_892_bool = var_889_int == var_891_int; // 0x21c2 Eq
	if(var_892_bool == 0) goto Label_8646; // 0x21c3 JumpB
	var_887_bool = 1; // 0x21c4 MovB
	return 0; // 0x21c5 Return
	
Label_8646:
	var_887_bool = 0; // 0x21c6 MovB
	return 0; // 0x21c7 Return
}


func_7616(var_309_float)
{
	var_310_object = Obj(); var_311_object = Obj(); // 0x1dc0 PushV
	CreateFloatVector(var_311_object); // 0x1dc1 Func
	add(var_309_float); // 0x1dc3 ObjFunc
	var_312_int = 16; // 0x1dc5 PushI
	SendWorldWndMessage(var_312_int, var_311_object); // 0x1dc6 Func
	return 2; // 0x1dc8 Return
}


func_8134()
{
	var_230_object = Obj(); var_231_string = ""; var_232_float = 0; // 0x1fc7 PushV
	var_233_object = Obj(); // 0x1fc8 PushV
	func_9014(var_233_object); // 0x1fc9 NEW_2
	var_230_object = var_233_object; // 0x1fca Mov
	var_231_string = "pt_map_warehouse_gangster"; // 0x1fcc MovS
	var_232_float = 2; // 0x1fcd MovI
	func_9031(var_230_object, var_231_string, var_232_float); // 0x1fce NEW_2
	var_234_object = Obj(); // 0x1fd0 PushV
	func_9014(var_234_object); // 0x1fd1 NEW_2
	ShowMap(var_234_object); // 0x1fd3 ObjFunc
	return 0; // 0x1fd5 Return
}


func_8648(var_903_bool)
{
	var_905_int = 0; var_906_string = ""; // 0x21c9 PushV
	var_906_string = "ood5Alexandr2"; // 0x21ca MovS
	func_7502(var_905_int, var_906_string); // 0x21cb NEW_2
	var_907_int = 0; // 0x21cd PushI
	var_908_bool = var_905_int == var_907_int; // 0x21ce Eq
	if(var_908_bool == 0) goto Label_8658; // 0x21cf JumpB
	var_903_bool = 1; // 0x21d0 MovB
	return 0; // 0x21d1 Return
	
Label_8658:
	var_903_bool = 0; // 0x21d2 MovB
	return 0; // 0x21d3 Return
}


func_7626(var_290_bool, var_291_string, var_292_string)
{
	var_293_object = Obj(); var_294_object = Obj(); // 0x1dca PushV
	FindActor(var_294_object, var_291_string); // 0x1dcb Func
	var_295_bool = var_294_object == 0; // 0x1dcd NullEq
	if(var_295_bool == 0) goto Label_7633; // 0x1dce JumpB
	var_290_bool = 0; // 0x1dcf MovB
	return 2; // 0x1dd0 Return
	
Label_7633:
	Trigger(var_294_object, var_292_string); // 0x1dd1 Func
	var_290_bool = 1; // 0x1dd3 MovB
	return 2; // 0x1dd4 Return
}


func_7119(var_95_bool)
{
	var_95_bool = 1; // 0x1bcf MovB
	return 0; // 0x1bd0 Return
}


func_7121()
{
	StopAnimation(); // 0x1bd1 Func
	StopGroup0(); // 0x1bd3 Func
	return 0; // 0x1bd5 Return
}


func_8660(var_893_bool)
{
	var_895_int = 0; var_896_string = ""; // 0x21d5 PushV
	var_896_string = "d5q03"; // 0x21d6 MovS
	func_7502(var_895_int, var_896_string); // 0x21d7 NEW_2
	var_897_int = 1; // 0x21d9 PushI
	var_898_bool = var_895_int == var_897_int; // 0x21da Eq
	if(var_898_bool == 0) goto Label_8670; // 0x21db JumpB
	var_893_bool = 1; // 0x21dc MovB
	return 0; // 0x21dd Return
	
Label_8670:
	var_893_bool = 0; // 0x21de MovB
	return 0; // 0x21df Return
}


func_8150(var_123_object)
{
	var_125_string = "revolver ammo6 is given"; // 0x1fd7 PushS
	Trace(var_125_string); // 0x1fd8 Func
	var_126_object = Obj(); var_127_string = ""; var_128_int = 0; // 0x1fda PushV
	var_126_object = var_123_object; // 0x1fdb Mov
	var_127_string = "revolver_ammo"; // 0x1fdc MovS
	var_128_int = 6; // 0x1fdd MovI
	func_7568(var_126_object, var_127_string, var_128_int); // 0x1fde NEW_2
	return 0; // 0x1fe0 Return
}


func_7126(var_71_float)
{
	var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); // 0x1bd6 PushV
	GetPosition(var_76_cvector); // 0x1bd7 Func
	GetPosition(var_77_cvector); // 0x1bd9 ObjFunc
	var_78_cvector = var_77_cvector - var_76_cvector; // 0x1bdb Sub2
	var_71_float = var_78_cvector | var_78_cvector; // 0x1bdc Or2
	return 6; // 0x1bdd Return
}


func_7638(var_83_float)
{
	var_84_float = 0; var_85_float = 0; // 0x1dd6 PushV
	GetGameTime(var_85_float); // 0x1dd7 Func
	var_83_float = var_85_float; // 0x1dd9 Mov
	return 2; // 0x1dda Return
}


func_7643(var_203_int)
{
	var_204_float = 0; var_205_float = 0; // 0x1ddb PushV
	GetGameTime(var_205_float); // 0x1ddc Func
	var_206_int = 1; // 0x1dde PushI
	var_207_int = 0; // 0x1ddf PushV
	var_208_int = 24; // 0x1de0 PushI
	var_207_int = var_205_float / var_205_float; // 0x1de1 Div2
	var_203_int = var_206_int + var_207_int; // 0x1de2 Add2
	return 2; // 0x1de3 Return
}


func_7134(var_321_bool, var_322_object, var_323_string)
{
	var_324_bool = 0; var_325_bool = 0; // 0x1bde PushV
	var_326_string = "HasProperty"; // 0x1bdf PushS
	var_327_int = 2; // 0x1be0 PushI
	var_328_bool = IsFuncExist(var_322_object, var_326_string, var_327_int); // 0x1be1 FuncExist
	var_329_bool = var_328_bool == 0; // 0x1be2 Not
	if(var_329_bool == 0) goto Label_7142; // 0x1be3 JumpB
	var_321_bool = 0; // 0x1be4 MovB
	return 2; // 0x1be5 Return
	
Label_7142:
	HasProperty(var_323_string, var_325_bool); // 0x1be6 ObjFunc
	var_321_bool = var_325_bool; // 0x1be8 Mov
	return 2; // 0x1be9 Return
}


func_8672(var_909_bool)
{
	var_911_int = 0; var_912_string = ""; // 0x21e1 PushV
	var_912_string = "d5q03"; // 0x21e2 MovS
	func_7502(var_911_int, var_912_string); // 0x21e3 NEW_2
	var_913_int = 2; // 0x21e5 PushI
	var_914_bool = var_911_int == var_913_int; // 0x21e6 Eq
	if(var_914_bool == 0) goto Label_8682; // 0x21e7 JumpB
	var_909_bool = 1; // 0x21e8 MovB
	return 0; // 0x21e9 Return
	
Label_8682:
	var_909_bool = 0; // 0x21ea MovB
	return 0; // 0x21eb Return
}


func_8161()
{
	var_239_string = "ood4Alexandr3"; // 0x1fe2 PushS
	var_240_int = 1; // 0x1fe3 PushI
	SetVariable(var_239_string, var_240_int); // 0x1fe4 Func
	return 0; // 0x1fe6 Return
}


func_7652(var_370_bool, var_371_int)
{
	var_372_int = 0; // 0x1de5 PushV
	func_7643(var_372_int); // 0x1de6 NEW_2
	var_370_bool = var_372_int == var_371_int; // 0x1de8 Eq2
	return 0; // 0x1de9 Return
}


func_8167()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x1fe7 PushV
	var_66_string = "d5q01"; // 0x1fe8 PushS
	var_67_int = 3; // 0x1fe9 PushI
	SetVariable(var_66_string, var_67_int); // 0x1fea Func
	var_68_object = Obj(); // 0x1fec PushV
	func_9014(var_68_object); // 0x1fed NEW_2
	var_65_object = var_68_object; // 0x1fee Mov
	var_75_string = "d5q01AlexandrGotoKaterina"; // 0x1ff0 PushS
	var_76_string = "pt_map_katerina"; // 0x1ff1 PushS
	var_77_int = 1; // 0x1ff2 PushI
	var_78_int = 511958; // 0x1ff3 PushI
	var_79_float = 0; // 0x1ff4 PushV
	func_7638(var_79_float); // 0x1ff5 NEW_2
	AddMark(var_75_string, var_76_string, var_77_int, var_78_int, var_79_float); // 0x1ff7 ObjFunc
	return 2; // 0x1ff9 Return
}


func_3048(var_2_object, var_500_string)
{
	var_501_bool = 0; // 0xbe9 PushV
	func_7709(var_501_bool); // 0xbea NEW_2
	var_502_bool = var_501_bool == 0; // 0xbec Not
	if(var_502_bool == 0) goto Label_3055; // 0xbed JumpB
	return 0; // 0xbee Return
	
Label_3055:
	var_503_bool = var_500_string == var_2_object; // 0xbef Eq
	if(var_503_bool == 0) goto Label_3058; // 0xbf0 JumpB
	return 0; // 0xbf1 Return
	
Label_3058:
	var_504_string = ""; var_505_bool = 0; // 0xbf2 PushV
	var_504_string = var_500_string; // 0xbf3 Mov
	var_506_string = ""; // 0xbf4 PushS
	var_507_bool = var_500_string == var_506_string; // 0xbf5 Eq
	if(var_507_bool == 0) goto Label_3065; // 0xbf6 JumpB
	var_505_bool = 0; // 0xbf7 MovB
	goto Label_3066; // 0xbf8 Jump
	
Label_3066:
	func_7438(var_504_string, var_505_bool); // 0xbfa NEW_2
	var_2_object = var_500_string; // 0xbfc TMov
	return 0; // 0xbfd Return
	
Label_3065:
	var_505_bool = 1; // 0xbf9 MovB
}


func_7146(var_313_bool, var_314_object, var_315_string, var_316_float, var_317_float, var_318_float)
{
	var_319_float = 0; var_320_float = 0; // 0x1bea PushV
	var_321_bool = 0; var_322_object = Obj(); var_323_string = ""; // 0x1beb PushV
	var_322_object = var_314_object; // 0x1bec Mov
	var_323_string = var_315_string; // 0x1bed Mov
	func_7134(var_321_bool, var_322_object, var_323_string); // 0x1bee NEW_2
	var_330_bool = var_321_bool == 0; // 0x1bf0 Not
	if(var_330_bool == 0) goto Label_7156; // 0x1bf1 JumpB
	var_313_bool = 0; // 0x1bf2 MovB
	return 2; // 0x1bf3 Return
	
Label_7156:
	GetProperty(var_315_string, var_320_float); // 0x1bf4 ObjFunc
	var_331_float = 0; var_332_float = 0; var_333_float = 0; var_334_float = 0; // 0x1bf6 PushV
	var_332_float = var_320_float + var_316_float; // 0x1bf7 Add2
	var_333_float = var_317_float; // 0x1bf8 Mov
	var_334_float = var_318_float; // 0x1bf9 Mov
	func_7491(var_331_float, var_332_float, var_333_float, var_334_float); // 0x1bfa NEW_2
	SetProperty(var_315_string, var_331_float); // 0x1bfc ObjFunc
	var_313_bool = 1; // 0x1bfe MovB
	return 2; // 0x1bff Return
}


func_1003(var_2_object, var_345_string)
{
	var_346_bool = 0; // 0x3ec PushV
	func_7709(var_346_bool); // 0x3ed NEW_2
	var_347_bool = var_346_bool == 0; // 0x3ef Not
	if(var_347_bool == 0) goto Label_1010; // 0x3f0 JumpB
	return 0; // 0x3f1 Return
	
Label_1010:
	var_348_bool = var_345_string == var_2_object; // 0x3f2 Eq
	if(var_348_bool == 0) goto Label_1013; // 0x3f3 JumpB
	return 0; // 0x3f4 Return
	
Label_1013:
	var_349_string = ""; var_350_bool = 0; // 0x3f5 PushV
	var_349_string = var_345_string; // 0x3f6 Mov
	var_351_string = ""; // 0x3f7 PushS
	var_352_bool = var_345_string == var_351_string; // 0x3f8 Eq
	if(var_352_bool == 0) goto Label_1020; // 0x3f9 JumpB
	var_350_bool = 0; // 0x3fa MovB
	goto Label_1021; // 0x3fb Jump
	
Label_1021:
	func_7438(var_349_string, var_350_bool); // 0x3fd NEW_2
	var_2_object = var_345_string; // 0x3ff TMov
	return 0; // 0x400 Return
	
Label_1020:
	var_350_bool = 1; // 0x3fc MovB
}


func_8684(var_965_bool)
{
	var_967_int = 0; var_968_string = ""; // 0x21ed PushV
	var_968_string = "d6q01"; // 0x21ee MovS
	func_7502(var_967_int, var_968_string); // 0x21ef NEW_2
	var_969_int = 1; // 0x21f1 PushI
	var_970_bool = var_967_int == var_969_int; // 0x21f2 Eq
	if(var_970_bool == 0) goto Label_8694; // 0x21f3 JumpB
	var_965_bool = 1; // 0x21f4 MovB
	return 0; // 0x21f5 Return
	
Label_8694:
	var_965_bool = 0; // 0x21f6 MovB
	return 0; // 0x21f7 Return
}


func_7658(var_302_bool, var_303_int)
{
	var_304_float = 0; var_305_int = 0; var_306_int = 0; var_307_float = 0; var_308_int = 0; var_309_int = 0; // 0x1dea PushV
	GetGameTime(var_307_float); // 0x1deb Func
	var_310_int = 1; // 0x1ded PushI
	var_311_int = 0; // 0x1dee PushV
	var_312_int = 24; // 0x1def PushI
	var_311_int = var_307_float / var_307_float; // 0x1df0 Div2
	var_308_int = var_310_int + var_311_int; // 0x1df1 Add2
	var_313_bool = var_308_int != var_303_int; // 0x1df2 Neq
	if(var_313_bool == 0) goto Label_7670; // 0x1df3 JumpB
	var_302_bool = 0; // 0x1df4 MovB
	return 6; // 0x1df5 Return
	
Label_7670:
	var_314_int = 0; // 0x1df6 PushV
	var_314_int = var_307_float; // 0x1df7 Mov
	var_315_int = 24; // 0x1df8 PushI
	var_309_int = var_314_int % var_315_int; // 0x1df9 Mod2
	var_316_int = 7; // 0x1dfa PushI
	var_302_bool = var_309_int < var_316_int; // 0x1dfb LT2
	return 6; // 0x1dfc Return
}


func_8696(var_971_bool)
{
	var_973_int = 0; var_974_string = ""; // 0x21f9 PushV
	var_974_string = "ood6Alexandr1"; // 0x21fa MovS
	func_7502(var_973_int, var_974_string); // 0x21fb NEW_2
	var_975_int = 0; // 0x21fd PushI
	var_976_bool = var_973_int == var_975_int; // 0x21fe Eq
	if(var_976_bool == 0) goto Label_8706; // 0x21ff JumpB
	var_971_bool = 1; // 0x2200 MovB
	return 0; // 0x2201 Return
	
Label_8706:
	var_971_bool = 0; // 0x2202 MovB
	return 0; // 0x2203 Return
}


func_8187()
{
	var_64_object = Obj(); var_65_object = Obj(); // 0x1ffb PushV
	var_66_string = "d1q01"; // 0x1ffc PushS
	var_67_int = 4; // 0x1ffd PushI
	SetVariable(var_66_string, var_67_int); // 0x1ffe Func
	var_68_object = Obj(); // 0x2000 PushV
	func_9014(var_68_object); // 0x2001 NEW_2
	var_65_object = var_68_object; // 0x2002 Mov
	var_75_string = "d1q01AlexandrGotoJulia"; // 0x2004 PushS
	var_76_string = "pt_map_julia"; // 0x2005 PushS
	var_77_int = 1; // 0x2006 PushI
	var_78_int = 508636; // 0x2007 PushI
	var_79_float = 0; // 0x2008 PushV
	func_7638(var_79_float); // 0x2009 NEW_2
	AddMark(var_75_string, var_76_string, var_77_int, var_78_int, var_79_float); // 0x200b ObjFunc
	func_8804(); // 0x200e NEW_2
	return 2; // 0x2010 Return
}


func_7677(var_81_string, var_82_int)
{
	var_83_string = ""; var_84_string = ""; // 0x1dfd PushV
	var_84_string = "idle"; // 0x1dfe MovS
	var_85_int = var_82_int; // 0x1dff Push
	if(var_85_int == 0) goto Label_7682; // 0x1e00 JumpB
	var_84_string = var_84_string + var_82_int; // 0x1e01 Add2
	
Label_7682:
	var_81_string = var_84_string; // 0x1e02 Mov
	return 2; // 0x1e03 Return
}


