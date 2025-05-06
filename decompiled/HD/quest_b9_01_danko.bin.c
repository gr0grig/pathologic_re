task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int)
{
	var_7_int = 1; // 0xf2 PushI
	if(var_7_int == 0) goto Label_705; // 0xf3 JumpB
	func_1048(); // 0xf5 NEW_2
	var_9_int = 22745; // 0xf7 PushI
	var_10_bool = var_6_int == var_9_int; // 0xf8 Eq
	if(var_10_bool == 0) goto Label_265; // 0xf9 JumpB
	var_11_object = Obj(); var_12_object = Obj(); // 0xfa PushV
	var_11_object = var_1_object; // 0xfb MovT
	var_12_object = var_0_object; // 0xfc MovT
	func_1097(); // 0xfd NEW_2
	var_38_object = Obj(); var_39_object = Obj(); // 0xff PushV
	var_38_object = var_1_object; // 0x100 MovT
	var_39_object = var_0_object; // 0x101 MovT
	func_1124(); // 0x102 NEW_2
	var_50_object = Obj(); var_51_object = Obj(); // 0x104 PushV
	var_50_object = var_1_object; // 0x105 MovT
	var_51_object = var_0_object; // 0x106 MovT
	func_1141(); // 0x107 NEW_2
	
Label_265:
	var_82_int = 23541; // 0x109 PushI
	var_83_bool = var_6_int == var_82_int; // 0x10a Eq
	if(var_83_bool == 0) goto Label_283; // 0x10b JumpB
	var_84_object = Obj(); var_85_object = Obj(); // 0x10c PushV
	var_84_object = var_1_object; // 0x10d MovT
	var_85_object = var_0_object; // 0x10e MovT
	func_1097(); // 0x10f NEW_2
	var_86_object = Obj(); var_87_object = Obj(); // 0x111 PushV
	var_86_object = var_1_object; // 0x112 MovT
	var_87_object = var_0_object; // 0x113 MovT
	func_1124(); // 0x114 NEW_2
	var_88_object = Obj(); var_89_object = Obj(); // 0x116 PushV
	var_88_object = var_1_object; // 0x117 MovT
	var_89_object = var_0_object; // 0x118 MovT
	func_1141(); // 0x119 NEW_2
	
Label_283:
	var_90_int = 22739; // 0x11b PushI
	var_91_bool = var_6_int == var_90_int; // 0x11c Eq
	if(var_91_bool == 0) goto Label_291; // 0x11d JumpB
	var_92_object = Obj(); var_93_object = Obj(); // 0x11e PushV
	var_92_object = var_1_object; // 0x11f MovT
	var_93_object = var_0_object; // 0x120 MovT
	func_1091(); // 0x121 NEW_2
	
Label_291:
	var_96_int = 22741; // 0x123 PushI
	var_97_bool = var_6_int == var_96_int; // 0x124 Eq
	if(var_97_bool == 0) goto Label_299; // 0x125 JumpB
	var_98_object = Obj(); var_99_object = Obj(); // 0x126 PushV
	var_98_object = var_1_object; // 0x127 MovT
	var_99_object = var_0_object; // 0x128 MovT
	func_1106(); // 0x129 NEW_2
	
Label_299:
	var_102_int = 23549; // 0x12b PushI
	var_103_bool = var_6_int == var_102_int; // 0x12c Eq
	if(var_103_bool == 0) goto Label_307; // 0x12d JumpB
	var_104_object = Obj(); var_105_object = Obj(); // 0x12e PushV
	var_104_object = var_1_object; // 0x12f MovT
	var_105_object = var_0_object; // 0x130 MovT
	func_1106(); // 0x131 NEW_2
	
Label_307:
	var_106_int = 23546; // 0x133 PushI
	var_107_bool = var_6_int == var_106_int; // 0x134 Eq
	if(var_107_bool == 0) goto Label_315; // 0x135 JumpB
	var_108_object = Obj(); var_109_object = Obj(); // 0x136 PushV
	var_108_object = var_1_object; // 0x137 MovT
	var_109_object = var_0_object; // 0x138 MovT
	func_1118(); // 0x139 NEW_2
	
Label_315:
	var_112_int = 23550; // 0x13b PushI
	var_113_bool = var_6_int == var_112_int; // 0x13c Eq
	if(var_113_bool == 0) goto Label_323; // 0x13d JumpB
	var_114_object = Obj(); var_115_object = Obj(); // 0x13e PushV
	var_114_object = var_1_object; // 0x13f MovT
	var_115_object = var_0_object; // 0x140 MovT
	func_1112(); // 0x141 NEW_2
	
Label_323:
	var_118_int = 22742; // 0x143 PushI
	var_119_bool = var_5_int == var_118_int; // 0x144 Eq
	if(var_119_bool == 0) goto Label_426; // 0x145 JumpB
	var_120_bool = 0; // 0x146 PushV
	var_120_bool = 0; // 0x147 MovB
	var_121_bool = 0; var_122_object = Obj(); // 0x148 PushV
	var_122_object = var_1_object; // 0x149 MovT
	func_1157(var_122_object); // 0x14a NEW_2
	if(var_121_bool == 0) goto Label_339; // 0x14c JumpB
	var_127_bool = 0; var_128_object = Obj(); // 0x14d PushV
	var_128_object = var_1_object; // 0x14e MovT
	func_1169(var_128_object); // 0x14f NEW_2
	if(var_127_bool == 0) goto Label_339; // 0x151 JumpB
	var_120_bool = 1; // 0x152 MovB
	
Label_339:
	if(var_120_bool == 0) goto Label_360; // 0x153 JumpB
	var_133_object = Obj(); var_134_object = Obj(); // 0x154 PushV
	var_133_object = var_1_object; // 0x155 MovT
	var_134_object = var_0_object; // 0x156 MovT
	func_1085(); // 0x157 NEW_2
	var_137_string = ""; // 0x159 PushV
	var_137_string = "Menace"; // 0x15a MovS
	func_219(var_6_int, var_137_string); // 0x15b NEW_2
	var_154_int = 521581; // 0x15d PushI
	SetMessage(var_154_int); // 0x15e TObjFunc
	ClearReplies(); // 0x160 TObjFunc
	var_155_int = 531554; // 0x162 PushI
	var_156_int = 32918; // 0x163 PushI
	var_157_int = 32917; // 0x164 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x165 TObjFunc
	return 0; // 0x167 Return
	
Label_360:
	var_158_bool = 0; var_159_object = Obj(); // 0x168 PushV
	var_159_object = var_1_object; // 0x169 MovT
	func_1157(var_159_object); // 0x16a NEW_2
	var_160_bool = var_158_bool == 0; // 0x16c Not
	if(var_160_bool == 0) goto Label_401; // 0x16d JumpB
	var_161_string = ""; // 0x16e PushV
	var_161_string = "Neutral"; // 0x16f MovS
	func_219(var_6_int, var_161_string); // 0x170 NEW_2
	var_162_int = 521577; // 0x172 PushI
	SetMessage(var_162_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_163_bool = 0; var_164_object = Obj(); // 0x177 PushV
	var_164_object = var_1_object; // 0x178 MovT
	func_1181(var_164_object); // 0x179 NEW_2
	if(var_163_bool == 0) goto Label_385; // 0x17b JumpB
	var_169_int = 521578; // 0x17c PushI
	var_170_int = 22740; // 0x17d PushI
	var_171_int = 22739; // 0x17e PushI
	AddReply(var_169_int, var_170_int, var_171_int); // 0x17f TObjFunc
	
Label_385:
	var_172_bool = 0; var_173_object = Obj(); // 0x181 PushV
	var_173_object = var_1_object; // 0x182 MovT
	func_1205(var_173_object); // 0x183 NEW_2
	if(var_172_bool == 0) goto Label_395; // 0x185 JumpB
	var_178_int = 522381; // 0x186 PushI
	var_179_int = 23547; // 0x187 PushI
	var_180_int = 23546; // 0x188 PushI
	AddReply(var_178_int, var_179_int, var_180_int); // 0x189 TObjFunc
	
Label_395:
	var_181_int = 521586; // 0x18b PushI
	var_182_int = -1; // 0x18c PushI
	var_183_int = 22747; // 0x18d PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_184_string = ""; // 0x191 PushV
	var_184_string = "Neutral"; // 0x192 MovS
	func_219(var_6_int, var_184_string); // 0x193 NEW_2
	var_185_int = 521601; // 0x195 PushI
	SetMessage(var_185_int); // 0x196 TObjFunc
	ClearReplies(); // 0x198 TObjFunc
	var_186_bool = 0; var_187_object = Obj(); // 0x19a PushV
	var_187_object = var_1_object; // 0x19b MovT
	func_1193(var_187_object); // 0x19c NEW_2
	if(var_186_bool == 0) goto Label_420; // 0x19e JumpB
	var_192_int = 522385; // 0x19f PushI
	var_193_int = 23551; // 0x1a0 PushI
	var_194_int = 23550; // 0x1a1 PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x1a2 TObjFunc
	
Label_420:
	var_195_int = 521602; // 0x1a4 PushI
	var_196_int = -1; // 0x1a5 PushI
	var_197_int = 22767; // 0x1a6 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1a7 TObjFunc
	return 0; // 0x1a9 Return
	
Label_426:
	var_198_int = 23551; // 0x1aa PushI
	var_199_bool = var_5_int == var_198_int; // 0x1ab Eq
	if(var_199_bool == 0) goto Label_444; // 0x1ac JumpB
	var_200_string = ""; // 0x1ad PushV
	var_200_string = "Sorrow"; // 0x1ae MovS
	func_219(var_6_int, var_200_string); // 0x1af NEW_2
	var_201_int = 522386; // 0x1b1 PushI
	SetMessage(var_201_int); // 0x1b2 TObjFunc
	ClearReplies(); // 0x1b4 TObjFunc
	var_202_int = 522387; // 0x1b6 PushI
	var_203_int = 23553; // 0x1b7 PushI
	var_204_int = 23552; // 0x1b8 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x1b9 TObjFunc
	return 0; // 0x1bb Return
	
Label_444:
	var_205_int = 23553; // 0x1bc PushI
	var_206_bool = var_5_int == var_205_int; // 0x1bd Eq
	if(var_206_bool == 0) goto Label_462; // 0x1be JumpB
	var_207_string = ""; // 0x1bf PushV
	var_207_string = "Sorrow"; // 0x1c0 MovS
	func_219(var_6_int, var_207_string); // 0x1c1 NEW_2
	var_208_int = 522388; // 0x1c3 PushI
	SetMessage(var_208_int); // 0x1c4 TObjFunc
	ClearReplies(); // 0x1c6 TObjFunc
	var_209_int = 522389; // 0x1c8 PushI
	var_210_int = -1; // 0x1c9 PushI
	var_211_int = 23554; // 0x1ca PushI
	AddReply(var_209_int, var_210_int, var_211_int); // 0x1cb TObjFunc
	return 0; // 0x1cd Return
	
Label_462:
	var_212_int = 23547; // 0x1ce PushI
	var_213_bool = var_5_int == var_212_int; // 0x1cf Eq
	if(var_213_bool == 0) goto Label_480; // 0x1d0 JumpB
	var_214_string = ""; // 0x1d1 PushV
	var_214_string = "Neutral"; // 0x1d2 MovS
	func_219(var_6_int, var_214_string); // 0x1d3 NEW_2
	var_215_int = 522382; // 0x1d5 PushI
	SetMessage(var_215_int); // 0x1d6 TObjFunc
	ClearReplies(); // 0x1d8 TObjFunc
	var_216_int = 522383; // 0x1da PushI
	var_217_int = -1; // 0x1db PushI
	var_218_int = 23548; // 0x1dc PushI
	AddReply(var_216_int, var_217_int, var_218_int); // 0x1dd TObjFunc
	return 0; // 0x1df Return
	
Label_480:
	var_219_int = 22740; // 0x1e0 PushI
	var_220_bool = var_5_int == var_219_int; // 0x1e1 Eq
	if(var_220_bool == 0) goto Label_498; // 0x1e2 JumpB
	var_221_string = ""; // 0x1e3 PushV
	var_221_string = "Sorrow"; // 0x1e4 MovS
	func_219(var_6_int, var_221_string); // 0x1e5 NEW_2
	var_222_int = 521579; // 0x1e7 PushI
	SetMessage(var_222_int); // 0x1e8 TObjFunc
	ClearReplies(); // 0x1ea TObjFunc
	var_223_int = 522377; // 0x1ec PushI
	var_224_int = 23543; // 0x1ed PushI
	var_225_int = 23542; // 0x1ee PushI
	AddReply(var_223_int, var_224_int, var_225_int); // 0x1ef TObjFunc
	return 0; // 0x1f1 Return
	
Label_498:
	var_226_int = 23543; // 0x1f2 PushI
	var_227_bool = var_5_int == var_226_int; // 0x1f3 Eq
	if(var_227_bool == 0) goto Label_521; // 0x1f4 JumpB
	var_228_string = ""; // 0x1f5 PushV
	var_228_string = "Sorrow"; // 0x1f6 MovS
	func_219(var_6_int, var_228_string); // 0x1f7 NEW_2
	var_229_int = 522378; // 0x1f9 PushI
	SetMessage(var_229_int); // 0x1fa TObjFunc
	ClearReplies(); // 0x1fc TObjFunc
	var_230_int = 521580; // 0x1fe PushI
	var_231_int = -1; // 0x1ff PushI
	var_232_int = 22741; // 0x200 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x201 TObjFunc
	var_233_int = 522379; // 0x203 PushI
	var_234_int = 23545; // 0x204 PushI
	var_235_int = 23544; // 0x205 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x206 TObjFunc
	return 0; // 0x208 Return
	
Label_521:
	var_236_int = 23545; // 0x209 PushI
	var_237_bool = var_5_int == var_236_int; // 0x20a Eq
	if(var_237_bool == 0) goto Label_539; // 0x20b JumpB
	var_238_string = ""; // 0x20c PushV
	var_238_string = "Sorrow"; // 0x20d MovS
	func_219(var_6_int, var_238_string); // 0x20e NEW_2
	var_239_int = 522380; // 0x210 PushI
	SetMessage(var_239_int); // 0x211 TObjFunc
	ClearReplies(); // 0x213 TObjFunc
	var_240_int = 522384; // 0x215 PushI
	var_241_int = -1; // 0x216 PushI
	var_242_int = 23549; // 0x217 PushI
	AddReply(var_240_int, var_241_int, var_242_int); // 0x218 TObjFunc
	return 0; // 0x21a Return
	
Label_539:
	var_243_int = 32918; // 0x21b PushI
	var_244_bool = var_5_int == var_243_int; // 0x21c Eq
	if(var_244_bool == 0) goto Label_557; // 0x21d JumpB
	var_245_string = ""; // 0x21e PushV
	var_245_string = "Neutral"; // 0x21f MovS
	func_219(var_6_int, var_245_string); // 0x220 NEW_2
	var_246_int = 531555; // 0x222 PushI
	SetMessage(var_246_int); // 0x223 TObjFunc
	ClearReplies(); // 0x225 TObjFunc
	var_247_int = 521582; // 0x227 PushI
	var_248_int = 23526; // 0x228 PushI
	var_249_int = 22743; // 0x229 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x22a TObjFunc
	return 0; // 0x22c Return
	
Label_557:
	var_250_int = 23526; // 0x22d PushI
	var_251_bool = var_5_int == var_250_int; // 0x22e Eq
	if(var_251_bool == 0) goto Label_580; // 0x22f JumpB
	var_252_string = ""; // 0x230 PushV
	var_252_string = "Untrust"; // 0x231 MovS
	func_219(var_6_int, var_252_string); // 0x232 NEW_2
	var_253_int = 522363; // 0x234 PushI
	SetMessage(var_253_int); // 0x235 TObjFunc
	ClearReplies(); // 0x237 TObjFunc
	var_254_int = 522364; // 0x239 PushI
	var_255_int = 23528; // 0x23a PushI
	var_256_int = 23527; // 0x23b PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x23c TObjFunc
	var_257_int = 522369; // 0x23e PushI
	var_258_int = 23533; // 0x23f PushI
	var_259_int = 23532; // 0x240 PushI
	AddReply(var_257_int, var_258_int, var_259_int); // 0x241 TObjFunc
	return 0; // 0x243 Return
	
Label_580:
	var_260_int = 23533; // 0x244 PushI
	var_261_bool = var_5_int == var_260_int; // 0x245 Eq
	if(var_261_bool == 0) goto Label_598; // 0x246 JumpB
	var_262_string = ""; // 0x247 PushV
	var_262_string = "Neutral"; // 0x248 MovS
	func_219(var_6_int, var_262_string); // 0x249 NEW_2
	var_263_int = 522370; // 0x24b PushI
	SetMessage(var_263_int); // 0x24c TObjFunc
	ClearReplies(); // 0x24e TObjFunc
	var_264_int = 522371; // 0x250 PushI
	var_265_int = 22744; // 0x251 PushI
	var_266_int = 23534; // 0x252 PushI
	AddReply(var_264_int, var_265_int, var_266_int); // 0x253 TObjFunc
	return 0; // 0x255 Return
	
Label_598:
	var_267_int = 23528; // 0x256 PushI
	var_268_bool = var_5_int == var_267_int; // 0x257 Eq
	if(var_268_bool == 0) goto Label_616; // 0x258 JumpB
	var_269_string = ""; // 0x259 PushV
	var_269_string = "Untrust"; // 0x25a MovS
	func_219(var_6_int, var_269_string); // 0x25b NEW_2
	var_270_int = 522365; // 0x25d PushI
	SetMessage(var_270_int); // 0x25e TObjFunc
	ClearReplies(); // 0x260 TObjFunc
	var_271_int = 522366; // 0x262 PushI
	var_272_int = 23530; // 0x263 PushI
	var_273_int = 23529; // 0x264 PushI
	AddReply(var_271_int, var_272_int, var_273_int); // 0x265 TObjFunc
	return 0; // 0x267 Return
	
Label_616:
	var_274_int = 23530; // 0x268 PushI
	var_275_bool = var_5_int == var_274_int; // 0x269 Eq
	if(var_275_bool == 0) goto Label_634; // 0x26a JumpB
	var_276_string = ""; // 0x26b PushV
	var_276_string = "Untrust"; // 0x26c MovS
	func_219(var_6_int, var_276_string); // 0x26d NEW_2
	var_277_int = 522367; // 0x26f PushI
	SetMessage(var_277_int); // 0x270 TObjFunc
	ClearReplies(); // 0x272 TObjFunc
	var_278_int = 522368; // 0x274 PushI
	var_279_int = 22744; // 0x275 PushI
	var_280_int = 23531; // 0x276 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x277 TObjFunc
	return 0; // 0x279 Return
	
Label_634:
	var_281_int = 22744; // 0x27a PushI
	var_282_bool = var_5_int == var_281_int; // 0x27b Eq
	if(var_282_bool == 0) goto Label_652; // 0x27c JumpB
	var_283_string = ""; // 0x27d PushV
	var_283_string = "Untrust"; // 0x27e MovS
	func_219(var_6_int, var_283_string); // 0x27f NEW_2
	var_284_int = 521583; // 0x281 PushI
	SetMessage(var_284_int); // 0x282 TObjFunc
	ClearReplies(); // 0x284 TObjFunc
	var_285_int = 522372; // 0x286 PushI
	var_286_int = 23538; // 0x287 PushI
	var_287_int = 23537; // 0x288 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x289 TObjFunc
	return 0; // 0x28b Return
	
Label_652:
	var_288_int = 23538; // 0x28c PushI
	var_289_bool = var_5_int == var_288_int; // 0x28d Eq
	if(var_289_bool == 0) goto Label_670; // 0x28e JumpB
	var_290_string = ""; // 0x28f PushV
	var_290_string = "Untrust"; // 0x290 MovS
	func_219(var_6_int, var_290_string); // 0x291 NEW_2
	var_291_int = 522373; // 0x293 PushI
	SetMessage(var_291_int); // 0x294 TObjFunc
	ClearReplies(); // 0x296 TObjFunc
	var_292_int = 522374; // 0x298 PushI
	var_293_int = 23540; // 0x299 PushI
	var_294_int = 23539; // 0x29a PushI
	AddReply(var_292_int, var_293_int, var_294_int); // 0x29b TObjFunc
	return 0; // 0x29d Return
	
Label_670:
	var_295_int = 23540; // 0x29e PushI
	var_296_bool = var_5_int == var_295_int; // 0x29f Eq
	if(var_296_bool == 0) goto Label_693; // 0x2a0 JumpB
	var_297_string = ""; // 0x2a1 PushV
	var_297_string = "Neutral"; // 0x2a2 MovS
	func_219(var_6_int, var_297_string); // 0x2a3 NEW_2
	var_298_int = 522375; // 0x2a5 PushI
	SetMessage(var_298_int); // 0x2a6 TObjFunc
	ClearReplies(); // 0x2a8 TObjFunc
	var_299_int = 521584; // 0x2aa PushI
	var_300_int = -1; // 0x2ab PushI
	var_301_int = 22745; // 0x2ac PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x2ad TObjFunc
	var_302_int = 522376; // 0x2af PushI
	var_303_int = -1; // 0x2b0 PushI
	var_304_int = 23541; // 0x2b1 PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x2b2 TObjFunc
	return 0; // 0x2b4 Return
	
Label_693:
	var_3_string = 1; // 0x2b5 TMovB
	var_305_bool = 0; // 0x2b6 PushV
	func_1346(var_305_bool); // 0x2b7 NEW_2
	if(var_305_bool == 0) goto Label_701; // 0x2b9 JumpB
	lshStopAnimation(); // 0x2ba Func
	goto Label_703; // 0x2bc Jump
	
Label_703:
	return 0; // 0x2bf Return
	
Label_701:
	StopAnimation(); // 0x2bd Func
	
Label_705:
	return 0; // 0x2c1 Return
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	Hold(); // 0x2db Func
	return 0; // 0x2dd Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	StopGroup0(); // 0x2de Func
	return 0; // 0x2e0 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object)
{
	var_6_bool = 0; var_7_bool = 0; // 0x2e1 PushV
	IsOverrideActive(var_7_bool); // 0x2e2 Func
	var_8_bool = var_7_bool == 0; // 0x2e4 Not
	if(var_8_bool == 0) goto Label_752; // 0x2e5 JumpB
	EventDisable(0); // 0x2e6 EventDisable
	var_9_bool = 0; var_10_object = Obj(); // 0x2e7 PushV
	var_10_object = var_5_object; // 0x2e8 Mov
	func_763(var_10_object); // 0x2e9 NEW_2
	EventEnable(0); // 0x2eb EventEnable
	var_23_object = Obj(); // 0x2ec PushV
	var_23_object = var_5_object; // 0x2ed Mov
	func_706(var_23_object); // 0x2ee NEW_2
	
Label_752:
	return 2; // 0x2f0 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool)
{
	var_5_bool = 0; // 0x2ca PushV
	func_772(var_5_bool); // 0x2cb NEW_2
	var_8_bool = var_5_bool == 0; // 0x2cd Not
	if(var_8_bool == 0) goto Label_721; // 0x2ce JumpB
	Hold(); // 0x2cf Func
	
Label_721:
	var_9_string = ""; // 0x2d1 PushV
	var_9_string = "Neutral"; // 0x2d2 MovS
	func_1002(var_9_string); // 0x2d3 NEW_2
	lshWaitForAnimEnd(); // 0x2d5 Func
	goto Label_721; // 0x2d7 Jump
}


func_0(var_0_object, var_24_int, var_25_object)
{
	var_27_object = Obj(); var_28_bool = 0; var_29_int = 0; var_30_bool = 0; var_31_object = Obj(); var_32_bool = 0; var_33_int = 0; var_34_bool = 0; // 0x0 PushV
	var_0_object = var_25_object; // 0x1 TMov
	var_35_bool = 0; var_36_object = Obj(); var_37_float = 0; // 0x2 PushV
	var_36_object = var_25_object; // 0x3 Mov
	var_37_float = 70.0; // 0x4 MovF
	func_777(var_36_object, var_37_float); // 0x5 NEW_2
	var_82_bool = var_35_bool == 0; // 0x7 Not
	if(var_82_bool == 0) goto Label_11; // 0x8 JumpB
	var_24_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_31_object); // 0xb Func
	var_83_int = 0; // 0xd PushV
	func_1340(var_83_int); // 0xe NEW_2
	SetNPCName(var_83_int); // 0x10 ObjFunc
	var_84_int = 0; // 0x12 PushV
	func_1338(var_84_int); // 0x13 NEW_2
	SetNPCDescription(var_84_int); // 0x15 ObjFunc
	var_85_string = ""; // 0x17 PushV
	func_1342(var_85_string); // 0x18 NEW_2
	SetPhoto(var_85_string); // 0x1a ObjFunc
	var_86_string = ""; // 0x1c PushV
	func_1344(var_86_string); // 0x1d NEW_2
	SetPhoto2(var_86_string); // 0x1f ObjFunc
	var_87_int = 0; // 0x21 PushV
	func_1321(var_87_int); // 0x22 NEW_2
	SetPlayerName(var_87_int); // 0x24 ObjFunc
	var_33_int = -1; // 0x26 MovI
	IsOverrideActive(var_32_bool); // 0x27 Func
	var_95_bool = var_32_bool; // 0x29 Push
	if(var_95_bool == 0) goto Label_45; // 0x2a JumpB
	var_24_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_31_object); // 0x2d Func
	var_96_bool = 0; var_97_object = Obj(); // 0x2f PushV
	var_98_object = Obj(); // 0x30 PushV
	func_1055(var_98_object); // 0x31 NEW_2
	var_97_object = var_98_object; // 0x32 Mov
	func_864(var_96_bool, var_97_object); // 0x34 NEW_2
	var_191_object = Obj(); var_192_object = Obj(); // 0x36 PushV
	var_191_object = var_25_object; // 0x37 Mov
	var_192_object = var_31_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_193_object, var_194_object, var_195_string, var_196_bool, var_191_object, var_192_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_34_bool); // 0x3d ObjFunc
	
Label_63:
	var_296_bool = var_34_bool == 0; // 0x3f Not
	if(var_296_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_34_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_297_object = Obj(); // 0x46 PushV
	var_297_object = var_25_object; // 0x47 Mov
	func_846(); // 0x48 NEW_2
	StopDialog(var_31_object); // 0x4a Func
	GetReturnValue(var_33_int); // 0x4c ObjFunc
	var_24_int = var_33_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_772(var_5_bool)
{
	var_6_bool = 0; var_7_bool = 0; // 0x304 PushV
	IsLoaded(var_7_bool); // 0x305 Func
	var_5_bool = var_7_bool; // 0x307 Mov
	return 2; // 0x308 Return
}


func_1157(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x486 PushV
	var_202_string = "b9q01DankoFree"; // 0x487 MovS
	func_1071(var_201_int, var_202_string); // 0x488 NEW_2
	var_205_int = 0; // 0x48a PushI
	var_206_bool = var_201_int != var_205_int; // 0x48b Neq
	if(var_206_bool == 0) goto Label_1167; // 0x48c JumpB
	var_199_bool = 1; // 0x48d MovB
	return 0; // 0x48e Return
	
Label_1167:
	var_199_bool = 0; // 0x48f MovB
	return 0; // 0x490 Return
}


func_1288(var_52_object, var_53_string, var_54_float)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_object = Obj(); var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_object = Obj(); var_69_bool = 0; // 0x508 PushV
	GetMainOutdoorScene(var_68_object); // 0x509 Func
	var_70_bool = var_68_object == 0; // 0x50b NullEq
	if(var_70_bool == 0) goto Label_1297; // 0x50c JumpB
	var_71_string = "Can't find main outdoor scene"; // 0x50d PushS
	Trace(var_71_string); // 0x50e Func
	return 8; // 0x510 Return
	
Label_1297:
	GetLocator(var_53_string, var_69_bool, var_66_cvector, var_67_cvector); // 0x511 ObjFunc
	var_72_bool = var_69_bool == 0; // 0x513 Not
	if(var_72_bool == 0) goto Label_1307; // 0x514 JumpB
	var_73_string = "Warning: outdoor scene locator "; // 0x515 PushS
	var_74_int = var_73_string + var_53_string; // 0x516 Add
	var_75_string = " doesnt exist"; // 0x517 PushS
	var_76_int = var_74_int + var_75_string; // 0x518 Add
	Trace(var_76_int); // 0x519 Func
	
Label_1307:
	GetMap(var_52_object); // 0x51b ObjFunc
	var_77_bool = var_52_object == 0; // 0x51d NullEq
	if(var_77_bool == 0) goto Label_1315; // 0x51e JumpB
	var_78_string = "Can't find map"; // 0x51f PushS
	Trace(var_78_string); // 0x520 Func
	return 8; // 0x522 Return
	
Label_1315:
	var_79_float = GetByIndex(var_66_cvector, 0); // 0x523 PushE
	var_80_float = GetByIndex(var_66_cvector, 2); // 0x524 PushE
	SetMapParams(var_79_float, var_80_float, var_54_float); // 0x525 ObjFunc
	return 8; // 0x527 Return
}


func_777(var_35_bool, var_37_float)
{
	var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_bool = 0; var_47_float = 0; var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_bool = 0; var_55_bool = 0; // 0x309 PushV
	GetPosition(var_48_cvector); // 0x30a ObjFunc
	GetEyesHeight(var_47_float); // 0x30c ObjFunc
	var_56_float = GetByIndex(var_48_cvector, 1); // 0x30e PushE
	var_56_float = var_56_float + var_47_float; // 0x30f Add2
	SetByIndex(var_48_cvector, 1) = var_56_float; // 0x310 PopE
	GetPosition(var_49_cvector); // 0x311 Func
	GetEyesHeight(var_47_float); // 0x313 Func
	var_57_float = GetByIndex(var_49_cvector, 1); // 0x315 PushE
	var_57_float = var_57_float + var_47_float; // 0x316 Add2
	SetByIndex(var_49_cvector, 1) = var_57_float; // 0x317 PopE
	var_50_cvector = var_48_cvector - var_49_cvector; // 0x318 Sub2
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x319 PushE
	var_58_float = 0; // 0x31a MovI
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x31b PopE
	var_59_int = var_50_cvector | var_50_cvector; // 0x31c Or
	var_60_float = sqrt(var_59_int); // 0x31d Sqrt
	var_50_cvector = var_50_cvector / var_50_cvector; // 0x31e Div2
	var_51_cvector = -var_50_cvector; // 0x31f Neg2
	var_61_float = var_50_cvector * var_37_float; // 0x320 Mult
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); // 0x321 PushV
	var_64_cvector = CVector(0.0, 1.0, 0.0); // 0x322 PushVec
	var_63_cvector = var_51_cvector ^ var_64_cvector; // 0x323 Xor2
	func_1061(var_62_cvector, var_63_cvector); // 0x324 NEW_2
	var_70_int = 25; // 0x326 PushI
	var_71_float = var_62_cvector * var_70_int; // 0x327 Mult
	var_72_int = var_61_float + var_71_float; // 0x328 Add
	var_73_cvector = CVector(0.0, 10.0, 0.0); // 0x329 PushVec
	var_52_cvector = var_72_int - var_73_cvector; // 0x32a Sub2
	var_53_cvector = var_49_cvector + var_52_cvector; // 0x32b Add2
	IsOverrideActive(var_54_bool); // 0x32c Func
	var_74_bool = var_54_bool; // 0x32e Push
	if(var_74_bool == 0) goto Label_818; // 0x32f JumpB
	var_35_bool = 0; // 0x330 MovB
	return 18; // 0x331 Return
	
Label_818:
	StopWorld(); // 0x332 Func
	var_75_bool = 1; // 0x334 PushB
	CameraTransit(var_53_cvector, var_51_cvector, var_75_bool); // 0x335 Func
	var_76_float = GetByIndex(var_52_cvector, 0); // 0x337 PushE
	var_77_float = GetByIndex(var_52_cvector, 2); // 0x338 PushE
	Rotate(var_76_float, var_77_float); // 0x339 Func
	var_78_bool = 0; // 0x33b PushV
	func_1346(var_78_bool); // 0x33c NEW_2
	if(var_78_bool == 0) goto Label_832; // 0x33e JumpB
	goto Label_840; // 0x33f Jump
	
Label_840:
	CameraWaitForPlayFinish(); // 0x348 Func
	ResumeWorld(); // 0x34a Func
	var_35_bool = 1; // 0x34c MovB
	return 18; // 0x34d Return
	
Label_832:
	var_79_string = "head"; // 0x340 PushS
	HasAnimationTrack(var_55_bool, var_79_string); // 0x341 Func
	var_80_bool = var_55_bool; // 0x343 Push
	if(var_80_bool == 0) goto Label_840; // 0x344 JumpB
	var_81_string = "head"; // 0x345 PushS
	LookAsyncCamera(var_81_string); // 0x346 Func
}


