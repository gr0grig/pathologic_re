task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_object, var_8_object, var_9_object, var_10_string, var_11_bool, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0xca PushI
	if(var_23_int == 0) goto Label_621; // 0xcb JumpB
	func_1849(); // 0xcd NEW_2
	var_25_int = 20555; // 0xcf PushI
	var_26_bool = var_22_cvector == var_25_int; // 0xd0 Eq
	if(var_26_bool == 0) goto Label_225; // 0xd1 JumpB
	var_27_object = Obj(); var_28_object = Obj(); // 0xd2 PushV
	var_27_object = var_1_object; // 0xd3 MovT
	var_28_object = var_0_object; // 0xd4 MovT
	func_1975(); // 0xd5 NEW_2
	var_70_object = Obj(); var_71_object = Obj(); // 0xd7 PushV
	var_70_object = var_1_object; // 0xd8 MovT
	var_71_object = var_0_object; // 0xd9 MovT
	func_2021(); // 0xda NEW_2
	var_96_object = Obj(); var_97_object = Obj(); // 0xdc PushV
	var_96_object = var_1_object; // 0xdd MovT
	var_97_object = var_0_object; // 0xde MovT
	func_2010(var_97_object); // 0xdf NEW_2
	
Label_225:
	var_120_int = 20574; // 0xe1 PushI
	var_121_bool = var_22_cvector == var_120_int; // 0xe2 Eq
	if(var_121_bool == 0) goto Label_243; // 0xe3 JumpB
	var_122_object = Obj(); var_123_object = Obj(); // 0xe4 PushV
	var_122_object = var_1_object; // 0xe5 MovT
	var_123_object = var_0_object; // 0xe6 MovT
	func_1975(); // 0xe7 NEW_2
	var_124_object = Obj(); var_125_object = Obj(); // 0xe9 PushV
	var_124_object = var_1_object; // 0xea MovT
	var_125_object = var_0_object; // 0xeb MovT
	func_2021(); // 0xec NEW_2
	var_126_object = Obj(); var_127_object = Obj(); // 0xee PushV
	var_126_object = var_1_object; // 0xef MovT
	var_127_object = var_0_object; // 0xf0 MovT
	func_2010(var_127_object); // 0xf1 NEW_2
	
Label_243:
	var_128_int = 20537; // 0xf3 PushI
	var_129_bool = var_22_cvector == var_128_int; // 0xf4 Eq
	if(var_129_bool == 0) goto Label_251; // 0xf5 JumpB
	var_130_object = Obj(); var_131_object = Obj(); // 0xf6 PushV
	var_130_object = var_1_object; // 0xf7 MovT
	var_131_object = var_0_object; // 0xf8 MovT
	func_1998(); // 0xf9 NEW_2
	
Label_251:
	var_134_int = 20543; // 0xfb PushI
	var_135_bool = var_22_cvector == var_134_int; // 0xfc Eq
	if(var_135_bool == 0) goto Label_259; // 0xfd JumpB
	var_136_object = Obj(); var_137_object = Obj(); // 0xfe PushV
	var_136_object = var_1_object; // 0xff MovT
	var_137_object = var_0_object; // 0x100 MovT
	func_2004(); // 0x101 NEW_2
	
Label_259:
	var_140_int = 19348; // 0x103 PushI
	var_141_bool = var_21_bool == var_140_int; // 0x104 Eq
	if(var_141_bool == 0) goto Label_322; // 0x105 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x106 PushV
	var_143_object = var_1_object; // 0x107 MovT
	func_2037(var_143_object); // 0x108 NEW_2
	if(var_142_bool == 0) goto Label_287; // 0x10a JumpB
	var_150_string = ""; // 0x10b PushV
	var_150_string = "Neutral"; // 0x10c MovS
	func_179(var_22_cvector, var_150_string); // 0x10d NEW_2
	var_167_int = 518239; // 0x10f PushI
	SetMessage(var_167_int); // 0x110 TObjFunc
	ClearReplies(); // 0x112 TObjFunc
	var_168_int = 518240; // 0x114 PushI
	var_169_int = 20533; // 0x115 PushI
	var_170_int = 19349; // 0x116 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x117 TObjFunc
	var_171_int = 519398; // 0x119 PushI
	var_172_int = 20561; // 0x11a PushI
	var_173_int = 20560; // 0x11b PushI
	AddReply(var_171_int, var_172_int, var_173_int); // 0x11c TObjFunc
	return 0; // 0x11e Return
	
Label_287:
	var_174_string = ""; // 0x11f PushV
	var_174_string = "Neutral"; // 0x120 MovS
	func_179(var_22_cvector, var_174_string); // 0x121 NEW_2
	var_175_int = 518241; // 0x123 PushI
	SetMessage(var_175_int); // 0x124 TObjFunc
	ClearReplies(); // 0x126 TObjFunc
	var_176_bool = 0; var_177_object = Obj(); // 0x128 PushV
	var_177_object = var_1_object; // 0x129 MovT
	func_2049(var_177_object); // 0x12a NEW_2
	if(var_176_bool == 0) goto Label_306; // 0x12c JumpB
	var_182_int = 519376; // 0x12d PushI
	var_183_int = 20538; // 0x12e PushI
	var_184_int = 20537; // 0x12f PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x130 TObjFunc
	
Label_306:
	var_185_bool = 0; var_186_object = Obj(); // 0x132 PushV
	var_186_object = var_1_object; // 0x133 MovT
	func_2061(var_186_object); // 0x134 NEW_2
	if(var_185_bool == 0) goto Label_316; // 0x136 JumpB
	var_191_int = 519382; // 0x137 PushI
	var_192_int = 20544; // 0x138 PushI
	var_193_int = 20543; // 0x139 PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x13a TObjFunc
	
Label_316:
	var_194_int = 518242; // 0x13c PushI
	var_195_int = -1; // 0x13d PushI
	var_196_int = 19351; // 0x13e PushI
	AddReply(var_194_int, var_195_int, var_196_int); // 0x13f TObjFunc
	return 0; // 0x141 Return
	
Label_322:
	var_197_int = 20544; // 0x142 PushI
	var_198_bool = var_21_bool == var_197_int; // 0x143 Eq
	if(var_198_bool == 0) goto Label_340; // 0x144 JumpB
	var_199_string = ""; // 0x145 PushV
	var_199_string = "Neutral"; // 0x146 MovS
	func_179(var_22_cvector, var_199_string); // 0x147 NEW_2
	var_200_int = 519383; // 0x149 PushI
	SetMessage(var_200_int); // 0x14a TObjFunc
	ClearReplies(); // 0x14c TObjFunc
	var_201_int = 519384; // 0x14e PushI
	var_202_int = 20546; // 0x14f PushI
	var_203_int = 20545; // 0x150 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x151 TObjFunc
	return 0; // 0x153 Return
	
Label_340:
	var_204_int = 20546; // 0x154 PushI
	var_205_bool = var_21_bool == var_204_int; // 0x155 Eq
	if(var_205_bool == 0) goto Label_363; // 0x156 JumpB
	var_206_string = ""; // 0x157 PushV
	var_206_string = "Neutral"; // 0x158 MovS
	func_179(var_22_cvector, var_206_string); // 0x159 NEW_2
	var_207_int = 519385; // 0x15b PushI
	SetMessage(var_207_int); // 0x15c TObjFunc
	ClearReplies(); // 0x15e TObjFunc
	var_208_int = 519387; // 0x160 PushI
	var_209_int = 20549; // 0x161 PushI
	var_210_int = 20548; // 0x162 PushI
	AddReply(var_208_int, var_209_int, var_210_int); // 0x163 TObjFunc
	var_211_int = 519386; // 0x165 PushI
	var_212_int = -1; // 0x166 PushI
	var_213_int = 20547; // 0x167 PushI
	AddReply(var_211_int, var_212_int, var_213_int); // 0x168 TObjFunc
	return 0; // 0x16a Return
	
Label_363:
	var_214_int = 20549; // 0x16b PushI
	var_215_bool = var_21_bool == var_214_int; // 0x16c Eq
	if(var_215_bool == 0) goto Label_386; // 0x16d JumpB
	var_216_string = ""; // 0x16e PushV
	var_216_string = "Neutral"; // 0x16f MovS
	func_179(var_22_cvector, var_216_string); // 0x170 NEW_2
	var_217_int = 519388; // 0x172 PushI
	SetMessage(var_217_int); // 0x173 TObjFunc
	ClearReplies(); // 0x175 TObjFunc
	var_218_int = 519389; // 0x177 PushI
	var_219_int = -1; // 0x178 PushI
	var_220_int = 20550; // 0x179 PushI
	AddReply(var_218_int, var_219_int, var_220_int); // 0x17a TObjFunc
	var_221_int = 519390; // 0x17c PushI
	var_222_int = -1; // 0x17d PushI
	var_223_int = 20551; // 0x17e PushI
	AddReply(var_221_int, var_222_int, var_223_int); // 0x17f TObjFunc
	return 0; // 0x181 Return
	
Label_386:
	var_224_int = 20538; // 0x182 PushI
	var_225_bool = var_21_bool == var_224_int; // 0x183 Eq
	if(var_225_bool == 0) goto Label_404; // 0x184 JumpB
	var_226_string = ""; // 0x185 PushV
	var_226_string = "Neutral"; // 0x186 MovS
	func_179(var_22_cvector, var_226_string); // 0x187 NEW_2
	var_227_int = 519377; // 0x189 PushI
	SetMessage(var_227_int); // 0x18a TObjFunc
	ClearReplies(); // 0x18c TObjFunc
	var_228_int = 519378; // 0x18e PushI
	var_229_int = 20540; // 0x18f PushI
	var_230_int = 20539; // 0x190 PushI
	AddReply(var_228_int, var_229_int, var_230_int); // 0x191 TObjFunc
	return 0; // 0x193 Return
	
Label_404:
	var_231_int = 20540; // 0x194 PushI
	var_232_bool = var_21_bool == var_231_int; // 0x195 Eq
	if(var_232_bool == 0) goto Label_427; // 0x196 JumpB
	var_233_string = ""; // 0x197 PushV
	var_233_string = "Neutral"; // 0x198 MovS
	func_179(var_22_cvector, var_233_string); // 0x199 NEW_2
	var_234_int = 519379; // 0x19b PushI
	SetMessage(var_234_int); // 0x19c TObjFunc
	ClearReplies(); // 0x19e TObjFunc
	var_235_int = 519380; // 0x1a0 PushI
	var_236_int = -1; // 0x1a1 PushI
	var_237_int = 20541; // 0x1a2 PushI
	AddReply(var_235_int, var_236_int, var_237_int); // 0x1a3 TObjFunc
	var_238_int = 519381; // 0x1a5 PushI
	var_239_int = -1; // 0x1a6 PushI
	var_240_int = 20542; // 0x1a7 PushI
	AddReply(var_238_int, var_239_int, var_240_int); // 0x1a8 TObjFunc
	return 0; // 0x1aa Return
	
Label_427:
	var_241_int = 20561; // 0x1ab PushI
	var_242_bool = var_21_bool == var_241_int; // 0x1ac Eq
	if(var_242_bool == 0) goto Label_445; // 0x1ad JumpB
	var_243_string = ""; // 0x1ae PushV
	var_243_string = "Neutral"; // 0x1af MovS
	func_179(var_22_cvector, var_243_string); // 0x1b0 NEW_2
	var_244_int = 519399; // 0x1b2 PushI
	SetMessage(var_244_int); // 0x1b3 TObjFunc
	ClearReplies(); // 0x1b5 TObjFunc
	var_245_int = 519400; // 0x1b7 PushI
	var_246_int = 20563; // 0x1b8 PushI
	var_247_int = 20562; // 0x1b9 PushI
	AddReply(var_245_int, var_246_int, var_247_int); // 0x1ba TObjFunc
	return 0; // 0x1bc Return
	
Label_445:
	var_248_int = 20563; // 0x1bd PushI
	var_249_bool = var_21_bool == var_248_int; // 0x1be Eq
	if(var_249_bool == 0) goto Label_463; // 0x1bf JumpB
	var_250_string = ""; // 0x1c0 PushV
	var_250_string = "Neutral"; // 0x1c1 MovS
	func_179(var_22_cvector, var_250_string); // 0x1c2 NEW_2
	var_251_int = 519401; // 0x1c4 PushI
	SetMessage(var_251_int); // 0x1c5 TObjFunc
	ClearReplies(); // 0x1c7 TObjFunc
	var_252_int = 519402; // 0x1c9 PushI
	var_253_int = 20565; // 0x1ca PushI
	var_254_int = 20564; // 0x1cb PushI
	AddReply(var_252_int, var_253_int, var_254_int); // 0x1cc TObjFunc
	return 0; // 0x1ce Return
	
Label_463:
	var_255_int = 20565; // 0x1cf PushI
	var_256_bool = var_21_bool == var_255_int; // 0x1d0 Eq
	if(var_256_bool == 0) goto Label_481; // 0x1d1 JumpB
	var_257_string = ""; // 0x1d2 PushV
	var_257_string = "Neutral"; // 0x1d3 MovS
	func_179(var_22_cvector, var_257_string); // 0x1d4 NEW_2
	var_258_int = 519403; // 0x1d6 PushI
	SetMessage(var_258_int); // 0x1d7 TObjFunc
	ClearReplies(); // 0x1d9 TObjFunc
	var_259_int = 519404; // 0x1db PushI
	var_260_int = 20533; // 0x1dc PushI
	var_261_int = 20566; // 0x1dd PushI
	AddReply(var_259_int, var_260_int, var_261_int); // 0x1de TObjFunc
	return 0; // 0x1e0 Return
	
