task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_int, var_8_int, var_9_bool, var_10_bool, var_11_object)
{
	var_12_int = 1; // 0x10c PushI
	if(var_12_int == 0) goto Label_681; // 0x10d JumpB
	func_1008(); // 0x10f NEW_2
	var_14_int = 27413; // 0x111 PushI
	var_15_bool = var_11_object == var_14_int; // 0x112 Eq
	if(var_15_bool == 0) goto Label_286; // 0x113 JumpB
	var_16_object = Obj(); var_17_object = Obj(); // 0x114 PushV
	var_16_object = var_1_object; // 0x115 MovT
	var_17_object = var_0_object; // 0x116 MovT
	func_1121(); // 0x117 NEW_2
	var_48_object = Obj(); var_49_object = Obj(); // 0x119 PushV
	var_48_object = var_1_object; // 0x11a MovT
	var_49_object = var_0_object; // 0x11b MovT
	func_1153(); // 0x11c NEW_2
	
Label_286:
	var_74_int = 43962; // 0x11e PushI
	var_75_bool = var_11_object == var_74_int; // 0x11f Eq
	if(var_75_bool == 0) goto Label_299; // 0x120 JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0x121 PushV
	var_76_object = var_1_object; // 0x122 MovT
	var_77_object = var_0_object; // 0x123 MovT
	func_1121(); // 0x124 NEW_2
	var_78_object = Obj(); var_79_object = Obj(); // 0x126 PushV
	var_78_object = var_1_object; // 0x127 MovT
	var_79_object = var_0_object; // 0x128 MovT
	func_1153(); // 0x129 NEW_2
	
Label_299:
	var_80_int = 29630; // 0x12b PushI
	var_81_bool = var_11_object == var_80_int; // 0x12c Eq
	if(var_81_bool == 0) goto Label_307; // 0x12d JumpB
	var_82_object = Obj(); var_83_object = Obj(); // 0x12e PushV
	var_82_object = var_1_object; // 0x12f MovT
	var_83_object = var_0_object; // 0x130 MovT
	func_1169(); // 0x131 NEW_2
	
Label_307:
	var_86_int = 29633; // 0x133 PushI
	var_87_bool = var_11_object == var_86_int; // 0x134 Eq
	if(var_87_bool == 0) goto Label_315; // 0x135 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x136 PushV
	var_88_object = var_1_object; // 0x137 MovT
	var_89_object = var_0_object; // 0x138 MovT
	func_1175(); // 0x139 NEW_2
	
Label_315:
	var_92_int = 31582; // 0x13b PushI
	var_93_bool = var_10_bool == var_92_int; // 0x13c Eq
	if(var_93_bool == 0) goto Label_451; // 0x13d JumpB
	var_94_bool = 0; var_95_object = Obj(); // 0x13e PushV
	var_95_object = var_1_object; // 0x13f MovT
	func_1188(var_95_object); // 0x140 NEW_2
	if(var_94_bool == 0) goto Label_343; // 0x142 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x143 PushV
	var_100_object = var_1_object; // 0x144 MovT
	var_101_object = var_0_object; // 0x145 MovT
	func_1115(); // 0x146 NEW_2
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
	func_1234(var_126_bool, var_127_object); // 0x15b NEW_2
	if(var_126_bool == 0) goto Label_356; // 0x15d JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x15e PushV
	var_138_object = var_1_object; // 0x15f MovT
	func_1244(var_137_bool, var_138_object); // 0x160 NEW_2
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
	func_1224(var_155_bool, var_156_object); // 0x172 NEW_2
	if(var_155_bool == 0) goto Label_379; // 0x174 JumpB
	var_193_bool = 0; var_194_object = Obj(); // 0x175 PushV
	var_194_object = var_1_object; // 0x176 MovT
	func_1200(var_194_object); // 0x177 NEW_2
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
	func_1224(var_208_bool, var_209_object); // 0x18e NEW_2
	if(var_208_bool == 0) goto Label_436; // 0x190 JumpB
	var_210_object = Obj(); var_211_object = Obj(); // 0x191 PushV
	var_210_object = var_1_object; // 0x192 MovT
	var_211_object = var_0_object; // 0x193 MovT
	func_1181(); // 0x194 NEW_2
	var_222_string = ""; // 0x196 PushV
	var_222_string = "Neutral"; // 0x197 MovS
	func_245(var_11_object, var_222_string); // 0x198 NEW_2
	var_223_int = 526136; // 0x19a PushI
	SetMessage(var_223_int); // 0x19b TObjFunc
	ClearReplies(); // 0x19d TObjFunc
	var_224_bool = 0; var_225_object = Obj(); // 0x19f PushV
	var_225_object = var_1_object; // 0x1a0 MovT
	func_1212(var_225_object); // 0x1a1 NEW_2
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
	func_1089(var_333_bool); // 0x29f NEW_2
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
	func_997(var_27_object); // 0x2f5 NEW_2
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


func_1153()
{
	var_50_object = Obj(); var_51_string = ""; var_52_float = 0; // 0x482 PushV
	var_53_object = Obj(); // 0x483 PushV
	func_1330(var_53_object); // 0x484 NEW_2
	var_50_object = var_53_object; // 0x485 Mov
	var_51_string = "pt_d7q02_corpse"; // 0x487 MovS
	var_52_float = 2; // 0x488 MovI
	func_1347(var_50_object, var_51_string, var_52_float); // 0x489 NEW_2
	var_73_object = Obj(); // 0x48b PushV
	func_1330(var_73_object); // 0x48c NEW_2
	ShowMap(var_73_object); // 0x48e ObjFunc
	return 0; // 0x490 Return
}


func_0(var_0_object, var_14_int, var_15_object)
{
	var_17_object = Obj(); var_18_bool = 0; var_19_int = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_int = 0; var_24_bool = 0; // 0x0 PushV
	var_0_object = var_15_object; // 0x1 TMov
	var_25_bool = 0; var_26_object = Obj(); var_27_float = 0; // 0x2 PushV
	var_26_object = var_15_object; // 0x3 Mov
	var_27_float = 130.0; // 0x4 MovF
	func_881(var_26_object, var_27_float); // 0x5 NEW_2
	var_71_bool = var_25_bool == 0; // 0x7 Not
	if(var_71_bool == 0) goto Label_11; // 0x8 JumpB
	var_14_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_21_object); // 0xb Func
	var_72_int = 0; // 0xd PushV
	func_1083(var_72_int); // 0xe NEW_2
	SetNPCName(var_72_int); // 0x10 ObjFunc
	var_73_int = 0; // 0x12 PushV
	func_1081(var_73_int); // 0x13 NEW_2
	SetNPCDescription(var_73_int); // 0x15 ObjFunc
	var_74_string = ""; // 0x17 PushV
	func_1085(var_74_string); // 0x18 NEW_2
	SetPhoto(var_74_string); // 0x1a ObjFunc
	var_75_string = ""; // 0x1c PushV
	func_1087(var_75_string); // 0x1d NEW_2
	SetPhoto2(var_75_string); // 0x1f ObjFunc
	var_76_int = 0; // 0x21 PushV
	func_1380(var_76_int); // 0x22 NEW_2
	SetPlayerName(var_76_int); // 0x24 ObjFunc
	var_23_int = -1; // 0x26 MovI
	IsOverrideActive(var_22_bool); // 0x27 Func
	var_84_bool = var_22_bool; // 0x29 Push
	if(var_84_bool == 0) goto Label_45; // 0x2a JumpB
	var_14_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_21_object); // 0x2d Func
	var_85_object = Obj(); var_86_object = Obj(); // 0x2f PushV
	var_85_object = var_15_object; // 0x30 Mov
	var_86_object = var_21_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_87_object, var_88_object, var_89_string, var_90_bool, var_85_object, var_86_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_24_bool); // 0x36 ObjFunc
	