func_1033(var_130_bool, var_131_string)
{
	var_132_bool = 0; var_133_bool = 0; // 0x409 PushV
	var_134_bool = 0; // 0x40a PushV
	func_1346(var_134_bool); // 0x40b NEW_2
	if(var_134_bool == 0) goto Label_1046; // 0x40d JumpB
	lshHasSpeech(var_133_bool, var_131_string); // 0x40e Func
	var_135_bool = var_133_bool; // 0x410 Push
	if(var_135_bool == 0) goto Label_1046; // 0x411 JumpB
	lshPlaySpeech(var_131_string); // 0x412 Func
	var_130_bool = 1; // 0x414 MovB
	return 2; // 0x415 Return
	
Label_1046:
	var_130_bool = 0; // 0x416 MovB
	return 2; // 0x417 Return
}


func_1169(var_207_bool)
{
	var_209_int = 0; var_210_string = ""; // 0x492 PushV
	var_210_string = "oob9Danko1"; // 0x493 MovS
	func_1071(var_209_int, var_210_string); // 0x494 NEW_2
	var_211_int = 0; // 0x496 PushI
	var_212_bool = var_209_int == var_211_int; // 0x497 Eq
	if(var_212_bool == 0) goto Label_1179; // 0x498 JumpB
	var_207_bool = 1; // 0x499 MovB
	return 0; // 0x49a Return
	
Label_1179:
	var_207_bool = 0; // 0x49b MovB
	return 0; // 0x49c Return
}


