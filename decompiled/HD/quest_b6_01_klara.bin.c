task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xdd PushI
	if(var_9_int == 0) goto Label_657; // 0xde JumpB
	func_1275(); // 0xe0 NEW_2
	var_11_int = 21762; // 0xe2 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xe3 Eq
	if(var_12_bool == 0) goto Label_234; // 0xe4 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xe5 PushV
	var_13_object = var_1_object; // 0xe6 MovT
	var_14_object = var_0_object; // 0xe7 MovT
	func_1370(); // 0xe8 NEW_2
	
Label_234:
	var_17_int = 21883; // 0xea PushI
	var_18_bool = var_8_bool == var_17_int; // 0xeb Eq
	if(var_18_bool == 0) goto Label_252; // 0xec JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0xed PushV
	var_19_object = var_1_object; // 0xee MovT
	var_20_object = var_0_object; // 0xef MovT
	func_1376(); // 0xf0 NEW_2
	var_71_object = Obj(); var_72_object = Obj(); // 0xf2 PushV
	var_71_object = var_1_object; // 0xf3 MovT
	var_72_object = var_0_object; // 0xf4 MovT
	func_1421(); // 0xf5 NEW_2
	var_83_object = Obj(); var_84_object = Obj(); // 0xf7 PushV
	var_83_object = var_1_object; // 0xf8 MovT
	var_84_object = var_0_object; // 0xf9 MovT
	func_1428(); // 0xfa NEW_2
	
Label_252:
	var_109_int = 21780; // 0xfc PushI
	var_110_bool = var_8_bool == var_109_int; // 0xfd Eq
	if(var_110_bool == 0) goto Label_260; // 0xfe JumpB
	var_111_object = Obj(); var_112_object = Obj(); // 0xff PushV
	var_111_object = var_1_object; // 0x100 MovT
	var_112_object = var_0_object; // 0x101 MovT
	func_1450(); // 0x102 NEW_2
	
Label_260:
	var_124_int = 21788; // 0x104 PushI
	var_125_bool = var_8_bool == var_124_int; // 0x105 Eq
	if(var_125_bool == 0) goto Label_268; // 0x106 JumpB
	var_126_object = Obj(); var_127_object = Obj(); // 0x107 PushV
	var_126_object = var_1_object; // 0x108 MovT
	var_127_object = var_0_object; // 0x109 MovT
	func_1409(); // 0x10a NEW_2
	
Label_268:
	var_130_int = 21793; // 0x10c PushI
	var_131_bool = var_8_bool == var_130_int; // 0x10d Eq
	if(var_131_bool == 0) goto Label_276; // 0x10e JumpB
	var_132_object = Obj(); var_133_object = Obj(); // 0x10f PushV
	var_132_object = var_1_object; // 0x110 MovT
	var_133_object = var_0_object; // 0x111 MovT
	func_1415(); // 0x112 NEW_2
	
Label_276:
	var_136_int = 21761; // 0x114 PushI
	var_137_bool = var_7_cvector == var_136_int; // 0x115 Eq
	if(var_137_bool == 0) goto Label_358; // 0x116 JumpB
	var_138_object = Obj(); var_139_object = Obj(); // 0x117 PushV
	var_138_object = var_1_object; // 0x118 MovT
	var_139_object = var_0_object; // 0x119 MovT
	func_1444(); // 0x11a NEW_2
	var_142_string = ""; // 0x11c PushV
	var_142_string = "Fear"; // 0x11d MovS
	func_198(var_8_bool, var_142_string); // 0x11e NEW_2
	var_159_int = 520559; // 0x120 PushI
	SetMessage(var_159_int); // 0x121 TObjFunc
	ClearReplies(); // 0x123 TObjFunc
	var_160_bool = 0; // 0x125 PushV
	var_160_bool = 0; // 0x126 MovB
	var_161_bool = 0; var_162_object = Obj(); // 0x127 PushV
	var_162_object = var_1_object; // 0x128 MovT
	func_1460(var_162_object); // 0x129 NEW_2
	if(var_161_bool == 0) goto Label_306; // 0x12b JumpB
	var_169_bool = 0; var_170_object = Obj(); // 0x12c PushV
	var_170_object = var_1_object; // 0x12d MovT
	func_1472(var_170_object); // 0x12e NEW_2
	if(var_169_bool == 0) goto Label_306; // 0x130 JumpB
	var_160_bool = 1; // 0x131 MovB
	
Label_306:
	if(var_160_bool == 0) goto Label_312; // 0x132 JumpB
	var_175_int = 520560; // 0x133 PushI
	var_176_int = 21763; // 0x134 PushI
	var_177_int = 21762; // 0x135 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x136 TObjFunc
	
Label_312:
	var_178_bool = 0; // 0x138 PushV
	var_178_bool = 0; // 0x139 MovB
	var_179_bool = 0; var_180_object = Obj(); // 0x13a PushV
	var_180_object = var_1_object; // 0x13b MovT
	func_1460(var_180_object); // 0x13c NEW_2
	var_181_bool = var_179_bool == 0; // 0x13e Not
	if(var_181_bool == 0) goto Label_326; // 0x13f JumpB
	var_182_bool = 0; var_183_object = Obj(); // 0x140 PushV
	var_183_object = var_1_object; // 0x141 MovT
	func_1484(var_183_object); // 0x142 NEW_2
	if(var_182_bool == 0) goto Label_326; // 0x144 JumpB
	var_178_bool = 1; // 0x145 MovB
	
Label_326:
	if(var_178_bool == 0) goto Label_332; // 0x146 JumpB
	var_188_int = 520583; // 0x147 PushI
	var_189_int = 21789; // 0x148 PushI
	var_190_int = 21788; // 0x149 PushI
	AddReply(var_188_int, var_189_int, var_190_int); // 0x14a TObjFunc
	
Label_332:
	var_191_bool = 0; // 0x14c PushV
	var_191_bool = 0; // 0x14d MovB
	var_192_bool = 0; var_193_object = Obj(); // 0x14e PushV
	var_193_object = var_1_object; // 0x14f MovT
	func_1460(var_193_object); // 0x150 NEW_2
	var_194_bool = var_192_bool == 0; // 0x152 Not
	if(var_194_bool == 0) goto Label_346; // 0x153 JumpB
	var_195_bool = 0; var_196_object = Obj(); // 0x154 PushV
	var_196_object = var_1_object; // 0x155 MovT
	func_1496(var_196_object); // 0x156 NEW_2
	if(var_195_bool == 0) goto Label_346; // 0x158 JumpB
	var_191_bool = 1; // 0x159 MovB
	
Label_346:
	if(var_191_bool == 0) goto Label_352; // 0x15a JumpB
	var_201_int = 520588; // 0x15b PushI
	var_202_int = 21794; // 0x15c PushI
	var_203_int = 21793; // 0x15d PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x15e TObjFunc
	
Label_352:
	var_204_int = 520593; // 0x160 PushI
	var_205_int = -1; // 0x161 PushI
	var_206_int = 21798; // 0x162 PushI
	AddReply(var_204_int, var_205_int, var_206_int); // 0x163 TObjFunc
	return 0; // 0x165 Return
	
Label_358:
	var_207_int = 21794; // 0x166 PushI
	var_208_bool = var_7_cvector == var_207_int; // 0x167 Eq
	if(var_208_bool == 0) goto Label_376; // 0x168 JumpB
	var_209_string = ""; // 0x169 PushV
	var_209_string = "Fear"; // 0x16a MovS
	func_198(var_8_bool, var_209_string); // 0x16b NEW_2
	var_210_int = 520589; // 0x16d PushI
	SetMessage(var_210_int); // 0x16e TObjFunc
	ClearReplies(); // 0x170 TObjFunc
	var_211_int = 520590; // 0x172 PushI
	var_212_int = 21796; // 0x173 PushI
	var_213_int = 21795; // 0x174 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x175 TObjFunc
	return 0; // 0x177 Return
	
Label_376:
	var_214_int = 21796; // 0x178 PushI
	var_215_bool = var_7_cvector == var_214_int; // 0x179 Eq
	if(var_215_bool == 0) goto Label_394; // 0x17a JumpB
	var_216_string = ""; // 0x17b PushV
	var_216_string = "Fear"; // 0x17c MovS
	func_198(var_8_bool, var_216_string); // 0x17d NEW_2
	var_217_int = 520591; // 0x17f PushI
	SetMessage(var_217_int); // 0x180 TObjFunc
	ClearReplies(); // 0x182 TObjFunc
	var_218_int = 520592; // 0x184 PushI
	var_219_int = -1; // 0x185 PushI
	var_220_int = 21797; // 0x186 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x187 TObjFunc
	return 0; // 0x189 Return
	
Label_394:
	var_221_int = 21789; // 0x18a PushI
	var_222_bool = var_7_cvector == var_221_int; // 0x18b Eq
	if(var_222_bool == 0) goto Label_412; // 0x18c JumpB
	var_223_string = ""; // 0x18d PushV
	var_223_string = "Smile"; // 0x18e MovS
	func_198(var_8_bool, var_223_string); // 0x18f NEW_2
	var_224_int = 520584; // 0x191 PushI
	SetMessage(var_224_int); // 0x192 TObjFunc
	ClearReplies(); // 0x194 TObjFunc
	var_225_int = 520585; // 0x196 PushI
	var_226_int = 21791; // 0x197 PushI
	var_227_int = 21790; // 0x198 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x199 TObjFunc
	return 0; // 0x19b Return
	
