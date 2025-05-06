task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xdd PushI
	if(var_9_int == 0) goto Label_851; // 0xde JumpB
	func_1456(); // 0xe0 NEW_2
	var_11_int = 36147; // 0xe2 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xe3 Eq
	if(var_12_bool == 0) goto Label_234; // 0xe4 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xe5 PushV
	var_13_object = var_1_object; // 0xe6 MovT
	var_14_object = var_0_object; // 0xe7 MovT
	func_1606(); // 0xe8 NEW_2
	
Label_234:
	var_17_int = 36151; // 0xea PushI
	var_18_bool = var_8_bool == var_17_int; // 0xeb Eq
	if(var_18_bool == 0) goto Label_247; // 0xec JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0xed PushV
	var_19_object = var_1_object; // 0xee MovT
	var_20_object = var_0_object; // 0xef MovT
	func_1561(var_20_object); // 0xf0 NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0xf2 PushV
	var_68_object = var_1_object; // 0xf3 MovT
	var_69_object = var_0_object; // 0xf4 MovT
	func_1579(); // 0xf5 NEW_2
	
Label_247:
	var_91_int = 40618; // 0xf7 PushI
	var_92_bool = var_8_bool == var_91_int; // 0xf8 Eq
	if(var_92_bool == 0) goto Label_255; // 0xf9 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0xfa PushV
	var_93_object = var_1_object; // 0xfb MovT
	var_94_object = var_0_object; // 0xfc MovT
	func_1612(); // 0xfd NEW_2
	
Label_255:
	var_97_int = 15573; // 0xff PushI
	var_98_bool = var_7_cvector == var_97_int; // 0x100 Eq
	if(var_98_bool == 0) goto Label_337; // 0x101 JumpB
	var_99_bool = 0; var_100_object = Obj(); // 0x102 PushV
	var_100_object = var_1_object; // 0x103 MovT
	func_1660(var_100_object); // 0x104 NEW_2
	if(var_99_bool == 0) goto Label_288; // 0x106 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x107 PushV
	var_105_object = var_1_object; // 0x108 MovT
	var_106_object = var_0_object; // 0x109 MovT
	func_1618(); // 0x10a NEW_2
	var_109_string = ""; // 0x10c PushV
	var_109_string = "Neutral"; // 0x10d MovS
	func_198(var_8_bool, var_109_string); // 0x10e NEW_2
	var_126_int = 514350; // 0x110 PushI
	SetMessage(var_126_int); // 0x111 TObjFunc
	ClearReplies(); // 0x113 TObjFunc
	var_127_int = 514351; // 0x115 PushI
	var_128_int = 15575; // 0x116 PushI
	var_129_int = 15574; // 0x117 PushI
	AddReply(var_127_int, var_128_int, var_129_int); // 0x118 TObjFunc
	var_130_int = 538680; // 0x11a PushI
	var_131_int = 15575; // 0x11b PushI
	var_132_int = 40578; // 0x11c PushI
	AddReply(var_130_int, var_131_int, var_132_int); // 0x11d TObjFunc
	return 0; // 0x11f Return
	
Label_288:
	var_133_string = ""; // 0x120 PushV
	var_133_string = "Saveyouall"; // 0x121 MovS
	func_198(var_8_bool, var_133_string); // 0x122 NEW_2
	var_134_int = 514514; // 0x124 PushI
	SetMessage(var_134_int); // 0x125 TObjFunc
	ClearReplies(); // 0x127 TObjFunc
	var_135_bool = 0; // 0x129 PushV
	var_135_bool = 0; // 0x12a MovB
	var_136_bool = 0; var_137_object = Obj(); // 0x12b PushV
	var_137_object = var_1_object; // 0x12c MovT
	func_1624(var_137_object); // 0x12d NEW_2
	if(var_136_bool == 0) goto Label_310; // 0x12f JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x130 PushV
	var_143_object = var_1_object; // 0x131 MovT
	func_1636(var_143_object); // 0x132 NEW_2
	if(var_142_bool == 0) goto Label_310; // 0x134 JumpB
	var_135_bool = 1; // 0x135 MovB
	
Label_310:
	if(var_135_bool == 0) goto Label_316; // 0x136 JumpB
	var_148_int = 534506; // 0x137 PushI
	var_149_int = 40595; // 0x138 PushI
	var_150_int = 36147; // 0x139 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x13a TObjFunc
	
Label_316:
	var_151_bool = 0; var_152_object = Obj(); // 0x13c PushV
	var_152_object = var_1_object; // 0x13d MovT
	func_1648(var_152_object); // 0x13e NEW_2
	if(var_151_bool == 0) goto Label_326; // 0x140 JumpB
	var_157_int = 538711; // 0x141 PushI
	var_158_int = 40619; // 0x142 PushI
	var_159_int = 40618; // 0x143 PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x144 TObjFunc
	
Label_326:
	var_160_int = 514515; // 0x146 PushI
	var_161_int = -1; // 0x147 PushI
	var_162_int = 15754; // 0x148 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x149 TObjFunc
	var_163_int = 538691; // 0x14b PushI
	var_164_int = -1; // 0x14c PushI
	var_165_int = 40594; // 0x14d PushI
	AddReply(var_163_int, var_164_int, var_165_int); // 0x14e TObjFunc
	return 0; // 0x150 Return
	
Label_337:
	var_166_int = 40619; // 0x151 PushI
	var_167_bool = var_7_cvector == var_166_int; // 0x152 Eq
	if(var_167_bool == 0) goto Label_360; // 0x153 JumpB
	var_168_string = ""; // 0x154 PushV
	var_168_string = "Smile"; // 0x155 MovS
	func_198(var_8_bool, var_168_string); // 0x156 NEW_2
	var_169_int = 538712; // 0x158 PushI
	SetMessage(var_169_int); // 0x159 TObjFunc
	ClearReplies(); // 0x15b TObjFunc
	var_170_int = 538714; // 0x15d PushI
	var_171_int = 40622; // 0x15e PushI
	var_172_int = 40621; // 0x15f PushI
	AddReply(var_170_int, var_171_int, var_172_int); // 0x160 TObjFunc
	var_173_int = 538713; // 0x162 PushI
	var_174_int = -1; // 0x163 PushI
	var_175_int = 40620; // 0x164 PushI
	AddReply(var_173_int, var_174_int, var_175_int); // 0x165 TObjFunc
	return 0; // 0x167 Return
	
Label_360:
	var_176_int = 40622; // 0x168 PushI
	var_177_bool = var_7_cvector == var_176_int; // 0x169 Eq
	if(var_177_bool == 0) goto Label_378; // 0x16a JumpB
	var_178_string = ""; // 0x16b PushV
	var_178_string = "Smile"; // 0x16c MovS
	func_198(var_8_bool, var_178_string); // 0x16d NEW_2
	var_179_int = 538715; // 0x16f PushI
	SetMessage(var_179_int); // 0x170 TObjFunc
	ClearReplies(); // 0x172 TObjFunc
	var_180_int = 538716; // 0x174 PushI
	var_181_int = 40624; // 0x175 PushI
	var_182_int = 40623; // 0x176 PushI
	AddReply(var_180_int, var_181_int, var_182_int); // 0x177 TObjFunc
	return 0; // 0x179 Return
	
Label_378:
	var_183_int = 40624; // 0x17a PushI
	var_184_bool = var_7_cvector == var_183_int; // 0x17b Eq
	if(var_184_bool == 0) goto Label_401; // 0x17c JumpB
	var_185_string = ""; // 0x17d PushV
	var_185_string = "Smile"; // 0x17e MovS
	func_198(var_8_bool, var_185_string); // 0x17f NEW_2
	var_186_int = 538717; // 0x181 PushI
	SetMessage(var_186_int); // 0x182 TObjFunc
	ClearReplies(); // 0x184 TObjFunc
	var_187_int = 538718; // 0x186 PushI
	var_188_int = -1; // 0x187 PushI
	var_189_int = 40625; // 0x188 PushI
	AddReply(var_187_int, var_188_int, var_189_int); // 0x189 TObjFunc
	var_190_int = 538719; // 0x18b PushI
	var_191_int = -1; // 0x18c PushI
	var_192_int = 40626; // 0x18d PushI
	AddReply(var_190_int, var_191_int, var_192_int); // 0x18e TObjFunc
	return 0; // 0x190 Return
	
Label_401:
	var_193_int = 40595; // 0x191 PushI
	var_194_bool = var_7_cvector == var_193_int; // 0x192 Eq
	if(var_194_bool == 0) goto Label_424; // 0x193 JumpB
	var_195_string = ""; // 0x194 PushV
	var_195_string = "Saveyouall"; // 0x195 MovS
	func_198(var_8_bool, var_195_string); // 0x196 NEW_2
	var_196_int = 538692; // 0x198 PushI
	SetMessage(var_196_int); // 0x199 TObjFunc
	ClearReplies(); // 0x19b TObjFunc
	var_197_int = 538693; // 0x19d PushI
	var_198_int = 40616; // 0x19e PushI
	var_199_int = 40596; // 0x19f PushI
	AddReply(var_197_int, var_198_int, var_199_int); // 0x1a0 TObjFunc
	var_200_int = 538699; // 0x1a2 PushI
	var_201_int = 40604; // 0x1a3 PushI
	var_202_int = 40603; // 0x1a4 PushI
	AddReply(var_200_int, var_201_int, var_202_int); // 0x1a5 TObjFunc
	return 0; // 0x1a7 Return
	
Label_424:
	var_203_int = 40604; // 0x1a8 PushI
	var_204_bool = var_7_cvector == var_203_int; // 0x1a9 Eq
	if(var_204_bool == 0) goto Label_447; // 0x1aa JumpB
	var_205_string = ""; // 0x1ab PushV
	var_205_string = "Fear"; // 0x1ac MovS
	func_198(var_8_bool, var_205_string); // 0x1ad NEW_2
	var_206_int = 538700; // 0x1af PushI
	SetMessage(var_206_int); // 0x1b0 TObjFunc
	ClearReplies(); // 0x1b2 TObjFunc
	var_207_int = 538701; // 0x1b4 PushI
	var_208_int = 40607; // 0x1b5 PushI
	var_209_int = 40605; // 0x1b6 PushI
	AddReply(var_207_int, var_208_int, var_209_int); // 0x1b7 TObjFunc
	var_210_int = 538702; // 0x1b9 PushI
	var_211_int = 40609; // 0x1ba PushI
	var_212_int = 40606; // 0x1bb PushI
	AddReply(var_210_int, var_211_int, var_212_int); // 0x1bc TObjFunc
	return 0; // 0x1be Return
	
