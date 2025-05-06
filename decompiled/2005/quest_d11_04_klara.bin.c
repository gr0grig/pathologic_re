task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	StopGroup0(); // 0x8 Func
	sync(); // 0xa Func
	return 0; // 0xc Return
}


task_2_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_cvector, var_8_bool)
{
	var_9_int = 1; // 0xea PushI
	if(var_9_int == 0) goto Label_864; // 0xeb JumpB
	func_1452(); // 0xed NEW_2
	var_11_int = 36147; // 0xef PushI
	var_12_bool = var_8_bool == var_11_int; // 0xf0 Eq
	if(var_12_bool == 0) goto Label_247; // 0xf1 JumpB
	var_13_object = Obj(); var_14_object = Obj(); // 0xf2 PushV
	var_13_object = var_1_object; // 0xf3 MovT
	var_14_object = var_0_object; // 0xf4 MovT
	func_1602(); // 0xf5 NEW_2
	
Label_247:
	var_17_int = 36151; // 0xf7 PushI
	var_18_bool = var_8_bool == var_17_int; // 0xf8 Eq
	if(var_18_bool == 0) goto Label_260; // 0xf9 JumpB
	var_19_object = Obj(); var_20_object = Obj(); // 0xfa PushV
	var_19_object = var_1_object; // 0xfb MovT
	var_20_object = var_0_object; // 0xfc MovT
	func_1557(var_20_object); // 0xfd NEW_2
	var_68_object = Obj(); var_69_object = Obj(); // 0xff PushV
	var_68_object = var_1_object; // 0x100 MovT
	var_69_object = var_0_object; // 0x101 MovT
	func_1575(); // 0x102 NEW_2
	
Label_260:
	var_91_int = 40618; // 0x104 PushI
	var_92_bool = var_8_bool == var_91_int; // 0x105 Eq
	if(var_92_bool == 0) goto Label_268; // 0x106 JumpB
	var_93_object = Obj(); var_94_object = Obj(); // 0x107 PushV
	var_93_object = var_1_object; // 0x108 MovT
	var_94_object = var_0_object; // 0x109 MovT
	func_1608(); // 0x10a NEW_2
	
Label_268:
	var_97_int = 15573; // 0x10c PushI
	var_98_bool = var_7_cvector == var_97_int; // 0x10d Eq
	if(var_98_bool == 0) goto Label_350; // 0x10e JumpB
	var_99_bool = 0; var_100_object = Obj(); // 0x10f PushV
	var_100_object = var_1_object; // 0x110 MovT
	func_1656(var_100_object); // 0x111 NEW_2
	if(var_99_bool == 0) goto Label_301; // 0x113 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0x114 PushV
	var_105_object = var_1_object; // 0x115 MovT
	var_106_object = var_0_object; // 0x116 MovT
	func_1614(); // 0x117 NEW_2
	var_109_string = ""; // 0x119 PushV
	var_109_string = "Neutral"; // 0x11a MovS
	func_211(var_8_bool, var_109_string); // 0x11b NEW_2
	var_121_int = 514350; // 0x11d PushI
	SetMessage(var_121_int); // 0x11e TObjFunc
	ClearReplies(); // 0x120 TObjFunc
	var_122_int = 514351; // 0x122 PushI
	var_123_int = 15575; // 0x123 PushI
	var_124_int = 15574; // 0x124 PushI
	AddReply(var_122_int, var_123_int, var_124_int); // 0x125 TObjFunc
	var_125_int = 538680; // 0x127 PushI
	var_126_int = 15575; // 0x128 PushI
	var_127_int = 40578; // 0x129 PushI
	AddReply(var_125_int, var_126_int, var_127_int); // 0x12a TObjFunc
	return 0; // 0x12c Return
	
Label_301:
	var_128_string = ""; // 0x12d PushV
	var_128_string = "Neutral"; // 0x12e MovS
	func_211(var_8_bool, var_128_string); // 0x12f NEW_2
	var_129_int = 514514; // 0x131 PushI
	SetMessage(var_129_int); // 0x132 TObjFunc
	ClearReplies(); // 0x134 TObjFunc
	var_130_bool = 0; // 0x136 PushV
	var_130_bool = 0; // 0x137 MovB
	var_131_bool = 0; var_132_object = Obj(); // 0x138 PushV
	var_132_object = var_1_object; // 0x139 MovT
	func_1620(var_132_object); // 0x13a NEW_2
	if(var_131_bool == 0) goto Label_323; // 0x13c JumpB
	var_137_bool = 0; var_138_object = Obj(); // 0x13d PushV
	var_138_object = var_1_object; // 0x13e MovT
	func_1632(var_138_object); // 0x13f NEW_2
	if(var_137_bool == 0) goto Label_323; // 0x141 JumpB
	var_130_bool = 1; // 0x142 MovB
	
Label_323:
	if(var_130_bool == 0) goto Label_329; // 0x143 JumpB
	var_143_int = 534506; // 0x144 PushI
	var_144_int = 40595; // 0x145 PushI
	var_145_int = 36147; // 0x146 PushI
	AddReply(var_143_int, var_144_int, var_145_int); // 0x147 TObjFunc
	
Label_329:
	var_146_bool = 0; var_147_object = Obj(); // 0x149 PushV
	var_147_object = var_1_object; // 0x14a MovT
	func_1644(var_147_object); // 0x14b NEW_2
	if(var_146_bool == 0) goto Label_339; // 0x14d JumpB
	var_152_int = 538711; // 0x14e PushI
	var_153_int = 40619; // 0x14f PushI
	var_154_int = 40618; // 0x150 PushI
	AddReply(var_152_int, var_153_int, var_154_int); // 0x151 TObjFunc
	
Label_339:
	var_155_int = 514515; // 0x153 PushI
	var_156_int = -1; // 0x154 PushI
	var_157_int = 15754; // 0x155 PushI
	AddReply(var_155_int, var_156_int, var_157_int); // 0x156 TObjFunc
	var_158_int = 538691; // 0x158 PushI
	var_159_int = -1; // 0x159 PushI
	var_160_int = 40594; // 0x15a PushI
	AddReply(var_158_int, var_159_int, var_160_int); // 0x15b TObjFunc
	return 0; // 0x15d Return
	
Label_350:
	var_161_int = 40619; // 0x15e PushI
	var_162_bool = var_7_cvector == var_161_int; // 0x15f Eq
	if(var_162_bool == 0) goto Label_373; // 0x160 JumpB
	var_163_string = ""; // 0x161 PushV
	var_163_string = "Neutral"; // 0x162 MovS
	func_211(var_8_bool, var_163_string); // 0x163 NEW_2
	var_164_int = 538712; // 0x165 PushI
	SetMessage(var_164_int); // 0x166 TObjFunc
	ClearReplies(); // 0x168 TObjFunc
	var_165_int = 538714; // 0x16a PushI
	var_166_int = 40622; // 0x16b PushI
	var_167_int = 40621; // 0x16c PushI
	AddReply(var_165_int, var_166_int, var_167_int); // 0x16d TObjFunc
	var_168_int = 538713; // 0x16f PushI
	var_169_int = -1; // 0x170 PushI
	var_170_int = 40620; // 0x171 PushI
	AddReply(var_168_int, var_169_int, var_170_int); // 0x172 TObjFunc
	return 0; // 0x174 Return
	
Label_373:
	var_171_int = 40622; // 0x175 PushI
	var_172_bool = var_7_cvector == var_171_int; // 0x176 Eq
	if(var_172_bool == 0) goto Label_391; // 0x177 JumpB
	var_173_string = ""; // 0x178 PushV
	var_173_string = "Neutral"; // 0x179 MovS
	func_211(var_8_bool, var_173_string); // 0x17a NEW_2
	var_174_int = 538715; // 0x17c PushI
	SetMessage(var_174_int); // 0x17d TObjFunc
	ClearReplies(); // 0x17f TObjFunc
	var_175_int = 538716; // 0x181 PushI
	var_176_int = 40624; // 0x182 PushI
	var_177_int = 40623; // 0x183 PushI
	AddReply(var_175_int, var_176_int, var_177_int); // 0x184 TObjFunc
	return 0; // 0x186 Return
	
Label_391:
	var_178_int = 40624; // 0x187 PushI
	var_179_bool = var_7_cvector == var_178_int; // 0x188 Eq
	if(var_179_bool == 0) goto Label_414; // 0x189 JumpB
	var_180_string = ""; // 0x18a PushV
	var_180_string = "Neutral"; // 0x18b MovS
	func_211(var_8_bool, var_180_string); // 0x18c NEW_2
	var_181_int = 538717; // 0x18e PushI
	SetMessage(var_181_int); // 0x18f TObjFunc
	ClearReplies(); // 0x191 TObjFunc
	var_182_int = 538718; // 0x193 PushI
	var_183_int = -1; // 0x194 PushI
	var_184_int = 40625; // 0x195 PushI
	AddReply(var_182_int, var_183_int, var_184_int); // 0x196 TObjFunc
	var_185_int = 538719; // 0x198 PushI
	var_186_int = -1; // 0x199 PushI
	var_187_int = 40626; // 0x19a PushI
	AddReply(var_185_int, var_186_int, var_187_int); // 0x19b TObjFunc
	return 0; // 0x19d Return
	
Label_414:
	var_188_int = 40595; // 0x19e PushI
	var_189_bool = var_7_cvector == var_188_int; // 0x19f Eq
	if(var_189_bool == 0) goto Label_437; // 0x1a0 JumpB
	var_190_string = ""; // 0x1a1 PushV
	var_190_string = "Neutral"; // 0x1a2 MovS
	func_211(var_8_bool, var_190_string); // 0x1a3 NEW_2
	var_191_int = 538692; // 0x1a5 PushI
	SetMessage(var_191_int); // 0x1a6 TObjFunc
	ClearReplies(); // 0x1a8 TObjFunc
	var_192_int = 538693; // 0x1aa PushI
	var_193_int = 40616; // 0x1ab PushI
	var_194_int = 40596; // 0x1ac PushI
	AddReply(var_192_int, var_193_int, var_194_int); // 0x1ad TObjFunc
	var_195_int = 538699; // 0x1af PushI
	var_196_int = 40604; // 0x1b0 PushI
	var_197_int = 40603; // 0x1b1 PushI
	AddReply(var_195_int, var_196_int, var_197_int); // 0x1b2 TObjFunc
	return 0; // 0x1b4 Return
	
Label_437:
	var_198_int = 40604; // 0x1b5 PushI
	var_199_bool = var_7_cvector == var_198_int; // 0x1b6 Eq
	if(var_199_bool == 0) goto Label_460; // 0x1b7 JumpB
	var_200_string = ""; // 0x1b8 PushV
	var_200_string = "Neutral"; // 0x1b9 MovS
	func_211(var_8_bool, var_200_string); // 0x1ba NEW_2
	var_201_int = 538700; // 0x1bc PushI
	SetMessage(var_201_int); // 0x1bd TObjFunc
	ClearReplies(); // 0x1bf TObjFunc
	var_202_int = 538701; // 0x1c1 PushI
	var_203_int = 40607; // 0x1c2 PushI
	var_204_int = 40605; // 0x1c3 PushI
	AddReply(var_202_int, var_203_int, var_204_int); // 0x1c4 TObjFunc
	var_205_int = 538702; // 0x1c6 PushI
	var_206_int = 40609; // 0x1c7 PushI
	var_207_int = 40606; // 0x1c8 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1c9 TObjFunc
	return 0; // 0x1cb Return
	
Label_460:
	var_208_int = 40609; // 0x1cc PushI
	var_209_bool = var_7_cvector == var_208_int; // 0x1cd Eq
	if(var_209_bool == 0) goto Label_483; // 0x1ce JumpB
	var_210_string = ""; // 0x1cf PushV
	var_210_string = "Neutral"; // 0x1d0 MovS
	func_211(var_8_bool, var_210_string); // 0x1d1 NEW_2
	var_211_int = 538705; // 0x1d3 PushI
	SetMessage(var_211_int); // 0x1d4 TObjFunc
	ClearReplies(); // 0x1d6 TObjFunc
	var_212_int = 538707; // 0x1d8 PushI
	var_213_int = 40600; // 0x1d9 PushI
	var_214_int = 40612; // 0x1da PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1db TObjFunc
	var_215_int = 538708; // 0x1dd PushI
	var_216_int = 40600; // 0x1de PushI
	var_217_int = 40613; // 0x1df PushI
	AddReply(var_215_int, var_216_int, var_217_int); // 0x1e0 TObjFunc
	return 0; // 0x1e2 Return
	
Label_483:
	var_218_int = 40607; // 0x1e3 PushI
	var_219_bool = var_7_cvector == var_218_int; // 0x1e4 Eq
	if(var_219_bool == 0) goto Label_506; // 0x1e5 JumpB
	var_220_string = ""; // 0x1e6 PushV
	var_220_string = "Neutral"; // 0x1e7 MovS
	func_211(var_8_bool, var_220_string); // 0x1e8 NEW_2
	var_221_int = 538703; // 0x1ea PushI
	SetMessage(var_221_int); // 0x1eb TObjFunc
	ClearReplies(); // 0x1ed TObjFunc
	var_222_int = 538704; // 0x1ef PushI
	var_223_int = -1; // 0x1f0 PushI
	var_224_int = 40608; // 0x1f1 PushI
	AddReply(var_222_int, var_223_int, var_224_int); // 0x1f2 TObjFunc
	var_225_int = 538706; // 0x1f4 PushI
	var_226_int = 40600; // 0x1f5 PushI
	var_227_int = 40610; // 0x1f6 PushI
	AddReply(var_225_int, var_226_int, var_227_int); // 0x1f7 TObjFunc
	return 0; // 0x1f9 Return
	
Label_506:
	var_228_int = 40616; // 0x1fa PushI
	var_229_bool = var_7_cvector == var_228_int; // 0x1fb Eq
	if(var_229_bool == 0) goto Label_524; // 0x1fc JumpB
	var_230_string = ""; // 0x1fd PushV
	var_230_string = "Neutral"; // 0x1fe MovS
	func_211(var_8_bool, var_230_string); // 0x1ff NEW_2
	var_231_int = 538709; // 0x201 PushI
	SetMessage(var_231_int); // 0x202 TObjFunc
	ClearReplies(); // 0x204 TObjFunc
	var_232_int = 538710; // 0x206 PushI
	var_233_int = 40597; // 0x207 PushI
	var_234_int = 40617; // 0x208 PushI
	AddReply(var_232_int, var_233_int, var_234_int); // 0x209 TObjFunc
	return 0; // 0x20b Return
	
Label_524:
	var_235_int = 40597; // 0x20c PushI
	var_236_bool = var_7_cvector == var_235_int; // 0x20d Eq
	if(var_236_bool == 0) goto Label_547; // 0x20e JumpB
	var_237_string = ""; // 0x20f PushV
	var_237_string = "Neutral"; // 0x210 MovS
	func_211(var_8_bool, var_237_string); // 0x211 NEW_2
	var_238_int = 538694; // 0x213 PushI
	SetMessage(var_238_int); // 0x214 TObjFunc
	ClearReplies(); // 0x216 TObjFunc
	var_239_int = 538695; // 0x218 PushI
	var_240_int = 40600; // 0x219 PushI
	var_241_int = 40598; // 0x21a PushI
	AddReply(var_239_int, var_240_int, var_241_int); // 0x21b TObjFunc
	var_242_int = 538696; // 0x21d PushI
	var_243_int = 40600; // 0x21e PushI
	var_244_int = 40599; // 0x21f PushI
	AddReply(var_242_int, var_243_int, var_244_int); // 0x220 TObjFunc
	return 0; // 0x222 Return
	
Label_547:
	var_245_int = 40600; // 0x223 PushI
	var_246_bool = var_7_cvector == var_245_int; // 0x224 Eq
	if(var_246_bool == 0) goto Label_565; // 0x225 JumpB
	var_247_string = ""; // 0x226 PushV
	var_247_string = "Neutral"; // 0x227 MovS
	func_211(var_8_bool, var_247_string); // 0x228 NEW_2
	var_248_int = 538697; // 0x22a PushI
	SetMessage(var_248_int); // 0x22b TObjFunc
	ClearReplies(); // 0x22d TObjFunc
	var_249_int = 538698; // 0x22f PushI
	var_250_int = 36148; // 0x230 PushI
	var_251_int = 40602; // 0x231 PushI
	AddReply(var_249_int, var_250_int, var_251_int); // 0x232 TObjFunc
	return 0; // 0x234 Return
	
Label_565:
	var_252_int = 36148; // 0x235 PushI
	var_253_bool = var_7_cvector == var_252_int; // 0x236 Eq
	if(var_253_bool == 0) goto Label_583; // 0x237 JumpB
	var_254_string = ""; // 0x238 PushV
	var_254_string = "Neutral"; // 0x239 MovS
	func_211(var_8_bool, var_254_string); // 0x23a NEW_2
	var_255_int = 534507; // 0x23c PushI
	SetMessage(var_255_int); // 0x23d TObjFunc
	ClearReplies(); // 0x23f TObjFunc
	var_256_int = 534508; // 0x241 PushI
	var_257_int = 36150; // 0x242 PushI
	var_258_int = 36149; // 0x243 PushI
	AddReply(var_256_int, var_257_int, var_258_int); // 0x244 TObjFunc
	return 0; // 0x246 Return
	
Label_583:
	var_259_int = 36150; // 0x247 PushI
	var_260_bool = var_7_cvector == var_259_int; // 0x248 Eq
	if(var_260_bool == 0) goto Label_601; // 0x249 JumpB
	var_261_string = ""; // 0x24a PushV
	var_261_string = "Neutral"; // 0x24b MovS
	func_211(var_8_bool, var_261_string); // 0x24c NEW_2
	var_262_int = 534509; // 0x24e PushI
	SetMessage(var_262_int); // 0x24f TObjFunc
	ClearReplies(); // 0x251 TObjFunc
	var_263_int = 534510; // 0x253 PushI
	var_264_int = -1; // 0x254 PushI
	var_265_int = 36151; // 0x255 PushI
	AddReply(var_263_int, var_264_int, var_265_int); // 0x256 TObjFunc
	return 0; // 0x258 Return
	
Label_601:
	var_266_int = 15575; // 0x259 PushI
	var_267_bool = var_7_cvector == var_266_int; // 0x25a Eq
	if(var_267_bool == 0) goto Label_624; // 0x25b JumpB
	var_268_string = ""; // 0x25c PushV
	var_268_string = "Neutral"; // 0x25d MovS
	func_211(var_8_bool, var_268_string); // 0x25e NEW_2
	var_269_int = 514352; // 0x260 PushI
	SetMessage(var_269_int); // 0x261 TObjFunc
	ClearReplies(); // 0x263 TObjFunc
	var_270_int = 514353; // 0x265 PushI
	var_271_int = 15577; // 0x266 PushI
	var_272_int = 15576; // 0x267 PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0x268 TObjFunc
	var_273_int = 538679; // 0x26a PushI
	var_274_int = 15579; // 0x26b PushI
	var_275_int = 40577; // 0x26c PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0x26d TObjFunc
	return 0; // 0x26f Return
	
Label_624:
	var_276_int = 15577; // 0x270 PushI
	var_277_bool = var_7_cvector == var_276_int; // 0x271 Eq
	if(var_277_bool == 0) goto Label_647; // 0x272 JumpB
	var_278_string = ""; // 0x273 PushV
	var_278_string = "Neutral"; // 0x274 MovS
	func_211(var_8_bool, var_278_string); // 0x275 NEW_2
	var_279_int = 514354; // 0x277 PushI
	SetMessage(var_279_int); // 0x278 TObjFunc
	ClearReplies(); // 0x27a TObjFunc
	var_280_int = 514355; // 0x27c PushI
	var_281_int = 15579; // 0x27d PushI
	var_282_int = 15578; // 0x27e PushI
	AddReply(var_280_int, var_281_int, var_282_int); // 0x27f TObjFunc
	var_283_int = 538681; // 0x281 PushI
	var_284_int = 15581; // 0x282 PushI
	var_285_int = 40581; // 0x283 PushI
	AddReply(var_283_int, var_284_int, var_285_int); // 0x284 TObjFunc
	return 0; // 0x286 Return
	
Label_647:
	var_286_int = 15579; // 0x287 PushI
	var_287_bool = var_7_cvector == var_286_int; // 0x288 Eq
	if(var_287_bool == 0) goto Label_665; // 0x289 JumpB
	var_288_string = ""; // 0x28a PushV
	var_288_string = "Neutral"; // 0x28b MovS
	func_211(var_8_bool, var_288_string); // 0x28c NEW_2
	var_289_int = 514356; // 0x28e PushI
	SetMessage(var_289_int); // 0x28f TObjFunc
	ClearReplies(); // 0x291 TObjFunc
	var_290_int = 514357; // 0x293 PushI
	var_291_int = 15581; // 0x294 PushI
	var_292_int = 15580; // 0x295 PushI
	AddReply(var_290_int, var_291_int, var_292_int); // 0x296 TObjFunc
	return 0; // 0x298 Return
	
Label_665:
	var_293_int = 15581; // 0x299 PushI
	var_294_bool = var_7_cvector == var_293_int; // 0x29a Eq
	if(var_294_bool == 0) goto Label_688; // 0x29b JumpB
	var_295_string = ""; // 0x29c PushV
	var_295_string = "Neutral"; // 0x29d MovS
	func_211(var_8_bool, var_295_string); // 0x29e NEW_2
	var_296_int = 514358; // 0x2a0 PushI
	SetMessage(var_296_int); // 0x2a1 TObjFunc
	ClearReplies(); // 0x2a3 TObjFunc
	var_297_int = 514359; // 0x2a5 PushI
	var_298_int = 15583; // 0x2a6 PushI
	var_299_int = 15582; // 0x2a7 PushI
	AddReply(var_297_int, var_298_int, var_299_int); // 0x2a8 TObjFunc
	var_300_int = 538682; // 0x2aa PushI
	var_301_int = 15587; // 0x2ab PushI
	var_302_int = 40583; // 0x2ac PushI
	AddReply(var_300_int, var_301_int, var_302_int); // 0x2ad TObjFunc
	return 0; // 0x2af Return
	
Label_688:
	var_303_int = 15583; // 0x2b0 PushI
	var_304_bool = var_7_cvector == var_303_int; // 0x2b1 Eq
	if(var_304_bool == 0) goto Label_706; // 0x2b2 JumpB
	var_305_string = ""; // 0x2b3 PushV
	var_305_string = "Neutral"; // 0x2b4 MovS
	func_211(var_8_bool, var_305_string); // 0x2b5 NEW_2
	var_306_int = 514360; // 0x2b7 PushI
	SetMessage(var_306_int); // 0x2b8 TObjFunc
	ClearReplies(); // 0x2ba TObjFunc
	var_307_int = 514361; // 0x2bc PushI
	var_308_int = 15585; // 0x2bd PushI
	var_309_int = 15584; // 0x2be PushI
	AddReply(var_307_int, var_308_int, var_309_int); // 0x2bf TObjFunc
	return 0; // 0x2c1 Return
	
Label_706:
	var_310_int = 15585; // 0x2c2 PushI
	var_311_bool = var_7_cvector == var_310_int; // 0x2c3 Eq
	if(var_311_bool == 0) goto Label_724; // 0x2c4 JumpB
	var_312_string = ""; // 0x2c5 PushV
	var_312_string = "Neutral"; // 0x2c6 MovS
	func_211(var_8_bool, var_312_string); // 0x2c7 NEW_2
	var_313_int = 514362; // 0x2c9 PushI
	SetMessage(var_313_int); // 0x2ca TObjFunc
	ClearReplies(); // 0x2cc TObjFunc
	var_314_int = 514363; // 0x2ce PushI
	var_315_int = 15587; // 0x2cf PushI
	var_316_int = 15586; // 0x2d0 PushI
	AddReply(var_314_int, var_315_int, var_316_int); // 0x2d1 TObjFunc
	return 0; // 0x2d3 Return
	
Label_724:
	var_317_int = 15587; // 0x2d4 PushI
	var_318_bool = var_7_cvector == var_317_int; // 0x2d5 Eq
	if(var_318_bool == 0) goto Label_752; // 0x2d6 JumpB
	var_319_string = ""; // 0x2d7 PushV
	var_319_string = "Neutral"; // 0x2d8 MovS
	func_211(var_8_bool, var_319_string); // 0x2d9 NEW_2
	var_320_int = 514364; // 0x2db PushI
	SetMessage(var_320_int); // 0x2dc TObjFunc
	ClearReplies(); // 0x2de TObjFunc
	var_321_int = 514365; // 0x2e0 PushI
	var_322_int = 15589; // 0x2e1 PushI
	var_323_int = 15588; // 0x2e2 PushI
	AddReply(var_321_int, var_322_int, var_323_int); // 0x2e3 TObjFunc
	var_324_int = 538683; // 0x2e5 PushI
	var_325_int = 40586; // 0x2e6 PushI
	var_326_int = 40585; // 0x2e7 PushI
	AddReply(var_324_int, var_325_int, var_326_int); // 0x2e8 TObjFunc
	var_327_int = 539687; // 0x2ea PushI
	var_328_int = 41639; // 0x2eb PushI
	var_329_int = 41638; // 0x2ec PushI
	AddReply(var_327_int, var_328_int, var_329_int); // 0x2ed TObjFunc
	return 0; // 0x2ef Return
	
Label_752:
	var_330_int = 41639; // 0x2f0 PushI
	var_331_bool = var_7_cvector == var_330_int; // 0x2f1 Eq
	if(var_331_bool == 0) goto Label_770; // 0x2f2 JumpB
	var_332_string = ""; // 0x2f3 PushV
	var_332_string = "Neutral"; // 0x2f4 MovS
	func_211(var_8_bool, var_332_string); // 0x2f5 NEW_2
	var_333_int = 539688; // 0x2f7 PushI
	SetMessage(var_333_int); // 0x2f8 TObjFunc
	ClearReplies(); // 0x2fa TObjFunc
	var_334_int = 539689; // 0x2fc PushI
	var_335_int = 15589; // 0x2fd PushI
	var_336_int = 41640; // 0x2fe PushI
	AddReply(var_334_int, var_335_int, var_336_int); // 0x2ff TObjFunc
	return 0; // 0x301 Return
	
Label_770:
	var_337_int = 40586; // 0x302 PushI
	var_338_bool = var_7_cvector == var_337_int; // 0x303 Eq
	if(var_338_bool == 0) goto Label_788; // 0x304 JumpB
	var_339_string = ""; // 0x305 PushV
	var_339_string = "Neutral"; // 0x306 MovS
	func_211(var_8_bool, var_339_string); // 0x307 NEW_2
	var_340_int = 538684; // 0x309 PushI
	SetMessage(var_340_int); // 0x30a TObjFunc
	ClearReplies(); // 0x30c TObjFunc
	var_341_int = 538686; // 0x30e PushI
	var_342_int = 40589; // 0x30f PushI
	var_343_int = 40588; // 0x310 PushI
	AddReply(var_341_int, var_342_int, var_343_int); // 0x311 TObjFunc
	return 0; // 0x313 Return
	
Label_788:
	var_344_int = 40589; // 0x314 PushI
	var_345_bool = var_7_cvector == var_344_int; // 0x315 Eq
	if(var_345_bool == 0) goto Label_806; // 0x316 JumpB
	var_346_string = ""; // 0x317 PushV
	var_346_string = "Neutral"; // 0x318 MovS
	func_211(var_8_bool, var_346_string); // 0x319 NEW_2
	var_347_int = 538687; // 0x31b PushI
	SetMessage(var_347_int); // 0x31c TObjFunc
	ClearReplies(); // 0x31e TObjFunc
	var_348_int = 538688; // 0x320 PushI
	var_349_int = 40591; // 0x321 PushI
	var_350_int = 40590; // 0x322 PushI
	AddReply(var_348_int, var_349_int, var_350_int); // 0x323 TObjFunc
	return 0; // 0x325 Return
	
Label_806:
	var_351_int = 40591; // 0x326 PushI
	var_352_bool = var_7_cvector == var_351_int; // 0x327 Eq
	if(var_352_bool == 0) goto Label_829; // 0x328 JumpB
	var_353_string = ""; // 0x329 PushV
	var_353_string = "Neutral"; // 0x32a MovS
	func_211(var_8_bool, var_353_string); // 0x32b NEW_2
	var_354_int = 538689; // 0x32d PushI
	SetMessage(var_354_int); // 0x32e TObjFunc
	ClearReplies(); // 0x330 TObjFunc
	var_355_int = 538690; // 0x332 PushI
	var_356_int = 15589; // 0x333 PushI
	var_357_int = 40592; // 0x334 PushI
	AddReply(var_355_int, var_356_int, var_357_int); // 0x335 TObjFunc
	var_358_int = 539690; // 0x337 PushI
	var_359_int = -1; // 0x338 PushI
	var_360_int = 41642; // 0x339 PushI
	AddReply(var_358_int, var_359_int, var_360_int); // 0x33a TObjFunc
	return 0; // 0x33c Return
	
Label_829:
	var_361_int = 15589; // 0x33d PushI
	var_362_bool = var_7_cvector == var_361_int; // 0x33e Eq
	if(var_362_bool == 0) goto Label_852; // 0x33f JumpB
	var_363_string = ""; // 0x340 PushV
	var_363_string = "Neutral"; // 0x341 MovS
	func_211(var_8_bool, var_363_string); // 0x342 NEW_2
	var_364_int = 514366; // 0x344 PushI
	SetMessage(var_364_int); // 0x345 TObjFunc
	ClearReplies(); // 0x347 TObjFunc
	var_365_int = 514367; // 0x349 PushI
	var_366_int = -1; // 0x34a PushI
	var_367_int = 15590; // 0x34b PushI
	AddReply(var_365_int, var_366_int, var_367_int); // 0x34c TObjFunc
	var_368_int = 538685; // 0x34e PushI
	var_369_int = -1; // 0x34f PushI
	var_370_int = 40587; // 0x350 PushI
	AddReply(var_368_int, var_369_int, var_370_int); // 0x351 TObjFunc
	return 0; // 0x353 Return
	
Label_852:
	var_3_string = 1; // 0x354 TMovB
	var_371_bool = 0; // 0x355 PushV
	func_1760(var_371_bool); // 0x356 NEW_2
	if(var_371_bool == 0) goto Label_860; // 0x358 JumpB
	lshStopAnimation(); // 0x359 Func
	goto Label_862; // 0x35b Jump
	
Label_862:
	return 0; // 0x35e Return
	
Label_860:
	StopAnimation(); // 0x35c Func
	
Label_864:
	return 0; // 0x360 Return
}