Label_412:
	var_228_int = 21791; // 0x19c PushI
	var_229_bool = var_7_cvector == var_228_int; // 0x19d Eq
	if(var_229_bool == 0) goto Label_435; // 0x19e JumpB
	var_230_string = ""; // 0x19f PushV
	var_230_string = "Smile"; // 0x1a0 MovS
	func_198(var_8_bool, var_230_string); // 0x1a1 NEW_2
	var_231_int = 520586; // 0x1a3 PushI
	SetMessage(var_231_int); // 0x1a4 TObjFunc
	ClearReplies(); // 0x1a6 TObjFunc
	var_232_int = 520587; // 0x1a8 PushI
	var_233_int = -1; // 0x1a9 PushI
	var_234_int = 21792; // 0x1aa PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x1ab TObjFunc
	var_235_int = 528358; // 0x1ad PushI
	var_236_int = 29730; // 0x1ae PushI
	var_237_int = 29729; // 0x1af PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x1b0 TObjFunc
	return 0; // 0x1b2 Return
	
Label_435:
	var_238_int = 29730; // 0x1b3 PushI
	var_239_bool = var_7_cvector == var_238_int; // 0x1b4 Eq
	if(var_239_bool == 0) goto Label_453; // 0x1b5 JumpB
	var_240_string = ""; // 0x1b6 PushV
	var_240_string = "Smile"; // 0x1b7 MovS
	func_198(var_8_bool, var_240_string); // 0x1b8 NEW_2
	var_241_int = 528359; // 0x1ba PushI
	SetMessage(var_241_int); // 0x1bb TObjFunc
	ClearReplies(); // 0x1bd TObjFunc
	var_242_int = 528360; // 0x1bf PushI
	var_243_int = -1; // 0x1c0 PushI
	var_244_int = 29731; // 0x1c1 PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x1c2 TObjFunc
	return 0; // 0x1c4 Return
	
Label_453:
	var_245_int = 21763; // 0x1c5 PushI
	var_246_bool = var_7_cvector == var_245_int; // 0x1c6 Eq
	if(var_246_bool == 0) goto Label_476; // 0x1c7 JumpB
	var_247_string = ""; // 0x1c8 PushV
	var_247_string = "Fear"; // 0x1c9 MovS
	func_198(var_8_bool, var_247_string); // 0x1ca NEW_2
	var_248_int = 520561; // 0x1cc PushI
	SetMessage(var_248_int); // 0x1cd TObjFunc
	ClearReplies(); // 0x1cf TObjFunc
	var_249_int = 520562; // 0x1d1 PushI
	var_250_int = 21765; // 0x1d2 PushI
	var_251_int = 21764; // 0x1d3 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x1d4 TObjFunc
	var_252_int = 520582; // 0x1d6 PushI
	var_253_int = 21769; // 0x1d7 PushI
	var_254_int = 21787; // 0x1d8 PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x1d9 TObjFunc
	return 0; // 0x1db Return
	
Label_476:
	var_255_int = 21765; // 0x1dc PushI
	var_256_bool = var_7_cvector == var_255_int; // 0x1dd Eq
	if(var_256_bool == 0) goto Label_494; // 0x1de JumpB
	var_257_string = ""; // 0x1df PushV
	var_257_string = "Neutral"; // 0x1e0 MovS
	func_198(var_8_bool, var_257_string); // 0x1e1 NEW_2
	var_258_int = 520563; // 0x1e3 PushI
	SetMessage(var_258_int); // 0x1e4 TObjFunc
	ClearReplies(); // 0x1e6 TObjFunc
	var_259_int = 520564; // 0x1e8 PushI
	var_260_int = 21767; // 0x1e9 PushI
	var_261_int = 21766; // 0x1ea PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x1eb TObjFunc
	return 0; // 0x1ed Return
	
Label_494:
	var_262_int = 21767; // 0x1ee PushI
	var_263_bool = var_7_cvector == var_262_int; // 0x1ef Eq
	if(var_263_bool == 0) goto Label_517; // 0x1f0 JumpB
	var_264_string = ""; // 0x1f1 PushV
	var_264_string = "Neutral"; // 0x1f2 MovS
	func_198(var_8_bool, var_264_string); // 0x1f3 NEW_2
	var_265_int = 520565; // 0x1f5 PushI
	SetMessage(var_265_int); // 0x1f6 TObjFunc
	ClearReplies(); // 0x1f8 TObjFunc
	var_266_int = 520566; // 0x1fa PushI
	var_267_int = 21769; // 0x1fb PushI
	var_268_int = 21768; // 0x1fc PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x1fd TObjFunc
	var_269_int = 528361; // 0x1ff PushI
	var_270_int = 21769; // 0x200 PushI
	var_271_int = 29732; // 0x201 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x202 TObjFunc
	return 0; // 0x204 Return
	
Label_517:
	var_272_int = 21769; // 0x205 PushI
	var_273_bool = var_7_cvector == var_272_int; // 0x206 Eq
	if(var_273_bool == 0) goto Label_540; // 0x207 JumpB
	var_274_string = ""; // 0x208 PushV
	var_274_string = "Sly"; // 0x209 MovS
	func_198(var_8_bool, var_274_string); // 0x20a NEW_2
	var_275_int = 520567; // 0x20c PushI
	SetMessage(var_275_int); // 0x20d TObjFunc
	ClearReplies(); // 0x20f TObjFunc
	var_276_int = 520568; // 0x211 PushI
	var_277_int = 21771; // 0x212 PushI
	var_278_int = 21770; // 0x213 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x214 TObjFunc
	var_279_int = 520581; // 0x216 PushI
	var_280_int = 21771; // 0x217 PushI
	var_281_int = 21785; // 0x218 PushI
	AddReply(var_279_int, var_280_int, var_281_int); // 0x219 TObjFunc
	return 0; // 0x21b Return
	
Label_540:
	var_282_int = 21771; // 0x21c PushI
	var_283_bool = var_7_cvector == var_282_int; // 0x21d Eq
	if(var_283_bool == 0) goto Label_563; // 0x21e JumpB
	var_284_string = ""; // 0x21f PushV
	var_284_string = "Neutral"; // 0x220 MovS
	func_198(var_8_bool, var_284_string); // 0x221 NEW_2
	var_285_int = 520569; // 0x223 PushI
	SetMessage(var_285_int); // 0x224 TObjFunc
	ClearReplies(); // 0x226 TObjFunc
	var_286_int = 520570; // 0x228 PushI
	var_287_int = 21773; // 0x229 PushI
	var_288_int = 21772; // 0x22a PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x22b TObjFunc
	var_289_int = 520580; // 0x22d PushI
	var_290_int = 21773; // 0x22e PushI
	var_291_int = 21783; // 0x22f PushI
	AddReply(var_289_int, var_290_int, var_291_int); // 0x230 TObjFunc
	return 0; // 0x232 Return
	
Label_563:
	var_292_int = 21773; // 0x233 PushI
	var_293_bool = var_7_cvector == var_292_int; // 0x234 Eq
	if(var_293_bool == 0) goto Label_586; // 0x235 JumpB
	var_294_string = ""; // 0x236 PushV
	var_294_string = "Neutral"; // 0x237 MovS
	func_198(var_8_bool, var_294_string); // 0x238 NEW_2
	var_295_int = 520571; // 0x23a PushI
	SetMessage(var_295_int); // 0x23b TObjFunc
	ClearReplies(); // 0x23d TObjFunc
	var_296_int = 520572; // 0x23f PushI
	var_297_int = 21775; // 0x240 PushI
	var_298_int = 21774; // 0x241 PushI
	AddReply(var_296_int, var_297_int, var_298_int); // 0x242 TObjFunc
	var_299_int = 520579; // 0x244 PushI
	var_300_int = 21775; // 0x245 PushI
	var_301_int = 21781; // 0x246 PushI
	AddReply(var_299_int, var_300_int, var_301_int); // 0x247 TObjFunc
	return 0; // 0x249 Return
	
Label_586:
	var_302_int = 21775; // 0x24a PushI
	var_303_bool = var_7_cvector == var_302_int; // 0x24b Eq
	if(var_303_bool == 0) goto Label_604; // 0x24c JumpB
	var_304_string = ""; // 0x24d PushV
	var_304_string = "Neutral"; // 0x24e MovS
	func_198(var_8_bool, var_304_string); // 0x24f NEW_2
	var_305_int = 520573; // 0x251 PushI
	SetMessage(var_305_int); // 0x252 TObjFunc
	ClearReplies(); // 0x254 TObjFunc
	var_306_int = 520574; // 0x256 PushI
	var_307_int = 21777; // 0x257 PushI
	var_308_int = 21776; // 0x258 PushI
	AddReply(var_306_int, var_307_int, var_308_int); // 0x259 TObjFunc
	return 0; // 0x25b Return
	
Label_604:
	var_309_int = 21777; // 0x25c PushI
	var_310_bool = var_7_cvector == var_309_int; // 0x25d Eq
	if(var_310_bool == 0) goto Label_627; // 0x25e JumpB
	var_311_string = ""; // 0x25f PushV
	var_311_string = "Smile"; // 0x260 MovS
	func_198(var_8_bool, var_311_string); // 0x261 NEW_2
	var_312_int = 520575; // 0x263 PushI
	SetMessage(var_312_int); // 0x264 TObjFunc
	ClearReplies(); // 0x266 TObjFunc
	var_313_int = 520576; // 0x268 PushI
	var_314_int = 21779; // 0x269 PushI
	var_315_int = 21778; // 0x26a PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x26b TObjFunc
	var_316_int = 520578; // 0x26d PushI
	var_317_int = -1; // 0x26e PushI
	var_318_int = 21780; // 0x26f PushI
	AddReply(var_316_int, var_317_int, var_318_int); // 0x270 TObjFunc
	return 0; // 0x272 Return
	