Label_447:
	var_213_int = 40609; // 0x1bf PushI
	var_214_bool = var_7_cvector == var_213_int; // 0x1c0 Eq
	if(var_214_bool == 0) goto Label_470; // 0x1c1 JumpB
	var_215_string = ""; // 0x1c2 PushV
	var_215_string = "Fear"; // 0x1c3 MovS
	func_198(var_8_bool, var_215_string); // 0x1c4 NEW_2
	var_216_int = 538705; // 0x1c6 PushI
	SetMessage(var_216_int); // 0x1c7 TObjFunc
	ClearReplies(); // 0x1c9 TObjFunc
	var_217_int = 538707; // 0x1cb PushI
	var_218_int = 40600; // 0x1cc PushI
	var_219_int = 40612; // 0x1cd PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x1ce TObjFunc
	var_220_int = 538708; // 0x1d0 PushI
	var_221_int = 40600; // 0x1d1 PushI
	var_222_int = 40613; // 0x1d2 PushI
	AddReply(var_220_int, var_221_int, var_222_int); // 0x1d3 TObjFunc
	return 0; // 0x1d5 Return
	
Label_470:
	var_223_int = 40607; // 0x1d6 PushI
	var_224_bool = var_7_cvector == var_223_int; // 0x1d7 Eq
	if(var_224_bool == 0) goto Label_493; // 0x1d8 JumpB
	var_225_string = ""; // 0x1d9 PushV
	var_225_string = "Grin"; // 0x1da MovS
	func_198(var_8_bool, var_225_string); // 0x1db NEW_2
	var_226_int = 538703; // 0x1dd PushI
	SetMessage(var_226_int); // 0x1de TObjFunc
	ClearReplies(); // 0x1e0 TObjFunc
	var_227_int = 538704; // 0x1e2 PushI
	var_228_int = -1; // 0x1e3 PushI
	var_229_int = 40608; // 0x1e4 PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x1e5 TObjFunc
	var_230_int = 538706; // 0x1e7 PushI
	var_231_int = 40600; // 0x1e8 PushI
	var_232_int = 40610; // 0x1e9 PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x1ea TObjFunc
	return 0; // 0x1ec Return
	
Label_493:
	var_233_int = 40616; // 0x1ed PushI
	var_234_bool = var_7_cvector == var_233_int; // 0x1ee Eq
	if(var_234_bool == 0) goto Label_511; // 0x1ef JumpB
	var_235_string = ""; // 0x1f0 PushV
	var_235_string = "Neutral"; // 0x1f1 MovS
	func_198(var_8_bool, var_235_string); // 0x1f2 NEW_2
	var_236_int = 538709; // 0x1f4 PushI
	SetMessage(var_236_int); // 0x1f5 TObjFunc
	ClearReplies(); // 0x1f7 TObjFunc
	var_237_int = 538710; // 0x1f9 PushI
	var_238_int = 40597; // 0x1fa PushI
	var_239_int = 40617; // 0x1fb PushI
	AddReply(var_237_int, var_238_int, var_239_int); // 0x1fc TObjFunc
	return 0; // 0x1fe Return
	
Label_511:
	var_240_int = 40597; // 0x1ff PushI
	var_241_bool = var_7_cvector == var_240_int; // 0x200 Eq
	if(var_241_bool == 0) goto Label_534; // 0x201 JumpB
	var_242_string = ""; // 0x202 PushV
	var_242_string = "Saveyouall"; // 0x203 MovS
	func_198(var_8_bool, var_242_string); // 0x204 NEW_2
	var_243_int = 538694; // 0x206 PushI
	SetMessage(var_243_int); // 0x207 TObjFunc
	ClearReplies(); // 0x209 TObjFunc
	var_244_int = 538695; // 0x20b PushI
	var_245_int = 40600; // 0x20c PushI
	var_246_int = 40598; // 0x20d PushI
	AddReply(var_244_int, var_245_int, var_246_int); // 0x20e TObjFunc
	var_247_int = 538696; // 0x210 PushI
	var_248_int = 40600; // 0x211 PushI
	var_249_int = 40599; // 0x212 PushI
	AddReply(var_247_int, var_248_int, var_249_int); // 0x213 TObjFunc
	return 0; // 0x215 Return
	
Label_534:
	var_250_int = 40600; // 0x216 PushI
	var_251_bool = var_7_cvector == var_250_int; // 0x217 Eq
	if(var_251_bool == 0) goto Label_552; // 0x218 JumpB
	var_252_string = ""; // 0x219 PushV
	var_252_string = "Neutral"; // 0x21a MovS
	func_198(var_8_bool, var_252_string); // 0x21b NEW_2
	var_253_int = 538697; // 0x21d PushI
	SetMessage(var_253_int); // 0x21e TObjFunc
	ClearReplies(); // 0x220 TObjFunc
	var_254_int = 538698; // 0x222 PushI
	var_255_int = 36148; // 0x223 PushI
	var_256_int = 40602; // 0x224 PushI
	AddReply(var_254_int, var_255_int, var_256_int); // 0x225 TObjFunc
	return 0; // 0x227 Return
	
Label_552:
	var_257_int = 36148; // 0x228 PushI
	var_258_bool = var_7_cvector == var_257_int; // 0x229 Eq
	if(var_258_bool == 0) goto Label_570; // 0x22a JumpB
	var_259_string = ""; // 0x22b PushV
	var_259_string = "Neutral"; // 0x22c MovS
	func_198(var_8_bool, var_259_string); // 0x22d NEW_2
	var_260_int = 534507; // 0x22f PushI
	SetMessage(var_260_int); // 0x230 TObjFunc
	ClearReplies(); // 0x232 TObjFunc
	var_261_int = 534508; // 0x234 PushI
	var_262_int = 36150; // 0x235 PushI
	var_263_int = 36149; // 0x236 PushI
	AddReply(var_261_int, var_262_int, var_263_int); // 0x237 TObjFunc
	return 0; // 0x239 Return
	
Label_570:
	var_264_int = 36150; // 0x23a PushI
	var_265_bool = var_7_cvector == var_264_int; // 0x23b Eq
	if(var_265_bool == 0) goto Label_588; // 0x23c JumpB
	var_266_string = ""; // 0x23d PushV
	var_266_string = "Neutral"; // 0x23e MovS
	func_198(var_8_bool, var_266_string); // 0x23f NEW_2
	var_267_int = 534509; // 0x241 PushI
	SetMessage(var_267_int); // 0x242 TObjFunc
	ClearReplies(); // 0x244 TObjFunc
	var_268_int = 534510; // 0x246 PushI
	var_269_int = -1; // 0x247 PushI
	var_270_int = 36151; // 0x248 PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x249 TObjFunc
	return 0; // 0x24b Return
	
Label_588:
	var_271_int = 15575; // 0x24c PushI
	var_272_bool = var_7_cvector == var_271_int; // 0x24d Eq
	if(var_272_bool == 0) goto Label_611; // 0x24e JumpB
	var_273_string = ""; // 0x24f PushV
	var_273_string = "Neutral"; // 0x250 MovS
	func_198(var_8_bool, var_273_string); // 0x251 NEW_2
	var_274_int = 514352; // 0x253 PushI
	SetMessage(var_274_int); // 0x254 TObjFunc
	ClearReplies(); // 0x256 TObjFunc
	var_275_int = 514353; // 0x258 PushI
	var_276_int = 15577; // 0x259 PushI
	var_277_int = 15576; // 0x25a PushI
	AddReply(var_275_int, var_276_int, var_277_int); // 0x25b TObjFunc
	var_278_int = 538679; // 0x25d PushI
	var_279_int = 15579; // 0x25e PushI
	var_280_int = 40577; // 0x25f PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x260 TObjFunc
	return 0; // 0x262 Return
	
Label_611:
	var_281_int = 15577; // 0x263 PushI
	var_282_bool = var_7_cvector == var_281_int; // 0x264 Eq
	if(var_282_bool == 0) goto Label_634; // 0x265 JumpB
	var_283_string = ""; // 0x266 PushV
	var_283_string = "Neutral"; // 0x267 MovS
	func_198(var_8_bool, var_283_string); // 0x268 NEW_2
	var_284_int = 514354; // 0x26a PushI
	SetMessage(var_284_int); // 0x26b TObjFunc
	ClearReplies(); // 0x26d TObjFunc
	var_285_int = 514355; // 0x26f PushI
	var_286_int = 15579; // 0x270 PushI
	var_287_int = 15578; // 0x271 PushI
	AddReply(var_285_int, var_286_int, var_287_int); // 0x272 TObjFunc
	var_288_int = 538681; // 0x274 PushI
	var_289_int = 15581; // 0x275 PushI
	var_290_int = 40581; // 0x276 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x277 TObjFunc
	return 0; // 0x279 Return
	
Label_634:
	var_291_int = 15579; // 0x27a PushI
	var_292_bool = var_7_cvector == var_291_int; // 0x27b Eq
	if(var_292_bool == 0) goto Label_652; // 0x27c JumpB
	var_293_string = ""; // 0x27d PushV
	var_293_string = "Grin"; // 0x27e MovS
	func_198(var_8_bool, var_293_string); // 0x27f NEW_2
	var_294_int = 514356; // 0x281 PushI
	SetMessage(var_294_int); // 0x282 TObjFunc
	ClearReplies(); // 0x284 TObjFunc
	var_295_int = 514357; // 0x286 PushI
	var_296_int = 15581; // 0x287 PushI
	var_297_int = 15580; // 0x288 PushI
	AddReply(var_295_int, var_296_int, var_297_int); // 0x289 TObjFunc
	return 0; // 0x28b Return
	
Label_652:
	var_298_int = 15581; // 0x28c PushI
	var_299_bool = var_7_cvector == var_298_int; // 0x28d Eq
	if(var_299_bool == 0) goto Label_675; // 0x28e JumpB
	var_300_string = ""; // 0x28f PushV
	var_300_string = "Grin"; // 0x290 MovS
	func_198(var_8_bool, var_300_string); // 0x291 NEW_2
	var_301_int = 514358; // 0x293 PushI
	SetMessage(var_301_int); // 0x294 TObjFunc
	ClearReplies(); // 0x296 TObjFunc
	var_302_int = 514359; // 0x298 PushI
	var_303_int = 15583; // 0x299 PushI
	var_304_int = 15582; // 0x29a PushI
	AddReply(var_302_int, var_303_int, var_304_int); // 0x29b TObjFunc
	var_305_int = 538682; // 0x29d PushI
	var_306_int = 15587; // 0x29e PushI
	var_307_int = 40583; // 0x29f PushI
	AddReply(var_305_int, var_306_int, var_307_int); // 0x2a0 TObjFunc
	return 0; // 0x2a2 Return
	
