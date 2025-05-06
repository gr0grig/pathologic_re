task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0x100 PushI
	if(var_8_int == 0) goto Label_740; // 0x101 JumpB
	func_1074(); // 0x103 NEW_2
	var_10_int = 37261; // 0x105 PushI
	var_11_bool = var_7_bool == var_10_int; // 0x106 Eq
	if(var_11_bool == 0) goto Label_269; // 0x107 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0x108 PushV
	var_12_object = var_1_object; // 0x109 MovT
	var_13_object = var_0_object; // 0x10a MovT
	func_1126(); // 0x10b NEW_2
	
Label_269:
	var_45_int = 37264; // 0x10d PushI
	var_46_bool = var_7_bool == var_45_int; // 0x10e Eq
	if(var_46_bool == 0) goto Label_277; // 0x10f JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x110 PushV
	var_47_object = var_1_object; // 0x111 MovT
	var_48_object = var_0_object; // 0x112 MovT
	func_1117(); // 0x113 NEW_2
	
Label_277:
	var_59_int = 37320; // 0x115 PushI
	var_60_bool = var_7_bool == var_59_int; // 0x116 Eq
	if(var_60_bool == 0) goto Label_285; // 0x117 JumpB
	var_61_object = Obj(); var_62_object = Obj(); // 0x118 PushV
	var_61_object = var_1_object; // 0x119 MovT
	var_62_object = var_0_object; // 0x11a MovT
	func_1117(); // 0x11b NEW_2
	
Label_285:
	var_63_int = 42338; // 0x11d PushI
	var_64_bool = var_7_bool == var_63_int; // 0x11e Eq
	if(var_64_bool == 0) goto Label_293; // 0x11f JumpB
	var_65_object = Obj(); var_66_object = Obj(); // 0x120 PushV
	var_65_object = var_1_object; // 0x121 MovT
	var_66_object = var_0_object; // 0x122 MovT
	func_1148(); // 0x123 NEW_2
	
Label_293:
	var_69_int = 37250; // 0x125 PushI
	var_70_bool = var_6_int == var_69_int; // 0x126 Eq
	if(var_70_bool == 0) goto Label_410; // 0x127 JumpB
	var_71_bool = 0; // 0x128 PushV
	var_71_bool = 0; // 0x129 MovB
	var_72_bool = 0; var_73_object = Obj(); // 0x12a PushV
	var_73_object = var_1_object; // 0x12b MovT
	func_1200(var_73_object); // 0x12c NEW_2
	if(var_72_bool == 0) goto Label_310; // 0x12e JumpB
	var_78_bool = 0; var_79_object = Obj(); // 0x12f PushV
	var_79_object = var_1_object; // 0x130 MovT
	func_1176(var_79_object); // 0x131 NEW_2
	var_84_bool = var_78_bool == 0; // 0x133 Not
	if(var_84_bool == 0) goto Label_310; // 0x134 JumpB
	var_71_bool = 1; // 0x135 MovB
	
Label_310:
	if(var_71_bool == 0) goto Label_341; // 0x136 JumpB
	var_85_object = Obj(); var_86_object = Obj(); // 0x137 PushV
	var_85_object = var_1_object; // 0x138 MovT
	var_86_object = var_0_object; // 0x139 MovT
	func_1111(); // 0x13a NEW_2
	var_89_object = Obj(); var_90_object = Obj(); // 0x13c PushV
	var_89_object = var_1_object; // 0x13d MovT
	var_90_object = var_0_object; // 0x13e MovT
	func_1142(); // 0x13f NEW_2
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
	func_1142(); // 0x158 NEW_2
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
	func_1188(var_124_object); // 0x169 NEW_2
	var_129_bool = var_123_bool == 0; // 0x16b Not
	if(var_129_bool == 0) goto Label_371; // 0x16c JumpB
	var_130_bool = 0; var_131_object = Obj(); // 0x16d PushV
	var_131_object = var_1_object; // 0x16e MovT
	func_1154(var_130_bool, var_131_object); // 0x16f NEW_2
	if(var_130_bool == 0) goto Label_371; // 0x171 JumpB
	var_122_bool = 1; // 0x172 MovB
	
Label_371:
	if(var_122_bool == 0) goto Label_379; // 0x173 JumpB
	var_179_bool = 0; var_180_object = Obj(); // 0x174 PushV
	var_180_object = var_1_object; // 0x175 MovT
	func_1176(var_180_object); // 0x176 NEW_2
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
	func_1164(var_187_object); // 0x185 NEW_2
	if(var_186_bool == 0) goto Label_398; // 0x187 JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x188 PushV
	var_193_object = var_1_object; // 0x189 MovT
	func_1212(var_193_object); // 0x18a NEW_2
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
	func_1154(var_308_bool, var_309_object); // 0x295 NEW_2
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
	func_1154(var_319_bool, var_320_object); // 0x2af NEW_2
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
	func_1413(var_336_bool); // 0x2da NEW_2
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
	func_1081(var_14_object); // 0x307 NEW_2
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
	func_1081(var_9_object); // 0x31c NEW_2
	RemoveActor(var_9_object); // 0x31e Func
	
