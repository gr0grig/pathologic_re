task_1_event_11(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_int, var_6_int, var_7_bool)
{
	var_8_int = 1; // 0xc4 PushI
	if(var_8_int == 0) goto Label_643; // 0xc5 JumpB
	func_953(); // 0xc7 NEW_2
	var_10_int = 14668; // 0xc9 PushI
	var_11_bool = var_7_bool == var_10_int; // 0xca Eq
	if(var_11_bool == 0) goto Label_219; // 0xcb JumpB
	var_12_object = Obj(); var_13_object = Obj(); // 0xcc PushV
	var_12_object = var_1_object; // 0xcd MovT
	var_13_object = var_0_object; // 0xce MovT
	func_1040(); // 0xcf NEW_2
	var_39_object = Obj(); var_40_object = Obj(); // 0xd1 PushV
	var_39_object = var_1_object; // 0xd2 MovT
	var_40_object = var_0_object; // 0xd3 MovT
	func_1058(var_40_object); // 0xd4 NEW_2
	var_63_object = Obj(); var_64_object = Obj(); // 0xd6 PushV
	var_63_object = var_1_object; // 0xd7 MovT
	var_64_object = var_0_object; // 0xd8 MovT
	func_1034(); // 0xd9 NEW_2
	
Label_219:
	var_67_int = 14696; // 0xdb PushI
	var_68_bool = var_7_bool == var_67_int; // 0xdc Eq
	if(var_68_bool == 0) goto Label_237; // 0xdd JumpB
	var_69_object = Obj(); var_70_object = Obj(); // 0xde PushV
	var_69_object = var_1_object; // 0xdf MovT
	var_70_object = var_0_object; // 0xe0 MovT
	func_1078(var_70_object); // 0xe1 NEW_2
	var_75_object = Obj(); var_76_object = Obj(); // 0xe3 PushV
	var_75_object = var_1_object; // 0xe4 MovT
	var_76_object = var_0_object; // 0xe5 MovT
	func_1034(); // 0xe6 NEW_2
	var_77_object = Obj(); var_78_object = Obj(); // 0xe8 PushV
	var_77_object = var_1_object; // 0xe9 MovT
	var_78_object = var_0_object; // 0xea MovT
	func_1049(); // 0xeb NEW_2
	
Label_237:
	var_89_int = 14692; // 0xed PushI
	var_90_bool = var_7_bool == var_89_int; // 0xee Eq
	if(var_90_bool == 0) goto Label_245; // 0xef JumpB
	var_91_object = Obj(); var_92_object = Obj(); // 0xf0 PushV
	var_91_object = var_1_object; // 0xf1 MovT
	var_92_object = var_0_object; // 0xf2 MovT
	func_1069(); // 0xf3 NEW_2
	
Label_245:
	var_103_int = 14669; // 0xf5 PushI
	var_104_bool = var_7_bool == var_103_int; // 0xf6 Eq
	if(var_104_bool == 0) goto Label_253; // 0xf7 JumpB
	var_105_object = Obj(); var_106_object = Obj(); // 0xf8 PushV
	var_105_object = var_1_object; // 0xf9 MovT
	var_106_object = var_0_object; // 0xfa MovT
	func_1089(); // 0xfb NEW_2
	
Label_253:
	var_109_int = 14659; // 0xfd PushI
	var_110_bool = var_6_int == var_109_int; // 0xfe Eq
	if(var_110_bool == 0) goto Label_310; // 0xff JumpB
	var_111_string = ""; // 0x100 PushV
	var_111_string = "Neutral"; // 0x101 MovS
	func_173(var_7_bool, var_111_string); // 0x102 NEW_2
	var_123_int = 513423; // 0x104 PushI
	SetMessage(var_123_int); // 0x105 TObjFunc
	ClearReplies(); // 0x107 TObjFunc
	var_124_bool = 0; var_125_object = Obj(); // 0x109 PushV
	var_125_object = var_1_object; // 0x10a MovT
	func_1095(var_125_object); // 0x10b NEW_2
	if(var_124_bool == 0) goto Label_275; // 0x10d JumpB
	var_132_int = 513424; // 0x10e PushI
	var_133_int = 14661; // 0x10f PushI
	var_134_int = 14660; // 0x110 PushI
	AddReply(var_132_int, var_133_int, var_134_int); // 0x111 TObjFunc
	
Label_275:
	var_135_bool = 0; // 0x113 PushV
	var_135_bool = 0; // 0x114 MovB
	var_136_bool = 0; var_137_object = Obj(); // 0x115 PushV
	var_137_object = var_1_object; // 0x116 MovT
	func_1107(var_137_object); // 0x117 NEW_2
	if(var_136_bool == 0) goto Label_288; // 0x119 JumpB
	var_142_bool = 0; var_143_object = Obj(); // 0x11a PushV
	var_143_object = var_1_object; // 0x11b MovT
	func_1119(var_143_object); // 0x11c NEW_2
	if(var_142_bool == 0) goto Label_288; // 0x11e JumpB
	var_135_bool = 1; // 0x11f MovB
	
Label_288:
	if(var_135_bool == 0) goto Label_294; // 0x120 JumpB
	var_148_int = 513447; // 0x121 PushI
	var_149_int = 14684; // 0x122 PushI
	var_150_int = 14683; // 0x123 PushI
	AddReply(var_148_int, var_149_int, var_150_int); // 0x124 TObjFunc
	
Label_294:
	var_151_bool = 0; var_152_object = Obj(); // 0x126 PushV
	var_152_object = var_1_object; // 0x127 MovT
	func_1131(var_152_object); // 0x128 NEW_2
	if(var_151_bool == 0) goto Label_304; // 0x12a JumpB
	var_157_int = 513433; // 0x12b PushI
	var_158_int = 14670; // 0x12c PushI
	var_159_int = 14669; // 0x12d PushI
	AddReply(var_157_int, var_158_int, var_159_int); // 0x12e TObjFunc
	
Label_304:
	var_160_int = 513460; // 0x130 PushI
	var_161_int = -1; // 0x131 PushI
	var_162_int = 14697; // 0x132 PushI
	AddReply(var_160_int, var_161_int, var_162_int); // 0x133 TObjFunc
	return 0; // 0x135 Return
	
Label_310:
	var_163_int = 14670; // 0x136 PushI
	var_164_bool = var_6_int == var_163_int; // 0x137 Eq
	if(var_164_bool == 0) goto Label_328; // 0x138 JumpB
	var_165_string = ""; // 0x139 PushV
	var_165_string = "Neutral"; // 0x13a MovS
	func_173(var_7_bool, var_165_string); // 0x13b NEW_2
	var_166_int = 513434; // 0x13d PushI
	SetMessage(var_166_int); // 0x13e TObjFunc
	ClearReplies(); // 0x140 TObjFunc
	var_167_int = 513435; // 0x142 PushI
	var_168_int = 14672; // 0x143 PushI
	var_169_int = 14671; // 0x144 PushI
	AddReply(var_167_int, var_168_int, var_169_int); // 0x145 TObjFunc
	return 0; // 0x147 Return
	
Label_328:
	var_170_int = 14672; // 0x148 PushI
	var_171_bool = var_6_int == var_170_int; // 0x149 Eq
	if(var_171_bool == 0) goto Label_346; // 0x14a JumpB
	var_172_string = ""; // 0x14b PushV
	var_172_string = "Neutral"; // 0x14c MovS
	func_173(var_7_bool, var_172_string); // 0x14d NEW_2
	var_173_int = 513436; // 0x14f PushI
	SetMessage(var_173_int); // 0x150 TObjFunc
	ClearReplies(); // 0x152 TObjFunc
	var_174_int = 513437; // 0x154 PushI
	var_175_int = 14674; // 0x155 PushI
	var_176_int = 14673; // 0x156 PushI
	AddReply(var_174_int, var_175_int, var_176_int); // 0x157 TObjFunc
	return 0; // 0x159 Return
	
Label_346:
	var_177_int = 14674; // 0x15a PushI
	var_178_bool = var_6_int == var_177_int; // 0x15b Eq
	if(var_178_bool == 0) goto Label_369; // 0x15c JumpB
	var_179_string = ""; // 0x15d PushV
	var_179_string = "Neutral"; // 0x15e MovS
	func_173(var_7_bool, var_179_string); // 0x15f NEW_2
	var_180_int = 513438; // 0x161 PushI
	SetMessage(var_180_int); // 0x162 TObjFunc
	ClearReplies(); // 0x164 TObjFunc
	var_181_int = 513494; // 0x166 PushI
	var_182_int = 14736; // 0x167 PushI
	var_183_int = 14735; // 0x168 PushI
	AddReply(var_181_int, var_182_int, var_183_int); // 0x169 TObjFunc
	var_184_int = 513491; // 0x16b PushI
	var_185_int = 14732; // 0x16c PushI
	var_186_int = 14731; // 0x16d PushI
	AddReply(var_184_int, var_185_int, var_186_int); // 0x16e TObjFunc
	return 0; // 0x170 Return
	
Label_369:
	var_187_int = 14732; // 0x171 PushI
	var_188_bool = var_6_int == var_187_int; // 0x172 Eq
	if(var_188_bool == 0) goto Label_387; // 0x173 JumpB
	var_189_string = ""; // 0x174 PushV
	var_189_string = "Neutral"; // 0x175 MovS
	func_173(var_7_bool, var_189_string); // 0x176 NEW_2
	var_190_int = 513492; // 0x178 PushI
	SetMessage(var_190_int); // 0x179 TObjFunc
	ClearReplies(); // 0x17b TObjFunc
	var_191_int = 513493; // 0x17d PushI
	var_192_int = 14678; // 0x17e PushI
	var_193_int = 14733; // 0x17f PushI
	AddReply(var_191_int, var_192_int, var_193_int); // 0x180 TObjFunc
	return 0; // 0x182 Return
	
Label_387:
	var_194_int = 14736; // 0x183 PushI
	var_195_bool = var_6_int == var_194_int; // 0x184 Eq
	if(var_195_bool == 0) goto Label_405; // 0x185 JumpB
	var_196_string = ""; // 0x186 PushV
	var_196_string = "Neutral"; // 0x187 MovS
	func_173(var_7_bool, var_196_string); // 0x188 NEW_2
	var_197_int = 513495; // 0x18a PushI
	SetMessage(var_197_int); // 0x18b TObjFunc
	ClearReplies(); // 0x18d TObjFunc
	var_198_int = 513439; // 0x18f PushI
	var_199_int = 14676; // 0x190 PushI
	var_200_int = 14675; // 0x191 PushI
	AddReply(var_198_int, var_199_int, var_200_int); // 0x192 TObjFunc
	return 0; // 0x194 Return
	
Label_405:
	var_201_int = 14676; // 0x195 PushI
	var_202_bool = var_6_int == var_201_int; // 0x196 Eq
	if(var_202_bool == 0) goto Label_423; // 0x197 JumpB
	var_203_string = ""; // 0x198 PushV
	var_203_string = "Neutral"; // 0x199 MovS
	func_173(var_7_bool, var_203_string); // 0x19a NEW_2
	var_204_int = 513440; // 0x19c PushI
	SetMessage(var_204_int); // 0x19d TObjFunc
	ClearReplies(); // 0x19f TObjFunc
	var_205_int = 513441; // 0x1a1 PushI
	var_206_int = 14678; // 0x1a2 PushI
	var_207_int = 14677; // 0x1a3 PushI
	AddReply(var_205_int, var_206_int, var_207_int); // 0x1a4 TObjFunc
	return 0; // 0x1a6 Return
	
Label_423:
	var_208_int = 14678; // 0x1a7 PushI
	var_209_bool = var_6_int == var_208_int; // 0x1a8 Eq
	if(var_209_bool == 0) goto Label_441; // 0x1a9 JumpB
	var_210_string = ""; // 0x1aa PushV
	var_210_string = "Neutral"; // 0x1ab MovS
	func_173(var_7_bool, var_210_string); // 0x1ac NEW_2
	var_211_int = 513442; // 0x1ae PushI
	SetMessage(var_211_int); // 0x1af TObjFunc
	ClearReplies(); // 0x1b1 TObjFunc
	var_212_int = 513444; // 0x1b3 PushI
	var_213_int = 14681; // 0x1b4 PushI
	var_214_int = 14680; // 0x1b5 PushI
	AddReply(var_212_int, var_213_int, var_214_int); // 0x1b6 TObjFunc
	return 0; // 0x1b8 Return
	
Label_441:
	var_215_int = 14681; // 0x1b9 PushI
	var_216_bool = var_6_int == var_215_int; // 0x1ba Eq
	if(var_216_bool == 0) goto Label_459; // 0x1bb JumpB
	var_217_string = ""; // 0x1bc PushV
	var_217_string = "Neutral"; // 0x1bd MovS
	func_173(var_7_bool, var_217_string); // 0x1be NEW_2
	var_218_int = 513445; // 0x1c0 PushI
	SetMessage(var_218_int); // 0x1c1 TObjFunc
	ClearReplies(); // 0x1c3 TObjFunc
	var_219_int = 513446; // 0x1c5 PushI
	var_220_int = -1; // 0x1c6 PushI
	var_221_int = 14682; // 0x1c7 PushI
	AddReply(var_219_int, var_220_int, var_221_int); // 0x1c8 TObjFunc
	return 0; // 0x1ca Return
	
Label_459:
	var_222_int = 14684; // 0x1cb PushI
	var_223_bool = var_6_int == var_222_int; // 0x1cc Eq
	if(var_223_bool == 0) goto Label_482; // 0x1cd JumpB
	var_224_string = ""; // 0x1ce PushV
	var_224_string = "Neutral"; // 0x1cf MovS
	func_173(var_7_bool, var_224_string); // 0x1d0 NEW_2
	var_225_int = 513448; // 0x1d2 PushI
	SetMessage(var_225_int); // 0x1d3 TObjFunc
	ClearReplies(); // 0x1d5 TObjFunc
	var_226_int = 513449; // 0x1d7 PushI
	var_227_int = 14686; // 0x1d8 PushI
	var_228_int = 14685; // 0x1d9 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x1da TObjFunc
	var_229_int = 513451; // 0x1dc PushI
	var_230_int = 14688; // 0x1dd PushI
	var_231_int = 14687; // 0x1de PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x1df TObjFunc
	return 0; // 0x1e1 Return
	
Label_482:
	var_232_int = 14688; // 0x1e2 PushI
	var_233_bool = var_6_int == var_232_int; // 0x1e3 Eq
	if(var_233_bool == 0) goto Label_500; // 0x1e4 JumpB
	var_234_string = ""; // 0x1e5 PushV
	var_234_string = "Neutral"; // 0x1e6 MovS
	func_173(var_7_bool, var_234_string); // 0x1e7 NEW_2
	var_235_int = 513452; // 0x1e9 PushI
	SetMessage(var_235_int); // 0x1ea TObjFunc
	ClearReplies(); // 0x1ec TObjFunc
	var_236_int = 513453; // 0x1ee PushI
	var_237_int = 14690; // 0x1ef PushI
	var_238_int = 14689; // 0x1f0 PushI
	AddReply(var_236_int, var_237_int, var_238_int); // 0x1f1 TObjFunc
	return 0; // 0x1f3 Return
	
Label_500:
	var_239_int = 14690; // 0x1f4 PushI
	var_240_bool = var_6_int == var_239_int; // 0x1f5 Eq
	if(var_240_bool == 0) goto Label_523; // 0x1f6 JumpB
	var_241_string = ""; // 0x1f7 PushV
	var_241_string = "Neutral"; // 0x1f8 MovS
	func_173(var_7_bool, var_241_string); // 0x1f9 NEW_2
	var_242_int = 513454; // 0x1fb PushI
	SetMessage(var_242_int); // 0x1fc TObjFunc
	ClearReplies(); // 0x1fe TObjFunc
	var_243_int = 513455; // 0x200 PushI
	var_244_int = 14694; // 0x201 PushI
	var_245_int = 14691; // 0x202 PushI
	AddReply(var_243_int, var_244_int, var_245_int); // 0x203 TObjFunc
	var_246_int = 513456; // 0x205 PushI
	var_247_int = -1; // 0x206 PushI
	var_248_int = 14692; // 0x207 PushI
	AddReply(var_246_int, var_247_int, var_248_int); // 0x208 TObjFunc
	return 0; // 0x20a Return
	
Label_523:
	var_249_int = 14686; // 0x20b PushI
	var_250_bool = var_6_int == var_249_int; // 0x20c Eq
	if(var_250_bool == 0) goto Label_541; // 0x20d JumpB
	var_251_string = ""; // 0x20e PushV
	var_251_string = "Neutral"; // 0x20f MovS
	func_173(var_7_bool, var_251_string); // 0x210 NEW_2
	var_252_int = 513450; // 0x212 PushI
	SetMessage(var_252_int); // 0x213 TObjFunc
	ClearReplies(); // 0x215 TObjFunc
	var_253_int = 513457; // 0x217 PushI
	var_254_int = 14694; // 0x218 PushI
	var_255_int = 14693; // 0x219 PushI
	AddReply(var_253_int, var_254_int, var_255_int); // 0x21a TObjFunc
	return 0; // 0x21c Return
	
Label_541:
	var_256_int = 14694; // 0x21d PushI
	var_257_bool = var_6_int == var_256_int; // 0x21e Eq
	if(var_257_bool == 0) goto Label_559; // 0x21f JumpB
	var_258_string = ""; // 0x220 PushV
	var_258_string = "Neutral"; // 0x221 MovS
	func_173(var_7_bool, var_258_string); // 0x222 NEW_2
	var_259_int = 513458; // 0x224 PushI
	SetMessage(var_259_int); // 0x225 TObjFunc
	ClearReplies(); // 0x227 TObjFunc
	var_260_int = 513459; // 0x229 PushI
	var_261_int = -1; // 0x22a PushI
	var_262_int = 14696; // 0x22b PushI
	AddReply(var_260_int, var_261_int, var_262_int); // 0x22c TObjFunc
	return 0; // 0x22e Return
	
Label_559:
	var_263_int = 14661; // 0x22f PushI
	var_264_bool = var_6_int == var_263_int; // 0x230 Eq
	if(var_264_bool == 0) goto Label_577; // 0x231 JumpB
	var_265_string = ""; // 0x232 PushV
	var_265_string = "Neutral"; // 0x233 MovS
	func_173(var_7_bool, var_265_string); // 0x234 NEW_2
	var_266_int = 513425; // 0x236 PushI
	SetMessage(var_266_int); // 0x237 TObjFunc
	ClearReplies(); // 0x239 TObjFunc
	var_267_int = 513426; // 0x23b PushI
	var_268_int = 14663; // 0x23c PushI
	var_269_int = 14662; // 0x23d PushI
	AddReply(var_267_int, var_268_int, var_269_int); // 0x23e TObjFunc
	return 0; // 0x240 Return
	
Label_577:
	var_270_int = 14663; // 0x241 PushI
	var_271_bool = var_6_int == var_270_int; // 0x242 Eq
	if(var_271_bool == 0) goto Label_595; // 0x243 JumpB
	var_272_string = ""; // 0x244 PushV
	var_272_string = "Neutral"; // 0x245 MovS
	func_173(var_7_bool, var_272_string); // 0x246 NEW_2
	var_273_int = 513427; // 0x248 PushI
	SetMessage(var_273_int); // 0x249 TObjFunc
	ClearReplies(); // 0x24b TObjFunc
	var_274_int = 513428; // 0x24d PushI
	var_275_int = 14665; // 0x24e PushI
	var_276_int = 14664; // 0x24f PushI
	AddReply(var_274_int, var_275_int, var_276_int); // 0x250 TObjFunc
	return 0; // 0x252 Return
	
Label_595:
	var_277_int = 14665; // 0x253 PushI
	var_278_bool = var_6_int == var_277_int; // 0x254 Eq
	if(var_278_bool == 0) goto Label_613; // 0x255 JumpB
	var_279_string = ""; // 0x256 PushV
	var_279_string = "Neutral"; // 0x257 MovS
	func_173(var_7_bool, var_279_string); // 0x258 NEW_2
	var_280_int = 513429; // 0x25a PushI
	SetMessage(var_280_int); // 0x25b TObjFunc
	ClearReplies(); // 0x25d TObjFunc
	var_281_int = 513430; // 0x25f PushI
	var_282_int = 14667; // 0x260 PushI
	var_283_int = 14666; // 0x261 PushI
	AddReply(var_281_int, var_282_int, var_283_int); // 0x262 TObjFunc
	return 0; // 0x264 Return
	
Label_613:
	var_284_int = 14667; // 0x265 PushI
	var_285_bool = var_6_int == var_284_int; // 0x266 Eq
	if(var_285_bool == 0) goto Label_631; // 0x267 JumpB
	var_286_string = ""; // 0x268 PushV
	var_286_string = "Neutral"; // 0x269 MovS
	func_173(var_7_bool, var_286_string); // 0x26a NEW_2
	var_287_int = 513431; // 0x26c PushI
	SetMessage(var_287_int); // 0x26d TObjFunc
	ClearReplies(); // 0x26f TObjFunc
	var_288_int = 513432; // 0x271 PushI
	var_289_int = -1; // 0x272 PushI
	var_290_int = 14668; // 0x273 PushI
	AddReply(var_288_int, var_289_int, var_290_int); // 0x274 TObjFunc
	return 0; // 0x276 Return
	
Label_631:
	var_3_string = 1; // 0x277 TMovB
	var_291_bool = 0; // 0x278 PushV
	func_1248(var_291_bool); // 0x279 NEW_2
	if(var_291_bool == 0) goto Label_639; // 0x27b JumpB
	lshStopAnimation(); // 0x27c Func
	goto Label_641; // 0x27e Jump
	
Label_641:
	return 0; // 0x281 Return
	
Label_639:
	StopAnimation(); // 0x27f Func
	
Label_643:
	return 0; // 0x283 Return
}


