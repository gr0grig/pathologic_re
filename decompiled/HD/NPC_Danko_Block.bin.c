task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0xdc PushI
	if(var_28_int == 0) goto Label_983; // 0xdd JumpB
	func_3397(); // 0xdf NEW_2
	var_30_int = 15110; // 0xe1 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0xe2 Eq
	if(var_31_bool == 0) goto Label_233; // 0xe3 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0xe4 PushV
	var_32_object = var_1_object; // 0xe5 MovT
	var_33_object = var_0_object; // 0xe6 MovT
	func_3544(); // 0xe7 NEW_2
	
Label_233:
	var_36_int = 15137; // 0xe9 PushI
	var_37_bool = var_27_cvector == var_36_int; // 0xea Eq
	if(var_37_bool == 0) goto Label_241; // 0xeb JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0xec PushV
	var_38_object = var_1_object; // 0xed MovT
	var_39_object = var_0_object; // 0xee MovT
	func_3603(); // 0xef NEW_2
	
Label_241:
	var_42_int = 15149; // 0xf1 PushI
	var_43_bool = var_27_cvector == var_42_int; // 0xf2 Eq
	if(var_43_bool == 0) goto Label_259; // 0xf3 JumpB
	var_44_object = Obj(); var_45_object = Obj(); // 0xf4 PushV
	var_44_object = var_1_object; // 0xf5 MovT
	var_45_object = var_0_object; // 0xf6 MovT
	func_3609(var_45_object); // 0xf7 NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0xf9 PushV
	var_68_object = var_1_object; // 0xfa MovT
	var_69_object = var_0_object; // 0xfb MovT
	func_3538(); // 0xfc NEW_2
	var_72_object = Obj(); var_73_object = Obj(); // 0xfe PushV
	var_72_object = var_1_object; // 0xff MovT
	var_73_object = var_0_object; // 0x100 MovT
	func_3648(var_73_object); // 0x101 NEW_2
	
Label_259:
	var_83_int = 15150; // 0x103 PushI
	var_84_bool = var_27_cvector == var_83_int; // 0x104 Eq
	if(var_84_bool == 0) goto Label_277; // 0x105 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x106 PushV
	var_85_object = var_1_object; // 0x107 MovT
	var_86_object = var_0_object; // 0x108 MovT
	func_3609(var_86_object); // 0x109 NEW_2
	var_87_object = Obj(); var_88_object = Obj(); // 0x10b PushV
	var_87_object = var_1_object; // 0x10c MovT
	var_88_object = var_0_object; // 0x10d MovT
	func_3538(); // 0x10e NEW_2
	var_89_object = Obj(); var_90_object = Obj(); // 0x110 PushV
	var_89_object = var_1_object; // 0x111 MovT
	var_90_object = var_0_object; // 0x112 MovT
	func_3648(var_90_object); // 0x113 NEW_2
	
Label_277:
	var_91_int = 15155; // 0x115 PushI
	var_92_bool = var_27_cvector == var_91_int; // 0x116 Eq
	if(var_92_bool == 0) goto Label_285; // 0x117 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0x118 PushV
	var_93_object = var_1_object; // 0x119 MovT
	var_94_object = var_0_object; // 0x11a MovT
	func_3659(); // 0x11b NEW_2
	
Label_285:
	var_97_int = 35071; // 0x11d PushI
	var_98_bool = var_27_cvector == var_97_int; // 0x11e Eq
	if(var_98_bool == 0) goto Label_298; // 0x11f JumpB
	var_99_object = Obj(); var_100_object = Obj(); // 0x120 PushV
	var_99_object = var_1_object; // 0x121 MovT
	var_100_object = var_0_object; // 0x122 MovT
	func_3550(); // 0x123 NEW_2
	var_132_object = Obj(); var_133_object = Obj(); // 0x125 PushV
	var_132_object = var_1_object; // 0x126 MovT
	var_133_object = var_0_object; // 0x127 MovT
	func_3564(); // 0x128 NEW_2
	
Label_298:
	var_136_int = 15109; // 0x12a PushI
	var_137_bool = var_26_bool == var_136_int; // 0x12b Eq
	if(var_137_bool == 0) goto Label_379; // 0x12c JumpB
	var_138_object = Obj(); var_139_object = Obj(); // 0x12d PushV
	var_138_object = var_1_object; // 0x12e MovT
	var_139_object = var_0_object; // 0x12f MovT
	func_3597(); // 0x130 NEW_2
	var_142_string = ""; // 0x132 PushV
	var_142_string = "Neutral"; // 0x133 MovS
	func_197(var_27_cvector, var_142_string); // 0x134 NEW_2
	var_159_int = 513882; // 0x136 PushI
	SetMessage(var_159_int); // 0x137 TObjFunc
	ClearReplies(); // 0x139 TObjFunc
	var_160_bool = 0; // 0x13b PushV
	var_160_bool = 0; // 0x13c MovB
	var_161_bool = 0; var_162_object = Obj(); // 0x13d PushV
	var_162_object = var_1_object; // 0x13e MovT
	func_3675(var_162_object); // 0x13f NEW_2
	if(var_161_bool == 0) goto Label_328; // 0x141 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x142 PushV
	var_170_object = var_1_object; // 0x143 MovT
	func_3687(var_170_object); // 0x144 NEW_2
	if(var_169_bool == 0) goto Label_328; // 0x146 JumpB
	var_160_bool = 1; // 0x147 MovB
	
Label_328:
	if(var_160_bool == 0) goto Label_334; // 0x148 JumpB
	var_175_int = 513883; // 0x149 PushI
	var_176_int = 15111; // 0x14a PushI
	var_177_int = 15110; // 0x14b PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x14c TObjFunc
	
Label_334:
	var_178_bool = 0; // 0x14e PushV
	var_178_bool = 0; // 0x14f MovB
	var_179_bool = 0; var_180_object = Obj(); // 0x150 PushV
	var_180_object = var_1_object; // 0x151 MovT
	func_3735(var_180_object); // 0x152 NEW_2
	if(var_179_bool == 0) goto Label_347; // 0x154 JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x155 PushV
	var_186_object = var_1_object; // 0x156 MovT
	func_3747(var_186_object); // 0x157 NEW_2
	if(var_185_bool == 0) goto Label_347; // 0x159 JumpB
	var_178_bool = 1; // 0x15a MovB
	
Label_347:
	if(var_178_bool == 0) goto Label_353; // 0x15b JumpB
	var_191_int = 513906; // 0x15c PushI
	var_192_int = 15138; // 0x15d PushI
	var_193_int = 15137; // 0x15e PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x15f TObjFunc
	
Label_353:
	var_194_bool = 0; var_195_object = Obj(); // 0x161 PushV
	var_195_object = var_1_object; // 0x162 MovT
	func_3831(var_195_object); // 0x163 NEW_2
	if(var_194_bool == 0) goto Label_363; // 0x165 JumpB
	var_200_int = 513924; // 0x166 PushI
	var_201_int = 15156; // 0x167 PushI
	var_202_int = 15155; // 0x168 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x169 TObjFunc
	
Label_363:
	var_203_bool = 0; var_204_object = Obj(); // 0x16b PushV
	var_204_object = var_1_object; // 0x16c MovT
	func_3699(var_204_object); // 0x16d NEW_2
	if(var_203_bool == 0) goto Label_373; // 0x16f JumpB
	var_209_int = 533537; // 0x170 PushI
	var_210_int = 35070; // 0x171 PushI
	var_211_int = 35069; // 0x172 PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x173 TObjFunc
	
Label_373:
	var_212_int = 513947; // 0x175 PushI
	var_213_int = -1; // 0x176 PushI
	var_214_int = 15182; // 0x177 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x178 TObjFunc
	return 0; // 0x17a Return
	
Label_379:
	var_215_int = 35070; // 0x17b PushI
	var_216_bool = var_26_bool == var_215_int; // 0x17c Eq
	if(var_216_bool == 0) goto Label_402; // 0x17d JumpB
	var_217_string = ""; // 0x17e PushV
	var_217_string = "Neutral"; // 0x17f MovS
	func_197(var_27_cvector, var_217_string); // 0x180 NEW_2
	var_218_int = 533538; // 0x182 PushI
	SetMessage(var_218_int); // 0x183 TObjFunc
	ClearReplies(); // 0x185 TObjFunc
	var_219_int = 536553; // 0x187 PushI
	var_220_int = 38366; // 0x188 PushI
	var_221_int = 38365; // 0x189 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x18a TObjFunc
	var_222_int = 536557; // 0x18c PushI
	var_223_int = -1; // 0x18d PushI
	var_224_int = 38369; // 0x18e PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x18f TObjFunc
	return 0; // 0x191 Return
	
Label_402:
	var_225_int = 38366; // 0x192 PushI
	var_226_bool = var_26_bool == var_225_int; // 0x193 Eq
	if(var_226_bool == 0) goto Label_425; // 0x194 JumpB
	var_227_string = ""; // 0x195 PushV
	var_227_string = "Neutral"; // 0x196 MovS
	func_197(var_27_cvector, var_227_string); // 0x197 NEW_2
	var_228_int = 536554; // 0x199 PushI
	SetMessage(var_228_int); // 0x19a TObjFunc
	ClearReplies(); // 0x19c TObjFunc
	var_229_int = 536555; // 0x19e PushI
	var_230_int = 38368; // 0x19f PushI
	var_231_int = 38367; // 0x1a0 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x1a1 TObjFunc
	var_232_int = 536558; // 0x1a3 PushI
	var_233_int = 38368; // 0x1a4 PushI
	var_234_int = 38370; // 0x1a5 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x1a6 TObjFunc
	return 0; // 0x1a8 Return
	
Label_425:
	var_235_int = 38368; // 0x1a9 PushI
	var_236_bool = var_26_bool == var_235_int; // 0x1aa Eq
	if(var_236_bool == 0) goto Label_443; // 0x1ab JumpB
	var_237_string = ""; // 0x1ac PushV
	var_237_string = "Neutral"; // 0x1ad MovS
	func_197(var_27_cvector, var_237_string); // 0x1ae NEW_2
	var_238_int = 536556; // 0x1b0 PushI
	SetMessage(var_238_int); // 0x1b1 TObjFunc
	ClearReplies(); // 0x1b3 TObjFunc
	var_239_int = 536559; // 0x1b5 PushI
	var_240_int = 38372; // 0x1b6 PushI
	var_241_int = 38371; // 0x1b7 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x1b8 TObjFunc
	return 0; // 0x1ba Return
	
Label_443:
	var_242_int = 38372; // 0x1bb PushI
	var_243_bool = var_26_bool == var_242_int; // 0x1bc Eq
	if(var_243_bool == 0) goto Label_461; // 0x1bd JumpB
	var_244_string = ""; // 0x1be PushV
	var_244_string = "Neutral"; // 0x1bf MovS
	func_197(var_27_cvector, var_244_string); // 0x1c0 NEW_2
	var_245_int = 536560; // 0x1c2 PushI
	SetMessage(var_245_int); // 0x1c3 TObjFunc
	ClearReplies(); // 0x1c5 TObjFunc
	var_246_int = 533539; // 0x1c7 PushI
	var_247_int = -1; // 0x1c8 PushI
	var_248_int = 35071; // 0x1c9 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x1ca TObjFunc
	return 0; // 0x1cc Return
	
Label_461:
	var_249_int = 15156; // 0x1cd PushI
	var_250_bool = var_26_bool == var_249_int; // 0x1ce Eq
	if(var_250_bool == 0) goto Label_484; // 0x1cf JumpB
	var_251_string = ""; // 0x1d0 PushV
	var_251_string = "Neutral"; // 0x1d1 MovS
	func_197(var_27_cvector, var_251_string); // 0x1d2 NEW_2
	var_252_int = 513925; // 0x1d4 PushI
	SetMessage(var_252_int); // 0x1d5 TObjFunc
	ClearReplies(); // 0x1d7 TObjFunc
	var_253_int = 513926; // 0x1d9 PushI
	var_254_int = 15158; // 0x1da PushI
	var_255_int = 15157; // 0x1db PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x1dc TObjFunc
	var_256_int = 513946; // 0x1de PushI
	var_257_int = 15158; // 0x1df PushI
	var_258_int = 15180; // 0x1e0 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x1e1 TObjFunc
	return 0; // 0x1e3 Return
	
Label_484:
	var_259_int = 15158; // 0x1e4 PushI
	var_260_bool = var_26_bool == var_259_int; // 0x1e5 Eq
	if(var_260_bool == 0) goto Label_507; // 0x1e6 JumpB
	var_261_string = ""; // 0x1e7 PushV
	var_261_string = "Untrust"; // 0x1e8 MovS
	func_197(var_27_cvector, var_261_string); // 0x1e9 NEW_2
	var_262_int = 513927; // 0x1eb PushI
	SetMessage(var_262_int); // 0x1ec TObjFunc
	ClearReplies(); // 0x1ee TObjFunc
	var_263_int = 513928; // 0x1f0 PushI
	var_264_int = 15160; // 0x1f1 PushI
	var_265_int = 15159; // 0x1f2 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x1f3 TObjFunc
	var_266_int = 513945; // 0x1f5 PushI
	var_267_int = 15160; // 0x1f6 PushI
	var_268_int = 15178; // 0x1f7 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x1f8 TObjFunc
	return 0; // 0x1fa Return
	
Label_507:
	var_269_int = 15160; // 0x1fb PushI
	var_270_bool = var_26_bool == var_269_int; // 0x1fc Eq
	if(var_270_bool == 0) goto Label_530; // 0x1fd JumpB
	var_271_string = ""; // 0x1fe PushV
	var_271_string = "Untrust"; // 0x1ff MovS
	func_197(var_27_cvector, var_271_string); // 0x200 NEW_2
	var_272_int = 513929; // 0x202 PushI
	SetMessage(var_272_int); // 0x203 TObjFunc
	ClearReplies(); // 0x205 TObjFunc
	var_273_int = 513930; // 0x207 PushI
	var_274_int = 15162; // 0x208 PushI
	var_275_int = 15161; // 0x209 PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x20a TObjFunc
	var_276_int = 513944; // 0x20c PushI
	var_277_int = 15162; // 0x20d PushI
	var_278_int = 15176; // 0x20e PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x20f TObjFunc
	return 0; // 0x211 Return
	
Label_530:
	var_279_int = 15162; // 0x212 PushI
	var_280_bool = var_26_bool == var_279_int; // 0x213 Eq
	if(var_280_bool == 0) goto Label_553; // 0x214 JumpB
	var_281_string = ""; // 0x215 PushV
	var_281_string = "Neutral"; // 0x216 MovS
	func_197(var_27_cvector, var_281_string); // 0x217 NEW_2
	var_282_int = 513931; // 0x219 PushI
	SetMessage(var_282_int); // 0x21a TObjFunc
	ClearReplies(); // 0x21c TObjFunc
	var_283_int = 513932; // 0x21e PushI
	var_284_int = 15164; // 0x21f PushI
	var_285_int = 15163; // 0x220 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x221 TObjFunc
	var_286_int = 513941; // 0x223 PushI
	var_287_int = 15173; // 0x224 PushI
	var_288_int = 15172; // 0x225 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x226 TObjFunc
	return 0; // 0x228 Return
	
Label_553:
	var_289_int = 15173; // 0x229 PushI
	var_290_bool = var_26_bool == var_289_int; // 0x22a Eq
	if(var_290_bool == 0) goto Label_571; // 0x22b JumpB
	var_291_string = ""; // 0x22c PushV
	var_291_string = "Neutral"; // 0x22d MovS
	func_197(var_27_cvector, var_291_string); // 0x22e NEW_2
	var_292_int = 513942; // 0x230 PushI
	SetMessage(var_292_int); // 0x231 TObjFunc
	ClearReplies(); // 0x233 TObjFunc
	var_293_int = 513943; // 0x235 PushI
	var_294_int = 15166; // 0x236 PushI
	var_295_int = 15174; // 0x237 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x238 TObjFunc
	return 0; // 0x23a Return
	
Label_571:
	var_296_int = 15164; // 0x23b PushI
	var_297_bool = var_26_bool == var_296_int; // 0x23c Eq
	if(var_297_bool == 0) goto Label_589; // 0x23d JumpB
	var_298_string = ""; // 0x23e PushV
	var_298_string = "Neutral"; // 0x23f MovS
	func_197(var_27_cvector, var_298_string); // 0x240 NEW_2
	var_299_int = 513933; // 0x242 PushI
	SetMessage(var_299_int); // 0x243 TObjFunc
	ClearReplies(); // 0x245 TObjFunc
	var_300_int = 513934; // 0x247 PushI
	var_301_int = 15166; // 0x248 PushI
	var_302_int = 15165; // 0x249 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x24a TObjFunc
	return 0; // 0x24c Return
	
Label_589:
	var_303_int = 15166; // 0x24d PushI
	var_304_bool = var_26_bool == var_303_int; // 0x24e Eq
	if(var_304_bool == 0) goto Label_607; // 0x24f JumpB
	var_305_string = ""; // 0x250 PushV
	var_305_string = "Untrust"; // 0x251 MovS
	func_197(var_27_cvector, var_305_string); // 0x252 NEW_2
	var_306_int = 513935; // 0x254 PushI
	SetMessage(var_306_int); // 0x255 TObjFunc
	ClearReplies(); // 0x257 TObjFunc
	var_307_int = 513936; // 0x259 PushI
	var_308_int = 15168; // 0x25a PushI
	var_309_int = 15167; // 0x25b PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x25c TObjFunc
	return 0; // 0x25e Return
	
Label_607:
	var_310_int = 15168; // 0x25f PushI
	var_311_bool = var_26_bool == var_310_int; // 0x260 Eq
	if(var_311_bool == 0) goto Label_625; // 0x261 JumpB
	var_312_string = ""; // 0x262 PushV
	var_312_string = "Neutral"; // 0x263 MovS
	func_197(var_27_cvector, var_312_string); // 0x264 NEW_2
	var_313_int = 513937; // 0x266 PushI
	SetMessage(var_313_int); // 0x267 TObjFunc
	ClearReplies(); // 0x269 TObjFunc
	var_314_int = 513938; // 0x26b PushI
	var_315_int = 15170; // 0x26c PushI
	var_316_int = 15169; // 0x26d PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x26e TObjFunc
	return 0; // 0x270 Return
	
Label_625:
	var_317_int = 15170; // 0x271 PushI
	var_318_bool = var_26_bool == var_317_int; // 0x272 Eq
	if(var_318_bool == 0) goto Label_643; // 0x273 JumpB
	var_319_string = ""; // 0x274 PushV
	var_319_string = "Neutral"; // 0x275 MovS
	func_197(var_27_cvector, var_319_string); // 0x276 NEW_2
	var_320_int = 513939; // 0x278 PushI
	SetMessage(var_320_int); // 0x279 TObjFunc
	ClearReplies(); // 0x27b TObjFunc
	var_321_int = 513940; // 0x27d PushI
	var_322_int = -1; // 0x27e PushI
	var_323_int = 15171; // 0x27f PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x280 TObjFunc
	return 0; // 0x282 Return
	
Label_643:
	var_324_int = 15138; // 0x283 PushI
	var_325_bool = var_26_bool == var_324_int; // 0x284 Eq
	if(var_325_bool == 0) goto Label_661; // 0x285 JumpB
	var_326_string = ""; // 0x286 PushV
	var_326_string = "Untrust"; // 0x287 MovS
	func_197(var_27_cvector, var_326_string); // 0x288 NEW_2
	var_327_int = 513907; // 0x28a PushI
	SetMessage(var_327_int); // 0x28b TObjFunc
	ClearReplies(); // 0x28d TObjFunc
	var_328_int = 513908; // 0x28f PushI
	var_329_int = 15140; // 0x290 PushI
	var_330_int = 15139; // 0x291 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0x292 TObjFunc
	return 0; // 0x294 Return
	
Label_661:
	var_331_int = 15140; // 0x295 PushI
	var_332_bool = var_26_bool == var_331_int; // 0x296 Eq
	if(var_332_bool == 0) goto Label_679; // 0x297 JumpB
	var_333_string = ""; // 0x298 PushV
	var_333_string = "Untrust"; // 0x299 MovS
	func_197(var_27_cvector, var_333_string); // 0x29a NEW_2
	var_334_int = 513909; // 0x29c PushI
	SetMessage(var_334_int); // 0x29d TObjFunc
	ClearReplies(); // 0x29f TObjFunc
	var_335_int = 513910; // 0x2a1 PushI
	var_336_int = 15142; // 0x2a2 PushI
	var_337_int = 15141; // 0x2a3 PushI
	AddReply(var_335_int, var_336_int, var_337_int); // 0x2a4 TObjFunc
	return 0; // 0x2a6 Return
	
Label_679:
	var_338_int = 15142; // 0x2a7 PushI
	var_339_bool = var_26_bool == var_338_int; // 0x2a8 Eq
	if(var_339_bool == 0) goto Label_702; // 0x2a9 JumpB
	var_340_string = ""; // 0x2aa PushV
	var_340_string = "Neutral"; // 0x2ab MovS
	func_197(var_27_cvector, var_340_string); // 0x2ac NEW_2
	var_341_int = 513911; // 0x2ae PushI
	SetMessage(var_341_int); // 0x2af TObjFunc
	ClearReplies(); // 0x2b1 TObjFunc
	var_342_int = 513912; // 0x2b3 PushI
	var_343_int = 15144; // 0x2b4 PushI
	var_344_int = 15143; // 0x2b5 PushI
	AddReply(var_342_int, var_343_int, var_344_int); // 0x2b6 TObjFunc
	var_345_int = 513920; // 0x2b8 PushI
	var_346_int = 15152; // 0x2b9 PushI
	var_347_int = 15151; // 0x2ba PushI
	AddReply(var_345_int, var_346_int, var_347_int); // 0x2bb TObjFunc
	return 0; // 0x2bd Return
	
Label_702:
	var_348_int = 15152; // 0x2be PushI
	var_349_bool = var_26_bool == var_348_int; // 0x2bf Eq
	if(var_349_bool == 0) goto Label_720; // 0x2c0 JumpB
	var_350_string = ""; // 0x2c1 PushV
	var_350_string = "Neutral"; // 0x2c2 MovS
	func_197(var_27_cvector, var_350_string); // 0x2c3 NEW_2
	var_351_int = 513921; // 0x2c5 PushI
	SetMessage(var_351_int); // 0x2c6 TObjFunc
	ClearReplies(); // 0x2c8 TObjFunc
	var_352_int = 513922; // 0x2ca PushI
	var_353_int = 15154; // 0x2cb PushI
	var_354_int = 15153; // 0x2cc PushI
	AddReply(var_352_int, var_353_int, var_354_int); // 0x2cd TObjFunc
	return 0; // 0x2cf Return
	
Label_720:
	var_355_int = 15154; // 0x2d0 PushI
	var_356_bool = var_26_bool == var_355_int; // 0x2d1 Eq
	if(var_356_bool == 0) goto Label_738; // 0x2d2 JumpB
	var_357_string = ""; // 0x2d3 PushV
	var_357_string = "Neutral"; // 0x2d4 MovS
	func_197(var_27_cvector, var_357_string); // 0x2d5 NEW_2
	var_358_int = 513923; // 0x2d7 PushI
	SetMessage(var_358_int); // 0x2d8 TObjFunc
	ClearReplies(); // 0x2da TObjFunc
	var_359_int = 514067; // 0x2dc PushI
	var_360_int = -1; // 0x2dd PushI
	var_361_int = 15304; // 0x2de PushI
	AddReply(var_359_int, var_360_int, var_361_int); // 0x2df TObjFunc
	return 0; // 0x2e1 Return
	
Label_738:
	var_362_int = 15144; // 0x2e2 PushI
	var_363_bool = var_26_bool == var_362_int; // 0x2e3 Eq
	if(var_363_bool == 0) goto Label_761; // 0x2e4 JumpB
	var_364_string = ""; // 0x2e5 PushV
	var_364_string = "Neutral"; // 0x2e6 MovS
	func_197(var_27_cvector, var_364_string); // 0x2e7 NEW_2
	var_365_int = 513913; // 0x2e9 PushI
	SetMessage(var_365_int); // 0x2ea TObjFunc
	ClearReplies(); // 0x2ec TObjFunc
	var_366_int = 513914; // 0x2ee PushI
	var_367_int = 15146; // 0x2ef PushI
	var_368_int = 15145; // 0x2f0 PushI
	AddReply(var_366_int, var_367_int, var_368_int); // 0x2f1 TObjFunc
	var_369_int = 513919; // 0x2f3 PushI
	var_370_int = -1; // 0x2f4 PushI
	var_371_int = 15150; // 0x2f5 PushI
	AddReply(var_369_int, var_370_int, var_371_int); // 0x2f6 TObjFunc
	return 0; // 0x2f8 Return
	
