task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xdc PushI
	if(var_8_int == 0) goto Label_738; // 0xdd JumpB
	func_882(); // 0xdf Call
	var_10_int = 13144; // 0xe1 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xe2 Eq
	if(var_11_bool == 0) goto Label_248; // 0xe3 JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xe4 PushV
	var_12_object = var_1_object; // 0xe5 MovT
	var_13_object = var_0_object; // 0xe6 MovT
	func_932(); // 0xe7 Call
	var_57_object = Obj(); var_58_object = Obj(); // 0xe9 PushV
	var_57_object = var_1_object; // 0xea MovT
	var_58_object = var_0_object; // 0xeb MovT
	func_955(); // 0xec Call
	var_61_object = Obj(); var_62_object = Obj(); // 0xee PushV
	var_61_object = var_1_object; // 0xef MovT
	var_62_object = var_0_object; // 0xf0 MovT
	func_915(var_62_object); // 0xf1 Call
	var_70_object = Obj(); var_71_object = Obj(); // 0xf3 PushV
	var_70_object = var_1_object; // 0xf4 MovT
	var_71_object = var_0_object; // 0xf5 MovT
	func_926(); // 0xf6 Call
	
Label_248:
	var_74_int = 13151; // 0xf8 PushI
	var_75_bool = var_7_bool == var_74_int; // 0xf9 Eq
	if(var_75_bool == 0) goto Label_256; // 0xfa JumpB
	var_76_object = Obj(); var_77_object = Obj(); // 0xfb PushV
	var_76_object = var_1_object; // 0xfc MovT
	var_77_object = var_0_object; // 0xfd MovT
	func_955(); // 0xfe Call
	
Label_256:
	var_78_int = 13661; // 0x100 PushI
	var_79_bool = var_7_bool == var_78_int; // 0x101 Eq
	if(var_79_bool == 0) goto Label_274; // 0x102 JumpB
	var_80_object = Obj(); var_81_object = Obj(); // 0x103 PushV
	var_80_object = var_1_object; // 0x104 MovT
	var_81_object = var_0_object; // 0x105 MovT
	func_932(); // 0x106 Call
	var_82_object = Obj(); var_83_object = Obj(); // 0x108 PushV
	var_82_object = var_1_object; // 0x109 MovT
	var_83_object = var_0_object; // 0x10a MovT
	func_915(var_83_object); // 0x10b Call
	var_84_object = Obj(); var_85_object = Obj(); // 0x10d PushV
	var_84_object = var_1_object; // 0x10e MovT
	var_85_object = var_0_object; // 0x10f MovT
	func_926(); // 0x110 Call
	
Label_274:
	var_86_int = 13170; // 0x112 PushI
	var_87_bool = var_7_bool == var_86_int; // 0x113 Eq
	if(var_87_bool == 0) goto Label_292; // 0x114 JumpB
	var_88_object = Obj(); var_89_object = Obj(); // 0x115 PushV
	var_88_object = var_1_object; // 0x116 MovT
	var_89_object = var_0_object; // 0x117 MovT
	func_1017(); // 0x118 Call
	var_92_object = Obj(); var_93_object = Obj(); // 0x11a PushV
	var_92_object = var_1_object; // 0x11b MovT
	var_93_object = var_0_object; // 0x11c MovT
	func_1023(var_93_object); // 0x11d Call
	var_98_object = Obj(); var_99_object = Obj(); // 0x11f PushV
	var_98_object = var_1_object; // 0x120 MovT
	var_99_object = var_0_object; // 0x121 MovT
	func_926(); // 0x122 Call
	
Label_292:
	var_100_int = 13172; // 0x124 PushI
	var_101_bool = var_7_bool == var_100_int; // 0x125 Eq
	if(var_101_bool == 0) goto Label_305; // 0x126 JumpB
	var_102_object = Obj(); var_103_object = Obj(); // 0x127 PushV
	var_102_object = var_1_object; // 0x128 MovT
	var_103_object = var_0_object; // 0x129 MovT
	func_961(); // 0x12a Call
	var_130_object = Obj(); var_131_object = Obj(); // 0x12c PushV
	var_130_object = var_1_object; // 0x12d MovT
	var_131_object = var_0_object; // 0x12e MovT
	func_1011(); // 0x12f Call
	
Label_305:
	var_134_int = 13133; // 0x131 PushI
	var_135_bool = var_6_int == var_134_int; // 0x132 Eq
	if(var_135_bool == 0) goto Label_410; // 0x133 JumpB
	var_136_bool = 0; // 0x134 PushV
	var_136_bool = 0; // 0x135 MovB
	var_137_bool = 0; var_138_object = Obj(); // 0x136 PushV
	var_138_object = var_1_object; // 0x137 MovT
	func_1034(var_138_object); // 0x138 Call
	if(var_137_bool == 0) goto Label_321; // 0x13a JumpB
	var_145_bool = 0; var_146_object = Obj(); // 0x13b PushV
	var_146_object = var_1_object; // 0x13c MovT
	func_1046(var_146_object); // 0x13d Call
	if(var_145_bool == 0) goto Label_321; // 0x13f JumpB
	var_136_bool = 1; // 0x140 MovB
	
Label_321:
	if(var_136_bool == 0) goto Label_337; // 0x141 JumpB
	var_151_string = ""; // 0x142 PushV
	var_151_string = "Neutral"; // 0x143 MovS
	func_203(var_7_bool, var_151_string); // 0x144 Call
	var_166_int = 11917; // 0x146 PushI
	SetMessage(var_166_int); // 0x147 TObjFunc
	ClearReplies(); // 0x149 TObjFunc
	var_167_int = 11918; // 0x14b PushI
	var_168_int = 13135; // 0x14c PushI
	var_169_int = 13134; // 0x14d PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_170_string = ""; // 0x151 PushV
	var_170_string = "Neutral"; // 0x152 MovS
	func_203(var_7_bool, var_170_string); // 0x153 Call
	var_171_int = 11935; // 0x155 PushI
	SetMessage(var_171_int); // 0x156 TObjFunc
	ClearReplies(); // 0x158 TObjFunc
	var_172_bool = 0; var_173_object = Obj(); // 0x15a PushV
	var_173_object = var_1_object; // 0x15b MovT
	func_1034(var_173_object); // 0x15c Call
	if(var_172_bool == 0) goto Label_356; // 0x15e JumpB
	var_174_int = 12489; // 0x15f PushI
	var_175_int = 13660; // 0x160 PushI
	var_176_int = 13658; // 0x161 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x162 TObjFunc
	
Label_356:
	var_177_bool = 0; // 0x164 PushV
	var_177_bool = 0; // 0x165 MovB
	var_178_bool = 0; // 0x166 PushV
	var_178_bool = 0; // 0x167 MovB
	var_179_bool = 0; var_180_object = Obj(); // 0x168 PushV
	var_180_object = var_1_object; // 0x169 MovT
	func_1058(var_180_object); // 0x16a Call
	if(var_179_bool == 0) goto Label_372; // 0x16c JumpB
	var_185_bool = 0; var_186_object = Obj(); // 0x16d PushV
	var_186_object = var_1_object; // 0x16e MovT
	func_1070(var_186_object); // 0x16f Call
	var_191_bool = var_185_bool == 0; // 0x171 Not
	if(var_191_bool == 0) goto Label_372; // 0x172 JumpB
	var_178_bool = 1; // 0x173 MovB
	