task_2_event_0(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_object = Obj(); // 0x285 PushV
	var_8_object = var_6_object; // 0x286 Mov
	TaskCall(0); // 0x287 TaskCall
	func_0(var_9_object, var_7_int, var_8_object); // 0x288 NEW_2
	TaskReturn(); // 0x289 TaskReturn
	return 0; // 0x28b Return
}


task_2_event_26(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool, var_6_string)
{
	var_7_bool = 0; var_8_bool = 0; // 0x290 PushV
	var_9_string = "cleanup"; // 0x291 PushS
	var_10_bool = var_6_string == var_9_string; // 0x292 Eq
	if(var_10_bool == 0) goto Label_679; // 0x293 JumpB
	var_0_object = 1; // 0x294 TMovB
	IsLoaded(var_8_bool); // 0x295 Func
	var_11_bool = 0; // 0x297 PushV
	var_11_bool = 0; // 0x298 MovB
	var_12_bool = var_8_bool == 0; // 0x299 Not
	if(var_12_bool == 0) goto Label_672; // 0x29a JumpB
	var_13_bool = 0; // 0x29b PushV
	func_700(var_13_bool); // 0x29c NEW_2
	if(var_13_bool == 0) goto Label_672; // 0x29e JumpB
	var_11_bool = 1; // 0x29f MovB
	
Label_672:
	if(var_11_bool == 0) goto Label_678; // 0x2a0 JumpB
	var_14_object = Obj(); // 0x2a1 PushV
	func_960(var_14_object); // 0x2a2 NEW_2
	RemoveActor(var_14_object); // 0x2a4 Func
	
Label_678:
	goto Label_683; // 0x2a6 Jump
	
Label_683:
	return 2; // 0x2ab Return
	
Label_679:
	var_17_string = "restore"; // 0x2a7 PushS
	var_18_bool = var_6_string == var_17_string; // 0x2a8 Eq
	if(var_18_bool == 0) goto Label_683; // 0x2a9 JumpB
	var_0_object = 0; // 0x2aa TMovB
}