Label_675:
	var_308_int = 15583; // 0x2a3 PushI
	var_309_bool = var_7_cvector == var_308_int; // 0x2a4 Eq
	if(var_309_bool == 0) goto Label_693; // 0x2a5 JumpB
	var_310_string = ""; // 0x2a6 PushV
	var_310_string = "Sly"; // 0x2a7 MovS
	func_198(var_8_bool, var_310_string); // 0x2a8 NEW_2
	var_311_int = 514360; // 0x2aa PushI
	SetMessage(var_311_int); // 0x2ab TObjFunc
	ClearReplies(); // 0x2ad TObjFunc
	var_312_int = 514361; // 0x2af PushI
	var_313_int = 15585; // 0x2b0 PushI
	var_314_int = 15584; // 0x2b1 PushI
	AddReply(var_312_int, var_313_int, var_314_int); // 0x2b2 TObjFunc
	return 0; // 0x2b4 Return
	
Label_693:
	var_315_int = 15585; // 0x2b5 PushI
	var_316_bool = var_7_cvector == var_315_int; // 0x2b6 Eq
	if(var_316_bool == 0) goto Label_711; // 0x2b7 JumpB
	var_317_string = ""; // 0x2b8 PushV
	var_317_string = "Sly"; // 0x2b9 MovS
	func_198(var_8_bool, var_317_string); // 0x2ba NEW_2
	var_318_int = 514362; // 0x2bc PushI
	SetMessage(var_318_int); // 0x2bd TObjFunc
	ClearReplies(); // 0x2bf TObjFunc
	var_319_int = 514363; // 0x2c1 PushI
	var_320_int = 15587; // 0x2c2 PushI
	var_321_int = 15586; // 0x2c3 PushI
	AddReply(var_319_int, var_320_int, var_321_int); // 0x2c4 TObjFunc
	return 0; // 0x2c6 Return
	
Label_711:
	var_322_int = 15587; // 0x2c7 PushI
	var_323_bool = var_7_cvector == var_322_int; // 0x2c8 Eq
	if(var_323_bool == 0) goto Label_739; // 0x2c9 JumpB
	var_324_string = ""; // 0x2ca PushV
	var_324_string = "Sly"; // 0x2cb MovS
	func_198(var_8_bool, var_324_string); // 0x2cc NEW_2
	var_325_int = 514364; // 0x2ce PushI
	SetMessage(var_325_int); // 0x2cf TObjFunc
	ClearReplies(); // 0x2d1 TObjFunc
	var_326_int = 514365; // 0x2d3 PushI
	var_327_int = 15589; // 0x2d4 PushI
	var_328_int = 15588; // 0x2d5 PushI
	AddReply(var_326_int, var_327_int, var_328_int); // 0x2d6 TObjFunc
	var_329_int = 538683; // 0x2d8 PushI
	var_330_int = 40586; // 0x2d9 PushI
	var_331_int = 40585; // 0x2da PushI
	AddReply(var_329_int, var_330_int, var_331_int); // 0x2db TObjFunc
	var_332_int = 539687; // 0x2dd PushI
	var_333_int = 41639; // 0x2de PushI
	var_334_int = 41638; // 0x2df PushI
	AddReply(var_332_int, var_333_int, var_334_int); // 0x2e0 TObjFunc
	return 0; // 0x2e2 Return
	
Label_739:
	var_335_int = 41639; // 0x2e3 PushI
	var_336_bool = var_7_cvector == var_335_int; // 0x2e4 Eq
	if(var_336_bool == 0) goto Label_757; // 0x2e5 JumpB
	var_337_string = ""; // 0x2e6 PushV
	var_337_string = "Neutral"; // 0x2e7 MovS
	func_198(var_8_bool, var_337_string); // 0x2e8 NEW_2
	var_338_int = 539688; // 0x2ea PushI
	SetMessage(var_338_int); // 0x2eb TObjFunc
	ClearReplies(); // 0x2ed TObjFunc
	var_339_int = 539689; // 0x2ef PushI
	var_340_int = 15589; // 0x2f0 PushI
	var_341_int = 41640; // 0x2f1 PushI
	AddReply(var_339_int, var_340_int, var_341_int); // 0x2f2 TObjFunc
	return 0; // 0x2f4 Return
	
Label_757:
	var_342_int = 40586; // 0x2f5 PushI
	var_343_bool = var_7_cvector == var_342_int; // 0x2f6 Eq
	if(var_343_bool == 0) goto Label_775; // 0x2f7 JumpB
	var_344_string = ""; // 0x2f8 PushV
	var_344_string = "Sly"; // 0x2f9 MovS
	func_198(var_8_bool, var_344_string); // 0x2fa NEW_2
	var_345_int = 538684; // 0x2fc PushI
	SetMessage(var_345_int); // 0x2fd TObjFunc
	ClearReplies(); // 0x2ff TObjFunc
	var_346_int = 538686; // 0x301 PushI
	var_347_int = 40589; // 0x302 PushI
	var_348_int = 40588; // 0x303 PushI
	AddReply(var_346_int, var_347_int, var_348_int); // 0x304 TObjFunc
	return 0; // 0x306 Return
	
Label_775:
	var_349_int = 40589; // 0x307 PushI
	var_350_bool = var_7_cvector == var_349_int; // 0x308 Eq
	if(var_350_bool == 0) goto Label_793; // 0x309 JumpB
	var_351_string = ""; // 0x30a PushV
	var_351_string = "Sly"; // 0x30b MovS
	func_198(var_8_bool, var_351_string); // 0x30c NEW_2
	var_352_int = 538687; // 0x30e PushI
	SetMessage(var_352_int); // 0x30f TObjFunc
	ClearReplies(); // 0x311 TObjFunc
	var_353_int = 538688; // 0x313 PushI
	var_354_int = 40591; // 0x314 PushI
	var_355_int = 40590; // 0x315 PushI
	AddReply(var_353_int, var_354_int, var_355_int); // 0x316 TObjFunc
	return 0; // 0x318 Return
	
Label_793:
	var_356_int = 40591; // 0x319 PushI
	var_357_bool = var_7_cvector == var_356_int; // 0x31a Eq
	if(var_357_bool == 0) goto Label_816; // 0x31b JumpB
	var_358_string = ""; // 0x31c PushV
	var_358_string = "Neutral"; // 0x31d MovS
	func_198(var_8_bool, var_358_string); // 0x31e NEW_2
	var_359_int = 538689; // 0x320 PushI
	SetMessage(var_359_int); // 0x321 TObjFunc
	ClearReplies(); // 0x323 TObjFunc
	var_360_int = 538690; // 0x325 PushI
	var_361_int = 15589; // 0x326 PushI
	var_362_int = 40592; // 0x327 PushI
	AddReply(var_360_int, var_361_int, var_362_int); // 0x328 TObjFunc
	var_363_int = 539690; // 0x32a PushI
	var_364_int = -1; // 0x32b PushI
	var_365_int = 41642; // 0x32c PushI
	AddReply(var_363_int, var_364_int, var_365_int); // 0x32d TObjFunc
	return 0; // 0x32f Return
	
Label_816:
	var_366_int = 15589; // 0x330 PushI
	var_367_bool = var_7_cvector == var_366_int; // 0x331 Eq
	if(var_367_bool == 0) goto Label_839; // 0x332 JumpB
	var_368_string = ""; // 0x333 PushV
	var_368_string = "Saveyouall"; // 0x334 MovS
	func_198(var_8_bool, var_368_string); // 0x335 NEW_2
	var_369_int = 514366; // 0x337 PushI
	SetMessage(var_369_int); // 0x338 TObjFunc
	ClearReplies(); // 0x33a TObjFunc
	var_370_int = 514367; // 0x33c PushI
	var_371_int = -1; // 0x33d PushI
	var_372_int = 15590; // 0x33e PushI
	AddReply(var_370_int, var_371_int, var_372_int); // 0x33f TObjFunc
	var_373_int = 538685; // 0x341 PushI
	var_374_int = -1; // 0x342 PushI
	var_375_int = 40587; // 0x343 PushI
	AddReply(var_373_int, var_374_int, var_375_int); // 0x344 TObjFunc
	return 0; // 0x346 Return
	
Label_839:
	var_3_string = 1; // 0x347 TMovB
	var_376_bool = 0; // 0x348 PushV
	func_1764(var_376_bool); // 0x349 NEW_2
	if(var_376_bool == 0) goto Label_847; // 0x34b JumpB
	lshStopAnimation(); // 0x34c Func
	goto Label_849; // 0x34e Jump
	
Label_849:
	return 0; // 0x351 Return
	
Label_847:
	StopAnimation(); // 0x34f Func
	
Label_851:
	return 0; // 0x353 Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x360 PushV
	var_10_string = "cleanup"; // 0x361 PushS
	var_11_bool = var_7_string == var_10_string; // 0x362 Eq
	if(var_11_bool == 0) goto Label_879; // 0x363 JumpB
	var_1_object = 1; // 0x364 TMovB
	IsLoaded(var_9_bool); // 0x365 Func
	var_12_bool = var_9_bool == 0; // 0x367 Not
	if(var_12_bool == 0) goto Label_878; // 0x368 JumpB
	var_13_object = Obj(); // 0x369 PushV
	func_1463(var_13_object); // 0x36a NEW_2
	RemoveActor(var_13_object); // 0x36c Func
	
Label_878:
	goto Label_883; // 0x36e Jump
	
Label_883:
	return 2; // 0x373 Return
	
Label_879:
	var_16_string = "restore"; // 0x36f PushS
	var_17_bool = var_7_string == var_16_string; // 0x370 Eq
	if(var_17_bool == 0) goto Label_883; // 0x371 JumpB
	var_1_object = 0; // 0x372 TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x374 PushT
	if(var_7_object == 0) goto Label_893; // 0x375 JumpB
	var_8_object = Obj(); // 0x376 PushV
	func_1463(var_8_object); // 0x377 NEW_2
	RemoveActor(var_8_object); // 0x379 Func
	Hold(); // 0x37b Func
	