Label_372:
	if(var_178_bool == 0) goto Label_379; // 0x174 JumpB
	var_192_bool = 0; var_193_object = Obj(); // 0x175 PushV
	var_193_object = var_1_object; // 0x176 MovT
	func_1094(var_193_object); // 0x177 Call
	if(var_192_bool == 0) goto Label_379; // 0x179 JumpB
	var_177_bool = 1; // 0x17a MovB
	
Label_379:
	if(var_177_bool == 0) goto Label_385; // 0x17b JumpB
	var_198_int = 11936; // 0x17c PushI
	var_199_int = 13155; // 0x17d PushI
	var_200_int = 13153; // 0x17e PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x17f TObjFunc
	
Label_385:
	var_201_bool = 0; // 0x181 PushV
	var_201_bool = 0; // 0x182 MovB
	var_202_bool = 0; var_203_object = Obj(); // 0x183 PushV
	var_203_object = var_1_object; // 0x184 MovT
	func_1070(var_203_object); // 0x185 Call
	if(var_202_bool == 0) goto Label_398; // 0x187 JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x188 PushV
	var_205_object = var_1_object; // 0x189 MovT
	func_1082(var_205_object); // 0x18a Call
	if(var_204_bool == 0) goto Label_398; // 0x18c JumpB
	var_201_bool = 1; // 0x18d MovB
	
Label_398:
	if(var_201_bool == 0) goto Label_404; // 0x18e JumpB
	var_210_int = 11937; // 0x18f PushI
	var_211_int = 13156; // 0x190 PushI
	var_212_int = 13154; // 0x191 PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x192 TObjFunc
	
Label_404:
	var_213_int = 12490; // 0x194 PushI
	var_214_int = -1; // 0x195 PushI
	var_215_int = 13659; // 0x196 PushI
	AddReply(var_213_int, var_214_int, var_215_int); // 0x197 TObjFunc
	return 0; // 0x199 Return
	
Label_410:
	var_216_int = 13156; // 0x19a PushI
	var_217_bool = var_6_int == var_216_int; // 0x19b Eq
	if(var_217_bool == 0) goto Label_428; // 0x19c JumpB
	var_218_string = ""; // 0x19d PushV
	var_218_string = "Neutral"; // 0x19e MovS
	func_203(var_7_bool, var_218_string); // 0x19f Call
	var_219_int = 11939; // 0x1a1 PushI
	SetMessage(var_219_int); // 0x1a2 TObjFunc
	ClearReplies(); // 0x1a4 TObjFunc
	var_220_int = 11947; // 0x1a6 PushI
	var_221_int = 13165; // 0x1a7 PushI
	var_222_int = 13164; // 0x1a8 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1a9 TObjFunc
	return 0; // 0x1ab Return
	
Label_428:
	var_223_int = 13165; // 0x1ac PushI
	var_224_bool = var_6_int == var_223_int; // 0x1ad Eq
	if(var_224_bool == 0) goto Label_446; // 0x1ae JumpB
	var_225_string = ""; // 0x1af PushV
	var_225_string = "Neutral"; // 0x1b0 MovS
	func_203(var_7_bool, var_225_string); // 0x1b1 Call
	var_226_int = 11948; // 0x1b3 PushI
	SetMessage(var_226_int); // 0x1b4 TObjFunc
	ClearReplies(); // 0x1b6 TObjFunc
	var_227_int = 11949; // 0x1b8 PushI
	var_228_int = 13167; // 0x1b9 PushI
	var_229_int = 13166; // 0x1ba PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1bb TObjFunc
	return 0; // 0x1bd Return
	
Label_446:
	var_230_int = 13167; // 0x1be PushI
	var_231_bool = var_6_int == var_230_int; // 0x1bf Eq
	if(var_231_bool == 0) goto Label_464; // 0x1c0 JumpB
	var_232_string = ""; // 0x1c1 PushV
	var_232_string = "Neutral"; // 0x1c2 MovS
	func_203(var_7_bool, var_232_string); // 0x1c3 Call
	var_233_int = 11950; // 0x1c5 PushI
	SetMessage(var_233_int); // 0x1c6 TObjFunc
	ClearReplies(); // 0x1c8 TObjFunc
	var_234_int = 11951; // 0x1ca PushI
	var_235_int = 13171; // 0x1cb PushI
	var_236_int = 13168; // 0x1cc PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x1cd TObjFunc
	return 0; // 0x1cf Return
	
Label_464:
	var_237_int = 13171; // 0x1d0 PushI
	var_238_bool = var_6_int == var_237_int; // 0x1d1 Eq
	if(var_238_bool == 0) goto Label_482; // 0x1d2 JumpB
	var_239_string = ""; // 0x1d3 PushV
	var_239_string = "Neutral"; // 0x1d4 MovS
	func_203(var_7_bool, var_239_string); // 0x1d5 Call
	var_240_int = 11954; // 0x1d7 PushI
	SetMessage(var_240_int); // 0x1d8 TObjFunc
	ClearReplies(); // 0x1da TObjFunc
	var_241_int = 11955; // 0x1dc PushI
	var_242_int = -1; // 0x1dd PushI
	var_243_int = 13172; // 0x1de PushI
	AddReply(var_241_int, var_242_int, var_243_int); // 0x1df TObjFunc
	return 0; // 0x1e1 Return
	
Label_482:
	var_244_int = 13155; // 0x1e2 PushI
	var_245_bool = var_6_int == var_244_int; // 0x1e3 Eq
	if(var_245_bool == 0) goto Label_500; // 0x1e4 JumpB
	var_246_string = ""; // 0x1e5 PushV
	var_246_string = "Neutral"; // 0x1e6 MovS
	func_203(var_7_bool, var_246_string); // 0x1e7 Call
	var_247_int = 11938; // 0x1e9 PushI
	SetMessage(var_247_int); // 0x1ea TObjFunc
	ClearReplies(); // 0x1ec TObjFunc
	var_248_int = 11940; // 0x1ee PushI
	var_249_int = 13158; // 0x1ef PushI
	var_250_int = 13157; // 0x1f0 PushI
	AddReply(var_248_int, var_249_int, var_250_int); // 0x1f1 TObjFunc
	return 0; // 0x1f3 Return
	
Label_500:
	var_251_int = 13158; // 0x1f4 PushI
	var_252_bool = var_6_int == var_251_int; // 0x1f5 Eq
	if(var_252_bool == 0) goto Label_518; // 0x1f6 JumpB
	var_253_string = ""; // 0x1f7 PushV
	var_253_string = "Neutral"; // 0x1f8 MovS
	func_203(var_7_bool, var_253_string); // 0x1f9 Call
	var_254_int = 11941; // 0x1fb PushI
	SetMessage(var_254_int); // 0x1fc TObjFunc
	ClearReplies(); // 0x1fe TObjFunc
	var_255_int = 11942; // 0x200 PushI
	var_256_int = 13160; // 0x201 PushI
	var_257_int = 13159; // 0x202 PushI
	AddReply(var_255_int, var_256_int, var_257_int); // 0x203 TObjFunc
	return 0; // 0x205 Return
	