func_1048()
{
	var_8_bool = 0; // 0x418 PushV
	func_1346(var_8_bool); // 0x419 NEW_2
	if(var_8_bool == 0) goto Label_1054; // 0x41b JumpB
	lshStopSpeech(); // 0x41c Func
	
Label_1054:
	return 0; // 0x41e Return
}


func_922(var_107_bool)
{
	var_109_string = ""; var_110_int = 0; var_111_bool = 0; var_112_int = 0; var_113_string = ""; var_114_string = ""; var_115_int = 0; var_116_bool = 0; var_117_int = 0; var_118_string = ""; // 0x39a PushV
	var_114_string = "c"; // 0x39b MovS
	var_115_int = 0; // 0x39c MovI
	
Label_925:
	var_119_int = 1; // 0x39d PushI
	if(var_119_int == 0) goto Label_938; // 0x39e JumpB
	var_120_int = 1; // 0x39f PushI
	var_121_int = var_115_int + var_120_int; // 0x3a0 Add
	var_122_int = var_114_string + var_121_int; // 0x3a1 Add
	HasProperty(var_122_int, var_116_bool); // 0x3a2 ObjFunc
	var_123_bool = var_116_bool == 0; // 0x3a4 Not
	if(var_123_bool == 0) goto Label_935; // 0x3a5 JumpB
	goto Label_938; // 0x3a6 Jump
	
Label_938:
	var_124_bool = var_115_int == 0; // 0x3aa Not
	if(var_124_bool == 0) goto Label_942; // 0x3ab JumpB
	var_107_bool = 0; // 0x3ac MovB
	return 10; // 0x3ad Return
	
Label_942:
	var_117_int = 0; // 0x3ae MovI
	var_125_int = 1; // 0x3af PushI
	var_126_bool = var_115_int > var_125_int; // 0x3b0 GT
	if(var_126_bool == 0) goto Label_948; // 0x3b1 JumpB
	irand(var_117_int, var_115_int); // 0x3b2 Func
	
Label_948:
	var_127_int = 1; // 0x3b4 PushI
	var_128_int = var_117_int + var_127_int; // 0x3b5 Add
	var_129_int = var_114_string + var_128_int; // 0x3b6 Add
	GetProperty(var_129_int, var_118_string); // 0x3b7 ObjFunc
	var_130_bool = 0; var_131_string = ""; // 0x3b9 PushV
	var_131_string = var_118_string; // 0x3ba Mov
	func_1033(var_130_bool, var_131_string); // 0x3bb NEW_2
	var_107_bool = var_130_bool; // 0x3bc Mov
	return 10; // 0x3be Return
	
Label_935:
	var_136_int = 1; // 0x3a7 PushI
	var_115_int = var_115_int + var_136_int; // 0x3a8 Add2
	goto Label_925; // 0x3a9 Jump
}


