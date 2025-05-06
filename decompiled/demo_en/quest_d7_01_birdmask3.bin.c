task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xe5 PushI
	if(var_7_int == 0) goto Label_705; // 0xe6 JumpB
	func_834(); // 0xe8 NEW_2
	var_9_int = 43785; // 0xea PushI
	var_10_bool = var_6_int == var_9_int; // 0xeb Eq
	if(var_10_bool == 0) goto Label_247; // 0xec JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xed PushV
	var_11_object = var_1_object; // 0xee MovT
	var_12_object = var_0_object; // 0xef MovT
	func_927(var_12_object); // 0xf0 NEW_2
	var_35_object = Obj(); var_36_object = Obj(); // 0xf2 PushV
	var_35_object = var_1_object; // 0xf3 MovT
	var_36_object = var_0_object; // 0xf4 MovT
	func_912(); // 0xf5 NEW_2
	
Label_247:
	var_39_int = 14438; // 0xf7 PushI
	var_40_bool = var_6_int == var_39_int; // 0xf8 Eq
	if(var_40_bool == 0) goto Label_260; // 0xf9 JumpB
	var_41_object = Obj(); var_42_object = Obj(); // 0xfa PushV
	var_41_object = var_1_object; // 0xfb MovT
	var_42_object = var_0_object; // 0xfc MovT
	func_927(var_42_object); // 0xfd NEW_2
	var_43_object = Obj(); var_44_object = Obj(); // 0xff PushV
	var_43_object = var_1_object; // 0x100 MovT
	var_44_object = var_0_object; // 0x101 MovT
	func_912(); // 0x102 NEW_2
	
Label_260:
	var_45_int = 14485; // 0x104 PushI
	var_46_bool = var_6_int == var_45_int; // 0x105 Eq
	if(var_46_bool == 0) goto Label_273; // 0x106 JumpB
	var_47_object = Obj(); var_48_object = Obj(); // 0x107 PushV
	var_47_object = var_1_object; // 0x108 MovT
	var_48_object = var_0_object; // 0x109 MovT
	func_918(); // 0x10a NEW_2
	var_74_object = Obj(); var_75_object = Obj(); // 0x10c PushV
	var_74_object = var_1_object; // 0x10d MovT
	var_75_object = var_0_object; // 0x10e MovT
	func_944(); // 0x10f NEW_2
	
Label_273:
	var_82_int = 14446; // 0x111 PushI
	var_83_bool = var_6_int == var_82_int; // 0x112 Eq
	if(var_83_bool == 0) goto Label_286; // 0x113 JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x114 PushV
	var_84_object = var_1_object; // 0x115 MovT
	var_85_object = var_0_object; // 0x116 MovT
	func_918(); // 0x117 NEW_2
	var_86_object = Obj(); var_87_object = Obj(); // 0x119 PushV
	var_86_object = var_1_object; // 0x11a MovT
	var_87_object = var_0_object; // 0x11b MovT
	func_944(); // 0x11c NEW_2
	
Label_286:
	var_88_int = 16565; // 0x11e PushI
	var_89_bool = var_6_int == var_88_int; // 0x11f Eq
	if(var_89_bool == 0) goto Label_299; // 0x120 JumpB
	var_90_object = Obj(); var_91_object = Obj(); // 0x121 PushV
	var_90_object = var_1_object; // 0x122 MovT
	var_91_object = var_0_object; // 0x123 MovT
	func_918(); // 0x124 NEW_2
	var_92_object = Obj(); var_93_object = Obj(); // 0x126 PushV
	var_92_object = var_1_object; // 0x127 MovT
	var_93_object = var_0_object; // 0x128 MovT
	func_944(); // 0x129 NEW_2
	
Label_299:
	var_94_int = 16566; // 0x12b PushI
	var_95_bool = var_6_int == var_94_int; // 0x12c Eq
	if(var_95_bool == 0) goto Label_312; // 0x12d JumpB
	var_96_object = Obj(); var_97_object = Obj(); // 0x12e PushV
	var_96_object = var_1_object; // 0x12f MovT
	var_97_object = var_0_object; // 0x130 MovT
	func_918(); // 0x131 NEW_2
	var_98_object = Obj(); var_99_object = Obj(); // 0x133 PushV
	var_98_object = var_1_object; // 0x134 MovT
	var_99_object = var_0_object; // 0x135 MovT
	func_944(); // 0x136 NEW_2
	
Label_312:
	var_100_int = 14435; // 0x138 PushI
	var_101_bool = var_5_int == var_100_int; // 0x139 Eq
	if(var_101_bool == 0) goto Label_409; // 0x13a JumpB
	var_102_bool = 0; var_103_object = Obj(); // 0x13b PushV
	var_103_object = var_1_object; // 0x13c MovT
	func_973(var_103_object); // 0x13d NEW_2
	if(var_102_bool == 0) goto Label_340; // 0x13f JumpB
	var_110_object = Obj(); var_111_object = Obj(); // 0x140 PushV
	var_110_object = var_1_object; // 0x141 MovT
	var_111_object = var_0_object; // 0x142 MovT
	func_938(); // 0x143 NEW_2
	var_114_string = ""; // 0x145 PushV
	var_114_string = "Neutral"; // 0x146 MovS
	func_206(var_6_int, var_114_string); // 0x147 NEW_2
	var_131_int = 513212; // 0x149 PushI
	SetMessage(var_131_int); // 0x14a TObjFunc
	ClearReplies(); // 0x14c TObjFunc
	var_132_int = 513213; // 0x14e PushI
	var_133_int = 14437; // 0x14f PushI
	var_134_int = 14436; // 0x150 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x151 TObjFunc
	return 0; // 0x153 Return
	
Label_340:
	var_135_bool = 0; // 0x154 PushV
	var_135_bool = 0; // 0x155 MovB
	var_136_bool = 0; var_137_object = Obj(); // 0x156 PushV
	var_137_object = var_1_object; // 0x157 MovT
	func_951(var_137_object); // 0x158 NEW_2
	if(var_136_bool == 0) goto Label_353; // 0x15a JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x15b PushV
	var_143_object = var_1_object; // 0x15c MovT
	func_963(var_142_bool, var_143_object); // 0x15d NEW_2
	if(var_142_bool == 0) goto Label_353; // 0x15f JumpB
	var_135_bool = 1; // 0x160 MovB
	
Label_353:
	if(var_135_bool == 0) goto Label_379; // 0x161 JumpB
	var_180_string = ""; // 0x162 PushV
	var_180_string = "Neutral"; // 0x163 MovS
	func_206(var_6_int, var_180_string); // 0x164 NEW_2
	var_181_int = 513216; // 0x166 PushI
	SetMessage(var_181_int); // 0x167 TObjFunc
	ClearReplies(); // 0x169 TObjFunc
	var_182_int = 513217; // 0x16b PushI
	var_183_int = 14441; // 0x16c PushI
	var_184_int = 14440; // 0x16d PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x16e TObjFunc
	var_185_int = 513220; // 0x170 PushI
	var_186_int = 14444; // 0x171 PushI
	var_187_int = 14443; // 0x172 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x173 TObjFunc
	var_188_int = 513224; // 0x175 PushI
	var_189_int = 14441; // 0x176 PushI
	var_190_int = 14447; // 0x177 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x178 TObjFunc
	return 0; // 0x17a Return
	