task_2_event_6(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	var_6_bool = 0; // 0x2ac PushV
	var_6_bool = 0; // 0x2ad MovB
	var_7_object = var_0_object; // 0x2ae PushT
	if(var_7_object == 0) goto Label_693; // 0x2af JumpB
	var_8_bool = 0; // 0x2b0 PushV
	func_700(var_8_bool); // 0x2b1 NEW_2
	if(var_8_bool == 0) goto Label_693; // 0x2b3 JumpB
	var_6_bool = 1; // 0x2b4 MovB
	
Label_693:
	if(var_6_bool == 0) goto Label_699; // 0x2b5 JumpB
	var_9_object = Obj(); // 0x2b6 PushV
	func_960(var_9_object); // 0x2b7 NEW_2
	RemoveActor(var_9_object); // 0x2b9 Func
	
Label_699:
	return 0; // 0x2bb Return
}


main(var_0_object, var_1_object, var_2_object, var_3_string, var_4_bool, var_5_bool)
{
	
Label_652:
	Hold(); // 0x28c Func
	goto Label_652; // 0x28e Jump
}


func_0(var_0_object, var_7_int, var_8_object)
{
	var_10_object = Obj(); var_11_bool = 0; var_12_int = 0; var_13_bool = 0; var_14_object = Obj(); var_15_bool = 0; var_16_int = 0; var_17_bool = 0; // 0x0 PushV
	var_0_object = var_8_object; // 0x1 TMov
	var_18_bool = 0; var_19_object = Obj(); // 0x2 PushV
	var_20_object = Obj(); // 0x3 PushV
	func_960(var_20_object); // 0x4 NEW_2
	var_19_object = var_20_object; // 0x5 Mov
	func_787(var_18_bool, var_19_object); // 0x7 NEW_2
	var_113_bool = 0; var_114_object = Obj(); var_115_float = 0; // 0x9 PushV
	var_114_object = var_8_object; // 0xa Mov
	var_115_float = 70.0; // 0xb MovF
	func_702(var_114_object, var_115_float); // 0xc NEW_2
	var_159_bool = var_113_bool == 0; // 0xe Not
	if(var_159_bool == 0) goto Label_18; // 0xf JumpB
	var_7_int = -2; // 0x10 MovI
	return 8; // 0x11 Return
	
Label_18:
	CreateDialog(var_14_object); // 0x12 Func
	var_160_int = 0; // 0x14 PushV
	func_1242(var_160_int); // 0x15 NEW_2
	SetNPCName(var_160_int); // 0x17 ObjFunc
	var_161_int = 0; // 0x19 PushV
	func_1240(var_161_int); // 0x1a NEW_2
	SetNPCDescription(var_161_int); // 0x1c ObjFunc
	var_162_string = ""; // 0x1e PushV
	func_1244(var_162_string); // 0x1f NEW_2
	SetPhoto(var_162_string); // 0x21 ObjFunc
	var_163_string = ""; // 0x23 PushV
	func_1246(var_163_string); // 0x24 NEW_2
	SetPhoto2(var_163_string); // 0x26 ObjFunc
	var_164_int = 0; // 0x28 PushV
	func_1223(var_164_int); // 0x29 NEW_2
	SetPlayerName(var_164_int); // 0x2b ObjFunc
	var_16_int = -1; // 0x2d MovI
	IsOverrideActive(var_15_bool); // 0x2e Func
	var_172_bool = var_15_bool; // 0x30 Push
	if(var_172_bool == 0) goto Label_52; // 0x31 JumpB
	var_7_int = -2; // 0x32 MovI
	return 8; // 0x33 Return
	
Label_52:
	DoDialog(var_14_object); // 0x34 Func
	var_173_object = Obj(); var_174_object = Obj(); // 0x36 PushV
	var_173_object = var_8_object; // 0x37 Mov
	var_174_object = var_14_object; // 0x38 Mov
	TaskCall(1); // 0x39 TaskCall
	func_81(var_175_object, var_176_object, var_177_string, var_178_bool, var_173_object, var_174_object); // 0x3a NEW_2
	TaskReturn(); // 0x3b TaskReturn
	IsDialogEnd(var_17_bool); // 0x3d ObjFunc
	
Label_63:
	var_245_bool = var_17_bool == 0; // 0x3f Not
	if(var_245_bool == 0) goto Label_70; // 0x40 JumpB
	sync(); // 0x41 Func
	IsDialogEnd(var_17_bool); // 0x43 ObjFunc
	goto Label_63; // 0x45 Jump
	
Label_70:
	var_246_object = Obj(); // 0x46 PushV
	var_246_object = var_8_object; // 0x47 Mov
	func_770(); // 0x48 NEW_2
	StopDialog(var_14_object); // 0x4a Func
	GetReturnValue(var_16_int); // 0x4c ObjFunc
	var_7_int = var_16_int; // 0x4e Mov
	return 8; // 0x4f Return
}