func_1181(var_261_bool)
{
	var_263_int = 0; var_264_string = ""; // 0x49e PushV
	var_264_string = "oob9Danko2"; // 0x49f MovS
	func_1071(var_263_int, var_264_string); // 0x4a0 NEW_2
	var_265_int = 0; // 0x4a2 PushI
	var_266_bool = var_263_int == var_265_int; // 0x4a3 Eq
	if(var_266_bool == 0) goto Label_1191; // 0x4a4 JumpB
	var_261_bool = 1; // 0x4a5 MovB
	return 0; // 0x4a6 Return
	
Label_1191:
	var_261_bool = 0; // 0x4a7 MovB
	return 0; // 0x4a8 Return
}


func_1055(var_98_object)
{
	var_99_object = Obj(); var_100_object = Obj(); // 0x41f PushV
	self(var_100_object); // 0x420 Func
	var_98_object = var_100_object; // 0x422 Mov
	return 2; // 0x423 Return
}


func_1061(var_62_cvector, var_63_cvector)
{
	var_65_float = 0; var_66_float = 0; // 0x425 PushV
	var_67_int = var_63_cvector | var_63_cvector; // 0x426 Or
	var_66_float = sqrt(var_67_int); // 0x427 Sqrt2
	var_68_float = 0.0; // 0x428 PushF
	var_69_bool = var_66_float < var_68_float; // 0x429 LT
	if(var_69_bool == 0) goto Label_1069; // 0x42a JumpB
	var_62_cvector = CVector(0.0, 0.0, 0.0); // 0x42b MovV
	return 2; // 0x42c Return
	
Label_1069:
	var_62_cvector = var_63_cvector / var_63_cvector; // 0x42d Div2
	return 2; // 0x42e Return
}