Label_518:
	var_258_int = 13160; // 0x206 PushI
	var_259_bool = var_6_int == var_258_int; // 0x207 Eq
	if(var_259_bool == 0) goto Label_536; // 0x208 JumpB
	var_260_string = ""; // 0x209 PushV
	var_260_string = "Neutral"; // 0x20a MovS
	func_203(var_7_bool, var_260_string); // 0x20b Call
	var_261_int = 11943; // 0x20d PushI
	SetMessage(var_261_int); // 0x20e TObjFunc
	ClearReplies(); // 0x210 TObjFunc
	var_262_int = 11944; // 0x212 PushI
	var_263_int = 13162; // 0x213 PushI
	var_264_int = 13161; // 0x214 PushI
	AddReply(var_262_int, var_263_int, var_264_int); // 0x215 TObjFunc
	return 0; // 0x217 Return
	
Label_536:
	var_265_int = 13162; // 0x218 PushI
	var_266_bool = var_6_int == var_265_int; // 0x219 Eq
	if(var_266_bool == 0) goto Label_554; // 0x21a JumpB
	var_267_string = ""; // 0x21b PushV
	var_267_string = "Neutral"; // 0x21c MovS
	func_203(var_7_bool, var_267_string); // 0x21d Call
	var_268_int = 11945; // 0x21f PushI
	SetMessage(var_268_int); // 0x220 TObjFunc
	ClearReplies(); // 0x222 TObjFunc
	var_269_int = 11946; // 0x224 PushI
	var_270_int = 13169; // 0x225 PushI
	var_271_int = 13163; // 0x226 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x227 TObjFunc
	return 0; // 0x229 Return
	
Label_554:
	var_272_int = 13169; // 0x22a PushI
	var_273_bool = var_6_int == var_272_int; // 0x22b Eq
	if(var_273_bool == 0) goto Label_572; // 0x22c JumpB
	var_274_string = ""; // 0x22d PushV
	var_274_string = "Neutral"; // 0x22e MovS
	func_203(var_7_bool, var_274_string); // 0x22f Call
	var_275_int = 11952; // 0x231 PushI
	SetMessage(var_275_int); // 0x232 TObjFunc
	ClearReplies(); // 0x234 TObjFunc
	var_276_int = 11953; // 0x236 PushI
	var_277_int = -1; // 0x237 PushI
	var_278_int = 13170; // 0x238 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x239 TObjFunc
	return 0; // 0x23b Return
	
Label_572:
	var_279_int = 13660; // 0x23c PushI
	var_280_bool = var_6_int == var_279_int; // 0x23d Eq
	if(var_280_bool == 0) goto Label_590; // 0x23e JumpB
	var_281_string = ""; // 0x23f PushV
	var_281_string = "Neutral"; // 0x240 MovS
	func_203(var_7_bool, var_281_string); // 0x241 Call
	var_282_int = 12491; // 0x243 PushI
	SetMessage(var_282_int); // 0x244 TObjFunc
	ClearReplies(); // 0x246 TObjFunc
	var_283_int = 12492; // 0x248 PushI
	var_284_int = -1; // 0x249 PushI
	var_285_int = 13661; // 0x24a PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x24b TObjFunc
	return 0; // 0x24d Return
	
Label_590:
	var_286_int = 13135; // 0x24e PushI
	var_287_bool = var_6_int == var_286_int; // 0x24f Eq
	if(var_287_bool == 0) goto Label_608; // 0x250 JumpB
	var_288_string = ""; // 0x251 PushV
	var_288_string = "Neutral"; // 0x252 MovS
	func_203(var_7_bool, var_288_string); // 0x253 Call
	var_289_int = 11919; // 0x255 PushI
	SetMessage(var_289_int); // 0x256 TObjFunc
	ClearReplies(); // 0x258 TObjFunc
	var_290_int = 11920; // 0x25a PushI
	var_291_int = 13137; // 0x25b PushI
	var_292_int = 13136; // 0x25c PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x25d TObjFunc
	return 0; // 0x25f Return
	
Label_608:
	var_293_int = 13137; // 0x260 PushI
	var_294_bool = var_6_int == var_293_int; // 0x261 Eq
	if(var_294_bool == 0) goto Label_631; // 0x262 JumpB
	var_295_string = ""; // 0x263 PushV
	var_295_string = "Neutral"; // 0x264 MovS
	func_203(var_7_bool, var_295_string); // 0x265 Call
	var_296_int = 11921; // 0x267 PushI
	SetMessage(var_296_int); // 0x268 TObjFunc
	ClearReplies(); // 0x26a TObjFunc
	var_297_int = 11924; // 0x26c PushI
	var_298_int = 13141; // 0x26d PushI
	var_299_int = 13140; // 0x26e PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x26f TObjFunc
	var_300_int = 11922; // 0x271 PushI
	var_301_int = 13139; // 0x272 PushI
	var_302_int = 13138; // 0x273 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x274 TObjFunc
	return 0; // 0x276 Return
	
Label_631:
	var_303_int = 13139; // 0x277 PushI
	var_304_bool = var_6_int == var_303_int; // 0x278 Eq
	if(var_304_bool == 0) goto Label_649; // 0x279 JumpB
	var_305_string = ""; // 0x27a PushV
	var_305_string = "Neutral"; // 0x27b MovS
	func_203(var_7_bool, var_305_string); // 0x27c Call
	var_306_int = 11923; // 0x27e PushI
	SetMessage(var_306_int); // 0x27f TObjFunc
	ClearReplies(); // 0x281 TObjFunc
	var_307_int = 11929; // 0x283 PushI
	var_308_int = 13141; // 0x284 PushI
	var_309_int = 13145; // 0x285 PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x286 TObjFunc
	return 0; // 0x288 Return
	
Label_649:
	var_310_int = 13141; // 0x289 PushI
	var_311_bool = var_6_int == var_310_int; // 0x28a Eq
	if(var_311_bool == 0) goto Label_672; // 0x28b JumpB
	var_312_string = ""; // 0x28c PushV
	var_312_string = "Neutral"; // 0x28d MovS
	func_203(var_7_bool, var_312_string); // 0x28e Call
	var_313_int = 11925; // 0x290 PushI
	SetMessage(var_313_int); // 0x291 TObjFunc
	ClearReplies(); // 0x293 TObjFunc
	var_314_int = 11926; // 0x295 PushI
	var_315_int = 13143; // 0x296 PushI
	var_316_int = 13142; // 0x297 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x298 TObjFunc
	var_317_int = 11930; // 0x29a PushI
	var_318_int = 13148; // 0x29b PushI
	var_319_int = 13147; // 0x29c PushI
	AddReply(var_317_int, var_318_int, var_319_int); // 0x29d TObjFunc
	return 0; // 0x29f Return
	
Label_672:
	var_320_int = 13148; // 0x2a0 PushI
	var_321_bool = var_6_int == var_320_int; // 0x2a1 Eq
	if(var_321_bool == 0) goto Label_690; // 0x2a2 JumpB
	var_322_string = ""; // 0x2a3 PushV
	var_322_string = "Neutral"; // 0x2a4 MovS
	func_203(var_7_bool, var_322_string); // 0x2a5 Call
	var_323_int = 11931; // 0x2a7 PushI
	SetMessage(var_323_int); // 0x2a8 TObjFunc
	ClearReplies(); // 0x2aa TObjFunc
	var_324_int = 11932; // 0x2ac PushI
	var_325_int = 13150; // 0x2ad PushI
	var_326_int = 13149; // 0x2ae PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x2af TObjFunc
	return 0; // 0x2b1 Return
	