func_1025(var_73_int)
{
	var_74_float = 0; var_75_float = 0; // 0x401 PushV
	GetGameTime(var_75_float); // 0x402 Func
	var_76_int = 1; // 0x404 PushI
	var_77_int = 0; // 0x405 PushV
	var_78_int = 24; // 0x406 PushI
	var_77_int = var_75_float / var_75_float; // 0x407 Div2
	var_73_int = var_76_int + var_77_int; // 0x408 Add2
	return 2; // 0x409 Return
}


func_770()
{
	var_247_bool = 0; var_248_bool = 0; // 0x302 PushV
	CameraSwitchToNormal(); // 0x303 Func
	var_249_bool = 0; // 0x305 PushV
	func_1248(var_249_bool); // 0x306 NEW_2
	if(var_249_bool == 0) goto Label_778; // 0x308 JumpB
	goto Label_786; // 0x309 Jump
	
Label_786:
	return 2; // 0x312 Return
	
Label_778:
	var_250_string = "head"; // 0x30a PushS
	HasAnimationTrack(var_248_bool, var_250_string); // 0x30b Func
	var_251_bool = var_248_bool; // 0x30d Push
	if(var_251_bool == 0) goto Label_786; // 0x30e JumpB
	var_252_string = "head"; // 0x30f PushS
	UnlookAsync(var_252_string); // 0x310 Func
}


func_1156()
{
	var_81_object = Obj(); var_82_object = Obj(); // 0x484 PushV
	var_83_int = 125; // 0x485 PushI
	var_84_int = 2; // 0x486 PushI
	var_85_int = 513764; // 0x487 PushI
	CreateDiaryEntry(var_82_object, var_83_int, var_84_int, var_85_int); // 0x488 Func
	var_86_bool = 0; var_87_object = Obj(); var_88_int = 0; // 0x48a PushV
	var_87_object = var_82_object; // 0x48b Mov
	var_88_int = 124; // 0x48c MovI
	func_1195(var_86_bool, var_87_object, var_88_int); // 0x48d NEW_2
	return 2; // 0x48f Return
}


func_1034()
{
	var_65_string = "playsound"; // 0x40b PushS
	var_66_string = "giveitem"; // 0x40c PushS
	TriggerWorld(var_65_string, var_66_string); // 0x40d Func
	return 0; // 0x40f Return
}


func_1040()
{
	var_14_string = "d8q03"; // 0x411 PushS
	var_15_int = 1; // 0x412 PushI
	SetVariable(var_14_string, var_15_int); // 0x413 Func
	func_1143(); // 0x416 NEW_2
	return 0; // 0x418 Return
}


func_1169()
{
	var_95_object = Obj(); var_96_object = Obj(); // 0x491 PushV
	var_97_int = 126; // 0x492 PushI
	var_98_int = 2; // 0x493 PushI
	var_99_int = 513765; // 0x494 PushI
	CreateDiaryEntry(var_96_object, var_97_int, var_98_int, var_99_int); // 0x495 Func
	var_100_bool = 0; var_101_object = Obj(); var_102_int = 0; // 0x497 PushV
	var_101_object = var_96_object; // 0x498 Mov
	var_102_int = 124; // 0x499 MovI
	func_1195(var_100_bool, var_101_object, var_102_int); // 0x49a NEW_2
	return 2; // 0x49c Return
}