Label_379:
	var_191_bool = 0; var_192_object = Obj(); // 0x17b PushV
	var_192_object = var_1_object; // 0x17c MovT
	func_951(var_192_object); // 0x17d NEW_2
	if(var_191_bool == 0) goto Label_409; // 0x17f JumpB
	var_193_string = ""; // 0x180 PushV
	var_193_string = "Neutral"; // 0x181 MovS
	func_206(var_6_int, var_193_string); // 0x182 NEW_2
	var_194_int = 513231; // 0x184 PushI
	SetMessage(var_194_int); // 0x185 TObjFunc
	ClearReplies(); // 0x187 TObjFunc
	var_195_int = 513232; // 0x189 PushI
	var_196_int = 14456; // 0x18a PushI
	var_197_int = 14455; // 0x18b PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x18c TObjFunc
	var_198_int = 513248; // 0x18e PushI
	var_199_int = 16562; // 0x18f PushI
	var_200_int = 14473; // 0x190 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x191 TObjFunc
	var_201_int = 513249; // 0x193 PushI
	var_202_int = -1; // 0x194 PushI
	var_203_int = 14475; // 0x195 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x196 TObjFunc
	return 0; // 0x198 Return
	
Label_409:
	var_204_int = 14456; // 0x199 PushI
	var_205_bool = var_5_int == var_204_int; // 0x19a Eq
	if(var_205_bool == 0) goto Label_437; // 0x19b JumpB
	var_206_string = ""; // 0x19c PushV
	var_206_string = "Neutral"; // 0x19d MovS
	func_206(var_6_int, var_206_string); // 0x19e NEW_2
	var_207_int = 513233; // 0x1a0 PushI
	SetMessage(var_207_int); // 0x1a1 TObjFunc
	ClearReplies(); // 0x1a3 TObjFunc
	var_208_int = 513234; // 0x1a5 PushI
	var_209_int = 14458; // 0x1a6 PushI
	var_210_int = 14457; // 0x1a7 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x1a8 TObjFunc
	var_211_int = 513240; // 0x1aa PushI
	var_212_int = 14469; // 0x1ab PushI
	var_213_int = 14463; // 0x1ac PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x1ad TObjFunc
	var_214_int = 513244; // 0x1af PushI
	var_215_int = 14464; // 0x1b0 PushI
	var_216_int = 14468; // 0x1b1 PushI
	AddReply(var_214_int, var_215_int, var_216_int); // 0x1b2 TObjFunc
	return 0; // 0x1b4 Return
	