task_3_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_bool = 0; var_9_bool = 0; // 0x36d PushV
	var_10_string = "cleanup"; // 0x36e PushS
	var_11_bool = var_7_string == var_10_string; // 0x36f Eq
	if(var_11_bool == 0) goto Label_892; // 0x370 JumpB
	var_1_object = 1; // 0x371 TMovB
	IsLoaded(var_9_bool); // 0x372 Func
	var_12_bool = var_9_bool == 0; // 0x374 Not
	if(var_12_bool == 0) goto Label_891; // 0x375 JumpB
	var_13_object = Obj(); // 0x376 PushV
	func_1459(var_13_object); // 0x377 NEW_2
	RemoveActor(var_13_object); // 0x379 Func
	
Label_891:
	goto Label_896; // 0x37b Jump
	
Label_896:
	return 2; // 0x380 Return
	
Label_892:
	var_16_string = "restore"; // 0x37c PushS
	var_17_bool = var_7_string == var_16_string; // 0x37d Eq
	if(var_17_bool == 0) goto Label_896; // 0x37e JumpB
	var_1_object = 0; // 0x37f TMovB
}


task_3_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	var_7_object = var_1_object; // 0x381 PushT
	if(var_7_object == 0) goto Label_906; // 0x382 JumpB
	var_8_object = Obj(); // 0x383 PushV
	func_1459(var_8_object); // 0x384 NEW_2
	RemoveActor(var_8_object); // 0x386 Func
	Hold(); // 0x388 Func
	