Label_761:
	var_372_int = 15146; // 0x2f9 PushI
	var_373_bool = var_26_bool == var_372_int; // 0x2fa Eq
	if(var_373_bool == 0) goto Label_779; // 0x2fb JumpB
	var_374_string = ""; // 0x2fc PushV
	var_374_string = "Neutral"; // 0x2fd MovS
	func_197(var_27_cvector, var_374_string); // 0x2fe NEW_2
	var_375_int = 513915; // 0x300 PushI
	SetMessage(var_375_int); // 0x301 TObjFunc
	ClearReplies(); // 0x303 TObjFunc
	var_376_int = 513916; // 0x305 PushI
	var_377_int = 15148; // 0x306 PushI
	var_378_int = 15147; // 0x307 PushI
	AddReply(var_376_int, var_377_int, var_378_int); // 0x308 TObjFunc
	return 0; // 0x30a Return
	
Label_779:
	var_379_int = 15148; // 0x30b PushI
	var_380_bool = var_26_bool == var_379_int; // 0x30c Eq
	if(var_380_bool == 0) goto Label_797; // 0x30d JumpB
	var_381_string = ""; // 0x30e PushV
	var_381_string = "Neutral"; // 0x30f MovS
	func_197(var_27_cvector, var_381_string); // 0x310 NEW_2
	var_382_int = 513917; // 0x312 PushI
	SetMessage(var_382_int); // 0x313 TObjFunc
	ClearReplies(); // 0x315 TObjFunc
	var_383_int = 513918; // 0x317 PushI
	var_384_int = -1; // 0x318 PushI
	var_385_int = 15149; // 0x319 PushI
	AddReply(var_383_int, var_384_int, var_385_int); // 0x31a TObjFunc
	return 0; // 0x31c Return
	
Label_797:
	var_386_int = 15111; // 0x31d PushI
	var_387_bool = var_26_bool == var_386_int; // 0x31e Eq
	if(var_387_bool == 0) goto Label_820; // 0x31f JumpB
	var_388_string = ""; // 0x320 PushV
	var_388_string = "Neutral"; // 0x321 MovS
	func_197(var_27_cvector, var_388_string); // 0x322 NEW_2
	var_389_int = 513884; // 0x324 PushI
	SetMessage(var_389_int); // 0x325 TObjFunc
	ClearReplies(); // 0x327 TObjFunc
	var_390_int = 513885; // 0x329 PushI
	var_391_int = 15113; // 0x32a PushI
	var_392_int = 15112; // 0x32b PushI
	AddReply(var_390_int, var_391_int, var_392_int); // 0x32c TObjFunc
	var_393_int = 513905; // 0x32e PushI
	var_394_int = 15113; // 0x32f PushI
	var_395_int = 15135; // 0x330 PushI
	AddReply(var_393_int, var_394_int, var_395_int); // 0x331 TObjFunc
	return 0; // 0x333 Return
	
Label_820:
	var_396_int = 15113; // 0x334 PushI
	var_397_bool = var_26_bool == var_396_int; // 0x335 Eq
	if(var_397_bool == 0) goto Label_843; // 0x336 JumpB
	var_398_string = ""; // 0x337 PushV
	var_398_string = "Neutral"; // 0x338 MovS
	func_197(var_27_cvector, var_398_string); // 0x339 NEW_2
	var_399_int = 513886; // 0x33b PushI
	SetMessage(var_399_int); // 0x33c TObjFunc
	ClearReplies(); // 0x33e TObjFunc
	var_400_int = 513887; // 0x340 PushI
	var_401_int = 15115; // 0x341 PushI
	var_402_int = 15114; // 0x342 PushI
	AddReply(var_400_int, var_401_int, var_402_int); // 0x343 TObjFunc
	var_403_int = 513899; // 0x345 PushI
	var_404_int = 15128; // 0x346 PushI
	var_405_int = 15127; // 0x347 PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x348 TObjFunc
	return 0; // 0x34a Return
	
Label_843:
	var_406_int = 15128; // 0x34b PushI
	var_407_bool = var_26_bool == var_406_int; // 0x34c Eq
	if(var_407_bool == 0) goto Label_866; // 0x34d JumpB
	var_408_string = ""; // 0x34e PushV
	var_408_string = "Doubt"; // 0x34f MovS
	func_197(var_27_cvector, var_408_string); // 0x350 NEW_2
	var_409_int = 513900; // 0x352 PushI
	SetMessage(var_409_int); // 0x353 TObjFunc
	ClearReplies(); // 0x355 TObjFunc
	var_410_int = 513901; // 0x357 PushI
	var_411_int = 15130; // 0x358 PushI
	var_412_int = 15129; // 0x359 PushI
	AddReply(var_410_int, var_411_int, var_412_int); // 0x35a TObjFunc
	var_413_int = 513904; // 0x35c PushI
	var_414_int = 15115; // 0x35d PushI
	var_415_int = 15133; // 0x35e PushI
	AddReply(var_413_int, var_414_int, var_415_int); // 0x35f TObjFunc
	return 0; // 0x361 Return
	
Label_866:
	var_416_int = 15130; // 0x362 PushI
	var_417_bool = var_26_bool == var_416_int; // 0x363 Eq
	if(var_417_bool == 0) goto Label_884; // 0x364 JumpB
	var_418_string = ""; // 0x365 PushV
	var_418_string = "Neutral"; // 0x366 MovS
	func_197(var_27_cvector, var_418_string); // 0x367 NEW_2
	var_419_int = 513902; // 0x369 PushI
	SetMessage(var_419_int); // 0x36a TObjFunc
	ClearReplies(); // 0x36c TObjFunc
	var_420_int = 513903; // 0x36e PushI
	var_421_int = 15121; // 0x36f PushI
	var_422_int = 15131; // 0x370 PushI
	AddReply(var_420_int, var_421_int, var_422_int); // 0x371 TObjFunc
	return 0; // 0x373 Return
	
Label_884:
	var_423_int = 15115; // 0x374 PushI
	var_424_bool = var_26_bool == var_423_int; // 0x375 Eq
	if(var_424_bool == 0) goto Label_907; // 0x376 JumpB
	var_425_string = ""; // 0x377 PushV
	var_425_string = "Neutral"; // 0x378 MovS
	func_197(var_27_cvector, var_425_string); // 0x379 NEW_2
	var_426_int = 513888; // 0x37b PushI
	SetMessage(var_426_int); // 0x37c TObjFunc
	ClearReplies(); // 0x37e TObjFunc
	var_427_int = 513889; // 0x380 PushI
	var_428_int = 15117; // 0x381 PushI
	var_429_int = 15116; // 0x382 PushI
	AddReply(var_427_int, var_428_int, var_429_int); // 0x383 TObjFunc
	var_430_int = 513898; // 0x385 PushI
	var_431_int = 15117; // 0x386 PushI
	var_432_int = 15125; // 0x387 PushI
	AddReply(var_430_int, var_431_int, var_432_int); // 0x388 TObjFunc
	return 0; // 0x38a Return
	
Label_907:
	var_433_int = 15117; // 0x38b PushI
	var_434_bool = var_26_bool == var_433_int; // 0x38c Eq
	if(var_434_bool == 0) goto Label_930; // 0x38d JumpB
	var_435_string = ""; // 0x38e PushV
	var_435_string = "Neutral"; // 0x38f MovS
	func_197(var_27_cvector, var_435_string); // 0x390 NEW_2
	var_436_int = 513890; // 0x392 PushI
	SetMessage(var_436_int); // 0x393 TObjFunc
	ClearReplies(); // 0x395 TObjFunc
	var_437_int = 513891; // 0x397 PushI
	var_438_int = 15119; // 0x398 PushI
	var_439_int = 15118; // 0x399 PushI
	AddReply(var_437_int, var_438_int, var_439_int); // 0x39a TObjFunc
	var_440_int = 513897; // 0x39c PushI
	var_441_int = 15121; // 0x39d PushI
	var_442_int = 15124; // 0x39e PushI
	AddReply(var_440_int, var_441_int, var_442_int); // 0x39f TObjFunc
	return 0; // 0x3a1 Return
	
Label_930:
	var_443_int = 15119; // 0x3a2 PushI
	var_444_bool = var_26_bool == var_443_int; // 0x3a3 Eq
	if(var_444_bool == 0) goto Label_948; // 0x3a4 JumpB
	var_445_string = ""; // 0x3a5 PushV
	var_445_string = "Neutral"; // 0x3a6 MovS
	func_197(var_27_cvector, var_445_string); // 0x3a7 NEW_2
	var_446_int = 513892; // 0x3a9 PushI
	SetMessage(var_446_int); // 0x3aa TObjFunc
	ClearReplies(); // 0x3ac TObjFunc
	var_447_int = 513893; // 0x3ae PushI
	var_448_int = 15121; // 0x3af PushI
	var_449_int = 15120; // 0x3b0 PushI
	AddReply(var_447_int, var_448_int, var_449_int); // 0x3b1 TObjFunc
	return 0; // 0x3b3 Return
	
Label_948:
	var_450_int = 15121; // 0x3b4 PushI
	var_451_bool = var_26_bool == var_450_int; // 0x3b5 Eq
	if(var_451_bool == 0) goto Label_971; // 0x3b6 JumpB
	var_452_string = ""; // 0x3b7 PushV
	var_452_string = "Neutral"; // 0x3b8 MovS
	func_197(var_27_cvector, var_452_string); // 0x3b9 NEW_2
	var_453_int = 513894; // 0x3bb PushI
	SetMessage(var_453_int); // 0x3bc TObjFunc
	ClearReplies(); // 0x3be TObjFunc
	var_454_int = 513895; // 0x3c0 PushI
	var_455_int = -1; // 0x3c1 PushI
	var_456_int = 15122; // 0x3c2 PushI
	AddReply(var_454_int, var_455_int, var_456_int); // 0x3c3 TObjFunc
	var_457_int = 513896; // 0x3c5 PushI
	var_458_int = -1; // 0x3c6 PushI
	var_459_int = 15123; // 0x3c7 PushI
	AddReply(var_457_int, var_458_int, var_459_int); // 0x3c8 TObjFunc
	return 0; // 0x3ca Return
	
Label_971:
	var_3_string = 1; // 0x3cb TMovB
	var_460_bool = 0; // 0x3cc PushV
	func_3536(var_460_bool); // 0x3cd NEW_2
	if(var_460_bool == 0) goto Label_979; // 0x3cf JumpB
	lshStopAnimation(); // 0x3d0 Func
	goto Label_981; // 0x3d2 Jump
	
Label_981:
	return 0; // 0x3d5 Return
	
Label_979:
	StopAnimation(); // 0x3d3 Func
	
Label_983:
	return 0; // 0x3d7 Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x4ae PushI
	if(var_28_int == 0) goto Label_1752; // 0x4af JumpB
	func_3397(); // 0x4b1 NEW_2
	var_30_int = 15501; // 0x4b3 PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x4b4 Eq
	if(var_31_bool == 0) goto Label_1211; // 0x4b5 JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x4b6 PushV
	var_32_object = var_1_object; // 0x4b7 MovT
	var_33_object = var_0_object; // 0x4b8 MovT
	func_3630(); // 0x4b9 NEW_2
	
Label_1211:
	var_36_int = 15528; // 0x4bb PushI
	var_37_bool = var_27_cvector == var_36_int; // 0x4bc Eq
	if(var_37_bool == 0) goto Label_1224; // 0x4bd JumpB
	var_38_object = Obj(); var_39_object = Obj(); // 0x4be PushV
	var_38_object = var_1_object; // 0x4bf MovT
	var_39_object = var_0_object; // 0x4c0 MovT
	func_3636(); // 0x4c1 NEW_2
	var_42_object = Obj(); var_43_object = Obj(); // 0x4c3 PushV
	var_42_object = var_1_object; // 0x4c4 MovT
	var_43_object = var_0_object; // 0x4c5 MovT
	func_3591(); // 0x4c6 NEW_2
	
Label_1224:
	var_46_int = 15539; // 0x4c8 PushI
	var_47_bool = var_27_cvector == var_46_int; // 0x4c9 Eq
	if(var_47_bool == 0) goto Label_1232; // 0x4ca JumpB
	var_48_object = Obj(); var_49_object = Obj(); // 0x4cb PushV
	var_48_object = var_1_object; // 0x4cc MovT
	var_49_object = var_0_object; // 0x4cd MovT
	func_3642(); // 0x4ce NEW_2
	
Label_1232:
	var_52_int = 15500; // 0x4d0 PushI
	var_53_bool = var_26_bool == var_52_int; // 0x4d1 Eq
	if(var_53_bool == 0) goto Label_1307; // 0x4d2 JumpB
	var_54_string = ""; // 0x4d3 PushV
	var_54_string = "Neutral"; // 0x4d4 MovS
	func_1175(var_27_cvector, var_54_string); // 0x4d5 NEW_2
	var_71_int = 514280; // 0x4d7 PushI
	SetMessage(var_71_int); // 0x4d8 TObjFunc
	ClearReplies(); // 0x4da TObjFunc
	var_72_bool = 0; // 0x4dc PushV
	var_72_bool = 0; // 0x4dd MovB
	var_73_bool = 0; var_74_object = Obj(); // 0x4de PushV
	var_74_object = var_1_object; // 0x4df MovT
	func_3771(var_74_object); // 0x4e0 NEW_2
	if(var_73_bool == 0) goto Label_1257; // 0x4e2 JumpB
	var_81_bool = 0; var_82_object = Obj(); // 0x4e3 PushV
	var_82_object = var_1_object; // 0x4e4 MovT
	func_3783(var_82_object); // 0x4e5 NEW_2
	if(var_81_bool == 0) goto Label_1257; // 0x4e7 JumpB
	var_72_bool = 1; // 0x4e8 MovB
	
Label_1257:
	if(var_72_bool == 0) goto Label_1263; // 0x4e9 JumpB
	var_87_int = 514281; // 0x4ea PushI
	var_88_int = 15502; // 0x4eb PushI
	var_89_int = 15501; // 0x4ec PushI
	AddReply(var_87_int, var_88_int, var_89_int); // 0x4ed TObjFunc
	
Label_1263:
	var_90_bool = 0; // 0x4ef PushV
	var_90_bool = 0; // 0x4f0 MovB
	var_91_bool = 0; var_92_object = Obj(); // 0x4f1 PushV
	var_92_object = var_1_object; // 0x4f2 MovT
	func_3795(var_92_object); // 0x4f3 NEW_2
	if(var_91_bool == 0) goto Label_1276; // 0x4f5 JumpB
	var_97_bool = 0; var_98_object = Obj(); // 0x4f6 PushV
	var_98_object = var_1_object; // 0x4f7 MovT
	func_3807(var_98_object); // 0x4f8 NEW_2
	if(var_97_bool == 0) goto Label_1276; // 0x4fa JumpB
	var_90_bool = 1; // 0x4fb MovB
	
Label_1276:
	if(var_90_bool == 0) goto Label_1282; // 0x4fc JumpB
	var_103_int = 514306; // 0x4fd PushI
	var_104_int = 15529; // 0x4fe PushI
	var_105_int = 15528; // 0x4ff PushI
	AddReply(var_103_int, var_104_int, var_105_int); // 0x500 TObjFunc
	
Label_1282:
	var_106_bool = 0; // 0x502 PushV
	var_106_bool = 0; // 0x503 MovB
	var_107_bool = 0; var_108_object = Obj(); // 0x504 PushV
	var_108_object = var_1_object; // 0x505 MovT
	func_3759(var_108_object); // 0x506 NEW_2
	if(var_107_bool == 0) goto Label_1295; // 0x508 JumpB
	var_113_bool = 0; var_114_object = Obj(); // 0x509 PushV
	var_114_object = var_1_object; // 0x50a MovT
	func_3819(var_114_object); // 0x50b NEW_2
	if(var_113_bool == 0) goto Label_1295; // 0x50d JumpB
	var_106_bool = 1; // 0x50e MovB
	
Label_1295:
	if(var_106_bool == 0) goto Label_1301; // 0x50f JumpB
	var_119_int = 514317; // 0x510 PushI
	var_120_int = 15540; // 0x511 PushI
	var_121_int = 15539; // 0x512 PushI
	AddReply(var_119_int, var_120_int, var_121_int); // 0x513 TObjFunc
	
Label_1301:
	var_122_int = 514324; // 0x515 PushI
	var_123_int = -1; // 0x516 PushI
	var_124_int = 15546; // 0x517 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x518 TObjFunc
	return 0; // 0x51a Return
	
Label_1307:
	var_125_int = 15540; // 0x51b PushI
	var_126_bool = var_26_bool == var_125_int; // 0x51c Eq
	if(var_126_bool == 0) goto Label_1330; // 0x51d JumpB
	var_127_string = ""; // 0x51e PushV
	var_127_string = "Neutral"; // 0x51f MovS
	func_1175(var_27_cvector, var_127_string); // 0x520 NEW_2
	var_128_int = 514318; // 0x522 PushI
	SetMessage(var_128_int); // 0x523 TObjFunc
	ClearReplies(); // 0x525 TObjFunc
	var_129_int = 514319; // 0x527 PushI
	var_130_int = 15542; // 0x528 PushI
	var_131_int = 15541; // 0x529 PushI
	AddReply(var_129_int, var_130_int, var_131_int); // 0x52a TObjFunc
	var_132_int = 539610; // 0x52c PushI
	var_133_int = 41557; // 0x52d PushI
	var_134_int = 41556; // 0x52e PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x52f TObjFunc
	return 0; // 0x531 Return
	
Label_1330:
	var_135_int = 41557; // 0x532 PushI
	var_136_bool = var_26_bool == var_135_int; // 0x533 Eq
	if(var_136_bool == 0) goto Label_1348; // 0x534 JumpB
	var_137_string = ""; // 0x535 PushV
	var_137_string = "Neutral"; // 0x536 MovS
	func_1175(var_27_cvector, var_137_string); // 0x537 NEW_2
	var_138_int = 539611; // 0x539 PushI
	SetMessage(var_138_int); // 0x53a TObjFunc
	ClearReplies(); // 0x53c TObjFunc
	var_139_int = 539729; // 0x53e PushI
	var_140_int = 15542; // 0x53f PushI
	var_141_int = 41692; // 0x540 PushI
	AddReply(var_139_int, var_140_int, var_141_int); // 0x541 TObjFunc
	return 0; // 0x543 Return
	
Label_1348:
	var_142_int = 15542; // 0x544 PushI
	var_143_bool = var_26_bool == var_142_int; // 0x545 Eq
	if(var_143_bool == 0) goto Label_1366; // 0x546 JumpB
	var_144_string = ""; // 0x547 PushV
	var_144_string = "Doubt"; // 0x548 MovS
	func_1175(var_27_cvector, var_144_string); // 0x549 NEW_2
	var_145_int = 514320; // 0x54b PushI
	SetMessage(var_145_int); // 0x54c TObjFunc
	ClearReplies(); // 0x54e TObjFunc
	var_146_int = 514321; // 0x550 PushI
	var_147_int = 15544; // 0x551 PushI
	var_148_int = 15543; // 0x552 PushI
	AddReply(var_146_int, var_147_int, var_148_int); // 0x553 TObjFunc
	return 0; // 0x555 Return
	
Label_1366:
	var_149_int = 15544; // 0x556 PushI
	var_150_bool = var_26_bool == var_149_int; // 0x557 Eq
	if(var_150_bool == 0) goto Label_1389; // 0x558 JumpB
	var_151_string = ""; // 0x559 PushV
	var_151_string = "Doubt"; // 0x55a MovS
	func_1175(var_27_cvector, var_151_string); // 0x55b NEW_2
	var_152_int = 514322; // 0x55d PushI
	SetMessage(var_152_int); // 0x55e TObjFunc
	ClearReplies(); // 0x560 TObjFunc
	var_153_int = 514323; // 0x562 PushI
	var_154_int = 41695; // 0x563 PushI
	var_155_int = 15545; // 0x564 PushI
	AddReply(var_153_int, var_154_int, var_155_int); // 0x565 TObjFunc
	var_156_int = 539730; // 0x567 PushI
	var_157_int = -1; // 0x568 PushI
	var_158_int = 41694; // 0x569 PushI
	AddReply(var_156_int, var_157_int, var_158_int); // 0x56a TObjFunc
	return 0; // 0x56c Return
	
Label_1389:
	var_159_int = 41695; // 0x56d PushI
	var_160_bool = var_26_bool == var_159_int; // 0x56e Eq
	if(var_160_bool == 0) goto Label_1412; // 0x56f JumpB
	var_161_string = ""; // 0x570 PushV
	var_161_string = "Neutral"; // 0x571 MovS
	func_1175(var_27_cvector, var_161_string); // 0x572 NEW_2
	var_162_int = 539731; // 0x574 PushI
	SetMessage(var_162_int); // 0x575 TObjFunc
	ClearReplies(); // 0x577 TObjFunc
	var_163_int = 539732; // 0x579 PushI
	var_164_int = -1; // 0x57a PushI
	var_165_int = 41696; // 0x57b PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x57c TObjFunc
	var_166_int = 539733; // 0x57e PushI
	var_167_int = -1; // 0x57f PushI
	var_168_int = 41697; // 0x580 PushI
	AddReply(var_166_int, var_167_int, var_168_int); // 0x581 TObjFunc
	return 0; // 0x583 Return
	
Label_1412:
	var_169_int = 15529; // 0x584 PushI
	var_170_bool = var_26_bool == var_169_int; // 0x585 Eq
	if(var_170_bool == 0) goto Label_1430; // 0x586 JumpB
	var_171_string = ""; // 0x587 PushV
	var_171_string = "Neutral"; // 0x588 MovS
	func_1175(var_27_cvector, var_171_string); // 0x589 NEW_2
	var_172_int = 514307; // 0x58b PushI
	SetMessage(var_172_int); // 0x58c TObjFunc
	ClearReplies(); // 0x58e TObjFunc
	var_173_int = 514308; // 0x590 PushI
	var_174_int = 15531; // 0x591 PushI
	var_175_int = 15530; // 0x592 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x593 TObjFunc
	return 0; // 0x595 Return
	
Label_1430:
	var_176_int = 15531; // 0x596 PushI
	var_177_bool = var_26_bool == var_176_int; // 0x597 Eq
	if(var_177_bool == 0) goto Label_1448; // 0x598 JumpB
	var_178_string = ""; // 0x599 PushV
	var_178_string = "Agression"; // 0x59a MovS
	func_1175(var_27_cvector, var_178_string); // 0x59b NEW_2
	var_179_int = 514309; // 0x59d PushI
	SetMessage(var_179_int); // 0x59e TObjFunc
	ClearReplies(); // 0x5a0 TObjFunc
	var_180_int = 514310; // 0x5a2 PushI
	var_181_int = 15533; // 0x5a3 PushI
	var_182_int = 15532; // 0x5a4 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x5a5 TObjFunc
	return 0; // 0x5a7 Return
	
Label_1448:
	var_183_int = 15533; // 0x5a8 PushI
	var_184_bool = var_26_bool == var_183_int; // 0x5a9 Eq
	if(var_184_bool == 0) goto Label_1471; // 0x5aa JumpB
	var_185_string = ""; // 0x5ab PushV
	var_185_string = "Agression"; // 0x5ac MovS
	func_1175(var_27_cvector, var_185_string); // 0x5ad NEW_2
	var_186_int = 514311; // 0x5af PushI
	SetMessage(var_186_int); // 0x5b0 TObjFunc
	ClearReplies(); // 0x5b2 TObjFunc
	var_187_int = 514312; // 0x5b4 PushI
	var_188_int = 15535; // 0x5b5 PushI
	var_189_int = 15534; // 0x5b6 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x5b7 TObjFunc
	var_190_int = 539728; // 0x5b9 PushI
	var_191_int = -1; // 0x5ba PushI
	var_192_int = 41691; // 0x5bb PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x5bc TObjFunc
	return 0; // 0x5be Return
	