Label_56:
	var_262_bool = var_24_bool == 0; // 0x38 Not
	if(var_262_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_24_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_263_object = Obj(); // 0x3f PushV
	var_263_object = var_15_object; // 0x40 Mov
	func_949(); // 0x41 NEW_2
	StopDialog(var_21_object); // 0x43 Func
	GetReturnValue(var_23_int); // 0x45 ObjFunc
	var_14_int = var_23_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_1025(var_94_int, var_95_string)
{
	var_96_int = 0; var_97_int = 0; // 0x401 PushV
	GetVariable(var_95_string, var_97_int); // 0x402 Func
	var_94_int = var_97_int; // 0x404 Mov
	return 2; // 0x405 Return
}


func_1030(var_230_string, var_231_bool)
{
	var_232_object = Obj(); var_233_object = Obj(); // 0x406 PushV
	FindActor(var_233_object, var_230_string); // 0x407 Func
	var_234_bool = var_233_object == 0; // 0x409 Not
	if(var_234_bool == 0) goto Label_1042; // 0x40a JumpB
	var_235_string = "Door "; // 0x40b PushS
	var_236_int = var_235_string + var_230_string; // 0x40c Add
	var_237_string = " not found"; // 0x40d PushS
	var_238_int = var_236_int + var_237_string; // 0x40e Add
	Trace(var_238_int); // 0x40f Func
	goto Label_1045; // 0x411 Jump
	
Label_1045:
	return 2; // 0x415 Return
	
Label_1042:
	var_239_string = "locked"; // 0x412 PushS
	SetProperty(var_239_string, var_231_bool); // 0x413 ObjFunc
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
	func_1098(var_35_int); // 0x318 NEW_2
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
	func_1091(var_57_string, var_58_int); // 0x334 NEW_2
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


func_1169()
{
	var_84_string = "ook7Birdmask2"; // 0x492 PushS
	var_85_int = 1; // 0x493 PushI
	SetVariable(var_84_string, var_85_int); // 0x494 Func
	return 0; // 0x496 Return
}


func_1302(var_146_bool)
{
	var_148_int = 0; // 0x517 PushV
	func_1064(var_148_int); // 0x518 NEW_2
	var_154_int = 7; // 0x51a PushI
	var_146_bool = var_148_int == var_154_int; // 0x51b Eq2
	return 0; // 0x51c Return
}


func_1047(var_42_bool, var_43_string, var_44_string)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x417 PushV
	FindActor(var_46_object, var_43_string); // 0x418 Func
	var_47_bool = var_46_object == 0; // 0x41a NullEq
	if(var_47_bool == 0) goto Label_1054; // 0x41b JumpB
	var_42_bool = 0; // 0x41c MovB
	return 2; // 0x41d Return
	
Label_1054:
	Trigger(var_46_object, var_44_string); // 0x41e Func
	var_42_bool = 1; // 0x420 MovB
	return 2; // 0x421 Return
}


func_1175()
{
	var_90_string = "ook7Birdmask3"; // 0x498 PushS
	var_91_int = 1; // 0x499 PushI
	SetVariable(var_90_string, var_91_int); // 0x49a Func
	return 0; // 0x49c Return
}


func_1309(var_157_bool)
{
	var_159_bool = 0; // 0x51e PushV
	var_159_bool = 0; // 0x51f MovB
	var_160_int = 0; // 0x520 PushV
	func_1073(var_160_int); // 0x521 NEW_2
	var_165_int = 0; // 0x523 PushI
	var_166_bool = var_160_int >= var_165_int; // 0x524 GE
	if(var_166_bool == 0) goto Label_1325; // 0x525 JumpB
	var_167_int = 0; // 0x526 PushV
	func_1073(var_167_int); // 0x527 NEW_2
	var_168_int = 12; // 0x529 PushI
	var_169_bool = var_167_int < var_168_int; // 0x52a LT
	if(var_169_bool == 0) goto Label_1325; // 0x52b JumpB
	var_159_bool = 1; // 0x52c MovB
	
Label_1325:
	if(var_159_bool == 0) goto Label_1328; // 0x52d JumpB
	var_157_bool = 1; // 0x52e MovB
	return 0; // 0x52f Return
	
Label_1328:
	var_157_bool = 0; // 0x530 MovB
	return 0; // 0x531 Return
}


func_1181()
{
	var_230_string = ""; var_231_bool = 0; // 0x49e PushV
	var_230_string = "sobor@door1"; // 0x49f MovS
	var_231_bool = 0; // 0x4a0 MovB
	func_1030(var_230_string, var_231_bool); // 0x4a1 NEW_2
	return 0; // 0x4a3 Return
}


func_1059(var_39_float)
{
	var_40_float = 0; var_41_float = 0; // 0x423 PushV
	GetGameTime(var_41_float); // 0x424 Func
	var_39_float = var_41_float; // 0x426 Mov
	return 2; // 0x427 Return
}


func_1188(var_92_bool)
{
	var_94_int = 0; var_95_string = ""; // 0x4a5 PushV
	var_95_string = "ook7Birdmask1"; // 0x4a6 MovS
	func_1025(var_94_int, var_95_string); // 0x4a7 NEW_2
	var_98_int = 0; // 0x4a9 PushI
	var_99_bool = var_94_int == var_98_int; // 0x4aa Eq
	if(var_99_bool == 0) goto Label_1198; // 0x4ab JumpB
	var_92_bool = 1; // 0x4ac MovB
	return 0; // 0x4ad Return
	
Label_1198:
	var_92_bool = 0; // 0x4ae MovB
	return 0; // 0x4af Return
}


func_1064(var_148_int)
{
	var_149_float = 0; var_150_float = 0; // 0x428 PushV
	GetGameTime(var_150_float); // 0x429 Func
	var_151_int = 1; // 0x42b PushI
	var_152_int = 0; // 0x42c PushV
	var_153_int = 24; // 0x42d PushI
	var_152_int = var_150_float / var_150_float; // 0x42e Div2
	var_148_int = var_151_int + var_152_int; // 0x42f Add2
	return 2; // 0x430 Return
}


func_1200(var_211_bool)
{
	var_213_int = 0; var_214_string = ""; // 0x4b1 PushV
	var_214_string = "ook7Birdmask2"; // 0x4b2 MovS
	func_1025(var_213_int, var_214_string); // 0x4b3 NEW_2
	var_215_int = 0; // 0x4b5 PushI
	var_216_bool = var_213_int == var_215_int; // 0x4b6 Eq
	if(var_216_bool == 0) goto Label_1210; // 0x4b7 JumpB
	var_211_bool = 1; // 0x4b8 MovB
	return 0; // 0x4b9 Return
	
Label_1210:
	var_211_bool = 0; // 0x4ba MovB
	return 0; // 0x4bb Return
}


func_1073(var_160_int)
{
	var_161_float = 0; var_162_float = 0; // 0x431 PushV
	GetGameTime(var_162_float); // 0x432 Func
	var_163_int = 0; // 0x434 PushV
	var_163_int = var_162_float; // 0x435 Mov
	var_164_int = 24; // 0x436 PushI
	var_160_int = var_163_int % var_164_int; // 0x437 Mod2
	return 2; // 0x438 Return
}


func_1330(var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); // 0x532 PushV
	GetMainOutdoorScene(var_31_object); // 0x533 Func
	var_33_bool = var_31_object == 0; // 0x535 NullEq
	if(var_33_bool == 0) goto Label_1341; // 0x536 JumpB
	var_34_string = "Can't find main outdoor scene"; // 0x537 PushS
	Trace(var_34_string); // 0x538 Func
	var_32_object = 0; // 0x53a SetNull
	var_28_object = var_32_object; // 0x53b Mov
	return 4; // 0x53c Return
	
Label_1341:
	GetMap(var_32_object); // 0x53d ObjFunc
	var_28_object = var_32_object; // 0x53f Mov
	return 4; // 0x540 Return
}