Label_906:
	func_1024(); // 0x38b NEW_2
	return 0; // 0x38d Return
}


	task_3_event_5(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
	{
	func_1039(); // 0x38f NEW_2
	return 0; // 0x391 Return
	}


task_3_event_7(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_int)
{
	var_8_int = 10; // 0x3dc PushI
	var_9_bool = var_7_int == var_8_int; // 0x3dd Eq
	if(var_9_bool == 0) goto Label_1023; // 0x3de JumpB
	func_983(); // 0x3e0 NEW_2
	var_11_bool = 0; // 0x3e2 PushV
	var_11_bool = 0; // 0x3e3 MovB
	var_12_bool = 0; // 0x3e4 PushV
	func_1196(var_12_bool); // 0x3e5 NEW_2
	if(var_12_bool == 0) goto Label_1005; // 0x3e7 JumpB
	var_15_bool = 0; // 0x3e8 PushV
	func_952(var_15_bool); // 0x3e9 NEW_2
	if(var_15_bool == 0) goto Label_1005; // 0x3eb JumpB
	var_11_bool = 1; // 0x3ec MovB
	
Label_1005:
	if(var_11_bool == 0) goto Label_1017; // 0x3ed JumpB
	func_934(); // 0x3ef NEW_2
	var_50_bool = 0; var_51_object = Obj(); // 0x3f1 PushV
	var_52_object = Obj(); // 0x3f2 PushV
	func_1459(var_52_object); // 0x3f3 NEW_2
	var_51_object = var_52_object; // 0x3f4 Mov
	func_1344(var_51_object); // 0x3f6 NEW_2
	goto Label_1023; // 0x3f8 Jump
	
Label_1023:
	return 0; // 0x3ff Return
	
Label_1017:
	func_947(var_7_int); // 0x3fa NEW_2
	func_974(); // 0x3fd NEW_2
}


task_3_event_45(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_bool)
{
	var_8_bool = var_7_bool; // 0x41d Push
	if(var_8_bool == 0) goto Label_1059; // 0x41e JumpB
	func_974(); // 0x420 NEW_2
	goto Label_1063; // 0x422 Jump
	
Label_1063:
	return 0; // 0x427 Return
	
Label_1059:
	var_14_string = ""; // 0x423 PushV
	var_14_string = "Neutral"; // 0x424 MovS
	func_1424(var_14_string); // 0x425 NEW_2
}


task_3_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0; // 0x428 PushV
	IsOverrideActive(var_9_bool); // 0x429 Func
	var_10_bool = var_9_bool == 0; // 0x42b Not
	if(var_10_bool == 0) goto Label_1092; // 0x42c JumpB
	EventDisable(0); // 0x42d EventDisable
	func_1164(); // 0x42f NEW_2
	var_11_bool = 0; var_12_object = Obj(); // 0x431 PushV
	var_12_object = var_7_object; // 0x432 Mov
	func_1187(var_12_object); // 0x433 NEW_2
	EventEnable(0); // 0x435 EventEnable
	var_25_object = Obj(); // 0x436 PushV
	var_25_object = var_7_object; // 0x437 Mov
	func_865(var_25_object); // 0x438 NEW_2
	var_284_string = ""; // 0x43a PushV
	var_284_string = "Neutral"; // 0x43b MovS
	func_1424(var_284_string); // 0x43c NEW_2
	func_983(); // 0x43f NEW_2
	func_974(); // 0x442 NEW_2
	
Label_1092:
	return 2; // 0x444 Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_cvector, var_6_bool)
{
	func_914(var_6_bool); // 0x36a NEW_2
	return 0; // 0x36c Return
}


func_1024()
{
	func_1164(); // 0x401 NEW_2
	func_983(); // 0x404 NEW_2
	lshStopSpeech(); // 0x406 Func
	lshStopAnimation(); // 0x408 Func
	StopAsync(); // 0x40a Func
	Hold(); // 0x40c Func
	return 0; // 0x40e Return
}


func_0()
{
	
Label_0:
	Hold(); // 0x0 Func
	var_11_bool = 0; // 0x2 PushV
	func_1196(var_11_bool); // 0x3 NEW_2
	var_12_bool = var_11_bool == 0; // 0x5 Not
	if(var_12_bool == 0) goto Label_0; // 0x6 JumpB
	return 0; // 0x7 Return
}


func_1540(var_39_int)
{
	var_40_int = 0; var_41_bool = 0; var_42_int = 0; var_43_bool = 0; // 0x604 PushV
	var_42_int = 0; // 0x605 MovI
	
Label_1542:
	var_44_string = "all"; // 0x606 PushS
	var_45_string = ""; var_46_int = 0; // 0x607 PushV
	var_46_int = var_42_int; // 0x608 Mov
	func_1533(var_45_string, var_46_int); // 0x609 NEW_2
	HasAnimation(var_43_bool, var_44_string, var_45_string); // 0x60b Func
	var_50_bool = var_43_bool == 0; // 0x60d Not
	if(var_50_bool == 0) goto Label_1552; // 0x60e JumpB
	goto Label_1555; // 0x60f Jump
	
Label_1555:
	var_39_int = var_42_int; // 0x613 Mov
	return 4; // 0x614 Return
	
Label_1552:
	var_51_int = 1; // 0x610 PushI
	var_42_int = var_42_int + var_51_int; // 0x611 Add2
	goto Label_1542; // 0x612 Jump
}


func_1668()
{
	var_83_object = Obj(); var_84_object = Obj(); // 0x684 PushV
	var_85_int = 690; // 0x685 PushI
	var_86_int = 2; // 0x686 PushI
	var_87_int = 534538; // 0x687 PushI
	CreateDiaryEntry(var_84_object, var_85_int, var_86_int, var_87_int); // 0x688 Func
	var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; // 0x68a PushV
	var_89_object = var_84_object; // 0x68b Mov
	var_90_int = 686; // 0x68c MovI
	func_1707(var_88_bool, var_89_object, var_90_int); // 0x68d NEW_2
	return 2; // 0x68f Return
}


func_1286(var_37_bool, var_38_object)
{
	var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; // 0x506 PushV
	var_46_string = "voice_common"; // 0x507 PushS
	GetVariable(var_46_string, var_44_int); // 0x508 Func
	var_47_int = var_44_int; // 0x50a Push
	if(var_47_int == 0) goto Label_1324; // 0x50b JumpB
	var_48_bool = 0; var_49_object = Obj(); // 0x50c PushV
	var_49_object = var_38_object; // 0x50d Mov
	func_1344(var_49_object); // 0x50e NEW_2
	var_78_bool = var_48_bool == 0; // 0x510 Not
	if(var_78_bool == 0) goto Label_1306; // 0x511 JumpB
	var_79_bool = 0; var_80_object = Obj(); // 0x512 PushV
	var_80_object = var_38_object; // 0x513 Mov
	func_1381(var_80_object); // 0x514 NEW_2
	var_114_bool = var_79_bool == 0; // 0x516 Not
	if(var_114_bool == 0) goto Label_1306; // 0x517 JumpB
	var_37_bool = 0; // 0x518 MovB
	return 4; // 0x519 Return
	
Label_1306:
	var_115_int = 2; // 0x51a PushI
	irand(var_45_int, var_115_int); // 0x51b Func
	var_116_int = var_45_int; // 0x51d Push
	if(var_116_int == 0) goto Label_1319; // 0x51e JumpB
	var_117_string = "voice_common"; // 0x51f PushS
	var_118_int = 1; // 0x520 PushI
	var_119_int = var_44_int + var_118_int; // 0x521 Add
	var_120_int = 3; // 0x522 PushI
	var_121_int = var_119_int / var_120_int; // 0x523 Mod
	SetVariable(var_117_string, var_121_int); // 0x524 Func
	goto Label_1323; // 0x526 Jump
	
Label_1323:
	goto Label_1342; // 0x52b Jump
	
Label_1342:
	var_37_bool = 1; // 0x53e MovB
	return 4; // 0x53f Return
	
Label_1319:
	var_122_string = "voice_common"; // 0x527 PushS
	var_123_int = 0; // 0x528 PushI
	SetVariable(var_122_string, var_123_int); // 0x529 Func
	
Label_1324:
	var_124_bool = 0; var_125_object = Obj(); // 0x52c PushV
	var_125_object = var_38_object; // 0x52d Mov
	func_1381(var_125_object); // 0x52e NEW_2
	var_126_bool = var_124_bool == 0; // 0x530 Not
	if(var_126_bool == 0) goto Label_1338; // 0x531 JumpB
	var_127_bool = 0; var_128_object = Obj(); // 0x532 PushV
	var_128_object = var_38_object; // 0x533 Mov
	func_1344(var_128_object); // 0x534 NEW_2
	var_129_bool = var_127_bool == 0; // 0x536 Not
	if(var_129_bool == 0) goto Label_1338; // 0x537 JumpB
	var_37_bool = 0; // 0x538 MovB
	return 4; // 0x539 Return
	
Label_1338:
	var_130_string = "voice_common"; // 0x53a PushS
	var_131_int = 1; // 0x53b PushI
	SetVariable(var_130_string, var_131_int); // 0x53c Func
}


func_1162(var_59_bool)
{
	var_59_bool = 1; // 0x48a MovB
	return 0; // 0x48b Return
}


func_1164()
{
	StopAnimation(); // 0x48c Func
	StopGroup0(); // 0x48e Func
	return 0; // 0x490 Return
}


func_13(var_0_object, var_26_int, var_27_object)
{
	var_29_object = Obj(); var_30_bool = 0; var_31_int = 0; var_32_bool = 0; var_33_object = Obj(); var_34_bool = 0; var_35_int = 0; var_36_bool = 0; // 0xd PushV
	var_0_object = var_27_object; // 0xe TMov
	var_37_bool = 0; var_38_object = Obj(); // 0xf PushV
	var_39_object = Obj(); // 0x10 PushV
	func_1459(var_39_object); // 0x11 NEW_2
	var_38_object = var_39_object; // 0x12 Mov
	func_1286(var_37_bool, var_38_object); // 0x14 NEW_2
	var_132_bool = 0; var_133_object = Obj(); var_134_float = 0; // 0x16 PushV
	var_133_object = var_27_object; // 0x17 Mov
	var_134_float = 70.0; // 0x18 MovF
	func_1201(var_133_object, var_134_float); // 0x19 NEW_2
	var_178_bool = var_132_bool == 0; // 0x1b Not
	if(var_178_bool == 0) goto Label_31; // 0x1c JumpB
	var_26_int = -2; // 0x1d MovI
	return 8; // 0x1e Return
	
Label_31:
	CreateDialog(var_33_object); // 0x1f Func
	var_179_int = 0; // 0x21 PushV
	func_1754(var_179_int); // 0x22 NEW_2
	SetNPCName(var_179_int); // 0x24 ObjFunc
	var_180_int = 0; // 0x26 PushV
	func_1752(var_180_int); // 0x27 NEW_2
	SetNPCDescription(var_180_int); // 0x29 ObjFunc
	var_181_string = ""; // 0x2b PushV
	func_1756(var_181_string); // 0x2c NEW_2
	SetPhoto(var_181_string); // 0x2e ObjFunc
	var_182_string = ""; // 0x30 PushV
	func_1758(var_182_string); // 0x31 NEW_2
	SetPhoto2(var_182_string); // 0x33 ObjFunc
	var_183_int = 0; // 0x35 PushV
	func_1735(var_183_int); // 0x36 NEW_2
	SetPlayerName(var_183_int); // 0x38 ObjFunc
	var_35_int = -1; // 0x3a MovI
	IsOverrideActive(var_34_bool); // 0x3b Func
	var_191_bool = var_34_bool; // 0x3d Push
	if(var_191_bool == 0) goto Label_65; // 0x3e JumpB
	var_26_int = -2; // 0x3f MovI
	return 8; // 0x40 Return
	
Label_65:
	DoDialog(var_33_object); // 0x41 Func
	var_192_object = Obj(); var_193_object = Obj(); // 0x43 PushV
	var_192_object = var_27_object; // 0x44 Mov
	var_193_object = var_33_object; // 0x45 Mov
	TaskCall(2); // 0x46 TaskCall
	func_94(var_194_object, var_195_object, var_196_string, var_197_bool, var_192_object, var_193_object); // 0x47 NEW_2
	TaskReturn(); // 0x48 TaskReturn
	IsDialogEnd(var_36_bool); // 0x4a ObjFunc
	
Label_76:
	var_276_bool = var_36_bool == 0; // 0x4c Not
	if(var_276_bool == 0) goto Label_83; // 0x4d JumpB
	sync(); // 0x4e Func
	IsDialogEnd(var_36_bool); // 0x50 ObjFunc
	goto Label_76; // 0x52 Jump
	
Label_83:
	var_277_object = Obj(); // 0x53 PushV
	var_277_object = var_27_object; // 0x54 Mov
	func_1269(); // 0x55 NEW_2
	StopDialog(var_33_object); // 0x57 Func
	GetReturnValue(var_35_int); // 0x59 ObjFunc
	var_26_int = var_35_int; // 0x5b Mov
	return 8; // 0x5c Return
}


func_1039()
{
	StopGroup0(); // 0x40f Func
	func_983(); // 0x412 NEW_2
	var_14_string = ""; // 0x414 PushV
	var_14_string = "Neutral"; // 0x415 MovS
	func_1424(var_14_string); // 0x416 NEW_2
	func_974(); // 0x419 NEW_2
	return 0; // 0x41b Return
}


func_1424(var_14_string)
{
	var_15_float = 0; var_16_float = 0; var_17_float = 0; var_18_float = 0; // 0x590 PushV
	lshGetAnimTimes(var_14_string, var_17_float, var_18_float); // 0x591 Func
	var_19_bool = 0; // 0x593 PushB
	lshPlayAnimation(var_17_float, var_18_float, var_19_bool); // 0x594 Func
	return 4; // 0x596 Return
}


func_1169(var_22_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); // 0x491 PushV
	GetPosition(var_27_cvector); // 0x492 Func
	GetPosition(var_28_cvector); // 0x494 ObjFunc
	var_29_cvector = var_28_cvector - var_27_cvector; // 0x496 Sub2
	var_22_float = var_29_cvector | var_29_cvector; // 0x497 Or2
	return 6; // 0x498 Return
}


