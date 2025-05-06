task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x100 PushI
	if(var_8_int == 0) goto Label_740; // 0x101 JumpB
	func_1072(); // 0x103 NEW_2
	var_10_int = 37261; // 0x105 PushI
	var_11_bool = var_7_bool == var_10_int; // 0x106 Eq
	if(var_11_bool == 0) goto Label_269; // 0x107 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0x108 PushV
	var_12_object = var_1_object; // 0x109 MovT
	var_13_object = var_0_object; // 0x10a MovT
	func_1124(); // 0x10b NEW_2
	
Label_269:
	var_45_int = 37264; // 0x10d PushI
	var_46_bool = var_7_bool == var_45_int; // 0x10e Eq
	if(var_46_bool == 0) goto Label_277; // 0x10f JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x110 PushV
	var_47_object = var_1_object; // 0x111 MovT
	var_48_object = var_0_object; // 0x112 MovT
	func_1115(); // 0x113 NEW_2
	
Label_277:
	var_59_int = 37320; // 0x115 PushI
	var_60_bool = var_7_bool == var_59_int; // 0x116 Eq
	if(var_60_bool == 0) goto Label_285; // 0x117 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x118 PushV
	var_61_object = var_1_object; // 0x119 MovT
	var_62_object = var_0_object; // 0x11a MovT
	func_1115(); // 0x11b NEW_2
	
Label_285:
	var_63_int = 42338; // 0x11d PushI
	var_64_bool = var_7_bool == var_63_int; // 0x11e Eq
	if(var_64_bool == 0) goto Label_293; // 0x11f JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0x120 PushV
	var_65_object = var_1_object; // 0x121 MovT
	var_66_object = var_0_object; // 0x122 MovT
	func_1146(); // 0x123 NEW_2
	
Label_293:
	var_69_int = 37250; // 0x125 PushI
	var_70_bool = var_6_int == var_69_int; // 0x126 Eq
	if(var_70_bool == 0) goto Label_410; // 0x127 JumpB
	var_71_bool = 0; // 0x128 PushV
	var_71_bool = 0; // 0x129 MovB
	var_72_bool = 0; var_73_object = Obj(); // 0x12a PushV
	var_73_object = var_1_object; // 0x12b MovT
	func_1198(var_73_object); // 0x12c NEW_2
	if(var_72_bool == 0) goto Label_310; // 0x12e JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0x12f PushV
	var_79_object = var_1_object; // 0x130 MovT
	func_1174(var_79_object); // 0x131 NEW_2
	var_84_bool = var_78_bool == 0; // 0x133 Not
	if(var_84_bool == 0) goto Label_310; // 0x134 JumpB
	var_71_bool = 1; // 0x135 MovB
	
Label_310:
	if(var_71_bool == 0) goto Label_341; // 0x136 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x137 PushV
	var_85_object = var_1_object; // 0x138 MovT
	var_86_object = var_0_object; // 0x139 MovT
	func_1109(); // 0x13a NEW_2
	var_89_object = Obj(); var_90_object = Obj(); // 0x13c PushV
	var_89_object = var_1_object; // 0x13d MovT
	var_90_object = var_0_object; // 0x13e MovT
	func_1140(); // 0x13f NEW_2
	var_93_string = ""; // 0x141 PushV
	var_93_string = "Neutral"; // 0x142 MovS
	func_233(var_7_bool, var_93_string); // 0x143 NEW_2
	var_110_int = 535567; // 0x145 PushI
	SetMessage(var_110_int); // 0x146 TObjFunc
	ClearReplies(); // 0x148 TObjFunc
	var_111_int = 535568; // 0x14a PushI
	var_112_int = 37252; // 0x14b PushI
	var_113_int = 37251; // 0x14c PushI
	AddReply(var_111_int, var_112_int, var_113_int); // 0x14d TObjFunc
	var_114_int = 535587; // 0x14f PushI
	var_115_int = 42035; // 0x150 PushI
	var_116_int = 37272; // 0x151 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x152 TObjFunc
	return 0; // 0x154 Return
	
Label_341:
	var_117_object = Obj(); var_118_object = Obj(); // 0x155 PushV
	var_117_object = var_1_object; // 0x156 MovT
	var_118_object = var_0_object; // 0x157 MovT
	func_1140(); // 0x158 NEW_2
	var_119_string = ""; // 0x15a PushV
	var_119_string = "Neutral"; // 0x15b MovS
	func_233(var_7_bool, var_119_string); // 0x15c NEW_2
	var_120_int = 535630; // 0x15e PushI
	SetMessage(var_120_int); // 0x15f TObjFunc
	ClearReplies(); // 0x161 TObjFunc
	var_121_bool = 0; // 0x163 PushV
	var_121_bool = 0; // 0x164 MovB
	var_122_bool = 0; // 0x165 PushV
	var_122_bool = 0; // 0x166 MovB
	var_123_bool = 0; var_124_object = Obj(); // 0x167 PushV
	var_124_object = var_1_object; // 0x168 MovT
	func_1186(var_124_object); // 0x169 NEW_2
	var_129_bool = var_123_bool == 0; // 0x16b Not
	if(var_129_bool == 0) goto Label_371; // 0x16c JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x16d PushV
	var_131_object = var_1_object; // 0x16e MovT
	func_1152(var_130_bool, var_131_object); // 0x16f NEW_2
	if(var_130_bool == 0) goto Label_371; // 0x171 JumpB
	var_122_bool = 1; // 0x172 MovB
	
Label_371:
	if(var_122_bool == 0) goto Label_379; // 0x173 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x174 PushV
	var_180_object = var_1_object; // 0x175 MovT
	func_1174(var_180_object); // 0x176 NEW_2
	var_181_bool = var_179_bool == 0; // 0x178 Not
	if(var_181_bool == 0) goto Label_379; // 0x179 JumpB
	var_121_bool = 1; // 0x17a MovB
	
Label_379:
	if(var_121_bool == 0) goto Label_385; // 0x17b JumpB
	var_182_int = 535631; // 0x17c PushI
	var_183_int = 37319; // 0x17d PushI
	var_184_int = 37317; // 0x17e PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x17f TObjFunc
	
Label_385:
	var_185_bool = 0; // 0x181 PushV
	var_185_bool = 0; // 0x182 MovB
	var_186_bool = 0; var_187_object = Obj(); // 0x183 PushV
	var_187_object = var_1_object; // 0x184 MovT
	func_1162(var_187_object); // 0x185 NEW_2
	if(var_186_bool == 0) goto Label_398; // 0x187 JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x188 PushV
	var_193_object = var_1_object; // 0x189 MovT
	func_1210(var_193_object); // 0x18a NEW_2
	if(var_192_bool == 0) goto Label_398; // 0x18c JumpB
	var_185_bool = 1; // 0x18d MovB
	
Label_398:
	if(var_185_bool == 0) goto Label_404; // 0x18e JumpB
	var_198_int = 540355; // 0x18f PushI
	var_199_int = 42339; // 0x190 PushI
	var_200_int = 42338; // 0x191 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x192 TObjFunc
	
Label_404:
	var_201_int = 535632; // 0x194 PushI
	var_202_int = -1; // 0x195 PushI
	var_203_int = 37318; // 0x196 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x197 TObjFunc
	return 0; // 0x199 Return
	
Label_410:
	var_204_int = 42339; // 0x19a PushI
	var_205_bool = var_6_int == var_204_int; // 0x19b Eq
	if(var_205_bool == 0) goto Label_428; // 0x19c JumpB
	var_206_string = ""; // 0x19d PushV
	var_206_string = "Smile"; // 0x19e MovS
	func_233(var_7_bool, var_206_string); // 0x19f NEW_2
	var_207_int = 540356; // 0x1a1 PushI
	SetMessage(var_207_int); // 0x1a2 TObjFunc
	ClearReplies(); // 0x1a4 TObjFunc
	var_208_int = 540357; // 0x1a6 PushI
	var_209_int = 42341; // 0x1a7 PushI
	var_210_int = 42340; // 0x1a8 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1a9 TObjFunc
	return 0; // 0x1ab Return
	