Label_437:
	var_217_int = 14464; // 0x1b5 PushI
	var_218_bool = var_5_int == var_217_int; // 0x1b6 Eq
	if(var_218_bool == 0) goto Label_460; // 0x1b7 JumpB
	var_219_string = ""; // 0x1b8 PushV
	var_219_string = "Neutral"; // 0x1b9 MovS
	func_206(var_6_int, var_219_string); // 0x1ba NEW_2
	var_220_int = 513241; // 0x1bc PushI
	SetMessage(var_220_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_221_int = 513242; // 0x1c1 PushI
	var_222_int = -1; // 0x1c2 PushI
	var_223_int = 14465; // 0x1c3 PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x1c4 TObjFunc
	var_224_int = 513243; // 0x1c6 PushI
	var_225_int = 16562; // 0x1c7 PushI
	var_226_int = 14466; // 0x1c8 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x1c9 TObjFunc
	return 0; // 0x1cb Return
	
Label_460:
	var_227_int = 14469; // 0x1cc PushI
	var_228_bool = var_5_int == var_227_int; // 0x1cd Eq
	if(var_228_bool == 0) goto Label_483; // 0x1ce JumpB
	var_229_string = ""; // 0x1cf PushV
	var_229_string = "Neutral"; // 0x1d0 MovS
	func_206(var_6_int, var_229_string); // 0x1d1 NEW_2
	var_230_int = 513245; // 0x1d3 PushI
	SetMessage(var_230_int); // 0x1d4 TObjFunc
	ClearReplies(); // 0x1d6 TObjFunc
	var_231_int = 513246; // 0x1d8 PushI
	var_232_int = -1; // 0x1d9 PushI
	var_233_int = 14470; // 0x1da PushI
	AddReply(var_231_int, var_232_int, var_233_int); // 0x1db TObjFunc
	var_234_int = 513247; // 0x1dd PushI
	var_235_int = 16562; // 0x1de PushI
	var_236_int = 14471; // 0x1df PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x1e0 TObjFunc
	return 0; // 0x1e2 Return
	
Label_483:
	var_237_int = 14458; // 0x1e3 PushI
	var_238_bool = var_5_int == var_237_int; // 0x1e4 Eq
	if(var_238_bool == 0) goto Label_506; // 0x1e5 JumpB
	var_239_string = ""; // 0x1e6 PushV
	var_239_string = "Neutral"; // 0x1e7 MovS
	func_206(var_6_int, var_239_string); // 0x1e8 NEW_2
	var_240_int = 513235; // 0x1ea PushI
	SetMessage(var_240_int); // 0x1eb TObjFunc
	ClearReplies(); // 0x1ed TObjFunc
	var_241_int = 513236; // 0x1ef PushI
	var_242_int = 16562; // 0x1f0 PushI
	var_243_int = 14459; // 0x1f1 PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x1f2 TObjFunc
	var_244_int = 513239; // 0x1f4 PushI
	var_245_int = -1; // 0x1f5 PushI
	var_246_int = 14462; // 0x1f6 PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x1f7 TObjFunc
	return 0; // 0x1f9 Return
	
Label_506:
	var_247_int = 16562; // 0x1fa PushI
	var_248_bool = var_5_int == var_247_int; // 0x1fb Eq
	if(var_248_bool == 0) goto Label_529; // 0x1fc JumpB
	var_249_string = ""; // 0x1fd PushV
	var_249_string = "Neutral"; // 0x1fe MovS
	func_206(var_6_int, var_249_string); // 0x1ff NEW_2
	var_250_int = 515419; // 0x201 PushI
	SetMessage(var_250_int); // 0x202 TObjFunc
	ClearReplies(); // 0x204 TObjFunc
	var_251_int = 515420; // 0x206 PushI
	var_252_int = -1; // 0x207 PushI
	var_253_int = 16565; // 0x208 PushI
	AddReply(var_251_int, var_252_int, var_253_int); // 0x209 TObjFunc
	var_254_int = 515421; // 0x20b PushI
	var_255_int = -1; // 0x20c PushI
	var_256_int = 16566; // 0x20d PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x20e TObjFunc
	return 0; // 0x210 Return
	
Label_529:
	var_257_int = 14444; // 0x211 PushI
	var_258_bool = var_5_int == var_257_int; // 0x212 Eq
	if(var_258_bool == 0) goto Label_552; // 0x213 JumpB
	var_259_string = ""; // 0x214 PushV
	var_259_string = "Neutral"; // 0x215 MovS
	func_206(var_6_int, var_259_string); // 0x216 NEW_2
	var_260_int = 513221; // 0x218 PushI
	SetMessage(var_260_int); // 0x219 TObjFunc
	ClearReplies(); // 0x21b TObjFunc
	var_261_int = 513222; // 0x21d PushI
	var_262_int = -1; // 0x21e PushI
	var_263_int = 14445; // 0x21f PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x220 TObjFunc
	var_264_int = 513223; // 0x222 PushI
	var_265_int = -1; // 0x223 PushI
	var_266_int = 14446; // 0x224 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x225 TObjFunc
	return 0; // 0x227 Return
	
Label_552:
	var_267_int = 14441; // 0x228 PushI
	var_268_bool = var_5_int == var_267_int; // 0x229 Eq
	if(var_268_bool == 0) goto Label_575; // 0x22a JumpB
	var_269_string = ""; // 0x22b PushV
	var_269_string = "Neutral"; // 0x22c MovS
	func_206(var_6_int, var_269_string); // 0x22d NEW_2
	var_270_int = 513218; // 0x22f PushI
	SetMessage(var_270_int); // 0x230 TObjFunc
	ClearReplies(); // 0x232 TObjFunc
	var_271_int = 513219; // 0x234 PushI
	var_272_int = -1; // 0x235 PushI
	var_273_int = 14442; // 0x236 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x237 TObjFunc
	var_274_int = 513259; // 0x239 PushI
	var_275_int = -1; // 0x23a PushI
	var_276_int = 14485; // 0x23b PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x23c TObjFunc
	return 0; // 0x23e Return
	
Label_575:
	var_277_int = 14437; // 0x23f PushI
	var_278_bool = var_5_int == var_277_int; // 0x240 Eq
	if(var_278_bool == 0) goto Label_598; // 0x241 JumpB
	var_279_string = ""; // 0x242 PushV
	var_279_string = "Neutral"; // 0x243 MovS
	func_206(var_6_int, var_279_string); // 0x244 NEW_2
	var_280_int = 513214; // 0x246 PushI
	SetMessage(var_280_int); // 0x247 TObjFunc
	ClearReplies(); // 0x249 TObjFunc
	var_281_int = 513250; // 0x24b PushI
	var_282_int = 14478; // 0x24c PushI
	var_283_int = 14476; // 0x24d PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x24e TObjFunc
	var_284_int = 513251; // 0x250 PushI
	var_285_int = 14482; // 0x251 PushI
	var_286_int = 14477; // 0x252 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0x253 TObjFunc
	return 0; // 0x255 Return
	
Label_598:
	var_287_int = 14482; // 0x256 PushI
	var_288_bool = var_5_int == var_287_int; // 0x257 Eq
	if(var_288_bool == 0) goto Label_616; // 0x258 JumpB
	var_289_string = ""; // 0x259 PushV
	var_289_string = "Neutral"; // 0x25a MovS
	func_206(var_6_int, var_289_string); // 0x25b NEW_2
	var_290_int = 513256; // 0x25d PushI
	SetMessage(var_290_int); // 0x25e TObjFunc
	ClearReplies(); // 0x260 TObjFunc
	var_291_int = 513257; // 0x262 PushI
	var_292_int = 14484; // 0x263 PushI
	var_293_int = 14483; // 0x264 PushI
	AddReply(var_291_int, var_292_int, var_293_int); // 0x265 TObjFunc
	return 0; // 0x267 Return
	
Label_616:
	var_294_int = 14484; // 0x268 PushI
	var_295_bool = var_5_int == var_294_int; // 0x269 Eq
	if(var_295_bool == 0) goto Label_634; // 0x26a JumpB
	var_296_string = ""; // 0x26b PushV
	var_296_string = "Neutral"; // 0x26c MovS
	func_206(var_6_int, var_296_string); // 0x26d NEW_2
	var_297_int = 513258; // 0x26f PushI
	SetMessage(var_297_int); // 0x270 TObjFunc
	ClearReplies(); // 0x272 TObjFunc
	var_298_int = 513215; // 0x274 PushI
	var_299_int = -1; // 0x275 PushI
	var_300_int = 14438; // 0x276 PushI
	AddReply(var_298_int, var_299_int, var_300_int); // 0x277 TObjFunc
	return 0; // 0x279 Return
	
Label_634:
	var_301_int = 14478; // 0x27a PushI
	var_302_bool = var_5_int == var_301_int; // 0x27b Eq
	if(var_302_bool == 0) goto Label_652; // 0x27c JumpB
	var_303_string = ""; // 0x27d PushV
	var_303_string = "Neutral"; // 0x27e MovS
	func_206(var_6_int, var_303_string); // 0x27f NEW_2
	var_304_int = 513252; // 0x281 PushI
	SetMessage(var_304_int); // 0x282 TObjFunc
	ClearReplies(); // 0x284 TObjFunc
	var_305_int = 513253; // 0x286 PushI
	var_306_int = 14480; // 0x287 PushI
	var_307_int = 14479; // 0x288 PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x289 TObjFunc
	return 0; // 0x28b Return
	
Label_652:
	var_308_int = 14480; // 0x28c PushI
	var_309_bool = var_5_int == var_308_int; // 0x28d Eq
	if(var_309_bool == 0) goto Label_675; // 0x28e JumpB
	var_310_string = ""; // 0x28f PushV
	var_310_string = "Neutral"; // 0x290 MovS
	func_206(var_6_int, var_310_string); // 0x291 NEW_2
	var_311_int = 513254; // 0x293 PushI
	SetMessage(var_311_int); // 0x294 TObjFunc
	ClearReplies(); // 0x296 TObjFunc
	var_312_int = 513255; // 0x298 PushI
	var_313_int = 43784; // 0x299 PushI
	var_314_int = 14481; // 0x29a PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x29b TObjFunc
	var_315_int = 541612; // 0x29d PushI
	var_316_int = 14482; // 0x29e PushI
	var_317_int = 43783; // 0x29f PushI
	AddReply(var_315_int, var_316_int, var_317_int); // 0x2a0 TObjFunc
	return 0; // 0x2a2 Return
	
Label_675:
	var_318_int = 43784; // 0x2a3 PushI
	var_319_bool = var_5_int == var_318_int; // 0x2a4 Eq
	if(var_319_bool == 0) goto Label_693; // 0x2a5 JumpB
	var_320_string = ""; // 0x2a6 PushV
	var_320_string = "Neutral"; // 0x2a7 MovS
	func_206(var_6_int, var_320_string); // 0x2a8 NEW_2
	var_321_int = 541613; // 0x2aa PushI
	SetMessage(var_321_int); // 0x2ab TObjFunc
	ClearReplies(); // 0x2ad TObjFunc
	var_322_int = 541614; // 0x2af PushI
	var_323_int = -1; // 0x2b0 PushI
	var_324_int = 43785; // 0x2b1 PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x2b2 TObjFunc
	return 0; // 0x2b4 Return
	
Label_693:
	var_3_string = 1; // 0x2b5 TMovB
	var_325_bool = 0; // 0x2b6 PushV
	func_1112(var_325_bool); // 0x2b7 NEW_2
	if(var_325_bool == 0) goto Label_701; // 0x2b9 JumpB
	lshStopAnimation(); // 0x2ba Func
	goto Label_703; // 0x2bc Jump
	
Label_703:
	return 0; // 0x2bf Return
	
Label_701:
	StopAnimation(); // 0x2bd Func
	
Label_705:
	return 0; // 0x2c1 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_object = Obj(); // 0x2c7 PushV
	var_7_object = var_5_object; // 0x2c8 Mov
	TaskCall(0); // 0x2c9 TaskCall
	func_0(var_8_object, var_6_int, var_7_object); // 0x2ca NEW_2
	TaskReturn(); // 0x2cb TaskReturn
	return 0; // 0x2cd Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	
Label_706:
	Hold(); // 0x2c2 Func
	goto Label_706; // 0x2c4 Jump
}