func_914(var_0_object)
{
	var_7_bool = 0; // 0x392 PushV
	func_1196(var_7_bool); // 0x393 NEW_2
	var_10_bool = var_7_bool == 0; // 0x395 Not
	if(var_10_bool == 0) goto Label_924; // 0x396 JumpB
	TaskCall(0); // 0x398 TaskCall
	func_0(); // 0x399 NEW_2
	TaskReturn(); // 0x39a TaskReturn
	
Label_924:
	func_910(); // 0x39d NEW_2
	GetDirection(var_0_object); // 0x39f Func
	
Label_929:
	func_1093(); // 0x3a2 NEW_2
	goto Label_929; // 0x3a4 Jump
}


func_1681()
{
	var_23_object = Obj(); var_24_object = Obj(); // 0x691 PushV
	var_25_int = 689; // 0x692 PushI
	var_26_int = 2; // 0x693 PushI
	var_27_int = 534537; // 0x694 PushI
	CreateDiaryEntry(var_24_object, var_25_int, var_26_int, var_27_int); // 0x695 Func
	var_28_bool = 0; var_29_object = Obj(); var_30_int = 0; // 0x697 PushV
	var_29_object = var_24_object; // 0x698 Mov
	var_30_int = 686; // 0x699 MovI
	func_1707(var_28_bool, var_29_object, var_30_int); // 0x69a NEW_2
	return 2; // 0x69c Return
}