Label_690:
	var_327_int = 13150; // 0x2b2 PushI
	var_328_bool = var_6_int == var_327_int; // 0x2b3 Eq
	if(var_328_bool == 0) goto Label_708; // 0x2b4 JumpB
	var_329_string = ""; // 0x2b5 PushV
	var_329_string = "Neutral"; // 0x2b6 MovS
	func_203(var_7_bool, var_329_string); // 0x2b7 Call
	var_330_int = 11933; // 0x2b9 PushI
	SetMessage(var_330_int); // 0x2ba TObjFunc
	ClearReplies(); // 0x2bc TObjFunc
	var_331_int = 11934; // 0x2be PushI
	var_332_int = -1; // 0x2bf PushI
	var_333_int = 13151; // 0x2c0 PushI
	AddReply(var_331_int, var_332_int, var_333_int); // 0x2c1 TObjFunc
	return 0; // 0x2c3 Return
	
Label_708:
	var_334_int = 13143; // 0x2c4 PushI
	var_335_bool = var_6_int == var_334_int; // 0x2c5 Eq
	if(var_335_bool == 0) goto Label_726; // 0x2c6 JumpB
	var_336_string = ""; // 0x2c7 PushV
	var_336_string = "Neutral"; // 0x2c8 MovS
	func_203(var_7_bool, var_336_string); // 0x2c9 Call
	var_337_int = 11927; // 0x2cb PushI
	SetMessage(var_337_int); // 0x2cc TObjFunc
	ClearReplies(); // 0x2ce TObjFunc
	var_338_int = 11928; // 0x2d0 PushI
	var_339_int = -1; // 0x2d1 PushI
	var_340_int = 13144; // 0x2d2 PushI
	AddReply(var_338_int, var_339_int, var_340_int); // 0x2d3 TObjFunc
	return 0; // 0x2d5 Return
	
Label_726:
	var_3_string = 1; // 0x2d6 TMovB
	var_341_bool = 0; // 0x2d7 PushV
	func_1218(var_341_bool); // 0x2d8 Call
	if(var_341_bool == 0) goto Label_734; // 0x2da JumpB
	lshStopAnimation(); // 0x2db Func
	goto Label_736; // 0x2dd Jump
	
Label_736:
	return 0; // 0x2e0 Return
	
Label_734:
	StopAnimation(); // 0x2de Func
	
Label_738:
	return 0; // 0x2e2 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x2e4 PushV
	var_8_object = var_6_object; // 0x2e5 Mov
	TaskCall(0); // 0x2e6 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x2e7 Call
	TaskReturn(); // 0x2e8 TaskReturn
	return 0; // 0x2ea Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x2ef PushV
	var_9_string = "cleanup"; // 0x2f0 PushS
	var_10_bool = var_6_string == var_9_string; // 0x2f1 Eq
	if(var_10_bool == 0) goto Label_774; // 0x2f2 JumpB
	var_0_object = 1; // 0x2f3 TMovB
	IsLoaded(var_8_bool); // 0x2f4 Func
	var_11_bool = 0; // 0x2f6 PushV
	var_11_bool = 0; // 0x2f7 MovB
	var_12_bool = var_8_bool == 0; // 0x2f8 Not
	if(var_12_bool == 0) goto Label_767; // 0x2f9 JumpB
	var_13_bool = 0; // 0x2fa PushV
	func_795(var_13_bool); // 0x2fb Call
	if(var_13_bool == 0) goto Label_767; // 0x2fd JumpB
	var_11_bool = 1; // 0x2fe MovB
	
Label_767:
	if(var_11_bool == 0) goto Label_773; // 0x2ff JumpB
	var_14_object = Obj(); // 0x300 PushV
	func_889(var_14_object); // 0x301 Call
	RemoveActor(var_14_object); // 0x303 Func
	
Label_773:
	goto Label_778; // 0x305 Jump
	
Label_778:
	return 2; // 0x30a Return
	
Label_774:
	var_17_string = "restore"; // 0x306 PushS
	var_18_bool = var_6_string == var_17_string; // 0x307 Eq
	if(var_18_bool == 0) goto Label_778; // 0x308 JumpB
	var_0_object = 0; // 0x309 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x30b PushV
	var_6_bool = 0; // 0x30c MovB
	var_7_object = var_0_object; // 0x30d PushT
	if(var_7_object == 0) goto Label_788; // 0x30e JumpB
	var_8_bool = 0; // 0x30f PushV
	func_795(var_8_bool); // 0x310 Call
	if(var_8_bool == 0) goto Label_788; // 0x312 JumpB
	var_6_bool = 1; // 0x313 MovB
	
Label_788:
	if(var_6_bool == 0) goto Label_794; // 0x314 JumpB
	var_9_object = Obj(); // 0x315 PushV
	func_889(var_9_object); // 0x316 Call
	RemoveActor(var_9_object); // 0x318 Func
	
Label_794:
	return 0; // 0x31a Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_747:
	Hold(); // 0x2eb Func
	goto Label_747; // 0x2ed Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_19_object = var_8_object; // 0x3 Mov
	func_804(var_19_object); // 0x4 Call
	var_58_bool = var_18_bool == 0; // 0x6 Not
	if(var_58_bool == 0) goto Label_10; // 0x7 JumpB
	var_7_int = -2; // 0x8 MovI
	return 8; // 0x9 Return
	
Label_10:
	CreateDialog(var_14_object); // 0xa Func
	var_59_int = 0; // 0xc PushV
	func_1214(var_59_int); // 0xd Call
	SetNPCName(var_59_int); // 0xf ObjFunc
	var_60_string = ""; // 0x11 PushV
	func_1216(var_60_string); // 0x12 Call
	SetPhoto(var_60_string); // 0x14 ObjFunc
	var_61_int = 0; // 0x16 PushV
	func_1165(var_61_int); // 0x17 Call
	SetPlayerName(var_61_int); // 0x19 ObjFunc
	var_16_int = -1; // 0x1b MovI
	IsOverrideActive(var_15_bool); // 0x1c Func
	var_69_bool = var_15_bool; // 0x1e Push
	if(var_69_bool == 0) goto Label_34; // 0x1f JumpB
	var_7_int = -2; // 0x20 MovI
	return 8; // 0x21 Return
	
Label_34:
	DoDialog(var_14_object); // 0x22 Func
	var_70_object = Obj(); var_71_object = Obj(); // 0x24 PushV
	var_70_object = var_8_object; // 0x25 Mov
	var_71_object = var_14_object; // 0x26 Mov
	TaskCall(1); // 0x27 TaskCall
	func_63(var_72_object, var_73_object, var_74_string, var_75_bool, var_70_object, var_71_object); // 0x28 Call
	TaskReturn(); // 0x29 TaskReturn
	IsDialogEnd(var_17_bool); // 0x2b ObjFunc
	
Label_45:
	var_165_bool = var_17_bool == 0; // 0x2d Not
	if(var_165_bool == 0) goto Label_52; // 0x2e JumpB
	sync(); // 0x2f Func
	IsDialogEnd(var_17_bool); // 0x31 ObjFunc
	goto Label_45; // 0x33 Jump
	
Label_52:
	var_166_object = Obj(); // 0x34 PushV
	var_166_object = var_8_object; // 0x35 Mov
	func_860(); // 0x36 Call
	StopDialog(var_14_object); // 0x38 Func
	GetReturnValue(var_16_int); // 0x3a ObjFunc
	var_7_int = var_16_int; // 0x3c Mov
	return 8; // 0x3d Return
}


func_905(var_80_int, var_81_string)
{
	var_82_int = 0; var_83_int = 0; // 0x389 PushV
	GetVariable(var_81_string, var_83_int); // 0x38a Func
	var_80_int = var_83_int; // 0x38c Mov
	return 2; // 0x38d Return
}