func_1321(var_87_int)
{
	var_88_int = 0; var_89_int = 0; // 0x529 PushV
	var_90_string = "branch"; // 0x52a PushS
	GetVariable(var_90_string, var_89_int); // 0x52b Func
	var_91_int = 0; // 0x52d PushI
	var_92_bool = var_89_int == var_91_int; // 0x52e Eq
	if(var_92_bool == 0) goto Label_1331; // 0x52f JumpB
	var_87_int = 1; // 0x530 MovI
	return 2; // 0x531 Return
	
Label_1331:
	var_93_int = 1; // 0x533 PushI
	var_94_bool = var_89_int == var_93_int; // 0x534 Eq
	if(var_94_bool == 0) goto Label_1336; // 0x535 JumpB
	var_87_int = 2; // 0x536 MovI
	return 2; // 0x537 Return
	
Label_1336:
	var_87_int = 3; // 0x538 MovI
	return 2; // 0x539 Return
}


func_1193(var_284_bool)
{
	var_286_int = 0; var_287_string = ""; // 0x4aa PushV
	var_287_string = "oob9Danko3"; // 0x4ab MovS
	func_1071(var_286_int, var_287_string); // 0x4ac NEW_2
	var_288_int = 0; // 0x4ae PushI
	var_289_bool = var_286_int == var_288_int; // 0x4af Eq
	if(var_289_bool == 0) goto Label_1203; // 0x4b0 JumpB
	var_284_bool = 1; // 0x4b1 MovB
	return 0; // 0x4b2 Return
	
Label_1203:
	var_284_bool = 0; // 0x4b3 MovB
	return 0; // 0x4b4 Return
}


func_1071(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x42f PushV
	GetVariable(var_202_string, var_204_int); // 0x430 Func
	var_201_int = var_204_int; // 0x432 Mov
	return 2; // 0x433 Return
}


func_1076(var_151_int)
{
	var_152_float = 0; var_153_float = 0; // 0x434 PushV
	GetGameTime(var_153_float); // 0x435 Func
	var_154_int = 1; // 0x437 PushI
	var_155_int = 0; // 0x438 PushV
	var_156_int = 24; // 0x439 PushI
	var_155_int = var_153_float / var_153_float; // 0x43a Div2
	var_151_int = var_154_int + var_155_int; // 0x43b Add2
	return 2; // 0x43c Return
}


func_1205(var_270_bool)
{
	var_272_int = 0; var_273_string = ""; // 0x4b6 PushV
	var_273_string = "oob9Danko4"; // 0x4b7 MovS
	func_1071(var_272_int, var_273_string); // 0x4b8 NEW_2
	var_274_int = 0; // 0x4ba PushI
	var_275_bool = var_272_int == var_274_int; // 0x4bb Eq
	if(var_275_bool == 0) goto Label_1215; // 0x4bc JumpB
	var_270_bool = 1; // 0x4bd MovB
	return 0; // 0x4be Return
	
Label_1215:
	var_270_bool = 0; // 0x4bf MovB
	return 0; // 0x4c0 Return
}


