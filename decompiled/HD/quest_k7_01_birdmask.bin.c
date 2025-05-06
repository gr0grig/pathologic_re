task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0x10c PushI
	if(var_12_int == 0) goto Label_681; // 0x10d JumpB
	func_1010(); // 0x10f NEW_2
	var_14_int = 27413; // 0x111 PushI
	var_15_bool = var_11_object == var_14_int; // 0x112 Eq
	if(var_15_bool == 0) goto Label_286; // 0x113 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0x114 PushV
	var_16_object = var_1_object; // 0x115 MovT
	var_17_object = var_0_object; // 0x116 MovT
	func_1123(); // 0x117 NEW_2
	var_48_object = Obj(); var_49_object = Obj(); // 0x119 PushV
	var_48_object = var_1_object; // 0x11a MovT
	var_49_object = var_0_object; // 0x11b MovT
	func_1155(); // 0x11c NEW_2
	
Label_286:
	var_74_int = 43962; // 0x11e PushI
	var_75_bool = var_11_object == var_74_int; // 0x11f Eq
	if(var_75_bool == 0) goto Label_299; // 0x120 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x121 PushV
	var_76_object = var_1_object; // 0x122 MovT
	var_77_object = var_0_object; // 0x123 MovT
	func_1123(); // 0x124 NEW_2
	var_78_object = Obj(); var_79_object = Obj(); // 0x126 PushV
	var_78_object = var_1_object; // 0x127 MovT
	var_79_object = var_0_object; // 0x128 MovT
	func_1155(); // 0x129 NEW_2
	
Label_299:
	var_80_int = 29630; // 0x12b PushI
	var_81_bool = var_11_object == var_80_int; // 0x12c Eq
	if(var_81_bool == 0) goto Label_307; // 0x12d JumpB
	var_82_object = Obj(); var_83_object = Obj(); // 0x12e PushV
	var_82_object = var_1_object; // 0x12f MovT
	var_83_object = var_0_object; // 0x130 MovT
	func_1171(); // 0x131 NEW_2
	
Label_307:
	var_86_int = 29633; // 0x133 PushI
	var_87_bool = var_11_object == var_86_int; // 0x134 Eq
	if(var_87_bool == 0) goto Label_315; // 0x135 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x136 PushV
	var_88_object = var_1_object; // 0x137 MovT
	var_89_object = var_0_object; // 0x138 MovT
	func_1177(); // 0x139 NEW_2
	
Label_315:
	var_92_int = 31582; // 0x13b PushI
	var_93_bool = var_10_bool == var_92_int; // 0x13c Eq
	if(var_93_bool == 0) goto Label_451; // 0x13d JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x13e PushV
	var_95_object = var_1_object; // 0x13f MovT
	func_1190(var_95_object); // 0x140 NEW_2
	if(var_94_bool == 0) goto Label_343; // 0x142 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x143 PushV
	var_100_object = var_1_object; // 0x144 MovT
	var_101_object = var_0_object; // 0x145 MovT
	func_1117(); // 0x146 NEW_2
	var_104_string = ""; // 0x148 PushV
	var_104_string = "Neutral"; // 0x149 MovS
	func_245(var_11_object, var_104_string); // 0x14a NEW_2
	var_121_int = 530193; // 0x14c PushI
	SetMessage(var_121_int); // 0x14d TObjFunc
	ClearReplies(); // 0x14f TObjFunc
	var_122_int = 526124; // 0x151 PushI
	var_123_int = 27404; // 0x152 PushI
	var_124_int = 27403; // 0x153 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x154 TObjFunc
	return 0; // 0x156 Return
	
Label_343:
	var_125_bool = 0; // 0x157 PushV
	var_125_bool = 0; // 0x158 MovB
	var_126_bool = 0; var_127_object = Obj(); // 0x159 PushV
	var_127_object = var_1_object; // 0x15a MovT
	func_1236(var_126_bool, var_127_object); // 0x15b NEW_2
	if(var_126_bool == 0) goto Label_356; // 0x15d JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x15e PushV
	var_138_object = var_1_object; // 0x15f MovT
	func_1246(var_137_bool, var_138_object); // 0x160 NEW_2
	if(var_137_bool == 0) goto Label_356; // 0x162 JumpB
	var_125_bool = 1; // 0x163 MovB
	
Label_356:
	if(var_125_bool == 0) goto Label_396; // 0x164 JumpB
	var_152_string = ""; // 0x165 PushV
	var_152_string = "Neutral"; // 0x166 MovS
	func_245(var_11_object, var_152_string); // 0x167 NEW_2
	var_153_int = 526123; // 0x169 PushI
	SetMessage(var_153_int); // 0x16a TObjFunc
	ClearReplies(); // 0x16c TObjFunc
	var_154_bool = 0; // 0x16e PushV
	var_154_bool = 0; // 0x16f MovB
	var_155_bool = 0; var_156_object = Obj(); // 0x170 PushV
	var_156_object = var_1_object; // 0x171 MovT
	func_1226(var_155_bool, var_156_object); // 0x172 NEW_2
	if(var_155_bool == 0) goto Label_379; // 0x174 JumpB
	var_193_bool = 0; var_194_object = Obj(); // 0x175 PushV
	var_194_object = var_1_object; // 0x176 MovT
	func_1202(var_194_object); // 0x177 NEW_2
	if(var_193_bool == 0) goto Label_379; // 0x179 JumpB
	var_154_bool = 1; // 0x17a MovB
	
Label_379:
	if(var_154_bool == 0) goto Label_385; // 0x17b JumpB
	var_199_int = 528266; // 0x17c PushI
	var_200_int = 29631; // 0x17d PushI
	var_201_int = 29630; // 0x17e PushI
	AddReply(var_199_int, var_200_int, var_201_int); // 0x17f TObjFunc
	
Label_385:
	var_202_int = 528258; // 0x181 PushI
	var_203_int = -1; // 0x182 PushI
	var_204_int = 29621; // 0x183 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x184 TObjFunc
	var_205_int = 526135; // 0x186 PushI
	var_206_int = -1; // 0x187 PushI
	var_207_int = 27414; // 0x188 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x189 TObjFunc
	return 0; // 0x18b Return
	
Label_396:
	var_208_bool = 0; var_209_object = Obj(); // 0x18c PushV
	var_209_object = var_1_object; // 0x18d MovT
	func_1226(var_208_bool, var_209_object); // 0x18e NEW_2
	if(var_208_bool == 0) goto Label_436; // 0x190 JumpB
	var_210_object = Obj(); var_211_object = Obj(); // 0x191 PushV
	var_210_object = var_1_object; // 0x192 MovT
	var_211_object = var_0_object; // 0x193 MovT
	func_1183(); // 0x194 NEW_2
	var_222_string = ""; // 0x196 PushV
	var_222_string = "Neutral"; // 0x197 MovS
	func_245(var_11_object, var_222_string); // 0x198 NEW_2
	var_223_int = 526136; // 0x19a PushI
	SetMessage(var_223_int); // 0x19b TObjFunc
	ClearReplies(); // 0x19d TObjFunc
	var_224_bool = 0; var_225_object = Obj(); // 0x19f PushV
	var_225_object = var_1_object; // 0x1a0 MovT
	func_1214(var_225_object); // 0x1a1 NEW_2
	if(var_224_bool == 0) goto Label_425; // 0x1a3 JumpB
	var_230_int = 528269; // 0x1a4 PushI
	var_231_int = 29634; // 0x1a5 PushI
	var_232_int = 29633; // 0x1a6 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1a7 TObjFunc
	
Label_425:
	var_233_int = 526137; // 0x1a9 PushI
	var_234_int = -1; // 0x1aa PushI
	var_235_int = 27416; // 0x1ab PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x1ac TObjFunc
	var_236_int = 528259; // 0x1ae PushI
	var_237_int = -1; // 0x1af PushI
	var_238_int = 29622; // 0x1b0 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x1b1 TObjFunc
	return 0; // 0x1b3 Return
	
Label_436:
	var_239_string = ""; // 0x1b4 PushV
	var_239_string = "Neutral"; // 0x1b5 MovS
	func_245(var_11_object, var_239_string); // 0x1b6 NEW_2
	var_240_int = 530191; // 0x1b8 PushI
	SetMessage(var_240_int); // 0x1b9 TObjFunc
	ClearReplies(); // 0x1bb TObjFunc
	var_241_int = 530192; // 0x1bd PushI
	var_242_int = -1; // 0x1be PushI
	var_243_int = 31581; // 0x1bf PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x1c0 TObjFunc
	return 0; // 0x1c2 Return
	