Label_627:
	var_319_int = 21779; // 0x273 PushI
	var_320_bool = var_7_cvector == var_319_int; // 0x274 Eq
	if(var_320_bool == 0) goto Label_645; // 0x275 JumpB
	var_321_string = ""; // 0x276 PushV
	var_321_string = "Smile"; // 0x277 MovS
	func_198(var_8_bool, var_321_string); // 0x278 NEW_2
	var_322_int = 520577; // 0x27a PushI
	SetMessage(var_322_int); // 0x27b TObjFunc
	ClearReplies(); // 0x27d TObjFunc
	var_323_int = 520675; // 0x27f PushI
	var_324_int = -1; // 0x280 PushI
	var_325_int = 21883; // 0x281 PushI
	AddReply(var_323_int, var_324_int, var_325_int); // 0x282 TObjFunc
	return 0; // 0x284 Return
	
Label_645:
	var_3_string = 1; // 0x285 TMovB
	var_326_bool = 0; // 0x286 PushV
	func_1650(var_326_bool); // 0x287 NEW_2
	if(var_326_bool == 0) goto Label_653; // 0x289 JumpB
	lshStopAnimation(); // 0x28a Func
	goto Label_655; // 0x28c Jump
	
Label_655:
	return 0; // 0x28f Return
	
Label_653:
	StopAnimation(); // 0x28d Func
	
Label_657:
	return 0; // 0x291 Return
}