func_1338(var_84_int)
{
	var_84_int = 515573; // 0x53a MovI
	return 0; // 0x53b Return
}


func_1340(var_83_int)
{
	var_83_int = 504032; // 0x53c MovI
	return 0; // 0x53d Return
}


func_1085()
{
	var_215_string = "oob9Danko1"; // 0x43e PushS
	var_216_int = 1; // 0x43f PushI
	SetVariable(var_215_string, var_216_int); // 0x440 Func
	return 0; // 0x442 Return
}


func_1342(var_85_string)
{
	var_85_string = "ui/NPC_Bakalavr.png"; // 0x53e MovS
	return 0; // 0x53f Return
}


func_959(var_138_bool)
{
	var_140_string = ""; var_141_int = 0; var_142_bool = 0; var_143_int = 0; var_144_string = ""; var_145_string = ""; var_146_int = 0; var_147_bool = 0; var_148_int = 0; var_149_string = ""; // 0x3bf PushV
	var_150_string = "d"; // 0x3c0 PushS
	var_151_int = 0; // 0x3c1 PushV
	func_1076(var_151_int); // 0x3c2 NEW_2
	var_157_int = var_150_string + var_151_int; // 0x3c4 Add
	var_158_string = "m"; // 0x3c5 PushS
	var_145_string = var_157_int + var_158_string; // 0x3c6 Add2
	var_146_int = 0; // 0x3c7 MovI
	
Label_968:
	var_159_int = 1; // 0x3c8 PushI
	if(var_159_int == 0) goto Label_981; // 0x3c9 JumpB
	var_160_int = 1; // 0x3ca PushI
	var_161_int = var_146_int + var_160_int; // 0x3cb Add
	var_162_int = var_145_string + var_161_int; // 0x3cc Add
	HasProperty(var_162_int, var_147_bool); // 0x3cd ObjFunc
	var_163_bool = var_147_bool == 0; // 0x3cf Not
	if(var_163_bool == 0) goto Label_978; // 0x3d0 JumpB
	goto Label_981; // 0x3d1 Jump
	
Label_981:
	var_164_bool = var_146_int == 0; // 0x3d5 Not
	if(var_164_bool == 0) goto Label_985; // 0x3d6 JumpB
	var_138_bool = 0; // 0x3d7 MovB
	return 10; // 0x3d8 Return
	
Label_985:
	var_148_int = 0; // 0x3d9 MovI
	var_165_int = 1; // 0x3da PushI
	var_166_bool = var_146_int > var_165_int; // 0x3db GT
	if(var_166_bool == 0) goto Label_991; // 0x3dc JumpB
	irand(var_148_int, var_146_int); // 0x3dd Func
	
Label_991:
	var_167_int = 1; // 0x3df PushI
	var_168_int = var_148_int + var_167_int; // 0x3e0 Add
	var_169_int = var_145_string + var_168_int; // 0x3e1 Add
	GetProperty(var_169_int, var_149_string); // 0x3e2 ObjFunc
	var_170_bool = 0; var_171_string = ""; // 0x3e4 PushV
	var_171_string = var_149_string; // 0x3e5 Mov
	func_1033(var_170_bool, var_171_string); // 0x3e6 NEW_2
	var_138_bool = var_170_bool; // 0x3e7 Mov
	return 10; // 0x3e9 Return
	
Label_978:
	var_172_int = 1; // 0x3d2 PushI
	var_146_int = var_146_int + var_172_int; // 0x3d3 Add2
	goto Label_968; // 0x3d4 Jump
}


func_1344(var_86_string)
{
	var_86_string = "ui/NPC_Bakalavr_b.png"; // 0x540 MovS
	return 0; // 0x541 Return
}


func_1217()
{
	var_15_object = Obj(); var_16_object = Obj(); // 0x4c1 PushV
	var_17_int = 303; // 0x4c2 PushI
	var_18_int = 1; // 0x4c3 PushI
	var_19_int = 521618; // 0x4c4 PushI
	CreateDiaryEntry(var_16_object, var_17_int, var_18_int, var_19_int); // 0x4c5 Func
	var_20_bool = 0; var_21_object = Obj(); var_22_int = 0; // 0x4c7 PushV
	var_21_object = var_16_object; // 0x4c8 Mov
	var_22_int = 297; // 0x4c9 MovI
	func_1243(var_20_bool, var_21_object, var_22_int); // 0x4ca NEW_2
	return 2; // 0x4cc Return
}


func_1346(var_78_bool)
{
	var_78_bool = 1; // 0x542 MovB
	return 0; // 0x543 Return
}


func_1091()
{
	var_94_string = "oob9Danko2"; // 0x444 PushS
	var_95_int = 1; // 0x445 PushI
	SetVariable(var_94_string, var_95_int); // 0x446 Func
	return 0; // 0x448 Return
}


func_706(var_23_object)
{
	var_24_int = 0; var_25_object = Obj(); // 0x2c3 PushV
	var_25_object = var_23_object; // 0x2c4 Mov
	TaskCall(0); // 0x2c5 TaskCall
	func_0(var_26_object, var_24_int, var_25_object); // 0x2c6 NEW_2
	TaskReturn(); // 0x2c7 TaskReturn
	return 0; // 0x2c9 Return
}


func_1097()
{
	var_13_string = "b9q01"; // 0x44a PushS
	var_14_int = 3; // 0x44b PushI
	SetVariable(var_13_string, var_14_int); // 0x44c Func
	func_1217(); // 0x44f NEW_2
	return 0; // 0x451 Return
}


func_846()
{
	var_298_bool = 0; var_299_bool = 0; // 0x34e PushV
	var_300_bool = 1; // 0x34f PushB
	CameraSwitchToNormal(var_300_bool); // 0x350 Func
	var_301_bool = 0; // 0x352 PushV
	func_1346(var_301_bool); // 0x353 NEW_2
	if(var_301_bool == 0) goto Label_855; // 0x355 JumpB
	goto Label_863; // 0x356 Jump
	
Label_863:
	return 2; // 0x35f Return
	
Label_855:
	var_302_string = "head"; // 0x357 PushS
	HasAnimationTrack(var_299_bool, var_302_string); // 0x358 Func
	var_303_bool = var_299_bool; // 0x35a Push
	if(var_303_bool == 0) goto Label_863; // 0x35b JumpB
	var_304_string = "head"; // 0x35c PushS
	UnlookAsync(var_304_string); // 0x35d Func
}


func_1230(var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); // 0x4ce PushV
	GetDiaryRoot(var_31_object); // 0x4cf Func
	var_32_bool = var_31_object == 0; // 0x4d1 Not
	if(var_32_bool == 0) goto Label_1240; // 0x4d2 JumpB
	var_33_string = "Can't retrieve diary root"; // 0x4d3 PushS
	Trace(var_33_string); // 0x4d4 Func
	var_29_object = 0; // 0x4d6 MovB
	return 2; // 0x4d7 Return
	