func_1034(var_78_bool)
{
	var_80_int = 0; var_81_string = ""; // 0x40b PushV
	var_81_string = "d5q02"; // 0x40c MovS
	func_905(var_80_int, var_81_string); // 0x40d Call
	var_84_int = 1; // 0x40f PushI
	var_85_bool = var_80_int == var_84_int; // 0x410 Eq
	if(var_85_bool == 0) goto Label_1044; // 0x411 JumpB
	var_78_bool = 1; // 0x412 MovB
	return 0; // 0x413 Return
	
Label_1044:
	var_78_bool = 0; // 0x414 MovB
	return 0; // 0x415 Return
}


func_1165(var_61_int)
{
	var_62_int = 0; var_63_int = 0; // 0x48d PushV
	var_64_string = "player"; // 0x48e PushS
	GetVariable(var_64_string, var_63_int); // 0x48f Func
	var_65_int = 0; // 0x491 PushI
	var_66_bool = var_63_int == var_65_int; // 0x492 Eq
	if(var_66_bool == 0) goto Label_1175; // 0x493 JumpB
	var_61_int = 200001; // 0x494 MovI
	return 2; // 0x495 Return
	
Label_1175:
	var_67_int = 1; // 0x497 PushI
	var_68_bool = var_63_int == var_67_int; // 0x498 Eq
	if(var_68_bool == 0) goto Label_1180; // 0x499 JumpB
	var_61_int = 200002; // 0x49a MovI
	return 2; // 0x49b Return
	
Label_1180:
	var_61_int = 200003; // 0x49c MovI
	return 2; // 0x49d Return
}


func_910(var_29_float)
{
	var_30_float = 0; var_31_float = 0; // 0x38e PushV
	GetGameTime(var_31_float); // 0x38f Func
	var_29_float = var_31_float; // 0x391 Mov
	return 2; // 0x392 Return
}


func_915(var_61_object)
{
	var_63_string = "money10000 is given"; // 0x394 PushS
	Trace(var_63_string); // 0x395 Func
	var_64_object = Obj(); var_65_string = ""; var_66_int = 0; // 0x397 PushV
	var_64_object = var_61_object; // 0x398 Mov
	var_65_string = "money"; // 0x399 MovS
	var_66_int = 10000; // 0x39a MovI
	func_797(var_65_string, var_66_int); // 0x39b Call
	return 0; // 0x39d Return
}


func_1046(var_86_bool)
{
	var_88_int = 0; var_89_string = ""; // 0x417 PushV
	var_89_string = "ood5Gorbun1"; // 0x418 MovS
	func_905(var_88_int, var_89_string); // 0x419 Call
	var_90_int = 0; // 0x41b PushI
	var_91_bool = var_88_int == var_90_int; // 0x41c Eq
	if(var_91_bool == 0) goto Label_1056; // 0x41d JumpB
	var_86_bool = 1; // 0x41e MovB
	return 0; // 0x41f Return
	
Label_1056:
	var_86_bool = 0; // 0x420 MovB
	return 0; // 0x421 Return
}


func_795(var_8_bool)
{
	var_8_bool = 1; // 0x31b MovB
	return 0; // 0x31c Return
}


func_1023(var_92_object)
{
	var_94_string = "money 50000 is given"; // 0x400 PushS
	Trace(var_94_string); // 0x401 Func
	var_95_object = Obj(); var_96_string = ""; var_97_int = 0; // 0x403 PushV
	var_95_object = var_92_object; // 0x404 Mov
	var_96_string = "money"; // 0x405 MovS
	var_97_int = 50000; // 0x406 MovI
	func_797(var_96_string, var_97_int); // 0x407 Call
	return 0; // 0x409 Return
}


func_797(var_65_string, var_66_int)
{
	var_67_int = 0; var_68_int = 0; // 0x31d PushV
	GetProperty(var_65_string, var_68_int); // 0x31e ObjFunc
	var_69_int = var_68_int + var_66_int; // 0x320 Add
	SetProperty(var_65_string, var_69_int); // 0x321 ObjFunc
	return 2; // 0x323 Return
}


func_1182()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x49e PushV
	var_34_string = "Adding diary entry"; // 0x49f PushS
	Trace(var_34_string); // 0x4a0 Func
	var_35_int = 150; // 0x4a2 PushI
	var_36_int = 2; // 0x4a3 PushI
	var_37_int = 15356; // 0x4a4 PushI
	CreateDiaryEntry(var_33_object, var_35_int, var_36_int, var_37_int); // 0x4a5 Func
	var_38_bool = 0; var_39_object = Obj(); var_40_int = 0; // 0x4a7 PushV
	var_39_object = var_33_object; // 0x4a8 Mov
	var_40_int = 148; // 0x4a9 MovI
	func_1119(var_38_bool, var_39_object, var_40_int); // 0x4aa Call
	return 2; // 0x4ac Return
}


func_926()
{
	var_72_string = "playsound"; // 0x39f PushS
	var_73_string = "givemoney"; // 0x3a0 PushS
	TriggerWorld(var_72_string, var_73_string); // 0x3a1 Func
	return 0; // 0x3a3 Return
}


func_1058(var_128_bool)
{
	var_130_int = 0; var_131_string = ""; // 0x423 PushV
	var_131_string = "d5q02"; // 0x424 MovS
	func_905(var_130_int, var_131_string); // 0x425 Call
	var_132_int = 4; // 0x427 PushI
	var_133_bool = var_130_int == var_132_int; // 0x428 Eq
	if(var_133_bool == 0) goto Label_1068; // 0x429 JumpB
	var_128_bool = 1; // 0x42a MovB
	return 0; // 0x42b Return
	
Label_1068:
	var_128_bool = 0; // 0x42c MovB
	return 0; // 0x42d Return
}


func_804(var_18_bool)
{
	var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0; // 0x324 PushV
	GetPosition(var_29_cvector); // 0x325 ObjFunc
	GetEyesHeight(var_28_float); // 0x327 ObjFunc
	var_36_float = GetByIndex(var_29_cvector, 1); // 0x329 PushE
	var_36_float = var_36_float + var_28_float; // 0x32a Add2
	SetByIndex(var_29_cvector, 1) = var_36_float; // 0x32b PopE
	GetPosition(var_30_cvector); // 0x32c Func
	GetEyesHeight(var_28_float); // 0x32e Func
	var_37_float = GetByIndex(var_30_cvector, 1); // 0x330 PushE
	var_37_float = var_37_float + var_28_float; // 0x331 Add2
	SetByIndex(var_30_cvector, 1) = var_37_float; // 0x332 PopE
	var_31_cvector = var_29_cvector - var_30_cvector; // 0x333 Sub2
	var_38_float = GetByIndex(var_31_cvector, 1); // 0x334 PushE
	var_38_float = 0; // 0x335 MovI
	SetByIndex(var_31_cvector, 1) = var_38_float; // 0x336 PopE
	var_39_int = var_31_cvector | var_31_cvector; // 0x337 Or
	var_40_float = sqrt(var_39_int); // 0x338 Sqrt
	var_31_cvector = var_31_cvector / var_31_cvector; // 0x339 Div2
	var_32_cvector = -var_31_cvector; // 0x33a Neg2
	var_41_int = 70; // 0x33b PushI
	var_42_float = var_31_cvector * var_41_int; // 0x33c Mult
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); // 0x33d PushV
	var_45_cvector = CVector(0.0, 1.0, 0.0); // 0x33e PushVec
	var_44_cvector = var_32_cvector ^ var_45_cvector; // 0x33f Xor2
	func_895(var_43_cvector, var_44_cvector); // 0x340 Call
	var_51_int = 25; // 0x342 PushI
	var_52_float = var_43_cvector * var_51_int; // 0x343 Mult
	var_53_int = var_42_float + var_52_float; // 0x344 Add
	var_54_cvector = CVector(0.0, 10.0, 0.0); // 0x345 PushVec
	var_33_cvector = var_53_int - var_54_cvector; // 0x346 Sub2
	var_34_cvector = var_30_cvector + var_33_cvector; // 0x347 Add2
	IsOverrideActive(var_35_bool); // 0x348 Func
	var_55_bool = var_35_bool; // 0x34a Push
	if(var_55_bool == 0) goto Label_846; // 0x34b JumpB
	var_18_bool = 0; // 0x34c MovB
	return 16; // 0x34d Return
	