Label_428:
	var_211_int = 42341; // 0x1ac PushI
	var_212_bool = var_6_int == var_211_int; // 0x1ad Eq
	if(var_212_bool == 0) goto Label_446; // 0x1ae JumpB
	var_213_string = ""; // 0x1af PushV
	var_213_string = "Smile"; // 0x1b0 MovS
	func_233(var_7_bool, var_213_string); // 0x1b1 NEW_2
	var_214_int = 540358; // 0x1b3 PushI
	SetMessage(var_214_int); // 0x1b4 TObjFunc
	ClearReplies(); // 0x1b6 TObjFunc
	var_215_int = 540359; // 0x1b8 PushI
	var_216_int = 42343; // 0x1b9 PushI
	var_217_int = 42342; // 0x1ba PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x1bb TObjFunc
	return 0; // 0x1bd Return
	
Label_446:
	var_218_int = 42343; // 0x1be PushI
	var_219_bool = var_6_int == var_218_int; // 0x1bf Eq
	if(var_219_bool == 0) goto Label_464; // 0x1c0 JumpB
	var_220_string = ""; // 0x1c1 PushV
	var_220_string = "Smile"; // 0x1c2 MovS
	func_233(var_7_bool, var_220_string); // 0x1c3 NEW_2
	var_221_int = 540360; // 0x1c5 PushI
	SetMessage(var_221_int); // 0x1c6 TObjFunc
	ClearReplies(); // 0x1c8 TObjFunc
	var_222_int = 540361; // 0x1ca PushI
	var_223_int = 42345; // 0x1cb PushI
	var_224_int = 42344; // 0x1cc PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1cd TObjFunc
	return 0; // 0x1cf Return
	
Label_464:
	var_225_int = 42345; // 0x1d0 PushI
	var_226_bool = var_6_int == var_225_int; // 0x1d1 Eq
	if(var_226_bool == 0) goto Label_487; // 0x1d2 JumpB
	var_227_string = ""; // 0x1d3 PushV
	var_227_string = "Smile"; // 0x1d4 MovS
	func_233(var_7_bool, var_227_string); // 0x1d5 NEW_2
	var_228_int = 540362; // 0x1d7 PushI
	SetMessage(var_228_int); // 0x1d8 TObjFunc
	ClearReplies(); // 0x1da TObjFunc
	var_229_int = 540363; // 0x1dc PushI
	var_230_int = 42347; // 0x1dd PushI
	var_231_int = 42346; // 0x1de PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x1df TObjFunc
	var_232_int = 540366; // 0x1e1 PushI
	var_233_int = -1; // 0x1e2 PushI
	var_234_int = 42349; // 0x1e3 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x1e4 TObjFunc
	return 0; // 0x1e6 Return
	
Label_487:
	var_235_int = 42347; // 0x1e7 PushI
	var_236_bool = var_6_int == var_235_int; // 0x1e8 Eq
	if(var_236_bool == 0) goto Label_510; // 0x1e9 JumpB
	var_237_string = ""; // 0x1ea PushV
	var_237_string = "Smile"; // 0x1eb MovS
	func_233(var_7_bool, var_237_string); // 0x1ec NEW_2
	var_238_int = 540364; // 0x1ee PushI
	SetMessage(var_238_int); // 0x1ef TObjFunc
	ClearReplies(); // 0x1f1 TObjFunc
	var_239_int = 540365; // 0x1f3 PushI
	var_240_int = -1; // 0x1f4 PushI
	var_241_int = 42348; // 0x1f5 PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x1f6 TObjFunc
	var_242_int = 540367; // 0x1f8 PushI
	var_243_int = -1; // 0x1f9 PushI
	var_244_int = 42350; // 0x1fa PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x1fb TObjFunc
	return 0; // 0x1fd Return
	
Label_510:
	var_245_int = 37319; // 0x1fe PushI
	var_246_bool = var_6_int == var_245_int; // 0x1ff Eq
	if(var_246_bool == 0) goto Label_528; // 0x200 JumpB
	var_247_string = ""; // 0x201 PushV
	var_247_string = "Neutral"; // 0x202 MovS
	func_233(var_7_bool, var_247_string); // 0x203 NEW_2
	var_248_int = 535633; // 0x205 PushI
	SetMessage(var_248_int); // 0x206 TObjFunc
	ClearReplies(); // 0x208 TObjFunc
	var_249_int = 535634; // 0x20a PushI
	var_250_int = -1; // 0x20b PushI
	var_251_int = 37320; // 0x20c PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x20d TObjFunc
	return 0; // 0x20f Return
	
Label_528:
	var_252_int = 37252; // 0x210 PushI
	var_253_bool = var_6_int == var_252_int; // 0x211 Eq
	if(var_253_bool == 0) goto Label_551; // 0x212 JumpB
	var_254_string = ""; // 0x213 PushV
	var_254_string = "Doubt"; // 0x214 MovS
	func_233(var_7_bool, var_254_string); // 0x215 NEW_2
	var_255_int = 535569; // 0x217 PushI
	SetMessage(var_255_int); // 0x218 TObjFunc
	ClearReplies(); // 0x21a TObjFunc
	var_256_int = 535570; // 0x21c PushI
	var_257_int = 42035; // 0x21d PushI
	var_258_int = 37253; // 0x21e PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x21f TObjFunc
	var_259_int = 540085; // 0x221 PushI
	var_260_int = 42050; // 0x222 PushI
	var_261_int = 42049; // 0x223 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x224 TObjFunc
	return 0; // 0x226 Return
	
Label_551:
	var_262_int = 42050; // 0x227 PushI
	var_263_bool = var_6_int == var_262_int; // 0x228 Eq
	if(var_263_bool == 0) goto Label_574; // 0x229 JumpB
	var_264_string = ""; // 0x22a PushV
	var_264_string = "Neutral"; // 0x22b MovS
	func_233(var_7_bool, var_264_string); // 0x22c NEW_2
	var_265_int = 540086; // 0x22e PushI
	SetMessage(var_265_int); // 0x22f TObjFunc
	ClearReplies(); // 0x231 TObjFunc
	var_266_int = 540087; // 0x233 PushI
	var_267_int = 42035; // 0x234 PushI
	var_268_int = 42051; // 0x235 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x236 TObjFunc
	var_269_int = 540090; // 0x238 PushI
	var_270_int = 42055; // 0x239 PushI
	var_271_int = 42056; // 0x23a PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x23b TObjFunc
	return 0; // 0x23d Return
	
Label_574:
	var_272_int = 42035; // 0x23e PushI
	var_273_bool = var_6_int == var_272_int; // 0x23f Eq
	if(var_273_bool == 0) goto Label_597; // 0x240 JumpB
	var_274_string = ""; // 0x241 PushV
	var_274_string = "Doubt"; // 0x242 MovS
	func_233(var_7_bool, var_274_string); // 0x243 NEW_2
	var_275_int = 540072; // 0x245 PushI
	SetMessage(var_275_int); // 0x246 TObjFunc
	ClearReplies(); // 0x248 TObjFunc
	var_276_int = 540073; // 0x24a PushI
	var_277_int = 42037; // 0x24b PushI
	var_278_int = 42036; // 0x24c PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x24d TObjFunc
	var_279_int = 540084; // 0x24f PushI
	var_280_int = 42039; // 0x250 PushI
	var_281_int = 42047; // 0x251 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x252 TObjFunc
	return 0; // 0x254 Return
	
Label_597:
	var_282_int = 42037; // 0x255 PushI
	var_283_bool = var_6_int == var_282_int; // 0x256 Eq
	if(var_283_bool == 0) goto Label_615; // 0x257 JumpB
	var_284_string = ""; // 0x258 PushV
	var_284_string = "Doubt"; // 0x259 MovS
	func_233(var_7_bool, var_284_string); // 0x25a NEW_2
	var_285_int = 540074; // 0x25c PushI
	SetMessage(var_285_int); // 0x25d TObjFunc
	ClearReplies(); // 0x25f TObjFunc
	var_286_int = 540088; // 0x261 PushI
	var_287_int = 42055; // 0x262 PushI
	var_288_int = 42054; // 0x263 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x264 TObjFunc
	return 0; // 0x266 Return
	
Label_615:
	var_289_int = 42055; // 0x267 PushI
	var_290_bool = var_6_int == var_289_int; // 0x268 Eq
	if(var_290_bool == 0) goto Label_638; // 0x269 JumpB
	var_291_string = ""; // 0x26a PushV
	var_291_string = "Sorrow"; // 0x26b MovS
	func_233(var_7_bool, var_291_string); // 0x26c NEW_2
	var_292_int = 540089; // 0x26e PushI
	SetMessage(var_292_int); // 0x26f TObjFunc
	ClearReplies(); // 0x271 TObjFunc
	var_293_int = 540075; // 0x273 PushI
	var_294_int = 42039; // 0x274 PushI
	var_295_int = 42038; // 0x275 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x276 TObjFunc
	var_296_int = 541860; // 0x278 PushI
	var_297_int = 37260; // 0x279 PushI
	var_298_int = 44086; // 0x27a PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x27b TObjFunc
	return 0; // 0x27d Return
	