Label_481:
	var_262_int = 20533; // 0x1e1 PushI
	var_263_bool = var_21_bool == var_262_int; // 0x1e2 Eq
	if(var_263_bool == 0) goto Label_504; // 0x1e3 JumpB
	var_264_string = ""; // 0x1e4 PushV
	var_264_string = "Neutral"; // 0x1e5 MovS
	func_179(var_22_cvector, var_264_string); // 0x1e6 NEW_2
	var_265_int = 519372; // 0x1e8 PushI
	SetMessage(var_265_int); // 0x1e9 TObjFunc
	ClearReplies(); // 0x1eb TObjFunc
	var_266_int = 519373; // 0x1ed PushI
	var_267_int = 20535; // 0x1ee PushI
	var_268_int = 20534; // 0x1ef PushI
	AddReply(var_266_int, var_267_int, var_268_int); // 0x1f0 TObjFunc
	var_269_int = 519395; // 0x1f2 PushI
	var_270_int = 20557; // 0x1f3 PushI
	var_271_int = 20556; // 0x1f4 PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x1f5 TObjFunc
	return 0; // 0x1f7 Return
	
Label_504:
	var_272_int = 20557; // 0x1f8 PushI
	var_273_bool = var_21_bool == var_272_int; // 0x1f9 Eq
	if(var_273_bool == 0) goto Label_522; // 0x1fa JumpB
	var_274_string = ""; // 0x1fb PushV
	var_274_string = "Neutral"; // 0x1fc MovS
	func_179(var_22_cvector, var_274_string); // 0x1fd NEW_2
	var_275_int = 519396; // 0x1ff PushI
	SetMessage(var_275_int); // 0x200 TObjFunc
	ClearReplies(); // 0x202 TObjFunc
	var_276_int = 519397; // 0x204 PushI
	var_277_int = 20552; // 0x205 PushI
	var_278_int = 20558; // 0x206 PushI
	AddReply(var_276_int, var_277_int, var_278_int); // 0x207 TObjFunc
	return 0; // 0x209 Return
	
Label_522:
	var_279_int = 20535; // 0x20a PushI
	var_280_bool = var_21_bool == var_279_int; // 0x20b Eq
	if(var_280_bool == 0) goto Label_545; // 0x20c JumpB
	var_281_string = ""; // 0x20d PushV
	var_281_string = "Neutral"; // 0x20e MovS
	func_179(var_22_cvector, var_281_string); // 0x20f NEW_2
	var_282_int = 519374; // 0x211 PushI
	SetMessage(var_282_int); // 0x212 TObjFunc
	ClearReplies(); // 0x214 TObjFunc
	var_283_int = 519375; // 0x216 PushI
	var_284_int = 20552; // 0x217 PushI
	var_285_int = 20536; // 0x218 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x219 TObjFunc
	var_286_int = 519406; // 0x21b PushI
	var_287_int = 20571; // 0x21c PushI
	var_288_int = 20570; // 0x21d PushI
	AddReply(var_286_int, var_287_int, var_288_int); // 0x21e TObjFunc
	return 0; // 0x220 Return
	
Label_545:
	var_289_int = 20571; // 0x221 PushI
	var_290_bool = var_21_bool == var_289_int; // 0x222 Eq
	if(var_290_bool == 0) goto Label_563; // 0x223 JumpB
	var_291_string = ""; // 0x224 PushV
	var_291_string = "Neutral"; // 0x225 MovS
	func_179(var_22_cvector, var_291_string); // 0x226 NEW_2
	var_292_int = 519407; // 0x228 PushI
	SetMessage(var_292_int); // 0x229 TObjFunc
	ClearReplies(); // 0x22b TObjFunc
	var_293_int = 519408; // 0x22d PushI
	var_294_int = 20557; // 0x22e PushI
	var_295_int = 20572; // 0x22f PushI
	AddReply(var_293_int, var_294_int, var_295_int); // 0x230 TObjFunc
	return 0; // 0x232 Return
	
Label_563:
	var_296_int = 20552; // 0x233 PushI
	var_297_bool = var_21_bool == var_296_int; // 0x234 Eq
	if(var_297_bool == 0) goto Label_586; // 0x235 JumpB
	var_298_string = ""; // 0x236 PushV
	var_298_string = "Neutral"; // 0x237 MovS
	func_179(var_22_cvector, var_298_string); // 0x238 NEW_2
	var_299_int = 519391; // 0x23a PushI
	SetMessage(var_299_int); // 0x23b TObjFunc
	ClearReplies(); // 0x23d TObjFunc
	var_300_int = 519392; // 0x23f PushI
	var_301_int = 20554; // 0x240 PushI
	var_302_int = 20553; // 0x241 PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x242 TObjFunc
	var_303_int = 519405; // 0x244 PushI
	var_304_int = 20554; // 0x245 PushI
	var_305_int = 20568; // 0x246 PushI
	AddReply(var_303_int, var_304_int, var_305_int); // 0x247 TObjFunc
	return 0; // 0x249 Return
	
Label_586:
	var_306_int = 20554; // 0x24a PushI
	var_307_bool = var_21_bool == var_306_int; // 0x24b Eq
	if(var_307_bool == 0) goto Label_609; // 0x24c JumpB
	var_308_string = ""; // 0x24d PushV
	var_308_string = "Strict"; // 0x24e MovS
	func_179(var_22_cvector, var_308_string); // 0x24f NEW_2
	var_309_int = 519393; // 0x251 PushI
	SetMessage(var_309_int); // 0x252 TObjFunc
	ClearReplies(); // 0x254 TObjFunc
	var_310_int = 519394; // 0x256 PushI
	var_311_int = -1; // 0x257 PushI
	var_312_int = 20555; // 0x258 PushI
	AddReply(var_310_int, var_311_int, var_312_int); // 0x259 TObjFunc
	var_313_int = 519409; // 0x25b PushI
	var_314_int = -1; // 0x25c PushI
	var_315_int = 20574; // 0x25d PushI
	AddReply(var_313_int, var_314_int, var_315_int); // 0x25e TObjFunc
	return 0; // 0x260 Return
	
Label_609:
	var_3_string = 1; // 0x261 TMovB
	var_316_bool = 0; // 0x262 PushV
	func_1973(var_316_bool); // 0x263 NEW_2
	if(var_316_bool == 0) goto Label_617; // 0x265 JumpB
	lshStopAnimation(); // 0x266 Func
	goto Label_619; // 0x268 Jump
	
Label_619:
	return 0; // 0x26b Return
	
Label_617:
	StopAnimation(); // 0x269 Func
	
Label_621:
	return 0; // 0x26d Return
}


task_3_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_int, var_11_int, var_12_object, var_13_object, var_14_object, var_15_string, var_16_bool, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x310 PushI
	if(var_23_int == 0) goto Label_824; // 0x311 JumpB
	func_1849(); // 0x313 NEW_2
	var_25_int = 21877; // 0x315 PushI
	var_26_bool = var_21_bool == var_25_int; // 0x316 Eq
	if(var_26_bool == 0) goto Label_812; // 0x317 JumpB
	var_27_string = ""; // 0x318 PushV
	var_27_string = "Strict"; // 0x319 MovS
	func_761(var_22_cvector, var_27_string); // 0x31a NEW_2
	var_44_int = 520670; // 0x31c PushI
	SetMessage(var_44_int); // 0x31d TObjFunc
	ClearReplies(); // 0x31f TObjFunc
	var_45_int = 520671; // 0x321 PushI
	var_46_int = -1; // 0x322 PushI
	var_47_int = 21878; // 0x323 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x324 TObjFunc
	var_48_int = 527796; // 0x326 PushI
	var_49_int = -1; // 0x327 PushI
	var_50_int = 29129; // 0x328 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x329 TObjFunc
	return 0; // 0x32b Return
	
Label_812:
	var_3_string = 1; // 0x32c TMovB
	var_51_bool = 0; // 0x32d PushV
	func_1973(var_51_bool); // 0x32e NEW_2
	if(var_51_bool == 0) goto Label_820; // 0x330 JumpB
	lshStopAnimation(); // 0x331 Func
	goto Label_822; // 0x333 Jump
	
Label_822:
	return 0; // 0x336 Return
	
Label_820:
	StopAnimation(); // 0x334 Func
	
Label_824:
	return 0; // 0x338 Return
}


task_5_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_int, var_16_int, var_17_object, var_18_object, var_19_object, var_20_string, var_21_bool, var_22_cvector)
{
	var_23_int = 1; // 0x3e0 PushI
	if(var_23_int == 0) goto Label_1083; // 0x3e1 JumpB
	func_1849(); // 0x3e3 NEW_2
	var_25_int = 36971; // 0x3e5 PushI
	var_26_bool = var_21_bool == var_25_int; // 0x3e6 Eq
	if(var_26_bool == 0) goto Label_1025; // 0x3e7 JumpB
	var_27_string = ""; // 0x3e8 PushV
	var_27_string = "Neutral"; // 0x3e9 MovS
	func_969(var_22_cvector, var_27_string); // 0x3ea NEW_2
	var_44_int = 535294; // 0x3ec PushI
	SetMessage(var_44_int); // 0x3ed TObjFunc
	ClearReplies(); // 0x3ef TObjFunc
	var_45_int = 535295; // 0x3f1 PushI
	var_46_int = 36973; // 0x3f2 PushI
	var_47_int = 36972; // 0x3f3 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x3f4 TObjFunc
	var_48_int = 535302; // 0x3f6 PushI
	var_49_int = -1; // 0x3f7 PushI
	var_50_int = 36980; // 0x3f8 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x3f9 TObjFunc
	var_51_int = 535303; // 0x3fb PushI
	var_52_int = -1; // 0x3fc PushI
	var_53_int = 36981; // 0x3fd PushI
	AddReply(var_51_int, var_52_int, var_53_int); // 0x3fe TObjFunc
	return 0; // 0x400 Return
	
Label_1025:
	var_54_int = 36973; // 0x401 PushI
	var_55_bool = var_21_bool == var_54_int; // 0x402 Eq
	if(var_55_bool == 0) goto Label_1048; // 0x403 JumpB
	var_56_string = ""; // 0x404 PushV
	var_56_string = "Neutral"; // 0x405 MovS
	func_969(var_22_cvector, var_56_string); // 0x406 NEW_2
	var_57_int = 535296; // 0x408 PushI
	SetMessage(var_57_int); // 0x409 TObjFunc
	ClearReplies(); // 0x40b TObjFunc
	var_58_int = 535297; // 0x40d PushI
	var_59_int = 36975; // 0x40e PushI
	var_60_int = 36974; // 0x40f PushI
	AddReply(var_58_int, var_59_int, var_60_int); // 0x410 TObjFunc
	var_61_int = 535301; // 0x412 PushI
	var_62_int = 36975; // 0x413 PushI
	var_63_int = 36978; // 0x414 PushI
	AddReply(var_61_int, var_62_int, var_63_int); // 0x415 TObjFunc
	return 0; // 0x417 Return
	
Label_1048:
	var_64_int = 36975; // 0x418 PushI
	var_65_bool = var_21_bool == var_64_int; // 0x419 Eq
	if(var_65_bool == 0) goto Label_1071; // 0x41a JumpB
	var_66_string = ""; // 0x41b PushV
	var_66_string = "Neutral"; // 0x41c MovS
	func_969(var_22_cvector, var_66_string); // 0x41d NEW_2
	var_67_int = 535298; // 0x41f PushI
	SetMessage(var_67_int); // 0x420 TObjFunc
	ClearReplies(); // 0x422 TObjFunc
	var_68_int = 535299; // 0x424 PushI
	var_69_int = -1; // 0x425 PushI
	var_70_int = 36976; // 0x426 PushI
	AddReply(var_68_int, var_69_int, var_70_int); // 0x427 TObjFunc
	var_71_int = 535300; // 0x429 PushI
	var_72_int = -1; // 0x42a PushI
	var_73_int = 36977; // 0x42b PushI
	AddReply(var_71_int, var_72_int, var_73_int); // 0x42c TObjFunc
	return 0; // 0x42e Return
	
Label_1071:
	var_3_string = 1; // 0x42f TMovB
	var_74_bool = 0; // 0x430 PushV
	func_1973(var_74_bool); // 0x431 NEW_2
	if(var_74_bool == 0) goto Label_1079; // 0x433 JumpB
	lshStopAnimation(); // 0x434 Func
	goto Label_1081; // 0x436 Jump
	
Label_1081:
	return 0; // 0x439 Return
	
Label_1079:
	StopAnimation(); // 0x437 Func
	
Label_1083:
	return 0; // 0x43b Return
}


task_7_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_int, var_21_int, var_22_cvector)
{
	var_23_int = 1; // 0x4de PushI
	if(var_23_int == 0) goto Label_1286; // 0x4df JumpB
	func_1849(); // 0x4e1 NEW_2
	var_25_int = 42563; // 0x4e3 PushI
	var_26_bool = var_21_int == var_25_int; // 0x4e4 Eq
	if(var_26_bool == 0) goto Label_1274; // 0x4e5 JumpB
	var_27_string = ""; // 0x4e6 PushV
	var_27_string = "Neutral"; // 0x4e7 MovS
	func_1223(var_22_cvector, var_27_string); // 0x4e8 NEW_2
	var_44_int = 540554; // 0x4ea PushI
	SetMessage(var_44_int); // 0x4eb TObjFunc
	ClearReplies(); // 0x4ed TObjFunc
	var_45_int = 540555; // 0x4ef PushI
	var_46_int = -1; // 0x4f0 PushI
	var_47_int = 42564; // 0x4f1 PushI
	AddReply(var_45_int, var_46_int, var_47_int); // 0x4f2 TObjFunc
	var_48_int = 540794; // 0x4f4 PushI
	var_49_int = -1; // 0x4f5 PushI
	var_50_int = 42843; // 0x4f6 PushI
	AddReply(var_48_int, var_49_int, var_50_int); // 0x4f7 TObjFunc
	return 0; // 0x4f9 Return
	
Label_1274:
	var_3_string = 1; // 0x4fa TMovB
	var_51_bool = 0; // 0x4fb PushV
	func_1973(var_51_bool); // 0x4fc NEW_2
	if(var_51_bool == 0) goto Label_1282; // 0x4fe JumpB
	lshStopAnimation(); // 0x4ff Func
	goto Label_1284; // 0x501 Jump
	
Label_1284:
	return 0; // 0x504 Return
	
Label_1282:
	StopAnimation(); // 0x502 Func
	
Label_1286:
	return 0; // 0x506 Return
}