Label_893:
	func_1008(); // 0x37e NEW_2
	return 0; // 0x380 Return
}


task_2_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_1023(); // 0x382 NEW_2
	return 0; // 0x384 Return
}


task_2_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x3cb PushI
	var_9_bool = var_7_int == var_8_int; // 0x3cc Eq
	if(var_9_bool == 0) goto Label_1007; // 0x3cd JumpB
	func_966(); // 0x3cf NEW_2
	var_11_bool = 0; // 0x3d1 PushV
	var_11_bool = 0; // 0x3d2 MovB
	var_12_bool = 0; // 0x3d3 PushV
	func_1180(var_12_bool); // 0x3d4 NEW_2
	if(var_12_bool == 0) goto Label_988; // 0x3d6 JumpB
	var_15_bool = 0; // 0x3d7 PushV
	func_935(var_15_bool); // 0x3d8 NEW_2
	if(var_15_bool == 0) goto Label_988; // 0x3da JumpB
	var_11_bool = 1; // 0x3db MovB
	
Label_988:
	if(var_11_bool == 0) goto Label_1001; // 0x3dc JumpB
	var_32_bool = 0; // 0x3dd PushV
	func_915(var_32_bool); // 0x3de NEW_2
	if(var_32_bool == 0) goto Label_1000; // 0x3e0 JumpB
	var_51_bool = 0; var_52_object = Obj(); // 0x3e1 PushV
	var_53_object = Obj(); // 0x3e2 PushV
	func_1463(var_53_object); // 0x3e3 NEW_2
	var_52_object = var_53_object; // 0x3e4 Mov
	func_1330(var_52_object); // 0x3e6 NEW_2
	
Label_1000:
	goto Label_1007; // 0x3e8 Jump
	
Label_1007:
	return 0; // 0x3ef Return
	
Label_1001:
	func_930(var_7_int); // 0x3ea NEW_2
	func_957(); // 0x3ed NEW_2
}


task_2_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x40d Push
	if(var_8_bool == 0) goto Label_1043; // 0x40e JumpB
	func_957(); // 0x410 NEW_2
	goto Label_1047; // 0x412 Jump
	
Label_1047:
	return 0; // 0x417 Return
	
Label_1043:
	var_14_string = ""; // 0x413 PushV
	var_14_string = "Neutral"; // 0x414 MovS
	func_1410(var_14_string); // 0x415 NEW_2
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x418 PushV
	IsOverrideActive(var_9_bool); // 0x419 Func
	var_10_bool = var_9_bool == 0; // 0x41b Not
	if(var_10_bool == 0) goto Label_1076; // 0x41c JumpB
	EventDisable(0); // 0x41d EventDisable
	func_1148(); // 0x41f NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x421 PushV
	var_12_object = var_7_object; // 0x422 Mov
	func_1171(var_12_object); // 0x423 NEW_2
	EventEnable(0); // 0x425 EventEnable
	var_25_object = Obj(); // 0x426 PushV
	var_25_object = var_7_object; // 0x427 Mov
	func_852(var_25_object); // 0x428 NEW_2
	var_296_string = ""; // 0x42a PushV
	var_296_string = "Neutral"; // 0x42b MovS
	func_1410(var_296_string); // 0x42c NEW_2
	func_966(); // 0x42f NEW_2
	func_957(); // 0x432 NEW_2
	
Label_1076:
	return 2; // 0x434 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_901(var_6_bool); // 0x35d NEW_2
	return 0; // 0x35f Return
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_1185(var_38_object, var_39_float); // 0x5 NEW_2
	var_84_bool = var_37_bool == 0; // 0x7 Not
	if(var_84_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_85_int = 0; // 0xd PushV
	func_1758(var_85_int); // 0xe NEW_2
	SetNPCName(var_85_int); // 0x10 ObjFunc
	var_86_int = 0; // 0x12 PushV
	func_1756(var_86_int); // 0x13 NEW_2
	SetNPCDescription(var_86_int); // 0x15 ObjFunc
	var_87_string = ""; // 0x17 PushV
	func_1760(var_87_string); // 0x18 NEW_2
	SetPhoto(var_87_string); // 0x1a ObjFunc
	var_88_string = ""; // 0x1c PushV
	func_1762(var_88_string); // 0x1d NEW_2
	SetPhoto2(var_88_string); // 0x1f ObjFunc
	var_89_int = 0; // 0x21 PushV
	func_1739(var_89_int); // 0x22 NEW_2
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
	func_1463(var_100_object); // 0x31 NEW_2
	var_99_object = var_100_object; // 0x32 Mov
	func_1272(var_98_bool, var_99_object); // 0x34 NEW_2
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
	func_1254(); // 0x48 NEW_2
	StopDialog(var_33_object); // 0x4a Func
	GetReturnValue(var_35_int); // 0x4c ObjFunc
	var_26_int = var_35_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1153(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x481 PushV
	GetPosition(var_27_cvector); // 0x482 Func
	GetPosition(var_28_cvector); // 0x484 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x486 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x487 Or2
	return 6; // 0x488 Return
}


func_1410(var_238_string)
{
	var_239_bool = 0; var_240_float = 0; var_241_float = 0; var_242_bool = 0; var_243_float = 0; var_244_float = 0; // 0x582 PushV
	lshHasAnimation(var_242_bool, var_238_string); // 0x583 Func
	var_245_bool = var_242_bool; // 0x585 Push
	if(var_245_bool == 0) goto Label_1421; // 0x586 JumpB
	lshGetAnimTimes(var_238_string, var_243_float, var_244_float); // 0x587 Func
	var_246_bool = 0; // 0x589 PushB
	lshPlayAnimation(var_243_float, var_244_float, var_246_bool); // 0x58a Func
	goto Label_1425; // 0x58c Jump
	
Label_1425:
	return 6; // 0x591 Return
	
Label_1421:
	var_247_string = "Can't find lsh animation : "; // 0x58d PushS
	var_248_int = var_247_string + var_238_string; // 0x58e Add
	Trace(var_248_int); // 0x58f Func
}


func_1537(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x601 PushV
	var_34_string = "idle"; // 0x602 MovS
	var_35_int = var_32_int; // 0x603 Push
	if(var_35_int == 0) goto Label_1542; // 0x604 JumpB
	var_34_string = var_34_string + var_32_int; // 0x605 Add2
	
Label_1542:
	var_31_string = var_34_string; // 0x606 Mov
	return 2; // 0x607 Return
}


func_1272(var_98_bool, var_99_object)
{
	var_103_int = 0; var_104_int = 0; var_105_int = 0; var_106_int = 0; // 0x4f8 PushV
	var_107_string = "voice_common"; // 0x4f9 PushS
	GetVariable(var_107_string, var_105_int); // 0x4fa Func
	var_108_int = var_105_int; // 0x4fc Push
	if(var_108_int == 0) goto Label_1310; // 0x4fd JumpB
	var_109_bool = 0; var_110_object = Obj(); // 0x4fe PushV
	var_110_object = var_99_object; // 0x4ff Mov
	func_1330(var_110_object); // 0x500 NEW_2
	var_139_bool = var_109_bool == 0; // 0x502 Not
	if(var_139_bool == 0) goto Label_1292; // 0x503 JumpB
	var_140_bool = 0; var_141_object = Obj(); // 0x504 PushV
	var_141_object = var_99_object; // 0x505 Mov
	func_1367(var_141_object); // 0x506 NEW_2
	var_175_bool = var_140_bool == 0; // 0x508 Not
	if(var_175_bool == 0) goto Label_1292; // 0x509 JumpB
	var_98_bool = 0; // 0x50a MovB
	return 4; // 0x50b Return
	
Label_1292:
	var_176_int = 2; // 0x50c PushI
	irand(var_106_int, var_176_int); // 0x50d Func
	var_177_int = var_106_int; // 0x50f Push
	if(var_177_int == 0) goto Label_1305; // 0x510 JumpB
	var_178_string = "voice_common"; // 0x511 PushS
	var_179_int = 1; // 0x512 PushI
	var_180_int = var_105_int + var_179_int; // 0x513 Add
	var_181_int = 3; // 0x514 PushI
	var_182_int = var_180_int / var_181_int; // 0x515 Mod
	SetVariable(var_178_string, var_182_int); // 0x516 Func
	goto Label_1309; // 0x518 Jump
	
Label_1309:
	goto Label_1328; // 0x51d Jump
	
Label_1328:
	var_98_bool = 1; // 0x530 MovB
	return 4; // 0x531 Return
	
Label_1305:
	var_183_string = "voice_common"; // 0x519 PushS
	var_184_int = 0; // 0x51a PushI
	SetVariable(var_183_string, var_184_int); // 0x51b Func
	
Label_1310:
	var_185_bool = 0; var_186_object = Obj(); // 0x51e PushV
	var_186_object = var_99_object; // 0x51f Mov
	func_1367(var_186_object); // 0x520 NEW_2
	var_187_bool = var_185_bool == 0; // 0x522 Not
	if(var_187_bool == 0) goto Label_1324; // 0x523 JumpB
	var_188_bool = 0; var_189_object = Obj(); // 0x524 PushV
	var_189_object = var_99_object; // 0x525 Mov
	func_1330(var_189_object); // 0x526 NEW_2
	var_190_bool = var_188_bool == 0; // 0x528 Not
	if(var_190_bool == 0) goto Label_1324; // 0x529 JumpB
	var_98_bool = 0; // 0x52a MovB
	return 4; // 0x52b Return
	
Label_1324:
	var_191_string = "voice_common"; // 0x52c PushS
	var_192_int = 1; // 0x52d PushI
	SetVariable(var_191_string, var_192_int); // 0x52e Func
}


func_901(var_0_object)
{
	var_7_bool = 0; // 0x385 PushV
	func_1180(var_7_bool); // 0x386 NEW_2
	var_10_bool = var_7_bool == 0; // 0x388 Not
	if(var_10_bool == 0) goto Label_908; // 0x389 JumpB
	Hold(); // 0x38a Func
	
Label_908:
	GetDirection(var_0_object); // 0x38c Func
	
Label_910:
	func_1077(); // 0x38f NEW_2
	goto Label_910; // 0x391 Jump
}


func_1544(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x608 PushV
	var_28_int = 0; // 0x609 MovI
	
Label_1546:
	var_30_string = "all"; // 0x60a PushS
	var_31_string = ""; var_32_int = 0; // 0x60b PushV
	var_32_int = var_28_int; // 0x60c Mov
	func_1537(var_31_string, var_32_int); // 0x60d NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x60f Func
	var_36_bool = var_29_bool == 0; // 0x611 Not
	if(var_36_bool == 0) goto Label_1556; // 0x612 JumpB
	goto Label_1559; // 0x613 Jump
	
Label_1559:
	var_25_int = var_28_int; // 0x617 Mov
	return 4; // 0x618 Return
	
Label_1556:
	var_37_int = 1; // 0x614 PushI
	var_28_int = var_28_int + var_37_int; // 0x615 Add2
	goto Label_1546; // 0x616 Jump
}


func_1161(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x489 PushV
	GetPosition(var_20_cvector); // 0x48a Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x48c Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x48d PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x48e PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x48f Func
	var_15_bool = var_22_bool; // 0x491 Mov
	return 6; // 0x492 Return
}


func_1672()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x688 PushV
	var_85_int = 690; // 0x689 PushI
	var_86_int = 2; // 0x68a PushI
	var_87_int = 534538; // 0x68b PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0x68c Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0x68e PushV
	var_89_object = var_84_object; // 0x68f Mov
	var_90_int = 686; // 0x690 MovI
	func_1711(var_88_bool, var_89_object, var_90_int); // 0x691 NEW_2
	return 2; // 0x693 Return
}