Label_451:
	var_244_int = 29634; // 0x1c3 PushI
	var_245_bool = var_10_bool == var_244_int; // 0x1c4 Eq
	if(var_245_bool == 0) goto Label_469; // 0x1c5 JumpB
	var_246_string = ""; // 0x1c6 PushV
	var_246_string = "Neutral"; // 0x1c7 MovS
	func_245(var_11_object, var_246_string); // 0x1c8 NEW_2
	var_247_int = 528270; // 0x1ca PushI
	SetMessage(var_247_int); // 0x1cb TObjFunc
	ClearReplies(); // 0x1cd TObjFunc
	var_248_int = 528271; // 0x1cf PushI
	var_249_int = 29636; // 0x1d0 PushI
	var_250_int = 29635; // 0x1d1 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x1d2 TObjFunc
	return 0; // 0x1d4 Return
	
Label_469:
	var_251_int = 29636; // 0x1d5 PushI
	var_252_bool = var_10_bool == var_251_int; // 0x1d6 Eq
	if(var_252_bool == 0) goto Label_492; // 0x1d7 JumpB
	var_253_string = ""; // 0x1d8 PushV
	var_253_string = "Neutral"; // 0x1d9 MovS
	func_245(var_11_object, var_253_string); // 0x1da NEW_2
	var_254_int = 528272; // 0x1dc PushI
	SetMessage(var_254_int); // 0x1dd TObjFunc
	ClearReplies(); // 0x1df TObjFunc
	var_255_int = 528273; // 0x1e1 PushI
	var_256_int = -1; // 0x1e2 PushI
	var_257_int = 29637; // 0x1e3 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x1e4 TObjFunc
	var_258_int = 528274; // 0x1e6 PushI
	var_259_int = -1; // 0x1e7 PushI
	var_260_int = 29638; // 0x1e8 PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x1e9 TObjFunc
	return 0; // 0x1eb Return
	
Label_492:
	var_261_int = 29631; // 0x1ec PushI
	var_262_bool = var_10_bool == var_261_int; // 0x1ed Eq
	if(var_262_bool == 0) goto Label_510; // 0x1ee JumpB
	var_263_string = ""; // 0x1ef PushV
	var_263_string = "Neutral"; // 0x1f0 MovS
	func_245(var_11_object, var_263_string); // 0x1f1 NEW_2
	var_264_int = 528267; // 0x1f3 PushI
	SetMessage(var_264_int); // 0x1f4 TObjFunc
	ClearReplies(); // 0x1f6 TObjFunc
	var_265_int = 526132; // 0x1f8 PushI
	var_266_int = 27412; // 0x1f9 PushI
	var_267_int = 27411; // 0x1fa PushI
	AddReply(var_265_int, var_266_int, var_267_int); // 0x1fb TObjFunc
	return 0; // 0x1fd Return
	
Label_510:
	var_268_int = 27412; // 0x1fe PushI
	var_269_bool = var_10_bool == var_268_int; // 0x1ff Eq
	if(var_269_bool == 0) goto Label_528; // 0x200 JumpB
	var_270_string = ""; // 0x201 PushV
	var_270_string = "Neutral"; // 0x202 MovS
	func_245(var_11_object, var_270_string); // 0x203 NEW_2
	var_271_int = 526133; // 0x205 PushI
	SetMessage(var_271_int); // 0x206 TObjFunc
	ClearReplies(); // 0x208 TObjFunc
	var_272_int = 528268; // 0x20a PushI
	var_273_int = -1; // 0x20b PushI
	var_274_int = 29632; // 0x20c PushI
	AddReply(var_272_int, var_273_int, var_274_int); // 0x20d TObjFunc
	return 0; // 0x20f Return
	
Label_528:
	var_275_int = 27404; // 0x210 PushI
	var_276_bool = var_10_bool == var_275_int; // 0x211 Eq
	if(var_276_bool == 0) goto Label_546; // 0x212 JumpB
	var_277_string = ""; // 0x213 PushV
	var_277_string = "Neutral"; // 0x214 MovS
	func_245(var_11_object, var_277_string); // 0x215 NEW_2
	var_278_int = 526125; // 0x217 PushI
	SetMessage(var_278_int); // 0x218 TObjFunc
	ClearReplies(); // 0x21a TObjFunc
	var_279_int = 528260; // 0x21c PushI
	var_280_int = 29624; // 0x21d PushI
	var_281_int = 29623; // 0x21e PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x21f TObjFunc
	return 0; // 0x221 Return
	
Label_546:
	var_282_int = 29624; // 0x222 PushI
	var_283_bool = var_10_bool == var_282_int; // 0x223 Eq
	if(var_283_bool == 0) goto Label_569; // 0x224 JumpB
	var_284_string = ""; // 0x225 PushV
	var_284_string = "Neutral"; // 0x226 MovS
	func_245(var_11_object, var_284_string); // 0x227 NEW_2
	var_285_int = 528261; // 0x229 PushI
	SetMessage(var_285_int); // 0x22a TObjFunc
	ClearReplies(); // 0x22c TObjFunc
	var_286_int = 526126; // 0x22e PushI
	var_287_int = 27406; // 0x22f PushI
	var_288_int = 27405; // 0x230 PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x231 TObjFunc
	var_289_int = 528262; // 0x233 PushI
	var_290_int = 29626; // 0x234 PushI
	var_291_int = 29625; // 0x235 PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x236 TObjFunc
	return 0; // 0x238 Return
	
Label_569:
	var_292_int = 29626; // 0x239 PushI
	var_293_bool = var_10_bool == var_292_int; // 0x23a Eq
	if(var_293_bool == 0) goto Label_587; // 0x23b JumpB
	var_294_string = ""; // 0x23c PushV
	var_294_string = "Neutral"; // 0x23d MovS
	func_245(var_11_object, var_294_string); // 0x23e NEW_2
	var_295_int = 528263; // 0x240 PushI
	SetMessage(var_295_int); // 0x241 TObjFunc
	ClearReplies(); // 0x243 TObjFunc
	var_296_int = 528264; // 0x245 PushI
	var_297_int = 27408; // 0x246 PushI
	var_298_int = 29627; // 0x247 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x248 TObjFunc
	return 0; // 0x24a Return
	
Label_587:
	var_299_int = 27406; // 0x24b PushI
	var_300_bool = var_10_bool == var_299_int; // 0x24c Eq
	if(var_300_bool == 0) goto Label_610; // 0x24d JumpB
	var_301_string = ""; // 0x24e PushV
	var_301_string = "Neutral"; // 0x24f MovS
	func_245(var_11_object, var_301_string); // 0x250 NEW_2
	var_302_int = 526127; // 0x252 PushI
	SetMessage(var_302_int); // 0x253 TObjFunc
	ClearReplies(); // 0x255 TObjFunc
	var_303_int = 526128; // 0x257 PushI
	var_304_int = 27408; // 0x258 PushI
	var_305_int = 27407; // 0x259 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x25a TObjFunc
	var_306_int = 528265; // 0x25c PushI
	var_307_int = 27408; // 0x25d PushI
	var_308_int = 29629; // 0x25e PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x25f TObjFunc
	return 0; // 0x261 Return
	
Label_610:
	var_309_int = 27408; // 0x262 PushI
	var_310_bool = var_10_bool == var_309_int; // 0x263 Eq
	if(var_310_bool == 0) goto Label_633; // 0x264 JumpB
	var_311_string = ""; // 0x265 PushV
	var_311_string = "Neutral"; // 0x266 MovS
	func_245(var_11_object, var_311_string); // 0x267 NEW_2
	var_312_int = 526129; // 0x269 PushI
	SetMessage(var_312_int); // 0x26a TObjFunc
	ClearReplies(); // 0x26c TObjFunc
	var_313_int = 526130; // 0x26e PushI
	var_314_int = 27410; // 0x26f PushI
	var_315_int = 27409; // 0x270 PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x271 TObjFunc
	var_316_int = 541756; // 0x273 PushI
	var_317_int = 43961; // 0x274 PushI
	var_318_int = 43960; // 0x275 PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x276 TObjFunc
	return 0; // 0x278 Return
	
Label_633:
	var_319_int = 43961; // 0x279 PushI
	var_320_bool = var_10_bool == var_319_int; // 0x27a Eq
	if(var_320_bool == 0) goto Label_651; // 0x27b JumpB
	var_321_string = ""; // 0x27c PushV
	var_321_string = "Neutral"; // 0x27d MovS
	func_245(var_11_object, var_321_string); // 0x27e NEW_2
	var_322_int = 541757; // 0x280 PushI
	SetMessage(var_322_int); // 0x281 TObjFunc
	ClearReplies(); // 0x283 TObjFunc
	var_323_int = 541758; // 0x285 PushI
	var_324_int = -1; // 0x286 PushI
	var_325_int = 43962; // 0x287 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x288 TObjFunc
	return 0; // 0x28a Return
	