task_2_event_32(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_string = "b6q01KlaraLaska"; // 0x2a2 PushS
	var_8_int = 0; // 0x2a3 PushI
	SetVariable(var_7_string, var_8_int); // 0x2a4 Func
	return 0; // 0x2a6 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x2ab PushV
	var_10_string = "cleanup"; // 0x2ac PushS
	var_11_bool = var_7_string == var_10_string; // 0x2ad Eq
	if(var_11_bool == 0) goto Label_698; // 0x2ae JumpB
	var_1_object = 1; // 0x2af TMovB
	IsLoaded(var_9_bool); // 0x2b0 Func
	var_12_bool = var_9_bool == 0; // 0x2b2 Not
	if(var_12_bool == 0) goto Label_697; // 0x2b3 JumpB
	var_13_object = Obj(); // 0x2b4 PushV
	func_1282(var_13_object); // 0x2b5 NEW_2
	RemoveActor(var_13_object); // 0x2b7 Func
	
Label_697:
	goto Label_702; // 0x2b9 Jump
	
Label_702:
	return 2; // 0x2be Return
	
Label_698:
	var_16_string = "restore"; // 0x2ba PushS
	var_17_bool = var_7_string == var_16_string; // 0x2bb Eq
	if(var_17_bool == 0) goto Label_702; // 0x2bc JumpB
	var_1_object = 0; // 0x2bd TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x2bf PushT
	if(var_7_object == 0) goto Label_712; // 0x2c0 JumpB
	var_8_object = Obj(); // 0x2c1 PushV
	func_1282(var_8_object); // 0x2c2 NEW_2
	RemoveActor(var_8_object); // 0x2c4 Func
	Hold(); // 0x2c6 Func
	
Label_712:
	func_827(); // 0x2c9 NEW_2
	return 0; // 0x2cb Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_842(); // 0x2cd NEW_2
	return 0; // 0x2cf Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x316 PushI
	var_9_bool = var_7_int == var_8_int; // 0x317 Eq
	if(var_9_bool == 0) goto Label_826; // 0x318 JumpB
	func_785(); // 0x31a NEW_2
	var_11_bool = 0; // 0x31c PushV
	var_11_bool = 0; // 0x31d MovB
	var_12_bool = 0; // 0x31e PushV
	func_999(var_12_bool); // 0x31f NEW_2
	if(var_12_bool == 0) goto Label_807; // 0x321 JumpB
	var_15_bool = 0; // 0x322 PushV
	func_754(var_15_bool); // 0x323 NEW_2
	if(var_15_bool == 0) goto Label_807; // 0x325 JumpB
	var_11_bool = 1; // 0x326 MovB
	
Label_807:
	if(var_11_bool == 0) goto Label_820; // 0x327 JumpB
	var_32_bool = 0; // 0x328 PushV
	func_734(var_32_bool); // 0x329 NEW_2
	if(var_32_bool == 0) goto Label_819; // 0x32b JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x32c PushV
	var_53_object = Obj(); // 0x32d PushV
	func_1282(var_53_object); // 0x32e NEW_2
	var_52_object = var_53_object; // 0x32f Mov
	func_1149(var_52_object); // 0x331 NEW_2
	
Label_819:
	goto Label_826; // 0x333 Jump
	
Label_826:
	return 0; // 0x33a Return
	
Label_820:
	func_749(var_7_int); // 0x335 NEW_2
	func_776(); // 0x338 NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x358 Push
	if(var_8_bool == 0) goto Label_862; // 0x359 JumpB
	func_776(); // 0x35b NEW_2
	goto Label_866; // 0x35d Jump
	
Label_866:
	return 0; // 0x362 Return
	
Label_862:
	var_14_string = ""; // 0x35e PushV
	var_14_string = "Neutral"; // 0x35f MovS
	func_1229(var_14_string); // 0x360 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x363 PushV
	IsOverrideActive(var_9_bool); // 0x364 Func
	var_10_bool = var_9_bool == 0; // 0x366 Not
	if(var_10_bool == 0) goto Label_895; // 0x367 JumpB
	EventDisable(0); // 0x368 EventDisable
	func_967(); // 0x36a NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x36c PushV
	var_12_object = var_7_object; // 0x36d Mov
	func_990(var_12_object); // 0x36e NEW_2
	EventEnable(0); // 0x370 EventEnable
	var_25_object = Obj(); // 0x371 PushV
	var_25_object = var_7_object; // 0x372 Mov
	func_666(var_25_object); // 0x373 NEW_2
	var_296_string = ""; // 0x375 PushV
	var_296_string = "Neutral"; // 0x376 MovS
	func_1229(var_296_string); // 0x377 NEW_2
	func_785(); // 0x37a NEW_2
	func_776(); // 0x37d NEW_2
	
Label_895:
	return 2; // 0x37f Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_string = "b6q01KlaraLaska"; // 0x292 PushS
	var_8_int = 1; // 0x293 PushI
	SetVariable(var_7_string, var_8_int); // 0x294 Func
	func_679(); // 0x297 NEW_2
	return 0; // 0x299 Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_1004(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1644(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1642(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1646(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1648(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1625(var_89_int); // 0x22 NEW_2
	SetPlayerName(var_89_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_97_bool = var_34_bool; // 0x29 Push
	if(var_97_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_98_bool = 0; var_99_object = Obj(); // 0x2f PushV
	var_100_object = Obj(); // 0x30 PushV
	func_1282(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_1091(var_98_bool, var_99_object); // 0x34 NEW_2
	var_193_object = Obj(); var_194_object = Obj(); // 0x36 PushV
	var_193_object = var_27_object; // 0x37 Mov
	var_194_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_195_object, var_196_object, var_197_string, var_198_bool, var_193_object, var_194_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_287_bool = var_36_bool == 0; // 0x3f Not
	if(var_287_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_288_object = Obj(); // 0x46 PushV
	var_288_object = var_27_object; // 0x47 Mov
	func_1073(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1409()
{
	var_128_string = "oob6Klara2"; // 0x582 PushS
	var_129_int = 1; // 0x583 PushI
	SetVariable(var_128_string, var_129_int); // 0x584 Func
	return 0; // 0x586 Return
}


func_1282(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x502 PushV
	self(var_102_object); // 0x503 Func
	var_100_object = var_102_object; // 0x505 Mov
	return 2; // 0x506 Return
}


func_896()
{
	var_13_int = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0; var_17_int = 0; var_18_bool = 0; var_19_int = 0; var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_int = 0; var_24_bool = 0; // 0x380 PushV
	WaitForAnimEnd(); // 0x381 Func
	var_25_bool = 0; // 0x383 PushV
	func_999(var_25_bool); // 0x384 NEW_2
	var_26_bool = var_25_bool == 0; // 0x386 Not
	if(var_26_bool == 0) goto Label_905; // 0x387 JumpB
	return 12; // 0x388 Return
	
Label_905:
	var_27_int = 0; // 0x389 PushV
	func_1353(var_27_int); // 0x38a NEW_2
	var_19_int = var_27_int; // 0x38b Mov
	var_20_int = 0; // 0x38d MovI
	
Label_910:
	var_40_bool = 0; // 0x38e PushV
	var_40_bool = 0; // 0x38f MovB
	var_41_int = 5; // 0x390 PushI
	var_42_bool = var_20_int < var_41_int; // 0x391 LT
	if(var_42_bool == 0) goto Label_920; // 0x392 JumpB
	var_43_bool = 0; // 0x393 PushV
	func_999(var_43_bool); // 0x394 NEW_2
	if(var_43_bool == 0) goto Label_920; // 0x396 JumpB
	var_40_bool = 1; // 0x397 MovB
	
Label_920:
	if(var_40_bool == 0) goto Label_962; // 0x398 JumpB
	var_44_bool = var_19_int == 0; // 0x399 Not
	if(var_44_bool == 0) goto Label_930; // 0x39a JumpB
	var_45_int = 3; // 0x39b PushI
	Sleep(var_45_int, var_21_bool); // 0x39c Func
	var_46_bool = var_21_bool == 0; // 0x39e Not
	if(var_46_bool == 0) goto Label_929; // 0x39f JumpB
	goto Label_962; // 0x3a0 Jump
	
Label_962:
	ResetAAS(); // 0x3c2 Func
	return 12; // 0x3c4 Return
	
Label_929:
	goto Label_951; // 0x3a1 Jump
	
Label_951:
	var_47_bool = 0; // 0x3b7 PushV
	func_965(var_47_bool); // 0x3b8 NEW_2
	var_48_bool = var_47_bool == 0; // 0x3ba Not
	if(var_48_bool == 0) goto Label_957; // 0x3bb JumpB
	goto Label_962; // 0x3bc Jump
	
Label_957:
	ResetAAS(); // 0x3bd Func
	var_49_int = 1; // 0x3bf PushI
	var_20_int = var_20_int + var_49_int; // 0x3c0 Add2
	goto Label_910; // 0x3c1 Jump
	
Label_930:
	irand(var_22_int, var_19_int); // 0x3a2 Func
	var_50_int = 5; // 0x3a4 PushI
	irand(var_23_int, var_50_int); // 0x3a5 Func
	var_51_int = 0; // 0x3a7 PushI
	var_52_bool = var_23_int != var_51_int; // 0x3a8 Neq
	if(var_52_bool == 0) goto Label_939; // 0x3a9 JumpB
	var_22_int = 0; // 0x3aa MovI
	
Label_939:
	var_53_string = "all"; // 0x3ab PushS
	var_54_string = ""; var_55_int = 0; // 0x3ac PushV
	var_55_int = var_22_int; // 0x3ad Mov
	func_1346(var_54_string, var_55_int); // 0x3ae NEW_2
	PlayAnimation(var_53_string, var_54_string); // 0x3b0 Func
	WaitForAnimEnd(var_24_bool); // 0x3b2 Func
	var_56_bool = var_24_bool == 0; // 0x3b4 Not
	if(var_56_bool == 0) goto Label_951; // 0x3b5 JumpB
	goto Label_962; // 0x3b6 Jump
}


func_1415()
{
	var_134_string = "oob6Klara3"; // 0x588 PushS
	var_135_int = 1; // 0x589 PushI
	SetVariable(var_134_string, var_135_int); // 0x58a Func
	return 0; // 0x58c Return
}


func_776()
{
	var_298_float = 0; var_299_float = 0; // 0x308 PushV
	var_300_int = 8; // 0x309 PushI
	var_301_int = 16; // 0x30a PushI
	rand(var_299_float, var_300_int, var_301_int); // 0x30b Func
	var_302_int = 10; // 0x30d PushI
	SetTimer(var_302_int, var_299_float); // 0x30e Func
	return 2; // 0x310 Return
}


func_1288(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x508 PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x509 Or
	var_68_float = sqrt(var_69_int); // 0x50a Sqrt2
	var_70_float = 0.0; // 0x50b PushF
	var_71_bool = var_68_float < var_70_float; // 0x50c LT
	if(var_71_bool == 0) goto Label_1296; // 0x50d JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x50e MovV
	return 2; // 0x50f Return
	
Label_1296:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x510 Div2
	return 2; // 0x511 Return
}


func_1547(var_44_bool, var_45_object, var_46_int)
{
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; var_50_object = Obj(); var_51_object = Obj(); var_52_int = 0; // 0x60b PushV
	var_53_object = Obj(); // 0x60c PushV
	func_1534(var_53_object); // 0x60d NEW_2
	var_50_object = var_53_object; // 0x60e Mov
	Find(var_46_int, var_51_object); // 0x610 ObjFunc
	var_58_bool = var_51_object == 0; // 0x612 Not
	if(var_58_bool == 0) goto Label_1562; // 0x613 JumpB
	var_59_string = "Can't find diary parent with id: "; // 0x614 PushS
	var_60_int = var_59_string + var_46_int; // 0x615 Add
	Trace(var_60_int); // 0x616 Func
	var_44_bool = 0; // 0x618 MovB
	return 6; // 0x619 Return
	
Label_1562:
	AddChild(var_45_object); // 0x61a ObjFunc
	var_61_int = 7; // 0x61c PushI
	SendWorldWndMessage(var_61_int); // 0x61d Func
	GetCategory(var_52_int); // 0x61f ObjFunc
	SetDiarySection(var_52_int); // 0x621 Func
	var_44_bool = 0; // 0x623 MovB
	return 6; // 0x624 Return
}


func_1421()
{
	var_73_string = ""; var_74_bool = 0; // 0x58e PushV
	var_73_string = "termitnik2@door1"; // 0x58f MovS
	var_74_bool = 0; // 0x590 MovB
	func_1303(var_73_string, var_74_bool); // 0x591 NEW_2
	return 0; // 0x593 Return
}


func_785()
{
	var_297_int = 10; // 0x311 PushI
	KillTimer(var_297_int); // 0x312 Func
	return 0; // 0x314 Return
}


func_1298(var_225_int, var_226_string)
{
	var_227_int = 0; var_228_int = 0; // 0x512 PushV
	GetVariable(var_226_string, var_228_int); // 0x513 Func
	var_225_int = var_228_int; // 0x515 Mov
	return 2; // 0x516 Return
}


func_1428()
{
	var_85_object = Obj(); var_86_string = ""; var_87_float = 0; // 0x595 PushV
	var_88_object = Obj(); // 0x596 PushV
	func_1575(var_88_object); // 0x597 NEW_2
	var_85_object = var_88_object; // 0x598 Mov
	var_86_string = "pt_map_termitnik2"; // 0x59a MovS
	var_87_float = 2; // 0x59b MovI
	func_1592(var_85_object, var_86_string, var_87_float); // 0x59c NEW_2
	var_108_object = Obj(); // 0x59e PushV
	func_1575(var_108_object); // 0x59f NEW_2
	ShowMap(var_108_object); // 0x5a1 ObjFunc
	return 0; // 0x5a3 Return
}


func_1303(var_73_string, var_74_bool)
{
	var_75_object = Obj(); var_76_object = Obj(); // 0x517 PushV
	FindActor(var_76_object, var_73_string); // 0x518 Func
	var_77_bool = var_76_object == 0; // 0x51a Not
	if(var_77_bool == 0) goto Label_1315; // 0x51b JumpB
	var_78_string = "Door "; // 0x51c PushS
	var_79_int = var_78_string + var_73_string; // 0x51d Add
	var_80_string = " not found"; // 0x51e PushS
	var_81_int = var_79_int + var_80_string; // 0x51f Add
	Trace(var_81_int); // 0x520 Func
	goto Label_1318; // 0x522 Jump
	
Label_1318:
	return 2; // 0x526 Return
	
Label_1315:
	var_82_string = "locked"; // 0x523 PushS
	SetProperty(var_82_string, var_74_bool); // 0x524 ObjFunc
}


func_666(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x29b PushV
	var_27_object = var_25_object; // 0x29c Mov
	TaskCall(0); // 0x29d TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x29e NEW_2
	TaskReturn(); // 0x29f TaskReturn
	return 0; // 0x2a1 Return
}


func_1186(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x4a2 PushV
	var_152_string = "d"; // 0x4a3 PushS
	var_153_int = 0; // 0x4a4 PushV
	func_1337(var_153_int); // 0x4a5 NEW_2
	var_159_int = var_152_string + var_153_int; // 0x4a7 Add
	var_160_string = "m"; // 0x4a8 PushS
	var_147_string = var_159_int + var_160_string; // 0x4a9 Add2
	var_148_int = 0; // 0x4aa MovI
	
Label_1195:
	var_161_int = 1; // 0x4ab PushI
	if(var_161_int == 0) goto Label_1208; // 0x4ac JumpB
	var_162_int = 1; // 0x4ad PushI
	var_163_int = var_148_int + var_162_int; // 0x4ae Add
	var_164_int = var_147_string + var_163_int; // 0x4af Add
	HasProperty(var_164_int, var_149_bool); // 0x4b0 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x4b2 Not
	if(var_165_bool == 0) goto Label_1205; // 0x4b3 JumpB
	goto Label_1208; // 0x4b4 Jump
	
Label_1208:
	var_166_bool = var_148_int == 0; // 0x4b8 Not
	if(var_166_bool == 0) goto Label_1212; // 0x4b9 JumpB
	var_140_bool = 0; // 0x4ba MovB
	return 10; // 0x4bb Return
	
Label_1212:
	var_150_int = 0; // 0x4bc MovI
	var_167_int = 1; // 0x4bd PushI
	var_168_bool = var_148_int > var_167_int; // 0x4be GT
	if(var_168_bool == 0) goto Label_1218; // 0x4bf JumpB
	irand(var_150_int, var_148_int); // 0x4c0 Func
	
Label_1218:
	var_169_int = 1; // 0x4c2 PushI
	var_170_int = var_150_int + var_169_int; // 0x4c3 Add
	var_171_int = var_147_string + var_170_int; // 0x4c4 Add
	GetProperty(var_171_int, var_151_string); // 0x4c5 ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x4c7 PushV
	var_173_string = var_151_string; // 0x4c8 Mov
	func_1260(var_172_bool, var_173_string); // 0x4c9 NEW_2
	var_140_bool = var_172_bool; // 0x4ca Mov
	return 10; // 0x4cc Return
	
Label_1205:
	var_174_int = 1; // 0x4b5 PushI
	var_148_int = var_148_int + var_174_int; // 0x4b6 Add2
	goto Label_1195; // 0x4b7 Jump
}


func_1444()
{
	var_202_string = "b6q01KlaraVisit"; // 0x5a5 PushS
	var_203_int = 1; // 0x5a6 PushI
	SetVariable(var_202_string, var_203_int); // 0x5a7 Func
	return 0; // 0x5a9 Return
}


func_679()
{
	func_720(var_6_bool); // 0x2a8 NEW_2
	return 0; // 0x2aa Return
}


func_1575(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); // 0x627 PushV
	GetMainOutdoorScene(var_28_object); // 0x628 Func
	var_30_bool = var_28_object == 0; // 0x62a NullEq
	if(var_30_bool == 0) goto Label_1586; // 0x62b JumpB
	var_31_string = "Can't find main outdoor scene"; // 0x62c PushS
	Trace(var_31_string); // 0x62d Func
	var_29_object = 0; // 0x62f SetNull
	var_25_object = var_29_object; // 0x630 Mov
	return 4; // 0x631 Return
	
Label_1586:
	GetMap(var_29_object); // 0x632 ObjFunc
	var_25_object = var_29_object; // 0x634 Mov
	return 4; // 0x635 Return
}


func_1320(var_62_bool, var_63_string, var_64_string)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x528 PushV
	FindActor(var_66_object, var_63_string); // 0x529 Func
	var_67_bool = var_66_object == 0; // 0x52b NullEq
	if(var_67_bool == 0) goto Label_1327; // 0x52c JumpB
	var_62_bool = 0; // 0x52d MovB
	return 2; // 0x52e Return
	
Label_1327:
	Trigger(var_66_object, var_64_string); // 0x52f Func
	var_62_bool = 1; // 0x531 MovB
	return 2; // 0x532 Return
}


func_1450()
{
	func_1508(); // 0x5ac NEW_2
	var_121_bool = 0; var_122_string = ""; var_123_string = ""; // 0x5ae PushV
	var_122_string = "quest_b6_01"; // 0x5af MovS
	var_123_string = "fail"; // 0x5b0 MovS
	func_1320(var_121_bool, var_122_string, var_123_string); // 0x5b1 NEW_2
	return 0; // 0x5b3 Return
}


func_1073()
{
	var_289_bool = 0; var_290_bool = 0; // 0x431 PushV
	var_291_bool = 1; // 0x432 PushB
	CameraSwitchToNormal(var_291_bool); // 0x433 Func
	var_292_bool = 0; // 0x435 PushV
	func_1650(var_292_bool); // 0x436 NEW_2
	if(var_292_bool == 0) goto Label_1082; // 0x438 JumpB
	goto Label_1090; // 0x439 Jump
	
Label_1090:
	return 2; // 0x442 Return
	
Label_1082:
	var_293_string = "head"; // 0x43a PushS
	HasAnimationTrack(var_290_bool, var_293_string); // 0x43b Func
	var_294_bool = var_290_bool; // 0x43d Push
	if(var_294_bool == 0) goto Label_1090; // 0x43e JumpB
	var_295_string = "head"; // 0x43f PushS
	UnlookAsync(var_295_string); // 0x440 Func
}


func_1460(var_223_bool)
{
	var_225_int = 0; var_226_string = ""; // 0x5b5 PushV
	var_226_string = "oob6Klara1"; // 0x5b6 MovS
	func_1298(var_225_int, var_226_string); // 0x5b7 NEW_2
	var_229_int = 0; // 0x5b9 PushI
	var_230_bool = var_225_int == var_229_int; // 0x5ba Eq
	if(var_230_bool == 0) goto Label_1470; // 0x5bb JumpB
	var_223_bool = 1; // 0x5bc MovB
	return 0; // 0x5bd Return
	
Label_1470:
	var_223_bool = 0; // 0x5be MovB
	return 0; // 0x5bf Return
}


func_1332(var_36_float)
{
	var_37_float = 0; var_38_float = 0; // 0x534 PushV
	GetGameTime(var_38_float); // 0x535 Func
	var_36_float = var_38_float; // 0x537 Mov
	return 2; // 0x538 Return
}


func_1592(var_85_object, var_86_string, var_87_float)
{
	var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_object = Obj(); var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_object = Obj(); var_96_bool = 0; // 0x638 PushV
	GetMainOutdoorScene(var_95_object); // 0x639 Func
	var_97_bool = var_95_object == 0; // 0x63b NullEq
	if(var_97_bool == 0) goto Label_1601; // 0x63c JumpB
	var_98_string = "Can't find main outdoor scene"; // 0x63d PushS
	Trace(var_98_string); // 0x63e Func
	return 8; // 0x640 Return
	
Label_1601:
	GetLocator(var_86_string, var_96_bool, var_93_cvector, var_94_cvector); // 0x641 ObjFunc
	var_99_bool = var_96_bool == 0; // 0x643 Not
	if(var_99_bool == 0) goto Label_1611; // 0x644 JumpB
	var_100_string = "Warning: outdoor scene locator "; // 0x645 PushS
	var_101_int = var_100_string + var_86_string; // 0x646 Add
	var_102_string = " doesnt exist"; // 0x647 PushS
	var_103_int = var_101_int + var_102_string; // 0x648 Add
	Trace(var_103_int); // 0x649 Func
	
Label_1611:
	GetMap(var_85_object); // 0x64b ObjFunc
	var_104_bool = var_85_object == 0; // 0x64d NullEq
	if(var_104_bool == 0) goto Label_1619; // 0x64e JumpB
	var_105_string = "Can't find map"; // 0x64f PushS
	Trace(var_105_string); // 0x650 Func
	return 8; // 0x652 Return
	
Label_1619:
	var_106_float = GetByIndex(var_93_cvector, 0); // 0x653 PushE
	var_107_float = GetByIndex(var_93_cvector, 2); // 0x654 PushE
	SetMapParams(var_106_float, var_107_float, var_87_float); // 0x655 ObjFunc
	return 8; // 0x657 Return
}


func_1337(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x539 PushV
	GetGameTime(var_155_float); // 0x53a Func
	var_156_int = 1; // 0x53c PushI
	var_157_int = 0; // 0x53d PushV
	var_158_int = 24; // 0x53e PushI
	var_157_int = var_155_float / var_155_float; // 0x53f Div2
	var_153_int = var_156_int + var_157_int; // 0x540 Add2
	return 2; // 0x541 Return
}


func_827()
{
	func_967(); // 0x33c NEW_2
	func_785(); // 0x33f NEW_2
	lshStopSpeech(); // 0x341 Func
	lshStopAnimation(); // 0x343 Func
	StopAsync(); // 0x345 Func
	Hold(); // 0x347 Func
	return 0; // 0x349 Return
}


func_1472(var_231_bool)
{
	var_233_int = 0; var_234_string = ""; // 0x5c1 PushV
	var_234_string = "b6q01"; // 0x5c2 MovS
	func_1298(var_233_int, var_234_string); // 0x5c3 NEW_2
	var_235_int = 1; // 0x5c5 PushI
	var_236_bool = var_233_int == var_235_int; // 0x5c6 Eq
	if(var_236_bool == 0) goto Label_1482; // 0x5c7 JumpB
	var_231_bool = 1; // 0x5c8 MovB
	return 0; // 0x5c9 Return
	
Label_1482:
	var_231_bool = 0; // 0x5ca MovB
	return 0; // 0x5cb Return
}


func_1346(var_33_string, var_34_int)
{
	var_35_string = ""; var_36_string = ""; // 0x542 PushV
	var_36_string = "idle"; // 0x543 MovS
	var_37_int = var_34_int; // 0x544 Push
	if(var_37_int == 0) goto Label_1351; // 0x545 JumpB
	var_36_string = var_36_string + var_34_int; // 0x546 Add2
	
Label_1351:
	var_33_string = var_36_string; // 0x547 Mov
	return 2; // 0x548 Return
}


func_1091(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x443 PushV
	var_107_string = "voice_common"; // 0x444 PushS
	GetVariable(var_107_string, var_105_int); // 0x445 Func
	var_108_int = var_105_int; // 0x447 Push
	if(var_108_int == 0) goto Label_1129; // 0x448 JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x449 PushV
	var_110_object = var_99_object; // 0x44a Mov
	func_1149(var_110_object); // 0x44b NEW_2
	var_139_bool = var_109_bool == 0; // 0x44d Not
	if(var_139_bool == 0) goto Label_1111; // 0x44e JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x44f PushV
	var_141_object = var_99_object; // 0x450 Mov
	func_1186(var_141_object); // 0x451 NEW_2
	var_175_bool = var_140_bool == 0; // 0x453 Not
	if(var_175_bool == 0) goto Label_1111; // 0x454 JumpB
	var_98_bool = 0; // 0x455 MovB
	return 4; // 0x456 Return
	
Label_1111:
	var_176_int = 2; // 0x457 PushI
	irand(var_106_int, var_176_int); // 0x458 Func
	var_177_int = var_106_int; // 0x45a Push
	if(var_177_int == 0) goto Label_1124; // 0x45b JumpB
	var_178_string = "voice_common"; // 0x45c PushS
	var_179_int = 1; // 0x45d PushI
	var_180_int = var_105_int + var_179_int; // 0x45e Add
	var_181_int = 3; // 0x45f PushI
	var_182_int = var_180_int / var_181_int; // 0x460 Mod
	SetVariable(var_178_string, var_182_int); // 0x461 Func
	goto Label_1128; // 0x463 Jump
	
Label_1128:
	goto Label_1147; // 0x468 Jump
	
Label_1147:
	var_98_bool = 1; // 0x47b MovB
	return 4; // 0x47c Return
	
Label_1124:
	var_183_string = "voice_common"; // 0x464 PushS
	var_184_int = 0; // 0x465 PushI
	SetVariable(var_183_string, var_184_int); // 0x466 Func
	
Label_1129:
	var_185_bool = 0; var_186_object = Obj(); // 0x469 PushV
	var_186_object = var_99_object; // 0x46a Mov
	func_1186(var_186_object); // 0x46b NEW_2
	var_187_bool = var_185_bool == 0; // 0x46d Not
	if(var_187_bool == 0) goto Label_1143; // 0x46e JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x46f PushV
	var_189_object = var_99_object; // 0x470 Mov
	func_1149(var_189_object); // 0x471 NEW_2
	var_190_bool = var_188_bool == 0; // 0x473 Not
	if(var_190_bool == 0) goto Label_1143; // 0x474 JumpB
	var_98_bool = 0; // 0x475 MovB
	return 4; // 0x476 Return
	
Label_1143:
	var_191_string = "voice_common"; // 0x477 PushS
	var_192_int = 1; // 0x478 PushI
	SetVariable(var_191_string, var_192_int); // 0x479 Func
}


func_965(var_47_bool)
{
	var_47_bool = 1; // 0x3c5 MovB
	return 0; // 0x3c6 Return
}


func_198(var_2_object, var_204_string)
{
	var_205_bool = 0; // 0xc7 PushV
	func_1650(var_205_bool); // 0xc8 NEW_2
	var_206_bool = var_205_bool == 0; // 0xca Not
	if(var_206_bool == 0) goto Label_205; // 0xcb JumpB
	return 0; // 0xcc Return
	
Label_205:
	var_207_bool = var_204_string == var_2_object; // 0xcd Eq
	if(var_207_bool == 0) goto Label_208; // 0xce JumpB
	return 0; // 0xcf Return
	
Label_208:
	var_208_string = ""; var_209_bool = 0; // 0xd0 PushV
	var_208_string = var_204_string; // 0xd1 Mov
	var_210_string = ""; // 0xd2 PushS
	var_211_bool = var_204_string == var_210_string; // 0xd3 Eq
	if(var_211_bool == 0) goto Label_215; // 0xd4 JumpB
	var_209_bool = 0; // 0xd5 MovB
	goto Label_216; // 0xd6 Jump
	
Label_216:
	func_1245(var_208_string, var_209_bool); // 0xd8 NEW_2
	var_2_object = var_204_string; // 0xda TMov
	return 0; // 0xdb Return
	
Label_215:
	var_209_bool = 1; // 0xd7 MovB
}


func_967()
{
	StopAnimation(); // 0x3c7 Func
	StopGroup0(); // 0x3c9 Func
	return 0; // 0x3cb Return
}


func_1353(var_27_int)
{
	var_28_int = 0; var_29_bool = 0; var_30_int = 0; var_31_bool = 0; // 0x549 PushV
	var_30_int = 0; // 0x54a MovI
	
Label_1355:
	var_32_string = "all"; // 0x54b PushS
	var_33_string = ""; var_34_int = 0; // 0x54c PushV
	var_34_int = var_30_int; // 0x54d Mov
	func_1346(var_33_string, var_34_int); // 0x54e NEW_2
	HasAnimation(var_31_bool, var_32_string, var_33_string); // 0x550 Func
	var_38_bool = var_31_bool == 0; // 0x552 Not
	if(var_38_bool == 0) goto Label_1365; // 0x553 JumpB
	goto Label_1368; // 0x554 Jump
	
Label_1368:
	var_27_int = var_30_int; // 0x558 Mov
	return 4; // 0x559 Return
	
Label_1365:
	var_39_int = 1; // 0x555 PushI
	var_30_int = var_30_int + var_39_int; // 0x556 Add2
	goto Label_1355; // 0x557 Jump
}


func_842()
{
	StopGroup0(); // 0x34a Func
	func_785(); // 0x34d NEW_2
	var_8_string = ""; // 0x34f PushV
	var_8_string = "Neutral"; // 0x350 MovS
	func_1229(var_8_string); // 0x351 NEW_2
	func_776(); // 0x354 NEW_2
	return 0; // 0x356 Return
}


func_1484(var_244_bool)
{
	var_246_int = 0; var_247_string = ""; // 0x5cd PushV
	var_247_string = "oob6Klara2"; // 0x5ce MovS
	func_1298(var_246_int, var_247_string); // 0x5cf NEW_2
	var_248_int = 0; // 0x5d1 PushI
	var_249_bool = var_246_int == var_248_int; // 0x5d2 Eq
	if(var_249_bool == 0) goto Label_1494; // 0x5d3 JumpB
	var_244_bool = 1; // 0x5d4 MovB
	return 0; // 0x5d5 Return
	
Label_1494:
	var_244_bool = 0; // 0x5d6 MovB
	return 0; // 0x5d7 Return
}


func_1229(var_271_string)
{
	var_272_bool = 0; var_273_float = 0; var_274_float = 0; var_275_bool = 0; var_276_float = 0; var_277_float = 0; // 0x4cd PushV
	lshHasAnimation(var_275_bool, var_271_string); // 0x4ce Func
	var_278_bool = var_275_bool; // 0x4d0 Push
	if(var_278_bool == 0) goto Label_1240; // 0x4d1 JumpB
	lshGetAnimTimes(var_271_string, var_276_float, var_277_float); // 0x4d2 Func
	var_279_bool = 0; // 0x4d4 PushB
	lshPlayAnimation(var_276_float, var_277_float, var_279_bool); // 0x4d5 Func
	goto Label_1244; // 0x4d7 Jump
	
Label_1244:
	return 6; // 0x4dc Return
	
Label_1240:
	var_280_string = "Can't find lsh animation : "; // 0x4d8 PushS
	var_281_int = var_280_string + var_271_string; // 0x4d9 Add
	Trace(var_281_int); // 0x4da Func
}


func_972(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x3cc PushV
	GetPosition(var_27_cvector); // 0x3cd Func
	GetPosition(var_28_cvector); // 0x3cf ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x3d1 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x3d2 Or2
	return 6; // 0x3d3 Return
}


func_720(var_0_object)
{
	var_9_bool = 0; // 0x2d0 PushV
	func_999(var_9_bool); // 0x2d1 NEW_2
	var_12_bool = var_9_bool == 0; // 0x2d3 Not
	if(var_12_bool == 0) goto Label_727; // 0x2d4 JumpB
	Hold(); // 0x2d5 Func
	
Label_727:
	GetDirection(var_0_object); // 0x2d7 Func
	
Label_729:
	func_896(); // 0x2da NEW_2
	goto Label_729; // 0x2dc Jump
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_168; // 0x56 JumpB
	var_200_object = Obj(); var_201_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	var_201_object = var_0_object; // 0x59 MovT
	func_1444(); // 0x5a NEW_2
	var_204_string = ""; // 0x5c PushV
	var_204_string = "Fear"; // 0x5d MovS
	func_198(var_194_object, var_204_string); // 0x5e NEW_2
	var_221_int = 520559; // 0x60 PushI
	SetMessage(var_221_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_222_bool = 0; // 0x65 PushV
	var_222_bool = 0; // 0x66 MovB
	var_223_bool = 0; var_224_object = Obj(); // 0x67 PushV
	var_224_object = var_1_object; // 0x68 MovT
	func_1460(var_224_object); // 0x69 NEW_2
	if(var_223_bool == 0) goto Label_114; // 0x6b JumpB
	var_231_bool = 0; var_232_object = Obj(); // 0x6c PushV
	var_232_object = var_1_object; // 0x6d MovT
	func_1472(var_232_object); // 0x6e NEW_2
	if(var_231_bool == 0) goto Label_114; // 0x70 JumpB
	var_222_bool = 1; // 0x71 MovB
	
Label_114:
	if(var_222_bool == 0) goto Label_120; // 0x72 JumpB
	var_237_int = 520560; // 0x73 PushI
	var_238_int = 21763; // 0x74 PushI
	var_239_int = 21762; // 0x75 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x76 TObjFunc
	
Label_120:
	var_240_bool = 0; // 0x78 PushV
	var_240_bool = 0; // 0x79 MovB
	var_241_bool = 0; var_242_object = Obj(); // 0x7a PushV
	var_242_object = var_1_object; // 0x7b MovT
	func_1460(var_242_object); // 0x7c NEW_2
	var_243_bool = var_241_bool == 0; // 0x7e Not
	if(var_243_bool == 0) goto Label_134; // 0x7f JumpB
	var_244_bool = 0; var_245_object = Obj(); // 0x80 PushV
	var_245_object = var_1_object; // 0x81 MovT
	func_1484(var_245_object); // 0x82 NEW_2
	if(var_244_bool == 0) goto Label_134; // 0x84 JumpB
	var_240_bool = 1; // 0x85 MovB
	
Label_134:
	if(var_240_bool == 0) goto Label_140; // 0x86 JumpB
	var_250_int = 520583; // 0x87 PushI
	var_251_int = 21789; // 0x88 PushI
	var_252_int = 21788; // 0x89 PushI
	AddReply(var_250_int, var_251_int, var_252_int); // 0x8a TObjFunc
	
Label_140:
	var_253_bool = 0; // 0x8c PushV
	var_253_bool = 0; // 0x8d MovB
	var_254_bool = 0; var_255_object = Obj(); // 0x8e PushV
	var_255_object = var_1_object; // 0x8f MovT
	func_1460(var_255_object); // 0x90 NEW_2
	var_256_bool = var_254_bool == 0; // 0x92 Not
	if(var_256_bool == 0) goto Label_154; // 0x93 JumpB
	var_257_bool = 0; var_258_object = Obj(); // 0x94 PushV
	var_258_object = var_1_object; // 0x95 MovT
	func_1496(var_258_object); // 0x96 NEW_2
	if(var_257_bool == 0) goto Label_154; // 0x98 JumpB
	var_253_bool = 1; // 0x99 MovB
	
Label_154:
	if(var_253_bool == 0) goto Label_160; // 0x9a JumpB
	var_263_int = 520588; // 0x9b PushI
	var_264_int = 21794; // 0x9c PushI
	var_265_int = 21793; // 0x9d PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x9e TObjFunc
	
Label_160:
	var_266_int = 520593; // 0xa0 PushI
	var_267_int = -1; // 0xa1 PushI
	var_268_int = 21798; // 0xa2 PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0xa3 TObjFunc
	goto Label_168; // 0xa5 Jump
	
Label_168:
	var_269_bool = 0; // 0xa8 PushV
	func_1650(var_269_bool); // 0xa9 NEW_2
	if(var_269_bool == 0) goto Label_183; // 0xab JumpB
	
Label_172:
	lshWaitForAnimEnd(); // 0xac Func
	var_270_string = var_3_string; // 0xae PushT
	if(var_270_string == 0) goto Label_177; // 0xaf JumpB
	goto Label_182; // 0xb0 Jump
	
Label_182:
	goto Label_197; // 0xb6 Jump
	
Label_197:
	return 0; // 0xc5 Return
	
Label_177:
	var_271_string = ""; // 0xb1 PushV
	var_271_string = var_2_object; // 0xb2 MovT
	func_1229(var_271_string); // 0xb3 NEW_2
	goto Label_172; // 0xb5 Jump
	
Label_183:
	var_282_string = "all"; // 0xb7 PushS
	var_283_string = "idle"; // 0xb8 PushS
	PlayAnimation(var_282_string, var_283_string); // 0xb9 Func
	
Label_187:
	WaitForAnimEnd(); // 0xbb Func
	var_284_string = var_3_string; // 0xbd PushT
	if(var_284_string == 0) goto Label_192; // 0xbe JumpB
	goto Label_197; // 0xbf Jump
	
Label_192:
	var_285_string = "all"; // 0xc0 PushS
	var_286_string = "idle"; // 0xc1 PushS
	PlayAnimation(var_285_string, var_286_string); // 0xc2 Func
	goto Label_187; // 0xc4 Jump
}


func_980(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x3d4 PushV
	GetPosition(var_20_cvector); // 0x3d5 Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x3d7 Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x3d8 PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x3d9 PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x3da Func
	var_15_bool = var_22_bool; // 0x3dc Mov
	return 6; // 0x3dd Return
}


func_1496(var_257_bool)
{
	var_259_int = 0; var_260_string = ""; // 0x5d9 PushV
	var_260_string = "oob6Klara3"; // 0x5da MovS
	func_1298(var_259_int, var_260_string); // 0x5db NEW_2
	var_261_int = 0; // 0x5dd PushI
	var_262_bool = var_259_int == var_261_int; // 0x5de Eq
	if(var_262_bool == 0) goto Label_1506; // 0x5df JumpB
	var_257_bool = 1; // 0x5e0 MovB
	return 0; // 0x5e1 Return
	
Label_1506:
	var_257_bool = 0; // 0x5e2 MovB
	return 0; // 0x5e3 Return
}


func_1625(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x659 PushV
	var_92_string = "branch"; // 0x65a PushS
	GetVariable(var_92_string, var_91_int); // 0x65b Func
	var_93_int = 0; // 0x65d PushI
	var_94_bool = var_91_int == var_93_int; // 0x65e Eq
	if(var_94_bool == 0) goto Label_1635; // 0x65f JumpB
	var_89_int = 1; // 0x660 MovI
	return 2; // 0x661 Return
	
Label_1635:
	var_95_int = 1; // 0x663 PushI
	var_96_bool = var_91_int == var_95_int; // 0x664 Eq
	if(var_96_bool == 0) goto Label_1640; // 0x665 JumpB
	var_89_int = 2; // 0x666 MovI
	return 2; // 0x667 Return
	
Label_1640:
	var_89_int = 3; // 0x668 MovI
	return 2; // 0x669 Return
}


func_1370()
{
	var_15_string = "oob6Klara1"; // 0x55b PushS
	var_16_int = 1; // 0x55c PushI
	SetVariable(var_15_string, var_16_int); // 0x55d Func
	return 0; // 0x55f Return
}


func_1245(var_208_string, var_209_bool)
{
	var_212_bool = 0; var_213_float = 0; var_214_float = 0; var_215_bool = 0; var_216_float = 0; var_217_float = 0; // 0x4dd PushV
	lshHasAnimation(var_215_bool, var_208_string); // 0x4de Func
	var_218_bool = var_215_bool; // 0x4e0 Push
	if(var_218_bool == 0) goto Label_1255; // 0x4e1 JumpB
	lshGetAnimTimes(var_208_string, var_216_float, var_217_float); // 0x4e2 Func
	lshPlayAnimation(var_216_float, var_217_float, var_209_bool); // 0x4e4 Func
	goto Label_1259; // 0x4e6 Jump
	
Label_1259:
	return 6; // 0x4eb Return
	
Label_1255:
	var_219_string = "Can't find lsh animation : "; // 0x4e7 PushS
	var_220_int = var_219_string + var_208_string; // 0x4e8 Add
	Trace(var_220_int); // 0x4e9 Func
}


func_990(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x3de PushV
	GetPosition(var_14_cvector); // 0x3df ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x3e1 PushV
	var_16_cvector = var_14_cvector; // 0x3e2 Mov
	func_980(var_15_bool, var_16_cvector); // 0x3e3 NEW_2
	var_11_bool = var_15_bool; // 0x3e4 Mov
	return 2; // 0x3e6 Return
}


func_734(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x2de PushV
	var_35_string = "player"; // 0x2df PushS
	FindActor(var_34_object, var_35_string); // 0x2e0 Func
	var_36_bool = var_34_object == 0; // 0x2e2 Not
	if(var_36_bool == 0) goto Label_742; // 0x2e3 JumpB
	var_32_bool = 0; // 0x2e4 MovB
	return 2; // 0x2e5 Return
	
Label_742:
	var_37_bool = 0; var_38_object = Obj(); // 0x2e6 PushV
	var_38_object = var_34_object; // 0x2e7 Mov
	func_990(var_38_object); // 0x2e8 NEW_2
	var_32_bool = var_37_bool; // 0x2e9 Mov
	return 2; // 0x2eb Return
}


func_1376()
{
	var_21_object = Obj(); var_22_object = Obj(); // 0x560 PushV
	var_23_string = "b6q01"; // 0x561 PushS
	var_24_int = 2; // 0x562 PushI
	SetVariable(var_23_string, var_24_int); // 0x563 Func
	var_25_object = Obj(); // 0x565 PushV
	func_1575(var_25_object); // 0x566 NEW_2
	var_22_object = var_25_object; // 0x567 Mov
	var_32_string = "b6q01KlaraGotoTermitnik2"; // 0x569 PushS
	var_33_string = "pt_map_termitnik2"; // 0x56a PushS
	var_34_int = 1; // 0x56b PushI
	var_35_int = 525668; // 0x56c PushI
	var_36_float = 0; // 0x56d PushV
	func_1332(var_36_float); // 0x56e NEW_2
	AddMark(var_32_string, var_33_string, var_34_int, var_35_int, var_36_float); // 0x570 ObjFunc
	func_1521(); // 0x573 NEW_2
	var_62_bool = 0; var_63_string = ""; var_64_string = ""; // 0x575 PushV
	var_63_string = "quest_b6_01"; // 0x576 MovS
	var_64_string = "remove_klara"; // 0x577 MovS
	func_1320(var_62_bool, var_63_string, var_64_string); // 0x578 NEW_2
	var_68_bool = 0; var_69_string = ""; var_70_string = ""; // 0x57a PushV
	var_69_string = "quest_b6_01"; // 0x57b MovS
	var_70_string = "init_termitnik"; // 0x57c MovS
	func_1320(var_68_bool, var_69_string, var_70_string); // 0x57d NEW_2
	return 2; // 0x57f Return
}


func_1508()
{
	var_113_object = Obj(); var_114_object = Obj(); // 0x5e4 PushV
	var_115_int = 783; // 0x5e5 PushI
	var_116_int = 1; // 0x5e6 PushI
	var_117_int = 542148; // 0x5e7 PushI
	CreateDiaryEntry(var_114_object, var_115_int, var_116_int, var_117_int); // 0x5e8 Func
	var_118_bool = 0; var_119_object = Obj(); var_120_int = 0; // 0x5ea PushV
	var_119_object = var_114_object; // 0x5eb Mov
	var_120_int = 265; // 0x5ec MovI
	func_1547(var_118_bool, var_119_object, var_120_int); // 0x5ed NEW_2
	return 2; // 0x5ef Return
}


func_999(var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0; // 0x3e7 PushV
	IsLoaded(var_11_bool); // 0x3e8 Func
	var_9_bool = var_11_bool; // 0x3ea Mov
	return 2; // 0x3eb Return
}


func_1642(var_86_int)
{
	var_86_int = 515540; // 0x66a MovI
	return 0; // 0x66b Return
}


func_1644(var_85_int)
{
	var_85_int = 502865; // 0x66c MovI
	return 0; // 0x66d Return
}


func_1004(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x3ec PushV
	GetPosition(var_50_cvector); // 0x3ed ObjFunc
	GetEyesHeight(var_49_float); // 0x3ef ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x3f1 PushE
	var_58_float = var_58_float + var_49_float; // 0x3f2 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x3f3 PopE
	GetPosition(var_51_cvector); // 0x3f4 Func
	GetEyesHeight(var_49_float); // 0x3f6 Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x3f8 PushE
	var_59_float = var_59_float + var_49_float; // 0x3f9 Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x3fa PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x3fb Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x3fc PushE
	var_60_float = 0; // 0x3fd MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x3fe PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x3ff Or
	var_62_float = sqrt(var_61_int); // 0x400 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x401 Div2
	var_53_cvector = -var_52_cvector; // 0x402 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x403 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x404 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x405 PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x406 Xor2
	func_1288(var_64_cvector, var_65_cvector); // 0x407 NEW_2
	var_72_int = 25; // 0x409 PushI
	var_73_float = var_64_cvector * var_72_int; // 0x40a Mult
	var_74_int = var_63_float + var_73_float; // 0x40b Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x40c PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x40d Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x40e Add2
	IsOverrideActive(var_56_bool); // 0x40f Func
	var_76_bool = var_56_bool; // 0x411 Push
	if(var_76_bool == 0) goto Label_1045; // 0x412 JumpB
	var_37_bool = 0; // 0x413 MovB
	return 18; // 0x414 Return
	
Label_1045:
	StopWorld(); // 0x415 Func
	var_77_bool = 1; // 0x417 PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x418 Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x41a PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x41b PushE
	Rotate(var_78_float, var_79_float); // 0x41c Func
	var_80_bool = 0; // 0x41e PushV
	func_1650(var_80_bool); // 0x41f NEW_2
	if(var_80_bool == 0) goto Label_1059; // 0x421 JumpB
	goto Label_1067; // 0x422 Jump
	
Label_1067:
	CameraWaitForPlayFinish(); // 0x42b Func
	ResumeWorld(); // 0x42d Func
	var_37_bool = 1; // 0x42f MovB
	return 18; // 0x430 Return
	
Label_1059:
	var_81_string = "head"; // 0x423 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x424 Func
	var_82_bool = var_57_bool; // 0x426 Push
	if(var_82_bool == 0) goto Label_1067; // 0x427 JumpB
	var_83_string = "head"; // 0x428 PushS
	LookAsyncCamera(var_83_string); // 0x429 Func
}


func_1646(var_87_string)
{
	var_87_string = "ui/NPC_Klara.png"; // 0x66e MovS
	return 0; // 0x66f Return
}


func_749(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x2ed PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x2ee PushE
	RotateAsync(var_84_float, var_85_float); // 0x2ef Func
	return 0; // 0x2f1 Return
}


func_1648(var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png"; // 0x670 MovS
	return 0; // 0x671 Return
}


func_1260(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x4ec PushV
	var_136_bool = 0; // 0x4ed PushV
	func_1650(var_136_bool); // 0x4ee NEW_2
	if(var_136_bool == 0) goto Label_1273; // 0x4f0 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x4f1 Func
	var_137_bool = var_135_bool; // 0x4f3 Push
	if(var_137_bool == 0) goto Label_1273; // 0x4f4 JumpB
	lshPlaySpeech(var_133_string); // 0x4f5 Func
	var_132_bool = 1; // 0x4f7 MovB
	return 2; // 0x4f8 Return
	
Label_1273:
	var_132_bool = 0; // 0x4f9 MovB
	return 2; // 0x4fa Return
}


func_1650(var_80_bool)
{
	var_80_bool = 1; // 0x672 MovB
	return 0; // 0x673 Return
}


func_754(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x2f2 PushV
	var_20_string = "player"; // 0x2f3 PushS
	FindActor(var_18_object, var_20_string); // 0x2f4 Func
	var_21_bool = var_18_object == 0; // 0x2f6 Not
	if(var_21_bool == 0) goto Label_762; // 0x2f7 JumpB
	var_15_bool = 0; // 0x2f8 MovB
	return 4; // 0x2f9 Return
	
Label_762:
	var_22_float = 0; var_23_object = Obj(); // 0x2fa PushV
	var_23_object = var_18_object; // 0x2fb Mov
	func_972(var_23_object); // 0x2fc NEW_2
	var_30_float = 90000.0; // 0x2fe PushF
	var_31_bool = var_22_float > var_30_float; // 0x2ff GT
	if(var_31_bool == 0) goto Label_771; // 0x300 JumpB
	var_15_bool = 0; // 0x301 MovB
	return 4; // 0x302 Return
	
Label_771:
	CanSee(var_19_bool, var_18_object); // 0x303 Func
	var_15_bool = var_19_bool; // 0x305 Mov
	return 4; // 0x306 Return
}


func_1521()
{
	var_39_object = Obj(); var_40_object = Obj(); // 0x5f1 PushV
	var_41_int = 362; // 0x5f2 PushI
	var_42_int = 1; // 0x5f3 PushI
	var_43_int = 525662; // 0x5f4 PushI
	CreateDiaryEntry(var_40_object, var_41_int, var_42_int, var_43_int); // 0x5f5 Func
	var_44_bool = 0; var_45_object = Obj(); var_46_int = 0; // 0x5f7 PushV
	var_45_object = var_40_object; // 0x5f8 Mov
	var_46_int = 265; // 0x5f9 MovI
	func_1547(var_44_bool, var_45_object, var_46_int); // 0x5fa NEW_2
	return 2; // 0x5fc Return
}


func_1275()
{
	var_10_bool = 0; // 0x4fb PushV
	func_1650(var_10_bool); // 0x4fc NEW_2
	if(var_10_bool == 0) goto Label_1281; // 0x4fe JumpB
	lshStopSpeech(); // 0x4ff Func
	
Label_1281:
	return 0; // 0x501 Return
}


func_1149(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x47d PushV
	var_116_string = "c"; // 0x47e MovS
	var_117_int = 0; // 0x47f MovI
	
Label_1152:
	var_121_int = 1; // 0x480 PushI
	if(var_121_int == 0) goto Label_1165; // 0x481 JumpB
	var_122_int = 1; // 0x482 PushI
	var_123_int = var_117_int + var_122_int; // 0x483 Add
	var_124_int = var_116_string + var_123_int; // 0x484 Add
	HasProperty(var_124_int, var_118_bool); // 0x485 ObjFunc
	var_125_bool = var_118_bool == 0; // 0x487 Not
	if(var_125_bool == 0) goto Label_1162; // 0x488 JumpB
	goto Label_1165; // 0x489 Jump
	
Label_1165:
	var_126_bool = var_117_int == 0; // 0x48d Not
	if(var_126_bool == 0) goto Label_1169; // 0x48e JumpB
	var_109_bool = 0; // 0x48f MovB
	return 10; // 0x490 Return
	
Label_1169:
	var_119_int = 0; // 0x491 MovI
	var_127_int = 1; // 0x492 PushI
	var_128_bool = var_117_int > var_127_int; // 0x493 GT
	if(var_128_bool == 0) goto Label_1175; // 0x494 JumpB
	irand(var_119_int, var_117_int); // 0x495 Func
	
Label_1175:
	var_129_int = 1; // 0x497 PushI
	var_130_int = var_119_int + var_129_int; // 0x498 Add
	var_131_int = var_116_string + var_130_int; // 0x499 Add
	GetProperty(var_131_int, var_120_string); // 0x49a ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x49c PushV
	var_133_string = var_120_string; // 0x49d Mov
	func_1260(var_132_bool, var_133_string); // 0x49e NEW_2
	var_109_bool = var_132_bool; // 0x49f Mov
	return 10; // 0x4a1 Return
	
Label_1162:
	var_138_int = 1; // 0x48a PushI
	var_117_int = var_117_int + var_138_int; // 0x48b Add2
	goto Label_1152; // 0x48c Jump
}


func_1534(var_53_object)
{
	var_54_object = Obj(); var_55_object = Obj(); // 0x5fe PushV
	GetDiaryRoot(var_55_object); // 0x5ff Func
	var_56_bool = var_55_object == 0; // 0x601 Not
	if(var_56_bool == 0) goto Label_1544; // 0x602 JumpB
	var_57_string = "Can't retrieve diary root"; // 0x603 PushS
	Trace(var_57_string); // 0x604 Func
	var_53_object = 0; // 0x606 MovB
	return 2; // 0x607 Return
	
Label_1544:
	var_53_object = var_55_object; // 0x608 Mov
	return 2; // 0x609 Return
}