Label_638:
	var_299_int = 42039; // 0x27e PushI
	var_300_bool = var_6_int == var_299_int; // 0x27f Eq
	if(var_300_bool == 0) goto Label_656; // 0x280 JumpB
	var_301_string = ""; // 0x281 PushV
	var_301_string = "Neutral"; // 0x282 MovS
	func_233(var_7_bool, var_301_string); // 0x283 NEW_2
	var_302_int = 540076; // 0x285 PushI
	SetMessage(var_302_int); // 0x286 TObjFunc
	ClearReplies(); // 0x288 TObjFunc
	var_303_int = 540077; // 0x28a PushI
	var_304_int = 37260; // 0x28b PushI
	var_305_int = 42040; // 0x28c PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x28d TObjFunc
	return 0; // 0x28f Return
	
Label_656:
	var_306_int = 37260; // 0x290 PushI
	var_307_bool = var_6_int == var_306_int; // 0x291 Eq
	if(var_307_bool == 0) goto Label_710; // 0x292 JumpB
	var_308_bool = 0; var_309_object = Obj(); // 0x293 PushV
	var_309_object = var_1_object; // 0x294 MovT
	func_1152(var_308_bool, var_309_object); // 0x295 NEW_2
	var_310_bool = var_308_bool == 0; // 0x297 Not
	if(var_310_bool == 0) goto Label_685; // 0x298 JumpB
	var_311_string = ""; // 0x299 PushV
	var_311_string = "Agression"; // 0x29a MovS
	func_233(var_7_bool, var_311_string); // 0x29b NEW_2
	var_312_int = 535577; // 0x29d PushI
	SetMessage(var_312_int); // 0x29e TObjFunc
	ClearReplies(); // 0x2a0 TObjFunc
	var_313_int = 540353; // 0x2a2 PushI
	var_314_int = 42337; // 0x2a3 PushI
	var_315_int = 42336; // 0x2a4 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x2a5 TObjFunc
	var_316_int = 535579; // 0x2a7 PushI
	var_317_int = -1; // 0x2a8 PushI
	var_318_int = 37262; // 0x2a9 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x2aa TObjFunc
	return 0; // 0x2ac Return
	
Label_685:
	var_319_bool = 0; var_320_object = Obj(); // 0x2ad PushV
	var_320_object = var_1_object; // 0x2ae MovT
	func_1152(var_319_bool, var_320_object); // 0x2af NEW_2
	if(var_319_bool == 0) goto Label_710; // 0x2b1 JumpB
	var_321_string = ""; // 0x2b2 PushV
	var_321_string = "Neutral"; // 0x2b3 MovS
	func_233(var_7_bool, var_321_string); // 0x2b4 NEW_2
	var_322_int = 535580; // 0x2b6 PushI
	SetMessage(var_322_int); // 0x2b7 TObjFunc
	ClearReplies(); // 0x2b9 TObjFunc
	var_323_int = 535581; // 0x2bb PushI
	var_324_int = -1; // 0x2bc PushI
	var_325_int = 37264; // 0x2bd PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x2be TObjFunc
	var_326_int = 535582; // 0x2c0 PushI
	var_327_int = -1; // 0x2c1 PushI
	var_328_int = 37265; // 0x2c2 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x2c3 TObjFunc
	return 0; // 0x2c5 Return
	
Label_710:
	var_329_int = 42337; // 0x2c6 PushI
	var_330_bool = var_6_int == var_329_int; // 0x2c7 Eq
	if(var_330_bool == 0) goto Label_728; // 0x2c8 JumpB
	var_331_string = ""; // 0x2c9 PushV
	var_331_string = "Neutral"; // 0x2ca MovS
	func_233(var_7_bool, var_331_string); // 0x2cb NEW_2
	var_332_int = 540354; // 0x2cd PushI
	SetMessage(var_332_int); // 0x2ce TObjFunc
	ClearReplies(); // 0x2d0 TObjFunc
	var_333_int = 535578; // 0x2d2 PushI
	var_334_int = -1; // 0x2d3 PushI
	var_335_int = 37261; // 0x2d4 PushI
	AddReply(var_333_int, var_334_int, var_335_int); // 0x2d5 TObjFunc
	return 0; // 0x2d7 Return
	
Label_728:
	var_3_string = 1; // 0x2d8 TMovB
	var_336_bool = 0; // 0x2d9 PushV
	func_1411(var_336_bool); // 0x2da NEW_2
	if(var_336_bool == 0) goto Label_736; // 0x2dc JumpB
	lshStopAnimation(); // 0x2dd Func
	goto Label_738; // 0x2df Jump
	
Label_738:
	return 0; // 0x2e2 Return
	
Label_736:
	StopAnimation(); // 0x2e0 Func
	
Label_740:
	return 0; // 0x2e4 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x2ea PushV
	var_8_object = var_6_object; // 0x2eb Mov
	TaskCall(0); // 0x2ec TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x2ed NEW_2
	TaskReturn(); // 0x2ee TaskReturn
	return 0; // 0x2f0 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x2f5 PushV
	var_9_string = "cleanup"; // 0x2f6 PushS
	var_10_bool = var_6_string == var_9_string; // 0x2f7 Eq
	if(var_10_bool == 0) goto Label_780; // 0x2f8 JumpB
	var_0_object = 1; // 0x2f9 TMovB
	IsLoaded(var_8_bool); // 0x2fa Func
	var_11_bool = 0; // 0x2fc PushV
	var_11_bool = 0; // 0x2fd MovB
	var_12_bool = var_8_bool == 0; // 0x2fe Not
	if(var_12_bool == 0) goto Label_773; // 0x2ff JumpB
	var_13_bool = 0; // 0x300 PushV
	func_801(var_13_bool); // 0x301 NEW_2
	if(var_13_bool == 0) goto Label_773; // 0x303 JumpB
	var_11_bool = 1; // 0x304 MovB
	
Label_773:
	if(var_11_bool == 0) goto Label_779; // 0x305 JumpB
	var_14_object = Obj(); // 0x306 PushV
	func_1079(var_14_object); // 0x307 NEW_2
	RemoveActor(var_14_object); // 0x309 Func
	
Label_779:
	goto Label_784; // 0x30b Jump
	
Label_784:
	return 2; // 0x310 Return
	
Label_780:
	var_17_string = "restore"; // 0x30c PushS
	var_18_bool = var_6_string == var_17_string; // 0x30d Eq
	if(var_18_bool == 0) goto Label_784; // 0x30e JumpB
	var_0_object = 0; // 0x30f TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x311 PushV
	var_6_bool = 0; // 0x312 MovB
	var_7_object = var_0_object; // 0x313 PushT
	if(var_7_object == 0) goto Label_794; // 0x314 JumpB
	var_8_bool = 0; // 0x315 PushV
	func_801(var_8_bool); // 0x316 NEW_2
	if(var_8_bool == 0) goto Label_794; // 0x318 JumpB
	var_6_bool = 1; // 0x319 MovB
	
Label_794:
	if(var_6_bool == 0) goto Label_800; // 0x31a JumpB
	var_9_object = Obj(); // 0x31b PushV
	func_1079(var_9_object); // 0x31c NEW_2
	RemoveActor(var_9_object); // 0x31e Func
	
Label_800:
	return 0; // 0x320 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_753(); // 0x2e6 NEW_2
	return 0; // 0x2e8 Return
}


func_1152(var_259_bool, var_260_object)
{
	var_261_bool = 0; var_262_object = Obj(); // 0x481 PushV
	var_262_object = var_260_object; // 0x482 Mov
	func_1222(var_262_object); // 0x483 NEW_2
	if(var_261_bool == 0) goto Label_1160; // 0x485 JumpB
	var_259_bool = 1; // 0x486 MovB
	return 0; // 0x487 Return
	
Label_1160:
	var_259_bool = 0; // 0x488 MovB
	return 0; // 0x489 Return
}


func_1409(var_68_string)
{
	var_68_string = "ui/NPC_Burah_b.png"; // 0x581 MovS
	return 0; // 0x582 Return
}