Label_651:
	var_326_int = 27410; // 0x28b PushI
	var_327_bool = var_10_bool == var_326_int; // 0x28c Eq
	if(var_327_bool == 0) goto Label_669; // 0x28d JumpB
	var_328_string = ""; // 0x28e PushV
	var_328_string = "Neutral"; // 0x28f MovS
	func_245(var_11_object, var_328_string); // 0x290 NEW_2
	var_329_int = 526131; // 0x292 PushI
	SetMessage(var_329_int); // 0x293 TObjFunc
	ClearReplies(); // 0x295 TObjFunc
	var_330_int = 526134; // 0x297 PushI
	var_331_int = -1; // 0x298 PushI
	var_332_int = 27413; // 0x299 PushI
	AddReply(var_330_int, var_331_int, var_332_int); // 0x29a TObjFunc
	return 0; // 0x29c Return
	
Label_669:
	var_3_string = 1; // 0x29d TMovB
	var_333_bool = 0; // 0x29e PushV
	func_1091(var_333_bool); // 0x29f NEW_2
	if(var_333_bool == 0) goto Label_677; // 0x2a1 JumpB
	lshStopAnimation(); // 0x2a2 Func
	goto Label_679; // 0x2a4 Jump
	
Label_679:
	return 0; // 0x2a7 Return
	
Label_677:
	StopAnimation(); // 0x2a5 Func
	