func_787(var_18_bool, var_19_object)
{
	var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_int = 0; // 0x313 PushV
	var_27_string = "voice_common"; // 0x314 PushS
	GetVariable(var_27_string, var_25_int); // 0x315 Func
	var_28_int = var_25_int; // 0x317 Push
	if(var_28_int == 0) goto Label_825; // 0x318 JumpB
	var_29_bool = 0; var_30_object = Obj(); // 0x319 PushV
	var_30_object = var_19_object; // 0x31a Mov
	func_845(var_30_object); // 0x31b NEW_2
	var_59_bool = var_29_bool == 0; // 0x31d Not
	if(var_59_bool == 0) goto Label_807; // 0x31e JumpB
	var_60_bool = 0; var_61_object = Obj(); // 0x31f PushV
	var_61_object = var_19_object; // 0x320 Mov
	func_882(var_61_object); // 0x321 NEW_2
	var_95_bool = var_60_bool == 0; // 0x323 Not
	if(var_95_bool == 0) goto Label_807; // 0x324 JumpB
	var_18_bool = 0; // 0x325 MovB
	return 4; // 0x326 Return
	
Label_807:
	var_96_int = 2; // 0x327 PushI
	irand(var_26_int, var_96_int); // 0x328 Func
	var_97_int = var_26_int; // 0x32a Push
	if(var_97_int == 0) goto Label_820; // 0x32b JumpB
	var_98_string = "voice_common"; // 0x32c PushS
	var_99_int = 1; // 0x32d PushI
	var_100_int = var_25_int + var_99_int; // 0x32e Add
	var_101_int = 3; // 0x32f PushI
	var_102_int = var_100_int / var_101_int; // 0x330 Mod
	SetVariable(var_98_string, var_102_int); // 0x331 Func
	goto Label_824; // 0x333 Jump
	
Label_824:
	goto Label_843; // 0x338 Jump
	
Label_843:
	var_18_bool = 1; // 0x34b MovB
	return 4; // 0x34c Return
	
Label_820:
	var_103_string = "voice_common"; // 0x334 PushS
	var_104_int = 0; // 0x335 PushI
	SetVariable(var_103_string, var_104_int); // 0x336 Func
	
Label_825:
	var_105_bool = 0; var_106_object = Obj(); // 0x339 PushV
	var_106_object = var_19_object; // 0x33a Mov
	func_882(var_106_object); // 0x33b NEW_2
	var_107_bool = var_105_bool == 0; // 0x33d Not
	if(var_107_bool == 0) goto Label_839; // 0x33e JumpB
	var_108_bool = 0; var_109_object = Obj(); // 0x33f PushV
	var_109_object = var_19_object; // 0x340 Mov
	func_845(var_109_object); // 0x341 NEW_2
	var_110_bool = var_108_bool == 0; // 0x343 Not
	if(var_110_bool == 0) goto Label_839; // 0x344 JumpB
	var_18_bool = 0; // 0x345 MovB
	return 4; // 0x346 Return
	
Label_839:
	var_111_string = "voice_common"; // 0x347 PushS
	var_112_int = 1; // 0x348 PushI
	SetVariable(var_111_string, var_112_int); // 0x349 Func
}


func_1049()
{
	var_79_string = "d8q03"; // 0x41a PushS
	var_80_int = 1000; // 0x41b PushI
	SetVariable(var_79_string, var_80_int); // 0x41c Func
	func_1156(); // 0x41f NEW_2
	return 0; // 0x421 Return
}


func_925(var_234_string)
{
	var_235_float = 0; var_236_float = 0; var_237_float = 0; var_238_float = 0; // 0x39d PushV
	lshGetAnimTimes(var_234_string, var_237_float, var_238_float); // 0x39e Func
	var_239_bool = 0; // 0x3a0 PushB
	lshPlayAnimation(var_237_float, var_238_float, var_239_bool); // 0x3a1 Func
	return 4; // 0x3a3 Return
}


func_1182(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj(); // 0x49e PushV
	GetDiaryRoot(var_32_object); // 0x49f Func
	var_33_bool = var_32_object == 0; // 0x4a1 Not
	if(var_33_bool == 0) goto Label_1192; // 0x4a2 JumpB
	var_34_string = "Can't retrieve diary root"; // 0x4a3 PushS
	Trace(var_34_string); // 0x4a4 Func
	var_30_object = 0; // 0x4a6 MovB
	return 2; // 0x4a7 Return
	
Label_1192:
	var_30_object = var_32_object; // 0x4a8 Mov
	return 2; // 0x4a9 Return
}


func_1058(var_39_object)
{
	var_41_string = "burah gives blood"; // 0x423 PushS
	Trace(var_41_string); // 0x424 Func
	var_42_object = Obj(); var_43_string = ""; var_44_int = 0; // 0x426 PushV
	var_42_object = var_39_object; // 0x427 Mov
	var_43_string = "d8q03_blood"; // 0x428 MovS
	var_44_int = 1; // 0x429 MovI
	func_1012(var_42_object, var_43_string, var_44_int); // 0x42a NEW_2
	return 0; // 0x42c Return
}


func_932(var_184_string, var_185_bool)
{
	var_188_float = 0; var_189_float = 0; var_190_float = 0; var_191_float = 0; // 0x3a4 PushV
	lshGetAnimTimes(var_184_string, var_190_float, var_191_float); // 0x3a5 Func
	lshPlayAnimation(var_190_float, var_191_float, var_185_bool); // 0x3a7 Func
	return 4; // 0x3a9 Return
}


func_938(var_52_bool, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0; // 0x3aa PushV
	var_56_bool = 0; // 0x3ab PushV
	func_1248(var_56_bool); // 0x3ac NEW_2
	if(var_56_bool == 0) goto Label_951; // 0x3ae JumpB
	lshHasSpeech(var_55_bool, var_53_string); // 0x3af Func
	var_57_bool = var_55_bool; // 0x3b1 Push
	if(var_57_bool == 0) goto Label_951; // 0x3b2 JumpB
	lshPlaySpeech(var_53_string); // 0x3b3 Func
	var_52_bool = 1; // 0x3b5 MovB
	return 2; // 0x3b6 Return
	
Label_951:
	var_52_bool = 0; // 0x3b7 MovB
	return 2; // 0x3b8 Return
}


func_1195(var_21_bool, var_22_object, var_23_int)
{
	var_24_object = Obj(); var_25_object = Obj(); var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_int = 0; // 0x4ab PushV
	var_30_object = Obj(); // 0x4ac PushV
	func_1182(var_30_object); // 0x4ad NEW_2
	var_27_object = var_30_object; // 0x4ae Mov
	Find(var_23_int, var_28_object); // 0x4b0 ObjFunc
	var_35_bool = var_28_object == 0; // 0x4b2 Not
	if(var_35_bool == 0) goto Label_1210; // 0x4b3 JumpB
	var_36_string = "Can't find diary parent with id: "; // 0x4b4 PushS
	var_37_int = var_36_string + var_23_int; // 0x4b5 Add
	Trace(var_37_int); // 0x4b6 Func
	var_21_bool = 0; // 0x4b8 MovB
	return 6; // 0x4b9 Return
	
Label_1210:
	AddChild(var_22_object); // 0x4ba ObjFunc
	var_38_int = 7; // 0x4bc PushI
	SendWorldWndMessage(var_38_int); // 0x4bd Func
	GetCategory(var_29_int); // 0x4bf ObjFunc
	SetDiarySection(var_29_int); // 0x4c1 Func
	var_21_bool = 0; // 0x4c3 MovB
	return 6; // 0x4c4 Return
}


func_173(var_2_object, var_180_string)
{
	var_181_bool = 0; // 0xae PushV
	func_1248(var_181_bool); // 0xaf NEW_2
	var_182_bool = var_181_bool == 0; // 0xb1 Not
	if(var_182_bool == 0) goto Label_180; // 0xb2 JumpB
	return 0; // 0xb3 Return
	
Label_180:
	var_183_bool = var_180_string == var_2_object; // 0xb4 Eq
	if(var_183_bool == 0) goto Label_183; // 0xb5 JumpB
	return 0; // 0xb6 Return
	
Label_183:
	var_184_string = ""; var_185_bool = 0; // 0xb7 PushV
	var_184_string = var_180_string; // 0xb8 Mov
	var_186_string = ""; // 0xb9 PushS
	var_187_bool = var_180_string == var_186_string; // 0xba Eq
	if(var_187_bool == 0) goto Label_190; // 0xbb JumpB
	var_185_bool = 0; // 0xbc MovB
	goto Label_191; // 0xbd Jump
	
Label_191:
	func_932(var_184_string, var_185_bool); // 0xbf NEW_2
	var_2_object = var_180_string; // 0xc1 TMov
	return 0; // 0xc2 Return
	
Label_190:
	var_185_bool = 1; // 0xbe MovB
}