Label_846:
	StopWorld(); // 0x34e Func
	CameraTransit(var_34_cvector, var_32_cvector); // 0x350 Func
	var_56_float = GetByIndex(var_33_cvector, 0); // 0x352 PushE
	var_57_float = GetByIndex(var_33_cvector, 2); // 0x353 PushE
	Rotate(var_56_float, var_57_float); // 0x354 Func
	CameraWaitForPlayFinish(); // 0x356 Func
	ResumeWorld(); // 0x358 Func
	var_18_bool = 1; // 0x35a MovB
	return 16; // 0x35b Return
}


func_932()
{
	var_14_object = Obj(); var_15_object = Obj(); // 0x3a4 PushV
	var_16_string = "d5q02"; // 0x3a5 PushS
	var_17_int = 2; // 0x3a6 PushI
	SetVariable(var_16_string, var_17_int); // 0x3a7 Func
	var_18_object = Obj(); // 0x3a9 PushV
	func_1148(var_18_object); // 0x3aa Call
	var_15_object = var_18_object; // 0x3ab Mov
	var_25_string = "d5q02GorbunFindTheDaughter"; // 0x3ad PushS
	var_26_string = "pt_map_gorbun"; // 0x3ae PushS
	var_27_int = 0; // 0x3af PushI
	var_28_int = 15362; // 0x3b0 PushI
	var_29_float = 0; // 0x3b1 PushV
	func_910(var_29_float); // 0x3b2 Call
	AddMark(var_25_string, var_26_string, var_27_int, var_28_int, var_29_float); // 0x3b4 ObjFunc
	func_1182(); // 0x3b7 Call
	return 2; // 0x3b9 Return
}


func_1070(var_134_bool)
{
	var_136_int = 0; var_137_string = ""; // 0x42f PushV
	var_137_string = "d5q02KnowNudeIsDead"; // 0x430 MovS
	func_905(var_136_int, var_137_string); // 0x431 Call
	var_138_int = 1; // 0x433 PushI
	var_139_bool = var_136_int == var_138_int; // 0x434 Eq
	if(var_139_bool == 0) goto Label_1080; // 0x435 JumpB
	var_134_bool = 1; // 0x436 MovB
	return 0; // 0x437 Return
	
Label_1080:
	var_134_bool = 0; // 0x438 MovB
	return 0; // 0x439 Return
}


func_1198()
{
	var_121_object = Obj(); var_122_object = Obj(); // 0x4ae PushV
	var_123_string = "Adding diary entry"; // 0x4af PushS
	Trace(var_123_string); // 0x4b0 Func
	var_124_int = 153; // 0x4b2 PushI
	var_125_int = 2; // 0x4b3 PushI
	var_126_int = 15359; // 0x4b4 PushI
	CreateDiaryEntry(var_122_object, var_124_int, var_125_int, var_126_int); // 0x4b5 Func
	var_127_bool = 0; var_128_object = Obj(); var_129_int = 0; // 0x4b7 PushV
	var_128_object = var_122_object; // 0x4b8 Mov
	var_129_int = 148; // 0x4b9 MovI
	func_1119(var_127_bool, var_128_object, var_129_int); // 0x4ba Call
	return 2; // 0x4bc Return
}


func_1082(var_153_bool)
{
	var_155_int = 0; var_156_string = ""; // 0x43b PushV
	var_156_string = "ood5Gorbun2"; // 0x43c MovS
	func_905(var_155_int, var_156_string); // 0x43d Call
	var_157_int = 0; // 0x43f PushI
	var_158_bool = var_155_int == var_157_int; // 0x440 Eq
	if(var_158_bool == 0) goto Label_1092; // 0x441 JumpB
	var_153_bool = 1; // 0x442 MovB
	return 0; // 0x443 Return
	
Label_1092:
	var_153_bool = 0; // 0x444 MovB
	return 0; // 0x445 Return
}


func_955()
{
	var_59_string = "ood5Gorbun1"; // 0x3bc PushS
	var_60_int = 1; // 0x3bd PushI
	SetVariable(var_59_string, var_60_int); // 0x3be Func
	return 0; // 0x3c0 Return
}


func_1214(var_59_int)
{
	var_59_int = 12583; // 0x4be MovI
	return 0; // 0x4bf Return
}