func_1557(var_19_object)
{
	var_21_string = "d11q06KlaraRing"; // 0x616 PushS
	var_22_int = 1; // 0x617 PushI
	SetVariable(var_21_string, var_22_int); // 0x618 Func
	func_1681(); // 0x61b NEW_2
	var_46_string = "d11q06KlaraRing is given"; // 0x61d PushS
	Trace(var_46_string); // 0x61e Func
	var_47_object = Obj(); var_48_string = ""; var_49_int = 0; // 0x620 PushV
	var_47_object = var_19_object; // 0x621 Mov
	var_48_string = "d11q06KlaraRing"; // 0x622 MovS
	var_49_int = 1; // 0x623 MovI
	func_1511(var_47_object, var_48_string, var_49_int); // 0x624 NEW_2
	return 0; // 0x626 Return
}


func_1431(var_215_string, var_216_bool)
{
	var_219_float = 0; var_220_float = 0; var_221_float = 0; var_222_float = 0; // 0x597 PushV
	lshGetAnimTimes(var_215_string, var_221_float, var_222_float); // 0x598 Func
	lshPlayAnimation(var_221_float, var_222_float, var_216_bool); // 0x59a Func
	return 4; // 0x59c Return
}


func_1177(var_15_bool, var_16_cvector)
{
	var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; // 0x499 PushV
	GetPosition(var_20_cvector); // 0x49a Func
	var_21_cvector = var_16_cvector - var_20_cvector; // 0x49c Sub2
	var_23_float = GetByIndex(var_21_cvector, 0); // 0x49d PushE
	var_24_float = GetByIndex(var_21_cvector, 2); // 0x49e PushE
	Rotate(var_23_float, var_24_float, var_22_bool); // 0x49f Func
	var_15_bool = var_22_bool; // 0x4a1 Mov
	return 6; // 0x4a2 Return
}


func_1437(var_71_bool, var_72_string)
{
	var_73_bool = 0; var_74_bool = 0; // 0x59d PushV
	var_75_bool = 0; // 0x59e PushV
	func_1760(var_75_bool); // 0x59f NEW_2
	if(var_75_bool == 0) goto Label_1450; // 0x5a1 JumpB
	lshHasSpeech(var_74_bool, var_72_string); // 0x5a2 Func
	var_76_bool = var_74_bool; // 0x5a4 Push
	if(var_76_bool == 0) goto Label_1450; // 0x5a5 JumpB
	lshPlaySpeech(var_72_string); // 0x5a6 Func
	var_71_bool = 1; // 0x5a8 MovB
	return 2; // 0x5a9 Return
	
Label_1450:
	var_71_bool = 0; // 0x5aa MovB
	return 2; // 0x5ab Return
}


func_1694(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj(); // 0x69e PushV
	GetDiaryRoot(var_39_object); // 0x69f Func
	var_40_bool = var_39_object == 0; // 0x6a1 Not
	if(var_40_bool == 0) goto Label_1704; // 0x6a2 JumpB
	var_41_string = "Can't retrieve diary root"; // 0x6a3 PushS
	Trace(var_41_string); // 0x6a4 Func
	var_37_object = 0; // 0x6a6 MovB
	return 2; // 0x6a7 Return
	
Label_1704:
	var_37_object = var_39_object; // 0x6a8 Mov
	return 2; // 0x6a9 Return
}


func_1187(var_11_bool)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); // 0x4a3 PushV
	GetPosition(var_14_cvector); // 0x4a4 ObjFunc
	var_15_bool = 0; var_16_cvector = CVector(0,0,0); // 0x4a6 PushV
	var_16_cvector = var_14_cvector; // 0x4a7 Mov
	func_1177(var_15_bool, var_16_cvector); // 0x4a8 NEW_2
	var_11_bool = var_15_bool; // 0x4a9 Mov
	return 2; // 0x4ab Return
}


func_934()
{
	var_32_object = Obj(); var_33_object = Obj(); // 0x3a6 PushV
	var_34_string = "player"; // 0x3a7 PushS
	FindActor(var_33_object, var_34_string); // 0x3a8 Func
	var_35_bool = var_33_object == 0; // 0x3aa Not
	if(var_35_bool == 0) goto Label_941; // 0x3ab JumpB
	return 2; // 0x3ac Return
	
Label_941:
	var_36_bool = 0; var_37_object = Obj(); // 0x3ad PushV
	var_37_object = var_33_object; // 0x3ae Mov
	func_1187(var_37_object); // 0x3af NEW_2
	return 2; // 0x3b1 Return
}


func_1575()
{
	var_70_bool = 0; // 0x628 PushV
	var_70_bool = 0; // 0x629 MovB
	var_71_int = 0; var_72_string = ""; // 0x62a PushV
	var_72_string = "d11q06KapellaRing"; // 0x62b MovS
	func_1475(var_71_int, var_72_string); // 0x62c NEW_2
	var_75_int = 0; // 0x62e PushI
	var_76_bool = var_71_int != var_75_int; // 0x62f Neq
	if(var_76_bool == 0) goto Label_1593; // 0x630 JumpB
	var_77_int = 0; var_78_string = ""; // 0x631 PushV
	var_78_string = "d11q06KlaraRing"; // 0x632 MovS
	func_1475(var_77_int, var_78_string); // 0x633 NEW_2
	var_79_int = 0; // 0x635 PushI
	var_80_bool = var_77_int != var_79_int; // 0x636 Neq
	if(var_80_bool == 0) goto Label_1593; // 0x637 JumpB
	var_70_bool = 1; // 0x638 MovB
	
Label_1593:
	if(var_70_bool == 0) goto Label_1601; // 0x639 JumpB
	var_81_string = "d11q06"; // 0x63a PushS
	var_82_int = 2; // 0x63b PushI
	SetVariable(var_81_string, var_82_int); // 0x63c Func
	func_1668(); // 0x63f NEW_2
	
Label_1601:
	return 0; // 0x641 Return
}


func_1707(var_28_bool, var_29_object, var_30_int)
{
	var_31_object = Obj(); var_32_object = Obj(); var_33_int = 0; var_34_object = Obj(); var_35_object = Obj(); var_36_int = 0; // 0x6ab PushV
	var_37_object = Obj(); // 0x6ac PushV
	func_1694(var_37_object); // 0x6ad NEW_2
	var_34_object = var_37_object; // 0x6ae Mov
	Find(var_30_int, var_35_object); // 0x6b0 ObjFunc
	var_42_bool = var_35_object == 0; // 0x6b2 Not
	if(var_42_bool == 0) goto Label_1722; // 0x6b3 JumpB
	var_43_string = "Can't find diary parent with id: "; // 0x6b4 PushS
	var_44_int = var_43_string + var_30_int; // 0x6b5 Add
	Trace(var_44_int); // 0x6b6 Func
	var_28_bool = 0; // 0x6b8 MovB
	return 6; // 0x6b9 Return
	
Label_1722:
	AddChild(var_29_object); // 0x6ba ObjFunc
	var_45_int = 7; // 0x6bc PushI
	SendWorldWndMessage(var_45_int); // 0x6bd Func
	GetCategory(var_36_int); // 0x6bf ObjFunc
	SetDiarySection(var_36_int); // 0x6c1 Func
	var_28_bool = 0; // 0x6c3 MovB
	return 6; // 0x6c4 Return
}


func_1196(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0; // 0x4ac PushV
	IsLoaded(var_9_bool); // 0x4ad Func
	var_7_bool = var_9_bool; // 0x4af Mov
	return 2; // 0x4b0 Return
}