task_8_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_int)
{
	var_22_int = 10; // 0x554 PushI
	var_23_bool = var_21_int == var_22_int; // 0x555 Eq
	if(var_23_bool == 0) goto Label_1400; // 0x556 JumpB
	func_1359(); // 0x558 NEW_2
	var_25_bool = 0; // 0x55a PushV
	var_25_bool = 0; // 0x55b MovB
	var_26_bool = 0; // 0x55c PushV
	func_1573(var_26_bool); // 0x55d NEW_2
	if(var_26_bool == 0) goto Label_1381; // 0x55f JumpB
	var_29_bool = 0; // 0x560 PushV
	func_1328(var_29_bool); // 0x561 NEW_2
	if(var_29_bool == 0) goto Label_1381; // 0x563 JumpB
	var_25_bool = 1; // 0x564 MovB
	
Label_1381:
	if(var_25_bool == 0) goto Label_1394; // 0x565 JumpB
	var_46_bool = 0; // 0x566 PushV
	func_1308(var_46_bool); // 0x567 NEW_2
	if(var_46_bool == 0) goto Label_1393; // 0x569 JumpB
	var_65_bool = 0; var_66_object = Obj(); // 0x56a PushV
	var_67_object = Obj(); // 0x56b PushV
	func_1856(var_67_object); // 0x56c NEW_2
	var_66_object = var_67_object; // 0x56d Mov
	func_1723(var_66_object); // 0x56f NEW_2
	
Label_1393:
	goto Label_1400; // 0x571 Jump
	
Label_1400:
	return 0; // 0x578 Return
	
Label_1394:
	func_1323(var_21_int); // 0x573 NEW_2
	func_1350(); // 0x576 NEW_2
}


task_8_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	func_1541(); // 0x57a NEW_2
	func_1359(); // 0x57d NEW_2
	lshStopSpeech(); // 0x57f Func
	lshStopAnimation(); // 0x581 Func
	StopAsync(); // 0x583 Func
	Hold(); // 0x585 Func
	return 0; // 0x587 Return
}


task_8_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	StopGroup0(); // 0x588 Func
	func_1359(); // 0x58b NEW_2
	var_22_string = ""; // 0x58d PushV
	var_22_string = "Neutral"; // 0x58e MovS
	func_1803(var_22_string); // 0x58f NEW_2
	func_1350(); // 0x592 NEW_2
	return 0; // 0x594 Return
}


task_8_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_bool)
{
	var_22_bool = var_21_bool; // 0x596 Push
	if(var_22_bool == 0) goto Label_1436; // 0x597 JumpB
	func_1350(); // 0x599 NEW_2
	goto Label_1440; // 0x59b Jump
	
Label_1440:
	return 0; // 0x5a0 Return
	
Label_1436:
	var_28_string = ""; // 0x59c PushV
	var_28_string = "Neutral"; // 0x59d MovS
	func_1803(var_28_string); // 0x59e NEW_2
}


task_8_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0; // 0x5a1 PushV
	IsOverrideActive(var_23_bool); // 0x5a2 Func
	var_24_bool = var_23_bool == 0; // 0x5a4 Not
	if(var_24_bool == 0) goto Label_1469; // 0x5a5 JumpB
	EventDisable(0); // 0x5a6 EventDisable
	func_1541(); // 0x5a8 NEW_2
	var_25_bool = 0; var_26_object = Obj(); // 0x5aa PushV
	var_26_object = var_21_object; // 0x5ab Mov
	func_1564(var_26_object); // 0x5ac NEW_2
	EventEnable(0); // 0x5ae EventEnable
	var_39_object = Obj(); // 0x5af PushV
	var_39_object = var_21_object; // 0x5b0 Mov
	func_2194(var_39_object); // 0x5b1 NEW_2
	var_479_string = ""; // 0x5b3 PushV
	var_479_string = "Neutral"; // 0x5b4 MovS
	func_1803(var_479_string); // 0x5b5 NEW_2
	func_1359(); // 0x5b8 NEW_2
	func_1350(); // 0x5bb NEW_2
	
Label_1469:
	return 2; // 0x5bd Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_object, var_6_object, var_7_object, var_8_string, var_9_bool, var_10_object, var_11_object, var_12_object, var_13_string, var_14_bool, var_15_object, var_16_object, var_17_object, var_18_string, var_19_bool, var_20_cvector)
{
	var_21_bool = GlobalVars[1]; // 0x507 PushGE
	var_21_bool = 0; // 0x508 MovB
	GlobalVars[1] = var_21_bool; // 0x509 PopGE
	func_1294(var_20_cvector); // 0x50b NEW_2
	return 0; // 0x50d Return
}


func_0(var_0_object, var_271_int, var_272_object)
{
	var_274_object = Obj(); var_275_bool = 0; var_276_int = 0; var_277_bool = 0; var_278_object = Obj(); var_279_bool = 0; var_280_int = 0; var_281_bool = 0; // 0x0 PushV
	var_0_object = var_272_object; // 0x1 TMov
	var_282_bool = 0; var_283_object = Obj(); var_284_float = 0; // 0x2 PushV
	var_283_object = var_272_object; // 0x3 Mov
	var_284_float = 70.0; // 0x4 MovF
	func_1578(var_283_object, var_284_float); // 0x5 NEW_2
	var_285_bool = var_282_bool == 0; // 0x7 Not
	if(var_285_bool == 0) goto Label_11; // 0x8 JumpB
	var_271_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_278_object); // 0xb Func
	var_286_int = 0; // 0xd PushV
	func_1967(var_286_int); // 0xe NEW_2
	SetNPCName(var_286_int); // 0x10 ObjFunc
	var_287_int = 0; // 0x12 PushV
	func_1965(var_287_int); // 0x13 NEW_2
	SetNPCDescription(var_287_int); // 0x15 ObjFunc
	var_288_string = ""; // 0x17 PushV
	func_1969(var_288_string); // 0x18 NEW_2
	SetPhoto(var_288_string); // 0x1a ObjFunc
	var_289_string = ""; // 0x1c PushV
	func_1971(var_289_string); // 0x1d NEW_2
	SetPhoto2(var_289_string); // 0x1f ObjFunc
	var_290_int = 0; // 0x21 PushV
	func_2177(var_290_int); // 0x22 NEW_2
	SetPlayerName(var_290_int); // 0x24 ObjFunc
	var_280_int = -1; // 0x26 MovI
	IsOverrideActive(var_279_bool); // 0x27 Func
	var_291_bool = var_279_bool; // 0x29 Push
	if(var_291_bool == 0) goto Label_45; // 0x2a JumpB
	var_271_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_278_object); // 0x2d Func
	var_292_bool = 0; var_293_object = Obj(); // 0x2f PushV
	var_294_object = Obj(); // 0x30 PushV
	func_1856(var_294_object); // 0x31 NEW_2
	var_293_object = var_294_object; // 0x32 Mov
	func_1665(var_292_bool, var_293_object); // 0x34 NEW_2
	var_295_object = Obj(); var_296_object = Obj(); // 0x36 PushV
	var_295_object = var_272_object; // 0x37 Mov
	var_296_object = var_278_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_297_object, var_298_object, var_299_string, var_300_bool, var_295_object, var_296_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_281_bool); // 0x3d ObjFunc
	
Label_63:
	var_356_bool = var_281_bool == 0; // 0x3f Not
	if(var_356_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_281_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_357_object = Obj(); // 0x46 PushV
	var_357_object = var_272_object; // 0x47 Mov
	func_1647(); // 0x48 NEW_2
	StopDialog(var_278_object); // 0x4a Func
	GetReturnValue(var_280_int); // 0x4c ObjFunc
	var_271_int = var_280_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_2049(var_335_bool)
{
	var_337_int = 0; var_338_string = ""; // 0x802 PushV
	var_338_string = "oob2Alexandr1"; // 0x803 MovS
	func_1872(var_337_int, var_338_string); // 0x804 NEW_2
	var_339_int = 0; // 0x806 PushI
	var_340_bool = var_337_int == var_339_int; // 0x807 Eq
	if(var_340_bool == 0) goto Label_2059; // 0x808 JumpB
	var_335_bool = 1; // 0x809 MovB
	return 0; // 0x80a Return
	
Label_2059:
	var_335_bool = 0; // 0x80b MovB
	return 0; // 0x80c Return
}


func_1539(var_60_bool)
{
	var_60_bool = 1; // 0x603 MovB
	return 0; // 0x604 Return
}


func_1541()
{
	StopAnimation(); // 0x605 Func
	StopGroup0(); // 0x607 Func
	return 0; // 0x609 Return
}


func_1546(var_36_float)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); // 0x60a PushV
	GetPosition(var_41_cvector); // 0x60b Func
	GetPosition(var_42_cvector); // 0x60d ObjFunc
	var_43_cvector = var_42_cvector - var_41_cvector; // 0x60f Sub2
	var_36_float = var_43_cvector | var_43_cvector; // 0x610 Or2
	return 6; // 0x611 Return
}


func_1803(var_242_string)
{
	var_243_bool = 0; var_244_float = 0; var_245_float = 0; var_246_bool = 0; var_247_float = 0; var_248_float = 0; // 0x70b PushV
	lshHasAnimation(var_246_bool, var_242_string); // 0x70c Func
	var_249_bool = var_246_bool; // 0x70e Push
	if(var_249_bool == 0) goto Label_1814; // 0x70f JumpB
	lshGetAnimTimes(var_242_string, var_247_float, var_248_float); // 0x710 Func
	var_250_bool = 0; // 0x712 PushB
	lshPlayAnimation(var_247_float, var_248_float, var_250_bool); // 0x713 Func
	goto Label_1818; // 0x715 Jump
	
Label_1818:
	return 6; // 0x71a Return
	
Label_1814:
	var_251_string = "Can't find lsh animation : "; // 0x716 PushS
	var_252_int = var_251_string + var_242_string; // 0x717 Add
	Trace(var_252_int); // 0x718 Func
}


func_2061(var_344_bool)
{
	var_346_int = 0; var_347_string = ""; // 0x80e PushV
	var_347_string = "oob2Alexandr2"; // 0x80f MovS
	func_1872(var_346_int, var_347_string); // 0x810 NEW_2
	var_348_int = 0; // 0x812 PushI
	var_349_bool = var_346_int == var_348_int; // 0x813 Eq
	if(var_349_bool == 0) goto Label_2071; // 0x814 JumpB
	var_344_bool = 1; // 0x815 MovB
	return 0; // 0x816 Return
	
Label_2071:
	var_344_bool = 0; // 0x817 MovB
	return 0; // 0x818 Return
}


func_1294(var_0_object)
{
	var_22_bool = 0; // 0x50e PushV
	func_1573(var_22_bool); // 0x50f NEW_2
	var_25_bool = var_22_bool == 0; // 0x511 Not
	if(var_25_bool == 0) goto Label_1301; // 0x512 JumpB
	Hold(); // 0x513 Func
	
Label_1301:
	GetDirection(var_0_object); // 0x515 Func
	
Label_1303:
	func_1470(); // 0x518 NEW_2
	goto Label_1303; // 0x51a Jump
}


func_1554(var_29_bool, var_30_cvector)
{
	var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; // 0x612 PushV
	GetPosition(var_34_cvector); // 0x613 Func
	var_35_cvector = var_30_cvector - var_34_cvector; // 0x615 Sub2
	var_37_float = GetByIndex(var_35_cvector, 0); // 0x616 PushE
	var_38_float = GetByIndex(var_35_cvector, 2); // 0x617 PushE
	Rotate(var_37_float, var_38_float, var_36_bool); // 0x618 Func
	var_29_bool = var_36_bool; // 0x61a Mov
	return 6; // 0x61b Return
}


func_2073()
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x819 PushV
	var_49_int = 247; // 0x81a PushI
	var_50_int = 1; // 0x81b PushI
	var_51_int = 520468; // 0x81c PushI
	CreateDiaryEntry(var_48_object, var_49_int, var_50_int, var_51_int); // 0x81d Func
	var_52_bool = 0; var_53_object = Obj(); var_54_int = 0; // 0x81f PushV
	var_53_object = var_48_object; // 0x820 Mov
	var_54_int = 245; // 0x821 MovI
	func_2099(var_52_bool, var_53_object, var_54_int); // 0x822 NEW_2
	return 2; // 0x824 Return
}


func_1819(var_220_string, var_221_bool)
{
	var_224_bool = 0; var_225_float = 0; var_226_float = 0; var_227_bool = 0; var_228_float = 0; var_229_float = 0; // 0x71b PushV
	lshHasAnimation(var_227_bool, var_220_string); // 0x71c Func
	var_230_bool = var_227_bool; // 0x71e Push
	if(var_230_bool == 0) goto Label_1829; // 0x71f JumpB
	lshGetAnimTimes(var_220_string, var_228_float, var_229_float); // 0x720 Func
	lshPlayAnimation(var_228_float, var_229_float, var_221_bool); // 0x722 Func
	goto Label_1833; // 0x724 Jump
	
Label_1833:
	return 6; // 0x729 Return
	
Label_1829:
	var_231_string = "Can't find lsh animation : "; // 0x725 PushS
	var_232_int = var_231_string + var_220_string; // 0x726 Add
	Trace(var_232_int); // 0x727 Func
}


func_1564(var_25_bool)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); // 0x61c PushV
	GetPosition(var_28_cvector); // 0x61d ObjFunc
	var_29_bool = 0; var_30_cvector = CVector(0,0,0); // 0x61f PushV
	var_30_cvector = var_28_cvector; // 0x620 Mov
	func_1554(var_29_bool, var_30_cvector); // 0x621 NEW_2
	var_25_bool = var_29_bool; // 0x622 Mov
	return 2; // 0x624 Return
}