func_0(var_0_object, var_6_int, var_7_object)
{
	var_9_object = Obj(); var_10_bool = 0; var_11_int = 0; var_12_bool = 0; var_13_object = Obj(); var_14_bool = 0; var_15_int = 0; var_16_bool = 0; // 0x0 PushV
	var_0_object = var_7_object; // 0x1 TMov
	var_17_bool = 0; var_18_object = Obj(); var_19_float = 0; // 0x2 PushV
	var_18_object = var_7_object; // 0x3 Mov
	var_19_float = 130.0; // 0x4 MovF
	func_718(var_18_object, var_19_float); // 0x5 NEW_2
	var_63_bool = var_17_bool == 0; // 0x7 Not
	if(var_63_bool == 0) goto Label_11; // 0x8 JumpB
	var_6_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_13_object); // 0xb Func
	var_64_int = 0; // 0xd PushV
	func_1106(var_64_int); // 0xe NEW_2
	SetNPCName(var_64_int); // 0x10 ObjFunc
	var_65_int = 0; // 0x12 PushV
	func_1104(var_65_int); // 0x13 NEW_2
	SetNPCDescription(var_65_int); // 0x15 ObjFunc
	var_66_string = ""; // 0x17 PushV
	func_1108(var_66_string); // 0x18 NEW_2
	SetPhoto(var_66_string); // 0x1a ObjFunc
	var_67_string = ""; // 0x1c PushV
	func_1110(var_67_string); // 0x1d NEW_2
	SetPhoto2(var_67_string); // 0x1f ObjFunc
	var_68_int = 0; // 0x21 PushV
	func_1087(var_68_int); // 0x22 NEW_2
	SetPlayerName(var_68_int); // 0x24 ObjFunc
	var_15_int = -1; // 0x26 MovI
	IsOverrideActive(var_14_bool); // 0x27 Func
	var_76_bool = var_14_bool; // 0x29 Push
	if(var_76_bool == 0) goto Label_45; // 0x2a JumpB
	var_6_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_13_object); // 0x2d Func
	var_77_object = Obj(); var_78_object = Obj(); // 0x2f PushV
	var_77_object = var_7_object; // 0x30 Mov
	var_78_object = var_13_object; // 0x31 Mov
	TaskCall(1); // 0x32 TaskCall
	func_74(var_79_object, var_80_object, var_81_string, var_82_bool, var_77_object, var_78_object); // 0x33 NEW_2
	TaskReturn(); // 0x34 TaskReturn
	IsDialogEnd(var_16_bool); // 0x36 ObjFunc
	
Label_56:
	var_204_bool = var_16_bool == 0; // 0x38 Not
	if(var_204_bool == 0) goto Label_63; // 0x39 JumpB
	sync(); // 0x3a Func
	IsDialogEnd(var_16_bool); // 0x3c ObjFunc
	goto Label_56; // 0x3e Jump
	
Label_63:
	var_205_object = Obj(); // 0x3f PushV
	var_205_object = var_7_object; // 0x40 Mov
	func_786(); // 0x41 NEW_2
	StopDialog(var_13_object); // 0x43 Func
	GetReturnValue(var_15_int); // 0x45 ObjFunc
	var_6_int = var_15_int; // 0x47 Mov
	return 8; // 0x48 Return
}


func_900(var_76_bool, var_77_string, var_78_string)
{
	var_79_object = Obj(); var_80_object = Obj(); // 0x384 PushV
	FindActor(var_80_object, var_77_string); // 0x385 Func
	var_81_bool = var_80_object == 0; // 0x387 NullEq
	if(var_81_bool == 0) goto Label_907; // 0x388 JumpB
	var_76_bool = 0; // 0x389 MovB
	return 2; // 0x38a Return
	
Label_907:
	Trigger(var_80_object, var_78_string); // 0x38b Func
	var_76_bool = 1; // 0x38d MovB
	return 2; // 0x38e Return
}


func_1033()
{
	var_51_object = Obj(); var_52_object = Obj(); // 0x409 PushV
	var_53_int = 169; // 0x40a PushI
	var_54_int = 1; // 0x40b PushI
	var_55_int = 515418; // 0x40c PushI
	CreateDiaryEntry(var_52_object, var_53_int, var_54_int, var_55_int); // 0x40d Func
	var_56_bool = 0; var_57_object = Obj(); var_58_int = 0; // 0x40f PushV
	var_57_object = var_52_object; // 0x410 Mov
	var_58_int = 165; // 0x411 MovI
	func_1059(var_56_bool, var_57_object, var_58_int); // 0x412 NEW_2
	return 2; // 0x414 Return
}


func_912()
{
	var_37_string = "playsound"; // 0x391 PushS
	var_38_string = "giveitem"; // 0x392 PushS
	TriggerWorld(var_37_string, var_38_string); // 0x393 Func
	return 0; // 0x395 Return
}


func_786()
{
	var_206_bool = 0; var_207_bool = 0; // 0x312 PushV
	CameraSwitchToNormal(); // 0x313 Func
	var_208_bool = 0; // 0x315 PushV
	func_1112(var_208_bool); // 0x316 NEW_2
	if(var_208_bool == 0) goto Label_794; // 0x318 JumpB
	goto Label_802; // 0x319 Jump
	
Label_802:
	return 2; // 0x322 Return
	
Label_794:
	var_209_string = "head"; // 0x31a PushS
	HasAnimationTrack(var_207_bool, var_209_string); // 0x31b Func
	var_210_bool = var_207_bool; // 0x31d Push
	if(var_210_bool == 0) goto Label_802; // 0x31e JumpB
	var_211_string = "head"; // 0x31f PushS
	UnlookAsync(var_211_string); // 0x320 Func
}