func_949()
{
	var_264_bool = 0; var_265_bool = 0; // 0x3b5 PushV
	CameraSwitchToNormal(); // 0x3b6 Func
	var_266_bool = 0; // 0x3b8 PushV
	func_1089(var_266_bool); // 0x3b9 NEW_2
	if(var_266_bool == 0) goto Label_957; // 0x3bb JumpB
	goto Label_965; // 0x3bc Jump
	
Label_965:
	return 2; // 0x3c5 Return
	
Label_957:
	var_267_string = "head"; // 0x3bd PushS
	HasAnimationTrack(var_265_bool, var_267_string); // 0x3be Func
	var_268_bool = var_265_bool; // 0x3c0 Push
	if(var_268_bool == 0) goto Label_965; // 0x3c1 JumpB
	var_269_string = "head"; // 0x3c2 PushS
	UnlookAsync(var_269_string); // 0x3c3 Func
}


func_1081(var_73_int)
{
	var_73_int = 515571; // 0x439 MovI
	return 0; // 0x43a Return
}


func_1083(var_72_int)
{
	var_72_int = 504029; // 0x43b MovI
	return 0; // 0x43c Return
}


func_1212(var_242_bool)
{
	var_244_int = 0; var_245_string = ""; // 0x4bd PushV
	var_245_string = "ook7Birdmask3"; // 0x4be MovS
	func_1025(var_244_int, var_245_string); // 0x4bf NEW_2
	var_246_int = 0; // 0x4c1 PushI
	var_247_bool = var_244_int == var_246_int; // 0x4c2 Eq
	if(var_247_bool == 0) goto Label_1222; // 0x4c3 JumpB
	var_242_bool = 1; // 0x4c4 MovB
	return 0; // 0x4c5 Return
	
Label_1222:
	var_242_bool = 0; // 0x4c6 MovB
	return 0; // 0x4c7 Return
}