func_1308(var_46_bool)
{
	var_47_object = Obj(); var_48_object = Obj(); // 0x51c PushV
	var_49_string = "player"; // 0x51d PushS
	FindActor(var_48_object, var_49_string); // 0x51e Func
	var_50_bool = var_48_object == 0; // 0x520 Not
	if(var_50_bool == 0) goto Label_1316; // 0x521 JumpB
	var_46_bool = 0; // 0x522 MovB
	return 2; // 0x523 Return
	
Label_1316:
	var_51_bool = 0; var_52_object = Obj(); // 0x524 PushV
	var_52_object = var_48_object; // 0x525 Mov
	func_1564(var_52_object); // 0x526 NEW_2
	var_46_bool = var_51_bool; // 0x527 Mov
	return 2; // 0x529 Return
}


func_1573(var_22_bool)
{
	var_23_bool = 0; var_24_bool = 0; // 0x625 PushV
	IsLoaded(var_24_bool); // 0x626 Func
	var_22_bool = var_24_bool; // 0x628 Mov
	return 2; // 0x629 Return
}


func_2086(var_61_object)
{
	var_62_object = Obj(); var_63_object = Obj(); // 0x826 PushV
	GetDiaryRoot(var_63_object); // 0x827 Func
	var_64_bool = var_63_object == 0; // 0x829 Not
	if(var_64_bool == 0) goto Label_2096; // 0x82a JumpB
	var_65_string = "Can't retrieve diary root"; // 0x82b PushS
	Trace(var_65_string); // 0x82c Func
	var_61_object = 0; // 0x82e MovB
	return 2; // 0x82f Return
	
Label_2096:
	var_61_object = var_63_object; // 0x830 Mov
	return 2; // 0x831 Return
}


func_1578(var_53_bool, var_55_float)
{
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_bool = 0; var_73_bool = 0; // 0x62a PushV
	GetPosition(var_66_cvector); // 0x62b ObjFunc
	GetEyesHeight(var_65_float); // 0x62d ObjFunc
	var_74_float = GetByIndex(var_66_cvector, 1); // 0x62f PushE
	var_74_float = var_74_float + var_65_float; // 0x630 Add2
	SetByIndex(var_66_cvector, 1) = var_74_float; // 0x631 PopE
	GetPosition(var_67_cvector); // 0x632 Func
	GetEyesHeight(var_65_float); // 0x634 Func
	var_75_float = GetByIndex(var_67_cvector, 1); // 0x636 PushE
	var_75_float = var_75_float + var_65_float; // 0x637 Add2
	SetByIndex(var_67_cvector, 1) = var_75_float; // 0x638 PopE
	var_68_cvector = var_66_cvector - var_67_cvector; // 0x639 Sub2
	var_76_float = GetByIndex(var_68_cvector, 1); // 0x63a PushE
	var_76_float = 0; // 0x63b MovI
	SetByIndex(var_68_cvector, 1) = var_76_float; // 0x63c PopE
	var_77_int = var_68_cvector | var_68_cvector; // 0x63d Or
	var_78_float = sqrt(var_77_int); // 0x63e Sqrt
	var_68_cvector = var_68_cvector / var_68_cvector; // 0x63f Div2
	var_69_cvector = -var_68_cvector; // 0x640 Neg2
	var_79_float = var_68_cvector * var_55_float; // 0x641 Mult
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); // 0x642 PushV
	var_82_cvector = CVector(0.0, 1.0, 0.0); // 0x643 PushVec
	var_81_cvector = var_69_cvector ^ var_82_cvector; // 0x644 Xor2
	func_1862(var_80_cvector, var_81_cvector); // 0x645 NEW_2
	var_88_int = 25; // 0x647 PushI
	var_89_float = var_80_cvector * var_88_int; // 0x648 Mult
	var_90_int = var_79_float + var_89_float; // 0x649 Add
	var_91_cvector = CVector(0.0, 10.0, 0.0); // 0x64a PushVec
	var_70_cvector = var_90_int - var_91_cvector; // 0x64b Sub2
	var_71_cvector = var_67_cvector + var_70_cvector; // 0x64c Add2
	IsOverrideActive(var_72_bool); // 0x64d Func
	var_92_bool = var_72_bool; // 0x64f Push
	if(var_92_bool == 0) goto Label_1619; // 0x650 JumpB
	var_53_bool = 0; // 0x651 MovB
	return 18; // 0x652 Return
	
Label_1619:
	StopWorld(); // 0x653 Func
	var_93_bool = 1; // 0x655 PushB
	CameraTransit(var_71_cvector, var_69_cvector, var_93_bool); // 0x656 Func
	var_94_float = GetByIndex(var_70_cvector, 0); // 0x658 PushE
	var_95_float = GetByIndex(var_70_cvector, 2); // 0x659 PushE
	Rotate(var_94_float, var_95_float); // 0x65a Func
	var_96_bool = 0; // 0x65c PushV
	func_1973(var_96_bool); // 0x65d NEW_2
	if(var_96_bool == 0) goto Label_1633; // 0x65f JumpB
	goto Label_1641; // 0x660 Jump
	
Label_1641:
	CameraWaitForPlayFinish(); // 0x669 Func
	ResumeWorld(); // 0x66b Func
	var_53_bool = 1; // 0x66d MovB
	return 18; // 0x66e Return
	
Label_1633:
	var_97_string = "head"; // 0x661 PushS
	HasAnimationTrack(var_73_bool, var_97_string); // 0x662 Func
	var_98_bool = var_73_bool; // 0x664 Push
	if(var_98_bool == 0) goto Label_1641; // 0x665 JumpB
	var_99_string = "head"; // 0x666 PushS
	LookAsyncCamera(var_99_string); // 0x667 Func
}


func_1323(var_0_object)
{
	var_98_float = GetByIndex(var_0_object, 0); // 0x52b PushE
	var_99_float = GetByIndex(var_0_object, 2); // 0x52c PushE
	RotateAsync(var_98_float, var_99_float); // 0x52d Func
	return 0; // 0x52f Return
}


func_1834(var_148_bool, var_149_string)
{
	var_150_bool = 0; var_151_bool = 0; // 0x72a PushV
	var_152_bool = 0; // 0x72b PushV
	func_1973(var_152_bool); // 0x72c NEW_2
	if(var_152_bool == 0) goto Label_1847; // 0x72e JumpB
	lshHasSpeech(var_151_bool, var_149_string); // 0x72f Func
	var_153_bool = var_151_bool; // 0x731 Push
	if(var_153_bool == 0) goto Label_1847; // 0x732 JumpB
	lshPlaySpeech(var_149_string); // 0x733 Func
	var_148_bool = 1; // 0x735 MovB
	return 2; // 0x736 Return
	
Label_1847:
	var_148_bool = 0; // 0x737 MovB
	return 2; // 0x738 Return
}


func_1328(var_29_bool)
{
	var_30_object = Obj(); var_31_bool = 0; var_32_object = Obj(); var_33_bool = 0; // 0x530 PushV
	var_34_string = "player"; // 0x531 PushS
	FindActor(var_32_object, var_34_string); // 0x532 Func
	var_35_bool = var_32_object == 0; // 0x534 Not
	if(var_35_bool == 0) goto Label_1336; // 0x535 JumpB
	var_29_bool = 0; // 0x536 MovB
	return 4; // 0x537 Return
	
Label_1336:
	var_36_float = 0; var_37_object = Obj(); // 0x538 PushV
	var_37_object = var_32_object; // 0x539 Mov
	func_1546(var_37_object); // 0x53a NEW_2
	var_44_float = 90000.0; // 0x53c PushF
	var_45_bool = var_36_float > var_44_float; // 0x53d GT
	if(var_45_bool == 0) goto Label_1345; // 0x53e JumpB
	var_29_bool = 0; // 0x53f MovB
	return 4; // 0x540 Return
	
Label_1345:
	CanSee(var_33_bool, var_32_object); // 0x541 Func
	var_29_bool = var_33_bool; // 0x543 Mov
	return 4; // 0x544 Return
}


func_2099(var_52_bool, var_53_object, var_54_int)
{
	var_55_object = Obj(); var_56_object = Obj(); var_57_int = 0; var_58_object = Obj(); var_59_object = Obj(); var_60_int = 0; // 0x833 PushV
	var_61_object = Obj(); // 0x834 PushV
	func_2086(var_61_object); // 0x835 NEW_2
	var_58_object = var_61_object; // 0x836 Mov
	Find(var_54_int, var_59_object); // 0x838 ObjFunc
	var_66_bool = var_59_object == 0; // 0x83a Not
	if(var_66_bool == 0) goto Label_2114; // 0x83b JumpB
	var_67_string = "Can't find diary parent with id: "; // 0x83c PushS
	var_68_int = var_67_string + var_54_int; // 0x83d Add
	Trace(var_68_int); // 0x83e Func
	var_52_bool = 0; // 0x840 MovB
	return 6; // 0x841 Return
	
Label_2114:
	AddChild(var_53_object); // 0x842 ObjFunc
	var_69_int = 7; // 0x844 PushI
	SendWorldWndMessage(var_69_int); // 0x845 Func
	GetCategory(var_60_int); // 0x847 ObjFunc
	SetDiarySection(var_60_int); // 0x849 Func
	var_52_bool = 0; // 0x84b MovB
	return 6; // 0x84c Return
}


func_1849()
{
	var_24_bool = 0; // 0x739 PushV
	func_1973(var_24_bool); // 0x73a NEW_2
	if(var_24_bool == 0) goto Label_1855; // 0x73c JumpB
	lshStopSpeech(); // 0x73d Func
	
Label_1855:
	return 0; // 0x73f Return
}


func_825(var_0_object, var_363_int, var_364_object)
{
	var_366_object = Obj(); var_367_bool = 0; var_368_int = 0; var_369_bool = 0; var_370_object = Obj(); var_371_bool = 0; var_372_int = 0; var_373_bool = 0; // 0x339 PushV
	var_0_object = var_364_object; // 0x33a TMov
	var_374_bool = 0; var_375_object = Obj(); var_376_float = 0; // 0x33b PushV
	var_375_object = var_364_object; // 0x33c Mov
	var_376_float = 70.0; // 0x33d MovF
	func_1578(var_375_object, var_376_float); // 0x33e NEW_2
	var_377_bool = var_374_bool == 0; // 0x340 Not
	if(var_377_bool == 0) goto Label_836; // 0x341 JumpB
	var_363_int = -2; // 0x342 MovI
	return 8; // 0x343 Return
	
Label_836:
	CreateDialog(var_370_object); // 0x344 Func
	var_378_int = 0; // 0x346 PushV
	func_1967(var_378_int); // 0x347 NEW_2
	SetNPCName(var_378_int); // 0x349 ObjFunc
	var_379_int = 0; // 0x34b PushV
	func_1965(var_379_int); // 0x34c NEW_2
	SetNPCDescription(var_379_int); // 0x34e ObjFunc
	var_380_string = ""; // 0x350 PushV
	func_1969(var_380_string); // 0x351 NEW_2
	SetPhoto(var_380_string); // 0x353 ObjFunc
	var_381_string = ""; // 0x355 PushV
	func_1971(var_381_string); // 0x356 NEW_2
	SetPhoto2(var_381_string); // 0x358 ObjFunc
	var_382_int = 0; // 0x35a PushV
	func_2177(var_382_int); // 0x35b NEW_2
	SetPlayerName(var_382_int); // 0x35d ObjFunc
	var_372_int = -1; // 0x35f MovI
	IsOverrideActive(var_371_bool); // 0x360 Func
	var_383_bool = var_371_bool; // 0x362 Push
	if(var_383_bool == 0) goto Label_870; // 0x363 JumpB
	var_363_int = -2; // 0x364 MovI
	return 8; // 0x365 Return
	
Label_870:
	DoDialog(var_370_object); // 0x366 Func
	var_384_bool = 0; var_385_object = Obj(); // 0x368 PushV
	var_386_object = Obj(); // 0x369 PushV
	func_1856(var_386_object); // 0x36a NEW_2
	var_385_object = var_386_object; // 0x36b Mov
	func_1665(var_384_bool, var_385_object); // 0x36d NEW_2
	var_387_object = Obj(); var_388_object = Obj(); // 0x36f PushV
	var_387_object = var_364_object; // 0x370 Mov
	var_388_object = var_370_object; // 0x371 Mov
	TaskCall(5); // 0x372 TaskCall
	func_906(var_389_object, var_390_object, var_391_string, var_392_bool, var_387_object, var_388_object); // 0x373 NEW_2
	TaskReturn(); // 0x374 TaskReturn
	IsDialogEnd(var_373_bool); // 0x376 ObjFunc
	
Label_888:
	var_420_bool = var_373_bool == 0; // 0x378 Not
	if(var_420_bool == 0) goto Label_895; // 0x379 JumpB
	sync(); // 0x37a Func
	IsDialogEnd(var_373_bool); // 0x37c ObjFunc
	goto Label_888; // 0x37e Jump
	
Label_895:
	var_421_object = Obj(); // 0x37f PushV
	var_421_object = var_364_object; // 0x380 Mov
	func_1647(); // 0x381 NEW_2
	StopDialog(var_370_object); // 0x383 Func
	GetReturnValue(var_372_int); // 0x385 ObjFunc
	var_363_int = var_372_int; // 0x387 Mov
	return 8; // 0x388 Return
}