Label_1240:
	var_29_object = var_31_object; // 0x4d8 Mov
	return 2; // 0x4d9 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_191_object, var_192_object)
{
	var_0_object = var_192_object; // 0x52 TMov
	var_1_object = var_191_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_197_int = 1; // 0x55 PushI
	if(var_197_int == 0) goto Label_189; // 0x56 JumpB
	var_198_bool = 0; // 0x57 PushV
	var_198_bool = 0; // 0x58 MovB
	var_199_bool = 0; var_200_object = Obj(); // 0x59 PushV
	var_200_object = var_1_object; // 0x5a MovT
	func_1157(var_200_object); // 0x5b NEW_2
	if(var_199_bool == 0) goto Label_100; // 0x5d JumpB
	var_207_bool = 0; var_208_object = Obj(); // 0x5e PushV
	var_208_object = var_1_object; // 0x5f MovT
	func_1169(var_208_object); // 0x60 NEW_2
	if(var_207_bool == 0) goto Label_100; // 0x62 JumpB
	var_198_bool = 1; // 0x63 MovB
	
Label_100:
	if(var_198_bool == 0) goto Label_121; // 0x64 JumpB
	var_213_object = Obj(); var_214_object = Obj(); // 0x65 PushV
	var_213_object = var_1_object; // 0x66 MovT
	var_214_object = var_0_object; // 0x67 MovT
	func_1085(); // 0x68 NEW_2
	var_217_string = ""; // 0x6a PushV
	var_217_string = "Menace"; // 0x6b MovS
	func_219(var_192_object, var_217_string); // 0x6c NEW_2
	var_234_int = 521581; // 0x6e PushI
	SetMessage(var_234_int); // 0x6f TObjFunc
	ClearReplies(); // 0x71 TObjFunc
	var_235_int = 531554; // 0x73 PushI
	var_236_int = 32918; // 0x74 PushI
	var_237_int = 32917; // 0x75 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x76 TObjFunc
	goto Label_189; // 0x78 Jump
	
Label_189:
	var_238_bool = 0; // 0xbd PushV
	func_1346(var_238_bool); // 0xbe NEW_2
	if(var_238_bool == 0) goto Label_204; // 0xc0 JumpB
	
Label_193:
	lshWaitForAnimEnd(); // 0xc1 Func
	var_239_string = var_3_string; // 0xc3 PushT
	if(var_239_string == 0) goto Label_198; // 0xc4 JumpB
	goto Label_203; // 0xc5 Jump
	
Label_203:
	goto Label_218; // 0xcb Jump
	
Label_218:
	return 0; // 0xda Return
	
Label_198:
	var_240_string = ""; // 0xc6 PushV
	var_240_string = var_2_object; // 0xc7 MovT
	func_1002(var_240_string); // 0xc8 NEW_2
	goto Label_193; // 0xca Jump
	
Label_204:
	var_251_string = "all"; // 0xcc PushS
	var_252_string = "idle"; // 0xcd PushS
	PlayAnimation(var_251_string, var_252_string); // 0xce Func
	
Label_208:
	WaitForAnimEnd(); // 0xd0 Func
	var_253_string = var_3_string; // 0xd2 PushT
	if(var_253_string == 0) goto Label_213; // 0xd3 JumpB
	goto Label_218; // 0xd4 Jump
	
Label_213:
	var_254_string = "all"; // 0xd5 PushS
	var_255_string = "idle"; // 0xd6 PushS
	PlayAnimation(var_254_string, var_255_string); // 0xd7 Func
	goto Label_208; // 0xd9 Jump
	
Label_121:
	var_256_bool = 0; var_257_object = Obj(); // 0x79 PushV
	var_257_object = var_1_object; // 0x7a MovT
	func_1157(var_257_object); // 0x7b NEW_2
	var_258_bool = var_256_bool == 0; // 0x7d Not
	if(var_258_bool == 0) goto Label_162; // 0x7e JumpB
	var_259_string = ""; // 0x7f PushV
	var_259_string = "Neutral"; // 0x80 MovS
	func_219(var_192_object, var_259_string); // 0x81 NEW_2
	var_260_int = 521577; // 0x83 PushI
	SetMessage(var_260_int); // 0x84 TObjFunc
	ClearReplies(); // 0x86 TObjFunc
	var_261_bool = 0; var_262_object = Obj(); // 0x88 PushV
	var_262_object = var_1_object; // 0x89 MovT
	func_1181(var_262_object); // 0x8a NEW_2
	if(var_261_bool == 0) goto Label_146; // 0x8c JumpB
	var_267_int = 521578; // 0x8d PushI
	var_268_int = 22740; // 0x8e PushI
	var_269_int = 22739; // 0x8f PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x90 TObjFunc
	
Label_146:
	var_270_bool = 0; var_271_object = Obj(); // 0x92 PushV
	var_271_object = var_1_object; // 0x93 MovT
	func_1205(var_271_object); // 0x94 NEW_2
	if(var_270_bool == 0) goto Label_156; // 0x96 JumpB
	var_276_int = 522381; // 0x97 PushI
	var_277_int = 23547; // 0x98 PushI
	var_278_int = 23546; // 0x99 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x9a TObjFunc
	
Label_156:
	var_279_int = 521586; // 0x9c PushI
	var_280_int = -1; // 0x9d PushI
	var_281_int = 22747; // 0x9e PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x9f TObjFunc
	goto Label_189; // 0xa1 Jump
	
Label_162:
	var_282_string = ""; // 0xa2 PushV
	var_282_string = "Neutral"; // 0xa3 MovS
	func_219(var_192_object, var_282_string); // 0xa4 NEW_2
	var_283_int = 521601; // 0xa6 PushI
	SetMessage(var_283_int); // 0xa7 TObjFunc
	ClearReplies(); // 0xa9 TObjFunc
	var_284_bool = 0; var_285_object = Obj(); // 0xab PushV
	var_285_object = var_1_object; // 0xac MovT
	func_1193(var_285_object); // 0xad NEW_2
	if(var_284_bool == 0) goto Label_181; // 0xaf JumpB
	var_290_int = 522385; // 0xb0 PushI
	var_291_int = 23551; // 0xb1 PushI
	var_292_int = 23550; // 0xb2 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0xb3 TObjFunc
	
Label_181:
	var_293_int = 521602; // 0xb5 PushI
	var_294_int = -1; // 0xb6 PushI
	var_295_int = 22767; // 0xb7 PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0xb8 TObjFunc
	goto Label_189; // 0xba Jump
}


func_1106()
{
	var_100_string = "b9q01DankoAmmo"; // 0x453 PushS
	var_101_int = 1; // 0x454 PushI
	SetVariable(var_100_string, var_101_int); // 0x455 Func
	return 0; // 0x457 Return
}


func_1112()
{
	var_116_string = "oob9Danko3"; // 0x459 PushS
	var_117_int = 1; // 0x45a PushI
	SetVariable(var_116_string, var_117_int); // 0x45b Func
	return 0; // 0x45d Return
}


func_219(var_2_object, var_217_string)
{
	var_218_bool = 0; // 0xdc PushV
	func_1346(var_218_bool); // 0xdd NEW_2
	var_219_bool = var_218_bool == 0; // 0xdf Not
	if(var_219_bool == 0) goto Label_226; // 0xe0 JumpB
	return 0; // 0xe1 Return
	
Label_226:
	var_220_bool = var_217_string == var_2_object; // 0xe2 Eq
	if(var_220_bool == 0) goto Label_229; // 0xe3 JumpB
	return 0; // 0xe4 Return
	
Label_229:
	var_221_string = ""; var_222_bool = 0; // 0xe5 PushV
	var_221_string = var_217_string; // 0xe6 Mov
	var_223_string = ""; // 0xe7 PushS
	var_224_bool = var_217_string == var_223_string; // 0xe8 Eq
	if(var_224_bool == 0) goto Label_236; // 0xe9 JumpB
	var_222_bool = 0; // 0xea MovB
	goto Label_237; // 0xeb Jump
	
Label_237:
	func_1018(var_221_string, var_222_bool); // 0xed NEW_2
	var_2_object = var_217_string; // 0xef TMov
	return 0; // 0xf0 Return
	
Label_236:
	var_222_bool = 1; // 0xec MovB
}


func_1243(var_20_bool, var_21_object, var_22_int)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_int = 0; var_26_object = Obj(); var_27_object = Obj(); var_28_int = 0; // 0x4db PushV
	var_29_object = Obj(); // 0x4dc PushV
	func_1230(var_29_object); // 0x4dd NEW_2
	var_26_object = var_29_object; // 0x4de Mov
	Find(var_22_int, var_27_object); // 0x4e0 ObjFunc
	var_34_bool = var_27_object == 0; // 0x4e2 Not
	if(var_34_bool == 0) goto Label_1258; // 0x4e3 JumpB
	var_35_string = "Can't find diary parent with id: "; // 0x4e4 PushS
	var_36_int = var_35_string + var_22_int; // 0x4e5 Add
	Trace(var_36_int); // 0x4e6 Func
	var_20_bool = 0; // 0x4e8 MovB
	return 6; // 0x4e9 Return
	
Label_1258:
	AddChild(var_21_object); // 0x4ea ObjFunc
	var_37_int = 7; // 0x4ec PushI
	SendWorldWndMessage(var_37_int); // 0x4ed Func
	GetCategory(var_28_int); // 0x4ef ObjFunc
	SetDiarySection(var_28_int); // 0x4f1 Func
	var_20_bool = 0; // 0x4f3 MovB
	return 6; // 0x4f4 Return
}


func_1118()
{
	var_110_string = "oob9Danko4"; // 0x45f PushS
	var_111_int = 1; // 0x460 PushI
	SetVariable(var_110_string, var_111_int); // 0x461 Func
	return 0; // 0x463 Return
}