func_1426(var_216_string, var_217_bool)
{
	var_220_bool = 0; var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_float = 0; var_225_float = 0; // 0x592 PushV
	lshHasAnimation(var_223_bool, var_216_string); // 0x593 Func
	var_226_bool = var_223_bool; // 0x595 Push
	if(var_226_bool == 0) goto Label_1436; // 0x596 JumpB
	lshGetAnimTimes(var_216_string, var_224_float, var_225_float); // 0x597 Func
	lshPlayAnimation(var_224_float, var_225_float, var_217_bool); // 0x599 Func
	goto Label_1440; // 0x59b Jump
	
Label_1440:
	return 6; // 0x5a0 Return
	
Label_1436:
	var_227_string = "Can't find lsh animation : "; // 0x59c PushS
	var_228_int = var_227_string + var_216_string; // 0x59d Add
	Trace(var_228_int); // 0x59e Func
}


func_1171(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x493 PushV
	GetPosition(var_14_cvector); // 0x494 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x496 PushV
	var_16_cvector = var_14_cvector; // 0x497 Mov
	func_1161(var_15_bool, var_16_cvector); // 0x498 NEW_2
	var_11_bool = var_15_bool; // 0x499 Mov
	return 2; // 0x49b Return
}


func_915(var_32_bool)
{
	var_33_object = Obj(); var_34_object = Obj(); // 0x393 PushV
	var_35_string = "player"; // 0x394 PushS
	FindActor(var_34_object, var_35_string); // 0x395 Func
	var_36_bool = var_34_object == 0; // 0x397 Not
	if(var_36_bool == 0) goto Label_923; // 0x398 JumpB
	var_32_bool = 0; // 0x399 MovB
	return 2; // 0x39a Return
	
Label_923:
	var_37_bool = 0; var_38_object = Obj(); // 0x39b PushV
	var_38_object = var_34_object; // 0x39c Mov
	func_1171(var_38_object); // 0x39d NEW_2
	var_32_bool = var_37_bool; // 0x39e Mov
	return 2; // 0x3a0 Return
}


func_1685()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x695 PushV
	var_25_int = 689; // 0x696 PushI
	var_26_int = 2; // 0x697 PushI
	var_27_int = 534537; // 0x698 PushI
	CreateDiaryEntry(var_24_object, var_25_int, var_26_int, var_27_int); // 0x699 Func
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; // 0x69b PushV
	var_29_object = var_24_object; // 0x69c Mov
	var_30_int = 686; // 0x69d MovI
	func_1711(var_28_bool, var_29_object, var_30_int); // 0x69e NEW_2
	return 2; // 0x6a0 Return
}


func_1561(var_19_object)
{
	var_21_string = "d11q06KlaraRing"; // 0x61a PushS
	var_22_int = 1; // 0x61b PushI
	SetVariable(var_21_string, var_22_int); // 0x61c Func
	func_1685(); // 0x61f NEW_2
	var_46_string = "d11q06KlaraRing is given"; // 0x621 PushS
	Trace(var_46_string); // 0x622 Func
	var_47_object = Obj(); var_48_string = ""; var_49_int = 0; // 0x624 PushV
	var_47_object = var_19_object; // 0x625 Mov
	var_48_string = "d11q06KlaraRing"; // 0x626 MovS
	var_49_int = 1; // 0x627 MovI
	func_1515(var_47_object, var_48_string, var_49_int); // 0x628 NEW_2
	return 0; // 0x62a Return
}


func_1180(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x49c PushV
	IsLoaded(var_9_bool); // 0x49d Func
	var_7_bool = var_9_bool; // 0x49f Mov
	return 2; // 0x4a0 Return
}


func_1660(var_200_bool)
{
	var_202_int = 0; var_203_string = ""; // 0x67d PushV
	var_203_string = "ood11Klara1"; // 0x67e MovS
	func_1479(var_202_int, var_203_string); // 0x67f NEW_2
	var_206_int = 0; // 0x681 PushI
	var_207_bool = var_202_int == var_206_int; // 0x682 Eq
	if(var_207_bool == 0) goto Label_1670; // 0x683 JumpB
	var_200_bool = 1; // 0x684 MovB
	return 0; // 0x685 Return
	
Label_1670:
	var_200_bool = 0; // 0x686 MovB
	return 0; // 0x687 Return
}


func_1185(var_37_bool, var_39_float)
{
	var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_bool = 0; // 0x4a1 PushV
	GetPosition(var_50_cvector); // 0x4a2 ObjFunc
	GetEyesHeight(var_49_float); // 0x4a4 ObjFunc
	var_58_float = GetByIndex(var_50_cvector, 1); // 0x4a6 PushE
	var_58_float = var_58_float + var_49_float; // 0x4a7 Add2
	SetByIndex(var_50_cvector, 1) = var_58_float; // 0x4a8 PopE
	GetPosition(var_51_cvector); // 0x4a9 Func
	GetEyesHeight(var_49_float); // 0x4ab Func
	var_59_float = GetByIndex(var_51_cvector, 1); // 0x4ad PushE
	var_59_float = var_59_float + var_49_float; // 0x4ae Add2
	SetByIndex(var_51_cvector, 1) = var_59_float; // 0x4af PopE
	var_52_cvector = var_50_cvector - var_51_cvector; // 0x4b0 Sub2
	var_60_float = GetByIndex(var_52_cvector, 1); // 0x4b1 PushE
	var_60_float = 0; // 0x4b2 MovI
	SetByIndex(var_52_cvector, 1) = var_60_float; // 0x4b3 PopE
	var_61_int = var_52_cvector | var_52_cvector; // 0x4b4 Or
	var_62_float = sqrt(var_61_int); // 0x4b5 Sqrt
	var_52_cvector = var_52_cvector / var_52_cvector; // 0x4b6 Div2
	var_53_cvector = -var_52_cvector; // 0x4b7 Neg2
	var_63_float = var_52_cvector * var_39_float; // 0x4b8 Mult
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); // 0x4b9 PushV
	var_66_cvector = CVector(0.0, 1.0, 0.0); // 0x4ba PushVec
	var_65_cvector = var_53_cvector ^ var_66_cvector; // 0x4bb Xor2
	func_1469(var_64_cvector, var_65_cvector); // 0x4bc NEW_2
	var_72_int = 25; // 0x4be PushI
	var_73_float = var_64_cvector * var_72_int; // 0x4bf Mult
	var_74_int = var_63_float + var_73_float; // 0x4c0 Add
	var_75_cvector = CVector(0.0, 10.0, 0.0); // 0x4c1 PushVec
	var_54_cvector = var_74_int - var_75_cvector; // 0x4c2 Sub2
	var_55_cvector = var_51_cvector + var_54_cvector; // 0x4c3 Add2
	IsOverrideActive(var_56_bool); // 0x4c4 Func
	var_76_bool = var_56_bool; // 0x4c6 Push
	if(var_76_bool == 0) goto Label_1226; // 0x4c7 JumpB
	var_37_bool = 0; // 0x4c8 MovB
	return 18; // 0x4c9 Return
	
Label_1226:
	StopWorld(); // 0x4ca Func
	var_77_bool = 1; // 0x4cc PushB
	CameraTransit(var_55_cvector, var_53_cvector, var_77_bool); // 0x4cd Func
	var_78_float = GetByIndex(var_54_cvector, 0); // 0x4cf PushE
	var_79_float = GetByIndex(var_54_cvector, 2); // 0x4d0 PushE
	Rotate(var_78_float, var_79_float); // 0x4d1 Func
	var_80_bool = 0; // 0x4d3 PushV
	func_1764(var_80_bool); // 0x4d4 NEW_2
	if(var_80_bool == 0) goto Label_1240; // 0x4d6 JumpB
	goto Label_1248; // 0x4d7 Jump
	
Label_1248:
	CameraWaitForPlayFinish(); // 0x4e0 Func
	ResumeWorld(); // 0x4e2 Func
	var_37_bool = 1; // 0x4e4 MovB
	return 18; // 0x4e5 Return
	
Label_1240:
	var_81_string = "head"; // 0x4d8 PushS
	HasAnimationTrack(var_57_bool, var_81_string); // 0x4d9 Func
	var_82_bool = var_57_bool; // 0x4db Push
	if(var_82_bool == 0) goto Label_1248; // 0x4dc JumpB
	var_83_string = "head"; // 0x4dd PushS
	LookAsyncCamera(var_83_string); // 0x4de Func
}


func_930(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x3a2 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x3a3 PushE
	RotateAsync(var_84_float, var_85_float); // 0x3a4 Func
	return 0; // 0x3a6 Return
}


func_1441(var_132_bool, var_133_string)
{
	var_134_bool = 0; var_135_bool = 0; // 0x5a1 PushV
	var_136_bool = 0; // 0x5a2 PushV
	func_1764(var_136_bool); // 0x5a3 NEW_2
	if(var_136_bool == 0) goto Label_1454; // 0x5a5 JumpB
	lshHasSpeech(var_135_bool, var_133_string); // 0x5a6 Func
	var_137_bool = var_135_bool; // 0x5a8 Push
	if(var_137_bool == 0) goto Label_1454; // 0x5a9 JumpB
	lshPlaySpeech(var_133_string); // 0x5aa Func
	var_132_bool = 1; // 0x5ac MovB
	return 2; // 0x5ad Return
	
Label_1454:
	var_132_bool = 0; // 0x5ae MovB
	return 2; // 0x5af Return
}