func_1084(var_0_object, var_423_int, var_424_object)
{
	var_426_object = Obj(); var_427_bool = 0; var_428_int = 0; var_429_bool = 0; var_430_object = Obj(); var_431_bool = 0; var_432_int = 0; var_433_bool = 0; // 0x43c PushV
	var_0_object = var_424_object; // 0x43d TMov
	var_434_bool = 0; var_435_object = Obj(); var_436_float = 0; // 0x43e PushV
	var_435_object = var_424_object; // 0x43f Mov
	var_436_float = 70.0; // 0x440 MovF
	func_1578(var_435_object, var_436_float); // 0x441 NEW_2
	var_437_bool = var_434_bool == 0; // 0x443 Not
	if(var_437_bool == 0) goto Label_1095; // 0x444 JumpB
	var_423_int = -2; // 0x445 MovI
	return 8; // 0x446 Return
	
Label_1095:
	CreateDialog(var_430_object); // 0x447 Func
	var_438_int = 0; // 0x449 PushV
	func_1967(var_438_int); // 0x44a NEW_2
	SetNPCName(var_438_int); // 0x44c ObjFunc
	var_439_int = 0; // 0x44e PushV
	func_1965(var_439_int); // 0x44f NEW_2
	SetNPCDescription(var_439_int); // 0x451 ObjFunc
	var_440_string = ""; // 0x453 PushV
	func_1969(var_440_string); // 0x454 NEW_2
	SetPhoto(var_440_string); // 0x456 ObjFunc
	var_441_string = ""; // 0x458 PushV
	func_1971(var_441_string); // 0x459 NEW_2
	SetPhoto2(var_441_string); // 0x45b ObjFunc
	var_442_int = 0; // 0x45d PushV
	func_2177(var_442_int); // 0x45e NEW_2
	SetPlayerName(var_442_int); // 0x460 ObjFunc
	var_432_int = -1; // 0x462 MovI
	IsOverrideActive(var_431_bool); // 0x463 Func
	var_443_bool = var_431_bool; // 0x465 Push
	if(var_443_bool == 0) goto Label_1129; // 0x466 JumpB
	var_423_int = -2; // 0x467 MovI
	return 8; // 0x468 Return
	
Label_1129:
	DoDialog(var_430_object); // 0x469 Func
	var_444_bool = 0; var_445_object = Obj(); // 0x46b PushV
	var_446_object = Obj(); // 0x46c PushV
	func_1856(var_446_object); // 0x46d NEW_2
	var_445_object = var_446_object; // 0x46e Mov
	func_1665(var_444_bool, var_445_object); // 0x470 NEW_2
	var_447_object = Obj(); var_448_object = Obj(); // 0x472 PushV
	var_447_object = var_424_object; // 0x473 Mov
	var_448_object = var_430_object; // 0x474 Mov
	TaskCall(7); // 0x475 TaskCall
	func_1165(var_449_object, var_450_object, var_451_string, var_452_bool, var_447_object, var_448_object); // 0x476 NEW_2
	TaskReturn(); // 0x477 TaskReturn
	IsDialogEnd(var_433_bool); // 0x479 ObjFunc
	
Label_1147:
	var_477_bool = var_433_bool == 0; // 0x47b Not
	if(var_477_bool == 0) goto Label_1154; // 0x47c JumpB
	sync(); // 0x47d Func
	IsDialogEnd(var_433_bool); // 0x47f ObjFunc
	goto Label_1147; // 0x481 Jump
	
Label_1154:
	var_478_object = Obj(); // 0x482 PushV
	var_478_object = var_424_object; // 0x483 Mov
	func_1647(); // 0x484 NEW_2
	StopDialog(var_430_object); // 0x486 Func
	GetReturnValue(var_432_int); // 0x488 ObjFunc
	var_423_int = var_432_int; // 0x48a Mov
	return 8; // 0x48b Return
}


func_1856(var_116_object)
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x740 PushV
	self(var_118_object); // 0x741 Func
	var_116_object = var_118_object; // 0x743 Mov
	return 2; // 0x744 Return
}


func_1350()
{
	var_481_float = 0; var_482_float = 0; // 0x546 PushV
	var_483_int = 8; // 0x547 PushI
	var_484_int = 16; // 0x548 PushI
	rand(var_482_float, var_483_int, var_484_int); // 0x549 Func
	var_485_int = 10; // 0x54b PushI
	SetTimer(var_485_int, var_482_float); // 0x54c Func
	return 2; // 0x54e Return
}


func_1862(var_80_cvector, var_81_cvector)
{
	var_83_float = 0; var_84_float = 0; // 0x746 PushV
	var_85_int = var_81_cvector | var_81_cvector; // 0x747 Or
	var_84_float = sqrt(var_85_int); // 0x748 Sqrt2
	var_86_float = 0.0; // 0x749 PushF
	var_87_bool = var_84_float < var_86_float; // 0x74a LT
	if(var_87_bool == 0) goto Label_1870; // 0x74b JumpB
	var_80_cvector = CVector(0.0, 0.0, 0.0); // 0x74c MovV
	return 2; // 0x74d Return
	
Label_1870:
	var_80_cvector = var_81_cvector / var_81_cvector; // 0x74e Div2
	return 2; // 0x74f Return
}


func_1359()
{
	var_480_int = 10; // 0x54f PushI
	KillTimer(var_480_int); // 0x550 Func
	return 0; // 0x552 Return
}


func_2127(var_33_object)
{
	var_34_object = Obj(); var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); // 0x84f PushV
	GetMainOutdoorScene(var_36_object); // 0x850 Func
	var_38_bool = var_36_object == 0; // 0x852 NullEq
	if(var_38_bool == 0) goto Label_2138; // 0x853 JumpB
	var_39_string = "Can't find main outdoor scene"; // 0x854 PushS
	Trace(var_39_string); // 0x855 Func
	var_37_object = 0; // 0x857 SetNull
	var_33_object = var_37_object; // 0x858 Mov
	return 4; // 0x859 Return
	
Label_2138:
	GetMap(var_37_object); // 0x85a ObjFunc
	var_33_object = var_37_object; // 0x85c Mov
	return 4; // 0x85d Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_295_object, var_296_object)
{
	var_0_object = var_296_object; // 0x52 TMov
	var_1_object = var_295_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_301_int = 1; // 0x55 PushI
	if(var_301_int == 0) goto Label_149; // 0x56 JumpB
	var_302_bool = 0; var_303_object = Obj(); // 0x57 PushV
	var_303_object = var_1_object; // 0x58 MovT
	func_2037(var_303_object); // 0x59 NEW_2
	if(var_302_bool == 0) goto Label_112; // 0x5b JumpB
	var_310_string = ""; // 0x5c PushV
	var_310_string = "Neutral"; // 0x5d MovS
	func_179(var_296_object, var_310_string); // 0x5e NEW_2
	var_318_int = 518239; // 0x60 PushI
	SetMessage(var_318_int); // 0x61 TObjFunc
	ClearReplies(); // 0x63 TObjFunc
	var_319_int = 518240; // 0x65 PushI
	var_320_int = 20533; // 0x66 PushI
	var_321_int = 19349; // 0x67 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x68 TObjFunc
	var_322_int = 519398; // 0x6a PushI
	var_323_int = 20561; // 0x6b PushI
	var_324_int = 20560; // 0x6c PushI
	AddReply(var_322_int, var_323_int, var_324_int); // 0x6d TObjFunc
	goto Label_149; // 0x6f Jump
	
Label_149:
	var_325_bool = 0; // 0x95 PushV
	func_1973(var_325_bool); // 0x96 NEW_2
	if(var_325_bool == 0) goto Label_164; // 0x98 JumpB
	
Label_153:
	lshWaitForAnimEnd(); // 0x99 Func
	var_326_string = var_3_string; // 0x9b PushT
	if(var_326_string == 0) goto Label_158; // 0x9c JumpB
	goto Label_163; // 0x9d Jump
	
Label_163:
	goto Label_178; // 0xa3 Jump
	
Label_178:
	return 0; // 0xb2 Return
	
Label_158:
	var_327_string = ""; // 0x9e PushV
	var_327_string = var_2_object; // 0x9f MovT
	func_1803(var_327_string); // 0xa0 NEW_2
	goto Label_153; // 0xa2 Jump
	
Label_164:
	var_328_string = "all"; // 0xa4 PushS
	var_329_string = "idle"; // 0xa5 PushS
	PlayAnimation(var_328_string, var_329_string); // 0xa6 Func
	
Label_168:
	WaitForAnimEnd(); // 0xa8 Func
	var_330_string = var_3_string; // 0xaa PushT
	if(var_330_string == 0) goto Label_173; // 0xab JumpB
	goto Label_178; // 0xac Jump
	
Label_173:
	var_331_string = "all"; // 0xad PushS
	var_332_string = "idle"; // 0xae PushS
	PlayAnimation(var_331_string, var_332_string); // 0xaf Func
	goto Label_168; // 0xb1 Jump
	
Label_112:
	var_333_string = ""; // 0x70 PushV
	var_333_string = "Neutral"; // 0x71 MovS
	func_179(var_296_object, var_333_string); // 0x72 NEW_2
	var_334_int = 518241; // 0x74 PushI
	SetMessage(var_334_int); // 0x75 TObjFunc
	ClearReplies(); // 0x77 TObjFunc
	var_335_bool = 0; var_336_object = Obj(); // 0x79 PushV
	var_336_object = var_1_object; // 0x7a MovT
	func_2049(var_336_object); // 0x7b NEW_2
	if(var_335_bool == 0) goto Label_131; // 0x7d JumpB
	var_341_int = 519376; // 0x7e PushI
	var_342_int = 20538; // 0x7f PushI
	var_343_int = 20537; // 0x80 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x81 TObjFunc
	
Label_131:
	var_344_bool = 0; var_345_object = Obj(); // 0x83 PushV
	var_345_object = var_1_object; // 0x84 MovT
	func_2061(var_345_object); // 0x85 NEW_2
	if(var_344_bool == 0) goto Label_141; // 0x87 JumpB
	var_350_int = 519382; // 0x88 PushI
	var_351_int = 20544; // 0x89 PushI
	var_352_int = 20543; // 0x8a PushI
	AddReply(var_350_int, var_351_int, var_352_int); // 0x8b TObjFunc
	
Label_141:
	var_353_int = 518242; // 0x8d PushI
	var_354_int = -1; // 0x8e PushI
	var_355_int = 19351; // 0x8f PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x90 TObjFunc
	goto Label_149; // 0x92 Jump
}


func_1872(var_304_int, var_305_string)
{
	var_306_int = 0; var_307_int = 0; // 0x750 PushV
	GetVariable(var_305_string, var_307_int); // 0x751 Func
	var_304_int = var_307_int; // 0x753 Mov
	return 2; // 0x754 Return
}


func_1877(var_115_int, var_116_int)
{
	var_117_object = Obj(); var_118_object = Obj(); // 0x755 PushV
	CreateIntVector(var_118_object); // 0x756 Func
	add(var_115_int); // 0x758 ObjFunc
	add(var_116_int); // 0x75a ObjFunc
	var_119_int = 3; // 0x75c PushI
	SendWorldWndMessage(var_119_int, var_118_object); // 0x75d Func
	return 2; // 0x75f Return
}


func_2144(var_72_object, var_73_string, var_74_float)
{
	var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_object = Obj(); var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_object = Obj(); var_83_bool = 0; // 0x860 PushV
	GetMainOutdoorScene(var_82_object); // 0x861 Func
	var_84_bool = var_82_object == 0; // 0x863 NullEq
	if(var_84_bool == 0) goto Label_2153; // 0x864 JumpB
	var_85_string = "Can't find main outdoor scene"; // 0x865 PushS
	Trace(var_85_string); // 0x866 Func
	return 8; // 0x868 Return
	
Label_2153:
	GetLocator(var_73_string, var_83_bool, var_80_cvector, var_81_cvector); // 0x869 ObjFunc
	var_86_bool = var_83_bool == 0; // 0x86b Not
	if(var_86_bool == 0) goto Label_2163; // 0x86c JumpB
	var_87_string = "Warning: outdoor scene locator "; // 0x86d PushS
	var_88_int = var_87_string + var_73_string; // 0x86e Add
	var_89_string = " doesnt exist"; // 0x86f PushS
	var_90_int = var_88_int + var_89_string; // 0x870 Add
	Trace(var_90_int); // 0x871 Func
	
Label_2163:
	GetMap(var_72_object); // 0x873 ObjFunc
	var_91_bool = var_72_object == 0; // 0x875 NullEq
	if(var_91_bool == 0) goto Label_2171; // 0x876 JumpB
	var_92_string = "Can't find map"; // 0x877 PushS
	Trace(var_92_string); // 0x878 Func
	return 8; // 0x87a Return
	
Label_2171:
	var_93_float = GetByIndex(var_80_cvector, 0); // 0x87b PushE
	var_94_float = GetByIndex(var_80_cvector, 2); // 0x87c PushE
	SetMapParams(var_93_float, var_94_float, var_74_float); // 0x87d ObjFunc
	return 8; // 0x87f Return
}


func_1889(var_105_object, var_106_int)
{
	var_107_int = 0; var_108_int = 0; var_109_bool = 0; var_110_int = 0; var_111_int = 0; var_112_bool = 0; // 0x761 PushV
	GetItemID(var_110_int); // 0x762 ObjFunc
	var_113_string = "Category"; // 0x764 PushS
	GetInvItemProperty(var_111_int, var_110_int, var_113_string); // 0x765 Func
	AddItem(var_112_bool, var_105_object, var_111_int, var_106_int); // 0x767 ObjFunc
	var_114_bool = var_112_bool == 0; // 0x769 Not
	if(var_114_bool == 0) goto Label_1902; // 0x76a JumpB
	DropItems(var_105_object, var_106_int); // 0x76b ObjFunc
	goto Label_1907; // 0x76d Jump
	
Label_1907:
	return 6; // 0x773 Return
	
Label_1902:
	var_115_int = 0; var_116_int = 0; // 0x76e PushV
	var_115_int = var_110_int; // 0x76f Mov
	var_116_int = var_106_int; // 0x770 Mov
	func_1877(var_115_int, var_116_int); // 0x771 NEW_2
}


