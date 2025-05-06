task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xdd PushI
	if(var_9_int == 0) goto Label_851; // 0xde JumpB
	func_1454(); // 0xe0 NEW_2
	var_11_int = 36147; // 0xe2 PushI
	var_12_bool = var_8_bool == var_11_int; // 0xe3 Eq
	if(var_12_bool == 0) goto Label_234; // 0xe4 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xe5 PushV
	var_13_object = var_1_object; // 0xe6 MovT
	var_14_object = var_0_object; // 0xe7 MovT
	func_1604(); // 0xe8 NEW_2
	
Label_234:
	var_17_int = 36151; // 0xea PushI
	var_18_bool = var_8_bool == var_17_int; // 0xeb Eq
	if(var_18_bool == 0) goto Label_247; // 0xec JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0xed PushV
	var_19_object = var_1_object; // 0xee MovT
	var_20_object = var_0_object; // 0xef MovT
	func_1559(var_20_object); // 0xf0 NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0xf2 PushV
	var_68_object = var_1_object; // 0xf3 MovT
	var_69_object = var_0_object; // 0xf4 MovT
	func_1577(); // 0xf5 NEW_2
	
Label_247:
	var_91_int = 40618; // 0xf7 PushI
	var_92_bool = var_8_bool == var_91_int; // 0xf8 Eq
	if(var_92_bool == 0) goto Label_255; // 0xf9 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0xfa PushV
	var_93_object = var_1_object; // 0xfb MovT
	var_94_object = var_0_object; // 0xfc MovT
	func_1610(); // 0xfd NEW_2
	
Label_255:
	var_97_int = 15573; // 0xff PushI
	var_98_bool = var_7_cvector == var_97_int; // 0x100 Eq
	if(var_98_bool == 0) goto Label_337; // 0x101 JumpB
	var_99_bool = 0; var_100_object = Obj(); // 0x102 PushV
	var_100_object = var_1_object; // 0x103 MovT
	func_1658(var_100_object); // 0x104 NEW_2
	if(var_99_bool == 0) goto Label_288; // 0x106 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x107 PushV
	var_105_object = var_1_object; // 0x108 MovT
	var_106_object = var_0_object; // 0x109 MovT
	func_1616(); // 0x10a NEW_2
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
	func_1622(var_137_object); // 0x12d NEW_2
	if(var_136_bool == 0) goto Label_310; // 0x12f JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x130 PushV
	var_143_object = var_1_object; // 0x131 MovT
	func_1634(var_143_object); // 0x132 NEW_2
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
	func_1646(var_152_object); // 0x13e NEW_2
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
	func_1762(var_376_bool); // 0x349 NEW_2
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
	func_1461(var_13_object); // 0x36a NEW_2
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
	func_1461(var_8_object); // 0x377 NEW_2
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
	func_1461(var_53_object); // 0x3e3 NEW_2
	var_52_object = var_53_object; // 0x3e4 Mov
	func_1328(var_52_object); // 0x3e6 NEW_2
	
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
	func_1408(var_14_string); // 0x415 NEW_2
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
	var_294_string = ""; // 0x42a PushV
	var_294_string = "Neutral"; // 0x42b MovS
	func_1408(var_294_string); // 0x42c NEW_2
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


func_1408(var_237_string)
{
	var_238_bool = 0; var_239_float = 0; var_240_float = 0; var_241_bool = 0; var_242_float = 0; var_243_float = 0; // 0x580 PushV
	lshHasAnimation(var_241_bool, var_237_string); // 0x581 Func
	var_244_bool = var_241_bool; // 0x583 Push
	if(var_244_bool == 0) goto Label_1419; // 0x584 JumpB
	lshGetAnimTimes(var_237_string, var_242_float, var_243_float); // 0x585 Func
	var_245_bool = 0; // 0x587 PushB
	lshPlayAnimation(var_242_float, var_243_float, var_245_bool); // 0x588 Func
	goto Label_1423; // 0x58a Jump
	
Label_1423:
	return 6; // 0x58f Return
	
Label_1419:
	var_246_string = "Can't find lsh animation : "; // 0x58b PushS
	var_247_int = var_246_string + var_237_string; // 0x58c Add
	Trace(var_247_int); // 0x58d Func
}