Label_681:
	return 0; // 0x2a9 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_object)
{
	func_768(var_9_object, var_10_object); // 0x2b6 NEW_2
	var_14_int = 0; var_15_object = Obj(); // 0x2b8 PushV
	var_15_object = var_10_object; // 0x2b9 Mov
	TaskCall(0); // 0x2ba TaskCall
	func_0(var_16_object, var_14_int, var_15_object); // 0x2bb NEW_2
	TaskReturn(); // 0x2bc TaskReturn
	return 0; // 0x2be Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_int)
{
	var_11_int = 10; // 0x2ea PushI
	var_12_bool = var_10_int == var_11_int; // 0x2eb Eq
	if(var_12_bool == 0) goto Label_767; // 0x2ec JumpB
	var_13_bool = 0; // 0x2ed PushV
	func_730(var_8_bool, var_9_object, var_10_int, var_13_bool); // 0x2ee NEW_2
	if(var_13_bool == 0) goto Label_761; // 0x2f0 JumpB
	var_26_bool = var_2_object == 0; // 0x2f1 Not
	if(var_26_bool == 0) goto Label_760; // 0x2f2 JumpB
	var_27_object = Obj(); // 0x2f3 PushV
	var_27_object = var_4_bool; // 0x2f4 MovT
	func_999(var_27_object); // 0x2f5 NEW_2
	var_2_object = 1; // 0x2f7 TMovB
	
Label_760:
	goto Label_767; // 0x2f8 Jump
	
Label_767:
	return 0; // 0x2ff Return
	
Label_761:
	var_34_object = var_2_object; // 0x2f9 PushT
	if(var_34_object == 0) goto Label_767; // 0x2fa JumpB
	var_35_string = "head"; // 0x2fb PushS
	UnlookAsync(var_35_string); // 0x2fc Func
	var_2_object = 0; // 0x2fe TMovB
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object)
{
	
Label_682:
	var_10_float = 0; var_11_float = 0; // 0x2aa PushV
	var_10_float = 300; // 0x2ab MovI
	var_11_float = 100; // 0x2ac MovI
	func_703(var_5_int, var_6_int, var_7_bool, var_8_bool, var_9_object, var_10_float, var_11_float); // 0x2ad NEW_2
	var_72_int = 3; // 0x2af PushI
	Sleep(var_72_int); // 0x2b0 Func
	goto Label_682; // 0x2b2 Jump
}


func_768(var_2_object, var_3_string)
{
	func_863(); // 0x301 NEW_2
	var_11_int = 10; // 0x303 PushI
	KillTimer(var_11_int); // 0x304 Func
	var_12_object = var_2_object; // 0x306 PushT
	if(var_12_object == 0) goto Label_780; // 0x307 JumpB
	var_13_string = "head"; // 0x308 PushS
	UnlookAsync(var_13_string); // 0x309 Func
	var_2_object = 0; // 0x30b TMovB
	
Label_780:
	var_3_string = 1; // 0x30c TMovB
	return 0; // 0x30d Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 130.0; // 0x4 MovF
	func_881(var_26_object, var_27_float); // 0x5 NEW_2
	var_72_bool = var_25_bool == 0; // 0x7 Not
	if(var_72_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_73_int = 0; // 0xd PushV
	func_1085(var_73_int); // 0xe NEW_2
	SetNPCName(var_73_int); // 0x10 ObjFunc
	var_74_int = 0; // 0x12 PushV
	func_1083(var_74_int); // 0x13 NEW_2
	SetNPCDescription(var_74_int); // 0x15 ObjFunc
	var_75_string = ""; // 0x17 PushV
	func_1087(var_75_string); // 0x18 NEW_2
	SetPhoto(var_75_string); // 0x1a ObjFunc
	var_76_string = ""; // 0x1c PushV
	func_1089(var_76_string); // 0x1d NEW_2
	SetPhoto2(var_76_string); // 0x1f ObjFunc
	var_77_int = 0; // 0x21 PushV
	func_1382(var_77_int); // 0x22 NEW_2
	SetPlayerName(var_77_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_85_bool = var_22_bool; // 0x29 Push
	if(var_85_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_86_object = Obj(); var_87_object = Obj(); // 0x2f PushV
	var_86_object = var_15_object; // 0x30 Mov
	var_87_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_88_object, var_89_object, var_90_string, var_91_bool, var_86_object, var_87_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_263_bool = var_24_bool == 0; // 0x38 Not
	if(var_263_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_264_object = Obj(); // 0x3f PushV
	var_264_object = var_15_object; // 0x40 Mov
	func_950(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1027(var_95_int, var_96_string)
{
	var_97_int = 0; var_98_int = 0; // 0x403 PushV
	GetVariable(var_96_string, var_98_int); // 0x404 Func
	var_95_int = var_98_int; // 0x406 Mov
	return 2; // 0x407 Return
}


func_1155()
{
	var_50_object = Obj(); var_51_string = ""; var_52_float = 0; // 0x484 PushV
	var_53_object = Obj(); // 0x485 PushV
	func_1332(var_53_object); // 0x486 NEW_2
	var_50_object = var_53_object; // 0x487 Mov
	var_51_string = "pt_d7q02_corpse"; // 0x489 MovS
	var_52_float = 2; // 0x48a MovI
	func_1349(var_50_object, var_51_string, var_52_float); // 0x48b NEW_2
	var_73_object = Obj(); // 0x48d PushV
	func_1332(var_73_object); // 0x48e NEW_2
	ShowMap(var_73_object); // 0x490 ObjFunc
	return 0; // 0x492 Return
}


func_1032(var_231_string, var_232_bool)
{
	var_233_object = Obj(); var_234_object = Obj(); // 0x408 PushV
	FindActor(var_234_object, var_231_string); // 0x409 Func
	var_235_bool = var_234_object == 0; // 0x40b Not
	if(var_235_bool == 0) goto Label_1044; // 0x40c JumpB
	var_236_string = "Door "; // 0x40d PushS
	var_237_int = var_236_string + var_231_string; // 0x40e Add
	var_238_string = " not found"; // 0x40f PushS
	var_239_int = var_237_int + var_238_string; // 0x410 Add
	Trace(var_239_int); // 0x411 Func
	goto Label_1047; // 0x413 Jump
	
Label_1047:
	return 2; // 0x417 Return
	
Label_1044:
	var_240_string = "locked"; // 0x414 PushS
	SetProperty(var_240_string, var_232_bool); // 0x415 ObjFunc
}


func_782()
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_int = 0; var_23_bool = 0; var_24_float = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_float = 0; var_32_bool = 0; // 0x30e PushV
	WaitForAnimEnd(); // 0x30f Func
	var_33_bool = 0; // 0x311 PushV
	func_876(var_33_bool); // 0x312 NEW_2
	var_34_bool = var_33_bool == 0; // 0x314 Not
	if(var_34_bool == 0) goto Label_791; // 0x315 JumpB
	return 14; // 0x316 Return
	
Label_791:
	var_35_int = 0; // 0x317 PushV
	func_1100(var_35_int); // 0x318 NEW_2
	var_26_int = var_35_int; // 0x319 Mov
	var_27_int = 0; // 0x31b MovI
	
Label_796:
	var_48_bool = 0; // 0x31c PushV
	var_48_bool = 0; // 0x31d MovB
	var_49_int = 5; // 0x31e PushI
	var_50_bool = var_27_int < var_49_int; // 0x31f LT
	if(var_50_bool == 0) goto Label_806; // 0x320 JumpB
	var_51_bool = 0; // 0x321 PushV
	func_876(var_51_bool); // 0x322 NEW_2
	if(var_51_bool == 0) goto Label_806; // 0x324 JumpB
	var_48_bool = 1; // 0x325 MovB
	
Label_806:
	if(var_48_bool == 0) goto Label_858; // 0x326 JumpB
	var_52_int = 3; // 0x327 PushI
	irand(var_28_int, var_52_int); // 0x328 Func
	var_53_int = 0; // 0x32a PushI
	var_54_bool = var_28_int == var_53_int; // 0x32b Eq
	if(var_54_bool == 0) goto Label_830; // 0x32c JumpB
	var_55_int = var_26_int; // 0x32d Push
	if(var_55_int == 0) goto Label_829; // 0x32e JumpB
	irand(var_29_int, var_26_int); // 0x32f Func
	var_56_string = "all"; // 0x331 PushS
	var_57_string = ""; var_58_int = 0; // 0x332 PushV
	var_58_int = var_29_int; // 0x333 Mov
	func_1093(var_57_string, var_58_int); // 0x334 NEW_2
	PlayAnimation(var_56_string, var_57_string); // 0x336 Func
	WaitForAnimEnd(var_30_bool); // 0x338 Func
	var_59_bool = var_30_bool == 0; // 0x33a Not
	if(var_59_bool == 0) goto Label_829; // 0x33b JumpB
	goto Label_858; // 0x33c Jump
	
Label_858:
	ResetAAS(); // 0x35a Func
	return 14; // 0x35c Return
	
Label_829:
	goto Label_847; // 0x33d Jump
	
Label_847:
	var_60_bool = 0; // 0x34f PushV
	func_861(var_60_bool); // 0x350 NEW_2
	var_61_bool = var_60_bool == 0; // 0x352 Not
	if(var_61_bool == 0) goto Label_853; // 0x353 JumpB
	goto Label_858; // 0x354 Jump
	
Label_853:
	ResetAAS(); // 0x355 Func
	var_62_int = 1; // 0x357 PushI
	var_27_int = var_27_int + var_62_int; // 0x358 Add2
	goto Label_796; // 0x359 Jump
	
Label_830:
	var_63_int = 1; // 0x33e PushI
	var_64_bool = var_28_int == var_63_int; // 0x33f Eq
	if(var_64_bool == 0) goto Label_844; // 0x340 JumpB
	var_65_int = 4; // 0x341 PushI
	rand(var_31_float, var_65_int); // 0x342 Func
	var_66_int = 1; // 0x344 PushI
	var_67_int = var_31_float + var_66_int; // 0x345 Add
	Sleep(var_67_int, var_32_bool); // 0x346 Func
	var_68_bool = var_32_bool == 0; // 0x348 Not
	if(var_68_bool == 0) goto Label_843; // 0x349 JumpB
	goto Label_858; // 0x34a Jump
	
Label_843:
	goto Label_847; // 0x34b Jump
	
Label_844:
	var_69_int = var_27_int; // 0x34c Push
	if(var_69_int == 0) goto Label_847; // 0x34d JumpB
	goto Label_858; // 0x34e Jump
}


func_1171()
{
	var_84_string = "ook7Birdmask2"; // 0x494 PushS
	var_85_int = 1; // 0x495 PushI
	SetVariable(var_84_string, var_85_int); // 0x496 Func
	return 0; // 0x498 Return
}


func_1304(var_147_bool)
{
	var_149_int = 0; // 0x519 PushV
	func_1066(var_149_int); // 0x51a NEW_2
	var_155_int = 7; // 0x51c PushI
	var_147_bool = var_149_int == var_155_int; // 0x51d Eq2
	return 0; // 0x51e Return
}


func_1177()
{
	var_90_string = "ook7Birdmask3"; // 0x49a PushS
	var_91_int = 1; // 0x49b PushI
	SetVariable(var_90_string, var_91_int); // 0x49c Func
	return 0; // 0x49e Return
}


func_1049(var_42_bool, var_43_string, var_44_string)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x419 PushV
	FindActor(var_46_object, var_43_string); // 0x41a Func
	var_47_bool = var_46_object == 0; // 0x41c NullEq
	if(var_47_bool == 0) goto Label_1056; // 0x41d JumpB
	var_42_bool = 0; // 0x41e MovB
	return 2; // 0x41f Return
	
Label_1056:
	Trigger(var_46_object, var_44_string); // 0x420 Func
	var_42_bool = 1; // 0x422 MovB
	return 2; // 0x423 Return
}


func_1311(var_158_bool)
{
	var_160_bool = 0; // 0x520 PushV
	var_160_bool = 0; // 0x521 MovB
	var_161_int = 0; // 0x522 PushV
	func_1075(var_161_int); // 0x523 NEW_2
	var_166_int = 0; // 0x525 PushI
	var_167_bool = var_161_int >= var_166_int; // 0x526 GE
	if(var_167_bool == 0) goto Label_1327; // 0x527 JumpB
	var_168_int = 0; // 0x528 PushV
	func_1075(var_168_int); // 0x529 NEW_2
	var_169_int = 12; // 0x52b PushI
	var_170_bool = var_168_int < var_169_int; // 0x52c LT
	if(var_170_bool == 0) goto Label_1327; // 0x52d JumpB
	var_160_bool = 1; // 0x52e MovB
	
Label_1327:
	if(var_160_bool == 0) goto Label_1330; // 0x52f JumpB
	var_158_bool = 1; // 0x530 MovB
	return 0; // 0x531 Return
	
Label_1330:
	var_158_bool = 0; // 0x532 MovB
	return 0; // 0x533 Return
}


func_1183()
{
	var_231_string = ""; var_232_bool = 0; // 0x4a0 PushV
	var_231_string = "sobor@door1"; // 0x4a1 MovS
	var_232_bool = 0; // 0x4a2 MovB
	func_1032(var_231_string, var_232_bool); // 0x4a3 NEW_2
	return 0; // 0x4a5 Return
}


func_1061(var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x425 PushV
	GetGameTime(var_41_float); // 0x426 Func
	var_39_float = var_41_float; // 0x428 Mov
	return 2; // 0x429 Return
}


func_1190(var_93_bool)
{
	var_95_int = 0; var_96_string = ""; // 0x4a7 PushV
	var_96_string = "ook7Birdmask1"; // 0x4a8 MovS
	func_1027(var_95_int, var_96_string); // 0x4a9 NEW_2
	var_99_int = 0; // 0x4ab PushI
	var_100_bool = var_95_int == var_99_int; // 0x4ac Eq
	if(var_100_bool == 0) goto Label_1200; // 0x4ad JumpB
	var_93_bool = 1; // 0x4ae MovB
	return 0; // 0x4af Return
	
Label_1200:
	var_93_bool = 0; // 0x4b0 MovB
	return 0; // 0x4b1 Return
}


func_1066(var_149_int)
{
	var_150_float = 0; var_151_float = 0; // 0x42a PushV
	GetGameTime(var_151_float); // 0x42b Func
	var_152_int = 1; // 0x42d PushI
	var_153_int = 0; // 0x42e PushV
	var_154_int = 24; // 0x42f PushI
	var_153_int = var_151_float / var_151_float; // 0x430 Div2
	var_149_int = var_152_int + var_153_int; // 0x431 Add2
	return 2; // 0x432 Return
}


func_1202(var_212_bool)
{
	var_214_int = 0; var_215_string = ""; // 0x4b3 PushV
	var_215_string = "ook7Birdmask2"; // 0x4b4 MovS
	func_1027(var_214_int, var_215_string); // 0x4b5 NEW_2
	var_216_int = 0; // 0x4b7 PushI
	var_217_bool = var_214_int == var_216_int; // 0x4b8 Eq
	if(var_217_bool == 0) goto Label_1212; // 0x4b9 JumpB
	var_212_bool = 1; // 0x4ba MovB
	return 0; // 0x4bb Return
	
Label_1212:
	var_212_bool = 0; // 0x4bc MovB
	return 0; // 0x4bd Return
}


func_1075(var_161_int)
{
	var_162_float = 0; var_163_float = 0; // 0x433 PushV
	GetGameTime(var_163_float); // 0x434 Func
	var_164_int = 0; // 0x436 PushV
	var_164_int = var_163_float; // 0x437 Mov
	var_165_int = 24; // 0x438 PushI
	var_161_int = var_164_int % var_165_int; // 0x439 Mod2
	return 2; // 0x43a Return
}


func_1332(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x534 PushV
	GetMainOutdoorScene(var_31_object); // 0x535 Func
	var_33_bool = var_31_object == 0; // 0x537 NullEq
	if(var_33_bool == 0) goto Label_1343; // 0x538 JumpB
	var_34_string = "Can't find main outdoor scene"; // 0x539 PushS
	Trace(var_34_string); // 0x53a Func
	var_32_object = 0; // 0x53c SetNull
	var_28_object = var_32_object; // 0x53d Mov
	return 4; // 0x53e Return
	
Label_1343:
	GetMap(var_32_object); // 0x53f ObjFunc
	var_28_object = var_32_object; // 0x541 Mov
	return 4; // 0x542 Return
}


func_950()
{
	var_265_bool = 0; var_266_bool = 0; // 0x3b6 PushV
	var_267_bool = 1; // 0x3b7 PushB
	CameraSwitchToNormal(var_267_bool); // 0x3b8 Func
	var_268_bool = 0; // 0x3ba PushV
	func_1091(var_268_bool); // 0x3bb NEW_2
	if(var_268_bool == 0) goto Label_959; // 0x3bd JumpB
	goto Label_967; // 0x3be Jump
	
Label_967:
	return 2; // 0x3c7 Return
	
Label_959:
	var_269_string = "head"; // 0x3bf PushS
	HasAnimationTrack(var_266_bool, var_269_string); // 0x3c0 Func
	var_270_bool = var_266_bool; // 0x3c2 Push
	if(var_270_bool == 0) goto Label_967; // 0x3c3 JumpB
	var_271_string = "head"; // 0x3c4 PushS
	UnlookAsync(var_271_string); // 0x3c5 Func
}


func_1083(var_74_int)
{
	var_74_int = 515571; // 0x43b MovI
	return 0; // 0x43c Return
}


func_1085(var_73_int)
{
	var_73_int = 504029; // 0x43d MovI
	return 0; // 0x43e Return
}


func_1214(var_243_bool)
{
	var_245_int = 0; var_246_string = ""; // 0x4bf PushV
	var_246_string = "ook7Birdmask3"; // 0x4c0 MovS
	func_1027(var_245_int, var_246_string); // 0x4c1 NEW_2
	var_247_int = 0; // 0x4c3 PushI
	var_248_bool = var_245_int == var_247_int; // 0x4c4 Eq
	if(var_248_bool == 0) goto Label_1224; // 0x4c5 JumpB
	var_243_bool = 1; // 0x4c6 MovB
	return 0; // 0x4c7 Return
	
Label_1224:
	var_243_bool = 0; // 0x4c8 MovB
	return 0; // 0x4c9 Return
}


func_1087(var_75_string)
{
	var_75_string = "ui/NPC_bmask.png"; // 0x43f MovS
	return 0; // 0x440 Return
}


func_703(var_0_object, var_1_object, var_2_object, var_3_string, var_9_object, var_10_float, var_11_float)
{
	var_12_bool = 0; // 0x2c0 PushV
	func_876(var_12_bool); // 0x2c1 NEW_2
	var_15_bool = var_12_bool == 0; // 0x2c3 Not
	if(var_15_bool == 0) goto Label_710; // 0x2c4 JumpB
	return 0; // 0x2c5 Return
	
Label_710:
	var_16_string = "player"; // 0x2c6 PushS
	FindActor(var_9_object, var_16_string); // 0x2c7 Func
	var_2_object = 0; // 0x2c9 TMovB
	var_3_string = 0; // 0x2ca TMovB
	var_0_object = var_10_float; // 0x2cb TMov
	var_1_object = var_11_float; // 0x2cc TMov
	var_17_int = 10; // 0x2cd PushI
	var_18_float = 1.0; // 0x2ce PushF
	SetTimer(var_17_int, var_18_float); // 0x2cf Func
	func_782(); // 0x2d2 NEW_2
	var_70_bool = var_3_string == 0; // 0x2d4 Not
	if(var_70_bool == 0) goto Label_729; // 0x2d5 JumpB
	var_71_int = 10; // 0x2d6 PushI
	KillTimer(var_71_int); // 0x2d7 Func
	
Label_729:
	return 0; // 0x2d9 Return
}


func_1089(var_76_string)
{
	var_76_string = "ui/NPC_bmask_b.png"; // 0x441 MovS
	return 0; // 0x442 Return
}


func_1091(var_68_bool)
{
	var_68_bool = 0; // 0x443 MovB
	return 0; // 0x444 Return
}


func_1093(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x445 PushV
	var_44_string = "idle"; // 0x446 MovS
	var_45_int = var_42_int; // 0x447 Push
	if(var_45_int == 0) goto Label_1098; // 0x448 JumpB
	var_44_string = var_44_string + var_42_int; // 0x449 Add2
	
Label_1098:
	var_41_string = var_44_string; // 0x44a Mov
	return 2; // 0x44b Return
}


func_1349(var_50_object, var_51_string, var_52_float)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_object = Obj(); var_57_bool = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_object = Obj(); var_61_bool = 0; // 0x545 PushV
	GetMainOutdoorScene(var_60_object); // 0x546 Func
	var_62_bool = var_60_object == 0; // 0x548 NullEq
	if(var_62_bool == 0) goto Label_1358; // 0x549 JumpB
	var_63_string = "Can't find main outdoor scene"; // 0x54a PushS
	Trace(var_63_string); // 0x54b Func
	return 8; // 0x54d Return
	
Label_1358:
	GetLocator(var_51_string, var_61_bool, var_58_cvector, var_59_cvector); // 0x54e ObjFunc
	var_64_bool = var_61_bool == 0; // 0x550 Not
	if(var_64_bool == 0) goto Label_1368; // 0x551 JumpB
	var_65_string = "Warning: outdoor scene locator "; // 0x552 PushS
	var_66_int = var_65_string + var_51_string; // 0x553 Add
	var_67_string = " doesnt exist"; // 0x554 PushS
	var_68_int = var_66_int + var_67_string; // 0x555 Add
	Trace(var_68_int); // 0x556 Func
	
Label_1368:
	GetMap(var_50_object); // 0x558 ObjFunc
	var_69_bool = var_50_object == 0; // 0x55a NullEq
	if(var_69_bool == 0) goto Label_1376; // 0x55b JumpB
	var_70_string = "Can't find map"; // 0x55c PushS
	Trace(var_70_string); // 0x55d Func
	return 8; // 0x55f Return
	
Label_1376:
	var_71_float = GetByIndex(var_58_cvector, 0); // 0x560 PushE
	var_72_float = GetByIndex(var_58_cvector, 2); // 0x561 PushE
	SetMapParams(var_71_float, var_72_float, var_52_float); // 0x562 ObjFunc
	return 8; // 0x564 Return
}


func_968(var_128_string)
{
	var_129_bool = 0; var_130_float = 0; var_131_float = 0; var_132_bool = 0; var_133_float = 0; var_134_float = 0; // 0x3c8 PushV
	lshHasAnimation(var_132_bool, var_128_string); // 0x3c9 Func
	var_135_bool = var_132_bool; // 0x3cb Push
	if(var_135_bool == 0) goto Label_979; // 0x3cc JumpB
	lshGetAnimTimes(var_128_string, var_133_float, var_134_float); // 0x3cd Func
	var_136_bool = 0; // 0x3cf PushB
	lshPlayAnimation(var_133_float, var_134_float, var_136_bool); // 0x3d0 Func
	goto Label_983; // 0x3d2 Jump
	
Label_983:
	return 6; // 0x3d7 Return
	
Label_979:
	var_137_string = "Can't find lsh animation : "; // 0x3d3 PushS
	var_138_int = var_137_string + var_128_string; // 0x3d4 Add
	Trace(var_138_int); // 0x3d5 Func
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_86_object, var_87_object)
{
	var_0_object = var_87_object; // 0x4b TMov
	var_1_object = var_86_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_92_int = 1; // 0x4e PushI
	if(var_92_int == 0) goto Label_215; // 0x4f JumpB
	var_93_bool = 0; var_94_object = Obj(); // 0x50 PushV
	var_94_object = var_1_object; // 0x51 MovT
	func_1190(var_94_object); // 0x52 NEW_2
	if(var_93_bool == 0) goto Label_105; // 0x54 JumpB
	var_101_object = Obj(); var_102_object = Obj(); // 0x55 PushV
	var_101_object = var_1_object; // 0x56 MovT
	var_102_object = var_0_object; // 0x57 MovT
	func_1117(); // 0x58 NEW_2
	var_105_string = ""; // 0x5a PushV
	var_105_string = "Neutral"; // 0x5b MovS
	func_245(var_87_object, var_105_string); // 0x5c NEW_2
	var_122_int = 530193; // 0x5e PushI
	SetMessage(var_122_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_123_int = 526124; // 0x63 PushI
	var_124_int = 27404; // 0x64 PushI
	var_125_int = 27403; // 0x65 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x66 TObjFunc
	goto Label_215; // 0x68 Jump
	
Label_215:
	var_126_bool = 0; // 0xd7 PushV
	func_1091(var_126_bool); // 0xd8 NEW_2
	if(var_126_bool == 0) goto Label_230; // 0xda JumpB
	
Label_219:
	lshWaitForAnimEnd(); // 0xdb Func
	var_127_string = var_3_string; // 0xdd PushT
	if(var_127_string == 0) goto Label_224; // 0xde JumpB
	goto Label_229; // 0xdf Jump
	
Label_229:
	goto Label_244; // 0xe5 Jump
	
Label_244:
	return 0; // 0xf4 Return
	
Label_224:
	var_128_string = ""; // 0xe0 PushV
	var_128_string = var_2_object; // 0xe1 MovT
	func_968(var_128_string); // 0xe2 NEW_2
	goto Label_219; // 0xe4 Jump
	
Label_230:
	var_139_string = "all"; // 0xe6 PushS
	var_140_string = "idle"; // 0xe7 PushS
	PlayAnimation(var_139_string, var_140_string); // 0xe8 Func
	
Label_234:
	WaitForAnimEnd(); // 0xea Func
	var_141_string = var_3_string; // 0xec PushT
	if(var_141_string == 0) goto Label_239; // 0xed JumpB
	goto Label_244; // 0xee Jump
	
Label_239:
	var_142_string = "all"; // 0xef PushS
	var_143_string = "idle"; // 0xf0 PushS
	PlayAnimation(var_142_string, var_143_string); // 0xf1 Func
	goto Label_234; // 0xf3 Jump
	
Label_105:
	var_144_bool = 0; // 0x69 PushV
	var_144_bool = 0; // 0x6a MovB
	var_145_bool = 0; var_146_object = Obj(); // 0x6b PushV
	var_146_object = var_1_object; // 0x6c MovT
	func_1236(var_145_bool, var_146_object); // 0x6d NEW_2
	if(var_145_bool == 0) goto Label_118; // 0x6f JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x70 PushV
	var_157_object = var_1_object; // 0x71 MovT
	func_1246(var_156_bool, var_157_object); // 0x72 NEW_2
	if(var_156_bool == 0) goto Label_118; // 0x74 JumpB
	var_144_bool = 1; // 0x75 MovB
	
Label_118:
	if(var_144_bool == 0) goto Label_158; // 0x76 JumpB
	var_171_string = ""; // 0x77 PushV
	var_171_string = "Neutral"; // 0x78 MovS
	func_245(var_87_object, var_171_string); // 0x79 NEW_2
	var_172_int = 526123; // 0x7b PushI
	SetMessage(var_172_int); // 0x7c TObjFunc
	ClearReplies(); // 0x7e TObjFunc
	var_173_bool = 0; // 0x80 PushV
	var_173_bool = 0; // 0x81 MovB
	var_174_bool = 0; var_175_object = Obj(); // 0x82 PushV
	var_175_object = var_1_object; // 0x83 MovT
	func_1226(var_174_bool, var_175_object); // 0x84 NEW_2
	if(var_174_bool == 0) goto Label_141; // 0x86 JumpB
	var_212_bool = 0; var_213_object = Obj(); // 0x87 PushV
	var_213_object = var_1_object; // 0x88 MovT
	func_1202(var_213_object); // 0x89 NEW_2
	if(var_212_bool == 0) goto Label_141; // 0x8b JumpB
	var_173_bool = 1; // 0x8c MovB
	
Label_141:
	if(var_173_bool == 0) goto Label_147; // 0x8d JumpB
	var_218_int = 528266; // 0x8e PushI
	var_219_int = 29631; // 0x8f PushI
	var_220_int = 29630; // 0x90 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x91 TObjFunc
	
Label_147:
	var_221_int = 528258; // 0x93 PushI
	var_222_int = -1; // 0x94 PushI
	var_223_int = 29621; // 0x95 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x96 TObjFunc
	var_224_int = 526135; // 0x98 PushI
	var_225_int = -1; // 0x99 PushI
	var_226_int = 27414; // 0x9a PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x9b TObjFunc
	goto Label_215; // 0x9d Jump
	
Label_158:
	var_227_bool = 0; var_228_object = Obj(); // 0x9e PushV
	var_228_object = var_1_object; // 0x9f MovT
	func_1226(var_227_bool, var_228_object); // 0xa0 NEW_2
	if(var_227_bool == 0) goto Label_198; // 0xa2 JumpB
	var_229_object = Obj(); var_230_object = Obj(); // 0xa3 PushV
	var_229_object = var_1_object; // 0xa4 MovT
	var_230_object = var_0_object; // 0xa5 MovT
	func_1183(); // 0xa6 NEW_2
	var_241_string = ""; // 0xa8 PushV
	var_241_string = "Neutral"; // 0xa9 MovS
	func_245(var_87_object, var_241_string); // 0xaa NEW_2
	var_242_int = 526136; // 0xac PushI
	SetMessage(var_242_int); // 0xad TObjFunc
	ClearReplies(); // 0xaf TObjFunc
	var_243_bool = 0; var_244_object = Obj(); // 0xb1 PushV
	var_244_object = var_1_object; // 0xb2 MovT
	func_1214(var_244_object); // 0xb3 NEW_2
	if(var_243_bool == 0) goto Label_187; // 0xb5 JumpB
	var_249_int = 528269; // 0xb6 PushI
	var_250_int = 29634; // 0xb7 PushI
	var_251_int = 29633; // 0xb8 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0xb9 TObjFunc
	
Label_187:
	var_252_int = 526137; // 0xbb PushI
	var_253_int = -1; // 0xbc PushI
	var_254_int = 27416; // 0xbd PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0xbe TObjFunc
	var_255_int = 528259; // 0xc0 PushI
	var_256_int = -1; // 0xc1 PushI
	var_257_int = 29622; // 0xc2 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0xc3 TObjFunc
	goto Label_215; // 0xc5 Jump
	
Label_198:
	var_258_string = ""; // 0xc6 PushV
	var_258_string = "Neutral"; // 0xc7 MovS
	func_245(var_87_object, var_258_string); // 0xc8 NEW_2
	var_259_int = 530191; // 0xca PushI
	SetMessage(var_259_int); // 0xcb TObjFunc
	ClearReplies(); // 0xcd TObjFunc
	var_260_int = 530192; // 0xcf PushI
	var_261_int = -1; // 0xd0 PushI
	var_262_int = 31581; // 0xd1 PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0xd2 TObjFunc
	goto Label_215; // 0xd4 Jump
}


func_1226(var_174_bool, var_175_object)
{
	var_176_bool = 0; var_177_object = Obj(); // 0x4cb PushV
	var_177_object = var_175_object; // 0x4cc Mov
	func_1256(var_177_object); // 0x4cd NEW_2
	if(var_176_bool == 0) goto Label_1234; // 0x4cf JumpB
	var_174_bool = 1; // 0x4d0 MovB
	return 0; // 0x4d1 Return
	
Label_1234:
	var_174_bool = 0; // 0x4d2 MovB
	return 0; // 0x4d3 Return
}


func_1100(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x44c PushV
	var_38_int = 0; // 0x44d MovI
	
Label_1102:
	var_40_string = "all"; // 0x44e PushS
	var_41_string = ""; var_42_int = 0; // 0x44f PushV
	var_42_int = var_38_int; // 0x450 Mov
	func_1093(var_41_string, var_42_int); // 0x451 NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x453 Func
	var_46_bool = var_39_bool == 0; // 0x455 Not
	if(var_46_bool == 0) goto Label_1112; // 0x456 JumpB
	goto Label_1115; // 0x457 Jump
	
Label_1115:
	var_35_int = var_38_int; // 0x45b Mov
	return 4; // 0x45c Return
	
Label_1112:
	var_47_int = 1; // 0x458 PushI
	var_38_int = var_38_int + var_47_int; // 0x459 Add2
	goto Label_1102; // 0x45a Jump
}


func_1236(var_145_bool, var_146_object)
{
	var_147_bool = 0; var_148_object = Obj(); // 0x4d5 PushV
	var_148_object = var_146_object; // 0x4d6 Mov
	func_1304(var_148_object); // 0x4d7 NEW_2
	if(var_147_bool == 0) goto Label_1244; // 0x4d9 JumpB
	var_145_bool = 1; // 0x4da MovB
	return 0; // 0x4db Return
	
Label_1244:
	var_145_bool = 0; // 0x4dc MovB
	return 0; // 0x4dd Return
}


func_984(var_109_string, var_110_bool)
{
	var_113_bool = 0; var_114_float = 0; var_115_float = 0; var_116_bool = 0; var_117_float = 0; var_118_float = 0; // 0x3d8 PushV
	lshHasAnimation(var_116_bool, var_109_string); // 0x3d9 Func
	var_119_bool = var_116_bool; // 0x3db Push
	if(var_119_bool == 0) goto Label_994; // 0x3dc JumpB
	lshGetAnimTimes(var_109_string, var_117_float, var_118_float); // 0x3dd Func
	lshPlayAnimation(var_117_float, var_118_float, var_110_bool); // 0x3df Func
	goto Label_998; // 0x3e1 Jump
	
Label_998:
	return 6; // 0x3e6 Return
	
Label_994:
	var_120_string = "Can't find lsh animation : "; // 0x3e2 PushS
	var_121_int = var_120_string + var_109_string; // 0x3e3 Add
	Trace(var_121_int); // 0x3e4 Func
}


func_730(var_0_object, var_1_object, var_4_bool, var_13_bool)
{
	var_14_float = 0; var_15_float = 0; // 0x2da PushV
	var_16_bool = var_4_bool == 0; // 0x2db NullEq
	if(var_16_bool == 0) goto Label_735; // 0x2dc JumpB
	var_13_bool = 0; // 0x2dd MovB
	return 2; // 0x2de Return
	
Label_735:
	var_17_float = 0; var_18_object = Obj(); // 0x2df PushV
	var_18_object = var_4_bool; // 0x2e0 MovT
	func_868(var_18_object); // 0x2e1 NEW_2
	var_15_float = sqrt(var_17_float); // 0x2e3 Sqrt2
	var_25_object = var_2_object; // 0x2e4 PushT
	if(var_25_object == 0) goto Label_743; // 0x2e5 JumpB
	var_15_float = var_15_float - var_1_object; // 0x2e6 Sub2
	
Label_743:
	var_13_bool = var_15_float < var_0_object; // 0x2e7 LT2
	return 2; // 0x2e8 Return
}


func_1117()
{
	var_103_string = "ook7Birdmask1"; // 0x45e PushS
	var_104_int = 1; // 0x45f PushI
	SetVariable(var_103_string, var_104_int); // 0x460 Func
	return 0; // 0x462 Return
}


func_1246(var_156_bool, var_157_object)
{
	var_158_bool = 0; var_159_object = Obj(); // 0x4df PushV
	var_159_object = var_157_object; // 0x4e0 Mov
	func_1311(var_159_object); // 0x4e1 NEW_2
	if(var_158_bool == 0) goto Label_1254; // 0x4e3 JumpB
	var_156_bool = 1; // 0x4e4 MovB
	return 0; // 0x4e5 Return
	
Label_1254:
	var_156_bool = 0; // 0x4e6 MovB
	return 0; // 0x4e7 Return
}


func_863()
{
	StopAnimation(); // 0x35f Func
	StopGroup0(); // 0x361 Func
	return 0; // 0x363 Return
}


func_861(var_60_bool)
{
	var_60_bool = 1; // 0x35d MovB
	return 0; // 0x35e Return
}


func_1123()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x463 PushV
	var_20_int = 0; var_21_string = ""; // 0x464 PushV
	var_21_string = "k7q01CorpseMark"; // 0x465 MovS
	func_1027(var_20_int, var_21_string); // 0x466 NEW_2
	var_24_int = 0; // 0x468 PushI
	var_25_bool = var_20_int == var_24_int; // 0x469 Eq
	if(var_25_bool == 0) goto Label_1154; // 0x46a JumpB
	var_26_string = "k7q01CorpseMark"; // 0x46b PushS
	var_27_int = 1; // 0x46c PushI
	SetVariable(var_26_string, var_27_int); // 0x46d Func
	var_28_object = Obj(); // 0x46f PushV
	func_1332(var_28_object); // 0x470 NEW_2
	var_19_object = var_28_object; // 0x471 Mov
	var_35_string = "k7q01BirdmaskGotoCorpse"; // 0x473 PushS
	var_36_string = "pt_d7q02_corpse"; // 0x474 PushS
	var_37_int = 3; // 0x475 PushI
	var_38_int = 526214; // 0x476 PushI
	var_39_float = 0; // 0x477 PushV
	func_1061(var_39_float); // 0x478 NEW_2
	AddMark(var_35_string, var_36_string, var_37_int, var_38_int, var_39_float); // 0x47a ObjFunc
	var_42_bool = 0; var_43_string = ""; var_44_string = ""; // 0x47c PushV
	var_43_string = "quest_k7_01"; // 0x47d MovS
	var_44_string = "place_corpse"; // 0x47e MovS
	func_1049(var_42_bool, var_43_string, var_44_string); // 0x47f NEW_2
	var_19_object = 0; // 0x481 SetNull
	
Label_1154:
	return 2; // 0x482 Return
}


func_868(var_17_float)
{
	var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); // 0x364 PushV
	GetPosition(var_22_cvector); // 0x365 Func
	GetPosition(var_23_cvector); // 0x367 ObjFunc
	var_24_cvector = var_23_cvector - var_22_cvector; // 0x369 Sub2
	var_17_float = var_24_cvector | var_24_cvector; // 0x36a Or2
	return 6; // 0x36b Return
}


func_1382(var_77_int)
{
	var_78_int = 0; var_79_int = 0; // 0x566 PushV
	var_80_string = "branch"; // 0x567 PushS
	GetVariable(var_80_string, var_79_int); // 0x568 Func
	var_81_int = 0; // 0x56a PushI
	var_82_bool = var_79_int == var_81_int; // 0x56b Eq
	if(var_82_bool == 0) goto Label_1392; // 0x56c JumpB
	var_77_int = 1; // 0x56d MovI
	return 2; // 0x56e Return
	
Label_1392:
	var_83_int = 1; // 0x570 PushI
	var_84_bool = var_79_int == var_83_int; // 0x571 Eq
	if(var_84_bool == 0) goto Label_1397; // 0x572 JumpB
	var_77_int = 2; // 0x573 MovI
	return 2; // 0x574 Return
	
Label_1397:
	var_77_int = 3; // 0x575 MovI
	return 2; // 0x576 Return
}


func_999(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x3e7 PushV
	GetEyesHeight(var_30_float); // 0x3e8 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x3ea MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x3eb PushE
	var_32_float = var_30_float; // 0x3ec Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x3ed PopE
	var_33_string = "head"; // 0x3ee PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x3ef Func
	return 4; // 0x3f1 Return
}


func_1256(var_176_bool)
{
	var_178_int = 0; var_179_int = 0; var_180_int = 0; var_181_bool = 0; var_182_bool = 0; var_183_int = 0; var_184_object = Obj(); var_185_int = 0; var_186_bool = 0; var_187_bool = 0; var_188_int = 0; var_189_int = 0; var_190_int = 0; var_191_bool = 0; var_192_bool = 0; var_193_int = 0; var_194_object = Obj(); var_195_int = 0; var_196_bool = 0; var_197_bool = 0; // 0x4e8 PushV
	var_198_int = 1; // 0x4e9 PushI
	GetItemCount(var_188_int, var_198_int); // 0x4ea ObjFunc
	var_199_string = "bird_mask"; // 0x4ec PushS
	GetInvItemByName(var_189_int, var_199_string); // 0x4ed Func
	var_200_string = "bird_balahon"; // 0x4ef PushS
	GetInvItemByName(var_190_int, var_200_string); // 0x4f0 Func
	var_191_bool = 0; // 0x4f2 MovB
	var_192_bool = 0; // 0x4f3 MovB
	var_193_int = 0; // 0x4f4 MovI
	
Label_1269:
	var_201_bool = var_193_int < var_188_int; // 0x4f5 LT
	if(var_201_bool == 0) goto Label_1297; // 0x4f6 JumpB
	var_202_int = 1; // 0x4f7 PushI
	GetItem(var_194_object, var_193_int, var_202_int); // 0x4f8 ObjFunc
	GetItemID(var_195_int); // 0x4fa ObjFunc
	var_203_bool = var_195_int == var_189_int; // 0x4fc Eq
	if(var_203_bool == 0) goto Label_1285; // 0x4fd JumpB
	var_204_int = 1; // 0x4fe PushI
	IsItemSelected(var_196_bool, var_193_int, var_204_int); // 0x4ff ObjFunc
	var_205_bool = var_196_bool; // 0x501 Push
	if(var_205_bool == 0) goto Label_1284; // 0x502 JumpB
	var_191_bool = 1; // 0x503 MovB
	
Label_1284:
	goto Label_1293; // 0x504 Jump
	
Label_1293:
	var_194_object = 0; // 0x50d SetNull
	var_206_int = 1; // 0x50e PushI
	var_193_int = var_193_int + var_206_int; // 0x50f Add2
	goto Label_1269; // 0x510 Jump
	
Label_1285:
	var_207_bool = var_195_int == var_190_int; // 0x505 Eq
	if(var_207_bool == 0) goto Label_1293; // 0x506 JumpB
	var_208_int = 1; // 0x507 PushI
	IsItemSelected(var_197_bool, var_193_int, var_208_int); // 0x508 ObjFunc
	var_209_bool = var_197_bool; // 0x50a Push
	if(var_209_bool == 0) goto Label_1293; // 0x50b JumpB
	var_192_bool = 1; // 0x50c MovB
	
Label_1297:
	var_176_bool = 0; // 0x511 MovB
	var_210_bool = var_191_bool; // 0x512 Push
	if(var_210_bool == 0) goto Label_1303; // 0x513 JumpB
	var_211_bool = var_192_bool; // 0x514 Push
	if(var_211_bool == 0) goto Label_1303; // 0x515 JumpB
	var_176_bool = 1; // 0x516 MovB
	
Label_1303:
	return 20; // 0x517 Return
}


func_876(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x36c PushV
	IsLoaded(var_14_bool); // 0x36d Func
	var_12_bool = var_14_bool; // 0x36f Mov
	return 2; // 0x370 Return
}


func_881(var_25_bool, var_27_float)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; var_36_bool = 0; var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_bool = 0; // 0x371 PushV
	GetPosition(var_38_cvector); // 0x372 ObjFunc
	GetEyesHeight(var_37_float); // 0x374 ObjFunc
	var_46_float = GetByIndex(var_38_cvector, 1); // 0x376 PushE
	var_46_float = var_46_float + var_37_float; // 0x377 Add2
	SetByIndex(var_38_cvector, 1) = var_46_float; // 0x378 PopE
	GetPosition(var_39_cvector); // 0x379 Func
	GetEyesHeight(var_37_float); // 0x37b Func
	var_47_float = GetByIndex(var_39_cvector, 1); // 0x37d PushE
	var_47_float = var_47_float + var_37_float; // 0x37e Add2
	SetByIndex(var_39_cvector, 1) = var_47_float; // 0x37f PopE
	var_40_cvector = var_38_cvector - var_39_cvector; // 0x380 Sub2
	var_48_float = GetByIndex(var_40_cvector, 1); // 0x381 PushE
	var_48_float = 0; // 0x382 MovI
	SetByIndex(var_40_cvector, 1) = var_48_float; // 0x383 PopE
	var_49_int = var_40_cvector | var_40_cvector; // 0x384 Or
	var_50_float = sqrt(var_49_int); // 0x385 Sqrt
	var_40_cvector = var_40_cvector / var_40_cvector; // 0x386 Div2
	var_41_cvector = -var_40_cvector; // 0x387 Neg2
	var_51_float = var_40_cvector * var_27_float; // 0x388 Mult
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); // 0x389 PushV
	var_54_cvector = CVector(0.0, 1.0, 0.0); // 0x38a PushVec
	var_53_cvector = var_41_cvector ^ var_54_cvector; // 0x38b Xor2
	func_1017(var_52_cvector, var_53_cvector); // 0x38c NEW_2
	var_60_int = 25; // 0x38e PushI
	var_61_float = var_52_cvector * var_60_int; // 0x38f Mult
	var_62_int = var_51_float + var_61_float; // 0x390 Add
	var_63_cvector = CVector(0.0, 10.0, 0.0); // 0x391 PushVec
	var_42_cvector = var_62_int - var_63_cvector; // 0x392 Sub2
	var_43_cvector = var_39_cvector + var_42_cvector; // 0x393 Add2
	IsOverrideActive(var_44_bool); // 0x394 Func
	var_64_bool = var_44_bool; // 0x396 Push
	if(var_64_bool == 0) goto Label_922; // 0x397 JumpB
	var_25_bool = 0; // 0x398 MovB
	return 18; // 0x399 Return
	
Label_922:
	StopWorld(); // 0x39a Func
	var_65_bool = 1; // 0x39c PushB
	CameraTransit(var_43_cvector, var_41_cvector, var_65_bool); // 0x39d Func
	var_66_float = GetByIndex(var_42_cvector, 0); // 0x39f PushE
	var_67_float = GetByIndex(var_42_cvector, 2); // 0x3a0 PushE
	Rotate(var_66_float, var_67_float); // 0x3a1 Func
	var_68_bool = 0; // 0x3a3 PushV
	func_1091(var_68_bool); // 0x3a4 NEW_2
	if(var_68_bool == 0) goto Label_936; // 0x3a6 JumpB
	goto Label_944; // 0x3a7 Jump
	
Label_944:
	CameraWaitForPlayFinish(); // 0x3b0 Func
	ResumeWorld(); // 0x3b2 Func
	var_25_bool = 1; // 0x3b4 MovB
	return 18; // 0x3b5 Return
	
Label_936:
	var_69_string = "head"; // 0x3a8 PushS
	HasAnimationTrack(var_45_bool, var_69_string); // 0x3a9 Func
	var_70_bool = var_45_bool; // 0x3ab Push
	if(var_70_bool == 0) goto Label_944; // 0x3ac JumpB
	var_71_string = "head"; // 0x3ad PushS
	LookAsyncCamera(var_71_string); // 0x3ae Func
}


func_1010()
{
	var_13_bool = 0; // 0x3f2 PushV
	func_1091(var_13_bool); // 0x3f3 NEW_2
	if(var_13_bool == 0) goto Label_1016; // 0x3f5 JumpB
	lshStopSpeech(); // 0x3f6 Func
	
Label_1016:
	return 0; // 0x3f8 Return
}


func_245(var_2_object, var_105_string)
{
	var_106_bool = 0; // 0xf6 PushV
	func_1091(var_106_bool); // 0xf7 NEW_2
	var_107_bool = var_106_bool == 0; // 0xf9 Not
	if(var_107_bool == 0) goto Label_252; // 0xfa JumpB
	return 0; // 0xfb Return
	
Label_252:
	var_108_bool = var_105_string == var_2_object; // 0xfc Eq
	if(var_108_bool == 0) goto Label_255; // 0xfd JumpB
	return 0; // 0xfe Return
	
Label_255:
	var_109_string = ""; var_110_bool = 0; // 0xff PushV
	var_109_string = var_105_string; // 0x100 Mov
	var_111_string = ""; // 0x101 PushS
	var_112_bool = var_105_string == var_111_string; // 0x102 Eq
	if(var_112_bool == 0) goto Label_262; // 0x103 JumpB
	var_110_bool = 0; // 0x104 MovB
	goto Label_263; // 0x105 Jump
	
Label_263:
	func_984(var_109_string, var_110_bool); // 0x107 NEW_2
	var_2_object = var_105_string; // 0x109 TMov
	return 0; // 0x10a Return
	
Label_262:
	var_110_bool = 1; // 0x106 MovB
}


func_1017(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x3f9 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x3fa Or
	var_56_float = sqrt(var_57_int); // 0x3fb Sqrt2
	var_58_float = 0.0; // 0x3fc PushF
	var_59_bool = var_56_float < var_58_float; // 0x3fd LT
	if(var_59_bool == 0) goto Label_1025; // 0x3fe JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x3ff MovV
	return 2; // 0x400 Return
	
Label_1025:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x401 Div2
	return 2; // 0x402 Return
}