func_918()
{
	var_49_string = "d7q01"; // 0x397 PushS
	var_50_int = 3; // 0x398 PushI
	SetVariable(var_49_string, var_50_int); // 0x399 Func
	func_1033(); // 0x39c NEW_2
	return 0; // 0x39e Return
}


func_1046(var_65_object)
{
	var_66_object = Obj(); var_67_object = Obj(); // 0x416 PushV
	GetDiaryRoot(var_67_object); // 0x417 Func
	var_68_bool = var_67_object == 0; // 0x419 Not
	if(var_68_bool == 0) goto Label_1056; // 0x41a JumpB
	var_69_string = "Can't retrieve diary root"; // 0x41b PushS
	Trace(var_69_string); // 0x41c Func
	var_65_object = 0; // 0x41e MovB
	return 2; // 0x41f Return
	
Label_1056:
	var_65_object = var_67_object; // 0x420 Mov
	return 2; // 0x421 Return
}


func_927(var_11_object)
{
	var_13_string = "mreport is given"; // 0x3a0 PushS
	Trace(var_13_string); // 0x3a1 Func
	var_14_object = Obj(); var_15_string = ""; var_16_int = 0; // 0x3a3 PushV
	var_14_object = var_11_object; // 0x3a4 Mov
	var_15_string = "d7q01_mreport"; // 0x3a5 MovS
	var_16_int = 1; // 0x3a6 MovI
	func_887(var_14_object, var_15_string, var_16_int); // 0x3a7 NEW_2
	return 0; // 0x3a9 Return
}


func_803(var_119_string)
{
	var_120_bool = 0; var_121_float = 0; var_122_float = 0; var_123_bool = 0; var_124_float = 0; var_125_float = 0; // 0x323 PushV
	lshHasAnimation(var_123_bool, var_119_string); // 0x324 Func
	var_126_bool = var_123_bool; // 0x326 Push
	if(var_126_bool == 0) goto Label_814; // 0x327 JumpB
	lshGetAnimTimes(var_119_string, var_124_float, var_125_float); // 0x328 Func
	var_127_bool = 0; // 0x32a PushB
	lshPlayAnimation(var_124_float, var_125_float, var_127_bool); // 0x32b Func
	goto Label_818; // 0x32d Jump
	
Label_818:
	return 6; // 0x332 Return
	
Label_814:
	var_128_string = "Can't find lsh animation : "; // 0x32e PushS
	var_129_int = var_128_string + var_119_string; // 0x32f Add
	Trace(var_129_int); // 0x330 Func
}


func_1059(var_56_bool, var_57_object, var_58_int)
{
	var_59_object = Obj(); var_60_object = Obj(); var_61_int = 0; var_62_object = Obj(); var_63_object = Obj(); var_64_int = 0; // 0x423 PushV
	var_65_object = Obj(); // 0x424 PushV
	func_1046(var_65_object); // 0x425 NEW_2
	var_62_object = var_65_object; // 0x426 Mov
	Find(var_58_int, var_63_object); // 0x428 ObjFunc
	var_70_bool = var_63_object == 0; // 0x42a Not
	if(var_70_bool == 0) goto Label_1074; // 0x42b JumpB
	var_71_string = "Can't find diary parent with id: "; // 0x42c PushS
	var_72_int = var_71_string + var_58_int; // 0x42d Add
	Trace(var_72_int); // 0x42e Func
	var_56_bool = 0; // 0x430 MovB
	return 6; // 0x431 Return
	
Label_1074:
	AddChild(var_57_object); // 0x432 ObjFunc
	var_73_int = 7; // 0x434 PushI
	SendWorldWndMessage(var_73_int); // 0x435 Func
	GetCategory(var_64_int); // 0x437 ObjFunc
	SetDiarySection(var_64_int); // 0x439 Func
	var_56_bool = 0; // 0x43b MovB
	return 6; // 0x43c Return
}


func_938()
{
	var_94_string = "ood7MBirdmask1"; // 0x3ab PushS
	var_95_int = 1; // 0x3ac PushI
	SetVariable(var_94_string, var_95_int); // 0x3ad Func
	return 0; // 0x3af Return
}


func_944()
{
	var_76_bool = 0; var_77_string = ""; var_78_string = ""; // 0x3b1 PushV
	var_77_string = "quest_d7_01"; // 0x3b2 MovS
	var_78_string = "sobor_teleport"; // 0x3b3 MovS
	func_900(var_76_bool, var_77_string, var_78_string); // 0x3b4 NEW_2
	return 0; // 0x3b6 Return
}


func_819(var_100_string, var_101_bool)
{
	var_104_bool = 0; var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_float = 0; var_109_float = 0; // 0x333 PushV
	lshHasAnimation(var_107_bool, var_100_string); // 0x334 Func
	var_110_bool = var_107_bool; // 0x336 Push
	if(var_110_bool == 0) goto Label_829; // 0x337 JumpB
	lshGetAnimTimes(var_100_string, var_108_float, var_109_float); // 0x338 Func
	lshPlayAnimation(var_108_float, var_109_float, var_101_bool); // 0x33a Func
	goto Label_833; // 0x33c Jump
	
Label_833:
	return 6; // 0x341 Return
	
Label_829:
	var_111_string = "Can't find lsh animation : "; // 0x33d PushS
	var_112_int = var_111_string + var_100_string; // 0x33e Add
	Trace(var_112_int); // 0x33f Func
}


func_951(var_136_bool)
{
	var_138_int = 0; var_139_string = ""; // 0x3b8 PushV
	var_139_string = "d7q01"; // 0x3b9 MovS
	func_851(var_138_int, var_139_string); // 0x3ba NEW_2
	var_140_int = 2; // 0x3bc PushI
	var_141_bool = var_138_int == var_140_int; // 0x3bd Eq
	if(var_141_bool == 0) goto Label_961; // 0x3be JumpB
	var_136_bool = 1; // 0x3bf MovB
	return 0; // 0x3c0 Return
	
Label_961:
	var_136_bool = 0; // 0x3c1 MovB
	return 0; // 0x3c2 Return
}