func_63(var_0_object, var_1_object, var_2_object, var_3_string, var_70_object, var_71_object)
{
	var_0_object = var_71_object; // 0x40 TMov
	var_1_object = var_70_object; // 0x41 TMov
	var_3_string = 0; // 0x42 TMovB
	var_76_int = 1; // 0x43 PushI
	if(var_76_int == 0) goto Label_173; // 0x44 JumpB
	var_77_bool = 0; // 0x45 PushV
	var_77_bool = 0; // 0x46 MovB
	var_78_bool = 0; var_79_object = Obj(); // 0x47 PushV
	var_79_object = var_1_object; // 0x48 MovT
	func_1034(var_79_object); // 0x49 Call
	if(var_78_bool == 0) goto Label_82; // 0x4b JumpB
	var_86_bool = 0; var_87_object = Obj(); // 0x4c PushV
	var_87_object = var_1_object; // 0x4d MovT
	func_1046(var_87_object); // 0x4e Call
	if(var_86_bool == 0) goto Label_82; // 0x50 JumpB
	var_77_bool = 1; // 0x51 MovB
	
Label_82:
	if(var_77_bool == 0) goto Label_98; // 0x52 JumpB
	var_92_string = ""; // 0x53 PushV
	var_92_string = "Neutral"; // 0x54 MovS
	func_203(var_71_object, var_92_string); // 0x55 Call
	var_107_int = 11917; // 0x57 PushI
	SetMessage(var_107_int); // 0x58 TObjFunc
	ClearReplies(); // 0x5a TObjFunc
	var_108_int = 11918; // 0x5c PushI
	var_109_int = 13135; // 0x5d PushI
	var_110_int = 13134; // 0x5e PushI
	AddReply(var_108_int, var_109_int, var_110_int); // 0x5f TObjFunc
	goto Label_173; // 0x61 Jump
	
Label_173:
	var_111_bool = 0; // 0xad PushV
	func_1218(var_111_bool); // 0xae Call
	if(var_111_bool == 0) goto Label_188; // 0xb0 JumpB
	
Label_177:
	lshWaitForAnimEnd(); // 0xb1 Func
	var_112_string = var_3_string; // 0xb3 PushT
	if(var_112_string == 0) goto Label_182; // 0xb4 JumpB
	goto Label_187; // 0xb5 Jump
	
Label_187:
	goto Label_202; // 0xbb Jump
	
Label_202:
	return 0; // 0xca Return
	
Label_182:
	var_113_string = ""; // 0xb6 PushV
	var_113_string = var_2_object; // 0xb7 MovT
	func_864(var_113_string); // 0xb8 Call
	goto Label_177; // 0xba Jump
	
Label_188:
	var_114_string = "all"; // 0xbc PushS
	var_115_string = "idle"; // 0xbd PushS
	PlayAnimation(var_114_string, var_115_string); // 0xbe Func
	
Label_192:
	WaitForAnimEnd(); // 0xc0 Func
	var_116_string = var_3_string; // 0xc2 PushT
	if(var_116_string == 0) goto Label_197; // 0xc3 JumpB
	goto Label_202; // 0xc4 Jump
	
Label_197:
	var_117_string = "all"; // 0xc5 PushS
	var_118_string = "idle"; // 0xc6 PushS
	PlayAnimation(var_117_string, var_118_string); // 0xc7 Func
	goto Label_192; // 0xc9 Jump
	
Label_98:
	var_119_string = ""; // 0x62 PushV
	var_119_string = "Neutral"; // 0x63 MovS
	func_203(var_71_object, var_119_string); // 0x64 Call
	var_120_int = 11935; // 0x66 PushI
	SetMessage(var_120_int); // 0x67 TObjFunc
	ClearReplies(); // 0x69 TObjFunc
	var_121_bool = 0; var_122_object = Obj(); // 0x6b PushV
	var_122_object = var_1_object; // 0x6c MovT
	func_1034(var_122_object); // 0x6d Call
	if(var_121_bool == 0) goto Label_117; // 0x6f JumpB
	var_123_int = 12489; // 0x70 PushI
	var_124_int = 13660; // 0x71 PushI
	var_125_int = 13658; // 0x72 PushI
	AddReply(var_123_int, var_124_int, var_125_int); // 0x73 TObjFunc
	
Label_117:
	var_126_bool = 0; // 0x75 PushV
	var_126_bool = 0; // 0x76 MovB
	var_127_bool = 0; // 0x77 PushV
	var_127_bool = 0; // 0x78 MovB
	var_128_bool = 0; var_129_object = Obj(); // 0x79 PushV
	var_129_object = var_1_object; // 0x7a MovT
	func_1058(var_129_object); // 0x7b Call
	if(var_128_bool == 0) goto Label_133; // 0x7d JumpB
	var_134_bool = 0; var_135_object = Obj(); // 0x7e PushV
	var_135_object = var_1_object; // 0x7f MovT
	func_1070(var_135_object); // 0x80 Call
	var_140_bool = var_134_bool == 0; // 0x82 Not
	if(var_140_bool == 0) goto Label_133; // 0x83 JumpB
	var_127_bool = 1; // 0x84 MovB
	
Label_133:
	if(var_127_bool == 0) goto Label_140; // 0x85 JumpB
	var_141_bool = 0; var_142_object = Obj(); // 0x86 PushV
	var_142_object = var_1_object; // 0x87 MovT
	func_1094(var_142_object); // 0x88 Call
	if(var_141_bool == 0) goto Label_140; // 0x8a JumpB
	var_126_bool = 1; // 0x8b MovB
	
Label_140:
	if(var_126_bool == 0) goto Label_146; // 0x8c JumpB
	var_147_int = 11936; // 0x8d PushI
	var_148_int = 13155; // 0x8e PushI
	var_149_int = 13153; // 0x8f PushI
	AddReply(var_147_int, var_148_int, var_149_int); // 0x90 TObjFunc
	
Label_146:
	var_150_bool = 0; // 0x92 PushV
	var_150_bool = 0; // 0x93 MovB
	var_151_bool = 0; var_152_object = Obj(); // 0x94 PushV
	var_152_object = var_1_object; // 0x95 MovT
	func_1070(var_152_object); // 0x96 Call
	if(var_151_bool == 0) goto Label_159; // 0x98 JumpB
	var_153_bool = 0; var_154_object = Obj(); // 0x99 PushV
	var_154_object = var_1_object; // 0x9a MovT
	func_1082(var_154_object); // 0x9b Call
	if(var_153_bool == 0) goto Label_159; // 0x9d JumpB
	var_150_bool = 1; // 0x9e MovB
	
Label_159:
	if(var_150_bool == 0) goto Label_165; // 0x9f JumpB
	var_159_int = 11937; // 0xa0 PushI
	var_160_int = 13156; // 0xa1 PushI
	var_161_int = 13154; // 0xa2 PushI
	AddReply(var_159_int, var_160_int, var_161_int); // 0xa3 TObjFunc
	
Label_165:
	var_162_int = 12490; // 0xa5 PushI
	var_163_int = -1; // 0xa6 PushI
	var_164_int = 13659; // 0xa7 PushI
	AddReply(var_162_int, var_163_int, var_164_int); // 0xa8 TObjFunc
	goto Label_173; // 0xaa Jump
}


func_1216(var_60_string)
{
	var_60_string = "ui/NPC_Black.png"; // 0x4c0 MovS
	return 0; // 0x4c1 Return
}


func_961()
{
	var_104_object = Obj(); var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj(); // 0x3c1 PushV
	var_108_string = "d5q02"; // 0x3c2 PushS
	var_109_int = 1000; // 0x3c3 PushI
	SetVariable(var_108_string, var_109_int); // 0x3c4 Func
	var_110_object = Obj(); // 0x3c6 PushV
	func_1148(var_110_object); // 0x3c7 Call
	var_106_object = var_110_object; // 0x3c8 Mov
	var_111_string = "d5q02AnnaGotoGorbun"; // 0x3ca PushS
	FindMark(var_107_object, var_111_string); // 0x3cb ObjFunc
	var_112_object = var_107_object; // 0x3cd Push
	if(var_112_object == 0) goto Label_977; // 0x3ce JumpB
	Remove(); // 0x3cf ObjFunc
	
Label_977:
	var_113_string = "d5q02AnnaGotoGorbunSelf"; // 0x3d1 PushS
	FindMark(var_107_object, var_113_string); // 0x3d2 ObjFunc
	var_114_object = var_107_object; // 0x3d4 Push
	if(var_114_object == 0) goto Label_984; // 0x3d5 JumpB
	Remove(); // 0x3d6 ObjFunc
	
Label_984:
	var_115_string = "d5q02AnnaGotoKabak"; // 0x3d8 PushS
	FindMark(var_107_object, var_115_string); // 0x3d9 ObjFunc
	var_116_object = var_107_object; // 0x3db Push
	if(var_116_object == 0) goto Label_991; // 0x3dc JumpB
	Remove(); // 0x3dd ObjFunc
	
Label_991:
	var_117_string = "d5q02GorbunFindTheDaughter"; // 0x3df PushS
	FindMark(var_107_object, var_117_string); // 0x3e0 ObjFunc
	var_118_object = var_107_object; // 0x3e2 Push
	if(var_118_object == 0) goto Label_998; // 0x3e3 JumpB
	Remove(); // 0x3e4 ObjFunc
	
Label_998:
	var_119_string = "d5q02NudeMeeting"; // 0x3e6 PushS
	FindMark(var_107_object, var_119_string); // 0x3e7 ObjFunc
	var_120_object = var_107_object; // 0x3e9 Push
	if(var_120_object == 0) goto Label_1005; // 0x3ea JumpB
	Remove(); // 0x3eb ObjFunc
	
Label_1005:
	func_1198(); // 0x3ee Call
	return 4; // 0x3f0 Return
}