Label_1471:
	var_193_int = 15535; // 0x5bf PushI
	var_194_bool = var_26_bool == var_193_int; // 0x5c0 Eq
	if(var_194_bool == 0) goto Label_1489; // 0x5c1 JumpB
	var_195_string = ""; // 0x5c2 PushV
	var_195_string = "Agression"; // 0x5c3 MovS
	func_1175(var_27_cvector, var_195_string); // 0x5c4 NEW_2
	var_196_int = 514313; // 0x5c6 PushI
	SetMessage(var_196_int); // 0x5c7 TObjFunc
	ClearReplies(); // 0x5c9 TObjFunc
	var_197_int = 514314; // 0x5cb PushI
	var_198_int = 15537; // 0x5cc PushI
	var_199_int = 15536; // 0x5cd PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x5ce TObjFunc
	return 0; // 0x5d0 Return
	
Label_1489:
	var_200_int = 15537; // 0x5d1 PushI
	var_201_bool = var_26_bool == var_200_int; // 0x5d2 Eq
	if(var_201_bool == 0) goto Label_1512; // 0x5d3 JumpB
	var_202_string = ""; // 0x5d4 PushV
	var_202_string = "Agression"; // 0x5d5 MovS
	func_1175(var_27_cvector, var_202_string); // 0x5d6 NEW_2
	var_203_int = 514315; // 0x5d8 PushI
	SetMessage(var_203_int); // 0x5d9 TObjFunc
	ClearReplies(); // 0x5db TObjFunc
	var_204_int = 514316; // 0x5dd PushI
	var_205_int = -1; // 0x5de PushI
	var_206_int = 15538; // 0x5df PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x5e0 TObjFunc
	var_207_int = 539727; // 0x5e2 PushI
	var_208_int = -1; // 0x5e3 PushI
	var_209_int = 41690; // 0x5e4 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x5e5 TObjFunc
	return 0; // 0x5e7 Return
	
Label_1512:
	var_210_int = 15502; // 0x5e8 PushI
	var_211_bool = var_26_bool == var_210_int; // 0x5e9 Eq
	if(var_211_bool == 0) goto Label_1535; // 0x5ea JumpB
	var_212_string = ""; // 0x5eb PushV
	var_212_string = "Untrust"; // 0x5ec MovS
	func_1175(var_27_cvector, var_212_string); // 0x5ed NEW_2
	var_213_int = 514282; // 0x5ef PushI
	SetMessage(var_213_int); // 0x5f0 TObjFunc
	ClearReplies(); // 0x5f2 TObjFunc
	var_214_int = 514283; // 0x5f4 PushI
	var_215_int = 15504; // 0x5f5 PushI
	var_216_int = 15503; // 0x5f6 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x5f7 TObjFunc
	var_217_int = 539903; // 0x5f9 PushI
	var_218_int = 41864; // 0x5fa PushI
	var_219_int = 41863; // 0x5fb PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x5fc TObjFunc
	return 0; // 0x5fe Return
	
Label_1535:
	var_220_int = 41864; // 0x5ff PushI
	var_221_bool = var_26_bool == var_220_int; // 0x600 Eq
	if(var_221_bool == 0) goto Label_1553; // 0x601 JumpB
	var_222_string = ""; // 0x602 PushV
	var_222_string = "Neutral"; // 0x603 MovS
	func_1175(var_27_cvector, var_222_string); // 0x604 NEW_2
	var_223_int = 539904; // 0x606 PushI
	SetMessage(var_223_int); // 0x607 TObjFunc
	ClearReplies(); // 0x609 TObjFunc
	var_224_int = 539905; // 0x60b PushI
	var_225_int = 15504; // 0x60c PushI
	var_226_int = 41865; // 0x60d PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x60e TObjFunc
	return 0; // 0x610 Return
	
Label_1553:
	var_227_int = 15504; // 0x611 PushI
	var_228_bool = var_26_bool == var_227_int; // 0x612 Eq
	if(var_228_bool == 0) goto Label_1576; // 0x613 JumpB
	var_229_string = ""; // 0x614 PushV
	var_229_string = "Untrust"; // 0x615 MovS
	func_1175(var_27_cvector, var_229_string); // 0x616 NEW_2
	var_230_int = 514284; // 0x618 PushI
	SetMessage(var_230_int); // 0x619 TObjFunc
	ClearReplies(); // 0x61b TObjFunc
	var_231_int = 514285; // 0x61d PushI
	var_232_int = 15506; // 0x61e PushI
	var_233_int = 15505; // 0x61f PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x620 TObjFunc
	var_234_int = 514290; // 0x622 PushI
	var_235_int = 15511; // 0x623 PushI
	var_236_int = 15510; // 0x624 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x625 TObjFunc
	return 0; // 0x627 Return
	
Label_1576:
	var_237_int = 15511; // 0x628 PushI
	var_238_bool = var_26_bool == var_237_int; // 0x629 Eq
	if(var_238_bool == 0) goto Label_1599; // 0x62a JumpB
	var_239_string = ""; // 0x62b PushV
	var_239_string = "Neutral"; // 0x62c MovS
	func_1175(var_27_cvector, var_239_string); // 0x62d NEW_2
	var_240_int = 514291; // 0x62f PushI
	SetMessage(var_240_int); // 0x630 TObjFunc
	ClearReplies(); // 0x632 TObjFunc
	var_241_int = 514292; // 0x634 PushI
	var_242_int = 15513; // 0x635 PushI
	var_243_int = 15512; // 0x636 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x637 TObjFunc
	var_244_int = 514299; // 0x639 PushI
	var_245_int = 15520; // 0x63a PushI
	var_246_int = 15519; // 0x63b PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x63c TObjFunc
	return 0; // 0x63e Return
	
Label_1599:
	var_247_int = 15520; // 0x63f PushI
	var_248_bool = var_26_bool == var_247_int; // 0x640 Eq
	if(var_248_bool == 0) goto Label_1622; // 0x641 JumpB
	var_249_string = ""; // 0x642 PushV
	var_249_string = "Untrust"; // 0x643 MovS
	func_1175(var_27_cvector, var_249_string); // 0x644 NEW_2
	var_250_int = 514300; // 0x646 PushI
	SetMessage(var_250_int); // 0x647 TObjFunc
	ClearReplies(); // 0x649 TObjFunc
	var_251_int = 514301; // 0x64b PushI
	var_252_int = 15513; // 0x64c PushI
	var_253_int = 15521; // 0x64d PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x64e TObjFunc
	var_254_int = 514302; // 0x650 PushI
	var_255_int = 15524; // 0x651 PushI
	var_256_int = 15523; // 0x652 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x653 TObjFunc
	return 0; // 0x655 Return
	
Label_1622:
	var_257_int = 15524; // 0x656 PushI
	var_258_bool = var_26_bool == var_257_int; // 0x657 Eq
	if(var_258_bool == 0) goto Label_1645; // 0x658 JumpB
	var_259_string = ""; // 0x659 PushV
	var_259_string = "Neutral"; // 0x65a MovS
	func_1175(var_27_cvector, var_259_string); // 0x65b NEW_2
	var_260_int = 514303; // 0x65d PushI
	SetMessage(var_260_int); // 0x65e TObjFunc
	ClearReplies(); // 0x660 TObjFunc
	var_261_int = 514304; // 0x662 PushI
	var_262_int = 15513; // 0x663 PushI
	var_263_int = 15525; // 0x664 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x665 TObjFunc
	var_264_int = 514305; // 0x667 PushI
	var_265_int = -1; // 0x668 PushI
	var_266_int = 15527; // 0x669 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x66a TObjFunc
	return 0; // 0x66c Return
	
Label_1645:
	var_267_int = 15513; // 0x66d PushI
	var_268_bool = var_26_bool == var_267_int; // 0x66e Eq
	if(var_268_bool == 0) goto Label_1663; // 0x66f JumpB
	var_269_string = ""; // 0x670 PushV
	var_269_string = "Untrust"; // 0x671 MovS
	func_1175(var_27_cvector, var_269_string); // 0x672 NEW_2
	var_270_int = 514293; // 0x674 PushI
	SetMessage(var_270_int); // 0x675 TObjFunc
	ClearReplies(); // 0x677 TObjFunc
	var_271_int = 514294; // 0x679 PushI
	var_272_int = 15515; // 0x67a PushI
	var_273_int = 15514; // 0x67b PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x67c TObjFunc
	return 0; // 0x67e Return
	
Label_1663:
	var_274_int = 15515; // 0x67f PushI
	var_275_bool = var_26_bool == var_274_int; // 0x680 Eq
	if(var_275_bool == 0) goto Label_1681; // 0x681 JumpB
	var_276_string = ""; // 0x682 PushV
	var_276_string = "Neutral"; // 0x683 MovS
	func_1175(var_27_cvector, var_276_string); // 0x684 NEW_2
	var_277_int = 514295; // 0x686 PushI
	SetMessage(var_277_int); // 0x687 TObjFunc
	ClearReplies(); // 0x689 TObjFunc
	var_278_int = 514296; // 0x68b PushI
	var_279_int = 15517; // 0x68c PushI
	var_280_int = 15516; // 0x68d PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x68e TObjFunc
	return 0; // 0x690 Return
	
Label_1681:
	var_281_int = 15517; // 0x691 PushI
	var_282_bool = var_26_bool == var_281_int; // 0x692 Eq
	if(var_282_bool == 0) goto Label_1699; // 0x693 JumpB
	var_283_string = ""; // 0x694 PushV
	var_283_string = "Neutral"; // 0x695 MovS
	func_1175(var_27_cvector, var_283_string); // 0x696 NEW_2
	var_284_int = 514297; // 0x698 PushI
	SetMessage(var_284_int); // 0x699 TObjFunc
	ClearReplies(); // 0x69b TObjFunc
	var_285_int = 514298; // 0x69d PushI
	var_286_int = -1; // 0x69e PushI
	var_287_int = 15518; // 0x69f PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x6a0 TObjFunc
	return 0; // 0x6a2 Return
	
Label_1699:
	var_288_int = 15506; // 0x6a3 PushI
	var_289_bool = var_26_bool == var_288_int; // 0x6a4 Eq
	if(var_289_bool == 0) goto Label_1717; // 0x6a5 JumpB
	var_290_string = ""; // 0x6a6 PushV
	var_290_string = "Neutral"; // 0x6a7 MovS
	func_1175(var_27_cvector, var_290_string); // 0x6a8 NEW_2
	var_291_int = 514286; // 0x6aa PushI
	SetMessage(var_291_int); // 0x6ab TObjFunc
	ClearReplies(); // 0x6ad TObjFunc
	var_292_int = 514287; // 0x6af PushI
	var_293_int = 15508; // 0x6b0 PushI
	var_294_int = 15507; // 0x6b1 PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x6b2 TObjFunc
	return 0; // 0x6b4 Return
	
Label_1717:
	var_295_int = 15508; // 0x6b5 PushI
	var_296_bool = var_26_bool == var_295_int; // 0x6b6 Eq
	if(var_296_bool == 0) goto Label_1740; // 0x6b7 JumpB
	var_297_string = ""; // 0x6b8 PushV
	var_297_string = "Neutral"; // 0x6b9 MovS
	func_1175(var_27_cvector, var_297_string); // 0x6ba NEW_2
	var_298_int = 514288; // 0x6bc PushI
	SetMessage(var_298_int); // 0x6bd TObjFunc
	ClearReplies(); // 0x6bf TObjFunc
	var_299_int = 514289; // 0x6c1 PushI
	var_300_int = -1; // 0x6c2 PushI
	var_301_int = 15509; // 0x6c3 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x6c4 TObjFunc
	var_302_int = 539734; // 0x6c6 PushI
	var_303_int = -1; // 0x6c7 PushI
	var_304_int = 41698; // 0x6c8 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x6c9 TObjFunc
	return 0; // 0x6cb Return
	
Label_1740:
	var_3_string = 1; // 0x6cc TMovB
	var_305_bool = 0; // 0x6cd PushV
	func_3536(var_305_bool); // 0x6ce NEW_2
	if(var_305_bool == 0) goto Label_1748; // 0x6d0 JumpB
	lshStopAnimation(); // 0x6d1 Func
	goto Label_1750; // 0x6d3 Jump
	
Label_1750:
	return 0; // 0x6d6 Return
	
Label_1748:
	StopAnimation(); // 0x6d4 Func
	
Label_1752:
	return 0; // 0x6d8 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x785 PushI
	if(var_28_int == 0) goto Label_2160; // 0x786 JumpB
	func_3397(); // 0x788 NEW_2
	var_30_int = 35743; // 0x78a PushI
	var_31_bool = var_27_cvector == var_30_int; // 0x78b Eq
	if(var_31_bool == 0) goto Label_1938; // 0x78c JumpB
	var_32_object = Obj(); var_33_object = Obj(); // 0x78d PushV
	var_32_object = var_1_object; // 0x78e MovT
	var_33_object = var_0_object; // 0x78f MovT
	func_3570(); // 0x790 NEW_2
	
Label_1938:
	var_66_int = 38363; // 0x792 PushI
	var_67_bool = var_27_cvector == var_66_int; // 0x793 Eq
	if(var_67_bool == 0) goto Label_1946; // 0x794 JumpB
	var_68_object = Obj(); var_69_object = Obj(); // 0x795 PushV
	var_68_object = var_1_object; // 0x796 MovT
	var_69_object = var_0_object; // 0x797 MovT
	func_3570(); // 0x798 NEW_2
	
Label_1946:
	var_70_int = 35739; // 0x79a PushI
	var_71_bool = var_26_bool == var_70_int; // 0x79b Eq
	if(var_71_bool == 0) goto Label_1979; // 0x79c JumpB
	var_72_string = ""; // 0x79d PushV
	var_72_string = "Neutral"; // 0x79e MovS
	func_1902(var_27_cvector, var_72_string); // 0x79f NEW_2
	var_89_int = 534152; // 0x7a1 PushI
	SetMessage(var_89_int); // 0x7a2 TObjFunc
	ClearReplies(); // 0x7a4 TObjFunc
	var_90_bool = 0; var_91_object = Obj(); // 0x7a6 PushV
	var_91_object = var_1_object; // 0x7a7 MovT
	func_3711(var_91_object); // 0x7a8 NEW_2
	if(var_90_bool == 0) goto Label_1968; // 0x7aa JumpB
	var_98_int = 534153; // 0x7ab PushI
	var_99_int = 38340; // 0x7ac PushI
	var_100_int = 35740; // 0x7ad PushI
	AddReply(var_98_int, var_99_int, var_100_int); // 0x7ae TObjFunc
	
Label_1968:
	var_101_int = 534154; // 0x7b0 PushI
	var_102_int = -1; // 0x7b1 PushI
	var_103_int = 35741; // 0x7b2 PushI
	AddReply(var_101_int, var_102_int, var_103_int); // 0x7b3 TObjFunc
	var_104_int = 536532; // 0x7b5 PushI
	var_105_int = -1; // 0x7b6 PushI
	var_106_int = 38339; // 0x7b7 PushI
	AddReply(var_104_int, var_105_int, var_106_int); // 0x7b8 TObjFunc
	return 0; // 0x7ba Return
	
Label_1979:
	var_107_int = 38340; // 0x7bb PushI
	var_108_bool = var_26_bool == var_107_int; // 0x7bc Eq
	if(var_108_bool == 0) goto Label_2002; // 0x7bd JumpB
	var_109_string = ""; // 0x7be PushV
	var_109_string = "Neutral"; // 0x7bf MovS
	func_1902(var_27_cvector, var_109_string); // 0x7c0 NEW_2
	var_110_int = 536533; // 0x7c2 PushI
	SetMessage(var_110_int); // 0x7c3 TObjFunc
	ClearReplies(); // 0x7c5 TObjFunc
	var_111_int = 536534; // 0x7c7 PushI
	var_112_int = 38342; // 0x7c8 PushI
	var_113_int = 38341; // 0x7c9 PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x7ca TObjFunc
	var_114_int = 536539; // 0x7cc PushI
	var_115_int = 38347; // 0x7cd PushI
	var_116_int = 38346; // 0x7ce PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x7cf TObjFunc
	return 0; // 0x7d1 Return
	
Label_2002:
	var_117_int = 38347; // 0x7d2 PushI
	var_118_bool = var_26_bool == var_117_int; // 0x7d3 Eq
	if(var_118_bool == 0) goto Label_2025; // 0x7d4 JumpB
	var_119_string = ""; // 0x7d5 PushV
	var_119_string = "Doubt"; // 0x7d6 MovS
	func_1902(var_27_cvector, var_119_string); // 0x7d7 NEW_2
	var_120_int = 536540; // 0x7d9 PushI
	SetMessage(var_120_int); // 0x7da TObjFunc
	ClearReplies(); // 0x7dc TObjFunc
	var_121_int = 536541; // 0x7de PushI
	var_122_int = 38351; // 0x7df PushI
	var_123_int = 38348; // 0x7e0 PushI
	AddReply(var_121_int, var_122_int, var_123_int); // 0x7e1 TObjFunc
	var_124_int = 536542; // 0x7e3 PushI
	var_125_int = -1; // 0x7e4 PushI
	var_126_int = 38349; // 0x7e5 PushI
	AddReply(var_124_int, var_125_int, var_126_int); // 0x7e6 TObjFunc
	return 0; // 0x7e8 Return
	
Label_2025:
	var_127_int = 38342; // 0x7e9 PushI
	var_128_bool = var_26_bool == var_127_int; // 0x7ea Eq
	if(var_128_bool == 0) goto Label_2048; // 0x7eb JumpB
	var_129_string = ""; // 0x7ec PushV
	var_129_string = "Neutral"; // 0x7ed MovS
	func_1902(var_27_cvector, var_129_string); // 0x7ee NEW_2
	var_130_int = 536535; // 0x7f0 PushI
	SetMessage(var_130_int); // 0x7f1 TObjFunc
	ClearReplies(); // 0x7f3 TObjFunc
	var_131_int = 536536; // 0x7f5 PushI
	var_132_int = 38344; // 0x7f6 PushI
	var_133_int = 38343; // 0x7f7 PushI
	AddReply(var_131_int, var_132_int, var_133_int); // 0x7f8 TObjFunc
	var_134_int = 536543; // 0x7fa PushI
	var_135_int = 38351; // 0x7fb PushI
	var_136_int = 38350; // 0x7fc PushI
	AddReply(var_134_int, var_135_int, var_136_int); // 0x7fd TObjFunc
	return 0; // 0x7ff Return
	
Label_2048:
	var_137_int = 38344; // 0x800 PushI
	var_138_bool = var_26_bool == var_137_int; // 0x801 Eq
	if(var_138_bool == 0) goto Label_2066; // 0x802 JumpB
	var_139_string = ""; // 0x803 PushV
	var_139_string = "Neutral"; // 0x804 MovS
	func_1902(var_27_cvector, var_139_string); // 0x805 NEW_2
	var_140_int = 536537; // 0x807 PushI
	SetMessage(var_140_int); // 0x808 TObjFunc
	ClearReplies(); // 0x80a TObjFunc
	var_141_int = 536538; // 0x80c PushI
	var_142_int = 38351; // 0x80d PushI
	var_143_int = 38345; // 0x80e PushI
	AddReply(var_141_int, var_142_int, var_143_int); // 0x80f TObjFunc
	return 0; // 0x811 Return
	
Label_2066:
	var_144_int = 38351; // 0x812 PushI
	var_145_bool = var_26_bool == var_144_int; // 0x813 Eq
	if(var_145_bool == 0) goto Label_2089; // 0x814 JumpB
	var_146_string = ""; // 0x815 PushV
	var_146_string = "Neutral"; // 0x816 MovS
	func_1902(var_27_cvector, var_146_string); // 0x817 NEW_2
	var_147_int = 536544; // 0x819 PushI
	SetMessage(var_147_int); // 0x81a TObjFunc
	ClearReplies(); // 0x81c TObjFunc
	var_148_int = 536545; // 0x81e PushI
	var_149_int = 38359; // 0x81f PushI
	var_150_int = 38352; // 0x820 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x821 TObjFunc
	var_151_int = 536546; // 0x823 PushI
	var_152_int = 38358; // 0x824 PushI
	var_153_int = 38355; // 0x825 PushI
	AddReply(var_151_int, var_152_int, var_153_int); // 0x826 TObjFunc
	return 0; // 0x828 Return
	
Label_2089:
	var_154_int = 38358; // 0x829 PushI
	var_155_bool = var_26_bool == var_154_int; // 0x82a Eq
	if(var_155_bool == 0) goto Label_2107; // 0x82b JumpB
	var_156_string = ""; // 0x82c PushV
	var_156_string = "Neutral"; // 0x82d MovS
	func_1902(var_27_cvector, var_156_string); // 0x82e NEW_2
	var_157_int = 536548; // 0x830 PushI
	SetMessage(var_157_int); // 0x831 TObjFunc
	ClearReplies(); // 0x833 TObjFunc
	var_158_int = 536550; // 0x835 PushI
	var_159_int = 35742; // 0x836 PushI
	var_160_int = 38360; // 0x837 PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x838 TObjFunc
	return 0; // 0x83a Return
	
Label_2107:
	var_161_int = 38359; // 0x83b PushI
	var_162_bool = var_26_bool == var_161_int; // 0x83c Eq
	if(var_162_bool == 0) goto Label_2125; // 0x83d JumpB
	var_163_string = ""; // 0x83e PushV
	var_163_string = "Neutral"; // 0x83f MovS
	func_1902(var_27_cvector, var_163_string); // 0x840 NEW_2
	var_164_int = 536549; // 0x842 PushI
	SetMessage(var_164_int); // 0x843 TObjFunc
	ClearReplies(); // 0x845 TObjFunc
	var_165_int = 536551; // 0x847 PushI
	var_166_int = 35742; // 0x848 PushI
	var_167_int = 38361; // 0x849 PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x84a TObjFunc
	return 0; // 0x84c Return
	
Label_2125:
	var_168_int = 35742; // 0x84d PushI
	var_169_bool = var_26_bool == var_168_int; // 0x84e Eq
	if(var_169_bool == 0) goto Label_2148; // 0x84f JumpB
	var_170_string = ""; // 0x850 PushV
	var_170_string = "Doubt"; // 0x851 MovS
	func_1902(var_27_cvector, var_170_string); // 0x852 NEW_2
	var_171_int = 534155; // 0x854 PushI
	SetMessage(var_171_int); // 0x855 TObjFunc
	ClearReplies(); // 0x857 TObjFunc
	var_172_int = 534156; // 0x859 PushI
	var_173_int = -1; // 0x85a PushI
	var_174_int = 35743; // 0x85b PushI
	AddReply(var_172_int, var_173_int, var_174_int); // 0x85c TObjFunc
	var_175_int = 536552; // 0x85e PushI
	var_176_int = -1; // 0x85f PushI
	var_177_int = 38363; // 0x860 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x861 TObjFunc
	return 0; // 0x863 Return
	
Label_2148:
	var_3_string = 1; // 0x864 TMovB
	var_178_bool = 0; // 0x865 PushV
	func_3536(var_178_bool); // 0x866 NEW_2
	if(var_178_bool == 0) goto Label_2156; // 0x868 JumpB
	lshStopAnimation(); // 0x869 Func
	goto Label_2158; // 0x86b Jump
	
Label_2158:
	return 0; // 0x86e Return
	
Label_2156:
	StopAnimation(); // 0x86c Func
	