func_1087(var_68_int)
{
	var_69_int = 0; var_70_int = 0; // 0x43f PushV
	var_71_string = "branch"; // 0x440 PushS
	GetVariable(var_71_string, var_70_int); // 0x441 Func
	var_72_int = 0; // 0x443 PushI
	var_73_bool = var_70_int == var_72_int; // 0x444 Eq
	if(var_73_bool == 0) goto Label_1097; // 0x445 JumpB
	var_68_int = 1; // 0x446 MovI
	return 2; // 0x447 Return
	
Label_1097:
	var_74_int = 1; // 0x449 PushI
	var_75_bool = var_70_int == var_74_int; // 0x44a Eq
	if(var_75_bool == 0) goto Label_1102; // 0x44b JumpB
	var_68_int = 2; // 0x44c MovI
	return 2; // 0x44d Return
	
Label_1102:
	var_68_int = 3; // 0x44e MovI
	return 2; // 0x44f Return
}


func_834()
{
	var_8_bool = 0; // 0x342 PushV
	func_1112(var_8_bool); // 0x343 NEW_2
	if(var_8_bool == 0) goto Label_840; // 0x345 JumpB
	lshStopSpeech(); // 0x346 Func
	
Label_840:
	return 0; // 0x348 Return
}


func_963(var_142_bool, var_143_object)
{
	var_144_bool = 0; var_145_object = Obj(); // 0x3c4 PushV
	var_145_object = var_143_object; // 0x3c5 Mov
	func_985(var_145_object); // 0x3c6 NEW_2
	if(var_144_bool == 0) goto Label_971; // 0x3c8 JumpB
	var_142_bool = 1; // 0x3c9 MovB
	return 0; // 0x3ca Return
	
Label_971:
	var_142_bool = 0; // 0x3cb MovB
	return 0; // 0x3cc Return
}


func_841(var_44_cvector, var_45_cvector)
{
	var_47_float = 0; var_48_float = 0; // 0x349 PushV
	var_49_int = var_45_cvector | var_45_cvector; // 0x34a Or
	var_48_float = sqrt(var_49_int); // 0x34b Sqrt2
	var_50_float = 0.0; // 0x34c PushF
	var_51_bool = var_48_float < var_50_float; // 0x34d LT
	if(var_51_bool == 0) goto Label_849; // 0x34e JumpB
	var_44_cvector = CVector(0.0, 0.0, 0.0); // 0x34f MovV
	return 2; // 0x350 Return
	
Label_849:
	var_44_cvector = var_45_cvector / var_45_cvector; // 0x351 Div2
	return 2; // 0x352 Return
}


func_74(var_0_object, var_1_object, var_2_object, var_3_string, var_77_object, var_78_object)
{
	var_0_object = var_78_object; // 0x4b TMov
	var_1_object = var_77_object; // 0x4c TMov
	var_3_string = 0; // 0x4d TMovB
	var_83_int = 1; // 0x4e PushI
	if(var_83_int == 0) goto Label_176; // 0x4f JumpB
	var_84_bool = 0; var_85_object = Obj(); // 0x50 PushV
	var_85_object = var_1_object; // 0x51 MovT
	func_973(var_85_object); // 0x52 NEW_2
	if(var_84_bool == 0) goto Label_105; // 0x54 JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x55 PushV
	var_92_object = var_1_object; // 0x56 MovT
	var_93_object = var_0_object; // 0x57 MovT
	func_938(); // 0x58 NEW_2
	var_96_string = ""; // 0x5a PushV
	var_96_string = "Neutral"; // 0x5b MovS
	func_206(var_78_object, var_96_string); // 0x5c NEW_2
	var_113_int = 513212; // 0x5e PushI
	SetMessage(var_113_int); // 0x5f TObjFunc
	ClearReplies(); // 0x61 TObjFunc
	var_114_int = 513213; // 0x63 PushI
	var_115_int = 14437; // 0x64 PushI
	var_116_int = 14436; // 0x65 PushI
	AddReply(var_114_int, var_115_int, var_116_int); // 0x66 TObjFunc
	goto Label_176; // 0x68 Jump
	
Label_176:
	var_117_bool = 0; // 0xb0 PushV
	func_1112(var_117_bool); // 0xb1 NEW_2
	if(var_117_bool == 0) goto Label_191; // 0xb3 JumpB
	
Label_180:
	lshWaitForAnimEnd(); // 0xb4 Func
	var_118_string = var_3_string; // 0xb6 PushT
	if(var_118_string == 0) goto Label_185; // 0xb7 JumpB
	goto Label_190; // 0xb8 Jump
	
Label_190:
	goto Label_205; // 0xbe Jump
	
Label_205:
	return 0; // 0xcd Return
	
Label_185:
	var_119_string = ""; // 0xb9 PushV
	var_119_string = var_2_object; // 0xba MovT
	func_803(var_119_string); // 0xbb NEW_2
	goto Label_180; // 0xbd Jump
	
Label_191:
	var_130_string = "all"; // 0xbf PushS
	var_131_string = "idle"; // 0xc0 PushS
	PlayAnimation(var_130_string, var_131_string); // 0xc1 Func
	
Label_195:
	WaitForAnimEnd(); // 0xc3 Func
	var_132_string = var_3_string; // 0xc5 PushT
	if(var_132_string == 0) goto Label_200; // 0xc6 JumpB
	goto Label_205; // 0xc7 Jump
	
Label_200:
	var_133_string = "all"; // 0xc8 PushS
	var_134_string = "idle"; // 0xc9 PushS
	PlayAnimation(var_133_string, var_134_string); // 0xca Func
	goto Label_195; // 0xcc Jump
	
Label_105:
	var_135_bool = 0; // 0x69 PushV
	var_135_bool = 0; // 0x6a MovB
	var_136_bool = 0; var_137_object = Obj(); // 0x6b PushV
	var_137_object = var_1_object; // 0x6c MovT
	func_951(var_137_object); // 0x6d NEW_2
	if(var_136_bool == 0) goto Label_118; // 0x6f JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x70 PushV
	var_143_object = var_1_object; // 0x71 MovT
	func_963(var_142_bool, var_143_object); // 0x72 NEW_2
	if(var_142_bool == 0) goto Label_118; // 0x74 JumpB
	var_135_bool = 1; // 0x75 MovB
	
Label_118:
	if(var_135_bool == 0) goto Label_144; // 0x76 JumpB
	var_180_string = ""; // 0x77 PushV
	var_180_string = "Neutral"; // 0x78 MovS
	func_206(var_78_object, var_180_string); // 0x79 NEW_2
	var_181_int = 513216; // 0x7b PushI
	SetMessage(var_181_int); // 0x7c TObjFunc
	ClearReplies(); // 0x7e TObjFunc
	var_182_int = 513217; // 0x80 PushI
	var_183_int = 14441; // 0x81 PushI
	var_184_int = 14440; // 0x82 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x83 TObjFunc
	var_185_int = 513220; // 0x85 PushI
	var_186_int = 14444; // 0x86 PushI
	var_187_int = 14443; // 0x87 PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x88 TObjFunc
	var_188_int = 513224; // 0x8a PushI
	var_189_int = 14441; // 0x8b PushI
	var_190_int = 14447; // 0x8c PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x8d TObjFunc
	goto Label_176; // 0x8f Jump
	
Label_144:
	var_191_bool = 0; var_192_object = Obj(); // 0x90 PushV
	var_192_object = var_1_object; // 0x91 MovT
	func_951(var_192_object); // 0x92 NEW_2
	if(var_191_bool == 0) goto Label_174; // 0x94 JumpB
	var_193_string = ""; // 0x95 PushV
	var_193_string = "Neutral"; // 0x96 MovS
	func_206(var_78_object, var_193_string); // 0x97 NEW_2
	var_194_int = 513231; // 0x99 PushI
	SetMessage(var_194_int); // 0x9a TObjFunc
	ClearReplies(); // 0x9c TObjFunc
	var_195_int = 513232; // 0x9e PushI
	var_196_int = 14456; // 0x9f PushI
	var_197_int = 14455; // 0xa0 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0xa1 TObjFunc
	var_198_int = 513248; // 0xa3 PushI
	var_199_int = 16562; // 0xa4 PushI
	var_200_int = 14473; // 0xa5 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0xa6 TObjFunc
	var_201_int = 513249; // 0xa8 PushI
	var_202_int = -1; // 0xa9 PushI
	var_203_int = 14475; // 0xaa PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0xab TObjFunc
	goto Label_176; // 0xad Jump
	
Label_174:
	return 0; // 0xae Return
}