func_1069()
{
	var_93_string = "d8q03"; // 0x42e PushS
	var_94_int = -1; // 0x42f PushI
	SetVariable(var_93_string, var_94_int); // 0x430 Func
	func_1169(); // 0x433 NEW_2
	return 0; // 0x435 Return
}


func_1078(var_69_object)
{
	var_71_string = "burah gives serum"; // 0x437 PushS
	Trace(var_71_string); // 0x438 Func
	var_72_object = Obj(); var_73_string = ""; var_74_int = 0; // 0x43a PushV
	var_72_object = var_69_object; // 0x43b Mov
	var_73_string = "burah_serum"; // 0x43c MovS
	var_74_int = 1; // 0x43d MovI
	func_1012(var_72_object, var_73_string, var_74_int); // 0x43e NEW_2
	return 0; // 0x440 Return
}


func_953()
{
	var_9_bool = 0; // 0x3b9 PushV
	func_1248(var_9_bool); // 0x3ba NEW_2
	if(var_9_bool == 0) goto Label_959; // 0x3bc JumpB
	lshStopSpeech(); // 0x3bd Func
	
Label_959:
	return 0; // 0x3bf Return
}


func_700(var_8_bool)
{
	var_8_bool = 1; // 0x2bc MovB
	return 0; // 0x2bd Return
}


func_702(var_113_bool, var_115_float)
{
	var_116_float = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_cvector = CVector(0,0,0); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_bool = 0; var_124_bool = 0; var_125_float = 0; var_126_cvector = CVector(0,0,0); var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_bool = 0; var_133_bool = 0; // 0x2be PushV
	GetPosition(var_126_cvector); // 0x2bf ObjFunc
	GetEyesHeight(var_125_float); // 0x2c1 ObjFunc
	var_134_float = GetByIndex(var_126_cvector, 1); // 0x2c3 PushE
	var_134_float = var_134_float + var_125_float; // 0x2c4 Add2
	SetByIndex(var_126_cvector, 1) = var_134_float; // 0x2c5 PopE
	GetPosition(var_127_cvector); // 0x2c6 Func
	GetEyesHeight(var_125_float); // 0x2c8 Func
	var_135_float = GetByIndex(var_127_cvector, 1); // 0x2ca PushE
	var_135_float = var_135_float + var_125_float; // 0x2cb Add2
	SetByIndex(var_127_cvector, 1) = var_135_float; // 0x2cc PopE
	var_128_cvector = var_126_cvector - var_127_cvector; // 0x2cd Sub2
	var_136_float = GetByIndex(var_128_cvector, 1); // 0x2ce PushE
	var_136_float = 0; // 0x2cf MovI
	SetByIndex(var_128_cvector, 1) = var_136_float; // 0x2d0 PopE
	var_137_int = var_128_cvector | var_128_cvector; // 0x2d1 Or
	var_138_float = sqrt(var_137_int); // 0x2d2 Sqrt
	var_128_cvector = var_128_cvector / var_128_cvector; // 0x2d3 Div2
	var_129_cvector = -var_128_cvector; // 0x2d4 Neg2
	var_139_float = var_128_cvector * var_115_float; // 0x2d5 Mult
	var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); // 0x2d6 PushV
	var_142_cvector = CVector(0.0, 1.0, 0.0); // 0x2d7 PushVec
	var_141_cvector = var_129_cvector ^ var_142_cvector; // 0x2d8 Xor2
	func_966(var_140_cvector, var_141_cvector); // 0x2d9 NEW_2
	var_148_int = 25; // 0x2db PushI
	var_149_float = var_140_cvector * var_148_int; // 0x2dc Mult
	var_150_int = var_139_float + var_149_float; // 0x2dd Add
	var_151_cvector = CVector(0.0, 10.0, 0.0); // 0x2de PushVec
	var_130_cvector = var_150_int - var_151_cvector; // 0x2df Sub2
	var_131_cvector = var_127_cvector + var_130_cvector; // 0x2e0 Add2
	IsOverrideActive(var_132_bool); // 0x2e1 Func
	var_152_bool = var_132_bool; // 0x2e3 Push
	if(var_152_bool == 0) goto Label_743; // 0x2e4 JumpB
	var_113_bool = 0; // 0x2e5 MovB
	return 18; // 0x2e6 Return
	
Label_743:
	StopWorld(); // 0x2e7 Func
	CameraTransit(var_131_cvector, var_129_cvector); // 0x2e9 Func
	var_153_float = GetByIndex(var_130_cvector, 0); // 0x2eb PushE
	var_154_float = GetByIndex(var_130_cvector, 2); // 0x2ec PushE
	Rotate(var_153_float, var_154_float); // 0x2ed Func
	var_155_bool = 0; // 0x2ef PushV
	func_1248(var_155_bool); // 0x2f0 NEW_2
	if(var_155_bool == 0) goto Label_756; // 0x2f2 JumpB
	goto Label_764; // 0x2f3 Jump
	
Label_764:
	CameraWaitForPlayFinish(); // 0x2fc Func
	ResumeWorld(); // 0x2fe Func
	var_113_bool = 1; // 0x300 MovB
	return 18; // 0x301 Return
	
Label_756:
	var_156_string = "head"; // 0x2f4 PushS
	HasAnimationTrack(var_133_bool, var_156_string); // 0x2f5 Func
	var_157_bool = var_133_bool; // 0x2f7 Push
	if(var_157_bool == 0) goto Label_764; // 0x2f8 JumpB
	var_158_string = "head"; // 0x2f9 PushS
	LookAsyncCamera(var_158_string); // 0x2fa Func
}


func_960(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj(); // 0x3c0 PushV
	self(var_11_object); // 0x3c1 Func
	var_9_object = var_11_object; // 0x3c3 Mov
	return 2; // 0x3c4 Return
}


func_1089()
{
	var_107_string = "ood8Burah1"; // 0x442 PushS
	var_108_int = 1; // 0x443 PushI
	SetVariable(var_107_string, var_108_int); // 0x444 Func
	return 0; // 0x446 Return
}


func_966(var_140_cvector, var_141_cvector)
{
	var_143_float = 0; var_144_float = 0; // 0x3c6 PushV
	var_145_int = var_141_cvector | var_141_cvector; // 0x3c7 Or
	var_144_float = sqrt(var_145_int); // 0x3c8 Sqrt2
	var_146_float = 0.0; // 0x3c9 PushF
	var_147_bool = var_144_float < var_146_float; // 0x3ca LT
	if(var_147_bool == 0) goto Label_974; // 0x3cb JumpB
	var_140_cvector = CVector(0.0, 0.0, 0.0); // 0x3cc MovV
	return 2; // 0x3cd Return
	
Label_974:
	var_140_cvector = var_141_cvector / var_141_cvector; // 0x3ce Div2
	return 2; // 0x3cf Return
}


func_1223(var_164_int)
{
	var_165_int = 0; var_166_int = 0; // 0x4c7 PushV
	var_167_string = "branch"; // 0x4c8 PushS
	GetVariable(var_167_string, var_166_int); // 0x4c9 Func
	var_168_int = 0; // 0x4cb PushI
	var_169_bool = var_166_int == var_168_int; // 0x4cc Eq
	if(var_169_bool == 0) goto Label_1233; // 0x4cd JumpB
	var_164_int = 1; // 0x4ce MovI
	return 2; // 0x4cf Return
	
Label_1233:
	var_170_int = 1; // 0x4d1 PushI
	var_171_bool = var_166_int == var_170_int; // 0x4d2 Eq
	if(var_171_bool == 0) goto Label_1238; // 0x4d3 JumpB
	var_164_int = 2; // 0x4d4 MovI
	return 2; // 0x4d5 Return
	
Label_1238:
	var_164_int = 3; // 0x4d6 MovI
	return 2; // 0x4d7 Return
}