func_1218(var_93_bool)
{
	var_93_bool = 0; // 0x4c2 MovB
	return 0; // 0x4c3 Return
}


func_1094(var_141_bool)
{
	var_143_int = 0; var_144_string = ""; // 0x447 PushV
	var_144_string = "ood5Gorbun3"; // 0x448 MovS
	func_905(var_143_int, var_144_string); // 0x449 Call
	var_145_int = 0; // 0x44b PushI
	var_146_bool = var_143_int == var_145_int; // 0x44c Eq
	if(var_146_bool == 0) goto Label_1104; // 0x44d JumpB
	var_141_bool = 1; // 0x44e MovB
	return 0; // 0x44f Return
	
Label_1104:
	var_141_bool = 0; // 0x450 MovB
	return 0; // 0x451 Return
}


func_203(var_2_object, var_92_string)
{
	var_93_bool = 0; // 0xcc PushV
	func_1218(var_93_bool); // 0xcd Call
	var_94_bool = var_93_bool == 0; // 0xcf Not
	if(var_94_bool == 0) goto Label_210; // 0xd0 JumpB
	return 0; // 0xd1 Return
	
Label_210:
	var_95_bool = var_92_string == var_2_object; // 0xd2 Eq
	if(var_95_bool == 0) goto Label_213; // 0xd3 JumpB
	return 0; // 0xd4 Return
	
Label_213:
	var_96_string = ""; // 0xd5 PushV
	var_96_string = var_92_string; // 0xd6 Mov
	func_864(var_96_string); // 0xd7 Call
	var_2_object = var_92_string; // 0xd9 TMov
	return 0; // 0xda Return
}


func_1106(var_47_object)
{
	var_48_object = Obj(); var_49_object = Obj(); // 0x452 PushV
	GetDiaryRoot(var_49_object); // 0x453 Func
	var_50_bool = var_49_object == 0; // 0x455 Not
	if(var_50_bool == 0) goto Label_1116; // 0x456 JumpB
	var_51_string = "Can't retrieve diary root"; // 0x457 PushS
	Trace(var_51_string); // 0x458 Func
	var_47_object = 0; // 0x45a MovB
	return 2; // 0x45b Return
	
Label_1116:
	var_47_object = var_49_object; // 0x45c Mov
	return 2; // 0x45d Return
}


func_860()
{
	CameraSwitchToNormal(); // 0x35d Func
	return 0; // 0x35f Return
}


func_1119(var_38_bool, var_39_object, var_40_int)
{
	var_41_object = Obj(); var_42_object = Obj(); var_43_int = 0; var_44_object = Obj(); var_45_object = Obj(); var_46_int = 0; // 0x45f PushV
	var_47_object = Obj(); // 0x460 PushV
	func_1106(var_47_object); // 0x461 Call
	var_44_object = var_47_object; // 0x462 Mov
	Find(var_40_int, var_45_object); // 0x464 ObjFunc
	var_52_bool = var_45_object == 0; // 0x466 Not
	if(var_52_bool == 0) goto Label_1134; // 0x467 JumpB
	var_53_string = "Can't find diary parent with id: "; // 0x468 PushS
	var_54_int = var_53_string + var_40_int; // 0x469 Add
	Trace(var_54_int); // 0x46a Func
	var_38_bool = 0; // 0x46c MovB
	return 6; // 0x46d Return
	
Label_1134:
	AddChild(var_39_object); // 0x46e ObjFunc
	var_55_string = "player_diary"; // 0x470 PushS
	var_56_int = 1; // 0x471 PushI
	SetVariable(var_55_string, var_56_int); // 0x472 Func
	GetCategory(var_46_int); // 0x474 ObjFunc
	SetDiarySection(var_46_int); // 0x476 Func
	var_38_bool = 0; // 0x478 MovB
	return 6; // 0x479 Return
}


func_864(var_96_string)
{
	var_97_float = 0; var_98_float = 0; var_99_float = 0; var_100_float = 0; // 0x360 PushV
	var_101_string = "playing "; // 0x361 PushS
	var_102_int = var_101_string + var_96_string; // 0x362 Add
	Trace(var_102_int); // 0x363 Func
	lshGetAnimTimes(var_96_string, var_99_float, var_100_float); // 0x365 Func
	lshPlayAnimation(var_99_float, var_100_float); // 0x367 Func
	var_103_string = "start: "; // 0x369 PushS
	var_104_int = var_103_string + var_99_float; // 0x36a Add
	Trace(var_104_int); // 0x36b Func
	var_105_string = "end: "; // 0x36d PushS
	var_106_int = var_105_string + var_100_float; // 0x36e Add
	Trace(var_106_int); // 0x36f Func
	return 4; // 0x371 Return
}


func_882()
{
	var_9_bool = 0; // 0x372 PushV
	func_1218(var_9_bool); // 0x373 Call
	if(var_9_bool == 0) goto Label_888; // 0x375 JumpB
	lshStopSpeech(); // 0x376 Func
	
Label_888:
	return 0; // 0x378 Return
}


func_1011()
{
	var_132_string = "ood5Gorbun2"; // 0x3f4 PushS
	var_133_int = 1; // 0x3f5 PushI
	SetVariable(var_132_string, var_133_int); // 0x3f6 Func
	return 0; // 0x3f8 Return
}


func_889(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x379 PushV
	self(var_11_object); // 0x37a Func
	var_9_object = var_11_object; // 0x37c Mov
	return 2; // 0x37d Return
}


func_1148(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); // 0x47c PushV
	GetMainOutdoorScene(var_21_object); // 0x47d Func
	var_23_bool = var_21_object == 0; // 0x47f NullEq
	if(var_23_bool == 0) goto Label_1159; // 0x480 JumpB
	var_24_string = "Can't find main outdoor scene"; // 0x481 PushS
	Trace(var_24_string); // 0x482 Func
	var_22_object = 0; // 0x484 SetNull
	var_18_object = var_22_object; // 0x485 Mov
	return 4; // 0x486 Return
	
Label_1159:
	GetMap(var_22_object); // 0x487 ObjFunc
	var_18_object = var_22_object; // 0x489 Mov
	return 4; // 0x48a Return
}


func_1017()
{
	var_90_string = "ood5Gorbun3"; // 0x3fa PushS
	var_91_int = 1; // 0x3fb PushI
	SetVariable(var_90_string, var_91_int); // 0x3fc Func
	return 0; // 0x3fe Return
}


func_895(var_43_cvector, var_44_cvector)
{
	var_46_float = 0; var_47_float = 0; // 0x37f PushV
	var_48_int = var_44_cvector | var_44_cvector; // 0x380 Or
	var_47_float = sqrt(var_48_int); // 0x381 Sqrt2
	var_49_float = 0.0; // 0x382 PushF
	var_50_bool = var_47_float < var_49_float; // 0x383 LT
	if(var_50_bool == 0) goto Label_903; // 0x384 JumpB
	var_43_cvector = CVector(0.0, 0.0, 0.0); // 0x385 MovV
	return 2; // 0x386 Return
	
Label_903:
	var_43_cvector = var_44_cvector / var_44_cvector; // 0x387 Div2
	return 2; // 0x388 Return
}