func_973(var_84_bool)
{
	var_86_int = 0; var_87_string = ""; // 0x3ce PushV
	var_87_string = "ood7MBirdmask1"; // 0x3cf MovS
	func_851(var_86_int, var_87_string); // 0x3d0 NEW_2
	var_90_int = 0; // 0x3d2 PushI
	var_91_bool = var_86_int == var_90_int; // 0x3d3 Eq
	if(var_91_bool == 0) goto Label_983; // 0x3d4 JumpB
	var_84_bool = 1; // 0x3d5 MovB
	return 0; // 0x3d6 Return
	
Label_983:
	var_84_bool = 0; // 0x3d7 MovB
	return 0; // 0x3d8 Return
}


func_718(var_17_bool, var_19_float)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_bool = 0; var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; // 0x2ce PushV
	GetPosition(var_30_cvector); // 0x2cf ObjFunc
	GetEyesHeight(var_29_float); // 0x2d1 ObjFunc
	var_38_float = GetByIndex(var_30_cvector, 1); // 0x2d3 PushE
	var_38_float = var_38_float + var_29_float; // 0x2d4 Add2
	SetByIndex(var_30_cvector, 1) = var_38_float; // 0x2d5 PopE
	GetPosition(var_31_cvector); // 0x2d6 Func
	GetEyesHeight(var_29_float); // 0x2d8 Func
	var_39_float = GetByIndex(var_31_cvector, 1); // 0x2da PushE
	var_39_float = var_39_float + var_29_float; // 0x2db Add2
	SetByIndex(var_31_cvector, 1) = var_39_float; // 0x2dc PopE
	var_32_cvector = var_30_cvector - var_31_cvector; // 0x2dd Sub2
	var_40_float = GetByIndex(var_32_cvector, 1); // 0x2de PushE
	var_40_float = 0; // 0x2df MovI
	SetByIndex(var_32_cvector, 1) = var_40_float; // 0x2e0 PopE
	var_41_int = var_32_cvector | var_32_cvector; // 0x2e1 Or
	var_42_float = sqrt(var_41_int); // 0x2e2 Sqrt
	var_32_cvector = var_32_cvector / var_32_cvector; // 0x2e3 Div2
	var_33_cvector = -var_32_cvector; // 0x2e4 Neg2
	var_43_float = var_32_cvector * var_19_float; // 0x2e5 Mult
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); // 0x2e6 PushV
	var_46_cvector = CVector(0.0, 1.0, 0.0); // 0x2e7 PushVec
	var_45_cvector = var_33_cvector ^ var_46_cvector; // 0x2e8 Xor2
	func_841(var_44_cvector, var_45_cvector); // 0x2e9 NEW_2
	var_52_int = 25; // 0x2eb PushI
	var_53_float = var_44_cvector * var_52_int; // 0x2ec Mult
	var_54_int = var_43_float + var_53_float; // 0x2ed Add
	var_55_cvector = CVector(0.0, 10.0, 0.0); // 0x2ee PushVec
	var_34_cvector = var_54_int - var_55_cvector; // 0x2ef Sub2
	var_35_cvector = var_31_cvector + var_34_cvector; // 0x2f0 Add2
	IsOverrideActive(var_36_bool); // 0x2f1 Func
	var_56_bool = var_36_bool; // 0x2f3 Push
	if(var_56_bool == 0) goto Label_759; // 0x2f4 JumpB
	var_17_bool = 0; // 0x2f5 MovB
	return 18; // 0x2f6 Return
	
Label_759:
	StopWorld(); // 0x2f7 Func
	CameraTransit(var_35_cvector, var_33_cvector); // 0x2f9 Func
	var_57_float = GetByIndex(var_34_cvector, 0); // 0x2fb PushE
	var_58_float = GetByIndex(var_34_cvector, 2); // 0x2fc PushE
	Rotate(var_57_float, var_58_float); // 0x2fd Func
	var_59_bool = 0; // 0x2ff PushV
	func_1112(var_59_bool); // 0x300 NEW_2
	if(var_59_bool == 0) goto Label_772; // 0x302 JumpB
	goto Label_780; // 0x303 Jump
	
Label_780:
	CameraWaitForPlayFinish(); // 0x30c Func
	ResumeWorld(); // 0x30e Func
	var_17_bool = 1; // 0x310 MovB
	return 18; // 0x311 Return
	
Label_772:
	var_60_string = "head"; // 0x304 PushS
	HasAnimationTrack(var_37_bool, var_60_string); // 0x305 Func
	var_61_bool = var_37_bool; // 0x307 Push
	if(var_61_bool == 0) goto Label_780; // 0x308 JumpB
	var_62_string = "head"; // 0x309 PushS
	LookAsyncCamera(var_62_string); // 0x30a Func
}


func_206(var_2_object, var_96_string)
{
	var_97_bool = 0; // 0xcf PushV
	func_1112(var_97_bool); // 0xd0 NEW_2
	var_98_bool = var_97_bool == 0; // 0xd2 Not
	if(var_98_bool == 0) goto Label_213; // 0xd3 JumpB
	return 0; // 0xd4 Return
	
Label_213:
	var_99_bool = var_96_string == var_2_object; // 0xd5 Eq
	if(var_99_bool == 0) goto Label_216; // 0xd6 JumpB
	return 0; // 0xd7 Return
	
Label_216:
	var_100_string = ""; var_101_bool = 0; // 0xd8 PushV
	var_100_string = var_96_string; // 0xd9 Mov
	var_102_string = ""; // 0xda PushS
	var_103_bool = var_96_string == var_102_string; // 0xdb Eq
	if(var_103_bool == 0) goto Label_223; // 0xdc JumpB
	var_101_bool = 0; // 0xdd MovB
	goto Label_224; // 0xde Jump
	
Label_224:
	func_819(var_100_string, var_101_bool); // 0xe0 NEW_2
	var_2_object = var_96_string; // 0xe2 TMov
	return 0; // 0xe3 Return
	
Label_223:
	var_101_bool = 1; // 0xdf MovB
}