func_1026(var_230_string)
{
	var_231_bool = 0; var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_float = 0; var_236_float = 0; // 0x402 PushV
	lshHasAnimation(var_234_bool, var_230_string); // 0x403 Func
	var_237_bool = var_234_bool; // 0x405 Push
	if(var_237_bool == 0) goto Label_1037; // 0x406 JumpB
	lshGetAnimTimes(var_230_string, var_235_float, var_236_float); // 0x407 Func
	var_238_bool = 0; // 0x409 PushB
	lshPlayAnimation(var_235_float, var_236_float, var_238_bool); // 0x40a Func
	goto Label_1041; // 0x40c Jump
	
Label_1041:
	return 6; // 0x411 Return
	
Label_1037:
	var_239_string = "Can't find lsh animation : "; // 0x40d PushS
	var_240_int = var_239_string + var_230_string; // 0x40e Add
	Trace(var_240_int); // 0x40f Func
}


func_1411(var_60_bool)
{
	var_60_bool = 1; // 0x583 MovB
	return 0; // 0x584 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_803(var_19_object, var_20_float); // 0x5 NEW_2
	var_64_bool = var_18_bool == 0; // 0x7 Not
	if(var_64_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_65_int = 0; // 0xd PushV
	func_1405(var_65_int); // 0xe NEW_2
	SetNPCName(var_65_int); // 0x10 ObjFunc
	var_66_int = 0; // 0x12 PushV
	func_1403(var_66_int); // 0x13 NEW_2
	SetNPCDescription(var_66_int); // 0x15 ObjFunc
	var_67_string = ""; // 0x17 PushV
	func_1407(var_67_string); // 0x18 NEW_2
	SetPhoto(var_67_string); // 0x1a ObjFunc
	var_68_string = ""; // 0x1c PushV
	func_1409(var_68_string); // 0x1d NEW_2
	SetPhoto2(var_68_string); // 0x1f ObjFunc
	var_69_int = 0; // 0x21 PushV
	func_1295(var_69_int); // 0x22 NEW_2
	SetPlayerName(var_69_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_77_bool = var_15_bool; // 0x29 Push
	if(var_77_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_78_bool = 0; var_79_object = Obj(); // 0x2f PushV
	var_80_object = Obj(); // 0x30 PushV
	func_1079(var_80_object); // 0x31 NEW_2
	var_79_object = var_80_object; // 0x32 Mov
	func_888(var_78_bool, var_79_object); // 0x34 NEW_2
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_333_bool = var_17_bool == 0; // 0x3f Not
	if(var_333_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_334_object = Obj(); // 0x46 PushV
	var_334_object = var_8_object; // 0x47 Mov
	func_871(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1162(var_315_bool)
{
	var_317_int = 0; var_318_string = ""; // 0x48b PushV
	var_318_string = "b12q01ChildsAreVisited"; // 0x48c MovS
	func_1095(var_317_int, var_318_string); // 0x48d NEW_2
	var_319_int = 0; // 0x48f PushI
	var_320_bool = var_317_int != var_319_int; // 0x490 Neq
	if(var_320_bool == 0) goto Label_1172; // 0x491 JumpB
	var_315_bool = 1; // 0x492 MovB
	return 0; // 0x493 Return
	
Label_1172:
	var_315_bool = 0; // 0x494 MovB
	return 0; // 0x495 Return
}


func_1295(var_69_int)
{
	var_70_int = 0; var_71_int = 0; // 0x50f PushV
	var_72_string = "branch"; // 0x510 PushS
	GetVariable(var_72_string, var_71_int); // 0x511 Func
	var_73_int = 0; // 0x513 PushI
	var_74_bool = var_71_int == var_73_int; // 0x514 Eq
	if(var_74_bool == 0) goto Label_1305; // 0x515 JumpB
	var_69_int = 1; // 0x516 MovI
	return 2; // 0x517 Return
	
Label_1305:
	var_75_int = 1; // 0x519 PushI
	var_76_bool = var_71_int == var_75_int; // 0x51a Eq
	if(var_76_bool == 0) goto Label_1310; // 0x51b JumpB
	var_69_int = 2; // 0x51c MovI
	return 2; // 0x51d Return
	
Label_1310:
	var_69_int = 3; // 0x51e MovI
	return 2; // 0x51f Return
}


func_1042(var_208_string, var_209_bool)
{
	var_212_bool = 0; var_213_float = 0; var_214_float = 0; var_215_bool = 0; var_216_float = 0; var_217_float = 0; // 0x412 PushV
	lshHasAnimation(var_215_bool, var_208_string); // 0x413 Func
	var_218_bool = var_215_bool; // 0x415 Push
	if(var_218_bool == 0) goto Label_1052; // 0x416 JumpB
	lshGetAnimTimes(var_208_string, var_216_float, var_217_float); // 0x417 Func
	lshPlayAnimation(var_216_float, var_217_float, var_209_bool); // 0x419 Func
	goto Label_1056; // 0x41b Jump
	
Label_1056:
	return 6; // 0x420 Return
	
Label_1052:
	var_219_string = "Can't find lsh animation : "; // 0x41c PushS
	var_220_int = var_219_string + var_208_string; // 0x41d Add
	Trace(var_220_int); // 0x41e Func
}


func_1174(var_189_bool)
{
	var_191_int = 0; var_192_string = ""; // 0x497 PushV
	var_192_string = "game_final"; // 0x498 MovS
	func_1095(var_191_int, var_192_string); // 0x499 NEW_2
	var_193_int = 0; // 0x49b PushI
	var_194_bool = var_191_int != var_193_int; // 0x49c Neq
	if(var_194_bool == 0) goto Label_1184; // 0x49d JumpB
	var_189_bool = 1; // 0x49e MovB
	return 0; // 0x49f Return
	
Label_1184:
	var_189_bool = 0; // 0x4a0 MovB
	return 0; // 0x4a1 Return
}


func_1312(var_273_bool, var_274_int)
{
	var_275_int = 18; // 0x521 PushI
	add(var_275_int); // 0x522 ObjFunc
	var_276_int = 24; // 0x524 PushI
	add(var_276_int); // 0x525 ObjFunc
	var_277_int = 20; // 0x527 PushI
	add(var_277_int); // 0x528 ObjFunc
	var_278_int = 14; // 0x52a PushI
	add(var_278_int); // 0x52b ObjFunc
	var_279_bool = 0; // 0x52d PushB
	var_280_bool = var_273_bool == var_279_bool; // 0x52e Eq
	if(var_280_bool == 0) goto Label_1338; // 0x52f JumpB
	var_281_int = 10; // 0x530 PushI
	add(var_281_int); // 0x531 ObjFunc
	var_282_int = 17; // 0x533 PushI
	add(var_282_int); // 0x534 ObjFunc
	var_283_int = 8; // 0x536 PushI
	add(var_283_int); // 0x537 ObjFunc
	goto Label_1344; // 0x539 Jump
	
Label_1344:
	return 0; // 0x540 Return
	
Label_1338:
	var_284_int = 1; // 0x53a PushI
	var_285_bool = var_274_int != var_284_int; // 0x53b Neq
	if(var_285_bool == 0) goto Label_1344; // 0x53c JumpB
	var_286_int = 10; // 0x53d PushI
	add(var_286_int); // 0x53e ObjFunc
}


func_801(var_8_bool)
{
	var_8_bool = 1; // 0x321 MovB
	return 0; // 0x322 Return
}


func_1186(var_252_bool)
{
	var_254_int = 0; var_255_string = ""; // 0x4a3 PushV
	var_255_string = "d12q01BurahInSobor"; // 0x4a4 MovS
	func_1095(var_254_int, var_255_string); // 0x4a5 NEW_2
	var_256_int = 0; // 0x4a7 PushI
	var_257_bool = var_254_int != var_256_int; // 0x4a8 Neq
	if(var_257_bool == 0) goto Label_1196; // 0x4a9 JumpB
	var_252_bool = 1; // 0x4aa MovB
	return 0; // 0x4ab Return
	
Label_1196:
	var_252_bool = 0; // 0x4ac MovB
	return 0; // 0x4ad Return
}


func_803(var_18_bool, var_20_float)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; // 0x323 PushV
	GetPosition(var_31_cvector); // 0x324 ObjFunc
	GetEyesHeight(var_30_float); // 0x326 ObjFunc
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x328 PushE
	var_39_float = var_39_float + var_30_float; // 0x329 Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x32a PopE
	GetPosition(var_32_cvector); // 0x32b Func
	GetEyesHeight(var_30_float); // 0x32d Func
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x32f PushE
	var_40_float = var_40_float + var_30_float; // 0x330 Add2
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x331 PopE
	var_33_cvector = var_31_cvector - var_32_cvector; // 0x332 Sub2
	var_41_float = GetByIndex(var_33_cvector, 1); // 0x333 PushE
	var_41_float = 0; // 0x334 MovI
	SetByIndex(var_33_cvector, 1) = var_41_float; // 0x335 PopE
	var_42_int = var_33_cvector | var_33_cvector; // 0x336 Or
	var_43_float = sqrt(var_42_int); // 0x337 Sqrt
	var_33_cvector = var_33_cvector / var_33_cvector; // 0x338 Div2
	var_34_cvector = -var_33_cvector; // 0x339 Neg2
	var_44_float = var_33_cvector * var_20_float; // 0x33a Mult
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); // 0x33b PushV
	var_47_cvector = CVector(0.0, 1.0, 0.0); // 0x33c PushVec
	var_46_cvector = var_34_cvector ^ var_47_cvector; // 0x33d Xor2
	func_1085(var_45_cvector, var_46_cvector); // 0x33e NEW_2
	var_53_int = 25; // 0x340 PushI
	var_54_float = var_45_cvector * var_53_int; // 0x341 Mult
	var_55_int = var_44_float + var_54_float; // 0x342 Add
	var_56_cvector = CVector(0.0, 10.0, 0.0); // 0x343 PushVec
	var_35_cvector = var_55_int - var_56_cvector; // 0x344 Sub2
	var_36_cvector = var_32_cvector + var_35_cvector; // 0x345 Add2
	IsOverrideActive(var_37_bool); // 0x346 Func
	var_57_bool = var_37_bool; // 0x348 Push
	if(var_57_bool == 0) goto Label_844; // 0x349 JumpB
	var_18_bool = 0; // 0x34a MovB
	return 18; // 0x34b Return
	
Label_844:
	StopWorld(); // 0x34c Func
	CameraTransit(var_36_cvector, var_34_cvector); // 0x34e Func
	var_58_float = GetByIndex(var_35_cvector, 0); // 0x350 PushE
	var_59_float = GetByIndex(var_35_cvector, 2); // 0x351 PushE
	Rotate(var_58_float, var_59_float); // 0x352 Func
	var_60_bool = 0; // 0x354 PushV
	func_1411(var_60_bool); // 0x355 NEW_2
	if(var_60_bool == 0) goto Label_857; // 0x357 JumpB
	goto Label_865; // 0x358 Jump
	
Label_865:
	CameraWaitForPlayFinish(); // 0x361 Func
	ResumeWorld(); // 0x363 Func
	var_18_bool = 1; // 0x365 MovB
	return 18; // 0x366 Return
	
Label_857:
	var_61_string = "head"; // 0x359 PushS
	HasAnimationTrack(var_38_bool, var_61_string); // 0x35a Func
	var_62_bool = var_38_bool; // 0x35c Push
	if(var_62_bool == 0) goto Label_865; // 0x35d JumpB
	var_63_string = "head"; // 0x35e PushS
	LookAsyncCamera(var_63_string); // 0x35f Func
}


func_1057(var_112_bool, var_113_string)
{
	var_114_bool = 0; var_115_bool = 0; // 0x421 PushV
	var_116_bool = 0; // 0x422 PushV
	func_1411(var_116_bool); // 0x423 NEW_2
	if(var_116_bool == 0) goto Label_1070; // 0x425 JumpB
	lshHasSpeech(var_115_bool, var_113_string); // 0x426 Func
	var_117_bool = var_115_bool; // 0x428 Push
	if(var_117_bool == 0) goto Label_1070; // 0x429 JumpB
	lshPlaySpeech(var_113_string); // 0x42a Func
	var_112_bool = 1; // 0x42c MovB
	return 2; // 0x42d Return
	
Label_1070:
	var_112_bool = 0; // 0x42e MovB
	return 2; // 0x42f Return
}


func_1198(var_181_bool)
{
	var_183_int = 0; var_184_string = ""; // 0x4af PushV
	var_184_string = "ood12BurahFactory1"; // 0x4b0 MovS
	func_1095(var_183_int, var_184_string); // 0x4b1 NEW_2
	var_187_int = 0; // 0x4b3 PushI
	var_188_bool = var_183_int == var_187_int; // 0x4b4 Eq
	if(var_188_bool == 0) goto Label_1208; // 0x4b5 JumpB
	var_181_bool = 1; // 0x4b6 MovB
	return 0; // 0x4b7 Return
	
Label_1208:
	var_181_bool = 0; // 0x4b8 MovB
	return 0; // 0x4b9 Return
}


func_1072()
{
	var_9_bool = 0; // 0x430 PushV
	func_1411(var_9_bool); // 0x431 NEW_2
	if(var_9_bool == 0) goto Label_1078; // 0x433 JumpB
	lshStopSpeech(); // 0x434 Func
	
Label_1078:
	return 0; // 0x436 Return
}


func_946(var_89_bool)
{
	var_91_string = ""; var_92_int = 0; var_93_bool = 0; var_94_int = 0; var_95_string = ""; var_96_string = ""; var_97_int = 0; var_98_bool = 0; var_99_int = 0; var_100_string = ""; // 0x3b2 PushV
	var_96_string = "c"; // 0x3b3 MovS
	var_97_int = 0; // 0x3b4 MovI
	
Label_949:
	var_101_int = 1; // 0x3b5 PushI
	if(var_101_int == 0) goto Label_962; // 0x3b6 JumpB
	var_102_int = 1; // 0x3b7 PushI
	var_103_int = var_97_int + var_102_int; // 0x3b8 Add
	var_104_int = var_96_string + var_103_int; // 0x3b9 Add
	HasProperty(var_104_int, var_98_bool); // 0x3ba ObjFunc
	var_105_bool = var_98_bool == 0; // 0x3bc Not
	if(var_105_bool == 0) goto Label_959; // 0x3bd JumpB
	goto Label_962; // 0x3be Jump
	
Label_962:
	var_106_bool = var_97_int == 0; // 0x3c2 Not
	if(var_106_bool == 0) goto Label_966; // 0x3c3 JumpB
	var_89_bool = 0; // 0x3c4 MovB
	return 10; // 0x3c5 Return
	
Label_966:
	var_99_int = 0; // 0x3c6 MovI
	var_107_int = 1; // 0x3c7 PushI
	var_108_bool = var_97_int > var_107_int; // 0x3c8 GT
	if(var_108_bool == 0) goto Label_972; // 0x3c9 JumpB
	irand(var_99_int, var_97_int); // 0x3ca Func
	
Label_972:
	var_109_int = 1; // 0x3cc PushI
	var_110_int = var_99_int + var_109_int; // 0x3cd Add
	var_111_int = var_96_string + var_110_int; // 0x3ce Add
	GetProperty(var_111_int, var_100_string); // 0x3cf ObjFunc
	var_112_bool = 0; var_113_string = ""; // 0x3d1 PushV
	var_113_string = var_100_string; // 0x3d2 Mov
	func_1057(var_112_bool, var_113_string); // 0x3d3 NEW_2
	var_89_bool = var_112_bool; // 0x3d4 Mov
	return 10; // 0x3d6 Return
	
Label_959:
	var_118_int = 1; // 0x3bf PushI
	var_97_int = var_97_int + var_118_int; // 0x3c0 Add2
	goto Label_949; // 0x3c1 Jump
}


func_1079(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x437 PushV
	self(var_11_object); // 0x438 Func
	var_9_object = var_11_object; // 0x43a Mov
	return 2; // 0x43b Return
}


func_1210(var_321_bool)
{
	var_323_int = 0; var_324_string = ""; // 0x4bb PushV
	var_324_string = "ood12BurahFactory2"; // 0x4bc MovS
	func_1095(var_323_int, var_324_string); // 0x4bd NEW_2
	var_325_int = 0; // 0x4bf PushI
	var_326_bool = var_323_int == var_325_int; // 0x4c0 Eq
	if(var_326_bool == 0) goto Label_1220; // 0x4c1 JumpB
	var_321_bool = 1; // 0x4c2 MovB
	return 0; // 0x4c3 Return
	
Label_1220:
	var_321_bool = 0; // 0x4c4 MovB
	return 0; // 0x4c5 Return
}


func_1085(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x43d PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x43e Or
	var_49_float = sqrt(var_50_int); // 0x43f Sqrt2
	var_51_float = 0.0; // 0x440 PushF
	var_52_bool = var_49_float < var_51_float; // 0x441 LT
	if(var_52_bool == 0) goto Label_1093; // 0x442 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x443 MovV
	return 2; // 0x444 Return
	
Label_1093:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x445 Div2
	return 2; // 0x446 Return
}


func_1345(var_298_bool, var_299_int)
{
	var_300_int = 0; var_301_int = 0; // 0x541 PushV
	var_302_string = "vol_"; // 0x542 PushS
	var_303_int = var_302_string + var_299_int; // 0x543 Add
	GetVariable(var_303_int, var_301_int); // 0x544 Func
	var_304_int = 4; // 0x546 PushI
	var_305_int = var_301_int & var_304_int; // 0x547 And
	var_306_int = 0; // 0x548 PushI
	var_298_bool = var_305_int != var_306_int; // 0x549 Neq2
	return 2; // 0x54a Return
}


func_1222(var_261_bool)
{
	var_263_bool = 0; // 0x4c7 PushV
	func_1365(var_263_bool); // 0x4c8 NEW_2
	var_261_bool = var_263_bool; // 0x4c9 Mov
	return 0; // 0x4cb Return
}


func_1095(var_183_int, var_184_string)
{
	var_185_int = 0; var_186_int = 0; // 0x447 PushV
	GetVariable(var_184_string, var_186_int); // 0x448 Func
	var_183_int = var_186_int; // 0x44a Mov
	return 2; // 0x44b Return
}


func_1355(var_289_bool, var_290_int)
{
	var_291_int = 0; var_292_int = 0; // 0x54b PushV
	var_293_string = "vol_"; // 0x54c PushS
	var_294_int = var_293_string + var_290_int; // 0x54d Add
	GetVariable(var_294_int, var_292_int); // 0x54e Func
	var_295_int = 16; // 0x550 PushI
	var_296_int = var_292_int & var_295_int; // 0x551 And
	var_297_int = 0; // 0x552 PushI
	var_289_bool = var_296_int != var_297_int; // 0x553 Neq2
	return 2; // 0x554 Return
}


func_1100(var_133_int)
{
	var_134_float = 0; var_135_float = 0; // 0x44c PushV
	GetGameTime(var_135_float); // 0x44d Func
	var_136_int = 1; // 0x44f PushI
	var_137_int = 0; // 0x450 PushV
	var_138_int = 24; // 0x451 PushI
	var_137_int = var_135_float / var_135_float; // 0x452 Div2
	var_133_int = var_136_int + var_137_int; // 0x453 Add2
	return 2; // 0x454 Return
}


func_1228()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x4cc PushV
	var_53_int = 700; // 0x4cd PushI
	var_54_int = 1; // 0x4ce PushI
	var_55_int = 535683; // 0x4cf PushI
	CreateDiaryEntry(var_52_object, var_53_int, var_54_int, var_55_int); // 0x4d0 Func
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0; // 0x4d2 PushV
	var_57_object = var_52_object; // 0x4d3 Mov
	var_58_int = 699; // 0x4d4 MovI
	func_1267(var_56_bool, var_57_object, var_58_int); // 0x4d5 NEW_2
	return 2; // 0x4d7 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_203; // 0x56 JumpB
	var_180_bool = 0; // 0x57 PushV
	var_180_bool = 0; // 0x58 MovB
	var_181_bool = 0; var_182_object = Obj(); // 0x59 PushV
	var_182_object = var_1_object; // 0x5a MovT
	func_1198(var_182_object); // 0x5b NEW_2
	if(var_181_bool == 0) goto Label_101; // 0x5d JumpB
	var_189_bool = 0; var_190_object = Obj(); // 0x5e PushV
	var_190_object = var_1_object; // 0x5f MovT
	func_1174(var_190_object); // 0x60 NEW_2
	var_195_bool = var_189_bool == 0; // 0x62 Not
	if(var_195_bool == 0) goto Label_101; // 0x63 JumpB
	var_180_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_180_bool == 0) goto Label_132; // 0x65 JumpB
	var_196_object = Obj(); var_197_object = Obj(); // 0x66 PushV
	var_196_object = var_1_object; // 0x67 MovT
	var_197_object = var_0_object; // 0x68 MovT
	func_1109(); // 0x69 NEW_2
	var_200_object = Obj(); var_201_object = Obj(); // 0x6b PushV
	var_200_object = var_1_object; // 0x6c MovT
	var_201_object = var_0_object; // 0x6d MovT
	func_1140(); // 0x6e NEW_2
	var_204_string = ""; // 0x70 PushV
	var_204_string = "Neutral"; // 0x71 MovS
	func_233(var_174_object, var_204_string); // 0x72 NEW_2
	var_221_int = 535567; // 0x74 PushI
	SetMessage(var_221_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_222_int = 535568; // 0x79 PushI
	var_223_int = 37252; // 0x7a PushI
	var_224_int = 37251; // 0x7b PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x7c TObjFunc
	var_225_int = 535587; // 0x7e PushI
	var_226_int = 42035; // 0x7f PushI
	var_227_int = 37272; // 0x80 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x81 TObjFunc
	goto Label_203; // 0x83 Jump
	
Label_203:
	var_228_bool = 0; // 0xcb PushV
	func_1411(var_228_bool); // 0xcc NEW_2
	if(var_228_bool == 0) goto Label_218; // 0xce JumpB
	
Label_207:
	lshWaitForAnimEnd(); // 0xcf Func
	var_229_string = var_3_string; // 0xd1 PushT
	if(var_229_string == 0) goto Label_212; // 0xd2 JumpB
	goto Label_217; // 0xd3 Jump
	
Label_217:
	goto Label_232; // 0xd9 Jump
	
Label_232:
	return 0; // 0xe8 Return
	
Label_212:
	var_230_string = ""; // 0xd4 PushV
	var_230_string = var_2_object; // 0xd5 MovT
	func_1026(var_230_string); // 0xd6 NEW_2
	goto Label_207; // 0xd8 Jump
	
Label_218:
	var_241_string = "all"; // 0xda PushS
	var_242_string = "idle"; // 0xdb PushS
	PlayAnimation(var_241_string, var_242_string); // 0xdc Func
	
Label_222:
	WaitForAnimEnd(); // 0xde Func
	var_243_string = var_3_string; // 0xe0 PushT
	if(var_243_string == 0) goto Label_227; // 0xe1 JumpB
	goto Label_232; // 0xe2 Jump
	
Label_227:
	var_244_string = "all"; // 0xe3 PushS
	var_245_string = "idle"; // 0xe4 PushS
	PlayAnimation(var_244_string, var_245_string); // 0xe5 Func
	goto Label_222; // 0xe7 Jump
	
Label_132:
	var_246_object = Obj(); var_247_object = Obj(); // 0x84 PushV
	var_246_object = var_1_object; // 0x85 MovT
	var_247_object = var_0_object; // 0x86 MovT
	func_1140(); // 0x87 NEW_2
	var_248_string = ""; // 0x89 PushV
	var_248_string = "Neutral"; // 0x8a MovS
	func_233(var_174_object, var_248_string); // 0x8b NEW_2
	var_249_int = 535630; // 0x8d PushI
	SetMessage(var_249_int); // 0x8e TObjFunc
	ClearReplies(); // 0x90 TObjFunc
	var_250_bool = 0; // 0x92 PushV
	var_250_bool = 0; // 0x93 MovB
	var_251_bool = 0; // 0x94 PushV
	var_251_bool = 0; // 0x95 MovB
	var_252_bool = 0; var_253_object = Obj(); // 0x96 PushV
	var_253_object = var_1_object; // 0x97 MovT
	func_1186(var_253_object); // 0x98 NEW_2
	var_258_bool = var_252_bool == 0; // 0x9a Not
	if(var_258_bool == 0) goto Label_162; // 0x9b JumpB
	var_259_bool = 0; var_260_object = Obj(); // 0x9c PushV
	var_260_object = var_1_object; // 0x9d MovT
	func_1152(var_259_bool, var_260_object); // 0x9e NEW_2
	if(var_259_bool == 0) goto Label_162; // 0xa0 JumpB
	var_251_bool = 1; // 0xa1 MovB
	
Label_162:
	if(var_251_bool == 0) goto Label_170; // 0xa2 JumpB
	var_308_bool = 0; var_309_object = Obj(); // 0xa3 PushV
	var_309_object = var_1_object; // 0xa4 MovT
	func_1174(var_309_object); // 0xa5 NEW_2
	var_310_bool = var_308_bool == 0; // 0xa7 Not
	if(var_310_bool == 0) goto Label_170; // 0xa8 JumpB
	var_250_bool = 1; // 0xa9 MovB
	
Label_170:
	if(var_250_bool == 0) goto Label_176; // 0xaa JumpB
	var_311_int = 535631; // 0xab PushI
	var_312_int = 37319; // 0xac PushI
	var_313_int = 37317; // 0xad PushI
	AddReply(var_311_int, var_312_int, var_313_int); // 0xae TObjFunc
	
Label_176:
	var_314_bool = 0; // 0xb0 PushV
	var_314_bool = 0; // 0xb1 MovB
	var_315_bool = 0; var_316_object = Obj(); // 0xb2 PushV
	var_316_object = var_1_object; // 0xb3 MovT
	func_1162(var_316_object); // 0xb4 NEW_2
	if(var_315_bool == 0) goto Label_189; // 0xb6 JumpB
	var_321_bool = 0; var_322_object = Obj(); // 0xb7 PushV
	var_322_object = var_1_object; // 0xb8 MovT
	func_1210(var_322_object); // 0xb9 NEW_2
	if(var_321_bool == 0) goto Label_189; // 0xbb JumpB
	var_314_bool = 1; // 0xbc MovB
	
Label_189:
	if(var_314_bool == 0) goto Label_195; // 0xbd JumpB
	var_327_int = 540355; // 0xbe PushI
	var_328_int = 42339; // 0xbf PushI
	var_329_int = 42338; // 0xc0 PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0xc1 TObjFunc
	
Label_195:
	var_330_int = 535632; // 0xc3 PushI
	var_331_int = -1; // 0xc4 PushI
	var_332_int = 37318; // 0xc5 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0xc6 TObjFunc
	goto Label_203; // 0xc8 Jump
}


func_1109()
{
	var_198_string = "ood12BurahFactory1"; // 0x456 PushS
	var_199_int = 1; // 0x457 PushI
	SetVariable(var_198_string, var_199_int); // 0x458 Func
	return 0; // 0x45a Return
}


func_1365(var_263_bool)
{
	var_264_object = Obj(); var_265_int = 0; var_266_int = 0; var_267_int = 0; var_268_object = Obj(); var_269_int = 0; var_270_int = 0; var_271_int = 0; // 0x555 PushV
	CreateIntVector(var_268_object); // 0x556 Func
	var_272_object = Obj(); var_273_bool = 0; var_274_int = 0; // 0x558 PushV
	var_272_object = var_268_object; // 0x559 Mov
	var_273_bool = 0; // 0x55a MovB
	var_274_int = -1; // 0x55b MovI
	func_1312(var_273_bool, var_274_int); // 0x55c NEW_2
	size(var_269_int); // 0x55e ObjFunc
	var_270_int = 0; // 0x560 MovI
	
Label_1377:
	var_287_bool = var_270_int < var_269_int; // 0x561 LT
	if(var_287_bool == 0) goto Label_1400; // 0x562 JumpB
	get(var_271_int, var_270_int); // 0x563 ObjFunc
	var_288_bool = 0; // 0x565 PushV
	var_288_bool = 1; // 0x566 MovB
	var_289_bool = 0; var_290_int = 0; // 0x567 PushV
	var_290_int = var_271_int; // 0x568 Mov
	func_1355(var_289_bool, var_290_int); // 0x569 NEW_2
	if(var_289_bool == 0) goto Label_1394; // 0x56b JumpB
	var_298_bool = 0; var_299_int = 0; // 0x56c PushV
	var_299_int = var_271_int; // 0x56d Mov
	func_1345(var_298_bool, var_299_int); // 0x56e NEW_2
	if(var_298_bool == 0) goto Label_1394; // 0x570 JumpB
	var_288_bool = 0; // 0x571 MovB
	
Label_1394:
	if(var_288_bool == 0) goto Label_1397; // 0x572 JumpB
	var_263_bool = 0; // 0x573 MovB
	return 8; // 0x574 Return
	
Label_1397:
	var_307_int = 1; // 0x575 PushI
	var_270_int = var_270_int + var_307_int; // 0x576 Add2
	goto Label_1377; // 0x577 Jump
	
Label_1400:
	var_263_bool = 1; // 0x578 MovB
	return 8; // 0x579 Return
}


func_983(var_120_bool)
{
	var_122_string = ""; var_123_int = 0; var_124_bool = 0; var_125_int = 0; var_126_string = ""; var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; // 0x3d7 PushV
	var_132_string = "d"; // 0x3d8 PushS
	var_133_int = 0; // 0x3d9 PushV
	func_1100(var_133_int); // 0x3da NEW_2
	var_139_int = var_132_string + var_133_int; // 0x3dc Add
	var_140_string = "m"; // 0x3dd PushS
	var_127_string = var_139_int + var_140_string; // 0x3de Add2
	var_128_int = 0; // 0x3df MovI
	
Label_992:
	var_141_int = 1; // 0x3e0 PushI
	if(var_141_int == 0) goto Label_1005; // 0x3e1 JumpB
	var_142_int = 1; // 0x3e2 PushI
	var_143_int = var_128_int + var_142_int; // 0x3e3 Add
	var_144_int = var_127_string + var_143_int; // 0x3e4 Add
	HasProperty(var_144_int, var_129_bool); // 0x3e5 ObjFunc
	var_145_bool = var_129_bool == 0; // 0x3e7 Not
	if(var_145_bool == 0) goto Label_1002; // 0x3e8 JumpB
	goto Label_1005; // 0x3e9 Jump
	
Label_1005:
	var_146_bool = var_128_int == 0; // 0x3ed Not
	if(var_146_bool == 0) goto Label_1009; // 0x3ee JumpB
	var_120_bool = 0; // 0x3ef MovB
	return 10; // 0x3f0 Return
	
Label_1009:
	var_130_int = 0; // 0x3f1 MovI
	var_147_int = 1; // 0x3f2 PushI
	var_148_bool = var_128_int > var_147_int; // 0x3f3 GT
	if(var_148_bool == 0) goto Label_1015; // 0x3f4 JumpB
	irand(var_130_int, var_128_int); // 0x3f5 Func
	
Label_1015:
	var_149_int = 1; // 0x3f7 PushI
	var_150_int = var_130_int + var_149_int; // 0x3f8 Add
	var_151_int = var_127_string + var_150_int; // 0x3f9 Add
	GetProperty(var_151_int, var_131_string); // 0x3fa ObjFunc
	var_152_bool = 0; var_153_string = ""; // 0x3fc PushV
	var_153_string = var_131_string; // 0x3fd Mov
	func_1057(var_152_bool, var_153_string); // 0x3fe NEW_2
	var_120_bool = var_152_bool; // 0x3ff Mov
	return 10; // 0x401 Return
	
Label_1002:
	var_154_int = 1; // 0x3ea PushI
	var_128_int = var_128_int + var_154_int; // 0x3eb Add2
	goto Label_992; // 0x3ec Jump
}


func_1241()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x4d9 PushV
	var_24_int = 706; // 0x4da PushI
	var_25_int = 1; // 0x4db PushI
	var_26_int = 535689; // 0x4dc PushI
	CreateDiaryEntry(var_23_object, var_24_int, var_25_int, var_26_int); // 0x4dd Func
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; // 0x4df PushV
	var_28_object = var_23_object; // 0x4e0 Mov
	var_29_int = 699; // 0x4e1 MovI
	func_1267(var_27_bool, var_28_object, var_29_int); // 0x4e2 NEW_2
	return 2; // 0x4e4 Return
}


func_1115()
{
	var_49_string = "d12q01BurahInSobor"; // 0x45c PushS
	var_50_int = 1; // 0x45d PushI
	SetVariable(var_49_string, var_50_int); // 0x45e Func
	func_1228(); // 0x461 NEW_2
	return 0; // 0x463 Return
}


func_1124()
{
	var_14_int = 0; var_15_string = ""; // 0x465 PushV
	var_15_string = "d12q01_Burah"; // 0x466 MovS
	func_1095(var_14_int, var_15_string); // 0x467 NEW_2
	var_18_int = 0; // 0x469 PushI
	var_19_bool = var_14_int == var_18_int; // 0x46a Eq
	if(var_19_bool == 0) goto Label_1139; // 0x46b JumpB
	var_20_string = "d12q01_Burah"; // 0x46c PushS
	var_21_int = 1; // 0x46d PushI
	SetVariable(var_20_string, var_21_int); // 0x46e Func
	func_1241(); // 0x471 NEW_2
	
Label_1139:
	return 0; // 0x473 Return
}


func_1254(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x4e6 PushV
	GetDiaryRoot(var_38_object); // 0x4e7 Func
	var_39_bool = var_38_object == 0; // 0x4e9 Not
	if(var_39_bool == 0) goto Label_1264; // 0x4ea JumpB
	var_40_string = "Can't retrieve diary root"; // 0x4eb PushS
	Trace(var_40_string); // 0x4ec Func
	var_36_object = 0; // 0x4ee MovB
	return 2; // 0x4ef Return
	
Label_1264:
	var_36_object = var_38_object; // 0x4f0 Mov
	return 2; // 0x4f1 Return
}


func_871()
{
	var_335_bool = 0; var_336_bool = 0; // 0x367 PushV
	CameraSwitchToNormal(); // 0x368 Func
	var_337_bool = 0; // 0x36a PushV
	func_1411(var_337_bool); // 0x36b NEW_2
	if(var_337_bool == 0) goto Label_879; // 0x36d JumpB
	goto Label_887; // 0x36e Jump
	
Label_887:
	return 2; // 0x377 Return
	
Label_879:
	var_338_string = "head"; // 0x36f PushS
	HasAnimationTrack(var_336_bool, var_338_string); // 0x370 Func
	var_339_bool = var_336_bool; // 0x372 Push
	if(var_339_bool == 0) goto Label_887; // 0x373 JumpB
	var_340_string = "head"; // 0x374 PushS
	UnlookAsync(var_340_string); // 0x375 Func
}


func_233(var_2_object, var_204_string)
{
	var_205_bool = 0; // 0xea PushV
	func_1411(var_205_bool); // 0xeb NEW_2
	var_206_bool = var_205_bool == 0; // 0xed Not
	if(var_206_bool == 0) goto Label_240; // 0xee JumpB
	return 0; // 0xef Return
	
Label_240:
	var_207_bool = var_204_string == var_2_object; // 0xf0 Eq
	if(var_207_bool == 0) goto Label_243; // 0xf1 JumpB
	return 0; // 0xf2 Return
	
Label_243:
	var_208_string = ""; var_209_bool = 0; // 0xf3 PushV
	var_208_string = var_204_string; // 0xf4 Mov
	var_210_string = ""; // 0xf5 PushS
	var_211_bool = var_204_string == var_210_string; // 0xf6 Eq
	if(var_211_bool == 0) goto Label_250; // 0xf7 JumpB
	var_209_bool = 0; // 0xf8 MovB
	goto Label_251; // 0xf9 Jump
	
Label_251:
	func_1042(var_208_string, var_209_bool); // 0xfb NEW_2
	var_2_object = var_204_string; // 0xfd TMov
	return 0; // 0xfe Return
	
Label_250:
	var_209_bool = 1; // 0xfa MovB
}


func_753()
{
	
Label_753:
	Hold(); // 0x2f1 Func
	goto Label_753; // 0x2f3 Jump
}


func_1267(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; // 0x4f3 PushV
	var_36_object = Obj(); // 0x4f4 PushV
	func_1254(var_36_object); // 0x4f5 NEW_2
	var_33_object = var_36_object; // 0x4f6 Mov
	Find(var_29_int, var_34_object); // 0x4f8 ObjFunc
	var_41_bool = var_34_object == 0; // 0x4fa Not
	if(var_41_bool == 0) goto Label_1282; // 0x4fb JumpB
	var_42_string = "Can't find diary parent with id: "; // 0x4fc PushS
	var_43_int = var_42_string + var_29_int; // 0x4fd Add
	Trace(var_43_int); // 0x4fe Func
	var_27_bool = 0; // 0x500 MovB
	return 6; // 0x501 Return
	
Label_1282:
	AddChild(var_28_object); // 0x502 ObjFunc
	var_44_int = 7; // 0x504 PushI
	SendWorldWndMessage(var_44_int); // 0x505 Func
	GetCategory(var_35_int); // 0x507 ObjFunc
	SetDiarySection(var_35_int); // 0x509 Func
	var_27_bool = 0; // 0x50b MovB
	return 6; // 0x50c Return
}


func_1140()
{
	var_202_string = "d12q01BurahVisit"; // 0x475 PushS
	var_203_int = 1; // 0x476 PushI
	SetVariable(var_202_string, var_203_int); // 0x477 Func
	return 0; // 0x479 Return
}


func_888(var_78_bool, var_79_object)
{
	var_83_int = 0; var_84_int = 0; var_85_int = 0; var_86_int = 0; // 0x378 PushV
	var_87_string = "voice_common"; // 0x379 PushS
	GetVariable(var_87_string, var_85_int); // 0x37a Func
	var_88_int = var_85_int; // 0x37c Push
	if(var_88_int == 0) goto Label_926; // 0x37d JumpB
	var_89_bool = 0; var_90_object = Obj(); // 0x37e PushV
	var_90_object = var_79_object; // 0x37f Mov
	func_946(var_90_object); // 0x380 NEW_2
	var_119_bool = var_89_bool == 0; // 0x382 Not
	if(var_119_bool == 0) goto Label_908; // 0x383 JumpB
	var_120_bool = 0; var_121_object = Obj(); // 0x384 PushV
	var_121_object = var_79_object; // 0x385 Mov
	func_983(var_121_object); // 0x386 NEW_2
	var_155_bool = var_120_bool == 0; // 0x388 Not
	if(var_155_bool == 0) goto Label_908; // 0x389 JumpB
	var_78_bool = 0; // 0x38a MovB
	return 4; // 0x38b Return
	
Label_908:
	var_156_int = 2; // 0x38c PushI
	irand(var_86_int, var_156_int); // 0x38d Func
	var_157_int = var_86_int; // 0x38f Push
	if(var_157_int == 0) goto Label_921; // 0x390 JumpB
	var_158_string = "voice_common"; // 0x391 PushS
	var_159_int = 1; // 0x392 PushI
	var_160_int = var_85_int + var_159_int; // 0x393 Add
	var_161_int = 3; // 0x394 PushI
	var_162_int = var_160_int / var_161_int; // 0x395 Mod
	SetVariable(var_158_string, var_162_int); // 0x396 Func
	goto Label_925; // 0x398 Jump
	
Label_925:
	goto Label_944; // 0x39d Jump
	
Label_944:
	var_78_bool = 1; // 0x3b0 MovB
	return 4; // 0x3b1 Return
	
Label_921:
	var_163_string = "voice_common"; // 0x399 PushS
	var_164_int = 0; // 0x39a PushI
	SetVariable(var_163_string, var_164_int); // 0x39b Func
	
Label_926:
	var_165_bool = 0; var_166_object = Obj(); // 0x39e PushV
	var_166_object = var_79_object; // 0x39f Mov
	func_983(var_166_object); // 0x3a0 NEW_2
	var_167_bool = var_165_bool == 0; // 0x3a2 Not
	if(var_167_bool == 0) goto Label_940; // 0x3a3 JumpB
	var_168_bool = 0; var_169_object = Obj(); // 0x3a4 PushV
	var_169_object = var_79_object; // 0x3a5 Mov
	func_946(var_169_object); // 0x3a6 NEW_2
	var_170_bool = var_168_bool == 0; // 0x3a8 Not
	if(var_170_bool == 0) goto Label_940; // 0x3a9 JumpB
	var_78_bool = 0; // 0x3aa MovB
	return 4; // 0x3ab Return
	
Label_940:
	var_171_string = "voice_common"; // 0x3ac PushS
	var_172_int = 1; // 0x3ad PushI
	SetVariable(var_171_string, var_172_int); // 0x3ae Func
}


func_1146()
{
	var_67_string = "ood12BurahFactory2"; // 0x47b PushS
	var_68_int = 1; // 0x47c PushI
	SetVariable(var_67_string, var_68_int); // 0x47d Func
	return 0; // 0x47f Return
}


func_1403(var_66_int)
{
	var_66_int = 515592; // 0x57b MovI
	return 0; // 0x57c Return
}


func_1405(var_65_int)
{
	var_65_int = 511961; // 0x57d MovI
	return 0; // 0x57e Return
}


func_1407(var_67_string)
{
	var_67_string = "ui/NPC_Burah.png"; // 0x57f MovS
	return 0; // 0x580 Return
}