func_1452()
{
	var_10_bool = 0; // 0x5ac PushV
	func_1760(var_10_bool); // 0x5ad NEW_2
	if(var_10_bool == 0) goto Label_1458; // 0x5af JumpB
	lshStopSpeech(); // 0x5b0 Func
	
Label_1458:
	return 0; // 0x5b2 Return
}


func_1201(var_132_bool, var_134_float)
{
	var_135_float = 0; var_136_cvector = CVector(0,0,0); var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_bool = 0; var_143_bool = 0; var_144_float = 0; var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_bool = 0; var_152_bool = 0; // 0x4b1 PushV
	GetPosition(var_145_cvector); // 0x4b2 ObjFunc
	GetEyesHeight(var_144_float); // 0x4b4 ObjFunc
	var_153_float = GetByIndex(var_145_cvector, 1); // 0x4b6 PushE
	var_153_float = var_153_float + var_144_float; // 0x4b7 Add2
	SetByIndex(var_145_cvector, 1) = var_153_float; // 0x4b8 PopE
	GetPosition(var_146_cvector); // 0x4b9 Func
	GetEyesHeight(var_144_float); // 0x4bb Func
	var_154_float = GetByIndex(var_146_cvector, 1); // 0x4bd PushE
	var_154_float = var_154_float + var_144_float; // 0x4be Add2
	SetByIndex(var_146_cvector, 1) = var_154_float; // 0x4bf PopE
	var_147_cvector = var_145_cvector - var_146_cvector; // 0x4c0 Sub2
	var_155_float = GetByIndex(var_147_cvector, 1); // 0x4c1 PushE
	var_155_float = 0; // 0x4c2 MovI
	SetByIndex(var_147_cvector, 1) = var_155_float; // 0x4c3 PopE
	var_156_int = var_147_cvector | var_147_cvector; // 0x4c4 Or
	var_157_float = sqrt(var_156_int); // 0x4c5 Sqrt
	var_147_cvector = var_147_cvector / var_147_cvector; // 0x4c6 Div2
	var_148_cvector = -var_147_cvector; // 0x4c7 Neg2
	var_158_float = var_147_cvector * var_134_float; // 0x4c8 Mult
	var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); // 0x4c9 PushV
	var_161_cvector = CVector(0.0, 1.0, 0.0); // 0x4ca PushVec
	var_160_cvector = var_148_cvector ^ var_161_cvector; // 0x4cb Xor2
	func_1465(var_159_cvector, var_160_cvector); // 0x4cc NEW_2
	var_167_int = 25; // 0x4ce PushI
	var_168_float = var_159_cvector * var_167_int; // 0x4cf Mult
	var_169_int = var_158_float + var_168_float; // 0x4d0 Add
	var_170_cvector = CVector(0.0, 10.0, 0.0); // 0x4d1 PushVec
	var_149_cvector = var_169_int - var_170_cvector; // 0x4d2 Sub2
	var_150_cvector = var_146_cvector + var_149_cvector; // 0x4d3 Add2
	IsOverrideActive(var_151_bool); // 0x4d4 Func
	var_171_bool = var_151_bool; // 0x4d6 Push
	if(var_171_bool == 0) goto Label_1242; // 0x4d7 JumpB
	var_132_bool = 0; // 0x4d8 MovB
	return 18; // 0x4d9 Return
	
Label_1242:
	StopWorld(); // 0x4da Func
	CameraTransit(var_150_cvector, var_148_cvector); // 0x4dc Func
	var_172_float = GetByIndex(var_149_cvector, 0); // 0x4de PushE
	var_173_float = GetByIndex(var_149_cvector, 2); // 0x4df PushE
	Rotate(var_172_float, var_173_float); // 0x4e0 Func
	var_174_bool = 0; // 0x4e2 PushV
	func_1760(var_174_bool); // 0x4e3 NEW_2
	if(var_174_bool == 0) goto Label_1255; // 0x4e5 JumpB
	goto Label_1263; // 0x4e6 Jump
	
Label_1263:
	CameraWaitForPlayFinish(); // 0x4ef Func
	ResumeWorld(); // 0x4f1 Func
	var_132_bool = 1; // 0x4f3 MovB
	return 18; // 0x4f4 Return
	
Label_1255:
	var_175_string = "head"; // 0x4e7 PushS
	HasAnimationTrack(var_152_bool, var_175_string); // 0x4e8 Func
	var_176_bool = var_152_bool; // 0x4ea Push
	if(var_176_bool == 0) goto Label_1263; // 0x4eb JumpB
	var_177_string = "head"; // 0x4ec PushS
	LookAsyncCamera(var_177_string); // 0x4ed Func
}


func_1459(var_39_object)
{
	var_40_object = Obj(); var_41_object = Obj(); // 0x5b3 PushV
	self(var_41_object); // 0x5b4 Func
	var_39_object = var_41_object; // 0x5b6 Mov
	return 2; // 0x5b7 Return
}


func_947(var_0_object)
{
	var_83_float = GetByIndex(var_0_object, 0); // 0x3b3 PushE
	var_84_float = GetByIndex(var_0_object, 2); // 0x3b4 PushE
	RotateAsync(var_83_float, var_84_float); // 0x3b5 Func
	return 0; // 0x3b7 Return
}


func_952(var_15_bool)
{
	var_16_object = Obj(); var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; // 0x3b8 PushV
	var_20_string = "player"; // 0x3b9 PushS
	FindActor(var_18_object, var_20_string); // 0x3ba Func
	var_21_bool = var_18_object == 0; // 0x3bc Not
	if(var_21_bool == 0) goto Label_960; // 0x3bd JumpB
	var_15_bool = 0; // 0x3be MovB
	return 4; // 0x3bf Return
	
Label_960:
	var_22_float = 0; var_23_object = Obj(); // 0x3c0 PushV
	var_23_object = var_18_object; // 0x3c1 Mov
	func_1169(var_23_object); // 0x3c2 NEW_2
	var_30_float = 90000.0; // 0x3c4 PushF
	var_31_bool = var_22_float > var_30_float; // 0x3c5 GT
	if(var_31_bool == 0) goto Label_969; // 0x3c6 JumpB
	var_15_bool = 0; // 0x3c7 MovB
	return 4; // 0x3c8 Return
	
Label_969:
	CanSee(var_19_bool, var_18_object); // 0x3c9 Func
	var_15_bool = var_19_bool; // 0x3cb Mov
	return 4; // 0x3cc Return
}


func_1465(var_159_cvector, var_160_cvector)
{
	var_162_float = 0; var_163_float = 0; // 0x5b9 PushV
	var_164_int = var_160_cvector | var_160_cvector; // 0x5ba Or
	var_163_float = sqrt(var_164_int); // 0x5bb Sqrt2
	var_165_float = 0.0; // 0x5bc PushF
	var_166_bool = var_163_float < var_165_float; // 0x5bd LT
	if(var_166_bool == 0) goto Label_1473; // 0x5be JumpB
	var_159_cvector = CVector(0.0, 0.0, 0.0); // 0x5bf MovV
	return 2; // 0x5c0 Return
	
Label_1473:
	var_159_cvector = var_160_cvector / var_160_cvector; // 0x5c1 Div2
	return 2; // 0x5c2 Return
}


func_1344(var_48_bool)
{
	var_50_string = ""; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_string = ""; var_55_string = ""; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_string = ""; // 0x540 PushV
	var_55_string = "c"; // 0x541 MovS
	var_56_int = 0; // 0x542 MovI
	
Label_1347:
	var_60_int = 1; // 0x543 PushI
	if(var_60_int == 0) goto Label_1360; // 0x544 JumpB
	var_61_int = 1; // 0x545 PushI
	var_62_int = var_56_int + var_61_int; // 0x546 Add
	var_63_int = var_55_string + var_62_int; // 0x547 Add
	HasProperty(var_63_int, var_57_bool); // 0x548 ObjFunc
	var_64_bool = var_57_bool == 0; // 0x54a Not
	if(var_64_bool == 0) goto Label_1357; // 0x54b JumpB
	goto Label_1360; // 0x54c Jump
	
Label_1360:
	var_65_bool = var_56_int == 0; // 0x550 Not
	if(var_65_bool == 0) goto Label_1364; // 0x551 JumpB
	var_48_bool = 0; // 0x552 MovB
	return 10; // 0x553 Return
	
Label_1364:
	var_58_int = 0; // 0x554 MovI
	var_66_int = 1; // 0x555 PushI
	var_67_bool = var_56_int > var_66_int; // 0x556 GT
	if(var_67_bool == 0) goto Label_1370; // 0x557 JumpB
	irand(var_58_int, var_56_int); // 0x558 Func
	
Label_1370:
	var_68_int = 1; // 0x55a PushI
	var_69_int = var_58_int + var_68_int; // 0x55b Add
	var_70_int = var_55_string + var_69_int; // 0x55c Add
	GetProperty(var_70_int, var_59_string); // 0x55d ObjFunc
	var_71_bool = 0; var_72_string = ""; // 0x55f PushV
	var_72_string = var_59_string; // 0x560 Mov
	func_1437(var_71_bool, var_72_string); // 0x561 NEW_2
	var_48_bool = var_71_bool; // 0x562 Mov
	return 10; // 0x564 Return
	
Label_1357:
	var_77_int = 1; // 0x54d PushI
	var_56_int = var_56_int + var_77_int; // 0x54e Add2
	goto Label_1347; // 0x54f Jump
}


func_1602()
{
	var_15_string = "ood11Klara2"; // 0x643 PushS
	var_16_int = 1; // 0x644 PushI
	SetVariable(var_15_string, var_16_int); // 0x645 Func
	return 0; // 0x647 Return
}


func_1475(var_201_int, var_202_string)
{
	var_203_int = 0; var_204_int = 0; // 0x5c3 PushV
	GetVariable(var_202_string, var_204_int); // 0x5c4 Func
	var_201_int = var_204_int; // 0x5c6 Mov
	return 2; // 0x5c7 Return
}