func_1698(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x6a2 PushV
	GetDiaryRoot(var_39_object); // 0x6a3 Func
	var_40_bool = var_39_object == 0; // 0x6a5 Not
	if(var_40_bool == 0) goto Label_1708; // 0x6a6 JumpB
	var_41_string = "Can't retrieve diary root"; // 0x6a7 PushS
	Trace(var_41_string); // 0x6a8 Func
	var_37_object = 0; // 0x6aa MovB
	return 2; // 0x6ab Return
	
Label_1708:
	var_37_object = var_39_object; // 0x6ac Mov
	return 2; // 0x6ad Return
}


func_935(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x3a7 PushV
	var_20_string = "player"; // 0x3a8 PushS
	FindActor(var_18_object, var_20_string); // 0x3a9 Func
	var_21_bool = var_18_object == 0; // 0x3ab Not
	if(var_21_bool == 0) goto Label_943; // 0x3ac JumpB
	var_15_bool = 0; // 0x3ad MovB
	return 4; // 0x3ae Return
	
Label_943:
	var_22_float = 0; var_23_object = Obj(); // 0x3af PushV
	var_23_object = var_18_object; // 0x3b0 Mov
	func_1153(var_23_object); // 0x3b1 NEW_2
	var_30_float = 90000.0; // 0x3b3 PushF
	var_31_bool = var_22_float > var_30_float; // 0x3b4 GT
	if(var_31_bool == 0) goto Label_952; // 0x3b5 JumpB
	var_15_bool = 0; // 0x3b6 MovB
	return 4; // 0x3b7 Return
	
Label_952:
	CanSee(var_19_bool, var_18_object); // 0x3b8 Func
	var_15_bool = var_19_bool; // 0x3ba Mov
	return 4; // 0x3bb Return
}


func_1579()
{
	var_70_bool = 0; // 0x62c PushV
	var_70_bool = 0; // 0x62d MovB
	var_71_int = 0; var_72_string = ""; // 0x62e PushV
	var_72_string = "d11q06KapellaRing"; // 0x62f MovS
	func_1479(var_71_int, var_72_string); // 0x630 NEW_2
	var_75_int = 0; // 0x632 PushI
	var_76_bool = var_71_int != var_75_int; // 0x633 Neq
	if(var_76_bool == 0) goto Label_1597; // 0x634 JumpB
	var_77_int = 0; var_78_string = ""; // 0x635 PushV
	var_78_string = "d11q06KlaraRing"; // 0x636 MovS
	func_1479(var_77_int, var_78_string); // 0x637 NEW_2
	var_79_int = 0; // 0x639 PushI
	var_80_bool = var_77_int != var_79_int; // 0x63a Neq
	if(var_80_bool == 0) goto Label_1597; // 0x63b JumpB
	var_70_bool = 1; // 0x63c MovB
	
Label_1597:
	if(var_70_bool == 0) goto Label_1605; // 0x63d JumpB
	var_81_string = "d11q06"; // 0x63e PushS
	var_82_int = 2; // 0x63f PushI
	SetVariable(var_81_string, var_82_int); // 0x640 Func
	func_1672(); // 0x643 NEW_2
	
Label_1605:
	return 0; // 0x645 Return
}


func_1711(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x6af PushV
	var_37_object = Obj(); // 0x6b0 PushV
	func_1698(var_37_object); // 0x6b1 NEW_2
	var_34_object = var_37_object; // 0x6b2 Mov
	Find(var_30_int, var_35_object); // 0x6b4 ObjFunc
	var_42_bool = var_35_object == 0; // 0x6b6 Not
	if(var_42_bool == 0) goto Label_1726; // 0x6b7 JumpB
	var_43_string = "Can't find diary parent with id: "; // 0x6b8 PushS
	var_44_int = var_43_string + var_30_int; // 0x6b9 Add
	Trace(var_44_int); // 0x6ba Func
	var_28_bool = 0; // 0x6bc MovB
	return 6; // 0x6bd Return
	
Label_1726:
	AddChild(var_29_object); // 0x6be ObjFunc
	var_45_int = 7; // 0x6c0 PushI
	SendWorldWndMessage(var_45_int); // 0x6c1 Func
	GetCategory(var_36_int); // 0x6c3 ObjFunc
	SetDiarySection(var_36_int); // 0x6c5 Func
	var_28_bool = 0; // 0x6c7 MovB
	return 6; // 0x6c8 Return
}


func_1456()
{
	var_10_bool = 0; // 0x5b0 PushV
	func_1764(var_10_bool); // 0x5b1 NEW_2
	if(var_10_bool == 0) goto Label_1462; // 0x5b3 JumpB
	lshStopSpeech(); // 0x5b4 Func
	
Label_1462:
	return 0; // 0x5b6 Return
}


func_1330(var_109_bool)
{
	var_111_string = ""; var_112_int = 0; var_113_bool = 0; var_114_int = 0; var_115_string = ""; var_116_string = ""; var_117_int = 0; var_118_bool = 0; var_119_int = 0; var_120_string = ""; // 0x532 PushV
	var_116_string = "c"; // 0x533 MovS
	var_117_int = 0; // 0x534 MovI
	
Label_1333:
	var_121_int = 1; // 0x535 PushI
	if(var_121_int == 0) goto Label_1346; // 0x536 JumpB
	var_122_int = 1; // 0x537 PushI
	var_123_int = var_117_int + var_122_int; // 0x538 Add
	var_124_int = var_116_string + var_123_int; // 0x539 Add
	HasProperty(var_124_int, var_118_bool); // 0x53a ObjFunc
	var_125_bool = var_118_bool == 0; // 0x53c Not
	if(var_125_bool == 0) goto Label_1343; // 0x53d JumpB
	goto Label_1346; // 0x53e Jump
	
Label_1346:
	var_126_bool = var_117_int == 0; // 0x542 Not
	if(var_126_bool == 0) goto Label_1350; // 0x543 JumpB
	var_109_bool = 0; // 0x544 MovB
	return 10; // 0x545 Return
	
Label_1350:
	var_119_int = 0; // 0x546 MovI
	var_127_int = 1; // 0x547 PushI
	var_128_bool = var_117_int > var_127_int; // 0x548 GT
	if(var_128_bool == 0) goto Label_1356; // 0x549 JumpB
	irand(var_119_int, var_117_int); // 0x54a Func
	
Label_1356:
	var_129_int = 1; // 0x54c PushI
	var_130_int = var_119_int + var_129_int; // 0x54d Add
	var_131_int = var_116_string + var_130_int; // 0x54e Add
	GetProperty(var_131_int, var_120_string); // 0x54f ObjFunc
	var_132_bool = 0; var_133_string = ""; // 0x551 PushV
	var_133_string = var_120_string; // 0x552 Mov
	func_1441(var_132_bool, var_133_string); // 0x553 NEW_2
	var_109_bool = var_132_bool; // 0x554 Mov
	return 10; // 0x556 Return
	
Label_1343:
	var_138_int = 1; // 0x53f PushI
	var_117_int = var_117_int + var_138_int; // 0x540 Add2
	goto Label_1333; // 0x541 Jump
}


func_1077()
{
	var_11_int = 0; var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; // 0x435 PushV
	WaitForAnimEnd(); // 0x436 Func
	var_23_bool = 0; // 0x438 PushV
	func_1180(var_23_bool); // 0x439 NEW_2
	var_24_bool = var_23_bool == 0; // 0x43b Not
	if(var_24_bool == 0) goto Label_1086; // 0x43c JumpB
	return 12; // 0x43d Return
	
Label_1086:
	var_25_int = 0; // 0x43e PushV
	func_1544(var_25_int); // 0x43f NEW_2
	var_17_int = var_25_int; // 0x440 Mov
	var_18_int = 0; // 0x442 MovI
	
Label_1091:
	var_38_bool = 0; // 0x443 PushV
	var_38_bool = 0; // 0x444 MovB
	var_39_int = 5; // 0x445 PushI
	var_40_bool = var_18_int < var_39_int; // 0x446 LT
	if(var_40_bool == 0) goto Label_1101; // 0x447 JumpB
	var_41_bool = 0; // 0x448 PushV
	func_1180(var_41_bool); // 0x449 NEW_2
	if(var_41_bool == 0) goto Label_1101; // 0x44b JumpB
	var_38_bool = 1; // 0x44c MovB
	
Label_1101:
	if(var_38_bool == 0) goto Label_1143; // 0x44d JumpB
	var_42_bool = var_17_int == 0; // 0x44e Not
	if(var_42_bool == 0) goto Label_1111; // 0x44f JumpB
	var_43_int = 3; // 0x450 PushI
	Sleep(var_43_int, var_19_bool); // 0x451 Func
	var_44_bool = var_19_bool == 0; // 0x453 Not
	if(var_44_bool == 0) goto Label_1110; // 0x454 JumpB
	goto Label_1143; // 0x455 Jump
	
Label_1143:
	ResetAAS(); // 0x477 Func
	return 12; // 0x479 Return
	
Label_1110:
	goto Label_1132; // 0x456 Jump
	
Label_1132:
	var_45_bool = 0; // 0x46c PushV
	func_1146(var_45_bool); // 0x46d NEW_2
	var_46_bool = var_45_bool == 0; // 0x46f Not
	if(var_46_bool == 0) goto Label_1138; // 0x470 JumpB
	goto Label_1143; // 0x471 Jump
	
Label_1138:
	ResetAAS(); // 0x472 Func
	var_47_int = 1; // 0x474 PushI
	var_18_int = var_18_int + var_47_int; // 0x475 Add2
	goto Label_1091; // 0x476 Jump
	
Label_1111:
	irand(var_20_int, var_17_int); // 0x457 Func
	var_48_int = 5; // 0x459 PushI
	irand(var_21_int, var_48_int); // 0x45a Func
	var_49_int = 0; // 0x45c PushI
	var_50_bool = var_21_int != var_49_int; // 0x45d Neq
	if(var_50_bool == 0) goto Label_1120; // 0x45e JumpB
	var_20_int = 0; // 0x45f MovI
	
Label_1120:
	var_51_string = "all"; // 0x460 PushS
	var_52_string = ""; var_53_int = 0; // 0x461 PushV
	var_53_int = var_20_int; // 0x462 Mov
	func_1537(var_52_string, var_53_int); // 0x463 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x465 Func
	WaitForAnimEnd(var_22_bool); // 0x467 Func
	var_54_bool = var_22_bool == 0; // 0x469 Not
	if(var_54_bool == 0) goto Label_1132; // 0x46a JumpB
	goto Label_1143; // 0x46b Jump
}