func_0(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0x0 PushV
	var_0_object = var_27_object; // 0x1 TMov
	var_37_bool = 0; var_38_object = Obj(); var_39_float = 0; // 0x2 PushV
	var_38_object = var_27_object; // 0x3 Mov
	var_39_float = 70.0; // 0x4 MovF
	func_1185(var_38_object, var_39_float); // 0x5 NEW_2
	var_83_bool = var_37_bool == 0; // 0x7 Not
	if(var_83_bool == 0) goto Label_11; // 0x8 JumpB
	var_26_int = -2; // 0x9 MovI
	return 8; // 0xa Return
	
Label_11:
	CreateDialog(var_33_object); // 0xb Func
	var_84_int = 0; // 0xd PushV
	func_1756(var_84_int); // 0xe NEW_2
	SetNPCName(var_84_int); // 0x10 ObjFunc
	var_85_int = 0; // 0x12 PushV
	func_1754(var_85_int); // 0x13 NEW_2
	SetNPCDescription(var_85_int); // 0x15 ObjFunc
	var_86_string = ""; // 0x17 PushV
	func_1758(var_86_string); // 0x18 NEW_2
	SetPhoto(var_86_string); // 0x1a ObjFunc
	var_87_string = ""; // 0x1c PushV
	func_1760(var_87_string); // 0x1d NEW_2
	SetPhoto2(var_87_string); // 0x1f ObjFunc
	var_88_int = 0; // 0x21 PushV
	func_1737(var_88_int); // 0x22 NEW_2
	SetPlayerName(var_88_int); // 0x24 ObjFunc
	var_35_int = -1; // 0x26 MovI
	IsOverrideActive(var_34_bool); // 0x27 Func
	var_96_bool = var_34_bool; // 0x29 Push
	if(var_96_bool == 0) goto Label_45; // 0x2a JumpB
	var_26_int = -2; // 0x2b MovI
	return 8; // 0x2c Return
	
Label_45:
	DoDialog(var_33_object); // 0x2d Func
	var_97_bool = 0; var_98_object = Obj(); // 0x2f PushV
	var_99_object = Obj(); // 0x30 PushV
	func_1461(var_99_object); // 0x31 NEW_2
	var_98_object = var_99_object; // 0x32 Mov
	func_1270(var_97_bool, var_98_object); // 0x34 NEW_2
	var_192_object = Obj(); var_193_object = Obj(); // 0x36 PushV
	var_192_object = var_27_object; // 0x37 Mov
	var_193_object = var_33_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_36_bool); // 0x3d ObjFunc
	