func_1093()
{
	var_25_int = 0; var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0; // 0x445 PushV
	WaitForAnimEnd(); // 0x446 Func
	var_37_bool = 0; // 0x448 PushV
	func_1196(var_37_bool); // 0x449 NEW_2
	var_38_bool = var_37_bool == 0; // 0x44b Not
	if(var_38_bool == 0) goto Label_1102; // 0x44c JumpB
	return 12; // 0x44d Return
	
Label_1102:
	var_39_int = 0; // 0x44e PushV
	func_1540(var_39_int); // 0x44f NEW_2
	var_31_int = var_39_int; // 0x450 Mov
	var_32_int = 0; // 0x452 MovI
	
Label_1107:
	var_52_bool = 0; // 0x453 PushV
	var_52_bool = 0; // 0x454 MovB
	var_53_int = 5; // 0x455 PushI
	var_54_bool = var_32_int < var_53_int; // 0x456 LT
	if(var_54_bool == 0) goto Label_1117; // 0x457 JumpB
	var_55_bool = 0; // 0x458 PushV
	func_1196(var_55_bool); // 0x459 NEW_2
	if(var_55_bool == 0) goto Label_1117; // 0x45b JumpB
	var_52_bool = 1; // 0x45c MovB
	
Label_1117:
	if(var_52_bool == 0) goto Label_1159; // 0x45d JumpB
	var_56_bool = var_31_int == 0; // 0x45e Not
	if(var_56_bool == 0) goto Label_1127; // 0x45f JumpB
	var_57_int = 3; // 0x460 PushI
	Sleep(var_57_int, var_33_bool); // 0x461 Func
	var_58_bool = var_33_bool == 0; // 0x463 Not
	if(var_58_bool == 0) goto Label_1126; // 0x464 JumpB
	goto Label_1159; // 0x465 Jump
	
Label_1159:
	ResetAAS(); // 0x487 Func
	return 12; // 0x489 Return
	
Label_1126:
	goto Label_1148; // 0x466 Jump
	
Label_1148:
	var_59_bool = 0; // 0x47c PushV
	func_1162(var_59_bool); // 0x47d NEW_2
	var_60_bool = var_59_bool == 0; // 0x47f Not
	if(var_60_bool == 0) goto Label_1154; // 0x480 JumpB
	goto Label_1159; // 0x481 Jump
	
Label_1154:
	ResetAAS(); // 0x482 Func
	var_61_int = 1; // 0x484 PushI
	var_32_int = var_32_int + var_61_int; // 0x485 Add2
	goto Label_1107; // 0x486 Jump
	
Label_1127:
	irand(var_34_int, var_31_int); // 0x467 Func
	var_62_int = 5; // 0x469 PushI
	irand(var_35_int, var_62_int); // 0x46a Func
	var_63_int = 0; // 0x46c PushI
	var_64_bool = var_35_int != var_63_int; // 0x46d Neq
	if(var_64_bool == 0) goto Label_1136; // 0x46e JumpB
	var_34_int = 0; // 0x46f MovI
	
Label_1136:
	var_65_string = "all"; // 0x470 PushS
	var_66_string = ""; var_67_int = 0; // 0x471 PushV
	var_67_int = var_34_int; // 0x472 Mov
	func_1533(var_66_string, var_67_int); // 0x473 NEW_2
	PlayAnimation(var_65_string, var_66_string); // 0x475 Func
	WaitForAnimEnd(var_36_bool); // 0x477 Func
	var_68_bool = var_36_bool == 0; // 0x479 Not
	if(var_68_bool == 0) goto Label_1148; // 0x47a JumpB
	goto Label_1159; // 0x47b Jump
}


func_1735(var_183_int)
{
	var_184_int = 0; var_185_int = 0; // 0x6c7 PushV
	var_186_string = "branch"; // 0x6c8 PushS
	GetVariable(var_186_string, var_185_int); // 0x6c9 Func
	var_187_int = 0; // 0x6cb PushI
	var_188_bool = var_185_int == var_187_int; // 0x6cc Eq
	if(var_188_bool == 0) goto Label_1745; // 0x6cd JumpB
	var_183_int = 1; // 0x6ce MovI
	return 2; // 0x6cf Return
	
Label_1745:
	var_189_int = 1; // 0x6d1 PushI
	var_190_bool = var_185_int == var_189_int; // 0x6d2 Eq
	if(var_190_bool == 0) goto Label_1750; // 0x6d3 JumpB
	var_183_int = 2; // 0x6d4 MovI
	return 2; // 0x6d5 Return
	
Label_1750:
	var_183_int = 3; // 0x6d6 MovI
	return 2; // 0x6d7 Return
}


func_1608()
{
	var_95_string = "ood11Klara3"; // 0x649 PushS
	var_96_int = 1; // 0x64a PushI
	SetVariable(var_95_string, var_96_int); // 0x64b Func
	return 0; // 0x64d Return
}


func_1480(var_63_int, var_64_int)
{
	var_65_object = Obj(); var_66_object = Obj(); // 0x5c8 PushV
	CreateIntVector(var_66_object); // 0x5c9 Func
	add(var_63_int); // 0x5cb ObjFunc
	add(var_64_int); // 0x5cd ObjFunc
	var_67_int = 3; // 0x5cf PushI
	SendWorldWndMessage(var_67_int, var_66_object); // 0x5d0 Func
	return 2; // 0x5d2 Return
}


func_1614()
{
	var_209_string = "ood11Klara1"; // 0x64f PushS
	var_210_int = 1; // 0x650 PushI
	SetVariable(var_209_string, var_210_int); // 0x651 Func
	return 0; // 0x653 Return
}


func_974()
{
	var_20_float = 0; var_21_float = 0; // 0x3ce PushV
	var_22_int = 8; // 0x3cf PushI
	var_23_int = 16; // 0x3d0 PushI
	rand(var_21_float, var_22_int, var_23_int); // 0x3d1 Func
	var_24_int = 10; // 0x3d3 PushI
	SetTimer(var_24_int, var_21_float); // 0x3d4 Func
	return 2; // 0x3d6 Return
}


func_211(var_2_object, var_211_string)
{
	var_212_bool = 0; // 0xd4 PushV
	func_1760(var_212_bool); // 0xd5 NEW_2
	var_213_bool = var_212_bool == 0; // 0xd7 Not
	if(var_213_bool == 0) goto Label_218; // 0xd8 JumpB
	return 0; // 0xd9 Return
	
Label_218:
	var_214_bool = var_211_string == var_2_object; // 0xda Eq
	if(var_214_bool == 0) goto Label_221; // 0xdb JumpB
	return 0; // 0xdc Return
	
Label_221:
	var_215_string = ""; var_216_bool = 0; // 0xdd PushV
	var_215_string = var_211_string; // 0xde Mov
	var_217_string = ""; // 0xdf PushS
	var_218_bool = var_211_string == var_217_string; // 0xe0 Eq
	if(var_218_bool == 0) goto Label_228; // 0xe1 JumpB
	var_216_bool = 0; // 0xe2 MovB
	goto Label_229; // 0xe3 Jump
	
Label_229:
	func_1431(var_215_string, var_216_bool); // 0xe5 NEW_2
	var_2_object = var_211_string; // 0xe7 TMov
	return 0; // 0xe8 Return
	
Label_228:
	var_216_bool = 1; // 0xe4 MovB
}


func_1620(var_246_bool)
{
	var_248_int = 0; var_249_string = ""; // 0x655 PushV
	var_249_string = "d11q06"; // 0x656 MovS
	func_1475(var_248_int, var_249_string); // 0x657 NEW_2
	var_250_int = 1; // 0x659 PushI
	var_251_bool = var_248_int == var_250_int; // 0x65a Eq
	if(var_251_bool == 0) goto Label_1630; // 0x65b JumpB
	var_246_bool = 1; // 0x65c MovB
	return 0; // 0x65d Return
	
Label_1630:
	var_246_bool = 0; // 0x65e MovB
	return 0; // 0x65f Return
}


func_1492(var_53_object, var_54_int)
{
	var_55_int = 0; var_56_int = 0; var_57_bool = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0; // 0x5d4 PushV
	GetItemID(var_58_int); // 0x5d5 ObjFunc
	var_61_string = "Category"; // 0x5d7 PushS
	GetInvItemProperty(var_59_int, var_58_int, var_61_string); // 0x5d8 Func
	AddItem(var_60_bool, var_53_object, var_59_int, var_54_int); // 0x5da ObjFunc
	var_62_bool = var_60_bool == 0; // 0x5dc Not
	if(var_62_bool == 0) goto Label_1505; // 0x5dd JumpB
	DropItems(var_53_object, var_54_int); // 0x5de ObjFunc
	goto Label_1510; // 0x5e0 Jump
	
Label_1510:
	return 6; // 0x5e6 Return
	
Label_1505:
	var_63_int = 0; var_64_int = 0; // 0x5e1 PushV
	var_63_int = var_58_int; // 0x5e2 Mov
	var_64_int = var_54_int; // 0x5e3 Mov
	func_1480(var_63_int, var_64_int); // 0x5e4 NEW_2
}


func_983()
{
	var_13_int = 10; // 0x3d7 PushI
	KillTimer(var_13_int); // 0x3d8 Func
	return 0; // 0x3da Return
}


func_1752(var_180_int)
{
	var_180_int = 515540; // 0x6d8 MovI
	return 0; // 0x6d9 Return
}


func_1754(var_179_int)
{
	var_179_int = 502865; // 0x6da MovI
	return 0; // 0x6db Return
}


func_1756(var_181_string)
{
	var_181_string = "ui/NPC_Klara.png"; // 0x6dc MovS
	return 0; // 0x6dd Return
}