Label_2160:
	return 0; // 0x870 Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_object, var_23_object, var_24_object, var_25_string, var_26_bool, var_27_cvector)
{
	var_28_int = 1; // 0x94a PushI
	if(var_28_int == 0) goto Label_2634; // 0x94b JumpB
	func_3397(); // 0x94d NEW_2
	var_30_int = 37192; // 0x94f PushI
	var_31_bool = var_26_bool == var_30_int; // 0x950 Eq
	if(var_31_bool == 0) goto Label_2461; // 0x951 JumpB
	var_32_bool = 0; // 0x952 PushV
	var_32_bool = 0; // 0x953 MovB
	var_33_bool = 0; var_34_object = Obj(); // 0x954 PushV
	var_34_object = var_1_object; // 0x955 MovT
	func_3723(var_34_object); // 0x956 NEW_2
	if(var_33_bool == 0) goto Label_2400; // 0x958 JumpB
	var_41_bool = 0; var_42_object = Obj(); // 0x959 PushV
	var_42_object = var_1_object; // 0x95a MovT
	func_3665(var_41_bool, var_42_object); // 0x95b NEW_2
	var_52_bool = var_41_bool == 0; // 0x95d Not
	if(var_52_bool == 0) goto Label_2400; // 0x95e JumpB
	var_32_bool = 1; // 0x95f MovB
	
Label_2400:
	if(var_32_bool == 0) goto Label_2421; // 0x960 JumpB
	var_53_object = Obj(); var_54_object = Obj(); // 0x961 PushV
	var_53_object = var_1_object; // 0x962 MovT
	var_54_object = var_0_object; // 0x963 MovT
	func_3585(); // 0x964 NEW_2
	var_57_string = ""; // 0x966 PushV
	var_57_string = "Neutral"; // 0x967 MovS
	func_2355(var_27_cvector, var_57_string); // 0x968 NEW_2
	var_74_int = 535510; // 0x96a PushI
	SetMessage(var_74_int); // 0x96b TObjFunc
	ClearReplies(); // 0x96d TObjFunc
	var_75_int = 535511; // 0x96f PushI
	var_76_int = 37194; // 0x970 PushI
	var_77_int = 37193; // 0x971 PushI
	AddReply(var_75_int, var_76_int, var_77_int); // 0x972 TObjFunc
	return 0; // 0x974 Return
	
Label_2421:
	var_78_bool = 0; var_79_object = Obj(); // 0x975 PushV
	var_79_object = var_1_object; // 0x976 MovT
	func_3665(var_78_bool, var_79_object); // 0x977 NEW_2
	if(var_78_bool == 0) goto Label_2446; // 0x979 JumpB
	var_80_string = ""; // 0x97a PushV
	var_80_string = "Neutral"; // 0x97b MovS
	func_2355(var_27_cvector, var_80_string); // 0x97c NEW_2
	var_81_int = 535528; // 0x97e PushI
	SetMessage(var_81_int); // 0x97f TObjFunc
	ClearReplies(); // 0x981 TObjFunc
	var_82_int = 535529; // 0x983 PushI
	var_83_int = -1; // 0x984 PushI
	var_84_int = 37212; // 0x985 PushI
	AddReply(var_82_int, var_83_int, var_84_int); // 0x986 TObjFunc
	var_85_int = 535530; // 0x988 PushI
	var_86_int = -1; // 0x989 PushI
	var_87_int = 37213; // 0x98a PushI
	AddReply(var_85_int, var_86_int, var_87_int); // 0x98b TObjFunc
	return 0; // 0x98d Return
	
Label_2446:
	var_88_string = ""; // 0x98e PushV
	var_88_string = "Neutral"; // 0x98f MovS
	func_2355(var_27_cvector, var_88_string); // 0x990 NEW_2
	var_89_int = 535531; // 0x992 PushI
	SetMessage(var_89_int); // 0x993 TObjFunc
	ClearReplies(); // 0x995 TObjFunc
	var_90_int = 535539; // 0x997 PushI
	var_91_int = -1; // 0x998 PushI
	var_92_int = 37222; // 0x999 PushI
	AddReply(var_90_int, var_91_int, var_92_int); // 0x99a TObjFunc
	return 0; // 0x99c Return
	
Label_2461:
	var_93_int = 37194; // 0x99d PushI
	var_94_bool = var_26_bool == var_93_int; // 0x99e Eq
	if(var_94_bool == 0) goto Label_2484; // 0x99f JumpB
	var_95_string = ""; // 0x9a0 PushV
	var_95_string = "Neutral"; // 0x9a1 MovS
	func_2355(var_27_cvector, var_95_string); // 0x9a2 NEW_2
	var_96_int = 535512; // 0x9a4 PushI
	SetMessage(var_96_int); // 0x9a5 TObjFunc
	ClearReplies(); // 0x9a7 TObjFunc
	var_97_int = 535513; // 0x9a9 PushI
	var_98_int = 37196; // 0x9aa PushI
	var_99_int = 37195; // 0x9ab PushI
	AddReply(var_97_int, var_98_int, var_99_int); // 0x9ac TObjFunc
	var_100_int = 535525; // 0x9ae PushI
	var_101_int = 37208; // 0x9af PushI
	var_102_int = 37207; // 0x9b0 PushI
	AddReply(var_100_int, var_101_int, var_102_int); // 0x9b1 TObjFunc
	return 0; // 0x9b3 Return
	
Label_2484:
	var_103_int = 37208; // 0x9b4 PushI
	var_104_bool = var_26_bool == var_103_int; // 0x9b5 Eq
	if(var_104_bool == 0) goto Label_2507; // 0x9b6 JumpB
	var_105_string = ""; // 0x9b7 PushV
	var_105_string = "Neutral"; // 0x9b8 MovS
	func_2355(var_27_cvector, var_105_string); // 0x9b9 NEW_2
	var_106_int = 535526; // 0x9bb PushI
	SetMessage(var_106_int); // 0x9bc TObjFunc
	ClearReplies(); // 0x9be TObjFunc
	var_107_int = 535527; // 0x9c0 PushI
	var_108_int = 37196; // 0x9c1 PushI
	var_109_int = 37209; // 0x9c2 PushI
	AddReply(var_107_int, var_108_int, var_109_int); // 0x9c3 TObjFunc
	var_110_int = 539998; // 0x9c5 PushI
	var_111_int = 41968; // 0x9c6 PushI
	var_112_int = 41967; // 0x9c7 PushI
	AddReply(var_110_int, var_111_int, var_112_int); // 0x9c8 TObjFunc
	return 0; // 0x9ca Return
	
Label_2507:
	var_113_int = 41968; // 0x9cb PushI
	var_114_bool = var_26_bool == var_113_int; // 0x9cc Eq
	if(var_114_bool == 0) goto Label_2530; // 0x9cd JumpB
	var_115_string = ""; // 0x9ce PushV
	var_115_string = "Doubt"; // 0x9cf MovS
	func_2355(var_27_cvector, var_115_string); // 0x9d0 NEW_2
	var_116_int = 539999; // 0x9d2 PushI
	SetMessage(var_116_int); // 0x9d3 TObjFunc
	ClearReplies(); // 0x9d5 TObjFunc
	var_117_int = 540000; // 0x9d7 PushI
	var_118_int = 37196; // 0x9d8 PushI
	var_119_int = 41969; // 0x9d9 PushI
	AddReply(var_117_int, var_118_int, var_119_int); // 0x9da TObjFunc
	var_120_int = 540001; // 0x9dc PushI
	var_121_int = 37196; // 0x9dd PushI
	var_122_int = 41970; // 0x9de PushI
	AddReply(var_120_int, var_121_int, var_122_int); // 0x9df TObjFunc
	return 0; // 0x9e1 Return
	
Label_2530:
	var_123_int = 37196; // 0x9e2 PushI
	var_124_bool = var_26_bool == var_123_int; // 0x9e3 Eq
	if(var_124_bool == 0) goto Label_2553; // 0x9e4 JumpB
	var_125_string = ""; // 0x9e5 PushV
	var_125_string = "Neutral"; // 0x9e6 MovS
	func_2355(var_27_cvector, var_125_string); // 0x9e7 NEW_2
	var_126_int = 535514; // 0x9e9 PushI
	SetMessage(var_126_int); // 0x9ea TObjFunc
	ClearReplies(); // 0x9ec TObjFunc
	var_127_int = 535515; // 0x9ee PushI
	var_128_int = 37198; // 0x9ef PushI
	var_129_int = 37197; // 0x9f0 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x9f1 TObjFunc
	var_130_int = 535524; // 0x9f3 PushI
	var_131_int = -1; // 0x9f4 PushI
	var_132_int = 37206; // 0x9f5 PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x9f6 TObjFunc
	return 0; // 0x9f8 Return
	
Label_2553:
	var_133_int = 37198; // 0x9f9 PushI
	var_134_bool = var_26_bool == var_133_int; // 0x9fa Eq
	if(var_134_bool == 0) goto Label_2576; // 0x9fb JumpB
	var_135_string = ""; // 0x9fc PushV
	var_135_string = "Neutral"; // 0x9fd MovS
	func_2355(var_27_cvector, var_135_string); // 0x9fe NEW_2
	var_136_int = 535516; // 0xa00 PushI
	SetMessage(var_136_int); // 0xa01 TObjFunc
	ClearReplies(); // 0xa03 TObjFunc
	var_137_int = 535517; // 0xa05 PushI
	var_138_int = 37200; // 0xa06 PushI
	var_139_int = 37199; // 0xa07 PushI
	AddReply(var_137_int, var_138_int, var_139_int); // 0xa08 TObjFunc
	var_140_int = 535523; // 0xa0a PushI
	var_141_int = -1; // 0xa0b PushI
	var_142_int = 37205; // 0xa0c PushI
	AddReply(var_140_int, var_141_int, var_142_int); // 0xa0d TObjFunc
	return 0; // 0xa0f Return
	
Label_2576:
	var_143_int = 37200; // 0xa10 PushI
	var_144_bool = var_26_bool == var_143_int; // 0xa11 Eq
	if(var_144_bool == 0) goto Label_2599; // 0xa12 JumpB
	var_145_string = ""; // 0xa13 PushV
	var_145_string = "Neutral"; // 0xa14 MovS
	func_2355(var_27_cvector, var_145_string); // 0xa15 NEW_2
	var_146_int = 535518; // 0xa17 PushI
	SetMessage(var_146_int); // 0xa18 TObjFunc
	ClearReplies(); // 0xa1a TObjFunc
	var_147_int = 535519; // 0xa1c PushI
	var_148_int = 37202; // 0xa1d PushI
	var_149_int = 37201; // 0xa1e PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0xa1f TObjFunc
	var_150_int = 542998; // 0xa21 PushI
	var_151_int = -1; // 0xa22 PushI
	var_152_int = 45446; // 0xa23 PushI
	AddReply(var_150_int, var_151_int, var_152_int); // 0xa24 TObjFunc
	return 0; // 0xa26 Return
	
Label_2599:
	var_153_int = 37202; // 0xa27 PushI
	var_154_bool = var_26_bool == var_153_int; // 0xa28 Eq
	if(var_154_bool == 0) goto Label_2622; // 0xa29 JumpB
	var_155_string = ""; // 0xa2a PushV
	var_155_string = "Neutral"; // 0xa2b MovS
	func_2355(var_27_cvector, var_155_string); // 0xa2c NEW_2
	var_156_int = 535520; // 0xa2e PushI
	SetMessage(var_156_int); // 0xa2f TObjFunc
	ClearReplies(); // 0xa31 TObjFunc
	var_157_int = 535521; // 0xa33 PushI
	var_158_int = -1; // 0xa34 PushI
	var_159_int = 37203; // 0xa35 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0xa36 TObjFunc
	var_160_int = 535522; // 0xa38 PushI
	var_161_int = -1; // 0xa39 PushI
	var_162_int = 37204; // 0xa3a PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0xa3b TObjFunc
	return 0; // 0xa3d Return
	
Label_2622:
	var_3_string = 1; // 0xa3e TMovB
	var_163_bool = 0; // 0xa3f PushV
	func_3536(var_163_bool); // 0xa40 NEW_2
	if(var_163_bool == 0) goto Label_2630; // 0xa42 JumpB
	lshStopAnimation(); // 0xa43 Func
	goto Label_2632; // 0xa45 Jump
	
Label_2632:
	return 0; // 0xa48 Return
	
Label_2630:
	StopAnimation(); // 0xa46 Func
	
Label_2634:
	return 0; // 0xa4a Return
}


task_9_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_int, var_26_int, var_27_cvector)
{
	var_28_int = 1; // 0xaed PushI
	if(var_28_int == 0) goto Label_2837; // 0xaee JumpB
	func_3397(); // 0xaf0 NEW_2
	var_30_int = 42551; // 0xaf2 PushI
	var_31_bool = var_26_int == var_30_int; // 0xaf3 Eq
	if(var_31_bool == 0) goto Label_2825; // 0xaf4 JumpB
	var_32_string = ""; // 0xaf5 PushV
	var_32_string = "Neutral"; // 0xaf6 MovS
	func_2774(var_27_cvector, var_32_string); // 0xaf7 NEW_2
	var_49_int = 540542; // 0xaf9 PushI
	SetMessage(var_49_int); // 0xafa TObjFunc
	ClearReplies(); // 0xafc TObjFunc
	var_50_int = 540543; // 0xafe PushI
	var_51_int = -1; // 0xaff PushI
	var_52_int = 42552; // 0xb00 PushI
	AddReply(var_50_int, var_51_int, var_52_int); // 0xb01 TObjFunc
	var_53_int = 540796; // 0xb03 PushI
	var_54_int = -1; // 0xb04 PushI
	var_55_int = 42845; // 0xb05 PushI
	AddReply(var_53_int, var_54_int, var_55_int); // 0xb06 TObjFunc
	return 0; // 0xb08 Return
	
Label_2825:
	var_3_string = 1; // 0xb09 TMovB
	var_56_bool = 0; // 0xb0a PushV
	func_3536(var_56_bool); // 0xb0b NEW_2
	if(var_56_bool == 0) goto Label_2833; // 0xb0d JumpB
	lshStopAnimation(); // 0xb0e Func
	goto Label_2835; // 0xb10 Jump
	
Label_2835:
	return 0; // 0xb13 Return
	
Label_2833:
	StopAnimation(); // 0xb11 Func
	
Label_2837:
	return 0; // 0xb15 Return
}


task_10_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_int)
{
	var_27_int = 10; // 0xb60 PushI
	var_28_bool = var_26_int == var_27_int; // 0xb61 Eq
	if(var_28_bool == 0) goto Label_2948; // 0xb62 JumpB
	func_2907(); // 0xb64 NEW_2
	var_30_bool = 0; // 0xb66 PushV
	var_30_bool = 0; // 0xb67 MovB
	var_31_bool = 0; // 0xb68 PushV
	func_3121(var_31_bool); // 0xb69 NEW_2
	if(var_31_bool == 0) goto Label_2929; // 0xb6b JumpB
	var_34_bool = 0; // 0xb6c PushV
	func_2876(var_34_bool); // 0xb6d NEW_2
	if(var_34_bool == 0) goto Label_2929; // 0xb6f JumpB
	var_30_bool = 1; // 0xb70 MovB
	
Label_2929:
	if(var_30_bool == 0) goto Label_2942; // 0xb71 JumpB
	var_51_bool = 0; // 0xb72 PushV
	func_2856(var_51_bool); // 0xb73 NEW_2
	if(var_51_bool == 0) goto Label_2941; // 0xb75 JumpB
	var_70_bool = 0; var_71_object = Obj(); // 0xb76 PushV
	var_72_object = Obj(); // 0xb77 PushV
	func_3404(var_72_object); // 0xb78 NEW_2
	var_71_object = var_72_object; // 0xb79 Mov
	func_3271(var_71_object); // 0xb7b NEW_2
	
Label_2941:
	goto Label_2948; // 0xb7d Jump
	
Label_2948:
	return 0; // 0xb84 Return
	
Label_2942:
	func_2871(var_26_int); // 0xb7f NEW_2
	func_2898(); // 0xb82 NEW_2
}


task_10_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_3089(); // 0xb86 NEW_2
	func_2907(); // 0xb89 NEW_2
	lshStopSpeech(); // 0xb8b Func
	lshStopAnimation(); // 0xb8d Func
	StopAsync(); // 0xb8f Func
	Hold(); // 0xb91 Func
	return 0; // 0xb93 Return
}


task_10_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	StopGroup0(); // 0xb94 Func
	func_2907(); // 0xb97 NEW_2
	var_27_string = ""; // 0xb99 PushV
	var_27_string = "Neutral"; // 0xb9a MovS
	func_3351(var_27_string); // 0xb9b NEW_2
	func_2898(); // 0xb9e NEW_2
	return 0; // 0xba0 Return
}


task_10_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_bool)
{
	var_27_bool = var_26_bool; // 0xba2 Push
	if(var_27_bool == 0) goto Label_2984; // 0xba3 JumpB
	func_2898(); // 0xba5 NEW_2
	goto Label_2988; // 0xba7 Jump
	
Label_2988:
	return 0; // 0xbac Return
	
Label_2984:
	var_33_string = ""; // 0xba8 PushV
	var_33_string = "Neutral"; // 0xba9 MovS
	func_3351(var_33_string); // 0xbaa NEW_2
}


task_10_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0; // 0xbad PushV
	IsOverrideActive(var_28_bool); // 0xbae Func
	var_29_bool = var_28_bool == 0; // 0xbb0 Not
	if(var_29_bool == 0) goto Label_3017; // 0xbb1 JumpB
	EventDisable(0); // 0xbb2 EventDisable
	func_3089(); // 0xbb4 NEW_2
	var_30_bool = 0; var_31_object = Obj(); // 0xbb6 PushV
	var_31_object = var_26_object; // 0xbb7 Mov
	func_3112(var_31_object); // 0xbb8 NEW_2
	EventEnable(0); // 0xbba EventEnable
	var_44_object = Obj(); // 0xbbb PushV
	var_44_object = var_26_object; // 0xbbc Mov
	func_3938(var_44_object); // 0xbbd NEW_2
	var_645_string = ""; // 0xbbf PushV
	var_645_string = "Neutral"; // 0xbc0 MovS
	func_3351(var_645_string); // 0xbc1 NEW_2
	func_2907(); // 0xbc4 NEW_2
	func_2898(); // 0xbc7 NEW_2
	
Label_3017:
	return 2; // 0xbc9 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_object, var_21_object, var_22_object, var_23_string, var_24_bool, var_25_cvector)
{
	func_2842(var_25_cvector); // 0xb17 NEW_2
	return 0; // 0xb19 Return
}


func_0(var_0_object, var_53_int, var_54_object)
{
	var_56_object = Obj(); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_object = Obj(); var_61_bool = 0; var_62_int = 0; var_63_bool = 0; // 0x0 PushV
	var_0_object = var_54_object; // 0x1 TMov
	var_64_bool = 0; var_65_object = Obj(); var_66_float = 0; // 0x2 PushV
	var_65_object = var_54_object; // 0x3 Mov
	var_66_float = 70.0; // 0x4 MovF
	func_3126(var_65_object, var_66_float); // 0x5 NEW_2
	var_111_bool = var_64_bool == 0; // 0x7 Not
	if(var_111_bool == 0) goto Label_11; // 0x8 JumpB
	var_53_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_60_object); // 0xb Func
	var_112_int = 0; // 0xd PushV
	func_3530(var_112_int); // 0xe NEW_2
	SetNPCName(var_112_int); // 0x10 ObjFunc
	var_113_int = 0; // 0x12 PushV
	func_3528(var_113_int); // 0x13 NEW_2
	SetNPCDescription(var_113_int); // 0x15 ObjFunc
	var_114_string = ""; // 0x17 PushV
	func_3532(var_114_string); // 0x18 NEW_2
	SetPhoto(var_114_string); // 0x1a ObjFunc
	var_115_string = ""; // 0x1c PushV
	func_3534(var_115_string); // 0x1d NEW_2
	SetPhoto2(var_115_string); // 0x1f ObjFunc
	var_116_int = 0; // 0x21 PushV
	func_3921(var_116_int); // 0x22 NEW_2
	SetPlayerName(var_116_int); // 0x24 ObjFunc
	var_62_int = -1; // 0x26 MovI
	IsOverrideActive(var_61_bool); // 0x27 Func
	var_124_bool = var_61_bool; // 0x29 Push
	if(var_124_bool == 0) goto Label_45; // 0x2a JumpB
	var_53_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_60_object); // 0x2d Func
	var_125_bool = 0; var_126_object = Obj(); // 0x2f PushV
	var_127_object = Obj(); // 0x30 PushV
	func_3404(var_127_object); // 0x31 NEW_2
	var_126_object = var_127_object; // 0x32 Mov
	func_3213(var_125_bool, var_126_object); // 0x34 NEW_2
	var_215_object = Obj(); var_216_object = Obj(); // 0x36 PushV
	var_215_object = var_54_object; // 0x37 Mov
	var_216_object = var_60_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_217_object, var_218_object, var_219_string, var_220_bool, var_215_object, var_216_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_63_bool); // 0x3d ObjFunc
	
Label_63:
	var_317_bool = var_63_bool == 0; // 0x3f Not
	if(var_317_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_63_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_318_object = Obj(); // 0x46 PushV
	var_318_object = var_54_object; // 0x47 Mov
	func_3195(); // 0x48 NEW_2
	StopDialog(var_60_object); // 0x4a Func
	GetReturnValue(var_62_int); // 0x4c ObjFunc
	var_53_int = var_62_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_3585()
{
	var_550_string = "ood12Block1"; // 0xe02 PushS
	var_551_int = 1; // 0xe03 PushI
	SetVariable(var_550_string, var_551_int); // 0xe04 Func
	return 0; // 0xe06 Return
}


func_3843(var_538_bool)
{
	var_540_int = 0; // 0xf04 PushV
	func_3490(var_540_int); // 0xf05 NEW_2
	var_545_int = 19; // 0xf07 PushI
	var_546_bool = var_540_int >= var_545_int; // 0xf08 GE
	if(var_546_bool == 0) goto Label_3852; // 0xf09 JumpB
	var_538_bool = 1; // 0xf0a MovB
	return 0; // 0xf0b Return
	
Label_3852:
	var_538_bool = 0; // 0xf0c MovB
	return 0; // 0xf0d Return
}


func_3591()
{
	var_44_string = "d11RotaTalk"; // 0xe08 PushS
	var_45_int = 1; // 0xe09 PushI
	SetVariable(var_44_string, var_45_int); // 0xe0a Func
	return 0; // 0xe0c Return
}


func_3597()
{
	var_224_string = "d9TalkToPolkovodec"; // 0xe0e PushS
	var_225_int = 1; // 0xe0f PushI
	SetVariable(var_224_string, var_225_int); // 0xe10 Func
	return 0; // 0xe12 Return
}


func_3854()
{
	var_34_object = Obj(); var_35_object = Obj(); // 0xf0e PushV
	var_36_int = 676; // 0xf0f PushI
	var_37_int = 2; // 0xf10 PushI
	var_38_int = 534161; // 0xf11 PushI
	CreateDiaryEntry(var_35_object, var_36_int, var_37_int, var_38_int); // 0xf12 Func
	var_39_bool = 0; var_40_object = Obj(); var_41_int = 0; // 0xf14 PushV
	var_40_object = var_35_object; // 0xf15 Mov
	var_41_int = 672; // 0xf16 MovI
	func_3893(var_39_bool, var_40_object, var_41_int); // 0xf17 NEW_2
	return 2; // 0xf19 Return
}


func_3087(var_64_bool)
{
	var_64_bool = 1; // 0xc0f MovB
	return 0; // 0xc10 Return
}


func_3089()
{
	StopAnimation(); // 0xc11 Func
	StopGroup0(); // 0xc13 Func
	return 0; // 0xc15 Return
}


func_3603()
{
	var_40_string = "ood9Block1"; // 0xe14 PushS
	var_41_int = 1; // 0xe15 PushI
	SetVariable(var_40_string, var_41_int); // 0xe16 Func
	return 0; // 0xe18 Return
}


func_3094(var_41_float)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); // 0xc16 PushV
	GetPosition(var_46_cvector); // 0xc17 Func
	GetPosition(var_47_cvector); // 0xc19 ObjFunc
	var_48_cvector = var_47_cvector - var_46_cvector; // 0xc1b Sub2
	var_41_float = var_48_cvector | var_48_cvector; // 0xc1c Or2
	return 6; // 0xc1d Return
}


func_3351(var_301_string)
{
	var_302_bool = 0; var_303_float = 0; var_304_float = 0; var_305_bool = 0; var_306_float = 0; var_307_float = 0; // 0xd17 PushV
	lshHasAnimation(var_305_bool, var_301_string); // 0xd18 Func
	var_308_bool = var_305_bool; // 0xd1a Push
	if(var_308_bool == 0) goto Label_3362; // 0xd1b JumpB
	lshGetAnimTimes(var_301_string, var_306_float, var_307_float); // 0xd1c Func
	var_309_bool = 0; // 0xd1e PushB
	lshPlayAnimation(var_306_float, var_307_float, var_309_bool); // 0xd1f Func
	goto Label_3366; // 0xd21 Jump
	
Label_3366:
	return 6; // 0xd26 Return
	
Label_3362:
	var_310_string = "Can't find lsh animation : "; // 0xd22 PushS
	var_311_int = var_310_string + var_301_string; // 0xd23 Add
	Trace(var_311_int); // 0xd24 Func
}