func_1085(var_74_string)
{
	var_74_string = "ui/NPC_bmask.png"; // 0x43d MovS
	return 0; // 0x43e Return
}


func_1087(var_75_string)
{
	var_75_string = "ui/NPC_bmask_b.png"; // 0x43f MovS
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


func_1089(var_67_bool)
{
	var_67_bool = 0; // 0x441 MovB
	return 0; // 0x442 Return
}


func_1091(var_41_string, var_42_int)
{
	var_43_string = ""; var_44_string = ""; // 0x443 PushV
	var_44_string = "idle"; // 0x444 MovS
	var_45_int = var_42_int; // 0x445 Push
	if(var_45_int == 0) goto Label_1096; // 0x446 JumpB
	var_44_string = var_44_string + var_42_int; // 0x447 Add2
	
Label_1096:
	var_41_string = var_44_string; // 0x448 Mov
	return 2; // 0x449 Return
}


func_1347(var_50_object, var_51_string, var_52_float)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_object = Obj(); var_57_bool = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_object = Obj(); var_61_bool = 0; // 0x543 PushV
	GetMainOutdoorScene(var_60_object); // 0x544 Func
	var_62_bool = var_60_object == 0; // 0x546 NullEq
	if(var_62_bool == 0) goto Label_1356; // 0x547 JumpB
	var_63_string = "Can't find main outdoor scene"; // 0x548 PushS
	Trace(var_63_string); // 0x549 Func
	return 8; // 0x54b Return
	
Label_1356:
	GetLocator(var_51_string, var_61_bool, var_58_cvector, var_59_cvector); // 0x54c ObjFunc
	var_64_bool = var_61_bool == 0; // 0x54e Not
	if(var_64_bool == 0) goto Label_1366; // 0x54f JumpB
	var_65_string = "Warning: outdoor scene locator "; // 0x550 PushS
	var_66_int = var_65_string + var_51_string; // 0x551 Add
	var_67_string = " doesnt exist"; // 0x552 PushS
	var_68_int = var_66_int + var_67_string; // 0x553 Add
	Trace(var_68_int); // 0x554 Func
	
Label_1366:
	GetMap(var_50_object); // 0x556 ObjFunc
	var_69_bool = var_50_object == 0; // 0x558 NullEq
	if(var_69_bool == 0) goto Label_1374; // 0x559 JumpB
	var_70_string = "Can't find map"; // 0x55a PushS
	Trace(var_70_string); // 0x55b Func
	return 8; // 0x55d Return
	
Label_1374:
	var_71_float = GetByIndex(var_58_cvector, 0); // 0x55e PushE
	var_72_float = GetByIndex(var_58_cvector, 2); // 0x55f PushE
	SetMapParams(var_71_float, var_72_float, var_52_float); // 0x560 ObjFunc
	return 8; // 0x562 Return
}


func_966(var_127_string)
{
	var_128_bool = 0; var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_float = 0; var_133_float = 0; // 0x3c6 PushV
	lshHasAnimation(var_131_bool, var_127_string); // 0x3c7 Func
	var_134_bool = var_131_bool; // 0x3c9 Push
	if(var_134_bool == 0) goto Label_977; // 0x3ca JumpB
	lshGetAnimTimes(var_127_string, var_132_float, var_133_float); // 0x3cb Func
	var_135_bool = 0; // 0x3cd PushB
	lshPlayAnimation(var_132_float, var_133_float, var_135_bool); // 0x3ce Func
	goto Label_981; // 0x3d0 Jump
	
Label_981:
	return 6; // 0x3d5 Return
	
Label_977:
	var_136_string = "Can't find lsh animation : "; // 0x3d1 PushS
	var_137_int = var_136_string + var_127_string; // 0x3d2 Add
	Trace(var_137_int); // 0x3d3 Func
}