func_94(var_0_object, var_1_object, var_2_object, var_3_string, var_192_object, var_193_object)
{
	var_0_object = var_193_object; // 0x5f TMov
	var_1_object = var_192_object; // 0x60 TMov
	var_3_string = 0; // 0x61 TMovB
	var_198_int = 1; // 0x62 PushI
	if(var_198_int == 0) goto Label_181; // 0x63 JumpB
	var_199_bool = 0; var_200_object = Obj(); // 0x64 PushV
	var_200_object = var_1_object; // 0x65 MovT
	func_1656(var_200_object); // 0x66 NEW_2
	if(var_199_bool == 0) goto Label_130; // 0x68 JumpB
	var_207_object = Obj(); var_208_object = Obj(); // 0x69 PushV
	var_207_object = var_1_object; // 0x6a MovT
	var_208_object = var_0_object; // 0x6b MovT
	func_1614(); // 0x6c NEW_2
	var_211_string = ""; // 0x6e PushV
	var_211_string = "Neutral"; // 0x6f MovS
	func_211(var_193_object, var_211_string); // 0x70 NEW_2
	var_223_int = 514350; // 0x72 PushI
	SetMessage(var_223_int); // 0x73 TObjFunc
	ClearReplies(); // 0x75 TObjFunc
	var_224_int = 514351; // 0x77 PushI
	var_225_int = 15575; // 0x78 PushI
	var_226_int = 15574; // 0x79 PushI
	AddReply(var_224_int, var_225_int, var_226_int); // 0x7a TObjFunc
	var_227_int = 538680; // 0x7c PushI
	var_228_int = 15575; // 0x7d PushI
	var_229_int = 40578; // 0x7e PushI
	AddReply(var_227_int, var_228_int, var_229_int); // 0x7f TObjFunc
	goto Label_181; // 0x81 Jump
	
Label_181:
	var_230_bool = 0; // 0xb5 PushV
	func_1760(var_230_bool); // 0xb6 NEW_2
	if(var_230_bool == 0) goto Label_196; // 0xb8 JumpB
	
Label_185:
	lshWaitForAnimEnd(); // 0xb9 Func
	var_231_string = var_3_string; // 0xbb PushT
	if(var_231_string == 0) goto Label_190; // 0xbc JumpB
	goto Label_195; // 0xbd Jump
	
Label_195:
	goto Label_210; // 0xc3 Jump
	
Label_210:
	return 0; // 0xd2 Return
	
Label_190:
	var_232_string = ""; // 0xbe PushV
	var_232_string = var_2_object; // 0xbf MovT
	func_1424(var_232_string); // 0xc0 NEW_2
	goto Label_185; // 0xc2 Jump
	
Label_196:
	var_238_string = "all"; // 0xc4 PushS
	var_239_string = "idle"; // 0xc5 PushS
	PlayAnimation(var_238_string, var_239_string); // 0xc6 Func
	
Label_200:
	WaitForAnimEnd(); // 0xc8 Func
	var_240_string = var_3_string; // 0xca PushT
	if(var_240_string == 0) goto Label_205; // 0xcb JumpB
	goto Label_210; // 0xcc Jump
	
Label_205:
	var_241_string = "all"; // 0xcd PushS
	var_242_string = "idle"; // 0xce PushS
	PlayAnimation(var_241_string, var_242_string); // 0xcf Func
	goto Label_200; // 0xd1 Jump
	
Label_130:
	var_243_string = ""; // 0x82 PushV
	var_243_string = "Neutral"; // 0x83 MovS
	func_211(var_193_object, var_243_string); // 0x84 NEW_2
	var_244_int = 514514; // 0x86 PushI
	SetMessage(var_244_int); // 0x87 TObjFunc
	ClearReplies(); // 0x89 TObjFunc
	var_245_bool = 0; // 0x8b PushV
	var_245_bool = 0; // 0x8c MovB
	var_246_bool = 0; var_247_object = Obj(); // 0x8d PushV
	var_247_object = var_1_object; // 0x8e MovT
	func_1620(var_247_object); // 0x8f NEW_2
	if(var_246_bool == 0) goto Label_152; // 0x91 JumpB
	var_252_bool = 0; var_253_object = Obj(); // 0x92 PushV
	var_253_object = var_1_object; // 0x93 MovT
	func_1632(var_253_object); // 0x94 NEW_2
	if(var_252_bool == 0) goto Label_152; // 0x96 JumpB
	var_245_bool = 1; // 0x97 MovB
	
Label_152:
	if(var_245_bool == 0) goto Label_158; // 0x98 JumpB
	var_258_int = 534506; // 0x99 PushI
	var_259_int = 40595; // 0x9a PushI
	var_260_int = 36147; // 0x9b PushI
	AddReply(var_258_int, var_259_int, var_260_int); // 0x9c TObjFunc
	
Label_158:
	var_261_bool = 0; var_262_object = Obj(); // 0x9e PushV
	var_262_object = var_1_object; // 0x9f MovT
	func_1644(var_262_object); // 0xa0 NEW_2
	if(var_261_bool == 0) goto Label_168; // 0xa2 JumpB
	var_267_int = 538711; // 0xa3 PushI
	var_268_int = 40619; // 0xa4 PushI
	var_269_int = 40618; // 0xa5 PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0xa6 TObjFunc
	
Label_168:
	var_270_int = 514515; // 0xa8 PushI
	var_271_int = -1; // 0xa9 PushI
	var_272_int = 15754; // 0xaa PushI
	AddReply(var_270_int, var_271_int, var_272_int); // 0xab TObjFunc
	var_273_int = 538691; // 0xad PushI
	var_274_int = -1; // 0xae PushI
	var_275_int = 40594; // 0xaf PushI
	AddReply(var_273_int, var_274_int, var_275_int); // 0xb0 TObjFunc
	goto Label_181; // 0xb2 Jump
}


func_1758(var_182_string)
{
	var_182_string = "ui/NPC_Klara_b.png"; // 0x6de MovS
	return 0; // 0x6df Return
}


func_1632(var_252_bool)
{
	var_254_int = 0; var_255_string = ""; // 0x661 PushV
	var_255_string = "ood11Klara2"; // 0x662 MovS
	func_1475(var_254_int, var_255_string); // 0x663 NEW_2
	var_256_int = 0; // 0x665 PushI
	var_257_bool = var_254_int == var_256_int; // 0x666 Eq
	if(var_257_bool == 0) goto Label_1642; // 0x667 JumpB
	var_252_bool = 1; // 0x668 MovB
	return 0; // 0x669 Return
	
Label_1642:
	var_252_bool = 0; // 0x66a MovB
	return 0; // 0x66b Return
}


func_1760(var_75_bool)
{
	var_75_bool = 1; // 0x6e0 MovB
	return 0; // 0x6e1 Return
}


func_865(var_25_object)
{
	var_26_int = 0; var_27_object = Obj(); // 0x362 PushV
	var_27_object = var_25_object; // 0x363 Mov
	TaskCall(1); // 0x364 TaskCall
	func_13(var_28_object, var_26_int, var_27_object); // 0x365 NEW_2
	TaskReturn(); // 0x366 TaskReturn
	return 0; // 0x368 Return
}


func_1381(var_79_bool)
{
	var_81_string = ""; var_82_int = 0; var_83_bool = 0; var_84_int = 0; var_85_string = ""; var_86_string = ""; var_87_int = 0; var_88_bool = 0; var_89_int = 0; var_90_string = ""; // 0x565 PushV
	var_91_string = "d"; // 0x566 PushS
	var_92_int = 0; // 0x567 PushV
	func_1524(var_92_int); // 0x568 NEW_2
	var_98_int = var_91_string + var_92_int; // 0x56a Add
	var_99_string = "m"; // 0x56b PushS
	var_86_string = var_98_int + var_99_string; // 0x56c Add2
	var_87_int = 0; // 0x56d MovI
	
Label_1390:
	var_100_int = 1; // 0x56e PushI
	if(var_100_int == 0) goto Label_1403; // 0x56f JumpB
	var_101_int = 1; // 0x570 PushI
	var_102_int = var_87_int + var_101_int; // 0x571 Add
	var_103_int = var_86_string + var_102_int; // 0x572 Add
	HasProperty(var_103_int, var_88_bool); // 0x573 ObjFunc
	var_104_bool = var_88_bool == 0; // 0x575 Not
	if(var_104_bool == 0) goto Label_1400; // 0x576 JumpB
	goto Label_1403; // 0x577 Jump
	
Label_1403:
	var_105_bool = var_87_int == 0; // 0x57b Not
	if(var_105_bool == 0) goto Label_1407; // 0x57c JumpB
	var_79_bool = 0; // 0x57d MovB
	return 10; // 0x57e Return
	
Label_1407:
	var_89_int = 0; // 0x57f MovI
	var_106_int = 1; // 0x580 PushI
	var_107_bool = var_87_int > var_106_int; // 0x581 GT
	if(var_107_bool == 0) goto Label_1413; // 0x582 JumpB
	irand(var_89_int, var_87_int); // 0x583 Func
	
Label_1413:
	var_108_int = 1; // 0x585 PushI
	var_109_int = var_89_int + var_108_int; // 0x586 Add
	var_110_int = var_86_string + var_109_int; // 0x587 Add
	GetProperty(var_110_int, var_90_string); // 0x588 ObjFunc
	var_111_bool = 0; var_112_string = ""; // 0x58a PushV
	var_112_string = var_90_string; // 0x58b Mov
	func_1437(var_111_bool, var_112_string); // 0x58c NEW_2
	var_79_bool = var_111_bool; // 0x58d Mov
	return 10; // 0x58f Return
	
Label_1400:
	var_113_int = 1; // 0x578 PushI
	var_87_int = var_87_int + var_113_int; // 0x579 Add2
	goto Label_1390; // 0x57a Jump
}


func_1511(var_47_object, var_48_string, var_49_int)
{
	var_50_object = Obj(); var_51_object = Obj(); // 0x5e7 PushV
	CreateInvItem(var_51_object); // 0x5e8 Func
	SetItemName(var_48_string); // 0x5ea ObjFunc
	var_52_object = Obj(); var_53_object = Obj(); var_54_int = 0; // 0x5ec PushV
	var_52_object = var_47_object; // 0x5ed Mov
	var_53_object = var_51_object; // 0x5ee Mov
	var_54_int = var_49_int; // 0x5ef Mov
	func_1492(var_53_object, var_54_int); // 0x5f0 NEW_2
	return 2; // 0x5f2 Return
}


func_1644(var_261_bool)
{
	var_263_int = 0; var_264_string = ""; // 0x66d PushV
	var_264_string = "ood11Klara3"; // 0x66e MovS
	func_1475(var_263_int, var_264_string); // 0x66f NEW_2
	var_265_int = 0; // 0x671 PushI
	var_266_bool = var_263_int == var_265_int; // 0x672 Eq
	if(var_266_bool == 0) goto Label_1654; // 0x673 JumpB
	var_261_bool = 1; // 0x674 MovB
	return 0; // 0x675 Return
	
Label_1654:
	var_261_bool = 0; // 0x676 MovB
	return 0; // 0x677 Return
}


func_1524(var_92_int)
{
	var_93_float = 0; var_94_float = 0; // 0x5f4 PushV
	GetGameTime(var_94_float); // 0x5f5 Func
	var_95_int = 1; // 0x5f7 PushI
	var_96_int = 0; // 0x5f8 PushV
	var_97_int = 24; // 0x5f9 PushI
	var_96_int = var_94_float / var_94_float; // 0x5fa Div2
	var_92_int = var_95_int + var_96_int; // 0x5fb Add2
	return 2; // 0x5fc Return
}


func_1269()
{
	var_278_bool = 0; var_279_bool = 0; // 0x4f5 PushV
	CameraSwitchToNormal(); // 0x4f6 Func
	var_280_bool = 0; // 0x4f8 PushV
	func_1760(var_280_bool); // 0x4f9 NEW_2
	if(var_280_bool == 0) goto Label_1277; // 0x4fb JumpB
	goto Label_1285; // 0x4fc Jump
	
Label_1285:
	return 2; // 0x505 Return
	
Label_1277:
	var_281_string = "head"; // 0x4fd PushS
	HasAnimationTrack(var_279_bool, var_281_string); // 0x4fe Func
	var_282_bool = var_279_bool; // 0x500 Push
	if(var_282_bool == 0) goto Label_1285; // 0x501 JumpB
	var_283_string = "head"; // 0x502 PushS
	UnlookAsync(var_283_string); // 0x503 Func
}


func_1656(var_199_bool)
{
	var_201_int = 0; var_202_string = ""; // 0x679 PushV
	var_202_string = "ood11Klara1"; // 0x67a MovS
	func_1475(var_201_int, var_202_string); // 0x67b NEW_2
	var_205_int = 0; // 0x67d PushI
	var_206_bool = var_201_int == var_205_int; // 0x67e Eq
	if(var_206_bool == 0) goto Label_1666; // 0x67f JumpB
	var_199_bool = 1; // 0x680 MovB
	return 0; // 0x681 Return
	
Label_1666:
	var_199_bool = 0; // 0x682 MovB
	return 0; // 0x683 Return
}


func_1533(var_45_string, var_46_int)
{
	var_47_string = ""; var_48_string = ""; // 0x5fd PushV
	var_48_string = "idle"; // 0x5fe MovS
	var_49_int = var_46_int; // 0x5ff Push
	if(var_49_int == 0) goto Label_1538; // 0x600 JumpB
	var_48_string = var_48_string + var_46_int; // 0x601 Add2
	
Label_1538:
	var_45_string = var_48_string; // 0x602 Mov
	return 2; // 0x603 Return
}