func_3609(var_44_object)
{
	var_46_object = Obj(); var_47_object = Obj(); // 0xe19 PushV
	var_48_string = "Rifle is given"; // 0xe1a PushS
	Trace(var_48_string); // 0xe1b Func
	CreateInvItem(var_47_object); // 0xe1d Func
	var_49_string = "Rifle"; // 0xe1f PushS
	SetItemName(var_49_string); // 0xe20 ObjFunc
	var_50_string = "durability"; // 0xe22 PushS
	var_51_int = 100; // 0xe23 PushI
	SetProperty(var_50_string, var_51_int); // 0xe24 ObjFunc
	var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; // 0xe26 PushV
	var_52_object = var_44_object; // 0xe27 Mov
	var_53_object = var_47_object; // 0xe28 Mov
	var_54_int = 1; // 0xe29 MovI
	func_3437(var_53_object, var_54_int); // 0xe2a NEW_2
	return 2; // 0xe2c Return
}


func_2842(var_0_object)
{
	var_26_bool = 0; // 0xb1a PushV
	func_3121(var_26_bool); // 0xb1b NEW_2
	var_29_bool = var_26_bool == 0; // 0xb1d Not
	if(var_29_bool == 0) goto Label_2849; // 0xb1e JumpB
	Hold(); // 0xb1f Func
	
Label_2849:
	GetDirection(var_0_object); // 0xb21 Func
	
Label_2851:
	func_3018(); // 0xb24 NEW_2
	goto Label_2851; // 0xb26 Jump
}


func_3867()
{
	var_103_object = Obj(); var_104_object = Obj(); // 0xf1b PushV
	var_105_int = 657; // 0xf1c PushI
	var_106_int = 2; // 0xf1d PushI
	var_107_int = 533575; // 0xf1e PushI
	CreateDiaryEntry(var_104_object, var_105_int, var_106_int, var_107_int); // 0xf1f Func
	var_108_bool = 0; var_109_object = Obj(); var_110_int = 0; // 0xf21 PushV
	var_109_object = var_104_object; // 0xf22 Mov
	var_110_int = 655; // 0xf23 MovI
	func_3893(var_108_bool, var_109_object, var_110_int); // 0xf24 NEW_2
	return 2; // 0xf26 Return
}


func_3102(var_34_bool, var_35_cvector)
{
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; // 0xc1e PushV
	GetPosition(var_39_cvector); // 0xc1f Func
	var_40_cvector = var_35_cvector - var_39_cvector; // 0xc21 Sub2
	var_42_float = GetByIndex(var_40_cvector, 0); // 0xc22 PushE
	var_43_float = GetByIndex(var_40_cvector, 2); // 0xc23 PushE
	Rotate(var_42_float, var_43_float, var_41_bool); // 0xc24 Func
	var_34_bool = var_41_bool; // 0xc26 Mov
	return 6; // 0xc27 Return
}


func_3367(var_230_string, var_231_bool)
{
	var_234_bool = 0; var_235_float = 0; var_236_float = 0; var_237_bool = 0; var_238_float = 0; var_239_float = 0; // 0xd27 PushV
	lshHasAnimation(var_237_bool, var_230_string); // 0xd28 Func
	var_240_bool = var_237_bool; // 0xd2a Push
	if(var_240_bool == 0) goto Label_3377; // 0xd2b JumpB
	lshGetAnimTimes(var_230_string, var_238_float, var_239_float); // 0xd2c Func
	lshPlayAnimation(var_238_float, var_239_float, var_231_bool); // 0xd2e Func
	goto Label_3381; // 0xd30 Jump
	
Label_3381:
	return 6; // 0xd35 Return
	
Label_3377:
	var_241_string = "Can't find lsh animation : "; // 0xd31 PushS
	var_242_int = var_241_string + var_230_string; // 0xd32 Add
	Trace(var_242_int); // 0xd33 Func
}


func_3112(var_30_bool)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); // 0xc28 PushV
	GetPosition(var_33_cvector); // 0xc29 ObjFunc
	var_34_bool = 0; var_35_cvector = CVector(0,0,0); // 0xc2b PushV
	var_35_cvector = var_33_cvector; // 0xc2c Mov
	func_3102(var_34_bool, var_35_cvector); // 0xc2d NEW_2
	var_30_bool = var_34_bool; // 0xc2e Mov
	return 2; // 0xc30 Return
}


func_1065(var_0_object, var_1_object, var_2_object, var_3_string, var_419_object, var_420_object)
{
	var_0_object = var_420_object; // 0x42a TMov
	var_1_object = var_419_object; // 0x42b TMov
	var_3_string = 0; // 0x42c TMovB
	var_425_int = 1; // 0x42d PushI
	if(var_425_int == 0) goto Label_1145; // 0x42e JumpB
	var_426_string = ""; // 0x42f PushV
	var_426_string = "Neutral"; // 0x430 MovS
	func_1175(var_420_object, var_426_string); // 0x431 NEW_2
	var_434_int = 514280; // 0x433 PushI
	SetMessage(var_434_int); // 0x434 TObjFunc
	ClearReplies(); // 0x436 TObjFunc
	var_435_bool = 0; // 0x438 PushV
	var_435_bool = 0; // 0x439 MovB
	var_436_bool = 0; var_437_object = Obj(); // 0x43a PushV
	var_437_object = var_1_object; // 0x43b MovT
	func_3771(var_437_object); // 0x43c NEW_2
	if(var_436_bool == 0) goto Label_1093; // 0x43e JumpB
	var_442_bool = 0; var_443_object = Obj(); // 0x43f PushV
	var_443_object = var_1_object; // 0x440 MovT
	func_3783(var_443_object); // 0x441 NEW_2
	if(var_442_bool == 0) goto Label_1093; // 0x443 JumpB
	var_435_bool = 1; // 0x444 MovB
	
Label_1093:
	if(var_435_bool == 0) goto Label_1099; // 0x445 JumpB
	var_448_int = 514281; // 0x446 PushI
	var_449_int = 15502; // 0x447 PushI
	var_450_int = 15501; // 0x448 PushI
	AddReply(var_448_int, var_449_int, var_450_int); // 0x449 TObjFunc
	
Label_1099:
	var_451_bool = 0; // 0x44b PushV
	var_451_bool = 0; // 0x44c MovB
	var_452_bool = 0; var_453_object = Obj(); // 0x44d PushV
	var_453_object = var_1_object; // 0x44e MovT
	func_3795(var_453_object); // 0x44f NEW_2
	if(var_452_bool == 0) goto Label_1112; // 0x451 JumpB
	var_458_bool = 0; var_459_object = Obj(); // 0x452 PushV
	var_459_object = var_1_object; // 0x453 MovT
	func_3807(var_459_object); // 0x454 NEW_2
	if(var_458_bool == 0) goto Label_1112; // 0x456 JumpB
	var_451_bool = 1; // 0x457 MovB
	
Label_1112:
	if(var_451_bool == 0) goto Label_1118; // 0x458 JumpB
	var_464_int = 514306; // 0x459 PushI
	var_465_int = 15529; // 0x45a PushI
	var_466_int = 15528; // 0x45b PushI
	AddReply(var_464_int, var_465_int, var_466_int); // 0x45c TObjFunc
	
Label_1118:
	var_467_bool = 0; // 0x45e PushV
	var_467_bool = 0; // 0x45f MovB
	var_468_bool = 0; var_469_object = Obj(); // 0x460 PushV
	var_469_object = var_1_object; // 0x461 MovT
	func_3759(var_469_object); // 0x462 NEW_2
	if(var_468_bool == 0) goto Label_1131; // 0x464 JumpB
	var_474_bool = 0; var_475_object = Obj(); // 0x465 PushV
	var_475_object = var_1_object; // 0x466 MovT
	func_3819(var_475_object); // 0x467 NEW_2
	if(var_474_bool == 0) goto Label_1131; // 0x469 JumpB
	var_467_bool = 1; // 0x46a MovB
	
Label_1131:
	if(var_467_bool == 0) goto Label_1137; // 0x46b JumpB
	var_480_int = 514317; // 0x46c PushI
	var_481_int = 15540; // 0x46d PushI
	var_482_int = 15539; // 0x46e PushI
	AddReply(var_480_int, var_481_int, var_482_int); // 0x46f TObjFunc
	
Label_1137:
	var_483_int = 514324; // 0x471 PushI
	var_484_int = -1; // 0x472 PushI
	var_485_int = 15546; // 0x473 PushI
	AddReply(var_483_int, var_484_int, var_485_int); // 0x474 TObjFunc
	goto Label_1145; // 0x476 Jump
	
Label_1145:
	var_486_bool = 0; // 0x479 PushV
	func_3536(var_486_bool); // 0x47a NEW_2
	if(var_486_bool == 0) goto Label_1160; // 0x47c JumpB
	
Label_1149:
	lshWaitForAnimEnd(); // 0x47d Func
	var_487_string = var_3_string; // 0x47f PushT
	if(var_487_string == 0) goto Label_1154; // 0x480 JumpB
	goto Label_1159; // 0x481 Jump
	
Label_1159:
	goto Label_1174; // 0x487 Jump
	
Label_1174:
	return 0; // 0x496 Return
	
Label_1154:
	var_488_string = ""; // 0x482 PushV
	var_488_string = var_2_object; // 0x483 MovT
	func_3351(var_488_string); // 0x484 NEW_2
	goto Label_1149; // 0x486 Jump
	
Label_1160:
	var_489_string = "all"; // 0x488 PushS
	var_490_string = "idle"; // 0x489 PushS
	PlayAnimation(var_489_string, var_490_string); // 0x48a Func
	
Label_1164:
	WaitForAnimEnd(); // 0x48c Func
	var_491_string = var_3_string; // 0x48e PushT
	if(var_491_string == 0) goto Label_1169; // 0x48f JumpB
	goto Label_1174; // 0x490 Jump
	
Label_1169:
	var_492_string = "all"; // 0x491 PushS
	var_493_string = "idle"; // 0x492 PushS
	PlayAnimation(var_492_string, var_493_string); // 0x493 Func
	goto Label_1164; // 0x495 Jump
}


func_2856(var_51_bool)
{
	var_52_object = Obj(); var_53_object = Obj(); // 0xb28 PushV
	var_54_string = "player"; // 0xb29 PushS
	FindActor(var_53_object, var_54_string); // 0xb2a Func
	var_55_bool = var_53_object == 0; // 0xb2c Not
	if(var_55_bool == 0) goto Label_2864; // 0xb2d JumpB
	var_51_bool = 0; // 0xb2e MovB
	return 2; // 0xb2f Return
	
Label_2864:
	var_56_bool = 0; var_57_object = Obj(); // 0xb30 PushV
	var_57_object = var_53_object; // 0xb31 Mov
	func_3112(var_57_object); // 0xb32 NEW_2
	var_51_bool = var_56_bool; // 0xb33 Mov
	return 2; // 0xb35 Return
}


func_3880(var_48_object)
{
	var_49_object = Obj(); var_50_object = Obj(); // 0xf28 PushV
	GetDiaryRoot(var_50_object); // 0xf29 Func
	var_51_bool = var_50_object == 0; // 0xf2b Not
	if(var_51_bool == 0) goto Label_3890; // 0xf2c JumpB
	var_52_string = "Can't retrieve diary root"; // 0xf2d PushS
	Trace(var_52_string); // 0xf2e Func
	var_48_object = 0; // 0xf30 MovB
	return 2; // 0xf31 Return
	
Label_3890:
	var_48_object = var_50_object; // 0xf32 Mov
	return 2; // 0xf33 Return
}


func_1834(var_0_object, var_1_object, var_2_object, var_3_string, var_352_object, var_353_object)
{
	var_0_object = var_353_object; // 0x72b TMov
	var_1_object = var_352_object; // 0x72c TMov
	var_3_string = 0; // 0x72d TMovB
	var_358_int = 1; // 0x72e PushI
	if(var_358_int == 0) goto Label_1872; // 0x72f JumpB
	var_359_string = ""; // 0x730 PushV
	var_359_string = "Neutral"; // 0x731 MovS
	func_1902(var_353_object, var_359_string); // 0x732 NEW_2
	var_367_int = 534152; // 0x734 PushI
	SetMessage(var_367_int); // 0x735 TObjFunc
	ClearReplies(); // 0x737 TObjFunc
	var_368_bool = 0; var_369_object = Obj(); // 0x739 PushV
	var_369_object = var_1_object; // 0x73a MovT
	func_3711(var_369_object); // 0x73b NEW_2
	if(var_368_bool == 0) goto Label_1859; // 0x73d JumpB
	var_374_int = 534153; // 0x73e PushI
	var_375_int = 38340; // 0x73f PushI
	var_376_int = 35740; // 0x740 PushI
	AddReply(var_374_int, var_375_int, var_376_int); // 0x741 TObjFunc
	
Label_1859:
	var_377_int = 534154; // 0x743 PushI
	var_378_int = -1; // 0x744 PushI
	var_379_int = 35741; // 0x745 PushI
	AddReply(var_377_int, var_378_int, var_379_int); // 0x746 TObjFunc
	var_380_int = 536532; // 0x748 PushI
	var_381_int = -1; // 0x749 PushI
	var_382_int = 38339; // 0x74a PushI
	AddReply(var_380_int, var_381_int, var_382_int); // 0x74b TObjFunc
	goto Label_1872; // 0x74d Jump
	
Label_1872:
	var_383_bool = 0; // 0x750 PushV
	func_3536(var_383_bool); // 0x751 NEW_2
	if(var_383_bool == 0) goto Label_1887; // 0x753 JumpB
	
Label_1876:
	lshWaitForAnimEnd(); // 0x754 Func
	var_384_string = var_3_string; // 0x756 PushT
	if(var_384_string == 0) goto Label_1881; // 0x757 JumpB
	goto Label_1886; // 0x758 Jump
	
Label_1886:
	goto Label_1901; // 0x75e Jump
	
Label_1901:
	return 0; // 0x76d Return
	
Label_1881:
	var_385_string = ""; // 0x759 PushV
	var_385_string = var_2_object; // 0x75a MovT
	func_3351(var_385_string); // 0x75b NEW_2
	goto Label_1876; // 0x75d Jump
	
Label_1887:
	var_386_string = "all"; // 0x75f PushS
	var_387_string = "idle"; // 0x760 PushS
	PlayAnimation(var_386_string, var_387_string); // 0x761 Func
	
Label_1891:
	WaitForAnimEnd(); // 0x763 Func
	var_388_string = var_3_string; // 0x765 PushT
	if(var_388_string == 0) goto Label_1896; // 0x766 JumpB
	goto Label_1901; // 0x767 Jump
	
Label_1896:
	var_389_string = "all"; // 0x768 PushS
	var_390_string = "idle"; // 0x769 PushS
	PlayAnimation(var_389_string, var_390_string); // 0x76a Func
	goto Label_1891; // 0x76c Jump
}


func_3630()
{
	var_34_string = "ood11Block1"; // 0xe2f PushS
	var_35_int = 1; // 0xe30 PushI
	SetVariable(var_34_string, var_35_int); // 0xe31 Func
	return 0; // 0xe33 Return
}


func_3121(var_26_bool)
{
	var_27_bool = 0; var_28_bool = 0; // 0xc31 PushV
	IsLoaded(var_28_bool); // 0xc32 Func
	var_26_bool = var_28_bool; // 0xc34 Mov
	return 2; // 0xc35 Return
}


func_2355(var_2_object, var_552_string)
{
	var_553_bool = 0; // 0x934 PushV
	func_3536(var_553_bool); // 0x935 NEW_2
	var_554_bool = var_553_bool == 0; // 0x937 Not
	if(var_554_bool == 0) goto Label_2362; // 0x938 JumpB
	return 0; // 0x939 Return
	
Label_2362:
	var_555_bool = var_552_string == var_2_object; // 0x93a Eq
	if(var_555_bool == 0) goto Label_2365; // 0x93b JumpB
	return 0; // 0x93c Return
	
Label_2365:
	var_556_string = ""; var_557_bool = 0; // 0x93d PushV
	var_556_string = var_552_string; // 0x93e Mov
	var_558_string = ""; // 0x93f PushS
	var_559_bool = var_552_string == var_558_string; // 0x940 Eq
	if(var_559_bool == 0) goto Label_2372; // 0x941 JumpB
	var_557_bool = 0; // 0x942 MovB
	goto Label_2373; // 0x943 Jump
	
Label_2373:
	func_3367(var_556_string, var_557_bool); // 0x945 NEW_2
	var_2_object = var_552_string; // 0x947 TMov
	return 0; // 0x948 Return
	
Label_2372:
	var_557_bool = 1; // 0x944 MovB
}


func_3636()
{
	var_40_string = "ood11Block2"; // 0xe35 PushS
	var_41_int = 1; // 0xe36 PushI
	SetVariable(var_40_string, var_41_int); // 0xe37 Func
	return 0; // 0xe39 Return
}


func_3893(var_39_bool, var_40_object, var_41_int)
{
	var_42_object = Obj(); var_43_object = Obj(); var_44_int = 0; var_45_object = Obj(); var_46_object = Obj(); var_47_int = 0; // 0xf35 PushV
	var_48_object = Obj(); // 0xf36 PushV
	func_3880(var_48_object); // 0xf37 NEW_2
	var_45_object = var_48_object; // 0xf38 Mov
	Find(var_41_int, var_46_object); // 0xf3a ObjFunc
	var_53_bool = var_46_object == 0; // 0xf3c Not
	if(var_53_bool == 0) goto Label_3908; // 0xf3d JumpB
	var_54_string = "Can't find diary parent with id: "; // 0xf3e PushS
	var_55_int = var_54_string + var_41_int; // 0xf3f Add
	Trace(var_55_int); // 0xf40 Func
	var_39_bool = 0; // 0xf42 MovB
	return 6; // 0xf43 Return
	
Label_3908:
	AddChild(var_40_object); // 0xf44 ObjFunc
	var_56_int = 7; // 0xf46 PushI
	SendWorldWndMessage(var_56_int); // 0xf47 Func
	GetCategory(var_47_int); // 0xf49 ObjFunc
	SetDiarySection(var_47_int); // 0xf4b Func
	var_39_bool = 0; // 0xf4d MovB
	return 6; // 0xf4e Return
}


func_3126(var_64_bool, var_66_float)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_bool = 0; var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_bool = 0; var_84_bool = 0; // 0xc36 PushV
	GetPosition(var_77_cvector); // 0xc37 ObjFunc
	GetEyesHeight(var_76_float); // 0xc39 ObjFunc
	var_85_float = GetByIndex(var_77_cvector, 1); // 0xc3b PushE
	var_85_float = var_85_float + var_76_float; // 0xc3c Add2
	SetByIndex(var_77_cvector, 1) = var_85_float; // 0xc3d PopE
	GetPosition(var_78_cvector); // 0xc3e Func
	GetEyesHeight(var_76_float); // 0xc40 Func
	var_86_float = GetByIndex(var_78_cvector, 1); // 0xc42 PushE
	var_86_float = var_86_float + var_76_float; // 0xc43 Add2
	SetByIndex(var_78_cvector, 1) = var_86_float; // 0xc44 PopE
	var_79_cvector = var_77_cvector - var_78_cvector; // 0xc45 Sub2
	var_87_float = GetByIndex(var_79_cvector, 1); // 0xc46 PushE
	var_87_float = 0; // 0xc47 MovI
	SetByIndex(var_79_cvector, 1) = var_87_float; // 0xc48 PopE
	var_88_int = var_79_cvector | var_79_cvector; // 0xc49 Or
	var_89_float = sqrt(var_88_int); // 0xc4a Sqrt
	var_79_cvector = var_79_cvector / var_79_cvector; // 0xc4b Div2
	var_80_cvector = -var_79_cvector; // 0xc4c Neg2
	var_90_float = var_79_cvector * var_66_float; // 0xc4d Mult
	var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); // 0xc4e PushV
	var_93_cvector = CVector(0.0, 1.0, 0.0); // 0xc4f PushVec
	var_92_cvector = var_80_cvector ^ var_93_cvector; // 0xc50 Xor2
	func_3410(var_91_cvector, var_92_cvector); // 0xc51 NEW_2
	var_99_int = 25; // 0xc53 PushI
	var_100_float = var_91_cvector * var_99_int; // 0xc54 Mult
	var_101_int = var_90_float + var_100_float; // 0xc55 Add
	var_102_cvector = CVector(0.0, 10.0, 0.0); // 0xc56 PushVec
	var_81_cvector = var_101_int - var_102_cvector; // 0xc57 Sub2
	var_82_cvector = var_78_cvector + var_81_cvector; // 0xc58 Add2
	IsOverrideActive(var_83_bool); // 0xc59 Func
	var_103_bool = var_83_bool; // 0xc5b Push
	if(var_103_bool == 0) goto Label_3167; // 0xc5c JumpB
	var_64_bool = 0; // 0xc5d MovB
	return 18; // 0xc5e Return
	
Label_3167:
	StopWorld(); // 0xc5f Func
	var_104_bool = 1; // 0xc61 PushB
	CameraTransit(var_82_cvector, var_80_cvector, var_104_bool); // 0xc62 Func
	var_105_float = GetByIndex(var_81_cvector, 0); // 0xc64 PushE
	var_106_float = GetByIndex(var_81_cvector, 2); // 0xc65 PushE
	Rotate(var_105_float, var_106_float); // 0xc66 Func
	var_107_bool = 0; // 0xc68 PushV
	func_3536(var_107_bool); // 0xc69 NEW_2
	if(var_107_bool == 0) goto Label_3181; // 0xc6b JumpB
	goto Label_3189; // 0xc6c Jump
	
Label_3189:
	CameraWaitForPlayFinish(); // 0xc75 Func
	ResumeWorld(); // 0xc77 Func
	var_64_bool = 1; // 0xc79 MovB
	return 18; // 0xc7a Return
	
Label_3181:
	var_108_string = "head"; // 0xc6d PushS
	HasAnimationTrack(var_84_bool, var_108_string); // 0xc6e Func
	var_109_bool = var_84_bool; // 0xc70 Push
	if(var_109_bool == 0) goto Label_3189; // 0xc71 JumpB
	var_110_string = "head"; // 0xc72 PushS
	LookAsyncCamera(var_110_string); // 0xc73 Func
}


func_3382(var_159_bool, var_160_string)
{
	var_161_bool = 0; var_162_bool = 0; // 0xd36 PushV
	var_163_bool = 0; // 0xd37 PushV
	func_3536(var_163_bool); // 0xd38 NEW_2
	if(var_163_bool == 0) goto Label_3395; // 0xd3a JumpB
	lshHasSpeech(var_162_bool, var_160_string); // 0xd3b Func
	var_164_bool = var_162_bool; // 0xd3d Push
	if(var_164_bool == 0) goto Label_3395; // 0xd3e JumpB
	lshPlaySpeech(var_160_string); // 0xd3f Func
	var_159_bool = 1; // 0xd41 MovB
	return 2; // 0xd42 Return
	
Label_3395:
	var_159_bool = 0; // 0xd43 MovB
	return 2; // 0xd44 Return
}


func_2871(var_0_object)
{
	var_103_float = GetByIndex(var_0_object, 0); // 0xb37 PushE
	var_104_float = GetByIndex(var_0_object, 2); // 0xb38 PushE
	RotateAsync(var_103_float, var_104_float); // 0xb39 Func
	return 0; // 0xb3b Return
}


func_3642()
{
	var_50_string = "ood11Block3"; // 0xe3b PushS
	var_51_int = 1; // 0xe3c PushI
	SetVariable(var_50_string, var_51_int); // 0xe3d Func
	return 0; // 0xe3f Return
}


func_2876(var_34_bool)
{
	var_35_object = Obj(); var_36_bool = 0; var_37_object = Obj(); var_38_bool = 0; // 0xb3c PushV
	var_39_string = "player"; // 0xb3d PushS
	FindActor(var_37_object, var_39_string); // 0xb3e Func
	var_40_bool = var_37_object == 0; // 0xb40 Not
	if(var_40_bool == 0) goto Label_2884; // 0xb41 JumpB
	var_34_bool = 0; // 0xb42 MovB
	return 4; // 0xb43 Return
	
Label_2884:
	var_41_float = 0; var_42_object = Obj(); // 0xb44 PushV
	var_42_object = var_37_object; // 0xb45 Mov
	func_3094(var_42_object); // 0xb46 NEW_2
	var_49_float = 90000.0; // 0xb48 PushF
	var_50_bool = var_41_float > var_49_float; // 0xb49 GT
	if(var_50_bool == 0) goto Label_2893; // 0xb4a JumpB
	var_34_bool = 0; // 0xb4b MovB
	return 4; // 0xb4c Return
	
Label_2893:
	CanSee(var_38_bool, var_37_object); // 0xb4d Func
	var_34_bool = var_38_bool; // 0xb4f Mov
	return 4; // 0xb50 Return
}