Label_63:
	var_286_bool = var_36_bool == 0; // 0x3f Not
	if(var_286_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_36_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_287_object = Obj(); // 0x46 PushV
	var_287_object = var_27_object; // 0x47 Mov
	func_1253(); // 0x48 NEW_2
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


func_1542(var_25_int)
{
	var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_bool = 0; // 0x606 PushV
	var_28_int = 0; // 0x607 MovI
	
Label_1544:
	var_30_string = "all"; // 0x608 PushS
	var_31_string = ""; var_32_int = 0; // 0x609 PushV
	var_32_int = var_28_int; // 0x60a Mov
	func_1535(var_31_string, var_32_int); // 0x60b NEW_2
	HasAnimation(var_29_bool, var_30_string, var_31_string); // 0x60d Func
	var_36_bool = var_29_bool == 0; // 0x60f Not
	if(var_36_bool == 0) goto Label_1554; // 0x610 JumpB
	goto Label_1557; // 0x611 Jump
	
Label_1557:
	var_25_int = var_28_int; // 0x615 Mov
	return 4; // 0x616 Return
	
Label_1554:
	var_37_int = 1; // 0x612 PushI
	var_28_int = var_28_int + var_37_int; // 0x613 Add2
	goto Label_1544; // 0x614 Jump
}


func_1670()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x686 PushV
	var_85_int = 690; // 0x687 PushI
	var_86_int = 2; // 0x688 PushI
	var_87_int = 534538; // 0x689 PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0x68a Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0x68c PushV
	var_89_object = var_84_object; // 0x68d Mov
	var_90_int = 686; // 0x68e MovI
	func_1709(var_88_bool, var_89_object, var_90_int); // 0x68f NEW_2
	return 2; // 0x691 Return
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


func_1424(var_215_string, var_216_bool)
{
	var_219_bool = 0; var_220_float = 0; var_221_float = 0; var_222_bool = 0; var_223_float = 0; var_224_float = 0; // 0x590 PushV
	lshHasAnimation(var_222_bool, var_215_string); // 0x591 Func
	var_225_bool = var_222_bool; // 0x593 Push
	if(var_225_bool == 0) goto Label_1434; // 0x594 JumpB
	lshGetAnimTimes(var_215_string, var_223_float, var_224_float); // 0x595 Func
	lshPlayAnimation(var_223_float, var_224_float, var_216_bool); // 0x597 Func
	goto Label_1438; // 0x599 Jump
	
Label_1438:
	return 6; // 0x59e Return
	
Label_1434:
	var_226_string = "Can't find lsh animation : "; // 0x59a PushS
	var_227_int = var_226_string + var_215_string; // 0x59b Add
	Trace(var_227_int); // 0x59c Func
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


func_1683()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x693 PushV
	var_25_int = 689; // 0x694 PushI
	var_26_int = 2; // 0x695 PushI
	var_27_int = 534537; // 0x696 PushI
	CreateDiaryEntry(var_24_object, var_25_int, var_26_int, var_27_int); // 0x697 Func
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; // 0x699 PushV
	var_29_object = var_24_object; // 0x69a Mov
	var_30_int = 686; // 0x69b MovI
	func_1709(var_28_bool, var_29_object, var_30_int); // 0x69c NEW_2
	return 2; // 0x69e Return
}


func_1658(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x67b PushV
	var_202_string = "ood11Klara1"; // 0x67c MovS
	func_1477(var_201_int, var_202_string); // 0x67d NEW_2
	var_205_int = 0; // 0x67f PushI
	var_206_bool = var_201_int == var_205_int; // 0x680 Eq
	if(var_206_bool == 0) goto Label_1668; // 0x681 JumpB
	var_199_bool = 1; // 0x682 MovB
	return 0; // 0x683 Return
	
Label_1668:
	var_199_bool = 0; // 0x684 MovB
	return 0; // 0x685 Return
}


func_1559(var_19_object)
{
	var_21_string = "d11q06KlaraRing"; // 0x618 PushS
	var_22_int = 1; // 0x619 PushI
	SetVariable(var_21_string, var_22_int); // 0x61a Func
	func_1683(); // 0x61d NEW_2
	var_46_string = "d11q06KlaraRing is given"; // 0x61f PushS
	Trace(var_46_string); // 0x620 Func
	var_47_object = Obj(); var_48_string = ""; var_49_int = 0; // 0x622 PushV
	var_47_object = var_19_object; // 0x623 Mov
	var_48_string = "d11q06KlaraRing"; // 0x624 MovS
	var_49_int = 1; // 0x625 MovI
	func_1513(var_47_object, var_48_string, var_49_int); // 0x626 NEW_2
	return 0; // 0x628 Return
}


func_1023()
{
	StopGroup0(); // 0x3ff Func
	func_966(); // 0x402 NEW_2
	var_8_string = ""; // 0x404 PushV
	var_8_string = "Neutral"; // 0x405 MovS
	func_1408(var_8_string); // 0x406 NEW_2
	func_957(); // 0x409 NEW_2
	return 0; // 0x40b Return
}


func_1180(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x49c PushV
	IsLoaded(var_9_bool); // 0x49d Func
	var_7_bool = var_9_bool; // 0x49f Mov
	return 2; // 0x4a0 Return
}


func_1439(var_131_bool, var_132_string)
{
	var_133_bool = 0; var_134_bool = 0; // 0x59f PushV
	var_135_bool = 0; // 0x5a0 PushV
	func_1762(var_135_bool); // 0x5a1 NEW_2
	if(var_135_bool == 0) goto Label_1452; // 0x5a3 JumpB
	lshHasSpeech(var_134_bool, var_132_string); // 0x5a4 Func
	var_136_bool = var_134_bool; // 0x5a6 Push
	if(var_136_bool == 0) goto Label_1452; // 0x5a7 JumpB
	lshPlaySpeech(var_132_string); // 0x5a8 Func
	var_131_bool = 1; // 0x5aa MovB
	return 2; // 0x5ab Return
	
Label_1452:
	var_131_bool = 0; // 0x5ac MovB
	return 2; // 0x5ad Return
}


func_1696(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x6a0 PushV
	GetDiaryRoot(var_39_object); // 0x6a1 Func
	var_40_bool = var_39_object == 0; // 0x6a3 Not
	if(var_40_bool == 0) goto Label_1706; // 0x6a4 JumpB
	var_41_string = "Can't retrieve diary root"; // 0x6a5 PushS
	Trace(var_41_string); // 0x6a6 Func
	var_37_object = 0; // 0x6a8 MovB
	return 2; // 0x6a9 Return
	
Label_1706:
	var_37_object = var_39_object; // 0x6aa Mov
	return 2; // 0x6ab Return
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
	func_1467(var_64_cvector, var_65_cvector); // 0x4bc NEW_2
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
	CameraTransit(var_55_cvector, var_53_cvector); // 0x4cc Func
	var_77_float = GetByIndex(var_54_cvector, 0); // 0x4ce PushE
	var_78_float = GetByIndex(var_54_cvector, 2); // 0x4cf PushE
	Rotate(var_77_float, var_78_float); // 0x4d0 Func
	var_79_bool = 0; // 0x4d2 PushV
	func_1762(var_79_bool); // 0x4d3 NEW_2
	if(var_79_bool == 0) goto Label_1239; // 0x4d5 JumpB
	goto Label_1247; // 0x4d6 Jump
	
Label_1247:
	CameraWaitForPlayFinish(); // 0x4df Func
	ResumeWorld(); // 0x4e1 Func
	var_37_bool = 1; // 0x4e3 MovB
	return 18; // 0x4e4 Return
	
Label_1239:
	var_80_string = "head"; // 0x4d7 PushS
	HasAnimationTrack(var_57_bool, var_80_string); // 0x4d8 Func
	var_81_bool = var_57_bool; // 0x4da Push
	if(var_81_bool == 0) goto Label_1247; // 0x4db JumpB
	var_82_string = "head"; // 0x4dc PushS
	LookAsyncCamera(var_82_string); // 0x4dd Func
}


func_930(var_0_object)
{
	var_84_float = GetByIndex(var_0_object, 0); // 0x3a2 PushE
	var_85_float = GetByIndex(var_0_object, 2); // 0x3a3 PushE
	RotateAsync(var_84_float, var_85_float); // 0x3a4 Func
	return 0; // 0x3a6 Return
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


func_1577()
{
	var_70_bool = 0; // 0x62a PushV
	var_70_bool = 0; // 0x62b MovB
	var_71_int = 0; var_72_string = ""; // 0x62c PushV
	var_72_string = "d11q06KapellaRing"; // 0x62d MovS
	func_1477(var_71_int, var_72_string); // 0x62e NEW_2
	var_75_int = 0; // 0x630 PushI
	var_76_bool = var_71_int != var_75_int; // 0x631 Neq
	if(var_76_bool == 0) goto Label_1595; // 0x632 JumpB
	var_77_int = 0; var_78_string = ""; // 0x633 PushV
	var_78_string = "d11q06KlaraRing"; // 0x634 MovS
	func_1477(var_77_int, var_78_string); // 0x635 NEW_2
	var_79_int = 0; // 0x637 PushI
	var_80_bool = var_77_int != var_79_int; // 0x638 Neq
	if(var_80_bool == 0) goto Label_1595; // 0x639 JumpB
	var_70_bool = 1; // 0x63a MovB
	
Label_1595:
	if(var_70_bool == 0) goto Label_1603; // 0x63b JumpB
	var_81_string = "d11q06"; // 0x63c PushS
	var_82_int = 2; // 0x63d PushI
	SetVariable(var_81_string, var_82_int); // 0x63e Func
	func_1670(); // 0x641 NEW_2
	
Label_1603:
	return 0; // 0x643 Return
}


func_1709(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x6ad PushV
	var_37_object = Obj(); // 0x6ae PushV
	func_1696(var_37_object); // 0x6af NEW_2
	var_34_object = var_37_object; // 0x6b0 Mov
	Find(var_30_int, var_35_object); // 0x6b2 ObjFunc
	var_42_bool = var_35_object == 0; // 0x6b4 Not
	if(var_42_bool == 0) goto Label_1724; // 0x6b5 JumpB
	var_43_string = "Can't find diary parent with id: "; // 0x6b6 PushS
	var_44_int = var_43_string + var_30_int; // 0x6b7 Add
	Trace(var_44_int); // 0x6b8 Func
	var_28_bool = 0; // 0x6ba MovB
	return 6; // 0x6bb Return
	
Label_1724:
	AddChild(var_29_object); // 0x6bc ObjFunc
	var_45_int = 7; // 0x6be PushI
	SendWorldWndMessage(var_45_int); // 0x6bf Func
	GetCategory(var_36_int); // 0x6c1 ObjFunc
	SetDiarySection(var_36_int); // 0x6c3 Func
	var_28_bool = 0; // 0x6c5 MovB
	return 6; // 0x6c6 Return
}


func_1454()
{
	var_10_bool = 0; // 0x5ae PushV
	func_1762(var_10_bool); // 0x5af NEW_2
	if(var_10_bool == 0) goto Label_1460; // 0x5b1 JumpB
	lshStopSpeech(); // 0x5b2 Func
	
Label_1460:
	return 0; // 0x5b4 Return
}


func_1328(var_108_bool)
{
	var_110_string = ""; var_111_int = 0; var_112_bool = 0; var_113_int = 0; var_114_string = ""; var_115_string = ""; var_116_int = 0; var_117_bool = 0; var_118_int = 0; var_119_string = ""; // 0x530 PushV
	var_115_string = "c"; // 0x531 MovS
	var_116_int = 0; // 0x532 MovI
	
Label_1331:
	var_120_int = 1; // 0x533 PushI
	if(var_120_int == 0) goto Label_1344; // 0x534 JumpB
	var_121_int = 1; // 0x535 PushI
	var_122_int = var_116_int + var_121_int; // 0x536 Add
	var_123_int = var_115_string + var_122_int; // 0x537 Add
	HasProperty(var_123_int, var_117_bool); // 0x538 ObjFunc
	var_124_bool = var_117_bool == 0; // 0x53a Not
	if(var_124_bool == 0) goto Label_1341; // 0x53b JumpB
	goto Label_1344; // 0x53c Jump
	
Label_1344:
	var_125_bool = var_116_int == 0; // 0x540 Not
	if(var_125_bool == 0) goto Label_1348; // 0x541 JumpB
	var_108_bool = 0; // 0x542 MovB
	return 10; // 0x543 Return
	
Label_1348:
	var_118_int = 0; // 0x544 MovI
	var_126_int = 1; // 0x545 PushI
	var_127_bool = var_116_int > var_126_int; // 0x546 GT
	if(var_127_bool == 0) goto Label_1354; // 0x547 JumpB
	irand(var_118_int, var_116_int); // 0x548 Func
	
Label_1354:
	var_128_int = 1; // 0x54a PushI
	var_129_int = var_118_int + var_128_int; // 0x54b Add
	var_130_int = var_115_string + var_129_int; // 0x54c Add
	GetProperty(var_130_int, var_119_string); // 0x54d ObjFunc
	var_131_bool = 0; var_132_string = ""; // 0x54f PushV
	var_132_string = var_119_string; // 0x550 Mov
	func_1439(var_131_bool, var_132_string); // 0x551 NEW_2
	var_108_bool = var_131_bool; // 0x552 Mov
	return 10; // 0x554 Return
	
Label_1341:
	var_137_int = 1; // 0x53d PushI
	var_116_int = var_116_int + var_137_int; // 0x53e Add2
	goto Label_1331; // 0x53f Jump
}


func_1461(var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); // 0x5b5 PushV
	self(var_101_object); // 0x5b6 Func
	var_99_object = var_101_object; // 0x5b8 Mov
	return 2; // 0x5b9 Return
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
	func_1542(var_25_int); // 0x43f NEW_2
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
	func_1535(var_52_string, var_53_int); // 0x463 NEW_2
	PlayAnimation(var_51_string, var_52_string); // 0x465 Func
	WaitForAnimEnd(var_22_bool); // 0x467 Func
	var_54_bool = var_22_bool == 0; // 0x469 Not
	if(var_54_bool == 0) goto Label_1132; // 0x46a JumpB
	goto Label_1143; // 0x46b Jump
}


func_1467(var_64_cvector, var_65_cvector)
{
	var_67_float = 0; var_68_float = 0; // 0x5bb PushV
	var_69_int = var_65_cvector | var_65_cvector; // 0x5bc Or
	var_68_float = sqrt(var_69_int); // 0x5bd Sqrt2
	var_70_float = 0.0; // 0x5be PushF
	var_71_bool = var_68_float < var_70_float; // 0x5bf LT
	if(var_71_bool == 0) goto Label_1475; // 0x5c0 JumpB
	var_64_cvector = CVector(0.0, 0.0, 0.0); // 0x5c1 MovV
	return 2; // 0x5c2 Return
	
Label_1475:
	var_64_cvector = var_65_cvector / var_65_cvector; // 0x5c3 Div2
	return 2; // 0x5c4 Return
}


func_957()
{
	var_296_float = 0; var_297_float = 0; // 0x3bd PushV
	var_298_int = 8; // 0x3be PushI
	var_299_int = 16; // 0x3bf PushI
	rand(var_297_float, var_298_int, var_299_int); // 0x3c0 Func
	var_300_int = 10; // 0x3c2 PushI
	SetTimer(var_300_int, var_297_float); // 0x3c3 Func
	return 2; // 0x3c5 Return
}


func_1604()
{
	var_15_string = "ood11Klara2"; // 0x645 PushS
	var_16_int = 1; // 0x646 PushI
	SetVariable(var_15_string, var_16_int); // 0x647 Func
	return 0; // 0x649 Return
}


func_1477(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x5c5 PushV
	GetVariable(var_202_string, var_204_int); // 0x5c6 Func
	var_201_int = var_204_int; // 0x5c8 Mov
	return 2; // 0x5c9 Return
}


func_198(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0xc7 PushV
	func_1762(var_212_bool); // 0xc8 NEW_2
	var_213_bool = var_212_bool == 0; // 0xca Not
	if(var_213_bool == 0) goto Label_205; // 0xcb JumpB
	return 0; // 0xcc Return
	
Label_205:
	var_214_bool = var_211_string == var_2_object; // 0xcd Eq
	if(var_214_bool == 0) goto Label_208; // 0xce JumpB
	return 0; // 0xcf Return
	
Label_208:
	var_215_string = ""; var_216_bool = 0; // 0xd0 PushV
	var_215_string = var_211_string; // 0xd1 Mov
	var_217_string = ""; // 0xd2 PushS
	var_218_bool = var_211_string == var_217_string; // 0xd3 Eq
	if(var_218_bool == 0) goto Label_215; // 0xd4 JumpB
	var_216_bool = 0; // 0xd5 MovB
	goto Label_216; // 0xd6 Jump
	
Label_216:
	func_1424(var_215_string, var_216_bool); // 0xd8 NEW_2
	var_2_object = var_211_string; // 0xda TMov
	return 0; // 0xdb Return
	
Label_215:
	var_216_bool = 1; // 0xd7 MovB
}


func_966()
{
	var_295_int = 10; // 0x3c6 PushI
	KillTimer(var_295_int); // 0x3c7 Func
	return 0; // 0x3c9 Return
}


func_1737(var_88_int)
{
	var_89_int = 0; var_90_int = 0; // 0x6c9 PushV
	var_91_string = "branch"; // 0x6ca PushS
	GetVariable(var_91_string, var_90_int); // 0x6cb Func
	var_92_int = 0; // 0x6cd PushI
	var_93_bool = var_90_int == var_92_int; // 0x6ce Eq
	if(var_93_bool == 0) goto Label_1747; // 0x6cf JumpB
	var_88_int = 1; // 0x6d0 MovI
	return 2; // 0x6d1 Return
	
Label_1747:
	var_94_int = 1; // 0x6d3 PushI
	var_95_bool = var_90_int == var_94_int; // 0x6d4 Eq
	if(var_95_bool == 0) goto Label_1752; // 0x6d5 JumpB
	var_88_int = 2; // 0x6d6 MovI
	return 2; // 0x6d7 Return
	
Label_1752:
	var_88_int = 3; // 0x6d8 MovI
	return 2; // 0x6d9 Return
}


func_1610()
{
	var_95_string = "ood11Klara3"; // 0x64b PushS
	var_96_int = 1; // 0x64c PushI
	SetVariable(var_95_string, var_96_int); // 0x64d Func
	return 0; // 0x64f Return
}


func_1482(var_63_int, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x5ca PushV
	CreateIntVector(var_66_object); // 0x5cb Func
	add(var_63_int); // 0x5cd ObjFunc
	add(var_64_int); // 0x5cf ObjFunc
	var_67_int = 3; // 0x5d1 PushI
	SendWorldWndMessage(var_67_int, var_66_object); // 0x5d2 Func
	return 2; // 0x5d4 Return
}


func_1616()
{
	var_209_string = "ood11Klara1"; // 0x651 PushS
	var_210_int = 1; // 0x652 PushI
	SetVariable(var_209_string, var_210_int); // 0x653 Func
	return 0; // 0x655 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x52 TMov
	var_1_object = var_192_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_198_int = 1; // 0x55 PushI
	if(var_198_int == 0) goto Label_168; // 0x56 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x57 PushV
	var_200_object = var_1_object; // 0x58 MovT
	func_1658(var_200_object); // 0x59 NEW_2
	if(var_199_bool == 0) goto Label_117; // 0x5b JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x5c PushV
	var_207_object = var_1_object; // 0x5d MovT
	var_208_object = var_0_object; // 0x5e MovT
	func_1616(); // 0x5f NEW_2
	var_211_string = ""; // 0x61 PushV
	var_211_string = "Neutral"; // 0x62 MovS
	func_198(var_193_object, var_211_string); // 0x63 NEW_2
	var_228_int = 514350; // 0x65 PushI
	SetMessage(var_228_int); // 0x66 TObjFunc
	ClearReplies(); // 0x68 TObjFunc
	var_229_int = 514351; // 0x6a PushI
	var_230_int = 15575; // 0x6b PushI
	var_231_int = 15574; // 0x6c PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x6d TObjFunc
	var_232_int = 538680; // 0x6f PushI
	var_233_int = 15575; // 0x70 PushI
	var_234_int = 40578; // 0x71 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x72 TObjFunc
	goto Label_168; // 0x74 Jump
	
Label_168:
	var_235_bool = 0; // 0xa8 PushV
	func_1762(var_235_bool); // 0xa9 NEW_2
	if(var_235_bool == 0) goto Label_183; // 0xab JumpB
	
Label_172:
	lshWaitForAnimEnd(); // 0xac Func
	var_236_string = var_3_string; // 0xae PushT
	if(var_236_string == 0) goto Label_177; // 0xaf JumpB
	goto Label_182; // 0xb0 Jump
	
Label_182:
	goto Label_197; // 0xb6 Jump
	
Label_197:
	return 0; // 0xc5 Return
	
Label_177:
	var_237_string = ""; // 0xb1 PushV
	var_237_string = var_2_object; // 0xb2 MovT
	func_1408(var_237_string); // 0xb3 NEW_2
	goto Label_172; // 0xb5 Jump
	
Label_183:
	var_248_string = "all"; // 0xb7 PushS
	var_249_string = "idle"; // 0xb8 PushS
	PlayAnimation(var_248_string, var_249_string); // 0xb9 Func
	
Label_187:
	WaitForAnimEnd(); // 0xbb Func
	var_250_string = var_3_string; // 0xbd PushT
	if(var_250_string == 0) goto Label_192; // 0xbe JumpB
	goto Label_197; // 0xbf Jump
	
Label_192:
	var_251_string = "all"; // 0xc0 PushS
	var_252_string = "idle"; // 0xc1 PushS
	PlayAnimation(var_251_string, var_252_string); // 0xc2 Func
	goto Label_187; // 0xc4 Jump
	
Label_117:
	var_253_string = ""; // 0x75 PushV
	var_253_string = "Saveyouall"; // 0x76 MovS
	func_198(var_193_object, var_253_string); // 0x77 NEW_2
	var_254_int = 514514; // 0x79 PushI
	SetMessage(var_254_int); // 0x7a TObjFunc
	ClearReplies(); // 0x7c TObjFunc
	var_255_bool = 0; // 0x7e PushV
	var_255_bool = 0; // 0x7f MovB
	var_256_bool = 0; var_257_object = Obj(); // 0x80 PushV
	var_257_object = var_1_object; // 0x81 MovT
	func_1622(var_257_object); // 0x82 NEW_2
	if(var_256_bool == 0) goto Label_139; // 0x84 JumpB
	var_262_bool = 0; var_263_object = Obj(); // 0x85 PushV
	var_263_object = var_1_object; // 0x86 MovT
	func_1634(var_263_object); // 0x87 NEW_2
	if(var_262_bool == 0) goto Label_139; // 0x89 JumpB
	var_255_bool = 1; // 0x8a MovB
	
Label_139:
	if(var_255_bool == 0) goto Label_145; // 0x8b JumpB
	var_268_int = 534506; // 0x8c PushI
	var_269_int = 40595; // 0x8d PushI
	var_270_int = 36147; // 0x8e PushI
	AddReply(var_268_int, var_269_int, var_270_int); // 0x8f TObjFunc
	
Label_145:
	var_271_bool = 0; var_272_object = Obj(); // 0x91 PushV
	var_272_object = var_1_object; // 0x92 MovT
	func_1646(var_272_object); // 0x93 NEW_2
	if(var_271_bool == 0) goto Label_155; // 0x95 JumpB
	var_277_int = 538711; // 0x96 PushI
	var_278_int = 40619; // 0x97 PushI
	var_279_int = 40618; // 0x98 PushI
	AddReply(var_277_int, var_278_int, var_279_int); // 0x99 TObjFunc
	
Label_155:
	var_280_int = 514515; // 0x9b PushI
	var_281_int = -1; // 0x9c PushI
	var_282_int = 15754; // 0x9d PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x9e TObjFunc
	var_283_int = 538691; // 0xa0 PushI
	var_284_int = -1; // 0xa1 PushI
	var_285_int = 40594; // 0xa2 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0xa3 TObjFunc
	goto Label_168; // 0xa5 Jump
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


func_1365(var_139_bool)
{
	var_141_string = ""; var_142_int = 0; var_143_bool = 0; var_144_int = 0; var_145_string = ""; var_146_string = ""; var_147_int = 0; var_148_bool = 0; var_149_int = 0; var_150_string = ""; // 0x555 PushV
	var_151_string = "d"; // 0x556 PushS
	var_152_int = 0; // 0x557 PushV
	func_1526(var_152_int); // 0x558 NEW_2
	var_158_int = var_151_string + var_152_int; // 0x55a Add
	var_159_string = "m"; // 0x55b PushS
	var_146_string = var_158_int + var_159_string; // 0x55c Add2
	var_147_int = 0; // 0x55d MovI
	
Label_1374:
	var_160_int = 1; // 0x55e PushI
	if(var_160_int == 0) goto Label_1387; // 0x55f JumpB
	var_161_int = 1; // 0x560 PushI
	var_162_int = var_147_int + var_161_int; // 0x561 Add
	var_163_int = var_146_string + var_162_int; // 0x562 Add
	HasProperty(var_163_int, var_148_bool); // 0x563 ObjFunc
	var_164_bool = var_148_bool == 0; // 0x565 Not
	if(var_164_bool == 0) goto Label_1384; // 0x566 JumpB
	goto Label_1387; // 0x567 Jump
	
Label_1387:
	var_165_bool = var_147_int == 0; // 0x56b Not
	if(var_165_bool == 0) goto Label_1391; // 0x56c JumpB
	var_139_bool = 0; // 0x56d MovB
	return 10; // 0x56e Return
	
Label_1391:
	var_149_int = 0; // 0x56f MovI
	var_166_int = 1; // 0x570 PushI
	var_167_bool = var_147_int > var_166_int; // 0x571 GT
	if(var_167_bool == 0) goto Label_1397; // 0x572 JumpB
	irand(var_149_int, var_147_int); // 0x573 Func
	
Label_1397:
	var_168_int = 1; // 0x575 PushI
	var_169_int = var_149_int + var_168_int; // 0x576 Add
	var_170_int = var_146_string + var_169_int; // 0x577 Add
	GetProperty(var_170_int, var_150_string); // 0x578 ObjFunc
	var_171_bool = 0; var_172_string = ""; // 0x57a PushV
	var_172_string = var_150_string; // 0x57b Mov
	func_1439(var_171_bool, var_172_string); // 0x57c NEW_2
	var_139_bool = var_171_bool; // 0x57d Mov
	return 10; // 0x57f Return
	
Label_1384:
	var_173_int = 1; // 0x568 PushI
	var_147_int = var_147_int + var_173_int; // 0x569 Add2
	goto Label_1374; // 0x56a Jump
}


func_1622(var_256_bool)
{
	var_258_int = 0; var_259_string = ""; // 0x657 PushV
	var_259_string = "d11q06"; // 0x658 MovS
	func_1477(var_258_int, var_259_string); // 0x659 NEW_2
	var_260_int = 1; // 0x65b PushI
	var_261_bool = var_258_int == var_260_int; // 0x65c Eq
	if(var_261_bool == 0) goto Label_1632; // 0x65d JumpB
	var_256_bool = 1; // 0x65e MovB
	return 0; // 0x65f Return
	
Label_1632:
	var_256_bool = 0; // 0x660 MovB
	return 0; // 0x661 Return
}


func_1494(var_53_object, var_54_int)
{
	var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; // 0x5d6 PushV
	GetItemID(var_58_int); // 0x5d7 ObjFunc
	var_61_string = "Category"; // 0x5d9 PushS
	GetInvItemProperty(var_59_int, var_58_int, var_61_string); // 0x5da Func
	AddItem(var_60_bool, var_53_object, var_59_int, var_54_int); // 0x5dc ObjFunc
	var_62_bool = var_60_bool == 0; // 0x5de Not
	if(var_62_bool == 0) goto Label_1507; // 0x5df JumpB
	DropItems(var_53_object, var_54_int); // 0x5e0 ObjFunc
	goto Label_1512; // 0x5e2 Jump
	
Label_1512:
	return 6; // 0x5e8 Return
	
Label_1507:
	var_63_int = 0; var_64_int = 0; // 0x5e3 PushV
	var_63_int = var_58_int; // 0x5e4 Mov
	var_64_int = var_54_int; // 0x5e5 Mov
	func_1482(var_63_int, var_64_int); // 0x5e6 NEW_2
}


func_1754(var_85_int)
{
	var_85_int = 515540; // 0x6da MovI
	return 0; // 0x6db Return
}


func_1756(var_84_int)
{
	var_84_int = 502865; // 0x6dc MovI
	return 0; // 0x6dd Return
}


func_1758(var_86_string)
{
	var_86_string = "ui/NPC_Klara.png"; // 0x6de MovS
	return 0; // 0x6df Return
}


func_1760(var_87_string)
{
	var_87_string = "ui/NPC_Klara_b.png"; // 0x6e0 MovS
	return 0; // 0x6e1 Return
}


func_1634(var_262_bool)
{
	var_264_int = 0; var_265_string = ""; // 0x663 PushV
	var_265_string = "ood11Klara2"; // 0x664 MovS
	func_1477(var_264_int, var_265_string); // 0x665 NEW_2
	var_266_int = 0; // 0x667 PushI
	var_267_bool = var_264_int == var_266_int; // 0x668 Eq
	if(var_267_bool == 0) goto Label_1644; // 0x669 JumpB
	var_262_bool = 1; // 0x66a MovB
	return 0; // 0x66b Return
	
Label_1644:
	var_262_bool = 0; // 0x66c MovB
	return 0; // 0x66d Return
}


func_1762(var_79_bool)
{
	var_79_bool = 1; // 0x6e2 MovB
	return 0; // 0x6e3 Return
}


func_1253()
{
	var_288_bool = 0; var_289_bool = 0; // 0x4e5 PushV
	CameraSwitchToNormal(); // 0x4e6 Func
	var_290_bool = 0; // 0x4e8 PushV
	func_1762(var_290_bool); // 0x4e9 NEW_2
	if(var_290_bool == 0) goto Label_1261; // 0x4eb JumpB
	goto Label_1269; // 0x4ec Jump
	
Label_1269:
	return 2; // 0x4f5 Return
	
Label_1261:
	var_291_string = "head"; // 0x4ed PushS
	HasAnimationTrack(var_289_bool, var_291_string); // 0x4ee Func
	var_292_bool = var_289_bool; // 0x4f0 Push
	if(var_292_bool == 0) goto Label_1269; // 0x4f1 JumpB
	var_293_string = "head"; // 0x4f2 PushS
	UnlookAsync(var_293_string); // 0x4f3 Func
}


func_1513(var_47_object, var_48_string, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x5e9 PushV
	CreateInvItem(var_51_object); // 0x5ea Func
	SetItemName(var_48_string); // 0x5ec ObjFunc
	var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; // 0x5ee PushV
	var_52_object = var_47_object; // 0x5ef Mov
	var_53_object = var_51_object; // 0x5f0 Mov
	var_54_int = var_49_int; // 0x5f1 Mov
	func_1494(var_53_object, var_54_int); // 0x5f2 NEW_2
	return 2; // 0x5f4 Return
}


func_1646(var_271_bool)
{
	var_273_int = 0; var_274_string = ""; // 0x66f PushV
	var_274_string = "ood11Klara3"; // 0x670 MovS
	func_1477(var_273_int, var_274_string); // 0x671 NEW_2
	var_275_int = 0; // 0x673 PushI
	var_276_bool = var_273_int == var_275_int; // 0x674 Eq
	if(var_276_bool == 0) goto Label_1656; // 0x675 JumpB
	var_271_bool = 1; // 0x676 MovB
	return 0; // 0x677 Return
	
Label_1656:
	var_271_bool = 0; // 0x678 MovB
	return 0; // 0x679 Return
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


func_1270(var_97_bool, var_98_object)
{
	var_102_int = 0; var_103_int = 0; var_104_int = 0; var_105_int = 0; // 0x4f6 PushV
	var_106_string = "voice_common"; // 0x4f7 PushS
	GetVariable(var_106_string, var_104_int); // 0x4f8 Func
	var_107_int = var_104_int; // 0x4fa Push
	if(var_107_int == 0) goto Label_1308; // 0x4fb JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x4fc PushV
	var_109_object = var_98_object; // 0x4fd Mov
	func_1328(var_109_object); // 0x4fe NEW_2
	var_138_bool = var_108_bool == 0; // 0x500 Not
	if(var_138_bool == 0) goto Label_1290; // 0x501 JumpB
	var_139_bool = 0; var_140_object = Obj(); // 0x502 PushV
	var_140_object = var_98_object; // 0x503 Mov
	func_1365(var_140_object); // 0x504 NEW_2
	var_174_bool = var_139_bool == 0; // 0x506 Not
	if(var_174_bool == 0) goto Label_1290; // 0x507 JumpB
	var_97_bool = 0; // 0x508 MovB
	return 4; // 0x509 Return
	
Label_1290:
	var_175_int = 2; // 0x50a PushI
	irand(var_105_int, var_175_int); // 0x50b Func
	var_176_int = var_105_int; // 0x50d Push
	if(var_176_int == 0) goto Label_1303; // 0x50e JumpB
	var_177_string = "voice_common"; // 0x50f PushS
	var_178_int = 1; // 0x510 PushI
	var_179_int = var_104_int + var_178_int; // 0x511 Add
	var_180_int = 3; // 0x512 PushI
	var_181_int = var_179_int / var_180_int; // 0x513 Mod
	SetVariable(var_177_string, var_181_int); // 0x514 Func
	goto Label_1307; // 0x516 Jump
	
Label_1307:
	goto Label_1326; // 0x51b Jump
	
Label_1326:
	var_97_bool = 1; // 0x52e MovB
	return 4; // 0x52f Return
	
Label_1303:
	var_182_string = "voice_common"; // 0x517 PushS
	var_183_int = 0; // 0x518 PushI
	SetVariable(var_182_string, var_183_int); // 0x519 Func
	
Label_1308:
	var_184_bool = 0; var_185_object = Obj(); // 0x51c PushV
	var_185_object = var_98_object; // 0x51d Mov
	func_1365(var_185_object); // 0x51e NEW_2
	var_186_bool = var_184_bool == 0; // 0x520 Not
	if(var_186_bool == 0) goto Label_1322; // 0x521 JumpB
	var_187_bool = 0; var_188_object = Obj(); // 0x522 PushV
	var_188_object = var_98_object; // 0x523 Mov
	func_1328(var_188_object); // 0x524 NEW_2
	var_189_bool = var_187_bool == 0; // 0x526 Not
	if(var_189_bool == 0) goto Label_1322; // 0x527 JumpB
	var_97_bool = 0; // 0x528 MovB
	return 4; // 0x529 Return
	
Label_1322:
	var_190_string = "voice_common"; // 0x52a PushS
	var_191_int = 1; // 0x52b PushI
	SetVariable(var_190_string, var_191_int); // 0x52c Func
}


func_1526(var_152_int)
{
	var_153_float = 0; var_154_float = 0; // 0x5f6 PushV
	GetGameTime(var_154_float); // 0x5f7 Func
	var_155_int = 1; // 0x5f9 PushI
	var_156_int = 0; // 0x5fa PushV
	var_157_int = 24; // 0x5fb PushI
	var_156_int = var_154_float / var_154_float; // 0x5fc Div2
	var_152_int = var_155_int + var_156_int; // 0x5fd Add2
	return 2; // 0x5fe Return
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


func_1535(var_31_string, var_32_int)
{
	var_33_string = ""; var_34_string = ""; // 0x5ff PushV
	var_34_string = "idle"; // 0x600 MovS
	var_35_int = var_32_int; // 0x601 Push
	if(var_35_int == 0) goto Label_1540; // 0x602 JumpB
	var_34_string = var_34_string + var_32_int; // 0x603 Add2
	
Label_1540:
	var_31_string = var_34_string; // 0x604 Mov
	return 2; // 0x605 Return
}