func_1224(var_173_bool, var_174_object)
{
	var_175_bool = 0; var_176_object = Obj(); // 0x4c9 PushV
	var_176_object = var_174_object; // 0x4ca Mov
	func_1254(var_176_object); // 0x4cb NEW_2
	if(var_175_bool == 0) goto Label_1232; // 0x4cd JumpB
	var_173_bool = 1; // 0x4ce MovB
	return 0; // 0x4cf Return
	
Label_1232:
	var_173_bool = 0; // 0x4d0 MovB
	return 0; // 0x4d1 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_85_object, var_86_object)
{
	var_0_object = var_86_object; // 0x4b TMov
	var_1_object = var_85_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_91_int = 1; // 0x4e PushI
	if(var_91_int == 0) goto Label_215; // 0x4f JumpB
	var_92_bool = 0; var_93_object = Obj(); // 0x50 PushV
	var_93_object = var_1_object; // 0x51 MovT
	func_1188(var_93_object); // 0x52 NEW_2
	if(var_92_bool == 0) goto Label_105; // 0x54 JumpB
	var_100_object = Obj(); var_101_object = Obj(); // 0x55 PushV
	var_100_object = var_1_object; // 0x56 MovT
	var_101_object = var_0_object; // 0x57 MovT
	func_1115(); // 0x58 NEW_2
	var_104_string = ""; // 0x5a PushV
	var_104_string = "Neutral"; // 0x5b MovS
	func_245(var_86_object, var_104_string); // 0x5c NEW_2
	var_121_int = 530193; // 0x5e PushI
	SetMessage(var_121_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_122_int = 526124; // 0x63 PushI
	var_123_int = 27404; // 0x64 PushI
	var_124_int = 27403; // 0x65 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x66 TObjFunc
	goto Label_215; // 0x68 Jump
	
Label_215:
	var_125_bool = 0; // 0xd7 PushV
	func_1089(var_125_bool); // 0xd8 NEW_2
	if(var_125_bool == 0) goto Label_230; // 0xda JumpB
	
Label_219:
	lshWaitForAnimEnd(); // 0xdb Func
	var_126_string = var_3_string; // 0xdd PushT
	if(var_126_string == 0) goto Label_224; // 0xde JumpB
	goto Label_229; // 0xdf Jump
	
Label_229:
	goto Label_244; // 0xe5 Jump
	
Label_244:
	return 0; // 0xf4 Return
	
Label_224:
	var_127_string = ""; // 0xe0 PushV
	var_127_string = var_2_object; // 0xe1 MovT
	func_966(var_127_string); // 0xe2 NEW_2
	goto Label_219; // 0xe4 Jump
	
Label_230:
	var_138_string = "all"; // 0xe6 PushS
	var_139_string = "idle"; // 0xe7 PushS
	PlayAnimation(var_138_string, var_139_string); // 0xe8 Func
	
Label_234:
	WaitForAnimEnd(); // 0xea Func
	var_140_string = var_3_string; // 0xec PushT
	if(var_140_string == 0) goto Label_239; // 0xed JumpB
	goto Label_244; // 0xee Jump
	
Label_239:
	var_141_string = "all"; // 0xef PushS
	var_142_string = "idle"; // 0xf0 PushS
	PlayAnimation(var_141_string, var_142_string); // 0xf1 Func
	goto Label_234; // 0xf3 Jump
	
Label_105:
	var_143_bool = 0; // 0x69 PushV
	var_143_bool = 0; // 0x6a MovB
	var_144_bool = 0; var_145_object = Obj(); // 0x6b PushV
	var_145_object = var_1_object; // 0x6c MovT
	func_1234(var_144_bool, var_145_object); // 0x6d NEW_2
	if(var_144_bool == 0) goto Label_118; // 0x6f JumpB
	var_155_bool = 0; var_156_object = Obj(); // 0x70 PushV
	var_156_object = var_1_object; // 0x71 MovT
	func_1244(var_155_bool, var_156_object); // 0x72 NEW_2
	if(var_155_bool == 0) goto Label_118; // 0x74 JumpB
	var_143_bool = 1; // 0x75 MovB
	
Label_118:
	if(var_143_bool == 0) goto Label_158; // 0x76 JumpB
	var_170_string = ""; // 0x77 PushV
	var_170_string = "Neutral"; // 0x78 MovS
	func_245(var_86_object, var_170_string); // 0x79 NEW_2
	var_171_int = 526123; // 0x7b PushI
	SetMessage(var_171_int); // 0x7c TObjFunc
	ClearReplies(); // 0x7e TObjFunc
	var_172_bool = 0; // 0x80 PushV
	var_172_bool = 0; // 0x81 MovB
	var_173_bool = 0; var_174_object = Obj(); // 0x82 PushV
	var_174_object = var_1_object; // 0x83 MovT
	func_1224(var_173_bool, var_174_object); // 0x84 NEW_2
	if(var_173_bool == 0) goto Label_141; // 0x86 JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x87 PushV
	var_212_object = var_1_object; // 0x88 MovT
	func_1200(var_212_object); // 0x89 NEW_2
	if(var_211_bool == 0) goto Label_141; // 0x8b JumpB
	var_172_bool = 1; // 0x8c MovB
	
Label_141:
	if(var_172_bool == 0) goto Label_147; // 0x8d JumpB
	var_217_int = 528266; // 0x8e PushI
	var_218_int = 29631; // 0x8f PushI
	var_219_int = 29630; // 0x90 PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x91 TObjFunc
	
Label_147:
	var_220_int = 528258; // 0x93 PushI
	var_221_int = -1; // 0x94 PushI
	var_222_int = 29621; // 0x95 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x96 TObjFunc
	var_223_int = 526135; // 0x98 PushI
	var_224_int = -1; // 0x99 PushI
	var_225_int = 27414; // 0x9a PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x9b TObjFunc
	goto Label_215; // 0x9d Jump
	
Label_158:
	var_226_bool = 0; var_227_object = Obj(); // 0x9e PushV
	var_227_object = var_1_object; // 0x9f MovT
	func_1224(var_226_bool, var_227_object); // 0xa0 NEW_2
	if(var_226_bool == 0) goto Label_198; // 0xa2 JumpB
	var_228_object = Obj(); var_229_object = Obj(); // 0xa3 PushV
	var_228_object = var_1_object; // 0xa4 MovT
	var_229_object = var_0_object; // 0xa5 MovT
	func_1181(); // 0xa6 NEW_2
	var_240_string = ""; // 0xa8 PushV
	var_240_string = "Neutral"; // 0xa9 MovS
	func_245(var_86_object, var_240_string); // 0xaa NEW_2
	var_241_int = 526136; // 0xac PushI
	SetMessage(var_241_int); // 0xad TObjFunc
	ClearReplies(); // 0xaf TObjFunc
	var_242_bool = 0; var_243_object = Obj(); // 0xb1 PushV
	var_243_object = var_1_object; // 0xb2 MovT
	func_1212(var_243_object); // 0xb3 NEW_2
	if(var_242_bool == 0) goto Label_187; // 0xb5 JumpB
	var_248_int = 528269; // 0xb6 PushI
	var_249_int = 29634; // 0xb7 PushI
	var_250_int = 29633; // 0xb8 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0xb9 TObjFunc
	
Label_187:
	var_251_int = 526137; // 0xbb PushI
	var_252_int = -1; // 0xbc PushI
	var_253_int = 27416; // 0xbd PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0xbe TObjFunc
	var_254_int = 528259; // 0xc0 PushI
	var_255_int = -1; // 0xc1 PushI
	var_256_int = 29622; // 0xc2 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0xc3 TObjFunc
	goto Label_215; // 0xc5 Jump
	
Label_198:
	var_257_string = ""; // 0xc6 PushV
	var_257_string = "Neutral"; // 0xc7 MovS
	func_245(var_86_object, var_257_string); // 0xc8 NEW_2
	var_258_int = 530191; // 0xca PushI
	SetMessage(var_258_int); // 0xcb TObjFunc
	ClearReplies(); // 0xcd TObjFunc
	var_259_int = 530192; // 0xcf PushI
	var_260_int = -1; // 0xd0 PushI
	var_261_int = 31581; // 0xd1 PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0xd2 TObjFunc
	goto Label_215; // 0xd4 Jump
}


func_1098(var_35_int)
{
	var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; // 0x44a PushV
	var_38_int = 0; // 0x44b MovI
	
Label_1100:
	var_40_string = "all"; // 0x44c PushS
	var_41_string = ""; var_42_int = 0; // 0x44d PushV
	var_42_int = var_38_int; // 0x44e Mov
	func_1091(var_41_string, var_42_int); // 0x44f NEW_2
	HasAnimation(var_39_bool, var_40_string, var_41_string); // 0x451 Func
	var_46_bool = var_39_bool == 0; // 0x453 Not
	if(var_46_bool == 0) goto Label_1110; // 0x454 JumpB
	goto Label_1113; // 0x455 Jump
	
Label_1113:
	var_35_int = var_38_int; // 0x459 Mov
	return 4; // 0x45a Return
	
Label_1110:
	var_47_int = 1; // 0x456 PushI
	var_38_int = var_38_int + var_47_int; // 0x457 Add2
	goto Label_1100; // 0x458 Jump
}


func_1234(var_144_bool, var_145_object)
{
	var_146_bool = 0; var_147_object = Obj(); // 0x4d3 PushV
	var_147_object = var_145_object; // 0x4d4 Mov
	func_1302(var_147_object); // 0x4d5 NEW_2
	if(var_146_bool == 0) goto Label_1242; // 0x4d7 JumpB
	var_144_bool = 1; // 0x4d8 MovB
	return 0; // 0x4d9 Return
	
Label_1242:
	var_144_bool = 0; // 0x4da MovB
	return 0; // 0x4db Return
}


func_982(var_108_string, var_109_bool)
{
	var_112_bool = 0; var_113_float = 0; var_114_float = 0; var_115_bool = 0; var_116_float = 0; var_117_float = 0; // 0x3d6 PushV
	lshHasAnimation(var_115_bool, var_108_string); // 0x3d7 Func
	var_118_bool = var_115_bool; // 0x3d9 Push
	if(var_118_bool == 0) goto Label_992; // 0x3da JumpB
	lshGetAnimTimes(var_108_string, var_116_float, var_117_float); // 0x3db Func
	lshPlayAnimation(var_116_float, var_117_float, var_109_bool); // 0x3dd Func
	goto Label_996; // 0x3df Jump
	
Label_996:
	return 6; // 0x3e4 Return
	
Label_992:
	var_119_string = "Can't find lsh animation : "; // 0x3e0 PushS
	var_120_int = var_119_string + var_108_string; // 0x3e1 Add
	Trace(var_120_int); // 0x3e2 Func
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


func_1115()
{
	var_102_string = "ook7Birdmask1"; // 0x45c PushS
	var_103_int = 1; // 0x45d PushI
	SetVariable(var_102_string, var_103_int); // 0x45e Func
	return 0; // 0x460 Return
}


func_1244(var_155_bool, var_156_object)
{
	var_157_bool = 0; var_158_object = Obj(); // 0x4dd PushV
	var_158_object = var_156_object; // 0x4de Mov
	func_1309(var_158_object); // 0x4df NEW_2
	if(var_157_bool == 0) goto Label_1252; // 0x4e1 JumpB
	var_155_bool = 1; // 0x4e2 MovB
	return 0; // 0x4e3 Return
	
Label_1252:
	var_155_bool = 0; // 0x4e4 MovB
	return 0; // 0x4e5 Return
}


func_861(var_60_bool)
{
	var_60_bool = 1; // 0x35d MovB
	return 0; // 0x35e Return
}


func_863()
{
	StopAnimation(); // 0x35f Func
	StopGroup0(); // 0x361 Func
	return 0; // 0x363 Return
}


func_1121()
{
	var_18_object = Obj(); var_19_object = Obj(); // 0x461 PushV
	var_20_int = 0; var_21_string = ""; // 0x462 PushV
	var_21_string = "k7q01CorpseMark"; // 0x463 MovS
	func_1025(var_20_int, var_21_string); // 0x464 NEW_2
	var_24_int = 0; // 0x466 PushI
	var_25_bool = var_20_int == var_24_int; // 0x467 Eq
	if(var_25_bool == 0) goto Label_1152; // 0x468 JumpB
	var_26_string = "k7q01CorpseMark"; // 0x469 PushS
	var_27_int = 1; // 0x46a PushI
	SetVariable(var_26_string, var_27_int); // 0x46b Func
	var_28_object = Obj(); // 0x46d PushV
	func_1330(var_28_object); // 0x46e NEW_2
	var_19_object = var_28_object; // 0x46f Mov
	var_35_string = "k7q01BirdmaskGotoCorpse"; // 0x471 PushS
	var_36_string = "pt_d7q02_corpse"; // 0x472 PushS
	var_37_int = 3; // 0x473 PushI
	var_38_int = 526214; // 0x474 PushI
	var_39_float = 0; // 0x475 PushV
	func_1059(var_39_float); // 0x476 NEW_2
	AddMark(var_35_string, var_36_string, var_37_int, var_38_int, var_39_float); // 0x478 ObjFunc
	var_42_bool = 0; var_43_string = ""; var_44_string = ""; // 0x47a PushV
	var_43_string = "quest_k7_01"; // 0x47b MovS
	var_44_string = "place_corpse"; // 0x47c MovS
	func_1047(var_42_bool, var_43_string, var_44_string); // 0x47d NEW_2
	var_19_object = 0; // 0x47f SetNull
	
Label_1152:
	return 2; // 0x480 Return
}


func_1380(var_76_int)
{
	var_77_int = 0; var_78_int = 0; // 0x564 PushV
	var_79_string = "branch"; // 0x565 PushS
	GetVariable(var_79_string, var_78_int); // 0x566 Func
	var_80_int = 0; // 0x568 PushI
	var_81_bool = var_78_int == var_80_int; // 0x569 Eq
	if(var_81_bool == 0) goto Label_1390; // 0x56a JumpB
	var_76_int = 1; // 0x56b MovI
	return 2; // 0x56c Return
	
Label_1390:
	var_82_int = 1; // 0x56e PushI
	var_83_bool = var_78_int == var_82_int; // 0x56f Eq
	if(var_83_bool == 0) goto Label_1395; // 0x570 JumpB
	var_76_int = 2; // 0x571 MovI
	return 2; // 0x572 Return
	
Label_1395:
	var_76_int = 3; // 0x573 MovI
	return 2; // 0x574 Return
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


func_997(var_27_object)
{
	var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); // 0x3e5 PushV
	GetEyesHeight(var_30_float); // 0x3e6 ObjFunc
	var_31_cvector = CVector(0.0, 0.0, 0.0); // 0x3e8 MovV
	var_32_float = GetByIndex(var_31_cvector, 1); // 0x3e9 PushE
	var_32_float = var_30_float; // 0x3ea Mov
	SetByIndex(var_31_cvector, 1) = var_32_float; // 0x3eb PopE
	var_33_string = "head"; // 0x3ec PushS
	LookAsync(var_27_object, var_33_string, var_31_cvector); // 0x3ed Func
	return 4; // 0x3ef Return
}


func_1254(var_175_bool)
{
	var_177_int = 0; var_178_int = 0; var_179_int = 0; var_180_bool = 0; var_181_bool = 0; var_182_int = 0; var_183_object = Obj(); var_184_int = 0; var_185_bool = 0; var_186_bool = 0; var_187_int = 0; var_188_int = 0; var_189_int = 0; var_190_bool = 0; var_191_bool = 0; var_192_int = 0; var_193_object = Obj(); var_194_int = 0; var_195_bool = 0; var_196_bool = 0; // 0x4e6 PushV
	var_197_int = 1; // 0x4e7 PushI
	GetItemCount(var_187_int, var_197_int); // 0x4e8 ObjFunc
	var_198_string = "bird_mask"; // 0x4ea PushS
	GetInvItemByName(var_188_int, var_198_string); // 0x4eb Func
	var_199_string = "bird_balahon"; // 0x4ed PushS
	GetInvItemByName(var_189_int, var_199_string); // 0x4ee Func
	var_190_bool = 0; // 0x4f0 MovB
	var_191_bool = 0; // 0x4f1 MovB
	var_192_int = 0; // 0x4f2 MovI
	
Label_1267:
	var_200_bool = var_192_int < var_187_int; // 0x4f3 LT
	if(var_200_bool == 0) goto Label_1295; // 0x4f4 JumpB
	var_201_int = 1; // 0x4f5 PushI
	GetItem(var_193_object, var_192_int, var_201_int); // 0x4f6 ObjFunc
	GetItemID(var_194_int); // 0x4f8 ObjFunc
	var_202_bool = var_194_int == var_188_int; // 0x4fa Eq
	if(var_202_bool == 0) goto Label_1283; // 0x4fb JumpB
	var_203_int = 1; // 0x4fc PushI
	IsItemSelected(var_195_bool, var_192_int, var_203_int); // 0x4fd ObjFunc
	var_204_bool = var_195_bool; // 0x4ff Push
	if(var_204_bool == 0) goto Label_1282; // 0x500 JumpB
	var_190_bool = 1; // 0x501 MovB
	
Label_1282:
	goto Label_1291; // 0x502 Jump
	
Label_1291:
	var_193_object = 0; // 0x50b SetNull
	var_205_int = 1; // 0x50c PushI
	var_192_int = var_192_int + var_205_int; // 0x50d Add2
	goto Label_1267; // 0x50e Jump
	
Label_1283:
	var_206_bool = var_194_int == var_189_int; // 0x503 Eq
	if(var_206_bool == 0) goto Label_1291; // 0x504 JumpB
	var_207_int = 1; // 0x505 PushI
	IsItemSelected(var_196_bool, var_192_int, var_207_int); // 0x506 ObjFunc
	var_208_bool = var_196_bool; // 0x508 Push
	if(var_208_bool == 0) goto Label_1291; // 0x509 JumpB
	var_191_bool = 1; // 0x50a MovB
	
Label_1295:
	var_175_bool = 0; // 0x50f MovB
	var_209_bool = var_190_bool; // 0x510 Push
	if(var_209_bool == 0) goto Label_1301; // 0x511 JumpB
	var_210_bool = var_191_bool; // 0x512 Push
	if(var_210_bool == 0) goto Label_1301; // 0x513 JumpB
	var_175_bool = 1; // 0x514 MovB
	
Label_1301:
	return 20; // 0x515 Return
}


func_876(var_12_bool)
{
	var_13_bool = 0; var_14_bool = 0; // 0x36c PushV
	IsLoaded(var_14_bool); // 0x36d Func
	var_12_bool = var_14_bool; // 0x36f Mov
	return 2; // 0x370 Return
}


func_1008()
{
	var_13_bool = 0; // 0x3f0 PushV
	func_1089(var_13_bool); // 0x3f1 NEW_2
	if(var_13_bool == 0) goto Label_1014; // 0x3f3 JumpB
	lshStopSpeech(); // 0x3f4 Func
	
Label_1014:
	return 0; // 0x3f6 Return
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
	func_1015(var_52_cvector, var_53_cvector); // 0x38c NEW_2
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
	CameraTransit(var_43_cvector, var_41_cvector); // 0x39c Func
	var_65_float = GetByIndex(var_42_cvector, 0); // 0x39e PushE
	var_66_float = GetByIndex(var_42_cvector, 2); // 0x39f PushE
	Rotate(var_65_float, var_66_float); // 0x3a0 Func
	var_67_bool = 0; // 0x3a2 PushV
	func_1089(var_67_bool); // 0x3a3 NEW_2
	if(var_67_bool == 0) goto Label_935; // 0x3a5 JumpB
	goto Label_943; // 0x3a6 Jump
	
Label_943:
	CameraWaitForPlayFinish(); // 0x3af Func
	ResumeWorld(); // 0x3b1 Func
	var_25_bool = 1; // 0x3b3 MovB
	return 18; // 0x3b4 Return
	
Label_935:
	var_68_string = "head"; // 0x3a7 PushS
	HasAnimationTrack(var_45_bool, var_68_string); // 0x3a8 Func
	var_69_bool = var_45_bool; // 0x3aa Push
	if(var_69_bool == 0) goto Label_943; // 0x3ab JumpB
	var_70_string = "head"; // 0x3ac PushS
	LookAsyncCamera(var_70_string); // 0x3ad Func
}


func_245(var_2_object, var_104_string)
{
	var_105_bool = 0; // 0xf6 PushV
	func_1089(var_105_bool); // 0xf7 NEW_2
	var_106_bool = var_105_bool == 0; // 0xf9 Not
	if(var_106_bool == 0) goto Label_252; // 0xfa JumpB
	return 0; // 0xfb Return
	
Label_252:
	var_107_bool = var_104_string == var_2_object; // 0xfc Eq
	if(var_107_bool == 0) goto Label_255; // 0xfd JumpB
	return 0; // 0xfe Return
	
Label_255:
	var_108_string = ""; var_109_bool = 0; // 0xff PushV
	var_108_string = var_104_string; // 0x100 Mov
	var_110_string = ""; // 0x101 PushS
	var_111_bool = var_104_string == var_110_string; // 0x102 Eq
	if(var_111_bool == 0) goto Label_262; // 0x103 JumpB
	var_109_bool = 0; // 0x104 MovB
	goto Label_263; // 0x105 Jump
	
Label_263:
	func_982(var_108_string, var_109_bool); // 0x107 NEW_2
	var_2_object = var_104_string; // 0x109 TMov
	return 0; // 0x10a Return
	
Label_262:
	var_109_bool = 1; // 0x106 MovB
}


func_1015(var_52_cvector, var_53_cvector)
{
	var_55_float = 0; var_56_float = 0; // 0x3f7 PushV
	var_57_int = var_53_cvector | var_53_cvector; // 0x3f8 Or
	var_56_float = sqrt(var_57_int); // 0x3f9 Sqrt2
	var_58_float = 0.0; // 0x3fa PushF
	var_59_bool = var_56_float < var_58_float; // 0x3fb LT
	if(var_59_bool == 0) goto Label_1023; // 0x3fc JumpB
	var_52_cvector = CVector(0.0, 0.0, 0.0); // 0x3fd MovV
	return 2; // 0x3fe Return
	
Label_1023:
	var_52_cvector = var_53_cvector / var_53_cvector; // 0x3ff Div2
	return 2; // 0x400 Return
}