func_1463(var_100_object)
{
	var_101_object = Obj(); var_102_object = Obj(); // 0x5b7 PushV
	self(var_102_object); // 0x5b8 Func
	var_100_object = var_102_object; // 0x5ba Mov
	return 2; // 0x5bb Return
}


func_957()
{
	var_298_float = 0; var_299_float = 0; // 0x3bd PushV
	var_300_int = 8; // 0x3be PushI
	var_301_int = 16; // 0x3bf PushI
	rand(var_299_float, var_300_int, var_301_int); // 0x3c0 Func
	var_302_int = 10; // 0x3c2 PushI
	SetTimer(var_302_int, var_299_float); // 0x3c3 Func
	return 2; // 0x3c5 Return
}


func_1469(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x5bd PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x5be Or
	var_68_float = sqrt(var_69_int); // 0x5bf Sqrt2
	var_70_float = 0.0; // 0x5c0 PushF
	var_71_bool = var_68_float < var_70_float; // 0x5c1 LT
	if(var_71_bool == 0) goto Label_1477; // 0x5c2 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x5c3 MovV
	return 2; // 0x5c4 Return
	
Label_1477:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x5c5 Div2
	return 2; // 0x5c6 Return
}


func_198(var_2_object, var_212_string)
{
	var_213_bool = 0; // 0xc7 PushV
	func_1764(var_213_bool); // 0xc8 NEW_2
	var_214_bool = var_213_bool == 0; // 0xca Not
	if(var_214_bool == 0) goto Label_205; // 0xcb JumpB
	return 0; // 0xcc Return
	
Label_205:
	var_215_bool = var_212_string == var_2_object; // 0xcd Eq
	if(var_215_bool == 0) goto Label_208; // 0xce JumpB
	return 0; // 0xcf Return
	
Label_208:
	var_216_string = ""; var_217_bool = 0; // 0xd0 PushV
	var_216_string = var_212_string; // 0xd1 Mov
	var_218_string = ""; // 0xd2 PushS
	var_219_bool = var_212_string == var_218_string; // 0xd3 Eq
	if(var_219_bool == 0) goto Label_215; // 0xd4 JumpB
	var_217_bool = 0; // 0xd5 MovB
	goto Label_216; // 0xd6 Jump
	
Label_216:
	func_1426(var_216_string, var_217_bool); // 0xd8 NEW_2
	var_2_object = var_212_string; // 0xda TMov
	return 0; // 0xdb Return
	
Label_215:
	var_217_bool = 1; // 0xd7 MovB
}


func_1606()
{
	var_15_string = "ood11Klara2"; // 0x647 PushS
	var_16_int = 1; // 0x648 PushI
	SetVariable(var_15_string, var_16_int); // 0x649 Func
	return 0; // 0x64b Return
}


func_966()
{
	var_297_int = 10; // 0x3c6 PushI
	KillTimer(var_297_int); // 0x3c7 Func
	return 0; // 0x3c9 Return
}


func_1479(var_202_int, var_203_string)
{
	var_204_int = 0; var_205_int = 0; // 0x5c7 PushV
	GetVariable(var_203_string, var_205_int); // 0x5c8 Func
	var_202_int = var_205_int; // 0x5ca Mov
	return 2; // 0x5cb Return
}


func_1739(var_89_int)
{
	var_90_int = 0; var_91_int = 0; // 0x6cb PushV
	var_92_string = "branch"; // 0x6cc PushS
	GetVariable(var_92_string, var_91_int); // 0x6cd Func
	var_93_int = 0; // 0x6cf PushI
	var_94_bool = var_91_int == var_93_int; // 0x6d0 Eq
	if(var_94_bool == 0) goto Label_1749; // 0x6d1 JumpB
	var_89_int = 1; // 0x6d2 MovI
	return 2; // 0x6d3 Return
	
Label_1749:
	var_95_int = 1; // 0x6d5 PushI
	var_96_bool = var_91_int == var_95_int; // 0x6d6 Eq
	if(var_96_bool == 0) goto Label_1754; // 0x6d7 JumpB
	var_89_int = 2; // 0x6d8 MovI
	return 2; // 0x6d9 Return
	
Label_1754:
	var_89_int = 3; // 0x6da MovI
	return 2; // 0x6db Return
}


func_1612()
{
	var_95_string = "ood11Klara3"; // 0x64d PushS
	var_96_int = 1; // 0x64e PushI
	SetVariable(var_95_string, var_96_int); // 0x64f Func
	return 0; // 0x651 Return
}