func_864(var_96_bool, var_97_object)
{
	var_101_int = 0; var_102_int = 0; var_103_int = 0; var_104_int = 0; // 0x360 PushV
	var_105_string = "voice_common"; // 0x361 PushS
	GetVariable(var_105_string, var_103_int); // 0x362 Func
	var_106_int = var_103_int; // 0x364 Push
	if(var_106_int == 0) goto Label_902; // 0x365 JumpB
	var_107_bool = 0; var_108_object = Obj(); // 0x366 PushV
	var_108_object = var_97_object; // 0x367 Mov
	func_922(var_108_object); // 0x368 NEW_2
	var_137_bool = var_107_bool == 0; // 0x36a Not
	if(var_137_bool == 0) goto Label_884; // 0x36b JumpB
	var_138_bool = 0; var_139_object = Obj(); // 0x36c PushV
	var_139_object = var_97_object; // 0x36d Mov
	func_959(var_139_object); // 0x36e NEW_2
	var_173_bool = var_138_bool == 0; // 0x370 Not
	if(var_173_bool == 0) goto Label_884; // 0x371 JumpB
	var_96_bool = 0; // 0x372 MovB
	return 4; // 0x373 Return
	
Label_884:
	var_174_int = 2; // 0x374 PushI
	irand(var_104_int, var_174_int); // 0x375 Func
	var_175_int = var_104_int; // 0x377 Push
	if(var_175_int == 0) goto Label_897; // 0x378 JumpB
	var_176_string = "voice_common"; // 0x379 PushS
	var_177_int = 1; // 0x37a PushI
	var_178_int = var_103_int + var_177_int; // 0x37b Add
	var_179_int = 3; // 0x37c PushI
	var_180_int = var_178_int / var_179_int; // 0x37d Mod
	SetVariable(var_176_string, var_180_int); // 0x37e Func
	goto Label_901; // 0x380 Jump
	
Label_901:
	goto Label_920; // 0x385 Jump
	
Label_920:
	var_96_bool = 1; // 0x398 MovB
	return 4; // 0x399 Return
	
Label_897:
	var_181_string = "voice_common"; // 0x381 PushS
	var_182_int = 0; // 0x382 PushI
	SetVariable(var_181_string, var_182_int); // 0x383 Func
	
Label_902:
	var_183_bool = 0; var_184_object = Obj(); // 0x386 PushV
	var_184_object = var_97_object; // 0x387 Mov
	func_959(var_184_object); // 0x388 NEW_2
	var_185_bool = var_183_bool == 0; // 0x38a Not
	if(var_185_bool == 0) goto Label_916; // 0x38b JumpB
	var_186_bool = 0; var_187_object = Obj(); // 0x38c PushV
	var_187_object = var_97_object; // 0x38d Mov
	func_922(var_187_object); // 0x38e NEW_2
	var_188_bool = var_186_bool == 0; // 0x390 Not
	if(var_188_bool == 0) goto Label_916; // 0x391 JumpB
	var_96_bool = 0; // 0x392 MovB
	return 4; // 0x393 Return
	
Label_916:
	var_189_string = "voice_common"; // 0x394 PushS
	var_190_int = 1; // 0x395 PushI
	SetVariable(var_189_string, var_190_int); // 0x396 Func
}


func_1124()
{
	var_40_int = 0; var_41_string = ""; // 0x465 PushV
	var_41_string = "map_chertez_state"; // 0x466 MovS
	func_1071(var_40_int, var_41_string); // 0x467 NEW_2
	var_44_int = 4; // 0x469 PushI
	var_45_bool = var_40_int <= var_44_int; // 0x46a LE
	if(var_45_bool == 0) goto Label_1140; // 0x46b JumpB
	var_46_string = "map_chertez_state"; // 0x46c PushS
	var_47_int = 4; // 0x46d PushI
	SetVariable(var_46_string, var_47_int); // 0x46e Func
	var_48_string = "map_chertez_force"; // 0x470 PushS
	var_49_int = 1; // 0x471 PushI
	SetVariable(var_48_string, var_49_int); // 0x472 Func
	
Label_1140:
	return 0; // 0x474 Return
}


func_1002(var_9_string)
{
	var_10_bool = 0; var_11_float = 0; var_12_float = 0; var_13_bool = 0; var_14_float = 0; var_15_float = 0; // 0x3ea PushV
	lshHasAnimation(var_13_bool, var_9_string); // 0x3eb Func
	var_16_bool = var_13_bool; // 0x3ed Push
	if(var_16_bool == 0) goto Label_1013; // 0x3ee JumpB
	lshGetAnimTimes(var_9_string, var_14_float, var_15_float); // 0x3ef Func
	var_17_bool = 0; // 0x3f1 PushB
	lshPlayAnimation(var_14_float, var_15_float, var_17_bool); // 0x3f2 Func
	goto Label_1017; // 0x3f4 Jump
	
Label_1017:
	return 6; // 0x3f9 Return
	
Label_1013:
	var_18_string = "Can't find lsh animation : "; // 0x3f5 PushS
	var_19_int = var_18_string + var_9_string; // 0x3f6 Add
	Trace(var_19_int); // 0x3f7 Func
}


func_753(var_13_bool, var_14_cvector)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; // 0x2f1 PushV
	GetPosition(var_18_cvector); // 0x2f2 Func
	var_19_cvector = var_14_cvector - var_18_cvector; // 0x2f4 Sub2
	var_21_float = GetByIndex(var_19_cvector, 0); // 0x2f5 PushE
	var_22_float = GetByIndex(var_19_cvector, 2); // 0x2f6 PushE
	Rotate(var_21_float, var_22_float, var_20_bool); // 0x2f7 Func
	var_13_bool = var_20_bool; // 0x2f9 Mov
	return 6; // 0x2fa Return
}


func_1141()
{
	var_52_object = Obj(); var_53_string = ""; var_54_float = 0; // 0x476 PushV
	var_55_object = Obj(); // 0x477 PushV
	func_1271(var_55_object); // 0x478 NEW_2
	var_52_object = var_55_object; // 0x479 Mov
	var_53_string = "pt_map_aglaja"; // 0x47b MovS
	var_54_float = -1; // 0x47c MovI
	func_1288(var_52_object, var_53_string, var_54_float); // 0x47d NEW_2
	var_81_object = Obj(); // 0x47f PushV
	func_1271(var_81_object); // 0x480 NEW_2
	ShowMap(var_81_object); // 0x482 ObjFunc
	return 0; // 0x484 Return
}


func_1271(var_55_object)
{
	var_56_object = Obj(); var_57_object = Obj(); var_58_object = Obj(); var_59_object = Obj(); // 0x4f7 PushV
	GetMainOutdoorScene(var_58_object); // 0x4f8 Func
	var_60_bool = var_58_object == 0; // 0x4fa NullEq
	if(var_60_bool == 0) goto Label_1282; // 0x4fb JumpB
	var_61_string = "Can't find main outdoor scene"; // 0x4fc PushS
	Trace(var_61_string); // 0x4fd Func
	var_59_object = 0; // 0x4ff SetNull
	var_55_object = var_59_object; // 0x500 Mov
	return 4; // 0x501 Return
	
Label_1282:
	GetMap(var_59_object); // 0x502 ObjFunc
	var_55_object = var_59_object; // 0x504 Mov
	return 4; // 0x505 Return
}


func_1018(var_221_string, var_222_bool)
{
	var_225_bool = 0; var_226_float = 0; var_227_float = 0; var_228_bool = 0; var_229_float = 0; var_230_float = 0; // 0x3fa PushV
	lshHasAnimation(var_228_bool, var_221_string); // 0x3fb Func
	var_231_bool = var_228_bool; // 0x3fd Push
	if(var_231_bool == 0) goto Label_1028; // 0x3fe JumpB
	lshGetAnimTimes(var_221_string, var_229_float, var_230_float); // 0x3ff Func
	lshPlayAnimation(var_229_float, var_230_float, var_222_bool); // 0x401 Func
	goto Label_1032; // 0x403 Jump
	
Label_1032:
	return 6; // 0x408 Return
	
Label_1028:
	var_232_string = "Can't find lsh animation : "; // 0x404 PushS
	var_233_int = var_232_string + var_221_string; // 0x405 Add
	Trace(var_233_int); // 0x406 Func
}


func_763(var_9_bool)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); // 0x2fb PushV
	GetPosition(var_12_cvector); // 0x2fc ObjFunc
	var_13_bool = 0; var_14_cvector = CVector(0,0,0); // 0x2fe PushV
	var_14_cvector = var_12_cvector; // 0x2ff Mov
	func_753(var_13_bool, var_14_cvector); // 0x300 NEW_2
	var_9_bool = var_13_bool; // 0x301 Mov
	return 2; // 0x303 Return
}