func_1095(var_193_bool)
{
	var_195_int = 0; var_196_string = ""; // 0x448 PushV
	var_196_string = "d8q03"; // 0x449 MovS
	func_976(var_195_int, var_196_string); // 0x44a NEW_2
	var_199_int = 0; // 0x44c PushI
	var_200_bool = var_195_int == var_199_int; // 0x44d Eq
	if(var_200_bool == 0) goto Label_1105; // 0x44e JumpB
	var_193_bool = 1; // 0x44f MovB
	return 0; // 0x450 Return
	
Label_1105:
	var_193_bool = 0; // 0x451 MovB
	return 0; // 0x452 Return
}


func_845(var_29_bool)
{
	var_31_string = ""; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_string = ""; var_36_string = ""; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_string = ""; // 0x34d PushV
	var_36_string = "c"; // 0x34e MovS
	var_37_int = 0; // 0x34f MovI
	
Label_848:
	var_41_int = 1; // 0x350 PushI
	if(var_41_int == 0) goto Label_861; // 0x351 JumpB
	var_42_int = 1; // 0x352 PushI
	var_43_int = var_37_int + var_42_int; // 0x353 Add
	var_44_int = var_36_string + var_43_int; // 0x354 Add
	HasProperty(var_44_int, var_38_bool); // 0x355 ObjFunc
	var_45_bool = var_38_bool == 0; // 0x357 Not
	if(var_45_bool == 0) goto Label_858; // 0x358 JumpB
	goto Label_861; // 0x359 Jump
	
Label_861:
	var_46_bool = var_37_int == 0; // 0x35d Not
	if(var_46_bool == 0) goto Label_865; // 0x35e JumpB
	var_29_bool = 0; // 0x35f MovB
	return 10; // 0x360 Return
	
Label_865:
	var_39_int = 0; // 0x361 MovI
	var_47_int = 1; // 0x362 PushI
	var_48_bool = var_37_int > var_47_int; // 0x363 GT
	if(var_48_bool == 0) goto Label_871; // 0x364 JumpB
	irand(var_39_int, var_37_int); // 0x365 Func
	
Label_871:
	var_49_int = 1; // 0x367 PushI
	var_50_int = var_39_int + var_49_int; // 0x368 Add
	var_51_int = var_36_string + var_50_int; // 0x369 Add
	GetProperty(var_51_int, var_40_string); // 0x36a ObjFunc
	var_52_bool = 0; var_53_string = ""; // 0x36c PushV
	var_53_string = var_40_string; // 0x36d Mov
	func_938(var_52_bool, var_53_string); // 0x36e NEW_2
	var_29_bool = var_52_bool; // 0x36f Mov
	return 10; // 0x371 Return
	
Label_858:
	var_58_int = 1; // 0x35a PushI
	var_37_int = var_37_int + var_58_int; // 0x35b Add2
	goto Label_848; // 0x35c Jump
}


func_976(var_195_int, var_196_string)
{
	var_197_int = 0; var_198_int = 0; // 0x3d0 PushV
	GetVariable(var_196_string, var_198_int); // 0x3d1 Func
	var_195_int = var_198_int; // 0x3d3 Mov
	return 2; // 0x3d4 Return
}


func_81(var_0_object, var_1_object, var_2_object, var_3_string, var_173_object, var_174_object)
{
	var_0_object = var_174_object; // 0x52 TMov
	var_1_object = var_173_object; // 0x53 TMov
	var_3_string = 0; // 0x54 TMovB
	var_179_int = 1; // 0x55 PushI
	if(var_179_int == 0) goto Label_143; // 0x56 JumpB
	var_180_string = ""; // 0x57 PushV
	var_180_string = "Neutral"; // 0x58 MovS
	func_173(var_174_object, var_180_string); // 0x59 NEW_2
	var_192_int = 513423; // 0x5b PushI
	SetMessage(var_192_int); // 0x5c TObjFunc
	ClearReplies(); // 0x5e TObjFunc
	var_193_bool = 0; var_194_object = Obj(); // 0x60 PushV
	var_194_object = var_1_object; // 0x61 MovT
	func_1095(var_194_object); // 0x62 NEW_2
	if(var_193_bool == 0) goto Label_106; // 0x64 JumpB
	var_201_int = 513424; // 0x65 PushI
	var_202_int = 14661; // 0x66 PushI
	var_203_int = 14660; // 0x67 PushI
	AddReply(var_201_int, var_202_int, var_203_int); // 0x68 TObjFunc
	
Label_106:
	var_204_bool = 0; // 0x6a PushV
	var_204_bool = 0; // 0x6b MovB
	var_205_bool = 0; var_206_object = Obj(); // 0x6c PushV
	var_206_object = var_1_object; // 0x6d MovT
	func_1107(var_206_object); // 0x6e NEW_2
	if(var_205_bool == 0) goto Label_119; // 0x70 JumpB
	var_211_bool = 0; var_212_object = Obj(); // 0x71 PushV
	var_212_object = var_1_object; // 0x72 MovT
	func_1119(var_212_object); // 0x73 NEW_2
	if(var_211_bool == 0) goto Label_119; // 0x75 JumpB
	var_204_bool = 1; // 0x76 MovB
	
Label_119:
	if(var_204_bool == 0) goto Label_125; // 0x77 JumpB
	var_217_int = 513447; // 0x78 PushI
	var_218_int = 14684; // 0x79 PushI
	var_219_int = 14683; // 0x7a PushI
	AddReply(var_217_int, var_218_int, var_219_int); // 0x7b TObjFunc
	
Label_125:
	var_220_bool = 0; var_221_object = Obj(); // 0x7d PushV
	var_221_object = var_1_object; // 0x7e MovT
	func_1131(var_221_object); // 0x7f NEW_2
	if(var_220_bool == 0) goto Label_135; // 0x81 JumpB
	var_226_int = 513433; // 0x82 PushI
	var_227_int = 14670; // 0x83 PushI
	var_228_int = 14669; // 0x84 PushI
	AddReply(var_226_int, var_227_int, var_228_int); // 0x85 TObjFunc
	
Label_135:
	var_229_int = 513460; // 0x87 PushI
	var_230_int = -1; // 0x88 PushI
	var_231_int = 14697; // 0x89 PushI
	AddReply(var_229_int, var_230_int, var_231_int); // 0x8a TObjFunc
	goto Label_143; // 0x8c Jump
	
Label_143:
	var_232_bool = 0; // 0x8f PushV
	func_1248(var_232_bool); // 0x90 NEW_2
	if(var_232_bool == 0) goto Label_158; // 0x92 JumpB
	
Label_147:
	lshWaitForAnimEnd(); // 0x93 Func
	var_233_string = var_3_string; // 0x95 PushT
	if(var_233_string == 0) goto Label_152; // 0x96 JumpB
	goto Label_157; // 0x97 Jump
	
Label_157:
	goto Label_172; // 0x9d Jump
	
Label_172:
	return 0; // 0xac Return
	
Label_152:
	var_234_string = ""; // 0x98 PushV
	var_234_string = var_2_object; // 0x99 MovT
	func_925(var_234_string); // 0x9a NEW_2
	goto Label_147; // 0x9c Jump
	
Label_158:
	var_240_string = "all"; // 0x9e PushS
	var_241_string = "idle"; // 0x9f PushS
	PlayAnimation(var_240_string, var_241_string); // 0xa0 Func
	
Label_162:
	WaitForAnimEnd(); // 0xa2 Func
	var_242_string = var_3_string; // 0xa4 PushT
	if(var_242_string == 0) goto Label_167; // 0xa5 JumpB
	goto Label_172; // 0xa6 Jump
	
Label_167:
	var_243_string = "all"; // 0xa7 PushS
	var_244_string = "idle"; // 0xa8 PushS
	PlayAnimation(var_243_string, var_244_string); // 0xa9 Func
	goto Label_162; // 0xab Jump
}