func_622(var_0_object, var_42_int, var_43_object)
{
	var_45_object = Obj(); var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_object = Obj(); var_50_bool = 0; var_51_int = 0; var_52_bool = 0; // 0x26e PushV
	var_0_object = var_43_object; // 0x26f TMov
	var_53_bool = 0; var_54_object = Obj(); var_55_float = 0; // 0x270 PushV
	var_54_object = var_43_object; // 0x271 Mov
	var_55_float = 70.0; // 0x272 MovF
	func_1578(var_54_object, var_55_float); // 0x273 NEW_2
	var_100_bool = var_53_bool == 0; // 0x275 Not
	if(var_100_bool == 0) goto Label_633; // 0x276 JumpB
	var_42_int = -2; // 0x277 MovI
	return 8; // 0x278 Return
	
Label_633:
	CreateDialog(var_49_object); // 0x279 Func
	var_101_int = 0; // 0x27b PushV
	func_1967(var_101_int); // 0x27c NEW_2
	SetNPCName(var_101_int); // 0x27e ObjFunc
	var_102_int = 0; // 0x280 PushV
	func_1965(var_102_int); // 0x281 NEW_2
	SetNPCDescription(var_102_int); // 0x283 ObjFunc
	var_103_string = ""; // 0x285 PushV
	func_1969(var_103_string); // 0x286 NEW_2
	SetPhoto(var_103_string); // 0x288 ObjFunc
	var_104_string = ""; // 0x28a PushV
	func_1971(var_104_string); // 0x28b NEW_2
	SetPhoto2(var_104_string); // 0x28d ObjFunc
	var_105_int = 0; // 0x28f PushV
	func_2177(var_105_int); // 0x290 NEW_2
	SetPlayerName(var_105_int); // 0x292 ObjFunc
	var_51_int = -1; // 0x294 MovI
	IsOverrideActive(var_50_bool); // 0x295 Func
	var_113_bool = var_50_bool; // 0x297 Push
	if(var_113_bool == 0) goto Label_667; // 0x298 JumpB
	var_42_int = -2; // 0x299 MovI
	return 8; // 0x29a Return
	
Label_667:
	DoDialog(var_49_object); // 0x29b Func
	var_114_bool = 0; var_115_object = Obj(); // 0x29d PushV
	var_116_object = Obj(); // 0x29e PushV
	func_1856(var_116_object); // 0x29f NEW_2
	var_115_object = var_116_object; // 0x2a0 Mov
	func_1665(var_114_bool, var_115_object); // 0x2a2 NEW_2
	var_209_object = Obj(); var_210_object = Obj(); // 0x2a4 PushV
	var_209_object = var_43_object; // 0x2a5 Mov
	var_210_object = var_49_object; // 0x2a6 Mov
	TaskCall(3); // 0x2a7 TaskCall
	func_703(var_211_object, var_212_object, var_213_string, var_214_bool, var_209_object, var_210_object); // 0x2a8 NEW_2
	TaskReturn(); // 0x2a9 TaskReturn
	IsDialogEnd(var_52_bool); // 0x2ab ObjFunc
	
Label_685:
	var_258_bool = var_52_bool == 0; // 0x2ad Not
	if(var_258_bool == 0) goto Label_692; // 0x2ae JumpB
	sync(); // 0x2af Func
	IsDialogEnd(var_52_bool); // 0x2b1 ObjFunc
	goto Label_685; // 0x2b3 Jump
	
Label_692:
	var_259_object = Obj(); // 0x2b4 PushV
	var_259_object = var_43_object; // 0x2b5 Mov
	func_1647(); // 0x2b6 NEW_2
	StopDialog(var_49_object); // 0x2b8 Func
	GetReturnValue(var_51_int); // 0x2ba ObjFunc
	var_42_int = var_51_int; // 0x2bc Mov
	return 8; // 0x2bd Return
}


func_1647()
{
	var_260_bool = 0; var_261_bool = 0; // 0x66f PushV
	var_262_bool = 1; // 0x670 PushB
	CameraSwitchToNormal(var_262_bool); // 0x671 Func
	var_263_bool = 0; // 0x673 PushV
	func_1973(var_263_bool); // 0x674 NEW_2
	if(var_263_bool == 0) goto Label_1656; // 0x676 JumpB
	goto Label_1664; // 0x677 Jump
	
Label_1664:
	return 2; // 0x680 Return
	
Label_1656:
	var_264_string = "head"; // 0x678 PushS
	HasAnimationTrack(var_261_bool, var_264_string); // 0x679 Func
	var_265_bool = var_261_bool; // 0x67b Push
	if(var_265_bool == 0) goto Label_1664; // 0x67c JumpB
	var_266_string = "head"; // 0x67d PushS
	UnlookAsync(var_266_string); // 0x67e Func
}


func_1908(var_99_object, var_100_string, var_101_int)
{
	var_102_object = Obj(); var_103_object = Obj(); // 0x774 PushV
	CreateInvItem(var_103_object); // 0x775 Func
	SetItemName(var_100_string); // 0x777 ObjFunc
	var_104_object = Obj(); var_105_object = Obj(); var_106_int = 0; // 0x779 PushV
	var_104_object = var_99_object; // 0x77a Mov
	var_105_object = var_103_object; // 0x77b Mov
	var_106_int = var_101_int; // 0x77c Mov
	func_1889(var_105_object, var_106_int); // 0x77d NEW_2
	return 2; // 0x77f Return
}


func_2177(var_105_int)
{
	var_106_int = 0; var_107_int = 0; // 0x881 PushV
	var_108_string = "branch"; // 0x882 PushS
	GetVariable(var_108_string, var_107_int); // 0x883 Func
	var_109_int = 0; // 0x885 PushI
	var_110_bool = var_107_int == var_109_int; // 0x886 Eq
	if(var_110_bool == 0) goto Label_2187; // 0x887 JumpB
	var_105_int = 1; // 0x888 MovI
	return 2; // 0x889 Return
	
Label_2187:
	var_111_int = 1; // 0x88b PushI
	var_112_bool = var_107_int == var_111_int; // 0x88c Eq
	if(var_112_bool == 0) goto Label_2192; // 0x88d JumpB
	var_105_int = 2; // 0x88e MovI
	return 2; // 0x88f Return
	
Label_2192:
	var_105_int = 3; // 0x890 MovI
	return 2; // 0x891 Return
}


func_1665(var_114_bool, var_115_object)
{
	var_119_int = 0; var_120_int = 0; var_121_int = 0; var_122_int = 0; // 0x681 PushV
	var_123_string = "voice_common"; // 0x682 PushS
	GetVariable(var_123_string, var_121_int); // 0x683 Func
	var_124_int = var_121_int; // 0x685 Push
	if(var_124_int == 0) goto Label_1703; // 0x686 JumpB
	var_125_bool = 0; var_126_object = Obj(); // 0x687 PushV
	var_126_object = var_115_object; // 0x688 Mov
	func_1723(var_126_object); // 0x689 NEW_2
	var_155_bool = var_125_bool == 0; // 0x68b Not
	if(var_155_bool == 0) goto Label_1685; // 0x68c JumpB
	var_156_bool = 0; var_157_object = Obj(); // 0x68d PushV
	var_157_object = var_115_object; // 0x68e Mov
	func_1760(var_157_object); // 0x68f NEW_2
	var_191_bool = var_156_bool == 0; // 0x691 Not
	if(var_191_bool == 0) goto Label_1685; // 0x692 JumpB
	var_114_bool = 0; // 0x693 MovB
	return 4; // 0x694 Return
	
Label_1685:
	var_192_int = 2; // 0x695 PushI
	irand(var_122_int, var_192_int); // 0x696 Func
	var_193_int = var_122_int; // 0x698 Push
	if(var_193_int == 0) goto Label_1698; // 0x699 JumpB
	var_194_string = "voice_common"; // 0x69a PushS
	var_195_int = 1; // 0x69b PushI
	var_196_int = var_121_int + var_195_int; // 0x69c Add
	var_197_int = 3; // 0x69d PushI
	var_198_int = var_196_int / var_197_int; // 0x69e Mod
	SetVariable(var_194_string, var_198_int); // 0x69f Func
	goto Label_1702; // 0x6a1 Jump
	
Label_1702:
	goto Label_1721; // 0x6a6 Jump
	
Label_1721:
	var_114_bool = 1; // 0x6b9 MovB
	return 4; // 0x6ba Return
	
Label_1698:
	var_199_string = "voice_common"; // 0x6a2 PushS
	var_200_int = 0; // 0x6a3 PushI
	SetVariable(var_199_string, var_200_int); // 0x6a4 Func
	
Label_1703:
	var_201_bool = 0; var_202_object = Obj(); // 0x6a7 PushV
	var_202_object = var_115_object; // 0x6a8 Mov
	func_1760(var_202_object); // 0x6a9 NEW_2
	var_203_bool = var_201_bool == 0; // 0x6ab Not
	if(var_203_bool == 0) goto Label_1717; // 0x6ac JumpB
	var_204_bool = 0; var_205_object = Obj(); // 0x6ad PushV
	var_205_object = var_115_object; // 0x6ae Mov
	func_1723(var_205_object); // 0x6af NEW_2
	var_206_bool = var_204_bool == 0; // 0x6b1 Not
	if(var_206_bool == 0) goto Label_1717; // 0x6b2 JumpB
	var_114_bool = 0; // 0x6b3 MovB
	return 4; // 0x6b4 Return
	
Label_1717:
	var_207_string = "voice_common"; // 0x6b5 PushS
	var_208_int = 1; // 0x6b6 PushI
	SetVariable(var_207_string, var_208_int); // 0x6b7 Func
}


func_1921(var_44_float)
{
	var_45_float = 0; var_46_float = 0; // 0x781 PushV
	GetGameTime(var_46_float); // 0x782 Func
	var_44_float = var_46_float; // 0x784 Mov
	return 2; // 0x785 Return
}


func_1926(var_169_int)
{
	var_170_float = 0; var_171_float = 0; // 0x786 PushV
	GetGameTime(var_171_float); // 0x787 Func
	var_172_int = 1; // 0x789 PushI
	var_173_int = 0; // 0x78a PushV
	var_174_int = 24; // 0x78b PushI
	var_173_int = var_171_float / var_171_float; // 0x78c Div2
	var_169_int = var_172_int + var_173_int; // 0x78d Add2
	return 2; // 0x78e Return
}


func_906(var_0_object, var_1_object, var_2_object, var_3_string, var_387_object, var_388_object)
{
	var_0_object = var_388_object; // 0x38b TMov
	var_1_object = var_387_object; // 0x38c TMov
	var_3_string = 0; // 0x38d TMovB
	var_393_int = 1; // 0x38e PushI
	if(var_393_int == 0) goto Label_939; // 0x38f JumpB
	var_394_string = ""; // 0x390 PushV
	var_394_string = "Neutral"; // 0x391 MovS
	func_969(var_388_object, var_394_string); // 0x392 NEW_2
	var_402_int = 535294; // 0x394 PushI
	SetMessage(var_402_int); // 0x395 TObjFunc
	ClearReplies(); // 0x397 TObjFunc
	var_403_int = 535295; // 0x399 PushI
	var_404_int = 36973; // 0x39a PushI
	var_405_int = 36972; // 0x39b PushI
	AddReply(var_403_int, var_404_int, var_405_int); // 0x39c TObjFunc
	var_406_int = 535302; // 0x39e PushI
	var_407_int = -1; // 0x39f PushI
	var_408_int = 36980; // 0x3a0 PushI
	AddReply(var_406_int, var_407_int, var_408_int); // 0x3a1 TObjFunc
	var_409_int = 535303; // 0x3a3 PushI
	var_410_int = -1; // 0x3a4 PushI
	var_411_int = 36981; // 0x3a5 PushI
	AddReply(var_409_int, var_410_int, var_411_int); // 0x3a6 TObjFunc
	goto Label_939; // 0x3a8 Jump
	
Label_939:
	var_412_bool = 0; // 0x3ab PushV
	func_1973(var_412_bool); // 0x3ac NEW_2
	if(var_412_bool == 0) goto Label_954; // 0x3ae JumpB
	
Label_943:
	lshWaitForAnimEnd(); // 0x3af Func
	var_413_string = var_3_string; // 0x3b1 PushT
	if(var_413_string == 0) goto Label_948; // 0x3b2 JumpB
	goto Label_953; // 0x3b3 Jump
	
Label_953:
	goto Label_968; // 0x3b9 Jump
	
Label_968:
	return 0; // 0x3c8 Return
	
Label_948:
	var_414_string = ""; // 0x3b4 PushV
	var_414_string = var_2_object; // 0x3b5 MovT
	func_1803(var_414_string); // 0x3b6 NEW_2
	goto Label_943; // 0x3b8 Jump
	
Label_954:
	var_415_string = "all"; // 0x3ba PushS
	var_416_string = "idle"; // 0x3bb PushS
	PlayAnimation(var_415_string, var_416_string); // 0x3bc Func
	
Label_958:
	WaitForAnimEnd(); // 0x3be Func
	var_417_string = var_3_string; // 0x3c0 PushT
	if(var_417_string == 0) goto Label_963; // 0x3c1 JumpB
	goto Label_968; // 0x3c2 Jump
	
Label_963:
	var_418_string = "all"; // 0x3c3 PushS
	var_419_string = "idle"; // 0x3c4 PushS
	PlayAnimation(var_418_string, var_419_string); // 0x3c5 Func
	goto Label_958; // 0x3c7 Jump
}