func_1484(var_63_int, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x5cc PushV
	CreateIntVector(var_66_object); // 0x5cd Func
	add(var_63_int); // 0x5cf ObjFunc
	add(var_64_int); // 0x5d1 ObjFunc
	var_67_int = 3; // 0x5d3 PushI
	SendWorldWndMessage(var_67_int, var_66_object); // 0x5d4 Func
	return 2; // 0x5d6 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_193_object, var_194_object)
{
	var_0_object = var_194_object; // 0x52 TMov
	var_1_object = var_193_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_199_int = 1; // 0x55 PushI
	if(var_199_int == 0) goto Label_168; // 0x56 JumpB
	var_200_bool = 0; var_201_object = Obj(); // 0x57 PushV
	var_201_object = var_1_object; // 0x58 MovT
	func_1660(var_201_object); // 0x59 NEW_2
	if(var_200_bool == 0) goto Label_117; // 0x5b JumpB
	var_208_object = Obj(); var_209_object = Obj(); // 0x5c PushV
	var_208_object = var_1_object; // 0x5d MovT
	var_209_object = var_0_object; // 0x5e MovT
	func_1618(); // 0x5f NEW_2
	var_212_string = ""; // 0x61 PushV
	var_212_string = "Neutral"; // 0x62 MovS
	func_198(var_194_object, var_212_string); // 0x63 NEW_2
	var_229_int = 514350; // 0x65 PushI
	SetMessage(var_229_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_230_int = 514351; // 0x6a PushI
	var_231_int = 15575; // 0x6b PushI
	var_232_int = 15574; // 0x6c PushI
	AddReply(var_230_int, var_231_int, var_232_int); // 0x6d TObjFunc
	var_233_int = 538680; // 0x6f PushI
	var_234_int = 15575; // 0x70 PushI
	var_235_int = 40578; // 0x71 PushI
	AddReply(var_233_int, var_234_int, var_235_int); // 0x72 TObjFunc
	goto Label_168; // 0x74 Jump
	
Label_168:
	var_236_bool = 0; // 0xa8 PushV
	func_1764(var_236_bool); // 0xa9 NEW_2
	if(var_236_bool == 0) goto Label_183; // 0xab JumpB
	
Label_172:
	lshWaitForAnimEnd(); // 0xac Func
	var_237_string = var_3_string; // 0xae PushT
	if(var_237_string == 0) goto Label_177; // 0xaf JumpB
	goto Label_182; // 0xb0 Jump
	
Label_182:
	goto Label_197; // 0xb6 Jump
	
Label_197:
	return 0; // 0xc5 Return
	
Label_177:
	var_238_string = ""; // 0xb1 PushV
	var_238_string = var_2_object; // 0xb2 MovT
	func_1410(var_238_string); // 0xb3 NEW_2
	goto Label_172; // 0xb5 Jump
	
Label_183:
	var_249_string = "all"; // 0xb7 PushS
	var_250_string = "idle"; // 0xb8 PushS
	PlayAnimation(var_249_string, var_250_string); // 0xb9 Func
	
Label_187:
	WaitForAnimEnd(); // 0xbb Func
	var_251_string = var_3_string; // 0xbd PushT
	if(var_251_string == 0) goto Label_192; // 0xbe JumpB
	goto Label_197; // 0xbf Jump
	
Label_192:
	var_252_string = "all"; // 0xc0 PushS
	var_253_string = "idle"; // 0xc1 PushS
	PlayAnimation(var_252_string, var_253_string); // 0xc2 Func
	goto Label_187; // 0xc4 Jump
	
Label_117:
	var_254_string = ""; // 0x75 PushV
	var_254_string = "Saveyouall"; // 0x76 MovS
	func_198(var_194_object, var_254_string); // 0x77 NEW_2
	var_255_int = 514514; // 0x79 PushI
	SetMessage(var_255_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_256_bool = 0; // 0x7e PushV
	var_256_bool = 0; // 0x7f MovB
	var_257_bool = 0; var_258_object = Obj(); // 0x80 PushV
	var_258_object = var_1_object; // 0x81 MovT
	func_1624(var_258_object); // 0x82 NEW_2
	if(var_257_bool == 0) goto Label_139; // 0x84 JumpB
	var_263_bool = 0; var_264_object = Obj(); // 0x85 PushV
	var_264_object = var_1_object; // 0x86 MovT
	func_1636(var_264_object); // 0x87 NEW_2
	if(var_263_bool == 0) goto Label_139; // 0x89 JumpB
	var_256_bool = 1; // 0x8a MovB
	
Label_139:
	if(var_256_bool == 0) goto Label_145; // 0x8b JumpB
	var_269_int = 534506; // 0x8c PushI
	var_270_int = 40595; // 0x8d PushI
	var_271_int = 36147; // 0x8e PushI
	AddReply(var_269_int, var_270_int, var_271_int); // 0x8f TObjFunc
	
Label_145:
	var_272_bool = 0; var_273_object = Obj(); // 0x91 PushV
	var_273_object = var_1_object; // 0x92 MovT
	func_1648(var_273_object); // 0x93 NEW_2
	if(var_272_bool == 0) goto Label_155; // 0x95 JumpB
	var_278_int = 538711; // 0x96 PushI
	var_279_int = 40619; // 0x97 PushI
	var_280_int = 40618; // 0x98 PushI
	AddReply(var_278_int, var_279_int, var_280_int); // 0x99 TObjFunc
	
Label_155:
	var_281_int = 514515; // 0x9b PushI
	var_282_int = -1; // 0x9c PushI
	var_283_int = 15754; // 0x9d PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x9e TObjFunc
	var_284_int = 538691; // 0xa0 PushI
	var_285_int = -1; // 0xa1 PushI
	var_286_int = 40594; // 0xa2 PushI
	AddReply(var_284_int, var_285_int, var_286_int); // 0xa3 TObjFunc
	goto Label_168; // 0xa5 Jump
}


func_1618()
{
	var_210_string = "ood11Klara1"; // 0x653 PushS
	var_211_int = 1; // 0x654 PushI
	SetVariable(var_210_string, var_211_int); // 0x655 Func
	return 0; // 0x657 Return
}


func_852(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x355 PushV
	var_27_object = var_25_object; // 0x356 Mov
	TaskCall(0); // 0x357 TaskCall
	func_0(var_28_object, var_26_int, var_27_object); // 0x358 NEW_2
	TaskReturn(); // 0x359 TaskReturn
	return 0; // 0x35b Return
}


func_1367(var_140_bool)
{
	var_142_string = ""; var_143_int = 0; var_144_bool = 0; var_145_int = 0; var_146_string = ""; var_147_string = ""; var_148_int = 0; var_149_bool = 0; var_150_int = 0; var_151_string = ""; // 0x557 PushV
	var_152_string = "d"; // 0x558 PushS
	var_153_int = 0; // 0x559 PushV
	func_1528(var_153_int); // 0x55a NEW_2
	var_159_int = var_152_string + var_153_int; // 0x55c Add
	var_160_string = "m"; // 0x55d PushS
	var_147_string = var_159_int + var_160_string; // 0x55e Add2
	var_148_int = 0; // 0x55f MovI
	
Label_1376:
	var_161_int = 1; // 0x560 PushI
	if(var_161_int == 0) goto Label_1389; // 0x561 JumpB
	var_162_int = 1; // 0x562 PushI
	var_163_int = var_148_int + var_162_int; // 0x563 Add
	var_164_int = var_147_string + var_163_int; // 0x564 Add
	HasProperty(var_164_int, var_149_bool); // 0x565 ObjFunc
	var_165_bool = var_149_bool == 0; // 0x567 Not
	if(var_165_bool == 0) goto Label_1386; // 0x568 JumpB
	goto Label_1389; // 0x569 Jump
	
Label_1389:
	var_166_bool = var_148_int == 0; // 0x56d Not
	if(var_166_bool == 0) goto Label_1393; // 0x56e JumpB
	var_140_bool = 0; // 0x56f MovB
	return 10; // 0x570 Return
	
Label_1393:
	var_150_int = 0; // 0x571 MovI
	var_167_int = 1; // 0x572 PushI
	var_168_bool = var_148_int > var_167_int; // 0x573 GT
	if(var_168_bool == 0) goto Label_1399; // 0x574 JumpB
	irand(var_150_int, var_148_int); // 0x575 Func
	
Label_1399:
	var_169_int = 1; // 0x577 PushI
	var_170_int = var_150_int + var_169_int; // 0x578 Add
	var_171_int = var_147_string + var_170_int; // 0x579 Add
	GetProperty(var_171_int, var_151_string); // 0x57a ObjFunc
	var_172_bool = 0; var_173_string = ""; // 0x57c PushV
	var_173_string = var_151_string; // 0x57d Mov
	func_1441(var_172_bool, var_173_string); // 0x57e NEW_2
	var_140_bool = var_172_bool; // 0x57f Mov
	return 10; // 0x581 Return
	
Label_1386:
	var_174_int = 1; // 0x56a PushI
	var_148_int = var_148_int + var_174_int; // 0x56b Add2
	goto Label_1376; // 0x56c Jump
}


func_1624(var_257_bool)
{
	var_259_int = 0; var_260_string = ""; // 0x659 PushV
	var_260_string = "d11q06"; // 0x65a MovS
	func_1479(var_259_int, var_260_string); // 0x65b NEW_2
	var_261_int = 1; // 0x65d PushI
	var_262_bool = var_259_int == var_261_int; // 0x65e Eq
	if(var_262_bool == 0) goto Label_1634; // 0x65f JumpB
	var_257_bool = 1; // 0x660 MovB
	return 0; // 0x661 Return
	
Label_1634:
	var_257_bool = 0; // 0x662 MovB
	return 0; // 0x663 Return
}


func_1496(var_53_object, var_54_int)
{
	var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; // 0x5d8 PushV
	GetItemID(var_58_int); // 0x5d9 ObjFunc
	var_61_string = "Category"; // 0x5db PushS
	GetInvItemProperty(var_59_int, var_58_int, var_61_string); // 0x5dc Func
	AddItem(var_60_bool, var_53_object, var_59_int, var_54_int); // 0x5de ObjFunc
	var_62_bool = var_60_bool == 0; // 0x5e0 Not
	if(var_62_bool == 0) goto Label_1509; // 0x5e1 JumpB
	DropItems(var_53_object, var_54_int); // 0x5e2 ObjFunc
	goto Label_1514; // 0x5e4 Jump
	
Label_1514:
	return 6; // 0x5ea Return
	
Label_1509:
	var_63_int = 0; var_64_int = 0; // 0x5e5 PushV
	var_63_int = var_58_int; // 0x5e6 Mov
	var_64_int = var_54_int; // 0x5e7 Mov
	func_1484(var_63_int, var_64_int); // 0x5e8 NEW_2
}


func_1756(var_86_int)
{
	var_86_int = 515540; // 0x6dc MovI
	return 0; // 0x6dd Return
}


func_1758(var_85_int)
{
	var_85_int = 502865; // 0x6de MovI
	return 0; // 0x6df Return
}


func_1760(var_87_string)
{
	var_87_string = "ui/NPC_Klara.png"; // 0x6e0 MovS
	return 0; // 0x6e1 Return
}


func_1762(var_88_string)
{
	var_88_string = "ui/NPC_Klara_b.png"; // 0x6e2 MovS
	return 0; // 0x6e3 Return
}


func_1636(var_263_bool)
{
	var_265_int = 0; var_266_string = ""; // 0x665 PushV
	var_266_string = "ood11Klara2"; // 0x666 MovS
	func_1479(var_265_int, var_266_string); // 0x667 NEW_2
	var_267_int = 0; // 0x669 PushI
	var_268_bool = var_265_int == var_267_int; // 0x66a Eq
	if(var_268_bool == 0) goto Label_1646; // 0x66b JumpB
	var_263_bool = 1; // 0x66c MovB
	return 0; // 0x66d Return
	
Label_1646:
	var_263_bool = 0; // 0x66e MovB
	return 0; // 0x66f Return
}


func_1764(var_80_bool)
{
	var_80_bool = 1; // 0x6e4 MovB
	return 0; // 0x6e5 Return
}


func_1254()
{
	var_289_bool = 0; var_290_bool = 0; // 0x4e6 PushV
	var_291_bool = 1; // 0x4e7 PushB
	CameraSwitchToNormal(var_291_bool); // 0x4e8 Func
	var_292_bool = 0; // 0x4ea PushV
	func_1764(var_292_bool); // 0x4eb NEW_2
	if(var_292_bool == 0) goto Label_1263; // 0x4ed JumpB
	goto Label_1271; // 0x4ee Jump
	
Label_1271:
	return 2; // 0x4f7 Return
	
Label_1263:
	var_293_string = "head"; // 0x4ef PushS
	HasAnimationTrack(var_290_bool, var_293_string); // 0x4f0 Func
	var_294_bool = var_290_bool; // 0x4f2 Push
	if(var_294_bool == 0) goto Label_1271; // 0x4f3 JumpB
	var_295_string = "head"; // 0x4f4 PushS
	UnlookAsync(var_295_string); // 0x4f5 Func
}


func_1515(var_47_object, var_48_string, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x5eb PushV
	CreateInvItem(var_51_object); // 0x5ec Func
	SetItemName(var_48_string); // 0x5ee ObjFunc
	var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; // 0x5f0 PushV
	var_52_object = var_47_object; // 0x5f1 Mov
	var_53_object = var_51_object; // 0x5f2 Mov
	var_54_int = var_49_int; // 0x5f3 Mov
	func_1496(var_53_object, var_54_int); // 0x5f4 NEW_2
	return 2; // 0x5f6 Return
}


func_1648(var_272_bool)
{
	var_274_int = 0; var_275_string = ""; // 0x671 PushV
	var_275_string = "ood11Klara3"; // 0x672 MovS
	func_1479(var_274_int, var_275_string); // 0x673 NEW_2
	var_276_int = 0; // 0x675 PushI
	var_277_bool = var_274_int == var_276_int; // 0x676 Eq
	if(var_277_bool == 0) goto Label_1658; // 0x677 JumpB
	var_272_bool = 1; // 0x678 MovB
	return 0; // 0x679 Return
	
Label_1658:
	var_272_bool = 0; // 0x67a MovB
	return 0; // 0x67b Return
}


func_1008()
{
	func_1148(); // 0x3f1 NEW_2
	func_966(); // 0x3f4 NEW_2
	lshStopSpeech(); // 0x3f6 Func
	lshStopAnimation(); // 0x3f8 Func
	StopAsync(); // 0x3fa Func
	Hold(); // 0x3fc Func
	return 0; // 0x3fe Return
}


func_1528(var_153_int)
{
	var_154_float = 0; var_155_float = 0; // 0x5f8 PushV
	GetGameTime(var_155_float); // 0x5f9 Func
	var_156_int = 1; // 0x5fb PushI
	var_157_int = 0; // 0x5fc PushV
	var_158_int = 24; // 0x5fd PushI
	var_157_int = var_155_float / var_155_float; // 0x5fe Div2
	var_153_int = var_156_int + var_157_int; // 0x5ff Add2
	return 2; // 0x600 Return
}


func_1146(var_45_bool)
{
	var_45_bool = 1; // 0x47a MovB
	return 0; // 0x47b Return
}


func_1148()
{
	StopAnimation(); // 0x47c Func
	StopGroup0(); // 0x47e Func
	return 0; // 0x480 Return
}


func_1023()
{
	StopGroup0(); // 0x3ff Func
	func_966(); // 0x402 NEW_2
	var_8_string = ""; // 0x404 PushV
	var_8_string = "Neutral"; // 0x405 MovS
	func_1410(var_8_string); // 0x406 NEW_2
	func_957(); // 0x409 NEW_2
	return 0; // 0x40b Return
}