func_3648(var_72_object)
{
	var_74_string = "rifle ammo10 is given"; // 0xe41 PushS
	Trace(var_74_string); // 0xe42 Func
	var_75_object = Obj(); var_76_string = ""; var_77_int = 0; // 0xe44 PushV
	var_75_object = var_72_object; // 0xe45 Mov
	var_76_string = "rifle_ammo"; // 0xe46 MovS
	var_77_int = 10; // 0xe47 MovI
	func_3456(var_75_object, var_76_string, var_77_int); // 0xe48 NEW_2
	return 0; // 0xe4a Return
}


func_3397()
{
	var_29_bool = 0; // 0xd45 PushV
	func_3536(var_29_bool); // 0xd46 NEW_2
	if(var_29_bool == 0) goto Label_3403; // 0xd48 JumpB
	lshStopSpeech(); // 0xd49 Func
	
Label_3403:
	return 0; // 0xd4b Return
}


func_3659()
{
	var_95_string = "ood9Block2"; // 0xe4c PushS
	var_96_int = 1; // 0xe4d PushI
	SetVariable(var_95_string, var_96_int); // 0xe4e Func
	return 0; // 0xe50 Return
}


func_2635(var_0_object, var_589_int, var_590_object)
{
	var_592_object = Obj(); var_593_bool = 0; var_594_int = 0; var_595_bool = 0; var_596_object = Obj(); var_597_bool = 0; var_598_int = 0; var_599_bool = 0; // 0xa4b PushV
	var_0_object = var_590_object; // 0xa4c TMov
	var_600_bool = 0; var_601_object = Obj(); var_602_float = 0; // 0xa4d PushV
	var_601_object = var_590_object; // 0xa4e Mov
	var_602_float = 70.0; // 0xa4f MovF
	func_3126(var_601_object, var_602_float); // 0xa50 NEW_2
	var_603_bool = var_600_bool == 0; // 0xa52 Not
	if(var_603_bool == 0) goto Label_2646; // 0xa53 JumpB
	var_589_int = -2; // 0xa54 MovI
	return 8; // 0xa55 Return
	
Label_2646:
	CreateDialog(var_596_object); // 0xa56 Func
	var_604_int = 0; // 0xa58 PushV
	func_3530(var_604_int); // 0xa59 NEW_2
	SetNPCName(var_604_int); // 0xa5b ObjFunc
	var_605_int = 0; // 0xa5d PushV
	func_3528(var_605_int); // 0xa5e NEW_2
	SetNPCDescription(var_605_int); // 0xa60 ObjFunc
	var_606_string = ""; // 0xa62 PushV
	func_3532(var_606_string); // 0xa63 NEW_2
	SetPhoto(var_606_string); // 0xa65 ObjFunc
	var_607_string = ""; // 0xa67 PushV
	func_3534(var_607_string); // 0xa68 NEW_2
	SetPhoto2(var_607_string); // 0xa6a ObjFunc
	var_608_int = 0; // 0xa6c PushV
	func_3921(var_608_int); // 0xa6d NEW_2
	SetPlayerName(var_608_int); // 0xa6f ObjFunc
	var_598_int = -1; // 0xa71 MovI
	IsOverrideActive(var_597_bool); // 0xa72 Func
	var_609_bool = var_597_bool; // 0xa74 Push
	if(var_609_bool == 0) goto Label_2680; // 0xa75 JumpB
	var_589_int = -2; // 0xa76 MovI
	return 8; // 0xa77 Return
	
Label_2680:
	DoDialog(var_596_object); // 0xa78 Func
	var_610_bool = 0; var_611_object = Obj(); // 0xa7a PushV
	var_612_object = Obj(); // 0xa7b PushV
	func_3404(var_612_object); // 0xa7c NEW_2
	var_611_object = var_612_object; // 0xa7d Mov
	func_3213(var_610_bool, var_611_object); // 0xa7f NEW_2
	var_613_object = Obj(); var_614_object = Obj(); // 0xa81 PushV
	var_613_object = var_590_object; // 0xa82 Mov
	var_614_object = var_596_object; // 0xa83 Mov
	TaskCall(9); // 0xa84 TaskCall
	func_2716(var_615_object, var_616_object, var_617_string, var_618_bool, var_613_object, var_614_object); // 0xa85 NEW_2
	TaskReturn(); // 0xa86 TaskReturn
	IsDialogEnd(var_599_bool); // 0xa88 ObjFunc
	
Label_2698:
	var_643_bool = var_599_bool == 0; // 0xa8a Not
	if(var_643_bool == 0) goto Label_2705; // 0xa8b JumpB
	sync(); // 0xa8c Func
	IsDialogEnd(var_599_bool); // 0xa8e ObjFunc
	goto Label_2698; // 0xa90 Jump
	
Label_2705:
	var_644_object = Obj(); // 0xa91 PushV
	var_644_object = var_590_object; // 0xa92 Mov
	func_3195(); // 0xa93 NEW_2
	StopDialog(var_596_object); // 0xa95 Func
	GetReturnValue(var_598_int); // 0xa97 ObjFunc
	var_589_int = var_598_int; // 0xa99 Mov
	return 8; // 0xa9a Return
}