func_1165(var_0_object, var_1_object, var_2_object, var_3_string, var_447_object, var_448_object)
{
	var_0_object = var_448_object; // 0x48e TMov
	var_1_object = var_447_object; // 0x48f TMov
	var_3_string = 0; // 0x490 TMovB
	var_453_int = 1; // 0x491 PushI
	if(var_453_int == 0) goto Label_1193; // 0x492 JumpB
	var_454_string = ""; // 0x493 PushV
	var_454_string = "Neutral"; // 0x494 MovS
	func_1223(var_448_object, var_454_string); // 0x495 NEW_2
	var_462_int = 540554; // 0x497 PushI
	SetMessage(var_462_int); // 0x498 TObjFunc
	ClearReplies(); // 0x49a TObjFunc
	var_463_int = 540555; // 0x49c PushI
	var_464_int = -1; // 0x49d PushI
	var_465_int = 42564; // 0x49e PushI
	AddReply(var_463_int, var_464_int, var_465_int); // 0x49f TObjFunc
	var_466_int = 540794; // 0x4a1 PushI
	var_467_int = -1; // 0x4a2 PushI
	var_468_int = 42843; // 0x4a3 PushI
	AddReply(var_466_int, var_467_int, var_468_int); // 0x4a4 TObjFunc
	goto Label_1193; // 0x4a6 Jump
	
Label_1193:
	var_469_bool = 0; // 0x4a9 PushV
	func_1973(var_469_bool); // 0x4aa NEW_2
	if(var_469_bool == 0) goto Label_1208; // 0x4ac JumpB
	
Label_1197:
	lshWaitForAnimEnd(); // 0x4ad Func
	var_470_string = var_3_string; // 0x4af PushT
	if(var_470_string == 0) goto Label_1202; // 0x4b0 JumpB
	goto Label_1207; // 0x4b1 Jump
	
Label_1207:
	goto Label_1222; // 0x4b7 Jump
	
Label_1222:
	return 0; // 0x4c6 Return
	
Label_1202:
	var_471_string = ""; // 0x4b2 PushV
	var_471_string = var_2_object; // 0x4b3 MovT
	func_1803(var_471_string); // 0x4b4 NEW_2
	goto Label_1197; // 0x4b6 Jump
	
Label_1208:
	var_472_string = "all"; // 0x4b8 PushS
	var_473_string = "idle"; // 0x4b9 PushS
	PlayAnimation(var_472_string, var_473_string); // 0x4ba Func
	
Label_1212:
	WaitForAnimEnd(); // 0x4bc Func
	var_474_string = var_3_string; // 0x4be PushT
	if(var_474_string == 0) goto Label_1217; // 0x4bf JumpB
	goto Label_1222; // 0x4c0 Jump
	
Label_1217:
	var_475_string = "all"; // 0x4c1 PushS
	var_476_string = "idle"; // 0x4c2 PushS
	PlayAnimation(var_475_string, var_476_string); // 0x4c3 Func
	goto Label_1212; // 0x4c5 Jump
}


func_1935(var_268_bool, var_269_int)
{
	var_270_int = 0; // 0x790 PushV
	func_1926(var_270_int); // 0x791 NEW_2
	var_268_bool = var_270_int == var_269_int; // 0x793 Eq2
	return 0; // 0x794 Return
}


func_2194(var_39_object)
{
	var_40_bool = GlobalVars[1]; // 0x893 PushGE
	var_41_bool = var_40_bool == 0; // 0x894 Not
	if(var_41_bool == 0) goto Label_2207; // 0x895 JumpB
	var_42_int = 0; var_43_object = Obj(); // 0x896 PushV
	var_43_object = var_39_object; // 0x897 Mov
	TaskCall(2); // 0x898 TaskCall
	func_622(var_44_object, var_42_int, var_43_object); // 0x899 NEW_2
	TaskReturn(); // 0x89a TaskReturn
	var_267_bool = GlobalVars[1]; // 0x89c PushGE
	var_267_bool = 1; // 0x89d MovB
	GlobalVars[1] = var_267_bool; // 0x89e PopGE
	
Label_2207:
	var_268_bool = 0; var_269_int = 0; // 0x89f PushV
	var_269_int = 2; // 0x8a0 MovI
	func_1935(var_268_bool, var_269_int); // 0x8a1 NEW_2
	if(var_268_bool == 0) goto Label_2219; // 0x8a3 JumpB
	var_271_int = 0; var_272_object = Obj(); // 0x8a4 PushV
	var_272_object = var_39_object; // 0x8a5 Mov
	TaskCall(0); // 0x8a6 TaskCall
	func_0(var_273_object, var_271_int, var_272_object); // 0x8a7 NEW_2
	TaskReturn(); // 0x8a8 TaskReturn
	return 0; // 0x8aa Return
	
Label_2219:
	var_358_bool = 0; // 0x8ab PushV
	var_358_bool = 0; // 0x8ac MovB
	var_359_bool = 0; var_360_int = 0; // 0x8ad PushV
	var_360_int = 12; // 0x8ae MovI
	func_1935(var_359_bool, var_360_int); // 0x8af NEW_2
	if(var_359_bool == 0) goto Label_2230; // 0x8b1 JumpB
	var_361_bool = GlobalVars[2]; // 0x8b2 PushGE
	var_362_bool = var_361_bool == 0; // 0x8b3 Not
	if(var_362_bool == 0) goto Label_2230; // 0x8b4 JumpB
	var_358_bool = 1; // 0x8b5 MovB
	
Label_2230:
	if(var_358_bool == 0) goto Label_2241; // 0x8b6 JumpB
	var_363_int = 0; var_364_object = Obj(); // 0x8b7 PushV
	var_364_object = var_39_object; // 0x8b8 Mov
	TaskCall(4); // 0x8b9 TaskCall
	func_825(var_365_object, var_363_int, var_364_object); // 0x8ba NEW_2
	TaskReturn(); // 0x8bb TaskReturn
	var_422_bool = GlobalVars[2]; // 0x8bd PushGE
	var_422_bool = 1; // 0x8be MovB
	GlobalVars[2] = var_422_bool; // 0x8bf PopGE
	return 0; // 0x8c0 Return
	
Label_2241:
	var_423_int = 0; var_424_object = Obj(); // 0x8c1 PushV
	var_424_object = var_39_object; // 0x8c2 Mov
	TaskCall(6); // 0x8c3 TaskCall
	func_1084(var_425_object, var_423_int, var_424_object); // 0x8c4 NEW_2
	TaskReturn(); // 0x8c5 TaskReturn
	return 0; // 0x8c7 Return
}


func_1941(var_46_string, var_47_int)
{
	var_48_string = ""; var_49_string = ""; // 0x795 PushV
	var_49_string = "idle"; // 0x796 MovS
	var_50_int = var_47_int; // 0x797 Push
	if(var_50_int == 0) goto Label_1946; // 0x798 JumpB
	var_49_string = var_49_string + var_47_int; // 0x799 Add2
	
Label_1946:
	var_46_string = var_49_string; // 0x79a Mov
	return 2; // 0x79b Return
}


func_1948(var_40_int)
{
	var_41_int = 0; var_42_bool = 0; var_43_int = 0; var_44_bool = 0; // 0x79c PushV
	var_43_int = 0; // 0x79d MovI
	
Label_1950:
	var_45_string = "all"; // 0x79e PushS
	var_46_string = ""; var_47_int = 0; // 0x79f PushV
	var_47_int = var_43_int; // 0x7a0 Mov
	func_1941(var_46_string, var_47_int); // 0x7a1 NEW_2
	HasAnimation(var_44_bool, var_45_string, var_46_string); // 0x7a3 Func
	var_51_bool = var_44_bool == 0; // 0x7a5 Not
	if(var_51_bool == 0) goto Label_1960; // 0x7a6 JumpB
	goto Label_1963; // 0x7a7 Jump
	
Label_1963:
	var_40_int = var_43_int; // 0x7ab Mov
	return 4; // 0x7ac Return
	
Label_1960:
	var_52_int = 1; // 0x7a8 PushI
	var_43_int = var_43_int + var_52_int; // 0x7a9 Add2
	goto Label_1950; // 0x7aa Jump
}


func_1965(var_102_int)
{
	var_102_int = 515528; // 0x7ad MovI
	return 0; // 0x7ae Return
}


func_1967(var_101_int)
{
	var_101_int = 502854; // 0x7af MovI
	return 0; // 0x7b0 Return
}


func_1969(var_103_string)
{
	var_103_string = "ui/NPC_Alexandr.png"; // 0x7b1 MovS
	return 0; // 0x7b2 Return
}


func_1971(var_104_string)
{
	var_104_string = "ui/NPC_Alexandr_b.png"; // 0x7b3 MovS
	return 0; // 0x7b4 Return
}


func_179(var_2_object, var_310_string)
{
	var_311_bool = 0; // 0xb4 PushV
	func_1973(var_311_bool); // 0xb5 NEW_2
	var_312_bool = var_311_bool == 0; // 0xb7 Not
	if(var_312_bool == 0) goto Label_186; // 0xb8 JumpB
	return 0; // 0xb9 Return
	
Label_186:
	var_313_bool = var_310_string == var_2_object; // 0xba Eq
	if(var_313_bool == 0) goto Label_189; // 0xbb JumpB
	return 0; // 0xbc Return
	
Label_189:
	var_314_string = ""; var_315_bool = 0; // 0xbd PushV
	var_314_string = var_310_string; // 0xbe Mov
	var_316_string = ""; // 0xbf PushS
	var_317_bool = var_310_string == var_316_string; // 0xc0 Eq
	if(var_317_bool == 0) goto Label_196; // 0xc1 JumpB
	var_315_bool = 0; // 0xc2 MovB
	goto Label_197; // 0xc3 Jump
	
Label_197:
	func_1819(var_314_string, var_315_bool); // 0xc5 NEW_2
	var_2_object = var_310_string; // 0xc7 TMov
	return 0; // 0xc8 Return
	
Label_196:
	var_315_bool = 1; // 0xc4 MovB
}


func_1973(var_96_bool)
{
	var_96_bool = 1; // 0x7b5 MovB
	return 0; // 0x7b6 Return
}


func_1975()
{
	var_29_object = Obj(); var_30_object = Obj(); // 0x7b7 PushV
	var_31_string = "b2q01"; // 0x7b8 PushS
	var_32_int = 2; // 0x7b9 PushI
	SetVariable(var_31_string, var_32_int); // 0x7ba Func
	var_33_object = Obj(); // 0x7bc PushV
	func_2127(var_33_object); // 0x7bd NEW_2
	var_30_object = var_33_object; // 0x7be Mov
	var_40_string = "b2q01AlexandrGotoOspina"; // 0x7c0 PushS
	var_41_string = "pt_map_ospina"; // 0x7c1 PushS
	var_42_int = 1; // 0x7c2 PushI
	var_43_int = 520459; // 0x7c3 PushI
	var_44_float = 0; // 0x7c4 PushV
	func_1921(var_44_float); // 0x7c5 NEW_2
	AddMark(var_40_string, var_41_string, var_42_int, var_43_int, var_44_float); // 0x7c7 ObjFunc
	func_2073(); // 0x7ca NEW_2
	return 2; // 0x7cc Return
}


func_1723(var_125_bool)
{
	var_127_string = ""; var_128_int = 0; var_129_bool = 0; var_130_int = 0; var_131_string = ""; var_132_string = ""; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_string = ""; // 0x6bb PushV
	var_132_string = "c"; // 0x6bc MovS
	var_133_int = 0; // 0x6bd MovI
	
Label_1726:
	var_137_int = 1; // 0x6be PushI
	if(var_137_int == 0) goto Label_1739; // 0x6bf JumpB
	var_138_int = 1; // 0x6c0 PushI
	var_139_int = var_133_int + var_138_int; // 0x6c1 Add
	var_140_int = var_132_string + var_139_int; // 0x6c2 Add
	HasProperty(var_140_int, var_134_bool); // 0x6c3 ObjFunc
	var_141_bool = var_134_bool == 0; // 0x6c5 Not
	if(var_141_bool == 0) goto Label_1736; // 0x6c6 JumpB
	goto Label_1739; // 0x6c7 Jump
	
Label_1739:
	var_142_bool = var_133_int == 0; // 0x6cb Not
	if(var_142_bool == 0) goto Label_1743; // 0x6cc JumpB
	var_125_bool = 0; // 0x6cd MovB
	return 10; // 0x6ce Return
	
Label_1743:
	var_135_int = 0; // 0x6cf MovI
	var_143_int = 1; // 0x6d0 PushI
	var_144_bool = var_133_int > var_143_int; // 0x6d1 GT
	if(var_144_bool == 0) goto Label_1749; // 0x6d2 JumpB
	irand(var_135_int, var_133_int); // 0x6d3 Func
	
Label_1749:
	var_145_int = 1; // 0x6d5 PushI
	var_146_int = var_135_int + var_145_int; // 0x6d6 Add
	var_147_int = var_132_string + var_146_int; // 0x6d7 Add
	GetProperty(var_147_int, var_136_string); // 0x6d8 ObjFunc
	var_148_bool = 0; var_149_string = ""; // 0x6da PushV
	var_149_string = var_136_string; // 0x6db Mov
	func_1834(var_148_bool, var_149_string); // 0x6dc NEW_2
	var_125_bool = var_148_bool; // 0x6dd Mov
	return 10; // 0x6df Return
	
Label_1736:
	var_154_int = 1; // 0x6c8 PushI
	var_133_int = var_133_int + var_154_int; // 0x6c9 Add2
	goto Label_1726; // 0x6ca Jump
}