Label_800:
	return 0; // 0x320 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	func_753(); // 0x2e6 NEW_2
	return 0; // 0x2e8 Return
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); var_20_float = 0; // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	var_20_float = 70.0; // 0x4 MovF
	func_803(var_19_object, var_20_float); // 0x5 NEW_2
	var_65_bool = var_18_bool == 0; // 0x7 Not
	if(var_65_bool == 0) goto Label_11; // 0x8 JumpB
	var_7_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_14_object); // 0xb Func
	var_66_int = 0; // 0xd PushV
	func_1407(var_66_int); // 0xe NEW_2
	SetNPCName(var_66_int); // 0x10 ObjFunc
	var_67_int = 0; // 0x12 PushV
	func_1405(var_67_int); // 0x13 NEW_2
	SetNPCDescription(var_67_int); // 0x15 ObjFunc
	var_68_string = ""; // 0x17 PushV
	func_1409(var_68_string); // 0x18 NEW_2
	SetPhoto(var_68_string); // 0x1a ObjFunc
	var_69_string = ""; // 0x1c PushV
	func_1411(var_69_string); // 0x1d NEW_2
	SetPhoto2(var_69_string); // 0x1f ObjFunc
	var_70_int = 0; // 0x21 PushV
	func_1297(var_70_int); // 0x22 NEW_2
	SetPlayerName(var_70_int); // 0x24 ObjFunc
	var_16_int = -1; // 0x26 MovI
	IsOverrideActive(var_15_bool); // 0x27 Func
	var_78_bool = var_15_bool; // 0x29 Push
	if(var_78_bool == 0) goto Label_45; // 0x2a JumpB
	var_7_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_14_object); // 0x2d Func
	var_79_bool = 0; var_80_object = Obj(); // 0x2f PushV
	var_81_object = Obj(); // 0x30 PushV
	func_1081(var_81_object); // 0x31 NEW_2
	var_80_object = var_81_object; // 0x32 Mov
	func_890(var_79_bool, var_80_object); // 0x34 NEW_2
	var_174_object = Obj(); var_175_object = Obj(); // 0x36 PushV
	var_174_object = var_8_object; // 0x37 Mov
	var_175_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_176_object, var_177_object, var_178_string, var_179_bool, var_174_object, var_175_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_334_bool = var_17_bool == 0; // 0x3f Not
	if(var_334_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_335_object = Obj(); // 0x46 PushV
	var_335_object = var_8_object; // 0x47 Mov
	func_872(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1409(var_68_string)
{
	var_68_string = "ui/NPC_Burah.png"; // 0x581 MovS
	return 0; // 0x582 Return
}


func_1154(var_260_bool, var_261_object)
{
	var_262_bool = 0; var_263_object = Obj(); // 0x483 PushV
	var_263_object = var_261_object; // 0x484 Mov
	func_1224(var_263_object); // 0x485 NEW_2
	if(var_262_bool == 0) goto Label_1162; // 0x487 JumpB
	var_260_bool = 1; // 0x488 MovB
	return 0; // 0x489 Return
	
Label_1162:
	var_260_bool = 0; // 0x48a MovB
	return 0; // 0x48b Return
}


func_1411(var_69_string)
{
	var_69_string = "ui/NPC_Burah_b.png"; // 0x583 MovS
	return 0; // 0x584 Return
}


func_1028(var_231_string)
{
	var_232_bool = 0; var_233_float = 0; var_234_float = 0; var_235_bool = 0; var_236_float = 0; var_237_float = 0; // 0x404 PushV
	lshHasAnimation(var_235_bool, var_231_string); // 0x405 Func
	var_238_bool = var_235_bool; // 0x407 Push
	if(var_238_bool == 0) goto Label_1039; // 0x408 JumpB
	lshGetAnimTimes(var_231_string, var_236_float, var_237_float); // 0x409 Func
	var_239_bool = 0; // 0x40b PushB
	lshPlayAnimation(var_236_float, var_237_float, var_239_bool); // 0x40c Func
	goto Label_1043; // 0x40e Jump
	
Label_1043:
	return 6; // 0x413 Return
	
Label_1039:
	var_240_string = "Can't find lsh animation : "; // 0x40f PushS
	var_241_int = var_240_string + var_231_string; // 0x410 Add
	Trace(var_241_int); // 0x411 Func
}


func_1413(var_61_bool)
{
	var_61_bool = 1; // 0x585 MovB
	return 0; // 0x586 Return
}


func_1164(var_316_bool)
{
	var_318_int = 0; var_319_string = ""; // 0x48d PushV
	var_319_string = "b12q01ChildsAreVisited"; // 0x48e MovS
	func_1097(var_318_int, var_319_string); // 0x48f NEW_2
	var_320_int = 0; // 0x491 PushI
	var_321_bool = var_318_int != var_320_int; // 0x492 Neq
	if(var_321_bool == 0) goto Label_1174; // 0x493 JumpB
	var_316_bool = 1; // 0x494 MovB
	return 0; // 0x495 Return
	
Label_1174:
	var_316_bool = 0; // 0x496 MovB
	return 0; // 0x497 Return
}


func_1297(var_70_int)
{
	var_71_int = 0; var_72_int = 0; // 0x511 PushV
	var_73_string = "branch"; // 0x512 PushS
	GetVariable(var_73_string, var_72_int); // 0x513 Func
	var_74_int = 0; // 0x515 PushI
	var_75_bool = var_72_int == var_74_int; // 0x516 Eq
	if(var_75_bool == 0) goto Label_1307; // 0x517 JumpB
	var_70_int = 1; // 0x518 MovI
	return 2; // 0x519 Return
	
Label_1307:
	var_76_int = 1; // 0x51b PushI
	var_77_bool = var_72_int == var_76_int; // 0x51c Eq
	if(var_77_bool == 0) goto Label_1312; // 0x51d JumpB
	var_70_int = 2; // 0x51e MovI
	return 2; // 0x51f Return
	
Label_1312:
	var_70_int = 3; // 0x520 MovI
	return 2; // 0x521 Return
}


func_1044(var_209_string, var_210_bool)
{
	var_213_bool = 0; var_214_float = 0; var_215_float = 0; var_216_bool = 0; var_217_float = 0; var_218_float = 0; // 0x414 PushV
	lshHasAnimation(var_216_bool, var_209_string); // 0x415 Func
	var_219_bool = var_216_bool; // 0x417 Push
	if(var_219_bool == 0) goto Label_1054; // 0x418 JumpB
	lshGetAnimTimes(var_209_string, var_217_float, var_218_float); // 0x419 Func
	lshPlayAnimation(var_217_float, var_218_float, var_210_bool); // 0x41b Func
	goto Label_1058; // 0x41d Jump
	
Label_1058:
	return 6; // 0x422 Return
	
Label_1054:
	var_220_string = "Can't find lsh animation : "; // 0x41e PushS
	var_221_int = var_220_string + var_209_string; // 0x41f Add
	Trace(var_221_int); // 0x420 Func
}


func_1176(var_190_bool)
{
	var_192_int = 0; var_193_string = ""; // 0x499 PushV
	var_193_string = "game_final"; // 0x49a MovS
	func_1097(var_192_int, var_193_string); // 0x49b NEW_2
	var_194_int = 0; // 0x49d PushI
	var_195_bool = var_192_int != var_194_int; // 0x49e Neq
	if(var_195_bool == 0) goto Label_1186; // 0x49f JumpB
	var_190_bool = 1; // 0x4a0 MovB
	return 0; // 0x4a1 Return
	
Label_1186:
	var_190_bool = 0; // 0x4a2 MovB
	return 0; // 0x4a3 Return
}


func_801(var_8_bool)
{
	var_8_bool = 1; // 0x321 MovB
	return 0; // 0x322 Return
}


func_1314(var_274_bool, var_275_int)
{
	var_276_int = 18; // 0x523 PushI
	add(var_276_int); // 0x524 ObjFunc
	var_277_int = 24; // 0x526 PushI
	add(var_277_int); // 0x527 ObjFunc
	var_278_int = 20; // 0x529 PushI
	add(var_278_int); // 0x52a ObjFunc
	var_279_int = 14; // 0x52c PushI
	add(var_279_int); // 0x52d ObjFunc
	var_280_bool = 0; // 0x52f PushB
	var_281_bool = var_274_bool == var_280_bool; // 0x530 Eq
	if(var_281_bool == 0) goto Label_1340; // 0x531 JumpB
	var_282_int = 10; // 0x532 PushI
	add(var_282_int); // 0x533 ObjFunc
	var_283_int = 17; // 0x535 PushI
	add(var_283_int); // 0x536 ObjFunc
	var_284_int = 8; // 0x538 PushI
	add(var_284_int); // 0x539 ObjFunc
	goto Label_1346; // 0x53b Jump
	
Label_1346:
	return 0; // 0x542 Return
	
Label_1340:
	var_285_int = 1; // 0x53c PushI
	var_286_bool = var_275_int != var_285_int; // 0x53d Neq
	if(var_286_bool == 0) goto Label_1346; // 0x53e JumpB
	var_287_int = 10; // 0x53f PushI
	add(var_287_int); // 0x540 ObjFunc
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
	func_1087(var_45_cvector, var_46_cvector); // 0x33e NEW_2
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
	var_58_bool = 1; // 0x34e PushB
	CameraTransit(var_36_cvector, var_34_cvector, var_58_bool); // 0x34f Func
	var_59_float = GetByIndex(var_35_cvector, 0); // 0x351 PushE
	var_60_float = GetByIndex(var_35_cvector, 2); // 0x352 PushE
	Rotate(var_59_float, var_60_float); // 0x353 Func
	var_61_bool = 0; // 0x355 PushV
	func_1413(var_61_bool); // 0x356 NEW_2
	if(var_61_bool == 0) goto Label_858; // 0x358 JumpB
	goto Label_866; // 0x359 Jump
	
Label_866:
	CameraWaitForPlayFinish(); // 0x362 Func
	ResumeWorld(); // 0x364 Func
	var_18_bool = 1; // 0x366 MovB
	return 18; // 0x367 Return
	
Label_858:
	var_62_string = "head"; // 0x35a PushS
	HasAnimationTrack(var_38_bool, var_62_string); // 0x35b Func
	var_63_bool = var_38_bool; // 0x35d Push
	if(var_63_bool == 0) goto Label_866; // 0x35e JumpB
	var_64_string = "head"; // 0x35f PushS
	LookAsyncCamera(var_64_string); // 0x360 Func
}


func_1188(var_253_bool)
{
	var_255_int = 0; var_256_string = ""; // 0x4a5 PushV
	var_256_string = "d12q01BurahInSobor"; // 0x4a6 MovS
	func_1097(var_255_int, var_256_string); // 0x4a7 NEW_2
	var_257_int = 0; // 0x4a9 PushI
	var_258_bool = var_255_int != var_257_int; // 0x4aa Neq
	if(var_258_bool == 0) goto Label_1198; // 0x4ab JumpB
	var_253_bool = 1; // 0x4ac MovB
	return 0; // 0x4ad Return
	
Label_1198:
	var_253_bool = 0; // 0x4ae MovB
	return 0; // 0x4af Return
}


func_1059(var_113_bool, var_114_string)
{
	var_115_bool = 0; var_116_bool = 0; // 0x423 PushV
	var_117_bool = 0; // 0x424 PushV
	func_1413(var_117_bool); // 0x425 NEW_2
	if(var_117_bool == 0) goto Label_1072; // 0x427 JumpB
	lshHasSpeech(var_116_bool, var_114_string); // 0x428 Func
	var_118_bool = var_116_bool; // 0x42a Push
	if(var_118_bool == 0) goto Label_1072; // 0x42b JumpB
	lshPlaySpeech(var_114_string); // 0x42c Func
	var_113_bool = 1; // 0x42e MovB
	return 2; // 0x42f Return
	
Label_1072:
	var_113_bool = 0; // 0x430 MovB
	return 2; // 0x431 Return
}


func_1200(var_182_bool)
{
	var_184_int = 0; var_185_string = ""; // 0x4b1 PushV
	var_185_string = "ood12BurahFactory1"; // 0x4b2 MovS
	func_1097(var_184_int, var_185_string); // 0x4b3 NEW_2
	var_188_int = 0; // 0x4b5 PushI
	var_189_bool = var_184_int == var_188_int; // 0x4b6 Eq
	if(var_189_bool == 0) goto Label_1210; // 0x4b7 JumpB
	var_182_bool = 1; // 0x4b8 MovB
	return 0; // 0x4b9 Return
	
Label_1210:
	var_182_bool = 0; // 0x4ba MovB
	return 0; // 0x4bb Return
}


func_1074()
{
	var_9_bool = 0; // 0x432 PushV
	func_1413(var_9_bool); // 0x433 NEW_2
	if(var_9_bool == 0) goto Label_1080; // 0x435 JumpB
	lshStopSpeech(); // 0x436 Func
	
Label_1080:
	return 0; // 0x438 Return
}


func_948(var_90_bool)
{
	var_92_string = ""; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_string = ""; var_97_string = ""; var_98_int = 0; var_99_bool = 0; var_100_int = 0; var_101_string = ""; // 0x3b4 PushV
	var_97_string = "c"; // 0x3b5 MovS
	var_98_int = 0; // 0x3b6 MovI
	
Label_951:
	var_102_int = 1; // 0x3b7 PushI
	if(var_102_int == 0) goto Label_964; // 0x3b8 JumpB
	var_103_int = 1; // 0x3b9 PushI
	var_104_int = var_98_int + var_103_int; // 0x3ba Add
	var_105_int = var_97_string + var_104_int; // 0x3bb Add
	HasProperty(var_105_int, var_99_bool); // 0x3bc ObjFunc
	var_106_bool = var_99_bool == 0; // 0x3be Not
	if(var_106_bool == 0) goto Label_961; // 0x3bf JumpB
	goto Label_964; // 0x3c0 Jump
	
Label_964:
	var_107_bool = var_98_int == 0; // 0x3c4 Not
	if(var_107_bool == 0) goto Label_968; // 0x3c5 JumpB
	var_90_bool = 0; // 0x3c6 MovB
	return 10; // 0x3c7 Return
	
Label_968:
	var_100_int = 0; // 0x3c8 MovI
	var_108_int = 1; // 0x3c9 PushI
	var_109_bool = var_98_int > var_108_int; // 0x3ca GT
	if(var_109_bool == 0) goto Label_974; // 0x3cb JumpB
	irand(var_100_int, var_98_int); // 0x3cc Func
	
Label_974:
	var_110_int = 1; // 0x3ce PushI
	var_111_int = var_100_int + var_110_int; // 0x3cf Add
	var_112_int = var_97_string + var_111_int; // 0x3d0 Add
	GetProperty(var_112_int, var_101_string); // 0x3d1 ObjFunc
	var_113_bool = 0; var_114_string = ""; // 0x3d3 PushV
	var_114_string = var_101_string; // 0x3d4 Mov
	func_1059(var_113_bool, var_114_string); // 0x3d5 NEW_2
	var_90_bool = var_113_bool; // 0x3d6 Mov
	return 10; // 0x3d8 Return
	
Label_961:
	var_119_int = 1; // 0x3c1 PushI
	var_98_int = var_98_int + var_119_int; // 0x3c2 Add2
	goto Label_951; // 0x3c3 Jump
}


func_1081(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x439 PushV
	self(var_11_object); // 0x43a Func
	var_9_object = var_11_object; // 0x43c Mov
	return 2; // 0x43d Return
}


func_1212(var_322_bool)
{
	var_324_int = 0; var_325_string = ""; // 0x4bd PushV
	var_325_string = "ood12BurahFactory2"; // 0x4be MovS
	func_1097(var_324_int, var_325_string); // 0x4bf NEW_2
	var_326_int = 0; // 0x4c1 PushI
	var_327_bool = var_324_int == var_326_int; // 0x4c2 Eq
	if(var_327_bool == 0) goto Label_1222; // 0x4c3 JumpB
	var_322_bool = 1; // 0x4c4 MovB
	return 0; // 0x4c5 Return
	
Label_1222:
	var_322_bool = 0; // 0x4c6 MovB
	return 0; // 0x4c7 Return
}


func_1087(var_45_cvector, var_46_cvector)
{
	var_48_float = 0; var_49_float = 0; // 0x43f PushV
	var_50_int = var_46_cvector | var_46_cvector; // 0x440 Or
	var_49_float = sqrt(var_50_int); // 0x441 Sqrt2
	var_51_float = 0.0; // 0x442 PushF
	var_52_bool = var_49_float < var_51_float; // 0x443 LT
	if(var_52_bool == 0) goto Label_1095; // 0x444 JumpB
	var_45_cvector = CVector(0.0, 0.0, 0.0); // 0x445 MovV
	return 2; // 0x446 Return
	
Label_1095:
	var_45_cvector = var_46_cvector / var_46_cvector; // 0x447 Div2
	return 2; // 0x448 Return
}


func_1347(var_299_bool, var_300_int)
{
	var_301_int = 0; var_302_int = 0; // 0x543 PushV
	var_303_string = "vol_"; // 0x544 PushS
	var_304_int = var_303_string + var_300_int; // 0x545 Add
	GetVariable(var_304_int, var_302_int); // 0x546 Func
	var_305_int = 4; // 0x548 PushI
	var_306_int = var_302_int & var_305_int; // 0x549 And
	var_307_int = 0; // 0x54a PushI
	var_299_bool = var_306_int != var_307_int; // 0x54b Neq2
	return 2; // 0x54c Return
}


func_1224(var_262_bool)
{
	var_264_bool = 0; // 0x4c9 PushV
	func_1367(var_264_bool); // 0x4ca NEW_2
	var_262_bool = var_264_bool; // 0x4cb Mov
	return 0; // 0x4cd Return
}


func_1097(var_184_int, var_185_string)
{
	var_186_int = 0; var_187_int = 0; // 0x449 PushV
	GetVariable(var_185_string, var_187_int); // 0x44a Func
	var_184_int = var_187_int; // 0x44c Mov
	return 2; // 0x44d Return
}


func_1357(var_290_bool, var_291_int)
{
	var_292_int = 0; var_293_int = 0; // 0x54d PushV
	var_294_string = "vol_"; // 0x54e PushS
	var_295_int = var_294_string + var_291_int; // 0x54f Add
	GetVariable(var_295_int, var_293_int); // 0x550 Func
	var_296_int = 16; // 0x552 PushI
	var_297_int = var_293_int & var_296_int; // 0x553 And
	var_298_int = 0; // 0x554 PushI
	var_290_bool = var_297_int != var_298_int; // 0x555 Neq2
	return 2; // 0x556 Return
}


func_1102(var_134_int)
{
	var_135_float = 0; var_136_float = 0; // 0x44e PushV
	GetGameTime(var_136_float); // 0x44f Func
	var_137_int = 1; // 0x451 PushI
	var_138_int = 0; // 0x452 PushV
	var_139_int = 24; // 0x453 PushI
	var_138_int = var_136_float / var_136_float; // 0x454 Div2
	var_134_int = var_137_int + var_138_int; // 0x455 Add2
	return 2; // 0x456 Return
}


func_1230()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x4ce PushV
	var_53_int = 700; // 0x4cf PushI
	var_54_int = 1; // 0x4d0 PushI
	var_55_int = 535683; // 0x4d1 PushI
	CreateDiaryEntry(var_52_object, var_53_int, var_54_int, var_55_int); // 0x4d2 Func
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0; // 0x4d4 PushV
	var_57_object = var_52_object; // 0x4d5 Mov
	var_58_int = 699; // 0x4d6 MovI
	func_1269(var_56_bool, var_57_object, var_58_int); // 0x4d7 NEW_2
	return 2; // 0x4d9 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_174_object, var_175_object)
{
	var_0_object = var_175_object; // 0x52 TMov
	var_1_object = var_174_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_180_int = 1; // 0x55 PushI
	if(var_180_int == 0) goto Label_203; // 0x56 JumpB
	var_181_bool = 0; // 0x57 PushV
	var_181_bool = 0; // 0x58 MovB
	var_182_bool = 0; var_183_object = Obj(); // 0x59 PushV
	var_183_object = var_1_object; // 0x5a MovT
	func_1200(var_183_object); // 0x5b NEW_2
	if(var_182_bool == 0) goto Label_101; // 0x5d JumpB
	var_190_bool = 0; var_191_object = Obj(); // 0x5e PushV
	var_191_object = var_1_object; // 0x5f MovT
	func_1176(var_191_object); // 0x60 NEW_2
	var_196_bool = var_190_bool == 0; // 0x62 Not
	if(var_196_bool == 0) goto Label_101; // 0x63 JumpB
	var_181_bool = 1; // 0x64 MovB
	
Label_101:
	if(var_181_bool == 0) goto Label_132; // 0x65 JumpB
	var_197_object = Obj(); var_198_object = Obj(); // 0x66 PushV
	var_197_object = var_1_object; // 0x67 MovT
	var_198_object = var_0_object; // 0x68 MovT
	func_1111(); // 0x69 NEW_2
	var_201_object = Obj(); var_202_object = Obj(); // 0x6b PushV
	var_201_object = var_1_object; // 0x6c MovT
	var_202_object = var_0_object; // 0x6d MovT
	func_1142(); // 0x6e NEW_2
	var_205_string = ""; // 0x70 PushV
	var_205_string = "Neutral"; // 0x71 MovS
	func_233(var_175_object, var_205_string); // 0x72 NEW_2
	var_222_int = 535567; // 0x74 PushI
	SetMessage(var_222_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_223_int = 535568; // 0x79 PushI
	var_224_int = 37252; // 0x7a PushI
	var_225_int = 37251; // 0x7b PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x7c TObjFunc
	var_226_int = 535587; // 0x7e PushI
	var_227_int = 42035; // 0x7f PushI
	var_228_int = 37272; // 0x80 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x81 TObjFunc
	goto Label_203; // 0x83 Jump
	
Label_203:
	var_229_bool = 0; // 0xcb PushV
	func_1413(var_229_bool); // 0xcc NEW_2
	if(var_229_bool == 0) goto Label_218; // 0xce JumpB
	
Label_207:
	lshWaitForAnimEnd(); // 0xcf Func
	var_230_string = var_3_string; // 0xd1 PushT
	if(var_230_string == 0) goto Label_212; // 0xd2 JumpB
	goto Label_217; // 0xd3 Jump
	
Label_217:
	goto Label_232; // 0xd9 Jump
	
Label_232:
	return 0; // 0xe8 Return
	
Label_212:
	var_231_string = ""; // 0xd4 PushV
	var_231_string = var_2_object; // 0xd5 MovT
	func_1028(var_231_string); // 0xd6 NEW_2
	goto Label_207; // 0xd8 Jump
	
Label_218:
	var_242_string = "all"; // 0xda PushS
	var_243_string = "idle"; // 0xdb PushS
	PlayAnimation(var_242_string, var_243_string); // 0xdc Func
	
Label_222:
	WaitForAnimEnd(); // 0xde Func
	var_244_string = var_3_string; // 0xe0 PushT
	if(var_244_string == 0) goto Label_227; // 0xe1 JumpB
	goto Label_232; // 0xe2 Jump
	
Label_227:
	var_245_string = "all"; // 0xe3 PushS
	var_246_string = "idle"; // 0xe4 PushS
	PlayAnimation(var_245_string, var_246_string); // 0xe5 Func
	goto Label_222; // 0xe7 Jump
	
Label_132:
	var_247_object = Obj(); var_248_object = Obj(); // 0x84 PushV
	var_247_object = var_1_object; // 0x85 MovT
	var_248_object = var_0_object; // 0x86 MovT
	func_1142(); // 0x87 NEW_2
	var_249_string = ""; // 0x89 PushV
	var_249_string = "Neutral"; // 0x8a MovS
	func_233(var_175_object, var_249_string); // 0x8b NEW_2
	var_250_int = 535630; // 0x8d PushI
	SetMessage(var_250_int); // 0x8e TObjFunc
	ClearReplies(); // 0x90 TObjFunc
	var_251_bool = 0; // 0x92 PushV
	var_251_bool = 0; // 0x93 MovB
	var_252_bool = 0; // 0x94 PushV
	var_252_bool = 0; // 0x95 MovB
	var_253_bool = 0; var_254_object = Obj(); // 0x96 PushV
	var_254_object = var_1_object; // 0x97 MovT
	func_1188(var_254_object); // 0x98 NEW_2
	var_259_bool = var_253_bool == 0; // 0x9a Not
	if(var_259_bool == 0) goto Label_162; // 0x9b JumpB
	var_260_bool = 0; var_261_object = Obj(); // 0x9c PushV
	var_261_object = var_1_object; // 0x9d MovT
	func_1154(var_260_bool, var_261_object); // 0x9e NEW_2
	if(var_260_bool == 0) goto Label_162; // 0xa0 JumpB
	var_252_bool = 1; // 0xa1 MovB
	
Label_162:
	if(var_252_bool == 0) goto Label_170; // 0xa2 JumpB
	var_309_bool = 0; var_310_object = Obj(); // 0xa3 PushV
	var_310_object = var_1_object; // 0xa4 MovT
	func_1176(var_310_object); // 0xa5 NEW_2
	var_311_bool = var_309_bool == 0; // 0xa7 Not
	if(var_311_bool == 0) goto Label_170; // 0xa8 JumpB
	var_251_bool = 1; // 0xa9 MovB
	
Label_170:
	if(var_251_bool == 0) goto Label_176; // 0xaa JumpB
	var_312_int = 535631; // 0xab PushI
	var_313_int = 37319; // 0xac PushI
	var_314_int = 37317; // 0xad PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0xae TObjFunc
	
Label_176:
	var_315_bool = 0; // 0xb0 PushV
	var_315_bool = 0; // 0xb1 MovB
	var_316_bool = 0; var_317_object = Obj(); // 0xb2 PushV
	var_317_object = var_1_object; // 0xb3 MovT
	func_1164(var_317_object); // 0xb4 NEW_2
	if(var_316_bool == 0) goto Label_189; // 0xb6 JumpB
	var_322_bool = 0; var_323_object = Obj(); // 0xb7 PushV
	var_323_object = var_1_object; // 0xb8 MovT
	func_1212(var_323_object); // 0xb9 NEW_2
	if(var_322_bool == 0) goto Label_189; // 0xbb JumpB
	var_315_bool = 1; // 0xbc MovB
	
Label_189:
	if(var_315_bool == 0) goto Label_195; // 0xbd JumpB
	var_328_int = 540355; // 0xbe PushI
	var_329_int = 42339; // 0xbf PushI
	var_330_int = 42338; // 0xc0 PushI
	AddReply(var_328_int, var_329_int, var_330_int); // 0xc1 TObjFunc
	
Label_195:
	var_331_int = 535632; // 0xc3 PushI
	var_332_int = -1; // 0xc4 PushI
	var_333_int = 37318; // 0xc5 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0xc6 TObjFunc
	goto Label_203; // 0xc8 Jump
}


func_1111()
{
	var_199_string = "ood12BurahFactory1"; // 0x458 PushS
	var_200_int = 1; // 0x459 PushI
	SetVariable(var_199_string, var_200_int); // 0x45a Func
	return 0; // 0x45c Return
}


func_1367(var_264_bool)
{
	var_265_object = Obj(); var_266_int = 0; var_267_int = 0; var_268_int = 0; var_269_object = Obj(); var_270_int = 0; var_271_int = 0; var_272_int = 0; // 0x557 PushV
	CreateIntVector(var_269_object); // 0x558 Func
	var_273_object = Obj(); var_274_bool = 0; var_275_int = 0; // 0x55a PushV
	var_273_object = var_269_object; // 0x55b Mov
	var_274_bool = 0; // 0x55c MovB
	var_275_int = -1; // 0x55d MovI
	func_1314(var_274_bool, var_275_int); // 0x55e NEW_2
	size(var_270_int); // 0x560 ObjFunc
	var_271_int = 0; // 0x562 MovI
	
Label_1379:
	var_288_bool = var_271_int < var_270_int; // 0x563 LT
	if(var_288_bool == 0) goto Label_1402; // 0x564 JumpB
	get(var_272_int, var_271_int); // 0x565 ObjFunc
	var_289_bool = 0; // 0x567 PushV
	var_289_bool = 1; // 0x568 MovB
	var_290_bool = 0; var_291_int = 0; // 0x569 PushV
	var_291_int = var_272_int; // 0x56a Mov
	func_1357(var_290_bool, var_291_int); // 0x56b NEW_2
	if(var_290_bool == 0) goto Label_1396; // 0x56d JumpB
	var_299_bool = 0; var_300_int = 0; // 0x56e PushV
	var_300_int = var_272_int; // 0x56f Mov
	func_1347(var_299_bool, var_300_int); // 0x570 NEW_2
	if(var_299_bool == 0) goto Label_1396; // 0x572 JumpB
	var_289_bool = 0; // 0x573 MovB
	
Label_1396:
	if(var_289_bool == 0) goto Label_1399; // 0x574 JumpB
	var_264_bool = 0; // 0x575 MovB
	return 8; // 0x576 Return
	
Label_1399:
	var_308_int = 1; // 0x577 PushI
	var_271_int = var_271_int + var_308_int; // 0x578 Add2
	goto Label_1379; // 0x579 Jump
	
Label_1402:
	var_264_bool = 1; // 0x57a MovB
	return 8; // 0x57b Return
}


func_985(var_121_bool)
{
	var_123_string = ""; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_string = ""; var_128_string = ""; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_string = ""; // 0x3d9 PushV
	var_133_string = "d"; // 0x3da PushS
	var_134_int = 0; // 0x3db PushV
	func_1102(var_134_int); // 0x3dc NEW_2
	var_140_int = var_133_string + var_134_int; // 0x3de Add
	var_141_string = "m"; // 0x3df PushS
	var_128_string = var_140_int + var_141_string; // 0x3e0 Add2
	var_129_int = 0; // 0x3e1 MovI
	
Label_994:
	var_142_int = 1; // 0x3e2 PushI
	if(var_142_int == 0) goto Label_1007; // 0x3e3 JumpB
	var_143_int = 1; // 0x3e4 PushI
	var_144_int = var_129_int + var_143_int; // 0x3e5 Add
	var_145_int = var_128_string + var_144_int; // 0x3e6 Add
	HasProperty(var_145_int, var_130_bool); // 0x3e7 ObjFunc
	var_146_bool = var_130_bool == 0; // 0x3e9 Not
	if(var_146_bool == 0) goto Label_1004; // 0x3ea JumpB
	goto Label_1007; // 0x3eb Jump
	
Label_1007:
	var_147_bool = var_129_int == 0; // 0x3ef Not
	if(var_147_bool == 0) goto Label_1011; // 0x3f0 JumpB
	var_121_bool = 0; // 0x3f1 MovB
	return 10; // 0x3f2 Return
	
Label_1011:
	var_131_int = 0; // 0x3f3 MovI
	var_148_int = 1; // 0x3f4 PushI
	var_149_bool = var_129_int > var_148_int; // 0x3f5 GT
	if(var_149_bool == 0) goto Label_1017; // 0x3f6 JumpB
	irand(var_131_int, var_129_int); // 0x3f7 Func
	
Label_1017:
	var_150_int = 1; // 0x3f9 PushI
	var_151_int = var_131_int + var_150_int; // 0x3fa Add
	var_152_int = var_128_string + var_151_int; // 0x3fb Add
	GetProperty(var_152_int, var_132_string); // 0x3fc ObjFunc
	var_153_bool = 0; var_154_string = ""; // 0x3fe PushV
	var_154_string = var_132_string; // 0x3ff Mov
	func_1059(var_153_bool, var_154_string); // 0x400 NEW_2
	var_121_bool = var_153_bool; // 0x401 Mov
	return 10; // 0x403 Return
	
Label_1004:
	var_155_int = 1; // 0x3ec PushI
	var_129_int = var_129_int + var_155_int; // 0x3ed Add2
	goto Label_994; // 0x3ee Jump
}


func_1243()
{
	var_22_object = Obj(); var_23_object = Obj(); // 0x4db PushV
	var_24_int = 706; // 0x4dc PushI
	var_25_int = 1; // 0x4dd PushI
	var_26_int = 535689; // 0x4de PushI
	CreateDiaryEntry(var_23_object, var_24_int, var_25_int, var_26_int); // 0x4df Func
	var_27_bool = 0; var_28_object = Obj(); var_29_int = 0; // 0x4e1 PushV
	var_28_object = var_23_object; // 0x4e2 Mov
	var_29_int = 699; // 0x4e3 MovI
	func_1269(var_27_bool, var_28_object, var_29_int); // 0x4e4 NEW_2
	return 2; // 0x4e6 Return
}


func_1117()
{
	var_49_string = "d12q01BurahInSobor"; // 0x45e PushS
	var_50_int = 1; // 0x45f PushI
	SetVariable(var_49_string, var_50_int); // 0x460 Func
	func_1230(); // 0x463 NEW_2
	return 0; // 0x465 Return
}


func_1126()
{
	var_14_int = 0; var_15_string = ""; // 0x467 PushV
	var_15_string = "d12q01_Burah"; // 0x468 MovS
	func_1097(var_14_int, var_15_string); // 0x469 NEW_2
	var_18_int = 0; // 0x46b PushI
	var_19_bool = var_14_int == var_18_int; // 0x46c Eq
	if(var_19_bool == 0) goto Label_1141; // 0x46d JumpB
	var_20_string = "d12q01_Burah"; // 0x46e PushS
	var_21_int = 1; // 0x46f PushI
	SetVariable(var_20_string, var_21_int); // 0x470 Func
	func_1243(); // 0x473 NEW_2
	
Label_1141:
	return 0; // 0x475 Return
}


func_872()
{
	var_336_bool = 0; var_337_bool = 0; // 0x368 PushV
	var_338_bool = 1; // 0x369 PushB
	CameraSwitchToNormal(var_338_bool); // 0x36a Func
	var_339_bool = 0; // 0x36c PushV
	func_1413(var_339_bool); // 0x36d NEW_2
	if(var_339_bool == 0) goto Label_881; // 0x36f JumpB
	goto Label_889; // 0x370 Jump
	
Label_889:
	return 2; // 0x379 Return
	
Label_881:
	var_340_string = "head"; // 0x371 PushS
	HasAnimationTrack(var_337_bool, var_340_string); // 0x372 Func
	var_341_bool = var_337_bool; // 0x374 Push
	if(var_341_bool == 0) goto Label_889; // 0x375 JumpB
	var_342_string = "head"; // 0x376 PushS
	UnlookAsync(var_342_string); // 0x377 Func
}


func_233(var_2_object, var_205_string)
{
	var_206_bool = 0; // 0xea PushV
	func_1413(var_206_bool); // 0xeb NEW_2
	var_207_bool = var_206_bool == 0; // 0xed Not
	if(var_207_bool == 0) goto Label_240; // 0xee JumpB
	return 0; // 0xef Return
	
Label_240:
	var_208_bool = var_205_string == var_2_object; // 0xf0 Eq
	if(var_208_bool == 0) goto Label_243; // 0xf1 JumpB
	return 0; // 0xf2 Return
	
Label_243:
	var_209_string = ""; var_210_bool = 0; // 0xf3 PushV
	var_209_string = var_205_string; // 0xf4 Mov
	var_211_string = ""; // 0xf5 PushS
	var_212_bool = var_205_string == var_211_string; // 0xf6 Eq
	if(var_212_bool == 0) goto Label_250; // 0xf7 JumpB
	var_210_bool = 0; // 0xf8 MovB
	goto Label_251; // 0xf9 Jump
	
Label_251:
	func_1044(var_209_string, var_210_bool); // 0xfb NEW_2
	var_2_object = var_205_string; // 0xfd TMov
	return 0; // 0xfe Return
	
Label_250:
	var_210_bool = 1; // 0xfa MovB
}


func_1256(var_36_object)
{
	var_37_object = Obj(); var_38_object = Obj(); // 0x4e8 PushV
	GetDiaryRoot(var_38_object); // 0x4e9 Func
	var_39_bool = var_38_object == 0; // 0x4eb Not
	if(var_39_bool == 0) goto Label_1266; // 0x4ec JumpB
	var_40_string = "Can't retrieve diary root"; // 0x4ed PushS
	Trace(var_40_string); // 0x4ee Func
	var_36_object = 0; // 0x4f0 MovB
	return 2; // 0x4f1 Return
	
Label_1266:
	var_36_object = var_38_object; // 0x4f2 Mov
	return 2; // 0x4f3 Return
}


func_753()
{
	
Label_753:
	Hold(); // 0x2f1 Func
	goto Label_753; // 0x2f3 Jump
}


func_1269(var_27_bool, var_28_object, var_29_int)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_int = 0; var_33_object = Obj(); var_34_object = Obj(); var_35_int = 0; // 0x4f5 PushV
	var_36_object = Obj(); // 0x4f6 PushV
	func_1256(var_36_object); // 0x4f7 NEW_2
	var_33_object = var_36_object; // 0x4f8 Mov
	Find(var_29_int, var_34_object); // 0x4fa ObjFunc
	var_41_bool = var_34_object == 0; // 0x4fc Not
	if(var_41_bool == 0) goto Label_1284; // 0x4fd JumpB
	var_42_string = "Can't find diary parent with id: "; // 0x4fe PushS
	var_43_int = var_42_string + var_29_int; // 0x4ff Add
	Trace(var_43_int); // 0x500 Func
	var_27_bool = 0; // 0x502 MovB
	return 6; // 0x503 Return
	
Label_1284:
	AddChild(var_28_object); // 0x504 ObjFunc
	var_44_int = 7; // 0x506 PushI
	SendWorldWndMessage(var_44_int); // 0x507 Func
	GetCategory(var_35_int); // 0x509 ObjFunc
	SetDiarySection(var_35_int); // 0x50b Func
	var_27_bool = 0; // 0x50d MovB
	return 6; // 0x50e Return
}


func_1142()
{
	var_203_string = "d12q01BurahVisit"; // 0x477 PushS
	var_204_int = 1; // 0x478 PushI
	SetVariable(var_203_string, var_204_int); // 0x479 Func
	return 0; // 0x47b Return
}


func_890(var_79_bool, var_80_object)
{
	var_84_int = 0; var_85_int = 0; var_86_int = 0; var_87_int = 0; // 0x37a PushV
	var_88_string = "voice_common"; // 0x37b PushS
	GetVariable(var_88_string, var_86_int); // 0x37c Func
	var_89_int = var_86_int; // 0x37e Push
	if(var_89_int == 0) goto Label_928; // 0x37f JumpB
	var_90_bool = 0; var_91_object = Obj(); // 0x380 PushV
	var_91_object = var_80_object; // 0x381 Mov
	func_948(var_91_object); // 0x382 NEW_2
	var_120_bool = var_90_bool == 0; // 0x384 Not
	if(var_120_bool == 0) goto Label_910; // 0x385 JumpB
	var_121_bool = 0; var_122_object = Obj(); // 0x386 PushV
	var_122_object = var_80_object; // 0x387 Mov
	func_985(var_122_object); // 0x388 NEW_2
	var_156_bool = var_121_bool == 0; // 0x38a Not
	if(var_156_bool == 0) goto Label_910; // 0x38b JumpB
	var_79_bool = 0; // 0x38c MovB
	return 4; // 0x38d Return
	
Label_910:
	var_157_int = 2; // 0x38e PushI
	irand(var_87_int, var_157_int); // 0x38f Func
	var_158_int = var_87_int; // 0x391 Push
	if(var_158_int == 0) goto Label_923; // 0x392 JumpB
	var_159_string = "voice_common"; // 0x393 PushS
	var_160_int = 1; // 0x394 PushI
	var_161_int = var_86_int + var_160_int; // 0x395 Add
	var_162_int = 3; // 0x396 PushI
	var_163_int = var_161_int / var_162_int; // 0x397 Mod
	SetVariable(var_159_string, var_163_int); // 0x398 Func
	goto Label_927; // 0x39a Jump
	
Label_927:
	goto Label_946; // 0x39f Jump
	
Label_946:
	var_79_bool = 1; // 0x3b2 MovB
	return 4; // 0x3b3 Return
	
Label_923:
	var_164_string = "voice_common"; // 0x39b PushS
	var_165_int = 0; // 0x39c PushI
	SetVariable(var_164_string, var_165_int); // 0x39d Func
	
Label_928:
	var_166_bool = 0; var_167_object = Obj(); // 0x3a0 PushV
	var_167_object = var_80_object; // 0x3a1 Mov
	func_985(var_167_object); // 0x3a2 NEW_2
	var_168_bool = var_166_bool == 0; // 0x3a4 Not
	if(var_168_bool == 0) goto Label_942; // 0x3a5 JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x3a6 PushV
	var_170_object = var_80_object; // 0x3a7 Mov
	func_948(var_170_object); // 0x3a8 NEW_2
	var_171_bool = var_169_bool == 0; // 0x3aa Not
	if(var_171_bool == 0) goto Label_942; // 0x3ab JumpB
	var_79_bool = 0; // 0x3ac MovB
	return 4; // 0x3ad Return
	
Label_942:
	var_172_string = "voice_common"; // 0x3ae PushS
	var_173_int = 1; // 0x3af PushI
	SetVariable(var_172_string, var_173_int); // 0x3b0 Func
}


func_1148()
{
	var_67_string = "ood12BurahFactory2"; // 0x47d PushS
	var_68_int = 1; // 0x47e PushI
	SetVariable(var_67_string, var_68_int); // 0x47f Func
	return 0; // 0x481 Return
}


func_1405(var_67_int)
{
	var_67_int = 515592; // 0x57d MovI
	return 0; // 0x57e Return
}


func_1407(var_66_int)
{
	var_66_int = 511961; // 0x57f MovI
	return 0; // 0x580 Return
}