func_1107(var_205_bool)
{
	var_207_int = 0; var_208_string = ""; // 0x454 PushV
	var_208_string = "microscope_d8q03_blood"; // 0x455 MovS
	func_976(var_207_int, var_208_string); // 0x456 NEW_2
	var_209_int = 1; // 0x458 PushI
	var_210_bool = var_207_int == var_209_int; // 0x459 Eq
	if(var_210_bool == 0) goto Label_1117; // 0x45a JumpB
	var_205_bool = 1; // 0x45b MovB
	return 0; // 0x45c Return
	
Label_1117:
	var_205_bool = 0; // 0x45d MovB
	return 0; // 0x45e Return
}


func_981(var_58_int, var_59_int)
{
	var_60_object = Obj(); var_61_object = Obj(); // 0x3d5 PushV
	CreateIntVector(var_61_object); // 0x3d6 Func
	add(var_58_int); // 0x3d8 ObjFunc
	add(var_59_int); // 0x3da ObjFunc
	var_62_int = 3; // 0x3dc PushI
	SendWorldWndMessage(var_62_int, var_61_object); // 0x3dd Func
	return 2; // 0x3df Return
}


func_1240(var_161_int)
{
	var_161_int = 515592; // 0x4d8 MovI
	return 0; // 0x4d9 Return
}


func_1242(var_160_int)
{
	var_160_int = 511961; // 0x4da MovI
	return 0; // 0x4db Return
}


func_1244(var_162_string)
{
	var_162_string = "ui/NPC_Burah.png"; // 0x4dc MovS
	return 0; // 0x4dd Return
}


func_1246(var_163_string)
{
	var_163_string = "ui/NPC_Burah_b.png"; // 0x4de MovS
	return 0; // 0x4df Return
}


func_1119(var_211_bool)
{
	var_213_int = 0; var_214_string = ""; // 0x460 PushV
	var_214_string = "d8q03"; // 0x461 MovS
	func_976(var_213_int, var_214_string); // 0x462 NEW_2
	var_215_int = 1; // 0x464 PushI
	var_216_bool = var_213_int == var_215_int; // 0x465 Eq
	if(var_216_bool == 0) goto Label_1129; // 0x466 JumpB
	var_211_bool = 1; // 0x467 MovB
	return 0; // 0x468 Return
	
Label_1129:
	var_211_bool = 0; // 0x469 MovB
	return 0; // 0x46a Return
}


func_1248(var_56_bool)
{
	var_56_bool = 1; // 0x4e0 MovB
	return 0; // 0x4e1 Return
}


func_993(var_48_object, var_49_int)
{
	var_50_int = 0; var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; // 0x3e1 PushV
	GetItemID(var_53_int); // 0x3e2 ObjFunc
	var_56_string = "Category"; // 0x3e4 PushS
	GetInvItemProperty(var_54_int, var_53_int, var_56_string); // 0x3e5 Func
	AddItem(var_55_bool, var_48_object, var_54_int, var_49_int); // 0x3e7 ObjFunc
	var_57_bool = var_55_bool == 0; // 0x3e9 Not
	if(var_57_bool == 0) goto Label_1006; // 0x3ea JumpB
	DropItems(var_48_object, var_49_int); // 0x3eb ObjFunc
	goto Label_1011; // 0x3ed Jump
	
Label_1011:
	return 6; // 0x3f3 Return
	
Label_1006:
	var_58_int = 0; var_59_int = 0; // 0x3ee PushV
	var_58_int = var_53_int; // 0x3ef Mov
	var_59_int = var_49_int; // 0x3f0 Mov
	func_981(var_58_int, var_59_int); // 0x3f1 NEW_2
}


func_1131(var_220_bool)
{
	var_222_int = 0; var_223_string = ""; // 0x46c PushV
	var_223_string = "ood8Burah1"; // 0x46d MovS
	func_976(var_222_int, var_223_string); // 0x46e NEW_2
	var_224_int = 0; // 0x470 PushI
	var_225_bool = var_222_int == var_224_int; // 0x471 Eq
	if(var_225_bool == 0) goto Label_1141; // 0x472 JumpB
	var_220_bool = 1; // 0x473 MovB
	return 0; // 0x474 Return
	
Label_1141:
	var_220_bool = 0; // 0x475 MovB
	return 0; // 0x476 Return
}


func_882(var_60_bool)
{
	var_62_string = ""; var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_string = ""; var_67_string = ""; var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_string = ""; // 0x372 PushV
	var_72_string = "d"; // 0x373 PushS
	var_73_int = 0; // 0x374 PushV
	func_1025(var_73_int); // 0x375 NEW_2
	var_79_int = var_72_string + var_73_int; // 0x377 Add
	var_80_string = "m"; // 0x378 PushS
	var_67_string = var_79_int + var_80_string; // 0x379 Add2
	var_68_int = 0; // 0x37a MovI
	
Label_891:
	var_81_int = 1; // 0x37b PushI
	if(var_81_int == 0) goto Label_904; // 0x37c JumpB
	var_82_int = 1; // 0x37d PushI
	var_83_int = var_68_int + var_82_int; // 0x37e Add
	var_84_int = var_67_string + var_83_int; // 0x37f Add
	HasProperty(var_84_int, var_69_bool); // 0x380 ObjFunc
	var_85_bool = var_69_bool == 0; // 0x382 Not
	if(var_85_bool == 0) goto Label_901; // 0x383 JumpB
	goto Label_904; // 0x384 Jump
	
Label_904:
	var_86_bool = var_68_int == 0; // 0x388 Not
	if(var_86_bool == 0) goto Label_908; // 0x389 JumpB
	var_60_bool = 0; // 0x38a MovB
	return 10; // 0x38b Return
	
Label_908:
	var_70_int = 0; // 0x38c MovI
	var_87_int = 1; // 0x38d PushI
	var_88_bool = var_68_int > var_87_int; // 0x38e GT
	if(var_88_bool == 0) goto Label_914; // 0x38f JumpB
	irand(var_70_int, var_68_int); // 0x390 Func
	
Label_914:
	var_89_int = 1; // 0x392 PushI
	var_90_int = var_70_int + var_89_int; // 0x393 Add
	var_91_int = var_67_string + var_90_int; // 0x394 Add
	GetProperty(var_91_int, var_71_string); // 0x395 ObjFunc
	var_92_bool = 0; var_93_string = ""; // 0x397 PushV
	var_93_string = var_71_string; // 0x398 Mov
	func_938(var_92_bool, var_93_string); // 0x399 NEW_2
	var_60_bool = var_92_bool; // 0x39a Mov
	return 10; // 0x39c Return
	
Label_901:
	var_94_int = 1; // 0x385 PushI
	var_68_int = var_68_int + var_94_int; // 0x386 Add2
	goto Label_891; // 0x387 Jump
}


func_1012(var_42_object, var_43_string, var_44_int)
{
	var_45_object = Obj(); var_46_object = Obj(); // 0x3f4 PushV
	CreateInvItem(var_46_object); // 0x3f5 Func
	SetItemName(var_43_string); // 0x3f7 ObjFunc
	var_47_object = Obj(); var_48_object = Obj(); var_49_int = 0; // 0x3f9 PushV
	var_47_object = var_42_object; // 0x3fa Mov
	var_48_object = var_46_object; // 0x3fb Mov
	var_49_int = var_44_int; // 0x3fc Mov
	func_993(var_48_object, var_49_int); // 0x3fd NEW_2
	return 2; // 0x3ff Return
}


func_1143()
{
	var_16_object = Obj(); var_17_object = Obj(); // 0x477 PushV
	var_18_int = 124; // 0x478 PushI
	var_19_int = 2; // 0x479 PushI
	var_20_int = 513763; // 0x47a PushI
	CreateDiaryEntry(var_17_object, var_18_int, var_19_int, var_20_int); // 0x47b Func
	var_21_bool = 0; var_22_object = Obj(); var_23_int = 0; // 0x47d PushV
	var_22_object = var_17_object; // 0x47e Mov
	var_23_int = -1; // 0x47f MovI
	func_1195(var_21_bool, var_22_object, var_23_int); // 0x480 NEW_2
	return 2; // 0x482 Return
}