func_1470()
{
	var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0; // 0x5be PushV
	WaitForAnimEnd(); // 0x5bf Func
	var_38_bool = 0; // 0x5c1 PushV
	func_1573(var_38_bool); // 0x5c2 NEW_2
	var_39_bool = var_38_bool == 0; // 0x5c4 Not
	if(var_39_bool == 0) goto Label_1479; // 0x5c5 JumpB
	return 12; // 0x5c6 Return
	
Label_1479:
	var_40_int = 0; // 0x5c7 PushV
	func_1948(var_40_int); // 0x5c8 NEW_2
	var_32_int = var_40_int; // 0x5c9 Mov
	var_33_int = 0; // 0x5cb MovI
	
Label_1484:
	var_53_bool = 0; // 0x5cc PushV
	var_53_bool = 0; // 0x5cd MovB
	var_54_int = 5; // 0x5ce PushI
	var_55_bool = var_33_int < var_54_int; // 0x5cf LT
	if(var_55_bool == 0) goto Label_1494; // 0x5d0 JumpB
	var_56_bool = 0; // 0x5d1 PushV
	func_1573(var_56_bool); // 0x5d2 NEW_2
	if(var_56_bool == 0) goto Label_1494; // 0x5d4 JumpB
	var_53_bool = 1; // 0x5d5 MovB
	
Label_1494:
	if(var_53_bool == 0) goto Label_1536; // 0x5d6 JumpB
	var_57_bool = var_32_int == 0; // 0x5d7 Not
	if(var_57_bool == 0) goto Label_1504; // 0x5d8 JumpB
	var_58_int = 3; // 0x5d9 PushI
	Sleep(var_58_int, var_34_bool); // 0x5da Func
	var_59_bool = var_34_bool == 0; // 0x5dc Not
	if(var_59_bool == 0) goto Label_1503; // 0x5dd JumpB
	goto Label_1536; // 0x5de Jump
	
Label_1536:
	ResetAAS(); // 0x600 Func
	return 12; // 0x602 Return
	
Label_1503:
	goto Label_1525; // 0x5df Jump
	
Label_1525:
	var_60_bool = 0; // 0x5f5 PushV
	func_1539(var_60_bool); // 0x5f6 NEW_2
	var_61_bool = var_60_bool == 0; // 0x5f8 Not
	if(var_61_bool == 0) goto Label_1531; // 0x5f9 JumpB
	goto Label_1536; // 0x5fa Jump
	
Label_1531:
	ResetAAS(); // 0x5fb Func
	var_62_int = 1; // 0x5fd PushI
	var_33_int = var_33_int + var_62_int; // 0x5fe Add2
	goto Label_1484; // 0x5ff Jump
	
Label_1504:
	irand(var_35_int, var_32_int); // 0x5e0 Func
	var_63_int = 5; // 0x5e2 PushI
	irand(var_36_int, var_63_int); // 0x5e3 Func
	var_64_int = 0; // 0x5e5 PushI
	var_65_bool = var_36_int != var_64_int; // 0x5e6 Neq
	if(var_65_bool == 0) goto Label_1513; // 0x5e7 JumpB
	var_35_int = 0; // 0x5e8 MovI
	
Label_1513:
	var_66_string = "all"; // 0x5e9 PushS
	var_67_string = ""; var_68_int = 0; // 0x5ea PushV
	var_68_int = var_35_int; // 0x5eb Mov
	func_1941(var_67_string, var_68_int); // 0x5ec NEW_2
	PlayAnimation(var_66_string, var_67_string); // 0x5ee Func
	WaitForAnimEnd(var_37_bool); // 0x5f0 Func
	var_69_bool = var_37_bool == 0; // 0x5f2 Not
	if(var_69_bool == 0) goto Label_1525; // 0x5f3 JumpB
	goto Label_1536; // 0x5f4 Jump
}


func_703(var_0_object, var_1_object, var_2_object, var_3_string, var_209_object, var_210_object)
{
	var_0_object = var_210_object; // 0x2c0 TMov
	var_1_object = var_209_object; // 0x2c1 TMov
	var_3_string = 0; // 0x2c2 TMovB
	var_215_int = 1; // 0x2c3 PushI
	if(var_215_int == 0) goto Label_731; // 0x2c4 JumpB
	var_216_string = ""; // 0x2c5 PushV
	var_216_string = "Strict"; // 0x2c6 MovS
	func_761(var_210_object, var_216_string); // 0x2c7 NEW_2
	var_233_int = 520670; // 0x2c9 PushI
	SetMessage(var_233_int); // 0x2ca TObjFunc
	ClearReplies(); // 0x2cc TObjFunc
	var_234_int = 520671; // 0x2ce PushI
	var_235_int = -1; // 0x2cf PushI
	var_236_int = 21878; // 0x2d0 PushI
	AddReply(var_234_int, var_235_int, var_236_int); // 0x2d1 TObjFunc
	var_237_int = 527796; // 0x2d3 PushI
	var_238_int = -1; // 0x2d4 PushI
	var_239_int = 29129; // 0x2d5 PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x2d6 TObjFunc
	goto Label_731; // 0x2d8 Jump
	
Label_731:
	var_240_bool = 0; // 0x2db PushV
	func_1973(var_240_bool); // 0x2dc NEW_2
	if(var_240_bool == 0) goto Label_746; // 0x2de JumpB
	
Label_735:
	lshWaitForAnimEnd(); // 0x2df Func
	var_241_string = var_3_string; // 0x2e1 PushT
	if(var_241_string == 0) goto Label_740; // 0x2e2 JumpB
	goto Label_745; // 0x2e3 Jump
	
Label_745:
	goto Label_760; // 0x2e9 Jump
	
Label_760:
	return 0; // 0x2f8 Return
	
Label_740:
	var_242_string = ""; // 0x2e4 PushV
	var_242_string = var_2_object; // 0x2e5 MovT
	func_1803(var_242_string); // 0x2e6 NEW_2
	goto Label_735; // 0x2e8 Jump
	
Label_746:
	var_253_string = "all"; // 0x2ea PushS
	var_254_string = "idle"; // 0x2eb PushS
	PlayAnimation(var_253_string, var_254_string); // 0x2ec Func
	
Label_750:
	WaitForAnimEnd(); // 0x2ee Func
	var_255_string = var_3_string; // 0x2f0 PushT
	if(var_255_string == 0) goto Label_755; // 0x2f1 JumpB
	goto Label_760; // 0x2f2 Jump
	
Label_755:
	var_256_string = "all"; // 0x2f3 PushS
	var_257_string = "idle"; // 0x2f4 PushS
	PlayAnimation(var_256_string, var_257_string); // 0x2f5 Func
	goto Label_750; // 0x2f7 Jump
}


func_1223(var_2_object, var_454_string)
{
	var_455_bool = 0; // 0x4c8 PushV
	func_1973(var_455_bool); // 0x4c9 NEW_2
	var_456_bool = var_455_bool == 0; // 0x4cb Not
	if(var_456_bool == 0) goto Label_1230; // 0x4cc JumpB
	return 0; // 0x4cd Return
	
Label_1230:
	var_457_bool = var_454_string == var_2_object; // 0x4ce Eq
	if(var_457_bool == 0) goto Label_1233; // 0x4cf JumpB
	return 0; // 0x4d0 Return
	
Label_1233:
	var_458_string = ""; var_459_bool = 0; // 0x4d1 PushV
	var_458_string = var_454_string; // 0x4d2 Mov
	var_460_string = ""; // 0x4d3 PushS
	var_461_bool = var_454_string == var_460_string; // 0x4d4 Eq
	if(var_461_bool == 0) goto Label_1240; // 0x4d5 JumpB
	var_459_bool = 0; // 0x4d6 MovB
	goto Label_1241; // 0x4d7 Jump
	
Label_1241:
	func_1819(var_458_string, var_459_bool); // 0x4d9 NEW_2
	var_2_object = var_454_string; // 0x4db TMov
	return 0; // 0x4dc Return
	
Label_1240:
	var_459_bool = 1; // 0x4d8 MovB
}


func_969(var_2_object, var_394_string)
{
	var_395_bool = 0; // 0x3ca PushV
	func_1973(var_395_bool); // 0x3cb NEW_2
	var_396_bool = var_395_bool == 0; // 0x3cd Not
	if(var_396_bool == 0) goto Label_976; // 0x3ce JumpB
	return 0; // 0x3cf Return
	
Label_976:
	var_397_bool = var_394_string == var_2_object; // 0x3d0 Eq
	if(var_397_bool == 0) goto Label_979; // 0x3d1 JumpB
	return 0; // 0x3d2 Return
	
Label_979:
	var_398_string = ""; var_399_bool = 0; // 0x3d3 PushV
	var_398_string = var_394_string; // 0x3d4 Mov
	var_400_string = ""; // 0x3d5 PushS
	var_401_bool = var_394_string == var_400_string; // 0x3d6 Eq
	if(var_401_bool == 0) goto Label_986; // 0x3d7 JumpB
	var_399_bool = 0; // 0x3d8 MovB
	goto Label_987; // 0x3d9 Jump
	
Label_987:
	func_1819(var_398_string, var_399_bool); // 0x3db NEW_2
	var_2_object = var_394_string; // 0x3dd TMov
	return 0; // 0x3de Return
	
Label_986:
	var_399_bool = 1; // 0x3da MovB
}


func_1998()
{
	var_132_string = "oob2Alexandr1"; // 0x7cf PushS
	var_133_int = 1; // 0x7d0 PushI
	SetVariable(var_132_string, var_133_int); // 0x7d1 Func
	return 0; // 0x7d3 Return
}


func_2004()
{
	var_138_string = "oob2Alexandr2"; // 0x7d5 PushS
	var_139_int = 1; // 0x7d6 PushI
	SetVariable(var_138_string, var_139_int); // 0x7d7 Func
	return 0; // 0x7d9 Return
}


func_2010(var_96_object)
{
	var_98_string = "key is given"; // 0x7db PushS
	Trace(var_98_string); // 0x7dc Func
	var_99_object = Obj(); var_100_string = ""; var_101_int = 0; // 0x7de PushV
	var_99_object = var_96_object; // 0x7df Mov
	var_100_string = "b2q01_key"; // 0x7e0 MovS
	var_101_int = 1; // 0x7e1 MovI
	func_1908(var_99_object, var_100_string, var_101_int); // 0x7e2 NEW_2
	return 0; // 0x7e4 Return
}


func_1760(var_156_bool)
{
	var_158_string = ""; var_159_int = 0; var_160_bool = 0; var_161_int = 0; var_162_string = ""; var_163_string = ""; var_164_int = 0; var_165_bool = 0; var_166_int = 0; var_167_string = ""; // 0x6e0 PushV
	var_168_string = "d"; // 0x6e1 PushS
	var_169_int = 0; // 0x6e2 PushV
	func_1926(var_169_int); // 0x6e3 NEW_2
	var_175_int = var_168_string + var_169_int; // 0x6e5 Add
	var_176_string = "m"; // 0x6e6 PushS
	var_163_string = var_175_int + var_176_string; // 0x6e7 Add2
	var_164_int = 0; // 0x6e8 MovI
	
Label_1769:
	var_177_int = 1; // 0x6e9 PushI
	if(var_177_int == 0) goto Label_1782; // 0x6ea JumpB
	var_178_int = 1; // 0x6eb PushI
	var_179_int = var_164_int + var_178_int; // 0x6ec Add
	var_180_int = var_163_string + var_179_int; // 0x6ed Add
	HasProperty(var_180_int, var_165_bool); // 0x6ee ObjFunc
	var_181_bool = var_165_bool == 0; // 0x6f0 Not
	if(var_181_bool == 0) goto Label_1779; // 0x6f1 JumpB
	goto Label_1782; // 0x6f2 Jump
	
Label_1782:
	var_182_bool = var_164_int == 0; // 0x6f6 Not
	if(var_182_bool == 0) goto Label_1786; // 0x6f7 JumpB
	var_156_bool = 0; // 0x6f8 MovB
	return 10; // 0x6f9 Return
	
Label_1786:
	var_166_int = 0; // 0x6fa MovI
	var_183_int = 1; // 0x6fb PushI
	var_184_bool = var_164_int > var_183_int; // 0x6fc GT
	if(var_184_bool == 0) goto Label_1792; // 0x6fd JumpB
	irand(var_166_int, var_164_int); // 0x6fe Func
	
Label_1792:
	var_185_int = 1; // 0x700 PushI
	var_186_int = var_166_int + var_185_int; // 0x701 Add
	var_187_int = var_163_string + var_186_int; // 0x702 Add
	GetProperty(var_187_int, var_167_string); // 0x703 ObjFunc
	var_188_bool = 0; var_189_string = ""; // 0x705 PushV
	var_189_string = var_167_string; // 0x706 Mov
	func_1834(var_188_bool, var_189_string); // 0x707 NEW_2
	var_156_bool = var_188_bool; // 0x708 Mov
	return 10; // 0x70a Return
	
Label_1779:
	var_190_int = 1; // 0x6f3 PushI
	var_164_int = var_164_int + var_190_int; // 0x6f4 Add2
	goto Label_1769; // 0x6f5 Jump
}


func_2021()
{
	var_72_object = Obj(); var_73_string = ""; var_74_float = 0; // 0x7e6 PushV
	var_75_object = Obj(); // 0x7e7 PushV
	func_2127(var_75_object); // 0x7e8 NEW_2
	var_72_object = var_75_object; // 0x7e9 Mov
	var_73_string = "pt_map_ospina"; // 0x7eb MovS
	var_74_float = 2; // 0x7ec MovI
	func_2144(var_72_object, var_73_string, var_74_float); // 0x7ed NEW_2
	var_95_object = Obj(); // 0x7ef PushV
	func_2127(var_95_object); // 0x7f0 NEW_2
	ShowMap(var_95_object); // 0x7f2 ObjFunc
	return 0; // 0x7f4 Return
}


func_2037(var_302_bool)
{
	var_304_int = 0; var_305_string = ""; // 0x7f6 PushV
	var_305_string = "b2q01"; // 0x7f7 MovS
	func_1872(var_304_int, var_305_string); // 0x7f8 NEW_2
	var_308_int = 1; // 0x7fa PushI
	var_309_bool = var_304_int == var_308_int; // 0x7fb Eq
	if(var_309_bool == 0) goto Label_2047; // 0x7fc JumpB
	var_302_bool = 1; // 0x7fd MovB
	return 0; // 0x7fe Return
	
Label_2047:
	var_302_bool = 0; // 0x7ff MovB
	return 0; // 0x800 Return
}


func_761(var_2_object, var_216_string)
{
	var_217_bool = 0; // 0x2fa PushV
	func_1973(var_217_bool); // 0x2fb NEW_2
	var_218_bool = var_217_bool == 0; // 0x2fd Not
	if(var_218_bool == 0) goto Label_768; // 0x2fe JumpB
	return 0; // 0x2ff Return
	
Label_768:
	var_219_bool = var_216_string == var_2_object; // 0x300 Eq
	if(var_219_bool == 0) goto Label_771; // 0x301 JumpB
	return 0; // 0x302 Return
	
Label_771:
	var_220_string = ""; var_221_bool = 0; // 0x303 PushV
	var_220_string = var_216_string; // 0x304 Mov
	var_222_string = ""; // 0x305 PushS
	var_223_bool = var_216_string == var_222_string; // 0x306 Eq
	if(var_223_bool == 0) goto Label_778; // 0x307 JumpB
	var_221_bool = 0; // 0x308 MovB
	goto Label_779; // 0x309 Jump
	
Label_779:
	func_1819(var_220_string, var_221_bool); // 0x30b NEW_2
	var_2_object = var_216_string; // 0x30d TMov
	return 0; // 0x30e Return
	
Label_778:
	var_221_bool = 1; // 0x30a MovB
}