func_3404(var_127_object)
{
	var_128_object = Obj(); var_129_object = Obj(); // 0xd4c PushV
	self(var_129_object); // 0xd4d Func
	var_127_object = var_129_object; // 0xd4f Mov
	return 2; // 0xd50 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_215_object, var_216_object)
{
	var_0_object = var_216_object; // 0x52 TMov
	var_1_object = var_215_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_221_int = 1; // 0x55 PushI
	if(var_221_int == 0) goto Label_167; // 0x56 JumpB
	var_222_object = Obj(); var_223_object = Obj(); // 0x57 PushV
	var_222_object = var_1_object; // 0x58 MovT
	var_223_object = var_0_object; // 0x59 MovT
	func_3597(); // 0x5a NEW_2
	var_226_string = ""; // 0x5c PushV
	var_226_string = "Neutral"; // 0x5d MovS
	func_197(var_216_object, var_226_string); // 0x5e NEW_2
	var_243_int = 513882; // 0x60 PushI
	SetMessage(var_243_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_244_bool = 0; // 0x65 PushV
	var_244_bool = 0; // 0x66 MovB
	var_245_bool = 0; var_246_object = Obj(); // 0x67 PushV
	var_246_object = var_1_object; // 0x68 MovT
	func_3675(var_246_object); // 0x69 NEW_2
	if(var_245_bool == 0) goto Label_114; // 0x6b JumpB
	var_253_bool = 0; var_254_object = Obj(); // 0x6c PushV
	var_254_object = var_1_object; // 0x6d MovT
	func_3687(var_254_object); // 0x6e NEW_2
	if(var_253_bool == 0) goto Label_114; // 0x70 JumpB
	var_244_bool = 1; // 0x71 MovB
	
Label_114:
	if(var_244_bool == 0) goto Label_120; // 0x72 JumpB
	var_259_int = 513883; // 0x73 PushI
	var_260_int = 15111; // 0x74 PushI
	var_261_int = 15110; // 0x75 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x76 TObjFunc
	
Label_120:
	var_262_bool = 0; // 0x78 PushV
	var_262_bool = 0; // 0x79 MovB
	var_263_bool = 0; var_264_object = Obj(); // 0x7a PushV
	var_264_object = var_1_object; // 0x7b MovT
	func_3735(var_264_object); // 0x7c NEW_2
	if(var_263_bool == 0) goto Label_133; // 0x7e JumpB
	var_269_bool = 0; var_270_object = Obj(); // 0x7f PushV
	var_270_object = var_1_object; // 0x80 MovT
	func_3747(var_270_object); // 0x81 NEW_2
	if(var_269_bool == 0) goto Label_133; // 0x83 JumpB
	var_262_bool = 1; // 0x84 MovB
	
Label_133:
	if(var_262_bool == 0) goto Label_139; // 0x85 JumpB
	var_275_int = 513906; // 0x86 PushI
	var_276_int = 15138; // 0x87 PushI
	var_277_int = 15137; // 0x88 PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x89 TObjFunc
	
Label_139:
	var_278_bool = 0; var_279_object = Obj(); // 0x8b PushV
	var_279_object = var_1_object; // 0x8c MovT
	func_3831(var_279_object); // 0x8d NEW_2
	if(var_278_bool == 0) goto Label_149; // 0x8f JumpB
	var_284_int = 513924; // 0x90 PushI
	var_285_int = 15156; // 0x91 PushI
	var_286_int = 15155; // 0x92 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x93 TObjFunc
	
Label_149:
	var_287_bool = 0; var_288_object = Obj(); // 0x95 PushV
	var_288_object = var_1_object; // 0x96 MovT
	func_3699(var_288_object); // 0x97 NEW_2
	if(var_287_bool == 0) goto Label_159; // 0x99 JumpB
	var_293_int = 533537; // 0x9a PushI
	var_294_int = 35070; // 0x9b PushI
	var_295_int = 35069; // 0x9c PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x9d TObjFunc
	
Label_159:
	var_296_int = 513947; // 0x9f PushI
	var_297_int = -1; // 0xa0 PushI
	var_298_int = 15182; // 0xa1 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0xa2 TObjFunc
	goto Label_167; // 0xa4 Jump
	
Label_167:
	var_299_bool = 0; // 0xa7 PushV
	func_3536(var_299_bool); // 0xa8 NEW_2
	if(var_299_bool == 0) goto Label_182; // 0xaa JumpB
	
Label_171:
	lshWaitForAnimEnd(); // 0xab Func
	var_300_string = var_3_string; // 0xad PushT
	if(var_300_string == 0) goto Label_176; // 0xae JumpB
	goto Label_181; // 0xaf Jump
	
Label_181:
	goto Label_196; // 0xb5 Jump
	
Label_196:
	return 0; // 0xc4 Return
	
Label_176:
	var_301_string = ""; // 0xb0 PushV
	var_301_string = var_2_object; // 0xb1 MovT
	func_3351(var_301_string); // 0xb2 NEW_2
	goto Label_171; // 0xb4 Jump
	
Label_182:
	var_312_string = "all"; // 0xb6 PushS
	var_313_string = "idle"; // 0xb7 PushS
	PlayAnimation(var_312_string, var_313_string); // 0xb8 Func
	
Label_186:
	WaitForAnimEnd(); // 0xba Func
	var_314_string = var_3_string; // 0xbc PushT
	if(var_314_string == 0) goto Label_191; // 0xbd JumpB
	goto Label_196; // 0xbe Jump
	
Label_191:
	var_315_string = "all"; // 0xbf PushS
	var_316_string = "idle"; // 0xc0 PushS
	PlayAnimation(var_315_string, var_316_string); // 0xc1 Func
	goto Label_186; // 0xc3 Jump
}


func_3665(var_536_bool, var_537_object)
{
	var_538_bool = 0; var_539_object = Obj(); // 0xe52 PushV
	var_539_object = var_537_object; // 0xe53 Mov
	func_3843(var_539_object); // 0xe54 NEW_2
	if(var_538_bool == 0) goto Label_3673; // 0xe56 JumpB
	var_536_bool = 1; // 0xe57 MovB
	return 0; // 0xe58 Return
	
Label_3673:
	var_536_bool = 0; // 0xe59 MovB
	return 0; // 0xe5a Return
}


func_3921(var_116_int)
{
	var_117_int = 0; var_118_int = 0; // 0xf51 PushV
	var_119_string = "branch"; // 0xf52 PushS
	GetVariable(var_119_string, var_118_int); // 0xf53 Func
	var_120_int = 0; // 0xf55 PushI
	var_121_bool = var_118_int == var_120_int; // 0xf56 Eq
	if(var_121_bool == 0) goto Label_3931; // 0xf57 JumpB
	var_116_int = 1; // 0xf58 MovI
	return 2; // 0xf59 Return
	
Label_3931:
	var_122_int = 1; // 0xf5b PushI
	var_123_bool = var_118_int == var_122_int; // 0xf5c Eq
	if(var_123_bool == 0) goto Label_3936; // 0xf5d JumpB
	var_116_int = 2; // 0xf5e MovI
	return 2; // 0xf5f Return
	
Label_3936:
	var_116_int = 3; // 0xf60 MovI
	return 2; // 0xf61 Return
}


func_2898()
{
	var_647_float = 0; var_648_float = 0; // 0xb52 PushV
	var_649_int = 8; // 0xb53 PushI
	var_650_int = 16; // 0xb54 PushI
	rand(var_648_float, var_649_int, var_650_int); // 0xb55 Func
	var_651_int = 10; // 0xb57 PushI
	SetTimer(var_651_int, var_648_float); // 0xb58 Func
	return 2; // 0xb5a Return
}


func_3410(var_91_cvector, var_92_cvector)
{
	var_94_float = 0; var_95_float = 0; // 0xd52 PushV
	var_96_int = var_92_cvector | var_92_cvector; // 0xd53 Or
	var_95_float = sqrt(var_96_int); // 0xd54 Sqrt2
	var_97_float = 0.0; // 0xd55 PushF
	var_98_bool = var_95_float < var_97_float; // 0xd56 LT
	if(var_98_bool == 0) goto Label_3418; // 0xd57 JumpB
	var_91_cvector = CVector(0.0, 0.0, 0.0); // 0xd58 MovV
	return 2; // 0xd59 Return
	
Label_3418:
	var_91_cvector = var_92_cvector / var_92_cvector; // 0xd5a Div2
	return 2; // 0xd5b Return
}


func_3675(var_245_bool)
{
	var_247_int = 0; var_248_string = ""; // 0xe5c PushV
	var_248_string = "d8q01"; // 0xe5d MovS
	func_3420(var_247_int, var_248_string); // 0xe5e NEW_2
	var_251_int = 1000; // 0xe60 PushI
	var_252_bool = var_247_int == var_251_int; // 0xe61 Eq
	if(var_252_bool == 0) goto Label_3685; // 0xe62 JumpB
	var_245_bool = 1; // 0xe63 MovB
	return 0; // 0xe64 Return
	
Label_3685:
	var_245_bool = 0; // 0xe65 MovB
	return 0; // 0xe66 Return
}


func_2907()
{
	var_646_int = 10; // 0xb5b PushI
	KillTimer(var_646_int); // 0xb5c Func
	return 0; // 0xb5e Return
}


func_3420(var_247_int, var_248_string)
{
	var_249_int = 0; var_250_int = 0; // 0xd5c PushV
	GetVariable(var_248_string, var_250_int); // 0xd5d Func
	var_247_int = var_250_int; // 0xd5f Mov
	return 2; // 0xd60 Return
}


func_3425(var_63_int, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0xd61 PushV
	CreateIntVector(var_66_object); // 0xd62 Func
	add(var_63_int); // 0xd64 ObjFunc
	add(var_64_int); // 0xd66 ObjFunc
	var_67_int = 3; // 0xd68 PushI
	SendWorldWndMessage(var_67_int, var_66_object); // 0xd69 Func
	return 2; // 0xd6b Return
}


func_3938(var_44_object)
{
	var_45_bool = 0; var_46_int = 0; // 0xf63 PushV
	var_46_int = 9; // 0xf64 MovI
	func_3498(var_45_bool, var_46_int); // 0xf65 NEW_2
	if(var_45_bool == 0) goto Label_3951; // 0xf67 JumpB
	var_53_int = 0; var_54_object = Obj(); // 0xf68 PushV
	var_54_object = var_44_object; // 0xf69 Mov
	TaskCall(0); // 0xf6a TaskCall
	func_0(var_55_object, var_53_int, var_54_object); // 0xf6b NEW_2
	TaskReturn(); // 0xf6c TaskReturn
	return 0; // 0xf6e Return
	
Label_3951:
	var_326_bool = 0; var_327_int = 0; // 0xf6f PushV
	var_327_int = 10; // 0xf70 MovI
	func_3498(var_326_bool, var_327_int); // 0xf71 NEW_2
	if(var_326_bool == 0) goto Label_3963; // 0xf73 JumpB
	var_328_int = 0; var_329_object = Obj(); // 0xf74 PushV
	var_329_object = var_44_object; // 0xf75 Mov
	TaskCall(4); // 0xf76 TaskCall
	func_1753(var_330_object, var_328_int, var_329_object); // 0xf77 NEW_2
	TaskReturn(); // 0xf78 TaskReturn
	return 0; // 0xf7a Return
	
Label_3963:
	var_393_bool = 0; var_394_int = 0; // 0xf7b PushV
	var_394_int = 11; // 0xf7c MovI
	func_3498(var_393_bool, var_394_int); // 0xf7d NEW_2
	if(var_393_bool == 0) goto Label_3975; // 0xf7f JumpB
	var_395_int = 0; var_396_object = Obj(); // 0xf80 PushV
	var_396_object = var_44_object; // 0xf81 Mov
	TaskCall(2); // 0xf82 TaskCall
	func_984(var_397_object, var_395_int, var_396_object); // 0xf83 NEW_2
	TaskReturn(); // 0xf84 TaskReturn
	return 0; // 0xf86 Return
	
Label_3975:
	var_496_bool = 0; var_497_int = 0; // 0xf87 PushV
	var_497_int = 12; // 0xf88 MovI
	func_3498(var_496_bool, var_497_int); // 0xf89 NEW_2
	if(var_496_bool == 0) goto Label_3987; // 0xf8b JumpB
	var_498_int = 0; var_499_object = Obj(); // 0xf8c PushV
	var_499_object = var_44_object; // 0xf8d Mov
	TaskCall(6); // 0xf8e TaskCall
	func_2161(var_500_object, var_498_int, var_499_object); // 0xf8f NEW_2
	TaskReturn(); // 0xf90 TaskReturn
	return 0; // 0xf92 Return
	
Label_3987:
	var_589_int = 0; var_590_object = Obj(); // 0xf93 PushV
	var_590_object = var_44_object; // 0xf94 Mov
	TaskCall(8); // 0xf95 TaskCall
	func_2635(var_591_object, var_589_int, var_590_object); // 0xf96 NEW_2
	TaskReturn(); // 0xf97 TaskReturn
	return 0; // 0xf99 Return
}


func_3687(var_253_bool)
{
	var_255_int = 0; var_256_string = ""; // 0xe68 PushV
	var_256_string = "ood9Block3"; // 0xe69 MovS
	func_3420(var_255_int, var_256_string); // 0xe6a NEW_2
	var_257_int = 0; // 0xe6c PushI
	var_258_bool = var_255_int == var_257_int; // 0xe6d Eq
	if(var_258_bool == 0) goto Label_3697; // 0xe6e JumpB
	var_253_bool = 1; // 0xe6f MovB
	return 0; // 0xe70 Return
	
Label_3697:
	var_253_bool = 0; // 0xe71 MovB
	return 0; // 0xe72 Return
}


func_3437(var_53_object, var_54_int)
{
	var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; // 0xd6d PushV
	GetItemID(var_58_int); // 0xd6e ObjFunc
	var_61_string = "Category"; // 0xd70 PushS
	GetInvItemProperty(var_59_int, var_58_int, var_61_string); // 0xd71 Func
	AddItem(var_60_bool, var_53_object, var_59_int, var_54_int); // 0xd73 ObjFunc
	var_62_bool = var_60_bool == 0; // 0xd75 Not
	if(var_62_bool == 0) goto Label_3450; // 0xd76 JumpB
	DropItems(var_53_object, var_54_int); // 0xd77 ObjFunc
	goto Label_3455; // 0xd79 Jump
	
Label_3455:
	return 6; // 0xd7f Return
	
Label_3450:
	var_63_int = 0; var_64_int = 0; // 0xd7a PushV
	var_63_int = var_58_int; // 0xd7b Mov
	var_64_int = var_54_int; // 0xd7c Mov
	func_3425(var_63_int, var_64_int); // 0xd7d NEW_2
}


func_1902(var_2_object, var_359_string)
{
	var_360_bool = 0; // 0x76f PushV
	func_3536(var_360_bool); // 0x770 NEW_2
	var_361_bool = var_360_bool == 0; // 0x772 Not
	if(var_361_bool == 0) goto Label_1909; // 0x773 JumpB
	return 0; // 0x774 Return
	
Label_1909:
	var_362_bool = var_359_string == var_2_object; // 0x775 Eq
	if(var_362_bool == 0) goto Label_1912; // 0x776 JumpB
	return 0; // 0x777 Return
	
Label_1912:
	var_363_string = ""; var_364_bool = 0; // 0x778 PushV
	var_363_string = var_359_string; // 0x779 Mov
	var_365_string = ""; // 0x77a PushS
	var_366_bool = var_359_string == var_365_string; // 0x77b Eq
	if(var_366_bool == 0) goto Label_1919; // 0x77c JumpB
	var_364_bool = 0; // 0x77d MovB
	goto Label_1920; // 0x77e Jump
	
Label_1920:
	func_3367(var_363_string, var_364_bool); // 0x780 NEW_2
	var_2_object = var_359_string; // 0x782 TMov
	return 0; // 0x783 Return
	
Label_1919:
	var_364_bool = 1; // 0x77f MovB
}


func_2161(var_0_object, var_498_int, var_499_object)
{
	var_501_object = Obj(); var_502_bool = 0; var_503_int = 0; var_504_bool = 0; var_505_object = Obj(); var_506_bool = 0; var_507_int = 0; var_508_bool = 0; // 0x871 PushV
	var_0_object = var_499_object; // 0x872 TMov
	var_509_bool = 0; var_510_object = Obj(); var_511_float = 0; // 0x873 PushV
	var_510_object = var_499_object; // 0x874 Mov
	var_511_float = 70.0; // 0x875 MovF
	func_3126(var_510_object, var_511_float); // 0x876 NEW_2
	var_512_bool = var_509_bool == 0; // 0x878 Not
	if(var_512_bool == 0) goto Label_2172; // 0x879 JumpB
	var_498_int = -2; // 0x87a MovI
	return 8; // 0x87b Return
	
Label_2172:
	CreateDialog(var_505_object); // 0x87c Func
	var_513_int = 0; // 0x87e PushV
	func_3530(var_513_int); // 0x87f NEW_2
	SetNPCName(var_513_int); // 0x881 ObjFunc
	var_514_int = 0; // 0x883 PushV
	func_3528(var_514_int); // 0x884 NEW_2
	SetNPCDescription(var_514_int); // 0x886 ObjFunc
	var_515_string = ""; // 0x888 PushV
	func_3532(var_515_string); // 0x889 NEW_2
	SetPhoto(var_515_string); // 0x88b ObjFunc
	var_516_string = ""; // 0x88d PushV
	func_3534(var_516_string); // 0x88e NEW_2
	SetPhoto2(var_516_string); // 0x890 ObjFunc
	var_517_int = 0; // 0x892 PushV
	func_3921(var_517_int); // 0x893 NEW_2
	SetPlayerName(var_517_int); // 0x895 ObjFunc
	var_507_int = -1; // 0x897 MovI
	IsOverrideActive(var_506_bool); // 0x898 Func
	var_518_bool = var_506_bool; // 0x89a Push
	if(var_518_bool == 0) goto Label_2206; // 0x89b JumpB
	var_498_int = -2; // 0x89c MovI
	return 8; // 0x89d Return
	
Label_2206:
	DoDialog(var_505_object); // 0x89e Func
	var_519_bool = 0; var_520_object = Obj(); // 0x8a0 PushV
	var_521_object = Obj(); // 0x8a1 PushV
	func_3404(var_521_object); // 0x8a2 NEW_2
	var_520_object = var_521_object; // 0x8a3 Mov
	func_3213(var_519_bool, var_520_object); // 0x8a5 NEW_2
	var_522_object = Obj(); var_523_object = Obj(); // 0x8a7 PushV
	var_522_object = var_499_object; // 0x8a8 Mov
	var_523_object = var_505_object; // 0x8a9 Mov
	TaskCall(7); // 0x8aa TaskCall
	func_2242(var_524_object, var_525_object, var_526_string, var_527_bool, var_522_object, var_523_object); // 0x8ab NEW_2
	TaskReturn(); // 0x8ac TaskReturn
	IsDialogEnd(var_508_bool); // 0x8ae ObjFunc
	
Label_2224:
	var_587_bool = var_508_bool == 0; // 0x8b0 Not
	if(var_587_bool == 0) goto Label_2231; // 0x8b1 JumpB
	sync(); // 0x8b2 Func
	IsDialogEnd(var_508_bool); // 0x8b4 ObjFunc
	goto Label_2224; // 0x8b6 Jump
	
Label_2231:
	var_588_object = Obj(); // 0x8b7 PushV
	var_588_object = var_499_object; // 0x8b8 Mov
	func_3195(); // 0x8b9 NEW_2
	StopDialog(var_505_object); // 0x8bb Func
	GetReturnValue(var_507_int); // 0x8bd ObjFunc
	var_498_int = var_507_int; // 0x8bf Mov
	return 8; // 0x8c0 Return
}


func_3699(var_287_bool)
{
	var_289_int = 0; var_290_string = ""; // 0xe74 PushV
	var_290_string = "d9q02"; // 0xe75 MovS
	func_3420(var_289_int, var_290_string); // 0xe76 NEW_2
	var_291_int = 1; // 0xe78 PushI
	var_292_bool = var_289_int == var_291_int; // 0xe79 Eq
	if(var_292_bool == 0) goto Label_3709; // 0xe7a JumpB
	var_287_bool = 1; // 0xe7b MovB
	return 0; // 0xe7c Return
	
Label_3709:
	var_287_bool = 0; // 0xe7d MovB
	return 0; // 0xe7e Return
}


func_3195()
{
	var_319_bool = 0; var_320_bool = 0; // 0xc7b PushV
	var_321_bool = 1; // 0xc7c PushB
	CameraSwitchToNormal(var_321_bool); // 0xc7d Func
	var_322_bool = 0; // 0xc7f PushV
	func_3536(var_322_bool); // 0xc80 NEW_2
	if(var_322_bool == 0) goto Label_3204; // 0xc82 JumpB
	goto Label_3212; // 0xc83 Jump
	
Label_3212:
	return 2; // 0xc8c Return
	
Label_3204:
	var_323_string = "head"; // 0xc84 PushS
	HasAnimationTrack(var_320_bool, var_323_string); // 0xc85 Func
	var_324_bool = var_320_bool; // 0xc87 Push
	if(var_324_bool == 0) goto Label_3212; // 0xc88 JumpB
	var_325_string = "head"; // 0xc89 PushS
	UnlookAsync(var_325_string); // 0xc8a Func
}


func_3711(var_368_bool)
{
	var_370_int = 0; var_371_string = ""; // 0xe80 PushV
	var_371_string = "d10q03"; // 0xe81 MovS
	func_3420(var_370_int, var_371_string); // 0xe82 NEW_2
	var_372_int = 3; // 0xe84 PushI
	var_373_bool = var_370_int == var_372_int; // 0xe85 Eq
	if(var_373_bool == 0) goto Label_3721; // 0xe86 JumpB
	var_368_bool = 1; // 0xe87 MovB
	return 0; // 0xe88 Return
	
Label_3721:
	var_368_bool = 0; // 0xe89 MovB
	return 0; // 0xe8a Return
}


func_3456(var_75_object, var_76_string, var_77_int)
{
	var_78_object = Obj(); var_79_object = Obj(); // 0xd80 PushV
	CreateInvItem(var_79_object); // 0xd81 Func
	SetItemName(var_76_string); // 0xd83 ObjFunc
	var_80_object = Obj(); var_81_object = Obj(); var_82_int = 0; // 0xd85 PushV
	var_80_object = var_75_object; // 0xd86 Mov
	var_81_object = var_79_object; // 0xd87 Mov
	var_82_int = var_77_int; // 0xd88 Mov
	func_3437(var_81_object, var_82_int); // 0xd89 NEW_2
	return 2; // 0xd8b Return
}


func_3723(var_530_bool)
{
	var_532_int = 0; var_533_string = ""; // 0xe8c PushV
	var_533_string = "ood12Block1"; // 0xe8d MovS
	func_3420(var_532_int, var_533_string); // 0xe8e NEW_2
	var_534_int = 0; // 0xe90 PushI
	var_535_bool = var_532_int == var_534_int; // 0xe91 Eq
	if(var_535_bool == 0) goto Label_3733; // 0xe92 JumpB
	var_530_bool = 1; // 0xe93 MovB
	return 0; // 0xe94 Return
	
Label_3733:
	var_530_bool = 0; // 0xe95 MovB
	return 0; // 0xe96 Return
}


func_3213(var_125_bool, var_126_object)
{
	var_130_int = 0; var_131_int = 0; var_132_int = 0; var_133_int = 0; // 0xc8d PushV
	var_134_string = "voice_common"; // 0xc8e PushS
	GetVariable(var_134_string, var_132_int); // 0xc8f Func
	var_135_int = var_132_int; // 0xc91 Push
	if(var_135_int == 0) goto Label_3251; // 0xc92 JumpB
	var_136_bool = 0; var_137_object = Obj(); // 0xc93 PushV
	var_137_object = var_126_object; // 0xc94 Mov
	func_3271(var_137_object); // 0xc95 NEW_2
	var_166_bool = var_136_bool == 0; // 0xc97 Not
	if(var_166_bool == 0) goto Label_3233; // 0xc98 JumpB
	var_167_bool = 0; var_168_object = Obj(); // 0xc99 PushV
	var_168_object = var_126_object; // 0xc9a Mov
	func_3308(var_168_object); // 0xc9b NEW_2
	var_197_bool = var_167_bool == 0; // 0xc9d Not
	if(var_197_bool == 0) goto Label_3233; // 0xc9e JumpB
	var_125_bool = 0; // 0xc9f MovB
	return 4; // 0xca0 Return
	
Label_3233:
	var_198_int = 2; // 0xca1 PushI
	irand(var_133_int, var_198_int); // 0xca2 Func
	var_199_int = var_133_int; // 0xca4 Push
	if(var_199_int == 0) goto Label_3246; // 0xca5 JumpB
	var_200_string = "voice_common"; // 0xca6 PushS
	var_201_int = 1; // 0xca7 PushI
	var_202_int = var_132_int + var_201_int; // 0xca8 Add
	var_203_int = 3; // 0xca9 PushI
	var_204_int = var_202_int / var_203_int; // 0xcaa Mod
	SetVariable(var_200_string, var_204_int); // 0xcab Func
	goto Label_3250; // 0xcad Jump
	
Label_3250:
	goto Label_3269; // 0xcb2 Jump
	
Label_3269:
	var_125_bool = 1; // 0xcc5 MovB
	return 4; // 0xcc6 Return
	
Label_3246:
	var_205_string = "voice_common"; // 0xcae PushS
	var_206_int = 0; // 0xcaf PushI
	SetVariable(var_205_string, var_206_int); // 0xcb0 Func
	
Label_3251:
	var_207_bool = 0; var_208_object = Obj(); // 0xcb3 PushV
	var_208_object = var_126_object; // 0xcb4 Mov
	func_3308(var_208_object); // 0xcb5 NEW_2
	var_209_bool = var_207_bool == 0; // 0xcb7 Not
	if(var_209_bool == 0) goto Label_3265; // 0xcb8 JumpB
	var_210_bool = 0; var_211_object = Obj(); // 0xcb9 PushV
	var_211_object = var_126_object; // 0xcba Mov
	func_3271(var_211_object); // 0xcbb NEW_2
	var_212_bool = var_210_bool == 0; // 0xcbd Not
	if(var_212_bool == 0) goto Label_3265; // 0xcbe JumpB
	var_125_bool = 0; // 0xcbf MovB
	return 4; // 0xcc0 Return
	
Label_3265:
	var_213_string = "voice_common"; // 0xcc1 PushS
	var_214_int = 1; // 0xcc2 PushI
	SetVariable(var_213_string, var_214_int); // 0xcc3 Func
}


func_3469(var_57_bool, var_58_string, var_59_string)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0xd8d PushV
	FindActor(var_61_object, var_58_string); // 0xd8e Func
	var_62_bool = var_61_object == 0; // 0xd90 NullEq
	if(var_62_bool == 0) goto Label_3476; // 0xd91 JumpB
	var_57_bool = 0; // 0xd92 MovB
	return 2; // 0xd93 Return
	
Label_3476:
	Trigger(var_61_object, var_59_string); // 0xd94 Func
	var_57_bool = 1; // 0xd96 MovB
	return 2; // 0xd97 Return
}


func_3735(var_263_bool)
{
	var_265_int = 0; var_266_string = ""; // 0xe98 PushV
	var_266_string = "d9q01"; // 0xe99 MovS
	func_3420(var_265_int, var_266_string); // 0xe9a NEW_2
	var_267_int = 2; // 0xe9c PushI
	var_268_bool = var_265_int == var_267_int; // 0xe9d Eq
	if(var_268_bool == 0) goto Label_3745; // 0xe9e JumpB
	var_263_bool = 1; // 0xe9f MovB
	return 0; // 0xea0 Return
	
Label_3745:
	var_263_bool = 0; // 0xea1 MovB
	return 0; // 0xea2 Return
}


func_1175(var_2_object, var_426_string)
{
	var_427_bool = 0; // 0x498 PushV
	func_3536(var_427_bool); // 0x499 NEW_2
	var_428_bool = var_427_bool == 0; // 0x49b Not
	if(var_428_bool == 0) goto Label_1182; // 0x49c JumpB
	return 0; // 0x49d Return
	
Label_1182:
	var_429_bool = var_426_string == var_2_object; // 0x49e Eq
	if(var_429_bool == 0) goto Label_1185; // 0x49f JumpB
	return 0; // 0x4a0 Return
	
Label_1185:
	var_430_string = ""; var_431_bool = 0; // 0x4a1 PushV
	var_430_string = var_426_string; // 0x4a2 Mov
	var_432_string = ""; // 0x4a3 PushS
	var_433_bool = var_426_string == var_432_string; // 0x4a4 Eq
	if(var_433_bool == 0) goto Label_1192; // 0x4a5 JumpB
	var_431_bool = 0; // 0x4a6 MovB
	goto Label_1193; // 0x4a7 Jump
	
Label_1193:
	func_3367(var_430_string, var_431_bool); // 0x4a9 NEW_2
	var_2_object = var_426_string; // 0x4ab TMov
	return 0; // 0x4ac Return
	
Label_1192:
	var_431_bool = 1; // 0x4a8 MovB
}


func_3481(var_47_int)
{
	var_48_float = 0; var_49_float = 0; // 0xd99 PushV
	GetGameTime(var_49_float); // 0xd9a Func
	var_50_int = 1; // 0xd9c PushI
	var_51_int = 0; // 0xd9d PushV
	var_52_int = 24; // 0xd9e PushI
	var_51_int = var_49_float / var_49_float; // 0xd9f Div2
	var_47_int = var_50_int + var_51_int; // 0xda0 Add2
	return 2; // 0xda1 Return
}


func_2716(var_0_object, var_1_object, var_2_object, var_3_string, var_613_object, var_614_object)
{
	var_0_object = var_614_object; // 0xa9d TMov
	var_1_object = var_613_object; // 0xa9e TMov
	var_3_string = 0; // 0xa9f TMovB
	var_619_int = 1; // 0xaa0 PushI
	if(var_619_int == 0) goto Label_2744; // 0xaa1 JumpB
	var_620_string = ""; // 0xaa2 PushV
	var_620_string = "Neutral"; // 0xaa3 MovS
	func_2774(var_614_object, var_620_string); // 0xaa4 NEW_2
	var_628_int = 540542; // 0xaa6 PushI
	SetMessage(var_628_int); // 0xaa7 TObjFunc
	ClearReplies(); // 0xaa9 TObjFunc
	var_629_int = 540543; // 0xaab PushI
	var_630_int = -1; // 0xaac PushI
	var_631_int = 42552; // 0xaad PushI
	AddReply(var_629_int, var_630_int, var_631_int); // 0xaae TObjFunc
	var_632_int = 540796; // 0xab0 PushI
	var_633_int = -1; // 0xab1 PushI
	var_634_int = 42845; // 0xab2 PushI
	AddReply(var_632_int, var_633_int, var_634_int); // 0xab3 TObjFunc
	goto Label_2744; // 0xab5 Jump
	
Label_2744:
	var_635_bool = 0; // 0xab8 PushV
	func_3536(var_635_bool); // 0xab9 NEW_2
	if(var_635_bool == 0) goto Label_2759; // 0xabb JumpB
	
Label_2748:
	lshWaitForAnimEnd(); // 0xabc Func
	var_636_string = var_3_string; // 0xabe PushT
	if(var_636_string == 0) goto Label_2753; // 0xabf JumpB
	goto Label_2758; // 0xac0 Jump
	
Label_2758:
	goto Label_2773; // 0xac6 Jump
	
Label_2773:
	return 0; // 0xad5 Return
	
Label_2753:
	var_637_string = ""; // 0xac1 PushV
	var_637_string = var_2_object; // 0xac2 MovT
	func_3351(var_637_string); // 0xac3 NEW_2
	goto Label_2748; // 0xac5 Jump
	
Label_2759:
	var_638_string = "all"; // 0xac7 PushS
	var_639_string = "idle"; // 0xac8 PushS
	PlayAnimation(var_638_string, var_639_string); // 0xac9 Func
	
Label_2763:
	WaitForAnimEnd(); // 0xacb Func
	var_640_string = var_3_string; // 0xacd PushT
	if(var_640_string == 0) goto Label_2768; // 0xace JumpB
	goto Label_2773; // 0xacf Jump
	
Label_2768:
	var_641_string = "all"; // 0xad0 PushS
	var_642_string = "idle"; // 0xad1 PushS
	PlayAnimation(var_641_string, var_642_string); // 0xad2 Func
	goto Label_2763; // 0xad4 Jump
}


func_3490(var_540_int)
{
	var_541_float = 0; var_542_float = 0; // 0xda2 PushV
	GetGameTime(var_542_float); // 0xda3 Func
	var_543_int = 0; // 0xda5 PushV
	var_543_int = var_542_float; // 0xda6 Mov
	var_544_int = 24; // 0xda7 PushI
	var_540_int = var_543_int % var_544_int; // 0xda8 Mod2
	return 2; // 0xda9 Return
}


func_3747(var_269_bool)
{
	var_271_int = 0; var_272_string = ""; // 0xea4 PushV
	var_272_string = "ood9Block1"; // 0xea5 MovS
	func_3420(var_271_int, var_272_string); // 0xea6 NEW_2
	var_273_int = 0; // 0xea8 PushI
	var_274_bool = var_271_int == var_273_int; // 0xea9 Eq
	if(var_274_bool == 0) goto Label_3757; // 0xeaa JumpB
	var_269_bool = 1; // 0xeab MovB
	return 0; // 0xeac Return
	
Label_3757:
	var_269_bool = 0; // 0xead MovB
	return 0; // 0xeae Return
}


func_3498(var_45_bool, var_46_int)
{
	var_47_int = 0; // 0xdab PushV
	func_3481(var_47_int); // 0xdac NEW_2
	var_45_bool = var_47_int == var_46_int; // 0xdae Eq2
	return 0; // 0xdaf Return
}


func_3759(var_468_bool)
{
	var_470_int = 0; var_471_string = ""; // 0xeb0 PushV
	var_471_string = "d11q02"; // 0xeb1 MovS
	func_3420(var_470_int, var_471_string); // 0xeb2 NEW_2
	var_472_int = 1; // 0xeb4 PushI
	var_473_bool = var_470_int == var_472_int; // 0xeb5 Eq
	if(var_473_bool == 0) goto Label_3769; // 0xeb6 JumpB
	var_468_bool = 1; // 0xeb7 MovB
	return 0; // 0xeb8 Return
	
Label_3769:
	var_468_bool = 0; // 0xeb9 MovB
	return 0; // 0xeba Return
}


func_3504(var_50_string, var_51_int)
{
	var_52_string = ""; var_53_string = ""; // 0xdb0 PushV
	var_53_string = "idle"; // 0xdb1 MovS
	var_54_int = var_51_int; // 0xdb2 Push
	if(var_54_int == 0) goto Label_3509; // 0xdb3 JumpB
	var_53_string = var_53_string + var_51_int; // 0xdb4 Add2
	
Label_3509:
	var_50_string = var_53_string; // 0xdb5 Mov
	return 2; // 0xdb6 Return
}


func_3511(var_44_int)
{
	var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; // 0xdb7 PushV
	var_47_int = 0; // 0xdb8 MovI
	
Label_3513:
	var_49_string = "all"; // 0xdb9 PushS
	var_50_string = ""; var_51_int = 0; // 0xdba PushV
	var_51_int = var_47_int; // 0xdbb Mov
	func_3504(var_50_string, var_51_int); // 0xdbc NEW_2
	HasAnimation(var_48_bool, var_49_string, var_50_string); // 0xdbe Func
	var_55_bool = var_48_bool == 0; // 0xdc0 Not
	if(var_55_bool == 0) goto Label_3523; // 0xdc1 JumpB
	goto Label_3526; // 0xdc2 Jump
	
Label_3526:
	var_44_int = var_47_int; // 0xdc6 Mov
	return 4; // 0xdc7 Return
	
Label_3523:
	var_56_int = 1; // 0xdc3 PushI
	var_47_int = var_47_int + var_56_int; // 0xdc4 Add2
	goto Label_3513; // 0xdc5 Jump
}


func_3771(var_436_bool)
{
	var_438_int = 0; var_439_string = ""; // 0xebc PushV
	var_439_string = "d11q01"; // 0xebd MovS
	func_3420(var_438_int, var_439_string); // 0xebe NEW_2
	var_440_int = 2; // 0xec0 PushI
	var_441_bool = var_438_int == var_440_int; // 0xec1 Eq
	if(var_441_bool == 0) goto Label_3781; // 0xec2 JumpB
	var_436_bool = 1; // 0xec3 MovB
	return 0; // 0xec4 Return
	
Label_3781:
	var_436_bool = 0; // 0xec5 MovB
	return 0; // 0xec6 Return
}


func_2242(var_0_object, var_1_object, var_2_object, var_3_string, var_522_object, var_523_object)
{
	var_0_object = var_523_object; // 0x8c3 TMov
	var_1_object = var_522_object; // 0x8c4 TMov
	var_3_string = 0; // 0x8c5 TMovB
	var_528_int = 1; // 0x8c6 PushI
	if(var_528_int == 0) goto Label_2325; // 0x8c7 JumpB
	var_529_bool = 0; // 0x8c8 PushV
	var_529_bool = 0; // 0x8c9 MovB
	var_530_bool = 0; var_531_object = Obj(); // 0x8ca PushV
	var_531_object = var_1_object; // 0x8cb MovT
	func_3723(var_531_object); // 0x8cc NEW_2
	if(var_530_bool == 0) goto Label_2262; // 0x8ce JumpB
	var_536_bool = 0; var_537_object = Obj(); // 0x8cf PushV
	var_537_object = var_1_object; // 0x8d0 MovT
	func_3665(var_536_bool, var_537_object); // 0x8d1 NEW_2
	var_547_bool = var_536_bool == 0; // 0x8d3 Not
	if(var_547_bool == 0) goto Label_2262; // 0x8d4 JumpB
	var_529_bool = 1; // 0x8d5 MovB
	
Label_2262:
	if(var_529_bool == 0) goto Label_2283; // 0x8d6 JumpB
	var_548_object = Obj(); var_549_object = Obj(); // 0x8d7 PushV
	var_548_object = var_1_object; // 0x8d8 MovT
	var_549_object = var_0_object; // 0x8d9 MovT
	func_3585(); // 0x8da NEW_2
	var_552_string = ""; // 0x8dc PushV
	var_552_string = "Neutral"; // 0x8dd MovS
	func_2355(var_523_object, var_552_string); // 0x8de NEW_2
	var_560_int = 535510; // 0x8e0 PushI
	SetMessage(var_560_int); // 0x8e1 TObjFunc
	ClearReplies(); // 0x8e3 TObjFunc
	var_561_int = 535511; // 0x8e5 PushI
	var_562_int = 37194; // 0x8e6 PushI
	var_563_int = 37193; // 0x8e7 PushI
	AddReply(var_561_int, var_562_int, var_563_int); // 0x8e8 TObjFunc
	goto Label_2325; // 0x8ea Jump
	
Label_2325:
	var_564_bool = 0; // 0x915 PushV
	func_3536(var_564_bool); // 0x916 NEW_2
	if(var_564_bool == 0) goto Label_2340; // 0x918 JumpB
	
Label_2329:
	lshWaitForAnimEnd(); // 0x919 Func
	var_565_string = var_3_string; // 0x91b PushT
	if(var_565_string == 0) goto Label_2334; // 0x91c JumpB
	goto Label_2339; // 0x91d Jump
	
Label_2339:
	goto Label_2354; // 0x923 Jump
	
Label_2354:
	return 0; // 0x932 Return
	
Label_2334:
	var_566_string = ""; // 0x91e PushV
	var_566_string = var_2_object; // 0x91f MovT
	func_3351(var_566_string); // 0x920 NEW_2
	goto Label_2329; // 0x922 Jump
	
Label_2340:
	var_567_string = "all"; // 0x924 PushS
	var_568_string = "idle"; // 0x925 PushS
	PlayAnimation(var_567_string, var_568_string); // 0x926 Func
	
Label_2344:
	WaitForAnimEnd(); // 0x928 Func
	var_569_string = var_3_string; // 0x92a PushT
	if(var_569_string == 0) goto Label_2349; // 0x92b JumpB
	goto Label_2354; // 0x92c Jump
	
Label_2349:
	var_570_string = "all"; // 0x92d PushS
	var_571_string = "idle"; // 0x92e PushS
	PlayAnimation(var_570_string, var_571_string); // 0x92f Func
	goto Label_2344; // 0x931 Jump
	
Label_2283:
	var_572_bool = 0; var_573_object = Obj(); // 0x8eb PushV
	var_573_object = var_1_object; // 0x8ec MovT
	func_3665(var_572_bool, var_573_object); // 0x8ed NEW_2
	if(var_572_bool == 0) goto Label_2308; // 0x8ef JumpB
	var_574_string = ""; // 0x8f0 PushV
	var_574_string = "Neutral"; // 0x8f1 MovS
	func_2355(var_523_object, var_574_string); // 0x8f2 NEW_2
	var_575_int = 535528; // 0x8f4 PushI
	SetMessage(var_575_int); // 0x8f5 TObjFunc
	ClearReplies(); // 0x8f7 TObjFunc
	var_576_int = 535529; // 0x8f9 PushI
	var_577_int = -1; // 0x8fa PushI
	var_578_int = 37212; // 0x8fb PushI
	AddReply(var_576_int, var_577_int, var_578_int); // 0x8fc TObjFunc
	var_579_int = 535530; // 0x8fe PushI
	var_580_int = -1; // 0x8ff PushI
	var_581_int = 37213; // 0x900 PushI
	AddReply(var_579_int, var_580_int, var_581_int); // 0x901 TObjFunc
	goto Label_2325; // 0x903 Jump
	
Label_2308:
	var_582_string = ""; // 0x904 PushV
	var_582_string = "Neutral"; // 0x905 MovS
	func_2355(var_523_object, var_582_string); // 0x906 NEW_2
	var_583_int = 535531; // 0x908 PushI
	SetMessage(var_583_int); // 0x909 TObjFunc
	ClearReplies(); // 0x90b TObjFunc
	var_584_int = 535539; // 0x90d PushI
	var_585_int = -1; // 0x90e PushI
	var_586_int = 37222; // 0x90f PushI
	AddReply(var_584_int, var_585_int, var_586_int); // 0x910 TObjFunc
	goto Label_2325; // 0x912 Jump
}


func_197(var_2_object, var_226_string)
{
	var_227_bool = 0; // 0xc6 PushV
	func_3536(var_227_bool); // 0xc7 NEW_2
	var_228_bool = var_227_bool == 0; // 0xc9 Not
	if(var_228_bool == 0) goto Label_204; // 0xca JumpB
	return 0; // 0xcb Return
	
Label_204:
	var_229_bool = var_226_string == var_2_object; // 0xcc Eq
	if(var_229_bool == 0) goto Label_207; // 0xcd JumpB
	return 0; // 0xce Return
	
Label_207:
	var_230_string = ""; var_231_bool = 0; // 0xcf PushV
	var_230_string = var_226_string; // 0xd0 Mov
	var_232_string = ""; // 0xd1 PushS
	var_233_bool = var_226_string == var_232_string; // 0xd2 Eq
	if(var_233_bool == 0) goto Label_214; // 0xd3 JumpB
	var_231_bool = 0; // 0xd4 MovB
	goto Label_215; // 0xd5 Jump
	
Label_215:
	func_3367(var_230_string, var_231_bool); // 0xd7 NEW_2
	var_2_object = var_226_string; // 0xd9 TMov
	return 0; // 0xda Return
	
Label_214:
	var_231_bool = 1; // 0xd6 MovB
}


func_3783(var_442_bool)
{
	var_444_int = 0; var_445_string = ""; // 0xec8 PushV
	var_445_string = "ood11Block1"; // 0xec9 MovS
	func_3420(var_444_int, var_445_string); // 0xeca NEW_2
	var_446_int = 0; // 0xecc PushI
	var_447_bool = var_444_int == var_446_int; // 0xecd Eq
	if(var_447_bool == 0) goto Label_3793; // 0xece JumpB
	var_442_bool = 1; // 0xecf MovB
	return 0; // 0xed0 Return
	
Label_3793:
	var_442_bool = 0; // 0xed1 MovB
	return 0; // 0xed2 Return
}


func_3271(var_136_bool)
{
	var_138_string = ""; var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_string = ""; var_143_string = ""; var_144_int = 0; var_145_bool = 0; var_146_int = 0; var_147_string = ""; // 0xcc7 PushV
	var_143_string = "c"; // 0xcc8 MovS
	var_144_int = 0; // 0xcc9 MovI
	
Label_3274:
	var_148_int = 1; // 0xcca PushI
	if(var_148_int == 0) goto Label_3287; // 0xccb JumpB
	var_149_int = 1; // 0xccc PushI
	var_150_int = var_144_int + var_149_int; // 0xccd Add
	var_151_int = var_143_string + var_150_int; // 0xcce Add
	HasProperty(var_151_int, var_145_bool); // 0xccf ObjFunc
	var_152_bool = var_145_bool == 0; // 0xcd1 Not
	if(var_152_bool == 0) goto Label_3284; // 0xcd2 JumpB
	goto Label_3287; // 0xcd3 Jump
	
Label_3287:
	var_153_bool = var_144_int == 0; // 0xcd7 Not
	if(var_153_bool == 0) goto Label_3291; // 0xcd8 JumpB
	var_136_bool = 0; // 0xcd9 MovB
	return 10; // 0xcda Return
	
Label_3291:
	var_146_int = 0; // 0xcdb MovI
	var_154_int = 1; // 0xcdc PushI
	var_155_bool = var_144_int > var_154_int; // 0xcdd GT
	if(var_155_bool == 0) goto Label_3297; // 0xcde JumpB
	irand(var_146_int, var_144_int); // 0xcdf Func
	
Label_3297:
	var_156_int = 1; // 0xce1 PushI
	var_157_int = var_146_int + var_156_int; // 0xce2 Add
	var_158_int = var_143_string + var_157_int; // 0xce3 Add
	GetProperty(var_158_int, var_147_string); // 0xce4 ObjFunc
	var_159_bool = 0; var_160_string = ""; // 0xce6 PushV
	var_160_string = var_147_string; // 0xce7 Mov
	func_3382(var_159_bool, var_160_string); // 0xce8 NEW_2
	var_136_bool = var_159_bool; // 0xce9 Mov
	return 10; // 0xceb Return
	
Label_3284:
	var_165_int = 1; // 0xcd4 PushI
	var_144_int = var_144_int + var_165_int; // 0xcd5 Add2
	goto Label_3274; // 0xcd6 Jump
}


func_3528(var_113_int)
{
	var_113_int = 515532; // 0xdc8 MovI
	return 0; // 0xdc9 Return
}


func_3530(var_112_int)
{
	var_112_int = 514840; // 0xdca MovI
	return 0; // 0xdcb Return
}


func_3018()
{
	var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; // 0xbca PushV
	WaitForAnimEnd(); // 0xbcb Func
	var_42_bool = 0; // 0xbcd PushV
	func_3121(var_42_bool); // 0xbce NEW_2
	var_43_bool = var_42_bool == 0; // 0xbd0 Not
	if(var_43_bool == 0) goto Label_3027; // 0xbd1 JumpB
	return 12; // 0xbd2 Return
	
Label_3027:
	var_44_int = 0; // 0xbd3 PushV
	func_3511(var_44_int); // 0xbd4 NEW_2
	var_36_int = var_44_int; // 0xbd5 Mov
	var_37_int = 0; // 0xbd7 MovI
	
Label_3032:
	var_57_bool = 0; // 0xbd8 PushV
	var_57_bool = 0; // 0xbd9 MovB
	var_58_int = 5; // 0xbda PushI
	var_59_bool = var_37_int < var_58_int; // 0xbdb LT
	if(var_59_bool == 0) goto Label_3042; // 0xbdc JumpB
	var_60_bool = 0; // 0xbdd PushV
	func_3121(var_60_bool); // 0xbde NEW_2
	if(var_60_bool == 0) goto Label_3042; // 0xbe0 JumpB
	var_57_bool = 1; // 0xbe1 MovB
	
Label_3042:
	if(var_57_bool == 0) goto Label_3084; // 0xbe2 JumpB
	var_61_bool = var_36_int == 0; // 0xbe3 Not
	if(var_61_bool == 0) goto Label_3052; // 0xbe4 JumpB
	var_62_int = 3; // 0xbe5 PushI
	Sleep(var_62_int, var_38_bool); // 0xbe6 Func
	var_63_bool = var_38_bool == 0; // 0xbe8 Not
	if(var_63_bool == 0) goto Label_3051; // 0xbe9 JumpB
	goto Label_3084; // 0xbea Jump
	
Label_3084:
	ResetAAS(); // 0xc0c Func
	return 12; // 0xc0e Return
	
Label_3051:
	goto Label_3073; // 0xbeb Jump
	
Label_3073:
	var_64_bool = 0; // 0xc01 PushV
	func_3087(var_64_bool); // 0xc02 NEW_2
	var_65_bool = var_64_bool == 0; // 0xc04 Not
	if(var_65_bool == 0) goto Label_3079; // 0xc05 JumpB
	goto Label_3084; // 0xc06 Jump
	
Label_3079:
	ResetAAS(); // 0xc07 Func
	var_66_int = 1; // 0xc09 PushI
	var_37_int = var_37_int + var_66_int; // 0xc0a Add2
	goto Label_3032; // 0xc0b Jump
	
Label_3052:
	irand(var_39_int, var_36_int); // 0xbec Func
	var_67_int = 5; // 0xbee PushI
	irand(var_40_int, var_67_int); // 0xbef Func
	var_68_int = 0; // 0xbf1 PushI
	var_69_bool = var_40_int != var_68_int; // 0xbf2 Neq
	if(var_69_bool == 0) goto Label_3061; // 0xbf3 JumpB
	var_39_int = 0; // 0xbf4 MovI
	
Label_3061:
	var_70_string = "all"; // 0xbf5 PushS
	var_71_string = ""; var_72_int = 0; // 0xbf6 PushV
	var_72_int = var_39_int; // 0xbf7 Mov
	func_3504(var_71_string, var_72_int); // 0xbf8 NEW_2
	PlayAnimation(var_70_string, var_71_string); // 0xbfa Func
	WaitForAnimEnd(var_41_bool); // 0xbfc Func
	var_73_bool = var_41_bool == 0; // 0xbfe Not
	if(var_73_bool == 0) goto Label_3073; // 0xbff JumpB
	goto Label_3084; // 0xc00 Jump
}


func_3532(var_114_string)
{
	var_114_string = "ui/NPC_Block.png"; // 0xdcc MovS
	return 0; // 0xdcd Return
}


func_3534(var_115_string)
{
	var_115_string = "ui/NPC_Block_b.png"; // 0xdce MovS
	return 0; // 0xdcf Return
}


func_3536(var_107_bool)
{
	var_107_bool = 1; // 0xdd0 MovB
	return 0; // 0xdd1 Return
}


func_3538()
{
	var_70_string = "playsound"; // 0xdd3 PushS
	var_71_string = "giveitem"; // 0xdd4 PushS
	TriggerWorld(var_70_string, var_71_string); // 0xdd5 Func
	return 0; // 0xdd7 Return
}


func_3795(var_452_bool)
{
	var_454_int = 0; var_455_string = ""; // 0xed4 PushV
	var_455_string = "d11q01"; // 0xed5 MovS
	func_3420(var_454_int, var_455_string); // 0xed6 NEW_2
	var_456_int = 3; // 0xed8 PushI
	var_457_bool = var_454_int >= var_456_int; // 0xed9 GE
	if(var_457_bool == 0) goto Label_3805; // 0xeda JumpB
	var_452_bool = 1; // 0xedb MovB
	return 0; // 0xedc Return
	
Label_3805:
	var_452_bool = 0; // 0xedd MovB
	return 0; // 0xede Return
}


func_2774(var_2_object, var_620_string)
{
	var_621_bool = 0; // 0xad7 PushV
	func_3536(var_621_bool); // 0xad8 NEW_2
	var_622_bool = var_621_bool == 0; // 0xada Not
	if(var_622_bool == 0) goto Label_2781; // 0xadb JumpB
	return 0; // 0xadc Return
	
Label_2781:
	var_623_bool = var_620_string == var_2_object; // 0xadd Eq
	if(var_623_bool == 0) goto Label_2784; // 0xade JumpB
	return 0; // 0xadf Return
	
Label_2784:
	var_624_string = ""; var_625_bool = 0; // 0xae0 PushV
	var_624_string = var_620_string; // 0xae1 Mov
	var_626_string = ""; // 0xae2 PushS
	var_627_bool = var_620_string == var_626_string; // 0xae3 Eq
	if(var_627_bool == 0) goto Label_2791; // 0xae4 JumpB
	var_625_bool = 0; // 0xae5 MovB
	goto Label_2792; // 0xae6 Jump
	
Label_2792:
	func_3367(var_624_string, var_625_bool); // 0xae8 NEW_2
	var_2_object = var_620_string; // 0xaea TMov
	return 0; // 0xaeb Return
	
Label_2791:
	var_625_bool = 1; // 0xae7 MovB
}


func_3544()
{
	var_34_string = "ood9Block3"; // 0xdd9 PushS
	var_35_int = 1; // 0xdda PushI
	SetVariable(var_34_string, var_35_int); // 0xddb Func
	return 0; // 0xddd Return
}


func_1753(var_0_object, var_328_int, var_329_object)
{
	var_331_object = Obj(); var_332_bool = 0; var_333_int = 0; var_334_bool = 0; var_335_object = Obj(); var_336_bool = 0; var_337_int = 0; var_338_bool = 0; // 0x6d9 PushV
	var_0_object = var_329_object; // 0x6da TMov
	var_339_bool = 0; var_340_object = Obj(); var_341_float = 0; // 0x6db PushV
	var_340_object = var_329_object; // 0x6dc Mov
	var_341_float = 70.0; // 0x6dd MovF
	func_3126(var_340_object, var_341_float); // 0x6de NEW_2
	var_342_bool = var_339_bool == 0; // 0x6e0 Not
	if(var_342_bool == 0) goto Label_1764; // 0x6e1 JumpB
	var_328_int = -2; // 0x6e2 MovI
	return 8; // 0x6e3 Return
	
Label_1764:
	CreateDialog(var_335_object); // 0x6e4 Func
	var_343_int = 0; // 0x6e6 PushV
	func_3530(var_343_int); // 0x6e7 NEW_2
	SetNPCName(var_343_int); // 0x6e9 ObjFunc
	var_344_int = 0; // 0x6eb PushV
	func_3528(var_344_int); // 0x6ec NEW_2
	SetNPCDescription(var_344_int); // 0x6ee ObjFunc
	var_345_string = ""; // 0x6f0 PushV
	func_3532(var_345_string); // 0x6f1 NEW_2
	SetPhoto(var_345_string); // 0x6f3 ObjFunc
	var_346_string = ""; // 0x6f5 PushV
	func_3534(var_346_string); // 0x6f6 NEW_2
	SetPhoto2(var_346_string); // 0x6f8 ObjFunc
	var_347_int = 0; // 0x6fa PushV
	func_3921(var_347_int); // 0x6fb NEW_2
	SetPlayerName(var_347_int); // 0x6fd ObjFunc
	var_337_int = -1; // 0x6ff MovI
	IsOverrideActive(var_336_bool); // 0x700 Func
	var_348_bool = var_336_bool; // 0x702 Push
	if(var_348_bool == 0) goto Label_1798; // 0x703 JumpB
	var_328_int = -2; // 0x704 MovI
	return 8; // 0x705 Return
	
Label_1798:
	DoDialog(var_335_object); // 0x706 Func
	var_349_bool = 0; var_350_object = Obj(); // 0x708 PushV
	var_351_object = Obj(); // 0x709 PushV
	func_3404(var_351_object); // 0x70a NEW_2
	var_350_object = var_351_object; // 0x70b Mov
	func_3213(var_349_bool, var_350_object); // 0x70d NEW_2
	var_352_object = Obj(); var_353_object = Obj(); // 0x70f PushV
	var_352_object = var_329_object; // 0x710 Mov
	var_353_object = var_335_object; // 0x711 Mov
	TaskCall(5); // 0x712 TaskCall
	func_1834(var_354_object, var_355_object, var_356_string, var_357_bool, var_352_object, var_353_object); // 0x713 NEW_2
	TaskReturn(); // 0x714 TaskReturn
	IsDialogEnd(var_338_bool); // 0x716 ObjFunc
	
Label_1816:
	var_391_bool = var_338_bool == 0; // 0x718 Not
	if(var_391_bool == 0) goto Label_1823; // 0x719 JumpB
	sync(); // 0x71a Func
	IsDialogEnd(var_338_bool); // 0x71c ObjFunc
	goto Label_1816; // 0x71e Jump
	
Label_1823:
	var_392_object = Obj(); // 0x71f PushV
	var_392_object = var_329_object; // 0x720 Mov
	func_3195(); // 0x721 NEW_2
	StopDialog(var_335_object); // 0x723 Func
	GetReturnValue(var_337_int); // 0x725 ObjFunc
	var_328_int = var_337_int; // 0x727 Mov
	return 8; // 0x728 Return
}


func_984(var_0_object, var_395_int, var_396_object)
{
	var_398_object = Obj(); var_399_bool = 0; var_400_int = 0; var_401_bool = 0; var_402_object = Obj(); var_403_bool = 0; var_404_int = 0; var_405_bool = 0; // 0x3d8 PushV
	var_0_object = var_396_object; // 0x3d9 TMov
	var_406_bool = 0; var_407_object = Obj(); var_408_float = 0; // 0x3da PushV
	var_407_object = var_396_object; // 0x3db Mov
	var_408_float = 70.0; // 0x3dc MovF
	func_3126(var_407_object, var_408_float); // 0x3dd NEW_2
	var_409_bool = var_406_bool == 0; // 0x3df Not
	if(var_409_bool == 0) goto Label_995; // 0x3e0 JumpB
	var_395_int = -2; // 0x3e1 MovI
	return 8; // 0x3e2 Return
	
Label_995:
	CreateDialog(var_402_object); // 0x3e3 Func
	var_410_int = 0; // 0x3e5 PushV
	func_3530(var_410_int); // 0x3e6 NEW_2
	SetNPCName(var_410_int); // 0x3e8 ObjFunc
	var_411_int = 0; // 0x3ea PushV
	func_3528(var_411_int); // 0x3eb NEW_2
	SetNPCDescription(var_411_int); // 0x3ed ObjFunc
	var_412_string = ""; // 0x3ef PushV
	func_3532(var_412_string); // 0x3f0 NEW_2
	SetPhoto(var_412_string); // 0x3f2 ObjFunc
	var_413_string = ""; // 0x3f4 PushV
	func_3534(var_413_string); // 0x3f5 NEW_2
	SetPhoto2(var_413_string); // 0x3f7 ObjFunc
	var_414_int = 0; // 0x3f9 PushV
	func_3921(var_414_int); // 0x3fa NEW_2
	SetPlayerName(var_414_int); // 0x3fc ObjFunc
	var_404_int = -1; // 0x3fe MovI
	IsOverrideActive(var_403_bool); // 0x3ff Func
	var_415_bool = var_403_bool; // 0x401 Push
	if(var_415_bool == 0) goto Label_1029; // 0x402 JumpB
	var_395_int = -2; // 0x403 MovI
	return 8; // 0x404 Return
	
Label_1029:
	DoDialog(var_402_object); // 0x405 Func
	var_416_bool = 0; var_417_object = Obj(); // 0x407 PushV
	var_418_object = Obj(); // 0x408 PushV
	func_3404(var_418_object); // 0x409 NEW_2
	var_417_object = var_418_object; // 0x40a Mov
	func_3213(var_416_bool, var_417_object); // 0x40c NEW_2
	var_419_object = Obj(); var_420_object = Obj(); // 0x40e PushV
	var_419_object = var_396_object; // 0x40f Mov
	var_420_object = var_402_object; // 0x410 Mov
	TaskCall(3); // 0x411 TaskCall
	func_1065(var_421_object, var_422_object, var_423_string, var_424_bool, var_419_object, var_420_object); // 0x412 NEW_2
	TaskReturn(); // 0x413 TaskReturn
	IsDialogEnd(var_405_bool); // 0x415 ObjFunc
	
Label_1047:
	var_494_bool = var_405_bool == 0; // 0x417 Not
	if(var_494_bool == 0) goto Label_1054; // 0x418 JumpB
	sync(); // 0x419 Func
	IsDialogEnd(var_405_bool); // 0x41b ObjFunc
	goto Label_1047; // 0x41d Jump
	
Label_1054:
	var_495_object = Obj(); // 0x41e PushV
	var_495_object = var_396_object; // 0x41f Mov
	func_3195(); // 0x420 NEW_2
	StopDialog(var_402_object); // 0x422 Func
	GetReturnValue(var_404_int); // 0x424 ObjFunc
	var_395_int = var_404_int; // 0x426 Mov
	return 8; // 0x427 Return
}


func_3550()
{
	var_101_string = "d9q02"; // 0xddf PushS
	var_102_int = 2; // 0xde0 PushI
	SetVariable(var_101_string, var_102_int); // 0xde1 Func
	func_3867(); // 0xde4 NEW_2
	var_126_bool = 0; var_127_string = ""; var_128_string = ""; // 0xde6 PushV
	var_127_string = "quest_d9_02"; // 0xde7 MovS
	var_128_string = "init_soldiers"; // 0xde8 MovS
	func_3469(var_126_bool, var_127_string, var_128_string); // 0xde9 NEW_2
	return 0; // 0xdeb Return
}


func_3807(var_458_bool)
{
	var_460_int = 0; var_461_string = ""; // 0xee0 PushV
	var_461_string = "ood11Block2"; // 0xee1 MovS
	func_3420(var_460_int, var_461_string); // 0xee2 NEW_2
	var_462_int = 0; // 0xee4 PushI
	var_463_bool = var_460_int == var_462_int; // 0xee5 Eq
	if(var_463_bool == 0) goto Label_3817; // 0xee6 JumpB
	var_458_bool = 1; // 0xee7 MovB
	return 0; // 0xee8 Return
	
Label_3817:
	var_458_bool = 0; // 0xee9 MovB
	return 0; // 0xeea Return
}


func_3819(var_474_bool)
{
	var_476_int = 0; var_477_string = ""; // 0xeec PushV
	var_477_string = "ood11Block3"; // 0xeed MovS
	func_3420(var_476_int, var_477_string); // 0xeee NEW_2
	var_478_int = 0; // 0xef0 PushI
	var_479_bool = var_476_int == var_478_int; // 0xef1 Eq
	if(var_479_bool == 0) goto Label_3829; // 0xef2 JumpB
	var_474_bool = 1; // 0xef3 MovB
	return 0; // 0xef4 Return
	
Label_3829:
	var_474_bool = 0; // 0xef5 MovB
	return 0; // 0xef6 Return
}


func_3308(var_167_bool)
{
	var_169_string = ""; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_string = ""; var_174_string = ""; var_175_int = 0; var_176_bool = 0; var_177_int = 0; var_178_string = ""; // 0xcec PushV
	var_179_string = "d"; // 0xced PushS
	var_180_int = 0; // 0xcee PushV
	func_3481(var_180_int); // 0xcef NEW_2
	var_181_int = var_179_string + var_180_int; // 0xcf1 Add
	var_182_string = "m"; // 0xcf2 PushS
	var_174_string = var_181_int + var_182_string; // 0xcf3 Add2
	var_175_int = 0; // 0xcf4 MovI
	
Label_3317:
	var_183_int = 1; // 0xcf5 PushI
	if(var_183_int == 0) goto Label_3330; // 0xcf6 JumpB
	var_184_int = 1; // 0xcf7 PushI
	var_185_int = var_175_int + var_184_int; // 0xcf8 Add
	var_186_int = var_174_string + var_185_int; // 0xcf9 Add
	HasProperty(var_186_int, var_176_bool); // 0xcfa ObjFunc
	var_187_bool = var_176_bool == 0; // 0xcfc Not
	if(var_187_bool == 0) goto Label_3327; // 0xcfd JumpB
	goto Label_3330; // 0xcfe Jump
	
Label_3330:
	var_188_bool = var_175_int == 0; // 0xd02 Not
	if(var_188_bool == 0) goto Label_3334; // 0xd03 JumpB
	var_167_bool = 0; // 0xd04 MovB
	return 10; // 0xd05 Return
	
Label_3334:
	var_177_int = 0; // 0xd06 MovI
	var_189_int = 1; // 0xd07 PushI
	var_190_bool = var_175_int > var_189_int; // 0xd08 GT
	if(var_190_bool == 0) goto Label_3340; // 0xd09 JumpB
	irand(var_177_int, var_175_int); // 0xd0a Func
	
Label_3340:
	var_191_int = 1; // 0xd0c PushI
	var_192_int = var_177_int + var_191_int; // 0xd0d Add
	var_193_int = var_174_string + var_192_int; // 0xd0e Add
	GetProperty(var_193_int, var_178_string); // 0xd0f ObjFunc
	var_194_bool = 0; var_195_string = ""; // 0xd11 PushV
	var_195_string = var_178_string; // 0xd12 Mov
	func_3382(var_194_bool, var_195_string); // 0xd13 NEW_2
	var_167_bool = var_194_bool; // 0xd14 Mov
	return 10; // 0xd16 Return
	
Label_3327:
	var_196_int = 1; // 0xcff PushI
	var_175_int = var_175_int + var_196_int; // 0xd00 Add2
	goto Label_3317; // 0xd01 Jump
}


func_3564()
{
	var_134_string = "d9LaraIsSaved"; // 0xded PushS
	var_135_int = 1; // 0xdee PushI
	SetVariable(var_134_string, var_135_int); // 0xdef Func
	return 0; // 0xdf1 Return
}


func_3570()
{
	func_3854(); // 0xdf4 NEW_2
	var_57_bool = 0; var_58_string = ""; var_59_string = ""; // 0xdf6 PushV
	var_58_string = "quest_d10_03"; // 0xdf7 MovS
	var_59_string = "place_sanitars"; // 0xdf8 MovS
	func_3469(var_57_bool, var_58_string, var_59_string); // 0xdf9 NEW_2
	var_63_bool = 0; var_64_string = ""; var_65_string = ""; // 0xdfb PushV
	var_64_string = "quest_d10_03"; // 0xdfc MovS
	var_65_string = "completed"; // 0xdfd MovS
	func_3469(var_63_bool, var_64_string, var_65_string); // 0xdfe NEW_2
	return 0; // 0xe00 Return
}


func_3831(var_278_bool)
{
	var_280_int = 0; var_281_string = ""; // 0xef8 PushV
	var_281_string = "ood9Block2"; // 0xef9 MovS
	func_3420(var_280_int, var_281_string); // 0xefa NEW_2
	var_282_int = 0; // 0xefc PushI
	var_283_bool = var_280_int == var_282_int; // 0xefd Eq
	if(var_283_bool == 0) goto Label_3841; // 0xefe JumpB
	var_278_bool = 1; // 0xeff MovB
	return 0; // 0xf00 Return
	
Label_3841:
	var_278_bool = 0; // 0xf01 MovB
	return 0; // 0xf02 Return
}