func_1104(var_65_int)
{
	var_65_int = 515571; // 0x450 MovI
	return 0; // 0x451 Return
}


func_1106(var_64_int)
{
	var_64_int = 504029; // 0x452 MovI
	return 0; // 0x453 Return
}


func_851(var_86_int, var_87_string)
{
	var_88_int = 0; var_89_int = 0; // 0x353 PushV
	GetVariable(var_87_string, var_89_int); // 0x354 Func
	var_86_int = var_89_int; // 0x356 Mov
	return 2; // 0x357 Return
}


func_1108(var_66_string)
{
	var_66_string = "ui/NPC_bmask.png"; // 0x454 MovS
	return 0; // 0x455 Return
}


func_1110(var_67_string)
{
	var_67_string = "ui/NPC_bmask_b.png"; // 0x456 MovS
	return 0; // 0x457 Return
}


func_1112(var_59_bool)
{
	var_59_bool = 0; // 0x458 MovB
	return 0; // 0x459 Return
}


func_856(var_30_int, var_31_int)
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x358 PushV
	CreateIntVector(var_33_object); // 0x359 Func
	add(var_30_int); // 0x35b ObjFunc
	add(var_31_int); // 0x35d ObjFunc
	var_34_int = 3; // 0x35f PushI
	SendWorldWndMessage(var_34_int, var_33_object); // 0x360 Func
	return 2; // 0x362 Return
}


func_985(var_144_bool)
{
	var_146_int = 0; var_147_int = 0; var_148_int = 0; var_149_bool = 0; var_150_bool = 0; var_151_int = 0; var_152_object = Obj(); var_153_int = 0; var_154_bool = 0; var_155_bool = 0; var_156_int = 0; var_157_int = 0; var_158_int = 0; var_159_bool = 0; var_160_bool = 0; var_161_int = 0; var_162_object = Obj(); var_163_int = 0; var_164_bool = 0; var_165_bool = 0; // 0x3d9 PushV
	var_166_int = 1; // 0x3da PushI
	GetItemCount(var_156_int, var_166_int); // 0x3db ObjFunc
	var_167_string = "bird_mask"; // 0x3dd PushS
	GetInvItemByName(var_157_int, var_167_string); // 0x3de Func
	var_168_string = "bird_balahon"; // 0x3e0 PushS
	GetInvItemByName(var_158_int, var_168_string); // 0x3e1 Func
	var_159_bool = 0; // 0x3e3 MovB
	var_160_bool = 0; // 0x3e4 MovB
	var_161_int = 0; // 0x3e5 MovI
	
Label_998:
	var_169_bool = var_161_int < var_156_int; // 0x3e6 LT
	if(var_169_bool == 0) goto Label_1026; // 0x3e7 JumpB
	var_170_int = 1; // 0x3e8 PushI
	GetItem(var_162_object, var_161_int, var_170_int); // 0x3e9 ObjFunc
	GetItemID(var_163_int); // 0x3eb ObjFunc
	var_171_bool = var_163_int == var_157_int; // 0x3ed Eq
	if(var_171_bool == 0) goto Label_1014; // 0x3ee JumpB
	var_172_int = 1; // 0x3ef PushI
	IsItemSelected(var_164_bool, var_161_int, var_172_int); // 0x3f0 ObjFunc
	var_173_bool = var_164_bool; // 0x3f2 Push
	if(var_173_bool == 0) goto Label_1013; // 0x3f3 JumpB
	var_159_bool = 1; // 0x3f4 MovB
	
Label_1013:
	goto Label_1022; // 0x3f5 Jump
	
Label_1022:
	var_162_object = 0; // 0x3fe SetNull
	var_174_int = 1; // 0x3ff PushI
	var_161_int = var_161_int + var_174_int; // 0x400 Add2
	goto Label_998; // 0x401 Jump
	
Label_1014:
	var_175_bool = var_163_int == var_158_int; // 0x3f6 Eq
	if(var_175_bool == 0) goto Label_1022; // 0x3f7 JumpB
	var_176_int = 1; // 0x3f8 PushI
	IsItemSelected(var_165_bool, var_161_int, var_176_int); // 0x3f9 ObjFunc
	var_177_bool = var_165_bool; // 0x3fb Push
	if(var_177_bool == 0) goto Label_1022; // 0x3fc JumpB
	var_160_bool = 1; // 0x3fd MovB
	
Label_1026:
	var_144_bool = 0; // 0x402 MovB
	var_178_bool = var_159_bool; // 0x403 Push
	if(var_178_bool == 0) goto Label_1032; // 0x404 JumpB
	var_179_bool = var_160_bool; // 0x405 Push
	if(var_179_bool == 0) goto Label_1032; // 0x406 JumpB
	var_144_bool = 1; // 0x407 MovB
	
Label_1032:
	return 20; // 0x408 Return
}


func_868(var_20_object, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_int = 0; var_27_bool = 0; // 0x364 PushV
	GetItemID(var_25_int); // 0x365 ObjFunc
	var_28_string = "Category"; // 0x367 PushS
	GetInvItemProperty(var_26_int, var_25_int, var_28_string); // 0x368 Func
	AddItem(var_27_bool, var_20_object, var_26_int, var_21_int); // 0x36a ObjFunc
	var_29_bool = var_27_bool == 0; // 0x36c Not
	if(var_29_bool == 0) goto Label_881; // 0x36d JumpB
	DropItems(var_20_object, var_21_int); // 0x36e ObjFunc
	goto Label_886; // 0x370 Jump
	
Label_886:
	return 6; // 0x376 Return
	
Label_881:
	var_30_int = 0; var_31_int = 0; // 0x371 PushV
	var_30_int = var_25_int; // 0x372 Mov
	var_31_int = var_21_int; // 0x373 Mov
	func_856(var_30_int, var_31_int); // 0x374 NEW_2
}


func_887(var_14_object, var_15_string, var_16_int)
{
	var_17_object = Obj(); var_18_object = Obj(); // 0x377 PushV
	CreateInvItem(var_18_object); // 0x378 Func
	SetItemName(var_15_string); // 0x37a ObjFunc
	var_19_object = Obj(); var_20_object = Obj(); var_21_int = 0; // 0x37c PushV
	var_19_object = var_14_object; // 0x37d Mov
	var_20_object = var_18_object; // 0x37e Mov
	var_21_int = var_16_int; // 0x37f Mov
	func_868(var_20_object, var_21_int); // 0x380 NEW_2
	return 2; // 0x382 Return
}


